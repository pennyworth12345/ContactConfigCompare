class RscDisplayNewMod: RscStandardDisplay
{
	idd = 158;
	class Controls
	{
		class B_Cancel: RscShortcutButton
		{
			h = 0.1;
			idc = 2;
			text = "Cancel";
			w = 0.25;
			x = 0.5;
			y = 0.9;
		};
		class B_OK: B_Cancel
		{
			default = 1;
			idc = 1;
			text = "OK";
			x = 0.75;
		};
		class TextDir: RscText
		{
			text = "Mod directory";
			w = 0.3;
			x = 0.025;
			y = 0.22;
		};
		class TextName: RscText
		{
			text = "Mod name";
			w = 0.3;
			x = 0.025;
			y = 0.12;
		};
		class Title: RscTitle
		{
			text = "Install New Mod";
		};
		class ValueDir: RscEdit
		{
			idc = 102;
			w = 0.4;
			x = 0.35;
			y = 0.22;
		};
		class ValueName: RscEdit
		{
			idc = 101;
			w = 0.4;
			x = 0.35;
			y = 0.12;
		};
	};
};
