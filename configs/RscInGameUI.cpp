class RscInGameUI
{
	access = 0;
	colorPrepare[] = {"(profilenamespace getvariable ['IGUI_WARNING_RGB_R',0.8])", "(profilenamespace getvariable ['IGUI_WARNING_RGB_G',0.5])", "(profilenamespace getvariable ['IGUI_WARNING_RGB_B',0.0])", "(profilenamespace getvariable ['IGUI_WARNING_RGB_A',0.8])"};
	colorReady[] = {"(profilenamespace getvariable ['IGUI_TEXT_RGB_R',0])", "(profilenamespace getvariable ['IGUI_TEXT_RGB_G',1])", "(profilenamespace getvariable ['IGUI_TEXT_RGB_B',1])", "(profilenamespace getvariable ['IGUI_TEXT_RGB_A',0.8])"};
	colorReadyCivilian[] = {"(profilenamespace getvariable ['IGUI_TEXT_RGB_R',0])", "(profilenamespace getvariable ['IGUI_TEXT_RGB_G',1])", "(profilenamespace getvariable ['IGUI_TEXT_RGB_B',1])", "(profilenamespace getvariable ['IGUI_TEXT_RGB_A',0.8])"};
	colorReadyEast[] = {"(profilenamespace getvariable ['IGUI_TEXT_RGB_R',0])", "(profilenamespace getvariable ['IGUI_TEXT_RGB_G',1])", "(profilenamespace getvariable ['IGUI_TEXT_RGB_B',1])", "(profilenamespace getvariable ['IGUI_TEXT_RGB_A',0.8])"};
	colorReadyIndependent[] = {"(profilenamespace getvariable ['IGUI_TEXT_RGB_R',0])", "(profilenamespace getvariable ['IGUI_TEXT_RGB_G',1])", "(profilenamespace getvariable ['IGUI_TEXT_RGB_B',1])", "(profilenamespace getvariable ['IGUI_TEXT_RGB_A',0.8])"};
	colorReadyWest[] = {"(profilenamespace getvariable ['IGUI_TEXT_RGB_R',0])", "(profilenamespace getvariable ['IGUI_TEXT_RGB_G',1])", "(profilenamespace getvariable ['IGUI_TEXT_RGB_B',1])", "(profilenamespace getvariable ['IGUI_TEXT_RGB_A',0.8])"};
	colorUnload[] = {"(profilenamespace getvariable ['IGUI_ERROR_RGB_R',0.8])", "(profilenamespace getvariable ['IGUI_ERROR_RGB_G',0.0])", "(profilenamespace getvariable ['IGUI_ERROR_RGB_B',0.0])", "(profilenamespace getvariable ['IGUI_ERROR_RGB_A',1.0])"};
	class CA_HUDRscControlsGroup: RscControlsGroup
	{
		class HScrollbar: HScrollbar
		{
			color[] = {"(profilenamespace getvariable ['IGUI_TEXT_RGB_R',0])", "(profilenamespace getvariable ['IGUI_TEXT_RGB_G',1])", "(profilenamespace getvariable ['IGUI_TEXT_RGB_B',1])", "(profilenamespace getvariable ['IGUI_TEXT_RGB_A',0.8])"};
			height = 0.001;
		};
		class VScrollbar: VScrollbar
		{
			autoScrollDelay = 5;
			autoScrollRewind = 0;
			autoScrollSpeed = -1;
			color[] = {"(profilenamespace getvariable ['IGUI_TEXT_RGB_R',0])", "(profilenamespace getvariable ['IGUI_TEXT_RGB_G',1])", "(profilenamespace getvariable ['IGUI_TEXT_RGB_B',1])", "(profilenamespace getvariable ['IGUI_TEXT_RGB_A',0.8])"};
			width = 0.001;
		};
	};
	class RscHint
	{
		controls[] = {"Background", "Hint"};
		idd = 301;
		movingEnable = 0;
		class Background: RscText
		{
			colorBackground[] = {0, 0, 0, 0.7};
			colorText[] = {0, 0, 0, 0};
			fixedWidth = 0;
			font = "TahomaB";
			h = "(8 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25))";
			idc = 101;
			shadow = 1;
			sizeEx = 0;
			style = 128;
			text = "";
			w = "(12 * 			(			((safezoneW / safezoneH) min 1.2) / 40))";
			x = "((safezoneX + safezoneW) - 		(12 * 			(			((safezoneW / safezoneH) min 1.2) / 40)) - 1 * 			(			((safezoneW / safezoneH) min 1.2) / 40))";
			y = "(safezoneY + 6 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25))";
		};
		class Hint: RscStructuredText
		{
			colorBackground[] = {0, 0, 0, 0};
			colorText[] = {1, 1, 1, 1};
			font = "TahomaB";
			h = "(8 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)) - 0.8*					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = 102;
			lineSpacing = 1;
			shadow = 1;
			size = "(			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 0.8)";
			sizeEx = 0.027;
			style = 16;
			text = "ERROR - replace";
			w = "(12 * 			(			((safezoneW / safezoneH) min 1.2) / 40)) - 0.8*					(			((safezoneW / safezoneH) min 1.2) / 40)";
			x = "((safezoneX + safezoneW) - 		(12 * 			(			((safezoneW / safezoneH) min 1.2) / 40)) - 1 * 			(			((safezoneW / safezoneH) min 1.2) / 40)) + 0.4*					(			((safezoneW / safezoneH) min 1.2) / 40)";
			y = "(safezoneY + 6 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)) + 0.3*					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			class Attributes: Attributes
			{
				align = "center";
				color = "#ffffff";
				shadow = 0;
			};
		};
	};
	class RscOptics_APC_Tracked_01_gunner: RscUnitInfo
	{
		controls[] = {"CA_Zeroing", "CA_IGUI_elements_group", "CA_APC_WFOV_mode_group", "CA_APC_NFOV_mode_group"};
		idd = 300;
		class CA_APC_NFOV_mode_group: RscControlsGroupNoScrollbars
		{
			h = "40 * 		(0.025 * SafezoneH)";
			idc = 162;
			w = "61.5 * 		(0.01875 * SafezoneH)";
			x = "-4 * 		(0.01875 * SafezoneH) + 			(safezoneX)";
			y = "0 * 		(0.025 * SafezoneH) + 		(SafezoneY)";
			class controls
			{
				class CA_FOVModeNFOV: RscText
				{
					colorBackground[] = {0, 0, 0, 1};
					font = "EtelkaMonospacePro";
					h = "1 * 		(0.025 * SafezoneH)";
					idc = 1007;
					shadow = 0;
					sizeEx = "0.028*SafezoneH";
					text = "NFOV";
					w = "4.5 * 		(0.01875 * SafezoneH)";
					x = "5.4 * 		(0.01875 * SafezoneH)";
					y = "21.95 * 		(0.025 * SafezoneH)";
				};
			};
		};
		class CA_APC_WFOV_mode_group: RscControlsGroupNoScrollbars
		{
			h = "40 * 		(0.025 * SafezoneH)";
			idc = 163;
			w = "61.5 * 		(0.01875 * SafezoneH)";
			x = "-4 * 		(0.01875 * SafezoneH) + 			(safezoneX)";
			y = "0 * 		(0.025 * SafezoneH) + 		(SafezoneY)";
			class controls
			{
				class CA_FOVModeWFOV: RscText
				{
					colorBackground[] = {0, 0, 0, 1};
					font = "EtelkaMonospacePro";
					h = "1 * 		(0.025 * SafezoneH)";
					idc = 1002;
					shadow = 0;
					sizeEx = "0.028*SafezoneH";
					text = "WFOV";
					w = "4.5 * 		(0.01875 * SafezoneH)";
					x = "5.4 * 		(0.01875 * SafezoneH)";
					y = "21.95 * 		(0.025 * SafezoneH)";
				};
			};
		};
		class CA_IGUI_elements_group: RscControlsGroup
		{
			h = "40 * 		(0.025 * SafezoneH)";
			idc = 170;
			w = "61.5 * 		(0.01875 * SafezoneH)";
			x = "-4 * 		(0.01875 * SafezoneH) + 			(safezoneX)";
			y = "0 * 		(0.025 * SafezoneH) + 		(SafezoneY)";
			class controls
			{
				class CA_Distance: RscText
				{
					font = "EtelkaMonospacePro";
					h = "2 * 		(0.025 * SafezoneH)";
					idc = 198;
					shadow = 0;
					sizeEx = "0.040*SafezoneH";
					style = 0;
					text = "2456";
					w = "5 * 		(0.01875 * SafezoneH)";
					x = "24.15 * 		(0.01875 * SafezoneH)";
					y = "28.5 * 		(0.025 * SafezoneH)";
				};
				class CA_Heading: RscText
				{
					font = "EtelkaMonospacePro";
					h = "1 * 		(0.025 * SafezoneH)";
					idc = 156;
					shadow = 0;
					sizeEx = "0.038*SafezoneH";
					style = 2;
					text = "015";
					w = "3 * 		(0.01875 * SafezoneH)";
					x = "25.15 * 		(0.01875 * SafezoneH)";
					y = "11 * 		(0.025 * SafezoneH)";
				};
				class CA_OpticsPitch: RscText
				{
					colorBackground[] = {0, 0, 0, 1};
					font = "EtelkaMonospacePro";
					h = "1 * 		(0.025 * SafezoneH)";
					idc = 182;
					shadow = 0;
					sizeEx = "0.028*SafezoneH";
					style = 0;
					text = "36";
					w = "4 * 		(0.01875 * SafezoneH)";
					x = "10.1 * 		(0.01875 * SafezoneH)";
					y = "20 * 		(0.025 * SafezoneH)";
				};
				class FireSolutionValid: RscPicture
				{
					h = "0.6 * 		(0.025 * SafezoneH)";
					idc = 200;
					text = "\A3\Ui_f\data\IGUI\RscIngameUI\RscOptics\square.paa";
					w = "0.6 * 		(0.01875 * SafezoneH)";
					x = "24.25 * 		(0.01875 * SafezoneH)";
					y = "28.5 * 		(0.025 * SafezoneH)";
				};
				class TargetSpeed: TargetSpeedText
				{
					idc = 199;
					style = 0;
					text = "2456";
					w = "5.2 * 		(0.01875 * SafezoneH)";
					x = "7.2 * 		(0.025 * SafezoneH)";
				};
				class TargetSpeedText: RscText
				{
					font = "EtelkaMonospacePro";
					h = "1.2 * 		(0.025 * SafezoneH)";
					idc = 1050;
					shadow = 0;
					sizeEx = "0.032*SafezoneH";
					style = 1;
					text = "SPD:";
					w = "3 * 		(0.01875 * SafezoneH)";
					x = "4.85 * 		(0.025 * SafezoneH)";
					y = "29.2 * 		(0.025 * SafezoneH)";
				};
				class TextACQ: RscText
				{
					colorBackground[] = {0, 0, 0, 1};
					font = "EtelkaMonospacePro";
					h = "1 * 		(0.025 * SafezoneH)";
					idc = 1012;
					shadow = 0;
					sizeEx = "0.028*SafezoneH";
					text = "ACQ:CENT-Au";
					w = "7.5 * 		(0.01875 * SafezoneH)";
					x = "5.4 * 		(0.01875 * SafezoneH)";
					y = "30 * 		(0.025 * SafezoneH)";
				};
				class TextCENT: RscText
				{
					colorBackground[] = {0, 0, 0, 1};
					font = "EtelkaMonospacePro";
					h = "1 * 		(0.025 * SafezoneH)";
					idc = 1014;
					shadow = 0;
					sizeEx = "0.028*SafezoneH";
					text = "CENT-Wt";
					w = "5 * 		(0.01875 * SafezoneH)";
					x = "15.5 * 		(0.01875 * SafezoneH)";
					y = "30 * 		(0.025 * SafezoneH)";
				};
				class TextColonDist: RscText
				{
					colorBackground[] = {0, 0, 0, 1};
					font = "EtelkaMonospacePro";
					h = "1 * 		(0.025 * SafezoneH)";
					idc = 1008;
					shadow = 0;
					sizeEx = "0.028*SafezoneH";
					text = ":";
					w = "1 * 		(0.01875 * SafezoneH)";
					x = "9.3 * 		(0.01875 * SafezoneH)";
					y = "19 * 		(0.025 * SafezoneH)";
				};
				class TextColonEL: RscText
				{
					colorBackground[] = {0, 0, 0, 1};
					font = "EtelkaMonospacePro";
					h = "1 * 		(0.025 * SafezoneH)";
					idc = 1009;
					shadow = 0;
					sizeEx = "0.028*SafezoneH";
					text = ":";
					w = "1 * 		(0.01875 * SafezoneH)";
					x = "9.3 * 		(0.01875 * SafezoneH)";
					y = "20 * 		(0.025 * SafezoneH)";
				};
				class TextCST: RscText
				{
					colorBackground[] = {1, 1, 1, 1};
					colorText[] = {0, 0, 0, 1};
					font = "EtelkaMonospacePro";
					h = "1 * 		(0.025 * SafezoneH)";
					idc = 1013;
					shadow = 0;
					sizeEx = "0.028*SafezoneH";
					text = "CST:";
					w = "2.8 * 		(0.01875 * SafezoneH)";
					x = "12.9 * 		(0.01875 * SafezoneH)";
					y = "30 * 		(0.025 * SafezoneH)";
				};
				class TextDist: RscText
				{
					colorBackground[] = {0, 0, 0, 1};
					font = "EtelkaMonospacePro";
					h = "1 * 		(0.025 * SafezoneH)";
					idc = 1003;
					shadow = 0;
					sizeEx = "0.028*SafezoneH";
					text = "DIST";
					w = "5 * 		(0.01875 * SafezoneH)";
					x = "5.4 * 		(0.01875 * SafezoneH)";
					y = "19 * 		(0.025 * SafezoneH)";
				};
				class TextEL: RscText
				{
					colorBackground[] = {0, 0, 0, 1};
					font = "EtelkaMonospacePro";
					h = "1 * 		(0.025 * SafezoneH)";
					idc = 1010;
					shadow = 0;
					sizeEx = "0.028*SafezoneH";
					text = "EL";
					w = "5 * 		(0.01875 * SafezoneH)";
					x = "5.4 * 		(0.01875 * SafezoneH)";
					y = "20 * 		(0.025 * SafezoneH)";
				};
				class TextRadar: RscText
				{
					colorBackground[] = {0, 0, 0, 1};
					font = "EtelkaMonospacePro";
					h = "1 * 		(0.025 * SafezoneH)";
					idc = 1011;
					shadow = 0;
					sizeEx = "0.028*SafezoneH";
					text = "RADAR";
					w = "4.5 * 		(0.01875 * SafezoneH)";
					x = "5.4 * 		(0.01875 * SafezoneH)";
					y = "20.98 * 		(0.025 * SafezoneH)";
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
	};
	class RscOptics_APC_Tracked_03_gunner: RscUnitInfo
	{
		controls[] = {"CA_Zeroing", "CA_IGUI_elements_group", "CA_APC_WFOV_mode_group", "CA_APC_NFOV_mode_group"};
		idd = 300;
		class CA_APC_NFOV_mode_group: RscControlsGroupNoScrollbars
		{
			h = "40 * 		(0.025 * SafezoneH)";
			idc = 162;
			w = "53.5 * 		(0.01875 * SafezoneH)";
			x = "0 * 		(0.01875 * SafezoneH) + 		(SafezoneX + ((SafezoneW - SafezoneH) / 2))";
			y = "0 * 		(0.025 * SafezoneH) + 		(SafezoneY)";
			class controls
			{
				class CA_FOVModeNFOV: RscText
				{
					font = "EtelkaMonospacePro";
					h = "1.2 * 		(0.025 * SafezoneH)";
					idc = 1007;
					shadow = 0;
					sizeEx = "0.038*SafezoneH";
					text = "NFOV";
					w = "5 * 		(0.01875 * SafezoneH)";
					x = "8 * 		(0.01875 * SafezoneH)";
					y = "9 * 		(0.025 * SafezoneH)";
				};
			};
		};
		class CA_APC_WFOV_mode_group: RscControlsGroupNoScrollbars
		{
			h = "40 * 		(0.025 * SafezoneH)";
			idc = 163;
			w = "53.5 * 		(0.01875 * SafezoneH)";
			x = "0 * 		(0.01875 * SafezoneH) + 		(SafezoneX + ((SafezoneW - SafezoneH) / 2))";
			y = "0 * 		(0.025 * SafezoneH) + 		(SafezoneY)";
			class controls
			{
				class CA_FOVModeWFOV: RscText
				{
					font = "EtelkaMonospacePro";
					h = "1.2 * 		(0.025 * SafezoneH)";
					idc = 1002;
					shadow = 0;
					sizeEx = "0.038*SafezoneH";
					text = "WFOV";
					w = "5 * 		(0.01875 * SafezoneH)";
					x = "8 * 		(0.01875 * SafezoneH)";
					y = "9 * 		(0.025 * SafezoneH)";
				};
			};
		};
		class CA_IGUI_elements_group: RscControlsGroup
		{
			h = "40 * 		(0.025 * SafezoneH)";
			idc = 170;
			w = "53.5 * 		(0.01875 * SafezoneH)";
			x = "0 * 		(0.01875 * SafezoneH) + 		(SafezoneX + ((SafezoneW - SafezoneH) / 2))";
			y = "0 * 		(0.025 * SafezoneH) + 		(SafezoneY)";
			class controls
			{
				class CA_Distance: RscText
				{
					font = "EtelkaMonospacePro";
					h = "2 * 		(0.025 * SafezoneH)";
					idc = 198;
					shadow = 0;
					sizeEx = "0.040*SafezoneH";
					style = 2;
					text = "2456";
					w = "5 * 		(0.01875 * SafezoneH)";
					x = "24.15 * 		(0.01875 * SafezoneH)";
					y = "28.5 * 		(0.025 * SafezoneH)";
				};
				class CA_FlirMode: RscText
				{
					font = "EtelkaMonospacePro";
					h = "1.2 * 		(0.025 * SafezoneH)";
					idc = 153;
					shadow = 0;
					sizeEx = "0.038*SafezoneH";
					style = 0;
					text = "BHOT";
					w = "4.5 * 		(0.01875 * SafezoneH)";
					x = "44.2 * 		(0.01875 * SafezoneH)";
					y = "9 * 		(0.025 * SafezoneH)";
				};
				class CA_Heading: RscText
				{
					font = "EtelkaMonospacePro";
					h = "1 * 		(0.025 * SafezoneH)";
					idc = 156;
					shadow = 0;
					sizeEx = "0.038*SafezoneH";
					style = 2;
					text = "015";
					w = "3 * 		(0.01875 * SafezoneH)";
					x = "7.25 * 		(0.01875 * SafezoneH)";
					y = "16.3 * 		(0.025 * SafezoneH)";
				};
				class CA_OpticsPitch: RscText
				{
					font = "EtelkaMonospacePro";
					h = "1.2 * 		(0.025 * SafezoneH)";
					idc = 182;
					shadow = 0;
					sizeEx = "0.038*SafezoneH";
					style = 1;
					text = "36";
					w = "5.2 * 		(0.01875 * SafezoneH)";
					x = "1 * 		(0.01875 * SafezoneH)";
					y = "19.3 * 		(0.025 * SafezoneH)";
				};
				class CA_TurretIndicator: RscPicture
				{
					color[] = {0.95, 0.95, 0.95, 1};
					h = "7 * 		(0.025 * SafezoneH)";
					IDC = 206;
					imageGun = "#(rgb,8,8,3)color(0,0,0,0)";
					imageHull = "A3\Ui_f\data\IGUI\RscIngameUI\RscOptics\turretIndicatorHull_AAF.paa";
					imageObsTurret = "A3\Ui_f\data\IGUI\RscIngameUI\RscOptics\turretIndicatorObsTurret_RWS.paa";
					imageTurret = "A3\Ui_f\data\IGUI\RscIngameUI\RscOptics\turretIndicatorTurret_RWS.paa";
					style = 0;
					textSize = "0.02*SafezoneH";
					type = 105;
					w = "7 * 		(0.01875 * SafezoneH)";
					x = "5.25 * 		(0.01875 * SafezoneH)";
					y = "10.5 * 		(0.025 * SafezoneH)";
				};
				class CA_VisionMode: RscText
				{
					font = "EtelkaMonospacePro";
					h = "1.2 * 		(0.025 * SafezoneH)";
					idc = 152;
					shadow = 0;
					sizeEx = "0.038*SafezoneH";
					style = 0;
					text = "FLIR";
					w = "4.5 * 		(0.01875 * SafezoneH)";
					x = "40.2 * 		(0.01875 * SafezoneH)";
					y = "9 * 		(0.025 * SafezoneH)";
				};
				class FireSolutionValid: RscPicture
				{
					h = "0.6 * 		(0.025 * SafezoneH)";
					idc = 200;
					text = "\A3\Ui_f\data\IGUI\RscIngameUI\RscOptics\square.paa";
					w = "0.6 * 		(0.01875 * SafezoneH)";
					x = "24.25 * 		(0.01875 * SafezoneH)";
					y = "28.5 * 		(0.025 * SafezoneH)";
				};
				class TargetSpeed: TargetSpeedText
				{
					idc = 199;
					style = 0;
					text = "2456";
					w = "5.2 * 		(0.01875 * SafezoneH)";
					x = "7.2 * 		(0.025 * SafezoneH)";
				};
				class TargetSpeedText: RscText
				{
					font = "EtelkaMonospacePro";
					h = "1.2 * 		(0.025 * SafezoneH)";
					idc = 1050;
					shadow = 0;
					sizeEx = "0.032*SafezoneH";
					style = 1;
					text = "SPD:";
					w = "3 * 		(0.01875 * SafezoneH)";
					x = "4.85 * 		(0.025 * SafezoneH)";
					y = "29.2 * 		(0.025 * SafezoneH)";
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
	};
	class RscOptics_APC_Wheeled_01_gunner: RscUnitInfo
	{
		controls[] = {"CA_Zeroing", "CA_IGUI_elements_group", "CA_APC_WFOV_mode_group", "CA_APC_NFOV_mode_group"};
		idd = 300;
		class CA_APC_NFOV_mode_group: RscControlsGroupNoScrollbars
		{
			h = "40 * 		(0.025 * SafezoneH)";
			idc = 162;
			w = "53.5 * 		(0.01875 * SafezoneH)";
			x = "0 * 		(0.01875 * SafezoneH) + 		(SafezoneX + ((SafezoneW - SafezoneH) / 2))";
			y = "0 * 		(0.025 * SafezoneH) + 		(SafezoneY)";
			class controls
			{
				class CA_FOVModeNFOV: RscText
				{
					colorText[] = {0.706, 0.0745, 0.0196, 1};
					font = "EtelkaMonospacePro";
					h = "1.2 * 		(0.025 * SafezoneH)";
					idc = 1007;
					shadow = 0;
					sizeEx = "0.038*SafezoneH";
					text = "NFOV";
					w = "5 * 		(0.01875 * SafezoneH)";
					x = "8 * 		(0.01875 * SafezoneH)";
					y = "11 * 		(0.025 * SafezoneH)";
				};
			};
		};
		class CA_APC_WFOV_mode_group: RscControlsGroupNoScrollbars
		{
			h = "40 * 		(0.025 * SafezoneH)";
			idc = 163;
			w = "53.5 * 		(0.01875 * SafezoneH)";
			x = "0 * 		(0.01875 * SafezoneH) + 		(SafezoneX + ((SafezoneW - SafezoneH) / 2))";
			y = "0 * 		(0.025 * SafezoneH) + 		(SafezoneY)";
			class controls
			{
				class CA_FOVModeWFOV: RscText
				{
					colorText[] = {0.706, 0.0745, 0.0196, 1};
					font = "EtelkaMonospacePro";
					h = "1.2 * 		(0.025 * SafezoneH)";
					idc = 1002;
					shadow = 0;
					sizeEx = "0.038*SafezoneH";
					text = "WFOV";
					w = "5 * 		(0.01875 * SafezoneH)";
					x = "8 * 		(0.01875 * SafezoneH)";
					y = "11 * 		(0.025 * SafezoneH)";
				};
			};
		};
		class CA_IGUI_elements_group: RscControlsGroup
		{
			h = "40 * 		(0.025 * SafezoneH)";
			idc = 170;
			w = "53.5 * 		(0.01875 * SafezoneH)";
			x = "0 * 		(0.01875 * SafezoneH) + 		(SafezoneX + ((SafezoneW - SafezoneH) / 2))";
			y = "0 * 		(0.025 * SafezoneH) + 		(SafezoneY)";
			class controls
			{
				class CA_Distance: RscText
				{
					colorText[] = {0.706, 0.0745, 0.0196, 1};
					font = "EtelkaMonospacePro";
					h = "2 * 		(0.025 * SafezoneH)";
					idc = 198;
					shadow = 0;
					sizeEx = "0.040*SafezoneH";
					style = 2;
					text = "2456";
					w = "5 * 		(0.01875 * SafezoneH)";
					x = "24.15 * 		(0.01875 * SafezoneH)";
					y = "28.5 * 		(0.025 * SafezoneH)";
				};
				class CA_FlirMode: RscText
				{
					colorText[] = {0.706, 0.0745, 0.0196, 1};
					font = "EtelkaMonospacePro";
					h = "1.2 * 		(0.025 * SafezoneH)";
					idc = 153;
					shadow = 0;
					sizeEx = "0.038*SafezoneH";
					style = 0;
					text = "BHOT";
					w = "4.5 * 		(0.01875 * SafezoneH)";
					x = "44.2 * 		(0.01875 * SafezoneH)";
					y = "11 * 		(0.025 * SafezoneH)";
				};
				class CA_Heading: RscText
				{
					colorText[] = {0.706, 0.0745, 0.0196, 1};
					font = "EtelkaMonospacePro";
					h = "1 * 		(0.025 * SafezoneH)";
					idc = 156;
					shadow = 0;
					sizeEx = "0.038*SafezoneH";
					style = 2;
					text = "015";
					w = "3 * 		(0.01875 * SafezoneH)";
					x = "25.15 * 		(0.01875 * SafezoneH)";
					y = "11 * 		(0.025 * SafezoneH)";
				};
				class CA_OpticsPitch: RscText
				{
					colorText[] = {0.706, 0.0745, 0.0196, 1};
					font = "EtelkaMonospacePro";
					h = "1.2 * 		(0.025 * SafezoneH)";
					idc = 182;
					shadow = 0;
					sizeEx = "0.038*SafezoneH";
					style = 1;
					text = "36";
					w = "5.2 * 		(0.01875 * SafezoneH)";
					x = "1 * 		(0.01875 * SafezoneH)";
					y = "19.3 * 		(0.025 * SafezoneH)";
				};
				class CA_TurretIndicator: RscPicture
				{
					color[] = {0.706, 0.0745, 0.0196, 1};
					h = "6 * 		(0.025 * SafezoneH)";
					IDC = 206;
					imageGun = "#(rgb,8,8,3)color(0,0,0,0)";
					imageHull = "A3\Ui_f\data\IGUI\RscIngameUI\RscOptics\turretIndicatorHull.paa";
					imageObsTurret = "A3\Ui_f\data\IGUI\RscIngameUI\RscOptics\turretIndicatorObsTurret.paa";
					imageTurret = "A3\Ui_f\data\IGUI\RscIngameUI\RscOptics\turretIndicatorTurret.paa";
					style = 0;
					textSize = "0.02*SafezoneH";
					type = 105;
					w = "6 * 		(0.01875 * SafezoneH)";
					x = "36.25 * 		(0.01875 * SafezoneH)";
					y = "27.5 * 		(0.025 * SafezoneH)";
				};
				class CA_VisionMode: RscText
				{
					colorText[] = {0.706, 0.0745, 0.0196, 1};
					font = "EtelkaMonospacePro";
					h = "1.2 * 		(0.025 * SafezoneH)";
					idc = 152;
					shadow = 0;
					sizeEx = "0.038*SafezoneH";
					style = 0;
					text = "FLIR";
					w = "4.5 * 		(0.01875 * SafezoneH)";
					x = "40.2 * 		(0.01875 * SafezoneH)";
					y = "11 * 		(0.025 * SafezoneH)";
				};
				class FireSolutionValid: RscPicture
				{
					colorText[] = {0.706, 0.0745, 0.0196, 1};
					h = "0.6 * 		(0.025 * SafezoneH)";
					idc = 200;
					text = "\A3\Ui_f\data\IGUI\RscIngameUI\RscOptics\square.paa";
					w = "0.6 * 		(0.01875 * SafezoneH)";
					x = "24.25 * 		(0.01875 * SafezoneH)";
					y = "28.5 * 		(0.025 * SafezoneH)";
				};
				class TargetSpeed: TargetSpeedText
				{
					idc = 199;
					style = 0;
					text = "2456";
					w = "5.2 * 		(0.01875 * SafezoneH)";
					x = "7.2 * 		(0.025 * SafezoneH)";
				};
				class TargetSpeedText: RscText
				{
					colorText[] = {0.706, 0.0745, 0.0196, 1};
					font = "EtelkaMonospacePro";
					h = "1.2 * 		(0.025 * SafezoneH)";
					idc = 1050;
					shadow = 0;
					sizeEx = "0.032*SafezoneH";
					style = 1;
					text = "SPD:";
					w = "3 * 		(0.01875 * SafezoneH)";
					x = "4.85 * 		(0.025 * SafezoneH)";
					y = "29.2 * 		(0.025 * SafezoneH)";
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
	};
	class RscOptics_APC_Wheeled_03_commander: RscUnitInfo
	{
		controls[] = {"CA_Zeroing", "CA_IGUI_elements_group", "CA_APC_WFOV_mode_group", "CA_APC_NFOV_mode_group"};
		idd = 300;
		class CA_APC_NFOV_mode_group: RscControlsGroupNoScrollbars
		{
			h = "40 * 		(0.025 * SafezoneH)";
			idc = 162;
			w = "53.5 * 		(0.01875 * SafezoneH)";
			x = "0 * 		(0.01875 * SafezoneH) + 		(SafezoneX + ((SafezoneW - SafezoneH) / 2))";
			y = "0 * 		(0.025 * SafezoneH) + 		(SafezoneY)";
			class controls
			{
				class CA_FOVModeNFOV: RscText
				{
					font = "EtelkaMonospacePro";
					h = "1.2 * 		(0.025 * SafezoneH)";
					idc = 1007;
					shadow = 0;
					sizeEx = "0.032*SafezoneH";
					text = "NFOV";
					w = "5 * 		(0.01875 * SafezoneH)";
					x = "40.4 * 		(0.01875 * SafezoneH)";
					y = "29.2 * 		(0.025 * SafezoneH)";
				};
			};
		};
		class CA_APC_WFOV_mode_group: RscControlsGroupNoScrollbars
		{
			h = "40 * 		(0.025 * SafezoneH)";
			idc = 163;
			w = "53.5 * 		(0.01875 * SafezoneH)";
			x = "0 * 		(0.01875 * SafezoneH) + 		(SafezoneX + ((SafezoneW - SafezoneH) / 2))";
			y = "0 * 		(0.025 * SafezoneH) + 		(SafezoneY)";
			class controls
			{
				class CA_FOVModeWFOV: RscText
				{
					font = "EtelkaMonospacePro";
					h = "1.2 * 		(0.025 * SafezoneH)";
					idc = 1002;
					shadow = 0;
					sizeEx = "0.032*SafezoneH";
					text = "WFOV";
					w = "5 * 		(0.01875 * SafezoneH)";
					x = "40.4 * 		(0.01875 * SafezoneH)";
					y = "29.2 * 		(0.025 * SafezoneH)";
				};
			};
		};
		class CA_IGUI_elements_group: RscControlsGroup
		{
			h = "40 * 		(0.025 * SafezoneH)";
			idc = 170;
			w = "53.5 * 		(0.01875 * SafezoneH)";
			x = "0 * 		(0.01875 * SafezoneH) + 		(SafezoneX + ((SafezoneW - SafezoneH) / 2))";
			y = "0 * 		(0.025 * SafezoneH) + 		(SafezoneY)";
			class controls
			{
				class CA_Distance: RscText
				{
					font = "EtelkaMonospacePro";
					h = "1.2 * 		(0.025 * SafezoneH)";
					idc = 198;
					shadow = 0;
					sizeEx = "0.032*SafezoneH";
					style = 0;
					text = "2456";
					w = "5 * 		(0.01875 * SafezoneH)";
					x = "40.4 * 		(0.01875 * SafezoneH)";
					y = "9.6 * 		(0.025 * SafezoneH)";
				};
				class CA_FlirMode: RscText
				{
					font = "EtelkaMonospacePro";
					h = "1.2 * 		(0.025 * SafezoneH)";
					idc = 153;
					shadow = 0;
					sizeEx = "0.032*SafezoneH";
					style = 0;
					text = "BHOT";
					w = "4.5 * 		(0.01875 * SafezoneH)";
					x = "47.5 * 		(0.01875 * SafezoneH)";
					y = "29.2 * 		(0.025 * SafezoneH)";
				};
				class CA_Heading: RscText
				{
					font = "EtelkaMonospacePro";
					h = "1 * 		(0.025 * SafezoneH)";
					idc = 156;
					shadow = 0;
					sizeEx = "0.038*SafezoneH";
					style = 2;
					text = "015";
					w = "3 * 		(0.01875 * SafezoneH)";
					x = "7.25 * 		(0.01875 * SafezoneH)";
					y = "16.3 * 		(0.025 * SafezoneH)";
				};
				class CA_OpticsPitch: RscText
				{
					font = "EtelkaMonospacePro";
					h = "1.2 * 		(0.025 * SafezoneH)";
					idc = 182;
					shadow = 0;
					sizeEx = "0.032*SafezoneH";
					style = 0;
					text = "36";
					w = "5.2 * 		(0.01875 * SafezoneH)";
					x = "8 * 		(0.01875 * SafezoneH)";
					y = "9.6 * 		(0.025 * SafezoneH)";
				};
				class CA_TurretIndicator: RscPicture
				{
					color[] = {0.95, 0.95, 0.95, 1};
					h = "7 * 		(0.025 * SafezoneH)";
					IDC = 206;
					imageGun = "#(rgb,8,8,3)color(0,0,0,0)";
					imageHull = "A3\Ui_f\data\IGUI\RscIngameUI\RscOptics\turretIndicatorHull_AAF.paa";
					imageObsTurret = "A3\Ui_f\data\IGUI\RscIngameUI\RscOptics\turretIndicatorObsTurret_RWS.paa";
					imageTurret = "A3\Ui_f\data\IGUI\RscIngameUI\RscOptics\turretIndicatorTurret_RWS.paa";
					style = 0;
					textSize = "0.02*SafezoneH";
					type = 105;
					w = "7 * 		(0.01875 * SafezoneH)";
					x = "5.25 * 		(0.01875 * SafezoneH)";
					y = "10.5 * 		(0.025 * SafezoneH)";
				};
				class CA_VisionMode: RscText
				{
					font = "EtelkaMonospacePro";
					h = "1.2 * 		(0.025 * SafezoneH)";
					idc = 152;
					shadow = 0;
					sizeEx = "0.032*SafezoneH";
					style = 0;
					text = "FLIR";
					w = "4.5 * 		(0.01875 * SafezoneH)";
					x = "44 * 		(0.01875 * SafezoneH)";
					y = "29.2 * 		(0.025 * SafezoneH)";
				};
				class TextOpticsPitch: RscText
				{
					font = "EtelkaMonospacePro";
					h = "1.2 * 		(0.025 * SafezoneH)";
					idc = 1008;
					shadow = 0;
					sizeEx = "0.032*SafezoneH";
					style = 0;
					text = "E:";
					w = "2 * 		(0.01875 * SafezoneH)";
					x = "6.8 * 		(0.01875 * SafezoneH)";
					y = "9.6 * 		(0.025 * SafezoneH)";
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
	};
	class RscOptics_APC_Wheeled_03_gunner: RscUnitInfo
	{
		controls[] = {"CA_Zeroing", "CA_IGUI_elements_group", "CA_APC_WFOV_mode_group", "CA_APC_NFOV_mode_group"};
		idd = 300;
		class CA_APC_NFOV_mode_group: RscControlsGroupNoScrollbars
		{
			h = "40 * 		(0.025 * SafezoneH)";
			idc = 162;
			w = "53.5 * 		(0.01875 * SafezoneH)";
			x = "0 * 		(0.01875 * SafezoneH) + 		(SafezoneX + ((SafezoneW - SafezoneH) / 2))";
			y = "0 * 		(0.025 * SafezoneH) + 		(SafezoneY)";
			class controls
			{
				class CA_FOVModeNFOV: RscText
				{
					font = "EtelkaMonospacePro";
					h = "1.2 * 		(0.025 * SafezoneH)";
					idc = 1007;
					shadow = 0;
					sizeEx = "0.032*SafezoneH";
					text = "NFOV";
					w = "5 * 		(0.01875 * SafezoneH)";
					x = "40.4 * 		(0.01875 * SafezoneH)";
					y = "29.2 * 		(0.025 * SafezoneH)";
				};
			};
		};
		class CA_APC_WFOV_mode_group: RscControlsGroupNoScrollbars
		{
			h = "40 * 		(0.025 * SafezoneH)";
			idc = 163;
			w = "53.5 * 		(0.01875 * SafezoneH)";
			x = "0 * 		(0.01875 * SafezoneH) + 		(SafezoneX + ((SafezoneW - SafezoneH) / 2))";
			y = "0 * 		(0.025 * SafezoneH) + 		(SafezoneY)";
			class controls
			{
				class CA_FOVModeWFOV: RscText
				{
					font = "EtelkaMonospacePro";
					h = "1.2 * 		(0.025 * SafezoneH)";
					idc = 1002;
					shadow = 0;
					sizeEx = "0.032*SafezoneH";
					text = "WFOV";
					w = "5 * 		(0.01875 * SafezoneH)";
					x = "40.4 * 		(0.01875 * SafezoneH)";
					y = "29.2 * 		(0.025 * SafezoneH)";
				};
			};
		};
		class CA_IGUI_elements_group: RscControlsGroup
		{
			h = "40 * 		(0.025 * SafezoneH)";
			idc = 170;
			w = "53.5 * 		(0.01875 * SafezoneH)";
			x = "0 * 		(0.01875 * SafezoneH) + 		(SafezoneX + ((SafezoneW - SafezoneH) / 2))";
			y = "0 * 		(0.025 * SafezoneH) + 		(SafezoneY)";
			class controls
			{
				class CA_Distance: RscText
				{
					font = "EtelkaMonospacePro";
					h = "2 * 		(0.025 * SafezoneH)";
					idc = 198;
					shadow = 0;
					sizeEx = "0.040*SafezoneH";
					style = 2;
					text = "2456";
					w = "5 * 		(0.01875 * SafezoneH)";
					x = "24.15 * 		(0.01875 * SafezoneH)";
					y = "28.5 * 		(0.025 * SafezoneH)";
				};
				class CA_FlirMode: RscText
				{
					font = "EtelkaMonospacePro";
					h = "1.2 * 		(0.025 * SafezoneH)";
					idc = 153;
					shadow = 0;
					sizeEx = "0.032*SafezoneH";
					style = 0;
					text = "BHOT";
					w = "4.5 * 		(0.01875 * SafezoneH)";
					x = "47.5 * 		(0.01875 * SafezoneH)";
					y = "29.2 * 		(0.025 * SafezoneH)";
				};
				class CA_Heading: RscText
				{
					font = "EtelkaMonospacePro";
					h = "1 * 		(0.025 * SafezoneH)";
					idc = 156;
					shadow = 0;
					sizeEx = "0.038*SafezoneH";
					style = 2;
					text = "015";
					w = "3 * 		(0.01875 * SafezoneH)";
					x = "7.25 * 		(0.01875 * SafezoneH)";
					y = "16.3 * 		(0.025 * SafezoneH)";
				};
				class CA_OpticsPitch: RscText
				{
					font = "EtelkaMonospacePro";
					h = "1.2 * 		(0.025 * SafezoneH)";
					idc = 182;
					shadow = 0;
					sizeEx = "0.032*SafezoneH";
					style = 0;
					text = "36";
					w = "5.2 * 		(0.01875 * SafezoneH)";
					x = "8 * 		(0.01875 * SafezoneH)";
					y = "9.6 * 		(0.025 * SafezoneH)";
				};
				class CA_TurretIndicator: RscPicture
				{
					color[] = {0.95, 0.95, 0.95, 1};
					h = "7 * 		(0.025 * SafezoneH)";
					IDC = 206;
					imageGun = "#(rgb,8,8,3)color(0,0,0,0)";
					imageHull = "A3\Ui_f\data\IGUI\RscIngameUI\RscOptics\turretIndicatorHull_AAF.paa";
					imageObsTurret = "A3\Ui_f\data\IGUI\RscIngameUI\RscOptics\turretIndicatorObsTurret_RWS.paa";
					imageTurret = "A3\Ui_f\data\IGUI\RscIngameUI\RscOptics\turretIndicatorTurret_RWS.paa";
					style = 0;
					textSize = "0.02*SafezoneH";
					type = 105;
					w = "7 * 		(0.01875 * SafezoneH)";
					x = "5.25 * 		(0.01875 * SafezoneH)";
					y = "10.5 * 		(0.025 * SafezoneH)";
				};
				class CA_VisionMode: RscText
				{
					font = "EtelkaMonospacePro";
					h = "1.2 * 		(0.025 * SafezoneH)";
					idc = 152;
					shadow = 0;
					sizeEx = "0.032*SafezoneH";
					style = 0;
					text = "FLIR";
					w = "4.5 * 		(0.01875 * SafezoneH)";
					x = "44 * 		(0.01875 * SafezoneH)";
					y = "29.2 * 		(0.025 * SafezoneH)";
				};
				class FireSolutionValid: RscPicture
				{
					h = "0.6 * 		(0.025 * SafezoneH)";
					idc = 200;
					text = "\A3\Ui_f\data\IGUI\RscIngameUI\RscOptics\square.paa";
					w = "0.6 * 		(0.01875 * SafezoneH)";
					x = "24.25 * 		(0.01875 * SafezoneH)";
					y = "28.5 * 		(0.025 * SafezoneH)";
				};
				class TargetSpeed: TargetSpeedText
				{
					idc = 199;
					style = 0;
					text = "2456";
					w = "5.2 * 		(0.01875 * SafezoneH)";
					x = "7.2 * 		(0.025 * SafezoneH)";
				};
				class TargetSpeedText: RscText
				{
					font = "EtelkaMonospacePro";
					h = "1.2 * 		(0.025 * SafezoneH)";
					idc = 1050;
					shadow = 0;
					sizeEx = "0.032*SafezoneH";
					style = 1;
					text = "SPD:";
					w = "3 * 		(0.01875 * SafezoneH)";
					x = "4.85 * 		(0.025 * SafezoneH)";
					y = "29.2 * 		(0.025 * SafezoneH)";
				};
				class TextOpticsPitch: RscText
				{
					font = "EtelkaMonospacePro";
					h = "1.2 * 		(0.025 * SafezoneH)";
					idc = 1008;
					shadow = 0;
					sizeEx = "0.032*SafezoneH";
					style = 0;
					text = "E:";
					w = "2 * 		(0.01875 * SafezoneH)";
					x = "6.8 * 		(0.01875 * SafezoneH)";
					y = "9.6 * 		(0.025 * SafezoneH)";
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
	};
	class RscOptics_AV_airplane_pilot: RscOptics_AV_pilot
	{
		controls[] = {"WeaponInfoControlsGroupRight", "CA_BackgroundVehicle", "CA_BackgroundVehicleTitle", "CA_BackgroundVehicleTitleDark", "CA_BackgroundFuel", "CA_Vehicle", "CA_VehicleRole", "CA_HitZones", "CA_VehicleTogglesBackground", "CA_VehicleToggles", "CA_SpeedBackground", "CA_SpeedUnits", "CA_Speed", "CA_ValueFuel", "CA_AltBackground", "CA_AltUnits", "CA_Alt", "DriverOpticsGroup", "CA_Throttle"};
		idd = 300;
		class CA_Throttle: RscText
		{
			colorText[] = {"(profilenamespace getvariable ['IGUI_TEXT_RGB_R',0])", "(profilenamespace getvariable ['IGUI_TEXT_RGB_G',1])", "(profilenamespace getvariable ['IGUI_TEXT_RGB_B',1])", "(profilenamespace getvariable ['IGUI_TEXT_RGB_A',0.8])"};
			h = "0.95 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = 205;
			shadow = 0;
			sizeEx = "0.8 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			style = 1;
			text = "9999";
			w = "1.4 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			x = "0.0 * 					(			((safezoneW / safezoneH) min 1.2) / 40) + 		(profilenamespace getvariable [""IGUI_GRID_VEHICLE_X"",		(safezoneX + 0.5 * 			(			((safezoneW / safezoneH) min 1.2) / 40))])";
			y = "3.3 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 		(profilenamespace getvariable [""IGUI_GRID_VEHICLE_Y"",		(safezoneY + 0.5 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25))])";
		};
		class CA_VehicleToggles: RscVehicleToggles
		{
			h = "0.8 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = 112;
			w = "9.8 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			x = "1.3 * 					(			((safezoneW / safezoneH) min 1.2) / 40) + 		(profilenamespace getvariable [""IGUI_GRID_VEHICLE_X"",		(safezoneX + 0.5 * 			(			((safezoneW / safezoneH) min 1.2) / 40))])";
			y = "3.4 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 		(profilenamespace getvariable [""IGUI_GRID_VEHICLE_Y"",		(safezoneY + 0.5 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25))])";
		};
	};
	class RscOptics_AV_driver: RscOptics_AV_driverNoWeapon
	{
		controls[] = {"CA_Zeroing", "CA_BackgroundVehicle", "CA_BackgroundVehicleTitle", "CA_BackgroundVehicleTitleDark", "CA_BackgroundFuel", "CA_Vehicle", "CA_VehicleRole", "CA_HitZones", "CA_VehicleTogglesBackground", "CA_VehicleToggles", "CA_SpeedBackground", "CA_SpeedUnits", "CA_Speed", "CA_ValueFuel", "DriverOpticsGroup", "WeaponInfoControlsGroupRight"};
	};
	class RscOptics_AV_driverNoWeapon: RscUnitInfo
	{
		controls[] = {"CA_Zeroing", "CA_BackgroundVehicle", "CA_BackgroundVehicleTitle", "CA_BackgroundVehicleTitleDark", "CA_BackgroundFuel", "CA_Vehicle", "CA_VehicleRole", "CA_HitZones", "CA_VehicleTogglesBackground", "CA_VehicleToggles", "CA_SpeedBackground", "CA_SpeedUnits", "CA_Speed", "CA_ValueFuel", "DriverOpticsGroup"};
		idd = 300;
		class DriverOpticsGroup: RscControlsGroup
		{
			h = "40 * 		(0.025 * SafezoneH)";
			idc = 392;
			w = "53.5 * 		(0.01875 * SafezoneH)";
			x = "0 * 		(0.01875 * SafezoneH) + 		(SafezoneX + ((SafezoneW - SafezoneH) / 2))";
			y = "0 * 		(0.025 * SafezoneH) + 		(SafezoneY)";
			class controls
			{
				class AnalogueSpeed: RscLadderPicture
				{
					bottomValue = -82.5;
					h = "14 * 		(0.025 * SafezoneH)";
					idc = 384;
					text = "\A3\Ui_f\data\IGUI\Cfg\HelicopterHUD\UGVspeedLadder_ca.paa";
					topValue = 82.5;
					visibleRange = -1;
					w = "2.5 * 		(0.01875 * SafezoneH)";
					x = "4 * 		(0.01875 * SafezoneH)";
					y = "13 * 		(0.025 * SafezoneH)";
				};
				class BorderLineSpdBottom: RscPicture
				{
					h = "1 * 		(0.025 * SafezoneH)";
					idc = 1207;
					text = "\A3\Ui_f\data\IGUI\Cfg\HelicopterHUD\border_line_ca.paa";
					w = "3 * 		(0.01875 * SafezoneH)";
					x = "3.343 * 		(0.01875 * SafezoneH)";
					y = "26.5 * 		(0.025 * SafezoneH)";
				};
				class BorderLineSpdTop: RscPicture
				{
					h = "1 * 		(0.025 * SafezoneH)";
					idc = 1203;
					text = "\A3\Ui_f\data\IGUI\Cfg\HelicopterHUD\border_line_ca.paa";
					w = "3 * 		(0.01875 * SafezoneH)";
					x = "3.343 * 		(0.01875 * SafezoneH)";
					y = "12.4 * 		(0.025 * SafezoneH)";
				};
				class CA_Speed: TextGrid
				{
					h = "1.2 * 		(0.025 * SafezoneH)";
					idc = 190;
					sizeEx = "0.03*SafezoneH";
					text = "120";
					w = "6 * 		(0.01875 * SafezoneH)";
					x = "7.2 * 		(0.01875 * SafezoneH)";
					y = "19.5 * 		(0.025 * SafezoneH)";
				};
				class OpticsZoom: TextGrid
				{
					h = "1.2 * 		(0.025 * SafezoneH)";
					idc = 192;
					text = "28x";
					w = "6 * 		(0.01875 * SafezoneH)";
					x = "10.3 * 		(0.01875 * SafezoneH)";
					y = "7 * 		(0.025 * SafezoneH)";
				};
				class SpeedValueBorder: RscPictureKeepAspect
				{
					h = "2 * 		(0.025 * SafezoneH)";
					idc = 1200;
					text = "\A3\Ui_f\data\IGUI\Cfg\HelicopterHUD\altimeter_value_ca.paa";
					w = "4 * 		(0.01875 * SafezoneH)";
					x = "6.3 * 		(0.01875 * SafezoneH)";
					y = "19 * 		(0.025 * SafezoneH)";
				};
				class TextGrid: RscText
				{
					font = "EtelkaMonospacePro";
					h = "1 * 		(0.025 * SafezoneH)";
					idc = 1006;
					shadow = 0;
					sizeEx = "0.02*SafezoneH";
					style = 0;
					text = "GRID:";
					w = "5 * 		(0.01875 * SafezoneH)";
					x = "5.8 * 		(0.01875 * SafezoneH)";
					y = "31.8 * 		(0.025 * SafezoneH)";
				};
				class TextMag: TextGrid
				{
					h = "1.2 * 		(0.025 * SafezoneH)";
					idc = 1011;
					text = "CAM MAG:";
					w = "5 * 		(0.01875 * SafezoneH)";
					x = "5.8 * 		(0.01875 * SafezoneH)";
					y = "7 * 		(0.025 * SafezoneH)";
				};
				class TextSpd: TextGrid
				{
					h = "1.2 * 		(0.025 * SafezoneH)";
					idc = 1000;
					text = "SPD";
					w = "5 * 		(0.01875 * SafezoneH)";
					x = "4.8 * 		(0.01875 * SafezoneH)";
					y = "11.8 * 		(0.025 * SafezoneH)";
				};
				class TextTime: TextGrid
				{
					h = "1 * 		(0.025 * SafezoneH)";
					idc = 1010;
					text = "TIME [UTC]:";
					w = "5 * 		(0.01875 * SafezoneH)";
					x = "5.8 * 		(0.01875 * SafezoneH)";
					y = "32.6 * 		(0.025 * SafezoneH)";
				};
				class ValueGrid: TextGrid
				{
					h = "1 * 		(0.025 * SafezoneH)";
					idc = 189;
					text = "382546";
					w = "6 * 		(0.01875 * SafezoneH)";
					x = "10.3 * 		(0.01875 * SafezoneH)";
					y = "31.8 * 		(0.025 * SafezoneH)";
				};
				class ValueTime: TextGrid
				{
					h = "1 * 		(0.025 * SafezoneH)";
					idc = 101;
					text = "20:28:35";
					w = "6 * 		(0.01875 * SafezoneH)";
					x = "10 * 		(0.01875 * SafezoneH)";
					y = "32.6 * 		(0.025 * SafezoneH)";
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
	};
	class RscOptics_AV_pilot: RscUnitInfo
	{
		controls[] = {"WeaponInfoControlsGroupRight", "CA_BackgroundVehicle", "CA_BackgroundVehicleTitle", "CA_BackgroundVehicleTitleDark", "CA_BackgroundFuel", "CA_Vehicle", "CA_VehicleRole", "CA_HitZones", "CA_VehicleTogglesBackground", "CA_VehicleToggles", "CA_SpeedBackground", "CA_SpeedUnits", "CA_Speed", "CA_ValueFuel", "CA_AltBackground", "CA_AltUnits", "CA_Alt", "DriverOpticsGroup"};
		idd = 300;
		class DriverOpticsGroup: RscControlsGroup
		{
			h = "40 * 		(0.025 * SafezoneH)";
			idc = 392;
			w = "53.5 * 		(0.01875 * SafezoneH)";
			x = "0 * 		(0.01875 * SafezoneH) + 		(SafezoneX + ((SafezoneW - SafezoneH) / 2))";
			y = "0 * 		(0.025 * SafezoneH) + 		(SafezoneY)";
			class controls
			{
				class AltValueBorder: RscPicture
				{
					h = "2 * 		(0.025 * SafezoneH)";
					idc = 1201;
					text = "\A3\Ui_f\data\IGUI\Cfg\HelicopterHUD\airspeed_value_ca.paa";
					w = "5 * 		(0.01875 * SafezoneH)";
					x = "42.25 * 		(0.01875 * SafezoneH)";
					y = "19 * 		(0.025 * SafezoneH)";
				};
				class AnalogueAlt: RscLadderPicture
				{
					bottomValue = -2110;
					h = "14 * 		(0.025 * SafezoneH)";
					idc = 385;
					text = "\A3\Ui_f\data\IGUI\Cfg\HelicopterHUD\UAValtLadder_ca.paa";
					topValue = 14430;
					visibleRange = -1;
					w = "2.5 * 		(0.01875 * SafezoneH)";
					x = "47 * 		(0.01875 * SafezoneH)";
					y = "13 * 		(0.025 * SafezoneH)";
				};
				class AnalogueHorizon: RscLadderPicture
				{
					bottomValue = -90;
					h = "30 * 		(0.025 * SafezoneH)";
					idc = 383;
					text = "\A3\Ui_f\data\IGUI\Cfg\HelicopterHUD\horizon_ladder_ca.paa";
					topValue = 90;
					visibleRange = -1;
					w = "20 * 		(0.01875 * SafezoneH)";
					x = "16.75 * 		(0.01875 * SafezoneH)";
					y = "5 * 		(0.025 * SafezoneH)";
				};
				class AnalogueSpeed: RscLadderPicture
				{
					bottomValue = -345;
					h = "14 * 		(0.025 * SafezoneH)";
					idc = 384;
					text = "\A3\Ui_f\data\IGUI\Cfg\HelicopterHUD\UAVspeedLadder_ca.paa";
					topValue = 1312;
					visibleRange = -1;
					w = "5 * 		(0.01875 * SafezoneH)";
					x = "1.5 * 		(0.01875 * SafezoneH)";
					y = "13 * 		(0.025 * SafezoneH)";
				};
				class BorderLineAltBottom: RscPicture
				{
					h = "1 * 		(0.025 * SafezoneH)";
					idc = 1206;
					text = "\A3\Ui_f\data\IGUI\Cfg\HelicopterHUD\border_line_ca.paa";
					w = "3 * 		(0.01875 * SafezoneH)";
					x = "47.16 * 		(0.01875 * SafezoneH)";
					y = "26.5 * 		(0.025 * SafezoneH)";
				};
				class BorderLineAltTop: RscPicture
				{
					h = "1 * 		(0.025 * SafezoneH)";
					idc = 1205;
					text = "\A3\Ui_f\data\IGUI\Cfg\HelicopterHUD\border_line_ca.paa";
					w = "3 * 		(0.01875 * SafezoneH)";
					x = "47.16 * 		(0.01875 * SafezoneH)";
					y = "12.4 * 		(0.025 * SafezoneH)";
				};
				class BorderLineSpdBottom: RscPicture
				{
					h = "1 * 		(0.025 * SafezoneH)";
					idc = 1207;
					text = "\A3\Ui_f\data\IGUI\Cfg\HelicopterHUD\border_line_ca.paa";
					w = "3 * 		(0.01875 * SafezoneH)";
					x = "3.343 * 		(0.01875 * SafezoneH)";
					y = "26.5 * 		(0.025 * SafezoneH)";
				};
				class BorderLineSpdTop: RscPicture
				{
					h = "1 * 		(0.025 * SafezoneH)";
					idc = 1203;
					text = "\A3\Ui_f\data\IGUI\Cfg\HelicopterHUD\border_line_ca.paa";
					w = "3 * 		(0.01875 * SafezoneH)";
					x = "3.343 * 		(0.01875 * SafezoneH)";
					y = "12.4 * 		(0.025 * SafezoneH)";
				};
				class CA_Alt: TextGrid
				{
					h = "1.2 * 		(0.025 * SafezoneH)";
					idc = 191;
					sizeEx = "0.03*SafezoneH";
					style = 1;
					text = "3825";
					w = "3.2 * 		(0.01875 * SafezoneH)";
					x = "43 * 		(0.01875 * SafezoneH)";
					y = "19.5 * 		(0.025 * SafezoneH)";
				};
				class CA_Speed: TextGrid
				{
					h = "1.2 * 		(0.025 * SafezoneH)";
					idc = 190;
					sizeEx = "0.03*SafezoneH";
					text = "120";
					w = "6 * 		(0.01875 * SafezoneH)";
					x = "7.5 * 		(0.01875 * SafezoneH)";
					y = "19.5 * 		(0.025 * SafezoneH)";
				};
				class HorizonCenter: RscPicture
				{
					h = "2 * 		(0.025 * SafezoneH)";
					idc = 1202;
					text = "\A3\Ui_f\data\IGUI\Cfg\HelicopterHUD\horizon_aircraft_ca.paa";
					w = "4 * 		(0.01875 * SafezoneH)";
					x = "24.75 * 		(0.01875 * SafezoneH)";
					y = "19 * 		(0.025 * SafezoneH)";
				};
				class OpticsZoom: TextGrid
				{
					h = "1 * 		(0.025 * SafezoneH)";
					idc = 192;
					text = "28x";
					w = "6 * 		(0.01875 * SafezoneH)";
					x = "10.3 * 		(0.01875 * SafezoneH)";
					y = "7 * 		(0.025 * SafezoneH)";
				};
				class SpeedValueBorder: RscPicture
				{
					h = "2 * 		(0.025 * SafezoneH)";
					idc = 1200;
					text = "\A3\Ui_f\data\IGUI\Cfg\HelicopterHUD\altimeter_value_ca.paa";
					w = "5 * 		(0.01875 * SafezoneH)";
					x = "6.3 * 		(0.01875 * SafezoneH)";
					y = "19 * 		(0.025 * SafezoneH)";
				};
				class TextAlt: TextGrid
				{
					h = "1.2 * 		(0.025 * SafezoneH)";
					idc = 1006;
					text = "ALT";
					w = "5 * 		(0.01875 * SafezoneH)";
					x = "46.9 * 		(0.01875 * SafezoneH)";
					y = "11.8 * 		(0.025 * SafezoneH)";
				};
				class TextGrid: RscText
				{
					font = "EtelkaMonospacePro";
					h = "1 * 		(0.025 * SafezoneH)";
					idc = 1005;
					shadow = 0;
					sizeEx = "0.02*SafezoneH";
					style = 0;
					text = "GRID:";
					w = "5 * 		(0.01875 * SafezoneH)";
					x = "5.8 * 		(0.01875 * SafezoneH)";
					y = "31.8 * 		(0.025 * SafezoneH)";
				};
				class TextMag: TextGrid
				{
					h = "1 * 		(0.025 * SafezoneH)";
					idc = 1011;
					text = "CAM MAG:";
					w = "5 * 		(0.01875 * SafezoneH)";
					x = "5.8 * 		(0.01875 * SafezoneH)";
					y = "7 * 		(0.025 * SafezoneH)";
				};
				class TextSpd: TextGrid
				{
					h = "1.2 * 		(0.025 * SafezoneH)";
					idc = 1004;
					text = "SPD";
					w = "5 * 		(0.01875 * SafezoneH)";
					x = "4.8 * 		(0.01875 * SafezoneH)";
					y = "11.8 * 		(0.025 * SafezoneH)";
				};
				class TextTime: TextGrid
				{
					h = "1 * 		(0.025 * SafezoneH)";
					idc = 1010;
					text = "TIME [UTC]:";
					w = "5 * 		(0.01875 * SafezoneH)";
					x = "5.8 * 		(0.01875 * SafezoneH)";
					y = "32.6 * 		(0.025 * SafezoneH)";
				};
				class ValueGrid: TextGrid
				{
					h = "1 * 		(0.025 * SafezoneH)";
					idc = 189;
					text = "382546";
					w = "6 * 		(0.01875 * SafezoneH)";
					x = "10.3 * 		(0.01875 * SafezoneH)";
					y = "31.8 * 		(0.025 * SafezoneH)";
				};
				class ValueTime: TextGrid
				{
					h = "1 * 		(0.025 * SafezoneH)";
					idc = 101;
					text = "20:28:35";
					w = "6 * 		(0.01875 * SafezoneH)";
					x = "10 * 		(0.01875 * SafezoneH)";
					y = "32.6 * 		(0.025 * SafezoneH)";
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
	};
	class RscOptics_CAS_01_TGP: RscUnitInfo
	{
		controls[] = {"CA_IGUI_elements_group"};
		idd = 300;
		class CA_IGUI_elements_group: RscControlsGroup
		{
			h = "40 * 		(0.025 * SafezoneH)";
			idc = 170;
			w = "53.5 * 		(0.01875 * SafezoneH)";
			x = "0 * 		(0.01875 * SafezoneH) + 		(SafezoneX + ((SafezoneW - SafezoneH) / 2))";
			y = "0 * 		(0.025 * SafezoneH) + 		(SafezoneY)";
			class controls
			{
				class CA_FlirMode: CA_VisionMode
				{
					h = "1.2 * 		(0.025 * SafezoneH)";
					idc = 153;
					text = "BHOT";
					w = "5 * 		(0.01875 * SafezoneH)";
					x = "48.2 * 		(0.01875 * SafezoneH)";
					y = "9.4 * 		(0.025 * SafezoneH)";
				};
				class CA_Laser: RscText
				{
					colorText[] = {0.706, 0.0745, 0.0196, 1};
					font = "EtelkaMonospacePro";
					h = "1.5 * 		(0.025 * SafezoneH)";
					idc = 158;
					shadow = 0;
					sizeEx = "0.038*SafezoneH";
					style = "0x30 + 0x800";
					text = "\A3\ui_f\data\igui\rscingameui\rscoptics\laser_designator_iconLaserOn.paa";
					w = "3.5 * 		(0.01875 * SafezoneH)";
					x = "31.1 * 		(0.01875 * SafezoneH)";
					y = "12.85 * 		(0.025 * SafezoneH)";
				};
				class CA_VisionMode: RscText
				{
					colorBackground[] = {0, 0, 0, 1};
					font = "EtelkaMonospacePro";
					h = "1.2 * 		(0.025 * SafezoneH)";
					idc = 152;
					shadow = 0;
					sizeEx = "0.03*SafezoneH";
					style = 0;
					text = "DTV";
					w = "5 * 		(0.01875 * SafezoneH)";
					x = "48.2 * 		(0.01875 * SafezoneH)";
					y = "8.4 * 		(0.025 * SafezoneH)";
				};
				class TextGrid: ValueGrid
				{
					h = "1.2 * 		(0.025 * SafezoneH)";
					idc = 1001;
					style = 0;
					text = "GRID:";
					w = "5 * 		(0.01875 * SafezoneH)";
					x = "34.3 * 		(0.01875 * SafezoneH)";
					y = "27 * 		(0.025 * SafezoneH)";
				};
				class TextTrackArea: ValueDistance
				{
					h = "1.5 * 		(0.025 * SafezoneH)";
					idc = 194;
					sizeEx = "0.038*SafezoneH";
					style = 2;
					text = "AREA";
					w = "5 * 		(0.01875 * SafezoneH)";
					x = "24.2 * 		(0.01875 * SafezoneH)";
					y = "25.8 * 		(0.025 * SafezoneH)";
				};
				class TextTrackPoint: TextTrackArea
				{
					idc = 195;
					text = "POINT";
				};
				class ValueDistance: RscText
				{
					font = "EtelkaMonospacePro";
					h = "1.2 * 		(0.025 * SafezoneH)";
					idc = 183;
					shadow = 0;
					sizeEx = "0.038*SafezoneH";
					style = 1;
					text = "2456";
					w = "5 * 		(0.01875 * SafezoneH)";
					x = "34.6 * 		(0.01875 * SafezoneH)";
					y = "25.8 * 		(0.025 * SafezoneH)";
				};
				class ValueGrid: ValueDistance
				{
					h = "1.2 * 		(0.025 * SafezoneH)";
					idc = 172;
					sizeEx = "0.02*SafezoneH";
					style = 1;
					text = "245678";
					w = "5 * 		(0.01875 * SafezoneH)";
					x = "34.5 * 		(0.01875 * SafezoneH)";
					y = "27 * 		(0.025 * SafezoneH)";
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
	};
	class RscOptics_CAS_Pilot: RscUnitInfoAirPlane
	{
		controls[] = {"CA_BackgroundVehicle", "CA_BackgroundVehicleTitle", "CA_BackgroundVehicleTitleDark", "CA_BackgroundFuel", "CA_Vehicle", "CA_VehicleRole", "CA_HitZones", "CA_VehicleTogglesBackground", "CA_VehicleToggles", "CA_SpeedBackground", "CA_SpeedUnits", "CA_Speed", "CA_ValueFuel", "CA_AltBackground", "CA_AltUnits", "CA_Alt", "WeaponInfoControlsGroupRight", "CA_Throttle", "DriverOpticsGroup"};
		idd = 300;
		class DriverOpticsGroup: RscControlsGroup
		{
			h = "40 * 		(0.025 * SafezoneH)";
			idc = 392;
			w = "53.5 * 		(0.01875 * SafezoneH)";
			x = "0 * 		(0.01875 * SafezoneH) + 		(SafezoneX + ((SafezoneW - SafezoneH) / 2))";
			y = "0 * 		(0.025 * SafezoneH) + 		(SafezoneY)";
			class controls
			{
				class AnalogueHorizon: RscLadderPicture
				{
					bottomValue = 0;
					h = "5 * 		(0.025 * SafezoneH)";
					idc = 383;
					text = "\A3\Ui_f\data\IGUI\RscIngameUI\RscOptics\attitude.paa";
					topValue = 0;
					visibleRange = -1;
					w = "5 * 		(0.01875 * SafezoneH)";
					x = "2.8 * 		(0.01875 * SafezoneH)";
					y = "28.7 * 		(0.025 * SafezoneH)";
				};
				class AnalogueHorizonStatic: RscPicture
				{
					h = "5 * 		(0.025 * SafezoneH)";
					idc = 1200;
					text = "\A3\Ui_f\data\IGUI\RscIngameUI\RscOptics\attitude_static.paa";
					w = "5 * 		(0.01875 * SafezoneH)";
					x = "2.8 * 		(0.01875 * SafezoneH)";
					y = "28.55 * 		(0.025 * SafezoneH)";
				};
				class CA_Alt: TextMag
				{
					h = "1.2 * 		(0.025 * SafezoneH)";
					idc = 191;
					style = 1;
					text = "3825";
					w = "3.5 * 		(0.01875 * SafezoneH)";
					x = "5 * 		(0.01875 * SafezoneH)";
					y = "34 * 		(0.025 * SafezoneH)";
				};
				class CA_Speed: TextMag
				{
					h = "1.2 * 		(0.025 * SafezoneH)";
					idc = 190;
					style = 1;
					text = "120";
					w = "3.5 * 		(0.01875 * SafezoneH)";
					x = "5 * 		(0.01875 * SafezoneH)";
					y = "35 * 		(0.025 * SafezoneH)";
				};
				class OpticsZoom: TextMag
				{
					colorBackground[] = {0, 0, 0, 1};
					h = "1.2 * 		(0.025 * SafezoneH)";
					idc = 192;
					style = 0;
					w = "5 * 		(0.01875 * SafezoneH)";
					x = "48.2 * 		(0.01875 * SafezoneH)";
					y = "7 * 		(0.025 * SafezoneH)";
				};
				class TextAlt: TextMag
				{
					h = "1.2 * 		(0.025 * SafezoneH)";
					idc = 1002;
					text = "    AGL";
					w = "5 * 		(0.01875 * SafezoneH)";
					x = "0 * 		(0.01875 * SafezoneH)";
					y = "34 * 		(0.025 * SafezoneH)";
				};
				class TextMag: RscText
				{
					colorBackground[] = {0, 0, 0, 1};
					font = "EtelkaMonospacePro";
					h = "0 * 		(0.025 * SafezoneH)";
					idc = 1001;
					shadow = 0;
					sizeEx = "0.03*SafezoneH";
					style = 0;
					text = "";
					w = "0 * 		(0.01875 * SafezoneH)";
					x = "0 * 		(0.01875 * SafezoneH)";
					y = "0 * 		(0.025 * SafezoneH)";
				};
				class TextSpd: TextMag
				{
					h = "1.2 * 		(0.025 * SafezoneH)";
					idc = 1003;
					text = "    IAS";
					w = "5 * 		(0.01875 * SafezoneH)";
					x = "0 * 		(0.01875 * SafezoneH)";
					y = "35 * 		(0.025 * SafezoneH)";
				};
				class ValueTime: TextMag
				{
					h = "1.2 * 		(0.025 * SafezoneH)";
					idc = 101;
					style = 1;
					text = "20:28:35";
					w = "4.8 * 		(0.01875 * SafezoneH)";
					x = "2 * 		(0.01875 * SafezoneH)";
					y = "27.5 * 		(0.025 * SafezoneH)";
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
	};
	class RscOptics_Commander_01: RscWeaponRangeZeroing
	{
		class CA_Distance: CA_Distance
		{
			colorText[] = {0.675, 1, 0.4, 0.8};
		};
	};
	class RscOptics_Commander_02: RscWeaponRangeZeroing
	{
		class CA_Distance: CA_Distance
		{
			colorText[] = {1, 1, 1, 0.8};
		};
	};
	class RscOptics_Commander_03: RscWeaponRangeZeroing
	{
		class CA_Distance: CA_Distance
		{
			colorText[] = {1, 1, 1, 0.8};
		};
	};
	class RscOptics_cows: RscUnitInfo
	{
		controls[] = {"CA_WFOV_mode_group", "CA_NFOV_mode_group"};
		idd = 300;
		class CA_IGUI_elements_group: RscControlsGroup
		{
			h = "40 * 		(0.025 * SafezoneH)";
			idc = 170;
			w = "53.5 * 		(0.01875 * SafezoneH)";
			x = "0 * 		(0.01875 * SafezoneH) + 		(SafezoneX + ((SafezoneW - SafezoneH) / 2))";
			y = "0 * 		(0.025 * SafezoneH) + 		(SafezoneY)";
			class controls {};
			class HScrollbar: HScrollbar
			{
				height = 0;
			};
			class VScrollbar: VScrollbar
			{
				width = 0;
			};
		};
		class CA_NFOV_mode_group: RscControlsGroup
		{
			h = "40 * 		(0.025 * SafezoneH)";
			idc = 162;
			w = "53.5 * 		(0.01875 * SafezoneH)";
			x = "0 * 		(0.01875 * SafezoneH) + 		(SafezoneX + ((SafezoneW - SafezoneH) / 2))";
			y = "0 * 		(0.025 * SafezoneH) + 		(SafezoneY)";
			class controls
			{
				class CA_Distance_NFOV: RscText
				{
					colorText[] = {0.706, 0.0745, 0.0196, 1};
					font = "EtelkaMonospacePro";
					h = "2 * 		(0.025 * SafezoneH)";
					idc = 198;
					shadow = 0;
					sizeEx = "0.06*SafezoneH";
					style = 0;
					text = "0000";
					w = "8 * 		(0.01875 * SafezoneH)";
					x = "38.2 * 		(0.01875 * SafezoneH)";
					y = "19.1 * 		(0.025 * SafezoneH)";
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
		class CA_WFOV_mode_group: RscControlsGroup
		{
			h = "40 * 		(0.025 * SafezoneH)";
			idc = 163;
			w = "53.5 * 		(0.01875 * SafezoneH)";
			x = "0 * 		(0.01875 * SafezoneH) + 		(SafezoneX + ((SafezoneW - SafezoneH) / 2))";
			y = "0 * 		(0.025 * SafezoneH) + 		(SafezoneY)";
			class controls
			{
				class CA_Distance_WFOV: RscText
				{
					colorText[] = {0.706, 0.0745, 0.0196, 1};
					font = "EtelkaMonospacePro";
					h = "1 * 		(0.025 * SafezoneH)";
					idc = 198;
					shadow = 0;
					sizeEx = "0.03*SafezoneH";
					style = 0;
					text = "0000";
					w = "4 * 		(0.01875 * SafezoneH)";
					x = "31.45 * 		(0.01875 * SafezoneH)";
					y = "19.6 * 		(0.025 * SafezoneH)";
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
	};
	class RscOptics_crows: RscUnitInfo
	{
		controls[] = {"CA_Zeroing", "CA_IGUI_elements_group"};
		idd = 300;
		class CA_IGUI_elements_group: RscControlsGroup
		{
			h = "40 * 		(0.025 * SafezoneH)";
			idc = 170;
			w = "53.5 * 		(0.01875 * SafezoneH)";
			x = "0 * 		(0.01875 * SafezoneH) + 		(SafezoneX + ((SafezoneW - SafezoneH) / 2))";
			y = "0 * 		(0.025 * SafezoneH) + 		(SafezoneY)";
			class controls
			{
				class CA_Distance: RscText
				{
					colorText[] = {0.706, 0.0745, 0.0196, 0.6};
					font = "EtelkaMonospacePro";
					h = "1 * 		(0.025 * SafezoneH)";
					idc = 198;
					shadow = 0;
					sizeEx = "0.03*SafezoneH";
					style = 0;
					text = "2456";
					w = "4.5 * 		(0.01875 * SafezoneH)";
					x = "31.5 * 		(0.01875 * SafezoneH)";
					y = "28.2 * 		(0.025 * SafezoneH)";
				};
				class CA_distance_text: RscText
				{
					colorText[] = {0.706, 0.0745, 0.0196, 0.6};
					font = "EtelkaMonospacePro";
					h = "1 * 		(0.025 * SafezoneH)";
					idc = 1003;
					shadow = 0;
					sizeEx = "0.03*SafezoneH";
					style = 0;
					text = "RANGE:";
					w = "5.5 * 		(0.01875 * SafezoneH)";
					x = "27 * 		(0.01875 * SafezoneH)";
					y = "28.2 * 		(0.025 * SafezoneH)";
				};
				class CA_FlirMode: RscText
				{
					colorText[] = {0.706, 0.0745, 0.0196, 0.6};
					font = "EtelkaMonospacePro";
					h = "1 * 		(0.025 * SafezoneH)";
					idc = 153;
					shadow = 0;
					sizeEx = "0.03*SafezoneH";
					style = 0;
					text = "BHOT";
					w = "5 * 		(0.01875 * SafezoneH)";
					x = "33.5 * 		(0.01875 * SafezoneH)";
					y = "29.5 * 		(0.025 * SafezoneH)";
				};
				class CA_Heading: RscText
				{
					color[] = {0.706, 0.0745, 0.0196, 1};
					colorText[] = {0.706, 0.0745, 0.0196, 1};
					font = "EtelkaMonospacePro";
					h = "1 * 		(0.025 * SafezoneH)";
					idc = 156;
					shadow = 0;
					sizeEx = "0.038*SafezoneH";
					style = 2;
					text = "015";
					w = "3 * 		(0.01875 * SafezoneH)";
					x = "3.65 * 		(0.01875 * SafezoneH)";
					y = "35.9 * 		(0.025 * SafezoneH)";
				};
				class CA_TurretIndicator: RscPicture
				{
					color[] = {0.706, 0.0745, 0.0196, 1};
					h = "6 * 		(0.025 * SafezoneH)";
					IDC = 206;
					imageGun = "#(rgb,8,8,3)color(0,0,0,0)";
					imageHull = "A3\Ui_f\data\IGUI\RscIngameUI\RscOptics\turretIndicatorHull_RWS.paa";
					imageObsTurret = "#(rgb,8,8,3)color(0,0,0,0)";
					imageTurret = "A3\Ui_f\data\IGUI\RscIngameUI\RscOptics\turretIndicatorTurret_RWS.paa";
					style = 0;
					textSize = "0.02*SafezoneH";
					type = 105;
					w = "6 * 		(0.01875 * SafezoneH)";
					x = "2.25 * 		(0.01875 * SafezoneH)";
					y = "29.5 * 		(0.025 * SafezoneH)";
				};
				class CA_VisionMode: RscText
				{
					colorText[] = {0.706, 0.0745, 0.0196, 0.6};
					font = "EtelkaMonospacePro";
					h = "1 * 		(0.025 * SafezoneH)";
					idc = 179;
					shadow = 0;
					sizeEx = "0.03*SafezoneH";
					style = 0;
					text = "VIS";
					w = "4 * 		(0.01875 * SafezoneH)";
					x = "31.5 * 		(0.01875 * SafezoneH)";
					y = "29.5 * 		(0.025 * SafezoneH)";
				};
				class CA_VisionMode_text: RscText
				{
					colorText[] = {0.706, 0.0745, 0.0196, 0.6};
					font = "EtelkaMonospacePro";
					h = "1 * 		(0.025 * SafezoneH)";
					idc = 1004;
					shadow = 0;
					sizeEx = "0.03*SafezoneH";
					style = 0;
					text = "MODE:";
					w = "5.5 * 		(0.01875 * SafezoneH)";
					x = "27 * 		(0.01875 * SafezoneH)";
					y = "29.5 * 		(0.025 * SafezoneH)";
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
	};
	class RscOptics_Gunner_AAA_01: RscWeaponRangeZeroing
	{
		class CA_Distance: CA_Distance
		{
			colorText[] = {1, 1, 1, 0.8};
		};
	};
	class RscOptics_Gunner_APC_01: RscWeaponRangeZeroing
	{
		class CA_Distance: CA_Distance
		{
			colorText[] = {1, 0, 0, 0.8};
		};
	};
	class RscOptics_Gunner_APC_02: RscWeaponRangeZeroing
	{
		class CA_Distance: CA_Distance
		{
			colorText[] = {1, 1, 1, 0.8};
		};
	};
	class RscOptics_Gunner_APC_03: RscWeaponRangeZeroing
	{
		class CA_Distance: CA_Distance
		{
			colorText[] = {1, 1, 1, 0.8};
		};
	};
	class RscOptics_Gunner_MBT_01: RscWeaponRangeZeroing
	{
		class CA_Distance: CA_Distance
		{
			colorText[] = {0.675, 1, 0.4, 0.8};
		};
	};
	class RscOptics_Gunner_MBT_02: RscWeaponRangeZeroing
	{
		class CA_Distance: CA_Distance
		{
			colorText[] = {1, 1, 1, 0.8};
		};
	};
	class RscOptics_Gunner_MBT_03: RscWeaponRangeZeroing
	{
		class CA_Distance: CA_Distance
		{
			colorText[] = {1, 1, 1, 0.8};
		};
	};
	class RscOptics_Heli_Attack_01_gunner: RscUnitInfo
	{
		controls[] = {"CA_Zeroing", "CA_IGUI_elements_group"};
		idd = 300;
		class CA_IGUI_elements_group: RscControlsGroup
		{
			h = "40 * 		(0.025 * SafezoneH)";
			idc = 170;
			w = "53.5 * 		(0.01875 * SafezoneH)";
			x = "0 * 		(0.01875 * SafezoneH) + 		(SafezoneX + ((SafezoneW - SafezoneH) / 2))";
			y = "0 * 		(0.025 * SafezoneH) + 		(SafezoneY)";
			class controls
			{
				class CA_Distance: RscText
				{
					font = "EtelkaMonospacePro";
					h = "1.2 * 		(0.025 * SafezoneH)";
					idc = 198;
					shadow = 0;
					sizeEx = "0.0295*SafezoneH";
					style = 2;
					text = "2456";
					w = "4 * 		(0.01875 * SafezoneH)";
					x = "24.78 * 		(0.01875 * SafezoneH)";
					y = "30.88 * 		(0.025 * SafezoneH)";
				};
				class CA_FlirMode: RscText
				{
					font = "EtelkaMonospacePro";
					h = "1.2 * 		(0.025 * SafezoneH)";
					idc = 153;
					shadow = 0;
					sizeEx = "0.0295*SafezoneH";
					style = 0;
					text = "BHOT";
					w = "4.5 * 		(0.01875 * SafezoneH)";
					x = "11.15 * 		(0.01875 * SafezoneH)";
					y = "15.34 * 		(0.025 * SafezoneH)";
				};
				class CA_VisionMode: RscText
				{
					font = "EtelkaMonospacePro";
					h = "1.2 * 		(0.025 * SafezoneH)";
					idc = 179;
					shadow = 0;
					sizeEx = "0.0295*SafezoneH";
					style = 0;
					text = "VIS";
					w = "4 * 		(0.01875 * SafezoneH)";
					x = "9.3 * 		(0.01875 * SafezoneH)";
					y = "15.34 * 		(0.025 * SafezoneH)";
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
	};
	class RscOptics_Heli_Attack_01_pilot: RscUnitInfo
	{
		controls[] = {"CA_IGUI_elements_group"};
		idd = 300;
		class CA_IGUI_elements_group: RscControlsGroup
		{
			h = "40 * 		(0.025 * SafezoneH)";
			idc = 170;
			w = "53.5 * 		(0.01875 * SafezoneH)";
			x = "0 * 		(0.01875 * SafezoneH) + 		(SafezoneX + ((SafezoneW - SafezoneH) / 2))";
			y = "0 * 		(0.025 * SafezoneH) + 		(SafezoneY)";
			class controls
			{
				class CA_FlirMode: CA_VisionMode
				{
					h = "1.2 * 		(0.025 * SafezoneH)";
					idc = 153;
					text = "BHOT";
					w = "5 * 		(0.01875 * SafezoneH)";
					x = "48.2 * 		(0.01875 * SafezoneH)";
					y = "9.4 * 		(0.025 * SafezoneH)";
				};
				class CA_Laser: RscText
				{
					colorText[] = {0.706, 0.0745, 0.0196, 1};
					font = "EtelkaMonospacePro";
					h = "1.5 * 		(0.025 * SafezoneH)";
					idc = 158;
					shadow = 0;
					sizeEx = "0.038*SafezoneH";
					style = "0x30 + 0x800";
					text = "\A3\ui_f\data\igui\rscingameui\rscoptics\laser_designator_iconLaserOn.paa";
					w = "3.5 * 		(0.01875 * SafezoneH)";
					x = "31.1 * 		(0.01875 * SafezoneH)";
					y = "12.85 * 		(0.025 * SafezoneH)";
				};
				class CA_VisionMode: RscText
				{
					colorBackground[] = {0, 0, 0, 1};
					font = "EtelkaMonospacePro";
					h = "1.2 * 		(0.025 * SafezoneH)";
					idc = 152;
					shadow = 0;
					sizeEx = "0.03*SafezoneH";
					style = 0;
					text = "DTV";
					w = "5 * 		(0.01875 * SafezoneH)";
					x = "48.2 * 		(0.01875 * SafezoneH)";
					y = "8.4 * 		(0.025 * SafezoneH)";
				};
				class TextGrid: ValueGrid
				{
					h = "1.2 * 		(0.025 * SafezoneH)";
					idc = 1001;
					style = 0;
					text = "GRID:";
					w = "5 * 		(0.01875 * SafezoneH)";
					x = "34.3 * 		(0.01875 * SafezoneH)";
					y = "27 * 		(0.025 * SafezoneH)";
				};
				class TextTrackArea: ValueDistance
				{
					h = "1.5 * 		(0.025 * SafezoneH)";
					idc = 194;
					sizeEx = "0.038*SafezoneH";
					style = 2;
					text = "AREA";
					w = "5 * 		(0.01875 * SafezoneH)";
					x = "24.2 * 		(0.01875 * SafezoneH)";
					y = "25.8 * 		(0.025 * SafezoneH)";
				};
				class TextTrackPoint: TextTrackArea
				{
					idc = 195;
					text = "POINT";
				};
				class ValueDistance: RscText
				{
					font = "EtelkaMonospacePro";
					h = "1.2 * 		(0.025 * SafezoneH)";
					idc = 198;
					shadow = 0;
					sizeEx = "0.038*SafezoneH";
					style = 1;
					text = "2456";
					w = "5 * 		(0.01875 * SafezoneH)";
					x = "34.6 * 		(0.01875 * SafezoneH)";
					y = "25.8 * 		(0.025 * SafezoneH)";
				};
				class ValueGrid: ValueDistance
				{
					h = "1.2 * 		(0.025 * SafezoneH)";
					idc = 172;
					sizeEx = "0.02*SafezoneH";
					style = 1;
					text = "245678";
					w = "5 * 		(0.01875 * SafezoneH)";
					x = "34.5 * 		(0.01875 * SafezoneH)";
					y = "27 * 		(0.025 * SafezoneH)";
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
	};
	class RscOptics_Heli_Attack_02_gunner: RscUnitInfo
	{
		controls[] = {"CA_Zeroing", "CA_IGUI_elements_group"};
		idd = 300;
		class CA_IGUI_elements_group: RscControlsGroup
		{
			h = "40 * 		(0.025 * SafezoneH)";
			idc = 170;
			w = "53.5 * 		(0.01875 * SafezoneH)";
			x = "0 * 		(0.01875 * SafezoneH) + 		(SafezoneX + ((SafezoneW - SafezoneH) / 2))";
			y = "0 * 		(0.025 * SafezoneH) + 		(SafezoneY)";
			class controls
			{
				class CA_Distance: RscText
				{
					colorText[] = {0.706, 0.0745, 0.0196, 1};
					font = "EtelkaMonospacePro";
					h = "1.2 * 		(0.025 * SafezoneH)";
					idc = 198;
					shadow = 0;
					sizeEx = "0.024*SafezoneH";
					style = 2;
					text = "2456";
					w = "4 * 		(0.01875 * SafezoneH)";
					x = "24.7 * 		(0.01875 * SafezoneH)";
					y = "29.3 * 		(0.025 * SafezoneH)";
				};
				class CA_VisionMode: RscText
				{
					colorText[] = {0.706, 0.0745, 0.0196, 1};
					font = "EtelkaMonospacePro";
					h = "1.2 * 		(0.025 * SafezoneH)";
					idc = 179;
					shadow = 0;
					sizeEx = "0.024*SafezoneH";
					style = 0;
					text = "VIS";
					w = "4 * 		(0.01875 * SafezoneH)";
					x = "14.5 * 		(0.01875 * SafezoneH)";
					y = "18.8 * 		(0.025 * SafezoneH)";
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
	};
	class RscOptics_Heli_Attack_02_pilot: RscUnitInfo
	{
		controls[] = {"CA_IGUI_elements_group"};
		idd = 300;
		class CA_IGUI_elements_group: RscControlsGroup
		{
			h = "40 * 		(0.025 * SafezoneH)";
			idc = 170;
			w = "53.5 * 		(0.01875 * SafezoneH)";
			x = "0 * 		(0.01875 * SafezoneH) + 		(SafezoneX + ((SafezoneW - SafezoneH) / 2))";
			y = "0 * 		(0.025 * SafezoneH) + 		(SafezoneY)";
			class controls
			{
				class CA_FlirMode: CA_VisionMode
				{
					h = "1.2 * 		(0.025 * SafezoneH)";
					idc = 153;
					text = "BHOT";
					w = "5 * 		(0.01875 * SafezoneH)";
					x = "48.2 * 		(0.01875 * SafezoneH)";
					y = "9.4 * 		(0.025 * SafezoneH)";
				};
				class CA_Laser: RscText
				{
					colorText[] = {0.706, 0.0745, 0.0196, 1};
					font = "EtelkaMonospacePro";
					h = "1.5 * 		(0.025 * SafezoneH)";
					idc = 158;
					shadow = 0;
					sizeEx = "0.038*SafezoneH";
					style = "0x30 + 0x800";
					text = "\A3\ui_f\data\igui\rscingameui\rscoptics\laser_designator_iconLaserOn.paa";
					w = "3.5 * 		(0.01875 * SafezoneH)";
					x = "31.1 * 		(0.01875 * SafezoneH)";
					y = "12.85 * 		(0.025 * SafezoneH)";
				};
				class CA_VisionMode: RscText
				{
					colorBackground[] = {0, 0, 0, 1};
					font = "EtelkaMonospacePro";
					h = "1.2 * 		(0.025 * SafezoneH)";
					idc = 152;
					shadow = 0;
					sizeEx = "0.03*SafezoneH";
					style = 0;
					text = "DTV";
					w = "5 * 		(0.01875 * SafezoneH)";
					x = "48.2 * 		(0.01875 * SafezoneH)";
					y = "8.4 * 		(0.025 * SafezoneH)";
				};
				class TextGrid: ValueGrid
				{
					h = "1.2 * 		(0.025 * SafezoneH)";
					idc = 1001;
					style = 0;
					text = "GRID:";
					w = "5 * 		(0.01875 * SafezoneH)";
					x = "34.3 * 		(0.01875 * SafezoneH)";
					y = "27 * 		(0.025 * SafezoneH)";
				};
				class TextTrackArea: ValueDistance
				{
					h = "1.5 * 		(0.025 * SafezoneH)";
					idc = 194;
					sizeEx = "0.038*SafezoneH";
					style = 2;
					text = "AREA";
					w = "5 * 		(0.01875 * SafezoneH)";
					x = "24.2 * 		(0.01875 * SafezoneH)";
					y = "25.8 * 		(0.025 * SafezoneH)";
				};
				class TextTrackPoint: TextTrackArea
				{
					idc = 195;
					text = "POINT";
				};
				class ValueDistance: RscText
				{
					font = "EtelkaMonospacePro";
					h = "1.2 * 		(0.025 * SafezoneH)";
					idc = 198;
					shadow = 0;
					sizeEx = "0.038*SafezoneH";
					style = 1;
					text = "2456";
					w = "5 * 		(0.01875 * SafezoneH)";
					x = "34.6 * 		(0.01875 * SafezoneH)";
					y = "25.8 * 		(0.025 * SafezoneH)";
				};
				class ValueGrid: ValueDistance
				{
					h = "1.2 * 		(0.025 * SafezoneH)";
					idc = 172;
					sizeEx = "0.02*SafezoneH";
					style = 1;
					text = "245678";
					w = "5 * 		(0.01875 * SafezoneH)";
					x = "34.5 * 		(0.01875 * SafezoneH)";
					y = "27 * 		(0.025 * SafezoneH)";
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
	};
	class RscOptics_LaserDesignator
	{
		controls[] = {"CA_IGUI_elements_group"};
		idd = 300;
		class CA_IGUI_elements_group: RscControlsGroup
		{
			h = "40 * 		(0.025 * SafezoneH)";
			idc = 170;
			w = "53.5 * 		(0.01875 * SafezoneH)";
			x = "0 * 		(0.01875 * SafezoneH) + 		(SafezoneX + ((SafezoneW - SafezoneH) / 2))";
			y = "0 * 		(0.025 * SafezoneH) + 		(SafezoneY)";
			class controls
			{
				class CA_Distance: RscText
				{
					colorText[] = {0.706, 0.0745, 0.0196, 1};
					font = "EtelkaMonospacePro";
					h = "1.5 * 		(0.025 * SafezoneH)";
					idc = 198;
					shadow = 0;
					sizeEx = "0.038*SafezoneH";
					style = 0;
					text = "2456";
					w = "4 * 		(0.01875 * SafezoneH)";
					x = "24.5 * 		(0.01875 * SafezoneH)";
					y = "3 * 		(0.025 * SafezoneH)";
				};
				class CA_Elev: RscText
				{
					colorText[] = {0.706, 0.0745, 0.0196, 1};
					font = "EtelkaMonospacePro";
					h = "1.5 * 		(0.025 * SafezoneH)";
					idc = 175;
					shadow = 0;
					sizeEx = "0.038*SafezoneH";
					style = 1;
					text = "80.5";
					w = "5 * 		(0.01875 * SafezoneH)";
					x = "32.7 * 		(0.01875 * SafezoneH)";
					y = "3 * 		(0.025 * SafezoneH)";
				};
				class CA_Heading: RscText
				{
					colorText[] = {0.706, 0.0745, 0.0196, 1};
					font = "EtelkaMonospacePro";
					h = "1.6 * 		(0.025 * SafezoneH)";
					idc = 156;
					shadow = 0;
					sizeEx = "0.038*SafezoneH";
					style = 0;
					text = "023";
					w = "3.5 * 		(0.01875 * SafezoneH)";
					x = "16.1 * 		(0.01875 * SafezoneH)";
					y = "3 * 		(0.025 * SafezoneH)";
				};
				class CA_Laser: RscText
				{
					colorText[] = {0.706, 0.0745, 0.0196, 1};
					font = "EtelkaMonospacePro";
					h = "1.5 * 		(0.025 * SafezoneH)";
					idc = 158;
					shadow = 0;
					sizeEx = "0.038*SafezoneH";
					style = "0x30 + 0x800";
					text = "\A3\ui_f\data\igui\rscingameui\rscoptics\laser_designator_iconLaserOn.paa";
					w = "3.5 * 		(0.01875 * SafezoneH)";
					x = "29.2 * 		(0.01875 * SafezoneH)";
					y = "3 * 		(0.025 * SafezoneH)";
				};
				class CA_OpticsZoom: RscText
				{
					colorText[] = {0.706, 0.0745, 0.0196, 1};
					font = "EtelkaMonospacePro";
					h = "1.1 * 		(0.025 * SafezoneH)";
					idc = 180;
					shadow = 0;
					sizeEx = "0.038*SafezoneH";
					style = 1;
					text = "4.5";
					w = "4.5 * 		(0.01875 * SafezoneH)";
					x = "43.85 * 		(0.01875 * SafezoneH)";
					y = "19.6 * 		(0.025 * SafezoneH)";
				};
				class CA_VisionMode: RscText
				{
					colorText[] = {0.706, 0.0745, 0.0196, 1};
					font = "EtelkaMonospacePro";
					h = "1.1 * 		(0.025 * SafezoneH)";
					idc = 179;
					shadow = 0;
					sizeEx = "0.038*SafezoneH";
					style = 0;
					text = "VIS";
					w = "4 * 		(0.01875 * SafezoneH)";
					x = "6.5 * 		(0.01875 * SafezoneH)";
					y = "19.6 * 		(0.025 * SafezoneH)";
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
	};
	class RscOptics_LaserDesignator_02
	{
		controls[] = {"CA_IGUI_elements_group"};
		idd = 300;
		class CA_IGUI_elements_group: RscControlsGroup
		{
			h = "40 * 		(0.025 * SafezoneH)";
			idc = 170;
			w = "53.5 * 		(0.01875 * SafezoneH)";
			x = "0 * 		(0.01875 * SafezoneH) + 		(SafezoneX + ((SafezoneW - SafezoneH) / 2))";
			y = "0 * 		(0.025 * SafezoneH) + 		(SafezoneY)";
			class controls
			{
				class CA_Distance: RscText
				{
					colorText[] = {0.706, 0.0745, 0.0196, 1};
					font = "EtelkaMonospacePro";
					h = "1.5 * 		(0.025 * SafezoneH)";
					idc = 198;
					shadow = 0;
					sizeEx = "0.038*SafezoneH";
					style = 0;
					text = "2456";
					w = "4 * 		(0.01875 * SafezoneH)";
					x = "24.7 * 		(0.01875 * SafezoneH)";
					y = "29.35 * 		(0.025 * SafezoneH)";
				};
				class CA_DistanceText: RscText
				{
					colorText[] = {0.706, 0.0745, 0.0196, 1};
					font = "EtelkaMonospacePro";
					h = "1.5 * 		(0.025 * SafezoneH)";
					idc = 1010;
					shadow = 0;
					sizeEx = "0.038*SafezoneH";
					text = "RNG";
					w = "4.5 * 		(0.01875 * SafezoneH)";
					x = "21.1 * 		(0.01875 * SafezoneH)";
					y = "29.35 * 		(0.025 * SafezoneH)";
				};
				class CA_DistanceTextM: RscText
				{
					colorText[] = {0.706, 0.0745, 0.0196, 1};
					font = "EtelkaMonospacePro";
					h = "1.5 * 		(0.025 * SafezoneH)";
					idc = 1011;
					shadow = 0;
					sizeEx = "0.038*SafezoneH";
					text = "M";
					w = "2 * 		(0.01875 * SafezoneH)";
					x = "29.2 * 		(0.01875 * SafezoneH)";
					y = "29.35 * 		(0.025 * SafezoneH)";
				};
				class CA_Elev: RscText
				{
					colorText[] = {0.706, 0.0745, 0.0196, 1};
					font = "EtelkaMonospacePro";
					h = "1.5 * 		(0.025 * SafezoneH)";
					idc = 175;
					shadow = 0;
					sizeEx = "0.038*SafezoneH";
					text = "80.5";
					w = "6 * 		(0.01875 * SafezoneH)";
					x = "42.8 * 		(0.01875 * SafezoneH)";
					y = "22.5 * 		(0.025 * SafezoneH)";
				};
				class CA_Heading: RscText
				{
					colorText[] = {0.706, 0.0745, 0.0196, 1};
					font = "EtelkaMonospacePro";
					h = "1.5 * 		(0.025 * SafezoneH)";
					idc = 156;
					shadow = 0;
					sizeEx = "0.038*SafezoneH";
					style = 0;
					text = "023";
					w = "6 * 		(0.01875 * SafezoneH)";
					x = "43.4 * 		(0.01875 * SafezoneH)";
					y = "16.15 * 		(0.025 * SafezoneH)";
				};
				class CA_HeadingText: RscText
				{
					colorText[] = {0.706, 0.0745, 0.0196, 1};
					font = "EtelkaMonospacePro";
					h = "1.5 * 		(0.025 * SafezoneH)";
					idc = 1009;
					shadow = 0;
					sizeEx = "0.038*SafezoneH";
					text = "AZT";
					w = "6 * 		(0.01875 * SafezoneH)";
					x = "43.4 * 		(0.01875 * SafezoneH)";
					y = "14.5 * 		(0.025 * SafezoneH)";
				};
				class CA_Laser: RscText
				{
					colorText[] = {0.706, 0.0745, 0.0196, 1};
					font = "EtelkaMonospacePro";
					h = "1.5 * 		(0.025 * SafezoneH)";
					idc = 158;
					shadow = 0;
					sizeEx = "0.038*SafezoneH";
					style = "0x30 + 0x800";
					text = "\A3\ui_f\data\igui\rscingameui\rscoptics\laser_designator_iconLaserOn.paa";
					w = "3.5 * 		(0.01875 * SafezoneH)";
					x = "24.8 * 		(0.01875 * SafezoneH)";
					y = "10 * 		(0.025 * SafezoneH)";
				};
				class CA_OpticsZoom: RscText
				{
					colorText[] = {0.706, 0.0745, 0.0196, 1};
					font = "EtelkaMonospacePro";
					h = "1.5 * 		(0.025 * SafezoneH)";
					idc = 180;
					shadow = 0;
					sizeEx = "0.038*SafezoneH";
					style = 0;
					text = "4.5";
					w = "6 * 		(0.01875 * SafezoneH)";
					x = "5.5 * 		(0.01875 * SafezoneH)";
					y = "16.15 * 		(0.025 * SafezoneH)";
				};
				class CA_OpticsZoomText: RscText
				{
					colorText[] = {0.706, 0.0745, 0.0196, 1};
					font = "EtelkaMonospacePro";
					h = "1.5 * 		(0.025 * SafezoneH)";
					idc = 1007;
					shadow = 0;
					sizeEx = "0.038*SafezoneH";
					text = "ZOOM";
					w = "6 * 		(0.01875 * SafezoneH)";
					x = "5.5 * 		(0.01875 * SafezoneH)";
					y = "14.5 * 		(0.025 * SafezoneH)";
				};
				class CA_VisionMode: RscText
				{
					colorText[] = {0.706, 0.0745, 0.0196, 1};
					font = "EtelkaMonospacePro";
					h = "1.5 * 		(0.025 * SafezoneH)";
					idc = 179;
					shadow = 0;
					sizeEx = "0.038*SafezoneH";
					style = 0;
					text = "VIS";
					w = "6 * 		(0.01875 * SafezoneH)";
					x = "5.5 * 		(0.01875 * SafezoneH)";
					y = "22.5 * 		(0.025 * SafezoneH)";
				};
				class CA_VisionModeText: RscText
				{
					colorText[] = {0.706, 0.0745, 0.0196, 1};
					font = "EtelkaMonospacePro";
					h = "1.5 * 		(0.025 * SafezoneH)";
					idc = 1008;
					shadow = 0;
					sizeEx = "0.038*SafezoneH";
					text = "MODE";
					w = "6 * 		(0.01875 * SafezoneH)";
					x = "5.5 * 		(0.01875 * SafezoneH)";
					y = "20.9 * 		(0.025 * SafezoneH)";
				};
				class TextElev: RscText
				{
					colorText[] = {0.706, 0.0745, 0.0196, 1};
					font = "EtelkaMonospacePro";
					h = "1.5 * 		(0.025 * SafezoneH)";
					idc = 1005;
					shadow = 0;
					sizeEx = "0.038*SafezoneH";
					text = "ELE";
					w = "6 * 		(0.01875 * SafezoneH)";
					x = "43.4 * 		(0.01875 * SafezoneH)";
					y = "20.9 * 		(0.025 * SafezoneH)";
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
	};
	class RscOptics_MBT_01_commander: RscUnitInfo
	{
		controls[] = {"CA_Zeroing", "CA_IGUI_elements_group", "CA_APC_WFOV_mode_group", "CA_APC_NFOV_mode_group"};
		idd = 300;
		class CA_APC_NFOV_mode_group: RscControlsGroupNoScrollbars
		{
			h = "40 * 		(0.025 * SafezoneH)";
			idc = 162;
			w = "53.5 * 		(0.01875 * SafezoneH)";
			x = "0 * 		(0.01875 * SafezoneH) + 		(SafezoneX + ((SafezoneW - SafezoneH) / 2))";
			y = "0 * 		(0.025 * SafezoneH) + 		(SafezoneY)";
			class controls
			{
				class CA_FOVModeNFOV: RscText
				{
					colorText[] = {0.709, 0.972, 0.384, 1};
					font = "EtelkaMonospacePro";
					h = "1.2 * 		(0.025 * SafezoneH)";
					idc = 1007;
					shadow = 0;
					sizeEx = "0.032*SafezoneH";
					text = "NFOV";
					w = "5 * 		(0.01875 * SafezoneH)";
					x = "40.4 * 		(0.01875 * SafezoneH)";
					y = "29.2 * 		(0.025 * SafezoneH)";
				};
			};
		};
		class CA_APC_WFOV_mode_group: RscControlsGroupNoScrollbars
		{
			h = "40 * 		(0.025 * SafezoneH)";
			idc = 163;
			w = "53.5 * 		(0.01875 * SafezoneH)";
			x = "0 * 		(0.01875 * SafezoneH) + 		(SafezoneX + ((SafezoneW - SafezoneH) / 2))";
			y = "0 * 		(0.025 * SafezoneH) + 		(SafezoneY)";
			class controls
			{
				class CA_FOVModeWFOV: RscText
				{
					colorText[] = {0.709, 0.972, 0.384, 1};
					font = "EtelkaMonospacePro";
					h = "1.2 * 		(0.025 * SafezoneH)";
					idc = 1002;
					shadow = 0;
					sizeEx = "0.032*SafezoneH";
					text = "WFOV";
					w = "5 * 		(0.01875 * SafezoneH)";
					x = "40.4 * 		(0.01875 * SafezoneH)";
					y = "29.2 * 		(0.025 * SafezoneH)";
				};
			};
		};
		class CA_IGUI_elements_group: RscControlsGroup
		{
			h = "40 * 		(0.025 * SafezoneH)";
			idc = 170;
			w = "53.5 * 		(0.01875 * SafezoneH)";
			x = "0 * 		(0.01875 * SafezoneH) + 		(SafezoneX + ((SafezoneW - SafezoneH) / 2))";
			y = "0 * 		(0.025 * SafezoneH) + 		(SafezoneY)";
			class controls
			{
				class AzimuthMark: RscPicture
				{
					colorText[] = {0.709, 0.972, 0.384, 1};
					h = "0.5 * 		(0.025 * SafezoneH)";
					IDC = 1012;
					text = "A3\Ui_f\data\IGUI\RscIngameUI\RscOptics\AzimuthMark.paa";
					w = "0.5 * 		(0.01875 * SafezoneH)";
					x = "26.35 * 		(0.01875 * SafezoneH)";
					y = "7.5 * 		(0.025 * SafezoneH)";
				};
				class CA_FlirMode: RscText
				{
					colorText[] = {0.709, 0.972, 0.384, 1};
					font = "EtelkaMonospacePro";
					h = "1.2 * 		(0.025 * SafezoneH)";
					idc = 153;
					shadow = 0;
					sizeEx = "0.032*SafezoneH";
					style = 0;
					text = "BHOT";
					w = "4.5 * 		(0.01875 * SafezoneH)";
					x = "47.5 * 		(0.01875 * SafezoneH)";
					y = "29.2 * 		(0.025 * SafezoneH)";
				};
				class CA_Heading: RscText
				{
					colorText[] = {0.709, 0.972, 0.384, 1};
					font = "EtelkaMonospacePro";
					h = "1.2 * 		(0.025 * SafezoneH)";
					idc = 156;
					shadow = 0;
					sizeEx = "0.032*SafezoneH";
					style = 2;
					text = "015";
					w = "3 * 		(0.01875 * SafezoneH)";
					x = "25.15 * 		(0.01875 * SafezoneH)";
					y = "6.25 * 		(0.025 * SafezoneH)";
				};
				class CA_HorizontalCompass: RscPicture
				{
					color[] = {0.709, 0.972, 0.384, 1};
					font = "EtelkaMonospacePro";
					h = "1 * 		(0.025 * SafezoneH)";
					IDC = 207;
					imageGun = "#(rgb,8,8,3)color(0,0,0,0)";
					imageHull = "A3\Ui_f\data\IGUI\RscIngameUI\RscOptics\horizontalCompassHull.paa";
					imageObsTurret = "A3\Ui_f\data\IGUI\RscIngameUI\RscOptics\horizontalCompassObsTurret.paa";
					imageTurret = "A3\Ui_f\data\IGUI\RscIngameUI\RscOptics\horizontalCompassTurret.paa";
					style = 1;
					textSize = "0.02*SafezoneH";
					type = 105;
					w = "27.18 * 		(0.01875 * SafezoneH)";
					x = "13.04 * 		(0.01875 * SafezoneH)";
					y = "8.0 * 		(0.025 * SafezoneH)";
				};
				class CA_LasedRange: RscText
				{
					colorText[] = {0.709, 0.972, 0.384, 1};
					font = "EtelkaMonospacePro";
					h = "1.2 * 		(0.025 * SafezoneH)";
					idc = 198;
					shadow = 0;
					sizeEx = "0.032*SafezoneH";
					style = 2;
					text = "2456";
					w = "11 * 		(0.01875 * SafezoneH)";
					x = "21.15 * 		(0.01875 * SafezoneH)";
					y = "29.2 * 		(0.025 * SafezoneH)";
				};
				class CA_OpticsPitch: RscText
				{
					colorText[] = {0.709, 0.972, 0.384, 1};
					font = "EtelkaMonospacePro";
					h = "1.2 * 		(0.025 * SafezoneH)";
					idc = 182;
					shadow = 0;
					sizeEx = "0.032*SafezoneH";
					style = 1;
					text = "----";
					w = "8 * 		(0.01875 * SafezoneH)";
					x = "4.75 * 		(0.01875 * SafezoneH)";
					y = "9.6 * 		(0.025 * SafezoneH)";
				};
				class CA_TurretIndicator: RscPicture
				{
					color[] = {0.709, 0.972, 0.384, 1};
					h = "6 * 		(0.025 * SafezoneH)";
					IDC = 206;
					imageGun = "#(rgb,8,8,3)color(0,0,0,0)";
					imageHull = "A3\Ui_f\data\IGUI\RscIngameUI\RscOptics\turretIndicatorHull.paa";
					imageObsTurret = "A3\Ui_f\data\IGUI\RscIngameUI\RscOptics\turretIndicatorObsTurret.paa";
					imageTurret = "A3\Ui_f\data\IGUI\RscIngameUI\RscOptics\turretIndicatorTurret.paa";
					style = 0;
					textSize = "0.02*SafezoneH";
					type = 105;
					w = "6 * 		(0.01875 * SafezoneH)";
					x = "5.25 * 		(0.01875 * SafezoneH)";
					y = "3.5 * 		(0.025 * SafezoneH)";
				};
				class CA_VisionMode: RscText
				{
					colorText[] = {0.709, 0.972, 0.384, 1};
					font = "EtelkaMonospacePro";
					h = "1.2 * 		(0.025 * SafezoneH)";
					idc = 152;
					shadow = 0;
					sizeEx = "0.032*SafezoneH";
					style = 0;
					text = "FLIR";
					w = "4.5 * 		(0.01875 * SafezoneH)";
					x = "44 * 		(0.01875 * SafezoneH)";
					y = "29.2 * 		(0.025 * SafezoneH)";
				};
				class TextOpticsPitch: CA_OpticsPitch
				{
					idc = 1008;
					text = "EL:     ";
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
	};
	class RscOptics_MBT_01_commander_RCWS: RscUnitInfo
	{
		controls[] = {"CA_Zeroing", "CA_IGUI_elements_group", "CA_APC_WFOV_mode_group", "CA_APC_NFOV_mode_group"};
		idd = 300;
		class CA_APC_NFOV_mode_group: RscControlsGroupNoScrollbars
		{
			h = "40 * 		(0.025 * SafezoneH)";
			idc = 162;
			w = "53.5 * 		(0.01875 * SafezoneH)";
			x = "0 * 		(0.01875 * SafezoneH) + 		(SafezoneX + ((SafezoneW - SafezoneH) / 2))";
			y = "0 * 		(0.025 * SafezoneH) + 		(SafezoneY)";
			class controls
			{
				class CA_FOVModeNFOV: RscText
				{
					colorText[] = {0.709, 0.972, 0.384, 1};
					font = "EtelkaMonospacePro";
					h = "1.2 * 		(0.025 * SafezoneH)";
					idc = 1007;
					shadow = 0;
					sizeEx = "0.032*SafezoneH";
					text = "NFOV";
					w = "5 * 		(0.01875 * SafezoneH)";
					x = "40.4 * 		(0.01875 * SafezoneH)";
					y = "29.2 * 		(0.025 * SafezoneH)";
				};
			};
		};
		class CA_APC_WFOV_mode_group: RscControlsGroupNoScrollbars
		{
			h = "40 * 		(0.025 * SafezoneH)";
			idc = 163;
			w = "53.5 * 		(0.01875 * SafezoneH)";
			x = "0 * 		(0.01875 * SafezoneH) + 		(SafezoneX + ((SafezoneW - SafezoneH) / 2))";
			y = "0 * 		(0.025 * SafezoneH) + 		(SafezoneY)";
			class controls
			{
				class CA_FOVModeWFOV: RscText
				{
					colorText[] = {0.709, 0.972, 0.384, 1};
					font = "EtelkaMonospacePro";
					h = "1.2 * 		(0.025 * SafezoneH)";
					idc = 1002;
					shadow = 0;
					sizeEx = "0.032*SafezoneH";
					text = "WFOV";
					w = "5 * 		(0.01875 * SafezoneH)";
					x = "40.4 * 		(0.01875 * SafezoneH)";
					y = "29.2 * 		(0.025 * SafezoneH)";
				};
			};
		};
		class CA_IGUI_elements_group: RscControlsGroup
		{
			h = "40 * 		(0.025 * SafezoneH)";
			idc = 170;
			w = "53.5 * 		(0.01875 * SafezoneH)";
			x = "0 * 		(0.01875 * SafezoneH) + 		(SafezoneX + ((SafezoneW - SafezoneH) / 2))";
			y = "0 * 		(0.025 * SafezoneH) + 		(SafezoneY)";
			class controls
			{
				class AzimuthMark: RscPicture
				{
					colorText[] = {0.709, 0.972, 0.384, 1};
					h = "0.5 * 		(0.025 * SafezoneH)";
					IDC = 1012;
					text = "A3\Ui_f\data\IGUI\RscIngameUI\RscOptics\AzimuthMark.paa";
					w = "0.5 * 		(0.01875 * SafezoneH)";
					x = "26.35 * 		(0.01875 * SafezoneH)";
					y = "7.5 * 		(0.025 * SafezoneH)";
				};
				class CA_FireSolutionValid: CA_OpticsPitch
				{
					idc = 200;
					text = "RDY";
					y = "9.6 * 		(0.025 * SafezoneH)";
				};
				class CA_FlirMode: RscText
				{
					colorText[] = {0.709, 0.972, 0.384, 1};
					font = "EtelkaMonospacePro";
					h = "1.2 * 		(0.025 * SafezoneH)";
					idc = 153;
					shadow = 0;
					sizeEx = "0.032*SafezoneH";
					style = 0;
					text = "BHOT";
					w = "4.5 * 		(0.01875 * SafezoneH)";
					x = "47.5 * 		(0.01875 * SafezoneH)";
					y = "29.2 * 		(0.025 * SafezoneH)";
				};
				class CA_Heading: RscText
				{
					colorText[] = {0.709, 0.972, 0.384, 1};
					font = "EtelkaMonospacePro";
					h = "1.2 * 		(0.025 * SafezoneH)";
					idc = 156;
					shadow = 0;
					sizeEx = "0.032*SafezoneH";
					style = 2;
					text = "015";
					w = "3 * 		(0.01875 * SafezoneH)";
					x = "25.15 * 		(0.01875 * SafezoneH)";
					y = "6.25 * 		(0.025 * SafezoneH)";
				};
				class CA_HorizontalCompass: RscPicture
				{
					color[] = {0.709, 0.972, 0.384, 1};
					font = "EtelkaMonospacePro";
					h = "1 * 		(0.025 * SafezoneH)";
					IDC = 207;
					imageGun = "#(rgb,8,8,3)color(0,0,0,0)";
					imageHull = "A3\Ui_f\data\IGUI\RscIngameUI\RscOptics\horizontalCompassHull.paa";
					imageObsTurret = "A3\Ui_f\data\IGUI\RscIngameUI\RscOptics\horizontalCompassObsTurret.paa";
					imageTurret = "A3\Ui_f\data\IGUI\RscIngameUI\RscOptics\horizontalCompassTurret.paa";
					style = 1;
					textSize = "0.02*SafezoneH";
					type = 105;
					w = "27.18 * 		(0.01875 * SafezoneH)";
					x = "13.04 * 		(0.01875 * SafezoneH)";
					y = "8.0 * 		(0.025 * SafezoneH)";
				};
				class CA_LasedRange: RscText
				{
					colorText[] = {0.709, 0.972, 0.384, 1};
					font = "EtelkaMonospacePro";
					h = "1.2 * 		(0.025 * SafezoneH)";
					idc = 198;
					shadow = 0;
					sizeEx = "0.032*SafezoneH";
					style = 2;
					text = "2456";
					w = "11 * 		(0.01875 * SafezoneH)";
					x = "21.11 * 		(0.01875 * SafezoneH)";
					y = "29.2 * 		(0.025 * SafezoneH)";
				};
				class CA_MaxElevERR: CA_OpticsPitch
				{
					colorText[] = {0.706, 0.0745, 0.0196, 1};
					idc = 202;
					text = "MAX ZERO";
					y = "12.0 * 		(0.025 * SafezoneH)";
				};
				class CA_OpticsPitch: RscText
				{
					colorText[] = {0.709, 0.972, 0.384, 1};
					font = "EtelkaMonospacePro";
					h = "1.2 * 		(0.025 * SafezoneH)";
					idc = 182;
					shadow = 0;
					sizeEx = "0.032*SafezoneH";
					style = 1;
					text = "----";
					w = "8 * 		(0.01875 * SafezoneH)";
					x = "4.75 * 		(0.01875 * SafezoneH)";
					y = "10.8 * 		(0.025 * SafezoneH)";
				};
				class CA_TurretIndicator: RscPicture
				{
					color[] = {0.709, 0.972, 0.384, 1};
					h = "6 * 		(0.025 * SafezoneH)";
					IDC = 206;
					imageGun = "#(rgb,8,8,3)color(0,0,0,0)";
					imageHull = "A3\Ui_f\data\IGUI\RscIngameUI\RscOptics\turretIndicatorHull.paa";
					imageObsTurret = "A3\Ui_f\data\IGUI\RscIngameUI\RscOptics\turretIndicatorObsTurret.paa";
					imageTurret = "A3\Ui_f\data\IGUI\RscIngameUI\RscOptics\turretIndicatorTurret.paa";
					style = 0;
					textSize = "0.02*SafezoneH";
					type = 105;
					w = "6 * 		(0.01875 * SafezoneH)";
					x = "5.25 * 		(0.01875 * SafezoneH)";
					y = "3.5 * 		(0.025 * SafezoneH)";
				};
				class CA_VisionMode: RscText
				{
					colorText[] = {0.709, 0.972, 0.384, 1};
					font = "EtelkaMonospacePro";
					h = "1.2 * 		(0.025 * SafezoneH)";
					idc = 152;
					shadow = 0;
					sizeEx = "0.032*SafezoneH";
					style = 0;
					text = "FLIR";
					w = "4.5 * 		(0.01875 * SafezoneH)";
					x = "44 * 		(0.01875 * SafezoneH)";
					y = "29.2 * 		(0.025 * SafezoneH)";
				};
				class TextOpticsPitch: CA_OpticsPitch
				{
					idc = 1008;
					text = "EL:     ";
				};
				class TextOpticsRCWS: CA_OpticsPitch
				{
					idc = 1008;
					text = "RCWS    ";
					y = "9.6 * 		(0.025 * SafezoneH)";
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
	};
	class RscOptics_MBT_01_driver: RscUnitInfo
	{
		controls[] = {"CA_Zeroing", "CA_IGUI_elements_group"};
		idd = 300;
		class CA_IGUI_elements_group: RscControlsGroup
		{
			h = "40 * 		(0.025 * SafezoneH)";
			idc = 170;
			w = "53.5 * 		(0.01875 * SafezoneH)";
			x = "0 * 		(0.01875 * SafezoneH) + 		(SafezoneX + ((SafezoneW - SafezoneH) / 2))";
			y = "0 * 		(0.025 * SafezoneH) + 		(SafezoneY)";
			class controls
			{
				class CA_Heading: RscText
				{
					colorText[] = {0.95, 0.95, 0.95, 1};
					font = "EtelkaMonospacePro";
					h = "1.2 * 		(0.025 * SafezoneH)";
					idc = 156;
					shadow = 0;
					sizeEx = "0.032*SafezoneH";
					style = 2;
					text = "015";
					w = "3 * 		(0.01875 * SafezoneH)";
					x = "25.15 * 		(0.01875 * SafezoneH)";
					y = "2.25 * 		(0.025 * SafezoneH)";
				};
				class CA_HorizontalCompass: RscPicture
				{
					color[] = {0.95, 0.95, 0.95, 1};
					font = "EtelkaMonospacePro";
					h = "2 * 		(0.025 * SafezoneH)";
					IDC = 207;
					imageGun = "#(rgb,8,8,3)color(0,0,0,0)";
					imageHull = "A3\Ui_f\data\IGUI\RscIngameUI\RscOptics\horizontalCompassHull.paa";
					imageObsTurret = "A3\Ui_f\data\IGUI\RscIngameUI\RscOptics\horizontalCompassObsTurret.paa";
					imageTurret = "A3\Ui_f\data\IGUI\RscIngameUI\RscOptics\horizontalCompassTurret.paa";
					style = 1;
					textSize = "0.028*SafezoneH";
					type = 105;
					w = "35.18 * 		(0.01875 * SafezoneH)";
					x = "9.04 * 		(0.01875 * SafezoneH)";
					y = "0.0 * 		(0.025 * SafezoneH)";
				};
				class CA_TurretIndicator: RscPicture
				{
					color[] = {0.95, 0.95, 0.95, 1};
					h = "6 * 		(0.025 * SafezoneH)";
					IDC = 206;
					imageGun = "#(rgb,8,8,3)color(0,0,0,0)";
					imageHull = "A3\Ui_f\data\IGUI\RscIngameUI\RscOptics\turretIndicatorHull.paa";
					imageObsTurret = "A3\Ui_f\data\IGUI\RscIngameUI\RscOptics\turretIndicatorObsTurret.paa";
					imageTurret = "A3\Ui_f\data\IGUI\RscIngameUI\RscOptics\turretIndicatorTurret.paa";
					style = 0;
					textSize = "0.02*SafezoneH";
					type = 105;
					w = "6 * 		(0.01875 * SafezoneH)";
					x = "39 * 		(0.01875 * SafezoneH)";
					y = "33 * 		(0.025 * SafezoneH)";
				};
				class CA_VisionMode: RscText
				{
					colorText[] = {0.95, 0.95, 0.95, 1};
					font = "EtelkaMonospacePro";
					h = "1.2 * 		(0.025 * SafezoneH)";
					idc = 152;
					shadow = 0;
					sizeEx = "0.032*SafezoneH";
					style = 0;
					text = "FLIR";
					w = "4.5 * 		(0.01875 * SafezoneH)";
					x = "45 * 		(0.01875 * SafezoneH)";
					y = "34 * 		(0.025 * SafezoneH)";
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
	};
	class RscOptics_MBT_01_gunner: RscUnitInfo
	{
		controls[] = {"CA_Zeroing", "CA_IGUI_elements_group", "CA_APC_WFOV_mode_group", "CA_APC_NFOV_mode_group"};
		idd = 300;
		class CA_APC_NFOV_mode_group: RscControlsGroupNoScrollbars
		{
			h = "40 * 		(0.025 * SafezoneH)";
			idc = 162;
			w = "53.5 * 		(0.01875 * SafezoneH)";
			x = "0 * 		(0.01875 * SafezoneH) + 		(SafezoneX + ((SafezoneW - SafezoneH) / 2))";
			y = "0 * 		(0.025 * SafezoneH) + 		(SafezoneY)";
			class controls
			{
				class CA_FOVModeNFOV: RscText
				{
					colorText[] = {0.709, 0.972, 0.384, 1};
					font = "EtelkaMonospacePro";
					h = "1.2 * 		(0.025 * SafezoneH)";
					idc = 1007;
					shadow = 0;
					sizeEx = "0.032*SafezoneH";
					text = "NFOV";
					w = "5 * 		(0.01875 * SafezoneH)";
					x = "40.4 * 		(0.01875 * SafezoneH)";
					y = "29.2 * 		(0.025 * SafezoneH)";
				};
			};
		};
		class CA_APC_WFOV_mode_group: RscControlsGroupNoScrollbars
		{
			h = "40 * 		(0.025 * SafezoneH)";
			idc = 163;
			w = "53.5 * 		(0.01875 * SafezoneH)";
			x = "0 * 		(0.01875 * SafezoneH) + 		(SafezoneX + ((SafezoneW - SafezoneH) / 2))";
			y = "0 * 		(0.025 * SafezoneH) + 		(SafezoneY)";
			class controls
			{
				class CA_FOVModeWFOV: RscText
				{
					colorText[] = {0.709, 0.972, 0.384, 1};
					font = "EtelkaMonospacePro";
					h = "1.2 * 		(0.025 * SafezoneH)";
					idc = 1002;
					shadow = 0;
					sizeEx = "0.032*SafezoneH";
					text = "WFOV";
					w = "5 * 		(0.01875 * SafezoneH)";
					x = "40.4 * 		(0.01875 * SafezoneH)";
					y = "29.2 * 		(0.025 * SafezoneH)";
				};
			};
		};
		class CA_IGUI_elements_group: RscControlsGroup
		{
			h = "40 * 		(0.025 * SafezoneH)";
			idc = 170;
			w = "53.5 * 		(0.01875 * SafezoneH)";
			x = "0 * 		(0.01875 * SafezoneH) + 		(SafezoneX + ((SafezoneW - SafezoneH) / 2))";
			y = "0 * 		(0.025 * SafezoneH) + 		(SafezoneY)";
			class controls
			{
				class AzimuthMark: RscPicture
				{
					colorText[] = {0.709, 0.972, 0.384, 1};
					h = "0.5 * 		(0.025 * SafezoneH)";
					IDC = 1012;
					text = "A3\Ui_f\data\IGUI\RscIngameUI\RscOptics\AzimuthMark.paa";
					w = "0.5 * 		(0.01875 * SafezoneH)";
					x = "26.35 * 		(0.01875 * SafezoneH)";
					y = "3.0 * 		(0.025 * SafezoneH)";
				};
				class CA_FireSolutionValid: CA_LasedRange
				{
					idc = 200;
					text = "         RDY";
				};
				class CA_FlirMode: RscText
				{
					colorText[] = {0.709, 0.972, 0.384, 1};
					font = "EtelkaMonospacePro";
					h = "1.2 * 		(0.025 * SafezoneH)";
					idc = 153;
					shadow = 0;
					sizeEx = "0.032*SafezoneH";
					style = 0;
					text = "BHOT";
					w = "4.5 * 		(0.01875 * SafezoneH)";
					x = "47.5 * 		(0.01875 * SafezoneH)";
					y = "29.2 * 		(0.025 * SafezoneH)";
				};
				class CA_GunLayingDelay: CA_LasedRange
				{
					blinkingPeriod = 0.5;
					idc = 204;
					text = "LAY         ";
				};
				class CA_Heading: RscText
				{
					colorText[] = {0.709, 0.972, 0.384, 1};
					font = "EtelkaMonospacePro";
					h = "1.2 * 		(0.025 * SafezoneH)";
					idc = 156;
					shadow = 0;
					sizeEx = "0.032*SafezoneH";
					style = 2;
					text = "015";
					w = "3 * 		(0.01875 * SafezoneH)";
					x = "25.15 * 		(0.01875 * SafezoneH)";
					y = "1.75 * 		(0.025 * SafezoneH)";
				};
				class CA_HorizontalCompass: RscPicture
				{
					color[] = {0.709, 0.972, 0.384, 1};
					font = "EtelkaMonospacePro";
					h = "1 * 		(0.025 * SafezoneH)";
					IDC = 207;
					imageGun = "#(rgb,8,8,3)color(0,0,0,0)";
					imageHull = "A3\Ui_f\data\IGUI\RscIngameUI\RscOptics\horizontalCompassHull.paa";
					imageObsTurret = "A3\Ui_f\data\IGUI\RscIngameUI\RscOptics\horizontalCompassObsTurret.paa";
					imageTurret = "A3\Ui_f\data\IGUI\RscIngameUI\RscOptics\horizontalCompassTurret.paa";
					style = 1;
					textSize = "0.02*SafezoneH";
					type = 105;
					w = "27.18 * 		(0.01875 * SafezoneH)";
					x = "13.04 * 		(0.01875 * SafezoneH)";
					y = "3.5 * 		(0.025 * SafezoneH)";
				};
				class CA_LasedObjectERR: TargetSpeedText
				{
					idc = 203;
					text = "GND SCT ";
					y = "30.4 * 		(0.025 * SafezoneH)";
				};
				class CA_LasedRange: RscText
				{
					colorText[] = {0.709, 0.972, 0.384, 1};
					font = "EtelkaMonospacePro";
					h = "2 * 		(0.025 * SafezoneH)";
					idc = 198;
					shadow = 0;
					sizeEx = "0.040*SafezoneH";
					style = 2;
					text = "2456";
					w = "11 * 		(0.01875 * SafezoneH)";
					x = "21.15 * 		(0.01875 * SafezoneH)";
					y = "30.1 * 		(0.025 * SafezoneH)";
				};
				class CA_MaxElevERR: CA_OpticsPitch
				{
					colorText[] = {0.706, 0.0745, 0.0196, 1};
					idc = 202;
					text = "MAX ZERO";
					y = "10.8 * 		(0.025 * SafezoneH)";
				};
				class CA_MaxLeadERR: CA_LasedObjectERR
				{
					colorText[] = {0.706, 0.0745, 0.0196, 1};
					idc = 201;
					text = "MAX LEAD";
				};
				class CA_OpticsPitch: RscText
				{
					colorText[] = {0.709, 0.972, 0.384, 1};
					font = "EtelkaMonospacePro";
					h = "1.2 * 		(0.025 * SafezoneH)";
					idc = 182;
					shadow = 0;
					sizeEx = "0.032*SafezoneH";
					style = 1;
					text = "----";
					w = "8 * 		(0.01875 * SafezoneH)";
					x = "4.75 * 		(0.01875 * SafezoneH)";
					y = "9.6 * 		(0.025 * SafezoneH)";
				};
				class CA_TargetSpeed: TargetSpeedText
				{
					idc = 199;
				};
				class CA_TurretIndicator: RscPicture
				{
					color[] = {0.709, 0.972, 0.384, 1};
					h = "6 * 		(0.025 * SafezoneH)";
					IDC = 206;
					imageGun = "#(rgb,8,8,3)color(0,0,0,0)";
					imageHull = "A3\Ui_f\data\IGUI\RscIngameUI\RscOptics\turretIndicatorHull.paa";
					imageObsTurret = "A3\Ui_f\data\IGUI\RscIngameUI\RscOptics\turretIndicatorObsTurret.paa";
					imageTurret = "A3\Ui_f\data\IGUI\RscIngameUI\RscOptics\turretIndicatorTurret.paa";
					style = 0;
					textSize = "0.02*SafezoneH";
					type = 105;
					w = "6 * 		(0.01875 * SafezoneH)";
					x = "5.25 * 		(0.01875 * SafezoneH)";
					y = "3.5 * 		(0.025 * SafezoneH)";
				};
				class CA_VisionMode: RscText
				{
					colorText[] = {0.709, 0.972, 0.384, 1};
					font = "EtelkaMonospacePro";
					h = "1.2 * 		(0.025 * SafezoneH)";
					idc = 152;
					shadow = 0;
					sizeEx = "0.032*SafezoneH";
					style = 0;
					text = "FLIR";
					w = "4.5 * 		(0.01875 * SafezoneH)";
					x = "44 * 		(0.01875 * SafezoneH)";
					y = "29.2 * 		(0.025 * SafezoneH)";
				};
				class TargetSpeedText: RscText
				{
					colorText[] = {0.709, 0.972, 0.384, 1};
					font = "EtelkaMonospacePro";
					h = "1.2 * 		(0.025 * SafezoneH)";
					idc = 1050;
					shadow = 0;
					sizeEx = "0.032*SafezoneH";
					style = 1;
					text = "SPD:    ";
					w = "8 * 		(0.01875 * SafezoneH)";
					x = "3.5 * 		(0.025 * SafezoneH)";
					y = "29.2 * 		(0.025 * SafezoneH)";
				};
				class TextOpticsPitch: CA_OpticsPitch
				{
					idc = 1008;
					text = "EL:     ";
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
	};
	class RscOptics_MBT_02_commander: RscUnitInfo
	{
		controls[] = {"CA_Zeroing", "CA_IGUI_elements_group"};
		idd = 300;
		class CA_IGUI_elements_group: RscControlsGroup
		{
			h = "40 * 		(0.025 * SafezoneH)";
			idc = 170;
			w = "53.5 * 		(0.01875 * SafezoneH)";
			x = "0 * 		(0.01875 * SafezoneH) + 		(SafezoneX + ((SafezoneW - SafezoneH) / 2))";
			y = "0 * 		(0.025 * SafezoneH) + 		(SafezoneY)";
			class controls
			{
				class CA_Distance: RscText
				{
					colorBackground[] = {0, 0, 0, 1};
					font = "EtelkaMonospacePro";
					h = "1.2 * 		(0.025 * SafezoneH)";
					idc = 198;
					shadow = 0;
					sizeEx = "0.038*SafezoneH";
					style = 2;
					text = "2456";
					w = "5 * 		(0.01875 * SafezoneH)";
					x = "24.3 * 		(0.01875 * SafezoneH)";
					y = "31 * 		(0.025 * SafezoneH)";
				};
				class CA_Heading: RscText
				{
					font = "EtelkaMonospacePro";
					h = "1 * 		(0.025 * SafezoneH)";
					idc = 156;
					shadow = 0;
					sizeEx = "0.038*SafezoneH";
					style = 2;
					text = "015";
					w = "3 * 		(0.01875 * SafezoneH)";
					x = "43.65 * 		(0.01875 * SafezoneH)";
					y = "10.5 * 		(0.025 * SafezoneH)";
				};
				class CA_TurretIndicator: RscPicture
				{
					color[] = {0.95, 0.95, 0.95, 1};
					h = "6 * 		(0.025 * SafezoneH)";
					IDC = 206;
					imageGun = "#(rgb,8,8,3)color(0,0,0,0)";
					imageHull = "A3\Ui_f\data\IGUI\RscIngameUI\RscOptics\turretIndicatorHull.paa";
					imageObsTurret = "A3\Ui_f\data\IGUI\RscIngameUI\RscOptics\turretIndicatorObsTurret2.paa";
					imageTurret = "A3\Ui_f\data\IGUI\RscIngameUI\RscOptics\turretIndicatorTurret.paa";
					style = 0;
					textSize = "0.02*SafezoneH";
					type = 105;
					w = "6 * 		(0.01875 * SafezoneH)";
					x = "42.25 * 		(0.01875 * SafezoneH)";
					y = "5.5 * 		(0.025 * SafezoneH)";
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
	};
	class RscOptics_MBT_02_gunner: RscUnitInfo
	{
		controls[] = {"CA_Zeroing", "CA_IGUI_elements_group"};
		idd = 300;
		class CA_IGUI_elements_group: RscControlsGroup
		{
			h = "40 * 		(0.025 * SafezoneH)";
			idc = 170;
			w = "53.5 * 		(0.01875 * SafezoneH)";
			x = "0 * 		(0.01875 * SafezoneH) + 		(SafezoneX + ((SafezoneW - SafezoneH) / 2))";
			y = "0 * 		(0.025 * SafezoneH) + 		(SafezoneY)";
			class controls
			{
				class CA_Distance: RscText
				{
					colorBackground[] = {0, 0, 0, 1};
					font = "EtelkaMonospacePro";
					h = "1.2 * 		(0.025 * SafezoneH)";
					idc = 198;
					shadow = 0;
					sizeEx = "0.032*SafezoneH";
					style = 2;
					text = "2456";
					w = "5 * 		(0.01875 * SafezoneH)";
					x = "24.15 * 		(0.01875 * SafezoneH)";
					y = "35.2 * 		(0.025 * SafezoneH)";
				};
				class CA_Heading: RscText
				{
					font = "EtelkaMonospacePro";
					h = "1 * 		(0.025 * SafezoneH)";
					idc = 156;
					shadow = 0;
					sizeEx = "0.038*SafezoneH";
					style = 2;
					text = "015";
					w = "3 * 		(0.01875 * SafezoneH)";
					x = "43.65 * 		(0.01875 * SafezoneH)";
					y = "10.5 * 		(0.025 * SafezoneH)";
				};
				class CA_TurretIndicator: RscPicture
				{
					color[] = {0.95, 0.95, 0.95, 1};
					h = "6 * 		(0.025 * SafezoneH)";
					IDC = 206;
					imageGun = "#(rgb,8,8,3)color(0,0,0,0)";
					imageHull = "A3\Ui_f\data\IGUI\RscIngameUI\RscOptics\turretIndicatorHull.paa";
					imageObsTurret = "A3\Ui_f\data\IGUI\RscIngameUI\RscOptics\turretIndicatorObsTurret2.paa";
					imageTurret = "A3\Ui_f\data\IGUI\RscIngameUI\RscOptics\turretIndicatorTurret.paa";
					style = 0;
					textSize = "0.02*SafezoneH";
					type = 105;
					w = "6 * 		(0.01875 * SafezoneH)";
					x = "42.25 * 		(0.01875 * SafezoneH)";
					y = "5.5 * 		(0.025 * SafezoneH)";
				};
				class FireSolutionValid: RscPicture
				{
					h = "0.6 * 		(0.025 * SafezoneH)";
					idc = 200;
					text = "\A3\Ui_f\data\IGUI\RscIngameUI\RscOptics\square.paa";
					w = "0.6 * 		(0.01875 * SafezoneH)";
					x = "24.25 * 		(0.01875 * SafezoneH)";
					y = "35.2 * 		(0.025 * SafezoneH)";
				};
				class TargetSpeed: TargetSpeedText
				{
					colorBackground[] = {0, 0, 0, 1};
					idc = 199;
					style = 0;
					text = "2456";
					w = "5.2 * 		(0.01875 * SafezoneH)";
					x = "12.2 * 		(0.025 * SafezoneH)";
				};
				class TargetSpeedText: RscText
				{
					colorBackground[] = {0, 0, 0, 1};
					font = "EtelkaMonospacePro";
					h = "1.2 * 		(0.025 * SafezoneH)";
					idc = 1050;
					shadow = 0;
					sizeEx = "0.032*SafezoneH";
					style = 1;
					text = "SPD:";
					w = "3 * 		(0.01875 * SafezoneH)";
					x = "9.85 * 		(0.025 * SafezoneH)";
					y = "35.2 * 		(0.025 * SafezoneH)";
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
	};
	class RscOptics_MBT_03_gunner: RscUnitInfo
	{
		controls[] = {"CA_Zeroing", "CA_IGUI_elements_group"};
		idd = 300;
		class CA_IGUI_elements_group: RscControlsGroup
		{
			h = "40 * 		(0.025 * SafezoneH)";
			idc = 170;
			w = "53.5 * 		(0.01875 * SafezoneH)";
			x = "0 * 		(0.01875 * SafezoneH) + 		(SafezoneX + ((SafezoneW - SafezoneH) / 2))";
			y = "0 * 		(0.025 * SafezoneH) + 		(SafezoneY)";
			class controls
			{
				class CA_Distance: RscText
				{
					colorText[] = {1, 1, 1, 1};
					font = "EtelkaMonospacePro";
					h = "2 * 		(0.025 * SafezoneH)";
					idc = 198;
					shadow = 0;
					sizeEx = "0.040*SafezoneH";
					style = 2;
					text = "2456";
					w = "5 * 		(0.01875 * SafezoneH)";
					x = "24.15 * 		(0.01875 * SafezoneH)";
					y = "28.5 * 		(0.025 * SafezoneH)";
				};
				class CA_Heading: RscText
				{
					font = "EtelkaMonospacePro";
					h = "1 * 		(0.025 * SafezoneH)";
					idc = 156;
					shadow = 0;
					sizeEx = "0.038*SafezoneH";
					style = 2;
					text = "015";
					w = "3 * 		(0.01875 * SafezoneH)";
					x = "7.25 * 		(0.01875 * SafezoneH)";
					y = "16.3 * 		(0.025 * SafezoneH)";
				};
				class CA_OpticsPitch: RscText
				{
					font = "EtelkaMonospacePro";
					h = "1.1 * 		(0.025 * SafezoneH)";
					idc = 182;
					shadow = 0;
					sizeEx = "0.038*SafezoneH";
					style = 1;
					text = "36";
					w = "5.2 * 		(0.01875 * SafezoneH)";
					x = "1 * 		(0.01875 * SafezoneH)";
					y = "19.4 * 		(0.025 * SafezoneH)";
				};
				class CA_TurretIndicator: RscPicture
				{
					color[] = {0.95, 0.95, 0.95, 1};
					h = "7 * 		(0.025 * SafezoneH)";
					IDC = 206;
					imageGun = "#(rgb,8,8,3)color(0,0,0,0)";
					imageHull = "A3\Ui_f\data\IGUI\RscIngameUI\RscOptics\turretIndicatorHull_AAF.paa";
					imageObsTurret = "A3\Ui_f\data\IGUI\RscIngameUI\RscOptics\turretIndicatorObsTurret_RWS.paa";
					imageTurret = "A3\Ui_f\data\IGUI\RscIngameUI\RscOptics\turretIndicatorTurret_RWS.paa";
					style = 0;
					textSize = "0.02*SafezoneH";
					type = 105;
					w = "7 * 		(0.01875 * SafezoneH)";
					x = "5.25 * 		(0.01875 * SafezoneH)";
					y = "10.5 * 		(0.025 * SafezoneH)";
				};
				class FireSolutionValid: RscPicture
				{
					h = "0.6 * 		(0.025 * SafezoneH)";
					idc = 200;
					text = "\A3\Ui_f\data\IGUI\RscIngameUI\RscOptics\square.paa";
					w = "0.6 * 		(0.01875 * SafezoneH)";
					x = "24.25 * 		(0.01875 * SafezoneH)";
					y = "28.5 * 		(0.025 * SafezoneH)";
				};
				class TargetSpeed: TargetSpeedText
				{
					idc = 199;
					style = 0;
					text = "2456";
					w = "5.2 * 		(0.01875 * SafezoneH)";
					x = "7.2 * 		(0.025 * SafezoneH)";
				};
				class TargetSpeedText: RscText
				{
					font = "EtelkaMonospacePro";
					h = "1.2 * 		(0.025 * SafezoneH)";
					idc = 1050;
					shadow = 0;
					sizeEx = "0.032*SafezoneH";
					style = 1;
					text = "SPD:";
					w = "3 * 		(0.01875 * SafezoneH)";
					x = "4.85 * 		(0.025 * SafezoneH)";
					y = "29.2 * 		(0.025 * SafezoneH)";
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
	};
	class RscOptics_nightstalker: RscUnitInfo
	{
		controls[] = {"CA_IGUI_elements_group"};
		idd = 300;
		class CA_IGUI_elements_group: RscControlsGroup
		{
			h = "40 * 		(0.025 * SafezoneH)";
			idc = 170;
			w = "53.5 * 		(0.01875 * SafezoneH)";
			x = "0 * 		(0.01875 * SafezoneH) + 		(SafezoneX + ((SafezoneW - SafezoneH) / 2))";
			y = "0 * 		(0.025 * SafezoneH) + 		(SafezoneY)";
			class controls
			{
				class CA_Bracket: RscText
				{
					font = "EtelkaMonospacePro";
					h = "20.5 * 		(0.025 * SafezoneH)";
					idc = 181;
					shadow = 0;
					sizeEx = "0.035*SafezoneH";
					style = "0x30 + 0x800";
					text = "A3\weapons_f\acc\Data\reticle_nightstalker_bracket_ca.paa";
					w = "20.5 * 		(0.01875 * SafezoneH)";
					x = "16.5 * 		(0.01875 * SafezoneH)";
					y = "9.75 * 		(0.025 * SafezoneH)";
				};
				class CA_Distance: RscText
				{
					colorText[] = {0, 1, 0, 0.5};
					font = "EtelkaMonospacePro";
					h = "2 * 		(0.025 * SafezoneH)";
					idc = 198;
					shadow = 0;
					sizeEx = "0.045*SafezoneH";
					style = 0;
					text = "- - - -";
					w = "5.6 * 		(0.01875 * SafezoneH)";
					x = "38 * 		(0.01875 * SafezoneH)";
					y = "19.1 * 		(0.025 * SafezoneH)";
				};
				class CA_OpticsZoom: RscText
				{
					colorText[] = {0, 1, 0, 0.5};
					font = "EtelkaMonospacePro";
					h = "1.5 * 		(0.025 * SafezoneH)";
					idc = 180;
					shadow = 0;
					sizeEx = "0.028*SafezoneH";
					style = 1;
					text = "5.5";
					w = "4 * 		(0.01875 * SafezoneH)";
					x = "38.8 * 		(0.01875 * SafezoneH)";
					y = "20.8 * 		(0.025 * SafezoneH)";
				};
				class CA_VisionMode: RscText
				{
					colorText[] = {0, 1, 0, 0.5};
					font = "EtelkaMonospacePro";
					h = "2 * 		(0.025 * SafezoneH)";
					idc = 179;
					shadow = 0;
					sizeEx = "0.045*SafezoneH";
					style = 0;
					text = "VIS";
					w = "5 * 		(0.01875 * SafezoneH)";
					x = "10.5 * 		(0.01875 * SafezoneH)";
					y = "19.1 * 		(0.025 * SafezoneH)";
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
	};
	class RscOptics_Offroad_01: RscUnitInfo
	{
		controls[] = {"CA_Zeroing"};
		idd = 300;
	};
	class RscOptics_punisher
	{
		controls[] = {"CA_IGUI_elements_group"};
		idd = 300;
		class CA_IGUI_elements_group: RscControlsGroup
		{
			h = "SafezoneH";
			idc = 170;
			w = "SafezoneH";
			x = "SafezoneX + ((SafezoneW - SafezoneH) / 2)";
			y = "SafezoneY";
			class Controls
			{
				class A3_DEG_text: RscText
				{
					colorText[] = {0.706, 0.0745, 0.0196, 1};
					font = "EtelkaMonospacePro";
					h = "0.03 * safezoneH";
					idc = -1;
					shadow = 0;
					sizeEx = "0.038*SafezoneH";
					style = 1;
					text = "DEG";
					w = "0.12 * safezoneH";
					x = "0.72 * safezoneH";
					y = "0.29 * safezoneH";
				};
				class A3_FuseRange: RscText
				{
					colorText[] = {0.706, 0.0745, 0.0196, 1};
					font = "EtelkaMonospacePro";
					h = "0.03 * safezoneH";
					idc = -1;
					shadow = 0;
					sizeEx = "0.038*SafezoneH";
					style = 1;
					text = "520";
					w = "0.12 * safezoneH";
					x = "0.72 * safezoneH";
					y = "0.48 * safezoneH";
				};
				class CA_Distance: RscOpticsValue
				{
					colorText[] = {0.706, 0.0745, 0.0196, 1};
					font = "EtelkaMonospacePro";
					h = "0.03 * safezoneH";
					idc = 198;
					shadow = 0;
					sizeEx = "0.038*SafezoneH";
					style = 1;
					w = "0.09 * safezoneH";
					x = "0.41 * safezoneH";
					y = "0.42 * safezoneH";
				};
				class CA_DistanceBackground: RscEdit
				{
					colorBackground[] = {0, 0, 0, 0};
					colorSelection[] = {0, 0, 0, 0};
					colorText[] = {0, 0, 0, 0};
					h = "0.0676503 * safezoneH";
					idc = -1;
					shadow = 0;
					sizeEx = "0.038*SafezoneH";
					style = "0x01 + 0x40";
					type = 0;
					w = "0.112222 * safezoneH";
					x = "0.3*SafezoneW";
					y = "0.05*SafezoneH";
				};
				class CA_Elev: RscOpticsValue
				{
					colorText[] = {0.706, 0.0745, 0.0196, 1};
					font = "EtelkaMonospacePro";
					h = "0.03 * safezoneH";
					idc = 175;
					shadow = 0;
					sizeEx = "0.038*SafezoneH";
					style = 1;
					w = "0.12 * safezoneH";
					x = "0.72 * safezoneH";
					y = "0.33 * safezoneH";
				};
				class CA_VisionMode: RscText
				{
					colorText[] = {0.706, 0.0745, 0.0196, 1};
					font = "EtelkaMonospacePro";
					h = "0.03 * safezoneH";
					idc = 179;
					shadow = 0;
					sizeEx = "0.038*SafezoneH";
					style = 1;
					w = "0.12 * safezoneH";
					x = "0.72 * safezoneH";
					y = "0.25 * safezoneH";
				};
			};
			class HScrollbar: HScrollbar
			{
				color[] = {1, 1, 1, 0};
				height = 0.001;
			};
			class VScrollbar: VScrollbar
			{
				autoScrollDelay = 5;
				autoScrollRewind = 0;
				autoScrollSpeed = -1;
				color[] = {1, 1, 1, 0};
				width = 0.001;
			};
		};
	};
	class RscOptics_Radar_01: RscUnitInfo
	{
		controls[] = {"CA_Zeroing", "CA_IGUI_elements_group", "CA_APC_WFOV_mode_group", "CA_APC_NFOV_mode_group"};
		idd = 300;
		class CA_APC_NFOV_mode_group: RscControlsGroupNoScrollbars
		{
			h = "40 * 		(0.025 * SafezoneH)";
			idc = 162;
			w = "61.5 * 		(0.01875 * SafezoneH)";
			x = "-4 * 		(0.01875 * SafezoneH) + 			(safezoneX)";
			y = "0 * 		(0.025 * SafezoneH) + 		(SafezoneY)";
			class controls
			{
				class CA_FOVModeNFOV: RscText
				{
					colorBackground[] = {0, 0, 0, 1};
					font = "EtelkaMonospacePro";
					h = "1 * 		(0.025 * SafezoneH)";
					idc = 1007;
					shadow = 0;
					sizeEx = "0.028*SafezoneH";
					text = "NFOV";
					w = "4.5 * 		(0.01875 * SafezoneH)";
					x = "5.4 * 		(0.01875 * SafezoneH)";
					y = "21.95 * 		(0.025 * SafezoneH)";
				};
			};
		};
		class CA_APC_WFOV_mode_group: RscControlsGroupNoScrollbars
		{
			h = "40 * 		(0.025 * SafezoneH)";
			idc = 163;
			w = "61.5 * 		(0.01875 * SafezoneH)";
			x = "-4 * 		(0.01875 * SafezoneH) + 			(safezoneX)";
			y = "0 * 		(0.025 * SafezoneH) + 		(SafezoneY)";
			class controls
			{
				class CA_FOVModeWFOV: RscText
				{
					colorBackground[] = {0, 0, 0, 1};
					font = "EtelkaMonospacePro";
					h = "1 * 		(0.025 * SafezoneH)";
					idc = 1002;
					shadow = 0;
					sizeEx = "0.028*SafezoneH";
					text = "WFOV";
					w = "4.5 * 		(0.01875 * SafezoneH)";
					x = "5.4 * 		(0.01875 * SafezoneH)";
					y = "21.95 * 		(0.025 * SafezoneH)";
				};
			};
		};
		class CA_IGUI_elements_group: RscControlsGroup
		{
			h = "40 * 		(0.025 * SafezoneH)";
			idc = 170;
			w = "61.5 * 		(0.01875 * SafezoneH)";
			x = "-4 * 		(0.01875 * SafezoneH) + 			(safezoneX)";
			y = "0 * 		(0.025 * SafezoneH) + 		(SafezoneY)";
			class controls
			{
				class CA_Distance: RscText
				{
					font = "EtelkaMonospacePro";
					h = "2 * 		(0.025 * SafezoneH)";
					idc = 198;
					shadow = 0;
					sizeEx = "0.040*SafezoneH";
					style = 0;
					text = "2456";
					w = "5 * 		(0.01875 * SafezoneH)";
					x = "24.15 * 		(0.01875 * SafezoneH)";
					y = "28.5 * 		(0.025 * SafezoneH)";
				};
				class CA_Heading: RscText
				{
					font = "EtelkaMonospacePro";
					h = "1 * 		(0.025 * SafezoneH)";
					idc = 156;
					shadow = 0;
					sizeEx = "0.038*SafezoneH";
					style = 2;
					text = "015";
					w = "3 * 		(0.01875 * SafezoneH)";
					x = "25.15 * 		(0.01875 * SafezoneH)";
					y = "11 * 		(0.025 * SafezoneH)";
				};
				class CA_OpticsPitch: RscText
				{
					colorBackground[] = {0, 0, 0, 1};
					font = "EtelkaMonospacePro";
					h = "1 * 		(0.025 * SafezoneH)";
					idc = 182;
					shadow = 0;
					sizeEx = "0.028*SafezoneH";
					style = 0;
					text = "36";
					w = "4 * 		(0.01875 * SafezoneH)";
					x = "10.1 * 		(0.01875 * SafezoneH)";
					y = "20 * 		(0.025 * SafezoneH)";
				};
				class FireSolutionValid: RscPicture
				{
					h = "0.6 * 		(0.025 * SafezoneH)";
					idc = 200;
					text = "\A3\Ui_f\data\IGUI\RscIngameUI\RscOptics\square.paa";
					w = "0.6 * 		(0.01875 * SafezoneH)";
					x = "24.25 * 		(0.01875 * SafezoneH)";
					y = "28.5 * 		(0.025 * SafezoneH)";
				};
				class TargetSpeed: TargetSpeedText
				{
					idc = 199;
					style = 0;
					text = "2456";
					w = "5.2 * 		(0.01875 * SafezoneH)";
					x = "7.2 * 		(0.025 * SafezoneH)";
				};
				class TargetSpeedText: RscText
				{
					font = "EtelkaMonospacePro";
					h = "1.2 * 		(0.025 * SafezoneH)";
					idc = 1050;
					shadow = 0;
					sizeEx = "0.032*SafezoneH";
					style = 1;
					text = "SPD:";
					w = "3 * 		(0.01875 * SafezoneH)";
					x = "4.85 * 		(0.025 * SafezoneH)";
					y = "29.2 * 		(0.025 * SafezoneH)";
				};
				class TextACQ: RscText
				{
					colorBackground[] = {0, 0, 0, 1};
					font = "EtelkaMonospacePro";
					h = "1 * 		(0.025 * SafezoneH)";
					idc = 1012;
					shadow = 0;
					sizeEx = "0.028*SafezoneH";
					text = "ACQ:CENT-Au";
					w = "7.5 * 		(0.01875 * SafezoneH)";
					x = "5.4 * 		(0.01875 * SafezoneH)";
					y = "30 * 		(0.025 * SafezoneH)";
				};
				class TextCENT: RscText
				{
					colorBackground[] = {0, 0, 0, 1};
					font = "EtelkaMonospacePro";
					h = "1 * 		(0.025 * SafezoneH)";
					idc = 1014;
					shadow = 0;
					sizeEx = "0.028*SafezoneH";
					text = "CENT-Wt";
					w = "5 * 		(0.01875 * SafezoneH)";
					x = "15.5 * 		(0.01875 * SafezoneH)";
					y = "30 * 		(0.025 * SafezoneH)";
				};
				class TextColonDist: RscText
				{
					colorBackground[] = {0, 0, 0, 1};
					font = "EtelkaMonospacePro";
					h = "1 * 		(0.025 * SafezoneH)";
					idc = 1008;
					shadow = 0;
					sizeEx = "0.028*SafezoneH";
					text = ":";
					w = "1 * 		(0.01875 * SafezoneH)";
					x = "9.3 * 		(0.01875 * SafezoneH)";
					y = "19 * 		(0.025 * SafezoneH)";
				};
				class TextColonEL: RscText
				{
					colorBackground[] = {0, 0, 0, 1};
					font = "EtelkaMonospacePro";
					h = "1 * 		(0.025 * SafezoneH)";
					idc = 1009;
					shadow = 0;
					sizeEx = "0.028*SafezoneH";
					text = ":";
					w = "1 * 		(0.01875 * SafezoneH)";
					x = "9.3 * 		(0.01875 * SafezoneH)";
					y = "20 * 		(0.025 * SafezoneH)";
				};
				class TextCST: RscText
				{
					colorBackground[] = {1, 1, 1, 1};
					colorText[] = {0, 0, 0, 1};
					font = "EtelkaMonospacePro";
					h = "1 * 		(0.025 * SafezoneH)";
					idc = 1013;
					shadow = 0;
					sizeEx = "0.028*SafezoneH";
					text = "CST:";
					w = "2.8 * 		(0.01875 * SafezoneH)";
					x = "12.9 * 		(0.01875 * SafezoneH)";
					y = "30 * 		(0.025 * SafezoneH)";
				};
				class TextDist: RscText
				{
					colorBackground[] = {0, 0, 0, 1};
					font = "EtelkaMonospacePro";
					h = "1 * 		(0.025 * SafezoneH)";
					idc = 1003;
					shadow = 0;
					sizeEx = "0.028*SafezoneH";
					text = "DIST";
					w = "5 * 		(0.01875 * SafezoneH)";
					x = "5.4 * 		(0.01875 * SafezoneH)";
					y = "19 * 		(0.025 * SafezoneH)";
				};
				class TextEL: RscText
				{
					colorBackground[] = {0, 0, 0, 1};
					font = "EtelkaMonospacePro";
					h = "1 * 		(0.025 * SafezoneH)";
					idc = 1010;
					shadow = 0;
					sizeEx = "0.028*SafezoneH";
					text = "EL";
					w = "5 * 		(0.01875 * SafezoneH)";
					x = "5.4 * 		(0.01875 * SafezoneH)";
					y = "20 * 		(0.025 * SafezoneH)";
				};
				class TextRadar: RscText
				{
					colorBackground[] = {0, 0, 0, 1};
					font = "EtelkaMonospacePro";
					h = "1 * 		(0.025 * SafezoneH)";
					idc = 1011;
					shadow = 0;
					sizeEx = "0.028*SafezoneH";
					text = "RADAR";
					w = "4.5 * 		(0.01875 * SafezoneH)";
					x = "5.4 * 		(0.01875 * SafezoneH)";
					y = "20.98 * 		(0.025 * SafezoneH)";
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
	};
	class RscOptics_Radar_02: RscUnitInfo
	{
		controls[] = {"CA_Zeroing", "CA_IGUI_elements_group", "CA_APC_WFOV_mode_group", "CA_APC_NFOV_mode_group"};
		idd = 300;
		class CA_APC_NFOV_mode_group: RscControlsGroupNoScrollbars
		{
			h = "40 * 		(0.025 * SafezoneH)";
			idc = 162;
			w = "61.5 * 		(0.01875 * SafezoneH)";
			x = "-4 * 		(0.01875 * SafezoneH) + 			(safezoneX)";
			y = "0 * 		(0.025 * SafezoneH) + 		(SafezoneY)";
			class controls
			{
				class CA_FOVModeNFOV: RscText
				{
					colorBackground[] = {0, 0, 0, 1};
					font = "EtelkaMonospacePro";
					h = "1 * 		(0.025 * SafezoneH)";
					idc = 1007;
					shadow = 0;
					sizeEx = "0.028*SafezoneH";
					text = "NFOV";
					w = "4.5 * 		(0.01875 * SafezoneH)";
					x = "5.4 * 		(0.01875 * SafezoneH)";
					y = "21.95 * 		(0.025 * SafezoneH)";
				};
			};
		};
		class CA_APC_WFOV_mode_group: RscControlsGroupNoScrollbars
		{
			h = "40 * 		(0.025 * SafezoneH)";
			idc = 163;
			w = "61.5 * 		(0.01875 * SafezoneH)";
			x = "-4 * 		(0.01875 * SafezoneH) + 			(safezoneX)";
			y = "0 * 		(0.025 * SafezoneH) + 		(SafezoneY)";
			class controls
			{
				class CA_FOVModeWFOV: RscText
				{
					colorBackground[] = {0, 0, 0, 1};
					font = "EtelkaMonospacePro";
					h = "1 * 		(0.025 * SafezoneH)";
					idc = 1002;
					shadow = 0;
					sizeEx = "0.028*SafezoneH";
					text = "WFOV";
					w = "4.5 * 		(0.01875 * SafezoneH)";
					x = "5.4 * 		(0.01875 * SafezoneH)";
					y = "21.95 * 		(0.025 * SafezoneH)";
				};
			};
		};
		class CA_IGUI_elements_group: RscControlsGroup
		{
			h = "40 * 		(0.025 * SafezoneH)";
			idc = 170;
			w = "61.5 * 		(0.01875 * SafezoneH)";
			x = "-4 * 		(0.01875 * SafezoneH) + 			(safezoneX)";
			y = "0 * 		(0.025 * SafezoneH) + 		(SafezoneY)";
			class controls
			{
				class CA_Distance: RscText
				{
					font = "EtelkaMonospacePro";
					h = "2 * 		(0.025 * SafezoneH)";
					idc = 198;
					shadow = 0;
					sizeEx = "0.040*SafezoneH";
					style = 0;
					text = "2456";
					w = "5 * 		(0.01875 * SafezoneH)";
					x = "24.15 * 		(0.01875 * SafezoneH)";
					y = "28.5 * 		(0.025 * SafezoneH)";
				};
				class CA_Heading: RscText
				{
					font = "EtelkaMonospacePro";
					h = "1 * 		(0.025 * SafezoneH)";
					idc = 156;
					shadow = 0;
					sizeEx = "0.038*SafezoneH";
					style = 2;
					text = "015";
					w = "3 * 		(0.01875 * SafezoneH)";
					x = "25.15 * 		(0.01875 * SafezoneH)";
					y = "11 * 		(0.025 * SafezoneH)";
				};
				class CA_OpticsPitch: RscText
				{
					colorBackground[] = {0, 0, 0, 1};
					font = "EtelkaMonospacePro";
					h = "1 * 		(0.025 * SafezoneH)";
					idc = 182;
					shadow = 0;
					sizeEx = "0.028*SafezoneH";
					style = 0;
					text = "36";
					w = "4 * 		(0.01875 * SafezoneH)";
					x = "10.1 * 		(0.01875 * SafezoneH)";
					y = "20 * 		(0.025 * SafezoneH)";
				};
				class FireSolutionValid: RscPicture
				{
					h = "0.6 * 		(0.025 * SafezoneH)";
					idc = 200;
					text = "\A3\Ui_f\data\IGUI\RscIngameUI\RscOptics\square.paa";
					w = "0.6 * 		(0.01875 * SafezoneH)";
					x = "24.25 * 		(0.01875 * SafezoneH)";
					y = "28.5 * 		(0.025 * SafezoneH)";
				};
				class TargetSpeed: TargetSpeedText
				{
					idc = 199;
					style = 0;
					text = "2456";
					w = "5.2 * 		(0.01875 * SafezoneH)";
					x = "7.2 * 		(0.025 * SafezoneH)";
				};
				class TargetSpeedText: RscText
				{
					font = "EtelkaMonospacePro";
					h = "1.2 * 		(0.025 * SafezoneH)";
					idc = 1050;
					shadow = 0;
					sizeEx = "0.032*SafezoneH";
					style = 1;
					text = "SPD:";
					w = "3 * 		(0.01875 * SafezoneH)";
					x = "4.85 * 		(0.025 * SafezoneH)";
					y = "29.2 * 		(0.025 * SafezoneH)";
				};
				class TextACQ: RscText
				{
					colorBackground[] = {0, 0, 0, 1};
					font = "EtelkaMonospacePro";
					h = "1 * 		(0.025 * SafezoneH)";
					idc = 1012;
					shadow = 0;
					sizeEx = "0.028*SafezoneH";
					text = "ACQ:CENT-Au";
					w = "7.5 * 		(0.01875 * SafezoneH)";
					x = "5.4 * 		(0.01875 * SafezoneH)";
					y = "30 * 		(0.025 * SafezoneH)";
				};
				class TextCENT: RscText
				{
					colorBackground[] = {0, 0, 0, 1};
					font = "EtelkaMonospacePro";
					h = "1 * 		(0.025 * SafezoneH)";
					idc = 1014;
					shadow = 0;
					sizeEx = "0.028*SafezoneH";
					text = "CENT-Wt";
					w = "5 * 		(0.01875 * SafezoneH)";
					x = "15.5 * 		(0.01875 * SafezoneH)";
					y = "30 * 		(0.025 * SafezoneH)";
				};
				class TextColonDist: RscText
				{
					colorBackground[] = {0, 0, 0, 1};
					font = "EtelkaMonospacePro";
					h = "1 * 		(0.025 * SafezoneH)";
					idc = 1008;
					shadow = 0;
					sizeEx = "0.028*SafezoneH";
					text = ":";
					w = "1 * 		(0.01875 * SafezoneH)";
					x = "9.3 * 		(0.01875 * SafezoneH)";
					y = "19 * 		(0.025 * SafezoneH)";
				};
				class TextColonEL: RscText
				{
					colorBackground[] = {0, 0, 0, 1};
					font = "EtelkaMonospacePro";
					h = "1 * 		(0.025 * SafezoneH)";
					idc = 1009;
					shadow = 0;
					sizeEx = "0.028*SafezoneH";
					text = ":";
					w = "1 * 		(0.01875 * SafezoneH)";
					x = "9.3 * 		(0.01875 * SafezoneH)";
					y = "20 * 		(0.025 * SafezoneH)";
				};
				class TextCST: RscText
				{
					colorBackground[] = {1, 1, 1, 1};
					colorText[] = {0, 0, 0, 1};
					font = "EtelkaMonospacePro";
					h = "1 * 		(0.025 * SafezoneH)";
					idc = 1013;
					shadow = 0;
					sizeEx = "0.028*SafezoneH";
					text = "CST:";
					w = "2.8 * 		(0.01875 * SafezoneH)";
					x = "12.9 * 		(0.01875 * SafezoneH)";
					y = "30 * 		(0.025 * SafezoneH)";
				};
				class TextDist: RscText
				{
					colorBackground[] = {0, 0, 0, 1};
					font = "EtelkaMonospacePro";
					h = "1 * 		(0.025 * SafezoneH)";
					idc = 1003;
					shadow = 0;
					sizeEx = "0.028*SafezoneH";
					text = "DIST";
					w = "5 * 		(0.01875 * SafezoneH)";
					x = "5.4 * 		(0.01875 * SafezoneH)";
					y = "19 * 		(0.025 * SafezoneH)";
				};
				class TextEL: RscText
				{
					colorBackground[] = {0, 0, 0, 1};
					font = "EtelkaMonospacePro";
					h = "1 * 		(0.025 * SafezoneH)";
					idc = 1010;
					shadow = 0;
					sizeEx = "0.028*SafezoneH";
					text = "EL";
					w = "5 * 		(0.01875 * SafezoneH)";
					x = "5.4 * 		(0.01875 * SafezoneH)";
					y = "20 * 		(0.025 * SafezoneH)";
				};
				class TextRadar: RscText
				{
					colorBackground[] = {0, 0, 0, 1};
					font = "EtelkaMonospacePro";
					h = "1 * 		(0.025 * SafezoneH)";
					idc = 1011;
					shadow = 0;
					sizeEx = "0.028*SafezoneH";
					text = "RADAR";
					w = "4.5 * 		(0.01875 * SafezoneH)";
					x = "5.4 * 		(0.01875 * SafezoneH)";
					y = "20.98 * 		(0.025 * SafezoneH)";
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
	};
	class RscOptics_Rangefinder: RscUnitInfo
	{
		controls[] = {"CA_IGUI_elements_group"};
		idd = 300;
		class CA_IGUI_elements_group: RscControlsGroup
		{
			h = "40 * 		(0.025 * SafezoneH)";
			idc = 170;
			w = "53.5 * 		(0.01875 * SafezoneH)";
			x = "0 * 		(0.01875 * SafezoneH) + 		(SafezoneX + ((SafezoneW - SafezoneH) / 2))";
			y = "0 * 		(0.025 * SafezoneH) + 		(SafezoneY)";
			class controls
			{
				class CA_Distance: RscText
				{
					colorText[] = {0.706, 0.0745, 0.0196, 1};
					font = "EtelkaMonospacePro";
					h = "1.2 * 		(0.025 * SafezoneH)";
					idc = 198;
					shadow = 0;
					sizeEx = "0.038*SafezoneH";
					style = 1;
					text = "2456";
					w = "4 * 		(0.01875 * SafezoneH)";
					x = "45.5 * 		(0.01875 * SafezoneH)";
					y = "19.5 * 		(0.025 * SafezoneH)";
				};
				class CA_Heading: RscText
				{
					colorText[] = {0.706, 0.0745, 0.0196, 1};
					font = "EtelkaMonospacePro";
					h = "1.2 * 		(0.025 * SafezoneH)";
					idc = 156;
					shadow = 0;
					sizeEx = "0.0285*SafezoneH";
					style = 0;
					text = "023";
					w = "3.5 * 		(0.01875 * SafezoneH)";
					x = "25.3 * 		(0.01875 * SafezoneH)";
					y = "9.5 * 		(0.025 * SafezoneH)";
				};
				class CA_VisionMode: RscText
				{
					colorText[] = {0.706, 0.0745, 0.0196, 1};
					font = "EtelkaMonospacePro";
					h = "1.2 * 		(0.025 * SafezoneH)";
					idc = 179;
					shadow = 0;
					sizeEx = "0.038*SafezoneH";
					style = 0;
					text = "VIS";
					w = "4 * 		(0.01875 * SafezoneH)";
					x = "6.7 * 		(0.01875 * SafezoneH)";
					y = "19.5 * 		(0.025 * SafezoneH)";
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
	};
	class RscOptics_SAM_01: RscUnitInfo
	{
		controls[] = {"CA_Zeroing", "CA_IGUI_elements_group", "CA_APC_WFOV_mode_group", "CA_APC_NFOV_mode_group"};
		idd = 300;
		class CA_APC_NFOV_mode_group: RscControlsGroupNoScrollbars
		{
			h = "40 * 		(0.025 * SafezoneH)";
			idc = 162;
			w = "61.5 * 		(0.01875 * SafezoneH)";
			x = "-4 * 		(0.01875 * SafezoneH) + 			(safezoneX)";
			y = "0 * 		(0.025 * SafezoneH) + 		(SafezoneY)";
			class controls
			{
				class CA_FOVModeNFOV: RscText
				{
					colorBackground[] = {0, 0, 0, 1};
					font = "EtelkaMonospacePro";
					h = "1 * 		(0.025 * SafezoneH)";
					idc = 1007;
					shadow = 0;
					sizeEx = "0.028*SafezoneH";
					text = "NFOV";
					w = "4.5 * 		(0.01875 * SafezoneH)";
					x = "5.4 * 		(0.01875 * SafezoneH)";
					y = "21.95 * 		(0.025 * SafezoneH)";
				};
			};
		};
		class CA_APC_WFOV_mode_group: RscControlsGroupNoScrollbars
		{
			h = "40 * 		(0.025 * SafezoneH)";
			idc = 163;
			w = "61.5 * 		(0.01875 * SafezoneH)";
			x = "-4 * 		(0.01875 * SafezoneH) + 			(safezoneX)";
			y = "0 * 		(0.025 * SafezoneH) + 		(SafezoneY)";
			class controls
			{
				class CA_FOVModeWFOV: RscText
				{
					colorBackground[] = {0, 0, 0, 1};
					font = "EtelkaMonospacePro";
					h = "1 * 		(0.025 * SafezoneH)";
					idc = 1002;
					shadow = 0;
					sizeEx = "0.028*SafezoneH";
					text = "WFOV";
					w = "4.5 * 		(0.01875 * SafezoneH)";
					x = "5.4 * 		(0.01875 * SafezoneH)";
					y = "21.95 * 		(0.025 * SafezoneH)";
				};
			};
		};
		class CA_IGUI_elements_group: RscControlsGroup
		{
			h = "40 * 		(0.025 * SafezoneH)";
			idc = 170;
			w = "61.5 * 		(0.01875 * SafezoneH)";
			x = "-4 * 		(0.01875 * SafezoneH) + 			(safezoneX)";
			y = "0 * 		(0.025 * SafezoneH) + 		(SafezoneY)";
			class controls
			{
				class CA_Distance: RscText
				{
					font = "EtelkaMonospacePro";
					h = "2 * 		(0.025 * SafezoneH)";
					idc = 198;
					shadow = 0;
					sizeEx = "0.040*SafezoneH";
					style = 0;
					text = "2456";
					w = "5 * 		(0.01875 * SafezoneH)";
					x = "24.15 * 		(0.01875 * SafezoneH)";
					y = "28.5 * 		(0.025 * SafezoneH)";
				};
				class CA_Heading: RscText
				{
					font = "EtelkaMonospacePro";
					h = "1 * 		(0.025 * SafezoneH)";
					idc = 156;
					shadow = 0;
					sizeEx = "0.038*SafezoneH";
					style = 2;
					text = "015";
					w = "3 * 		(0.01875 * SafezoneH)";
					x = "25.15 * 		(0.01875 * SafezoneH)";
					y = "11 * 		(0.025 * SafezoneH)";
				};
				class CA_OpticsPitch: RscText
				{
					colorBackground[] = {0, 0, 0, 1};
					font = "EtelkaMonospacePro";
					h = "1 * 		(0.025 * SafezoneH)";
					idc = 182;
					shadow = 0;
					sizeEx = "0.028*SafezoneH";
					style = 0;
					text = "36";
					w = "4 * 		(0.01875 * SafezoneH)";
					x = "10.1 * 		(0.01875 * SafezoneH)";
					y = "20 * 		(0.025 * SafezoneH)";
				};
				class FireSolutionValid: RscPicture
				{
					h = "0.6 * 		(0.025 * SafezoneH)";
					idc = 200;
					text = "\A3\Ui_f\data\IGUI\RscIngameUI\RscOptics\square.paa";
					w = "0.6 * 		(0.01875 * SafezoneH)";
					x = "24.25 * 		(0.01875 * SafezoneH)";
					y = "28.5 * 		(0.025 * SafezoneH)";
				};
				class TargetSpeed: TargetSpeedText
				{
					idc = 199;
					style = 0;
					text = "2456";
					w = "5.2 * 		(0.01875 * SafezoneH)";
					x = "7.2 * 		(0.025 * SafezoneH)";
				};
				class TargetSpeedText: RscText
				{
					font = "EtelkaMonospacePro";
					h = "1.2 * 		(0.025 * SafezoneH)";
					idc = 1050;
					shadow = 0;
					sizeEx = "0.032*SafezoneH";
					style = 1;
					text = "SPD:";
					w = "3 * 		(0.01875 * SafezoneH)";
					x = "4.85 * 		(0.025 * SafezoneH)";
					y = "29.2 * 		(0.025 * SafezoneH)";
				};
				class TextACQ: RscText
				{
					colorBackground[] = {0, 0, 0, 1};
					font = "EtelkaMonospacePro";
					h = "1 * 		(0.025 * SafezoneH)";
					idc = 1012;
					shadow = 0;
					sizeEx = "0.028*SafezoneH";
					text = "ACQ:CENT-Au";
					w = "7.5 * 		(0.01875 * SafezoneH)";
					x = "5.4 * 		(0.01875 * SafezoneH)";
					y = "30 * 		(0.025 * SafezoneH)";
				};
				class TextCENT: RscText
				{
					colorBackground[] = {0, 0, 0, 1};
					font = "EtelkaMonospacePro";
					h = "1 * 		(0.025 * SafezoneH)";
					idc = 1014;
					shadow = 0;
					sizeEx = "0.028*SafezoneH";
					text = "CENT-Wt";
					w = "5 * 		(0.01875 * SafezoneH)";
					x = "15.5 * 		(0.01875 * SafezoneH)";
					y = "30 * 		(0.025 * SafezoneH)";
				};
				class TextColonDist: RscText
				{
					colorBackground[] = {0, 0, 0, 1};
					font = "EtelkaMonospacePro";
					h = "1 * 		(0.025 * SafezoneH)";
					idc = 1008;
					shadow = 0;
					sizeEx = "0.028*SafezoneH";
					text = ":";
					w = "1 * 		(0.01875 * SafezoneH)";
					x = "9.3 * 		(0.01875 * SafezoneH)";
					y = "19 * 		(0.025 * SafezoneH)";
				};
				class TextColonEL: RscText
				{
					colorBackground[] = {0, 0, 0, 1};
					font = "EtelkaMonospacePro";
					h = "1 * 		(0.025 * SafezoneH)";
					idc = 1009;
					shadow = 0;
					sizeEx = "0.028*SafezoneH";
					text = ":";
					w = "1 * 		(0.01875 * SafezoneH)";
					x = "9.3 * 		(0.01875 * SafezoneH)";
					y = "20 * 		(0.025 * SafezoneH)";
				};
				class TextCST: RscText
				{
					colorBackground[] = {1, 1, 1, 1};
					colorText[] = {0, 0, 0, 1};
					font = "EtelkaMonospacePro";
					h = "1 * 		(0.025 * SafezoneH)";
					idc = 1013;
					shadow = 0;
					sizeEx = "0.028*SafezoneH";
					text = "CST:";
					w = "2.8 * 		(0.01875 * SafezoneH)";
					x = "12.9 * 		(0.01875 * SafezoneH)";
					y = "30 * 		(0.025 * SafezoneH)";
				};
				class TextDist: RscText
				{
					colorBackground[] = {0, 0, 0, 1};
					font = "EtelkaMonospacePro";
					h = "1 * 		(0.025 * SafezoneH)";
					idc = 1003;
					shadow = 0;
					sizeEx = "0.028*SafezoneH";
					text = "DIST";
					w = "5 * 		(0.01875 * SafezoneH)";
					x = "5.4 * 		(0.01875 * SafezoneH)";
					y = "19 * 		(0.025 * SafezoneH)";
				};
				class TextEL: RscText
				{
					colorBackground[] = {0, 0, 0, 1};
					font = "EtelkaMonospacePro";
					h = "1 * 		(0.025 * SafezoneH)";
					idc = 1010;
					shadow = 0;
					sizeEx = "0.028*SafezoneH";
					text = "EL";
					w = "5 * 		(0.01875 * SafezoneH)";
					x = "5.4 * 		(0.01875 * SafezoneH)";
					y = "20 * 		(0.025 * SafezoneH)";
				};
				class TextRadar: RscText
				{
					colorBackground[] = {0, 0, 0, 1};
					font = "EtelkaMonospacePro";
					h = "1 * 		(0.025 * SafezoneH)";
					idc = 1011;
					shadow = 0;
					sizeEx = "0.028*SafezoneH";
					text = "RADAR";
					w = "4.5 * 		(0.01875 * SafezoneH)";
					x = "5.4 * 		(0.01875 * SafezoneH)";
					y = "20.98 * 		(0.025 * SafezoneH)";
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
	};
	class RscOptics_SAM_02: RscUnitInfo
	{
		controls[] = {"CA_Zeroing", "CA_IGUI_elements_group", "CA_APC_WFOV_mode_group", "CA_APC_NFOV_mode_group"};
		idd = 300;
		class CA_APC_NFOV_mode_group: RscControlsGroupNoScrollbars
		{
			h = "40 * 		(0.025 * SafezoneH)";
			idc = 162;
			w = "61.5 * 		(0.01875 * SafezoneH)";
			x = "-4 * 		(0.01875 * SafezoneH) + 			(safezoneX)";
			y = "0 * 		(0.025 * SafezoneH) + 		(SafezoneY)";
			class controls
			{
				class CA_FOVModeNFOV: RscText
				{
					colorBackground[] = {0, 0, 0, 1};
					font = "EtelkaMonospacePro";
					h = "1 * 		(0.025 * SafezoneH)";
					idc = 1007;
					shadow = 0;
					sizeEx = "0.028*SafezoneH";
					text = "NFOV";
					w = "4.5 * 		(0.01875 * SafezoneH)";
					x = "5.4 * 		(0.01875 * SafezoneH)";
					y = "21.95 * 		(0.025 * SafezoneH)";
				};
			};
		};
		class CA_APC_WFOV_mode_group: RscControlsGroupNoScrollbars
		{
			h = "40 * 		(0.025 * SafezoneH)";
			idc = 163;
			w = "61.5 * 		(0.01875 * SafezoneH)";
			x = "-4 * 		(0.01875 * SafezoneH) + 			(safezoneX)";
			y = "0 * 		(0.025 * SafezoneH) + 		(SafezoneY)";
			class controls
			{
				class CA_FOVModeWFOV: RscText
				{
					colorBackground[] = {0, 0, 0, 1};
					font = "EtelkaMonospacePro";
					h = "1 * 		(0.025 * SafezoneH)";
					idc = 1002;
					shadow = 0;
					sizeEx = "0.028*SafezoneH";
					text = "WFOV";
					w = "4.5 * 		(0.01875 * SafezoneH)";
					x = "5.4 * 		(0.01875 * SafezoneH)";
					y = "21.95 * 		(0.025 * SafezoneH)";
				};
			};
		};
		class CA_IGUI_elements_group: RscControlsGroup
		{
			h = "40 * 		(0.025 * SafezoneH)";
			idc = 170;
			w = "61.5 * 		(0.01875 * SafezoneH)";
			x = "-4 * 		(0.01875 * SafezoneH) + 			(safezoneX)";
			y = "0 * 		(0.025 * SafezoneH) + 		(SafezoneY)";
			class controls
			{
				class CA_Distance: RscText
				{
					font = "EtelkaMonospacePro";
					h = "2 * 		(0.025 * SafezoneH)";
					idc = 198;
					shadow = 0;
					sizeEx = "0.040*SafezoneH";
					style = 0;
					text = "2456";
					w = "5 * 		(0.01875 * SafezoneH)";
					x = "24.15 * 		(0.01875 * SafezoneH)";
					y = "28.5 * 		(0.025 * SafezoneH)";
				};
				class CA_Heading: RscText
				{
					font = "EtelkaMonospacePro";
					h = "1 * 		(0.025 * SafezoneH)";
					idc = 156;
					shadow = 0;
					sizeEx = "0.038*SafezoneH";
					style = 2;
					text = "015";
					w = "3 * 		(0.01875 * SafezoneH)";
					x = "25.15 * 		(0.01875 * SafezoneH)";
					y = "11 * 		(0.025 * SafezoneH)";
				};
				class CA_OpticsPitch: RscText
				{
					colorBackground[] = {0, 0, 0, 1};
					font = "EtelkaMonospacePro";
					h = "1 * 		(0.025 * SafezoneH)";
					idc = 182;
					shadow = 0;
					sizeEx = "0.028*SafezoneH";
					style = 0;
					text = "36";
					w = "4 * 		(0.01875 * SafezoneH)";
					x = "10.1 * 		(0.01875 * SafezoneH)";
					y = "20 * 		(0.025 * SafezoneH)";
				};
				class FireSolutionValid: RscPicture
				{
					h = "0.6 * 		(0.025 * SafezoneH)";
					idc = 200;
					text = "\A3\Ui_f\data\IGUI\RscIngameUI\RscOptics\square.paa";
					w = "0.6 * 		(0.01875 * SafezoneH)";
					x = "24.25 * 		(0.01875 * SafezoneH)";
					y = "28.5 * 		(0.025 * SafezoneH)";
				};
				class TargetSpeed: TargetSpeedText
				{
					idc = 199;
					style = 0;
					text = "2456";
					w = "5.2 * 		(0.01875 * SafezoneH)";
					x = "7.2 * 		(0.025 * SafezoneH)";
				};
				class TargetSpeedText: RscText
				{
					font = "EtelkaMonospacePro";
					h = "1.2 * 		(0.025 * SafezoneH)";
					idc = 1050;
					shadow = 0;
					sizeEx = "0.032*SafezoneH";
					style = 1;
					text = "SPD:";
					w = "3 * 		(0.01875 * SafezoneH)";
					x = "4.85 * 		(0.025 * SafezoneH)";
					y = "29.2 * 		(0.025 * SafezoneH)";
				};
				class TextACQ: RscText
				{
					colorBackground[] = {0, 0, 0, 1};
					font = "EtelkaMonospacePro";
					h = "1 * 		(0.025 * SafezoneH)";
					idc = 1012;
					shadow = 0;
					sizeEx = "0.028*SafezoneH";
					text = "ACQ:CENT-Au";
					w = "7.5 * 		(0.01875 * SafezoneH)";
					x = "5.4 * 		(0.01875 * SafezoneH)";
					y = "30 * 		(0.025 * SafezoneH)";
				};
				class TextCENT: RscText
				{
					colorBackground[] = {0, 0, 0, 1};
					font = "EtelkaMonospacePro";
					h = "1 * 		(0.025 * SafezoneH)";
					idc = 1014;
					shadow = 0;
					sizeEx = "0.028*SafezoneH";
					text = "CENT-Wt";
					w = "5 * 		(0.01875 * SafezoneH)";
					x = "15.5 * 		(0.01875 * SafezoneH)";
					y = "30 * 		(0.025 * SafezoneH)";
				};
				class TextColonDist: RscText
				{
					colorBackground[] = {0, 0, 0, 1};
					font = "EtelkaMonospacePro";
					h = "1 * 		(0.025 * SafezoneH)";
					idc = 1008;
					shadow = 0;
					sizeEx = "0.028*SafezoneH";
					text = ":";
					w = "1 * 		(0.01875 * SafezoneH)";
					x = "9.3 * 		(0.01875 * SafezoneH)";
					y = "19 * 		(0.025 * SafezoneH)";
				};
				class TextColonEL: RscText
				{
					colorBackground[] = {0, 0, 0, 1};
					font = "EtelkaMonospacePro";
					h = "1 * 		(0.025 * SafezoneH)";
					idc = 1009;
					shadow = 0;
					sizeEx = "0.028*SafezoneH";
					text = ":";
					w = "1 * 		(0.01875 * SafezoneH)";
					x = "9.3 * 		(0.01875 * SafezoneH)";
					y = "20 * 		(0.025 * SafezoneH)";
				};
				class TextCST: RscText
				{
					colorBackground[] = {1, 1, 1, 1};
					colorText[] = {0, 0, 0, 1};
					font = "EtelkaMonospacePro";
					h = "1 * 		(0.025 * SafezoneH)";
					idc = 1013;
					shadow = 0;
					sizeEx = "0.028*SafezoneH";
					text = "CST:";
					w = "2.8 * 		(0.01875 * SafezoneH)";
					x = "12.9 * 		(0.01875 * SafezoneH)";
					y = "30 * 		(0.025 * SafezoneH)";
				};
				class TextDist: RscText
				{
					colorBackground[] = {0, 0, 0, 1};
					font = "EtelkaMonospacePro";
					h = "1 * 		(0.025 * SafezoneH)";
					idc = 1003;
					shadow = 0;
					sizeEx = "0.028*SafezoneH";
					text = "DIST";
					w = "5 * 		(0.01875 * SafezoneH)";
					x = "5.4 * 		(0.01875 * SafezoneH)";
					y = "19 * 		(0.025 * SafezoneH)";
				};
				class TextEL: RscText
				{
					colorBackground[] = {0, 0, 0, 1};
					font = "EtelkaMonospacePro";
					h = "1 * 		(0.025 * SafezoneH)";
					idc = 1010;
					shadow = 0;
					sizeEx = "0.028*SafezoneH";
					text = "EL";
					w = "5 * 		(0.01875 * SafezoneH)";
					x = "5.4 * 		(0.01875 * SafezoneH)";
					y = "20 * 		(0.025 * SafezoneH)";
				};
				class TextRadar: RscText
				{
					colorBackground[] = {0, 0, 0, 1};
					font = "EtelkaMonospacePro";
					h = "1 * 		(0.025 * SafezoneH)";
					idc = 1011;
					shadow = 0;
					sizeEx = "0.028*SafezoneH";
					text = "RADAR";
					w = "4.5 * 		(0.01875 * SafezoneH)";
					x = "5.4 * 		(0.01875 * SafezoneH)";
					y = "20.98 * 		(0.025 * SafezoneH)";
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
	};
	class RscOptics_SDV_driver: RscUnitInfo
	{
		controls[] = {"DriverOpticsGroup", "WeaponInfoControlsGroupRight", "CA_BackgroundVehicle", "CA_BackgroundVehicleTitle", "CA_BackgroundVehicleTitleDark", "CA_BackgroundFuel", "CA_Vehicle", "CA_VehicleRole", "CA_HitZones", "CA_VehicleTogglesBackground", "CA_VehicleToggles", "CA_SpeedBackground", "CA_SpeedUnits", "CA_Speed", "CA_ValueFuel", "CA_AltBackground", "CA_AltUnits", "CA_Depth"};
		idd = 300;
		class DriverOpticsGroup: RscControlsGroup
		{
			h = "40 * 		(0.025 * SafezoneH)";
			idc = 392;
			w = "53.5 * 		(0.01875 * SafezoneH)";
			x = "0 * 		(0.01875 * SafezoneH) + 		(SafezoneX + ((SafezoneW - SafezoneH) / 2))";
			y = "0 * 		(0.025 * SafezoneH) + 		(SafezoneY)";
			class controls
			{
				class AnalogueHorizon: RscLadderPicture
				{
					bottomValue = -90;
					h = "18 * 		(0.025 * SafezoneH)";
					idc = 383;
					text = "A3\weapons_F_Beta\reticle\data\reticle_horizon_CA.paa";
					topValue = 90;
					visibleRange = 0.25;
					w = "8 * 		(0.01875 * SafezoneH)";
					x = "22.5 * 		(0.01875 * SafezoneH)";
					y = "11 * 		(0.025 * SafezoneH)";
				};
				class ValuePitch: RscText
				{
					colorText[] = {0.706, 0.0745, 0.0196, 1};
					font = "EtelkaMonospacePro";
					h = "1 * 		(0.025 * SafezoneH)";
					idc = 393;
					shadow = 0;
					sizeEx = "0.028*SafezoneH";
					style = 0;
					w = "3.5 * 		(0.01875 * SafezoneH)";
					x = "39 * 		(0.01875 * SafezoneH)";
					y = "19.54 * 		(0.025 * SafezoneH)";
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
	};
	class RscOptics_SDV_periscope
	{
		controls[] = {"CA_IGUI_elements_group"};
		idd = 300;
		class CA_IGUI_elements_group: RscControlsGroup
		{
			h = "40 * 		(0.025 * SafezoneH)";
			idc = 170;
			w = "53.5 * 		(0.01875 * SafezoneH)";
			x = "0 * 		(0.01875 * SafezoneH) + 		(SafezoneX + ((SafezoneW - SafezoneH) / 2))";
			y = "0 * 		(0.025 * SafezoneH) + 		(SafezoneY)";
			class controls
			{
				class CA_Distance: RscText
				{
					colorText[] = {0.706, 0.0745, 0.0196, 1};
					font = "EtelkaMonospacePro";
					h = "1 * 		(0.025 * SafezoneH)";
					idc = 198;
					shadow = 0;
					sizeEx = "0.03*SafezoneH";
					style = 0;
					text = "2456";
					w = "3.5 * 		(0.01875 * SafezoneH)";
					x = "28.75 * 		(0.01875 * SafezoneH)";
					y = "23.82 * 		(0.025 * SafezoneH)";
				};
				class CA_Elev: RscText
				{
					colorText[] = {0.706, 0.0745, 0.0196, 1};
					font = "EtelkaMonospacePro";
					h = "0.6 * 		(0.025 * SafezoneH)";
					idc = 175;
					shadow = 0;
					sizeEx = "0.02*SafezoneH";
					style = 1;
					text = "80.5";
					w = "2.5 * 		(0.01875 * SafezoneH)";
					x = "30.2 * 		(0.01875 * SafezoneH)";
					y = "21.2 * 		(0.025 * SafezoneH)";
				};
				class CA_Laser: RscPicture
				{
					colorText[] = {0.706, 0.0745, 0.0196, 1};
					h = "3.2 * 		(0.025 * SafezoneH)";
					idc = 158;
					shadow = 0;
					style = "0x30 + 0x800";
					text = "A3\ui_f\data\igui\cfg\cursors\select_target_ca.paa";
					w = "3.2 * 		(0.01875 * SafezoneH)";
					x = "25.05 * 		(0.01875 * SafezoneH)";
					y = "18.44 * 		(0.025 * SafezoneH)";
				};
				class CA_OpticsZoom: RscText
				{
					colorText[] = {0.706, 0.0745, 0.0196, 1};
					font = "EtelkaMonospacePro";
					h = "0.6 * 		(0.025 * SafezoneH)";
					idc = 180;
					shadow = 0;
					sizeEx = "0.02*SafezoneH";
					style = 1;
					text = "4.5";
					w = "2.5 * 		(0.01875 * SafezoneH)";
					x = "30.2 * 		(0.01875 * SafezoneH)";
					y = "22 * 		(0.025 * SafezoneH)";
				};
				class CA_VisionMode: RscText
				{
					colorText[] = {0.706, 0.0745, 0.0196, 1};
					font = "EtelkaMonospacePro";
					h = "0.6 * 		(0.025 * SafezoneH)";
					idc = 179;
					shadow = 0;
					sizeEx = "0.02*SafezoneH";
					style = 1;
					text = "VIS";
					w = "2.5 * 		(0.01875 * SafezoneH)";
					x = "30.2 * 		(0.01875 * SafezoneH)";
					y = "22.8 * 		(0.025 * SafezoneH)";
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
	};
	class RscOptics_ShipGun_01: RscUnitInfo
	{
		controls[] = {"CA_Zeroing", "CA_IGUI_elements_group"};
		idd = 300;
		class CA_IGUI_elements_group: RscControlsGroup
		{
			h = "40 * 		(0.025 * SafezoneH)";
			idc = 170;
			w = "53.5 * 		(0.01875 * SafezoneH)";
			x = "0 * 		(0.01875 * SafezoneH) + 		(SafezoneX + ((SafezoneW - SafezoneH) / 2))";
			y = "0 * 		(0.025 * SafezoneH) + 		(SafezoneY)";
			class controls
			{
				class CA_Distance: RscText
				{
					colorText[] = {1, 1, 1, 1};
					font = "EtelkaMonospacePro";
					h = "2 * 		(0.025 * SafezoneH)";
					idc = 198;
					shadow = 0;
					sizeEx = "0.040*SafezoneH";
					style = 2;
					text = "2456";
					w = "5 * 		(0.01875 * SafezoneH)";
					x = "24.15 * 		(0.01875 * SafezoneH)";
					y = "28.5 * 		(0.025 * SafezoneH)";
				};
				class CA_Heading: RscText
				{
					font = "EtelkaMonospacePro";
					h = "1 * 		(0.025 * SafezoneH)";
					idc = 156;
					shadow = 0;
					sizeEx = "0.038*SafezoneH";
					style = 2;
					text = "015";
					w = "3 * 		(0.01875 * SafezoneH)";
					x = "7.25 * 		(0.01875 * SafezoneH)";
					y = "16.3 * 		(0.025 * SafezoneH)";
				};
				class CA_OpticsPitch: RscText
				{
					font = "EtelkaMonospacePro";
					h = "1.1 * 		(0.025 * SafezoneH)";
					idc = 182;
					shadow = 0;
					sizeEx = "0.038*SafezoneH";
					style = 1;
					text = "36";
					w = "5.2 * 		(0.01875 * SafezoneH)";
					x = "1 * 		(0.01875 * SafezoneH)";
					y = "19.4 * 		(0.025 * SafezoneH)";
				};
				class CA_TurretIndicator: RscPicture
				{
					color[] = {0.95, 0.95, 0.95, 1};
					h = "7 * 		(0.025 * SafezoneH)";
					IDC = 206;
					imageGun = "#(rgb,8,8,3)color(0,0,0,0)";
					imageHull = "A3\Ui_f\data\IGUI\RscIngameUI\RscOptics\turretIndicatorHull_AAF.paa";
					imageObsTurret = "A3\Ui_f\data\IGUI\RscIngameUI\RscOptics\turretIndicatorObsTurret_RWS.paa";
					imageTurret = "A3\Ui_f\data\IGUI\RscIngameUI\RscOptics\turretIndicatorTurret_RWS.paa";
					style = 0;
					textSize = "0.02*SafezoneH";
					type = 105;
					w = "7 * 		(0.01875 * SafezoneH)";
					x = "5.25 * 		(0.01875 * SafezoneH)";
					y = "10.5 * 		(0.025 * SafezoneH)";
				};
				class FireSolutionValid: RscPicture
				{
					h = "0.6 * 		(0.025 * SafezoneH)";
					idc = 200;
					text = "\A3\Ui_f\data\IGUI\RscIngameUI\RscOptics\square.paa";
					w = "0.6 * 		(0.01875 * SafezoneH)";
					x = "24.25 * 		(0.01875 * SafezoneH)";
					y = "28.5 * 		(0.025 * SafezoneH)";
				};
				class TargetSpeed: TargetSpeedText
				{
					idc = 199;
					style = 0;
					text = "2456";
					w = "5.2 * 		(0.01875 * SafezoneH)";
					x = "7.2 * 		(0.025 * SafezoneH)";
				};
				class TargetSpeedText: RscText
				{
					font = "EtelkaMonospacePro";
					h = "1.2 * 		(0.025 * SafezoneH)";
					idc = 1050;
					shadow = 0;
					sizeEx = "0.032*SafezoneH";
					style = 1;
					text = "SPD:";
					w = "3 * 		(0.01875 * SafezoneH)";
					x = "4.85 * 		(0.025 * SafezoneH)";
					y = "29.2 * 		(0.025 * SafezoneH)";
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
	};
	class RscOptics_sos: RscUnitInfo
	{
		controls[] = {"CA_IGUI_elements_group", "CA_Sniper_WFOV_mode_group", "CA_Sniper_NFOV_mode_group"};
		idd = 300;
		class CA_IGUI_elements_group: RscControlsGroup
		{
			h = "40 * 		(0.025 * SafezoneH)";
			idc = 170;
			w = "53.5 * 		(0.01875 * SafezoneH)";
			x = "0 * 		(0.01875 * SafezoneH) + 		(SafezoneX + ((SafezoneW - SafezoneH) / 2))";
			y = "0 * 		(0.025 * SafezoneH) + 		(SafezoneY)";
			class controls
			{
				class CA_Distance: RscText
				{
					colorText[] = {0.706, 0.0745, 0.0196, 1};
					font = "EtelkaMonospacePro";
					h = "1 * 		(0.025 * SafezoneH)";
					idc = 198;
					shadow = 0;
					sizeEx = "0.036*SafezoneH";
					style = 0;
					w = "4 * 		(0.01875 * SafezoneH)";
					x = "40.35 * 		(0.01875 * SafezoneH)";
					y = "19.7 * 		(0.025 * SafezoneH)";
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
		class CA_Sniper_NFOV_mode_group: RscControlsGroup
		{
			h = "40 * 		(0.025 * SafezoneH)";
			idc = 162;
			w = "53.5 * 		(0.01875 * SafezoneH)";
			x = "0 * 		(0.01875 * SafezoneH) + 		(SafezoneX + ((SafezoneW - SafezoneH) / 2))";
			y = "0 * 		(0.025 * SafezoneH) + 		(SafezoneY)";
			class controls
			{
				class CA_FOVModeNFOV: RscText
				{
					colorText[] = {0.706, 0.0745, 0.0196, 1};
					font = "EtelkaMonospacePro";
					h = "1 * 		(0.025 * SafezoneH)";
					idc = 1002;
					shadow = 0;
					sizeEx = "0.036*SafezoneH";
					style = 1;
					text = "NFOV";
					w = "3.9 * 		(0.01875 * SafezoneH)";
					x = "9.15 * 		(0.01875 * SafezoneH)";
					y = "19.7 * 		(0.025 * SafezoneH)";
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
		class CA_Sniper_WFOV_mode_group: RscControlsGroup
		{
			h = "40 * 		(0.025 * SafezoneH)";
			idc = 163;
			w = "53.5 * 		(0.01875 * SafezoneH)";
			x = "0 * 		(0.01875 * SafezoneH) + 		(SafezoneX + ((SafezoneW - SafezoneH) / 2))";
			y = "0 * 		(0.025 * SafezoneH) + 		(SafezoneY)";
			class controls
			{
				class CA_FOVModeWFOV: RscText
				{
					colorText[] = {0.706, 0.0745, 0.0196, 1};
					font = "EtelkaMonospacePro";
					h = "1 * 		(0.025 * SafezoneH)";
					idc = 1001;
					shadow = 0;
					sizeEx = "0.036*SafezoneH";
					style = 1;
					text = "WFOV";
					w = "3.9 * 		(0.01875 * SafezoneH)";
					x = "9.15 * 		(0.01875 * SafezoneH)";
					y = "19.7 * 		(0.025 * SafezoneH)";
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
	};
	class RscOptics_strider_commander
	{
		controls[] = {"CA_IGUI_elements_group"};
		idd = 300;
		class CA_IGUI_elements_group: RscControlsGroup
		{
			h = "40 * 		(0.025 * SafezoneH)";
			idc = 170;
			w = "53.5 * 		(0.01875 * SafezoneH)";
			x = "0 * 		(0.01875 * SafezoneH) + 		(SafezoneX + ((SafezoneW - SafezoneH) / 2))";
			y = "0 * 		(0.025 * SafezoneH) + 		(SafezoneY)";
			class controls
			{
				class CA_Distance: RscText
				{
					colorText[] = {0.706, 0.0745, 0.0196, 1};
					font = "EtelkaMonospacePro";
					h = "1.5 * 		(0.025 * SafezoneH)";
					idc = 198;
					shadow = 0;
					sizeEx = "0.038*SafezoneH";
					style = 2;
					text = "2456";
					w = "4 * 		(0.01875 * SafezoneH)";
					x = "24.5 * 		(0.01875 * SafezoneH)";
					y = "3 * 		(0.025 * SafezoneH)";
				};
				class CA_Elev: RscText
				{
					colorText[] = {0.706, 0.0745, 0.0196, 1};
					font = "EtelkaMonospacePro";
					h = "1.5 * 		(0.025 * SafezoneH)";
					idc = 175;
					shadow = 0;
					sizeEx = "0.038*SafezoneH";
					style = 2;
					text = "80.5";
					w = "5 * 		(0.01875 * SafezoneH)";
					x = "32.6 * 		(0.01875 * SafezoneH)";
					y = "3 * 		(0.025 * SafezoneH)";
				};
				class CA_Heading: RscText
				{
					colorText[] = {0.706, 0.0745, 0.0196, 1};
					font = "EtelkaMonospacePro";
					h = "1.6 * 		(0.025 * SafezoneH)";
					idc = 156;
					shadow = 0;
					sizeEx = "0.038*SafezoneH";
					style = 2;
					text = "023";
					w = "3.5 * 		(0.01875 * SafezoneH)";
					x = "15.85 * 		(0.01875 * SafezoneH)";
					y = "3 * 		(0.025 * SafezoneH)";
				};
				class CA_Laser: RscText
				{
					colorText[] = {0.706, 0.0745, 0.0196, 1};
					font = "EtelkaMonospacePro";
					h = "1.5 * 		(0.025 * SafezoneH)";
					idc = 158;
					shadow = 0;
					sizeEx = "0.038*SafezoneH";
					style = "0x30 + 0x800";
					text = "\A3\ui_f\data\igui\rscingameui\rscoptics\laser_designator_iconLaserOn.paa";
					w = "3.5 * 		(0.01875 * SafezoneH)";
					x = "29.2 * 		(0.01875 * SafezoneH)";
					y = "3 * 		(0.025 * SafezoneH)";
				};
				class CA_OpticsZoom: RscText
				{
					colorText[] = {0.706, 0.0745, 0.0196, 1};
					font = "EtelkaMonospacePro";
					h = "1.1 * 		(0.025 * SafezoneH)";
					idc = 180;
					shadow = 0;
					sizeEx = "0.038*SafezoneH";
					style = 1;
					text = "4.5";
					w = "4.5 * 		(0.01875 * SafezoneH)";
					x = "43.85 * 		(0.01875 * SafezoneH)";
					y = "19.55 * 		(0.025 * SafezoneH)";
				};
				class CA_VisionMode: RscText
				{
					colorText[] = {0.706, 0.0745, 0.0196, 1};
					font = "EtelkaMonospacePro";
					h = "1.1 * 		(0.025 * SafezoneH)";
					idc = 179;
					shadow = 0;
					sizeEx = "0.038*SafezoneH";
					style = 0;
					text = "VIS";
					w = "4 * 		(0.01875 * SafezoneH)";
					x = "6.5 * 		(0.01875 * SafezoneH)";
					y = "19.55 * 		(0.025 * SafezoneH)";
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
	};
	class RscOptics_titan
	{
		controls[] = {"CA_javelin_elements_group"};
		idd = 300;
		class CA_javelin_elements_group: RscControlsGroup
		{
			h = "SafezoneH";
			idc = 170;
			w = "SafezoneW";
			x = "SafezoneX";
			y = "SafezoneY";
			class Controls
			{
				class CA_Distance: RscText
				{
					colorText[] = {0.914, 0.302, 0.314, 0.8};
					font = "EtelkaMonospacePro";
					h = "2 * 		(0.025 * SafezoneH)";
					idc = 198;
					shadow = 1;
					sizeEx = "0.04*SafezoneH";
					style = 2;
					w = "6 * 		(0.01875 * SafezoneH)";
					x = "(SafezoneW * 0.5) - (3.12 * 		(0.01875 * SafezoneH))";
					y = "33 * 		(0.025 * SafezoneH)";
				};
				class CA_Javelin_CLU_off: CA_Javelin_Missle_off
				{
					idc = 1027;
					text = "\A3\ui_f\data\igui\rscingameui\rscoptics_titan\clu_co.paa";
					y = "(SafezoneY + 0.436*SafezoneH) - SafezoneY";
				};
				class CA_Javelin_Day_mode: CA_Javelin_Day_mode_off
				{
					colorText[] = {0.2941, 0.8745, 0.2157, 1};
					idc = 160;
				};
				class CA_Javelin_Day_mode_off: RscPicture
				{
					colorText[] = {0.2941, 0.2941, 0.2941, 1};
					h = "SafezoneH*0.1045752";
					idc = 1001;
					text = "\A3\ui_f\data\igui\rscingameui\rscoptics_titan\day_co.paa";
					w = "0.1045752* (((SafezoneW*3)/4)/SafezoneW)/(1/SafezoneH)";
					x = "(SafezoneX+(SafezoneW -SafezoneH*3/4)/2)+ (0.03/4)*3*SafezoneH	- SafezoneX";
					y = "SafezoneY+SafezoneH*0.031 - SafezoneY";
				};
				class CA_Javelin_DIR_off: CA_Javelin_Day_mode_off
				{
					idc = 1007;
					text = "\A3\ui_f\data\igui\rscingameui\rscoptics_titan\dir_co.paa";
					x = "(SafezoneX+(SafezoneW -SafezoneH*3/4)/2)+ (1.023/4)*3*SafezoneH - SafezoneX";
					y = "(SafezoneY + 0.436*SafezoneH)	- SafezoneY";
				};
				class CA_Javelin_DIR_on: CA_Javelin_DIR_off
				{
					colorText[] = {0.2941, 0.8745, 0.2157, 1};
					idc = 197;
				};
				class CA_Javelin_FLTR_mode: CA_Javelin_FLTR_mode_off
				{
					colorText[] = {0.2941, 0.8745, 0.2157, 1};
					idc = 161;
				};
				class CA_Javelin_FLTR_mode_off: CA_Javelin_Day_mode_off
				{
					idc = 1002;
					text = "\A3\ui_f\data\igui\rscingameui\rscoptics_titan\fltr_co.paa";
					x = "(SafezoneX+(SafezoneW -SafezoneH*3/4)/2)+ (1.023/4)*3*SafezoneH - SafezoneX";
					y = "(SafezoneY + 0.669*SafezoneH)	- SafezoneY";
				};
				class CA_Javelin_HangFire_off: CA_Javelin_Missle_off
				{
					idc = 1028;
					text = "\A3\ui_f\data\igui\rscingameui\rscoptics_titan\hangfire_co.paa";
					y = "(SafezoneY + 0.669*SafezoneH) - SafezoneY";
				};
				class CA_Javelin_Missle: CA_Javelin_Missle_off
				{
					colorText[] = {0.9255, 0.5216, 0.1216, 1};
					idc = 167;
				};
				class CA_Javelin_Missle_off: CA_Javelin_Day_mode_off
				{
					colorText[] = {0.2941, 0.2941, 0.2941, 1};
					idc = 1032;
					text = "\A3\ui_f\data\igui\rscingameui\rscoptics_titan\missle_co.paa";
					x = "(SafezoneX+(SafezoneW -SafezoneH*3/4)/2)+ (-0.134/4)*3*SafezoneH - SafezoneX";
					y = "(SafezoneY + 0.208*SafezoneH) - SafezoneY";
				};
				class CA_Javelin_NFOV_mode_group: RscControlsGroup
				{
					h = "SafezoneH-SafezoneY";
					idc = 162;
					w = "SafezoneW-SafezoneX";
					x = "SafezoneX";
					y = "SafezoneY";
					class Controls
					{
						class CA_Javelin_NFOV_mode: CA_Javelin_NFOV_mode_off
						{
							colorText[] = {0.2941, 0.8745, 0.2157, 1};
							idc = -1;
							x = "((SafezoneW -SafezoneH*3/4)/2)+ (0.586/4)*3*SafezoneH - SafezoneX";
							y = "0.031*SafeZoneH - SafezoneY";
						};
					};
					class HScrollbar: HScrollbar
					{
						color[] = {1, 1, 1, 0};
						height = 0.001;
					};
					class VScrollbar: VScrollbar
					{
						autoScrollDelay = 5;
						autoScrollRewind = 0;
						autoScrollSpeed = -1;
						color[] = {1, 1, 1, 0};
						width = 0.001;
					};
				};
				class CA_Javelin_NFOV_mode_off: CA_Javelin_Day_mode_off
				{
					idc = 1003;
					text = "\A3\ui_f\data\igui\rscingameui\rscoptics_titan\nfov_co.paa";
					x = "(SafezoneX+(SafezoneW -SafezoneH*3/4)/2)+ (0.586/4)*3*SafezoneH - SafezoneX";
				};
				class CA_Javelin_SEEK: CA_Javelin_SEEK_off
				{
					colorText[] = {0.2941, 0.8745, 0.2157, 1};
					idc = 166;
				};
				class CA_Javelin_SEEK_off: CA_Javelin_Day_mode_off
				{
					text = "\A3\ui_f\data\igui\rscingameui\rscoptics_titan\seek_co.paa";
					x = "(SafezoneX+(SafezoneW -SafezoneH*3/4)/2)+ (0.863/4)*3*SafezoneH - SafezoneX";
				};
				class CA_Javelin_TOP: CA_Javelin_TOP_off
				{
					colorText[] = {0.2941, 0.8745, 0.2157, 1};
					idc = 196;
				};
				class CA_Javelin_TOP_off: CA_Javelin_Day_mode_off
				{
					idc = 1006;
					text = "\A3\ui_f\data\igui\rscingameui\rscoptics_titan\top_co.paa";
					x = "(SafezoneX+(SafezoneW -SafezoneH*3/4)/2)+ (1.023/4)*3*SafezoneH - SafezoneX";
					y = "(SafezoneY + 0.208*SafezoneH) - SafezoneY";
				};
				class CA_Javelin_WFOV_mode_group: RscControlsGroup
				{
					h = "SafezoneH";
					idc = 163;
					w = "SafezoneW";
					x = "SafezoneX";
					y = "SafezoneY";
					class Controls
					{
						class CA_Javelin_WFOV_mode: CA_Javelin_WFOV_mode_off
						{
							colorText[] = {0.2941, 0.8745, 0.2157, 1};
							idc = -1;
							x = "((SafezoneW -SafezoneH*3/4)/2)+ (0.307/4)*3*SafezoneH - SafezoneX";
							y = "0.031*SafeZoneH - SafezoneY";
						};
					};
					class HScrollbar: HScrollbar
					{
						color[] = {1, 1, 1, 0};
						height = 0.001;
					};
					class VScrollbar: VScrollbar
					{
						autoScrollDelay = 5;
						autoScrollRewind = 0;
						autoScrollSpeed = -1;
						color[] = {1, 1, 1, 0};
						width = 0.001;
					};
				};
				class CA_Javelin_WFOV_mode_off: CA_Javelin_Day_mode_off
				{
					idc = 1004;
					text = "\A3\ui_f\data\igui\rscingameui\rscoptics_titan\wfov_co.paa";
					x = "(SafezoneX+(SafezoneW -SafezoneH*3/4)/2)+ (0.307/4)*3*SafezoneH - SafezoneX";
				};
			};
			class HScrollbar: HScrollbar
			{
				color[] = {1, 1, 1, 0};
				height = 0.001;
			};
			class VScrollbar: VScrollbar
			{
				autoScrollDelay = 5;
				autoScrollRewind = 0;
				autoScrollSpeed = -1;
				color[] = {1, 1, 1, 0};
				width = 0.001;
			};
		};
	};
	class RscOptics_tws: RscUnitInfo
	{
		controls[] = {"CA_IGUI_elements_group", "CA_WFOV_mode_group", "CA_NFOV_mode_group"};
		idd = 300;
		class CA_IGUI_elements_group: RscControlsGroup
		{
			h = "40 * 		(0.025 * SafezoneH)";
			idc = 170;
			w = "53.5 * 		(0.01875 * SafezoneH)";
			x = "0 * 		(0.01875 * SafezoneH) + 		(SafezoneX + ((SafezoneW - SafezoneH) / 2))";
			y = "0 * 		(0.025 * SafezoneH) + 		(SafezoneY)";
			class controls
			{
				class CA_Distance: RscText
				{
					font = "EtelkaMonospacePro";
					h = "1.3 * 		(0.025 * SafezoneH)";
					idc = 198;
					shadow = 0;
					sizeEx = "0.036*SafezoneH";
					style = 0;
					text = "- - - -";
					w = "3.6 * 		(0.01875 * SafezoneH)";
					x = "24.75 * 		(0.01875 * SafezoneH)";
					y = "33.2 * 		(0.025 * SafezoneH)";
				};
				class CA_FlirMode: RscText
				{
					font = "EtelkaMonospacePro";
					h = "1 * 		(0.025 * SafezoneH)";
					idc = 153;
					shadow = 0;
					sizeEx = "0.028*SafezoneH";
					style = 0;
					text = "BHOT";
					w = "4.5 * 		(0.01875 * SafezoneH)";
					x = "11.8 * 		(0.01875 * SafezoneH)";
					y = "18.7 * 		(0.025 * SafezoneH)";
				};
				class CA_VisionMode: RscText
				{
					font = "EtelkaMonospacePro";
					h = "1 * 		(0.025 * SafezoneH)";
					idc = 152;
					shadow = 0;
					sizeEx = "0.028*SafezoneH";
					style = 0;
					text = "FLIR";
					w = "3.5 * 		(0.01875 * SafezoneH)";
					x = "8.8 * 		(0.01875 * SafezoneH)";
					y = "18.7 * 		(0.025 * SafezoneH)";
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
		class CA_NFOV_mode_group: RscControlsGroup
		{
			h = "40 * 		(0.025 * SafezoneH)";
			idc = 162;
			w = "53.5 * 		(0.01875 * SafezoneH)";
			x = "0 * 		(0.01875 * SafezoneH) + 		(SafezoneX + ((SafezoneW - SafezoneH) / 2))";
			y = "0 * 		(0.025 * SafezoneH) + 		(SafezoneY)";
			class controls
			{
				class CA_FOVModeNFOV: RscText
				{
					font = "EtelkaMonospacePro";
					h = "1 * 		(0.025 * SafezoneH)";
					idc = 1002;
					shadow = 0;
					sizeEx = "0.028*SafezoneH";
					style = 1;
					text = "NFOV";
					w = "3 * 		(0.01875 * SafezoneH)";
					x = "41.7 * 		(0.01875 * SafezoneH)";
					y = "18.7 * 		(0.025 * SafezoneH)";
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
		class CA_WFOV_mode_group: RscControlsGroup
		{
			h = "40 * 		(0.025 * SafezoneH)";
			idc = 163;
			w = "53.5 * 		(0.01875 * SafezoneH)";
			x = "0 * 		(0.01875 * SafezoneH) + 		(SafezoneX + ((SafezoneW - SafezoneH) / 2))";
			y = "0 * 		(0.025 * SafezoneH) + 		(SafezoneY)";
			class controls
			{
				class CA_BracketNFOV: RscText
				{
					font = "EtelkaMonospacePro";
					h = "18 * 		(0.025 * SafezoneH)";
					idc = 1005;
					shadow = 0;
					sizeEx = "0.028*SafezoneH";
					style = "0x30 + 0x800";
					text = "A3\weapons_f\acc\Data\reticle_tws_bracket_ca.paa";
					w = "18 * 		(0.01875 * SafezoneH)";
					x = "17.75 * 		(0.01875 * SafezoneH)";
					y = "11 * 		(0.025 * SafezoneH)";
				};
				class CA_FOVModeWFOV: RscText
				{
					font = "EtelkaMonospacePro";
					h = "1 * 		(0.025 * SafezoneH)";
					idc = 1001;
					shadow = 0;
					sizeEx = "0.028*SafezoneH";
					style = 1;
					text = "WFOV";
					w = "3 * 		(0.01875 * SafezoneH)";
					x = "41.7 * 		(0.01875 * SafezoneH)";
					y = "18.7 * 		(0.025 * SafezoneH)";
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
	};
	class RscOptics_tws_mg: RscUnitInfo
	{
		controls[] = {"CA_IGUI_elements_group", "CA_WFOV_mode_group", "CA_NFOV_mode_group"};
		idd = 300;
		class CA_IGUI_elements_group: RscControlsGroup
		{
			h = "40 * 		(0.025 * SafezoneH)";
			idc = 170;
			w = "53.5 * 		(0.01875 * SafezoneH)";
			x = "0 * 		(0.01875 * SafezoneH) + 		(SafezoneX + ((SafezoneW - SafezoneH) / 2))";
			y = "0 * 		(0.025 * SafezoneH) + 		(SafezoneY)";
			class controls
			{
				class CA_FlirMode: RscText
				{
					font = "EtelkaMonospacePro";
					h = "1 * 		(0.025 * SafezoneH)";
					idc = 153;
					shadow = 0;
					sizeEx = "0.028*SafezoneH";
					style = 0;
					text = "BHOT";
					w = "4.5 * 		(0.01875 * SafezoneH)";
					x = "11.8 * 		(0.01875 * SafezoneH)";
					y = "18.7 * 		(0.025 * SafezoneH)";
				};
				class CA_VisionMode: RscText
				{
					font = "EtelkaMonospacePro";
					h = "1 * 		(0.025 * SafezoneH)";
					idc = 152;
					shadow = 0;
					sizeEx = "0.028*SafezoneH";
					style = 0;
					text = "FLIR";
					w = "3.5 * 		(0.01875 * SafezoneH)";
					x = "8.8 * 		(0.01875 * SafezoneH)";
					y = "18.7 * 		(0.025 * SafezoneH)";
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
		class CA_NFOV_mode_group: RscControlsGroup
		{
			h = "40 * 		(0.025 * SafezoneH)";
			idc = 162;
			w = "53.5 * 		(0.01875 * SafezoneH)";
			x = "0 * 		(0.01875 * SafezoneH) + 		(SafezoneX + ((SafezoneW - SafezoneH) / 2))";
			y = "0 * 		(0.025 * SafezoneH) + 		(SafezoneY)";
			class controls
			{
				class CA_FOVModeNFOV: RscText
				{
					font = "EtelkaMonospacePro";
					h = "1 * 		(0.025 * SafezoneH)";
					idc = 1002;
					shadow = 0;
					sizeEx = "0.028*SafezoneH";
					style = 1;
					text = "NFOV";
					w = "3 * 		(0.01875 * SafezoneH)";
					x = "41.7 * 		(0.01875 * SafezoneH)";
					y = "18.7 * 		(0.025 * SafezoneH)";
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
		class CA_WFOV_mode_group: RscControlsGroup
		{
			h = "40 * 		(0.025 * SafezoneH)";
			idc = 163;
			w = "53.5 * 		(0.01875 * SafezoneH)";
			x = "0 * 		(0.01875 * SafezoneH) + 		(SafezoneX + ((SafezoneW - SafezoneH) / 2))";
			y = "0 * 		(0.025 * SafezoneH) + 		(SafezoneY)";
			class controls
			{
				class CA_BracketNFOV: RscText
				{
					font = "EtelkaMonospacePro";
					h = "18 * 		(0.025 * SafezoneH)";
					idc = 1005;
					shadow = 0;
					sizeEx = "0.028*SafezoneH";
					style = "0x30 + 0x800";
					text = "A3\weapons_f\acc\Data\reticle_tws_bracket_ca.paa";
					w = "18 * 		(0.01875 * SafezoneH)";
					x = "17.75 * 		(0.01875 * SafezoneH)";
					y = "11 * 		(0.025 * SafezoneH)";
				};
				class CA_FOVModeWFOV: RscText
				{
					font = "EtelkaMonospacePro";
					h = "1 * 		(0.025 * SafezoneH)";
					idc = 1001;
					shadow = 0;
					sizeEx = "0.028*SafezoneH";
					style = 1;
					text = "WFOV";
					w = "3 * 		(0.01875 * SafezoneH)";
					x = "41.7 * 		(0.01875 * SafezoneH)";
					y = "18.7 * 		(0.025 * SafezoneH)";
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
	};
	class RscOptics_tws_sniper: RscUnitInfo
	{
		controls[] = {"CA_IGUI_elements_group", "CA_WFOV_mode_group", "CA_NFOV_mode_group"};
		idd = 300;
		class CA_IGUI_elements_group: RscControlsGroup
		{
			h = "40 * 		(0.025 * SafezoneH)";
			idc = 170;
			w = "53.5 * 		(0.01875 * SafezoneH)";
			x = "0 * 		(0.01875 * SafezoneH) + 		(SafezoneX + ((SafezoneW - SafezoneH) / 2))";
			y = "0 * 		(0.025 * SafezoneH) + 		(SafezoneY)";
			class controls
			{
				class CA_Distance: RscText
				{
					font = "EtelkaMonospacePro";
					h = "1.3 * 		(0.025 * SafezoneH)";
					idc = 198;
					shadow = 0;
					sizeEx = "0.036*SafezoneH";
					style = 0;
					text = "- - - -";
					w = "3.6 * 		(0.01875 * SafezoneH)";
					x = "24.75 * 		(0.01875 * SafezoneH)";
					y = "31.5 * 		(0.025 * SafezoneH)";
				};
				class CA_FlirMode: RscText
				{
					font = "EtelkaMonospacePro";
					h = "1 * 		(0.025 * SafezoneH)";
					idc = 153;
					shadow = 0;
					sizeEx = "0.028*SafezoneH";
					style = 0;
					text = "BHOT";
					w = "4.5 * 		(0.01875 * SafezoneH)";
					x = "11.8 * 		(0.01875 * SafezoneH)";
					y = "18.7 * 		(0.025 * SafezoneH)";
				};
				class CA_VisionMode: RscText
				{
					font = "EtelkaMonospacePro";
					h = "1 * 		(0.025 * SafezoneH)";
					idc = 152;
					shadow = 0;
					sizeEx = "0.028*SafezoneH";
					style = 0;
					text = "FLIR";
					w = "3.5 * 		(0.01875 * SafezoneH)";
					x = "8.8 * 		(0.01875 * SafezoneH)";
					y = "18.7 * 		(0.025 * SafezoneH)";
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
		class CA_NFOV_mode_group: RscControlsGroup
		{
			h = "40 * 		(0.025 * SafezoneH)";
			idc = 162;
			w = "53.5 * 		(0.01875 * SafezoneH)";
			x = "0 * 		(0.01875 * SafezoneH) + 		(SafezoneX + ((SafezoneW - SafezoneH) / 2))";
			y = "0 * 		(0.025 * SafezoneH) + 		(SafezoneY)";
			class controls
			{
				class CA_FOVModeNFOV: RscText
				{
					font = "EtelkaMonospacePro";
					h = "1 * 		(0.025 * SafezoneH)";
					idc = 1002;
					shadow = 0;
					sizeEx = "0.028*SafezoneH";
					style = 1;
					text = "NFOV";
					w = "3 * 		(0.01875 * SafezoneH)";
					x = "41.7 * 		(0.01875 * SafezoneH)";
					y = "18.7 * 		(0.025 * SafezoneH)";
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
		class CA_WFOV_mode_group: RscControlsGroup
		{
			h = "40 * 		(0.025 * SafezoneH)";
			idc = 163;
			w = "53.5 * 		(0.01875 * SafezoneH)";
			x = "0 * 		(0.01875 * SafezoneH) + 		(SafezoneX + ((SafezoneW - SafezoneH) / 2))";
			y = "0 * 		(0.025 * SafezoneH) + 		(SafezoneY)";
			class controls
			{
				class CA_BracketNFOV: RscText
				{
					font = "EtelkaMonospacePro";
					h = "18 * 		(0.025 * SafezoneH)";
					idc = 1005;
					shadow = 0;
					sizeEx = "0.028*SafezoneH";
					style = "0x30 + 0x800";
					text = "A3\weapons_f\acc\Data\reticle_tws_bracket_ca.paa";
					w = "18 * 		(0.01875 * SafezoneH)";
					x = "17.75 * 		(0.01875 * SafezoneH)";
					y = "11 * 		(0.025 * SafezoneH)";
				};
				class CA_FOVModeWFOV: RscText
				{
					font = "EtelkaMonospacePro";
					h = "1 * 		(0.025 * SafezoneH)";
					idc = 1001;
					shadow = 0;
					sizeEx = "0.028*SafezoneH";
					style = 1;
					text = "WFOV";
					w = "3 * 		(0.01875 * SafezoneH)";
					x = "41.7 * 		(0.01875 * SafezoneH)";
					y = "18.7 * 		(0.025 * SafezoneH)";
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
	};
	class RscOptics_UAV_06: RscUnitInfo
	{
		controls[] = {"WeaponInfoControlsGroupRight", "CA_BackgroundVehicle", "CA_BackgroundVehicleTitle", "CA_BackgroundVehicleTitleDark", "CA_BackgroundFuel", "CA_Vehicle", "CA_VehicleRole", "CA_HitZones", "CA_VehicleTogglesBackground", "CA_VehicleToggles", "CA_SpeedBackground", "CA_SpeedUnits", "CA_Speed", "CA_ValueFuel", "CA_AltBackground", "CA_AltUnits", "CA_Alt", "DriverOpticsGroup"};
		idd = 300;
		onLoad = "bis_fnc_uav_06_optics = compileFinal preprocessFileLineNumbers 'a3\UI_F_Orange\scripts\uav_06_optic.sqf';((_This select 0) displayctrl 6001) ctrladdeventhandler ['draw',{_this call bis_fnc_uav_06_optics}]";
		class DriverOpticsGroup: RscControlsGroup
		{
			h = "40 * 		(0.025 * SafezoneH)";
			idc = 392;
			w = "53.5 * 		(0.01875 * SafezoneH)";
			x = "0 * 		(0.01875 * SafezoneH) + 		(SafezoneX + ((SafezoneW - SafezoneH) / 2))";
			y = "0 * 		(0.025 * SafezoneH) + 		(SafezoneY)";
			class controls
			{
				class AnalogueHorizon: RscLadderPicture
				{
					bottomValue = 0;
					h = "5 * 		(0.025 * SafezoneH)";
					idc = 383;
					text = "\A3\Ui_f\data\IGUI\RscIngameUI\RscOptics\attitude.paa";
					topValue = 0;
					visibleRange = -1;
					w = "5 * 		(0.01875 * SafezoneH)";
					x = "2.8 * 		(0.01875 * SafezoneH)";
					y = "28.7 * 		(0.025 * SafezoneH)";
				};
				class AnalogueHorizonStatic: RscPicture
				{
					h = "5 * 		(0.025 * SafezoneH)";
					idc = 1200;
					text = "\A3\Ui_f\data\IGUI\RscIngameUI\RscOptics\attitude_static.paa";
					w = "5 * 		(0.01875 * SafezoneH)";
					x = "2.8 * 		(0.01875 * SafezoneH)";
					y = "28.55 * 		(0.025 * SafezoneH)";
				};
				class CA_Alt: TextMag
				{
					h = "1.2 * 		(0.025 * SafezoneH)";
					idc = 191;
					style = 1;
					text = "3825";
					w = "3.5 * 		(0.01875 * SafezoneH)";
					x = "(14+5) * 		(0.01875 * SafezoneH)";
					y = "(34+1) * 		(0.025 * SafezoneH)";
				};
				class CA_Fuel: TextMag
				{
					h = "1.2 * 		(0.025 * SafezoneH)";
					idc = 5001;
					sizeEx = "0.04*SafezoneH";
					style = 1;
					text = "100%";
					w = "3.5 * 		(0.01875 * SafezoneH)";
					x = "(36+5) * 		(0.01875 * SafezoneH)";
					y = "(34.5+1) * 		(0.025 * SafezoneH)";
				};
				class CA_Position: TextMag
				{
					h = "1.2 * 		(0.025 * SafezoneH)";
					idc = 189;
					style = 1;
					text = "20:28:35";
					w = "4.8 * 		(0.01875 * SafezoneH)";
					x = "(2+6) * 		(0.01875 * SafezoneH)";
					y = "(28.5+7.5) * 		(0.025 * SafezoneH)";
				};
				class CA_Speed: TextMag
				{
					h = "1.2 * 		(0.025 * SafezoneH)";
					idc = 190;
					style = 1;
					text = "120";
					w = "3.5 * 		(0.01875 * SafezoneH)";
					x = "(14+5) * 		(0.01875 * SafezoneH)";
					y = "(35+1) * 		(0.025 * SafezoneH)";
				};
				class DirectionText: RscText
				{
					font = "EtelkaMonospacePro";
					h = "1.2 * 		(0.025 * SafezoneH)";
					idc = 1000;
					shadow = 0;
					sizeEx = "0.03*SafezoneH";
					style = 0;
					text = "DIR:";
					w = "3 * 		(0.01875 * SafezoneH)";
					x = "(14+13) * 		(0.01875 * SafezoneH)";
					y = "(35+1) * 		(0.025 * SafezoneH)";
				};
				class DrawMap: RscMapControl
				{
					h = 0;
					idc = 6001;
					type = 101;
					w = 0;
					x = 0;
					y = 0;
				};
				class Elevation: RscPicture
				{
					h = "20 * 		(0.025 * SafezoneH)";
					idc = 5006;
					text = "\a3\UI_F_Orange\Data\IGUI\RscIngameUI\ElevationIndicator_ca.paa";
					w = "5 * 		(0.01875 * SafezoneH)";
					x = "2.75 * 		(0.01875 * SafezoneH)";
					y = "6.55 * 		(0.025 * SafezoneH)";
				};
				class ElevationArrow: RscPicture
				{
					h = "1 * 		(0.025 * SafezoneH)";
					idc = 5008;
					text = "\a3\UI_F_Orange\Data\IGUI\RscIngameUI\ElevationArrow_ca.paa";
					w = "1 * 		(0.01875 * SafezoneH)";
					x = "6.9 * 		(0.01875 * SafezoneH)";
					y = "7.55 * 		(0.025 * SafezoneH)";
				};
				class RestrictedFire: RscPicture
				{
					h = "8 * 		(0.025 * SafezoneH)";
					idc = 5002;
					text = "\a3\UI_F_Orange\Data\IGUI\RscIngameUI\RestrictedFire_ca.paa";
					w = "8 * 		(0.01875 * SafezoneH)";
					x = "22.65 * 		(0.01875 * SafezoneH)";
					y = "15.95 * 		(0.025 * SafezoneH)";
				};
				class TextAlt: TextMag
				{
					h = "1.2 * 		(0.025 * SafezoneH)";
					idc = 1002;
					text = "    AGL";
					w = "5 * 		(0.01875 * SafezoneH)";
					x = "(15+0) * 		(0.01875 * SafezoneH)";
					y = "(34+1) * 		(0.025 * SafezoneH)";
				};
				class TextMag: RscText
				{
					colorBackground[] = {0, 0, 0, 0};
					font = "EtelkaMonospacePro";
					h = "0 * 		(0.025 * SafezoneH)";
					idc = 1001;
					shadow = 0;
					sizeEx = "0.03*SafezoneH";
					style = 0;
					text = "";
					w = "0 * 		(0.01875 * SafezoneH)";
					x = "0 * 		(0.01875 * SafezoneH)";
					y = "0 * 		(0.025 * SafezoneH)";
				};
				class TextMinimalHeight: TextMag
				{
					colorText[] = {1, 0.5, 0, 1};
					h = "8.5 * 		(0.025 * SafezoneH)";
					idc = 5003;
					sizeEx = "0.02*SafezoneH";
					style = 2;
					text = "WARNING";
					w = "7 * 		(0.01875 * SafezoneH)";
					x = "23.15 * 		(0.01875 * SafezoneH)";
					y = "5 * 		(0.025 * SafezoneH)";
				};
				class TextMinimalHeight2: TextMinimalHeight
				{
					colorText[] = {1, 0.5, 0, 1};
					idc = 5004;
					text = "MIN SAFE ALT >25M";
					y = "6 * 		(0.025 * SafezoneH)";
				};
				class TextSpd: TextMag
				{
					h = "1.2 * 		(0.025 * SafezoneH)";
					idc = 1003;
					text = "    IAS";
					w = "5 * 		(0.01875 * SafezoneH)";
					x = "(15+0) * 		(0.01875 * SafezoneH)";
					y = "(35+1) * 		(0.025 * SafezoneH)";
				};
				class Traverse: RscPicture
				{
					h = "5 * 		(0.025 * SafezoneH)";
					idc = 5005;
					text = "\a3\UI_F_Orange\Data\IGUI\RscIngameUI\TraverseIndicator_ca.paa";
					w = "30 * 		(0.01875 * SafezoneH)";
					x = "11.485 * 		(0.01875 * SafezoneH)";
					y = "1.4 * 		(0.025 * SafezoneH)";
				};
				class TraverseArrow: RscPicture
				{
					h = "1 * 		(0.025 * SafezoneH)";
					idc = 5007;
					text = "\a3\UI_F_Orange\Data\IGUI\RscIngameUI\TraverseArrow_ca.paa";
					w = "1 * 		(0.01875 * SafezoneH)";
					x = "12.95 * 		(0.01875 * SafezoneH)";
					y = "5.2 * 		(0.025 * SafezoneH)";
				};
				class ValueDirection: RscText
				{
					font = "EtelkaMonospacePro";
					h = "1.2 * 		(0.025 * SafezoneH)";
					idc = 148;
					shadow = 0;
					sizeEx = "0.03*SafezoneH";
					style = 1;
					text = "2456";
					w = "4 * 		(0.01875 * SafezoneH)";
					x = "(15+13) * 		(0.01875 * SafezoneH)";
					y = "(35+1) * 		(0.025 * SafezoneH)";
				};
				class ValueTime: TextMag
				{
					h = "1.2 * 		(0.025 * SafezoneH)";
					idc = 101;
					style = 1;
					text = "20:28:35";
					w = "4.8 * 		(0.01875 * SafezoneH)";
					x = "(2+6) * 		(0.01875 * SafezoneH)";
					y = "(27.5+7.5) * 		(0.025 * SafezoneH)";
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
	};
	class RscOptics_UAV_06_TGP: RscUnitInfo
	{
		controls[] = {"CA_IGUI_elements_group"};
		idd = 300;
		class CA_IGUI_elements_group: RscControlsGroup
		{
			h = "40 * 		(0.025 * SafezoneH)";
			idc = 170;
			w = "53.5 * 		(0.01875 * SafezoneH)";
			x = "0 * 		(0.01875 * SafezoneH) + 		(SafezoneX + ((SafezoneW - SafezoneH) / 2))";
			y = "0 * 		(0.025 * SafezoneH) + 		(SafezoneY)";
			class controls
			{
				class CA_FlirMode: CA_VisionMode
				{
					h = "1.2 * 		(0.025 * SafezoneH)";
					idc = 153;
					text = "BHOT";
					w = "5 * 		(0.01875 * SafezoneH)";
					x = "48.2 * 		(0.01875 * SafezoneH)";
					y = "9.4 * 		(0.025 * SafezoneH)";
				};
				class CA_Laser: RscText
				{
					colorText[] = {0.706, 0.0745, 0.0196, 1};
					font = "EtelkaMonospacePro";
					h = "1.5 * 		(0.025 * SafezoneH)";
					idc = 158;
					shadow = 0;
					sizeEx = "0.038*SafezoneH";
					style = "0x30 + 0x800";
					text = "\A3\ui_f\data\igui\rscingameui\rscoptics\laser_designator_iconLaserOn.paa";
					w = "3.5 * 		(0.01875 * SafezoneH)";
					x = "31.1 * 		(0.01875 * SafezoneH)";
					y = "12.85 * 		(0.025 * SafezoneH)";
				};
				class CA_VisionMode: RscText
				{
					colorBackground[] = {0, 0, 0, 1};
					font = "EtelkaMonospacePro";
					h = "1.2 * 		(0.025 * SafezoneH)";
					idc = 152;
					shadow = 0;
					sizeEx = "0.03*SafezoneH";
					style = 0;
					text = "DTV";
					w = "5 * 		(0.01875 * SafezoneH)";
					x = "48.2 * 		(0.01875 * SafezoneH)";
					y = "8.4 * 		(0.025 * SafezoneH)";
				};
				class RangeText: RscText
				{
					font = "EtelkaMonospacePro";
					h = "1.2 * 		(0.025 * SafezoneH)";
					idc = 1000;
					shadow = 0;
					sizeEx = "0.02*SafezoneH";
					style = 0;
					text = "RANGE:";
					w = "3 * 		(0.01875 * SafezoneH)";
					x = "(14+13) * 		(0.01875 * SafezoneH)";
					y = "(34+1) * 		(0.025 * SafezoneH)";
				};
				class TextTrackArea: ValueDistance
				{
					h = "1.5 * 		(0.025 * SafezoneH)";
					idc = 194;
					sizeEx = "0.038*SafezoneH";
					style = 2;
					text = "AREA";
					w = "5 * 		(0.01875 * SafezoneH)";
					x = "24.2 * 		(0.01875 * SafezoneH)";
					y = "25.8 * 		(0.025 * SafezoneH)";
				};
				class TextTrackPoint: TextTrackArea
				{
					idc = 195;
					text = "POINT";
				};
				class ValueDistance: RscText
				{
					font = "EtelkaMonospacePro";
					h = "1.2 * 		(0.025 * SafezoneH)";
					idc = 198;
					shadow = 0;
					sizeEx = "0.038*SafezoneH";
					style = 1;
					text = "2456";
					w = "3 * 		(0.01875 * SafezoneH)";
					x = "(17+13) * 		(0.01875 * SafezoneH)";
					y = "(34+1) * 		(0.025 * SafezoneH)";
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
	};
	class RscOptics_UAV_gunner: RscUnitInfo
	{
		controls[] = {"CA_IGUI_elements_group"};
		idd = 300;
		class CA_IGUI_elements_group: RscControlsGroup
		{
			h = "40 * 		(0.025 * SafezoneH)";
			idc = 170;
			w = "53.5 * 		(0.01875 * SafezoneH)";
			x = "0 * 		(0.01875 * SafezoneH) + 		(SafezoneX + ((SafezoneW - SafezoneH) / 2))";
			y = "0 * 		(0.025 * SafezoneH) + 		(SafezoneY)";
			class controls
			{
				class CA_Alt: RangeText
				{
					h = "1.2 * 		(0.025 * SafezoneH)";
					idc = 189;
					text = "3825";
					w = "5 * 		(0.01875 * SafezoneH)";
					x = "10.3 * 		(0.01875 * SafezoneH)";
					y = "13.2 * 		(0.025 * SafezoneH)";
				};
				class CA_Distance: RangeText
				{
					h = "1.2 * 		(0.025 * SafezoneH)";
					idc = 198;
					text = "2456";
					w = "4 * 		(0.01875 * SafezoneH)";
					x = "21.3 * 		(0.01875 * SafezoneH)";
					y = "13.2 * 		(0.025 * SafezoneH)";
				};
				class CA_FlirMode: RangeText
				{
					h = "1.2 * 		(0.025 * SafezoneH)";
					idc = 153;
					style = 0;
					text = "BHOT";
					w = "4.5 * 		(0.01875 * SafezoneH)";
					x = "23.4 * 		(0.01875 * SafezoneH)";
					y = "26.8 * 		(0.025 * SafezoneH)";
				};
				class CA_Laser: RscText
				{
					colorText[] = {0.706, 0.0745, 0.0196, 1};
					font = "EtelkaMonospacePro";
					h = "1.5 * 		(0.025 * SafezoneH)";
					idc = 158;
					shadow = 0;
					sizeEx = "0.038*SafezoneH";
					style = "0x30 + 0x800";
					text = "\A3\ui_f\data\igui\rscingameui\rscoptics\laser_designator_iconLaserOn.paa";
					w = "3.5 * 		(0.01875 * SafezoneH)";
					x = "31.1 * 		(0.01875 * SafezoneH)";
					y = "12.85 * 		(0.025 * SafezoneH)";
				};
				class CA_OpticsZoom: RangeText
				{
					h = "1.2 * 		(0.025 * SafezoneH)";
					idc = 180;
					text = "28x";
					w = "6 * 		(0.01875 * SafezoneH)";
					x = "22.2 * 		(0.01875 * SafezoneH)";
					y = "26 * 		(0.025 * SafezoneH)";
				};
				class CA_Speed: RangeText
				{
					h = "1.2 * 		(0.025 * SafezoneH)";
					idc = 188;
					text = "120";
					w = "5 * 		(0.01875 * SafezoneH)";
					x = "10.3 * 		(0.01875 * SafezoneH)";
					y = "12.4 * 		(0.025 * SafezoneH)";
				};
				class CA_VisionMode: RangeText
				{
					h = "1.2 * 		(0.025 * SafezoneH)";
					idc = 179;
					style = 0;
					text = "VIS";
					w = "4 * 		(0.01875 * SafezoneH)";
					x = "22.2 * 		(0.01875 * SafezoneH)";
					y = "26.8 * 		(0.025 * SafezoneH)";
				};
				class ModeText: RangeText
				{
					h = "1.2 * 		(0.025 * SafezoneH)";
					idc = 1002;
					text = "MODE:";
					w = "3 * 		(0.01875 * SafezoneH)";
					x = "18.5 * 		(0.01875 * SafezoneH)";
					y = "26.8 * 		(0.025 * SafezoneH)";
				};
				class RangeText: RscText
				{
					font = "EtelkaMonospacePro";
					h = "1.2 * 		(0.025 * SafezoneH)";
					idc = 1000;
					shadow = 0;
					sizeEx = "0.02*SafezoneH";
					style = 0;
					text = "RANGE:";
					w = "3 * 		(0.01875 * SafezoneH)";
					x = "18.5 * 		(0.01875 * SafezoneH)";
					y = "13.2 * 		(0.025 * SafezoneH)";
				};
				class TextAlt: RangeText
				{
					h = "1.2 * 		(0.025 * SafezoneH)";
					idc = 1007;
					text = "ALT [AGL]:";
					w = "5 * 		(0.01875 * SafezoneH)";
					x = "5.8 * 		(0.01875 * SafezoneH)";
					y = "13.2 * 		(0.025 * SafezoneH)";
				};
				class TextGrid: RangeText
				{
					h = "1.2 * 		(0.025 * SafezoneH)";
					idc = 1005;
					text = "GRID:";
					w = "5 * 		(0.01875 * SafezoneH)";
					x = "5.8 * 		(0.01875 * SafezoneH)";
					y = "31.8 * 		(0.025 * SafezoneH)";
				};
				class TextMag: RangeText
				{
					h = "1.2 * 		(0.025 * SafezoneH)";
					idc = 1011;
					text = "CAM MAG:";
					w = "5 * 		(0.01875 * SafezoneH)";
					x = "18.5 * 		(0.01875 * SafezoneH)";
					y = "26 * 		(0.025 * SafezoneH)";
				};
				class TextSpd: RangeText
				{
					h = "1.2 * 		(0.025 * SafezoneH)";
					idc = 1009;
					text = "SPD [KM/H]:";
					w = "5 * 		(0.01875 * SafezoneH)";
					x = "5.8 * 		(0.01875 * SafezoneH)";
					y = "12.4 * 		(0.025 * SafezoneH)";
				};
				class TextTime: RangeText
				{
					h = "1 * 		(0.025 * SafezoneH)";
					idc = 1010;
					text = "TIME [UTC]:";
					w = "5 * 		(0.01875 * SafezoneH)";
					x = "5.8 * 		(0.01875 * SafezoneH)";
					y = "32.6 * 		(0.025 * SafezoneH)";
				};
				class ValueGrid: RangeText
				{
					h = "1 * 		(0.025 * SafezoneH)";
					idc = 171;
					text = "382546";
					w = "6 * 		(0.01875 * SafezoneH)";
					x = "10.3 * 		(0.01875 * SafezoneH)";
					y = "31.8 * 		(0.025 * SafezoneH)";
				};
				class ValueTime: RangeText
				{
					h = "1 * 		(0.025 * SafezoneH)";
					idc = 190;
					text = "20:28:35";
					w = "6 * 		(0.01875 * SafezoneH)";
					x = "10 * 		(0.01875 * SafezoneH)";
					y = "32.6 * 		(0.025 * SafezoneH)";
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
	};
	class RscOptics_UGV_02_Demining_gunner
	{
		controls[] = {"CA_IGUI_elements_group"};
		idd = 300;
		onLoad = "[""onLoad"",_this,""RscOptics_UGV_02_Demining_gunner"",'EnochIngameUI'] call 	(uinamespace getvariable 'BIS_fnc_initDisplay')";
		onUnload = "[""onUnload"",_this,""RscOptics_UGV_02_Demining_gunner"",'EnochIngameUI'] call 	(uinamespace getvariable 'BIS_fnc_initDisplay')";
		scriptName = "RscOptics_UGV_02_Demining_gunner";
		scriptPath = "EnochIngameUI";
		class CA_IGUI_elements_group: RscControlsGroup
		{
			h = "40 * 		(0.025 * SafezoneH)";
			idc = 170;
			w = "58.5 * 		(0.01875 * SafezoneH)";
			x = "0 * 		(0.01875 * SafezoneH) + 		(SafezoneX + ((SafezoneW - SafezoneH) / 2))";
			y = "0 * 		(0.025 * SafezoneH) + 		(SafezoneY)";
			class controls
			{
				class AnalyzingText1: CA_Speed
				{
					idc = 5002;
					sizeEx = "0.028*SafezoneH";
					style = 2;
					text = "";
					w = "18 * 		(0.01875 * SafezoneH)";
					x = "18 * 		(0.01875 * SafezoneH)";
					y = "24.6 * 		(0.025 * SafezoneH)";
				};
				class AzimuthMark: RscPicture
				{
					colorText[] = {0.95, 0.95, 0.95, 1};
					h = "0.5 * 		(0.025 * SafezoneH)";
					IDC = 1012;
					style = 1;
					text = "A3\Ui_f\data\IGUI\RscIngameUI\RscOptics\AzimuthMark.paa";
					w = "0.5 * 		(0.01875 * SafezoneH)";
					x = "26.35 * 		(0.01875 * SafezoneH)";
					y = "3.0 * 		(0.025 * SafezoneH)";
				};
				class CA_Distance: RscText
				{
					colorText[] = {0.95, 0.95, 0.95, 1};
					font = "PuristaMedium";
					h = "1.5 * 		(0.025 * SafezoneH)";
					idc = 198;
					shadow = 0;
					sizeEx = "0.024*SafezoneH";
					style = 0;
					w = "4 * 		(0.01875 * SafezoneH)";
					x = "(1+29.9-1) * 		(0.01875 * SafezoneH)";
					y = "(18.5+3) * 		(0.025 * SafezoneH)";
				};
				class CA_Distance2: RscText
				{
					h = 0;
					idc = 183;
					w = 0;
				};
				class CA_Elev: CA_OpticsZoom
				{
					h = "1.2 * 		(0.025 * SafezoneH)";
					idc = 175;
					w = "4.8 * 		(0.01875 * SafezoneH)";
					x = "10.5 * 		(0.01875 * SafezoneH)";
					y = "13.8 * 		(0.025 * SafezoneH)";
				};
				class CA_FOVMode: RscText
				{
					colorText[] = {0.95, 0.95, 0.95, 1};
					font = "PuristaMedium";
					h = "0 * 		(0.025 * SafezoneH)";
					idc = 154;
					shadow = 0;
					sizeEx = "0.024*SafezoneH";
					w = "0 * 		(0.01875 * SafezoneH)";
					x = "6.5 * 		(0.01875 * SafezoneH)";
					y = "10.6 * 		(0.025 * SafezoneH)";
				};
				class CA_Fuel: CA_OpticsZoom
				{
					h = "1.2 * 		(0.025 * SafezoneH)";
					idc = 5001;
					w = "4.8 * 		(0.01875 * SafezoneH)";
					x = "10.5 * 		(0.01875 * SafezoneH)";
					y = "15.0 * 		(0.025 * SafezoneH)";
				};
				class CA_Heading: RscText
				{
					colorText[] = {0.95, 0.95, 0.95, 1};
					font = "PuristaMedium";
					h = "1.2 * 		(0.025 * SafezoneH)";
					idc = 156;
					shadow = 0;
					sizeEx = "0.032*SafezoneH";
					style = 2;
					text = "015";
					w = "3 * 		(0.01875 * SafezoneH)";
					x = "25.15 * 		(0.01875 * SafezoneH)";
					y = "1.75 * 		(0.025 * SafezoneH)";
				};
				class CA_HorizontalCompass: RscPicture
				{
					color[] = {0.95, 0.95, 0.95, 1};
					font = "PuristaMedium";
					h = "1 * 		(0.025 * SafezoneH)";
					IDC = 207;
					imageGun = "#(rgb,8,8,3)color(0,0,0,0)";
					imageHull = "a3\UI_F_Enoch\Data\IGUI\RscIngameUI\horizontalCompassHull_UGV_02.paa";
					imageObsTurret = "#(rgb,8,8,3)color(0,0,0,0)";
					imageTurret = "A3\Ui_f\data\IGUI\RscIngameUI\RscOptics\horizontalCompassTurret.paa";
					style = 1;
					textSize = "0.02*SafezoneH";
					type = 105;
					w = "(-5+27.18) * 		(0.01875 * SafezoneH)";
					x = "(5/2+13.04) * 		(0.01875 * SafezoneH)";
					y = "3.5 * 		(0.025 * SafezoneH)";
				};
				class CA_Laser: RscText
				{
					colorText[] = {0.706, 0.0745, 0.0196, 1};
					font = "EtelkaMonospacePro";
					h = "1.5 * 		(0.025 * SafezoneH)";
					idc = 158;
					shadow = 0;
					sizeEx = "0.038*SafezoneH";
					style = "0x30 + 0x800";
					text = "\A3\ui_f\data\igui\rscingameui\rscoptics\laser_designator_iconLaserOn.paa";
					w = "3.5 * 		(0.01875 * SafezoneH)";
					x = "29.2 * 		(0.01875 * SafezoneH)";
					y = "15 * 		(0.025 * SafezoneH)";
				};
				class CA_OpticsZoom: RscText
				{
					colorText[] = {0.95, 0.95, 0.95, 1};
					font = "PuristaMedium";
					h = "1.2 * 		(0.025 * SafezoneH)";
					idc = 180;
					shadow = 0;
					sizeEx = "0.028*SafezoneH";
					style = 0;
					w = "4.8 * 		(0.01875 * SafezoneH)";
					x = "10.5 * 		(0.01875 * SafezoneH)";
					y = "12.6 * 		(0.025 * SafezoneH)";
				};
				class CA_Position: RscText
				{
					colorText[] = {0.95, 0.95, 0.95, 1};
					font = "PuristaMedium";
					h = "1.2 * 		(0.025 * SafezoneH)";
					idc = 171;
					shadow = 0;
					sizeEx = "0.024*SafezoneH";
					style = 1;
					w = "4.8 * 		(0.01875 * SafezoneH)";
					x = "(2+6) * 		(0.01875 * SafezoneH)";
					y = "(28.5+3.5) * 		(0.025 * SafezoneH)";
				};
				class CA_Speed: RscText
				{
					colorText[] = {0.95, 0.95, 0.95, 1};
					font = "PuristaMedium";
					h = "2.4 * 		(0.025 * SafezoneH)";
					idc = 188;
					shadow = 0;
					sizeEx = "0.078*SafezoneH";
					style = 1;
					text = "9999";
					w = "4 * 		(0.01875 * SafezoneH)";
					x = "(51.0-8) * 		(0.01875 * SafezoneH)";
					y = "29.4 * 		(0.025 * SafezoneH)";
				};
				class CA_VisionMode: RscText
				{
					colorText[] = {0.95, 0.95, 0.95, 1};
					font = "PuristaMedium";
					h = "1.1 * 		(0.025 * SafezoneH)";
					idc = 179;
					shadow = 0;
					sizeEx = "0.028*SafezoneH";
					style = 0;
					w = "4 * 		(0.01875 * SafezoneH)";
					x = "(1+29.9-1) * 		(0.01875 * SafezoneH)";
					y = "(19.5+3) * 		(0.025 * SafezoneH)";
				};
				class DistanceText: CA_Distance
				{
					idc = 5009;
					text = "RANGE:";
					x = "(1+26.9-1) * 		(0.01875 * SafezoneH)";
				};
				class ElevText: CA_Elev
				{
					idc = -1;
					text = "ELEV";
					x = "4.65 * 		(0.01875 * SafezoneH)";
				};
				class FuelText: CA_Fuel
				{
					idc = -1;
					text = "BATTERY:    ";
					x = "4.65 * 		(0.01875 * SafezoneH)";
				};
				class Indicator_Camera1: Indicator_Lights
				{
					IDC = 5006;
					text = "a3\UI_F_Enoch\Data\IGUI\RscIngameUI\ind_cam1_ca.paa";
					x = "(1.9*1 + 41.35) * 		(0.01875 * SafezoneH)";
				};
				class Indicator_Camera2: Indicator_Lights
				{
					IDC = 5007;
					text = "a3\UI_F_Enoch\Data\IGUI\RscIngameUI\ind_cam2_ca.paa";
					x = "(1.9*2 + 41.35) * 		(0.01875 * SafezoneH)";
				};
				class Indicator_Camera3: Indicator_Lights
				{
					IDC = 5008;
					text = "a3\UI_F_Enoch\Data\IGUI\RscIngameUI\ind_cam3_ca.paa";
					x = "(1.9*3 + 41.35) * 		(0.01875 * SafezoneH)";
				};
				class Indicator_Lights: RscPicture
				{
					colorText[] = {0.5, 0.5, 0.5, 1};
					h = "1.8 * 		(0.025 * SafezoneH)";
					IDC = 5005;
					style = 48;
					text = "a3\UI_F_Enoch\Data\IGUI\RscIngameUI\ind_lights_ca.paa";
					w = "1.8 * 		(0.01875 * SafezoneH)";
					x = "41.35 * 		(0.01875 * SafezoneH)";
					y = "32.00 * 		(0.025 * SafezoneH)";
				};
				class Map: RscMapControlEmpty
				{
					h = 0;
					onDraw = "_this call (uinamespace getvariable 'RscOptics_UGV_02_demining_gunner_script');";
					w = 0;
				};
				class SpeedText: CA_Speed
				{
					idc = -1;
					sizeEx = "0.028*SafezoneH";
					text = "km/h";
					x = "(53-8) * 		(0.01875 * SafezoneH)";
				};
				class Text_Grid: CA_Position
				{
					idc = 1030;
					sizeEx = "0.028*SafezoneH";
					style = 0;
					text = "GRID:";
					x = "4.65 * 		(0.01875 * SafezoneH)";
				};
				class Text_Time: ValueTime
				{
					idc = 1030;
					sizeEx = "0.024*SafezoneH";
					style = 0;
					text = "TIME [UTC]:";
					x = "4.65 * 		(0.01875 * SafezoneH)";
				};
				class ValueTime: RscText
				{
					colorText[] = {0.95, 0.95, 0.95, 1};
					font = "PuristaMedium";
					h = "1.2 * 		(0.025 * SafezoneH)";
					idc = 190;
					shadow = 0;
					sizeEx = "0.028*SafezoneH";
					style = 1;
					w = "4.8 * 		(0.01875 * SafezoneH)";
					x = "(2+6) * 		(0.01875 * SafezoneH)";
					y = "(27.5+3.5) * 		(0.025 * SafezoneH)";
				};
				class VisionModeText: CA_VisionMode
				{
					idc = 5010;
					shadow = 0;
					sizeEx = "0.028*SafezoneH";
					text = "MODE:    ";
					x = "(1+26.9-1) * 		(0.01875 * SafezoneH)";
				};
				class ZoomText: CA_OpticsZoom
				{
					idc = 1002;
					text = "CAM MAG:       X";
					x = "4.65 * 		(0.01875 * SafezoneH)";
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
		class Objects
		{
			class UGV_Shape
			{
				direction[] = {0, 0, 1};
				enableZoom = 0;
				idc = 411;
				inBack = 0;
				model = "\a3\UI_F_Enoch\Data\Objects\UGV_02_UI_F.p3d";
				scale = "0.05 * (SafeZoneW Min SafeZoneH)";
				type = 82;
				up[] = {0, 1, 0};
				x = "(SafezoneX + ((SafezoneW - SafezoneH) / 2)) + (45) * 		(0.01875 * SafezoneH)";
				xBack = 0.5;
				y = "(SafezoneY) + (21) * 		(0.025 * SafezoneH)";
				yBack = 0.5;
				z = 0.303;
				zBack = 0;
				zoomDuration = 4.001;
				class AnimationSources
				{
					class Arm
					{
						animPeriod = 0.01;
						initPhase = 0;
						source = "user";
					};
					class Arm_forward
					{
						animPeriod = 0.01;
						initPhase = 0;
						source = "user";
					};
					class demining_drone
					{
						animPeriod = 0.01;
						initPhase = 1;
						source = "user";
					};
					class ew_drone
					{
						animPeriod = 0.01;
						initPhase = 0;
						source = "user";
					};
					class mainGun
					{
						animPeriod = 0.01;
						initPhase = 0;
						source = "user";
					};
					class science_drone
					{
						animPeriod = 0.01;
						initPhase = 0;
						source = "user";
					};
				};
			};
		};
	};
	class RscOptics_UGV_02_Science_gunner
	{
		controls[] = {"CA_IGUI_elements_group"};
		idd = 300;
		onLoad = "[""onLoad"",_this,""RscOptics_UGV_02_Science_gunner"",'EnochIngameUI'] call 	(uinamespace getvariable 'BIS_fnc_initDisplay')";
		onUnload = "[""onUnload"",_this,""RscOptics_UGV_02_Science_gunner"",'EnochIngameUI'] call 	(uinamespace getvariable 'BIS_fnc_initDisplay')";
		scriptName = "RscOptics_UGV_02_Science_gunner";
		scriptPath = "EnochIngameUI";
		class CA_IGUI_elements_group: RscControlsGroup
		{
			h = "40 * 		(0.025 * SafezoneH)";
			idc = 170;
			w = "58.5 * 		(0.01875 * SafezoneH)";
			x = "0 * 		(0.01875 * SafezoneH) + 		(SafezoneX + ((SafezoneW - SafezoneH) / 2))";
			y = "0 * 		(0.025 * SafezoneH) + 		(SafezoneY)";
			class controls
			{
				class AnalyzingProgressBar: RscProgress
				{
					colorBar[] = {0.45, 0.85, 0.96, 0.6};
					colorFrame[] = {0.95, 0.95, 0.95, 0.2};
					h = "1.2 * 		(0.025 * SafezoneH)";
					idc = 5011;
					w = "12.5 * 		(0.01875 * SafezoneH)";
					x = "20.6 * 		(0.01875 * SafezoneH)";
					y = "27.2 * 		(0.025 * SafezoneH)";
				};
				class AnalyzingText1: CA_Speed
				{
					idc = 5002;
					sizeEx = "0.028*SafezoneH";
					style = 2;
					text = "";
					w = "18 * 		(0.01875 * SafezoneH)";
					x = "18 * 		(0.01875 * SafezoneH)";
					y = "24.6 * 		(0.025 * SafezoneH)";
				};
				class AnalyzingText2: AnalyzingText1
				{
					idc = 5003;
					sizeEx = "0.02*SafezoneH";
					text = "";
					y = "25.6 * 		(0.025 * SafezoneH)";
				};
				class AnalyzingText3: AnalyzingText1
				{
					idc = 5004;
					text = "";
					y = "26.6 * 		(0.025 * SafezoneH)";
				};
				class AzimuthMark: RscPicture
				{
					colorText[] = {0.95, 0.95, 0.95, 1};
					h = "0.5 * 		(0.025 * SafezoneH)";
					IDC = 1012;
					style = 1;
					text = "A3\Ui_f\data\IGUI\RscIngameUI\RscOptics\AzimuthMark.paa";
					w = "0.5 * 		(0.01875 * SafezoneH)";
					x = "26.35 * 		(0.01875 * SafezoneH)";
					y = "3.0 * 		(0.025 * SafezoneH)";
				};
				class CA_Distance: RscText
				{
					colorText[] = {0.95, 0.95, 0.95, 1};
					font = "PuristaMedium";
					h = "1.5 * 		(0.025 * SafezoneH)";
					idc = 198;
					shadow = 0;
					sizeEx = "0.024*SafezoneH";
					style = 0;
					w = "4 * 		(0.01875 * SafezoneH)";
					x = "(1+29.9) * 		(0.01875 * SafezoneH)";
					y = "18.5 * 		(0.025 * SafezoneH)";
				};
				class CA_Distance2: RscText
				{
					h = 0;
					idc = 183;
					w = 0;
				};
				class CA_Elev: CA_OpticsZoom
				{
					h = "1.2 * 		(0.025 * SafezoneH)";
					idc = 175;
					w = "4.8 * 		(0.01875 * SafezoneH)";
					x = "10.5 * 		(0.01875 * SafezoneH)";
					y = "13.8 * 		(0.025 * SafezoneH)";
				};
				class CA_FOVMode: RscText
				{
					colorText[] = {0.95, 0.95, 0.95, 1};
					font = "PuristaMedium";
					h = "0 * 		(0.025 * SafezoneH)";
					idc = 154;
					shadow = 0;
					sizeEx = "0.024*SafezoneH";
					w = "0 * 		(0.01875 * SafezoneH)";
					x = "6.5 * 		(0.01875 * SafezoneH)";
					y = "10.6 * 		(0.025 * SafezoneH)";
				};
				class CA_Fuel: CA_OpticsZoom
				{
					h = "1.2 * 		(0.025 * SafezoneH)";
					idc = 5001;
					w = "4.8 * 		(0.01875 * SafezoneH)";
					x = "10.5 * 		(0.01875 * SafezoneH)";
					y = "15.0 * 		(0.025 * SafezoneH)";
				};
				class CA_Heading: RscText
				{
					colorText[] = {0.95, 0.95, 0.95, 1};
					font = "PuristaMedium";
					h = "1.2 * 		(0.025 * SafezoneH)";
					idc = 156;
					shadow = 0;
					sizeEx = "0.032*SafezoneH";
					style = 2;
					text = "015";
					w = "3 * 		(0.01875 * SafezoneH)";
					x = "25.15 * 		(0.01875 * SafezoneH)";
					y = "1.75 * 		(0.025 * SafezoneH)";
				};
				class CA_HorizontalCompass: RscPicture
				{
					color[] = {0.95, 0.95, 0.95, 1};
					font = "PuristaMedium";
					h = "1 * 		(0.025 * SafezoneH)";
					IDC = 207;
					imageGun = "#(rgb,8,8,3)color(0,0,0,0)";
					imageHull = "a3\UI_F_Enoch\Data\IGUI\RscIngameUI\horizontalCompassHull_UGV_02.paa";
					imageObsTurret = "#(rgb,8,8,3)color(0,0,0,0)";
					imageTurret = "A3\Ui_f\data\IGUI\RscIngameUI\RscOptics\horizontalCompassTurret.paa";
					style = 1;
					textSize = "0.02*SafezoneH";
					type = 105;
					w = "(-5+27.18) * 		(0.01875 * SafezoneH)";
					x = "(5/2+13.04) * 		(0.01875 * SafezoneH)";
					y = "3.5 * 		(0.025 * SafezoneH)";
				};
				class CA_OpticsZoom: RscText
				{
					colorText[] = {0.95, 0.95, 0.95, 1};
					font = "PuristaMedium";
					h = "1.2 * 		(0.025 * SafezoneH)";
					idc = 180;
					shadow = 0;
					sizeEx = "0.028*SafezoneH";
					style = 0;
					w = "4.8 * 		(0.01875 * SafezoneH)";
					x = "10.5 * 		(0.01875 * SafezoneH)";
					y = "12.6 * 		(0.025 * SafezoneH)";
				};
				class CA_Position: RscText
				{
					colorText[] = {0.95, 0.95, 0.95, 1};
					font = "PuristaMedium";
					h = "1.2 * 		(0.025 * SafezoneH)";
					idc = 171;
					shadow = 0;
					sizeEx = "0.024*SafezoneH";
					style = 1;
					w = "4.8 * 		(0.01875 * SafezoneH)";
					x = "(2+6) * 		(0.01875 * SafezoneH)";
					y = "(28.5+3.5) * 		(0.025 * SafezoneH)";
				};
				class CA_Signal: CA_OpticsZoom
				{
					h = "1.2 * 		(0.025 * SafezoneH)";
					idc = 1001;
					onLoad = "					(_this # 0) ctrlsetfade (if (cameraon getvariable ['RscOptics_UGV_02_Science_gunner_ShowSignal',false]) then {0} else {1});					(_this # 0) ctrlcommit 0;					uinamespace setvariable ['RscOptics_UGV_02_Science_gunner_CA_Signal',_this # 0];				";
					w = "4.8 * 		(0.01875 * SafezoneH)";
					x = "10.5 * 		(0.01875 * SafezoneH)";
					y = "16.2 * 		(0.025 * SafezoneH)";
				};
				class CA_Speed: RscText
				{
					colorText[] = {0.95, 0.95, 0.95, 1};
					font = "PuristaMedium";
					h = "2.4 * 		(0.025 * SafezoneH)";
					idc = 188;
					shadow = 0;
					sizeEx = "0.078*SafezoneH";
					style = 1;
					text = "9999";
					w = "4 * 		(0.01875 * SafezoneH)";
					x = "(51.0-8) * 		(0.01875 * SafezoneH)";
					y = "29.4 * 		(0.025 * SafezoneH)";
				};
				class CA_VisionMode: RscText
				{
					colorText[] = {0.95, 0.95, 0.95, 1};
					font = "PuristaMedium";
					h = "1.1 * 		(0.025 * SafezoneH)";
					idc = 179;
					shadow = 0;
					sizeEx = "0.028*SafezoneH";
					style = 0;
					w = "4 * 		(0.01875 * SafezoneH)";
					x = "(1+29.9) * 		(0.01875 * SafezoneH)";
					y = "19.5 * 		(0.025 * SafezoneH)";
				};
				class DistanceText: CA_Distance
				{
					idc = 5009;
					text = "RANGE:";
					x = "(1+26.9) * 		(0.01875 * SafezoneH)";
				};
				class ElevText: CA_Elev
				{
					idc = -1;
					text = "ELEV";
					x = "4.65 * 		(0.01875 * SafezoneH)";
				};
				class FuelText: CA_Fuel
				{
					idc = -1;
					text = "BATTERY:    ";
					x = "4.65 * 		(0.01875 * SafezoneH)";
				};
				class Indicator_Camera1: Indicator_Lights
				{
					IDC = 5006;
					text = "a3\UI_F_Enoch\Data\IGUI\RscIngameUI\ind_cam1_ca.paa";
					x = "(1.9*1 + 41.35) * 		(0.01875 * SafezoneH)";
				};
				class Indicator_Camera2: Indicator_Lights
				{
					IDC = 5007;
					text = "a3\UI_F_Enoch\Data\IGUI\RscIngameUI\ind_cam2_ca.paa";
					x = "(1.9*2 + 41.35) * 		(0.01875 * SafezoneH)";
				};
				class Indicator_Camera3: Indicator_Lights
				{
					IDC = 5008;
					text = "a3\UI_F_Enoch\Data\IGUI\RscIngameUI\ind_cam3_ca.paa";
					x = "(1.9*3 + 41.35) * 		(0.01875 * SafezoneH)";
				};
				class Indicator_Lights: RscPicture
				{
					colorText[] = {0.5, 0.5, 0.5, 1};
					h = "1.8 * 		(0.025 * SafezoneH)";
					IDC = 5005;
					style = 48;
					text = "a3\UI_F_Enoch\Data\IGUI\RscIngameUI\ind_lights_ca.paa";
					w = "1.8 * 		(0.01875 * SafezoneH)";
					x = "41.35 * 		(0.01875 * SafezoneH)";
					y = "32.00 * 		(0.025 * SafezoneH)";
				};
				class Indicator_TrackLock: RscPicture
				{
					colorText[] = {1, 1, 1, 0};
					h = "2.25 * 		(0.025 * SafezoneH)";
					IDC = 5013;
					style = 48;
					text = "a3\UI_F_Enoch\Data\IGUI\RscIngameUI\ind_trackLock_ca.paa";
					w = "4*2.25 * 		(0.01875 * SafezoneH)";
					x = "40.25 * 		(0.01875 * SafezoneH)";
					y = "27.90 * 		(0.025 * SafezoneH)";
				};
				class InRangeText: AnalyzingText1
				{
					idc = 5012;
					text = "IN RANGE";
					x = "17.6 * 		(0.01875 * SafezoneH)";
					y = "21.6 * 		(0.025 * SafezoneH)";
				};
				class Map: RscMapControlEmpty
				{
					h = 0;
					onDraw = "_this call (uinamespace getvariable 'RscOptics_UGV_02_science_gunner_script');";
					w = 0;
				};
				class SignalText: CA_Signal
				{
					idc = 1002;
					onLoad = "					(_this # 0) ctrlsetfade (if (cameraon getvariable ['RscOptics_UGV_02_Science_gunner_ShowSignal',false]) then {0} else {1});					(_this # 0) ctrlcommit 0;				";
					text = "SIGNAL:    ";
					x = "4.65 * 		(0.01875 * SafezoneH)";
				};
				class SpeedText: CA_Speed
				{
					idc = -1;
					sizeEx = "0.028*SafezoneH";
					text = "km/h";
					x = "(53-8) * 		(0.01875 * SafezoneH)";
				};
				class Text_Grid: CA_Position
				{
					idc = 1030;
					sizeEx = "0.028*SafezoneH";
					style = 0;
					text = "GRID:";
					x = "4.65 * 		(0.01875 * SafezoneH)";
				};
				class Text_Time: ValueTime
				{
					idc = 1030;
					sizeEx = "0.024*SafezoneH";
					style = 0;
					text = "TIME [UTC]:";
					x = "4.65 * 		(0.01875 * SafezoneH)";
				};
				class ValueTime: RscText
				{
					colorText[] = {0.95, 0.95, 0.95, 1};
					font = "PuristaMedium";
					h = "1.2 * 		(0.025 * SafezoneH)";
					idc = 190;
					shadow = 0;
					sizeEx = "0.028*SafezoneH";
					style = 1;
					w = "4.8 * 		(0.01875 * SafezoneH)";
					x = "(2+6) * 		(0.01875 * SafezoneH)";
					y = "(27.5+3.5) * 		(0.025 * SafezoneH)";
				};
				class VisionModeText: CA_VisionMode
				{
					idc = 5010;
					shadow = 0;
					sizeEx = "0.028*SafezoneH";
					text = "MODE:    ";
					x = "(1+26.9) * 		(0.01875 * SafezoneH)";
				};
				class ZoomText: CA_OpticsZoom
				{
					idc = 1002;
					text = "CAM MAG:       X";
					x = "4.65 * 		(0.01875 * SafezoneH)";
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
		class Objects
		{
			class UGV_Shape
			{
				direction[] = {0, 0, 1};
				enableZoom = 0;
				idc = 411;
				inBack = 0;
				model = "\a3\UI_F_Enoch\Data\Objects\UGV_02_UI_F.p3d";
				scale = "0.05 * (SafeZoneW Min SafeZoneH)";
				type = 82;
				up[] = {0, 1, 0};
				x = "(SafezoneX + ((SafezoneW - SafezoneH) / 2)) + (45) * 		(0.01875 * SafezoneH)";
				xBack = 0.5;
				y = "(SafezoneY) + (20.5) * 		(0.025 * SafezoneH)";
				yBack = 0.5;
				z = 0.303;
				zBack = 0;
				zoomDuration = 4.001;
				class AnimationSources
				{
					class Arm
					{
						animPeriod = 0.01;
						initPhase = 0;
						source = "user";
					};
					class Arm_forward
					{
						animPeriod = 0.01;
						initPhase = 0;
						source = "user";
					};
					class demining_drone
					{
						animPeriod = 0.01;
						initPhase = 0;
						source = "user";
					};
					class ew_drone
					{
						animPeriod = 0.01;
						initPhase = 0;
						source = "user";
					};
					class mainGun
					{
						animPeriod = 0.01;
						initPhase = 0;
						source = "user";
					};
					class science_drone
					{
						animPeriod = 0.01;
						initPhase = 1;
						source = "user";
					};
				};
			};
		};
	};
	class RscOptics_UGV_gunner: RscUnitInfo
	{
		controls[] = {"CA_Zeroing", "CA_IGUI_elements_group"};
		idd = 300;
		class CA_IGUI_elements_group: RscControlsGroup
		{
			h = "40 * 		(0.025 * SafezoneH)";
			idc = 170;
			w = "53.5 * 		(0.01875 * SafezoneH)";
			x = "0 * 		(0.01875 * SafezoneH) + 		(SafezoneX + ((SafezoneW - SafezoneH) / 2))";
			y = "0 * 		(0.025 * SafezoneH) + 		(SafezoneY)";
			class controls
			{
				class CA_Distance: RangeText
				{
					h = "1.2 * 		(0.025 * SafezoneH)";
					idc = 198;
					text = "2456";
					w = "4 * 		(0.01875 * SafezoneH)";
					x = "29.4 * 		(0.01875 * SafezoneH)";
					y = "28.8 * 		(0.025 * SafezoneH)";
				};
				class CA_FlirMode: RangeText
				{
					h = "1.2 * 		(0.025 * SafezoneH)";
					idc = 153;
					style = 0;
					text = "BHOT";
					w = "4.5 * 		(0.01875 * SafezoneH)";
					x = "30.6 * 		(0.01875 * SafezoneH)";
					y = "29.6 * 		(0.025 * SafezoneH)";
				};
				class CA_OpticsZoom: RangeText
				{
					h = "1.2 * 		(0.025 * SafezoneH)";
					idc = 180;
					text = "28x";
					w = "6 * 		(0.01875 * SafezoneH)";
					x = "10.3 * 		(0.01875 * SafezoneH)";
					y = "7 * 		(0.025 * SafezoneH)";
				};
				class CA_VisionMode: RangeText
				{
					h = "1.2 * 		(0.025 * SafezoneH)";
					idc = 179;
					style = 0;
					text = "VIS";
					w = "4 * 		(0.01875 * SafezoneH)";
					x = "29.4 * 		(0.01875 * SafezoneH)";
					y = "29.6 * 		(0.025 * SafezoneH)";
				};
				class ModeText: RangeText
				{
					h = "1.2 * 		(0.025 * SafezoneH)";
					idc = 1002;
					text = "MODE:";
					w = "3 * 		(0.01875 * SafezoneH)";
					x = "26.6 * 		(0.01875 * SafezoneH)";
					y = "29.6 * 		(0.025 * SafezoneH)";
				};
				class RangeText: RscText
				{
					font = "EtelkaMonospacePro";
					h = "1.2 * 		(0.025 * SafezoneH)";
					idc = 1000;
					shadow = 0;
					sizeEx = "0.02*SafezoneH";
					style = 0;
					text = "RANGE:";
					w = "3 * 		(0.01875 * SafezoneH)";
					x = "26.6 * 		(0.01875 * SafezoneH)";
					y = "28.8 * 		(0.025 * SafezoneH)";
				};
				class TextGrid: RangeText
				{
					h = "1 * 		(0.025 * SafezoneH)";
					idc = 1005;
					text = "GRID:";
					w = "5 * 		(0.01875 * SafezoneH)";
					x = "5.8 * 		(0.01875 * SafezoneH)";
					y = "31.8 * 		(0.025 * SafezoneH)";
				};
				class TextMag: RangeText
				{
					h = "1.2 * 		(0.025 * SafezoneH)";
					idc = 1011;
					text = "CAM MAG:";
					w = "5 * 		(0.01875 * SafezoneH)";
					x = "5.8 * 		(0.01875 * SafezoneH)";
					y = "7 * 		(0.025 * SafezoneH)";
				};
				class TextTime: RangeText
				{
					h = "1 * 		(0.025 * SafezoneH)";
					idc = 1010;
					text = "TIME [UTC]:";
					w = "5 * 		(0.01875 * SafezoneH)";
					x = "5.8 * 		(0.01875 * SafezoneH)";
					y = "32.6 * 		(0.025 * SafezoneH)";
				};
				class ValueGrid: RangeText
				{
					h = "1 * 		(0.025 * SafezoneH)";
					idc = 171;
					text = "382546";
					w = "6 * 		(0.01875 * SafezoneH)";
					x = "10.3 * 		(0.01875 * SafezoneH)";
					y = "31.8 * 		(0.025 * SafezoneH)";
				};
				class ValueTime: RangeText
				{
					h = "1 * 		(0.025 * SafezoneH)";
					idc = 190;
					text = "20:28:35";
					w = "6 * 		(0.01875 * SafezoneH)";
					x = "10 * 		(0.01875 * SafezoneH)";
					y = "32.6 * 		(0.025 * SafezoneH)";
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
	};
	class RscOptics_VLS_01: RscUnitInfo
	{
		controls[] = {"CA_Zeroing", "CA_DistanceText", "CA_Distance"};
		idd = 300;
		class CA_Distance: RscOpticsValue
		{
			colorText[] = {1, 0.15, 0.15, 0.65};
			font = "EtelkaMonospacePro";
			h = 0.05;
			idc = 198;
			shadow = 0;
			style = 2;
			w = 1;
			x = 0;
			y = "(SafezoneY+SafezoneH) - 0.195";
		};
		class CA_DistanceText: RscOpticsText
		{
			colorText[] = {1, 0, 0, 1};
			h = 0.05;
			idc = -1;
			style = 2;
			w = 1;
			x = 0;
			y = "(SafezoneY+SafezoneH) - 0.05";
		};
	};
	class RscOptics_VTOL_01_copilot: RscUnitInfo
	{
		controls[] = {"CA_Zeroing", "CA_IGUI_elements_group"};
		idd = 300;
		class CA_IGUI_elements_group: RscControlsGroup
		{
			h = "40 * 		(0.025 * SafezoneH)";
			idc = 170;
			w = "53.5 * 		(0.01875 * SafezoneH)";
			x = "0 * 		(0.01875 * SafezoneH) + 		(SafezoneX + ((SafezoneW - SafezoneH) / 2))";
			y = "0 * 		(0.025 * SafezoneH) + 		(SafezoneY)";
			class controls
			{
				class CA_Distance: RscText
				{
					font = "EtelkaMonospacePro";
					h = "1.2 * 		(0.025 * SafezoneH)";
					idc = 151;
					shadow = 0;
					sizeEx = "0.0295*SafezoneH";
					style = 2;
					text = "2456";
					w = "4 * 		(0.01875 * SafezoneH)";
					x = "24.78 * 		(0.01875 * SafezoneH)";
					y = "30.88 * 		(0.025 * SafezoneH)";
				};
				class CA_FlirMode: RscText
				{
					font = "EtelkaMonospacePro";
					h = "1.2 * 		(0.025 * SafezoneH)";
					idc = 153;
					shadow = 0;
					sizeEx = "0.0295*SafezoneH";
					style = 0;
					text = "BHOT";
					w = "4.5 * 		(0.01875 * SafezoneH)";
					x = "11.15 * 		(0.01875 * SafezoneH)";
					y = "15.34 * 		(0.025 * SafezoneH)";
				};
				class CA_Laser: RscText
				{
					colorText[] = {0.706, 0.0745, 0.0196, 1};
					font = "EtelkaMonospacePro";
					h = "1.5 * 		(0.025 * SafezoneH)";
					idc = 158;
					shadow = 0;
					sizeEx = "0.038*SafezoneH";
					style = "0x30 + 0x800";
					text = "\A3\ui_f\data\igui\rscingameui\rscoptics\laser_designator_iconLaserOn.paa";
					w = "3.5 * 		(0.01875 * SafezoneH)";
					x = "29.2 * 		(0.01875 * SafezoneH)";
					y = "13 * 		(0.025 * SafezoneH)";
				};
				class CA_VisionMode: RscText
				{
					font = "EtelkaMonospacePro";
					h = "1.2 * 		(0.025 * SafezoneH)";
					idc = 179;
					shadow = 0;
					sizeEx = "0.0295*SafezoneH";
					style = 0;
					text = "VIS";
					w = "4 * 		(0.01875 * SafezoneH)";
					x = "9.3 * 		(0.01875 * SafezoneH)";
					y = "15.34 * 		(0.025 * SafezoneH)";
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
	};
	class RscOptics_VTOL_01_gunner: RscUnitInfo
	{
		controls[] = {"CA_Zeroing", "CA_IGUI_elements_group"};
		idd = 300;
		class CA_IGUI_elements_group: RscControlsGroup
		{
			h = "40 * 		(0.025 * SafezoneH)";
			idc = 170;
			w = "53.5 * 		(0.01875 * SafezoneH)";
			x = "0 * 		(0.01875 * SafezoneH) + 		(SafezoneX + ((SafezoneW - SafezoneH) / 2))";
			y = "0 * 		(0.025 * SafezoneH) + 		(SafezoneY)";
			class controls
			{
				class CA_FireSolutionValid: CA_Grid
				{
					colorText[] = {0.2941, 0.8745, 0.2157, 1};
					idc = 200;
					text = "RDY";
					x = "4.65 * 		(0.01875 * SafezoneH)";
					y = "6.6 * 		(0.025 * SafezoneH)";
				};
				class CA_FlirMode: CA_FOVMode
				{
					idc = 153;
					y = "9.4 * 		(0.025 * SafezoneH)";
				};
				class CA_FOVMode: RscText
				{
					colorBackground[] = {0, 0, 0, 1};
					colorText[] = {1, 1, 1, 1};
					font = "EtelkaMonospacePro";
					h = "1.2 * 		(0.025 * SafezoneH)";
					idc = 154;
					shadow = 0;
					sizeEx = "0.03*SafezoneH";
					style = 0;
					text = "----";
					w = "5 * 		(0.01875 * SafezoneH)";
					x = "48.2 * 		(0.01875 * SafezoneH)";
					y = "7.4 * 		(0.025 * SafezoneH)";
				};
				class CA_Grid: CA_Time
				{
					idc = 171;
					sizeEx = "0.024*SafezoneH";
					style = 1;
					text = "XXXX";
					x = "4.65 * 		(0.01875 * SafezoneH)";
					y = "5.7 * 		(0.025 * SafezoneH)";
				};
				class CA_GunLayingDelay: RscPictureKeepAspect
				{
					h = "9 * 		(0.025 * SafezoneH)";
					idc = 204;
					text = "A3\Ui_f\data\IGUI\RscIngameUI\RscOptics\laser_icon_X.paa";
					w = "9 * 		(0.01875 * SafezoneH)";
					x = "22.15 * 		(0.01875 * SafezoneH)";
					y = "15.5 * 		(0.025 * SafezoneH)";
				};
				class CA_Heading: RscText
				{
					font = "EtelkaMonospacePro";
					h = "1.2 * 		(0.025 * SafezoneH)";
					idc = 156;
					shadow = 0;
					sizeEx = "0.03*SafezoneH";
					style = 2;
					text = "015";
					w = "3 * 		(0.01875 * SafezoneH)";
					x = "25.15 * 		(0.01875 * SafezoneH)";
					y = "4.6 * 		(0.025 * SafezoneH)";
				};
				class CA_HorizontalCompass: RscPicture
				{
					color[] = {1, 1, 1, 1};
					font = "EtelkaMonospacePro";
					h = "1 * 		(0.025 * SafezoneH)";
					IDC = 207;
					imageGun = "#(rgb,8,8,3)color(0,0,0,0)";
					imageHull = "A3\Ui_f\data\IGUI\RscIngameUI\RscOptics\horizontalCompassHull.paa";
					imageObsTurret = "A3\Ui_f\data\IGUI\RscIngameUI\RscOptics\horizontalCompassObsTurret.paa";
					imageTurret = "A3\Ui_f\data\IGUI\RscIngameUI\RscOptics\horizontalCompassTurret.paa";
					shadow = 0;
					style = 1;
					textSize = "0.02*SafezoneH";
					type = 105;
					w = "41.3 * 		(0.01875 * SafezoneH)";
					x = "6.0 * 		(0.01875 * SafezoneH)";
					y = "1.75 * 		(0.025 * SafezoneH)";
				};
				class CA_LasedObjectERR: CA_Grid
				{
					colorText[] = {0.9255, 0.5216, 0.1216, 1};
					idc = 203;
					text = "GND SCT";
					y = "22.4 * 		(0.025 * SafezoneH)";
				};
				class CA_LasedRange: CA_Grid
				{
					idc = 198;
					y = "8.4 * 		(0.025 * SafezoneH)";
				};
				class CA_MaxElevERR: Text_Grid
				{
					colorText[] = {0.706, 0.0745, 0.0196, 1};
					idc = 202;
					text = "MAX ZERO";
					y = "9.3 * 		(0.025 * SafezoneH)";
				};
				class CA_MaxLeadERR: Text_Grid
				{
					colorText[] = {0.706, 0.0745, 0.0196, 1};
					idc = 201;
					text = "MAX LEAD";
					y = "26 * 		(0.025 * SafezoneH)";
				};
				class CA_OpticsPitch: CA_Grid
				{
					idc = 175;
					x = "4.65 * 		(0.01875 * SafezoneH)";
					y = "7.5 * 		(0.025 * SafezoneH)";
				};
				class CA_TargeteDistance: Text_Grid
				{
					idc = 183;
					style = 0;
					w = "1.125 * 		(0.01875 * SafezoneH)";
					x = "7.8 * 		(0.01875 * SafezoneH)";
					y = "24.2 * 		(0.025 * SafezoneH)";
				};
				class CA_TargetGrid: CA_Grid
				{
					idc = 172;
					y = "23.3 * 		(0.025 * SafezoneH)";
				};
				class CA_TargetSpeed: CA_Grid
				{
					idc = 199;
					y = "25.1 * 		(0.025 * SafezoneH)";
				};
				class CA_Time: RscText
				{
					font = "EtelkaMonospacePro";
					h = "1.2 * 		(0.025 * SafezoneH)";
					idc = 190;
					shadow = 0;
					sizeEx = "0.032*SafezoneH";
					style = 0;
					text = "XX:XX:xx";
					w = "6.5 * 		(0.01875 * SafezoneH)";
					x = "4.0 * 		(0.01875 * SafezoneH)";
					y = "4.6 * 		(0.025 * SafezoneH)";
				};
				class CA_VisionMode: CA_FOVMode
				{
					idc = 152;
					y = "8.4 * 		(0.025 * SafezoneH)";
				};
				class TargetField: Text_Gun
				{
					idc = 1034;
					text = "TGT";
					y = "22.4 * 		(0.025 * SafezoneH)";
				};
				class TargetSpeedText: Text_Grid
				{
					idc = 1038;
					text = "SPD";
					y = "25.1 * 		(0.025 * SafezoneH)";
				};
				class Text_Grid: CA_Time
				{
					idc = 1030;
					sizeEx = "0.024*SafezoneH";
					text = "GRID";
					x = "4.65 * 		(0.01875 * SafezoneH)";
					y = "5.7 * 		(0.025 * SafezoneH)";
				};
				class Text_Gun: Text_Grid
				{
					idc = 1031;
					sizeEx = "0.024*SafezoneH";
					text = "GUN";
					x = "4.65 * 		(0.01875 * SafezoneH)";
					y = "6.6 * 		(0.025 * SafezoneH)";
				};
				class Text_LasedRange: Text_Grid
				{
					idc = 1033;
					text = "RNG-L";
					y = "8.4 * 		(0.025 * SafezoneH)";
				};
				class Text_OpticsPitch: Text_Grid
				{
					idc = 1032;
					text = "ELEV";
					y = "7.5 * 		(0.025 * SafezoneH)";
				};
				class Text_TargetDistance: Text_Grid
				{
					idc = 1036;
					text = "RNG-R";
					y = "24.2 * 		(0.025 * SafezoneH)";
				};
				class Text_TargetDistanceMult: CA_Grid
				{
					idc = 1037;
					text = "x100";
					y = "24.2 * 		(0.025 * SafezoneH)";
				};
				class Text_TargetGrid: Text_Grid
				{
					idc = 1035;
					text = "GRID";
					y = "23.3 * 		(0.025 * SafezoneH)";
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
	};
	class RscOptics_VTOL_02_gunner: RscUnitInfo
	{
		controls[] = {"CA_Zeroing", "CA_IGUI_elements_group"};
		idd = 300;
		class CA_IGUI_elements_group: RscControlsGroup
		{
			h = "40 * 		(0.025 * SafezoneH)";
			idc = 170;
			w = "53.5 * 		(0.01875 * SafezoneH)";
			x = "0 * 		(0.01875 * SafezoneH) + 		(SafezoneX + ((SafezoneW - SafezoneH) / 2))";
			y = "0 * 		(0.025 * SafezoneH) + 		(SafezoneY)";
			class controls
			{
				class CA_Distance: RscText
				{
					colorText[] = {0.706, 0.0745, 0.0196, 1};
					font = "EtelkaMonospacePro";
					h = "1.2 * 		(0.025 * SafezoneH)";
					idc = 198;
					shadow = 0;
					sizeEx = "0.024*SafezoneH";
					style = 2;
					text = "2456";
					w = "4 * 		(0.01875 * SafezoneH)";
					x = "24.7 * 		(0.01875 * SafezoneH)";
					y = "29.3 * 		(0.025 * SafezoneH)";
				};
				class CA_Laser: RscText
				{
					colorText[] = {0.706, 0.0745, 0.0196, 1};
					font = "EtelkaMonospacePro";
					h = "1.5 * 		(0.025 * SafezoneH)";
					idc = 158;
					shadow = 0;
					sizeEx = "0.038*SafezoneH";
					style = "0x30 + 0x800";
					text = "\A3\ui_f\data\igui\rscingameui\rscoptics\laser_designator_iconLaserOn.paa";
					w = "3.5 * 		(0.01875 * SafezoneH)";
					x = "34.2 * 		(0.01875 * SafezoneH)";
					y = "10 * 		(0.025 * SafezoneH)";
				};
				class CA_VisionMode: RscText
				{
					colorText[] = {0.706, 0.0745, 0.0196, 1};
					font = "EtelkaMonospacePro";
					h = "1.2 * 		(0.025 * SafezoneH)";
					idc = 179;
					shadow = 0;
					sizeEx = "0.024*SafezoneH";
					style = 0;
					text = "VIS";
					w = "4 * 		(0.01875 * SafezoneH)";
					x = "14.5 * 		(0.01875 * SafezoneH)";
					y = "18.8 * 		(0.025 * SafezoneH)";
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
	};
	class RscOpticsRangeFinderMRAWS: RscUnitInfo
	{
		controls[] = {"CA_IGUI_elements_group"};
		idd = 300;
		class CA_IGUI_elements_group: RscControlsGroup
		{
			h = "40 * 		(0.025 * SafezoneH)";
			idc = 170;
			w = "53.5 * 		(0.01875 * SafezoneH)";
			x = "0 * 		(0.01875 * SafezoneH) + 		(SafezoneX + ((SafezoneW - SafezoneH) / 2))";
			y = "0 * 		(0.025 * SafezoneH) + 		(SafezoneY)";
			class controls
			{
				class CA_Distance: RscText
				{
					colorText[] = {0.706, 0.0745, 0.0196, 1};
					font = "PuristaMedium";
					h = "1.2 * 		(0.025 * SafezoneH)";
					idc = 198;
					shadow = 0;
					sizeEx = "0.038*SafezoneH";
					style = 2;
					w = "4 * 		(0.01875 * SafezoneH)";
					x = "24.55 * 		(0.01875 * SafezoneH)";
					y = "33.5 * 		(0.025 * SafezoneH)";
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
	};
	class RscOpticsRangeFinderNLAW: RscUnitInfo
	{
		controls[] = {"CA_IGUI_elements_group"};
		idd = 300;
		class CA_IGUI_elements_group: RscControlsGroup
		{
			h = "40 * 		(0.025 * SafezoneH)";
			idc = 170;
			w = "53.5 * 		(0.01875 * SafezoneH)";
			x = "0 * 		(0.01875 * SafezoneH) + 		(SafezoneX + ((SafezoneW - SafezoneH) / 2))";
			y = "0 * 		(0.025 * SafezoneH) + 		(SafezoneY)";
			class controls
			{
				class CA_Distance: RscText
				{
					colorText[] = {0.988, 0.239, 0.188, 0.67};
					font = "EtelkaMonospacePro";
					h = "2 * 		(0.025 * SafezoneH)";
					idc = 198;
					shadow = 0;
					sizeEx = "0.045*SafezoneH";
					style = 2;
					w = "6 * 		(0.01875 * SafezoneH)";
					x = "23.6 * 		(0.01875 * SafezoneH)";
					y = "32 * 		(0.025 * SafezoneH)";
				};
				class CA_MaxRangeERR: CA_Distance
				{
					idc = 202;
					text = "FAR";
					y = "34 * 		(0.025 * SafezoneH)";
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
	};
	class RscOpticsRangeFinderVorona: RscUnitInfo
	{
		controls[] = {"CA_IGUI_elements_group", "CA_WFOV_mode_group", "CA_NFOV_mode_group"};
		idd = 300;
		class CA_IGUI_elements_group: RscControlsGroup
		{
			h = "40 * 		(0.025 * SafezoneH)";
			idc = 170;
			w = "53.5 * 		(0.01875 * SafezoneH)";
			x = "0 * 		(0.01875 * SafezoneH) + 		(SafezoneX + ((SafezoneW - SafezoneH) / 2))";
			y = "0 * 		(0.025 * SafezoneH) + 		(SafezoneY)";
			class controls
			{
				class CA_Distance: RscText
				{
					colorText[] = {0.706, 0.0745, 0.0196, 1};
					font = "RobotoCondensedLight";
					h = "1.2 * 		(0.025 * SafezoneH)";
					idc = 198;
					shadow = 0;
					sizeEx = "0.038*SafezoneH";
					style = 2;
					w = "4 * 		(0.01875 * SafezoneH)";
					x = "24.55 * 		(0.01875 * SafezoneH)";
					y = "33.6 * 		(0.025 * SafezoneH)";
				};
				class CA_FlirMode: RscText
				{
					colorText[] = {0.706, 0.0745, 0.0196, 1};
					font = "RobotoCondensedLight";
					h = "1.2 * 		(0.025 * SafezoneH)";
					idc = 153;
					shadow = 0;
					sizeEx = "0.038*SafezoneH";
					style = 1;
					text = "BHOT";
					w = "4 * 		(0.01875 * SafezoneH)";
					x = "13.05 * 		(0.01875 * SafezoneH)";
					y = "9.2 * 		(0.025 * SafezoneH)";
				};
				class CA_VisionMode: RscText
				{
					colorText[] = {0.706, 0.0745, 0.0196, 1};
					font = "RobotoCondensedLight";
					h = "1.2 * 		(0.025 * SafezoneH)";
					idc = 152;
					shadow = 0;
					sizeEx = "0.038*SafezoneH";
					style = 0;
					text = "FLIR";
					w = "4 * 		(0.01875 * SafezoneH)";
					x = "9.55 * 		(0.01875 * SafezoneH)";
					y = "9.2 * 		(0.025 * SafezoneH)";
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
		class CA_NFOV_mode_group: RscControlsGroup
		{
			h = "40 * 		(0.025 * SafezoneH)";
			idc = 162;
			w = "53.5 * 		(0.01875 * SafezoneH)";
			x = "0 * 		(0.01875 * SafezoneH) + 		(SafezoneX + ((SafezoneW - SafezoneH) / 2))";
			y = "0 * 		(0.025 * SafezoneH) + 		(SafezoneY)";
			class controls
			{
				class CA_FOVModeNFOV: RscText
				{
					colorText[] = {0.706, 0.0745, 0.0196, 1};
					font = "RobotoCondensedLight";
					h = "1.2 * 		(0.025 * SafezoneH)";
					idc = 1002;
					shadow = 0;
					sizeEx = "0.038*SafezoneH";
					style = 0;
					text = "NFOV";
					w = "4 * 		(0.01875 * SafezoneH)";
					x = "36.5 * 		(0.01875 * SafezoneH)";
					y = "9.2 * 		(0.025 * SafezoneH)";
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
		class CA_WFOV_mode_group: RscControlsGroup
		{
			h = "40 * 		(0.025 * SafezoneH)";
			idc = 163;
			w = "53.5 * 		(0.01875 * SafezoneH)";
			x = "0 * 		(0.01875 * SafezoneH) + 		(SafezoneX + ((SafezoneW - SafezoneH) / 2))";
			y = "0 * 		(0.025 * SafezoneH) + 		(SafezoneY)";
			class controls
			{
				class CA_FOVModeWFOV: RscText
				{
					colorText[] = {0.706, 0.0745, 0.0196, 1};
					font = "RobotoCondensedLight";
					h = "1.2 * 		(0.025 * SafezoneH)";
					idc = 1001;
					shadow = 0;
					sizeEx = "0.038*SafezoneH";
					style = 1;
					text = "WFOV";
					w = "4 * 		(0.01875 * SafezoneH)";
					x = "39.7 * 		(0.01875 * SafezoneH)";
					y = "9.2 * 		(0.025 * SafezoneH)";
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
	};
	class RscStaminaBar
	{
		controls[] = {"StaminaBar"};
		idd = 305;
		onLoad = "[""onLoad"",_this,""RscStaminaBar"",'IGUI'] call 	(uinamespace getvariable 'BIS_fnc_initDisplay')";
		onUnload = "[""onUnload"",_this,""RscStaminaBar"",'IGUI'] call 	(uinamespace getvariable 'BIS_fnc_initDisplay')";
		scriptName = "RscStaminaBar";
		scriptPath = "IGUI";
		class StaminaBar: RscPicture
		{
			h = "1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = 193;
			w = "10 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			x = "(profilenamespace getvariable [""IGUI_GRID_STAMINA_X"",				((safezoneX + safezoneW) - 		(10 * 			(			((safezoneW / safezoneH) min 1.2) / 40)) - 4.3 * 			(			((safezoneW / safezoneH) min 1.2) / 40))])";
			y = "(profilenamespace getvariable [""IGUI_GRID_STAMINA_Y"",		(safezoneY + 4.05 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25))])";
		};
	};
	class RscStanceInfo
	{
		controls[] = {"StanceIndicatorBackground", "StanceIndicator"};
		idd = 303;
		onLoad = "[""onLoad"",_this,""RscStanceInfo"",'IGUI'] call 	(uinamespace getvariable 'BIS_fnc_initDisplay')";
		onUnload = "[""onUnload"",_this,""RscStanceInfo"",'IGUI'] call 	(uinamespace getvariable 'BIS_fnc_initDisplay')";
		scriptName = "RscStanceInfo";
		scriptPath = "IGUI";
		class StanceIndicator: RscPictureKeepAspect
		{
			h = "(3.7 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25))";
			idc = 188;
			text = "\A3\Ui_f\data\IGUI\RscIngameUI\RscUnitInfo\SI_stand_ca.paa";
			w = "(3.7 * 			(			((safezoneW / safezoneH) min 1.2) / 40))";
			x = "(profilenamespace getvariable [""IGUI_GRID_STANCE_X"",		((safezoneX + safezoneW) - 		(3.7 * 			(			((safezoneW / safezoneH) min 1.2) / 40)) - 0.5 * 			(			((safezoneW / safezoneH) min 1.2) / 40))])";
			y = "(profilenamespace getvariable [""IGUI_GRID_STANCE_Y"",		(safezoneY + 0.5 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25))])";
		};
		class StanceIndicatorBackground: RscPicture
		{
			colorText[] = {"(profilenamespace getvariable ['IGUI_BCG_RGB_R',0])", "(profilenamespace getvariable ['IGUI_BCG_RGB_G',1])", "(profilenamespace getvariable ['IGUI_BCG_RGB_B',1])", "(profilenamespace getvariable ['IGUI_BCG_RGB_A',0.8])"};
			h = "(3.7 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25))";
			idc = 1201;
			text = "\A3\Ui_f\data\IGUI\RscIngameUI\RscUnitInfo\gradient_ca.paa";
			w = "(3.7 * 			(			((safezoneW / safezoneH) min 1.2) / 40))";
			x = "(profilenamespace getvariable [""IGUI_GRID_STANCE_X"",		((safezoneX + safezoneW) - 		(3.7 * 			(			((safezoneW / safezoneH) min 1.2) / 40)) - 0.5 * 			(			((safezoneW / safezoneH) min 1.2) / 40))])";
			y = "(profilenamespace getvariable [""IGUI_GRID_STANCE_Y"",		(safezoneY + 0.5 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25))])";
		};
	};
	class RscTaskHint
	{
		idd = 302;
		movingEnable = 0;
		class Controls
		{
			class Hint: RscStructuredText
			{
				colorBackground[] = {0, 0, 0, 0};
				colorText[] = {1, 1, 1, 1};
				font = "RobotoCondensed";
				h = "1 * 								(		(		((safezoneW / safezoneH) min 1.2) / 1.2) / 20)";
				idc = 104;
				lineSpacing = 1;
				size = "(			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1)";
				sizeEx = "(			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1)";
				style = 16;
				text = "ERROR - replace";
				w = "8 * 								(		((safezoneW / safezoneH) min 1.2) / 32)";
				x = "1.5 * 								(		((safezoneW / safezoneH) min 1.2) / 32) + 				(10 * 						(		((safezoneW / safezoneH) min 1.2) / 32) + 			(safezoneX + (safezoneW - 				((safezoneW / safezoneH) min 1.2)) / 2))";
				y = "0.5 * 								(		(		((safezoneW / safezoneH) min 1.2) / 1.2) / 20) + 				(1 * 						(		(		((safezoneW / safezoneH) min 1.2) / 1.2) / 20) + safezoneY)";
				class Attributes: Attributes
				{
					align = "left";
					color = "#ffffff";
					shadow = 1;
				};
			};
		};
		class controlsBackground
		{
			class Background: RscText
			{
				colorBackground[] = {"(profilenamespace getvariable ['IGUI_BCG_RGB_R',0])", "(profilenamespace getvariable ['IGUI_BCG_RGB_G',1])", "(profilenamespace getvariable ['IGUI_BCG_RGB_B',1])", "(profilenamespace getvariable ['IGUI_BCG_RGB_A',0.8])"};
				colorText[] = {0, 0, 0, 0};
				fixedWidth = 0;
				font = "TahomaB";
				h = "2 * 								(		(		((safezoneW / safezoneH) min 1.2) / 1.2) / 20)";
				idc = 103;
				shadow = 0;
				sizeEx = 0;
				style = 128;
				text = "";
				type = 0;
				w = "10 * 								(		((safezoneW / safezoneH) min 1.2) / 32)";
				x = "(10 * 						(		((safezoneW / safezoneH) min 1.2) / 32) + 			(safezoneX + (safezoneW - 				((safezoneW / safezoneH) min 1.2)) / 2))";
				y = "(1 * 						(		(		((safezoneW / safezoneH) min 1.2) / 1.2) / 20) + safezoneY)";
			};
			class Warning: RscText
			{
				colorBackground[] = {"(profilenamespace getvariable ['IGUI_WARNING_RGB_R',0.8])", "(profilenamespace getvariable ['IGUI_WARNING_RGB_G',0.5])", "(profilenamespace getvariable ['IGUI_WARNING_RGB_B',0.0])", 0.7};
				colorText[] = {1, 1, 1, 1};
				h = "1.5 * 								(		(		((safezoneW / safezoneH) min 1.2) / 1.2) / 20)";
				sizeEx = "0.6 * 								(		(		((safezoneW / safezoneH) min 1.2) / 1.2) / 20)";
				style = "0x10 + 0x200";
				text = "Designers, taskHint is obsolete, use new notifications:\nhttps://community.bistudio.com/wiki/Notification";
				w = "14 * 								(		((safezoneW / safezoneH) min 1.2) / 32)";
				x = "(10 * 						(		((safezoneW / safezoneH) min 1.2) / 32) + 			(safezoneX + (safezoneW - 				((safezoneW / safezoneH) min 1.2)) / 2)) - 2 * 								(		((safezoneW / safezoneH) min 1.2) / 32)";
				y = "(1 * 						(		(		((safezoneW / safezoneH) min 1.2) / 1.2) / 20) + safezoneY) + 2.1 * 								(		(		((safezoneW / safezoneH) min 1.2) / 1.2) / 20)";
			};
		};
		class TaskIcon
		{
			h = "1 * 								(		(		((safezoneW / safezoneH) min 1.2) / 1.2) / 20)";
			w = "1 * 								(		((safezoneW / safezoneH) min 1.2) / 32)";
			x = "0.5 * 								(		((safezoneW / safezoneH) min 1.2) / 32) + 				(10 * 						(		((safezoneW / safezoneH) min 1.2) / 32) + 			(safezoneX + (safezoneW - 				((safezoneW / safezoneH) min 1.2)) / 2))";
			y = "0.5 * 								(		(		((safezoneW / safezoneH) min 1.2) / 1.2) / 20) + 				(1 * 						(		(		((safezoneW / safezoneH) min 1.2) / 1.2) / 20) + safezoneY)";
		};
	};
	class RscTaskOverview
	{
		closeOnMissionEnd = 1;
		enableDisplay = 1;
		enableSimulation = 1;
		idd = 174;
		maxW = "(		(15 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)) + 		(0.7 * 			(			((safezoneW / safezoneH) min 1.2) / 40)))";
		minW = "(		(15 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)) + 		(0.7 * 			(			((safezoneW / safezoneH) min 1.2) / 40))) / 4";
		paddingX = "(0.3 * 			(			((safezoneW / safezoneH) min 1.2) / 40))";
		paddingY = "(0.1 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25))";
		showMaxDescLines = 5;
		class controls
		{
			class TaskOverviewAssigned: RscControlsGroupNoScrollbars
			{
				h = "(		(		(0.7 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)) + 2 * 		(0.2 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25))) + 		(0.6 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)))";
				idc = 1040;
				show = 0;
				w = "(		(15 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)) + 		(0.7 * 			(			((safezoneW / safezoneH) min 1.2) / 40)))";
				x = "safezoneX + 0.5 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
				y = "safezoneY + 0.5 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				class controls
				{
					class Background: RscPicture
					{
						h = "(		(		(0.7 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)) + 2 * 		(0.2 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25))) + 		(0.6 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)))";
						text = "#(argb,8,8,3)color(0,0,0,0.50)";
						w = "(		(15 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)) + 		(0.7 * 			(			((safezoneW / safezoneH) min 1.2) / 40)))";
						x = 0;
						y = 0;
					};
					class Description: RscText
					{
						font = "RobotoCondensed";
						h = "(		(		(0.7 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)) + 2 * 		(0.2 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25))) + 		(0.6 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25))) - 		(0.6 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25))";
						idc = 1044;
						shadow = 0;
						sizeEx = "(1.3 * 		(0.7 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)))";
						text = "<TaskDescription>";
						w = "(		(15 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)) + 		(0.7 * 			(			((safezoneW / safezoneH) min 1.2) / 40)))";
						x = 0;
						y = "(0.6 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25))";
					};
					class HeaderBackground: RscPicture
					{
						h = "(0.6 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25))";
						text = "#(argb,8,8,3)color(0,0,0,1)";
						w = "(		(15 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)) + 		(0.7 * 			(			((safezoneW / safezoneH) min 1.2) / 40)))";
						x = 0;
						y = 0;
					};
					class HeaderText: RscText
					{
						colorBackground[] = {0, 0, 0, 0};
						colorText[] = {1, 1, 1, 1};
						font = "RobotoCondensed";
						h = "(0.6 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25))";
						shadow = 0;
						sizeEx = "(0.6 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25))";
						style = "0x10 + 0x200";
						text = "ASSIGNED TASK";
						w = "(		(15 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)) + 		(0.7 * 			(			((safezoneW / safezoneH) min 1.2) / 40)))";
						x = 0;
						y = 0;
					};
					class Icon: RscPicture
					{
						colorText[] = {1, 0.72, 0.3, 1};
						h = "(0.7 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25))";
						idc = 1043;
						shadow = 0;
						text = "\a3\ui_f\data\igui\cfg\simpletasks\types\defend_ca.paa";
						w = "(0.7 * 			(			((safezoneW / safezoneH) min 1.2) / 40))";
						x = "(0.2 * 			(			((safezoneW / safezoneH) min 1.2) / 40))";
						y = "(0.2 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)) + 		(0.6 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25))";
					};
					class Title: RscText
					{
						font = "RobotoCondensed";
						h = "(		(0.7 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)) + 2 * 		(0.2 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)))";
						idc = 1042;
						shadow = 0;
						sizeEx = "(1.3 * 		(0.7 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)))";
						text = "<TaskTitle>";
						w = "(15 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25))";
						x = "(0.7 * 			(			((safezoneW / safezoneH) min 1.2) / 40)) + 		(0.2 * 			(			((safezoneW / safezoneH) min 1.2) / 40))";
						y = "(0.6 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25))";
					};
				};
			};
			class TaskOverviewUnassigned: TaskOverviewAssigned
			{
				idc = 1041;
				show = 0;
				class controls
				{
					class HeaderBackground: RscPicture
					{
						h = "(0.6 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25))";
						text = "#(argb,8,8,3)color(0,0,0,1)";
						w = "(		(15 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)) + 		(0.7 * 			(			((safezoneW / safezoneH) min 1.2) / 40)))";
						x = 0;
						y = 0;
					};
					class HeaderText: RscText
					{
						colorBackground[] = {0, 0, 0, 0};
						colorText[] = {0.7, 0.7, 0.7, 1};
						font = "RobotoCondensed";
						h = "(0.6 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25))";
						shadow = 0;
						sizeEx = "(0.6 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25))";
						style = "0x10 + 0x200";
						text = "NO TASK ASSIGNED";
						w = "(		(15 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)) + 		(0.7 * 			(			((safezoneW / safezoneH) min 1.2) / 40)))";
						x = 0;
						y = 0;
					};
				};
			};
		};
	};
	class RscUnitInfo
	{
		controls[] = {"WeaponInfoControlsGroupRight", "CA_BackgroundVehicle", "CA_BackgroundVehicleTitle", "CA_BackgroundVehicleTitleDark", "CA_BackgroundFuel", "CA_Vehicle", "CA_VehicleRole", "CA_HitZones", "CA_VehicleTogglesBackground", "CA_VehicleToggles", "CA_SpeedBackground", "CA_SpeedUnits", "CA_Speed", "CA_ValueFuel"};
		idd = 300;
		movingEnable = 0;
		onLoad = "[""onLoad"",_this,""RscUnitInfo"",'IGUI'] call 	(uinamespace getvariable 'BIS_fnc_initDisplay')";
		onUnload = "[""onUnload"",_this,""RscUnitInfo"",'IGUI'] call 	(uinamespace getvariable 'BIS_fnc_initDisplay')";
		scriptName = "RscUnitInfo";
		scriptPath = "IGUI";
		updateHeightByCrew = 0;
		updateWidthByCrew = 0;
		updateWidthByWeapon = 0;
		class Alt: RscIGText
		{
			idc = 122;
			style = "0x01+0x100";
			text = "ERROR - replace";
			w = 0.16;
			x = 0.16;
			y = 0.145;
		};
		class Ammo: RscIGText
		{
			idc = 119;
			style = "0x01 + 0x100";
			text = "ERROR - replace";
			w = 0.15;
			x = 0.17;
			y = 0.19;
		};
		class AmmoCount: RscIGText
		{
			idc = 184;
			style = "0x01 + 0x100";
			text = "ERROR - replace";
			w = 0.15;
			x = 0.32;
			y = 0.19;
		};
		class Background: RscText
		{
			colorBackground[] = {0.2, 0.15, 0.1, 0.8};
			colorText[] = {0, 0, 0, 0};
			fixedWidth = 0;
			font = "TahomaB";
			h = 0.09;
			idc = 124;
			sizeEx = 0;
			style = 128;
			text = "";
			w = 0.33;
			x = 0;
			y = 0.138;
		};
		class Background2: RscText
		{
			colorBackground[] = {0.2, 0.15, 0.1, 0.8};
			colorText[] = {0, 0, 0, 0};
			fixedWidth = 0;
			font = "TahomaB";
			h = 0.09;
			idc = 124;
			sizeEx = 0;
			style = 128;
			text = "";
			w = 0.33;
			x = 0.67;
			y = 0.138;
		};
		class CA_Alt: RscText
		{
			colorText[] = {"(profilenamespace getvariable ['IGUI_TEXT_RGB_R',0])", "(profilenamespace getvariable ['IGUI_TEXT_RGB_G',1])", "(profilenamespace getvariable ['IGUI_TEXT_RGB_B',1])", "(profilenamespace getvariable ['IGUI_TEXT_RGB_A',0.8])"};
			h = "1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = 122;
			sizeEx = "0.8 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			style = 1;
			text = "9999";
			w = "2 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			x = "6.3 * 					(			((safezoneW / safezoneH) min 1.2) / 40) + 		(profilenamespace getvariable [""IGUI_GRID_VEHICLE_X"",		(safezoneX + 0.5 * 			(			((safezoneW / safezoneH) min 1.2) / 40))])";
			y = "2.3 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 		(profilenamespace getvariable [""IGUI_GRID_VEHICLE_Y"",		(safezoneY + 0.5 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25))])";
		};
		class CA_Alt_Freefall: RscText
		{
			colorText[] = {"(profilenamespace getvariable ['IGUI_TEXT_RGB_R',0])", "(profilenamespace getvariable ['IGUI_TEXT_RGB_G',1])", "(profilenamespace getvariable ['IGUI_TEXT_RGB_B',1])", "(profilenamespace getvariable ['IGUI_TEXT_RGB_A',0.8])"};
			h = "1 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = 382;
			shadow = 0;
			sizeEx = "0.8 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			w = "8 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
			x = "safezoneW/2 - (3.5 * 			(			((safezoneW / safezoneH) min 1.2) / 40)) + safezoneX";
			y = "0.5 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + safezoneY";
		};
		class CA_AltBackground: RscText
		{
			colorBackground[] = {1, 1, 1, 0.1};
			colorText[] = {0, 0, 0, 1};
			font = "PuristaSemibold";
			h = "0.9 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = 1014;
			shadow = 0;
			sizeEx = "0.5 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			w = "4.4 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			x = "5.5 * 					(			((safezoneW / safezoneH) min 1.2) / 40) + 		(profilenamespace getvariable [""IGUI_GRID_VEHICLE_X"",		(safezoneX + 0.5 * 			(			((safezoneW / safezoneH) min 1.2) / 40))])";
			y = "2.3 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 		(profilenamespace getvariable [""IGUI_GRID_VEHICLE_Y"",		(safezoneY + 0.5 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25))])";
		};
		class CA_AltUnits: RscText
		{
			colorText[] = {"(profilenamespace getvariable ['IGUI_TEXT_RGB_R',0])", "(profilenamespace getvariable ['IGUI_TEXT_RGB_G',1])", "(profilenamespace getvariable ['IGUI_TEXT_RGB_B',1])", "(profilenamespace getvariable ['IGUI_TEXT_RGB_A',0.8])"};
			h = "1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = 1005;
			sizeEx = "0.8 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			text = "m";
			w = "2 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			x = "8 * 					(			((safezoneW / safezoneH) min 1.2) / 40) + 		(profilenamespace getvariable [""IGUI_GRID_VEHICLE_X"",		(safezoneX + 0.5 * 			(			((safezoneW / safezoneH) min 1.2) / 40))])";
			y = "2.3 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 		(profilenamespace getvariable [""IGUI_GRID_VEHICLE_Y"",		(safezoneY + 0.5 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25))])";
		};
		class CA_BackgroundFuel: RscPicture
		{
			colorText[] = {"(profilenamespace getvariable ['IGUI_BCG_RGB_R',0])", "(profilenamespace getvariable ['IGUI_BCG_RGB_G',1])", "(profilenamespace getvariable ['IGUI_BCG_RGB_B',1])", "(profilenamespace getvariable ['IGUI_BCG_RGB_A',0.8])"};
			h = "0.2 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = 1202;
			text = "\A3\ui_f\data\igui\rscingameui\rscunitinfo\fuelBackground_ca.paa";
			w = "10 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			x = "0 * 					(			((safezoneW / safezoneH) min 1.2) / 40) + 		(profilenamespace getvariable [""IGUI_GRID_VEHICLE_X"",		(safezoneX + 0.5 * 			(			((safezoneW / safezoneH) min 1.2) / 40))])";
			y = "1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 		(profilenamespace getvariable [""IGUI_GRID_VEHICLE_Y"",		(safezoneY + 0.5 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25))])";
		};
		class CA_BackgroundVehicle: RscPicture
		{
			colorText[] = {"(profilenamespace getvariable ['IGUI_BCG_RGB_R',0])", "(profilenamespace getvariable ['IGUI_BCG_RGB_G',1])", "(profilenamespace getvariable ['IGUI_BCG_RGB_B',1])", "(profilenamespace getvariable ['IGUI_BCG_RGB_A',0.8])"};
			h = "2.3 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = 1200;
			text = "\A3\ui_f\data\igui\rscingameui\rscunitinfo\gradient_ca.paa";
			w = "10 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			x = "0 * 					(			((safezoneW / safezoneH) min 1.2) / 40) + 		(profilenamespace getvariable [""IGUI_GRID_VEHICLE_X"",		(safezoneX + 0.5 * 			(			((safezoneW / safezoneH) min 1.2) / 40))])";
			y = "1.2 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 		(profilenamespace getvariable [""IGUI_GRID_VEHICLE_Y"",		(safezoneY + 0.5 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25))])";
		};
		class CA_BackgroundVehicleTitle: RscText
		{
			colorBackground[] = {"(profilenamespace getvariable ['IGUI_BCG_RGB_R',0])", "(profilenamespace getvariable ['IGUI_BCG_RGB_G',1])", "(profilenamespace getvariable ['IGUI_BCG_RGB_B',1])", "(profilenamespace getvariable ['IGUI_BCG_RGB_A',0.8])"};
			h = "1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = 1000;
			sizeEx = "0.8 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			w = "10 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			x = "0 * 					(			((safezoneW / safezoneH) min 1.2) / 40) + 		(profilenamespace getvariable [""IGUI_GRID_VEHICLE_X"",		(safezoneX + 0.5 * 			(			((safezoneW / safezoneH) min 1.2) / 40))])";
			y = "0 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 		(profilenamespace getvariable [""IGUI_GRID_VEHICLE_Y"",		(safezoneY + 0.5 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25))])";
		};
		class CA_BackgroundVehicleTitleDark: RscText
		{
			colorBackground[] = {0, 0, 0, 0.1};
			h = "1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = 1013;
			sizeEx = "0.8 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			w = "10 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			x = "0 * 					(			((safezoneW / safezoneH) min 1.2) / 40) + 		(profilenamespace getvariable [""IGUI_GRID_VEHICLE_X"",		(safezoneX + 0.5 * 			(			((safezoneW / safezoneH) min 1.2) / 40))])";
			y = "0 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 		(profilenamespace getvariable [""IGUI_GRID_VEHICLE_Y"",		(safezoneY + 0.5 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25))])";
		};
		class CA_Depth: RscText
		{
			colorText[] = {"(profilenamespace getvariable ['IGUI_TEXT_RGB_R',0])", "(profilenamespace getvariable ['IGUI_TEXT_RGB_G',1])", "(profilenamespace getvariable ['IGUI_TEXT_RGB_B',1])", "(profilenamespace getvariable ['IGUI_TEXT_RGB_A',0.8])"};
			h = "1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = 186;
			sizeEx = "0.8 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			style = 1;
			text = "9999";
			w = "2 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			x = "6.3 * 					(			((safezoneW / safezoneH) min 1.2) / 40) + 		(profilenamespace getvariable [""IGUI_GRID_VEHICLE_X"",		(safezoneX + 0.5 * 			(			((safezoneW / safezoneH) min 1.2) / 40))])";
			y = "2.3 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 		(profilenamespace getvariable [""IGUI_GRID_VEHICLE_Y"",		(safezoneY + 0.5 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25))])";
		};
		class CA_HitZones: RscHitZones
		{
			h = "1.9 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = 111;
			w = "5.3 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			x = "0.1 * 					(			((safezoneW / safezoneH) min 1.2) / 40) + 		(profilenamespace getvariable [""IGUI_GRID_VEHICLE_X"",		(safezoneX + 0.5 * 			(			((safezoneW / safezoneH) min 1.2) / 40))])";
			xCount = 3;
			xSpace = "0.1 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			y = "1.3 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 		(profilenamespace getvariable [""IGUI_GRID_VEHICLE_Y"",		(safezoneY + 0.5 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25))])";
			yCount = 2;
			ySpace = "0.1 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
		};
		class CA_Mode: RscText
		{
			colorText[] = {"(profilenamespace getvariable ['IGUI_TEXT_RGB_R',0])", "(profilenamespace getvariable ['IGUI_TEXT_RGB_G',1])", "(profilenamespace getvariable ['IGUI_TEXT_RGB_B',1])", "(profilenamespace getvariable ['IGUI_TEXT_RGB_A',0.8])"};
			h = "1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = 149;
			sizeEx = "0.8 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			w = "4.5 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			x = "3.8 * 					(			((safezoneW / safezoneH) min 1.2) / 40) + 		(profilenamespace getvariable [""IGUI_GRID_WEAPON_X"",		((safezoneX + safezoneW) - 		(10 * 			(			((safezoneW / safezoneH) min 1.2) / 40)) - 4.3 * 			(			((safezoneW / safezoneH) min 1.2) / 40))])";
			y = "2.5 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 		(profilenamespace getvariable [""IGUI_GRID_WEAPON_Y"",		(safezoneY + 0.5 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25))])";
		};
		class CA_Radar: RscControlsGroupNoScrollbars
		{
			h = "5.6 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = 2301;
			w = "5.6 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			x = "0 * 					(			((safezoneW / safezoneH) min 1.2) / 40) + 		(profilenamespace getvariable [""IGUI_GRID_RADAR_X"",		(safezoneX + safezoneW / 2 - 2.8 * 			(			((safezoneW / safezoneH) min 1.2) / 40))])";
			y = "0 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 		(profilenamespace getvariable [""IGUI_GRID_RADAR_Y"",		(safezoneY + 0.5 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25))])";
			class controls
			{
				class CA_Heading: RscText
				{
					colorText[] = {"(profilenamespace getvariable ['IGUI_TEXT_RGB_R',0])", "(profilenamespace getvariable ['IGUI_TEXT_RGB_G',1])", "(profilenamespace getvariable ['IGUI_TEXT_RGB_B',1])", "(profilenamespace getvariable ['IGUI_TEXT_RGB_A',0.8])"};
					h = "1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					idc = 148;
					sizeEx = "0.8 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					style = 2;
					text = " 359";
					w = "2 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					x = "1.8 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					y = "4.1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				};
				class CA_RadarBackground: RscPicture
				{
					colorText[] = {"(profilenamespace getvariable ['IGUI_BCG_RGB_R',0])", "(profilenamespace getvariable ['IGUI_BCG_RGB_G',1])", "(profilenamespace getvariable ['IGUI_BCG_RGB_B',1])", "(profilenamespace getvariable ['IGUI_BCG_RGB_A',0.8])"};
					h = "5.6 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					idc = 1200;
					text = "A3\Ui_f\data\igui\cfg\radar\radarBackground_ca.paa";
					w = "5.6 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					x = "0 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					y = "0 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				};
				class CA_RadarIcon: RscPicture
				{
					colorText[] = {"(profilenamespace getvariable ['IGUI_TEXT_RGB_R',0])", "(profilenamespace getvariable ['IGUI_TEXT_RGB_G',1])", "(profilenamespace getvariable ['IGUI_TEXT_RGB_B',1])", "(profilenamespace getvariable ['IGUI_TEXT_RGB_A',0.8])"};
					h = "1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					idc = 250;
					w = "1 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					x = "2.3 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					y = "2.3 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				};
			};
		};
		class CA_Speed: RscText
		{
			colorText[] = {"(profilenamespace getvariable ['IGUI_TEXT_RGB_R',0])", "(profilenamespace getvariable ['IGUI_TEXT_RGB_G',1])", "(profilenamespace getvariable ['IGUI_TEXT_RGB_B',1])", "(profilenamespace getvariable ['IGUI_TEXT_RGB_A',0.8])"};
			h = "1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = 121;
			sizeEx = "0.8 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			style = 1;
			text = "9999";
			w = "2 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			x = "6.3 * 					(			((safezoneW / safezoneH) min 1.2) / 40) + 		(profilenamespace getvariable [""IGUI_GRID_VEHICLE_X"",		(safezoneX + 0.5 * 			(			((safezoneW / safezoneH) min 1.2) / 40))])";
			y = "1.3 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 		(profilenamespace getvariable [""IGUI_GRID_VEHICLE_Y"",		(safezoneY + 0.5 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25))])";
		};
		class CA_Speed_Freefall: RscText
		{
			colorText[] = {"(profilenamespace getvariable ['IGUI_TEXT_RGB_R',0])", "(profilenamespace getvariable ['IGUI_TEXT_RGB_G',1])", "(profilenamespace getvariable ['IGUI_TEXT_RGB_B',1])", "(profilenamespace getvariable ['IGUI_TEXT_RGB_A',0.8])"};
			h = "1 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = 380;
			shadow = 0;
			sizeEx = "0.8 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			w = "8 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
			x = "safezoneW/2 - (14.5 * 			(			((safezoneW / safezoneH) min 1.2) / 40)) + safezoneX";
			y = "0.5 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + safezoneY";
		};
		class CA_SpeedBackground: RscText
		{
			colorBackground[] = {1, 1, 1, 0.1};
			colorText[] = {0, 0, 0, 1};
			font = "PuristaSemibold";
			h = "0.9 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = 1006;
			shadow = 0;
			sizeEx = "0.5 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			w = "4.4 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			x = "5.5 * 					(			((safezoneW / safezoneH) min 1.2) / 40) + 		(profilenamespace getvariable [""IGUI_GRID_VEHICLE_X"",		(safezoneX + 0.5 * 			(			((safezoneW / safezoneH) min 1.2) / 40))])";
			y = "1.3 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 		(profilenamespace getvariable [""IGUI_GRID_VEHICLE_Y"",		(safezoneY + 0.5 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25))])";
		};
		class CA_SpeedUnits: RscText
		{
			colorText[] = {"(profilenamespace getvariable ['IGUI_TEXT_RGB_R',0])", "(profilenamespace getvariable ['IGUI_TEXT_RGB_G',1])", "(profilenamespace getvariable ['IGUI_TEXT_RGB_B',1])", "(profilenamespace getvariable ['IGUI_TEXT_RGB_A',0.8])"};
			h = "1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = 1004;
			sizeEx = "0.8 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			text = "km/h";
			w = "2 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			x = "8 * 					(			((safezoneW / safezoneH) min 1.2) / 40) + 		(profilenamespace getvariable [""IGUI_GRID_VEHICLE_X"",		(safezoneX + 0.5 * 			(			((safezoneW / safezoneH) min 1.2) / 40))])";
			y = "1.3 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 		(profilenamespace getvariable [""IGUI_GRID_VEHICLE_Y"",		(safezoneY + 0.5 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25))])";
		};
		class CA_TextFlares: RscIGUIValue
		{
			idc = 151;
			sizeEx = "(			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 0.8)";
			style = 1;
			w = "0.161*SafezoneW";
			x = "0.078  + SafeZoneX";
			y = "0.012 + SafeZoneY";
		};
		class CA_TextFlaresMode: RscIGUIText
		{
			idc = 152;
			sizeEx = "(			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 0.8)";
			style = 0;
			w = "0.161*SafezoneW";
			x = "0.078 + SafeZoneX";
			y = "0.012 + SafeZoneY";
		};
		class CA_Throttle: RscText
		{
			colorText[] = {"(profilenamespace getvariable ['IGUI_TEXT_RGB_R',0])", "(profilenamespace getvariable ['IGUI_TEXT_RGB_G',1])", "(profilenamespace getvariable ['IGUI_TEXT_RGB_B',1])", "(profilenamespace getvariable ['IGUI_TEXT_RGB_A',0.8])"};
			h = "0.95 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = 205;
			shadow = 0;
			sizeEx = "0.8 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			style = 1;
			text = "9999";
			w = "1.4 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			x = "0.0 * 					(			((safezoneW / safezoneH) min 1.2) / 40) + 		(profilenamespace getvariable [""IGUI_GRID_VEHICLE_X"",		(safezoneX + 0.5 * 			(			((safezoneW / safezoneH) min 1.2) / 40))])";
			y = "3.3 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 		(profilenamespace getvariable [""IGUI_GRID_VEHICLE_Y"",		(safezoneY + 0.5 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25))])";
		};
		class CA_ValueFuel: RscProgress
		{
			h = "0.2 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = 113;
			text = "#(argb,8,8,3)color(1,1,1,1)";
			texture = "#(argb,8,8,3)color(1,1,1,1)";
			w = "10 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			x = "0 * 					(			((safezoneW / safezoneH) min 1.2) / 40) + 		(profilenamespace getvariable [""IGUI_GRID_VEHICLE_X"",		(safezoneX + 0.5 * 			(			((safezoneW / safezoneH) min 1.2) / 40))])";
			y = "1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 		(profilenamespace getvariable [""IGUI_GRID_VEHICLE_Y"",		(safezoneY + 0.5 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25))])";
		};
		class CA_Vehicle: RscText
		{
			colorText[] = {"(profilenamespace getvariable ['IGUI_TEXT_RGB_R',0])", "(profilenamespace getvariable ['IGUI_TEXT_RGB_G',1])", "(profilenamespace getvariable ['IGUI_TEXT_RGB_B',1])", "(profilenamespace getvariable ['IGUI_TEXT_RGB_A',0.8])"};
			h = "1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = 120;
			sizeEx = "0.8 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			text = "AH-99 Blackfoot";
			w = "8.5 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			x = "0 * 					(			((safezoneW / safezoneH) min 1.2) / 40) + 		(profilenamespace getvariable [""IGUI_GRID_VEHICLE_X"",		(safezoneX + 0.5 * 			(			((safezoneW / safezoneH) min 1.2) / 40))])";
			y = "0 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 		(profilenamespace getvariable [""IGUI_GRID_VEHICLE_Y"",		(safezoneY + 0.5 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25))])";
		};
		class CA_VehicleRole: RscPicture
		{
			colorText[] = {"(profilenamespace getvariable ['IGUI_TEXT_RGB_R',0])", "(profilenamespace getvariable ['IGUI_TEXT_RGB_G',1])", "(profilenamespace getvariable ['IGUI_TEXT_RGB_B',1])", "(profilenamespace getvariable ['IGUI_TEXT_RGB_A',0.8])"};
			h = "1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = 208;
			shadow = 1;
			text = "#(argb,8,8,3)color(1,1,1,0)";
			textureCargo = "\A3\ui_f\data\igui\rscingameui\rscunitinfo\role_cargo_ca.paa";
			textureCommander = "\A3\ui_f\data\igui\rscingameui\rscunitinfo\role_commander_ca.paa";
			textureDriver = "\A3\ui_f\data\igui\rscingameui\rscunitinfo\role_driver_ca.paa";
			textureGunner = "\A3\ui_f\data\igui\rscingameui\rscunitinfo\role_gunner_ca.paa";
			w = "1 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			x = "9 * 					(			((safezoneW / safezoneH) min 1.2) / 40) + 		(profilenamespace getvariable [""IGUI_GRID_VEHICLE_X"",		(safezoneX + 0.5 * 			(			((safezoneW / safezoneH) min 1.2) / 40))])";
			y = "0 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 		(profilenamespace getvariable [""IGUI_GRID_VEHICLE_Y"",		(safezoneY + 0.5 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25))])";
		};
		class CA_VehicleToggles: RscVehicleToggles
		{
			h = "0.8 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = 112;
			w = "9.8 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			x = "0.1 * 					(			((safezoneW / safezoneH) min 1.2) / 40) + 		(profilenamespace getvariable [""IGUI_GRID_VEHICLE_X"",		(safezoneX + 0.5 * 			(			((safezoneW / safezoneH) min 1.2) / 40))])";
			y = "3.4 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 		(profilenamespace getvariable [""IGUI_GRID_VEHICLE_Y"",		(safezoneY + 0.5 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25))])";
		};
		class CA_VehicleTogglesBackground: RscText
		{
			colorBackground[] = {"(profilenamespace getvariable ['IGUI_BCG_RGB_R',0])", "(profilenamespace getvariable ['IGUI_BCG_RGB_G',1])", "(profilenamespace getvariable ['IGUI_BCG_RGB_B',1])", "(profilenamespace getvariable ['IGUI_BCG_RGB_A',0.8])"};
			h = "1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = -1;
			w = "10 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			x = "0 * 					(			((safezoneW / safezoneH) min 1.2) / 40) + 		(profilenamespace getvariable [""IGUI_GRID_VEHICLE_X"",		(safezoneX + 0.5 * 			(			((safezoneW / safezoneH) min 1.2) / 40))])";
			y = "3.3 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 		(profilenamespace getvariable [""IGUI_GRID_VEHICLE_Y"",		(safezoneY + 0.5 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25))])";
		};
		class CA_Zeroing: RscText
		{
			colorText[] = {"(profilenamespace getvariable ['IGUI_TEXT_RGB_R',0])", "(profilenamespace getvariable ['IGUI_TEXT_RGB_G',1])", "(profilenamespace getvariable ['IGUI_TEXT_RGB_B',1])", "(profilenamespace getvariable ['IGUI_TEXT_RGB_A',0.8])"};
			h = "1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = 168;
			sizeEx = "0.8 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			w = "3 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			x = "3.8 * 					(			((safezoneW / safezoneH) min 1.2) / 40) + 		(profilenamespace getvariable [""IGUI_GRID_WEAPON_X"",		((safezoneX + safezoneW) - 		(10 * 			(			((safezoneW / safezoneH) min 1.2) / 40)) - 4.3 * 			(			((safezoneW / safezoneH) min 1.2) / 40))])";
			y = "2.5 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 		(profilenamespace getvariable [""IGUI_GRID_WEAPON_Y"",		(safezoneY + 0.5 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25))])";
		};
		class Heading: RscIGText
		{
			idc = 148;
			style = "0x00	+ 0x100";
			w = 0.17;
			x = 0.017;
			y = 0.01;
		};
		class Hitzones: RscHitZones
		{
			h = 0.025;
			idc = 111;
			w = 0.165;
			x = 0.82;
			y = 0.155;
		};
		class MagCount: RscIGText
		{
			idc = 185;
			style = "0x01 + 0x100";
			text = "ERROR - replace";
			w = 0.15;
			x = 0.17;
			y = 0.19;
		};
		class Speed: RscIGText
		{
			idc = 121;
			text = "ERROR - replace";
			w = 0.2;
			x = 0.005;
			y = 0.145;
		};
		class TextArmor: RscIGText
		{
			text = "Armor";
			w = 0.19;
			x = 0.68;
			y = 0.145;
		};
		class TextFuel: RscIGText
		{
			text = "Fuel";
			w = 0.19;
			x = 0.68;
			y = 0.185;
		};
		class ValueFuel: RscIGProgress
		{
			h = 0.025;
			idc = 113;
			w = 0.165;
			x = 0.82;
			y = 0.19;
		};
		class ValueReload: RscIGProgress
		{
			h = 0.025;
			idc = 154;
			w = 0.165;
			x = 0.92;
			y = 0.19;
		};
		class Weapon: RscIGText
		{
			idc = 118;
			text = "ERROR - replace";
			w = 0.25;
			x = 0.005;
			y = 0.185;
		};
		class WeaponInfoControlsGroupLeft: RscControlsGroup
		{
			h = "6 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = 2302;
			w = "10 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			x = "0 * 					(			((safezoneW / safezoneH) min 1.2) / 40) + 		(profilenamespace getvariable [""IGUI_GRID_WEAPON_X"",		((safezoneX + safezoneW) - 		(10 * 			(			((safezoneW / safezoneH) min 1.2) / 40)) - 4.3 * 			(			((safezoneW / safezoneH) min 1.2) / 40))])";
			y = "0 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 		(profilenamespace getvariable [""IGUI_GRID_WEAPON_Y"",		(safezoneY + 0.5 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25))])";
			class controls
			{
				class CA_AmmoCount: RscText
				{
					colorText[] = {"(profilenamespace getvariable ['IGUI_TEXT_RGB_R',0])", "(profilenamespace getvariable ['IGUI_TEXT_RGB_G',1])", "(profilenamespace getvariable ['IGUI_TEXT_RGB_B',1])", "(profilenamespace getvariable ['IGUI_TEXT_RGB_A',0.8])"};
					h = "1.5 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					idc = 184;
					sizeEx = "1.5 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					style = 1;
					w = "3.5 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					x = "4.5 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					y = "1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				};
				class CA_AmmoType: RscText
				{
					colorText[] = {"(profilenamespace getvariable ['IGUI_TEXT_RGB_R',0])", "(profilenamespace getvariable ['IGUI_TEXT_RGB_G',1])", "(profilenamespace getvariable ['IGUI_TEXT_RGB_B',1])", "(profilenamespace getvariable ['IGUI_TEXT_RGB_A',0.8])"};
					h = "1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					idc = 155;
					sizeEx = "0.8 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					w = "4.5 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					x = "0 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					y = "1.5 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				};
				class CA_BackgroundWeapon: RscPicture
				{
					colorText[] = {"(profilenamespace getvariable ['IGUI_BCG_RGB_R',0])", "(profilenamespace getvariable ['IGUI_BCG_RGB_G',1])", "(profilenamespace getvariable ['IGUI_BCG_RGB_B',1])", "(profilenamespace getvariable ['IGUI_BCG_RGB_A',0.8])"};
					h = "2.5 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					idc = 1202;
					text = "\A3\ui_f\data\igui\rscingameui\rscunitinfo\gradient_ca.paa";
					w = "10 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					x = "0 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					y = "1.2 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				};
				class CA_BackgroundWeaponMode: RscPicture
				{
					colorText[] = {"(profilenamespace getvariable ['IGUI_BCG_RGB_R',0])", "(profilenamespace getvariable ['IGUI_BCG_RGB_G',1])", "(profilenamespace getvariable ['IGUI_BCG_RGB_B',1])", "(profilenamespace getvariable ['IGUI_BCG_RGB_A',0.8])"};
					h = "0.2 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					idc = 1203;
					text = "\A3\ui_f\data\igui\rscingameui\rscunitinfo\mode_background_ca.paa";
					w = "10 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					x = "0 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					y = "1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				};
				class CA_BackgroundWeaponTitle: RscText
				{
					colorBackground[] = {"(profilenamespace getvariable ['IGUI_BCG_RGB_R',0])", "(profilenamespace getvariable ['IGUI_BCG_RGB_G',1])", "(profilenamespace getvariable ['IGUI_BCG_RGB_B',1])", "(profilenamespace getvariable ['IGUI_BCG_RGB_A',0.8])"};
					h = "1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					idc = 1001;
					sizeEx = "0.8 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					w = "10 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					x = "0 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					y = "0 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				};
				class CA_BackgroundWeaponTitleDark: RscText
				{
					colorBackground[] = {0, 0, 0, 0.1};
					h = "1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					idc = 1008;
					sizeEx = "0.8 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					w = "10 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					x = "0 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					y = "0 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				};
				class CA_GrenadeCount: RscText
				{
					colorText[] = {"(profilenamespace getvariable ['IGUI_TEXT_RGB_R',0])", "(profilenamespace getvariable ['IGUI_TEXT_RGB_G',1])", "(profilenamespace getvariable ['IGUI_TEXT_RGB_B',1])", "(profilenamespace getvariable ['IGUI_TEXT_RGB_A',0.8])"};
					h = "1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					idc = 151;
					sizeEx = "0.8 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					style = 1;
					w = "2 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					x = "8 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					y = "2.5 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				};
				class CA_GrenadeType: RscText
				{
					colorText[] = {"(profilenamespace getvariable ['IGUI_TEXT_RGB_R',0])", "(profilenamespace getvariable ['IGUI_TEXT_RGB_G',1])", "(profilenamespace getvariable ['IGUI_TEXT_RGB_B',1])", "(profilenamespace getvariable ['IGUI_TEXT_RGB_A',0.8])"};
					h = "1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					idc = 152;
					sizeEx = "0.8 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					style = 2;
					w = "4.5 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					x = "3.5 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					y = "2.5 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				};
				class CA_GunnerWeapon: RscText
				{
					colorBackground[] = {"(profilenamespace getvariable ['IGUI_BCG_RGB_R',0])", "(profilenamespace getvariable ['IGUI_BCG_RGB_G',1])", "(profilenamespace getvariable ['IGUI_BCG_RGB_B',1])", "(profilenamespace getvariable ['IGUI_BCG_RGB_A',0.8])"};
					colorText[] = {"(profilenamespace getvariable ['IGUI_TEXT_RGB_R',0])", "(profilenamespace getvariable ['IGUI_TEXT_RGB_G',1])", "(profilenamespace getvariable ['IGUI_TEXT_RGB_B',1])", "(profilenamespace getvariable ['IGUI_TEXT_RGB_A',0.8])"};
					h = "1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					idc = 150;
					sizeEx = "0.8 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					style = 1;
					w = "10 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					x = "0 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					y = "4 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				};
				class CA_MagCount: RscText
				{
					colorText[] = {"(profilenamespace getvariable ['IGUI_TEXT_RGB_R',0])", "(profilenamespace getvariable ['IGUI_TEXT_RGB_G',1])", "(profilenamespace getvariable ['IGUI_TEXT_RGB_B',1])", "(profilenamespace getvariable ['IGUI_TEXT_RGB_A',0.8])"};
					h = "1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					idc = 185;
					sizeEx = "0.8 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					w = "2 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					x = "8 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					y = "1.5 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				};
				class CA_Mode: RscText
				{
					colorText[] = {"(profilenamespace getvariable ['IGUI_TEXT_RGB_R',0])", "(profilenamespace getvariable ['IGUI_TEXT_RGB_G',1])", "(profilenamespace getvariable ['IGUI_TEXT_RGB_B',1])", "(profilenamespace getvariable ['IGUI_TEXT_RGB_A',0.8])"};
					h = "1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					idc = -1;
					sizeEx = "0.8 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					w = "4.5 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					x = "-5 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					y = -1;
				};
				class CA_ModeTexture: RscPicture
				{
					colorText[] = {"(profilenamespace getvariable ['IGUI_TEXT_RGB_R',0])", "(profilenamespace getvariable ['IGUI_TEXT_RGB_G',1])", "(profilenamespace getvariable ['IGUI_TEXT_RGB_B',1])", "(profilenamespace getvariable ['IGUI_TEXT_RGB_A',0.8])"};
					h = "0.2 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					idc = 187;
					w = "10 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					x = "0 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					y = "1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				};
				class CA_ValueReload: RscIGProgress
				{
					colorBar[] = {"(profilenamespace getvariable ['IGUI_WARNING_RGB_R',0.8])", "(profilenamespace getvariable ['IGUI_WARNING_RGB_G',0.5])", "(profilenamespace getvariable ['IGUI_WARNING_RGB_B',0.0])", 1};
					colorFrame[] = {0, 0, 0, 0};
					h = "0.2 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					idc = 154;
					style = 0;
					w = "10 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					x = "0 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					y = "1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				};
				class CA_Weapon: RscText
				{
					colorText[] = {"(profilenamespace getvariable ['IGUI_TEXT_RGB_R',0])", "(profilenamespace getvariable ['IGUI_TEXT_RGB_G',1])", "(profilenamespace getvariable ['IGUI_TEXT_RGB_B',1])", "(profilenamespace getvariable ['IGUI_TEXT_RGB_A',0.8])"};
					h = "1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					idc = 118;
					sizeEx = "0.8 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					style = 1;
					w = "10 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					x = "0 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					y = "0 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				};
			};
		};
		class WeaponInfoControlsGroupRight: RscControlsGroup
		{
			h = "6 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = 2303;
			w = "10 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			x = "3.8 * 					(			((safezoneW / safezoneH) min 1.2) / 40) + 		(profilenamespace getvariable [""IGUI_GRID_WEAPON_X"",		((safezoneX + safezoneW) - 		(10 * 			(			((safezoneW / safezoneH) min 1.2) / 40)) - 4.3 * 			(			((safezoneW / safezoneH) min 1.2) / 40))])";
			y = "0 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 		(profilenamespace getvariable [""IGUI_GRID_WEAPON_Y"",		(safezoneY + 0.5 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25))])";
			class controls
			{
				class CA_AmmoCount: RscText
				{
					colorText[] = {"(profilenamespace getvariable ['IGUI_TEXT_RGB_R',0])", "(profilenamespace getvariable ['IGUI_TEXT_RGB_G',1])", "(profilenamespace getvariable ['IGUI_TEXT_RGB_B',1])", "(profilenamespace getvariable ['IGUI_TEXT_RGB_A',0.8])"};
					h = "1.5 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					idc = 184;
					sizeEx = "1.5 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					style = 1;
					w = "3.5 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					x = "4.5 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					y = "1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				};
				class CA_AmmoType: RscText
				{
					colorText[] = {"(profilenamespace getvariable ['IGUI_TEXT_RGB_R',0])", "(profilenamespace getvariable ['IGUI_TEXT_RGB_G',1])", "(profilenamespace getvariable ['IGUI_TEXT_RGB_B',1])", "(profilenamespace getvariable ['IGUI_TEXT_RGB_A',0.8])"};
					h = "1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					idc = 155;
					sizeEx = "0.8 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					w = "4.5 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					x = "0 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					y = "1.5 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				};
				class CA_BackgroundWeapon: RscPicture
				{
					colorText[] = {"(profilenamespace getvariable ['IGUI_BCG_RGB_R',0])", "(profilenamespace getvariable ['IGUI_BCG_RGB_G',1])", "(profilenamespace getvariable ['IGUI_BCG_RGB_B',1])", "(profilenamespace getvariable ['IGUI_BCG_RGB_A',0.8])"};
					h = "2.5 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					idc = 1202;
					text = "\A3\ui_f\data\igui\rscingameui\rscunitinfo\gradient_ca.paa";
					w = "10 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					x = "0 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					y = "1.2 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				};
				class CA_BackgroundWeaponMode: RscPicture
				{
					colorText[] = {"(profilenamespace getvariable ['IGUI_BCG_RGB_R',0])", "(profilenamespace getvariable ['IGUI_BCG_RGB_G',1])", "(profilenamespace getvariable ['IGUI_BCG_RGB_B',1])", "(profilenamespace getvariable ['IGUI_BCG_RGB_A',0.8])"};
					h = "0.2 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					idc = 1203;
					text = "\A3\ui_f\data\igui\rscingameui\rscunitinfo\mode_background_ca.paa";
					w = "10 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					x = "0 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					y = "1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				};
				class CA_BackgroundWeaponTitle: RscText
				{
					colorBackground[] = {"(profilenamespace getvariable ['IGUI_BCG_RGB_R',0])", "(profilenamespace getvariable ['IGUI_BCG_RGB_G',1])", "(profilenamespace getvariable ['IGUI_BCG_RGB_B',1])", "(profilenamespace getvariable ['IGUI_BCG_RGB_A',0.8])"};
					h = "1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					idc = 1001;
					sizeEx = "0.8 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					w = "10 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					x = "0 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					y = "0 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				};
				class CA_BackgroundWeaponTitleDark: RscText
				{
					colorBackground[] = {0, 0, 0, 0.1};
					h = "1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					idc = 1008;
					sizeEx = "0.8 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					w = "10 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					x = "0 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					y = "0 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				};
				class CA_GrenadeCount: RscText
				{
					colorText[] = {"(profilenamespace getvariable ['IGUI_TEXT_RGB_R',0])", "(profilenamespace getvariable ['IGUI_TEXT_RGB_G',1])", "(profilenamespace getvariable ['IGUI_TEXT_RGB_B',1])", "(profilenamespace getvariable ['IGUI_TEXT_RGB_A',0.8])"};
					h = "1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					idc = 151;
					sizeEx = "0.8 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					style = 1;
					w = "2 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					x = "8 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					y = "2.5 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				};
				class CA_GrenadeType: RscText
				{
					colorText[] = {"(profilenamespace getvariable ['IGUI_TEXT_RGB_R',0])", "(profilenamespace getvariable ['IGUI_TEXT_RGB_G',1])", "(profilenamespace getvariable ['IGUI_TEXT_RGB_B',1])", "(profilenamespace getvariable ['IGUI_TEXT_RGB_A',0.8])"};
					h = "1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					idc = 152;
					sizeEx = "0.8 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					style = 2;
					w = "4.5 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					x = "3.5 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					y = "2.5 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				};
				class CA_GunnerWeapon: RscText
				{
					colorBackground[] = {"(profilenamespace getvariable ['IGUI_BCG_RGB_R',0])", "(profilenamespace getvariable ['IGUI_BCG_RGB_G',1])", "(profilenamespace getvariable ['IGUI_BCG_RGB_B',1])", "(profilenamespace getvariable ['IGUI_BCG_RGB_A',0.8])"};
					colorText[] = {"(profilenamespace getvariable ['IGUI_TEXT_RGB_R',0])", "(profilenamespace getvariable ['IGUI_TEXT_RGB_G',1])", "(profilenamespace getvariable ['IGUI_TEXT_RGB_B',1])", "(profilenamespace getvariable ['IGUI_TEXT_RGB_A',0.8])"};
					h = "1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					idc = 150;
					sizeEx = "0.8 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					style = 1;
					w = "10 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					x = "0 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					y = "4 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				};
				class CA_MagCount: RscText
				{
					colorText[] = {"(profilenamespace getvariable ['IGUI_TEXT_RGB_R',0])", "(profilenamespace getvariable ['IGUI_TEXT_RGB_G',1])", "(profilenamespace getvariable ['IGUI_TEXT_RGB_B',1])", "(profilenamespace getvariable ['IGUI_TEXT_RGB_A',0.8])"};
					h = "1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					idc = 185;
					sizeEx = "0.8 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					w = "2 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					x = "8 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					y = "1.5 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				};
				class CA_Mode: RscText
				{
					colorText[] = {"(profilenamespace getvariable ['IGUI_TEXT_RGB_R',0])", "(profilenamespace getvariable ['IGUI_TEXT_RGB_G',1])", "(profilenamespace getvariable ['IGUI_TEXT_RGB_B',1])", "(profilenamespace getvariable ['IGUI_TEXT_RGB_A',0.8])"};
					h = "1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					idc = -1;
					sizeEx = "0.8 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					w = "4.5 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					x = "-5 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					y = -1;
				};
				class CA_ModeTexture: RscPicture
				{
					colorText[] = {"(profilenamespace getvariable ['IGUI_TEXT_RGB_R',0])", "(profilenamespace getvariable ['IGUI_TEXT_RGB_G',1])", "(profilenamespace getvariable ['IGUI_TEXT_RGB_B',1])", "(profilenamespace getvariable ['IGUI_TEXT_RGB_A',0.8])"};
					h = "0.2 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					idc = 187;
					w = "10 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					x = "0 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					y = "1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				};
				class CA_ValueReload: RscIGProgress
				{
					colorBar[] = {"(profilenamespace getvariable ['IGUI_WARNING_RGB_R',0.8])", "(profilenamespace getvariable ['IGUI_WARNING_RGB_G',0.5])", "(profilenamespace getvariable ['IGUI_WARNING_RGB_B',0.0])", 1};
					colorFrame[] = {0, 0, 0, 0};
					h = "0.2 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					idc = 154;
					style = 0;
					w = "10 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					x = "0 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					y = "1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				};
				class CA_Weapon: RscText
				{
					colorText[] = {"(profilenamespace getvariable ['IGUI_TEXT_RGB_R',0])", "(profilenamespace getvariable ['IGUI_TEXT_RGB_G',1])", "(profilenamespace getvariable ['IGUI_TEXT_RGB_B',1])", "(profilenamespace getvariable ['IGUI_TEXT_RGB_A',0.8])"};
					h = "1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					idc = 118;
					sizeEx = "0.8 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					style = 1;
					w = "10 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					x = "0 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					y = "0 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				};
			};
		};
	};
	class RscUnitInfo_AH64D_gunner
	{
		controls[] = {"CA_Distance", "CA_VisionMode", "CA_FlirMode", "CA_FOVMode", "CA_Compass", "CA_Heading", "CA_Autohover", "CA_BalisticComputer", "CA_BallRange", "CA_LaserMarker", "CA_WeaponZeroingText", "CA_WeaponZeroing"};
		idd = 300;
		class CA_Autohover: RscOpticsText
		{
			idc = 157;
			style = 1;
			text = "HOV";
			x = 0.664;
			y = 0.248;
		};
		class CA_BalisticComputer: RscOpticsText
		{
			idc = 165;
			sizeEx = 0.06;
			text = "*";
			x = 0.594;
			y = 0.908;
		};
		class CA_BallRange: RscOpticsValue
		{
			idc = 164;
			w = 0.3;
			x = 0.626;
			y = 0.908;
		};
		class CA_Compass: RscOpticsText
		{
			h = 0.05;
			idc = 155;
			w = 0.3;
			x = 0;
			y = 0.7;
		};
		class CA_Distance: RscOpticsValue
		{
			idc = 151;
			style = 2;
			w = 0.123;
			x = 0.438;
			y = 0.908;
		};
		class CA_FlirMode: RscOpticsText
		{
			idc = 153;
			style = 1;
			x = 0.664;
			y = 0.296;
		};
		class CA_FOVMode: RscOpticsText
		{
			idc = 154;
			x = 0.052;
			y = 0.248;
		};
		class CA_Heading: RscOpticsText
		{
			h = 0.05;
			idc = 156;
			w = 0.3;
			x = 0;
			y = 0.75;
		};
		class CA_LaserMarker: RscOpticsText
		{
			idc = 158;
			text = "LASE TRGT";
			w = 0.154;
			x = 0.27;
			y = 0.908;
		};
		class CA_VisionMode: RscOpticsText
		{
			idc = 152;
			x = 0.052;
			y = 0.296;
		};
	};
	class RscUnitInfoAir: RscUnitInfoAirNoWeapon
	{
		controls[] = {"CA_BackgroundVehicle", "CA_BackgroundVehicleTitle", "CA_BackgroundVehicleTitleDark", "CA_BackgroundFuel", "CA_Vehicle", "CA_VehicleRole", "CA_HitZones", "CA_VehicleTogglesBackground", "CA_VehicleToggles", "CA_SpeedBackground", "CA_SpeedUnits", "CA_Speed", "CA_ValueFuel", "CA_AltBackground", "CA_AltUnits", "CA_Alt", "WeaponInfoControlsGroupRight"};
	};
	class RscUnitInfoAirNoWeapon: RscUnitInfo
	{
		controls[] = {"CA_BackgroundVehicle", "CA_BackgroundVehicleTitle", "CA_BackgroundVehicleTitleDark", "CA_BackgroundFuel", "CA_Vehicle", "CA_VehicleRole", "CA_HitZones", "CA_VehicleTogglesBackground", "CA_VehicleToggles", "CA_SpeedBackground", "CA_SpeedUnits", "CA_Speed", "CA_ValueFuel", "CA_AltBackground", "CA_AltUnits", "CA_Alt"};
	};
	class RscUnitInfoAirPlane: RscUnitInfoAirPlaneNoWeapon
	{
		controls[] = {"CA_BackgroundVehicle", "CA_BackgroundVehicleTitle", "CA_BackgroundVehicleTitleDark", "CA_BackgroundFuel", "CA_Vehicle", "CA_VehicleRole", "CA_HitZones", "CA_VehicleTogglesBackground", "CA_VehicleToggles", "CA_SpeedBackground", "CA_SpeedUnits", "CA_Speed", "CA_ValueFuel", "CA_AltBackground", "CA_AltUnits", "CA_Alt", "WeaponInfoControlsGroupRight", "CA_Throttle"};
	};
	class RscUnitInfoAirPlaneNoWeapon: RscUnitInfoAirNoWeapon
	{
		controls[] = {"CA_BackgroundVehicle", "CA_BackgroundVehicleTitle", "CA_BackgroundVehicleTitleDark", "CA_BackgroundFuel", "CA_Vehicle", "CA_VehicleRole", "CA_HitZones", "CA_VehicleTogglesBackground", "CA_VehicleToggles", "CA_SpeedBackground", "CA_SpeedUnits", "CA_Speed", "CA_ValueFuel", "CA_AltBackground", "CA_AltUnits", "CA_Alt", "CA_Throttle"};
		class CA_VehicleToggles: RscVehicleToggles
		{
			h = "0.8 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = 112;
			w = "9.8 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			x = "1.3 * 					(			((safezoneW / safezoneH) min 1.2) / 40) + 		(profilenamespace getvariable [""IGUI_GRID_VEHICLE_X"",		(safezoneX + 0.5 * 			(			((safezoneW / safezoneH) min 1.2) / 40))])";
			y = "3.4 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 		(profilenamespace getvariable [""IGUI_GRID_VEHICLE_Y"",		(safezoneY + 0.5 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25))])";
		};
	};
	class RscUnitInfoAirRTDBasic: RscUnitInfoAir
	{
		controls[] = {};
		controlsx[] = {"WeaponInfoControlsGroupRight", "CA_SpeedBackground", "CA_TextSpeed", "CA_Speed", "CA_AltBackground", "CA_TextAlt", "CA_Alt", "CA_HeadingBackground", "CA_Heading", "CA_ValueColective"};
		onload = "uinamespace setvariable ['RscUnitInfoAir',_this select 0];";
		class APU: Batteries
		{
			idc = 11832;
			y = "0.192 + SafeZoneY";
		};
		class Batteries: RscIGUIValue
		{
			h = 0.039;
			idc = 11831;
			shadow = 2;
			sizeEx = 0.02674;
			text = "";
			w = 0.3;
			x = "0.08 + SafeZoneX";
			y = "0.036 + SafeZoneY";
		};
		class CA_AirSpeedIndicator: CA_HUDRscControlsGroup
		{
			h = 0.4;
			idc = 530;
			w = 0.15;
			x = 0.1;
			y = 0.2;
			class Controls
			{
				class CA_AirSpeedIndicator_Axis: CA_HUDRscControlsGroup
				{
					h = 0.4;
					idc = 531;
					w = 0.04;
					x = 0.1;
					y = 0;
				};
				class CA_AltimeterBorder: RscPicture
				{
					colorText[] = {"(profilenamespace getvariable ['IGUI_TEXT_RGB_R',0])", "(profilenamespace getvariable ['IGUI_TEXT_RGB_G',1])", "(profilenamespace getvariable ['IGUI_TEXT_RGB_B',1])", "(profilenamespace getvariable ['IGUI_TEXT_RGB_A',0.8])"};
					h = 0.05;
					text = "\A3\ui_f\data\igui_airspeed_value_ca.paa";
					w = 0.1;
					x = 0;
					y = 0.182;
				};
				class CA_RadarAltmeterValue_Value: RscIGUIValue
				{
					idc = 532;
					shadow = 0;
					SizeEx = 0.035;
					style = 1;
					w = 0.1;
					x = -0.01;
					y = 0.187;
				};
			};
			class ControlsBackground
			{
				class Bcg: RscText
				{
					colorbackground[] = {1, 0, 0, 0.5};
					h = 100;
					w = 100;
					x = 0;
					y = 0;
				};
			};
		};
		class CA_Altimeter: CA_HUDRscControlsGroup
		{
			h = 0.4;
			idc = 535;
			w = 0.28;
			x = 0.8;
			y = 0.2;
			class Controls
			{
				class CA_AirSpeedIndicator_Axis: CA_HUDRscControlsGroup
				{
					h = 0.4;
					idc = 536;
					w = 0.04;
					x = 0.05;
					y = 0;
				};
				class CA_AltimeterBorder: RscPicture
				{
					colorText[] = {"(profilenamespace getvariable ['IGUI_TEXT_RGB_R',0])", "(profilenamespace getvariable ['IGUI_TEXT_RGB_G',1])", "(profilenamespace getvariable ['IGUI_TEXT_RGB_B',1])", "(profilenamespace getvariable ['IGUI_TEXT_RGB_A',0.8])"};
					h = 0.05;
					text = "\A3\ui_f\data\igui_altimeter_value_ca.paa";
					w = 0.1;
					x = 0.092;
					y = 0.182;
				};
				class CA_RadarAltmeterValue_Value: RscIGUIValue
				{
					idc = 537;
					shadow = 0;
					sizeEx = 0.035;
					style = 0;
					w = 0.1;
					x = 0.102;
					y = 0.187;
				};
			};
			class ControlsBackground
			{
				class Bcg: RscText
				{
					colorbackground[] = {0, 1, 0, 0.5};
					h = 100;
					w = 100;
					x = 0;
					y = 0;
				};
			};
		};
		class CA_AutoHover: RscIGUIValue
		{
			h = 0.05;
			idc = 546;
			shadow = 0;
			SizeEx = 0.025;
			text = "HOVER";
			w = 0.05;
			x = 0.8;
			y = 0.8;
		};
		class CA_AutoTrim: RscIGUIValue
		{
			h = 0.05;
			idc = 545;
			shadow = 0;
			SizeEx = 0.025;
			text = "TRIM";
			w = 0.05;
			x = 0.85;
			y = 0.8;
		};
		class CA_GMeter: RscIGUIValue
		{
			idc = 501;
			shadow = 0;
			SizeEx = 0.035;
			style = 1;
			w = 0.12;
			x = 0.45;
			y = 0.8;
		};
		class CA_Horizon: CA_HUDRscControlsGroup
		{
			h = 0.6;
			idc = 540;
			w = 0.6;
			x = 0.2;
			y = 0.2;
		};
		class CA_RadarAltmeter: CA_HUDRscControlsGroup
		{
			h = 0.25;
			idc = 505;
			shadow = 0;
			w = 0.25;
			x = 0.8;
			y = 0.6;
			class Controls
			{
				class CA_RadarAltmeterBar: RscIGProgress
				{
					h = 0.2;
					idc = 506;
					texture = "#(argb,8,8,3)color(1,1,1,1)";
					w = 0.01;
					x = 0.05;
					y = 0;
				};
				class CA_RadarAltmeterValue: RscIGUIValue
				{
					idc = 507;
					shadow = 0;
					sizeEx = 0.035;
					style = 0;
					w = 0.1;
					x = 0.065;
					y = 0.17;
				};
			};
			class ControlsBackground
			{
				class Bcg: RscText
				{
					colorbackground[] = {0, 0, 1, 0.5};
					h = 100;
					w = 100;
					x = 0;
					y = 0;
				};
			};
		};
		class CA_StabilityIdicator: CA_HUDRscControlsGroup
		{
			h = 0.1;
			idc = 520;
			w = 0.065;
			x = 0.65;
			y = 0.7;
		};
		class CA_Torque: RscIGUIValue
		{
			idc = 510;
			shadow = 0;
			SizeEx = 0.035;
			style = 1;
			w = 0.12;
			x = 0.45;
			y = 0.75;
		};
		class CA_ValueColective: RscIGProgress
		{
			colorFrame[] = {"(profilenamespace getvariable ['IGUI_TEXT_RGB_R',0])", "(profilenamespace getvariable ['IGUI_TEXT_RGB_G',1])", "(profilenamespace getvariable ['IGUI_TEXT_RGB_B',1])", "(profilenamespace getvariable ['IGUI_TEXT_RGB_A',0.8])"};
			h = 0.20915;
			idc = 525;
			texture = "#(argb,8,8,3)color(1,1,1,1)";
			w = 0.0196078;
			x = "0.018 + SafeZoneX";
			y = "0.01 + SafeZoneY";
		};
		class CA_WindIndicator: CA_HUDRscControlsGroup
		{
			h = 0.1;
			idc = 515;
			w = 0.1;
			x = 0.1;
			y = 0.7;
		};
		class EnginesRPMs: Batteries
		{
			idc = 11835;
			y = "0.153 + SafeZoneY";
		};
		class Starter: Batteries
		{
			idc = 11833;
			y = "0.075 + SafeZoneY";
		};
		class Throttles: Batteries
		{
			idc = 11834;
			y = "0.114 + SafeZoneY";
		};
	};
	class RscUnitInfoAirRTDFull: RscUnitInfoAirRTDFullNoWeapon
	{
		controls[] = {"CA_BackgroundVehicle", "CA_BackgroundVehicleTitle", "CA_BackgroundVehicleTitleDark", "CA_BackgroundFuel", "CA_Vehicle", "CA_VehicleRole", "CA_HitZones", "CA_VehicleTogglesBackground", "CA_VehicleToggles", "CA_SpeedBackground", "CA_SpeedUnits", "CA_Speed", "CA_ValueFuel", "CA_AltBackground", "CA_AltUnits", "CA_Alt", "CA_Horizon_Lite", "CA_Speed_Analogue", "CA_Altitude_Analogue", "CA_Horizon_Analogue", "CA_Stability_Analogue", "CA_Compass_Analogue", "WeaponInfoControlsGroupRight"};
	};
	class RscUnitInfoAirRTDFullDigital: RscUnitInfoAirRTDFullDigitalNoWeapon
	{
		controls[] = {"CA_BackgroundVehicle", "CA_BackgroundVehicleTitle", "CA_BackgroundVehicleTitleDark", "CA_BackgroundFuel", "CA_Vehicle", "CA_VehicleRole", "CA_HitZones", "CA_VehicleTogglesBackground", "CA_VehicleToggles", "CA_SpeedBackground", "CA_SpeedUnits", "CA_Speed", "CA_ValueFuel", "CA_AltBackground", "CA_AltUnits", "CA_Alt", "CA_Horizon_Lite", "CA_Speed_Analogue", "CA_Altitude_Analogue", "CA_Horizon_Analogue", "CA_Stability_Analogue", "CA_Compass_Analogue", "WeaponInfoControlsGroupRight"};
	};
	class RscUnitInfoAirRTDFullDigitalNoWeapon: RscUnitInfoAir
	{
		controls[] = {"CA_BackgroundVehicle", "CA_BackgroundVehicleTitle", "CA_BackgroundVehicleTitleDark", "CA_BackgroundFuel", "CA_Vehicle", "CA_VehicleRole", "CA_HitZones", "CA_VehicleTogglesBackground", "CA_VehicleToggles", "CA_SpeedBackground", "CA_SpeedUnits", "CA_Speed", "CA_ValueFuel", "CA_AltBackground", "CA_AltUnits", "CA_Alt", "CA_Horizon_Lite", "CA_Speed_Analogue", "CA_Altitude_Analogue", "CA_Horizon_Analogue", "CA_Stability_Analogue", "CA_Compass_Analogue"};
		class CA_Altitude_Analogue: CA_HUDRscControlsGroup
		{
			h = "(7.5 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25))";
			idc = 611;
			w = "(7.5 * 			(			((safezoneW / safezoneH) min 1.2) / 40))";
			x = "(profilenamespace getvariable ['IGUI_GRID_GAUGEALT_X',		(safezoneX + (safezoneW / 2) - 11.75 * 			(			((safezoneW / safezoneH) min 1.2) / 40))])";
			y = "(profilenamespace getvariable ['IGUI_GRID_GAUGEALT_Y',		(safezoneY + safezoneH - 11.7 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25))])";
			class controls
			{
				class CA_Altitude_Analogue_Active: RscPicture
				{
					colorText[] = {"(profilenamespace getvariable ['IGUI_TEXT_RGB_R',0])", "(profilenamespace getvariable ['IGUI_TEXT_RGB_G',1])", "(profilenamespace getvariable ['IGUI_TEXT_RGB_B',1])", "(profilenamespace getvariable ['IGUI_TEXT_RGB_A',0.8])"};
					h = "7.5 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					idc = 1243;
					text = "\A3\Ui_f\data\IGUI\RscIngameUI\RscUnitInfoAirRTDFullDigital\digital_altitude_active_ca.paa";
					w = "7.5 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
					x = "0 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
					y = "0 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				};
				class CA_Altitude_Analogue_Background: RscPicture
				{
					colorText[] = {"(profilenamespace getvariable ['IGUI_BCG_RGB_R',0])", "(profilenamespace getvariable ['IGUI_BCG_RGB_G',1])", "(profilenamespace getvariable ['IGUI_BCG_RGB_B',1])", "(profilenamespace getvariable ['IGUI_BCG_RGB_A',0.8])"};
					h = "7.5 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					idc = 617;
					text = "\A3\Ui_f\data\IGUI\RscIngameUI\RscUnitInfoAirRTDFullDigital\digital_background_ca.paa";
					w = "7.5 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
					x = "0 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
					y = "0 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				};
				class CA_Altitude_Analogue_Background_Imperial: RscPicture
				{
					h = "7.5 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					idc = 616;
					text = "\A3\Ui_f\data\IGUI\RscIngameUI\RscUnitInfoAirRTDFullDigital\digital_background_altitude_imp_ca.paa";
					w = "7.5 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
					x = "0 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
					y = "0 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				};
				class CA_Altitude_Analogue_Error: RscPicture
				{
					colorText[] = {"(profilenamespace getvariable ['IGUI_ERROR_RGB_R',0.8])", "(profilenamespace getvariable ['IGUI_ERROR_RGB_G',0.0])", "(profilenamespace getvariable ['IGUI_ERROR_RGB_B',0.0])", "(profilenamespace getvariable ['IGUI_ERROR_RGB_A',1.0])"};
					h = "7.5 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					idc = 1245;
					text = "\A3\Ui_f\data\IGUI\RscIngameUI\RscUnitInfoAirRTDFullDigital\digital_altitude_error_ca.paa";
					w = "7.5 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
					x = "0 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
					y = "0 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				};
				class CA_Altitude_Analogue_Max: RscPicture
				{
					colorText[] = {"(profilenamespace getvariable ['IGUI_TEXT_RGB_R',0])", "(profilenamespace getvariable ['IGUI_TEXT_RGB_G',1])", "(profilenamespace getvariable ['IGUI_TEXT_RGB_B',1])", 1};
					h = "1 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					idc = 614;
					text = "\A3\ui_f\data\igui\rscingameui\RscUnitInfoAirRTDFull\MarkerMAX_CA.paa";
					w = "1 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
					x = "2.5 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
					y = "2.5 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				};
				class CA_Altitude_Analogue_Min: RscPicture
				{
					colorText[] = {"(profilenamespace getvariable ['IGUI_TEXT_RGB_R',0])", "(profilenamespace getvariable ['IGUI_TEXT_RGB_G',1])", "(profilenamespace getvariable ['IGUI_TEXT_RGB_B',1])", 1};
					h = "1 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					idc = 613;
					text = "\A3\ui_f\data\igui\rscingameui\RscUnitInfoAirRTDFull\MarkerMIN_CA.paa";
					w = "1 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
					x = "2.5 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
					y = "2.5 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				};
				class CA_Altitude_Analogue_Needle: RscPicture
				{
					h = "5 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					idc = 612;
					text = "\A3\Ui_f\data\IGUI\RscIngameUI\RscUnitInfoAirRTDFullDigital\digital_arrow_ca.paa";
					w = "5 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
					x = "1.25 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
					y = "1.25 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				};
				class CA_Altitude_Analogue_Numbers: RscPicture
				{
					h = "7.5 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					idc = 1246;
					text = "\A3\Ui_f\data\IGUI\RscIngameUI\RscUnitInfoAirRTDFullDigital\digital_altitude_numbers_ca.paa";
					w = "7.5 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
					x = "0 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
					y = "0 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				};
				class CA_Altitude_Analogue_Value: RscText
				{
					h = "0.5 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					idc = 615;
					shadow = 0;
					sizeEx = "(			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 0.8)";
					style = 2;
					w = "2.5 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
					x = "2.5 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
					y = "0.05 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				};
				class CA_Altitude_Analogue_Warning: RscPicture
				{
					colorText[] = {"(profilenamespace getvariable ['IGUI_WARNING_RGB_R',0.8])", "(profilenamespace getvariable ['IGUI_WARNING_RGB_G',0.5])", "(profilenamespace getvariable ['IGUI_WARNING_RGB_B',0.0])", "(profilenamespace getvariable ['IGUI_WARNING_RGB_A',0.8])"};
					h = "7.5 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					idc = 1244;
					text = "\A3\Ui_f\data\IGUI\RscIngameUI\RscUnitInfoAirRTDFullDigital\digital_altitude_warning_ca.paa";
					w = "7.5 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
					x = "0 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
					y = "0 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				};
			};
		};
		class CA_Compass_Analogue: CA_HUDRscControlsGroup
		{
			h = "(7.5 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25))";
			idc = 631;
			w = "(7.5 * 			(			((safezoneW / safezoneH) min 1.2) / 40))";
			x = "(profilenamespace getvariable ['IGUI_GRID_GAUGECOMPASS_X',	(safezoneX + (safezoneW / 2) + 12.25 * 			(			((safezoneW / safezoneH) min 1.2) / 40))])";
			y = "(profilenamespace getvariable ['IGUI_GRID_GAUGECOMPASS_Y',	(safezoneY + safezoneH - 11.7 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25))])";
			class controls
			{
				class CA_Compass_Analogue_Background: RscPicture
				{
					colorText[] = {"(profilenamespace getvariable ['IGUI_BCG_RGB_R',0])", "(profilenamespace getvariable ['IGUI_BCG_RGB_G',1])", "(profilenamespace getvariable ['IGUI_BCG_RGB_B',1])", "(profilenamespace getvariable ['IGUI_BCG_RGB_A',0.8])"};
					h = "7.5 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					idc = 1215;
					text = "\A3\Ui_f\data\IGUI\RscIngameUI\RscUnitInfoAirRTDFullDigital\digital_background_ca.paa";
					w = "7.5 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
					x = "0 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
					y = "0 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				};
				class CA_Compass_Analogue_Max: RscPicture
				{
					colorText[] = {"(profilenamespace getvariable ['IGUI_TEXT_RGB_R',0])", "(profilenamespace getvariable ['IGUI_TEXT_RGB_G',1])", "(profilenamespace getvariable ['IGUI_TEXT_RGB_B',1])", 1};
					h = "1.25 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					idc = 636;
					text = "\A3\ui_f\data\igui\rscingameui\RscUnitInfoAirRTDFull\MarkerMAX_CA.paa";
					w = "1.25 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
					x = "2.5 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
					y = "2.5 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				};
				class CA_Compass_Analogue_Min: RscPicture
				{
					colorText[] = {"(profilenamespace getvariable ['IGUI_TEXT_RGB_R',0])", "(profilenamespace getvariable ['IGUI_TEXT_RGB_G',1])", "(profilenamespace getvariable ['IGUI_TEXT_RGB_B',1])", 1};
					h = "1.25 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					idc = 635;
					text = "\A3\ui_f\data\igui\rscingameui\RscUnitInfoAirRTDFull\MarkerMIN_CA.paa";
					w = "1.25 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
					x = "2.5 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
					y = "2.5 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				};
				class CA_Compass_Analogue_Needle: RscPicture
				{
					h = "7.5 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					idc = 632;
					text = "\A3\Ui_f\data\IGUI\RscIngameUI\RscUnitInfoAirRTDFullDigital\digital_compass_ca.paa";
					w = "7.5 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
					x = "0 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
					y = "0 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				};
				class CA_Compass_Analogue_Plane: RscPicture
				{
					colorText[] = {"(profilenamespace getvariable ['IGUI_TEXT_RGB_R',0])", "(profilenamespace getvariable ['IGUI_TEXT_RGB_G',1])", "(profilenamespace getvariable ['IGUI_TEXT_RGB_B',1])", "(profilenamespace getvariable ['IGUI_TEXT_RGB_A',0.8])"};
					h = "7.5 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					idc = 1247;
					text = "\A3\Ui_f\data\IGUI\RscIngameUI\RscUnitInfoAirRTDFullDigital\digital_compass_plane_ca.paa";
					w = "7.5 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
					x = "0 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
					y = "0 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				};
				class CA_Compass_Analogue_Value: RscText
				{
					h = "0.5 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					idc = 637;
					shadow = 0;
					sizeEx = "(			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 0.8)";
					style = 2;
					w = "2.5 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
					x = "2.5 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
					y = "0.05 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				};
				class CA_Compass_Analogue_Waypoint: RscPicture
				{
					colorText[] = {1, 0.5, 0, 1};
					h = "0.5 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					idc = 634;
					text = "\A3\Ui_f\data\IGUI\RscIngameUI\RscUnitInfoAirRTDFullDigital\digital_MarkerWPT_CA.paa";
					w = "0.5 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
					x = "2.5 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
					y = "2.5 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				};
				class CA_Compass_Analogue_Wind: RscPicture
				{
					colorText[] = {"(profilenamespace getvariable ['IGUI_TEXT_RGB_R',0])", "(profilenamespace getvariable ['IGUI_TEXT_RGB_G',1])", "(profilenamespace getvariable ['IGUI_TEXT_RGB_B',1])", "(profilenamespace getvariable ['IGUI_TEXT_RGB_A',0.8])"};
					h = "3.75 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					idc = 633;
					text = "\A3\Ui_f\data\IGUI\RscIngameUI\RscUnitInfoAirRTDFullDigital\digital_wind_ca.paa";
					w = "3.75 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
					x = "1.875 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
					y = "1.875 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				};
			};
		};
		class CA_Horizon_Analogue: CA_HUDRscControlsGroup
		{
			h = "(7.5 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25))";
			idc = 621;
			w = "(7.5 * 			(			((safezoneW / safezoneH) min 1.2) / 40))";
			x = "(profilenamespace getvariable ['IGUI_GRID_GAUGEHORIZON_X',	(safezoneX + ((safezoneW - 7.5 * 			(			((safezoneW / safezoneH) min 1.2) / 40)) / 2))])";
			y = "(profilenamespace getvariable ['IGUI_GRID_GAUGEHORIZON_Y',	(safezoneY + safezoneH - 11.7 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25))])";
			class controls
			{
				class CA_Horizon_Analogue_Aircraft: RscPicture
				{
					colorText[] = {"(profilenamespace getvariable ['IGUI_TEXT_RGB_R',0])", "(profilenamespace getvariable ['IGUI_TEXT_RGB_G',1])", "(profilenamespace getvariable ['IGUI_TEXT_RGB_B',1])", "(profilenamespace getvariable ['IGUI_TEXT_RGB_A',0.8])"};
					h = "3.75 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					idc = 1232;
					shadow = 2;
					text = "\A3\Ui_f\data\IGUI\RscIngameUI\RscUnitInfoAirRTDFullDigital\digital_horizon_aircraft_ca.paa";
					w = "3.75 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
					x = "1.875 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
					y = "1.9 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				};
				class CA_Horizon_Analogue_Background: RscPicture
				{
					colorText[] = {"(profilenamespace getvariable ['IGUI_BCG_RGB_R',0])", "(profilenamespace getvariable ['IGUI_BCG_RGB_G',1])", "(profilenamespace getvariable ['IGUI_BCG_RGB_B',1])", "(profilenamespace getvariable ['IGUI_BCG_RGB_A',0.8])"};
					h = "7.5 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					idc = 1208;
					text = "\A3\Ui_f\data\IGUI\RscIngameUI\RscUnitInfoAirRTDFullDigital\digital_background_ca.paa";
					w = "7.5 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
					x = "0 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
					y = "0 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				};
				class CA_Horizon_Analogue_Needle: RscPicture
				{
					colorText[] = {1, 1, 1, 1};
					h = "3.75 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					idc = 622;
					text = "\A3\Ui_f\data\IGUI\RscIngameUI\RscUnitInfoAirRTDFullDigital\digital_horizon_axes_ca.paa";
					w = "3.75 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
					x = "1.875 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
					y = "1.85 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				};
				class CA_Horizon_Analogue_Numbers: RscPicture
				{
					h = "7.5 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					idc = 1248;
					text = "\A3\Ui_f\data\IGUI\RscIngameUI\RscUnitInfoAirRTDFullDigital\digital_horizon_numbers_ca.paa";
					w = "7.5 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
					x = "0 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
					y = "0 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				};
				class CA_Horizon_Analogue_Value: RscText
				{
					h = "0.5 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					idc = 623;
					shadow = 0;
					sizeEx = "(			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 0.8)";
					style = 2;
					w = "2.5 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
					x = "2.5 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
					y = "0.05 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				};
			};
		};
		class CA_Horizon_Lite: CA_HUDRscControlsGroup
		{
			h = "safezoneH";
			idc = 541;
			w = "safezoneW";
			x = "safezoneX";
			y = "safezoneY";
		};
		class CA_Speed_Analogue: CA_HUDRscControlsGroup
		{
			h = "(7.5 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25))";
			idc = 601;
			w = "(7.5 * 			(			((safezoneW / safezoneH) min 1.2) / 40))";
			x = "(profilenamespace getvariable ['IGUI_GRID_GAUGESPEED_X',	(safezoneX + (safezoneW / 2) - 19.75 * 			(			((safezoneW / safezoneH) min 1.2) / 40))])";
			y = "(profilenamespace getvariable ['IGUI_GRID_GAUGESPEED_Y',	(safezoneY + safezoneH - 11.7 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25))])";
			class controls
			{
				class CA_Speed_Analogue_Active: RscPicture
				{
					colorText[] = {"(profilenamespace getvariable ['IGUI_TEXT_RGB_R',0])", "(profilenamespace getvariable ['IGUI_TEXT_RGB_G',1])", "(profilenamespace getvariable ['IGUI_TEXT_RGB_B',1])", "(profilenamespace getvariable ['IGUI_TEXT_RGB_A',0.8])"};
					h = "7.5 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					idc = 1239;
					text = "\A3\Ui_f\data\IGUI\RscIngameUI\RscUnitInfoAirRTDFullDigital\digital_speed_active_ca.paa";
					w = "7.5 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
					x = "0 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
					y = "0 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				};
				class CA_Speed_Analogue_Background: RscPicture
				{
					colorText[] = {"(profilenamespace getvariable ['IGUI_BCG_RGB_R',0])", "(profilenamespace getvariable ['IGUI_BCG_RGB_G',1])", "(profilenamespace getvariable ['IGUI_BCG_RGB_B',1])", "(profilenamespace getvariable ['IGUI_BCG_RGB_A',0.8])"};
					h = "7.5 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					idc = 607;
					text = "\A3\Ui_f\data\IGUI\RscIngameUI\RscUnitInfoAirRTDFullDigital\digital_background_ca.paa";
					w = "7.5 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
					x = "0 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
					y = "0 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				};
				class CA_Speed_Analogue_Background_Imperial: RscPicture
				{
					h = "7.5 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					idc = 606;
					text = "\A3\Ui_f\data\IGUI\RscIngameUI\RscUnitInfoAirRTDFullDigital\digital_background_speed_imp_ca.paa";
					w = "7.5 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
					x = "0 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
					y = "0 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				};
				class CA_Speed_Analogue_Error: RscPicture
				{
					colorText[] = {"(profilenamespace getvariable ['IGUI_ERROR_RGB_R',0.8])", "(profilenamespace getvariable ['IGUI_ERROR_RGB_G',0.0])", "(profilenamespace getvariable ['IGUI_ERROR_RGB_B',0.0])", "(profilenamespace getvariable ['IGUI_ERROR_RGB_A',1.0])"};
					h = "7.5 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					idc = 1241;
					text = "\A3\Ui_f\data\IGUI\RscIngameUI\RscUnitInfoAirRTDFullDigital\digital_speed_error_ca.paa";
					w = "7.5 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
					x = "0 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
					y = "0 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				};
				class CA_Speed_Analogue_Max: RscPicture
				{
					colorText[] = {"(profilenamespace getvariable ['IGUI_TEXT_RGB_R',0])", "(profilenamespace getvariable ['IGUI_TEXT_RGB_G',1])", "(profilenamespace getvariable ['IGUI_TEXT_RGB_B',1])", 1};
					h = "1 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					idc = 604;
					text = "\A3\ui_f\data\igui\rscingameui\RscUnitInfoAirRTDFull\MarkerMAX_CA.paa";
					w = "1 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
					x = "2.5 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
					y = "2.5 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				};
				class CA_Speed_Analogue_Min: RscPicture
				{
					colorText[] = {"(profilenamespace getvariable ['IGUI_TEXT_RGB_R',0])", "(profilenamespace getvariable ['IGUI_TEXT_RGB_G',1])", "(profilenamespace getvariable ['IGUI_TEXT_RGB_B',1])", 1};
					h = "1 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					idc = 603;
					text = "\A3\ui_f\data\igui\rscingameui\RscUnitInfoAirRTDFull\MarkerMIN_CA.paa";
					w = "1 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
					x = "2.5 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
					y = "2.5 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				};
				class CA_Speed_Analogue_Needle: RscPicture
				{
					h = "5 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					idc = 602;
					text = "\A3\Ui_f\data\IGUI\RscIngameUI\RscUnitInfoAirRTDFullDigital\digital_arrow_ca.paa";
					w = "5 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
					x = "1.25 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
					y = "1.25 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				};
				class CA_Speed_Analogue_Numbers: RscPicture
				{
					h = "7.5 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					idc = 1242;
					text = "\A3\Ui_f\data\IGUI\RscIngameUI\RscUnitInfoAirRTDFullDigital\digital_speed_numbers_ca.paa";
					w = "7.5 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
					x = "0 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
					y = "0 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				};
				class CA_Speed_Analogue_Value: RscText
				{
					h = "0.5 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					idc = 605;
					shadow = 0;
					sizeEx = "(			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 0.8)";
					style = 2;
					w = "2.5 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
					x = "2.5 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
					y = "0.05 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				};
				class CA_Speed_Analogue_Warning: RscPicture
				{
					colorText[] = {"(profilenamespace getvariable ['IGUI_WARNING_RGB_R',0.8])", "(profilenamespace getvariable ['IGUI_WARNING_RGB_G',0.5])", "(profilenamespace getvariable ['IGUI_WARNING_RGB_B',0.0])", "(profilenamespace getvariable ['IGUI_WARNING_RGB_A',0.8])"};
					h = "7.5 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					idc = 1240;
					text = "\A3\Ui_f\data\IGUI\RscIngameUI\RscUnitInfoAirRTDFullDigital\digital_speed_warning_ca.paa";
					w = "7.5 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
					x = "0 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
					y = "0 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				};
			};
		};
		class CA_Stability_Analogue: CA_HUDRscControlsGroup
		{
			h = "(7.5 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25))";
			idc = 641;
			w = "(7.5 * 			(			((safezoneW / safezoneH) min 1.2) / 40))";
			x = "(profilenamespace getvariable ['IGUI_GRID_GAUGESTABILITY_X',	(safezoneX + (safezoneW / 2) + 4.25 * 			(			((safezoneW / safezoneH) min 1.2) / 40))])";
			y = "(profilenamespace getvariable ['IGUI_GRID_GAUGESTABILITY_Y',	(safezoneY + safezoneH - 11.7 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25))])";
			class controls
			{
				class CA_Stability_Analogue_Autohover: RscPicture
				{
					colorText[] = {"(profilenamespace getvariable ['IGUI_WARNING_RGB_R',0.8])", "(profilenamespace getvariable ['IGUI_WARNING_RGB_G',0.5])", "(profilenamespace getvariable ['IGUI_WARNING_RGB_B',0.0])", "(profilenamespace getvariable ['IGUI_WARNING_RGB_A',0.8])"};
					h = "0.6 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					idc = 546;
					text = "\A3\ui_f\data\igui\rscingameui\RscUnitInfoAirRTDFull\WhiteDot_CA.paa";
					w = "0.6 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
					x = "3.45 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
					y = "3.45 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				};
				class CA_Stability_Analogue_Background: RscPicture
				{
					colorText[] = {"(profilenamespace getvariable ['IGUI_BCG_RGB_R',0])", "(profilenamespace getvariable ['IGUI_BCG_RGB_G',1])", "(profilenamespace getvariable ['IGUI_BCG_RGB_B',1])", "(profilenamespace getvariable ['IGUI_BCG_RGB_A',0.8])"};
					h = "7.5 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					idc = 648;
					text = "\A3\Ui_f\data\IGUI\RscIngameUI\RscUnitInfoAirRTDFullDigital\digital_background_ca.paa";
					w = "7.5 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
					x = "0 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
					y = "0 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				};
				class CA_Stability_Analogue_Background_Imperial: RscPicture
				{
					h = "7.5 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					idc = 647;
					text = "\A3\Ui_f\data\IGUI\RscIngameUI\RscUnitInfoAirRTDFullDigital\digital_background_stability_imp_ca.paa";
					w = "7.5 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
					x = "0 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
					y = "0 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				};
				class CA_Stability_Analogue_Collective: RscPicture
				{
					colorText[] = {"(profilenamespace getvariable ['IGUI_TEXT_RGB_R',0])", "(profilenamespace getvariable ['IGUI_TEXT_RGB_G',1])", "(profilenamespace getvariable ['IGUI_TEXT_RGB_B',1])", "(profilenamespace getvariable ['IGUI_TEXT_RGB_A',0.8])"};
					h = "7.5 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					idc = 645;
					text = "A3\ui_f\data\igui\rscingameui\RscUnitInfoAirRTDFull\analogue_right_ca.paa";
					w = "3.75 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
					x = "3.75 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
					y = "0 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				};
				class CA_Stability_Analogue_Numbers: RscPicture
				{
					h = "7.5 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					idc = 1249;
					text = "\A3\Ui_f\data\IGUI\RscIngameUI\RscUnitInfoAirRTDFullDigital\digital_stability_numbers_ca.paa";
					w = "7.5 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
					x = "0 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
					y = "0 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				};
				class CA_Stability_Analogue_Speed: RscPicture
				{
					colorText[] = {1, 1, 1, 1};
					h = "0.6 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					idc = 642;
					text = "\A3\ui_f\data\igui\rscingameui\RscUnitInfoAirRTDFull\WhiteDot_CA.paa";
					w = "0.6 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
					x = "1.5 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
					y = "1.5 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				};
				class CA_Stability_Analogue_Value: RscText
				{
					h = "0.5 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					idc = 643;
					shadow = 0;
					sizeEx = "(			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 0.8)";
					style = 2;
					w = "2.5 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
					x = "2.5 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
					y = "0.05 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				};
				class CA_Stability_Analogue_Vertical_Speed_Needle: RscPicture
				{
					colorText[] = {1, 1, 1, 1};
					h = "5 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					idc = 644;
					text = "\A3\Ui_f\data\IGUI\RscIngameUI\RscUnitInfoAirRTDFullDigital\digital_arrow_VSI_ca.paa";
					w = "5 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
					x = "1.25 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
					y = "1.25 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				};
			};
		};
	};
	class RscUnitInfoAirRTDFullNoWeapon: RscUnitInfoAir
	{
		controls[] = {"CA_BackgroundVehicle", "CA_BackgroundVehicleTitle", "CA_BackgroundVehicleTitleDark", "CA_BackgroundFuel", "CA_Vehicle", "CA_VehicleRole", "CA_HitZones", "CA_VehicleTogglesBackground", "CA_VehicleToggles", "CA_SpeedBackground", "CA_SpeedUnits", "CA_Speed", "CA_ValueFuel", "CA_AltBackground", "CA_AltUnits", "CA_Alt", "CA_Horizon_Lite", "CA_Speed_Analogue", "CA_Altitude_Analogue", "CA_Horizon_Analogue", "CA_Stability_Analogue", "CA_Compass_Analogue"};
		class CA_Altitude_Analogue: CA_HUDRscControlsGroup
		{
			h = "(7.5 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25))";
			idc = 611;
			w = "(7.5 * 			(			((safezoneW / safezoneH) min 1.2) / 40))";
			x = "(profilenamespace getvariable ['IGUI_GRID_GAUGEALT_X',		(safezoneX + (safezoneW / 2) - 11.75 * 			(			((safezoneW / safezoneH) min 1.2) / 40))])";
			y = "(profilenamespace getvariable ['IGUI_GRID_GAUGEALT_Y',		(safezoneY + safezoneH - 11.7 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25))])";
			class controls
			{
				class CA_Altitude_Analogue_Background: RscPicture
				{
					h = "7.5 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					idc = 617;
					text = "A3\ui_f\data\igui\rscingameui\RscUnitInfoAirRTDFull\analogue_background_altitude_ca.paa";
					w = "7.5 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
					x = "0 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
					y = "0 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				};
				class CA_Altitude_Analogue_Background_Imperial: RscPicture
				{
					h = "7.5 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					idc = 616;
					text = "A3\ui_f\data\igui\rscingameui\RscUnitInfoAirRTDFull\analogue_background_altitude_imp_ca.paa";
					w = "7.5 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
					x = "0 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
					y = "0 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				};
				class CA_Altitude_Analogue_Max: RscPicture
				{
					colorText[] = {"(profilenamespace getvariable ['IGUI_TEXT_RGB_R',0])", "(profilenamespace getvariable ['IGUI_TEXT_RGB_G',1])", "(profilenamespace getvariable ['IGUI_TEXT_RGB_B',1])", 1};
					h = "1 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					idc = 614;
					text = "\A3\ui_f\data\igui\rscingameui\RscUnitInfoAirRTDFull\MarkerMAX_CA.paa";
					w = "1 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
					x = "2.5 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
					y = "2.5 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				};
				class CA_Altitude_Analogue_Min: RscPicture
				{
					colorText[] = {"(profilenamespace getvariable ['IGUI_TEXT_RGB_R',0])", "(profilenamespace getvariable ['IGUI_TEXT_RGB_G',1])", "(profilenamespace getvariable ['IGUI_TEXT_RGB_B',1])", 1};
					h = "1 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					idc = 613;
					text = "\A3\ui_f\data\igui\rscingameui\RscUnitInfoAirRTDFull\MarkerMIN_CA.paa";
					w = "1 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
					x = "2.5 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
					y = "2.5 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				};
				class CA_Altitude_Analogue_Needle: RscPicture
				{
					h = "5 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					idc = 612;
					text = "\A3\ui_f\data\igui\rscingameui\RscUnitInfoAirRTDFull\analogue_arrow_ca.paa";
					w = "5 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
					x = "1.25 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
					y = "1.25 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				};
				class CA_Altitude_Analogue_Value: RscText
				{
					h = "0.5 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					idc = 615;
					shadow = 0;
					sizeEx = "(			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 0.8)";
					style = 2;
					w = "2.5 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
					x = "2.5 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
					y = "0.05 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				};
			};
		};
		class CA_Compass_Analogue: CA_HUDRscControlsGroup
		{
			h = "(7.5 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25))";
			idc = 631;
			w = "(7.5 * 			(			((safezoneW / safezoneH) min 1.2) / 40))";
			x = "(profilenamespace getvariable ['IGUI_GRID_GAUGECOMPASS_X',	(safezoneX + (safezoneW / 2) + 12.25 * 			(			((safezoneW / safezoneH) min 1.2) / 40))])";
			y = "(profilenamespace getvariable ['IGUI_GRID_GAUGECOMPASS_Y',	(safezoneY + safezoneH - 11.7 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25))])";
			class controls
			{
				class CA_Compass_Analogue_Background: RscPicture
				{
					h = "7.5 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					idc = 1215;
					text = "A3\ui_f\data\igui\rscingameui\RscUnitInfoAirRTDFull\analogue_background_compass_ca.paa";
					w = "7.5 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
					x = "0 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
					y = "0 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				};
				class CA_Compass_Analogue_Max: RscPicture
				{
					colorText[] = {"(profilenamespace getvariable ['IGUI_TEXT_RGB_R',0])", "(profilenamespace getvariable ['IGUI_TEXT_RGB_G',1])", "(profilenamespace getvariable ['IGUI_TEXT_RGB_B',1])", 1};
					h = "1.25 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					idc = 636;
					text = "\A3\ui_f\data\igui\rscingameui\RscUnitInfoAirRTDFull\MarkerMAX_CA.paa";
					w = "1.25 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
					x = "2.5 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
					y = "2.5 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				};
				class CA_Compass_Analogue_Min: RscPicture
				{
					colorText[] = {"(profilenamespace getvariable ['IGUI_TEXT_RGB_R',0])", "(profilenamespace getvariable ['IGUI_TEXT_RGB_G',1])", "(profilenamespace getvariable ['IGUI_TEXT_RGB_B',1])", 1};
					h = "1.25 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					idc = 635;
					text = "\A3\ui_f\data\igui\rscingameui\RscUnitInfoAirRTDFull\MarkerMIN_CA.paa";
					w = "1.25 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
					x = "2.5 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
					y = "2.5 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				};
				class CA_Compass_Analogue_Needle: RscPicture
				{
					h = "7.5 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					idc = 632;
					text = "\A3\ui_f\data\igui\rscingameui\RscUnitInfoAirRTDFull\analogue_compass_ca.paa";
					w = "7.5 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
					x = "0 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
					y = "0 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				};
				class CA_Compass_Analogue_Value: RscText
				{
					h = "0.5 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					idc = 637;
					shadow = 0;
					sizeEx = "(			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 0.8)";
					style = 2;
					w = "2.5 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
					x = "2.5 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
					y = "0.05 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				};
				class CA_Compass_Analogue_Waypoint: RscPicture
				{
					colorText[] = {1, 0.5, 0, 1};
					h = "0.5 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					idc = 634;
					text = "\A3\ui_f\data\igui\rscingameui\RscUnitInfoAirRTDFull\MarkerWPT_CA.paa";
					w = "0.5 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
					x = "2.5 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
					y = "2.5 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				};
				class CA_Compass_Analogue_Wind: RscPicture
				{
					colorText[] = {"(profilenamespace getvariable ['IGUI_TEXT_RGB_R',0])", "(profilenamespace getvariable ['IGUI_TEXT_RGB_G',1])", "(profilenamespace getvariable ['IGUI_TEXT_RGB_B',1])", 1};
					h = "3.75 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					idc = 633;
					text = "\A3\ui_f\data\igui\rscingameui\RscUnitInfoAirRTDFull\igui_wind_ca.paa";
					w = "3.75 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
					x = "1.875 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
					y = "1.875 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				};
			};
		};
		class CA_Horizon_Analogue: CA_HUDRscControlsGroup
		{
			h = "(7.5 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25))";
			idc = 621;
			w = "(7.5 * 			(			((safezoneW / safezoneH) min 1.2) / 40))";
			x = "(profilenamespace getvariable ['IGUI_GRID_GAUGEHORIZON_X',	(safezoneX + ((safezoneW - 7.5 * 			(			((safezoneW / safezoneH) min 1.2) / 40)) / 2))])";
			y = "(profilenamespace getvariable ['IGUI_GRID_GAUGEHORIZON_Y',	(safezoneY + safezoneH - 11.7 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25))])";
			class controls
			{
				class CA_Horizon_Analogue_Aircraft: RscPicture
				{
					colorText[] = {0.118, 0.706, 0.302, 1};
					h = "3.75 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					idc = 1232;
					shadow = 2;
					text = "\A3\ui_f\data\igui\rscingameui\RscUnitInfoAirRTDFull\analogue_horizon_aircraft_ca.paa";
					w = "3.75 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
					x = "1.875 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
					y = "1.9 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				};
				class CA_Horizon_Analogue_Background: RscPicture
				{
					h = "7.5 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					idc = 1208;
					text = "A3\ui_f\data\igui\rscingameui\RscUnitInfoAirRTDFull\analogue_background_horizon_ca.paa";
					w = "7.5 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
					x = "0 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
					y = "0 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				};
				class CA_Horizon_Analogue_Needle: RscPicture
				{
					colorText[] = {1, 1, 1, 1};
					h = "3.75 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					idc = 622;
					text = "\A3\ui_f\data\igui\rscingameui\RscUnitInfoAirRTDFull\igui_horizon_axes_ca.paa";
					w = "3.75 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
					x = "1.875 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
					y = "1.85 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				};
				class CA_Horizon_Analogue_Value: RscText
				{
					h = "0.5 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					idc = 623;
					shadow = 0;
					sizeEx = "(			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 0.8)";
					style = 2;
					w = "2.5 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
					x = "2.5 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
					y = "0.05 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				};
			};
		};
		class CA_Horizon_Lite: CA_HUDRscControlsGroup
		{
			h = "safezoneH";
			idc = 541;
			w = "safezoneW";
			x = "safezoneX";
			y = "safezoneY";
		};
		class CA_Speed_Analogue: CA_HUDRscControlsGroup
		{
			h = "(7.5 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25))";
			idc = 601;
			w = "(7.5 * 			(			((safezoneW / safezoneH) min 1.2) / 40))";
			x = "(profilenamespace getvariable ['IGUI_GRID_GAUGESPEED_X',	(safezoneX + (safezoneW / 2) - 19.75 * 			(			((safezoneW / safezoneH) min 1.2) / 40))])";
			y = "(profilenamespace getvariable ['IGUI_GRID_GAUGESPEED_Y',	(safezoneY + safezoneH - 11.7 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25))])";
			class controls
			{
				class CA_Speed_Analogue_Background: RscPicture
				{
					h = "7.5 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					idc = 607;
					text = "A3\ui_f\data\igui\rscingameui\RscUnitInfoAirRTDFull\analogue_background_speed_ca.paa";
					w = "7.5 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
					x = "0 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
					y = "0 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				};
				class CA_Speed_Analogue_Background_Imperial: RscPicture
				{
					h = "7.5 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					idc = 606;
					text = "A3\ui_f\data\igui\rscingameui\RscUnitInfoAirRTDFull\analogue_background_speed_imp_ca.paa";
					w = "7.5 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
					x = "0 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
					y = "0 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				};
				class CA_Speed_Analogue_Max: RscPicture
				{
					colorText[] = {"(profilenamespace getvariable ['IGUI_TEXT_RGB_R',0])", "(profilenamespace getvariable ['IGUI_TEXT_RGB_G',1])", "(profilenamespace getvariable ['IGUI_TEXT_RGB_B',1])", 1};
					h = "1 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					idc = 604;
					text = "\A3\ui_f\data\igui\rscingameui\RscUnitInfoAirRTDFull\MarkerMAX_CA.paa";
					w = "1 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
					x = "2.5 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
					y = "2.5 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				};
				class CA_Speed_Analogue_Min: RscPicture
				{
					colorText[] = {"(profilenamespace getvariable ['IGUI_TEXT_RGB_R',0])", "(profilenamespace getvariable ['IGUI_TEXT_RGB_G',1])", "(profilenamespace getvariable ['IGUI_TEXT_RGB_B',1])", 1};
					h = "1 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					idc = 603;
					text = "\A3\ui_f\data\igui\rscingameui\RscUnitInfoAirRTDFull\MarkerMIN_CA.paa";
					w = "1 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
					x = "2.5 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
					y = "2.5 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				};
				class CA_Speed_Analogue_Needle: RscPicture
				{
					h = "5 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					idc = 602;
					text = "\A3\ui_f\data\igui\rscingameui\RscUnitInfoAirRTDFull\analogue_arrow_ca.paa";
					w = "5 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
					x = "1.25 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
					y = "1.25 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				};
				class CA_Speed_Analogue_Value: RscText
				{
					h = "0.5 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					idc = 605;
					shadow = 0;
					sizeEx = "(			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 0.8)";
					style = 2;
					w = "2.5 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
					x = "2.5 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
					y = "0.05 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				};
			};
		};
		class CA_Stability_Analogue: CA_HUDRscControlsGroup
		{
			h = "(7.5 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25))";
			idc = 641;
			w = "(7.5 * 			(			((safezoneW / safezoneH) min 1.2) / 40))";
			x = "(profilenamespace getvariable ['IGUI_GRID_GAUGESTABILITY_X',	(safezoneX + (safezoneW / 2) + 4.25 * 			(			((safezoneW / safezoneH) min 1.2) / 40))])";
			y = "(profilenamespace getvariable ['IGUI_GRID_GAUGESTABILITY_Y',	(safezoneY + safezoneH - 11.7 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25))])";
			class controls
			{
				class CA_Stability_Analogue_Autohover: RscPicture
				{
					colorText[] = {0.988, 0.922, 0.137, 1};
					h = "0.6 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					idc = 546;
					text = "\A3\ui_f\data\igui\rscingameui\RscUnitInfoAirRTDFull\WhiteDot_CA.paa";
					w = "0.6 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
					x = "3.45 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
					y = "3.45 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				};
				class CA_Stability_Analogue_Background: RscPicture
				{
					h = "7.5 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					idc = 648;
					text = "A3\ui_f\data\igui\rscingameui\RscUnitInfoAirRTDFull\analogue_background_stability_ca.paa";
					w = "7.5 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
					x = "0 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
					y = "0 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				};
				class CA_Stability_Analogue_Background_Imperial: RscPicture
				{
					h = "7.5 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					idc = 647;
					text = "A3\ui_f\data\igui\rscingameui\RscUnitInfoAirRTDFull\analogue_background_stability_imp_ca.paa";
					w = "7.5 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
					x = "0 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
					y = "0 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				};
				class CA_Stability_Analogue_Collective: RscPicture
				{
					colorText[] = {0.118, 0.706, 0.302, 1};
					h = "7.5 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					idc = 645;
					text = "A3\ui_f\data\igui\rscingameui\RscUnitInfoAirRTDFull\analogue_right_ca.paa";
					w = "3.75 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
					x = "3.75 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
					y = "0 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				};
				class CA_Stability_Analogue_Speed: RscPicture
				{
					colorText[] = {1, 1, 1, 1};
					h = "0.6 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					idc = 642;
					text = "\A3\ui_f\data\igui\rscingameui\RscUnitInfoAirRTDFull\WhiteDot_CA.paa";
					w = "0.6 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
					x = "1.5 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
					y = "1.5 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				};
				class CA_Stability_Analogue_Value: RscText
				{
					h = "0.5 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					idc = 643;
					shadow = 0;
					sizeEx = "(			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 0.8)";
					style = 2;
					w = "2.5 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
					x = "2.5 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
					y = "0.05 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				};
				class CA_Stability_Analogue_Vertical_Speed_Needle: RscPicture
				{
					colorText[] = {1, 1, 1, 1};
					h = "5 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					idc = 644;
					text = "\A3\ui_f\data\igui\rscingameui\RscUnitInfoAirRTDFull\analogue_arrow_VSI_ca.paa";
					w = "5 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
					x = "1.25 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
					y = "1.25 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				};
			};
		};
	};
	class RscUnitInfoArtillery: RscUnitInfo
	{
		controls[] = {"WeaponInfoControlsGroupRight", "CA_Zeroing", "CA_Mode", "CA_BackgroundVehicle", "CA_BackgroundVehicleTitle", "CA_BackgroundVehicleTitleDark", "CA_BackgroundFuel", "CA_Vehicle", "CA_VehicleRole", "CA_HitZones", "CA_VehicleTogglesBackground", "CA_VehicleToggles", "CA_SpeedBackground", "CA_SpeedUnits", "CA_Speed", "CA_ValueFuel"};
		idd = 300;
		updateHeightByCrew = 0;
		updateWidthByCrew = 0;
		updateWidthByWeapon = 0;
		class CA_Mode: RscText
		{
			colorText[] = {"(profilenamespace getvariable ['IGUI_TEXT_RGB_R',0])", "(profilenamespace getvariable ['IGUI_TEXT_RGB_G',1])", "(profilenamespace getvariable ['IGUI_TEXT_RGB_B',1])", "(profilenamespace getvariable ['IGUI_TEXT_RGB_A',0.8])"};
			h = "1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = 149;
			sizeEx = "0.8 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			w = "4.5 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			x = "3.8 * 					(			((safezoneW / safezoneH) min 1.2) / 40) + 		(profilenamespace getvariable [""IGUI_GRID_WEAPON_X"",		((safezoneX + safezoneW) - 		(10 * 			(			((safezoneW / safezoneH) min 1.2) / 40)) - 4.3 * 			(			((safezoneW / safezoneH) min 1.2) / 40))])";
			y = "1.1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 		(profilenamespace getvariable [""IGUI_GRID_WEAPON_Y"",		(safezoneY + 0.5 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25))])";
		};
		class CA_Zeroing: RscText
		{
			colorText[] = {"(profilenamespace getvariable ['IGUI_TEXT_RGB_R',0])", "(profilenamespace getvariable ['IGUI_TEXT_RGB_G',1])", "(profilenamespace getvariable ['IGUI_TEXT_RGB_B',1])", "(profilenamespace getvariable ['IGUI_TEXT_RGB_A',0.8])"};
			h = "1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = 168;
			sizeEx = "0.8 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			w = "3 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			x = "3.8 * 					(			((safezoneW / safezoneH) min 1.2) / 40) + 		(profilenamespace getvariable [""IGUI_GRID_WEAPON_X"",		((safezoneX + safezoneW) - 		(10 * 			(			((safezoneW / safezoneH) min 1.2) / 40)) - 4.3 * 			(			((safezoneW / safezoneH) min 1.2) / 40))])";
			y = "2.75 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 		(profilenamespace getvariable [""IGUI_GRID_WEAPON_Y"",		(safezoneY + 0.5 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25))])";
		};
		class WeaponInfoControlsGroupRight: RscControlsGroup
		{
			h = "6 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = 2303;
			w = "10 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			x = "3.8 * 					(			((safezoneW / safezoneH) min 1.2) / 40) + 		(profilenamespace getvariable [""IGUI_GRID_WEAPON_X"",		((safezoneX + safezoneW) - 		(10 * 			(			((safezoneW / safezoneH) min 1.2) / 40)) - 4.3 * 			(			((safezoneW / safezoneH) min 1.2) / 40))])";
			y = "0 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 		(profilenamespace getvariable [""IGUI_GRID_WEAPON_Y"",		(safezoneY + 0.5 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25))])";
			class controls
			{
				class CA_AmmoCount: RscText
				{
					colorText[] = {"(profilenamespace getvariable ['IGUI_TEXT_RGB_R',0])", "(profilenamespace getvariable ['IGUI_TEXT_RGB_G',1])", "(profilenamespace getvariable ['IGUI_TEXT_RGB_B',1])", "(profilenamespace getvariable ['IGUI_TEXT_RGB_A',0.8])"};
					h = "1.5 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					idc = 184;
					sizeEx = "1.5 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					style = 1;
					w = "3.5 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					x = "4.5 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					y = "1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				};
				class CA_AmmoType: RscText
				{
					colorText[] = {"(profilenamespace getvariable ['IGUI_TEXT_RGB_R',0])", "(profilenamespace getvariable ['IGUI_TEXT_RGB_G',1])", "(profilenamespace getvariable ['IGUI_TEXT_RGB_B',1])", "(profilenamespace getvariable ['IGUI_TEXT_RGB_A',0.8])"};
					h = "1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					idc = 155;
					sizeEx = "0.8 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					w = "4.5 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					x = "0 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					y = "1.80 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				};
				class CA_BackgroundWeapon: RscPicture
				{
					colorText[] = {"(profilenamespace getvariable ['IGUI_BCG_RGB_R',0])", "(profilenamespace getvariable ['IGUI_BCG_RGB_G',1])", "(profilenamespace getvariable ['IGUI_BCG_RGB_B',1])", "(profilenamespace getvariable ['IGUI_BCG_RGB_A',0.8])"};
					h = "2.5 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					idc = 1202;
					text = "\A3\ui_f\data\igui\rscingameui\rscunitinfo\gradient_ca.paa";
					w = "10 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					x = "0 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					y = "1.2 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				};
				class CA_BackgroundWeaponMode: RscPicture
				{
					colorText[] = {"(profilenamespace getvariable ['IGUI_BCG_RGB_R',0])", "(profilenamespace getvariable ['IGUI_BCG_RGB_G',1])", "(profilenamespace getvariable ['IGUI_BCG_RGB_B',1])", "(profilenamespace getvariable ['IGUI_BCG_RGB_A',0.8])"};
					h = "0.2 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					idc = 1203;
					text = "\A3\ui_f\data\igui\rscingameui\rscunitinfo\mode_background_ca.paa";
					w = "10 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					x = "0 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					y = "1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				};
				class CA_BackgroundWeaponTitle: RscText
				{
					colorBackground[] = {"(profilenamespace getvariable ['IGUI_BCG_RGB_R',0])", "(profilenamespace getvariable ['IGUI_BCG_RGB_G',1])", "(profilenamespace getvariable ['IGUI_BCG_RGB_B',1])", "(profilenamespace getvariable ['IGUI_BCG_RGB_A',0.8])"};
					h = "1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					idc = 1001;
					sizeEx = "0.8 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					w = "10 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					x = "0 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					y = "0 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				};
				class CA_BackgroundWeaponTitleDark: RscText
				{
					colorBackground[] = {0, 0, 0, 0.1};
					h = "1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					idc = 1008;
					sizeEx = "0.8 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					w = "10 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					x = "0 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					y = "0 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				};
				class CA_GrenadeCount: RscText
				{
					colorText[] = {"(profilenamespace getvariable ['IGUI_TEXT_RGB_R',0])", "(profilenamespace getvariable ['IGUI_TEXT_RGB_G',1])", "(profilenamespace getvariable ['IGUI_TEXT_RGB_B',1])", "(profilenamespace getvariable ['IGUI_TEXT_RGB_A',0.8])"};
					h = "1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					idc = 151;
					sizeEx = "0.8 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					style = 1;
					w = "2 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					x = "8 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					y = "2.5 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				};
				class CA_GrenadeType: RscText
				{
					colorText[] = {"(profilenamespace getvariable ['IGUI_TEXT_RGB_R',0])", "(profilenamespace getvariable ['IGUI_TEXT_RGB_G',1])", "(profilenamespace getvariable ['IGUI_TEXT_RGB_B',1])", "(profilenamespace getvariable ['IGUI_TEXT_RGB_A',0.8])"};
					h = "1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					idc = 152;
					sizeEx = "0.8 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					style = 2;
					w = "4.5 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					x = "3.5 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					y = "2.5 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				};
				class CA_GunnerWeapon: RscText
				{
					colorBackground[] = {"(profilenamespace getvariable ['IGUI_BCG_RGB_R',0])", "(profilenamespace getvariable ['IGUI_BCG_RGB_G',1])", "(profilenamespace getvariable ['IGUI_BCG_RGB_B',1])", "(profilenamespace getvariable ['IGUI_BCG_RGB_A',0.8])"};
					colorText[] = {"(profilenamespace getvariable ['IGUI_TEXT_RGB_R',0])", "(profilenamespace getvariable ['IGUI_TEXT_RGB_G',1])", "(profilenamespace getvariable ['IGUI_TEXT_RGB_B',1])", "(profilenamespace getvariable ['IGUI_TEXT_RGB_A',0.8])"};
					h = "1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					idc = 150;
					sizeEx = "0.8 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					style = 1;
					w = "10 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					x = "0 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					y = "4 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				};
				class CA_MagCount: RscText
				{
					colorText[] = {"(profilenamespace getvariable ['IGUI_TEXT_RGB_R',0])", "(profilenamespace getvariable ['IGUI_TEXT_RGB_G',1])", "(profilenamespace getvariable ['IGUI_TEXT_RGB_B',1])", "(profilenamespace getvariable ['IGUI_TEXT_RGB_A',0.8])"};
					h = "1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					idc = 185;
					sizeEx = "0.8 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					w = "2 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					x = "8 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					y = "1.5 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				};
				class CA_Mode: RscText
				{
					colorText[] = {"(profilenamespace getvariable ['IGUI_TEXT_RGB_R',0])", "(profilenamespace getvariable ['IGUI_TEXT_RGB_G',1])", "(profilenamespace getvariable ['IGUI_TEXT_RGB_B',1])", "(profilenamespace getvariable ['IGUI_TEXT_RGB_A',0.8])"};
					h = "1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					idc = -1;
					sizeEx = "0.8 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					w = "4.5 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					x = "-5 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					y = -1;
				};
				class CA_ModeTexture: RscPicture
				{
					colorText[] = {"(profilenamespace getvariable ['IGUI_TEXT_RGB_R',0])", "(profilenamespace getvariable ['IGUI_TEXT_RGB_G',1])", "(profilenamespace getvariable ['IGUI_TEXT_RGB_B',1])", "(profilenamespace getvariable ['IGUI_TEXT_RGB_A',0.8])"};
					h = "0.2 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					idc = 187;
					w = "10 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					x = "0 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					y = "1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				};
				class CA_ValueReload: RscIGProgress
				{
					colorBar[] = {"(profilenamespace getvariable ['IGUI_WARNING_RGB_R',0.8])", "(profilenamespace getvariable ['IGUI_WARNING_RGB_G',0.5])", "(profilenamespace getvariable ['IGUI_WARNING_RGB_B',0.0])", 1};
					colorFrame[] = {0, 0, 0, 0};
					h = "0.2 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					idc = 154;
					style = 0;
					w = "10 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					x = "0 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					y = "1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				};
				class CA_Weapon: RscText
				{
					colorText[] = {"(profilenamespace getvariable ['IGUI_TEXT_RGB_R',0])", "(profilenamespace getvariable ['IGUI_TEXT_RGB_G',1])", "(profilenamespace getvariable ['IGUI_TEXT_RGB_B',1])", "(profilenamespace getvariable ['IGUI_TEXT_RGB_A',0.8])"};
					h = "1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					idc = 118;
					sizeEx = "0.8 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					style = 1;
					w = "10 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					x = "0 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					y = "0 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				};
			};
		};
	};
	class RscUnitInfoMortar: RscUnitInfo
	{
		controls[] = {"WeaponInfoControlsGroupRight", "CA_Zeroing", "CA_Mode"};
		idd = 300;
		updateHeightByCrew = 0;
		updateWidthByCrew = 0;
		updateWidthByWeapon = 0;
		class CA_Mode: RscText
		{
			colorText[] = {"(profilenamespace getvariable ['IGUI_TEXT_RGB_R',0])", "(profilenamespace getvariable ['IGUI_TEXT_RGB_G',1])", "(profilenamespace getvariable ['IGUI_TEXT_RGB_B',1])", "(profilenamespace getvariable ['IGUI_TEXT_RGB_A',0.8])"};
			h = "1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = 149;
			sizeEx = "0.8 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			w = "4.5 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			x = "3.8 * 					(			((safezoneW / safezoneH) min 1.2) / 40) + 		(profilenamespace getvariable [""IGUI_GRID_WEAPON_X"",		((safezoneX + safezoneW) - 		(10 * 			(			((safezoneW / safezoneH) min 1.2) / 40)) - 4.3 * 			(			((safezoneW / safezoneH) min 1.2) / 40))])";
			y = "1.1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 		(profilenamespace getvariable [""IGUI_GRID_WEAPON_Y"",		(safezoneY + 0.5 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25))])";
		};
		class CA_Zeroing: RscText
		{
			colorText[] = {"(profilenamespace getvariable ['IGUI_TEXT_RGB_R',0])", "(profilenamespace getvariable ['IGUI_TEXT_RGB_G',1])", "(profilenamespace getvariable ['IGUI_TEXT_RGB_B',1])", "(profilenamespace getvariable ['IGUI_TEXT_RGB_A',0.8])"};
			h = "1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = 168;
			sizeEx = "0.8 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			w = "3 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			x = "3.8 * 					(			((safezoneW / safezoneH) min 1.2) / 40) + 		(profilenamespace getvariable [""IGUI_GRID_WEAPON_X"",		((safezoneX + safezoneW) - 		(10 * 			(			((safezoneW / safezoneH) min 1.2) / 40)) - 4.3 * 			(			((safezoneW / safezoneH) min 1.2) / 40))])";
			y = "2.75 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 		(profilenamespace getvariable [""IGUI_GRID_WEAPON_Y"",		(safezoneY + 0.5 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25))])";
		};
		class WeaponInfoControlsGroupRight: RscControlsGroup
		{
			h = "6 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = 2303;
			w = "10 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			x = "3.8 * 					(			((safezoneW / safezoneH) min 1.2) / 40) + 		(profilenamespace getvariable [""IGUI_GRID_WEAPON_X"",		((safezoneX + safezoneW) - 		(10 * 			(			((safezoneW / safezoneH) min 1.2) / 40)) - 4.3 * 			(			((safezoneW / safezoneH) min 1.2) / 40))])";
			y = "0 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 		(profilenamespace getvariable [""IGUI_GRID_WEAPON_Y"",		(safezoneY + 0.5 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25))])";
			class controls
			{
				class CA_AmmoCount: RscText
				{
					colorText[] = {"(profilenamespace getvariable ['IGUI_TEXT_RGB_R',0])", "(profilenamespace getvariable ['IGUI_TEXT_RGB_G',1])", "(profilenamespace getvariable ['IGUI_TEXT_RGB_B',1])", "(profilenamespace getvariable ['IGUI_TEXT_RGB_A',0.8])"};
					h = "1.5 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					idc = 184;
					sizeEx = "1.5 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					style = 1;
					w = "3.5 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					x = "4.5 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					y = "1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				};
				class CA_AmmoType: RscText
				{
					colorText[] = {"(profilenamespace getvariable ['IGUI_TEXT_RGB_R',0])", "(profilenamespace getvariable ['IGUI_TEXT_RGB_G',1])", "(profilenamespace getvariable ['IGUI_TEXT_RGB_B',1])", "(profilenamespace getvariable ['IGUI_TEXT_RGB_A',0.8])"};
					h = "1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					idc = 155;
					sizeEx = "0.8 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					w = "4.5 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					x = "0 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					y = "1.80 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				};
				class CA_BackgroundWeapon: RscPicture
				{
					colorText[] = {"(profilenamespace getvariable ['IGUI_BCG_RGB_R',0])", "(profilenamespace getvariable ['IGUI_BCG_RGB_G',1])", "(profilenamespace getvariable ['IGUI_BCG_RGB_B',1])", "(profilenamespace getvariable ['IGUI_BCG_RGB_A',0.8])"};
					h = "2.5 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					idc = 1202;
					text = "\A3\ui_f\data\igui\rscingameui\rscunitinfo\gradient_ca.paa";
					w = "10 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					x = "0 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					y = "1.2 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				};
				class CA_BackgroundWeaponMode: RscPicture
				{
					colorText[] = {"(profilenamespace getvariable ['IGUI_BCG_RGB_R',0])", "(profilenamespace getvariable ['IGUI_BCG_RGB_G',1])", "(profilenamespace getvariable ['IGUI_BCG_RGB_B',1])", "(profilenamespace getvariable ['IGUI_BCG_RGB_A',0.8])"};
					h = "0.2 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					idc = 1203;
					text = "\A3\ui_f\data\igui\rscingameui\rscunitinfo\mode_background_ca.paa";
					w = "10 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					x = "0 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					y = "1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				};
				class CA_BackgroundWeaponTitle: RscText
				{
					colorBackground[] = {"(profilenamespace getvariable ['IGUI_BCG_RGB_R',0])", "(profilenamespace getvariable ['IGUI_BCG_RGB_G',1])", "(profilenamespace getvariable ['IGUI_BCG_RGB_B',1])", "(profilenamespace getvariable ['IGUI_BCG_RGB_A',0.8])"};
					h = "1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					idc = 1001;
					sizeEx = "0.8 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					w = "10 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					x = "0 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					y = "0 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				};
				class CA_BackgroundWeaponTitleDark: RscText
				{
					colorBackground[] = {0, 0, 0, 0.1};
					h = "1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					idc = 1008;
					sizeEx = "0.8 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					w = "10 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					x = "0 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					y = "0 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				};
				class CA_GrenadeCount: RscText
				{
					colorText[] = {"(profilenamespace getvariable ['IGUI_TEXT_RGB_R',0])", "(profilenamespace getvariable ['IGUI_TEXT_RGB_G',1])", "(profilenamespace getvariable ['IGUI_TEXT_RGB_B',1])", "(profilenamespace getvariable ['IGUI_TEXT_RGB_A',0.8])"};
					h = "1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					idc = 151;
					sizeEx = "0.8 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					style = 1;
					w = "2 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					x = "8 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					y = "2.5 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				};
				class CA_GrenadeType: RscText
				{
					colorText[] = {"(profilenamespace getvariable ['IGUI_TEXT_RGB_R',0])", "(profilenamespace getvariable ['IGUI_TEXT_RGB_G',1])", "(profilenamespace getvariable ['IGUI_TEXT_RGB_B',1])", "(profilenamespace getvariable ['IGUI_TEXT_RGB_A',0.8])"};
					h = "1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					idc = 152;
					sizeEx = "0.8 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					style = 2;
					w = "4.5 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					x = "3.5 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					y = "2.5 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				};
				class CA_GunnerWeapon: RscText
				{
					colorBackground[] = {"(profilenamespace getvariable ['IGUI_BCG_RGB_R',0])", "(profilenamespace getvariable ['IGUI_BCG_RGB_G',1])", "(profilenamespace getvariable ['IGUI_BCG_RGB_B',1])", "(profilenamespace getvariable ['IGUI_BCG_RGB_A',0.8])"};
					colorText[] = {"(profilenamespace getvariable ['IGUI_TEXT_RGB_R',0])", "(profilenamespace getvariable ['IGUI_TEXT_RGB_G',1])", "(profilenamespace getvariable ['IGUI_TEXT_RGB_B',1])", "(profilenamespace getvariable ['IGUI_TEXT_RGB_A',0.8])"};
					h = "1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					idc = 150;
					sizeEx = "0.8 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					style = 1;
					w = "10 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					x = "0 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					y = "4 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				};
				class CA_MagCount: RscText
				{
					colorText[] = {"(profilenamespace getvariable ['IGUI_TEXT_RGB_R',0])", "(profilenamespace getvariable ['IGUI_TEXT_RGB_G',1])", "(profilenamespace getvariable ['IGUI_TEXT_RGB_B',1])", "(profilenamespace getvariable ['IGUI_TEXT_RGB_A',0.8])"};
					h = "1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					idc = 185;
					sizeEx = "0.8 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					w = "2 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					x = "8 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					y = "1.5 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				};
				class CA_Mode: RscText
				{
					colorText[] = {"(profilenamespace getvariable ['IGUI_TEXT_RGB_R',0])", "(profilenamespace getvariable ['IGUI_TEXT_RGB_G',1])", "(profilenamespace getvariable ['IGUI_TEXT_RGB_B',1])", "(profilenamespace getvariable ['IGUI_TEXT_RGB_A',0.8])"};
					h = "1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					idc = -1;
					sizeEx = "0.8 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					w = "4.5 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					x = "-5 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					y = -1;
				};
				class CA_ModeTexture: RscPicture
				{
					colorText[] = {"(profilenamespace getvariable ['IGUI_TEXT_RGB_R',0])", "(profilenamespace getvariable ['IGUI_TEXT_RGB_G',1])", "(profilenamespace getvariable ['IGUI_TEXT_RGB_B',1])", "(profilenamespace getvariable ['IGUI_TEXT_RGB_A',0.8])"};
					h = "0.2 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					idc = 187;
					w = "10 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					x = "0 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					y = "1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				};
				class CA_ValueReload: RscIGProgress
				{
					colorBar[] = {"(profilenamespace getvariable ['IGUI_WARNING_RGB_R',0.8])", "(profilenamespace getvariable ['IGUI_WARNING_RGB_G',0.5])", "(profilenamespace getvariable ['IGUI_WARNING_RGB_B',0.0])", 1};
					colorFrame[] = {0, 0, 0, 0};
					h = "0.2 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					idc = 154;
					style = 0;
					w = "10 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					x = "0 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					y = "1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				};
				class CA_Weapon: RscText
				{
					colorText[] = {"(profilenamespace getvariable ['IGUI_TEXT_RGB_R',0])", "(profilenamespace getvariable ['IGUI_TEXT_RGB_G',1])", "(profilenamespace getvariable ['IGUI_TEXT_RGB_B',1])", "(profilenamespace getvariable ['IGUI_TEXT_RGB_A',0.8])"};
					h = "1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					idc = 118;
					sizeEx = "0.8 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					style = 1;
					w = "10 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					x = "0 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					y = "0 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				};
			};
		};
	};
	class RscUnitInfoNoHUD
	{
		idd = 300;
		movingEnable = 0;
	};
	class RscUnitInfoNoWeapon: RscUnitInfo
	{
		controls[] = {"CA_BackgroundVehicle", "CA_BackgroundVehicleTitle", "CA_BackgroundVehicleTitleDark", "CA_BackgroundFuel", "CA_Vehicle", "CA_VehicleRole", "CA_HitZones", "CA_VehicleTogglesBackground", "CA_VehicleToggles", "CA_SpeedBackground", "CA_SpeedUnits", "CA_Speed", "CA_ValueFuel"};
		idd = 300;
		class CA_HitZones: CA_HitZones
		{
			hitZonesName = "HitZonesNoTurret";
		};
	};
	class RscUnitInfoParachute: RscUnitInfo
	{
		controls[] = {"CA_BackgroundVehicle", "CA_BackgroundVehicleTitle", "CA_BackgroundVehicleTitleDark", "CA_BackgroundFuel", "CA_Vehicle", "CA_VehicleRole", "CA_HitZones", "CA_VehicleTogglesBackground", "CA_VehicleToggles", "CA_SpeedBackground", "CA_SpeedUnits", "CA_Speed", "CA_ValueFuel", "CA_AltBackground", "CA_AltUnits", "CA_Alt"};
		idd = 300;
		updateHeightByCrew = 0;
		updateWidthByCrew = 0;
		updateWidthByWeapon = 0;
	};
	class RscUnitInfoShip: RscUnitInfo
	{
		controls[] = {"WeaponInfoControlsGroupRight", "CA_Zeroing", "CA_BackgroundVehicle", "CA_BackgroundVehicleTitle", "CA_BackgroundVehicleTitleDark", "CA_BackgroundFuel", "CA_Vehicle", "CA_VehicleRole", "CA_HitZones", "CA_VehicleTogglesBackground", "CA_VehicleToggles", "CA_SpeedBackground", "CA_SpeedUnits", "CA_Speed", "CA_ValueFuel"};
		idd = 300;
		updateHeightByCrew = 0;
		updateWidthByCrew = 0;
		updateWidthByWeapon = 0;
	};
	class RscUnitInfoSoldier: RscUnitInfo
	{
		controls[] = {"WeaponInfoControlsGroupLeft", "CA_Speed_Freefall", "CA_Alt_Freefall"};
		idd = 300;
		movingEnable = 0;
		class Ammo: RscIGText
		{
			idc = 119;
			style = "0x01 + 0x100";
			text = "ERROR - replace";
			w = 0.378;
			x = 0;
			y = 0.009;
		};
		class AmmoCount: RscIGText
		{
			idc = 184;
			style = "0x01 + 0x100";
			text = "ERROR - replace";
			w = 0.15;
			x = 0.17;
			y = 0.19;
		};
		class Background: RscText
		{
			colorBackground[] = {0.2, 0.15, 0.1, 0.8};
			colorText[] = {0, 0, 0, 0};
			fixedWidth = 0;
			font = "TahomaB";
			h = 0.05;
			idc = 124;
			sizeEx = "( 16 / 408 )";
			style = 128;
			text = "";
			w = 0.385;
			x = 0;
			y = 0;
		};
		class GUI_Bleeding0: RscPicture
		{
			idc = 401;
			text = "";
		};
		class GUI_Bleeding1: RscPicture
		{
			idc = 402;
			text = "";
		};
		class GUI_Body: RscPicture
		{
			idc = 411;
			text = "";
		};
		class GUI_InjuredHands0: RscPicture
		{
			idc = 405;
			text = "";
		};
		class GUI_InjuredHands1: RscPicture
		{
			idc = 406;
			text = "";
		};
		class GUI_InjuredHands2: RscPicture
		{
			idc = 407;
			text = "";
		};
		class GUI_InjuredHead0: RscPicture
		{
			idc = 403;
			text = "";
		};
		class GUI_InjuredHead1: RscPicture
		{
			idc = 404;
			text = "";
		};
		class GUI_InjuredLegs0: RscPicture
		{
			idc = 408;
			text = "";
		};
		class GUI_InjuredLegs1: RscPicture
		{
			idc = 409;
			text = "";
		};
		class GUI_InjuredLegs2: RscPicture
		{
			idc = 410;
			text = "";
		};
		class MagCount: RscIGText
		{
			idc = 185;
			style = "0x01 + 0x100";
			text = "ERROR - replace";
			w = 0.15;
			x = 0.32;
			y = 0.19;
		};
		class Weapon: RscIGText
		{
			idc = 118;
			text = "ERROR - replace";
			w = 0.282;
			x = 0;
			y = 0.008;
		};
	};
	class RscUnitInfoStatic: RscUnitInfo
	{
		controls[] = {"WeaponInfoControlsGroupRight", "CA_Zeroing"};
		idd = 300;
	};
	class RscUnitInfoStaticNoWeapon: RscUnitInfo
	{
		controls[] = {};
		idd = 300;
	};
	class RscUnitInfoSubmarine: RscUnitInfo
	{
		controls[] = {"WeaponInfoControlsGroupRight", "CA_BackgroundVehicle", "CA_BackgroundVehicleTitle", "CA_BackgroundVehicleTitleDark", "CA_BackgroundFuel", "CA_Vehicle", "CA_VehicleRole", "CA_HitZones", "CA_VehicleTogglesBackground", "CA_VehicleToggles", "CA_SpeedBackground", "CA_SpeedUnits", "CA_Speed", "CA_ValueFuel", "CA_AltBackground", "CA_AltUnits", "CA_Depth"};
		idd = 300;
		updateHeightByCrew = 0;
		updateWidthByCrew = 0;
		updateWidthByWeapon = 0;
	};
	class RscUnitInfoTank: RscUnitInfo
	{
		controls[] = {"WeaponInfoControlsGroupRight", "CA_Zeroing", "CA_BackgroundVehicle", "CA_BackgroundVehicleTitle", "CA_BackgroundVehicleTitleDark", "CA_BackgroundFuel", "CA_Vehicle", "CA_VehicleRole", "CA_HitZones", "CA_VehicleTogglesBackground", "CA_VehicleToggles", "CA_SpeedBackground", "CA_SpeedUnits", "CA_Speed", "CA_ValueFuel"};
		idd = 300;
		movingEnable = 0;
		updateHeightByCrew = 0;
		updateWidthByCrew = 0;
		updateWidthByWeapon = 0;
		class Ammo: RscIGText
		{
			idc = 119;
			style = "0x01 + 0x100";
			text = "ERROR - replace";
			w = 0.19;
			x = 0.035;
			y = 0.38;
		};
		class AmmoCount: RscIGText
		{
			idc = 184;
			style = "0x01 + 0x100";
			text = "ERROR - replace";
			w = 0.15;
			x = 0.17;
			y = 0.19;
		};
		class Background: RscText
		{
			colorBackground[] = {0.2, 0.15, 0.1, 0.8};
			colorText[] = {0, 0, 0, 0};
			fixedWidth = 0;
			font = "TahomaB";
			h = 0.25;
			idc = 124;
			sizeEx = 0;
			style = 128;
			text = "";
			w = 0.21;
			x = 0.02;
			y = 0.18;
		};
		class Commander: RscIGText
		{
			idc = 125;
			text = "ERROR - replace";
			w = 0.19;
			x = 0.025;
			y = "0.38 + 0.04";
		};
		class Driver: RscIGText
		{
			idc = 126;
			text = "ERROR - replace";
			w = 0.19;
			x = 0.025;
			y = "0.38 + 3 * 0.04";
		};
		class Gunner: RscIGText
		{
			idc = 127;
			text = "ERROR - replace";
			w = 0.19;
			x = 0.025;
			y = "0.38 + 2 * 0.04";
		};
		class Heading: RscIGText
		{
			idc = 148;
			style = "0x00	+ 0x100";
			w = 0.17;
			x = 0.017;
			y = 0.01;
		};
		class MagCount: RscIGText
		{
			idc = 185;
			style = "0x01 + 0x100";
			text = "ERROR - replace";
			w = 0.15;
			x = 0.32;
			y = 0.19;
		};
		class Weapon: RscIGText
		{
			idc = 118;
			text = "ERROR - replace";
			w = 0.19;
			x = 0.025;
			y = 0.38;
		};
	};
	class RscUnitInfoUAV
	{
		controls[] = {"WeaponInfoControlsGroupRight", "CA_BackgroundVehicle", "CA_BackgroundVehicleTitle", "CA_BackgroundVehicleTitleDark", "CA_BackgroundFuel", "CA_Vehicle", "CA_VehicleRole", "CA_HitZones", "CA_VehicleTogglesBackground", "CA_VehicleToggles", "CA_SpeedBackground", "CA_SpeedUnits", "CA_Speed", "CA_ValueFuel", "CA_AltBackground", "CA_AltUnits", "CA_Alt", "RscTextUAV", "TextPosition", "Position", "TextZoom", "Zoom", "Time", "Date"};
		idd = 300;
		class Date: Time
		{
			idc = 102;
			sizeEx = "0.024*1.2";
			y = "SafeZoneY + SafezoneH - 0.09";
		};
		class Position: TextPosition
		{
			idc = 130;
			style = "0x01 + 0x100";
			x = "0.5 + 	0.13 * safezoneW * 2 + 	0.05 / 2";
			y = "SafeZoneY + SafezoneH - 0.12";
		};
		class RscTextUAV: RscText
		{
			colorbackground[] = {0, 0, 0, 0};
			h = "safezoneH";
			IDC = 1004;
			linespacing = 1;
			style = "0x00 + 0x10 + 0x200";
			text = "";
			type = 0;
			w = "safezoneW";
			x = "safezoneX";
			y = "safezoneY";
		};
		class TextPosition: RscTextUAV
		{
			colortext[] = {1, 1, 1, 1};
			font = "EtelkaMonospacePro";
			h = 0.05;
			sizeEx = "(			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 0.8)*1";
			style = "0x00 + 0x100 + 0x200";
			text = "GRID";
			w = "safezoneW - ((safezoneW - 1) / 2 + (0.5 + 	0.13 * safezoneW * 2 + 	0.05 / 2))";
			x = "0.5 + 	0.13 * safezoneW * 2 + 	0.05 / 2";
			y = "SafeZoneY + SafezoneH - 0.12";
		};
		class TextZoom: TextPosition
		{
			text = "ZOOM";
			y = "SafeZoneY + SafezoneH - 0.08";
		};
		class Time: TextPosition
		{
			idc = 101;
			sizeEx = "(			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 0.8)*1 * 1.5";
			style = "0x02 + 0x100 + 0x200";
			w = 0.4;
			x = "0.5 - 0.2";
			y = "SafeZoneY + SafezoneH - 0.12";
		};
		class Zoom: Position
		{
			idc = 131;
			y = "SafeZoneY + SafezoneH - 0.08";
		};
	};
	class RscUnitVehicle
	{
		controls[] = {"WeaponInfoControlsGroupRight", "CA_Zeroing", "CA_BackgroundVehicle", "CA_BackgroundVehicleTitle", "CA_BackgroundVehicleTitleDark", "CA_BackgroundFuel", "CA_Vehicle", "CA_VehicleRole", "CA_HitZones", "CA_VehicleTogglesBackground", "CA_VehicleToggles", "CA_SpeedBackground", "CA_SpeedUnits", "CA_Speed", "CA_ValueFuel", "CA_AltBackground", "CA_AltUnits", "CA_Alt"};
		idd = 300;
		updateHeightByCrew = 0;
		updateWidthByCrew = 0;
		updateWidthByWeapon = 0;
	};
	class RscWeaponChemicalDetector
	{
		duration = 99999;
		enableSimulation = 1;
		fadeIn = "false";
		fadeOut = "false";
		idd = -1;
		movingEnable = 0;
		onLoad = "[""onLoad"",_this,""RscWeaponChemicalDetector"",'EnochIngameUI'] call 	(uinamespace getvariable 'BIS_fnc_initDisplay')";
		onUnload = "[""onUnload"",_this,""RscWeaponChemicalDetector"",'EnochIngameUI'] call 	(uinamespace getvariable 'BIS_fnc_initDisplay')";
		scriptName = "RscWeaponChemicalDetector";
		scriptPath = "EnochIngameUI";
		class Objects
		{
			class TestObject: RscObject
			{
				direction[] = {0, 0, 1};
				enableZoom = 0;
				idc = 101;
				inBack = 0;
				model = "\a3\UI_F_Contact\Data\Objects\ChemicalDetector_01_ui_F.p3d";
				position[] = {0.0155, -0.026, 0.1};
				positionBack[] = {0.0515, -0.0575, 0.225};
				scale = 0.7;
				type = 82;
				up[] = {0, 1, 0};
				zoomDuration = 0;
				class Areas
				{
					class Usertexture
					{
						selection = "display";
						class Controls {};
					};
				};
			};
		};
	};
	class RscWeaponEmpty
	{
		controls[] = {};
		idd = 300;
	};
	class RscWeaponRangeArtillery
	{
		controls[] = {"CA_IGUI_elements_group", "CA_RangeElements_group"};
		idd = 300;
		class CA_IGUI_elements_group: RscControlsGroup
		{
			h = "40 * 		(0.025 * SafezoneH)";
			idc = 170;
			w = "53.5 * 		(0.01875 * SafezoneH)";
			x = "0 * 		(0.01875 * SafezoneH) + 		(SafezoneX + ((SafezoneW - SafezoneH) / 2))";
			y = "0 * 		(0.025 * SafezoneH) + 		(SafezoneY)";
			class controls
			{
				class CA_Distance: RscText
				{
					colorText[] = {0.706, 0.0745, 0.0196, 1};
					font = "EtelkaMonospacePro";
					h = "1.2 * 		(0.025 * SafezoneH)";
					idc = 173;
					shadow = 0;
					sizeEx = "0.038*SafezoneH";
					style = 1;
					text = "2456";
					w = "5.2 * 		(0.01875 * SafezoneH)";
					x = "13.8 * 		(0.01875 * SafezoneH)";
					y = "29.3 * 		(0.025 * SafezoneH)";
				};
				class CA_distance_text: RscText
				{
					colorText[] = {0.95, 0.95, 0.95, 1};
					font = "EtelkaMonospacePro";
					h = "1.2 * 		(0.025 * SafezoneH)";
					idc = 1010;
					shadow = 0;
					sizeEx = "0.038*SafezoneH";
					style = 0;
					text = "RNG";
					w = "3 * 		(0.01875 * SafezoneH)";
					x = "10.8 * 		(0.01875 * SafezoneH)";
					y = "29.3 * 		(0.025 * SafezoneH)";
				};
				class CA_Elev: RscText
				{
					colorText[] = {0.706, 0.0745, 0.0196, 1};
					font = "EtelkaMonospacePro";
					h = "1.2 * 		(0.025 * SafezoneH)";
					idc = 175;
					shadow = 0;
					sizeEx = "0.038*SafezoneH";
					style = 1;
					text = "80.5";
					w = "5.2 * 		(0.01875 * SafezoneH)";
					x = "36.8 * 		(0.01875 * SafezoneH)";
					y = "29.3 * 		(0.025 * SafezoneH)";
				};
				class CA_Elev_Need: RscText
				{
					colorText[] = {0.706, 0.0745, 0.0196, 1};
					font = "EtelkaMonospacePro";
					h = "1.2 * 		(0.025 * SafezoneH)";
					idc = 176;
					shadow = 0;
					sizeEx = "0.038*SafezoneH";
					style = 1;
					text = "35.4";
					w = "5.2 * 		(0.01875 * SafezoneH)";
					x = "36.8 * 		(0.01875 * SafezoneH)";
					y = "30.8 * 		(0.025 * SafezoneH)";
				};
				class CA_Elev_Need_text: RscText
				{
					colorText[] = {0.95, 0.95, 0.95, 1};
					font = "EtelkaMonospacePro";
					h = "1.2 * 		(0.025 * SafezoneH)";
					idc = 1014;
					shadow = 0;
					sizeEx = "0.038*SafezoneH";
					style = 0;
					text = "REL";
					w = "3 * 		(0.01875 * SafezoneH)";
					x = "33.8 * 		(0.01875 * SafezoneH)";
					y = "30.8 * 		(0.025 * SafezoneH)";
				};
				class CA_Elev_text: RscText
				{
					colorText[] = {0.95, 0.95, 0.95, 1};
					font = "EtelkaMonospacePro";
					h = "1.2 * 		(0.025 * SafezoneH)";
					idc = 1013;
					shadow = 0;
					sizeEx = "0.038*SafezoneH";
					style = 0;
					text = "ELV";
					w = "3 * 		(0.01875 * SafezoneH)";
					x = "33.8 * 		(0.01875 * SafezoneH)";
					y = "29.3 * 		(0.025 * SafezoneH)";
				};
				class CA_ElevCtrl_text: RscText
				{
					colorText[] = {0.95, 0.95, 0.95, 1};
					font = "EtelkaMonospacePro";
					h = "1 * 		(0.025 * SafezoneH)";
					idc = 1015;
					shadow = 0;
					sizeEx = "0.028*SafezoneH";
					style = 0;
					text = "ELEV CTRL";
					w = "7.5 * 		(0.01875 * SafezoneH)";
					x = "33.8 * 		(0.01875 * SafezoneH)";
					y = "27.8 * 		(0.025 * SafezoneH)";
				};
				class CA_Heading: RscText
				{
					colorText[] = {0.706, 0.0745, 0.0196, 1};
					font = "EtelkaMonospacePro";
					h = "1 * 		(0.025 * SafezoneH)";
					idc = 156;
					shadow = 0;
					sizeEx = "0.028*SafezoneH";
					style = 0;
					text = "015";
					w = "2.2 * 		(0.01875 * SafezoneH)";
					x = "25.3 * 		(0.01875 * SafezoneH)";
					y = "6.3 * 		(0.025 * SafezoneH)";
				};
				class CA_OpticsPitch: RscText
				{
					colorText[] = {0.706, 0.0745, 0.0196, 1};
					font = "EtelkaMonospacePro";
					h = "1.1 * 		(0.025 * SafezoneH)";
					idc = 182;
					shadow = 0;
					sizeEx = "0.028*SafezoneH";
					style = 1;
					text = "34.5";
					w = "3.5 * 		(0.01875 * SafezoneH)";
					x = "11.8 * 		(0.01875 * SafezoneH)";
					y = "19.46 * 		(0.025 * SafezoneH)";
				};
				class CA_OpticsZoom: RscText
				{
					colorText[] = {0.706, 0.0745, 0.0196, 1};
					font = "EtelkaMonospacePro";
					h = "1.1 * 		(0.025 * SafezoneH)";
					idc = 180;
					shadow = 0;
					sizeEx = "0.028*SafezoneH";
					style = 1;
					text = "4.5";
					w = "3.5 * 		(0.01875 * SafezoneH)";
					x = "38.3 * 		(0.01875 * SafezoneH)";
					y = "19.46 * 		(0.025 * SafezoneH)";
				};
				class CA_Solution_text: RscText
				{
					colorText[] = {0.95, 0.95, 0.95, 1};
					font = "EtelkaMonospacePro";
					h = "1 * 		(0.025 * SafezoneH)";
					idc = 1011;
					shadow = 0;
					sizeEx = "0.028*SafezoneH";
					style = 0;
					text = "SOLUTION";
					w = "7.5 * 		(0.01875 * SafezoneH)";
					x = "10.8 * 		(0.01875 * SafezoneH)";
					y = "27.8 * 		(0.025 * SafezoneH)";
				};
				class CA_Time: RscText
				{
					colorText[] = {0.706, 0.0745, 0.0196, 1};
					font = "EtelkaMonospacePro";
					h = "1.2 * 		(0.025 * SafezoneH)";
					idc = 174;
					shadow = 0;
					sizeEx = "0.038*SafezoneH";
					style = 1;
					text = "25";
					w = "5.2 * 		(0.01875 * SafezoneH)";
					x = "13.8 * 		(0.01875 * SafezoneH)";
					y = "30.8 * 		(0.025 * SafezoneH)";
				};
				class CA_time_text: RscText
				{
					colorText[] = {0.95, 0.95, 0.95, 1};
					font = "EtelkaMonospacePro";
					h = "1.2 * 		(0.025 * SafezoneH)";
					idc = 1012;
					shadow = 0;
					sizeEx = "0.038*SafezoneH";
					style = 0;
					text = "TRV";
					w = "3 * 		(0.01875 * SafezoneH)";
					x = "10.8 * 		(0.01875 * SafezoneH)";
					y = "30.8 * 		(0.025 * SafezoneH)";
				};
				class CA_VisionMode: RscText
				{
					colorText[] = {0.706, 0.0745, 0.0196, 1};
					font = "EtelkaMonospacePro";
					h = "1.2 * 		(0.025 * SafezoneH)";
					idc = 179;
					shadow = 0;
					sizeEx = "0.028*SafezoneH";
					style = 0;
					text = "VIS";
					w = "4.5 * 		(0.01875 * SafezoneH)";
					x = "10.5 * 		(0.01875 * SafezoneH)";
					y = "32.6 * 		(0.025 * SafezoneH)";
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
		class CA_RangeElements_group: RscControlsGroup
		{
			h = "40 * 		(0.025 * SafezoneH)";
			idc = 177;
			w = "53.5 * 		(0.01875 * SafezoneH)";
			x = "0 * 		(0.01875 * SafezoneH) + 		(SafezoneX + ((SafezoneW - SafezoneH) / 2))";
			y = "0 * 		(0.025 * SafezoneH) + 		(SafezoneY)";
			class controls
			{
				class CA_OORange: RscText
				{
					colorText[] = {0.706, 0.0745, 0.0196, 1};
					font = "EtelkaMonospacePro";
					h = "1.2 * 		(0.025 * SafezoneH)";
					idc = 1007;
					shadow = 0;
					sizeEx = "0.028*SafezoneH";
					style = 2;
					text = "[RANGE]";
					w = "4.5 * 		(0.01875 * SafezoneH)";
					x = "24.5 * 		(0.01875 * SafezoneH)";
					y = "32.6 * 		(0.025 * SafezoneH)";
				};
				class CA_OORangeCross: RscText
				{
					h = "12 * 		(0.025 * SafezoneH)";
					idc = 1009;
					shadow = 0;
					sizeEx = "0.36*SafezoneH";
					style = "0x30 + 0x800";
					text = "A3\weapons_f\acc\Data\reticle_mk6_outofrange_CA.paa";
					w = "12.5 * 		(0.01875 * SafezoneH)";
					x = "20.5 * 		(0.01875 * SafezoneH)";
					y = "14 * 		(0.025 * SafezoneH)";
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
	};
	class RscWeaponRangeArtilleryAuto
	{
		controls[] = {"CA_IGUI_elements_group", "CA_RangeElements_group", "CA_AutoElements_group"};
		idd = 300;
		class CA_AutoElements_group: RscControlsGroup
		{
			h = "40 * 		(0.025 * SafezoneH)";
			idc = 178;
			w = "53.5 * 		(0.01875 * SafezoneH)";
			x = "0 * 		(0.01875 * SafezoneH) + 		(SafezoneX + ((SafezoneW - SafezoneH) / 2))";
			y = "0 * 		(0.025 * SafezoneH) + 		(SafezoneY)";
			class controls
			{
				class CA_Auto: RscText
				{
					colorText[] = {0.706, 0.0745, 0.0196, 1};
					font = "EtelkaMonospacePro";
					h = "1.2 * 		(0.025 * SafezoneH)";
					idc = 1016;
					shadow = 0;
					sizeEx = "0.028*SafezoneH";
					style = 1;
					text = "AUTO";
					w = "4.5 * 		(0.01875 * SafezoneH)";
					x = "38.7 * 		(0.01875 * SafezoneH)";
					y = "32.6 * 		(0.025 * SafezoneH)";
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
		class CA_IGUI_elements_group: RscControlsGroup
		{
			h = "40 * 		(0.025 * SafezoneH)";
			idc = 170;
			w = "53.5 * 		(0.01875 * SafezoneH)";
			x = "0 * 		(0.01875 * SafezoneH) + 		(SafezoneX + ((SafezoneW - SafezoneH) / 2))";
			y = "0 * 		(0.025 * SafezoneH) + 		(SafezoneY)";
			class controls
			{
				class CA_Distance: RscText
				{
					colorText[] = {0.706, 0.0745, 0.0196, 1};
					font = "EtelkaMonospacePro";
					h = "1.2 * 		(0.025 * SafezoneH)";
					idc = 173;
					shadow = 0;
					sizeEx = "0.038*SafezoneH";
					style = 1;
					text = "2456";
					w = "5.2 * 		(0.01875 * SafezoneH)";
					x = "13.8 * 		(0.01875 * SafezoneH)";
					y = "29.3 * 		(0.025 * SafezoneH)";
				};
				class CA_distance_text: RscText
				{
					colorText[] = {0.95, 0.95, 0.95, 1};
					font = "EtelkaMonospacePro";
					h = "1.2 * 		(0.025 * SafezoneH)";
					idc = 1010;
					shadow = 0;
					sizeEx = "0.038*SafezoneH";
					style = 0;
					text = "RNG";
					w = "3 * 		(0.01875 * SafezoneH)";
					x = "10.8 * 		(0.01875 * SafezoneH)";
					y = "29.3 * 		(0.025 * SafezoneH)";
				};
				class CA_Elev: RscText
				{
					colorText[] = {0.706, 0.0745, 0.0196, 1};
					font = "EtelkaMonospacePro";
					h = "1.2 * 		(0.025 * SafezoneH)";
					idc = 175;
					shadow = 0;
					sizeEx = "0.038*SafezoneH";
					style = 1;
					text = "-80.5";
					w = "5.2 * 		(0.01875 * SafezoneH)";
					x = "36.8 * 		(0.01875 * SafezoneH)";
					y = "29.3 * 		(0.025 * SafezoneH)";
				};
				class CA_Elev_Need: RscText
				{
					colorText[] = {0.706, 0.0745, 0.0196, 1};
					font = "EtelkaMonospacePro";
					h = "1.2 * 		(0.025 * SafezoneH)";
					idc = 176;
					shadow = 0;
					sizeEx = "0.038*SafezoneH";
					style = 1;
					text = "-35.4";
					w = "5.2 * 		(0.01875 * SafezoneH)";
					x = "36.8 * 		(0.01875 * SafezoneH)";
					y = "30.8 * 		(0.025 * SafezoneH)";
				};
				class CA_Elev_Need_text: RscText
				{
					colorText[] = {0.95, 0.95, 0.95, 1};
					font = "EtelkaMonospacePro";
					h = "1.2 * 		(0.025 * SafezoneH)";
					idc = 1014;
					shadow = 0;
					sizeEx = "0.038*SafezoneH";
					style = 0;
					text = "REL";
					w = "3 * 		(0.01875 * SafezoneH)";
					x = "33.8 * 		(0.01875 * SafezoneH)";
					y = "30.8 * 		(0.025 * SafezoneH)";
				};
				class CA_Elev_text: RscText
				{
					colorText[] = {0.95, 0.95, 0.95, 1};
					font = "EtelkaMonospacePro";
					h = "1.2 * 		(0.025 * SafezoneH)";
					idc = 1013;
					shadow = 0;
					sizeEx = "0.038*SafezoneH";
					style = 0;
					text = "ELV";
					w = "3 * 		(0.01875 * SafezoneH)";
					x = "33.8 * 		(0.01875 * SafezoneH)";
					y = "29.3 * 		(0.025 * SafezoneH)";
				};
				class CA_ElevCtrl_text: RscText
				{
					colorText[] = {0.95, 0.95, 0.95, 1};
					font = "EtelkaMonospacePro";
					h = "1 * 		(0.025 * SafezoneH)";
					idc = 1015;
					shadow = 0;
					sizeEx = "0.028*SafezoneH";
					style = 0;
					text = "ELEV CTRL";
					w = "7.5 * 		(0.01875 * SafezoneH)";
					x = "33.8 * 		(0.01875 * SafezoneH)";
					y = "27.8 * 		(0.025 * SafezoneH)";
				};
				class CA_Heading: RscText
				{
					colorText[] = {0.706, 0.0745, 0.0196, 1};
					font = "EtelkaMonospacePro";
					h = "1 * 		(0.025 * SafezoneH)";
					idc = 156;
					shadow = 0;
					sizeEx = "0.028*SafezoneH";
					style = 0;
					text = "015";
					w = "2.2 * 		(0.01875 * SafezoneH)";
					x = "25.3 * 		(0.01875 * SafezoneH)";
					y = "6.3 * 		(0.025 * SafezoneH)";
				};
				class CA_OpticsPitch: RscText
				{
					colorText[] = {0.706, 0.0745, 0.0196, 1};
					font = "EtelkaMonospacePro";
					h = "1.1 * 		(0.025 * SafezoneH)";
					idc = 182;
					shadow = 0;
					sizeEx = "0.028*SafezoneH";
					style = 1;
					text = "34.5";
					w = "3.5 * 		(0.01875 * SafezoneH)";
					x = "11.8 * 		(0.01875 * SafezoneH)";
					y = "19.46 * 		(0.025 * SafezoneH)";
				};
				class CA_OpticsZoom: RscText
				{
					colorText[] = {0.706, 0.0745, 0.0196, 1};
					font = "EtelkaMonospacePro";
					h = "1.1 * 		(0.025 * SafezoneH)";
					idc = 180;
					shadow = 0;
					sizeEx = "0.028*SafezoneH";
					style = 1;
					text = "4.5";
					w = "3.5 * 		(0.01875 * SafezoneH)";
					x = "38.3 * 		(0.01875 * SafezoneH)";
					y = "19.46 * 		(0.025 * SafezoneH)";
				};
				class CA_Solution_text: RscText
				{
					colorText[] = {0.95, 0.95, 0.95, 1};
					font = "EtelkaMonospacePro";
					h = "1 * 		(0.025 * SafezoneH)";
					idc = 1011;
					shadow = 0;
					sizeEx = "0.028*SafezoneH";
					style = 0;
					text = "SOLUTION";
					w = "7.5 * 		(0.01875 * SafezoneH)";
					x = "10.8 * 		(0.01875 * SafezoneH)";
					y = "27.8 * 		(0.025 * SafezoneH)";
				};
				class CA_Time: RscText
				{
					colorText[] = {0.706, 0.0745, 0.0196, 1};
					font = "EtelkaMonospacePro";
					h = "1.2 * 		(0.025 * SafezoneH)";
					idc = 174;
					shadow = 0;
					sizeEx = "0.038*SafezoneH";
					style = 1;
					text = "25";
					w = "5.2 * 		(0.01875 * SafezoneH)";
					x = "13.8 * 		(0.01875 * SafezoneH)";
					y = "30.8 * 		(0.025 * SafezoneH)";
				};
				class CA_time_text: RscText
				{
					colorText[] = {0.95, 0.95, 0.95, 1};
					font = "EtelkaMonospacePro";
					h = "1.2 * 		(0.025 * SafezoneH)";
					idc = 1012;
					shadow = 0;
					sizeEx = "0.038*SafezoneH";
					style = 0;
					text = "TRV";
					w = "3 * 		(0.01875 * SafezoneH)";
					x = "10.8 * 		(0.01875 * SafezoneH)";
					y = "30.8 * 		(0.025 * SafezoneH)";
				};
				class CA_VisionMode: RscText
				{
					colorText[] = {0.706, 0.0745, 0.0196, 1};
					font = "EtelkaMonospacePro";
					h = "1.2 * 		(0.025 * SafezoneH)";
					idc = 179;
					shadow = 0;
					sizeEx = "0.028*SafezoneH";
					style = 0;
					text = "VIS";
					w = "4.5 * 		(0.01875 * SafezoneH)";
					x = "10.5 * 		(0.01875 * SafezoneH)";
					y = "32.6 * 		(0.025 * SafezoneH)";
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
		class CA_RangeElements_group: RscControlsGroup
		{
			h = "40 * 		(0.025 * SafezoneH)";
			idc = 177;
			w = "53.5 * 		(0.01875 * SafezoneH)";
			x = "0 * 		(0.01875 * SafezoneH) + 		(SafezoneX + ((SafezoneW - SafezoneH) / 2))";
			y = "0 * 		(0.025 * SafezoneH) + 		(SafezoneY)";
			class controls
			{
				class CA_OORange: RscText
				{
					colorText[] = {0.706, 0.0745, 0.0196, 1};
					font = "EtelkaMonospacePro";
					h = "1.2 * 		(0.025 * SafezoneH)";
					idc = 1007;
					shadow = 0;
					sizeEx = "0.028*SafezoneH";
					style = 2;
					text = "[RANGE]";
					w = "4.5 * 		(0.01875 * SafezoneH)";
					x = "24.5 * 		(0.01875 * SafezoneH)";
					y = "32.6 * 		(0.025 * SafezoneH)";
				};
				class CA_OORangeCross: RscText
				{
					h = "12 * 		(0.025 * SafezoneH)";
					idc = 1009;
					shadow = 0;
					sizeEx = "0.36*SafezoneH";
					style = "0x30 + 0x800";
					text = "A3\weapons_f\acc\Data\reticle_mk6_outofrange_CA.paa";
					w = "12.5 * 		(0.01875 * SafezoneH)";
					x = "20.5 * 		(0.01875 * SafezoneH)";
					y = "14 * 		(0.025 * SafezoneH)";
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
	};
	class RscWeaponRangeFinder
	{
		controls[] = {"CA_Distance"};
		idd = 300;
		class CA_Distance: RscText
		{
			font = "EtelkaMonospacePro";
			h = "1.3 * 		(0.025 * SafezoneH)";
			idc = 198;
			shadow = 0;
			sizeEx = "0.028 * SafezoneH";
			style = 0;
			w = "3.6 * 		(0.01875 * SafezoneH)";
			x = "25.25 * 		(0.01875 * SafezoneH) + 		(SafezoneX + ((SafezoneW - SafezoneH) / 2))";
			y = "30 * 		(0.025 * SafezoneH) + 		(SafezoneY)";
		};
	};
	class RscWeaponRangeFinderAbramsCom
	{
		controls[] = {"CA_Distance"};
		idd = 300;
		class CA_Distance: RscOpticsValue
		{
			colorText[] = {0.8706, 0.2275, 0.2, 1};
			h = "0.05*SafezoneH";
			idc = 198;
			sizeEx = "0.038*SafezoneH";
			style = 2;
			w = 0.207;
			x = 0.4;
			y = "(SafezoneY+SafezoneH*0.8)";
		};
	};
	class RscWeaponRangeFinderAbramsGun
	{
		controls[] = {"CA_Distance"};
		idd = 300;
		class CA_Distance: RscOpticsValue
		{
			h = "0.05*SafezoneH";
			idc = 198;
			sizeEx = "0.038*SafezoneH";
			style = 2;
			w = 0.207;
			x = 0.4;
			y = "(SafezoneY+SafezoneH*0.8)";
		};
	};
	class RscWeaponRangeFinderMAAWS
	{
		controls[] = {"CA_IGUI_elements_group"};
		idd = 300;
		class CA_IGUI_elements_group: RscControlsGroup
		{
			h = "SafezoneH";
			idc = 170;
			w = "SafezoneW";
			x = "SafezoneX";
			y = "SafezoneY";
			class Controls
			{
				class CA_Distance: RscOpticsValue
				{
					colorText[] = {0.8196, 0.1412, 0.1412, 1};
					h = "0.05*SafezoneH";
					idc = 198;
					shadow = 0;
					sizeEx = "0.038*SafezoneH";
					style = 2;
					w = 0.207;
					x = "0.4-SafeZoneX";
					y = "SafezoneH*0.8";
				};
			};
			class HScrollbar: HScrollbar
			{
				color[] = {1, 1, 1, 0};
				height = 0.001;
			};
			class VScrollbar: VScrollbar
			{
				autoScrollDelay = 5;
				autoScrollRewind = 0;
				autoScrollSpeed = -1;
				color[] = {1, 1, 1, 0};
				width = 0.001;
			};
		};
	};
	class RscWeaponRangeFinderPAS13
	{
		controls[] = {"CA_Distance"};
		idd = 300;
		class CA_Distance: RscOpticsValue
		{
			h = "0.05*SafezoneH";
			idc = 198;
			sizeEx = "0.038*SafezoneH";
			style = 2;
			w = 0.207;
			x = 0.4;
			y = "(SafezoneY+SafezoneH*0.8)";
		};
	};
	class RscWeaponRangeFinderStrykerMGSGun
	{
		controls[] = {"CA_Distance"};
		idd = 300;
		class CA_Distance: RscOpticsValue
		{
			h = "0.05*SafezoneH";
			idc = 198;
			sizeEx = "0.038*SafezoneH";
			style = 2;
			w = 0.207;
			x = 0.4;
			y = "(SafezoneY+SafezoneH*0.8)";
		};
	};
	class RscWeaponRangeZeroing: RscUnitInfo
	{
		controls[] = {"CA_Zeroing", "CA_DistanceText", "CA_Distance"};
		idd = 300;
		class CA_Distance: RscOpticsValue
		{
			colorText[] = {1, 0.15, 0.15, 0.65};
			font = "EtelkaMonospacePro";
			h = 0.05;
			idc = 198;
			shadow = 0;
			style = 2;
			w = 1;
			x = 0;
			y = "(SafezoneY+SafezoneH) - 0.195";
		};
		class CA_DistanceText: RscOpticsText
		{
			colorText[] = {1, 0, 0, 1};
			h = 0.05;
			idc = -1;
			style = 2;
			w = 1;
			x = 0;
			y = "(SafezoneY+SafezoneH) - 0.05";
		};
	};
	class RscWeaponZeroing: RscUnitInfo
	{
		controls[] = {"CA_Zeroing"};
		idd = 300;
		class CA_Zeroing: RscText
		{
			colorText[] = {"(profilenamespace getvariable ['IGUI_TEXT_RGB_R',0])", "(profilenamespace getvariable ['IGUI_TEXT_RGB_G',1])", "(profilenamespace getvariable ['IGUI_TEXT_RGB_B',1])", "(profilenamespace getvariable ['IGUI_TEXT_RGB_A',0.8])"};
			h = "1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = 168;
			sizeEx = "0.8 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			w = "3 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			x = "0 * 					(			((safezoneW / safezoneH) min 1.2) / 40) + 		(profilenamespace getvariable [""IGUI_GRID_WEAPON_X"",		((safezoneX + safezoneW) - 		(10 * 			(			((safezoneW / safezoneH) min 1.2) / 40)) - 4.3 * 			(			((safezoneW / safezoneH) min 1.2) / 40))])";
			y = "2.5 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 		(profilenamespace getvariable [""IGUI_GRID_WEAPON_Y"",		(safezoneY + 0.5 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25))])";
		};
	};
	class UnitInfoAirplane: RscUnitInfoAir {};
	class UnitInfoCar: RscUnitInfo {};
	class UnitInfoHelicopter: RscUnitInfoAir {};
	class UnitInfoShip: RscUnitInfo {};
	class UnitInfoSoldier: RscUnitInfoSoldier {};
	class UnitInfoTank: RscUnitInfoTank {};
};
