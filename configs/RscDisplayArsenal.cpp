class RscDisplayArsenal
{
	enableSimulation = 1;
	icon = "\A3\Ui_f\data\Logos\a_64_ca.paa";
	idd = -1;
	logo = "\A3\Ui_f\data\Logos\arsenal_1024_ca.paa";
	onLoad = "[""onLoad"",_this,""RscDisplayArsenal"",'GUI'] call 	(uinamespace getvariable 'BIS_fnc_initDisplay')";
	onUnload = "[""onUnload"",_this,""RscDisplayArsenal"",'GUI'] call 	(uinamespace getvariable 'BIS_fnc_initDisplay')";
	scriptName = "RscDisplayArsenal";
	scriptPath = "GUI";
	class Controls
	{
		class ArrowLeft: RscButton
		{
			h = "1 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = 992;
			text = "-";
			w = "1 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
			x = -1;
			y = -1;
		};
		class ArrowRight: ArrowLeft
		{
			h = "1 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = 993;
			text = "+";
			w = "1 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
			x = -1;
			y = -1;
		};
		class BackgroundLeft: RscText
		{
			colorBackground[] = {0, 0, 0, 0.5};
			fade = 1;
			h = "safezoneH - 2.5 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = 994;
			w = "15 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
			x = "safezoneX + (1 + 1.5 * 	1) * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
			y = "safezoneY + 0.5 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
		};
		class BackgroundRight: BackgroundLeft
		{
			idc = 995;
			x = "safezoneX + safezoneW - 17.5 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
		};
		class ControlBar: RscControlsGroupNoScrollbars
		{
			h = "1 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = 44046;
			w = "safezoneW";
			x = "0.5 * 			(			((safezoneW / safezoneH) min 1.2) / 40) + 			(safezoneX)";
			y = "23.5 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 			(safezoneY + safezoneH - 			(			((safezoneW / safezoneH) min 1.2) / 1.2))";
			class controls
			{
				class ButtonClose: RscButtonMenu
				{
					h = "1 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					idc = 44448;
					shortcuts[] = {"0x00050000 + 1"};
					text = "Close";
					tooltip = "Close the Arsenal [Escape]";
					w = "((safezoneW - 1 * 			(			((safezoneW / safezoneH) min 1.2) / 40)) * 0.2) - 0.1 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
					x = "0 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
					y = "0 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				};
				class ButtonExport: ButtonInterface
				{
					idc = 44148;
					text = "Export";
					tooltip = "Export the current loadout to be used in scripts or shared with others [Ctrl + C]";
					x = "6 * 	((safezoneW - 1 * 			(			((safezoneW / safezoneH) min 1.2) / 40)) * 0.1)";
				};
				class ButtonImport: ButtonInterface
				{
					idc = 44149;
					text = "Import";
					tooltip = "Import an exported loadout or unit classname [Ctrl + V]";
					x = "7 * 	((safezoneW - 1 * 			(			((safezoneW / safezoneH) min 1.2) / 40)) * 0.1)";
				};
				class ButtonInterface: ButtonClose
				{
					idc = 44151;
					text = "Hide";
					tooltip = "Hide the interface [Backspace]";
					w = "((safezoneW - 1 * 			(			((safezoneW / safezoneH) min 1.2) / 40)) * 0.1) - 0.1 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
					x = "2 * 	((safezoneW - 1 * 			(			((safezoneW / safezoneH) min 1.2) / 40)) * 0.1)";
				};
				class ButtonLoad: ButtonInterface
				{
					idc = 44147;
					text = "Load";
					tooltip = "Open a saved loadout [Ctrl + O]";
					x = "5 * 	((safezoneW - 1 * 			(			((safezoneW / safezoneH) min 1.2) / 40)) * 0.1)";
				};
				class ButtonOK: ButtonClose
				{
					idc = 44346;
					shortcuts[] = {"0x00050000 + 0", 28, 57, 156};
					text = "Try";
					tooltip = "Try the current loadout";
					x = "8 * 	((safezoneW - 1 * 			(			((safezoneW / safezoneH) min 1.2) / 40)) * 0.1)";
				};
				class ButtonRandom: ButtonInterface
				{
					idc = 44150;
					text = "Random";
					tooltip = "Randomize the loadout [Ctrl + R]";
					x = "3 * 	((safezoneW - 1 * 			(			((safezoneW / safezoneH) min 1.2) / 40)) * 0.1)";
				};
				class ButtonSave: ButtonInterface
				{
					idc = 44146;
					text = "Save";
					tooltip = "Save the current loadout [Ctrl + S]";
					x = "4 * 	((safezoneW - 1 * 			(			((safezoneW / safezoneH) min 1.2) / 40)) * 0.1)";
				};
			};
		};
		class FrameLeft: RscFrame
		{
			colorText[] = {0, 0, 0, 1};
			fade = 1;
			h = "safezoneH - 2.5 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = 1801;
			w = "15 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
			x = "safezoneX + (1 + 1.5 * 	1) * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
			y = "safezoneY + 0.5 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
		};
		class FrameRight: FrameLeft
		{
			fade = 1;
			idc = 1802;
			x = "safezoneX + safezoneW - 17.5 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
		};
		class IconBackgroundBackpack: RscPicture
		{
			colorText[] = {0, 0, 0, 0.8};
			h = "1.4 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = "830 + 						5";
			text = "\A3\Ui_f\data\GUI\Rsc\RscDisplayArsenal\icon_ca.paa";
			w = "1.4 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
			x = -1;
			y = -1;
		};
		class IconBackgroundBinoculars: RscPicture
		{
			colorText[] = {0, 0, 0, 0.8};
			h = "1.4 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = "830 + 						9";
			text = "\A3\Ui_f\data\GUI\Rsc\RscDisplayArsenal\icon_ca.paa";
			w = "1.4 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
			x = -1;
			y = -1;
		};
		class IconBackgroundCargoMag: RscPicture
		{
			colorText[] = {0, 0, 0, 0.8};
			h = "1.4 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = "830 + 						21";
			text = "\A3\Ui_f\data\GUI\Rsc\RscDisplayArsenal\icon_ca.paa";
			w = "1.4 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
			x = -1;
			y = -1;
		};
		class IconBackgroundCargoMagAll: RscPicture
		{
			colorText[] = {0, 0, 0, 0.8};
			h = "1.4 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = "830 + 						26";
			text = "\A3\Ui_f\data\GUI\Rsc\RscDisplayArsenal\icon_ca.paa";
			w = "1.4 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
			x = -1;
			y = -1;
		};
		class IconBackgroundCargoMisc: RscPicture
		{
			colorText[] = {0, 0, 0, 0.8};
			h = "1.4 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = "830 + 						24";
			text = "\A3\Ui_f\data\GUI\Rsc\RscDisplayArsenal\icon_ca.paa";
			w = "1.4 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
			x = -1;
			y = -1;
		};
		class IconBackgroundCargoPut: RscPicture
		{
			colorText[] = {0, 0, 0, 0.8};
			h = "1.4 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = "830 + 						23";
			text = "\A3\Ui_f\data\GUI\Rsc\RscDisplayArsenal\icon_ca.paa";
			w = "1.4 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
			x = -1;
			y = -1;
		};
		class IconBackgroundCargoThrow: RscPicture
		{
			colorText[] = {0, 0, 0, 0.8};
			h = "1.4 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = "830 + 						22";
			text = "\A3\Ui_f\data\GUI\Rsc\RscDisplayArsenal\icon_ca.paa";
			w = "1.4 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
			x = -1;
			y = -1;
		};
		class IconBackgroundCompass: RscPicture
		{
			colorText[] = {0, 0, 0, 0.8};
			h = "1.4 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = "830 + 						13";
			text = "\A3\Ui_f\data\GUI\Rsc\RscDisplayArsenal\icon_ca.paa";
			w = "1.4 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
			x = -1;
			y = -1;
		};
		class IconBackgroundFace: RscPicture
		{
			colorText[] = {0, 0, 0, 0.8};
			h = "1.4 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = "830 + 								15";
			text = "\A3\Ui_f\data\GUI\Rsc\RscDisplayArsenal\icon_ca.paa";
			w = "1.4 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
			x = -1;
			y = -1;
		};
		class IconBackgroundGoggles: RscPicture
		{
			colorText[] = {0, 0, 0, 0.8};
			h = "1.4 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = "830 + 						7";
			text = "\A3\Ui_f\data\GUI\Rsc\RscDisplayArsenal\icon_ca.paa";
			w = "1.4 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
			x = -1;
			y = -1;
		};
		class IconBackgroundGPS: RscPicture
		{
			colorText[] = {0, 0, 0, 0.8};
			h = "1.4 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = "830 + 								11";
			text = "\A3\Ui_f\data\GUI\Rsc\RscDisplayArsenal\icon_ca.paa";
			w = "1.4 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
			x = -1;
			y = -1;
		};
		class IconBackgroundHandgun: RscPicture
		{
			colorText[] = {0, 0, 0, 0.8};
			h = "1.4 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = "830 + 						2";
			text = "\A3\Ui_f\data\GUI\Rsc\RscDisplayArsenal\icon_ca.paa";
			w = "1.4 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
			x = -1;
			y = -1;
		};
		class IconBackgroundHeadgear: RscPicture
		{
			colorText[] = {0, 0, 0, 0.8};
			h = "1.4 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = "830 + 						6";
			text = "\A3\Ui_f\data\GUI\Rsc\RscDisplayArsenal\icon_ca.paa";
			w = "1.4 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
			x = -1;
			y = -1;
		};
		class IconBackgroundInsignia: RscPicture
		{
			colorText[] = {0, 0, 0, 0.8};
			h = "1.4 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = "830 + 						17";
			text = "\A3\Ui_f\data\GUI\Rsc\RscDisplayArsenal\icon_ca.paa";
			w = "1.4 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
			x = -1;
			y = -1;
		};
		class IconBackgroundItemAcc: RscPicture
		{
			colorText[] = {0, 0, 0, 0.8};
			h = "1.4 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = "830 + 						19";
			text = "\A3\Ui_f\data\GUI\Rsc\RscDisplayArsenal\icon_ca.paa";
			w = "1.4 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
			x = -1;
			y = -1;
		};
		class IconBackgroundItemBipod: RscPicture
		{
			colorText[] = {0, 0, 0, 0.8};
			h = "1.4 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = "830 + 						25";
			text = "\A3\Ui_f\data\GUI\Rsc\RscDisplayArsenal\icon_ca.paa";
			w = "1.4 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
			x = -1;
			y = -1;
		};
		class IconBackgroundItemMuzzle: RscPicture
		{
			colorText[] = {0, 0, 0, 0.8};
			h = "1.4 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = "830 + 						20";
			text = "\A3\Ui_f\data\GUI\Rsc\RscDisplayArsenal\icon_ca.paa";
			w = "1.4 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
			x = -1;
			y = -1;
		};
		class IconBackgroundItemOptic: RscPicture
		{
			colorText[] = {0, 0, 0, 0.8};
			h = "1.4 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = "830 + 						18";
			text = "\A3\Ui_f\data\GUI\Rsc\RscDisplayArsenal\icon_ca.paa";
			w = "1.4 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
			x = -1;
			y = -1;
		};
		class IconBackgroundMap: RscPicture
		{
			colorText[] = {0, 0, 0, 0.8};
			h = "1.4 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = "830 + 								10";
			text = "\A3\Ui_f\data\GUI\Rsc\RscDisplayArsenal\icon_ca.paa";
			w = "1.4 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
			x = -1;
			y = -1;
		};
		class IconBackgroundNVGs: RscPicture
		{
			colorText[] = {0, 0, 0, 0.8};
			h = "1.4 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = "830 + 								8";
			text = "\A3\Ui_f\data\GUI\Rsc\RscDisplayArsenal\icon_ca.paa";
			w = "1.4 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
			x = -1;
			y = -1;
		};
		class IconBackgroundPrimaryWeapon: RscPicture
		{
			colorText[] = {0, 0, 0, 0.8};
			h = "1.4 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = "830 + 						0";
			text = "\A3\Ui_f\data\GUI\Rsc\RscDisplayArsenal\icon_ca.paa";
			w = "1.4 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
			x = -1;
			y = -1;
		};
		class IconBackgroundRadio: RscPicture
		{
			colorText[] = {0, 0, 0, 0.8};
			h = "1.4 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = "830 + 								12";
			text = "\A3\Ui_f\data\GUI\Rsc\RscDisplayArsenal\icon_ca.paa";
			w = "1.4 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
			x = -1;
			y = -1;
		};
		class IconBackgroundSecondaryWeapon: RscPicture
		{
			colorText[] = {0, 0, 0, 0.8};
			h = "1.4 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = "830 + 				1";
			text = "\A3\Ui_f\data\GUI\Rsc\RscDisplayArsenal\icon_ca.paa";
			w = "1.4 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
			x = -1;
			y = -1;
		};
		class IconBackgroundUniform: RscPicture
		{
			colorText[] = {0, 0, 0, 0.8};
			h = "1.4 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = "830 + 						3";
			text = "\A3\Ui_f\data\GUI\Rsc\RscDisplayArsenal\icon_ca.paa";
			w = "1.4 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
			x = -1;
			y = -1;
		};
		class IconBackgroundVest: RscPicture
		{
			colorText[] = {0, 0, 0, 0.8};
			h = "1.4 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = "830 + 								4";
			text = "\A3\Ui_f\data\GUI\Rsc\RscDisplayArsenal\icon_ca.paa";
			w = "1.4 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
			x = -1;
			y = -1;
		};
		class IconBackgroundVoice: RscPicture
		{
			colorText[] = {0, 0, 0, 0.8};
			h = "1.4 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = "830 + 								16";
			text = "\A3\Ui_f\data\GUI\Rsc\RscDisplayArsenal\icon_ca.paa";
			w = "1.4 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
			x = -1;
			y = -1;
		};
		class IconBackgroundWatch: RscPicture
		{
			colorText[] = {0, 0, 0, 0.8};
			h = "1.4 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = "830 + 								14";
			text = "\A3\Ui_f\data\GUI\Rsc\RscDisplayArsenal\icon_ca.paa";
			w = "1.4 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
			x = -1;
			y = -1;
		};
		class IconBackpack: TabBackpack
		{
			colorBackground[] = {1, 1, 1, 0};
			h = "1.4 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = "900 + 						5";
			idcx = 905;
			x = -1;
			y = -1;
		};
		class IconBinoculars: TabBinoculars
		{
			colorBackground[] = {1, 1, 1, 0};
			h = "1.4 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = "900 + 						9";
			idcx = 909;
			x = -1;
			y = -1;
		};
		class IconCargoMag: TabCargoMag
		{
			colorBackground[] = {1, 1, 1, 0};
			h = "1.4 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = "900 + 						21";
			idcx = 921;
			x = -1;
			y = -1;
		};
		class IconCargoMagAll: TabCargoMagAll
		{
			colorBackground[] = {1, 1, 1, 0};
			h = "1.4 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = "900 + 						26";
			idcx = 926;
			x = -1;
			y = -1;
		};
		class IconCargoMisc: TabCargoMisc
		{
			colorBackground[] = {1, 1, 1, 0};
			h = "1.4 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = "900 + 						24";
			idcx = 924;
			x = -1;
			y = -1;
		};
		class IconCargoPut: TabCargoPut
		{
			colorBackground[] = {1, 1, 1, 0};
			h = "1.4 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = "900 + 						23";
			idcx = 923;
			x = -1;
			y = -1;
		};
		class IconCargoThrow: TabCargoThrow
		{
			colorBackground[] = {1, 1, 1, 0};
			h = "1.4 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = "900 + 						22";
			idcx = 922;
			x = -1;
			y = -1;
		};
		class IconCompass: TabCompass
		{
			colorBackground[] = {1, 1, 1, 0};
			h = "1.4 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = "900 + 						13";
			idcx = 913;
			x = -1;
			y = -1;
		};
		class IconFace: TabFace
		{
			colorBackground[] = {1, 1, 1, 0};
			h = "1.4 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = "900 + 								15";
			idcx = 915;
			x = -1;
			y = -1;
		};
		class IconGoggles: TabGoggles
		{
			colorBackground[] = {1, 1, 1, 0};
			h = "1.4 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = "900 + 						7";
			idcx = 907;
			x = -1;
			y = -1;
		};
		class IconGPS: TabGPS
		{
			colorBackground[] = {1, 1, 1, 0};
			h = "1.4 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = "900 + 								11";
			idcx = 911;
			x = -1;
			y = -1;
		};
		class IconHandgun: TabHandgun
		{
			colorBackground[] = {1, 1, 1, 0};
			h = "1.4 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = "900 + 						2";
			idcx = 902;
			x = -1;
			y = -1;
		};
		class IconHeadgear: TabHeadgear
		{
			colorBackground[] = {1, 1, 1, 0};
			h = "1.4 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = "900 + 						6";
			idcx = 906;
			x = -1;
			y = -1;
		};
		class IconInsignia: TabInsignia
		{
			colorBackground[] = {1, 1, 1, 0};
			h = "1.4 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = "900 + 						17";
			idcx = 917;
			x = -1;
			y = -1;
		};
		class IconItemAcc: TabItemAcc
		{
			colorBackground[] = {1, 1, 1, 0};
			h = "1.4 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = "900 + 						19";
			idcx = 919;
			x = -1;
			y = -1;
		};
		class IconItemBipod: TabItemBipod
		{
			colorBackground[] = {1, 1, 1, 0};
			h = "1.4 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = "900 + 						25";
			idcx = 925;
			x = -1;
			y = -1;
		};
		class IconItemMuzzle: TabItemMuzzle
		{
			colorBackground[] = {1, 1, 1, 0};
			h = "1.4 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = "900 + 						20";
			idcx = 920;
			x = -1;
			y = -1;
		};
		class IconItemOptic: TabItemOptic
		{
			colorBackground[] = {1, 1, 1, 0};
			h = "1.4 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = "900 + 						18";
			idcx = 918;
			x = -1;
			y = -1;
		};
		class IconMap: TabMap
		{
			colorBackground[] = {1, 1, 1, 0};
			h = "1.4 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = "900 + 								10";
			idcx = 910;
			x = -1;
			y = -1;
		};
		class IconNVGs: TabNVGs
		{
			colorBackground[] = {1, 1, 1, 0};
			h = "1.4 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = "900 + 								8";
			idcx = 908;
			x = -1;
			y = -1;
		};
		class IconPrimaryWeapon: TabPrimaryWeapon
		{
			colorBackground[] = {1, 1, 1, 0};
			h = "1.4 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = "900 + 						0";
			idcx = 900;
			x = -1;
			y = -1;
		};
		class IconRadio: TabRadio
		{
			colorBackground[] = {1, 1, 1, 0};
			h = "1.4 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = "900 + 								12";
			idcx = 912;
			x = -1;
			y = -1;
		};
		class IconSecondaryWeapon: TabSecondaryWeapon
		{
			colorBackground[] = {1, 1, 1, 0};
			h = "1.4 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = "900 + 				1";
			idcx = 901;
			x = -1;
			y = -1;
		};
		class IconUniform: TabUniform
		{
			colorBackground[] = {1, 1, 1, 0};
			h = "1.4 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = "900 + 						3";
			idcx = 903;
			x = -1;
			y = -1;
		};
		class IconVest: TabVest
		{
			colorBackground[] = {1, 1, 1, 0};
			h = "1.4 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = "900 + 								4";
			idcx = 904;
			x = -1;
			y = -1;
		};
		class IconVoice: TabVoice
		{
			colorBackground[] = {1, 1, 1, 0};
			h = "1.4 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = "900 + 								16";
			idcx = 916;
			x = -1;
			y = -1;
		};
		class IconWatch: TabWatch
		{
			colorBackground[] = {1, 1, 1, 0};
			h = "1.4 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = "900 + 								14";
			idcx = 914;
			x = -1;
			y = -1;
		};
		class Info: RscControlsGroup
		{
			fade = 1;
			h = "3 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = 25815;
			w = "17.6 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
			x = "safezoneX + safezoneW - 20.1 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
			y = "safezoneY + safezoneH - 4.5 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			class controls
			{
				class DLCBackground: RscText
				{
					colorBackground[] = {0, 0, 0, 0.5};
					fade = 1;
					h = "2.5 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					idc = 24518;
					w = "2.5 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
					x = "0 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
					y = "0 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				};
				class DLCIcon: RscActivePicture
				{
					color[] = {1, 1, 1, 1};
					colorActive[] = {1, 1, 1, 1};
					enabled = 0;
					fade = 1;
					h = "2.5 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					idc = 24715;
					text = "#(argb,8,8,3)color(1,1,1,1)";
					w = "2.5 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
					x = "0 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
					y = "0 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				};
				class InfoAuthor: RscText
				{
					colorText[] = {1, 1, 1, 0.5};
					h = "1.5 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					idc = 24517;
					sizeEx = "0.8 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					w = "15 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
					x = "2.6 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
					y = "1 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				};
				class InfoBackground: RscText
				{
					colorBackground[] = {0, 0, 0, 1};
					h = "2.5 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					idc = 24515;
					w = "15 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
					x = "2.6 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
					y = "0 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				};
				class InfoName: RscText
				{
					h = "1.5 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					idc = 24516;
					sizeEx = "1.5 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					w = "15 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
					x = "2.6 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
					y = "0 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				};
			};
		};
		class LineIcon: RscFrame
		{
			colorText[] = {0, 0, 0, 1};
			fade = 1;
			h = 0;
			idc = 1803;
			w = 0;
			x = -1;
			y = -1;
		};
		class LineTabLeft: RscText
		{
			colorBackground[] = {0, 0, 0, 1};
			fade = 1;
			h = "1.4 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = 1804;
			w = "0.6 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
			x = -1;
			y = -1;
		};
		class LineTabLeftSelected: RscText
		{
			colorBackground[] = {0, 0, 0, 0.8};
			h = "1.4 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = 1805;
			w = "0.5 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
			x = "safezoneX";
			y = -1;
		};
		class LineTabRight: LineTabLeft
		{
			idc = 1806;
		};
		class ListBackpack: RscListBox
		{
			colorBackground[] = {0, 0, 0, 0};
			colorPictureRightSelected[] = {1, 1, 1, 1};
			colorPictureSelected[] = {1, 1, 1, 1};
			colorSelect[] = {1, 1, 1, 1};
			colorSelect2[] = {1, 1, 1, 1};
			colorSelectBackground[] = {1, 1, 1, 0.5};
			colorSelectBackground2[] = {1, 1, 1, 0.5};
			h = "safezoneH - 2.5 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) - 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = "960 + 					5";
			idcx = 965;
			sizeEx = "1.4 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			w = "15 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
			x = "safezoneX + 2.5 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
			y = "safezoneY + 1.5 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
		};
		class ListBinoculars: RscListBox
		{
			colorBackground[] = {0, 0, 0, 0};
			colorPictureRightSelected[] = {1, 1, 1, 1};
			colorPictureSelected[] = {1, 1, 1, 1};
			colorSelect[] = {1, 1, 1, 1};
			colorSelect2[] = {1, 1, 1, 1};
			colorSelectBackground[] = {1, 1, 1, 0.5};
			colorSelectBackground2[] = {1, 1, 1, 0.5};
			h = "safezoneH - 2.5 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) - 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = "960 + 					9";
			idcx = 969;
			sizeEx = "1.4 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			w = "15 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
			x = "safezoneX + 2.5 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
			y = "safezoneY + 1.5 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
		};
		class ListCargoMag: RscListNBox
		{
			colorSelect[] = {1, 1, 1, 1};
			colorSelect2[] = {1, 1, 1, 1};
			colorSelectBackground[] = {1, 1, 1, 0.5};
			colorSelectBackground2[] = {1, 1, 1, 0.5};
			columns[] = {0.07, 0.15, 0.75};
			disableOverflow = 1;
			drawSideArrows = 1;
			h = "safezoneH - 12.0 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = "960 + 					21";
			idcLeft = 992;
			idcRight = 993;
			idcx = 981;
			sizeEx = "1.4 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			w = "15 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
			x = "safezoneX + safezoneW - 17.5 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
			y = "safezoneY + 0.5 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
		};
		class ListCargoMagAll: RscListNBox
		{
			colorSelect[] = {1, 1, 1, 1};
			colorSelect2[] = {1, 1, 1, 1};
			colorSelectBackground[] = {1, 1, 1, 0.5};
			colorSelectBackground2[] = {1, 1, 1, 0.5};
			columns[] = {0.07, 0.15, 0.75};
			disableOverflow = 1;
			drawSideArrows = 1;
			h = "safezoneH - 12.0 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = "960 + 					26";
			idcLeft = 992;
			idcRight = 993;
			idcx = 986;
			sizeEx = "1.4 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			w = "15 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
			x = "safezoneX + safezoneW - 17.5 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
			y = "safezoneY + 0.5 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
		};
		class ListCargoMisc: RscListNBox
		{
			colorSelect[] = {1, 1, 1, 1};
			colorSelect2[] = {1, 1, 1, 1};
			colorSelectBackground[] = {1, 1, 1, 0.5};
			colorSelectBackground2[] = {1, 1, 1, 0.5};
			columns[] = {0.07, 0.15, 0.75};
			disableOverflow = 1;
			drawSideArrows = 1;
			h = "safezoneH - 12.0 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = "960 + 					24";
			idcLeft = 992;
			idcRight = 993;
			idcx = 984;
			sizeEx = "1.4 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			w = "15 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
			x = "safezoneX + safezoneW - 17.5 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
			y = "safezoneY + 0.5 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
		};
		class ListCargoPut: RscListNBox
		{
			colorSelect[] = {1, 1, 1, 1};
			colorSelect2[] = {1, 1, 1, 1};
			colorSelectBackground[] = {1, 1, 1, 0.5};
			colorSelectBackground2[] = {1, 1, 1, 0.5};
			columns[] = {0.07, 0.15, 0.75};
			disableOverflow = 1;
			drawSideArrows = 1;
			h = "safezoneH - 12.0 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = "960 + 					23";
			idcLeft = 992;
			idcRight = 993;
			idcx = 983;
			sizeEx = "1.4 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			w = "15 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
			x = "safezoneX + safezoneW - 17.5 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
			y = "safezoneY + 0.5 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
		};
		class ListCargoThrow: RscListNBox
		{
			colorSelect[] = {1, 1, 1, 1};
			colorSelect2[] = {1, 1, 1, 1};
			colorSelectBackground[] = {1, 1, 1, 0.5};
			colorSelectBackground2[] = {1, 1, 1, 0.5};
			columns[] = {0.07, 0.15, 0.75};
			disableOverflow = 1;
			drawSideArrows = 1;
			h = "safezoneH - 12.0 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = "960 + 					22";
			idcLeft = 992;
			idcRight = 993;
			idcx = 982;
			sizeEx = "1.4 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			w = "15 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
			x = "safezoneX + safezoneW - 17.5 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
			y = "safezoneY + 0.5 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
		};
		class ListCompass: RscListBox
		{
			colorBackground[] = {0, 0, 0, 0};
			colorPictureRightSelected[] = {1, 1, 1, 1};
			colorPictureSelected[] = {1, 1, 1, 1};
			colorSelect[] = {1, 1, 1, 1};
			colorSelect2[] = {1, 1, 1, 1};
			colorSelectBackground[] = {1, 1, 1, 0.5};
			colorSelectBackground2[] = {1, 1, 1, 0.5};
			h = "safezoneH - 2.5 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) - 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = "960 + 					13";
			idcx = 973;
			sizeEx = "1.4 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			w = "15 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
			x = "safezoneX + 2.5 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
			y = "safezoneY + 1.5 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
		};
		class ListFace: RscListBox
		{
			colorBackground[] = {0, 0, 0, 0};
			colorPictureRightSelected[] = {1, 1, 1, 1};
			colorPictureSelected[] = {1, 1, 1, 1};
			colorSelect[] = {1, 1, 1, 1};
			colorSelect2[] = {1, 1, 1, 1};
			colorSelectBackground[] = {1, 1, 1, 0.5};
			colorSelectBackground2[] = {1, 1, 1, 0.5};
			h = "safezoneH - 2.5 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) - 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = "960 + 							15";
			idcx = 975;
			sizeEx = "1.4 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			w = "15 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
			x = "safezoneX + 2.5 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
			y = "safezoneY + 1.5 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
		};
		class ListGoggles: RscListBox
		{
			colorBackground[] = {0, 0, 0, 0};
			colorPictureRightSelected[] = {1, 1, 1, 1};
			colorPictureSelected[] = {1, 1, 1, 1};
			colorSelect[] = {1, 1, 1, 1};
			colorSelect2[] = {1, 1, 1, 1};
			colorSelectBackground[] = {1, 1, 1, 0.5};
			colorSelectBackground2[] = {1, 1, 1, 0.5};
			h = "safezoneH - 2.5 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) - 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = "960 + 					7";
			idcx = 967;
			sizeEx = "1.4 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			w = "15 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
			x = "safezoneX + 2.5 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
			y = "safezoneY + 1.5 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
		};
		class ListGPS: RscListBox
		{
			colorBackground[] = {0, 0, 0, 0};
			colorPictureRightSelected[] = {1, 1, 1, 1};
			colorPictureSelected[] = {1, 1, 1, 1};
			colorSelect[] = {1, 1, 1, 1};
			colorSelect2[] = {1, 1, 1, 1};
			colorSelectBackground[] = {1, 1, 1, 0.5};
			colorSelectBackground2[] = {1, 1, 1, 0.5};
			h = "safezoneH - 2.5 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) - 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = "960 + 							11";
			idcx = 971;
			sizeEx = "1.4 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			w = "15 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
			x = "safezoneX + 2.5 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
			y = "safezoneY + 1.5 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
		};
		class ListHandgun: RscListBox
		{
			colorBackground[] = {0, 0, 0, 0};
			colorPictureRightSelected[] = {1, 1, 1, 1};
			colorPictureSelected[] = {1, 1, 1, 1};
			colorSelect[] = {1, 1, 1, 1};
			colorSelect2[] = {1, 1, 1, 1};
			colorSelectBackground[] = {1, 1, 1, 0.5};
			colorSelectBackground2[] = {1, 1, 1, 0.5};
			h = "safezoneH - 2.5 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) - 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = "960 + 					2";
			idcx = 962;
			sizeEx = "1.4 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			w = "15 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
			x = "safezoneX + 2.5 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
			y = "safezoneY + 1.5 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
		};
		class ListHeadgear: RscListBox
		{
			colorBackground[] = {0, 0, 0, 0};
			colorPictureRightSelected[] = {1, 1, 1, 1};
			colorPictureSelected[] = {1, 1, 1, 1};
			colorSelect[] = {1, 1, 1, 1};
			colorSelect2[] = {1, 1, 1, 1};
			colorSelectBackground[] = {1, 1, 1, 0.5};
			colorSelectBackground2[] = {1, 1, 1, 0.5};
			h = "safezoneH - 2.5 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) - 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = "960 + 					6";
			idcx = 966;
			sizeEx = "1.4 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			w = "15 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
			x = "safezoneX + 2.5 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
			y = "safezoneY + 1.5 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
		};
		class ListInsignia: RscListBox
		{
			colorBackground[] = {0, 0, 0, 0};
			colorPictureRightSelected[] = {1, 1, 1, 1};
			colorPictureSelected[] = {1, 1, 1, 1};
			colorSelect[] = {1, 1, 1, 1};
			colorSelect2[] = {1, 1, 1, 1};
			colorSelectBackground[] = {1, 1, 1, 0.5};
			colorSelectBackground2[] = {1, 1, 1, 0.5};
			h = "safezoneH - 2.5 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) - 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = "960 + 					17";
			idcx = 977;
			sizeEx = "1.4 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			w = "15 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
			x = "safezoneX + 2.5 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
			y = "safezoneY + 1.5 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
		};
		class ListItemAcc: RscListBox
		{
			colorBackground[] = {0, 0, 0, 0};
			colorPictureRightSelected[] = {1, 1, 1, 1};
			colorPictureSelected[] = {1, 1, 1, 1};
			colorSelect[] = {1, 1, 1, 1};
			colorSelect2[] = {1, 1, 1, 1};
			colorSelectBackground[] = {1, 1, 1, 0.5};
			colorSelectBackground2[] = {1, 1, 1, 0.5};
			h = "safezoneH - 12.0 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) - 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = "960 + 					19";
			idcx = 979;
			sizeEx = "1.4 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			w = "15 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
			x = "safezoneX + safezoneW - 17.5 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
			y = "safezoneY + 1.5 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
		};
		class ListItemBipod: RscListBox
		{
			colorBackground[] = {0, 0, 0, 0};
			colorPictureRightSelected[] = {1, 1, 1, 1};
			colorPictureSelected[] = {1, 1, 1, 1};
			colorSelect[] = {1, 1, 1, 1};
			colorSelect2[] = {1, 1, 1, 1};
			colorSelectBackground[] = {1, 1, 1, 0.5};
			colorSelectBackground2[] = {1, 1, 1, 0.5};
			h = "safezoneH - 12.0 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) - 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = "960 + 					25";
			idcx = 985;
			sizeEx = "1.4 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			w = "15 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
			x = "safezoneX + safezoneW - 17.5 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
			y = "safezoneY + 1.5 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
		};
		class ListItemMuzzle: RscListBox
		{
			colorBackground[] = {0, 0, 0, 0};
			colorPictureRightSelected[] = {1, 1, 1, 1};
			colorPictureSelected[] = {1, 1, 1, 1};
			colorSelect[] = {1, 1, 1, 1};
			colorSelect2[] = {1, 1, 1, 1};
			colorSelectBackground[] = {1, 1, 1, 0.5};
			colorSelectBackground2[] = {1, 1, 1, 0.5};
			h = "safezoneH - 12.0 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) - 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = "960 + 					20";
			idcx = 980;
			sizeEx = "1.4 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			w = "15 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
			x = "safezoneX + safezoneW - 17.5 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
			y = "safezoneY + 1.5 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
		};
		class ListItemOptic: RscListBox
		{
			colorBackground[] = {0, 0, 0, 0};
			colorPictureRightSelected[] = {1, 1, 1, 1};
			colorPictureSelected[] = {1, 1, 1, 1};
			colorSelect[] = {1, 1, 1, 1};
			colorSelect2[] = {1, 1, 1, 1};
			colorSelectBackground[] = {1, 1, 1, 0.5};
			colorSelectBackground2[] = {1, 1, 1, 0.5};
			h = "safezoneH - 12.0 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) - 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = "960 + 					18";
			idcx = 978;
			sizeEx = "1.4 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			w = "15 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
			x = "safezoneX + safezoneW - 17.5 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
			y = "safezoneY + 1.5 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
		};
		class ListMap: RscListBox
		{
			colorBackground[] = {0, 0, 0, 0};
			colorPictureRightSelected[] = {1, 1, 1, 1};
			colorPictureSelected[] = {1, 1, 1, 1};
			colorSelect[] = {1, 1, 1, 1};
			colorSelect2[] = {1, 1, 1, 1};
			colorSelectBackground[] = {1, 1, 1, 0.5};
			colorSelectBackground2[] = {1, 1, 1, 0.5};
			h = "safezoneH - 2.5 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) - 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = "960 + 							10";
			idcx = 970;
			sizeEx = "1.4 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			w = "15 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
			x = "safezoneX + 2.5 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
			y = "safezoneY + 1.5 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
		};
		class ListNVGs: RscListBox
		{
			colorBackground[] = {0, 0, 0, 0};
			colorPictureRightSelected[] = {1, 1, 1, 1};
			colorPictureSelected[] = {1, 1, 1, 1};
			colorSelect[] = {1, 1, 1, 1};
			colorSelect2[] = {1, 1, 1, 1};
			colorSelectBackground[] = {1, 1, 1, 0.5};
			colorSelectBackground2[] = {1, 1, 1, 0.5};
			h = "safezoneH - 2.5 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) - 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = "960 + 							8";
			idcx = 968;
			sizeEx = "1.4 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			w = "15 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
			x = "safezoneX + 2.5 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
			y = "safezoneY + 1.5 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
		};
		class ListPrimaryWeapon: RscListBox
		{
			colorBackground[] = {0, 0, 0, 0};
			colorPictureRightSelected[] = {1, 1, 1, 1};
			colorPictureSelected[] = {1, 1, 1, 1};
			colorSelect[] = {1, 1, 1, 1};
			colorSelect2[] = {1, 1, 1, 1};
			colorSelectBackground[] = {1, 1, 1, 0.5};
			colorSelectBackground2[] = {1, 1, 1, 0.5};
			h = "safezoneH - 2.5 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) - 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = "960 + 					0";
			idcx = 960;
			sizeEx = "1.4 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			w = "15 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
			x = "safezoneX + 2.5 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
			y = "safezoneY + 1.5 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
		};
		class ListRadio: RscListBox
		{
			colorBackground[] = {0, 0, 0, 0};
			colorPictureRightSelected[] = {1, 1, 1, 1};
			colorPictureSelected[] = {1, 1, 1, 1};
			colorSelect[] = {1, 1, 1, 1};
			colorSelect2[] = {1, 1, 1, 1};
			colorSelectBackground[] = {1, 1, 1, 0.5};
			colorSelectBackground2[] = {1, 1, 1, 0.5};
			h = "safezoneH - 2.5 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) - 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = "960 + 							12";
			idcx = 972;
			sizeEx = "1.4 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			w = "15 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
			x = "safezoneX + 2.5 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
			y = "safezoneY + 1.5 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
		};
		class ListSecondaryWeapon: RscListBox
		{
			colorBackground[] = {0, 0, 0, 0};
			colorPictureRightSelected[] = {1, 1, 1, 1};
			colorPictureSelected[] = {1, 1, 1, 1};
			colorSelect[] = {1, 1, 1, 1};
			colorSelect2[] = {1, 1, 1, 1};
			colorSelectBackground[] = {1, 1, 1, 0.5};
			colorSelectBackground2[] = {1, 1, 1, 0.5};
			h = "safezoneH - 2.5 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) - 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = "960 + 			1";
			idcx = 961;
			sizeEx = "1.4 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			w = "15 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
			x = "safezoneX + 2.5 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
			y = "safezoneY + 1.5 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
		};
		class ListUniform: RscListBox
		{
			colorBackground[] = {0, 0, 0, 0};
			colorPictureRightSelected[] = {1, 1, 1, 1};
			colorPictureSelected[] = {1, 1, 1, 1};
			colorSelect[] = {1, 1, 1, 1};
			colorSelect2[] = {1, 1, 1, 1};
			colorSelectBackground[] = {1, 1, 1, 0.5};
			colorSelectBackground2[] = {1, 1, 1, 0.5};
			h = "safezoneH - 2.5 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) - 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = "960 + 					3";
			idcx = 963;
			sizeEx = "1.4 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			w = "15 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
			x = "safezoneX + 2.5 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
			y = "safezoneY + 1.5 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
		};
		class ListVest: RscListBox
		{
			colorBackground[] = {0, 0, 0, 0};
			colorPictureRightSelected[] = {1, 1, 1, 1};
			colorPictureSelected[] = {1, 1, 1, 1};
			colorSelect[] = {1, 1, 1, 1};
			colorSelect2[] = {1, 1, 1, 1};
			colorSelectBackground[] = {1, 1, 1, 0.5};
			colorSelectBackground2[] = {1, 1, 1, 0.5};
			h = "safezoneH - 2.5 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) - 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = "960 + 							4";
			idcx = 964;
			sizeEx = "1.4 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			w = "15 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
			x = "safezoneX + 2.5 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
			y = "safezoneY + 1.5 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
		};
		class ListVoice: RscListBox
		{
			colorBackground[] = {0, 0, 0, 0};
			colorPictureRightSelected[] = {1, 1, 1, 1};
			colorPictureSelected[] = {1, 1, 1, 1};
			colorSelect[] = {1, 1, 1, 1};
			colorSelect2[] = {1, 1, 1, 1};
			colorSelectBackground[] = {1, 1, 1, 0.5};
			colorSelectBackground2[] = {1, 1, 1, 0.5};
			h = "safezoneH - 2.5 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) - 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = "960 + 							16";
			idcx = 976;
			sizeEx = "1.4 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			w = "15 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
			x = "safezoneX + 2.5 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
			y = "safezoneY + 1.5 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
		};
		class ListWatch: RscListBox
		{
			colorBackground[] = {0, 0, 0, 0};
			colorPictureRightSelected[] = {1, 1, 1, 1};
			colorPictureSelected[] = {1, 1, 1, 1};
			colorSelect[] = {1, 1, 1, 1};
			colorSelect2[] = {1, 1, 1, 1};
			colorSelectBackground[] = {1, 1, 1, 0.5};
			colorSelectBackground2[] = {1, 1, 1, 0.5};
			h = "safezoneH - 2.5 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) - 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = "960 + 							14";
			idcx = 974;
			sizeEx = "1.4 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			w = "15 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
			x = "safezoneX + 2.5 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
			y = "safezoneY + 1.5 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
		};
		class Load: RscProgress
		{
			colorBar[] = {1, 1, 1, 1};
			colorFrame[] = {0, 0, 0, 1};
			fade = 1;
			h = "1 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = 990;
			style = 0;
			texture = "#(argb,8,8,3)color(1,1,1,1)";
			w = "safezoneW";
			x = "safezoneX";
			y = "safezoneY + safezoneH - 0.0 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
		};
		class LoadCargo: Load
		{
			fade = 1;
			h = "1 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = 991;
			w = "15 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
			x = "safezoneX + safezoneW - 17.5 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
			y = "safezoneY + safezoneH - 11.5 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
		};
		class Message: RscText
		{
			colorBackground[] = {0, 0, 0, 0.7};
			fade = 1;
			h = "1.5 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = 996;
			shadow = 0;
			sizeEx = "0.8 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			style = 2;
			text = "";
			w = "((safezoneW - 36 * 			(			((safezoneW / safezoneH) min 1.2) / 40)) max 0.4)";
			x = "safezoneX + (0.5 * safezoneW) - (0.5 * ((safezoneW - 36 * 			(			((safezoneW / safezoneH) min 1.2) / 40)) max 0.4))";
			y = "21.5 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 			(safezoneY + safezoneH - 			(			((safezoneW / safezoneH) min 1.2) / 1.2))";
		};
		class MessageBox: RscMessageBox {};
		class MouseBlock: RscText
		{
			h = "safezoneH";
			idc = 898;
			style = 16;
			w = "safezoneW";
			x = "safezoneX";
			y = "safezoneY";
		};
		class SortBackpack: RscCombo
		{
			h = "(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = "800 + 					5";
			w = "15 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
			x = "safezoneX + 2.5 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
			y = "safezoneY + 0.5 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			class Items
			{
				class Alphabet
				{
					default = 1;
					text = "Sort alphabetically";
				};
				class Mod
				{
					text = "Sort by mod";
				};
			};
		};
		class SortBinoculars: RscCombo
		{
			h = "(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = "800 + 					9";
			w = "15 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
			x = "safezoneX + 2.5 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
			y = "safezoneY + 0.5 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			class Items
			{
				class Alphabet
				{
					default = 1;
					text = "Sort alphabetically";
				};
				class Mod
				{
					text = "Sort by mod";
				};
			};
		};
		class SortCompass: RscCombo
		{
			h = "(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = "800 + 					13";
			w = "15 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
			x = "safezoneX + 2.5 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
			y = "safezoneY + 0.5 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			class Items
			{
				class Alphabet
				{
					default = 1;
					text = "Sort alphabetically";
				};
				class Mod
				{
					text = "Sort by mod";
				};
			};
		};
		class SortFace: RscCombo
		{
			h = "(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = "800 + 							15";
			w = "15 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
			x = "safezoneX + 2.5 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
			y = "safezoneY + 0.5 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			class Items
			{
				class Alphabet
				{
					default = 1;
					text = "Sort alphabetically";
				};
				class Mod
				{
					text = "Sort by mod";
				};
			};
		};
		class SortGoggles: RscCombo
		{
			h = "(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = "800 + 					7";
			w = "15 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
			x = "safezoneX + 2.5 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
			y = "safezoneY + 0.5 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			class Items
			{
				class Alphabet
				{
					default = 1;
					text = "Sort alphabetically";
				};
				class Mod
				{
					text = "Sort by mod";
				};
			};
		};
		class SortGPS: RscCombo
		{
			h = "(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = "800 + 							11";
			w = "15 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
			x = "safezoneX + 2.5 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
			y = "safezoneY + 0.5 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			class Items
			{
				class Alphabet
				{
					default = 1;
					text = "Sort alphabetically";
				};
				class Mod
				{
					text = "Sort by mod";
				};
			};
		};
		class SortHandgun: RscCombo
		{
			h = "(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = "800 + 					2";
			w = "15 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
			x = "safezoneX + 2.5 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
			y = "safezoneY + 0.5 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			class Items
			{
				class Alphabet
				{
					default = 1;
					text = "Sort alphabetically";
				};
				class Mod
				{
					text = "Sort by mod";
				};
			};
		};
		class SortHeadgear: RscCombo
		{
			h = "(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = "800 + 					6";
			w = "15 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
			x = "safezoneX + 2.5 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
			y = "safezoneY + 0.5 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			class Items
			{
				class Alphabet
				{
					default = 1;
					text = "Sort alphabetically";
				};
				class Mod
				{
					text = "Sort by mod";
				};
			};
		};
		class SortInsignia: RscCombo
		{
			h = "(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = "800 + 					17";
			w = "15 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
			x = "safezoneX + 2.5 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
			y = "safezoneY + 0.5 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			class Items
			{
				class Alphabet
				{
					default = 1;
					text = "Sort alphabetically";
				};
				class Mod
				{
					text = "Sort by mod";
				};
			};
		};
		class SortItemAcc: RscCombo
		{
			h = "(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = "800 + 					19";
			w = "15 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
			x = "safezoneX + safezoneW - 17.5 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
			y = "safezoneY + 0.5 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			class Items
			{
				class Alphabet
				{
					default = 1;
					text = "Sort alphabetically";
				};
				class Mod
				{
					text = "Sort by mod";
				};
			};
		};
		class SortItemBipod: RscCombo
		{
			h = "(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = "800 + 					25";
			w = "15 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
			x = "safezoneX + safezoneW - 17.5 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
			y = "safezoneY + 0.5 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			class Items
			{
				class Alphabet
				{
					default = 1;
					text = "Sort alphabetically";
				};
				class Mod
				{
					text = "Sort by mod";
				};
			};
		};
		class SortItemMuzzle: RscCombo
		{
			h = "(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = "800 + 					20";
			w = "15 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
			x = "safezoneX + safezoneW - 17.5 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
			y = "safezoneY + 0.5 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			class Items
			{
				class Alphabet
				{
					default = 1;
					text = "Sort alphabetically";
				};
				class Mod
				{
					text = "Sort by mod";
				};
			};
		};
		class SortItemOptic: RscCombo
		{
			h = "(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = "800 + 					18";
			w = "15 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
			x = "safezoneX + safezoneW - 17.5 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
			y = "safezoneY + 0.5 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			class Items
			{
				class Alphabet
				{
					default = 1;
					text = "Sort alphabetically";
				};
				class Mod
				{
					text = "Sort by mod";
				};
			};
		};
		class SortMap: RscCombo
		{
			h = "(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = "800 + 							10";
			w = "15 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
			x = "safezoneX + 2.5 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
			y = "safezoneY + 0.5 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			class Items
			{
				class Alphabet
				{
					default = 1;
					text = "Sort alphabetically";
				};
				class Mod
				{
					text = "Sort by mod";
				};
			};
		};
		class SortNVGs: RscCombo
		{
			h = "(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = "800 + 							8";
			w = "15 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
			x = "safezoneX + 2.5 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
			y = "safezoneY + 0.5 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			class Items
			{
				class Alphabet
				{
					default = 1;
					text = "Sort alphabetically";
				};
				class Mod
				{
					text = "Sort by mod";
				};
			};
		};
		class SortPrimaryWeapon: RscCombo
		{
			h = "(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = "800 + 					0";
			w = "15 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
			x = "safezoneX + 2.5 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
			y = "safezoneY + 0.5 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			class Items
			{
				class Alphabet
				{
					default = 1;
					text = "Sort alphabetically";
				};
				class Mod
				{
					text = "Sort by mod";
				};
			};
		};
		class SortRadio: RscCombo
		{
			h = "(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = "800 + 							12";
			w = "15 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
			x = "safezoneX + 2.5 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
			y = "safezoneY + 0.5 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			class Items
			{
				class Alphabet
				{
					default = 1;
					text = "Sort alphabetically";
				};
				class Mod
				{
					text = "Sort by mod";
				};
			};
		};
		class SortSecondaryWeapon: RscCombo
		{
			h = "(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = "800 + 			1";
			w = "15 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
			x = "safezoneX + 2.5 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
			y = "safezoneY + 0.5 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			class Items
			{
				class Alphabet
				{
					default = 1;
					text = "Sort alphabetically";
				};
				class Mod
				{
					text = "Sort by mod";
				};
			};
		};
		class SortUniform: RscCombo
		{
			h = "(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = "800 + 					3";
			w = "15 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
			x = "safezoneX + 2.5 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
			y = "safezoneY + 0.5 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			class Items
			{
				class Alphabet
				{
					default = 1;
					text = "Sort alphabetically";
				};
				class Mod
				{
					text = "Sort by mod";
				};
			};
		};
		class SortVest: RscCombo
		{
			h = "(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = "800 + 							4";
			w = "15 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
			x = "safezoneX + 2.5 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
			y = "safezoneY + 0.5 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			class Items
			{
				class Alphabet
				{
					default = 1;
					text = "Sort alphabetically";
				};
				class Mod
				{
					text = "Sort by mod";
				};
			};
		};
		class SortVoice: RscCombo
		{
			h = "(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = "800 + 							16";
			w = "15 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
			x = "safezoneX + 2.5 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
			y = "safezoneY + 0.5 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			class Items
			{
				class Alphabet
				{
					default = 1;
					text = "Sort alphabetically";
				};
				class Mod
				{
					text = "Sort by mod";
				};
			};
		};
		class SortWatch: RscCombo
		{
			h = "(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = "800 + 							14";
			w = "15 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
			x = "safezoneX + 2.5 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
			y = "safezoneY + 0.5 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			class Items
			{
				class Alphabet
				{
					default = 1;
					text = "Sort alphabetically";
				};
				class Mod
				{
					text = "Sort by mod";
				};
			};
		};
		class Space: RscControlsGroup
		{
			h = "2 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = 27903;
			show = 0;
			w = "8.1 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
			x = "safezoneX + safezoneW * 0.5 - 4 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
			y = "safezoneY";
			class controls
			{
				class SpaceArsenal: RscActivePicture
				{
					h = "2 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					idc = 26803;
					text = "\a3\Ui_f\data\GUI\Rsc\RscDisplayArsenal\spaceArsenal_ca.paa";
					tooltip = "Arsenal";
					w = "2 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
					x = "1 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
					y = "0 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				};
				class SpaceArsenalBackground: RscText
				{
					colorBackground[] = {0, 0, 0, 0.7};
					h = "2 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					idc = 26603;
					w = "4 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
					x = "0 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
					y = "0 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				};
				class SpaceGarage: SpaceArsenal
				{
					h = "2 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					idc = 26804;
					text = "\a3\Ui_f\data\GUI\Rsc\RscDisplayArsenal\spaceGarage_ca.paa";
					tooltip = "Garage";
					w = "1.99996 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
					x = "5 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
					y = "0 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				};
				class SpaceGarageBackground: SpaceArsenalBackground
				{
					colorBackground[] = {0, 0, 0, 0.7};
					h = "2 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					idc = 26604;
					w = "4 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
					x = "4.1 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
					y = "0 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				};
			};
		};
		class Stats: RscControlsGroupNoScrollbars
		{
			enable = 0;
			fade = 1;
			h = "6 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = 28644;
			w = "15 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
			x = "safezoneX + safezoneW - 17.5 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
			y = "safezoneY + safezoneH - 10.6 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			class controls
			{
				class Stat1: RscProgress
				{
					colorBar[] = {1, 1, 1, 1};
					colorFrame[] = {0, 0, 0, 0};
					h = "0.9 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					idc = 27348;
					w = "14 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
					x = "0.5 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
					y = "0.5 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				};
				class Stat2: Stat1
				{
					h = "0.9 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					idc = 27349;
					w = "14 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
					x = "0.5 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
					y = "1.5 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				};
				class Stat3: Stat1
				{
					h = "0.9 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					idc = 27350;
					w = "14 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
					x = "0.5 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
					y = "2.5 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				};
				class Stat4: Stat1
				{
					h = "0.9 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					idc = 27351;
					w = "14 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
					x = "0.5 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
					y = "3.5 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				};
				class Stat5: Stat1
				{
					h = "0.9 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					idc = 27352;
					w = "14 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
					x = "0.5 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
					y = "4.5 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				};
				class StatsBackground: RscText
				{
					colorBackground[] = {0, 0, 0, 0.5};
					h = "6 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					idc = 27347;
					w = "15 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
					x = "0 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
					y = "0 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				};
				class StatText1: RscText
				{
					colorBackground[] = {1, 1, 1, 0.1};
					colorShadow[] = {1, 1, 1, 1};
					colorText[] = {0, 0, 0, 1};
					h = "0.9 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					idc = 27353;
					shadow = 0;
					sizeEx = "0.8 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					w = "14 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
					x = "0.5 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
					y = "0.5 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				};
				class StatText2: StatText1
				{
					colorBackground[] = {1, 1, 1, 0.1};
					colorText[] = {0, 0, 0, 1};
					h = "0.9 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					idc = 27354;
					sizeEx = "0.8 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					w = "14 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
					x = "0.5 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
					y = "1.5 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				};
				class StatText3: StatText1
				{
					colorBackground[] = {1, 1, 1, 0.1};
					colorText[] = {0, 0, 0, 1};
					h = "0.9 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					idc = 27355;
					sizeEx = "0.8 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					w = "14 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
					x = "0.5 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
					y = "2.5 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				};
				class StatText4: StatText1
				{
					colorBackground[] = {1, 1, 1, 0.1};
					colorText[] = {0, 0, 0, 1};
					h = "0.9 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					idc = 27356;
					sizeEx = "0.8 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					w = "14 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
					x = "0.5 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
					y = "3.5 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				};
				class StatText5: StatText1
				{
					colorBackground[] = {1, 1, 1, 0.1};
					colorText[] = {0, 0, 0, 1};
					h = "0.9 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					idc = 27357;
					sizeEx = "0.8 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					w = "14 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
					x = "0.5 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
					y = "4.5 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				};
			};
		};
		class TabBackpack: RscButtonArsenal
		{
			h = "(	(1.4 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)) min (safezoneH / 18 / 1.5))";
			idc = "930 + 						5";
			idcx = 935;
			text = "\A3\Ui_f\data\GUI\Rsc\RscDisplayArsenal\Backpack_ca.paa";
			tooltip = "Backpack";
			w = "1.4 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
			x = "safezoneX + 0.5 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
			y = "safezoneY + 0.02 + 7.5 * (((safezoneH - 0.1) / 18 / 1.5) min (0.04))";
		};
		class TabBinoculars: RscButtonArsenal
		{
			h = "(	(1.4 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)) min (safezoneH / 18 / 1.5))";
			idc = "930 + 						9";
			idcx = 939;
			text = "\A3\Ui_f\data\GUI\Rsc\RscDisplayArsenal\Binoculars_ca.paa";
			tooltip = "Binoculars";
			w = "1.4 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
			x = "safezoneX + 0.5 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
			y = "safezoneY + 0.02 + 13.5 * (((safezoneH - 0.1) / 18 / 1.5) min (0.04))";
		};
		class TabCargoMag: RscButtonArsenal
		{
			h = "(	(1.4 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)) min (safezoneH / 18 / 1.5))";
			idc = "930 + 						21";
			idcx = 951;
			text = "\A3\Ui_f\data\GUI\Rsc\RscDisplayArsenal\CargoMag_ca.paa";
			tooltip = "Magazines for currently selected weapons";
			w = "1.4 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
			x = "safezoneX + safezoneW - 2 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
			y = "safezoneY + 0.02 + 0 * (((safezoneH - 0.1) / 18 / 1.5) min (0.04))";
		};
		class TabCargoMagAll: RscButtonArsenal
		{
			h = "(	(1.4 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)) min (safezoneH / 18 / 1.5))";
			idc = "930 + 						26";
			idcx = 956;
			text = "\A3\Ui_f\data\GUI\Rsc\RscDisplayArsenal\CargoMagAll_ca.paa";
			tooltip = "Magazines";
			w = "1.4 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
			x = "safezoneX + safezoneW - 2 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
			y = "safezoneY + 0.02 + 1.5 * (((safezoneH - 0.1) / 18 / 1.5) min (0.04))";
		};
		class TabCargoMisc: RscButtonArsenal
		{
			h = "(	(1.4 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)) min (safezoneH / 18 / 1.5))";
			idc = "930 + 						24";
			idcx = 954;
			text = "\A3\Ui_f\data\GUI\Rsc\RscDisplayArsenal\CargoMisc_ca.paa";
			tooltip = "Misc. Items";
			w = "1.4 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
			x = "safezoneX + safezoneW - 2 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
			y = "safezoneY + 0.02 + 6 * (((safezoneH - 0.1) / 18 / 1.5) min (0.04))";
		};
		class TabCargoPut: RscButtonArsenal
		{
			h = "(	(1.4 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)) min (safezoneH / 18 / 1.5))";
			idc = "930 + 						23";
			idcx = 953;
			text = "\A3\Ui_f\data\GUI\Rsc\RscDisplayArsenal\CargoPut_ca.paa";
			tooltip = "Explosives";
			w = "1.4 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
			x = "safezoneX + safezoneW - 2 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
			y = "safezoneY + 0.02 + 4.5 * (((safezoneH - 0.1) / 18 / 1.5) min (0.04))";
		};
		class TabCargoThrow: RscButtonArsenal
		{
			h = "(	(1.4 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)) min (safezoneH / 18 / 1.5))";
			idc = "930 + 						22";
			idcx = 952;
			text = "\A3\Ui_f\data\GUI\Rsc\RscDisplayArsenal\CargoThrow_ca.paa";
			tooltip = "Grenades";
			w = "1.4 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
			x = "safezoneX + safezoneW - 2 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
			y = "safezoneY + 0.02 + 3 * (((safezoneH - 0.1) / 18 / 1.5) min (0.04))";
		};
		class TabCompass: RscButtonArsenal
		{
			h = "(	(1.4 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)) min (safezoneH / 18 / 1.5))";
			idc = "930 + 						13";
			idcx = 943;
			text = "\A3\Ui_f\data\GUI\Rsc\RscDisplayArsenal\Compass_ca.paa";
			tooltip = "Navigation";
			w = "1.4 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
			x = "safezoneX + 0.5 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
			y = "safezoneY + 0.02 + 19.5 * (((safezoneH - 0.1) / 18 / 1.5) min (0.04))";
		};
		class TabFace: RscButtonArsenal
		{
			h = "(	(1.4 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)) min (safezoneH / 18 / 1.5))";
			idc = "930 + 								15";
			idcx = 945;
			text = "\A3\Ui_f\data\GUI\Rsc\RscDisplayArsenal\Face_ca.paa";
			tooltip = "Face";
			w = "1.4 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
			x = "safezoneX + 0.5 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
			y = "safezoneY + 0.02 + 22.5 * (((safezoneH - 0.1) / 18 / 1.5) min (0.04))";
		};
		class TabGoggles: RscButtonArsenal
		{
			h = "(	(1.4 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)) min (safezoneH / 18 / 1.5))";
			idc = "930 + 						7";
			idcx = 937;
			text = "\A3\Ui_f\data\GUI\Rsc\RscDisplayArsenal\Goggles_ca.paa";
			tooltip = "Facewear";
			w = "1.4 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
			x = "safezoneX + 0.5 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
			y = "safezoneY + 0.02 + 10.5 * (((safezoneH - 0.1) / 18 / 1.5) min (0.04))";
		};
		class TabGPS: RscButtonArsenal
		{
			h = "(	(1.4 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)) min (safezoneH / 18 / 1.5))";
			idc = "930 + 								11";
			idcx = 941;
			text = "\A3\Ui_f\data\GUI\Rsc\RscDisplayArsenal\GPS_ca.paa";
			tooltip = "Terminal";
			w = "1.4 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
			x = "safezoneX + 0.5 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
			y = "safezoneY + 0.02 + 16.5 * (((safezoneH - 0.1) / 18 / 1.5) min (0.04))";
		};
		class TabHandgun: RscButtonArsenal
		{
			h = "(	(1.4 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)) min (safezoneH / 18 / 1.5))";
			idc = "930 + 						2";
			idcx = 932;
			text = "\A3\Ui_f\data\GUI\Rsc\RscDisplayArsenal\Handgun_ca.paa";
			tooltip = "Handgun";
			w = "1.4 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
			x = "safezoneX + 0.5 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
			y = "safezoneY + 0.02 + 3 * (((safezoneH - 0.1) / 18 / 1.5) min (0.04))";
		};
		class TabHeadgear: RscButtonArsenal
		{
			h = "(	(1.4 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)) min (safezoneH / 18 / 1.5))";
			idc = "930 + 						6";
			idcx = 936;
			text = "\A3\Ui_f\data\GUI\Rsc\RscDisplayArsenal\Headgear_ca.paa";
			tooltip = "Headgear";
			w = "1.4 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
			x = "safezoneX + 0.5 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
			y = "safezoneY + 0.02 + 9 * (((safezoneH - 0.1) / 18 / 1.5) min (0.04))";
		};
		class TabInsignia: RscButtonArsenal
		{
			h = "(	(1.4 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)) min (safezoneH / 18 / 1.5))";
			idc = "930 + 						17";
			idcx = 947;
			text = "\A3\Ui_f\data\GUI\Rsc\RscDisplayArsenal\Insignia_ca.paa";
			tooltip = "Insignia";
			w = "1.4 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
			x = "safezoneX + 0.5 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
			y = "safezoneY + 0.02 + 25.5 * (((safezoneH - 0.1) / 18 / 1.5) min (0.04))";
		};
		class TabItemAcc: RscButtonArsenal
		{
			h = "(	(1.4 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)) min (safezoneH / 18 / 1.5))";
			idc = "930 + 						19";
			idcx = 949;
			text = "\A3\Ui_f\data\GUI\Rsc\RscDisplayArsenal\ItemAcc_ca.paa";
			tooltip = "Rail Attachments";
			w = "1.4 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
			x = "safezoneX + safezoneW - 2 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
			y = "safezoneY + 0.02 + 1.5 * (((safezoneH - 0.1) / 18 / 1.5) min (0.04))";
		};
		class TabItemBipod: RscButtonArsenal
		{
			h = "(	(1.4 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)) min (safezoneH / 18 / 1.5))";
			idc = "930 + 						25";
			idcx = 955;
			text = "\A3\Ui_f\data\GUI\Rsc\RscDisplayArsenal\ItemBipod_ca.paa";
			tooltip = "Bipod";
			w = "1.4 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
			x = "safezoneX + safezoneW - 2 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
			y = "safezoneY + 0.02 + 4.5 * (((safezoneH - 0.1) / 18 / 1.5) min (0.04))";
		};
		class TabItemMuzzle: RscButtonArsenal
		{
			h = "(	(1.4 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)) min (safezoneH / 18 / 1.5))";
			idc = "930 + 						20";
			idcx = 950;
			text = "\A3\Ui_f\data\GUI\Rsc\RscDisplayArsenal\ItemMuzzle_ca.paa";
			tooltip = "Muzzle Attachments";
			w = "1.4 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
			x = "safezoneX + safezoneW - 2 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
			y = "safezoneY + 0.02 + 3 * (((safezoneH - 0.1) / 18 / 1.5) min (0.04))";
		};
		class TabItemOptic: RscButtonArsenal
		{
			h = "(	(1.4 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)) min (safezoneH / 18 / 1.5))";
			idc = "930 + 						18";
			idcx = 948;
			text = "\A3\Ui_f\data\GUI\Rsc\RscDisplayArsenal\ItemOptic_ca.paa";
			tooltip = "Sights";
			w = "1.4 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
			x = "safezoneX + safezoneW - 2 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
			y = "safezoneY + 0.02 + 0 * (((safezoneH - 0.1) / 18 / 1.5) min (0.04))";
		};
		class TabMap: RscButtonArsenal
		{
			h = "(	(1.4 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)) min (safezoneH / 18 / 1.5))";
			idc = "930 + 								10";
			idcx = 940;
			text = "\A3\Ui_f\data\GUI\Rsc\RscDisplayArsenal\Map_ca.paa";
			tooltip = "Map";
			w = "1.4 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
			x = "safezoneX + 0.5 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
			y = "safezoneY + 0.02 + 15 * (((safezoneH - 0.1) / 18 / 1.5) min (0.04))";
		};
		class TabNVGs: RscButtonArsenal
		{
			h = "(	(1.4 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)) min (safezoneH / 18 / 1.5))";
			idc = "930 + 								8";
			idcx = 938;
			text = "\A3\Ui_f\data\GUI\Rsc\RscDisplayArsenal\NVGs_ca.paa";
			tooltip = "NVGs";
			w = "1.4 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
			x = "safezoneX + 0.5 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
			y = "safezoneY + 0.02 + 12 * (((safezoneH - 0.1) / 18 / 1.5) min (0.04))";
		};
		class TabPrimaryWeapon: RscButtonArsenal
		{
			h = "(	(1.4 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)) min (safezoneH / 18 / 1.5))";
			idc = "930 + 						0";
			idcx = 930;
			text = "\A3\Ui_f\data\GUI\Rsc\RscDisplayArsenal\PrimaryWeapon_ca.paa";
			tooltip = "Rifle";
			w = "1.4 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
			x = "safezoneX + 0.5 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
			y = "safezoneY + 0.02 + 0 * (((safezoneH - 0.1) / 18 / 1.5) min (0.04))";
		};
		class TabRadio: RscButtonArsenal
		{
			h = "(	(1.4 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)) min (safezoneH / 18 / 1.5))";
			idc = "930 + 								12";
			idcx = 942;
			text = "\A3\Ui_f\data\GUI\Rsc\RscDisplayArsenal\Radio_ca.paa";
			tooltip = "Communication";
			w = "1.4 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
			x = "safezoneX + 0.5 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
			y = "safezoneY + 0.02 + 18 * (((safezoneH - 0.1) / 18 / 1.5) min (0.04))";
		};
		class Tabs: RscFrame
		{
			colorText[] = {0, 0, 0, 0};
			fade = 1;
			h = "40 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = 1800;
			w = "1.5 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
			x = "safezoneX + 0.5 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
			y = "safezoneY + 0.5 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
		};
		class TabSecondaryWeapon: RscButtonArsenal
		{
			h = "(	(1.4 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)) min (safezoneH / 18 / 1.5))";
			idc = "930 + 				1";
			idcx = 931;
			text = "\A3\Ui_f\data\GUI\Rsc\RscDisplayArsenal\SecondaryWeapon_ca.paa";
			tooltip = "Launcher";
			w = "1.4 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
			x = "safezoneX + 0.5 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
			y = "safezoneY + 0.02 + 1.5 * (((safezoneH - 0.1) / 18 / 1.5) min (0.04))";
		};
		class TabUniform: RscButtonArsenal
		{
			h = "(	(1.4 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)) min (safezoneH / 18 / 1.5))";
			idc = "930 + 						3";
			idcx = 933;
			text = "\A3\Ui_f\data\GUI\Rsc\RscDisplayArsenal\Uniform_ca.paa";
			tooltip = "Uniform";
			w = "1.4 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
			x = "safezoneX + 0.5 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
			y = "safezoneY + 0.02 + 4.5 * (((safezoneH - 0.1) / 18 / 1.5) min (0.04))";
		};
		class TabVest: RscButtonArsenal
		{
			h = "(	(1.4 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)) min (safezoneH / 18 / 1.5))";
			idc = "930 + 								4";
			idcx = 934;
			text = "\A3\Ui_f\data\GUI\Rsc\RscDisplayArsenal\Vest_ca.paa";
			tooltip = "Vest";
			w = "1.4 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
			x = "safezoneX + 0.5 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
			y = "safezoneY + 0.02 + 6 * (((safezoneH - 0.1) / 18 / 1.5) min (0.04))";
		};
		class TabVoice: RscButtonArsenal
		{
			h = "(	(1.4 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)) min (safezoneH / 18 / 1.5))";
			idc = "930 + 								16";
			idcx = 946;
			text = "\A3\Ui_f\data\GUI\Rsc\RscDisplayArsenal\Voice_ca.paa";
			tooltip = "Voice";
			w = "1.4 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
			x = "safezoneX + 0.5 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
			y = "safezoneY + 0.02 + 24 * (((safezoneH - 0.1) / 18 / 1.5) min (0.04))";
		};
		class TabWatch: RscButtonArsenal
		{
			h = "(	(1.4 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)) min (safezoneH / 18 / 1.5))";
			idc = "930 + 								14";
			idcx = 944;
			text = "\A3\Ui_f\data\GUI\Rsc\RscDisplayArsenal\Watch_ca.paa";
			tooltip = "Watch";
			w = "1.4 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
			x = "safezoneX + 0.5 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
			y = "safezoneY + 0.02 + 21 * (((safezoneH - 0.1) / 18 / 1.5) min (0.04))";
		};
		class Template: RscControlsGroup
		{
			fade = 1;
			h = "22.2 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = 35919;
			w = "20 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			x = "10 * 					(			((safezoneW / safezoneH) min 1.2) / 40) + 		(safezoneX + (safezoneW - 					((safezoneW / safezoneH) min 1.2))/2)";
			y = "0.9 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 		(safezoneY + (safezoneH - 					(			((safezoneW / safezoneH) min 1.2) / 1.2))/2)";
			class controls
			{
				class ButtonCancel: RscButtonMenu
				{
					h = "1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					idc = 36020;
					text = "Cancel";
					w = "5 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					x = "0 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					y = "21.2 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				};
				class ButtonDelete: RscButtonMenu
				{
					h = "1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					idc = 36021;
					text = "Delete";
					w = "5 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					x = "9.9 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					y = "21.2 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				};
				class ButtonOK: RscButtonMenu
				{
					h = "1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					idc = 36019;
					text = "OK";
					w = "5 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					x = "15 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					y = "21.2 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				};
				class Column1: RscText
				{
					colorBackground[] = {1, 1, 1, 0.2};
					h = "17.5 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					idc = 34620;
					w = "19 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					x = "0.5 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					y = "1.6 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				};
				class Column2: RscText
				{
					colorBackground[] = {1, 1, 1, 0.1};
					h = "17.5 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					idc = 34623;
					w = "1.9 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					x = "9.05 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					y = "1.6 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				};
				class Column3: RscText
				{
					colorBackground[] = {1, 1, 1, 0.1};
					h = "17.5 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					idc = 34624;
					w = "1.9 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					x = "12.85 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					y = "1.6 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				};
				class Column4: RscText
				{
					colorBackground[] = {1, 1, 1, 0.1};
					h = "17.5 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					idc = 34625;
					w = "0.95 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					x = "15.7 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					y = "1.6 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				};
				class Column5: RscText
				{
					colorBackground[] = {1, 1, 1, 0.1};
					h = "17.5 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					idc = 34626;
					w = "0.95 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					x = "17.6 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					y = "1.6 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				};
				class EditName: RscEdit
				{
					h = "1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					idc = 35020;
					sizeEx = "0.8 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					w = "13.5 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					x = "6 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					y = "19.6 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				};
				class MainBackground: RscText
				{
					colorBackground[] = {0, 0, 0, 0.8};
					h = "20 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					idc = 34622;
					w = "20 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					x = "0 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					y = "1.1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				};
				class TextName: RscText
				{
					colorBackground[] = {0, 0, 0, 0.2};
					h = "1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					idc = 34621;
					sizeEx = "0.8 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					style = 1;
					text = "Name:";
					w = "5.5 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					x = "0.5 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					y = "19.6 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				};
				class Title: RscTitle
				{
					colorBackground[] = {"(profilenamespace getvariable ['GUI_BCG_RGB_R',0.13])", "(profilenamespace getvariable ['GUI_BCG_RGB_G',0.54])", "(profilenamespace getvariable ['GUI_BCG_RGB_B',0.21])", "(profilenamespace getvariable ['GUI_BCG_RGB_A',0.8])"};
					h = "1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					idc = 34619;
					style = 0;
					text = "";
					w = "20 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					x = "0 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					y = "0 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				};
				class ValueName: RscListNBox
				{
					columns[] = {0, 0.45, 0.55, 0.65, 0.75, 0.8, 0.85, 0.9, 0.95};
					h = "17.5 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					idc = 35119;
					sizeEx = "0.8 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					w = "19 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					x = "0.5 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					y = "1.6 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				};
			};
		};
	};
	class ControlsBackground
	{
		class BlackLeft: RscText
		{
			colorBackground[] = {0, 0, 0, 1};
			h = "safezoneH";
			w = "safezoneXAbs - safezoneX";
			x = "safezoneXAbs";
			y = "safezoneY";
		};
		class BlackRight: BlackLeft
		{
			x = "safezoneX + safezoneW";
		};
		class MouseArea: RscText
		{
			h = "safezoneH";
			idc = 899;
			style = 16;
			w = "safezoneW";
			x = "safezoneX";
			y = "safezoneY";
		};
	};
};
