class RscMapTooltip: RscControlsGroupNoScrollbars
{
	h = "0 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
	idc = 2085;
	onLoad = "[""onLoad"",_this,""RscMapTooltip"",'ContactCommon',0] call 	(uinamespace getvariable 'BIS_fnc_initDisplay')";
	onUnload = "[""onUnload"",_this,""RscMapTooltip"",'ContactCommon',0] call 	(uinamespace getvariable 'BIS_fnc_initDisplay')";
	scriptName = "RscMapTooltip";
	scriptPath = "ContactCommon";
	show = 0;
	w = "12 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
	x = 0;
	y = 0;
	class Controls
	{
		class Antenna0: RscControlsGroupNoScrollbars
		{
			h = "2.1 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = 20860;
			show = 0;
			w = "12 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
			x = 0;
			y = 0;
			class Controls
			{
				class Age: Text
				{
					colorText[] = {1, 1, 1, 0.5};
					font = "RobotoCondensedLight";
					idc = 208602;
					y = "1.0 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				};
				class ButtonMap: RscButton
				{
					h = "2 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					idc = 208604;
					onButtonClick = "with uinamespace do {['antennaMap',_this,''] call RscMapTooltip_script;};";
					period = 0;
					style = "0x02 + 0x30 + 0x800";
					text = "\a3\UI_F_Contact\Data\Common\RscMapCategories\categories_map_ca.paa";
					w = "2 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
					x = 0;
					y = "0.0 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				};
				class ButtonSpectrum: ButtonMap
				{
					idc = 208605;
					text = "\a3\UI_F_Contact\Data\Common\RscMapCategories\categories_spectrum_ca.paa";
				};
				class Text: RscText
				{
					h = "1.0 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					idc = 208601;
					shadow = 0;
					w = 1;
					x = "2.1 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
					y = 0;
				};
				class TextBackground: RscText
				{
					colorBackground[] = {0.14, 0.29, 0.42, 1};
					h = "2.0 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					idc = 208600;
					w = 1;
					x = "2.1 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
					y = 0;
				};
			};
		};
		class Antenna1: Antenna0
		{
			idc = 20861;
		};
		class Antenna2: Antenna0
		{
			idc = 20862;
		};
		class Antenna3: Antenna0
		{
			idc = 20863;
		};
		class Antenna4: Antenna0
		{
			idc = 20864;
		};
		class Antenna5: Antenna0
		{
			idc = 20865;
		};
		class Antenna6: Antenna0
		{
			idc = 20866;
		};
		class Antenna7: Antenna0
		{
			idc = 20867;
		};
		class Antenna8: Antenna0
		{
			idc = 20868;
		};
		class Antenna9: Antenna0
		{
			idc = 20869;
		};
		class Frequency0: RscControlsGroupNoScrollbars
		{
			h = "1.1 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = 20870;
			show = 0;
			w = "12 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
			x = 0;
			y = 0;
			class Controls
			{
				class Text: RscStructuredText
				{
					colorBackground[] = {0, 0, 0, 1};
					h = "1.0 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					idc = 208701;
					shadow = 0;
					w = "12 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
					x = "0 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
					y = 0;
					class Attributes
					{
						align = "left";
						color = "#ffffff";
						font = "RobotoCondensed";
						shadow = 0;
					};
				};
			};
		};
		class Frequency1: Frequency0
		{
			idc = 20871;
		};
		class Frequency2: Frequency0
		{
			idc = 20872;
		};
		class Frequency3: Frequency0
		{
			idc = 20873;
		};
		class Frequency4: Frequency0
		{
			idc = 20874;
		};
		class Frequency5: Frequency0
		{
			idc = 20875;
		};
		class Frequency6: Frequency0
		{
			idc = 20876;
		};
		class Frequency7: Frequency0
		{
			idc = 20877;
		};
		class Frequency8: Frequency0
		{
			idc = 20878;
		};
		class Frequency9: Frequency0
		{
			idc = 20879;
		};
		class Task: RscControlsGroupNoScrollbars
		{
			h = "2.1 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = 20851;
			show = 0;
			w = "12 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
			x = 0;
			y = 0;
			class Controls
			{
				class ButtonTrack: RscButton
				{
					h = "2 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					idc = 208512;
					onButtonClick = "with uinamespace do {['taskAssign',_this,''] call RscMapTooltip_script;};";
					period = 0;
					style = "0x02 + 0x30 + 0x800";
					text = "\a3\UI_F_Contact\Data\Common\RscMapTooltip\buttonTrack_track_ca.paa";
					w = "2 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
					x = 0;
					y = "0.0 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				};
				class ButtonUntrack: ButtonTrack
				{
					idc = 208514;
					onButtonClick = "with uinamespace do {['taskUnassign',_this,''] call RscMapTooltip_script;};";
					text = "\a3\UI_F_Contact\Data\Common\RscMapTooltip\buttonTrack_untrack_ca.paa";
				};
				class Quest: Task
				{
					colorText[] = {1, 1, 1, 0.5};
					font = "RobotoCondensedLight";
					idc = 208513;
					y = "1.0 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				};
				class Task: RscText
				{
					h = "1.0 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					idc = 208511;
					shadow = 0;
					w = 1;
					x = "2.1 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
					y = 0;
				};
				class TextBackground: RscText
				{
					colorBackground[] = {1, 0.5, 0, 1};
					h = "2.0 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					w = 1;
					x = "2.2 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
					y = 0;
				};
			};
		};
	};
};
