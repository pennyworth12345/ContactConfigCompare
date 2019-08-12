class RscUAVReply
{
	access = 0;
	atomic = 0;
	title = "Reply";
	vocabulary = "";
	class items
	{
		class Communication
		{
			menu = "#User:BIS_MENU_GroupCommunication";
			shortcuts[] = {9};
			shortcutsAction = "CommandingMenu8";
			title = "Supports";
		};
		class Radio
		{
			enable = "HasRadio";
			menu = "RscRadio";
			shortcuts[] = {11};
			shortcutsAction = "CommandingMenu0";
			title = "Radio";
		};
		class SITREP
		{
			command = -5;
			enable = "HCNotEmpty";
			shortcuts[] = {2};
			shortcutsAction = "CommandingMenu1";
			show = "HCIsLeader";
			speechId = 0;
			title = "SITREP";
			class Params
			{
				expression = "'SITREP' call BIS_fnc_guiMenuUAV";
			};
		};
		class UserRadio
		{
			menu = "#CUSTOM_RADIO";
			shortcuts[] = {10};
			shortcutsAction = "CommandingMenu9";
			title = "Custom";
		};
	};
};
