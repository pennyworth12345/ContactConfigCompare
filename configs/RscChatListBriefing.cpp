class RscChatListBriefing: RscChatListDefault
{
	h = "(			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 0.8)";
	rows = "(SafezoneH - (17.1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25))) / 		(			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 0.8)";
	w = "(18.5 * 					(			((safezoneW / safezoneH) min 1.2) / 40)) + 0.45*(safezoneW - 				((safezoneW / safezoneH) min 1.2))";
	x = "1.2 * 					(			((safezoneW / safezoneH) min 1.2) / 40) + 		(SafezoneX)";
	y = "14.8 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 		(safezoneY)";
};
