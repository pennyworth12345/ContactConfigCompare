class RscDisplayCardA
{
	idd = "IDD_CARDA_WIN";
	class controls
	{
		class B_Back: testingButton
		{
			idc = 2;
			text = "Back";
			y = "0.2 + 0.4";
		};
		class kompas: RscCompass {};
		class testingButton: RscButton
		{
			idc = 111;
			text = "add text";
			x = 0.6;
			y = "0.2 + 0.2";
		};
		class testingList: RscListBox
		{
			idc = 110;
			w = 0.3;
			x = 0.133;
			y = 0.05;
		};
		class testingSlider: RscSlider
		{
			idc = 112;
			x = 0.133;
			y = 0.7;
		};
	};
};
