class RscDisplayCommon: RscGUIEditor
{
	onLoad = "[""onLoad"",_this,""RscDisplayCommon"",'GUI'] call 	(uinamespace getvariable 'BIS_fnc_initDisplay')";
	onUnload = "[""onUnload"",_this,""RscDisplayCommon"",'GUI'] call 	(uinamespace getvariable 'BIS_fnc_initDisplay')";
	scriptName = "RscDisplayCommon";
	scriptPath = "GUI";
};
