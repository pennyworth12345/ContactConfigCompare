class RscDisplayPhysX3Debug
{
	idd = 157;
	movingEnable = 1;
	class Controls
	{
		class B_OK: RscButton
		{
			default = 1;
			idc = 1;
			sizeEx = 0.027;
			text = "Close";
			x = 0.5;
			y = 0.917;
		};
		class Background1: RscText
		{
			colorBackground[] = {0, 0, 0, 0.75};
			h = "SafeZoneH";
			w = "SafezoneW-0.2";
			x = "SafezoneX+0.1";
			y = "SafezoneY+0.0";
		};
		class Background2: RscText
		{
			colorBackground[] = {1, 1, 1, 0.025};
			h = "SafeZoneH";
			w = 0.8;
			x = 0.1;
			y = "SafezoneY+0.0";
		};
		class Caption: RscText
		{
			colorText[] = {0.9, 0.9, 0.9, 1};
			h = 0.021;
			sizeEx = 0.027;
			text = "diag mode";
			w = 0.4;
			x = 0.25;
			y = 0.01;
		};
		class Caption0: Caption
		{
			text = "terrain";
			y = 0.12;
		};
		class Caption00: Caption
		{
			text = "diag mode draw";
			y = 0.032;
		};
		class Caption000: Caption
		{
			text = "diag mode perf";
			y = 0.054;
		};
		class Caption0000: Caption
		{
			text = "diag mode stats";
			y = 0.076;
		};
		class Caption1: Caption
		{
			text = "static";
			y = 0.142;
		};
		class Caption10: Caption
		{
			text = "body joint groups";
			y = 0.34;
		};
		class Caption11: Caption
		{
			text = "contact points";
			y = 0.362;
		};
		class Caption12: Caption
		{
			text = "contact normals";
			y = 0.384;
		};
		class Caption13: Caption
		{
			text = "contact errors";
			y = 0.406;
		};
		class Caption14: Caption
		{
			text = "contact forces";
			y = 0.428;
		};
		class Caption15: Caption
		{
			text = "actor axes";
			y = 0.45;
		};
		class Caption16: Caption
		{
			text = "collision AABBs";
			y = 0.472;
		};
		class Caption17: Caption
		{
			text = "collision shapes";
			y = 0.494;
		};
		class Caption18: Caption
		{
			text = "collision axes";
			y = 0.516;
		};
		class Caption19: Caption
		{
			text = "collision compounds";
			y = 0.538;
		};
		class Caption2: Caption
		{
			text = "kinematic";
			y = 0.164;
		};
		class Caption20: Caption
		{
			text = "collision face normals";
			y = 0.56;
		};
		class Caption21: Caption
		{
			text = "collision edges";
			y = 0.582;
		};
		class Caption22: Caption
		{
			text = "collision static";
			y = 0.604;
		};
		class Caption23: Caption
		{
			text = "collision dynamic";
			y = 0.626;
		};
		class Caption24: Caption
		{
			text = "collision pairs";
			y = 0.648;
		};
		class Caption25: Caption
		{
			text = "joint local axes";
			y = 0.67;
		};
		class Caption26: Caption
		{
			text = "joint limits";
			y = 0.692;
		};
		class Caption27: Caption
		{
			text = "particle system positions";
			y = 0.714;
		};
		class Caption28: Caption
		{
			text = "particle system velocities";
			y = 0.736;
		};
		class Caption29: Caption
		{
			text = "particle system bounds";
			y = 0.758;
		};
		class Caption3: Caption
		{
			text = "dynamic";
			y = 0.186;
		};
		class Caption30: Caption
		{
			text = "particle system grid";
			y = 0.78;
		};
		class Caption31: Caption
		{
			text = "particle system broad phase bounds";
			y = 0.802;
		};
		class Caption32: Caption
		{
			text = "particle system max motion distance";
			y = 0.824;
		};
		class Caption33: Caption
		{
			text = "culling";
			x = 0.65;
			y = 0.23;
		};
		class Caption34: Caption
		{
			text = "cloth vertical sets";
			x = 0.65;
			y = 0.252;
		};
		class Caption35: Caption
		{
			text = "cloth horizontal sets";
			x = 0.65;
			y = 0.274;
		};
		class Caption36: Caption
		{
			text = "cloth bending sets";
			x = 0.65;
			y = 0.274;
		};
		class Caption37: Caption
		{
			text = "clot shearing sets";
			x = 0.65;
			y = 0.296;
		};
		class Caption38: Caption
		{
			text = "cloth virtual particles";
			x = 0.65;
			y = 0.318;
		};
		class Caption39: Caption
		{
			text = "MBP regions";
			x = 0.65;
			y = 0.34;
		};
		class Caption5: Caption
		{
			text = "world axes";
			y = 0.23;
		};
		class Caption6: Caption
		{
			text = "body axes";
			y = 0.252;
		};
		class Caption7: Caption
		{
			text = "body mass axes";
			y = 0.274;
		};
		class Caption8: Caption
		{
			text = "body lin velocity";
			y = 0.296;
		};
		class Caption9: Caption
		{
			text = "body ang velocity";
			y = 0.318;
		};
		class CaptionDS: Caption
		{
			text = "diag immediate fetch";
			x = 0.65;
			y = 0.01;
		};
		class Title: RscTitle
		{
			colorBackground[] = {0.3, 0, 0, 1};
			colorText[] = {0.9, 0.9, 0.9, 1};
			h = 0.035;
			moving = 1;
			sizeEx = 0.027;
			text = "PhysX3 Debug Console";
			w = "SafezoneW-0.2";
			x = "SafezoneX+0.1";
			y = "SafezoneY+0.02";
		};
		class Value: RscButton
		{
			h = 0.021;
			idc = 101;
			sizeEx = 0.027;
			text = "on";
			w = 0.05;
			x = 0.2;
			y = 0.01;
		};
		class Value0: Value
		{
			idc = 103;
			y = 0.12;
		};
		class Value00: Value
		{
			idc = 102;
			y = 0.032;
		};
		class Value000: Value
		{
			idc = 192;
			y = 0.054;
		};
		class Value0000: Value
		{
			idc = 193;
			y = 0.076;
		};
		class Value1: Value
		{
			idc = 104;
			y = 0.142;
		};
		class Value10: Value
		{
			idc = 155;
			y = 0.34;
		};
		class Value11: Value
		{
			idc = 156;
			y = 0.362;
		};
		class Value12: Value
		{
			idc = 157;
			y = 0.384;
		};
		class Value13: Value
		{
			idc = 158;
			y = 0.406;
		};
		class Value14: Value
		{
			idc = 159;
			y = 0.428;
		};
		class Value15: Value
		{
			idc = 160;
			y = 0.45;
		};
		class Value16: Value
		{
			idc = 161;
			y = 0.472;
		};
		class Value17: Value
		{
			idc = 162;
			y = 0.494;
		};
		class Value18: Value
		{
			idc = 163;
			y = 0.516;
		};
		class Value19: Value
		{
			idc = 164;
			y = 0.538;
		};
		class Value2: Value
		{
			idc = 105;
			y = 0.164;
		};
		class Value20: Value
		{
			idc = 165;
			y = 0.56;
		};
		class Value21: Value
		{
			idc = 166;
			y = 0.582;
		};
		class Value22: Value
		{
			idc = 167;
			y = 0.604;
		};
		class Value23: Value
		{
			idc = 168;
			y = 0.626;
		};
		class Value24: Value
		{
			idc = 169;
			y = 0.648;
		};
		class Value25: Value
		{
			idc = 170;
			y = 0.67;
		};
		class Value26: Value
		{
			idc = 171;
			y = 0.692;
		};
		class Value27: Value
		{
			idc = 172;
			y = 0.714;
		};
		class Value28: Value
		{
			idc = 173;
			y = 0.736;
		};
		class Value29: Value
		{
			idc = 174;
			y = 0.758;
		};
		class Value3: Value
		{
			idc = 106;
			y = 0.186;
		};
		class Value30: Value
		{
			idc = 175;
			y = 0.78;
		};
		class Value31: Value
		{
			idc = 176;
			y = 0.802;
		};
		class Value32: Value
		{
			idc = 177;
			y = 0.824;
		};
		class Value33: Value
		{
			idc = 178;
			x = 0.6;
			y = 0.23;
		};
		class Value34: Value
		{
			idc = 179;
			x = 0.6;
			y = 0.252;
		};
		class Value35: Value
		{
			idc = 180;
			x = 0.6;
			y = 0.274;
		};
		class Value36: Value
		{
			idc = 181;
			x = 0.6;
			y = 0.274;
		};
		class Value37: Value
		{
			idc = 182;
			x = 0.6;
			y = 0.296;
		};
		class Value38: Value
		{
			idc = 183;
			x = 0.6;
			y = 0.318;
		};
		class Value39: Value
		{
			idc = 184;
			x = 0.6;
			y = 0.34;
		};
		class Value5: Value
		{
			idc = 150;
			y = 0.23;
		};
		class Value6: Value
		{
			idc = 151;
			y = 0.252;
		};
		class Value7: Value
		{
			idc = 152;
			y = 0.274;
		};
		class Value8: Value
		{
			idc = 153;
			y = 0.296;
		};
		class Value9: Value
		{
			idc = 154;
			y = 0.318;
		};
		class ValueAll: Value
		{
			idc = 190;
			text = "All";
			y = 0.868;
		};
		class ValueBasic: Value
		{
			idc = 198;
			text = "Basic";
			y = 0.912;
		};
		class ValueDS: Value
		{
			idc = 194;
			x = 0.6;
			y = 0.01;
		};
		class ValueNone: Value
		{
			idc = 191;
			text = "None";
			y = 0.89;
		};
	};
};
