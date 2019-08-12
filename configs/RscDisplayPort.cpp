class RscDisplayPort: RscStandardDisplay
{
	idd = 69;
	class controls
	{
		class CA_TextPort: RscText
		{
			text = "Port:";
			w = 0.088236;
			x = 0.312498;
			y = 0.455882;
		};
		class CA_Valueport: RscEdit
		{
			colorBackground[] = {0, 0, 0, 0.5};
			h = 0.039216;
			idc = 101;
			w = 0.29412;
			x = 0.400734;
			y = 0.455882;
		};
		class Cancel: Ok
		{
			default = 0;
			idc = 2;
			text = "Cancel";
			y = 0.553922;
		};
		class Ok: CA_RscButton_dialog
		{
			default = 1;
			h = 0.039216;
			idc = 1;
			text = "OK";
			w = 0.14706;
			x = 0.547794;
			y = 0.504902;
		};
		class SetPortTitle: CA_Title
		{
			colorText[] = {0.95, 0.95, 0.95, 1};
			text = "Port";
			x = 0.305146;
			y = 0.401862;
		};
	};
	class controlsBackground
	{
		class Logo: CA_Logo_Small
		{
			x = 0.518382;
			y = 0.358822;
		};
		class Mainback: CA_Mainback
		{
			colorbackground[] = {0.6, 0.6, 0.6, 0.4};
			h = 0.205884;
			moving = 1;
			w = 0.404415;
			x = 0.297792;
			y = 0.397058;
		};
		class PortTitleBack: CA_Title_Back
		{
			h = 0.039216;
			w = 0.389709;
			x = 0.305146;
			y = 0.406862;
		};
	};
};
