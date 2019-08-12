class RscDisplayAttributesInventory: RscDisplayAttributes
{
	curatorObjectAttributes = 1;
	onLoad = "[""onLoad"",_this,""RscDisplayAttributesInventory"",'CuratorDisplays'] call 	(uinamespace getvariable 'BIS_fnc_initDisplay')";
	onUnload = "[""onUnload"",_this,""RscDisplayAttributesInventory"",'CuratorDisplays'] call 	(uinamespace getvariable 'BIS_fnc_initDisplay')";
	scriptName = "RscDisplayAttributesInventory";
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
				class Inventory: RscAttributeInventory {};
			};
		};
		class Title: Title {};
	};
};
