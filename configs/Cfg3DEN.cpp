class Cfg3DEN
{
	class Attributes
	{
		class ActivationType: Title
		{
			attributeLoad = "(_this controlsGroupCtrl 100) lbsetcursel (['present','not present','west d','east d','guer d','civ d'] find _value);";
			attributeSave = "['present','not present','west d','east d','guer d','civ d'] select (missionnamespace getvariable ['ActivationType_value',2]);";
			h = "1 * 	5 * (pixelH * pixelGrid * 	0.50)";
			class Controls: Controls
			{
				class Title: Title
				{
					h = "1 * 	5 * (pixelH * pixelGrid * 	0.50)";
				};
				class Value: ctrlCombo
				{
					h = "1 * 	5 * (pixelH * pixelGrid * 	0.50)";
					idc = 100;
					w = "82 * (pixelW * pixelGrid * 	0.50)";
					x = "48 * (pixelW * pixelGrid * 	0.50)";
					class Items
					{
						class CivDetected: WestDetected
						{
							data = "CIV D";
							text = "Detected by Civilian";
							value = 5;
						};
						class EastDetected: WestDetected
						{
							data = "EAST D";
							text = "Detected by OPFOR";
							value = 3;
						};
						class GuerDetected: WestDetected
						{
							data = "GUER D";
							text = "Detected by Independent";
							value = 4;
						};
						class NotPresent
						{
							data = "NOT PRESENT";
							text = "Not Present";
							tooltip = "Activated when objects are not in the area.";
							value = 1;
						};
						class Present
						{
							data = "PRESENT";
							text = "Present";
							tooltip = "Activated when objects are in the area.";
							value = 0;
						};
						class WestDetected
						{
							data = "WEST D";
							text = "Detected by BLUFOR";
							tooltip = "Activated when objects are in the area and are discovered by the given side.";
							value = 2;
						};
					};
				};
			};
		};
		class AmmoBox: TitleWide
		{
			attributeLoad = "['attributeLoad',_this] call (uinamespace getvariable 'AmmoBox_script');";
			attributeSave = "['attributeSave',_this] call (uinamespace getvariable 'AmmoBox_script');";
			h = "(19 * 	5 + 1) * (pixelH * pixelGrid * 	0.50)";
			onLoad = "[""onLoad"",_this,""AmmoBox"",'3DENAttributes',false] call 	(uinamespace getvariable 'BIS_fnc_initDisplay')";
			onUnload = "[""onUnload"",_this,""AmmoBox"",'3DENAttributes',false] call 	(uinamespace getvariable 'BIS_fnc_initDisplay')";
			scriptName = "AmmoBox";
			scriptPath = "3DENAttributes";
			class Controls: Controls
			{
				class ArrowLeft: ctrlButton
				{
					font = "RobotoCondensedBold";
					h = "5 * (pixelH * pixelGrid * 	0.50)";
					idc = 313102;
					text = "-";
					w = "5 * (pixelW * pixelGrid * 	0.50)";
					x = -1;
					y = -1;
				};
				class ArrowRight: ArrowLeft
				{
					idc = 313103;
					text = "+";
				};
				class ButtonClear: ctrlButton
				{
					h = "5 * (pixelH * pixelGrid * 	0.50)";
					idc = 104;
					text = "Clear";
					w = "25 * (pixelW * pixelGrid * 	0.50)";
					x = "(	48 + 	82 - 25) * (pixelW * pixelGrid * 	0.50)";
					y = "18 * 	5 * (pixelH * pixelGrid * 	0.50)";
				};
				class Filter: ctrlToolbox
				{
					columns = 13;
					h = "2 * 	5 * (pixelH * pixelGrid * 	0.50)";
					idc = 100;
					rows = 1;
					strings[] = {"\a3\Ui_F_Curator\Data\RscCommon\RscAttributeInventory\filter_0_ca.paa", "\a3\Ui_F_Curator\Data\RscCommon\RscAttributeInventory\filter_1_ca.paa", "\a3\Ui_F_Curator\Data\RscCommon\RscAttributeInventory\filter_2_ca.paa", "\a3\Ui_F_Curator\Data\RscCommon\RscAttributeInventory\filter_3_ca.paa", "\a3\Ui_F_Curator\Data\RscCommon\RscAttributeInventory\filter_4_ca.paa", "\a3\Ui_F_Curator\Data\RscCommon\RscAttributeInventory\filter_5_ca.paa", "\a3\Ui_F_Curator\Data\RscCommon\RscAttributeInventory\filter_6_ca.paa", "\a3\Ui_F_Curator\Data\RscCommon\RscAttributeInventory\filter_7_ca.paa", "\a3\Ui_F_Curator\Data\RscCommon\RscAttributeInventory\filter_8_ca.paa", "\a3\Ui_F_Curator\Data\RscCommon\RscAttributeInventory\filter_9_ca.paa", "\a3\Ui_F_Curator\Data\RscCommon\RscAttributeInventory\filter_10_ca.paa", "\a3\Ui_F_Curator\Data\RscCommon\RscAttributeInventory\filter_11_ca.paa", "\a3\Ui_F_Curator\Data\RscCommon\RscAttributeInventory\filter_12_ca.paa"};
					style = "0x30 + 0x800";
					w = "(	48 + 	82 - 	5) * (pixelW * pixelGrid * 	0.50)";
					x = "5 * (pixelW * pixelGrid * 	0.50)";
					y = "3 * 	5 * (pixelH * pixelGrid * 	0.50)";
				};
				class List: ctrlListNBox
				{
					columns[] = {0.05, 0.15, 0.85};
					disableOverflow = 1;
					drawSideArrows = 1;
					h = "13 * 	5 * (pixelH * pixelGrid * 	0.50)";
					idc = 101;
					idcLeft = 313102;
					idcRight = 313103;
					w = "(	48 + 	82 - 	5) * (pixelW * pixelGrid * 	0.50)";
					x = "5 * (pixelW * pixelGrid * 	0.50)";
					y = "5 * 	5 * (pixelH * pixelGrid * 	0.50)";
				};
				class ListBackground: ctrlStatic
				{
					colorBackground[] = {1, 1, 1, 0.1};
					h = "13 * 	5 * (pixelH * pixelGrid * 	0.50)";
					w = "(	48 + 	82 - 	5) * (pixelW * pixelGrid * 	0.50)";
					x = "5 * (pixelW * pixelGrid * 	0.50)";
					y = "5 * 	5 * (pixelH * pixelGrid * 	0.50)";
				};
				class Title1: Title
				{
					text = "Type";
				};
				class Title2: Title
				{
					text = "Content";
					y = "2 * 	5 * (pixelH * pixelGrid * 	0.50)";
				};
				class Type: ctrlToolbox
				{
					columns = 2;
					h = "1 * 	5 * (pixelH * pixelGrid * 	0.50)";
					idc = 103;
					rows = 1;
					strings[] = {"Default", "Virtual"};
					w = "(	48 + 	82 - 	5) * (pixelW * pixelGrid * 	0.50)";
					x = "5 * (pixelW * pixelGrid * 	0.50)";
					y = "1 * 	5 * (pixelH * pixelGrid * 	0.50)";
				};
			};
		};
		class AppId: Combo
		{
			attributeLoad = "		_ctrlCombo = _this controlsGroupCtrl 100;		for '_i' from 0 to lbsize _ctrlCombo - 1 do {			if (_value == _ctrlCombo lbvalue _i) exitwith {_ctrlCombo lbsetcursel _i;};		};	";
			attributeSave = "		_ctrlCombo = _this controlsGroupCtrl 100;		_ctrlCombo lbvalue lbcursel _ctrlCombo	";
			class Controls: Controls
			{
				class Title: Title {};
				class Value: Value
				{
					onLoad = "				_control = _this select 0;				{					_appId = getnumber (_x >> 'appId');					if (_appId != 0 && getnumber (_x >> 'hidePicture') == 0) then {						_lbAdd = _control lbadd gettext (_x >> 'name');						_control lbsetpictureright [_lbAdd,gettext (_x >> 'logoSmall')];						_control lbsetvalue [_lbAdd,_appId];					};				} foreach configproperties [configfile >> 'CfgMods','isclass _x'];				lbsortbyvalue _control;			";
					class Items
					{
						class None
						{
							data = "";
							default = 1;
							text = "None";
							value = 0;
						};
					};
					class ItemsConfig
					{
						path[] = {"CfgMods"};
						propertyText = "name";
						sort = 2;
					};
				};
			};
		};
		class AssetType: Checkbox
		{
			attributeLoad = "(_this controlsGroupCtrl 100) cbsetchecked (_value == 'restricted')";
			attributeSave = "['free','restricted'] select cbchecked (_this controlsGroupCtrl 100)";
		};
		class BehaviourGroup: Combo
		{
			class Controls: Controls
			{
				class Title: Title {};
				class Value: Value
				{
					class Items
					{
						class Aware
						{
							data = "AWARE";
							text = "Aware";
							tooltip = "Default behavior. Characters are in ready position. Vehicles prefer roads, do not use lights and their passengers will disembark to counter threats.";
						};
						class Careless
						{
							data = "CARELESS";
							text = "Careless";
							tooltip = "The same as 'Safe', except that it will not be switched automatically after spotting a threat. Use with caution, player may perceive AIs in this behavior as defective.";
						};
						class Combat
						{
							data = "COMBAT";
							text = "Combat";
							tooltip = "Firefight behavior. Characters break formation and take cover. Vehicles ignore roads and do not use lights.";
						};
						class Safe
						{
							data = "SAFE";
							text = "Safe";
							tooltip = "Non-combat behavior. Characters have weapons lowered. Vehicles follow roads and use lights. They automatically switch to 'Aware' upon spotting a threat.";
						};
						class Stealth
						{
							data = "STEALTH";
							text = "Stealth";
							tooltip = "Characters break formation and move cautiously, preferring cover and going prone. Vehicles prefer roads, but do not use lights.";
						};
					};
				};
			};
		};
		class BehaviourWaypoint: BehaviourGroup
		{
			class Controls: Controls
			{
				class Title: Title {};
				class Value: Value
				{
					class Items: Items
					{
						class Aware: Aware {};
						class Careless: Careless {};
						class Combat: Combat {};
						class Safe: Safe {};
						class Stealth: Stealth {};
						class Unchanged
						{
							data = "UNCHANGED";
							text = "Unchanged";
							tooltip = "No change compared to the previous state.";
						};
					};
				};
			};
		};
		class Checkbox: Title
		{
			attributeLoad = "		_checked = switch (true) do {			case (_value isequaltype 0): {([false,true] select (_value max 0 min 1))};			case (_value isequaltype ''): {([false,true] select ((parsenumber _value) max 0 min 1))};			default {_value};		};		(_this controlsGroupCtrl 100) cbsetchecked _checked;	";
			attributeSave = "cbchecked (_this controlsGroupCtrl 100)";
			class Controls: Controls
			{
				class Title: Title {};
				class Value: ctrlCheckboxBaseline
				{
					h = "5 * (pixelH * pixelGrid * 	0.50)";
					idc = 100;
					w = "5 * (pixelW * pixelGrid * 	0.50)";
					x = "48 * (pixelW * pixelGrid * 	0.50)";
				};
			};
		};
		class CheckboxNumber: Checkbox
		{
			attributeSave = "[0,1] select cbchecked (_this controlsGroupCtrl 100)";
		};
		class CheckboxReversed: Checkbox
		{
			class Controls: Controls
			{
				class Title: Title {};
				class Value: Value
				{
					textureChecked = "\a3\3DEN\Data\Controls\ctrlCheckbox\textureUnchecked_ca.paa";
					textureDisabledChecked = "\a3\3DEN\Data\Controls\ctrlCheckbox\textureUnchecked_ca.paa";
					textureDisabledUnchecked = "\a3\3DEN\Data\Controls\ctrlCheckbox\textureChecked_ca.paa";
					textureFocusedChecked = "\a3\3DEN\Data\Controls\ctrlCheckbox\textureUnchecked_ca.paa";
					textureFocusedUnchecked = "\a3\3DEN\Data\Controls\ctrlCheckbox\textureChecked_ca.paa";
					textureHoverChecked = "\a3\3DEN\Data\Controls\ctrlCheckbox\textureUnchecked_ca.paa";
					textureHoverUnchecked = "\a3\3DEN\Data\Controls\ctrlCheckbox\textureChecked_ca.paa";
					texturePressedChecked = "\a3\3DEN\Data\Controls\ctrlCheckbox\textureUnchecked_ca.paa";
					texturePressedUnchecked = "\a3\3DEN\Data\Controls\ctrlCheckbox\textureChecked_ca.paa";
					textureUnchecked = "\a3\3DEN\Data\Controls\ctrlCheckbox\textureChecked_ca.paa";
				};
			};
		};
		class CheckboxState: Checkbox
		{
			class Controls: Controls
			{
				class Title: Title {};
				class Value: Value
				{
					onCheckedChanged = "					_ctrlCheckbox = _this select 0;					_state = [false,true] select (cbChecked _ctrlCheckbox);					_fade = [0.75,0] select _state;					_ctrlGroup = ctrlParentControlsGroup ctrlParentControlsGroup _ctrlCheckbox;					{						if (ctrlParentControlsGroup _x == _ctrlGroup) then {							_x ctrlenable _state;							_x ctrlsetfade _fade;							_x ctrlcommit 0;						};					} foreach (allcontrols (ctrlparent _ctrlCheckbox) - [ctrlParentControlsGroup _ctrlCheckbox]);			";
					onLoad = "				_this spawn {					disableserialization;					_ctrlCheckbox = _this select 0;					_state = [false,true] select (cbChecked _ctrlCheckbox);					_fade = [0.75,0] select _state;					_ctrlGroup = ctrlParentControlsGroup ctrlParentControlsGroup _ctrlCheckbox;					{						if (ctrlParentControlsGroup _x == _ctrlGroup) then {							_x ctrlenable _state;							_x ctrlsetfade _fade;							_x ctrlcommit 0;						};					} foreach (allcontrols (ctrlparent _ctrlCheckbox) - [ctrlParentControlsGroup _ctrlCheckbox]);				};			";
				};
			};
		};
		class CivilianPresence_UnitCount: Slider
		{
			attributeLoad = "		comment 'DO NOT COPY THIS CODE TO YOUR ATTRIBUTE CONFIG UNLESS YOU ARE CHANGING SOMETHING IN THE CODE!';		_ctrlGroup = _this;		[_ctrlGroup controlsgroupctrl 100,_ctrlGroup controlsgroupctrl 101,'',_value] call bis_fnc_initSliderValue;	";
			onLoad = "		comment 'DO NOT COPY THIS CODE TO YOUR ATTRIBUTE CONFIG UNLESS YOU ARE CHANGING SOMETHING IN THE CODE!';		_ctrlGroup = _this select 0;		[_ctrlGroup controlsgroupctrl 100,_ctrlGroup controlsgroupctrl 101,''] call bis_fnc_initSliderValue;	";
			class Controls: Controls
			{
				class Edit: Edit {};
				class Title: Title {};
				class Value: Value
				{
					lineSize = 1;
					sliderPosition = 5;
					sliderRange[] = {0, 30};
					sliderStep = 1;
				};
			};
		};
		class CivilianPresenceSafeSpot_Capacity: Slider
		{
			attributeLoad = "		comment 'DO NOT COPY THIS CODE TO YOUR ATTRIBUTE CONFIG UNLESS YOU ARE CHANGING SOMETHING IN THE CODE!';		_ctrlGroup = _this;		[_ctrlGroup controlsgroupctrl 100,_ctrlGroup controlsgroupctrl 101,'',_value] call bis_fnc_initSliderValue;	";
			onLoad = "		comment 'DO NOT COPY THIS CODE TO YOUR ATTRIBUTE CONFIG UNLESS YOU ARE CHANGING SOMETHING IN THE CODE!';		_ctrlGroup = _this select 0;		[_ctrlGroup controlsgroupctrl 100,_ctrlGroup controlsgroupctrl 101,''] call bis_fnc_initSliderValue;	";
			class Controls: Controls
			{
				class Edit: Edit {};
				class Title: Title {};
				class Value: Value
				{
					lineSize = 1;
					sliderPosition = 3;
					sliderRange[] = {1, 10};
					sliderStep = 1;
				};
			};
		};
		class CivilianPresenceSafeSpot_Type: Toolbox
		{
			attributeLoad = "(_this controlsGroupCtrl 100) lbSetCursel _value";
			attributeSave = "lbCursel (_this controlsGroupCtrl 100)";
			class Controls: Controls
			{
				class Title: Title {};
				class Value: Value
				{
					columns = 3;
					idc = 100;
					rows = 1;
					strings[] = {"Cover", "Cover & Waypoint", "Waypoint"};
					tooltips[] = {"Position is used only as cover.", "Position is used as both cover and waypoint.", "Position is used only as waypoint."};
					values[] = {0, 1, 2};
				};
			};
		};
		class CombatModeGroup: Combo
		{
			class Controls: Controls
			{
				class Title: Title {};
				class Value: Value
				{
					class Items
					{
						class Blue
						{
							data = "BLUE";
							text = "Forced Hold Fire";
							tooltip = "The group will never fire under any circumstances.";
						};
						class Green
						{
							data = "GREEN";
							text = "Do Not Fire Unless Fired Upon, Keep Formation";
							tooltip = "Group members will hold fire unless directly threatened.";
						};
						class Red
						{
							data = "RED";
							text = "Open Fire";
							tooltip = "Group members will fire at any suitable target in range, leaving the formation to find a suitable shooting position.";
						};
						class White
						{
							data = "WHITE";
							text = "Do Not Fire Unless Fired Upon";
							tooltip = "Group members will move into positions from which they can shoot at the enemy, but will hold fire unless directly threatened.";
						};
						class Yellow
						{
							data = "YELLOW";
							text = "Open Fire, Keep Formation";
							tooltip = "Default combat mode. Group members will fire upon any target in range, while staying in formation. The group leader may order individual members to engage specific targets.";
						};
					};
				};
			};
		};
		class CombatModeWaypoint: CombatModeGroup
		{
			class Controls: Controls
			{
				class Title: Title {};
				class Value: Value
				{
					class Items: Items
					{
						class Blue: Blue {};
						class Green: Green {};
						class NoChange
						{
							data = "NO CHANGE";
							text = "Unchanged";
							tooltip = "No change compared to the previous state.";
						};
						class Red: Red {};
						class White: White {};
						class Yellow: Yellow {};
					};
				};
			};
		};
		class Combo: Title
		{
			attributeLoad = "		comment 'DO NOT COPY THIS CODE TO YOUR ATTRIBUTE CONFIG UNLESS YOU ARE CHANGING SOMETHING IN THE CODE!';		_ctrlCombo = _this controlsGroupCtrl 100;		_cfgValues = _config >> 'Values';		if (isclass _cfgValues) then {			{				_lbadd = _ctrlCombo lbadd gettext (_x >> 'name');				if (isnumber (_x >> 'value')) then {					_valueConfig = getnumber (_x >> 'value');					_ctrlCombo lbsetdata [_lbadd,str _valueConfig];					_ctrlCombo lbsetvalue [_lbadd,_valueConfig];				} else {					_ctrlCombo lbsetdata [_lbadd,gettext (_x >> 'value')];				};				_ctrlCombo lbsetpicture [_lbadd,gettext (_x >> 'picture')];				_ctrlCombo lbsetpictureright [_lbadd,gettext (_x >> 'pictureRight')];				_ctrlCombo lbsettooltip [_lbadd,gettext (_x >> 'tooltip')];				if (getnumber (_x >> 'default') > 0) then {_ctrlCombo lbsetcursel _lbadd;};			} foreach configproperties [_cfgValues,'isclass _x'];		};		if (lbsize _ctrlCombo == 0) then {			{				_lbAdd = _ctrlCombo lbadd _x;				_ctrlCombo lbsetvalue [_lbAdd,1 - _foreachindex];				_ctrlCombo lbsetdata [_lbAdd,str (1 - _foreachindex)];			} foreach [localize 'str_enabled',localize 'str_disabled'];		};		if (_value isequaltype true) then {			_value = [0,1] select _value;		} else {			if (_value isequaltype '') then {_value = tolower _value;};		};		for '_i' from 0 to (lbsize _ctrlCombo - 1) do {			if (_value in [parsenumber (_ctrlCombo lbdata _i),tolower (_ctrlCombo lbdata _i),_ctrlCombo lbvalue _i]) exitwith {_ctrlCombo lbsetcursel _i;};		};	";
			attributeSave = "		comment 'DO NOT COPY THIS CODE TO YOUR ATTRIBUTE CONFIG UNLESS YOU ARE CHANGING SOMETHING IN THE CODE!';		_ctrlCombo = _this controlsGroupCtrl 100;		switch toupper gettext (_config >> 'typeName') do {			case 'NUMBER': {				_returnData = parsenumber (_ctrlCombo lbdata lbcursel _ctrlCombo);				_returnValue = _ctrlCombo lbvalue lbcursel _ctrlCombo;				if (round _returnData != _returnValue) then {_returnData = _returnValue;};				_returnData			};			case 'BOOL': {				[false,true] select ((parsenumber (_ctrlCombo lbdata lbcursel _ctrlCombo)) max 0 min 1)			};			default {_ctrlCombo lbdata lbcursel _ctrlCombo};		};	";
			class Controls
			{
				class Title: Title {};
				class Value: ctrlCombo
				{
					colorSelectRight[] = {0, 0, 0, 0.5};
					colorTextRight[] = {1, 1, 1, 0.5};
					h = "5 * (pixelH * pixelGrid * 	0.50)";
					idc = 100;
					onLoad = "				comment 'DO NOT COPY THIS CODE TO YOUR ATTRIBUTE CONFIG UNLESS YOU ARE CHANGING SOMETHING IN THE CODE!';				_control = _this select 0;				_config = _this select 1;				_configItems = _config >> 'itemsconfig';				if (isclass _configItems) then {					_pathRoots = if (getnumber (_configItems >> 'localConfig') > 0) then {[configfile,campaignconfigfile,missionconfigfile]} else {[configfile]};					_paths = [];					{						_path = _x;						{_path = _path >> _x;} foreach getarray (_configItems >> 'path');						_paths pushback _path;					} foreach _pathRoots;					_propertyText = gettext (_configItems >> 'propertyText');					_propertyTextRight = gettext (_configItems >> 'propertyTextRight');					_propertyColor = gettext (_configItems >> 'propertyColor');					_propertyPicture = gettext (_configItems >> 'propertyPicture');					_tooltip = gettext (_configItems >> 'tooltip');					if (_tooltip == '') then {_tooltip = '%1\n%2';};					_sort = getnumber (_configItems >> 'sort');					{						{							_text = gettext (_x >> _propertyText);							if (_text != '') then {								_lbadd = _control lbadd _text;								_control lbsetdata [_lbadd,configname _x];								if (_propertyPicture != '') then {_control lbsetpicture [_lbadd,gettext (_x >> _propertyPicture)];};								if (_propertyTextRight != '') then {_control lbsettextright [_lbadd,gettext (_x >> _propertyTextRight)];};								_control lbsettooltip [_lbadd,format [_tooltip,_control lbtext _lbadd,_control lbdata _lbadd]];								_dlcLogo = if (configsourcemod _x == '') then {''} else {modParams [configsourcemod  _x,['logo']] param [0,'']};								if (_dlcLogo != '') then {_control lbsetpictureright [_lbadd,_dlcLogo];};							};						} foreach configproperties [_x,'isclass _X'];					} foreach _paths;					if (_sort > 1) then {lbsortbyvalue _control} else {if (_sort > 0) then {lbsort _control};};				};			";
					w = "82 * (pixelW * pixelGrid * 	0.50)";
					x = "48 * (pixelW * pixelGrid * 	0.50)";
				};
			};
		};
		class ComboPreview: Combo
		{
			class Controls: Controls
			{
				class Preview: ctrlButtonPictureKeepAspect
				{
					h = "5 * (pixelH * pixelGrid * 	0.50)";
					idc = 101;
					onMouseButtonClick = "				comment 'DO NOT COPY THIS CODE TO YOUR ATTRIBUTE CONFIG UNLESS YOU ARE CHANGING SOMETHING IN THE CODE!';				_ctrlButton = _this select 0;				_ctrlGroup = ctrlParentControlsGroup _ctrlButton;				_ctrlCombo = _ctrlGroup controlsgroupctrl 100;				_path = [configfile,campaignconfigfile,missionconfigfile] select ((_ctrlCombo lbvalue lbcursel _ctrlCombo) max 0);				_cfg = configfile >> 'cfg3den' >> 'attributes' >> ctrlclassname _ctrlGroup >> 'Controls' >> ctrlclassname _ctrlCombo >> 'ItemsConfig';				{_path = _path >> _x;} foreach getarray (_cfg >> 'path');				_data = _ctrlCombo lbdata lbcursel _ctrlCombo;				switch (tolower configname _path) do {					case 'cfgmusic': {						playmusic _data;					};					case 'cfgsound': {						playsound _data;					};					case 'cfgvoice': {						_protocol = gettext (_path >> _data >> 'protocol');						_directory = getarray (_path >> _data >> 'directories') param [0,''];						if (_directory != '') then {							_word = selectrandom ['AwaitingOrders','IAmReady','ReadyForOrders','StandingBy','Waiting'];							_wordPath = getarray (configfile >> _protocol >> 'Words' >> _word) param [0,''];							if (_wordPath != '') then {								_path = _directory + _wordPath;								if (_path select [0,1] == '\') then {_path = _path select [1];};								playsound3d [_path,get3dencamera];							};						};					};					default {						_item = _path >> _data;						if (isclass _item) then {							_soundArray = getarray (_item >> 'sounds');							if (count _soundArray > 0) then {								_soundArray = getarray (_item >> (_soundArray select 0));							} else {								_soundArray = getarray (_item >> 'sound');							};							if (count _soundArray > 0) then {								playsound3d [_soundArray select 0,get3dencamera];								playsound3d [(_soundArray select 0) + '.wss',get3dencamera];							};						};					};				};			";
					text = "\a3\3DEN\Data\Attributes\ComboPreview\play_ca.paa";
					w = "0.99 * 	5 * (pixelW * pixelGrid * 	0.50)";
					x = "(	48 + 	82 - 	5) * (pixelW * pixelGrid * 	0.50)";
				};
				class Title: Title {};
				class Value: Value
				{
					h = "5 * (pixelH * pixelGrid * 	0.50)";
					idc = 100;
					w = "(	82 - 	5) * (pixelW * pixelGrid * 	0.50)";
					x = "48 * (pixelW * pixelGrid * 	0.50)";
				};
			};
		};
		class ControlMP: Checkbox
		{
			class Controls: Controls
			{
				class Title: Title {};
				class Value: Value {};
				class ValueDisabled: Value
				{
					checked = 1;
					idc = 101;
					show = 0;
				};
			};
		};
		class ControlSP: Checkbox
		{
			class Controls: Controls
			{
				class Title: Title {};
				class Value: Value
				{
					onCheckedChanged = "					_ctrlCheckbox = _this select 0;					_state = [true,false] select (cbChecked _ctrlCheckbox);					_fade = [0.75,0] select _state;					_ctrlGroup = ctrlParentControlsGroup ctrlParentControlsGroup _ctrlCheckbox;					{						if (ctrlclassname _x == 'ControlMP') then {							_x ctrlenable _state;							_x ctrlsetfade _fade;							_x ctrlcommit 0;							_ctrlCheckbox = _x controlsGroupCtrl 100;							_ctrlCheckbox ctrlshow _state;							_ctrlCheckboxDisabled = _x controlsGroupCtrl 101;							_ctrlCheckboxDisabled ctrlshow !_state;						};					} foreach (allcontrols (ctrlparent _ctrlCheckbox) - [ctrlParentControlsGroup _ctrlCheckbox]);			";
					onLoad = "				_this spawn {					disableserialization;					_ctrlCheckbox = _this select 0;					_state = [true,false] select (cbChecked _ctrlCheckbox);					_fade = [0.75,0] select _state;					_ctrlGroup = ctrlParentControlsGroup ctrlParentControlsGroup _ctrlCheckbox;					{						if (ctrlclassname _x == 'ControlMP') then {							_x ctrlenable _state;							_x ctrlsetfade _fade;							_x ctrlcommit 0;							_ctrlCheckbox = _x controlsGroupCtrl 100;							_ctrlCheckbox ctrlshow _state;							_ctrlCheckboxDisabled = _x controlsGroupCtrl 101;							_ctrlCheckboxDisabled ctrlshow !_state;						};					} foreach (allcontrols (ctrlparent _ctrlCheckbox) - [ctrlParentControlsGroup _ctrlCheckbox]);				};			";
				};
			};
		};
		class Date: Title
		{
			attributeLoad = "		_ctrlYear = _this controlsGroupCtrl 101;		_ctrlMonth = _this controlsGroupCtrl 102;		_ctrlDay = _this controlsGroupCtrl 103;		_valueYear = _value param [0,1985];		_valueMonth = _value param [1,1];		_valueDay = _value param [2,1];		for '_i' from 0 to (lbsize _ctrlYear - 1) do {if ((_ctrlYear lbvalue _i) == _valueYear) then {_ctrlYear lbsetcursel _i;};};		for '_i' from 0 to (lbsize _ctrlMonth - 1) do {if ((_ctrlMonth lbvalue _i) == _valueMonth) then {_ctrlMonth lbsetcursel _i;};};		for '_i' from 0 to (lbsize _ctrlDay - 1) do {if ((_ctrlDay lbvalue _i) == _valueDay) then {_ctrlDay lbsetcursel _i;};};	";
			attributeSave = "		_ctrlYear = _this controlsGroupCtrl 101;		_ctrlMonth = _this controlsGroupCtrl 102;		_ctrlDay = _this controlsGroupCtrl 103;		[_ctrlYear lbvalue lbcursel _ctrlYear,_ctrlMonth lbvalue lbcursel _ctrlMonth,_ctrlDay lbvalue lbcursel _ctrlDay]	";
			idc = 100;
			class Controls: Controls
			{
				class Title: Title {};
				class ValueDay: ValueYear
				{
					idc = 103;
					onLbSelChanged = "				_this spawn {					disableserialization;					_ctrlGroup = ctrlParentControlsGroup (_this select 0);					_ctrlYear = _ctrlGroup controlsGroupCtrl 101;					_ctrlMonth = _ctrlGroup controlsGroupCtrl 102;					_ctrlDay = _ctrlGroup controlsGroupCtrl 103;					_date = [_ctrlYear lbvalue lbcursel _ctrlYear,_ctrlMonth lbvalue lbcursel _ctrlMonth,_ctrlDay lbvalue lbcursel _ctrlDay,12,0];					_sunriseSunsetTime = _date call bis_fnc_sunriseSunsetTime;					_sunriseTime = _sunriseSunsetTime select 0;					_sunsetTime = _sunriseSunsetTime select 1;					_ctrlPreviewGroup = uinamespace getvariable ['AttributeSliderTimeDay_group',controlnull];					_ctrlPreviewNight1 = _ctrlPreviewGroup controlsGroupCtrl 111;					_ctrlPreviewNight2 = _ctrlPreviewGroup controlsGroupCtrl 112;					_ctrlPreviewDay = _ctrlPreviewGroup controlsGroupCtrl 113;					_ctrlPreviewSunrise = _ctrlPreviewGroup controlsGroupCtrl 114;					_ctrlPreviewSunset = _ctrlPreviewGroup controlsGroupCtrl 115;					_ctrlPreviewSun = _ctrlPreviewGroup controlsGroupCtrl 116;					_ctrlPreviewSunrisePos = ctrlposition _ctrlPreviewSunrise;					_ctrlPreviewSunsetPos = ctrlposition _ctrlPreviewSunset;					_ctrlPreviewNight1Pos = ctrlposition _ctrlPreviewNight1;					_ctrlPreviewNight2Pos = ctrlposition _ctrlPreviewNight2;					_ctrlPreviewDayPos = ctrlposition _ctrlPreviewDay;					_w = ctrlposition _ctrlPreviewGroup select 2;					_ww = (ctrlposition _ctrlPreviewSunrise select 2) * 0.5;					if (_sunriseTime >= 0 && _sunsetTime >= 0) then {						_ctrlPreviewSunrisePos set [0,(_sunriseTime / 24) * _w - _ww];						_ctrlPreviewSunsetPos set [0,(_sunsetTime / 24) * _w - _ww];						_ctrlPreviewNight1Pos set [2,_ctrlPreviewSunrisePos select 0];						_ctrlPreviewNight2Pos set [0,(_ctrlPreviewSunsetPos select 0) + (_ctrlPreviewSunsetPos select 2)];						_ctrlPreviewNight2Pos set [2,_w - (_ctrlPreviewNight2Pos select 0)];						_ctrlPreviewDayPos set [0,(_ctrlPreviewSunrisePos select 0) + (_ctrlPreviewSunrisePos select 2)];						_ctrlPreviewDayPos set [2,(_ctrlPreviewSunsetPos select 0) - (_ctrlPreviewSunrisePos select 0) - (_ctrlPreviewSunrisePos select 2)];						_ctrlPreviewSun ctrlshow true;					} else {						_ctrlPreviewSunrisePos set [0,-1];						_ctrlPreviewSunsetPos set [0,-1];						_ctrlPreviewNight2Pos set [2,0];						if (_sunriseTime < 0) then {							_ctrlPreviewNight1Pos set [2,_w];							_ctrlPreviewDayPos set [2,0];							_ctrlPreviewSun ctrlshow false;						} else {							_ctrlPreviewNight1Pos set [2,0];							_ctrlPreviewDayPos set [0,0];							_ctrlPreviewDayPos set [2,_w];							_ctrlPreviewSun ctrlshow true;						};					};					_ctrlPreviewSunrise ctrlsetposition _ctrlPreviewSunrisePos;					_ctrlPreviewSunrise ctrlcommit 0;					_ctrlPreviewSunset ctrlsetposition _ctrlPreviewSunsetPos;					_ctrlPreviewSunset ctrlcommit 0;					_ctrlPreviewNight1 ctrlsetposition _ctrlPreviewNight1Pos;					_ctrlPreviewNight1 ctrlcommit 0;					_ctrlPreviewNight2 ctrlsetposition _ctrlPreviewNight2Pos;					_ctrlPreviewNight2 ctrlcommit 0;					_ctrlPreviewDay ctrlsetposition _ctrlPreviewDayPos;					_ctrlPreviewDay ctrlcommit 0;					[_ctrlGroup,_date] call bis_fnc_3DENIntel;				};			";
					onLoad = "";
					x = "(	48 + 	82 * (2/3)) * (pixelW * pixelGrid * 	0.50) - pixelW";
				};
				class ValueMonth: ValueYear
				{
					idc = 102;
					onLoad = "";
					x = "(	48 + 	82 * (1/3)) * (pixelW * pixelGrid * 	0.50)";
					class Items
					{
						class Month1
						{
							text = "January";
							value = 1;
						};
						class Month10
						{
							text = "October";
							value = 10;
						};
						class Month11
						{
							text = "November";
							value = 11;
						};
						class Month12
						{
							text = "December";
							value = 12;
						};
						class Month2
						{
							text = "February";
							value = 2;
						};
						class Month3
						{
							text = "March";
							value = 3;
						};
						class Month4
						{
							text = "April";
							value = 4;
						};
						class Month5
						{
							text = "May";
							value = 5;
						};
						class Month6
						{
							text = "June";
							value = 6;
						};
						class Month7
						{
							default = 1;
							text = "July";
							value = 7;
						};
						class Month8
						{
							text = "August";
							value = 8;
						};
						class Month9
						{
							text = "September";
							value = 9;
						};
					};
				};
				class ValueYear: ctrlCombo
				{
					colorTextRight[] = {1, 1, 1, 0.6};
					h = "5 * (pixelH * pixelGrid * 	0.50)";
					idc = 101;
					onLbSelChanged = "				_ctrlGroup = ctrlParentControlsGroup (_this select 0);				_ctrlYear = _ctrlGroup controlsGroupCtrl 101;				_ctrlMonth = _ctrlGroup controlsGroupCtrl 102;				_ctrlDay = _ctrlGroup controlsGroupCtrl 103;				_year = _ctrlYear lbvalue lbcursel _ctrlYear;				_month = _ctrlMonth lbvalue lbcursel _ctrlMonth;				_isLeapYear = false;				_days = switch _month do {					case 1: {31};					case 2: {						if ((_year % 4 == 0 && _year % 100 != 0) || (_year % 400 == 0)) then {_isLeapYear = true; 29} else {28};					};					case 3: {31};					case 4: {30};					case 5: {31};					case 6: {30};					case 7: {31};					case 8: {31};					case 9: {30};					case 10: {31};					case 11: {30};					case 12: {31};					default {0};				};				if (_days == 0) exitwith {};				_yearID = _year % 100;				_monthID = [if (_isLeapYear) then {6} else {0},if (_isLeapYear) then {2} else {3},3,6,1,4,6,2,5,0,3,5] select (_month - 1);				_centuryID = [6,4,2,0] select (((_year - _yearID) / 100) % 4);				_dayID = 1;				_weekDay = floor (_dayID + _monthID + _yearID + _yearID / 4 + _centuryID) % 7;				_dayNames = [					'str_sunday',					'str_monday',					'str_tuesday',					'str_wednesday',					'str_thursday',					'str_friday',					'str_saturday'				];								_cursel = lbcursel _ctrlDay;				lbclear _ctrlDay;				_dPicture = -100;				for '_d' from 1 to _days do {					_weekDayID = round ((_weekDay + _d - 1) % 7);					_lbadd = _ctrlDay lbadd str _d;					_ctrlDay lbsetvalue [_lbadd,_d];					_ctrlDay lbsettextright [_lbadd,localize (_dayNames select _weekDayID)];					_pictureRight = '#(argb,8,8,3)color(0,0,0,0)';					if !(_weekDayID in [0,6]) then {_ctrlDay lbsetcolorright [_lbadd,[1,1,1,0.25]];};					if (([_year,_month,_d] distance [2013,9,12]) == 0) then {_RC = [_lbadd,[1,0.75,0,1]]; _ctrlDay lbsetcolor _RC; _ctrlDay lbsetcolorright _RC; _ctrlDay lbsetpicturerightcolor _RC; _ctrlDay lbsettooltip [_lbadd,localize 'STR_A3_cfgmods_a32_rc']; _pictureRight = gettext (configfile >> 'Cfg3DEN' >> 'Favorites' >> 'Mode' >> 'texture');};					_moonPhase = moonphase [_year,_month,_d,0,0];					if ((_d - _dPicture) > 5 && _moonPhase > 0.964) then {_pictureRight = '\a3\3DEN\Data\Attributes\Date\moon_full_ca.paa'; _dPicture = _d;};					if ((_d - _dPicture) > 5 && _moonPhase < 0.036) then {_pictureRight = '\a3\3DEN\Data\Attributes\Date\moon_new_ca.paa'; _dPicture = _d;};					_ctrlDay lbsetpictureright [_lbadd,_pictureRight];				};				_ctrlDay lbsetcursel (_cursel min (lbsize _ctrlDay - 1));			";
					onLoad = "				_ctrlYear = _this select 0;				for '_y' from 1982 to 2050 do {					_lbadd = _ctrlYear lbadd str _y;					_ctrlYear lbsetvalue [_lbadd,_y];				};				_ctrlYear lbsetcursel 53;			";
					w = "(	82 / 3) * (pixelW * pixelGrid * 	0.50)";
					x = "(	48) * (pixelW * pixelGrid * 	0.50)";
				};
			};
		};
		class Default: ctrlControlsGroupNoScrollbars
		{
			attributeLoad = "";
			attributeSave = "";
			h = "5 * (pixelH * pixelGrid * 	0.50)";
			w = "(	48 + 	82) * (pixelW * pixelGrid * 	0.50) + pixelW";
		};
		class DoorStates: Title
		{
			attributeLoad = "['attributeLoad',get3DENSelected 'object' select 0,_this,_value] call bis_fnc_3DENAttributeDoorStates";
			attributeSave = "['attributeSave',get3DENSelected 'object' select 0,_this] call bis_fnc_3DENAttributeDoorStates";
			h = "3 * (							2 * 																	5						 * (pixelH * pixelGrid * 	0.50) + 								1 * 																	5						 * (pixelH * pixelGrid * 	0.50))";
			class Controls: Controls
			{
				class Title: Title
				{
					colorBackground[] = {0, 0, 0, 0};
					h = "3 * (							2 * 																	5						 * (pixelH * pixelGrid * 	0.50) + 								1 * 																	5						 * (pixelH * pixelGrid * 	0.50))";
					idc = 99;
				};
				class Value: ctrlControlsGroupNoScrollbars
				{
					h = "3 * (							2 * 																	5						 * (pixelH * pixelGrid * 	0.50) + 								1 * 																	5						 * (pixelH * pixelGrid * 	0.50))";
					idc = 100;
					w = "80 * (pixelW * pixelGrid * 	0.50)";
					x = "48 * (pixelW * pixelGrid * 	0.50)";
					class Controls
					{
						class Checkbox1: ctrlActivePicture
						{
							color[] = {1, 1, 1, 1};
							colorActive[] = {1, 1, 1, 1};
							colorBackground[] = {0, 0, 0, 0.25};
							colorDisabled[] = {1, 1, 1, 1};
							h = "2 * 																	5						 * (pixelH * pixelGrid * 	0.50) - 							pixelH";
							idc = "100+1";
							onMouseButtonDown = "['onMouseButtonUp',get3DENSelected 'object' select 0,_this] call bis_fnc_3DENAttributeDoorStates";
							text = "\A3\Modules_F\Data\EditTerrainObject\textureDoor_closed_ca.paa";
							w = "2 * 																	5						 * (pixelW * pixelGrid * 	0.50) - 							pixelW";
							x = "(1-1) * 							2 * 																	5						 * (pixelW * pixelGrid * 	0.50)";
							y = 0;
						};
						class Checkbox10: Checkbox1
						{
							idc = "100+10";
							x = "(10-9) * 							2 * 																	5						 * (pixelW * pixelGrid * 	0.50)";
							y = "2 * 																	5						 * (pixelH * pixelGrid * 	0.50) + 								1 * 																	5						 * (pixelH * pixelGrid * 	0.50)";
						};
						class Checkbox11: Checkbox1
						{
							idc = "100+11";
							x = "(11-9) * 							2 * 																	5						 * (pixelW * pixelGrid * 	0.50)";
							y = "2 * 																	5						 * (pixelH * pixelGrid * 	0.50) + 								1 * 																	5						 * (pixelH * pixelGrid * 	0.50)";
						};
						class Checkbox12: Checkbox1
						{
							idc = "100+12";
							x = "(12-9) * 							2 * 																	5						 * (pixelW * pixelGrid * 	0.50)";
							y = "2 * 																	5						 * (pixelH * pixelGrid * 	0.50) + 								1 * 																	5						 * (pixelH * pixelGrid * 	0.50)";
						};
						class Checkbox13: Checkbox1
						{
							idc = "100+13";
							x = "(13-9) * 							2 * 																	5						 * (pixelW * pixelGrid * 	0.50)";
							y = "2 * 																	5						 * (pixelH * pixelGrid * 	0.50) + 								1 * 																	5						 * (pixelH * pixelGrid * 	0.50)";
						};
						class Checkbox14: Checkbox1
						{
							idc = "100+14";
							x = "(14-9) * 							2 * 																	5						 * (pixelW * pixelGrid * 	0.50)";
							y = "2 * 																	5						 * (pixelH * pixelGrid * 	0.50) + 								1 * 																	5						 * (pixelH * pixelGrid * 	0.50)";
						};
						class Checkbox15: Checkbox1
						{
							idc = "100+15";
							x = "(15-9) * 							2 * 																	5						 * (pixelW * pixelGrid * 	0.50)";
							y = "2 * 																	5						 * (pixelH * pixelGrid * 	0.50) + 								1 * 																	5						 * (pixelH * pixelGrid * 	0.50)";
						};
						class Checkbox16: Checkbox1
						{
							idc = "100+16";
							x = "(16-9) * 							2 * 																	5						 * (pixelW * pixelGrid * 	0.50)";
							y = "2 * 																	5						 * (pixelH * pixelGrid * 	0.50) + 								1 * 																	5						 * (pixelH * pixelGrid * 	0.50)";
						};
						class Checkbox17: Checkbox1
						{
							idc = "100+17";
							x = "(17-17) * 							2 * 																	5						 * (pixelW * pixelGrid * 	0.50)";
							y = "2 * (							2 * 																	5						 * (pixelH * pixelGrid * 	0.50) + 								1 * 																	5						 * (pixelH * pixelGrid * 	0.50))";
						};
						class Checkbox18: Checkbox1
						{
							idc = "100+18";
							x = "(18-17) * 							2 * 																	5						 * (pixelW * pixelGrid * 	0.50)";
							y = "2 * (							2 * 																	5						 * (pixelH * pixelGrid * 	0.50) + 								1 * 																	5						 * (pixelH * pixelGrid * 	0.50))";
						};
						class Checkbox19: Checkbox1
						{
							idc = "100+19";
							x = "(19-17) * 							2 * 																	5						 * (pixelW * pixelGrid * 	0.50)";
							y = "2 * (							2 * 																	5						 * (pixelH * pixelGrid * 	0.50) + 								1 * 																	5						 * (pixelH * pixelGrid * 	0.50))";
						};
						class Checkbox2: ctrlActivePicture
						{
							color[] = {1, 1, 1, 1};
							colorActive[] = {1, 1, 1, 1};
							colorBackground[] = {0, 0, 0, 0.25};
							colorDisabled[] = {1, 1, 1, 1};
							h = "2 * 																	5						 * (pixelH * pixelGrid * 	0.50) - 							pixelH";
							idc = "100+2";
							onMouseButtonDown = "['onMouseButtonUp',get3DENSelected 'object' select 0,_this] call bis_fnc_3DENAttributeDoorStates";
							text = "\A3\Modules_F\Data\EditTerrainObject\textureDoor_closed_ca.paa";
							w = "2 * 																	5						 * (pixelW * pixelGrid * 	0.50) - 							pixelW";
							x = "(2-1) * 							2 * 																	5						 * (pixelW * pixelGrid * 	0.50)";
							y = 0;
						};
						class Checkbox20: Checkbox1
						{
							idc = "100+20";
							x = "(20-17) * 							2 * 																	5						 * (pixelW * pixelGrid * 	0.50)";
							y = "2 * (							2 * 																	5						 * (pixelH * pixelGrid * 	0.50) + 								1 * 																	5						 * (pixelH * pixelGrid * 	0.50))";
						};
						class Checkbox21: Checkbox1
						{
							idc = "100+21";
							x = "(21-17) * 							2 * 																	5						 * (pixelW * pixelGrid * 	0.50)";
							y = "2 * (							2 * 																	5						 * (pixelH * pixelGrid * 	0.50) + 								1 * 																	5						 * (pixelH * pixelGrid * 	0.50))";
						};
						class Checkbox22: Checkbox1
						{
							idc = "100+22";
							x = "(22-17) * 							2 * 																	5						 * (pixelW * pixelGrid * 	0.50)";
							y = "2 * (							2 * 																	5						 * (pixelH * pixelGrid * 	0.50) + 								1 * 																	5						 * (pixelH * pixelGrid * 	0.50))";
						};
						class Checkbox23: Checkbox1
						{
							idc = "100+23";
							x = "(23-17) * 							2 * 																	5						 * (pixelW * pixelGrid * 	0.50)";
							y = "2 * (							2 * 																	5						 * (pixelH * pixelGrid * 	0.50) + 								1 * 																	5						 * (pixelH * pixelGrid * 	0.50))";
						};
						class Checkbox24: Checkbox1
						{
							idc = "100+24";
							x = "(24-17) * 							2 * 																	5						 * (pixelW * pixelGrid * 	0.50)";
							y = "2 * (							2 * 																	5						 * (pixelH * pixelGrid * 	0.50) + 								1 * 																	5						 * (pixelH * pixelGrid * 	0.50))";
						};
						class Checkbox3: ctrlActivePicture
						{
							color[] = {1, 1, 1, 1};
							colorActive[] = {1, 1, 1, 1};
							colorBackground[] = {0, 0, 0, 0.25};
							colorDisabled[] = {1, 1, 1, 1};
							h = "2 * 																	5						 * (pixelH * pixelGrid * 	0.50) - 							pixelH";
							idc = "100+3";
							onMouseButtonDown = "['onMouseButtonUp',get3DENSelected 'object' select 0,_this] call bis_fnc_3DENAttributeDoorStates";
							text = "\A3\Modules_F\Data\EditTerrainObject\textureDoor_closed_ca.paa";
							w = "2 * 																	5						 * (pixelW * pixelGrid * 	0.50) - 							pixelW";
							x = "(3-1) * 							2 * 																	5						 * (pixelW * pixelGrid * 	0.50)";
							y = 0;
						};
						class Checkbox4: ctrlActivePicture
						{
							color[] = {1, 1, 1, 1};
							colorActive[] = {1, 1, 1, 1};
							colorBackground[] = {0, 0, 0, 0.25};
							colorDisabled[] = {1, 1, 1, 1};
							h = "2 * 																	5						 * (pixelH * pixelGrid * 	0.50) - 							pixelH";
							idc = "100+4";
							onMouseButtonDown = "['onMouseButtonUp',get3DENSelected 'object' select 0,_this] call bis_fnc_3DENAttributeDoorStates";
							text = "\A3\Modules_F\Data\EditTerrainObject\textureDoor_closed_ca.paa";
							w = "2 * 																	5						 * (pixelW * pixelGrid * 	0.50) - 							pixelW";
							x = "(4-1) * 							2 * 																	5						 * (pixelW * pixelGrid * 	0.50)";
							y = 0;
						};
						class Checkbox5: ctrlActivePicture
						{
							color[] = {1, 1, 1, 1};
							colorActive[] = {1, 1, 1, 1};
							colorBackground[] = {0, 0, 0, 0.25};
							colorDisabled[] = {1, 1, 1, 1};
							h = "2 * 																	5						 * (pixelH * pixelGrid * 	0.50) - 							pixelH";
							idc = "100+5";
							onMouseButtonDown = "['onMouseButtonUp',get3DENSelected 'object' select 0,_this] call bis_fnc_3DENAttributeDoorStates";
							text = "\A3\Modules_F\Data\EditTerrainObject\textureDoor_closed_ca.paa";
							w = "2 * 																	5						 * (pixelW * pixelGrid * 	0.50) - 							pixelW";
							x = "(5-1) * 							2 * 																	5						 * (pixelW * pixelGrid * 	0.50)";
							y = 0;
						};
						class Checkbox6: ctrlActivePicture
						{
							color[] = {1, 1, 1, 1};
							colorActive[] = {1, 1, 1, 1};
							colorBackground[] = {0, 0, 0, 0.25};
							colorDisabled[] = {1, 1, 1, 1};
							h = "2 * 																	5						 * (pixelH * pixelGrid * 	0.50) - 							pixelH";
							idc = "100+6";
							onMouseButtonDown = "['onMouseButtonUp',get3DENSelected 'object' select 0,_this] call bis_fnc_3DENAttributeDoorStates";
							text = "\A3\Modules_F\Data\EditTerrainObject\textureDoor_closed_ca.paa";
							w = "2 * 																	5						 * (pixelW * pixelGrid * 	0.50) - 							pixelW";
							x = "(6-1) * 							2 * 																	5						 * (pixelW * pixelGrid * 	0.50)";
							y = 0;
						};
						class Checkbox7: ctrlActivePicture
						{
							color[] = {1, 1, 1, 1};
							colorActive[] = {1, 1, 1, 1};
							colorBackground[] = {0, 0, 0, 0.25};
							colorDisabled[] = {1, 1, 1, 1};
							h = "2 * 																	5						 * (pixelH * pixelGrid * 	0.50) - 							pixelH";
							idc = "100+7";
							onMouseButtonDown = "['onMouseButtonUp',get3DENSelected 'object' select 0,_this] call bis_fnc_3DENAttributeDoorStates";
							text = "\A3\Modules_F\Data\EditTerrainObject\textureDoor_closed_ca.paa";
							w = "2 * 																	5						 * (pixelW * pixelGrid * 	0.50) - 							pixelW";
							x = "(7-1) * 							2 * 																	5						 * (pixelW * pixelGrid * 	0.50)";
							y = 0;
						};
						class Checkbox8: ctrlActivePicture
						{
							color[] = {1, 1, 1, 1};
							colorActive[] = {1, 1, 1, 1};
							colorBackground[] = {0, 0, 0, 0.25};
							colorDisabled[] = {1, 1, 1, 1};
							h = "2 * 																	5						 * (pixelH * pixelGrid * 	0.50) - 							pixelH";
							idc = "100+8";
							onMouseButtonDown = "['onMouseButtonUp',get3DENSelected 'object' select 0,_this] call bis_fnc_3DENAttributeDoorStates";
							text = "\A3\Modules_F\Data\EditTerrainObject\textureDoor_closed_ca.paa";
							w = "2 * 																	5						 * (pixelW * pixelGrid * 	0.50) - 							pixelW";
							x = "(8-1) * 							2 * 																	5						 * (pixelW * pixelGrid * 	0.50)";
							y = 0;
						};
						class Checkbox9: Checkbox1
						{
							idc = "100+9";
							x = "(9-9) * 							2 * 																	5						 * (pixelW * pixelGrid * 	0.50)";
							y = "2 * 																	5						 * (pixelH * pixelGrid * 	0.50) + 								1 * 																	5						 * (pixelH * pixelGrid * 	0.50)";
						};
						class CheckboxBackground1: ctrlStatic
						{
							colorBackground[] = {0, 0, 0, 0.25};
							colorShadow[] = {0, 0, 0, 0};
							colorText[] = {1, 1, 1, 0.5};
							h = "2 * 																	5						 * (pixelH * pixelGrid * 	0.50) - 							pixelH";
							idc = "125+1";
							onLoad = "(_this select 0) ctrlEnable false;";
							shadow = 0;
							style = 2;
							text = "";
							type = 0;
							w = "2 * 																	5						 * (pixelW * pixelGrid * 	0.50) - 							pixelW";
							x = "(1-1) * 							2 * 																	5						 * (pixelW * pixelGrid * 	0.50)";
							y = 0;
						};
						class CheckboxBackground10: CheckboxBackground1
						{
							idc = "125+10";
							x = "(10-9) * 							2 * 																	5						 * (pixelW * pixelGrid * 	0.50)";
							y = "2 * 																	5						 * (pixelH * pixelGrid * 	0.50) + 								1 * 																	5						 * (pixelH * pixelGrid * 	0.50)";
						};
						class CheckboxBackground11: CheckboxBackground1
						{
							idc = "125+11";
							x = "(11-9) * 							2 * 																	5						 * (pixelW * pixelGrid * 	0.50)";
							y = "2 * 																	5						 * (pixelH * pixelGrid * 	0.50) + 								1 * 																	5						 * (pixelH * pixelGrid * 	0.50)";
						};
						class CheckboxBackground12: CheckboxBackground1
						{
							idc = "125+12";
							x = "(12-9) * 							2 * 																	5						 * (pixelW * pixelGrid * 	0.50)";
							y = "2 * 																	5						 * (pixelH * pixelGrid * 	0.50) + 								1 * 																	5						 * (pixelH * pixelGrid * 	0.50)";
						};
						class CheckboxBackground13: CheckboxBackground1
						{
							idc = "125+13";
							x = "(13-9) * 							2 * 																	5						 * (pixelW * pixelGrid * 	0.50)";
							y = "2 * 																	5						 * (pixelH * pixelGrid * 	0.50) + 								1 * 																	5						 * (pixelH * pixelGrid * 	0.50)";
						};
						class CheckboxBackground14: CheckboxBackground1
						{
							idc = "125+14";
							x = "(14-9) * 							2 * 																	5						 * (pixelW * pixelGrid * 	0.50)";
							y = "2 * 																	5						 * (pixelH * pixelGrid * 	0.50) + 								1 * 																	5						 * (pixelH * pixelGrid * 	0.50)";
						};
						class CheckboxBackground15: CheckboxBackground1
						{
							idc = "125+15";
							x = "(15-9) * 							2 * 																	5						 * (pixelW * pixelGrid * 	0.50)";
							y = "2 * 																	5						 * (pixelH * pixelGrid * 	0.50) + 								1 * 																	5						 * (pixelH * pixelGrid * 	0.50)";
						};
						class CheckboxBackground16: CheckboxBackground1
						{
							idc = "125+16";
							x = "(16-9) * 							2 * 																	5						 * (pixelW * pixelGrid * 	0.50)";
							y = "2 * 																	5						 * (pixelH * pixelGrid * 	0.50) + 								1 * 																	5						 * (pixelH * pixelGrid * 	0.50)";
						};
						class CheckboxBackground17: CheckboxBackground1
						{
							idc = "125+17";
							x = "(17-17) * 							2 * 																	5						 * (pixelW * pixelGrid * 	0.50)";
							y = "2 * (							2 * 																	5						 * (pixelH * pixelGrid * 	0.50) + 								1 * 																	5						 * (pixelH * pixelGrid * 	0.50))";
						};
						class CheckboxBackground18: CheckboxBackground1
						{
							idc = "125+18";
							x = "(18-17) * 							2 * 																	5						 * (pixelW * pixelGrid * 	0.50)";
							y = "2 * (							2 * 																	5						 * (pixelH * pixelGrid * 	0.50) + 								1 * 																	5						 * (pixelH * pixelGrid * 	0.50))";
						};
						class CheckboxBackground19: CheckboxBackground1
						{
							idc = "125+19";
							x = "(19-17) * 							2 * 																	5						 * (pixelW * pixelGrid * 	0.50)";
							y = "2 * (							2 * 																	5						 * (pixelH * pixelGrid * 	0.50) + 								1 * 																	5						 * (pixelH * pixelGrid * 	0.50))";
						};
						class CheckboxBackground2: ctrlStatic
						{
							colorBackground[] = {0, 0, 0, 0.25};
							colorShadow[] = {0, 0, 0, 0};
							colorText[] = {1, 1, 1, 0.5};
							h = "2 * 																	5						 * (pixelH * pixelGrid * 	0.50) - 							pixelH";
							idc = "125+2";
							onLoad = "(_this select 0) ctrlEnable false;";
							shadow = 0;
							style = 2;
							text = "";
							type = 0;
							w = "2 * 																	5						 * (pixelW * pixelGrid * 	0.50) - 							pixelW";
							x = "(2-1) * 							2 * 																	5						 * (pixelW * pixelGrid * 	0.50)";
							y = 0;
						};
						class CheckboxBackground20: CheckboxBackground1
						{
							idc = "125+20";
							x = "(20-17) * 							2 * 																	5						 * (pixelW * pixelGrid * 	0.50)";
							y = "2 * (							2 * 																	5						 * (pixelH * pixelGrid * 	0.50) + 								1 * 																	5						 * (pixelH * pixelGrid * 	0.50))";
						};
						class CheckboxBackground21: CheckboxBackground1
						{
							idc = "125+21";
							x = "(21-17) * 							2 * 																	5						 * (pixelW * pixelGrid * 	0.50)";
							y = "2 * (							2 * 																	5						 * (pixelH * pixelGrid * 	0.50) + 								1 * 																	5						 * (pixelH * pixelGrid * 	0.50))";
						};
						class CheckboxBackground22: CheckboxBackground1
						{
							idc = "125+22";
							x = "(22-17) * 							2 * 																	5						 * (pixelW * pixelGrid * 	0.50)";
							y = "2 * (							2 * 																	5						 * (pixelH * pixelGrid * 	0.50) + 								1 * 																	5						 * (pixelH * pixelGrid * 	0.50))";
						};
						class CheckboxBackground23: CheckboxBackground1
						{
							idc = "125+23";
							x = "(23-17) * 							2 * 																	5						 * (pixelW * pixelGrid * 	0.50)";
							y = "2 * (							2 * 																	5						 * (pixelH * pixelGrid * 	0.50) + 								1 * 																	5						 * (pixelH * pixelGrid * 	0.50))";
						};
						class CheckboxBackground24: CheckboxBackground1
						{
							idc = "125+24";
							x = "(24-17) * 							2 * 																	5						 * (pixelW * pixelGrid * 	0.50)";
							y = "2 * (							2 * 																	5						 * (pixelH * pixelGrid * 	0.50) + 								1 * 																	5						 * (pixelH * pixelGrid * 	0.50))";
						};
						class CheckboxBackground3: ctrlStatic
						{
							colorBackground[] = {0, 0, 0, 0.25};
							colorShadow[] = {0, 0, 0, 0};
							colorText[] = {1, 1, 1, 0.5};
							h = "2 * 																	5						 * (pixelH * pixelGrid * 	0.50) - 							pixelH";
							idc = "125+3";
							onLoad = "(_this select 0) ctrlEnable false;";
							shadow = 0;
							style = 2;
							text = "";
							type = 0;
							w = "2 * 																	5						 * (pixelW * pixelGrid * 	0.50) - 							pixelW";
							x = "(3-1) * 							2 * 																	5						 * (pixelW * pixelGrid * 	0.50)";
							y = 0;
						};
						class CheckboxBackground4: ctrlStatic
						{
							colorBackground[] = {0, 0, 0, 0.25};
							colorShadow[] = {0, 0, 0, 0};
							colorText[] = {1, 1, 1, 0.5};
							h = "2 * 																	5						 * (pixelH * pixelGrid * 	0.50) - 							pixelH";
							idc = "125+4";
							onLoad = "(_this select 0) ctrlEnable false;";
							shadow = 0;
							style = 2;
							text = "";
							type = 0;
							w = "2 * 																	5						 * (pixelW * pixelGrid * 	0.50) - 							pixelW";
							x = "(4-1) * 							2 * 																	5						 * (pixelW * pixelGrid * 	0.50)";
							y = 0;
						};
						class CheckboxBackground5: ctrlStatic
						{
							colorBackground[] = {0, 0, 0, 0.25};
							colorShadow[] = {0, 0, 0, 0};
							colorText[] = {1, 1, 1, 0.5};
							h = "2 * 																	5						 * (pixelH * pixelGrid * 	0.50) - 							pixelH";
							idc = "125+5";
							onLoad = "(_this select 0) ctrlEnable false;";
							shadow = 0;
							style = 2;
							text = "";
							type = 0;
							w = "2 * 																	5						 * (pixelW * pixelGrid * 	0.50) - 							pixelW";
							x = "(5-1) * 							2 * 																	5						 * (pixelW * pixelGrid * 	0.50)";
							y = 0;
						};
						class CheckboxBackground6: ctrlStatic
						{
							colorBackground[] = {0, 0, 0, 0.25};
							colorShadow[] = {0, 0, 0, 0};
							colorText[] = {1, 1, 1, 0.5};
							h = "2 * 																	5						 * (pixelH * pixelGrid * 	0.50) - 							pixelH";
							idc = "125+6";
							onLoad = "(_this select 0) ctrlEnable false;";
							shadow = 0;
							style = 2;
							text = "";
							type = 0;
							w = "2 * 																	5						 * (pixelW * pixelGrid * 	0.50) - 							pixelW";
							x = "(6-1) * 							2 * 																	5						 * (pixelW * pixelGrid * 	0.50)";
							y = 0;
						};
						class CheckboxBackground7: ctrlStatic
						{
							colorBackground[] = {0, 0, 0, 0.25};
							colorShadow[] = {0, 0, 0, 0};
							colorText[] = {1, 1, 1, 0.5};
							h = "2 * 																	5						 * (pixelH * pixelGrid * 	0.50) - 							pixelH";
							idc = "125+7";
							onLoad = "(_this select 0) ctrlEnable false;";
							shadow = 0;
							style = 2;
							text = "";
							type = 0;
							w = "2 * 																	5						 * (pixelW * pixelGrid * 	0.50) - 							pixelW";
							x = "(7-1) * 							2 * 																	5						 * (pixelW * pixelGrid * 	0.50)";
							y = 0;
						};
						class CheckboxBackground8: ctrlStatic
						{
							colorBackground[] = {0, 0, 0, 0.25};
							colorShadow[] = {0, 0, 0, 0};
							colorText[] = {1, 1, 1, 0.5};
							h = "2 * 																	5						 * (pixelH * pixelGrid * 	0.50) - 							pixelH";
							idc = "125+8";
							onLoad = "(_this select 0) ctrlEnable false;";
							shadow = 0;
							style = 2;
							text = "";
							type = 0;
							w = "2 * 																	5						 * (pixelW * pixelGrid * 	0.50) - 							pixelW";
							x = "(8-1) * 							2 * 																	5						 * (pixelW * pixelGrid * 	0.50)";
							y = 0;
						};
						class CheckboxBackground9: CheckboxBackground1
						{
							idc = "125+9";
							x = "(9-9) * 							2 * 																	5						 * (pixelW * pixelGrid * 	0.50)";
							y = "2 * 																	5						 * (pixelH * pixelGrid * 	0.50) + 								1 * 																	5						 * (pixelH * pixelGrid * 	0.50)";
						};
						class Text1: ctrlStatic
						{
							colorBackground[] = {0, 0, 0, 0.25};
							colorShadow[] = {0, 0, 0, 0};
							colorText[] = {1, 1, 1, 0.5};
							h = "1 * 																	5						 * (pixelH * pixelGrid * 	0.50) - 							pixelH";
							idc = "150+1";
							onLoad = "(_this select 0) ctrlEnable false;";
							shadow = 0;
							style = 2;
							text = 1;
							type = 0;
							w = "2 * 																	5						 * (pixelW * pixelGrid * 	0.50) - 							pixelW";
							x = "(1-1) * 								2 * 																	5						 * (pixelW * pixelGrid * 	0.50)";
							y = "2 * 																	5						 * (pixelH * pixelGrid * 	0.50)";
						};
						class Text10: Text1
						{
							idc = "150+10";
							text = 10;
							x = "(10-9) * 								2 * 																	5						 * (pixelW * pixelGrid * 	0.50)";
							y = "2 * 							2 * 																	5						 * (pixelH * pixelGrid * 	0.50) + 								1 * 																	5						 * (pixelH * pixelGrid * 	0.50)";
						};
						class Text11: Text1
						{
							idc = "150+11";
							text = 11;
							x = "(11-9) * 								2 * 																	5						 * (pixelW * pixelGrid * 	0.50)";
							y = "2 * 							2 * 																	5						 * (pixelH * pixelGrid * 	0.50) + 								1 * 																	5						 * (pixelH * pixelGrid * 	0.50)";
						};
						class Text12: Text1
						{
							idc = "150+12";
							text = 12;
							x = "(12-9) * 								2 * 																	5						 * (pixelW * pixelGrid * 	0.50)";
							y = "2 * 							2 * 																	5						 * (pixelH * pixelGrid * 	0.50) + 								1 * 																	5						 * (pixelH * pixelGrid * 	0.50)";
						};
						class Text13: Text1
						{
							idc = "150+13";
							text = 13;
							x = "(13-9) * 								2 * 																	5						 * (pixelW * pixelGrid * 	0.50)";
							y = "2 * 							2 * 																	5						 * (pixelH * pixelGrid * 	0.50) + 								1 * 																	5						 * (pixelH * pixelGrid * 	0.50)";
						};
						class Text14: Text1
						{
							idc = "150+14";
							text = 14;
							x = "(14-9) * 								2 * 																	5						 * (pixelW * pixelGrid * 	0.50)";
							y = "2 * 							2 * 																	5						 * (pixelH * pixelGrid * 	0.50) + 								1 * 																	5						 * (pixelH * pixelGrid * 	0.50)";
						};
						class Text15: Text1
						{
							idc = "150+15";
							text = 15;
							x = "(15-9) * 								2 * 																	5						 * (pixelW * pixelGrid * 	0.50)";
							y = "2 * 							2 * 																	5						 * (pixelH * pixelGrid * 	0.50) + 								1 * 																	5						 * (pixelH * pixelGrid * 	0.50)";
						};
						class Text16: Text1
						{
							idc = "150+16";
							text = 16;
							x = "(16-9) * 								2 * 																	5						 * (pixelW * pixelGrid * 	0.50)";
							y = "2 * 							2 * 																	5						 * (pixelH * pixelGrid * 	0.50) + 								1 * 																	5						 * (pixelH * pixelGrid * 	0.50)";
						};
						class Text17: Text1
						{
							idc = "150+17";
							text = 17;
							x = "(17-17) * 								2 * 																	5						 * (pixelW * pixelGrid * 	0.50)";
							y = "3 * 							2 * 																	5						 * (pixelH * pixelGrid * 	0.50) + 2 * 								1 * 																	5						 * (pixelH * pixelGrid * 	0.50)";
						};
						class Text18: Text1
						{
							idc = "150+18";
							text = 18;
							x = "(18-17) * 								2 * 																	5						 * (pixelW * pixelGrid * 	0.50)";
							y = "3 * 							2 * 																	5						 * (pixelH * pixelGrid * 	0.50) + 2 * 								1 * 																	5						 * (pixelH * pixelGrid * 	0.50)";
						};
						class Text19: Text1
						{
							idc = "150+19";
							text = 19;
							x = "(19-17) * 								2 * 																	5						 * (pixelW * pixelGrid * 	0.50)";
							y = "3 * 							2 * 																	5						 * (pixelH * pixelGrid * 	0.50) + 2 * 								1 * 																	5						 * (pixelH * pixelGrid * 	0.50)";
						};
						class Text2: ctrlStatic
						{
							colorBackground[] = {0, 0, 0, 0.25};
							colorShadow[] = {0, 0, 0, 0};
							colorText[] = {1, 1, 1, 0.5};
							h = "1 * 																	5						 * (pixelH * pixelGrid * 	0.50) - 							pixelH";
							idc = "150+2";
							onLoad = "(_this select 0) ctrlEnable false;";
							shadow = 0;
							style = 2;
							text = 2;
							type = 0;
							w = "2 * 																	5						 * (pixelW * pixelGrid * 	0.50) - 							pixelW";
							x = "(2-1) * 								2 * 																	5						 * (pixelW * pixelGrid * 	0.50)";
							y = "2 * 																	5						 * (pixelH * pixelGrid * 	0.50)";
						};
						class Text20: Text1
						{
							idc = "150+20";
							text = 20;
							x = "(20-17) * 								2 * 																	5						 * (pixelW * pixelGrid * 	0.50)";
							y = "3 * 							2 * 																	5						 * (pixelH * pixelGrid * 	0.50) + 2 * 								1 * 																	5						 * (pixelH * pixelGrid * 	0.50)";
						};
						class Text21: Text1
						{
							idc = "150+21";
							text = 21;
							x = "(21-17) * 								2 * 																	5						 * (pixelW * pixelGrid * 	0.50)";
							y = "3 * 							2 * 																	5						 * (pixelH * pixelGrid * 	0.50) + 2 * 								1 * 																	5						 * (pixelH * pixelGrid * 	0.50)";
						};
						class Text22: Text1
						{
							idc = "150+22";
							text = 22;
							x = "(22-17) * 								2 * 																	5						 * (pixelW * pixelGrid * 	0.50)";
							y = "3 * 							2 * 																	5						 * (pixelH * pixelGrid * 	0.50) + 2 * 								1 * 																	5						 * (pixelH * pixelGrid * 	0.50)";
						};
						class Text23: Text1
						{
							idc = "150+23";
							text = 23;
							x = "(23-17) * 								2 * 																	5						 * (pixelW * pixelGrid * 	0.50)";
							y = "3 * 							2 * 																	5						 * (pixelH * pixelGrid * 	0.50) + 2 * 								1 * 																	5						 * (pixelH * pixelGrid * 	0.50)";
						};
						class Text24: Text1
						{
							idc = "150+24";
							text = 24;
							x = "(24-17) * 								2 * 																	5						 * (pixelW * pixelGrid * 	0.50)";
							y = "3 * 							2 * 																	5						 * (pixelH * pixelGrid * 	0.50) + 2 * 								1 * 																	5						 * (pixelH * pixelGrid * 	0.50)";
						};
						class Text3: ctrlStatic
						{
							colorBackground[] = {0, 0, 0, 0.25};
							colorShadow[] = {0, 0, 0, 0};
							colorText[] = {1, 1, 1, 0.5};
							h = "1 * 																	5						 * (pixelH * pixelGrid * 	0.50) - 							pixelH";
							idc = "150+3";
							onLoad = "(_this select 0) ctrlEnable false;";
							shadow = 0;
							style = 2;
							text = 3;
							type = 0;
							w = "2 * 																	5						 * (pixelW * pixelGrid * 	0.50) - 							pixelW";
							x = "(3-1) * 								2 * 																	5						 * (pixelW * pixelGrid * 	0.50)";
							y = "2 * 																	5						 * (pixelH * pixelGrid * 	0.50)";
						};
						class Text4: ctrlStatic
						{
							colorBackground[] = {0, 0, 0, 0.25};
							colorShadow[] = {0, 0, 0, 0};
							colorText[] = {1, 1, 1, 0.5};
							h = "1 * 																	5						 * (pixelH * pixelGrid * 	0.50) - 							pixelH";
							idc = "150+4";
							onLoad = "(_this select 0) ctrlEnable false;";
							shadow = 0;
							style = 2;
							text = 4;
							type = 0;
							w = "2 * 																	5						 * (pixelW * pixelGrid * 	0.50) - 							pixelW";
							x = "(4-1) * 								2 * 																	5						 * (pixelW * pixelGrid * 	0.50)";
							y = "2 * 																	5						 * (pixelH * pixelGrid * 	0.50)";
						};
						class Text5: ctrlStatic
						{
							colorBackground[] = {0, 0, 0, 0.25};
							colorShadow[] = {0, 0, 0, 0};
							colorText[] = {1, 1, 1, 0.5};
							h = "1 * 																	5						 * (pixelH * pixelGrid * 	0.50) - 							pixelH";
							idc = "150+5";
							onLoad = "(_this select 0) ctrlEnable false;";
							shadow = 0;
							style = 2;
							text = 5;
							type = 0;
							w = "2 * 																	5						 * (pixelW * pixelGrid * 	0.50) - 							pixelW";
							x = "(5-1) * 								2 * 																	5						 * (pixelW * pixelGrid * 	0.50)";
							y = "2 * 																	5						 * (pixelH * pixelGrid * 	0.50)";
						};
						class Text6: ctrlStatic
						{
							colorBackground[] = {0, 0, 0, 0.25};
							colorShadow[] = {0, 0, 0, 0};
							colorText[] = {1, 1, 1, 0.5};
							h = "1 * 																	5						 * (pixelH * pixelGrid * 	0.50) - 							pixelH";
							idc = "150+6";
							onLoad = "(_this select 0) ctrlEnable false;";
							shadow = 0;
							style = 2;
							text = 6;
							type = 0;
							w = "2 * 																	5						 * (pixelW * pixelGrid * 	0.50) - 							pixelW";
							x = "(6-1) * 								2 * 																	5						 * (pixelW * pixelGrid * 	0.50)";
							y = "2 * 																	5						 * (pixelH * pixelGrid * 	0.50)";
						};
						class Text7: ctrlStatic
						{
							colorBackground[] = {0, 0, 0, 0.25};
							colorShadow[] = {0, 0, 0, 0};
							colorText[] = {1, 1, 1, 0.5};
							h = "1 * 																	5						 * (pixelH * pixelGrid * 	0.50) - 							pixelH";
							idc = "150+7";
							onLoad = "(_this select 0) ctrlEnable false;";
							shadow = 0;
							style = 2;
							text = 7;
							type = 0;
							w = "2 * 																	5						 * (pixelW * pixelGrid * 	0.50) - 							pixelW";
							x = "(7-1) * 								2 * 																	5						 * (pixelW * pixelGrid * 	0.50)";
							y = "2 * 																	5						 * (pixelH * pixelGrid * 	0.50)";
						};
						class Text8: ctrlStatic
						{
							colorBackground[] = {0, 0, 0, 0.25};
							colorShadow[] = {0, 0, 0, 0};
							colorText[] = {1, 1, 1, 0.5};
							h = "1 * 																	5						 * (pixelH * pixelGrid * 	0.50) - 							pixelH";
							idc = "150+8";
							onLoad = "(_this select 0) ctrlEnable false;";
							shadow = 0;
							style = 2;
							text = 8;
							type = 0;
							w = "2 * 																	5						 * (pixelW * pixelGrid * 	0.50) - 							pixelW";
							x = "(8-1) * 								2 * 																	5						 * (pixelW * pixelGrid * 	0.50)";
							y = "2 * 																	5						 * (pixelH * pixelGrid * 	0.50)";
						};
						class Text9: Text1
						{
							idc = "150+9";
							text = 9;
							x = "(9-9) * 								2 * 																	5						 * (pixelW * pixelGrid * 	0.50)";
							y = "2 * 							2 * 																	5						 * (pixelH * pixelGrid * 	0.50) + 								1 * 																	5						 * (pixelH * pixelGrid * 	0.50)";
						};
					};
				};
			};
		};
		class DoorStatesModule: Title
		{
			attributeLoad = "['objectDoors_attributeLoad',[get3DENSelected 'logic' select 0,_this,_value]] call bis_fnc_moduleEditTerrainObject";
			attributeSave = "['objectDoors_attributeSave',[get3DENSelected 'logic' select 0,_this]] call bis_fnc_moduleEditTerrainObject";
			h = "3 * (							2 * 																	5						 * (pixelH * pixelGrid * 	0.50) + 								1 * 																	5						 * (pixelH * pixelGrid * 	0.50))";
			class Controls: Controls
			{
				class Title: Title
				{
					colorBackground[] = {0, 0, 0, 0};
					h = "3 * (							2 * 																	5						 * (pixelH * pixelGrid * 	0.50) + 								1 * 																	5						 * (pixelH * pixelGrid * 	0.50))";
				};
				class Value: ctrlControlsGroupNoScrollbars
				{
					h = "3 * (							2 * 																	5						 * (pixelH * pixelGrid * 	0.50) + 								1 * 																	5						 * (pixelH * pixelGrid * 	0.50))";
					idc = 100;
					w = "80 * (pixelW * pixelGrid * 	0.50)";
					x = "48 * (pixelW * pixelGrid * 	0.50)";
					class Controls
					{
						class Checkbox1: ctrlActivePicture
						{
							color[] = {1, 1, 1, 1};
							colorActive[] = {1, 1, 1, 1};
							colorBackground[] = {0, 0, 0, 0.25};
							colorDisabled[] = {1, 1, 1, 1};
							h = "2 * 																	5						 * (pixelH * pixelGrid * 	0.50) - 							pixelH";
							idc = "100+1";
							onMouseButtonDown = "['objectDoors_onMouseButtonUp',[get3DENSelected 'logic' select 0,_this]] call bis_fnc_moduleEditTerrainObject";
							text = "\A3\Modules_F\Data\EditTerrainObject\textureDoor_closed_ca.paa";
							w = "2 * 																	5						 * (pixelW * pixelGrid * 	0.50) - 							pixelW";
							x = "(1-1) * 							2 * 																	5						 * (pixelW * pixelGrid * 	0.50)";
							y = 0;
						};
						class Checkbox10: Checkbox1
						{
							idc = "100+10";
							x = "(10-9) * 							2 * 																	5						 * (pixelW * pixelGrid * 	0.50)";
							y = "2 * 																	5						 * (pixelH * pixelGrid * 	0.50) + 								1 * 																	5						 * (pixelH * pixelGrid * 	0.50)";
						};
						class Checkbox11: Checkbox1
						{
							idc = "100+11";
							x = "(11-9) * 							2 * 																	5						 * (pixelW * pixelGrid * 	0.50)";
							y = "2 * 																	5						 * (pixelH * pixelGrid * 	0.50) + 								1 * 																	5						 * (pixelH * pixelGrid * 	0.50)";
						};
						class Checkbox12: Checkbox1
						{
							idc = "100+12";
							x = "(12-9) * 							2 * 																	5						 * (pixelW * pixelGrid * 	0.50)";
							y = "2 * 																	5						 * (pixelH * pixelGrid * 	0.50) + 								1 * 																	5						 * (pixelH * pixelGrid * 	0.50)";
						};
						class Checkbox13: Checkbox1
						{
							idc = "100+13";
							x = "(13-9) * 							2 * 																	5						 * (pixelW * pixelGrid * 	0.50)";
							y = "2 * 																	5						 * (pixelH * pixelGrid * 	0.50) + 								1 * 																	5						 * (pixelH * pixelGrid * 	0.50)";
						};
						class Checkbox14: Checkbox1
						{
							idc = "100+14";
							x = "(14-9) * 							2 * 																	5						 * (pixelW * pixelGrid * 	0.50)";
							y = "2 * 																	5						 * (pixelH * pixelGrid * 	0.50) + 								1 * 																	5						 * (pixelH * pixelGrid * 	0.50)";
						};
						class Checkbox15: Checkbox1
						{
							idc = "100+15";
							x = "(15-9) * 							2 * 																	5						 * (pixelW * pixelGrid * 	0.50)";
							y = "2 * 																	5						 * (pixelH * pixelGrid * 	0.50) + 								1 * 																	5						 * (pixelH * pixelGrid * 	0.50)";
						};
						class Checkbox16: Checkbox1
						{
							idc = "100+16";
							x = "(16-9) * 							2 * 																	5						 * (pixelW * pixelGrid * 	0.50)";
							y = "2 * 																	5						 * (pixelH * pixelGrid * 	0.50) + 								1 * 																	5						 * (pixelH * pixelGrid * 	0.50)";
						};
						class Checkbox17: Checkbox1
						{
							idc = "100+17";
							x = "(17-17) * 							2 * 																	5						 * (pixelW * pixelGrid * 	0.50)";
							y = "2 * (							2 * 																	5						 * (pixelH * pixelGrid * 	0.50) + 								1 * 																	5						 * (pixelH * pixelGrid * 	0.50))";
						};
						class Checkbox18: Checkbox1
						{
							idc = "100+18";
							x = "(18-17) * 							2 * 																	5						 * (pixelW * pixelGrid * 	0.50)";
							y = "2 * (							2 * 																	5						 * (pixelH * pixelGrid * 	0.50) + 								1 * 																	5						 * (pixelH * pixelGrid * 	0.50))";
						};
						class Checkbox19: Checkbox1
						{
							idc = "100+19";
							x = "(19-17) * 							2 * 																	5						 * (pixelW * pixelGrid * 	0.50)";
							y = "2 * (							2 * 																	5						 * (pixelH * pixelGrid * 	0.50) + 								1 * 																	5						 * (pixelH * pixelGrid * 	0.50))";
						};
						class Checkbox2: ctrlActivePicture
						{
							color[] = {1, 1, 1, 1};
							colorActive[] = {1, 1, 1, 1};
							colorBackground[] = {0, 0, 0, 0.25};
							colorDisabled[] = {1, 1, 1, 1};
							h = "2 * 																	5						 * (pixelH * pixelGrid * 	0.50) - 							pixelH";
							idc = "100+2";
							onMouseButtonDown = "['objectDoors_onMouseButtonUp',[get3DENSelected 'logic' select 0,_this]] call bis_fnc_moduleEditTerrainObject";
							text = "\A3\Modules_F\Data\EditTerrainObject\textureDoor_closed_ca.paa";
							w = "2 * 																	5						 * (pixelW * pixelGrid * 	0.50) - 							pixelW";
							x = "(2-1) * 							2 * 																	5						 * (pixelW * pixelGrid * 	0.50)";
							y = 0;
						};
						class Checkbox20: Checkbox1
						{
							idc = "100+20";
							x = "(20-17) * 							2 * 																	5						 * (pixelW * pixelGrid * 	0.50)";
							y = "2 * (							2 * 																	5						 * (pixelH * pixelGrid * 	0.50) + 								1 * 																	5						 * (pixelH * pixelGrid * 	0.50))";
						};
						class Checkbox21: Checkbox1
						{
							idc = "100+21";
							x = "(21-17) * 							2 * 																	5						 * (pixelW * pixelGrid * 	0.50)";
							y = "2 * (							2 * 																	5						 * (pixelH * pixelGrid * 	0.50) + 								1 * 																	5						 * (pixelH * pixelGrid * 	0.50))";
						};
						class Checkbox22: Checkbox1
						{
							idc = "100+22";
							x = "(22-17) * 							2 * 																	5						 * (pixelW * pixelGrid * 	0.50)";
							y = "2 * (							2 * 																	5						 * (pixelH * pixelGrid * 	0.50) + 								1 * 																	5						 * (pixelH * pixelGrid * 	0.50))";
						};
						class Checkbox23: Checkbox1
						{
							idc = "100+23";
							x = "(23-17) * 							2 * 																	5						 * (pixelW * pixelGrid * 	0.50)";
							y = "2 * (							2 * 																	5						 * (pixelH * pixelGrid * 	0.50) + 								1 * 																	5						 * (pixelH * pixelGrid * 	0.50))";
						};
						class Checkbox24: Checkbox1
						{
							idc = "100+24";
							x = "(24-17) * 							2 * 																	5						 * (pixelW * pixelGrid * 	0.50)";
							y = "2 * (							2 * 																	5						 * (pixelH * pixelGrid * 	0.50) + 								1 * 																	5						 * (pixelH * pixelGrid * 	0.50))";
						};
						class Checkbox3: ctrlActivePicture
						{
							color[] = {1, 1, 1, 1};
							colorActive[] = {1, 1, 1, 1};
							colorBackground[] = {0, 0, 0, 0.25};
							colorDisabled[] = {1, 1, 1, 1};
							h = "2 * 																	5						 * (pixelH * pixelGrid * 	0.50) - 							pixelH";
							idc = "100+3";
							onMouseButtonDown = "['objectDoors_onMouseButtonUp',[get3DENSelected 'logic' select 0,_this]] call bis_fnc_moduleEditTerrainObject";
							text = "\A3\Modules_F\Data\EditTerrainObject\textureDoor_closed_ca.paa";
							w = "2 * 																	5						 * (pixelW * pixelGrid * 	0.50) - 							pixelW";
							x = "(3-1) * 							2 * 																	5						 * (pixelW * pixelGrid * 	0.50)";
							y = 0;
						};
						class Checkbox4: ctrlActivePicture
						{
							color[] = {1, 1, 1, 1};
							colorActive[] = {1, 1, 1, 1};
							colorBackground[] = {0, 0, 0, 0.25};
							colorDisabled[] = {1, 1, 1, 1};
							h = "2 * 																	5						 * (pixelH * pixelGrid * 	0.50) - 							pixelH";
							idc = "100+4";
							onMouseButtonDown = "['objectDoors_onMouseButtonUp',[get3DENSelected 'logic' select 0,_this]] call bis_fnc_moduleEditTerrainObject";
							text = "\A3\Modules_F\Data\EditTerrainObject\textureDoor_closed_ca.paa";
							w = "2 * 																	5						 * (pixelW * pixelGrid * 	0.50) - 							pixelW";
							x = "(4-1) * 							2 * 																	5						 * (pixelW * pixelGrid * 	0.50)";
							y = 0;
						};
						class Checkbox5: ctrlActivePicture
						{
							color[] = {1, 1, 1, 1};
							colorActive[] = {1, 1, 1, 1};
							colorBackground[] = {0, 0, 0, 0.25};
							colorDisabled[] = {1, 1, 1, 1};
							h = "2 * 																	5						 * (pixelH * pixelGrid * 	0.50) - 							pixelH";
							idc = "100+5";
							onMouseButtonDown = "['objectDoors_onMouseButtonUp',[get3DENSelected 'logic' select 0,_this]] call bis_fnc_moduleEditTerrainObject";
							text = "\A3\Modules_F\Data\EditTerrainObject\textureDoor_closed_ca.paa";
							w = "2 * 																	5						 * (pixelW * pixelGrid * 	0.50) - 							pixelW";
							x = "(5-1) * 							2 * 																	5						 * (pixelW * pixelGrid * 	0.50)";
							y = 0;
						};
						class Checkbox6: ctrlActivePicture
						{
							color[] = {1, 1, 1, 1};
							colorActive[] = {1, 1, 1, 1};
							colorBackground[] = {0, 0, 0, 0.25};
							colorDisabled[] = {1, 1, 1, 1};
							h = "2 * 																	5						 * (pixelH * pixelGrid * 	0.50) - 							pixelH";
							idc = "100+6";
							onMouseButtonDown = "['objectDoors_onMouseButtonUp',[get3DENSelected 'logic' select 0,_this]] call bis_fnc_moduleEditTerrainObject";
							text = "\A3\Modules_F\Data\EditTerrainObject\textureDoor_closed_ca.paa";
							w = "2 * 																	5						 * (pixelW * pixelGrid * 	0.50) - 							pixelW";
							x = "(6-1) * 							2 * 																	5						 * (pixelW * pixelGrid * 	0.50)";
							y = 0;
						};
						class Checkbox7: ctrlActivePicture
						{
							color[] = {1, 1, 1, 1};
							colorActive[] = {1, 1, 1, 1};
							colorBackground[] = {0, 0, 0, 0.25};
							colorDisabled[] = {1, 1, 1, 1};
							h = "2 * 																	5						 * (pixelH * pixelGrid * 	0.50) - 							pixelH";
							idc = "100+7";
							onMouseButtonDown = "['objectDoors_onMouseButtonUp',[get3DENSelected 'logic' select 0,_this]] call bis_fnc_moduleEditTerrainObject";
							text = "\A3\Modules_F\Data\EditTerrainObject\textureDoor_closed_ca.paa";
							w = "2 * 																	5						 * (pixelW * pixelGrid * 	0.50) - 							pixelW";
							x = "(7-1) * 							2 * 																	5						 * (pixelW * pixelGrid * 	0.50)";
							y = 0;
						};
						class Checkbox8: ctrlActivePicture
						{
							color[] = {1, 1, 1, 1};
							colorActive[] = {1, 1, 1, 1};
							colorBackground[] = {0, 0, 0, 0.25};
							colorDisabled[] = {1, 1, 1, 1};
							h = "2 * 																	5						 * (pixelH * pixelGrid * 	0.50) - 							pixelH";
							idc = "100+8";
							onMouseButtonDown = "['objectDoors_onMouseButtonUp',[get3DENSelected 'logic' select 0,_this]] call bis_fnc_moduleEditTerrainObject";
							text = "\A3\Modules_F\Data\EditTerrainObject\textureDoor_closed_ca.paa";
							w = "2 * 																	5						 * (pixelW * pixelGrid * 	0.50) - 							pixelW";
							x = "(8-1) * 							2 * 																	5						 * (pixelW * pixelGrid * 	0.50)";
							y = 0;
						};
						class Checkbox9: Checkbox1
						{
							idc = "100+9";
							x = "(9-9) * 							2 * 																	5						 * (pixelW * pixelGrid * 	0.50)";
							y = "2 * 																	5						 * (pixelH * pixelGrid * 	0.50) + 								1 * 																	5						 * (pixelH * pixelGrid * 	0.50)";
						};
						class CheckboxBackground1: ctrlStatic
						{
							colorBackground[] = {0, 0, 0, 0.25};
							colorShadow[] = {0, 0, 0, 0};
							colorText[] = {1, 1, 1, 0.5};
							h = "2 * 																	5						 * (pixelH * pixelGrid * 	0.50) - 							pixelH";
							idc = -1;
							onLoad = "(_this select 0) ctrlEnable false;";
							shadow = 0;
							style = 2;
							text = "";
							type = 0;
							w = "2 * 																	5						 * (pixelW * pixelGrid * 	0.50) - 							pixelW";
							x = "(1-1) * 							2 * 																	5						 * (pixelW * pixelGrid * 	0.50)";
							y = 0;
						};
						class CheckboxBackground10: CheckboxBackground1
						{
							x = "(10-9) * 							2 * 																	5						 * (pixelW * pixelGrid * 	0.50)";
							y = "2 * 																	5						 * (pixelH * pixelGrid * 	0.50) + 								1 * 																	5						 * (pixelH * pixelGrid * 	0.50)";
						};
						class CheckboxBackground11: CheckboxBackground1
						{
							x = "(11-9) * 							2 * 																	5						 * (pixelW * pixelGrid * 	0.50)";
							y = "2 * 																	5						 * (pixelH * pixelGrid * 	0.50) + 								1 * 																	5						 * (pixelH * pixelGrid * 	0.50)";
						};
						class CheckboxBackground12: CheckboxBackground1
						{
							x = "(12-9) * 							2 * 																	5						 * (pixelW * pixelGrid * 	0.50)";
							y = "2 * 																	5						 * (pixelH * pixelGrid * 	0.50) + 								1 * 																	5						 * (pixelH * pixelGrid * 	0.50)";
						};
						class CheckboxBackground13: CheckboxBackground1
						{
							x = "(13-9) * 							2 * 																	5						 * (pixelW * pixelGrid * 	0.50)";
							y = "2 * 																	5						 * (pixelH * pixelGrid * 	0.50) + 								1 * 																	5						 * (pixelH * pixelGrid * 	0.50)";
						};
						class CheckboxBackground14: CheckboxBackground1
						{
							x = "(14-9) * 							2 * 																	5						 * (pixelW * pixelGrid * 	0.50)";
							y = "2 * 																	5						 * (pixelH * pixelGrid * 	0.50) + 								1 * 																	5						 * (pixelH * pixelGrid * 	0.50)";
						};
						class CheckboxBackground15: CheckboxBackground1
						{
							x = "(15-9) * 							2 * 																	5						 * (pixelW * pixelGrid * 	0.50)";
							y = "2 * 																	5						 * (pixelH * pixelGrid * 	0.50) + 								1 * 																	5						 * (pixelH * pixelGrid * 	0.50)";
						};
						class CheckboxBackground16: CheckboxBackground1
						{
							x = "(16-9) * 							2 * 																	5						 * (pixelW * pixelGrid * 	0.50)";
							y = "2 * 																	5						 * (pixelH * pixelGrid * 	0.50) + 								1 * 																	5						 * (pixelH * pixelGrid * 	0.50)";
						};
						class CheckboxBackground17: CheckboxBackground1
						{
							x = "(17-17) * 							2 * 																	5						 * (pixelW * pixelGrid * 	0.50)";
							y = "2 * (							2 * 																	5						 * (pixelH * pixelGrid * 	0.50) + 								1 * 																	5						 * (pixelH * pixelGrid * 	0.50))";
						};
						class CheckboxBackground18: CheckboxBackground1
						{
							x = "(18-17) * 							2 * 																	5						 * (pixelW * pixelGrid * 	0.50)";
							y = "2 * (							2 * 																	5						 * (pixelH * pixelGrid * 	0.50) + 								1 * 																	5						 * (pixelH * pixelGrid * 	0.50))";
						};
						class CheckboxBackground19: CheckboxBackground1
						{
							x = "(19-17) * 							2 * 																	5						 * (pixelW * pixelGrid * 	0.50)";
							y = "2 * (							2 * 																	5						 * (pixelH * pixelGrid * 	0.50) + 								1 * 																	5						 * (pixelH * pixelGrid * 	0.50))";
						};
						class CheckboxBackground2: ctrlStatic
						{
							colorBackground[] = {0, 0, 0, 0.25};
							colorShadow[] = {0, 0, 0, 0};
							colorText[] = {1, 1, 1, 0.5};
							h = "2 * 																	5						 * (pixelH * pixelGrid * 	0.50) - 							pixelH";
							idc = -1;
							onLoad = "(_this select 0) ctrlEnable false;";
							shadow = 0;
							style = 2;
							text = "";
							type = 0;
							w = "2 * 																	5						 * (pixelW * pixelGrid * 	0.50) - 							pixelW";
							x = "(2-1) * 							2 * 																	5						 * (pixelW * pixelGrid * 	0.50)";
							y = 0;
						};
						class CheckboxBackground20: CheckboxBackground1
						{
							x = "(20-17) * 							2 * 																	5						 * (pixelW * pixelGrid * 	0.50)";
							y = "2 * (							2 * 																	5						 * (pixelH * pixelGrid * 	0.50) + 								1 * 																	5						 * (pixelH * pixelGrid * 	0.50))";
						};
						class CheckboxBackground21: CheckboxBackground1
						{
							x = "(21-17) * 							2 * 																	5						 * (pixelW * pixelGrid * 	0.50)";
							y = "2 * (							2 * 																	5						 * (pixelH * pixelGrid * 	0.50) + 								1 * 																	5						 * (pixelH * pixelGrid * 	0.50))";
						};
						class CheckboxBackground22: CheckboxBackground1
						{
							x = "(22-17) * 							2 * 																	5						 * (pixelW * pixelGrid * 	0.50)";
							y = "2 * (							2 * 																	5						 * (pixelH * pixelGrid * 	0.50) + 								1 * 																	5						 * (pixelH * pixelGrid * 	0.50))";
						};
						class CheckboxBackground23: CheckboxBackground1
						{
							x = "(23-17) * 							2 * 																	5						 * (pixelW * pixelGrid * 	0.50)";
							y = "2 * (							2 * 																	5						 * (pixelH * pixelGrid * 	0.50) + 								1 * 																	5						 * (pixelH * pixelGrid * 	0.50))";
						};
						class CheckboxBackground24: CheckboxBackground1
						{
							x = "(24-17) * 							2 * 																	5						 * (pixelW * pixelGrid * 	0.50)";
							y = "2 * (							2 * 																	5						 * (pixelH * pixelGrid * 	0.50) + 								1 * 																	5						 * (pixelH * pixelGrid * 	0.50))";
						};
						class CheckboxBackground3: ctrlStatic
						{
							colorBackground[] = {0, 0, 0, 0.25};
							colorShadow[] = {0, 0, 0, 0};
							colorText[] = {1, 1, 1, 0.5};
							h = "2 * 																	5						 * (pixelH * pixelGrid * 	0.50) - 							pixelH";
							idc = -1;
							onLoad = "(_this select 0) ctrlEnable false;";
							shadow = 0;
							style = 2;
							text = "";
							type = 0;
							w = "2 * 																	5						 * (pixelW * pixelGrid * 	0.50) - 							pixelW";
							x = "(3-1) * 							2 * 																	5						 * (pixelW * pixelGrid * 	0.50)";
							y = 0;
						};
						class CheckboxBackground4: ctrlStatic
						{
							colorBackground[] = {0, 0, 0, 0.25};
							colorShadow[] = {0, 0, 0, 0};
							colorText[] = {1, 1, 1, 0.5};
							h = "2 * 																	5						 * (pixelH * pixelGrid * 	0.50) - 							pixelH";
							idc = -1;
							onLoad = "(_this select 0) ctrlEnable false;";
							shadow = 0;
							style = 2;
							text = "";
							type = 0;
							w = "2 * 																	5						 * (pixelW * pixelGrid * 	0.50) - 							pixelW";
							x = "(4-1) * 							2 * 																	5						 * (pixelW * pixelGrid * 	0.50)";
							y = 0;
						};
						class CheckboxBackground5: ctrlStatic
						{
							colorBackground[] = {0, 0, 0, 0.25};
							colorShadow[] = {0, 0, 0, 0};
							colorText[] = {1, 1, 1, 0.5};
							h = "2 * 																	5						 * (pixelH * pixelGrid * 	0.50) - 							pixelH";
							idc = -1;
							onLoad = "(_this select 0) ctrlEnable false;";
							shadow = 0;
							style = 2;
							text = "";
							type = 0;
							w = "2 * 																	5						 * (pixelW * pixelGrid * 	0.50) - 							pixelW";
							x = "(5-1) * 							2 * 																	5						 * (pixelW * pixelGrid * 	0.50)";
							y = 0;
						};
						class CheckboxBackground6: ctrlStatic
						{
							colorBackground[] = {0, 0, 0, 0.25};
							colorShadow[] = {0, 0, 0, 0};
							colorText[] = {1, 1, 1, 0.5};
							h = "2 * 																	5						 * (pixelH * pixelGrid * 	0.50) - 							pixelH";
							idc = -1;
							onLoad = "(_this select 0) ctrlEnable false;";
							shadow = 0;
							style = 2;
							text = "";
							type = 0;
							w = "2 * 																	5						 * (pixelW * pixelGrid * 	0.50) - 							pixelW";
							x = "(6-1) * 							2 * 																	5						 * (pixelW * pixelGrid * 	0.50)";
							y = 0;
						};
						class CheckboxBackground7: ctrlStatic
						{
							colorBackground[] = {0, 0, 0, 0.25};
							colorShadow[] = {0, 0, 0, 0};
							colorText[] = {1, 1, 1, 0.5};
							h = "2 * 																	5						 * (pixelH * pixelGrid * 	0.50) - 							pixelH";
							idc = -1;
							onLoad = "(_this select 0) ctrlEnable false;";
							shadow = 0;
							style = 2;
							text = "";
							type = 0;
							w = "2 * 																	5						 * (pixelW * pixelGrid * 	0.50) - 							pixelW";
							x = "(7-1) * 							2 * 																	5						 * (pixelW * pixelGrid * 	0.50)";
							y = 0;
						};
						class CheckboxBackground8: ctrlStatic
						{
							colorBackground[] = {0, 0, 0, 0.25};
							colorShadow[] = {0, 0, 0, 0};
							colorText[] = {1, 1, 1, 0.5};
							h = "2 * 																	5						 * (pixelH * pixelGrid * 	0.50) - 							pixelH";
							idc = -1;
							onLoad = "(_this select 0) ctrlEnable false;";
							shadow = 0;
							style = 2;
							text = "";
							type = 0;
							w = "2 * 																	5						 * (pixelW * pixelGrid * 	0.50) - 							pixelW";
							x = "(8-1) * 							2 * 																	5						 * (pixelW * pixelGrid * 	0.50)";
							y = 0;
						};
						class CheckboxBackground9: CheckboxBackground1
						{
							x = "(9-9) * 							2 * 																	5						 * (pixelW * pixelGrid * 	0.50)";
							y = "2 * 																	5						 * (pixelH * pixelGrid * 	0.50) + 								1 * 																	5						 * (pixelH * pixelGrid * 	0.50)";
						};
						class Text1: ctrlStatic
						{
							colorBackground[] = {0, 0, 0, 0.25};
							colorShadow[] = {0, 0, 0, 0};
							colorText[] = {1, 1, 1, 0.5};
							h = "1 * 																	5						 * (pixelH * pixelGrid * 	0.50) - 							pixelH";
							idc = "150+1";
							onLoad = "(_this select 0) ctrlEnable false;";
							shadow = 0;
							style = 2;
							text = 1;
							type = 0;
							w = "2 * 																	5						 * (pixelW * pixelGrid * 	0.50) - 							pixelW";
							x = "(1-1) * 								2 * 																	5						 * (pixelW * pixelGrid * 	0.50)";
							y = "2 * 																	5						 * (pixelH * pixelGrid * 	0.50)";
						};
						class Text10: Text1
						{
							idc = "150+10";
							text = 10;
							x = "(10-9) * 								2 * 																	5						 * (pixelW * pixelGrid * 	0.50)";
							y = "2 * 							2 * 																	5						 * (pixelH * pixelGrid * 	0.50) + 								1 * 																	5						 * (pixelH * pixelGrid * 	0.50)";
						};
						class Text11: Text1
						{
							idc = "150+11";
							text = 11;
							x = "(11-9) * 								2 * 																	5						 * (pixelW * pixelGrid * 	0.50)";
							y = "2 * 							2 * 																	5						 * (pixelH * pixelGrid * 	0.50) + 								1 * 																	5						 * (pixelH * pixelGrid * 	0.50)";
						};
						class Text12: Text1
						{
							idc = "150+12";
							text = 12;
							x = "(12-9) * 								2 * 																	5						 * (pixelW * pixelGrid * 	0.50)";
							y = "2 * 							2 * 																	5						 * (pixelH * pixelGrid * 	0.50) + 								1 * 																	5						 * (pixelH * pixelGrid * 	0.50)";
						};
						class Text13: Text1
						{
							idc = "150+13";
							text = 13;
							x = "(13-9) * 								2 * 																	5						 * (pixelW * pixelGrid * 	0.50)";
							y = "2 * 							2 * 																	5						 * (pixelH * pixelGrid * 	0.50) + 								1 * 																	5						 * (pixelH * pixelGrid * 	0.50)";
						};
						class Text14: Text1
						{
							idc = "150+14";
							text = 14;
							x = "(14-9) * 								2 * 																	5						 * (pixelW * pixelGrid * 	0.50)";
							y = "2 * 							2 * 																	5						 * (pixelH * pixelGrid * 	0.50) + 								1 * 																	5						 * (pixelH * pixelGrid * 	0.50)";
						};
						class Text15: Text1
						{
							idc = "150+15";
							text = 15;
							x = "(15-9) * 								2 * 																	5						 * (pixelW * pixelGrid * 	0.50)";
							y = "2 * 							2 * 																	5						 * (pixelH * pixelGrid * 	0.50) + 								1 * 																	5						 * (pixelH * pixelGrid * 	0.50)";
						};
						class Text16: Text1
						{
							idc = "150+16";
							text = 16;
							x = "(16-9) * 								2 * 																	5						 * (pixelW * pixelGrid * 	0.50)";
							y = "2 * 							2 * 																	5						 * (pixelH * pixelGrid * 	0.50) + 								1 * 																	5						 * (pixelH * pixelGrid * 	0.50)";
						};
						class Text17: Text1
						{
							idc = "150+17";
							text = 17;
							x = "(17-17) * 								2 * 																	5						 * (pixelW * pixelGrid * 	0.50)";
							y = "3 * 							2 * 																	5						 * (pixelH * pixelGrid * 	0.50) + 2 * 								1 * 																	5						 * (pixelH * pixelGrid * 	0.50)";
						};
						class Text18: Text1
						{
							idc = "150+18";
							text = 18;
							x = "(18-17) * 								2 * 																	5						 * (pixelW * pixelGrid * 	0.50)";
							y = "3 * 							2 * 																	5						 * (pixelH * pixelGrid * 	0.50) + 2 * 								1 * 																	5						 * (pixelH * pixelGrid * 	0.50)";
						};
						class Text19: Text1
						{
							idc = "150+19";
							text = 19;
							x = "(19-17) * 								2 * 																	5						 * (pixelW * pixelGrid * 	0.50)";
							y = "3 * 							2 * 																	5						 * (pixelH * pixelGrid * 	0.50) + 2 * 								1 * 																	5						 * (pixelH * pixelGrid * 	0.50)";
						};
						class Text2: ctrlStatic
						{
							colorBackground[] = {0, 0, 0, 0.25};
							colorShadow[] = {0, 0, 0, 0};
							colorText[] = {1, 1, 1, 0.5};
							h = "1 * 																	5						 * (pixelH * pixelGrid * 	0.50) - 							pixelH";
							idc = "150+2";
							onLoad = "(_this select 0) ctrlEnable false;";
							shadow = 0;
							style = 2;
							text = 2;
							type = 0;
							w = "2 * 																	5						 * (pixelW * pixelGrid * 	0.50) - 							pixelW";
							x = "(2-1) * 								2 * 																	5						 * (pixelW * pixelGrid * 	0.50)";
							y = "2 * 																	5						 * (pixelH * pixelGrid * 	0.50)";
						};
						class Text20: Text1
						{
							idc = "150+20";
							text = 20;
							x = "(20-17) * 								2 * 																	5						 * (pixelW * pixelGrid * 	0.50)";
							y = "3 * 							2 * 																	5						 * (pixelH * pixelGrid * 	0.50) + 2 * 								1 * 																	5						 * (pixelH * pixelGrid * 	0.50)";
						};
						class Text21: Text1
						{
							idc = "150+21";
							text = 21;
							x = "(21-17) * 								2 * 																	5						 * (pixelW * pixelGrid * 	0.50)";
							y = "3 * 							2 * 																	5						 * (pixelH * pixelGrid * 	0.50) + 2 * 								1 * 																	5						 * (pixelH * pixelGrid * 	0.50)";
						};
						class Text22: Text1
						{
							idc = "150+22";
							text = 22;
							x = "(22-17) * 								2 * 																	5						 * (pixelW * pixelGrid * 	0.50)";
							y = "3 * 							2 * 																	5						 * (pixelH * pixelGrid * 	0.50) + 2 * 								1 * 																	5						 * (pixelH * pixelGrid * 	0.50)";
						};
						class Text23: Text1
						{
							idc = "150+23";
							text = 23;
							x = "(23-17) * 								2 * 																	5						 * (pixelW * pixelGrid * 	0.50)";
							y = "3 * 							2 * 																	5						 * (pixelH * pixelGrid * 	0.50) + 2 * 								1 * 																	5						 * (pixelH * pixelGrid * 	0.50)";
						};
						class Text24: Text1
						{
							idc = "150+24";
							text = 24;
							x = "(24-17) * 								2 * 																	5						 * (pixelW * pixelGrid * 	0.50)";
							y = "3 * 							2 * 																	5						 * (pixelH * pixelGrid * 	0.50) + 2 * 								1 * 																	5						 * (pixelH * pixelGrid * 	0.50)";
						};
						class Text3: ctrlStatic
						{
							colorBackground[] = {0, 0, 0, 0.25};
							colorShadow[] = {0, 0, 0, 0};
							colorText[] = {1, 1, 1, 0.5};
							h = "1 * 																	5						 * (pixelH * pixelGrid * 	0.50) - 							pixelH";
							idc = "150+3";
							onLoad = "(_this select 0) ctrlEnable false;";
							shadow = 0;
							style = 2;
							text = 3;
							type = 0;
							w = "2 * 																	5						 * (pixelW * pixelGrid * 	0.50) - 							pixelW";
							x = "(3-1) * 								2 * 																	5						 * (pixelW * pixelGrid * 	0.50)";
							y = "2 * 																	5						 * (pixelH * pixelGrid * 	0.50)";
						};
						class Text4: ctrlStatic
						{
							colorBackground[] = {0, 0, 0, 0.25};
							colorShadow[] = {0, 0, 0, 0};
							colorText[] = {1, 1, 1, 0.5};
							h = "1 * 																	5						 * (pixelH * pixelGrid * 	0.50) - 							pixelH";
							idc = "150+4";
							onLoad = "(_this select 0) ctrlEnable false;";
							shadow = 0;
							style = 2;
							text = 4;
							type = 0;
							w = "2 * 																	5						 * (pixelW * pixelGrid * 	0.50) - 							pixelW";
							x = "(4-1) * 								2 * 																	5						 * (pixelW * pixelGrid * 	0.50)";
							y = "2 * 																	5						 * (pixelH * pixelGrid * 	0.50)";
						};
						class Text5: ctrlStatic
						{
							colorBackground[] = {0, 0, 0, 0.25};
							colorShadow[] = {0, 0, 0, 0};
							colorText[] = {1, 1, 1, 0.5};
							h = "1 * 																	5						 * (pixelH * pixelGrid * 	0.50) - 							pixelH";
							idc = "150+5";
							onLoad = "(_this select 0) ctrlEnable false;";
							shadow = 0;
							style = 2;
							text = 5;
							type = 0;
							w = "2 * 																	5						 * (pixelW * pixelGrid * 	0.50) - 							pixelW";
							x = "(5-1) * 								2 * 																	5						 * (pixelW * pixelGrid * 	0.50)";
							y = "2 * 																	5						 * (pixelH * pixelGrid * 	0.50)";
						};
						class Text6: ctrlStatic
						{
							colorBackground[] = {0, 0, 0, 0.25};
							colorShadow[] = {0, 0, 0, 0};
							colorText[] = {1, 1, 1, 0.5};
							h = "1 * 																	5						 * (pixelH * pixelGrid * 	0.50) - 							pixelH";
							idc = "150+6";
							onLoad = "(_this select 0) ctrlEnable false;";
							shadow = 0;
							style = 2;
							text = 6;
							type = 0;
							w = "2 * 																	5						 * (pixelW * pixelGrid * 	0.50) - 							pixelW";
							x = "(6-1) * 								2 * 																	5						 * (pixelW * pixelGrid * 	0.50)";
							y = "2 * 																	5						 * (pixelH * pixelGrid * 	0.50)";
						};
						class Text7: ctrlStatic
						{
							colorBackground[] = {0, 0, 0, 0.25};
							colorShadow[] = {0, 0, 0, 0};
							colorText[] = {1, 1, 1, 0.5};
							h = "1 * 																	5						 * (pixelH * pixelGrid * 	0.50) - 							pixelH";
							idc = "150+7";
							onLoad = "(_this select 0) ctrlEnable false;";
							shadow = 0;
							style = 2;
							text = 7;
							type = 0;
							w = "2 * 																	5						 * (pixelW * pixelGrid * 	0.50) - 							pixelW";
							x = "(7-1) * 								2 * 																	5						 * (pixelW * pixelGrid * 	0.50)";
							y = "2 * 																	5						 * (pixelH * pixelGrid * 	0.50)";
						};
						class Text8: ctrlStatic
						{
							colorBackground[] = {0, 0, 0, 0.25};
							colorShadow[] = {0, 0, 0, 0};
							colorText[] = {1, 1, 1, 0.5};
							h = "1 * 																	5						 * (pixelH * pixelGrid * 	0.50) - 							pixelH";
							idc = "150+8";
							onLoad = "(_this select 0) ctrlEnable false;";
							shadow = 0;
							style = 2;
							text = 8;
							type = 0;
							w = "2 * 																	5						 * (pixelW * pixelGrid * 	0.50) - 							pixelW";
							x = "(8-1) * 								2 * 																	5						 * (pixelW * pixelGrid * 	0.50)";
							y = "2 * 																	5						 * (pixelH * pixelGrid * 	0.50)";
						};
						class Text9: Text1
						{
							idc = "150+9";
							text = 9;
							x = "(9-9) * 								2 * 																	5						 * (pixelW * pixelGrid * 	0.50)";
							y = "2 * 							2 * 																	5						 * (pixelH * pixelGrid * 	0.50) + 								1 * 																	5						 * (pixelH * pixelGrid * 	0.50)";
						};
					};
				};
			};
		};
		class DynSimDist: SliderDistance
		{
			class Controls: Controls
			{
				class Edit: Edit {};
				class Title: Title {};
				class Value: Value
				{
					lineSize = 50;
					sliderRange[] = {50, 5000};
					sliderStep = 50;
				};
			};
		};
		class DynSimDistMultIsMoving: SliderMultiplier
		{
			class Controls: Controls
			{
				class Edit: Edit {};
				class Title: Title {};
				class Value: Value
				{
					lineSize = 0.1;
					sliderPosition = 2;
					sliderRange[] = {1, 5};
					sliderStep = 0.1;
				};
			};
		};
		class Edit: Title
		{
			attributeLoad = "		if (typename _value != typename '') then {_value = str _value;};		(_this controlsGroupCtrl 100) ctrlSetText _value;	";
			attributeSave = "		_value = ctrlText (_this controlsGroupCtrl 100);		if (gettext (_config >> 'validate') == 'NUMBER' || {gettext (_config >> 'typeName') == 'NUMBER'}) then {_value = parsenumber _value;};		_value	";
			class Controls: Controls
			{
				class Title: Title {};
				class Value: ctrlEdit
				{
					h = "5 * (pixelH * pixelGrid * 	0.50)";
					idc = 100;
					w = "82 * (pixelW * pixelGrid * 	0.50)";
					x = "48 * (pixelW * pixelGrid * 	0.50)";
				};
			};
		};
		class EditAB: Title
		{
			attributeLoad = "		(_this controlsGroupCtrl 101) ctrlSetText str (_value select 0);		(_this controlsGroupCtrl 102) ctrlSetText str (_value select 1);	";
			attributeSave = "		[			parsenumber ctrlText (_this controlsGroupCtrl 101),			parsenumber ctrlText (_this controlsGroupCtrl 102)		]	";
			idc = 100;
			class Controls: Controls
			{
				class Title: Title {};
				class TitleA: ctrlStatic
				{
					colorBackground[] = {0.77, 0.18, 0.1, 1};
					colorText[] = {1, 1, 1, 1};
					h = "5 * (pixelH * pixelGrid * 	0.50)";
					shadow = 0;
					style = 2;
					text = "A";
					w = "(	5) * (pixelW * pixelGrid * 	0.50)";
					x = "48 * (pixelW * pixelGrid * 	0.50)";
				};
				class TitleB: TitleA
				{
					colorBackground[] = {0.58, 0.82, 0.22, 1};
					text = "B";
					x = "(	48 + 	82 * (1/3)) * (pixelW * pixelGrid * 	0.50)";
				};
				class ValueA: ctrlEdit
				{
					font = "EtelkaMonospacePro";
					h = "5 * (pixelH * pixelGrid * 	0.50)";
					idc = 101;
					sizeEx = "3.875 * (1 / (getResolution select 3)) * pixelGrid * 0.5";
					text = "0";
					w = "(	82 / 3 - 	5) * (pixelW * pixelGrid * 	0.50)";
					x = "(	48 + 	(	5)) * (pixelW * pixelGrid * 	0.50)";
				};
				class ValueB: ValueA
				{
					idc = 102;
					x = "(	48 + 	82 * (1/3) + 	(	5)) * (pixelW * pixelGrid * 	0.50)";
				};
			};
		};
		class EditABC: Title
		{
			attributeLoad = "		(_this controlsGroupCtrl 101) ctrlSetText str (_value select 0);		(_this controlsGroupCtrl 102) ctrlSetText str (_value select 1);		(_this controlsGroupCtrl 103) ctrlSetText str (_value select 2);	";
			attributeSave = "		[			parsenumber ctrlText (_this controlsGroupCtrl 101),			parsenumber ctrlText (_this controlsGroupCtrl 102),			parsenumber ctrlText (_this controlsGroupCtrl 103)		]	";
			idc = 100;
			class Controls: Controls
			{
				class Title: Title {};
				class TitleA: ctrlStatic
				{
					colorBackground[] = {0.77, 0.18, 0.1, 1};
					colorText[] = {1, 1, 1, 1};
					h = "5 * (pixelH * pixelGrid * 	0.50)";
					shadow = 0;
					style = 2;
					text = "A";
					w = "(	5) * (pixelW * pixelGrid * 	0.50)";
					x = "48 * (pixelW * pixelGrid * 	0.50)";
				};
				class TitleB: TitleA
				{
					colorBackground[] = {0.58, 0.82, 0.22, 1};
					text = "B";
					x = "(	48 + 	82 * (1/3)) * (pixelW * pixelGrid * 	0.50)";
				};
				class TitleC: TitleA
				{
					colorBackground[] = {0.26, 0.52, 0.92, 1};
					text = "C";
					x = "(	48 + 	82 * (2/3)) * (pixelW * pixelGrid * 	0.50)";
				};
				class ValueA: ctrlEdit
				{
					font = "EtelkaMonospacePro";
					h = "5 * (pixelH * pixelGrid * 	0.50)";
					idc = 101;
					sizeEx = "3.875 * (1 / (getResolution select 3)) * pixelGrid * 0.5";
					text = "0";
					w = "(	82 / 3 - 	5) * (pixelW * pixelGrid * 	0.50)";
					x = "(	48 + 	(	5)) * (pixelW * pixelGrid * 	0.50)";
				};
				class ValueB: ValueA
				{
					idc = 102;
					x = "(	48 + 	82 * (1/3) + 	(	5)) * (pixelW * pixelGrid * 	0.50)";
				};
				class ValueC: ValueA
				{
					idc = 103;
					x = "(	48 + 	82 * (2/3) + 	(	5)) * (pixelW * pixelGrid * 	0.50)";
				};
			};
		};
		class EditArray: Edit
		{
			attributeLoad = "		_valueText = '';		{			_add = if (_foreachindex == 0) then {_x} else {format [', %1',_x]};			_valueText = _valueText + _add;		} foreach _value;		(_this controlsGroupCtrl 100) ctrlSetText _valueText;	";
			attributeSave = "		_value = ctrlText (_this controlsGroupCtrl 100);		_values = [_value,';, '] call bis_fnc_splitString;		_values	";
		};
		class EditCode: Edit
		{
			class Controls: Controls
			{
				class Title: Title {};
				class Value: Value
				{
					autocomplete = "scripting";
					font = "EtelkaMonospacePro";
					idc = 100;
					sizeEx = "3.41 * (1 / (getResolution select 3)) * pixelGrid * 0.5";
				};
			};
		};
		class EditCodeMulti3: EditMulti3
		{
			h = "(	5 + 3 * 	3.5) * (pixelH * pixelGrid * 	0.50)";
			class Controls: Controls
			{
				class Background: Background
				{
					h = "(3 * 	3.5 + 0.6 * 	5) * (pixelH * pixelGrid * 	0.50)";
				};
				class Title: Title
				{
					h = "(3 * 	3.5 + 1 * 	5) * (pixelH * pixelGrid * 	0.50)";
				};
				class Value: Value
				{
					autocomplete = "scripting";
					font = "EtelkaMonospacePro";
					h = "3 * 	3.5 * (pixelH * pixelGrid * 	0.50)";
					sizeEx = "3.41 * (1 / (getResolution select 3)) * pixelGrid * 0.5";
				};
			};
		};
		class EditCodeMulti5: EditMulti5
		{
			h = "(	5 + 5 * 	3.5) * (pixelH * pixelGrid * 	0.50)";
			class Controls: Controls
			{
				class Background: Background
				{
					h = "(5 * 	3.5 + 0.6 * 	5) * (pixelH * pixelGrid * 	0.50)";
				};
				class Title: Title
				{
					h = "(5 * 	3.5 + 1 * 	5) * (pixelH * pixelGrid * 	0.50)";
				};
				class Value: Value
				{
					autocomplete = "scripting";
					font = "EtelkaMonospacePro";
					h = "5 * 	3.5 * (pixelH * pixelGrid * 	0.50)";
					sizeEx = "3.41 * (1 / (getResolution select 3)) * pixelGrid * 0.5";
				};
			};
		};
		class EditCodeShort: EditCode
		{
			class Controls: Controls
			{
				class Title: Title {};
				class Value: Value
				{
					w = "82 / 3";
				};
			};
		};
		class EditMulti3: Edit
		{
			h = "4 * 	5 * (pixelH * pixelGrid * 	0.50)";
			class Controls: Controls
			{
				class Background: ctrlStaticOverlay
				{
					h = "3.1 * 	5 * (pixelH * pixelGrid * 	0.50)";
					w = "(	48 + 	82 - 	5) * (pixelW * pixelGrid * 	0.50)";
					x = "5 * (pixelW * pixelGrid * 	0.50)";
					y = "0.4 * 	5 * (pixelH * pixelGrid * 	0.50)";
				};
				class Title: ctrlStaticFrame
				{
					colorBackground[] = {0, 0, 0, 0.5};
					h = "3.5 * 	5 * (pixelH * pixelGrid * 	0.50)";
					w = "(	48 + 	82 - 	5) * (pixelW * pixelGrid * 	0.50)";
					x = "5 * (pixelW * pixelGrid * 	0.50)";
					y = "0 * 	5 * (pixelH * pixelGrid * 	0.50)";
				};
				class Value: Value
				{
					colorBackground[] = {0, 0, 0, 0};
					h = "3 * 	5 * (pixelH * pixelGrid * 	0.50)";
					style = "0x10 + 0x200";
					w = "(	48 + 	82 - 	5) * (pixelW * pixelGrid * 	0.50)";
					x = "5 * (pixelW * pixelGrid * 	0.50)";
					y = "1 * 	5 * (pixelH * pixelGrid * 	0.50)";
				};
			};
		};
		class EditMulti5: EditMulti3
		{
			h = "6 * 	5 * (pixelH * pixelGrid * 	0.50)";
			class Controls: Controls
			{
				class Background: Background
				{
					h = "5.1 * 	5 * (pixelH * pixelGrid * 	0.50)";
				};
				class Title: Title
				{
					h = "5.5 * 	5 * (pixelH * pixelGrid * 	0.50)";
				};
				class Value: Value
				{
					h = "5 * 	5 * (pixelH * pixelGrid * 	0.50)";
				};
			};
		};
		class EditShort: Edit
		{
			class Controls: Controls
			{
				class Title: Title {};
				class Value: Value
				{
					w = "round(	82 / 3) * (pixelW * pixelGrid * 	0.50)";
				};
			};
		};
		class EditXY: Title
		{
			attributeLoad = "		(_this controlsGroupCtrl 101) ctrlSetText str (_value select 0);		(_this controlsGroupCtrl 102) ctrlSetText str (_value select 1);		(_this controlsGroupCtrl 103) ctrlSetText str (_value select 2);	";
			attributeSave = "		[			parsenumber ctrlText (_this controlsGroupCtrl 101),			parsenumber ctrlText (_this controlsGroupCtrl 102),			parsenumber ctrlText (_this controlsGroupCtrl 103)		]	";
			idc = 100;
			onLoad = "			((_this select 0) controlsGroupCtrl 103) ctrlSetFade 1;			((_this select 0) controlsGroupCtrl 103) ctrlCommit 0;			((_this select 0) controlsGroupCtrl 203) ctrlSetFade 1;			((_this select 0) controlsGroupCtrl 203) ctrlCommit 0;	";
			class Controls: Controls
			{
				class Title: Title {};
				class TitleX: ctrlStatic
				{
					colorBackground[] = {0.77, 0.18, 0.1, 1};
					h = "5 * (pixelH * pixelGrid * 	0.50)";
					shadow = 0;
					style = 2;
					text = "X";
					w = "(	5) * (pixelW * pixelGrid * 	0.50)";
					x = "48 * (pixelW * pixelGrid * 	0.50)";
				};
				class TitleY: TitleX
				{
					colorBackground[] = {0.58, 0.82, 0.22, 1};
					text = "Y";
					x = "(	48 + 	82 * (1/3)) * (pixelW * pixelGrid * 	0.50)";
				};
				class TitleZ: TitleX
				{
					colorBackground[] = {0.26, 0.52, 0.92, 1};
					idc = 203;
					text = "Z";
					x = "(	48 + 	82 * (2/3)) * (pixelW * pixelGrid * 	0.50)";
				};
				class ValueX: ctrlEdit
				{
					font = "EtelkaMonospacePro";
					h = "5 * (pixelH * pixelGrid * 	0.50)";
					idc = 101;
					sizeEx = "3.875 * (1 / (getResolution select 3)) * pixelGrid * 0.5";
					text = "0";
					w = "(	82 / 3 - 	5) * (pixelW * pixelGrid * 	0.50)";
					x = "(	48 + 	(	5)) * (pixelW * pixelGrid * 	0.50)";
				};
				class ValueY: ValueX
				{
					idc = 102;
					x = "(	48 + 	82 * (1/3) + 	(	5)) * (pixelW * pixelGrid * 	0.50)";
				};
				class ValueZ: ValueX
				{
					idc = 103;
					x = "(	48 + 	82 * (2/3) + 	(	5)) * (pixelW * pixelGrid * 	0.50)";
				};
			};
		};
		class EditXYZ: Title
		{
			attributeLoad = "		(_this controlsGroupCtrl 101) ctrlSetText str (_value select 0);		(_this controlsGroupCtrl 102) ctrlSetText str (_value select 1);		(_this controlsGroupCtrl 103) ctrlSetText str (_value select 2);	";
			attributeSave = "		[			parsenumber ctrlText (_this controlsGroupCtrl 101),			parsenumber ctrlText (_this controlsGroupCtrl 102),			parsenumber ctrlText (_this controlsGroupCtrl 103)		]	";
			idc = 100;
			class Controls: Controls
			{
				class Title: Title {};
				class TitleX: ctrlStatic
				{
					colorBackground[] = {0.77, 0.18, 0.1, 1};
					h = "5 * (pixelH * pixelGrid * 	0.50)";
					shadow = 0;
					style = 2;
					text = "X";
					w = "(	5) * (pixelW * pixelGrid * 	0.50)";
					x = "48 * (pixelW * pixelGrid * 	0.50)";
				};
				class TitleY: TitleX
				{
					colorBackground[] = {0.58, 0.82, 0.22, 1};
					text = "Y";
					x = "(	48 + 	82 * (1/3)) * (pixelW * pixelGrid * 	0.50)";
				};
				class TitleZ: TitleX
				{
					colorBackground[] = {0.26, 0.52, 0.92, 1};
					text = "Z";
					x = "(	48 + 	82 * (2/3)) * (pixelW * pixelGrid * 	0.50)";
				};
				class ValueX: ctrlEdit
				{
					font = "EtelkaMonospacePro";
					h = "5 * (pixelH * pixelGrid * 	0.50)";
					idc = 101;
					sizeEx = "3.875 * (1 / (getResolution select 3)) * pixelGrid * 0.5";
					text = "0";
					w = "(	82 / 3 - 	5) * (pixelW * pixelGrid * 	0.50)";
					x = "(	48 + 	(	5)) * (pixelW * pixelGrid * 	0.50)";
				};
				class ValueY: ValueX
				{
					idc = 102;
					x = "(	48 + 	82 * (1/3) + 	(	5)) * (pixelW * pixelGrid * 	0.50)";
				};
				class ValueZ: ValueX
				{
					idc = 103;
					x = "(	48 + 	82 * (2/3) + 	(	5)) * (pixelW * pixelGrid * 	0.50)";
				};
			};
		};
		class EditZ: Title
		{
			attributeLoad = "		(_this controlsGroupCtrl 100) ctrlSetText str _value;	";
			attributeSave = "		parsenumber ctrlText (_this controlsGroupCtrl 100),	";
			class Controls: Controls
			{
				class Title: Title {};
				class TitleZ: ctrlStatic
				{
					colorBackground[] = {0.26, 0.52, 0.92, 1};
					colorText[] = {1, 1, 1, 1};
					h = "5 * (pixelH * pixelGrid * 	0.50)";
					shadow = 0;
					style = 2;
					text = "Z";
					w = "(	5) * (pixelW * pixelGrid * 	0.50)";
					x = "48 * (pixelW * pixelGrid * 	0.50)";
				};
				class ValueZ: ctrlEdit
				{
					font = "EtelkaMonospacePro";
					h = "5 * (pixelH * pixelGrid * 	0.50)";
					idc = 100;
					sizeEx = "3.875 * (1 / (getResolution select 3)) * pixelGrid * 0.5";
					text = "0";
					w = "(	82 / 3 - 	5) * (pixelW * pixelGrid * 	0.50)";
					x = "(	48 + 	(	5)) * (pixelW * pixelGrid * 	0.50)";
				};
			};
		};
		class EnableDebugConsole: Combo
		{
			class Controls: Controls
			{
				class Title: Title {};
				class Value: Value
				{
					class Items
					{
						class All
						{
							text = "Available for everyone";
							value = 2;
						};
						class Disabled
						{
							text = "Available only in editor";
							value = 0;
						};
						class Host
						{
							text = "Available for the host or logged-in admin";
							value = 1;
						};
					};
				};
			};
		};
		class EnableRevive: Checkbox
		{
			class Controls: Controls
			{
				class Title: Title {};
				class Value: Value
				{
					onLoad = "				_this spawn {					disableserialization;					_ctrlCheckbox = _this select 0;					_ctrlGroup = ctrlParentControlsGroup _ctrlCheckbox;					_enable = !isNil{'Multiplayer' get3DENMissionAttribute 'ReviveMode'} && {'Multiplayer' get3DENMissionAttribute 'ReviveMode' == 2};					_fade = [0.75,0] select _enable;					_ctrlGroup ctrlenable _enable;					_ctrlGroup ctrlsetfade _fade; _ctrlGroup ctrlcommit 0;				};			";
				};
			};
		};
		class Face: Combo
		{
			h = "1 * 	5 * (pixelH * pixelGrid * 	0.50)";
			class Controls: Controls
			{
				class Title: Title {};
				class Value: Value
				{
					h = "1 * 	5 * (pixelH * pixelGrid * 	0.50)";
					onload = "				_control = _this select 0;				{					_cfgFace = _x;					if (gettext (_cfgFace >> 'displayname') != '' && getnumber (_cfgFace >> 'disabled') == 0) then {						_lbadd = _control lbadd gettext (_cfgFace >> 'displayname');						_control lbsetdata [_lbadd,configname _cfgFace];						_control lbsetpicture [_lbadd,gettext (_cfgFace >> 'texture')];						_control lbsettooltip [_lbadd,(_control lbtext _lbadd) + '\n' + (_control lbdata _lbadd)];						_dlcLogo = if (configsourcemod _cfgFace == '') then {''} else {modParams [configsourcemod  _cfgFace,['logo']] param [0,'']};						if (_dlcLogo != '') then {_control lbsetpictureright [_lbadd,_dlcLogo];};					};				} foreach configproperties [configfile >> 'cfgfaces' >> 'Man_A3','isclass _x'];				lbsort _control;			";
				};
			};
		};
		class Fog: Title
		{
			h = "(3.25 * 	5 + 2) * (pixelH * pixelGrid * 	0.50)";
			idc = 100;
			onLoad = "		_ctrlGroup = _this select 0;		[_ctrlGroup controlsgroupctrl 101,_ctrlGroup controlsgroupctrl 104] call bis_fnc_initSliderValue;		[_ctrlGroup controlsgroupctrl 102,_ctrlGroup controlsgroupctrl 105] call bis_fnc_initSliderValue;		[_ctrlGroup controlsgroupctrl 103,_ctrlGroup controlsgroupctrl 106,' m'] call bis_fnc_initSliderValue;	";
			class Controls: Controls
			{
				class Edit: ctrlEdit
				{
					h = "5 * (pixelH * pixelGrid * 	0.50)";
					idc = 104;
					onKillFocus = "				comment 'DO NOT COPY THIS CODE TO YOUR ATTRIBUTE CONFIG UNLESS YOU ARE CHANGING SOMETHING IN THE CODE!';				_ctrlGroup = ctrlParentControlsGroup (_this select 0);				_valueFog = sliderposition (_ctrlGroup controlsgroupctrl 101);				_valueDecay = sliderposition (_ctrlGroup controlsgroupctrl 102);				_valueBase = sliderposition (_ctrlGroup controlsgroupctrl 103);				[_ctrlGroup,[_valueFog,_valueDecay,_valueBase]] call bis_fnc_3DENIntel;			";
					w = "10 * (pixelW * pixelGrid * 	0.50)";
					x = "(	48 + 	82 - 	10) * (pixelW * pixelGrid * 	0.50)";
				};
				class EditBase: Edit
				{
					idc = 106;
					y = "(2 * 	5 + 2) * (pixelH * pixelGrid * 	0.50)";
				};
				class EditDecay: Edit
				{
					idc = 105;
					y = "(	5 + 1) * (pixelH * pixelGrid * 	0.50)";
				};
				class Title: Title
				{
					idc = 110;
				};
				class TitleBase: Title
				{
					text = "Base";
					tooltip = "Base altitude of the fog layer (above sea level).";
					y = "(2 * 	5 + 2) * (pixelH * pixelGrid * 	0.50)";
				};
				class TitleDecay: Title
				{
					text = "Decay";
					tooltip = "Fog decay. Larger values will lead to a sharper fog ceiling.";
					y = "(	5 + 1) * (pixelH * pixelGrid * 	0.50)";
				};
				class Value: ctrlXSliderH
				{
					h = "5 * (pixelH * pixelGrid * 	0.50)";
					idc = 101;
					onSliderPosChanged = "				comment 'DO NOT COPY THIS CODE TO YOUR ATTRIBUTE CONFIG UNLESS YOU ARE CHANGING SOMETHING IN THE CODE!';				_ctrlGroup = ctrlParentControlsGroup (_this select 0);				_valueFog = sliderposition (_ctrlGroup controlsgroupctrl 101);				_valueDecay = sliderposition (_ctrlGroup controlsgroupctrl 102);				_valueBase = sliderposition (_ctrlGroup controlsgroupctrl 103);				[_ctrlGroup,[_valueFog,_valueDecay,_valueBase]] call bis_fnc_3DENIntel;			";
					w = "(	82 - 	10) * (pixelW * pixelGrid * 	0.50)";
					x = "48 * (pixelW * pixelGrid * 	0.50)";
				};
				class ValueBase: Value
				{
					idc = 103;
					sliderRange[] = {-1000, 1000};
					y = "(2 * 	5 + 2) * (pixelH * pixelGrid * 	0.50)";
				};
				class ValueDecay: Value
				{
					idc = 102;
					sliderRange[] = {0, 0.1};
					y = "(	5 + 1) * (pixelH * pixelGrid * 	0.50)";
				};
			};
		};
		class FormationGroup: Toolbox
		{
			attributeLoad = "(_this controlsGroupCtrl 100) lbsetcursel (['wedge','vee','line','column','file','stag_column','ech_left','ech_right','diamond'] find _value);";
			attributeSave = "['wedge','vee','line','column','file','stag_column','ech_left','ech_right','diamond'] select (missionnamespace getvariable ['FormationGroup_value',0]);";
			h = "2 * 	5 * (pixelH * pixelGrid * 	0.50)";
			class Controls: Controls
			{
				class Background: ctrlStatic
				{
					colorBackground[] = {0, 0, 0, 0.5};
					h = "2 * 	5 * (pixelH * pixelGrid * 	0.50)";
					w = "82 * (pixelW * pixelGrid * 	0.50)";
					x = "48 * (pixelW * pixelGrid * 	0.50)";
				};
				class Title: Title
				{
					h = "2 * 	5 * (pixelH * pixelGrid * 	0.50)";
				};
				class Value: Value
				{
					colorBackground[] = {0, 0, 0, 0};
					columns = 9;
					h = "2 * 	5 * (pixelH * pixelGrid * 	0.50)";
					idc = 100;
					onToolboxSelChanged = "missionnamespace setvariable ['FormationGroup_value',_this select 1];";
					rows = 1;
					strings[] = {"\a3\3DEN\Data\Attributes\Formation\wedge_ca.paa", "\a3\3DEN\Data\Attributes\Formation\vee_ca.paa", "\a3\3DEN\Data\Attributes\Formation\line_ca.paa", "\a3\3DEN\Data\Attributes\Formation\column_ca.paa", "\a3\3DEN\Data\Attributes\Formation\file_ca.paa", "\a3\3DEN\Data\Attributes\Formation\stag_column_ca.paa", "\a3\3DEN\Data\Attributes\Formation\ech_left_ca.paa", "\a3\3DEN\Data\Attributes\Formation\ech_right_ca.paa", "\a3\3DEN\Data\Attributes\Formation\diamond_ca.paa"};
					style = "0x02 + 0x30 + 0x800";
					tooltips[] = {"Wedge", "Vee", "Line", "Column", "File", "Staggered Col.", "Echelon L.", "Echelon R.", "Diamond"};
					values[] = {0, 1, 2, 3, 4, 5, 6, 7, 8};
				};
			};
		};
		class FormationWaypoint: Toolbox
		{
			attributeLoad = "(_this controlsGroupCtrl 100) lbsetcursel (['no change','wedge','vee','line','column','file','stag_column','ech_left','ech_right','diamond'] find _value);";
			attributeSave = "['no change','wedge','vee','line','column','file','stag_column','ech_left','ech_right','diamond'] select (missionnamespace getvariable ['FormationWaypoint_value',0]);";
			h = "2 * 	5 * (pixelH * pixelGrid * 	0.50)";
			class Controls: Controls
			{
				class Title: Title
				{
					h = "2 * 	5 * (pixelH * pixelGrid * 	0.50)";
				};
				class Value: Value
				{
					columns = 10;
					h = "2 * 	5 * (pixelH * pixelGrid * 	0.50)";
					idc = 100;
					onToolboxSelChanged = "missionnamespace setvariable ['FormationWaypoint_value',_this select 1];";
					rows = 1;
					strings[] = {"\a3\3DEN\Data\Attributes\default_ca.paa", "\a3\3DEN\Data\Attributes\Formation\wedge_ca.paa", "\a3\3DEN\Data\Attributes\Formation\vee_ca.paa", "\a3\3DEN\Data\Attributes\Formation\line_ca.paa", "\a3\3DEN\Data\Attributes\Formation\column_ca.paa", "\a3\3DEN\Data\Attributes\Formation\file_ca.paa", "\a3\3DEN\Data\Attributes\Formation\stag_column_ca.paa", "\a3\3DEN\Data\Attributes\Formation\ech_left_ca.paa", "\a3\3DEN\Data\Attributes\Formation\ech_right_ca.paa", "\a3\3DEN\Data\Attributes\Formation\diamond_ca.paa"};
					style = "0x02 + 0x30 + 0x800";
					tooltips[] = {"Unchanged", "Wedge", "Vee", "Line", "Column", "File", "Staggered Col.", "Echelon L.", "Echelon R.", "Diamond"};
					values[] = {-1, 0, 1, 2, 3, 4, 5, 6, 7, 8};
				};
			};
		};
		class GameType: Combo
		{
			class Controls: Controls
			{
				class Title: Title {};
				class Value: Value
				{
					class ItemsConfig
					{
						path[] = {"CfgMPGameTypes"};
						propertyText = "name";
						sort = 1;
					};
				};
			};
		};
		class GarbageCollectorMode: Combo
		{
			class Controls: Controls
			{
				class Title: Title {};
				class Value: Value
				{
					class Items
					{
						class All
						{
							text = "All scenario objects";
							value = 1;
						};
						class None
						{
							text = "None";
							value = 0;
						};
						class NotRespawned
						{
							text = "Only objects that cannot respawn";
							value = 3;
						};
						class Respawned
						{
							text = "Only objects that can respawn";
							value = 2;
						};
					};
				};
			};
		};
		class GuerAllegiance: Title
		{
			h = "12 * (pixelH * pixelGrid * 	0.50)";
			idc = 100;
			class Controls: Controls
			{
				class Background: ctrlStatic
				{
					colorBackground[] = {0, 0, 0, 0.5};
					h = "12 * (pixelH * pixelGrid * 	0.50)";
					w = "82 * (pixelW * pixelGrid * 	0.50)";
					x = "48 * (pixelW * pixelGrid * 	0.50)";
				};
				class East: West
				{
					idc = 102;
					x = "(	48 + 	82 * 0.5 + 6) * (pixelW * pixelGrid * 	0.50)";
				};
				class EastIcon: WestIcon
				{
					text = "\a3\3DEN\Data\Displays\Display3DEN\PanelRight\side_east_ca.paa";
					x = "(	48 + 	82 * 0.5 + 4) * (pixelW * pixelGrid * 	0.50)";
				};
				class Title: Title
				{
					h = "12 * (pixelH * pixelGrid * 	0.50)";
					style = 1;
				};
				class West: ctrlCheckbox
				{
					h = "8 * (pixelH * pixelGrid * 	0.50)";
					idc = 101;
					textureChecked = "\a3\3DEN\Data\Attributes\GuerAllegiance\friendly_ca.paa";
					textureDisabledChecked = "\a3\3DEN\Data\Attributes\GuerAllegiance\friendly_ca.paa";
					textureDisabledUnchecked = "\a3\3DEN\Data\Attributes\GuerAllegiance\enemy_ca.paa";
					textureFocusedChecked = "\a3\3DEN\Data\Attributes\GuerAllegiance\friendly_ca.paa";
					textureFocusedUnchecked = "\a3\3DEN\Data\Attributes\GuerAllegiance\enemy_ca.paa";
					textureHoverChecked = "\a3\3DEN\Data\Attributes\GuerAllegiance\friendly_ca.paa";
					textureHoverUnchecked = "\a3\3DEN\Data\Attributes\GuerAllegiance\enemy_ca.paa";
					texturePressedChecked = "\a3\3DEN\Data\Attributes\GuerAllegiance\friendly_ca.paa";
					texturePressedUnchecked = "\a3\3DEN\Data\Attributes\GuerAllegiance\enemy_ca.paa";
					textureUnchecked = "\a3\3DEN\Data\Attributes\GuerAllegiance\enemy_ca.paa";
					w = "8 * (pixelW * pixelGrid * 	0.50)";
					x = "(	48 + 	82 * 0.5 - 12) * (pixelW * pixelGrid * 	0.50)";
					y = "2 * (pixelH * pixelGrid * 	0.50)";
				};
				class WestIcon: ctrlStaticPictureKeepAspect
				{
					h = "12 * (pixelH * pixelGrid * 	0.50)";
					text = "\a3\3DEN\Data\Displays\Display3DEN\PanelRight\side_west_ca.paa";
					w = "12 * (pixelW * pixelGrid * 	0.50)";
					x = "(	48 + 	82 * 0.5 - 14) * (pixelW * pixelGrid * 	0.50)";
				};
			};
		};
		class Gusts: Overcast {};
		class Lock: Combo
		{
			class Controls: Controls
			{
				class Title: Title {};
				class Value: Value
				{
					class Items
					{
						class Default
						{
							text = "Default";
							tooltip = "Group leaders and anyone who was ordered in by their group leader can get in";
							value = 1;
						};
						class Locked
						{
							text = "Locked";
							tooltip = "No one can get in";
							value = 2;
						};
						class LockedForPlayer
						{
							text = "Locked for players";
							tooltip = "Anyone except for players can get in";
							value = 3;
						};
						class Unlocked
						{
							text = "Unlocked";
							tooltip = "Anyone can get in";
							value = 0;
						};
					};
				};
			};
		};
		class LoiterDirection: Toolbox
		{
			h = "2 * 	5 * (pixelH * pixelGrid * 	0.50)";
			class Controls: Controls
			{
				class Title: Title
				{
					h = "2 * 	5 * (pixelH * pixelGrid * 	0.50)";
				};
				class Value: Value
				{
					columns = 2;
					h = "2 * 	5 * (pixelH * pixelGrid * 	0.50)";
					idc = 100;
					rows = 1;
					strings[] = {"\a3\3DEN\Data\Attributes\LoiterDirection\ccw_ca.paa", "\a3\3DEN\Data\Attributes\LoiterDirection\cw_ca.paa"};
					style = "0x02 + 0x30 + 0x800";
					values[] = {0, 1};
				};
			};
		};
		class MarkerBrush: Combo
		{
			class Controls: Controls
			{
				class Title: Title {};
				class Value: Value
				{
					class ItemsConfig
					{
						path[] = {"CfgMarkerBrushes"};
						propertyPicture = "texture";
						propertyText = "name";
					};
				};
			};
		};
		class MarkerColor: Combo
		{
			class Controls: Controls
			{
				class Title: Title {};
				class Value: Value
				{
					onLoad = "				_control = _this select 0;				_config = _this select 1;				{					if (getnumber (_x >> 'scope') > 0) then {						_color = (_x >> 'color') call bis_fnc_colorConfigToRGBA;						_lbadd = _control lbadd gettext (_x >> 'name');						_control lbsetdata [_lbadd,configname _x];						_control lbsetpicture [_lbadd,'#(argb,8,8,3)color(1,1,1,1)'];						_control lbsetpicturecolor [_lbadd,_color];						_control lbsetpicturecolorselected [_lbadd,_color];						_control lbsettooltip [_lbadd,(_control lbtext _lbadd) + '\n' + (_control lbdata _lbadd)];					};				} foreach configproperties [configfile >> 'cfgmarkercolors','isclass _x'];			";
				};
			};
		};
		class ModuleInfo: Default
		{
			attributeLoad = "[_this,_config] call bis_fnc_3DENModuleDescription;";
			attributeSave = "";
			h = "6 * 	5 * (pixelH * pixelGrid * 	0.50)";
			class Controls
			{
				class Group: ctrlControlsGroup
				{
					h = "4 * 	5 * (pixelH * pixelGrid * 	0.50)";
					idc = 101;
					w = "(	48 + 	82 - 5) * (pixelW * pixelGrid * 	0.50)";
					x = "5 * (pixelW * pixelGrid * 	0.50)";
					y = "(2 + 	5) * (pixelH * pixelGrid * 	0.50)";
					class Controls
					{
						class Text: ctrlStructuredText
						{
							colorBackground[] = {0, 0, 0, 0.25};
							h = "4 * 	5 * (pixelH * pixelGrid * 	0.50)";
							idc = 100;
							size = "3.96 * (1 / (getResolution select 3)) * pixelGrid * 0.5";
							w = "(	48 + 	82 - 5) * (pixelW * pixelGrid * 	0.50)";
						};
					};
				};
				class TitleCustom: ctrlStatic
				{
					colorBackground[] = {0, 0, 0, 0.5};
					h = "5 * (pixelH * pixelGrid * 	0.50)";
					text = "Module Info";
					w = "(	48 + 	82 - 5) * (pixelW * pixelGrid * 	0.50)";
					x = "5 * (pixelW * pixelGrid * 	0.50)";
					y = "2 * (pixelH * pixelGrid * 	0.50)";
				};
			};
		};
		class ModuleObjects: Combo
		{
			attributeLoad = "		comment 'DO NOT COPY THIS CODE TO YOUR ATTRIBUTE CONFIG UNLESS YOU ARE CHANGING SOMETHING IN THE CODE!';		_ctrlCombo = _this controlsGroupCtrl 100;		_id = if (_value isequaltype []) then {_value select 0} else {parsenumber _value};		for '_i' from 0 to (lbsize _ctrlCombo - 1) do {			if ((_ctrlCombo lbvalue _i) == _id) exitwith {_ctrlCombo lbsetcursel _i;};		};		if (lbcursel _ctrlCombo < 0) then {_ctrlCombo lbsetcursel 1;};	";
			attributeSave = "		comment 'DO NOT COPY THIS CODE TO YOUR ATTRIBUTE CONFIG UNLESS YOU ARE CHANGING SOMETHING IN THE CODE!';		_ctrlCombo = _this controlsGroupCtrl 100;		_cursel = lbcursel _ctrlCombo;		if (_cursel < 3) then {			str (_ctrlCombo lbvalue _cursel)		} else {			[_ctrlCombo lbvalue _cursel]		};	";
			class Controls: Controls
			{
				class Title: Title {};
				class Value: Value
				{
					onLoad = "				_control = _this select 0;				_picture = gettext (configfile >> 'Cfg3DEN' >> 'Layer' >> 'Draw' >> 'icon');				_layerText = localize 'STR_3DEN_Layer_textSingular';				_layers = [];				{					_layers pushback [(_x get3denAttribute 'Name') select 0,_x];				} foreach (all3DENEntities select 6);				_layers sort true;				{					_name = _x select 0;					_lbAdd = _control lbadd format ['%1: %2',_layerText,_name];					_control lbsetvalue [_lbAdd,-(_x select 1) - 1];					_control lbsetpicture [_lbAdd,_picture];				} foreach _layers;			";
					class Items
					{
						class Objects
						{
							text = "Synchronized objects only";
							value = "0";
						};
						class ObjectsAndGroups
						{
							default = "1";
							text = "Groups of synchronized objects";
							value = "1";
						};
						class Trigger
						{
							text = "Objects in synchronized triggers";
							value = "2";
						};
					};
				};
			};
		};
		class Music: ComboPreview
		{
			class Controls: Controls
			{
				class Preview: Preview {};
				class Title: Title {};
				class Value: Value
				{
					class Items
					{
						class None
						{
							data = "$NONE$";
							text = "No Music";
							value = -1;
						};
					};
					class ItemsConfig
					{
						localConfig = 1;
						path[] = {"CfgMusic"};
						propertyText = "name";
						sort = 2;
					};
				};
			};
		};
		class NameSound: Combo
		{
			class Controls: Controls
			{
				class Title: Title {};
				class Value: Value
				{
					onLoad = "lbsortbyvalue (_this select 0);";
					class Items
					{
						class Adams
						{
							data = "Adams";
							picture = "\a3\Data_f\cfgFactionClasses_BLU_ca.paa";
							text = "Adams";
							value = 0;
						};
						class Amin
						{
							data = "Amin";
							picture = "\a3\Data_f\cfgFactionClasses_OPF_ca.paa";
							text = "Amin";
							value = 1;
						};
						class Anthis
						{
							data = "Anthis";
							picture = "\a3\Data_f\cfgFactionClasses_IND_ca.paa";
							text = "Anthis";
							value = 2;
						};
						class Armstrong
						{
							data = "Armstrong";
							picture = "\a3\Data_f\cfgFactionClasses_BLU_ca.paa";
							text = "Armstrong";
							value = 0;
						};
						class Bennett
						{
							data = "Bennett";
							picture = "\a3\Data_f\cfgFactionClasses_BLU_ca.paa";
							text = "Bennett";
							value = 0;
						};
						class Campbell
						{
							data = "Campbell";
							picture = "\a3\Data_f\cfgFactionClasses_BLU_ca.paa";
							text = "Campbell";
							value = 0;
						};
						class Costa
						{
							data = "Costa";
							picture = "\a3\Data_f\cfgFactionClasses_IND_ca.paa";
							text = "Costa";
							value = 2;
						};
						class Dimitirou
						{
							data = "Dimitirou";
							picture = "\a3\Data_f\cfgFactionClasses_IND_ca.paa";
							text = "Dimitirou";
							value = 2;
						};
						class Dixon
						{
							data = "Dixon";
							picture = "\a3\Data_f\cfgFactionClasses_BLU_ca.paa";
							text = "Dixon";
							value = 0;
						};
						class Elias
						{
							data = "Elias";
							picture = "\a3\Data_f\cfgFactionClasses_IND_ca.paa";
							text = "Elias";
							value = 2;
						};
						class Everett
						{
							data = "Everett";
							picture = "\a3\Data_f\cfgFactionClasses_BLU_ca.paa";
							text = "Everett";
							value = 0;
						};
						class Fahim
						{
							data = "Fahim";
							picture = "\a3\Data_f\cfgFactionClasses_OPF_ca.paa";
							text = "Fahim";
							value = 1;
						};
						class Fox
						{
							data = "Fox";
							picture = "\a3\3DEN\Data\Attributes\NameSound\special_ca.paa";
							text = "Fox";
							value = 3;
						};
						class Franklin
						{
							data = "Franklin";
							picture = "\a3\Data_f\cfgFactionClasses_BLU_ca.paa";
							text = "Franklin";
							value = 0;
						};
						class Frost
						{
							data = "Frost";
							picture = "\a3\Data_f\cfgFactionClasses_BLU_ca.paa";
							text = "Frost";
							value = 0;
						};
						class Gekas
						{
							data = "Gekas";
							picture = "\a3\Data_f\cfgFactionClasses_IND_ca.paa";
							text = "Gekas";
							value = 2;
						};
						class Ghost
						{
							data = "Ghost";
							picture = "\a3\3DEN\Data\Attributes\NameSound\special_ca.paa";
							text = "Ghost";
							value = 3;
						};
						class Givens
						{
							data = "Givens";
							picture = "\a3\Data_f\cfgFactionClasses_BLU_ca.paa";
							text = "Givens";
							value = 0;
						};
						class Habibi
						{
							data = "Habibi";
							picture = "\a3\Data_f\cfgFactionClasses_OPF_ca.paa";
							text = "Habibi";
							value = 1;
						};
						class Hardy
						{
							data = "Hardy";
							picture = "\a3\Data_f\cfgFactionClasses_BLU_ca.paa";
							text = "Hardy";
							value = 0;
						};
						class Hawkins
						{
							data = "Hawkins";
							picture = "\a3\Data_f\cfgFactionClasses_BLU_ca.paa";
							text = "Hawkins";
							value = 0;
						};
						class Jackson
						{
							data = "Jackson";
							picture = "\a3\Data_f\cfgFactionClasses_BLU_ca.paa";
							text = "Jackson";
							value = 0;
						};
						class James
						{
							data = "James";
							picture = "\a3\Data_f\cfgFactionClasses_BLU_ca.paa";
							text = "James";
							value = 0;
						};
						class Jawadi
						{
							data = "Jawadi";
							picture = "\a3\Data_f\cfgFactionClasses_OPF_ca.paa";
							text = "Jawadi";
							value = 1;
						};
						class Jester
						{
							data = "Jester";
							picture = "\a3\3DEN\Data\Attributes\NameSound\special_ca.paa";
							text = "Jester";
							value = 3;
						};
						class Kerry
						{
							data = "Kerry";
							picture = "\a3\Data_f\cfgFactionClasses_BLU_ca.paa";
							text = "Kerry";
							value = 0;
						};
						class Korneedler
						{
							data = "Korneedler";
							picture = "\a3\3DEN\Data\Attributes\NameSound\special_ca.paa";
							text = "Korneedler";
							value = 3;
						};
						class Kouris
						{
							data = "Kouris";
							picture = "\a3\Data_f\cfgFactionClasses_IND_ca.paa";
							text = "Kouris";
							value = 2;
						};
						class Kushan
						{
							data = "Kushan";
							picture = "\a3\Data_f\cfgFactionClasses_OPF_ca.paa";
							text = "Kushan";
							value = 1;
						};
						class Lacey
						{
							data = "Lacey";
							picture = "\a3\Data_f\cfgFactionClasses_BLU_ca.paa";
							text = "Lacey";
							value = 0;
						};
						class Larkin
						{
							data = "Larkin";
							picture = "\a3\Data_f\cfgFactionClasses_BLU_ca.paa";
							text = "Larkin";
							value = 0;
						};
						class Leventis
						{
							data = "Leventis";
							picture = "\a3\Data_f\cfgFactionClasses_IND_ca.paa";
							text = "Leventis";
							value = 2;
						};
						class Levine
						{
							data = "Levine";
							picture = "\a3\Data_f\cfgFactionClasses_BLU_ca.paa";
							text = "Levine";
							value = 0;
						};
						class Lopez
						{
							data = "Lopez";
							picture = "\a3\Data_f\cfgFactionClasses_BLU_ca.paa";
							text = "Lopez";
							value = 0;
						};
						class Markos
						{
							data = "Markos";
							picture = "\a3\Data_f\cfgFactionClasses_IND_ca.paa";
							text = "Markos";
							value = 2;
						};
						class Martinez
						{
							data = "Martinez";
							picture = "\a3\Data_f\cfgFactionClasses_BLU_ca.paa";
							text = "Martinez";
							value = 0;
						};
						class Masood
						{
							data = "Masood";
							picture = "\a3\Data_f\cfgFactionClasses_OPF_ca.paa";
							text = "Masood";
							value = 1;
						};
						class McKay
						{
							data = "McKay";
							picture = "\a3\Data_f\cfgFactionClasses_BLU_ca.paa";
							text = "McKay";
							value = 0;
						};
						class McKendrick
						{
							data = "McKendrick";
							picture = "\a3\Data_f\cfgFactionClasses_BLU_ca.paa";
							text = "McKendrick";
							value = 0;
						};
						class Miller
						{
							data = "Miller";
							picture = "\a3\Data_F_Exp\FactionIcons\icon_CTRG_CA.paa";
							text = "Miller";
							value = 0;
						};
						class Nazari
						{
							data = "Nazari";
							picture = "\a3\Data_f\cfgFactionClasses_OPF_ca.paa";
							text = "Nazari";
							value = 1;
						};
						class Nichols
						{
							data = "Nichols";
							picture = "\a3\Data_f\cfgFactionClasses_BLU_ca.paa";
							text = "Nichols";
							value = 0;
						};
						class Nicolo
						{
							data = "Nicolo";
							picture = "\a3\Data_f\cfgFactionClasses_IND_ca.paa";
							text = "Nicolo";
							value = 2;
						};
						class Nikas
						{
							data = "Nikas";
							picture = "\a3\Data_f\cfgFactionClasses_IND_ca.paa";
							text = "Nikas";
							value = 2;
						};
						class Nomad
						{
							data = "Nomad";
							picture = "\a3\3DEN\Data\Attributes\NameSound\special_ca.paa";
							text = "Nomad";
							value = 3;
						};
						class None
						{
							data = "";
							default = 1;
							text = "No Call Sign";
							value = -1;
						};
						class Northgate
						{
							data = "Northgate";
							picture = "\a3\Data_f\cfgFactionClasses_BLU_ca.paa";
							text = "Northgate";
							value = 0;
						};
						class OConnor
						{
							data = "OConnor";
							picture = "\a3\Data_f\cfgFactionClasses_BLU_ca.paa";
							text = "OConnor";
							value = 0;
						};
						class Panas
						{
							data = "Panas";
							picture = "\a3\Data_f\cfgFactionClasses_IND_ca.paa";
							text = "Panas";
							value = 2;
						};
						class Patterson
						{
							data = "Patterson";
							picture = "\a3\Data_f\cfgFactionClasses_BLU_ca.paa";
							text = "Patterson";
							value = 0;
						};
						class Petros
						{
							data = "Petros";
							picture = "\a3\Data_f\cfgFactionClasses_IND_ca.paa";
							text = "Petros";
							value = 2;
						};
						class Razer
						{
							data = "Razer";
							picture = "\a3\3DEN\Data\Attributes\NameSound\special_ca.paa";
							text = "Razer";
							value = 3;
						};
						class Reynolds
						{
							data = "Reynolds";
							picture = "\a3\Data_f\cfgFactionClasses_BLU_ca.paa";
							text = "Reynolds";
							value = 0;
						};
						class Rosi
						{
							data = "Rosi";
							picture = "\a3\Data_f\cfgFactionClasses_IND_ca.paa";
							text = "Rosi";
							value = 2;
						};
						class Ryan
						{
							data = "Ryan";
							picture = "\a3\Data_f\cfgFactionClasses_BLU_ca.paa";
							text = "Ryan";
							value = 0;
						};
						class Samaras
						{
							data = "Samaras";
							picture = "\a3\Data_f\cfgFactionClasses_IND_ca.paa";
							text = "Samaras";
							value = 2;
						};
						class Siddiqi
						{
							data = "Siddiqi";
							picture = "\a3\Data_f\cfgFactionClasses_OPF_ca.paa";
							text = "Siddiqi";
							value = 1;
						};
						class Snake
						{
							data = "Snake";
							picture = "\a3\3DEN\Data\Attributes\NameSound\special_ca.paa";
							text = "Snake";
							value = 3;
						};
						class Stavrou
						{
							data = "Stavrou";
							picture = "\a3\Data_f\cfgFactionClasses_IND_ca.paa";
							text = "Stavrou";
							value = 2;
						};
						class Stranger
						{
							data = "Stranger";
							picture = "\a3\3DEN\Data\Attributes\NameSound\special_ca.paa";
							text = "Stranger";
							value = 3;
						};
						class Sykes
						{
							data = "Sykes";
							picture = "\a3\Data_f\cfgFactionClasses_BLU_ca.paa";
							text = "Sykes";
							value = 0;
						};
						class Takhtar
						{
							data = "Takhtar";
							picture = "\a3\Data_f\cfgFactionClasses_OPF_ca.paa";
							text = "Takhtar";
							value = 1;
						};
						class Tanny
						{
							data = "Tanny";
							picture = "\a3\Data_f\cfgFactionClasses_BLU_ca.paa";
							text = "Tanny";
							value = 0;
						};
						class Taylor
						{
							data = "Taylor";
							picture = "\a3\Data_f\cfgFactionClasses_BLU_ca.paa";
							text = "Taylor";
							value = 0;
						};
						class Viper
						{
							data = "Viper";
							picture = "\a3\3DEN\Data\Attributes\NameSound\special_ca.paa";
							text = "Viper";
							value = 3;
						};
						class Walker
						{
							data = "Walker";
							picture = "\a3\Data_f\cfgFactionClasses_BLU_ca.paa";
							text = "Walker";
							value = 0;
						};
						class Wardak
						{
							data = "Wardak";
							picture = "\a3\Data_f\cfgFactionClasses_OPF_ca.paa";
							text = "Wardak";
							value = 1;
						};
						class Yousuf
						{
							data = "Yousuf";
							picture = "\a3\Data_f\cfgFactionClasses_OPF_ca.paa";
							text = "Yousuf";
							value = 1;
						};
					};
				};
			};
		};
		class ObjectState: Title
		{
			attributeLoad = "['objectState_attributeLoad',[get3DENSelected 'logic' select 0,_this,_value]] call bis_fnc_moduleEditTerrainObject";
			attributeSave = "['objectState_attributeSave',[get3DENSelected 'logic' select 0,_this]] call bis_fnc_moduleEditTerrainObject";
			h = "2 * 																	5						 * (pixelH * pixelGrid * 	0.50)";
			class Controls: Controls
			{
				class Title: Title
				{
					colorBackground[] = {0, 0, 0, 0};
					h = "2 * 																	5						 * (pixelH * pixelGrid * 	0.50)";
				};
				class Value: ctrlControlsGroupNoScrollbars
				{
					h = "2 * 																	5						 * (pixelH * pixelGrid * 	0.50)";
					idc = 100;
					w = "80 * (pixelW * pixelGrid * 	0.50)";
					x = "48 * (pixelW * pixelGrid * 	0.50)";
					class Controls
					{
						class Checkbox1: ctrlCheckboxBaseline
						{
							color[] = {1, 1, 1, 1};
							colorBackground[] = {0, 0, 0, 0.25};
							colorBackgroundDisabled[] = {0, 0, 0, 0.25};
							colorBackgroundFocused[] = {0, 0, 0, 0.25};
							colorBackgroundHover[] = {0, 0, 0, 0.25};
							colorBackgroundPressed[] = {0, 0, 0, 0.25};
							h = "2 * 																	5						 * (pixelH * pixelGrid * 	0.50) - 							pixelH";
							idc = 101;
							onCheckedChanged = "['objectState_onCheckedChanged',[get3DENSelected 'logic' select 0,_this]] call bis_fnc_moduleEditTerrainObject";
							textureChecked = "\A3\Modules_F\Data\EditTerrainObject\textureChecked_undamaged_ca.paa";
							textureDisabledChecked = "\A3\Modules_F\Data\EditTerrainObject\textureChecked_undamaged_ca.paa";
							textureDisabledUnchecked = "\A3\Modules_F\Data\EditTerrainObject\textureUnchecked_undamaged_ca.paa";
							textureFocusedChecked = "\A3\Modules_F\Data\EditTerrainObject\textureChecked_undamaged_ca.paa";
							textureFocusedUnchecked = "\A3\Modules_F\Data\EditTerrainObject\textureUnchecked_undamaged_ca.paa";
							textureHoverChecked = "\A3\Modules_F\Data\EditTerrainObject\textureChecked_undamaged_ca.paa";
							textureHoverUnchecked = "\A3\Modules_F\Data\EditTerrainObject\textureUnchecked_undamaged_ca.paa";
							texturePressedChecked = "\A3\Modules_F\Data\EditTerrainObject\textureChecked_undamaged_ca.paa";
							texturePressedUnchecked = "\A3\Modules_F\Data\EditTerrainObject\textureUnchecked_undamaged_ca.paa";
							textureUnchecked = "\A3\Modules_F\Data\EditTerrainObject\textureUnchecked_undamaged_ca.paa";
							tooltip = "Undamaged";
							w = "2 * 																	5						 * (pixelW * pixelGrid * 	0.50) - 							pixelW";
							x = 0;
						};
						class Checkbox2: Checkbox1
						{
							idc = "100+2";
							textureChecked = "\A3\Modules_F\Data\EditTerrainObject\textureChecked_damaged1_ca.paa";
							textureDisabledChecked = "\A3\Modules_F\Data\EditTerrainObject\textureChecked_damaged1_ca.paa";
							textureDisabledUnchecked = "\A3\Modules_F\Data\EditTerrainObject\textureUnchecked_damaged1_ca.paa";
							textureFocusedChecked = "\A3\Modules_F\Data\EditTerrainObject\textureChecked_damaged1_ca.paa";
							textureFocusedUnchecked = "\A3\Modules_F\Data\EditTerrainObject\textureUnchecked_damaged1_ca.paa";
							textureHoverChecked = "\A3\Modules_F\Data\EditTerrainObject\textureChecked_damaged1_ca.paa";
							textureHoverUnchecked = "\A3\Modules_F\Data\EditTerrainObject\textureUnchecked_damaged1_ca.paa";
							texturePressedChecked = "\A3\Modules_F\Data\EditTerrainObject\textureChecked_damaged1_ca.paa";
							texturePressedUnchecked = "\A3\Modules_F\Data\EditTerrainObject\textureUnchecked_damaged1_ca.paa";
							textureUnchecked = "\A3\Modules_F\Data\EditTerrainObject\textureUnchecked_damaged1_ca.paa";
							tooltip = "Damaged 1";
							x = "(2-1) * 							2 * 																	5						 * (pixelW * pixelGrid * 	0.50)";
						};
						class Checkbox3: Checkbox1
						{
							idc = "100+3";
							textureChecked = "\A3\Modules_F\Data\EditTerrainObject\textureChecked_damaged2_ca.paa";
							textureDisabledChecked = "\A3\Modules_F\Data\EditTerrainObject\textureChecked_damaged2_ca.paa";
							textureDisabledUnchecked = "\A3\Modules_F\Data\EditTerrainObject\textureUnchecked_damaged2_ca.paa";
							textureFocusedChecked = "\A3\Modules_F\Data\EditTerrainObject\textureChecked_damaged2_ca.paa";
							textureFocusedUnchecked = "\A3\Modules_F\Data\EditTerrainObject\textureUnchecked_damaged2_ca.paa";
							textureHoverChecked = "\A3\Modules_F\Data\EditTerrainObject\textureChecked_damaged2_ca.paa";
							textureHoverUnchecked = "\A3\Modules_F\Data\EditTerrainObject\textureUnchecked_damaged2_ca.paa";
							texturePressedChecked = "\A3\Modules_F\Data\EditTerrainObject\textureChecked_damaged2_ca.paa";
							texturePressedUnchecked = "\A3\Modules_F\Data\EditTerrainObject\textureUnchecked_damaged2_ca.paa";
							textureUnchecked = "\A3\Modules_F\Data\EditTerrainObject\textureUnchecked_damaged2_ca.paa";
							tooltip = "Damaged 2";
							x = "(3-1) * 							2 * 																	5						 * (pixelW * pixelGrid * 	0.50)";
						};
						class Checkbox4: Checkbox1
						{
							idc = "100+4";
							textureChecked = "\A3\Modules_F\Data\EditTerrainObject\textureChecked_damaged12_ca.paa";
							textureDisabledChecked = "\A3\Modules_F\Data\EditTerrainObject\textureChecked_damaged12_ca.paa";
							textureDisabledUnchecked = "\A3\Modules_F\Data\EditTerrainObject\textureUnchecked_damaged12_ca.paa";
							textureFocusedChecked = "\A3\Modules_F\Data\EditTerrainObject\textureChecked_damaged12_ca.paa";
							textureFocusedUnchecked = "\A3\Modules_F\Data\EditTerrainObject\textureUnchecked_damaged12_ca.paa";
							textureHoverChecked = "\A3\Modules_F\Data\EditTerrainObject\textureChecked_damaged12_ca.paa";
							textureHoverUnchecked = "\A3\Modules_F\Data\EditTerrainObject\textureUnchecked_damaged12_ca.paa";
							texturePressedChecked = "\A3\Modules_F\Data\EditTerrainObject\textureChecked_damaged12_ca.paa";
							texturePressedUnchecked = "\A3\Modules_F\Data\EditTerrainObject\textureUnchecked_damaged12_ca.paa";
							textureUnchecked = "\A3\Modules_F\Data\EditTerrainObject\textureUnchecked_damaged12_ca.paa";
							tooltip = "Damaged 1&2";
							x = "(4-1) * 							2 * 																	5						 * (pixelW * pixelGrid * 	0.50)";
						};
						class Checkbox5: Checkbox1
						{
							idc = "100+5";
							textureChecked = "\A3\Modules_F\Data\EditTerrainObject\textureChecked_destroyed_ca.paa";
							textureDisabledChecked = "\A3\Modules_F\Data\EditTerrainObject\textureChecked_destroyed_ca.paa";
							textureDisabledUnchecked = "\A3\Modules_F\Data\EditTerrainObject\textureUnchecked_destroyed_ca.paa";
							textureFocusedChecked = "\A3\Modules_F\Data\EditTerrainObject\textureChecked_destroyed_ca.paa";
							textureFocusedUnchecked = "\A3\Modules_F\Data\EditTerrainObject\textureUnchecked_destroyed_ca.paa";
							textureHoverChecked = "\A3\Modules_F\Data\EditTerrainObject\textureChecked_destroyed_ca.paa";
							textureHoverUnchecked = "\A3\Modules_F\Data\EditTerrainObject\textureUnchecked_destroyed_ca.paa";
							texturePressedChecked = "\A3\Modules_F\Data\EditTerrainObject\textureChecked_destroyed_ca.paa";
							texturePressedUnchecked = "\A3\Modules_F\Data\EditTerrainObject\textureUnchecked_destroyed_ca.paa";
							textureUnchecked = "\A3\Modules_F\Data\EditTerrainObject\textureUnchecked_destroyed_ca.paa";
							tooltip = "Destroyed";
							x = "(5-1) * 							2 * 																	5						 * (pixelW * pixelGrid * 	0.50)";
						};
						class Checkbox6: Checkbox1
						{
							idc = "100+6";
							textureChecked = "\A3\Modules_F\Data\EditTerrainObject\textureChecked_hidden_ca.paa";
							textureDisabledChecked = "\A3\Modules_F\Data\EditTerrainObject\textureChecked_hidden_ca.paa";
							textureDisabledUnchecked = "\A3\Modules_F\Data\EditTerrainObject\textureUnchecked_hidden_ca.paa";
							textureFocusedChecked = "\A3\Modules_F\Data\EditTerrainObject\textureChecked_hidden_ca.paa";
							textureFocusedUnchecked = "\A3\Modules_F\Data\EditTerrainObject\textureUnchecked_hidden_ca.paa";
							textureHoverChecked = "\A3\Modules_F\Data\EditTerrainObject\textureChecked_hidden_ca.paa";
							textureHoverUnchecked = "\A3\Modules_F\Data\EditTerrainObject\textureUnchecked_hidden_ca.paa";
							texturePressedChecked = "\A3\Modules_F\Data\EditTerrainObject\textureChecked_hidden_ca.paa";
							texturePressedUnchecked = "\A3\Modules_F\Data\EditTerrainObject\textureUnchecked_hidden_ca.paa";
							textureUnchecked = "\A3\Modules_F\Data\EditTerrainObject\textureUnchecked_hidden_ca.paa";
							tooltip = "Hidden";
							x = "(6-1) * 							2 * 																	5						 * (pixelW * pixelGrid * 	0.50)";
						};
					};
				};
			};
		};
		class ObjectTexture: Combo
		{
			class Controls: Controls
			{
				class Title: Title {};
				class Value: Value
				{
					class Items
					{
						class Random
						{
							data = "";
							text = "Random";
						};
					};
				};
			};
		};
		class ObjectTypeFilter: Title
		{
			attributeLoad = "['objectTypeFilter_attributeLoad',[get3DENSelected 'logic' select 0,_this,_value]] call bis_fnc_moduleEditTerrainObject";
			attributeSave = "['objectTypeFilter_attributeSave',[get3DENSelected 'logic' select 0,_this]] call bis_fnc_moduleEditTerrainObject";
			h = "2 * 																	5						 * (pixelH * pixelGrid * 	0.50)";
			class Controls: Controls
			{
				class Title: Title
				{
					colorBackground[] = {0, 0, 0, 0};
					h = "2 * 																	5						 * (pixelH * pixelGrid * 	0.50)";
				};
				class Value: ctrlControlsGroupNoScrollbars
				{
					h = "2 * 																	5						 * (pixelH * pixelGrid * 	0.50)";
					idc = 100;
					w = "80 * (pixelW * pixelGrid * 	0.50)";
					x = "48 * (pixelW * pixelGrid * 	0.50)";
					class Controls
					{
						class Checkbox1: ctrlCheckboxBaseline
						{
							color[] = {1, 1, 1, 1};
							colorBackground[] = {0, 0, 0, 0.25};
							colorBackgroundDisabled[] = {0, 0, 0, 0.25};
							colorBackgroundFocused[] = {0, 0, 0, 0.25};
							colorBackgroundHover[] = {0, 0, 0, 0.25};
							colorBackgroundPressed[] = {0, 0, 0, 0.25};
							h = "2 * 																	5						 * (pixelH * pixelGrid * 	0.50) - 							pixelH";
							idc = 101;
							textureChecked = "\A3\Modules_F\Data\EditTerrainObject\textureChecked_building_ca.paa";
							textureDisabledChecked = "\A3\Modules_F\Data\EditTerrainObject\textureChecked_building_ca.paa";
							textureDisabledUnchecked = "\A3\Modules_F\Data\EditTerrainObject\textureUnchecked_building_ca.paa";
							textureFocusedChecked = "\A3\Modules_F\Data\EditTerrainObject\textureChecked_building_ca.paa";
							textureFocusedUnchecked = "\A3\Modules_F\Data\EditTerrainObject\textureUnchecked_building_ca.paa";
							textureHoverChecked = "\A3\Modules_F\Data\EditTerrainObject\textureChecked_building_ca.paa";
							textureHoverUnchecked = "\A3\Modules_F\Data\EditTerrainObject\textureUnchecked_building_ca.paa";
							texturePressedChecked = "\A3\Modules_F\Data\EditTerrainObject\textureChecked_building_ca.paa";
							texturePressedUnchecked = "\A3\Modules_F\Data\EditTerrainObject\textureUnchecked_building_ca.paa";
							textureUnchecked = "\A3\Modules_F\Data\EditTerrainObject\textureUnchecked_building_ca.paa";
							tooltip = "Buildings";
							w = "2 * 																	5						 * (pixelW * pixelGrid * 	0.50) - 							pixelW";
							x = 0;
							y = 0;
						};
						class Checkbox2: Checkbox1
						{
							idc = "100+2";
							textureChecked = "\A3\Modules_F\Data\EditTerrainObject\textureChecked_wall_ca.paa";
							textureDisabledChecked = "\A3\Modules_F\Data\EditTerrainObject\textureChecked_wall_ca.paa";
							textureDisabledUnchecked = "\A3\Modules_F\Data\EditTerrainObject\textureUnchecked_wall_ca.paa";
							textureFocusedChecked = "\A3\Modules_F\Data\EditTerrainObject\textureChecked_wall_ca.paa";
							textureFocusedUnchecked = "\A3\Modules_F\Data\EditTerrainObject\textureUnchecked_wall_ca.paa";
							textureHoverChecked = "\A3\Modules_F\Data\EditTerrainObject\textureChecked_wall_ca.paa";
							textureHoverUnchecked = "\A3\Modules_F\Data\EditTerrainObject\textureUnchecked_wall_ca.paa";
							texturePressedChecked = "\A3\Modules_F\Data\EditTerrainObject\textureChecked_wall_ca.paa";
							texturePressedUnchecked = "\A3\Modules_F\Data\EditTerrainObject\textureUnchecked_wall_ca.paa";
							textureUnchecked = "\A3\Modules_F\Data\EditTerrainObject\textureUnchecked_wall_ca.paa";
							tooltip = "Walls & Fences";
							x = "(2-1) * 							2 * 																	5						 * (pixelW * pixelGrid * 	0.50)";
						};
						class Checkbox3: Checkbox1
						{
							idc = "100+3";
							textureChecked = "\A3\Modules_F\Data\EditTerrainObject\textureChecked_tree_ca.paa";
							textureDisabledChecked = "\A3\Modules_F\Data\EditTerrainObject\textureChecked_tree_ca.paa";
							textureDisabledUnchecked = "\A3\Modules_F\Data\EditTerrainObject\textureUnchecked_tree_ca.paa";
							textureFocusedChecked = "\A3\Modules_F\Data\EditTerrainObject\textureChecked_tree_ca.paa";
							textureFocusedUnchecked = "\A3\Modules_F\Data\EditTerrainObject\textureUnchecked_tree_ca.paa";
							textureHoverChecked = "\A3\Modules_F\Data\EditTerrainObject\textureChecked_tree_ca.paa";
							textureHoverUnchecked = "\A3\Modules_F\Data\EditTerrainObject\textureUnchecked_tree_ca.paa";
							texturePressedChecked = "\A3\Modules_F\Data\EditTerrainObject\textureChecked_tree_ca.paa";
							texturePressedUnchecked = "\A3\Modules_F\Data\EditTerrainObject\textureUnchecked_tree_ca.paa";
							textureUnchecked = "\A3\Modules_F\Data\EditTerrainObject\textureUnchecked_tree_ca.paa";
							tooltip = "Vegetation";
							x = "(3-1) * 							2 * 																	5						 * (pixelW * pixelGrid * 	0.50)";
						};
						class Checkbox4: Checkbox1
						{
							idc = "100+4";
							textureChecked = "\A3\Modules_F\Data\EditTerrainObject\textureChecked_misc_ca.paa";
							textureDisabledChecked = "\A3\Modules_F\Data\EditTerrainObject\textureChecked_misc_ca.paa";
							textureDisabledUnchecked = "\A3\Modules_F\Data\EditTerrainObject\textureUnchecked_misc_ca.paa";
							textureFocusedChecked = "\A3\Modules_F\Data\EditTerrainObject\textureChecked_misc_ca.paa";
							textureFocusedUnchecked = "\A3\Modules_F\Data\EditTerrainObject\textureUnchecked_misc_ca.paa";
							textureHoverChecked = "\A3\Modules_F\Data\EditTerrainObject\textureChecked_misc_ca.paa";
							textureHoverUnchecked = "\A3\Modules_F\Data\EditTerrainObject\textureUnchecked_misc_ca.paa";
							texturePressedChecked = "\A3\Modules_F\Data\EditTerrainObject\textureChecked_misc_ca.paa";
							texturePressedUnchecked = "\A3\Modules_F\Data\EditTerrainObject\textureUnchecked_misc_ca.paa";
							textureUnchecked = "\A3\Modules_F\Data\EditTerrainObject\textureUnchecked_misc_ca.paa";
							tooltip = "Other";
							x = "(4-1) * 							2 * 																	5						 * (pixelW * pixelGrid * 	0.50)";
						};
					};
				};
			};
		};
		class ObjectTypeFilterWithCounter: Title
		{
			attributeLoad = "['objectTypeFilter_attributeLoad',[get3DENSelected 'logic' select 0,_this,_value]] call bis_fnc_moduleHideTerrainObjects";
			attributeSave = "['objectTypeFilter_attributeSave',[get3DENSelected 'logic' select 0,_this]] call bis_fnc_moduleHideTerrainObjects";
			h = "3 * 	5 * (pixelH * pixelGrid * 	0.50)";
			class Controls: Controls
			{
				class Title: Title
				{
					colorBackground[] = {0, 0, 0, 0};
					h = "3 * 	5 * (pixelH * pixelGrid * 	0.50)";
				};
				class Value: ctrlControlsGroupNoScrollbars
				{
					h = "3 * 	5 * (pixelH * pixelGrid * 	0.50)";
					idc = 100;
					w = "82 * (pixelW * pixelGrid * 	0.50)";
					x = "48 * (pixelW * pixelGrid * 	0.50)";
					class Controls
					{
						class Checkbox1: ctrlCheckboxBaseline
						{
							color[] = {1, 1, 1, 1};
							colorBackground[] = {0, 0, 0, 0.25};
							colorBackgroundDisabled[] = {0, 0, 0, 0.25};
							colorBackgroundFocused[] = {0, 0, 0, 0.25};
							colorBackgroundHover[] = {0, 0, 0, 0.25};
							colorBackgroundPressed[] = {0, 0, 0, 0.25};
							h = "2 * 	5 * (pixelH * pixelGrid * 	0.50)";
							idc = 101;
							textureChecked = "\A3\Modules_F\Data\EditTerrainObject\textureChecked_building_ca.paa";
							textureDisabledChecked = "\A3\Modules_F\Data\EditTerrainObject\textureChecked_building_ca.paa";
							textureDisabledUnchecked = "\A3\Modules_F\Data\EditTerrainObject\textureUnchecked_building_ca.paa";
							textureFocusedChecked = "\A3\Modules_F\Data\EditTerrainObject\textureChecked_building_ca.paa";
							textureFocusedUnchecked = "\A3\Modules_F\Data\EditTerrainObject\textureUnchecked_building_ca.paa";
							textureHoverChecked = "\A3\Modules_F\Data\EditTerrainObject\textureChecked_building_ca.paa";
							textureHoverUnchecked = "\A3\Modules_F\Data\EditTerrainObject\textureUnchecked_building_ca.paa";
							texturePressedChecked = "\A3\Modules_F\Data\EditTerrainObject\textureChecked_building_ca.paa";
							texturePressedUnchecked = "\A3\Modules_F\Data\EditTerrainObject\textureUnchecked_building_ca.paa";
							textureUnchecked = "\A3\Modules_F\Data\EditTerrainObject\textureUnchecked_building_ca.paa";
							tooltip = "Buildings";
							w = "((			80 * (pixelW * pixelGrid * 	0.50) / 8) - 							pixelW)";
							x = 0;
						};
						class Checkbox2: Checkbox1
						{
							idc = "100+2";
							textureChecked = "\A3\Modules_F\Data\EditTerrainObject\textureChecked_wall_ca.paa";
							textureDisabledChecked = "\A3\Modules_F\Data\EditTerrainObject\textureChecked_wall_ca.paa";
							textureDisabledUnchecked = "\A3\Modules_F\Data\EditTerrainObject\textureUnchecked_wall_ca.paa";
							textureFocusedChecked = "\A3\Modules_F\Data\EditTerrainObject\textureChecked_wall_ca.paa";
							textureFocusedUnchecked = "\A3\Modules_F\Data\EditTerrainObject\textureUnchecked_wall_ca.paa";
							textureHoverChecked = "\A3\Modules_F\Data\EditTerrainObject\textureChecked_wall_ca.paa";
							textureHoverUnchecked = "\A3\Modules_F\Data\EditTerrainObject\textureUnchecked_wall_ca.paa";
							texturePressedChecked = "\A3\Modules_F\Data\EditTerrainObject\textureChecked_wall_ca.paa";
							texturePressedUnchecked = "\A3\Modules_F\Data\EditTerrainObject\textureUnchecked_wall_ca.paa";
							textureUnchecked = "\A3\Modules_F\Data\EditTerrainObject\textureUnchecked_wall_ca.paa";
							tooltip = "Walls & Fences";
							x = "(2-1) * 								((			80 * (pixelW * pixelGrid * 	0.50) / 8) - 							pixelW) + ((2-1) * 							pixelW)";
						};
						class Checkbox3: Checkbox1
						{
							idc = "100+3";
							textureChecked = "\A3\Modules_F\Data\EditTerrainObject\textureChecked_tree_ca.paa";
							textureDisabledChecked = "\A3\Modules_F\Data\EditTerrainObject\textureChecked_tree_ca.paa";
							textureDisabledUnchecked = "\A3\Modules_F\Data\EditTerrainObject\textureUnchecked_tree_ca.paa";
							textureFocusedChecked = "\A3\Modules_F\Data\EditTerrainObject\textureChecked_tree_ca.paa";
							textureFocusedUnchecked = "\A3\Modules_F\Data\EditTerrainObject\textureUnchecked_tree_ca.paa";
							textureHoverChecked = "\A3\Modules_F\Data\EditTerrainObject\textureChecked_tree_ca.paa";
							textureHoverUnchecked = "\A3\Modules_F\Data\EditTerrainObject\textureUnchecked_tree_ca.paa";
							texturePressedChecked = "\A3\Modules_F\Data\EditTerrainObject\textureChecked_tree_ca.paa";
							texturePressedUnchecked = "\A3\Modules_F\Data\EditTerrainObject\textureUnchecked_tree_ca.paa";
							textureUnchecked = "\A3\Modules_F\Data\EditTerrainObject\textureUnchecked_tree_ca.paa";
							tooltip = "Vegetation";
							x = "(3-1) * 								((			80 * (pixelW * pixelGrid * 	0.50) / 8) - 							pixelW) + ((3-1) * 							pixelW)";
						};
						class Checkbox4: Checkbox1
						{
							idc = "100+4";
							textureChecked = "\A3\Modules_F\Data\EditTerrainObject\textureChecked_misc_ca.paa";
							textureDisabledChecked = "\A3\Modules_F\Data\EditTerrainObject\textureChecked_misc_ca.paa";
							textureDisabledUnchecked = "\A3\Modules_F\Data\EditTerrainObject\textureUnchecked_misc_ca.paa";
							textureFocusedChecked = "\A3\Modules_F\Data\EditTerrainObject\textureChecked_misc_ca.paa";
							textureFocusedUnchecked = "\A3\Modules_F\Data\EditTerrainObject\textureUnchecked_misc_ca.paa";
							textureHoverChecked = "\A3\Modules_F\Data\EditTerrainObject\textureChecked_misc_ca.paa";
							textureHoverUnchecked = "\A3\Modules_F\Data\EditTerrainObject\textureUnchecked_misc_ca.paa";
							texturePressedChecked = "\A3\Modules_F\Data\EditTerrainObject\textureChecked_misc_ca.paa";
							texturePressedUnchecked = "\A3\Modules_F\Data\EditTerrainObject\textureUnchecked_misc_ca.paa";
							textureUnchecked = "\A3\Modules_F\Data\EditTerrainObject\textureUnchecked_misc_ca.paa";
							tooltip = "Other";
							x = "(4-1) * 								((			80 * (pixelW * pixelGrid * 	0.50) / 8) - 							pixelW) + ((4-1) * 							pixelW)";
						};
						class Text1: ctrlStatic
						{
							colorBackground[] = {0, 0, 0, 0.25};
							colorShadow[] = {0, 0, 0, 0};
							colorText[] = {1, 1, 1, 0.5};
							h = "5 * (pixelH * pixelGrid * 	0.50) - 							pixelH";
							idc = 121;
							onLoad = "(_this select 0) ctrlEnable false;";
							shadow = 0;
							style = 2;
							text = 0;
							type = 0;
							w = "((			80 * (pixelW * pixelGrid * 	0.50) / 8) - 							pixelW)";
							x = 0;
							y = "2 * 	5 * (pixelH * pixelGrid * 	0.50) + 							pixelH";
						};
						class Text2: Text1
						{
							idc = "120+2";
							text = 0;
							tooltip = "";
							x = "(2-1) * 								((			80 * (pixelW * pixelGrid * 	0.50) / 8) - 							pixelW) + ((2-1) * 							pixelW)";
						};
						class Text3: Text1
						{
							idc = "120+3";
							text = 0;
							tooltip = "";
							x = "(3-1) * 								((			80 * (pixelW * pixelGrid * 	0.50) / 8) - 							pixelW) + ((3-1) * 							pixelW)";
						};
						class Text4: Text1
						{
							idc = "120+4";
							text = 0;
							tooltip = "";
							x = "(4-1) * 								((			80 * (pixelW * pixelGrid * 	0.50) / 8) - 							pixelW) + ((4-1) * 							pixelW)";
						};
					};
				};
			};
		};
		class Overcast: Slider
		{
			class Controls: Controls
			{
				class Edit: Edit
				{
					onKillFocus = "				comment 'DO NOT COPY THIS CODE TO YOUR ATTRIBUTE CONFIG UNLESS YOU ARE CHANGING SOMETHING IN THE CODE!';				_ctrlGroup = ctrlParentControlsGroup (_this select 0);				_value = sliderposition (_ctrlGroup controlsgroupctrl 100);				[_ctrlGroup,_value] call bis_fnc_3DENIntel;			";
				};
				class Title: Title {};
				class Value: Value
				{
					onSliderPosChanged = "				comment 'DO NOT COPY THIS CODE TO YOUR ATTRIBUTE CONFIG UNLESS YOU ARE CHANGING SOMETHING IN THE CODE!';				_ctrlGroup = ctrlParentControlsGroup (_this select 0);				_value = sliderposition (_ctrlGroup controlsgroupctrl 100);				[_ctrlGroup,_value] call bis_fnc_3DENIntel;			";
				};
			};
		};
		class Pitch: SliderMultiplier
		{
			class Controls: Controls
			{
				class Edit: Edit {};
				class Title: Title {};
				class Value: Value
				{
					sliderRange[] = {0.9, 1.1};
				};
			};
		};
		class PreferencesSavegame: Combo
		{
			class Controls: Controls
			{
				class Title: Title {};
				class Value: Value
				{
					class Items
					{
						class Min15
						{
							text = "15 min";
							value = 900;
						};
						class Min30
						{
							text = "30 min";
							value = 1800;
						};
						class Min5
						{
							text = "5 min";
							value = 300;
						};
						class Min60
						{
							text = "1 hour";
							value = 3600;
						};
						class None
						{
							text = "Never";
							value = -1;
						};
					};
				};
			};
		};
		class PylonControlsGroup: Default
		{
			h = "14 * 	5 * (pixelH * pixelGrid * 	0.50)";
			iconDriver = "a3\ui_f\data\IGUI\Cfg\CommandBar\imageDriver_ca.paa";
			iconGunner = "a3\ui_f\data\IGUI\Cfg\CommandBar\imageGunner_ca.paa";
			idc = 2666;
			class Controls
			{
				class PresetBomboBox: ctrlCombo
				{
					h = "5 * (pixelH * pixelGrid * 	0.50)";
					idc = 2667;
					w = "(	82 / 3) * (pixelW * pixelGrid * 	0.50)";
					x = "(	5) * (pixelW * pixelGrid * 	0.50)";
					y = "(pixelH * pixelGrid * 	0.50)";
				};
				class TextMirror: ctrlStatic
				{
					h = "5 * (pixelH * pixelGrid * 	0.50)";
					shadow = 0;
					text = "Mirror";
					tooltip = "Mirror selected munition to the opposite side.";
					w = "(	60 - (	5 + 1)) * (pixelW * pixelGrid * 	0.50)";
					x = "(	5 * 21) * (pixelW * pixelGrid * 	0.50)";
					y = "(pixelH * pixelGrid * 	0.50)";
				};
				class ToggleMirror: ctrlCheckbox
				{
					h = "5 * (pixelH * pixelGrid * 	0.50)";
					idc = 2668;
					w = "5 * (pixelW * pixelGrid * 	0.50)";
					x = "(	5 * 20) * (pixelW * pixelGrid * 	0.50)";
					y = "(pixelH * pixelGrid * 	0.50)";
				};
			};
			class LoadOutTemplateBox: ctrlCombo
			{
				h = "5 * (pixelH * pixelGrid * 	0.50)";
				w = "(	82 / 3) * (pixelW * pixelGrid * 	0.50)";
				x = "(pixelW * pixelGrid * 	0.50)";
				y = "(pixelH * pixelGrid * 	0.50)";
			};
			class ownerTemplateButton: ctrlButton
			{
				style = "0x02 + 0x30 + 0x800";
			};
		};
		class Radar: Combo
		{
			class Controls: Controls
			{
				class Title: Title {};
				class Value: Value
				{
					class Items
					{
						class Default
						{
							default = 1;
							text = "Default";
							tooltip = "AI will use the Radar when in Aware or Combat behavior.";
							value = 0;
						};
						class RadarOff
						{
							text = "Off";
							tooltip = "AI will keep Radar silent at all times";
							value = 2;
						};
						class RadarOn
						{
							text = "Active";
							tooltip = "AI will keep the Radar active and emitting at all times";
							value = 1;
						};
					};
				};
			};
		};
		class Rain: Overcast {};
		class Rank: Toolbox
		{
			attributeLoad = "(_this controlsGroupCtrl 100) lbsetcursel (['private','corporal','sergeant','lieutenant','captain','major','colonel'] find _value);";
			attributeSave = "['private','corporal','sergeant','lieutenant','captain','major','colonel'] select (missionnamespace getvariable ['Rank_value',0]);";
			h = "8 * (pixelH * pixelGrid * 	0.50)";
			class Controls: Controls
			{
				class Title: Title
				{
					h = "8 * (pixelH * pixelGrid * 	0.50)";
				};
				class Value: Value
				{
					columns = 7;
					h = "8 * (pixelH * pixelGrid * 	0.50)";
					idc = 100;
					onToolboxSelChanged = "missionnamespace setvariable ['Rank_value',_this select 1];";
					rows = 1;
					strings[] = {"\a3\Ui_f\data\GUI\Cfg\Ranks\private_gs.paa", "\a3\Ui_f\data\GUI\Cfg\Ranks\corporal_gs.paa", "\a3\Ui_f\data\GUI\Cfg\Ranks\sergeant_gs.paa", "\a3\Ui_f\data\GUI\Cfg\Ranks\lieutenant_gs.paa", "\a3\Ui_f\data\GUI\Cfg\Ranks\captain_gs.paa", "\a3\Ui_f\data\GUI\Cfg\Ranks\major_gs.paa", "\a3\Ui_f\data\GUI\Cfg\Ranks\colonel_gs.paa"};
					style = "0x02 + 0x30 + 0x800";
					tooltips[] = {"Private", "Corporal", "Sergeant", "Lieutenant", "Captain", "Major", "Colonel"};
					values[] = {0, 1, 2, 3, 4, 5, 6};
				};
			};
		};
		class Repeat: Toolbox
		{
			attributeLoad = "(_this controlsGroupCtrl 100) lbsetcursel _value;";
			attributeSave = "missionnamespace getvariable ['Repeat_value',0];";
			class Controls: Controls
			{
				class Title: Title {};
				class Value: Value
				{
					columns = 2;
					idc = 100;
					onToolboxSelChanged = "missionnamespace setvariable ['Repeat_value',_this select 1];";
					rows = 1;
					strings[] = {"Once", "Repeatedly"};
					values[] = {0, 1};
				};
			};
		};
		class Respawn: Combo
		{
			class Controls: Controls
			{
				class Title: Title {};
				class Value: Value
				{
					onLBSelChanged = "				_ctrlCombo = _this select 0;				_cursel = _this select 1;				_respawnType = _ctrlCombo lbvalue _cursel;				missionnamespace setvariable ['Respawn_value',_respawnType];				_this spawn {					disableserialization;					_ctrlCombo = _this select 0;					_cursel = _this select 1;					_respawnType = _ctrlCombo lbvalue _cursel;					_ctrlGroup = ctrlParentControlsGroup ctrlParentControlsGroup _ctrlCombo;					_cfgAttributes = configfile >> 'Cfg3DEN' >> 'Mission' >> 'Multiplayer' >> 'AttributeCategories' >> 'Respawn' >> 'Attributes';					_n = 0;					{						if (ctrlParentControlsGroup _x == _ctrlGroup) then {							_cfg = _cfgAttributes select _n;							_respawnTypes = getarray (_cfg >> 'respawnTypes');							_state = count _respawnTypes == 0 || _respawnType in _respawnTypes;							_fade = [0.75,0] select _state;							_n = _n + 1;							_x ctrlenable _state;							_x ctrlsetfade _fade;							_x ctrlcommit 0;							ctrlsetfocus _x;							ctrlsetfocus _ctrlCombo;						};					} foreach (allcontrols (ctrlparent _ctrlCombo));				};			";
					class Items
					{
						class Base
						{
							data = "Base";
							text = "Respawn on Custom Position";
							tooltip = "Respawn on a position defined by the marker with a specific prefix in the name. When multiple ones are available, a random one is selected.\n* respawn - position available for all sides\n* respawn_west - BLUFOR respawn\n* respawn_east - OPFOR respawn\n* respawn_guerrila - Independent respawn\n* respawn_civilian - Civilian respawn\nBecause these are prefixes, anything can follow them, e.g., respawn_1, respawn_west_base, etc.";
							value = 3;
						};
						class Bird
						{
							data = "Bird";
							text = "Switch to Spectator";
							tooltip = "Spectate the scenario without being directly involved.";
							value = 1;
						};
						class Group
						{
							data = "Group";
							text = "Switch to Group Member";
							tooltip = "Take control of the next available group member. When none are left, 'Switch to Spectator' respawn is used instead.";
							value = 4;
						};
						class Instant
						{
							data = "Instant";
							text = "Respawn on Position of Death";
							tooltip = "Respawn where killed, even if the dead body moved.";
							value = 2;
						};
						class None
						{
							data = "None";
							text = "Disabled";
							tooltip = "No respawn.";
							value = 0;
						};
						class Side
						{
							data = "Side";
							text = "Switch to Side Member";
							tooltip = "Pick a character on the same side to take control of. When none are left, 'Switch to Spectator' respawn is used instead.";
							value = 5;
						};
					};
				};
			};
		};
		class RespawnTemplates: Title
		{
			attributeLoad = "		_selectedRespawnType = missionnamespace getvariable ['Respawn_value',0];		_pictureChecked = gettext (configfile >> 'ctrlCheckbox' >> 'textureChecked');		_pictureUnchecked = gettext (configfile >> 'ctrlCheckbox' >> 'textureUnchecked');		_defaultTemplates = [			getarray (configfile >> 'cfgrespawntemplates' >> 'respawnTemplatesNone'),			getarray (configfile >> 'cfgrespawntemplates' >> 'respawnTemplatesBird'),			getarray (configfile >> 'cfgrespawntemplates' >> 'respawnTemplatesInstant'),			getarray (configfile >> 'cfgrespawntemplates' >> 'respawnTemplatesBase'),			getarray (configfile >> 'cfgrespawntemplates' >> 'respawnTemplatesGroup'),			getarray (configfile >> 'cfgrespawntemplates' >> 'respawnTemplatesSide')		];		_isDefault = _value isequalto [''];		{			_cfgTemplate = _x;			_scope = if (isnumber (_cfgTemplate >> 'scope')) then {getnumber (_cfgTemplate >> 'scope')} else {2};			_respawnTypes = getarray (_cfgTemplate >> 'respawnTypes');			{				_respawnType = _x;				_ctrlListbox = _this controlsGroupCtrl (100 + _respawnType);				_selected = if (_respawnType == _selectedRespawnType && {!_isDefault}) then {_value} else {_defaultTemplates select _respawnType};				if (_scope > 1 && {count _respawnTypes == 0 || {_respawnType in _respawnTypes}}) then {					_data = configname _cfgTemplate;					_name = gettext (_cfgTemplate >> 'displayName');					if (_name == '') then {_name = _data};					_lbAdd = _ctrlListbox lbadd _name;					_ctrlListbox lbsetdata [_lbAdd,_data];					_active = _data in _selected;					_ctrlListbox lbsetvalue [_lbAdd,[0,1] select _active];					_ctrlListbox lbsetpicture [_lbAdd,[_pictureUnchecked,_pictureChecked] select _active];				};			} foreach [0,1,2,3,4,5];		} foreach configproperties [configfile >> 'CfgRespawnTemplates','isclass _x'];		{			_ctrlListbox = _this controlsGroupCtrl (100 + _x);			_ctrlListbox ctrlshow (_x == _selectedRespawnType);			lbsort _ctrlListbox;		} foreach [0,1,2,3,4,5];	";
			attributeSave = "		_value = [];		{			_ctrlListbox = _this controlsGroupCtrl (100 + _x);			if (ctrlshown _ctrlListbox) exitwith {				for '_i' from 0 to (lbsize _ctrlListbox - 1) do {					if (_ctrlListbox lbvalue _i > 0) then {_value pushback (_ctrlListbox lbdata _i);};				};			};		} foreach [0,1,2,3,4,5];		_value	";
			h = "5 * 	5 * (pixelH * pixelGrid * 	0.50)";
			class Controls: Controls
			{
				class Title: Title
				{
					h = "5 * 	5 * (pixelH * pixelGrid * 	0.50)";
				};
				class Value0: ctrlListbox
				{
					colorSelectBackground[] = {0, 0, 0, 0};
					colorSelectBackground2[] = {0, 0, 0, 0};
					h = "5 * 	5 * (pixelH * pixelGrid * 	0.50)";
					idc = 100;
					onLBSelChanged = "				_ctrlListbox = _this select 0;				_cursel = _this select 1;				_active = _ctrlListbox lbvalue _cursel;				_active = (_active + 1) % 2;				_pictureChecked = gettext (configfile >> 'ctrlCheckbox' >> 'textureChecked');				_pictureUnchecked = gettext (configfile >> 'ctrlCheckbox' >> 'textureUnchecked');				_ctrlListbox lbsetvalue [_cursel,_active];				_ctrlListbox lbsetpicture [_cursel,[_pictureUnchecked,_pictureChecked] select _active];			";
					onSetFocus = "				_ctrlGroup = ctrlparentcontrolsgroup (_this select 0);				_selectedRespawnType = missionnamespace getvariable ['Respawn_value',0];				{					_ctrlListbox = _ctrlGroup controlsGroupCtrl (100 + _x);					_ctrlListbox ctrlshow (_x == _selectedRespawnType);				} foreach [0,1,2,3,4,5];			";
					show = 0;
					w = "82 * (pixelW * pixelGrid * 	0.50)";
					x = "48 * (pixelW * pixelGrid * 	0.50)";
				};
				class Value1: Value0
				{
					idc = 101;
				};
				class Value2: Value0
				{
					idc = 102;
				};
				class Value3: Value0
				{
					idc = 103;
				};
				class Value4: Value0
				{
					idc = 104;
				};
				class Value5: Value0
				{
					idc = 105;
				};
			};
		};
		class ReviveDuration: SliderTime
		{
			h = "8 * (pixelH * pixelGrid * 	0.50)";
			class Controls: Controls
			{
				class Frame: Frame
				{
					y = "3 * (pixelH * pixelGrid * 	0.50)";
				};
				class Hour: Hour
				{
					y = "3 * (pixelH * pixelGrid * 	0.50)";
				};
				class Minute: Minute
				{
					y = "3 * (pixelH * pixelGrid * 	0.50)";
				};
				class Second: Second
				{
					y = "3 * (pixelH * pixelGrid * 	0.50)";
				};
				class Separator: Separator
				{
					y = "3 * (pixelH * pixelGrid * 	0.50)";
				};
				class Title: Title
				{
					y = "3 * (pixelH * pixelGrid * 	0.50)";
				};
				class Value: Value
				{
					lineSize = 5;
					sliderPosition = 8;
					sliderRange[] = {6, 60};
					y = "3 * (pixelH * pixelGrid * 	0.50)";
				};
			};
		};
		class ReviveForceRespawnDuration: SliderTime
		{
			class Controls: Controls
			{
				class Frame: Frame {};
				class Hour: Hour {};
				class Minute: Minute {};
				class Second: Second {};
				class Separator: Separator {};
				class Title: Title {};
				class Value: Value
				{
					lineSize = 1;
					sliderPosition = 3;
					sliderRange[] = {0, 10};
				};
			};
		};
		class ReviveMedicSpeedMultiplier: SliderMultiplier
		{
			class Controls: Controls
			{
				class Edit: Edit {};
				class Title: Title {};
				class Value: Value
				{
					lineSize = 0.25;
					sliderPosition = 2;
					sliderRange[] = {1, 3};
				};
			};
		};
		class ReviveMode: Combo
		{
			class Controls: Controls
			{
				class Title: Title {};
				class Value: Value
				{
					class Items
					{
						class Disabled
						{
							text = "Disabled";
							tooltip = "Revive is completely disabled. All players will die immediately.";
							value = 0;
						};
						class EnabledAllPlayers
						{
							text = "Enabled for all players";
							tooltip = "Revive is enabled for all players.";
							value = 1;
						};
						class EnabledIndividualPlayers
						{
							text = "Controlled by player Attributes";
							tooltip = "Only players with Revive enabled in their Attributes are effected.";
							value = 2;
						};
					};
				};
			};
		};
		class ReviveRequiredItems: Combo
		{
			idc = 547891;
			class Controls: Controls
			{
				class Title: Title {};
				class Value: Value
				{
					class Items
					{
						class Medkit
						{
							text = "Medikit";
							tooltip = "The 'Medikit' item is required in order to revive.";
							value = 1;
						};
						class MedkitAndFak
						{
							text = "First Aid Kit / Medikit";
							tooltip = "'Medikit' or 'First Aid Kit' items are required in order to revive.";
							value = 2;
						};
						class None
						{
							text = "None";
							tooltip = "No special item is required in order to revive.";
							value = 0;
						};
					};
				};
			};
		};
		class ReviveRequiredTrait: Combo
		{
			h = "8 * (pixelH * pixelGrid * 	0.50)";
			class Controls: Controls
			{
				class Title: Title
				{
					y = "3 * (pixelH * pixelGrid * 	0.50)";
				};
				class Value: Value
				{
					y = "3 * (pixelH * pixelGrid * 	0.50)";
					class Items
					{
						class Medic
						{
							text = "Medic";
							tooltip = "Only players with the 'Medic' trait can revive.";
							value = 1;
						};
						class None
						{
							text = "None";
							tooltip = "Anyone can revive.";
							value = 0;
						};
					};
				};
			};
		};
		class ReviveUnconsciousStateDuration: SliderTime
		{
			class Controls: Controls
			{
				class Frame: Frame {};
				class Hour: Hour {};
				class Minute: Minute {};
				class Second: Second {};
				class Separator: Separator {};
				class Title: Title {};
				class Value: Value
				{
					lineSize = 1;
					sliderPosition = 120;
					sliderRange[] = {20, 300};
				};
			};
		};
		class ReviveUnconsciousStateMode: Combo
		{
			h = "8 * (pixelH * pixelGrid * 	0.50)";
			class Controls: Controls
			{
				class Title: Title
				{
					y = "3 * (pixelH * pixelGrid * 	0.50)";
				};
				class Value: Value
				{
					y = "3 * (pixelH * pixelGrid * 	0.50)";
					class Items
					{
						class Advanced
						{
							text = "Advanced";
							tooltip = "Extensive wounds will kill players instantly.";
							value = 1;
						};
						class Basic
						{
							text = "Basic";
							tooltip = "Players will always enter the incapacitated state.";
							value = 0;
						};
					};
				};
			};
		};
		class RscTitle: Combo
		{
			class Controls: Controls
			{
				class Title: Title {};
				class Value: Value
				{
					class Items
					{
						class None
						{
							data = "";
							text = "No Overlay";
							value = -1;
						};
					};
					class ItemsConfig
					{
						path[] = {"RscTitles"};
						propertyText = "name";
						sort = 2;
					};
				};
			};
		};
		class ShapeMarker: Toolbox
		{
			attributeLoad = "(_this controlsGroupCtrl 100) lbsetcursel (['ICON','ELLIPSE','RECTANGLE'] find _value);";
			attributeSave = "['ICON','ELLIPSE','RECTANGLE'] select (missionnamespace getvariable ['ShapeMarker_value',2]);";
			h = "2 * 	5 * (pixelH * pixelGrid * 	0.50)";
			class Controls: Controls
			{
				class Title: Title
				{
					h = "2 * 	5 * (pixelH * pixelGrid * 	0.50)";
				};
				class Value: Value
				{
					columns = 2;
					h = "2 * 	5 * (pixelH * pixelGrid * 	0.50)";
					idc = 100;
					onToolboxSelChanged = "missionnamespace setvariable ['ShapeMarker_value',_this select 1];";
					rows = 1;
					strings[] = {"\a3\3DEN\Data\Attributes\Shape\rectangle_ca.paa", "\a3\3DEN\Data\Attributes\Shape\ellipse_ca.paa"};
					style = "0x02 + 0x30 + 0x800";
					tooltips[] = {"Rectangle", "Ellipse"};
					values[] = {1, 2};
				};
			};
		};
		class ShapeTrigger: Toolbox
		{
			attributeLoad = "(_this controlsGroupCtrl 100) lbsetcursel _value;";
			attributeSave = "missionnamespace getvariable ['ShapeTrigger_value',0];";
			h = "2 * 	5 * (pixelH * pixelGrid * 	0.50)";
			class Controls: Controls
			{
				class Title: Title
				{
					h = "2 * 	5 * (pixelH * pixelGrid * 	0.50)";
				};
				class Value: Value
				{
					columns = 2;
					h = "2 * 	5 * (pixelH * pixelGrid * 	0.50)";
					idc = 100;
					onToolboxSelChanged = "missionnamespace setvariable ['ShapeTrigger_value',_this select 1];";
					rows = 1;
					strings[] = {"\a3\3DEN\Data\Attributes\Shape\ellipse_ca.paa", "\a3\3DEN\Data\Attributes\Shape\rectangle_ca.paa"};
					style = "0x02 + 0x30 + 0x800";
					tooltips[] = {"Ellipse", "Rectangle"};
					values[] = {0, 1};
					w = "82 * (2/3) * (pixelW * pixelGrid * 	0.50)";
					x = "48 * (pixelW * pixelGrid * 	0.50)";
				};
			};
		};
		class SharedObjectives: Combo
		{
			class Controls: Controls
			{
				class Title: Title {};
				class Value: Value
				{
					class Items
					{
						class Disabled
						{
							text = "Disabled";
							tooltip = "Tasks assigned by friendlies are not marked.";
							value = 0;
						};
						class Enabled
						{
							text = "Enabled";
							tooltip = "Tasks assigned by friendlies are marked to player.";
							value = 1;
						};
						class EnabledWithPropagation
						{
							text = "Enabled with Task Propagation";
							tooltip = "Tasks assigned by friendlies are marked to player, but only group leaders can assign and unassign tasks. Task assignment changes are automatically propagated to subordinates.";
							value = 2;
						};
					};
				};
			};
		};
		class Skill: Slider
		{
			class Controls: Controls
			{
				class Edit: Edit {};
				class Title: Title {};
				class Value: Value
				{
					sliderRange[] = {0.2, 1};
				};
			};
		};
		class Slider: Title
		{
			attributeLoad = "		comment 'DO NOT COPY THIS CODE TO YOUR ATTRIBUTE CONFIG UNLESS YOU ARE CHANGING SOMETHING IN THE CODE!';		_ctrlGroup = _this;		[_ctrlGroup controlsgroupctrl 100,_ctrlGroup controlsgroupctrl 101,nil,_value] call bis_fnc_initSliderValue;	";
			attributeSave = "sliderposition (_this controlsGroupCtrl 100)";
			onLoad = "		comment 'DO NOT COPY THIS CODE TO YOUR ATTRIBUTE CONFIG UNLESS YOU ARE CHANGING SOMETHING IN THE CODE!';		_ctrlGroup = _this select 0;		[_ctrlGroup controlsgroupctrl 100,_ctrlGroup controlsgroupctrl 101] call bis_fnc_initSliderValue;	";
			class Controls
			{
				class Edit: ctrlEdit
				{
					h = "5 * (pixelH * pixelGrid * 	0.50)";
					idc = 101;
					w = "(	10 + 1) * (pixelW * pixelGrid * 	0.50)";
					x = "(	48 + 	82 - (	10 + 1)) * (pixelW * pixelGrid * 	0.50)";
				};
				class Title: Title {};
				class Value: ctrlXSliderH
				{
					h = "5 * (pixelH * pixelGrid * 	0.50)";
					idc = 100;
					w = "(	82 - (	10 + 1)) * (pixelW * pixelGrid * 	0.50)";
					x = "48 * (pixelW * pixelGrid * 	0.50)";
				};
			};
		};
		class SliderCameraSpeedMult: SliderMultiplier
		{
			class Controls: Controls
			{
				class Edit: Edit {};
				class Title: Title {};
				class Value: Value
				{
					lineSize = 0.1;
					sliderPosition = 1;
					sliderRange[] = {0.1, 3};
					sliderStep = 0.1;
				};
			};
		};
		class SliderDistance: Slider
		{
			attributeLoad = "		comment 'DO NOT COPY THIS CODE TO YOUR ATTRIBUTE CONFIG UNLESS YOU ARE CHANGING SOMETHING IN THE CODE!';		_ctrlGroup = _this;		[_ctrlGroup controlsgroupctrl 100,_ctrlGroup controlsgroupctrl 101,'m',_value] call bis_fnc_initSliderValue;	";
			onLoad = "		comment 'DO NOT COPY THIS CODE TO YOUR ATTRIBUTE CONFIG UNLESS YOU ARE CHANGING SOMETHING IN THE CODE!';		_ctrlGroup = _this select 0;		[_ctrlGroup controlsgroupctrl 100,_ctrlGroup controlsgroupctrl 101,'m'] call bis_fnc_initSliderValue;	";
			class Controls: Controls
			{
				class Value: Value
				{
					lineSize = 50;
					sliderPosition = 500;
					sliderRange[] = {50, 5000};
				};
			};
		};
		class SliderMultiplier: Slider
		{
			attributeLoad = "		comment 'DO NOT COPY THIS CODE TO YOUR ATTRIBUTE CONFIG UNLESS YOU ARE CHANGING SOMETHING IN THE CODE!';		_ctrlGroup = _this;		[_ctrlGroup controlsgroupctrl 100,_ctrlGroup controlsgroupctrl 101,'x',_value] call bis_fnc_initSliderValue;	";
			onLoad = "		comment 'DO NOT COPY THIS CODE TO YOUR ATTRIBUTE CONFIG UNLESS YOU ARE CHANGING SOMETHING IN THE CODE!';		_ctrlGroup = _this select 0;		[_ctrlGroup controlsgroupctrl 100,_ctrlGroup controlsgroupctrl 101,'x'] call bis_fnc_initSliderValue;	";
		};
		class SliderTime: Title
		{
			attributeLoad = "		(_this controlsGroupCtrl 100) slidersetposition _value;		[_this controlsGroupCtrl 100,_value] call compile gettext (configfile >> 'Cfg3DEN' >> 'Attributes' >> 'SliderTime' >> 'Controls' >> 'Value' >> 'onSliderPosChanged');	";
			attributeSave = "		sliderposition (_this controlsGroupCtrl 100)	";
			class Controls: Controls
			{
				class Frame: ctrlStaticFrame
				{
					h = "5 * (pixelH * pixelGrid * 	0.50)";
					w = "3 * 	8 * (pixelW * pixelGrid * 	0.50)";
					x = "(	48 + 	82 - 	8 * 3) * (pixelW * pixelGrid * 	0.50)";
				};
				class Hour: ctrlEdit
				{
					colorBackground[] = {0, 0, 0, 0};
					font = "EtelkaMonospacePro";
					h = "5 * (pixelH * pixelGrid * 	0.50)";
					idc = 101;
					onKillFocus = "				comment 'DO NOT COPY THIS CODE TO YOUR ATTRIBUTE CONFIG UNLESS YOU ARE CHANGING SOMETHING IN THE CODE!';				_ctrlGroup = ctrlParentControlsGroup (_this select 0);				_ctrlSlider = _ctrlGroup controlsgroupctrl 100;				_ctrlHour = _ctrlGroup controlsgroupctrl 101;				_ctrlMinute = _ctrlGroup controlsgroupctrl 102;				_ctrlSecond = _ctrlGroup controlsgroupctrl 103;				_range = sliderrange _ctrlSlider;				_value = (round (parsenumber ctrltext _ctrlHour) + round (parsenumber ctrltext _ctrlMinute) / 60 + round (parsenumber ctrltext _ctrlSecond) / 3600) * 3600;				_ctrlSlider slidersetposition (_value / (sliderspeed _ctrlSlider select 1));				_ctrlCfg = configfile >> 'Cfg3DEN' >> 'Attributes' >> ctrlclassname _ctrlGroup;				[_ctrlSlider,sliderposition _ctrlSlider] call compile gettext (_ctrlCfg >> 'Controls' >> 'Value' >> 'onSliderPosChanged');			";
					sizeEx = "3.875 * (1 / (getResolution select 3)) * pixelGrid * 0.5";
					style = "0x02 + 0x200";
					text = "00";
					tooltip = "Hours";
					w = "8 * (pixelW * pixelGrid * 	0.50)";
					x = "(	48 + 	82 - 	8 * 3) * (pixelW * pixelGrid * 	0.50)";
				};
				class Minute: Hour
				{
					h = "5 * (pixelH * pixelGrid * 	0.50)";
					idc = 102;
					tooltip = "Minutes";
					w = "8 * (pixelW * pixelGrid * 	0.50)";
					x = "(	48 + 	82 - 	8 * 2) * (pixelW * pixelGrid * 	0.50)";
				};
				class Second: Hour
				{
					h = "5 * (pixelH * pixelGrid * 	0.50)";
					idc = 103;
					tooltip = "Seconds";
					w = "8 * (pixelW * pixelGrid * 	0.50)";
					x = "(	48 + 	82 - 	8) * (pixelW * pixelGrid * 	0.50)";
				};
				class Separator: ctrlStatic
				{
					colorBackground[] = {0, 0, 0, 0.5};
					font = "EtelkaMonospacePro";
					h = "5 * (pixelH * pixelGrid * 	0.50)";
					sizeEx = "3.875 * (1 / (getResolution select 3)) * pixelGrid * 0.5";
					style = 2;
					text = ":   :";
					w = "3 * 	8 * (pixelW * pixelGrid * 	0.50)";
					x = "(	48 + 	82 - 	8 * 3) * (pixelW * pixelGrid * 	0.50)";
				};
				class Title: Title {};
				class Value: ctrlXSliderH
				{
					h = "5 * (pixelH * pixelGrid * 	0.50)";
					idc = 100;
					onSliderPosChanged = "				comment 'DO NOT COPY THIS CODE TO YOUR ATTRIBUTE CONFIG UNLESS YOU ARE CHANGING SOMETHING IN THE CODE!';				_ctrlSlider = _this select 0;				_value = (_this select 1) * (sliderspeed _ctrlSlider select 1);				_valueHour = floor (_value / 3600);				_valueMinute = floor ((_value / 60) % 60);				_valueSecond = floor (_value % 60);				_textHour = if (_valueHour < 10) then {'0' + str _valueHour} else {str _valueHour};				_textMinute = if (_valueMinute < 10) then {'0' + str _valueMinute} else {str _valueMinute};				_textSecond = if (_valueSecond < 10) then {'0' + str _valueSecond} else {str _valueSecond};				_ctrlGroup = ctrlParentControlsGroup _ctrlSlider;				_ctrlHour = _ctrlGroup controlsgroupctrl 101;				_ctrlMinute = _ctrlGroup controlsgroupctrl 102;				_ctrlSecond = _ctrlGroup controlsgroupctrl 103;				_ctrlHour ctrlsettext _textHour;				_ctrlMinute ctrlsettext _textMinute;				_ctrlSecond ctrlsettext _textSecond;				_ctrlCfg = configfile >> 'Cfg3DEN' >> 'Attributes' >> ctrlclassname _ctrlGroup;				_code = gettext (_ctrlCfg >> 'onValueChanged');				if (_code != '') then {[_ctrlGroup,_value] call compile _code;};			";
					pageSize = 1;
					sliderPosition = 0;
					sliderRange[] = {0, 3600};
					w = "(	82 - 	8 * 3) * (pixelW * pixelGrid * 	0.50)";
					x = "48 * (pixelW * pixelGrid * 	0.50)";
				};
			};
		};
		class SliderTimeDay: SliderTime
		{
			h = "1 * 	5 * (pixelH * pixelGrid * 	0.50)";
			onValueChanged = "_this call bis_fnc_3DENIntel;";
			class Controls: Controls
			{
				class Frame: Frame {};
				class Hour: Hour {};
				class Minute: Minute {};
				class Preview: ctrlControlsGroupNoScrollbars
				{
					h = "5 * (pixelH * pixelGrid * 	0.50)";
					idc = 110;
					onLoad = "uinamespace setvariable ['AttributeSliderTimeDay_group',_this select 0];";
					w = "(	82 - 	8 * 3 - 2.22 * 	5) * (pixelW * pixelGrid * 	0.50)";
					x = "(	48 + 1.11 * 	5) * (pixelW * pixelGrid * 	0.50)";
					y = 0;
					class Controls
					{
						class PreviewDay: PreviewNight1
						{
							idc = 113;
							text = "\a3\3DEN\Data\Attributes\SliderTimeDay\day_ca.paa";
						};
						class PreviewNight1: ctrlStaticPicture
						{
							colorText[] = {1, 1, 1, 0.6};
							h = "5 * (pixelH * pixelGrid * 	0.50)";
							idc = 111;
							text = "\a3\3DEN\Data\Attributes\SliderTimeDay\night_ca.paa";
							w = "0.5 * 	5 * (pixelW * pixelGrid * 	0.50)";
							x = 0;
						};
						class PreviewNight2: PreviewNight1
						{
							idc = 112;
						};
						class PreviewSunrise: PreviewNight1
						{
							idc = 114;
							text = "\a3\3DEN\Data\Attributes\SliderTimeDay\sunrise_ca.paa";
						};
						class PreviewSunset: PreviewNight1
						{
							idc = 115;
							text = "\a3\3DEN\Data\Attributes\SliderTimeDay\sunset_ca.paa";
						};
						class Sun: ctrlStaticPicture
						{
							colorText[] = {1, 1, 1, 0.6};
							h = "5 * (pixelH * pixelGrid * 	0.50)";
							idc = 116;
							text = "\a3\3DEN\Data\Attributes\SliderTimeDay\sun_ca.paa";
							w = "5 * (pixelW * pixelGrid * 	0.50)";
							x = "(	82 - 	8 * 3 - (2.22 + 1) * 	5) * 0.5 * (pixelW * pixelGrid * 	0.50)";
						};
					};
				};
				class Second: Second {};
				class Separator: Separator {};
				class Title: Title {};
				class Value: Value
				{
					border = "\a3\3DEN\Data\Attributes\SliderTimeDay\border_ca.paa";
					color[] = {1, 1, 1, 0.6};
					colorActive[] = {1, 1, 1, 1};
					idc = 100;
					lineSize = 1;
					pageSize = 3600;
					sliderPosition = 12;
					sliderRange[] = {0, 23.9999};
					thumb = "\a3\3DEN\Data\Attributes\SliderTimeDay\thumb_ca.paa";
				};
			};
		};
		class SliderTimeForecast: SliderTime
		{
			class Controls: Controls
			{
				class Frame: Frame {};
				class Hour: Hour {};
				class Minute: Minute {};
				class Second: Second {};
				class Separator: Separator {};
				class Title: Title {};
				class Value: Value
				{
					lineSize = 1800;
					sliderPosition = 3600;
					sliderRange[] = {1800, 28800};
				};
			};
		};
		class SliderTimeRespawn: SliderTime
		{
			class Controls: Controls
			{
				class Frame: Frame {};
				class Hour: Hour {};
				class Minute: Minute {};
				class Second: Second {};
				class Separator: Separator {};
				class Title: Title {};
				class Value: Value
				{
					lineSize = 5;
					sliderPosition = 0;
					sliderRange[] = {0, 300};
				};
			};
		};
		class Sound: ComboPreview
		{
			class Controls: Controls
			{
				class Preview: Preview {};
				class Title: Title {};
				class Value: Value
				{
					class Items
					{
						class None
						{
							data = "$NONE$";
							text = "No Sound";
							value = -1;
						};
					};
					class ItemsConfig
					{
						localConfig = 1;
						path[] = {"CfgSounds"};
						propertyText = "name";
						sort = 2;
					};
				};
			};
		};
		class SoundEffect: ComboPreview
		{
			class Controls: Controls
			{
				class Preview: Preview {};
				class Title: Title {};
				class Value: Value
				{
					class Items
					{
						class None
						{
							data = "";
							text = "No Sound";
							value = -1;
						};
					};
					class ItemsConfig
					{
						localConfig = 1;
						path[] = {"CfgSFX"};
						propertyText = "name";
						sort = 2;
					};
				};
			};
		};
		class SoundEnvironment: ComboPreview
		{
			class Controls: Controls
			{
				class Preview: Preview {};
				class Title: Title {};
				class Value: Value
				{
					class Items
					{
						class None
						{
							data = "";
							text = "No Sound";
							value = -1;
						};
					};
					class ItemsConfig
					{
						localConfig = 1;
						path[] = {"CfgEnvSounds"};
						propertyText = "name";
						sort = 2;
					};
				};
			};
		};
		class SoundVoice: Sound
		{
			class Controls: Controls
			{
				class Preview: Preview {};
				class Title: Title {};
				class Value: Value
				{
					class Items: Items
					{
						class None: None
						{
							data = "";
						};
					};
					class ItemsConfig: ItemsConfig {};
				};
			};
		};
		class Speaker: ComboPreview
		{
			class Controls: Controls
			{
				class Preview: Preview {};
				class Title: Title {};
				class Value: Value
				{
					class ItemsConfig
					{
						path[] = {"CfgVoice"};
						propertyPicture = "icon";
						propertyText = "displayName";
						sort = 1;
					};
				};
			};
		};
		class SpeedModeGroup: Toolbox
		{
			attributeLoad = "(_this controlsGroupCtrl 100) lbsetcursel (['limited','normal','full'] find _value);";
			attributeSave = "['limited','normal','full'] select (missionnamespace getvariable ['SpeedModeGroup_value',1]);";
			h = "2 * 	5 * (pixelH * pixelGrid * 	0.50)";
			class Controls: Controls
			{
				class Title: Title
				{
					h = "2 * 	5 * (pixelH * pixelGrid * 	0.50)";
				};
				class Value: Value
				{
					columns = 3;
					h = "2 * 	5 * (pixelH * pixelGrid * 	0.50)";
					idc = 100;
					onToolboxSelChanged = "missionnamespace setvariable ['SpeedModeGroup_value',_this select 1];";
					rows = 1;
					strings[] = {"\a3\3DEN\Data\Attributes\SpeedMode\limited_ca.paa", "\a3\3DEN\Data\Attributes\SpeedMode\normal_ca.paa", "\a3\3DEN\Data\Attributes\SpeedMode\full_ca.paa"};
					style = "0x02 + 0x30 + 0x800";
					tooltips[] = {"Limited", "Normal", "Full"};
					values[] = {0, 1, 2};
				};
			};
		};
		class SpeedModeWaypoint: Toolbox
		{
			attributeLoad = "(_this controlsGroupCtrl 100) lbsetcursel (['unchanged','limited','normal','full'] find _value);";
			attributeSave = "['unchanged','limited','normal','full'] select (missionnamespace getvariable ['SpeedModeWaypoint_value',1]);";
			h = "2 * 	5 * (pixelH * pixelGrid * 	0.50)";
			class Controls: Controls
			{
				class Title: Title
				{
					h = "2 * 	5 * (pixelH * pixelGrid * 	0.50)";
				};
				class Value: Value
				{
					columns = 4;
					h = "2 * 	5 * (pixelH * pixelGrid * 	0.50)";
					idc = 100;
					onToolboxSelChanged = "missionnamespace setvariable ['SpeedModeWaypoint_value',_this select 1];";
					rows = 1;
					strings[] = {"\a3\3DEN\Data\Attributes\default_ca.paa", "\a3\3DEN\Data\Attributes\SpeedMode\limited_ca.paa", "\a3\3DEN\Data\Attributes\SpeedMode\normal_ca.paa", "\a3\3DEN\Data\Attributes\SpeedMode\full_ca.paa"};
					style = "0x02 + 0x30 + 0x800";
					tooltips[] = {"Unchanged", "Limited", "Normal", "Full"};
					values[] = {-1, 0, 1, 2};
				};
			};
		};
		class StructuredText1: Default
		{
			attributeLoad = "		_control = (_this controlsGroupCtrl 101) controlsGroupCtrl 100;		_control ctrlsetstructuredtext parsetext gettext (_config >> 'description');		_controlPos = ctrlposition _control;		_controlPos set [3,(_controlPos select 3) max (ctrltextheight _control)];		_control ctrlsetposition _controlPos;		_control ctrlcommit 0;	";
			attributeSave = "";
			h = "1 * 	5 * (pixelH * pixelGrid * 	0.50)";
			class Controls
			{
				class Group: ctrlControlsGroup
				{
					h = "1 * 	5 * (pixelH * pixelGrid * 	0.50)";
					idc = 101;
					w = "(	48 + 	82 - 6) * (pixelW * pixelGrid * 	0.50)";
					x = "5 * (pixelW * pixelGrid * 	0.50)";
					class Controls
					{
						class Text: ctrlStructuredText
						{
							colorBackground[] = {0, 0, 0, 0.25};
							h = "1 * 	5 * (pixelH * pixelGrid * 	0.50)";
							idc = 100;
							text = "";
							w = "(	48 + 	82 - 7) * (pixelW * pixelGrid * 	0.50)";
						};
					};
				};
			};
		};
		class StructuredText10: StructuredText1
		{
			h = "10 * 	5 * (pixelH * pixelGrid * 	0.50)";
			class Controls: Controls
			{
				class Group: Group
				{
					h = "10 * 	5 * (pixelH * pixelGrid * 	0.50)";
					class Controls: Controls
					{
						class Text: Text
						{
							h = "10 * 	5 * (pixelH * pixelGrid * 	0.50)";
						};
					};
				};
			};
		};
		class StructuredText2: StructuredText1
		{
			h = "2 * 	5 * (pixelH * pixelGrid * 	0.50)";
			class Controls: Controls
			{
				class Group: Group
				{
					h = "2 * 	5 * (pixelH * pixelGrid * 	0.50)";
					class Controls: Controls
					{
						class Text: Text
						{
							h = "2 * 	5 * (pixelH * pixelGrid * 	0.50)";
						};
					};
				};
			};
		};
		class StructuredText3: StructuredText1
		{
			h = "3 * 	5 * (pixelH * pixelGrid * 	0.50)";
			class Controls: Controls
			{
				class Group: Group
				{
					h = "3 * 	5 * (pixelH * pixelGrid * 	0.50)";
					class Controls: Controls
					{
						class Text: Text
						{
							h = "3 * 	5 * (pixelH * pixelGrid * 	0.50)";
						};
					};
				};
			};
		};
		class StructuredText4: StructuredText1
		{
			h = "4 * 	5 * (pixelH * pixelGrid * 	0.50)";
			class Controls: Controls
			{
				class Group: Group
				{
					h = "4 * 	5 * (pixelH * pixelGrid * 	0.50)";
					class Controls: Controls
					{
						class Text: Text
						{
							h = "4 * 	5 * (pixelH * pixelGrid * 	0.50)";
						};
					};
				};
			};
		};
		class StructuredText5: StructuredText1
		{
			h = "5 * 	5 * (pixelH * pixelGrid * 	0.50)";
			class Controls: Controls
			{
				class Group: Group
				{
					h = "5 * 	5 * (pixelH * pixelGrid * 	0.50)";
					class Controls: Controls
					{
						class Text: Text
						{
							h = "5 * 	5 * (pixelH * pixelGrid * 	0.50)";
						};
					};
				};
			};
		};
		class StructuredText6: StructuredText1
		{
			h = "6 * 	5 * (pixelH * pixelGrid * 	0.50)";
			class Controls: Controls
			{
				class Group: Group
				{
					h = "6 * 	5 * (pixelH * pixelGrid * 	0.50)";
					class Controls: Controls
					{
						class Text: Text
						{
							h = "6 * 	5 * (pixelH * pixelGrid * 	0.50)";
						};
					};
				};
			};
		};
		class StructuredText7: StructuredText1
		{
			h = "7 * 	5 * (pixelH * pixelGrid * 	0.50)";
			class Controls: Controls
			{
				class Group: Group
				{
					h = "7 * 	5 * (pixelH * pixelGrid * 	0.50)";
					class Controls: Controls
					{
						class Text: Text
						{
							h = "7 * 	5 * (pixelH * pixelGrid * 	0.50)";
						};
					};
				};
			};
		};
		class StructuredText8: StructuredText1
		{
			h = "8 * 	5 * (pixelH * pixelGrid * 	0.50)";
			class Controls: Controls
			{
				class Group: Group
				{
					h = "8 * 	5 * (pixelH * pixelGrid * 	0.50)";
					class Controls: Controls
					{
						class Text: Text
						{
							h = "8 * 	5 * (pixelH * pixelGrid * 	0.50)";
						};
					};
				};
			};
		};
		class StructuredText9: StructuredText1
		{
			h = "9 * 	5 * (pixelH * pixelGrid * 	0.50)";
			class Controls: Controls
			{
				class Group: Group
				{
					h = "9 * 	5 * (pixelH * pixelGrid * 	0.50)";
					class Controls: Controls
					{
						class Text: Text
						{
							h = "9 * 	5 * (pixelH * pixelGrid * 	0.50)";
						};
					};
				};
			};
		};
		class SubCategory: Default
		{
			attributeLoad = "		_control = (_this controlsGroupCtrl 101) controlsGroupCtrl 100;		_control ctrlSetText gettext (_config >> 'title');		_control ctrlcommit 0;	";
			attributeSave = "";
			h = "1.5 * 	5 * (pixelH * pixelGrid * 	0.50)";
			w = "(	48 + 	82) * (pixelW * pixelGrid * 	0.50)";
			class Controls
			{
				class Group: ctrlControlsGroup
				{
					h = "1 * 	5 * (pixelH * pixelGrid * 	0.50)";
					idc = 101;
					w = "(	48 + 	82) * (pixelW * pixelGrid * 	0.50)";
					x = "5 * (pixelW * pixelGrid * 	0.50)";
					y = "0.3 * 	5 * (pixelH * pixelGrid * 	0.50)";
					class Controls
					{
						class Title: ctrlStatic
						{
							colorBackground[] = {1, 1, 1, 0.05};
							colorShadow[] = {0, 0, 0, 0};
							colorText[] = {1, 1, 1, 0.4};
							h = "5 * (pixelH * pixelGrid * 	0.50)";
							idc = 100;
							text = "";
							w = "(	48 + 	82 - 4) * (pixelW * pixelGrid * 	0.50) - (5 * pixelW) - (2 * pixelW)";
							x = "(5 * pixelW) + (2 * pixelW)";
						};
						class TitleDeco: ctrlStatic
						{
							colorBackground[] = {1, 1, 1, 0.05};
							h = "5 * (pixelH * pixelGrid * 	0.50)";
							w = "5 * pixelW";
						};
					};
				};
			};
		};
		class SubCategoryDesc1: SubCategory
		{
			attributeLoad = "		_control = (_this controlsGroupCtrl 101) controlsGroupCtrl 100;		_control ctrlSetText gettext (_config >> 'title');		_control ctrlcommit 0;		_control = (_this controlsGroupCtrl 101) controlsGroupCtrl 102;		_control ctrlSetStructuredText parseText gettext (_config >> 'description');		_controlPos = ctrlposition _control; 		_controlPos set [3,(_controlPos select 3) max (ctrltextheight _control)]; 		_control ctrlsetposition _controlPos;		_control ctrlcommit 0;	";
			h = "(1.5 * 	5 * (pixelH * pixelGrid * 	0.50)) + (1 * 	4.5 * (pixelH * pixelGrid * 	0.50))";
			class Controls: Controls
			{
				class Group: Group
				{
					h = "5 * (pixelH * pixelGrid * 	0.50) + 1 * 	4.5 * (pixelH * pixelGrid * 	0.50)";
					class Controls: Controls
					{
						class Description: ctrlStructuredText
						{
							colorBackground[] = {1, 1, 1, 0};
							h = "1 * 	4.5 * (pixelH * pixelGrid * 	0.50)";
							idc = 102;
							shadow = 0;
							text = "";
							w = "(	48 + 	82 - 4) * (pixelW * pixelGrid * 	0.50) - (5 * pixelW) - (2 * pixelW)";
							x = "(5 * pixelW) + (2 * pixelW)";
							y = "5 * (pixelH * pixelGrid * 	0.50)";
							class Attributes
							{
								align = "left";
								color = "#999999";
								colorLink = "";
								font = "RobotoCondensedLight";
								size = 1;
							};
						};
						class Title: Title {};
						class TitleDeco: TitleDeco {};
					};
				};
			};
		};
		class SubCategoryDesc2: SubCategoryDesc1
		{
			h = "(1.5 * 	5 * (pixelH * pixelGrid * 	0.50)) + (2 * 	4.5 * (pixelH * pixelGrid * 	0.50))";
			class Controls: Controls
			{
				class Group: Group
				{
					h = "5 * (pixelH * pixelGrid * 	0.50) + (2 * 	4.5 * (pixelH * pixelGrid * 	0.50))";
					class Controls: Controls
					{
						class Description: Description
						{
							h = "2 * 	4.5 * (pixelH * pixelGrid * 	0.50)";
						};
						class Title: Title {};
						class TitleDeco: TitleDeco {};
					};
				};
			};
		};
		class SubCategoryNoHeader1: Default
		{
			attributeLoad = "		_control = (_this controlsGroupCtrl 101) controlsGroupCtrl 102;		_control ctrlSetStructuredText parseText gettext (_config >> 'description');		_controlPos = ctrlposition _control; 		_controlPos set [3,(_controlPos select 3) max (ctrltextheight _control)]; 		_control ctrlsetposition _controlPos;		_control ctrlcommit 0;	";
			attributeSave = "";
			h = "(0.5 * 	5 * (pixelH * pixelGrid * 	0.50)) + (1 * 	4.5 * (pixelH * pixelGrid * 	0.50))";
			w = "(	48 + 	82) * (pixelW * pixelGrid * 	0.50)";
			class Controls
			{
				class Group: ctrlControlsGroup
				{
					h = "1 * 	4.5 * (pixelH * pixelGrid * 	0.50)";
					idc = 101;
					w = "(	48 + 	82) * (pixelW * pixelGrid * 	0.50)";
					x = "5 * (pixelW * pixelGrid * 	0.50)";
					y = "0.3 * 	5 * (pixelH * pixelGrid * 	0.50)";
					class Controls
					{
						class Description: ctrlStructuredText
						{
							colorBackground[] = {1, 1, 1, 0.05};
							h = "1 * 	4.5 * (pixelH * pixelGrid * 	0.50)";
							idc = 102;
							shadow = 0;
							text = "";
							w = "(	48 + 	82 - 4) * (pixelW * pixelGrid * 	0.50) - (5 * pixelW) - (2 * pixelW)";
							x = "(5 * pixelW) + (2 * pixelW)";
							class Attributes
							{
								align = "left";
								color = "#999999";
								colorLink = "";
								font = "RobotoCondensedLight";
								size = 1;
							};
						};
						class DescriptionDeco: ctrlStatic
						{
							colorBackground[] = {1, 1, 1, 0.05};
							h = "5 * (pixelH * pixelGrid * 	0.50)";
							w = "5 * pixelW";
						};
						class Title: ctrlStatic
						{
							colorBackground[] = {1, 1, 1, 0};
							colorShadow[] = {0, 0, 0, 0};
							colorText[] = {1, 1, 1, 0};
							h = "5 * (pixelH * pixelGrid * 	0.50)";
							idc = 100;
							text = "";
							w = "(	48 + 	82 - 4) * (pixelW * pixelGrid * 	0.50) - (5 * pixelW) - (2 * pixelW)";
							x = "(5 * pixelW) + (2 * pixelW)";
						};
					};
				};
			};
		};
		class SubCategoryNoHeader2: SubCategoryNoHeader1
		{
			h = "(0.5 * 	5 * (pixelH * pixelGrid * 	0.50)) + (2 * 	4.5 * (pixelH * pixelGrid * 	0.50))";
			class Controls: Controls
			{
				class Group: Group
				{
					h = "2 * 	4.5 * (pixelH * pixelGrid * 	0.50)";
					class Controls: Controls
					{
						class Description: Description
						{
							h = "2 * 	4.5 * (pixelH * pixelGrid * 	0.50)";
						};
						class DescriptionDeco: ctrlStatic
						{
							colorBackground[] = {1, 1, 1, 0.05};
							h = "2 * 	5 * (pixelH * pixelGrid * 	0.50)";
							w = "5 * pixelW";
						};
						class Title: Title {};
					};
				};
			};
		};
		class TaskStates: Toolbox
		{
			attributeLoad = "(_this controlsGroupCtrl 100) lbsetcursel (['CREATED','ASSIGNED','SUCCEEDED','FAILED','CANCELED'] find toupper _value);";
			attributeSave = "['CREATED','ASSIGNED','SUCCEEDED','FAILED','CANCELED'] select lbcursel (_this controlsGroupCtrl 100);";
			h = "1.5 * 	5 * (pixelH * pixelGrid * 	0.50)";
			class Controls: Controls
			{
				class Title: Title
				{
					h = "1.5 * 	5 * (pixelH * pixelGrid * 	0.50)";
				};
				class Value: Value
				{
					columns = 5;
					h = "1.5 * 	5 * (pixelH * pixelGrid * 	0.50)";
					idc = 100;
					rows = 1;
					strings[] = {"\a3\3DEN\Data\Attributes\TaskStates\created_ca.paa", "\a3\3DEN\Data\Attributes\TaskStates\assigned_ca.paa", "\a3\3DEN\Data\Attributes\TaskStates\succeeded_ca.paa", "\a3\3DEN\Data\Attributes\TaskStates\failed_ca.paa", "\a3\3DEN\Data\Attributes\TaskStates\canceled_ca.paa"};
					style = "0x02 + 0x30 + 0x800";
					tooltips[] = {"Created", "Assigned", "Succeeded", "Failed", "Canceled"};
					values[] = {0, 1, 2, 3, 4};
				};
			};
		};
		class TaskTypes: Combo
		{
			attributeLoad = "		comment 'DO NOT COPY THIS CODE TO YOUR ATTRIBUTE CONFIG UNLESS YOU ARE CHANGING SOMETHING IN THE CODE!';		_ctrlCombo = _this controlsGroupCtrl 100;		if (_value == '') then {_value = 'default';};		for '_i' from 0 to (lbsize _ctrlCombo - 1) do {			if (_value == (_ctrlCombo lbdata _i)) exitwith {_ctrlCombo lbsetcursel _i;};		};	";
			class Controls: Controls
			{
				class Title: Title {};
				class Value: Value
				{
					class ItemsConfig
					{
						path[] = {"CfgTaskTypes"};
						propertyPicture = "icon";
						propertyText = "displayName";
						sort = 2;
						tooltip = "%2";
					};
				};
			};
		};
		class Timeout: Title
		{
			attributeLoad = "		(_this controlsGroupCtrl 101) ctrlSetText str (_value select 0);		(_this controlsGroupCtrl 102) ctrlSetText str (_value select 1);		(_this controlsGroupCtrl 103) ctrlSetText str (_value select 2);	";
			attributeSave = "		[			parsenumber ctrlText (_this controlsGroupCtrl 101),			parsenumber ctrlText (_this controlsGroupCtrl 102),			parsenumber ctrlText (_this controlsGroupCtrl 103)		]	";
			idc = 100;
			class Controls: Controls
			{
				class Title: Title {};
				class TitleMax: TitleMin
				{
					text = "Max";
					x = "(	48 + 	82 * (2/3)) * (pixelW * pixelGrid * 	0.50)";
				};
				class TitleMid: TitleMin
				{
					text = "Mid";
					x = "(	48 + 	82 * (1/3)) * (pixelW * pixelGrid * 	0.50)";
				};
				class TitleMin: ctrlStatic
				{
					colorBackground[] = {1, 1, 1, 0};
					colorText[] = {1, 1, 1, 1};
					h = "5 * (pixelH * pixelGrid * 	0.50)";
					shadow = 0;
					style = 1;
					text = "Min";
					w = "(	5 * 2) * (pixelW * pixelGrid * 	0.50)";
					x = "48 * (pixelW * pixelGrid * 	0.50)";
				};
				class ValueMax: ValueMin
				{
					idc = 103;
					x = "(	48 + 	82 * (2/3) + 	(	5 * 2)) * (pixelW * pixelGrid * 	0.50)";
				};
				class ValueMid: ValueMin
				{
					idc = 102;
					x = "(	48 + 	82 * (1/3) + 	(	5 * 2)) * (pixelW * pixelGrid * 	0.50)";
				};
				class ValueMin: ctrlEdit
				{
					font = "EtelkaMonospacePro";
					h = "5 * (pixelH * pixelGrid * 	0.50)";
					idc = 101;
					sizeEx = "3.875 * (1 / (getResolution select 3)) * pixelGrid * 0.5";
					w = "(	82 / 3 - 2 * 	5) * (pixelW * pixelGrid * 	0.50)";
					x = "(	48 + 	(	5 * 2)) * (pixelW * pixelGrid * 	0.50)";
				};
			};
		};
		class TimeoutType: Toolbox
		{
			attributeLoad = "(_this controlsGroupCtrl 100) lbsetcursel _value;";
			attributeSave = "missionnamespace getvariable ['TimeoutType_value',0];";
			class Controls: Controls
			{
				class Title: Title {};
				class Value: Value
				{
					columns = 2;
					idc = 100;
					onToolboxSelChanged = "missionnamespace setvariable ['TimeoutType_value',_this select 1];";
					rows = 1;
					strings[] = {"Countdown", "Timeout"};
					tooltips[] = {"Once the conditions are met, the trigger will activate after the specified amount of time has elapsed.", "The trigger's conditions must be satisfied for the specified duration for the trigger to be activated."};
					values[] = {0, 1};
				};
			};
		};
		class Title: Default
		{
			class Controls
			{
				class Title: ctrlStatic
				{
					colorBackground[] = {0, 0, 0, 0};
					h = "5 * (pixelH * pixelGrid * 	0.50)";
					style = 1;
					w = "48 * (pixelW * pixelGrid * 	0.50)";
					x = 0;
				};
			};
		};
		class TitleWide: Default
		{
			class Controls
			{
				class Title: ctrlStatic
				{
					colorBackground[] = {0, 0, 0, 0};
					h = "5 * (pixelH * pixelGrid * 	0.50)";
					w = "(	48 + 	82 - 	5) * (pixelW * pixelGrid * 	0.50)";
					x = "5 * (pixelW * pixelGrid * 	0.50)";
				};
			};
		};
		class Toolbox: Title
		{
			attributeLoad = "";
			attributeSave = "";
			class Controls
			{
				class Title: Title {};
				class Value: ctrlToolbox
				{
					h = "5 * (pixelH * pixelGrid * 	0.50)";
					idc = 100;
					w = "82 * (pixelW * pixelGrid * 	0.50)";
					x = "48 * (pixelW * pixelGrid * 	0.50)";
				};
			};
		};
		class TriggerActivation: Combo
		{
			class Controls: Controls
			{
				class Title: Title {};
				class Value: Value
				{
					onLbSelChanged = "					_ctrlCombo = _this select 0;					_data = _ctrlCombo lbdata lbcursel _ctrlCombo;					_state = !(_data in ['NONE','ALPHA','BRAVO','CHARLIE','DELTA','ECHO','FOXTROT','GOLF','HOTEL','GOLF','JULIET']);					_fade = [0.75,0] select _state;					_ctrlGroup = ctrlParentControlsGroup ctrlParentControlsGroup _ctrlCombo;					{						if (ctrlclassname ctrlParentControlsGroup _x in ['ActivationType']) then {							_x ctrlenable _state;							_x ctrlsetfade _fade;							_x ctrlcommit 0;						};					} foreach (allcontrols (ctrlparent _ctrlCombo) - [ctrlParentControlsGroup _ctrlCombo]);			";
					onLoad = "				_this spawn {					disableserialization;					_ctrlCombo = _this select 0;					_data = _ctrlCombo lbdata lbcursel _ctrlCombo;					_state = !(_data in ['NONE','ALPHA','BRAVO','CHARLIE','DELTA','ECHO','FOXTROT','GOLF','HOTEL','GOLF','JULIET']);					_fade = [0.75,0] select _state;					_ctrlGroup = ctrlParentControlsGroup ctrlParentControlsGroup _ctrlCombo;					{						if (ctrlclassname ctrlParentControlsGroup _x in ['ActivationType']) then {							_x ctrlenable _state;							_x ctrlsetfade _fade;							_x ctrlcommit 0;						};					} foreach (allcontrols (ctrlparent _ctrlCombo) - [ctrlParentControlsGroup _ctrlCombo]);				};			";
					class Items
					{
						class Any
						{
							data = "ANY";
							text = "Anybody";
							tooltip = "Activated when any object satisfies the 'Activation Condition'.";
						};
						class AnyPlayer
						{
							data = "ANYPLAYER";
							text = "Any Player";
							tooltip = "Activated when any player of the given side satisfies the 'Activation Condition'.";
						};
						class Civ: West
						{
							data = "CIV";
							text = "Civilian";
						};
						class East: West
						{
							data = "EAST";
							text = "OPFOR";
						};
						class EastSeized: WestSeized
						{
							data = "EAST SEIZED";
							text = "Seized by OPFOR";
						};
						class Guer: West
						{
							data = "GUER";
							text = "Independent";
						};
						class GuerSeized: WestSeized
						{
							data = "GUER SEIZED";
							text = "Seized by Independent";
						};
						class Logic: West
						{
							data = "LOGIC";
							text = "Game Logic";
						};
						class None
						{
							data = "NONE";
							text = "None";
							tooltip = "No default activation, only a custom condition expression can activate the trigger.";
						};
						class RadioA
						{
							data = "ALPHA";
							text = "Radio Alpha";
							tooltip = "Activated by a player using a radio command (accessible for the player by pressing 0-0 on a standard keyboard). The trigger 'Text' will be used as the command title.";
						};
						class RadioB: RadioA
						{
							data = "BRAVO";
							text = "Radio Bravo";
						};
						class RadioC: RadioA
						{
							data = "CHARLIE";
							text = "Radio Charlie";
						};
						class RadioD: RadioA
						{
							data = "DELTA";
							text = "Radio Delta";
						};
						class RadioE: RadioA
						{
							data = "ECHO";
							text = "Radio Echo";
						};
						class RadioF: RadioA
						{
							data = "FOXTROT";
							text = "Radio Foxtrot";
						};
						class RadioG: RadioA
						{
							data = "GOLF";
							text = "Radio Golf";
						};
						class RadioH: RadioA
						{
							data = "HOTEL";
							text = "Radio Hotel";
						};
						class RadioI: RadioA
						{
							data = "INDIA";
							text = "Radio India";
						};
						class RadioJ: RadioA
						{
							data = "JULIET";
							text = "Radio Juliet";
						};
						class West
						{
							data = "WEST";
							text = "BLUFOR";
							tooltip = "Activated when any object of the given side satisfies the 'Activation Condition'.";
						};
						class WestSeized
						{
							data = "WEST SEIZED";
							text = "Seized by BLUFOR";
							tooltip = "Activated when the given side is in control of the area. Strength matters, which means one tank can be in control of an area while ten enemy infantrymen are still present.";
						};
					};
				};
			};
		};
		class TriggerActivationOwner: Combo
		{
			class Controls: Controls
			{
				class Title: Title {};
				class Value: Value
				{
					class Items
					{
						class Group
						{
							data = "GROUP";
							text = "Whole Group";
							tooltip = "Activated when all the owner's group members satisfy the 'Activation Condition'.";
						};
						class Leader
						{
							data = "LEADER";
							text = "Group Leader";
							tooltip = "Activated when leader of the owner's group satisfies the 'Activation Condition'.";
						};
						class Member
						{
							data = "MEMBER";
							text = "Any Group Member";
							tooltip = "Activated when anyone from the owner's group satisfies the 'Activation Condition'.";
						};
						class Vehicle
						{
							data = "VEHICLE";
							text = "Owner Only";
							tooltip = "Activated when the connected trigger owner (or its vehicle, if the owner is a crew member) satisfies the 'Activation Condition'.";
						};
					};
				};
			};
		};
		class TriggerActivationOwnerStatic: Combo
		{
			class Controls: Controls
			{
				class Title: Title {};
				class Value: Value
				{
					class Items
					{
						class Item0
						{
							data = "STATIC";
							text = "Static Object";
						};
					};
				};
			};
		};
		class TriggerType: Combo
		{
			class Controls: Controls
			{
				class Title: Title {};
				class Value: Value
				{
					class Items
					{
						class EastGuard: WestGuard
						{
							data = "EAST G";
							text = "Guarded by OPFOR";
						};
						class End1
						{
							data = "END1";
							text = "End #1";
							tooltip = "Complete the scenario successfully.";
						};
						class End2: End1
						{
							data = "END2";
							text = "End #2";
						};
						class End3: End1
						{
							data = "END3";
							text = "End #3";
						};
						class End4: End1
						{
							data = "END4";
							text = "End #4";
						};
						class End5: End1
						{
							data = "END5";
							text = "End #5";
						};
						class End6: End1
						{
							data = "END6";
							text = "End #6";
						};
						class GuerGuard: WestGuard
						{
							data = "GUER G";
							text = "Guarded by Independent";
						};
						class Lose
						{
							data = "LOOSE";
							text = "Lose";
							tooltip = "Fail the scenario.";
						};
						class None
						{
							data = "NONE";
							text = "None";
							tooltip = "No other effects except of those defined by 'On Activation' expression.";
						};
						class Switch
						{
							data = "SWITCH";
							text = "Skip Waypoint";
							tooltip = "Meant to work with a waypoint linked to the trigger using the 'Set Waypoint Activation' connection. Once activated, the trigger will force the waypoint to skip. Particularly useful for 'Hold' or 'Guard' waypoint types, which do not complete automatically.";
						};
						class WestGuard
						{
							data = "WEST G";
							text = "Guarded by BLUFOR";
							tooltip = "The trigger position becomes a point to be guarded by the given side. Groups with a 'Guard' waypoint will protect all guard points in the scenario, prioritizing them by the distance and order in which they were placed (the first placed is the most important).";
						};
					};
				};
			};
		};
		class Type: Title
		{
			h = "11 * 	5 * (pixelH * pixelGrid * 	0.50)";
			class Controls: Controls
			{
				class Search: ctrlEdit
				{
					h = "5 * (pixelH * pixelGrid * 	0.50)";
					idc = 501;
					text = "";
					w = "(	82 - 	5) * (pixelW * pixelGrid * 	0.50)";
					x = "48 * (pixelW * pixelGrid * 	0.50)";
				};
				class SearchButton: ctrlButtonSearch
				{
					h = "5 * (pixelH * pixelGrid * 	0.50)";
					idc = 502;
					w = "5 * (pixelW * pixelGrid * 	0.50)";
					x = "(	48 + 	82 - 	5) * (pixelW * pixelGrid * 	0.50)";
				};
				class Title: Title
				{
					h = "11 * 	5 * (pixelH * pixelGrid * 	0.50)";
				};
				class Value: ctrlTree
				{
					h = "10 * 	5 * (pixelH * pixelGrid * 	0.50)";
					idc = 500;
					w = "82 * (pixelW * pixelGrid * 	0.50)";
					x = "48 * (pixelW * pixelGrid * 	0.50)";
					y = "5 * (pixelH * pixelGrid * 	0.50)";
				};
			};
		};
		class UnitInsignia: Combo
		{
			class Controls: Controls
			{
				class Title: Title {};
				class Value: Value
				{
					class Items
					{
						class None
						{
							data = "";
							text = "No Insignia";
							value = -1;
						};
					};
					class ItemsConfig
					{
						path[] = {"CfgUnitInsignia"};
						propertyPicture = "texture";
						propertyText = "displayName";
						sort = 2;
					};
				};
			};
		};
		class UnitPos: Toolbox
		{
			attributeLoad = "(_this controlsGroupCtrl 100) lbsetcursel (['auto','down','middle','up'] find _value);";
			attributeSave = "['auto','down','middle','up'] select (missionnamespace getvariable ['Stance_value',0]);";
			h = "8 * (pixelH * pixelGrid * 	0.50)";
			class Controls: Controls
			{
				class Title: Title
				{
					h = "8 * (pixelH * pixelGrid * 	0.50)";
				};
				class Value: Value
				{
					columns = 4;
					h = "8 * (pixelH * pixelGrid * 	0.50)";
					idc = 100;
					onToolboxSelChanged = "missionnamespace setvariable ['Stance_value',_this select 1];";
					rows = 1;
					strings[] = {"\a3\3DEN\Data\Attributes\default_ca.paa", "\a3\3DEN\Data\Attributes\Stance\down_ca.paa", "\a3\3DEN\Data\Attributes\Stance\middle_ca.paa", "\a3\3DEN\Data\Attributes\Stance\up_ca.paa"};
					style = "0x02 + 0x30 + 0x800";
					tooltips[] = {"Default Stance", "Lie Down", "Crouch", "Stand Up"};
					values[] = {3, 2, 1, 0};
				};
			};
		};
		class Waves: Overcast {};
		class Wind: Overcast {};
		class WindDir: EditZ
		{
			class Controls: Controls
			{
				class Title: Title {};
				class TitleZ: TitleZ {};
				class WindDir: ValueZ
				{
					onKillFocus = "[_this select 0,parsenumber ctrltext (_this select 0)] call bis_fnc_3DENIntel;";
				};
			};
		};
	};
	class Camera
	{
		moveMinMapZoom = 1500;
		moveOffset[] = {0, -25, 25};
		textPlural = "Camera";
		textSingular = "Camera";
		class Draw
		{
			class 2D
			{
				cameraColor[] = {0.4, 0, 0.2, 1};
				cameraMaxLineDistance = 1000;
				cameraTexture = "\a3\3DEN\Data\Cfg3DEN\Camera\cameraTexture_ca.paa";
			};
		};
	};
	class Comment
	{
		textPlural = "Comments";
		textSingular = "Comment";
		class AttributeCategories
		{
			class Init
			{
				displayName = "Init";
				class Attributes
				{
					class Description
					{
						control = "EditMulti5";
						data = "Description";
						displayName = "Tooltip";
						tooltip = "";
						value = 0;
						wikiType = "[[String]]";
					};
					class Name
					{
						control = "Edit";
						data = "Name";
						displayName = "Title";
						tooltip = "";
						value = 0;
						wikiType = "[[String]]";
					};
					class Position
					{
						control = "EditXYZ";
						data = "position";
						displayName = "Position";
						tooltip = "World coordinates in meters. X goes from West to East, Y from South to North and Z is height above terrain.";
						validate = "number";
						wikiType = "[[Position3D]]";
					};
					class Rotation
					{
						control = "EditZ";
						data = "rotation";
						displayName = "Rotation";
						tooltip = "Local rotation in degrees. X is pitch, Y is roll and Z is yaw.";
						validate = "number";
						wikiType = "[[Number]]";
					};
				};
			};
		};
		class Draw
		{
			texture = "\a3\3DEN\Data\Cfg3DEN\Comment\texture_ca.paa";
			class 2D
			{
				alphaHover = 1;
				alphaNormal = 0.7;
				alphaSelected = 1;
				color[] = {0, 1, 0.75, 1};
				colorPreview[] = {0, 1, 0.75, 1};
				font = "RobotoCondensed";
				shadow = 1;
				size = "24 * pixelW";
				sizeEx = "3.96 * (1 / (getResolution select 3)) * pixelGrid * 0.5";
			};
			class 3D
			{
				alphaHover = 1;
				alphaNormal = 0.7;
				alphaSelected = 1;
				color[] = {0, 1, 0.75, 1};
				colorPreview[] = {0, 1, 0.75, 1};
				fadeDistance = 750;
				font = "RobotoCondensed";
				shadow = 1;
				size = "24 * pixelW";
				sizeEx = "3.96 * (1 / (getResolution select 3)) * pixelGrid * 0.5";
			};
		};
	};
	class Connections
	{
		class Group
		{
			color[] = {0, 1, 1, 1};
			cursor = "3DENConnectGroup";
			data = "Group";
			displayName = "Group to";
		};
		class RandomStart
		{
			color[] = {0.5, 0.5, 0.5, 0.5};
			cursor = "3DENConnectSync";
			data = "RandomStart";
			displayName = "Set Random Start";
		};
		class Sync
		{
			color[] = {0, 0, 1, 1};
			cursor = "3DENConnectSync";
			data = "Sync";
			displayName = "Sync to";
		};
		class TriggerOwner
		{
			color[] = {0, 1, 1, 1};
			cursor = "3DENConnectSync";
			data = "TriggerOwner";
			displayName = "Set Trigger Owner";
		};
		class WaypointActivation
		{
			color[] = {0, 0, 1, 1};
			cursor = "3DENConnectSync";
			data = "WaypointActivation";
			displayName = "Set Waypoint Activation";
		};
	};
	class Default
	{
		class Draw
		{
			colorAmbient[] = {0, 1, 0.5, 1};
			colorAxisHover[] = {1, 1, 1, 1};
			colorCiv[] = {"(profilenamespace getvariable ['Map_Civilian_R',0])", "(profilenamespace getvariable ['Map_Civilian_G',1])", "(profilenamespace getvariable ['Map_Civilian_B',1])", "(profilenamespace getvariable ['Map_Civilian_A',0.8])"};
			colorEast[] = {"(profilenamespace getvariable ['Map_OPFOR_R',0])", "(profilenamespace getvariable ['Map_OPFOR_G',1])", "(profilenamespace getvariable ['Map_OPFOR_B',1])", "(profilenamespace getvariable ['Map_OPFOR_A',0.8])"};
			colorEmpty[] = {"(profilenamespace getvariable ['Map_Unknown_R',0])", "(profilenamespace getvariable ['Map_Unknown_G',1])", "(profilenamespace getvariable ['Map_Unknown_B',1])", "(profilenamespace getvariable ['Map_Unknown_A',0.8])"};
			colorGuer[] = {"(profilenamespace getvariable ['Map_Independent_R',0])", "(profilenamespace getvariable ['Map_Independent_G',1])", "(profilenamespace getvariable ['Map_Independent_B',1])", "(profilenamespace getvariable ['Map_Independent_A',0.8])"};
			colorNotificationDefault[] = {0.12549, 0.505882, 0.313726, 0.9};
			colorNotificationError[] = {0.815686, 0.266667, 0.215686, 0.9};
			colorNotificationWarning[] = {0.8, 0.35, 0, 0.9};
			colorWest[] = {"(profilenamespace getvariable ['Map_BLUFOR_R',0])", "(profilenamespace getvariable ['Map_BLUFOR_G',1])", "(profilenamespace getvariable ['Map_BLUFOR_B',1])", "(profilenamespace getvariable ['Map_BLUFOR_A',0.8])"};
			colorX[] = {0.77, 0.18, 0.1, 1};
			colorY[] = {0.58, 0.82, 0.22, 1};
			colorZ[] = {0.26, 0.52, 0.92, 1};
			fontUnit = "RobotoCondensedLight";
			location = "\a3\3DEN\Data\Displays\Display3DEN\PanelLeft\location_ca.paa";
			locationList = "\a3\3DEN\Data\Displays\Display3DEN\PanelLeft\locationList_ca.paa";
			rotationUnit = "%.1f °";
			scaleUnit = "%.1f m";
			sizeExUnit = "4.32 * (1 / (getResolution select 3)) * pixelGrid * 0.5";
			translationUnit = "%.1f m";
			class 2D
			{
				colorAreaEdit[] = {0.6, 0.6, 0.6, 1};
				colorConnectionHover[] = {0.7, 0.7, 0.7, 1};
			};
			class 3D
			{
				colorAreaEdit[] = {0.75, 0.75, 0.75, 1};
				colorConnectionHover[] = {1, 1, 1, 1};
				iconAreaEdit = "\a3\3DEN\Data\Cfg3DEN\Default\iconAreaEdit_ca.paa";
				modelAreaEllipse = "\a3\3DEN\Objects\ellipse.p3d";
				modelAreaEllipseLimited = "\a3\3DEN\Objects\ellipseLimited.p3d";
				modelAreaRectangle = "\a3\3DEN\Objects\rectangle.p3d";
				modelAreaRectangleLimited = "\a3\3DEN\Objects\rectangleLimited.p3d";
				modelCursor = "\a3\3DEN\Objects\cursor.p3d";
			};
			class IconContainer
			{
				colorBackground[] = {0.2, 0.2, 0.2, 0.5};
				columns = 3;
				size = "24 * pixelW";
				spacing = "4 * pixelW";
				texture = "#(argb,8,8,3)color(0,0,0,0)";
				textureBackground = "#(argb,8,8,3)color(1,0,1,0.4)";
			};
		};
		class Grid
		{
			rotation[] = {1, 5, 15, 45, 90};
			rotationDefault = 15;
			rotationUnit = "%1 °";
			scaling[] = {0.1, 1, 10, 100};
			scalingDefault = 1;
			scalingUnit = "%1 m";
			textCustom = "%1 (Custom)";
			translation[] = {0.125, 0.25, 0.5, 1, 2, 4, 8, 16, 32, 64};
			translationDefault = 1;
			translationUnit = "%1 m";
		};
	};
	class EventHandlers
	{
		class BIS
		{
			init = "		'init' call bis_fnc_3DENStatusBar;		'init' call bis_fnc_3DENControlsHint;		'init' call bis_fnc_3DENInterface;	";
			onConnectingEnd = "['connectEnd',_this] call bis_fnc_3DENControlsHint;";
			onConnectingStart = "['connectStart',_this] call bis_fnc_3DENControlsHint;";
			onEntityMenu = "['onEntityMenu',_this] call bis_fnc_3DENEntityMenu;";
			onGridChange = "['OnGridChange',_this,true] call bis_fnc_3DENGrid;";
			onHistoryChange = "['History'] call bis_fnc_3DENToolbar;";
			onMapClosed = "['ToggleMap'] call bis_fnc_3DENToolbar;";
			onMapOpened = "['ToggleMap'] call bis_fnc_3DENToolbar;";
			onMessage = "_this call bis_fnc_3DENNotification;";
			onMissionAutosave = "1 call bis_fnc_3DENNotification;";
			onMissionListChange = "['onMissionListChange',0] call bis_fnc_3DENInterface;";
			onMissionLoad = "		['Init'] call bis_fnc_3DENToolbar;		['History'] call bis_fnc_3DENToolbar;		['MissionSection'] spawn bis_fnc_3DENToolbar;		['PlaceEmpty'] spawn bis_fnc_3DENInterface;		enableenvironment ('Preferences' get3DENMissionAttribute 'EnableEnvironment');		[] call compile preprocessfilelinenumbers 'init3DEN.sqf';	";
			onMissionNew = "		['History'] call bis_fnc_3DENToolbar;		['MissionSection'] spawn bis_fnc_3DENToolbar;		['PlaceEmpty'] spawn bis_fnc_3DENInterface;		0 call BIS_fnc_3DENVisionMode;		0 call BIS_fnc_3DENFlashlight;		enableenvironment ('Preferences' get3DENMissionAttribute 'EnableEnvironment');	";
			onMissionPreview = "['onMissionPreview',_this] spawn bis_fnc_3DENMissionPreview;";
			onMissionPreviewEnd = "		['onMissionPreviewEnd',_this] call bis_fnc_3DENMissionPreview;		true call bis_fnc_3DENDrawLocations;		'server' call bis_fnc_3DENStatusBar;		[] spawn bis_fnc_3dentutorial;		['reset'] call bis_fnc_3DENEntityMenu;		-2 spawn BIS_fnc_3DENVisionMode;		-2 call BIS_fnc_3DENFlashlight;		enableenvironment ('Preferences' get3DENMissionAttribute 'EnableEnvironment');		[] call compile preprocessfilelinenumbers 'init3DEN.sqf';	";
			onModeChange = "['showInterface',true] call bis_fnc_3DENInterface; ['showPanelRight',true] call bis_fnc_3DENInterface; ['mode'] spawn bis_fnc_3DENInterface; ['subMode'] spawn bis_fnc_3DENInterface;";
			onMoveGridToggle = "['MoveGridToggle'] call bis_fnc_3DENToolbar;";
			onRedo = "['History'] call bis_fnc_3DENToolbar;";
			onRotateGridToggle = "['RotateGridToggle'] call bis_fnc_3DENToolbar;";
			onScaleGridToggle = "['ScaleGridToggle'] call bis_fnc_3DENToolbar;";
			onSearchCreate = "['TabRight',0] call bis_fnc_3DENInterface;";
			onSearchEdit = "['TabLeft',0] call bis_fnc_3DENInterface;";
			onSelectionChange = "'select' call bis_fnc_3DENControlsHint;";
			onServerToggle = "'Server' call bis_fnc_3DENStatusBar; 'ButtonPlay' call bis_fnc_3DENInterface;";
			onSubmodeChange = "['showInterface',true] call bis_fnc_3DENInterface; ['showPanelRight',true] call bis_fnc_3DENInterface; ['subMode'] spawn bis_fnc_3DENInterface;";
			onSurfaceSnapToggle = "['SurfaceSnapToggle'] call bis_fnc_3DENToolbar;";
			onTerrainNew = "		true call bis_fnc_3DENDrawLocations;		'init' call bis_fnc_3DENListLocations;		'ButtonPlay' call bis_fnc_3DENInterface;		'FadeIn' spawn bis_fnc_3DENInterface;		['Init'] call bis_fnc_3DENToolbar;		0 call BIS_fnc_3DENVisionMode;		0 call BIS_fnc_3DENFlashlight;		if (missionname == '' && ('preferences' get3denmissionattribute 'StartRandom')) then {'random' call bis_fnc_3DENCamera;};		'onTerrainNew' call bis_fnc_3DENInterface;		enableenvironment ('Preferences' get3DENMissionAttribute 'EnableEnvironment');	";
			onTogglePlaceEmptyVehicle = "['PlaceEmpty'] spawn bis_fnc_3DENInterface;";
			onUndo = "['History'] call bis_fnc_3DENToolbar;";
			onVerticalToggle = "['VerticalToggle'] call bis_fnc_3DENToolbar;";
			onWidgetArea = "['WidgetToggle'] call bis_fnc_3DENToolbar;";
			onWidgetNone = "['WidgetToggle'] call bis_fnc_3DENToolbar;";
			onWidgetRotation = "['WidgetToggle'] call bis_fnc_3DENToolbar;";
			onWidgetScale = "['WidgetToggle'] call bis_fnc_3DENToolbar;";
			onWidgetToggle = "['WidgetToggle'] call bis_fnc_3DENToolbar;";
			onWidgetTranslation = "['WidgetToggle'] call bis_fnc_3DENToolbar;";
			onWorkspacePartSwitch = "['MissionSection'] spawn bis_fnc_3DENToolbar;";
		};
		class KeyframeAnimation
		{
			init = "_this call BIS_fnc_3den_init;";
			OnMissionLoad = "_this call BIS_fnc_3den_onMissionLoad;";
			OnMissionNew = "_this call BIS_fnc_3den_onMissionNew;";
			onMissionPreviewEnd = "_this call BIS_fnc_3den_onMissionPreviewEnd;";
			OnSelectionChange = "_this call BIS_fnc_3den_onSelectionChange;";
		};
	};
	class Favorites
	{
		class Mode
		{
			text = "Favorites";
			texture = "\a3\3DEN\Data\Displays\Display3DEN\PanelRight\modeFavorites_ca.paa";
			class Submodes
			{
				class Default
				{
					text = "";
					texture = "#(argb,8,8,3)color(1,1,1,1)";
				};
			};
		};
	};
	class Group
	{
		textPlural = "Compositions";
		textSingular = "Composition";
		class AttributeCategories
		{
			class Init
			{
				displayName = "Init";
				class Attributes
				{
					class Callsign
					{
						control = "Edit";
						defaultValue = "groupID _this";
						displayName = "Callsign";
						expression = "_this setGroupID [_value];";
						isLocalized = 1;
						property = "groupID";
						tooltip = "Group callsign as displayed in the radio chat log.";
						unique = 1;
						wikiType = "[[String]]";
					};
					class Init
					{
						control = "EditCodeMulti5";
						data = "Init";
						displayName = "Init";
						tooltip = "Expression called upon at start. In multiplayer, it is called on every machine and for each player who joins in the progress. The variable 'this' refers to the affected object.";
						validate = "expression";
						value = 0;
						wikiType = "[[String]]";
					};
					class Name
					{
						control = "EditCode";
						data = "Name";
						displayName = "Variable Name";
						tooltip = "Unique system name. Can contain only letters, numbers and underscore. The name is not case sensitive, so 'someName' and 'SOMENAME' are treated as the same variables.";
						unique = 1;
						validate = "variable";
						value = 0;
						wikiType = "[[String]]";
					};
					class Placement
					{
						control = "Edit";
						data = "placementRadius";
						displayName = "Placement Radius";
						tooltip = "Placement radius in meters. The entity will start at a random position within the radius.";
						validate = "number";
						wikiType = "[[Number]]";
					};
				};
			};
			class State
			{
				displayName = "State";
				class Attributes
				{
					class Behaviour
					{
						control = "BehaviourGroup";
						data = "behaviour";
						displayName = "Behavior";
						tooltip = "Behavior pattern of the group.";
						wikiType = "[[String]]";
					};
					class CombatMode
					{
						control = "CombatModeGroup";
						data = "combatMode";
						displayName = "Combat Mode";
						tooltip = "Controls how and when the group will choose to engage enemy targets.";
						wikiType = "[[String]]";
					};
					class DeleteWhenEmpty
					{
						control = "Checkbox";
						data = "garbageCollectGroup";
						displayName = "Delete when Empty";
						tooltip = "Automatically delete the group when it's empty.\n\nNote: Deletion is not immediate.";
						wikiType = "[[Bool]]";
					};
					class DynamicSimulation
					{
						control = "Checkbox";
						data = "dynamicSimulation";
						displayName = "Enable Dynamic Simulation";
						tooltip = "Activates dynamic simulation for all characters in the group.";
						wikiType = "[[Bool]]";
					};
					class Formation
					{
						control = "FormationGroup";
						data = "formation";
						displayName = "Formation";
						tooltip = "Default group formation. Based on the combat mode, group members may ignore the formation in 'Combat' and 'Stealth' modes.";
						wikiType = "[[String]]";
					};
					class SpeedMode
					{
						control = "SpeedModeGroup";
						data = "speedMode";
						displayName = "SpeedMode";
						tooltip = "Default travel speed of the group. In Combat and Stealth behavior modes, group members will try to prioritize this setting.";
						wikiType = "[[String]]";
					};
				};
			};
		};
		class Draw
		{
			iconCustomComposition = "\a3\3DEN\Data\Cfg3DEN\Group\iconCustomComposition_ca.paa";
			textureCivilian = "\a3\Ui_f\data\Map\Markers\NATO\n_unknown.paa";
			textureEast = "\a3\Ui_f\data\Map\Markers\NATO\o_unknown.paa";
			textureGuer = "\a3\Ui_f\data\Map\Markers\NATO\n_unknown.paa";
			textureUnknown = "\a3\Ui_f\data\Map\Markers\NATO\n_unknown.paa";
			textureWest = "\a3\Ui_f\data\Map\Markers\NATO\b_unknown.paa";
			class 2D
			{
				alphaHover = 1;
				alphaNormal = 0.5;
				alphaSelected = 1;
				color[] = {"side"};
				colorLine[] = {0, 0, 0, 1};
				colorPreview[] = {"side"};
				offsetY = 10;
				size = "32 * pixelW";
			};
			class 3D
			{
				alphaHover = 1;
				alphaNormal = 0.5;
				alphaSelected = 1;
				color[] = {"side"};
				colorLine[] = {0, 0, 0, 1};
				colorPreview[] = {"side"};
				fadeDistance = 3000;
				offsetY = 5;
				size = "32 * pixelW";
			};
		};
		class Mode
		{
			text = "Compositions";
			texture = "\a3\3DEN\Data\Displays\Display3DEN\PanelRight\PanelRight\modeGroups_ca.paa";
			class Submodes
			{
				class Civ
				{
					text = "Civilian";
					texture = "\a3\3DEN\Data\Displays\Display3DEN\PanelRight\side_civ_ca.paa";
				};
				class Custom
				{
					text = "Custom";
					texture = "\a3\3DEN\Data\Displays\Display3DEN\PanelRight\side_custom_ca.paa";
				};
				class East
				{
					text = "OPFOR";
					texture = "\a3\3DEN\Data\Displays\Display3DEN\PanelRight\side_east_ca.paa";
				};
				class Empty
				{
					text = "Props";
					texture = "\a3\3DEN\Data\Displays\Display3DEN\PanelRight\side_empty_ca.paa";
				};
				class Guer
				{
					text = "Independent";
					texture = "\a3\3DEN\Data\Displays\Display3DEN\PanelRight\side_guer_ca.paa";
				};
				class West
				{
					text = "BLUFOR";
					texture = "\a3\3DEN\Data\Displays\Display3DEN\PanelRight\side_west_ca.paa";
				};
			};
		};
	};
	class History
	{
		class AddToLayer
		{
			displayName = "Add to Layer";
			icon = "\a3\3DEN\Data\Cfg3DEN\History\AddToLayer_ca.paa";
		};
		class ChangeAttributes
		{
			displayName = "Edit Entity Attributes";
			icon = "\a3\3DEN\Data\Cfg3DEN\History\ChangeAttributes_ca.paa";
			tooltip = "%s";
		};
		class ChangeGlobalAttributes
		{
			displayName = "Edit Scenario Attributes";
			icon = "\a3\3DEN\Data\Cfg3DEN\History\ChangeAttributes_ca.paa";
		};
		class ChangeSeat
		{
			displayName = "Change Seat";
			icon = "\a3\3DEN\Data\Cfg3DEN\History\ChangeSeat_ca.paa";
		};
		class ConnectItems
		{
			displayName = "Connect (%s)";
			icon = "\a3\3DEN\Data\Cfg3DEN\History\ConnectItems_ca.paa";
		};
		class CreateComment
		{
			displayName = "Place Comment";
			icon = "\a3\3DEN\Data\Cfg3DEN\History\CreateComment_ca.paa";
		};
		class CreateCustomComposition
		{
			displayName = "Save Custom Composition";
			icon = "\a3\3DEN\Data\Cfg3DEN\History\Create_ca.paa";
		};
		class CreateGroup
		{
			displayName = "Create Group";
			icon = "\a3\3DEN\Data\Cfg3DEN\History\Create_ca.paa";
		};
		class CreateMarker
		{
			displayName = "Create Marker";
			icon = "\a3\3DEN\Data\Cfg3DEN\History\Create_ca.paa";
		};
		class CreateModule
		{
			displayName = "Create System";
			icon = "\a3\3DEN\Data\Cfg3DEN\History\Create_ca.paa";
		};
		class CreateObject
		{
			displayName = "Create Object";
			icon = "\a3\3DEN\Data\Cfg3DEN\History\Create_ca.paa";
		};
		class CreateTrigger
		{
			displayName = "Create Trigger";
			icon = "\a3\3DEN\Data\Cfg3DEN\History\Create_ca.paa";
		};
		class CreateWaypoint
		{
			displayName = "Create Waypoint";
			icon = "\a3\3DEN\Data\Cfg3DEN\History\Create_ca.paa";
		};
		class DeleteItems
		{
			displayName = "Delete";
			icon = "\a3\3DEN\Data\Cfg3DEN\History\DeleteItems_ca.paa";
			tooltip = "%s";
		};
		class DisconnectItems
		{
			displayName = "Disconnect (%s)";
			icon = "\a3\3DEN\Data\Cfg3DEN\History\DisconnectItems_ca.paa";
		};
		class MakeNewLayer
		{
			displayName = "New Layer";
			icon = "\a3\3DEN\Data\Cfg3DEN\History\MakeNewLayer_ca.paa";
		};
		class MissionNew
		{
			displayName = "Revert";
			icon = "\a3\3DEN\Data\Cfg3DEN\History\MissionNew_ca.paa";
		};
		class MoveItems
		{
			displayName = "Move";
			icon = "\a3\3DEN\Data\Cfg3DEN\History\MoveItems_ca.paa";
			tooltip = "%s";
		};
		class MultipleOperations
		{
			displayName = "Batch Change";
			icon = "\a3\3DEN\Data\Cfg3DEN\History\MultipleOperations_ca.paa";
		};
		class PasteItems
		{
			displayName = "Paste";
			icon = "\a3\3DEN\Data\Cfg3DEN\History\PasteItems_ca.paa";
			tooltip = "%s";
		};
		class RemoveFromLayer
		{
			displayName = "Move to Root";
			icon = "\a3\3DEN\Data\Cfg3DEN\History\RemoveFromLayer_ca.paa";
		};
		class RotateItems
		{
			displayName = "Rotate";
			icon = "\a3\3DEN\Data\Cfg3DEN\History\RotateItems_ca.paa";
			tooltip = "%s";
		};
		class ScaleItems
		{
			displayName = "Scale Area";
			icon = "\a3\3DEN\Data\Cfg3DEN\History\ScaleItems_ca.paa";
		};
	};
	class Layer
	{
		textPlural = "Layers";
		textSingular = "Layer";
		class AttributeCategories
		{
			class Init
			{
				displayName = "Init";
				class Attributes
				{
					class Name
					{
						control = "Edit";
						data = "Name";
						displayName = "Name";
						value = 0;
					};
					class Transformation
					{
						control = "Checkbox";
						data = "Transformation";
						displayName = "Enable Transformation";
						value = 0;
					};
					class Visibility
					{
						control = "Checkbox";
						data = "Visibility";
						displayName = "Enable Visibility";
						value = 0;
					};
				};
			};
		};
		class DefaultLayers
		{
			civ = "Civilian";
			east = "OPFOR";
			empty = "Props";
			guer = "Independent";
			logic = "Systems";
			markers = "Markers";
			triggers = "Triggers";
			west = "BLUFOR";
		};
		class Draw
		{
			icon = "\a3\3DEN\Data\Cfg3DEN\Layer\icon_ca.paa";
			iconDefault = "\a3\3DEN\Data\Cfg3DEN\Layer\iconDefault_ca.paa";
			iconDisabled = "\a3\3DEN\Data\Cfg3DEN\Layer\iconDisabled_ca.paa";
			iconHidden = "\a3\3DEN\Data\Cfg3DEN\Layer\iconHidden_ca.paa";
			iconHiddenDisabled = "\a3\3DEN\Data\Cfg3DEN\Layer\iconHiddenDisabled_ca.paa";
		};
	};
	class Logic
	{
		textPlural = "Systems";
		textSingular = "System";
		class AttributeCategories
		{
			class Control
			{
				displayName = "Control";
				class Attributes
				{
					class ControlMP
					{
						control = "ControlMP";
						data = "ControlMP";
						displayName = "Playable";
						tooltip = "When enabled, the character will appear as a slot in the multiplayer scenario lobby and in the list of roles available for team switch.";
						value = 0;
						wikiType = "[[Bool]]";
					};
					class ControlSP
					{
						control = "ControlSP";
						data = "ControlSP";
						displayName = "Player";
						tooltip = "Player in singleplayer. When enabled, the character will also be available in multiplayer and team switch ('Playable' status cannot be disabled individually in such case).";
						unique = 1;
						value = 0;
						wikiType = "[[Bool]]";
					};
					class Description
					{
						control = "Edit";
						data = "description";
						displayName = "Role Description";
						isLocalized = 1;
						tooltip = "Multiplayer role description visible in the multiplayer lobby. When undefined, the object type name will be used by default.";
						value = 0;
						wikiType = "[[String]]";
					};
				};
			};
			class Init
			{
				displayName = "Init";
				class Attributes
				{
					class Init
					{
						control = "EditCodeMulti3";
						data = "Init";
						displayName = "Init";
						tooltip = "Expression called upon at start. In multiplayer, it is called on every machine and for each player who joins in the progress. The variable 'this' refers to the affected object.";
						validate = "expression";
						value = 0;
						wikiType = "[[String]]";
					};
					class Name
					{
						control = "EditCode";
						data = "Name";
						displayName = "Variable Name";
						tooltip = "Unique system name. Can contain only letters, numbers and underscore. The name is not case sensitive, so 'someName' and 'SOMENAME' are treated as the same variables.";
						unique = 1;
						validate = "variable";
						value = 0;
						wikiType = "[[String]]";
					};
				};
			};
			class Presence
			{
				collapsed = 1;
				displayName = "Presence";
				class Attributes
				{
					class Presence
					{
						control = "Slider";
						data = "presence";
						displayName = "Probability of Presence";
						tooltip = "Probability of presence evaluated at the scenario start. When it fails, the object is not created at all.";
						value = 0;
						wikiType = "[[Number]]";
					};
					class PresenceCondition
					{
						control = "EditCode";
						data = "presenceCondition";
						displayName = "Condition of Presence";
						tooltip = "Condition of presence evaluated at the scenario start, must return boolean expression. When false, the object is not created at all.";
						validate = "condition";
						value = 0;
						wikiType = "[[String]]";
					};
				};
			};
			class Transformation
			{
				collapsed = 1;
				displayName = "Transformation";
				class Attributes
				{
					class Placement
					{
						control = "Edit";
						data = "placementRadius";
						displayName = "Placement Radius";
						tooltip = "Placement radius in meters. The entity will start at a random position within the radius.";
						validate = "number";
						wikiType = "[[Number]]";
					};
					class Position
					{
						control = "EditXYZ";
						data = "position";
						displayName = "Position";
						tooltip = "World coordinates in meters. X goes from West to East, Y from South to North and Z is height above terrain.";
						validate = "number";
						wikiType = "[[Position3D]]";
					};
					class Rotation
					{
						control = "EditXYZ";
						data = "rotation";
						displayName = "Rotation";
						tooltip = "Local rotation in degrees. X is pitch, Y is roll and Z is yaw.";
						validate = "number";
						wikiType = "[[Number]]";
					};
					class Shape
					{
						control = "ShapeTrigger";
						data = "IsRectangle";
						displayName = "Shape";
						tooltip = "Area shape.";
						wikiType = "[[Bool]]";
					};
					class Size
					{
						control = "EditAB";
						data = "size2";
						displayName = "Size";
						tooltip = "Area size in meters.";
						validate = "number";
						wikiType = "[[Array]]";
					};
					class Size3
					{
						control = "EditABC";
						data = "size3";
						displayName = "Size";
						tooltip = "Area size in meters.";
						validate = "number";
						wikiType = "[[Array]]";
					};
				};
			};
			class Type
			{
				collapsed = 1;
				displayName = "Type";
				class Attributes
				{
					class Type
					{
						control = "Type";
						data = "itemClass";
						displayName = "Type";
						tooltip = "";
						wikiType = "[[String]]";
					};
				};
			};
		};
		class AttributeCategoryCustom
		{
			controlCheckbox = "Checkbox";
			controlCombo = "Combo";
			controlEdit = "Edit";
			displayName = "System Specific - %s";
			expression = "_this setVariable ['%s',_value,true];";
		};
		class Draw
		{
			class 2D
			{
				alphaHover = 1;
				alphaHoverBackground = 1;
				alphaNormal = 0.7;
				alphaNormalBackground = 0.7;
				alphaSelected = 1;
				alphaSelectedBackground = 1;
				color[] = {1, 1, 1};
				colorBackground[] = {0.1, 0.1, 0.95};
				colorModule[] = {0, 0, 0};
				colorModuleBackground[] = {1, 1, 1};
				colorModulePreview[] = {0, 0, 0};
				colorModulePreviewBackground[] = {1, 1, 1};
				colorPreview[] = {1, 1, 1};
				colorPreviewBackground[] = {0.1, 0.1, 0.95};
				presenceBorder = 2;
				size = "16 * pixelW";
				sizeBackground = "24 * pixelW";
				sizeBackgroundModule = "48 * pixelW";
				sizeModule = "32 * pixelW";
				textureBackground = "\a3\3DEN\Data\Cfg3DEN\Logic\textureBackground_ca.paa";
				textureBackgroundModule = "\a3\3DEN\Data\Cfg3DEN\Logic\textureBackgroundModule_ca.paa";
			};
			class 3D
			{
				alphaHover = 1;
				alphaHoverBackground = 1;
				alphaNormal = 0.5;
				alphaNormalBackground = 0.5;
				alphaSelected = 1;
				alphaSelectedBackground = 1;
				color[] = {1, 1, 1};
				colorBackground[] = {0.1, 0.1, 0.95};
				colorModule[] = {0, 0, 0};
				colorModuleBackground[] = {1, 1, 1};
				colorModulePreview[] = {0, 0, 0};
				colorModulePreviewBackground[] = {1, 1, 1};
				colorPreview[] = {1, 1, 1};
				colorPreviewBackground[] = {0.1, 0.1, 0.95};
				fadeDistance = 750;
				size = "16 * pixelW";
				sizeBackground = "24 * pixelW";
				sizeBackgroundModule = "48 * pixelW";
				sizeModule = "32 * pixelW";
				textureBackground = "\a3\3DEN\Data\Cfg3DEN\Logic\textureBackground_ca.paa";
				textureBackgroundModule = "\a3\3DEN\Data\Cfg3DEN\Logic\textureBackgroundModule_ca.paa";
			};
		};
		class Mode
		{
			default = 1;
			text = "Systems";
			texture = "\a3\3DEN\Data\Displays\Display3DEN\PanelRight\modeModules_ca.paa";
			class Submodes
			{
				class Logic
				{
					text = "Logic Entities";
					texture = "\a3\3DEN\Data\Displays\Display3DEN\PanelRight\submode_logic_logic_ca.paa";
				};
				class Module
				{
					text = "Modules";
					texture = "\a3\3DEN\Data\Displays\Display3DEN\PanelRight\submode_logic_module_ca.paa";
				};
			};
		};
	};
	class Marker
	{
		textPlural = "Markers";
		textSingular = "Marker";
		class AttributeCategories
		{
			class Init
			{
				displayName = "Init";
				class Attributes
				{
					class Name
					{
						control = "EditCode";
						data = "markerName";
						displayName = "Variable Name";
						tooltip = "Unique system name. Can contain any characters. The name is not case sensitive, so 'someName' and 'SOMENAME' are treated as the same variables.";
						unique = 1;
						validate = "notEmptyString";
						value = 0;
						wikiType = "[[String]]";
					};
					class Text
					{
						control = "Edit";
						data = "text";
						displayName = "Text";
						isLocalized = 1;
						tooltip = "Text displayed right from the marker.";
						value = 0;
						wikiType = "[[String]]";
					};
				};
			};
			class Style
			{
				displayName = "Style";
				class Attributes
				{
					class Alpha
					{
						control = "Slider";
						data = "alpha";
						displayName = "Alpha";
						tooltip = "Transparency. When the icon marker has a shadow, it will be visible behind the transparent icon.";
						wikiType = "[[Number]]";
					};
					class Brush
					{
						control = "markerBrush";
						data = "brush";
						displayName = "Brush";
						tooltip = "Area fill texture.";
						wikiType = "[[String]]";
					};
					class Color
					{
						control = "MarkerColor";
						data = "baseColor";
						displayName = "Color";
						tooltip = "Marker color. 'Default' is based on the selected marker type.";
						wikiType = "[[Array]]";
					};
					class Shape
					{
						control = "ShapeMarker";
						data = "markerType";
						displayName = "Shape";
						tooltip = "Area shape.";
						wikiType = "[[String]]";
					};
				};
			};
			class Transformation
			{
				displayName = "Transformation";
				class Attributes
				{
					class Position
					{
						control = "EditXY";
						data = "position";
						displayName = "Position";
						tooltip = "World coordinates in meters. X goes from West to East and Y from South to North.";
						validate = "number";
						wikiType = "[[Position3D]]";
					};
					class Rotation
					{
						control = "EditZ";
						data = "rotation";
						displayName = "Rotation";
						tooltip = "Local rotation in degrees. X is pitch, Y is roll and Z is yaw.";
						validate = "number";
						wikiType = "[[Number]]";
					};
					class Size
					{
						control = "EditAB";
						data = "size2";
						displayName = "Size";
						tooltip = "Area size in meters.";
						validate = "number";
						wikiType = "[[Array]]";
					};
				};
			};
			class Type
			{
				collapsed = 1;
				displayName = "Type";
				class Attributes
				{
					class Type
					{
						control = "Type";
						data = "itemClass";
						displayName = "Type";
						tooltip = "Icon texture.";
						wikiType = "[[String]]";
					};
				};
			};
		};
		class AttributeCategoryCustom
		{
			displayName = "Marker Specific - %s";
		};
		class Draw
		{
			textEllipse = "Ellipse";
			textRectangle = "Rectangle";
			class 2D
			{
				alphaHover = 1;
				alphaNormal = 0.5;
				alphaSelected = 1;
				iconEllipse = "\a3\3DEN\Data\Cfg3DEN\Marker\iconEllipse_ca.paa";
				iconRectangle = "\a3\3DEN\Data\Cfg3DEN\Marker\iconRectangle_ca.paa";
				sizeCenter = "16 * pixelW";
				textureCenter = "\a3\3DEN\Data\Cfg3DEN\Marker\textureCenter_ca.paa";
			};
		};
		class Mode
		{
			text = "Markers";
			texture = "\a3\3DEN\Data\Displays\Display3DEN\PanelRight\modeMarkers_ca.paa";
			class Submodes
			{
				class Area
				{
					text = "Areas";
					texture = "\a3\3DEN\Data\Displays\Display3DEN\PanelRight\submode_marker_area_ca.paa";
				};
				class Icon
				{
					text = "Icons";
					texture = "\a3\3DEN\Data\Displays\Display3DEN\PanelRight\submode_marker_icon_ca.paa";
				};
			};
		};
	};
	class Messages
	{
		customCompositionDelete = "Do you want to delete the composition?";
		customCompositionEmptyName = "Composition name cannot be empty!";
		customCompositionOverwrite = "Do you want to overwrite the composition?";
		editCrewType = "Object type cannot be changed when a crew member is selected.";
		editorClose = "Do you want to close Eden Editor?";
		editorCloseServer = "Do you want to close Eden Editor? The server will be shut down and all players disconnected!";
		emptyFileName = "Scenario file name cannot be empty!";
		folderDelete = "Do you want to delete the folder?";
		groupLimitExceeded = "Only 288 groups per side are supported!";
		missionDelete = "Do you want to delete the scenario?";
		missionDiscard = "You have unsaved changes in the currently opened scenario. Do you want to load another scenario?";
		missionLoadError = "Error when loading the scenario!";
		MissionLoadImported = "Importing the scenario will update it to a new format. A backup will be created in the scenario folder. Do you want to import the scenario?";
		missionLoadRequiredAddons = "";
		missionMerge = "Merging will include all entities in the selected scenario into the currently opened scenario. No external files will be included. Do you want to merge into the scenario?";
		missionMergeErrorOldSQM = "Cannot merge 2D editor scenario into the current scenario!";
		missionOverwrite = "Do you want to overwrite the scenario?";
		missionPreviewWillEndServer = "You have a hosted server running in the background. Do you want to shut it down?";
		missionSaveError = "Error when saving the scenario!";
		missionSaveInvalidChar = "Scenario name contains an invalid character!";
		uniqueAttributeUsed = "Value of the attribute %s is already used in a different entity.";
	};
	class Mission
	{
		class GarbageCollection
		{
			displayName = "Performance";
			class AttributeCategories
			{
				class DynamicSimulation
				{
					collapsed = 0;
					displayName = "Dynamic Simulation";
					class Attributes
					{
						class DynSimDistEmptyVehicle
						{
							control = "DynSimDist";
							data = "DynSimDistEmptyVehicle";
							displayName = "Empty Vehicles";
							typeName = "number";
						};
						class DynSimDistGroup
						{
							control = "DynSimDist";
							data = "DynSimDistGroup";
							displayName = "Characters";
							typeName = "number";
						};
						class DynSimDistMultIsMoving
						{
							control = "DynSimDistMultIsMoving";
							data = "DynSimMovingCoef";
							displayName = "Is Moving";
							tooltip = "Multiplies activation distance of non-static entity by set value.";
							typeName = "number";
						};
						class DynSimDistProp
						{
							control = "DynSimDist";
							data = "DynSimDistProp";
							displayName = "Props";
							typeName = "number";
						};
						class DynSimDistVehicle
						{
							control = "DynSimDist";
							data = "DynSimDistVehicle";
							displayName = "Manned Vehicles";
							typeName = "number";
						};
						class DynSimEnabled
						{
							control = "Checkbox";
							data = "DynSimEnabled";
							displayName = "Enable Dynamic Simulation";
							tooltip = "Turns on the 'Dynamic Simulation' system. Only entities and groups with the 'Dynamic Simulation' will be affected.";
							typeName = "number";
						};
						class DynSimSaturateByObjDist
						{
							control = "Checkbox";
							data = "DynSimSaturateByObjDist";
							displayName = "Limit by View Distance";
							tooltip = "Limits all activation distances to player's object view distance. Dynamically simulated entities beyond the object view distance will be disabled.";
							typeName = "number";
						};
						class DynSimSubCategory_ActivationDistanceModifiers
						{
							control = "SubCategory";
							data = "AttributeSystemSubcategory";
							description = "";
							displayName = "Activation Distance Modifiers";
						};
						class DynSimSubCategory_ActivationDistances
						{
							control = "SubCategory";
							data = "AttributeSystemSubcategory";
							description = "Set activation distances for each of the categories. Entities further away will not be simulated.";
							displayName = "Activation Distance Settings";
						};
					};
				};
				class GarbageCollection
				{
					collapsed = 1;
					displayName = "Garbage Collection";
					class Attributes
					{
						class CorpseLimit
						{
							control = "EditShort";
							data = "CorpseLimit";
							defaultValue = "15";
							displayName = "Limit";
							tooltip = "Maximum allowed number of dead bodies in the scenario.";
							validate = "number";
							value = 0;
							wikiType = "[[Number]]";
						};
						class CorpseManagerMode
						{
							control = "GarbageCollectorMode";
							data = "CorpseManagerMode";
							defaultValue = "0";
							displayName = "Mode";
							tooltip = "Garbage collecting mode.";
							value = 0;
							wikiType = "[[Number]]";
						};
						class CorpseRemovalMaxTime
						{
							control = "SliderTime";
							data = "CorpseRemovalMaxTime";
							defaultValue = "3600";
							displayName = "Max Delay";
							tooltip = "Time in seconds before a dead body is removed when the number of dead bodies is below or equals the 'Limit'.";
							value = 0;
							wikiType = "[[Number]]";
						};
						class CorpseRemovalMinTime
						{
							control = "SliderTime";
							data = "CorpseRemovalMinTime";
							defaultValue = "10";
							displayName = "Min Delay";
							tooltip = "Time in seconds before a dead body is removed when the number of dead bodies exceeds the 'Limit'.";
							value = 0;
							wikiType = "[[Number]]";
						};
						class GarbageCollectionSubCategory_CharacterCorpses
						{
							control = "SubCategory";
							data = "AttributeSystemSubcategory";
							description = "";
							displayName = "Character Corpses";
						};
						class GarbageCollectionSubCategory_Wrecks
						{
							control = "SubCategory";
							data = "AttributeSystemSubcategory";
							description = "";
							displayName = "Vehicle Wrecks";
						};
						class MinPlayerDistance
						{
							control = "Edit";
							data = "MinPlayerDistance";
							displayName = "Minimum distance";
							tooltip = "The minimum distance from any player. Set the value to 0 to remove the min. distance.";
							value = 0;
							wikiType = "[[Number]]";
						};
						class WreckLimit
						{
							control = "EditShort";
							data = "WreckLimit";
							defaultValue = "15";
							displayName = "Limit";
							tooltip = "Maximum allowed number of dead bodies in the scenario.";
							validate = "number";
							value = 0;
							wikiType = "[[Number]]";
						};
						class WreckManagerMode
						{
							control = "GarbageCollectorMode";
							data = "WreckManagerMode";
							defaultValue = "0";
							displayName = "Mode";
							tooltip = "Garbage collecting mode.";
							value = 0;
							wikiType = "[[Number]]";
						};
						class WreckRemovalMaxTime
						{
							control = "SliderTime";
							data = "WreckRemovalMaxTime";
							defaultValue = "3600";
							displayName = "Max Delay";
							tooltip = "Time in seconds before a dead body is removed when the number of dead bodies is below or equals the 'Limit'.";
							value = 0;
							wikiType = "[[Number]]";
						};
						class WreckRemovalMinTime
						{
							control = "SliderTime";
							data = "WreckRemovalMinTime";
							defaultValue = "10";
							displayName = "Min Delay";
							tooltip = "Time in seconds before a dead body is removed when the number of dead bodies exceeds the 'Limit'.";
							value = 0;
							wikiType = "[[Number]]";
						};
					};
				};
			};
		};
		class Intel
		{
			display = "Display3DENEditAttributesIntel";
			displayName = "Environment";
			class AttributeCategories
			{
				class Date
				{
					displayName = "Date";
					class Attributes
					{
						class Date
						{
							control = "Date";
							data = "IntelDate";
							defaultValue = "";
							displayName = "Date";
							expression = "";
							tooltip = "Starting date.";
							value = 0;
							wikiType = "[[Array]] in format [year, month, day]";
						};
						class Daytime
						{
							control = "SliderTimeDay";
							data = "IntelTime";
							defaultValue = "";
							displayName = "Time";
							expression = "";
							tooltip = "Starting time of the day. Please note that the sunrise and sunset times are influenced by the date (e.g., days are shorter in winter) and the longitude and latitude of the terrain.";
							value = 0;
							wikiType = "[[Number]]";
						};
					};
				};
				class Fog
				{
					displayName = "Fog";
					class Attributes
					{
						class FogForecast
						{
							control = "Fog";
							data = "IntelFogForecast";
							displayName = "Fog Forecast";
							tooltip = "Forecasted fog.";
							value = 0;
							wikiType = "[[Number]]";
						};
						class FogStart
						{
							control = "Fog";
							data = "IntelFogStart";
							displayName = "Fog Start";
							tooltip = "Initial fog. Strength affects not only how far player can see, but also limits the sight of AI entities.";
							value = 0;
							wikiType = "[[Number]]";
						};
					};
				};
				class ForecastTime
				{
					collapsed = 1;
					displayName = "Weather Forecast";
					class Attributes
					{
						class ForecastTime
						{
							control = "SliderTimeForecast";
							data = "IntelTimeOfChanges";
							defaultValue = "1";
							displayName = "Time of Changes";
							expression = "";
							tooltip = "Delay until all forecasted weather values take effect.";
							value = 0;
							wikiType = "[[Number]]";
						};
					};
				};
				class Lightnings
				{
					collapsed = 1;
					displayName = "Lightnings";
					class Attributes
					{
						class LightningsForced
						{
							control = "CheckboxState";
							data = "IntelLightningIsForced";
							displayName = "Manual Override";
							tooltip = "Enables manual settings in this category. When disabled, the engine will calculate the values automatically.";
							value = 0;
							wikiType = "[[Bool]]";
						};
						class LightningsForecast
						{
							control = "Slider";
							data = "IntelLightningForecast";
							displayName = "Lightnings Forecast";
							tooltip = "Forecasted frequency of lightning.";
							value = 0;
							wikiType = "[[Number]]";
						};
						class LightningsStart
						{
							control = "Slider";
							data = "IntelLightningStart";
							displayName = "Lightnings Start";
							tooltip = "Initial frequency of lightning. Applied only when the cloud cover is already bad, i.e., a high value is ignored when the weather is sunny.";
							value = 0;
							wikiType = "[[Number]]";
						};
					};
				};
				class Overcast
				{
					displayName = "Overcast";
					class Attributes
					{
						class OvercastForecast
						{
							control = "Slider";
							data = "IntelWeatherForecast";
							displayName = "Overcast Forecast";
							tooltip = "Forecasted cloud cover.";
							value = 0;
							wikiType = "[[Number]]";
						};
						class OvercastStart
						{
							control = "Overcast";
							data = "IntelWeatherStart";
							displayName = "Overcast Start";
							tooltip = "Initial cloud cover. Unless set manually, this value also affects rain, lightning, waves, wind and gusts values.";
							value = 0;
							wikiType = "[[Number]]";
						};
					};
				};
				class Rain
				{
					collapsed = 1;
					displayName = "Rain";
					class Attributes
					{
						class RainForced
						{
							control = "CheckboxState";
							data = "IntelRainIsForced";
							displayName = "Manual Override";
							tooltip = "Enables manual settings in this category. When disabled, the engine will calculate the values automatically.";
							value = 0;
							wikiType = "[[Bool]]";
						};
						class RainForecast
						{
							control = "Slider";
							data = "IntelRainForecast";
							displayName = "Rain Forecast";
							tooltip = "Forecasted rain strength.";
							value = 0;
							wikiType = "[[Number]]";
						};
						class RainStart
						{
							control = "Rain";
							data = "IntelRainStart";
							displayName = "Rain Start";
							tooltip = "Initial rain strength. Applied only when the cloud cover is already bad, i.e., a high value is ignored when the weather is sunny.";
							value = 0;
							wikiType = "[[Number]]";
						};
					};
				};
				class Waves
				{
					collapsed = 1;
					displayName = "Waves";
					class Attributes
					{
						class WavesForced
						{
							control = "CheckboxState";
							data = "IntelWavesIsForced";
							displayName = "Manual Override";
							tooltip = "Enables manual settings in this category. When disabled, the engine will calculate the values automatically.";
							value = 0;
							wikiType = "[[Bool]]";
						};
						class WavesForecast
						{
							control = "Slider";
							data = "IntelWavesForecast";
							displayName = "Waves Forecast";
							tooltip = "Forecasted waves size.";
							value = 0;
							wikiType = "[[Number]]";
						};
						class WavesStart
						{
							control = "Waves";
							data = "IntelWavesStart";
							displayName = "Waves Start";
							tooltip = "Initial waves size. Applied independently of cloud cover settings.";
							value = 0;
							wikiType = "[[Number]]";
						};
					};
				};
				class Wind
				{
					collapsed = 1;
					displayName = "Wind";
					class Attributes
					{
						class DirectionForecast
						{
							control = "EditZ";
							data = "IntelWindDirectionForecast";
							displayName = "Direction Forecast";
							tooltip = "Forecasted wind direction.";
							value = 0;
							wikiType = "[[Number]]";
						};
						class DirectionStart
						{
							control = "WindDir";
							data = "IntelWindDirectionStart";
							displayName = "Direction Start";
							tooltip = "Initial wind direction.";
							value = 0;
							wikiType = "[[Number]]";
						};
						class GustsForecast
						{
							control = "Gusts";
							data = "IntelWindGustForecast";
							displayName = "Gusts Forecast";
							tooltip = "Forecasted gusts value.";
							value = 0;
							wikiType = "[[Number]]";
						};
						class GustsStart
						{
							control = "Slider";
							data = "IntelWindGustStart";
							displayName = "Gusts Start";
							tooltip = "Initial gusts strength. Gusts are randomly changing wind direction. The worse the cloud cover, the stronger and more frequent the changes.";
							value = 0;
							wikiType = "[[Number]]";
						};
						class WindForced
						{
							control = "CheckboxState";
							data = "IntelWindIsForced";
							displayName = "Manual Override";
							tooltip = "Enables manual settings in this category. When disabled, the engine will calculate the values automatically.";
							value = 0;
							wikiType = "[[Bool]]";
						};
						class WindForecast
						{
							control = "Slider";
							data = "IntelWindForecast";
							displayName = "Wind Forecast";
							tooltip = "Forecasted wind strength.";
							value = 0;
							wikiType = "[[Number]]";
						};
						class WindStart
						{
							control = "Wind";
							data = "IntelWindStart";
							displayName = "Wind Start";
							tooltip = "Initial wind strength. Together with wind direction, it influences how clouds, smoke, vegetation or flags are moving.";
							value = 0;
							wikiType = "[[Number]]";
						};
					};
				};
			};
		};
		class Multiplayer
		{
			displayName = "Multiplayer";
			class AttributeCategories
			{
				class Lobby
				{
					displayName = "Lobby";
					class Attributes
					{
						class DisabledAI
						{
							control = "CheckboxReversed";
							data = "DisabledAI";
							displayName = "Enable AI";
							tooltip = "When AI is enabled, all playable characters are created at the scenario start, controlled by AI. Upon joining, a player takes control of an existing character.\nWhen AI is disabled, a new character is created for each connecting player.\nServer host can disable AI even when it is allowed by default.";
							value = 0;
							wikiType = "[[Bool]]";
						};
						class JoinUnassigned
						{
							control = "CheckboxReversed";
							data = "JoinUnassigned";
							displayName = "Auto Assign Slots";
							tooltip = "When enabled, arriving players will be first assigned to the side with the lowest number of players. Valid only for scenarios with multiple playable sides involved.";
							value = 0;
							wikiType = "[[Bool]]";
						};
						class OverviewText
						{
							control = "Edit";
							data = "IntelOverviewText";
							defaultValue = "''";
							displayName = "Summary";
							tooltip = "Short summary shown in the scenario lobby.";
							value = 0;
							wikiType = "[[Text]]";
						};
					};
				};
				class Respawn
				{
					displayName = "Respawn";
					class Attributes
					{
						class AIKills
						{
							control = "Checkbox";
							data = "AIKills";
							displayName = "Allow AI Score";
							tooltip = "When enabled, the score of playable characters controlled by AI will appear on the scoreboard.";
							value = 0;
							wikiType = "[[Bool]]";
						};
						class EnableTeamSwitch
						{
							control = "CheckboxNumber";
							data = "EnableTeamSwitch";
							displayName = "Enable Team Switch";
							expression = "true";
							respawnTypes[] = {5};
							tooltip = "When enabled, players will be able to manually switch to any other playable character in the scenario not controlled by another player.";
							value = 0;
							wikiType = "[[Bool]]";
						};
						class Respawn
						{
							control = "Respawn";
							data = "Respawn";
							displayName = "Respawn";
							tooltip = "Character respawn type. Defines what happens to players and playable characters after they die in multiplayer scenarios. Has no effect in singleplayer scenarios.";
							value = 0;
							wikiType = "[[Number]]";
						};
						class RespawnButton
						{
							control = "CheckboxNumber";
							defaultValue = 1;
							displayName = "Allow Manual Respawn";
							expression = "true";
							property = "RespawnButton";
							respawnTypes[] = {2, 3, 4, 5};
							tooltip = "When enabled, players will have the option to manually respawn in the pause menu.";
							value = 0;
							wikiType = "[[Bool]]";
						};
						class RespawnDelay
						{
							control = "SliderTimeRespawn";
							data = "RespawnDelay";
							displayName = "Respawn Delay";
							respawnTypes[] = {2, 3};
							tooltip = "Time in seconds after which players respawn.";
							value = 0;
							wikiType = "[[Number]]";
						};
						class RespawnDialog
						{
							control = "Checkbox";
							data = "RespawnDialog";
							displayName = "Show Scoreboard";
							respawnTypes[] = {2, 3};
							tooltip = "When enabled, the scoreboard is shown while waiting for respawn. May be subdued by some respawn rulesets.";
							value = 0;
							wikiType = "[[Bool]]";
						};
						class RespawnTemplates
						{
							control = "RespawnTemplates";
							defaultValue = "['']";
							displayName = "Rulesets";
							expression = "true";
							property = "RespawnTemplates";
							tooltip = "Specific respawn rulesets based on currently selected 'Respawn'.";
							value = 0;
							wikiType = "[[Array]]";
						};
						class RespawnVehicleDelay
						{
							control = "SliderTimeRespawn";
							data = "RespawnVehicleDelay";
							displayName = "Vehicle Respawn Delay";
							tooltip = "Time in seconds after which vehicles respawn.";
							value = 0;
							wikiType = "[[Number]]";
						};
					};
				};
				class Revive
				{
					collapsed = 0;
					displayName = "Revive";
					class Attributes
					{
						class ReviveDuration
						{
							control = "ReviveDuration";
							defaultValue = "6";
							displayName = "Revive Duration";
							expression = "";
							property = "ReviveDelay";
							tooltip = "Controls the time it takes to revive someone.";
							typeName = "number";
							wikiType = "[[String]]";
						};
						class ReviveForceRespawnDuration
						{
							control = "ReviveForceRespawnDuration";
							defaultValue = "3";
							displayName = "Force Respawn Duration";
							expression = "";
							property = "ReviveForceRespawnDelay";
							tooltip = "Controls how long it takes to force respawn while incapacitated.";
							typeName = "number";
							wikiType = "[[String]]";
						};
						class ReviveMedicSpeedMultiplier
						{
							control = "ReviveMedicSpeedMultiplier";
							defaultValue = "2";
							displayName = "Medic Speed Multiplier";
							expression = "";
							property = "ReviveMedicSpeedMultiplier";
							tooltip = "Controls how much faster a medic revives someone.";
							typeName = "number";
							wikiType = "[[String]]";
						};
						class ReviveMode
						{
							control = "ReviveMode";
							defaultValue = "0";
							displayName = "Revive Mode";
							expression = "";
							property = "ReviveMode";
							tooltip = "Controls who can be incapacitated and who can revive others.";
							typeName = "number";
							wikiType = "[[String]]";
						};
						class ReviveRequiredItems
						{
							control = "ReviveRequiredItems";
							defaultValue = "0";
							displayName = "Required Items";
							expression = "";
							property = "ReviveRequiredItems";
							tooltip = "Controls the item required to revive others.";
							typeName = "number";
							wikiType = "[[String]]";
						};
						class ReviveRequiredTrait
						{
							control = "ReviveRequiredTrait";
							defaultValue = "0";
							displayName = "Required Trait";
							expression = "";
							property = "ReviveRequiredTrait";
							tooltip = "Controls the specialty required to revive others.";
							typeName = "number";
							wikiType = "[[String]]";
						};
						class ReviveUnconsciousStateDuration
						{
							control = "ReviveUnconsciousStateDuration";
							defaultValue = "120";
							displayName = "Bleed Out Duration";
							expression = "";
							property = "ReviveBleedOutDelay";
							tooltip = "Controls how long it takes an incapacitated unit to bleed out.";
							typeName = "number";
							wikiType = "[[String]]";
						};
						class ReviveUnconsciousStateMode
						{
							control = "ReviveUnconsciousStateMode";
							defaultValue = "0";
							displayName = "Incapacitation Mode";
							expression = "";
							property = "ReviveUnconsciousStateMode";
							tooltip = "Controls the level of simulation involved in triggering incapacitation.";
							typeName = "number";
							wikiType = "[[String]]";
						};
					};
				};
				class Tasks
				{
					collapsed = 1;
					displayName = "Tasks";
					class Attributes
					{
						class SharedObjectives
						{
							control = "SharedObjectives";
							defaultValue = "0";
							displayName = "Shared Objectives";
							expression = "if (isMultiplayer) then {[_value] spawn bis_fnc_sharedObjectives;};";
							property = "SharedObjectives";
							tooltip = "Sets if tasks assigned to friendlies are visualized to player and who can assign/unassign tasks.";
							typeName = "number";
							wikiType = "[[String]]";
						};
					};
				};
				class Type
				{
					displayName = "Type";
					class Attributes
					{
						class GameType
						{
							control = "GameType";
							data = "GameType";
							defaultValue = 0;
							displayName = "Game Type";
							tooltip = "Scenario type shown in the server browser and in the loading screen.";
							value = 0;
							wikiType = "[[String]]";
						};
						class MaxPlayers
						{
							control = "EditShort";
							data = "MaxPlayers";
							displayName = "Max Players";
							tooltip = "Minimum number of allowed players.";
							validate = "number";
							value = 0;
							wikiType = "[[Number]]";
						};
						class MinPlayers
						{
							control = "EditShort";
							data = "MinPlayers";
							displayName = "Min Players";
							tooltip = "Minimum number of required players.";
							validate = "number";
							value = 0;
							wikiType = "[[Number]]";
						};
					};
				};
			};
		};
		class Preferences
		{
			displayName = "Preferences";
			class AttributeCategories
			{
				class Camera
				{
					displayName = "Camera";
					class Attributes
					{
						class CameraAdaptiveSpeed
						{
							control = "Checkbox";
							data = "CameraAdaptiveSpeed";
							defaultValue = "true";
							displayName = "Adaptive Speed";
							tooltip = "When enabled, the camera speed will be based on altitude above surface. The greater the altitude, the faster the speed.";
							value = 0;
						};
						class CameraATL
						{
							control = "Checkbox";
							data = "CameraATL";
							defaultValue = "false";
							displayName = "Copy Terrain";
							tooltip = "When enabled, the camera altitude will remain constant above the terrain while moving, otherwise it remains constant above the sea level.";
							value = 0;
						};
						class CameraSpeedCoefDefault
						{
							control = "SliderCameraSpeedMult";
							data = "CameraSpeedMod";
							defaultValue = 1;
							displayName = "Default Speed";
							tooltip = "Default camera speed coefficient. Influences movement without 'Turbo' key held.";
							typeName = "number";
							value = 0;
						};
						class CameraSpeedCoefModified
						{
							control = "SliderCameraSpeedMult";
							data = "CameraSpeedFastMod";
							defaultValue = 1;
							displayName = "Fast Speed";
							tooltip = "Fast camera speed coefficient. Influences movement with 'Turbo' key held. Affected also by the default speed.";
							typeName = "number";
							value = 0;
						};
						class CameraZoomSpeedMod
						{
							control = "SliderCameraSpeedMult";
							data = "CameraZoomSpeedMod";
							defaultValue = 1;
							displayName = "Mouse wheel Sensitivity";
							tooltip = "How fast the camera moves around the scene when rotating the mouse wheel.";
							typeName = "number";
							value = 0;
						};
						class StartMap
						{
							control = "Checkbox";
							defaultValue = "false";
							displayName = "Start in Map";
							expression = "true";
							property = "StartMap";
							tooltip = "When enabled, the map will be shown after launching the editor.";
							value = 0;
						};
						class StartRandom
						{
							control = "Checkbox";
							defaultValue = "true";
							displayName = "Start on Random Position";
							expression = "true";
							property = "StartRandom";
							tooltip = "When enabled, the camera will start on a random position after launching the editor or loading a different terrain.";
							value = 0;
						};
					};
				};
				class Internal
				{
					displayName = "Internal";
					class Attributes
					{
						class CustomMissionFolders
						{
							control = "Edit";
							data = "CustomMissionFolders";
							displayName = "Mission Folders";
							tooltip = "Paths to folders to be scanned for scenarios in 'Open Scenario' window.\nPaths start in the game root, and are divided by a semicolon.\nExample: A3\Missions_F_EXPA\Campaign\Scenarios";
							value = 0;
						};
					};
				};
				class Misc
				{
					displayName = "Misc";
					class Attributes
					{
						class AutoGroup
						{
							control = "Checkbox";
							data = "AutoGrouping";
							defaultValue = "true";
							displayName = "Automatic Grouping";
							expression = "true";
							tooltip = "When enabled, newly placed AI entities will be automatically grouped together with the nearest AI entities of the same side. Visualized before placing by a line drawn towards the nearest entity.";
							value = 0;
						};
						class EnableEnvironment
						{
							control = "Checkbox";
							defaultValue = "false";
							displayName = "Environmental Sounds";
							expression = "enableEnvironment _value;";
							property = "EnableEnvironment";
							tooltip = "When enabled, environmental sounds and effects (e.g., mosquitos or butterflies) will be present even in the editor.";
							value = 0;
						};
						class RecompileFunctions
						{
							control = "Checkbox";
							defaultValue = "false";
							displayName = "Recompile Functions";
							expression = "true";
							property = "RecompileFunctions";
							tooltip = "When enabled, global scripted functions will be recompiled every time the preview is started.";
							value = 0;
						};
					};
				};
				class Saving
				{
					displayName = "Saving";
					class Attributes
					{
						class Autoload
						{
							control = "Checkbox";
							data = "Autoload";
							defaultValue = 0;
							displayName = "Auto-load";
							tooltip = "When enabled, the previously edited scenario on the selected terrain will be loaded automatically when launching the editor.";
							value = 0;
						};
						class Autosave
						{
							control = "PreferencesSavegame";
							data = "Autosave";
							displayName = "Auto-save";
							tooltip = "How often should the scenario be automatically saved. The save will override the previous manual save.";
							value = 0;
						};
						class Binarize
						{
							control = "Checkbox";
							data = "SaveBinarized";
							displayName = "Binarize New Scenario Files";
							tooltip = "When true, *.sqm files of all new scenarios will be binarized by default. Binarization saves loading time, but makes the file uneditable in a text editor. This setting can also be set individually per scenario.";
							value = 0;
							wikiType = "[[Bool]]";
						};
					};
				};
			};
		};
		class Scenario
		{
			displayName = "General";
			class AttributeCategories
			{
				class Init
				{
					collapsed = 1;
					displayName = "Init";
					class Attributes
					{
						class Init
						{
							control = "EditCodeMulti5";
							defaultValue = "''";
							displayName = "Init";
							expression = "if !(is3DEN) then {[] call compile _value;};";
							property = "Init";
							tooltip = "Expression called upon at start. In multiplayer, it is called on every machine and for each player who joins in the progress. The variable 'this' refers to the affected object.";
							validate = "expression";
							value = 0;
							wikiType = "[[String]]";
						};
					};
				};
				class Loading
				{
					collapsed = 1;
					displayName = "Loading Screen";
					class Attributes
					{
						class LoadScreen
						{
							control = "Edit";
							data = "LoadScreen";
							defaultValue = "''";
							displayName = "Picture";
							tooltip = "Path to the picture visible in the loading screens before and during the scenario.";
							value = 0;
							wikiType = "[[String]]";
						};
						class OnLoadMission
						{
							control = "EditMulti5";
							data = "OnLoadMission";
							defaultValue = "''";
							displayName = "Text";
							isLocalized = 1;
							tooltip = "Short text visible in loading screens before and during the scenario. Use @STR_ prefix to link to localization keys.";
							value = 0;
							wikiType = "[[String]]";
						};
					};
				};
				class Misc
				{
					displayName = "Misc";
					class Attributes
					{
						class Binarize
						{
							control = "Checkbox";
							data = "SaveBinarized";
							displayName = "Binarize the Scenario File";
							tooltip = "When true, the *.sqm file will be binarized. The process saves loading time, but makes the file uneditable in a text editor.";
							value = 0;
							wikiType = "[[Bool]]";
						};
						class GuerAllegiance
						{
							control = "GuerAllegiance";
							data = "IntelIndepAllegiance";
							defaultValue = "true";
							displayName = "Independents Allegiance";
							expression = "";
							tooltip = "Sets who the Independent side will be friendly to. The value is shared across all scenario phases.";
							value = 0;
							wikiType = "[[Array]] in format [west:[[Number]],east:[[Number]]]";
						};
					};
				};
				class Overview
				{
					displayName = "Overview";
					class Attributes
					{
						class AppId
						{
							control = "AppId";
							data = "AppId";
							defaultValue = "0";
							displayName = "DLC";
							tooltip = "When set, the overview image will be overlaid with a DLC frame indicating the scenario belongs to the DLC.";
							value = 0;
							wikiType = "[[Number]]";
						};
						class AssetType
						{
							control = "AssetType";
							data = "AssetType";
							defaultValue = "'restricted'";
							displayName = "Require DLC";
							tooltip = "Sets if the DLC is required. When checked, the player will not be able to play the scenario if the DLC is not owned.";
							value = 0;
							wikiType = "[[String]]";
						};
						class OverviewPicture
						{
							control = "Edit";
							data = "OverviewPicture";
							defaultValue = "''";
							displayName = "Picture";
							tooltip = "Path to overview picture visible in the scenarios menu. When no loading screen picture is defined, this will be used in loading screen instead.";
							value = 0;
							wikiType = "[[String]]";
						};
						class OverviewText
						{
							control = "EditMulti5";
							data = "OverviewText";
							defaultValue = "''";
							displayName = "Text";
							isLocalized = 1;
							tooltip = "Short overview text visible in the scenarios menu. When no loading screen text is defined, this will be used in loading screens instead. Use @STR_ prefix to link to localization keys.";
							value = 0;
							wikiType = "[[String]]";
						};
					};
				};
				class OverviewLocked
				{
					collapsed = 1;
					displayName = "Overview (Locked)";
					class Attributes
					{
						class OverviewPictureLocked
						{
							control = "Edit";
							data = "OverviewPictureLocked";
							defaultValue = "''";
							displayName = "Picture";
							tooltip = "Path to the overview picture visible in the scenarios menu. When no loading screen picture is defined, this will be used in the loading screen instead.";
							value = 0;
							wikiType = "[[String]]";
						};
						class OverviewTextLocked
						{
							control = "EditMulti5";
							data = "OverviewTextLocked";
							defaultValue = "''";
							displayName = "Text";
							isLocalized = 1;
							tooltip = "Short overview text visible in the scenarios menu when the scenario is locked (see 'Unlock' category for more details). Use @STR_ prefix to link to localization keys.";
							value = 0;
							wikiType = "[[String]]";
						};
					};
				};
				class Presentation
				{
					displayName = "Presentation";
					class Attributes
					{
						class Author
						{
							control = "Edit";
							data = "Author";
							defaultValue = "profileNameSteam";
							displayName = "Author";
							isLocalized = 1;
							tooltip = "Scenario author. Appears in the scenarios menu and in loading screens.";
							value = 0;
							wikiType = "[[String]]";
						};
						class BriefingName
						{
							control = "Edit";
							data = "IntelBriefingName";
							defaultValue = "''";
							displayName = "Title";
							isLocalized = 1;
							tooltip = "Scenario name. Appears in the scenarios menu, multiplayer lobby and loading screens. Use @STR_ prefix to link to localization keys.";
							value = 0;
							wikiType = "[[String]]";
						};
					};
				};
				class States
				{
					collapsed = 1;
					displayName = "States";
					class Attributes
					{
						class Briefing
						{
							control = "Checkbox";
							data = "Briefing";
							displayName = "Show Briefing";
							tooltip = "When disabled, the scenario will start automatically after the loading, without showing the briefing. Valid only for singleplayer scenarios.";
							value = 0;
							wikiType = "[[Bool]]";
						};
						class Debriefing
						{
							control = "Checkbox";
							data = "Debriefing";
							displayName = "Show Debriefing";
							tooltip = "When disabled, the debriefing screen will not be shown when the scenario is completed.";
							value = 0;
							wikiType = "[[Bool]]";
						};
						class EnableDebugConsole
						{
							control = "EnableDebugConsole";
							defaultValue = "0";
							displayName = "Debug Console";
							expression = "true";
							property = "EnableDebugConsole";
							tooltip = "Determines debug console availability";
							typeName = "NUMBER";
							value = 0;
							wikiType = "[[Number]]";
						};
						class ForceRotorLibSimulation
						{
							control = "Checkbox";
							data = "ForceRotorLibSimulation";
							displayName = "Advanced Flight Model";
							tooltip = "When enabled, all player controlled helicopters will use the advanced flight model.";
							value = 0;
							wikiType = "[[Bool]]";
						};
						class Saving
						{
							control = "Checkbox";
							data = "Saving";
							displayName = "Enable Saving";
							tooltip = "When disabled, the 'SAVE' option in the pause menu will be disabled and scripted autosaves will not do anything.";
							value = 0;
							wikiType = "[[Bool]]";
						};
						class ShowCompass
						{
							control = "Checkbox";
							data = "ShowCompass";
							displayName = "Show Compass";
							tooltip = "When disabled, the compass will not be available either on the map, or in the scene after pressing the 'Compass' key. Can also be achieved by removing the compass from the player's inventory.";
							value = 0;
							wikiType = "[[Bool]]";
						};
						class ShowGPS
						{
							control = "Checkbox";
							data = "ShowGPS";
							displayName = "Show GPS";
							tooltip = "When disabled, the GPS minimap will not be available in the scene after pressing the 'GPS' key. Can also be achieved by removing the GPS from the player's inventory.";
							value = 0;
							wikiType = "[[Bool]]";
						};
						class ShowHUD
						{
							control = "Checkbox";
							data = "ShowHUD";
							displayName = "Show HUD";
							tooltip = "When disabled, on-screen information such as weapon information or the command menu will be hidden.";
							value = 0;
							wikiType = "[[Bool]]";
						};
						class ShowMap
						{
							control = "Checkbox";
							data = "ShowMap";
							displayName = "Show Map";
							tooltip = "When disabled, a black screen is shown instead of the map. Tasks, notes and other information will remain accessible. Can also be achieved by removing the map from the player's inventory.";
							value = 0;
							wikiType = "[[Bool]]";
						};
						class ShowUAVFeed
						{
							control = "Checkbox";
							data = "ShowUAVFeed";
							displayName = "Show UAV Feed";
							tooltip = "When disabled, the UAV feed will not be available in the scene after pressing the 'AV Camera' key.";
							value = 0;
							wikiType = "[[Bool]]";
						};
						class ShowWatch
						{
							control = "Checkbox";
							data = "ShowWatch";
							displayName = "Show Watch";
							tooltip = "When disabled, the watch will not be available in the scene after pressing the 'Watch' key. Can also be achieved by removing the watch from the player's inventory.";
							value = 0;
							wikiType = "[[Bool]]";
						};
					};
				};
				class Unlock
				{
					collapsed = 1;
					displayName = "Unlock";
					class Attributes
					{
						class DoneKeys
						{
							control = "EditArray";
							data = "DoneKeys";
							defaultValue = "[]";
							displayName = "Unlocked Keys";
							tooltip = "Keys needed to mark the scenario as completed in the scenarios menu. Can be multiple words divided by a semicolon. Key can be activated using 'activateKey' scripting command. Does not affect the multiplayer and campaign scenarios, and the scenarios downloaded from Steam.";
							value = 0;
							wikiType = "[[Array]]";
						};
						class Keys
						{
							control = "EditArray";
							data = "Keys";
							defaultValue = "[]";
							displayName = "Required Keys";
							tooltip = "Keys required for mission to be available for playing from the scenarios menu. Can be multiple words divided by a semicolon. Does not affect the multiplayer and campaign scenarios.";
							value = 0;
							wikiType = "[[Array]]";
						};
						class KeysLimit
						{
							control = "EditShort";
							data = "KeysLimit";
							defaultValue = "0";
							displayName = "Required Keys Limit";
							tooltip = "The number of required keys to be active for the mission to be unlocked.";
							value = 0;
							wikiType = "[[Number]]";
						};
					};
				};
			};
		};
	};
	class Notifications
	{
		class MissionAutoSaved
		{
			isWarning = 0;
			text = "Scenario autosaved";
		};
		class MissionExportError
		{
			isWarning = 1;
			text = "The scenario has to be saved before you can export it.";
		};
		class MissionExportMP
		{
			isWarning = 0;
			text = "Exported to &lt;Arma 3&gt;/MPMissions";
		};
		class MissionExportSP
		{
			isWarning = 0;
			text = "Exported to &lt;Arma 3&gt;/Missions";
		};
		class MissionNoPlayer
		{
			isWarning = 1;
			text = "Attempting to play without player";
		};
		class MissionSaved
		{
			isWarning = 0;
			text = "Scenario saved";
		};
		class TooltipExported
		{
			isWarning = 0;
			text = "LOC: Tooltip exported to clipboard";
		};
		class VehicleEnemy
		{
			isWarning = 1;
			text = "Warning! Moving soldier to enemy vehicle";
		};
		class VehicleFull
		{
			isWarning = 1;
			text = "No space in target vehicle";
		};
	};
	class Object
	{
		textPlural = "Objects";
		textSingular = "Object";
		class AttributeCategories
		{
			class Control
			{
				displayName = "Control";
				class Attributes
				{
					class ControlMP
					{
						control = "ControlMP";
						data = "ControlMP";
						displayName = "Playable";
						tooltip = "When enabled, the character will appear as a slot in the multiplayer scenario lobby and in the list of roles available for team switch.";
						value = 0;
						wikiType = "[[Bool]]";
					};
					class ControlSP
					{
						control = "ControlSP";
						data = "ControlSP";
						displayName = "Player";
						tooltip = "Player in singleplayer. When enabled, the character will also be available in multiplayer and team switch ('Playable' status cannot be disabled individually in such case).";
						unique = 1;
						value = 0;
						wikiType = "[[Bool]]";
					};
					class Description
					{
						control = "Edit";
						data = "description";
						displayName = "Role Description";
						isLocalized = 1;
						tooltip = "Multiplayer role description visible in the multiplayer lobby. When undefined, the object type name will be used by default.";
						value = 0;
						wikiType = "[[String]]";
					};
				};
			};
			class Identity
			{
				collapsed = 1;
				displayName = "Identity";
				class Attributes
				{
					class Face
					{
						condition = "objectBrain";
						control = "Face";
						defaultValue = "face _this";
						displayName = "Face";
						expression = "_this setface _value;";
						property = "face";
						tooltip = "Character face.";
						value = 0;
						wikiType = "[[String]]";
					};
					class NameSound
					{
						condition = "objectBrain";
						control = "NameSound";
						defaultValue = "nameSound _this";
						displayName = "Call Sign";
						expression = "_this setNamesound _value;";
						property = "NameSound";
						tooltip = "Call sign used in radio protocol (e.g., leader will order 'Kerry, fall back' instead of generic '2, fall back'). It doesn't affect character's actual name; consider changing it as well so they match together.";
						value = 0;
						wikiType = "[[String]]";
					};
					class Pitch
					{
						condition = "objectBrain";
						control = "Pitch";
						defaultValue = "pitch _this";
						displayName = "Voice Pitch";
						expression = "_this setpitch _value;";
						property = "pitch";
						tooltip = "Voice pitch. Higher number means higher voice.";
						value = 0;
						wikiType = "[[Number]]";
					};
					class Speaker
					{
						condition = "objectBrain";
						control = "Speaker";
						defaultValue = "speaker _this";
						displayName = "Voice";
						expression = "_this setspeaker _value;";
						property = "speaker";
						tooltip = "Radio voice used in group communication (e.g., target reporting).";
						value = 0;
						wikiType = "[[String]]";
					};
					class UnitInsignia
					{
						condition = "objectBrain";
						control = "UnitInsignia";
						defaultValue = "''";
						displayName = "Insignia";
						expression = "[_this,_value] call BIS_fnc_setUnitInsignia;";
						property = "unitInsignia";
						tooltip = "Left shoulder insignia. Right shoulder insignia is reserved for a squad logo and cannot be changed by the scenario.";
						value = 0;
						wikiType = "[[String]]";
					};
					class UnitName
					{
						condition = "objectBrain";
						control = "Edit";
						defaultValue = "name _this";
						displayName = "Name";
						expression = "_this setname _value;";
						isLocalized = 1;
						property = "unitName";
						tooltip = "Character name, by default automatically generated based on faction.";
						value = 0;
						wikiType = "[[String]]";
					};
				};
			};
			class Init
			{
				displayName = "Init";
				class Attributes
				{
					class Init
					{
						control = "EditCodeMulti5";
						data = "Init";
						displayName = "Init";
						tooltip = "Expression called upon at start. In multiplayer, it is called on every machine and for each player who joins in the progress. The variable 'this' refers to the affected object.";
						validate = "expression";
						value = 0;
						wikiType = "[[String]]";
					};
					class Name
					{
						control = "EditCode";
						data = "Name";
						displayName = "Variable Name";
						tooltip = "Unique system name. Can contain only letters, numbers and underscore. The name is not case sensitive, so 'someName' and 'SOMENAME' are treated as the same variables.";
						unique = 1;
						validate = "variable";
						value = 0;
						wikiType = "[[String]]";
					};
				};
			};
			class Inventory
			{
				collapsed = 1;
				displayName = "Equipment Storage";
				class Attributes
				{
					class AmmoBox
					{
						condition = "objectHasInventoryCargo";
						control = "AmmoBox";
						defaultValue = "_this call bis_fnc_initAmmoBox;";
						displayName = "Equipment Storage";
						expression = "[_this,_value] call bis_fnc_initAmmoBox;";
						property = "ammoBox";
						tooltip = "";
						value = 0;
						wikiType = "[[String]]";
					};
				};
			};
			class Presence
			{
				collapsed = 1;
				displayName = "Presence";
				class Attributes
				{
					class Presence
					{
						control = "Slider";
						data = "presence";
						displayName = "Probability of Presence";
						tooltip = "Probability of presence evaluated at the scenario start. When it fails, the object is not created at all.";
						value = 0;
						wikiType = "[[Number]]";
					};
					class PresenceCondition
					{
						control = "EditCode";
						data = "presenceCondition";
						displayName = "Condition of Presence";
						tooltip = "Condition of presence evaluated at the scenario start, must return boolean expression. When false, the object is not created at all.";
						validate = "condition";
						value = 0;
						wikiType = "[[String]]";
					};
				};
			};
			class PylonsCategory
			{
				collapsed = 1;
				displayName = "Pylons Settings";
				class Attributes
				{
					class PylonAttr
					{
						control = "PylonControlsGroup";
						data = "Pylons";
						displayName = "";
						tooltip = "";
					};
				};
			};
			class State
			{
				displayName = "States";
				class Attributes
				{
					class Ammo
					{
						control = "Slider";
						data = "ammo";
						displayName = "Ammunition";
						tooltip = "General vehicle ammo state.";
						wikiType = "[[Number]]";
					};
					class Fuel
					{
						control = "Slider";
						data = "fuel";
						displayName = "Fuel";
						tooltip = "Vehicle fuel.";
						wikiType = "[[Number]]";
					};
					class Health
					{
						control = "Slider";
						data = "Health";
						displayName = "Health / Armor";
						tooltip = "Object health / armor. When close to 0%, the object will be destroyed.";
						wikiType = "[[Number]]";
					};
					class Lock
					{
						control = "Lock";
						data = "lock";
						displayName = "Lock";
						tooltip = "Vehicle lock. When locked, characters outside of the vehicle will be unable to get in and those already inside will be forbidden from leaving.";
						wikiType = "[[Number]]";
					};
					class Rank
					{
						control = "Rank";
						data = "rank";
						displayName = "Rank";
						tooltip = "Character rank. When a group leader is killed, the subordinate with the highest rank will take over.";
						wikiType = "[[String]]";
					};
					class Skill
					{
						control = "Skill";
						data = "skill";
						displayName = "Skill";
						tooltip = "General AI skill. The attribute does not allow for decreasing it below 20%, because AI behavior would be too simplified.";
						wikiType = "[[Number]]";
					};
					class UnitPos
					{
						condition = "objectBrain";
						control = "UnitPos";
						data = "unitPos";
						displayName = "Stance";
					};
				};
			};
			class StateSpecial
			{
				collapsed = 1;
				displayName = "Special States";
				class Attributes
				{
					class AddToDynSimGrid
					{
						control = "Checkbox";
						data = "addToDynSimGrid";
						displayName = "Wake-Up Dynamic Simulation";
						tooltip = "Controls unit capability to activate dynamically simulated entities.";
						wikiType = "[[Number]]";
					};
					class AllowDamage
					{
						control = "Checkbox";
						defaultValue = "true";
						displayName = "Enable Damage";
						expression = "_this allowdamage _value;";
						property = "allowDamage";
						tooltip = "Set if the object can receive any damage. When a vehicle is invincible, its crew can still be killed.";
						wikiType = "[[Bool]]";
					};
					class DoorStates
					{
						control = "DoorStates";
						defaultValue = "[0,0,0]";
						displayName = "Doors States";
						expression = "['init',_this,_value] call bis_fnc_3DENAttributeDoorStates;";
						property = "DoorStates";
						tooltip = "Set closed, locked or opened state for object doors.";
					};
					class DynamicSimulation
					{
						control = "Checkbox";
						data = "dynamicSimulation";
						displayName = "Enable Dynamic Simulation";
						tooltip = "Entity simulation is enabled only if the player or an enemy unit is nearby.\n\nNote: Doesn't work on simple objects and it overwrites basic simulation settings.";
						wikiType = "[[Number]]";
					};
					class EnableRevive
					{
						condition = "objectControllable";
						control = "EnableRevive";
						defaultValue = "false";
						displayName = "Revive Enabled";
						expression = "if (getMissionConfigValue ['ReviveMode',0] == 2) then {_this setVariable ['#rev_enabled', _value, true]};";
						property = "EnableRevive";
						tooltip = "Enable revive for this unit.";
						wikiType = "[[Bool]]";
					};
					class EnableSimulation
					{
						control = "Checkbox";
						data = "enableSimulation";
						displayName = "Enable Simulation";
						tooltip = "When disabled, the object will freeze and ignore any input or collisions.\n\nNote: This option doesn't have any effect on dynamically simulated objects.";
						wikiType = "[[Bool]]";
					};
					class EnableStamina
					{
						condition = "objectBrain";
						control = "Checkbox";
						defaultValue = "true";
						displayName = "Enable Stamina";
						expression = "_this enablestamina _value;";
						property = "enableStamina";
						tooltip = "Set whether the character should become tired when moving or not. When disabled for player, the stamina bar will be hidden completely.";
						wikiType = "[[Bool]]";
					};
					class HideObject
					{
						control = "CheckboxReversed";
						defaultValue = "false";
						displayName = "Show Model";
						expression = "if !(is3DEN) then {_this hideobjectglobal _value;};";
						property = "hideObject";
						tooltip = "Show model and collisions. Even when disabled, the object will be simulated normally (e.g., soldiers will still be able to move and shoot).";
						wikiType = "[[Bool]]";
					};
					class SimpleObject
					{
						control = "Checkbox";
						data = "objectIsSimple";
						displayName = "Simple Object";
						tooltip = "When enabled, the object will behave like a map object (e.g. rocks or trees), which significantly saves performance. This option is available only for objects where it leads to improved performance.\n\nWarning: If set, the setting is enforced at the start of the scenario and is irreversible during its runtime!";
						wikiType = "[[Bool]]";
					};
				};
			};
			class System
			{
				collapsed = 1;
				displayName = "";
				class Attributes
				{
					class VehicleCustomization
					{
						condition = "0";
						control = "Edit";
						defaultValue = "[[],[]]";
						displayName = "";
						expression = "if (local _this) then {if (isSimpleObject _this) then {_this setVariable ['bis_fnc_initVehicle_customization',_value]} else {([_this] + _value + [true]) call (uinamespace getvariable 'bis_fnc_initVehicle');};};";
						property = "VehicleCustomization";
						tooltip = "";
						value = 0;
					};
				};
			};
			class Transformation
			{
				displayName = "Transformation";
				class Attributes
				{
					class Placement
					{
						control = "Edit";
						data = "placementRadius";
						displayName = "Placement Radius";
						tooltip = "Placement radius in meters. The entity will start at a random position within the radius.";
						validate = "number";
						wikiType = "[[Number]]";
					};
					class Position
					{
						control = "EditXYZ";
						data = "position";
						displayName = "Position";
						tooltip = "World coordinates in meters. X goes from West to East, Y from South to North and Z is height above terrain.";
						validate = "number";
						wikiType = "[[Position3D]]";
					};
					class Rotation
					{
						control = "EditXYZ";
						data = "rotation";
						displayName = "Rotation";
						tooltip = "Local rotation in degrees. X is pitch, Y is roll and Z is yaw.";
						validate = "number";
						wikiType = "[[Number]]";
					};
					class Shape
					{
						control = "ShapeTrigger";
						data = "IsRectangle";
						displayName = "Shape";
						tooltip = "Area shape.";
						wikiType = "[[Bool]]";
					};
					class Size3
					{
						control = "EditABC";
						data = "size3";
						displayName = "Size";
						tooltip = "Area size in meters.";
						validate = "number";
						wikiType = "[[Array]]";
					};
				};
			};
			class Type
			{
				collapsed = 1;
				displayName = "Type";
				class Attributes
				{
					class Type
					{
						control = "Type";
						data = "ItemClass";
						displayName = "Type";
						tooltip = "Object type. Can be changed only to another type of the same side,\ne.g., you can change BLUFOR Car to BLUFOR Helicopter, but not to OPFOR Car or a Prop.";
						wikiType = "[[String]]";
					};
				};
			};
			class VehicleSystems
			{
				collapsed = 1;
				displayName = "Electronics & Sensors";
				class Attributes
				{
					class Radar
					{
						control = "Radar";
						data = "RadarUsageAI";
						displayName = "Emission Control";
						tooltip = "Radar EMCON rules for the AI";
						wikiType = "[[String]]";
					};
					class ReceiveRemoteTargets
					{
						control = "Checkbox";
						data = "ReceiveRemoteTargets";
						displayName = "Data Link Receive";
						tooltip = "Vehicle will receive targeting and positional data from any other broadcasting vehicle on the same side.";
						wikiType = "[[Bool]]";
					};
					class ReportOwnPosition
					{
						control = "Checkbox";
						data = "ReportOwnPosition";
						displayName = "Data Link Position";
						tooltip = "Vehicle will broadcast its own position to any other unit on the same side with Data Link enabled.";
						wikiType = "[[Bool]]";
					};
					class ReportRemoteTargets
					{
						control = "Checkbox";
						data = "ReportRemoteTargets";
						displayName = "Data Link Send";
						tooltip = "Vehicle will broadcast targets tracked by its sensors to any other unit on the same side with Data Link enabled.";
						wikiType = "[[Bool]]";
					};
				};
			};
		};
		class AttributeCategoryCustom
		{
			displayName = "Object Specific - %s";
		};
		class Draw
		{
			colorPlayable[] = {0.7, 0, 0.7, 1};
			colorPlayableVehicle[] = {1, 1, 1, 0.5};
			colorPlayer[] = {0.7, 0.1, 0, 1};
			colorPlayerVehicle[] = {1, 1, 1, 0.5};
			iconCargo = "\a3\3DEN\Data\Cfg3DEN\Object\iconCargo_ca.paa";
			iconCommander = "\a3\3DEN\Data\Cfg3DEN\Object\iconCommander_ca.paa";
			iconDriver = "\a3\3DEN\Data\Cfg3DEN\Object\iconDriver_ca.paa";
			iconPlayable = "\a3\3DEN\Data\Cfg3DEN\Object\iconPlayer_ca.paa";
			iconPlayer = "\a3\3DEN\Data\Cfg3DEN\Object\iconPlayer_ca.paa";
			iconTurret = "\a3\3DEN\Data\Cfg3DEN\Object\iconTurret_ca.paa";
			class 2D
			{
				alphaHover = 1;
				alphaHoverBackground = 0;
				alphaHoverSimulation = 1;
				alphaNormal = 0.7;
				alphaNormalBackground = 0;
				alphaNormalSimulation = 0.7;
				alphaSelected = 1;
				alphaSelectedBackground = 0;
				alphaSelectedSimulation = 1;
				boundingBoxAlpha = 0.4;
				boundingBoxForceShow = 50;
				color[] = {"side"};
				colorBackground[] = {0, 0, 0, 0};
				colorPreview[] = {"side"};
				colorPreviewBackground[] = {0, 0, 0, 0.5};
				colorPreviewSimulationDisabled[] = {0.5, 0.5, 0.5, 1};
				colorPreviewSimulationDynamic[] = {0, 0.7, 0.8, 1};
				colorPreviewSimulationEnabled[] = {0, 0, 0, 0};
				colorSimple[] = {0.5, 0.5, 0.5, 1};
				colorSimplePreview[] = {0.5, 0.5, 0.5, 1};
				colorSimulationDisabled[] = {1, 0.2, 0.2, 1};
				colorSimulationDynamic[] = {0, 0.7, 0.8, 1};
				colorSimulationEnabled[] = {0, 0, 0, 0};
				presenceBorder = 2;
				shadow = 0;
				size = "24 * pixelW";
				sizeBackground = "24 * pixelW";
				sizeSimulation = "64 * pixelW";
				textureBackground = "";
				textureSimulationDisabled = "\A3\3DEN\Data\Cfg3DEN\Simulation\simulation5_ca.paa";
				textureSimulationDynamic = "\A3\3DEN\Data\Cfg3DEN\Simulation\simulation5_ca.paa";
				textureSimulationEnabled = "";
			};
			class 3D
			{
				alphaHover = 1;
				alphaHoverBackground = 0;
				alphaHoverSimulation = 1;
				alphaNormal = 0.7;
				alphaNormalBackground = 0;
				alphaNormalSimulation = 0.7;
				alphaSelected = 1;
				alphaSelectedBackground = 0;
				alphaSelectedSimulation = 1;
				boundingBoxBase = "\a3\3DEN\Objects\boundingBoxBase.p3d";
				color[] = {"side"};
				colorBackground[] = {0, 0, 0, 0};
				colorPreview[] = {"side"};
				colorPreviewBackground[] = {1, 1, 1, 0.5};
				colorPreviewSimulationDisabled[] = {0.5, 0.5, 0.5, 1};
				colorPreviewSimulationDynamic[] = {0, 0.7, 0.8, 1};
				colorPreviewSimulationEnabled[] = {0, 0, 0, 0};
				colorSimple[] = {0.5, 0.5, 0.5, 1};
				colorSimplePreview[] = {0.5, 0.5, 0.5, 1};
				colorSimulationDisabled[] = {1, 0.2, 0.2, 1};
				colorSimulationDynamic[] = {0, 0.7, 0.8, 1};
				colorSimulationEnabled[] = {0, 0, 0, 0};
				fadeDistance = 750;
				fadeDistanceCrew = 20;
				shadow = 1;
				size = "24 * pixelW";
				sizeBackground = "24 * pixelW";
				sizeSimulation = "64 * pixelW";
				textureBackground = "";
				textureSimulationDisabled = "\A3\3DEN\Data\Cfg3DEN\Simulation\simulation5_ca.paa";
				textureSimulationDynamic = "\A3\3DEN\Data\Cfg3DEN\Simulation\simulation5_ca.paa";
				textureSimulationEnabled = "";
			};
		};
		class Mode
		{
			text = "Objects";
			texture = "\a3\3DEN\Data\Displays\Display3DEN\PanelRight\modeObjects_ca.paa";
			class Submodes
			{
				class Civ
				{
					text = "Civilian";
					texture = "\a3\3DEN\Data\Displays\Display3DEN\PanelRight\side_civ_ca.paa";
				};
				class East
				{
					text = "OPFOR";
					texture = "\a3\3DEN\Data\Displays\Display3DEN\PanelRight\side_east_ca.paa";
				};
				class Empty
				{
					text = "Props";
					texture = "\a3\3DEN\Data\Displays\Display3DEN\PanelRight\side_empty_ca.paa";
				};
				class Guer
				{
					text = "Independent";
					texture = "\a3\3DEN\Data\Displays\Display3DEN\PanelRight\side_guer_ca.paa";
				};
				class West
				{
					text = "BLUFOR";
					texture = "\a3\3DEN\Data\Displays\Display3DEN\PanelRight\side_west_ca.paa";
				};
			};
		};
		class Tooltip
		{
			vehicleRoleCargo = "Passenger";
			vehicleRoleCargoVehicle = "Loaded Vehicle";
			vehicleRoleDriver = "Driver";
			vehicleRoleTurret = "Gunner";
		};
	};
	class Trigger
	{
		textPlural = "Triggers";
		textSingular = "Trigger";
		class AttributeCategories
		{
			class Activation
			{
				displayName = "Activation";
				class Attributes
				{
					class Activation
					{
						control = "TriggerActivation";
						data = "ActivationBy";
						displayName = "Activation";
						tooltip = "What or who can activate the trigger. Some options further depend on 'Activation Condition'.";
						wikiType = "[[String]]";
					};
					class ActivationOwner
					{
						control = "TriggerActivationOwner";
						data = "activationByOwner";
						displayName = "Activation";
						tooltip = "What or who can activate the trigger. Some options further depend on 'Activation Type'. The available options are specific to the connected trigger owner.";
						wikiType = "[[String]]";
					};
					class ActivationType
					{
						control = "ActivationType";
						data = "activationType";
						displayName = "Activation Type";
						tooltip = "Condition of the 'Activation' attribute.";
						wikiType = "[[String]]";
					};
					class IsServerOnly
					{
						control = "Checkbox";
						data = "isServerOnly";
						displayName = "Server Only";
						tooltip = "When enabled, the trigger will be evaluated only on server.";
						wikiType = "[[Bool]]";
					};
					class Repeat
					{
						control = "Checkbox";
						data = "repeatable";
						displayName = "Repeatable";
						tooltip = "Repetition rules. When enabled, the trigger can be activated again once deactivated.";
						wikiType = "[[Bool]]";
					};
					class Type
					{
						control = "TriggerType";
						data = "TriggerType";
						displayName = "Type";
						tooltip = "Trigger type, determines special behavior upon activation.";
						wikiType = "[[String]]";
					};
				};
			};
			class Effects
			{
				collapsed = 1;
				displayName = "Effects";
				class Attributes
				{
					class Condition
					{
						control = "Edit";
						data = "effectCondition";
						displayName = "Effect Condition";
						tooltip = "Condition for effects to be played, must return boolean expression.";
						validate = "condition";
						wikiType = "[[String]]";
					};
					class Music
					{
						control = "Music";
						data = "music";
						displayName = "Music";
						tooltip = "Music played upon activation. Replaces previously playing music track.";
						wikiType = "[[String]]";
					};
					class RscTitle
					{
						control = "RscTitle";
						data = "title";
						displayName = "UI Overlay";
						tooltip = "User interface overlay shown upon activation.";
						wikiType = "[[String]]";
					};
					class Sound
					{
						control = "Sound";
						data = "sound";
						displayName = "Sound";
						tooltip = "Sound played upon activation.";
						wikiType = "[[String]]";
					};
					class SoundEnvironment
					{
						control = "SoundEnvironment";
						data = "soundEnvironment";
						displayName = "Environment";
						tooltip = "Environment sounds played upon activation.";
						wikiType = "[[String]]";
					};
					class SoundTrigger
					{
						control = "SoundEffect";
						data = "soundTrigger";
						displayName = "SFX";
						tooltip = "Sound effect played by the trigger upon activation. Repeats as long as the trigger is active.";
						wikiType = "[[String]]";
					};
					class Voice
					{
						control = "SoundVoice";
						data = "voice";
						displayName = "Voice";
						tooltip = "Sound spoken by the first unit which activated the trigger.";
						wikiType = "[[String]]";
					};
				};
			};
			class Expression
			{
				displayName = "Expression";
				class Attributes
				{
					class Condition
					{
						control = "EditCodeMulti3";
						data = "condition";
						displayName = "Condition";
						tooltip = "Repeatedly calculated condition, must return boolean expression. When true, the trigger will be activated.\nPassed variables are:\n* this - boolean value of activation condition\n* thisList - list of all objects in trigger area, based on 'Activation'\n* thisTrigger - trigger object";
						validate = "condition";
						value = 0;
						wikiType = "[[String]]";
					};
					class OnActivation
					{
						control = "EditCodeMulti5";
						data = "onActivation";
						displayName = "On Activation";
						tooltip = "Expression executed once the trigger is activated.\nPassed variables are:\n* thisList - list of all objects in trigger area, based on 'Activation'\n* thisTrigger - trigger object";
						validate = "expression";
						value = 0;
						wikiType = "[[String]]";
					};
					class OnDeactivation
					{
						control = "EditCodeMulti3";
						data = "onDeactivation";
						displayName = "On Deactivation";
						tooltip = "Expression executed once the trigger is deactivated.\nPassed variables are:\n* thisTrigger - trigger object";
						validate = "expression";
						value = 0;
						wikiType = "[[String]]";
					};
				};
			};
			class Init
			{
				displayName = "Init";
				class Attributes
				{
					class Name
					{
						control = "EditCode";
						data = "name";
						displayName = "Variable Name";
						tooltip = "Unique system name. Can contain only letters, numbers and underscore. The name is not case sensitive, so 'someName' and 'SOMENAME' are treated as the same variables.";
						unique = 1;
						validate = "variable";
						value = 0;
						wikiType = "[[String]]";
					};
					class Text
					{
						control = "EditCode";
						data = "text";
						displayName = "Text";
						tooltip = "Trigger description. Players can see it in the radio menu when its activation is set to 'Radio'. Also visible in tooltip when hovering over the trigger in the editor.";
						value = 0;
						wikiType = "[[String]]";
					};
				};
			};
			class Timer
			{
				displayName = "Timer";
				class Attributes
				{
					class Timeout
					{
						control = "Timeout";
						data = "timeout";
						displayName = "Timer Values";
						tooltip = "Timer values in seconds, selected randomly in a range from Min to Max, gravitating towards Mid.";
						value = 0;
						wikiType = "[[Array]] in format [min, mid, max]";
					};
					class TimeoutType
					{
						control = "TimeoutType";
						data = "interuptable";
						displayName = "Timer Type";
						tooltip = "Type of activation timer.";
						value = 0;
						wikiType = "[[Bool]]";
					};
				};
			};
			class Transformation
			{
				displayName = "Transformation";
				class Attributes
				{
					class Position
					{
						control = "EditXYZ";
						data = "position";
						displayName = "Position";
						tooltip = "World coordinates in meters. X goes from West to East, Y from South to North and Z is height above terrain.";
						validate = "number";
						wikiType = "[[Position3D]]";
					};
					class Rotation
					{
						control = "EditZ";
						data = "rotation";
						displayName = "Rotation";
						tooltip = "Local rotation in degrees. X is pitch, Y is roll and Z is yaw.";
						validate = "number";
						wikiType = "[[Number]]";
					};
					class Shape
					{
						control = "ShapeTrigger";
						data = "IsRectangle";
						displayName = "Shape";
						tooltip = "Area shape.";
						wikiType = "[[Bool]]";
					};
					class Size
					{
						control = "EditAB";
						data = "size2";
						displayName = "Size";
						tooltip = "Area size in meters.";
						validate = "number";
						wikiType = "[[Array]]";
					};
					class Size3
					{
						control = "EditABC";
						data = "size3";
						displayName = "Size";
						tooltip = "Area size in meters.";
						validate = "number";
						wikiType = "[[Array]]";
					};
				};
			};
		};
		class AttributeCategoryCustom
		{
			displayName = "Trigger Specific - %s";
		};
		class Draw
		{
			class 2D
			{
				alphaHover = 1;
				alphaNormal = 0.5;
				alphaSelected = 1;
				areaBorder = 1;
				areaTexture = "\a3\3DEN\Data\Cfg3DEN\Trigger\areaTexture_ca.paa";
				color[] = {0.1, 0.1, 0.9, 1};
				colorPreview[] = {0.1, 0.1, 0.9, 1};
				size = "24 * pixelW";
			};
			class 3D
			{
				alphaHover = 1;
				alphaNormal = 0.5;
				alphaSelected = 1;
				color[] = {0.1, 0.1, 0.9, 1};
				colorPreview[] = {0.1, 0.1, 0.9, 1};
				fadeDistance = 3000;
				size = "24 * pixelW";
			};
		};
		class Mode
		{
			text = "Triggers";
			texture = "\a3\3DEN\Data\Displays\Display3DEN\PanelRight\modeTriggers_ca.paa";
			class Submodes
			{
				class Default
				{
					text = "";
					texture = "#(argb,8,8,3)color(0,0,0,0)";
				};
			};
		};
		class Tooltip
		{
			activation[] = {"NONE", "None", "WEST", "BLUFOR", "EAST", "OPFOR", "GUER", "Independent", "CIV", "Civilian", "LOGIC", "Game Logic", "ANY", "Anybody", "ANYPLAYER", "Any Player", "ALPHA", "Radio Alpha", "BRAVO", "Radio Bravo", "CHARLIE", "Radio Charlie", "DELTA", "Radio Delta", "ECHO", "Radio Echo", "FOXTROT", "Radio Foxtrot", "GOLF", "Radio Golf", "HOTEL", "Radio Hotel", "INDIA", "Radio India", "JULIET", "Radio Juliet", "WEST SEIZED", "Seized by BLUFOR", "EAST SEIZED", "Seized by OPFOR", "GUER SEIZED", "Seized by Independent", "VEHICLE", "Owner Only", "GROUP", "Whole Group", "LEADER", "Group Leader", "MEMBER", "Any Group Member"};
			activationType[] = {"PRESENT", "Present", "NOT PRESENT", "Not Present", "WEST D", "Detected by BLUFOR", "EAST D", "Detected by OPFOR", "GUER D", "Detected by Independent", "CIV D", "Detected by Civilian"};
		};
	};
	class Tutorials
	{
		class Editing
		{
			displayName = "Entity Editing";
			class Sections
			{
				class Attributes
				{
					displayName = "Entity Attributes";
					displays[] = {315};
					class Steps
					{
						class AccessContextMenu
						{
							text = "Alternatively, you can click the <%2>right mouse button<%3> on an entity and pick <%2>Attributes<%3> option from the context menu.<br />When multiple entities are selected, attributes will be modified for all of them. This is useful for batch changes, e.g., making multiple characters playable in multiplayer.";
						};
						class AccessDoubleClick
						{
							text = "Entity attributes can be tweaked in the <%2>Edit Attributes<%3> window. To open it, <%2>double-click<%3> on the entity.";
						};
						class Intro
						{
							text = "An entity is defined by its attributes. Each entity type has a different set of attributes. Object attributes, for example, can be type, position or health, while the marker is configured by size or color values.";
						};
						class Multi
						{
							text = "When multiple entities are being edited, an attribute can only be edited if its value is shared by all of them. When it is not, the attribute is disabled and the original values will not be overwritten.<br />If you wish to edit the attribute, enable it using the checkbox on its right. The modified value will be applied to all the selected entities.";
						};
						class Outro
						{
							text = "Attributes are a cornerstone of the editing process. Also, be sure to check the 'Scenario Attributes' tutorial which will explain how to configure the whole scenario, not only the single entities.";
						};
						class Save
						{
							text = "The description for each attribute is available in a tooltip when hovering over the attribute's title.<br />The modified values are only saved  after pressing <%2>OK<%3>; clicking on <%2>Cancel<%3> will discard all changes.";
						};
						class Specific
						{
							text = "Some entities, in particular modules and other systems, may have specific attributes unique only to them. They are always shown as the last category called <%2>Entity Specific - [Entity Name]<%3>.";
						};
						class Window
						{
							text = "Attributes in the <%2>Edit Attributes<%3> window are sorted into categories, each of which can be expanded and collapsed by clicking on their titles. Their state is remembered and restored after returning.";
						};
					};
				};
				class Connecting
				{
					displayName = "Connecting";
					class Steps
					{
						class Connect
						{
							text = "To connect entities together, click the <%2>right mouse button<%3> on an entity, expand the <%2>Connect...<%3> folder and pick a connection type to start the connecting operation.<br />Click the <%2>left mouse button<%3> on the desired target to connect all selected entities to the target. You can also press the <%2>right mouse button<%3> to cancel the operation.";
						};
						class Disconnect
						{
							text = "To remove an existing connection, hover over the connection line in the scene and press <%2>Delete<%3>. Alternatively, clicking into an empty space while connecting will remove any connection of the selected type.";
						};
						class Group
						{
							text = "<%10>Grouping<%3><br /><%11>Character %12 Character<%3><br />Characters grouped together become a group with a leader. Subordinates follow the leader and carry out issued orders.<br />Grouping can also be quickly accessed by <%2>holding Ctrl<%3> and dragging a line from one character to another.";
							variables[] = {"t size='1.3' font='RobotoCondensed'", "t color='#99000000'", "&#60;&#62;"};
						};
						class Intro
						{
							text = "Connecting can bind certain entities together and affect their functionality.";
						};
						class Outro
						{
							text = "This concludes the connecting tutorial.";
						};
						class RandomStart: Group
						{
							text = "<%10>Setting Random Start<%3><br /><%11>Object %12 Marker<%3><br />When the scenario starts, an object will appear randomly either on its default position, or on the position of any connected marker. Each restart will bring different results.";
						};
						class Show
						{
							text = "Connections are shown as lines both in the scene and on the map. Each connection type is represented by a different color. Unless selected, the line will be obstructed by the terrain and environmental settings.";
						};
						class Sync: Group
						{
							text = "<%10>Syncing<%3><br /><%11>Character %12 Object<%3><br />A generic connection without any inherent functionality. Often used by scripted systems. One of the connected entities has to be a character, otherwise the connection will not be recognized once the scenario starts.";
						};
						class TriggerOwner: Group
						{
							text = "<%10>Setting Trigger Owner<%3><br /><%11>Trigger %12 Character<%3><br />Trigger owner changes its activation from being side based (e.g., activated by BLUFOR) to object based (e.g., activated by the owner or its group members).";
						};
						class Types
						{
							text = "We will now take a look at the available connection types.";
						};
						class WaypointActivation: Group
						{
							text = "<%10>Setting Waypoint Activation<%3><br /><%11>Waypoint %12 Trigger<%3><br />A Waypoint will only be completed once all the connected triggers are activated. This is useful, for example, for sending reinforcements once enemy locations are cleared.";
						};
					};
				};
				class Crew
				{
					displayName = "Transforming Crew";
					class Steps
					{
						class Drag
						{
							text = "To move a character into a vehicle, <%2>drag it<%3> onto the vehicle's icon or model. If there is no space left, the character will only be moved to the vehicle's position.<br />To move the character out, drag its icon out again.";
						};
						class DragEnemy
						{
							text = "You will be notified when attempting to drag a character in an enemy vehicle. While it is possible, it can cause problems in the scenario.";
						};
						class Intro
						{
							text = "Characters can become vehicle crew members, while still being independently editable entities.";
						};
						class Outro
						{
							text = "This sums up the vehicle crew tutorial.";
						};
						class Panel
						{
							text = "When you hover over a vehicle, a panel with all the crew icons will be shown next to the vehicle's icon.<br />The additional icon is shown on the crew members which are rendered in the scene (i.e., the car driver, but not a tank driver who is hidden inside).";
						};
						class Roles
						{
							text = "The available vehicle roles are:<br />%10<%2> Driver / Pilot<%3> - controls vehicle movement<br />%11<%2> Commander<%3> - can issue orders to other crew members.<br />%12<%2> Turret<%3> - any other active crew member, such as the gunner, co-pilot, or passenger with the ability to shoot from the vehicle<br />%13<%2> Passenger<%3> - passive role, just takes a ride";
							variables[] = {"<img image='\a3\3DEN\Data\Cfg3DEN\Object\iconDriver_ca.paa' />", "<img image='\a3\3DEN\Data\Cfg3DEN\Object\iconCommander_ca.paa' />", "<img image='\a3\3DEN\Data\Cfg3DEN\Object\iconTurret_ca.paa' />", "<img image='\a3\3DEN\Data\Cfg3DEN\Object\iconCargo_ca.paa' />"};
						};
						class SeatChange
						{
							text = "You can change the seat of a crew member. Click <%2>right mouse button<%3> on the crew member, expand <%2>%10<%3> option and pick the new seat from the list.<br />If someone else is sitting on the desired seat, the crew members will swap seats.";
							variables[] = {"Change Seat"};
						};
					};
				};
				class Layers
				{
					displayName = "Layers";
					class Steps
					{
						class Attributes
						{
							expression = "['showInterface',true] call bis_fnc_3DENInterface; ['tabLeft',0] call bis_fnc_3DENInterface;";
							text = "Press the <%2>Right Mouse Button<%3> on a layer and select <%2>Attributes<%3> to open layer attributes.<br />You can rename the layer here, and configure its interaction:<br />%1<%2>Enable Transformation<%3> - when disabled, you will not be able to select layer entities in the view.<br />%1<%2>Enable Visibility<%3> - when disabled, layer entities will not be displayed in the view at all.";
							x = "safezoneX + (	60 + 1) * (pixelW * pixelGrid * 	0.50)";
						};
						class Compositions
						{
							expression = "		['showInterface',true] call bis_fnc_3DENInterface;		['tabRight',0] call bis_fnc_3DENInterface;		do3DENAction 'SelectGroupMode';		do3DENAction 'SelectSubmode5';	";
							highlight = 65;
							text = "Every time you place a Prop Composition, a new layer with its name will be automatically created, containing all composition entities.";
							x = "safezoneX + safezoneW - (	60 + 	80 + 1) * (pixelW * pixelGrid * 	0.50)";
						};
						class Create
						{
							expression = "['showInterface',true] call bis_fnc_3DENInterface; ['tabLeft',0] call bis_fnc_3DENInterface;";
							highlight = 84;
							text = "To create a custom layer, click on the <%2>New Layer<%3> button.<br />%1If you do not have any entities selected, an empty layer will be created in the root.<br />%1When some entities are selected, they will be automatically moved to the new layer.";
							x = "safezoneX + (	60 + 1) * (pixelW * pixelGrid * 	0.50)";
							y = "safezoneY + safezoneH - (		4 + 50) * (pixelH * pixelGrid * 	0.50)";
						};
						class Drag
						{
							expression = "['showInterface',true] call bis_fnc_3DENInterface; ['tabLeft',0] call bis_fnc_3DENInterface;";
							text = "Drag entities to a layer to move them inside. Highlight will indicate where the entities will end up.";
							x = "safezoneX + (	60 + 1) * (pixelW * pixelGrid * 	0.50)";
						};
						class Intro
						{
							text = "Entities can be organized into <%2>Layers<%3>. You can use them to divide your scenario into logical sections, for example, having a layer for enemy base objects, one for its garrison and another for patrols around.";
						};
						class Outro
						{
							text = "This concludes the Layers introduction tutorial.";
						};
						class Remove
						{
							expression = "['showInterface',true] call bis_fnc_3DENInterface; ['tabLeft',0] call bis_fnc_3DENInterface;";
							highlight = 86;
							text = "To remove the selected layer, press the <%2>Move to Root<%3> button. Entities inside will not be deleted, and they will end up back in the root folders.";
							x = "safezoneX + (	60 + 1) * (pixelW * pixelGrid * 	0.50)";
							y = "safezoneY + safezoneH - (		4 + 40) * (pixelH * pixelGrid * 	0.50)";
						};
						class Select
						{
							expression = "['showInterface',true] call bis_fnc_3DENInterface; ['tabLeft',0] call bis_fnc_3DENInterface;";
							text = "You can quickly select entities in the layer. Press the <%2>Right Mouse Button<%3> on a layer, expand the <%2>Select...<%3> option, and pick from one of these options:<br />%1<%2>Select Immediate Children<%3> - selects all entities directly in the layer, but not in the sub-layers.<br />%1<%2>Select All Descendants<%3> - selects all the entities in the layer and all the sub-layers.";
							x = "safezoneX + (	60 + 1) * (pixelW * pixelGrid * 	0.50)";
						};
						class Types
						{
							text = "Two types of layers exist:<br />%1%10 <%2>Root Layer<%3> - automatic layers for each entity type. Cannot be modified.<br />%1%11 <%2>Custom Layer<%3> - can contain any entity type and can be freely edited.";
							variables[] = {"<img image='\a3\3DEN\Data\Cfg3DEN\Layer\iconDefault_ca.paa' />", "<img image='\a3\3DEN\Data\Cfg3DEN\Layer\icon_ca.paa' />"};
						};
					};
				};
				class Placing
				{
					displayName = "Placing";
					class Steps
					{
						class Alt
						{
							expression = "		['showInterface',true] call bis_fnc_3DENInterface;		['tabRight',0] call bis_fnc_3DENInterface;	";
							highlight = 1049;
							text = "To place multiple entities in a row, <%2>hold Ctrl<%3> while placing an entity. It will preserve the placing operation, so you can continue adding more entities.";
							x = "safezoneX + safezoneW - (	60 + 	80 + 1) * (pixelW * pixelGrid * 	0.50)";
						};
						class Area
						{
							text = "In the map, entities with an area - triggers and markers - can be placed by drawing the area. Click <%2>Left Mouse Button<%3> to select such entity from the asset browser, and then click and hold <%2>Left Mouse Button<%3> in the map. You will start drawing the area. Release the button to confirm the placement.";
						};
						class AssetBrowser
						{
							expression = "		['showInterface',true] call bis_fnc_3DENInterface;		['tabRight',0] call bis_fnc_3DENInterface;	";
							highlight = 1039;
							text = "All available assets can be previewed in the <%2>asset browser<%3>. They are divided by type and its specific sub-type.<br />They are further sorted into categories. Assets themselves are represented by an icon.";
							x = "safezoneX + safezoneW - (	60 + 	80 + 1) * (pixelW * pixelGrid * 	0.50)";
						};
						class Click
						{
							expression = "		['showInterface',true] call bis_fnc_3DENInterface;		['tabRight',0] call bis_fnc_3DENInterface;	";
							highlight = 1049;
							text = "To place an entity, click the <%2>Left Mouse Button<%3> on its name in the asset browser, and then click the <%2>Left Mouse Button<%3> on the desired position in the view.<br />The entity will be selected afterwards and you can interact with it (e.g., give it Waypoints or delete it).";
							x = "safezoneX + safezoneW - (	60 + 	80 + 1) * (pixelW * pixelGrid * 	0.50)";
						};
						class Doubleclick
						{
							text = "You can also <%2>double-click<%3> on an empty space in the scene to add a new entity. A window where you can select entity type will be opened.";
						};
						class Drag
						{
							expression = "		['showInterface',true] call bis_fnc_3DENInterface;		['tabRight',0] call bis_fnc_3DENInterface;	";
							highlight = 1049;
							text = "Alternatively, you can place an entity by <%2>dragging<%3> it from the asset browser to the desired position in the view.";
							x = "safezoneX + safezoneW - (	60 + 	80 + 1) * (pixelW * pixelGrid * 	0.50)";
						};
						class EmptyVehicles
						{
							expression = "		['showInterface',true] call bis_fnc_3DENInterface;		['tabRight',0] call bis_fnc_3DENInterface;		do3DENAction 'SelectObjectMode';		do3DENAction 'SelectSubmode1';	";
							highlight = 1062;
							text = "By default, vehicles are placed with crew inside. Toggle between placing manned and unmanned vehicles using a switch below the asset browser.<br />You can also <%2>hold Alt<%3> while placing to inverse the functionality.";
							x = "safezoneX + safezoneW - (	60 + 	80 + 1) * (pixelW * pixelGrid * 	0.50)";
						};
						class Intro
						{
							text = "New <%2>assets<%3> can be added to the scenario by placing them. Once added, they become editable <%2>entities<%3>.";
						};
						class Outro
						{
							text = "This concludes the placing tutorial. You can learn about individual entity types from the tutorials in the <%2>Entities<%3> category.";
						};
						class Search
						{
							expression = "		['showInterface',true] call bis_fnc_3DENInterface;		['tabRight',0] call bis_fnc_3DENInterface;	";
							highlight = 82;
							text = "You can quickly search for the desired asset name. Switching between types and sub-types will not erase the search field.";
							x = "safezoneX + safezoneW - (	60 + 	80 + 1) * (pixelW * pixelGrid * 	0.50)";
							y = "safezoneY + (	5 + 	(	5 + 2) + 	(	5 + 1) + 20) * (pixelH * pixelGrid * 	0.50)";
						};
					};
				};
				class Transforming
				{
					displayName = "Transforming";
					class Steps
					{
						class Intro
						{
							text = "Entities in the scenario can be quickly manipulated using the basic transformation.";
						};
						class MoveXY
						{
							text = "To change the entity's position, simply <%2>drag it around<%3> with the <%2>Left Mouse Button<%3>.";
							variables[] = {"<img image='\a3\3DEN\Data\Displays\Display3DEN\ToolBar\vert_ATL_ca.paa' />", "<img image='\a3\3DEN\Data\Displays\Display3DEN\ToolBar\vert_ASL_ca.paa' />"};
						};
						class MoveZ
						{
							text = "To change the entity's altitude, <%2>hold Alt<%3> and drag it up and down.<br />";
						};
						class Outro
						{
							text = "This is all you need to know about the basic transformation. Check <%2>Transformation Widget<%3> tutorial to learn more about the advanced editing.";
						};
						class Rotate
						{
							text = "To rotate an entity, <%2>hold Shift<%3> and drag it. It will rotate to face the cursor.<br />";
						};
						class SurfaceSnap
						{
							expression = "		['showInterface',true] call bis_fnc_3DENInterface;	";
							highlight = 1018;
							text = "When an entity gets near any surface while its altitude is being changed, it will be snapped to it. This is useful for quick positioning on building floors or terraces. You can <%2>Toggle Surface Snap<%3> to disable this behavior when necessary.";
							x = "safezoneX + (12 * 	(	5 * (pixelW * pixelGrid * 	0.50)))";
							y = "safezoneY + (	5 + 	(	5 + 2) + 1) * (pixelH * pixelGrid * 	0.50)";
						};
						class VerticalMode
						{
							expression = "		['showInterface',true] call bis_fnc_3DENInterface;	";
							highlight = 1017;
							text = "By default, the entity's altitude above the terrain is maintained while dragging it, and it cannot be moved underground.<br /><%2>Toggle Vertical Mode<%3> to make it follow the sea surface instead, allowing it to be moved underground as well.";
							x = "safezoneX + (12 * 	(	5 * (pixelW * pixelGrid * 	0.50)))";
							y = "safezoneY + (	5 + 	(	5 + 2) + 1) * (pixelH * pixelGrid * 	0.50)";
						};
					};
				};
				class Widget
				{
					displayName = "Transformation Widget";
					class Steps
					{
						class Area: Translation
						{
							highlight = 10045;
							text = "Advanced <%2>area widget<%3> can be used for precise scaling and rotation of trigger and marker areas. The widget will always modify only one entity, even when more of them are currently selected.";
						};
						class CoordinateSystem
						{
							expression = "		['showInterface',true] call bis_fnc_3DENInterface;	";
							highlight = 1016;
							text = "You can chose the reference <%2>coordinate system<%3> the widget will use. The entity can be transformed either by world axes (X points to the East), or along its own local axes (X points to the right of the entity).";
							x = "safezoneX + (12 * 	(	5 * (pixelW * pixelGrid * 	0.50)))";
							y = "safezoneY + (	5 + 	(	5 + 2) + 1) * (pixelH * pixelGrid * 	0.50)";
						};
						class Intro
						{
							text = "<%2>Transformation widget<%3> is a tool for precise entity manipulation. It consists of a set of color-coded parts, each offering a transformation in a different axis:<br /><t color='%11' font='%10'>X</t> - West to East, or local left to right<br /><t color='%12' font='%10'>Y</t> - South to North, or local back to front<br /><t color='%13' font='%10'>Z</t> - up<br />Each of the axes can be manipulated by dragging it. The entity icon in the middle can still be used for moving the entity around.";
							variables[] = {"RobotoCondensedBold", "#c42e1a", "#94d138", "#4285eb"};
						};
						class Outro
						{
							text = "That is all for the transformation widget introduction.";
						};
						class Rotation: Translation
						{
							highlight = 10043;
							text = "The <%2>rotation widget<%3> is used for rotating an entity along each of its axes.<br />Turning some objects to the side or upside down can lead to unpredictable results once they are simulated in the preview.";
						};
						class Scaling: Translation
						{
							highlight = 10044;
							text = "Use the <%2>area scaling widget<%3> to change the size of the triggers and the area markers. This widget is only available in the local coordinate space.";
						};
						class Toggle
						{
							expression = "		['showInterface',true] call bis_fnc_3DENInterface;	";
							highlight = 1004;
							text = "The widget has several variants, between which you can toggle either using the toolbar buttons, or by the keyboard shortcut <%2>%10<%3>.";
							variables[] = {{57}};
							x = "safezoneX + (7 * 	(	5 * (pixelW * pixelGrid * 	0.50)))";
							y = "safezoneY + (	5 + 	(	5 + 2) + 1) * (pixelH * pixelGrid * 	0.50)";
						};
						class Translation
						{
							expression = "		['showInterface',true] call bis_fnc_3DENInterface;	";
							highlight = 10042;
							text = "The <%2>translation widget<%3> allows you to move an entity along each of its axes.<br />The vertical mode is ignored, but the surface snap setting is still respected when moving the entity along its Z axis.";
							x = "safezoneX + (7 * 	(	5 * (pixelW * pixelGrid * 	0.50)))";
							y = "safezoneY + (	5 + 	(	5 + 2) + 1) * (pixelH * pixelGrid * 	0.50)";
						};
					};
				};
			};
		};
		class Entities
		{
			displayName = "Entities";
			class Sections
			{
				class CustomCompositions
				{
					displayName = "Custom Compositions";
					displays[] = {317, "IDD_DISPLAY3DENSAVECOMPOSITION"};
					class Steps
					{
						class Edit
						{
							expression = "do3denaction 'SelectGroupMode'; do3denaction 'SelectSubMode6';";
							highlight = 91;
							text = "To edit composition's attributes, <%2>double-click<%3> on it or select it and click on the <%2>Edit<%3> button. It will open a window where you can change the name, author and category again.";
							x = "safezoneX + safezoneW - (	60 + 	80 + 1) * (pixelW * pixelGrid * 	0.50)";
						};
						class Intro
						{
							text = "Apart from the pre-defined groups and compositions, you can save and share your own.";
						};
						class Place
						{
							expression = "['showInterface',true] call bis_fnc_3DENInterface; ['tabRight',0] call bis_fnc_3DENInterface; do3denaction 'SelectGroupMode'; do3denaction 'SelectSubMode6';";
							highlight = 71;
							text = "Once created, you can find your compositions in <%2>Compositions > Custom<%3>. Place it as any other entity - either select it and then click in the scene on a desired position, or drag it from the list to the scene.";
							x = "safezoneX + safezoneW - (	60 + 	80 + 1) * (pixelW * pixelGrid * 	0.50)";
						};
						class PlaceATL
						{
							expression = "['showInterface',true] call bis_fnc_3DENInterface;";
							highlight = 1017;
							text = "Vertical mode defines how the composition will be placed.<br />%1<%2>Terrain Level<%3> - composition will be snapped to the surface underneath. Please note that objects which are placed on another object may no longer be positioned precisely.<br />%1<%2>Sea Level<%3> - the composition will be placed exactly as it was saved, ignoring the surface slope.";
							x = "safezoneX + (12 * 	(	5 * (pixelW * pixelGrid * 	0.50)))";
							y = "safezoneY + (	5 + 	(	5 + 2) + 1) * (pixelH * pixelGrid * 	0.50)";
						};
						class Save
						{
							text = "To save a composition, select entities in the scene, click <%2>right mouse button<%3> on one of them and pick the <%2>Save Custom Composition<%3> option.";
						};
						class SaveWindow
						{
							text = "A window will be opened where you can set name, author and category for your composition.<br /><br />In the list on the left, you can either chose to create a new composition, or overwrite one of the existing ones. This way, you can edit already created compositions.";
						};
					};
				};
				class Group
				{
					displayName = "Compositions";
					class Steps
					{
						class Create
						{
							text = "A group is created when a new character is placed. However, if the character is near another one of the same side, it will be grouped to it instead. This functionality can be disabled using <%2>Automatic Grouping<%3> attribute in the editor preferences.";
						};
						class EntityList
						{
							expression = "['showInterface',true] call bis_fnc_3DENInterface; ['tabLeft',0] call bis_fnc_3DENInterface;";
							highlight = 1037;
							text = "In the <%2>entity list<%3>, a group is shown as a folder with all its members and Waypoints placed inside.<br />Only a whole group can be moved between layers, not its individual members. Dragging one member will move the rest of the group as well.";
							x = "safezoneX + (	60 + 1) * (pixelW * pixelGrid * 	0.50)";
						};
						class Icon
						{
							text = "A group is represented by an icon hovering above the leader's position. The lone characters do not have the icon visible unless they are selected.<br />Clicking on the icon will select all the group members.<br />When zoomed out, the icons of the nearby group members are stacked together with the group icon.";
						};
						class Intro
						{
							text = "A group is a composition of characters which are linked together in a command structure.";
						};
						class Leader
						{
							text = "A group always has a leader who is able to issue orders to others. Usually, the highest ranking character is the leader, and if he dies, the second highest ranking character takes his place.<br />You can manually change it using the grouping connection. The character you connect others to will become the leader.";
						};
						class Outro
						{
							text = "Sorting character to logical groups can speed up designing your scenario, make sure to use them well.";
						};
						class Side
						{
							text = "The group side decides its relation to other groups, e.g., characters in BLUFOR groups will engage those in OPFOR groups.<br />A character inherits the group side, even when its own is different. For example, an OPFOR character grouped to the BLUFOR group will be BLUFOR as well.";
						};
					};
				};
				class Marker
				{
					displayName = "Markers";
					class Steps
					{
						class Area
						{
							text = "Markers can also be <%2>areas<%3>. Their size is set in meters and is constant in the world space. They are used for marking specific zones, such as an enemy area or border line.<br />Similarly to trigger areas, the marker area can also be edited using area scaling widget.";
						};
						class Icon
						{
							text = "A marker can be an <%2>icon<%3>. It is a single image which has a constant size on the screen when zooming the map in and out. When you set its text, it will be shown on its right side. It is used to mark points of interest, like an enemy base or an insertion point.";
						};
						class Intro
						{
							text = "A marker is an image shown on the player's map. It is visible by each player, and it is visible only on the map, not in the scene.";
						};
						class Outro
						{
							text = "Markers are a powerful tool for explaining your intentions to the player with little or no text. Do not forget to use them while designing your scenario.";
						};
					};
				};
				class Object
				{
					displayName = "Objects";
					class Steps
					{
						class Character
						{
							text = "<%2>Character<%3> is a living entity controlled either by a player, or by an <%2>AI<%3> (Artificial Intelligence; sometimes also known as NPC - Non-Playable Character).";
						};
						class Intro
						{
							text = "An object is an entity with physical representation in the world. The player can see it as a model with textures, while the game recognizes its technical properties like the simulation type, collision geometry or damage.";
						};
						class Outro
						{
							text = "An object is an entity type you will likely edit the most, so make sure to familiarize yourself with all its options.";
						};
						class Prop
						{
							text = "<%2>Prop<%3> is any other object without special functionality, for example, houses, fences or signs. Empty vehicles are not props. Animals are, mainly because they cannot be considered characters.";
						};
						class Types
						{
							text = "Objects can be divided into three main types:<br />%1 <%2>Character<%3><br />%1 <%2>Vehicle<%3><br />%1 <%2>Prop<%3>";
						};
						class Vehicle
						{
							text = "<%2>Vehicle<%3> is an object which can have a crew composed of characters. A crewed vehicle has an effective commander, who can issue orders to the rest of the crew. The vehicle also inherits the side of the commander (i.e., BLUFOR pilot will render a helicopter BLUFOR as well).";
						};
					};
				};
				class System
				{
					displayName = "Systems";
					class Steps
					{
						class Intro
						{
							text = "A system is a virtual object which can expand your scenario with a new functionality.";
						};
						class Logic
						{
							text = "A <%2>logic entity<%3> is simply a virtual object, without any inherent functionality. It is mainly used in cooperation with modules or scripts, for example, to mark positions and their relations.";
						};
						class Module
						{
							text = "A <%2>module<%3> provides complex functionality which would otherwise have to be scripted. It can usually be configured using custom attributes, and can sometimes be affected by <%2>synchronization<%3> connections. For example, many modules are activated only once all the synchronized triggers are active. To see more about the individual modules, explore their attributes.";
						};
						class Outro
						{
							text = "Be sure to investigate all the available systems, especially modules. Because each has its own rules, do not forget to also check their attributes.";
						};
						class Playable
						{
							text = "Some <%2>Virtual Entities<%3> are playable. They are used in multiplayer for abstract roles such as a spectator or headless client.";
						};
					};
				};
				class Trigger
				{
					displayName = "Triggers";
					class Steps
					{
						class Activation
						{
							text = "Once the condition is met, the trigger becomes activated. Its <%2>On Activation<%3> expression is executed, and the connected waypoints or modules may be activated as well. See their tutorials for more information.";
						};
						class Condition
						{
							text = "The activation condition can be based on the trigger area (e.g. no OFPOR present within a 500 m radius), but a scripted condition or combination of both can be applied as well.";
						};
						class Intro
						{
							text = "A trigger is a virtual entity which executes an action once a specific condition is met.";
						};
						class Outro
						{
							text = "Triggers are the primary way to design the scenario flow without use of external scripts. Find out more about their configuration in the tooltips of their attributes.";
						};
						class Repeat
						{
							text = "If the trigger is set as repeatable, it will be deactivated once the condition is not met anymore. Afterwards, the trigger can be activated again, and this can continue until the scenario ends.";
						};
						class Timer
						{
							text = "Using the <%2>Timer<%3> attribute, you can allow the trigger to be activated either after a certain period of time since the condition has been met, or while the condition is met for the specified duration.";
						};
						class TriggerOwner
						{
							text = "Use <%2>Set Trigger Owner<%3> connection to assign the trigger to a specific group. It will change the available activation options from the general ones (e.g., any BLUFOR character) to the group specific ones (e.g., any member of the group).";
						};
					};
				};
				class Waypoint
				{
					displayName = "Waypoints";
					class Steps
					{
						class Condition
						{
							text = "The waypoint is completed when requirements set by its type are met, but additional conditions can be added. A scripted condition can be set in attributes, but you can also connect the waypoint to one or more triggers using <%2>Set Waypoint Activation<%3> connection. The waypoint will be completed only once all the connected triggers are active.";
						};
						class Intro
						{
							text = "A waypoint defines the destination for a group. Waypoints are ordered sequentially, and only one can be active at the same time.";
						};
						class Outro
						{
							text = "Once a waypoint is completed, the group will move to another one. If no other follows, the group will remain where it is.<br />You can find more about the waypoint in the tooltips of their attributes.";
						};
						class QuickPlace
						{
							text = "You can use any type of waypoint from the <%2>Waypoints<%3> list in the asset browser. Alternatively, you can quickly add a MOVE waypoint by <%2>holding Shift<%3> and pressing the <%2>right mouse button<%3>. Because waypoints are added to groups, the existing character, group or any of its waypoints has to be selected in order for new waypoint to be added.";
						};
						class Snap
						{
							text = "A waypoint can also be attached to an object. Some waypoint types even require it, like DESTROY or GET IN.<br />To attach a waypoint, drag it to an object. Similarly, you can detach it by dragging it away. Moving the object around will move all the attached waypoints as well.<br />The attached waypoint is visualized by a different icon outline (<img image='%10' /> instead of <img image='%11' />).";
							variables[] = {"\a3\3DEN\Data\Cfg3DEN\Waypoint\textureBackgroundAttached_ca.paa", "\a3\3DEN\Data\Cfg3DEN\Waypoint\textureBackground_ca.paa"};
						};
						class Type
						{
							text = "Each waypoint has a specific type, which decides what the group has to do to complete the waypoint. A group led by AI character will pursue the waypoint automatically, but the player is expected to issue necessary orders when in charge of the group.";
						};
					};
				};
			};
		};
		class Intro
		{
			displayName = "Introduction";
			class Sections
			{
				class Intro
				{
					displayName = "Welcome to Eden 3D Editor";
					class Steps
					{
						class CreateList
						{
							expression = "['showInterface',true] call bis_fnc_3DENInterface; ['tabRight',0] call bis_fnc_3DENInterface;";
							highlight = 1039;
							text = "The <%2>Asset Browser<%3> contains all the entities you can place in your scenario.";
							x = "safezoneX + safezoneW - (	60 + 	80 + 1) * (pixelW * pixelGrid * 	0.50)";
						};
						class EditList
						{
							expression = "['showInterface',true] call bis_fnc_3DENInterface; ['tabLeft',0] call bis_fnc_3DENInterface;";
							highlight = 1037;
							text = "The already placed entities are listed in <%2>Entity List<%3>.";
							x = "safezoneX + (	60 + 1) * (pixelW * pixelGrid * 	0.50)";
						};
						class Intro
						{
							text = "Welcome to Eden Editor. This tutorial will explain key interface elements.";
						};
						class MenuBar
						{
							expression = "['showInterface',true] call bis_fnc_3DENInterface;";
							highlight = 120;
							text = "The <%2>Menu Bar<%3> is the central list of all available features. While some can be accessed with keyboard shortcuts or dedicated buttons, all of them are also represented in the menu bar.";
							x = "safezoneX + (	60 + 1) * (pixelW * pixelGrid * 	0.50)";
							y = "safezoneY + (		5 + 	(	5 + 2) + 1) * (pixelH * pixelGrid * 	0.50)";
						};
						class Outro
						{
							text = "This finishes the Eden Editor interface walkthrough. Clicking the <%2>Home<%3> button will take you to the main Tutorial interface.";
						};
						class Preview
						{
							expression = "['showInterface',true] call bis_fnc_3DENInterface; ['tabRight',0] call bis_fnc_3DENInterface;";
							highlight = 1023;
							text = "Once your scenario is ready for preview, click the <%2>PLAY<%3> button to run it. You can also check other preview modes in the <%2>Play<%3> menu bar section.";
							x = "safezoneX + safezoneW - (	60 + 	80 + 1) * (pixelW * pixelGrid * 	0.50)";
							y = "safezoneY + safezoneH - (		4 + 40) * (pixelH * pixelGrid * 	0.50)";
						};
						class Scene2D
						{
							expression = "['showInterface',true] call bis_fnc_3DENInterface;";
							highlight = 10303;
							text = "You can also toggle the Map (<%2>M<%3> key) and design your scenario there. You can move it by clicking and holding the <%2>Right Mouse Button<%3> or <%2>W, A, S, D<%3> keys, and zoom it by <%2>Mouse Wheel<%3>.";
						};
						class Scene3D
						{
							text = "Editing takes place in the Scene. You can look around by clicking and holding the <%2>Right Mouse Button<%3> and move using <%2>W, A, S, D<%3> keys and <%2>Mouse Wheel<%3>.";
						};
						class Toolbar
						{
							expression = "['showInterface',true] call bis_fnc_3DENInterface;";
							highlight = 1000;
							text = "The <%2>Toolbar<%3> provides quick access to commonly used tools and operations.";
							y = "safezoneY + (		5 + 	(	5 + 2) + 1) * (pixelH * pixelGrid * 	0.50)";
						};
						class Workspace
						{
							text = "The Workspace is the central part of Eden Editor. You can edit entities here, access major features and launch other tools.";
						};
					};
				};
				class OldEditor
				{
					displayName = "Switching from Old 2D Editor";
					class Steps
					{
						class AttributesGroup
						{
							text = "Group is now an editable entity with its icon shown above its leader. Selecting it will also select all of its members. You can also access its attributes when you double-click on it.<br /><br />To avoid scene cluttering, group icons are not drawn above a lone unit unless it is selected.";
						};
						class AttributesMulti
						{
							text = "Double-clicking on an entity will open its attributes. When you have multiple entities selected, you can edit their attributes together by opening the context menu (<%2>Right Mouse Button<%3>) and picking the <%2>Attributes<%3> option.";
						};
						class Composition
						{
							expression = "		['showInterface',true] call bis_fnc_3DENInterface;		['tabRight',0] call bis_fnc_3DENInterface;		do3DENAction 'SelectGroupMode';		do3DENAction 'SelectSubmode5';	";
							highlight = 65;
							text = "Groups (F2) were renamed to <%2>Compositions<%3> and apart from infantry or tank formations, you can also find composition of props there. This is perfect when you want to quickly build a camp or an outpost.";
							x = "safezoneX + safezoneW - (	60 + 	80 + 1) * (pixelW * pixelGrid * 	0.50)";
						};
						class Connecting
						{
							text = "The synchronization mode is gone. Instead, you can pick a specific connection type from the entity context menu (press <%2>Right Mouse Button<%3> on it).<br /><br />Grouping characters together can also be achieved by holding <%2>Ctrl<%3> and dragging a line from one character to another.";
						};
						class Crew
						{
							text = "You can now edit vehicle crew individually. When you hover the cursor over a vehicle, an interactive list of all crew members inside will be expanded next to the vehicle icon.<br /><br />When the vehicle has visible crew positions (e.g., soldiers sitting inside a car), you can also see icons directly on each member.";
						};
						class Discontinued
						{
							text = "The discontinued features are:<br />%1Map object interaction (e.g., attaching waypoints to map objects)<br />%1AND and OR waypoints for logics<br />%1""Special"" object attribute:<br /><%2>Flying<%3> is set by increasing altitude.<br /><%2>Formation<%3> is available in the context menu.<br /><%2>In Cargo<%3> is achieved by moving characters to vehicles directly.";
						};
						class Intro
						{
							text = "While Eden Editor is based on the good old 2D Editor, there are some major differences. Apart from the obvious addition of a 3D view, many new features were introduced or improved, while a few other, less important ones, had to be discontinued.";
						};
						class Search
						{
							expression = "['showInterface',true] call bis_fnc_3DENInterface; ['tabRight',0] call bis_fnc_3DENInterface;";
							highlight = 82;
							text = "One of the most important new additions is the ability to search in the Asset Browser. You no longer need to remember the exact categorization of a desired object, simply search for its name.";
							x = "safezoneX + safezoneW - (	60 + 	80 + 1) * (pixelW * pixelGrid * 	0.50)";
							y = "safezoneY + (	5 + 	(	5 + 2) + 	(	5 + 1)) * (pixelH * pixelGrid * 	0.50)";
						};
						class Systems
						{
							expression = "		['showInterface',true] call bis_fnc_3DENInterface;		['tabRight',0] call bis_fnc_3DENInterface;		do3DENAction 'SelectModuleMode';		do3DENAction 'SelectSubmode1';	";
							highlight = 1039;
							text = "Logics and Modules are now grouped together under systems. Their icons were tweaked to make them easily recognizable.";
							x = "safezoneX + safezoneW - (	60 + 	80 + 1) * (pixelW * pixelGrid * 	0.50)";
						};
						class Undo
						{
							highlight = 1010;
							text = "And last, but not least, you can now undo recent changes you have made.<br /><br />Please keep in mind that the history is reset every time you play the scenario or load another one.";
							x = "safezoneX + 2 * 	(	5 * (pixelW * pixelGrid * 	0.50))";
							y = "safezoneY + (		5 + 	(	5 + 2) + 1) * (pixelH * pixelGrid * 	0.50)";
						};
						class Vehicle
						{
							expression = "		profilenamespace setvariable ['bis_fnc_3DENInterface_emptyVehicles',true];		saveprofilenamespace;		['showInterface',true] call bis_fnc_3DENInterface;		['tabRight',0] call bis_fnc_3DENInterface;		['warningEmptyVehicles'] call bis_fnc_3DENInterface;		do3DENAction 'SelectObjectMode';		do3DENAction 'SelectSubmode5';	";
							text = "Empty Vehicles are no longer mixed together under <%2>Props<%3>.<br /><br />To place a vehicle without default crew, find it under its side (e.g., BLUFOR Hunter) and hold <%2>Alt<%3> while placing it.";
							x = "safezoneX + safezoneW - (	60 + 	80 + 1) * (pixelW * pixelGrid * 	0.50)";
						};
						class WaypointAttach
						{
							text = "When you place a waypoint on another object, it will be attached to it. While in 2D Editor there was no way how to detach it afterwards, you can now simply drag it away from the object. Dragging the waypoint back onto the object will attach it again.";
						};
						class WaypointPlace
						{
							text = "While placing waypoints from the Waypoints (F4) list is still possible, you can also hold <%2>Shift<%3> and press the <%2>Right Mouse Button<%3> to quickly add a Waypoint.";
						};
					};
				};
			};
		};
		class Scenario
		{
			displayName = "Scenario";
			class Sections
			{
				class Attributes
				{
					displayName = "Scenario Attributes";
					class Steps
					{
						class Environment
						{
							text = "<%2>Environment<%3> allows you to configure the date, time and weather. These settings are unique for each phase, which means you can have a night scenario and daytime intro at the same time.";
						};
						class Ext
						{
							text = "Most of the scenario attributes can be overridden externally in the <%2>Description.ext<%3> file. For more information about this advanced feature, please visit the <%10>Community Wiki<%11>.";
							variables[] = {"a href='https://community.bistudio.com/wiki/Eden_Editor:_Scenario_Attributes'", "/a"};
						};
						class GarbageCollection
						{
							text = "<%2>Performance<%3> lets you to tweak systems which can make your scenario run smoother, such as removing destroyed objects or disabling those which are far away from player.";
						};
						class General
						{
							text = "In the <%2>General<%3> section, you can set the scenario presentation such as the name or overview picture. Basic states such as the ability to save or access briefing can be configured here as well.";
						};
						class Intro
						{
							expression = "['showInterface',true] call bis_fnc_3DENInterface;";
							highlight = 120;
							text = "The same as entities, the scenario also has configurable attributes. They can be accessed through the <%2>Attributes<%3> option in the menu bar. This tutorial will guide you through all the available sections.";
						};
						class Multiplayer
						{
							text = "<%2>Multiplayer<%3> section collects all the options like the game mode, lobby options and most importantly, respawn. All the settings in this section are ignored in the singleplayer.";
						};
						class Outro
						{
							text = "As with entity attributes, make sure to explore what each attribute does by hovering the cursor over its title, which will show the tooltip with information.";
						};
					};
				};
				class Phases
				{
					displayName = "Phases";
					class Steps
					{
						class Intro
						{
							expression = "		['showInterface',true] call bis_fnc_3DENInterface;	";
							highlight = 10306;
							text = "The scenario is divided into four phases. Each has its own set of entities and environmental settings (e.g. a night scenario with a player in a tank can have an infantry only intro set during the day).";
							x = "safezoneX + (21.5 * 	(	5 * (pixelW * pixelGrid * 	0.50)))";
							y = "safezoneY + (	5 + 	(	5 + 2) + 1) * (pixelH * pixelGrid * 	0.50)";
						};
						class Outro
						{
							text = "This concludes the tutorial about scenario phases.";
						};
						class PhaseIntro
						{
							text = "In singleplayer, <%2>Intro<%3> is automatically played before the scenario starts (even before briefing). It is primarily used for cutscenes, and it can be skipped using the button in the pause menu.";
						};
						class PhaseOutro
						{
							text = "<%2>Outro - Win<%3> and <%2>Outro - Lose<%3> phases are similar to the Intro, but are played after the scenario ends. 'The Win' part is selected when the scenario ends successfully, otherwise the 'Lose' part is chosen.";
						};
						class PhaseScenario
						{
							text = "<%2>Scenario<%3> is the core part. It is the only phase available in multiplayer, and the only one where player has control over his character.";
						};
						class Sequence
						{
							text = "The sequence of phases is:<br />1. Intro<br />2. Scenario<br />3. Outro Win or Outro Lose";
						};
					};
				};
				class Preview
				{
					displayName = "Preview";
					class Steps
					{
						class Intro
						{
							text = "When designing a scenario, it is important to periodically preview it from the player's point of view. This will give you a better picture about what the scenario looks like, how difficult it is and if it is actually fun.";
						};
						class Outro
						{
							text = "That is all for the preview tutorial. Make sure to preview your scenario often.";
						};
						class PreviewAsCharacter
						{
							text = "Context menu available after clicking the <%2>right mouse button<%3> in the scene offers additional debugging preview options.<br />%1When clicked on an empty space, <%2>Play from Here<%3> will start the singleplayer preview and move the player on the selected position.<br />%1When clicked on a character, <%2>Play as the Character<%3> will also trigger the singleplayer preview, but allow the player to control the selected entity instead of his default one.";
						};
						class PreviewCamera
						{
							text = "<%2>Play In SP at Camera Position<%3> is a debugging option which will start the preview in singleplayer, but teleport the player to the position of the editor camera. If the player is not in a flying vehicle (i.e., a plane or helicopter), the position on the ground below the camera will be picked instead.";
						};
						class PreviewMP
						{
							text = "<%2>Play In Multiplayer<%3> allows you to try the scenario on the hosted server, and the other players will be able to join you. If no server exists as yet, you will be prompted to host one before continuing.<br />After the first use, the <%2>%10<%3> key will be assigned to the multiplayer preview instead.";
							variables[] = {{28}};
						};
						class PreviewMP2
						{
							text = "When you return to the editor from the multiplayer preview, the server will keep running and already connected players will not be kicked out. However, running a singleplayer preview afterwards will terminate the server.";
							variables[] = {{28}};
						};
						class PreviewSP
						{
							text = "The most basic type of preview is <%2>Play In Singleplayer<%3>. It starts the scenario from the beginning, starting where the player is placed in the editor. By default, this preview starts after pressing <%2>%10<%3>.";
							variables[] = {{28}};
						};
						class PreviewSPBriefing
						{
							text = "<%2>Play In SP with Briefing<%3> is a variant of singleplayer preview which will show the briefing before the scenario starts, the same as when you start a scenario from the main menu. Please note that the briefing will not appear when you restart the preview from the pause menu.";
						};
						class PreviewSpectator
						{
							text = "<%2>Spectate in SP<%3> is a debugging option which will start the scenario in the spectator mode at the position of the editor camera.<br />During the scenario, you can exit the spectator by clicking the <%2>SPECTATOR<%3> button in the pause menu debug console.";
						};
						class Return
						{
							text = "When you return from the preview, the scenario will be in the same state in which you started it. Anything that happened during the preview (e.g. you moving or killing enemies) is reverted.";
						};
					};
				};
				class Publishing
				{
					displayName = "Publishing";
					class Steps
					{
						class Export
						{
							expression = "['showInterface',true] call bis_fnc_3DENInterface;";
							highlight = 120;
							text = "You can also export the scenario into packed <%2>*.pbo<%3> format. Expand <%2>Scenario > Export<%3> and pick either <%2>Export to Singleplayer<%3> or <%2>Export to Multiplayer<%3>. The scenario with all files and folders inside will be packed into a *.pbo file. You can find it in the game's root folder in the folders named Missions and MPMissions respectively.<br />If anyone else places the file in the same folders, he will be able to play the scenario from the main menu.";
						};
						class Intro
						{
							text = "Once you have finished creating your scenario, there are several options for sharing it with others.";
						};
						class Outro
						{
							text = "There are also some more advanced ways to export a scenario, check them out on the <%10>Community Wiki<%11>.";
							variables[] = {"a href='https://community.bistudio.com/wiki/Eden_Editor:_Publishing'", "/a"};
						};
						class SteamWorkshop
						{
							expression = "['showInterface',true] call bis_fnc_3DENInterface;";
							highlight = 120;
							text = "To share the scenario online directly, expand <%2>Scenario<%3> option in the menu bar and pick the <%2>Publish to Steam Workshop<%3> option. A window with upload settings will appear. Make sure to add either <%2>Singleplayer<%3> or <%2>Multiplayer<%3> tag, it is important for filtering.<br />After agreeing with the Workshop license, you are free to publish the scenario and share the link with others.";
						};
					};
				};
			};
		};
	};
	class Updates
	{
		path = "\a3\3DEN\Updates\";
		class DEV1
		{
			date[] = {2015, 9, 22};
		};
		class DEV2
		{
			date[] = {2015, 9, 29};
		};
		class DEV3
		{
			date[] = {2015, 10, 6};
		};
		class DEV4
		{
			date[] = {2015, 10, 21};
		};
		class DEV5
		{
			date[] = {2015, 11, 12};
		};
		class DEV6
		{
			date[] = {2015, 11, 30};
		};
	};
	class Waypoint
	{
		textPlural = "Waypoints";
		textSingular = "Waypoint";
		class AttributeCategories
		{
			class Effects
			{
				collapsed = 1;
				displayName = "Effects";
				class Attributes
				{
					class Condition
					{
						control = "Edit";
						data = "effectCondition";
						displayName = "Effect Condition";
						tooltip = "Condition for effects to be played, must return boolean expression.";
						validate = "condition";
						wikiType = "[[String]]";
					};
					class Music
					{
						control = "Music";
						data = "music";
						displayName = "Music";
						tooltip = "Music played upon activation. Replaces previously playing music track.";
						wikiType = "[[String]]";
					};
					class RscTitle
					{
						control = "RscTitle";
						data = "title";
						displayName = "UI Overlay";
						tooltip = "User interface overlay shown upon activation.";
						wikiType = "[[String]]";
					};
					class Sound
					{
						control = "Sound";
						data = "sound";
						displayName = "Sound";
						tooltip = "Sound played upon activation.";
						wikiType = "[[String]]";
					};
					class SoundEnvironment
					{
						control = "SoundEnvironment";
						data = "soundEnvironment";
						displayName = "Environment";
						tooltip = "Environment sounds played upon activation.";
						wikiType = "[[String]]";
					};
					class Voice
					{
						control = "SoundVoice";
						data = "voice";
						displayName = "Voice";
						tooltip = "Sound spoken by the first unit which activated the trigger.";
						wikiType = "[[String]]";
					};
				};
			};
			class Expression
			{
				displayName = "Expression";
				class Attributes
				{
					class Condition
					{
						control = "EditCodeMulti3";
						data = "condition";
						displayName = "Condition";
						tooltip = "Repeatedly calculated condition, must return boolean expression. When the waypoint type conditions are met and this expression returns true, the waypoint is completed.\nPassed variables are:\n* this - group leader\n* thisList - array with all group members";
						validate = "condition";
						value = 0;
						wikiType = "[[String]]";
					};
					class OnActivation
					{
						control = "EditCodeMulti5";
						data = "onActivation";
						displayName = "On Activation";
						tooltip = "Expression called when the waypoint is completed.\nPassed variables are:\n* this - group leader\n* thisList - array with all group members";
						validate = "expression";
						value = 0;
						wikiType = "[[String]]";
					};
					class Script
					{
						control = "EditCode";
						data = "script";
						displayName = "Script";
						tooltip = "Script executed when 'SCRIPTED' waypoint type is selected. The waypoint will be completed once the script is finished.";
						value = 0;
						wikiType = "[[String]]";
					};
				};
			};
			class Init
			{
				displayName = "Init";
				class Attributes
				{
					class Description
					{
						control = "Edit";
						data = "description";
						displayName = "Description";
						isLocalized = 1;
						tooltip = "Text visible for the player next to the waypoint icon in the scene.";
						value = 0;
						wikiType = "[[String]]";
					};
					class Name
					{
						control = "Edit";
						data = "name";
						displayName = "Identified";
						tooltip = "System name of the waypoint, used for identification in scripts.";
						unique = 1;
						value = 0;
						wikiType = "[[String]]";
					};
					class Order
					{
						control = "Combo";
						data = "order";
						displayName = "Order";
						tooltip = "Order in which waypoints follow. When changing order, the waypoint will take position of the selected one, pushing all other further down.";
					};
				};
			};
			class State
			{
				displayName = "State";
				class Attributes
				{
					class Behaviour
					{
						control = "BehaviourWaypoint";
						data = "behaviour";
						displayName = "Behavior";
						tooltip = "Behavior pattern of the group.";
						wikiType = "[[String]]";
					};
					class CombatMode
					{
						control = "CombatModeWaypoint";
						data = "combatMode";
						displayName = "Combat Mode";
						tooltip = "Controls how and when the group will choose to engage enemy targets.";
						wikiType = "[[String]]";
					};
					class Formation
					{
						control = "FormationWaypoint";
						data = "formation";
						displayName = "Formation";
						tooltip = "Default group formation. Based on the combat mode, group members may ignore the formation in 'Combat' and 'Stealth' modes.";
						wikiType = "[[String]]";
					};
					class SpeedMode
					{
						control = "SpeedModeWaypoint";
						data = "speedMode";
						displayName = "SpeedMode";
						tooltip = "Default travel speed of the group. In Combat and Stealth behavior modes, group members will try to prioritize this setting.";
						wikiType = "[[String]]";
					};
				};
			};
			class Timer
			{
				displayName = "Timer";
				class Attributes
				{
					class Timeout
					{
						control = "Timeout";
						data = "timeout";
						displayName = "Timer Values";
						tooltip = "Time in seconds passed between when the waypoint would be considered complete and when it actually completes. Selected randomly in a range from Min to Max, gravitating towards Mid.";
						value = 0;
						wikiType = "[[Array]] in format [min, mid, max]";
					};
				};
			};
			class Transformation
			{
				collapsed = 1;
				displayName = "Transformation";
				class Attributes
				{
					class CompletionRadius
					{
						control = "EditShort";
						data = "completionRadius";
						displayName = "Completion Radius";
						tooltip = "Distance in meters in which a group member has to be in order for the waypoint to be considered completed.";
						validate = "number";
						wikiType = "[[Number]]";
					};
					class PlacementRadius
					{
						control = "EditShort";
						data = "placementRadius";
						displayName = "Placement Radius";
						tooltip = "Placement radius in meters. The entity will start at a random position within the radius.";
						validate = "number";
						wikiType = "[[Number]]";
					};
					class Position
					{
						control = "EditXYZ";
						data = "position";
						displayName = "Position";
						tooltip = "World coordinates in meters. X goes from West to East, Y from South to North and Z is height above terrain.";
						validate = "number";
						wikiType = "[[Position3D]]";
					};
				};
			};
			class Type
			{
				displayName = "Type";
				class Attributes
				{
					class Type
					{
						control = "Type";
						data = "itemClass";
						displayName = "Type";
						tooltip = "Waypoint type defines what the group will do when the waypoint becomes active, and the condition when it becomes completed. Applies mainly to AI-led groups, as players will not be prompted to perform any specific actions, even though the waypoint completion condition is the same.\nSome waypoints have special attributes, which are only available the next time you access the attribute window.";
						wikiType = "[[String]]";
					};
				};
			};
			class Visibility
			{
				displayName = "Visibility";
				class Attributes
				{
					class Show2D
					{
						control = "Checkbox";
						data = "show2D";
						displayName = "Map Visibility";
						tooltip = "Make the waypoint visible for the player on the map.";
						value = 0;
						wikiType = "[[Bool]]";
					};
					class Show3D
					{
						control = "Checkbox";
						data = "show3D";
						displayName = "Scene Visibility";
						tooltip = "Make the waypoint visible for the player in the scene.";
						value = 0;
						wikiType = "[[Bool]]";
					};
				};
			};
		};
		class AttributeCategoryCustom
		{
			displayName = "Waypoint Specific - %s";
		};
		class Draw
		{
			class 2D
			{
				alphaHover = 1;
				alphaHoverBackground = 1;
				alphaNormal = 0.5;
				alphaNormalBackground = 0.7;
				alphaSelected = 1;
				alphaSelectedBackground = 1;
				color[] = {0, 0, 0};
				colorBackground[] = {1, 1, 1};
				colorPreview[] = {0, 0, 0};
				colorPreviewBackground[] = {1, 1, 1};
				completionRadiusBorder = 1;
				placementBorder = 2;
				size = "16 * pixelW";
				sizeBackground = "20 * pixelW";
				textureBackground = "\a3\3DEN\Data\Cfg3DEN\Waypoint\textureBackground_ca.paa";
				textureBackgroundAttached = "\a3\3DEN\Data\Cfg3DEN\Waypoint\textureBackgroundAttached_ca.paa";
			};
			class 3D
			{
				alphaHover = 1;
				alphaHoverBackground = 1;
				alphaNormal = 0.5;
				alphaNormalBackground = 0.7;
				alphaSelected = 1;
				alphaSelectedBackground = 1;
				color[] = {0, 0, 0};
				colorBackground[] = {1, 1, 1};
				colorPreview[] = {0, 0, 0};
				colorPreviewBackground[] = {1, 1, 1};
				fadeDistance = 750;
				size = "16 * pixelW";
				sizeBackground = "20 * pixelW";
				textureBackground = "\a3\3DEN\Data\Cfg3DEN\Waypoint\textureBackground_ca.paa";
				textureBackgroundAttached = "\a3\3DEN\Data\Cfg3DEN\Waypoint\textureBackgroundAttached_ca.paa";
			};
		};
		class Mode
		{
			text = "Waypoints";
			texture = "\a3\3DEN\Data\Displays\Display3DEN\modeWaypoints_ca.paa";
			class Submodes
			{
				class Default
				{
					text = "";
					texture = "#(argb,8,8,3)color(0,0,0,0)";
				};
			};
		};
	};
};
