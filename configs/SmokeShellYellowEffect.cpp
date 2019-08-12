class SmokeShellYellowEffect: SmokeShellWhiteEffect
{
	class SmokeShell: SmokeShell {};
	class SmokeShell2: SmokeShell2 {};
	class SmokeShell2UW
	{
		intensity = 1;
		interval = 1;
		position[] = {0, 0, 0};
		simulation = "particles";
		type = "SmokeShellYellow2UW";
	};
	class SmokeShellUW
	{
		intensity = 1;
		interval = 1;
		position[] = {0, 0, 0};
		simulation = "particles";
		type = "SmokeShellYellowUW";
	};
};
