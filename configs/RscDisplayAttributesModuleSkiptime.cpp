class RscDisplayAttributesModuleSkiptime: RscDisplayAttributes
{
	onLoad = "[""onLoad"",_this,""RscDisplayAttributesModuleSkiptime"",'CuratorDisplays'] call 	(uinamespace getvariable 'BIS_fnc_initDisplay')";
	onUnload = "[""onUnload"",_this,""RscDisplayAttributesModuleSkiptime"",'CuratorDisplays'] call 	(uinamespace getvariable 'BIS_fnc_initDisplay')";
	scriptName = "RscDisplayAttributesModuleSkiptime";
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
				class Skiptime: RscAttributeSkiptime {};
			};
		};
		class Title: Title {};
	};
};
