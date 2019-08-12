class RscDisplayMissionEditor
{
	colorAttrCounter[] = {0.5, 0, 0.5, 1};
	colorAttrDialog[] = {1, 1, 1, 1};
	colorAttrDirection[] = {0, 1, 0, 1};
	colorAttrLink[] = {0, 0, 1, 1};
	colorAttrParent[] = {1, 0, 0, 1};
	colorAttrPosition[] = {0, 1, 0, 1};
	idd = 128;
	class Controls
	{
		class CA_B_Clear: CA_B_Load
		{
			idc = 210;
			text = "Clear";
			toolTip = "Clear the mission";
			y = 0.64;
		};
		class CA_B_Exit: CA_B_Load
		{
			idc = 2;
			text = "Exit";
			toolTip = "Exit the editor";
			y = 0.92;
		};
		class CA_B_Load: RscButton
		{
			default = 0;
			idc = 206;
			sizeEx = "(			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1)";
			text = "Load";
			toolTip = "Load a mission";
			w = 0.18;
			x = "(SafeZoneW + SafeZoneX) - (1 - 0.817)";
			y = 0.52;
		};
		class CA_B_Map: CA_B_Load
		{
			idc = 209;
			text = "Edit in 3D";
			toolTip = "Edit the mission in 3D";
			y = 0.72;
		};
		class CA_B_Preview: CA_B_Load
		{
			default = 1;
			idc = 208;
			text = "Preview";
			toolTip = "Preview this mission";
			y = 0.84;
		};
		class CA_B_Restart: CA_B_Load
		{
			idc = 207;
			text = "Restart";
			toolTip = "Restart this mission";
			y = 0.6;
		};
		class CA_B_Save: CA_B_Load
		{
			idc = 205;
			text = "Save";
			toolTip = "Save this mission";
			y = 0.56;
		};
		class Disclaimer: RscStructuredText
		{
			h = "0.03 * 3";
			idc = 903;
			text = "<t color='#ff0000' align='center' shadow='0'>GAME 2 EDITOR.<br />OBSOLETE, NOT FOR RELEASE!</t>";
			w = "safezoneW";
			x = "safezoneX";
			y = "safezoneY";
		};
		class L_NewObject: RscListBox
		{
			colorSelect[] = {0, 0, 0, 1};
			colorSelect2[] = {0, 0, 0, 1};
			colorSelectBackground[] = {1, 1, 1, 1};
			colorSelectBackground2[] = {1, 1, 1, 1};
			columns = 1;
			h = "14 * 0.03";
			idc = 211;
			period = 0;
			rowHeight = 0.029;
			rows = 15;
			sizeEx = 0.03;
			w = 0.169;
			x = "(SafeZoneW + SafeZoneX) - (1 - 0.821)";
			y = "SafeZoneY + 0.01";
		};
		class L_ObjectInfo: RscListBox
		{
			colorBackground[] = {0, 0, 0, 0.7};
			colorSelect[] = {0, 0, 0, 1};
			colorSelect2[] = {0, 0, 0, 1};
			colorSelectBackground[] = {1, 1, 1, 1};
			colorSelectBackground2[] = {1, 1, 1, 1};
			h = "6 * 0.03";
			idc = 202;
			period = 0;
			rowHeight = 0.029;
			sizeEx = 0.03;
			w = 0.169;
			x = "(SafeZoneW + SafeZoneX) - (1 - 0.821)";
			y = "SafeZoneY + 0.02 + 14 * 0.03";
		};
		class T_Background1: RscText
		{
			colorBackground[] = {0, 0, 0, 0.7};
			h = "SafeZoneH";
			w = 0.19;
			x = "SafeZoneX + SafeZoneW - 1 + 0.81";
			y = "SafeZoneY";
		};
		class T_Background2: RscText
		{
			colorBackground[] = {0, 0, 0, 0.7};
			h = "SafeZoneH";
			w = 0.25;
			x = "SafeZoneX";
			y = "SafeZoneY";
		};
		class T_ObjectBrowser: RscTree
		{
			colorBackground[] = {0, 0, 0, 0};
			h = "SafeZoneH";
			idc = 201;
			sizeEx = 0.018;
			style = 0;
			w = 0.25;
			x = "SafeZoneX";
			y = "SafeZoneY";
		};
	};
	class ControlsBackground
	{
		class Background: RscListBox
		{
			colorBackground[] = {0, 0, 0, 0};
			h = 3;
			idc = 203;
			w = 3;
			x = -1;
			y = -1;
		};
		class CA_M_Map: RscMapControl
		{
			h = "safezoneH";
			iconCamera = "\A3\ui_f\data\GUI\Rsc\RscDisplayMissionEditor\iconCamera_ca.paa";
			iconCameraColor[] = {0.8, 0.6, 0.05, 0.8};
			iconCameraSize = 24;
			moveOnEdges = 0;
			w = "safezoneWAbs";
			x = "safezoneXAbs";
			y = "safezoneY";
			class Legend
			{
				color[] = {0, 0, 0, 1};
				colorBackground[] = {0.906, 0.901, 0.88, 0.8};
				font = "RobotoCondensed";
				h = 0.122;
				sizeEx = "(			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1)";
				w = 0.299;
				x = 0.03;
				y = 0.03;
			};
		};
	};
	class Menu
	{
		colorBackground[] = {0, 0, 0, 0.7};
		colorBorder[] = {0, 0, 0, 0};
		colorChecked[] = {0, 0, 1, 1};
		colorDisabled[] = {1, 1, 1, 0.5};
		colorEnabled[] = {1, 1, 1, 1};
		colorSelectBackground[] = {1, 1, 1, 0.3};
		colorSeparator[] = {1, 1, 1, 1};
		font = "RobotoCondensed";
		h = 0;
		idc = 204;
		sizeEx = "(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
		style = 0;
		type = 14;
		w = 0;
		x = 0;
		y = 0;
	};
};
