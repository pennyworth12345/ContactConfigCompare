class CfgCurator
{
	groupInfoType = "RscDisplayAttributesGroup";
	icon = "\a3\ui_f_curator\data\logos\arma3_curator_eye_64_ca.paa";
	logo = "\a3\ui_f_curator\data\logos\arma3_curator_256_ca.paa";
	markerInfoType = "RscDisplayAttributesMarker";
	soundsPing[] = {"RscDisplayCurator_ping01", "RscDisplayCurator_ping02", "RscDisplayCurator_ping03", "RscDisplayCurator_ping04", "RscDisplayCurator_ping05", "RscDisplayCurator_ping06", "RscDisplayCurator_ping07"};
	waypointInfoType = "RscDisplayAttributesWaypoint";
	class DrawCamera
	{
		class 2D
		{
			color[] = {0, 0, 0, 1};
			maxLineDistance = 1000;
			texture = "\a3\Ui_f\data\GUI\Rsc\RscDisplayMissionEditor\iconCamera_ca.paa";
		};
	};
	class DrawGroup
	{
		alphaNormal = 0.5;
		alphaSelected = 1;
		alphaTarget = 1;
		color = "side";
		colorPreview[] = {1, 1, 1, 1};
		sizeCoefEndDistance = 6000;
		sizeCoefStartDistance = 5000;
		textureCivilian = "\a3\Ui_f\data\Map\Markers\NATO\n_unknown.paa";
		textureEast = "\a3\Ui_f\data\Map\Markers\NATO\o_unknown.paa";
		textureGuer = "\a3\Ui_f\data\Map\Markers\NATO\n_unknown.paa";
		textureUnknown = "\a3\Ui_f\data\Map\Markers\NATO\n_unknown.paa";
		textureWest = "\a3\Ui_f\data\Map\Markers\NATO\b_unknown.paa";
		class 2D
		{
			alphaNormal = 0.5;
			alphaSelected = 1;
			alphaTarget = 1;
			color = "side";
			colorPreview[] = {1, 1, 1, 1};
			textureCivilian = "\a3\Ui_f\data\Map\Markers\NATO\n_unknown.paa";
			textureEast = "\a3\Ui_f\data\Map\Markers\NATO\o_unknown.paa";
			textureGuer = "\a3\Ui_f\data\Map\Markers\NATO\n_unknown.paa";
			textureUnknown = "\a3\Ui_f\data\Map\Markers\NATO\n_unknown.paa";
			textureWest = "\a3\Ui_f\data\Map\Markers\NATO\b_unknown.paa";
		};
		class 3D
		{
			alphaNormal = 0.5;
			alphaSelected = 1;
			alphaTarget = 1;
			color = "side";
			colorPreview[] = {1, 1, 1, 1};
			sizeCoefEndDistance = 6000;
			sizeCoefStartDistance = 5000;
			textureCivilian = "\a3\Ui_f\data\Map\Markers\NATO\n_unknown.paa";
			textureEast = "\a3\Ui_f\data\Map\Markers\NATO\o_unknown.paa";
			textureGuer = "\a3\Ui_f\data\Map\Markers\NATO\n_unknown.paa";
			textureUnknown = "\a3\Ui_f\data\Map\Markers\NATO\n_unknown.paa";
			textureWest = "\a3\Ui_f\data\Map\Markers\NATO\b_unknown.paa";
		};
	};
	class DrawObject
	{
		iconCargo = "\a3\Ui_f\data\IGUI\Cfg\CommandBar\imageCargo_ca.paa";
		iconCommander = "\a3\Ui_f\data\IGUI\Cfg\CommandBar\imageCommander_ca.paa";
		iconDriver = "\a3\Ui_f\data\IGUI\Cfg\CommandBar\imageDriver_ca.paa";
		iconGunner = "\a3\Ui_f\data\IGUI\Cfg\CommandBar\imageGunner_ca.paa";
		iconSize = 0.65;
		class 2D
		{
			alphaHover = 1;
			alphaHoverBackground = 1;
			alphaNormal = 0.4;
			alphaNormalBackground = 0.25;
			alphaSelected = 0.7;
			alphaSelectedBackground = 0.5;
			alphaTarget = 1;
			alphaTargetBackground = 1;
			color[] = {1, 1, 1, 1};
			colorBackground[] = {"side"};
			colorBBoxWhileDragging[] = {0, 1, 1, 1};
			colorDisabled[] = {1, 1, 1, 1};
			colorDisabledBackground[] = {"side"};
			colorGroupsPreviewColor[] = {0, 1, 1, 1};
			colorLineGroupingUnits[] = {0, 1, 1, 1};
			colorLogic[] = {1, 1, 1, 1};
			colorLogicBackground[] = {0.5, 0.5, 0.5, 1};
			colorLogicDisabled[] = {1, 1, 1, 1};
			colorLogicDisabledBackground[] = {0.5, 0.5, 0.5, 1};
			colorPreview[] = {1, 1, 1, 1};
			colorPreviewBackground[] = {1, 1, 1, 0.25};
			colorPreviewDisabled[] = {1, 0, 0, 1};
			colorPreviewDisabledBackground[] = {1, 1, 1, 0.25};
			colorSelectionSquare[] = {0, 1, 0, 1};
			size = 26;
			sizeCoefEndDistance = 200;
			sizeCoefStartDistance = 50;
			sizeNormal = 1;
			sizeSelected = 1;
			sizeTarget = 1.1;
			texture = "\A3\ui_f_curator\data\cfgcurator\entity_ca.paa";
			textureBackground = "\A3\ui_f_curator\data\cfgcurator\entity_selected_ca.paa";
			textureDisabled = "\A3\ui_f_curator\data\cfgcurator\entity_disabled_ca.paa";
			textureDisabledBackground = "\A3\ui_f_curator\data\cfgcurator\entity_selected_ca.paa";
		};
		class 3D
		{
			alphaHover = 1;
			alphaHoverBackground = 1;
			alphaNormal = 0.4;
			alphaNormalBackground = 0.25;
			alphaSelected = 0.7;
			alphaSelectedBackground = 0.5;
			color[] = {1, 1, 1, 1};
			colorBackground[] = {"side"};
			colorBBoxWhileDragging[] = {0, 1, 1, 1};
			colorDisabled[] = {1, 1, 1, 1};
			colorDisabledBackground[] = {"side"};
			colorGroupsPreviewColor[] = {0, 1, 1, 1};
			colorLineGroupingUnits[] = {0, 1, 1, 1};
			colorLogic[] = {1, 1, 1, 1};
			colorLogicBackground[] = {0.5, 0.5, 0.5, 1};
			colorLogicDisabled[] = {1, 1, 1, 1};
			colorLogicDisabledBackground[] = {0.5, 0.5, 0.5, 1};
			colorPreview[] = {1, 1, 1, 1};
			colorPreviewBackground[] = {1, 1, 1, 0.25};
			colorPreviewDisabled[] = {1, 0, 0, 1};
			colorPreviewDisabledBackground[] = {1, 1, 1, 0.25};
			colorSelectionSquare[] = {0, 1, 0, 1};
			endIconFading = 750;
			endLogicIconFading = 1500;
			sizeCoefEndDistance = 200;
			sizeCoefStartDistance = 50;
			sizeNormal = 1;
			sizeSelected = 1;
			sizeTarget = 1.1;
			starLogictIconFading = 1000;
			startIconFading = 250;
			startLogicIconFading = 1000;
			texture = "\A3\ui_f_curator\data\cfgcurator\entity_ca.paa";
			textureBackground = "\A3\ui_f_curator\data\cfgcurator\entity_selected_ca.paa";
			textureDisabled = "\A3\ui_f_curator\data\cfgcurator\entity_disabled_ca.paa";
			textureDisabledBackground = "\A3\ui_f_curator\data\cfgcurator\entity_selected_ca.paa";
		};
		class PlayerPings
		{
			alowRepeatAfter = 4000;
			animationLength = 6000;
		};
	};
	class DrawPlayer
	{
		class 2D
		{
			color[] = {0.7, 0.1, 0, 1};
			colorLaser[] = {1, 1, 1, 0.5};
			colorRemote[] = {1, 1, 1, 0.5};
			texture = "\A3\ui_f\data\igui\cfg\islandmap\iconPlayer_ca.paa";
			textureLaser = "\a3\Ui_F_Curator\Data\CfgCurator\laser_ca.paa";
			textureRemote = "\A3\ui_f\data\igui\cfg\islandmap\iconPlayer_ca.paa";
		};
		class 3D
		{
			color[] = {0.7, 0.1, 0, 1};
			colorLaser[] = {1, 1, 1, 0.5};
			colorRemote[] = {1, 1, 1, 0.5};
			texture = "\A3\ui_f\data\igui\cfg\islandmap\iconPlayer_ca.paa";
			textureLaser = "\a3\Ui_F_Curator\Data\CfgCurator\laser_ca.paa";
			textureRemote = "\A3\ui_f\data\igui\cfg\islandmap\iconPlayer_ca.paa";
		};
	};
	class DrawWaypoint
	{
		class 2D
		{
			colorCycleHover[] = {1, 1, 1, 1};
			colorCycleNormal[] = {0, 0, 0, 0.5};
			colorCycleSelected[] = {1, 1, 1, 0.5};
			colorHover[] = {1, 1, 1, 1};
			colorNormal[] = {0, 0, 0, 0.5};
			colorPreview[] = {0, 0, 0, 0.5};
			colorSelected[] = {1, 1, 1, 0.5};
			texture = "\a3\Ui_F_Curator\Data\CfgCurator\waypoint_ca.paa";
			textureCycle = "\a3\Ui_F_Curator\Data\CfgCurator\waypointCycle_ca.paa";
			texturePreview = "\a3\Ui_F_Curator\Data\CfgCurator\waypoint_ca.paa";
		};
		class 3D
		{
			colorCycleHover[] = {1, 1, 1, 1};
			colorCycleNormal[] = {0.5, 1, 0.5, 1};
			colorCycleSelected[] = {1, 1, 1, 1};
			colorHover[] = {1, 1, 1, 1};
			colorNormal[] = {0.5, 1, 0.5, 1};
			colorPreview[] = {0, 0, 0, 0.5};
			colorSelected[] = {1, 1, 1, 1};
			texture = "\a3\Ui_F_Curator\Data\CfgCurator\waypoint_ca.paa";
			textureCycle = "\a3\Ui_F_Curator\Data\CfgCurator\waypointCycle_ca.paa";
			texturePreview = "\a3\Ui_F_Curator\Data\CfgCurator\waypoint_ca.paa";
		};
	};
	class EditingArea
	{
		class 2D
		{
			colorBorder[] = {1, 1, 1, 1};
			iconSizeMultiplier = 0.003;
			textureBorder = "\a3\ui_f_curator\data\cfgcurator\area_ca.paa";
		};
		class 3D
		{
			objectBorder = "a3\UI_F_Curator\Objects\objectBorder.p3d";
		};
	};
};
