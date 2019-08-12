class CfgSimpleTasks
{
	class Icon
	{
		colorBackground[] = {0, 0, 0, 0.5};
		colorBackgroundAssigned[] = {0, 0, 0, 0.5};
		colorBackgroundCustom[] = {0, 0, 0, 0.5};
		colorIcon[] = {0.8, 0.8, 0.8, 1};
		colorIconAssigned[] = {0.8, 0.6, 0, 1};
		colorIconCustom[] = {0.1, 0.1, 0.9, 1};
		colorText[] = {0.8, 0.8, 0.8, 1};
		colorTextAssigned[] = {0.8, 0.6, 0, 1};
		colorTextCustom[] = {0.1, 0.1, 0.9, 1};
		sizeBackground = 0;
		sizeIcon = 0;
		textureBackground = "#(argb,8,8,3)color(1,1,1,1)";
	};
	class Icon2D: Icon
	{
		colorBackground[] = {0, 0, 0, 0.65};
		colorBackgroundAssigned[] = {0, 0, 0, 0.65};
		colorBackgroundCustom[] = {0, 0, 0, 0.65};
		colorIcon[] = {1, 1, 1, 1};
		colorIconAssigned[] = {1, 0.72, 0.3, 1};
		colorIconCustom[] = {0.3, 0.72, 1, 1};
		colorText[] = {1, 1, 1, 1};
		colorTextAssigned[] = {1, 0.72, 0.3, 1};
		colorTextCustom[] = {0.3, 0.72, 1, 1};
		mouseoverZoom = 1.5;
		selectedAlpha = 1;
		sizeBackground = 0;
		sizeIcon = 0;
		sizeInverted = 0;
	};
	class Icon3D: Icon
	{
		colorBackground[] = {1, 1, 1, 1};
		colorBackgroundAssigned[] = {1, 0.72, 0.3, 1};
		colorBackgroundCustom[] = {0.3, 0.72, 1, 1};
		colorIcon[] = {1, 1, 1, 0.5};
		colorIconAssigned[] = {1, 0.72, 0.3, 0.5};
		colorIconCustom[] = {0.3, 0.72, 1, 0.5};
		colorText[] = {0.91, 0.91, 0.91, 0.55};
		colorTextAssigned[] = {0.91, 0.65, 0.27, 0.55};
		colorTextCustom[] = {0.27, 0.65, 0.91, 0.55};
		font = "RobotoCondensedBold";
		iconOffset = -0.004;
		maxVisible = 0;
		offsetY = 0.3;
		shadowBackground = 0;
		shadowForeground = 2;
		shadowText = 2;
		sizeBackground = 0;
		sizeEx = 0;
		sizeIcon = 0;
		textureBackground = "\a3\ui_f\data\igui\cfg\simpletasks\background3_ca.paa";
		yOffsetExact = 0.2;
		yOffsetNonExact = 0;
		class Distance
		{
			alphaMultiplier = 1;
			range[] = {0, 1e+010};
			scale = 1;
			showDistance = 0;
			textOffset = 0.003;
		};
	};
	class TaskOverview
	{
		dimmEndTime = 0.5;
		dimmStartTime = 0.01;
		texturePointer = "\a3\ui_f\data\igui\cfg\simpletasks\interaction_pointer4_ca.paa";
		class IconOver
		{
			colorBackground[] = {1, 1, 1, 1};
			colorBackgroundAssigned[] = {1, 0.72, 0.3, 1};
			colorBackgroundCustom[] = {0.3, 0.72, 1, 1};
			colorIcon[] = {1, 1, 1, 1};
			colorIconAssigned[] = {1, 0.72, 0.3, 1};
			colorIconCustom[] = {0.3, 0.72, 1, 1};
			sizeBackground = 0.03;
			sizeIcon = 0.022;
			textureBackground = "\a3\ui_f\data\igui\cfg\simpletasks\background3_over_ca.paa";
		};
		class Tooltip
		{
			colorBackground[] = {0, 0, 0, 0.65};
			colorText[] = {1, 1, 1, 1};
			fadeInDelay = 1.5;
			fadeInDuration = 0.2;
			height = 0.022;
			margin = 0.001;
			widthMax = 0.36;
			widthMin = 0.06;
			class Title
			{
				font = "RobotoCondensedBold";
				left = "(			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 0.8)/4";
				shadow = 0;
				sizeEx = "(			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 0.8) * 1.0";
				top = "(			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 0.8) * 0.012";
			};
		};
	};
	class Tooltip: Icon
	{
		selectedAlpha = 1;
		sizeBackground = 0;
		sizeIcon = 0;
		textAssign = "Assign";
		textAssigned = "Assigned";
		textClkAssign = "Click to assign";
		textClkUnAssign = "Click to unassign";
		textUnassign = "Unassign";
		textUnassigned = "Unassigned";
		widthMax = 0;
		widthMin = 0;
		class CustomIcon
		{
			right = "(			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 0.8) * 0.8";
			sizeEx = "(			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 0.8) * 0.6";
			top = "(			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 0.8) * 1.09";
		};
		class CustomText
		{
			font = "RobotoCondensedLight";
			right = "(			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 0.8) * 0.9";
			sizeEx = "(			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 0.8) * 0.9";
			top = "(			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 0.8) * 1.05";
		};
		class SubTitle
		{
			font = "RobotoCondensedLight";
			left = "(			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 0.8)/2";
			sizeEx = "(			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 0.8) * 0.9";
			top = "(			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 0.8) * 1.05";
		};
		class Title
		{
			font = "RobotoCondensed";
			left = "(			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 0.8)/2";
			sizeEx = "(			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 0.8) * 1.2";
			top = "(			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 0.8) * 0.03";
		};
	};
};
