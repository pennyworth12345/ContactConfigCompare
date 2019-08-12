class AmmoUnderwater
{
	class Bubbles1
	{
		enabled = "(distToSurface - 1) * (-1)";
		intensity = 1;
		interval = 1;
		lifeTime = 1;
		position[] = {0, 0, 0};
		qualityLevel = 2;
		simulation = "particles";
		type = "BubbleTrack1";
	};
	class BubblesMed
	{
		enabled = "(distToSurface - 1) * (-1)";
		intensity = 1;
		interval = 1;
		lifeTime = 1;
		position[] = {0, 0, 0};
		qualityLevel = 1;
		simulation = "particles";
		type = "BubbleTrackMed1";
	};
};
