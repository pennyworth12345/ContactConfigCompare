class RscDisplayOptionsInGame
{
	enableDisplay = 1;
	idd = 3;
	movingEnable = 1;
	class controls
	{
		class Audio: Video
		{
			idc = 302;
			text = "Audio Options";
			y = "0.2 + 0.1";
		};
		class B_Close: B_Credits
		{
			default = 1;
			idc = 2;
			text = "Close";
			x = 0.85;
		};
		class B_Credits: RscActiveText
		{
			idc = 306;
			text = "Credits";
			w = 0.15;
			x = 0.05;
			y = 0.9;
		};
		class Configure: Video
		{
			idc = 303;
			text = "Controls";
			y = "0.2 + 0.2";
		};
		class GameOptions: Video
		{
			idc = 307;
			text = "Game Options";
			y = "0.2 + 0.3";
		};
		class Title: RscTitle
		{
			text = "Options";
		};
		class Video: RscButton
		{
			h = 0.05;
			idc = 301;
			style = 2;
			text = "Video Options";
			x = 0.35;
			y = 0.2;
		};
	};
};
