class RscDisplayGear
{
	emptyEq = "\A3\ui_f\data\gui\rsc\rscdisplaygear\ui_gear_eq_gs.paa";
	emptyGun = "\A3\ui_f\data\gui\rsc\rscdisplaygear\ui_gear_gun_gs.paa";
	emptyHGun = "\A3\ui_f\data\gui\rsc\rscdisplaygear\ui_gear_hgun_gs.paa";
	emptyHGunMag = "\A3\ui_f\data\gui\rsc\rscdisplaygear\ui_gear_hgunmag_gs.paa";
	emptyMag = "\A3\ui_f\data\gui\rsc\rscdisplaygear\ui_gear_mag_gs.paa";
	emptyMag2 = "\A3\ui_f\data\gui\rsc\rscdisplaygear\ui_gear_mag2_gs.paa";
	emptySec = "\A3\ui_f\data\gui\rsc\rscdisplaygear\ui_gear_sec_gs.paa";
	enableDisplay = 1;
	idd = 106;
	movingEnable = 1;
	onLoad = "if (isNil('IGUI_GEAR_activeFilter')) then { IGUI_GEAR_activeFilter = 0;}; private ['_dummy']; _dummy = [_this,'initDialog'] call compile preprocessFile	'\A3\ui_f\scripts\handleGear.sqf'; _dummy = [_this,'onLoad'] execVM	'\A3\ui_f\scripts\handleGear.sqf'; _dummy;";
	class controls
	{
		class Available_items_Text: RscText
		{
			h = 0.029412;
			idc = 156;
			w = 0.389709;
			x = 0.0433014;
			y = 0.0526966;
		};
		class BagItemsGroup: RscControlsGroup
		{
			color[] = {1, 1, 1, 1};
			colorBackground[] = {1, 1, 1, 1};
			colorBackgroundSelected[] = {1, 1, 1, 1};
			colorFocused[] = {1, 1, 1, 1};
			gunH = 0.15;
			gunW = 0.113;
			h = 0.776;
			idc = 159;
			magH = 0.074;
			magW = 0.055;
			soundClick[] = {"", 0.1, 1};
			soundDoubleClick[] = {"", 0.1, 1};
			soundPush[] = {"", 0.1, 1};
			spacing = 0.002;
			text = "";
			w = 0.463;
			weaponH = 0.15;
			weaponW = 0.226;
			x = 0.502;
			y = 0.09;
			class Controls {};
			class HScrollbar: HScrollbar
			{
				color[] = {1, 1, 1, 0};
				height = 0.001;
			};
			class ScrollBar: ScrollBar {};
			class VScrollbar: VScrollbar
			{
				autoScrollDelay = 5;
				autoScrollRewind = 0;
				autoScrollSpeed = -1;
				color[] = {1, 1, 1, 0};
				width = 0.001;
			};
		};
		class Break_7: RscLineBreak {};
		class ButtonClose: RscIGUIShortcutButton
		{
			idc = 2;
			shortcuts[] = {"0x00050000 + 1"};
			text = "Close";
			x = 0.0392216;
			y = 0.897066;
		};
		class ButtonCloseBag: RscIGUIShortcutButton
		{
			idc = 158;
			shortcuts[] = {"0x00050000 + 2"};
			text = "Close bag";
			x = 0.554743;
			y = 0.897067;
		};
		class ButtonContinue: RscIGUIShortcutButton
		{
			default = 1;
			idc = 1;
			shortcuts[] = {"0x00050000 + 0", 28, 57, 156};
			x = 0.77615;
			y = 0.897066;
		};
		class ButtonFilters: RscIGUIShortcutButton
		{
			idc = 148;
			shortcuts[] = {"0x00050000 + 3"};
			text = "Filter";
			x = 0.333336;
			y = 0.897067;
		};
		class ButtonOpenBag: RscIGUIShortcutButton
		{
			idc = 157;
			shortcuts[] = {"0x00050000 + 2"};
			text = "Open bag";
			x = 0.554743;
			y = 0.897067;
		};
		class ButtonRearm: RscIGUIShortcutButton
		{
			idc = 132;
			shortcuts[] = {"0x00050000 + 2"};
			text = "Rearm";
			x = 0.554743;
			y = 0.897067;
		};
		class CA_CustomDescription: RscStructuredText
		{
			colorText[] = {0.95, 0.95, 0.95, 1};
			h = 0.152;
			idc = 1106;
			w = 0.458;
			x = 0.0414969;
			y = 0.663641;
			class Attributes
			{
				align = "left";
				color = "#F2F2F2";
				font = "RobotoCondensedBold";
				shadow = 1;
			};
		};
		class CA_Filter_Arrow_Left: RscButton
		{
			colorBackground[] = {1, 1, 1, 0};
			colorBackgroundActive[] = {1, 1, 1, 0};
			colorBackgroundDisabled[] = {1, 1, 1, 0};
			colorDisabled[] = {1, 1, 1, 0};
			colorFocused[] = {1, 1, 1, 0};
			colorShadow[] = {1, 1, 1, 0};
			colorText[] = {1, 1, 1, 0};
			h = 0.075;
			idc = 150;
			text = "";
			w = 0.056;
			x = 0.041;
			y = 0.545098;
		};
		class CA_Filter_Arrow_Right: RscButton
		{
			colorBackground[] = {1, 1, 1, 0};
			colorBackgroundActive[] = {1, 1, 1, 0};
			colorBackgroundDisabled[] = {1, 1, 1, 0};
			colorDisabled[] = {1, 1, 1, 0};
			colorFocused[] = {1, 1, 1, 0};
			colorShadow[] = {1, 1, 1, 0};
			colorText[] = {1, 1, 1, 0};
			h = 0.075;
			idc = 151;
			text = "";
			w = 0.056;
			x = 0.443;
			y = 0.545098;
		};
		class CA_Filter_Icon: RscPicture
		{
			h = 0.075;
			idc = 148;
			style = "0x30 + 0x800";
			text = "\A3\ui_f\data\gui\rsc\rscdisplaygear\gui\rsc\rscdisplaygear\igui_gear_filter_1_ca.paa";
			w = 0.458;
			x = 0.04;
			y = 0.544098;
		};
		class CA_Filter_Icon1: RscButton
		{
			colorBackground[] = {1, 1, 1, 0};
			colorBackgroundActive[] = {1, 1, 1, 0};
			colorBackgroundDisabled[] = {1, 1, 1, 0};
			colorDisabled[] = {1, 1, 1, 0};
			colorFocused[] = {1, 1, 1, 0};
			colorShadow[] = {1, 1, 1, 0};
			colorText[] = {1, 1, 1, 0};
			h = 0.075;
			idc = 149;
			text = "";
			w = 0.341;
			x = 0.099;
			y = 0.545098;
		};
		class CA_Filter_Left_Icon: RscPicture
		{
			h = 0.075;
			idc = 1301;
			style = "0x30 + 0x800";
			text = "\A3\ui_f\data\gui\rsccommon\rschtml\arrow_left_ca.paa";
			w = 0.036;
			x = 0.05;
			y = 0.545098;
		};
		class CA_Filter_Right_Icon: RscPicture
		{
			h = 0.075;
			idc = 1302;
			style = "0x30 + 0x800";
			text = "\A3\ui_f\data\gui\rsccommon\rschtml\arrow_right_ca.paa";
			w = 0.036;
			x = 0.453;
			y = 0.545098;
		};
		class CA_Item_Picture: RscPicture
		{
			h = 0.104575;
			idc = 1104;
			style = "0x30 + 0x800";
			text = "";
			w = 0.156863;
			x = 0.330883;
			y = 0.785541;
		};
		class CA_ItemName: Available_items_Text
		{
			idc = 1101;
			text = "Gear of the unit:";
			x = 0.0416704;
			y = 0.627451;
		};
		class CA_Money: RscText
		{
			idc = 1102;
			show = 0;
			style = 1;
			text = "Money:";
			w = 0.228;
			x = -2.50409;
			y = -2.85784;
		};
		class CA_Money_Value: RscText
		{
			idc = 1103;
			text = "0";
			w = 0.228;
			x = -2.72794;
			y = -2.85784;
		};
		class G_GearItems: RscControlsGroup
		{
			h = 0.776;
			idc = 160;
			w = 0.463;
			x = 0.502;
			y = 0.09;
			class Controls
			{
				class CA_Gear_slot_handgun: CA_Gear_slot_primary
				{
					h = 0.15;
					idc = 121;
					w = 0.113;
					x = "0.560 - 0.502";
					y = "0.551 - 0.09";
				};
				class CA_Gear_slot_handgun_item1: CA_Gear_slot_item1
				{
					h = 0.074;
					idc = 122;
					w = 0.055;
					x = "0.674 - 0.502";
					y = "0.551 - 0.09";
				};
				class CA_Gear_slot_handgun_item2: CA_Gear_slot_handgun_item1
				{
					idc = 123;
					x = "0.733 - 0.502";
					y = "0.551 - 0.09";
				};
				class CA_Gear_slot_handgun_item3: CA_Gear_slot_handgun_item1
				{
					idc = 124;
					x = "0.790 - 0.502";
				};
				class CA_Gear_slot_handgun_item4: CA_Gear_slot_handgun_item1
				{
					idc = 125;
					x = "0.847 - 0.502";
				};
				class CA_Gear_slot_handgun_item5: CA_Gear_slot_handgun_item1
				{
					idc = 126;
					x = "0.674 - 0.502";
					y = "0.628 - 0.09";
				};
				class CA_Gear_slot_handgun_item6: CA_Gear_slot_handgun_item5
				{
					idc = 127;
					x = "0.733 - 0.502";
					y = "0.628 - 0.09";
				};
				class CA_Gear_slot_handgun_item7: CA_Gear_slot_handgun_item5
				{
					idc = 128;
					x = "0.790 - 0.502";
					y = "0.628 - 0.09";
				};
				class CA_Gear_slot_handgun_item8: CA_Gear_slot_handgun_item5
				{
					idc = 129;
					x = "0.847 - 0.502";
					y = "0.628 - 0.09";
				};
				class CA_Gear_slot_inventory1: CA_Gear_slot_special1
				{
					h = 0.074;
					idc = 134;
					w = 0.055;
					x = "0.560 - 0.502";
					y = "0.705 - 0.09";
				};
				class CA_Gear_slot_inventory10: CA_Gear_slot_inventory7
				{
					idc = 143;
					x = "0.733 - 0.502";
					y = "0.782 - 0.09";
				};
				class CA_Gear_slot_inventory11: CA_Gear_slot_inventory7
				{
					idc = 144;
					x = "0.790 - 0.502";
					y = "0.782 - 0.09";
				};
				class CA_Gear_slot_inventory12: CA_Gear_slot_inventory7
				{
					idc = 145;
					x = "0.847 - 0.502";
					y = "0.782 - 0.09";
				};
				class CA_Gear_slot_inventory13: CA_Gear_slot_inventory7
				{
					idc = 1122;
					x = 10.1;
					y = 10.1;
				};
				class CA_Gear_slot_inventory2: CA_Gear_slot_inventory1
				{
					idc = 135;
					x = "0.617 - 0.502";
					y = "0.705 - 0.09";
				};
				class CA_Gear_slot_inventory3: CA_Gear_slot_inventory1
				{
					idc = 136;
					x = "0.674 - 0.502";
					y = "0.705 - 0.09";
				};
				class CA_Gear_slot_inventory4: CA_Gear_slot_inventory1
				{
					idc = 137;
					x = "0.733 - 0.502";
					y = "0.705 - 0.09";
				};
				class CA_Gear_slot_inventory5: CA_Gear_slot_inventory1
				{
					idc = 138;
					x = "0.790 - 0.502";
					y = "0.705 - 0.09";
				};
				class CA_Gear_slot_inventory6: CA_Gear_slot_inventory1
				{
					idc = 139;
					x = "0.847 - 0.502";
					y = "0.705 - 0.09";
				};
				class CA_Gear_slot_inventory7: CA_Gear_slot_inventory1
				{
					idc = 140;
					x = "0.560 - 0.502";
					y = "0.782 - 0.09";
				};
				class CA_Gear_slot_inventory8: CA_Gear_slot_inventory7
				{
					idc = 141;
					x = "0.617 - 0.502";
					y = "0.782 - 0.09";
				};
				class CA_Gear_slot_inventory9: CA_Gear_slot_inventory7
				{
					idc = 142;
					x = "0.674 - 0.502";
					y = "0.782 - 0.09";
				};
				class CA_Gear_slot_item1: CA_Gear_slot_primary
				{
					h = 0.074;
					idc = 109;
					w = 0.055;
					x = "0.790 - 0.502";
					y = "0.244 - 0.09";
				};
				class CA_Gear_slot_item10: CA_Gear_slot_item7
				{
					idc = 118;
					x = "0.790 - 0.502";
					y = "0.474 - 0.09";
				};
				class CA_Gear_slot_item11: CA_Gear_slot_item7
				{
					idc = 119;
					x = "0.847 - 0.502";
					y = "0.474 - 0.09";
				};
				class CA_Gear_slot_item12: CA_Gear_slot_item7
				{
					idc = 120;
					x = "0.904366 - 0.502";
					y = "0.474 - 0.09";
				};
				class CA_Gear_slot_item2: CA_Gear_slot_item1
				{
					idc = 110;
					x = "0.847 - 0.502";
					y = "0.244 - 0.09";
				};
				class CA_Gear_slot_item3: CA_Gear_slot_item1
				{
					idc = 111;
					x = "0.904366 - 0.502";
					y = "0.244 - 0.09";
				};
				class CA_Gear_slot_item4: CA_Gear_slot_item1
				{
					idc = 112;
					x = "0.790 - 0.502";
					y = "0.321 - 0.09";
				};
				class CA_Gear_slot_item5: CA_Gear_slot_item1
				{
					idc = 113;
					x = "0.847 - 0.502";
					y = "0.321 - 0.09";
				};
				class CA_Gear_slot_item6: CA_Gear_slot_item1
				{
					idc = 114;
					x = "0.904366 - 0.502";
					y = "0.321 - 0.09";
				};
				class CA_Gear_slot_item7: CA_Gear_slot_item1
				{
					idc = 115;
					x = "0.790 - 0.502";
					y = "0.398 - 0.09";
				};
				class CA_Gear_slot_item8: CA_Gear_slot_item7
				{
					idc = 116;
					x = "0.847 - 0.502";
					y = "0.398 - 0.09";
				};
				class CA_Gear_slot_item9: CA_Gear_slot_item7
				{
					idc = 117;
					x = "0.904366 - 0.502";
					y = "0.398 - 0.09";
				};
				class CA_Gear_slot_primary: RscActiveText
				{
					canDrag = 1;
					color[] = {1, 1, 1, 1};
					colorBackground[] = {1, 1, 1, 1};
					colorBackgroundSelected[] = {1, 1, 1, 1};
					colorFocused[] = {0, 0, 0, 0};
					h = 0.15;
					idc = 107;
					soundDoubleClick[] = {"", 0.1, 1};
					style = "0x30 + 0x800";
					w = 0.286;
					x = "0.502 - 0.502";
					y = "0.244 - 0.09";
				};
				class CA_Gear_slot_secondary: CA_Gear_slot_primary
				{
					idc = 108;
					y = "0.398 -0.09";
				};
				class CA_Gear_slot_special1: CA_Gear_slot_item1
				{
					h = 0.15;
					idc = 130;
					w = 0.113;
					x = "0.502 - 0.502";
					y = "0.09 - 0.09";
				};
				class CA_Gear_slot_special2: CA_Gear_slot_special1
				{
					h = 0.15;
					idc = 131;
					w = 0.113;
					x = "0.847 - 0.502";
					y = "0.09 - 0.09";
				};
			};
			class HScrollbar: HScrollbar
			{
				color[] = {1, 1, 1, 0};
				height = 0.001;
			};
			class VScrollbar: VScrollbar
			{
				autoScrollDelay = 5;
				autoScrollRewind = 0;
				autoScrollSpeed = -1;
				color[] = {1, 1, 1, 0};
				width = 0.001;
			};
		};
		class Gear_Title: CA_Title
		{
			idc = 1001;
			sizeEx = "(			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1)";
			style = 0;
			text = "Gear";
			x = 0.047634;
			y = -0.00102941;
		};
		class ListboxArrows: RscControlsGroup
		{
			h = 0.449;
			idc = 155;
			w = 0.48;
			x = 0.04;
			y = 0.0892447;
			class Controls
			{
				class Available_items: RscIGUIListNBox
				{
					canDrag = 1;
					colorPlayerItem[] = {1, 1, 1, 1};
					columns[] = {0.075, 0.175, 0.81, 0.67};
					drawSideArrows = 1;
					h = 0.449;
					idc = 105;
					idcLeft = 146;
					idcRight = 147;
					onKeyDown = "private [""_dummy""]; _dummy = [_this,""onKeyDown"",0,107,0,107] execVM	""\A3\ui_f\scripts\handleGear.sqf""; _dummy;";
					onKillFocus = "private [""_dummy""]; _dummy = [_this,""onKillFocus""] execVM	""\A3\ui_f\scripts\handleGear.sqf""; _dummy;";
					onLBListSelChanged = "private [""_dummy""]; _dummy = [_this,""onLBListSelChanged""] execVM ""\A3\ui_f\scripts\handleGear.sqf""; _dummy;";
					onLBSelChanged = "private [""_dummy""]; _dummy = [_this,""onLBSelChanged""] execVM ""\A3\ui_f\scripts\handleGear.sqf""; _dummy;";
					w = 0.46;
					x = 0;
					y = 0;
				};
				class CA_B_Add: RscGearShortcutButton
				{
					idc = 146;
					onButtonClick = "private [""_dummy""]; _dummy = [_this,""onLBListSelChanged""] execVM ""\A3\ui_f\scripts\handleGear.sqf""; _dummy;";
					onSetFocus = "private [""_dummy""]; _dummy = [_this,""onFocus""] execVM	""\A3\ui_f\scripts\handleGear.sqf""; _dummy;";
					style = 2048;
					text = "&lt;";
					x = -2;
				};
				class CA_B_Remove: CA_B_Add
				{
					idc = 147;
					onButtonClick = "private [""_dummy""]; _dummy = [_this,""onLBListSelChanged""] execVM ""\A3\ui_f\scripts\handleGear.sqf""; _dummy;";
					onSetFocus = "private [""_dummy""]; _dummy = [_this,""onFocus""] execVM ""\A3\ui_f\scripts\handleGear.sqf""; _dummy;";
					text = ">";
					x = -2;
				};
			};
			class HScrollbar: HScrollbar
			{
				color[] = {1, 1, 1, 0};
				height = 0.001;
			};
			class VScrollbar: VScrollbar
			{
				autoScrollDelay = 5;
				autoScrollRewind = 0;
				autoScrollSpeed = -1;
				color[] = {1, 1, 1, 0};
				width = 0.001;
			};
		};
		class Unit_Title: RscText
		{
			idc = 101;
			style = 2;
			w = 0.456;
			x = 0.502419;
			y = 0.0492156;
		};
	};
	class ControlsBackground
	{
		class Mainback: RscPicture
		{
			colorText[] = {"(profilenamespace getvariable ['GUI_BCG_RGB_R',0.13])", "(profilenamespace getvariable ['GUI_BCG_RGB_G',0.54])", "(profilenamespace getvariable ['GUI_BCG_RGB_B',0.21])", 1};
			h = 1.6732;
			idc = 1005;
			moving = 1;
			text = "\A3\ui_f\data\gui\rsc\rscdisplaygear\igui_background_gear_ca.paa";
			w = 1.2549;
			x = 0.04;
			y = 0.01;
		};
	};
	class Filters
	{
		class All
		{
			image = "\A3\ui_f\data\gui\rsc\rscdisplaygear\igui_gear_filter_1_ca.paa";
			mask = -1;
			name = "All";
		};
		class HandGun
		{
			image = "\A3\ui_f\data\gui\rsc\rscdisplaygear\igui_gear_filter_4_ca.paa";
			mask = 18;
			name = "HandGun";
		};
		class Items
		{
			image = "\A3\ui_f\data\gui\rsc\rscdisplaygear\igui_gear_filter_5_ca.paa";
			mask = 135168;
			name = "Items";
		};
		class Primary
		{
			image = "\A3\ui_f\data\gui\rsc\rscdisplaygear\igui_gear_filter_2_ca.paa";
			mask = 769;
			name = "Primary";
		};
		class Secondary
		{
			image = "\A3\ui_f\data\gui\rsc\rscdisplaygear\igui_gear_filter_3_ca.paa";
			mask = 516;
			name = "Secondary";
		};
	};
};
