class RscDisplayAANArticle
{
	enableSimulation = 1;
	idd = -1;
	onLoad = "[""onLoad"",_this,""RscDisplayAANArticle"",'OrangeDisplays'] call 	(uinamespace getvariable 'BIS_fnc_initDisplay')";
	onUnload = "[""onUnload"",_this,""RscDisplayAANArticle"",'OrangeDisplays'] call 	(uinamespace getvariable 'BIS_fnc_initDisplay')";
	scriptName = "RscDisplayAANArticle";
	scriptPath = "OrangeDisplays";
	class Controls
	{
		class Display: RscControlsGroup
		{
			h = "safezoneH";
			idc = 12345;
			w = "safezoneW";
			x = "safezoneX";
			y = "safezoneY";
			class Controls
			{
				class BackgroundBottom: BackgroundTop
				{
					h = "3 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					idc = 19516;
					y = "19 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 		0";
				};
				class BackgroundCopyright: BackgroundTop
				{
					colorBackground[] = {0.3, 0.3, 0.3, 1};
					h = "3 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					idc = 19518;
				};
				class BackgroundTop: RscText
				{
					colorBackground[] = {0.52, 0.08, 0.08, 1};
					h = "4 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					idc = 19513;
					w = "safezoneW";
					x = 0;
					y = 0;
				};
				class GroupBody: RscControlsGroup
				{
					h = "6.5 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					idc = 20814;
					w = "24 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					x = "8 * 					(			((safezoneW / safezoneH) min 1.2) / 40)	 + 		((safezoneW - 				((safezoneW / safezoneH) min 1.2)) / 2)";
					y = "6 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 		0";
					class Controls {};
				};
				class GroupCopyright: RscControlsGroup
				{
					h = "3 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					idc = 20816;
					w = "40 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					x = "0 * 					(			((safezoneW / safezoneH) min 1.2) / 40)	 + 		((safezoneW - 				((safezoneW / safezoneH) min 1.2)) / 2)";
					y = "22 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 		0";
					class Controls
					{
						class ButtonClose: RscButtonMenuCancel
						{
							h = "1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
							text = "Close";
							w = "7 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
							x = "32 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
							y = "1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
						};
						class Copyright: RscText
						{
							colorText[] = {1, 1, 1, 0.7};
							font = "RobotoCondensedLight";
							h = "1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
							idc = 19519;
							shadow = 0;
							sizeEx = "0.8 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
							text = "©%1 AAN News Network or its affiliated companies. All rights reserved.";
							w = "30 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
							x = "0 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
							y = "2 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
						};
					};
				};
				class GroupFooter: RscControlsGroup
				{
					h = "3 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					idc = 20815;
					w = "40 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					x = "0 * 					(			((safezoneW / safezoneH) min 1.2) / 40)	 + 		((safezoneW - 				((safezoneW / safezoneH) min 1.2)) / 2)";
					y = "19 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 		0";
					class Controls
					{
						class BackgroundMenuFooter: RscText
						{
							colorBackground[] = {0, 0, 0, 0.2};
							h = "1.2 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
							idc = 19517;
							w = "40 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
							x = "0 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
							y = "1.8 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
						};
						class LogoFooter: RscPicture
						{
							h = "1.5 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
							idc = 19713;
							text = "\a3\UI_F_Orange\Data\Displays\RscDisplayAANArticle\logo_ca.paa";
							w = "6 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
							x = "0 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
							y = "0.1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
						};
						class MenuFooter: RscStructuredText
						{
							colorBackground[] = {0, 0, 0, 0};
							h = "1.1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
							idc = 19615;
							w = "40 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
							x = "0 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
							y = "1.9 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
						};
					};
				};
				class GroupMenu: RscControlsGroup
				{
					h = "5.5 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					idc = 20813;
					w = "40 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					x = "0 * 					(			((safezoneW / safezoneH) min 1.2) / 40)	 + 		((safezoneW - 				((safezoneW / safezoneH) min 1.2)) / 2)";
					y = "0 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 		0";
					class Controls
					{
						class BackgroundMenu: RscText
						{
							colorBackground[] = {0, 0, 0, 0.2};
							h = "1.2 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
							idc = 19514;
							w = "40 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
							x = "0 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
							y = "2.8 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
						};
						class BackgroundSubmenu: RscText
						{
							colorBackground[] = {0, 0, 0, 0.1};
							h = "1.2 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
							idc = 19515;
							w = "40 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
							x = "0 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
							y = "4 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
						};
						class Logo: RscPicture
						{
							h = "2 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
							idc = 19714;
							text = "\a3\UI_F_Orange\Data\Displays\RscDisplayAANArticle\logo_ca.paa";
							w = "8 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
							x = "0 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
							y = "0.4 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
						};
						class Menu: RscStructuredText
						{
							colorBackground[] = {0, 0, 0, 0};
							h = "1.1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
							idc = 19613;
							w = "40 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
							x = "0 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
							y = "2.9 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
						};
						class Submenu: RscStructuredText
						{
							colorBackground[] = {0, 0, 0, 0};
							h = "1.1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
							idc = 19614;
							w = "40 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
							x = "0 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
							y = "4.1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
						};
						class WebMenu: RscStructuredText
						{
							colorBackground[] = {0, 0, 0, 0};
							h = "2 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
							idc = 19616;
							w = "31.5 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
							x = "8 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
							y = "0.5 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
						};
					};
				};
			};
		};
	};
	class ControlsBackground
	{
		class Background: RscText
		{
			colorBackground[] = {0.96, 0.96, 0.96, 1};
			h = "safezoneH";
			w = "safezoneWAbs";
			x = "safezoneXAbs";
			y = "safezoneY";
		};
		class BackgroundWhite: RscText
		{
			colorBackground[] = {1, 1, 1, 1};
			h = "safezoneH";
			w = "((safezoneW / safezoneH) min 1.2)";
			x = "0.5 - 				((safezoneW / safezoneH) min 1.2) / 2";
			y = "safezoneY";
		};
	};
};
