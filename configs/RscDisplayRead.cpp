class RscDisplayRead
{
	closeOnMissionEnd = 0;
	enableSimulation = 1;
	idd = 2035;
	onLoad = "[""onLoad"",_this,""RscDisplayRead"",'OrangeDisplays'] call 	(uinamespace getvariable 'BIS_fnc_initDisplay')";
	onUnload = "[""onUnload"",_this,""RscDisplayRead"",'OrangeDisplays'] call 	(uinamespace getvariable 'BIS_fnc_initDisplay')";
	scriptName = "RscDisplayRead";
	scriptPath = "OrangeDisplays";
	class Controls
	{
		class ButtonClose: RscButtonMenuCancel
		{
			h = "(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			show = 0;
			text = "Close";
			w = "(	6 - 0.1) * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			x = "safezoneX + safezoneW - (	6 + 1) * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			y = "safezoneY + safezoneH - 2 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
		};
		class ButtonShowText: RscButtonMenu
		{
			h = "(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = 1004;
			onButtonClick = "				_display = ctrlparent (_this select 0);				{					_ctrl = _display displayctrl _x;					_ctrl ctrlsetfade floor ((ctrlfade _ctrl + 1) % 2);					_ctrl ctrlcommit 0.1;				} foreach [1002,1003];			";
			show = 0;
			text = "Read";
			w = "(	6 - 0.1) * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			x = "safezoneX + safezoneW - (2 * 	6 + 1) * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			y = "safezoneY + safezoneH - 2 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
		};
		class Picture: RscPictureKeepAspect
		{
			h = "safezoneH - 2 * 	5 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = 1001;
			text = "#(argb,8,8,3)color(1,0,0,0.2)";
			w = "safezoneW - 2 * 	5 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			x = "safezoneX + 	5 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			y = "safezoneY + 	5 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
		};
		class TextBackground: RscText
		{
			colorBackground[] = {0, 0, 0, 0.7};
			fade = 1;
			h = "safezoneH";
			idc = 1002;
			w = "safezoneW";
			x = "safezoneX";
			y = "safezoneY";
		};
		class TextGroup: RscControlsGroup
		{
			fade = 1;
			h = "safezoneH - 2 * 	5 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = 1003;
			w = "safezoneH - 2 * 	5 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			x = "0.5 - 0.5 * (safezoneH - 2 * 	5 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25))";
			y = "safezoneY + 	5 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			class Controls
			{
				class Text: RscStructuredText
				{
					h = "safezoneH - 2 * 	5 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					idc = 1005;
					w = "safezoneH - 2 * 	5 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					x = 0;
					y = 0;
				};
			};
		};
	};
};
