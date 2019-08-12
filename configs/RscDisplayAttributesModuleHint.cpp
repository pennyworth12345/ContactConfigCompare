class RscDisplayAttributesModuleHint: RscDisplayAttributes
{
	onLoad = "[""onLoad"",_this,""RscDisplayAttributesModuleHint"",'BootcampDisplays'] call 	(uinamespace getvariable 'BIS_fnc_initDisplay')";
	onUnload = "[""onUnload"",_this,""RscDisplayAttributesModuleHint"",'BootcampDisplays'] call 	(uinamespace getvariable 'BIS_fnc_initDisplay')";
	scriptName = "RscDisplayAttributesModuleHint";
	scriptPath = "BootcampDisplays";
	class Controls: Controls
	{
		class Background: Background {};
		class ButtonCancel: ButtonCancel {};
		class ButtonOK: ButtonOK {};
		class Content: Content
		{
			class Controls: controls
			{
				class Custom: RscAttributeHintCustom {};
				class Side: RscAttributeSide {};
				class Topic: RscAttributeHintTopics {};
			};
		};
		class Title: Title {};
	};
};
