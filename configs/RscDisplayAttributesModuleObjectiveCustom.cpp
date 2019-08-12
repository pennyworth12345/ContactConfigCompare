class RscDisplayAttributesModuleObjectiveCustom: RscDisplayAttributes
{
	onLoad = "[""onLoad"",_this,""RscDisplayAttributesModuleObjectiveCustom"",'CuratorDisplays'] call 	(uinamespace getvariable 'BIS_fnc_initDisplay')";
	onUnload = "[""onUnload"",_this,""RscDisplayAttributesModuleObjectiveCustom"",'CuratorDisplays'] call 	(uinamespace getvariable 'BIS_fnc_initDisplay')";
	scriptName = "RscDisplayAttributesModuleObjectiveCustom";
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
				class TaskDescription: RscAttributeTaskDescription {};
				class TaskDestination: RscAttributeTaskDestination {};
				class TaskState: RscAttributeTaskState {};
				class Text: RscAttributeText
				{
					class Controls: controls
					{
						class Title: Title
						{
							text = "The objective will NOT be completed automatically, you have to set its state manually. Don't forget about it!";
						};
					};
				};
			};
		};
		class Title: Title {};
	};
};
