class RscDiaryWait: RscDiaryBase
{
	idc = 20774;
	onLoad = "[""onLoad"",_this,""RscDiaryNotes"",'ContactCommon',0] call 	(uinamespace getvariable 'BIS_fnc_initDisplay')";
	onUnload = "[""onUnload"",_this,""RscDiaryNotes"",'ContactCommon',0] call 	(uinamespace getvariable 'BIS_fnc_initDisplay')";
	scriptName = "RscDiaryNotes";
	scriptPath = "ContactCommon";
	class Controls: Controls
	{
		class WIP: WIP {};
	};
};
