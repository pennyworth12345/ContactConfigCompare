class RscDisplayDLCPreview_List: RscControlsGroupNoScrollbars
{
	h = "15 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
	w = "38 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
	x = 0;
	y = 0;
	class Controls
	{
		class Background: RscText
		{
			colorBackground[] = {0.1, 0.1, 0.1, 0.8};
			h = "11.5 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = 31263;
			w = "18 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			x = "19.5 * 					(			((safezoneW / safezoneH) min 1.2) / 40) + 		0";
			y = "3 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 		0";
		};
		class BackgroundBottom: RscText
		{
			colorBackground[] = {1, 1, 1, 0.05};
			h = "2.5 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = 31266;
			w = "18 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			x = "19.5 * 					(			((safezoneW / safezoneH) min 1.2) / 40) + 		0";
			y = "12 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 		0";
		};
		class BrowseNext: BrowsePrev
		{
			h = "8 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = 31466;
			text = "\a3\Ui_f\data\GUI\Rsc\RscDisplayDLCPreview\browseNext_ca.paa";
			w = "1 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			x = "17.5 * 					(			((safezoneW / safezoneH) min 1.2) / 40) + 		0";
			y = "1.5 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 		0";
		};
		class BrowsePrev: RscActivePicture
		{
			color[] = {1, 1, 1, 0.5};
			h = "8 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = 31465;
			text = "\a3\Ui_f\data\GUI\Rsc\RscDisplayDLCPreview\browsePrev_ca.paa";
			w = "1 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			x = "1.5 * 					(			((safezoneW / safezoneH) min 1.2) / 40) + 		0";
			y = "1.5 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 		0";
		};
		class ButtonPurchase: RscButtonMenuSteam
		{
			h = "1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = 32664;
			show = 0;
			text = "Purchase";
			w = "6 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			x = "31 * 					(			((safezoneW / safezoneH) min 1.2) / 40) + 		0";
			y = "12.75 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 		0";
		};
		class ButtonTry: RscButtonMenu
		{
			h = "1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = 32663;
			show = 0;
			text = "Try";
			w = "6 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			x = "31 * 					(			((safezoneW / safezoneH) min 1.2) / 40) + 		0";
			y = "12.75 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 		0";
		};
		class InfoGroup: RscControlsGroup
		{
			h = "9 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = 32565;
			w = "18 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			x = "19.5 * 					(			((safezoneW / safezoneH) min 1.2) / 40) + 		0";
			y = "3 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 		0";
			class Controls
			{
				class Info: RscStructuredText
				{
					h = "9 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					idc = 31363;
					w = "17 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					x = "0.5 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					y = "0.5 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				};
			};
		};
		class InfoStats: RscStructuredText
		{
			h = "2 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = 31364;
			w = "11 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			x = "19.5 * 					(			((safezoneW / safezoneH) min 1.2) / 40) + 		0";
			y = "12.25 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 		0";
		};
		class InfoTitle: RscText
		{
			colorBackground[] = {1, 0, 1, 1};
			h = "2 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = 31264;
			shadow = 0;
			sizeEx = "1.5 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			style = 2;
			w = "18 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			x = "19.5 * 					(			((safezoneW / safezoneH) min 1.2) / 40) + 		0";
			y = "1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 		0";
		};
		class PictureGroup: RscControlsGroupNoScrollbars
		{
			h = "9 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = 32563;
			w = "18 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			x = "1 * 					(			((safezoneW / safezoneH) min 1.2) / 40) + 		0";
			y = "1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 		0";
			class Controls
			{
				class Picture: RscPictureKeepAspect
				{
					h = "9 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					idc = 31464;
					w = "18 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					x = "0 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					y = "0 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				};
				class PictureAnim: RscPictureKeepAspect
				{
					h = "9 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					idc = 31463;
					w = "18 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					x = "0 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					y = "0 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				};
				class PictureAnimBackground: RscPicture
				{
					h = "9 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					idc = 31472;
					text = "\a3\Ui_f\data\GUI\Rsc\RscDisplayDLCPreview\background_co.paa";
					w = "18 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					x = "0 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					y = "0 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				};
				class PictureAnimOverlay: RscPicture
				{
					h = "9 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					idc = 31467;
					show = 0;
					text = "\A3\Ui_f\data\GUI\Rsc\RscDisplaySingleMission\Stripe_ca.paa";
					w = "18 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					x = "0 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					y = "0 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				};
				class PictureAnimOverlayIcon: RscPicture
				{
					h = "9 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					idc = 31469;
					show = 0;
					text = "\a3\Ui_f\data\GUI\Rsc\RscDisplayDLCPreview\overlayIcon_ca.paa";
					w = "18 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					x = "0 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					y = "0 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				};
				class PictureBackground: RscPicture
				{
					h = "9 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					idc = 31471;
					text = "\a3\Ui_f\data\GUI\Rsc\RscDisplayDLCPreview\background_co.paa";
					w = "18 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					x = "0 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					y = "0 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				};
				class PictureOverlay: RscPicture
				{
					h = "9 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					idc = 31468;
					show = 0;
					text = "\A3\Ui_f\data\GUI\Rsc\RscDisplaySingleMission\Stripe_ca.paa";
					w = "18 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					x = "0 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					y = "0 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				};
				class PictureOverlayIcon: RscPicture
				{
					h = "9 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					idc = 31470;
					show = 0;
					text = "\a3\Ui_f\data\GUI\Rsc\RscDisplayDLCPreview\overlayIcon_ca.paa";
					w = "18 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					x = "0 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					y = "0 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				};
			};
		};
		class PictureListGroup: RscControlsGroup
		{
			h = "4 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = 32564;
			w = "18 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			x = "1 * 					(			((safezoneW / safezoneH) min 1.2) / 40) + 		0";
			y = "10.5 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 		0";
			class Controls {};
		};
	};
};
