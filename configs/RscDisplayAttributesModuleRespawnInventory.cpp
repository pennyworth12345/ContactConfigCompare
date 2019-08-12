class RscDisplayAttributesModuleRespawnInventory: RscDisplayAttributes
{
	curatorObjectAttributes = 1;
	onLoad = "[""onLoad"",_this,""RscDisplayAttributesModuleRespawnInventory"",'CuratorDisplays'] call 	(uinamespace getvariable 'BIS_fnc_initDisplay')";
	onUnload = "[""onUnload"",_this,""RscDisplayAttributesModuleRespawnInventory"",'CuratorDisplays'] call 	(uinamespace getvariable 'BIS_fnc_initDisplay')";
	scriptName = "RscDisplayAttributesModuleRespawnInventory";
	scriptPath = "CuratorDisplays";
	class Controls: Controls
	{
		class Background: Background {};
		class ButtonCancel: ButtonCancel {};
		class ButtonCustom: ButtonCustom {};
		class ButtonOK: ButtonOK {};
		class Content: Content
		{
			class Controls: controls
			{
				class RespawnInventory: RscAttributeRespawnInventory {};
			};
		};
		class Title: Title {};
	};
};
