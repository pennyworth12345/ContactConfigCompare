class RscDisplayInterruptEditorPreview: RscStandardDisplay
{
	idd = 49;
	onLoad = "private ['_dummy']; _dummy = ['Init', _this] execVM '\A3\ui_f\scripts\pauseLoadinit.sqf';";
	onUnload = "private ['_dummy']; _dummy = ['Unload', _this] execVM '\A3\ui_f\scripts\pauseOnUnload.sqf';";
	class controls
	{
		class ButtonCancel: RscShortcutButton
		{
			idc = 2;
			shortcuts[] = {"0x00050000 + 1"};
			text = "Continue";
			x = 0.05;
			y = 0.755;
		};
		class ButtonEdit2D: RscShortcutButtonMain
		{
			default = 0;
			idc = 113;
			text = "Edit in 2D map";
			x = 0.05;
			y = 0.271;
		};
		class ButtonEdit3D: ButtonEdit2D
		{
			idc = 114;
			text = "Edit in 3D world";
			x = 0.05;
			y = 0.368;
		};
		class ButtonOptions: ButtonEdit2D
		{
			idc = 101;
			text = "Configure";
			y = 0.56;
		};
		class ButtonQuit: ButtonEdit2D
		{
			idc = 104;
			text = "Quit";
			y = 0.656;
		};
		class ButtonRestart: ButtonEdit2D
		{
			idc = 105;
			text = "Restart";
			x = 0.05;
			y = 0.464;
		};
		class Preview_Title: CA_Title
		{
			text = "Paused";
			x = 0.057;
			y = 0.182;
		};
	};
	class controlsBackground
	{
		class Mainback: RscPicture
		{
			h = 0.836601;
			idc = 1104;
			text = "";
			w = 0.627451;
			x = 0.038;
			y = 0.17;
		};
	};
};
