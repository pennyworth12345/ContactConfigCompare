class Display3DENEditAttributesIntel
{
	enableDisplay = 1;
	enableSimulation = 1;
	idd = 315;
	onLoad = "[""onLoad"",_this,""Display3DENEditAttributes"",'3DENDisplays'] call 	(uinamespace getvariable 'BIS_fnc_initDisplay')";
	onUnload = "[""onUnload"",_this,""Display3DENEditAttributes"",'3DENDisplays'] call 	(uinamespace getvariable 'BIS_fnc_initDisplay')";
	scriptName = "Display3DENEditAttributes";
	scriptPath = "3DENDisplays";
	class AttributeCategory: ctrlControlsGroupNoScrollbars
	{
		w = "(	140 - 1) * (pixelW * pixelGrid * 	0.50)";
		y = "2 * pixelH";
		class AttributeOverlay: ctrlControlsGroupNoScrollbars
		{
			y = "4 * pixelH";
			class Controls
			{
				class AttributeEnable: ctrlCheckbox
				{
					h = "5 * (pixelH * pixelGrid * 	0.50)";
					tooltip = "Enable to set the attribute for all the selected entities";
					w = "5 * (pixelW * pixelGrid * 	0.50)";
				};
				class AttributeOverlay: ctrlStatic
				{
					colorBackground[] = {0.2, 0.2, 0.2, 0.9};
					style = 2;
				};
			};
		};
		class Controls
		{
			class Attributes: ctrlControlsGroupNoScrollbars
			{
				w = "(	140 - 5) * (pixelW * pixelGrid * 	0.50)";
				y = "4 * (pixelH * pixelGrid * 	0.50) + 8 * pixelH";
				class Controls {};
			};
			class Minimize: ctrlCheckbox
			{
				color[] = {1, 1, 1, 0.5};
				colorDisabled[] = {1, 1, 1, 0.5};
				colorFocused[] = {1, 1, 1, 0.5};
				colorHover[] = {1, 1, 1, 0.5};
				colorPressed[] = {1, 1, 1, 0.5};
				h = "5 * (pixelH * pixelGrid * 	0.50)";
				textureChecked = "\a3\3DEN\Data\Displays\Display3DENEditAttributes\textureChecked_ca.paa";
				textureDisabledChecked = "\a3\3DEN\Data\Displays\Display3DENEditAttributes\textureChecked_ca.paa";
				textureDisabledUnchecked = "\a3\3DEN\Data\Displays\Display3DENEditAttributes\textureUnchecked_ca.paa";
				textureFocusedChecked = "\a3\3DEN\Data\Displays\Display3DENEditAttributes\textureChecked_ca.paa";
				textureFocusedUnchecked = "\a3\3DEN\Data\Displays\Display3DENEditAttributes\textureUnchecked_ca.paa";
				textureHoverChecked = "\a3\3DEN\Data\Displays\Display3DENEditAttributes\textureChecked_ca.paa";
				textureHoverUnchecked = "\a3\3DEN\Data\Displays\Display3DENEditAttributes\textureUnchecked_ca.paa";
				texturePressedChecked = "\a3\3DEN\Data\Displays\Display3DENEditAttributes\textureChecked_ca.paa";
				texturePressedUnchecked = "\a3\3DEN\Data\Displays\Display3DENEditAttributes\textureUnchecked_ca.paa";
				textureUnchecked = "\a3\3DEN\Data\Displays\Display3DENEditAttributes\textureUnchecked_ca.paa";
				w = "5 * (pixelW * pixelGrid * 	0.50)";
				x = "0 * (pixelW * pixelGrid * 	0.50)";
				y = 0;
			};
			class Title: ctrlButton
			{
				colorBackground[] = {0.2, 0.2, 0.2, 1};
				colorBackgroundActive[] = {0.2, 0.2, 0.2, 1};
				colorFocused[] = {0.2, 0.2, 0.2, 1};
				colorShadow[] = {1, 1, 1, 0.5};
				colorText[] = {1, 1, 1, 0.5};
				font = "RobotoCondensedLight";
				h = "5 * (pixelH * pixelGrid * 	0.50)";
				offsetPressedX = 0;
				offsetPressedY = 0;
				offsetX = 0;
				offsetY = "-pixelH";
				sizeEx = "4.32 * (1 / (getResolution select 3)) * pixelGrid * 0.5";
				style = "0x10 + 0x200";
				w = "(	140 - 	5 - 3) * (pixelW * pixelGrid * 	0.50)";
				x = "5 * (pixelW * pixelGrid * 	0.50)";
				y = "pixelH";
			};
		};
	};
	class Controls {};
	class ControlsBackground
	{
		class AttributeCategories: ctrlControlsGroup
		{
			h = "(	(safezoneH * 0.56) min (	180 * (pixelH * pixelGrid * 	0.50))) - (2 * 	5 + 10 + 3) * (pixelH * pixelGrid * 	0.50)";
			idc = 201;
			w = "(	140 - 2*0) * (pixelW * pixelGrid * 	0.50)";
			x = "((getResolution select 2) * 0.5 * pixelW) - (	140 * 0.5 - 1*0) * (pixelW * pixelGrid * 	0.50)";
			y = "0.5 - (	(safezoneH * 0.56) min (	180 * (pixelH * pixelGrid * 	0.50))) * 0.5 + 11 * (pixelH * pixelGrid * 	0.50) + pixelH";
			class Controls {};
		};
		class Background: ctrlStaticBackground
		{
			h = "(	(safezoneH * 0.56) min (	180 * (pixelH * pixelGrid * 	0.50))) - (	5 + 10) * (pixelH * pixelGrid * 	0.50)";
			w = "140 * (pixelW * pixelGrid * 	0.50)";
			x = "((getResolution select 2) * 0.5 * pixelW) - (	140 * 0.5) * (pixelW * pixelGrid * 	0.50)";
			y = "0.5 - (	(safezoneH * 0.56) min (	180 * (pixelH * pixelGrid * 	0.50))) * 0.5 + 10 * (pixelH * pixelGrid * 	0.50)";
		};
		class BackgroundButtons: ctrlStaticFooter
		{
			h = "(	5 + 2) * (pixelH * pixelGrid * 	0.50)";
			w = "(	140) * (pixelW * pixelGrid * 	0.50)";
			x = "((getResolution select 2) * 0.5 * pixelW) - (	140 * 0.5 - 1*0) * (pixelW * pixelGrid * 	0.50)";
			y = "0.5 + (	(safezoneH * 0.56) min (	180 * (pixelH * pixelGrid * 	0.50))) * 0.5 - (2 * 	5 + 2) * (pixelH * pixelGrid * 	0.50)";
		};
		class ButtonCancel: ctrlButtonCancel
		{
			h = "5 * (pixelH * pixelGrid * 	0.50)";
			w = "25 * (pixelW * pixelGrid * 	0.50)";
			x = "((getResolution select 2) * 0.5 * pixelW) + (	140 * 0.5 - 25 - 1) * (pixelW * pixelGrid * 	0.50)";
			y = "0.5 + (	(safezoneH * 0.56) min (	180 * (pixelH * pixelGrid * 	0.50))) * 0.5 - (2 * 	5 + 1) * (pixelH * pixelGrid * 	0.50)";
		};
		class ButtonOK: ctrlButtonOK
		{
			h = "5 * (pixelH * pixelGrid * 	0.50)";
			onButtonDown = "ctrlsetfocus (_this select 0);";
			w = "25 * (pixelW * pixelGrid * 	0.50)";
			x = "((getResolution select 2) * 0.5 * pixelW) + (	140 * 0.5 - 50 - 2) * (pixelW * pixelGrid * 	0.50)";
			y = "0.5 + (	(safezoneH * 0.56) min (	180 * (pixelH * pixelGrid * 	0.50))) * 0.5 - (2 * 	5 + 1) * (pixelH * pixelGrid * 	0.50)";
		};
		class Title: ctrlStaticTitle
		{
			h = "5 * (pixelH * pixelGrid * 	0.50)";
			idc = 200;
			text = "Edit: %s";
			w = "140 * (pixelW * pixelGrid * 	0.50)";
			x = "((getResolution select 2) * 0.5 * pixelW) - (	140 * 0.5) * (pixelW * pixelGrid * 	0.50)";
			y = "0.5 - (	(safezoneH * 0.56) min (	180 * (pixelH * pixelGrid * 	0.50))) * 0.5 + 	5 * (pixelH * pixelGrid * 	0.50)";
		};
	};
};
