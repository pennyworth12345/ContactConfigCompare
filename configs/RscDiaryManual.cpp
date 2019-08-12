class RscDiaryManual: RscDiaryBase
{
	idc = 20775;
	onLoad = "[""onLoad"",_this,""RscDiaryManual"",'ContactCommon',0] call 	(uinamespace getvariable 'BIS_fnc_initDisplay')";
	onUnload = "[""onUnload"",_this,""RscDiaryManual"",'ContactCommon',0] call 	(uinamespace getvariable 'BIS_fnc_initDisplay')";
	scriptName = "RscDiaryManual";
	scriptPath = "ContactCommon";
	class Controls: Controls
	{
		class WIP: WIP {};
	};
};
