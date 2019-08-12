class CfgActions
{
	class ActivateBreathingBomb: None
	{
		priority = 9.3;
		text = "Activate oxygen tube";
	};
	class ActivateFins: None
	{
		text = "Activate fins";
	};
	class ActivateMine: None
	{
		priority = 9;
		showWindow = 1;
		text = "Activate mine";
		textDefault = "<img image='\A3\ui_f\data\igui\cfg\actions\ico_ON_ca.paa' size='1.8' shadow=2 />";
	};
	class ActiveSensorsOff: ActiveSensorsOn
	{
		priority = 25;
		shortcut = "ActiveSensorsToggle";
		showWindow = 0;
		text = "Radar off";
		textDefault = "<img image='\A3\ui_f\data\igui\cfg\actions\RadarOff_ca.paa' size='1.8' shadow=2 />";
	};
	class ActiveSensorsOn: None
	{
		hideActions[] = {"ActiveSensorsToggle"};
		priority = 2;
		shortcut = "ActiveSensorsToggle";
		showWindow = 0;
		text = "Radar On";
		textDefault = "<img image='\A3\ui_f\data\igui\cfg\actions\RadarOn_ca.paa' size='1.8' shadow=2 />";
	};
	class AddBag: None
	{
		priority = 5.3;
		showWindow = 0;
		text = "Take %1";
		textDefault = "Take %1";
	};
	class AIAssemble: None
	{
		priority = 6;
		showWindow = 0;
		text = "Assemble %1";
		textDefault = "Assemble %1";
	};
	class APUOff: APUOn
	{
		priority = 3;
		text = "APU off";
		textDefault = "<img image='A3\ui_f\data\igui\cfg\actions\ico_OFF_ca' size='2' shadow='true' />";
	};
	class APUOn: None
	{
		available = 3;
		modelPositions = "switch_apu";
		priority = 4;
		radius = 3;
		radiusView = 0.03;
		showIn3D = 87;
		showWindow = 1;
		text = "APU on";
		textDefault = "<img image='A3\ui_f\data\igui\cfg\actions\ico_ON_ca' size='2' shadow='true' />";
	};
	class ArtilleryComputer: None
	{
		priority = 0.1;
		show = 1;
		text = "Artillery computer";
		textDefault = "Artillery computer";
	};
	class Assemble: None
	{
		priority = 5.2;
		showWindow = 0;
		text = "Assemble %1";
		textDefault = "Assemble %1";
	};
	class AutoHover: None
	{
		priority = 3;
		shortcut = "AutoHover";
		showWindow = 0;
		text = "Auto-Hover On";
		textDefault = "<img image='\A3\ui_f\data\igui\cfg\actions\autohover_ca.paa' size='1.8' shadow=2 />";
	};
	class AutoHoverCancel: AutoHover
	{
		priority = 3;
		shortcut = "AutoHoverCancel";
		showWindow = 0;
		text = "Auto-Hover Off";
		textDefault = "<img image='\A3\ui_f\data\igui\cfg\actions\cancelhover_ca.paa' size='1.8' shadow=2 />";
	};
	class BackFromUAV: None
	{
		shortcut = "GetOut";
		text = "Release UAV controls";
		textDefault = "Release UAV controls";
	};
	class BatteriesOff: BatteriesOn
	{
		priority = 2;
		text = "Batteries off";
		textDefault = "<img image='A3\ui_f\data\igui\cfg\actions\ico_cpt_batt_OFF_ca' size='2' shadow='true' />";
	};
	class BatteriesOn: None
	{
		available = 3;
		modelPositions = "switch_batteries";
		radius = 3;
		radiusView = 0.03;
		showIn3D = 87;
		showWindow = 1;
		text = "Batteries on";
		textDefault = "<img image='A3\ui_f\data\igui\cfg\actions\ico_cpt_batt_ON_ca' size='2' shadow='true' />";
	};
	class CancelAction: None
	{
		priority = 8;
		shortcut = "CancelAction";
		showWindow = 0;
		text = "Cancel action";
		textDefault = "";
	};
	class CancelLand: None
	{
		priority = 0.9;
		text = "Landing autopilot off";
		textDefault = "<img image='\A3\Ui_f\data\IGUI\Cfg\Actions\landingAutopilot_OFF_ca.paa' size='1.8' shadow=2 />";
	};
	class CancelTakeFlag: None
	{
		priority = 8;
		showWindow = 1;
		text = "Cancel action";
		textDefault = "<img image='\A3\ui_f\data\igui\cfg\actions\close_ca.paa' size='1.8' shadow=2 />";
	};
	class CarrySoldier: None
	{
		priority = 0.6;
		text = "Carry %1";
	};
	class CarrySoldierInterrupt: None
	{
		priority = 0.6;
		text = "Drop Body";
	};
	class ChangeBackpackFromBackpack: None
	{
		priority = 4;
		showWindow = 0;
		text = "Change backpack from backpack";
		textDefault = "<img image='\A3\ui_f\data\igui\cfg\actions\clear_empty_ca.paa' size='2.5' shadow=0 />";
	};
	class ChangeUniformWithBody: None
	{
		priority = 2;
		showWindow = 0;
		text = "Change uniform from body";
		textDefault = "<img image='\A3\ui_f\data\igui\cfg\actions\clear_empty_ca.paa' size='2.5' shadow=0 />";
	};
	class CloseLeftVehicleDisplay: CloseRightVehicleDisplay
	{
		hideActions[] = {"CloseLeftVehicleDisplay"};
		priority = 25;
		shortcut = "CloseLeftVehicleDisplay";
		show = 0;
		showWindow = 0;
		text = "Close Left Panel";
		textDefault = "Close Left Panel";
	};
	class CloseRightVehicleDisplay: None
	{
		hideActions[] = {"CloseRightVehicleDisplay"};
		priority = 25;
		shortcut = "CloseRightVehicleDisplay";
		show = 0;
		showWindow = 0;
		text = "Close Right Panel";
		textDefault = "Close Right Panel";
	};
	class CollisionLightOff: CollisionLightOn
	{
		text = "Collision lights off";
		textDefault = "<img image='A3\ui_f\data\igui\cfg\actions\ico_cpt_col_OFF_ca' size='2' shadow='true' />";
	};
	class CollisionLightOn: None
	{
		available = 3;
		modelPositions = "switch_lightsac";
		priority = 0.3;
		radius = 3;
		radiusView = 0.03;
		show = 1;
		showIn3D = 87;
		showWindow = 0;
		text = "Collision lights on";
		textDefault = "<img image='A3\ui_f\data\igui\cfg\actions\ico_cpt_col_ON_ca' size='2' shadow='true' />";
	};
	class Deactivate: None
	{
		priority = 2.1;
		showWindow = 1;
		text = "Deactivate bomb";
		textDefault = "<img image='\A3\ui_f\data\igui\cfg\actions\ico_OFF_ca.paa' size='1.8' shadow=2 />";
	};
	class DeactivateBreathingBomb: None
	{
		priority = 9.4;
		text = "Deactivate oxygen tube";
	};
	class DeactivateFins: None
	{
		text = "Deactivate fins";
	};
	class DeactivateMine: None
	{
		priority = 9.1;
		showWindow = 1;
		text = "Deactivate mine";
		textDefault = "<img image='\A3\ui_f\data\igui\cfg\actions\ico_OFF_ca.paa' size='1.8' shadow=2 />";
	};
	class DisAssemble: None
	{
		priority = 5;
		showWindow = 0;
		text = "Disassemble %1";
		textDefault = "Disassemble %1";
	};
	class DragSoldier: None
	{
		priority = 0.6;
		text = "Drag %1";
	};
	class DragSoldierInterrupt: None
	{
		priority = 0.6;
		text = "Drop Draged";
	};
	class DropBag: None
	{
		priority = 5.2;
		showWindow = 0;
		text = "Drop %1";
		textDefault = "Drop %1";
	};
	class DropCarried: None
	{
		priority = 0.6;
		text = "Drop Carried";
	};
	class DropItem: None
	{
		priority = 2;
		showWindow = 1;
		text = "Drop it";
		textDefault = "<img image='\A3\ui_f\data\igui\cfg\actions\clear_empty_ca.paa' size='2.5' shadow=0 />";
	};
	class DropItemFromBody: None
	{
		priority = 4;
		showWindow = 0;
		text = "Drop item from body";
		textDefault = "<img image='\A3\ui_f\data\igui\cfg\actions\clear_empty_ca.paa' size='2.5' shadow=0 />";
	};
	class DropMagazine: None
	{
		text = "Drop %1";
		textDefault = "Drop %1";
	};
	class DropWeapon: None
	{
		priority = 2;
		showWindow = 1;
		text = "Drop %1";
		textDefault = "Drop %1";
	};
	class Eject: None
	{
		priority = 6.1;
		shortcut = "Eject";
		showWindow = 0;
		text = "Eject";
		textDefault = "<img image='\A3\ui_f\data\igui\cfg\actions\eject_ca.paa' size='1.8' shadow=2 />";
	};
	class EngineOff: None
	{
		priority = 6;
		shortcut = "EngineToggle";
		show = 1;
		showWindow = 0;
		text = "Engine off";
		textDefault = "<img image='\A3\ui_f\data\igui\cfg\actions\engine_off_ca.paa' size='1.8' shadow=2 />";
	};
	class EngineOn: None
	{
		priority = 6;
		shortcut = "EngineToggle";
		showWindow = 0;
		text = "Engine On";
		textDefault = "<img image='\A3\ui_f\data\igui\cfg\actions\engine_on_ca.paa' size='1.8' shadow=2 />";
	};
	class FireInflame: None
	{
		priority = 0.99;
		show = 0;
		showWindow = 1;
		text = "Light fire";
		textDefault = "Light fire";
	};
	class FirePutDown: None
	{
		priority = 0.99;
		show = 0;
		showWindow = 1;
		text = "Put out fire";
		textDefault = "Put out fire";
	};
	class FirstAid: None
	{
		priority = 10;
		showWindow = 1;
		text = "First Aid";
		textDefault = "<img image='\A3\ui_f\data\igui\cfg\actions\heal_ca.paa' size='1.8' shadow=2 />";
	};
	class FlapsDown: None
	{
		hideOnUse = 0;
		priority = 0.7;
		shortcut = "FlapsDown";
		text = "Flaps Down";
		textDefault = "<img image='\A3\Ui_f\data\IGUI\Cfg\Actions\flapsExtend_ca.paa' size='1.8' shadow=2 />";
	};
	class FlapsUp: None
	{
		hideOnUse = 0;
		priority = 0.7;
		shortcut = "FlapsUp";
		text = "Flaps Up";
		textDefault = "<img image='\A3\Ui_f\data\IGUI\Cfg\Actions\flapsRetract_ca.paa' size='1.8' shadow=2 />";
	};
	class Gear: None
	{
		priority = 5.1;
		shortcut = "Gear";
		showWindow = 1;
		text = "Inventory";
		textDefault = "<img image='\A3\ui_f\data\igui\cfg\actions\gear_ca.paa' size='2.5' shadow=2 />";
	};
	class GearOpen: None
	{
		priority = 5.1;
		showWindow = 1;
		text = "Open subordinate's inventory";
		textDefault = "Open subordinate's inventory";
	};
	class GetInCargo: None
	{
		priority = 5.5;
		radius = 1.5;
		radiusView = 0.5;
		showIn3D = 1;
		showWindow = 1;
		text = "Get in %1 Ride in back";
		textDefault = "<img image='\A3\ui_f\data\igui\cfg\actions\getincargo_ca.paa' size='1.8' shadow=2 />";
	};
	class GetInCommander: None
	{
		priority = 5.9;
		radius = 1.5;
		radiusView = 0.5;
		showIn3D = 1;
		showWindow = 1;
		text = "Get in %1 as commander";
		textDefault = "<img image='\A3\ui_f\data\igui\cfg\actions\getincommander_ca.paa' size='1.8' shadow=2 />";
	};
	class GetInDriver: None
	{
		priority = 5.8;
		radius = 1.5;
		radiusView = 0.5;
		showIn3D = 1;
		showWindow = 1;
		text = "Get in %1 as Driver";
		textDefault = "<img image='\A3\ui_f\data\igui\cfg\actions\getindriver_ca.paa' size='1.8' shadow=2 />";
	};
	class GetInGunner: None
	{
		priority = 5.7;
		radius = 1.5;
		radiusView = 0.5;
		showIn3D = 1;
		showWindow = 1;
		text = "Get in %1 as gunner";
		textDefault = "<img image='\A3\ui_f\data\igui\cfg\actions\getingunner_ca.paa' size='1.8' shadow=2 />";
	};
	class GetInPilot: None
	{
		priority = 5.6;
		radius = 1.5;
		radiusView = 0.5;
		showIn3D = 1;
		showWindow = 1;
		text = "Get in %1 as Pilot";
		textDefault = "<img image='\A3\ui_f\data\igui\cfg\actions\getinpilot_ca.paa' size='1.8' shadow=2 />";
	};
	class GetInTurret: None
	{
		priority = 5.4;
		radius = 1.5;
		radiusView = 0.5;
		showIn3D = 1;
		showWindow = 1;
		text = "Get in %1 as %2";
		textDefault = "<img image='\A3\ui_f\data\igui\cfg\actions\getingunner_ca.paa' size='1.8' shadow=2 />";
	};
	class GetOut: None
	{
		priority = 6.2;
		shortcut = "GetOut";
		showWindow = 0;
		text = "Get Out";
		textDefault = "<img image='\A3\ui_f\data\igui\cfg\actions\getout_ca.paa' size='1.8' shadow=2 />";
	};
	class GetOver: None
	{
		priority = 0.11;
		shortcut = "GetOver";
		show = 0;
		text = "Step Over";
		textDefault = "Step Over";
	};
	class GunLightOff: None
	{
		priority = 0.1;
		show = 0;
		text = "Light off";
		textDefault = "Light off";
	};
	class GunLightOn: None
	{
		priority = 0.1;
		show = 0;
		text = "Light on";
		textDefault = "Light on";
	};
	class HandGunOff: None
	{
		hideActions[] = {"SwitchPrimary"};
		priority = 3;
		text = "Weapon %1";
		textDefault = "Weapon %1";
	};
	class HandGunOffStand: HandGunOff
	{
		text = "%1 in hand";
		textDefault = "%1 in hand";
	};
	class HandGunOn: None
	{
		hideActions[] = {"SwitchHandGun"};
		priority = 3;
		text = "Weapon %1";
		textDefault = "Weapon %1";
	};
	class HandGunOnStand: HandGunOn
	{
		text = "%1 in hand";
		textDefault = "%1 in hand";
	};
	class Heal: None
	{
		priority = 10;
		showWindow = 1;
		text = "Treat at %1";
		textDefault = "<img image='\A3\ui_f\data\igui\cfg\actions\heal_ca.paa' size='1.8' shadow=2 />";
	};
	class HealBleedingAuto: None
	{
		text = "Staunch bleeding";
	};
	class HealBleedingOnly: None
	{
		text = "Staunch bleeding";
	};
	class HealBleedingSelfOnly: None
	{
		text = "Staunch your bleeding";
	};
	class HealSoldier: None
	{
		priority = 10;
		showWindow = 1;
		text = "Treat %1";
		textDefault = "<img image='\A3\ui_f\data\igui\cfg\actions\heal_ca.paa' size='1.8' shadow=2 />";
	};
	class HealSoldierAuto: None
	{
		text = "Heal soldier";
	};
	class HealSoldierSelf: None
	{
		priority = 10;
		showWindow = 1;
		text = "Treat yourself";
		textDefault = "<img image='\A3\ui_f\data\igui\cfg\actions\heal_ca.paa' size='1.8' shadow=2 />";
	};
	class HelicopterAutoTrimOff: None
	{
		priority = 3;
		show = 1;
		text = "Auto-trim off";
		textDefault = "Auto-trim off";
	};
	class HelicopterAutoTrimOn: None
	{
		priority = 3;
		show = 1;
		text = "Auto-trim on";
		textDefault = "Auto-trim on";
	};
	class HelicopterTrimOff: None
	{
		priority = 3;
		show = 1;
		text = "Manual Trim Release";
		textDefault = "Manual Trim Release";
	};
	class HelicopterTrimOn: None
	{
		priority = 3;
		show = 1;
		text = "Manual Trim Set";
		textDefault = "Manual Trim Set";
	};
	class HideBody: None
	{
		priority = 0.51;
		text = "Hide body";
		textDefault = "Hide body";
	};
	class HideWeapon: SwitchWeapon
	{
		text = "Hide %1";
		textDefault = "Hide %1";
	};
	class HookCargo: None
	{
		priority = 3;
		text = "Hook";
	};
	class IngameMenu: None
	{
		priority = -1;
		shortcut = "MenuSelect";
		text = "Command menu";
		textDefault = "Command menu";
	};
	class IRLaserOff: None
	{
		priority = 0.1;
		show = 0;
		text = "Laser Disable";
		textDefault = "Laser Disable";
	};
	class IRLaserOn: None
	{
		priority = 0.1;
		show = 0;
		text = "Laser Enable";
		textDefault = "Laser Enable";
	};
	class LadderDown: None
	{
		text = "Climb Ladder Down";
		textDefault = "Climb Ladder Down";
	};
	class LadderOff: None
	{
		priority = 5;
		radius = 2;
		showWindow = 1;
		text = "Drop Down Ladder";
		textDefault = "<img image='\A3\ui_f\data\igui\cfg\actions\ladderoff_ca.paa' size='1.8' shadow=2 />";
	};
	class LadderOnDown: None
	{
		priority = 8;
		radius = 2;
		showWindow = 1;
		text = "Climb Ladder Down";
		textDefault = "<img image='\A3\ui_f\data\igui\cfg\actions\ladderdown_ca.paa' size='1.8' shadow=2 />";
	};
	class LadderOnUp: None
	{
		priority = 8;
		radius = 2;
		showWindow = 1;
		text = "Climb Ladder Up";
		textDefault = "<img image='\A3\ui_f\data\igui\cfg\actions\ladderup_ca.paa' size='1.8' shadow=2 />";
	};
	class LadderUp: None
	{
		text = "Climb Ladder Up";
		textDefault = "Climb Ladder Up";
	};
	class Land: None
	{
		priority = 0.9;
		text = "Landing autopilot";
		textDefault = "<img image='\A3\Ui_f\data\IGUI\Cfg\Actions\landingAutopilot_ON_ca.paa' size='1.8' shadow=2 />";
	};
	class LandGear: None
	{
		hideOnUse = 0;
		priority = 0.8;
		shortcut = "LandGear";
		text = "Gear Down";
		textDefault = "Gear Down";
	};
	class LandGearUp: LandGear
	{
		shortcut = "LandGearUp";
		text = "Gear Up";
		textDefault = "Gear Up";
	};
	class LightOff: LightOn
	{
		shortcut = "Headlights";
		text = "Lights off";
		textDefault = "<img image='A3\ui_f\data\igui\cfg\actions\ico_cpt_land_OFF_ca' size='2' shadow='true' />";
	};
	class LightOn: None
	{
		available = 3;
		modelPositions = "switch_lightsldg";
		priority = 0.3;
		radius = 3;
		radiusView = 0.03;
		shortcut = "Headlights";
		showIn3D = 87;
		showWindow = 0;
		text = "Lights on";
		textDefault = "<img image='A3\ui_f\data\igui\cfg\actions\ico_cpt_land_ON_ca' size='2' shadow='true' />";
	};
	class ListLeftVehicleDisplay: ListRightVehicleDisplay
	{
		hideActions[] = {"ListLeftVehicleDisplay"};
		priority = 25;
		shortcut = "ListLeftVehicleDisplay";
		showWindow = 0;
		text = "Left Panel Next";
		textDefault = "Left Panel Next";
	};
	class ListPrevLeftVehicleDisplay: ListPrevRightVehicleDisplay
	{
		hideActions[] = {"ListPrevLeftVehicleDisplay"};
		priority = 25;
		shortcut = "ListPrevLeftVehicleDisplay";
		showWindow = 0;
		text = "Left Panel prev.";
		textDefault = "Left Panel prev.";
	};
	class ListPrevRightVehicleDisplay: None
	{
		hideActions[] = {"ListPrevRightVehicleDisplay"};
		hideOnUse = 0;
		priority = 25;
		shortcut = "ListPrevRightVehicleDisplay";
		show = 0;
		showWindow = 0;
		text = "Right Panel prev.";
		textDefault = "Right Panel prev.";
	};
	class ListRightVehicleDisplay: None
	{
		hideActions[] = {"ListRightVehicleDisplay"};
		hideOnUse = 0;
		priority = 1;
		shortcut = "ListRightVehicleDisplay";
		show = 0;
		showWindow = 0;
		text = "Right Panel Next";
		textDefault = "Right Panel Next";
	};
	class LoadEmptyMagazine: LoadMagazine
	{
		priority = 2.1;
		show = 1;
		showWindow = 1;
		textDefault = "<img image='\A3\ui_f\data\igui\cfg\actions\reload_ca.paa' size='1.8' shadow=2 />";
	};
	class LoadMagazine: None
	{
		priority = 2;
		shortcut = "ReloadMagazine";
		show = 0;
		text = "Reload %1";
		textDefault = "Reload %1";
	};
	class LoadOtherMagazine: LoadMagazine
	{
		priority = 2;
		show = 0;
		showWindow = 0;
	};
	class LoadVehicle: None
	{
		priority = 3;
		text = "Load vehicle";
		textDefault = "<img image='\A3\Ui_f\data\IGUI\Cfg\Actions\loadVehicle_ca.paa' size='1.8' shadow=2 />";
	};
	class LockVehicleControl: None
	{
		priority = 7;
		text = "Lock controls";
		textDefault = "Lock controls";
	};
	class ManualFire: None
	{
		priority = 0.59;
		shortcut = "HeliManualFire";
		text = "Manual fire";
		textDefault = "Manual fire";
	};
	class ManualFireCancel: ManualFire
	{
		text = "Cancel manual fire";
		textDefault = "Cancel manual fire";
	};
	class MarkEntity: None
	{
		priority = 0.5199;
		showWindow = 1;
		text = "Collect from %1";
		textDefault = "Collect from %1";
	};
	class MarkWeapon: MarkEntity
	{
		text = "Collect weapon";
		textDefault = "Collect weapon";
	};
	class MountItem: None
	{
		priority = 2;
		showWindow = 1;
		text = "Put it on";
		textDefault = "<img image='\A3\ui_f\data\igui\cfg\actions\clear_empty_ca.paa' size='2.5' shadow=0 />";
	};
	class MountUniformItem: None
	{
		priority = 2;
		showWindow = 0;
		text = "Put on uniform";
		textDefault = "<img image='\A3\ui_f\data\igui\cfg\actions\clear_empty_ca.paa' size='2.5' shadow=0 />";
	};
	class MountWeaponFromInv: None
	{
		extDefault = "";
		priority = 2;
		showWindow = 1;
		text = "Take weapon from inventory";
		textDefault = "<img image='\A3\ui_f\data\igui\cfg\actions\clear_empty_ca.paa' size='2.5' shadow=0 />";
	};
	class MoveToCargo: None
	{
		priority = 1;
		showWindow = 0;
		text = "To Passenger seat";
		textDefault = "<img image='\A3\ui_f\data\igui\cfg\actions\getincargo_ca.paa' size='1.8' shadow=2 />";
	};
	class MoveToCommander: None
	{
		priority = 1.4;
		shortcut = "SwapGunner";
		showWindow = 0;
		text = "To Commander's seat";
		textDefault = "<img image='\A3\ui_f\data\igui\cfg\actions\getincommander_ca.paa' size='1.8' shadow=2 />";
	};
	class MoveToDriver: None
	{
		priority = 1.1;
		shortcut = "SwapGunner";
		showWindow = 0;
		text = "To Driver's seat";
		textDefault = "<img image='\A3\ui_f\data\igui\cfg\actions\getindriver_ca.paa' size='1.8' shadow=2 />";
	};
	class MoveToGunner: None
	{
		priority = 1.5;
		shortcut = "SwapGunner";
		showWindow = 0;
		text = "To Gunner's seat";
		textDefault = "<img image='\A3\ui_f\data\igui\cfg\actions\getingunner_ca.paa' size='1.8' shadow=2 />";
	};
	class MoveToPilot: MoveToDriver
	{
		priority = 1.2;
		text = "To Pilot's seat";
		textDefault = "<img image='\A3\ui_f\data\igui\cfg\actions\getinpilot_ca.paa' size='1.8' shadow=2 />";
	};
	class MoveToTurret: None
	{
		priority = 1.3;
		shortcut = "SwapGunner";
		showWindow = 0;
		text = "To %2's seat";
		textDefault = "<img image='\A3\ui_f\data\igui\cfg\actions\getingunner_ca.paa' size='1.8' shadow=2 />";
	};
	class NextModeLeftVehicleDisplay: NextModeRightVehicleDisplay
	{
		hideActions[] = {"NextModeLeftVehicleDisplay"};
		priority = 25;
		shortcut = "NextModeLeftVehicleDisplay";
		showWindow = 0;
		text = "Left Panel Mode";
		textDefault = "Left Panel Mode";
	};
	class NextModeRightVehicleDisplay: None
	{
		hideActions[] = {"NextModeRightVehicleDisplay"};
		hideOnUse = 0;
		priority = 0.9;
		shortcut = "NextModeRightVehicleDisplay";
		show = 0;
		showWindow = 0;
		text = "Right Panel Mode";
		textDefault = "Right Panel Mode";
	};
	class None
	{
		hideOnUse = 1;
		priority = 0;
		shortcut = "";
		show = 1;
		showWindow = 0;
		text = "";
		textDefault = "";
		textSimple = "";
	};
	class NVGoggles: None
	{
		priority = 0.511;
		show = 0;
		text = "Put on NV goggles";
		textDefault = "Put on NV goggles";
	};
	class NVGogglesOff: NVGoggles
	{
		show = 0;
		text = "Take off NV goggles";
		textDefault = "Take off NV goggles";
	};
	class OpenBag: None
	{
		priority = 5.2;
		showWindow = 1;
		text = "Open %1";
		textDefault = "Open %1";
	};
	class OpenParachute: None
	{
		priority = 9.1;
		text = "Open Parachute";
	};
	class OpenParachuteNonSteerable: None
	{
		priority = 9.2;
		text = "Open non-steerable parachute";
	};
	class OpenParachuteSteerable: None
	{
		priority = 9.1;
		text = "Open steerable parachute";
	};
	class PatchSoldier: None
	{
		priority = 10;
		showWindow = 1;
		text = "Provide help";
		textDefault = "<img image='\A3\ui_f\data\igui\cfg\actions\bandage_ca.paa' size='1.8' shadow=2 />";
	};
	class PeriscopeDepthOff: None
	{
		text = "Leave periscope depth";
		textDefault = "<img image='\A3\Ui_f\data\IGUI\Cfg\Actions\periscopeDepth_OFF_ca.paa' size='1.8' shadow=2 />";
	};
	class PeriscopeDepthOn: None
	{
		text = "Maintain periscope depth";
		textDefault = "<img image='\A3\Ui_f\data\IGUI\Cfg\Actions\periscopeDepth_ON_ca.paa' size='1.8' shadow=2 />";
	};
	class PutBag: None
	{
		priority = 5.2;
		showWindow = 0;
		text = "Drop %1";
		textDefault = "Drop %1";
	};
	class PutInCargo: None
	{
		priority = 9.7;
		showWindow = 1;
		text = "Load In Cargo";
		textDefault = "Put in Cargo";
	};
	class PutInCommander: None
	{
		priority = 9.6;
		text = "Load In Commander";
	};
	class PutInDriver: None
	{
		priority = 9.5;
		showWindow = 1;
		text = "Load In Driver";
		textDefault = "Put in Driver";
	};
	class PutInGunner: None
	{
		priority = 9.5;
		text = "Load In Gunner";
	};
	class PutInPilot: None
	{
		priority = 9.6;
		showWindow = 1;
		text = "Load In Pilot";
		textDefault = "Put in Pilot";
	};
	class PutInTurret: None
	{
		priority = 9.7;
		text = "Load In Turret";
	};
	class PutMagazine: DropMagazine
	{
		text = "Put %1 to %2";
		textDefault = "Put %1 to %2";
	};
	class PutWeapon: DropWeapon
	{
		priority = 5;
		showWindow = 1;
		text = "Put %1 to %2";
		textDefault = "Put %1 to %2";
	};
	class Rearm: None
	{
		priority = 5.1;
		showWindow = 1;
		text = "Rearm at %1";
		textDefault = "<img image='\A3\ui_f\data\igui\cfg\actions\reammo_ca.paa' size='1.8' shadow=2 />";
	};
	class Refuel: None
	{
		priority = 2;
		showWindow = 1;
		text = "Refuel at %1";
		textDefault = "<img image='\A3\ui_f\data\igui\cfg\actions\refuel_ca.paa' size='1.8' shadow=2 />";
	};
	class Repair: None
	{
		priority = 6;
		showWindow = 1;
		text = "Repair at %1";
		textDefault = "<img image='\A3\ui_f\data\igui\cfg\actions\repair_ca.paa' size='1.8' shadow=2 />";
	};
	class RepairVehicle: None
	{
		priority = 9;
		showWindow = 1;
		text = "Repair %1";
		textDefault = "<img image='\A3\ui_f\data\igui\cfg\actions\repair_ca.paa' size='1.8' shadow=2 />";
	};
	class ReturnFlag: None
	{
		priority = 8;
		showWindow = 1;
		text = "Return Flag";
		textDefault = "<img image='\A3\ui_f\data\igui\cfg\actions\returnflag_ca.paa' size='1.8' shadow=2 />";
	};
	class RotorBrakeOff: RotorBrakeOn
	{
		priority = 0.3;
		text = "Rotor brake off";
		textDefault = "<img image='A3\ui_f\data\igui\cfg\actions\ico_OFF_ca' size='2' shadow='true' />";
	};
	class RotorBrakeOn: None
	{
		available = 3;
		modelPositions = "switch_rotor_brake";
		priority = 0.6;
		radius = 3;
		radiusView = 0.03;
		showIn3D = 87;
		showWindow = 0;
		text = "Rotor brake on";
		textDefault = "<img image='A3\ui_f\data\igui\cfg\actions\ico_cpt_brk_ON_ca' size='2' shadow='true' />";
	};
	class Salute: None
	{
		priority = 1;
		shortcut = "Salute";
		show = 0;
		text = "Salute";
		textDefault = "Salute";
	};
	class ScudCancel: None
	{
		priority = 0.039;
		text = "Cancel Scud launch";
		textDefault = "Cancel Scud launch";
	};
	class ScudLaunch: None
	{
		priority = 0.04;
		text = "Prepare Scud launch";
		textDefault = "Prepare Scud launch";
	};
	class ScudStart: None
	{
		priority = 0.04;
		text = "Launch Scud";
		textDefault = "Launch Scud";
	};
	class SearchLightOff: SearchLightOn
	{
		text = "Searchlight off";
		textDefault = "Searchlight off";
	};
	class SearchLightOn: None
	{
		priority = 0.3;
		show = 1;
		text = "Searchlight on";
		textDefault = "Searchlight on";
	};
	class SetTimer: None
	{
		priority = 2.1;
		showWindow = 1;
		text = "Set timer +%1 sec. (%2 remaining)";
		textDefault = "<img image='\A3\ui_f\data\igui\cfg\actions\settimer_ca.paa' size='1.8' shadow=2 />";
	};
	class SitDown: None
	{
		priority = 1;
		shortcut = "SitDown";
		show = 0;
		text = "Sit Down";
		textDefault = "Sit Down";
	};
	class Sleep: None
	{
		text = "Sleep";
	};
	class StarterOff1: StarterOn1
	{
		priority = 3;
		text = "Starter off (engine 1)";
		textDefault = "<img image='A3\ui_f\data\igui\cfg\actions\ico_cpt_start_OFF_ca' size='2.5' shadow='true' />";
	};
	class StarterOff2: StarterOn2
	{
		priority = 3;
		text = "Starter off (engine 2)";
		textDefault = "<img image='A3\ui_f\data\igui\cfg\actions\ico_cpt_start_OFF_ca' size='2.5' shadow='true' />";
	};
	class StarterOff3: StarterOn3
	{
		priority = 3;
		text = "Starter off (engine 3)";
		textDefault = "<img image='A3\ui_f\data\igui\cfg\actions\ico_cpt_start_OFF_ca' size='2.5' shadow='true' />";
	};
	class StarterOn1: None
	{
		available = 3;
		modelPositions[] = {"switch_starter", "switch_starter_2"};
		radius = 3;
		radiusView = 0.08;
		showIn3D = 87;
		showWindow = 1;
		text = "Starter on (engine 1)";
		textDefault = "<img image='A3\ui_f\data\igui\cfg\actions\ico_cpt_start_ON_ca' size='2.5' shadow='true' />";
	};
	class StarterOn2: None
	{
		available = 3;
		modelPositions[] = {"switch_starter2", "switch_starter2_2"};
		radius = 3;
		radiusView = 0.08;
		showIn3D = 87;
		showWindow = 1;
		text = "Starter on (engine 2)";
		textDefault = "<img image='A3\ui_f\data\igui\cfg\actions\ico_cpt_start_ON_ca' size='2.5' shadow='true' />";
	};
	class StarterOn3: None
	{
		available = 3;
		modelPositions[] = {"switch_starter3", "switch_starter3_2"};
		radius = 3;
		radiusView = 0.08;
		showIn3D = 87;
		showWindow = 1;
		text = "Starter on (engine 3)";
		textDefault = "<img image='A3\ui_f\data\igui\cfg\actions\ico_cpt_start_ON_ca' size='2.5' shadow='true' />";
	};
	class StartTimer: SetTimer
	{
		text = "Set timer on (%1 seconds)";
		textDefault = "Set timer on (%1 seconds)";
	};
	class StrokeFist: None
	{
		priority = 0.1;
		text = "Strike with fist";
		textDefault = "Strike with fist";
	};
	class StrokeGun: None
	{
		priority = 0.1;
		text = "Strike with weapon";
		textDefault = "Strike with weapon";
	};
	class Surrender: None
	{
		priority = 0.11;
		shortcut = "Surrender";
		show = 0;
		text = "Surrender";
		textDefault = "Surrender";
	};
	class SuspendVehicleControl: None
	{
		priority = 7;
		text = "Release controls";
		textDefault = "Release controls";
	};
	class SwitchMagazine: SwitchWeapon
	{
		shortcut = "ReloadMagazine";
	};
	class SwitchToUAVDriver: None
	{
		text = "Take UAV controls";
		textDefault = "Take UAV controls";
	};
	class SwitchToUAVGunner: None
	{
		text = "Take UAV turret controls";
		textDefault = "Take UAV turret controls";
	};
	class SwitchWeapon: None
	{
		hideActions[] = {"SwitchSecondary"};
		priority = 3.1;
		shortcut = "SwitchWeapon";
		text = "Weapon %1";
		textDefault = "Weapon %1";
	};
	class TakeBackpackFromBody: None
	{
		priority = 5;
		showWindow = 0;
		text = "Take backpack from body";
		textDefault = "<img image='\A3\ui_f\data\igui\cfg\actions\clear_empty_ca.paa' size='2.5' shadow=0 />";
	};
	class TakeBag: None
	{
		priority = 5.3;
		showWindow = 1;
		text = "Take %1";
		textDefault = "Take %1";
	};
	class TakeDropMagazine: TakeMagazine
	{
		text = "Take %1 (drop %2)%3";
		textDefault = "Take %1 (drop %2)%3";
	};
	class TakeDropWeapon: TakeWeapon
	{
		text = "Take %1 (drop %2)%3";
		textDefault = "Take %1 (drop %2)%3";
	};
	class TakeFlag: None
	{
		priority = 7;
		showWindow = 1;
		text = "Take Flag";
		textDefault = "<img image='\A3\ui_f\data\igui\cfg\actions\takeflag_ca.paa' size='1.8' shadow=2 />";
	};
	class TakeItem: None
	{
		priority = 5.3;
		showWindow = 1;
		text = "Take %1";
		textDefault = "<img image='\A3\ui_f\data\igui\cfg\actions\take_ca.paa' size='1.8' shadow=2 />";
	};
	class TakeItemFromBody: None
	{
		priority = 5.3;
		showWindow = 0;
		text = "Take item from body";
		textDefault = "<img image='\A3\ui_f\data\igui\cfg\actions\clear_empty_ca.paa' size='2.5' shadow=0 />";
	};
	class TakeMagazine: None
	{
		priority = 5.3;
		showWindow = 1;
		text = "Take %1%2";
		textDefault = "<img image='\A3\ui_f\data\igui\cfg\actions\take_ca.paa' size='1.8' shadow=2 />";
	};
	class TakeMine: None
	{
		priority = 3;
		showWindow = 1;
		text = "Take mine";
		textDefault = "<img image='\A3\ui_f\data\igui\cfg\actions\take_ca.paa' size='1.8' shadow=2 />";
	};
	class TakeVehicleControl: None
	{
		priority = 8;
		text = "Take controls";
		textDefault = "Take controls";
	};
	class TakeWeapon: None
	{
		priority = 5.3;
		showWindow = 1;
		text = "Take %1%2";
		textDefault = "<img image='\A3\ui_f\data\igui\cfg\actions\take_ca.paa' size='1.8' shadow=2 />";
	};
	class TakeWeaponFromBody: None
	{
		priority = 5;
		showWindow = 0;
		text = "Take weapon from body";
		textDefault = "<img image='\A3\ui_f\data\igui\cfg\actions\clear_empty_ca.paa' size='2.5' shadow=0 />";
	};
	class Talk: None
	{
		priority = 9;
		showWindow = 1;
		text = "Talk to %1";
		textDefault = "<img image='\A3\ui_f\data\igui\cfg\actions\talk_ca.paa' size='1.8' shadow=2 />";
	};
	class TeamSwitch: None
	{
		priority = 0.11;
		shortcut = "TeamSwitch";
		show = 0;
		text = "Team Switch";
		textDefault = "Team Switch";
	};
	class Tell: None
	{
		priority = 2;
		showWindow = 1;
		text = """%1""";
		textDefault = """%1""";
	};
	class ThrottleFull1: ThrottleOff1
	{
		priority = 3;
		text = "Throttle full (engine 1)";
		textDefault = "<img image='A3\ui_f\data\igui\cfg\actions\ico_cpt_thtl_ON_ca' size='2' shadow='true' />";
	};
	class ThrottleFull2: ThrottleOff2
	{
		priority = 3;
		text = "Throttle full (engine 2)";
		textDefault = "<img image='A3\ui_f\data\igui\cfg\actions\ico_cpt_thtl_ON_ca' size='2' shadow='true' />";
	};
	class ThrottleFull3: ThrottleOff3
	{
		priority = 4;
		text = "Throttle full (engine 3)";
		textDefault = "<img image='A3\ui_f\data\igui\cfg\actions\ico_cpt_thtl_ON_ca' size='2' shadow='true' />";
	};
	class ThrottleIdle1: ThrottleOff1
	{
		priority = 3;
		text = "Throttle idle (engine 1)";
		textDefault = "<img image='A3\ui_f\data\igui\cfg\actions\ico_cpt_thtl_IDL_ca' size='2' shadow='true' />";
	};
	class ThrottleIdle2: ThrottleOff2
	{
		priority = 3;
		text = "Throttle idle (engine 2)";
		textDefault = "<img image='A3\ui_f\data\igui\cfg\actions\ico_cpt_thtl_IDL_ca' size='2' shadow='true' />";
	};
	class ThrottleIdle3: ThrottleOff3
	{
		priority = 4;
		text = "Throttle idle (engine 3)";
		textDefault = "<img image='A3\ui_f\data\igui\cfg\actions\ico_cpt_thtl_IDL_ca' size='2' shadow='true' />";
	};
	class ThrottleOff1: None
	{
		available = 3;
		modelPositions[] = {"switch_throttle", "switch_throttle_2"};
		priority = 3;
		radius = 3;
		radiusView = 0.08;
		showIn3D = 87;
		showWindow = 1;
		text = "Throttle closed (engine 1)";
		textDefault = "<img image='A3\ui_f\data\igui\cfg\actions\ico_cpt_thtl_OFF_ca' size='2' shadow='true' />";
	};
	class ThrottleOff2: None
	{
		available = 3;
		modelPositions[] = {"switch_throttle2", "switch_throttle2_2"};
		priority = 3;
		radius = 3;
		radiusView = 0.08;
		showIn3D = 87;
		showWindow = 1;
		text = "Throttle closed (engine 2)";
		textDefault = "<img image='A3\ui_f\data\igui\cfg\actions\ico_cpt_thtl_OFF_ca' size='2' shadow='true' />";
	};
	class ThrottleOff3: None
	{
		available = 3;
		modelPositions[] = {"switch_throttle3", "switch_throttle3_2"};
		priority = 3;
		radius = 3;
		radiusView = 0.08;
		showIn3D = 87;
		showWindow = 1;
		text = "Throttle closed (engine 3)";
		textDefault = "<img image='A3\ui_f\data\igui\cfg\actions\ico_cpt_thtl_OFF_ca' size='2' shadow='true' />";
	};
	class TouchOff: None
	{
		priority = 0.1;
		showWindow = 1;
		text = "Touch off %1 bomb(s)";
		textDefault = "Touch off %1 bomb(s)";
	};
	class TouchOffMines: None
	{
		priority = 0.1;
		showWindow = 1;
		text = "Touch off %1 bomb(s)";
		textDefault = "Touch off %1 bomb(s)";
	};
	class TurnIn: None
	{
		priority = 0.95;
		shortcut = "TurnIn";
		text = "Turn In";
		textDefault = "Turn In";
	};
	class TurnOut: None
	{
		priority = 0.6;
		shortcut = "TurnOut";
		text = "Turn Out";
		textDefault = "Turn Out";
	};
	class UAVTerminalHackConnection: None
	{
		text = "Hack UAV";
		textDefault = "Hack UAV";
	};
	class UAVTerminalMakeConnection: None
	{
		text = "Connect terminal to UAV";
		textDefault = "Connect terminal to UAV";
	};
	class UAVTerminalOpen: None
	{
		text = "Open UAV Terminal";
		textDefault = "Open UAV Terminal";
	};
	class UAVTerminalReleaseConnection: None
	{
		text = "Disconnect terminal from UAV";
		textDefault = "Disconnect terminal from UAV";
	};
	class UnhookCargo: None
	{
		priority = 3;
		text = "Unhook";
	};
	class UnloadAllVehicles: None
	{
		priority = 3;
		text = "Unload all vehicles";
		textDefault = "<img image='\A3\Ui_f\data\IGUI\Cfg\Actions\unloadAllVehicles_ca.paa' size='1.8' shadow=2 />";
	};
	class UnloadFromCargo: None
	{
		priority = 8.7;
		text = "Unload From Cargo";
	};
	class UnloadFromCommander: None
	{
		priority = 8.5;
		text = "Unload From Commander";
	};
	class UnloadFromDriver: None
	{
		priority = 8.5;
		text = "Unload From Driver";
	};
	class UnloadFromGunner: None
	{
		priority = 8.6;
		text = "Unload From Gunner";
	};
	class UnloadFromPilot: None
	{
		priority = 8.6;
		text = "Unload From Pilot";
	};
	class UnloadFromTurret: None
	{
		priority = 8.7;
		text = "Unload From Turret";
	};
	class UnloadMagazine: None
	{
		priority = 2;
		showWindow = 1;
		text = "Unload magazine";
		textDefault = "<img image='\A3\ui_f\data\igui\cfg\actions\clear_empty_ca.paa' size='2.5' shadow=0 />";
	};
	class UnloadUnconsciousUnits: None
	{
		priority = 5.2;
		showWindow = 1;
		text = "Unload Incapacitated";
		textDefault = "<img image='\A3\ui_f\data\igui\cfg\actions\unloadIncapacitated_ca.paa' size='3' shadow='2' />";
	};
	class UnloadVehicle: None
	{
		priority = 3;
		text = "Unload vehicle";
		textDefault = "<img image='\A3\Ui_f\data\IGUI\Cfg\Actions\unloadVehicle_ca.paa' size='1.8' shadow=2 />";
	};
	class UnlockVehicleControl: None
	{
		priority = 7;
		text = "Unlock controls";
		textDefault = "Unlock controls";
	};
	class UnmountItem: None
	{
		priority = 2;
		showWindow = 1;
		text = "Take it off";
		textDefault = "<img image='\A3\ui_f\data\igui\cfg\actions\clear_empty_ca.paa' size='2.5' shadow=0 />";
	};
	class UnmountUniformItem: None
	{
		priority = 2;
		showWindow = 0;
		text = "Take off uniform";
		textDefault = "<img image='\A3\ui_f\data\igui\cfg\actions\clear_empty_ca.paa' size='2.5' shadow=0 />";
	};
	class UnmountWeaponToInv: None
	{
		extDefault = "";
		priority = 2;
		showWindow = 1;
		text = "Take weapon to inventory";
		textDefault = "<img image='\A3\ui_f\data\igui\cfg\actions\clear_empty_ca.paa' size='2.5' shadow=0 />";
	};
	class UseContainerMagazine: None
	{
		priority = 9;
		showWindow = 1;
		text = "Activate mine";
		textDefault = "<img image='\A3\ui_f\data\igui\cfg\actions\ico_ON_ca.paa' size='1.8' shadow=2 />";
	};
	class UseMagazine: None
	{
		priority = 3;
		text = "%1";
		textDefault = "%1";
	};
	class User: None
	{
		priority = 1.5;
		showWindow = 1;
		text = "%1";
		textDefault = "%2";
		textToolTip = "%3";
	};
	class UserType: None
	{
		priority = 1.4;
		showWindow = 1;
		text = "%1";
		textDefault = "%2";
		textToolTip = "%3";
	};
	class UseWeapon: None
	{
		priority = 1.2;
		text = "%1";
		textDefault = "%1";
	};
	class VectoringDown: None
	{
		hideOnUse = 0;
		priority = 0.71;
		shortcut = "FlapsUp";
		text = "Vectoring decrease";
		textDefault = "Vectoring decrease";
	};
	class VectoringUp: None
	{
		hideOnUse = 0;
		priority = 0.71;
		shortcut = "FlapsDown";
		text = "Vectoring increase";
		textDefault = "Flaps Up";
	};
	class VTOLVectoring: AutoHover
	{
		priority = 3;
		shortcut = "VTOLVectoringCancel";
		showWindow = 0;
		text = "Auto-Vectoring Off";
		textDefault = "<img image='\A3\Ui_f\data\IGUI\Cfg\Actions\VTOLVectoring_ca.paa' size='1.8' shadow=2 />";
	};
	class VTOLVectoringCancel: AutoHover
	{
		priority = 3;
		shortcut = "VTOLVectoring";
		showWindow = 0;
		text = "Auto-Vectoring On";
		textDefault = "<img image='\A3\Ui_f\data\IGUI\Cfg\Actions\VTOLVectoringCancel_ca.paa' size='1.8' shadow=2 />";
	};
	class WakeUp: None
	{
		text = "WakeUp";
	};
	class WeaponInHand: None
	{
		priority = 2;
		show = 0;
		text = "%1 in hand";
		textDefault = "%1 in hand";
	};
	class WeaponOnBack: None
	{
		priority = 0.3;
		show = 0;
		text = "%1 on back";
		textDefault = "%1 on back";
	};
	class WheelsBrakeOff: WheelsBrakeOn
	{
		priority = 0.3;
		text = "Wheel Brake Off";
		textDefault = "<img image='A3\ui_f\data\igui\cfg\actions\ico_OFF_ca' size='2' shadow='true' />";
	};
	class WheelsBrakeOn: None
	{
		available = 0;
		modelPositions = "switch_rotor_brake";
		priority = 0.6;
		radius = 3;
		radiusView = 0.03;
		show = 1;
		showIn3D = 87;
		showWindow = 0;
		text = "Wheel Brake On";
		textDefault = "<img image='A3\ui_f\data\igui\cfg\actions\ico_ON_ca' size='2' shadow='true' />";
	};
};
