class RscHorizontalCompass: RscControlsGroupNoScrollbars
{
	onLoad = "[""onLoad"",_this,""RscHorizontalCompass"",'ContactCommon',0] call 	(uinamespace getvariable 'BIS_fnc_initDisplay')";
	onUnload = "[""onUnload"",_this,""RscHorizontalCompass"",'ContactCommon',0] call 	(uinamespace getvariable 'BIS_fnc_initDisplay')";
	scriptName = "RscHorizontalCompass";
	scriptPath = "ContactCommon";
	class Controls
	{
		class Compass: RscControlsGroupNoScrollbars
		{
			idc = 6700;
			class Controls
			{
				class Background: RscPicture
				{
					colorText[] = {"(profilenamespace getvariable ['IGUI_BCG_RGB_R',0])", "(profilenamespace getvariable ['IGUI_BCG_RGB_G',1])", "(profilenamespace getvariable ['IGUI_BCG_RGB_B',1])", "(profilenamespace getvariable ['IGUI_BCG_RGB_A',0.8])"};
					idc = 6713;
					text = "\a3\UI_F_Contact\Data\Common\RscHorizontalCompass\compassBackground_ca.paa";
				};
				class Bar1: RscControlsGroupNoScrollbars
				{
					idc = 6701;
					class Controls
					{
						class CurrentTask: RscPicture
						{
							colorText[] = {1, 0.5, 0, 1};
							idc = 6707;
							show = 0;
							text = "\a3\UI_F_Contact\Data\Common\RscHorizontalCompass\compass_currentTask_ca.paa";
						};
						class CustomMark: RscPicture
						{
							colorText[] = {1, 1, 1, 1};
							idc = 6711;
							show = 0;
							text = "\a3\UI_F_Contact\Data\Common\RscHorizontalCompass\compass_customMark_ca.paa";
						};
						class E: N
						{
							idc = 6705;
							text = "E";
						};
						class HQ: RscPicture
						{
							colorText[] = {1, 0, 0, 1};
							idc = 6710;
							show = 0;
							text = "\a3\UI_F_Contact\Data\Common\RscHorizontalCompass\compass_hq_ca.paa";
						};
						class N: RscText
						{
							colorText[] = {"(profilenamespace getvariable ['IGUI_TEXT_RGB_R',0])", "(profilenamespace getvariable ['IGUI_TEXT_RGB_G',1])", "(profilenamespace getvariable ['IGUI_TEXT_RGB_B',1])", "(profilenamespace getvariable ['IGUI_TEXT_RGB_A',0.8])"};
							font = "RobotoCondensedLight";
							idc = 6703;
							shadow = 0;
							sizeEx = 0.1;
							style = 2;
							text = "N";
						};
						class S: N
						{
							idc = 6704;
							text = "S";
						};
						class W: N
						{
							idc = 6706;
							text = "W";
						};
					};
				};
				class Bar2: Bar1
				{
					idc = 6702;
					x = "GRID_COMPASS_W";
				};
				class Center: RscPicture
				{
					colorText[] = {"(profilenamespace getvariable ['IGUI_TEXT_RGB_R',0])", "(profilenamespace getvariable ['IGUI_TEXT_RGB_G',1])", "(profilenamespace getvariable ['IGUI_TEXT_RGB_B',1])", "(profilenamespace getvariable ['IGUI_TEXT_RGB_A',0.8])"};
					idc = 6712;
					text = "\a3\UI_F_Contact\Data\Common\RscHorizontalCompass\compassCenter_ca.paa";
				};
				class CurrentTaskArea: RscPicture
				{
					colorText[] = {1, 0.5, 0, 1};
					fade = 1;
					idc = 6709;
					show = 1;
					text = "\a3\UI_F_Contact\Data\Common\RscHorizontalCompass\currentTaskArea_ca.paa";
				};
				class CurrentTaskIn: RscPicture
				{
					colorText[] = {1, 0.5, 0, 1};
					fade = 1;
					idc = 6708;
					text = "\a3\UI_F_Contact\Data\Common\RscHorizontalCompass\compass_currentTaskIn_ca.paa";
				};
				class DangerZone: RscPicture
				{
					colorText[] = {0.5, 0, 0, 1};
					fade = 0;
					idc = 6714;
					text = "\a3\UI_F_Contact\Data\Common\RscHorizontalCompass\dangerZone_ca.paa";
				};
			};
		};
		class Map: RscMapControlEmpty
		{
			h = 0;
			idc = 999;
			onDraw = "['onDraw',[ctrlparentcontrolsgroup (_this # 0),true],''] call (uinamespace getvariable 'RscHorizontalCompass_script');";
			scaleMax = 0.001;
			scaleMin = 0.001;
			w = 0;
		};
	};
};
