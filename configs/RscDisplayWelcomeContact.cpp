class RscDisplayWelcomeContact: RscDisplayWelcome
{
	onLoad = "[""onLoad"",_this,""RscDisplayWelcomeContact"",'ContactDisplays'] call 	(uinamespace getvariable 'BIS_fnc_initDisplay')";
	onUnload = "[""onUnload"",_this,""RscDisplayWelcomeContact"",'ContactDisplays'] call 	(uinamespace getvariable 'BIS_fnc_initDisplay')";
	scriptName = "RscDisplayWelcomeContact";
	scriptPath = "ContactDisplays";
};
