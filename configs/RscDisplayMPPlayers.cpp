class RscDisplayMPPlayers: RscStandardDisplay
{
	idd = 65;
	class controls
	{
		class B_AdminVote: B_KickOff
		{
			idc = 129;
			text = "Ban";
			x = 0.9;
		};
		class B_KickOff: RscActiveText
		{
			idc = 114;
			text = "Kick Off";
			w = 0.2;
			x = 0.05;
			y = 0.9;
		};
		class B_KickOffVote: B_KickOff
		{
			idc = 128;
			text = "Kick Off";
			x = 0.6;
		};
		class CA_B_Ban: CA_B_KickOff
		{
			borderSize = 0;
			idc = 115;
			text = "Ban";
			x = 0.438;
		};
		class CA_B_Cancel: CA_RscButton_dialog
		{
			default = 1;
			idc = 2;
			text = "Close";
			x = 0.828;
			y = 0.9;
		};
		class CA_B_KickOff: CA_B_Mute
		{
			borderSize = 0;
			idc = 114;
			text = "Kick Off";
			x = 0.28;
			y = 0.9;
		};
		class CA_B_Mute: CA_RscButton_dialog
		{
			borderSize = 0;
			idc = 127;
			text = "Mute";
			x = 0.28;
			y = 0.9;
		};
		class CA_BandwidthAvgValue: RscText
		{
			idc = 123;
			w = 0.07;
			x = 0.58;
			y = 0.45;
		};
		class CA_BandwidthMaxValue: RscText
		{
			idc = 124;
			w = 0.07;
			x = 0.68;
			y = 0.45;
		};
		class CA_BandwidthMinValue: RscText
		{
			idc = 122;
			w = 0.07;
			x = 0.48;
			y = 0.45;
		};
		class CA_BandwidthTitle: RscText
		{
			text = "Bandwidth:";
			w = 0.15;
			x = 0.325;
			y = 0.45;
		};
		class CA_DesyncTitle: RscText
		{
			text = "Desync:";
			w = 0.15;
			x = 0.325;
			y = 0.48;
		};
		class CA_DesyncValue: RscText
		{
			idc = 125;
			w = 0.07;
			x = 0.48;
			y = 0.48;
		};
		class CA_PingAvgValue: RscText
		{
			idc = 120;
			w = 0.07;
			x = 0.58;
			y = 0.42;
		};
		class CA_PingMaxValue: RscText
		{
			idc = 121;
			w = 0.07;
			x = 0.68;
			y = 0.42;
		};
		class CA_PingMinValue: RscText
		{
			idc = 119;
			w = 0.07;
			x = 0.48;
			y = 0.42;
		};
		class CA_PingTitle: RscText
		{
			text = "Ping:";
			w = 0.15;
			x = 0.325;
			y = 0.42;
		};
		class CA_PlayersTitle: CA_Title
		{
			colortext[] = {0.95, 0.95, 0.95, 1};
			text = "Players";
			w = 0.12;
			x = 0.025;
			y = 0.055;
		};
		class CA_TextIsland: RscText
		{
			text = "Map:";
			w = 0.1;
			x = 0.4;
			y = 0.11;
		};
		class CA_TextMission: RscText
		{
			text = "Mission:";
			w = 0.12;
			x = 0.025;
			y = 0.11;
		};
		class CA_TextPlayer: RscText
		{
			text = "Player:";
			w = 0.15;
			x = 0.3;
			y = 0.15;
		};
		class CA_TextPlayerICQ: RscText
		{
			text = "IM:";
			w = 0.125;
			x = 0.325;
			y = 0.24;
		};
		class CA_TextPlayerMail: RscText
		{
			text = "E-mail:";
			w = 0.125;
			x = 0.325;
			y = 0.21;
		};
		class CA_TextPlayerName: RscText
		{
			text = "Name:";
			w = 0.125;
			x = 0.325;
			y = 0.18;
		};
		class CA_TextPlayerRemark: RscText
		{
			text = "Remark:";
			w = 0.125;
			x = 0.325;
			y = 0.27;
		};
		class CA_TextPlayers: RscText
		{
			text = "Players:";
			w = 0.25;
			x = 0.025;
			y = 0.15;
		};
		class CA_TextSquad: RscText
		{
			text = "Squad:";
			w = 0.15;
			x = 0.3;
			y = 0.54;
		};
		class CA_TextSquadId: RscText
		{
			text = "Id:";
			w = 0.125;
			x = 0.325;
			y = 0.6;
		};
		class CA_TextSquadMail: RscText
		{
			text = "E-mail:";
			w = 0.125;
			x = 0.325;
			y = 0.63;
		};
		class CA_TextSquadName: RscText
		{
			text = "Name:";
			w = 0.125;
			x = 0.325;
			y = 0.57;
		};
		class CA_TextSquadPicture: RscText
		{
			text = "Picture:";
			w = 0.125;
			x = 0.325;
			y = 0.69;
		};
		class CA_TextSquadTitle: RscText
		{
			text = "Title:";
			w = 0.125;
			x = 0.325;
			y = 0.82;
		};
		class CA_TextSquadWeb: RscText
		{
			text = "Web:";
			w = 0.125;
			x = 0.325;
			y = 0.66;
		};
		class CA_TextTime: RscText
		{
			text = "Time:";
			w = 0.1;
			x = 0.625;
			y = 0.11;
		};
		class CA_ValueIsland: RscText
		{
			idc = 117;
			w = 0.2;
			x = 0.5;
			y = 0.11;
		};
		class CA_ValueMission: RscText
		{
			idc = 116;
			w = 0.23;
			x = 0.145;
			y = 0.11;
		};
		class CA_ValuePlayer: RscText
		{
			idc = 102;
			w = 0.525;
			x = 0.45;
			y = 0.15;
		};
		class CA_ValuePlayerICQ: RscText
		{
			idc = 105;
			w = 0.525;
			x = 0.45;
			y = 0.24;
		};
		class CA_ValuePlayerMail: RscText
		{
			idc = 104;
			w = 0.525;
			x = 0.45;
			y = 0.21;
		};
		class CA_ValuePlayerName: RscText
		{
			idc = 103;
			w = 0.525;
			x = 0.45;
			y = 0.18;
		};
		class CA_ValuePlayerRemark: RscText
		{
			h = 0.145;
			idc = 106;
			lines = 3;
			lineSpacing = 0.01;
			style = 16;
			w = 0.525;
			x = 0.45;
			y = 0.27;
		};
		class CA_ValuePlayers: RscListBox
		{
			h = 0.65;
			idc = 101;
			onLBSelChanged = "_this call compile preprocessfile ""\A3\ui_f\scripts\lbColor.sqf"";";
			rows = 18.5;
			w = 0.25;
			x = 0.025;
			y = 0.2;
		};
		class CA_ValueRest: RscText
		{
			idc = 126;
			w = 0.15;
			x = 0.825;
			y = 0.11;
		};
		class CA_ValueSquad: RscText
		{
			idc = 107;
			w = 0.525;
			x = 0.45;
			y = 0.54;
		};
		class CA_ValueSquadId: RscText
		{
			idc = 109;
			w = 0.525;
			x = 0.45;
			y = 0.6;
		};
		class CA_ValueSquadMail: RscText
		{
			idc = 110;
			w = 0.525;
			x = 0.45;
			y = 0.63;
		};
		class CA_ValueSquadName: RscText
		{
			idc = 108;
			w = 0.525;
			x = 0.45;
			y = 0.57;
		};
		class CA_ValueSquadPicture: RscPicture
		{
			h = 0.124;
			idc = 112;
			style = 48;
			w = 0.093;
			x = 0.45;
			y = 0.69;
		};
		class CA_ValueSquadTitle: RscText
		{
			idc = 113;
			w = 0.525;
			x = 0.45;
			y = 0.82;
		};
		class CA_ValueSquadWeb: RscText
		{
			idc = 111;
			w = 0.525;
			x = 0.45;
			y = 0.66;
		};
		class CA_ValueTime: RscText
		{
			idc = 118;
			w = 0.1;
			x = 0.725;
			y = 0.11;
		};
	};
	class controlsBackground
	{
		class FilterTitleBack: CA_Title_Back
		{
			h = 0.039216;
			w = 0.941184;
			x = 0.029408;
			y = 0.068624;
		};
		class Logo: CA_Logo_Small
		{
			x = 0.79412;
			y = 0.0205844;
		};
		class Mainback: CA_Mainback
		{
			colorbackground[] = {0.6, 0.6, 0.6, 0.4};
			h = 0.88236;
			moving = 1;
			w = 0.95589;
			x = 0.022055;
			y = 0.05882;
		};
		class Missionback: CA_Back
		{
			h = 0.035;
			w = 0.95;
			x = 0.025;
			y = 0.11;
		};
		class Playersback: CA_Back
		{
			h = 0.72;
			w = 0.25;
			x = 0.025;
			y = 0.15;
		};
		class Squadback: CA_Back
		{
			h = 0.72;
			w = 0.7;
			x = 0.28;
			y = 0.15;
		};
	};
};
