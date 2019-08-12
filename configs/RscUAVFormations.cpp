class RscUAVFormations
{
	access = 0;
	atomic = 0;
	title = "Formation";
	vocabulary = "";
	class items
	{
		class Column
		{
			command = -5;
			enable = "HCNotEmpty";
			shortcuts[] = {2};
			shortcutsAction = "CommandingMenu1";
			show = "";
			title = "Column";
			class Params
			{
				expression = "'COLUMN' call BIS_fnc_guiMenuUAV";
			};
		};
		class ColumnCompact
		{
			command = -5;
			enable = "HCNotEmpty";
			shortcuts[] = {9};
			shortcutsAction = "CommandingMenu8";
			show = "";
			title = "File";
			class Params
			{
				expression = "'FILE' call BIS_fnc_guiMenuUAV";
			};
		};
		class ColumnStag
		{
			command = -5;
			enable = "HCNotEmpty";
			shortcuts[] = {3};
			shortcutsAction = "CommandingMenu2";
			show = "";
			title = "Staggered Col.";
			class Params
			{
				expression = "'STAG COLUMN' call BIS_fnc_guiMenuUAV";
			};
		};
		class Delta
		{
			command = -5;
			enable = "HCNotEmpty";
			shortcuts[] = {10};
			shortcutsAction = "CommandingMenu9";
			show = "";
			title = "Diamond";
			class Params
			{
				expression = "'DIAMOND' call BIS_fnc_guiMenuUAV";
			};
		};
		class EchelonL
		{
			command = -5;
			enable = "HCNotEmpty";
			shortcuts[] = {5};
			shortcutsAction = "CommandingMenu4";
			show = "";
			title = "Echelon L.";
			class Params
			{
				expression = "'ECH LEFT' call BIS_fnc_guiMenuUAV";
			};
		};
		class EchelonR
		{
			command = -5;
			enable = "HCNotEmpty";
			shortcuts[] = {6};
			shortcutsAction = "CommandingMenu5";
			show = "";
			title = "Echelon R.";
			class Params
			{
				expression = "'ECH RIGHT' call BIS_fnc_guiMenuUAV";
			};
		};
		class Line
		{
			command = -5;
			enable = "HCNotEmpty";
			shortcuts[] = {8};
			shortcutsAction = "CommandingMenu7";
			show = "";
			title = "Line";
			class Params
			{
				expression = "'LINE' call BIS_fnc_guiMenuUAV";
			};
		};
		class Vee
		{
			command = -5;
			enable = "HCNotEmpty";
			shortcuts[] = {7};
			shortcutsAction = "CommandingMenu6";
			show = "";
			title = "Vee";
			class Params
			{
				expression = "'VEE' call BIS_fnc_guiMenuUAV";
			};
		};
		class Wedge
		{
			command = -5;
			enable = "HCNotEmpty";
			shortcuts[] = {4};
			shortcutsAction = "CommandingMenu3";
			show = "";
			title = "Wedge";
			class Params
			{
				expression = "'WEDGE' call BIS_fnc_guiMenuUAV";
			};
		};
	};
};
