class RscBackgroundLogo: RscPictureKeepAspect
{
	align = "top";
	background = 1;
	h = "(8 * 			(		(		((safezoneW / safezoneH) min 1.2) / 1.2) / 20))";
	text = "\A3\Ui_f\data\Logos\arma3_splash_ca.paa";
	w = "(8 * 			(		((safezoneW / safezoneH) min 1.2) / 32))";
	x = "safezoneX + safezoneW - (9 * 			(		((safezoneW / safezoneH) min 1.2) / 32))";
	y = "safezoneY - 2 * 			(		(		((safezoneW / safezoneH) min 1.2) / 1.2) / 20)";
};
