class ctrlStructuredText: ctrlDefaultText
{
	colorBackground[] = {0, 0, 0, 0};
	onCanDestroy = "";
	onDestroy = "";
	size = "4.32 * (1 / (getResolution select 3)) * pixelGrid * 0.5";
	text = "";
	type = 13;
	class Attributes
	{
		align = "left";
		color = "#ffffff";
		colorLink = "";
		font = "RobotoCondensedLight";
		size = 1;
	};
};
