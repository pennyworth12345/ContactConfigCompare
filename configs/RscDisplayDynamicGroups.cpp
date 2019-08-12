class RscDisplayDynamicGroups
{
	closeOnMissionEnd = 1;
	enableSimulation = 1;
	idd = 60490;
	movingEnable = 0;
	onLoad = "[""onLoad"",_this,""RscDisplayDynamicGroups"",'GUI'] call 	(uinamespace getvariable 'BIS_fnc_initDisplay')";
	onUnload = "[""onUnload"",_this,""RscDisplayDynamicGroups"",'GUI'] call 	(uinamespace getvariable 'BIS_fnc_initDisplay')";
	scriptName = "RscDisplayDynamicGroups";
	scriptPath = "GUI";
	class controls
	{
		class ButtonCreateLeaveKick: RscButton
		{
			h = "2 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = 9978;
			text = "CREATE";
			w = "9.9 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			x = "20.1 * 					(			((safezoneW / safezoneH) min 1.2) / 40) + 		(safezoneX + (safezoneW - 					((safezoneW / safezoneH) min 1.2))/2)";
			y = "18.4 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 		(safezoneY + (safezoneH - 					(			((safezoneW / safezoneH) min 1.2) / 1.2))/2)";
		};
		class ButtonInvite: RscButton
		{
			h = "2 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = 9980;
			text = "INVITE";
			w = "9.6 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			x = "10.3 * 					(			((safezoneW / safezoneH) min 1.2) / 40) + 		(safezoneX + (safezoneW - 					((safezoneW / safezoneH) min 1.2))/2)";
			y = "18.4 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 		(safezoneY + (safezoneH - 					(			((safezoneW / safezoneH) min 1.2) / 1.2))/2)";
		};
		class ButtonJoin: RscButton
		{
			h = "2 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = 9977;
			text = "JOIN";
			w = "9.5 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			x = "0.6 * 					(			((safezoneW / safezoneH) min 1.2) / 40) + 		(safezoneX + (safezoneW - 					((safezoneW / safezoneH) min 1.2))/2)";
			y = "18.4 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 		(safezoneY + (safezoneH - 					(			((safezoneW / safezoneH) min 1.2) / 1.2))/2)";
		};
		class ButtonPromoteDisband: RscButton
		{
			h = "2 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = 9979;
			text = "PROMOTE";
			w = "9.3 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			x = "30.1 * 					(			((safezoneW / safezoneH) min 1.2) / 40) + 		(safezoneX + (safezoneW - 					((safezoneW / safezoneH) min 1.2))/2)";
			y = "18.4 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 		(safezoneY + (safezoneH - 					(			((safezoneW / safezoneH) min 1.2) / 1.2))/2)";
		};
		class CloseInterface: RscActiveText
		{
			color[] = {1, 1, 1, 0.7};
			colorActive[] = {1, 1, 1, 1};
			colorBackground[] = {0, 0, 0, 0};
			colorText[] = {1, 1, 1, 0.7};
			h = "1.1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = 2;
			sizeEx = "1.5 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			style = 48;
			text = "\A3\Ui_f\data\GUI\Rsc\RscDisplayArcadeMap\icon_exit_cross_ca.paa";
			tooltip = "Close";
			w = "1.2 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			x = "38 * 					(			((safezoneW / safezoneH) min 1.2) / 40) + 		(safezoneX + (safezoneW - 					((safezoneW / safezoneH) min 1.2))/2)";
			y = "0.5 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 		(safezoneY + (safezoneH - 					(			((safezoneW / safezoneH) min 1.2) / 1.2))/2)";
		};
		class Header: RscText
		{
			colorBackground[] = {"(profilenamespace getvariable ['GUI_BCG_RGB_R',0.13])", "(profilenamespace getvariable ['GUI_BCG_RGB_G',0.54])", "(profilenamespace getvariable ['GUI_BCG_RGB_B',0.21])", "(profilenamespace getvariable ['GUI_BCG_RGB_A',0.8])"};
			colorText[] = {1, 1, 1, 1};
			h = "1.5 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = 9377;
			sizeEx = "1.25 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			text = "GROUP MANAGEMENT";
			w = "39 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			x = "0.5 * 					(			((safezoneW / safezoneH) min 1.2) / 40) + 		(safezoneX + (safezoneW - 					((safezoneW / safezoneH) min 1.2))/2)";
			y = "0.3 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 		(safezoneY + (safezoneH - 					(			((safezoneW / safezoneH) min 1.2) / 1.2))/2)";
		};
		class SectionGroups: RscControlsGroupNoScrollbars
		{
			h = "16.7 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = 10679;
			w = "19.7 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			x = "0.4 * 					(			((safezoneW / safezoneH) min 1.2) / 40) + 		(safezoneX + (safezoneW - 					((safezoneW / safezoneH) min 1.2))/2)";
			y = "1.8 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 		(safezoneY + (safezoneH - 					(			((safezoneW / safezoneH) min 1.2) / 1.2))/2)";
			class controls
			{
				class BackgroundPlayers: RscText
				{
					colorBackground[] = {0, 0, 0, 0.7};
					h = "16.3 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					idc = 9382;
					w = "19.3 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					x = "0.2 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					y = "0.2 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				};
				class ListboxGroups: RscTree
				{
					expandOnDoubleclick = 0;
					h = "14.7 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					idc = 9877;
					multiselectEnabled = 0;
					w = "19.1 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					x = "0.3 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					y = "1.7 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				};
				class ListboxPlayers: RscListNBox
				{
					colorPicture[] = {1, 1, 1, 1};
					colorPictureDisabled[] = {1, 1, 1, 0.5};
					colorPictureSelected[] = {1, 1, 1, 1};
					colorSelect2[] = {0.95, 0.95, 0.95, 1};
					colorSelectBackground[] = {1, 1, 1, 0.25};
					colorSelectBackground2[] = {1, 1, 1, 0.25};
					colorText[] = {1, 1, 1, 1};
					columns[] = {0, 0.05, 0.5};
					h = "14.7 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					idc = 9880;
					w = "4 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					x = "-4.1 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					y = "1.7 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				};
				class TabButtonGroups: RscButton
				{
					h = "1.3 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					idc = 9981;
					text = "GROUPS";
					w = "9.5 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					x = "0.3 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					y = "0.3 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				};
				class TabButtonPlayers: RscButton
				{
					h = "1.3 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					idc = 9983;
					text = "PLAYERS";
					w = "9.5 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					x = "9.9 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					y = "0.3 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				};
			};
		};
		class SectionManage: RscControlsGroupNoScrollbars
		{
			h = "16.7 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = 10677;
			w = "19.7 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			x = "19.9 * 					(			((safezoneW / safezoneH) min 1.2) / 40) + 		(safezoneX + (safezoneW - 					((safezoneW / safezoneH) min 1.2))/2)";
			y = "1.8 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 		(safezoneY + (safezoneH - 					(			((safezoneW / safezoneH) min 1.2) / 1.2))/2)";
			class controls
			{
				class BackgroundGroupName: RscText
				{
					colorBackground[] = {0, 0, 0, 1};
					colorText[] = {1, 1, 1, 1};
					h = "1.5 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					idc = 9381;
					sizeEx = "1.05 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					w = "16.3 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					x = "1.7 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					y = "0.2 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				};
				class BackgroundManage: RscText
				{
					colorBackground[] = {0, 0, 0, 0.7};
					h = "16.3 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					idc = 9379;
					w = "19.3 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					x = "0.2 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					y = "0.2 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				};
				class CheckboxPrivate: RscCheckBox
				{
					h = "1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					idc = 11177;
					tooltip = "If a group is private, only players with an invitation will be able to join it";
					w = "1 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					x = "3.9 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					y = "5.9 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				};
				class EditGroupName: RscEdit
				{
					colorText[] = {1, 1, 1, 1};
					font = "RobotoCondensedLight";
					h = "1.26 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					idc = 9777;
					maxChars = 20;
					shadow = 0;
					sizeEx = "1.3 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					style = "0x02 + 0x200";
					text = "Alpha 1-2";
					tooltip = "Edit group name";
					w = "16.07 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					x = "1.83 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					y = "0.35 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				};
				class GroupIcon: RscPictureKeepAspect
				{
					color[] = {1, 1, 1, 1};
					colorActive[] = {1, 1, 1, 0.4};
					h = "5.1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					idc = 9577;
					text = "\A3\Ui_f\data\GUI\Cfg\UnitInsignia\bi_ca.paa";
					w = "7 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					x = "12.3 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					y = "1.9 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				};
				class ListboxManage: RscListNBox
				{
					colorPicture[] = {1, 1, 1, 1};
					colorPictureDisabled[] = {1, 1, 1, 0.5};
					colorPictureSelected[] = {1, 1, 1, 1};
					colorSelect2[] = {0.95, 0.95, 0.95, 1};
					colorSelectBackground[] = {1, 1, 1, 0.25};
					colorSelectBackground2[] = {1, 1, 1, 0.25};
					colorText[] = {0, 0, 0, 1};
					columns[] = {0, 0.05, 0.5};
					h = "9.1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					idc = 9878;
					w = "19.1 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					x = "0.3 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					y = "7.3 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				};
				class PictureSide: RscPicture
				{
					h = "1.5 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					idc = 9578;
					text = "#(argb,8,8,3)color(0,0,1,0.6)";
					w = "1.5 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					x = "0.2 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					y = "0.2 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				};
				class TextPlayerCount: RscText
				{
					colorBackground[] = {0, 0, 0, 0.4};
					colorText[] = {1, 1, 1, 1};
					h = "1.5 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					idc = 9384;
					sizeEx = "1.2 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					style = 2;
					text = "6";
					tooltip = "Numbers of players in the group";
					w = "1.5 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					x = "18 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					y = "0.2 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				};
				class TextPlayerName: RscText
				{
					colorBackground[] = {0.6, 0.6, 0.6, 0.6};
					colorText[] = {0, 0, 0, 1};
					h = "1.2 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					idc = 9380;
					shadow = 0;
					sizeEx = "0.9 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					style = 1;
					text = "You";
					w = "3.4 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					x = "0.4 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					y = "1.9 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				};
				class TextPlayerNameFill: RscText
				{
					colorBackground[] = {0.4, 0.4, 0.4, 0.6};
					h = "1.2 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					idc = 9387;
					shadow = 0;
					style = 0;
					w = "8.3 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					x = "3.8 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					y = "1.9 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				};
				class TextPlayerScore: RscText
				{
					colorBackground[] = {0.6, 0.6, 0.6, 0.6};
					colorText[] = {0, 0, 0, 1};
					h = "1.2 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					idc = 9386;
					shadow = 0;
					sizeEx = "0.9 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					style = 1;
					text = "Score";
					w = "3.4 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					x = "0.4 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					y = "4.5 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				};
				class TextPlayerScoreFill: RscText
				{
					colorBackground[] = {0.4, 0.4, 0.4, 0.6};
					h = "1.2 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					idc = 9389;
					shadow = 0;
					style = 0;
					w = "8.3 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					x = "3.8 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					y = "4.5 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				};
				class TextPlayerSide: RscText
				{
					colorBackground[] = {0.6, 0.6, 0.6, 0.6};
					colorText[] = {0, 0, 0, 1};
					h = "1.2 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					idc = 9383;
					shadow = 0;
					sizeEx = "0.9 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					style = 1;
					text = "Side";
					w = "3.4 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					x = "0.4 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					y = "3.2 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				};
				class TextPlayerSideFill: RscText
				{
					colorBackground[] = {0.4, 0.4, 0.4, 0.6};
					h = "1.2 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					idc = 9388;
					shadow = 0;
					style = 0;
					w = "8.3 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					x = "3.8 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					y = "3.2 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				};
				class TextPrivate: RscText
				{
					colorBackground[] = {0.6, 0.6, 0.6, 0.6};
					colorText[] = {0, 0, 0, 1};
					h = "1.2 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					idc = 9390;
					shadow = 0;
					sizeEx = "0.9 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					style = 1;
					text = "Private";
					w = "3.4 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					x = "0.4 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					y = "5.8 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				};
			};
		};
	};
	class controlsBackground
	{
		class MouseArea: RscText
		{
			h = "safezoneH";
			idc = 999;
			style = 16;
			w = "safezoneWAbs";
			x = "safezoneXAbs";
			y = "safezoneY";
		};
	};
};
