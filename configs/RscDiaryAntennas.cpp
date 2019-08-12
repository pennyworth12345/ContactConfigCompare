class RscDiaryAntennas: RscDiaryBase
{
	idc = 20776;
	onLoad = "[""onLoad"",_this,""RscDiaryAntennas"",'ContactCommon',0] call 	(uinamespace getvariable 'BIS_fnc_initDisplay')";
	onUnload = "[""onUnload"",_this,""RscDiaryAntennas"",'ContactCommon',0] call 	(uinamespace getvariable 'BIS_fnc_initDisplay')";
	scriptName = "RscDiaryAntennas";
	scriptPath = "ContactCommon";
	class Controls: Controls
	{
		class ButtonClose: ButtonClose {};
		class Title: Title
		{
			text = "TRANSMITTERS";
		};
		class TitleBackground: TitleBackground {};
	};
};
