class RscDisplayNone: RscStandardDisplay
{
	idd = -1;
	onLoad = "[""onLoad"",_this,""RscDisplayNone"",'GUI'] call 	(uinamespace getvariable 'BIS_fnc_initDisplay')";
	onUnload = "[""onUnload"",_this,""RscDisplayNone"",'GUI'] call 	(uinamespace getvariable 'BIS_fnc_initDisplay')";
	scriptName = "RscDisplayNone";
	scriptPath = "GUI";
};
