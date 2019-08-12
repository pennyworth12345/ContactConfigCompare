class RscDisplayServer: RscDisplayRemoteMissions
{
	colorEditor[] = {0.196, 0.592, 0.706, 1};
	colorEditor3DEN[] = {0.2, 0.8, 0.4, 1};
	colorMission[] = {1, 1, 1, 1};
	colorMissionEditor[] = {0.196, 0.592, 0.706, 1};
	colorMissionEditor3DEN[] = {0.2, 0.8, 0.4, 1};
	colorMissionSteam[] = {0.863, 0.584, 0, 1};
	colorMissionWizard[] = {0.863, 0.584, 0, 1};
	colorWizard[] = {0.863, 0.584, 0, 1};
	idd = 17;
	onMouseHolding = "_this call (uinamespace getvariable 'BIN_fnc_playMissionMPHosted');";
	onMouseMoving = "_this call (uinamespace getvariable 'BIN_fnc_playMissionMPHosted');";
	textEdit = "2D Editor";
	textEdit3DEN = "3D Editor";
	textNew = "<<New - 2D Editor>>";
	textNew3DEN = "<<New - 3D Editor>>";
};
