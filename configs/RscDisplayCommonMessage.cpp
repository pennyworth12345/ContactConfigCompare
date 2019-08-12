class RscDisplayCommonMessage
{
	idd = 999;
	movingEnable = 1;
	onload = "uinamespace setvariable ['RscDisplayCommonMessage_display',_this select 0];";
	onunload = "uinamespace setvariable ['RscDisplayCommonMessage_display',nil];";
	class controls
	{
		class MessageBox: RscMessageBox
		{
			h = 1;
			w = 1;
			x = "10.6 * 					(			((safezoneW / safezoneH) min 1.2) / 40) + 		(safezoneX + (safezoneW - 					((safezoneW / safezoneH) min 1.2))/2)";
			y = "7 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 		(safezoneY + (safezoneH - 					(			((safezoneW / safezoneH) min 1.2) / 1.2))/2)";
		};
	};
};
