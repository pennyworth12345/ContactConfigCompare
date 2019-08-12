class CfgVRCourses
{
	class Ballistics: Default
	{
		icon = "\A3\Structures_F_Bootcamp\VR\Helpers\Data\VR_Symbol_balistics_CA.paa";
		locks[] = {};
		official = 1;
		priority = 1;
		title = "Material Penetration";
		class Stages
		{
			class Stage1
			{
				function = "BIS_fnc_VRCourseBallistics1";
				title = "9 mm";
			};
			class Stage2
			{
				function = "BIS_fnc_VRCourseBallistics2";
				title = "5.56 mm";
			};
			class Stage3
			{
				function = "BIS_fnc_VRCourseBallistics3";
				title = "7.62 mm";
			};
			class Stage4
			{
				function = "BIS_fnc_VRCourseBallistics4";
				title = "12.7 mm";
			};
		};
	};
	class CommandingActions: Default
	{
		icon = "\A3\Structures_F_Bootcamp\VR\Helpers\Data\VR_Symbol_commanding_actions_CA.paa";
		locks[] = {"CommandingMovement"};
		official = 1;
		priority = 8;
		title = "Commanding - Actions";
		class Stages
		{
			class Stage1
			{
				function = "BIS_fnc_VRCourseCommandingActions1";
				title = "First Aid";
			};
			class Stage2
			{
				function = "BIS_fnc_VRCourseCommandingActions2";
				title = "Repairing";
			};
			class Stage3
			{
				function = "BIS_fnc_VRCourseCommandingActions3";
				title = "Deactivating mines";
			};
		};
	};
	class CommandingBehaviour: Default
	{
		icon = "\A3\Structures_F_Bootcamp\VR\Helpers\Data\VR_Symbol_commanding_behavior_CA.paa";
		locks[] = {"CommandingMovement"};
		official = 1;
		priority = 7;
		title = "Commanding - Behavior";
		class Stages
		{
			class Stage1
			{
				function = "BIS_fnc_VRCourseCommandingBehaviour1";
				title = "Stances";
			};
			class Stage2
			{
				function = "BIS_fnc_VRCourseCommandingBehaviour2";
				title = "Azimuth";
			};
			class Stage3
			{
				function = "BIS_fnc_VRCourseCommandingBehaviour3";
				title = "Behavior";
			};
		};
	};
	class CommandingMovement: Default
	{
		icon = "\A3\Structures_F_Bootcamp\VR\Helpers\Data\VR_Symbol_commanding_movement_CA.paa";
		locks[] = {};
		official = 1;
		priority = 6;
		title = "Commanding - Movement";
		class Stages
		{
			class Stage1
			{
				function = "BIS_fnc_VRCourseCommandingMovement2";
				title = "Moving in formations";
			};
			class Stage2
			{
				function = "BIS_fnc_VRCourseCommandingMovement1";
				title = "Moving subordinates";
			};
		};
	};
	class CommandingVehicles: Default
	{
		icon = "\A3\Structures_F_Bootcamp\VR\Helpers\Data\VR_Symbol_commanding_vehicles_CA.paa";
		locks[] = {"CommandingMovement"};
		official = 1;
		priority = 9;
		title = "Commanding - Vehicles";
		class Stages
		{
			class Stage1
			{
				function = "BIS_fnc_VRCourseCommandingVehicles1";
				title = "Get in, get out";
			};
			class Stage2
			{
				function = "BIS_fnc_VRCourseCommandingVehicles2";
				title = "Driving";
			};
			class Stage3
			{
				function = "BIS_fnc_VRCourseCommandingVehicles3";
				title = "Vehicle combat";
			};
		};
	};
	class Default
	{
		icon = "\A3\Structures_F_Bootcamp\VR\Helpers\Data\VR_Symbol_default_CA.paa";
		locks[] = {};
		official = 0;
		priority = -1;
	};
	class HeliAdvanced: Default
	{
		icon = "\A3\Structures_F_Heli\VR\Helpers\Data\VR_Symbol_Heli_Advanced_CA.paa";
		locks[] = {"HeliWeapons"};
		official = 1;
		title = "Helicopter - Advanced";
		class Stages
		{
			class Stage1
			{
				function = "BIS_fnc_VRCourseHeliAdvanced1";
				title = "Low Flight";
			};
			class Stage2
			{
				function = "BIS_fnc_VRCourseHeliAdvanced2";
				title = "Refuel and Rearm";
			};
			class Stage3
			{
				function = "BIS_fnc_VRCourseHeliAdvanced3";
				title = "Countermeasures";
			};
			class Stage4
			{
				function = "BIS_fnc_VRCourseHeliAdvanced5";
				title = "Crash Landing: Autorotation";
			};
			class Stage5
			{
				function = "BIS_fnc_VRCourseHeliAdvanced6";
				title = "Crash Landing: Tail Rotor Failure";
			};
		};
	};
	class HeliBasics: Default
	{
		icon = "\A3\Structures_F_Heli\VR\Helpers\Data\VR_Symbol_Heli_Basic_CA.paa";
		official = 1;
		title = "Helicopter - Basics";
		class Stages
		{
			class Stage1
			{
				function = "BIS_fnc_VRCourseHeliBasics1";
				title = "Flight Basics";
			};
			class Stage2
			{
				function = "BIS_fnc_VRCourseHeliBasics3";
				title = "Flight";
			};
			class Stage3
			{
				function = "BIS_fnc_VRCourseHeliBasics2";
				title = "Takeoff and Landing";
			};
		};
	};
	class HeliSlingload: Default
	{
		icon = "\A3\Structures_F_Heli\VR\Helpers\Data\VR_Symbol_Heli_Slingloading_CA.paa";
		locks[] = {"HeliBasics"};
		official = 1;
		title = "Helicopter - Sling Loading";
		class Stages
		{
			class Stage1
			{
				function = "BIS_fnc_VRCourseHeliSlingload1";
				title = "Mechanics";
			};
		};
	};
	class HeliWeapons: Default
	{
		icon = "\A3\Structures_F_Heli\VR\Helpers\Data\VR_Symbol_Heli_Weapons_CA.paa";
		locks[] = {"HeliBasics"};
		official = 1;
		title = "Helicopter - Weapon Systems";
		class Stages
		{
			class Stage1
			{
				function = "BIS_fnc_VRCourseHeliWeapons1";
				title = "Guided Missiles";
			};
			class Stage2
			{
				function = "BIS_fnc_VRCourseHeliWeapons2";
				title = "Door Gunner";
			};
			class Stage3
			{
				function = "BIS_fnc_VRCourseHeliWeapons3";
				title = "Unguided Missiles";
			};
			class Stage4
			{
				function = "BIS_fnc_VRCourseHeliWeapons4";
				title = "Autocannon";
			};
			class Stage5
			{
				function = "BIS_fnc_VRCourseHeliAdvanced4";
				title = "Aerial Combat";
			};
		};
	};
	class Launchers: Default
	{
		icon = "\A3\Structures_F_Bootcamp\VR\Helpers\Data\VR_Symbol_launchers_CA.paa";
		locks[] = {"Ballistics"};
		official = 1;
		priority = 3;
		title = "Launchers";
		class Stages
		{
			class Stage1
			{
				function = "BIS_fnc_VRCourseLaunchers1";
				title = "Unguided Anti-Tank";
			};
			class Stage2
			{
				function = "BIS_fnc_VRCourseLaunchers2";
				title = "Guided Anti-Tank";
			};
			class Stage3
			{
				function = "BIS_fnc_VRCourseLaunchers3";
				title = "Anti-Air";
			};
		};
	};
	class Placeables: Default
	{
		icon = "\A3\Structures_F_Bootcamp\VR\Helpers\Data\VR_Symbol_placeables_CA.paa";
		locks[] = {"Ballistics"};
		official = 1;
		priority = 2;
		title = "Placeables";
		class Stages
		{
			class Stage1
			{
				function = "BIS_fnc_VRCoursePlaceables1";
				title = "Directional Charges";
			};
			class Stage2
			{
				function = "BIS_fnc_VRCoursePlaceables2";
				title = "AP Mines";
			};
			class Stage3
			{
				function = "BIS_fnc_VRCoursePlaceables3";
				title = "AT Mines and Defusal";
			};
		};
	};
	class TargetDesignation: Default
	{
		icon = "\A3\Structures_F_Bootcamp\VR\Helpers\Data\VR_Symbol_target_designation_CA.paa";
		locks[] = {"Ballistics"};
		official = 1;
		priority = 4;
		title = "Target Designation";
		class Stages
		{
			class Stage1
			{
				function = "BIS_fnc_VRCourseTargetDesignation1";
				title = "Portable Designator";
			};
			class Stage2
			{
				function = "BIS_fnc_VRCourseTargetDesignation2";
				title = "Fixed-wing UAV";
			};
			class Stage3
			{
				function = "BIS_fnc_VRCourseTargetDesignation3";
				title = "Portable UAV";
			};
		};
	};
	class WeaponHandlingA: Default
	{
		icon = "\A3\Structures_F_Mark\VR\Helpers\Data\VR_Symbol_MARK_WeaponHandling1_CA.paa";
		locks[] = {};
		official = 1;
		title = "Weapon Handling I";
		class Stages
		{
			class Stage1
			{
				function = "BIS_fnc_VRCourseWeaponHandlingA1";
				title = "Basics";
			};
			class Stage2
			{
				function = "BIS_fnc_VRCourseWeaponHandlingA2";
				title = "Moving Targets";
			};
			class Stage3
			{
				function = "BIS_fnc_VRCourseWeaponHandlingA3";
				title = "Weapon sway";
			};
		};
	};
	class WeaponHandlingB: Default
	{
		icon = "\A3\Structures_F_Mark\VR\Helpers\Data\VR_Symbol_MARK_WeaponHandling2_CA.paa";
		locks[] = {};
		official = 1;
		title = "Weapon Handling II";
		class Stages
		{
			class Stage1
			{
				function = "BIS_fnc_VRCourseWeaponHandlingB1";
				title = "Weapon Inertia";
			};
			class Stage2
			{
				function = "BIS_fnc_VRCourseWeaponHandlingB2";
				title = "Adjusted Stances";
			};
			class Stage3
			{
				function = "BIS_fnc_VRCourseWeaponHandlingB3";
				title = "Weapon Stabilization";
			};
		};
	};
	class WeaponHandlingC: Default
	{
		icon = "\A3\Structures_F_Mark\VR\Helpers\Data\VR_Symbol_MARK_WeaponHandling3_CA.paa";
		locks[] = {};
		official = 1;
		title = "Weapon Handling III";
		class Stages
		{
			class Stage1
			{
				function = "BIS_fnc_VRCourseWeaponHandlingC1";
				title = "Optics";
			};
			class Stage2
			{
				function = "BIS_fnc_VRCourseWeaponHandlingC2";
				title = "Barrel Attachments";
			};
		};
	};
};
