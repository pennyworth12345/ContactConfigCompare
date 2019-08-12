class CfgLeaflets
{
	scriptCiv = "\a3\Functions_F_Orange\Scripts\leafletCiv.sqf";
	scriptCustom_01 = "\a3\Functions_F_Orange\Scripts\leafletCustom_01.sqf";
	scriptCustom_02 = "\a3\Functions_F_Orange\Scripts\leafletCustom_02.sqf";
	scriptCustom_03 = "\a3\Functions_F_Orange\Scripts\leafletCustom_03.sqf";
	scriptCustom_04 = "\a3\Functions_F_Orange\Scripts\leafletCustom_04.sqf";
	scriptCustom_05 = "\a3\Functions_F_Orange\Scripts\leafletCustom_05.sqf";
	scriptCustom_06 = "\a3\Functions_F_Orange\Scripts\leafletCustom_06.sqf";
	scriptCustom_07 = "\a3\Functions_F_Orange\Scripts\leafletCustom_07.sqf";
	scriptCustom_08 = "\a3\Functions_F_Orange\Scripts\leafletCustom_08.sqf";
	scriptCustom_09 = "\a3\Functions_F_Orange\Scripts\leafletCustom_09.sqf";
	scriptCustom_10 = "\a3\Functions_F_Orange\Scripts\leafletCustom_10.sqf";
	scriptEast = "\a3\Functions_F_Orange\Scripts\leafletEast.sqf";
	scriptGuer = "\a3\Functions_F_Orange\Scripts\leafletGuer.sqf";
	scriptWest = "\a3\Functions_F_Orange\Scripts\leafletWest.sqf";
	class Civ
	{
		model = "\a3\Weapons_F_Orange\Ammo\leaflet_05_civ_f.p3d";
		text = "Civilians, YOU ARE NOT SAFE HERE!<br /><br />Military operations are putting you<br />in DANGER: EVACUATE and AVOID<br />areas occupied by ARMED FORCES!";
		texture = "\a3\UI_F_Orange\Data\CfgLeaflets\civ_ca.paa";
	};
	class Custom_01: Default {};
	class Custom_02: Default {};
	class Custom_03: Default {};
	class Custom_04: Default {};
	class Custom_05: Default {};
	class Custom_06: Default {};
	class Custom_07: Default {};
	class Custom_08: Default {};
	class Custom_09: Default {};
	class Custom_10: Default {};
	class Default
	{
		text = "";
		texture = "#(argb,8,8,3)color(1,1,1,1)";
	};
	class East
	{
		model = "\a3\Weapons_F_Orange\Ammo\leaflet_05_east_f.p3d";
		text = "Civilians, YOU ARE NOT SAFE HERE!<br /><br />Military operations are putting you<br />in DANGER: EVACUATE and AVOID<br />areas occupied by ARMED FORCES!";
		texture = "\a3\UI_F_Orange\Data\CfgLeaflets\east_ca.paa";
	};
	class Guer
	{
		model = "\a3\Weapons_F_Orange\Ammo\leaflet_05_guer_f.p3d";
		text = "Civilians, YOU ARE NOT SAFE HERE!<br /><br />Military operations are putting you<br />in DANGER: EVACUATE and AVOID<br />areas occupied by ARMED FORCES!";
		texture = "\a3\UI_F_Orange\Data\CfgLeaflets\guer_ca.paa";
	};
	class West
	{
		model = "\a3\Weapons_F_Orange\Ammo\leaflet_05_west_f.p3d";
		text = "Civilians, YOU ARE NOT SAFE HERE!<br /><br />Military operations are putting you<br />in DANGER: EVACUATE and AVOID<br />areas occupied by ARMED FORCES!";
		texture = "\a3\UI_F_Orange\Data\CfgLeaflets\west_ca.paa";
	};
};
