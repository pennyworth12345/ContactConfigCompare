class RscDisplayLoadCustom: RscDisplayLoadMission
{
	enableSimulation = 0;
	idd = 103;
	onLoad = "[""onLoad"",_this,""RscDisplayLoading"",'Loading'] call 	(uinamespace getvariable 'BIS_fnc_initDisplay')";
	onUnload = "[""onUnload"",_this,""RscDisplayLoading"",'Loading'] call 	(uinamespace getvariable 'BIS_fnc_initDisplay')";
	scriptName = "RscDisplayLoading";
	scriptPath = "Loading";
};
