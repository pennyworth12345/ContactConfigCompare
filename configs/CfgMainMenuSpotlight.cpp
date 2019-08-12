class CfgMainMenuSpotlight
{
	class ApexProtocol
	{
		action = "(finddisplay 0) createMPCampaignDisplay 'Apex';";
		actionText = "Play";
		condition = "(395180 in getDLCs 1) && (getstatvalue 'BCFirstDeployment' == 1)";
		picture = "\a3\Ui_f\data\GUI\Rsc\RscDisplayMain\spotlight_1_apex_ca.paa";
		text = "Apex Protocol";
		textIsQuote = 1;
		video = "\a3\Ui_f\Video\spotlight_1_Apex.ogv";
	};
	class Bootcamp
	{
		action = "ctrlactivate ((ctrlparent (_this select 0)) displayctrl 149);";
		actionText = "Play";
		condition = "(getstatvalue 'BCFirstDeployment' == 0) || !isClass (configfile >> 'CfgPatches' >> 'A3_Missions_F_EPA')";
		picture = "\a3\Ui_f\data\GUI\Rsc\RscDisplayMain\spotlight_1_bootcamp_ca.paa";
		text = "Prologue";
		textIsQuote = 1;
		video = "\a3\Ui_f\Video\spotlight_1_Bootcamp.ogv";
	};
	class Contact_Campaign
	{
		action = "uiNamespace setVariable ['RscDisplayCampaignLoad_filter', 'ContactDummy']; ctrlActivate ((ctrlParent (_this select 0)) displayCtrl 101);";
		actionText = "Play";
		condition = "(1021790 in (getDLCs 1)) && ((configName (configFile >> 'CfgPatches' >> 'A3_Missions_F_Enoch')) != '')";
		picture = "\a3\UI_F_Enoch\Data\Displays\RscDisplayMain\spotlight_A_CO.paa";
		text = "First Contact";
		textIsQuote = 1;
		video = "\A3\UI_F_Enoch\Video\spotlight_A.ogv";
	};
	class EastWind
	{
		action = "ctrlactivate ((ctrlparent (_this select 0)) displayctrl 101);";
		actionText = "Play";
		condition = "isClass (configfile >> 'CfgPatches' >> 'A3_Missions_F_EPA') && !(395180 in getDLCs 1) && (getstatvalue 'BCFirstDeployment' == 1)";
		picture = "\a3\Ui_f\data\GUI\Rsc\RscDisplayMain\spotlight_1_eastwind_ca.paa";
		text = "The East Wind";
		textIsQuote = 1;
		video = "\a3\Ui_f\Video\spotlight_1_EastWind.ogv";
	};
	class Orange_Campaign
	{
		action = "uiNamespace setVariable ['RscDisplayCampaignLoad_filter', 'Orange']; ctrlActivate ((ctrlParent (_this select 0)) displayCtrl 101);";
		actionText = "Play";
		condition = "(language != 'German') && (571710 in (getDLCs 1))";
		picture = "\a3\UI_F_Orange\Data\Displays\RscDisplayMain\spotlight_A_CO.paa";
		text = "Remnants of War";
		textIsQuote = 1;
		video = "\a3\UI_f_Orange\Video\spotlight_A.ogv";
	};
	class Orange_CampaignGerman: Orange_Campaign
	{
		condition = "(language == 'German') && (571710 in (getDLCs 1))";
		disableUpperCase = 1;
		text = "KAMPFMITTEL-<br />RÜCKSTÄNDE";
	};
	class Orange_Showcase_IDAP
	{
		action = "ctrlActivate ((ctrlParent (_this select 0)) displayCtrl 150); ((findDisplay 2) displayCtrl 101) tvSetCurSel [23];";
		actionText = "Play";
		condition = "!iskeyactive 'BIS_Faction_IDAP.Altis_done'";
		disableUpperCase = 1;
		picture = "\a3\UI_F_Orange\Data\Displays\RscDisplayMain\spotlight_B_CO.paa";
		text = "SHOWCASE<br />IDAP";
		textIsQuote = 0;
		video = "\a3\UI_f_Orange\Video\spotlight_B.ogv";
	};
	class Orange_Showcase_LoW
	{
		action = "ctrlactivate ((ctrlparent (_this select 0)) displayctrl 150); ((findDisplay 2) displayCtrl 101) tvSetCurSel [24];";
		actionText = "Play";
		condition = "!iskeyactive 'BIS_Showcase_LawsOfWar.VR_done'";
		disableUpperCase = 1;
		picture = "\a3\UI_F_Orange\Data\Displays\RscDisplayMain\spotlight_C_CO.paa";
		text = "SHOWCASE<br />LAWS OF WAR";
		textIsQuote = 0;
		video = "\a3\UI_f_Orange\Video\spotlight_C.ogv";
	};
	class Showcase_TankDestroyers: Tanks_Campaign_01
	{
		action = "ctrlActivate ((ctrlParent (_this select 0)) displayCtrl 150); ((findDisplay 2) displayCtrl 101) tvSetCurSel [25];";
		condition = "(798390 in (getDLCs 1)) && (!iskeyactive 'BIS_showcase_TankDestroyers.Atlis_done')";
		picture = "\a3\UI_F_Tank\Data\Displays\RscDisplayMain\spotlight_B_CO.paa";
		text = "Showcase Tank Destroyers";
		textIsQuote = 0;
		video = "\a3\UI_f_Tank\Video\spotlight_B.ogv";
	};
	class Tacops_Campaign_01
	{
		action = "uiNamespace setVariable ['RscDisplayCampaignLoad_filter', 'TO_1']; ctrlActivate ((ctrlParent (_this select 0)) displayCtrl 101);";
		actionText = "Play";
		condition = "(744950 in (getDLCs 1)) && (!iskeyactive 'BIS_TO_1_to_c01m01_Infantry' && !iskeyactive 'BIS_TO_1_to_c01m02_Infantry' && !iskeyactive 'BIS_TO_1_to_c01m02_MechInf' && !iskeyactive 'BIS_TO_1_to_c01m02_Sniper')";
		disableUpperCase = 0;
		picture = "\a3\UI_F_Tacops\Data\Displays\RscDisplayMain\spotlight_A_CO.paa";
		text = "Beyond Hope";
		textIsQuote = 1;
		video = "\a3\UI_f_Tacops\Video\spotlight_A.ogv";
	};
	class Tacops_Campaign_02: Tacops_Campaign_01
	{
		action = "uiNamespace setVariable ['RscDisplayCampaignLoad_filter', 'TO_2']; ctrlActivate ((ctrlParent (_this select 0)) displayCtrl 101);";
		condition = "(744950 in (getDLCs 1)) && (!iskeyactive 'BIS_TO_2_to_c02m01_Infantry' && !iskeyactive 'BIS_TO_2_to_c02m01_SF' && !iskeyactive 'BIS_TO_2_to_c02m02_Infantry' && !iskeyactive 'BIS_TO_2_to_c02m02_SF')";
		picture = "\a3\UI_F_Tacops\Data\Displays\RscDisplayMain\spotlight_B_CO.paa";
		text = "Stepping Stone";
		video = "\a3\UI_f_Tacops\Video\spotlight_B.ogv";
	};
	class Tacops_Campaign_03: Tacops_Campaign_01
	{
		action = "uiNamespace setVariable ['RscDisplayCampaignLoad_filter', 'TO_3']; ctrlActivate ((ctrlParent (_this select 0)) displayCtrl 101);";
		condition = "(744950 in (getDLCs 1)) && (!iskeyactive 'BIS_TO_3_to_c03m01_Infantry' && !iskeyactive 'BIS_TO_3_to_c03m02_Infantry' && !iskeyactive 'BIS_TO_3_to_c03m03_Infantry')";
		picture = "\a3\UI_F_Tacops\Data\Displays\RscDisplayMain\spotlight_C_CO.paa";
		text = "Steel Pegasus";
		video = "\a3\UI_f_Tacops\Video\spotlight_C.ogv";
	};
	class Tanks_Campaign_01
	{
		action = "uiNamespace setVariable ['RscDisplayCampaignLoad_filter', 'TankCampaign']; ctrlActivate ((ctrlParent (_this select 0)) displayCtrl 101);";
		actionText = "Play";
		condition = "(798390 in (getDLCs 1)) && (!iskeyactive 'BIS_Tank_c01m01.Atlis_done' && !iskeyactive 'BIS_Tank_c01m02.Atlis_done' && !iskeyactive 'BIS_Tank_c01m03.Atlis_done')";
		disableUpperCase = 0;
		picture = "\a3\UI_F_Tank\Data\Displays\RscDisplayMain\spotlight_A_CO.paa";
		text = "Altis Requiem";
		textIsQuote = 1;
		video = "\a3\UI_f_Tank\Video\spotlight_A.ogv";
	};
};
