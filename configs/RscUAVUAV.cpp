class RscUAVUAV
{
	access = 0;
	atomic = 0;
	title = "UAV";
	vocabulary = "";
	class Items
	{
		class Back
		{
			command = -4;
			shortcuts[] = {"BACK"};
			speechId = 0;
			title = "";
		};
		class UAVDriver
		{
			command = -5;
			enable = "HCNotEmpty * UAVHasDriver";
			shortcuts[] = {2};
			shortcutsAction = "CommandingMenu1";
			show = "";
			speechId = 0;
			title = "Switch to UAV Driver";
			class Params
			{
				expression = "switchToUAV [hcselected player, 'DRIVER']";
			};
		};
		class UAVGunner
		{
			command = -5;
			enable = "HCNotEmpty * UAVHasGunner";
			shortcuts[] = {3};
			shortcutsAction = "CommandingMenu2";
			show = "";
			speechId = 0;
			title = "Switch to UAV Gunner";
			class Params
			{
				expression = "switchToUAV [hcselected player, 'GUNNER']";
			};
		};
		class UAVWatch
		{
			command = -5;
			enable = "HCNotEmpty * UAVHasDriver";
			shortcuts[] = {4};
			shortcutsAction = "CommandingMenu3";
			show = "";
			speechId = 0;
			title = "Switch to UAV Camera";
			class Params
			{
				expression = "switchToUAV [hcselected player, 'WATCH']";
			};
		};
	};
};
