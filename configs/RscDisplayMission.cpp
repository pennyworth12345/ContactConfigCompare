class RscDisplayMission: RscDisplayEmpty
{
	access = 0;
	idd = 46;
	onLoad = "[""onLoad"",_this,""RscDisplayMission"",'GUI'] call 	(uinamespace getvariable 'BIS_fnc_initDisplay')";
	onUnload = "		if !(ismultiplayer) then {			[missionnamespace,'missionClosed',[_this # 0]] call bis_fnc_callScriptedEventHandler;			_this call (uinamespace getvariable 'bin_fnc_exit');			false		};	";
	scriptName = "RscDisplayMission";
	scriptPath = "GUI";
	class controls: controls
	{
		class BcgWIP: RscWIP
		{
			idc = 11400;
		};
		class CA_Vignette: CA_Vignette {};
		class DLCActionNotification: DLCActionNotification
		{
			idc = 11406;
		};
	};
};
