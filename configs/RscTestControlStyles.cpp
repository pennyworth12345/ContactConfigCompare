class RscTestControlStyles
{
	enableSimulation = 1;
	idd = 999;
	onLoad = "[""onLoad"",_this,""RscTestControlStyles"",'GUI'] call 	(uinamespace getvariable 'BIS_fnc_initDisplay')";
	onUnload = "[""onUnload"",_this,""RscTestControlStyles"",'GUI'] call 	(uinamespace getvariable 'BIS_fnc_initDisplay')";
	scriptName = "RscTestControlStyles";
	scriptPath = "GUI";
	class Controls
	{
		class _SL_HORZ
		{
			color[] = {0, 0, 0, 1};
			colorActive[] = {1, 0.5, 0, 1};
			colorDisabled[] = {1, 1, 1, 0.5};
			h = "1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = "3 + 0x400";
			style = 1024;
			tooltip = "SL_HORZ";
			type = 3;
			w = "10 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			x = "23 * 					(			((safezoneW / safezoneH) min 1.2) / 40) + 		(safezoneX + (safezoneW - 					((safezoneW / safezoneH) min 1.2))/2)";
			y = "16 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 		(safezoneY + (safezoneH - 					(			((safezoneW / safezoneH) min 1.2) / 1.2))/2)";
		};
		class _SL_VERT: _SL_HORZ
		{
			h = "10 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = "3 + 0";
			style = 0;
			tooltip = "SL_VERT";
			w = "1 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			x = "35 * 					(			((safezoneW / safezoneH) min 1.2) / 40) + 		(safezoneX + (safezoneW - 					((safezoneW / safezoneH) min 1.2))/2)";
			y = "14 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 		(safezoneY + (safezoneH - 					(			((safezoneW / safezoneH) min 1.2) / 1.2))/2)";
		};
		class _ST_BACKGROUND: _ST_FRAME
		{
			idc = 80;
			style = 80;
			text = "ST_BACKGROUND";
			y = "4 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 		(safezoneY + (safezoneH - 					(			((safezoneW / safezoneH) min 1.2) / 1.2))/2)";
		};
		class _ST_CENTER: _ST_LEFT
		{
			idc = 2;
			style = 2;
			text = "ST_CENTER";
			y = "7 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 		(safezoneY + (safezoneH - 					(			((safezoneW / safezoneH) min 1.2) / 1.2))/2)";
		};
		class _ST_FRAME: _ST_LEFT
		{
			idc = 64;
			style = 64;
			text = "ST_FRAME";
			x = "12 * 					(			((safezoneW / safezoneH) min 1.2) / 40) + 		(safezoneX + (safezoneW - 					((safezoneW / safezoneH) min 1.2))/2)";
			y = "1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 		(safezoneY + (safezoneH - 					(			((safezoneW / safezoneH) min 1.2) / 1.2))/2)";
		};
		class _ST_GROUP_BOX: _ST_FRAME
		{
			idc = 96;
			style = 96;
			text = "ST_GROUP_BOX";
			y = "7 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 		(safezoneY + (safezoneH - 					(			((safezoneW / safezoneH) min 1.2) / 1.2))/2)";
		};
		class _ST_GROUP_BOX2: _ST_FRAME
		{
			idc = 112;
			style = 112;
			text = "ST_GROUP_BOX2";
			y = "10 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 		(safezoneY + (safezoneH - 					(			((safezoneW / safezoneH) min 1.2) / 1.2))/2)";
		};
		class _ST_HORIZONTAL
		{
			colorBar[] = {0, 0, 0, 1};
			colorFrame[] = {0, 0, 0, 1};
			h = "1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = "8 + 0";
			style = 0;
			texture = "#(argb,8,8,3)color(1,1,1,1)";
			tooltip = "ST_HORIZONTAL";
			type = 8;
			w = "10 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			x = "23 * 					(			((safezoneW / safezoneH) min 1.2) / 40) + 		(safezoneX + (safezoneW - 					((safezoneW / safezoneH) min 1.2))/2)";
			y = "18 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 		(safezoneY + (safezoneH - 					(			((safezoneW / safezoneH) min 1.2) / 1.2))/2)";
		};
		class _ST_HUD_BACKGROUND: _ST_FRAME
		{
			idc = 128;
			style = 128;
			text = "ST_HUD_BACKGROUND";
			y = "13 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 		(safezoneY + (safezoneH - 					(			((safezoneW / safezoneH) min 1.2) / 1.2))/2)";
		};
		class _ST_KEEP_ASPECT_RATIO: _ST_SHADOW
		{
			idc = 2048;
			style = "0x30 + 0x800";
			text = "\A3\Ui_f\data\GUI\Cfg\Ranks\general_gs.paa";
			y = "13 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 		(safezoneY + (safezoneH - 					(			((safezoneW / safezoneH) min 1.2) / 1.2))/2)";
		};
		class _ST_LEFT
		{
			colorBackground[] = {1, 0.5, 0, 1};
			colorText[] = {0, 0, 0, 1};
			font = "RobotoCondensed";
			h = "2 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = 0;
			lineSpacing = 1;
			sizeEx = "(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			style = 0;
			text = "ST_LEFT";
			type = 0;
			w = "10 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			x = "1 * 					(			((safezoneW / safezoneH) min 1.2) / 40) + 		(safezoneX + (safezoneW - 					((safezoneW / safezoneH) min 1.2))/2)";
			y = "1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 		(safezoneY + (safezoneH - 					(			((safezoneW / safezoneH) min 1.2) / 1.2))/2)";
		};
		class _ST_LINE: _ST_FRAME
		{
			idc = 176;
			style = 176;
			text = "ST_LINE";
			y = "22 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 		(safezoneY + (safezoneH - 					(			((safezoneW / safezoneH) min 1.2) / 1.2))/2)";
		};
		class _ST_LOWERCASE: _ST_UPPERCASE
		{
			idc = 208;
			style = 208;
			text = "st_LOWERCASE";
			y = "4 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 		(safezoneY + (safezoneH - 					(			((safezoneW / safezoneH) min 1.2) / 1.2))/2)";
		};
		class _ST_MULTI: _ST_LEFT
		{
			idc = 16;
			style = 16;
			text = "ST_MULTI\nST_MULTI";
			y = "10 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 		(safezoneY + (safezoneH - 					(			((safezoneW / safezoneH) min 1.2) / 1.2))/2)";
		};
		class _ST_NO_RECT: _ST_SHADOW
		{
			idc = 512;
			style = 512;
			text = "ST_NO_RECT";
			y = "10 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 		(safezoneY + (safezoneH - 					(			((safezoneW / safezoneH) min 1.2) / 1.2))/2)";
		};
		class _ST_PICTURE: _ST_LEFT
		{
			idc = 48;
			style = 48;
			text = "\A3\Ui_f\data\GUI\Cfg\Ranks\general_gs.paa";
			y = "16 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 		(safezoneY + (safezoneH - 					(			((safezoneW / safezoneH) min 1.2) / 1.2))/2)";
		};
		class _ST_PICTURE_video: _ST_LEFT
		{
			autoplay = 1;
			colorText[] = {1, 1, 1, 1};
			h = "5 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = "0x30 + 1000";
			loops = 1;
			style = 48;
			text = "\A3\Missions_F_Bootcamp\video\VR_BOOT.ogv";
			w = "8 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			y = "19 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 		(safezoneY + (safezoneH - 					(			((safezoneW / safezoneH) min 1.2) / 1.2))/2)";
		};
		class _ST_RIGHT: _ST_LEFT
		{
			idc = 1;
			style = 1;
			text = "ST_RIGHT";
			y = "4 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 		(safezoneY + (safezoneH - 					(			((safezoneW / safezoneH) min 1.2) / 1.2))/2)";
		};
		class _ST_SHADOW: _ST_LEFT
		{
			idc = 256;
			style = 256;
			text = "ST_SHADOW";
			x = "23 * 					(			((safezoneW / safezoneH) min 1.2) / 40) + 		(safezoneX + (safezoneW - 					((safezoneW / safezoneH) min 1.2))/2)";
			y = "7 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 		(safezoneY + (safezoneH - 					(			((safezoneW / safezoneH) min 1.2) / 1.2))/2)";
		};
		class _ST_TILE_PICTURE: _ST_FRAME
		{
			idc = 144;
			style = 144;
			text = "\A3\Ui_f\data\GUI\Cfg\Ranks\general_gs.paa";
			tileH = 2;
			tileW = 10;
			y = "16 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 		(safezoneY + (safezoneH - 					(			((safezoneW / safezoneH) min 1.2) / 1.2))/2)";
		};
		class _ST_TITLE_BAR: _ST_LEFT
		{
			idc = 32;
			style = 32;
			text = "ST_TITLE_BAR";
			y = "13 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 		(safezoneY + (safezoneH - 					(			((safezoneW / safezoneH) min 1.2) / 1.2))/2)";
		};
		class _ST_UPPERCASE
		{
			animTextureDefault = "#(argb,8,8,3)color(1,1,1,1)";
			animTextureDisabled = "#(argb,8,8,3)color(1,1,1,1)";
			animTextureFocused = "#(argb,8,8,3)color(1,1,1,1)";
			animTextureNormal = "#(argb,8,8,3)color(1,1,1,1)";
			animTextureOver = "#(argb,8,8,3)color(1,1,1,1)";
			animTexturePressed = "#(argb,8,8,3)color(1,1,1,1)";
			color[] = {1, 1, 1, 1};
			color2[] = {1, 1, 1, 1};
			colorBackground[] = {0.2, 0.2, 0.2, 1};
			colorBackground2[] = {0, 0, 0, 1};
			colorBackgroundActive[] = {0, 0, 0, 1};
			colorBackgroundFocused[] = {1, 0.5, 0, 1};
			colorDisabled[] = {1, 1, 1, 0.5};
			colorFocused[] = {1, 1, 1, 1};
			font = "RobotoCondensed";
			h = "2 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = 192;
			period = 1;
			periodFocus = 1;
			periodOver = 0.5;
			shadow = 1;
			shortcuts[] = {"0x00050000 + 0", 28, 57, 156};
			size = "(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			soundClick[] = {"\A3\ui_f\data\sound\RscButton\soundClick", 0.09, 1};
			soundEnter[] = {"\A3\ui_f\data\sound\RscButton\soundEnter", 0.09, 1};
			soundEscape[] = {"\A3\ui_f\data\sound\RscButton\soundEscape", 0.09, 1};
			soundPush[] = {"\A3\ui_f\data\sound\RscButton\soundPush", 0.09, 1};
			style = 192;
			text = "st_UPPERCASE";
			textureNoShortcut = "#(argb,8,8,3)color(1,1,1,0)";
			tooltip = "CT_SHORTCUTBUTTON";
			tooltipColorBox[] = {1, 1, 1, 1};
			tooltipColorShade[] = {0, 0, 0, 1};
			tooltipColorText[] = {1, 1, 1, 1};
			type = 16;
			w = "10 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			x = "23 * 					(			((safezoneW / safezoneH) min 1.2) / 40) + 		(safezoneX + (safezoneW - 					((safezoneW / safezoneH) min 1.2))/2)";
			y = "1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 		(safezoneY + (safezoneH - 					(			((safezoneW / safezoneH) min 1.2) / 1.2))/2)";
			class Attributes
			{
				align = "left";
				color = "#ffffff";
				font = "RobotoCondensed";
				shadow = 0;
			};
			class HitZone
			{
				bottom = 0;
				left = 0;
				right = 0;
				top = 0;
			};
			class ShortcutPos
			{
				h = "(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				left = 0;
				top = 0;
				w = "(			((safezoneW / safezoneH) min 1.2) / 40)";
			};
			class TextPos
			{
				bottom = 0;
				left = 0;
				right = 0;
				top = 0;
			};
		};
		class _ST_VERTICAL: _ST_HORIZONTAL
		{
			h = "10 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = "8 + 0x01";
			style = 1;
			tooltip = "ST_VERTICAL";
			w = "1 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			x = "37 * 					(			((safezoneW / safezoneH) min 1.2) / 40) + 		(safezoneX + (safezoneW - 					((safezoneW / safezoneH) min 1.2))/2)";
			y = "14 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 		(safezoneY + (safezoneH - 					(			((safezoneW / safezoneH) min 1.2) / 1.2))/2)";
		};
		class _ST_WITH_RECT: _ST_FRAME
		{
			idc = 160;
			style = 160;
			text = "ST_WITH_RECT";
			y = "19 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 		(safezoneY + (safezoneH - 					(			((safezoneW / safezoneH) min 1.2) / 1.2))/2)";
		};
	};
	class ControlsBackground
	{
		class Background
		{
			colorBackground[] = {1, 1, 1, 1};
			colorText[] = {0, 0, 0, 0};
			font = "RobotoCondensed";
			h = "(			((safezoneW / safezoneH) min 1.2) / 1.2)";
			idc = -1;
			moving = 1;
			sizeEx = "(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			style = 0;
			text = "";
			type = 0;
			w = "((safezoneW / safezoneH) min 1.2)";
			x = "(safezoneX + (safezoneW - 					((safezoneW / safezoneH) min 1.2))/2)";
			y = "(safezoneY + (safezoneH - 					(			((safezoneW / safezoneH) min 1.2) / 1.2))/2)";
		};
	};
};
