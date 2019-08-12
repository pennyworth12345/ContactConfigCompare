class RscAttributeTaskState: RscControlsGroupNoScrollbars
{
	h = "2.5 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
	idc = 42300;
	onSetFocus = "[_this,""RscAttributeTaskState"",'CuratorCommon'] call (uinamespace getvariable ""BIS_fnc_initCuratorAttribute"")";
	w = "26 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
	x = "7 * 					(			((safezoneW / safezoneH) min 1.2) / 40) + 		(safezoneX + (safezoneW - 					((safezoneW / safezoneH) min 1.2))/2)";
	y = "10 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 		(safezoneY + (safezoneH - 					(			((safezoneW / safezoneH) min 1.2) / 1.2))/2)";
	class controls
	{
		class Assigned: RscActivePicture
		{
			h = "2 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = 41200;
			text = "\a3\3DEN\Data\Attributes\TaskStates\assigned_ca.paa";
			tooltip = "Assigned";
			w = "2 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			x = "11 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			y = "0.25 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
		};
		class Background: RscText
		{
			colorBackground[] = {1, 1, 1, 0.1};
			h = "2.5 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = 41000;
			w = "16 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			x = "10 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			y = "0 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
		};
		class Canceled: Assigned
		{
			h = "2 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = 41204;
			text = "\a3\3DEN\Data\Attributes\TaskStates\canceled_ca.paa";
			tooltip = "Canceled";
			w = "2 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			x = "23 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			y = "0.25 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
		};
		class Created: Assigned
		{
			h = "2 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = 41201;
			text = "\a3\3DEN\Data\Attributes\TaskStates\created_ca.paa";
			tooltip = "Created";
			w = "2 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			x = "14 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			y = "0.25 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
		};
		class Failed: Assigned
		{
			h = "2 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = 41203;
			text = "\a3\3DEN\Data\Attributes\TaskStates\failed_ca.paa";
			tooltip = "Failed";
			w = "2 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			x = "20 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			y = "0.25 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
		};
		class Succeeded: Assigned
		{
			h = "2 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = 41202;
			text = "\a3\3DEN\Data\Attributes\TaskStates\succeeded_ca.paa";
			tooltip = "Succeeded";
			w = "2 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			x = "17 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			y = "0.25 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
		};
		class Title: RscText
		{
			colorBackground[] = {0, 0, 0, 0.5};
			h = "2.5 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			idc = 41002;
			text = "State";
			w = "10 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			x = "0 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			y = "0 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
		};
	};
};
