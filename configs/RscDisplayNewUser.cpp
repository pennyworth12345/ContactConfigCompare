class RscDisplayNewUser: RscStandardDisplay
{
	onLoad = "[""onLoad"",_this,""RscDisplayNewUser"",'GUI'] call 	(uinamespace getvariable 'BIS_fnc_initDisplay')";
	onUnload = "[""onUnload"",_this,""RscDisplayNewUser"",'GUI'] call 	(uinamespace getvariable 'BIS_fnc_initDisplay')";
	scriptName = "RscDisplayNewUser";
	scriptPath = "GUI";
	class controls
	{
		class CA_ButtonCancel: RscShortcutButton
		{
			default = 0;
			h = "1 * 			(		(		((safezoneW / safezoneH) min 1.2) / 1.2) / 20)";
			idc = 2;
			text = "Cancel";
			w = "10 * 			(		((safezoneW / safezoneH) min 1.2) / 32)";
			x = "1 * 			(		((safezoneW / safezoneH) min 1.2) / 32) + 			(safezoneX)";
			y = "18 * 			(		(		((safezoneW / safezoneH) min 1.2) / 1.2) / 20) + 			(safezoneY + safezoneH - 		(		((safezoneW / safezoneH) min 1.2) / 1.2))";
		};
		class CA_ButtonContinue: RscShortcutButton
		{
			default = 1;
			h = "1 * 			(		(		((safezoneW / safezoneH) min 1.2) / 1.2) / 20)";
			idc = 1;
			text = "OK";
			w = "10 * 			(		((safezoneW / safezoneH) min 1.2) / 32)";
			x = "21 * 			(		((safezoneW / safezoneH) min 1.2) / 32) + 			(safezoneX)";
			y = "18 * 			(		(		((safezoneW / safezoneH) min 1.2) / 1.2) / 20) + 			(safezoneY + safezoneH - 		(		((safezoneW / safezoneH) min 1.2) / 1.2))";
		};
		class CA_FaceText: RscText
		{
			h = "1 * 			(		(		((safezoneW / safezoneH) min 1.2) / 1.2) / 20)";
			idc = 1002;
			text = "Face:";
			w = "9 * 			(		((safezoneW / safezoneH) min 1.2) / 32)";
			x = "1.5 * 			(		((safezoneW / safezoneH) min 1.2) / 32) + 			(safezoneX)";
			y = "4.5 * 			(		(		((safezoneW / safezoneH) min 1.2) / 1.2) / 20) + 			(safezoneY + safezoneH - 		(		((safezoneW / safezoneH) min 1.2) / 1.2))";
		};
		class CA_FaceValue: RscCombo
		{
			h = "1 * 			(		(		((safezoneW / safezoneH) min 1.2) / 1.2) / 20)";
			idc = "IDC_NEW_USER_FACE";
			rows = 3;
			w = "9 * 			(		((safezoneW / safezoneH) min 1.2) / 32)";
			x = "1.5 * 			(		((safezoneW / safezoneH) min 1.2) / 32) + 			(safezoneX)";
			y = "5.5 * 			(		(		((safezoneW / safezoneH) min 1.2) / 1.2) / 20) + 			(safezoneY + safezoneH - 		(		((safezoneW / safezoneH) min 1.2) / 1.2))";
		};
		class CA_GlassText: CA_FaceText
		{
			h = "1 * 			(		(		((safezoneW / safezoneH) min 1.2) / 1.2) / 20)";
			idc = 1003;
			text = "Glasses:";
			w = "9 * 			(		((safezoneW / safezoneH) min 1.2) / 32)";
			x = "1.5 * 			(		((safezoneW / safezoneH) min 1.2) / 32) + 			(safezoneX)";
			y = "6.5 * 			(		(		((safezoneW / safezoneH) min 1.2) / 1.2) / 20) + 			(safezoneY + safezoneH - 		(		((safezoneW / safezoneH) min 1.2) / 1.2))";
		};
		class CA_NameValue: RscEdit
		{
			h = "1 * 			(		(		((safezoneW / safezoneH) min 1.2) / 1.2) / 20)";
			idc = "IDC_NEW_USER_NAME";
			w = "9 * 			(		((safezoneW / safezoneH) min 1.2) / 32)";
			x = "1.5 * 			(		((safezoneW / safezoneH) min 1.2) / 32) + 			(safezoneX)";
			y = "3.5 * 			(		(		((safezoneW / safezoneH) min 1.2) / 1.2) / 20) + 			(safezoneY + safezoneH - 		(		((safezoneW / safezoneH) min 1.2) / 1.2))";
		};
		class CA_SpeakerText: CA_FaceText
		{
			h = "1 * 			(		(		((safezoneW / safezoneH) min 1.2) / 1.2) / 20)";
			idc = 1004;
			text = "Speaker:";
			w = "9 * 			(		((safezoneW / safezoneH) min 1.2) / 32)";
			x = "1.5 * 			(		((safezoneW / safezoneH) min 1.2) / 32) + 			(safezoneX)";
			y = "8.5 * 			(		(		((safezoneW / safezoneH) min 1.2) / 1.2) / 20) + 			(safezoneY + safezoneH - 		(		((safezoneW / safezoneH) min 1.2) / 1.2))";
		};
		class CA_SquadText: CA_FaceText
		{
			h = "1 * 			(		(		((safezoneW / safezoneH) min 1.2) / 1.2) / 20)";
			idc = "IDC_NEW_USER_SQUAD_TEXT";
			text = "Squad URL:";
			w = "9 * 			(		((safezoneW / safezoneH) min 1.2) / 32)";
			x = "1.5 * 			(		((safezoneW / safezoneH) min 1.2) / 32) + 			(safezoneX)";
			y = "12.5 * 			(		(		((safezoneW / safezoneH) min 1.2) / 1.2) / 20) + 			(safezoneY + safezoneH - 		(		((safezoneW / safezoneH) min 1.2) / 1.2))";
		};
		class CA_SquadValue: CA_NameValue
		{
			h = "1 * 			(		(		((safezoneW / safezoneH) min 1.2) / 1.2) / 20)";
			idc = "IDC_NEW_USER_SQUAD";
			w = "9 * 			(		((safezoneW / safezoneH) min 1.2) / 32)";
			x = "1.5 * 			(		((safezoneW / safezoneH) min 1.2) / 32) + 			(safezoneX)";
			y = "13.5 * 			(		(		((safezoneW / safezoneH) min 1.2) / 1.2) / 20) + 			(safezoneY + safezoneH - 		(		((safezoneW / safezoneH) min 1.2) / 1.2))";
		};
		class CA_TextPitch2: CA_FaceText
		{
			h = "1 * 			(		(		((safezoneW / safezoneH) min 1.2) / 1.2) / 20)";
			idc = 1005;
			text = "Pitch:";
			w = "9 * 			(		((safezoneW / safezoneH) min 1.2) / 32)";
			x = "1.5 * 			(		((safezoneW / safezoneH) min 1.2) / 32) + 			(safezoneX)";
			y = "10.5 * 			(		(		((safezoneW / safezoneH) min 1.2) / 1.2) / 20) + 			(safezoneY + safezoneH - 		(		((safezoneW / safezoneH) min 1.2) / 1.2))";
		};
		class CA_TextPlayer2: RscText
		{
			h = "1 * 			(		(		((safezoneW / safezoneH) min 1.2) / 1.2) / 20)";
			idc = 1001;
			text = "Player name:";
			w = "9 * 			(		((safezoneW / safezoneH) min 1.2) / 32)";
			x = "1.5 * 			(		((safezoneW / safezoneH) min 1.2) / 32) + 			(safezoneX)";
			y = "2.5 * 			(		(		((safezoneW / safezoneH) min 1.2) / 1.2) / 20) + 			(safezoneY + safezoneH - 		(		((safezoneW / safezoneH) min 1.2) / 1.2))";
		};
		class CA_Title2: CA_Title
		{
			h = "1 * 			(		(		((safezoneW / safezoneH) min 1.2) / 1.2) / 20)";
			idc = 1000;
			text = "Edit player:";
			w = "10 * 			(		((safezoneW / safezoneH) min 1.2) / 32)";
			x = "1 * 			(		((safezoneW / safezoneH) min 1.2) / 32) + 			(safezoneX)";
			y = "1 * 			(		(		((safezoneW / safezoneH) min 1.2) / 1.2) / 20) + 			(safezoneY + safezoneH - 		(		((safezoneW / safezoneH) min 1.2) / 1.2))";
		};
		class CA_ValueGlasses2: RscCombo
		{
			h = "1 * 			(		(		((safezoneW / safezoneH) min 1.2) / 1.2) / 20)";
			idc = "IDC_NEW_USER_GLASSES";
			w = "9 * 			(		((safezoneW / safezoneH) min 1.2) / 32)";
			x = "1.5 * 			(		((safezoneW / safezoneH) min 1.2) / 32) + 			(safezoneX)";
			y = "7.5 * 			(		(		((safezoneW / safezoneH) min 1.2) / 1.2) / 20) + 			(safezoneY + safezoneH - 		(		((safezoneW / safezoneH) min 1.2) / 1.2))";
		};
		class CA_ValueID: CA_SquadText
		{
			h = "1 * 			(		(		((safezoneW / safezoneH) min 1.2) / 1.2) / 20)";
			idc = "IDC_NEW_USER_ID";
			w = "20 * 			(		((safezoneW / safezoneH) min 1.2) / 32)";
			x = "11 * 			(		((safezoneW / safezoneH) min 1.2) / 32) + 			(safezoneX)";
			y = "1 * 			(		(		((safezoneW / safezoneH) min 1.2) / 1.2) / 20) + 			(safezoneY + safezoneH - 		(		((safezoneW / safezoneH) min 1.2) / 1.2))";
		};
		class CA_ValuePitch2: RscXSliderH
		{
			h = "1 * 			(		(		((safezoneW / safezoneH) min 1.2) / 1.2) / 20)";
			idc = "IDC_NEW_USER_PITCH";
			w = "9 * 			(		((safezoneW / safezoneH) min 1.2) / 32)";
			x = "1.5 * 			(		((safezoneW / safezoneH) min 1.2) / 32) + 			(safezoneX)";
			y = "11.5 * 			(		(		((safezoneW / safezoneH) min 1.2) / 1.2) / 20) + 			(safezoneY + safezoneH - 		(		((safezoneW / safezoneH) min 1.2) / 1.2))";
		};
		class CA_ValueSpeaker2: RscCombo
		{
			h = "1 * 			(		(		((safezoneW / safezoneH) min 1.2) / 1.2) / 20)";
			idc = "IDC_NEW_USER_SPEAKER";
			w = "9 * 			(		((safezoneW / safezoneH) min 1.2) / 32)";
			x = "1.5 * 			(		((safezoneW / safezoneH) min 1.2) / 32) + 			(safezoneX)";
			y = "9.5 * 			(		(		((safezoneW / safezoneH) min 1.2) / 1.2) / 20) + 			(safezoneY + safezoneH - 		(		((safezoneW / safezoneH) min 1.2) / 1.2))";
		};
	};
	class controlsBackground
	{
		class BcgCommon: RscBackgroundGUI
		{
			backgroundType = 0;
			h = "18 * 			(		(		((safezoneW / safezoneH) min 1.2) / 1.2) / 20)";
			idc = 11000;
			w = "10 * 			(		((safezoneW / safezoneH) min 1.2) / 32)";
			x = "1 * 			(		((safezoneW / safezoneH) min 1.2) / 32) + 			(safezoneX)";
			y = "1 * 			(		(		((safezoneW / safezoneH) min 1.2) / 1.2) / 20) + 			(safezoneY + safezoneH - 		(		((safezoneW / safezoneH) min 1.2) / 1.2))";
		};
		class BcgCommon1: RscBackgroundGUI
		{
			backgroundType = 1;
			h = "18 * 			(		(		((safezoneW / safezoneH) min 1.2) / 1.2) / 20)";
			idc = 110001;
			w = "20 * 			(		((safezoneW / safezoneH) min 1.2) / 32)";
			x = "11 * 			(		((safezoneW / safezoneH) min 1.2) / 32) + 			(safezoneX)";
			y = "1 * 			(		(		((safezoneW / safezoneH) min 1.2) / 1.2) / 20) + 			(safezoneY + safezoneH - 		(		((safezoneW / safezoneH) min 1.2) / 1.2))";
		};
		class BcgCommonBottom: RscBackgroundGUIBottom
		{
			backgroundType = 0;
			h = "1 * 			(		(		((safezoneW / safezoneH) min 1.2) / 1.2) / 20)";
			idc = 11001;
			w = "10 * 			(		((safezoneW / safezoneH) min 1.2) / 32)";
			x = "1 * 			(		((safezoneW / safezoneH) min 1.2) / 32) + 			(safezoneX)";
			y = "1 * 			(		(		((safezoneW / safezoneH) min 1.2) / 1.2) / 20) + 			(safezoneY + safezoneH - 		(		((safezoneW / safezoneH) min 1.2) / 1.2)) +  			18 * 			(		(		((safezoneW / safezoneH) min 1.2) / 1.2) / 20) 		 - (1 * 			(		(		((safezoneW / safezoneH) min 1.2) / 1.2) / 20))";
		};
		class BcgCommonBottom1: RscBackgroundGUIBottom
		{
			backgroundType = 1;
			h = "1 * 			(		(		((safezoneW / safezoneH) min 1.2) / 1.2) / 20)";
			idc = 110011;
			w = "20 * 			(		((safezoneW / safezoneH) min 1.2) / 32)";
			x = "11 * 			(		((safezoneW / safezoneH) min 1.2) / 32) + 			(safezoneX)";
			y = "1 * 			(		(		((safezoneW / safezoneH) min 1.2) / 1.2) / 20) + 			(safezoneY + safezoneH - 		(		((safezoneW / safezoneH) min 1.2) / 1.2)) +  			18 * 			(		(		((safezoneW / safezoneH) min 1.2) / 1.2) / 20) - (1 * 			(		(		((safezoneW / safezoneH) min 1.2) / 1.2) / 20))";
		};
		class BcgCommonLeft: RscBackgroundGUILeft
		{
			backgroundType = 0;
			h = "18 * 			(		(		((safezoneW / safezoneH) min 1.2) / 1.2) / 20)";
			idc = 11200;
			w = "10 * 			(		((safezoneW / safezoneH) min 1.2) / 32)";
			x = "1 * 			(		((safezoneW / safezoneH) min 1.2) / 32) + 			(safezoneX)";
			y = "1 * 			(		(		((safezoneW / safezoneH) min 1.2) / 1.2) / 20) + 			(safezoneY + safezoneH - 		(		((safezoneW / safezoneH) min 1.2) / 1.2))";
		};
		class BcgCommonLeft1: RscBackgroundGUILeft
		{
			backgroundType = 1;
			h = "18 * 			(		(		((safezoneW / safezoneH) min 1.2) / 1.2) / 20)";
			idc = 112001;
			w = "20 * 			(		((safezoneW / safezoneH) min 1.2) / 32)";
			x = "11 * 			(		((safezoneW / safezoneH) min 1.2) / 32) + 			(safezoneX)";
			y = "1 * 			(		(		((safezoneW / safezoneH) min 1.2) / 1.2) / 20) + 			(safezoneY + safezoneH - 		(		((safezoneW / safezoneH) min 1.2) / 1.2))";
		};
		class BcgCommonRight: RscBackgroundGUIRight
		{
			backgroundType = 0;
			h = "18 * 			(		(		((safezoneW / safezoneH) min 1.2) / 1.2) / 20)";
			idc = 11201;
			w = "10 * 			(		((safezoneW / safezoneH) min 1.2) / 32)";
			x = "1 * 			(		((safezoneW / safezoneH) min 1.2) / 32) + 			(safezoneX)";
			y = "1 * 			(		(		((safezoneW / safezoneH) min 1.2) / 1.2) / 20) + 			(safezoneY + safezoneH - 		(		((safezoneW / safezoneH) min 1.2) / 1.2))";
		};
		class BcgCommonRight1: RscBackgroundGUIRight
		{
			backgroundType = 1;
			h = "18 * 			(		(		((safezoneW / safezoneH) min 1.2) / 1.2) / 20)";
			idc = 112011;
			w = "20 * 			(		((safezoneW / safezoneH) min 1.2) / 32)";
			x = "11 * 			(		((safezoneW / safezoneH) min 1.2) / 32) + 			(safezoneX)";
			y = "1 * 			(		(		((safezoneW / safezoneH) min 1.2) / 1.2) / 20) + 			(safezoneY + safezoneH - 		(		((safezoneW / safezoneH) min 1.2) / 1.2))";
		};
		class BcgCommonTop: RscBackgroundGUITop
		{
			backgroundType = 0;
			h = "1 * 			(		(		((safezoneW / safezoneH) min 1.2) / 1.2) / 20)";
			idc = 11002;
			w = "10 * 			(		((safezoneW / safezoneH) min 1.2) / 32)";
			x = "1 * 			(		((safezoneW / safezoneH) min 1.2) / 32) + 			(safezoneX)";
			y = "1 * 			(		(		((safezoneW / safezoneH) min 1.2) / 1.2) / 20) + 			(safezoneY + safezoneH - 		(		((safezoneW / safezoneH) min 1.2) / 1.2))";
		};
		class BcgCommonTop1: RscBackgroundGUITop
		{
			backgroundType = 1;
			h = "1 * 			(		(		((safezoneW / safezoneH) min 1.2) / 1.2) / 20)";
			idc = 110021;
			w = "20 * 			(		((safezoneW / safezoneH) min 1.2) / 32)";
			x = "11 * 			(		((safezoneW / safezoneH) min 1.2) / 32) + 			(safezoneX)";
			y = "1 * 			(		(		((safezoneW / safezoneH) min 1.2) / 1.2) / 20) + 			(safezoneY + safezoneH - 		(		((safezoneW / safezoneH) min 1.2) / 1.2))";
		};
		class TileGroup: RscControlsGroupNoScrollbars
		{
			h = "safezoneH";
			idc = 115099;
			w = "safezoneWAbs";
			x = "safezoneXAbs";
			y = "safezoneY";
			class Controls
			{
				class Background: RscText
				{
					colorBackground[] = {0, 0, 0, 0.5};
					h = "safezoneH";
					idc = 114999;
					w = "safezoneWAbs";
					x = 0;
					y = 0;
				};
			};
		};
		class Vignette: RscVignette
		{
			idc = 114998;
		};
	};
	class objects
	{
		class Head: RscObject
		{
			boneHead = "head";
			boneLEye = "l_eye";
			boneLEyelidDown = "eye_lwl";
			boneLEyelidUp = "eye_upl";
			boneLPupil = "l_pupila";
			boneREye = "r_eye";
			boneREyelidDown = "eye_lwr";
			boneREyelidUp = "eye_upr";
			boneRPupil = "r_pupila";
			direction[] = {0, 0, 1};
			faceType = "Man_A3";
			idc = "IDC_NEW_USER_HEAD";
			model = "\A3\ui_f\objects\face_preview";
			modelWoman = "\A3\ui_f\objects\face_preview";
			scale = 0.21;
			selectionEyelid = "eyelids";
			selectionGlasses = "eyelids";
			selectionLBrow = "lBrow";
			selectionLip = "LLip";
			selectionLMouth = "lMouth";
			selectionMBrow = "mBrow";
			selectionMMouth = "mMouth";
			selectionPersonality = "personality";
			selectionRBrow = "rBrow";
			selectionRMouth = "rMouth";
			type = 80;
			up[] = {0, 1, 0};
			x = 0.75;
			xBack = 0.4;
			y = 0.48;
			yBack = 0.25;
			z = 0.25;
			zBack = 0.3;
		};
	};
};
