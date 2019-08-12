class Display3DENNew: DisplaySimulated
{
	defaultPicture = "\A3\ui_f\data\gui\rsc\rscdisplayselectisland\island_picture_dummy_ca.paa";
	idd = 316;
	onLoad = "[""onLoad"",_this,""Display3DENNew"",'3DENDisplays'] call 	(uinamespace getvariable 'BIS_fnc_initDisplay')";
	onUnload = "[""onUnload"",_this,""Display3DENNew"",'3DENDisplays'] call 	(uinamespace getvariable 'BIS_fnc_initDisplay')";
	scriptName = "Display3DENNew";
	scriptPath = "3DENDisplays";
	class controls
	{
		class Author: ctrlStatic
		{
			colorText[] = {1, 1, 1, 0.5};
			font = "RobotoCondensedLight";
			h = "5 * (pixelH * pixelGrid * 	0.50)";
			idc = 24694;
			shadow = 0;
			sizeEx = "3.96 * (1 / (getResolution select 3)) * pixelGrid * 0.5";
			w = "((		120 - 32) * (pixelW * pixelGrid * 	0.50))";
			x = "((getResolution select 2) * 0.5 * pixelW) + (		140 * 0.5) * (pixelW * pixelGrid * 	0.50) - 	((		120 - 32) * (pixelW * pixelGrid * 	0.50))";
			y = "0.5 - (		120 * 0.5 - 10 - 	5) * (pixelH * pixelGrid * 	0.50)";
		};
		class ButtonCancel: ctrlButtonCancel
		{
			h = "5 * (pixelH * pixelGrid * 	0.50)";
			w = "25 * (pixelW * pixelGrid * 	0.50)";
			x = "((getResolution select 2) * 0.5 * pixelW) + (		140 * 0.5 - 25 - 1) * (pixelW * pixelGrid * 	0.50)";
			y = "0.5 + (		120 * 0.5 - 2 * 	5 - 1) * (pixelH * pixelGrid * 	0.50)";
		};
		class ButtonContinue: ctrlButtonOK
		{
			h = "5 * (pixelH * pixelGrid * 	0.50)";
			text = "New Scenario";
			w = "30 * (pixelW * pixelGrid * 	0.50)";
			x = "((getResolution select 2) * 0.5 * pixelW) + (		140 * 0.5 - 55 - 2) * (pixelW * pixelGrid * 	0.50)";
			y = "0.5 + (		120 * 0.5 - 2 * 	5 - 1) * (pixelH * pixelGrid * 	0.50)";
		};
		class ButtonPurchase: ctrlShortcutButtonSteam
		{
			h = "5 * (pixelH * pixelGrid * 	0.50)";
			idc = 107;
			shortcuts[] = {"1024+0x19"};
			show = 0;
			text = "Purchase";
			w = "35 * (pixelW * pixelGrid * 	0.50)";
			x = "((getResolution select 2) * 0.5 * pixelW) + (		140 * 0.5 - 60 - 2) * (pixelW * pixelGrid * 	0.50)";
			y = "0.5 + (		120 * 0.5 - 2 * 	5 - 1) * (pixelH * pixelGrid * 	0.50)";
		};
		class IslandPanorama: ctrlStaticPicture
		{
			h = "((		120 - 32) * (pixelH * pixelGrid * 	0.50))";
			idc = 24891;
			w = "((		120 - 32) * (pixelW * pixelGrid * 	0.50))";
			x = "((getResolution select 2) * 0.5 * pixelW) + (		140 * 0.5) * (pixelW * pixelGrid * 	0.50) - 	((		120 - 32) * (pixelW * pixelGrid * 	0.50))";
			y = "0.5 - (		120 * 0.5 - 10 - 2 * 	5) * (pixelH * pixelGrid * 	0.50)";
		};
		class IslandsBox: ctrlListbox
		{
			h = "((		120 - 32) * (pixelH * pixelGrid * 	0.50)) - (10 + 2 * 	5 + 3) * (pixelH * pixelGrid * 	0.50)";
			idc = 101;
			onLoad = " 				params [""_ctrl""]; 				lbSort _ctrl; 				for ""_i"" from 0 to lbSize _ctrl - 1 do 				{ 					if (_ctrl lbData _i == worldName) exitWith 					{ 						_ctrl lbSetCurSel _i; 					}; 				}; 			";
			w = "(		140 - 2) * (pixelW * pixelGrid * 	0.50) - 	((		120 - 32) * (pixelW * pixelGrid * 	0.50))";
			x = "((getResolution select 2) * 0.5 * pixelW) - (		140 * 0.5 - 1) * (pixelW * pixelGrid * 	0.50)";
			y = "0.5 - (		120 * 0.5 - 11) * (pixelH * pixelGrid * 	0.50)";
		};
		class Name: ctrlStatic
		{
			h = "5 * (pixelH * pixelGrid * 	0.50)";
			idc = 24693;
			shadow = 0;
			sizeEx = "5.58 * (1 / (getResolution select 3)) * pixelGrid * 0.5";
			w = "((		120 - 32) * (pixelW * pixelGrid * 	0.50))";
			x = "((getResolution select 2) * 0.5 * pixelW) + (		140 * 0.5) * (pixelW * pixelGrid * 	0.50) - 	((		120 - 32) * (pixelW * pixelGrid * 	0.50))";
			y = "0.5 - (		120 * 0.5 - 10) * (pixelH * pixelGrid * 	0.50)";
		};
		class NameBackground: ctrlStatic
		{
			colorBackground[] = {0, 0, 0, 1};
			h = "2 * 	5 * (pixelH * pixelGrid * 	0.50)";
			idc = 24695;
			w = "((		120 - 32) * (pixelW * pixelGrid * 	0.50))";
			x = "((getResolution select 2) * 0.5 * pixelW) + (		140 * 0.5) * (pixelW * pixelGrid * 	0.50) - 	((		120 - 32) * (pixelW * pixelGrid * 	0.50))";
			y = "0.5 - (		120 * 0.5 - 10) * (pixelH * pixelGrid * 	0.50)";
		};
		class Title: ctrlStaticTitle
		{
			h = "5 * (pixelH * pixelGrid * 	0.50)";
			idc = 24691;
			text = "Select Terrain";
			w = "140 * (pixelW * pixelGrid * 	0.50)";
			x = "((getResolution select 2) * 0.5 * pixelW) - (		140 * 0.5) * (pixelW * pixelGrid * 	0.50)";
			y = "0.5 - (		120 * 0.5 - 	5) * (pixelH * pixelGrid * 	0.50)";
		};
		class World: ctrlStaticPicture
		{
			colorText[] = {1, 1, 1, 0.4};
			h = "(		120 - 2) * (pixelH * pixelGrid * 	0.50) - 	((		120 - 32) * (pixelH * pixelGrid * 	0.50))";
			idc = 1001;
			text = "\a3\3DEN\Data\Displays\Display3DENNew\world_ca";
			w = "(		140 - 2) * (pixelW * pixelGrid * 	0.50) - 	((		120 - 32) * (pixelW * pixelGrid * 	0.50))";
			x = "((getResolution select 2) * 0.5 * pixelW) - (		140 * 0.5 - 1) * (pixelW * pixelGrid * 	0.50)";
			y = "0.5 + (		120 * 0.5 - 2 * 	5 - 3) * (pixelH * pixelGrid * 	0.50) - ((		120 - 2) * (pixelH * pixelGrid * 	0.50) - 	((		120 - 32) * (pixelH * pixelGrid * 	0.50)))";
		};
		class WorldLat: WorldLng
		{
			h = "pixelH";
			idc = 1003;
			w = "(		140 - 2) * (pixelW * pixelGrid * 	0.50) - 	((		120 - 32) * (pixelW * pixelGrid * 	0.50))";
		};
		class WorldLng: ctrlStatic
		{
			colorBackground[] = {1, 1, 1, 1};
			h = "(		120 - 2) * (pixelH * pixelGrid * 	0.50) - 	((		120 - 32) * (pixelH * pixelGrid * 	0.50))";
			idc = 1002;
			w = "pixelW";
			x = "((getResolution select 2) * 0.5 * pixelW) - (		140 * 0.5 - 1) * (pixelW * pixelGrid * 	0.50)";
			y = "0.5 + (		120 * 0.5 - 2 * 	5 - 3) * (pixelH * pixelGrid * 	0.50) - ((		120 - 2) * (pixelH * pixelGrid * 	0.50) - 	((		120 - 32) * (pixelH * pixelGrid * 	0.50)))";
		};
	};
	class controlsBackground
	{
		class Background: ctrlStaticBackground
		{
			h = "(		120 - 	5 - 10) * (pixelH * pixelGrid * 	0.50)";
			w = "140 * (pixelW * pixelGrid * 	0.50)";
			x = "((getResolution select 2) * 0.5 * pixelW) - (		140 * 0.5) * (pixelW * pixelGrid * 	0.50)";
			y = "0.5 - (		120 * 0.5 - 2 * 	5) * (pixelH * pixelGrid * 	0.50)";
		};
		class BackgroundButtons: ctrlStaticFooter
		{
			h = "(	5 + 2) * (pixelH * pixelGrid * 	0.50)";
			w = "140 * (pixelW * pixelGrid * 	0.50)";
			x = "((getResolution select 2) * 0.5 * pixelW) - (		140 * 0.5) * (pixelW * pixelGrid * 	0.50)";
			y = "0.5 + (		120 * 0.5 - 2 * 	5 - 2) * (pixelH * pixelGrid * 	0.50)";
		};
		class BackgroundDisable: ctrlStaticBackgroundDisable {};
		class BackgroundDisableTiles: ctrlStaticBackgroundDisableTiles {};
		class BackgroundWorld: ctrlStaticOverlay
		{
			h = "(		120 - 2) * (pixelH * pixelGrid * 	0.50) - 	((		120 - 32) * (pixelH * pixelGrid * 	0.50))";
			w = "(		140 - 2) * (pixelW * pixelGrid * 	0.50) - 	((		120 - 32) * (pixelW * pixelGrid * 	0.50))";
			x = "((getResolution select 2) * 0.5 * pixelW) - (		140 * 0.5 - 1) * (pixelW * pixelGrid * 	0.50)";
			y = "0.5 + (		120 * 0.5 - 2 * 	5 - 3) * (pixelH * pixelGrid * 	0.50) - ((		120 - 2) * (pixelH * pixelGrid * 	0.50) - 	((		120 - 32) * (pixelH * pixelGrid * 	0.50)))";
		};
	};
};
