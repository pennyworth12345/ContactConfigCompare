class RscFunctionsViewer
{
	enableSimulation = 0;
	idd = 2929;
	movingEnable = 1;
	onLoad = "[""onLoad"",_this,""RscFunctionsViewer"",'GUI'] call 	(uinamespace getvariable 'BIS_fnc_initDisplay')";
	onUnload = "[""onUnload"",_this,""RscFunctionsViewer"",'GUI'] call 	(uinamespace getvariable 'BIS_fnc_initDisplay')";
	scriptName = "RscFunctionsViewer";
	scriptPath = "GUI";
	class controls
	{
		class btnCopy: RscShortcutButton
		{
			action = "copytoclipboard ctrltext ((uinamespace getvariable 'help_display') displayctrl 292908); (uinamespace getvariable 'help_code');";
			h = "1 * 							(		(		((safezoneW / safezoneH) min 1.2) / 1.2) / 20)";
			idc = 292909;
			shortcuts[] = {"0x00050000 + 0"};
			text = "Copy";
			w = "10 * 							(		((safezoneW / safezoneH) min 1.2) / 32)";
			x = "21 * 							(		((safezoneW / safezoneH) min 1.2) / 32) + 				(safezoneX + (safezoneW - 			((safezoneW / safezoneH) min 1.2))/2)";
			y = "safezoneY + safezoneH - 2 * 							(		(		((safezoneW / safezoneH) min 1.2) / 1.2) / 20)";
		};
		class btnErrors: RscShortcutButton
		{
			h = "1 * 							(		(		((safezoneW / safezoneH) min 1.2) / 1.2) / 20)";
			idc = 1704;
			shortcuts[] = {"0x00050000 + 2"};
			text = "Show Errors";
			w = "10 * 							(		((safezoneW / safezoneH) min 1.2) / 32)";
			x = "21 * 							(		((safezoneW / safezoneH) min 1.2) / 32) + 				(safezoneX + (safezoneW - 			((safezoneW / safezoneH) min 1.2))/2)";
			y = "safezoneY + safezoneH - 3 * 							(		(		((safezoneW / safezoneH) min 1.2) / 1.2) / 20)";
		};
		class btnRecompileAll: RscShortcutButton
		{
			action = "with uinamespace do {[1] call bis_fnc_recompile;};";
			h = "1 * 							(		(		((safezoneW / safezoneH) min 1.2) / 1.2) / 20)";
			idc = 292912;
			shortcuts[] = {"0x00050000 + 2"};
			text = "Recompile All";
			w = "10 * 							(		((safezoneW / safezoneH) min 1.2) / 32)";
			x = "11 * 							(		((safezoneW / safezoneH) min 1.2) / 32) + 				(safezoneX + (safezoneW - 			((safezoneW / safezoneH) min 1.2))/2)";
			y = "safezoneY + safezoneH - 2 * 							(		(		((safezoneW / safezoneH) min 1.2) / 1.2) / 20)";
		};
		class btnRecompileFile: RscShortcutButton
		{
			action = "with uinamespace do {_list = (uinamespace getvariable 'help_display') displayctrl 292901; _fncName = _list lbtext (lbcursel _list); [_fcnName] call bis_fnc_recompile;};";
			h = "1 * 							(		(		((safezoneW / safezoneH) min 1.2) / 1.2) / 20)";
			idc = 292911;
			shortcuts[] = {"0x00050000 + 3"};
			text = "Recompile";
			w = "10 * 							(		((safezoneW / safezoneH) min 1.2) / 32)";
			x = "11 * 							(		((safezoneW / safezoneH) min 1.2) / 32) + 				(safezoneX + (safezoneW - 			((safezoneW / safezoneH) min 1.2))/2)";
			y = "safezoneY + safezoneH - 3 * 							(		(		((safezoneW / safezoneH) min 1.2) / 1.2) / 20)";
		};
		class ButtonCancel: RscShortcutButton
		{
			h = "1 * 							(		(		((safezoneW / safezoneH) min 1.2) / 1.2) / 20)";
			idc = 2;
			shortcuts[] = {"0x00050000 + 1"};
			text = "Back";
			w = "10 * 							(		((safezoneW / safezoneH) min 1.2) / 32)";
			x = "1 * 							(		((safezoneW / safezoneH) min 1.2) / 32) + 				(safezoneX + (safezoneW - 			((safezoneW / safezoneH) min 1.2))/2)";
			y = "safezoneY + safezoneH - 2 * 							(		(		((safezoneW / safezoneH) min 1.2) / 1.2) / 20)";
		};
		class CA_Title_Picture: RscPicture
		{
			h = "1 * 							(		(		((safezoneW / safezoneH) min 1.2) / 1.2) / 20)";
			idc = 1200;
			text = "A3\ui_f\data\gui\rsc\rscdisplayarcademap\icon_functions_ca.paa";
			w = "1 * 							(		((safezoneW / safezoneH) min 1.2) / 32)";
			x = "1 * 							(		((safezoneW / safezoneH) min 1.2) / 32) + 				(safezoneX + (safezoneW - 			((safezoneW / safezoneH) min 1.2))/2)";
			y = "1 * 							(		(		((safezoneW / safezoneH) min 1.2) / 1.2) / 20) + 		(safezoneY)";
		};
		class Caption: CA_Title
		{
			h = "1 * 							(		(		((safezoneW / safezoneH) min 1.2) / 1.2) / 20)";
			idc = 1001;
			moving = 1;
			text = "Functions Viewer";
			w = "9 * 							(		((safezoneW / safezoneH) min 1.2) / 32)";
			x = "2 * 							(		((safezoneW / safezoneH) min 1.2) / 32) + 				(safezoneX + (safezoneW - 			((safezoneW / safezoneH) min 1.2))/2)";
			y = "1 * 							(		(		((safezoneW / safezoneH) min 1.2) / 1.2) / 20) + 		(safezoneY)";
		};
		class fncCode: RscEdit
		{
			colorBackground[] = {0, 0, 0, 0};
			colorText[] = {1, 1, 1, 1};
			font = "RobotoCondensed";
			h = "safezoneH - 11 * 							(		(		((safezoneW / safezoneH) min 1.2) / 1.2) / 20)";
			idc = 292908;
			linespacing = 1;
			sizeEx = "(			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 0.8)";
			style = "0x00 + 0x10";
			w = "19 * 							(		((safezoneW / safezoneH) min 1.2) / 32)";
			x = "11.5 * 							(		((safezoneW / safezoneH) min 1.2) / 32) + 				(safezoneX + (safezoneW - 			((safezoneW / safezoneH) min 1.2))/2)";
			y = "7.5 * 							(		(		((safezoneW / safezoneH) min 1.2) / 1.2) / 20) + 		(safezoneY)";
		};
		class fncDescription: fncTitle
		{
			h = "4 * 							(		(		((safezoneW / safezoneH) min 1.2) / 1.2) / 20)";
			idc = 292907;
			linespacing = 1;
			sizeEx = "(			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 0.8)";
			style = "0x00 + 0x10";
			w = "19 * 							(		((safezoneW / safezoneH) min 1.2) / 32)";
			x = "11.5 * 							(		((safezoneW / safezoneH) min 1.2) / 32) + 				(safezoneX + (safezoneW - 			((safezoneW / safezoneH) min 1.2))/2)";
			y = "3 * 							(		(		((safezoneW / safezoneH) min 1.2) / 1.2) / 20) + 		(safezoneY)";
		};
		class fncPath: RscText
		{
			colorText[] = {1, 1, 1, 0.7};
			h = "0.5 * 							(		(		((safezoneW / safezoneH) min 1.2) / 1.2) / 20)";
			idc = 292906;
			sizeEx = "(			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 0.8) * 0.9";
			w = "19.5 * 							(		((safezoneW / safezoneH) min 1.2) / 32)";
			x = "11.5 * 							(		((safezoneW / safezoneH) min 1.2) / 32) + 				(safezoneX + (safezoneW - 			((safezoneW / safezoneH) min 1.2))/2)";
			y = "2 * 							(		(		((safezoneW / safezoneH) min 1.2) / 1.2) / 20) + 		(safezoneY)";
		};
		class fncTitle: CA_Title
		{
			h = "1 * 							(		(		((safezoneW / safezoneH) min 1.2) / 1.2) / 20)";
			idc = 292905;
			w = "20 * 							(		((safezoneW / safezoneH) min 1.2) / 32)";
			x = "11 * 							(		((safezoneW / safezoneH) min 1.2) / 32) + 				(safezoneX + (safezoneW - 			((safezoneW / safezoneH) min 1.2))/2)";
			y = "1 * 							(		(		((safezoneW / safezoneH) min 1.2) / 1.2) / 20) + 		(safezoneY)";
		};
		class TreeCats: TreeFunctions
		{
			h = "safezoneH - 15.5 * 							(		(		((safezoneW / safezoneH) min 1.2) / 1.2) / 20)";
			idc = 292904;
			w = "9 * 							(		((safezoneW / safezoneH) min 1.2) / 32)";
			wholeHeight = 0.21;
			x = "1.5 * 							(		((safezoneW / safezoneH) min 1.2) / 32) + 				(safezoneX + (safezoneW - 			((safezoneW / safezoneH) min 1.2))/2)";
			y = "7 * 							(		(		((safezoneW / safezoneH) min 1.2) / 1.2) / 20) + 		(safezoneY)";
		};
		class TreeFunctions: RscListBox
		{
			h = "5.5 * 							(		(		((safezoneW / safezoneH) min 1.2) / 1.2) / 20)";
			idc = 292901;
			onKeyDown = "if ((_this select 1) == 46 && (_this select 3)) then {copytoclipboard ((_this select 0) lbtext (lbcursel (_this select 0)))}";
			sizeEx = "(			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 0.8)";
			style = 0;
			w = "9 * 							(		((safezoneW / safezoneH) min 1.2) / 32)";
			x = "1.5 * 							(		((safezoneW / safezoneH) min 1.2) / 32) + 				(safezoneX + (safezoneW - 			((safezoneW / safezoneH) min 1.2))/2)";
			y = "safezoneY + safezoneH - 8 * 							(		(		((safezoneW / safezoneH) min 1.2) / 1.2) / 20)";
		};
		class TreeSources: TreeFunctions
		{
			h = "1.5 * 							(		(		((safezoneW / safezoneH) min 1.2) / 1.2) / 20)";
			idc = 292902;
			w = "9 * 							(		((safezoneW / safezoneH) min 1.2) / 32)";
			wholeHeight = 0.21;
			x = "1.5 * 							(		((safezoneW / safezoneH) min 1.2) / 32) + 				(safezoneX + (safezoneW - 			((safezoneW / safezoneH) min 1.2))/2)";
			y = "2.5 * 							(		(		((safezoneW / safezoneH) min 1.2) / 1.2) / 20) + 		(safezoneY)";
		};
		class TreeTags: TreeFunctions
		{
			h = "2 * 							(		(		((safezoneW / safezoneH) min 1.2) / 1.2) / 20)";
			idc = 292903;
			w = "9 * 							(		((safezoneW / safezoneH) min 1.2) / 32)";
			wholeHeight = 0.21;
			x = "1.5 * 							(		((safezoneW / safezoneH) min 1.2) / 32) + 				(safezoneX + (safezoneW - 			((safezoneW / safezoneH) min 1.2))/2)";
			y = "4.5 * 							(		(		((safezoneW / safezoneH) min 1.2) / 1.2) / 20) + 		(safezoneY)";
		};
	};
	class controlsBackground
	{
		class BcgCommon: RscBackgroundGUI
		{
			backgroundType = 0;
			h = "(safezoneH - 2 * 							(		(		((safezoneW / safezoneH) min 1.2) / 1.2) / 20))";
			idc = 11000;
			w = "(10 * 							(		((safezoneW / safezoneH) min 1.2) / 32))";
			x = "(1 * 							(		((safezoneW / safezoneH) min 1.2) / 32) + 				(safezoneX + (safezoneW - 			((safezoneW / safezoneH) min 1.2))/2))";
			y = "(1 * 							(		(		((safezoneW / safezoneH) min 1.2) / 1.2) / 20) + 		(safezoneY))";
		};
		class BcgCommon1: RscBackgroundGUI
		{
			backgroundType = 1;
			h = "(safezoneH - 2 * 							(		(		((safezoneW / safezoneH) min 1.2) / 1.2) / 20))";
			idc = 110001;
			w = "20 * 							(		((safezoneW / safezoneH) min 1.2) / 32)";
			x = "11 * 							(		((safezoneW / safezoneH) min 1.2) / 32) + 				(safezoneX + (safezoneW - 			((safezoneW / safezoneH) min 1.2))/2)";
			y = "1 * 							(		(		((safezoneW / safezoneH) min 1.2) / 1.2) / 20) + 		(safezoneY)";
		};
		class BcgCommonBottom: RscBackgroundGUIBottom
		{
			backgroundType = 0;
			h = "1 * 			(		(		((safezoneW / safezoneH) min 1.2) / 1.2) / 20)";
			idc = 11001;
			w = "(10 * 							(		((safezoneW / safezoneH) min 1.2) / 32))";
			x = "(1 * 							(		((safezoneW / safezoneH) min 1.2) / 32) + 				(safezoneX + (safezoneW - 			((safezoneW / safezoneH) min 1.2))/2))";
			y = "(1 * 							(		(		((safezoneW / safezoneH) min 1.2) / 1.2) / 20) + 		(safezoneY)) +  			(safezoneH - 2 * 							(		(		((safezoneW / safezoneH) min 1.2) / 1.2) / 20)) 		 - (1 * 			(		(		((safezoneW / safezoneH) min 1.2) / 1.2) / 20))";
		};
		class BcgCommonBottom1: RscBackgroundGUIBottom
		{
			backgroundType = 1;
			h = "1 * 			(		(		((safezoneW / safezoneH) min 1.2) / 1.2) / 20)";
			idc = 110011;
			w = "20 * 							(		((safezoneW / safezoneH) min 1.2) / 32)";
			x = "11 * 							(		((safezoneW / safezoneH) min 1.2) / 32) + 				(safezoneX + (safezoneW - 			((safezoneW / safezoneH) min 1.2))/2)";
			y = "1 * 							(		(		((safezoneW / safezoneH) min 1.2) / 1.2) / 20) + 		(safezoneY) +  			(safezoneH - 2 * 							(		(		((safezoneW / safezoneH) min 1.2) / 1.2) / 20)) - (1 * 			(		(		((safezoneW / safezoneH) min 1.2) / 1.2) / 20))";
		};
		class BcgCommonDark: RscBackgroundGUIDark
		{
			backgroundType = 0;
			h = "(safezoneH - 2 * 							(		(		((safezoneW / safezoneH) min 1.2) / 1.2) / 20))";
			idc = 11100;
			w = "(10 * 							(		((safezoneW / safezoneH) min 1.2) / 32))";
			x = "(1 * 							(		((safezoneW / safezoneH) min 1.2) / 32) + 				(safezoneX + (safezoneW - 			((safezoneW / safezoneH) min 1.2))/2))";
			y = "(1 * 							(		(		((safezoneW / safezoneH) min 1.2) / 1.2) / 20) + 		(safezoneY))";
		};
		class BcgCommonDark1: RscBackgroundGUIDark
		{
			backgroundType = 1;
			h = "(safezoneH - 2 * 							(		(		((safezoneW / safezoneH) min 1.2) / 1.2) / 20))";
			idc = 111001;
			w = "20 * 							(		((safezoneW / safezoneH) min 1.2) / 32)";
			x = "11 * 							(		((safezoneW / safezoneH) min 1.2) / 32) + 				(safezoneX + (safezoneW - 			((safezoneW / safezoneH) min 1.2))/2)";
			y = "1 * 							(		(		((safezoneW / safezoneH) min 1.2) / 1.2) / 20) + 		(safezoneY)";
		};
		class BcgCommonLeft: RscBackgroundGUILeft
		{
			backgroundType = 0;
			h = "(safezoneH - 2 * 							(		(		((safezoneW / safezoneH) min 1.2) / 1.2) / 20))";
			idc = 11200;
			w = "(10 * 							(		((safezoneW / safezoneH) min 1.2) / 32))";
			x = "(1 * 							(		((safezoneW / safezoneH) min 1.2) / 32) + 				(safezoneX + (safezoneW - 			((safezoneW / safezoneH) min 1.2))/2))";
			y = "(1 * 							(		(		((safezoneW / safezoneH) min 1.2) / 1.2) / 20) + 		(safezoneY))";
		};
		class BcgCommonLeft1: RscBackgroundGUILeft
		{
			backgroundType = 1;
			h = "(safezoneH - 2 * 							(		(		((safezoneW / safezoneH) min 1.2) / 1.2) / 20))";
			idc = 112001;
			w = "20 * 							(		((safezoneW / safezoneH) min 1.2) / 32)";
			x = "11 * 							(		((safezoneW / safezoneH) min 1.2) / 32) + 				(safezoneX + (safezoneW - 			((safezoneW / safezoneH) min 1.2))/2)";
			y = "1 * 							(		(		((safezoneW / safezoneH) min 1.2) / 1.2) / 20) + 		(safezoneY)";
		};
		class BcgCommonRight: RscBackgroundGUIRight
		{
			backgroundType = 0;
			h = "(safezoneH - 2 * 							(		(		((safezoneW / safezoneH) min 1.2) / 1.2) / 20))";
			idc = 11201;
			w = "(10 * 							(		((safezoneW / safezoneH) min 1.2) / 32))";
			x = "(1 * 							(		((safezoneW / safezoneH) min 1.2) / 32) + 				(safezoneX + (safezoneW - 			((safezoneW / safezoneH) min 1.2))/2))";
			y = "(1 * 							(		(		((safezoneW / safezoneH) min 1.2) / 1.2) / 20) + 		(safezoneY))";
		};
		class BcgCommonRight1: RscBackgroundGUIRight
		{
			backgroundType = 1;
			h = "(safezoneH - 2 * 							(		(		((safezoneW / safezoneH) min 1.2) / 1.2) / 20))";
			idc = 112011;
			w = "20 * 							(		((safezoneW / safezoneH) min 1.2) / 32)";
			x = "11 * 							(		((safezoneW / safezoneH) min 1.2) / 32) + 				(safezoneX + (safezoneW - 			((safezoneW / safezoneH) min 1.2))/2)";
			y = "1 * 							(		(		((safezoneW / safezoneH) min 1.2) / 1.2) / 20) + 		(safezoneY)";
		};
		class BcgCommonTop: RscBackgroundGUITop
		{
			backgroundType = 0;
			h = "1 * 			(		(		((safezoneW / safezoneH) min 1.2) / 1.2) / 20)";
			idc = 11002;
			w = "(10 * 							(		((safezoneW / safezoneH) min 1.2) / 32))";
			x = "(1 * 							(		((safezoneW / safezoneH) min 1.2) / 32) + 				(safezoneX + (safezoneW - 			((safezoneW / safezoneH) min 1.2))/2))";
			y = "(1 * 							(		(		((safezoneW / safezoneH) min 1.2) / 1.2) / 20) + 		(safezoneY))";
		};
		class BcgCommonTop1: RscBackgroundGUITop
		{
			backgroundType = 1;
			h = "1 * 			(		(		((safezoneW / safezoneH) min 1.2) / 1.2) / 20)";
			idc = 110021;
			w = "20 * 							(		((safezoneW / safezoneH) min 1.2) / 32)";
			x = "11 * 							(		((safezoneW / safezoneH) min 1.2) / 32) + 				(safezoneX + (safezoneW - 			((safezoneW / safezoneH) min 1.2))/2)";
			y = "1 * 							(		(		((safezoneW / safezoneH) min 1.2) / 1.2) / 20) + 		(safezoneY)";
		};
	};
};
