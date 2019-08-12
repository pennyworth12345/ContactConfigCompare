class RscButtonSearch: RscButton
{
	idc = 646;
	onButtonClick = "		_display = ctrlparent (_this select 0);		_ctrlSearch = _display displayctrl 645;		_ctrlSearch ctrlsettext '';		ctrlsetfocus _ctrlSearch;	";
	style = "0x02 + 0x30 + 0x800";
	text = "\a3\Ui_f\data\GUI\RscCommon\RscButtonSearch\search_start_ca.paa";
	textSearch = "\a3\Ui_f\data\GUI\RscCommon\RscButtonSearch\search_end_ca.paa";
	tooltip = "Search";
};
