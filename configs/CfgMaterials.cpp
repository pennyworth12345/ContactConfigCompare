class CfgMaterials
{
	class Metal
	{
		ambient[] = {1, 1, 1, 1};
		diffuse[] = {1, 1, 1, 1};
		emmisive[] = {0, 0, 0, 0};
		forcedDiffuse[] = {0, 0, 0, 0};
		specular[] = {0.2, 0.2, 0.2, 0};
		specularPower = 5;
	};
	class RifleMetal
	{
		ambient[] = {1, 1, 1, 1};
		diffuse[] = {1, 1, 1, 1};
		emmisive[] = {0, 0, 0, 0};
		forcedDiffuse[] = {0, 0, 0, 0};
		specular[] = {0.2, 0.2, 0.2, 0};
		specularPower = 5;
	};
	class Shore
	{
		ambient[] = {1, 1, 1, 1};
		diffuse[] = {0.7, 0.7, 0.7, 1};
		emmisive[] = {0, 0, 0, 0};
		forcedDiffuse[] = {0, 0, 0, 1};
		PixelShaderID = "Shore";
		specular[] = {0.12, 0.12, 0.12, 1};
		specularPower = 65;
		VertexShaderID = "Shore";
		class Stage1
		{
			texGen = 1;
			texture = "A3\data_f_Exp\water_nofhq.paa";
			uvSource = "texWaterAnim";
			class uvTransform
			{
				aside[] = {0, 4, 0};
				dir[] = {0, 0, 4};
				pos[] = {0.2, 0.5, 0};
				up[] = {4, 0, 0};
			};
		};
		class Stage2
		{
			texGen = 0;
			texture = "A3\data_f_Exp\sea_foam_lco.paa";
		};
		class Stage3
		{
			texGen = 0;
			texture = "A3\data_f_Exp\water2_nohq.paa";
			uvSource = "none";
		};
		class Stage4
		{
			texture = "#(argb,8,8,3)color(0.5,0.5,0.5,1)";
			uvSource = "none";
		};
		class Stage5
		{
			texture = "#(argb,8,8,3)color(0.5,0.5,0.5,1)";
			uvSource = "none";
		};
		class Stage6
		{
			texGen = 0;
			texture = "A3\data_f_Exp\shoreFoam_edge.paa";
		};
		class Stage7
		{
			texGen = 0;
			texture = "A3\data_f_Exp\shoreWetNormal_nohq.paa";
		};
		class Stage8
		{
			texGen = 0;
			texture = "A3\Data_F_Exp\env_land_ca.tga";
			useWorldEnvMap = 0;
		};
		class TexGen0
		{
			uvSource = "none";
		};
		class TexGen1
		{
			uvSource = "texWaterAnim";
			class uvTransform
			{
				aside[] = {0, 5, 0};
				dir[] = {0, 0, 1};
				pos[] = {0.3, 0.4, 0};
				up[] = {5, 0, 0};
			};
		};
	};
	class ShoreFoam
	{
		ambient[] = {0.016, 0.0264, 0.04, 0.4};
		diffuse[] = {0.032, 0.128, 0.128, 1};
		emmisive[] = {0, 0, 0, 0};
		forcedDiffuse[] = {0, 0, 0, 0};
		PixelShaderID = "ShoreFoam";
		specular[] = {1, 1, 1, 0};
		specularPower = 4;
		VertexShaderID = "Shore";
		class Stage1
		{
			texture = "#(rgb,8,8,3)color(0.5,0.5,1.0,1)";
			uvSource = "texWaterAnim";
			class uvTransform
			{
				aside[] = {0, 4, 0};
				dir[] = {0, 0, 4};
				pos[] = {0.2, 0.5, 0};
				up[] = {4, 0, 0};
			};
		};
		class Stage3
		{
			texture = "#(ai,16,64,1)waterirradiance(16)";
			uvSource = "none";
		};
		class Stage4
		{
			texture = "#(argb,8,8,3)color(0.5,0.5,0.5,1)";
			uvSource = "none";
		};
		class Stage5
		{
			texture = "#(argb,8,8,3)color(0.5,0.5,0.5,1)";
			uvSource = "none";
		};
	};
	class ShoreWet
	{
		ambient[] = {1, 1, 1, 1};
		diffuse[] = {1, 1, 1, 1};
		emmisive[] = {0, 0, 0, 1};
		forcedDiffuse[] = {0, 0, 0, 0};
		PixelShaderID = "ShoreWet";
		specular[] = {0.1, 0.1, 0.1, 1};
		specularPower = 1;
		VertexShaderID = "Shore";
		class Stage0
		{
			texture = "A3\data_f_Exp\shoreWetNormal_nohq.paa";
			uvSource = "none";
		};
		class Stage1
		{
			texture = "#(ai,64,128,1)fresnel(1.4,0.1)";
			uvSource = "none";
		};
		class Stage2
		{
			texture = "A3\Data_F\env_land_CO.tga";
			useWorldEnvMap = 1;
			uvSource = "none";
		};
	};
	class SpecularGlass
	{
		ambient[] = {1, 1, 1, 1};
		diffuse[] = {1, 1, 1, 1};
		emmisive[] = {0, 0, 0, 0};
		forcedDiffuse[] = {0, 0, 0, 0};
		specular[] = {0.5, 0.5, 0.8, 0};
		specularPower = 5;
	};
	class Terrain
	{
		ambient[] = {1, 1, 1, 1};
		diffuse[] = {0.6, 0.6, 0.6, 1};
		emmisive[] = {0, 0, 0, 0};
		forcedDiffuse[] = {0.05, 0.05, 0.05, 1};
		PixelShaderID = "NormalMapDiffuse";
		specular[] = {0, 0, 0, 0};
		specularPower = 1;
		VertexShaderID = "NormalMapDiffuseAlpha";
		class Stage1
		{
			texture = "#(argb,8,8,3)color(0,0,1,1)";
			uvSource = "tex";
			class uvTransform
			{
				aside[] = {1, 0, 0};
				dir[] = {0, 0, 1};
				pos[] = {0, 0, 0};
				up[] = {0, 1, 0};
			};
		};
		class Stage2
		{
			texture = "#(argb,8,8,3)color(0.5,0.5,0.5,1)";
			uvSource = "tex";
			class uvTransform
			{
				aside[] = {1, 0, 0};
				dir[] = {0, 0, 1};
				pos[] = {0, 0, 0};
				up[] = {0, 1, 0};
			};
		};
	};
	class Water
	{
		ambient[] = {0, 0.025, 0.05, 0.5};
		diffuse[] = {0, 0.05, 0.04, 1};
		emmisive[] = {0, 0, 0, 0};
		forcedDiffuse[] = {0, 0, 0, 1};
		PixelShaderID = "Water";
		specular[] = {0.12, 0.12, 0.12, 1};
		specularPower = 100;
		VertexShaderID = "Water";
		class Stage1
		{
			texture = "A3\data_f_Exp\water_nofhq.paa";
			uvSource = "texWaterAnim";
			class uvTransform
			{
				aside[] = {0, 1, 0};
				dir[] = {0, 0, 1};
				pos[] = {0.3, 0.4, 0};
				up[] = {1, 0, 0};
			};
		};
		class Stage2
		{
			texture = "A3\data_f_Exp\sea_foam_lco.paa";
			uvSource = "none";
		};
		class Stage3
		{
			texture = "A3\data_f_Exp\water2_nohq.paa";
			uvSource = "none";
		};
		class Stage4
		{
			texture = "#(argb,8,8,3)color(0.5,0.5,0.5,1)";
			uvSource = "none";
		};
		class Stage5
		{
			texture = "#(argb,8,8,3)color(0.5,0.5,0.5,1)";
			uvSource = "none";
		};
	};
	class WaterRiver: Water
	{
		PixelShaderID = "Water";
		VertexShaderID = "Water";
		class Stage1
		{
			texture = "A3\Map_Enoch\Data\water_nofhq.paa";
			uvSource = "texWaterAnim";
			class uvTransform
			{
				aside[] = {0, 1, 0};
				dir[] = {0, 0, 1};
				pos[] = {0.3, 0.4, 0};
				up[] = {1, 0, 0};
			};
		};
		class Stage2
		{
			texture = "A3\data_f\sea_foam_lco.paa";
			uvSource = "none";
		};
		class Stage3
		{
			texture = "A3\Map_Enoch\Data\water2_nohq.paa";
			uvSource = "none";
		};
	};
};
