class RscDisplayAttributesModuleCountdown: RscDisplayAttributes
{
	onLoad = "[""onLoad"",_this,""RscDisplayAttributesModuleCountdown"",'CuratorDisplays'] call 	(uinamespace getvariable 'BIS_fnc_initDisplay')";
	onUnload = "[""onUnload"",_this,""RscDisplayAttributesModuleCountdown"",'CuratorDisplays'] call 	(uinamespace getvariable 'BIS_fnc_initDisplay')";
	scriptName = "RscDisplayAttributesModuleCountdown";
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
				class Countdown: RscAttributeCountdown {};
				class EndMission: RscAttributeEndMission {};
			};
		};
		class Title: Title {};
	};
};
