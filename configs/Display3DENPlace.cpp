class Display3DENPlace: DisplaySimulated
{
	idd = 321;
	onLoad = "[""onLoad"",_this,""Display3DENPlace"",'3DENDisplays'] call 	(uinamespace getvariable 'BIS_fnc_initDisplay')";
	onUnload = "[""onUnload"",_this,""Display3DENPlace"",'3DENDisplays'] call 	(uinamespace getvariable 'BIS_fnc_initDisplay')";
	scriptName = "Display3DENPlace";
	scriptPath = "3DENDisplays";
	class ControlsBackground
	{
		class Background: ctrlStaticBackground
		{
			h = "((safezoneH - 8 * 	5 * (pixelW * pixelGrid * 	0.50)) min (		120 * (pixelH * pixelGrid * 	0.50))) - (	0 - (	5 + 2)) * (pixelH * pixelGrid * 	0.50)";
			w = "60 * (pixelW * pixelGrid * 	0.50)";
			x = "(0.5 - (0.5 * 	60) * (pixelW * pixelGrid * 	0.50))";
			y = "(0.5 - 	((safezoneH - 8 * 	5 * (pixelW * pixelGrid * 	0.50)) min (		120 * (pixelH * pixelGrid * 	0.50))) * 0.5)";
		};
		class BackgroundButtons: ctrlStaticFooter
		{
			h = "(	5 + 2) * (pixelH * pixelGrid * 	0.50)";
			w = "60 * (pixelW * pixelGrid * 	0.50)";
			x = "((getResolution select 2) * 0.5 * pixelW) - (			60 * 0.5) * (pixelW * pixelGrid * 	0.50)";
			y = "0.5 + 	((safezoneH - 8 * 	5 * (pixelW * pixelGrid * 	0.50)) min (		120 * (pixelH * pixelGrid * 	0.50))) * 0.5";
		};
		class BackgroundDisable: ctrlStaticBackgroundDisable {};
		class BackgroundDisableTiles: ctrlStaticBackgroundDisableTiles {};
		class ButtonCancel: ctrlButtonCancel
		{
			h = "5 * (pixelH * pixelGrid * 	0.50)";
			w = "(			60 * 0.5 - 2) * (pixelW * pixelGrid * 	0.50)";
			x = "(0.5 - (0.5 * 	60) * (pixelW * pixelGrid * 	0.50)) + (			60 * 0.5 + 1) * (pixelW * pixelGrid * 	0.50)";
			y = "0.5 + 	((safezoneH - 8 * 	5 * (pixelW * pixelGrid * 	0.50)) min (		120 * (pixelH * pixelGrid * 	0.50))) * 0.5 + (pixelH * pixelGrid * 	0.50)";
		};
		class ButtonOK: ctrlButtonOK
		{
			h = "5 * (pixelH * pixelGrid * 	0.50)";
			w = "(			60 * 0.5 - 1) * (pixelW * pixelGrid * 	0.50)";
			x = "(0.5 - (0.5 * 	60) * (pixelW * pixelGrid * 	0.50)) + (1) * (pixelW * pixelGrid * 	0.50)";
			y = "0.5 + 	((safezoneH - 8 * 	5 * (pixelW * pixelGrid * 	0.50)) min (		120 * (pixelH * pixelGrid * 	0.50))) * 0.5 + (pixelH * pixelGrid * 	0.50)";
		};
		class PanelRightCreate: ctrlControlsGroupNoScrollbars
		{
			h = "((safezoneH - 8 * 	5 * (pixelW * pixelGrid * 	0.50)) min (		120 * (pixelH * pixelGrid * 	0.50))) - (	0) * (pixelH * pixelGrid * 	0.50)";
			idc = 1039;
			w = "60 * (pixelW * pixelGrid * 	0.50)";
			x = "(0.5 - (0.5 * 	60) * (pixelW * pixelGrid * 	0.50))";
			y = "(0.5 - 	((safezoneH - 8 * 	5 * (pixelW * pixelGrid * 	0.50)) min (		120 * (pixelH * pixelGrid * 	0.50))) * 0.5)";
			class Controls
			{
				class Create: ctrlControlsGroupNoScrollbars
				{
					h = "((safezoneH - 8 * 	5 * (pixelW * pixelGrid * 	0.50)) min (		120 * (pixelH * pixelGrid * 	0.50))) - (	0 + 14 + 	5) * (pixelH * pixelGrid * 	0.50)";
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
							defaultItem[] = {"OPF_F", "Infantry", "OIA_InfSquad"};
							idc = 62;
						};
						class CreateGroupEMPTY: CreateObjectEMPTY
						{
							defaultItem[] = {};
							idc = 65;
						};
						class CreateGroupGUER: CreateObjectEMPTY
						{
							defaultItem[] = {"IND_F", "Infantry", "HAF_InfSquad"};
							idc = 63;
						};
						class CreateGroupWEST: CreateObjectEMPTY
						{
							defaultItem[] = {"BLU_F", "Infantry", "BUS_InfSquad"};
							idc = 61;
						};
						class CreateMarkerArea: CreateObjectEMPTY
						{
							defaultItem[] = {"ellipse"};
							idc = 70;
						};
						class CreateMarkerIcon: CreateObjectEMPTY
						{
							defaultItem[] = {"Military", "mil_dot"};
							idc = 69;
						};
						class CreateObjectCIV: CreateObjectWEST
						{
							defaultItem[] = {"CIV_F", "EdSubcat_Personnel", "C_Man_1"};
							idc = 59;
						};
						class CreateObjectEAST: CreateObjectWEST
						{
							defaultItem[] = {"OPF_F", "EdSubcat_Personnel", "O_SOldier_F"};
							idc = 57;
						};
						class CreateObjectEMPTY: CreateObjectWEST
						{
							defaultItem[] = {"Default"};
							h = "((safezoneH - 8 * 	5 * (pixelW * pixelGrid * 	0.50)) min (		120 * (pixelH * pixelGrid * 	0.50))) - (	0 + 21 + 	5) * (pixelH * pixelGrid * 	0.50)";
							idc = 60;
						};
						class CreateObjectGUER: CreateObjectWEST
						{
							defaultItem[] = {"IND_F", "EdSubcat_Personnel", "I_Soldier_F"};
							idc = 58;
						};
						class CreateObjectLogic: CreateObjectEMPTY
						{
							defaultItem[] = {"Objects", "Logic"};
							idc = 66;
						};
						class CreateObjectModule: CreateObjectEMPTY
						{
							defaultItem[] = {"Default"};
							idc = 67;
						};
						class CreateObjectWEST: ctrlTree
						{
							colorBackground[] = {0, 0, 0, 0};
							colorBorder[] = {0, 0, 0, 0};
							defaultItem[] = {"BLU_F", "EdSubcat_Personnel", "B_Soldier_F"};
							disableKeyboardSearch = 1;
							font = "RobotoCondensedLight";
							h = "((safezoneH - 8 * 	5 * (pixelW * pixelGrid * 	0.50)) min (		120 * (pixelH * pixelGrid * 	0.50))) - (	0 + 21 + 	5 + (	5 + 2)) * (pixelH * pixelGrid * 	0.50)";
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
							defaultItem[] = {"EmptyDetector"};
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
							y = "((safezoneH - 8 * 	5 * (pixelW * pixelGrid * 	0.50)) min (		120 * (pixelH * pixelGrid * 	0.50))) - (	0 + 14 + 	5 + (	5 + 2)) * (pixelH * pixelGrid * 	0.50)";
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
							y = "((safezoneH - 8 * 	5 * (pixelW * pixelGrid * 	0.50)) min (		120 * (pixelH * pixelGrid * 	0.50))) - (	0 + 14 + 	5 + (	5 + 2)) * (pixelH * pixelGrid * 	0.50)";
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
					columns = "6 - 1";
					h = "3 * (pixelH * pixelGrid * 	0.50)";
					idc = 1060;
					onLoad = "(_this select 0) ctrlenable false;";
					rows = 1;
					sizeEx = "3.96 * (1 / (getResolution select 3)) * pixelGrid * 0.5";
					strings[] = {"F1", "F2", "F3", "F5", "F6"};
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
					columns = "6 - 1";
					h = "7 * (pixelH * pixelGrid * 	0.50)";
					idc = 53;
					onToolBoxSelChanged = "['placemode'] spawn bis_fnc_3DENInterface; ['placesubmode'] spawn bis_fnc_3DENInterface;";
					rows = 1;
					strings[] = {"\a3\3DEN\Data\Displays\Display3DEN\PanelRight\modeObjects_ca.paa", "\a3\3DEN\Data\Displays\Display3DEN\PanelRight\modeGroups_ca.paa", "\a3\3DEN\Data\Displays\Display3DEN\PanelRight\modeTriggers_ca.paa", "\a3\3DEN\Data\Displays\Display3DEN\PanelRight\modeModules_ca.paa", "\a3\3DEN\Data\Displays\Display3DEN\PanelRight\modeMarkers_ca.paa"};
					tooltips[] = {"Objects", "Compositions", "Triggers", "Systems", "Markers"};
					values[] = {0, 1, 2, 4, 5, 6};
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
					onToolBoxSelChanged = "['placesubmode'] spawn bis_fnc_3DENInterface;";
					strings[] = {};
					values[] = {};
					w = "60 * (pixelW * pixelGrid * 	0.50)";
					y = "10 * (pixelH * pixelGrid * 	0.50)";
				};
			};
		};
		class Title: ctrlStaticTitle
		{
			h = "5 * (pixelH * pixelGrid * 	0.50)";
			text = "Place Entity";
			w = "60 * (pixelW * pixelGrid * 	0.50)";
			x = "(0.5 - (0.5 * 	60) * (pixelW * pixelGrid * 	0.50))";
			y = "(0.5 - 	((safezoneH - 8 * 	5 * (pixelW * pixelGrid * 	0.50)) min (		120 * (pixelH * pixelGrid * 	0.50))) * 0.5) - 	5 * (pixelH * pixelGrid * 	0.50)";
		};
	};
};
