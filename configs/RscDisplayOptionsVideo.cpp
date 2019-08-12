class RscDisplayOptionsVideo
{
	enableDisplay = 1;
	idd = 5;
	movingEnable = 0;
	onLoad = "[""onLoad"",_this,""RscDisplayOptionsVideo"",'GUI'] call 	(uinamespace getvariable 'BIS_fnc_initDisplay')";
	onUnload = "[""onUnload"",_this,""RscDisplayOptionsVideo"",'GUI'] call 	(uinamespace getvariable 'BIS_fnc_initDisplay')";
	scriptName = "RscDisplayOptionsVideo";
	scriptPath = "GUI";
	class controls
	{
		class AAPPButton: RscButtonMenuLegacy
		{
			colorBackground[] = {0, 0, 0, 0};
			h = "1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			IDC = 8432;
			text = "AA &amp; PP";
			tooltip = "Anti-aliasing and post-process settings.";
			w = "8 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			x = "17 * 					(			((safezoneW / safezoneH) min 1.2) / 40) + 		(safezoneX + (safezoneW - 					((safezoneW / safezoneH) min 1.2))/2)";
			y = "3.2 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 		(safezoneY + (safezoneH - 					(			((safezoneW / safezoneH) min 1.2) / 1.2))/2)";
		};
		class BasicGroup: RscControlsGroup
		{
			h = "18.2 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = 2300;
			w = "38 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			x = "1 * 					(			((safezoneW / safezoneH) min 1.2) / 40) + 		(safezoneX + (safezoneW - 					((safezoneW / safezoneH) min 1.2))/2)";
			y = "4.7 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 		(safezoneY + (safezoneH - 					(			((safezoneW / safezoneH) min 1.2) / 1.2))/2)";
			class controls
			{
				class CA_SliderObjectVisibility: RscXSliderH
				{
					h = "1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					idc = 309;
					tooltip = "Object drawing distance (affected by overall visibility).";
					w = "9.5 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					x = "24.7 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					y = "3 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				};
				class CA_SliderShadowVisibility: RscXSliderH
				{
					h = "1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					idc = 312;
					tooltip = "Shadow drawing distance.";
					w = "9.5 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					x = "24.7 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					y = "4.5 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				};
				class CA_SliderVisibility: RscXSliderH
				{
					h = "1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					idc = 104;
					tooltip = "Overall environment drawing distance.";
					w = "9.5 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					x = "24.7 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					y = "1.5 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				};
				class CA_TextDynamicLights: CA_TextFillRate
				{
					h = "1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					idc = 1026;
					text = "Dynamic Lights:";
					w = "9.8 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					x = "19.7 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					y = "11.5 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				};
				class CA_TextFillRate: RscText
				{
					h = "1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					idc = 1018;
					shadow = 0;
					style = 1;
					text = "Sampling:";
					w = "8 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					x = "0 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					y = "1.5 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				};
				class CA_TextHDRDetail: CA_TextFillRate
				{
					h = "1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					idc = 1021;
					text = "HDR:";
					w = "9.8 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					x = "19.7 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					y = "10 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				};
				class CA_TextObjectsDetail: CA_TextFillRate
				{
					h = "1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					idc = 1030;
					text = "Objects:";
					w = "8 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					x = "0 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					y = "4.5 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				};
				class CA_TextObjectVisibility: CA_TextFillRate
				{
					h = "1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					idc = 1009;
					text = "Object:";
					w = "5 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					x = "19.7 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					y = "3 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				};
				class CA_TextOverallX: CA_TextFillRate
				{
					h = "1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					idc = 1007;
					text = "Overall:";
					w = "5 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					x = "19.7 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					y = "1.5 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				};
				class CA_TextParticlesQuality: CA_TextFillRate
				{
					h = "1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					idc = 1033;
					text = "Particles:";
					w = "8 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					x = "0 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					y = "10 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				};
				class CA_TextPIPDetail: CA_TextFillRate
				{
					h = "1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					idc = 1025;
					text = "PIP:";
					w = "8 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					x = "0 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					y = "13 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				};
				class CA_TextShadowDetail: CA_TextFillRate
				{
					h = "1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					idc = 1031;
					text = "Shadow:";
					w = "8 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					x = "0 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					y = "8.5 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				};
				class CA_TextShadowVisibility: CA_TextFillRate
				{
					h = "1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					idc = 313;
					text = "Shadow:";
					w = "5 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					x = "19.7 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					y = "4.5 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				};
				class CA_TextSWDetail: CA_TextFillRate
				{
					h = "1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					idc = 1032;
					text = "Cloud:";
					w = "8 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					x = "0 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					y = "11.5 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				};
				class CA_TextTextureDetail: CA_TextFillRate
				{
					h = "1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					idc = 1037;
					text = "Texture:";
					w = "8 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					x = "0 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					y = "3 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				};
				class CA_ValueDynamicLights: CA_ValueFillRate
				{
					h = "1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					idc = 144;
					tooltip = "Number of dynamic lights.";
					w = "8 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					wholeHeight = "6 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					x = "29.5 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					y = "11.5 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				};
				class CA_ValueFillRate: RscCombo
				{
					h = "1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					idc = 1234;
					tooltip = "Ratio of rendering resolution to screen resolution.";
					w = "8 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					wholeHeight = "15 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					x = "8 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					y = "1.5 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				};
				class CA_ValueHDRDetail: CA_ValueFillRate
				{
					h = "1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					idc = 131;
					tooltip = "High Dynamic Range lighting quality.";
					w = "8 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					x = "29.5 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					y = "10 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				};
				class CA_ValueObjectsDetail: CA_ValueTextureDetail
				{
					h = "1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					idc = 124;
					tooltip = "Objects quality level (geometry complexity and amount of objects in the scene).";
					w = "8 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					x = "8 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					y = "4.5 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				};
				class CA_ValueObjectVisibility: RscEdit
				{
					h = "1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					idc = 308;
					maxChars = 5;
					shadow = 0;
					style = 0;
					text = "BROKEN";
					w = "3.1 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					x = "34.4 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					y = "3 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				};
				class CA_ValueParticlesQuality: CA_ValueTextureDetail
				{
					h = "1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					idc = 143;
					tooltip = "Quality of particle effects.";
					w = "8 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					x = "8 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					y = "10 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				};
				class CA_ValuePIPDetail: CA_ValueFillRate
				{
					h = "1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					idc = 334;
					tooltip = "Picture-In-Picture quality (mirrors, cockpit screens).";
					w = "8 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					wholeHeight = "6 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					x = "8 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					y = "13 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				};
				class CA_ValueShadowDetail: CA_ValueTextureDetail
				{
					h = "1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					idc = 128;
					tooltip = "Shadow quality.";
					w = "8 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					x = "8 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					y = "8.5 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				};
				class CA_ValueShadowVisibility: RscEdit
				{
					h = "1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					idc = 311;
					maxChars = 5;
					shadow = 0;
					style = 0;
					text = "BROKEN";
					w = "3.1 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					x = "34.4 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					y = "4.5 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				};
				class CA_ValueSWDetail: CA_ValueTextureDetail
				{
					h = "1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					idc = 335;
					rows = 2;
					tooltip = "Cloud quality.";
					w = "8 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					x = "8 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					y = "11.5 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				};
				class CA_ValueTextureDetail: RscCombo
				{
					h = "1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					idc = 125;
					tooltip = "Texture quality level.";
					w = "8 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					x = "8 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					y = "3 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				};
				class CA_ValueVisibility: RscEdit
				{
					h = "1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					idc = 103;
					maxChars = 5;
					shadow = 0;
					style = 0;
					w = "3.1 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					x = "34.4 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					y = "1.5 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				};
				class EmptyText: RscText
				{
					h = "1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					idc = -1;
					w = "1 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					x = "0 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					y = "0 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				};
				class PerformanceWarning: RscPictureKeepAspect
				{
					h = "1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					idc = 1401;
					text = "\A3\Ui_f\data\GUI\Rsc\RscDisplayOptionsVideo\icon_performance.paa";
					tooltip = "Setting sampling to values higher than 100% may result in FPS drop on lower-end GPUs.";
					w = "1 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					x = "16.2 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					y = "1.5 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				};
				class TextLighting: RscText
				{
					colorBackground[] = {0, 0, 0, 1};
					h = "1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					idc = 1050;
					style = 0;
					text = "Lighting";
					w = "18.2 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					x = "19.8 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					y = "8.5 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				};
				class TextQuality: RscText
				{
					colorBackground[] = {0, 0, 0, 1};
					h = "1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					idc = 1046;
					style = 1;
					text = "Quality";
					w = "8 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					x = "0 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					y = "0 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				};
				class TextTerrain1: CA_TextFillRate
				{
					h = "1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					idc = 1029;
					text = "Terrain:";
					w = "8 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					x = "0 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					y = "6 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				};
				class TextVisibility: RscText
				{
					colorBackground[] = {0, 0, 0, 1};
					h = "1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					idc = 1017;
					style = 0;
					text = "Visibility";
					w = "18.2 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					x = "19.8 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					y = "0 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				};
				class TextWaterReflections: CA_TextFillRate
				{
					h = "1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					idc = 1049;
					text = "Water Reflections:";
					w = "9.8 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					x = "19.7 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					y = "13 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				};
				class ValueTerrain1: CA_ValueTextureDetail
				{
					h = "1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					idc = 123;
					rows = 4;
					tooltip = "Terrain quality (smoothness of the terrain surface and edges).";
					w = "8 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					x = "8 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					y = "6 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				};
				class ValueWaterReflections: RscCombo
				{
					h = "1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					idc = 337;
					tooltip = "Quality of screen-space reflections on water.";
					w = "8 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					x = "29.5 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					y = "13 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				};
			};
			class HScrollbar: HScrollbar
			{
				height = 0;
			};
			class VScrollbar: VScrollbar
			{
				width = 0;
			};
		};
		class CA_TextQualityPreference: RscText
		{
			h = "1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = 1002;
			shadow = 0;
			style = 0;
			text = "Overall Quality:";
			w = "8 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			x = "1 * 					(			((safezoneW / safezoneH) min 1.2) / 40) + 		(safezoneX + (safezoneW - 					((safezoneW / safezoneH) min 1.2))/2)";
			y = "2.1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 		(safezoneY + (safezoneH - 					(			((safezoneW / safezoneH) min 1.2) / 1.2))/2)";
		};
		class CA_ValueQualityPreference: RscCombo
		{
			h = "1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = 126;
			tooltip = "Overall quality level pre-sets.";
			w = "8 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			x = "9 * 					(			((safezoneW / safezoneH) min 1.2) / 40) + 		(safezoneX + (safezoneW - 					((safezoneW / safezoneH) min 1.2))/2)";
			y = "2.1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 		(safezoneY + (safezoneH - 					(			((safezoneW / safezoneH) min 1.2) / 1.2))/2)";
		};
		class DisplayButton: RscButtonMenuLegacy
		{
			colorBackground[] = {0, 0, 0, 0};
			h = "1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			IDC = 8433;
			text = "Display";
			tooltip = "Display settings (display mode, resolution, brightness).";
			w = "8 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			x = "9 * 					(			((safezoneW / safezoneH) min 1.2) / 40) + 		(safezoneX + (safezoneW - 					((safezoneW / safezoneH) min 1.2))/2)";
			y = "3.2 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 		(safezoneY + (safezoneH - 					(			((safezoneW / safezoneH) min 1.2) / 1.2))/2)";
		};
		class GeneralButton: RscButtonMenuLegacy
		{
			colorBackground[] = {0, 0, 0, 0};
			h = "1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			IDC = 8431;
			text = "General";
			tooltip = "General settings (quality, visibility).";
			w = "8 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			x = "1 * 					(			((safezoneW / safezoneH) min 1.2) / 40) + 		(safezoneX + (safezoneW - 					((safezoneW / safezoneH) min 1.2))/2)";
			y = "3.2 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 		(safezoneY + (safezoneH - 					(			((safezoneW / safezoneH) min 1.2) / 1.2))/2)";
		};
		class HideDialog: RscButtonMenu
		{
			h = "1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = 2406;
			shortcuts[] = {"0x00050000 + 3", 35};
			text = "Hide";
			tooltip = "Hide/show settings for easier image comparison.";
			w = "6.25 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			x = "13.7 * 					(			((safezoneW / safezoneH) min 1.2) / 40) + 		(safezoneX + (safezoneW - 					((safezoneW / safezoneH) min 1.2))/2)";
			y = "23 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 		(safezoneY + (safezoneH - 					(			((safezoneW / safezoneH) min 1.2) / 1.2))/2)";
		};
		class PlayersName: Title
		{
			colorBackground[] = {0, 0, 0, 0};
			h = "1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = 8434;
			style = 1;
			w = "23 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			x = "16 * 					(			((safezoneW / safezoneH) min 1.2) / 40) + 		(safezoneX + (safezoneW - 					((safezoneW / safezoneH) min 1.2))/2)";
			y = "1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 		(safezoneY + (safezoneH - 					(			((safezoneW / safezoneH) min 1.2) / 1.2))/2)";
		};
		class QualityGroup: RscControlsGroup
		{
			h = "18.2 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = 2302;
			w = "38 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			x = "1 * 					(			((safezoneW / safezoneH) min 1.2) / 40) + 		(safezoneX + (safezoneW - 					((safezoneW / safezoneH) min 1.2))/2)";
			y = "4.7 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 		(safezoneY + (safezoneH - 					(			((safezoneW / safezoneH) min 1.2) / 1.2))/2)";
			class controls
			{
				class CA_PictureAspectRatio: RscPicture
				{
					h = "(6 * 					(			((safezoneW / safezoneH) min 1.2) / 40)) * 4/3";
					idc = 1201;
					text = "\A3\ui_f\data\GUI\Rsc\RscDisplayOptionsVideo\aspect_circle_gr.paa";
					w = "6 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					x = "25.5 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					y = "0 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				};
				class CA_PictureAspectRatioBackground: RscPictureKeepAspect
				{
					colorText[] = {0, 0, 0, 1};
					h = "6 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					idc = 1200;
					text = "\A3\ui_f\data\GUI\Rsc\RscDisplayOptionsVideo\aspect_circle_gr.paa";
					w = "6 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					x = "25.5 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					y = "0 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				};
				class CA_PictureAspectRatioText: CA_TextDisplayMode
				{
					colorBackground[] = {0, 0, 0, 1};
					h = "1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					idc = 1016;
					style = 2;
					text = "Calibration images should overlap";
					w = "16 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					x = "21 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					y = "6 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				};
				class CA_SliderBrightness: RscXSliderH
				{
					h = "1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					idc = 112;
					tooltip = "Overall scene brightness.";
					w = "8 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					x = "8 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					y = "8.5 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				};
				class CA_SliderGamma: CA_SliderBrightness
				{
					h = "1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					idc = 110;
					tooltip = "Overall scene gamma. Can be adjusted only in fullscreen display mode.";
					w = "8 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					x = "8 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					y = "10 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				};
				class CA_TextAspectRatio: CA_TextDisplayMode
				{
					h = "1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					idc = 1015;
					text = "Aspect ratio:";
					w = "8 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					x = "0 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					y = "3 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				};
				class CA_TextBrightness: CA_TextDisplayMode
				{
					h = "1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					idc = 1003;
					style = 1;
					text = "Brightness:";
					w = "8 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					x = "0 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					y = "8.5 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				};
				class CA_TextDisplayMode: RscText
				{
					h = "1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					idc = 1028;
					shadow = 0;
					style = 1;
					text = "Display mode:";
					w = "8 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					x = "0 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					y = "0 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				};
				class CA_TextGamma: CA_TextDisplayMode
				{
					h = "1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					idc = 1005;
					text = "Gamma:";
					w = "8 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					x = "0 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					y = "10 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				};
				class CA_TextIGUISize: CA_TextDisplayMode
				{
					h = "1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					idc = 1014;
					style = 1;
					text = "Interface size:";
					w = "8 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					x = "0 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					y = "6 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				};
				class CA_TextResolution: CA_TextDisplayMode
				{
					h = "1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					idc = 1013;
					style = 1;
					text = "Resolution:";
					w = "8 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					x = "0 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					y = "1.5 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				};
				class CA_TextVsync: CA_TextDisplayMode
				{
					h = "1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					idc = 1022;
					text = "Vsync:";
					w = "8 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					x = "0 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					y = "4.5 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				};
				class CA_ValueAspectRatio: CA_ValueResolution
				{
					h = "1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					idc = 134;
					tooltip = "Should match aspect ratio of the monitor.";
					w = "8 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					x = "8 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					y = "3 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				};
				class CA_ValueBrightness: RscEdit
				{
					h = "1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					idc = 111;
					maxChars = 3;
					style = 0;
					w = "2.5 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					x = "16.2 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					y = "8.5 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				};
				class CA_ValueDisplayMode: RscCombo
				{
					h = "1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					idc = 1131;
					tooltip = "Display mode of the game.";
					w = "8 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					x = "8 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					y = "0 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				};
				class CA_ValueGamma: RscEdit
				{
					h = "1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					idc = 109;
					maxChars = 3;
					style = 0;
					w = "2.5 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					x = "16.2 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					y = "10 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				};
				class CA_ValueIGUISize: CA_ValueResolution
				{
					h = "1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					idc = 136;
					tooltip = "Interface size.";
					w = "8 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					x = "8 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					y = "6 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				};
				class CA_ValueResolution: RscCombo
				{
					h = "1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					idc = 113;
					tooltip = "Should match resolution of the monitor.";
					w = "8 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					wholeHeight = "15 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					x = "8 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					y = "1.5 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				};
				class CA_ValueVsync: CA_ValueResolution
				{
					h = "1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					idc = 140;
					tooltip = "Vertical synchronization (prevents image tearing).";
					w = "8 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					x = "8 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					y = "4.5 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				};
				class PictureGammaTest: RscPicture
				{
					h = "2.8 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					idc = 1202;
					text = "\A3\Ui_f\data\GUI\Rsc\RscDisplayOptionsVideo\GammaTestImage_gs.paa";
					tooltip = "Adjust the gamma slider, so the tick is barely visible and cross not visible at all.";
					w = "5.6 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					x = "9.2 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					y = "11.1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				};
			};
			class HScrollbar: HScrollbar
			{
				height = 0;
			};
			class VScrollbar: VScrollbar
			{
				width = 0;
			};
		};
		class RenderingGroup: RscControlsGroup
		{
			h = "18.2 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = 2301;
			w = "38 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			x = "1 * 					(			((safezoneW / safezoneH) min 1.2) / 40) + 		(safezoneX + (safezoneW - 					((safezoneW / safezoneH) min 1.2))/2)";
			y = "4.7 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 		(safezoneY + (safezoneH - 					(			((safezoneW / safezoneH) min 1.2) / 1.2))/2)";
			class controls
			{
				class CA_TextAADetail: TextBloom
				{
					h = "1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					idc = 1020;
					text = "FSAA:";
					w = "8 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					x = "21.5 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					y = "9 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				};
				class CA_TextAnisotropicDetail: TextBloom
				{
					h = "1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					idc = 1019;
					text = "Aniso. Filtering:";
					w = "8 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					x = "21.5 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					y = "13.5 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				};
				class CA_TextATOC: TextBloom
				{
					h = "1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					idc = 1027;
					text = "AtoC:";
					w = "8 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					x = "21.5 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					y = "10.5 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				};
				class CA_TextFXAA: TextBloom
				{
					h = "1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					idc = 1024;
					text = "PPAA:";
					w = "8 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					x = "21.5 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					y = "12 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				};
				class CA_ValueAADetail: RscCombo
				{
					h = "1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					idc = 133;
					tooltip = "Full Screen Anti-Aliasing. Smoothens edges of objects.";
					w = "8 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					x = "29.5 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					y = "9 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				};
				class CA_ValueAnisotropicDetail: RscCombo
				{
					h = "1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					idc = 130;
					tooltip = "Anisotropic filtering (quality of textured surfaces at shallow angles and in the distance).";
					w = "8 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					wholeHeight = "4 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					x = "29.5 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					y = "13.5 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				};
				class CA_ValueATOC: RscCombo
				{
					h = "1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					idc = 1300;
					tooltip = "Alpha to coverage - uses the alpha of the texture as a coverage mask for antialiasing.";
					w = "8 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					wholeHeight = "7 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					x = "29.5 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					y = "10.5 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				};
				class CA_ValueFXAA: RscCombo
				{
					h = "1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					idc = 336;
					tooltip = "Postprocess antialiasing.";
					w = "8 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					wholeHeight = "6 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					x = "29.5 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					y = "12 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				};
				class EditBloom: RscEdit
				{
					h = "1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					idc = 1312;
					maxChars = 3;
					w = "2.1 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					x = "16.2 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					y = "1.5 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				};
				class EditDOF: RscEdit
				{
					h = "1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					idc = 1318;
					maxChars = 3;
					w = "2.1 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					x = "16.2 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					y = "6 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				};
				class EditRadialBlur: RscEdit
				{
					h = "1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					idc = 1316;
					maxChars = 3;
					w = "2.1 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					x = "16.2 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					y = "3 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				};
				class EditRotationBlur: RscEdit
				{
					h = "1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					idc = 1314;
					maxChars = 3;
					w = "2.1 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					x = "16.2 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					y = "4.5 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				};
				class EditSharpenFilter: RscEdit
				{
					h = "1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					idc = 1321;
					maxChars = 3;
					w = "2.1 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					x = "16.2 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					y = "7.5 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				};
				class SliderBrightnessPP: RscXSliderH
				{
					h = "1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					idc = 1323;
					tooltip = "Brightness postprocess applied on the resulting image.";
					w = "8 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					x = "26.8 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					y = "3 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				};
				class SliderContrast: RscXSliderH
				{
					h = "1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					idc = 1325;
					tooltip = "Contrast postprocess applied on the resulting image.";
					w = "8 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					x = "26.8 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					y = "4.5 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				};
				class SliderSaturation: RscXSliderH
				{
					h = "1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					idc = 1327;
					tooltip = "Saturation postprocess applied on the resulting image.";
					w = "8 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					x = "26.8 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					y = "6 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				};
				class TextAntialias: RscText
				{
					colorBackground[] = {0, 0, 0, 1};
					h = "1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					idc = 1035;
					style = 0;
					text = "Antialiasing";
					w = "18.2 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					x = "19.8 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					y = "7.5 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				};
				class TextBloom: RscText
				{
					h = "1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					idc = 1039;
					shadow = 0;
					style = 1;
					text = "Bloom:";
					w = "8 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					x = "0 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					y = "1.5 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				};
				class TextBrightnessPP: TextBloom
				{
					h = "1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					idc = 1052;
					text = "Brightness:";
					w = "8 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					x = "18.8 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					y = "3 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				};
				class TextCaustics: TextBloom
				{
					h = "1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					idc = 1045;
					text = "Caustics:";
					w = "8 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					x = "0 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					y = "10.5 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				};
				class TextContrast: TextBloom
				{
					h = "1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					idc = 1053;
					text = "Contrast:";
					w = "8 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					x = "18.8 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					y = "4.5 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				};
				class TextDOF: TextBloom
				{
					h = "1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					idc = 1044;
					text = "Depth Of Field:";
					w = "8 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					x = "0 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					y = "6 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				};
				class TextImageAdjustments: TextBloom
				{
					h = "1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					idc = 1051;
					text = "Color Preset:";
					w = "8 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					x = "18.8 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					y = "1.5 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				};
				class TextPostprocesses: RscText
				{
					colorBackground[] = {0, 0, 0, 1};
					h = "1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					idc = 1036;
					style = 1;
					text = "Postprocesses";
					w = "8 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					x = "0 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					y = "0 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				};
				class TextPPColorCorrections: RscText
				{
					colorBackground[] = {0, 0, 0, 1};
					h = "1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					idc = 1055;
					style = 0;
					text = "Postprocess Color Corrections";
					w = "18.2 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					x = "19.8 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					y = "0 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				};
				class TextRadialBlur: TextBloom
				{
					h = "1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					idc = 1041;
					text = "Radial Blur:";
					w = "8 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					x = "0 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					y = "3 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				};
				class TextRotationBlur: TextBloom
				{
					h = "1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					idc = 1042;
					text = "Rotation Blur:";
					w = "8 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					x = "0 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					y = "4.5 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				};
				class TextSaturation: TextBloom
				{
					h = "1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					idc = 1054;
					text = "Saturation:";
					w = "8 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					x = "18.8 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					y = "6 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				};
				class TextSharpenFilter: TextBloom
				{
					h = "1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					idc = 1048;
					text = "Sharpen Filter:";
					w = "8 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					x = "0 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					y = "7.5 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				};
				class TextSSAO: TextBloom
				{
					h = "1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					idc = 1043;
					text = "AO:";
					w = "8 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					x = "0 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					y = "9 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				};
				class ValueBloom: RscXSliderH
				{
					h = "1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					idc = 1311;
					tooltip = "Glow of bright areas in the scene.";
					w = "8 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					x = "8 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					y = "1.5 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				};
				class ValueBrightnessPP: RscEdit
				{
					h = "1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					idc = 1324;
					maxChars = 3;
					style = 0;
					w = "2.5 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					x = "35 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					y = "3 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				};
				class ValueCaustics: RscCombo
				{
					h = "1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					idc = 1319;
					tooltip = "Reflected or refracted light rays. Could be visible e. g. at the sea bed.";
					w = "8 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					x = "8 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					y = "10.5 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				};
				class ValueContrast: RscEdit
				{
					h = "1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					idc = 1326;
					maxChars = 3;
					style = 0;
					w = "2.5 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					x = "35 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					y = "4.5 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				};
				class ValueDOF: RscXSliderH
				{
					h = "1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					idc = 1317;
					tooltip = "Amount of blurring of out-of-focus objects.";
					w = "8 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					x = "8 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					y = "6 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				};
				class ValueImageAdjustments: RscCombo
				{
					h = "1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					idc = 1322;
					tooltip = "Postprocess image adjustments like brightness, contrast and saturation.";
					w = "10.7 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					x = "26.8 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					y = "1.5 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				};
				class ValueRadialBlur: RscXSliderH
				{
					h = "1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					idc = 1315;
					tooltip = "Slightly blurred edges of the image when moving fast.";
					w = "8 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					x = "8 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					y = "3 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				};
				class ValueRotationBlur: RscXSliderH
				{
					h = "1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					idc = 1313;
					tooltip = "Blurring of the scene during fast rotations.";
					w = "8 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					x = "8 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					y = "4.5 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				};
				class ValueSaturation: RscEdit
				{
					h = "1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					idc = 1328;
					maxChars = 3;
					style = 0;
					w = "2.5 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					x = "35 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					y = "6 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				};
				class ValueSharpenFilter: RscXSliderH
				{
					h = "1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					idc = 1320;
					tooltip = "Makes the resulting image appear sharper.";
					w = "8 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					x = "8 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					y = "7.5 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				};
				class ValueSSAO: RscCombo
				{
					h = "1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					idc = 1310;
					tooltip = "Ambient occlusion.";
					w = "8 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					x = "8 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					y = "9 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				};
			};
			class HScrollbar: HScrollbar
			{
				height = 0;
			};
			class VScrollbar: VScrollbar
			{
				width = 0;
			};
		};
		class TextFPS: RscText
		{
			h = "1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = 1400;
			shadow = 0;
			style = 1;
			text = "38 FPS";
			tooltip = "Frame rate indicator. When comparing values, take scene complexity into account.";
			w = "4 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			x = "35 * 					(			((safezoneW / safezoneH) min 1.2) / 40) + 		(safezoneX + (safezoneW - 					((safezoneW / safezoneH) min 1.2))/2)";
			y = "2.1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 		(safezoneY + (safezoneH - 					(			((safezoneW / safezoneH) min 1.2) / 1.2))/2)";
		};
		class Title: RscTitle
		{
			colorBackground[] = {0, 0, 0, 0};
			h = "1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = 1000;
			style = 0;
			text = "Video Options";
			w = "15 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			x = "1 * 					(			((safezoneW / safezoneH) min 1.2) / 40) + 		(safezoneX + (safezoneW - 					((safezoneW / safezoneH) min 1.2))/2)";
			y = "1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 		(safezoneY + (safezoneH - 					(			((safezoneW / safezoneH) min 1.2) / 1.2))/2)";
		};
		class Video_Cancel: RscButtonMenuCancel
		{
			h = "1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			w = "6.25 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			x = "1 * 					(			((safezoneW / safezoneH) min 1.2) / 40) + 		(safezoneX + (safezoneW - 					((safezoneW / safezoneH) min 1.2))/2)";
			y = "23 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 		(safezoneY + (safezoneH - 					(			((safezoneW / safezoneH) min 1.2) / 1.2))/2)";
		};
		class Video_OK: RscButtonMenuOK
		{
			h = "1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			w = "6.25 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			x = "32.75 * 					(			((safezoneW / safezoneH) min 1.2) / 40) + 		(safezoneX + (safezoneW - 					((safezoneW / safezoneH) min 1.2))/2)";
			y = "23 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 		(safezoneY + (safezoneH - 					(			((safezoneW / safezoneH) min 1.2) / 1.2))/2)";
		};
		class VideoAutodetect: RscButtonMenu
		{
			h = "1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = 1291;
			shortcuts[] = {"0x00050000 + 2"};
			text = "Autodetect";
			tooltip = "Autodetect HW performance and set all settings according to the results.";
			w = "6.25 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			x = "7.35 * 					(			((safezoneW / safezoneH) min 1.2) / 40) + 		(safezoneX + (safezoneW - 					((safezoneW / safezoneH) min 1.2))/2)";
			y = "23 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 		(safezoneY + (safezoneH - 					(			((safezoneW / safezoneH) min 1.2) / 1.2))/2)";
		};
	};
	class ControlsBackground
	{
		class MainBackground: RscText
		{
			colorBackground[] = {0, 0, 0, 0.7};
			h = "19.7 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = 1083;
			w = "38 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			x = "1 * 					(			((safezoneW / safezoneH) min 1.2) / 40) + 		(safezoneX + (safezoneW - 					((safezoneW / safezoneH) min 1.2))/2)";
			y = "3.2 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 		(safezoneY + (safezoneH - 					(			((safezoneW / safezoneH) min 1.2) / 1.2))/2)";
		};
		class OverallQualityBackground: RscText
		{
			colorBackground[] = {0, 0, 0, 0.7};
			h = "1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = 1082;
			w = "38 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			x = "1 * 					(			((safezoneW / safezoneH) min 1.2) / 40) + 		(safezoneX + (safezoneW - 					((safezoneW / safezoneH) min 1.2))/2)";
			y = "2.1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 		(safezoneY + (safezoneH - 					(			((safezoneW / safezoneH) min 1.2) / 1.2))/2)";
		};
		class TabsBackgroundLeft: RscText
		{
			colorBackground[] = {0, 0, 0, 1};
			h = "1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = 1081;
			w = "38 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			x = "1 * 					(			((safezoneW / safezoneH) min 1.2) / 40) + 		(safezoneX + (safezoneW - 					((safezoneW / safezoneH) min 1.2))/2)";
			y = "3.2 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 		(safezoneY + (safezoneH - 					(			((safezoneW / safezoneH) min 1.2) / 1.2))/2)";
		};
		class TitleBackground: RscText
		{
			colorBackground[] = {"(profilenamespace getvariable ['GUI_BCG_RGB_R',0.13])", "(profilenamespace getvariable ['GUI_BCG_RGB_G',0.54])", "(profilenamespace getvariable ['GUI_BCG_RGB_B',0.21])", "(profilenamespace getvariable ['GUI_BCG_RGB_A',0.8])"};
			h = "1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = 1080;
			w = "38 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			x = "1 * 					(			((safezoneW / safezoneH) min 1.2) / 40) + 		(safezoneX + (safezoneW - 					((safezoneW / safezoneH) min 1.2))/2)";
			y = "1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 		(safezoneY + (safezoneH - 					(			((safezoneW / safezoneH) min 1.2) / 1.2))/2)";
		};
	};
};
