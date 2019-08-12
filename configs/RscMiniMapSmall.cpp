class RscMiniMapSmall: RscMiniMap
{
	onLoad = "[""onLoad"",_this,""RscMiniMap"",'IGUI'] call 	(uinamespace getvariable 'BIS_fnc_initDisplay')";
	onUnload = "[""onUnload"",_this,""RscMiniMap"",'IGUI'] call 	(uinamespace getvariable 'BIS_fnc_initDisplay')";
	scriptName = "RscMiniMap";
	scriptPath = "IGUI";
};
