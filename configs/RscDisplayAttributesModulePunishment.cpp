class RscDisplayAttributesModulePunishment: RscDisplayAttributes
{
	onLoad = "[""onLoad"",_this,""RscDisplayAttributesModulePunishment"",'BootcampDisplays'] call 	(uinamespace getvariable 'BIS_fnc_initDisplay')";
	onUnload = "[""onUnload"",_this,""RscDisplayAttributesModulePunishment"",'BootcampDisplays'] call 	(uinamespace getvariable 'BIS_fnc_initDisplay')";
	scriptName = "RscDisplayAttributesModulePunishment";
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
				class Animation: RscAttributePunishmentAnimation {};
			};
		};
		class Title: Title {};
	};
};
