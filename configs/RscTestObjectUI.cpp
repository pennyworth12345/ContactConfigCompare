class RscTestObjectUI: RscStandardDisplay
{
	idd = -1;
	class objects
	{
		class TestObject: RscObject
		{
			direction[] = {1, 0.25, 1};
			enableZoom = 1;
			idc = -1;
			inBack = 0;
			model = "\A3\Misc_F\Helpers\UserTexture1m.p3d";
			position[] = {0, 0, 0.2};
			positionBack[] = {0, 0, 0.2};
			scale = 0.2;
			type = 82;
			up[] = {0.25, 1, 0};
			zoomDuration = 0.5;
			class Areas
			{
				class Usertexture
				{
					selection = "usertexture";
					class controls
					{
						class Picture: RscPicture
						{
							h = 0.5;
							text = "a3\Ui_f\data\Logos\bi_white_ca.paa";
							w = 0.5;
							x = 0;
							y = 0.5;
						};
						class Test: RscText
						{
							colorBackground[] = {0, 1, 0, 1};
							colorText[] = {0, 1, 0, 1};
							h = 0.5;
							shadow = 0;
							sizeEx = 0.3;
							text = "Schnobble";
							w = 1;
							x = 0;
							y = 0;
						};
					};
				};
			};
		};
	};
};
