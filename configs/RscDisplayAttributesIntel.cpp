class RscDisplayAttributesIntel: RscDisplayAttributes
{
	curatorObjectAttributes = 1;
	onLoad = "[""onLoad"",_this,""RscDisplayAttributesIntel"",'CuratorDisplays'] call 	(uinamespace getvariable 'BIS_fnc_initDisplay')";
	onUnload = "[""onUnload"",_this,""RscDisplayAttributesIntel"",'CuratorDisplays'] call 	(uinamespace getvariable 'BIS_fnc_initDisplay')";
	scriptName = "RscDisplayAttributesIntel";
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
				class DiaryRecord: RscAttributeDiaryRecord {};
				class Owners: RscAttributeOwners {};
			};
		};
		class Title: Title {};
	};
};
