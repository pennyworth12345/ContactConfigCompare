class RscDisplayAddonActions
{
	idd = 156;
	class Controls
	{
		class CA_B_Cancel: RscShortcutButton
		{
			default = 0;
			idc = 2;
			text = "Cancel";
			x = 0.217;
			y = 0.7625;
		};
		class CA_B_NewMod: RscShortcutButton
		{
			default = 0;
			idc = 102;
			text = "New Mod";
			x = 0.405;
			y = 0.7625;
		};
		class CA_B_OK: RscShortcutButton
		{
			default = 1;
			idc = 1;
			text = "OK";
			x = 0.591;
			y = 0.7625;
		};
		class CA_C_Actions: RscListBox
		{
			h = 0.41;
			idc = 101;
			w = 0.53;
			x = 0.235;
			y = 0.32;
		};
		class CA_T_Actions: RscText
		{
			idc = 1003;
			text = "Possible actions";
			x = 0.225803;
			y = "(0.367549 + -2*0.0523905)";
		};
		class CA_T_Title: CA_Title
		{
			idc = 1002;
			moving = 1;
			text = "Select what to do";
			x = 0.225803;
			y = 0.192;
		};
	};
	class controlsBackground
	{
		class Mainback: RscPicture
		{
			h = 0.836601;
			idc = 1104;
			text = "\A3\ui_f\data\ui_gameoptions_background_ca.paa";
			w = 0.627451;
			x = 0.204;
			y = 0.17;
		};
	};
};
