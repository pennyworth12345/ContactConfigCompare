class RscTrafficLight: RscActiveText
{
	color[] = {1, 1, 1, 0.7};
	colorActive[] = {1, 1, 1, 1};
	colorText[] = {1, 1, 1, 0.7};
	h = "1 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
	style = 48;
	text = "\A3\Ui_f\data\GUI\RscCommon\RscTrafficLight\TrafficLight_ca.paa";
	tooltip = "You are running a modded version of the game. Click to see the list of active mods.";
	w = "1 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
	x = "SafezoneX + SafezoneW - (2 * 			(			((safezoneW / safezoneH) min 1.2) / 40))";
	y = "23 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 			(safezoneY + safezoneH - 			(			((safezoneW / safezoneH) min 1.2) / 1.2))";
};
