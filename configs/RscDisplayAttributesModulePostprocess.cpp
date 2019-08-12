class RscDisplayAttributesModulePostprocess: RscDisplayAttributes
{
	onLoad = "[""onLoad"",_this,""RscDisplayAttributesModulePostprocess"",'CuratorDisplays'] call 	(uinamespace getvariable 'BIS_fnc_initDisplay')";
	onUnload = "[""onUnload"",_this,""RscDisplayAttributesModulePostprocess"",'CuratorDisplays'] call 	(uinamespace getvariable 'BIS_fnc_initDisplay')";
	scriptName = "RscDisplayAttributesModulePostprocess";
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
				class Postprocess: RscAttributePostprocess {};
			};
		};
		class Title: Title {};
	};
};
