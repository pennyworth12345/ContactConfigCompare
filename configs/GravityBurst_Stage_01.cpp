class GravityBurst_Stage_01
{
	class Effect_01
	{
		intensity = 1;
		interval = 1;
		position[] = {0, 0, 0};
		simulation = "particles";
		type = "GravityBurst_Raise_Mud_01";
	};
	class Effect_02: Effect_01
	{
		type = "GravityBurst_Raise_Stone_01";
	};
	class Effect_03: Effect_01
	{
		type = "GravityBurst_Raise_Tree_01";
	};
	class Effect_04: Effect_01
	{
		type = "GravityBurst_Raise_Grass_01";
	};
	class Effect_05: Effect_01
	{
		type = "GravityBurst_Raise_Glow_01";
	};
};
