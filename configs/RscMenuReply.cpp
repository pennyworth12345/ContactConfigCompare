class RscMenuReply: RscSubmenu
{
	test = 1;
	title = "Reply";
	vocabulary = "";
	class Items
	{
		class Communication
		{
			enable = "1";
			menu = "#User:BIS_fnc_addCommMenuItem_menu";
			shortcuts[] = {9};
			shortcutsAction = "CommandingMenu8";
			show = "1";
			speechId = 0;
			title = "Supports";
		};
		class Copy
		{
			command = "CMD_REPLY_COPY";
			enable = "CanAnswer";
			shortcuts[] = {8};
			shortcutsAction = "CommandingMenu7";
			title = "Copy";
		};
		class Done
		{
			command = "CMD_REPLY_DONE";
			enable = "CanAnswer";
			shortcuts[] = {2};
			shortcutsAction = "CommandingMenu1";
			title = "Done";
		};
		class Fail
		{
			command = "CMD_REPLY_FAIL";
			enable = "CanAnswer";
			shortcuts[] = {3};
			shortcutsAction = "CommandingMenu2";
			title = "Negative";
		};
		class FireNotReady
		{
			command = "CMD_REPLY_FIRENOTREADY";
			shortcuts[] = {5};
			shortcutsAction = "CommandingMenu4";
			title = "Cannot fire";
		};
		class Radio
		{
			enable = "HasRadio";
			menu = "RscRadio";
			shortcuts[] = {11};
			shortcutsAction = "CommandingMenu0";
			title = "Radio";
		};
		class Repeat
		{
			command = "CMD_REPLY_REPEAT";
			enable = "CanAnswer";
			shortcuts[] = {7};
			shortcutsAction = "CommandingMenu6";
			title = "Repeat";
		};
		class RireReady
		{
			command = "CMD_REPLY_FIREREADY";
			shortcuts[] = {4};
			shortcutsAction = "CommandingMenu3";
			title = "Ready to fire";
		};
		class Separator: Separator {};
		class UserRadio
		{
			menu = "#CUSTOM_RADIO";
			shortcuts[] = {10};
			shortcutsAction = "CommandingMenu9";
			title = "Custom";
		};
	};
};
