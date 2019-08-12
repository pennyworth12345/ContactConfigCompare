class ctrlShortcutButtonSteam: ctrlShortcutButton
{
	colorBackground[] = {0.0313726, 0.721569, 0.917647, 1};
	textureNoShortcut = "\a3\3DEN\Data\Controls\CtrlShortcutButton\steam_ca.paa";
	class ShortcutPos
	{
		h = "5 * (pixelH * pixelGrid * 	0.50)";
		left = 0;
		top = 0;
		w = "5 * (pixelW * pixelGrid * 	0.50)";
	};
	class TextPos
	{
		bottom = 0;
		left = "1.5 * 	5 * (pixelW * pixelGrid * 	0.50)";
		right = 0;
		top = 0;
	};
};
