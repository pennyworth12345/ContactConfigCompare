class RscCompass: RscObject
{
	direction[] = {0, 0.5, 0.5};
	enableZoom = 0;
	idc = -1;
	inBack = 1;
	model = "\A3\ui_f\objects\compass.p3d";
	position[] = {0.026, 0.047, 0.2};
	positionBack[] = {0, -0.02, 0.075};
	scale = "0.47 * 0.875 * (SafeZoneW Min SafeZoneH)";
	selectionArrow = "arrow";
	type = 81;
	up[] = {0, 1, 0};
	zoomDuration = 0.5;
};
