class RscDisplayDebugPublic
{
	enableSimulation = 0;
	idd = 316000;
	movingEnable = 1;
	onLoad = "[""onLoad"",_this,""RscDisplayDebugPublic"",'GUI'] call 	(uinamespace getvariable 'BIS_fnc_initDisplay')";
	onUnload = "[""onUnload"",_this,""RscDisplayDebugPublic"",'GUI'] call 	(uinamespace getvariable 'BIS_fnc_initDisplay')";
	scriptName = "RscDisplayDebugPublic";
	scriptPath = "GUI";
	class Controls
	{
		class ButtonCancel: RscButtonMenuCancel
		{
			h = "1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			w = "7.4 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			x = "9 * 					(			((safezoneW / safezoneH) min 1.2) / 40) + 		(safezoneX + (safezoneW - 					((safezoneW / safezoneH) min 1.2))/2)";
			y = "23.1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 		(safezoneY + (safezoneH - 					(			((safezoneW / safezoneH) min 1.2) / 1.2))/2)";
		};
		class DebugConsole: RscDebugConsole
		{
			h = "21.5 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			w = "22 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			x = "9 * 					(			((safezoneW / safezoneH) min 1.2) / 40) + 		(safezoneX + (safezoneW - 					((safezoneW / safezoneH) min 1.2))/2)";
			y = "1.5 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 		(safezoneY + (safezoneH - 					(			((safezoneW / safezoneH) min 1.2) / 1.2))/2)";
		};
	};
	class controlsBackground {};
};
