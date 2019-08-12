class RscDisplaySingleMission_ChallengeOverviewGroup: RscControlsGroupNoHScrollbars
{
	h = "3.5 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + (0.5 * (safezoneH - 				(			((safezoneW / safezoneH) min 1.2) / 1.2)))";
	idc = 2302;
	w = "22 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
	x = "17 * 					(			((safezoneW / safezoneH) min 1.2) / 40) + 				(safezoneX + (safezoneW - 					((safezoneW / safezoneH) min 1.2))/2)";
	y = "SafezoneY + (18.4 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)) + (0.5 * (safezoneH - 				(			((safezoneW / safezoneH) min 1.2) / 1.2)))";
	class controls {};
};
