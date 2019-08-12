class RscMenuFormations: RscSubmenu
{
	title = "Formation";
	vocabulary = "";
	class Items
	{
		class Column
		{
			command = "CMD_FORM_COLUMN";
			shortcuts[] = {2};
			shortcutsAction = "CommandingMenu1";
			show = "IsLeader";
			speechId = 0;
			title = "Column";
		};
		class Diamond
		{
			command = "CMD_FORM_DIAMOND";
			shortcuts[] = {10};
			shortcutsAction = "CommandingMenu9";
			show = "IsLeader";
			speechId = 0;
			title = "Diamond";
		};
		class EchL
		{
			command = "CMD_FORM_ECHLEFT";
			shortcuts[] = {5};
			shortcutsAction = "CommandingMenu4";
			show = "IsLeader";
			speechId = 0;
			title = "Echelon L.";
		};
		class EchR
		{
			command = "CMD_FORM_ECHRIGHT";
			shortcuts[] = {6};
			shortcutsAction = "CommandingMenu5";
			show = "IsLeader";
			speechId = 0;
			title = "Echelon R.";
		};
		class File
		{
			command = "CMD_FORM_FILE";
			shortcuts[] = {9};
			shortcutsAction = "CommandingMenu8";
			show = "IsLeader";
			speechId = 0;
			title = "File";
		};
		class Line
		{
			command = "CMD_FORM_LINE";
			shortcuts[] = {8};
			shortcutsAction = "CommandingMenu7";
			show = "IsLeader";
			speechId = 0;
			title = "Line";
		};
		class Staggered
		{
			command = "CMD_FORM_STAGCOL";
			shortcuts[] = {3};
			shortcutsAction = "CommandingMenu2";
			show = "IsLeader";
			title = "Staggered Col.";
		};
		class Vee
		{
			command = "CMD_FORM_VEE";
			shortcuts[] = {7};
			shortcutsAction = "CommandingMenu6";
			show = "IsLeader";
			title = "Vee";
		};
		class Wedge
		{
			command = "CMD_FORM_WEDGE";
			shortcuts[] = {4};
			shortcutsAction = "CommandingMenu3";
			show = "IsLeader";
			speechId = 0;
			title = "Wedge";
		};
	};
};
