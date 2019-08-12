class ControllerSchemes
{
	defaultScheme = "Default";
	defaultSchemeMovementLeftBrakeButtonAccButton = "Default";
	defaultSchemeMovementLeftBrakeButtonAccTrigger = "Default";
	defaultSchemeMovementLeftBrakeTriggerAccButton = "Default";
	defaultSchemeMovementLeftBrakeTriggerAccTrigger = "Default";
	defaultSchemeMovementRightBrakeButtonAccButton = "Default";
	defaultSchemeMovementRightBrakeButtonAccTrigger = "Default";
	defaultSchemeMovementRightBrakeTriggerAccButton = "Default";
	defaultSchemeMovementRightBrakeTriggerAccTrigger = "Default";
	class Default
	{
		name = "Default Scheme";
		class Gamepad
		{
			class Actions
			{
				Action[] = {"0x00050000 + 0"};
				CancelAction[] = {"0x00050000 + 2"};
				CommandFast[] = {};
				CommandSlow[] = {};
				Compass[] = {};
				DefaultAction[] = {"0x00050000 + 13"};
				Diary[] = {};
				ForceCommandingMode[] = {"0x00050000 + 10"};
				HideMap[] = {};
				IngamePause[] = {"0x00050000 + 8"};
				LockTarget[] = {};
				MenuSelect[] = {"0x00050000 + 7"};
				navigateMenu[] = {"0x00050000 + 6"};
				NextAction[] = {"0x00050000 + 5"};
				Optics[] = {"0x00050000 + 15"};
				PersonView[] = {"0x00050000 + 9"};
				PrevAction[] = {"0x00050000 + 4"};
				ReloadMagazine[] = {"0x00050000 + 2"};
				RevealTarget[] = {"0x00050000 + 12"};
				ShowMap[] = {"0x00050000 + 11"};
				ToggleWeapons[] = {"0x00050000 + 3"};
				VehLockTargets[] = {"0x00050000 + 14"};
				ZoomContIn[] = {"0x00050000 + 12"};
				class CommandBack
				{
					curveHigh[] = {"Gamma", 1, 1.5};
					curveLow[] = {"Gamma", 1, 1.5};
					curveMedium[] = {"Gamma", 1, 1.5};
					deadZone = 0;
					keys[] = {"0x00050000 + 21"};
				};
				class CommandForward
				{
					curveHigh[] = {"Gamma", 1, 1.5};
					curveLow[] = {"Gamma", 1, 1.5};
					curveMedium[] = {"Gamma", 1, 1.5};
					deadZone = 0;
					keys[] = {"0x00050000 + 17"};
				};
				class CommandLeft
				{
					curveHigh[] = {"Gamma", 2, 3};
					curveLow[] = {"Gamma", 2, 3};
					curveMedium[] = {"Gamma", 2, 3};
					deadZone = 0;
					keys[] = {"0x00050000 + 20"};
				};
				class CommandRight
				{
					curveHigh[] = {"Gamma", 2, 3};
					curveLow[] = {"Gamma", 2, 3};
					curveMedium[] = {"Gamma", 2, 3};
					deadZone = 0;
					keys[] = {"0x00050000 + 16"};
				};
			};
			class ButtonDeadZones: ButtonDeadZonesDefault
			{
				deadZone_LeftTrigger[] = {192, 128};
				deadZone_RightTrigger[] = {80, 64};
			};
			class ThumbStickDeadZones
			{
				leftX = 0.21;
				leftY = 0.23;
				rightX = 0.21;
				rightY = 0.23;
			};
		};
		class Joystick
		{
			class Actions
			{
				Action[] = {"0x00050000 + 14"};
				CancelAction[] = {"0x00050000 + 2"};
				CommandFast[] = {};
				CommandSlow[] = {};
				Compass[] = {};
				DefaultAction[] = {"0x00050000 + 0"};
				Diary[] = {"0x00050000 + 11"};
				HideMap[] = {};
				IngamePause[] = {"0x00050000 + 8"};
				LockTarget[] = {};
				LookAround[] = {"0x00050000 + 15"};
				MenuSelect[] = {"0x00050000 + 7"};
				navigateMenu[] = {"0x00050000 + 6"};
				NextAction[] = {"0x00050000 + 5"};
				Optics[] = {};
				PersonView[] = {"0x00050000 + 9"};
				PrevAction[] = {"0x00050000 + 4"};
				ReloadMagazine[] = {"0x00050000 + 2"};
				RevealTarget[] = {"0x00050000 + 15"};
				ShowMap[] = {};
				ToggleWeapons[] = {"0x00050000 + 3"};
				VehLockTargets[] = {"0x00050000 + 11"};
				ZoomContIn[] = {"0x00050000 + 15"};
				class CommandBack
				{
					curveHigh[] = {"Gamma", 1, 1.5};
					curveLow[] = {"Gamma", 1, 1.5};
					curveMedium[] = {"Gamma", 1, 1.5};
					deadZone = 0;
					keys[] = {"0x00050000 + 12"};
				};
				class CommandForward
				{
					curveHigh[] = {"Gamma", 1, 1.5};
					curveLow[] = {"Gamma", 1, 1.5};
					curveMedium[] = {"Gamma", 1, 1.5};
					deadZone = 0;
					keys[] = {"0x00050000 + 13"};
				};
				class CommandLeft
				{
					curveHigh[] = {"Gamma", 2, 3};
					curveLow[] = {"Gamma", 2, 3};
					curveMedium[] = {"Gamma", 2, 3};
					deadZone = 0;
					keys[] = {"0x00050000 + 22"};
				};
				class CommandRight
				{
					curveHigh[] = {"Gamma", 2, 3};
					curveLow[] = {"Gamma", 2, 3};
					curveMedium[] = {"Gamma", 2, 3};
					deadZone = 0;
					keys[] = {"0x00050000 + 18"};
				};
			};
			class ButtonDeadZones: ButtonDeadZonesDefault
			{
				deadZone_LeftTrigger[] = {192, 128};
				deadZone_RightTrigger[] = {80, 64};
			};
			class ThumbStickDeadZones
			{
				leftX = 0.21;
				leftY = 0.23;
				rightX = 0.21;
				rightY = 0.23;
			};
		};
		class Vehicles
		{
			class Aircraft
			{
				axisY = 1;
				name = "Aircraft";
				class Gamepad
				{
					textDPad = "MENU";
					textLThumb = "MOVEMENT";
					textLThumbLR = "Rudder <img image='\xmisc\ctrl_strafe.paa'/>";
					textLThumbPS = "Lock Target <img image='\xmisc\ctrl_nextarget.paa'/>";
					textLThumbUD = "Fly <img image='\xmisc\ctrl_move.paa'/>";
					textRThumb = "MOVEMENT";
					textRThumbLR = "<img image='\xmisc\ctrl_strafe.paa'/> Tilt";
					textRThumbPS = "";
					textRThumbUD = "<img image='\xmisc\ctrl_move.paa'/> Tilt";
					class Actions
					{
						AutoHover[] = {"0x00050000 + 2"};
						AutoHoverCancel[] = {"0x00050000 + 2"};
						Diary[] = {};
						ForceCommandingMode[] = {};
						HeliBack[] = {};
						HeliFastForward[] = {};
						HeliForward[] = {};
						HeliManualFire[] = {"0x00050000 + 1"};
						keyLookCenter[] = {"0x00050000 + 15"};
						LookAround[] = {};
						LookAroundToggle[] = {"0x00050000 + 1"};
						SeagullForward[] = {};
						ShowMap[] = {};
						ZoomContIn[] = {};
						class AimDown
						{
							actionNameYAxis = "AimUp";
							curveHigh[] = {"Gamma", 6, 3};
							curveLow[] = {"Gamma", 6, 3};
							curveMedium[] = {"Gamma", 6, 3};
							deadZone = 0;
							keys[] = {"0x00050000 + 19"};
						};
						class AimHeadDown
						{
							actionNameYAxis = "AimHeadUp";
							curveHigh[] = {"Gamma", 6, 3};
							curveLow[] = {"Gamma", 6, 3};
							curveMedium[] = {"Gamma", 6, 3};
							deadZone = 0;
							keys[] = {"0x00050000 + 23"};
						};
						class AimHeadLeft
						{
							curveHigh[] = {"Gamma", 8, 3};
							curveLow[] = {"Gamma", 8, 3};
							curveMedium[] = {"Gamma", 8, 3};
							deadZone = 0;
							keys[] = {"0x00050000 + 22"};
						};
						class AimHeadRight
						{
							curveHigh[] = {"Gamma", 8, 3};
							curveLow[] = {"Gamma", 8, 3};
							curveMedium[] = {"Gamma", 8, 3};
							deadZone = 0;
							keys[] = {"0x00050000 + 18"};
						};
						class AimHeadUp
						{
							actionNameYAxis = "AimHeadDown";
							curveHigh[] = {"Gamma", 6, 3};
							curveLow[] = {"Gamma", 6, 3};
							curveMedium[] = {"Gamma", 6, 3};
							deadZone = 0;
							keys[] = {"0x00050000 + 19"};
						};
						class AimLeft
						{
							curveHigh[] = {"Gamma", 8, 3};
							curveLow[] = {"Gamma", 8, 3};
							curveMedium[] = {"Gamma", 8, 3};
							deadZone = 0;
							keys[] = {"0x00050000 + 22"};
						};
						class AimRight
						{
							curveHigh[] = {"Gamma", 8, 3};
							curveLow[] = {"Gamma", 8, 3};
							curveMedium[] = {"Gamma", 8, 3};
							deadZone = 0;
							keys[] = {"0x00050000 + 18"};
						};
						class AimUp
						{
							actionNameYAxis = "AimDown";
							curveHigh[] = {"Gamma", 6, 3};
							curveLow[] = {"Gamma", 6, 3};
							curveMedium[] = {"Gamma", 6, 3};
							deadZone = 0;
							keys[] = {"0x00050000 + 23"};
						};
						class HeliCollectiveLower
						{
							curveHigh[] = {"Gamma", 1, 1.5};
							curveLow[] = {"Gamma", 1, 1.5};
							curveMedium[] = {"Gamma", 1, 1.5};
							deadZone = 0;
							keys[] = {"0x00050000 + 10"};
						};
						class HeliCollectiveRaise
						{
							curveHigh[] = {"Gamma", 1, 1.5};
							curveLow[] = {"Gamma", 1, 1.5};
							curveMedium[] = {"Gamma", 1, 1.5};
							deadZone = 0;
							keys[] = {"0x00050000 + 11"};
						};
						class HeliCyclicBack
						{
							actionNameYAxis = "HeliCyclicForward";
							curveHigh[] = {"Gamma", 1, 1.5};
							curveLow[] = {"Gamma", 1, 1.5};
							curveMedium[] = {"Gamma", 1, 1.5};
							deadZone = 0;
							keys[] = {"0x00050000 + 17"};
						};
						class HeliCyclicForward
						{
							actionNameYAxis = "HeliCyclicBack";
							curveHigh[] = {"Gamma", 1, 1.5};
							curveLow[] = {"Gamma", 1, 1.5};
							curveMedium[] = {"Gamma", 1, 1.5};
							deadZone = 0;
							keys[] = {"0x00050000 + 21"};
						};
						class HeliCyclicLeft
						{
							curveHigh[] = {"Gamma", 1, 1.5};
							curveLow[] = {"Gamma", 1, 1.5};
							curveMedium[] = {"Gamma", 1, 1.5};
							deadZone = 0;
							keys[] = {"0x00050000 + 20"};
						};
						class HeliCyclicRight
						{
							curveHigh[] = {"Gamma", 1, 1.5};
							curveLow[] = {"Gamma", 1, 1.5};
							curveMedium[] = {"Gamma", 1, 1.5};
							deadZone = 0;
							keys[] = {"0x00050000 + 16"};
						};
						class HeliRudderLeft
						{
							curveHigh[] = {"Gamma", 1, 1.5};
							curveLow[] = {"Gamma", 1, 1.5};
							curveMedium[] = {"Gamma", 1, 1.5};
							deadZone = 0;
							keys[] = {"0x00050000 + 12"};
						};
						class HeliRudderRight
						{
							curveHigh[] = {"Gamma", 1, 1.5};
							curveLow[] = {"Gamma", 1, 1.5};
							curveMedium[] = {"Gamma", 1, 1.5};
							deadZone = 0;
							keys[] = {"0x00050000 + 13"};
						};
						class SeagullBack
						{
							actionNameYAxis = "SeagullFastForward";
							curveHigh[] = {"Gamma", 1, 1.5};
							curveLow[] = {"Gamma", 1, 1.5};
							curveMedium[] = {"Gamma", 1, 1.5};
							deadZone = 0;
							keys[] = {"0x00050000 + 19"};
						};
						class SeagullDown
						{
							curveHigh[] = {"Gamma", 1, 1.5};
							curveLow[] = {"Gamma", 1, 1.5};
							curveMedium[] = {"Gamma", 1, 1.5};
							deadZone = 0;
							keys[] = {"0x00050000 + 21"};
						};
						class SeagullFastForward
						{
							actionNameYAxis = "SeagullBack";
							curveHigh[] = {"Gamma", 1, 1.5};
							curveLow[] = {"Gamma", 1, 1.5};
							curveMedium[] = {"Gamma", 1, 1.5};
							deadZone = 0;
							keys[] = {"0x00050000 + 23"};
						};
						class SeagullUp
						{
							curveHigh[] = {"Gamma", 1, 1.5};
							curveLow[] = {"Gamma", 1, 1.5};
							curveMedium[] = {"Gamma", 1, 1.5};
							deadZone = 0;
							keys[] = {"0x00050000 + 17"};
						};
					};
				};
				class Joystick
				{
					textDPad = "MENU";
					textLThumb = "MOVEMENT";
					textLThumbLR = "Rudder <img image='\xmisc\ctrl_strafe.paa'/>";
					textLThumbPS = "Lock Target <img image='\xmisc\ctrl_nextarget.paa'/>";
					textLThumbUD = "Fly <img image='\xmisc\ctrl_move.paa'/>";
					textRThumb = "MOVEMENT";
					textRThumbLR = "<img image='\xmisc\ctrl_strafe.paa'/> Tilt";
					textRThumbPS = "";
					textRThumbUD = "<img image='\xmisc\ctrl_move.paa'/> Tilt";
					class Actions
					{
						HeliForward[] = {};
						HeliManualFire[] = {"0x00050000 + 1"};
						SeagullForward[] = {};
						class HeliBack
						{
							actionNameYAxis = "HeliFastForward";
							curveHigh[] = {"Gamma", 1, 1.5};
							curveLow[] = {"Gamma", 1, 1.5};
							curveMedium[] = {"Gamma", 1, 1.5};
							deadZone = 0;
							keys[] = {"0x00050000 + 17"};
						};
						class HeliCyclicLeft
						{
							curveHigh[] = {"Gamma", 1, 1.5};
							curveLow[] = {"Gamma", 1, 1.5};
							curveMedium[] = {"Gamma", 1, 1.5};
							deadZone = 0;
							keys[] = {"0x00050000 + 22"};
						};
						class HeliCyclicRight
						{
							curveHigh[] = {"Gamma", 1, 1.5};
							curveLow[] = {"Gamma", 1, 1.5};
							curveMedium[] = {"Gamma", 1, 1.5};
							deadZone = 0;
							keys[] = {"0x00050000 + 18"};
						};
						class HeliDown
						{
							curveHigh[] = {"Gamma", 1, 1.5};
							curveLow[] = {"Gamma", 1, 1.5};
							curveMedium[] = {"Gamma", 1, 1.5};
							deadZone = 0;
							keys[] = {"0x00050000 + 12"};
						};
						class HeliFastForward
						{
							actionNameYAxis = "HeliBack";
							curveHigh[] = {"Gamma", 1, 1.5};
							curveLow[] = {"Gamma", 1, 1.5};
							curveMedium[] = {"Gamma", 1, 1.5};
							deadZone = 0;
							keys[] = {"0x00050000 + 21"};
						};
						class HeliRudderLeft
						{
							curveHigh[] = {"Gamma", 1, 1.5};
							curveLow[] = {"Gamma", 1, 1.5};
							curveMedium[] = {"Gamma", 1, 1.5};
							deadZone = 0;
							keys[] = {"0x00050000 + 20"};
						};
						class HeliRudderRight
						{
							curveHigh[] = {"Gamma", 1, 1.5};
							curveLow[] = {"Gamma", 1, 1.5};
							curveMedium[] = {"Gamma", 1, 1.5};
							deadZone = 0;
							keys[] = {"0x00050000 + 16"};
						};
						class HeliUp
						{
							curveHigh[] = {"Gamma", 1, 1.5};
							curveLow[] = {"Gamma", 1, 1.5};
							curveMedium[] = {"Gamma", 1, 1.5};
							deadZone = 0;
							keys[] = {"0x00050000 + 13"};
						};
						class SeagullBack
						{
							actionNameYAxis = "SeagullFastForward";
							curveHigh[] = {"Gamma", 1, 1.5};
							curveLow[] = {"Gamma", 1, 1.5};
							curveMedium[] = {"Gamma", 1, 1.5};
							deadZone = 0;
							keys[] = {"0x00050000 + 17"};
						};
						class SeagullDown
						{
							curveHigh[] = {"Gamma", 1, 1.5};
							curveLow[] = {"Gamma", 1, 1.5};
							curveMedium[] = {"Gamma", 1, 1.5};
							deadZone = 0;
							keys[] = {"0x00050000 + 12"};
						};
						class SeagullFastForward
						{
							actionNameYAxis = "SeagullBack";
							curveHigh[] = {"Gamma", 1, 1.5};
							curveLow[] = {"Gamma", 1, 1.5};
							curveMedium[] = {"Gamma", 1, 1.5};
							deadZone = 0;
							keys[] = {"0x00050000 + 21"};
						};
						class SeagullUp
						{
							curveHigh[] = {"Gamma", 1, 1.5};
							curveLow[] = {"Gamma", 1, 1.5};
							curveMedium[] = {"Gamma", 1, 1.5};
							deadZone = 0;
							keys[] = {"0x00050000 + 13"};
						};
					};
				};
				class Wheel
				{
					textDPad = "MENU";
					textLThumb = "MOVEMENT";
					textLThumbLR = "Turn <img image='\xmisc\ctrl_strafe.paa'/>";
					textLThumbPS = "";
					textLThumbUD = "";
					textRThumb = "";
					textRThumbLR = "";
					textRThumbPS = "";
					textRThumbUD = "";
					class Actions
					{
						HeliCyclicLeft[] = {};
						HeliCyclicRight[] = {};
						HeliDown[] = {};
						HeliForward[] = {};
						HeliManualFire[] = {"0x00050000 + 0"};
						HeliUp[] = {};
						SeagullDown[] = {};
						SeagullForward[] = {};
						SeagullUp[] = {};
						class HeliBack
						{
							actionNameYAxis = "HeliFastForward";
							curveHigh[] = {"Gamma", 1, 1.5};
							curveLow[] = {"Gamma", 1, 1.5};
							curveMedium[] = {"Gamma", 1, 1.5};
							deadZone = 0;
							keys[] = {"0x00050000 + 12"};
						};
						class HeliFastForward
						{
							actionNameYAxis = "HeliBack";
							curveHigh[] = {"Gamma", 1, 1.5};
							curveLow[] = {"Gamma", 1, 1.5};
							curveMedium[] = {"Gamma", 1, 1.5};
							deadZone = 0;
							keys[] = {"0x00050000 + 13"};
						};
						class HeliRudderLeft
						{
							curveHigh[] = {"Gamma", 1, 1.5};
							curveLow[] = {"Gamma", 1, 1.5};
							curveMedium[] = {"Gamma", 1, 1.5};
							deadZone = 0;
							keys[] = {"0x00050000 + 20"};
						};
						class HeliRudderRight
						{
							curveHigh[] = {"Gamma", 1, 1.5};
							curveLow[] = {"Gamma", 1, 1.5};
							curveMedium[] = {"Gamma", 1, 1.5};
							deadZone = 0;
							keys[] = {"0x00050000 + 16"};
						};
						class SeagullBack
						{
							actionNameYAxis = "SeagullFastForward";
							curveHigh[] = {"Gamma", 1, 1.5};
							curveLow[] = {"Gamma", 1, 1.5};
							curveMedium[] = {"Gamma", 1, 1.5};
							deadZone = 0;
							keys[] = {"0x00050000 + 12"};
						};
						class SeagullFastForward
						{
							actionNameYAxis = "SeagullBack";
							curveHigh[] = {"Gamma", 1, 1.5};
							curveLow[] = {"Gamma", 1, 1.5};
							curveMedium[] = {"Gamma", 1, 1.5};
							deadZone = 0;
							keys[] = {"0x00050000 + 13"};
						};
					};
				};
			};
			class Characters
			{
				axisY = 0;
				name = "Characters";
				class Gamepad
				{
					textDPad = "MENU";
					textLThumb = "MOVEMENT";
					textLThumbLR = "Strafe <img image='\xmisc\ctrl_strafe.paa'/>";
					textLThumbPS = "Kneel <img image='\xmisc\ctrl_nextarget.paa'/>";
					textLThumbUD = "Move <img image='\xmisc\ctrl_move.paa'/>";
					textRThumb = "AIM";
					textRThumbLR = "<img image='\xmisc\ctrl_strafe.paa'/> Left/Right";
					textRThumbPS = "<img image='\xmisc\ctrl_nextarget.paa'/> Scope/Sights";
					textRThumbUD = "<img image='\xmisc\ctrl_move.paa'/> Up/Down";
					class Actions
					{
						MoveDown[] = {"0x00050000 + 1"};
						MoveUp[] = {"0x00050000 + 14"};
						class AimDown
						{
							actionNameYAxis = "AimUp";
							curveHigh[] = {"LinRampZoom", {1, 0.2, 0.05, 0.99, 0.8, 1, 1.8}, {0.7, 0.2, 0.03, 0.99, 0.6, 1, 1.6}, {0.3, 0.2, 0.02, 0.99, 0.4, 1, 1}};
							curveLow[] = {"LinRampZoom", {1, 0.2, 0.05, 0.99, 0.8, 1, 1.8}, {0.7, 0.2, 0.03, 0.99, 0.6, 1, 1.6}, {0.3, 0.2, 0.02, 0.99, 0.4, 1, 1}};
							curveMedium[] = {"LinRampZoom", {1, 0.2, 0.05, 0.99, 0.8, 1, 1.8}, {0.7, 0.2, 0.03, 0.99, 0.6, 1, 1.6}, {0.3, 0.2, 0.02, 0.99, 0.4, 1, 1}};
							deadZone = 0;
							keys[] = {"0x00050000 + 23"};
						};
						class AimHeadDown
						{
							actionNameYAxis = "AimHeadUp";
							curveHigh[] = {"Gamma", 6, 3};
							curveLow[] = {"Gamma", 6, 3};
							curveMedium[] = {"Gamma", 6, 3};
							deadZone = 0;
							keys[] = {"0x00050000 + 23"};
						};
						class AimHeadLeft
						{
							curveHigh[] = {"Gamma", 8, 3};
							curveLow[] = {"Gamma", 8, 3};
							curveMedium[] = {"Gamma", 8, 3};
							deadZone = 0;
							keys[] = {"0x00050000 + 22"};
						};
						class AimHeadRight
						{
							curveHigh[] = {"Gamma", 8, 3};
							curveLow[] = {"Gamma", 8, 3};
							curveMedium[] = {"Gamma", 8, 3};
							deadZone = 0;
							keys[] = {"0x00050000 + 18"};
						};
						class AimHeadUp
						{
							actionNameYAxis = "AimHeadDown";
							curveHigh[] = {"Gamma", 6, 3};
							curveLow[] = {"Gamma", 6, 3};
							curveMedium[] = {"Gamma", 6, 3};
							deadZone = 0;
							keys[] = {"0x00050000 + 19"};
						};
						class AimLeft
						{
							curveHigh[] = {"LinRampZoom", {1, 0.4, 0.1, 0.8, 1.44, 0.99, 2.88, 1, 3.9}, {0.7, 0.4, 0.1, 0.8, 1.2, 0.99, 2.4, 1, 3.25}, {0.3, 0.4, 0.1, 0.8, 0.96, 0.99, 1.44, 1, 1.56}};
							curveLow[] = {"LinRampZoom", {1, 0.4, 0.1, 0.8, 1.44, 0.99, 2.88, 1, 3.9}, {0.7, 0.4, 0.1, 0.8, 1.2, 0.99, 2.4, 1, 3.25}, {0.3, 0.4, 0.1, 0.8, 0.96, 0.99, 1.44, 1, 1.56}};
							curveMedium[] = {"LinRampZoom", {1, 0.4, 0.1, 0.8, 1.44, 0.99, 2.88, 1, 3.9}, {0.7, 0.4, 0.1, 0.8, 1.2, 0.99, 2.4, 1, 3.25}, {0.3, 0.4, 0.1, 0.8, 0.96, 0.99, 1.44, 1, 1.56}};
							deadZone = 0;
							keys[] = {"0x00050000 + 22"};
						};
						class AimRight
						{
							curveHigh[] = {"LinRampZoom", {1, 0.4, 0.1, 0.8, 1.44, 0.99, 2.88, 1, 3.9}, {0.7, 0.4, 0.1, 0.8, 1.2, 0.99, 2.4, 1, 3.25}, {0.3, 0.4, 0.1, 0.8, 0.96, 0.99, 1.44, 1, 1.56}};
							curveLow[] = {"LinRampZoom", {1, 0.4, 0.1, 0.8, 1.44, 0.99, 2.88, 1, 3.9}, {0.7, 0.4, 0.1, 0.8, 1.2, 0.99, 2.4, 1, 3.25}, {0.3, 0.4, 0.1, 0.8, 0.96, 0.99, 1.44, 1, 1.56}};
							curveMedium[] = {"LinRampZoom", {1, 0.4, 0.1, 0.8, 1.44, 0.99, 2.88, 1, 3.9}, {0.7, 0.4, 0.1, 0.8, 1.2, 0.99, 2.4, 1, 3.25}, {0.3, 0.4, 0.1, 0.8, 0.96, 0.99, 1.44, 1, 1.56}};
							deadZone = 0;
							keys[] = {"0x00050000 + 18"};
						};
						class AimUp
						{
							actionNameYAxis = "AimDown";
							curveHigh[] = {"LinRampZoom", {1, 0.2, 0.05, 0.99, 0.8, 1, 1.8}, {0.7, 0.2, 0.03, 0.99, 0.6, 1, 1.6}, {0.3, 0.2, 0.02, 0.99, 0.4, 1, 1}};
							curveLow[] = {"LinRampZoom", {1, 0.2, 0.05, 0.99, 0.8, 1, 1.8}, {0.7, 0.2, 0.03, 0.99, 0.6, 1, 1.6}, {0.3, 0.2, 0.02, 0.99, 0.4, 1, 1}};
							curveMedium[] = {"LinRampZoom", {1, 0.2, 0.05, 0.99, 0.8, 1, 1.8}, {0.7, 0.2, 0.03, 0.99, 0.6, 1, 1.6}, {0.3, 0.2, 0.02, 0.99, 0.4, 1, 1}};
							deadZone = 0;
							keys[] = {"0x00050000 + 19"};
						};
						class MoveBack
						{
							curveHigh[] = {"Gamma", 1, 4};
							curveLow[] = {"Gamma", 1, 4};
							curveMedium[] = {"Gamma", 1, 4};
							deadZone = 0.1;
							keys[] = {"0x00050000 + 21"};
						};
						class MoveFastForward
						{
							curveHigh[] = {"Gamma", 1, 4};
							curveLow[] = {"Gamma", 1, 4};
							curveMedium[] = {"Gamma", 1, 4};
							deadZone = 0.1;
							keys[] = {"0x00050000 + 17"};
						};
						class TurnLeft
						{
							curveHigh[] = {"Gamma", 1, 2};
							curveLow[] = {"Gamma", 1, 2};
							curveMedium[] = {"Gamma", 1, 2};
							deadZone = 0.1;
							keys[] = {"0x00050000 + 20"};
						};
						class TurnRight
						{
							curveHigh[] = {"Gamma", 1, 2};
							curveLow[] = {"Gamma", 1, 2};
							curveMedium[] = {"Gamma", 1, 2};
							deadZone = 0.1;
							keys[] = {"0x00050000 + 16"};
						};
					};
				};
				class Joystick
				{
					textDPad = "MENU";
					textLThumb = "MOVEMENT";
					textLThumbLR = "<img image='\xmisc\ctrl_strafe.paa'/> Strafe";
					textLThumbPS = "<img image='\xmisc\ctrl_nextarget.paa'/> Kneel";
					textLThumbUD = "Move <img image='\xmisc\ctrl_move.paa'/>";
					textRThumb = "AIM";
					textRThumbLR = "<img image='\xmisc\ctrl_strafe.paa'/> Left/Right";
					textRThumbPS = "<img image='\xmisc\ctrl_nextarget.paa'/> Zoom";
					textRThumbUD = "<img image='\xmisc\ctrl_move.paa'/> Up/Down";
					class Actions
					{
						MoveDown[] = {"0x00050000 + 1"};
						MoveUp[] = {};
						class AimDown
						{
							actionNameYAxis = "AimUp";
							curveHigh[] = {"LinRampZoom", {1, 0.2, 0.05, 0.99, 0.8, 1, 1.8}, {0.7, 0.2, 0.03, 0.99, 0.6, 1, 1.6}, {0.3, 0.2, 0.02, 0.99, 0.4, 1, 1}};
							curveLow[] = {"LinRampZoom", {1, 0.2, 0.05, 0.99, 0.8, 1, 1.8}, {0.7, 0.2, 0.03, 0.99, 0.6, 1, 1.6}, {0.3, 0.2, 0.02, 0.99, 0.4, 1, 1}};
							curveMedium[] = {"LinRampZoom", {1, 0.2, 0.05, 0.99, 0.8, 1, 1.8}, {0.7, 0.2, 0.03, 0.99, 0.6, 1, 1.6}, {0.3, 0.2, 0.02, 0.99, 0.4, 1, 1}};
							deadZone = 0;
							keys[] = {"0x00050000 + 21"};
						};
						class AimHeadDown
						{
							actionNameYAxis = "AimHeadUp";
							curveHigh[] = {"Gamma", 6, 3};
							curveLow[] = {"Gamma", 6, 3};
							curveMedium[] = {"Gamma", 6, 3};
							deadZone = 0;
							keys[] = {"0x00050000 + 21"};
						};
						class AimHeadLeft
						{
							curveHigh[] = {"Gamma", 8, 3};
							curveLow[] = {"Gamma", 8, 3};
							curveMedium[] = {"Gamma", 8, 3};
							deadZone = 0;
							keys[] = {"0x00050000 + 20"};
						};
						class AimHeadRight
						{
							curveHigh[] = {"Gamma", 8, 3};
							curveLow[] = {"Gamma", 8, 3};
							curveMedium[] = {"Gamma", 8, 3};
							deadZone = 0;
							keys[] = {"0x00050000 + 16"};
						};
						class AimHeadUp
						{
							actionNameYAxis = "AimHeadDown";
							curveHigh[] = {"Gamma", 6, 3};
							curveLow[] = {"Gamma", 6, 3};
							curveMedium[] = {"Gamma", 6, 3};
							deadZone = 0;
							keys[] = {"0x00050000 + 17"};
						};
						class AimLeft
						{
							curveHigh[] = {"LinRampZoom", {1, 0.4, 0.1, 0.8, 1.44, 0.99, 2.88, 1, 3.9}, {0.7, 0.4, 0.1, 0.8, 1.2, 0.99, 2.4, 1, 3.25}, {0.3, 0.4, 0.1, 0.8, 0.96, 0.99, 1.44, 1, 1.56}};
							curveLow[] = {"LinRampZoom", {1, 0.4, 0.1, 0.8, 1.44, 0.99, 2.88, 1, 3.9}, {0.7, 0.4, 0.1, 0.8, 1.2, 0.99, 2.4, 1, 3.25}, {0.3, 0.4, 0.1, 0.8, 0.96, 0.99, 1.44, 1, 1.56}};
							curveMedium[] = {"LinRampZoom", {1, 0.4, 0.1, 0.8, 1.44, 0.99, 2.88, 1, 3.9}, {0.7, 0.4, 0.1, 0.8, 1.2, 0.99, 2.4, 1, 3.25}, {0.3, 0.4, 0.1, 0.8, 0.96, 0.99, 1.44, 1, 1.56}};
							deadZone = 0;
							keys[] = {"0x00050000 + 20"};
						};
						class AimRight
						{
							curveHigh[] = {"LinRampZoom", {1, 0.4, 0.1, 0.8, 1.44, 0.99, 2.88, 1, 3.9}, {0.7, 0.4, 0.1, 0.8, 1.2, 0.99, 2.4, 1, 3.25}, {0.3, 0.4, 0.1, 0.8, 0.96, 0.99, 1.44, 1, 1.56}};
							curveLow[] = {"LinRampZoom", {1, 0.4, 0.1, 0.8, 1.44, 0.99, 2.88, 1, 3.9}, {0.7, 0.4, 0.1, 0.8, 1.2, 0.99, 2.4, 1, 3.25}, {0.3, 0.4, 0.1, 0.8, 0.96, 0.99, 1.44, 1, 1.56}};
							curveMedium[] = {"LinRampZoom", {1, 0.4, 0.1, 0.8, 1.44, 0.99, 2.88, 1, 3.9}, {0.7, 0.4, 0.1, 0.8, 1.2, 0.99, 2.4, 1, 3.25}, {0.3, 0.4, 0.1, 0.8, 0.96, 0.99, 1.44, 1, 1.56}};
							deadZone = 0;
							keys[] = {"0x00050000 + 16"};
						};
						class AimUp
						{
							actionNameYAxis = "AimDown";
							curveHigh[] = {"LinRampZoom", {1, 0.2, 0.05, 0.99, 0.8, 1, 1.8}, {0.7, 0.2, 0.03, 0.99, 0.6, 1, 1.6}, {0.3, 0.2, 0.02, 0.99, 0.4, 1, 1}};
							curveLow[] = {"LinRampZoom", {1, 0.2, 0.05, 0.99, 0.8, 1, 1.8}, {0.7, 0.2, 0.03, 0.99, 0.6, 1, 1.6}, {0.3, 0.2, 0.02, 0.99, 0.4, 1, 1}};
							curveMedium[] = {"LinRampZoom", {1, 0.2, 0.05, 0.99, 0.8, 1, 1.8}, {0.7, 0.2, 0.03, 0.99, 0.6, 1, 1.6}, {0.3, 0.2, 0.02, 0.99, 0.4, 1, 1}};
							deadZone = 0;
							keys[] = {"0x00050000 + 17"};
						};
						class MoveBack
						{
							curveHigh[] = {"Gamma", 1, 4};
							curveLow[] = {"Gamma", 1, 4};
							curveMedium[] = {"Gamma", 1, 4};
							deadZone = 0.1;
							keys[] = {"0x00050000 + 12"};
						};
						class MoveFastForward
						{
							curveHigh[] = {"Gamma", 1, 4};
							curveLow[] = {"Gamma", 1, 4};
							curveMedium[] = {"Gamma", 1, 4};
							deadZone = 0.1;
							keys[] = {"0x00050000 + 13"};
						};
						class TurnLeft
						{
							curveHigh[] = {"Gamma", 1, 2};
							curveLow[] = {"Gamma", 1, 2};
							curveMedium[] = {"Gamma", 1, 2};
							deadZone = 0.1;
							keys[] = {"0x00050000 + 22"};
						};
						class TurnRight
						{
							curveHigh[] = {"Gamma", 1, 2};
							curveLow[] = {"Gamma", 1, 2};
							curveMedium[] = {"Gamma", 1, 2};
							deadZone = 0.1;
							keys[] = {"0x00050000 + 18"};
						};
					};
				};
				class Wheel
				{
					textDPad = "MENU";
					textLThumb = "MOVEMENT";
					textLThumbLR = "Strafe <img image='\xmisc\ctrl_strafe.paa'/>";
					textLThumbPS = "";
					textLThumbUD = "Move <img image='\xmisc\ctrl_move.paa'/>";
					textRThumb = "";
					textRThumbLR = "";
					textRThumbPS = "";
					textRThumbUD = "";
					class Actions
					{
						AimDown[] = {};
						AimHeadDown[] = {};
						AimHeadUp[] = {};
						AimLeft[] = {};
						AimRight[] = {};
						AimUp[] = {};
						MoveDown[] = {};
						MoveUp[] = {};
						class AimHeadLeft
						{
							curveHigh[] = {"Gamma", 8, 3};
							curveLow[] = {"Gamma", 8, 3};
							curveMedium[] = {"Gamma", 8, 3};
							deadZone = 0;
							keys[] = {"0x00050000 + 20"};
						};
						class AimHeadRight
						{
							curveHigh[] = {"Gamma", 8, 3};
							curveLow[] = {"Gamma", 8, 3};
							curveMedium[] = {"Gamma", 8, 3};
							deadZone = 0;
							keys[] = {"0x00050000 + 16"};
						};
						class MoveBack
						{
							curveHigh[] = {"Gamma", 1, 4};
							curveLow[] = {"Gamma", 1, 4};
							curveMedium[] = {"Gamma", 1, 4};
							deadZone = 0.1;
							keys[] = {"0x00050000 + 12"};
						};
						class MoveFastForward
						{
							curveHigh[] = {"Gamma", 1, 4};
							curveLow[] = {"Gamma", 1, 4};
							curveMedium[] = {"Gamma", 1, 4};
							deadZone = 0.1;
							keys[] = {"0x00050000 + 13"};
						};
						class TurnLeft
						{
							curveHigh[] = {"Gamma", 1.5, 4};
							curveLow[] = {"Gamma", 1.5, 4};
							curveMedium[] = {"Gamma", 1.5, 4};
							deadZone = 0;
							keys[] = {"0x00050000 + 20"};
						};
						class TurnRight
						{
							curveHigh[] = {"Gamma", 1.5, 4};
							curveLow[] = {"Gamma", 1.5, 4};
							curveMedium[] = {"Gamma", 1.5, 4};
							deadZone = 0;
							keys[] = {"0x00050000 + 16"};
						};
					};
				};
			};
			class Ground
			{
				axisY = 0;
				name = "Ground vehicles";
				class Gamepad
				{
					textDPad = "MENU";
					textLThumb = "MOVEMENT";
					textLThumbLR = "";
					textLThumbPS = "";
					textLThumbUD = "Move <img image='\xmisc\ctrl_move.paa'/>";
					textRThumb = "MOVEMENT";
					textRThumbLR = "<img image='\xmisc\ctrl_strafe.paa'/> Turn";
					textRThumbPS = "";
					textRThumbUD = "";
					class Actions
					{
						CarForward[] = {};
						CarSlowForward[] = {};
						SwapGunner[] = {"0x00050000 + 1"};
						class AimHeadDown
						{
							actionNameYAxis = "AimHeadUp";
							curveHigh[] = {"Gamma", 6, 3};
							curveLow[] = {"Gamma", 6, 3};
							curveMedium[] = {"Gamma", 6, 3};
							deadZone = 0;
							keys[] = {"0x00050000 + 23"};
						};
						class AimHeadLeft
						{
							curveHigh[] = {"Gamma", 8, 3};
							curveLow[] = {"Gamma", 8, 3};
							curveMedium[] = {"Gamma", 8, 3};
							deadZone = 0;
							keys[] = {"0x00050000 + 22"};
						};
						class AimHeadRight
						{
							curveHigh[] = {"Gamma", 8, 3};
							curveLow[] = {"Gamma", 8, 3};
							curveMedium[] = {"Gamma", 8, 3};
							deadZone = 0;
							keys[] = {"0x00050000 + 18"};
						};
						class AimHeadUp
						{
							actionNameYAxis = "AimHeadDown";
							curveHigh[] = {"Gamma", 6, 3};
							curveLow[] = {"Gamma", 6, 3};
							curveMedium[] = {"Gamma", 6, 3};
							deadZone = 0;
							keys[] = {"0x00050000 + 19"};
						};
						class CarAimDown
						{
							actionNameYAxis = "CarAimUp";
							curveHigh[] = {"LinRampZoom", {1, 0.8, 0.1, 0.9, 0.14, 1, 1}, {0.7, 0.8, 0.08, 0.9, 0.12, 1, 0.8}, {0.3, 0.8, 0.06, 0.9, 0.09, 1, 0.6}};
							curveLow[] = {"LinRampZoom", {1, 0.8, 0.1, 0.9, 0.14, 1, 1}, {0.7, 0.8, 0.08, 0.9, 0.12, 1, 0.8}, {0.3, 0.8, 0.06, 0.9, 0.09, 1, 0.6}};
							curveMedium[] = {"LinRampZoom", {1, 0.8, 0.1, 0.9, 0.14, 1, 1}, {0.7, 0.8, 0.08, 0.9, 0.12, 1, 0.8}, {0.3, 0.8, 0.06, 0.9, 0.09, 1, 0.6}};
							deadZone = 0;
							keys[] = {"0x00050000 + 23"};
						};
						class CarAimLeft
						{
							curveHigh[] = {"LinRampZoom", {1, 0.4, 0.1, 0.9, "0.90 0.99", 3.6, 1, 9}, {0.7, 0.4, 0.1, 0.9, 0.75, 0.99, 3, 1, 8}, {0.3, 0.4, 0.1, 0.9, 0.6, 0.99, 1.8, 1, 5}};
							curveLow[] = {"LinRampZoom", {1, 0.4, 0.1, 0.9, "0.90 0.99", 3.6, 1, 9}, {0.7, 0.4, 0.1, 0.9, 0.75, 0.99, 3, 1, 8}, {0.3, 0.4, 0.1, 0.9, 0.6, 0.99, 1.8, 1, 5}};
							curveMedium[] = {"LinRampZoom", {1, 0.4, 0.1, 0.9, "0.90 0.99", 3.6, 1, 9}, {0.7, 0.4, 0.1, 0.9, 0.75, 0.99, 3, 1, 8}, {0.3, 0.4, 0.1, 0.9, 0.6, 0.99, 1.8, 1, 5}};
							deadZone = 0;
							keys[] = {"0x00050000 + 22"};
						};
						class CarAimRight
						{
							curveHigh[] = {"LinRampZoom", {1, 0.4, 0.1, 0.9, "0.90 0.99", 3.6, 1, 9}, {0.7, 0.4, 0.1, 0.9, 0.75, 0.99, 3, 1, 8}, {0.3, 0.4, 0.1, 0.9, 0.6, 0.99, 1.8, 1, 5}};
							curveLow[] = {"LinRampZoom", {1, 0.4, 0.1, 0.9, "0.90 0.99", 3.6, 1, 9}, {0.7, 0.4, 0.1, 0.9, 0.75, 0.99, 3, 1, 8}, {0.3, 0.4, 0.1, 0.9, 0.6, 0.99, 1.8, 1, 5}};
							curveMedium[] = {"LinRampZoom", {1, 0.4, 0.1, 0.9, "0.90 0.99", 3.6, 1, 9}, {0.7, 0.4, 0.1, 0.9, 0.75, 0.99, 3, 1, 8}, {0.3, 0.4, 0.1, 0.9, 0.6, 0.99, 1.8, 1, 5}};
							deadZone = 0;
							keys[] = {"0x00050000 + 18"};
						};
						class CarAimUp
						{
							actionNameYAxis = "CarAimDown";
							curveHigh[] = {"LinRampZoom", {1, 0.8, 0.1, 0.9, 0.14, 1, 1}, {0.7, 0.8, 0.08, 0.9, 0.12, 1, 0.8}, {0.3, 0.8, 0.06, 0.9, 0.09, 1, 0.6}};
							curveLow[] = {"LinRampZoom", {1, 0.8, 0.1, 0.9, 0.14, 1, 1}, {0.7, 0.8, 0.08, 0.9, 0.12, 1, 0.8}, {0.3, 0.8, 0.06, 0.9, 0.09, 1, 0.6}};
							curveMedium[] = {"LinRampZoom", {1, 0.8, 0.1, 0.9, 0.14, 1, 1}, {0.7, 0.8, 0.08, 0.9, 0.12, 1, 0.8}, {0.3, 0.8, 0.06, 0.9, 0.09, 1, 0.6}};
							deadZone = 0;
							keys[] = {"0x00050000 + 19"};
						};
						class CarBack
						{
							curveHigh[] = {"Gamma", 1, 1.5};
							curveLow[] = {"Gamma", 1, 1.5};
							curveMedium[] = {"Gamma", 1, 1.5};
							deadZone = 0;
							keys[] = {"0x00050000 + 21"};
						};
						class CarFastForward
						{
							curveHigh[] = {"Gamma", 1, 1.5};
							curveLow[] = {"Gamma", 1, 1.5};
							curveMedium[] = {"Gamma", 1, 1.5};
							deadZone = 0;
							keys[] = {"0x00050000 + 17"};
						};
						class CarLeft
						{
							curveHigh[] = {"Gamma", 2, 3};
							curveLow[] = {"Gamma", 2, 3};
							curveMedium[] = {"Gamma", 2, 3};
							deadZone = 0;
							keys[] = {"0x00050000 + 22"};
						};
						class CarRight
						{
							curveHigh[] = {"Gamma", 2, 3};
							curveLow[] = {"Gamma", 2, 3};
							curveMedium[] = {"Gamma", 2, 3};
							deadZone = 0;
							keys[] = {"0x00050000 + 18"};
						};
					};
				};
				class Joystick
				{
					textDPad = "MENU";
					textLThumb = "MOVEMENT";
					textLThumbLR = "";
					textLThumbPS = "";
					textLThumbUD = "Move <img image='\xmisc\ctrl_move.paa'/>";
					textRThumb = "MOVEMENT";
					textRThumbLR = "<img image='\xmisc\ctrl_strafe.paa'/> Turn";
					textRThumbPS = "";
					textRThumbUD = "";
					class Actions
					{
						CarForward[] = {};
						CarSlowForward[] = {};
						SwapGunner[] = {"0x00050000 + 1"};
						class CarAimDown
						{
							actionNameYAxis = "CarAimUp";
							curveHigh[] = {"LinRampZoom", {1, 0.8, 0.1, 0.9, 0.14, 1, 1}, {0.7, 0.8, 0.08, 0.9, 0.12, 1, 0.8}, {0.3, 0.8, 0.06, 0.9, 0.09, 1, 0.6}};
							curveLow[] = {"LinRampZoom", {1, 0.8, 0.1, 0.9, 0.14, 1, 1}, {0.7, 0.8, 0.08, 0.9, 0.12, 1, 0.8}, {0.3, 0.8, 0.06, 0.9, 0.09, 1, 0.6}};
							curveMedium[] = {"LinRampZoom", {1, 0.8, 0.1, 0.9, 0.14, 1, 1}, {0.7, 0.8, 0.08, 0.9, 0.12, 1, 0.8}, {0.3, 0.8, 0.06, 0.9, 0.09, 1, 0.6}};
							deadZone = 0;
							keys[] = {"0x00050000 + 21"};
						};
						class CarAimLeft
						{
							curveHigh[] = {"LinRampZoom", {1, 0.4, 0.1, 0.9, "0.90 0.99", 3.6, 1, 9}, {0.7, 0.4, 0.1, 0.9, 0.75, 0.99, 3, 1, 8}, {0.3, 0.4, 0.1, 0.9, 0.6, 0.99, 1.8, 1, 5}};
							curveLow[] = {"LinRampZoom", {1, 0.4, 0.1, 0.9, "0.90 0.99", 3.6, 1, 9}, {0.7, 0.4, 0.1, 0.9, 0.75, 0.99, 3, 1, 8}, {0.3, 0.4, 0.1, 0.9, 0.6, 0.99, 1.8, 1, 5}};
							curveMedium[] = {"LinRampZoom", {1, 0.4, 0.1, 0.9, "0.90 0.99", 3.6, 1, 9}, {0.7, 0.4, 0.1, 0.9, 0.75, 0.99, 3, 1, 8}, {0.3, 0.4, 0.1, 0.9, 0.6, 0.99, 1.8, 1, 5}};
							deadZone = 0;
							keys[] = {"0x00050000 + 20"};
						};
						class CarAimRight
						{
							curveHigh[] = {"LinRampZoom", {1, 0.4, 0.1, 0.9, "0.90 0.99", 3.6, 1, 9}, {0.7, 0.4, 0.1, 0.9, 0.75, 0.99, 3, 1, 8}, {0.3, 0.4, 0.1, 0.9, 0.6, 0.99, 1.8, 1, 5}};
							curveLow[] = {"LinRampZoom", {1, 0.4, 0.1, 0.9, "0.90 0.99", 3.6, 1, 9}, {0.7, 0.4, 0.1, 0.9, 0.75, 0.99, 3, 1, 8}, {0.3, 0.4, 0.1, 0.9, 0.6, 0.99, 1.8, 1, 5}};
							curveMedium[] = {"LinRampZoom", {1, 0.4, 0.1, 0.9, "0.90 0.99", 3.6, 1, 9}, {0.7, 0.4, 0.1, 0.9, 0.75, 0.99, 3, 1, 8}, {0.3, 0.4, 0.1, 0.9, 0.6, 0.99, 1.8, 1, 5}};
							deadZone = 0;
							keys[] = {"0x00050000 + 16"};
						};
						class CarAimUp
						{
							actionNameYAxis = "CarAimDown";
							curveHigh[] = {"LinRampZoom", {1, 0.8, 0.1, 0.9, 0.14, 1, 1}, {0.7, 0.8, 0.08, 0.9, 0.12, 1, 0.8}, {0.3, 0.8, 0.06, 0.9, 0.09, 1, 0.6}};
							curveLow[] = {"LinRampZoom", {1, 0.8, 0.1, 0.9, 0.14, 1, 1}, {0.7, 0.8, 0.08, 0.9, 0.12, 1, 0.8}, {0.3, 0.8, 0.06, 0.9, 0.09, 1, 0.6}};
							curveMedium[] = {"LinRampZoom", {1, 0.8, 0.1, 0.9, 0.14, 1, 1}, {0.7, 0.8, 0.08, 0.9, 0.12, 1, 0.8}, {0.3, 0.8, 0.06, 0.9, 0.09, 1, 0.6}};
							deadZone = 0;
							keys[] = {"0x00050000 + 17"};
						};
						class CarBack
						{
							curveHigh[] = {"Gamma", 1, 1.5};
							curveLow[] = {"Gamma", 1, 1.5};
							curveMedium[] = {"Gamma", 1, 1.5};
							deadZone = 0;
							keys[] = {"0x00050000 + 12"};
						};
						class CarFastForward
						{
							curveHigh[] = {"Gamma", 1, 1.5};
							curveLow[] = {"Gamma", 1, 1.5};
							curveMedium[] = {"Gamma", 1, 1.5};
							deadZone = 0;
							keys[] = {"0x00050000 + 13"};
						};
						class CarLeft
						{
							curveHigh[] = {"Gamma", 2, 3};
							curveLow[] = {"Gamma", 2, 3};
							curveMedium[] = {"Gamma", 2, 3};
							deadZone = 0;
							keys[] = {"0x00050000 + 20"};
						};
						class CarRight
						{
							curveHigh[] = {"Gamma", 2, 3};
							curveLow[] = {"Gamma", 2, 3};
							curveMedium[] = {"Gamma", 2, 3};
							deadZone = 0;
							keys[] = {"0x00050000 + 16"};
						};
					};
				};
				class Wheel
				{
					textDPad = "MENU";
					textLThumb = "MOVEMENT";
					textLThumbLR = "Strafe <img image='\xmisc\ctrl_strafe.paa'/>";
					textLThumbPS = "";
					textLThumbUD = "Move <img image='\xmisc\ctrl_move.paa'/>";
					textRThumb = "";
					textRThumbLR = "";
					textRThumbPS = "";
					textRThumbUD = "";
					class Actions
					{
						CarAimDown[] = {};
						CarAimUp[] = {};
						CarForward[] = {};
						CarSlowForward[] = {};
						SwapGunner[] = {"0x00050000 + 0"};
						class CarAimLeft
						{
							curveHigh[] = {"Gamma", 8, 3};
							curveLow[] = {"Gamma", 8, 3};
							curveMedium[] = {"Gamma", 8, 3};
							deadZone = 0;
							keys[] = {"0x00050000 + 20"};
						};
						class CarAimRight
						{
							curveHigh[] = {"Gamma", 8, 3};
							curveLow[] = {"Gamma", 8, 3};
							curveMedium[] = {"Gamma", 8, 3};
							deadZone = 0;
							keys[] = {"0x00050000 + 16"};
						};
						class CarBack
						{
							curveHigh[] = {"Gamma", 1, 1.5};
							curveLow[] = {"Gamma", 1, 1.5};
							curveMedium[] = {"Gamma", 1, 1.5};
							deadZone = 0;
							keys[] = {"0x00050000 + 12"};
						};
						class CarFastForward
						{
							curveHigh[] = {"Gamma", 1, 1.5};
							curveLow[] = {"Gamma", 1, 1.5};
							curveMedium[] = {"Gamma", 1, 1.5};
							deadZone = 0;
							keys[] = {"0x00050000 + 13"};
						};
						class CarLeft
						{
							curveHigh[] = {"Gamma", 2, 3};
							curveLow[] = {"Gamma", 2, 3};
							curveMedium[] = {"Gamma", 2, 3};
							deadZone = 0;
							keys[] = {"0x00050000 + 20"};
						};
						class CarRight
						{
							curveHigh[] = {"Gamma", 2, 3};
							curveLow[] = {"Gamma", 2, 3};
							curveMedium[] = {"Gamma", 2, 3};
							deadZone = 0;
							keys[] = {"0x00050000 + 16"};
						};
					};
				};
			};
		};
		class Wheel
		{
			class Actions
			{
				Action[] = {"0x00050000 + 0"};
				CancelAction[] = {"0x00050000 + 2"};
				CommandFast[] = {};
				CommandSlow[] = {};
				Compass[] = {};
				DefaultAction[] = {"0x00050000 + 10"};
				Diary[] = {"0x00050000 + 11"};
				HideMap[] = {};
				IngamePause[] = {"0x00050000 + 8"};
				LockTarget[] = {};
				LookAround[] = {"0x00050000 + 11"};
				MenuSelect[] = {"0x00050000 + 7"};
				navigateMenu[] = {"0x00050000 + 6"};
				NextAction[] = {"0x00050000 + 5"};
				Optics[] = {};
				PersonView[] = {"0x00050000 + 9"};
				PrevAction[] = {"0x00050000 + 4"};
				ReloadMagazine[] = {"0x00050000 + 2"};
				RevealTarget[] = {"0x00050000 + 12"};
				ShowMap[] = {};
				ToggleWeapons[] = {"0x00050000 + 3"};
				VehLockTargets[] = {};
				ZoomContIn[] = {"0x00050000 + 11"};
				class CommandBack
				{
					curveHigh[] = {"Gamma", 1, 1.5};
					curveLow[] = {"Gamma", 1, 1.5};
					curveMedium[] = {"Gamma", 1, 1.5};
					deadZone = 0;
					keys[] = {"0x00050000 + 21"};
				};
				class CommandForward
				{
					curveHigh[] = {"Gamma", 1, 1.5};
					curveLow[] = {"Gamma", 1, 1.5};
					curveMedium[] = {"Gamma", 1, 1.5};
					deadZone = 0;
					keys[] = {"0x00050000 + 17"};
				};
				class CommandLeft
				{
					curveHigh[] = {"Gamma", 2, 3};
					curveLow[] = {"Gamma", 2, 3};
					curveMedium[] = {"Gamma", 2, 3};
					deadZone = 0;
					keys[] = {"0x00050000 + 20"};
				};
				class CommandRight
				{
					curveHigh[] = {"Gamma", 2, 3};
					curveLow[] = {"Gamma", 2, 3};
					curveMedium[] = {"Gamma", 2, 3};
					deadZone = 0;
					keys[] = {"0x00050000 + 16"};
				};
			};
			class ButtonDeadZones: ButtonDeadZonesDefault
			{
				deadZone_LeftTrigger[] = {192, 128};
				deadZone_RightTrigger[] = {80, 64};
			};
			class ThumbStickDeadZones
			{
				leftX = 0.21;
				leftY = 0.23;
				rightX = 0.21;
				rightY = 0.23;
			};
		};
	};
	class LeftHanded: Default
	{
		name = "Left Handed";
		class Gamepad
		{
			class Actions
			{
				Action[] = {"0x00050000 + 0"};
				CancelAction[] = {"0x00050000 + 2"};
				CommandFast[] = {};
				CommandSlow[] = {};
				Compass[] = {};
				DefaultAction[] = {"0x00050000 + 12"};
				Diary[] = {"0x00050000 + 11"};
				ForceCommandingMode[] = {"0x00050000 + 11"};
				HideMap[] = {};
				IngamePause[] = {"0x00050000 + 8"};
				LockTarget[] = {};
				LookAround[] = {"0x00050000 + 13"};
				MenuSelect[] = {"0x00050000 + 7"};
				navigateMenu[] = {"0x00050000 + 6"};
				NextAction[] = {"0x00050000 + 5"};
				Optics[] = {"0x00050000 + 14"};
				PersonView[] = {"0x00050000 + 9"};
				PrevAction[] = {"0x00050000 + 4"};
				ReloadMagazine[] = {"0x00050000 + 2"};
				RevealTarget[] = {"0x00050000 + 13"};
				ShowMap[] = {};
				ToggleWeapons[] = {"0x00050000 + 3"};
				VehLockTargets[] = {"0x00050000 + 15"};
				ZoomContIn[] = {"0x00050000 + 13"};
				class CommandBack
				{
					curveHigh[] = {"Gamma", 1, 1.5};
					curveLow[] = {"Gamma", 1, 1.5};
					curveMedium[] = {"Gamma", 1, 1.5};
					deadZone = 0;
					keys[] = {"0x00050000 + 23"};
				};
				class CommandForward
				{
					curveHigh[] = {"Gamma", 1, 1.5};
					curveLow[] = {"Gamma", 1, 1.5};
					curveMedium[] = {"Gamma", 1, 1.5};
					deadZone = 0;
					keys[] = {"0x00050000 + 19"};
				};
				class CommandLeft
				{
					curveHigh[] = {"Gamma", 2, 3};
					curveLow[] = {"Gamma", 2, 3};
					curveMedium[] = {"Gamma", 2, 3};
					deadZone = 0;
					keys[] = {"0x00050000 + 22"};
				};
				class CommandRight
				{
					curveHigh[] = {"Gamma", 2, 3};
					curveLow[] = {"Gamma", 2, 3};
					curveMedium[] = {"Gamma", 2, 3};
					deadZone = 0;
					keys[] = {"0x00050000 + 18"};
				};
			};
			class ButtonDeadZones: ButtonDeadZonesDefault
			{
				deadZone_LeftTrigger[] = {192, 128};
				deadZone_RightTrigger[] = {80, 64};
			};
			class ThumbStickDeadZones
			{
				leftX = 0.21;
				leftY = 0.23;
				rightX = 0.21;
				rightY = 0.23;
			};
		};
		class Joystick
		{
			class Actions
			{
				Action[] = {"0x00050000 + 0"};
				CancelAction[] = {"0x00050000 + 2"};
				CommandFast[] = {};
				CommandSlow[] = {};
				Compass[] = {};
				DefaultAction[] = {"0x00050000 + 3"};
				Diary[] = {"0x00050000 + 11"};
				HideMap[] = {};
				IngamePause[] = {"0x00050000 + 8"};
				LockTarget[] = {};
				LookAround[] = {"0x00050000 + 12"};
				MenuSelect[] = {"0x00050000 + 7"};
				navigateMenu[] = {"0x00050000 + 6"};
				NextAction[] = {"0x00050000 + 5"};
				Optics[] = {"0x00050000 + 10"};
				PersonView[] = {"0x00050000 + 9"};
				PrevAction[] = {"0x00050000 + 4"};
				ReloadMagazine[] = {"0x00050000 + 2"};
				RevealTarget[] = {};
				ShowMap[] = {};
				ToggleWeapons[] = {"0x00050000 + 3"};
				VehLockTargets[] = {};
				ZoomContIn[] = {};
				class CommandBack
				{
					curveHigh[] = {"Gamma", 1, 1.5};
					curveLow[] = {"Gamma", 1, 1.5};
					curveMedium[] = {"Gamma", 1, 1.5};
					deadZone = 0;
					keys[] = {"0x00050000 + 21"};
				};
				class CommandForward
				{
					curveHigh[] = {"Gamma", 1, 1.5};
					curveLow[] = {"Gamma", 1, 1.5};
					curveMedium[] = {"Gamma", 1, 1.5};
					deadZone = 0;
					keys[] = {"0x00050000 + 17"};
				};
				class CommandLeft
				{
					curveHigh[] = {"Gamma", 2, 3};
					curveLow[] = {"Gamma", 2, 3};
					curveMedium[] = {"Gamma", 2, 3};
					deadZone = 0;
					keys[] = {"0x00050000 + 20"};
				};
				class CommandRight
				{
					curveHigh[] = {"Gamma", 2, 3};
					curveLow[] = {"Gamma", 2, 3};
					curveMedium[] = {"Gamma", 2, 3};
					deadZone = 0;
					keys[] = {"0x00050000 + 16"};
				};
			};
			class ButtonDeadZones: ButtonDeadZonesDefault
			{
				deadZone_LeftTrigger[] = {192, 128};
				deadZone_RightTrigger[] = {80, 64};
			};
			class ThumbStickDeadZones
			{
				leftX = 0.21;
				leftY = 0.23;
				rightX = 0.21;
				rightY = 0.23;
			};
		};
		class Vehicles: Vehicles
		{
			class Aircraft: Aircraft
			{
				axisY = 1;
				name = "aIr";
				class Gamepad
				{
					textDPad = "MENU";
					textLThumb = "MOVEMENT";
					textLThumbLR = "Tilt <img image='\xmisc\ctrl_strafe.paa'/>";
					textLThumbPS = "";
					textLThumbUD = "Tilt <img image='\xmisc\ctrl_move.paa'/>";
					textRThumb = "MOVEMENT";
					textRThumbLR = "<img image='\xmisc\ctrl_move.paa'/> Fly";
					textRThumbPS = "<img image='\xmisc\ctrl_nextarget.paa'/> Lock Target";
					textRThumbUD = "<img image='\xmisc\ctrl_strafe.paa'/> Rudder";
					class Actions
					{
						HeliForward[] = {};
						HeliManualFire[] = {"0x00050000 + 1"};
						SeagullForward[] = {};
						class HeliBack
						{
							actionNameYAxis = "HeliFastForward";
							curveHigh[] = {"Gamma", 1, 1.5};
							curveLow[] = {"Gamma", 1, 1.5};
							curveMedium[] = {"Gamma", 1, 1.5};
							deadZone = 0;
							keys[] = {"0x00050000 + 17"};
						};
						class HeliCyclicLeft
						{
							curveHigh[] = {"Gamma", 1, 1.5};
							curveLow[] = {"Gamma", 1, 1.5};
							curveMedium[] = {"Gamma", 1, 1.5};
							deadZone = 0;
							keys[] = {"0x00050000 + 20"};
						};
						class HeliCyclicRight
						{
							curveHigh[] = {"Gamma", 1, 1.5};
							curveLow[] = {"Gamma", 1, 1.5};
							curveMedium[] = {"Gamma", 1, 1.5};
							deadZone = 0;
							keys[] = {"0x00050000 + 18"};
						};
						class HeliDown
						{
							curveHigh[] = {"Gamma", 1, 1.5};
							curveLow[] = {"Gamma", 1, 1.5};
							curveMedium[] = {"Gamma", 1, 1.5};
							deadZone = 0;
							keys[] = {"0x00050000 + 23"};
						};
						class HeliFastForward
						{
							actionNameYAxis = "HeliBack";
							curveHigh[] = {"Gamma", 1, 1.5};
							curveLow[] = {"Gamma", 1, 1.5};
							curveMedium[] = {"Gamma", 1, 1.5};
							deadZone = 0;
							keys[] = {"0x00050000 + 21"};
						};
						class HeliRudderLeft
						{
							curveHigh[] = {"Gamma", 1, 1.5};
							curveLow[] = {"Gamma", 1, 1.5};
							curveMedium[] = {"Gamma", 1, 1.5};
							deadZone = 0;
							keys[] = {"0x00050000 + 20"};
						};
						class HeliRudderRight
						{
							curveHigh[] = {"Gamma", 1, 1.5};
							curveLow[] = {"Gamma", 1, 1.5};
							curveMedium[] = {"Gamma", 1, 1.5};
							deadZone = 0;
							keys[] = {"0x00050000 + 18"};
						};
						class HeliUp
						{
							curveHigh[] = {"Gamma", 1, 1.5};
							curveLow[] = {"Gamma", 1, 1.5};
							curveMedium[] = {"Gamma", 1, 1.5};
							deadZone = 0;
							keys[] = {"0x00050000 + 19"};
						};
						class SeagullBack
						{
							actionNameYAxis = "SeagullFastForward";
							curveHigh[] = {"Gamma", 1, 1.5};
							curveLow[] = {"Gamma", 1, 1.5};
							curveMedium[] = {"Gamma", 1, 1.5};
							deadZone = 0;
							keys[] = {"0x00050000 + 17"};
						};
						class SeagullDown
						{
							curveHigh[] = {"Gamma", 1, 1.5};
							curveLow[] = {"Gamma", 1, 1.5};
							curveMedium[] = {"Gamma", 1, 1.5};
							deadZone = 0;
							keys[] = {"0x00050000 + 23"};
						};
						class SeagullFastForward
						{
							actionNameYAxis = "SeagullBack";
							curveHigh[] = {"Gamma", 1, 1.5};
							curveLow[] = {"Gamma", 1, 1.5};
							curveMedium[] = {"Gamma", 1, 1.5};
							deadZone = 0;
							keys[] = {"0x00050000 + 21"};
						};
						class SeagullUp
						{
							curveHigh[] = {"Gamma", 1, 1.5};
							curveLow[] = {"Gamma", 1, 1.5};
							curveMedium[] = {"Gamma", 1, 1.5};
							deadZone = 0;
							keys[] = {"0x00050000 + 19"};
						};
					};
				};
				class Joystick: Joystick {};
				class Wheel: Wheel {};
			};
			class Characters: Characters
			{
				axisY = 0;
				name = "characTers";
				class Gamepad
				{
					textDPad = "MENU";
					textLThumb = "AIM";
					textLThumbLR = "Left/Right <img image='\xmisc\ctrl_strafe.paa'/>";
					textLThumbPS = "Optics <img image='\xmisc\ctrl_nextarget.paa'/>";
					textLThumbUD = "Up/Down <img image='\xmisc\ctrl_move.paa'/>";
					textRThumb = "MOVEMENT";
					textRThumbLR = "<img image='\xmisc\ctrl_strafe.paa'/> Strafe";
					textRThumbPS = "<img image='\xmisc\ctrl_nextarget.paa'/> Kneel";
					textRThumbUD = "<img image='\xmisc\ctrl_move.paa'/> Move";
					class Actions
					{
						MoveDown[] = {"0x00050000 + 1"};
						MoveUp[] = {"0x00050000 + 15"};
						class AimDown
						{
							actionNameYAxis = "AimUp";
							curveHigh[] = {"LinRampZoom", {1, 0.2, 0.05, 0.99, 0.8, 1, 1.8}, {0.7, 0.2, 0.03, 0.99, 0.6, 1, 1.6}, {0.3, 0.2, 0.02, 0.99, 0.4, 1, 1}};
							curveLow[] = {"LinRampZoom", {1, 0.2, 0.05, 0.99, 0.8, 1, 1.8}, {0.7, 0.2, 0.03, 0.99, 0.6, 1, 1.6}, {0.3, 0.2, 0.02, 0.99, 0.4, 1, 1}};
							curveMedium[] = {"LinRampZoom", {1, 0.2, 0.05, 0.99, 0.8, 1, 1.8}, {0.7, 0.2, 0.03, 0.99, 0.6, 1, 1.6}, {0.3, 0.2, 0.02, 0.99, 0.4, 1, 1}};
							deadZone = 0;
							keys[] = {"0x00050000 + 21"};
						};
						class AimHeadDown
						{
							actionNameYAxis = "AimHeadUp";
							curveHigh[] = {"Gamma", 6, 3};
							curveLow[] = {"Gamma", 6, 3};
							curveMedium[] = {"Gamma", 6, 3};
							deadZone = 0;
							keys[] = {"0x00050000 + 21"};
						};
						class AimHeadLeft
						{
							curveHigh[] = {"Gamma", 8, 3};
							curveLow[] = {"Gamma", 8, 3};
							curveMedium[] = {"Gamma", 8, 3};
							deadZone = 0;
							keys[] = {"0x00050000 + 20"};
						};
						class AimHeadRight
						{
							curveHigh[] = {"Gamma", 8, 3};
							curveLow[] = {"Gamma", 8, 3};
							curveMedium[] = {"Gamma", 8, 3};
							deadZone = 0;
							keys[] = {"0x00050000 + 16"};
						};
						class AimHeadUp
						{
							actionNameYAxis = "AimHeadDown";
							curveHigh[] = {"Gamma", 6, 3};
							curveLow[] = {"Gamma", 6, 3};
							curveMedium[] = {"Gamma", 6, 3};
							deadZone = 0;
							keys[] = {"0x00050000 + 17"};
						};
						class AimLeft
						{
							curveHigh[] = {"LinRampZoom", {1, 0.4, 0.1, 0.8, 1.44, 0.99, 2.88, 1, 3.9}, {0.7, 0.4, 0.1, 0.8, 1.2, 0.99, 2.4, 1, 3.25}, {0.3, 0.4, 0.1, 0.8, 0.96, 0.99, 1.44, 1, 1.56}};
							curveLow[] = {"LinRampZoom", {1, 0.4, 0.1, 0.8, 1.44, 0.99, 2.88, 1, 3.9}, {0.7, 0.4, 0.1, 0.8, 1.2, 0.99, 2.4, 1, 3.25}, {0.3, 0.4, 0.1, 0.8, 0.96, 0.99, 1.44, 1, 1.56}};
							curveMedium[] = {"LinRampZoom", {1, 0.4, 0.1, 0.8, 1.44, 0.99, 2.88, 1, 3.9}, {0.7, 0.4, 0.1, 0.8, 1.2, 0.99, 2.4, 1, 3.25}, {0.3, 0.4, 0.1, 0.8, 0.96, 0.99, 1.44, 1, 1.56}};
							deadZone = 0;
							keys[] = {"0x00050000 + 20"};
						};
						class AimRight
						{
							curveHigh[] = {"LinRampZoom", {1, 0.4, 0.1, 0.8, 1.44, 0.99, 2.88, 1, 3.9}, {0.7, 0.4, 0.1, 0.8, 1.2, 0.99, 2.4, 1, 3.25}, {0.3, 0.4, 0.1, 0.8, 0.96, 0.99, 1.44, 1, 1.56}};
							curveLow[] = {"LinRampZoom", {1, 0.4, 0.1, 0.8, 1.44, 0.99, 2.88, 1, 3.9}, {0.7, 0.4, 0.1, 0.8, 1.2, 0.99, 2.4, 1, 3.25}, {0.3, 0.4, 0.1, 0.8, 0.96, 0.99, 1.44, 1, 1.56}};
							curveMedium[] = {"LinRampZoom", {1, 0.4, 0.1, 0.8, 1.44, 0.99, 2.88, 1, 3.9}, {0.7, 0.4, 0.1, 0.8, 1.2, 0.99, 2.4, 1, 3.25}, {0.3, 0.4, 0.1, 0.8, 0.96, 0.99, 1.44, 1, 1.56}};
							deadZone = 0;
							keys[] = {"0x00050000 + 16"};
						};
						class AimUp
						{
							actionNameYAxis = "AimDown";
							curveHigh[] = {"LinRampZoom", {1, 0.2, 0.05, 0.99, 0.8, 1, 1.8}, {0.7, 0.2, 0.03, 0.99, 0.6, 1, 1.6}, {0.3, 0.2, 0.02, 0.99, 0.4, 1, 1}};
							curveLow[] = {"LinRampZoom", {1, 0.2, 0.05, 0.99, 0.8, 1, 1.8}, {0.7, 0.2, 0.03, 0.99, 0.6, 1, 1.6}, {0.3, 0.2, 0.02, 0.99, 0.4, 1, 1}};
							curveMedium[] = {"LinRampZoom", {1, 0.2, 0.05, 0.99, 0.8, 1, 1.8}, {0.7, 0.2, 0.03, 0.99, 0.6, 1, 1.6}, {0.3, 0.2, 0.02, 0.99, 0.4, 1, 1}};
							deadZone = 0;
							keys[] = {"0x00050000 + 17"};
						};
						class MoveBack
						{
							curveHigh[] = {"Gamma", 1, 4};
							curveLow[] = {"Gamma", 1, 4};
							curveMedium[] = {"Gamma", 1, 4};
							deadZone = 0.1;
							keys[] = {"0x00050000 + 23"};
						};
						class MoveFastForward
						{
							curveHigh[] = {"Gamma", 1, 4};
							curveLow[] = {"Gamma", 1, 4};
							curveMedium[] = {"Gamma", 1, 4};
							deadZone = 0.1;
							keys[] = {"0x00050000 + 19"};
						};
						class TurnLeft
						{
							curveHigh[] = {"Gamma", 1, 2};
							curveLow[] = {"Gamma", 1, 2};
							curveMedium[] = {"Gamma", 1, 2};
							deadZone = 0.1;
							keys[] = {"0x00050000 + 22"};
						};
						class TurnRight
						{
							curveHigh[] = {"Gamma", 1, 2};
							curveLow[] = {"Gamma", 1, 2};
							curveMedium[] = {"Gamma", 1, 2};
							deadZone = 0.1;
							keys[] = {"0x00050000 + 18"};
						};
					};
				};
				class Joystick: Joystick {};
				class Wheel: Wheel {};
			};
			class Ground: Ground
			{
				axisY = 0;
				name = "groUnd";
				class Gamepad
				{
					textDPad = "MENU";
					textLThumb = "MOVEMENT";
					textLThumbLR = "Turn <img image='\xmisc\ctrl_strafe.paa'/>";
					textLThumbPS = "";
					textLThumbUD = "";
					textRThumb = "MOVEMENT";
					textRThumbLR = "";
					textRThumbPS = "";
					textRThumbUD = "<img image='\xmisc\ctrl_move.paa'/> Move";
					class Actions
					{
						CarForward[] = {};
						CarSlowForward[] = {};
						SwapGunner[] = {"0x00050000 + 1"};
						class CarAimDown
						{
							actionNameYAxis = "CarAimUp";
							curveHigh[] = {"LinRampZoom", {1, 0.8, 0.1, 0.9, 0.14, 1, 1}, {0.7, 0.8, 0.08, 0.9, 0.12, 1, 0.8}, {0.3, 0.8, 0.06, 0.9, 0.09, 1, 0.6}};
							curveLow[] = {"LinRampZoom", {1, 0.8, 0.1, 0.9, 0.14, 1, 1}, {0.7, 0.8, 0.08, 0.9, 0.12, 1, 0.8}, {0.3, 0.8, 0.06, 0.9, 0.09, 1, 0.6}};
							curveMedium[] = {"LinRampZoom", {1, 0.8, 0.1, 0.9, 0.14, 1, 1}, {0.7, 0.8, 0.08, 0.9, 0.12, 1, 0.8}, {0.3, 0.8, 0.06, 0.9, 0.09, 1, 0.6}};
							deadZone = 0;
							keys[] = {"0x00050000 + 21"};
						};
						class CarAimLeft
						{
							curveHigh[] = {"LinRampZoom", {1, 0.4, 0.1, 0.9, "0.90 0.99", 3.6, 1, 9}, {0.7, 0.4, 0.1, 0.9, 0.75, 0.99, 3, 1, 8}, {0.3, 0.4, 0.1, 0.9, 0.6, 0.99, 1.8, 1, 5}};
							curveLow[] = {"LinRampZoom", {1, 0.4, 0.1, 0.9, "0.90 0.99", 3.6, 1, 9}, {0.7, 0.4, 0.1, 0.9, 0.75, 0.99, 3, 1, 8}, {0.3, 0.4, 0.1, 0.9, 0.6, 0.99, 1.8, 1, 5}};
							curveMedium[] = {"LinRampZoom", {1, 0.4, 0.1, 0.9, "0.90 0.99", 3.6, 1, 9}, {0.7, 0.4, 0.1, 0.9, 0.75, 0.99, 3, 1, 8}, {0.3, 0.4, 0.1, 0.9, 0.6, 0.99, 1.8, 1, 5}};
							deadZone = 0;
							keys[] = {"0x00050000 + 20"};
						};
						class CarAimRight
						{
							curveHigh[] = {"LinRampZoom", {1, 0.4, 0.1, 0.9, "0.90 0.99", 3.6, 1, 9}, {0.7, 0.4, 0.1, 0.9, 0.75, 0.99, 3, 1, 8}, {0.3, 0.4, 0.1, 0.9, 0.6, 0.99, 1.8, 1, 5}};
							curveLow[] = {"LinRampZoom", {1, 0.4, 0.1, 0.9, "0.90 0.99", 3.6, 1, 9}, {0.7, 0.4, 0.1, 0.9, 0.75, 0.99, 3, 1, 8}, {0.3, 0.4, 0.1, 0.9, 0.6, 0.99, 1.8, 1, 5}};
							curveMedium[] = {"LinRampZoom", {1, 0.4, 0.1, 0.9, "0.90 0.99", 3.6, 1, 9}, {0.7, 0.4, 0.1, 0.9, 0.75, 0.99, 3, 1, 8}, {0.3, 0.4, 0.1, 0.9, 0.6, 0.99, 1.8, 1, 5}};
							deadZone = 0;
							keys[] = {"0x00050000 + 16"};
						};
						class CarAimUp
						{
							actionNameYAxis = "CarAimDown";
							curveHigh[] = {"LinRampZoom", {1, 0.8, 0.1, 0.9, 0.14, 1, 1}, {0.7, 0.8, 0.08, 0.9, 0.12, 1, 0.8}, {0.3, 0.8, 0.06, 0.9, 0.09, 1, 0.6}};
							curveLow[] = {"LinRampZoom", {1, 0.8, 0.1, 0.9, 0.14, 1, 1}, {0.7, 0.8, 0.08, 0.9, 0.12, 1, 0.8}, {0.3, 0.8, 0.06, 0.9, 0.09, 1, 0.6}};
							curveMedium[] = {"LinRampZoom", {1, 0.8, 0.1, 0.9, 0.14, 1, 1}, {0.7, 0.8, 0.08, 0.9, 0.12, 1, 0.8}, {0.3, 0.8, 0.06, 0.9, 0.09, 1, 0.6}};
							deadZone = 0;
							keys[] = {"0x00050000 + 17"};
						};
						class CarBack
						{
							curveHigh[] = {"Gamma", 1, 1.5};
							curveLow[] = {"Gamma", 1, 1.5};
							curveMedium[] = {"Gamma", 1, 1.5};
							deadZone = 0;
							keys[] = {"0x00050000 + 23"};
						};
						class CarFastForward
						{
							curveHigh[] = {"Gamma", 1, 1.5};
							curveLow[] = {"Gamma", 1, 1.5};
							curveMedium[] = {"Gamma", 1, 1.5};
							deadZone = 0;
							keys[] = {"0x00050000 + 19"};
						};
						class CarLeft
						{
							curveHigh[] = {"Gamma", 2, 3};
							curveLow[] = {"Gamma", 2, 3};
							curveMedium[] = {"Gamma", 2, 3};
							deadZone = 0;
							keys[] = {"0x00050000 + 20"};
						};
						class CarRight
						{
							curveHigh[] = {"Gamma", 2, 3};
							curveLow[] = {"Gamma", 2, 3};
							curveMedium[] = {"Gamma", 2, 3};
							deadZone = 0;
							keys[] = {"0x00050000 + 16"};
						};
					};
				};
				class Joystick: Joystick {};
				class Wheel: Wheel {};
			};
		};
		class Wheel
		{
			class Actions
			{
				Action[] = {"0x00050000 + 0"};
				CancelAction[] = {"0x00050000 + 2"};
				CommandFast[] = {};
				CommandSlow[] = {};
				Compass[] = {};
				DefaultAction[] = {"0x00050000 + 10"};
				Diary[] = {"0x00050000 + 11"};
				HideMap[] = {};
				IngamePause[] = {"0x00050000 + 8"};
				LockTarget[] = {};
				LookAround[] = {"0x00050000 + 11"};
				MenuSelect[] = {"0x00050000 + 7"};
				navigateMenu[] = {"0x00050000 + 6"};
				NextAction[] = {"0x00050000 + 5"};
				Optics[] = {};
				PersonView[] = {"0x00050000 + 9"};
				PrevAction[] = {"0x00050000 + 4"};
				ReloadMagazine[] = {"0x00050000 + 2"};
				RevealTarget[] = {"0x00050000 + 12"};
				ShowMap[] = {};
				ToggleWeapons[] = {"0x00050000 + 3"};
				VehLockTargets[] = {};
				ZoomContIn[] = {"0x00050000 + 11"};
				class CommandBack
				{
					curveHigh[] = {"Gamma", 1, 1.5};
					curveLow[] = {"Gamma", 1, 1.5};
					curveMedium[] = {"Gamma", 1, 1.5};
					deadZone = 0;
					keys[] = {"0x00050000 + 21"};
				};
				class CommandForward
				{
					curveHigh[] = {"Gamma", 1, 1.5};
					curveLow[] = {"Gamma", 1, 1.5};
					curveMedium[] = {"Gamma", 1, 1.5};
					deadZone = 0;
					keys[] = {"0x00050000 + 17"};
				};
				class CommandLeft
				{
					curveHigh[] = {"Gamma", 2, 3};
					curveLow[] = {"Gamma", 2, 3};
					curveMedium[] = {"Gamma", 2, 3};
					deadZone = 0;
					keys[] = {"0x00050000 + 20"};
				};
				class CommandRight
				{
					curveHigh[] = {"Gamma", 2, 3};
					curveLow[] = {"Gamma", 2, 3};
					curveMedium[] = {"Gamma", 2, 3};
					deadZone = 0;
					keys[] = {"0x00050000 + 16"};
				};
			};
			class ButtonDeadZones: ButtonDeadZonesDefault
			{
				deadZone_LeftTrigger[] = {192, 128};
				deadZone_RightTrigger[] = {80, 64};
			};
			class ThumbStickDeadZones
			{
				leftX = 0.21;
				leftY = 0.23;
				rightX = 0.21;
				rightY = 0.23;
			};
		};
	};
	class SpecialSoldier: Default
	{
		name = "Special Soldier";
		class Gamepad: Gamepad {};
		class Joystick: Joystick {};
		class Vehicles: Vehicles
		{
			class Aircraft: Aircraft
			{
				class Gamepad: Gamepad {};
				class Joystick: Joystick {};
				class Wheel: Wheel {};
			};
			class Characters: Characters
			{
				class Gamepad
				{
					textDPad = "MENU";
					textLThumb = "AIM";
					textLThumbLR = "Left/Right <img image='\xmisc\ctrl_strafe.paa'/>";
					textLThumbPS = "Kneel <img image='\xmisc\ctrl_nextarget.paa'/>";
					textLThumbUD = "Up/Down <img image='\xmisc\ctrl_move.paa'/>";
					textRThumb = "MOVEMENT";
					textRThumbLR = "<img image='\xmisc\ctrl_strafe.paa'/> Strafe";
					textRThumbPS = "<img image='\xmisc\ctrl_nextarget.paa'/> Scope/Sights";
					textRThumbUD = "<img image='\xmisc\ctrl_move.paa'/> Move";
					class Actions
					{
						MoveDown[] = {"0x00050000 + 1"};
						MoveUp[] = {"0x00050000 + 14"};
						class AimDown
						{
							actionNameYAxis = "AimUp";
							curveHigh[] = {"LinRampZoom", {1, 0.2, 0.05, 0.99, 0.8, 1, 1.8}, {0.7, 0.2, 0.03, 0.99, 0.6, 1, 1.6}, {0.3, 0.2, 0.02, 0.99, 0.4, 1, 1}};
							curveLow[] = {"LinRampZoom", {1, 0.2, 0.05, 0.99, 0.8, 1, 1.8}, {0.7, 0.2, 0.03, 0.99, 0.6, 1, 1.6}, {0.3, 0.2, 0.02, 0.99, 0.4, 1, 1}};
							curveMedium[] = {"LinRampZoom", {1, 0.2, 0.05, 0.99, 0.8, 1, 1.8}, {0.7, 0.2, 0.03, 0.99, 0.6, 1, 1.6}, {0.3, 0.2, 0.02, 0.99, 0.4, 1, 1}};
							deadZone = 0;
							keys[] = {"0x00050000 + 21"};
						};
						class AimHeadDown
						{
							actionNameYAxis = "AimHeadUp";
							curveHigh[] = {"Gamma", 6, 3};
							curveLow[] = {"Gamma", 6, 3};
							curveMedium[] = {"Gamma", 6, 3};
							deadZone = 0;
							keys[] = {"0x00050000 + 21"};
						};
						class AimHeadLeft
						{
							curveHigh[] = {"Gamma", 8, 3};
							curveLow[] = {"Gamma", 8, 3};
							curveMedium[] = {"Gamma", 8, 3};
							deadZone = 0;
							keys[] = {"0x00050000 + 20"};
						};
						class AimHeadRight
						{
							curveHigh[] = {"Gamma", 8, 3};
							curveLow[] = {"Gamma", 8, 3};
							curveMedium[] = {"Gamma", 8, 3};
							deadZone = 0;
							keys[] = {"0x00050000 + 16"};
						};
						class AimHeadUp
						{
							actionNameYAxis = "AimHeadDown";
							curveHigh[] = {"Gamma", 6, 3};
							curveLow[] = {"Gamma", 6, 3};
							curveMedium[] = {"Gamma", 6, 3};
							deadZone = 0;
							keys[] = {"0x00050000 + 17"};
						};
						class AimLeft
						{
							curveHigh[] = {"LinRampZoom", {1, 0.4, 0.1, 0.8, 1.44, 0.99, 2.88, 1, 3.9}, {0.7, 0.4, 0.1, 0.8, 1.2, 0.99, 2.4, 1, 3.25}, {0.3, 0.4, 0.1, 0.8, 0.96, 0.99, 1.44, 1, 1.56}};
							curveLow[] = {"LinRampZoom", {1, 0.4, 0.1, 0.8, 1.44, 0.99, 2.88, 1, 3.9}, {0.7, 0.4, 0.1, 0.8, 1.2, 0.99, 2.4, 1, 3.25}, {0.3, 0.4, 0.1, 0.8, 0.96, 0.99, 1.44, 1, 1.56}};
							curveMedium[] = {"LinRampZoom", {1, 0.4, 0.1, 0.8, 1.44, 0.99, 2.88, 1, 3.9}, {0.7, 0.4, 0.1, 0.8, 1.2, 0.99, 2.4, 1, 3.25}, {0.3, 0.4, 0.1, 0.8, 0.96, 0.99, 1.44, 1, 1.56}};
							deadZone = 0;
							keys[] = {"0x00050000 + 20"};
						};
						class AimRight
						{
							curveHigh[] = {"LinRampZoom", {1, 0.4, 0.1, 0.8, 1.44, 0.99, 2.88, 1, 3.9}, {0.7, 0.4, 0.1, 0.8, 1.2, 0.99, 2.4, 1, 3.25}, {0.3, 0.4, 0.1, 0.8, 0.96, 0.99, 1.44, 1, 1.56}};
							curveLow[] = {"LinRampZoom", {1, 0.4, 0.1, 0.8, 1.44, 0.99, 2.88, 1, 3.9}, {0.7, 0.4, 0.1, 0.8, 1.2, 0.99, 2.4, 1, 3.25}, {0.3, 0.4, 0.1, 0.8, 0.96, 0.99, 1.44, 1, 1.56}};
							curveMedium[] = {"LinRampZoom", {1, 0.4, 0.1, 0.8, 1.44, 0.99, 2.88, 1, 3.9}, {0.7, 0.4, 0.1, 0.8, 1.2, 0.99, 2.4, 1, 3.25}, {0.3, 0.4, 0.1, 0.8, 0.96, 0.99, 1.44, 1, 1.56}};
							deadZone = 0;
							keys[] = {"0x00050000 + 16"};
						};
						class AimUp
						{
							actionNameYAxis = "AimDown";
							curveHigh[] = {"LinRampZoom", {1, 0.2, 0.05, 0.99, 0.8, 1, 1.8}, {0.7, 0.2, 0.03, 0.99, 0.6, 1, 1.6}, {0.3, 0.2, 0.02, 0.99, 0.4, 1, 1}};
							curveLow[] = {"LinRampZoom", {1, 0.2, 0.05, 0.99, 0.8, 1, 1.8}, {0.7, 0.2, 0.03, 0.99, 0.6, 1, 1.6}, {0.3, 0.2, 0.02, 0.99, 0.4, 1, 1}};
							curveMedium[] = {"LinRampZoom", {1, 0.2, 0.05, 0.99, 0.8, 1, 1.8}, {0.7, 0.2, 0.03, 0.99, 0.6, 1, 1.6}, {0.3, 0.2, 0.02, 0.99, 0.4, 1, 1}};
							deadZone = 0;
							keys[] = {"0x00050000 + 17"};
						};
						class MoveBack
						{
							curveHigh[] = {"Gamma", 1, 4};
							curveLow[] = {"Gamma", 1, 4};
							curveMedium[] = {"Gamma", 1, 4};
							deadZone = 0.1;
							keys[] = {"0x00050000 + 23"};
						};
						class MoveFastForward
						{
							curveHigh[] = {"Gamma", 1, 4};
							curveLow[] = {"Gamma", 1, 4};
							curveMedium[] = {"Gamma", 1, 4};
							deadZone = 0.1;
							keys[] = {"0x00050000 + 19"};
						};
						class TurnLeft
						{
							curveHigh[] = {"Gamma", 1, 2};
							curveLow[] = {"Gamma", 1, 2};
							curveMedium[] = {"Gamma", 1, 2};
							deadZone = 0.1;
							keys[] = {"0x00050000 + 22"};
						};
						class TurnRight
						{
							curveHigh[] = {"Gamma", 1, 2};
							curveLow[] = {"Gamma", 1, 2};
							curveMedium[] = {"Gamma", 1, 2};
							deadZone = 0.1;
							keys[] = {"0x00050000 + 18"};
						};
					};
				};
				class Joystick: Joystick {};
				class Wheel: Wheel {};
			};
			class Ground: Ground
			{
				class Gamepad: Gamepad {};
				class Joystick: Joystick {};
				class Wheel: Wheel {};
			};
		};
		class Wheel: Wheel {};
	};
};
