class CfgHeads
{
	class Air
	{
		friction = 10;
		maxAmp = 0.05;
		maxSpeed = 3;
		movement = 160;
		radius = 0.2;
	};
	class AsianHead_A3: Default_A3
	{
		model = "\A3\Characters_F\Heads\m_asian_01";
		selectionHeadWound = "injury_head";
		selectionPersonality = "personality";
		class Wounds
		{
			mat[] = {"A3\Characters_F\Heads\Data\m_asian_01.rvmat", "A3\Characters_F\Heads\Data\m_asian_01_injury.rvmat", "A3\Characters_F\Heads\Data\m_asian_01_injury.rvmat", "A3\Characters_F\Heads\Data\m_asian_02.rvmat", "A3\Characters_F\Heads\Data\m_asian_02_injury.rvmat", "A3\Characters_F\Heads\Data\m_asian_02_injury.rvmat", "A3\Characters_F\Heads\Data\m_asian_03.rvmat", "A3\Characters_F\Heads\Data\m_asian_03_injury.rvmat", "A3\Characters_F\Heads\Data\m_asian_03_injury.rvmat", "A3\Characters_F\Heads\Data\hl_asian_bald_muscular.rvmat", "A3\Characters_F\Heads\Data\hl_asian_bald_muscular_injury.rvmat", "A3\Characters_F\Heads\Data\hl_asian_bald_muscular_injury.rvmat"};
			tex[] = {};
		};
	};
	class BlackHead_A3: Cooper_A3
	{
		model = "\A3\Characters_F\Heads\m_african_01";
		selectionHeadWound = "injury_head";
		selectionPersonality = "personality";
		class Wounds
		{
			mat[] = {"A3\Characters_F\Heads\Data\m_african_01.rvmat", "A3\Characters_F\Heads\Data\m_african_01_injury.rvmat", "A3\Characters_F\Heads\Data\m_african_01_injury.rvmat", "A3\Characters_F\Heads\Data\m_african_02.rvmat", "A3\Characters_F\Heads\Data\m_african_02_injury.rvmat", "A3\Characters_F\Heads\Data\m_african_02_injury.rvmat", "A3\Characters_F\Heads\Data\m_african_03.rvmat", "A3\Characters_F\Heads\Data\m_african_03_injury.rvmat", "A3\Characters_F\Heads\Data\m_african_03_injury.rvmat", "A3\Characters_F\Heads\Data\hl_black_bald_muscular.rvmat", "A3\Characters_F\Heads\Data\hl_black_bald_muscular_injury.rvmat", "A3\Characters_F\Heads\Data\hl_black_bald_muscular_injury.rvmat"};
			tex[] = {};
		};
	};
	class Cooper_A3: Default_A3
	{
		model = "\A3\Characters_F\Heads\m_african_01";
		selectionHeadWound = "injury_head";
		selectionPersonality = "osobnost";
		class Wounds
		{
			mat[] = {"A3\characters_f\heads\data\m_african_01.rvmat", "A3\characters_f\heads\data\m_african_01_injury.rvmat", "A3\characters_f\heads\data\m_african_01_injury.rvmat"};
			tex[] = {};
		};
	};
	class Default_A3
	{
		model = "\A3\characters_f\Heads\m_white_01";
		selectionHeadWound = "injury_head";
		selectionPersonality = "personality";
		selectionPersonalityHL = "hl";
		class Grimaces
		{
			class Aware
			{
				type = "compound";
				class Items
				{
					class AwareFace: MaskFace_A3 {};
					class Lipsync: LipMask_A3 {};
				};
			};
			class AwareFace: RTM_Face
			{
				anims[] = {"A3\Characters_F\Heads\Anim\male\still1_02.rtm", 3, "A3\Characters_F\Heads\Anim\male\still1_05.rtm", 4, "A3\Characters_F\Heads\Anim\male\still1_06.rtm", 2.6, "A3\Characters_F\Heads\Anim\male\still1_08.rtm", 3.3, "A3\Characters_F\Heads\Anim\male\still1_09.rtm", 3.6, "A3\Characters_F\Heads\Anim\male\still2_01.rtm", 2.6, "A3\Characters_F\Heads\Anim\male\still2_05.rtm", 4, "A3\Characters_F\Heads\Anim\male\still2_07.rtm", 3, "A3\Characters_F\Heads\Anim\male\still2_08.rtm", 3.3, "A3\Characters_F\Heads\Anim\male\still4_01.rtm", 4, "A3\Characters_F\Heads\Anim\male\still4_02.rtm", 5, "A3\Characters_F\Heads\Anim\male\still4_03.rtm", 6, "A3\Characters_F\Heads\Anim\male\still4_04.rtm", 4, "A3\Characters_F\Heads\Anim\male\still4_05.rtm", 5, "A3\Characters_F\Heads\Anim\male\still4_06.rtm", 6, "A3\Characters_F\Heads\Anim\male\still4_07.rtm", 4, "A3\Characters_F\Heads\Anim\male\still4_08.rtm", 6, "A3\Characters_F\Heads\Anim\male\still4_09.rtm", 4, "A3\Characters_F\Heads\Anim\male\still4_10.rtm", 6};
				animsAI[] = {"A3\Characters_F\Heads\Anim\male\still1_02.rtm", 3, "A3\Characters_F\Heads\Anim\male\still1_05.rtm", 4, "A3\Characters_F\Heads\Anim\male\still1_06.rtm", 2.6, "A3\Characters_F\Heads\Anim\male\still1_08.rtm", 3.3, "A3\Characters_F\Heads\Anim\male\still1_09.rtm", 3.6, "A3\Characters_F\Heads\Anim\male\still2_01.rtm", 2.6, "A3\Characters_F\Heads\Anim\male\still2_05.rtm", 4, "A3\Characters_F\Heads\Anim\male\still2_07.rtm", 3, "A3\Characters_F\Heads\Anim\male\still2_08.rtm", 3.3, "A3\Characters_F\Heads\Anim\male\still4_01.rtm", 4, "A3\Characters_F\Heads\Anim\male\still4_02.rtm", 5, "A3\Characters_F\Heads\Anim\male\still4_03.rtm", 6, "A3\Characters_F\Heads\Anim\male\still4_04.rtm", 4, "A3\Characters_F\Heads\Anim\male\still4_05.rtm", 5, "A3\Characters_F\Heads\Anim\male\still4_06.rtm", 6, "A3\Characters_F\Heads\Anim\male\still4_07.rtm", 4, "A3\Characters_F\Heads\Anim\male\still4_08.rtm", 6, "A3\Characters_F\Heads\Anim\male\still4_09.rtm", 4, "A3\Characters_F\Heads\Anim\male\still4_10.rtm", 6};
			};
			class Combat
			{
				type = "compound";
				class Items
				{
					class CombatFace: MaskFace_A3 {};
					class Lipsync: LipMask_A3 {};
				};
			};
			class CombatFace: RTM_Face
			{
				anims[] = {"A3\Characters_F\Heads\Anim\male\still1_02.rtm", 3, "A3\Characters_F\Heads\Anim\male\still1_05.rtm", 4, "A3\Characters_F\Heads\Anim\male\still1_06.rtm", 2.6, "A3\Characters_F\Heads\Anim\male\still1_08.rtm", 3.3, "A3\Characters_F\Heads\Anim\male\still1_09.rtm", 3.6, "A3\Characters_F\Heads\Anim\male\still2_01.rtm", 2.6, "A3\Characters_F\Heads\Anim\male\still2_05.rtm", 4, "A3\Characters_F\Heads\Anim\male\still2_07.rtm", 3, "A3\Characters_F\Heads\Anim\male\still2_08.rtm", 3.3, "A3\Characters_F\Heads\Anim\male\still4_01.rtm", 4, "A3\Characters_F\Heads\Anim\male\still4_02.rtm", 5, "A3\Characters_F\Heads\Anim\male\still4_03.rtm", 6, "A3\Characters_F\Heads\Anim\male\still4_04.rtm", 4, "A3\Characters_F\Heads\Anim\male\still4_05.rtm", 5, "A3\Characters_F\Heads\Anim\male\still4_06.rtm", 6, "A3\Characters_F\Heads\Anim\male\still4_07.rtm", 4, "A3\Characters_F\Heads\Anim\male\still4_08.rtm", 6, "A3\Characters_F\Heads\Anim\male\still4_09.rtm", 4, "A3\Characters_F\Heads\Anim\male\still4_10.rtm", 6};
				animsAI[] = {"A3\Characters_F\Heads\Anim\male\still1_02.rtm", 3, "A3\Characters_F\Heads\Anim\male\still1_05.rtm", 4, "A3\Characters_F\Heads\Anim\male\still1_06.rtm", 2.6, "A3\Characters_F\Heads\Anim\male\still1_08.rtm", 3.3, "A3\Characters_F\Heads\Anim\male\still1_09.rtm", 3.6, "A3\Characters_F\Heads\Anim\male\still2_01.rtm", 2.6, "A3\Characters_F\Heads\Anim\male\still2_05.rtm", 4, "A3\Characters_F\Heads\Anim\male\still2_07.rtm", 3, "A3\Characters_F\Heads\Anim\male\still2_08.rtm", 3.3, "A3\Characters_F\Heads\Anim\male\still4_01.rtm", 4, "A3\Characters_F\Heads\Anim\male\still4_02.rtm", 5, "A3\Characters_F\Heads\Anim\male\still4_03.rtm", 6, "A3\Characters_F\Heads\Anim\male\still4_04.rtm", 4, "A3\Characters_F\Heads\Anim\male\still4_05.rtm", 5, "A3\Characters_F\Heads\Anim\male\still4_06.rtm", 6, "A3\Characters_F\Heads\Anim\male\still4_07.rtm", 4, "A3\Characters_F\Heads\Anim\male\still4_08.rtm", 6, "A3\Characters_F\Heads\Anim\male\still4_09.rtm", 4, "A3\Characters_F\Heads\Anim\male\still4_10.rtm", 6};
			};
			class Danger
			{
				type = "compound";
				class Items
				{
					class DangerFace: MaskFace_A3 {};
					class Lipsync: LipMask_A3 {};
				};
			};
			class DangerFace: RTM_Face
			{
				anims[] = {"A3\Characters_F\Heads\Anim\male\still1_02.rtm", 3, "A3\Characters_F\Heads\Anim\male\still1_05.rtm", 4, "A3\Characters_F\Heads\Anim\male\still1_06.rtm", 2.6, "A3\Characters_F\Heads\Anim\male\still1_08.rtm", 3.3, "A3\Characters_F\Heads\Anim\male\still1_09.rtm", 3.6, "A3\Characters_F\Heads\Anim\male\still2_01.rtm", 2.6, "A3\Characters_F\Heads\Anim\male\still2_05.rtm", 4, "A3\Characters_F\Heads\Anim\male\still2_07.rtm", 3, "A3\Characters_F\Heads\Anim\male\still2_08.rtm", 3.3, "A3\Characters_F\Heads\Anim\male\still4_01.rtm", 4, "A3\Characters_F\Heads\Anim\male\still4_02.rtm", 5, "A3\Characters_F\Heads\Anim\male\still4_03.rtm", 6, "A3\Characters_F\Heads\Anim\male\still4_04.rtm", 4, "A3\Characters_F\Heads\Anim\male\still4_05.rtm", 5, "A3\Characters_F\Heads\Anim\male\still4_06.rtm", 6, "A3\Characters_F\Heads\Anim\male\still4_07.rtm", 4, "A3\Characters_F\Heads\Anim\male\still4_08.rtm", 6, "A3\Characters_F\Heads\Anim\male\still4_09.rtm", 4, "A3\Characters_F\Heads\Anim\male\still4_10.rtm", 6};
				animsAI[] = {"A3\Characters_F\Heads\Anim\male\1a_frown_170_l.rtm", 5, "A3\Characters_F\Heads\Anim\male\1a_neutral_170_l.rtm", 5, "A3\Characters_F\Heads\Anim\male\1b_frown_165_l.rtm", 5, "A3\Characters_F\Heads\Anim\male\1b_neutral_165_r.rtm", 5, "A3\Characters_F\Heads\Anim\male\1c_neutral_110_r.rtm", 3, "A3\Characters_F\Heads\Anim\male\1d_frown_180_l.rtm", 6, "A3\Characters_F\Heads\Anim\male\1d_neutral_180_l.rtm", 6, "A3\Characters_F\Heads\Anim\male\1f_neutral_240_r.rtm", 8, "A3\Characters_F\Heads\Anim\male\1g_frown_90_l.rtm", 3, "A3\Characters_F\Heads\Anim\male\1g_neutral_90_l.rtm", 3, "A3\Characters_F\Heads\Anim\male\1h_neutral_150_r.rtm", 4, "A3\Characters_F\Heads\Anim\male\1i_frown_180_l.rtm", 5, "A3\Characters_F\Heads\Anim\male\1i_neutral_180_l.rtm", 5, "A3\Characters_F\Heads\Anim\male\1j_neutral_200_l.rtm", 5, "A3\Characters_F\Heads\Anim\male\2a_frown_80_l.rtm", 2.5, "A3\Characters_F\Heads\Anim\male\2a_neutral_80_l.rtm", 2.5, "A3\Characters_F\Heads\Anim\male\2b_neutral_190_r.rtm", 5, "A3\Characters_F\Heads\Anim\male\2c_neutral_110_r.rtm", 4, "A3\Characters_F\Heads\Anim\male\2d_frown_120_r.rtm", 4, "A3\Characters_F\Heads\Anim\male\2d_neutral_120_r.rtm", 4, "A3\Characters_F\Heads\Anim\male\2e_frown_200_r.rtm", 6, "A3\Characters_F\Heads\Anim\male\2e_neutral_200_r.rtm", 6, "A3\Characters_F\Heads\Anim\male\2f_frown_80_l.rtm", 2.5, "A3\Characters_F\Heads\Anim\male\2f_neutral_80_l.rtm", 2.5, "A3\Characters_F\Heads\Anim\male\2g_frown_120_l.rtm", 5, "A3\Characters_F\Heads\Anim\male\2g_neutral_120_l.rtm", 4, "A3\Characters_F\Heads\Anim\male\2h_frown_120_r.rtm", 4, "A3\Characters_F\Heads\Anim\male\2h_neutral_120_l.rtm", 4, "A3\Characters_F\Heads\Anim\male\still1_02.rtm", 3, "A3\Characters_F\Heads\Anim\male\still1_05.rtm", 4, "A3\Characters_F\Heads\Anim\male\still1_06.rtm", 2.6, "A3\Characters_F\Heads\Anim\male\still1_08.rtm", 3.3, "A3\Characters_F\Heads\Anim\male\still1_09.rtm", 3.6, "A3\Characters_F\Heads\Anim\male\still2_01.rtm", 2.6, "A3\Characters_F\Heads\Anim\male\still2_05.rtm", 4, "A3\Characters_F\Heads\Anim\male\still2_07.rtm", 3, "A3\Characters_F\Heads\Anim\male\still2_08.rtm", 3.3, "A3\Characters_F\Heads\Anim\male\still4_01.rtm", 4, "A3\Characters_F\Heads\Anim\male\still4_02.rtm", 5, "A3\Characters_F\Heads\Anim\male\still4_03.rtm", 6, "A3\Characters_F\Heads\Anim\male\still4_04.rtm", 4, "A3\Characters_F\Heads\Anim\male\still4_05.rtm", 5, "A3\Characters_F\Heads\Anim\male\still4_06.rtm", 6, "A3\Characters_F\Heads\Anim\male\still4_07.rtm", 4, "A3\Characters_F\Heads\Anim\male\still4_08.rtm", 6, "A3\Characters_F\Heads\Anim\male\still4_09.rtm", 4, "A3\Characters_F\Heads\Anim\male\still4_10.rtm", 6};
			};
			class Dead
			{
				type = "compound";
				class Items
				{
					class DeadFace: MaskFace_A3 {};
				};
			};
			class DeadFace: RTM_Face
			{
				anims[] = {"A3\Characters_F\Heads\Anim\male\Dead.rtm", 1};
				animsAI[] = {"A3\Characters_F\Heads\Anim\male\Dead.rtm", 1};
			};
			class Eyes
			{
				eyelidDownMaxAngle = 3.14;
				eyelidDownStartAngle = 0;
				eyelidUpMaxAngle = 3.14;
				eyelidUpStartAngle = 0;
				eyeMaxAngle = 0.26;
				type = "eyes";
			};
			class Hurt
			{
				type = "compound";
				class Items
				{
					class HurtFace: MaskFace_A3 {};
					class Lipsync: LipMask_A3 {};
				};
			};
			class HurtFace: RTM_Face
			{
				anims[] = {"A3\Characters_F\Heads\Anim\male\still1_02.rtm", 3, "A3\Characters_F\Heads\Anim\male\still1_05.rtm", 4, "A3\Characters_F\Heads\Anim\male\still1_06.rtm", 2.6, "A3\Characters_F\Heads\Anim\male\still1_08.rtm", 3.3, "A3\Characters_F\Heads\Anim\male\still1_09.rtm", 3.6, "A3\Characters_F\Heads\Anim\male\still2_01.rtm", 2.6, "A3\Characters_F\Heads\Anim\male\still2_05.rtm", 4, "A3\Characters_F\Heads\Anim\male\still2_07.rtm", 3, "A3\Characters_F\Heads\Anim\male\still2_08.rtm", 3.3, "A3\Characters_F\Heads\Anim\male\still4_01.rtm", 4, "A3\Characters_F\Heads\Anim\male\still4_02.rtm", 5, "A3\Characters_F\Heads\Anim\male\still4_03.rtm", 6, "A3\Characters_F\Heads\Anim\male\still4_04.rtm", 4, "A3\Characters_F\Heads\Anim\male\still4_05.rtm", 5, "A3\Characters_F\Heads\Anim\male\still4_06.rtm", 6, "A3\Characters_F\Heads\Anim\male\still4_07.rtm", 4, "A3\Characters_F\Heads\Anim\male\still4_08.rtm", 6, "A3\Characters_F\Heads\Anim\male\still4_09.rtm", 4, "A3\Characters_F\Heads\Anim\male\still4_10.rtm", 6};
				animsAI[] = {"A3\Characters_F\Heads\Anim\male\1a_frown_170_l.rtm", 5, "A3\Characters_F\Heads\Anim\male\1b_frown_165_l.rtm", 5, "A3\Characters_F\Heads\Anim\male\1c_frown_110_r.rtm", 3, "A3\Characters_F\Heads\Anim\male\1d_frown_180_l.rtm", 6, "A3\Characters_F\Heads\Anim\male\1e_frown_180_r.rtm", 6, "A3\Characters_F\Heads\Anim\male\1g_frown_90_l.rtm", 3, "A3\Characters_F\Heads\Anim\male\1h_frown_150_r.rtm", 4, "A3\Characters_F\Heads\Anim\male\1i_frown_180_l.rtm", 5, "A3\Characters_F\Heads\Anim\male\1j_frown_200_r.rtm", 6, "A3\Characters_F\Heads\Anim\male\1j_neutral_200_l.rtm", 5, "A3\Characters_F\Heads\Anim\male\2a_frown_80_l.rtm", 2.5, "A3\Characters_F\Heads\Anim\male\2b_frown_190_r.rtm", 5, "A3\Characters_F\Heads\Anim\male\2b_neutral_190_r.rtm", 5, "A3\Characters_F\Heads\Anim\male\2c_frown_110_r.rtm", 4, "A3\Characters_F\Heads\Anim\male\2c_neutral_110_r.rtm", 4, "A3\Characters_F\Heads\Anim\male\2d_frown_120_r.rtm", 4, "A3\Characters_F\Heads\Anim\male\2e_frown_200_r.rtm", 6, "A3\Characters_F\Heads\Anim\male\2f_frown_80_l.rtm", 2.5, "A3\Characters_F\Heads\Anim\male\2f_neutral_80_l.rtm", 2.5, "A3\Characters_F\Heads\Anim\male\2g_frown_120_l.rtm", 5, "A3\Characters_F\Heads\Anim\male\2g_neutral_120_l.rtm", 4, "A3\Characters_F\Heads\Anim\male\2h_frown_120_r.rtm", 4, "A3\Characters_F\Heads\Anim\male\2h_neutral_120_l.rtm", 4, "A3\Characters_F\Heads\Anim\male\1a_frown_170_l.rtm", 5, "A3\Characters_F\Heads\Anim\male\1a_neutral_170_l.rtm", 5, "A3\Characters_F\Heads\Anim\male\1b_frown_165_l.rtm", 5, "A3\Characters_F\Heads\Anim\male\1b_neutral_165_r.rtm", 5, "A3\Characters_F\Heads\Anim\male\1c_frown_110_r.rtm", 3, "A3\Characters_F\Heads\Anim\male\1c_neutral_110_r.rtm", 3, "A3\Characters_F\Heads\Anim\male\1d_frown_180_l.rtm", 6, "A3\Characters_F\Heads\Anim\male\1d_neutral_180_l.rtm", 6, "A3\Characters_F\Heads\Anim\male\1e_frown_180_r.rtm", 6, "A3\Characters_F\Heads\Anim\male\1e_neutral_180_r.rtm", 6, "A3\Characters_F\Heads\Anim\male\1f_frown_240_r.rtm", 8, "A3\Characters_F\Heads\Anim\male\1f_neutral_240_r.rtm", 8, "A3\Characters_F\Heads\Anim\male\1g_frown_90_l.rtm", 3, "A3\Characters_F\Heads\Anim\male\1g_neutral_90_l.rtm", 3, "A3\Characters_F\Heads\Anim\male\1h_frown_150_r.rtm", 4, "A3\Characters_F\Heads\Anim\male\1h_neutral_150_r.rtm", 4, "A3\Characters_F\Heads\Anim\male\1i_frown_180_l.rtm", 5, "A3\Characters_F\Heads\Anim\male\1i_neutral_180_l.rtm", 5, "A3\Characters_F\Heads\Anim\male\1j_frown_200_r.rtm", 6, "A3\Characters_F\Heads\Anim\male\1j_neutral_200_l.rtm", 5, "A3\Characters_F\Heads\Anim\male\2a_frown_80_l.rtm", 2.5, "A3\Characters_F\Heads\Anim\male\2a_neutral_80_l.rtm", 2.5, "A3\Characters_F\Heads\Anim\male\2b_frown_190_r.rtm", 5, "A3\Characters_F\Heads\Anim\male\2b_neutral_190_r.rtm", 5, "A3\Characters_F\Heads\Anim\male\2c_frown_110_r.rtm", 4, "A3\Characters_F\Heads\Anim\male\2c_neutral_110_r.rtm", 4, "A3\Characters_F\Heads\Anim\male\2d_frown_120_r.rtm", 4, "A3\Characters_F\Heads\Anim\male\2d_neutral_120_r.rtm", 4, "A3\Characters_F\Heads\Anim\male\2e_frown_200_r.rtm", 6, "A3\Characters_F\Heads\Anim\male\2e_neutral_200_r.rtm", 6, "A3\Characters_F\Heads\Anim\male\2f_frown_80_l.rtm", 2.5, "A3\Characters_F\Heads\Anim\male\2f_neutral_80_l.rtm", 2.5, "A3\Characters_F\Heads\Anim\male\2g_frown_120_l.rtm", 5, "A3\Characters_F\Heads\Anim\male\2g_neutral_120_l.rtm", 4, "A3\Characters_F\Heads\Anim\male\2h_frown_120_r.rtm", 4, "A3\Characters_F\Heads\Anim\male\2h_neutral_120_l.rtm", 4, "A3\Characters_F\Heads\Anim\male\still3_03gulp.rtm", 3, "A3\Characters_F\Heads\Anim\male\still3_03gulp.rtm", 3, "A3\Characters_F\Heads\Anim\male\still3_03gulp.rtm", 3, "A3\Characters_F\Heads\Anim\male\still3_03gulp.rtm", 3};
			};
			class Lipsync
			{
				type = "lipsync";
				vizem[] = {"A3\Characters_F\Heads\Anim\male\Neutral.rtm", "A3\Characters_F\Heads\Anim\male\vizem\a.rtm", "A3\Characters_F\Heads\Anim\male\vizem\e2.rtm", "A3\Characters_F\Heads\Anim\male\vizem\f.rtm", "A3\Characters_F\Heads\Anim\male\vizem\m.rtm", "A3\Characters_F\Heads\Anim\male\vizem\y.rtm", "A3\Characters_F\Heads\Anim\male\vizem\v.rtm", "A3\Characters_F\Heads\Anim\male\vizem\i.rtm"};
			};
			class Neutral
			{
				type = "compound";
				class Items
				{
					class Lipsync: LipMask_A3 {};
					class NeutralFace: MaskFace_A3 {};
				};
			};
			class NeutralFace: RTM_Face
			{
				anims[] = {"A3\Characters_F\Heads\Anim\male\still1_02.rtm", 3, "A3\Characters_F\Heads\Anim\male\still1_05.rtm", 4, "A3\Characters_F\Heads\Anim\male\still1_06.rtm", 2.6, "A3\Characters_F\Heads\Anim\male\still1_08.rtm", 3.3, "A3\Characters_F\Heads\Anim\male\still1_09.rtm", 3.6, "A3\Characters_F\Heads\Anim\male\still2_01.rtm", 2.6, "A3\Characters_F\Heads\Anim\male\still2_05.rtm", 4, "A3\Characters_F\Heads\Anim\male\still2_07.rtm", 3, "A3\Characters_F\Heads\Anim\male\still2_08.rtm", 3.3, "A3\Characters_F\Heads\Anim\male\still4_01.rtm", 4, "A3\Characters_F\Heads\Anim\male\still4_02.rtm", 5, "A3\Characters_F\Heads\Anim\male\still4_03.rtm", 6, "A3\Characters_F\Heads\Anim\male\still4_04.rtm", 4, "A3\Characters_F\Heads\Anim\male\still4_05.rtm", 5, "A3\Characters_F\Heads\Anim\male\still4_06.rtm", 6, "A3\Characters_F\Heads\Anim\male\still4_07.rtm", 4, "A3\Characters_F\Heads\Anim\male\still4_08.rtm", 6, "A3\Characters_F\Heads\Anim\male\still4_09.rtm", 4, "A3\Characters_F\Heads\Anim\male\still4_10.rtm", 6};
				animsAI[] = {"A3\Characters_F\Heads\Anim\male\1a_frown_170_l.rtm", 5, "A3\Characters_F\Heads\Anim\male\1a_neutral_170_l.rtm", 5, "A3\Characters_F\Heads\Anim\male\1a_smile_170_l.rtm", 5, "A3\Characters_F\Heads\Anim\male\1b_frown_165_l.rtm", 5, "A3\Characters_F\Heads\Anim\male\1b_neutral_165_r.rtm", 5, "A3\Characters_F\Heads\Anim\male\1b_smile_165_l.rtm", 5, "A3\Characters_F\Heads\Anim\male\1c_frown_110_r.rtm", 3, "A3\Characters_F\Heads\Anim\male\1c_neutral_110_r.rtm", 3, "A3\Characters_F\Heads\Anim\male\1c_smile_110_r.rtm", 3, "A3\Characters_F\Heads\Anim\male\1d_frown_180_l.rtm", 6, "A3\Characters_F\Heads\Anim\male\1d_neutral_180_l.rtm", 6, "A3\Characters_F\Heads\Anim\male\1d_smile_180_l.rtm", 6, "A3\Characters_F\Heads\Anim\male\1e_frown_180_r.rtm", 6, "A3\Characters_F\Heads\Anim\male\1e_neutral_180_r.rtm", 6, "A3\Characters_F\Heads\Anim\male\1e_smile_180_l.rtm", 6, "A3\Characters_F\Heads\Anim\male\1f_frown_240_r.rtm", 8, "A3\Characters_F\Heads\Anim\male\1f_neutral_240_r.rtm", 8, "A3\Characters_F\Heads\Anim\male\1f_smile_240_r.rtm", 8, "A3\Characters_F\Heads\Anim\male\1g_frown_90_l.rtm", 3, "A3\Characters_F\Heads\Anim\male\1g_neutral_90_l.rtm", 3, "A3\Characters_F\Heads\Anim\male\1g_smile_90_l.rtm", 3, "A3\Characters_F\Heads\Anim\male\1h_frown_150_r.rtm", 4, "A3\Characters_F\Heads\Anim\male\1h_neutral_150_r.rtm", 4, "A3\Characters_F\Heads\Anim\male\1h_smile_150_r.rtm", 4, "A3\Characters_F\Heads\Anim\male\1i_frown_180_l.rtm", 5, "A3\Characters_F\Heads\Anim\male\1i_neutral_180_l.rtm", 5, "A3\Characters_F\Heads\Anim\male\1i_smile_180_l.rtm", 5, "A3\Characters_F\Heads\Anim\male\1j_frown_200_r.rtm", 6, "A3\Characters_F\Heads\Anim\male\1j_neutral_200_l.rtm", 5, "A3\Characters_F\Heads\Anim\male\1j_smile_200_r.rtm", 5, "A3\Characters_F\Heads\Anim\male\2a_frown_80_l.rtm", 2.5, "A3\Characters_F\Heads\Anim\male\2a_neutral_80_l.rtm", 2.5, "A3\Characters_F\Heads\Anim\male\2a_smile_80_l.rtm", 2.5, "A3\Characters_F\Heads\Anim\male\2b_frown_190_r.rtm", 5, "A3\Characters_F\Heads\Anim\male\2b_neutral_190_r.rtm", 5, "A3\Characters_F\Heads\Anim\male\2b_smile_190_r.rtm", 5, "A3\Characters_F\Heads\Anim\male\2c_frown_110_r.rtm", 4, "A3\Characters_F\Heads\Anim\male\2c_neutral_110_r.rtm", 4, "A3\Characters_F\Heads\Anim\male\2c_smile_110_l.rtm", 4, "A3\Characters_F\Heads\Anim\male\2d_frown_120_r.rtm", 4, "A3\Characters_F\Heads\Anim\male\2d_neutral_120_r.rtm", 4, "A3\Characters_F\Heads\Anim\male\2d_smile_120_l.rtm", 4, "A3\Characters_F\Heads\Anim\male\2e_frown_200_r.rtm", 6, "A3\Characters_F\Heads\Anim\male\2e_neutral_200_r.rtm", 6, "A3\Characters_F\Heads\Anim\male\2e_smile_200_l.rtm", 6, "A3\Characters_F\Heads\Anim\male\2f_frown_80_l.rtm", 2.5, "A3\Characters_F\Heads\Anim\male\2f_neutral_80_l.rtm", 2.5, "A3\Characters_F\Heads\Anim\male\2f_smile_80_l.rtm", 2.5, "A3\Characters_F\Heads\Anim\male\2g_frown_120_l.rtm", 5, "A3\Characters_F\Heads\Anim\male\2g_neutral_120_l.rtm", 4, "A3\Characters_F\Heads\Anim\male\2g_smile_120_l.rtm", 4, "A3\Characters_F\Heads\Anim\male\2h_frown_120_r.rtm", 4, "A3\Characters_F\Heads\Anim\male\2h_neutral_120_l.rtm", 4, "A3\Characters_F\Heads\Anim\male\2h_smile_120_l.rtm", 4, "A3\Characters_F\Heads\Anim\male\still1_02.rtm", 3, "A3\Characters_F\Heads\Anim\male\still1_05.rtm", 4, "A3\Characters_F\Heads\Anim\male\still1_06.rtm", 2.6, "A3\Characters_F\Heads\Anim\male\still1_08.rtm", 3.3, "A3\Characters_F\Heads\Anim\male\still1_09.rtm", 3.6, "A3\Characters_F\Heads\Anim\male\still2_01.rtm", 2.6, "A3\Characters_F\Heads\Anim\male\still2_05.rtm", 4, "A3\Characters_F\Heads\Anim\male\still2_07.rtm", 3, "A3\Characters_F\Heads\Anim\male\still2_08.rtm", 3.3, "A3\Characters_F\Heads\Anim\male\still4_01.rtm", 4, "A3\Characters_F\Heads\Anim\male\still4_02.rtm", 5, "A3\Characters_F\Heads\Anim\male\still4_03.rtm", 6, "A3\Characters_F\Heads\Anim\male\still4_04.rtm", 4, "A3\Characters_F\Heads\Anim\male\still4_05.rtm", 5, "A3\Characters_F\Heads\Anim\male\still4_06.rtm", 6, "A3\Characters_F\Heads\Anim\male\still4_07.rtm", 4, "A3\Characters_F\Heads\Anim\male\still4_08.rtm", 6, "A3\Characters_F\Heads\Anim\male\still4_09.rtm", 4, "A3\Characters_F\Heads\Anim\male\still4_10.rtm", 6};
			};
			class RTM_Face
			{
				anim = "A3\Characters_F\Heads\Anim\male\Neutral.rtm";
				anims[] = {"A3\Characters_F\Heads\Anim\male\Neutral.rtm", 1};
				animsAI[] = {"A3\Characters_F\Heads\Anim\male\Neutral.rtm", 1};
				type = "rtm";
			};
			class Safe
			{
				type = "compound";
				class Items
				{
					class Lipsync: LipMask_A3 {};
					class SafeFace: MaskFace_A3 {};
				};
			};
			class SafeFace: RTM_Face
			{
				anims[] = {"A3\Characters_F\Heads\Anim\male\still1_02.rtm", 3, "A3\Characters_F\Heads\Anim\male\still1_05.rtm", 4, "A3\Characters_F\Heads\Anim\male\still1_06.rtm", 2.6, "A3\Characters_F\Heads\Anim\male\still1_08.rtm", 3.3, "A3\Characters_F\Heads\Anim\male\still1_09.rtm", 3.6, "A3\Characters_F\Heads\Anim\male\still2_01.rtm", 2.6, "A3\Characters_F\Heads\Anim\male\still2_05.rtm", 4, "A3\Characters_F\Heads\Anim\male\still2_07.rtm", 3, "A3\Characters_F\Heads\Anim\male\still2_08.rtm", 3.3, "A3\Characters_F\Heads\Anim\male\still2_09.rtm", 4.6, "A3\Characters_F\Heads\Anim\male\still4_01.rtm", 4, "A3\Characters_F\Heads\Anim\male\still4_02.rtm", 5, "A3\Characters_F\Heads\Anim\male\still4_03.rtm", 6, "A3\Characters_F\Heads\Anim\male\still4_04.rtm", 4, "A3\Characters_F\Heads\Anim\male\still4_05.rtm", 5, "A3\Characters_F\Heads\Anim\male\still4_06.rtm", 6, "A3\Characters_F\Heads\Anim\male\still4_07.rtm", 4, "A3\Characters_F\Heads\Anim\male\still4_08.rtm", 6, "A3\Characters_F\Heads\Anim\male\still4_09.rtm", 4, "A3\Characters_F\Heads\Anim\male\still4_10.rtm", 6};
				animsAI[] = {"A3\Characters_F\Heads\Anim\male\1a_neutral_170_l.rtm", 5, "A3\Characters_F\Heads\Anim\male\1a_smile_170_l.rtm", 5, "A3\Characters_F\Heads\Anim\male\1b_neutral_165_r.rtm", 5, "A3\Characters_F\Heads\Anim\male\1b_smile_165_l.rtm", 5, "A3\Characters_F\Heads\Anim\male\1c_neutral_110_r.rtm", 3, "A3\Characters_F\Heads\Anim\male\1c_smile_110_r.rtm", 3, "A3\Characters_F\Heads\Anim\male\1d_neutral_180_l.rtm", 6, "A3\Characters_F\Heads\Anim\male\1d_smile_180_l.rtm", 6, "A3\Characters_F\Heads\Anim\male\1e_neutral_180_r.rtm", 6, "A3\Characters_F\Heads\Anim\male\1e_smile_180_l.rtm", 6, "A3\Characters_F\Heads\Anim\male\1f_neutral_240_r.rtm", 8, "A3\Characters_F\Heads\Anim\male\1f_smile_240_r.rtm", 8, "A3\Characters_F\Heads\Anim\male\1g_neutral_90_l.rtm", 3, "A3\Characters_F\Heads\Anim\male\1g_smile_90_l.rtm", 3, "A3\Characters_F\Heads\Anim\male\1h_neutral_150_r.rtm", 4, "A3\Characters_F\Heads\Anim\male\1h_smile_150_r.rtm", 4, "A3\Characters_F\Heads\Anim\male\1i_neutral_180_l.rtm", 5, "A3\Characters_F\Heads\Anim\male\1i_smile_180_l.rtm", 5, "A3\Characters_F\Heads\Anim\male\1j_neutral_200_l.rtm", 5, "A3\Characters_F\Heads\Anim\male\1j_smile_200_r.rtm", 5, "A3\Characters_F\Heads\Anim\male\2a_neutral_80_l.rtm", 2.5, "A3\Characters_F\Heads\Anim\male\2a_smile_80_l.rtm", 2.5, "A3\Characters_F\Heads\Anim\male\2b_neutral_190_r.rtm", 5, "A3\Characters_F\Heads\Anim\male\2b_smile_190_r.rtm", 5, "A3\Characters_F\Heads\Anim\male\2c_neutral_110_r.rtm", 4, "A3\Characters_F\Heads\Anim\male\2c_smile_110_l.rtm", 4, "A3\Characters_F\Heads\Anim\male\2d_neutral_120_r.rtm", 4, "A3\Characters_F\Heads\Anim\male\2d_smile_120_l.rtm", 4, "A3\Characters_F\Heads\Anim\male\2e_neutral_200_r.rtm", 6, "A3\Characters_F\Heads\Anim\male\2e_smile_200_l.rtm", 6, "A3\Characters_F\Heads\Anim\male\2f_neutral_80_l.rtm", 2.5, "A3\Characters_F\Heads\Anim\male\2f_smile_80_l.rtm", 2.5, "A3\Characters_F\Heads\Anim\male\2g_neutral_120_l.rtm", 4, "A3\Characters_F\Heads\Anim\male\2g_smile_120_l.rtm", 4, "A3\Characters_F\Heads\Anim\male\2h_neutral_120_l.rtm", 4, "A3\Characters_F\Heads\Anim\male\2h_smile_120_l.rtm", 4, "A3\Characters_F\Heads\Anim\male\1a_frown_170_l.rtm", 5, "A3\Characters_F\Heads\Anim\male\1a_neutral_170_l.rtm", 5, "A3\Characters_F\Heads\Anim\male\1a_smile_170_l.rtm", 5, "A3\Characters_F\Heads\Anim\male\1b_frown_165_l.rtm", 5, "A3\Characters_F\Heads\Anim\male\1b_neutral_165_r.rtm", 5, "A3\Characters_F\Heads\Anim\male\1b_smile_165_l.rtm", 5, "A3\Characters_F\Heads\Anim\male\1c_frown_110_r.rtm", 3, "A3\Characters_F\Heads\Anim\male\1c_neutral_110_r.rtm", 3, "A3\Characters_F\Heads\Anim\male\1c_smile_110_r.rtm", 3, "A3\Characters_F\Heads\Anim\male\1d_frown_180_l.rtm", 6, "A3\Characters_F\Heads\Anim\male\1d_neutral_180_l.rtm", 6, "A3\Characters_F\Heads\Anim\male\1d_smile_180_l.rtm", 6, "A3\Characters_F\Heads\Anim\male\1e_frown_180_r.rtm", 6, "A3\Characters_F\Heads\Anim\male\1e_neutral_180_r.rtm", 6, "A3\Characters_F\Heads\Anim\male\1e_smile_180_l.rtm", 6, "A3\Characters_F\Heads\Anim\male\1f_frown_240_r.rtm", 8, "A3\Characters_F\Heads\Anim\male\1f_neutral_240_r.rtm", 8, "A3\Characters_F\Heads\Anim\male\1f_smile_240_r.rtm", 8, "A3\Characters_F\Heads\Anim\male\1g_frown_90_l.rtm", 3, "A3\Characters_F\Heads\Anim\male\1g_neutral_90_l.rtm", 3, "A3\Characters_F\Heads\Anim\male\1g_smile_90_l.rtm", 3, "A3\Characters_F\Heads\Anim\male\1h_frown_150_r.rtm", 4, "A3\Characters_F\Heads\Anim\male\1h_neutral_150_r.rtm", 4, "A3\Characters_F\Heads\Anim\male\1h_smile_150_r.rtm", 4, "A3\Characters_F\Heads\Anim\male\1i_frown_180_l.rtm", 5, "A3\Characters_F\Heads\Anim\male\1i_neutral_180_l.rtm", 5, "A3\Characters_F\Heads\Anim\male\1i_smile_180_l.rtm", 5, "A3\Characters_F\Heads\Anim\male\1j_frown_200_r.rtm", 6, "A3\Characters_F\Heads\Anim\male\1j_neutral_200_l.rtm", 5, "A3\Characters_F\Heads\Anim\male\1j_smile_200_r.rtm", 5, "A3\Characters_F\Heads\Anim\male\2a_frown_80_l.rtm", 2.5, "A3\Characters_F\Heads\Anim\male\2a_neutral_80_l.rtm", 2.5, "A3\Characters_F\Heads\Anim\male\2a_smile_80_l.rtm", 2.5, "A3\Characters_F\Heads\Anim\male\2b_frown_190_r.rtm", 5, "A3\Characters_F\Heads\Anim\male\2b_neutral_190_r.rtm", 5, "A3\Characters_F\Heads\Anim\male\2b_smile_190_r.rtm", 5, "A3\Characters_F\Heads\Anim\male\2c_frown_110_r.rtm", 4, "A3\Characters_F\Heads\Anim\male\2c_neutral_110_r.rtm", 4, "A3\Characters_F\Heads\Anim\male\2c_smile_110_l.rtm", 4, "A3\Characters_F\Heads\Anim\male\2d_frown_120_r.rtm", 4, "A3\Characters_F\Heads\Anim\male\2d_neutral_120_r.rtm", 4, "A3\Characters_F\Heads\Anim\male\2d_smile_120_l.rtm", 4, "A3\Characters_F\Heads\Anim\male\2e_frown_200_r.rtm", 6, "A3\Characters_F\Heads\Anim\male\2e_neutral_200_r.rtm", 6, "A3\Characters_F\Heads\Anim\male\2e_smile_200_l.rtm", 6, "A3\Characters_F\Heads\Anim\male\2f_frown_80_l.rtm", 2.5, "A3\Characters_F\Heads\Anim\male\2f_neutral_80_l.rtm", 2.5, "A3\Characters_F\Heads\Anim\male\2f_smile_80_l.rtm", 2.5, "A3\Characters_F\Heads\Anim\male\2g_frown_120_l.rtm", 5, "A3\Characters_F\Heads\Anim\male\2g_neutral_120_l.rtm", 4, "A3\Characters_F\Heads\Anim\male\2g_smile_120_l.rtm", 4, "A3\Characters_F\Heads\Anim\male\2h_frown_120_r.rtm", 4, "A3\Characters_F\Heads\Anim\male\2h_neutral_120_l.rtm", 4, "A3\Characters_F\Heads\Anim\male\2h_smile_120_l.rtm", 4, "A3\Characters_F\Heads\Anim\male\still1_02.rtm", 3, "A3\Characters_F\Heads\Anim\male\still1_05.rtm", 4, "A3\Characters_F\Heads\Anim\male\still1_06.rtm", 2.6, "A3\Characters_F\Heads\Anim\male\still1_08.rtm", 3.3, "A3\Characters_F\Heads\Anim\male\still1_09.rtm", 3.6, "A3\Characters_F\Heads\Anim\male\still2_01.rtm", 2.6, "A3\Characters_F\Heads\Anim\male\still2_05.rtm", 4, "A3\Characters_F\Heads\Anim\male\still2_07.rtm", 3, "A3\Characters_F\Heads\Anim\male\still2_08.rtm", 3.3, "A3\Characters_F\Heads\Anim\male\still2_09.rtm", 4.6, "A3\Characters_F\Heads\Anim\male\still4_01.rtm", 4, "A3\Characters_F\Heads\Anim\male\still4_02.rtm", 5, "A3\Characters_F\Heads\Anim\male\still4_03.rtm", 6, "A3\Characters_F\Heads\Anim\male\still4_04.rtm", 4, "A3\Characters_F\Heads\Anim\male\still4_05.rtm", 5, "A3\Characters_F\Heads\Anim\male\still4_06.rtm", 6, "A3\Characters_F\Heads\Anim\male\still4_07.rtm", 4, "A3\Characters_F\Heads\Anim\male\still4_08.rtm", 6, "A3\Characters_F\Heads\Anim\male\still4_09.rtm", 4, "A3\Characters_F\Heads\Anim\male\still4_10.rtm", 6};
			};
			class Unconscious
			{
				type = "compound";
				class Items
				{
					class UnconsciousFace: MaskFace_A3 {};
				};
			};
			class UnconsciousFace: RTM_Face
			{
				anims[] = {"A3\Characters_F\Heads\Anim\male\unconscious.rtm", 1};
				animsAI[] = {"A3\Characters_F\Heads\Anim\male\unconscious.rtm", 1};
			};
		};
		class Wounds
		{
			mat[] = {"A3\Characters_F\Heads\Data\m_white_01.rvmat", "A3\characters_f\Heads\Data\m_white_01_injury.rvmat", "A3\characters_f\Heads\Data\m_white_01_injury.rvmat"};
			tex[] = {};
		};
	};
	class DefaultHead_A3: Default_A3
	{
		model = "\A3\characters_f\Heads\m_white_01";
		class Wounds
		{
			mat[] = {"A3\Characters_F\Heads\Data\m_white_01.rvmat", "A3\characters_f\Heads\Data\m_white_01_injury.rvmat", "A3\characters_f\Heads\Data\m_white_01_injury.rvmat", "A3\Characters_F\Heads\Data\m_white_02.rvmat", "A3\characters_f\Heads\Data\m_white_02_injury.rvmat", "A3\characters_f\Heads\Data\m_white_02_injury.rvmat", "A3\Characters_F\Heads\Data\m_white_03.rvmat", "A3\characters_f\Heads\Data\m_white_03_injury.rvmat", "A3\characters_f\Heads\Data\m_white_03_injury.rvmat", "A3\Characters_F\Heads\Data\m_white_04.rvmat", "A3\characters_f\Heads\Data\m_white_04_injury.rvmat", "A3\characters_f\Heads\Data\m_white_04_injury.rvmat", "A3\Characters_F\Heads\Data\m_white_05.rvmat", "A3\characters_f\Heads\Data\m_white_05_injury.rvmat", "A3\characters_f\Heads\Data\m_white_05_injury.rvmat", "A3\Characters_F\Heads\Data\m_white_06.rvmat", "A3\characters_f\Heads\Data\m_white_06_injury.rvmat", "A3\characters_f\Heads\Data\m_white_06_injury.rvmat", "A3\Characters_F\Heads\Data\m_white_07.rvmat", "A3\characters_f\Heads\Data\m_white_07_injury.rvmat", "A3\characters_f\Heads\Data\m_white_07_injury.rvmat", "A3\Characters_F\Heads\Data\m_white_08.rvmat", "A3\characters_f\Heads\Data\m_white_08_injury.rvmat", "A3\characters_f\Heads\Data\m_white_08_injury.rvmat", "A3\Characters_F\Heads\Data\m_white_09.rvmat", "A3\characters_f\Heads\Data\m_white_09_injury.rvmat", "A3\characters_f\Heads\Data\m_white_09_injury.rvmat", "A3\Characters_F\Heads\Data\m_white_10.rvmat", "A3\characters_f\Heads\Data\m_white_10_injury.rvmat", "A3\characters_f\Heads\Data\m_white_10_injury.rvmat", "A3\Characters_F\Heads\Data\m_white_11.rvmat", "A3\characters_f\Heads\Data\m_white_11_injury.rvmat", "A3\characters_f\Heads\Data\m_white_11_injury.rvmat", "A3\Characters_F\Heads\Data\m_white_12.rvmat", "A3\characters_f\Heads\Data\m_white_12_injury.rvmat", "A3\characters_f\Heads\Data\m_white_12_injury.rvmat", "A3\Characters_F\Heads\Data\m_white_13.rvmat", "A3\characters_f\Heads\Data\m_white_13_injury.rvmat", "A3\characters_f\Heads\Data\m_white_13_injury.rvmat", "A3\Characters_F\Heads\Data\m_white_14.rvmat", "A3\characters_f\Heads\Data\m_white_14_injury.rvmat", "A3\characters_f\Heads\Data\m_white_14_injury.rvmat", "A3\Characters_F\Heads\Data\m_white_15.rvmat", "A3\characters_f\Heads\Data\m_white_15_injury.rvmat", "A3\characters_f\Heads\Data\m_white_15_injury.rvmat", "A3\Characters_F_EPB\Heads\Data\m_white_16.rvmat", "A3\Characters_F_EPB\Heads\Data\m_white_16_injury.rvmat", "A3\Characters_F_EPB\Heads\Data\m_white_16_injury.rvmat", "A3\Characters_F_EPB\Heads\Data\m_white_17.rvmat", "A3\Characters_F_EPB\Heads\Data\m_white_17_injury.rvmat", "A3\Characters_F_EPB\Heads\Data\m_white_17_injury.rvmat", "A3\Characters_F_EPB\Heads\Data\m_white_18.rvmat", "A3\Characters_F_EPB\Heads\Data\m_white_18_injury.rvmat", "A3\Characters_F_EPB\Heads\Data\m_white_18_injury.rvmat", "A3\Characters_F_EPB\Heads\Data\m_white_19.rvmat", "A3\Characters_F_EPB\Heads\Data\m_white_19_injury.rvmat", "A3\Characters_F_EPB\Heads\Data\m_white_19_injury.rvmat", "A3\Characters_F_EPB\Heads\Data\m_white_20.rvmat", "A3\Characters_F_EPB\Heads\Data\m_white_20_injury.rvmat", "A3\Characters_F_EPB\Heads\Data\m_white_20_injury.rvmat", "A3\Characters_F_EPB\Heads\Data\m_white_21.rvmat", "A3\Characters_F_EPB\Heads\Data\m_white_21_injury.rvmat", "A3\Characters_F_EPB\Heads\Data\m_white_21_injury.rvmat", "A3\Characters_F\Heads\Data\hl_white_hairy_muscular.rvmat", "A3\Characters_F\Heads\Data\hl_white_hairy_muscular_injury.rvmat", "A3\Characters_F\Heads\Data\hl_white_hairy_muscular_injury.rvmat", "A3\Characters_F\Heads\Data\hl_white_bald_muscular.rvmat", "A3\Characters_F\Heads\Data\hl_white_bald_muscular_injury.rvmat", "A3\Characters_F\Heads\Data\hl_white_bald_muscular_injury.rvmat", "A3\Characters_F\Heads\Data\hl_white_old.rvmat", "A3\Characters_F\Heads\Data\hl_white_old_injury.rvmat", "A3\Characters_F\Heads\Data\hl_white_old_injury.rvmat", "A3\Characters_F\Heads\Data\hl_white.rvmat", "A3\Characters_F\Heads\Data\hl_white_injury.rvmat", "A3\Characters_F\Heads\Data\hl_white_injury.rvmat"};
			tex[] = {};
		};
	};
	class Dwarden: DefaultHead_A3
	{
		model = "\A3\Characters_F\Heads\m_dwarden";
		class Wounds
		{
			mat[] = {"A3\Characters_F\Heads\Data\m_dwarden.rvmat", "A3\Characters_F\Heads\Data\m_dwarden_injury.rvmat", "A3\Characters_F\Heads\Data\m_dwarden_injury.rvmat"};
			tex[] = {};
		};
	};
	class GreekHead_A3: Default_A3
	{
		model = "\A3\Characters_F\Heads\m_greek_01";
		selectionHeadWound = "injury_head";
		selectionPersonality = "personality";
		class Wounds
		{
			mat[] = {"A3\Characters_F\Heads\Data\m_greek_01.rvmat", "A3\Characters_F\Heads\Data\m_greek_01_injury.rvmat", "A3\Characters_F\Heads\Data\m_greek_01_injury.rvmat", "A3\Characters_F\Heads\Data\m_greek_02.rvmat", "A3\Characters_F\Heads\Data\m_greek_02_injury.rvmat", "A3\Characters_F\Heads\Data\m_greek_02_injury.rvmat", "A3\Characters_F\Heads\Data\m_greek_03.rvmat", "A3\Characters_F\Heads\Data\m_greek_03_injury.rvmat", "A3\Characters_F\Heads\Data\m_greek_03_injury.rvmat", "A3\Characters_F\Heads\Data\m_greek_04.rvmat", "A3\Characters_F\Heads\Data\m_greek_04_injury.rvmat", "A3\Characters_F\Heads\Data\m_greek_04_injury.rvmat"};
			tex[] = {};
		};
	};
	class Hladas: DefaultHead_A3
	{
		model = "\A3\Characters_F\Heads\m_hladas";
		class Wounds
		{
			mat[] = {"A3\Characters_F\Heads\Data\m_hladas.rvmat", "A3\Characters_F\Heads\Data\m_hladas_injury.rvmat", "A3\Characters_F\Heads\Data\m_hladas_injury.rvmat"};
			tex[] = {};
		};
	};
	class IG_Leader: GreekHead_A3
	{
		model = "\A3\Characters_F_EPB\Heads\m_IG_leader.p3d";
		class Wounds
		{
			mat[] = {"A3\Characters_F_EPB\Heads\Data\m_IG_leader.rvmat", "A3\Characters_F_EPB\Heads\Data\m_IG_leader_injury.rvmat", "A3\Characters_F_EPB\Heads\Data\m_IG_leader_injury.rvmat", "A3\Characters_F_EPB\Heads\Data\hl_stavrou_dirty.rvmat", "A3\Characters_F_EPB\Heads\Data\hl_stavrou_dirty_injury.rvmat", "A3\Characters_F_EPB\Heads\Data\hl_stavrou_dirty_injury.rvmat"};
			tex[] = {};
		};
	};
	class Ivan: DefaultHead_A3
	{
		model = "\A3\Characters_F\Heads\m_ivan";
		class Wounds
		{
			mat[] = {"A3\Characters_F\Heads\Data\m_ivan.rvmat", "A3\Characters_F\Heads\Data\m_ivan_injury.rvmat", "A3\Characters_F\Heads\Data\m_ivan_injury.rvmat"};
			tex[] = {};
		};
	};
	class Jay: DefaultHead_A3
	{
		model = "\A3\Characters_F\Heads\m_jay";
		class Wounds
		{
			mat[] = {"A3\Characters_F\Heads\Data\m_jay.rvmat", "A3\Characters_F\Heads\Data\m_jay_injury.rvmat", "A3\Characters_F\Heads\Data\m_jay_injury.rvmat"};
			tex[] = {};
		};
	};
	class Kerry: Miller {};
	class KerryHead_A3: DefaultHead_A3
	{
		class Wounds
		{
			mat[] = {"A3\Characters_F_EPA\Heads\Data\m_kerry_A.rvmat", "A3\Characters_F_EPA\Heads\Data\m_kerry_A_injury.rvmat", "A3\Characters_F_EPA\Heads\Data\m_kerry_A_injury.rvmat", "A3\Characters_F_EPA\Heads\Data\m_kerry_B1.rvmat", "A3\Characters_F_EPA\Heads\Data\m_kerry_B1_injury.rvmat", "A3\Characters_F_EPA\Heads\Data\m_kerry_B1_injury.rvmat", "A3\Characters_F_EPA\Heads\Data\m_kerry_B2.rvmat", "A3\Characters_F_EPA\Heads\Data\m_kerry_B2_injury.rvmat", "A3\Characters_F_EPA\Heads\Data\m_kerry_B2_injury.rvmat", "A3\Characters_F_EPA\Heads\Data\m_kerry_C.rvmat", "A3\Characters_F_EPA\Heads\Data\m_kerry_C_injury.rvmat", "A3\Characters_F_EPA\Heads\Data\m_kerry_C_injury.rvmat", "A3\Characters_F_EPB\Heads\Data\hl_hairy_dirty.rvmat", "A3\Characters_F_EPB\Heads\Data\hl_hairy_dirty_injury.rvmat", "A3\Characters_F_EPB\Heads\Data\hl_hairy_dirty_injury.rvmat"};
			tex[] = {};
		};
	};
	class Land
	{
		friction = 20;
		maxAmp = 0.1;
		maxSpeed = 4;
		movement = 260;
		radius = 0.3;
	};
	class MaskHead_A3: Default_A3
	{
		model = "\A3\Characters_F\Heads\m_white_01";
		class Wounds
		{
			mat[] = {"A3\characters_f\heads\data\m_white_01.rvmat", "A3\characters_f\heads\data\m_white_01_injury.rvmat", "A3\characters_f\heads\data\m_white_01_injury.rvmat"};
			tex[] = {};
		};
	};
	class MaskHead_A3_1: MaskHead_A3
	{
		model = "\A3\Characters_F\Heads\m_white_01";
	};
	class MaskHead_A3_1_Black: MaskHead_A3_1
	{
		class Wounds
		{
			mat[] = {"A3\characters_f\heads\data\m_white_01.rvmat", "A3\characters_f\heads\data\m_white_01_injury.rvmat", "A3\characters_f\heads\data\m_white_01_injury.rvmat"};
			tex[] = {};
		};
	};
	class MaskHead_A3_B: Default_A3
	{
		model = "\A3\Characters_F\Heads\m_white_01";
	};
	class MaskHead_A3_B_Black: MaskHead_A3_B
	{
		class Wounds
		{
			mat[] = {"A3\characters_f\heads\data\m_white_01.rvmat", "A3\characters_f\heads\data\m_white_01_injury.rvmat", "A3\characters_f\heads\data\m_white_01_injury.rvmat"};
			tex[] = {};
		};
	};
	class MaskHead_A3_Black: MaskHead_A3
	{
		class Wounds
		{
			mat[] = {"A3\characters_f\heads\data\m_african_01.rvmat", "A3\characters_f\heads\data\m_african_01_injury.rvmat", "A3\characters_f\heads\data\m_african_01_injury.rvmat"};
			tex[] = {};
		};
	};
	class Miller: DefaultHead_A3
	{
		model = "\A3\Characters_F\Heads\m_miller";
		class Wounds
		{
			mat[] = {"A3\Characters_F\Heads\Data\m_miller.rvmat", "A3\Characters_F\Heads\Data\m_miller_injury.rvmat", "A3\Characters_F\Heads\Data\m_miller_injury.rvmat"};
			tex[] = {};
		};
	};
	class NATOHead_A3: DefaultHead_A3
	{
		model = "\A3\Characters_F\Heads\m_white_01";
		selectionHeadWound = "injury_head";
		selectionPersonality = "personality";
	};
	class Nikos: GreekHead_A3
	{
		model = "\A3\Characters_F\Heads\m_nikos";
		class Wounds
		{
			mat[] = {"A3\Characters_F\Heads\Data\m_nikos.rvmat", "A3\Characters_F\Heads\Data\m_nikos_injury.rvmat", "A3\Characters_F\Heads\Data\m_nikos_injury.rvmat"};
			tex[] = {};
		};
	};
	class PersianHead_A3: Default_A3
	{
		model = "\A3\Characters_F\Heads\m_persian_01";
		selectionHeadWound = "injury_head";
		selectionPersonality = "personality";
		class Wounds
		{
			mat[] = {"A3\Characters_F\Heads\Data\m_persian_01.rvmat", "A3\Characters_F\Heads\Data\m_persian_01_injury.rvmat", "A3\Characters_F\Heads\Data\m_persian_01_injury.rvmat", "A3\Characters_F\Heads\Data\m_persian_02.rvmat", "A3\Characters_F\Heads\Data\m_persian_02_injury.rvmat", "A3\Characters_F\Heads\Data\m_persian_02_injury.rvmat", "A3\Characters_F\Heads\Data\m_persian_03.rvmat", "A3\Characters_F\Heads\Data\m_persian_03_injury.rvmat", "A3\Characters_F\Heads\Data\m_persian_03_injury.rvmat", "A3\Characters_F\Heads\Data\hl_white_hairy_muscular.rvmat", "A3\Characters_F\Heads\Data\hl_white_hairy_muscular_injury.rvmat", "A3\Characters_F\Heads\Data\hl_white_hairy_muscular_injury.rvmat", "A3\Characters_F\Heads\Data\hl_white_bald_muscular.rvmat", "A3\Characters_F\Heads\Data\hl_white_bald_muscular_injury.rvmat", "A3\Characters_F\Heads\Data\hl_white_bald_muscular_injury.rvmat", "A3\Characters_F\Heads\Data\hl_white_old.rvmat", "A3\Characters_F\Heads\Data\hl_white_old_injury.rvmat", "A3\Characters_F\Heads\Data\hl_white_old_injury.rvmat", "A3\Characters_F\Heads\Data\hl_white.rvmat", "A3\Characters_F\Heads\Data\hl_white_injury.rvmat", "A3\Characters_F\Heads\Data\hl_white_injury.rvmat"};
			tex[] = {};
		};
	};
	class Pettka: DefaultHead_A3
	{
		model = "\A3\Characters_F\Heads\m_pettka";
		class Wounds
		{
			mat[] = {"A3\Characters_F\Heads\Data\m_pettka.rvmat", "A3\Characters_F\Heads\Data\m_pettka_injury.rvmat", "A3\Characters_F\Heads\Data\m_pettka_injury.rvmat"};
			tex[] = {};
		};
	};
	class TanoanHead_A3: Default_A3
	{
		model = "\A3\Characters_F_Exp\Heads\m_tanoan_01.p3d";
		selectionHeadWound = "injury_head";
		selectionPersonality = "personality";
		class Wounds
		{
			mat[] = {"A3\Characters_F_Exp\Heads\Data\m_tanoan_01.rvmat", "A3\Characters_F_Exp\Heads\Data\m_tanoan_01_injury.rvmat", "A3\Characters_F_Exp\Heads\Data\m_tanoan_01_injury.rvmat", "A3\Characters_F_Exp\Heads\Data\hl_tanoan_bald_muscular.rvmat", "A3\Characters_F_Exp\Heads\Data\hl_tanoan_bald_muscular_injury.rvmat", "A3\Characters_F_Exp\Heads\Data\hl_tanoan_bald_muscular_injury.rvmat"};
			tex[] = {};
		};
	};
	class WomanHead_A3: Default_A3
	{
		model = "\A3\Characters_F\Heads\m_white_01.p3d";
		selectionHeadWound = "injury_head";
		selectionPersonality = "osobnost";
		class Grimaces
		{
			class Aware
			{
				type = "compound";
				class Items
				{
					class AwareFace: MaskFaceWoman_A3 {};
					class Lipsync: LipMask_A3 {};
				};
			};
			class AwareFace: RTM_Face
			{
				anims[] = {"A3\Characters_F\Heads\Anim\female\Aware.rtm", 1};
				animsAI[] = {"A3\Characters_F\Heads\Anim\female\Aware.rtm", 1};
			};
			class Combat
			{
				type = "compound";
				class Items
				{
					class CombatFace: MaskFaceWoman_A3 {};
					class Lipsync: LipMask_A3 {};
				};
			};
			class CombatFace: RTM_Face
			{
				anims[] = {"A3\Characters_F\Heads\Anim\female\Combat.rtm", 1};
				animsAI[] = {"A3\Characters_F\Heads\Anim\female\Combat.rtm", 1};
			};
			class Danger
			{
				type = "compound";
				class Items
				{
					class DangerFace: MaskFaceWoman_A3 {};
					class Lipsync: LipMask_A3 {};
				};
			};
			class DangerFace: RTM_Face
			{
				anims[] = {"A3\Characters_F\Heads\Anim\female\Danger.rtm", 1};
				animsAI[] = {"A3\Characters_F\Heads\Anim\female\Danger.rtm", 1};
			};
			class Dead
			{
				type = "compound";
				class Items
				{
					class DeadFace: MaskFaceWoman_A3 {};
				};
			};
			class DeadFace: RTM_Face
			{
				anims[] = {"A3\Characters_F\Heads\Anim\female\Dead.rtm", 1};
				animsAI[] = {"A3\Characters_F\Heads\Anim\female\Dead.rtm", 1};
			};
			class Eyes
			{
				eyelidDownMaxAngle = 0;
				eyelidDownStartAngle = 0;
				eyelidUpMaxAngle = 0;
				eyelidUpStartAngle = 0;
				eyeMaxAngle = 0.5;
				type = "eyes";
			};
			class Hurt
			{
				type = "compound";
				class Items
				{
					class HurtFace: MaskFaceWoman_A3 {};
					class Lipsync: LipMask_A3 {};
				};
			};
			class HurtFace: RTM_Face
			{
				anims[] = {"A3\Characters_F\Heads\Anim\female\Hurt.rtm", 1};
				animsAI[] = {"A3\Characters_F\Heads\Anim\female\Hurt.rtm", 1};
			};
			class Lipsync
			{
				type = "lipsync";
				vizem[] = {"A3\A3\Characters_F\Heads\Anim\female\Neutral.rtm", "A3\A3\Characters_F\Heads\Anim\female\vizem\a.rtm", "A3\A3\Characters_F\Heads\Anim\female\vizem\e2.rtm", "A3\A3\Characters_F\Heads\Anim\female\vizem\f.rtm", "A3\A3\Characters_F\Heads\Anim\female\vizem\m.rtm", "A3\A3\Characters_F\Heads\Anim\female\vizem\y.rtm", "A3\A3\Characters_F\Heads\Anim\female\vizem\v.rtm", "A3\A3\Characters_F\Heads\Anim\female\vizem\i.rtm"};
			};
			class Neutral
			{
				type = "compound";
				class Items
				{
					class Lipsync: LipMask_A3 {};
					class NeutralFace: MaskFaceWoman_A3 {};
				};
			};
			class NeutralFace: RTM_Face
			{
				anims[] = {"A3\Characters_F\Heads\Anim\female\Neutral_blink_left.rtm", 1};
				animsAI[] = {"A3\Characters_F\Heads\Anim\female\Neutral_blink_left.rtm", 1};
			};
			class RTM_Face
			{
				anim = "A3\Characters_F\Heads\Anim\female\Neutral.rtm";
				anims[] = {"A3\Characters_F\Heads\Anim\female\Neutral.rtm", 1};
				animsAI[] = {"A3\Characters_F\Heads\Anim\female\Neutral.rtm", 1};
				type = "rtm";
			};
			class Safe
			{
				type = "compound";
				class Items
				{
					class Lipsync: LipMask_A3 {};
					class SafeFace: MaskFaceWoman_A3 {};
				};
			};
			class SafeFace: RTM_Face {};
			class Unconscious
			{
				type = "compound";
				class Items
				{
					class UnconsciousFace: MaskFaceWoman_A3 {};
				};
			};
			class UnconsciousFace: DeadFace {};
		};
		class Wounds
		{
			mat[] = {};
			tex[] = {};
		};
	};
};
