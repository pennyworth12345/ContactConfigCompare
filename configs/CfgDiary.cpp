class CfgDiary
{
	class Debriefing
	{
		colorCanceled[] = {1, 1, 1, 1};
		colorCreated[] = {1, 1, 1, 0.35};
		colorDone[] = {1, 1, 1, 1};
		colorFailed[] = {1, 1, 1, 1};
		taskcanceled = "a3\ui_f\data\map\diary\icons\taskcanceled_ca.paa";
		taskcreated = "a3\ui_f\data\map\diary\icons\taskcreated_ca.paa";
		taskfailed = "a3\ui_f\data\map\diary\icons\taskfailed_ca.paa";
		tasknone = "a3\ui_f\data\map\diary\icons\tasknone_ca.paa";
		tasksucceeded = "a3\ui_f\data\map\diary\icons\tasksucceeded_ca.paa";
	};
	class FixedPages
	{
		class Diary
		{
			displayName = "Briefing";
			indexIcon = "";
			indexTitle = "%TITLE";
			picture = "#(argb,8,8,3)color(1,1,1,1)";
			recordTitle = " %TITLE";
			shortcuts[] = {49};
			showEmpty = 0;
			text = "<font color='#99ffffff' face='PuristaLight'>%DATE, %TIME</font><br /><br />%TEXT";
			type = "DiaryPageDiary";
		};
		class Players
		{
			displayName = "Players";
			indexIcon = "%ICON_PLAYERS_STATE";
			indexTitle = "%PLAYER_NAME";
			picture = "#(argb,8,8,3)color(1,1,1,1)";
			recordTitle = " %PLAYER_NAME";
			shortcuts[] = {};
			showEmpty = 0;
			squad = "<img image='#(argb,8,8,3)color(1,1,1,0.1)' height='1' width='640' /><br /><font size='18'>%SQUAD_TITLE</font><br/><font color='#99ffffff' face='PuristaLight'>%$STR_DISP_MP_SQ_NAME</font> <h1>%SQUAD_NAME</h1><br/><font color='#99ffffff' face='PuristaLight'>%$STR_DISP_MP_SQ_WEB</font> %SQUAD_WEB<br/><font color='#99ffffff' face='PuristaLight'>%$STR_DISP_MP_SQ_MAIL</font> %SQUAD_EMAIL<br/><br/><img width='80' height='80' image='%SQUAD_PICTURE' />";
			text = "<br/><font color='#99ffffff' face='PuristaLight'>%$STR_DISP_MP_PING</font> %PLAYER_PING_MIN %PLAYER_PING_AVG %PLAYER_PING_MAX<br/><font color='#99ffffff' face='PuristaLight'>%$STR_DISP_MP_BANDWIDTH</font> %PLAYER_BANDWIDTH_MIN %PLAYER_BANDWIDTH_AVG %PLAYER_BANDWIDTH_MAX<br/><font color='#99ffffff' face='PuristaLight'>%$STR_DISP_MP_DESYNC</font> %PLAYER_DESYNC<br/>%LINK_PLAYER_MUTE%LINK_PLAYER_KICK%LINK_PLAYER_BAN%LINK_PLAYER_VOTEKICK%LINK_PLAYER_VOTEADMIN";
			textSquad = "<font color='#99ffffff' face='PuristaLight'>%$STR_DISP_MP_PL_NAME</font> %PLAYER_FULLNAME<br/><font color='#99ffffff' face='PuristaLight'>%$STR_DISP_MP_PL_MAIL</font> %PLAYER_EMAIL<br/><font color='#99ffffff' face='PuristaLight'>%$STR_DISP_MP_PL_ICQ</font> %PLAYER_ICQ<br/><font color='#99ffffff' face='PuristaLight'>%$STR_DISP_MP_PL_REMARK</font> %PLAYER_REMARK<br/>%PLAYER_SQUAD<br/><img image='#(argb,8,8,3)color(1,1,1,0.1)' height='1' width='640' /><br /><font color='#99ffffff' face='PuristaLight'>%$STR_DISP_MP_PING</font> %PLAYER_PING_MIN %PLAYER_PING_AVG %PLAYER_PING_MAX<br/><font color='#99ffffff' face='PuristaLight'>%$STR_DISP_MP_BANDWIDTH</font> %PLAYER_BANDWIDTH_MIN %PLAYER_BANDWIDTH_AVG %PLAYER_BANDWIDTH_MAX<br/><font color='#99ffffff' face='PuristaLight'>%$STR_DISP_MP_DESYNC</font> %PLAYER_DESYNC<br/>%LINK_PLAYER_MUTE%LINK_PLAYER_KICK%LINK_PLAYER_BAN%LINK_PLAYER_VOTEKICK%LINK_PLAYER_VOTEADMIN";
			textUnit = "<br/>%PLAYER_UNIT<br/><img image='#(argb,8,8,3)color(1,1,1,0.1)' height='1' width='640' /><br /><font color='#99ffffff' face='PuristaLight'>%$STR_DISP_MP_PING</font> %PLAYER_PING_MIN %PLAYER_PING_AVG %PLAYER_PING_MAX<br/><font color='#99ffffff' face='PuristaLight'>%$STR_DISP_MP_BANDWIDTH</font> %PLAYER_BANDWIDTH_MIN %PLAYER_BANDWIDTH_AVG %PLAYER_BANDWIDTH_MAX<br/><font color='#99ffffff' face='PuristaLight'>%$STR_DISP_MP_DESYNC</font> %PLAYER_DESYNC<br/>%LINK_PLAYER_MUTE%LINK_PLAYER_KICK%LINK_PLAYER_BAN%LINK_PLAYER_VOTEKICK%LINK_PLAYER_VOTEADMIN";
			type = "DiaryPagePlayers";
			unit = "<font size='18'>%SQUAD_TITLE</font><br/><font color='#99ffffff' face='PuristaLight'>%$STR_DISP_MP_SQ_NAME</font> <h1>%SQUAD_NAME</h1><br/><font color='#99ffffff' face='PuristaLight'>%$STR_DISP_MP_SQ_WEB</font> %SQUAD_WEB<br/><font color='#99ffffff' face='PuristaLight'>%$STR_DISP_MP_SQ_MAIL</font> %SQUAD_EMAIL<br/><br/><img width='80' height='80' image='%SQUAD_PICTURE' />";
		};
		class Statistics
		{
			casualties = "  %COUNT x %NAME<br/>";
			casualtiesOnce = "  %NAME<br/>";
			casualtiesPlayer = "- %COUNT x by %NAME<br/>";
			casualtiesPlayerOnce = "- by %NAME<br/>";
			casualtiesPlayerTotal = "%COUNT x you (%NAME)<br/>";
			casualtiesPlayerTotalOnce = "You (%NAME)<br/>";
			displayName = "Statistics";
			indexIcon = "";
			indexTitle = "%$STR_LOGSUBJECT_STATISTICS";
			kills = "  %COUNT x %NAME<br/>";
			killsOnce = "  %NAME<br/>";
			picture = "#(argb,8,8,3)color(1,1,1,1)";
			recordTitle = " %$STR_STAT_MISSION";
			shortcuts[] = {};
			showEmpty = 0;
			text = "<img image='#(argb,8,8,3)color(1,1,1,0.1)' height='1' width='640' /><br /><font color='#99ffffff'>%$STR_BRIEF_YOURKILLS</font><br/>%STAT_KILLS_ENEMY<br/><img image='#(argb,8,8,3)color(1,1,1,0.1)' height='1' width='640' /><br /><font color='#99ffffff'>%$STR_BRIEF_YOURKILLS_FRIENDLY</font><br/>%STAT_KILLS_FRIENDLY<br/><img image='#(argb,8,8,3)color(1,1,1,0.1)' height='1' width='640' /><br /><font color='#99ffffff'>%$STR_BRIEF_YOURKILLS_CIVIL</font><br/>%STAT_KILLS_CIVIL%<br/><img image='#(argb,8,8,3)color(1,1,1,0.1)' height='1' width='640' /><br /><font color='#99ffffff'>%$STR_BRIEF_CASUALTIES</font><br/>%STAT_CASUALTIES";
			type = "DiaryPageStatistics";
		};
		class Tasks
		{
			colorTokenDisabled = "#80ffffff";
			displayName = "Tasks";
			iconButtonAssign = "\A3\ui_f\data\map\diary\icons\diaryAssignTask_ca.paa";
			iconButtonLocate = "\A3\ui_f\data\map\diary\icons\diaryLocateTask_ca.paa";
			iconButtonUnassign = "\A3\ui_f\data\map\diary\icons\diaryUnassignTask_ca.paa";
			iconSize = 14;
			indexIcon = "%ICON_TASK_STATE";
			indexTitle = "%TASK_DESCRIPTION_SHORT";
			picture = "#(argb,8,8,3)color(1,1,1,1)";
			recordTitle = "%TASK_DESCRIPTION_SHORT";
			shortcuts[] = {20};
			showEmpty = 0;
			text = "<font color='#ffffffff' size='14' face='RobotoCondensedLight'>%TASK_BUTTON_ASSIGN_ICON%TASK_BUTTON_ASSIGN_TEXT  %TASK_BUTTON_LOCATE_ICON %TASK_BUTTON_LOCATE_TEXT</font><br/><br/>%TASK_DESCRIPTION";
			text3D = "<font color='#ffffffff' size='14' face='RobotoCondensedLight'>%TASK_BUTTON_ASSIGN_ICON%TASK_BUTTON_ASSIGN_TEXT</font><br/><br/>%TASK_DESCRIPTION";
			textButtonAssign = "Assign";
			textButtonLocate = "Locate";
			textButtonLocateDistance = " (%1)";
			textButtonUnassign = "Unassign";
			type = "DiaryPageTasks";
		};
		class Units
		{
			displayName = "Team";
			indexIcon = "%ICON_UNIT_TYPE";
			indexTitle = "%UNIT_ID: %UNIT_NAME";
			picture = "#(argb,8,8,3)color(1,1,1,1)";
			recordTitle = " %UNIT_NAME";
			shortcuts[] = {22};
			showEmpty = 0;
			skill = "";
			text = "%UNIT_GRP_NAME:%UNIT_ID%UNIT_GRP_LEADER<br/>%UNIT_VEH_NAME %UNIT_VEH_POSITION<br/><br/>%UNIT_SKILLS<br/>%LINK_UNIT_GEAR%LINK_UNIT_TEAMSWITCH<br />";
			type = "DiaryPageUnits";
		};
	};
	class Icons
	{
		playerBriefCiv = "A3\ui_f\data\map\diary\icons\playerBriefCiv_ca.paa";
		playerBriefEast = "A3\ui_f\data\map\diary\icons\playerBriefEast_ca.paa";
		playerBriefGuer = "A3\ui_f\data\map\diary\icons\playerBriefGuer_ca.paa";
		playerBriefLogic = "\a3\UI_F_Curator\Data\CfgDiary\playerBriefLogic_ca.paa";
		playerBriefUnknown = "A3\ui_f\data\map\diary\icons\playerBriefUnknown_ca.paa";
		playerBriefVirtual = "A3\ui_f\data\map\diary\icons\playerBriefVirtual_ca.paa";
		playerBriefWest = "A3\ui_f\data\map\diary\icons\playerBriefWest_ca.paa";
		playerCiv = "A3\ui_f\data\map\diary\icons\playerCiv_ca.paa";
		playerConnecting = "A3\ui_f\data\map\diary\icons\playerConnecting_ca.paa";
		playerEast = "A3\ui_f\data\map\diary\icons\playerEast_ca.paa";
		playerGuer = "A3\ui_f\data\map\diary\icons\playerGuer_ca.paa";
		playerLogic = "\a3\UI_F_Curator\Data\CfgDiary\playerLogic_ca.paa";
		playerUnknown = "A3\ui_f\data\map\diary\icons\playerUnknown_ca.paa";
		playerVirtual = "A3\ui_f\data\map\diary\icons\playerVirtual_ca.paa";
		playerWest = "A3\ui_f\data\map\diary\icons\playerWest_ca.paa";
		taskAssigned = "A3\ui_f\data\map\diary\icons\taskAssigned_ca.paa";
		taskCanceled = "A3\ui_f\data\map\diary\icons\taskCanceled_ca.paa";
		taskCreated = "A3\ui_f\data\map\diary\icons\taskCreated_ca.paa";
		taskFailed = "A3\ui_f\data\map\diary\icons\taskFailed_ca.paa";
		taskNone = "A3\ui_f\data\map\diary\icons\taskNone_ca.paa";
		taskSucceeded = "A3\ui_f\data\map\diary\icons\taskSucceeded_ca.paa";
		unitGroup = "A3\ui_f\data\map\diary\icons\unitGroup_ca.paa";
		unitGroupPlayable = "A3\ui_f\data\map\diary\icons\unitGroupPlayable_ca.paa";
		unitNone = "#(argb,8,8,3)color(0,0,0,0)";
		unitPlayable = "A3\ui_f\data\map\diary\icons\unitPlayable_ca.paa";
	};
	class TaskIndex
	{
		colorAssigned[] = {1, 0.72, 0.3, 1};
		colorCanceled[] = {1, 1, 1, 1};
		colorCreated[] = {1, 1, 1, 1};
		colorCustom[] = {0.3, 0.72, 1, 1};
		colorDone[] = {1, 1, 1, 1};
		colorFailed[] = {1, 1, 1, 1};
		taskcanceled = "a3\ui_f\data\map\diary\icons\taskcanceled_ca.paa";
		taskcreated = "a3\ui_f\data\map\diary\icons\taskcreated_ca.paa";
		taskfailed = "a3\ui_f\data\map\diary\icons\taskfailed_ca.paa";
		tasknone = "a3\ui_f\data\map\diary\icons\tasknone_ca.paa";
		tasksucceeded = "a3\ui_f\data\map\diary\icons\tasksucceeded_ca.paa";
	};
};
