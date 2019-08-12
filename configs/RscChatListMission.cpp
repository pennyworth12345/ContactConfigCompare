class RscChatListMission: RscChatListDefault
{
	colorBackground[] = {0, 0, 0, 0.3};
	h = "(			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 0.8)";
	rows = "(profilenamespace getvariable [""IGUI_GRID_CHAT_H"",		(5 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25))]) / 		(			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 0.8)";
	w = "(profilenamespace getvariable [""IGUI_GRID_CHAT_W"",		(20 * 			(			((safezoneW / safezoneH) min 1.2) / 40))])";
	x = "(profilenamespace getvariable [""IGUI_GRID_CHAT_X"",		(safezoneX + 1 * 			(			((safezoneW / safezoneH) min 1.2) / 40))])";
	y = "(profilenamespace getvariable [""IGUI_GRID_CHAT_Y"",		(safezoneY + safezoneH - 10.5 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25))])";
};
