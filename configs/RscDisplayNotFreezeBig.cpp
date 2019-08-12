class RscDisplayNotFreezeBig: RscStandardDisplay
{
	idd = 100002;
	onLoad = "[""onLoad"",_this,""RscDisplayNotFreezeBig"",'ContactDisplaysTemp'] call 	(uinamespace getvariable 'BIS_fnc_initDisplay')";
	onUnload = "[""onUnload"",_this,""RscDisplayNotFreezeBig"",'ContactDisplaysTemp'] call 	(uinamespace getvariable 'BIS_fnc_initDisplay')";
	scriptName = "RscDisplayNotFreezeBig";
	scriptPath = "ContactDisplaysTemp";
	class controls
	{
		class Savegame: RscSavegameInfo {};
	};
	class controlsBackground
	{
		class Vignette: RscVignette {};
	};
};
