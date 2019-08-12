class RscDisplayMultiplayerSetup: RscStandardDisplay
{
	civl = "A3\ui_f\data\gui\rsc\RscDisplayMultiplayerSetup\flag_civil_ca.paa";
	civlLocked = "a3\ui_f\data\map\diary\icons\playerbriefciv_ca.paa";
	civlUnlocked = "a3\ui_f\data\map\diary\icons\playerciv_ca.paa";
	colorAssigned[] = {1, 1, 1, 1};
	colorConfirmed[] = {0, 1, 0, 1};
	colorNotAssigned[] = {1, 1, 1, 0.25};
	disabledAllAI = "Enable AI";
	east = "A3\ui_f\data\gui\rsc\RscDisplayMultiplayerSetup\flag_opfor_ca.paa";
	eastLocked = "a3\ui_f\data\map\diary\icons\playerbriefeast_ca.paa";
	eastUnlocked = "a3\ui_f\data\map\diary\icons\playereast_ca.paa";
	enabledAllAI = "Disable AI";
	guer = "A3\ui_f\data\gui\rsc\RscDisplayMultiplayerSetup\flag_indep_ca.paa";
	guerLocked = "a3\ui_f\data\map\diary\icons\playerbriefguer_ca.paa";
	guerUnlocked = "a3\ui_f\data\map\diary\icons\playerguer_ca.paa";
	hostLocked = "Unlock";
	hostUnlocked = "Lock";
	idd = 70;
	logic = "flag_logic";
	logicLocked = "a3\ui_f\data\gui\rsc\rscdisplaymultiplayersetup\logiclocked_ca.paa";
	logicUnlocked = "a3\ui_f\data\gui\rsc\rscdisplaymultiplayersetup\logicunlocked_ca.paa";
	none = "#(argb,8,8,3)color(0,0,0,0)";
	onLoad = "[""onLoad"",_this,""RscDisplayMultiplayerSetup"",'GUI'] call 	(uinamespace getvariable 'BIS_fnc_initDisplay')";
	onUnload = "[""onUnload"",_this,""RscDisplayMultiplayerSetup"",'GUI'] call 	(uinamespace getvariable 'BIS_fnc_initDisplay')";
	scriptName = "RscDisplayMultiplayerSetup";
	scriptPath = "GUI";
	sortDown = "\a3\ui_f\data\gui\rsc\rscdisplaymultiplayer\arrow_down_ca.paa";
	sortUp = "\a3\ui_f\data\gui\rsc\rscdisplaymultiplayer\arrow_up_ca.paa";
	virtLocked = "a3\ui_f\data\map\diary\icons\playerbriefvirtual_ca.paa";
	virtUnlocked = "a3\ui_f\data\map\diary\icons\playervirtual_ca.paa";
	west = "A3\ui_f\data\gui\rsc\RscDisplayMultiplayerSetup\flag_bluefor_ca.paa";
	westLocked = "a3\ui_f\data\map\diary\icons\playerbriefwest_ca.paa";
	westUnlocked = "a3\ui_f\data\map\diary\icons\playerwest_ca.paa";
	class controls
	{
		class AssignRole: RscActiveText
		{
			idc = 127;
			text = "Assign role";
			w = 0.15;
			x = 0.55;
			y = -20;
		};
		class ButtonPing: ButtonPlayers
		{
			h = "0.8 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = 135;
			text = "Ping:";
			w = "5.2 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			x = "safezoneX + (32.8 * 					(			((safezoneW / safezoneH) min 1.2) / 40)) + 1*(safezoneW - 				((safezoneW / safezoneH) min 1.2))";
			y = "6 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 		(safezoneY)";
		};
		class ButtonPlayers: RscButtonTextOnly
		{
			colorFocused[] = {1, 1, 1, 0.5};
			colorFocused2[] = {1, 1, 1, 0.1};
			h = "0.8 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = 133;
			period = 1.2;
			sizeEx = "(			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 0.8)";
			style = 0;
			text = "Players:";
			w = "(13 * 					(			((safezoneW / safezoneH) min 1.2) / 40)) + 0.55*(safezoneW - 				((safezoneW / safezoneH) min 1.2))";
			x = "safezoneX + (19.8 * 					(			((safezoneW / safezoneH) min 1.2) / 40)) + 0.45*(safezoneW - 				((safezoneW / safezoneH) min 1.2))";
			y = "6 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 		(safezoneY)";
		};
		class ButtonSteamWorkshop: RscButtonMenuSteam
		{
			h = "1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = 130;
			text = "Steam Workshop";
			tooltip = "Mission details.";
			w = "6.25 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			x = "safezoneX + SafezoneW - (19.95 * 					(			((safezoneW / safezoneH) min 1.2) / 40))";
			y = "SafezoneY + SafezoneH - (2 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25))";
		};
		class CA_B_Civilian: CA_B_West
		{
			color[] = {"(profilenamespace getvariable ['Map_Civilian_R',0])", "(profilenamespace getvariable ['Map_Civilian_G',1])", "(profilenamespace getvariable ['Map_Civilian_B',1])", 0.75};
			colorActive[] = {"(profilenamespace getvariable ['Map_Civilian_R',0])", "(profilenamespace getvariable ['Map_Civilian_G',1])", "(profilenamespace getvariable ['Map_Civilian_B',1])", 1};
			h = "1.5 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = 107;
			picture = "a3\ui_f\data\gui\rsc\rscdisplaymultiplayersetup\flag_civil_empty_ca.paa";
			sideToggle = "a3\ui_f\data\gui\rsc\rscdisplaymultiplayersetup\flag_civil_ca.paa";
			text = "Civilian";
			w = "3 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			x = "1.45 * 					(			((safezoneW / safezoneH) min 1.2) / 40) + 		(SafezoneX)";
			y = "12.1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 		(safezoneY)";
		};
		class CA_B_East: CA_B_West
		{
			color[] = {"(profilenamespace getvariable ['Map_OPFOR_R',0])", "(profilenamespace getvariable ['Map_OPFOR_G',1])", "(profilenamespace getvariable ['Map_OPFOR_B',1])", 0.75};
			colorActive[] = {"(profilenamespace getvariable ['Map_OPFOR_R',0])", "(profilenamespace getvariable ['Map_OPFOR_G',1])", "(profilenamespace getvariable ['Map_OPFOR_B',1])", 1};
			h = "1.5 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = 105;
			picture = "a3\ui_f\data\gui\rsc\rscdisplaymultiplayersetup\flag_opfor_empty_ca.paa";
			sideToggle = "a3\ui_f\data\gui\rsc\rscdisplaymultiplayersetup\flag_opfor_ca.paa";
			text = "OPFOR";
			w = "3 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			x = "1.45 * 					(			((safezoneW / safezoneH) min 1.2) / 40) + 		(SafezoneX)";
			y = "8.7 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 		(safezoneY)";
		};
		class CA_B_EnableAll: RscButtonMenu
		{
			h = "0.8 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = 117;
			size = "(			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 0.8)";
			w = "6.25 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			x = "13.45 * 					(			((safezoneW / safezoneH) min 1.2) / 40) + 		(SafezoneX) + 0.45*(safezoneW - 				((safezoneW / safezoneH) min 1.2))";
			y = "16.2 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 		(safezoneY) + 0.7*(safezoneH - 				(			((safezoneW / safezoneH) min 1.2) / 1.2))";
		};
		class CA_B_Guerrila: CA_B_West
		{
			color[] = {"(profilenamespace getvariable ['Map_Independent_R',0])", "(profilenamespace getvariable ['Map_Independent_G',1])", "(profilenamespace getvariable ['Map_Independent_B',1])", 0.75};
			colorActive[] = {"(profilenamespace getvariable ['Map_Independent_R',0])", "(profilenamespace getvariable ['Map_Independent_G',1])", "(profilenamespace getvariable ['Map_Independent_B',1])", 1};
			h = "1.5 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = 106;
			picture = "a3\ui_f\data\gui\rsc\rscdisplaymultiplayersetup\flag_indep_empty_ca.paa";
			sideToggle = "a3\ui_f\data\gui\rsc\rscdisplaymultiplayersetup\flag_indep_ca.paa";
			text = "Independent";
			w = "3 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			x = "1.45 * 					(			((safezoneW / safezoneH) min 1.2) / 40) + 		(SafezoneX)";
			y = "10.4 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 		(safezoneY)";
		};
		class CA_B_Kick: RscButtonMenu
		{
			h = "0.8 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = 116;
			size = "(			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 0.8)";
			text = "Kick Off";
			w = "6.25 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			x = "safezoneX + SafezoneW - (7.45 * 					(			((safezoneW / safezoneH) min 1.2) / 40))";
			y = "SafezoneY + SafezoneH - (3.1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25))";
		};
		class CA_B_Lock: RscButtonMenu
		{
			h = "1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = 118;
			w = "6.25 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			x = "safezoneX + SafezoneW - (13.6 * 					(			((safezoneW / safezoneH) min 1.2) / 40))";
			y = "SafezoneY + SafezoneH - (2 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25))";
		};
		class CA_B_Logic: CA_B_West
		{
			color[] = {1, 1, 1, 0.75};
			colorActive[] = {1, 1, 1, 1};
			h = "1.5 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = 131;
			picture = "a3\ui_f\data\gui\rsc\rscdisplaymultiplayersetup\flag_logic_empty_ca.paa";
			sideToggle = "a3\ui_f\data\gui\rsc\rscdisplaymultiplayersetup\flag_logic_ca.paa";
			text = "Virtual";
			w = "3 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			x = "1.45 * 					(			((safezoneW / safezoneH) min 1.2) / 40) + 		(SafezoneX)";
			y = "13.8 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 		(safezoneY)";
		};
		class CA_B_Params: RscButtonMenu
		{
			h = "0.8 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = 128;
			shortcuts[] = {"0x00050000 + 2"};
			size = "(			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 0.8)";
			text = "Parameters";
			w = "5 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			x = "(25.9 * 					(			((safezoneW / safezoneH) min 1.2) / 40)) + 		(SafezoneX) + 1*(safezoneW - 				((safezoneW / safezoneH) min 1.2))";
			y = "4.7 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 		(safezoneY)";
		};
		class CA_B_Virtual: CA_B_West
		{
			color[] = {1, 1, 1, 0.75};
			colorActive[] = {1, 1, 1, 1};
			h = "1.5 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = 132;
			picture = "a3\ui_f\data\gui\rsc\rscdisplaymultiplayersetup\flag_virtual_empty_ca.paa";
			show = 0;
			sideToggle = "a3\ui_f\data\gui\rsc\rscdisplaymultiplayersetup\flag_virtual_ca.paa";
			text = "Virtual";
			w = "3 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			x = "1.45 * 					(			((safezoneW / safezoneH) min 1.2) / 40) + 		(SafezoneX)";
			y = "13.8 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 		(safezoneY)";
		};
		class CA_B_West: RscActiveText
		{
			color[] = {"(profilenamespace getvariable ['Map_BLUFOR_R',0])", "(profilenamespace getvariable ['Map_BLUFOR_G',1])", "(profilenamespace getvariable ['Map_BLUFOR_B',1])", 0.75};
			colorActive[] = {"(profilenamespace getvariable ['Map_BLUFOR_R',0])", "(profilenamespace getvariable ['Map_BLUFOR_G',1])", "(profilenamespace getvariable ['Map_BLUFOR_B',1])", 1};
			colorDisabled[] = {1, 1, 1, 0};
			colorShade[] = {1, 1, 1, 1};
			colorText[] = {1, 1, 1, 1};
			h = "1.5 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = 104;
			picture = "\a3\ui_f\data\gui\rsc\rscdisplaymultiplayersetup\flag_bluefor_empty_ca.paa";
			pictureHeight = 1;
			pictureWidth = 1;
			sideDisabled = "a3\ui_f\data\gui\rsc\rscdisplaymultiplayersetup\flag_none_ca.paa";
			sideToggle = "a3\ui_f\data\gui\rsc\rscdisplaymultiplayersetup\flag_bluefor_ca.paa";
			text = "BLUFOR";
			textHeight = 0.38;
			w = "3 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			x = "1.45 * 					(			((safezoneW / safezoneH) min 1.2) / 40) + 		(SafezoneX)";
			y = "7 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 		(safezoneY)";
		};
		class CA_ButtonCancel: RscButtonMenuCancel
		{
			h = "1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			text = "Back";
			w = "6.25 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			x = "1 * 					(			((safezoneW / safezoneH) min 1.2) / 40) + 		(SafezoneX)";
			y = "SafezoneY + SafezoneH - (2 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25))";
		};
		class CA_ButtonContinue: RscButtonMenuOK
		{
			h = "1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			w = "6.25 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			x = "safezoneX + SafezoneW - (7.25 * 					(			((safezoneW / safezoneH) min 1.2) / 40))";
			y = "SafezoneY + SafezoneH - (2 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25))";
		};
		class CA_TextDescription: RscText
		{
			h = "0.8 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = 1004;
			sizeEx = "(			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 0.8)";
			text = "Description:";
			w = "4.5 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			x = "1.2 * 					(			((safezoneW / safezoneH) min 1.2) / 40) + 		(SafezoneX)";
			y = "3.9 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 		(safezoneY)";
		};
		class CA_TextVotingTimeLeft: RscTitle
		{
			h = "1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = 121;
			style = 0;
			w = "6 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			x = "17 * 					(			((safezoneW / safezoneH) min 1.2) / 40) + 		(SafezoneX) + 0.45*(safezoneW - 				((safezoneW / safezoneH) min 1.2))";
			y = "1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 		(safezoneY)";
		};
		class CA_ValueDescription: RscText
		{
			h = "0.8 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = 103;
			linespacing = 1;
			sizeEx = "(			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 0.8)";
			style = "0x10 + 0x200";
			w = "(25.2 * 					(			((safezoneW / safezoneH) min 1.2) / 40)) + 1*(safezoneW - 				((safezoneW / safezoneH) min 1.2))";
			x = "5.7 * 					(			((safezoneW / safezoneH) min 1.2) / 40) + 		(SafezoneX)";
			y = "3.9 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 		(safezoneY)";
		};
		class CA_ValuePool: RscListNBox
		{
			canDrag = 1;
			colorPictureSelected[] = {1, 1, 1, 1};
			colorSelectBackground[] = {1, 1, 1, 0.3};
			colorSelectBackground2[] = {1, 1, 1, 0.3};
			columns[] = {"safezoneX + (19.8 * 					(			((safezoneW / safezoneH) min 1.2) / 40)) + 0.45*(safezoneW - 				((safezoneW / safezoneH) min 1.2))", "safezoneX + (32.8 * 					(			((safezoneW / safezoneH) min 1.2) / 40)) + 1*(safezoneW - 				((safezoneW / safezoneH) min 1.2))", "safezoneX + (38 * 					(			((safezoneW / safezoneH) min 1.2) / 40)) + 1*(safezoneW - 				((safezoneW / safezoneH) min 1.2))"};
			h = "SafezoneH - (9.9 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25))";
			idc = 114;
			rows = 25;
			sizeEx = "(			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 0.8)";
			w = "(19 * 					(			((safezoneW / safezoneH) min 1.2) / 40)) + 0.55*(safezoneW - 				((safezoneW / safezoneH) min 1.2))";
			x = "safezoneX + (19.8 * 					(			((safezoneW / safezoneH) min 1.2) / 40)) + 0.45*(safezoneW - 				((safezoneW / safezoneH) min 1.2))";
			y = "6.8 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 		(safezoneY)";
			class MuteCheckBoxTemplate: RscCheckBox
			{
				h = "0.8 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				textureChecked = "\A3\Ui_f\data\IGUI\RscIngameUI\RscDisplayChannel\MuteVON_ca.paa";
				textureDisabledChecked = "\A3\Ui_f\data\IGUI\RscIngameUI\RscDisplayChannel\MuteVON_ca.paa";
				textureDisabledUnchecked = "\A3\Ui_f\data\IGUI\RscIngameUI\RscDisplayChannel\MuteVON_crossed_ca.paa";
				textureFocusedChecked = "\A3\Ui_f\data\IGUI\RscIngameUI\RscDisplayChannel\MuteVON_ca.paa";
				textureFocusedUnchecked = "\A3\Ui_f\data\IGUI\RscIngameUI\RscDisplayChannel\MuteVON_crossed_ca.paa";
				textureHoverChecked = "\A3\Ui_f\data\IGUI\RscIngameUI\RscDisplayChannel\MuteVON_ca.paa";
				textureHoverUnchecked = "\A3\Ui_f\data\IGUI\RscIngameUI\RscDisplayChannel\MuteVON_crossed_ca.paa";
				texturePressedChecked = "\A3\Ui_f\data\IGUI\RscIngameUI\RscDisplayChannel\MuteVON_ca.paa";
				texturePressedUnchecked = "\A3\Ui_f\data\IGUI\RscIngameUI\RscDisplayChannel\MuteVON_crossed_ca.paa";
				textureUnchecked = "\A3\Ui_f\data\IGUI\RscIngameUI\RscDisplayChannel\MuteVON_crossed_ca.paa";
				w = "0.8 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
				x = 0;
				y = 0;
			};
		};
		class CA_ValueRoles: RscListBox
		{
			colorAI[] = {1, 0, 0, 1};
			colorNobody[] = {1, 1, 1, 0.25};
			colorPlayer[] = {1, 1, 0, 1};
			colorSelectBackground[] = {1, 1, 1, 0.3};
			colorSelectBackground2[] = {1, 1, 1, 0.3};
			disabledAI = "a3\ui_f\data\gui\rsc\rscdisplaymultiplayersetup\disabledai_ca.paa";
			enabledAI = "a3\ui_f\data\gui\rsc\rscdisplaymultiplayersetup\enabledai_ca.paa";
			h = "(9.4 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)) + 0.7*(safezoneH - 				(			((safezoneW / safezoneH) min 1.2) / 1.2))";
			idc = 109;
			rowHeight = "1.75 * 		(			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1)";
			w = "(14.9 * 					(			((safezoneW / safezoneH) min 1.2) / 40)) + 0.45*(safezoneW - 				((safezoneW / safezoneH) min 1.2))";
			x = "4.8 * 					(			((safezoneW / safezoneH) min 1.2) / 40) + 		(SafezoneX)";
			y = "6.8 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 		(safezoneY)";
		};
		class MuteAll: RscCheckBox
		{
			h = "0.8 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = 137;
			textureChecked = "\A3\Ui_f\data\IGUI\RscIngameUI\RscDisplayChannel\MuteVON_ca.paa";
			textureDisabledChecked = "\A3\Ui_f\data\IGUI\RscIngameUI\RscDisplayChannel\MuteVON_ca.paa";
			textureDisabledUnchecked = "\A3\Ui_f\data\IGUI\RscIngameUI\RscDisplayChannel\MuteVON_crossed_ca.paa";
			textureFocusedChecked = "\A3\Ui_f\data\IGUI\RscIngameUI\RscDisplayChannel\MuteVON_ca.paa";
			textureFocusedUnchecked = "\A3\Ui_f\data\IGUI\RscIngameUI\RscDisplayChannel\MuteVON_crossed_ca.paa";
			textureHoverChecked = "\A3\Ui_f\data\IGUI\RscIngameUI\RscDisplayChannel\MuteVON_ca.paa";
			textureHoverUnchecked = "\A3\Ui_f\data\IGUI\RscIngameUI\RscDisplayChannel\MuteVON_crossed_ca.paa";
			texturePressedChecked = "\A3\Ui_f\data\IGUI\RscIngameUI\RscDisplayChannel\MuteVON_ca.paa";
			texturePressedUnchecked = "\A3\Ui_f\data\IGUI\RscIngameUI\RscDisplayChannel\MuteVON_crossed_ca.paa";
			textureUnchecked = "\A3\Ui_f\data\IGUI\RscIngameUI\RscDisplayChannel\MuteVON_crossed_ca.paa";
			w = "0.8 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			x = "safezoneX + (38 * 					(			((safezoneW / safezoneH) min 1.2) / 40)) + 1*(safezoneW - 				((safezoneW / safezoneH) min 1.2))";
			y = "6 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 		(safezoneY)";
		};
		class PartyGUI: RscActiveText
		{
			idc = 126;
			text = "Show party";
			w = 0.15;
			x = 0.4;
			y = -20;
		};
		class PlayersName: RscTitle
		{
			h = "1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = 701;
			shadow = 0;
			style = 1;
			w = "(15 * 					(			((safezoneW / safezoneH) min 1.2) / 40)) + 0.55*(safezoneW - 				((safezoneW / safezoneH) min 1.2))";
			x = "(SafezoneX) + (24 * 					(			((safezoneW / safezoneH) min 1.2) / 40)) + 0.45*(safezoneW - 				((safezoneW / safezoneH) min 1.2))";
			y = "1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 		(safezoneY)";
		};
		class SortPing: RscPicture
		{
			h = "0.8 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = 136;
			text = "\a3\ui_f\data\gui\rsc\rscdisplaymultiplayer\arrow_up_ca.paa";
			w = "0.8 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			x = "safezoneX + (37.2 * 					(			((safezoneW / safezoneH) min 1.2) / 40)) + 1*(safezoneW - 				((safezoneW / safezoneH) min 1.2))";
			y = "6 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 		(safezoneY)";
		};
		class SortPlayers: RscPicture
		{
			h = "0.8 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = 134;
			text = "\a3\ui_f\data\gui\rsc\rscdisplaymultiplayer\arrow_up_ca.paa";
			w = "0.8 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			x = "safezoneX + (32 * 					(			((safezoneW / safezoneH) min 1.2) / 40)) + 1*(safezoneW - 				((safezoneW / safezoneH) min 1.2))";
			y = "6 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 		(safezoneY)";
		};
		class TextIsland: RscText
		{
			h = "0.8 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = 1006;
			sizeEx = "(			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 0.8)";
			text = "Map:";
			w = "4.5 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			x = "1.2 * 					(			((safezoneW / safezoneH) min 1.2) / 40) + 		(SafezoneX)";
			y = "3.1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 		(safezoneY)";
		};
		class TextListedPlayers: RscText
		{
			h = "0.8 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = 1013;
			sizeEx = "(			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 0.8)";
			text = "Listed Players:";
			w = "5.9 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			x = "31.1 * 					(			((safezoneW / safezoneH) min 1.2) / 40) + 		(SafezoneX) + 1*(safezoneW - 				((safezoneW / safezoneH) min 1.2))";
			y = "2.3 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 		(safezoneY)";
		};
		class TextMission: RscText
		{
			h = "0.8 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = 1002;
			sizeEx = "(			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 0.8)";
			text = "Mission:";
			w = "4.5 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			x = "1.2 * 					(			((safezoneW / safezoneH) min 1.2) / 40) + 		(SafezoneX)";
			y = "2.3 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 		(safezoneY)";
		};
		class TextRole: RscText
		{
			colorBackground[] = {0, 0, 0, 1};
			h = "0.8 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = 108;
			sizeEx = "(			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 0.8)";
			text = "Roles for BLUFOR:";
			w = "(14.9 * 					(			((safezoneW / safezoneH) min 1.2) / 40)) + 0.45*(safezoneW - 				((safezoneW / safezoneH) min 1.2))";
			x = "4.8 * 					(			((safezoneW / safezoneH) min 1.2) / 40) + 		(SafezoneX)";
			y = "6 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 		(safezoneY)";
		};
		class TextSide: RscText
		{
			colorBackground[] = {0, 0, 0, 1};
			h = "0.8 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = 1008;
			sizeEx = "(			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 0.8)";
			text = "Side:";
			w = "3.5 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			x = "1.2 * 					(			((safezoneW / safezoneH) min 1.2) / 40) + 		(SafezoneX)";
			y = "6 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 		(safezoneY)";
		};
		class Title: RscTitle
		{
			h = "1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = 1000;
			text = "Role Assignment";
			w = "15 * 					(			((safezoneW / safezoneH) min 1.2) / 40) + 0.45*(safezoneW - 				((safezoneW / safezoneH) min 1.2))";
			x = "1 * 					(			((safezoneW / safezoneH) min 1.2) / 40) + 		(SafezoneX)";
			y = "1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 		(safezoneY)";
		};
		class ValueIsland: RscText
		{
			h = "0.8 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = 102;
			sizeEx = "(			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 0.8)";
			w = "(25.2 * 					(			((safezoneW / safezoneH) min 1.2) / 40)) + 1*(safezoneW - 				((safezoneW / safezoneH) min 1.2))";
			x = "5.7 * 					(			((safezoneW / safezoneH) min 1.2) / 40) + 		(SafezoneX)";
			y = "3.1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 		(safezoneY)";
		};
		class ValueListedPlayers: RscText
		{
			h = "0.8 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = 1015;
			sizeEx = "(			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 0.8)";
			style = 1;
			w = "2 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			x = "37 * 					(			((safezoneW / safezoneH) min 1.2) / 40) + 		(SafezoneX) + 1*(safezoneW - 				((safezoneW / safezoneH) min 1.2))";
			y = "2.3 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 		(safezoneY)";
		};
		class ValueMission: RscTitle
		{
			h = "0.8 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = 101;
			sizeEx = "(			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 0.8)";
			style = 0;
			w = "(25.2 * 					(			((safezoneW / safezoneH) min 1.2) / 40)) + 1*(safezoneW - 				((safezoneW / safezoneH) min 1.2))";
			x = "5.7 * 					(			((safezoneW / safezoneH) min 1.2) / 40) + 		(SafezoneX)";
			y = "2.3 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 		(safezoneY)";
		};
		class Y_GamerCard: RscActiveText
		{
			idc = 125;
			text = "Gamer card";
			w = 0.15;
			x = 0.25;
			y = -20;
		};
	};
	class controlsbackground
	{
		class ChatBackground: RscText
		{
			colorBackground[] = {0, 0, 0, 0.3};
			h = "(5.6 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25))+ 0.3*(safezoneH - 				(			((safezoneW / safezoneH) min 1.2) / 1.2))";
			idc = 1086;
			w = "(18.5 * 					(			((safezoneW / safezoneH) min 1.2) / 40)) + 0.45*(safezoneW - 				((safezoneW / safezoneH) min 1.2))";
			x = "1.2 * 					(			((safezoneW / safezoneH) min 1.2) / 40) + 		(SafezoneX)";
			y = "17.2 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 		(safezoneY) + 0.7*(safezoneH - 				(			((safezoneW / safezoneH) min 1.2) / 1.2))";
		};
		class MainBackground: RscText
		{
			colorBackground[] = {0, 0, 0, 0.7};
			h = "SafezoneH - (4.2 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25))";
			idc = 1081;
			w = "SafezoneW - (2 * 					(			((safezoneW / safezoneH) min 1.2) / 40))";
			x = "1 * 					(			((safezoneW / safezoneH) min 1.2) / 40) + 		(SafezoneX)";
			y = "2.1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 		(safezoneY)";
		};
		class MissionSettingsBackground: RscText
		{
			colorBackground[] = {0, 0, 0, 0.3};
			h = "3.3 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = 1082;
			w = "(29.8 * 					(			((safezoneW / safezoneH) min 1.2) / 40)) + 1*(safezoneW - 				((safezoneW / safezoneH) min 1.2))";
			x = "1.2 * 					(			((safezoneW / safezoneH) min 1.2) / 40) + 		(SafezoneX)";
			y = "2.3 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 		(safezoneY)";
		};
		class NumOfPlayersBackground: RscText
		{
			colorBackground[] = {0, 0, 0, 0.3};
			h = "3.3 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = 1083;
			w = "7.7 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			x = "31.1 * 					(			((safezoneW / safezoneH) min 1.2) / 40) + 		(SafezoneX) + 1*(safezoneW - 				((safezoneW / safezoneH) min 1.2))";
			y = "2.3 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 		(safezoneY)";
		};
		class PlayersPoolBackground: RscText
		{
			colorBackground[] = {0, 0, 0, 0.3};
			h = "SafezoneH - (9 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25))";
			idc = 1088;
			w = "(19 * 					(			((safezoneW / safezoneH) min 1.2) / 40)) + 0.55*(safezoneW - 				((safezoneW / safezoneH) min 1.2))";
			x = "safezoneX + (19.8 * 					(			((safezoneW / safezoneH) min 1.2) / 40)) + 0.45*(safezoneW - 				((safezoneW / safezoneH) min 1.2))";
			y = "6.8 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 		(safezoneY)";
		};
		class PlayersPoolHeaderBackground: RscText
		{
			colorBackground[] = {0, 0, 0, 1};
			h = "0.8 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = 1087;
			w = "(19 * 					(			((safezoneW / safezoneH) min 1.2) / 40)) + 0.55*(safezoneW - 				((safezoneW / safezoneH) min 1.2))";
			x = "safezoneX + (19.8 * 					(			((safezoneW / safezoneH) min 1.2) / 40)) + 0.45*(safezoneW - 				((safezoneW / safezoneH) min 1.2))";
			y = "6 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 		(safezoneY)";
		};
		class RolesBackground: RscText
		{
			colorBackground[] = {0, 0, 0, 0.3};
			h = "(10.3 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)) + 0.7*(safezoneH - 				(			((safezoneW / safezoneH) min 1.2) / 1.2))";
			idc = 1085;
			w = "(14.9 * 					(			((safezoneW / safezoneH) min 1.2) / 40)) + 0.45*(safezoneW - 				((safezoneW / safezoneH) min 1.2))";
			x = "4.8 * 					(			((safezoneW / safezoneH) min 1.2) / 40) + 		(SafezoneX)";
			y = "6.8 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 		(safezoneY)";
		};
		class RscTitleBackground: RscText
		{
			colorBackground[] = {"(profilenamespace getvariable ['GUI_BCG_RGB_R',0.13])", "(profilenamespace getvariable ['GUI_BCG_RGB_G',0.54])", "(profilenamespace getvariable ['GUI_BCG_RGB_B',0.21])", "(profilenamespace getvariable ['GUI_BCG_RGB_A',0.8])"};
			h = "1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = 1080;
			w = "SafezoneW - (2 * 					(			((safezoneW / safezoneH) min 1.2) / 40))";
			x = "1 * 					(			((safezoneW / safezoneH) min 1.2) / 40) + 		(SafezoneX)";
			y = "1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 		(safezoneY)";
		};
		class SideBackground: RscText
		{
			colorBackground[] = {0, 0, 0, 0.3};
			h = "(10.3 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)) + 0.7*(safezoneH - 				(			((safezoneW / safezoneH) min 1.2) / 1.2))";
			idc = 1084;
			w = "(3.5 * 					(			((safezoneW / safezoneH) min 1.2) / 40))";
			x = "1.2 * 					(			((safezoneW / safezoneH) min 1.2) / 40) + 		(SafezoneX)";
			y = "6.8 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 		(safezoneY)";
		};
		class TileGroup: RscControlsGroupNoScrollbars
		{
			h = "safezoneH";
			idc = 115099;
			w = "safezoneWAbs";
			x = "safezoneXAbs";
			y = "safezoneY";
			class Controls
			{
				class Background: RscText
				{
					colorBackground[] = {0, 0, 0, 0.5};
					h = "safezoneH";
					idc = 114999;
					w = "safezoneWAbs";
					x = 0;
					y = 0;
				};
			};
		};
		class Vignette: RscVignette
		{
			idc = 114998;
		};
	};
};
