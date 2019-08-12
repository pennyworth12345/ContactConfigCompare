class RscDisplayLoading
{
	idd = 102;
	onLoad = "[""onLoad"",_this,""RscDisplayLoading"",'ContactDisplaysTemp'] call 	(uinamespace getvariable 'BIS_fnc_initDisplay')";
	onUnload = "[""onUnload"",_this,""RscDisplayLoading"",'ContactDisplaysTemp'] call 	(uinamespace getvariable 'BIS_fnc_initDisplay')";
	scriptName = "RscDisplayLoading";
	scriptPath = "ContactDisplaysTemp";
	class Variants
	{
		class Loading: RscDisplayLoadMission {};
	};
};
