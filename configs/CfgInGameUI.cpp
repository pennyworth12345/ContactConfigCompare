class CfgInGameUI
{
	access = 0;
	colorBackground[] = {"(profilenamespace getvariable ['IGUI_BCG_RGB_R',0])", "(profilenamespace getvariable ['IGUI_BCG_RGB_G',1])", "(profilenamespace getvariable ['IGUI_BCG_RGB_B',1])", "(profilenamespace getvariable ['IGUI_BCG_RGB_A',0.8])"};
	colorBackgroundCommand[] = {1, 1, 1, 1};
	colorBackgroundHelp[] = {1, 1, 1, 1};
	colorText[] = {"(profilenamespace getvariable ['IGUI_TEXT_RGB_R',0])", "(profilenamespace getvariable ['IGUI_TEXT_RGB_G',1])", "(profilenamespace getvariable ['IGUI_TEXT_RGB_B',1])", "(profilenamespace getvariable ['IGUI_TEXT_RGB_A',0.8])"};
	imageCornerElement = "\A3\ui_f\data\igui\cfg\imageCornerElement_ca.paa";
	shadow = 0;
	unfocusMenuAlpha = 0.65;
	xboxStyle = 0;
	class Actions
	{
		align = "0x00 + 0x08";
		arrowHeight = 0.02;
		arrowWidth = 0.015;
		background = "\A3\ui_f\data\igui\cfg\imageCornerElement_ca.paa";
		bottom = 0.81;
		colorBackground[] = {"(profilenamespace getvariable ['IGUI_BCG_RGB_R',0])", "(profilenamespace getvariable ['IGUI_BCG_RGB_G',1])", "(profilenamespace getvariable ['IGUI_BCG_RGB_B',1])", "(profilenamespace getvariable ['IGUI_BCG_RGB_A',0.8])"};
		colorBackgroundSelected[] = {"(profilenamespace getvariable ['IGUI_TEXT_RGB_R',0])", "(profilenamespace getvariable ['IGUI_TEXT_RGB_G',1])", "(profilenamespace getvariable ['IGUI_TEXT_RGB_B',1])", 0.5};
		colorSelect[] = {"(profilenamespace getvariable ['IGUI_TEXT_RGB_R',0])", "(profilenamespace getvariable ['IGUI_TEXT_RGB_G',1])", "(profilenamespace getvariable ['IGUI_TEXT_RGB_B',1])", "(profilenamespace getvariable ['IGUI_TEXT_RGB_A',0.8])"};
		colorText[] = {"(profilenamespace getvariable ['IGUI_TEXT_RGB_R',0])", "(profilenamespace getvariable ['IGUI_TEXT_RGB_G',1])", "(profilenamespace getvariable ['IGUI_TEXT_RGB_B',1])", "(profilenamespace getvariable ['IGUI_TEXT_RGB_A',0.8])"};
		font = "RobotoCondensed";
		iconArrowDown = "\A3\ui_f\data\igui\cfg\actions\arrow_down_gs.paa";
		iconArrowUp = "\A3\ui_f\data\igui\cfg\actions\arrow_up_gs.paa";
		right = 1;
		rows = "5*SafeZoneH";
		shadow = 1;
		size = "(			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 0.8)*0.95";
		underlineSelected = 0;
		w = 1;
		x = "(profilenamespace getvariable [""IGUI_GRID_MENU_X"",		(1.5 * 			(			((safezoneW / safezoneH) min 1.2) / 40) + safezoneX)])";
		y = "(profilenamespace getvariable [""IGUI_GRID_MENU_Y"",		(5 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + safezoneY)])";
	};
	class Bar
	{
		colorBackground[] = {"(profilenamespace getvariable ['IGUI_BCG_RGB_R',0])", "(profilenamespace getvariable ['IGUI_BCG_RGB_G',1])", "(profilenamespace getvariable ['IGUI_BCG_RGB_B',1])", "(profilenamespace getvariable ['IGUI_BCG_RGB_A',0.8])"};
		colorBlinkOff[] = {"(profilenamespace getvariable ['IGUI_ERROR_RGB_R',0.8])", "(profilenamespace getvariable ['IGUI_ERROR_RGB_G',0.0])", "(profilenamespace getvariable ['IGUI_ERROR_RGB_B',0.0])", "(profilenamespace getvariable ['IGUI_ERROR_RGB_A',1.0])"};
		colorBlinkOn[] = {"(profilenamespace getvariable ['IGUI_WARNING_RGB_R',0.8])", "(profilenamespace getvariable ['IGUI_WARNING_RGB_G',0.5])", "(profilenamespace getvariable ['IGUI_WARNING_RGB_B',0.0])", "(profilenamespace getvariable ['IGUI_WARNING_RGB_A',0.8])"};
		colorGreen[] = {"(profilenamespace getvariable ['IGUI_TEXT_RGB_R',0])", "(profilenamespace getvariable ['IGUI_TEXT_RGB_G',1])", "(profilenamespace getvariable ['IGUI_TEXT_RGB_B',1])", "(profilenamespace getvariable ['IGUI_TEXT_RGB_A',0.8])"};
		colorRed[] = {"(profilenamespace getvariable ['IGUI_ERROR_RGB_R',0.8])", "(profilenamespace getvariable ['IGUI_ERROR_RGB_G',0.0])", "(profilenamespace getvariable ['IGUI_ERROR_RGB_B',0.0])", "(profilenamespace getvariable ['IGUI_ERROR_RGB_A',1.0])"};
		colorYellow[] = {"(profilenamespace getvariable ['IGUI_WARNING_RGB_R',0.8])", "(profilenamespace getvariable ['IGUI_WARNING_RGB_G',0.5])", "(profilenamespace getvariable ['IGUI_WARNING_RGB_B',0.0])", "(profilenamespace getvariable ['IGUI_WARNING_RGB_A',0.8])"};
		height = 0.01;
		imageBar = "#(argb,8,8,3)color(1,1,1,1)";
		shadow = 0;
	};
	class Capture
	{
		colorBackground[] = {0, 0, 0, 0.7};
		colorLine[] = {"White", 1};
		colorText[] = {"(profilenamespace getvariable ['IGUI_TEXT_RGB_R',0])", "(profilenamespace getvariable ['IGUI_TEXT_RGB_G',1])", "(profilenamespace getvariable ['IGUI_TEXT_RGB_B',1])", "(profilenamespace getvariable ['IGUI_TEXT_RGB_A',0.8])"};
		shadow = 0;
	};
	class CfgStaminaBar
	{
		textureArrowLeft = "\A3\Ui_f\data\IGUI\RscIngameUI\RscUnitInfo\arrow_left_ca.paa";
		textureArrowRight = "\A3\Ui_f\data\IGUI\RscIngameUI\RscUnitInfo\arrow_right_ca.paa";
		textureEncumbranceBar = "\A3\Ui_f\data\IGUI\RscIngameUI\RscUnitInfo\encumbrance_bar_ca.paa";
		textureIconInjury = "\A3\Ui_f\data\IGUI\RscIngameUI\RscUnitInfo\icon_cross_ca.paa";
		textureIconTerrain = "\A3\Ui_f\data\IGUI\RscIngameUI\RscUnitInfo\icon_terrain_ca.paa";
		textureStaminaBar = "\A3\Ui_f\data\IGUI\RscIngameUI\RscUnitInfo\stamina_ca.paa";
		warningRate = -0.9;
	};
	class CfgStanceIndicatorTextures
	{
		class CanDeploy
		{
			textureCrouch = "\A3\Ui_f\data\IGUI\RscIngameUI\RscUnitInfo\SI_candeploy_crouch_ca.paa";
			textureCrouchAdjustDown = "\A3\Ui_f\data\IGUI\RscIngameUI\RscUnitInfo\SI_candeploy_crouch_down_ca.paa";
			textureCrouchAdjustLeft = "\A3\Ui_f\data\IGUI\RscIngameUI\RscUnitInfo\SI_candeploy_crouch_left_ca.paa";
			textureCrouchAdjustRight = "\A3\Ui_f\data\IGUI\RscIngameUI\RscUnitInfo\SI_candeploy_crouch_right_ca.paa";
			textureCrouchAdjustUp = "\A3\Ui_f\data\IGUI\RscIngameUI\RscUnitInfo\SI_candeploy_crouch_up_ca.paa";
			textureProne = "\A3\Ui_f\data\IGUI\RscIngameUI\RscUnitInfo\SI_candeploy_prone_ca.paa";
			textureProneAdjustDown = "\A3\Ui_f\data\IGUI\RscIngameUI\RscUnitInfo\SI_candeploy_prone_down_ca.paa";
			textureProneAdjustLeft = "\A3\Ui_f\data\IGUI\RscIngameUI\RscUnitInfo\SI_candeploy_prone_left_ca.paa";
			textureProneAdjustRight = "\A3\Ui_f\data\IGUI\RscIngameUI\RscUnitInfo\SI_candeploy_prone_right_ca.paa";
			textureProneAdjustUp = "\A3\Ui_f\data\IGUI\RscIngameUI\RscUnitInfo\SI_candeploy_prone_up_ca.paa";
			textureStand = "\A3\Ui_f\data\IGUI\RscIngameUI\RscUnitInfo\SI_candeploy_stand_ca.paa";
			textureStandAdjustDown = "\A3\Ui_f\data\IGUI\RscIngameUI\RscUnitInfo\SI_candeploy_stand_down_ca.paa";
			textureStandAdjustLeft = "\A3\Ui_f\data\IGUI\RscIngameUI\RscUnitInfo\SI_candeploy_stand_left_ca.paa";
			textureStandAdjustRight = "\A3\Ui_f\data\IGUI\RscIngameUI\RscUnitInfo\SI_candeploy_stand_right_ca.paa";
			textureStandAdjustUp = "\A3\Ui_f\data\IGUI\RscIngameUI\RscUnitInfo\SI_candeploy_stand_up_ca.paa";
		};
		class Deployed
		{
			textureCrouch = "\A3\Ui_f\data\IGUI\RscIngameUI\RscUnitInfo\SI_deploy_crouch_ca.paa";
			textureCrouchAdjustDown = "\A3\Ui_f\data\IGUI\RscIngameUI\RscUnitInfo\SI_deploy_crouch_ca.paa";
			textureCrouchAdjustLeft = "\A3\Ui_f\data\IGUI\RscIngameUI\RscUnitInfo\SI_deploy_crouch_ca.paa";
			textureCrouchAdjustRight = "\A3\Ui_f\data\IGUI\RscIngameUI\RscUnitInfo\SI_deploy_crouch_ca.paa";
			textureCrouchAdjustUp = "\A3\Ui_f\data\IGUI\RscIngameUI\RscUnitInfo\SI_deploy_crouch_ca.paa";
			textureProne = "\A3\Ui_f\data\IGUI\RscIngameUI\RscUnitInfo\SI_deploy_prone_ca.paa";
			textureProneAdjustDown = "\A3\Ui_f\data\IGUI\RscIngameUI\RscUnitInfo\SI_deploy_prone_ca.paa";
			textureProneAdjustLeft = "\A3\Ui_f\data\IGUI\RscIngameUI\RscUnitInfo\SI_deploy_prone_ca.paa";
			textureProneAdjustRight = "\A3\Ui_f\data\IGUI\RscIngameUI\RscUnitInfo\SI_deploy_prone_ca.paa";
			textureProneAdjustUp = "\A3\Ui_f\data\IGUI\RscIngameUI\RscUnitInfo\SI_deploy_prone_ca.paa";
			textureStand = "\A3\Ui_f\data\IGUI\RscIngameUI\RscUnitInfo\SI_deploy_stand_ca.paa";
			textureStandAdjustDown = "\A3\Ui_f\data\IGUI\RscIngameUI\RscUnitInfo\SI_deploy_stand_ca.paa";
			textureStandAdjustLeft = "\A3\Ui_f\data\IGUI\RscIngameUI\RscUnitInfo\SI_deploy_stand_ca.paa";
			textureStandAdjustRight = "\A3\Ui_f\data\IGUI\RscIngameUI\RscUnitInfo\SI_deploy_stand_ca.paa";
			textureStandAdjustUp = "\A3\Ui_f\data\IGUI\RscIngameUI\RscUnitInfo\SI_deploy_stand_ca.paa";
		};
		class Normal
		{
			textureCrouch = "\A3\Ui_f\data\IGUI\RscIngameUI\RscUnitInfo\SI_crouch_ca.paa";
			textureCrouchAdjustDown = "\A3\Ui_f\data\IGUI\RscIngameUI\RscUnitInfo\SI_crouch_down_ca.paa";
			textureCrouchAdjustLeft = "\A3\Ui_f\data\IGUI\RscIngameUI\RscUnitInfo\SI_crouch_left_ca.paa";
			textureCrouchAdjustRight = "\A3\Ui_f\data\IGUI\RscIngameUI\RscUnitInfo\SI_crouch_right_ca.paa";
			textureCrouchAdjustUp = "\A3\Ui_f\data\IGUI\RscIngameUI\RscUnitInfo\SI_crouch_up_ca.paa";
			textureProne = "\A3\Ui_f\data\IGUI\RscIngameUI\RscUnitInfo\SI_prone_ca.paa";
			textureProneAdjustDown = "\A3\Ui_f\data\IGUI\RscIngameUI\RscUnitInfo\SI_prone_down_ca.paa";
			textureProneAdjustLeft = "\A3\Ui_f\data\IGUI\RscIngameUI\RscUnitInfo\SI_prone_left_ca.paa";
			textureProneAdjustRight = "\A3\Ui_f\data\IGUI\RscIngameUI\RscUnitInfo\SI_prone_right_ca.paa";
			textureProneAdjustUp = "\A3\Ui_f\data\IGUI\RscIngameUI\RscUnitInfo\SI_prone_up_ca.paa";
			textureStand = "\A3\Ui_f\data\IGUI\RscIngameUI\RscUnitInfo\SI_stand_ca.paa";
			textureStandAdjustDown = "\A3\Ui_f\data\IGUI\RscIngameUI\RscUnitInfo\SI_stand_down_ca.paa";
			textureStandAdjustLeft = "\A3\Ui_f\data\IGUI\RscIngameUI\RscUnitInfo\SI_stand_left_ca.paa";
			textureStandAdjustRight = "\A3\Ui_f\data\IGUI\RscIngameUI\RscUnitInfo\SI_stand_right_ca.paa";
			textureStandAdjustUp = "\A3\Ui_f\data\IGUI\RscIngameUI\RscUnitInfo\SI_stand_up_ca.paa";
		};
		class Rested
		{
			textureCrouch = "\A3\Ui_f\data\IGUI\RscIngameUI\RscUnitInfo\SI_rest_crouch_ca.paa";
			textureCrouchAdjustDown = "\A3\Ui_f\data\IGUI\RscIngameUI\RscUnitInfo\SI_rest_crouch_down_ca.paa";
			textureCrouchAdjustLeft = "\A3\Ui_f\data\IGUI\RscIngameUI\RscUnitInfo\SI_rest_crouch_left_ca.paa";
			textureCrouchAdjustRight = "\A3\Ui_f\data\IGUI\RscIngameUI\RscUnitInfo\SI_rest_crouch_right_ca.paa";
			textureCrouchAdjustUp = "\A3\Ui_f\data\IGUI\RscIngameUI\RscUnitInfo\SI_rest_crouch_up_ca.paa";
			textureProne = "\A3\Ui_f\data\IGUI\RscIngameUI\RscUnitInfo\SI_rest_prone_ca.paa";
			textureProneAdjustDown = "\A3\Ui_f\data\IGUI\RscIngameUI\RscUnitInfo\SI_rest_prone_down_ca.paa";
			textureProneAdjustLeft = "\A3\Ui_f\data\IGUI\RscIngameUI\RscUnitInfo\SI_rest_prone_left_ca.paa";
			textureProneAdjustRight = "\A3\Ui_f\data\IGUI\RscIngameUI\RscUnitInfo\SI_rest_prone_right_ca.paa";
			textureProneAdjustUp = "\A3\Ui_f\data\IGUI\RscIngameUI\RscUnitInfo\SI_rest_prone_up_ca.paa";
			textureStand = "\A3\Ui_f\data\IGUI\RscIngameUI\RscUnitInfo\SI_rest_stand_ca.paa";
			textureStandAdjustDown = "\A3\Ui_f\data\IGUI\RscIngameUI\RscUnitInfo\SI_rest_stand_down_ca.paa";
			textureStandAdjustLeft = "\A3\Ui_f\data\IGUI\RscIngameUI\RscUnitInfo\SI_rest_stand_left_ca.paa";
			textureStandAdjustRight = "\A3\Ui_f\data\IGUI\RscIngameUI\RscUnitInfo\SI_rest_stand_right_ca.paa";
			textureStandAdjustUp = "\A3\Ui_f\data\IGUI\RscIngameUI\RscUnitInfo\SI_rest_stand_up_ca.paa";
		};
		class RestedCanDeploy
		{
			textureCrouch = "\A3\Ui_f\data\IGUI\RscIngameUI\RscUnitInfo\SI_rest_candeploy_crouch_ca.paa";
			textureCrouchAdjustDown = "\A3\Ui_f\data\IGUI\RscIngameUI\RscUnitInfo\SI_rest_candeploy_crouch_down_ca.paa";
			textureCrouchAdjustLeft = "\A3\Ui_f\data\IGUI\RscIngameUI\RscUnitInfo\SI_rest_candeploy_crouch_left_ca.paa";
			textureCrouchAdjustRight = "\A3\Ui_f\data\IGUI\RscIngameUI\RscUnitInfo\SI_rest_candeploy_crouch_right_ca.paa";
			textureCrouchAdjustUp = "\A3\Ui_f\data\IGUI\RscIngameUI\RscUnitInfo\SI_rest_candeploy_crouch_up_ca.paa";
			textureProne = "\A3\Ui_f\data\IGUI\RscIngameUI\RscUnitInfo\SI_rest_candeploy_prone_ca.paa";
			textureProneAdjustDown = "\A3\Ui_f\data\IGUI\RscIngameUI\RscUnitInfo\SI_rest_candeploy_prone_down_ca.paa";
			textureProneAdjustLeft = "\A3\Ui_f\data\IGUI\RscIngameUI\RscUnitInfo\SI_rest_candeploy_prone_left_ca.paa";
			textureProneAdjustRight = "\A3\Ui_f\data\IGUI\RscIngameUI\RscUnitInfo\SI_rest_candeploy_prone_right_ca.paa";
			textureProneAdjustUp = "\A3\Ui_f\data\IGUI\RscIngameUI\RscUnitInfo\SI_rest_candeploy_prone_up_ca.paa";
			textureStand = "\A3\Ui_f\data\IGUI\RscIngameUI\RscUnitInfo\SI_rest_candeploy_stand_ca.paa";
			textureStandAdjustDown = "\A3\Ui_f\data\IGUI\RscIngameUI\RscUnitInfo\SI_rest_candeploy_stand_down_ca.paa";
			textureStandAdjustLeft = "\A3\Ui_f\data\IGUI\RscIngameUI\RscUnitInfo\SI_rest_candeploy_stand_left_ca.paa";
			textureStandAdjustRight = "\A3\Ui_f\data\IGUI\RscIngameUI\RscUnitInfo\SI_rest_candeploy_stand_right_ca.paa";
			textureStandAdjustUp = "\A3\Ui_f\data\IGUI\RscIngameUI\RscUnitInfo\SI_rest_candeploy_stand_up_ca.paa";
		};
	};
	class CfgWeaponModeTextures
	{
		burst = "\A3\ui_f\data\igui\rscingameui\rscunitinfo\mode_3_ca.paa";
		default = "#(argb,8,8,3)color(0,0,0,0)";
		dual = "\A3\ui_f\data\igui\rscingameui\rscunitinfo\mode_2_ca.paa";
		fastAuto = "\A3\ui_f\data\igui\rscingameui\rscunitinfo\mode_10_ca.paa";
		fullAuto = "\A3\ui_f\data\igui\rscingameui\rscunitinfo\mode_5_ca.paa";
		LOAL = "\A3\ui_f\data\igui\rscingameui\rscunitinfo\mode_LOAL_ca.paa";
		overfly = "\A3\ui_f\data\igui\rscingameui\rscunitinfo\mode_overfly_ca.paa";
		safe = "\A3\ui_f\data\igui\rscingameui\rscunitinfo\mode_safe_ca.paa";
		semi = "\A3\ui_f\data\igui\rscingameui\rscunitinfo\mode_1_ca.paa";
		terrain = "\A3\ui_f\data\igui\rscingameui\rscunitinfo\mode_terrain_ca.paa";
		topDown = "\A3\ui_f\data\igui\rscingameui\rscunitinfo\mode_topDown_ca.paa";
	};
	class Chat
	{
		sound[] = {"", 0.316228, 1};
	};
	class CheatXFont
	{
		font = "RobotoCondensed";
		size = 0.0378;
	};
	class CommandBar
	{
		colorBlueTeam[] = {0, 0, 1, 1};
		colorGreenTeam[] = {0.259, 0.463, 0.149, 1};
		colorIDNone[] = {0, 0, 0, 1};
		colorIDNormal[] = {0.8, 0.8, 0.8, 1};
		colorIDPlayer[] = {0.8, 0.6, 0, 1};
		colorIDSelected[] = {0, 0.6, 0, 1};
		colorIDSelecting[] = {0.8, 0.8, 0.8, 1};
		colorRedTeam[] = {1, 0, 0, 1};
		colorText[] = {1, 1, 1, 1};
		colorWhiteTeam[] = {0.95, 0.95, 0.95, 1};
		colorYellowTeam[] = {0.8, 0.8, 0, 1};
		dimm = 0.3;
		elementSpacing = 0.05;
		height = "(4 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25))";
		imageCargo = "A3\ui_f\data\igui\cfg\commandbar\imageCargo_ca.paa";
		imageCommander = "A3\ui_f\data\igui\cfg\commandbar\imageCommander_ca.paa";
		imageDefaultWeapons = "A3\ui_f\data\igui\cfg\commandbar\imageDefaultWeapons_ca.paa";
		imageDriver = "A3\ui_f\data\igui\cfg\commandbar\imageDriver_ca.paa";
		imageGunner = "A3\ui_f\data\igui\cfg\commandbar\imageGunner_ca.paa";
		imageNoWeapons = "A3\ui_f\data\igui\cfg\commandbar\imageNoWeapons_ca.paa";
		left = "(profilenamespace getvariable [""IGUI_GRID_BAR_X"",		(safezoneX + 1 * 			(			((safezoneW / safezoneH) min 1.2) / 40))])";
		top = "(profilenamespace getvariable [""IGUI_GRID_BAR_Y"",		(safezoneY + safezoneH - 4.5 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25))])";
		width = "(36 * 			(			((safezoneW / safezoneH) min 1.2) / 40))";
		class nextPage
		{
			color[] = {0.259, 0.463, 0.149, 1};
			h = "2 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			shadow = 0;
			texture = "A3\ui_f\data\igui\cfg\commandbar\nextPage_ca.paa";
			w = "0.5 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
			x = "0 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
			y = "1 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
		};
		class prevPage
		{
			color[] = {0.259, 0.463, 0.149, 1};
			h = "2 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			shadow = 0;
			texture = "A3\ui_f\data\igui\cfg\commandbar\prevPage_ca.paa";
			w = "0.5 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
			x = "0 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
			y = "1 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
		};
		class UnitInfo
		{
			font = "FontMono";
			h = 0.105;
			w = 0.976;
			class CombatMode
			{
				h = 0.03;
				shadow = 0;
				textureMAware = "#(argb,8,8,3)color(1,1,0,1)";
				textureMCareless = "#(argb,8,8,3)color(1,1,1,1)";
				textureMCombat = "#(argb,8,8,3)color(1,0,0,1)";
				textureMSafe = "#(argb,8,8,3)color(0,1,0,1)";
				textureMStealth = "#(argb,8,8,3)color(0,0,0,1)";
				w = 0.03;
				x = 0.017;
				y = 0.064;
			};
			class CommandBackground
			{
				color[] = {"(profilenamespace getvariable ['IGUI_BCG_RGB_R',0])", "(profilenamespace getvariable ['IGUI_BCG_RGB_G',1])", "(profilenamespace getvariable ['IGUI_BCG_RGB_B',1])", "(profilenamespace getvariable ['IGUI_BCG_RGB_A',0.8])"};
				h = "1 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				shadow = 0;
				texture = "\a3\Ui_f\data\IGUI\Cfg\CommandBar\commandBackground_ca.paa";
				w = "3 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
				x = "0 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
				y = "3 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			};
			class CommandText
			{
				color[] = {1, 1, 1, 1};
				colorText[] = {1, 1, 1, 1};
				font = "RobotoCondensed";
				h = "1 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				shadow = 1;
				sizeEx = "0.8 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				w = "3 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
				x = "0 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
				y = "3 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			};
			class GroupIcon
			{
				color[] = {1, 1, 1, 1};
				h = "1 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				shadow = 0;
				w = "1 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
				x = "1 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
				y = "1 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			};
			class HoldFire
			{
				color[] = {1, 1, 1, 1};
				h = 0.04;
				shadow = 0;
				texture = "#(argb,8,8,3)color(1,1,1,1)";
				w = 0.028;
				x = 0;
				y = 0;
			};
			class OrderBackground
			{
				color[] = {1, 1, 1, 1};
				h = 0.03;
				shadow = 0;
				texture = "#(argb,8,8,3)color(1,1,1,1)";
				w = 0.04;
				x = 0.1;
				y = 0.1;
			};
			class OrderText
			{
				colorText[] = {1, 1, 1, 1};
				font = "TahomaB";
				h = 0.03;
				shadow = 0;
				SizeEx = 0.05;
				w = 0.04;
				x = 0.1;
				y = 0.1;
			};
			class Semaphore
			{
				color[] = {0.8, 0, 0, 1};
				h = 0.03;
				shadow = 0;
				texture = "#(argb,8,8,3)color(1,1,1,1)";
				w = 0.04;
				x = 0;
				y = 0;
			};
			class UnitBackground
			{
				h = 0.04;
				shadow = 0;
				textureFocus = "#(argb,8,8,3)color(1,1,1,1)";
				textureNormal = "#(argb,8,8,3)color(1,1,1,1)";
				texturePlayer = "#(argb,8,8,3)color(1,1,1,1)";
				textureSelected = "#(argb,8,8,3)color(1,1,1,1)";
				w = 0.028;
				x = 0;
				y = 0;
			};
			class UnitBehavior
			{
				colorAware[] = {0, 0, 0, 0};
				colorCareless[] = {0, 0, 0, 0};
				colorCombat[] = {1, 0.25, 0, 0.7};
				colorSafe[] = {0, 0, 0, 0};
				colorStealth[] = {0, 0.8, 1, 0.7};
				h = "1 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				shadow = 0;
				text = "\a3\Ui_f\data\IGUI\Cfg\CommandBar\unitBehavior_ca.paa";
				textureMAware = "#(argb,8,8,3)color(1,1,0,1)";
				textureMCareless = "\a3\Ui_f\data\IGUI\Cfg\CommandBar\unitBehavior_ca.paa";
				textureMCombat = "\a3\Ui_f\data\IGUI\Cfg\CommandBar\unitBehavior_ca.paa";
				textureMSafe = "\a3\Ui_f\data\IGUI\Cfg\CommandBar\unitBehavior_ca.paa";
				textureMStealth = "\a3\Ui_f\data\IGUI\Cfg\CommandBar\unitBehavior_ca.paa";
				textureMYellow = "\a3\Ui_f\data\IGUI\Cfg\CommandBar\unitBehavior_ca.paa";
				w = "1 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
				x = "2 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
				y = "1 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			};
			class UnitCombatMode
			{
				colorBlue[] = {1, 0, 0, 0.5};
				colorGreen[] = {1, 0, 0, 0.7};
				colorRed[] = {0, 0, 0, 0};
				colorText[] = {1, 0, 0, 1};
				colorWhite[] = {1, 0, 0, 0.7};
				colorYellow[] = {0, 0, 0, 0};
				h = "1 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				shadow = 0;
				text = "\a3\Ui_f\data\IGUI\Cfg\CommandBar\unitCombatMode_ca.paa";
				texture = "#(argb,8,8,3)color(0,0,0,1)";
				textureBlue = "\a3\Ui_f\data\IGUI\Cfg\CommandBar\unitCombatMode_ca.paa";
				textureGreen = "\a3\Ui_f\data\IGUI\Cfg\CommandBar\unitCombatMode_ca.paa";
				textureMAware = "#(argb,8,8,3)color(1,1,0,1)";
				textureMCareless = "#(argb,8,8,3)color(1,1,1,1)";
				textureMCombat = "#(argb,8,8,3)color(1,0,0,1)";
				textureMSafe = "#(argb,8,8,3)color(0,1,0,1)";
				textureMStealth = "#(argb,8,8,3)color(0,0,0,1)";
				textureRed = "\a3\Ui_f\data\IGUI\Cfg\CommandBar\unitCombatMode_ca.paa";
				textureWhite = "\a3\Ui_f\data\IGUI\Cfg\CommandBar\unitCombatMode_ca.paa";
				textureYellow = "\a3\Ui_f\data\IGUI\Cfg\CommandBar\unitCombatMode_ca.paa";
				w = "1 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
				x = "1 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
				y = "1 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				class UnitCombatMode
				{
					textureBlue = "#(argb,8,8,3)color(0,0,1,1)";
					textureGreen = "#(argb,8,8,3)color(0,1,0,1)";
					textureRed = "#(argb,8,8,3)color(1,0,0,1)";
					textureWhite = "#(argb,8,8,3)color(1,1,1,1)";
					textureYellow = "#(argb,8,8,3)color(1,1,0,1)";
				};
			};
			class UnitFocus
			{
				h = 0.04;
				shadow = 0;
				texture = "#(argb,8,8,3)color(1,1,1,1)";
				w = 0.028;
				x = 0;
				y = 0;
			};
			class UnitIcon
			{
				color[] = {1, 1, 1, 1};
				colorDamaged[] = {1, 0, 0, 1};
				colorFocus[] = {0, 0, 0, 1};
				colorNoAmmo[] = {0.8, 0.4, 0.5, 1};
				colorNoFuel[] = {0.8, 0.7, 0, 1};
				colorNormal[] = {0, 0, 0, 1};
				colorPlayer[] = {1, 1, 1, 1};
				colorSelected[] = {0, 0, 0, 1};
				colorWounded[] = {0.8, 0, 0, 1};
				colorWoundedFade[] = {0, 0, 0, 1};
				h = 0.04;
				shadow = 0;
				w = 0.028;
				x = 0;
				y = 0;
			};
			class UnitName
			{
				colorText[] = {1, 1, 1, 1};
				font = "RobotoCondensed";
				h = "1 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				shadow = 1;
				sizeEx = "0.8 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				w = "3 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
				x = "0 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
				y = "2 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			};
			class UnitNameBackground
			{
				colorBlue[] = {0, 0, 0, 0};
				colorFocus[] = {"(profilenamespace getvariable ['IGUI_BCG_RGB_R',0])", "(profilenamespace getvariable ['IGUI_BCG_RGB_G',1])", "(profilenamespace getvariable ['IGUI_BCG_RGB_B',1])", 0.8};
				colorGreen[] = {0, 0, 0, 0};
				colorNormal[] = {"(profilenamespace getvariable ['IGUI_BCG_RGB_R',0])", "(profilenamespace getvariable ['IGUI_BCG_RGB_G',1])", "(profilenamespace getvariable ['IGUI_BCG_RGB_B',1])", 0.8};
				colorPlayer[] = {"(profilenamespace getvariable ['GUI_BCG_RGB_R',0.13])", "(profilenamespace getvariable ['GUI_BCG_RGB_G',0.54])", "(profilenamespace getvariable ['GUI_BCG_RGB_B',0.21])", 0.4};
				colorRed[] = {0, 0, 0, 0};
				colorSelected[] = {"(profilenamespace getvariable ['GUI_BCG_RGB_R',0.13])", "(profilenamespace getvariable ['GUI_BCG_RGB_G',0.54])", "(profilenamespace getvariable ['GUI_BCG_RGB_B',0.21])", 0.8};
				colorText[] = {1, 1, 1, 0.3};
				colorWhite[] = {0, 0, 0, 0};
				colorYellow[] = {0, 0, 0, 0};
				h = "1 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				shadow = 0;
				textureFocus = "\a3\Ui_f\data\IGUI\Cfg\CommandBar\unitNameBackground_selected_ca.paa";
				textureNormal = "\a3\Ui_f\data\IGUI\Cfg\CommandBar\unitNameBackground_normal_ca.paa";
				texturePlayer = "\a3\Ui_f\data\IGUI\Cfg\CommandBar\unitNameBackground_normal_ca.paa";
				textureSelected = "\a3\Ui_f\data\IGUI\Cfg\CommandBar\unitNameBackground_selected_ca.paa";
				w = "3 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
				x = "0 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
				y = "2 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			};
			class UnitNumberBackground
			{
				color[] = {"(profilenamespace getvariable ['IGUI_BCG_RGB_R',0])", "(profilenamespace getvariable ['IGUI_BCG_RGB_G',1])", "(profilenamespace getvariable ['IGUI_BCG_RGB_B',1])", "(profilenamespace getvariable ['IGUI_BCG_RGB_A',0.8])"};
				h = "1 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				shadow = 0;
				texture = "\a3\Ui_f\data\IGUI\Cfg\CommandBar\unitNumberBackground_ca.paa";
				w = "3 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
				x = "0 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
				y = "1 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			};
			class UnitNumberText
			{
				colorText[] = {1, 1, 1, 1};
				font = "RobotoCondensed";
				h = "1 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				shadow = 2;
				sizeEx = "0.8 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				text = "";
				w = "1 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
				x = "0 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
				y = "1 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			};
			class UnitRank
			{
				color[] = {0, 0, 0, 0.5};
				h = "0.8 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				shadow = 0;
				w = "0.8 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
				x = "0.1 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
				y = "1.1 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			};
			class UnitRole
			{
				color[] = {1, 1, 1, 1};
				h = "1 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				shadow = 2;
				texture = "#(argb,8,8,3)color(1,1,1,1)";
				w = "1 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
				x = "1 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
				y = "1 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			};
			class UnitSpecialRole
			{
				color[] = {1, 1, 1, 1};
				h = "1 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				shadow = 2;
				texture = "#(argb,8,8,3)color(1,1,1,1)";
				w = "1 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
				x = "2 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
				y = "1 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			};
			class UnitStatus
			{
				color[] = {0, 0, 0, 0};
				colorNoAmmo[] = {"(profilenamespace getvariable ['IGUI_WARNING_RGB_R',0.8])", "(profilenamespace getvariable ['IGUI_WARNING_RGB_G',0.5])", "(profilenamespace getvariable ['IGUI_WARNING_RGB_B',0.0])", 0.8};
				colorWounded[] = {"(profilenamespace getvariable ['IGUI_ERROR_RGB_R',0.8])", "(profilenamespace getvariable ['IGUI_ERROR_RGB_G',0.0])", "(profilenamespace getvariable ['IGUI_ERROR_RGB_B',0.0])", 0.8};
				colorWoundedFade[] = {"(profilenamespace getvariable ['IGUI_ERROR_RGB_R',0.8])", "(profilenamespace getvariable ['IGUI_ERROR_RGB_G',0.0])", "(profilenamespace getvariable ['IGUI_ERROR_RGB_B',0.0])", 1};
				h = "1 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				shadow = 0;
				texture = "#(argb,8,8,3)color(1,1,1,1)";
				w = "1 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
				x = "0 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
				y = "1 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			};
			class UnitVehicleStatus
			{
				h = 0.04;
				texture = "#(argb,8,8,3)color(0,0,0,1)";
				w = 0.028;
				x = 0;
				y = 0;
			};
			class VehicleBackground
			{
				color[] = {1, 1, 1, 1};
				h = 0.03;
				shadow = 0;
				texture = "#(argb,8,8,3)color(1,1,1,1)";
				w = 0.04;
				x = 0.1;
				y = 0.1;
			};
			class VehicleIcon
			{
				color[] = {1, 1, 1, 1};
				h = "0.8 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				shadow = 2;
				w = "1.6 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
				x = "1.2 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
				y = "0.1 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			};
			class VehicleNumberBackground
			{
				color[] = {"(profilenamespace getvariable ['IGUI_BCG_RGB_R',0])", "(profilenamespace getvariable ['IGUI_BCG_RGB_G',1])", "(profilenamespace getvariable ['IGUI_BCG_RGB_B',1])", "(profilenamespace getvariable ['IGUI_BCG_RGB_A',0.8])"};
				h = "1 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				shadow = 0;
				texture = "\a3\Ui_f\data\IGUI\Cfg\CommandBar\vehicleNumberBackground_ca.paa";
				w = "3 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
				x = "0 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
				y = "0 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			};
			class VehicleNumberText
			{
				color[] = {1, 1, 1, 1};
				colorText[] = {1, 1, 1, 1};
				font = "RobotoCondensed";
				h = "1 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				shadow = 2;
				sizeEx = "0.8 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				w = "1 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
				x = "0 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
				y = "0 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			};
			class VehicleRole
			{
				color[] = {0, 0, 0, 0.5};
				h = "1 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				shadow = 0;
				w = "1 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
				x = "0 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
				y = "0 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			};
			class VehicleStatus
			{
				color[] = {0, 0, 0, 0};
				colorDamaged[] = {"(profilenamespace getvariable ['IGUI_ERROR_RGB_R',0.8])", "(profilenamespace getvariable ['IGUI_ERROR_RGB_G',0.0])", "(profilenamespace getvariable ['IGUI_ERROR_RGB_B',0.0])", 0.8};
				colorNoAmmo[] = {"(profilenamespace getvariable ['IGUI_WARNING_RGB_R',0.8])", "(profilenamespace getvariable ['IGUI_WARNING_RGB_G',0.5])", "(profilenamespace getvariable ['IGUI_WARNING_RGB_B',0.0])", 0.6};
				colorNoFuel[] = {"(profilenamespace getvariable ['IGUI_WARNING_RGB_R',0.8])", "(profilenamespace getvariable ['IGUI_WARNING_RGB_G',0.5])", "(profilenamespace getvariable ['IGUI_WARNING_RGB_B',0.0])", 0.6};
				h = "1 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				shadow = 0;
				texture = "#(argb,8,8,3)color(1,1,1,1)";
				w = "3 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
				x = "0 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
				y = "0 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			};
			class VehicleText
			{
				colorText[] = {1, 1, 1, 1};
				font = "TahomaB";
				h = 0.03;
				shadow = 0;
				SizeEx = 0.05;
				w = 0.04;
				x = 0.1;
				y = 0.1;
			};
		};
	};
	class Compass
	{
		bgColor[] = {0, 0, 0, 0};
		color[] = {1, 1, 1, 1};
		colorBackground[] = {0, 0, 0, 0};
		dirColor[] = {"(profilenamespace getvariable ['IGUI_TEXT_RGB_R',0])", "(profilenamespace getvariable ['IGUI_TEXT_RGB_G',1])", "(profilenamespace getvariable ['IGUI_TEXT_RGB_B',1])", "(profilenamespace getvariable ['IGUI_TEXT_RGB_A',0.8])"};
		height = "0.5 * 							(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
		left = "0.5 - 8 * 							(			((safezoneW / safezoneH) min 1.2) / 40)";
		shadow = 0;
		texture0 = "A3\ui_f_curator\data\cfgIngameUI\compass\texture0_ca.paa";
		texture180 = "A3\ui_f_curator\data\cfgIngameUI\compass\texture180_ca.paa";
		texture270 = "A3\ui_f_curator\data\cfgIngameUI\compass\texture270_ca.paa";
		texture90 = "A3\ui_f_curator\data\cfgIngameUI\compass\texture90_ca.paa";
		top = "safezoneY + 1.6 * 							(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
		turretDirColor[] = {0.8, 0.6, 0, 1};
		width = "16 * 							(			((safezoneW / safezoneH) min 1.2) / 40)";
	};
	class ConnectionLost
	{
		color[] = {0.8, 0, 0, 1};
		font = "RobotoCondensed";
		height = 0.1;
		left = 0;
		shadow = 0;
		size = "(			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 0.8)";
		top = 0.45;
		width = 1;
	};
	class Cursor
	{
		activeHeight = 0.0522876;
		activeMaximum = 1.1;
		activeMinimum = 1.1;
		activeWidth = 0.0392157;
		aim = "\A3\ui_f\data\igui\cfg\cursors\aim_ca.paa";
		assault = "\A3\ui_f\data\igui\cfg\cursors\assault_ca.paa";
		assaultColor[] = {"(profilenamespace getvariable ['IGUI_ERROR_RGB_R',0.8])", "(profilenamespace getvariable ['IGUI_ERROR_RGB_G',0.0])", "(profilenamespace getvariable ['IGUI_ERROR_RGB_B',0.0])", "(profilenamespace getvariable ['IGUI_ERROR_RGB_A',1.0])"};
		assaultIconTimeOut = 5;
		assaultNoLOS = "\A3\ui_f\data\igui\cfg\cursors\assaultNoLOS_ca.paa";
		assaultNoLOSColor[] = {"(profilenamespace getvariable ['IGUI_ERROR_RGB_R',0.8])", "(profilenamespace getvariable ['IGUI_ERROR_RGB_G',0.0])", "(profilenamespace getvariable ['IGUI_ERROR_RGB_B',0.0])", 0.5};
		attack = "\A3\ui_f\data\igui\cfg\cursors\attack_ca.paa";
		blinkingPeriod = 2;
		board = "\A3\ui_f\data\igui\cfg\cursors\board_ca.paa";
		boardColor[] = {0.91, 0.91, 0.91, 0.55};
		color[] = {0.91, 0.91, 0.91, 0.55};
		colorBackground[] = {"(profilenamespace getvariable ['IGUI_BCG_RGB_R',0])", "(profilenamespace getvariable ['IGUI_BCG_RGB_G',1])", "(profilenamespace getvariable ['IGUI_BCG_RGB_B',1])", "(profilenamespace getvariable ['IGUI_BCG_RGB_A',0.8])"};
		colorLocked[] = {1, 0, 0, 1};
		customMark = "\A3\ui_f\data\igui\cfg\cursors\customMark_ca.paa";
		customMarkColor[] = {0.91, 0.91, 0.91, 0.55};
		customMarkColorBG[] = {0.5, 0.5, 0.5, 0.5};
		dimm = 0.15;
		dimmCmdEndTime = 10;
		dimmCmdStartTime = 5;
		dimmMe = 0.2;
		dimmMeEndTime = 10;
		dimmMeStartTime = 5;
		enemyActiveColor[] = {"(profilenamespace getvariable ['IGUI_ERROR_RGB_R',0.8])", "(profilenamespace getvariable ['IGUI_ERROR_RGB_G',0.0])", "(profilenamespace getvariable ['IGUI_ERROR_RGB_B',0.0])", "(profilenamespace getvariable ['IGUI_ERROR_RGB_A',1.0])"};
		explosive = "\A3\ui_f\data\igui\cfg\cursors\explosive_ca.paa";
		explosiveColor[] = {"(profilenamespace getvariable ['IGUI_ERROR_RGB_R',0.8])", "(profilenamespace getvariable ['IGUI_ERROR_RGB_G',0.0])", "(profilenamespace getvariable ['IGUI_ERROR_RGB_B',0.0])", 0.75};
		font = "RobotoCondensedBold";
		formationMark = "\A3\ui_f\data\igui\cfg\cursors\formationMark_ca.paa";
		freelook = "\A3\ui_f\data\igui\cfg\cursors\freelook_ca.paa";
		freeLookActionColor[] = {0.9, 0.9, 0.9, 0.4};
		freeLookActionColorAvailable[] = {"(profilenamespace getvariable ['IGUI_TEXT_RGB_R',0])", "(profilenamespace getvariable ['IGUI_TEXT_RGB_G',1])", "(profilenamespace getvariable ['IGUI_TEXT_RGB_B',1])", "(profilenamespace getvariable ['IGUI_TEXT_RGB_A',0.8])"};
		freeLookActionColorSelected[] = {0.24, 0.87, 0, 0.8};
		getIn = "\A3\ui_f\data\igui\cfg\cursors\getIn_ca.paa";
		gunner_lock = "\A3\ui_f\data\igui\cfg\cursors\gunner_lock_ca.paa";
		iconAssemble = "#(argb,8,8,3)color(1,1,0,1)";
		iconBoardIn = "\A3\ui_f\data\igui\cfg\cursors\iconBoardIn_ca.paa";
		iconBoardOut = "\A3\ui_f\data\igui\cfg\cursors\iconBoardOut_ca.paa";
		iconComplex = "\A3\ui_f\data\igui\cfg\cursors\iconComplex_ca.paa";
		iconCursorSupport = "\A3\ui_f\data\igui\cfg\cursors\iconCursorSupport_ca.paa";
		iconDisassemble = "#(argb,8,8,3)color(1,1,0,1)";
		iconHealAt = "\A3\ui_f\data\igui\cfg\cursors\iconHealAt_ca.paa";
		iconHealAtColor[] = {0.91, 0.91, 0.91, 0.55};
		iconInFormation = "\A3\ui_f\data\igui\cfg\cursors\iconInFormation_ca.paa";
		iconInFormationColor[] = {0.91, 0.91, 0.91, 0.55};
		iconInFormationColorBG[] = {0.5, 0.5, 0.5, 0.5};
		iconJoin = "\A3\ui_f\data\igui\cfg\cursors\iconJoin_ca.paa";
		iconJoinColor[] = {0.91, 0.91, 0.91, 0.55};
		iconMove = "\A3\ui_f\data\igui\cfg\cursors\iconMove_ca.paa";
		iconMoveColor[] = {0.91, 0.91, 0.91, 0.55};
		iconRearmAt = "\A3\ui_f\data\igui\cfg\cursors\iconRearmAt_ca.paa";
		iconRearmAtColor[] = {0.91, 0.91, 0.91, 0.55};
		iconRefuelAt = "\A3\ui_f\data\igui\cfg\cursors\iconRefuelAt_ca.paa";
		iconRefuelAtColor[] = {0.91, 0.91, 0.91, 0.55};
		iconRepairAt = "\A3\ui_f\data\igui\cfg\cursors\iconRepairAt_ca.paa";
		iconRepairAtColor[] = {0.91, 0.91, 0.91, 0.55};
		iconRepairVehicle = "\A3\ui_f\data\igui\cfg\cursors\iconRepairVehicle_ca.paa";
		iconSupport = "\A3\ui_f\data\igui\cfg\cursors\iconSupport_ca.paa";
		iconSupportColor[] = {0.91, 0.91, 0.91, 0.55};
		iconTakeBackpack = "#(argb,8,8,3)color(1,1,0,1)";
		infoTextShadow = 2;
		known_target = "\A3\ui_f\data\igui\cfg\cursors\known_target_ca.paa";
		leader = "\A3\ui_f\data\igui\cfg\cursors\leader_ca.paa";
		leaderColor[] = {0.91, 0.91, 0.91, 0.55};
		lock_target = "\A3\ui_f\data\igui\cfg\cursors\lock_target_ca.paa";
		me = "\A3\ui_f\data\igui\cfg\cursors\me_ca.paa";
		meColor[] = {0, 0, 0, 0.2};
		mission = "\A3\ui_f\data\igui\cfg\cursors\mission_ca.paa";
		missionColor1[] = {0.91, 0.91, 0.91, 0.55};
		missionColor2[] = {0.91, 0.91, 0.91, 0.55};
		missionFade = 0.3;
		move = "\A3\ui_f\data\igui\cfg\cursors\move_ca.paa";
		outArrow = "\A3\ui_f\data\igui\cfg\cursors\outArrow_ca.paa";
		select = "\A3\ui_f\data\igui\cfg\cursors\select_ca.paa";
		select_target = "\A3\ui_f\data\igui\cfg\cursors\select_target_ca.paa";
		selectColor[] = {0.91, 0.91, 0.91, 0.55};
		selectDead = "";
		selectDeadDimEndTime = 5.5;
		selectDeadDimStartTime = 5;
		selected = "#(argb,8,8,3)color(1,1,1,1)";
		selectOver = "\A3\ui_f\data\igui\cfg\cursors\selectOver_ca.paa";
		shadow = 2;
		shadowBackground = 2;
		shadowForeground = 2;
		shadowText = 2;
		size = "(			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 0.8)";
		tactical = "\A3\ui_f\data\igui\cfg\cursors\tactical_ca.paa";
		textOffsetCustom = -0.05;
		textOffsetDefault = -0.044;
		textOffsetFormation = -0.05;
		textOffsetWaypoint = -0.05;
		throwCursorFadeSpeed = 4;
		throwCursorMaxScale = 2;
		throwCursorMinScale = 1;
		unitBleeding = "\A3\ui_f\data\igui\cfg\cursors\unitBleeding_ca.paa";
		unitHealer = "\A3\ui_f\data\igui\cfg\cursors\unitHealer_ca.paa";
		unitInjured = "\A3\ui_f\data\igui\cfg\cursors\unitInjured_ca.paa";
		unitUnconscious = "\A3\ui_f\data\igui\cfg\cursors\unitUnconscious_ca.paa";
		unitUnconsciousColor[] = {0.7, 0.1, 0, 0.65};
		watch = "\A3\ui_f\data\igui\cfg\cursors\watch_ca.paa";
		waypointColor[] = {0.91, 0.91, 0.91, 0.55};
		waypointColorBG[] = {0.5, 0.5, 0.5, 0.5};
		waypointMark = "\A3\ui_f\data\igui\cfg\cursors\waypointMark_ca.paa";
		weapon = "\A3\ui_f\data\igui\cfg\cursors\weapon_ca.paa";
		class AssignedTarget
		{
			class Icon
			{
				color[] = {0.8, 0, 0, 1};
				colorNoLoS[] = {0.8, 0, 0, 0.5};
				shadow = 0;
				shadowNoLoS = 0;
				size = 0.022;
				texture = "#(argb,8,8,3)color(1,1,1,1)";
				textureNoLoS = "#(argb,8,8,3)color(1,1,1,1)";
				timeNoLoS = 15;
			};
			class Icon3D: Icon
			{
				color[] = {0.8, 0, 0, 1};
				colorNoLoS[] = {0.8, 0, 0, 0.5};
				font = "GUI_FONT_NORMAL";
				scale = 1;
				shadow = 0;
				shadowNoLoS = 0;
				sizeEx = "IGUI_TEXT_SIZE_MEDIUM";
				texture = "#(argb,8,8,3)color(1,1,1,1)";
				textureNoLoS = "#(argb,8,8,3)color(1,1,1,1)";
				timeNoLoS = 15;
			};
		};
		class CrewAimIndicator
		{
			class Commander
			{
				color[] = {"(profilenamespace getvariable ['IGUI_TEXT_RGB_R',0])", "(profilenamespace getvariable ['IGUI_TEXT_RGB_G',1])", "(profilenamespace getvariable ['IGUI_TEXT_RGB_B',1])", 0.75};
				scale = 2;
				shadow = 0;
				texture = "\A3\ui_f\data\igui\cfg\crewaimindicator\commander_ca.paa";
			};
			class Gunner: Commander
			{
				color[] = {"(profilenamespace getvariable ['IGUI_TEXT_RGB_R',0])", "(profilenamespace getvariable ['IGUI_TEXT_RGB_G',1])", "(profilenamespace getvariable ['IGUI_TEXT_RGB_B',1])", 0.75};
				texture = "\A3\ui_f\data\igui\cfg\crewaimindicator\gunner_ca.paa";
			};
			class GunnerAuto: Commander
			{
				color[] = {"(profilenamespace getvariable ['IGUI_TEXT_RGB_R',0])", "(profilenamespace getvariable ['IGUI_TEXT_RGB_G',1])", "(profilenamespace getvariable ['IGUI_TEXT_RGB_B',1])", 0.75};
				texture = "\A3\ui_f\data\igui\cfg\crewaimindicator\GunnerAuto_ca.paa";
			};
			class GunnerReady: Commander
			{
				color[] = {"(profilenamespace getvariable ['IGUI_TEXT_RGB_R',0])", "(profilenamespace getvariable ['IGUI_TEXT_RGB_G',1])", "(profilenamespace getvariable ['IGUI_TEXT_RGB_B',1])", 0.75};
				texture = "\A3\ui_f\data\igui\cfg\crewaimindicator\GunnerReady_ca.paa";
			};
		};
		class Sign
		{
			height = 2.7;
			widthGroup = 2.5;
			widthSector = 2.6;
			widthUnit = 2.4;
		};
		class Targeting
		{
			class HitConfirm: Seeker
			{
				color[] = {0.709, 0.972, 0.384, 1};
				texture = "\A3\ui_f\data\igui\cfg\targeting\HitConfirm_ca.paa";
			};
			class HitPrediction: Seeker
			{
				color[] = {"(profilenamespace getvariable ['IGUI_TEXT_RGB_R',0])", "(profilenamespace getvariable ['IGUI_TEXT_RGB_G',1])", "(profilenamespace getvariable ['IGUI_TEXT_RGB_B',1])", "(profilenamespace getvariable ['IGUI_TEXT_RGB_A',0.8])"};
				scale = 0.5;
				texture = "\A3\ui_f\data\igui\cfg\targeting\HitPrediction_ca.paa";
			};
			class ImpactPoint: Seeker
			{
				color[] = {"(profilenamespace getvariable ['IGUI_TEXT_RGB_R',0])", "(profilenamespace getvariable ['IGUI_TEXT_RGB_G',1])", "(profilenamespace getvariable ['IGUI_TEXT_RGB_B',1])", "(profilenamespace getvariable ['IGUI_TEXT_RGB_A',0.8])"};
				scale = 0.5;
				texture = "\A3\ui_f\data\igui\cfg\targeting\ImpactPoint_ca.paa";
			};
			class ImpactPointNoLOS: ImpactPoint
			{
				color[] = {"(profilenamespace getvariable ['IGUI_TEXT_RGB_R',0])", "(profilenamespace getvariable ['IGUI_TEXT_RGB_G',1])", "(profilenamespace getvariable ['IGUI_TEXT_RGB_B',1])", "(profilenamespace getvariable ['IGUI_TEXT_RGB_A',0.8])"};
				texture = "\A3\ui_f\data\igui\cfg\targeting\ImpactPointNoLOS_ca.paa";
			};
			class KnownTarget: Seeker
			{
				color[] = {"(profilenamespace getvariable ['IGUI_TEXT_RGB_R',0])", "(profilenamespace getvariable ['IGUI_TEXT_RGB_G',1])", "(profilenamespace getvariable ['IGUI_TEXT_RGB_B',1])", "(profilenamespace getvariable ['IGUI_TEXT_RGB_A',0.8])"};
				texture = "\A3\ui_f\data\igui\cfg\targeting\KnownTarget_ca.paa";
			};
			class LaserTarget: KnownTarget
			{
				color[] = {"(profilenamespace getvariable ['IGUI_TEXT_RGB_R',0])", "(profilenamespace getvariable ['IGUI_TEXT_RGB_G',1])", "(profilenamespace getvariable ['IGUI_TEXT_RGB_B',1])", "(profilenamespace getvariable ['IGUI_TEXT_RGB_A',0.8])"};
				texture = "\A3\ui_f\data\igui\cfg\targeting\LaserTarget_ca.paa";
			};
			class MarkedTarget
			{
				color[] = {"(profilenamespace getvariable ['IGUI_TEXT_RGB_R',0])", "(profilenamespace getvariable ['IGUI_TEXT_RGB_G',1])", "(profilenamespace getvariable ['IGUI_TEXT_RGB_B',1])", "(profilenamespace getvariable ['IGUI_TEXT_RGB_A',0.8])"};
				colorFriendly[] = {"(profilenamespace getvariable ['IGUI_TEXT_RGB_R',0])", "(profilenamespace getvariable ['IGUI_TEXT_RGB_G',1])", "(profilenamespace getvariable ['IGUI_TEXT_RGB_B',1])", "(profilenamespace getvariable ['IGUI_TEXT_RGB_A',0.8])"};
				colorLockable[] = {"(profilenamespace getvariable ['IGUI_TEXT_RGB_R',0])", "(profilenamespace getvariable ['IGUI_TEXT_RGB_G',1])", "(profilenamespace getvariable ['IGUI_TEXT_RGB_B',1])", "(profilenamespace getvariable ['IGUI_TEXT_RGB_A',0.8])"};
				scale = 1;
				shadow = 0;
				texture = "\A3\ui_f\data\igui\cfg\targeting\MarkedTarget_ca.paa";
				textureFriendly = "\A3\ui_f\data\igui\cfg\targeting\MarkedTargetFriendly_ca.paa";
				textureLockable = "\A3\ui_f\data\igui\cfg\targeting\MarkedTargetLockable_ca.paa";
			};
			class MarkedTargetNoLos: MarkedTarget
			{
				color[] = {"(profilenamespace getvariable ['IGUI_TEXT_RGB_R',0])", "(profilenamespace getvariable ['IGUI_TEXT_RGB_G',1])", "(profilenamespace getvariable ['IGUI_TEXT_RGB_B',1])", 0.6};
				colorFriendly[] = {"(profilenamespace getvariable ['IGUI_TEXT_RGB_R',0])", "(profilenamespace getvariable ['IGUI_TEXT_RGB_G',1])", "(profilenamespace getvariable ['IGUI_TEXT_RGB_B',1])", "(profilenamespace getvariable ['IGUI_TEXT_RGB_A',0.8])"};
				colorLockable[] = {"(profilenamespace getvariable ['IGUI_TEXT_RGB_R',0])", "(profilenamespace getvariable ['IGUI_TEXT_RGB_G',1])", "(profilenamespace getvariable ['IGUI_TEXT_RGB_B',1])", "(profilenamespace getvariable ['IGUI_TEXT_RGB_A',0.8])"};
				texture = "\A3\ui_f\data\igui\cfg\targeting\MarkedTargetNoLOS_ca.paa";
				textureFriendly = "\A3\ui_f\data\igui\cfg\targeting\empty_ca.paa";
				textureLockable = "\A3\ui_f\data\igui\cfg\targeting\empty_ca.paa";
			};
			class MarkedTargetNoLosRemote: MarkedTarget
			{
				color[] = {"(profilenamespace getvariable ['IGUI_TEXT_RGB_R',0])", "(profilenamespace getvariable ['IGUI_TEXT_RGB_G',1])", "(profilenamespace getvariable ['IGUI_TEXT_RGB_B',1])", "(profilenamespace getvariable ['IGUI_TEXT_RGB_A',0.8])"};
				colorFriendly[] = {"(profilenamespace getvariable ['IGUI_TEXT_RGB_R',0])", "(profilenamespace getvariable ['IGUI_TEXT_RGB_G',1])", "(profilenamespace getvariable ['IGUI_TEXT_RGB_B',1])", "(profilenamespace getvariable ['IGUI_TEXT_RGB_A',0.8])"};
				colorLockable[] = {"(profilenamespace getvariable ['IGUI_TEXT_RGB_R',0])", "(profilenamespace getvariable ['IGUI_TEXT_RGB_G',1])", "(profilenamespace getvariable ['IGUI_TEXT_RGB_B',1])", "(profilenamespace getvariable ['IGUI_TEXT_RGB_A',0.8])"};
				texture = "\A3\ui_f\data\igui\cfg\targeting\MarkedTargetNoLOS_ca.paa";
				textureFriendly = "\A3\ui_f\data\igui\cfg\targeting\MarkedTargetFriendly_ca.paa";
				textureLockable = "\A3\ui_f\data\igui\cfg\targeting\empty_ca.paa";
			};
			class Seeker
			{
				color[] = {"(profilenamespace getvariable ['IGUI_TEXT_RGB_R',0])", "(profilenamespace getvariable ['IGUI_TEXT_RGB_G',1])", "(profilenamespace getvariable ['IGUI_TEXT_RGB_B',1])", "(profilenamespace getvariable ['IGUI_TEXT_RGB_A',0.8])"};
				scale = 1;
				shadow = 0;
				texture = "\A3\ui_f\data\igui\cfg\targeting\seeker_ca.paa";
			};
			class SeekerLocked: Seeker
			{
				color[] = {"(profilenamespace getvariable ['IGUI_TEXT_RGB_R',0])", "(profilenamespace getvariable ['IGUI_TEXT_RGB_G',1])", "(profilenamespace getvariable ['IGUI_TEXT_RGB_B',1])", "(profilenamespace getvariable ['IGUI_TEXT_RGB_A',0.8])"};
				texture = "\A3\ui_f\data\igui\cfg\targeting\SeekerLocked_ca.paa";
			};
			class SeekerLockedRemote: Seeker
			{
				color[] = {"(profilenamespace getvariable ['IGUI_TEXT_RGB_R',0])", "(profilenamespace getvariable ['IGUI_TEXT_RGB_G',1])", "(profilenamespace getvariable ['IGUI_TEXT_RGB_B',1])", "(profilenamespace getvariable ['IGUI_TEXT_RGB_A',0.8])"};
				texture = "\A3\ui_f\data\igui\cfg\targeting\empty_ca.paa";
			};
			class SeekerNoLOS: Seeker
			{
				color[] = {"(profilenamespace getvariable ['IGUI_TEXT_RGB_R',0])", "(profilenamespace getvariable ['IGUI_TEXT_RGB_G',1])", "(profilenamespace getvariable ['IGUI_TEXT_RGB_B',1])", 0.6};
				texture = "\A3\ui_f\data\igui\cfg\targeting\SeekerNoLos_ca.paa";
			};
			class SeekerNoLosRemote: Seeker
			{
				color[] = {"(profilenamespace getvariable ['IGUI_TEXT_RGB_R',0])", "(profilenamespace getvariable ['IGUI_TEXT_RGB_G',1])", "(profilenamespace getvariable ['IGUI_TEXT_RGB_B',1])", "(profilenamespace getvariable ['IGUI_TEXT_RGB_A',0.8])"};
				texture = "\A3\ui_f\data\igui\cfg\targeting\empty_ca.paa";
			};
			class SeekerRemote
			{
				color[] = {"(profilenamespace getvariable ['IGUI_TEXT_RGB_R',0])", "(profilenamespace getvariable ['IGUI_TEXT_RGB_G',1])", "(profilenamespace getvariable ['IGUI_TEXT_RGB_B',1])", "(profilenamespace getvariable ['IGUI_TEXT_RGB_A',0.8])"};
				scale = 1;
				shadow = 0;
				texture = "\A3\ui_f\data\igui\cfg\targeting\SeekerRemote_ca.paa";
			};
		};
	};
	class DebugFont
	{
		font = "LucidaConsoleB";
		size = 0.02;
	};
	class DefaultAction
	{
		background = "#(argb,8,8,3)color(0,0,0,0)";
		colorText[] = {"(profilenamespace getvariable ['IGUI_TEXT_RGB_R',0])", "(profilenamespace getvariable ['IGUI_TEXT_RGB_G',1])", "(profilenamespace getvariable ['IGUI_TEXT_RGB_B',1])", "(profilenamespace getvariable ['IGUI_TEXT_RGB_A',0.8])"};
		font = "RobotoCondensed";
		fontNext = "TahomaB";
		hotspotX = 0;
		hotspotY = 0;
		offsetX = 0;
		offsetY = 0.045;
		relativeToCursor = 1;
		shadow = 2;
		showHint = 0;
		showLine = 0;
		showNext = 0;
		size = "(			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 0.8)";
		sizeNext = "( 16 / 408 )";
		textTipDelay = 0.4;
		textTipFade = 0.4;
	};
	class DragAndDropFont
	{
		colorDisabled[] = {1, 0, 0, 0.3};
		colorEnabled[] = {0, 1, 0, 0.3};
		font = "RobotoCondensed";
		hideCursor = 0;
		shadow = 2;
		size = "(			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 0.8)";
	};
	class FadeFont
	{
		font = "RobotoCondensed";
		shadow = 0;
		size = 0.0378;
	};
	class FLIRModeColors
	{
		FLIRModeColor[] = {{{0, 0, 0, 1}, {1, 1, 1, 1}}, {{1, 1, 1, 1}, {0, 0, 0, 1}}, {{0, 0.13, 0, 1}, {0, 1, 0, 1}}, {{0, 1, 0, 1}, {0, 0.13, 0, 1}}, {{0.15, 0.07, 0, 1}, {1, 0.4, 0, 1}}, {{1, 0.4, 0, 1}, {0.15, 0.07, 0, 1}}, {{0.29, 0.02, 0.15, 1}, {1, 0.94, 0.98, 1}}, {{0, 0.16, 0.16, 1}, {1, 0.7, 0.7, 1}}};
	};
	class FLIRModeNames
	{
		FLIRModeName[] = {"WHOT", "BHOT", "WHOT", "BHOT", "WHOT", "BHOT", "WHOT", "WHOT"};
	};
	class GameInfo
	{
		height = 0.08;
		left = 0.78;
		top = 0.9;
		width = 0.2;
	};
	class GroupInfo
	{
		colorIDNone[] = {0, 0, 0, 1};
		colorIDNormal[] = {0.8, 0.8, 0.8, 1};
		colorIDPlayer[] = {0.8, 0.6, 0, 1};
		colorIDSelected[] = {0, 0.6, 0, 1};
		colorIDSelecting[] = {0.8, 0.8, 0.8, 1};
		dimm = 0.3;
		fontCommand = "TahomaB";
		fontUnitID = "TahomaB";
		height = 0.08;
		imageCargo = "#(argb,8,8,3)color(0,0,0,0)";
		imageCommander = "#(argb,8,8,3)color(0,1,0,1)";
		imageDefaultWeapons = "\A3\ui_f\data\igui\cfg\commandbar\imageNoWeapons_ca.paa";
		imageDriver = "#(argb,8,8,3)color(1,0,0,1)";
		imageGunner = "#(argb,8,8,3)color(0,0,1,1)";
		imageNextPage = "#(argb,8,8,3)color(1,0,0,1)";
		imageNoWeapons = "\A3\ui_f\data\igui\cfg\commandbar\imageNoWeapons_ca.paa";
		imagePrevPage = "#(argb,8,8,3)color(1,0,0,1)";
		left = 0.02;
		sizeCommand = "( 16 / 408 )";
		sizeUnitID = "( 16 / 408 )";
		top = 0.9;
		width = 0.96;
		class Semaphore
		{
			colorHoldFire[] = {0.7, 0.1, 0, 1};
			height = 0.01;
			imageSemaphore = "#(argb,8,8,3)color(1,1,1,1)";
			width = 0.0075;
		};
	};
	class HelicopterHUD
	{
		analogueAltitudeAngleOffset = 0;
		analogueAltitudeAngleRange = 5.93412;
		analogueSpeedAngleOffset = 0;
		analogueSpeedAngleRange = 5.93412;
		attitudeElemmentsSize = "0.05 / safezoneH";
		attitudeFOV = 1.04719;
		axis = "\A3\ui_f\data\igui\cfg\helicopterhud\altimeter_axis_ca.paa";
		color[] = {"(profilenamespace getvariable ['IGUI_TEXT_RGB_R',0])", "(profilenamespace getvariable ['IGUI_TEXT_RGB_G',1])", "(profilenamespace getvariable ['IGUI_TEXT_RGB_B',1])", "(profilenamespace getvariable ['IGUI_TEXT_RGB_A',0.8])"};
		font = "RobotoCondensed";
		horizonAircraft = "\A3\ui_f\data\igui\cfg\helicopterhud\horizon_aircraft_ca.paa";
		horizonAxes = "\A3\ui_f\data\igui\cfg\helicopterhud\horizon_axes_ca.paa";
		horizonVector = "\A3\ui_f\data\igui\cfg\helicopterhud\horizon_vector_ca.paa";
		HUDLimitsColor[] = {"(profilenamespace getvariable ['IGUI_TEXT_RGB_R',0])", "(profilenamespace getvariable ['IGUI_TEXT_RGB_G',1])", "(profilenamespace getvariable ['IGUI_TEXT_RGB_B',1])", 1};
		indicator = "\A3\ui_f\data\igui\cfg\helicopterhud\vspeed_value_ca.paa";
		shadow = 0;
		SizeExNormal = 0.035;
		SizeExSmall = 0.02;
		stabilityGrid = "\A3\ui_f\data\igui\cfg\helicopterhud\stability_grid_ca.paa";
		stabilityVector = "\A3\ui_f\data\igui\cfg\helicopterhud\stability_vector_ca.paa";
		statusDamaged[] = {0.8, 0.6, 0, 1};
		statusDestroyed[] = {0.7, 0.1, 0, 1};
		statusEnabled[] = {0, 0.6, 0, 1};
		statusOff[] = {0.95, 0.95, 0.95, 0.25};
		statusOn[] = {0.95, 0.95, 0.95, 0.75};
		windDirection = "\A3\ui_f\data\igui\cfg\helicopterhud\wind_ca.paa";
	};
	class Hint
	{
		dimmEndTime = 35;
		dimmStartTime = 30;
		sound[] = {"\a3\Ui_f\data\Sound\CfgIngameUI\hint", 0.0562341, 1};
	};
	class HitZones
	{
		colorEmpty[] = {1, 1, 1, 0.1};
		class AirplaneEng: TextureBase
		{
			texture = "\a3\Ui_f\data\IGUI\Cfg\HitZones\eng.paa";
			type = 22;
		};
		class AirplaneFuel: TextureBase
		{
			texture = "\a3\Ui_f\data\IGUI\Cfg\HitZones\fuel.paa";
			type = 23;
		};
		class AirplaneGear: TextureBase
		{
			texture = "\a3\Ui_f\data\IGUI\Cfg\HitZones\gear.paa";
			type = 24;
		};
		class AirplaneHull: TextureBase
		{
			texture = "\a3\Ui_f\data\IGUI\Cfg\HitZones\hull.paa";
			type = 0;
		};
		class AirplaneInst: TextureBase
		{
			texture = "\a3\Ui_f\data\IGUI\Cfg\HitZones\inst.paa";
			type = 26;
		};
		class AirplaneWings: TextureBase
		{
			texture = "\a3\Ui_f\data\IGUI\Cfg\HitZones\ctrl.paa";
			type = 25;
		};
		class CarEng: TextureBase
		{
			texture = "\a3\Ui_f\data\IGUI\Cfg\HitZones\eng.paa";
			type = 8;
		};
		class CarFuel: TextureBase
		{
			texture = "\a3\Ui_f\data\IGUI\Cfg\HitZones\fuel.paa";
			type = 9;
		};
		class CarHull: TextureBase
		{
			texture = "\a3\Ui_f\data\IGUI\Cfg\HitZones\hull.paa";
			type = 7;
		};
		class CarWhl: TextureBase
		{
			texture = "\a3\Ui_f\data\IGUI\Cfg\HitZones\whl.paa";
			type = 10;
		};
		class HelicopterAtrq: TextureBase
		{
			texture = "\a3\Ui_f\data\IGUI\Cfg\HitZones\atrq.paa";
			type = 4;
		};
		class HelicopterEng: TextureBase
		{
			texture = "\a3\Ui_f\data\IGUI\Cfg\HitZones\eng.paa";
			type = 2;
		};
		class HelicopterHull: TextureBase
		{
			texture = "\a3\Ui_f\data\IGUI\Cfg\HitZones\hull.paa";
			type = 1;
		};
		class HelicopterInst: TextureBase
		{
			texture = "\a3\Ui_f\data\IGUI\Cfg\HitZones\inst.paa";
			type = 3;
		};
		class HelicopterMrot: TextureBase
		{
			texture = "\a3\Ui_f\data\IGUI\Cfg\HitZones\mrot.paa";
			type = 5;
		};
		class HelicopterWinch: TextureBase
		{
			texture = "\a3\Ui_f\data\IGUI\Cfg\HitZones\slg.paa";
			type = 6;
		};
		class MotorcycleEng: TextureBase
		{
			texture = "\a3\Ui_f\data\IGUI\Cfg\HitZones\eng.paa";
			type = 12;
		};
		class MotorcycleFuel: TextureBase
		{
			texture = "\a3\Ui_f\data\IGUI\Cfg\HitZones\fuel.paa";
			type = 13;
		};
		class MotorcycleHull: TextureBase
		{
			texture = "\a3\Ui_f\data\IGUI\Cfg\HitZones\hull.paa";
			type = 11;
		};
		class MotorcycleWhl: TextureBase
		{
			texture = "\a3\Ui_f\data\IGUI\Cfg\HitZones\whl.paa";
			type = 14;
		};
		class ShipEng: TextureBase
		{
			texture = "\a3\Ui_f\data\IGUI\Cfg\HitZones\eng.paa";
			type = 21;
		};
		class TankEng: TextureBase
		{
			texture = "\a3\Ui_f\data\IGUI\Cfg\HitZones\eng.paa";
			type = 16;
		};
		class TankGun: TextureBase
		{
			texture = "\a3\Ui_f\data\IGUI\Cfg\HitZones\gun.paa";
			type = 17;
		};
		class TankHull: TextureBase
		{
			texture = "\a3\Ui_f\data\IGUI\Cfg\HitZones\hull.paa";
			type = 15;
		};
		class TankLtr: TextureBase
		{
			texture = "\a3\Ui_f\data\IGUI\Cfg\HitZones\ltr.paa";
			type = 18;
		};
		class TankRtr: TextureBase
		{
			texture = "\a3\Ui_f\data\IGUI\Cfg\HitZones\rtr.paa";
			type = 19;
		};
		class TankTrrt: TextureBase
		{
			texture = "\a3\Ui_f\data\IGUI\Cfg\HitZones\trrt.paa";
			type = 20;
		};
		class TextureBase
		{
			h = 1;
			w = 1;
			x = 0;
			y = 0;
		};
	};
	class HitZonesNoTurret: HitZones
	{
		class AirplaneEng: AirplaneEng {};
		class AirplaneFuel: AirplaneFuel {};
		class AirplaneGear: AirplaneGear {};
		class AirplaneHull: AirplaneHull {};
		class AirplaneInst: AirplaneInst {};
		class AirplaneWings: AirplaneWings {};
		class CarEng: CarEng {};
		class CarFuel: CarFuel {};
		class CarHull: CarHull {};
		class CarWhl: CarWhl {};
		class HelicopterAtrq: HelicopterAtrq {};
		class HelicopterEng: HelicopterEng {};
		class HelicopterHull: HelicopterHull {};
		class HelicopterInst: HelicopterInst {};
		class HelicopterMrot: HelicopterMrot {};
		class HelicopterWinch: HelicopterWinch {};
		class MotorcycleEng: MotorcycleEng {};
		class MotorcycleFuel: MotorcycleFuel {};
		class MotorcycleHull: MotorcycleHull {};
		class MotorcycleWhl: MotorcycleWhl {};
		class ShipEng: ShipEng {};
		class TankEng: TankEng {};
		class TankHull: TankHull {};
		class TankLtr: TankLtr {};
		class TankRtr: TankRtr {};
	};
	class IslandMap
	{
		assault = "\A3\ui_f\data\igui\cfg\islandmap\assault_ca.paa";
		assaultColor[] = {"(profilenamespace getvariable ['IGUI_ERROR_RGB_R',0.8])", "(profilenamespace getvariable ['IGUI_ERROR_RGB_G',0.0])", "(profilenamespace getvariable ['IGUI_ERROR_RGB_B',0.0])", "(profilenamespace getvariable ['IGUI_ERROR_RGB_A',1.0])"};
		assaultIconTimeOut = 20;
		assaultNoLOS = "\A3\ui_f\data\igui\cfg\islandmap\assaultNoLOS_ca.paa";
		assaultNoLOSColor[] = {"(profilenamespace getvariable ['IGUI_ERROR_RGB_R',0.8])", "(profilenamespace getvariable ['IGUI_ERROR_RGB_G',0.0])", "(profilenamespace getvariable ['IGUI_ERROR_RGB_B',0.0])", 0.5};
		colorActiveGroup[] = {0, 1, 1, 1};
		colorActiveMission[] = {0, 0, 0, 1};
		colorCamera[] = {0.1, 0.1, 0.9, 1};
		colorCheckpoints[] = {0.2, 0.2, 0.2, 1};
		colorCivilian[] = {"(profilenamespace getvariable ['Map_BLUFOR_R',0])", "(profilenamespace getvariable ['Map_BLUFOR_G',1])", "(profilenamespace getvariable ['Map_BLUFOR_B',1])", "(profilenamespace getvariable ['Map_BLUFOR_A',0.8])"};
		colorDetectorSync[] = {0, 1, 0, 1};
		colorDragging[] = {0.8, 0.8, 0.8, 1};
		colorEnemy[] = {"(profilenamespace getvariable ['Map_OPFOR_R',0])", "(profilenamespace getvariable ['Map_OPFOR_G',1])", "(profilenamespace getvariable ['Map_OPFOR_B',1])", "(profilenamespace getvariable ['Map_OPFOR_A',0.8])"};
		colorExplosive[] = {1, 0, 0, 1};
		colorExposureEnemy[] = {1, 0.2, 0.2, 0.5};
		colorExposureUnknown[] = {0.8, 0.8, 0.2, 0.5};
		colorFriendly[] = {"(profilenamespace getvariable ['Map_Independent_R',0])", "(profilenamespace getvariable ['Map_Independent_G',1])", "(profilenamespace getvariable ['Map_Independent_B',1])", "(profilenamespace getvariable ['Map_Independent_A',0.8])"};
		colorGroups[] = {0, 0.5, 0.5, 0.5};
		colorInactive[] = {1, 1, 1, 0.6};
		colorInfoMove[] = {1, 1, 1, 1};
		colorLabelBackground[] = {0, 0, 0, 1};
		colorMe[] = {0.7, 0.1, 0, 1};
		colorMissions[] = {0.5, 0.5, 0, 0.5};
		colorNeutral[] = {"(profilenamespace getvariable ['Map_Civilian_R',0])", "(profilenamespace getvariable ['Map_Civilian_G',1])", "(profilenamespace getvariable ['Map_Civilian_B',1])", "(profilenamespace getvariable ['Map_Civilian_A',0.8])"};
		colorNonPlayable[] = {0.25, 0.25, 0.25, 1};
		colorPath[] = {0, 1, 1, 1};
		colorPathDone[] = {0, 1, 0, 0.8};
		colorPlayable[] = {0.7, 0, 0.7, 1};
		colorSelect[] = {0, 0, 0, 1};
		colorSensor[] = {0.1, 0.1, 0.9, 1};
		colorSync[] = {0, 0, 1, 1};
		colorUnknown[] = {"(profilenamespace getvariable ['Map_Unknown_R',0])", "(profilenamespace getvariable ['Map_Unknown_G',1])", "(profilenamespace getvariable ['Map_Unknown_B',1])", "(profilenamespace getvariable ['Map_Unknown_A',0.8])"};
		cursorLineWidth = 1;
		iconCamera = "\A3\ui_f\data\igui\cfg\islandmap\iconCamera_ca.paa";
		iconCheckpoint = "#(argb,8,8,3)color(1,1,1,1)";
		iconPlayer = "\A3\ui_f\data\igui\cfg\islandmap\iconPlayer_ca.paa";
		iconSelect = "\A3\ui_f\data\igui\cfg\islandmap\iconSelect_ca.paa";
		iconSensor = "\A3\ui_f\data\igui\cfg\islandmap\iconSensor_ca.paa";
		lockedWaypoint = "#(argb,8,8,3)color(1,0,0,1)";
		scaleDefault = 0.16;
		scaleMax = 1;
		scaleMin = 0.001;
		shadow = 2;
		showTacticalPing = 1;
		size = 26;
		sizeLeader = 24;
		sizePath = 10;
		sizePathDone = 2;
		sizePlayer = 26;
		sizeTacticalPingMarker = 42;
		texturePath = "#(argb,8,8,3)color(1,1,1,1)";
		texturePathDone = "#(argb,8,8,3)color(1,1,1,1)";
		class meCircle
		{
			color[] = {0.7, 0.1, 0, 1};
			refreshDelay = 2;
			size = 500;
		};
	};
	class Menu
	{
		align = 0;
		colorChecked[] = {"(profilenamespace getvariable ['IGUI_TEXT_RGB_R',0])", "(profilenamespace getvariable ['IGUI_TEXT_RGB_G',1])", "(profilenamespace getvariable ['IGUI_TEXT_RGB_B',1])", "(profilenamespace getvariable ['IGUI_TEXT_RGB_A',0.8])"};
		colorDisabled[] = {0.606, 0.606, 0.606, 1};
		colorEnabled[] = {"(profilenamespace getvariable ['IGUI_TEXT_RGB_R',0])", "(profilenamespace getvariable ['IGUI_TEXT_RGB_G',1])", "(profilenamespace getvariable ['IGUI_TEXT_RGB_B',1])", "(profilenamespace getvariable ['IGUI_TEXT_RGB_A',0.8])"};
		colorSelected[] = {"(profilenamespace getvariable ['IGUI_TEXT_RGB_R',0])", "(profilenamespace getvariable ['IGUI_TEXT_RGB_G',1])", "(profilenamespace getvariable ['IGUI_TEXT_RGB_B',1])", 0.5};
		colorSelectedText[] = {"(profilenamespace getvariable ['IGUI_TEXT_RGB_R',0])", "(profilenamespace getvariable ['IGUI_TEXT_RGB_G',1])", "(profilenamespace getvariable ['IGUI_TEXT_RGB_B',1])", "(profilenamespace getvariable ['IGUI_TEXT_RGB_A',0.8])"};
		font = "RobotoCondensed";
		height = "(13.5 * 		(			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 0.8))";
		height2 = 0.5;
		hide = "HTFade";
		hideTime = 60;
		left2 = 0.28;
		quickMenuDelay = 0.5;
		shadow = 1;
		size = "(			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 0.8)";
		top = "(profilenamespace getvariable [""IGUI_GRID_MENU_Y"",		(5 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + safezoneY)])";
		top2 = 0.02;
		width = "6 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
		width2 = 0.25;
		widthMax = "30 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
		widthMin = 0.155;
		x = "(profilenamespace getvariable [""IGUI_GRID_MENU_X"",		(1.5 * 			(			((safezoneW / safezoneH) min 1.2) / 40) + safezoneX)])";
	};
	class Messages
	{
		color1[] = {0.8, 0.6, 0, 0.9};
		color2[] = {0, 0.6, 0, 0.9};
		color3[] = {0.8, 0.8, 0.8, 0.9};
		shadow = 0;
	};
	class MineDetectionSound
	{
		knownMineDetectedSound[] = {"", 0.316228, 1};
		mineDetectorSound[] = {"\A3\Sounds_F\arsenal\Tools\MineDetector_Beep_01", 0.158489, 1};
		pitchCoefClose = 1.5;
		pitchCoefFar = 0.85;
		positionOffset = 1;
		repeatDelayClose = 0.5;
		repeatDelayFar = 1.5;
	};
	class MPTable
	{
		captionSpace = 0.005;
		color[] = {1, 1, 1, 1};
		colorBg[] = {0, 0, 0, 0.6};
		colorBgAlt[] = {0, 0, 0, 0.65};
		colorCaptionBg[] = {0, 0, 0, 1};
		colorCiv[] = {0.45, 0.05, 0.9, 1};
		colorEast[] = {0.83, 0.17, 0.17, 1};
		colorRes[] = {0.18, 0.65, 0.12, 1};
		colorSelected[] = {0, 0, 0, 0.9};
		colorTitleBg[] = {0, 0, 0, 1};
		colorWest[] = {0.13, 0.41, 0.87, 1};
		font = "RobotoCondensed";
		h = 0.8;
		shadow = 0;
		size = "(			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 0.8)";
		w = 0.926;
		x = 0.037;
		y = 0.1;
		class Columns
		{
			class Killed
			{
				picture = "\A3\ui_f\data\igui\cfg\mptable\killed_ca.paa";
				space = 0.005;
				width = 0.1;
			};
			class KillsAir
			{
				picture = "\A3\ui_f\data\igui\cfg\mptable\air_ca.paa";
				space = 0;
				width = 0.1;
			};
			class KillsArmor
			{
				picture = "\A3\ui_f\data\igui\cfg\mptable\armored_ca.paa";
				space = 0;
				width = 0.11;
			};
			class KillsInfantry
			{
				picture = "\A3\ui_f\data\igui\cfg\mptable\infantry_ca.paa";
				space = 0;
				width = 0.11;
			};
			class KillsSoft
			{
				picture = "\A3\ui_f\data\igui\cfg\mptable\soft_ca.paa";
				space = 0;
				width = 0.1;
			};
			class KillsTotal
			{
				picture = "\A3\ui_f\data\igui\cfg\mptable\total_ca.paa";
				space = 0;
				width = 0.108;
			};
			class Order
			{
				colorBg[] = {0.1, 0.27, 0.1, 0.8};
				space = 0;
				width = 0.049;
			};
			class Player
			{
				colorBg[] = {0.1, 0.23, 0.1, 0.8};
				space = 0.005;
				width = 0.27;
			};
		};
		class RespawnMessage
		{
			color[] = {0, 0, 0, 0};
			colorBg[] = {0, 0, 0, 0};
			font = "RobotoCondensed";
			hBg = 0;
			shadow = 0;
			size = 0;
			wBg = 0;
			x = 0;
			xBg = 0;
			y = 0;
			yBg = 0;
		};
	};
	class PeripheralVision
	{
		bloodColor[] = {1, 1, 1, 0.75};
		bloodTexture = "A3\ui_f\data\igui\cfg\PeripheralVision\bloodTexture_ca.paa";
		cueColor[] = {1, 1, 1, 1};
		cueEnemyColor[] = {0.706, 0.0745, 0.0196, 1};
		cueFriendlyColor[] = {0.709, 0.972, 0.384, 1};
		cueTexture = "A3\ui_f\data\igui\cfg\PeripheralVision\cueTexture_gs.paa";
		shadow = 0;
	};
	class Picture
	{
		color[] = {0.8, 0.8, 0.8, 1};
		colorProblems[] = {0.7, 0.1, 0, 1};
		imageBusy = "#(argb,8,8,3)color(1,1,1,1)";
		imageCommand = "#(argb,8,8,3)color(1,1,1,1)";
		imageWaiting = "#(argb,8,8,3)color(1,1,1,1)";
		shadow = 0;
	};
	class Picturem
	{
		imageBusy = "\A3\ui_f\data\igui\cfg\picturem\busy_ca.paa";
		imageCommand = "\A3\ui_f\data\igui\cfg\picturem\command_ca.paa";
		imageWaiting = "\A3\ui_f\data\igui\cfg\picturem\waiting_ca.paa";
	};
	class PlayerColors
	{
		class ColAqua
		{
			text = "Aqua";
			texture = "#(argb,8,8,3)color(0,1,1,1)";
		};
		class ColBlack
		{
			text = "Black";
			texture = "#(argb,8,8,3)color(0,0,0,1)";
		};
		class ColBlue
		{
			text = "Blue";
			texture = "#(argb,8,8,3)color(0,0,1,1)";
		};
		class ColGreen
		{
			text = "Green";
			texture = "#(argb,8,8,3)color(0,1,0,1)";
		};
		class ColGrey
		{
			text = "Grey";
			texture = "#(argb,8,8,3)color(0.3,0.3,0.3,1)";
		};
		class ColNone
		{
			text = "None";
			texture = "#(argb,8,8,3)color(0,0,0,0)";
		};
		class ColOrange
		{
			text = "Orange";
			texture = "#(argb,8,8,3)color(1,0.5,0,1)";
		};
		class ColPurple
		{
			text = "Purple";
			texture = "#(argb,8,8,3)color(0.75,0,0.75,1)";
		};
		class ColRed
		{
			text = "Red";
			texture = "#(argb,8,8,3)color(1,0,0,1)";
		};
		class ColWhite
		{
			text = "White";
			texture = "#(argb,8,8,3)color(1,1,1,1)";
		};
		class ColYellow
		{
			text = "Yellow";
			texture = "#(argb,8,8,3)color(1,1,0,1)";
		};
	};
	class PlayerInfo
	{
		colorBackground[] = {1, 0, 1, 1};
		colorTime[] = {0.8, 0.8, 0.8, 1};
		dimmEndTime = 10;
		dimmStartTime = 5;
		height = 0.28;
		left = "0 + SafeZoneX";
		top = "0.177 + SafeZoneY";
		width = 0.15;
		class ArmorBar
		{
			width = 0.12;
		};
		class ExperienceBar
		{
			color[] = {0.8, 0.8, 0.8, 1};
			width = 0.12;
		};
		class FuelBar
		{
			width = 0.12;
		};
		class HealthBar
		{
			stallWarning = 0.2;
			width = 0.12;
		};
		class Side
		{
			height = 0.072;
			width = 0.06;
		};
		class Sign
		{
			height = 0.03;
			widthGroup = 0.02;
			widthSector = 0.04;
			widthUnit = 0.02;
		};
		class UnitPicture
		{
			height = 0.56;
			width = 0.55;
		};
	};
	class ProgressFont
	{
		font = "RobotoCondensed";
		shadow = 0;
		size = "(			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 0.8)";
	};
	class Radar
	{
		height = "(5.6 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25))";
		left = "(profilenamespace getvariable [""IGUI_GRID_RADAR_X"",		(safezoneX + safezoneW / 2 - 2.8 * 			(			((safezoneW / safezoneH) min 1.2) / 40))])";
		radarAirBackgroundTexture = "A3\Ui_f\data\igui\cfg\radar\radar_ca.paa";
		radarAirDangerSector = "\A3\ui_f\data\igui\cfg\radar\danger_ca.paa";
		radarAssault = "\A3\Ui_f\data\IGUI\Cfg\Radar\assault_ca.paa";
		radarAssaultColor[] = {"(profilenamespace getvariable ['IGUI_ERROR_RGB_R',0.8])", "(profilenamespace getvariable ['IGUI_ERROR_RGB_G',0.0])", "(profilenamespace getvariable ['IGUI_ERROR_RGB_B',0.0])", "(profilenamespace getvariable ['IGUI_ERROR_RGB_A',1.0])"};
		radarColor[] = {0.8, 0.8, 0.8, 0.75};
		radarCompassOnlyBackgroundTexture = "A3\Ui_f\data\igui\cfg\radar\radar_ca.paa";
		radarCustomWaypoint = "\A3\Ui_f\data\IGUI\Cfg\Radar\assault_ca.paa";
		radarCustomWaypointColor[] = {"(profilenamespace getvariable ['IGUI_WARNING_RGB_R',0.8])", "(profilenamespace getvariable ['IGUI_WARNING_RGB_G',0.5])", "(profilenamespace getvariable ['IGUI_WARNING_RGB_B',0.0])", "(profilenamespace getvariable ['IGUI_WARNING_RGB_A',0.8])"};
		radarFOV = "\A3\ui_f\data\igui\cfg\radar\viewdir_ca.paa";
		radarFOVCrew[] = {"(profilenamespace getvariable ['IGUI_BCG_RGB_R',0])", "(profilenamespace getvariable ['IGUI_BCG_RGB_G',1])", "(profilenamespace getvariable ['IGUI_BCG_RGB_B',1])", 1};
		radarFOVPlayer[] = {"(profilenamespace getvariable ['IGUI_TEXT_RGB_R',0])", "(profilenamespace getvariable ['IGUI_TEXT_RGB_G',1])", "(profilenamespace getvariable ['IGUI_TEXT_RGB_B',1])", "(profilenamespace getvariable ['IGUI_TEXT_RGB_A',0.8])"};
		radarIncommingDangerColor[] = {"(profilenamespace getvariable ['IGUI_ERROR_RGB_R',0.8])", "(profilenamespace getvariable ['IGUI_ERROR_RGB_G',0.0])", "(profilenamespace getvariable ['IGUI_ERROR_RGB_B',0.0])", "(profilenamespace getvariable ['IGUI_ERROR_RGB_A',1.0])"};
		radarIncommingMissile = "\A3\ui_f\data\igui\cfg\radar\missle_ca.paa";
		radarLockDangerColor[] = {"(profilenamespace getvariable ['IGUI_WARNING_RGB_R',0.8])", "(profilenamespace getvariable ['IGUI_WARNING_RGB_G',0.5])", "(profilenamespace getvariable ['IGUI_WARNING_RGB_B',0.0])", "(profilenamespace getvariable ['IGUI_WARNING_RGB_A',0.8])"};
		radarOut = "\A3\Ui_f\data\IGUI\Cfg\Radar\waypointOut_ca.paa";
		radarTankBackgroundTexture = "A3\Ui_f\data\igui\cfg\radar\radar_ca.paa";
		radarTargetingEnemy = "\A3\ui_f\data\igui\cfg\radar\targeting_ca.paa";
		radarVehicleTarget = "\A3\ui_f\data\igui\cfg\radar\target_ca.paa";
		radarWaypoint = "\A3\Ui_f\data\IGUI\Cfg\Radar\assault_ca.paa";
		radarWaypointColor[] = {"(profilenamespace getvariable ['IGUI_WARNING_RGB_R',0.8])", "(profilenamespace getvariable ['IGUI_WARNING_RGB_G',0.5])", "(profilenamespace getvariable ['IGUI_WARNING_RGB_B',0.0])", "(profilenamespace getvariable ['IGUI_WARNING_RGB_A',0.8])"};
		shadow = 0;
		top = "(profilenamespace getvariable [""IGUI_GRID_RADAR_Y"",		(safezoneY + 0.5 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25))])";
		width = "(5.6 * 			(			((safezoneW / safezoneH) min 1.2) / 40))";
	};
	class SideColors
	{
		colorCivilian[] = {0.606, 0.606, 0.606, 1};
		colorEnemy[] = {0.706, 0.0745, 0.0196, 1};
		colorFriendly[] = {0.709, 0.972, 0.384, 1};
		colorNeutral[] = {0.606, 0.606, 0.606, 1};
		colorUnknown[] = {0.863, 0.584, 0, 1};
	};
	class SquadRadar
	{
		backgroundTexture = "#(argb,8,8,3)color(1,1,1,1)";
		colorBackground[] = {0.8, 0.8, 0.8, 0};
		compassBackgroundTexture = "#(argb,8,8,3)color(1,1,1,1)";
		enemyUnitColor[] = {0.7, 0.1, 0, 0};
		font = "TahomaB";
		friendlyUnitColor[] = {0.8, 0.8, 0.8, 0};
		h = 0;
		hList1 = 0;
		hList2 = 0;
		iconAlpha = 0;
		iconDesaturation = 0;
		iconSize = 0.015;
		limitsDist[] = {15, 30, 50};
		numberOfRows = 6;
		otherUnitsIcon = "#(argb,8,8,3)color(1,1,1,1)";
		scrollNumber = 6;
		shadow = 0;
		taskArrowHeight = 0.01;
		taskArrowWidth = 0.01;
		taskIconColor[] = {0.8, 0.6, 0, 0};
		taskIconNear = "#(argb,8,8,3)color(1,1,1,1)";
		taskIconSize = 0.01;
		textHeight = 0.4;
		textureDist[] = {0.27, 0.54, 0.9};
		unconsciousUnitIcon = "#(argb,8,8,3)color(1,1,1,1)";
		unconsciousUnitMinAlpha = 0.2;
		unconsciousUnitTimePeriod = 4;
		w = 0;
		wList1 = 0;
		wList2 = 0;
		x = 0.1;
		xList1 = 0.1;
		xList2 = 0.1;
		y = 0.1;
		yList1 = 0.1;
		yList2 = 0.1;
	};
	class TacticalDisplay: SideColors
	{
		colorCamera[] = {1, 1, 1, 0};
		height = 0.008;
		left = "(0.263)";
		shadow = 0;
		targetAirTexture = "\A3\ui_f\data\igui\cfg\tacticaldisplay\targetAirTexture_gs.paa";
		targetLaserTexture = "\A3\ui_f\data\igui\cfg\tacticaldisplay\targetLaserTexture_gs.paa";
		targetNVTexture = "\A3\ui_f\data\igui\cfg\tacticaldisplay\targetNVTexture_gs.paa";
		targetTexture = "\A3\ui_f\data\igui\cfg\tacticaldisplay\targetTexture_gs.paa";
		top = "0.055 + SafeZoneY";
		width = 0.473;
		class Cursor
		{
			color[] = {1, 1, 1, 1};
			height = 0.0261438;
			shadow = 0;
			width = 0.0196078;
		};
	};
	class TacticalPing
	{
		color[] = {"(profilenamespace getvariable ['IGUI_TACTPING_RGB_R',1.0])", "(profilenamespace getvariable ['IGUI_TACTPING_RGB_G',0.8])", "(profilenamespace getvariable ['IGUI_TACTPING_RGB_B',0.2])", "(profilenamespace getvariable ['IGUI_TACTPING_RGB_A',1.0])"};
		dimmEndTime = 9.5;
		dimmStartTime = 8.75;
		farDistance = 50;
		iconSizePowExponent = 1;
		isPinType = 0;
		maxSize = "3 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
		minSize = "2.4 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
		nearDistance = 5;
		pulseCount = 12;
		pulseMinAlpha = 0.8;
		pulseSizeCoef = 1.2;
		pulseTimePeriod = 0.75;
		shadow = 0;
		soundDelay = 0.5;
		soundDelayOnePlayer = 1;
		sounds[] = {"TacticalPing2", "TacticalPing3", "TacticalPing4"};
		texture = "\A3\Ui_f\data\IGUI\Cfg\TacticalPing\TacticalPingDefault_ca.paa";
		class ContextMenuMap: RadialMenu
		{
			arrow = "#(argb,8,8,3)color(1,1,1,1)";
			colorBackground[] = {0, 0, 0, 1};
			colorBorder[] = {0, 0, 0, 0};
			colorDisabled[] = {0.5, 0.5, 0.5, 0.25};
			colorPicture[] = {1, 1, 1, 1};
			colorPictureDisabled[] = {1, 1, 1, 0.5};
			colorPictureSelect[] = {0, 0, 0, 1};
			colorSelect[] = {1, 1, 1, 1};
			colorSelectBackground[] = {1, 0, 0, 1};
			colorText[] = {1, 1, 1, 1};
			font = "TahomaB";
			h = 0;
			itemSpacingH = 0.01;
			itemSpacingW = 0.01;
			pictureCheckboxDisabled = "#(argb,8,8,3)color(1,1,1,1)";
			pictureCheckboxEnabled = "#(argb,8,8,3)color(1,1,1,1)";
			pictureRadioDisabled = "#(argb,8,8,3)color(1,1,1,1)";
			pictureRadioEnabled = "#(argb,8,8,3)color(1,1,1,1)";
			rowHeight = 0.06;
			sizeEx = 0.05;
			style = 0;
			w = 0;
			x = 0;
			y = 0;
			class Items
			{
				Items[] = {"DefaultPing", "Enemy"};
				class Default
				{
					enable = 0;
					text = "";
				};
				class DefaultPing
				{
					data = "Default";
					picture = "\A3\Ui_f\data\Map\Markers\Military\circle_CA.paa";
					text = "Look";
				};
				class Enemy
				{
					data = "Enemy";
					picture = "\A3\Ui_f\data\Map\Markers\Military\circle_CA.paa";
					text = "Enemy";
				};
			};
		};
		class Custom0: Default {};
		class Custom1: Default {};
		class Custom10: Default {};
		class Custom11: Default {};
		class Custom12: Default {};
		class Custom13: Default {};
		class Custom14: Default {};
		class Custom15: Default {};
		class Custom16: Default {};
		class Custom17: Default {};
		class Custom18: Default {};
		class Custom19: Default {};
		class Custom2: Default {};
		class Custom20: Default {};
		class Custom21: Default {};
		class Custom22: Default {};
		class Custom23: Default {};
		class Custom24: Default {};
		class Custom25: Default {};
		class Custom26: Default {};
		class Custom27: Default {};
		class Custom28: Default {};
		class Custom29: Default {};
		class Custom3: Default {};
		class Custom4: Default {};
		class Custom5: Default {};
		class Custom6: Default {};
		class Custom7: Default {};
		class Custom8: Default {};
		class Custom9: Default {};
		class Default
		{
			color[] = {0, 1, 0, 1};
			dimmEndTime = 20;
			dimmStartTime = 10;
			farDistance = 100;
			iconSizePowExponent = 2;
			isPinType = 0;
			maxSize = 0.05;
			minSize = 0.01;
			nearDistance = 0;
			pulseCount = 3;
			pulseMinAlpha = 0.2;
			pulseSizeCoef = 1.5;
			pulseTimePeriod = 1;
			shadow = 0;
			soundDelay = 1;
			soundDelayOnePlayer = 5;
			sounds[] = {};
			texture = "#(argb,8,8,3)color(1,1,1,1)";
		};
		class Disembark: Default {};
		class Enemy: Default
		{
			color[] = {1, 0, 0, 1};
			isPinType = 1;
		};
		class EnemyAircraft: Enemy {};
		class EnemyInfantry: Enemy {};
		class EnemyVehicle: Enemy {};
		class Look: Default {};
		class NeedHelp: Default {};
		class Objective: Default {};
		class RadialMenu
		{
			arrow = "#(argb,8,8,3)color(1,1,1,1)";
			colorBackground[] = {0, 0, 0, 1};
			colorBorder[] = {0, 0, 0, 0};
			colorDisabled[] = {0.5, 0.5, 0.5, 0.25};
			colorPicture[] = {1, 1, 1, 1};
			colorPictureDisabled[] = {1, 1, 1, 0.5};
			colorPictureSelect[] = {0, 0, 0, 1};
			colorSelect[] = {1, 1, 1, 1};
			colorSelectBackground[] = {1, 0, 0, 1};
			colorText[] = {1, 1, 1, 1};
			font = "TahomaB";
			h = 0;
			interactiveCenter = 0;
			itemSpacingH = 0.01;
			itemSpacingW = 0.01;
			maxItems = 4;
			pictureCheckboxDisabled = "#(argb,8,8,3)color(1,1,1,1)";
			pictureCheckboxEnabled = "#(argb,8,8,3)color(1,1,1,1)";
			pictureRadioDisabled = "#(argb,8,8,3)color(1,1,1,1)";
			pictureRadioEnabled = "#(argb,8,8,3)color(1,1,1,1)";
			rowHeight = 0.06;
			sizeEx = 0.05;
			style = 0;
			uniformPlacement = 0;
			w = 0;
			x = 0;
			y = 0;
			class Items
			{
				items[] = {"DefaultPing", "Danger", "DummyEntry", "DummyEntry"};
				class BackButton
				{
					text = "Back";
					value = 1;
				};
				class Danger
				{
					items[] = {"Enemy", "DummyEntry", "DummyEntry", "BackButton"};
					text = "Danger";
				};
				class Default
				{
					enable = 0;
					text = "";
				};
				class DefaultPing
				{
					data = "Default";
					text = "Look";
				};
				class DummyEntry {};
				class Enemy
				{
					data = "Enemy";
					text = "Enemy";
				};
			};
		};
	};
	class TankDirection
	{
		color[] = {"(profilenamespace getvariable ['IGUI_TEXT_RGB_R',0])", "(profilenamespace getvariable ['IGUI_TEXT_RGB_G',1])", "(profilenamespace getvariable ['IGUI_TEXT_RGB_B',1])", "(profilenamespace getvariable ['IGUI_TEXT_RGB_A',0.8])"};
		colorFullDammage[] = {"(profilenamespace getvariable ['IGUI_ERROR_RGB_R',0.8])", "(profilenamespace getvariable ['IGUI_ERROR_RGB_G',0.0])", "(profilenamespace getvariable ['IGUI_ERROR_RGB_B',0.0])", "(profilenamespace getvariable ['IGUI_ERROR_RGB_A',1.0])"};
		colorHalfDammage[] = {"(profilenamespace getvariable ['IGUI_WARNING_RGB_R',0.8])", "(profilenamespace getvariable ['IGUI_WARNING_RGB_G',0.5])", "(profilenamespace getvariable ['IGUI_WARNING_RGB_B',0.0])", "(profilenamespace getvariable ['IGUI_WARNING_RGB_A',0.8])"};
		height = 0.313726;
		imageEngine = "\A3\ui_f\data\igui\cfg\tankdirection\Engine_gs.paa";
		imageGun = "\A3\ui_f\data\igui\cfg\tankdirection\Gun_gs.paa";
		imageHull = "\A3\ui_f\data\igui\cfg\tankdirection\Hull_gs.paa";
		imageLTrack = "\A3\ui_f\data\igui\cfg\tankdirection\LTrack_gs.paa";
		imageMoveAuto = "#(argb,8,8,3)color(0,0,0,0)";
		imageMoveBack = "#(argb,8,8,3)color(0,0,0,0)";
		imageMoveFast = "#(argb,8,8,3)color(0,0,0,0)";
		imageMoveForward = "#(argb,8,8,3)color(0,0,0,0)";
		imageMoveLeft = "#(argb,8,8,3)color(0,0,0,0)";
		imageMoveRight = "#(argb,8,8,3)color(0,0,0,0)";
		imageMoveStop = "#(argb,8,8,3)color(0,0,0,0)";
		imageObsTurret = "\A3\ui_f\data\igui\cfg\tankdirection\ObsTurret_gs.paa";
		imageRTrack = "\A3\ui_f\data\igui\cfg\tankdirection\RTrack_gs.paa";
		imageTower = "\A3\ui_f\data\igui\cfg\tankdirection\Tower_gs.paa";
		imageTurret = "\A3\ui_f\data\igui\cfg\tankdirection\Turret_gs.paa";
		left = -10;
		shadow = 0;
		top = -10;
		width = 0.235294;
	};
	class TaskHint
	{
		dimmEndTime = 5;
		dimmStartTime = 0.3;
		dimShowTime = 4.7;
	};
	class TooltipFont
	{
		font = "RobotoCondensed";
		shadow = 2;
		size = "(			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 0.8)";
	};
};
