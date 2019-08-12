class RscDisplayGarage3DEN
{
	enableSimulation = 1;
	icon = "\A3\Ui_f\data\Logos\a_64_ca.paa";
	idd = -1;
	logo = "\A3\Ui_f\data\Logos\arsenal_1024_ca.paa";
	onLoad = "[""onLoad"",_this,""RscDisplayGarage"",'GUI'] call 	(uinamespace getvariable 'BIS_fnc_initDisplay')";
	onUnload = "[""onUnload"",_this,""RscDisplayGarage"",'GUI'] call 	(uinamespace getvariable 'BIS_fnc_initDisplay')";
	scriptName = "RscDisplayGarage";
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
			x = "safezoneX + (1 + 1.5 * 	2) * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
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
					tooltip = "Exit the Garage (Escape)";
					w = "((safezoneW - 1 * 			(			((safezoneW / safezoneH) min 1.2) / 40)) * 0.2) - 0.1 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
					x = "0 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
					y = "0 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				};
				class ButtonExport: ButtonInterface
				{
					idc = 44148;
					text = "Export";
					tooltip = "Export the selected vehicle and its appearance to be used in missions or shared with others (Ctrl + C)";
					x = "6 * 	((safezoneW - 1 * 			(			((safezoneW / safezoneH) min 1.2) / 40)) * 0.1)";
				};
				class ButtonImport: ButtonInterface
				{
					idc = 44149;
					text = "Import";
					tooltip = "Import an exported vehicle from clipboard (Ctrl + V)";
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
					tooltip = "Load a saved vehicle (Ctrl + O)";
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
					tooltip = "Select a random vehicle (Ctrl + R)";
					x = "3 * 	((safezoneW - 1 * 			(			((safezoneW / safezoneH) min 1.2) / 40)) * 0.1)";
				};
				class ButtonSave: ButtonInterface
				{
					idc = 44146;
					text = "Save";
					tooltip = "Save the current vehicle and its appearance (Ctrl + S)";
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
			x = "safezoneX + (1 + 1.5 * 	2) * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
			y = "safezoneY + 0.5 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
		};
		class FrameRight: FrameLeft
		{
			fade = 1;
			idc = 1802;
			x = "safezoneX + safezoneW - 17.5 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
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
		class ListAnimationSources: RscListBox
		{
			colorBackground[] = {0, 0, 0, 0};
			colorPictureRightSelected[] = {1, 1, 1, 1};
			colorPictureSelected[] = {1, 1, 1, 1};
			colorSelect[] = {1, 1, 1, 1};
			colorSelect2[] = {1, 1, 1, 1};
			colorSelectBackground[] = {1, 1, 1, 0.5};
			colorSelectBackground2[] = {1, 1, 1, 0.5};
			h = "safezoneH - 2.5 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = "960 + 			0";
			idcx = 960;
			sizeEx = "1.4 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			w = "15 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
			x = "safezoneX + (1 + 1.5 * 	2) * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
			y = "safezoneY + 0.5 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
		};
		class ListDisabledAnimationSources: RscText
		{
			colorText[] = {1, 1, 1, 0.15};
			h = "safezoneH - 2.5 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = "860 + 			0";
			shadow = 0;
			show = 0;
			sizeEx = "2 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			style = 2;
			text = "N/A";
			w = "15 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
			x = "safezoneX + (1 + 1.5 * 	2) * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
			y = "safezoneY + 0.5 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
		};
		class ListDisabledTextureSources: RscText
		{
			colorText[] = {1, 1, 1, 0.15};
			h = "safezoneH - 2.5 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = "860 + 				1";
			shadow = 0;
			show = 0;
			sizeEx = "2 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			style = 2;
			text = "N/A";
			w = "15 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
			x = "safezoneX + (1 + 1.5 * 	2) * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
			y = "safezoneY + 0.5 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
		};
		class ListTextureSources: RscListBox
		{
			colorBackground[] = {0, 0, 0, 0};
			colorPictureRightSelected[] = {1, 1, 1, 1};
			colorPictureSelected[] = {1, 1, 1, 1};
			colorSelect[] = {1, 1, 1, 1};
			colorSelect2[] = {1, 1, 1, 1};
			colorSelectBackground[] = {1, 1, 1, 0.5};
			colorSelectBackground2[] = {1, 1, 1, 0.5};
			h = "safezoneH - 2.5 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = "960 + 				1";
			idcx = 961;
			sizeEx = "1.4 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			w = "15 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
			x = "safezoneX + (1 + 1.5 * 	2) * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
			y = "safezoneY + 0.5 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
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
		class TabAnimationSources: RscButtonArsenal
		{
			h = "(1.4 * 		2) * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = "930 + 				0";
			idcx = 930;
			text = "\A3\Ui_f\data\GUI\Rsc\RscDisplayGarage\AnimationSources_ca.paa";
			tooltip = "Components";
			w = "(1.4 * 		2) * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
			x = "safezoneX + 0.5 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
			y = "safezoneY + 0.5 * 0.04 + 0 * 0.04";
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
		class TabTextureSources: RscButtonArsenal
		{
			h = "(1.4 * 		2) * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = "930 + 					1";
			idcx = 931;
			text = "\A3\Ui_f\data\GUI\Rsc\RscDisplayGarage\TextureSources_ca.paa";
			tooltip = "Camouflage";
			w = "(1.4 * 		2) * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
			x = "safezoneX + 0.5 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
			y = "safezoneY + 0.5 * 0.04 + 3 * 0.04";
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
