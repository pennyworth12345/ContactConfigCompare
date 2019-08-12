class RscDisplayAttributesModuleRespawnTickets: RscDisplayAttributes
{
	onLoad = "[""onLoad"",_this,""RscDisplayAttributesModuleRespawnTickets"",'CuratorDisplays'] call 	(uinamespace getvariable 'BIS_fnc_initDisplay')";
	onUnload = "[""onUnload"",_this,""RscDisplayAttributesModuleRespawnTickets"",'CuratorDisplays'] call 	(uinamespace getvariable 'BIS_fnc_initDisplay')";
	scriptName = "RscDisplayAttributesModuleRespawnTickets";
	scriptPath = "CuratorDisplays";
	class Controls: Controls
	{
		class Background: Background {};
		class ButtonCancel: ButtonCancel {};
		class ButtonOK: ButtonOK {};
		class Content: Content
		{
			class Controls: controls
			{
				class RespawnTickets: RscAttributeRespawnTickets {};
			};
		};
		class Title: Title {};
	};
};
