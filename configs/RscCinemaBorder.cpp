class RscCinemaBorder: RscDisplayBackgroundStripes
{
	enableSimulation = 1;
	idd = -1;
	movingEnable = 0;
	class controlsBackground
	{
		class Background1: RscBackgroundStripeTop
		{
			colorBackground[] = {0, 0, 0, 1};
		};
		class Background2: RscBackgroundStripeBottom
		{
			colorBackground[] = {0, 0, 0, 1};
		};
	};
};
