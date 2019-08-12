class NukeExplosion
{
	class Cone
	{
		intensity = 1;
		interval = 1;
		lifeTime = 2;
		position[] = {0, 0, 0};
		simulation = "particles";
		type = "NukeConeFire";
	};
	class Light
	{
		intensity = 1;
		interval = 1;
		lifeTime = 2;
		position[] = {0, 0, 0};
		simulation = "light";
		type = "NukeLight";
	};
	class Smoke
	{
		intensity = 1;
		interval = 1;
		lifeTime = 3;
		position[] = {0, 0, 0};
		simulation = "particles";
		type = "NukeSmokeChimney";
	};
	class SmokeBottom
	{
		intensity = 1;
		interval = 1;
		lifeTime = 4;
		position[] = {0, 0, 0};
		simulation = "particles";
		type = "NukeConeSmokeBottom";
	};
	class SmokeTop
	{
		intensity = 1;
		interval = 1;
		lifeTime = 2;
		position[] = {0, 0, 0};
		simulation = "particles";
		type = "NukeConeSmokeTop";
	};
};
