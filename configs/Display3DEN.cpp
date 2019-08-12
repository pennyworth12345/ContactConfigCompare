class Display3DEN
{
	enableDisplay = 1;
	enableSimulation = 1;
	idd = 313;
	onLoad = "[""onLoad"",_this,""Display3DEN"",'3DENDisplays'] call 	(uinamespace getvariable 'BIS_fnc_initDisplay')";
	onUnload = "[""onUnload"",_this,""Display3DEN"",'3DENDisplays'] call 	(uinamespace getvariable 'BIS_fnc_initDisplay')";
	scriptName = "Display3DEN";
	scriptPath = "3DENDisplays";
	class ContextMenu: ctrlMenu
	{
		colorBackground[] = {0.1, 0.1, 0.1, 1};
		idc = 1100;
		class Items
		{
			items[] = {"ConnectParent", "SeparatorSelected", "MoveCamera", "PlayFromHere", "PlayAsEntity", "Separator", "Select", "Edit", "Transform", "Grid", "Log", "ChangeSeatParent", "SeparatorEntity", "CustomComposition", "FindCreate", "FindConfig", "SeparatorSelected", "SeparatorNotSelected", "CreateComment", "Arsenal", "ArsenalReset", "Garage", "GarageReset", "SeparatorArsenal", "Attributes"};
			class Arsenal
			{
				action = "['arsenal'] call bis_fnc_3DENEntityMenu;";
				conditionShow = "hoverObjectBrain 	* (1 - (hoverObjectVehicle))";
				data = "Arsenal";
				opensNewWindow = 1;
				picture = "\a3\3DEN\Data\Displays\Display3DEN\EntityMenu\arsenal_ca.paa";
				text = "Edit Loadout";
				value = 0;
			};
			class ArsenalReset
			{
				action = "['arsenalReset'] call bis_fnc_3DENEntityMenu;";
				conditionShow = "hoverObjectBrain 	* (1 - (hoverObjectVehicle))";
				data = "ArsenalReset";
				text = "Reset Loadout";
				value = 0;
			};
			class AttachTo
			{
				conditionShow = "hoverObject 	* (1 - (hoverObjectAttached))";
				data = "AttachTo";
				enable = 0;
				text = "Attach To";
				value = 0;
			};
			class Attributes
			{
				conditionShow = "selected";
				data = "OpenAttributes";
				opensNewWindow = 1;
				text = "Attributes";
				value = 0;
			};
			class ChangeSeat
			{
				data = "ChangeSeat";
			};
			class ChangeSeatParent
			{
				items[] = {"ChangeSeat"};
				text = "Change Seat";
				value = 0;
			};
			class Connect
			{
				data = "Connect";
			};
			class ConnectOther
			{
				data = "ConnectOther";
			};
			class ConnectParent
			{
				items[] = {"Connect", "ConnectOther"};
				text = "Connect";
				value = 0;
			};
			class Copy
			{
				conditionEnable = "selected";
				data = "CopyUnit";
				shortcuts[] = {"512 + 0x2E"};
				text = "Copy";
				value = 0;
			};
			class CopyAttributes
			{
				conditionEnable = "selected";
				data = "CopyAttributes";
				enable = 0;
				text = "Copy Attributes";
				value = 0;
			};
			class CreateComment
			{
				conditionShow = "(1 - (selected))";
				data = "CreateAndChangeComment";
				picture = "\a3\3DEN\Data\Cfg3DEN\Comment\texture_ca.paa";
				text = "Place Comment";
				value = 0;
			};
			class CustomComposition
			{
				action = "do3denaction 'createcustomcomposition';";
				conditionShow = "hoverObject 	+ hoverGroup 	+ 	+ hoverTrigger 	+ hoverWaypoint 	+ hoverLogic 	+ hoverMarker 	+ hoverLayer";
				data = "CustomComposition";
				opensNewWindow = 1;
				picture = "\a3\3DEN\Data\Displays\Display3DEN\PanelRight\customcomposition_add_ca.paa";
				text = "Save Custom Composition";
				value = 0;
			};
			class Cut
			{
				conditionEnable = "selected";
				data = "CutUnit";
				shortcuts[] = {"512 + 0x2D"};
				text = "Cut";
				value = 0;
			};
			class Default
			{
				data = "Empty";
				enable = 0;
				text = "Empty";
			};
			class Delete
			{
				conditionEnable = "selected";
				data = "DeleteItems";
				shortcuts[] = {211};
				text = "Delete";
				value = 0;
			};
			class Detach
			{
				conditionShow = "hoverObject 	* hoverObjectAttached";
				data = "Detach";
				enable = 0;
				text = "Detach";
				value = 0;
			};
			class Edit
			{
				items[] = {"Cut", "Copy", "Paste", "PasteOrig", "Delete"};
				text = "Edit";
				value = 0;
			};
			class FindConfig
			{
				action = "['findconfig'] call bis_fnc_3DENEntityMenu;";
				conditionShow = "hoverObject 	+ hoverWaypoint 	+ hoverLogic 	+ hoverMarker";
				data = "FindConfig";
				opensNewWindow = 1;
				picture = "\a3\3DEN\Data\Displays\Display3DEN\EntityMenu\findConfig_ca.paa";
				text = "Find in Config Viewer";
				value = 0;
			};
			class FindCreate
			{
				action = "['findcreate'] spawn bis_fnc_3DENEntityMenu;";
				conditionShow = "hoverObject 	+ hoverWaypoint 	+ hoverLogic 	+ hoverMarker";
				data = "FindCreate";
				opensNewWindow = 1;
				picture = "\a3\3DEN\Data\Displays\Display3DEN\EntityMenu\findCreate_ca.paa";
				text = "Find in Asset Browser";
				value = 0;
			};
			class Garage
			{
				action = "['garage'] call bis_fnc_3DENEntityMenu;";
				conditionShow = "hoverObjectVehicle";
				data = "Garage";
				opensNewWindow = 1;
				picture = "\a3\3DEN\Data\Displays\Display3DEN\EntityMenu\garage_ca.paa";
				text = "Edit Vehicle Appearance";
				value = 0;
			};
			class GarageReset
			{
				action = "['garageReset'] call bis_fnc_3DENEntityMenu;";
				conditionShow = "hoverObjectVehicle";
				data = "GarageReset";
				text = "Reset Vehicle Appearance";
				value = 0;
			};
			class Grid
			{
				conditionShow = "hoverObject";
				items[] = {"GridTranslationX", "GridTranslationY", "GridTranslationZ"};
				text = "Grid";
				value = 0;
			};
			class GridCenter
			{
				data = "GridCenter";
				enable = 0;
				text = "Move Grid Reference Point Here";
				value = 0;
			};
			class GridTranslationX
			{
				action = "['Grid','translation',0] spawn bis_fnc_3DENEntityMenu;";
				conditionShow = "hoverObject";
				data = "GridTranslationX";
				picture = "\a3\3DEN\Data\Displays\Display3DEN\EntityMenu\gridTranslationX_ca.paa";
				text = "Use X (Width) as Grid";
				value = 0;
			};
			class GridTranslationY
			{
				action = "['Grid','translation',1] spawn bis_fnc_3DENEntityMenu;";
				conditionShow = "hoverObject";
				data = "GridTranslationY";
				picture = "\a3\3DEN\Data\Displays\Display3DEN\EntityMenu\gridTranslationY_ca.paa";
				text = "Use Y (Length) as Grid";
				value = 0;
			};
			class GridTranslationZ
			{
				action = "['Grid','translation',2] spawn bis_fnc_3DENEntityMenu;";
				conditionShow = "hoverObject";
				data = "GridTranslationZ";
				picture = "\a3\3DEN\Data\Displays\Display3DEN\EntityMenu\gridTranslationZ_ca.paa";
				text = "Use Z (Height) as Grid";
				value = 0;
			};
			class Log
			{
				items[] = {"LogPosition", "LogClasses"};
				text = "Log";
				value = 0;
			};
			class LogClasses
			{
				action = "['logClasses'] call bis_fnc_3DENEntityMenu;";
				conditionShow = "selectedObject 	+ selectedWaypoint 	+ selectedLogic 	+ selectedMarker";
				data = "LogClasses";
				text = "Log Classes to Clipboard";
				value = 0;
			};
			class LogPosition
			{
				action = "['logPosition'] call bis_fnc_3DENEntityMenu;";
				data = "LogPosition";
				text = "Log Position to Clipboard";
				value = 0;
			};
			class MoveCamera
			{
				action = "['movecamera'] call bis_fnc_3DENEntityMenu;";
				picture = "\a3\3DEN\Data\Displays\Display3DEN\EntityMenu\moveCamera_ca.paa";
				text = "Go Here";
				value = 0;
			};
			class MoveFlying
			{
				conditionShow = "hoverObjectCanFly 	* (1 - (hoverObjectFlying))";
				data = "SetFlyingHeight";
				picture = "\a3\3DEN\Data\Displays\Display3DEN\EntityMenu\moveFlying_ca.paa";
				text = "Move to Flight Altitude";
				value = 0;
			};
			class MoveSurface
			{
				conditionShow = "hoverObject 	+ hoverTrigger 	+ hoverWaypoint 	+ hoverLogic";
				data = "SnapToSurface";
				picture = "\a3\3DEN\Data\Displays\Display3DEN\EntityMenu\moveSurface_ca.paa";
				text = "Snap to Surface";
				value = 0;
			};
			class MoveToFormation
			{
				conditionShow = "hoverObjectBrain 	+ hoverGroup";
				data = "ForceToFormation";
				picture = "\a3\3DEN\Data\Displays\Display3DEN\EntityMenu\moveToFormation_ca.paa";
				text = "Move to Formation";
				value = 0;
			};
			class Paste
			{
				data = "PasteItems";
				shortcuts[] = {"512 + 0x2F"};
				text = "Paste";
				value = 0;
			};
			class PasteAttributes
			{
				conditionEnable = "selected";
				data = "PasteAttributes";
				enable = 0;
				text = "Paste Attributes";
				value = 0;
			};
			class PasteOrig
			{
				data = "PasteUnitOrig";
				shortcuts[] = {"512 + 	1024 + 0x2F"};
				text = "Paste on Original Position";
				value = 0;
			};
			class PlayAsEntity
			{
				action = "['PlayAsEntity'] call bis_fnc_3DENEntityMenu;";
				conditionShow = "hoverObjectBrain 	* (1 - (isMultiplayer)) 	* (1 - (HoverObjectUav))";
				data = "PlayAsEntity";
				picture = "\a3\3DEN\Data\Displays\Display3DEN\EntityMenu\playFromHere_ca.paa";
				text = "Play as the Character";
				value = 0;
			};
			class PlayFromHere
			{
				action = "['PlayFromHere'] call bis_fnc_3DENEntityMenu;";
				conditionShow = "(1 - (hoverObjectBrain)) 	* (1 - (isMultiplayer))";
				data = "PlayFromHere";
				picture = "\a3\3DEN\Data\Displays\Display3DEN\EntityMenu\playFromHere_ca.paa";
				text = "Play from Here";
				value = 0;
			};
			class Select
			{
				items[] = {"SelectView", "SelectLayerChildren", "SelectLayerAllDescendants", "SeparatorSelected", "SelectMatchingClassSelected", "SelectMatchingClassView", "SeparatorSelected", "SelectMatchingTypeSelected", "SelectMatchingTypeView"};
				text = "Select";
				value = 0;
			};
			class SelectLayerAllDescendants
			{
				conditionShow = "hoverLayer";
				data = "SelectLayerAllDescendants";
				text = "Select All Descendants";
				value = 0;
			};
			class SelectLayerChildren
			{
				conditionShow = "hoverLayer";
				data = "SelectLayerChildren";
				text = "Select Immediate Children";
				value = 0;
			};
			class SelectLeader
			{
				conditionShow = "hoverObjectBrain";
				data = "SelectLeader";
				picture = "\a3\3DEN\Data\Displays\Display3DEN\EntityMenu\selectLeader_ca.paa";
				text = "Set as Group Leader";
				value = 0;
			};
			class SelectMatchingClassSelected
			{
				conditionShow = "selected";
				data = "SelectMatchingClassSelected";
				text = "Select Matching Classes (Selected)";
				value = 0;
			};
			class SelectMatchingClassView
			{
				conditionShow = "selected";
				data = "SelectMatchingClassView";
				text = "Select Matching Classes (View)";
				value = 0;
			};
			class SelectMatchingTypeSelected
			{
				conditionShow = "selected";
				data = "SelectMatchingTypeSelected";
				text = "Select Matching Types (Selected)";
				value = 0;
			};
			class SelectMatchingTypeView
			{
				conditionShow = "selected";
				data = "SelectMatchingTypeView";
				text = "Select Matching Types (View)";
				value = 0;
			};
			class SelectView
			{
				conditionShow = "(1 - (isEditList))";
				data = "SelectAllOnScreen";
				shortcuts[] = {"512 + 0x1E"};
				text = "Select All in View";
				value = 0;
			};
			class Separator
			{
				value = 0;
			};
			class SeparatorArsenal
			{
				conditionShow = "(hoverObjectBrain 	* (1 - (hoverObjectVehicle))) 	+ (hoverObjectVehicle 	* IsInternal)";
				value = 0;
			};
			class SeparatorEntity
			{
				conditionShow = "hoverObject 	+ hoverGroup 	+ hoverTrigger 	+ hoverWaypoint 	+ hoverLogic 	+ hoverMarker";
				value = 0;
			};
			class SeparatorNotSelected
			{
				conditionShow = "(1 - (selected))";
				value = 0;
			};
			class SeparatorObject
			{
				conditionShow = "hoverObject";
				value = 0;
			};
			class SeparatorSelected
			{
				conditionShow = "selected";
				value = 0;
			};
			class SetASL
			{
				conditionShow = "hoverObject";
				data = "LevelOutObjects";
				picture = "\a3\3DEN\Data\Displays\Display3DEN\EntityMenu\setASL_ca.paa";
				text = "Orient to Sea Normal";
				value = 0;
			};
			class SetATL
			{
				conditionShow = "hoverObject";
				data = "LevelWithSurface";
				picture = "\a3\3DEN\Data\Displays\Display3DEN\EntityMenu\setATL_ca.paa";
				text = "Orient to Terrain Normal";
				value = 0;
			};
			class Transform
			{
				conditionShow = "hoverObject 	+ hoverGroup";
				items[] = {"SelectLeader", "MoveToFormation", "MoveFlying", "MoveSurface", "SetATL", "SetASL"};
				text = "Transform";
				value = 0;
			};
		};
	};
	class Controls
	{
		class ButtonExit: ctrlButtonPicture
		{
			colorBackground[] = {0.1, 0.1, 0.1, 1};
			h = "5 * (pixelH * pixelGrid * 	0.50)";
			idc = 2;
			offsetPressedX = 0;
			offsetPressedY = 0;
			onButtonClick = "do3DENAction '3DENExit';";
			text = "\a3\3DEN\Data\Displays\Display3DEN\search_end_ca.paa";
			w = "5 * (pixelW * pixelGrid * 	0.50)";
			x = "safezoneX + safezoneW - (	5 * (pixelW * pixelGrid * 	0.50))";
			y = "safezoneY";
		};
		class ButtonPlay: ctrlShortcutButton
		{
			animTextureDisabled = "\a3\3DEN\Data\Displays\Display3DEN\PanelRight\playDisabled_ca.paa";
			animTextureFocused = "\a3\3DEN\Data\Displays\Display3DEN\PanelRight\playOver_ca.paa";
			animTextureNormal = "\a3\3DEN\Data\Displays\Display3DEN\PanelRight\playNormal_ca.paa";
			animTextureOver = "\a3\3DEN\Data\Displays\Display3DEN\PanelRight\playOver_ca.paa";
			animTexturePressed = "\a3\3DEN\Data\Displays\Display3DEN\PanelRight\playNormal_ca.paa";
			color2[] = {0, 0, 0, 1};
			colorBackground[] = {1, 1, 1, 1};
			colorFocused[] = {0, 0, 0, 1};
			h = "10 * (pixelH * pixelGrid * 	0.50) + pixelH";
			idc = 1023;
			onButtonClick = "if !(is3DENMultiplayer) then {do3DENAction 'MissionPreview';} else {do3DENAction 'MissionPreviewMP';};";
			onLoad = "['ButtonPlay',_this select 0] call (uinamespace getvariable 'bis_fnc_3DENInterface');";
			shadow = 0;
			size = "2.88 * (1 / (getResolution select 3)) * pixelGrid * 0.5";
			w = "60 * (pixelW * pixelGrid * 	0.50)";
			x = "safezoneX + safezoneW - 	60 * (pixelW * pixelGrid * 	0.50)";
			y = "safezoneY + safezoneH - 	10 * (pixelH * pixelGrid * 	0.50)";
			class Attributes: Attributes
			{
				align = "right";
			};
			class TextPos: TextPos
			{
				right = "60 * (pixelW * pixelGrid * 	0.50) * 0.2";
				top = 0;
			};
		};
		class ControlsHint: ctrlListbox
		{
			colorBackground[] = {0.2, 0.2, 0.2, 0.5};
			colorDisabled[] = {1, 1, 1, 1};
			colorPictureDisabled[] = {1, 1, 1, 1};
			colorPictureRightDisabled[] = {1, 1, 1, 1};
			colorTextRight[] = {1, 1, 1, 0.5};
			font = "RobotoCondensedLight";
			h = "5 * (pixelH * pixelGrid * 	0.50) * 10";
			idc = 1044;
			rowHeight = "5 * (pixelH * pixelGrid * 	0.50)";
			shadow = 1;
			sizeEx = "3.96 * (1 / (getResolution select 3)) * pixelGrid * 0.5";
			w = "50 * (pixelW * pixelGrid * 	0.50)";
			x = "safezoneX + safezoneW - (	60 + 	50) * (pixelW * pixelGrid * 	0.50)";
			y = "safezoneY + safezoneH - 		4 * (pixelH * pixelGrid * 	0.50)";
		};
		class EditorPreviewGroup: ctrlControlsGroupNoScrollbars
		{
			h = "27 * (pixelH * pixelGrid * 	0.50)";
			idc = 98;
			w = "27 * 16/9 * (pixelW * pixelGrid * 	0.50)";
			x = "safezoneX + safezoneW - (	60 + 	27 * 16/9 + 1) * (pixelW * pixelGrid * 	0.50)";
			y = "safezoneY + (	5 + 	(	5 + 2)) * (pixelH * pixelGrid * 	0.50)";
			class Controls
			{
				class Background: ctrlStatic
				{
					colorBackground[] = {0.2, 0.2, 0.2, 0.87};
					h = 1;
					w = 1;
					x = 0;
					y = 0;
				};
				class EditorPreview: ctrlStaticPictureKeepAspect
				{
					h = "(	27 - 2) * (pixelH * pixelGrid * 	0.50)";
					idc = 99;
					text = "#(argb,8,8,3)color(1,0,1,1)";
					w = "(	27 - 2) * (pixelW * pixelGrid * 	0.50)";
					x = "(pixelW * pixelGrid * 	0.50)";
					y = "(pixelH * pixelGrid * 	0.50)";
				};
			};
		};
		class MenuStrip: ctrlMenuStrip
		{
			colorBackground[] = {0.1, 0.1, 0.1, 1};
			colorStripBackground[] = {0, 0, 0, 0};
			h = "5 * (pixelH * pixelGrid * 	0.50)";
			idc = 120;
			w = "safezoneW - 	5 * (pixelW * pixelGrid * 	0.50)";
			x = "safezoneX";
			y = "safezoneY";
			class Items
			{
				items[] = {"File", "Edit", "View", "Attributes", "Tools", "Options", "Preview", "Help"};
				class AnimationViewer
				{
					action = "[] call (uinamespace getvariable 'bis_fnc_animviewer');";
					data = "AnimationViewer";
					opensNewWindow = 1;
					text = "Animations Viewer";
				};
				class Attributes
				{
					items[] = {"AttributesScenario", "AttributesEnvironment", "AttributesMultiplayer", "AttributesGarbageCollection", "Separator"};
					text = "Attributes";
				};
				class AttributesEnvironment
				{
					action = "edit3DENMissionAttributes 'Intel';";
					data = "AttributesEnvironment";
					opensNewWindow = 1;
					picture = "\a3\3DEN\Data\Displays\Display3DEN\ToolBar\intel_ca.paa";
					shortcuts[] = {"512 + 0x17"};
					text = "Environment";
				};
				class AttributesGarbageCollection
				{
					action = "edit3DENMissionAttributes 'GarbageCollection';";
					data = "AttributesGarbageCollection";
					opensNewWindow = 1;
					text = "Performance";
				};
				class AttributesMultiplayer
				{
					action = "edit3DENMissionAttributes 'Multiplayer';";
					data = "AttributesMultiplayer";
					opensNewWindow = 1;
					text = "Multiplayer";
				};
				class AttributesScenario
				{
					action = "edit3DENMissionAttributes 'Scenario';";
					data = "AttributesScenario";
					opensNewWindow = 1;
					text = "General";
				};
				class CommunityTools
				{
					data = "CommunityTools";
					enable = 1;
					items[] = {};
					text = "Community Tools";
				};
				class ConfigViewer
				{
					action = "[ctrlparent (_this select 0)] call (uinamespace getvariable 'bis_fnc_configviewer');";
					data = "ConfigViewer";
					opensNewWindow = 1;
					picture = "\a3\3DEN\Data\Displays\Display3DEN\EntityMenu\findConfig_ca.paa";
					text = "Config Viewer";
				};
				class DebugConsole
				{
					action = "(ctrlparent (_this select 0)) createdisplay 'RscDisplayDebugPublic';";
					data = "DebugConsole";
					enable = 1;
					opensNewWindow = 1;
					shortcuts[] = {41};
					text = "Debug Console";
				};
				class Default
				{
					enable = 0;
					text = "Empty";
				};
				class Edit
				{
					items[] = {"Undo", "Redo", "Separator", "EntitySelectScreen", "Separator", "Widget", "Grid", "Vertical", "SurfaceSnapToggle", "WaypointSnapToggle", "Separator", "Space", "Mode"};
					text = "Edit";
				};
				class EntityCopy
				{
					data = "CopyUnit";
					shortcuts[] = {"512 + 0x2E"};
					text = "Copy";
				};
				class EntityCut
				{
					data = "CutUnit";
					shortcuts[] = {"512 + 0x2D"};
					text = "Cut";
				};
				class EntityPaste
				{
					data = "PasteUnit";
					shortcuts[] = {"512 + 0x2F"};
					text = "Paste";
				};
				class EntityPasteOrig
				{
					data = "PasteUnitOrig";
					shortcuts[] = {"512 + 	1024 + 0x2F"};
					text = "Paste on Original Position";
				};
				class EntitySelectScreen
				{
					data = "SelectAllOnScreen";
					shortcuts[] = {"512 + 0x1E"};
					text = "Select All on Screen";
				};
				class EntitySimulation
				{
					data = "SimulateUnit";
					enable = 0;
					shortcuts[] = {"512 + 0x19"};
					xtext = "Preview Simulation";
				};
				class Exit
				{
					data = "Exit3DEN";
					text = "Exit";
				};
				class FieldManual
				{
					action = "(ctrlparent (_this select 0)) createdisplay 'RscDisplayFieldManual';";
					data = "FieldManual";
					opensNewWindow = 1;
					text = "Field Manual";
				};
				class File
				{
					data = "test1";
					items[] = {"MissionNew", "MissionOpen", "MissionSave", "MissionSaveAs", "Separator", "MissionPublishSteam", "MissionExport", "MissionMerge", "Separator", "MissionStats", "MissionAddons", "MissionFolder", "LogFolder", "Separator", "Exit"};
					text = "Scenario";
					value = 1;
				};
				class FunctionsViewer
				{
					action = "[ctrlparent (_this select 0)] call (uinamespace getvariable 'bis_fnc_help');";
					data = "FunctionsViewer";
					opensNewWindow = 1;
					picture = "\a3\3DEN\Data\Displays\Display3DEN\EntityMenu\functions_ca.paa";
					text = "Functions Viewer";
				};
				class Grid
				{
					items[] = {"GridTranslationToggle", "GridRotationToggle", "GridScalingToggle", "GridDecrease", "GridIncrease"};
					text = "Grid";
				};
				class GridDecrease
				{
					action = "['decrease'] call bis_fnc_3DENGrid;";
					data = "GridDecrease";
					shortcuts[] = {26};
					text = "Decrease Grid Size";
				};
				class GridIncrease
				{
					action = "['increase'] call bis_fnc_3DENGrid;";
					data = "GridIncrease";
					shortcuts[] = {27};
					text = "Increase Grid Size";
				};
				class GridRotationToggle
				{
					data = "RotateGridToggle";
					default = "false";
					text = "Toggle Rotation Grid";
					type = "CheckBox";
				};
				class GridScalingToggle
				{
					data = "ScaleGridToggle";
					default = "false";
					text = "Toggle Area Scaling Grid";
					type = "CheckBox";
				};
				class GridTranslationToggle
				{
					data = "MoveGridToggle";
					default = "false";
					shortcuts[] = {39};
					text = "Toggle Translation Grid";
					type = "CheckBox";
				};
				class Help
				{
					items[] = {"HelpDoc", "HelpScripting", "Separator", "HelpBiki", "HelpForums", "HelpFeedback", "HelpDevHub", "Separator", "HelpTutorials"};
					text = "Help";
				};
				class HelpBiki
				{
					data = "HelpBiki";
					opensNewWindow = 1;
					picture = "\a3\3DEN\Data\Controls\ctrlMenu\link_ca.paa";
					text = "Community Wiki";
					weblink = "https://community.bistudio.com/";
				};
				class HelpDevHub
				{
					data = "HelpDevHub";
					opensNewWindow = 1;
					picture = "\a3\3DEN\Data\Controls\ctrlMenu\link_ca.paa";
					text = "Dev Hub";
					weblink = "https://dev.arma3.com/";
				};
				class HelpDoc
				{
					data = "HelpDoc";
					opensNewWindow = 1;
					picture = "\a3\3DEN\Data\Controls\ctrlMenu\link_ca.paa";
					text = "Documentation";
					weblink = "https://community.bistudio.com/wiki/Eden_Editor";
				};
				class HelpFeedback
				{
					data = "HelpFeedback";
					opensNewWindow = 1;
					picture = "\a3\3DEN\Data\Controls\ctrlMenu\link_ca.paa";
					text = "Feedback Tracker";
					weblink = "https://feedback.arma3.com";
				};
				class HelpForums
				{
					data = "HelpForums";
					opensNewWindow = 1;
					picture = "\a3\3DEN\Data\Controls\ctrlMenu\link_ca.paa";
					text = "Forums";
					weblink = "https://forums.bistudio.com/forum/161-arma-3-editing/";
				};
				class HelpScripting
				{
					data = "HelpScripting";
					opensNewWindow = 1;
					picture = "\a3\3DEN\Data\Controls\ctrlMenu\link_ca.paa";
					text = "Scripting";
					weblink = "https://community.bistudio.com/wiki/Category:Scripting_Commands_Arma_3";
				};
				class HelpTutorials
				{
					action = "(ctrlparent (_this select 0)) createdisplay 'Display3DENTutorial';";
					data = "HelpTutorials";
					opensNewWindow = 1;
					picture = "\a3\3DEN\Data\Displays\Display3DEN\ToolBar\help_tutorial_ca.paa";
					text = "Tutorials";
				};
				class HelpUpdates
				{
					action = "(ctrlparent (_this select 0)) createdisplay 'Display3DENUpdates';";
					data = "HelpUpdates";
					opensNewWindow = 1;
					picture = "\a3\3DEN\Data\Displays\Display3DEN\ToolBar\help_updates_ca.paa";
					text = "Updates Log";
				};
				class Interface
				{
					data = "Interface";
					items[] = {"InterfaceToggle", "InterfacePanelLeft", "InterfacePanelRight", "InterfaceControlsHint", "InterfaceNavigationWidget"};
					text = "Interface";
				};
				class InterfaceControlsHint
				{
					action = "'toggle' call BIS_fnc_3DENControlsHint;";
					data = "InterfaceControlsHint";
					text = "Controls Hint";
				};
				class InterfaceNavigationWidget
				{
					action = "with uinamespace do {'navigationWidget' call BIS_fnc_3DENInterface;};";
					data = "InterfaceNavigationWidget";
					text = "Navigation Widget";
				};
				class InterfacePanelLeft
				{
					action = "with uinamespace do {'showPanelLeft' call BIS_fnc_3DENInterface;};";
					data = "InterfacePanelLeft";
					shortcuts[] = {18};
					text = "Entity List";
				};
				class InterfacePanelRight
				{
					action = "with uinamespace do {'showPanelRight' call BIS_fnc_3DENInterface;};";
					data = "InterfacePanelRight";
					shortcuts[] = {19};
					text = "Asset Browser";
				};
				class InterfaceToggle
				{
					action = "with uinamespace do {'showInterface' call BIS_fnc_3DENInterface;};";
					data = "InterfaceToggle";
					shortcuts[] = {14};
					text = "Toggle Interface";
				};
				class LogFolder
				{
					data = "FolderLog";
					text = "Open Log Folder";
				};
				class Map
				{
					data = "ToggleMap";
					default = "false";
					shortcuts[] = {50};
					text = "Toggle Map";
					type = "CheckBox";
				};
				class MapIDs
				{
					data = "MapIDs";
					enable = 0;
					text = "Toggle Map Object IDs";
				};
				class MapTextures
				{
					data = "ToggleMapTextures";
					default = "false";
					shortcuts[] = {"512 + 0x14"};
					text = "Toggle Map Textures";
					type = "CheckBox";
				};
				class MissionAddons
				{
					data = "OpenRequiredAddons";
					text = "Show Required Addons";
				};
				class MissionExport
				{
					items[] = {"MissionExportSP", "MissionExportMP", "MissionTerrainBuilder", "MissionExportSQF"};
					text = "Export";
				};
				class MissionExportMP
				{
					data = "MissionExportMP";
					text = "Export to Multiplayer";
				};
				class MissionExportSP
				{
					data = "MissionExportSP";
					text = "Export to Singleplayer";
				};
				class MissionExportSQF
				{
					action = "[] call bis_fnc_3DENExportSQF;";
					text = "Export to SQF";
				};
				class MissionFolder
				{
					data = "FolderMission";
					text = "Open Scenario Folder";
				};
				class MissionMerge
				{
					data = "MissionMerge";
					shortcuts[] = {"512 + 0x32"};
					text = "Merge";
				};
				class MissionNew
				{
					data = "MissionNew";
					opensNewWindow = 1;
					picture = "\a3\3DEN\Data\Displays\Display3DEN\ToolBar\new_ca.paa";
					shortcuts[] = {"512 + 0x31"};
					text = "New";
				};
				class MissionOpen
				{
					data = "MissionLoad";
					opensNewWindow = 1;
					picture = "\a3\3DEN\Data\Displays\Display3DEN\ToolBar\open_ca.paa";
					shortcuts[] = {"512 + 0x18"};
					text = "Open";
				};
				class MissionPreviewCamera
				{
					action = "{'MissionPreviewCustom' call bis_fnc_3DENMissionPreview;} call bis_fnc_3DENMissionPreview;";
					data = "MissionPreviewCamera";
					shortcuts[] = {"512 + 	1024 + 0x1C", "512 + 	1024 + 0x9C"};
					text = "Play in SP at Camera Position";
				};
				class MissionPreviewMP
				{
					data = "MissionPreviewMP";
					text = "Play in Multiplayer (MP)";
				};
				class MissionPreviewSP
				{
					data = "MissionPreview";
					shortcuts[] = {28, 156};
					text = "Play in Singleplayer (SP)";
				};
				class MissionPreviewSPBriefing
				{
					data = "MissionPreviewBriefing";
					shortcuts[] = {"1024 + 0x1C", "1024 + 0x9C"};
					text = "Play in SP with Briefing";
				};
				class MissionPreviewSpectator
				{
					action = "{'MissionPreviewSpectator' call bis_fnc_3DENMissionPreview;} call bis_fnc_3DENMissionPreview;";
					data = "MissionPreviewSpectator";
					text = "Spectate in SP";
				};
				class MissionPublishSteam
				{
					action = "do3DENAction 'OpenSteamPublishDialog';";
					data = "MissionPublishSteam";
					enable = 1;
					picture = "\a3\3DEN\Data\Displays\Display3DEN\ToolBar\steam_ca.paa";
					text = "Publish to Steam Workshop";
				};
				class MissionSave
				{
					data = "MissionSave";
					picture = "\a3\3DEN\Data\Displays\Display3DEN\ToolBar\save_ca.paa";
					shortcuts[] = {"512 + 0x1F"};
					text = "Save";
				};
				class MissionSaveAs
				{
					data = "MissionSaveAs";
					opensNewWindow = 1;
					picture = "\a3\3DEN\Data\Displays\Display3DEN\ToolBar\saveas_ca.paa";
					shortcuts[] = {"512 + 	1024 + 0x1F"};
					text = "Save As";
				};
				class MissionStats
				{
					action = "[] call bis_fnc_3DENMissionStats;";
					text = "Statistics";
				};
				class MissionTerrainBuilder
				{
					action = "[] spawn bis_fnc_3DENExportTerrainBuilder;";
					data = "MissionExportTerrainBuilder";
					text = "Export to Terrain Builder";
				};
				class Mode
				{
					items[] = {"ModeObject", "ModeGroup", "ModeTrigger", "ModeWaypoint", "ModeLogic", "ModeMarker", "ModeFavorite", "SubmodeToggle"};
					text = "Asset Type";
				};
				class ModeFavorite
				{
					data = "SelectFavoritesMode";
					enable = 0;
					shortcuts[] = {65};
					text = "Favorites";
				};
				class ModeGroup
				{
					data = "SelectGroupMode";
					shortcuts[] = {60};
					text = "Compositions";
				};
				class ModeLogic
				{
					data = "SelectModuleMode";
					shortcuts[] = {63};
					text = "Systems";
				};
				class ModeMarker
				{
					data = "SelectMarkerMode";
					shortcuts[] = {64};
					text = "Markers";
				};
				class ModeObject
				{
					data = "SelectObjectMode";
					shortcuts[] = {59};
					text = "Objects";
				};
				class ModeTrigger
				{
					data = "SelectTriggerMode";
					shortcuts[] = {61};
					text = "Triggers";
				};
				class ModeWaypoint
				{
					data = "SelectWaypointMode";
					shortcuts[] = {62};
					text = "Waypoints";
				};
				class Options
				{
					items[] = {"OptionsEditor", "Separator", "OptionsVideo", "OptionsAudio", "OptionsGame", "OptionsControls"};
					text = "Settings";
				};
				class OptionsAudio
				{
					data = "OptionsAudio";
					opensNewWindow = 1;
					text = "Audio Options";
				};
				class OptionsControls
				{
					data = "OptionsControls";
					opensNewWindow = 1;
					text = "Controls";
				};
				class OptionsEditor
				{
					action = "edit3DENMissionAttributes 'Preferences';";
					data = "Preferences";
					opensNewWindow = 1;
					shortcuts[] = {"512 + 0x25"};
					text = "Preferences";
				};
				class OptionsGame
				{
					data = "OptionsGame";
					opensNewWindow = 1;
					text = "Game Options";
				};
				class OptionsVideo
				{
					data = "OptionsVideo";
					opensNewWindow = 1;
					text = "Video Options";
				};
				class Preview
				{
					items[] = {"MissionPreviewSP", "MissionPreviewSPBriefing", "MissionPreviewCamera", "MissionPreviewSpectator", "Separator", "MissionPreviewMP"};
					text = "Play";
				};
				class Redo
				{
					data = "Redo";
					picture = "\a3\3DEN\Data\Displays\Display3DEN\ToolBar\redo_ca.paa";
					shortcuts[] = {"512 + 0x15", "512 + 	1024 + 0x2C"};
					text = "Redo";
				};
				class Search
				{
					data = "Search";
					items[] = {"SearchCreate", "SearchEdit"};
					text = "Search";
				};
				class SearchCreate
				{
					data = "SearchCreate";
					shortcuts[] = {"512 + 0x21"};
					text = "Search in Asset Browser";
				};
				class SearchEdit
				{
					data = "SearchEdit";
					shortcuts[] = {"512 + 	1024 + 0x21"};
					text = "Search in Entity List";
				};
				class Separator {};
				class Space
				{
					items[] = {"SpaceMission", "SpaceIntro", "SpaceOutroWin", "SpaceOutroLose"};
					text = "Phase";
				};
				class SpaceIntro
				{
					data = "MissionPartIntro";
					text = "Intro";
				};
				class SpaceMission
				{
					data = "MissionPartMission";
					text = "Scenario";
				};
				class SpaceOutroLose
				{
					data = "MissionPartOutroLoose";
					text = "Outro - Lose";
				};
				class SpaceOutroWin
				{
					data = "MissionPartOutroWin";
					text = "Outro - Win";
				};
				class SplendidCamera
				{
					action = "[] call (uinamespace getvariable 'bis_fnc_camera');";
					data = "SplendidCamera";
					opensNewWindow = 1;
					text = "Camera";
				};
				class SubmodeToggle
				{
					data = "SubmodeToggle";
					shortcuts[] = {15};
					text = "Toggle Asset Sub-type";
				};
				class SurfaceSnapToggle
				{
					data = "SurfaceSnapToggle";
					default = "true";
					shortcuts[] = {43};
					text = "Toggle Surface Snapping";
					type = "CheckBox";
				};
				class ToggleFlashlight
				{
					action = "[] call bis_fnc_3DENFlashlight;";
					data = "ToggleFlashlight";
					picture = "\a3\3DEN\Data\Displays\Display3DEN\ToolBar\flashlight_off_ca.paa";
					shortcuts[] = {38};
					text = "Toggle Flashlight";
				};
				class ToggleLocations
				{
					action = "[] call bis_fnc_3DENDrawLocations;";
					data = "ToggleLocations";
					text = "Toggle Location Labels (3D)";
				};
				class ToggleVegetation
				{
					data = "ToggleVegetation";
					default = "false";
					shortcuts[] = {"512 + 0x22"};
					text = "Toggle Foliage";
					type = "CheckBox";
				};
				class Tools
				{
					items[] = {"DebugConsole", "FunctionsViewer", "ConfigViewer", "AnimationViewer", "SplendidCamera", "FieldManual", "Separator"};
					text = "Tools";
				};
				class Undo
				{
					data = "Undo";
					picture = "\a3\3DEN\Data\Displays\Display3DEN\ToolBar\undo_ca.paa";
					shortcuts[] = {"512 + 0x2C"};
					text = "Undo";
				};
				class Vertical
				{
					items[] = {"VerticalToggle", "VerticalATL", "VerticalASL"};
					text = "Vertical Mode";
				};
				class VerticalASL
				{
					data = "VerticalASL";
					text = "Above Sea Level (ASL)";
				};
				class VerticalATL
				{
					data = "VerticalATL";
					text = "Above Terrain Level (ATL)";
				};
				class VerticalToggle
				{
					data = "VerticalToggle";
					shortcuts[] = {40};
					text = "Toggle Vertical Mode";
				};
				class View
				{
					items[] = {"ViewRandom", "ViewSelected", "ViewPlayer", "Separator", "Map", "MapTextures", "Separator", "VisionMode", "ToggleFlashlight", "ToggleLocations", "ToggleVegetation", "Separator", "Search", "Interface"};
					text = "View";
				};
				class ViewPlayer
				{
					data = "CenterCameraOnPlayer";
					shortcuts[] = {199};
					text = "Center on Player";
				};
				class ViewRandom
				{
					action = "'random' call bis_fnc_3DENCamera;";
					data = "CenterCameraOnRandom";
					shortcuts[] = {"512 + 0x13"};
					text = "Center on Random Position";
				};
				class ViewSelected
				{
					action = "'selected' call bis_fnc_3DENCamera;";
					data = "CenterCameraOnSelected";
					shortcuts[] = {33};
					text = "Center on Selected Entity";
				};
				class VisionMode
				{
					data = "ViewVisionMode";
					items[] = {"VisionModeToggle", "VisionModeNormal", "VisionModeNVG", "VisionModeTI"};
					text = "Vision Mode";
				};
				class VisionModeNormal
				{
					action = "0 call BIS_fnc_3DENVisionMode;";
					data = "VisionModeNormal";
					text = "Normal";
				};
				class VisionModeNVG
				{
					action = "1 call BIS_fnc_3DENVisionMode;";
					data = "VisionModeNVG";
					text = "Night Vision";
				};
				class VisionModeTI
				{
					action = "2 call BIS_fnc_3DENVisionMode;";
					data = "VisionModeTI";
					text = "Thermal Vision";
				};
				class VisionModeToggle
				{
					action = "-1 call BIS_fnc_3DENVisionMode;";
					data = "VisionModeToggle";
					picture = "\a3\3DEN\Data\Displays\Display3DEN\ToolBar\vision_normal_ca.paa";
					shortcuts[] = {49};
					text = "Toggle Vision Mode";
				};
				class WaypointSnapToggle
				{
					data = "WaypointSnapToggle";
					default = "true";
					shortcuts[] = {53};
					text = "Toggle Waypoint Snapping";
					type = "CheckBox";
				};
				class Widget
				{
					items[] = {"WidgetToggle", "WidgetNone", "WidgetTranslation", "WidgetRotation", "WidgetScaling", "WidgetArea"};
					text = "Transformation Widget";
				};
				class WidgetArea
				{
					data = "WidgetArea";
					picture = "\a3\3DEN\Data\Displays\Display3DEN\ToolBar\widget_area_off_ca.paa";
					shortcuts[] = {6};
					text = "Area Widget";
				};
				class WidgetNone
				{
					data = "WidgetNone";
					picture = "\a3\3DEN\Data\Displays\Display3DEN\ToolBar\widget_none_off_ca.paa";
					shortcuts[] = {2};
					text = "No Widget";
				};
				class WidgetPosition
				{
					data = "WidgetPosition";
					enable = 0;
					shortcuts[] = {34};
					xtext = "Toggle Position";
				};
				class WidgetPositionEntity
				{
					data = "WidgetPositionEntity";
					enable = 0;
					xtext = "Selected Entity";
				};
				class WidgetPositionMean
				{
					data = "WidgetPositionMean";
					enable = 0;
					xtext = "Mean Position";
				};
				class WidgetRotation
				{
					data = "WidgetRotation";
					picture = "\a3\3DEN\Data\Displays\Display3DEN\ToolBar\widget_rotation_off_ca.paa";
					shortcuts[] = {4};
					text = "Rotation Widget";
				};
				class WidgetScaling
				{
					data = "WidgetScale";
					picture = "\a3\3DEN\Data\Displays\Display3DEN\ToolBar\widget_scaling_off_ca.paa";
					shortcuts[] = {5};
					text = "Area Scaling Widget";
				};
				class WidgetSpace
				{
					data = "WidgetSpace";
					enable = 0;
					shortcuts[] = {34};
					text = "Toggle Widget Coordinate Space";
				};
				class WidgetSpaceLocal
				{
					data = "WidgetSpaceLocal";
					enable = 0;
					text = "Selected Entity";
				};
				class WidgetSpaceWorld
				{
					data = "WidgetSpaceWorld";
					enable = 0;
					text = "World";
				};
				class WidgetToggle
				{
					data = "WidgetToggle";
					shortcuts[] = {57};
					text = "Toggle Widget";
				};
				class WidgetTranslation
				{
					data = "WidgetTranslation";
					picture = "\a3\3DEN\Data\Displays\Display3DEN\ToolBar\widget_translation_off_ca.paa";
					shortcuts[] = {3};
					text = "Translation Widget";
				};
			};
		};
		class MissionName: ctrlStatic
		{
			colorBackground[] = {0.1, 0.1, 0.1, 1};
			h = "5 * (pixelH * pixelGrid * 	0.50)";
			idc = 76;
			onLoad = "(_this select 0) ctrlenable false;";
			style = 1;
			w = "safezoneW - (	5 * (pixelW * pixelGrid * 	0.50))";
			x = "safezoneX";
			y = "safezoneY";
		};
		class Notification: ctrlStructuredText
		{
			colorBackground[] = {1, 0, 1, 1};
			h = 0;
			idc = 10312;
			shadow = 0;
			w = "safezoneW - 2 * 	60 * (pixelW * pixelGrid * 	0.50)";
			x = "safezoneX + 	60 * (pixelW * pixelGrid * 	0.50)";
			y = "safezoneY + (		5 + 	(	5 + 2)) * (pixelH * pixelGrid * 	0.50)";
			class Attributes: Attributes
			{
				align = "center";
			};
		};
		class PanelLeft: ctrlControlsGroupNoScrollbars
		{
			h = "safezoneH - (		5 + 	(	5 + 2) + 		4) * (pixelH * pixelGrid * 	0.50)";
			idc = 1019;
			w = "60 * (pixelW * pixelGrid * 	0.50)";
			x = "safezoneX";
			y = "safezoneY + (		5 + 	(	5 + 2)) * (pixelH * pixelGrid * 	0.50)";
			class Controls
			{
				class PanelLeftBackground: ctrlStatic
				{
					colorBackground[] = {0.2, 0.2, 0.2, 0.87};
					h = "safezoneH - (		5 + 	(	5 + 2) + 	(	5 + 1) + 		4) * (pixelH * pixelGrid * 	0.50)";
					idc = 1020;
					w = "60 * (pixelW * pixelGrid * 	0.50)";
					x = 0;
					y = "(	5 + 1) * (pixelH * pixelGrid * 	0.50)";
				};
				class PanelLeftEdit: ctrlControlsGroupNoScrollbars
				{
					h = "safezoneH - (		5 + 	(	5 + 2) + 	(	5 + 1) + 		4) * (pixelH * pixelGrid * 	0.50)";
					idc = 1037;
					w = "60 * (pixelW * pixelGrid * 	0.50)";
					x = 0;
					y = "(	5 + 1) * (pixelH * pixelGrid * 	0.50)";
					class Controls
					{
						class CollapseAllButton: ctrlButtonCollapseAll
						{
							h = "5 * (pixelH * pixelGrid * 	0.50)";
							idc = -1;
							onButtonClick = "['collapseEntityList'] call bis_fnc_3DENInterface;";
							w = "5 * (pixelW * pixelGrid * 	0.50)";
							x = "(	60 - 2 * 	5) * (pixelW * pixelGrid * 	0.50)";
							y = "(pixelH * pixelGrid * 	0.50)";
						};
						class Edit: ctrlTree
						{
							colorBorder[] = {0, 0, 0, 0};
							colorDisabled[] = {1, 1, 1, 0.25};
							disableKeyboardSearch = 1;
							expandOnDoubleclick = 0;
							font = "RobotoCondensedLight";
							h = "safezoneH - (		5 + 	(	5 + 2) + 	(	5 + 1) + 		4 + 	5 + 2 + 1 + 	5) * (pixelH * pixelGrid * 	0.50)";
							idc = 55;
							multiselectEnabled = 1;
							sizeEx = "3.96 * (1 / (getResolution select 3)) * pixelGrid * 0.5";
							w = "60 * (pixelW * pixelGrid * 	0.50)";
							x = 0;
							y = "(	5 + 2) * (pixelH * pixelGrid * 	0.50)";
						};
						class EditPanel: ctrlControlsGroupNoScrollbars
						{
							h = "(	5 + 2) * (pixelH * pixelGrid * 	0.50)";
							w = "60 * (pixelW * pixelGrid * 	0.50)";
							y = "safezoneH - (		5 + 	(	5 + 2) + 	(	5 + 1) + 		4 + 	5 + 2) * (pixelH * pixelGrid * 	0.50)";
							class Controls
							{
								class Delete: ctrlButtonToolbar
								{
									h = "5 * (pixelH * pixelGrid * 	0.50)";
									idc = 85;
									text = "\a3\3DEN\Data\Displays\Display3DEN\PanelLeft\entityList_delete_ca.paa";
									tooltip = "Delete";
									w = "5 * (pixelW * pixelGrid * 	0.50)";
									x = "1 * (pixelW * pixelGrid * 	0.50)";
									y = "(pixelH * pixelGrid * 	0.50)";
								};
								class EditLayer: Delete
								{
									idc = 84;
									text = "\a3\3DEN\Data\Displays\Display3DEN\PanelLeft\entityList_layer_ca.paa";
									tooltip = "New Layer";
									x = "(	60 - 4 * 	5 - 5) * (pixelW * pixelGrid * 	0.50)";
								};
								class EditPanelBackground: ctrlStatic
								{
									colorBackground[] = {0.2, 0.2, 0.2, 1};
									h = "(	5 + 2) * (pixelH * pixelGrid * 	0.50)";
									w = "60 * (pixelW * pixelGrid * 	0.50)";
								};
								class EnableLayer: Delete
								{
									idc = 1065;
									onButtonClick = "'EnableLayer' call bis_fnc_3DENInterface;";
									text = "\a3\3DEN\Data\Displays\Display3DEN\PanelLeft\entityList_layerEnable_ca.paa";
									tooltip = "Toggle Layer Transformation";
									x = "(	60 - 2 * 	5 - 2) * (pixelW * pixelGrid * 	0.50)";
								};
								class RemoveLayer: Delete
								{
									idc = 86;
									text = "\a3\3DEN\Data\Displays\Display3DEN\PanelLeft\entityList_layerRemove_ca.paa";
									tooltip = "Move to Root";
									x = "(	60 - 3 * 	5 - 4) * (pixelW * pixelGrid * 	0.50)";
								};
								class ShowLayer: Delete
								{
									idc = 1064;
									onButtonClick = "'ShowLayer' call bis_fnc_3DENInterface;";
									text = "\a3\3DEN\Data\Displays\Display3DEN\PanelLeft\entityList_layerShow_ca.paa";
									tooltip = "Toggle Layer Visibility";
									x = "(	60 - 1 * 	5 - 1) * (pixelW * pixelGrid * 	0.50)";
								};
							};
						};
						class ExpandAllButton: ctrlButtonExpandAll
						{
							h = "5 * (pixelH * pixelGrid * 	0.50)";
							idc = -1;
							onButtonClick = "['expandEntityList'] call bis_fnc_3DENInterface;";
							w = "5 * (pixelW * pixelGrid * 	0.50)";
							x = "(	60 - 1 * 	5) * (pixelW * pixelGrid * 	0.50)";
							y = "(pixelH * pixelGrid * 	0.50)";
						};
						class PanelLeftEditBackground: ctrlStatic
						{
							colorBackground[] = {0.2, 0.2, 0.2, 1};
							h = "(	5 + 2) * (pixelH * pixelGrid * 	0.50)";
							w = "60 * (pixelW * pixelGrid * 	0.50)";
						};
						class SearchEdit: ctrlEdit
						{
							h = "5 * (pixelH * pixelGrid * 	0.50)";
							idc = 80;
							w = "(	60 - 3 * 	5 - 1) * (pixelW * pixelGrid * 	0.50)";
							x = "1 * (pixelW * pixelGrid * 	0.50)";
							y = "(pixelH * pixelGrid * 	0.50)";
						};
						class SearchEditButton: ctrlButtonSearch
						{
							h = "5 * (pixelH * pixelGrid * 	0.50)";
							idc = 81;
							onLoad = "['showShortcut','SearchEdit',_this] call bis_fnc_3DENInterface;";
							tooltip = "Search in the entity list.\nUse '#' followed by entity type to search for all entities of the given type (e.g., 'Waypoint'). Supported types:\n#Object\n#Group\n#Trigger\n#Waypoint\n#Logic\n#Marker\n#Comment";
							w = "5 * (pixelW * pixelGrid * 	0.50)";
							x = "(	60 - 3 * 	5) * (pixelW * pixelGrid * 	0.50)";
							y = "(pixelH * pixelGrid * 	0.50)";
						};
					};
				};
				class PanelLeftLocations: ctrlControlsGroupNoScrollbars
				{
					h = "safezoneH - (		5 + 	(	5 + 2) + 	(	5 + 1) + 		4) * (pixelH * pixelGrid * 	0.50)";
					idc = 1038;
					show = 0;
					w = "60 * (pixelW * pixelGrid * 	0.50)";
					x = 0;
					y = "(	5 + 1) * (pixelH * pixelGrid * 	0.50)";
					class Controls
					{
						class Locations: ctrlTree
						{
							colorBorder[] = {0, 0, 0, 0};
							disableKeyboardSearch = 1;
							expandOnDoubleclick = 0;
							font = "RobotoCondensedLight";
							h = "safezoneH - (		5 + 	(	5 + 2) + 	(	5 + 1) + 		4 + 	5 + 2 + 1 + 	5) * (pixelH * pixelGrid * 	0.50)";
							idc = 75;
							idcSearch = 1042;
							onTreeDblClick = "['select',_this] call bis_fnc_3DENListLocations;";
							sizeEx = "3.96 * (1 / (getResolution select 3)) * pixelGrid * 0.5";
							w = "60 * (pixelW * pixelGrid * 	0.50)";
							x = 0;
							y = "(	5 + 2) * (pixelH * pixelGrid * 	0.50)";
						};
						class PanelLeftLocationsBackground: ctrlStatic
						{
							colorBackground[] = {0.2, 0.2, 0.2, 1};
							h = "(	5 + 2) * (pixelH * pixelGrid * 	0.50)";
							w = "60 * (pixelW * pixelGrid * 	0.50)";
						};
						class SearchLocations: ctrlEdit
						{
							h = "5 * (pixelH * pixelGrid * 	0.50)";
							idc = 1042;
							text = "";
							w = "(	60 - 	5 - 2) * (pixelW * pixelGrid * 	0.50)";
							x = "1 * (pixelW * pixelGrid * 	0.50)";
							y = "(pixelH * pixelGrid * 	0.50)";
						};
						class SearchLocationsButton: ctrlButton
						{
							h = "5 * (pixelH * pixelGrid * 	0.50)";
							idc = 1043;
							style = "0x02 + 0x30 + 0x800";
							text = "\a3\3DEN\Data\Displays\Display3DEN\search_start_ca.paa";
							textSearch = "\a3\3DEN\Data\Displays\Display3DEN\search_end_ca.paa";
							w = "5 * (pixelW * pixelGrid * 	0.50)";
							x = "(	60 - 	5 - 1) * (pixelW * pixelGrid * 	0.50)";
							y = "(pixelH * pixelGrid * 	0.50)";
						};
					};
				};
				class TabLeftBackground: ctrlStatic
				{
					colorBackground[] = {0.1, 0.1, 0.1, 1};
					h = "(	5 + 1) * (pixelH * pixelGrid * 	0.50)";
					w = "60 * (pixelW * pixelGrid * 	0.50)";
					x = 0;
					y = 0;
				};
				class TabLeftSections: ctrlToolbox
				{
					colorBackground[] = {0, 0, 0, 0};
					colorSelectedBg[] = {0.2, 0.2, 0.2, 1};
					columns = 2;
					font = "RobotoCondensedLight";
					h = "5 * (pixelH * pixelGrid * 	0.50)";
					idc = 1033;
					onToolBoxSelChanged = "['tabLeft',_this select 1] call bis_fnc_3DENInterface;";
					strings[] = {"Entities", "Locations"};
					values[] = {1037, 1038};
					w = "(	60 - 	(	5 + 1) - 1) * (pixelW * pixelGrid * 	0.50)";
					x = "(	5 + 1) * (pixelW * pixelGrid * 	0.50)";
					y = "(pixelH * pixelGrid * 	0.50)";
				};
				class TabLeftToggle: ctrlButton
				{
					colorBackground[] = {0.1, 0.1, 0.1, 1};
					h = "(	5 + 1) * (pixelH * pixelGrid * 	0.50)";
					idc = 1032;
					onbuttonclick = "'ShowPanelLeft' call bis_fnc_3DENInterface";
					sizeEx = "5.58 * (1 / (getResolution select 3)) * pixelGrid * 0.5";
					style = 2;
					text = "«";
					w = "(	5 + 1) * (pixelW * pixelGrid * 	0.50)";
					x = 0;
					y = 0;
				};
			};
		};
		class PanelRight: ctrlControlsGroupNoScrollbars
		{
			h = "safezoneH - (		5 + 	(	5 + 2) + 	10) * (pixelH * pixelGrid * 	0.50)";
			idc = 1021;
			w = "60 * (pixelW * pixelGrid * 	0.50)";
			x = "safezoneX + safezoneW - 	60 * (pixelW * pixelGrid * 	0.50)";
			y = "safezoneY + (	5 + 	(	5 + 2)) * (pixelH * pixelGrid * 	0.50)";
			class Controls
			{
				class PanelRightBackground: ctrlStatic
				{
					colorBackground[] = {0.2, 0.2, 0.2, 0.87};
					h = "safezoneH - (		5 + 	(	5 + 2) + 	10 + 	(	5 + 1)) * (pixelH * pixelGrid * 	0.50)";
					idc = 1022;
					w = "60 * (pixelW * pixelGrid * 	0.50)";
					x = 0;
					y = "(	5 + 1) * (pixelH * pixelGrid * 	0.50)";
				};
				class PanelRightCreate: ctrlControlsGroupNoScrollbars
				{
					h = "safezoneH - (		5 + 	(	5 + 2) + 	10 + 	(	5 + 1)) * (pixelH * pixelGrid * 	0.50)";
					idc = 1039;
					w = "60 * (pixelW * pixelGrid * 	0.50)";
					x = 0;
					y = "(	5 + 1) * (pixelH * pixelGrid * 	0.50)";
					class Controls
					{
						class Create: ctrlControlsGroupNoScrollbars
						{
							h = "safezoneH - (	(		5 + 	(	5 + 2) + 	(	5 + 1) + 	10) + 14 + 	5) * (pixelH * pixelGrid * 	0.50)";
							idc = 1049;
							w = "60 * (pixelW * pixelGrid * 	0.50)";
							x = 0;
							y = "19 * (pixelH * pixelGrid * 	0.50)";
							class Controls
							{
								class CollapseAllButton: ctrlButtonCollapseAll
								{
									h = "5 * (pixelH * pixelGrid * 	0.50)";
									idc = -1;
									onButtonClick = "['collapseAssetBrowser'] call bis_fnc_3DENInterface;";
									w = "5 * (pixelW * pixelGrid * 	0.50)";
									x = "(	60 - 2 * 	5) * (pixelW * pixelGrid * 	0.50)";
									y = "1 * (pixelH * pixelGrid * 	0.50)";
								};
								class CreateGroupCIV: CreateObjectEMPTY
								{
									defaultItem[] = {};
									idc = 64;
								};
								class CreateGroupCUSTOM: CreateObjectWEST
								{
									defaultItem[] = {};
									idc = 71;
								};
								class CreateGroupEAST: CreateObjectEMPTY
								{
									defaultItem[] = {"OPF_F", "Infantry"};
									idc = 62;
								};
								class CreateGroupEMPTY: CreateObjectEMPTY
								{
									defaultItem[] = {};
									idc = 65;
								};
								class CreateGroupGUER: CreateObjectEMPTY
								{
									defaultItem[] = {"IND_F", "Infantry"};
									idc = 63;
								};
								class CreateGroupWEST: CreateObjectEMPTY
								{
									defaultItem[] = {"BLU_F", "Infantry"};
									idc = 61;
								};
								class CreateMarkerArea: CreateObjectEMPTY
								{
									defaultItem[] = {};
									idc = 70;
								};
								class CreateMarkerIcon: CreateObjectEMPTY
								{
									defaultItem[] = {"Military"};
									idc = 69;
								};
								class CreateObjectCIV: CreateObjectWEST
								{
									defaultItem[] = {"CIV_F", "EdSubcat_Personnel"};
									idc = 59;
								};
								class CreateObjectEAST: CreateObjectWEST
								{
									defaultItem[] = {"OPF_F", "EdSubcat_Personnel"};
									idc = 57;
								};
								class CreateObjectEMPTY: CreateObjectWEST
								{
									defaultItem[] = {"Default"};
									h = "safezoneH - (	(		5 + 	(	5 + 2) + 	(	5 + 1) + 	10) + 21 + 	5) * (pixelH * pixelGrid * 	0.50)";
									idc = 60;
								};
								class CreateObjectGUER: CreateObjectWEST
								{
									defaultItem[] = {"IND_F", "EdSubcat_Personnel"};
									idc = 58;
								};
								class CreateObjectLogic: CreateObjectEMPTY
								{
									defaultItem[] = {"Objects"};
									idc = 66;
								};
								class CreateObjectModule: CreateObjectEMPTY
								{
									defaultItem[] = {};
									idc = 67;
								};
								class CreateObjectWEST: ctrlTree
								{
									colorBackground[] = {0, 0, 0, 0};
									colorBorder[] = {0, 0, 0, 0};
									defaultItem[] = {"BLU_F", "EdSubcat_Personnel"};
									disableKeyboardSearch = 1;
									font = "RobotoCondensedLight";
									h = "safezoneH - (	(		5 + 	(	5 + 2) + 	(	5 + 1) + 	10) + 21 + 	5 + (	5 + 2)) * (pixelH * pixelGrid * 	0.50)";
									idc = 56;
									multiselectEnabled = 0;
									onMouseButtonDown = "['mousebuttondown',_this] call bis_fnc_3DENControlsHint;";
									onMouseButtonUp = "['mousebuttonup',_this] call bis_fnc_3DENControlsHint;";
									ontreeSelChanged = "['place',_this] call bis_fnc_3DENControlsHint;";
									sizeEx = "3.96 * (1 / (getResolution select 3)) * pixelGrid * 0.5";
									w = "60 * (pixelW * pixelGrid * 	0.50)";
									y = "(	5 + 2) * (pixelH * pixelGrid * 	0.50)";
								};
								class CreateTrigger: CreateObjectEMPTY
								{
									defaultItem[] = {};
									idc = 68;
									show = 0;
								};
								class CreateWaypoint: CreateObjectEMPTY
								{
									defaultItem[] = {};
									idc = 6.9e+006;
								};
								class CustomCompositionPanel: ctrlControlsGroupNoScrollbars
								{
									h = "(	5 + 2) * (pixelH * pixelGrid * 	0.50)";
									idc = 1061;
									show = 0;
									w = "60 * (pixelW * pixelGrid * 	0.50)";
									y = "safezoneH - (	(		5 + 	(	5 + 2) + 	(	5 + 1) + 	10) + 14 + 	5 + (	5 + 2)) * (pixelH * pixelGrid * 	0.50)";
									class Controls
									{
										class Add: ctrlButtonToolbar
										{
											h = "5 * (pixelH * pixelGrid * 	0.50)";
											idc = 90;
											onButtonClick = "do3denaction 'createcustomcomposition';";
											text = "\a3\3DEN\Data\Displays\Display3DEN\PanelRight\customcomposition_add_ca.paa";
											tooltip = "Save new custom composition from currently selected entities.";
											w = "5 * (pixelW * pixelGrid * 	0.50)";
											x = "1 * (pixelW * pixelGrid * 	0.50)";
											y = "(pixelH * pixelGrid * 	0.50)";
										};
										class Background: ctrlStatic
										{
											colorBackground[] = {0.2, 0.2, 0.2, 1};
											h = "(	5 + 2) * (pixelH * pixelGrid * 	0.50)";
											w = "60 * (pixelW * pixelGrid * 	0.50)";
										};
										class Delete: Add
										{
											idc = 92;
											onButtonClick = "do3denaction 'deletecustomcomposition';";
											text = "\a3\3DEN\Data\Displays\Display3DEN\PanelLeft\entityList_delete_ca.paa";
											tooltip = "Delete composition selected in the browser.";
											x = "(	60 - 	5 - 1) * (pixelW * pixelGrid * 	0.50)";
										};
										class Edit: Add
										{
											idc = 91;
											onButtonClick = "do3denaction 'editcustomcomposition';";
											text = "\a3\3DEN\Data\Displays\Display3DEN\PanelRight\customcomposition_edit_ca.paa";
											tooltip = "Edit composition selected in the browser.";
											x = "(1 * 	5 + 2) * (pixelW * pixelGrid * 	0.50)";
										};
										class Publish: Add
										{
											idc = 93;
											onLoad = "(_this select 0) ctrlenable false;";
											text = "\a3\3DEN\Data\Displays\Display3DEN\ToolBar\steam_ca.paa";
											tooltip = "Publish the currently selected custom composition to the Steam Workshop.";
											x = "(2 * 	5 + 3) * (pixelW * pixelGrid * 	0.50)";
										};
									};
								};
								class ExpandAllButton: ctrlButtonExpandAll
								{
									h = "5 * (pixelH * pixelGrid * 	0.50)";
									idc = -1;
									onButtonClick = "['expandAssetBrowser'] call bis_fnc_3DENInterface;";
									w = "5 * (pixelW * pixelGrid * 	0.50)";
									x = "(	60 - 1 * 	5) * (pixelW * pixelGrid * 	0.50)";
									y = "1 * (pixelH * pixelGrid * 	0.50)";
								};
								class ModsButton: ctrlCombo
								{
									h = "5 * (pixelH * pixelGrid * 	0.50)";
									idc = 4242;
									onLBSelChanged = "				_ctrlMods = _this select 0;				(ctrlparent _ctrlMods displayctrl 82) ctrlsettext format ['mod %1',_ctrlMods lbdata (_this select 1)];			";
									onLoad = "				_ctrlMods = _this select 0;				_mods = [];				{_mods pushBackUnique (configsourcemod _x)} foreach configProperties [configfile >> 'CfgPatches'];				{					_params = if (_x == '') then {[]} else {modParams [_x,['name','logoSmall']]};					if (count _params > 0) then {						_lbAdd = _ctrlMods lbadd (_params select 0);						_ctrlMods lbsetdata [_lbAdd,_x];						_ctrlMods lbsetpictureright [_lbAdd,(_params select 1)];						_ctrlMods lbsettooltip [_lbAdd,(_params select 0) + '\n' + _x];					};				} foreach _mods;				lbsort _ctrlMods;			";
									tooltip = "Filter by mods";
									w = "5 * (pixelW * pixelGrid * 	0.50)";
									x = "(pixelW * pixelGrid * 	0.50)";
									y = "(pixelH * pixelGrid * 	0.50)";
								};
								class SearchCreate: ctrlEdit
								{
									h = "5 * (pixelH * pixelGrid * 	0.50)";
									idc = 82;
									w = "(	60 - 4 * 	5 - 1) * (pixelW * pixelGrid * 	0.50)";
									x = "(1 + 	5) * (pixelW * pixelGrid * 	0.50)";
									y = "1 * (pixelH * pixelGrid * 	0.50)";
								};
								class SearchCreateButton: ctrlButtonSearch
								{
									h = "5 * (pixelH * pixelGrid * 	0.50)";
									idc = 83;
									onLoad = "['showShortcut','SearchCreate',_this] call bis_fnc_3DENInterface;";
									tooltip = "Search in the asset browser.\nUse 'class ' prefix to search by class name (e.g., 'class B_Soldier').";
									w = "5 * (pixelW * pixelGrid * 	0.50)";
									x = "(	60 - 3 * 	5) * (pixelW * pixelGrid * 	0.50)";
									y = "1 * (pixelH * pixelGrid * 	0.50)";
								};
								class VehiclePanel: ctrlControlsGroupNoScrollbars
								{
									h = "(	5 + 2) * (pixelH * pixelGrid * 	0.50)";
									idc = 1062;
									show = 0;
									w = "60 * (pixelW * pixelGrid * 	0.50)";
									y = "safezoneH - (	(		5 + 	(	5 + 2) + 	(	5 + 1) + 	10) + 14 + 	5 + (	5 + 2)) * (pixelH * pixelGrid * 	0.50)";
									class Controls
									{
										class Background: ctrlStatic
										{
											colorBackground[] = {0.2, 0.2, 0.2, 1};
											h = "(	5 + 2) * (pixelH * pixelGrid * 	0.50)";
											w = "60 * (pixelW * pixelGrid * 	0.50)";
										};
										class TextEmpty: ctrlStatic
										{
											h = "5 * (pixelH * pixelGrid * 	0.50)";
											shadow = 0;
											text = "Place vehicles with crew";
											w = "(	60 - (	5 + 1)) * (pixelW * pixelGrid * 	0.50)";
											x = "(	5 + 1) * (pixelW * pixelGrid * 	0.50)";
											y = "(pixelH * pixelGrid * 	0.50)";
										};
										class ToggleEmpty: ctrlCheckbox
										{
											h = "5 * (pixelH * pixelGrid * 	0.50)";
											idc = 1063;
											onCheckedChanged = "do3DENAction 'TogglePlaceEmptyVehicle';";
											w = "5 * (pixelW * pixelGrid * 	0.50)";
											x = "1 * (pixelW * pixelGrid * 	0.50)";
											y = "(pixelH * pixelGrid * 	0.50)";
										};
									};
								};
							};
						};
						class ModeLabels: ctrlToolbox
						{
							colorBackground[] = {0, 0, 0, 0};
							colorSelectedBg[] = {0, 0, 0, 0};
							colorText[] = {1, 1, 1, 0.25};
							colorTextSelect[] = {1, 1, 1, 1};
							columns = 6;
							h = "3 * (pixelH * pixelGrid * 	0.50)";
							idc = 1060;
							onLoad = "(_this select 0) ctrlenable false;";
							rows = 1;
							sizeEx = "3.96 * (1 / (getResolution select 3)) * pixelGrid * 0.5";
							strings[] = {"F1", "F2", "F3", "F4", "F5", "F6"};
							w = "60 * (pixelW * pixelGrid * 	0.50)";
							x = 0;
							y = "2 * pixelH";
						};
						class Modes: ctrlToolboxPictureKeepAspect
						{
							colorBackground[] = {0, 0, 0, 0};
							colorSelectedBg[] = {0, 0, 0, 0};
							colorText[] = {1, 1, 1, 0.25};
							colorTextSelect[] = {1, 1, 1, 1};
							columns = 6;
							h = "7 * (pixelH * pixelGrid * 	0.50)";
							idc = 53;
							rows = 1;
							strings[] = {"\a3\3DEN\Data\Displays\Display3DEN\PanelRight\modeObjects_ca.paa", "\a3\3DEN\Data\Displays\Display3DEN\PanelRight\modeGroups_ca.paa", "\a3\3DEN\Data\Displays\Display3DEN\PanelRight\modeTriggers_ca.paa", "\a3\3DEN\Data\Displays\Display3DEN\PanelRight\modeWaypoints_ca.paa", "\a3\3DEN\Data\Displays\Display3DEN\PanelRight\modeModules_ca.paa", "\a3\3DEN\Data\Displays\Display3DEN\PanelRight\modeMarkers_ca.paa"};
							tooltips[] = {"Objects", "Compositions", "Triggers", "Waypoints", "Systems", "Markers"};
							values[] = {0, 1, 2, 3, 4, 5, 6};
							w = "60 * (pixelW * pixelGrid * 	0.50)";
							x = 0;
							y = "3 * (pixelH * pixelGrid * 	0.50)";
						};
						class PanelRightCreateBackground: ctrlStatic
						{
							colorBackground[] = {0.2, 0.2, 0.2, 1};
							h = "26 * (pixelH * pixelGrid * 	0.50)";
							w = "60 * (pixelW * pixelGrid * 	0.50)";
						};
						class Sides: Modes
						{
							columns = 5;
							h = "10 * (pixelH * pixelGrid * 	0.50)";
							idc = 54;
							strings[] = {};
							values[] = {};
							w = "60 * (pixelW * pixelGrid * 	0.50)";
							y = "10 * (pixelH * pixelGrid * 	0.50)";
						};
					};
				};
				class PanelRightHistory: ctrlControlsGroupNoScrollbars
				{
					h = "safezoneH - (		5 + 	(	5 + 2) + 	10 + 	(	5 + 1)) * (pixelH * pixelGrid * 	0.50)";
					idc = 1040;
					show = 0;
					w = "60 * (pixelW * pixelGrid * 	0.50)";
					x = 0;
					y = "(	5 + 1) * (pixelH * pixelGrid * 	0.50)";
					class Controls
					{
						class History: ctrlListbox
						{
							colorBackground[] = {0, 0, 0, 0};
							h = "safezoneH - (		5 + 	(	5 + 2) + 	10 + 	(	5 + 1) + 1) * (pixelH * pixelGrid * 	0.50)";
							idc = 74;
							rowHeight = "3.96 * (1 / (getResolution select 3)) * pixelGrid * 0.5";
							sizeEx = "3.96 * (1 / (getResolution select 3)) * pixelGrid * 0.5";
							w = "60 * (pixelW * pixelGrid * 	0.50)";
							x = 0;
							y = "1 * (pixelH * pixelGrid * 	0.50)";
						};
						class PanelRightHistoryBackground: ctrlStatic
						{
							colorBackground[] = {0.2, 0.2, 0.2, 1};
							h = "1 * (pixelH * pixelGrid * 	0.50)";
							w = "60 * (pixelW * pixelGrid * 	0.50)";
						};
					};
				};
				class TabRightBackground: ctrlStatic
				{
					colorBackground[] = {0.1, 0.1, 0.1, 1};
					h = "(	5 + 1) * (pixelH * pixelGrid * 	0.50)";
					w = "60 * (pixelW * pixelGrid * 	0.50)";
					x = 0;
					y = 0;
				};
				class TabRightSections: ctrlToolbox
				{
					colorBackground[] = {0, 0, 0, 0};
					colorSelectedBg[] = {0.2, 0.2, 0.2, 1};
					columns = 2;
					font = "RobotoCondensedLight";
					h = "5 * (pixelH * pixelGrid * 	0.50)";
					idc = 1036;
					onToolBoxSelChanged = "['tabRight',_this select 1] call bis_fnc_3DENInterface;";
					strings[] = {"Assets", "History"};
					values[] = {1039, 1040};
					w = "(	60 - 	(	5 + 1) - 1) * (pixelW * pixelGrid * 	0.50)";
					x = "(pixelW * pixelGrid * 	0.50)";
					y = "(pixelH * pixelGrid * 	0.50)";
				};
				class TabRightToggle: ctrlButton
				{
					colorBackground[] = {0, 0, 0, 0};
					h = "(	5 + 1) * (pixelH * pixelGrid * 	0.50)";
					idc = 1034;
					onbuttonclick = "'ShowPanelRight' call bis_fnc_3DENInterface";
					sizeEx = "5.58 * (1 / (getResolution select 3)) * pixelGrid * 0.5";
					style = 2;
					text = "»";
					w = "(	5 + 1) * (pixelW * pixelGrid * 	0.50)";
					x = "(	60 - 	(	5 + 1)) * (pixelW * pixelGrid * 	0.50)";
					y = 0;
				};
			};
		};
		class StatusBar: ctrlControlsGroupNoScrollbars
		{
			h = "(		4 + 1) * (pixelH * pixelGrid * 	0.50)";
			idc = 1050;
			w = "(safezoneW - 	60 * (pixelW * pixelGrid * 	0.50))";
			x = "safezoneX";
			y = "safezoneY + safezoneH - 		4 * (pixelH * pixelGrid * 	0.50)";
			class Controls
			{
				class Mod: ctrlStaticPicture
				{
					h = "4 * (pixelH * pixelGrid * 	0.50)";
					idc = 1058;
					text = "\a3\3DEN\Data\Displays\Display3DEN\StatusBar\mod_ca.paa";
					w = "4 * (pixelW * pixelGrid * 	0.50)";
					x = "(safezoneW - 	60 * (pixelW * pixelGrid * 	0.50)) - 2 * 		4 * (pixelW * pixelGrid * 	0.50)";
				};
				class Server: ctrlStaticPicture
				{
					h = "4 * (pixelH * pixelGrid * 	0.50)";
					idc = 1059;
					text = "\a3\3DEN\Data\Displays\Display3DEN\StatusBar\server_ca.paa";
					w = "4 * (pixelW * pixelGrid * 	0.50)";
					x = "(safezoneW - 	60 * (pixelW * pixelGrid * 	0.50)) - 		4 * (pixelW * pixelGrid * 	0.50)";
				};
				class StatusBarBackground: ctrlStatic
				{
					colorBackground[] = {0.2, 0.2, 0.2, 1};
					h = "(		4 + 1) * (pixelH * pixelGrid * 	0.50)";
					idc = 1051;
					w = "(safezoneW - 	60 * (pixelW * pixelGrid * 	0.50))";
					x = 0;
					y = 0;
				};
				class TextDis: TextX
				{
					colorBackground[] = {0, 0, 0, 0};
					text = "\a3\3DEN\Data\Displays\Display3DEN\StatusBar\dis_ca.paa";
					x = "3 * (	3 + 	16 + 	4) * (pixelW * pixelGrid * 	0.50)";
				};
				class TextX: ctrlStaticPicture
				{
					colorBackground[] = {0, 0, 0, 0};
					h = "3 * (pixelH * pixelGrid * 	0.50)";
					shadow = 0;
					sizeEx = "2.88 * (1 / (getResolution select 3)) * pixelGrid * 0.5";
					text = "\a3\3DEN\Data\Displays\Display3DEN\StatusBar\x_ca.paa";
					w = "3 * (pixelW * pixelGrid * 	0.50)";
					y = "(2 * pixelH)";
				};
				class TextY: TextX
				{
					colorBackground[] = {0, 0, 0, 0};
					text = "\a3\3DEN\Data\Displays\Display3DEN\StatusBar\y_ca.paa";
					x = "(	3 + 	16 + 	4) * (pixelW * pixelGrid * 	0.50)";
				};
				class TextZ: TextX
				{
					colorBackground[] = {0, 0, 0, 0};
					text = "\a3\3DEN\Data\Displays\Display3DEN\StatusBar\z_ca.paa";
					x = "2 * (	3 + 	16 + 	4) * (pixelW * pixelGrid * 	0.50)";
				};
				class ValueDis: ValueX
				{
					idc = 1055;
					w = "30 * (pixelW * pixelGrid * 	0.50)";
					x = "(3 * (	3 + 	16 + 	4) + 	3) * (pixelW * pixelGrid * 	0.50)";
				};
				class ValueX: ctrlEdit
				{
					colorDisabled[] = {1, 1, 1, 0.5};
					font = "EtelkaMonospacePro";
					h = "4 * (pixelH * pixelGrid * 	0.50) - 2 * (2 * pixelH)";
					idc = 1052;
					onLoad = "(_this select 0) ctrlenable false;";
					shadow = 0;
					sizeEx = "2.945 * (1 / (getResolution select 3)) * pixelGrid * 0.5";
					style = "0x01 + 0x200";
					w = "16 * (pixelW * pixelGrid * 	0.50)";
					x = "3 * (pixelW * pixelGrid * 	0.50)";
					y = "(2 * pixelH)";
				};
				class ValueY: ValueX
				{
					idc = 1053;
					x = "((	3 + 	16 + 	4) + 	3) * (pixelW * pixelGrid * 	0.50)";
				};
				class ValueZ: ValueX
				{
					idc = 1054;
					x = "(2 * (	3 + 	16 + 	4) + 	3) * (pixelW * pixelGrid * 	0.50)";
				};
				class Version: ValueX
				{
					canModify = 0;
					idc = 1057;
					onLoad = "";
					w = "20 * (pixelW * pixelGrid * 	0.50)";
					x = "(safezoneW - 	60 * (pixelW * pixelGrid * 	0.50)) - (2 * 		4 + 21) * (pixelW * pixelGrid * 	0.50)";
				};
			};
		};
		class TabLeftToggle: ctrlButton
		{
			colorBackground[] = {0.1, 0.1, 0.1, 1};
			h = "(	5 + 1) * (pixelH * pixelGrid * 	0.50)";
			idc = 1031;
			onbuttonclick = "'ShowPanelLeft' call bis_fnc_3DENInterface;";
			sizeEx = "5.58 * (1 / (getResolution select 3)) * pixelGrid * 0.5";
			style = 2;
			text = "»";
			w = "(	5 + 1) * (pixelW * pixelGrid * 	0.50)";
			x = "safezoneX + 0";
			y = "safezoneY + (		5 + 	(	5 + 2)) * (pixelH * pixelGrid * 	0.50)";
		};
		class TabRightToggle: TabLeftToggle
		{
			idc = 1034;
			onbuttonclick = "'ShowPanelRight' call bis_fnc_3DENInterface";
			text = "«";
			x = "safezoneX + safezoneW - 	(	5 + 1) * (pixelW * pixelGrid * 	0.50)";
		};
		class Toolbar: ctrlControlsGroupNoScrollbars
		{
			h = "(	5 + 2) * (pixelH * pixelGrid * 	0.50)";
			idc = 1000;
			w = "safezoneW";
			x = "safezoneX";
			y = "safezoneY + 		5 * (pixelH * pixelGrid * 	0.50)";
			class Controls
			{
				class File: ctrlControlsGroupNoScrollbars
				{
					h = "(	5 * (pixelH * pixelGrid * 	0.50))";
					idc = 1002;
					w = "4 * 	(	5 * (pixelW * pixelGrid * 	0.50))";
					x = 0;
					y = "1 * (pixelH * pixelGrid * 	0.50)";
					class Controls
					{
						class New: ctrlButtonToolbar
						{
							action = "do3DENAction 'MissionNew';";
							h = "(	5 * (pixelH * pixelGrid * 	0.50))";
							idc = 1006;
							onLoad = "['showShortcut','MissionNew',_this] call bis_fnc_3DENInterface;";
							text = "\a3\3DEN\Data\Displays\Display3DEN\ToolBar\new_ca.paa";
							tooltip = "New";
							w = "(	5 * (pixelW * pixelGrid * 	0.50))";
							x = "0 * 	(	5 * (pixelW * pixelGrid * 	0.50))";
							y = 0;
						};
						class Open: ctrlButtonToolbar
						{
							action = "do3DENAction 'MissionLoad';";
							h = "(	5 * (pixelH * pixelGrid * 	0.50))";
							idc = 1007;
							onLoad = "['showShortcut','MissionLoad',_this] call bis_fnc_3DENInterface;";
							text = "\a3\3DEN\Data\Displays\Display3DEN\ToolBar\open_ca.paa";
							tooltip = "Open";
							w = "(	5 * (pixelW * pixelGrid * 	0.50))";
							x = "1 * 	(	5 * (pixelW * pixelGrid * 	0.50))";
							y = 0;
						};
						class Publish: ctrlButtonToolbar
						{
							action = "do3DENAction 'OpenSteamPublishDialog';";
							h = "(	5 * (pixelH * pixelGrid * 	0.50))";
							idc = 10091;
							onLoad = "['showShortcut','MissionPublishSteam',_this] call bis_fnc_3DENInterface;";
							text = "\a3\3DEN\Data\Displays\Display3DEN\ToolBar\steam_ca.paa";
							tooltip = "Publish to Steam Workshop";
							w = "(	5 * (pixelW * pixelGrid * 	0.50))";
							x = "3 * 	(	5 * (pixelW * pixelGrid * 	0.50))";
							y = 0;
						};
						class Save: ctrlButtonToolbar
						{
							action = "do3DENAction 'MissionSave';";
							h = "(	5 * (pixelH * pixelGrid * 	0.50))";
							idc = 1008;
							onLoad = "['showShortcut','MissionSave',_this] call bis_fnc_3DENInterface;";
							text = "\a3\3DEN\Data\Displays\Display3DEN\ToolBar\save_ca.paa";
							tooltip = "Save";
							w = "(	5 * (pixelW * pixelGrid * 	0.50))";
							x = "2 * 	(	5 * (pixelW * pixelGrid * 	0.50))";
							y = 0;
						};
					};
				};
				class Grid: ctrlControlsGroupNoScrollbars
				{
					h = "(	5 * (pixelH * pixelGrid * 	0.50))";
					idc = 1024;
					w = "4.5 * 	(	5 * (pixelW * pixelGrid * 	0.50))";
					x = "18 * 	(	5 * (pixelW * pixelGrid * 	0.50))";
					y = "1 * (pixelH * pixelGrid * 	0.50)";
					class Controls
					{
						class Rotation: Translation
						{
							h = "(	5 * (pixelH * pixelGrid * 	0.50))";
							idc = 1027;
							onCheckedChanged = "do3DENAction 'RotateGridToggle';";
							onLoad = "['showShortcut','RotateGridToggle',_this] call bis_fnc_3DENInterface;";
							textureChecked = "\a3\3DEN\Data\Displays\Display3DEN\ToolBar\grid_rotation_on_ca.paa";
							textureDisabledChecked = "\a3\3DEN\Data\Displays\Display3DEN\ToolBar\grid_rotation_on_ca.paa";
							textureDisabledUnchecked = "\a3\3DEN\Data\Displays\Display3DEN\ToolBar\grid_rotation_off_ca.paa";
							textureFocusedChecked = "\a3\3DEN\Data\Displays\Display3DEN\ToolBar\grid_rotation_on_ca.paa";
							textureFocusedUnchecked = "\a3\3DEN\Data\Displays\Display3DEN\ToolBar\grid_rotation_off_ca.paa";
							textureHoverChecked = "\a3\3DEN\Data\Displays\Display3DEN\ToolBar\grid_rotation_on_ca.paa";
							textureHoverUnchecked = "\a3\3DEN\Data\Displays\Display3DEN\ToolBar\grid_rotation_off_ca.paa";
							texturePressedChecked = "\a3\3DEN\Data\Displays\Display3DEN\ToolBar\grid_rotation_on_ca.paa";
							texturePressedUnchecked = "\a3\3DEN\Data\Displays\Display3DEN\ToolBar\grid_rotation_off_ca.paa";
							textureUnchecked = "\a3\3DEN\Data\Displays\Display3DEN\ToolBar\grid_rotation_off_ca.paa";
							tooltip = "Toggle Rotation Grid";
							w = "(	5 * (pixelW * pixelGrid * 	0.50))";
							x = "1.5 * 	(	5 * (pixelW * pixelGrid * 	0.50))";
							y = 0;
						};
						class RotationValue: TranslationValue
						{
							gridType = "rotation";
							h = "(	5 * (pixelH * pixelGrid * 	0.50))";
							idc = 1028;
							tooltip = "Toggle Rotation Grid";
							w = "(	5 * (pixelW * pixelGrid * 	0.50)) * 0.5";
							x = "2.5 * 	(	5 * (pixelW * pixelGrid * 	0.50))";
							y = 0;
						};
						class Scaling: Translation
						{
							h = "(	5 * (pixelH * pixelGrid * 	0.50))";
							idc = 1029;
							onCheckedChanged = "do3DENAction 'ScaleGridToggle';";
							onLoad = "['showShortcut','ScaleGridToggle',_this] call bis_fnc_3DENInterface;";
							textureChecked = "\a3\3DEN\Data\Displays\Display3DEN\ToolBar\grid_scaling_on_ca.paa";
							textureDisabledChecked = "\a3\3DEN\Data\Displays\Display3DEN\ToolBar\grid_scaling_on_ca.paa";
							textureDisabledUnchecked = "\a3\3DEN\Data\Displays\Display3DEN\ToolBar\grid_scaling_off_ca.paa";
							textureFocusedChecked = "\a3\3DEN\Data\Displays\Display3DEN\ToolBar\grid_scaling_on_ca.paa";
							textureFocusedUnchecked = "\a3\3DEN\Data\Displays\Display3DEN\ToolBar\grid_scaling_off_ca.paa";
							textureHoverChecked = "\a3\3DEN\Data\Displays\Display3DEN\ToolBar\grid_scaling_on_ca.paa";
							textureHoverUnchecked = "\a3\3DEN\Data\Displays\Display3DEN\ToolBar\grid_scaling_off_ca.paa";
							texturePressedChecked = "\a3\3DEN\Data\Displays\Display3DEN\ToolBar\grid_scaling_on_ca.paa";
							texturePressedUnchecked = "\a3\3DEN\Data\Displays\Display3DEN\ToolBar\grid_scaling_off_ca.paa";
							textureUnchecked = "\a3\3DEN\Data\Displays\Display3DEN\ToolBar\grid_scaling_off_ca.paa";
							tooltip = "Toggle Area Scaling Grid";
							w = "(	5 * (pixelW * pixelGrid * 	0.50))";
							x = "3 * 	(	5 * (pixelW * pixelGrid * 	0.50))";
							y = 0;
						};
						class ScalingValue: TranslationValue
						{
							gridType = "scaling";
							h = "(	5 * (pixelH * pixelGrid * 	0.50))";
							idc = 1030;
							tooltip = "Toggle Area Scaling Grid";
							w = "(	5 * (pixelW * pixelGrid * 	0.50)) * 0.5";
							x = "4 * 	(	5 * (pixelW * pixelGrid * 	0.50))";
							y = 0;
						};
						class Translation: ctrlCheckboxToolbar
						{
							h = "(	5 * (pixelH * pixelGrid * 	0.50))";
							idc = 1025;
							onCheckedChanged = "do3DENAction 'MoveGridToggle';";
							onLoad = "['showShortcut','MoveGridToggle',_this] call bis_fnc_3DENInterface;";
							textureChecked = "\a3\3DEN\Data\Displays\Display3DEN\ToolBar\grid_translation_on_ca.paa";
							textureDisabledChecked = "\a3\3DEN\Data\Displays\Display3DEN\ToolBar\grid_translation_on_ca.paa";
							textureDisabledUnchecked = "\a3\3DEN\Data\Displays\Display3DEN\ToolBar\grid_translation_off_ca.paa";
							textureFocusedChecked = "\a3\3DEN\Data\Displays\Display3DEN\ToolBar\grid_translation_on_ca.paa";
							textureFocusedUnchecked = "\a3\3DEN\Data\Displays\Display3DEN\ToolBar\grid_translation_off_ca.paa";
							textureHoverChecked = "\a3\3DEN\Data\Displays\Display3DEN\ToolBar\grid_translation_on_ca.paa";
							textureHoverUnchecked = "\a3\3DEN\Data\Displays\Display3DEN\ToolBar\grid_translation_off_ca.paa";
							texturePressedChecked = "\a3\3DEN\Data\Displays\Display3DEN\ToolBar\grid_translation_on_ca.paa";
							texturePressedUnchecked = "\a3\3DEN\Data\Displays\Display3DEN\ToolBar\grid_translation_off_ca.paa";
							textureUnchecked = "\a3\3DEN\Data\Displays\Display3DEN\ToolBar\grid_translation_off_ca.paa";
							tooltip = "Toggle Translation Grid";
							w = "(	5 * (pixelW * pixelGrid * 	0.50))";
							x = "0 * 	(	5 * (pixelW * pixelGrid * 	0.50))";
							y = 0;
						};
						class TranslationValue: ctrlComboToolbar
						{
							gridType = "translation";
							h = "(	5 * (pixelH * pixelGrid * 	0.50))";
							idc = 1026;
							onLoad = "with uinamespace do {['init',_this] call bis_fnc_3DENGrid;};";
							tooltip = "Toggle Translation Grid";
							w = "(	5 * (pixelW * pixelGrid * 	0.50)) * 0.5";
							x = "1 * 	(	5 * (pixelW * pixelGrid * 	0.50))";
							y = 0;
						};
					};
				};
				class Help: ctrlControlsGroupNoScrollbars
				{
					h = "(	5 * (pixelH * pixelGrid * 	0.50))";
					idc = 10251;
					w = "1 * 	(	5 * (pixelW * pixelGrid * 	0.50))";
					x = "safezoneW - 1 * 	(	5 * (pixelW * pixelGrid * 	0.50)) - (pixelW * pixelGrid * 	0.50)";
					y = "1 * (pixelH * pixelGrid * 	0.50)";
					class Controls
					{
						class Tutorial: ctrlButtonToolbar
						{
							h = "(	5 * (pixelH * pixelGrid * 	0.50))";
							idc = 10310;
							onButtonClick = "(ctrlparent (_this select 0)) createdisplay 'Display3DENTutorial';";
							onLoad = "				_count = 0;				{					_count = _count + count configproperties [_x >> 'Sections','isclass _x'];				} foreach configproperties [configfile >> 'Cfg3DEN' >> 'Tutorials'];				if (_count > count (profilenamespace getvariable ['display3DENTutorial_completed',[]])) then {					(_this select 0) ctrlsettext '\a3\3DEN\Data\Displays\Display3DEN\ToolBar\help_tutorial_new_ca.paa';				};			";
							text = "\a3\3DEN\Data\Displays\Display3DEN\ToolBar\help_tutorial_ca.paa";
							tooltip = "Tutorials";
							w = "(	5 * (pixelW * pixelGrid * 	0.50))";
							x = "0 * 	(	5 * (pixelW * pixelGrid * 	0.50))";
							y = 0;
						};
					};
				};
				class History: ctrlControlsGroupNoScrollbars
				{
					h = "(	5 * (pixelH * pixelGrid * 	0.50))";
					idc = 1003;
					w = "2 * 	(	5 * (pixelW * pixelGrid * 	0.50))";
					x = "5 * 	(	5 * (pixelW * pixelGrid * 	0.50))";
					y = "1 * (pixelH * pixelGrid * 	0.50)";
					class Controls
					{
						class Redo: ctrlButtonToolbar
						{
							action = "do3DENAction 'Redo';";
							h = "(	5 * (pixelH * pixelGrid * 	0.50))";
							idc = 1011;
							onLoad = "['showShortcut','Redo',_this] call bis_fnc_3DENInterface;";
							text = "\a3\3DEN\Data\Displays\Display3DEN\ToolBar\redo_ca.paa";
							tooltip = "Redo";
							w = "(	5 * (pixelW * pixelGrid * 	0.50))";
							x = "1 * 	(	5 * (pixelW * pixelGrid * 	0.50))";
							y = 0;
						};
						class Undo: ctrlButtonToolbar
						{
							action = "do3DENAction 'Undo';";
							h = "(	5 * (pixelH * pixelGrid * 	0.50))";
							idc = 1010;
							onLoad = "['showShortcut','Undo',_this] call bis_fnc_3DENInterface;";
							text = "\a3\3DEN\Data\Displays\Display3DEN\ToolBar\undo_ca.paa";
							tooltip = "Undo";
							w = "(	5 * (pixelW * pixelGrid * 	0.50))";
							x = "0 * 	(	5 * (pixelW * pixelGrid * 	0.50))";
							y = 0;
						};
					};
				};
				class Interaction: ctrlControlsGroupNoScrollbars
				{
					h = "(	5 * (pixelH * pixelGrid * 	0.50))";
					idc = 1005;
					w = "3 * 	(	5 * (pixelW * pixelGrid * 	0.50))";
					x = "14 * 	(	5 * (pixelW * pixelGrid * 	0.50))";
					y = "1 * (pixelH * pixelGrid * 	0.50)";
					class Controls
					{
						class SurfaceSnapToggle: ctrlCheckboxToolbar
						{
							h = "(	5 * (pixelH * pixelGrid * 	0.50))";
							idc = 1018;
							onCheckedChanged = "do3DENAction 'SurfaceSnapToggle';";
							onLoad = "['showShortcut','SurfaceSnapToggle',_this] call bis_fnc_3DENInterface;";
							textureChecked = "\a3\3DEN\Data\Displays\Display3DEN\ToolBar\snap_on_ca.paa";
							textureDisabledChecked = "\a3\3DEN\Data\Displays\Display3DEN\ToolBar\snap_on_ca.paa";
							textureDisabledUnchecked = "\a3\3DEN\Data\Displays\Display3DEN\ToolBar\snap_off_ca.paa";
							textureFocusedChecked = "\a3\3DEN\Data\Displays\Display3DEN\ToolBar\snap_on_ca.paa";
							textureFocusedUnchecked = "\a3\3DEN\Data\Displays\Display3DEN\ToolBar\snap_off_ca.paa";
							textureHoverChecked = "\a3\3DEN\Data\Displays\Display3DEN\ToolBar\snap_on_ca.paa";
							textureHoverUnchecked = "\a3\3DEN\Data\Displays\Display3DEN\ToolBar\snap_off_ca.paa";
							texturePressedChecked = "\a3\3DEN\Data\Displays\Display3DEN\ToolBar\snap_on_ca.paa";
							texturePressedUnchecked = "\a3\3DEN\Data\Displays\Display3DEN\ToolBar\snap_off_ca.paa";
							textureUnchecked = "\a3\3DEN\Data\Displays\Display3DEN\ToolBar\snap_off_ca.paa";
							tooltip = "Toggle Surface Snapping";
							w = "(	5 * (pixelW * pixelGrid * 	0.50))";
							x = "2 * 	(	5 * (pixelW * pixelGrid * 	0.50))";
							y = 0;
						};
						class VerticalToggle: ctrlCheckboxToolbar
						{
							h = "(	5 * (pixelH * pixelGrid * 	0.50))";
							idc = 1017;
							onCheckedChanged = "do3DENAction 'VerticalToggle';";
							onLoad = "['showShortcut','VerticalToggle',_this] call bis_fnc_3DENInterface;";
							textureChecked = "\a3\3DEN\Data\Displays\Display3DEN\ToolBar\vert_ATL_ca.paa";
							textureDisabledChecked = "\a3\3DEN\Data\Displays\Display3DEN\ToolBar\vert_ATL_ca.paa";
							textureDisabledUnchecked = "\a3\3DEN\Data\Displays\Display3DEN\ToolBar\vert_ASL_ca.paa";
							textureFocusedChecked = "\a3\3DEN\Data\Displays\Display3DEN\ToolBar\vert_ATL_ca.paa";
							textureFocusedUnchecked = "\a3\3DEN\Data\Displays\Display3DEN\ToolBar\vert_ASL_ca.paa";
							textureHoverChecked = "\a3\3DEN\Data\Displays\Display3DEN\ToolBar\vert_ATL_ca.paa";
							textureHoverUnchecked = "\a3\3DEN\Data\Displays\Display3DEN\ToolBar\vert_ASL_ca.paa";
							texturePressedChecked = "\a3\3DEN\Data\Displays\Display3DEN\ToolBar\vert_ATL_ca.paa";
							texturePressedUnchecked = "\a3\3DEN\Data\Displays\Display3DEN\ToolBar\vert_ASL_ca.paa";
							textureUnchecked = "\a3\3DEN\Data\Displays\Display3DEN\ToolBar\vert_ASL_ca.paa";
							tooltip = "Toggle Vertical Mode";
							w = "(	5 * (pixelW * pixelGrid * 	0.50))";
							x = "1 * 	(	5 * (pixelW * pixelGrid * 	0.50))";
							y = 0;
						};
						class WidgetCoord: ctrlCheckboxToolbar
						{
							h = "(	5 * (pixelH * pixelGrid * 	0.50))";
							idc = 1016;
							onCheckedChanged = "do3DENAction 'WidgetCoord';";
							onLoad = "['showShortcut','WidgetCoord',_this] call bis_fnc_3DENInterface;";
							textureChecked = "\a3\3DEN\Data\Displays\Display3DEN\ToolBar\widget_local_ca.paa";
							textureDisabledChecked = "\a3\3DEN\Data\Displays\Display3DEN\ToolBar\widget_local_ca.paa";
							textureDisabledUnchecked = "\a3\3DEN\Data\Displays\Display3DEN\ToolBar\widget_global_ca.paa";
							textureFocusedChecked = "\a3\3DEN\Data\Displays\Display3DEN\ToolBar\widget_local_ca.paa";
							textureFocusedUnchecked = "\a3\3DEN\Data\Displays\Display3DEN\ToolBar\widget_global_ca.paa";
							textureHoverChecked = "\a3\3DEN\Data\Displays\Display3DEN\ToolBar\widget_local_ca.paa";
							textureHoverUnchecked = "\a3\3DEN\Data\Displays\Display3DEN\ToolBar\widget_global_ca.paa";
							texturePressedChecked = "\a3\3DEN\Data\Displays\Display3DEN\ToolBar\widget_local_ca.paa";
							texturePressedUnchecked = "\a3\3DEN\Data\Displays\Display3DEN\ToolBar\widget_global_ca.paa";
							textureUnchecked = "\a3\3DEN\Data\Displays\Display3DEN\ToolBar\widget_global_ca.paa";
							tooltip = "Toggle Widget Coordinate Space";
							w = "(	5 * (pixelW * pixelGrid * 	0.50))";
							x = "0 * 	(	5 * (pixelW * pixelGrid * 	0.50))";
							y = 0;
						};
					};
				};
				class Mission: ctrlControlsGroupNoScrollbars
				{
					h = "(	5 * (pixelH * pixelGrid * 	0.50))";
					idc = 10301;
					w = "10 * 	(	5 * (pixelW * pixelGrid * 	0.50))";
					x = "23.5 * 	(	5 * (pixelW * pixelGrid * 	0.50))";
					y = "1 * (pixelH * pixelGrid * 	0.50)";
					class Controls
					{
						class Flashlight: ctrlCheckboxToolbar
						{
							h = "(	5 * (pixelH * pixelGrid * 	0.50))";
							idc = 10305;
							onCheckedChanged = "[] call bis_fnc_3DENFlashlight;";
							onLoad = "['showShortcut','ToggleFlashlight',_this] call bis_fnc_3DENInterface;";
							textureChecked = "\a3\3DEN\Data\Displays\Display3DEN\ToolBar\flashlight_on_ca.paa";
							textureDisabledChecked = "\a3\3DEN\Data\Displays\Display3DEN\ToolBar\flashlight_on_ca.paa";
							textureDisabledUnchecked = "\a3\3DEN\Data\Displays\Display3DEN\ToolBar\flashlight_off_ca.paa";
							textureFocusedChecked = "\a3\3DEN\Data\Displays\Display3DEN\ToolBar\flashlight_on_ca.paa";
							textureFocusedUnchecked = "\a3\3DEN\Data\Displays\Display3DEN\ToolBar\flashlight_off_ca.paa";
							textureHoverChecked = "\a3\3DEN\Data\Displays\Display3DEN\ToolBar\flashlight_on_ca.paa";
							textureHoverUnchecked = "\a3\3DEN\Data\Displays\Display3DEN\ToolBar\flashlight_off_ca.paa";
							texturePressedChecked = "\a3\3DEN\Data\Displays\Display3DEN\ToolBar\flashlight_on_ca.paa";
							texturePressedUnchecked = "\a3\3DEN\Data\Displays\Display3DEN\ToolBar\flashlight_off_ca.paa";
							textureUnchecked = "\a3\3DEN\Data\Displays\Display3DEN\ToolBar\flashlight_off_ca.paa";
							tooltip = "Toggle Flashlight";
							w = "(	5 * (pixelW * pixelGrid * 	0.50))";
							x = "2 * 	(	5 * (pixelW * pixelGrid * 	0.50))";
							y = 0;
						};
						class Intel: ctrlButtonToolbar
						{
							action = "edit3DENMissionAttributes 'Intel';";
							h = "(	5 * (pixelH * pixelGrid * 	0.50))";
							idc = 10302;
							onLoad = "['showShortcut','OpenIntelDisplay',_this] call bis_fnc_3DENInterface;";
							text = "\a3\3DEN\Data\Displays\Display3DEN\ToolBar\intel_ca.paa";
							tooltip = "Intel";
							w = "(	5 * (pixelW * pixelGrid * 	0.50))";
							x = "0 * 	(	5 * (pixelW * pixelGrid * 	0.50))";
							y = 0;
						};
						class Map: ctrlCheckboxToolbar
						{
							h = "(	5 * (pixelH * pixelGrid * 	0.50))";
							idc = 10303;
							onCheckedChanged = "do3DENAction 'ToggleMap';";
							onLoad = "['showShortcut','ToggleMap',_this] call bis_fnc_3DENInterface;";
							textureChecked = "\a3\3DEN\Data\Displays\Display3DEN\ToolBar\map_on_ca.paa";
							textureDisabledChecked = "\a3\3DEN\Data\Displays\Display3DEN\ToolBar\map_on_ca.paa";
							textureDisabledUnchecked = "\a3\3DEN\Data\Displays\Display3DEN\ToolBar\map_off_ca.paa";
							textureFocusedChecked = "\a3\3DEN\Data\Displays\Display3DEN\ToolBar\map_on_ca.paa";
							textureFocusedUnchecked = "\a3\3DEN\Data\Displays\Display3DEN\ToolBar\map_off_ca.paa";
							textureHoverChecked = "\a3\3DEN\Data\Displays\Display3DEN\ToolBar\map_on_ca.paa";
							textureHoverUnchecked = "\a3\3DEN\Data\Displays\Display3DEN\ToolBar\map_off_ca.paa";
							texturePressedChecked = "\a3\3DEN\Data\Displays\Display3DEN\ToolBar\map_on_ca.paa";
							texturePressedUnchecked = "\a3\3DEN\Data\Displays\Display3DEN\ToolBar\map_off_ca.paa";
							textureUnchecked = "\a3\3DEN\Data\Displays\Display3DEN\ToolBar\map_off_ca.paa";
							tooltip = "Toggle Map";
							w = "(	5 * (pixelW * pixelGrid * 	0.50))";
							x = "1 * 	(	5 * (pixelW * pixelGrid * 	0.50))";
							y = 0;
						};
						class Vision: ctrlButtonToolbar
						{
							action = "[] call bis_fnc_3DENVisionMode;";
							h = "(	5 * (pixelH * pixelGrid * 	0.50))";
							idc = 10304;
							onLoad = "['showShortcut','VisionModeToggle',_this] call bis_fnc_3DENInterface;";
							text = "\a3\3DEN\Data\Displays\Display3DEN\ToolBar\vision_normal_ca.paa";
							tooltip = "Toggle Vision Mode";
							w = "(	5 * (pixelW * pixelGrid * 	0.50))";
							x = "3 * 	(	5 * (pixelW * pixelGrid * 	0.50))";
							y = 0;
						};
						class Workspace: ctrlCombo
						{
							h = "(	5 * (pixelH * pixelGrid * 	0.50))";
							idc = 10306;
							onLbSelChanged = "do3DENAction ((_this select 0) lbdata (_this select 1));";
							tooltip = "Phase";
							w = "5.5 * 	(	5 * (pixelW * pixelGrid * 	0.50))";
							x = "4.5 * 	(	5 * (pixelW * pixelGrid * 	0.50))";
							y = 0;
							class Items
							{
								class Intro
								{
									data = "MissionPartIntro";
									text = "Intro";
								};
								class Mission
								{
									data = "MissionPartMission";
									default = 1;
									text = "Scenario";
								};
								class OutroLose
								{
									data = "MissionPartOutroLoose";
									text = "Outro - Lose";
								};
								class OutroWin
								{
									data = "MissionPartOutroWin";
									text = "Outro - Win";
								};
							};
						};
					};
				};
				class Separator1: ctrlStatic
				{
					colorBackground[] = {0, 0, 0, 0.5};
					h = "(	5 * (pixelH * pixelGrid * 	0.50))";
					w = "pixelW";
					x = "4.5 * 	(	5 * (pixelW * pixelGrid * 	0.50))";
					y = "1 * (pixelH * pixelGrid * 	0.50)";
				};
				class Separator2: Separator1
				{
					x = "7.5 * 	(	5 * (pixelW * pixelGrid * 	0.50))";
				};
				class Separator3: Separator1
				{
					x = "13.5 * 	(	5 * (pixelW * pixelGrid * 	0.50))";
				};
				class Separator4: Separator1
				{
					x = "17.5 * 	(	5 * (pixelW * pixelGrid * 	0.50))";
				};
				class Separator5: Separator1
				{
					x = "23 * 	(	5 * (pixelW * pixelGrid * 	0.50))";
				};
				class ToolbarBackground: ctrlStatic
				{
					colorBackground[] = {0.2, 0.2, 0.2, 1};
					h = "7 * (pixelH * pixelGrid * 	0.50)";
					idc = 1001;
					w = "safezoneW";
					x = 0;
					y = 0;
				};
				class Widget: ctrlControlsGroupNoScrollbars
				{
					h = "(	5 * (pixelH * pixelGrid * 	0.50))";
					idc = 1004;
					w = "5 * 	(	5 * (pixelW * pixelGrid * 	0.50))";
					x = "8 * 	(	5 * (pixelW * pixelGrid * 	0.50))";
					y = "1 * (pixelH * pixelGrid * 	0.50)";
					class Controls
					{
						class WidgetArea: ctrlCheckboxToolbar
						{
							h = "(	5 * (pixelH * pixelGrid * 	0.50))";
							idc = 10045;
							onCheckedChanged = "do3DENAction 'WidgetArea'";
							onLoad = "['showShortcut','WidgetArea',_this] call bis_fnc_3DENInterface;";
							textureChecked = "\a3\3DEN\Data\Displays\Display3DEN\ToolBar\widget_area_on_ca.paa";
							textureDisabledChecked = "\a3\3DEN\Data\Displays\Display3DEN\ToolBar\widget_area_on_ca.paa";
							textureDisabledUnchecked = "\a3\3DEN\Data\Displays\Display3DEN\ToolBar\widget_area_off_ca.paa";
							textureFocusedChecked = "\a3\3DEN\Data\Displays\Display3DEN\ToolBar\widget_area_on_ca.paa";
							textureFocusedUnchecked = "\a3\3DEN\Data\Displays\Display3DEN\ToolBar\widget_area_off_ca.paa";
							textureHoverChecked = "\a3\3DEN\Data\Displays\Display3DEN\ToolBar\widget_area_on_ca.paa";
							textureHoverUnchecked = "\a3\3DEN\Data\Displays\Display3DEN\ToolBar\widget_area_off_ca.paa";
							texturePressedChecked = "\a3\3DEN\Data\Displays\Display3DEN\ToolBar\widget_area_on_ca.paa";
							texturePressedUnchecked = "\a3\3DEN\Data\Displays\Display3DEN\ToolBar\widget_area_off_ca.paa";
							textureUnchecked = "\a3\3DEN\Data\Displays\Display3DEN\ToolBar\widget_area_off_ca.paa";
							tooltip = "Area Widget";
							w = "(	5 * (pixelW * pixelGrid * 	0.50))";
							x = "4 * 	(	5 * (pixelW * pixelGrid * 	0.50))";
							y = 0;
						};
						class WidgetNone: ctrlCheckboxToolbar
						{
							h = "(	5 * (pixelH * pixelGrid * 	0.50))";
							idc = 10041;
							onCheckedChanged = "do3DENAction 'WidgetNone'";
							onLoad = "['showShortcut','WidgetNone',_this] call bis_fnc_3DENInterface;";
							textureChecked = "\a3\3DEN\Data\Displays\Display3DEN\ToolBar\widget_none_on_ca.paa";
							textureDisabledChecked = "\a3\3DEN\Data\Displays\Display3DEN\ToolBar\widget_none_on_ca.paa";
							textureDisabledUnchecked = "\a3\3DEN\Data\Displays\Display3DEN\ToolBar\widget_none_off_ca.paa";
							textureFocusedChecked = "\a3\3DEN\Data\Displays\Display3DEN\ToolBar\widget_none_on_ca.paa";
							textureFocusedUnchecked = "\a3\3DEN\Data\Displays\Display3DEN\ToolBar\widget_none_off_ca.paa";
							textureHoverChecked = "\a3\3DEN\Data\Displays\Display3DEN\ToolBar\widget_none_on_ca.paa";
							textureHoverUnchecked = "\a3\3DEN\Data\Displays\Display3DEN\ToolBar\widget_none_off_ca.paa";
							texturePressedChecked = "\a3\3DEN\Data\Displays\Display3DEN\ToolBar\widget_none_on_ca.paa";
							texturePressedUnchecked = "\a3\3DEN\Data\Displays\Display3DEN\ToolBar\widget_none_off_ca.paa";
							textureUnchecked = "\a3\3DEN\Data\Displays\Display3DEN\ToolBar\widget_none_off_ca.paa";
							tooltip = "No Widget";
							w = "(	5 * (pixelW * pixelGrid * 	0.50))";
							x = "0 * 	(	5 * (pixelW * pixelGrid * 	0.50))";
							y = 0;
						};
						class WidgetRotation: ctrlCheckboxToolbar
						{
							h = "(	5 * (pixelH * pixelGrid * 	0.50))";
							idc = 10043;
							onCheckedChanged = "do3DENAction 'WidgetRotation'";
							onLoad = "['showShortcut','WidgetRotation',_this] call bis_fnc_3DENInterface;";
							textureChecked = "\a3\3DEN\Data\Displays\Display3DEN\ToolBar\widget_rotation_on_ca.paa";
							textureDisabledChecked = "\a3\3DEN\Data\Displays\Display3DEN\ToolBar\widget_rotation_on_ca.paa";
							textureDisabledUnchecked = "\a3\3DEN\Data\Displays\Display3DEN\ToolBar\widget_rotation_off_ca.paa";
							textureFocusedChecked = "\a3\3DEN\Data\Displays\Display3DEN\ToolBar\widget_rotation_on_ca.paa";
							textureFocusedUnchecked = "\a3\3DEN\Data\Displays\Display3DEN\ToolBar\widget_rotation_off_ca.paa";
							textureHoverChecked = "\a3\3DEN\Data\Displays\Display3DEN\ToolBar\widget_rotation_on_ca.paa";
							textureHoverUnchecked = "\a3\3DEN\Data\Displays\Display3DEN\ToolBar\widget_rotation_off_ca.paa";
							texturePressedChecked = "\a3\3DEN\Data\Displays\Display3DEN\ToolBar\widget_rotation_on_ca.paa";
							texturePressedUnchecked = "\a3\3DEN\Data\Displays\Display3DEN\ToolBar\widget_rotation_off_ca.paa";
							textureUnchecked = "\a3\3DEN\Data\Displays\Display3DEN\ToolBar\widget_rotation_off_ca.paa";
							tooltip = "Rotation Widget";
							w = "(	5 * (pixelW * pixelGrid * 	0.50))";
							x = "2 * 	(	5 * (pixelW * pixelGrid * 	0.50))";
							y = 0;
						};
						class WidgetScaling: ctrlCheckboxToolbar
						{
							h = "(	5 * (pixelH * pixelGrid * 	0.50))";
							idc = 10044;
							onCheckedChanged = "do3DENAction 'WidgetScale'";
							onLoad = "['showShortcut','WidgetScale',_this] call bis_fnc_3DENInterface;";
							textureChecked = "\a3\3DEN\Data\Displays\Display3DEN\ToolBar\widget_scaling_on_ca.paa";
							textureDisabledChecked = "\a3\3DEN\Data\Displays\Display3DEN\ToolBar\widget_scaling_on_ca.paa";
							textureDisabledUnchecked = "\a3\3DEN\Data\Displays\Display3DEN\ToolBar\widget_scaling_off_ca.paa";
							textureFocusedChecked = "\a3\3DEN\Data\Displays\Display3DEN\ToolBar\widget_scaling_on_ca.paa";
							textureFocusedUnchecked = "\a3\3DEN\Data\Displays\Display3DEN\ToolBar\widget_scaling_off_ca.paa";
							textureHoverChecked = "\a3\3DEN\Data\Displays\Display3DEN\ToolBar\widget_scaling_on_ca.paa";
							textureHoverUnchecked = "\a3\3DEN\Data\Displays\Display3DEN\ToolBar\widget_scaling_off_ca.paa";
							texturePressedChecked = "\a3\3DEN\Data\Displays\Display3DEN\ToolBar\widget_scaling_on_ca.paa";
							texturePressedUnchecked = "\a3\3DEN\Data\Displays\Display3DEN\ToolBar\widget_scaling_off_ca.paa";
							textureUnchecked = "\a3\3DEN\Data\Displays\Display3DEN\ToolBar\widget_scaling_off_ca.paa";
							tooltip = "Area Scaling Widget";
							w = "(	5 * (pixelW * pixelGrid * 	0.50))";
							x = "3 * 	(	5 * (pixelW * pixelGrid * 	0.50))";
							y = 0;
						};
						class WidgetTranslation: ctrlCheckboxToolbar
						{
							h = "(	5 * (pixelH * pixelGrid * 	0.50))";
							idc = 10042;
							onCheckedChanged = "do3DENAction 'WidgetTranslation'";
							onLoad = "['showShortcut','WidgetTranslation',_this] call bis_fnc_3DENInterface;";
							textureChecked = "\a3\3DEN\Data\Displays\Display3DEN\ToolBar\widget_translation_on_ca.paa";
							textureDisabledChecked = "\a3\3DEN\Data\Displays\Display3DEN\ToolBar\widget_translation_on_ca.paa";
							textureDisabledUnchecked = "\a3\3DEN\Data\Displays\Display3DEN\ToolBar\widget_translation_off_ca.paa";
							textureFocusedChecked = "\a3\3DEN\Data\Displays\Display3DEN\ToolBar\widget_translation_on_ca.paa";
							textureFocusedUnchecked = "\a3\3DEN\Data\Displays\Display3DEN\ToolBar\widget_translation_off_ca.paa";
							textureHoverChecked = "\a3\3DEN\Data\Displays\Display3DEN\ToolBar\widget_translation_on_ca.paa";
							textureHoverUnchecked = "\a3\3DEN\Data\Displays\Display3DEN\ToolBar\widget_translation_off_ca.paa";
							texturePressedChecked = "\a3\3DEN\Data\Displays\Display3DEN\ToolBar\widget_translation_on_ca.paa";
							texturePressedUnchecked = "\a3\3DEN\Data\Displays\Display3DEN\ToolBar\widget_translation_off_ca.paa";
							textureUnchecked = "\a3\3DEN\Data\Displays\Display3DEN\ToolBar\widget_translation_off_ca.paa";
							tooltip = "Translation Widget";
							w = "(	5 * (pixelW * pixelGrid * 	0.50))";
							x = "1 * 	(	5 * (pixelW * pixelGrid * 	0.50))";
							y = 0;
						};
					};
				};
			};
		};
	};
	class ControlsBackground
	{
		class Black: ctrlStatic
		{
			colorBackground[] = {0, 0, 0, 1};
			h = "safezoneH";
			idc = 998;
			w = "safezoneWAbs";
			x = "safezoneXAbs";
			y = "safezoneY";
		};
		class Map: ctrlMap
		{
			h = "safezoneH";
			idc = 51;
			w = "safezoneWAbs";
			x = "safezoneXAbs";
			y = "safezoneY";
			class CustomMark
			{
				coefMax = 0;
				coefMin = 0;
				color[] = {0, 0, 0, 0};
				icon = "#(argb,8,8,3)color(0,0,0,0)";
				importance = 0;
				size = 0;
			};
		};
		class MouseArea: ctrlStatic
		{
			h = "safezoneH";
			idc = 52;
			style = 16;
			w = "safezoneWAbs";
			x = "safezoneXAbs";
			y = "safezoneY";
		};
		class NavigationWidget: ctrlStatic
		{
			h = "15 * (pixelH * pixelGrid * 	0.50)";
			idc = 87;
			sizeEx = "20 * pixelW";
			w = "15 * (pixelW * pixelGrid * 	0.50)";
			widgetLineWidth = 10;
			x = "safezoneX + (	60 + 		15 * 0.2) * (pixelW * pixelGrid * 	0.50)";
			y = "safezoneY + safezoneH - (		4 + 		15 * 1.2) * (pixelH * pixelGrid * 	0.50)";
		};
		class ScrollBlockBottom: ScrollBlockTop
		{
			h = "(		4 + 1) * (pixelH * pixelGrid * 	0.50)";
			idc = 49;
			w = "(safezoneW - 	60 * (pixelW * pixelGrid * 	0.50))";
			x = "safezoneX";
			y = "safezoneY + safezoneH - 		4 * (pixelH * pixelGrid * 	0.50)";
		};
		class ScrollBlockLeft: ScrollBlockTop
		{
			h = "safezoneH - (		5 + 	(	5 + 2) + 		4) * (pixelH * pixelGrid * 	0.50)";
			idc = 47;
			w = "60 * (pixelW * pixelGrid * 	0.50)";
			x = "safezoneX";
			y = "safezoneY + (		5 + 	(	5 + 2)) * (pixelH * pixelGrid * 	0.50)";
		};
		class ScrollBlockRight: ScrollBlockTop
		{
			h = "safezoneH - (		5 + 	(	5 + 2)) * (pixelH * pixelGrid * 	0.50)";
			idc = 48;
			w = "60 * (pixelW * pixelGrid * 	0.50)";
			x = "safezoneX + safezoneW - 	60 * (pixelW * pixelGrid * 	0.50)";
			y = "safezoneY + (	5 + 	(	5 + 2)) * (pixelH * pixelGrid * 	0.50)";
		};
		class ScrollBlockTop: ctrlStatic
		{
			h = "(		5 + 	(	5 + 2)) * (pixelH * pixelGrid * 	0.50)";
			idc = 46;
			w = "safezoneW";
			x = "safezoneX";
			y = "safezoneY";
		};
	};
};
