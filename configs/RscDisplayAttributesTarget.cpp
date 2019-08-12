class RscDisplayAttributesTarget: RscDisplayAttributes
{
	onLoad = "[""onLoad"",_this,""RscDisplayAttributesTarget"",'BootcampDisplays'] call 	(uinamespace getvariable 'BIS_fnc_initDisplay')";
	onUnload = "[""onUnload"",_this,""RscDisplayAttributesTarget"",'BootcampDisplays'] call 	(uinamespace getvariable 'BIS_fnc_initDisplay')";
	scriptName = "RscDisplayAttributesTarget";
	scriptPath = "BootcampDisplays";
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
				class Data: RscAttributeTargetData {};
				class DataStore: RscAttributeTargetDataStore {};
				class Popup: RscAttributeTargetPopup {};
				class PopupDelay: RscAttributeTargetPopupDelay {};
				class State: RscAttributeTargetState {};
				class Texture: RscAttributeTargetTexture {};
			};
		};
		class Title: Title {};
	};
};
