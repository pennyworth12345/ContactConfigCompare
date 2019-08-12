class RscDisplayAttributesModuleObjectiveProtect: RscDisplayAttributes
{
	onLoad = "[""onLoad"",_this,""RscDisplayAttributesModuleObjectiveProtect"",'CuratorDisplays'] call 	(uinamespace getvariable 'BIS_fnc_initDisplay')";
	onUnload = "[""onUnload"",_this,""RscDisplayAttributesModuleObjectiveProtect"",'CuratorDisplays'] call 	(uinamespace getvariable 'BIS_fnc_initDisplay')";
	scriptName = "RscDisplayAttributesModuleObjectiveProtect";
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
				class Owners: RscAttributeOwners {};
				class TaskDescription: RscAttributeTaskDescription
				{
					class Controls: controls
					{
						class EditDescription: EditDescription
						{
							text = "Protect the target.";
						};
						class EditMarker: EditMarker
						{
							text = "%1";
						};
						class EditTemplate: EditTemplate {};
						class EditTitle: EditTitle
						{
							text = "Protect %1";
						};
						class TitleDescription: TitleDescription {};
						class TitleMarker: TitleMarker {};
						class TitleTemplate: TitleTemplate {};
						class TitleTitle: TitleTitle {};
					};
				};
				class Text: RscAttributeText
				{
					class Controls: controls
					{
						class Title: Title
						{
							text = "The objective will be completed automatically when the object to which the module is attached is neutralized. No task will appear when the module is not attached to any object.<br /><br />%1 will be replaced by the target name.";
						};
					};
				};
			};
		};
		class Title: Title {};
	};
};
