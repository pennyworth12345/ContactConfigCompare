class RscTestControlsGroupTooltip
{
	enableSimulation = 1;
	idd = 999;
	class Controls
	{
		class ControlBar: RscControlsGroupNoScrollbars
		{
			h = 1;
			idc = 1001;
			w = 1;
			x = 0;
			y = 0;
			class controls
			{
				class ButtonClose: RscButtonMenu
				{
					h = 1;
					idc = 1002;
					text = "Text";
					tooltip = "Tooltip";
					w = 1;
					x = 0;
					y = 0;
				};
			};
		};
		class MouseArea2: RscText
		{
			h = "safezoneH";
			idc = 1003;
			style = 16;
			w = "safezoneW";
			x = "safezoneX";
			y = "safezoneY";
		};
	};
	class ControlsBackground
	{
		class MouseArea1: RscText
		{
			h = 0;
			idc = 1000;
			style = 16;
			w = 0;
			x = 0;
			y = 0;
		};
	};
};
