class RscDisplayLoading
{
	idd = 102;
	onLoad = "[""onLoad"",_this,""RscDisplayLoading"",'3DENDisplaysTemp'] call 	(uinamespace getvariable 'BIS_fnc_initDisplay')";
	onUnload = "[""onUnload"",_this,""RscDisplayLoading"",'3DENDisplaysTemp'] call 	(uinamespace getvariable 'BIS_fnc_initDisplay')";
	scriptName = "RscDisplayLoading";
	scriptPath = "3DENDisplaysTemp";
	class Variants
	{
		class Loading: RscDisplayLoadMission {};
	};
};
