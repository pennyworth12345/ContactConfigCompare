class RscDisplayPrototype
{
	idd = -1;
	onLoad = "{_x ctrlsetfade 1; _x ctrlcommit 0; _x ctrlsetfade 0; _x ctrlcommit 2;} foreach allcontrols (_this # 0);";
	class Controls
	{
		class ButtonClose: RscButtonMenuCancel
		{
			h = "1 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			text = "Close";
			w = "7 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
			x = "safezoneX + safezoneW - 8 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
			y = "safezoneY + safezoneH - 2 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
		};
		class Picture: RscPicture
		{
			h = "10 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = 1200;
			text = "\a3\data_f_contact\logos\logoTitle_ca.paa";
			w = "20 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
			x = "0.5 - 10 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
			y = "0.5 - 10 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
		};
		class Text: RscStructuredText
		{
			h = "0.39 * SafezoneH";
			idc = -1;
			shadow = 0;
			size = "0.028 * SafezoneH";
			text = "<t size='3'>CONTACT VERTICAL SLICE</t><br /><br />Thanks for playing this narrow slice of gameplay!<br />Please share your thoughts with us on <a href='https://confluence.bistudio.com/display/CONTACT/Vertical+Slice+Play+Tests' colorLink='#ffffff' underline='true'>Confluence.</a><br /><br />You may also like to try the Horizontal Slice by starting a NEW GAME<br />in the main menu, and feel free to explore Enoch via the EDITOR.<br /><br /><br /><t color='#ff9900'>CLASSIFIED - INTERNAL USE ONLY</t>";
			w = "50 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
			x = "SafeZoneX + SafeZoneW / 2 - (50 * 			(			((safezoneW / safezoneH) min 1.2) / 40)) / 2";
			y = "SafeZoneY +	SafeZoneH - (0.45 * SafezoneH)";
			class Attributes
			{
				align = "center";
				shadow = 0;
			};
		};
	};
};
