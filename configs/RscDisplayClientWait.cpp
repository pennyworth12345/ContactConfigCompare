class RscDisplayClientWait: RscDisplayMPPlayers
{
	idd = 22;
	class ButtonCancel: RscActiveText
	{
		default = 1;
		idc = 2;
		text = "Cancel";
		w = 0.25;
		x = 0.85;
		y = 0.9;
	};
	class Cancel: CA_Ok
	{
		default = 1;
		idc = 2;
		onKillFocus = "_display = ctrlParent (_this select 0); _ctrl031 = _display displayCtrl 031; _ctrl032 = _display displayCtrl 032; _ctrl031 ctrlSetTextColor [1,1,1,0.9]; _ctrl032 ctrlSetTextColor [0, 0, 0, 0.9]";
		onMouseEnter = "_display = ctrlParent (_this select 0); _ctrl031 = _display displayCtrl 031; _ctrl032 = _display displayCtrl 032; _ctrl031 ctrlSetTextColor [0.84,1,0.55,1]; _ctrl032 ctrlSetTextColor [0, 0, 0, 1]";
		onMouseExit = "_display = ctrlParent (_this select 0); _ctrl031 = _display displayCtrl 031; _ctrl032 = _display displayCtrl 032; _ctrl031 ctrlSetTextColor [1,1,1,0.9]; _ctrl032 ctrlSetTextColor [0, 0, 0, 0.9]";
		onSetFocus = "_display = ctrlParent (_this select 0); _ctrl031 = _display displayCtrl 031; _ctrl032 = _display displayCtrl 032; _ctrl031 ctrlSetTextColor [0.84,1,0.55,1]; _ctrl032 ctrlSetTextColor [0, 0, 0, 1]";
		y = 0.85;
	};
	class Cancel_image: CA_Ok_image
	{
		idc = 31;
		y = 0.85;
	};
	class Cancel_image2: CA_Ok_image2
	{
		y = 0.85;
	};
	class Cancel_text: CA_Ok_text
	{
		idc = 32;
		text = "Cancel";
		y = 0.85;
	};
	class LoadingPic: RscPicture
	{
		colortext[] = {1, 1, 1, 1};
		h = 1;
		text = "#(argb,8,8,3)color(0,0,0,0)";
		w = 1;
		x = 0;
		y = 0;
	};
	class Title: RscTitle
	{
		idc = 130;
		text = "Game in progress, wait please";
	};
};
