class CfgMovesBasic
{
	access = 0;
	collisionGeomCompPattern[] = {1, 3};
	collisionVertexPattern[] = {"1a", "2a", "3a", "4a", "5a", "6a", "7a", "8a", "9a", "10a", "11a", "12a", "13a", "14a", "15a", "16a", "17a", "18a", "19a", "20a", "21a", "22a", "23a", "24a", "25a", "26a", "27a", "28a", "29a", "30a", "31a", "32a", "33a", "34a", "1c", "2c", "3c", "4c", "5c", "6c", "7c", "8c"};
	primaryActionMaps[] = {"RifleProneActions_injured", "DeadActions", "LauncherKneelActions", "BinocProneRflActions", "BinocProneCivilActions", "RifleProneActions", "PistolProneActions", "RifleKneelActions", "PistolKneelActions", "RifleStandActions", "PistolStandActions", "RifleLowStandActions", "SwimmingActions", "CivilStandActions", "BinocKneelRflActions", "BinocStandRflActions"};
	skeletonName = "";
	transitionsDisabled[] = {};
	transitionsInterpolated[] = {};
	transitionsSimple[] = {};
	class Actions
	{
		class Acts_CarFixingWheel_actions: RifleStandActions
		{
			Default = "Acts_carFixingWheel";
			PlayerStand = "";
			PrimaryWeapon = "AmovPknlMstpSlowWrflDnon";
			Stop = "AmovPknlMstpSnonWnonDnon";
			StopRelaxed = "AmovPknlMstpSnonWnonDnon";
		};
		class Acts_Helicargo_actions: RifleLowSitActions
		{
			Combat = "Acts_HeliCargo_loop";
			Default = "Acts_HeliCargo_loop";
			Stop = "Acts_HeliCargo_loop";
			StopRelaxed = "Acts_HeliCargo_loop";
		};
		class Acts_HelicargoTalking_actions: RifleLowSitActions
		{
			Combat = "Acts_HeliCargoTalking_loop";
			Default = "Acts_HeliCargoTalking_loop";
			Stop = "Acts_HeliCargoTalking_loop";
			StopRelaxed = "Acts_HeliCargoTalking_loop";
		};
		class Acts_JetsCrewaidFCrouch_actions: CivilStandActions
		{
			default = "Acts_JetsCrewaidFCrouch_loop";
			stop = "Acts_JetsCrewaidFCrouch_loop";
			stoprelaxed = "Acts_JetsCrewaidFCrouch_loop";
		};
		class Acts_JetsCrewaidFCrouch_actions_m: Acts_JetsCrewaidFCrouch_actions
		{
			default = "Acts_JetsCrewaidFCrouch_loop_m";
			stop = "Acts_JetsCrewaidFCrouch_loop_m";
			stoprelaxed = "Acts_JetsCrewaidFCrouch_loop_m";
		};
		class Acts_JetsCrewaidFIdle2_actions: CivilStandActions
		{
			default = "Acts_JetsCrewaidF_idle2";
			stop = "Acts_JetsCrewaidF_idle2";
			stoprelaxed = "Acts_JetsCrewaidF_idle2";
		};
		class Acts_JetsCrewaidFIdle2_actions_m: Acts_JetsCrewaidFIdle2_actions
		{
			default = "Acts_JetsCrewaidF_idle2_m";
			stop = "Acts_JetsCrewaidF_idle2_m";
			stoprelaxed = "Acts_JetsCrewaidF_idle2_m";
		};
		class Acts_JetsCrewaidFIdle_actions: CivilStandActions
		{
			default = "Acts_JetsCrewaidF_idle";
			stop = "Acts_JetsCrewaidF_idle";
			stoprelaxed = "Acts_JetsCrewaidF_idle";
		};
		class Acts_JetsCrewaidFIdle_actions_m: Acts_JetsCrewaidFIdle_actions
		{
			default = "Acts_JetsCrewaidF_idle_m";
			stop = "Acts_JetsCrewaidF_idle_m";
			stoprelaxed = "Acts_JetsCrewaidF_idle_m";
		};
		class Acts_JetsCrewaidFThumbup_actions: CivilStandActions
		{
			default = "Acts_JetsCrewaidFCrouchThumbup_loop";
			stop = "Acts_JetsCrewaidFCrouchThumbup_loop";
			stoprelaxed = "Acts_JetsCrewaidFCrouchThumbup_loop";
		};
		class Acts_JetsCrewaidFThumbup_actions_m: Acts_JetsCrewaidFThumbup_actions
		{
			default = "Acts_JetsCrewaidFCrouchThumbup_loop_m";
			stop = "Acts_JetsCrewaidFCrouchThumbup_loop_m";
			stoprelaxed = "Acts_JetsCrewaidFCrouchThumbup_loop_m";
		};
		class Acts_JetsCrewaidLCrouch_actions: CivilStandActions
		{
			default = "Acts_JetsCrewaidLCrouch_loop";
			stop = "Acts_JetsCrewaidLCrouch_loop";
			stoprelaxed = "Acts_JetsCrewaidLCrouch_loop";
		};
		class Acts_JetsCrewaidLCrouch_actions_m: Acts_JetsCrewaidLCrouch_actions
		{
			default = "Acts_JetsCrewaidLCrouch_loop_m";
			stop = "Acts_JetsCrewaidLCrouch_loop_m";
			stoprelaxed = "Acts_JetsCrewaidLCrouch_loop_m";
		};
		class Acts_JetsCrewaidLIdle_actions: CivilStandActions
		{
			default = "Acts_JetsCrewaidL_idle";
			stop = "Acts_JetsCrewaidL_idle";
			stoprelaxed = "Acts_JetsCrewaidL_idle";
		};
		class Acts_JetsCrewaidLIdle_actions_m: Acts_JetsCrewaidLIdle_actions
		{
			default = "Acts_JetsCrewaidL_idle_m";
			stop = "Acts_JetsCrewaidL_idle_m";
			stoprelaxed = "Acts_JetsCrewaidL_idle_m";
		};
		class Acts_JetsCrewaidLThumbup_actions: CivilStandActions
		{
			default = "Acts_JetsCrewaidLCrouchThumbup_loop";
			stop = "Acts_JetsCrewaidLCrouchThumbup_loop";
			stoprelaxed = "Acts_JetsCrewaidLCrouchThumbup_loop";
		};
		class Acts_JetsCrewaidLThumbup_actions_m: Acts_JetsCrewaidLThumbup_actions
		{
			default = "Acts_JetsCrewaidLCrouchThumbup_loop_m";
			stop = "Acts_JetsCrewaidLCrouchThumbup_loop_m";
			stoprelaxed = "Acts_JetsCrewaidLCrouchThumbup_loop_m";
		};
		class Acts_JetsCrewaidRCrouch_actions: CivilStandActions
		{
			default = "Acts_JetsCrewaidRCrouch_loop";
			stop = "Acts_JetsCrewaidRCrouch_loop";
			stoprelaxed = "Acts_JetsCrewaidRCrouch_loop";
		};
		class Acts_JetsCrewaidRCrouch_actions_m: Acts_JetsCrewaidRCrouch_actions
		{
			default = "Acts_JetsCrewaidRCrouch_loop_m";
			stop = "Acts_JetsCrewaidRCrouch_loop_m";
			stoprelaxed = "Acts_JetsCrewaidRCrouch_loop_m";
		};
		class Acts_JetsCrewaidRIdle_actions: CivilStandActions
		{
			default = "Acts_JetsCrewaidR_idle";
			stop = "Acts_JetsCrewaidR_idle";
			stoprelaxed = "Acts_JetsCrewaidR_idle";
		};
		class Acts_JetsCrewaidRIdle_actions_m: Acts_JetsCrewaidRIdle_actions
		{
			default = "Acts_JetsCrewaidR_idle_m";
			stop = "Acts_JetsCrewaidR_idle_m";
			stoprelaxed = "Acts_JetsCrewaidR_idle_m";
		};
		class Acts_JetsCrewaidRThumbup_actions: CivilStandActions
		{
			default = "Acts_JetsCrewaidRCrouchThumbup_loop";
			stop = "Acts_JetsCrewaidRCrouchThumbup_loop";
			stoprelaxed = "Acts_JetsCrewaidRCrouchThumbup_loop";
		};
		class Acts_JetsCrewaidRThumbup_actions_m: Acts_JetsCrewaidRThumbup_actions
		{
			default = "Acts_JetsCrewaidRCrouchThumbup_loop_m";
			stop = "Acts_JetsCrewaidRCrouchThumbup_loop_m";
			stoprelaxed = "Acts_JetsCrewaidRCrouchThumbup_loop_m";
		};
		class Acts_JetsMarshallingClear_actions: CivilStandActions
		{
			default = "Acts_JetsMarshallingClear_loop";
			stop = "Acts_JetsMarshallingClear_loop";
			stoprelaxed = "Acts_JetsMarshallingClear_loop";
		};
		class Acts_JetsMarshallingEmergencyStop_actions: CivilStandActions
		{
			defualt = "Acts_JetsMarshallingEmergencyStop_loop";
			stop = "Acts_JetsMarshallingEmergencyStop_loop";
			stoprelaxed = "Acts_JetsMarshallingEmergencyStop_loop";
		};
		class Acts_JetsMarshallingEnginesOff_actions: CivilStandActions
		{
			default = "Acts_JetsMarshallingEnginesOff_loop";
			stop = "Acts_JetsMarshallingEnginesOff_loop";
			stoprelaxed = "Acts_JetsMarshallingEnginesOff_loop";
		};
		class Acts_JetsMarshallingEnginesOn_actions: CivilStandActions
		{
			default = "Acts_JetsMarshallingEnginesOn_loop";
			stop = "Acts_JetsMarshallingEnginesOn_loop";
			stoprelaxed = "Acts_JetsMarshallingEnginesOn_loop";
		};
		class Acts_JetsMarshallingLeft_actions: CivilStandActions
		{
			default = "Acts_JetsMarshallingLeft_loop";
			stop = "Acts_JetsMarshallingLeft_loop";
			stoprelaxed = "Acts_JetsMarshallingLeft_loop";
		};
		class Acts_JetsMarshallingRight_actions: CivilStandActions
		{
			default = "Acts_JetsMarshallingRight_loop";
			stop = "Acts_JetsMarshallingRight_loop";
			stoprelaxed = "Acts_JetsMarshallingRight_loop";
		};
		class Acts_JetsMarshallingSlow_actions: CivilStandActions
		{
			default = "Acts_JetsMarshallingSlow_loop";
			stop = "Acts_JetsMarshallingSlow_loop";
			stoprelaxed = "Acts_JetsMarshallingSlow_loop";
		};
		class Acts_JetsMarshallingStop_actions: CivilStandActions
		{
			default = "Acts_JetsMarshallingStop_loop";
			stop = "Acts_JetsMarshallingStop_loop";
			stoprelaxed = "Acts_JetsMarshallingStop_loop";
		};
		class Acts_JetsMarshallingStraight_actions: CivilStandActions
		{
			default = "Acts_JetsMarshallingStraight_loop";
			stop = "Acts_JetsMarshallingStraight_loop";
			stoprelaxed = "Acts_JetsMarshallingStraight_loop";
		};
		class Acts_JetsShooterIdle2_actions: CivilStandActions
		{
			default = "Acts_JetsShooterIdle2";
			stop = "Acts_JetsShooterIdle2";
			stoprelaxed = "Acts_JetsShooterIdle2";
		};
		class Acts_JetsShooterIdle2_actions_m: Acts_JetsShooterIdle2_actions
		{
			default = "Acts_JetsShooterIdle2_m";
			stop = "Acts_JetsShooterIdle2_m";
			stoprelaxed = "Acts_JetsShooterIdle2_m";
		};
		class Acts_JetsShooterIdle_actions: CivilStandActions
		{
			default = "Acts_JetsShooterIdle";
			stop = "Acts_JetsShooterIdle";
			stoprelaxed = "Acts_JetsShooterIdle";
		};
		class Acts_JetsShooterIdle_actions_m: Acts_JetsShooterIdle_actions
		{
			default = "Acts_JetsShooterIdle_m";
			stop = "Acts_JetsShooterIdle_m";
			stoprelaxed = "Acts_JetsShooterIdle_m";
		};
		class Acts_JetsShooterIdleMoveaway_actions: CivilStandActions
		{
			default = "Acts_JetsShooterIdleMoveaway_loop";
			stop = "Acts_JetsShooterIdleMoveaway_loop";
			stoprelaxed = "Acts_JetsShooterIdleMoveaway_loop";
		};
		class Acts_JetsShooterIdleMoveaway_actions_m: Acts_JetsShooterIdleMoveaway_actions
		{
			default = "Acts_JetsShooterIdleMoveaway_loop_m";
			stop = "Acts_JetsShooterIdleMoveaway_loop_m";
			stoprelaxed = "Acts_JetsShooterIdleMoveaway_loop_m";
		};
		class Acts_JetsShooterLaunch_actions: CivilStandActions
		{
			default = "Acts_JetsShooterShootingLaunch_loop";
			stop = "Acts_JetsShooterShootingLaunch_loop";
			stoprelaxed = "Acts_JetsShooterShootingLaunch_loop";
		};
		class Acts_JetsShooterLaunch_actions_m: Acts_JetsShooterLaunch_actions
		{
			default = "Acts_JetsShooterShootingLaunch_loop_m";
			stop = "Acts_JetsShooterShootingLaunch_loop_m";
			stoprelaxed = "Acts_JetsShooterShootingLaunch_loop_m";
		};
		class Acts_JetsShooterNavLoop_actions: CivilStandActions
		{
			default = "Acts_JetsShooterNavigate_loop";
			stop = "Acts_JetsShooterNavigate_loop";
			stoprelaxed = "Acts_JetsShooterNavigate_loop";
		};
		class Acts_JetsShooterNavLoop_actions_m: Acts_JetsShooterNavLoop_actions
		{
			default = "Acts_JetsShooterNavigate_loop_m";
			stop = "Acts_JetsShooterNavigate_loop_m";
			stoprelaxed = "Acts_JetsShooterNavigate_loop_m";
		};
		class Acts_JetsShooterNavStop_actions: CivilStandActions
		{
			default = "Acts_JetsShooterNavigate_stop";
			stop = "Acts_JetsShooterNavigate_stop";
			stoprelaxed = "Acts_JetsShooterNavigate_stop";
		};
		class Acts_JetsShooterNavStop_actions_m: Acts_JetsShooterNavStop_actions
		{
			default = "Acts_JetsShooterNavigate_stop_m";
			stop = "Acts_JetsShooterNavigate_stop_m";
			stoprelaxed = "Acts_JetsShooterNavigate_stop_m";
		};
		class Acts_JetsShooterReady_actions: CivilStandActions
		{
			default = "Acts_JetsShooterShootingReady_loop";
			stop = "Acts_JetsShooterShootingReady_loop";
			stoprelaxed = "Acts_JetsShooterShootingReady_loop";
		};
		class Acts_JetsShooterReady_actions_m: Acts_JetsShooterReady_actions
		{
			default = "Acts_JetsShooterShootingReady_loop_m";
			stop = "Acts_JetsShooterShootingReady_loop_m";
			stoprelaxed = "Acts_JetsShooterShootingReady_loop_m";
		};
		class Acts_Kore_IdleNoWeapon_actions: RifleLowStandActions
		{
			Combat = "Acts_Kore_IdleNoWeapon_loop";
			Default = "Acts_Kore_IdleNoWeapon_loop";
			Stop = "Acts_Kore_IdleNoWeapon_loop";
			StopRelaxed = "Acts_Kore_IdleNoWeapon_loop";
		};
		class Acts_Kore_TalkingOverRadio_actions: RifleLowStandActions
		{
			Combat = "Acts_Kore_TalkingOverRadio_loop";
			Default = "Acts_Kore_TalkingOverRadio_loop";
			Stop = "Acts_Kore_TalkingOverRadio_loop";
			StopRelaxed = "Acts_Kore_TalkingOverRadio_loop";
		};
		class Acts_listeningToRadio_actions: RifleLowStandActions
		{
			Combat = "Acts_listeningToRadio_Loop";
			Default = "Acts_listeningToRadio_Loop";
			Stop = "Acts_listeningToRadio_Loop";
			StopRelaxed = "Acts_listeningToRadio_Loop";
		};
		class Acts_LyingWounded_actions: RifleLowStandActions
		{
			Combat = "Acts_LyingWounded_loop";
			Default = "Acts_LyingWounded_loop";
			Stop = "Acts_LyingWounded_loop";
			StopRelaxed = "Acts_LyingWounded_loop";
		};
		class Acts_NavigatingChopper_Actions: RifleLowStandActions
		{
			Combat = "Acts_NavigatingChopper_Loop";
			Default = "Acts_NavigatingChopper_Loop";
			Stop = "Acts_NavigatingChopper_Loop";
			StopRelaxed = "Acts_NavigatingChopper_Loop";
		};
		class Acts_ShieldFromSun_actions: RifleLowStandActions
		{
			Combat = "Acts_ShieldFromSun_loop";
			Default = "Acts_ShieldFromSun_loop";
			Stop = "Acts_ShieldFromSun_loop";
			StopRelaxed = "Acts_ShieldFromSun_loop";
		};
		class Acts_ShowingTheRightWay_actions: RifleLowStandActions
		{
			Combat = "Acts_ShowingTheRightWay_loop";
			Default = "Acts_ShowingTheRightWay_loop";
			Stop = "Acts_ShowingTheRightWay_loop";
			StopRelaxed = "Acts_ShowingTheRightWay_loop";
		};
		class Acts_SittingJumpingSaluting2_actions: RifleLowStandActions
		{
			GetOver = "";
		};
		class Acts_SittingJumpingSaluting_actions: RifleBaseLowStandActions
		{
			Combat = "Acts_SittingJumpingSaluting_loop";
			Default = "Acts_SittingJumpingSaluting_loop";
			Stand = "Acts_SittingJumpingSaluting_loop";
			Stop = "Acts_SittingJumpingSaluting_loop";
			StopRelaxed = "Acts_SittingJumpingSaluting_loop";
			WeaponOff = "Acts_SittingJumpingSaluting_loop";
			WeaponOn = "Acts_SittingJumpingSaluting_loop";
		};
		class Acts_SittingTiedHands_actions: CivilSitActions
		{
			agonyStart = "";
			agonyStop = "";
			BinocOff = "";
			BinocOn = "";
			Binoculars = "";
			BottomDive = "";
			bottomSwim = "";
			CanNotMove = "";
			carriedStill = "";
			Civil = "";
			CivilLying = "";
			Combat = "Acts_AidlPsitMstpSsurWnonDnon_loop";
			Crouch = "";
			Default = "Acts_AidlPsitMstpSsurWnonDnon_loop";
			Down = "";
			EvasiveLeft = "";
			EvasiveRight = "";
			FastB = "";
			FastF = "";
			FastL = "";
			FastLB = "";
			FastLF = "";
			FastR = "";
			FastRB = "";
			FastRF = "";
			FireNotPossible = "";
			Gear = "";
			GetInBoat = "";
			GetInHelicopterCargo = "";
			GetInHigh = "";
			GetInLow = "";
			GetInMedium = "";
			GetInMRAP_01 = "";
			GetInMRAP_01_cargo = "";
			GetInSDV = "";
			GetInVertical = "";
			GetOutBoat = "";
			GetOutHelicopterCargo = "";
			GetOutHigh = "";
			GetOutHighHemtt = "";
			GetOutHighZamak = "";
			GetOutLow = "";
			GetOutMedium = "";
			GetOutMRAP_01 = "";
			GetOutMRAP_01_cargo = "";
			GetOutSDV = "";
			grabCarried = "";
			grabCarry = "";
			grabDrag = "";
			grabDragged = "";
			HandGunOn = "";
			LadderOnDown = "";
			LadderOnUp = "";
			Lying = "";
			Medic = "";
			medicStart = "";
			medicStartUp = "";
			medicStop = "";
			PlayerCrouch = "";
			PlayerProne = "";
			PlayerSlowB = "";
			PlayerSlowF = "";
			PlayerSlowL = "";
			PlayerSlowLB = "";
			PlayerSlowLF = "";
			PlayerSlowR = "";
			PlayerSlowRB = "";
			PlayerSlowRF = "";
			PlayerTactB = "";
			PlayerTactF = "";
			PlayerTactL = "";
			PlayerTactLB = "";
			PlayerTactLF = "";
			PlayerTactR = "";
			PlayerTactRB = "";
			PlayerTactRF = "";
			PlayerWalkB = "";
			PlayerWalkF = "";
			PlayerWalkL = "";
			PlayerWalkLB = "";
			PlayerWalkLF = "";
			PlayerWalkR = "";
			PlayerWalkRB = "";
			PlayerWalkRF = "";
			PrimaryWeapon = "";
			PutDown = "";
			Relax = "";
			reloadGM6 = "";
			ReloadMagazine = "";
			ReloadMGun = "";
			ReloadMortar = "";
			ReloadRPG = "";
			Salute = "";
			saluteOff = "";
			SecondaryWeapon = "";
			SitDown = "";
			SlowB = "";
			SlowF = "";
			SlowL = "";
			SlowLB = "";
			SlowLF = "";
			SlowR = "";
			SlowRB = "";
			SlowRF = "";
			Stand = "";
			startDive = "";
			StartFreefall = "";
			startSwim = "";
			Stop = "Acts_AidlPsitMstpSsurWnonDnon_loop";
			StopRelaxed = "Acts_AidlPsitMstpSsurWnonDnon_loop";
			StrokeGun = "";
			SurfaceDive = "";
			surfaceSwim = "";
			Surrender = "";
			TactB = "";
			TactF = "";
			TactL = "";
			TactLB = "";
			TactLF = "";
			TactR = "";
			TactRB = "";
			TactRF = "";
			TakeFlag = "";
			TestDriver = "";
			TestDriverOut = "";
			TestGunner = "";
			Treated = "";
			TurnLRelaxed = "";
			TurnRRelaxed = "";
			Up = "";
			WalkB = "";
			WalkF = "";
			WalkL = "";
			WalkLB = "";
			WalkLF = "";
			WalkR = "";
			WalkRB = "";
			WalkRF = "";
			WeaponOff = "";
			WeaponOn = "";
		};
		class Acts_SittingWounded_actions: RifleLowStandActions
		{
			Combat = "Acts_SittingWounded_loop";
			Default = "Acts_SittingWounded_loop";
			Stop = "Acts_SittingWounded_loop";
			StopRelaxed = "Acts_SittingWounded_loop";
		};
		class Acts_starterPistol_loop: PistolStandActions
		{
			Combat = "Acts_starterPistol_loop";
			Default = "Acts_starterPistol_loop";
			Stop = "Acts_starterPistol_loop";
			StopRelaxed = "Acts_starterPistol_loop";
		};
		class Acts_TacopsPoster_actions: CutsceneLoop
		{
			default = "Acts_TacopsPoster";
			stop = "Acts_TacopsPoster";
			stoprelaxed = "Acts_TacopsPoster";
		};
		class Acts_TreatingWounded_actions: RifleLowStandActions
		{
			Combat = "Acts_TreatingWounded_loop";
			Default = "Acts_TreatingWounded_loop";
			Stop = "Acts_TreatingWounded_loop";
			StopRelaxed = "Acts_TreatingWounded_loop";
		};
		class Acts_UnconsciousStandUp_Actions: CivilStandActions
		{
			Combat = "Acts_UnconsciousStandUp_part1";
			Default = "Acts_UnconsciousStandUp_part1";
			Stop = "Acts_UnconsciousStandUp_part1";
			StopRelaxed = "Acts_UnconsciousStandUp_part1";
		};
		class Acts_WarmUp_actions: RifleLowStandActions
		{
			agonyStart = "";
			agonyStop = "";
			BinocOff = "";
			BinocOn = "";
			Binoculars = "";
			BottomDive = "";
			bottomSwim = "";
			CanNotMove = "";
			carriedStill = "";
			Civil = "";
			CivilLying = "";
			Combat = "";
			Crouch = "";
			Default = "Acts_AidlPercMstpSlowWrflDnon_warmup_loop";
			dooraction = "";
			Down = "";
			FastB = "";
			FastF = "";
			FastL = "";
			FastLB = "";
			FastLF = "";
			FastR = "";
			FastRB = "";
			FastRF = "";
			FireNotPossible = "";
			Gear = "";
			GetOver = "";
			grabCarried = "";
			grabCarry = "";
			grabDrag = "";
			grabDragged = "";
			HandGunOn = "";
			healedStart = "";
			healedStop = "";
			LadderOnDown = "";
			LadderOnUp = "";
			Lying = "";
			Medic = "";
			MedicOther = "";
			medicStart = "";
			medicStartRightSide = "";
			medicStartUp = "";
			medicStop = "";
			PlayerCrouch = "";
			PlayerProne = "";
			PlayerSlowB = "";
			PlayerSlowF = "";
			PlayerSlowL = "";
			PlayerSlowLB = "";
			PlayerSlowLF = "";
			PlayerSlowR = "";
			PlayerSlowRB = "";
			PlayerSlowRF = "";
			PlayerTactB = "";
			PlayerTactF = "";
			PlayerTactL = "";
			PlayerTactLB = "";
			PlayerTactLF = "";
			PlayerTactR = "";
			PlayerTactRB = "";
			PlayerTactRF = "";
			PlayerWalkB = "";
			PlayerWalkF = "";
			PlayerWalkL = "";
			PlayerWalkLB = "";
			PlayerWalkLF = "";
			PlayerWalkR = "";
			PlayerWalkRB = "";
			PlayerWalkRF = "";
			PrimaryWeapon = "";
			PutDown = "";
			Relax = "";
			Salute = "";
			saluteOff = "";
			SecondaryWeapon = "";
			SitDown = "";
			SlowB = "";
			SlowF = "";
			SlowL = "";
			SlowLB = "";
			SlowLF = "";
			SlowR = "";
			SlowRB = "";
			SlowRF = "";
			Stand = "";
			startDive = "";
			StartFreefall = "";
			startSwim = "";
			Stop = "Acts_AidlPercMstpSlowWrflDnon_warmup_loop";
			StopRelaxed = "";
			StrokeGun = "";
			SurfaceDive = "";
			surfaceSwim = "";
			Surrender = "";
			TactB = "";
			TactF = "";
			TactL = "";
			TactLB = "";
			TactLF = "";
			TactR = "";
			TactRB = "";
			TactRF = "";
			Treated = "";
			TurnL = "";
			TurnLRelaxed = "";
			TurnR = "";
			TurnRRelaxed = "";
			Up = "";
			upDegree = "ManPosNoWeapon";
			WalkB = "";
			WalkF = "";
			WalkL = "";
			WalkLB = "";
			WalkLF = "";
			WalkR = "";
			WalkRB = "";
			WalkRF = "";
			WeaponOff = "";
			WeaponOn = "";
		};
		class BinocKneelActions: RifleKneelActions
		{
			AdjustB = "";
			AdjustF = "";
			AdjustL = "";
			AdjustR = "";
			binocOn = "";
			default = "AmovPknlMstpSoptWbinDnon";
			Diary = "";
			down = "AmovPpneMstpSoptWbinDnon";
			EvasiveLeft = "";
			EvasiveRight = "";
			FastB = "AmovPknlMrunSnonWbinDb";
			FastF = "AmovPknlMevaSnonWbinDf";
			FastL = "AmovPknlMrunSnonWbinDl";
			FastLB = "AmovPknlMrunSnonWbinDbl";
			FastLF = "AmovPknlMevaSnonWbinDfl";
			FastR = "AmovPknlMrunSnonWbinDr";
			FastRB = "AmovPknlMrunSnonWbinDbr";
			FastRF = "AmovPknlMevaSnonWbinDfr";
			FireNotPossible = "AmovPknlMstpSoptWbinDnon";
			Gear = "";
			LimpB = "AmovPknlMlmpSoptWbinDb";
			LimpF = "AmovPknlMlmpSoptWbinDf";
			LimpL = "AmovPknlMlmpSoptWbinDl";
			LimpLB = "AmovPknlMlmpSoptWbinDbl";
			LimpLF = "AmovPknlMlmpSoptWbinDfl";
			LimpR = "AmovPknlMlmpSoptWbinDr";
			LimpRB = "AmovPknlMlmpSoptWbinDbr";
			LimpRF = "AmovPknlMlmpSoptWbinDfr";
			PlayerCrouch = "AmovPknlMstpSoptWbinDnon";
			PlayerProne = "AmovPpneMstpSoptWbinDnon";
			PlayerSlowB = "AmovPknlMrunSnonWbinDb";
			PlayerSlowF = "AmovPknlMrunSnonWbinDf";
			PlayerSlowL = "AmovPknlMrunSnonWbinDl";
			PlayerSlowLB = "AmovPknlMrunSnonWbinDbl";
			PlayerSlowLF = "AmovPknlMrunSnonWbinDfl";
			PlayerSlowR = "AmovPknlMrunSnonWbinDr";
			PlayerSlowRB = "AmovPknlMrunSnonWbinDbr";
			PlayerSlowRF = "AmovPknlMrunSnonWbinDfr";
			PlayerStand = "AmovPercMstpSoptWbinDnon";
			PlayerTactB = "AmovPknlMwlkSoptWbinDb";
			PlayerTactF = "AmovPknlMwlkSoptWbinDf";
			PlayerTactL = "AmovPknlMwlkSoptWbinDl";
			PlayerTactLB = "AmovPknlMwlkSoptWbinDbl";
			PlayerTactLF = "AmovPknlMwlkSoptWbinDfl";
			PlayerTactR = "AmovPknlMwlkSoptWbinDr";
			PlayerTactRB = "AmovPknlMwlkSoptWbinDbr";
			PlayerTactRF = "AmovPknlMwlkSoptWbinDfr";
			PlayerWalkB = "AmovPknlMwlkSoptWbinDb";
			PlayerWalkF = "AmovPknlMwlkSoptWbinDf";
			PlayerWalkL = "AmovPknlMwlkSoptWbinDl";
			PlayerWalkLB = "AmovPknlMwlkSoptWbinDbl";
			PlayerWalkLF = "AmovPknlMwlkSoptWbinDfl";
			PlayerWalkR = "AmovPknlMwlkSoptWbinDr";
			PlayerWalkRB = "AmovPknlMwlkSoptWbinDbr";
			PlayerWalkRF = "AmovPknlMwlkSoptWbinDfr";
			putDown = "AmovPknlMstpSoptWbinDnon_AinvPknlMstpSoptWbinDnon_Putdown";
			SlowB = "AmovPknlMrunSnonWbinDb";
			SlowF = "AmovPknlMrunSnonWbinDf";
			SlowL = "AmovPknlMrunSnonWbinDl";
			SlowLB = "AmovPknlMrunSnonWbinDbl";
			SlowLF = "AmovPknlMrunSnonWbinDfl";
			SlowR = "AmovPknlMrunSnonWbinDr";
			SlowRB = "AmovPknlMrunSnonWbinDbr";
			SlowRF = "AmovPknlMrunSnonWbinDfr";
			Stand = "";
			stop = "AmovPknlMstpSoptWbinDnon";
			stopRelaxed = "AmovPknlMstpSoptWbinDnon";
			TactB = "AmovPknlMwlkSoptWbinDb";
			TactF = "AmovPknlMwlkSoptWbinDf";
			TactL = "AmovPknlMwlkSoptWbinDl";
			TactLB = "AmovPknlMwlkSoptWbinDbl";
			TactLF = "AmovPknlMwlkSoptWbinDfl";
			TactR = "AmovPknlMwlkSoptWbinDr";
			TactRB = "AmovPknlMwlkSoptWbinDbr";
			TactRF = "AmovPknlMwlkSoptWbinDfr";
			TurnL = "AmovPknlMstpSoptWbinDnon_turnL";
			TurnLRelaxed = "AmovPknlMstpSoptWbinDnon_turnL";
			TurnR = "AmovPknlMstpSoptWbinDnon_turnR";
			TurnRRelaxed = "AmovPknlMstpSoptWbinDnon_turnR";
			up = "AmovPercMstpSoptWbinDnon";
			upDegree = "ManPosBinoc";
			WalkB = "AmovPknlMwlkSoptWbinDb";
			WalkF = "AmovPknlMwlkSoptWbinDf";
			WalkL = "AmovPknlMwlkSoptWbinDl";
			WalkLB = "AmovPknlMwlkSoptWbinDbl";
			WalkLF = "AmovPknlMwlkSoptWbinDfl";
			WalkR = "AmovPknlMwlkSoptWbinDr";
			WalkRB = "AmovPknlMwlkSoptWbinDbr";
			WalkRF = "AmovPknlMwlkSoptWbinDfr";
		};
		class BinocKneelActionsEvasiveF: BinocKneelActions
		{
			PlayerCrouch = "AmovPercMevaSnonWbinDf";
			up = "AmovPercMevaSnonWbinDf";
		};
		class BinocKneelActionsEvasiveFL: BinocKneelActions
		{
			PlayerCrouch = "AmovPercMevaSnonWbinDfl";
			up = "AmovPercMevaSnonWbinDfl";
		};
		class BinocKneelActionsEvasiveFR: BinocKneelActions
		{
			PlayerCrouch = "AmovPercMevaSnonWbinDfr";
			up = "AmovPercMevaSnonWbinDfr";
		};
		class BinocKneelActionsLimpB: BinocKneelActions
		{
			Up = "AmovPercMlmpSoptWbinDb";
		};
		class BinocKneelActionsLimpF: BinocKneelActions
		{
			Up = "AmovPercMlmpSoptWbinDf";
		};
		class BinocKneelActionsLimpL: BinocKneelActions
		{
			Up = "AmovPercMlmpSoptWbinDl";
		};
		class BinocKneelActionsLimpLB: BinocKneelActions
		{
			Up = "AmovPercMlmpSoptWbinDbl";
		};
		class BinocKneelActionsLimpLF: BinocKneelActions
		{
			Up = "AmovPercMlmpSoptWbinDfl";
		};
		class BinocKneelActionsLimpR: BinocKneelActions
		{
			Up = "AmovPercMlmpSoptWbinDr";
		};
		class BinocKneelActionsLimpRB: BinocKneelActions
		{
			Up = "AmovPercMlmpSoptWbinDbr";
		};
		class BinocKneelActionsLimpRF: BinocKneelActions
		{
			Up = "AmovPercMlmpSoptWbinDfr";
		};
		class BinocKneelActionsRunB: BinocKneelActions
		{
			PlayerCrouch = "AmovPercMRunSnonWbinDb";
			up = "AmovPercMRunSnonWbinDB";
		};
		class BinocKneelActionsRunBL: BinocKneelActions
		{
			PlayerCrouch = "AmovPercMRunSnonWbinDbl";
			up = "AmovPercMRunSnonWbinDbl";
		};
		class BinocKneelActionsRunBR: BinocKneelActions
		{
			PlayerCrouch = "AmovPercMRunSnonWbinDbr";
			up = "AmovPercMRunSnonWbinDbr";
		};
		class BinocKneelActionsRunF: BinocKneelActions
		{
			PlayerCrouch = "AmovPercMRunSnonWbinDf";
			up = "AmovPercMRunSnonWbinDf";
		};
		class BinocKneelActionsRunFL: BinocKneelActions
		{
			PlayerCrouch = "AmovPercMRunSnonWbinDfl";
			up = "AmovPercMRunSnonWbinDfl";
		};
		class BinocKneelActionsRunFR: BinocKneelActions
		{
			PlayerCrouch = "AmovPercMRunSnonWbinDfr";
			up = "AmovPercMRunSnonWbinDfr";
		};
		class BinocKneelActionsRunL: BinocKneelActions
		{
			PlayerCrouch = "AmovPercMRunSnonWbinDl";
			up = "AmovPercMRunSnonWbinDl";
		};
		class BinocKneelActionsRunR: BinocKneelActions
		{
			PlayerCrouch = "AmovPercMRunSnonWbinDr";
			up = "AmovPercMRunSnonWbinDr";
		};
		class BinocKneelActionsWlkB: BinocKneelActions
		{
			PlayerCrouch = "AmovPercMwlkSoptWbinDb";
			up = "AmovPercMwlkSoptWbinDB";
		};
		class BinocKneelActionsWlkBL: BinocKneelActions
		{
			PlayerCrouch = "AmovPercMwlkSoptWbinDbl";
			up = "AmovPercMwlkSoptWbinDbl";
		};
		class BinocKneelActionsWlkBR: BinocKneelActions
		{
			PlayerCrouch = "AmovPercMwlkSoptWbinDbr";
			up = "AmovPercMwlkSoptWbinDbr";
		};
		class BinocKneelActionsWlkF: BinocKneelActions
		{
			PlayerCrouch = "AmovPercMwlkSoptWbinDf";
			up = "AmovPercMwlkSoptWbinDf";
		};
		class BinocKneelActionsWlkFL: BinocKneelActions
		{
			PlayerCrouch = "AmovPercMwlkSoptWbinDfl";
			up = "AmovPercMwlkSoptWbinDfl";
		};
		class BinocKneelActionsWlkFR: BinocKneelActions
		{
			PlayerCrouch = "AmovPercMwlkSoptWbinDfr";
			up = "AmovPercMwlkSoptWbinDfr";
		};
		class BinocKneelActionsWlkL: BinocKneelActions
		{
			PlayerCrouch = "AmovPercMwlkSoptWbinDl";
			up = "AmovPercMwlkSoptWbinDl";
		};
		class BinocKneelActionsWlkR: BinocKneelActions
		{
			PlayerCrouch = "AmovPercMwlkSoptWbinDr";
			up = "AmovPercMwlkSoptWbinDr";
		};
		class BinocKneelCivilActions: CivilKneelActions
		{
			AdjustB = "";
			AdjustF = "";
			AdjustL = "";
			AdjustR = "";
			binocOn = "AwopPknlMstpSoptWbinDnon_non";
			default = "AwopPknlMstpSoptWbinDnon_non";
			Diary = "";
			down = "AwopPpneMstpSoptWbinDnon_non";
			EvasiveLeft = "";
			EvasiveRight = "";
			FastB = "AmovPknlMrunSnonWbinDb_non";
			FastF = "AmovPknlMevaSnonWbinDf_non";
			FastL = "AmovPknlMrunSnonWbinDl_non";
			FastLB = "AmovPknlMrunSnonWbinDbl_non";
			FastLF = "AmovPknlMevaSnonWbinDfl_non";
			FastR = "AmovPknlMrunSnonWbinDr_non";
			FastRB = "AmovPknlMrunSnonWbinDbr_non";
			FastRF = "AmovPknlMevaSnonWbinDfr_non";
			Gear = "";
			PlayerCrouch = "AwopPknlMstpSoptWbinDnon_non";
			PlayerProne = "AwopPpneMstpSoptWbinDnon_non";
			PlayerSlowB = "AmovPknlMrunSnonWbinDb_non";
			PlayerSlowF = "AmovPknlMrunSnonWbinDf_non";
			PlayerSlowL = "AmovPknlMrunSnonWbinDl_non";
			PlayerSlowLB = "AmovPknlMrunSnonWbinDbl_non";
			PlayerSlowLF = "AmovPknlMrunSnonWbinDfl_non";
			PlayerSlowR = "AmovPknlMrunSnonWbinDr_non";
			PlayerSlowRB = "AmovPknlMrunSnonWbinDbr_non";
			PlayerSlowRF = "AmovPknlMrunSnonWbinDfr_non";
			PlayerStand = "AwopPercMstpSoptWbinDnon_non";
			PlayerTactB = "AmovPknlMwlkSoptWbinDb_non";
			PlayerTactF = "AmovPknlMwlkSoptWbinDf_non";
			PlayerTactL = "AmovPknlMwlkSoptWbinDl_non";
			PlayerTactLB = "AmovPknlMwlkSoptWbinDbl_non";
			PlayerTactLF = "AmovPknlMwlkSoptWbinDfl_non";
			PlayerTactR = "AmovPknlMwlkSoptWbinDr_non";
			PlayerTactRB = "AmovPknlMwlkSoptWbinDbr_non";
			PlayerTactRF = "AmovPknlMwlkSoptWbinDfr_non";
			PlayerWalkB = "AmovPknlMwlkSoptWbinDb_non";
			PlayerWalkF = "AmovPknlMwlkSoptWbinDf_non";
			PlayerWalkL = "AmovPknlMwlkSoptWbinDl_non";
			PlayerWalkLB = "AmovPknlMwlkSoptWbinDbl_non";
			PlayerWalkLF = "AmovPknlMwlkSoptWbinDfl_non";
			PlayerWalkR = "AmovPknlMwlkSoptWbinDr_non";
			PlayerWalkRB = "AmovPknlMwlkSoptWbinDbr_non";
			PlayerWalkRF = "AmovPknlMwlkSoptWbinDfr_non";
			SlowB = "AmovPknlMrunSnonWbinDb_non";
			SlowF = "AmovPknlMrunSnonWbinDf_non";
			SlowL = "AmovPknlMrunSnonWbinDl_non";
			SlowLB = "AmovPknlMrunSnonWbinDbl_non";
			SlowLF = "AmovPknlMrunSnonWbinDfl_non";
			SlowR = "AmovPknlMrunSnonWbinDr_non";
			SlowRB = "AmovPknlMrunSnonWbinDbr_non";
			SlowRF = "AmovPknlMrunSnonWbinDfr_non";
			stop = "AwopPknlMstpSoptWbinDnon_non";
			stopRelaxed = "AwopPknlMstpSoptWbinDnon_non";
			TactB = "AmovPknlMwlkSoptWbinDb_non";
			TactF = "AmovPknlMwlkSoptWbinDf_non";
			TactL = "AmovPknlMwlkSoptWbinDl_non";
			TactLB = "AmovPknlMwlkSoptWbinDbl_non";
			TactLF = "AmovPknlMwlkSoptWbinDfl_non";
			TactR = "AmovPknlMwlkSoptWbinDr_non";
			TactRB = "AmovPknlMwlkSoptWbinDbr_non";
			TactRF = "AmovPknlMwlkSoptWbinDfr_non";
			TurnL = "AwopPknlMstpSoptWbinDnon_non_turnL";
			TurnLRelaxed = "AwopPknlMstpSoptWbinDnon_non_turnL";
			TurnR = "AwopPknlMstpSoptWbinDnon_non_turnR";
			TurnRRelaxed = "AwopPknlMstpSoptWbinDnon_non_turnR";
			up = "AwopPercMstpSoptWbinDnon_non";
			upDegree = "ManPosBinoc";
			WalkB = "AmovPknlMwlkSoptWbinDb_non";
			WalkF = "AmovPknlMwlkSoptWbinDf_non";
			WalkL = "AmovPknlMwlkSoptWbinDl_non";
			WalkLB = "AmovPknlMwlkSoptWbinDbl_non";
			WalkLF = "AmovPknlMwlkSoptWbinDfl_non";
			WalkR = "AmovPknlMwlkSoptWbinDr_non";
			WalkRB = "AmovPknlMwlkSoptWbinDbr_non";
			WalkRF = "AmovPknlMwlkSoptWbinDfr_non";
		};
		class BinocKneelCivilActionsEvasiveF: BinocKneelCivilActions
		{
			PlayerCrouch = "AmovPercMevaSnonWbinDf_non";
			up = "AmovPercMevaSnonWbinDf_non";
		};
		class BinocKneelCivilActionsEvasiveFL: BinocKneelCivilActions
		{
			PlayerCrouch = "AmovPercMevaSnonWbinDfl_non";
			up = "AmovPercMevaSnonWbinDfl_non";
		};
		class BinocKneelCivilActionsEvasiveFR: BinocKneelCivilActions
		{
			PlayerCrouch = "AmovPercMevaSnonWbinDfr_non";
			up = "AmovPercMevaSnonWbinDfr_non";
		};
		class BinocKneelCivilActionsRunB: BinocKneelCivilActions
		{
			PlayerCrouch = "AmovPercMRunSnonWbinDb_non";
			up = "AmovPercMRunSnonWbinDB_non";
		};
		class BinocKneelCivilActionsRunBL: BinocKneelCivilActions
		{
			PlayerCrouch = "AmovPercMRunSnonWbinDbl_non";
			up = "AmovPercMRunSnonWbinDbl_non";
		};
		class BinocKneelCivilActionsRunBR: BinocKneelCivilActions
		{
			PlayerCrouch = "AmovPercMRunSnonWbinDbr_non";
			up = "AmovPercMRunSnonWbinDbr_non";
		};
		class BinocKneelCivilActionsRunF: BinocKneelCivilActions
		{
			PlayerCrouch = "AmovPercMRunSnonWbinDf_non";
			up = "AmovPercMRunSnonWbinDf_non";
		};
		class BinocKneelCivilActionsRunFL: BinocKneelCivilActions
		{
			PlayerCrouch = "AmovPercMRunSnonWbinDfl_non";
			up = "AmovPercMRunSnonWbinDfl_non";
		};
		class BinocKneelCivilActionsRunFR: BinocKneelCivilActions
		{
			PlayerCrouch = "AmovPercMRunSnonWbinDfr_non";
			up = "AmovPercMRunSnonWbinDfr_non";
		};
		class BinocKneelCivilActionsRunL: BinocKneelCivilActions
		{
			PlayerCrouch = "AmovPercMRunSnonWbinDl_non";
			up = "AmovPercMRunSnonWbinDl_non";
		};
		class BinocKneelCivilActionsRunR: BinocKneelCivilActions
		{
			PlayerCrouch = "AmovPercMRunSnonWbinDr_non";
			up = "AmovPercMRunSnonWbinDr_non";
		};
		class BinocKneelCivilActionsWlkB: BinocKneelCivilActions
		{
			PlayerCrouch = "AmovPercMwlkSoptWbinDb_non";
			up = "AmovPercMwlkSoptWbinDB_non";
		};
		class BinocKneelCivilActionsWlkBL: BinocKneelCivilActions
		{
			PlayerCrouch = "AmovPercMwlkSoptWbinDbl_non";
			up = "AmovPercMwlkSoptWbinDbl_non";
		};
		class BinocKneelCivilActionsWlkBR: BinocKneelCivilActions
		{
			PlayerCrouch = "AmovPercMwlkSoptWbinDbr_non";
			up = "AmovPercMwlkSoptWbinDbr_non";
		};
		class BinocKneelCivilActionsWlkF: BinocKneelCivilActions
		{
			PlayerCrouch = "AmovPercMwlkSoptWbinDf_non";
			up = "AmovPercMwlkSoptWbinDf_non";
		};
		class BinocKneelCivilActionsWlkFL: BinocKneelCivilActions
		{
			PlayerCrouch = "AmovPercMwlkSoptWbinDfl_non";
			up = "AmovPercMwlkSoptWbinDfl_non";
		};
		class BinocKneelCivilActionsWlkFR: BinocKneelCivilActions
		{
			PlayerCrouch = "AmovPercMwlkSoptWbinDfr_non";
			up = "AmovPercMwlkSoptWbinDfr_non";
		};
		class BinocKneelCivilActionsWlkL: BinocKneelCivilActions
		{
			PlayerCrouch = "AmovPercMwlkSoptWbinDl_non";
			up = "AmovPercMwlkSoptWbinDl_non";
		};
		class BinocKneelCivilActionsWlkR: BinocKneelCivilActions
		{
			PlayerCrouch = "AmovPercMwlkSoptWbinDr_non";
			up = "AmovPercMwlkSoptWbinDr_non";
		};
		class BinocKneelLnrActions: LauncherKneelActions
		{
			AdjustB = "";
			AdjustF = "";
			AdjustL = "";
			AdjustR = "";
			binocOn = "";
			default = "AwopPknlMstpSoptWbinDnon_Lnr";
			Diary = "";
			down = "AwopPpneMstpSoptWbinDnon_Lnr";
			EvasiveLeft = "";
			EvasiveRight = "";
			FastB = "AmovPknlMrunSnonWbinDb_Lnr";
			FastF = "AmovPknlMevaSnonWbinDf_Lnr";
			FastL = "AmovPknlMrunSnonWbinDl_Lnr";
			FastLB = "AmovPknlMrunSnonWbinDbl_Lnr";
			FastLF = "AmovPknlMevaSnonWbinDfl_Lnr";
			FastR = "AmovPknlMrunSnonWbinDr_Lnr";
			FastRB = "AmovPknlMrunSnonWbinDbr_Lnr";
			FastRF = "AmovPknlMevaSnonWbinDfr_Lnr";
			Gear = "";
			PlayerCrouch = "AwopPknlMstpSoptWbinDnon_Lnr";
			PlayerProne = "AwopPpneMstpSoptWbinDnon_Lnr";
			PlayerSlowB = "AmovPknlMrunSnonWbinDb_Lnr";
			PlayerSlowF = "AmovPknlMrunSnonWbinDf_Lnr";
			PlayerSlowL = "AmovPknlMrunSnonWbinDl_Lnr";
			PlayerSlowLB = "AmovPknlMrunSnonWbinDbl_Lnr";
			PlayerSlowLF = "AmovPknlMrunSnonWbinDfl_Lnr";
			PlayerSlowR = "AmovPknlMrunSnonWbinDr_Lnr";
			PlayerSlowRB = "AmovPknlMrunSnonWbinDbr_Lnr";
			PlayerSlowRF = "AmovPknlMrunSnonWbinDfr_Lnr";
			PlayerStand = "AwopPercMstpSoptWbinDnon_Lnr";
			PlayerTactB = "AmovPknlMwlkSoptWbinDb_Lnr";
			PlayerTactF = "AmovPknlMwlkSoptWbinDf_Lnr";
			PlayerTactL = "AmovPknlMwlkSoptWbinDl_Lnr";
			PlayerTactLB = "AmovPknlMwlkSoptWbinDbl_Lnr";
			PlayerTactLF = "AmovPknlMwlkSoptWbinDfl_Lnr";
			PlayerTactR = "AmovPknlMwlkSoptWbinDr_Lnr";
			PlayerTactRB = "AmovPknlMwlkSoptWbinDbr_Lnr";
			PlayerTactRF = "AmovPknlMwlkSoptWbinDfr_Lnr";
			PlayerWalkB = "AmovPknlMwlkSoptWbinDb_Lnr";
			PlayerWalkF = "AmovPknlMwlkSoptWbinDf_Lnr";
			PlayerWalkL = "AmovPknlMwlkSoptWbinDl_Lnr";
			PlayerWalkLB = "AmovPknlMwlkSoptWbinDbl_Lnr";
			PlayerWalkLF = "AmovPknlMwlkSoptWbinDfl_Lnr";
			PlayerWalkR = "AmovPknlMwlkSoptWbinDr_Lnr";
			PlayerWalkRB = "AmovPknlMwlkSoptWbinDbr_Lnr";
			PlayerWalkRF = "AmovPknlMwlkSoptWbinDfr_Lnr";
			SlowB = "AmovPknlMrunSnonWbinDb_Lnr";
			SlowF = "AmovPknlMrunSnonWbinDf_Lnr";
			SlowL = "AmovPknlMrunSnonWbinDl_Lnr";
			SlowLB = "AmovPknlMrunSnonWbinDbl_Lnr";
			SlowLF = "AmovPknlMrunSnonWbinDfl_Lnr";
			SlowR = "AmovPknlMrunSnonWbinDr_Lnr";
			SlowRB = "AmovPknlMrunSnonWbinDbr_Lnr";
			SlowRF = "AmovPknlMrunSnonWbinDfr_Lnr";
			stop = "AwopPknlMstpSoptWbinDnon_Lnr";
			stopRelaxed = "AwopPknlMstpSoptWbinDnon_Lnr";
			TactB = "AmovPknlMwlkSoptWbinDb_Lnr";
			TactF = "AmovPknlMwlkSoptWbinDf_Lnr";
			TactL = "AmovPknlMwlkSoptWbinDl_Lnr";
			TactLB = "AmovPknlMwlkSoptWbinDbl_Lnr";
			TactLF = "AmovPknlMwlkSoptWbinDfl_Lnr";
			TactR = "AmovPknlMwlkSoptWbinDr_Lnr";
			TactRB = "AmovPknlMwlkSoptWbinDbr_Lnr";
			TactRF = "AmovPknlMwlkSoptWbinDfr_Lnr";
			TurnL = "AwopPknlMstpSoptWbinDnon_Lnr_turnL";
			TurnLRelaxed = "AwopPknlMstpSoptWbinDnon_Lnr_turnL";
			TurnR = "AwopPknlMstpSoptWbinDnon_Lnr_turnR";
			TurnRRelaxed = "AwopPknlMstpSoptWbinDnon_Lnr_turnR";
			up = "AwopPercMstpSoptWbinDnon_Lnr";
			upDegree = "ManPosBinoc";
			WalkB = "AmovPknlMwlkSoptWbinDb_Lnr";
			WalkF = "AmovPknlMwlkSoptWbinDf_Lnr";
			WalkL = "AmovPknlMwlkSoptWbinDl_Lnr";
			WalkLB = "AmovPknlMwlkSoptWbinDbl_Lnr";
			WalkLF = "AmovPknlMwlkSoptWbinDfl_Lnr";
			WalkR = "AmovPknlMwlkSoptWbinDr_Lnr";
			WalkRB = "AmovPknlMwlkSoptWbinDbr_Lnr";
			WalkRF = "AmovPknlMwlkSoptWbinDfr_Lnr";
			WeaponOff = "AmovPknlMstpSrasWlnrDnon";
		};
		class BinocKneelLnrActionsEvasiveF: BinocKneelLnrActions
		{
			PlayerCrouch = "AmovPercMevaSnonWbinDf_Lnr";
			up = "AmovPercMevaSnonWbinDf_Lnr";
		};
		class BinocKneelLnrActionsEvasiveFL: BinocKneelLnrActions
		{
			PlayerCrouch = "AmovPercMevaSnonWbinDfl_Lnr";
			up = "AmovPercMevaSnonWbinDfl_Lnr";
		};
		class BinocKneelLnrActionsEvasiveFR: BinocKneelLnrActions
		{
			PlayerCrouch = "AmovPercMevaSnonWbinDfr_Lnr";
			up = "AmovPercMevaSnonWbinDfr_Lnr";
		};
		class BinocKneelLnrActionsRunB: BinocKneelLnrActions
		{
			PlayerCrouch = "AmovPercMRunSnonWbinDb_Lnr";
			up = "AmovPercMRunSnonWbinDB_Lnr";
		};
		class BinocKneelLnrActionsRunBL: BinocKneelLnrActions
		{
			PlayerCrouch = "AmovPercMRunSnonWbinDbl_Lnr";
			up = "AmovPercMRunSnonWbinDbl_Lnr";
		};
		class BinocKneelLnrActionsRunBR: BinocKneelLnrActions
		{
			PlayerCrouch = "AmovPercMRunSnonWbinDbr_Lnr";
			up = "AmovPercMRunSnonWbinDbr_Lnr";
		};
		class BinocKneelLnrActionsRunF: BinocKneelLnrActions
		{
			PlayerCrouch = "AmovPercMRunSnonWbinDf_Lnr";
			up = "AmovPercMRunSnonWbinDf_Lnr";
		};
		class BinocKneelLnrActionsRunFL: BinocKneelLnrActions
		{
			PlayerCrouch = "AmovPercMRunSnonWbinDfl_Lnr";
			up = "AmovPercMRunSnonWbinDfl_Lnr";
		};
		class BinocKneelLnrActionsRunFR: BinocKneelLnrActions
		{
			PlayerCrouch = "AmovPercMRunSnonWbinDfr_Lnr";
			up = "AmovPercMRunSnonWbinDfr_Lnr";
		};
		class BinocKneelLnrActionsRunL: BinocKneelLnrActions
		{
			PlayerCrouch = "AmovPercMRunSnonWbinDl_Lnr";
			up = "AmovPercMRunSnonWbinDl_Lnr";
		};
		class BinocKneelLnrActionsRunR: BinocKneelLnrActions
		{
			PlayerCrouch = "AmovPercMRunSnonWbinDr_Lnr";
			up = "AmovPercMRunSnonWbinDr_Lnr";
		};
		class BinocKneelLnrActionsWlkB: BinocKneelLnrActions
		{
			PlayerCrouch = "AmovPercMwlkSoptWbinDb_Lnr";
			up = "AmovPercMwlkSoptWbinDB_Lnr";
		};
		class BinocKneelLnrActionsWlkBL: BinocKneelLnrActions
		{
			PlayerCrouch = "AmovPercMwlkSoptWbinDbl_Lnr";
			up = "AmovPercMwlkSoptWbinDbl_Lnr";
		};
		class BinocKneelLnrActionsWlkBR: BinocKneelLnrActions
		{
			PlayerCrouch = "AmovPercMwlkSoptWbinDbr_Lnr";
			up = "AmovPercMwlkSoptWbinDbr_Lnr";
		};
		class BinocKneelLnrActionsWlkF: BinocKneelLnrActions
		{
			PlayerCrouch = "AmovPercMwlkSoptWbinDf_Lnr";
			up = "AmovPercMwlkSoptWbinDf_Lnr";
		};
		class BinocKneelLnrActionsWlkFL: BinocKneelLnrActions
		{
			PlayerCrouch = "AmovPercMwlkSoptWbinDfl_Lnr";
			up = "AmovPercMwlkSoptWbinDfl_Lnr";
		};
		class BinocKneelLnrActionsWlkFR: BinocKneelLnrActions
		{
			PlayerCrouch = "AmovPercMwlkSoptWbinDfr_Lnr";
			up = "AmovPercMwlkSoptWbinDfr_Lnr";
		};
		class BinocKneelLnrActionsWlkL: BinocKneelLnrActions
		{
			PlayerCrouch = "AmovPercMwlkSoptWbinDl_Lnr";
			up = "AmovPercMwlkSoptWbinDl_Lnr";
		};
		class BinocKneelLnrActionsWlkR: BinocKneelLnrActions
		{
			PlayerCrouch = "AmovPercMwlkSoptWbinDr_Lnr";
			up = "AmovPercMwlkSoptWbinDr_Lnr";
		};
		class BinocKneelPstActions: PistolKneelActions
		{
			AdjustB = "";
			AdjustF = "";
			AdjustL = "";
			AdjustR = "";
			binocOn = "AwopPknlMstpSoptWbinDnon_Pst";
			Crouch = "AwopPknlMstpSoptWbinDnon_Pst";
			default = "AwopPknlMstpSoptWbinDnon_Pst";
			Diary = "";
			down = "AwopPpneMstpSoptWbinDnon_Pst";
			EvasiveLeft = "";
			EvasiveRight = "";
			FastB = "AmovPknlMrunSnonWbinDb_Pst";
			FastF = "AmovPknlMevaSnonWbinDf_Pst";
			FastL = "AmovPknlMrunSnonWbinDl_Pst";
			FastLB = "AmovPknlMrunSnonWbinDbl_Pst";
			FastLF = "AmovPknlMevaSnonWbinDfl_Pst";
			FastR = "AmovPknlMrunSnonWbinDr_Pst";
			FastRB = "AmovPknlMrunSnonWbinDbr_Pst";
			FastRF = "AmovPknlMevaSnonWbinDfr_Pst";
			Gear = "";
			PlayerCrouch = "AwopPknlMstpSoptWbinDnon_Pst";
			PlayerProne = "AwopPpneMstpSoptWbinDnon_Pst";
			PlayerSlowB = "AmovPknlMrunSnonWbinDb_Pst";
			PlayerSlowF = "AmovPknlMrunSnonWbinDf_Pst";
			PlayerSlowL = "AmovPknlMrunSnonWbinDl_Pst";
			PlayerSlowLB = "AmovPknlMrunSnonWbinDbl_Pst";
			PlayerSlowLF = "AmovPknlMrunSnonWbinDfl_Pst";
			PlayerSlowR = "AmovPknlMrunSnonWbinDr_Pst";
			PlayerSlowRB = "AmovPknlMrunSnonWbinDbr_Pst";
			PlayerSlowRF = "AmovPknlMrunSnonWbinDfr_Pst";
			PlayerStand = "AwopPercMstpSoptWbinDnon_Pst";
			PlayerTactB = "AmovPknlMwlkSoptWbinDb_Pst";
			PlayerTactF = "AmovPknlMwlkSoptWbinDf_Pst";
			PlayerTactL = "AmovPknlMwlkSoptWbinDl_Pst";
			PlayerTactLB = "AmovPknlMwlkSoptWbinDbl_Pst";
			PlayerTactLF = "AmovPknlMwlkSoptWbinDfl_Pst";
			PlayerTactR = "AmovPknlMwlkSoptWbinDr_Pst";
			PlayerTactRB = "AmovPknlMwlkSoptWbinDbr_Pst";
			PlayerTactRF = "AmovPknlMwlkSoptWbinDfr_Pst";
			PlayerWalkB = "AmovPknlMwlkSoptWbinDb_Pst";
			PlayerWalkF = "AmovPknlMwlkSoptWbinDf_Pst";
			PlayerWalkL = "AmovPknlMwlkSoptWbinDl_Pst";
			PlayerWalkLB = "AmovPknlMwlkSoptWbinDbl_Pst";
			PlayerWalkLF = "AmovPknlMwlkSoptWbinDfl_Pst";
			PlayerWalkR = "AmovPknlMwlkSoptWbinDr_Pst";
			PlayerWalkRB = "AmovPknlMwlkSoptWbinDbr_Pst";
			PlayerWalkRF = "AmovPknlMwlkSoptWbinDfr_Pst";
			SlowB = "AmovPknlMrunSnonWbinDb_Pst";
			SlowF = "AmovPknlMrunSnonWbinDf_Pst";
			SlowL = "AmovPknlMrunSnonWbinDl_Pst";
			SlowLB = "AmovPknlMrunSnonWbinDbl_Pst";
			SlowLF = "AmovPknlMrunSnonWbinDfl_Pst";
			SlowR = "AmovPknlMrunSnonWbinDr_Pst";
			SlowRB = "AmovPknlMrunSnonWbinDbr_Pst";
			SlowRF = "AmovPknlMrunSnonWbinDfr_Pst";
			stop = "AwopPknlMstpSoptWbinDnon_Pst";
			stopRelaxed = "AwopPknlMstpSoptWbinDnon_Pst";
			TactB = "AmovPknlMwlkSoptWbinDb_Pst";
			TactF = "AmovPknlMwlkSoptWbinDf_Pst";
			TactL = "AmovPknlMwlkSoptWbinDl_Pst";
			TactLB = "AmovPknlMwlkSoptWbinDbl_Pst";
			TactLF = "AmovPknlMwlkSoptWbinDfl_Pst";
			TactR = "AmovPknlMwlkSoptWbinDr_Pst";
			TactRB = "AmovPknlMwlkSoptWbinDbr_Pst";
			TactRF = "AmovPknlMwlkSoptWbinDfr_Pst";
			TurnL = "AwopPknlMstpSoptWbinDnon_Pst_turnL";
			TurnLRelaxed = "AwopPknlMstpSoptWbinDnon_Pst_turnL";
			TurnR = "AwopPknlMstpSoptWbinDnon_Pst_turnR";
			TurnRRelaxed = "AwopPknlMstpSoptWbinDnon_Pst_turnR";
			up = "AwopPercMstpSoptWbinDnon_Pst";
			upDegree = "ManPosBinoc";
			WalkB = "AmovPknlMwlkSoptWbinDb_Pst";
			WalkF = "AmovPknlMwlkSoptWbinDf_Pst";
			WalkL = "AmovPknlMwlkSoptWbinDl_Pst";
			WalkLB = "AmovPknlMwlkSoptWbinDbl_Pst";
			WalkLF = "AmovPknlMwlkSoptWbinDfl_Pst";
			WalkR = "AmovPknlMwlkSoptWbinDr_Pst";
			WalkRB = "AmovPknlMwlkSoptWbinDbr_Pst";
			WalkRF = "AmovPknlMwlkSoptWbinDfr_Pst";
		};
		class BinocKneelPstActionsEvasiveF: BinocKneelPstActions
		{
			PlayerCrouch = "AmovPercMevaSnonWbinDf_Pst";
			up = "AmovPercMevaSnonWbinDf_Pst";
		};
		class BinocKneelPstActionsEvasiveFL: BinocKneelPstActions
		{
			PlayerCrouch = "AmovPercMevaSnonWbinDfl_Pst";
			up = "AmovPercMevaSnonWbinDfl_Pst";
		};
		class BinocKneelPstActionsEvasiveFR: BinocKneelPstActions
		{
			PlayerCrouch = "AmovPercMevaSnonWbinDfr_Pst";
			up = "AmovPercMevaSnonWbinDfr_Pst";
		};
		class BinocKneelPstActionsRunB: BinocKneelPstActions
		{
			PlayerCrouch = "AmovPercMRunSnonWbinDb_Pst";
			up = "AmovPercMRunSnonWbinDB_Pst";
		};
		class BinocKneelPstActionsRunBL: BinocKneelPstActions
		{
			PlayerCrouch = "AmovPercMRunSnonWbinDbl_Pst";
			up = "AmovPercMRunSnonWbinDbl_Pst";
		};
		class BinocKneelPstActionsRunBR: BinocKneelPstActions
		{
			PlayerCrouch = "AmovPercMRunSnonWbinDbr_Pst";
			up = "AmovPercMRunSnonWbinDbr_Pst";
		};
		class BinocKneelPstActionsRunF: BinocKneelPstActions
		{
			PlayerCrouch = "AmovPercMRunSnonWbinDf_Pst";
			up = "AmovPercMRunSnonWbinDf_Pst";
		};
		class BinocKneelPstActionsRunFL: BinocKneelPstActions
		{
			PlayerCrouch = "AmovPercMRunSnonWbinDfl_Pst";
			up = "AmovPercMRunSnonWbinDfl_Pst";
		};
		class BinocKneelPstActionsRunFR: BinocKneelPstActions
		{
			PlayerCrouch = "AmovPercMRunSnonWbinDfr_Pst";
			up = "AmovPercMRunSnonWbinDfr_Pst";
		};
		class BinocKneelPstActionsRunL: BinocKneelPstActions
		{
			PlayerCrouch = "AmovPercMRunSnonWbinDl_Pst";
			up = "AmovPercMRunSnonWbinDl_Pst";
		};
		class BinocKneelPstActionsRunR: BinocKneelPstActions
		{
			PlayerCrouch = "AmovPercMRunSnonWbinDr_Pst";
			up = "AmovPercMRunSnonWbinDr_Pst";
		};
		class BinocKneelPstActionsWlkB: BinocKneelPstActions
		{
			PlayerCrouch = "AmovPercMwlkSoptWbinDb_Pst";
			up = "AmovPercMwlkSoptWbinDB_Pst";
		};
		class BinocKneelPstActionsWlkBL: BinocKneelPstActions
		{
			PlayerCrouch = "AmovPercMwlkSoptWbinDbl_Pst";
			up = "AmovPercMwlkSoptWbinDbl_Pst";
		};
		class BinocKneelPstActionsWlkBR: BinocKneelPstActions
		{
			PlayerCrouch = "AmovPercMwlkSoptWbinDbr_Pst";
			up = "AmovPercMwlkSoptWbinDbr_Pst";
		};
		class BinocKneelPstActionsWlkF: BinocKneelPstActions
		{
			PlayerCrouch = "AmovPercMwlkSoptWbinDf_Pst";
			up = "AmovPercMwlkSoptWbinDf_Pst";
		};
		class BinocKneelPstActionsWlkFL: BinocKneelPstActions
		{
			PlayerCrouch = "AmovPercMwlkSoptWbinDfl_Pst";
			up = "AmovPercMwlkSoptWbinDfl_Pst";
		};
		class BinocKneelPstActionsWlkFR: BinocKneelPstActions
		{
			PlayerCrouch = "AmovPercMwlkSoptWbinDfr_Pst";
			up = "AmovPercMwlkSoptWbinDfr_Pst";
		};
		class BinocKneelPstActionsWlkL: BinocKneelPstActions
		{
			PlayerCrouch = "AmovPercMwlkSoptWbinDl_Pst";
			up = "AmovPercMwlkSoptWbinDl_Pst";
		};
		class BinocKneelPstActionsWlkR: BinocKneelPstActions
		{
			PlayerCrouch = "AmovPercMwlkSoptWbinDr_Pst";
			up = "AmovPercMwlkSoptWbinDr_Pst";
		};
		class BinocKneelRflActions: RifleKneelActions
		{
			AdjustB = "";
			AdjustF = "";
			AdjustL = "";
			AdjustR = "";
			binocOn = "";
			default = "AwopPknlMstpSoptWbinDnon_rfl";
			Diary = "";
			down = "AwopPpneMstpSoptWbinDnon_rfl";
			EvasiveLeft = "";
			EvasiveRight = "";
			FastB = "AmovPknlMrunSnonWbinDb_rfl";
			FastF = "AmovPknlMevaSnonWbinDf_rfl";
			FastL = "AmovPknlMrunSnonWbinDl_rfl";
			FastLB = "AmovPknlMrunSnonWbinDbl_rfl";
			FastLF = "AmovPknlMevaSnonWbinDfl_rfl";
			FastR = "AmovPknlMrunSnonWbinDr_rfl";
			FastRB = "AmovPknlMrunSnonWbinDbr_rfl";
			FastRF = "AmovPknlMevaSnonWbinDfr_rfl";
			Gear = "";
			PlayerCrouch = "AwopPknlMstpSoptWbinDnon_rfl";
			PlayerProne = "AwopPpneMstpSoptWbinDnon_rfl";
			PlayerSlowB = "AmovPknlMrunSnonWbinDb_rfl";
			PlayerSlowF = "AmovPknlMrunSnonWbinDf_rfl";
			PlayerSlowL = "AmovPknlMrunSnonWbinDl_rfl";
			PlayerSlowLB = "AmovPknlMrunSnonWbinDbl_rfl";
			PlayerSlowLF = "AmovPknlMrunSnonWbinDfl_rfl";
			PlayerSlowR = "AmovPknlMrunSnonWbinDr_rfl";
			PlayerSlowRB = "AmovPknlMrunSnonWbinDbr_rfl";
			PlayerSlowRF = "AmovPknlMrunSnonWbinDfr_rfl";
			PlayerStand = "AwopPercMstpSoptWbinDnon_rfl";
			PlayerTactB = "AmovPknlMwlkSoptWbinDb_rfl";
			PlayerTactF = "AmovPknlMwlkSoptWbinDf_rfl";
			PlayerTactL = "AmovPknlMwlkSoptWbinDl_rfl";
			PlayerTactLB = "AmovPknlMwlkSoptWbinDbl_rfl";
			PlayerTactLF = "AmovPknlMwlkSoptWbinDfl_rfl";
			PlayerTactR = "AmovPknlMwlkSoptWbinDr_rfl";
			PlayerTactRB = "AmovPknlMwlkSoptWbinDbr_rfl";
			PlayerTactRF = "AmovPknlMwlkSoptWbinDfr_rfl";
			PlayerWalkB = "AmovPknlMwlkSoptWbinDb_rfl";
			PlayerWalkF = "AmovPknlMwlkSoptWbinDf_rfl";
			PlayerWalkL = "AmovPknlMwlkSoptWbinDl_rfl";
			PlayerWalkLB = "AmovPknlMwlkSoptWbinDbl_rfl";
			PlayerWalkLF = "AmovPknlMwlkSoptWbinDfl_rfl";
			PlayerWalkR = "AmovPknlMwlkSoptWbinDr_rfl";
			PlayerWalkRB = "AmovPknlMwlkSoptWbinDbr_rfl";
			PlayerWalkRF = "AmovPknlMwlkSoptWbinDfr_rfl";
			SlowB = "AmovPknlMrunSnonWbinDb_rfl";
			SlowF = "AmovPknlMrunSnonWbinDf_rfl";
			SlowL = "AmovPknlMrunSnonWbinDl_rfl";
			SlowLB = "AmovPknlMrunSnonWbinDbl_rfl";
			SlowLF = "AmovPknlMrunSnonWbinDfl_rfl";
			SlowR = "AmovPknlMrunSnonWbinDr_rfl";
			SlowRB = "AmovPknlMrunSnonWbinDbr_rfl";
			SlowRF = "AmovPknlMrunSnonWbinDfr_rfl";
			stop = "AwopPknlMstpSoptWbinDnon_rfl";
			stopRelaxed = "AwopPknlMstpSoptWbinDnon_rfl";
			TactB = "AmovPknlMwlkSoptWbinDb_rfl";
			TactF = "AmovPknlMwlkSoptWbinDf_rfl";
			TactL = "AmovPknlMwlkSoptWbinDl_rfl";
			TactLB = "AmovPknlMwlkSoptWbinDbl_rfl";
			TactLF = "AmovPknlMwlkSoptWbinDfl_rfl";
			TactR = "AmovPknlMwlkSoptWbinDr_rfl";
			TactRB = "AmovPknlMwlkSoptWbinDbr_rfl";
			TactRF = "AmovPknlMwlkSoptWbinDfr_rfl";
			TurnL = "AwopPknlMstpSoptWbinDnon_rfl_turnL";
			TurnLRelaxed = "AwopPknlMstpSoptWbinDnon_rfl_turnL";
			TurnR = "AwopPknlMstpSoptWbinDnon_rfl_turnR";
			TurnRRelaxed = "AwopPknlMstpSoptWbinDnon_rfl_turnR";
			up = "AwopPercMstpSoptWbinDnon_rfl";
			upDegree = "ManPosBinoc";
			WalkB = "AmovPknlMwlkSoptWbinDb_rfl";
			WalkF = "AmovPknlMwlkSoptWbinDf_rfl";
			WalkL = "AmovPknlMwlkSoptWbinDl_rfl";
			WalkLB = "AmovPknlMwlkSoptWbinDbl_rfl";
			WalkLF = "AmovPknlMwlkSoptWbinDfl_rfl";
			WalkR = "AmovPknlMwlkSoptWbinDr_rfl";
			WalkRB = "AmovPknlMwlkSoptWbinDbr_rfl";
			WalkRF = "AmovPknlMwlkSoptWbinDfr_rfl";
		};
		class BinocKneelRflActionsEvasiveF: BinocKneelRflActions
		{
			PlayerCrouch = "AmovPercMevaSnonWbinDf_rfl";
			up = "AmovPercMevaSnonWbinDf_rfl";
		};
		class BinocKneelRflActionsEvasiveFL: BinocKneelRflActions
		{
			PlayerCrouch = "AmovPercMevaSnonWbinDfl_rfl";
			up = "AmovPercMevaSnonWbinDfl_rfl";
		};
		class BinocKneelRflActionsEvasiveFR: BinocKneelRflActions
		{
			PlayerCrouch = "AmovPercMevaSnonWbinDfr_rfl";
			up = "AmovPercMevaSnonWbinDfr_rfl";
		};
		class BinocKneelRflActionsRunB: BinocKneelRflActions
		{
			PlayerCrouch = "AmovPercMRunSnonWbinDb_rfl";
			up = "AmovPercMRunSnonWbinDB_rfl";
		};
		class BinocKneelRflActionsRunBL: BinocKneelRflActions
		{
			PlayerCrouch = "AmovPercMRunSnonWbinDbl_rfl";
			up = "AmovPercMRunSnonWbinDbl_rfl";
		};
		class BinocKneelRflActionsRunBR: BinocKneelRflActions
		{
			PlayerCrouch = "AmovPercMRunSnonWbinDbr_rfl";
			up = "AmovPercMRunSnonWbinDbr_rfl";
		};
		class BinocKneelRflActionsRunF: BinocKneelRflActions
		{
			PlayerCrouch = "AmovPercMRunSnonWbinDf_rfl";
			up = "AmovPercMRunSnonWbinDf_rfl";
		};
		class BinocKneelRflActionsRunFL: BinocKneelRflActions
		{
			PlayerCrouch = "AmovPercMRunSnonWbinDfl_rfl";
			up = "AmovPercMRunSnonWbinDfl_rfl";
		};
		class BinocKneelRflActionsRunFR: BinocKneelRflActions
		{
			PlayerCrouch = "AmovPercMRunSnonWbinDfr_rfl";
			up = "AmovPercMRunSnonWbinDfr_rfl";
		};
		class BinocKneelRflActionsRunL: BinocKneelRflActions
		{
			PlayerCrouch = "AmovPercMRunSnonWbinDl_rfl";
			up = "AmovPercMRunSnonWbinDl_rfl";
		};
		class BinocKneelRflActionsRunR: BinocKneelRflActions
		{
			PlayerCrouch = "AmovPercMRunSnonWbinDr_rfl";
			up = "AmovPercMRunSnonWbinDr_rfl";
		};
		class BinocKneelRflActionsWlkB: BinocKneelRflActions
		{
			PlayerCrouch = "AmovPercMwlkSoptWbinDb_rfl";
			up = "AmovPercMwlkSoptWbinDB_rfl";
		};
		class BinocKneelRflActionsWlkBL: BinocKneelRflActions
		{
			PlayerCrouch = "AmovPercMwlkSoptWbinDbl_rfl";
			up = "AmovPercMwlkSoptWbinDbl_rfl";
		};
		class BinocKneelRflActionsWlkBR: BinocKneelRflActions
		{
			PlayerCrouch = "AmovPercMwlkSoptWbinDbr_rfl";
			up = "AmovPercMwlkSoptWbinDbr_rfl";
		};
		class BinocKneelRflActionsWlkF: BinocKneelRflActions
		{
			PlayerCrouch = "AmovPercMwlkSoptWbinDf_rfl";
			up = "AmovPercMwlkSoptWbinDf_rfl";
		};
		class BinocKneelRflActionsWlkFL: BinocKneelRflActions
		{
			PlayerCrouch = "AmovPercMwlkSoptWbinDfl_rfl";
			up = "AmovPercMwlkSoptWbinDfl_rfl";
		};
		class BinocKneelRflActionsWlkFR: BinocKneelRflActions
		{
			PlayerCrouch = "AmovPercMwlkSoptWbinDfr_rfl";
			up = "AmovPercMwlkSoptWbinDfr_rfl";
		};
		class BinocKneelRflActionsWlkL: BinocKneelRflActions
		{
			PlayerCrouch = "AmovPercMwlkSoptWbinDl_rfl";
			up = "AmovPercMwlkSoptWbinDl_rfl";
		};
		class BinocKneelRflActionsWlkR: BinocKneelRflActions
		{
			PlayerCrouch = "AmovPercMwlkSoptWbinDr_rfl";
			up = "AmovPercMwlkSoptWbinDr_rfl";
		};
		class BinocProneActions: RifleProneActions
		{
			AdjustB = "";
			AdjustF = "";
			AdjustL = "";
			AdjustLB = "";
			AdjustLF = "";
			AdjustR = "";
			AdjustRB = "";
			AdjustRF = "";
			binocOn = "";
			default = "AmovPpneMstpSoptWbinDnon";
			down = "AmovPercMstpSoptWbinDnon";
			EvasiveLeft = "AmovPpneMstpSoptWbinDnon_AmovPpneMevaSoptWbinDl";
			EvasiveRight = "AmovPpneMstpSoptWbinDnon_AmovPpneMevaSoptWbinDr";
			FastB = "AmovPpneMrunSnonWbinDb";
			FastF = "AmovPpneMevaSnonWbinDf";
			FastL = "AmovPpneMrunSnonWbinDl";
			FastLB = "AmovPpneMrunSnonWbinDbl";
			FastLF = "AmovPpneMrunSnonWbinDfl";
			FastR = "AmovPpneMrunSnonWbinDr";
			FastRB = "AmovPpneMrunSnonWbinDbr";
			FastRF = "AmovPpneMrunSnonWbinDfr";
			FireNotPossible = "AmovPpneMstpSoptWbinDnon";
			Gear = "AmovPpneMstpSoptWbinDnon";
			LimpB = "AmovPpneMwlkSoptWbinDb";
			LimpF = "AmovPpneMwlkSoptWbinDf";
			LimpL = "AmovPpneMwlkSoptWbinDl";
			LimpLB = "AmovPpneMwlkSoptWbinDbl";
			LimpLF = "AmovPpneMwlkSoptWbinDfl";
			LimpR = "AmovPpneMwlkSoptWbinDr";
			LimpRB = "AmovPpneMwlkSoptWbinDbr";
			LimpRF = "AmovPpneMwlkSoptWbinDfr";
			PlayerCrouch = "AmovPknlMstpSoptWbinDnon";
			PlayerProne = "AmovPpneMstpSoptWbinDnon";
			PlayerSlowB = "AmovPpneMrunSnonWbinDb";
			PlayerSlowF = "AmovPpneMrunSnonWbinDf";
			PlayerSlowL = "AmovPpneMrunSnonWbinDl";
			PlayerSlowLB = "AmovPpneMrunSnonWbinDbl";
			PlayerSlowLF = "AmovPpneMrunSnonWbinDfl";
			PlayerSlowR = "AmovPpneMrunSnonWbinDr";
			PlayerSlowRB = "AmovPpneMrunSnonWbinDbr";
			PlayerSlowRF = "AmovPpneMrunSnonWbinDfr";
			PlayerStand = "AmovPercMstpSoptWbinDnon";
			PlayerTactB = "AmovPpneMwlkSoptWbinDb";
			PlayerTactF = "AmovPpneMwlkSoptWbinDf";
			PlayerTactL = "AmovPpneMwlkSoptWbinDl";
			PlayerTactLB = "AmovPpneMwlkSoptWbinDbl";
			PlayerTactLF = "AmovPpneMwlkSoptWbinDfl";
			PlayerTactR = "AmovPpneMwlkSoptWbinDr";
			PlayerTactRB = "AmovPpneMwlkSoptWbinDbr";
			PlayerTactRF = "AmovPpneMwlkSoptWbinDfr";
			PlayerWalkB = "AmovPpneMwlkSoptWbinDb";
			PlayerWalkF = "AmovPpneMwlkSoptWbinDf";
			PlayerWalkL = "AmovPpneMwlkSoptWbinDl";
			PlayerWalkLB = "AmovPpneMwlkSoptWbinDbl";
			PlayerWalkLF = "AmovPpneMwlkSoptWbinDfl";
			PlayerWalkR = "AmovPpneMwlkSoptWbinDr";
			PlayerWalkRB = "AmovPpneMwlkSoptWbinDbr";
			PlayerWalkRF = "AmovPpneMwlkSoptWbinDfr";
			putDown = "AmovPpneMstpSoptWbinDnon_AinvPpneMstpSoptWbinDnon_Putdown";
			SlowB = "AmovPpneMrunSnonWbinDb";
			SlowF = "AmovPpneMrunSnonWbinDf";
			SlowL = "AmovPpneMrunSnonWbinDl";
			SlowLB = "AmovPpneMrunSnonWbinDbl";
			SlowLF = "AmovPpneMrunSnonWbinDfl";
			SlowR = "AmovPpneMrunSnonWbinDr";
			SlowRB = "AmovPpneMrunSnonWbinDbr";
			SlowRF = "AmovPpneMrunSnonWbinDfr";
			Stand = "";
			stop = "AmovPpneMstpSoptWbinDnon";
			stopRelaxed = "AmovPpneMstpSoptWbinDnon";
			TactB = "AmovPpneMwlkSoptWbinDb";
			TactF = "AmovPpneMwlkSoptWbinDf";
			TactL = "AmovPpneMwlkSoptWbinDl";
			TactLB = "AmovPpneMwlkSoptWbinDbl";
			TactLF = "AmovPpneMwlkSoptWbinDfl";
			TactR = "AmovPpneMwlkSoptWbinDr";
			TactRB = "AmovPpneMwlkSoptWbinDbr";
			TactRF = "AmovPpneMwlkSoptWbinDfr";
			TurnL = "AmovPpneMstpSoptWbinDnon_turnL";
			TurnLRelaxed = "AmovPpneMstpSoptWbinDnon_turnL";
			TurnR = "AmovPpneMstpSoptWbinDnon_turnR";
			TurnRRelaxed = "AmovPpneMstpSoptWbinDnon_turnR";
			up = "AmovPknlMstpSoptWbinDnon";
			upDegree = "ManPosBinocLying";
			WalkB = "AmovPpneMwlkSoptWbinDb";
			WalkF = "AmovPpneMwlkSoptWbinDf";
			WalkL = "AmovPpneMwlkSoptWbinDl";
			WalkLB = "AmovPpneMwlkSoptWbinDbl";
			WalkLF = "AmovPpneMwlkSoptWbinDfl";
			WalkR = "AmovPpneMwlkSoptWbinDr";
			WalkRB = "AmovPpneMwlkSoptWbinDbr";
			WalkRF = "AmovPpneMwlkSoptWbinDfr";
		};
		class BinocProneActionsEvasiveF: BinocProneActions {};
		class BinocProneActionsRunB: BinocProneActions {};
		class BinocProneActionsRunBL: BinocProneActions {};
		class BinocProneActionsRunBR: BinocProneActions {};
		class BinocProneActionsRunF: BinocProneActions {};
		class BinocProneActionsRunFL: BinocProneActions {};
		class BinocProneActionsRunFR: BinocProneActions {};
		class BinocProneActionsRunL: BinocProneActions {};
		class BinocProneActionsRunR: BinocProneActions {};
		class BinocProneActionsWlkB: BinocProneActions {};
		class BinocProneActionsWlkBL: BinocProneActions {};
		class BinocProneActionsWlkBR: BinocProneActions {};
		class BinocProneActionsWlkF: BinocProneActions {};
		class BinocProneActionsWlkFL: BinocProneActions {};
		class BinocProneActionsWlkFR: BinocProneActions {};
		class BinocProneActionsWlkL: BinocProneActions {};
		class BinocProneActionsWlkR: BinocProneActions {};
		class BinocProneCivilActions: CivilProneActions
		{
			AdjustB = "";
			AdjustF = "";
			binocOn = "AwopPpneMstpSoptWbinDnon_non";
			default = "AwopPpneMstpSoptWbinDnon_non";
			down = "AwopPercMstpSoptWbinDnon_non";
			EvasiveLeft = "";
			EvasiveRight = "";
			FastB = "AmovPpneMrunSnonWbinDb_non";
			FastF = "AmovPpneMevaSnonWbinDf_non";
			FastL = "AmovPpneMrunSnonWbinDl_non";
			FastLB = "AmovPpneMrunSnonWbinDbl_non";
			FastLF = "AmovPpneMrunSnonWbinDfl_non";
			FastR = "AmovPpneMrunSnonWbinDr_non";
			FastRB = "AmovPpneMrunSnonWbinDbr_non";
			FastRF = "AmovPpneMrunSnonWbinDfr_non";
			PlayerCrouch = "AwopPknlMstpSoptWbinDnon_non";
			PlayerProne = "AwopPpneMstpSoptWbinDnon_non";
			PlayerSlowB = "AmovPpneMrunSnonWbinDb_non";
			PlayerSlowF = "AmovPpneMrunSnonWbinDf_non";
			PlayerSlowL = "AmovPpneMrunSnonWbinDl_non";
			PlayerSlowLB = "AmovPpneMrunSnonWbinDbl_non";
			PlayerSlowLF = "AmovPpneMrunSnonWbinDfl_non";
			PlayerSlowR = "AmovPpneMrunSnonWbinDr_non";
			PlayerSlowRB = "AmovPpneMrunSnonWbinDbr_non";
			PlayerSlowRF = "AmovPpneMrunSnonWbinDfr_non";
			PlayerStand = "AwopPercMstpSoptWbinDnon_non";
			PlayerTactB = "AmovPpneMwlkSoptWbinDb_non";
			PlayerTactF = "AmovPpneMwlkSoptWbinDf_non";
			PlayerTactL = "AmovPpneMwlkSoptWbinDl_non";
			PlayerTactLB = "AmovPpneMwlkSoptWbinDbl_non";
			PlayerTactLF = "AmovPpneMwlkSoptWbinDfl_non";
			PlayerTactR = "AmovPpneMwlkSoptWbinDr_non";
			PlayerTactRB = "AmovPpneMwlkSoptWbinDbr_non";
			PlayerTactRF = "AmovPpneMwlkSoptWbinDfr_non";
			PlayerWalkB = "AmovPpneMwlkSoptWbinDb_non";
			PlayerWalkF = "AmovPpneMwlkSoptWbinDf_non";
			PlayerWalkL = "AmovPpneMwlkSoptWbinDl_non";
			PlayerWalkLB = "AmovPpneMwlkSoptWbinDbl_non";
			PlayerWalkLF = "AmovPpneMwlkSoptWbinDfl_non";
			PlayerWalkR = "AmovPpneMwlkSoptWbinDr_non";
			PlayerWalkRB = "AmovPpneMwlkSoptWbinDbr_non";
			PlayerWalkRF = "AmovPpneMwlkSoptWbinDfr_non";
			SlowB = "AmovPpneMrunSnonWbinDb_non";
			SlowF = "AmovPpneMrunSnonWbinDf_non";
			SlowL = "AmovPpneMrunSnonWbinDl_non";
			SlowLB = "AmovPpneMrunSnonWbinDbl_non";
			SlowLF = "AmovPpneMrunSnonWbinDfl_non";
			SlowR = "AmovPpneMrunSnonWbinDr_non";
			SlowRB = "AmovPpneMrunSnonWbinDbr_non";
			SlowRF = "AmovPpneMrunSnonWbinDfr_non";
			stop = "AwopPpneMstpSoptWbinDnon_non";
			stopRelaxed = "AwopPpneMstpSoptWbinDnon_non";
			TactB = "AmovPpneMwlkSoptWbinDb_non";
			TactF = "AmovPpneMwlkSoptWbinDf_non";
			TactL = "AmovPpneMwlkSoptWbinDl_non";
			TactLB = "AmovPpneMwlkSoptWbinDbl_non";
			TactLF = "AmovPpneMwlkSoptWbinDfl_non";
			TactR = "AmovPpneMwlkSoptWbinDr_non";
			TactRB = "AmovPpneMwlkSoptWbinDbr_non";
			TactRF = "AmovPpneMwlkSoptWbinDfr_non";
			TurnL = "AwopPpneMstpSoptWbinDnon_non_turnL";
			TurnLRelaxed = "AwopPpneMstpSoptWbinDnon_non_turnL";
			TurnR = "AwopPpneMstpSoptWbinDnon_non_turnR";
			TurnRRelaxed = "AwopPpneMstpSoptWbinDnon_non_turnR";
			up = "AwopPknlMstpSoptWbinDnon_non";
			upDegree = "ManPosBinocLying";
			WalkB = "AmovPpneMwlkSoptWbinDb_non";
			WalkF = "AmovPpneMwlkSoptWbinDf_non";
			WalkL = "AmovPpneMwlkSoptWbinDl_non";
			WalkLB = "AmovPpneMwlkSoptWbinDbl_non";
			WalkLF = "AmovPpneMwlkSoptWbinDfl_non";
			WalkR = "AmovPpneMwlkSoptWbinDr_non";
			WalkRB = "AmovPpneMwlkSoptWbinDbr_non";
			WalkRF = "AmovPpneMwlkSoptWbinDfr_non";
		};
		class BinocProneCivilActionsEvasiveF: BinocProneCivilActions {};
		class BinocProneCivilActionsRunB: BinocProneCivilActions {};
		class BinocProneCivilActionsRunBL: BinocProneCivilActions {};
		class BinocProneCivilActionsRunBR: BinocProneCivilActions {};
		class BinocProneCivilActionsRunF: BinocProneCivilActions {};
		class BinocProneCivilActionsRunFL: BinocProneCivilActions {};
		class BinocProneCivilActionsRunFR: BinocProneCivilActions {};
		class BinocProneCivilActionsRunL: BinocProneCivilActions {};
		class BinocProneCivilActionsRunR: BinocProneCivilActions {};
		class BinocProneCivilActionsWlkB: BinocProneCivilActions {};
		class BinocProneCivilActionsWlkBL: BinocProneCivilActions {};
		class BinocProneCivilActionsWlkBR: BinocProneCivilActions {};
		class BinocProneCivilActionsWlkF: BinocProneCivilActions {};
		class BinocProneCivilActionsWlkFL: BinocProneCivilActions {};
		class BinocProneCivilActionsWlkFR: BinocProneCivilActions {};
		class BinocProneCivilActionsWlkL: BinocProneCivilActions {};
		class BinocProneCivilActionsWlkR: BinocProneCivilActions {};
		class BinocProneLnrActions: LauncherKneelActions
		{
			AdjustB = "";
			AdjustF = "";
			BinocOff = "AmovPpneMstpSnonWnonDnon";
			binocOn = "";
			default = "AwopPpneMstpSoptWbinDnon_Lnr";
			down = "AwopPercMstpSoptWbinDnon_Lnr";
			EvasiveLeft = "";
			EvasiveRight = "";
			FastB = "AmovPpneMrunSnonWbinDb_Lnr";
			FastF = "AmovPpneMevaSnonWbinDf_Lnr";
			FastL = "AmovPpneMrunSnonWbinDl_Lnr";
			FastLB = "AmovPpneMrunSnonWbinDbl_Lnr";
			FastLF = "AmovPpneMrunSnonWbinDfl_Lnr";
			FastR = "AmovPpneMrunSnonWbinDr_Lnr";
			FastRB = "AmovPpneMrunSnonWbinDbr_Lnr";
			FastRF = "AmovPpneMrunSnonWbinDfr_Lnr";
			PlayerCrouch = "AwopPknlMstpSoptWbinDnon_Lnr";
			PlayerProne = "AwopPpneMstpSoptWbinDnon_Lnr";
			PlayerSlowB = "AmovPpneMrunSnonWbinDb_Lnr";
			PlayerSlowF = "AmovPpneMrunSnonWbinDf_Lnr";
			PlayerSlowL = "AmovPpneMrunSnonWbinDl_Lnr";
			PlayerSlowLB = "AmovPpneMrunSnonWbinDbl_Lnr";
			PlayerSlowLF = "AmovPpneMrunSnonWbinDfl_Lnr";
			PlayerSlowR = "AmovPpneMrunSnonWbinDr_Lnr";
			PlayerSlowRB = "AmovPpneMrunSnonWbinDbr_Lnr";
			PlayerSlowRF = "AmovPpneMrunSnonWbinDfr_Lnr";
			PlayerStand = "AwopPercMstpSoptWbinDnon_Lnr";
			PlayerTactB = "AmovPpneMwlkSoptWbinDb_Lnr";
			PlayerTactF = "AmovPpneMwlkSoptWbinDf_Lnr";
			PlayerTactL = "AmovPpneMwlkSoptWbinDl_Lnr";
			PlayerTactLB = "AmovPpneMwlkSoptWbinDbl_Lnr";
			PlayerTactLF = "AmovPpneMwlkSoptWbinDfl_Lnr";
			PlayerTactR = "AmovPpneMwlkSoptWbinDr_Lnr";
			PlayerTactRB = "AmovPpneMwlkSoptWbinDbr_Lnr";
			PlayerTactRF = "AmovPpneMwlkSoptWbinDfr_Lnr";
			PlayerWalkB = "AmovPpneMwlkSoptWbinDb_Lnr";
			PlayerWalkF = "AmovPpneMwlkSoptWbinDf_Lnr";
			PlayerWalkL = "AmovPpneMwlkSoptWbinDl_Lnr";
			PlayerWalkLB = "AmovPpneMwlkSoptWbinDbl_Lnr";
			PlayerWalkLF = "AmovPpneMwlkSoptWbinDfl_Lnr";
			PlayerWalkR = "AmovPpneMwlkSoptWbinDr_Lnr";
			PlayerWalkRB = "AmovPpneMwlkSoptWbinDbr_Lnr";
			PlayerWalkRF = "AmovPpneMwlkSoptWbinDfr_Lnr";
			SlowB = "AmovPpneMrunSnonWbinDb_Lnr";
			SlowF = "AmovPpneMrunSnonWbinDf_Lnr";
			SlowL = "AmovPpneMrunSnonWbinDl_Lnr";
			SlowLB = "AmovPpneMrunSnonWbinDbl_Lnr";
			SlowLF = "AmovPpneMrunSnonWbinDfl_Lnr";
			SlowR = "AmovPpneMrunSnonWbinDr_Lnr";
			SlowRB = "AmovPpneMrunSnonWbinDbr_Lnr";
			SlowRF = "AmovPpneMrunSnonWbinDfr_Lnr";
			stop = "AwopPpneMstpSoptWbinDnon_Lnr";
			stopRelaxed = "AwopPpneMstpSoptWbinDnon_Lnr";
			TactB = "AmovPpneMwlkSoptWbinDb_Lnr";
			TactF = "AmovPpneMwlkSoptWbinDf_Lnr";
			TactL = "AmovPpneMwlkSoptWbinDl_Lnr";
			TactLB = "AmovPpneMwlkSoptWbinDbl_Lnr";
			TactLF = "AmovPpneMwlkSoptWbinDfl_Lnr";
			TactR = "AmovPpneMwlkSoptWbinDr_Lnr";
			TactRB = "AmovPpneMwlkSoptWbinDbr_Lnr";
			TactRF = "AmovPpneMwlkSoptWbinDfr_Lnr";
			TurnL = "AwopPpneMstpSoptWbinDnon_Lnr_turnL";
			TurnLRelaxed = "AwopPpneMstpSoptWbinDnon_Lnr_turnL";
			TurnR = "AwopPpneMstpSoptWbinDnon_Lnr_turnR";
			TurnRRelaxed = "AwopPpneMstpSoptWbinDnon_Lnr_turnR";
			up = "AwopPknlMstpSoptWbinDnon_Lnr";
			upDegree = "ManPosBinocLying";
			WalkB = "AmovPpneMwlkSoptWbinDb_Lnr";
			WalkF = "AmovPpneMwlkSoptWbinDf_Lnr";
			WalkL = "AmovPpneMwlkSoptWbinDl_Lnr";
			WalkLB = "AmovPpneMwlkSoptWbinDbl_Lnr";
			WalkLF = "AmovPpneMwlkSoptWbinDfl_Lnr";
			WalkR = "AmovPpneMwlkSoptWbinDr_Lnr";
			WalkRB = "AmovPpneMwlkSoptWbinDbr_Lnr";
			WalkRF = "AmovPpneMwlkSoptWbinDfr_Lnr";
		};
		class BinocProneLnrActionsEvasiveF: BinocProneLnrActions {};
		class BinocProneLnrActionsRunB: BinocProneLnrActions {};
		class BinocProneLnrActionsRunBL: BinocProneLnrActions {};
		class BinocProneLnrActionsRunBR: BinocProneLnrActions {};
		class BinocProneLnrActionsRunF: BinocProneLnrActions {};
		class BinocProneLnrActionsRunFL: BinocProneLnrActions {};
		class BinocProneLnrActionsRunFR: BinocProneLnrActions {};
		class BinocProneLnrActionsRunL: BinocProneLnrActions {};
		class BinocProneLnrActionsRunR: BinocProneLnrActions {};
		class BinocProneLnrActionsWlkB: BinocProneLnrActions {};
		class BinocProneLnrActionsWlkBL: BinocProneLnrActions {};
		class BinocProneLnrActionsWlkBR: BinocProneLnrActions {};
		class BinocProneLnrActionsWlkF: BinocProneLnrActions {};
		class BinocProneLnrActionsWlkFL: BinocProneLnrActions {};
		class BinocProneLnrActionsWlkFR: BinocProneLnrActions {};
		class BinocProneLnrActionsWlkL: BinocProneLnrActions {};
		class BinocProneLnrActionsWlkR: BinocProneLnrActions {};
		class BinocPronePstActions: PistolProneActions
		{
			AdjustB = "";
			AdjustF = "";
			binocOn = "";
			default = "AwopPpneMstpSoptWbinDnon_Pst";
			down = "AwopPercMstpSoptWbinDnon_Pst";
			EvasiveLeft = "";
			EvasiveRight = "";
			FastB = "AmovPpneMrunSnonWbinDb_Pst";
			FastF = "AmovPpneMevaSnonWbinDf_Pst";
			FastL = "AmovPpneMrunSnonWbinDl_Pst";
			FastLB = "AmovPpneMrunSnonWbinDbl_Pst";
			FastLF = "AmovPpneMrunSnonWbinDfl_Pst";
			FastR = "AmovPpneMrunSnonWbinDr_Pst";
			FastRB = "AmovPpneMrunSnonWbinDbr_Pst";
			FastRF = "AmovPpneMrunSnonWbinDfr_Pst";
			PlayerCrouch = "AwopPknlMstpSoptWbinDnon_Pst";
			PlayerProne = "AwopPpneMstpSoptWbinDnon_Pst";
			PlayerSlowB = "AmovPpneMrunSnonWbinDb_Pst";
			PlayerSlowF = "AmovPpneMrunSnonWbinDf_Pst";
			PlayerSlowL = "AmovPpneMrunSnonWbinDl_Pst";
			PlayerSlowLB = "AmovPpneMrunSnonWbinDbl_Pst";
			PlayerSlowLF = "AmovPpneMrunSnonWbinDfl_Pst";
			PlayerSlowR = "AmovPpneMrunSnonWbinDr_Pst";
			PlayerSlowRB = "AmovPpneMrunSnonWbinDbr_Pst";
			PlayerSlowRF = "AmovPpneMrunSnonWbinDfr_Pst";
			PlayerStand = "AwopPercMstpSoptWbinDnon_Pst";
			PlayerTactB = "AmovPpneMwlkSoptWbinDb_Pst";
			PlayerTactF = "AmovPpneMwlkSoptWbinDf_Pst";
			PlayerTactL = "AmovPpneMwlkSoptWbinDl_Pst";
			PlayerTactLB = "AmovPpneMwlkSoptWbinDbl_Pst";
			PlayerTactLF = "AmovPpneMwlkSoptWbinDfl_Pst";
			PlayerTactR = "AmovPpneMwlkSoptWbinDr_Pst";
			PlayerTactRB = "AmovPpneMwlkSoptWbinDbr_Pst";
			PlayerTactRF = "AmovPpneMwlkSoptWbinDfr_Pst";
			PlayerWalkB = "AmovPpneMwlkSoptWbinDb_Pst";
			PlayerWalkF = "AmovPpneMwlkSoptWbinDf_Pst";
			PlayerWalkL = "AmovPpneMwlkSoptWbinDl_Pst";
			PlayerWalkLB = "AmovPpneMwlkSoptWbinDbl_Pst";
			PlayerWalkLF = "AmovPpneMwlkSoptWbinDfl_Pst";
			PlayerWalkR = "AmovPpneMwlkSoptWbinDr_Pst";
			PlayerWalkRB = "AmovPpneMwlkSoptWbinDbr_Pst";
			PlayerWalkRF = "AmovPpneMwlkSoptWbinDfr_Pst";
			SlowB = "AmovPpneMrunSnonWbinDb_Pst";
			SlowF = "AmovPpneMrunSnonWbinDf_Pst";
			SlowL = "AmovPpneMrunSnonWbinDl_Pst";
			SlowLB = "AmovPpneMrunSnonWbinDbl_Pst";
			SlowLF = "AmovPpneMrunSnonWbinDfl_Pst";
			SlowR = "AmovPpneMrunSnonWbinDr_Pst";
			SlowRB = "AmovPpneMrunSnonWbinDbr_Pst";
			SlowRF = "AmovPpneMrunSnonWbinDfr_Pst";
			stop = "AwopPpneMstpSoptWbinDnon_Pst";
			stopRelaxed = "AwopPpneMstpSoptWbinDnon_Pst";
			TactB = "AmovPpneMwlkSoptWbinDb_Pst";
			TactF = "AmovPpneMwlkSoptWbinDf_Pst";
			TactL = "AmovPpneMwlkSoptWbinDl_Pst";
			TactLB = "AmovPpneMwlkSoptWbinDbl_Pst";
			TactLF = "AmovPpneMwlkSoptWbinDfl_Pst";
			TactR = "AmovPpneMwlkSoptWbinDr_Pst";
			TactRB = "AmovPpneMwlkSoptWbinDbr_Pst";
			TactRF = "AmovPpneMwlkSoptWbinDfr_Pst";
			TurnL = "AwopPpneMstpSoptWbinDnon_Pst_turnL";
			TurnLRelaxed = "AwopPpneMstpSoptWbinDnon_Pst_turnL";
			TurnR = "AwopPpneMstpSoptWbinDnon_Pst_turnR";
			TurnRRelaxed = "AwopPpneMstpSoptWbinDnon_Pst_turnR";
			up = "AwopPknlMstpSoptWbinDnon_Pst";
			upDegree = "ManPosBinocLying";
			WalkB = "AmovPpneMwlkSoptWbinDb_Pst";
			WalkF = "AmovPpneMwlkSoptWbinDf_Pst";
			WalkL = "AmovPpneMwlkSoptWbinDl_Pst";
			WalkLB = "AmovPpneMwlkSoptWbinDbl_Pst";
			WalkLF = "AmovPpneMwlkSoptWbinDfl_Pst";
			WalkR = "AmovPpneMwlkSoptWbinDr_Pst";
			WalkRB = "AmovPpneMwlkSoptWbinDbr_Pst";
			WalkRF = "AmovPpneMwlkSoptWbinDfr_Pst";
		};
		class BinocPronePstActionsEvasiveF: BinocPronePstActions {};
		class BinocPronePstActionsRunB: BinocPronePstActions {};
		class BinocPronePstActionsRunBL: BinocPronePstActions {};
		class BinocPronePstActionsRunBR: BinocPronePstActions {};
		class BinocPronePstActionsRunF: BinocPronePstActions {};
		class BinocPronePstActionsRunFL: BinocPronePstActions {};
		class BinocPronePstActionsRunFR: BinocPronePstActions {};
		class BinocPronePstActionsRunL: BinocPronePstActions {};
		class BinocPronePstActionsRunR: BinocPronePstActions {};
		class BinocPronePstActionsWlkB: BinocPronePstActions {};
		class BinocPronePstActionsWlkBL: BinocPronePstActions {};
		class BinocPronePstActionsWlkBR: BinocPronePstActions {};
		class BinocPronePstActionsWlkF: BinocPronePstActions {};
		class BinocPronePstActionsWlkFL: BinocPronePstActions {};
		class BinocPronePstActionsWlkFR: BinocPronePstActions {};
		class BinocPronePstActionsWlkL: BinocPronePstActions {};
		class BinocPronePstActionsWlkR: BinocPronePstActions {};
		class BinocProneRflActions: RifleProneActions
		{
			AdjustB = "";
			AdjustF = "";
			binocOn = "";
			default = "AwopPpneMstpSoptWbinDnon_rfl";
			down = "AwopPercMstpSoptWbinDnon_rfl";
			EvasiveLeft = "";
			EvasiveRight = "";
			FastB = "AmovPpneMrunSnonWbinDb_rfl";
			FastF = "AmovPpneMevaSnonWbinDf_rfl";
			FastL = "AmovPpneMrunSnonWbinDl_rfl";
			FastLB = "AmovPpneMrunSnonWbinDbl_rfl";
			FastLF = "AmovPpneMrunSnonWbinDfl_rfl";
			FastR = "AmovPpneMrunSnonWbinDr_rfl";
			FastRB = "AmovPpneMrunSnonWbinDbr_rfl";
			FastRF = "AmovPpneMrunSnonWbinDfr_rfl";
			PlayerCrouch = "AwopPknlMstpSoptWbinDnon_rfl";
			PlayerProne = "AwopPpneMstpSoptWbinDnon_rfl";
			PlayerSlowB = "AmovPpneMrunSnonWbinDb_rfl";
			PlayerSlowF = "AmovPpneMrunSnonWbinDf_rfl";
			PlayerSlowL = "AmovPpneMrunSnonWbinDl_rfl";
			PlayerSlowLB = "AmovPpneMrunSnonWbinDbl_rfl";
			PlayerSlowLF = "AmovPpneMrunSnonWbinDfl_rfl";
			PlayerSlowR = "AmovPpneMrunSnonWbinDr_rfl";
			PlayerSlowRB = "AmovPpneMrunSnonWbinDbr_rfl";
			PlayerSlowRF = "AmovPpneMrunSnonWbinDfr_rfl";
			PlayerStand = "AwopPercMstpSoptWbinDnon_rfl";
			PlayerTactB = "AmovPpneMwlkSoptWbinDb_rfl";
			PlayerTactF = "AmovPpneMwlkSoptWbinDf_rfl";
			PlayerTactL = "AmovPpneMwlkSoptWbinDl_rfl";
			PlayerTactLB = "AmovPpneMwlkSoptWbinDbl_rfl";
			PlayerTactLF = "AmovPpneMwlkSoptWbinDfl_rfl";
			PlayerTactR = "AmovPpneMwlkSoptWbinDr_rfl";
			PlayerTactRB = "AmovPpneMwlkSoptWbinDbr_rfl";
			PlayerTactRF = "AmovPpneMwlkSoptWbinDfr_rfl";
			PlayerWalkB = "AmovPpneMwlkSoptWbinDb_rfl";
			PlayerWalkF = "AmovPpneMwlkSoptWbinDf_rfl";
			PlayerWalkL = "AmovPpneMwlkSoptWbinDl_rfl";
			PlayerWalkLB = "AmovPpneMwlkSoptWbinDbl_rfl";
			PlayerWalkLF = "AmovPpneMwlkSoptWbinDfl_rfl";
			PlayerWalkR = "AmovPpneMwlkSoptWbinDr_rfl";
			PlayerWalkRB = "AmovPpneMwlkSoptWbinDbr_rfl";
			PlayerWalkRF = "AmovPpneMwlkSoptWbinDfr_rfl";
			SlowB = "AmovPpneMrunSnonWbinDb_rfl";
			SlowF = "AmovPpneMrunSnonWbinDf_rfl";
			SlowL = "AmovPpneMrunSnonWbinDl_rfl";
			SlowLB = "AmovPpneMrunSnonWbinDbl_rfl";
			SlowLF = "AmovPpneMrunSnonWbinDfl_rfl";
			SlowR = "AmovPpneMrunSnonWbinDr_rfl";
			SlowRB = "AmovPpneMrunSnonWbinDbr_rfl";
			SlowRF = "AmovPpneMrunSnonWbinDfr_rfl";
			stop = "AwopPpneMstpSoptWbinDnon_rfl";
			stopRelaxed = "AwopPpneMstpSoptWbinDnon_rfl";
			TactB = "AmovPpneMwlkSoptWbinDb_rfl";
			TactF = "AmovPpneMwlkSoptWbinDf_rfl";
			TactL = "AmovPpneMwlkSoptWbinDl_rfl";
			TactLB = "AmovPpneMwlkSoptWbinDbl_rfl";
			TactLF = "AmovPpneMwlkSoptWbinDfl_rfl";
			TactR = "AmovPpneMwlkSoptWbinDr_rfl";
			TactRB = "AmovPpneMwlkSoptWbinDbr_rfl";
			TactRF = "AmovPpneMwlkSoptWbinDfr_rfl";
			TurnL = "AwopPpneMstpSoptWbinDnon_rfl_turnL";
			TurnLRelaxed = "AwopPpneMstpSoptWbinDnon_rfl_turnL";
			TurnR = "AwopPpneMstpSoptWbinDnon_rfl_turnR";
			TurnRRelaxed = "AwopPpneMstpSoptWbinDnon_rfl_turnR";
			up = "AwopPknlMstpSoptWbinDnon_rfl";
			upDegree = "ManPosBinocLying";
			WalkB = "AmovPpneMwlkSoptWbinDb_rfl";
			WalkF = "AmovPpneMwlkSoptWbinDf_rfl";
			WalkL = "AmovPpneMwlkSoptWbinDl_rfl";
			WalkLB = "AmovPpneMwlkSoptWbinDbl_rfl";
			WalkLF = "AmovPpneMwlkSoptWbinDfl_rfl";
			WalkR = "AmovPpneMwlkSoptWbinDr_rfl";
			WalkRB = "AmovPpneMwlkSoptWbinDbr_rfl";
			WalkRF = "AmovPpneMwlkSoptWbinDfr_rfl";
		};
		class BinocProneRflActionsEvasiveF: BinocProneRflActions {};
		class BinocProneRflActionsRunB: BinocProneRflActions {};
		class BinocProneRflActionsRunBL: BinocProneRflActions {};
		class BinocProneRflActionsRunBR: BinocProneRflActions {};
		class BinocProneRflActionsRunF: BinocProneRflActions {};
		class BinocProneRflActionsRunFL: BinocProneRflActions {};
		class BinocProneRflActionsRunFR: BinocProneRflActions {};
		class BinocProneRflActionsRunL: BinocProneRflActions {};
		class BinocProneRflActionsRunR: BinocProneRflActions {};
		class BinocProneRflActionsWlkB: BinocProneRflActions {};
		class BinocProneRflActionsWlkBL: BinocProneRflActions {};
		class BinocProneRflActionsWlkBR: BinocProneRflActions {};
		class BinocProneRflActionsWlkF: BinocProneRflActions {};
		class BinocProneRflActionsWlkFL: BinocProneRflActions {};
		class BinocProneRflActionsWlkFR: BinocProneRflActions {};
		class BinocProneRflActionsWlkL: BinocProneRflActions {};
		class BinocProneRflActionsWlkR: BinocProneRflActions {};
		class BinocStandActions: RifleStandActions
		{
			AdjustB = "";
			AdjustF = "";
			AdjustL = "";
			AdjustR = "";
			binocOn = "";
			default = "AmovPercMstpSoptWbinDnon";
			Diary = "";
			down = "AmovPpneMstpSoptWbinDnon";
			EvasiveRight = "";
			FastB = "AmovPercMrunSnonWbinDb";
			FastF = "AmovPercMevaSnonWbinDf";
			FastL = "AmovPercMrunSnonWbinDl";
			FastLB = "AmovPercMrunSnonWbinDbl";
			FastLF = "AmovPercMevaSnonWbinDfl";
			FastR = "AmovPercMrunSnonWbinDr";
			FastRB = "AmovPercMrunSnonWbinDbr";
			FastRF = "AmovPercMevaSnonWbinDfr";
			FireNotPossible = "AmovPercMstpSoptWbinDnon";
			Gear = "";
			gestureGo[] = {"GestureGoBStand", "Gesture"};
			GetOver = "AovrPercMstpSoptWbinDf";
			LimpB = "AmovPercMlmpSoptWbinDb";
			LimpF = "AmovPercMlmpSoptWbinDf";
			LimpL = "AmovPercMlmpSoptWbinDl";
			LimpLB = "AmovPercMlmpSoptWbinDbl";
			LimpLF = "AmovPercMlmpSoptWbinDfl";
			LimpR = "AmovPercMlmpSoptWbinDr";
			LimpRB = "AmovPercMlmpSoptWbinDbr";
			LimpRF = "AmovPercMlmpSoptWbinDfr";
			PlayerCrouch = "AmovPknlMstpSoptWbinDnon";
			PlayerProne = "AmovPpneMstpSoptWbinDnon";
			PlayerSlowB = "AmovPercMrunSnonWbinDb";
			PlayerSlowF = "AmovPercMrunSnonWbinDf";
			PlayerSlowL = "AmovPercMrunSnonWbinDl";
			PlayerSlowLB = "AmovPercMrunSnonWbinDbl";
			PlayerSlowLF = "AmovPercMrunSnonWbinDfl";
			PlayerSlowR = "AmovPercMrunSnonWbinDr";
			PlayerSlowRB = "AmovPercMrunSnonWbinDbr";
			PlayerSlowRF = "AmovPercMrunSnonWbinDfr";
			PlayerStand = "AmovPercMstpSoptWbinDnon";
			PlayerTactB = "AmovPercMwlkSoptWbinDb";
			PlayerTactF = "AmovPercMwlkSoptWbinDf";
			PlayerTactL = "AmovPercMwlkSoptWbinDl";
			PlayerTactLB = "AmovPercMwlkSoptWbinDbl";
			PlayerTactLF = "AmovPercMwlkSoptWbinDfl";
			PlayerTactR = "AmovPercMwlkSoptWbinDr";
			PlayerTactRB = "AmovPercMwlkSoptWbinDbr";
			PlayerTactRF = "AmovPercMwlkSoptWbinDfr";
			PlayerWalkB = "AmovPercMwlkSoptWbinDb";
			PlayerWalkF = "AmovPercMwlkSoptWbinDf";
			PlayerWalkL = "AmovPercMwlkSoptWbinDl";
			PlayerWalkLB = "AmovPercMwlkSoptWbinDbl";
			PlayerWalkLF = "AmovPercMwlkSoptWbinDfl";
			PlayerWalkR = "AmovPercMwlkSoptWbinDr";
			PlayerWalkRB = "AmovPercMwlkSoptWbinDbr";
			PlayerWalkRF = "AmovPercMwlkSoptWbinDfr";
			putDown = "AmovPercMstpSoptWbinDnon_AinvPercMstpSoptWbinDnon_Putdown";
			SlowB = "AmovPercMrunSnonWbinDb";
			SlowF = "AmovPercMrunSnonWbinDf";
			SlowL = "AmovPercMrunSnonWbinDl";
			SlowLB = "AmovPercMrunSnonWbinDbl";
			SlowLF = "AmovPercMrunSnonWbinDfl";
			SlowR = "AmovPercMrunSnonWbinDr";
			SlowRB = "AmovPercMrunSnonWbinDbr";
			SlowRF = "AmovPercMrunSnonWbinDfr";
			Stand = "AmovPercMstpSoptWbinDnon";
			stop = "AmovPercMstpSoptWbinDnon";
			stopRelaxed = "AmovPercMstpSoptWbinDnon";
			TactB = "AmovPercMwlkSoptWbinDb";
			TactF = "AmovPercMwlkSoptWbinDf";
			TactL = "AmovPercMwlkSoptWbinDl";
			TactLB = "AmovPercMwlkSoptWbinDbl";
			TactLF = "AmovPercMwlkSoptWbinDfl";
			TactR = "AmovPercMwlkSoptWbinDr";
			TactRB = "AmovPercMwlkSoptWbinDbr";
			TactRF = "AmovPercMwlkSoptWbinDfr";
			TurnL = "AmovPercMstpSoptWbinDnon_turnL";
			TurnLRelaxed = "AmovPercMstpSoptWbinDnon_turnL";
			TurnR = "AmovPercMstpSoptWbinDnon_turnR";
			TurnRRelaxed = "AmovPercMstpSoptWbinDnon_turnR";
			up = "AmovPknlMstpSoptWbinDnon";
			upDegree = "ManPosBinocStand";
			WalkB = "AmovPercMwlkSoptWbinDb";
			WalkF = "AmovPercMwlkSoptWbinDf";
			WalkL = "AmovPercMwlkSoptWbinDl";
			WalkLB = "AmovPercMwlkSoptWbinDbl";
			WalkLF = "AmovPercMwlkSoptWbinDfl";
			WalkR = "AmovPercMwlkSoptWbinDr";
			WalkRB = "AmovPercMwlkSoptWbinDbr";
			WalkRF = "AmovPercMwlkSoptWbinDfr";
		};
		class BinocStandActionsEvasiveF: BinocStandActions
		{
			PlayerCrouch = "AmovPknlMevaSnonWbinDf";
			up = "AmovPknlMevaSnonWbinDf";
		};
		class BinocStandActionsEvasiveFL: BinocStandActions
		{
			PlayerCrouch = "AmovPknlMevaSnonWbinDfl";
			up = "AmovPknlMevaSnonWbinDfl";
		};
		class BinocStandActionsEvasiveFR: BinocStandActions
		{
			PlayerCrouch = "AmovPknlMevaSnonWbinDfr";
			up = "AmovPknlMevaSnonWbinDfr";
		};
		class BinocStandActionsLimpB: BinocStandActions
		{
			Up = "AmovPknlMlmpSoptWbinDb";
		};
		class BinocStandActionsLimpF: BinocStandActions
		{
			Up = "AmovPknlMlmpSoptWbinDf";
		};
		class BinocStandActionsLimpL: BinocStandActions
		{
			Up = "AmovPknlMlmpSoptWbinDl";
		};
		class BinocStandActionsLimpLB: BinocStandActions
		{
			Up = "AmovPknlMlmpSoptWbinDbl";
		};
		class BinocStandActionsLimpLF: BinocStandActions
		{
			Up = "AmovPknlMlmpSoptWbinDfl";
		};
		class BinocStandActionsLimpR: BinocStandActions
		{
			Up = "AmovPknlMlmpSoptWbinDr";
		};
		class BinocStandActionsLimpRB: BinocStandActions
		{
			Up = "AmovPknlMlmpSoptWbinDbr";
		};
		class BinocStandActionsLimpRF: BinocStandActions
		{
			Up = "AmovPknlMlmpSoptWbinDfr";
		};
		class BinocStandActionsRunB: BinocStandActions
		{
			PlayerCrouch = "AmovPknlMRunSnonWbinDb";
			up = "AmovPknlMRunSnonWbinDB";
		};
		class BinocStandActionsRunBL: BinocStandActions
		{
			PlayerCrouch = "AmovPknlMRunSnonWbinDbl";
			up = "AmovPknlMRunSnonWbinDbl";
		};
		class BinocStandActionsRunBR: BinocStandActions
		{
			PlayerCrouch = "AmovPknlMRunSnonWbinDbr";
			up = "AmovPknlMRunSnonWbinDbr";
		};
		class BinocStandActionsRunF: BinocStandActions
		{
			PlayerCrouch = "AmovPknlMRunSnonWbinDf";
			up = "AmovPknlMRunSnonWbinDf";
		};
		class BinocStandActionsRunFL: BinocStandActions
		{
			PlayerCrouch = "AmovPknlMRunSnonWbinDfl";
			up = "AmovPknlMRunSnonWbinDfl";
		};
		class BinocStandActionsRunFR: BinocStandActions
		{
			PlayerCrouch = "AmovPknlMRunSnonWbinDfr";
			up = "AmovPknlMRunSnonWbinDfr";
		};
		class BinocStandActionsRunL: BinocStandActions
		{
			PlayerCrouch = "AmovPknlMRunSnonWbinDl";
			up = "AmovPknlMRunSnonWbinDl";
		};
		class BinocStandActionsRunR: BinocStandActions
		{
			PlayerCrouch = "AmovPknlMRunSnonWbinDr";
			up = "AmovPknlMRunSnonWbinDr";
		};
		class BinocStandActionsWlkB: BinocStandActions
		{
			PlayerCrouch = "AmovPknlMwlkSoptWbinDb";
			up = "AmovPknlMwlkSoptWbinDB";
		};
		class BinocStandActionsWlkBL: BinocStandActions
		{
			PlayerCrouch = "AmovPknlMwlkSoptWbinDbl";
			up = "AmovPknlMwlkSoptWbinDbl";
		};
		class BinocStandActionsWlkBR: BinocStandActions
		{
			PlayerCrouch = "AmovPknlMwlkSoptWbinDbr";
			up = "AmovPknlMwlkSoptWbinDbr";
		};
		class BinocStandActionsWlkF: BinocStandActions
		{
			PlayerCrouch = "AmovPknlMwlkSoptWbinDf";
			up = "AmovPknlMwlkSoptWbinDf";
		};
		class BinocStandActionsWlkFL: BinocStandActions
		{
			PlayerCrouch = "AmovPknlMwlkSoptWbinDfl";
			up = "AmovPknlMwlkSoptWbinDfl";
		};
		class BinocStandActionsWlkFR: BinocStandActions
		{
			PlayerCrouch = "AmovPknlMwlkSoptWbinDfr";
			up = "AmovPknlMwlkSoptWbinDfr";
		};
		class BinocStandActionsWlkL: BinocStandActions
		{
			PlayerCrouch = "AmovPknlMwlkSoptWbinDl";
			up = "AmovPknlMwlkSoptWbinDl";
		};
		class BinocStandActionsWlkR: BinocStandActions
		{
			PlayerCrouch = "AmovPknlMwlkSoptWbinDr";
			up = "AmovPknlMwlkSoptWbinDr";
		};
		class BinocStandCivilActions: CivilStandActions
		{
			AdjustB = "";
			AdjustF = "";
			AdjustL = "";
			AdjustR = "";
			binocOn = "AwopPercMstpSoptWbinDnon_non";
			default = "AwopPercMstpSoptWbinDnon_non";
			Diary = "";
			down = "AwopPpneMstpSoptWbinDnon_non";
			EvasiveRight = "";
			FastB = "AmovPercMrunSnonWbinDb_non";
			FastF = "AmovPercMevaSnonWbinDf_non";
			FastL = "AmovPercMrunSnonWbinDl_non";
			FastLB = "AmovPercMrunSnonWbinDbl_non";
			FastLF = "AmovPercMevaSnonWbinDfl_non";
			FastR = "AmovPercMrunSnonWbinDr_non";
			FastRB = "AmovPercMrunSnonWbinDbr_non";
			FastRF = "AmovPercMevaSnonWbinDfr_non";
			Gear = "";
			gestureGo[] = {"GestureGoBStand", "Gesture"};
			GetOver = "";
			PlayerCrouch = "AwopPknlMstpSoptWbinDnon_non";
			PlayerProne = "AwopPpneMstpSoptWbinDnon_non";
			PlayerSlowB = "AmovPercMrunSnonWbinDb_non";
			PlayerSlowF = "AmovPercMrunSnonWbinDf_non";
			PlayerSlowL = "AmovPercMrunSnonWbinDl_non";
			PlayerSlowLB = "AmovPercMrunSnonWbinDbl_non";
			PlayerSlowLF = "AmovPercMrunSnonWbinDfl_non";
			PlayerSlowR = "AmovPercMrunSnonWbinDr_non";
			PlayerSlowRB = "AmovPercMrunSnonWbinDbr_non";
			PlayerSlowRF = "AmovPercMrunSnonWbinDfr_non";
			PlayerStand = "AwopPercMstpSoptWbinDnon_non";
			PlayerTactB = "AmovPercMwlkSoptWbinDb_non";
			PlayerTactF = "AmovPercMwlkSoptWbinDf_non";
			PlayerTactL = "AmovPercMwlkSoptWbinDl_non";
			PlayerTactLB = "AmovPercMwlkSoptWbinDbl_non";
			PlayerTactLF = "AmovPercMwlkSoptWbinDfl_non";
			PlayerTactR = "AmovPercMwlkSoptWbinDr_non";
			PlayerTactRB = "AmovPercMwlkSoptWbinDbr_non";
			PlayerTactRF = "AmovPercMwlkSoptWbinDfr_non";
			PlayerWalkB = "AmovPercMwlkSoptWbinDb_non";
			PlayerWalkF = "AmovPercMwlkSoptWbinDf_non";
			PlayerWalkL = "AmovPercMwlkSoptWbinDl_non";
			PlayerWalkLB = "AmovPercMwlkSoptWbinDbl_non";
			PlayerWalkLF = "AmovPercMwlkSoptWbinDfl_non";
			PlayerWalkR = "AmovPercMwlkSoptWbinDr_non";
			PlayerWalkRB = "AmovPercMwlkSoptWbinDbr_non";
			PlayerWalkRF = "AmovPercMwlkSoptWbinDfr_non";
			SlowB = "AmovPercMrunSnonWbinDb_non";
			SlowF = "AmovPercMrunSnonWbinDf_non";
			SlowL = "AmovPercMrunSnonWbinDl_non";
			SlowLB = "AmovPercMrunSnonWbinDbl_non";
			SlowLF = "AmovPercMrunSnonWbinDfl_non";
			SlowR = "AmovPercMrunSnonWbinDr_non";
			SlowRB = "AmovPercMrunSnonWbinDbr_non";
			SlowRF = "AmovPercMrunSnonWbinDfr_non";
			stop = "AwopPercMstpSoptWbinDnon_non";
			stopRelaxed = "AwopPercMstpSoptWbinDnon_non";
			TactB = "AmovPercMwlkSoptWbinDb_non";
			TactF = "AmovPercMwlkSoptWbinDf_non";
			TactL = "AmovPercMwlkSoptWbinDl_non";
			TactLB = "AmovPercMwlkSoptWbinDbl_non";
			TactLF = "AmovPercMwlkSoptWbinDfl_non";
			TactR = "AmovPercMwlkSoptWbinDr_non";
			TactRB = "AmovPercMwlkSoptWbinDbr_non";
			TactRF = "AmovPercMwlkSoptWbinDfr_non";
			TurnL = "AwopPercMstpSoptWbinDnon_non_turnL";
			TurnLRelaxed = "AwopPercMstpSoptWbinDnon_non_turnL";
			TurnR = "AwopPercMstpSoptWbinDnon_non_turnR";
			TurnRRelaxed = "AwopPercMstpSoptWbinDnon_non_turnR";
			up = "AwopPknlMstpSoptWbinDnon_non";
			upDegree = "ManPosBinocStand";
			WalkB = "AmovPercMwlkSoptWbinDb_non";
			WalkF = "AmovPercMwlkSoptWbinDf_non";
			WalkL = "AmovPercMwlkSoptWbinDl_non";
			WalkLB = "AmovPercMwlkSoptWbinDbl_non";
			WalkLF = "AmovPercMwlkSoptWbinDfl_non";
			WalkR = "AmovPercMwlkSoptWbinDr_non";
			WalkRB = "AmovPercMwlkSoptWbinDbr_non";
			WalkRF = "AmovPercMwlkSoptWbinDfr_non";
		};
		class BinocStandCivilActionsEvasiveF: BinocStandCivilActions
		{
			PlayerCrouch = "AmovPknlMevaSnonWbinDf_non";
			up = "AmovPknlMevaSnonWbinDf_non";
		};
		class BinocStandCivilActionsEvasiveFL: BinocStandCivilActions
		{
			PlayerCrouch = "AmovPknlMevaSnonWbinDfl_non";
			up = "AmovPknlMevaSnonWbinDfl_non";
		};
		class BinocStandCivilActionsEvasiveFR: BinocStandCivilActions
		{
			PlayerCrouch = "AmovPknlMevaSnonWbinDfr_non";
			up = "AmovPknlMevaSnonWbinDfr_non";
		};
		class BinocStandCivilActionsRunB: BinocStandCivilActions
		{
			PlayerCrouch = "AmovPknlMRunSnonWbinDb_non";
			up = "AmovPknlMRunSnonWbinDB_non";
		};
		class BinocStandCivilActionsRunBL: BinocStandCivilActions
		{
			PlayerCrouch = "AmovPknlMRunSnonWbinDbl_non";
			up = "AmovPknlMRunSnonWbinDbl_non";
		};
		class BinocStandCivilActionsRunBR: BinocStandCivilActions
		{
			PlayerCrouch = "AmovPknlMRunSnonWbinDbr_non";
			up = "AmovPknlMRunSnonWbinDbr_non";
		};
		class BinocStandCivilActionsRunF: BinocStandCivilActions
		{
			PlayerCrouch = "AmovPknlMRunSnonWbinDf_non";
			up = "AmovPknlMRunSnonWbinDf_non";
		};
		class BinocStandCivilActionsRunFL: BinocStandCivilActions
		{
			PlayerCrouch = "AmovPknlMRunSnonWbinDfl_non";
			up = "AmovPknlMRunSnonWbinDfl_non";
		};
		class BinocStandCivilActionsRunFR: BinocStandCivilActions
		{
			PlayerCrouch = "AmovPknlMRunSnonWbinDfr_non";
			up = "AmovPknlMRunSnonWbinDfr_non";
		};
		class BinocStandCivilActionsRunL: BinocStandCivilActions
		{
			PlayerCrouch = "AmovPknlMRunSnonWbinDl_non";
			up = "AmovPknlMRunSnonWbinDl_non";
		};
		class BinocStandCivilActionsRunR: BinocStandCivilActions
		{
			PlayerCrouch = "AmovPknlMRunSnonWbinDr_non";
			up = "AmovPknlMRunSnonWbinDr_non";
		};
		class BinocStandCivilActionsWlkB: BinocStandCivilActions
		{
			PlayerCrouch = "AmovPknlMwlkSoptWbinDb_non";
			up = "AmovPknlMwlkSoptWbinDB_non";
		};
		class BinocStandCivilActionsWlkBL: BinocStandCivilActions
		{
			PlayerCrouch = "AmovPknlMwlkSoptWbinDbl_non";
			up = "AmovPknlMwlkSoptWbinDbl_non";
		};
		class BinocStandCivilActionsWlkBR: BinocStandCivilActions
		{
			PlayerCrouch = "AmovPknlMwlkSoptWbinDbr_non";
			up = "AmovPknlMwlkSoptWbinDbr_non";
		};
		class BinocStandCivilActionsWlkF: BinocStandCivilActions
		{
			PlayerCrouch = "AmovPknlMwlkSoptWbinDf_non";
			up = "AmovPknlMwlkSoptWbinDf_non";
		};
		class BinocStandCivilActionsWlkFL: BinocStandCivilActions
		{
			PlayerCrouch = "AmovPknlMwlkSoptWbinDfl_non";
			up = "AmovPknlMwlkSoptWbinDfl_non";
		};
		class BinocStandCivilActionsWlkFR: BinocStandCivilActions
		{
			PlayerCrouch = "AmovPknlMwlkSoptWbinDfr_non";
			up = "AmovPknlMwlkSoptWbinDfr_non";
		};
		class BinocStandCivilActionsWlkL: BinocStandCivilActions
		{
			PlayerCrouch = "AmovPknlMwlkSoptWbinDl_non";
			up = "AmovPknlMwlkSoptWbinDl_non";
		};
		class BinocStandCivilActionsWlkR: BinocStandCivilActions
		{
			PlayerCrouch = "AmovPknlMwlkSoptWbinDr_non";
			up = "AmovPknlMwlkSoptWbinDr_non";
		};
		class BinocStandLnrActions: LauncherStandActions
		{
			AdjustB = "";
			AdjustF = "";
			AdjustL = "";
			AdjustR = "";
			binocOn = "";
			default = "AwopPercMstpSoptWbinDnon_Lnr";
			Diary = "";
			down = "AwopPpneMstpSoptWbinDnon_Lnr";
			EvasiveRight = "";
			FastB = "AmovPercMrunSnonWbinDb_Lnr";
			FastF = "AmovPercMevaSnonWbinDf_Lnr";
			FastL = "AmovPercMrunSnonWbinDl_Lnr";
			FastLB = "AmovPercMrunSnonWbinDbl_Lnr";
			FastLF = "AmovPercMevaSnonWbinDfl_Lnr";
			FastR = "AmovPercMrunSnonWbinDr_Lnr";
			FastRB = "AmovPercMrunSnonWbinDbr_Lnr";
			FastRF = "AmovPercMevaSnonWbinDfr_Lnr";
			Gear = "";
			gestureGo[] = {"GestureGoBStand", "Gesture"};
			GetOver = "";
			PlayerCrouch = "AwopPknlMstpSoptWbinDnon_Lnr";
			PlayerProne = "AwopPpneMstpSoptWbinDnon_Lnr";
			PlayerSlowB = "AmovPercMrunSnonWbinDb_Lnr";
			PlayerSlowF = "AmovPercMrunSnonWbinDf_Lnr";
			PlayerSlowL = "AmovPercMrunSnonWbinDl_Lnr";
			PlayerSlowLB = "AmovPercMrunSnonWbinDbl_Lnr";
			PlayerSlowLF = "AmovPercMrunSnonWbinDfl_Lnr";
			PlayerSlowR = "AmovPercMrunSnonWbinDr_Lnr";
			PlayerSlowRB = "AmovPercMrunSnonWbinDbr_Lnr";
			PlayerSlowRF = "AmovPercMrunSnonWbinDfr_Lnr";
			PlayerStand = "AwopPercMstpSoptWbinDnon_Lnr";
			PlayerTactB = "AmovPercMwlkSoptWbinDb_Lnr";
			PlayerTactF = "AmovPercMwlkSoptWbinDf_Lnr";
			PlayerTactL = "AmovPercMwlkSoptWbinDl_Lnr";
			PlayerTactLB = "AmovPercMwlkSoptWbinDbl_Lnr";
			PlayerTactLF = "AmovPercMwlkSoptWbinDfl_Lnr";
			PlayerTactR = "AmovPercMwlkSoptWbinDr_Lnr";
			PlayerTactRB = "AmovPercMwlkSoptWbinDbr_Lnr";
			PlayerTactRF = "AmovPercMwlkSoptWbinDfr_Lnr";
			PlayerWalkB = "AmovPercMwlkSoptWbinDb_Lnr";
			PlayerWalkF = "AmovPercMwlkSoptWbinDf_Lnr";
			PlayerWalkL = "AmovPercMwlkSoptWbinDl_Lnr";
			PlayerWalkLB = "AmovPercMwlkSoptWbinDbl_Lnr";
			PlayerWalkLF = "AmovPercMwlkSoptWbinDfl_Lnr";
			PlayerWalkR = "AmovPercMwlkSoptWbinDr_Lnr";
			PlayerWalkRB = "AmovPercMwlkSoptWbinDbr_Lnr";
			PlayerWalkRF = "AmovPercMwlkSoptWbinDfr_Lnr";
			SlowB = "AmovPercMrunSnonWbinDb_Lnr";
			SlowF = "AmovPercMrunSnonWbinDf_Lnr";
			SlowL = "AmovPercMrunSnonWbinDl_Lnr";
			SlowLB = "AmovPercMrunSnonWbinDbl_Lnr";
			SlowLF = "AmovPercMrunSnonWbinDfl_Lnr";
			SlowR = "AmovPercMrunSnonWbinDr_Lnr";
			SlowRB = "AmovPercMrunSnonWbinDbr_Lnr";
			SlowRF = "AmovPercMrunSnonWbinDfr_Lnr";
			stop = "AwopPercMstpSoptWbinDnon_Lnr";
			stopRelaxed = "AwopPercMstpSoptWbinDnon_Lnr";
			TactB = "AmovPercMwlkSoptWbinDb_Lnr";
			TactF = "AmovPercMwlkSoptWbinDf_Lnr";
			TactL = "AmovPercMwlkSoptWbinDl_Lnr";
			TactLB = "AmovPercMwlkSoptWbinDbl_Lnr";
			TactLF = "AmovPercMwlkSoptWbinDfl_Lnr";
			TactR = "AmovPercMwlkSoptWbinDr_Lnr";
			TactRB = "AmovPercMwlkSoptWbinDbr_Lnr";
			TactRF = "AmovPercMwlkSoptWbinDfr_Lnr";
			TurnL = "AwopPercMstpSoptWbinDnon_Lnr_turnL";
			TurnLRelaxed = "AwopPercMstpSoptWbinDnon_Lnr_turnL";
			TurnR = "AwopPercMstpSoptWbinDnon_Lnr_turnR";
			TurnRRelaxed = "AwopPercMstpSoptWbinDnon_Lnr_turnR";
			up = "AwopPknlMstpSoptWbinDnon_Lnr";
			upDegree = "ManPosBinocStand";
			WalkB = "AmovPercMwlkSoptWbinDb_Lnr";
			WalkF = "AmovPercMwlkSoptWbinDf_Lnr";
			WalkL = "AmovPercMwlkSoptWbinDl_Lnr";
			WalkLB = "AmovPercMwlkSoptWbinDbl_Lnr";
			WalkLF = "AmovPercMwlkSoptWbinDfl_Lnr";
			WalkR = "AmovPercMwlkSoptWbinDr_Lnr";
			WalkRB = "AmovPercMwlkSoptWbinDbr_Lnr";
			WalkRF = "AmovPercMwlkSoptWbinDfr_Lnr";
			WeaponOff = "AmovPercMstpSrasWlnrDnon";
		};
		class BinocStandLnrActionsEvasiveF: BinocStandLnrActions
		{
			PlayerCrouch = "AmovPknlMevaSnonWbinDf_Lnr";
			up = "AmovPknlMevaSnonWbinDf_Lnr";
		};
		class BinocStandLnrActionsEvasiveFL: BinocStandLnrActions
		{
			PlayerCrouch = "AmovPknlMevaSnonWbinDfl_Lnr";
			up = "AmovPknlMevaSnonWbinDfl_Lnr";
		};
		class BinocStandLnrActionsEvasiveFR: BinocStandLnrActions
		{
			PlayerCrouch = "AmovPknlMevaSnonWbinDfr_Lnr";
			up = "AmovPknlMevaSnonWbinDfr_Lnr";
		};
		class BinocStandLnrActionsRunB: BinocStandLnrActions
		{
			PlayerCrouch = "AmovPknlMRunSnonWbinDb_Lnr";
			up = "AmovPknlMRunSnonWbinDB_Lnr";
		};
		class BinocStandLnrActionsRunBL: BinocStandLnrActions
		{
			PlayerCrouch = "AmovPknlMRunSnonWbinDbl_Lnr";
			up = "AmovPknlMRunSnonWbinDbl_Lnr";
		};
		class BinocStandLnrActionsRunBR: BinocStandLnrActions
		{
			PlayerCrouch = "AmovPknlMRunSnonWbinDbr_Lnr";
			up = "AmovPknlMRunSnonWbinDbr_Lnr";
		};
		class BinocStandLnrActionsRunF: BinocStandLnrActions
		{
			PlayerCrouch = "AmovPknlMRunSnonWbinDf_Lnr";
			up = "AmovPknlMRunSnonWbinDf_Lnr";
		};
		class BinocStandLnrActionsRunFL: BinocStandLnrActions
		{
			PlayerCrouch = "AmovPknlMRunSnonWbinDfl_Lnr";
			up = "AmovPknlMRunSnonWbinDfl_Lnr";
		};
		class BinocStandLnrActionsRunFR: BinocStandLnrActions
		{
			PlayerCrouch = "AmovPknlMRunSnonWbinDfr_Lnr";
			up = "AmovPknlMRunSnonWbinDfr_Lnr";
		};
		class BinocStandLnrActionsRunL: BinocStandLnrActions
		{
			PlayerCrouch = "AmovPknlMRunSnonWbinDl_Lnr";
			up = "AmovPknlMRunSnonWbinDl_Lnr";
		};
		class BinocStandLnrActionsRunR: BinocStandLnrActions
		{
			PlayerCrouch = "AmovPknlMRunSnonWbinDr_Lnr";
			up = "AmovPknlMRunSnonWbinDr_Lnr";
		};
		class BinocStandLnrActionsWlkB: BinocStandLnrActions
		{
			PlayerCrouch = "AmovPknlMwlkSoptWbinDb_Lnr";
			up = "AmovPknlMwlkSoptWbinDB_Lnr";
		};
		class BinocStandLnrActionsWlkBL: BinocStandLnrActions
		{
			PlayerCrouch = "AmovPknlMwlkSoptWbinDbl_Lnr";
			up = "AmovPknlMwlkSoptWbinDbl_Lnr";
		};
		class BinocStandLnrActionsWlkBR: BinocStandLnrActions
		{
			PlayerCrouch = "AmovPknlMwlkSoptWbinDbr_Lnr";
			up = "AmovPknlMwlkSoptWbinDbr_Lnr";
		};
		class BinocStandLnrActionsWlkF: BinocStandLnrActions
		{
			PlayerCrouch = "AmovPknlMwlkSoptWbinDf_Lnr";
			up = "AmovPknlMwlkSoptWbinDf_Lnr";
		};
		class BinocStandLnrActionsWlkFL: BinocStandLnrActions
		{
			PlayerCrouch = "AmovPknlMwlkSoptWbinDfl_Lnr";
			up = "AmovPknlMwlkSoptWbinDfl_Lnr";
		};
		class BinocStandLnrActionsWlkFR: BinocStandLnrActions
		{
			PlayerCrouch = "AmovPknlMwlkSoptWbinDfr_Lnr";
			up = "AmovPknlMwlkSoptWbinDfr_Lnr";
		};
		class BinocStandLnrActionsWlkL: BinocStandLnrActions
		{
			PlayerCrouch = "AmovPknlMwlkSoptWbinDl_Lnr";
			up = "AmovPknlMwlkSoptWbinDl_Lnr";
		};
		class BinocStandLnrActionsWlkR: BinocStandLnrActions
		{
			PlayerCrouch = "AmovPknlMwlkSoptWbinDr_Lnr";
			up = "AmovPknlMwlkSoptWbinDr_Lnr";
		};
		class BinocStandPstActions: PistolStandActions
		{
			AdjustB = "";
			AdjustF = "";
			AdjustL = "";
			AdjustR = "";
			binocOn = "AwopPercMstpSoptWbinDnon_Pst";
			Crouch = "AwopPercMstpSoptWbinDnon_Pst";
			default = "AwopPercMstpSoptWbinDnon_Pst";
			Diary = "";
			down = "AwopPpneMstpSoptWbinDnon_Pst";
			EvasiveRight = "";
			FastB = "AmovPercMrunSnonWbinDb_Pst";
			FastF = "AmovPercMevaSnonWbinDf_Pst";
			FastL = "AmovPercMrunSnonWbinDl_Pst";
			FastLB = "AmovPercMrunSnonWbinDbl_Pst";
			FastLF = "AmovPercMevaSnonWbinDfl_Pst";
			FastR = "AmovPercMrunSnonWbinDr_Pst";
			FastRB = "AmovPercMrunSnonWbinDbr_Pst";
			FastRF = "AmovPercMevaSnonWbinDfr_Pst";
			Gear = "";
			gestureGo[] = {"GestureGoBStand", "Gesture"};
			GetOver = "";
			handGunOn = "AwopPercMstpSoptWbinDnon_Pst";
			PlayerCrouch = "AwopPknlMstpSoptWbinDnon_Pst";
			PlayerProne = "AwopPpneMstpSoptWbinDnon_Pst";
			PlayerSlowB = "AmovPercMrunSnonWbinDb_Pst";
			PlayerSlowF = "AmovPercMrunSnonWbinDf_Pst";
			PlayerSlowL = "AmovPercMrunSnonWbinDl_Pst";
			PlayerSlowLB = "AmovPercMrunSnonWbinDbl_Pst";
			PlayerSlowLF = "AmovPercMrunSnonWbinDfl_Pst";
			PlayerSlowR = "AmovPercMrunSnonWbinDr_Pst";
			PlayerSlowRB = "AmovPercMrunSnonWbinDbr_Pst";
			PlayerSlowRF = "AmovPercMrunSnonWbinDfr_Pst";
			PlayerStand = "AwopPercMstpSoptWbinDnon_Pst";
			PlayerTactB = "AmovPercMwlkSoptWbinDb_Pst";
			PlayerTactF = "AmovPercMwlkSoptWbinDf_Pst";
			PlayerTactL = "AmovPercMwlkSoptWbinDl_Pst";
			PlayerTactLB = "AmovPercMwlkSoptWbinDbl_Pst";
			PlayerTactLF = "AmovPercMwlkSoptWbinDfl_Pst";
			PlayerTactR = "AmovPercMwlkSoptWbinDr_Pst";
			PlayerTactRB = "AmovPercMwlkSoptWbinDbr_Pst";
			PlayerTactRF = "AmovPercMwlkSoptWbinDfr_Pst";
			PlayerWalkB = "AmovPercMwlkSoptWbinDb_Pst";
			PlayerWalkF = "AmovPercMwlkSoptWbinDf_Pst";
			PlayerWalkL = "AmovPercMwlkSoptWbinDl_Pst";
			PlayerWalkLB = "AmovPercMwlkSoptWbinDbl_Pst";
			PlayerWalkLF = "AmovPercMwlkSoptWbinDfl_Pst";
			PlayerWalkR = "AmovPercMwlkSoptWbinDr_Pst";
			PlayerWalkRB = "AmovPercMwlkSoptWbinDbr_Pst";
			PlayerWalkRF = "AmovPercMwlkSoptWbinDfr_Pst";
			SlowB = "AmovPercMrunSnonWbinDb_Pst";
			SlowF = "AmovPercMrunSnonWbinDf_Pst";
			SlowL = "AmovPercMrunSnonWbinDl_Pst";
			SlowLB = "AmovPercMrunSnonWbinDbl_Pst";
			SlowLF = "AmovPercMrunSnonWbinDfl_Pst";
			SlowR = "AmovPercMrunSnonWbinDr_Pst";
			SlowRB = "AmovPercMrunSnonWbinDbr_Pst";
			SlowRF = "AmovPercMrunSnonWbinDfr_Pst";
			Stand = "";
			stop = "AwopPercMstpSoptWbinDnon_Pst";
			stopRelaxed = "AwopPercMstpSoptWbinDnon_Pst";
			TactB = "AmovPercMwlkSoptWbinDb_Pst";
			TactF = "AmovPercMwlkSoptWbinDf_Pst";
			TactL = "AmovPercMwlkSoptWbinDl_Pst";
			TactLB = "AmovPercMwlkSoptWbinDbl_Pst";
			TactLF = "AmovPercMwlkSoptWbinDfl_Pst";
			TactR = "AmovPercMwlkSoptWbinDr_Pst";
			TactRB = "AmovPercMwlkSoptWbinDbr_Pst";
			TactRF = "AmovPercMwlkSoptWbinDfr_Pst";
			TurnL = "AwopPercMstpSoptWbinDnon_Pst_turnL";
			TurnLRelaxed = "AwopPercMstpSoptWbinDnon_Pst_turnL";
			TurnR = "AwopPercMstpSoptWbinDnon_Pst_turnR";
			TurnRRelaxed = "AwopPercMstpSoptWbinDnon_Pst_turnR";
			up = "AwopPknlMstpSoptWbinDnon_Pst";
			upDegree = "ManPosBinocStand";
			WalkB = "AmovPercMwlkSoptWbinDb_Pst";
			WalkF = "AmovPercMwlkSoptWbinDf_Pst";
			WalkL = "AmovPercMwlkSoptWbinDl_Pst";
			WalkLB = "AmovPercMwlkSoptWbinDbl_Pst";
			WalkLF = "AmovPercMwlkSoptWbinDfl_Pst";
			WalkR = "AmovPercMwlkSoptWbinDr_Pst";
			WalkRB = "AmovPercMwlkSoptWbinDbr_Pst";
			WalkRF = "AmovPercMwlkSoptWbinDfr_Pst";
		};
		class BinocStandPstActionsEvasiveF: BinocStandPstActions
		{
			PlayerCrouch = "AmovPknlMevaSnonWbinDf_Pst";
			up = "AmovPknlMevaSnonWbinDf_Pst";
		};
		class BinocStandPstActionsEvasiveFL: BinocStandPstActions
		{
			PlayerCrouch = "AmovPknlMevaSnonWbinDfl_Pst";
			up = "AmovPknlMevaSnonWbinDfl_Pst";
		};
		class BinocStandPstActionsEvasiveFR: BinocStandPstActions
		{
			PlayerCrouch = "AmovPknlMevaSnonWbinDfr_Pst";
			up = "AmovPknlMevaSnonWbinDfr_Pst";
		};
		class BinocStandPstActionsRunB: BinocStandPstActions
		{
			PlayerCrouch = "AmovPknlMRunSnonWbinDb_Pst";
			up = "AmovPknlMRunSnonWbinDB_Pst";
		};
		class BinocStandPstActionsRunBL: BinocStandPstActions
		{
			PlayerCrouch = "AmovPknlMRunSnonWbinDbl_Pst";
			up = "AmovPknlMRunSnonWbinDbl_Pst";
		};
		class BinocStandPstActionsRunBR: BinocStandPstActions
		{
			PlayerCrouch = "AmovPknlMRunSnonWbinDbr_Pst";
			up = "AmovPknlMRunSnonWbinDbr_Pst";
		};
		class BinocStandPstActionsRunF: BinocStandPstActions
		{
			PlayerCrouch = "AmovPknlMRunSnonWbinDf_Pst";
			up = "AmovPknlMRunSnonWbinDf_Pst";
		};
		class BinocStandPstActionsRunFL: BinocStandPstActions
		{
			PlayerCrouch = "AmovPknlMRunSnonWbinDfl_Pst";
			up = "AmovPknlMRunSnonWbinDfl_Pst";
		};
		class BinocStandPstActionsRunFR: BinocStandPstActions
		{
			PlayerCrouch = "AmovPknlMRunSnonWbinDfr_Pst";
			up = "AmovPknlMRunSnonWbinDfr_Pst";
		};
		class BinocStandPstActionsRunL: BinocStandPstActions
		{
			PlayerCrouch = "AmovPknlMRunSnonWbinDl_Pst";
			up = "AmovPknlMRunSnonWbinDl_Pst";
		};
		class BinocStandPstActionsRunR: BinocStandPstActions
		{
			PlayerCrouch = "AmovPknlMRunSnonWbinDr_Pst";
			up = "AmovPknlMRunSnonWbinDr_Pst";
		};
		class BinocStandPstActionsWlkB: BinocStandPstActions
		{
			PlayerCrouch = "AmovPknlMwlkSoptWbinDb_Pst";
			up = "AmovPknlMwlkSoptWbinDB_Pst";
		};
		class BinocStandPstActionsWlkBL: BinocStandPstActions
		{
			PlayerCrouch = "AmovPknlMwlkSoptWbinDbl_Pst";
			up = "AmovPknlMwlkSoptWbinDbl_Pst";
		};
		class BinocStandPstActionsWlkBR: BinocStandPstActions
		{
			PlayerCrouch = "AmovPknlMwlkSoptWbinDbr_Pst";
			up = "AmovPknlMwlkSoptWbinDbr_Pst";
		};
		class BinocStandPstActionsWlkF: BinocStandPstActions
		{
			PlayerCrouch = "AmovPknlMwlkSoptWbinDf_Pst";
			up = "AmovPknlMwlkSoptWbinDf_Pst";
		};
		class BinocStandPstActionsWlkFL: BinocStandPstActions
		{
			PlayerCrouch = "AmovPknlMwlkSoptWbinDfl_Pst";
			up = "AmovPknlMwlkSoptWbinDfl_Pst";
		};
		class BinocStandPstActionsWlkFR: BinocStandPstActions
		{
			PlayerCrouch = "AmovPknlMwlkSoptWbinDfr_Pst";
			up = "AmovPknlMwlkSoptWbinDfr_Pst";
		};
		class BinocStandPstActionsWlkL: BinocStandPstActions
		{
			PlayerCrouch = "AmovPknlMwlkSoptWbinDl_Pst";
			up = "AmovPknlMwlkSoptWbinDl_Pst";
		};
		class BinocStandPstActionsWlkR: BinocStandPstActions
		{
			PlayerCrouch = "AmovPknlMwlkSoptWbinDr_Pst";
			up = "AmovPknlMwlkSoptWbinDr_Pst";
		};
		class BinocStandRflActions: RifleStandActions
		{
			AdjustB = "";
			AdjustF = "";
			AdjustL = "";
			AdjustR = "";
			binocOn = "";
			default = "AwopPercMstpSoptWbinDnon_rfl";
			Diary = "";
			down = "AwopPpneMstpSoptWbinDnon_rfl";
			EvasiveRight = "";
			FastB = "AmovPercMrunSnonWbinDb_rfl";
			FastF = "AmovPercMevaSnonWbinDf_rfl";
			FastL = "AmovPercMrunSnonWbinDl_rfl";
			FastLB = "AmovPercMrunSnonWbinDbl_rfl";
			FastLF = "AmovPercMevaSnonWbinDfl_rfl";
			FastR = "AmovPercMrunSnonWbinDr_rfl";
			FastRB = "AmovPercMrunSnonWbinDbr_rfl";
			FastRF = "AmovPercMevaSnonWbinDfr_rfl";
			Gear = "";
			gestureGo[] = {"GestureGoBStand", "Gesture"};
			GetOver = "";
			PlayerCrouch = "AwopPknlMstpSoptWbinDnon_rfl";
			PlayerProne = "AwopPpneMstpSoptWbinDnon_rfl";
			PlayerSlowB = "AmovPercMrunSnonWbinDb_rfl";
			PlayerSlowF = "AmovPercMrunSnonWbinDf_rfl";
			PlayerSlowL = "AmovPercMrunSnonWbinDl_rfl";
			PlayerSlowLB = "AmovPercMrunSnonWbinDbl_rfl";
			PlayerSlowLF = "AmovPercMrunSnonWbinDfl_rfl";
			PlayerSlowR = "AmovPercMrunSnonWbinDr_rfl";
			PlayerSlowRB = "AmovPercMrunSnonWbinDbr_rfl";
			PlayerSlowRF = "AmovPercMrunSnonWbinDfr_rfl";
			PlayerStand = "AwopPercMstpSoptWbinDnon_rfl";
			PlayerTactB = "AmovPercMwlkSoptWbinDb_rfl";
			PlayerTactF = "AmovPercMwlkSoptWbinDf_rfl";
			PlayerTactL = "AmovPercMwlkSoptWbinDl_rfl";
			PlayerTactLB = "AmovPercMwlkSoptWbinDbl_rfl";
			PlayerTactLF = "AmovPercMwlkSoptWbinDfl_rfl";
			PlayerTactR = "AmovPercMwlkSoptWbinDr_rfl";
			PlayerTactRB = "AmovPercMwlkSoptWbinDbr_rfl";
			PlayerTactRF = "AmovPercMwlkSoptWbinDfr_rfl";
			PlayerWalkB = "AmovPercMwlkSoptWbinDb_rfl";
			PlayerWalkF = "AmovPercMwlkSoptWbinDf_rfl";
			PlayerWalkL = "AmovPercMwlkSoptWbinDl_rfl";
			PlayerWalkLB = "AmovPercMwlkSoptWbinDbl_rfl";
			PlayerWalkLF = "AmovPercMwlkSoptWbinDfl_rfl";
			PlayerWalkR = "AmovPercMwlkSoptWbinDr_rfl";
			PlayerWalkRB = "AmovPercMwlkSoptWbinDbr_rfl";
			PlayerWalkRF = "AmovPercMwlkSoptWbinDfr_rfl";
			SlowB = "AmovPercMrunSnonWbinDb_rfl";
			SlowF = "AmovPercMrunSnonWbinDf_rfl";
			SlowL = "AmovPercMrunSnonWbinDl_rfl";
			SlowLB = "AmovPercMrunSnonWbinDbl_rfl";
			SlowLF = "AmovPercMrunSnonWbinDfl_rfl";
			SlowR = "AmovPercMrunSnonWbinDr_rfl";
			SlowRB = "AmovPercMrunSnonWbinDbr_rfl";
			SlowRF = "AmovPercMrunSnonWbinDfr_rfl";
			stop = "AwopPercMstpSoptWbinDnon_rfl";
			stopRelaxed = "AwopPercMstpSoptWbinDnon_rfl";
			TactB = "AmovPercMwlkSoptWbinDb_rfl";
			TactF = "AmovPercMwlkSoptWbinDf_rfl";
			TactL = "AmovPercMwlkSoptWbinDl_rfl";
			TactLB = "AmovPercMwlkSoptWbinDbl_rfl";
			TactLF = "AmovPercMwlkSoptWbinDfl_rfl";
			TactR = "AmovPercMwlkSoptWbinDr_rfl";
			TactRB = "AmovPercMwlkSoptWbinDbr_rfl";
			TactRF = "AmovPercMwlkSoptWbinDfr_rfl";
			TurnL = "AwopPercMstpSoptWbinDnon_rfl_turnL";
			TurnLRelaxed = "AwopPercMstpSoptWbinDnon_rfl_turnL";
			TurnR = "AwopPercMstpSoptWbinDnon_rfl_turnR";
			TurnRRelaxed = "AwopPercMstpSoptWbinDnon_rfl_turnR";
			up = "AwopPknlMstpSoptWbinDnon_rfl";
			upDegree = "ManPosBinocStand";
			WalkB = "AmovPercMwlkSoptWbinDb_rfl";
			WalkF = "AmovPercMwlkSoptWbinDf_rfl";
			WalkL = "AmovPercMwlkSoptWbinDl_rfl";
			WalkLB = "AmovPercMwlkSoptWbinDbl_rfl";
			WalkLF = "AmovPercMwlkSoptWbinDfl_rfl";
			WalkR = "AmovPercMwlkSoptWbinDr_rfl";
			WalkRB = "AmovPercMwlkSoptWbinDbr_rfl";
			WalkRF = "AmovPercMwlkSoptWbinDfr_rfl";
		};
		class BinocStandRflActionsEvasiveF: BinocStandRflActions
		{
			PlayerCrouch = "AmovPknlMevaSnonWbinDf_rfl";
			up = "AmovPknlMevaSnonWbinDf_rfl";
		};
		class BinocStandRflActionsEvasiveFL: BinocStandRflActions
		{
			PlayerCrouch = "AmovPknlMevaSnonWbinDfl_rfl";
			up = "AmovPknlMevaSnonWbinDfl_rfl";
		};
		class BinocStandRflActionsEvasiveFR: BinocStandRflActions
		{
			PlayerCrouch = "AmovPknlMevaSnonWbinDfr_rfl";
			up = "AmovPknlMevaSnonWbinDfr_rfl";
		};
		class BinocStandRflActionsRunB: BinocStandRflActions
		{
			PlayerCrouch = "AmovPknlMRunSnonWbinDb_rfl";
			up = "AmovPknlMRunSnonWbinDB_rfl";
		};
		class BinocStandRflActionsRunBL: BinocStandRflActions
		{
			PlayerCrouch = "AmovPknlMRunSnonWbinDbl_rfl";
			up = "AmovPknlMRunSnonWbinDbl_rfl";
		};
		class BinocStandRflActionsRunBR: BinocStandRflActions
		{
			PlayerCrouch = "AmovPknlMRunSnonWbinDbr_rfl";
			up = "AmovPknlMRunSnonWbinDbr_rfl";
		};
		class BinocStandRflActionsRunF: BinocStandRflActions
		{
			PlayerCrouch = "AmovPknlMRunSnonWbinDf_rfl";
			up = "AmovPknlMRunSnonWbinDf_rfl";
		};
		class BinocStandRflActionsRunFL: BinocStandRflActions
		{
			PlayerCrouch = "AmovPknlMRunSnonWbinDfl_rfl";
			up = "AmovPknlMRunSnonWbinDfl_rfl";
		};
		class BinocStandRflActionsRunFR: BinocStandRflActions
		{
			PlayerCrouch = "AmovPknlMRunSnonWbinDfr_rfl";
			up = "AmovPknlMRunSnonWbinDfr_rfl";
		};
		class BinocStandRflActionsRunL: BinocStandRflActions
		{
			PlayerCrouch = "AmovPknlMRunSnonWbinDl_rfl";
			up = "AmovPknlMRunSnonWbinDl_rfl";
		};
		class BinocStandRflActionsRunR: BinocStandRflActions
		{
			PlayerCrouch = "AmovPknlMRunSnonWbinDr_rfl";
			up = "AmovPknlMRunSnonWbinDr_rfl";
		};
		class BinocStandRflActionsWlkB: BinocStandRflActions
		{
			PlayerCrouch = "AmovPknlMwlkSoptWbinDb_rfl";
			up = "AmovPknlMwlkSoptWbinDB_rfl";
		};
		class BinocStandRflActionsWlkBL: BinocStandRflActions
		{
			PlayerCrouch = "AmovPknlMwlkSoptWbinDbl_rfl";
			up = "AmovPknlMwlkSoptWbinDbl_rfl";
		};
		class BinocStandRflActionsWlkBR: BinocStandRflActions
		{
			PlayerCrouch = "AmovPknlMwlkSoptWbinDbr_rfl";
			up = "AmovPknlMwlkSoptWbinDbr_rfl";
		};
		class BinocStandRflActionsWlkF: BinocStandRflActions
		{
			PlayerCrouch = "AmovPknlMwlkSoptWbinDf_rfl";
			up = "AmovPknlMwlkSoptWbinDf_rfl";
		};
		class BinocStandRflActionsWlkFL: BinocStandRflActions
		{
			PlayerCrouch = "AmovPknlMwlkSoptWbinDfl_rfl";
			up = "AmovPknlMwlkSoptWbinDfl_rfl";
		};
		class BinocStandRflActionsWlkFR: BinocStandRflActions
		{
			PlayerCrouch = "AmovPknlMwlkSoptWbinDfr_rfl";
			up = "AmovPknlMwlkSoptWbinDfr_rfl";
		};
		class BinocStandRflActionsWlkL: BinocStandRflActions
		{
			PlayerCrouch = "AmovPknlMwlkSoptWbinDl_rfl";
			up = "AmovPknlMwlkSoptWbinDl_rfl";
		};
		class BinocStandRflActionsWlkR: BinocStandRflActions
		{
			PlayerCrouch = "AmovPknlMwlkSoptWbinDr_rfl";
			up = "AmovPknlMwlkSoptWbinDr_rfl";
		};
		class BottomDivingActions: NoActions
		{
			BottomDive = "AbdvPercMstpSnonWnonDnon";
			default = "AbdvPercMstpSnonWnonDnon";
			FastB = "AbdvPercMrunSnonWnonDb";
			FastF = "AbdvPercMsprSnonWnonDf";
			FastL = "AbdvPercMrunSnonWnonDl";
			FastLB = "AbdvPercMrunSnonWnonDbl";
			FastLF = "AbdvPercMrunSnonWnonDfl";
			FastR = "AbdvPercMrunSnonWnonDr";
			FastRB = "AbdvPercMrunSnonWnonDbr";
			FastRF = "AbdvPercMrunSnonWnonDfr";
			GetInBoat = "AmovPercMstpSnonWnonDnon_AcrgPknlMstpSnonWnonDnon_getInHigh";
			GetInSDV = "AbdvPercMstpSnonWnonDnon_GetInSDV";
			GetOutBoat = "AcrgPknlMstpSnonWnonDnon_AmovPercMstpSrasWrflDnon_getOutHigh";
			GetOutSDV = "AbdvPercMstpSnonWnonDnon_GetOutSDV";
			limitFast = 3.2;
			LimpB = "AbdvPercMwlkSnonWnonDb";
			LimpF = "AbdvPercMwlkSnonWnonDf";
			LimpL = "AbdvPercMwlkSnonWnonDl";
			LimpLB = "AbdvPercMwlkSnonWnonDbl";
			LimpLF = "AbdvPercMwlkSnonWnonDfl";
			LimpR = "AbdvPercMwlkSnonWnonDr";
			LimpRB = "AbdvPercMwlkSnonWnonDbr";
			LimpRF = "AbdvPercMwlkSnonWnonDfr";
			PlayerSlowB = "AbdvPercMrunSnonWnonDb";
			PlayerSlowF = "AbdvPercMrunSnonWnonDf";
			PlayerSlowL = "AbdvPercMrunSnonWnonDl";
			PlayerSlowLB = "AbdvPercMrunSnonWnonDbl";
			PlayerSlowLF = "AbdvPercMrunSnonWnonDfl";
			PlayerSlowR = "AbdvPercMrunSnonWnonDr";
			PlayerSlowRB = "AbdvPercMrunSnonWnonDbr";
			PlayerSlowRF = "AbdvPercMrunSnonWnonDfr";
			PlayerTactB = "AbdvPercMtacSnonWnonDb";
			PlayerTactF = "AbdvPercMtacSnonWnonDf";
			PlayerTactL = "AbdvPercMtacSnonWnonDl";
			PlayerTactLB = "AbdvPercMtacSnonWnonDbl";
			PlayerTactLF = "AbdvPercMtacSnonWnonDfl";
			PlayerTactR = "AbdvPercMtacSnonWnonDr";
			PlayerTactRB = "AbdvPercMtacSnonWnonDbr";
			PlayerTactRF = "AbdvPercMtacSnonWnonDfr";
			PlayerWalkB = "AbdvPercMwlkSnonWnonDb";
			PlayerWalkF = "AbdvPercMwlkSnonWnonDf";
			PlayerWalkL = "AbdvPercMwlkSnonWnonDl";
			PlayerWalkLB = "AbdvPercMwlkSnonWnonDbl";
			PlayerWalkLF = "AbdvPercMwlkSnonWnonDfl";
			PlayerWalkR = "AbdvPercMwlkSnonWnonDr";
			PlayerWalkRB = "AbdvPercMwlkSnonWnonDbr";
			PlayerWalkRF = "AbdvPercMwlkSnonWnonDfr";
			PrimaryWeapon = "AbdvPercMstpSnonWrflDnon";
			putDown = "AbdvPercMstpSnonWnonDnon_AbdvPercMstpSnonWnonDnon_putDown";
			relax = "AbdvPercMstpSnonWnonDnon_relax";
			SlowB = "AbdvPercMrunSnonWnonDb";
			SlowF = "AbdvPercMrunSnonWnonDf";
			SlowL = "AbdvPercMrunSnonWnonDl";
			SlowLB = "AbdvPercMrunSnonWnonDbl";
			SlowLF = "AbdvPercMrunSnonWnonDfl";
			SlowR = "AbdvPercMrunSnonWnonDr";
			SlowRB = "AbdvPercMrunSnonWnonDbr";
			SlowRF = "AbdvPercMrunSnonWnonDfr";
			stop = "AbdvPercMstpSnonWnonDnon";
			stopDive = "AmovPercMstpSnonWnonDnon";
			stopRelaxed = "AbdvPercMstpSnonWnonDnon";
			SurfaceDive = "AsdvPercMstpSnonWnonDnon";
			swimDown = "AbdvPercMstpSnonWnonDnon_goDown";
			swimUp = "AbdvPercMstpSnonWnonDnon_goup";
			TactB = "AbdvPercMtacSnonWnonDb";
			TactF = "AbdvPercMtacSnonWnonDf";
			TactL = "AbdvPercMtacSnonWnonDl";
			TactLB = "AbdvPercMtacSnonWnonDbl";
			TactLF = "AbdvPercMtacSnonWnonDfl";
			TactR = "AbdvPercMtacSnonWnonDr";
			TactRB = "AbdvPercMtacSnonWnonDbr";
			TactRF = "AbdvPercMtacSnonWnonDfr";
			turnL = "AbdvPercMstpSnonWnonDnon_turnL";
			turnR = "AbdvPercMstpSnonWnonDnon_turnR";
			upDegree = "ManPosBottomDiving";
			WalkB = "AbdvPercMwlkSnonWnonDb";
			WalkF = "AbdvPercMwlkSnonWnonDf";
			WalkL = "AbdvPercMwlkSnonWnonDl";
			WalkLB = "AbdvPercMwlkSnonWnonDbl";
			WalkLF = "AbdvPercMwlkSnonWnonDfl";
			WalkR = "AbdvPercMwlkSnonWnonDr";
			WalkRB = "AbdvPercMwlkSnonWnonDbr";
			WalkRF = "AbdvPercMwlkSnonWnonDfr";
		};
		class BottomDivingActionsFastF: BottomDivingActions
		{
			BottomDive = "AbdvPercMsprSnonWnonDf";
			StartDive = "AdvePercMsprSnonWnonDf";
			SurfaceDive = "AsdvPercMsprSnonWnonDf";
		};
		class BottomDivingActionsGoingOut: BottomDivingActions
		{
			Civil = "AmovPercMstpSnonWnonDnon";
			Combat = "AmovPercMstpSrasWrflDnon";
			Default = "AmovPercMstpSnonWnonDnon";
			Stop = "AmovPercMstpSrasWrflDnon";
			upDegree = "ManPosGoingFromWater";
		};
		class BottomDivingActionsRunB: BottomDivingActions
		{
			BottomDive = "AbdvPercMrunSnonWnonDb";
			StartDive = "AdvePercMrunSnonWnonDb";
			SurfaceDive = "AsdvPercMrunSnonWnonDb";
		};
		class BottomDivingActionsRunBL: BottomDivingActions
		{
			BottomDive = "AbdvPercMrunSnonWnonDbl";
			StartDive = "AdvePercMrunSnonWnonDbl";
			SurfaceDive = "AsdvPercMrunSnonWnonDbl";
		};
		class BottomDivingActionsRunBR: BottomDivingActions
		{
			BottomDive = "AbdvPercMrunSnonWnonDbr";
			StartDive = "AdvePercMrunSnonWnonDbr";
			SurfaceDive = "AsdvPercMrunSnonWnonDbr";
		};
		class BottomDivingActionsRunF: BottomDivingActions
		{
			BottomDive = "AbdvPercMrunSnonWnonDf";
			SurfaceDive = "AsdvPercMrunSnonWnonDf";
		};
		class BottomDivingActionsRunFL: BottomDivingActions
		{
			BottomDive = "AbdvPercMrunSnonWnonDfl";
			StartDive = "AdvePercMrunSnonWnonDfl";
			SurfaceDive = "AsdvPercMrunSnonWnonDfl";
		};
		class BottomDivingActionsRunFR: BottomDivingActions
		{
			BottomDive = "AbdvPercMrunSnonWnonDfr";
			StartDive = "AdvePercMrunSnonWnonDfr";
			SurfaceDive = "AsdvPercMrunSnonWnonDfr";
		};
		class BottomDivingActionsRunL: BottomDivingActions
		{
			BottomDive = "AbdvPercMrunSnonWnonDl";
			StartDive = "AdvePercMrunSnonWnonDl";
			SurfaceDive = "AsdvPercMrunSnonWnonDl";
		};
		class BottomDivingActionsRunR: BottomDivingActions
		{
			BottomDive = "AbdvPercMrunSnonWnonDr";
			StartDive = "AdvePercMrunSnonWnonDr";
			SurfaceDive = "AsdvPercMrunSnonWnonDr";
		};
		class BottomDivingActionsTacB: BottomDivingActions
		{
			BottomDive = "AbdvPercMtacSnonWnonDb";
			StartDive = "AdvePercMtacSnonWnonDb";
			SurfaceDive = "AsdvPercMtacSnonWnonDb";
		};
		class BottomDivingActionsTacBL: BottomDivingActions
		{
			BottomDive = "AbdvPercMtacSnonWnonDbl";
			StartDive = "AdvePercMtacSnonWnonDbl";
			SurfaceDive = "AsdvPercMtacSnonWnonDbl";
		};
		class BottomDivingActionsTacBR: BottomDivingActions
		{
			BottomDive = "AbdvPercMtacSnonWnonDbr";
			StartDive = "AdvePercMtacSnonWnonDbr";
			SurfaceDive = "AsdvPercMtacSnonWnonDbr";
		};
		class BottomDivingActionsTacF: BottomDivingActions
		{
			BottomDive = "AbdvPercMtacSnonWnonDf";
			StartDive = "AdvePercMtacSnonWnonDf";
			SurfaceDive = "AsdvPercMtacSnonWnonDf";
		};
		class BottomDivingActionsTacFL: BottomDivingActions
		{
			BottomDive = "AbdvPercMtacSnonWnonDfl";
			StartDive = "AdvePercMtacSnonWnonDfl";
			SurfaceDive = "AsdvPercMtacSnonWnonDfl";
		};
		class BottomDivingActionsTacFR: BottomDivingActions
		{
			BottomDive = "AbdvPercMtacSnonWnonDfr";
			StartDive = "AdvePercMtacSnonWnonDfr";
			SurfaceDive = "AsdvPercMtacSnonWnonDfr";
		};
		class BottomDivingActionsTacL: BottomDivingActions
		{
			BottomDive = "AbdvPercMtacSnonWnonDl";
			StartDive = "AdvePercMtacSnonWnonDl";
			SurfaceDive = "AsdvPercMtacSnonWnonDl";
		};
		class BottomDivingActionsTacR: BottomDivingActions
		{
			BottomDive = "AbdvPercMtacSnonWnonDr";
			StartDive = "AdvePercMtacSnonWnonDr";
			SurfaceDive = "AsdvPercMtacSnonWnonDr";
		};
		class BottomDivingActionsWlkB: BottomDivingActions
		{
			BottomDive = "AbdvPercMwlkSnonWnonDb";
			StartDive = "AdvePercMwlkSnonWnonDb";
			SurfaceDive = "AsdvPercMwlkSnonWnonDb";
		};
		class BottomDivingActionsWlkBL: BottomDivingActions
		{
			BottomDive = "AbdvPercMwlkSnonWnonDbl";
			StartDive = "AdvePercMwlkSnonWnonDbl";
			SurfaceDive = "AsdvPercMwlkSnonWnonDbl";
		};
		class BottomDivingActionsWlkBR: BottomDivingActions
		{
			BottomDive = "AbdvPercMwlkSnonWnonDbr";
			StartDive = "AdvePercMwlkSnonWnonDbr";
			SurfaceDive = "AsdvPercMwlkSnonWnonDbr";
		};
		class BottomDivingActionsWlkF: BottomDivingActions
		{
			BottomDive = "AbdvPercMwlkSnonWnonDf";
			StartDive = "AdvePercMwlkSnonWnonDf";
			SurfaceDive = "AsdvPercMwlkSnonWnonDf";
		};
		class BottomDivingActionsWlkFL: BottomDivingActions
		{
			BottomDive = "AbdvPercMwlkSnonWnonDfl";
			StartDive = "AdvePercMwlkSnonWnonDfl";
			SurfaceDive = "AsdvPercMwlkSnonWnonDfl";
		};
		class BottomDivingActionsWlkFR: BottomDivingActions
		{
			BottomDive = "AbdvPercMwlkSnonWnonDfr";
			StartDive = "AdvePercMwlkSnonWnonDfr";
			SurfaceDive = "AsdvPercMwlkSnonWnonDfr";
		};
		class BottomDivingActionsWlkL: BottomDivingActions
		{
			BottomDive = "AbdvPercMwlkSnonWnonDl";
			StartDive = "AdvePercMwlkSnonWnonDl";
			SurfaceDive = "AsdvPercMwlkSnonWnonDl";
		};
		class BottomDivingActionsWlkR: BottomDivingActions
		{
			BottomDive = "AbdvPercMwlkSnonWnonDr";
			StartDive = "AdvePercMwlkSnonWnonDr";
			SurfaceDive = "AsdvPercMwlkSnonWnonDr";
		};
		class BottomDivingRifleActions: BottomDivingActions
		{
			BottomDive = "AbdvPercMstpSnonWrflDnon";
			default = "AbdvPercMstpSnonWrflDnon";
			FastB = "AbdvPercMrunSnonWrflDb";
			FastF = "AbdvPercMsprSnonWrflDf";
			FastL = "AbdvPercMrunSnonWrflDl";
			FastLB = "AbdvPercMrunSnonWrflDbl";
			FastLF = "AbdvPercMrunSnonWrflDfl";
			FastR = "AbdvPercMrunSnonWrflDr";
			FastRB = "AbdvPercMrunSnonWrflDbr";
			FastRF = "AbdvPercMrunSnonWrflDfr";
			GetInSDV = "AbdvPercMstpSnonWrflDnon_GetInSDV";
			GetOutSDV = "AbdvPercMstpSnonWrflDnon_GetOutSDV";
			LimpB = "AbdvPercMwlkSnonWrflDb";
			LimpF = "AbdvPercMwlkSnonWrflDf";
			LimpL = "AbdvPercMwlkSnonWrflDl";
			LimpLB = "AbdvPercMwlkSnonWrflDbl";
			LimpLF = "AbdvPercMwlkSnonWrflDfl";
			LimpR = "AbdvPercMwlkSnonWrflDr";
			LimpRB = "AbdvPercMwlkSnonWrflDbr";
			LimpRF = "AbdvPercMwlkSnonWrflDfr";
			PlayerSlowB = "AbdvPercMrunSnonWrflDb";
			PlayerSlowF = "AbdvPercMrunSnonWrflDf";
			PlayerSlowL = "AbdvPercMrunSnonWrflDl";
			PlayerSlowLB = "AbdvPercMrunSnonWrflDbl";
			PlayerSlowLF = "AbdvPercMrunSnonWrflDfl";
			PlayerSlowR = "AbdvPercMrunSnonWrflDr";
			PlayerSlowRB = "AbdvPercMrunSnonWrflDbr";
			PlayerSlowRF = "AbdvPercMrunSnonWrflDfr";
			PlayerTactB = "AbdvPercMtacSnonWrflDb";
			PlayerTactF = "AbdvPercMtacSnonWrflDf";
			PlayerTactL = "AbdvPercMtacSnonWrflDl";
			PlayerTactLB = "AbdvPercMtacSnonWrflDbl";
			PlayerTactLF = "AbdvPercMtacSnonWrflDfl";
			PlayerTactR = "AbdvPercMtacSnonWrflDr";
			PlayerTactRB = "AbdvPercMtacSnonWrflDbr";
			PlayerTactRF = "AbdvPercMtacSnonWrflDfr";
			PlayerWalkB = "AbdvPercMwlkSnonWrflDb";
			PlayerWalkF = "AbdvPercMwlkSnonWrflDf";
			PlayerWalkL = "AbdvPercMwlkSnonWrflDl";
			PlayerWalkLB = "AbdvPercMwlkSnonWrflDbl";
			PlayerWalkLF = "AbdvPercMwlkSnonWrflDfl";
			PlayerWalkR = "AbdvPercMwlkSnonWrflDr";
			PlayerWalkRB = "AbdvPercMwlkSnonWrflDbr";
			PlayerWalkRF = "AbdvPercMwlkSnonWrflDfr";
			putDown = "AbdvPercMstpSnonWrflDnon_AbdvPercMstpSnonWrflDnon_putDown";
			relax = "AbdvPercMstpSnonWrflDnon_relax";
			SlowB = "AbdvPercMrunSnonWrflDb";
			SlowF = "AbdvPercMrunSnonWrflDf";
			SlowL = "AbdvPercMrunSnonWrflDl";
			SlowLB = "AbdvPercMrunSnonWrflDbl";
			SlowLF = "AbdvPercMrunSnonWrflDfl";
			SlowR = "AbdvPercMrunSnonWrflDr";
			SlowRB = "AbdvPercMrunSnonWrflDbr";
			SlowRF = "AbdvPercMrunSnonWrflDfr";
			StartDive = "AdvePercMstpSnonWrflDnon";
			stop = "AbdvPercMstpSnonWrflDnon";
			stopDive = "AmovPercMstpSrasWrflDnon";
			stopRelaxed = "AbdvPercMstpSnonWrflDnon";
			SurfaceDive = "AsdvPercMstpSnonWrflDnon";
			swimDown = "AbdvPercMstpSnonWrflDnon_goDown";
			swimUp = "AbdvPercMstpSnonWrflDnon_goup";
			TactB = "AbdvPercMtacSnonWrflDb";
			TactF = "AbdvPercMtacSnonWrflDf";
			TactL = "AbdvPercMtacSnonWrflDl";
			TactLB = "AbdvPercMtacSnonWrflDbl";
			TactLF = "AbdvPercMtacSnonWrflDfl";
			TactR = "AbdvPercMtacSnonWrflDr";
			TactRB = "AbdvPercMtacSnonWrflDbr";
			TactRF = "AbdvPercMtacSnonWrflDfr";
			turnL = "AbdvPercMstpSnonWrflDnon_turnL";
			turnR = "AbdvPercMstpSnonWrflDnon_turnR";
			WalkB = "AbdvPercMwlkSnonWrflDb";
			WalkF = "AbdvPercMwlkSnonWrflDf";
			WalkL = "AbdvPercMwlkSnonWrflDl";
			WalkLB = "AbdvPercMwlkSnonWrflDbl";
			WalkLF = "AbdvPercMwlkSnonWrflDfl";
			WalkR = "AbdvPercMwlkSnonWrflDr";
			WalkRB = "AbdvPercMwlkSnonWrflDbr";
			WalkRF = "AbdvPercMwlkSnonWrflDfr";
		};
		class BottomDivingRifleActionsFastF: BottomDivingRifleActions
		{
			BottomDive = "AbdvPercMsprSnonWrflDf";
			StartDive = "AdvePercMsprSnonWrflDf";
			SurfaceDive = "AsdvPercMsprSnonWrflDf";
		};
		class BottomDivingRifleActionsGoingOut: BottomDivingRifleActions
		{
			Combat = "AmovPercMstpSrasWrflDnon";
			Default = "AmovPercMstpSrasWrflDnon";
			Stop = "AmovPercMstpSrasWrflDnon";
			upDegree = "ManPosGoingFromWater";
		};
		class BottomDivingRifleActionsRunB: BottomDivingRifleActions
		{
			BottomDive = "AbdvPercMrunSnonWrflDb";
			StartDive = "AdvePercMrunSnonWrflDb";
			SurfaceDive = "AsdvPercMrunSnonWrflDb";
		};
		class BottomDivingRifleActionsRunBL: BottomDivingRifleActions
		{
			BottomDive = "AbdvPercMrunSnonWrflDbl";
			StartDive = "AdvePercMrunSnonWrflDbl";
			SurfaceDive = "AsdvPercMrunSnonWrflDbl";
		};
		class BottomDivingRifleActionsRunBR: BottomDivingRifleActions
		{
			BottomDive = "AbdvPercMrunSnonWrflDbr";
			StartDive = "AdvePercMrunSnonWrflDbr";
			SurfaceDive = "AsdvPercMrunSnonWrflDbr";
		};
		class BottomDivingRifleActionsRunF: BottomDivingRifleActions
		{
			BottomDive = "AbdvPercMrunSnonWrflDf";
			StartDive = "AdvePercMrunSnonWrflDf";
			SurfaceDive = "AsdvPercMrunSnonWrflDf";
		};
		class BottomDivingRifleActionsRunFL: BottomDivingRifleActions
		{
			BottomDive = "AbdvPercMrunSnonWrflDfl";
			StartDive = "AdvePercMrunSnonWrflDfl";
			SurfaceDive = "AsdvPercMrunSnonWrflDfl";
		};
		class BottomDivingRifleActionsRunFR: BottomDivingRifleActions
		{
			BottomDive = "AbdvPercMrunSnonWrflDfr";
			StartDive = "AdvePercMrunSnonWrflDfr";
			SurfaceDive = "AsdvPercMrunSnonWrflDfr";
		};
		class BottomDivingRifleActionsRunL: BottomDivingRifleActions
		{
			BottomDive = "AbdvPercMrunSnonWrflDl";
			StartDive = "AdvePercMrunSnonWrflDl";
			SurfaceDive = "AsdvPercMrunSnonWrflDl";
		};
		class BottomDivingRifleActionsRunR: BottomDivingRifleActions
		{
			BottomDive = "AbdvPercMrunSnonWrflDr";
			StartDive = "AdvePercMrunSnonWrflDr";
			SurfaceDive = "AsdvPercMrunSnonWrflDr";
		};
		class BottomDivingRifleActionsTacB: BottomDivingRifleActions
		{
			BottomDive = "AbdvPercMtacSnonWrflDb";
			StartDive = "AdvePercMtacSnonWrflDb";
			SurfaceDive = "AsdvPercMtacSnonWrflDb";
		};
		class BottomDivingRifleActionsTacBL: BottomDivingRifleActions
		{
			BottomDive = "AbdvPercMtacSnonWrflDbl";
			StartDive = "AdvePercMtacSnonWrflDbl";
			SurfaceDive = "AsdvPercMtacSnonWrflDbl";
		};
		class BottomDivingRifleActionsTacBR: BottomDivingRifleActions
		{
			BottomDive = "AbdvPercMtacSnonWrflDbr";
			StartDive = "AdvePercMtacSnonWrflDbr";
			SurfaceDive = "AsdvPercMtacSnonWrflDbr";
		};
		class BottomDivingRifleActionsTacF: BottomDivingRifleActions
		{
			BottomDive = "AbdvPercMtacSnonWrflDf";
			StartDive = "AdvePercMtacSnonWrflDf";
			SurfaceDive = "AsdvPercMtacSnonWrflDf";
		};
		class BottomDivingRifleActionsTacFL: BottomDivingRifleActions
		{
			BottomDive = "AbdvPercMtacSnonWrflDfl";
			StartDive = "AdvePercMtacSnonWrflDfl";
			SurfaceDive = "AsdvPercMtacSnonWrflDfl";
		};
		class BottomDivingRifleActionsTacFR: BottomDivingRifleActions
		{
			BottomDive = "AbdvPercMtacSnonWrflDfr";
			StartDive = "AdvePercMtacSnonWrflDfr";
			SurfaceDive = "AsdvPercMtacSnonWrflDfr";
		};
		class BottomDivingRifleActionsTacL: BottomDivingRifleActions
		{
			BottomDive = "AbdvPercMtacSnonWrflDl";
			StartDive = "AdvePercMtacSnonWrflDl";
			SurfaceDive = "AsdvPercMtacSnonWrflDl";
		};
		class BottomDivingRifleActionsTacR: BottomDivingRifleActions
		{
			BottomDive = "AbdvPercMtacSnonWrflDr";
			StartDive = "AdvePercMtacSnonWrflDr";
			SurfaceDive = "AsdvPercMtacSnonWrflDr";
		};
		class BottomDivingRifleActionsWlkB: BottomDivingRifleActions
		{
			BottomDive = "AbdvPercMwlkSnonWrflDb";
			StartDive = "AdvePercMwlkSnonWrflDb";
			SurfaceDive = "AsdvPercMwlkSnonWrflDb";
		};
		class BottomDivingRifleActionsWlkBL: BottomDivingRifleActions
		{
			BottomDive = "AbdvPercMwlkSnonWrflDbl";
			StartDive = "AdvePercMwlkSnonWrflDbl";
			SurfaceDive = "AsdvPercMwlkSnonWrflDbl";
		};
		class BottomDivingRifleActionsWlkBR: BottomDivingRifleActions
		{
			BottomDive = "AbdvPercMwlkSnonWrflDbr";
			StartDive = "AdvePercMwlkSnonWrflDbr";
			SurfaceDive = "AsdvPercMwlkSnonWrflDbr";
		};
		class BottomDivingRifleActionsWlkF: BottomDivingRifleActions
		{
			BottomDive = "AbdvPercMwlkSnonWrflDf";
			StartDive = "AdvePercMwlkSnonWrflDf";
			SurfaceDive = "AsdvPercMwlkSnonWrflDf";
		};
		class BottomDivingRifleActionsWlkFL: BottomDivingRifleActions
		{
			BottomDive = "AbdvPercMwlkSnonWrflDfl";
			StartDive = "AdvePercMwlkSnonWrflDfl";
			SurfaceDive = "AsdvPercMwlkSnonWrflDfl";
		};
		class BottomDivingRifleActionsWlkFR: BottomDivingRifleActions
		{
			BottomDive = "AbdvPercMwlkSnonWrflDfr";
			StartDive = "AdvePercMwlkSnonWrflDfr";
			SurfaceDive = "AsdvPercMwlkSnonWrflDfr";
		};
		class BottomDivingRifleActionsWlkL: BottomDivingRifleActions
		{
			BottomDive = "AbdvPercMwlkSnonWrflDl";
			StartDive = "AdvePercMwlkSnonWrflDl";
			SurfaceDive = "AsdvPercMwlkSnonWrflDl";
		};
		class BottomDivingRifleActionsWlkR: BottomDivingRifleActions
		{
			BottomDive = "AbdvPercMwlkSnonWrflDr";
			StartDive = "AdvePercMwlkSnonWrflDr";
			SurfaceDive = "AsdvPercMwlkSnonWrflDr";
		};
		class BottomSwimmingActions: SwimmingActions
		{
			default = "AbswPercMstpSnonWnonDnon";
			FastB = "AbswPercMrunSnonWnonDb";
			FastF = "AbswPercMsprSnonWnonDf";
			FastL = "AbswPercMstpSnonWnonDnon";
			FastLB = "AbswPercMstpSnonWnonDnon";
			FastLF = "AbswPercMsprSnonWnonDf";
			FastR = "AbswPercMstpSnonWnonDnon";
			FastRB = "AbswPercMstpSnonWnonDnon";
			FastRF = "AbswPercMsprSnonWnonDf";
			LimpB = "AbswPercMwlkSnonWnonDb";
			LimpF = "AbswPercMwlkSnonWnonDf";
			LimpL = "AbswPercMwlkSnonWnonDl";
			LimpLB = "AbswPercMstpSnonWnonDnon";
			LimpLF = "AbswPercMwlkSnonWnonDfl";
			LimpR = "AbswPercMwlkSnonWnonDr";
			LimpRB = "AbswPercMstpSnonWnonDnon";
			LimpRF = "AbswPercMwlkSnonWnonDfr";
			PlayerSlowB = "AbswPercMrunSnonWnonDb";
			PlayerSlowF = "AbswPercMrunSnonWnonDf";
			PlayerSlowL = "AbswPercMrunSnonWnonDl";
			PlayerSlowLB = "AbswPercMstpSnonWnonDnon";
			PlayerSlowLF = "AbswPercMrunSnonWnonDfl";
			PlayerSlowR = "AbswPercMrunSnonWnonDr";
			PlayerSlowRB = "AbswPercMstpSnonWnonDnon";
			PlayerSlowRF = "AbswPercMrunSnonWnonDfr";
			PlayerTactB = "AbswPercMwlkSnonWnonDb";
			PlayerTactF = "AbswPercMwlkSnonWnonDf";
			PlayerTactL = "AbswPercMwlkSnonWnonDl";
			PlayerTactLB = "AbswPercMstpSnonWnonDnon";
			PlayerTactLF = "AbswPercMwlkSnonWnonDfl";
			PlayerTactR = "AbswPercMwlkSnonWnonDr";
			PlayerTactRB = "AbswPercMstpSnonWnonDnon";
			PlayerTactRF = "AbswPercMwlkSnonWnonDfr";
			PlayerWalkB = "AbswPercMwlkSnonWnonDb";
			PlayerWalkF = "AbswPercMwlkSnonWnonDf";
			PlayerWalkL = "AbswPercMwlkSnonWnonDl";
			PlayerWalkLB = "AbswPercMstpSnonWnonDnon";
			PlayerWalkLF = "AbswPercMwlkSnonWnonDfl";
			PlayerWalkR = "AbswPercMwlkSnonWnonDr";
			PlayerWalkRB = "AbswPercMstpSnonWnonDnon";
			PlayerWalkRF = "AbswPercMwlkSnonWnonDfr";
			relax = "AbswPercMstpSnonWnonDnon_relax";
			SlowB = "AbswPercMrunSnonWnonDb";
			SlowF = "AbswPercMrunSnonWnonDf";
			SlowL = "AbswPercMrunSnonWnonDl";
			SlowLB = "AbswPercMstpSnonWnonDnon";
			SlowLF = "AbswPercMrunSnonWnonDfl";
			SlowR = "AbswPercMrunSnonWnonDr";
			SlowRB = "AbswPercMstpSnonWnonDnon";
			SlowRF = "AbswPercMrunSnonWnonDfr";
			stop = "AbswPercMstpSnonWnonDnon";
			stopRelaxed = "AbswPercMstpSnonWnonDnon";
			swimDown = "AbswPercMstpSnonWnonDnon_goDown";
			swimUp = "AbswPercMstpSnonWnonDnon_goup";
			TactB = "AbswPercMwlkSnonWnonDb";
			TactF = "AbswPercMwlkSnonWnonDf";
			TactL = "AbswPercMwlkSnonWnonDl";
			TactLB = "AbswPercMstpSnonWnonDnon";
			TactLF = "AbswPercMwlkSnonWnonDfl";
			TactR = "AbswPercMwlkSnonWnonDr";
			TactRB = "AbswPercMstpSnonWnonDnon";
			TactRF = "AbswPercMwlkSnonWnonDfr";
			turnL = "AbswPercMstpSnonWnonDnon";
			turnR = "AbswPercMstpSnonWnonDnon";
			upDegree = "ManPosBottomSwimming";
			WalkB = "AbswPercMwlkSnonWnonDb";
			WalkF = "AbswPercMwlkSnonWnonDf";
			WalkL = "AbswPercMwlkSnonWnonDl";
			WalkLB = "AbswPercMstpSnonWnonDnon";
			WalkLF = "AbswPercMwlkSnonWnonDfl";
			WalkR = "AbswPercMwlkSnonWnonDr";
			WalkRB = "AbswPercMstpSnonWnonDnon";
			WalkRF = "AbswPercMwlkSnonWnonDfr";
		};
		class BottomSwimmingActionsFastF: BottomSwimmingActionsRunF
		{
			limitFast = 4;
		};
		class BottomSwimmingActionsFastFL: BottomSwimmingActionsRunF
		{
			limitFast = 4;
		};
		class BottomSwimmingActionsFastFR: BottomSwimmingActionsRunF
		{
			limitFast = 4;
		};
		class BottomSwimmingActionsRunB: BottomSwimmingActions
		{
			bottomSwim = "AbswPercMrunSnonWnonDb";
			startSwim = "AswmPercMrunSnonWnonDb";
			surfaceSwim = "AsswPercMrunSnonWnonDb";
		};
		class BottomSwimmingActionsRunBL: BottomSwimmingActions
		{
			bottomSwim = "AbswPercMrunSnonWnonDbl";
			startSwim = "AswmPercMrunSnonWnonDbl";
			surfaceSwim = "AsswPercMrunSnonWnonDbl";
		};
		class BottomSwimmingActionsRunBR: BottomSwimmingActions
		{
			bottomSwim = "AbswPercMrunSnonWnonDbr";
			startSwim = "AswmPercMrunSnonWnonDbr";
			surfaceSwim = "AsswPercMrunSnonWnonDbr";
		};
		class BottomSwimmingActionsRunF: BottomSwimmingActions
		{
			bottomSwim = "AbswPercMrunSnonWnonDf";
			startSwim = "AswmPercMrunSnonWnonDf";
			surfaceSwim = "AsswPercMrunSnonWnonDf";
		};
		class BottomSwimmingActionsRunFL: BottomSwimmingActions
		{
			bottomSwim = "AbswPercMrunSnonWnonDfl";
			startSwim = "AswmPercMrunSnonWnonDfl";
			surfaceSwim = "AsswPercMrunSnonWnonDfl";
		};
		class BottomSwimmingActionsRunFR: BottomSwimmingActions
		{
			bottomSwim = "AbswPercMrunSnonWnonDfr";
			startSwim = "AswmPercMrunSnonWnonDfr";
			surfaceSwim = "AsswPercMrunSnonWnonDfr";
		};
		class BottomSwimmingActionsRunL: BottomSwimmingActions
		{
			bottomSwim = "AbswPercMrunSnonWnonDl";
			startSwim = "AswmPercMrunSnonWnonDl";
			surfaceSwim = "AsswPercMrunSnonWnonDl";
		};
		class BottomSwimmingActionsRunR: BottomSwimmingActions
		{
			bottomSwim = "AbswPercMrunSnonWnonDr";
			startSwim = "AswmPercMrunSnonWnonDr";
			surfaceSwim = "AsswPercMrunSnonWnonDr";
		};
		class CargoActions: NoActions {};
		class CivilEvasiveActions: CivilStandActions
		{
			limitFast = 5.5;
			salute = "";
			throwPrepare = "AmovPercMrunSnonWnonDf";
			turnSpeed = 4;
		};
		class CivilEvasiveKneelActions: CivilKneelActions
		{
			limitFast = 5.5;
		};
		class CivilExerciseActions: CivilStandActions
		{
			GetOver = "";
		};
		class CivilKneelActions: CivilStandActions
		{
			AdjustF = "";
			binocOff = "AmovPknlMstpSnonWnonDnon";
			binocOn = "AwopPknlMstpSoptWbinDnon_non";
			Binoculars = "AmovPknlMstpSoptWbinDnon";
			CanNotMove = "AmovPknlMstpSnonWnonDnon";
			Combat = "AmovPknlMstpSrasWrflDnon";
			default = "AmovPknlMstpSnonWnonDnon";
			Down = "AmovPpneMstpSnonWnonDnon";
			FastB = "AmovPknlMrunSnonWnonDb";
			FastF = "AmovPknlMevaSnonWnonDf";
			FastL = "AmovPknlMrunSnonWnonDl";
			FastLB = "AmovPknlMrunSnonWnonDbl";
			FastLF = "AmovPknlMevaSnonWnonDfl";
			FastR = "AmovPknlMrunSnonWnonDr";
			FastRB = "AmovPknlMrunSnonWnonDbr";
			FastRF = "AmovPknlMevaSnonWnonDfr";
			FireNotPossible = "AmovPknlMstpSnonWnonDnon";
			Gear = "AinvPknlMstpSnonWnonDnon";
			handGunOn = "AmovPknlMstpSrasWpstDnon";
			limitFast = 5.5;
			LimpB = "AmovPknlMlmpSnonWnonDb";
			LimpF = "AmovPknlMlmpSnonWnonDf";
			LimpL = "AmovPknlMlmpSnonWnonDl";
			LimpLB = "AmovPknlMlmpSnonWnonDbl";
			LimpLF = "AmovPknlMlmpSnonWnonDfl";
			LimpR = "AmovPknlMlmpSnonWnonDr";
			LimpRB = "AmovPknlMlmpSnonWnonDbr";
			LimpRF = "AmovPknlMlmpSnonWnonDfr";
			medicStop = "AmovPknlMstpSnonWnonDnon";
			Panic = "ApanPknlMstpSnonWnonDnon";
			PlayerCrouch = "";
			PlayerSlowB = "AmovPknlMrunSnonWnonDb";
			PlayerSlowF = "AmovPknlMrunSnonWnonDf";
			PlayerSlowL = "AmovPknlMrunSnonWnonDl";
			PlayerSlowLB = "AmovPknlMrunSnonWnonDbl";
			PlayerSlowLF = "AmovPknlMrunSnonWnonDfl";
			PlayerSlowR = "AmovPknlMrunSnonWnonDr";
			PlayerSlowRB = "AmovPknlMrunSnonWnonDbr";
			PlayerSlowRF = "AmovPknlMrunSnonWnonDfr";
			PlayerStand = "AmovPercMstpSnonWnonDnon";
			PlayerTactB = "AmovPknlMwlkSnonWnonDb";
			PlayerTactF = "AmovPknlMwlkSnonWnonDf";
			PlayerTactL = "AmovPknlMwlkSnonWnonDl";
			PlayerTactLB = "AmovPknlMwlkSnonWnonDbl";
			PlayerTactLF = "AmovPknlMwlkSnonWnonDfl";
			PlayerTactR = "AmovPknlMwlkSnonWnonDr";
			PlayerTactRB = "AmovPknlMwlkSnonWnonDbr";
			PlayerTactRF = "AmovPknlMwlkSnonWnonDfr";
			PlayerWalkB = "AmovPknlMwlkSnonWnonDb";
			PlayerWalkF = "AmovPknlMwlkSnonWnonDf";
			PlayerWalkL = "AmovPknlMwlkSnonWnonDl";
			PlayerWalkLB = "AmovPknlMwlkSnonWnonDbl";
			PlayerWalkLF = "AmovPknlMwlkSnonWnonDfl";
			PlayerWalkR = "AmovPknlMwlkSnonWnonDr";
			PlayerWalkRB = "AmovPknlMwlkSnonWnonDbr";
			PlayerWalkRF = "AmovPknlMwlkSnonWnonDfr";
			PrimaryWeapon = "AmovPknlMstpSrasWrflDnon";
			putDown = "AmovPknlMstpSnonWnonDnon_AinvPknlMstpSnonWnonDnon_Putdown";
			reloadMagazine = "AmovPknlMstpSnonWnonDnon";
			reloadMGun = "AmovPknlMstpSnonWnonDnon";
			ReloadMortar = "AmovPknlMstpSnonWnonDnon";
			ReloadRPG = "AmovPknlMstpSnonWnonDnon";
			salute = "";
			SecondaryWeapon = "AmovPknlMstpSrasWlnrDnon";
			sitDown = "";
			SlowB = "AmovPknlMrunSnonWnonDb";
			SlowF = "AmovPknlMrunSnonWnonDf";
			SlowL = "AmovPknlMrunSnonWnonDl";
			SlowLB = "AmovPknlMrunSnonWnonDbl";
			SlowLF = "AmovPknlMrunSnonWnonDfl";
			SlowR = "AmovPknlMrunSnonWnonDr";
			SlowRB = "AmovPknlMrunSnonWnonDbr";
			SlowRF = "AmovPknlMrunSnonWnonDfr";
			stance = "ManStanceCrouch";
			Stand = "AmovPercMstpSlowWrflDnon";
			StartFreefall = "AfalPknlMstpSnonWnonDnon";
			stop = "AmovPknlMstpSnonWnonDnon";
			stopRelaxed = "AmovPknlMstpSnonWnonDnon";
			strokeGun = "AmovPknlMstpSnonWnonDnon";
			TactB = "AmovPknlMwlkSnonWnonDb";
			TactF = "AmovPknlMwlkSnonWnonDf";
			TactL = "AmovPknlMwlkSnonWnonDl";
			TactLB = "AmovPknlMwlkSnonWnonDbl";
			TactLF = "AmovPknlMwlkSnonWnonDfl";
			TactR = "AmovPknlMwlkSnonWnonDr";
			TactRB = "AmovPknlMwlkSnonWnonDbr";
			TactRF = "AmovPknlMwlkSnonWnonDfr";
			takeFlag = "AinvPknlMstpSnonWnonDnon_4";
			turnL = "AmovPknlMstpSnonWnonDnon_turnL";
			turnLRelaxed = "AmovPknlMstpSnonWnonDnon_turnL";
			turnR = "AmovPknlMstpSnonWnonDnon_turnR";
			turnRRelaxed = "AmovPknlMstpSnonWnonDnon_turnR";
			turnSpeed = 4.5;
			up = "AmovPercMstpSnonWnonDnon";
			WalkB = "AmovPknlMwlkSnonWnonDb";
			WalkF = "AmovPknlMwlkSnonWnonDf";
			WalkL = "AmovPknlMwlkSnonWnonDl";
			WalkLB = "AmovPknlMwlkSnonWnonDbl";
			WalkLF = "AmovPknlMwlkSnonWnonDfl";
			WalkR = "AmovPknlMwlkSnonWnonDr";
			WalkRB = "AmovPknlMwlkSnonWnonDbr";
			WalkRF = "AmovPknlMwlkSnonWnonDfr";
			weaponOff = "AmovPknlMstpSnonWnonDnon";
			weaponOn = "AmovPknlMstpSrasWlnrDnon";
		};
		class CivilKneelActions_explo: CivilKneelActions_gear
		{
			Stop = "AmovPknlMstpSnonWnonDnon";
			StopRelaxed = "AmovPknlMstpSnonWnonDnon";
		};
		class CivilKneelActions_fixing: CivilKneelActions
		{
			Default = "ActsPercSnonWnonDnon_carFixing2";
			Stop = "ActsPercSnonWnonDnon_carFixing2";
			StopRelaxed = "ActsPercSnonWnonDnon_carFixing2";
		};
		class CivilKneelActions_gear: CivilKneelActions
		{
			Civil = "AmovPknlMstpSnonWnonDnon_gear";
			Default = "AmovPknlMstpSnonWnonDnon_gear";
			PlayerCrouch = "AmovPknlMstpSnonWnonDnon";
			Stop = "AmovPknlMstpSnonWnonDnon_gear";
			StopRelaxed = "AmovPknlMstpSnonWnonDnon_gear";
		};
		class CivilKneelActions_inv: CivilKneelActions
		{
			Default = "AinvPknlMstpSnonWnonDnon";
			HandGunOn = "AinvPknlMstpSrasWpstDnon";
			PlayerCrouch = "AmovPknlMstpSnonWnonDnon";
			Stop = "AinvPknlMstpSnonWnonDnon";
			StopRelaxed = "AinvPknlMstpSnonWnonDnon";
		};
		class CivilKneelActionsLimpB: CivilKneelActions
		{
			Up = "AmovPercMlmpSnonWnonDb";
		};
		class CivilKneelActionsLimpF: CivilKneelActions
		{
			Up = "AmovPercMlmpSnonWnonDf";
		};
		class CivilKneelActionsLimpL: CivilKneelActions
		{
			Up = "AmovPercMlmpSnonWnonDl";
		};
		class CivilKneelActionsLimpLB: CivilKneelActions
		{
			Up = "AmovPercMlmpSnonWnonDbl";
		};
		class CivilKneelActionsLimpLF: CivilKneelActions
		{
			Up = "AmovPercMlmpSnonWnonDfl";
		};
		class CivilKneelActionsLimpR: CivilKneelActions
		{
			Up = "AmovPercMlmpSnonWnonDr";
		};
		class CivilKneelActionsLimpRB: CivilKneelActions
		{
			Up = "AmovPercMlmpSnonWnonDbr";
		};
		class CivilKneelActionsLimpRF: CivilKneelActions
		{
			Up = "AmovPercMlmpSnonWnonDfr";
		};
		class CivilKneelActionsRunB: CivilKneelActions
		{
			PlayerStand = "AmovPercMrunSnonWnonDb";
			Stand = "AmovPercMrunSnonWnonDb";
			Up = "AmovPercMrunSnonWnonDb";
		};
		class CivilKneelActionsRunBL: CivilKneelActions
		{
			PlayerStand = "AmovPercMrunSnonWnonDbl";
			Stand = "AmovPercMrunSnonWnonDbl";
			Up = "AmovPercMrunSnonWnonDbl";
		};
		class CivilKneelActionsRunBR: CivilKneelActions
		{
			PlayerStand = "AmovPercMrunSnonWnonDbr";
			Stand = "AmovPercMrunSnonWnonDbr";
			Up = "AmovPercMrunSnonWnonDbr";
		};
		class CivilKneelActionsRunF: CivilKneelActions
		{
			PlayerStand = "AmovPercMrunSnonWnonDf";
			Stand = "AmovPercMrunSnonWnonDf";
			Up = "AmovPercMrunSnonWnonDf";
		};
		class CivilKneelActionsRunFl: CivilKneelActions
		{
			PlayerStand = "AmovPercMrunSnonWnonDfl";
			Stand = "AmovPercMrunSnonWnonDfl";
			Up = "AmovPercMrunSnonWnonDfl";
		};
		class CivilKneelActionsRunFR: CivilKneelActions
		{
			PlayerStand = "AmovPercMrunSnonWnonDfr";
			Stand = "AmovPercMrunSnonWnonDfr";
			Up = "AmovPercMrunSnonWnonDfr";
		};
		class CivilKneelActionsRunL: CivilKneelActions
		{
			PlayerStand = "AmovPercMrunSnonWnonDl";
			Stand = "AmovPercMrunSnonWnonDl";
			Up = "AmovPercMrunSnonWnonDl";
		};
		class CivilKneelActionsRunR: CivilKneelActions
		{
			PlayerStand = "AmovPercMrunSnonWnonDr";
			Stand = "AmovPercMrunSnonWnonDr";
			Up = "AmovPercMrunSnonWnonDr";
		};
		class CivilKneelActionsWlkB: CivilKneelActionsRunF
		{
			PlayerStand = "AmovPercMwlkSnonWnonDb";
			Stand = "AmovPercMwlkSnonWnonDb";
			Up = "AmovPercMwlkSnonWnonDb";
		};
		class CivilKneelActionsWlkBL: CivilKneelActionsRunF
		{
			PlayerStand = "AmovPercMwlkSnonWnonDbl";
			Stand = "AmovPercMwlkSnonWnonDbl";
			Up = "AmovPercMwlkSnonWnonDbl";
		};
		class CivilKneelActionsWlkBR: CivilKneelActionsRunF
		{
			PlayerStand = "AmovPercMwlkSnonWnonDbr";
			Stand = "AmovPercMwlkSnonWnonDbr";
			Up = "AmovPercMwlkSnonWnonDbr";
		};
		class CivilKneelActionsWlkF: CivilKneelActionsRunF
		{
			PlayerStand = "AmovPercMwlkSnonWnonDf";
			Stand = "AmovPercMwlkSnonWnonDf";
			Up = "AmovPercMwlkSnonWnonDf";
		};
		class CivilKneelActionsWlkFL: CivilKneelActionsRunF
		{
			PlayerStand = "AmovPercMwlkSnonWnonDfl";
			Stand = "AmovPercMwlkSnonWnonDfl";
			Up = "AmovPercMwlkSnonWnonDfl";
		};
		class CivilKneelActionsWlkFR: CivilKneelActionsRunF
		{
			PlayerStand = "AmovPercMwlkSnonWnonDfr";
			Stand = "AmovPercMwlkSnonWnonDfr";
			Up = "AmovPercMwlkSnonWnonDfr";
		};
		class CivilKneelActionsWlkL: CivilKneelActionsRunF
		{
			PlayerStand = "AmovPercMwlkSnonWnonDl";
			Stand = "AmovPercMwlkSnonWnonDl";
			Up = "AmovPercMwlkSnonWnonDl";
		};
		class CivilKneelActionsWlkR: CivilKneelActionsRunF
		{
			PlayerStand = "AmovPercMwlkSnonWnonDr";
			Stand = "AmovPercMwlkSnonWnonDr";
			Up = "AmovPercMwlkSnonWnonDr";
		};
		class CivilKneelTakeActions: CivilKneelActions
		{
			default = "AinvPknlMstpSnonWnonDnon_4";
			stop = "AinvPknlMstpSnonWnonDnon_4";
			StopRelaxed = "AinvPknlMstpSnonWnonDnon_4";
		};
		class CivilPanicKneelActions: NoActions
		{
			Civil = "ApanPknlMstpSnonWnonDnon";
			Crouch = "ApanPknlMstpSnonWnonDnon";
			Down = "ApanPpneMstpSnonWnonDnon";
			FastB = "ApanPknlMrunSnonWnonDb";
			FastF = "ApanPknlMsprSnonWnonDf";
			FastL = "ApanPknlMrunSnonWnonDl";
			FastLB = "ApanPknlMrunSnonWnonDbl";
			FastLF = "ApanPknlMsprSnonWnonDfl";
			FastR = "ApanPknlMrunSnonWnonDr";
			FastRB = "ApanPknlMrunSnonWnonDbr";
			FastRF = "ApanPknlMsprSnonWnonDfr";
			FireNotPossible = "ApanPknlMstpSnonWnonDnon";
			LimpB = "ApanPknlMrunSnonWnonDb";
			LimpF = "ApanPknlMrunSnonWnonDf";
			LimpL = "ApanPknlMrunSnonWnonDl";
			LimpLB = "ApanPknlMrunSnonWnonDbl";
			LimpLF = "ApanPknlMrunSnonWnonDfl";
			LimpR = "ApanPknlMrunSnonWnonDr";
			LimpRB = "ApanPknlMrunSnonWnonDbr";
			LimpRF = "ApanPknlMrunSnonWnonDfr";
			PlayerSlowB = "ApanPknlMrunSnonWnonDb";
			PlayerSlowF = "ApanPknlMrunSnonWnonDf";
			PlayerSlowL = "ApanPknlMrunSnonWnonDl";
			PlayerSlowLB = "ApanPknlMrunSnonWnonDbl";
			PlayerSlowLF = "ApanPknlMrunSnonWnonDfl";
			PlayerSlowR = "ApanPknlMrunSnonWnonDr";
			PlayerSlowRB = "ApanPknlMrunSnonWnonDbr";
			PlayerSlowRF = "ApanPknlMrunSnonWnonDfr";
			PlayerTactB = "ApanPknlMwlkSnonWnonDb";
			PlayerTactF = "ApanPknlMwlkSnonWnonDf";
			PlayerTactL = "ApanPknlMwlkSnonWnonDl";
			PlayerTactLB = "ApanPknlMwlkSnonWnonDbl";
			PlayerTactLF = "ApanPknlMwlkSnonWnonDfl";
			PlayerTactR = "ApanPknlMwlkSnonWnonDr";
			PlayerTactRB = "ApanPknlMwlkSnonWnonDbr";
			PlayerTactRF = "ApanPknlMwlkSnonWnonDfr";
			PlayerWalkB = "ApanPknlMwlkSnonWnonDb";
			PlayerWalkF = "ApanPknlMwlkSnonWnonDf";
			PlayerWalkL = "ApanPknlMwlkSnonWnonDl";
			PlayerWalkLB = "ApanPknlMwlkSnonWnonDbl";
			PlayerWalkLF = "ApanPknlMwlkSnonWnonDfl";
			PlayerWalkR = "ApanPknlMwlkSnonWnonDr";
			PlayerWalkRB = "ApanPknlMwlkSnonWnonDbr";
			PlayerWalkRF = "ApanPknlMwlkSnonWnonDfr";
			SlowB = "ApanPknlMrunSnonWnonDb";
			SlowF = "ApanPknlMrunSnonWnonDf";
			SlowL = "ApanPknlMrunSnonWnonDl";
			SlowLB = "ApanPknlMrunSnonWnonDbl";
			SlowLF = "ApanPknlMrunSnonWnonDfl";
			SlowR = "ApanPknlMrunSnonWnonDr";
			SlowRB = "ApanPknlMrunSnonWnonDbr";
			SlowRF = "ApanPknlMrunSnonWnonDfr";
			Stop = "ApanPknlMstpSnonWnonDnon";
			TactB = "ApanPknlMwlkSnonWnonDb";
			TactF = "ApanPknlMwlkSnonWnonDf";
			TactL = "ApanPknlMwlkSnonWnonDl";
			TactLB = "ApanPknlMwlkSnonWnonDbl";
			TactLF = "ApanPknlMwlkSnonWnonDfl";
			TactR = "ApanPknlMwlkSnonWnonDr";
			TactRB = "ApanPknlMwlkSnonWnonDbr";
			TactRF = "ApanPknlMwlkSnonWnonDfr";
			Up = "ApanPercMstpSnonWnonDnon";
			UpDegree = "ManPosNoWeapon";
			WalkB = "ApanPknlMwlkSnonWnonDb";
			WalkF = "ApanPknlMwlkSnonWnonDf";
			WalkL = "ApanPknlMwlkSnonWnonDl";
			WalkLB = "ApanPknlMwlkSnonWnonDbl";
			WalkLF = "ApanPknlMwlkSnonWnonDfl";
			WalkR = "ApanPknlMwlkSnonWnonDr";
			WalkRB = "ApanPknlMwlkSnonWnonDbr";
			WalkRF = "ApanPknlMwlkSnonWnonDfr";
		};
		class CivilPanicProneActions: NoActions
		{
			Civil = "ApanPpneMstpSnonWnonDnon";
			Crouch = "ApanPknlMstpSnonWnonDnon";
			Down = "ApanPercMstpSnonWnonDnon";
			FastB = "ApanPpneMrunSnonWnonDb";
			FastF = "ApanPpneMsprSnonWnonDf";
			FastL = "ApanPpneMrunSnonWnonDl";
			FastLB = "ApanPpneMrunSnonWnonDbl";
			FastLF = "ApanPpneMrunSnonWnonDfl";
			FastR = "ApanPpneMrunSnonWnonDr";
			FastRB = "ApanPpneMrunSnonWnonDbr";
			FastRF = "ApanPpneMrunSnonWnonDfr";
			FireNotPossible = "ApanPpneMstpSnonWnonDnon";
			LimpB = "ApanPpneMrunSnonWnonDb";
			LimpF = "ApanPpneMrunSnonWnonDf";
			LimpL = "ApanPpneMrunSnonWnonDl";
			LimpLB = "ApanPpneMrunSnonWnonDbl";
			LimpLF = "ApanPpneMrunSnonWnonDfl";
			LimpR = "ApanPpneMrunSnonWnonDr";
			LimpRB = "ApanPpneMrunSnonWnonDbr";
			LimpRF = "ApanPpneMrunSnonWnonDfr";
			PlayerSlowB = "ApanPpneMrunSnonWnonDb";
			PlayerSlowF = "ApanPpneMrunSnonWnonDf";
			PlayerSlowL = "ApanPpneMrunSnonWnonDl";
			PlayerSlowLB = "ApanPpneMrunSnonWnonDbl";
			PlayerSlowLF = "ApanPpneMrunSnonWnonDfl";
			PlayerSlowR = "ApanPpneMrunSnonWnonDr";
			PlayerSlowRB = "ApanPpneMrunSnonWnonDbr";
			PlayerSlowRF = "ApanPpneMrunSnonWnonDfr";
			PlayerTactB = "ApanPpneMrunSnonWnonDb";
			PlayerTactF = "ApanPpneMrunSnonWnonDf";
			PlayerTactL = "ApanPpneMrunSnonWnonDl";
			PlayerTactLB = "ApanPpneMrunSnonWnonDbl";
			PlayerTactLF = "ApanPpneMrunSnonWnonDfl";
			PlayerTactR = "ApanPpneMrunSnonWnonDr";
			PlayerTactRB = "ApanPpneMrunSnonWnonDbr";
			PlayerTactRF = "ApanPpneMrunSnonWnonDfr";
			PlayerWalkB = "ApanPpneMrunSnonWnonDb";
			PlayerWalkF = "ApanPpneMrunSnonWnonDf";
			PlayerWalkL = "ApanPpneMrunSnonWnonDl";
			PlayerWalkLB = "ApanPpneMrunSnonWnonDbl";
			PlayerWalkLF = "ApanPpneMrunSnonWnonDfl";
			PlayerWalkR = "ApanPpneMrunSnonWnonDr";
			PlayerWalkRB = "ApanPpneMrunSnonWnonDbr";
			PlayerWalkRF = "ApanPpneMrunSnonWnonDfr";
			SlowB = "ApanPpneMrunSnonWnonDb";
			SlowF = "ApanPpneMrunSnonWnonDf";
			SlowL = "ApanPpneMrunSnonWnonDl";
			SlowLB = "ApanPpneMrunSnonWnonDbl";
			SlowLF = "ApanPpneMrunSnonWnonDfl";
			SlowR = "ApanPpneMrunSnonWnonDr";
			SlowRB = "ApanPpneMrunSnonWnonDbr";
			SlowRF = "ApanPpneMrunSnonWnonDfr";
			Stop = "ApanPpneMstpSnonWnonDnon";
			TactB = "ApanPpneMrunSnonWnonDb";
			TactF = "ApanPpneMrunSnonWnonDf";
			TactL = "ApanPpneMrunSnonWnonDl";
			TactLB = "ApanPpneMrunSnonWnonDbl";
			TactLF = "ApanPpneMrunSnonWnonDfl";
			TactR = "ApanPpneMrunSnonWnonDr";
			TactRB = "ApanPpneMrunSnonWnonDbr";
			TactRF = "ApanPpneMrunSnonWnonDfr";
			Up = "ApanPknlMstpSnonWnonDnon";
			UpDegree = "ManPosNoWeapon";
			WalkB = "ApanPpneMrunSnonWnonDb";
			WalkF = "ApanPpneMrunSnonWnonDf";
			WalkL = "ApanPpneMrunSnonWnonDl";
			WalkLB = "ApanPpneMrunSnonWnonDbl";
			WalkLF = "ApanPpneMrunSnonWnonDfl";
			WalkR = "ApanPpneMrunSnonWnonDr";
			WalkRB = "ApanPpneMrunSnonWnonDbr";
			WalkRF = "ApanPpneMrunSnonWnonDfr";
		};
		class CivilPanicStandActions: NoActions
		{
			Civil = "ApanPercMstpSnonWnonDnon";
			Crouch = "ApanPknlMstpSnonWnonDnon";
			Down = "ApanPpneMstpSnonWnonDnon";
			FastB = "ApanPercMrunSnonWnonDb";
			FastF = "ApanPercMsprSnonWnonDf";
			FastL = "ApanPercMrunSnonWnonDl";
			FastLB = "ApanPercMrunSnonWnonDbl";
			FastLF = "ApanPercMsprSnonWnonDfl";
			FastR = "ApanPercMrunSnonWnonDr";
			FastRB = "ApanPercMrunSnonWnonDbr";
			FastRF = "ApanPercMsprSnonWnonDfr";
			FireNotPossible = "ApanPercMstpSnonWnonDnon";
			LimpB = "ApanPercMrunSnonWnonDb";
			LimpF = "ApanPercMrunSnonWnonDf";
			LimpL = "ApanPercMrunSnonWnonDl";
			LimpLB = "ApanPercMrunSnonWnonDbl";
			LimpLF = "ApanPercMrunSnonWnonDfl";
			LimpR = "ApanPercMrunSnonWnonDr";
			LimpRB = "ApanPercMrunSnonWnonDbr";
			LimpRF = "ApanPercMrunSnonWnonDfr";
			PlayerSlowB = "ApanPercMrunSnonWnonDb";
			PlayerSlowF = "ApanPercMrunSnonWnonDf";
			PlayerSlowL = "ApanPercMrunSnonWnonDl";
			PlayerSlowLB = "ApanPercMrunSnonWnonDbl";
			PlayerSlowLF = "ApanPercMrunSnonWnonDfl";
			PlayerSlowR = "ApanPercMrunSnonWnonDr";
			PlayerSlowRB = "ApanPercMrunSnonWnonDbr";
			PlayerSlowRF = "ApanPercMrunSnonWnonDfr";
			PlayerTactB = "ApanPercMwlkSnonWnonDb";
			PlayerTactF = "ApanPercMwlkSnonWnonDf";
			PlayerTactL = "ApanPercMwlkSnonWnonDl";
			PlayerTactLB = "ApanPercMwlkSnonWnonDbl";
			PlayerTactLF = "ApanPercMwlkSnonWnonDfl";
			PlayerTactR = "ApanPercMwlkSnonWnonDr";
			PlayerTactRB = "ApanPercMwlkSnonWnonDbr";
			PlayerTactRF = "ApanPercMwlkSnonWnonDfr";
			PlayerWalkB = "ApanPercMwlkSnonWnonDb";
			PlayerWalkF = "ApanPercMwlkSnonWnonDf";
			PlayerWalkL = "ApanPercMwlkSnonWnonDl";
			PlayerWalkLB = "ApanPercMwlkSnonWnonDbl";
			PlayerWalkLF = "ApanPercMwlkSnonWnonDfl";
			PlayerWalkR = "ApanPercMwlkSnonWnonDr";
			PlayerWalkRB = "ApanPercMwlkSnonWnonDbr";
			PlayerWalkRF = "ApanPercMwlkSnonWnonDfr";
			SlowB = "ApanPercMrunSnonWnonDb";
			SlowF = "ApanPercMrunSnonWnonDf";
			SlowL = "ApanPercMrunSnonWnonDl";
			SlowLB = "ApanPercMrunSnonWnonDbl";
			SlowLF = "ApanPercMrunSnonWnonDfl";
			SlowR = "ApanPercMrunSnonWnonDr";
			SlowRB = "ApanPercMrunSnonWnonDbr";
			SlowRF = "ApanPercMrunSnonWnonDfr";
			Stop = "ApanPercMstpSnonWnonDnon";
			TactB = "ApanPercMwlkSnonWnonDb";
			TactF = "ApanPercMwlkSnonWnonDf";
			TactL = "ApanPercMwlkSnonWnonDl";
			TactLB = "ApanPercMwlkSnonWnonDbl";
			TactLF = "ApanPercMwlkSnonWnonDfl";
			TactR = "ApanPercMwlkSnonWnonDr";
			TactRB = "ApanPercMwlkSnonWnonDbr";
			TactRF = "ApanPercMwlkSnonWnonDfr";
			Up = "ApanPknlMstpSnonWnonDnon";
			UpDegree = "ManPosNoWeapon";
			WalkB = "ApanPercMwlkSnonWnonDb";
			WalkF = "ApanPercMwlkSnonWnonDf";
			WalkL = "ApanPercMwlkSnonWnonDl";
			WalkLB = "ApanPercMwlkSnonWnonDbl";
			WalkLF = "ApanPercMwlkSnonWnonDfl";
			WalkR = "ApanPercMwlkSnonWnonDr";
			WalkRB = "ApanPercMwlkSnonWnonDbr";
			WalkRF = "ApanPercMwlkSnonWnonDfr";
		};
		class CivilProneActions: CivilStandActions
		{
			binocOff = "AmovPpneMstpSnonWnonDnon";
			binocOn = "AwopPpneMstpSoptWbinDnon_non";
			Binoculars = "AmovPpneMstpSoptWbinDnon";
			CanNotMove = "AmovPpneMstpSnonWnonDnon";
			Crouch = "AmovPknlMstpSnonWnonDnon";
			default = "AmovPpneMstpSnonWnonDnon";
			Diary = "";
			down = "AmovPercMstpSnonWnonDnon";
			EvasiveLeft = "AmovPpneMstpSnonWnonDnon_AmovPpneMevaSnonWnonDl";
			EvasiveRight = "AmovPpneMstpSnonWnonDnon_AmovPpneMevaSnonWnonDr";
			FastB = "AmovPpneMrunSnonWnonDb";
			FastF = "AmovPpneMsprSnonWnonDf";
			FastL = "AmovPpneMrunSnonWnonDl";
			FastLB = "AmovPpneMrunSnonWnonDbl";
			FastLF = "AmovPpneMrunSnonWnonDfl";
			FastR = "AmovPpneMrunSnonWnonDr";
			FastRB = "AmovPpneMrunSnonWnonDbr";
			FastRF = "AmovPpneMrunSnonWnonDfr";
			FireNotPossible = "AmovPpneMstpSnonWnonDnon";
			Gear = "AinvPpneMstpSnonWnonDnon";
			GetOver = "";
			handGunOn = "AmovPpneMstpSrasWpstDnon";
			leanLRot = 0;
			leanLShift = 0;
			leanRRot = 0;
			leanRShift = 0;
			limitFast = 5.5;
			LimpB = "AmovPpneMrunSnonWnonDb";
			LimpF = "AmovPpneMrunSnonWnonDf";
			LimpL = "AmovPpneMrunSnonWnonDl";
			LimpLB = "AmovPpneMrunSnonWnonDbl";
			LimpLF = "AmovPpneMrunSnonWnonDfl";
			LimpR = "AmovPpneMrunSnonWnonDr";
			LimpRB = "AmovPpneMrunSnonWnonDbr";
			LimpRF = "AmovPpneMrunSnonWnonDfr";
			Lying = "AmovPpneMstpSrasWrflDnon";
			medic = "AinvPpneMstpSlayWnonDnon_medic";
			medicOther = "AinvPpneMstpSlayWnonDnon_medicOther";
			Panic = "ApanPpneMstpSnonWnonDnon";
			PlayerSlowB = "AmovPpneMrunSnonWnonDb";
			PlayerSlowF = "AmovPpneMrunSnonWnonDf";
			PlayerSlowL = "AmovPpneMrunSnonWnonDl";
			PlayerSlowLB = "AmovPpneMrunSnonWnonDbl";
			PlayerSlowLF = "AmovPpneMrunSnonWnonDfl";
			PlayerSlowR = "AmovPpneMrunSnonWnonDr";
			PlayerSlowRB = "AmovPpneMrunSnonWnonDbr";
			PlayerSlowRF = "AmovPpneMrunSnonWnonDfr";
			PlayerStand = "AmovPercMstpSnonWnonDnon";
			PlayerTactB = "AmovPpneMrunSnonWnonDb";
			PlayerTactF = "AmovPpneMrunSnonWnonDf";
			PlayerTactL = "AmovPpneMrunSnonWnonDl";
			PlayerTactLB = "AmovPpneMrunSnonWnonDbl";
			PlayerTactLF = "AmovPpneMrunSnonWnonDfl";
			PlayerTactR = "AmovPpneMrunSnonWnonDr";
			PlayerTactRB = "AmovPpneMrunSnonWnonDbr";
			PlayerTactRF = "AmovPpneMrunSnonWnonDfr";
			PlayerWalkB = "AmovPpneMrunSnonWnonDb";
			PlayerWalkF = "AmovPpneMrunSnonWnonDf";
			PlayerWalkL = "AmovPpneMrunSnonWnonDl";
			PlayerWalkLB = "AmovPpneMrunSnonWnonDbl";
			PlayerWalkLF = "AmovPpneMrunSnonWnonDfl";
			PlayerWalkR = "AmovPpneMrunSnonWnonDr";
			PlayerWalkRB = "AmovPpneMrunSnonWnonDbr";
			PlayerWalkRF = "AmovPpneMrunSnonWnonDfr";
			PrimaryWeapon = "AmovPpneMstpSrasWrflDnon";
			putDown = "AmovPpneMstpSnonWnonDnon_AinvPpneMstpSnonWnonDnon_Putdown";
			Relax = "AmovPpneMstpSnonWnonDnon_relax";
			reloadMagazine = "AmovPpneMstpSnonWnonDnon";
			reloadMGun = "AmovPpneMstpSnonWnonDnon";
			reloadMortar = "AmovPpneMstpSnonWnonDnon";
			salute = "";
			SecondaryWeapon = "AmovPpneMstpSrasWlnrDnon";
			sitDown = "";
			SlowB = "AmovPpneMrunSnonWnonDb";
			SlowF = "AmovPpneMrunSnonWnonDf";
			SlowL = "AmovPpneMrunSnonWnonDl";
			SlowLB = "AmovPpneMrunSnonWnonDbl";
			SlowLF = "AmovPpneMrunSnonWnonDfl";
			SlowR = "AmovPpneMrunSnonWnonDr";
			SlowRB = "AmovPpneMrunSnonWnonDbr";
			SlowRF = "AmovPpneMrunSnonWnonDfr";
			stance = "ManStanceProne";
			StartFreefall = "AfalPpneMstpSnonWnonDnon";
			startSwim = "AswmPercMrunSnonWnonDf";
			stop = "AmovPpneMstpSnonWnonDnon";
			stopRelaxed = "AmovPpneMstpSnonWnonDnon";
			strokeGun = "AmovPpneMstpSnonWnonDnon";
			TactB = "AmovPpneMrunSnonWnonDb";
			TactF = "AmovPpneMrunSnonWnonDf";
			TactL = "AmovPpneMrunSnonWnonDl";
			TactLB = "AmovPpneMrunSnonWnonDbl";
			TactLF = "AmovPpneMrunSnonWnonDfl";
			TactR = "AmovPpneMrunSnonWnonDr";
			TactRB = "AmovPpneMrunSnonWnonDbr";
			TactRF = "AmovPpneMrunSnonWnonDfr";
			takeFlag = "AmovPpneMstpSnonWnonDnon";
			throwGrenade = "AwopPpneMstpSgthWnonDnon_Fast_Start";
			throwPrepare = "AwopPpneMstpSgthWnonDnon_start";
			treated = "AmovPpneMstpSnonWnonDnon_healed";
			turnL = "AmovPpneMstpSnonWnonDnon_turnL";
			turnLRelaxed = "AmovPpneMstpSnonWnonDnon_turnL";
			turnR = "AmovPpneMstpSnonWnonDnon_turnR";
			turnRRelaxed = "AmovPpneMstpSnonWnonDnon_turnR";
			turnSpeed = 2.5;
			Up = "AmovPknlMstpSnonWnonDnon";
			upDegree = "ManPosLyingNoWeapon";
			WalkB = "AmovPpneMrunSnonWnonDb";
			WalkF = "AmovPpneMrunSnonWnonDf";
			WalkL = "AmovPpneMrunSnonWnonDl";
			WalkLB = "AmovPpneMrunSnonWnonDbl";
			WalkLF = "AmovPpneMrunSnonWnonDfl";
			WalkR = "AmovPpneMrunSnonWnonDr";
			WalkRB = "AmovPpneMrunSnonWnonDbr";
			WalkRF = "AmovPpneMrunSnonWnonDfr";
			weaponOff = "AmovPpneMstpSnonWnonDnon";
			weaponOn = "AmovPknlMstpSrasWlnrDnon";
		};
		class CivilProneActions_inv: CivilProneActions
		{
			Default = "AinvPpneMstpSnonWnonDnon";
			HandGunOn = "AinvPpneMstpSrasWpstDnon";
			Stop = "AinvPpneMstpSnonWnonDnon";
			StopRelaxed = "AinvPpneMstpSnonWnonDnon";
		};
		class CivilRunActions: CivilStandActions
		{
			salute = "";
			throwPrepare = "AmovPercMrunSnonWnonDf";
			turnSpeed = 4.5;
		};
		class CivilRunActionsB: CivilRunActions
		{
			Crouch = "AmovPknlMrunSnonWnonDb";
			PlayerCrouch = "AmovPknlMrunSnonWnonDb";
			Up = "AmovPknlMrunSnonWnonDb";
		};
		class CivilRunActionsBL: CivilRunActions
		{
			Crouch = "AmovPknlMrunSnonWnonDbl";
			PlayerCrouch = "AmovPknlMrunSnonWnonDbl";
			Up = "AmovPknlMrunSnonWnonDbl";
		};
		class CivilRunActionsBR: CivilRunActions
		{
			Crouch = "AmovPknlMrunSnonWnonDbr";
			PlayerCrouch = "AmovPknlMrunSnonWnonDbr";
			Up = "AmovPknlMrunSnonWnonDbr";
		};
		class CivilRunActionsF: CivilRunActions
		{
			Crouch = "AmovPknlMrunSnonWnonDf";
			PlayerCrouch = "AmovPknlMrunSnonWnonDf";
			Up = "AmovPknlMrunSnonWnonDf";
		};
		class CivilRunActionsFL: CivilRunActions
		{
			Crouch = "AmovPknlMrunSnonWnonDfl";
			PlayerCrouch = "AmovPknlMrunSnonWnonDfl";
			Up = "AmovPknlMrunSnonWnonDfl";
		};
		class CivilRunActionsFR: CivilRunActions
		{
			Crouch = "AmovPknlMrunSnonWnonDfr";
			PlayerCrouch = "AmovPknlMrunSnonWnonDfr";
			Up = "AmovPknlMrunSnonWnonDfr";
		};
		class CivilRunActionsL: CivilRunActions
		{
			Crouch = "AmovPknlMrunSnonWnonDl";
			PlayerCrouch = "AmovPknlMrunSnonWnonDl";
			Up = "AmovPknlMrunSnonWnonDl";
		};
		class CivilRunActionsR: CivilRunActions
		{
			Crouch = "AmovPknlMrunSnonWnonDr";
			PlayerCrouch = "AmovPknlMrunSnonWnonDr";
			Up = "AmovPknlMrunSnonWnonDr";
		};
		class CivilSitActions: CivilStandActions
		{
			default = "AmovPsitMstpSnonWnonDnon_ground";
			Diary = "";
			GetOver = "";
			sitDown = "AmovPercMstpSnonWnonDnon";
			stop = "AmovPsitMstpSnonWnonDnon_ground";
			StopRelaxed = "AmovPsitMstpSnonWnonDnon_ground";
			turnL = "";
			turnR = "";
		};
		class CivilStandActions: NoActions
		{
			binocOff = "AmovPercMstpSnonWnonDnon";
			binocOn = "AwopPercMstpSoptWbinDnon_non";
			Binoculars = "AmovPercMstpSoptWbinDnon";
			BottomDive = "AbdvPercMstpSnonWnonDnon";
			bottomSwim = "AbswPercMrunSnonWnonDf";
			CanNotMove = "AmovPercMstpSnonWnonDnon";
			Civil = "AmovPercMstpSnonWnonDnon";
			CivilLying = "AmovPpneMstpSnonWnonDnon";
			Combat = "AmovPercMstpSrasWrflDnon";
			Crouch = "AmovPknlMstpSnonWnonDnon";
			default = "AmovPercMstpSnonWnonDnon";
			Diary = "";
			down = "AmovPpneMstpSnonWnonDnon";
			EvasiveLeft = "AmovPercMevaSnonWnonDfl";
			EvasiveRight = "AmovPercMevaSnonWnonDfr";
			FastB = "AmovPercMrunSnonWnonDb";
			FastF = "AmovPercMevaSnonWnonDf";
			FastL = "AmovPercMrunSnonWnonDl";
			FastLB = "AmovPercMrunSnonWnonDbl";
			FastLF = "AmovPercMevaSnonWnonDfl";
			FastR = "AmovPercMrunSnonWnonDr";
			FastRB = "AmovPercMrunSnonWnonDbr";
			FastRF = "AmovPercMevaSnonWnonDfr";
			FireNotPossible = "AmovPercMstpSnonWnonDnon";
			Gear = "AinvPercMstpSnonWnonDnon";
			gestureHi[] = {"GestureHi", "Gesture"};
			gestureHiB[] = {"GestureHiB", "Gesture"};
			gestureHiC[] = {"GestureHiC", "Gesture"};
			GetInBoat = "GetInHeli_Transport_01Cargo";
			GetInHelicopterCargo = "GetInHelicopterCargo";
			GetInHigh = "AmovPercMstpSnonWnonDnon_AcrgPknlMstpSnonWnonDnon_getInHigh";
			GetInLow = "AmovPercMstpSnonWnonDnon_AcrgPknlMstpSnonWnonDnon_getInLow";
			GetInMedium = "AmovPercMstpSnonWnonDnon_AcrgPknlMstpSnonWnonDnon_getInMedium";
			GetInMRAP_01 = "GetInMRAP_01";
			GetInMRAP_01_cargo = "GetInMRAP_01_cargo";
			GetInSDV = "AmovPercMstpSnonWnonDnon_AcrgPknlMstpSnonWnonDnon_getInHigh";
			GetInVertical = "GetIn_Vertical_Unarmed";
			GetOutBoat = "AcrgPknlMstpSnonWnonDnon_AmovPercMstpSrasWrflDnon_getOutLow";
			GetOutHelicopterCargo = "GetOutHelicopterCargo";
			GetOutHigh = "AcrgPknlMstpSnonWnonDnon_AmovPercMstpSnonWnonDnon_getOutHigh";
			GetOutHighHemtt = "AcrgPknlMstpSnonWnonDnon_AmovPercMstpSnonWnonDnon_getOutHighHemtt";
			GetOutHighZamak = "AcrgPknlMstpSnonWnonDnon_AmovPercMstpSnonWnonDnon_getOutHighZamak";
			GetOutLow = "AcrgPknlMstpSnonWnonDnon_AmovPercMstpSnonWnonDnon_getOutLow";
			GetOutMedium = "AcrgPknlMstpSnonWnonDnon_AmovPercMstpSnonWnonDnon_getOutMedium";
			GetOutMRAP_01 = "GetOutMRAP_01";
			GetOutMRAP_01_cargo = "GetOutMRAP_01_cargo";
			GetOutSDV = "AcrgPknlMstpSnonWnonDnon_AmovPercMstpSnonWnonDnon_getOutHigh";
			getOver = "AovrPercMstpSnonWnonDf";
			grabCarry = "Helper_SwitchToCarryNon";
			grabDrag = "AmovPercMstpSnonWnonDnon_AcinPknlMwlkSnonWnonDb_2";
			grabDragged = "AinjPpneMrunSnonWnonDb_grab";
			handGunOn = "AmovPercMstpSrasWpstDnon";
			leanLRot = 0.57;
			leanLShift = 0.07;
			leanRRot = 0.57;
			leanRShift = 0.1;
			limitFast = 4;
			LimpB = "AmovPercMlmpSnonWnonDb";
			LimpF = "AmovPercMlmpSnonWnonDf";
			LimpL = "AmovPercMlmpSnonWnonDl";
			LimpLB = "AmovPercMlmpSnonWnonDbl";
			LimpLF = "AmovPercMlmpSnonWnonDfl";
			LimpR = "AmovPercMlmpSnonWnonDr";
			LimpRB = "AmovPercMlmpSnonWnonDbr";
			LimpRF = "AmovPercMlmpSnonWnonDfr";
			Lying = "AmovPpneMstpSnonWnonDnon";
			medic = "AinvPknlMstpSlayWnonDnon_medic";
			medicOther = "AinvPknlMstpSlayWnonDnon_medicOther";
			medicStartUp = "AinvPknlMstpSnonWnonDnon_medicUp0S";
			Panic = "ApanPercMstpSnonWnonDnon";
			PlayerCrouch = "AmovPknlMstpSnonWnonDnon";
			PlayerProne = "AmovPpneMstpSnonWnonDnon";
			PlayerSlowB = "AmovPercMrunSnonWnonDb";
			PlayerSlowF = "AmovPercMrunSnonWnonDf";
			PlayerSlowL = "AmovPercMrunSnonWnonDl";
			PlayerSlowLB = "AmovPercMrunSnonWnonDbl";
			PlayerSlowLF = "AmovPercMrunSnonWnonDfl";
			PlayerSlowR = "AmovPercMrunSnonWnonDr";
			PlayerSlowRB = "AmovPercMrunSnonWnonDbr";
			PlayerSlowRF = "AmovPercMrunSnonWnonDfr";
			PlayerTactB = "AmovPercMwlkSnonWnonDb";
			PlayerTactF = "AmovPercMwlkSnonWnonDf";
			PlayerTactL = "AmovPercMwlkSnonWnonDl";
			PlayerTactLB = "AmovPercMwlkSnonWnonDbl";
			PlayerTactLF = "AmovPercMwlkSnonWnonDfl";
			PlayerTactR = "AmovPercMwlkSnonWnonDr";
			PlayerTactRB = "AmovPercMwlkSnonWnonDbr";
			PlayerTactRF = "AmovPercMwlkSnonWnonDfr";
			PlayerWalkB = "AmovPercMwlkSnonWnonDb";
			PlayerWalkF = "AmovPercMwlkSnonWnonDf";
			PlayerWalkL = "AmovPercMwlkSnonWnonDl";
			PlayerWalkLB = "AmovPercMwlkSnonWnonDbl";
			PlayerWalkLF = "AmovPercMwlkSnonWnonDfl";
			PlayerWalkR = "AmovPercMwlkSnonWnonDr";
			PlayerWalkRB = "AmovPercMwlkSnonWnonDbr";
			PlayerWalkRF = "AmovPercMwlkSnonWnonDfr";
			PrimaryWeapon = "AmovPercMstpSrasWrflDnon";
			putDown = "AmovPercMstpSnonWnonDnon_AinvPercMstpSnonWnonDnon_Putdown";
			Relax = "AmovPknlMstpSnonWnonDnon_relax";
			reloadGM6 = "reloadGM6";
			reloadMagazine = "AmovPercMstpSnonWnonDnon";
			reloadMGun = "AmovPercMstpSnonWnonDnon";
			reloadMortar = "AmovPercMstpSnonWnonDnon";
			salute = "AmovPercMstpSnonWnonDnon_salute";
			saluteOff = "AmovPercMstpSnonWnonDnon";
			SecondaryWeapon = "AmovPercMstpSrasWlnrDnon";
			sitDown = "AmovPsitMstpSnonWnonDnon_ground";
			SlowB = "AmovPercMrunSnonWnonDb";
			SlowF = "AmovPercMrunSnonWnonDf";
			SlowL = "AmovPercMrunSnonWnonDl";
			SlowLB = "AmovPercMrunSnonWnonDbl";
			SlowLF = "AmovPercMrunSnonWnonDfl";
			SlowR = "AmovPercMrunSnonWnonDr";
			SlowRB = "AmovPercMrunSnonWnonDbr";
			SlowRF = "AmovPercMrunSnonWnonDfr";
			stance = "ManStanceStand";
			Stand = "AmovPercMstpSnonWnonDnon";
			startDive = "AdvePercMstpSnonWnonDnon";
			StartFreefall = "AfalPercMstpSnonWnonDnon";
			startSwim = "AswmPercMrunSnonWnonDf";
			stop = "AmovPercMstpSnonWnonDnon";
			stopRelaxed = "AmovPercMstpSnonWnonDnon";
			strokeGun = "AmovPercMstpSnonWnonDnon";
			SurfaceDive = "AsdvPercMstpSnonWnonDnon";
			surfaceSwim = "AsswPercMrunSnonWnonDf";
			Surrender = "AmovPercMstpSsurWnonDnon";
			TactB = "AmovPercMwlkSnonWnonDb";
			TactF = "AmovPercMwlkSnonWnonDf";
			TactL = "AmovPercMwlkSnonWnonDl";
			TactLB = "AmovPercMwlkSnonWnonDbl";
			TactLF = "AmovPercMwlkSnonWnonDfl";
			TactR = "AmovPercMwlkSnonWnonDr";
			TactRB = "AmovPercMwlkSnonWnonDbr";
			TactRF = "AmovPercMwlkSnonWnonDfr";
			takeFlag = "AinvPknlMstpSnonWnonDnon_3";
			throwGrenade[] = {"GestureThrowGrenadeUna", "Gesture"};
			throwPrepare = "AwopPercMstpSgthWnonDnon_start";
			treated = "AinvPknlMstpSnonWnonDnon_healed_2";
			turnL = "AmovPercMstpSnonWnonDnon_turnL";
			turnLRelaxed = "AmovPercMstpSnonWnonDnon_turnL";
			turnR = "AmovPercMstpSnonWnonDnon_turnR";
			turnRRelaxed = "AmovPercMstpSnonWnonDnon_turnR";
			turnSpeed = 8;
			up = "AmovPknlMstpSnonWnonDnon";
			upDegree = "ManPosNoWeapon";
			WalkB = "AmovPercMwlkSnonWnonDb";
			WalkF = "AmovPercMwlkSnonWnonDf";
			WalkL = "AmovPercMwlkSnonWnonDl";
			WalkLB = "AmovPercMwlkSnonWnonDbl";
			WalkLF = "AmovPercMwlkSnonWnonDfl";
			WalkR = "AmovPercMwlkSnonWnonDr";
			WalkRB = "AmovPercMwlkSnonWnonDbr";
			WalkRF = "AmovPercMwlkSnonWnonDfr";
			weaponOff = "AmovPercMstpSnonWnonDnon";
			weaponOn = "AmovPercMstpSrasWlnrDnon";
		};
		class CivilStandActions_inv: CivilStandActions
		{
			Default = "AinvPercMstpSnonWnonDnon";
			HandGunOn = "AinvPercMstpSrasWpstDnon";
			PlayerStand = "AmovPercMstpSnonWnonDnon";
			Stop = "AinvPercMstpSnonWnonDnon";
			StopRelaxed = "AinvPercMstpSnonWnonDnon";
		};
		class CivilStandActions_noSalute: CivilStandActions
		{
			Salute = "";
		};
		class CivilStandActionsLimpB: CivilStandActions
		{
			Up = "AmovPknlMlmpSnonWnonDb";
		};
		class CivilStandActionsLimpF: CivilStandActions
		{
			Up = "AmovPknlMlmpSnonWnonDf";
		};
		class CivilStandActionsLimpL: CivilStandActions
		{
			Up = "AmovPknlMlmpSnonWnonDl";
		};
		class CivilStandActionsLimpLB: CivilStandActions
		{
			Up = "AmovPknlMlmpSnonWnonDbl";
		};
		class CivilStandActionsLimpLF: CivilStandActions
		{
			Up = "AmovPknlMlmpSnonWnonDfl";
		};
		class CivilStandActionsLimpR: CivilStandActions
		{
			Up = "AmovPknlMlmpSnonWnonDr";
		};
		class CivilStandActionsLimpRB: CivilStandActions
		{
			Up = "AmovPknlMlmpSnonWnonDbr";
		};
		class CivilStandActionsLimpRF: CivilStandActions
		{
			Up = "AmovPknlMlmpSnonWnonDfr";
		};
		class CivilStandCutsceneActions: NoActions
		{
			Combat = "Acts_CivilStand_Default";
			Default = "Acts_CivilStand_Default";
			Stop = "Acts_CivilStand_Default";
			StopRelaxed = "Acts_CivilStand_Default";
		};
		class CivilStandSaluteActions: CivilStandActions
		{
			default = "AmovPercMstpSnonWnonDnon_Salute";
			salute = "AmovPercMstpSnonWnonDnon";
			stop = "AmovPercMstpSnonWnonDnon_Salute";
			stopRelaxed = "AmovPercMstpSnonWnonDnon_Salute";
		};
		class CivilStandSurrenderActions: CivilStandActions
		{
			default = "AmovPercMstpSsurWnonDnon";
			stop = "AmovPercMstpSsurWnonDnon";
			StopRelaxed = "AmovPercMstpSsurWnonDnon";
			turnL = "";
			turnR = "";
		};
		class CivilStandTakeActions: CivilStandActions
		{
			default = "AinvPknlMstpSnonWnonDnon_3";
			salute = "";
			sitDown = "";
			stop = "AinvPknlMstpSnonWnonDnon_3";
			StopRelaxed = "AinvPknlMstpSnonWnonDnon_3";
		};
		class CivilWlkActionsB: CivilWlkActionsF
		{
			Crouch = "AmovPknlMwlkSnonWnonDb";
			PlayerCrouch = "AmovPknlMwlkSnonWnonDb";
			Up = "AmovPknlMwlkSnonWnonDb";
		};
		class CivilWlkActionsBL: CivilWlkActionsF
		{
			Crouch = "AmovPknlMwlkSnonWnonDbl";
			PlayerCrouch = "AmovPknlMwlkSnonWnonDbl";
			Up = "AmovPknlMwlkSnonWnonDbl";
		};
		class CivilWlkActionsBR: CivilWlkActionsF
		{
			Crouch = "AmovPknlMwlkSnonWnonDbr";
			PlayerCrouch = "AmovPknlMwlkSnonWnonDbr";
			Up = "AmovPknlMwlkSnonWnonDbr";
		};
		class CivilWlkActionsF: CivilRunActionsF
		{
			Crouch = "AmovPknlMwlkSnonWnonDf";
			PlayerCrouch = "AmovPknlMwlkSnonWnonDf";
			turnSpeed = 8;
			Up = "AmovPknlMwlkSnonWnonDf";
		};
		class CivilWlkActionsFL: CivilWlkActionsF
		{
			Crouch = "AmovPknlMwlkSnonWnonDfl";
			PlayerCrouch = "AmovPknlMwlkSnonWnonDfl";
			Up = "AmovPknlMwlkSnonWnonDfl";
		};
		class CivilWlkActionsFR: CivilWlkActionsF
		{
			Crouch = "AmovPknlMwlkSnonWnonDfr";
			PlayerCrouch = "AmovPknlMwlkSnonWnonDfr";
			Up = "AmovPknlMwlkSnonWnonDfr";
		};
		class CivilWlkActionsL: CivilWlkActionsF
		{
			Crouch = "AmovPknlMwlkSnonWnonDl";
			PlayerCrouch = "AmovPknlMwlkSnonWnonDl";
			Up = "AmovPknlMwlkSnonWnonDl";
		};
		class CivilWlkActionsR: CivilWlkActionsF
		{
			Crouch = "AmovPknlMwlkSnonWnonDr";
			PlayerCrouch = "AmovPknlMwlkSnonWnonDr";
			Up = "AmovPknlMwlkSnonWnonDr";
		};
		class CutsceneBreachingFour: StaticCutsceneLoop
		{
			Civil = "Acts_Breaching_Four_B";
			Combat = "Acts_Breaching_Four_B";
			default = "Acts_Breaching_Four_B";
			HandGunOn = "Acts_Breaching_Four_B";
			PrimaryWeapon = "Acts_Breaching_Four_B";
			stop = "Acts_Breaching_Four_B";
			stopRelaxed = "Acts_Breaching_Four_B";
		};
		class CutsceneBreachingThree: StaticCutsceneLoop
		{
			Civil = "Acts_Breaching_Three_B";
			Combat = "Acts_Breaching_Three_B";
			default = "Acts_Breaching_Three_B";
			HandGunOn = "Acts_Breaching_Three_B";
			PrimaryWeapon = "Acts_Breaching_Three_B";
			stop = "Acts_Breaching_Three_B";
			stopRelaxed = "Acts_Breaching_Three_B";
		};
		class CutsceneBreachingTwo: StaticCutsceneLoop
		{
			Civil = "Acts_Breaching_Two_B";
			Combat = "Acts_Breaching_Two_B";
			default = "Acts_Breaching_Two_B";
			HandGunOn = "Acts_Breaching_Two_B";
			PrimaryWeapon = "Acts_Breaching_Two_B";
			stop = "Acts_Breaching_Two_B";
			stopRelaxed = "Acts_Breaching_Two_B";
		};
		class CutsceneBriefingSA: StaticCutsceneLoop
		{
			Civil = "Acts_Briefing_SA_Loop";
			Combat = "Acts_Briefing_SA_Loop";
			default = "Acts_Briefing_SA_Loop";
			HandGunOn = "Acts_Briefing_SA_Loop";
			stop = "Acts_Briefing_SA_Loop";
			stopRelaxed = "Acts_Briefing_SA_Loop";
		};
		class CutsceneBriefingSA_StartingLoop: StaticCutsceneLoop
		{
			Civil = "Acts_Briefing_SA_StartLoop";
			Combat = "Acts_Briefing_SA_StartLoop";
			default = "Acts_Briefing_SA_StartLoop";
			HandGunOn = "Acts_Briefing_SA_StartLoop";
			stop = "Acts_Briefing_SA_StartLoop";
			stopRelaxed = "Acts_Briefing_SA_StartLoop";
		};
		class CutsceneBriefingSB: StaticCutsceneLoop
		{
			Civil = "Acts_Briefing_SB_Loop";
			Combat = "Acts_Briefing_SB_Loop";
			default = "Acts_Briefing_SB_Loop";
			HandGunOn = "Acts_Briefing_SB_Loop";
			stop = "Acts_Briefing_SB_Loop";
			stopRelaxed = "Acts_Briefing_SB_Loop";
		};
		class CutsceneBriefingSB_StartingLoop: StaticCutsceneLoop
		{
			Civil = "Acts_Briefing_SB_StartLoop";
			Combat = "Acts_Briefing_SB_StartLoop";
			default = "Acts_Briefing_SB_StartLoop";
			HandGunOn = "Acts_Briefing_SB_StartLoop";
			stop = "Acts_Briefing_SB_StartLoop";
			stopRelaxed = "Acts_Briefing_SB_StartLoop";
		};
		class CutsceneBriefingSC: StaticCutsceneLoop
		{
			Civil = "Acts_Briefing_SC_Loop";
			Combat = "Acts_Briefing_SC_Loop";
			default = "Acts_Briefing_SC_Loop";
			HandGunOn = "Acts_Briefing_SC_Loop";
			stop = "Acts_Briefing_SC_Loop";
			stopRelaxed = "Acts_Briefing_SC_Loop";
		};
		class CutsceneBriefingSC_StartingLoop: StaticCutsceneLoop
		{
			Civil = "Acts_Briefing_SC_StartLoop";
			Combat = "Acts_Briefing_SC_StartLoop";
			default = "Acts_Briefing_SC_StartLoop";
			HandGunOn = "Acts_Briefing_SC_StartLoop";
			stop = "Acts_Briefing_SC_StartLoop";
			stopRelaxed = "Acts_Briefing_SC_StartLoop";
		};
		class CutsceneExecutioner: StaticCutsceneLoop
		{
			Civil = "Acts_Executioner_StandingLoop";
			Combat = "Acts_Executioner_StandingLoop";
			default = "Acts_Executioner_StandingLoop";
			HandGunOn = "Acts_Executioner_StandingLoop";
			stop = "Acts_Executioner_StandingLoop";
			stopRelaxed = "Acts_Executioner_StandingLoop";
		};
		class CutsceneExecutionVictim: StaticCutsceneLoop
		{
			Civil = "Acts_ExecutionVictim_Loop";
			Combat = "Acts_ExecutionVictim_Loop";
			default = "Acts_ExecutionVictim_Loop";
			HandGunOn = "Acts_ExecutionVictim_Loop";
			stop = "Acts_ExecutionVictim_Loop";
			stopRelaxed = "Acts_ExecutionVictim_Loop";
		};
		class CutsceneExecutionVictimDead: StaticCutsceneLoop
		{
			Civil = "Acts_executionVictim_KillTerminal";
			Combat = "Acts_executionVictim_KillTerminal";
			default = "Acts_executionVictim_KillTerminal";
			HandGunOn = "Acts_executionVictim_KillTerminal";
			stop = "Acts_executionVictim_KillTerminal";
			stopRelaxed = "Acts_executionVictim_KillTerminal";
		};
		class CutsceneLeaveCivilStand: StaticCutsceneLoop
		{
			Civil = "AmovPercMstpSnonWnonDnon";
			Combat = "AmovPercMstpSnonWnonDnon";
			default = "AmovPercMstpSnonWnonDnon";
			HandGunOn = "AmovPercMstpSnonWnonDnon";
			stop = "AmovPercMstpSnonWnonDnon";
			stopRelaxed = "AmovPercMstpSnonWnonDnon";
		};
		class CutsceneLoop: NoActions
		{
			Die = "DeadState";
			LadderOnDown = "";
			LadderOnUp = "";
			stance = "ManStanceStand";
			stop = "Acts_PercMwlkSlowWrflDf";
			TestDriver = "";
			TestDriverOut = "";
			TestGunner = "";
			upDegree = "ManPosStand";
		};
		class CutsceneMillerChopperLoop: StaticCutsceneLoop
		{
			Civil = "acts_millerChopper_loop";
			Combat = "acts_millerChopper_loop";
			default = "acts_millerChopper_loop";
			HandGunOn = "acts_millerChopper_loop";
			PrimaryWeapon = "acts_millerChopper_loop";
			stop = "acts_millerChopper_loop";
			stopRelaxed = "acts_millerChopper_loop";
		};
		class CutsceneMillerDeskCrouchLoop: StaticCutsceneLoop
		{
			Civil = "acts_millerDisarming_deskCrouch_loop";
			Combat = "acts_millerDisarming_deskCrouch_loop";
			default = "acts_millerDisarming_deskCrouch_loop";
			HandGunOn = "acts_millerDisarming_deskCrouch_loop";
			PrimaryWeapon = "acts_millerDisarming_deskCrouch_loop";
			stop = "acts_millerDisarming_deskCrouch_loop";
			stopRelaxed = "acts_millerDisarming_deskCrouch_loop";
		};
		class CutsceneMillerDeskLoop: StaticCutsceneLoop
		{
			Civil = "acts_millerDisarming_deskLoop";
			Combat = "acts_millerDisarming_deskLoop";
			default = "acts_millerDisarming_deskLoop";
			HandGunOn = "acts_millerDisarming_deskLoop";
			PrimaryWeapon = "acts_millerDisarming_deskLoop";
			stop = "acts_millerDisarming_deskLoop";
			stopRelaxed = "acts_millerDisarming_deskLoop";
		};
		class CutsceneMillerIdle: StaticCutsceneLoop
		{
			Civil = "acts_millerIdle";
			Combat = "acts_millerIdle";
			default = "acts_millerIdle";
			HandGunOn = "acts_millerIdle";
			PrimaryWeapon = "acts_millerIdle";
			stop = "acts_millerIdle";
			stopRelaxed = "acts_millerIdle";
		};
		class CutsceneSupportBack: StaticCutsceneLoop
		{
			Civil = "Acts_SupportTeam_Back_KneelLoop";
			Combat = "Acts_SupportTeam_Back_KneelLoop";
			default = "Acts_SupportTeam_Back_KneelLoop";
			HandGunOn = "Acts_SupportTeam_Back_KneelLoop";
			stop = "Acts_SupportTeam_Back_KneelLoop";
			stopRelaxed = "Acts_SupportTeam_Back_KneelLoop";
		};
		class CutsceneSupportFront: StaticCutsceneLoop
		{
			Civil = "Acts_SupportTeam_Front_KneelLoop";
			Combat = "Acts_SupportTeam_Front_KneelLoop";
			default = "Acts_SupportTeam_Front_KneelLoop";
			HandGunOn = "Acts_SupportTeam_Front_KneelLoop";
			stop = "Acts_SupportTeam_Front_KneelLoop";
			stopRelaxed = "Acts_SupportTeam_Front_KneelLoop";
		};
		class CutsceneSupportLeft: StaticCutsceneLoop
		{
			Civil = "Acts_SupportTeam_Left_KneelLoop";
			Combat = "Acts_SupportTeam_Left_KneelLoop";
			default = "Acts_SupportTeam_Left_KneelLoop";
			HandGunOn = "Acts_SupportTeam_Left_KneelLoop";
			stop = "Acts_SupportTeam_Left_KneelLoop";
			stopRelaxed = "Acts_SupportTeam_Left_KneelLoop";
		};
		class CutsceneSupportRight: StaticCutsceneLoop
		{
			Civil = "Acts_SupportTeam_Right_KneelLoop";
			Combat = "Acts_SupportTeam_Right_KneelLoop";
			default = "Acts_SupportTeam_Right_KneelLoop";
			HandGunOn = "Acts_SupportTeam_Right_KneelLoop";
			stop = "Acts_SupportTeam_Right_KneelLoop";
			stopRelaxed = "Acts_SupportTeam_Right_KneelLoop";
		};
		class DeadActions: NoActions
		{
			bottomSwim = "AbswPercMstpSnonWnonDnon";
			Die = "DeadState";
			LadderOnDown = "";
			LadderOnUp = "";
			stance = "ManStanceProne";
			startSwim = "AswmPercMstpSnonWnonDnon";
			surfaceSwim = "AsswPercMstpSnonWnonDnon";
			TestDriver = "";
			TestDriverOut = "";
			TestGunner = "";
			upDegree = "ManPosDead";
		};
		class DeployedProneActions: RifleProneActions
		{
			GestureReload_smg_03[] = {"RifleReloadDeployed_smg_03", "Gesture"};
			GestureReloadAK12[] = {"RifleReloadDeployedAK12", "Gesture"};
			GestureReloadAK12_Drum[] = {"RifleReloadDeployedAK12_Drum", "Gesture"};
			GestureReloadAKM[] = {"RifleReloadDeployedAKM", "Gesture"};
			GestureReloadAKM_Drum[] = {"RifleReloadDeployedAKM_Drum", "Gesture"};
			GestureReloadAKS[] = {"RifleReloadDeployedAKS", "Gesture"};
			GestureReloadARX[] = {"RifleReloadDeployedARX", "Gesture"};
			GestureReloadARX2[] = {"RifleReloadDeployedARX2", "Gesture"};
			GestureReloadCTAR[] = {"RifleReloadDeployedCTAR", "Gesture"};
			GestureReloadDMR[] = {"RifleReloadDeployedDMR", "Gesture"};
			GestureReloadDMR02[] = {"RifleReloadDeployedDMR02", "Gesture"};
			GestureReloadDMR03[] = {"RifleReloadDeployedDMR03", "Gesture"};
			GestureReloadDMR04[] = {"RifleReloadDeployedDMR04", "Gesture"};
			GestureReloadDMR05[] = {"RifleReloadDeployedDMR05", "Gesture"};
			GestureReloadDMR06[] = {"RifleReloadDeployedDMR06", "Gesture"};
			GestureReloadDMR07[] = {"RifleReloadDeployedDMR07", "Gesture"};
			GestureReloadEBR[] = {"RifleReloadDeployedEBR", "Gesture"};
			GestureReloadHunterShotgun01[] = {"RifleReloadDeployedHunterShotgun01", "Gesture"};
			GestureReloadKatiba[] = {"RifleReloadDeployedKatiba", "Gesture"};
			GestureReloadKatibaUGL[] = {"RifleReloadDeployedKatibaUGL", "Gesture"};
			GestureReloadLIM[] = {"RifleReloadDeployedLIM", "Gesture"};
			GestureReloadLRR[] = {"RifleReloadDeployedLRR", "Gesture"};
			GestureReloadM200[] = {"RifleReloadDeployedM200", "Gesture"};
			GestureReloadM4SSAS[] = {"RifleReloadDeployedM4SSAS", "Gesture"};
			GestureReloadMk20[] = {"RifleReloadDeployedMk20", "Gesture"};
			GestureReloadMk20UGL[] = {"RifleReloadDeployedMk20UGL", "Gesture"};
			GestureReloadMMG01[] = {"RifleReloadDeployedMMG01", "Gesture"};
			GestureReloadMMG02[] = {"RifleReloadDeployedMMG02", "Gesture"};
			GestureReloadMSBS[] = {"RifleReloadDeployedMSBS", "Gesture"};
			GestureReloadMSBS_UBS[] = {"RifleReloadDeployedMSBS_UBS", "Gesture"};
			GestureReloadMSBS_UGL[] = {"RifleReloadDeployedMSBS_UGL", "Gesture"};
			GestureReloadMX[] = {"RifleReloadDeployedMX", "Gesture"};
			GestureReloadMXCompact[] = {"RifleReloadDeployedMXCompact", "Gesture"};
			GestureReloadMXSniper[] = {"RifleReloadDeployedMXSniper", "Gesture"};
			GestureReloadMXUGL[] = {"RifleReloadDeployedMXUGL", "Gesture"};
			GestureReloadSDAR[] = {"RifleReloadDeployedSDAR", "Gesture"};
			GestureReloadSMG_01[] = {"RifleReloadDeployedSMG_01", "Gesture"};
			GestureReloadSMG_02[] = {"RifleReloadDeployedSMG_02", "Gesture"};
			GestureReloadSMG_03[] = {"RifleReloadDeployedSMG_03", "Gesture"};
			GestureReloadSMG_05[] = {"RifleReloadDeployedSMG_05", "Gesture"};
			GestureReloadSPAR_01[] = {"RifleReloadDeployedSPAR_01", "Gesture"};
			GestureReloadSPAR_02[] = {"RifleReloadDeployedSPAR_02", "Gesture"};
			GestureReloadSPARUGL[] = {"RifleReloadDeployedSPARUGL", "Gesture"};
			GestureReloadTRG[] = {"RifleReloadDeployedTRG", "Gesture"};
			GestureReloadTRGUGL[] = {"RifleReloadDeployedTRGUGL", "Gesture"};
			ReloadGM6[] = {"RifleReloadDeployedGM6", "Gesture"};
		};
		class DivingActions: NoActions
		{
			BottomDive = "AbdvPercMstpSnonWnonDnon";
			BottomSwim = "AbswPercMstpSnonWnonDnon";
			default = "AdvePercMstpSnonWnonDnon";
			FastB = "AdvePercMrunSnonWnonDb";
			FastF = "AdvePercMsprSnonWnonDf";
			FastL = "AdvePercMrunSnonWnonDl";
			FastLB = "AdvePercMrunSnonWnonDbl";
			FastLF = "AdvePercMrunSnonWnonDfl";
			FastR = "AdvePercMrunSnonWnonDr";
			FastRB = "AdvePercMrunSnonWnonDbr";
			FastRF = "AdvePercMrunSnonWnonDfr";
			GetInBoat = "AmovPercMstpSnonWnonDnon_AcrgPknlMstpSnonWnonDnon_getInHigh";
			GetInSDV = "AdvePercMstpSnonWnonDnon_GetInSDV";
			GetOutBoat = "AcrgPknlMstpSnonWnonDnon_AmovPercMstpSrasWrflDnon_getOutHigh";
			GetOutPara = "AdvePercMstpSnonWnonDnon";
			GetOutSDV = "AdvePercMstpSnonWnonDnon_GetOutSDV";
			limitFast = 3.2;
			LimpB = "AdvePercMwlkSnonWnonDb";
			LimpF = "AdvePercMwlkSnonWnonDf";
			LimpL = "AdvePercMwlkSnonWnonDl";
			LimpLB = "AdvePercMwlkSnonWnonDbl";
			LimpLF = "AdvePercMwlkSnonWnonDfl";
			LimpR = "AdvePercMwlkSnonWnonDr";
			LimpRB = "AdvePercMwlkSnonWnonDbr";
			LimpRF = "AdvePercMwlkSnonWnonDfr";
			medic = "AdvePercMstpSnonWnonDnon_AdvePercMstpSnonWnonDnon_putDown";
			PlayerSlowB = "AdvePercMrunSnonWnonDb";
			PlayerSlowF = "AdvePercMrunSnonWnonDf";
			PlayerSlowL = "AdvePercMrunSnonWnonDl";
			PlayerSlowLB = "AdvePercMrunSnonWnonDbl";
			PlayerSlowLF = "AdvePercMrunSnonWnonDfl";
			PlayerSlowR = "AdvePercMrunSnonWnonDr";
			PlayerSlowRB = "AdvePercMrunSnonWnonDbr";
			PlayerSlowRF = "AdvePercMrunSnonWnonDfr";
			PlayerTactB = "AdvePercMtacSnonWnonDb";
			PlayerTactF = "AdvePercMtacSnonWnonDf";
			PlayerTactL = "AdvePercMtacSnonWnonDl";
			PlayerTactLB = "AdvePercMtacSnonWnonDbl";
			PlayerTactLF = "AdvePercMtacSnonWnonDfl";
			PlayerTactR = "AdvePercMtacSnonWnonDr";
			PlayerTactRB = "AdvePercMtacSnonWnonDbr";
			PlayerTactRF = "AdvePercMtacSnonWnonDfr";
			PlayerWalkB = "AdvePercMwlkSnonWnonDb";
			PlayerWalkF = "AdvePercMwlkSnonWnonDf";
			PlayerWalkL = "AdvePercMwlkSnonWnonDl";
			PlayerWalkLB = "AdvePercMwlkSnonWnonDbl";
			PlayerWalkLF = "AdvePercMwlkSnonWnonDfl";
			PlayerWalkR = "AdvePercMwlkSnonWnonDr";
			PlayerWalkRB = "AdvePercMwlkSnonWnonDbr";
			PlayerWalkRF = "AdvePercMwlkSnonWnonDfr";
			PrimaryWeapon = "AdvePercMstpSnonWrflDnon";
			putDown = "AdvePercMstpSnonWnonDnon_AdvePercMstpSnonWnonDnon_putDown";
			relax = "AdvePercMstpSnonWnonDnon_relax";
			SlowB = "AdvePercMrunSnonWnonDb";
			SlowF = "AdvePercMrunSnonWnonDf";
			SlowL = "AdvePercMrunSnonWnonDl";
			SlowLB = "AdvePercMrunSnonWnonDbl";
			SlowLF = "AdvePercMrunSnonWnonDfl";
			SlowR = "AdvePercMrunSnonWnonDr";
			SlowRB = "AdvePercMrunSnonWnonDbr";
			SlowRF = "AdvePercMrunSnonWnonDfr";
			stop = "AdvePercMstpSnonWnonDnon";
			stopDive = "AmovPercMstpSnonWnonDnon";
			stopRelaxed = "AdvePercMstpSnonWnonDnon";
			SurfaceDive = "AsdvPercMstpSnonWnonDnon";
			SurfaceSwim = "AsswPercMstpSnonWnonDnon";
			swimDown = "AdvePercMstpSnonWnonDnon_goDown";
			swimUp = "AdvePercMstpSnonWnonDnon_goup";
			TactB = "AdvePercMtacSnonWnonDb";
			TactF = "AdvePercMtacSnonWnonDf";
			TactL = "AdvePercMtacSnonWnonDl";
			TactLB = "AdvePercMtacSnonWnonDbl";
			TactLF = "AdvePercMtacSnonWnonDfl";
			TactR = "AdvePercMtacSnonWnonDr";
			TactRB = "AdvePercMtacSnonWnonDbr";
			TactRF = "AdvePercMtacSnonWnonDfr";
			turnL = "AdvePercMstpSnonWnonDnon_turnL";
			turnR = "AdvePercMstpSnonWnonDnon_turnR";
			upDegree = "ManPosDiving";
			WalkB = "AdvePercMwlkSnonWnonDb";
			WalkF = "AdvePercMwlkSnonWnonDf";
			WalkL = "AdvePercMwlkSnonWnonDl";
			WalkLB = "AdvePercMwlkSnonWnonDbl";
			WalkLF = "AdvePercMwlkSnonWnonDfl";
			WalkR = "AdvePercMwlkSnonWnonDr";
			WalkRB = "AdvePercMwlkSnonWnonDbr";
			WalkRF = "AdvePercMwlkSnonWnonDfr";
		};
		class DivingActionsFastF: DivingActions
		{
			BottomDive = "AbdvPercMsprSnonWnonDf";
			StartDive = "AdvePercMsprSnonWnonDf";
			SurfaceDive = "AsdvPercMsprSnonWnonDf";
		};
		class DivingActionsGoingOut: DivingActions
		{
			Civil = "AmovPercMstpSnonWnonDnon";
			Combat = "AmovPercMstpSrasWrflDnon";
			Default = "AmovPercMstpSnonWnonDnon";
			Stop = "AmovPercMstpSrasWrflDnon";
			upDegree = "ManPosGoingFromWater";
		};
		class DivingActionsRunB: DivingActions
		{
			BottomDive = "AbdvPercMrunSnonWnonDb";
			StartDive = "AdvePercMrunSnonWnonDb";
			SurfaceDive = "AsdvPercMrunSnonWnonDb";
		};
		class DivingActionsRunBL: DivingActions
		{
			BottomDive = "AbdvPercMrunSnonWnonDbl";
			StartDive = "AdvePercMrunSnonWnonDbl";
			SurfaceDive = "AsdvPercMrunSnonWnonDbl";
		};
		class DivingActionsRunBR: DivingActions
		{
			BottomDive = "AbdvPercMrunSnonWnonDbr";
			StartDive = "AdvePercMrunSnonWnonDbr";
			SurfaceDive = "AsdvPercMrunSnonWnonDbr";
		};
		class DivingActionsRunF: DivingActions
		{
			BottomDive = "AbdvPercMrunSnonWnonDf";
			SurfaceDive = "AsdvPercMrunSnonWnonDf";
		};
		class DivingActionsRunFL: DivingActions
		{
			BottomDive = "AbdvPercMrunSnonWnonDfl";
			StartDive = "AdvePercMrunSnonWnonDfl";
			SurfaceDive = "AsdvPercMrunSnonWnonDfl";
		};
		class DivingActionsRunFR: DivingActions
		{
			BottomDive = "AbdvPercMrunSnonWnonDfr";
			StartDive = "AdvePercMrunSnonWnonDfr";
			SurfaceDive = "AsdvPercMrunSnonWnonDfr";
		};
		class DivingActionsRunL: DivingActions
		{
			BottomDive = "AbdvPercMrunSnonWnonDl";
			StartDive = "AdvePercMrunSnonWnonDl";
			SurfaceDive = "AsdvPercMrunSnonWnonDl";
		};
		class DivingActionsRunR: DivingActions
		{
			BottomDive = "AbdvPercMrunSnonWnonDr";
			StartDive = "AdvePercMrunSnonWnonDr";
			SurfaceDive = "AsdvPercMrunSnonWnonDr";
		};
		class DivingActionsTacB: DivingActions
		{
			BottomDive = "AbdvPercMtacSnonWnonDb";
			StartDive = "AdvePercMtacSnonWnonDb";
			SurfaceDive = "AsdvPercMtacSnonWnonDb";
		};
		class DivingActionsTacBL: DivingActions
		{
			BottomDive = "AbdvPercMtacSnonWnonDbl";
			StartDive = "AdvePercMtacSnonWnonDbl";
			SurfaceDive = "AsdvPercMtacSnonWnonDbl";
		};
		class DivingActionsTacBR: DivingActions
		{
			BottomDive = "AbdvPercMtacSnonWnonDbr";
			StartDive = "AdvePercMtacSnonWnonDbr";
			SurfaceDive = "AsdvPercMtacSnonWnonDbr";
		};
		class DivingActionsTacF: DivingActions
		{
			BottomDive = "AbdvPercMtacSnonWnonDf";
			StartDive = "AdvePercMtacSnonWnonDf";
			SurfaceDive = "AsdvPercMtacSnonWnonDf";
		};
		class DivingActionsTacFL: DivingActions
		{
			BottomDive = "AbdvPercMtacSnonWnonDfl";
			StartDive = "AdvePercMtacSnonWnonDfl";
			SurfaceDive = "AsdvPercMtacSnonWnonDfl";
		};
		class DivingActionsTacFR: DivingActions
		{
			BottomDive = "AbdvPercMtacSnonWnonDfr";
			StartDive = "AdvePercMtacSnonWnonDfr";
			SurfaceDive = "AsdvPercMtacSnonWnonDfr";
		};
		class DivingActionsTacL: DivingActions
		{
			BottomDive = "AbdvPercMtacSnonWnonDl";
			StartDive = "AdvePercMtacSnonWnonDl";
			SurfaceDive = "AsdvPercMtacSnonWnonDl";
		};
		class DivingActionsTacR: DivingActions
		{
			BottomDive = "AbdvPercMtacSnonWnonDr";
			StartDive = "AdvePercMtacSnonWnonDr";
			SurfaceDive = "AsdvPercMtacSnonWnonDr";
		};
		class DivingActionsWlkB: DivingActions
		{
			BottomDive = "AbdvPercMwlkSnonWnonDb";
			StartDive = "AdvePercMwlkSnonWnonDb";
			SurfaceDive = "AsdvPercMwlkSnonWnonDb";
		};
		class DivingActionsWlkBL: DivingActions
		{
			BottomDive = "AbdvPercMwlkSnonWnonDbl";
			StartDive = "AdvePercMwlkSnonWnonDbl";
			SurfaceDive = "AsdvPercMwlkSnonWnonDbl";
		};
		class DivingActionsWlkBR: DivingActions
		{
			BottomDive = "AbdvPercMwlkSnonWnonDbr";
			StartDive = "AdvePercMwlkSnonWnonDbr";
			SurfaceDive = "AsdvPercMwlkSnonWnonDbr";
		};
		class DivingActionsWlkF: DivingActions
		{
			BottomDive = "AbdvPercMwlkSnonWnonDf";
			StartDive = "AdvePercMwlkSnonWnonDf";
			SurfaceDive = "AsdvPercMwlkSnonWnonDf";
		};
		class DivingActionsWlkFL: DivingActions
		{
			BottomDive = "AbdvPercMwlkSnonWnonDfl";
			StartDive = "AdvePercMwlkSnonWnonDfl";
			SurfaceDive = "AsdvPercMwlkSnonWnonDfl";
		};
		class DivingActionsWlkFR: DivingActions
		{
			BottomDive = "AbdvPercMwlkSnonWnonDfr";
			StartDive = "AdvePercMwlkSnonWnonDfr";
			SurfaceDive = "AsdvPercMwlkSnonWnonDfr";
		};
		class DivingActionsWlkL: DivingActions
		{
			BottomDive = "AbdvPercMwlkSnonWnonDl";
			StartDive = "AdvePercMwlkSnonWnonDl";
			SurfaceDive = "AsdvPercMwlkSnonWnonDl";
		};
		class DivingActionsWlkR: DivingActions
		{
			BottomDive = "AbdvPercMwlkSnonWnonDr";
			StartDive = "AdvePercMwlkSnonWnonDr";
			SurfaceDive = "AsdvPercMwlkSnonWnonDr";
		};
		class DivingRifleActions: DivingActions
		{
			BottomDive = "AbdvPercMstpSnonWrflDnon";
			default = "AdvePercMstpSnonWrflDnon";
			FastB = "AdvePercMrunSnonWrflDb";
			FastF = "AdvePercMsprSnonWrflDf";
			FastL = "AdvePercMrunSnonWrflDl";
			FastLB = "AdvePercMrunSnonWrflDbl";
			FastLF = "AdvePercMrunSnonWrflDfl";
			FastR = "AdvePercMrunSnonWrflDr";
			FastRB = "AdvePercMrunSnonWrflDbr";
			FastRF = "AdvePercMrunSnonWrflDfr";
			GetInSDV = "AdvePercMstpSnonWrflDnon_GetInSDV";
			GetOutSDV = "AdvePercMstpSnonWrflDnon_GetOutSDV";
			LimpB = "AdvePercMwlkSnonWrflDb";
			LimpF = "AdvePercMwlkSnonWrflDf";
			LimpL = "AdvePercMwlkSnonWrflDl";
			LimpLB = "AdvePercMwlkSnonWrflDbl";
			LimpLF = "AdvePercMwlkSnonWrflDfl";
			LimpR = "AdvePercMwlkSnonWrflDr";
			LimpRB = "AdvePercMwlkSnonWrflDbr";
			LimpRF = "AdvePercMwlkSnonWrflDfr";
			PlayerSlowB = "AdvePercMrunSnonWrflDb";
			PlayerSlowF = "AdvePercMrunSnonWrflDf";
			PlayerSlowL = "AdvePercMrunSnonWrflDl";
			PlayerSlowLB = "AdvePercMrunSnonWrflDbl";
			PlayerSlowLF = "AdvePercMrunSnonWrflDfl";
			PlayerSlowR = "AdvePercMrunSnonWrflDr";
			PlayerSlowRB = "AdvePercMrunSnonWrflDbr";
			PlayerSlowRF = "AdvePercMrunSnonWrflDfr";
			PlayerTactB = "AdvePercMtacSnonWrflDb";
			PlayerTactF = "AdvePercMtacSnonWrflDf";
			PlayerTactL = "AdvePercMtacSnonWrflDl";
			PlayerTactLB = "AdvePercMtacSnonWrflDbl";
			PlayerTactLF = "AdvePercMtacSnonWrflDfl";
			PlayerTactR = "AdvePercMtacSnonWrflDr";
			PlayerTactRB = "AdvePercMtacSnonWrflDbr";
			PlayerTactRF = "AdvePercMtacSnonWrflDfr";
			PlayerWalkB = "AdvePercMwlkSnonWrflDb";
			PlayerWalkF = "AdvePercMwlkSnonWrflDf";
			PlayerWalkL = "AdvePercMwlkSnonWrflDl";
			PlayerWalkLB = "AdvePercMwlkSnonWrflDbl";
			PlayerWalkLF = "AdvePercMwlkSnonWrflDfl";
			PlayerWalkR = "AdvePercMwlkSnonWrflDr";
			PlayerWalkRB = "AdvePercMwlkSnonWrflDbr";
			PlayerWalkRF = "AdvePercMwlkSnonWrflDfr";
			putDown = "AdvePercMstpSnonWrflDnon_AdvePercMstpSnonWrflDnon_putDown";
			relax = "AdvePercMstpSnonWrflDnon_relax";
			SlowB = "AdvePercMrunSnonWrflDb";
			SlowF = "AdvePercMrunSnonWrflDf";
			SlowL = "AdvePercMrunSnonWrflDl";
			SlowLB = "AdvePercMrunSnonWrflDbl";
			SlowLF = "AdvePercMrunSnonWrflDfl";
			SlowR = "AdvePercMrunSnonWrflDr";
			SlowRB = "AdvePercMrunSnonWrflDbr";
			SlowRF = "AdvePercMrunSnonWrflDfr";
			StartDive = "AdvePercMstpSnonWrflDnon";
			stop = "AdvePercMstpSnonWrflDnon";
			stopDive = "AmovPercMstpSrasWrflDnon";
			stopRelaxed = "AdvePercMstpSnonWrflDnon";
			SurfaceDive = "AsdvPercMstpSnonWrflDnon";
			swimDown = "AdvePercMstpSnonWrflDnon_goDown";
			swimUp = "AdvePercMstpSnonWrflDnon_goup";
			TactB = "AdvePercMtacSnonWrflDb";
			TactF = "AdvePercMtacSnonWrflDf";
			TactL = "AdvePercMtacSnonWrflDl";
			TactLB = "AdvePercMtacSnonWrflDbl";
			TactLF = "AdvePercMtacSnonWrflDfl";
			TactR = "AdvePercMtacSnonWrflDr";
			TactRB = "AdvePercMtacSnonWrflDbr";
			TactRF = "AdvePercMtacSnonWrflDfr";
			turnL = "AdvePercMstpSnonWrflDnon_turnL";
			turnR = "AdvePercMstpSnonWrflDnon_turnR";
			WalkB = "AdvePercMwlkSnonWrflDb";
			WalkF = "AdvePercMwlkSnonWrflDf";
			WalkL = "AdvePercMwlkSnonWrflDl";
			WalkLB = "AdvePercMwlkSnonWrflDbl";
			WalkLF = "AdvePercMwlkSnonWrflDfl";
			WalkR = "AdvePercMwlkSnonWrflDr";
			WalkRB = "AdvePercMwlkSnonWrflDbr";
			WalkRF = "AdvePercMwlkSnonWrflDfr";
		};
		class DivingRifleActionsFastF: DivingRifleActions
		{
			BottomDive = "AbdvPercMsprSnonWrflDf";
			StartDive = "AdvePercMsprSnonWrflDf";
			SurfaceDive = "AsdvPercMsprSnonWrflDf";
		};
		class DivingRifleActionsGoingOut: DivingRifleActions
		{
			Combat = "AmovPercMstpSrasWrflDnon";
			Default = "AmovPercMstpSrasWrflDnon";
			Stop = "AmovPercMstpSrasWrflDnon";
			upDegree = "ManPosGoingFromWater";
		};
		class DivingRifleActionsRunB: DivingRifleActions
		{
			BottomDive = "AbdvPercMrunSnonWrflDb";
			StartDive = "AdvePercMrunSnonWrflDb";
			SurfaceDive = "AsdvPercMrunSnonWrflDb";
		};
		class DivingRifleActionsRunBL: DivingRifleActions
		{
			BottomDive = "AbdvPercMrunSnonWrflDbl";
			StartDive = "AdvePercMrunSnonWrflDbl";
			SurfaceDive = "AsdvPercMrunSnonWrflDbl";
		};
		class DivingRifleActionsRunBR: DivingRifleActions
		{
			BottomDive = "AbdvPercMrunSnonWrflDbr";
			StartDive = "AdvePercMrunSnonWrflDbr";
			SurfaceDive = "AsdvPercMrunSnonWrflDbr";
		};
		class DivingRifleActionsRunF: DivingRifleActions
		{
			BottomDive = "AbdvPercMrunSnonWrflDf";
			StartDive = "AdvePercMrunSnonWrflDf";
			SurfaceDive = "AsdvPercMrunSnonWrflDf";
		};
		class DivingRifleActionsRunFL: DivingRifleActions
		{
			BottomDive = "AbdvPercMrunSnonWrflDfl";
			StartDive = "AdvePercMrunSnonWrflDfl";
			SurfaceDive = "AsdvPercMrunSnonWrflDfl";
		};
		class DivingRifleActionsRunFR: DivingRifleActions
		{
			BottomDive = "AbdvPercMrunSnonWrflDfr";
			StartDive = "AdvePercMrunSnonWrflDfr";
			SurfaceDive = "AsdvPercMrunSnonWrflDfr";
		};
		class DivingRifleActionsRunL: DivingRifleActions
		{
			BottomDive = "AbdvPercMrunSnonWrflDl";
			StartDive = "AdvePercMrunSnonWrflDl";
			SurfaceDive = "AsdvPercMrunSnonWrflDl";
		};
		class DivingRifleActionsRunR: DivingRifleActions
		{
			BottomDive = "AbdvPercMrunSnonWrflDr";
			StartDive = "AdvePercMrunSnonWrflDr";
			SurfaceDive = "AsdvPercMrunSnonWrflDr";
		};
		class DivingRifleActionsTacB: DivingRifleActions
		{
			BottomDive = "AbdvPercMtacSnonWrflDb";
			StartDive = "AdvePercMtacSnonWrflDb";
			SurfaceDive = "AsdvPercMtacSnonWrflDb";
		};
		class DivingRifleActionsTacBL: DivingRifleActions
		{
			BottomDive = "AbdvPercMtacSnonWrflDbl";
			StartDive = "AdvePercMtacSnonWrflDbl";
			SurfaceDive = "AsdvPercMtacSnonWrflDbl";
		};
		class DivingRifleActionsTacBR: DivingRifleActions
		{
			BottomDive = "AbdvPercMtacSnonWrflDbr";
			StartDive = "AdvePercMtacSnonWrflDbr";
			SurfaceDive = "AsdvPercMtacSnonWrflDbr";
		};
		class DivingRifleActionsTacF: DivingRifleActions
		{
			BottomDive = "AbdvPercMtacSnonWrflDf";
			StartDive = "AdvePercMtacSnonWrflDf";
			SurfaceDive = "AsdvPercMtacSnonWrflDf";
		};
		class DivingRifleActionsTacFL: DivingRifleActions
		{
			BottomDive = "AbdvPercMtacSnonWrflDfl";
			StartDive = "AdvePercMtacSnonWrflDfl";
			SurfaceDive = "AsdvPercMtacSnonWrflDfl";
		};
		class DivingRifleActionsTacFR: DivingRifleActions
		{
			BottomDive = "AbdvPercMtacSnonWrflDfr";
			StartDive = "AdvePercMtacSnonWrflDfr";
			SurfaceDive = "AsdvPercMtacSnonWrflDfr";
		};
		class DivingRifleActionsTacL: DivingRifleActions
		{
			BottomDive = "AbdvPercMtacSnonWrflDl";
			StartDive = "AdvePercMtacSnonWrflDl";
			SurfaceDive = "AsdvPercMtacSnonWrflDl";
		};
		class DivingRifleActionsTacR: DivingRifleActions
		{
			BottomDive = "AbdvPercMtacSnonWrflDr";
			StartDive = "AdvePercMtacSnonWrflDr";
			SurfaceDive = "AsdvPercMtacSnonWrflDr";
		};
		class DivingRifleActionsWlkB: DivingRifleActions
		{
			BottomDive = "AbdvPercMwlkSnonWrflDb";
			StartDive = "AdvePercMwlkSnonWrflDb";
			SurfaceDive = "AsdvPercMwlkSnonWrflDb";
		};
		class DivingRifleActionsWlkBL: DivingRifleActions
		{
			BottomDive = "AbdvPercMwlkSnonWrflDbl";
			StartDive = "AdvePercMwlkSnonWrflDbl";
			SurfaceDive = "AsdvPercMwlkSnonWrflDbl";
		};
		class DivingRifleActionsWlkBR: DivingRifleActions
		{
			BottomDive = "AbdvPercMwlkSnonWrflDbr";
			StartDive = "AdvePercMwlkSnonWrflDbr";
			SurfaceDive = "AsdvPercMwlkSnonWrflDbr";
		};
		class DivingRifleActionsWlkF: DivingRifleActions
		{
			BottomDive = "AbdvPercMwlkSnonWrflDf";
			StartDive = "AdvePercMwlkSnonWrflDf";
			SurfaceDive = "AsdvPercMwlkSnonWrflDf";
		};
		class DivingRifleActionsWlkFL: DivingRifleActions
		{
			BottomDive = "AbdvPercMwlkSnonWrflDfl";
			StartDive = "AdvePercMwlkSnonWrflDfl";
			SurfaceDive = "AsdvPercMwlkSnonWrflDfl";
		};
		class DivingRifleActionsWlkFR: DivingRifleActions
		{
			BottomDive = "AbdvPercMwlkSnonWrflDfr";
			StartDive = "AdvePercMwlkSnonWrflDfr";
			SurfaceDive = "AsdvPercMwlkSnonWrflDfr";
		};
		class DivingRifleActionsWlkL: DivingRifleActions
		{
			BottomDive = "AbdvPercMwlkSnonWrflDl";
			StartDive = "AdvePercMwlkSnonWrflDl";
			SurfaceDive = "AsdvPercMwlkSnonWrflDl";
		};
		class DivingRifleActionsWlkR: DivingRifleActions
		{
			BottomDive = "AbdvPercMwlkSnonWrflDr";
			StartDive = "AdvePercMwlkSnonWrflDr";
			SurfaceDive = "AsdvPercMwlkSnonWrflDr";
		};
		class FFV_BaseActions: RifleStandActions
		{
			AdjustB = "";
			AdjustF = "";
			AdjustL = "";
			AdjustLB = "";
			AdjustLF = "";
			AdjustR = "";
			AdjustRB = "";
			AdjustRF = "";
			agonyStart = "";
			agonyStop = "";
			BinocOff = "";
			BinocOn = "";
			Binoculars = "";
			BottomDive = "";
			bottomSwim = "";
			CanNotMove = "";
			carriedStill = "";
			Civil = "";
			CivilLying = "";
			Combat = "";
			Crouch = "";
			Default = "";
			Diary = "";
			Down = "";
			EvasiveLeft = "";
			EvasiveRight = "";
			FastB = "";
			FastF = "";
			FastL = "";
			FastLB = "";
			FastLF = "";
			FastR = "";
			FastRB = "";
			FastRF = "";
			FireNotPossible = "";
			Gear = "";
			GestureAgonyCargo = "";
			GetOver = "";
			grabCarried = "";
			grabCarry = "";
			grabDrag = "";
			grabDragged = "";
			JumpOff = "";
			LadderOff = "";
			LadderOffBottom = "";
			LadderOffTop = "";
			LadderOnDown = "";
			LadderOnUp = "";
			Lying = "";
			Medic = "";
			MedicOther = "";
			medicStart = "";
			medicStartRightSide = "";
			medicStartUp = "";
			medicStop = "";
			Obstructed = "";
			PlayerCrouch = "";
			PlayerProne = "";
			PlayerSlowB = "";
			PlayerSlowF = "";
			PlayerSlowL = "";
			PlayerSlowLB = "";
			PlayerSlowLF = "";
			PlayerSlowR = "";
			PlayerSlowRB = "";
			PlayerSlowRF = "";
			PlayerStand = "";
			PlayerTactB = "";
			PlayerTactF = "";
			PlayerTactL = "";
			PlayerTactLB = "";
			PlayerTactLF = "";
			PlayerTactR = "";
			PlayerTactRB = "";
			PlayerTactRF = "";
			PlayerWalkB = "";
			PlayerWalkF = "";
			PlayerWalkL = "";
			PlayerWalkLB = "";
			PlayerWalkLF = "";
			PlayerWalkR = "";
			PlayerWalkRB = "";
			PlayerWalkRF = "";
			PrimaryWeapon = "";
			PutDown = "";
			PutDownEnd = "";
			released = "";
			releasedBad = "";
			ReloadMagazine = "";
			ReloadMGun = "";
			ReloadMortar = "";
			ReloadRPG = "ReloadRPG";
			Salute = "";
			saluteOff = "";
			SecondaryWeapon = "";
			SitDown = "";
			SlowB = "";
			SlowF = "";
			SlowL = "";
			SlowLB = "";
			SlowLF = "";
			SlowR = "";
			SlowRB = "";
			SlowRF = "";
			Stand = "";
			startDive = "";
			startSwim = "";
			Stop = "";
			StopDive = "";
			StopRelaxed = "";
			StopSwim = "";
			StrokeFist = "";
			StrokeGun = "";
			SurfaceDive = "";
			surfaceSwim = "";
			Surrender = "";
			TactB = "";
			TactF = "";
			TactL = "";
			TactLB = "";
			TactLF = "";
			TactR = "";
			TactRB = "";
			TactRF = "";
			Treated = "";
			TurnL = "";
			TurnLRelaxed = "";
			TurnR = "";
			TurnRRelaxed = "";
			Up = "";
			WalkB = "";
			WalkF = "";
			WalkL = "";
			WalkLB = "";
			WalkLF = "";
			WalkR = "";
			WalkRB = "";
			WalkRF = "";
			WeaponOff = "";
			WeaponOn = "";
		};
		class FiringDrillsBinocKneelActions: BinocKneelActions
		{
			Binoculars = "AfdsPknlMstpSoptWbinDnon";
			Civil = "AfdsPercMstpSnonWnonDnon";
			CivilLying = "AfdsPpneMstpSnonWnonDnon";
			Combat = "AfdsPercMstpSrasWrflDnon";
			Crouch = "AfdsPknlMstpSrasWrflDnon";
			Default = "AfdsPknlMstpSoptWbinDnon";
			Down = "AfdsPpneMstpSoptWbinDnon";
			EvasiveLeft = "AfdsPknlMstpSoptWbinDnon";
			EvasiveRight = "AfdsPknlMstpSoptWbinDnon";
			FastB = "AfdsPknlMstpSoptWbinDnon";
			FastF = "AfdsPknlMstpSoptWbinDnon";
			FastL = "AfdsPknlMstpSoptWbinDnon";
			FastLB = "AfdsPknlMstpSoptWbinDnon";
			FastLF = "AfdsPknlMstpSoptWbinDnon";
			FastR = "AfdsPknlMstpSoptWbinDnon";
			FastRB = "AfdsPknlMstpSoptWbinDnon";
			FastRF = "AfdsPknlMstpSoptWbinDnon";
			FDStart = "AmovPknlMstpSoptWbinDnon";
			GetOver = "";
			Lying = "AfdsPpneMstpSrasWrflDnon";
			PlayerSlowB = "AfdsPknlMstpSoptWbinDnon";
			PlayerSlowF = "AfdsPknlMstpSoptWbinDnon";
			PlayerSlowL = "AfdsPknlMstpSoptWbinDnon";
			PlayerSlowLB = "AfdsPknlMstpSoptWbinDnon";
			PlayerSlowLF = "AfdsPknlMstpSoptWbinDnon";
			PlayerSlowR = "AfdsPknlMstpSoptWbinDnon";
			PlayerSlowRB = "AfdsPknlMstpSoptWbinDnon";
			PlayerSlowRF = "AfdsPknlMstpSoptWbinDnon";
			PlayerTactB = "AfdsPknlMstpSoptWbinDnon";
			PlayerTactF = "AfdsPknlMstpSoptWbinDnon";
			PlayerTactL = "AfdsPknlMstpSoptWbinDnon";
			PlayerTactLB = "AfdsPknlMstpSoptWbinDnon";
			PlayerTactLF = "AfdsPknlMstpSoptWbinDnon";
			PlayerTactR = "AfdsPknlMstpSoptWbinDnon";
			PlayerTactRB = "AfdsPknlMstpSoptWbinDnon";
			PlayerTactRF = "AfdsPknlMstpSoptWbinDnon";
			PlayerWalkB = "AfdsPknlMstpSoptWbinDnon";
			PlayerWalkF = "AfdsPknlMstpSoptWbinDnon";
			PlayerWalkL = "AfdsPknlMstpSoptWbinDnon";
			PlayerWalkLB = "AfdsPknlMstpSoptWbinDnon";
			PlayerWalkLF = "AfdsPknlMstpSoptWbinDnon";
			PlayerWalkR = "AfdsPknlMstpSoptWbinDnon";
			PlayerWalkRB = "AfdsPknlMstpSoptWbinDnon";
			PlayerWalkRF = "AfdsPknlMstpSoptWbinDnon";
			PrimaryWeapon = "AfdsPknlMstpSrasWrflDnon";
			SlowB = "AfdsPknlMstpSoptWbinDnon";
			SlowF = "AfdsPknlMstpSoptWbinDnon";
			SlowL = "AfdsPknlMstpSoptWbinDnon";
			SlowLB = "AfdsPknlMstpSoptWbinDnon";
			SlowLF = "AfdsPknlMstpSoptWbinDnon";
			SlowR = "AfdsPknlMstpSoptWbinDnon";
			SlowRB = "AfdsPknlMstpSoptWbinDnon";
			SlowRF = "AfdsPknlMstpSoptWbinDnon";
			Stand = "AfdsPknlMstpSlowWrflDnon";
			Stop = "AfdsPknlMstpSoptWbinDnon";
			TactB = "AfdsPknlMstpSoptWbinDnon";
			TactF = "AfdsPknlMstpSoptWbinDnon";
			TactL = "AfdsPknlMstpSoptWbinDnon";
			TactLB = "AfdsPknlMstpSoptWbinDnon";
			TactLF = "AfdsPknlMstpSoptWbinDnon";
			TactR = "AfdsPknlMstpSoptWbinDnon";
			TactRB = "AfdsPknlMstpSoptWbinDnon";
			TactRF = "AfdsPknlMstpSoptWbinDnon";
			TurnL = "AfdsPknlMstpSoptWbinDnon_turnL";
			TurnR = "AfdsPknlMstpSoptWbinDnon_turnR";
			Up = "AfdsPercMstpSoptWbinDnon";
			WalkB = "AfdsPknlMstpSoptWbinDnon";
			WalkF = "AfdsPknlMstpSoptWbinDnon";
			WalkL = "AfdsPknlMstpSoptWbinDnon";
			WalkLB = "AfdsPknlMstpSoptWbinDnon";
			WalkLF = "AfdsPknlMstpSoptWbinDnon";
			WalkR = "AfdsPknlMstpSoptWbinDnon";
			WalkRB = "AfdsPknlMstpSoptWbinDnon";
			WalkRF = "AfdsPknlMstpSoptWbinDnon";
		};
		class FiringDrillsBinocProneActions: BinocProneActions
		{
			Binoculars = "AfdsPpneMstpSoptWbinDnon";
			Civil = "AfdsPercMstpSnonWnonDnon";
			CivilLying = "AfdsPpneMstpSnonWnonDnon";
			Combat = "AfdsPercMstpSrasWrflDnon";
			Crouch = "AfdsPknlMstpSrasWrflDnon";
			Default = "AfdsPpneMstpSoptWbinDnon";
			Down = "AfdsPercMstpSoptWbinDnon";
			EvasiveLeft = "AfdsPpneMstpSoptWbinDnon";
			EvasiveRight = "AfdsPpneMstpSoptWbinDnon";
			FastB = "AfdsPpneMstpSoptWbinDnon";
			FastF = "AfdsPpneMstpSoptWbinDnon";
			FastL = "AfdsPpneMstpSoptWbinDnon";
			FastLB = "AfdsPpneMstpSoptWbinDnon";
			FastLF = "AfdsPpneMstpSoptWbinDnon";
			FastR = "AfdsPpneMstpSoptWbinDnon";
			FastRB = "AfdsPpneMstpSoptWbinDnon";
			FastRF = "AfdsPpneMstpSoptWbinDnon";
			FDStart = "AmovPpneMstpSoptWbinDnon";
			Gear = "AfdsPpneMstpSrasWrflDnon_inv";
			Lying = "AfdsPpneMstpSrasWrflDnon";
			PlayerSlowB = "AfdsPpneMstpSoptWbinDnon";
			PlayerSlowF = "AfdsPpneMstpSoptWbinDnon";
			PlayerSlowL = "AfdsPpneMstpSoptWbinDnon";
			PlayerSlowLB = "AfdsPpneMstpSoptWbinDnon";
			PlayerSlowLF = "AfdsPpneMstpSoptWbinDnon";
			PlayerSlowR = "AfdsPpneMstpSoptWbinDnon";
			PlayerSlowRB = "AfdsPpneMstpSoptWbinDnon";
			PlayerSlowRF = "AfdsPpneMstpSoptWbinDnon";
			PlayerTactB = "AfdsPpneMstpSoptWbinDnon";
			PlayerTactF = "AfdsPpneMstpSoptWbinDnon";
			PlayerTactL = "AfdsPpneMstpSoptWbinDnon";
			PlayerTactLB = "AfdsPpneMstpSoptWbinDnon";
			PlayerTactLF = "AfdsPpneMstpSoptWbinDnon";
			PlayerTactR = "AfdsPpneMstpSoptWbinDnon";
			PlayerTactRB = "AfdsPpneMstpSoptWbinDnon";
			PlayerTactRF = "AfdsPpneMstpSoptWbinDnon";
			PlayerWalkB = "AfdsPpneMstpSoptWbinDnon";
			PlayerWalkF = "AfdsPpneMstpSoptWbinDnon";
			PlayerWalkL = "AfdsPpneMstpSoptWbinDnon";
			PlayerWalkLB = "AfdsPpneMstpSoptWbinDnon";
			PlayerWalkLF = "AfdsPpneMstpSoptWbinDnon";
			PlayerWalkR = "AfdsPpneMstpSoptWbinDnon";
			PlayerWalkRB = "AfdsPpneMstpSoptWbinDnon";
			PlayerWalkRF = "AfdsPpneMstpSoptWbinDnon";
			PrimaryWeapon = "AfdsPpneMstpSrasWrflDnon";
			SlowB = "AfdsPpneMstpSoptWbinDnon";
			SlowF = "AfdsPpneMstpSoptWbinDnon";
			SlowL = "AfdsPpneMstpSoptWbinDnon";
			SlowLB = "AfdsPpneMstpSoptWbinDnon";
			SlowLF = "AfdsPpneMstpSoptWbinDnon";
			SlowR = "AfdsPpneMstpSoptWbinDnon";
			SlowRB = "AfdsPpneMstpSoptWbinDnon";
			SlowRF = "AfdsPpneMstpSoptWbinDnon";
			Stand = "AfdsPercMstpSlowWrflDnon";
			Stop = "AfdsPpneMstpSoptWbinDnon";
			TactB = "AfdsPpneMstpSoptWbinDnon";
			TactF = "AfdsPpneMstpSoptWbinDnon";
			TactL = "AfdsPpneMstpSoptWbinDnon";
			TactLB = "AfdsPpneMstpSoptWbinDnon";
			TactLF = "AfdsPpneMstpSoptWbinDnon";
			TactR = "AfdsPpneMstpSoptWbinDnon";
			TactRB = "AfdsPpneMstpSoptWbinDnon";
			TactRF = "AfdsPpneMstpSoptWbinDnon";
			TurnL = "AfdsPpneMstpSoptWbinDnon_turnL";
			TurnR = "AfdsPpneMstpSoptWbinDnon_turnR";
			Up = "AfdsPknlMstpSoptWbinDnon";
			WalkB = "AfdsPpneMstpSoptWbinDnon";
			WalkF = "AfdsPpneMstpSoptWbinDnon";
			WalkL = "AfdsPpneMstpSoptWbinDnon";
			WalkLB = "AfdsPpneMstpSoptWbinDnon";
			WalkLF = "AfdsPpneMstpSoptWbinDnon";
			WalkR = "AfdsPpneMstpSoptWbinDnon";
			WalkRB = "AfdsPpneMstpSoptWbinDnon";
			WalkRF = "AfdsPpneMstpSoptWbinDnon";
		};
		class FiringDrillsBinocStandActions: BinocStandActions
		{
			Binoculars = "AfdsPercMstpSoptWbinDnon";
			Civil = "AfdsPercMstpSnonWnonDnon";
			CivilLying = "AfdsPpneMstpSnonWnonDnon";
			Combat = "AfdsPercMstpSrasWrflDnon";
			Crouch = "AfdsPknlMstpSrasWrflDnon";
			Default = "AfdsPercMstpSoptWbinDnon";
			Down = "AfdsPpneMstpSoptWbinDnon";
			EvasiveLeft = "AfdsPercMstpSoptWbinDnon";
			EvasiveRight = "AfdsPercMstpSoptWbinDnon";
			FastB = "AfdsPercMstpSoptWbinDnon";
			FastF = "AfdsPercMstpSoptWbinDnon";
			FastL = "AfdsPercMstpSoptWbinDnon";
			FastLB = "AfdsPercMstpSoptWbinDnon";
			FastLF = "AfdsPercMstpSoptWbinDnon";
			FastR = "AfdsPercMstpSoptWbinDnon";
			FastRB = "AfdsPercMstpSoptWbinDnon";
			FastRF = "AfdsPercMstpSoptWbinDnon";
			FDStart = "AmovPercMstpSoptWbinDnon";
			HandGunOn = "AfdsPercMstpSrasWpstDnon";
			Lying = "AfdsPpneMstpSrasWrflDnon";
			PlayerSlowB = "AfdsPercMstpSoptWbinDnon";
			PlayerSlowF = "AfdsPercMstpSoptWbinDnon";
			PlayerSlowL = "AfdsPercMstpSoptWbinDnon";
			PlayerSlowLB = "AfdsPercMstpSoptWbinDnon";
			PlayerSlowLF = "AfdsPercMstpSoptWbinDnon";
			PlayerSlowR = "AfdsPercMstpSoptWbinDnon";
			PlayerSlowRB = "AfdsPercMstpSoptWbinDnon";
			PlayerSlowRF = "AfdsPercMstpSoptWbinDnon";
			PlayerTactB = "AfdsPercMstpSoptWbinDnon";
			PlayerTactF = "AfdsPercMstpSoptWbinDnon";
			PlayerTactL = "AfdsPercMstpSoptWbinDnon";
			PlayerTactLB = "AfdsPercMstpSoptWbinDnon";
			PlayerTactLF = "AfdsPercMstpSoptWbinDnon";
			PlayerTactR = "AfdsPercMstpSoptWbinDnon";
			PlayerTactRB = "AfdsPercMstpSoptWbinDnon";
			PlayerTactRF = "AfdsPercMstpSoptWbinDnon";
			PlayerWalkB = "AfdsPercMstpSoptWbinDnon";
			PlayerWalkF = "AfdsPercMstpSoptWbinDnon";
			PlayerWalkL = "AfdsPercMstpSoptWbinDnon";
			PlayerWalkLB = "AfdsPercMstpSoptWbinDnon";
			PlayerWalkLF = "AfdsPercMstpSoptWbinDnon";
			PlayerWalkR = "AfdsPercMstpSoptWbinDnon";
			PlayerWalkRB = "AfdsPercMstpSoptWbinDnon";
			PlayerWalkRF = "AfdsPercMstpSoptWbinDnon";
			PrimaryWeapon = "AfdsPercMstpSrasWrflDnon";
			SlowB = "AfdsPercMstpSoptWbinDnon";
			SlowF = "AfdsPercMstpSoptWbinDnon";
			SlowL = "AfdsPercMstpSoptWbinDnon";
			SlowLB = "AfdsPercMstpSoptWbinDnon";
			SlowLF = "AfdsPercMstpSoptWbinDnon";
			SlowR = "AfdsPercMstpSoptWbinDnon";
			SlowRB = "AfdsPercMstpSoptWbinDnon";
			SlowRF = "AfdsPercMstpSoptWbinDnon";
			Stand = "AfdsPercMstpSlowWrflDnon";
			Stop = "AfdsPercMstpSoptWbinDnon";
			TactB = "AfdsPercMstpSoptWbinDnon";
			TactF = "AfdsPercMstpSoptWbinDnon";
			TactL = "AfdsPercMstpSoptWbinDnon";
			TactLB = "AfdsPercMstpSoptWbinDnon";
			TactLF = "AfdsPercMstpSoptWbinDnon";
			TactR = "AfdsPercMstpSoptWbinDnon";
			TactRB = "AfdsPercMstpSoptWbinDnon";
			TactRF = "AfdsPercMstpSoptWbinDnon";
			TurnL = "AfdsPercMstpSoptWbinDnon_turnL";
			TurnR = "AfdsPercMstpSoptWbinDnon_turnR";
			Up = "AfdsPknlMstpSoptWbinDnon";
			WalkB = "AfdsPercMstpSoptWbinDnon";
			WalkF = "AfdsPercMstpSoptWbinDnon";
			WalkL = "AfdsPercMstpSoptWbinDnon";
			WalkLB = "AfdsPercMstpSoptWbinDnon";
			WalkLF = "AfdsPercMstpSoptWbinDnon";
			WalkR = "AfdsPercMstpSoptWbinDnon";
			WalkRB = "AfdsPercMstpSoptWbinDnon";
			WalkRF = "AfdsPercMstpSoptWbinDnon";
		};
		class FiringDrillsCivilKneelActions: CivilKneelActions
		{
			Binoculars = "AfdsPknlMstpSoptWbinDnon";
			Civil = "AfdsPercMstpSnonWnonDnon";
			CivilLying = "AfdsPpneMstpSnonWnonDnon";
			Combat = "AfdsPknlMstpSrasWrflDnon";
			Crouch = "AfdsPknlMstpSnonWnonDnon";
			EvasiveLeft = "AfdsPknlMstpSnonWnonDnon";
			EvasiveRight = "AfdsPknlMstpSnonWnonDnon";
			FastB = "AfdsPknlMstpSnonWnonDnon";
			FastF = "AfdsPknlMstpSnonWnonDnon";
			FastL = "AfdsPknlMstpSnonWnonDnon";
			FastLB = "AfdsPknlMstpSnonWnonDnon";
			FastLF = "AfdsPknlMstpSnonWnonDnon";
			FastR = "AfdsPknlMstpSnonWnonDnon";
			FastRB = "AfdsPknlMstpSnonWnonDnon";
			FastRF = "AfdsPknlMstpSnonWnonDnon";
			FDStart = "AmovPknlMstpSnonWnonDnon";
			GetOver = "";
			Lying = "AfdsPpneMstpSnonWnonDnon";
			PlayerSlowB = "AfdsPknlMstpSnonWnonDnon";
			PlayerSlowF = "AfdsPknlMstpSnonWnonDnon";
			PlayerSlowL = "AfdsPknlMstpSnonWnonDnon";
			PlayerSlowLB = "AfdsPknlMstpSnonWnonDnon";
			PlayerSlowLF = "AfdsPknlMstpSnonWnonDnon";
			PlayerSlowR = "AfdsPknlMstpSnonWnonDnon";
			PlayerSlowRB = "AfdsPknlMstpSnonWnonDnon";
			PlayerSlowRF = "AfdsPknlMstpSnonWnonDnon";
			PlayerTactB = "AfdsPknlMstpSnonWnonDnon";
			PlayerTactF = "AfdsPknlMstpSnonWnonDnon";
			PlayerTactL = "AfdsPknlMstpSnonWnonDnon";
			PlayerTactLB = "AfdsPknlMstpSnonWnonDnon";
			PlayerTactLF = "AfdsPknlMstpSnonWnonDnon";
			PlayerTactR = "AfdsPknlMstpSnonWnonDnon";
			PlayerTactRB = "AfdsPknlMstpSnonWnonDnon";
			PlayerTactRF = "AfdsPknlMstpSnonWnonDnon";
			PlayerWalkB = "AfdsPknlMstpSnonWnonDnon";
			PlayerWalkF = "AfdsPknlMstpSnonWnonDnon";
			PlayerWalkL = "AfdsPknlMstpSnonWnonDnon";
			PlayerWalkLB = "AfdsPknlMstpSnonWnonDnon";
			PlayerWalkLF = "AfdsPknlMstpSnonWnonDnon";
			PlayerWalkR = "AfdsPknlMstpSnonWnonDnon";
			PlayerWalkRB = "AfdsPknlMstpSnonWnonDnon";
			PlayerWalkRF = "AfdsPknlMstpSnonWnonDnon";
			PrimaryWeapon = "AfdsPknlMstpSrasWrflDnon";
			SlowB = "AfdsPknlMstpSnonWnonDnon";
			SlowF = "AfdsPknlMstpSnonWnonDnon";
			SlowL = "AfdsPknlMstpSnonWnonDnon";
			SlowLB = "AfdsPknlMstpSnonWnonDnon";
			SlowLF = "AfdsPknlMstpSnonWnonDnon";
			SlowR = "AfdsPknlMstpSnonWnonDnon";
			SlowRB = "AfdsPknlMstpSnonWnonDnon";
			SlowRF = "AfdsPknlMstpSnonWnonDnon";
			Stand = "AfdsPercMstpSlowWrflDnon";
			Stop = "AfdsPknlMstpSnonWnonDnon";
			TactB = "AfdsPknlMstpSnonWnonDnon";
			TactF = "AfdsPknlMstpSnonWnonDnon";
			TactL = "AfdsPknlMstpSnonWnonDnon";
			TactLB = "AfdsPknlMstpSnonWnonDnon";
			TactLF = "AfdsPknlMstpSnonWnonDnon";
			TactR = "AfdsPknlMstpSnonWnonDnon";
			TactRB = "AfdsPknlMstpSnonWnonDnon";
			TactRF = "AfdsPknlMstpSnonWnonDnon";
			TurnL = "AfdsPknlMstpSnonWnonDnon_turnL";
			TurnR = "AfdsPknlMstpSnonWnonDnon_turnR";
			WalkB = "AfdsPknlMstpSnonWnonDnon";
			WalkF = "AfdsPknlMstpSnonWnonDnon";
			WalkL = "AfdsPknlMstpSnonWnonDnon";
			WalkLB = "AfdsPknlMstpSnonWnonDnon";
			WalkLF = "AfdsPknlMstpSnonWnonDnon";
			WalkR = "AfdsPknlMstpSnonWnonDnon";
			WalkRB = "AfdsPknlMstpSnonWnonDnon";
			WalkRF = "AfdsPknlMstpSnonWnonDnon";
		};
		class FiringDrillsCivilKneelActions_inv: FiringDrillsCivilKneelActions {};
		class FiringDrillsCivilProneActions: CivilProneActions
		{
			Binoculars = "AfdsPpneMstpSoptWbinDnon";
			Civil = "AfdsPercMstpSnonWnonDnon";
			CivilLying = "AfdsPpneMstpSnonWnonDnon";
			Combat = "AfdsPercMstpSrasWrflDnon";
			Crouch = "AfdsPpneMstpSnonWnonDnon";
			EvasiveLeft = "AfdsPpneMstpSnonWnonDnon";
			EvasiveRight = "AfdsPpneMstpSnonWnonDnon";
			FastB = "AfdsPpneMstpSnonWnonDnon";
			FastF = "AfdsPpneMstpSnonWnonDnon";
			FastL = "AfdsPpneMstpSnonWnonDnon";
			FastLB = "AfdsPpneMstpSnonWnonDnon";
			FastLF = "AfdsPpneMstpSnonWnonDnon";
			FastR = "AfdsPpneMstpSnonWnonDnon";
			FastRB = "AfdsPpneMstpSnonWnonDnon";
			FastRF = "AfdsPpneMstpSnonWnonDnon";
			FDStart = "AmovPpneMstpSnonWnonDnon";
			Lying = "AfdsPpneMstpSrasWrflDnon";
			PlayerSlowB = "AfdsPpneMstpSnonWnonDnon";
			PlayerSlowF = "AfdsPpneMstpSnonWnonDnon";
			PlayerSlowL = "AfdsPpneMstpSnonWnonDnon";
			PlayerSlowLB = "AfdsPpneMstpSnonWnonDnon";
			PlayerSlowLF = "AfdsPpneMstpSnonWnonDnon";
			PlayerSlowR = "AfdsPpneMstpSnonWnonDnon";
			PlayerSlowRB = "AfdsPpneMstpSnonWnonDnon";
			PlayerSlowRF = "AfdsPpneMstpSnonWnonDnon";
			PlayerTactB = "AfdsPpneMstpSnonWnonDnon";
			PlayerTactF = "AfdsPpneMstpSnonWnonDnon";
			PlayerTactL = "AfdsPpneMstpSnonWnonDnon";
			PlayerTactLB = "AfdsPpneMstpSnonWnonDnon";
			PlayerTactLF = "AfdsPpneMstpSnonWnonDnon";
			PlayerTactR = "AfdsPpneMstpSnonWnonDnon";
			PlayerTactRB = "AfdsPpneMstpSnonWnonDnon";
			PlayerTactRF = "AfdsPpneMstpSnonWnonDnon";
			PlayerWalkB = "AfdsPpneMstpSnonWnonDnon";
			PlayerWalkF = "AfdsPpneMstpSnonWnonDnon";
			PlayerWalkL = "AfdsPpneMstpSnonWnonDnon";
			PlayerWalkLB = "AfdsPpneMstpSnonWnonDnon";
			PlayerWalkLF = "AfdsPpneMstpSnonWnonDnon";
			PlayerWalkR = "AfdsPpneMstpSnonWnonDnon";
			PlayerWalkRB = "AfdsPpneMstpSnonWnonDnon";
			PlayerWalkRF = "AfdsPpneMstpSnonWnonDnon";
			PrimaryWeapon = "AfdsPpneMstpSrasWrflDnon";
			SlowB = "AfdsPpneMstpSnonWnonDnon";
			SlowF = "AfdsPpneMstpSnonWnonDnon";
			SlowL = "AfdsPpneMstpSnonWnonDnon";
			SlowLB = "AfdsPpneMstpSnonWnonDnon";
			SlowLF = "AfdsPpneMstpSnonWnonDnon";
			SlowR = "AfdsPpneMstpSnonWnonDnon";
			SlowRB = "AfdsPpneMstpSnonWnonDnon";
			SlowRF = "AfdsPpneMstpSnonWnonDnon";
			Stand = "AfdsPercMstpSnonWnonDnon";
			Stop = "AfdsPpneMstpSnonWnonDnon";
			TactB = "AfdsPpneMstpSnonWnonDnon";
			TactF = "AfdsPpneMstpSnonWnonDnon";
			TactL = "AfdsPpneMstpSnonWnonDnon";
			TactLB = "AfdsPpneMstpSnonWnonDnon";
			TactLF = "AfdsPpneMstpSnonWnonDnon";
			TactR = "AfdsPpneMstpSnonWnonDnon";
			TactRB = "AfdsPpneMstpSnonWnonDnon";
			TactRF = "AfdsPpneMstpSnonWnonDnon";
			TurnL = "AfdsPpneMstpSnonWnonDnon_turnL";
			TurnR = "AfdsPpneMstpSnonWnonDnon_turnR";
			WalkB = "AfdsPpneMstpSnonWnonDnon";
			WalkF = "AfdsPpneMstpSnonWnonDnon";
			WalkL = "AfdsPpneMstpSnonWnonDnon";
			WalkLB = "AfdsPpneMstpSnonWnonDnon";
			WalkLF = "AfdsPpneMstpSnonWnonDnon";
			WalkR = "AfdsPpneMstpSnonWnonDnon";
			WalkRB = "AfdsPpneMstpSnonWnonDnon";
			WalkRF = "AfdsPpneMstpSnonWnonDnon";
		};
		class FiringDrillsCivilProneActions_inv: FiringDrillsCivilProneActions {};
		class FiringDrillsCivilStandActions: CivilStandActions
		{
			Binoculars = "AfdsPercMstpSoptWbinDnon";
			Civil = "AfdsPercMstpSnonWnonDnon";
			CivilLying = "AfdsPpneMstpSnonWnonDnon";
			Combat = "AfdsPercMstpSrasWrflDnon";
			Crouch = "AfdsPknlMstpSnonWnonDnon";
			Down = "AfdsPpneMstpSnonWnonDnon";
			EvasiveLeft = "AfdsPercMstpSnonWnonDnon";
			EvasiveRight = "AfdsPercMstpSnonWnonDnon";
			FastB = "AfdsPercMstpSnonWnonDnon";
			FastF = "AfdsPercMstpSnonWnonDnon";
			FastL = "AfdsPercMstpSnonWnonDnon";
			FastLB = "AfdsPercMstpSnonWnonDnon";
			FastLF = "AfdsPercMstpSnonWnonDnon";
			FastR = "AfdsPercMstpSnonWnonDnon";
			FastRB = "AfdsPercMstpSnonWnonDnon";
			FastRF = "AfdsPercMstpSnonWnonDnon";
			FDStart = "AmovPercMstpSnonWnonDnon";
			GetOver = "";
			HandGunOn = "AfdsPercMstpSrasWpstDnon";
			Lying = "AfdsPpneMstpSnonWnonDnon";
			PlayerSlowB = "AfdsPercMstpSnonWnonDnon";
			PlayerSlowF = "AfdsPercMstpSnonWnonDnon";
			PlayerSlowL = "AfdsPercMstpSnonWnonDnon";
			PlayerSlowLB = "AfdsPercMstpSnonWnonDnon";
			PlayerSlowLF = "AfdsPercMstpSnonWnonDnon";
			PlayerSlowR = "AfdsPercMstpSnonWnonDnon";
			PlayerSlowRB = "AfdsPercMstpSnonWnonDnon";
			PlayerSlowRF = "AfdsPercMstpSnonWnonDnon";
			PlayerTactB = "AfdsPercMstpSnonWnonDnon";
			PlayerTactF = "AfdsPercMstpSnonWnonDnon";
			PlayerTactL = "AfdsPercMstpSnonWnonDnon";
			PlayerTactLB = "AfdsPercMstpSnonWnonDnon";
			PlayerTactLF = "AfdsPercMstpSnonWnonDnon";
			PlayerTactR = "AfdsPercMstpSnonWnonDnon";
			PlayerTactRB = "AfdsPercMstpSnonWnonDnon";
			PlayerTactRF = "AfdsPercMstpSnonWnonDnon";
			PlayerWalkB = "AfdsPercMstpSnonWnonDnon";
			PlayerWalkF = "AfdsPercMstpSnonWnonDnon";
			PlayerWalkL = "AfdsPercMstpSnonWnonDnon";
			PlayerWalkLB = "AfdsPercMstpSnonWnonDnon";
			PlayerWalkLF = "AfdsPercMstpSnonWnonDnon";
			PlayerWalkR = "AfdsPercMstpSnonWnonDnon";
			PlayerWalkRB = "AfdsPercMstpSnonWnonDnon";
			PlayerWalkRF = "AfdsPercMstpSnonWnonDnon";
			PrimaryWeapon = "AfdsPercMstpSrasWrflDnon";
			SlowB = "AfdsPercMstpSnonWnonDnon";
			SlowF = "AfdsPercMstpSnonWnonDnon";
			SlowL = "AfdsPercMstpSnonWnonDnon";
			SlowLB = "AfdsPercMstpSnonWnonDnon";
			SlowLF = "AfdsPercMstpSnonWnonDnon";
			SlowR = "AfdsPercMstpSnonWnonDnon";
			SlowRB = "AfdsPercMstpSnonWnonDnon";
			SlowRF = "AfdsPercMstpSnonWnonDnon";
			Stand = "AfdsPercMstpSnonWnonDnon";
			Stop = "AfdsPercMstpSnonWnonDnon";
			TactB = "AfdsPercMstpSnonWnonDnon";
			TactF = "AfdsPercMstpSnonWnonDnon";
			TactL = "AfdsPercMstpSnonWnonDnon";
			TactLB = "AfdsPercMstpSnonWnonDnon";
			TactLF = "AfdsPercMstpSnonWnonDnon";
			TactR = "AfdsPercMstpSnonWnonDnon";
			TactRB = "AfdsPercMstpSnonWnonDnon";
			TactRF = "AfdsPercMstpSnonWnonDnon";
			TurnL = "AfdsPercMstpSnonWnonDnon_turnL";
			TurnR = "AfdsPercMstpSnonWnonDnon_turnR";
			Up = "AfdsPknlMstpSnonWnonDnon";
			WalkB = "AfdsPercMstpSnonWnonDnon";
			WalkF = "AfdsPercMstpSnonWnonDnon";
			WalkL = "AfdsPercMstpSnonWnonDnon";
			WalkLB = "AfdsPercMstpSnonWnonDnon";
			WalkLF = "AfdsPercMstpSnonWnonDnon";
			WalkR = "AfdsPercMstpSnonWnonDnon";
			WalkRB = "AfdsPercMstpSnonWnonDnon";
			WalkRF = "AfdsPercMstpSnonWnonDnon";
		};
		class FiringDrillsCivilStandActions_inv: FiringDrillsCivilStandActions
		{
			Default = "AfdsPercMstpSnonWnonDnon_inv";
			Stop = "AfdsPercMstpSnonWnonDnon_inv";
		};
		class FiringDrillsPistolKneelActions: PistolKneelActions
		{
			AdjustB = "";
			AdjustF = "";
			AdjustL = "";
			AdjustR = "";
			Binoculars = "AfdsPknlMstpSoptWbinDnon";
			Civil = "AfdsPknlMstpSnonWnonDnon";
			CivilLying = "AfdsPpneMstpSnonWnonDnon";
			Combat = "AfdsPknlMstpSrasWrflDnon";
			Crouch = "AfdsPknlMstpSrasWpstDnon";
			Default = "AfdsPknlMstpSrasWpstDnon";
			Down = "AfdsPpneMstpSrasWpstDnon";
			EvasiveLeft = "AfdsPknlMstpSrasWpstDnon";
			EvasiveRight = "AfdsPknlMstpSrasWpstDnon";
			FastB = "AfdsPknlMstpSrasWpstDnon";
			FastF = "AfdsPknlMstpSrasWpstDnon";
			FastL = "AfdsPknlMstpSrasWpstDnon";
			FastLB = "AfdsPknlMstpSrasWpstDnon";
			FastLF = "AfdsPknlMstpSrasWpstDnon";
			FastR = "AfdsPknlMstpSrasWpstDnon";
			FastRB = "AfdsPknlMstpSrasWpstDnon";
			FastRF = "AfdsPknlMstpSrasWpstDnon";
			FDStart = "AmovPknlMstpSrasWpstDnon";
			FireNotPossible = "AfdsPknlMstpSrasWpstDnon";
			Gear = "AfdsPknlMstpSrasWpstDnon_inv";
			GetOver = "";
			HandGunOn = "AfdsPknlMstpSrasWrflDnon";
			Lying = "AfdsPpneMstpSrasWpstDnon";
			PlayerCrouch = "AfdsPknlMstpSrasWpstDnon";
			PlayerProne = "AfdsPpneMstpSrasWpstDnon";
			PlayerSlowB = "AfdsPknlMstpSrasWpstDnon";
			PlayerSlowF = "AfdsPknlMstpSrasWpstDnon";
			PlayerSlowL = "AfdsPknlMstpSrasWpstDnon";
			PlayerSlowLB = "AfdsPknlMstpSrasWpstDnon";
			PlayerSlowLF = "AfdsPknlMstpSrasWpstDnon";
			PlayerSlowR = "AfdsPknlMstpSrasWpstDnon";
			PlayerSlowRB = "AfdsPknlMstpSrasWpstDnon";
			PlayerSlowRF = "AfdsPknlMstpSrasWpstDnon";
			PlayerStand = "AfdsPercMstpSrasWpstDnon";
			PlayerTactB = "AfdsPknlMstpSrasWpstDnon";
			PlayerTactF = "AfdsPknlMstpSrasWpstDnon";
			PlayerTactL = "AfdsPknlMstpSrasWpstDnon";
			PlayerTactLB = "AfdsPknlMstpSrasWpstDnon";
			PlayerTactLF = "AfdsPknlMstpSrasWpstDnon";
			PlayerTactR = "AfdsPknlMstpSrasWpstDnon";
			PlayerTactRB = "AfdsPknlMstpSrasWpstDnon";
			PlayerTactRF = "AfdsPknlMstpSrasWpstDnon";
			PlayerWalkB = "AfdsPknlMstpSrasWpstDnon";
			PlayerWalkF = "AfdsPknlMstpSrasWpstDnon";
			PlayerWalkL = "AfdsPknlMstpSrasWpstDnon";
			PlayerWalkLB = "AfdsPknlMstpSrasWpstDnon";
			PlayerWalkLF = "AfdsPknlMstpSrasWpstDnon";
			PlayerWalkR = "AfdsPknlMstpSrasWpstDnon";
			PlayerWalkRB = "AfdsPknlMstpSrasWpstDnon";
			PlayerWalkRF = "AfdsPknlMstpSrasWpstDnon";
			PrimaryWeapon = "AfdsPknlMstpSrasWrflDnon";
			SlowB = "AfdsPknlMstpSrasWpstDnon";
			SlowF = "AfdsPknlMstpSrasWpstDnon";
			SlowL = "AfdsPknlMstpSrasWpstDnon";
			SlowLB = "AfdsPknlMstpSrasWpstDnon";
			SlowLF = "AfdsPknlMstpSrasWpstDnon";
			SlowR = "AfdsPknlMstpSrasWpstDnon";
			SlowRB = "AfdsPknlMstpSrasWpstDnon";
			SlowRF = "AfdsPknlMstpSrasWpstDnon";
			Stand = "AfdsPknlMstpSlowWpstDnon";
			Stop = "AfdsPknlMstpSrasWpstDnon";
			TactB = "AfdsPknlMstpSrasWpstDnon";
			TactF = "AfdsPknlMstpSrasWpstDnon";
			TactL = "AfdsPknlMstpSrasWpstDnon";
			TactLB = "AfdsPknlMstpSrasWpstDnon";
			TactLF = "AfdsPknlMstpSrasWpstDnon";
			TactR = "AfdsPknlMstpSrasWpstDnon";
			TactRB = "AfdsPknlMstpSrasWpstDnon";
			TactRF = "AfdsPknlMstpSrasWpstDnon";
			TurnL = "AfdsPknlMstpSrasWpstDnon_turnL";
			TurnR = "AfdsPknlMstpSrasWpstDnon_turnR";
			Up = "AfdsPercMstpSrasWpstDnon";
			WalkB = "AfdsPknlMstpSrasWpstDnon";
			WalkF = "AfdsPknlMstpSrasWpstDnon";
			WalkL = "AfdsPknlMstpSrasWpstDnon";
			WalkLB = "AfdsPknlMstpSrasWpstDnon";
			WalkLF = "AfdsPknlMstpSrasWpstDnon";
			WalkR = "AfdsPknlMstpSrasWpstDnon";
			WalkRB = "AfdsPknlMstpSrasWpstDnon";
			WalkRF = "AfdsPknlMstpSrasWpstDnon";
		};
		class FiringDrillsPistolKneelActions_inv: FiringDrillsPistolKneelActions
		{
			Default = "AfdsPknlMstpSrasWpstDnon_inv";
			Stand = "AfdsPknlMstpSlowWpstDnon_inv";
			Stop = "AfdsPknlMstpSrasWpstDnon_inv";
		};
		class FiringDrillsPistolLowKneelActions: FiringDrillsPistolKneelActions
		{
			Default = "AfdsPknlMstpSlowWpstDnon";
			EvasiveLeft = "AfdsPknlMstpSlowWpstDnon";
			EvasiveRight = "AfdsPknlMstpSlowWpstDnon";
			FastB = "AfdsPknlMstpSlowWpstDnon";
			FastF = "AfdsPknlMstpSlowWpstDnon";
			FastL = "AfdsPknlMstpSlowWpstDnon";
			FastLB = "AfdsPknlMstpSlowWpstDnon";
			FastLF = "AfdsPknlMstpSlowWpstDnon";
			FastR = "AfdsPknlMstpSlowWpstDnon";
			FastRB = "AfdsPknlMstpSlowWpstDnon";
			FastRF = "AfdsPknlMstpSlowWpstDnon";
			FDStart = "AmovPknlMstpSlowWpstDnon";
			HandGunOn = "AfdsPknlMstpSrasWpstDnon";
			PlayerSlowB = "AfdsPknlMstpSlowWpstDnon";
			PlayerSlowF = "AfdsPknlMstpSlowWpstDnon";
			PlayerSlowL = "AfdsPknlMstpSlowWpstDnon";
			PlayerSlowLB = "AfdsPknlMstpSlowWpstDnon";
			PlayerSlowLF = "AfdsPknlMstpSlowWpstDnon";
			PlayerSlowR = "AfdsPknlMstpSlowWpstDnon";
			PlayerSlowRB = "AfdsPknlMstpSlowWpstDnon";
			PlayerSlowRF = "AfdsPknlMstpSlowWpstDnon";
			PlayerStand = "AfdsPercMstpSlowWpstDnon";
			PlayerTactB = "AfdsPknlMstpSlowWpstDnon";
			PlayerTactF = "AfdsPknlMstpSlowWpstDnon";
			PlayerTactL = "AfdsPknlMstpSlowWpstDnon";
			PlayerTactLB = "AfdsPknlMstpSlowWpstDnon";
			PlayerTactLF = "AfdsPknlMstpSlowWpstDnon";
			PlayerTactR = "AfdsPknlMstpSlowWpstDnon";
			PlayerTactRB = "AfdsPknlMstpSlowWpstDnon";
			PlayerTactRF = "AfdsPknlMstpSlowWpstDnon";
			PlayerWalkB = "AfdsPknlMstpSlowWpstDnon";
			PlayerWalkF = "AfdsPknlMstpSlowWpstDnon";
			PlayerWalkL = "AfdsPknlMstpSlowWpstDnon";
			PlayerWalkLB = "AfdsPknlMstpSlowWpstDnon";
			PlayerWalkLF = "AfdsPknlMstpSlowWpstDnon";
			PlayerWalkR = "AfdsPknlMstpSlowWpstDnon";
			PlayerWalkRB = "AfdsPknlMstpSlowWpstDnon";
			PlayerWalkRF = "AfdsPknlMstpSlowWpstDnon";
			SlowB = "AfdsPknlMstpSlowWpstDnon";
			SlowF = "AfdsPknlMstpSlowWpstDnon";
			SlowL = "AfdsPknlMstpSlowWpstDnon";
			SlowLB = "AfdsPknlMstpSlowWpstDnon";
			SlowLF = "AfdsPknlMstpSlowWpstDnon";
			SlowR = "AfdsPknlMstpSlowWpstDnon";
			SlowRB = "AfdsPknlMstpSlowWpstDnon";
			SlowRF = "AfdsPknlMstpSlowWpstDnon";
			Stand = "AfdsPknlMstpSrasWpstDnon";
			Stop = "AfdsPknlMstpSlowWpstDnon";
			TactB = "AfdsPknlMstpSlowWpstDnon";
			TactF = "AfdsPknlMstpSlowWpstDnon";
			TactL = "AfdsPknlMstpSlowWpstDnon";
			TactLB = "AfdsPknlMstpSlowWpstDnon";
			TactLF = "AfdsPknlMstpSlowWpstDnon";
			TactR = "AfdsPknlMstpSlowWpstDnon";
			TactRB = "AfdsPknlMstpSlowWpstDnon";
			TactRF = "AfdsPknlMstpSlowWpstDnon";
			TurnL = "AfdsPknlMstpSlowWpstDnon_turnL";
			TurnR = "AfdsPknlMstpSlowWpstDnon_turnR";
			Up = "AfdsPercMstpSlowWpstDnon";
			WalkB = "AfdsPknlMstpSlowWpstDnon";
			WalkF = "AfdsPknlMstpSlowWpstDnon";
			WalkL = "AfdsPknlMstpSlowWpstDnon";
			WalkLB = "AfdsPknlMstpSlowWpstDnon";
			WalkLF = "AfdsPknlMstpSlowWpstDnon";
			WalkR = "AfdsPknlMstpSlowWpstDnon";
			WalkRB = "AfdsPknlMstpSlowWpstDnon";
			WalkRF = "AfdsPknlMstpSlowWpstDnon";
		};
		class FiringDrillsPistolLowKneelActions_inv: FiringDrillsPistolLowKneelActions
		{
			Default = "AfdsPknlMstpSlowWpstDnon_inv";
			Stand = "AfdsPknlMstpSlowWpstDnon_inv";
			Stop = "AfdsPknlMstpSlowWpstDnon_inv";
		};
		class FiringDrillsPistolLowStandActions: FiringDrillsPistolStandActions
		{
			Default = "AfdsPercMstpSlowWpstDnon";
			EvasiveLeft = "AfdsPercMstpSlowWpstDnon";
			EvasiveRight = "AfdsPercMstpSlowWpstDnon";
			FastB = "AfdsPercMstpSlowWpstDnon";
			FastF = "AfdsPercMstpSlowWpstDnon";
			FastL = "AfdsPercMstpSlowWpstDnon";
			FastLB = "AfdsPercMstpSlowWpstDnon";
			FastLF = "AfdsPercMstpSlowWpstDnon";
			FastR = "AfdsPercMstpSlowWpstDnon";
			FastRB = "AfdsPercMstpSlowWpstDnon";
			FastRF = "AfdsPercMstpSlowWpstDnon";
			FDStart = "AmovPercMstpSlowWpstDnon";
			HandGunOn = "AfdsPercMstpSrasWpstDnon";
			PlayerSlowB = "AfdsPercMstpSlowWpstDnon";
			PlayerSlowF = "AfdsPercMstpSlowWpstDnon";
			PlayerSlowL = "AfdsPercMstpSlowWpstDnon";
			PlayerSlowLB = "AfdsPercMstpSlowWpstDnon";
			PlayerSlowLF = "AfdsPercMstpSlowWpstDnon";
			PlayerSlowR = "AfdsPercMstpSlowWpstDnon";
			PlayerSlowRB = "AfdsPercMstpSlowWpstDnon";
			PlayerSlowRF = "AfdsPercMstpSlowWpstDnon";
			PlayerTactB = "AfdsPercMstpSlowWpstDnon";
			PlayerTactF = "AfdsPercMstpSlowWpstDnon";
			PlayerTactL = "AfdsPercMstpSlowWpstDnon";
			PlayerTactLB = "AfdsPercMstpSlowWpstDnon";
			PlayerTactLF = "AfdsPercMstpSlowWpstDnon";
			PlayerTactR = "AfdsPercMstpSlowWpstDnon";
			PlayerTactRB = "AfdsPercMstpSlowWpstDnon";
			PlayerTactRF = "AfdsPercMstpSlowWpstDnon";
			PlayerWalkB = "AfdsPercMstpSlowWpstDnon";
			PlayerWalkF = "AfdsPercMstpSlowWpstDnon";
			PlayerWalkL = "AfdsPercMstpSlowWpstDnon";
			PlayerWalkLB = "AfdsPercMstpSlowWpstDnon";
			PlayerWalkLF = "AfdsPercMstpSlowWpstDnon";
			PlayerWalkR = "AfdsPercMstpSlowWpstDnon";
			PlayerWalkRB = "AfdsPercMstpSlowWpstDnon";
			PlayerWalkRF = "AfdsPercMstpSlowWpstDnon";
			SlowB = "AfdsPercMstpSlowWpstDnon";
			SlowF = "AfdsPercMstpSlowWpstDnon";
			SlowL = "AfdsPercMstpSlowWpstDnon";
			SlowLB = "AfdsPercMstpSlowWpstDnon";
			SlowLF = "AfdsPercMstpSlowWpstDnon";
			SlowR = "AfdsPercMstpSlowWpstDnon";
			SlowRB = "AfdsPercMstpSlowWpstDnon";
			SlowRF = "AfdsPercMstpSlowWpstDnon";
			Stand = "AfdsPercMstpSrasWpstDnon";
			Stop = "AfdsPercMstpSlowWpstDnon";
			TactB = "AfdsPercMstpSlowWpstDnon";
			TactF = "AfdsPercMstpSlowWpstDnon";
			TactL = "AfdsPercMstpSlowWpstDnon";
			TactLB = "AfdsPercMstpSlowWpstDnon";
			TactLF = "AfdsPercMstpSlowWpstDnon";
			TactR = "AfdsPercMstpSlowWpstDnon";
			TactRB = "AfdsPercMstpSlowWpstDnon";
			TactRF = "AfdsPercMstpSlowWpstDnon";
			TurnL = "AfdsPercMstpSlowWpstDnon_turnL";
			TurnR = "AfdsPercMstpSlowWpstDnon_turnR";
			Up = "AfdsPknlMstpSlowWpstDnon";
			WalkB = "AfdsPercMstpSlowWpstDnon";
			WalkF = "AfdsPercMstpSlowWpstDnon";
			WalkL = "AfdsPercMstpSlowWpstDnon";
			WalkLB = "AfdsPercMstpSlowWpstDnon";
			WalkLF = "AfdsPercMstpSlowWpstDnon";
			WalkR = "AfdsPercMstpSlowWpstDnon";
			WalkRB = "AfdsPercMstpSlowWpstDnon";
			WalkRF = "AfdsPercMstpSlowWpstDnon";
		};
		class FiringDrillsPistolLowStandActions_inv: FiringDrillsPistolStandActions
		{
			Default = "AfdsPercMstpSrasWpstDnon_inv";
			Stop = "AfdsPercMstpSrasWpstDnon_inv";
		};
		class FiringDrillsPistolProneActions: PistolProneActions
		{
			Binoculars = "AfdsPpneMstpSoptWbinDnon";
			Civil = "AfdsPpneMstpSnonWnonDnon";
			CivilLying = "AfdsPpneMstpSnonWnonDnon";
			Combat = "AfdsPpneMstpSrasWrflDnon";
			Crouch = "AfdsPknlMstpSrasWpstDnon";
			Default = "AfdsPpneMstpSrasWpstDnon";
			Down = "AfdsPercMstpSrasWpstDnon";
			EvasiveLeft = "AfdsPpneMstpSrasWpstDnon";
			EvasiveRight = "AfdsPpneMstpSrasWpstDnon";
			FastB = "AfdsPpneMstpSrasWpstDnon";
			FastF = "AfdsPpneMstpSrasWpstDnon";
			FastL = "AfdsPpneMstpSrasWpstDnon";
			FastLB = "AfdsPpneMstpSrasWpstDnon";
			FastLF = "AfdsPpneMstpSrasWpstDnon";
			FastR = "AfdsPpneMstpSrasWpstDnon";
			FastRB = "AfdsPpneMstpSrasWpstDnon";
			FastRF = "AfdsPpneMstpSrasWpstDnon";
			FDStart = "AmovPpneMstpSrasWpstDnon";
			FireNotPossible = "AfdsPpneMstpSrasWpstDnon";
			HandGunOn = "AfdsPpneMstpSrasWrflDnon";
			Lying = "AfdsPpneMstpSrasWpstDnon";
			PlayerCrouch = "AfdsPknlMstpSrasWpstDnon";
			PlayerProne = "AfdsPpneMstpSrasWpstDnon";
			PlayerSlowB = "AfdsPpneMstpSrasWpstDnon";
			PlayerSlowF = "AfdsPpneMstpSrasWpstDnon";
			PlayerSlowL = "AfdsPpneMstpSrasWpstDnon";
			PlayerSlowLB = "AfdsPpneMstpSrasWpstDnon";
			PlayerSlowLF = "AfdsPpneMstpSrasWpstDnon";
			PlayerSlowR = "AfdsPpneMstpSrasWpstDnon";
			PlayerSlowRB = "AfdsPpneMstpSrasWpstDnon";
			PlayerSlowRF = "AfdsPpneMstpSrasWpstDnon";
			PlayerStand = "AfdsPercMstpSrasWpstDnon";
			PlayerTactB = "AfdsPpneMstpSrasWpstDnon";
			PlayerTactF = "AfdsPpneMstpSrasWpstDnon";
			PlayerTactL = "AfdsPpneMstpSrasWpstDnon";
			PlayerTactLB = "AfdsPpneMstpSrasWpstDnon";
			PlayerTactLF = "AfdsPpneMstpSrasWpstDnon";
			PlayerTactR = "AfdsPpneMstpSrasWpstDnon";
			PlayerTactRB = "AfdsPpneMstpSrasWpstDnon";
			PlayerTactRF = "AfdsPpneMstpSrasWpstDnon";
			PlayerWalkB = "AfdsPpneMstpSrasWpstDnon";
			PlayerWalkF = "AfdsPpneMstpSrasWpstDnon";
			PlayerWalkL = "AfdsPpneMstpSrasWpstDnon";
			PlayerWalkLB = "AfdsPpneMstpSrasWpstDnon";
			PlayerWalkLF = "AfdsPpneMstpSrasWpstDnon";
			PlayerWalkR = "AfdsPpneMstpSrasWpstDnon";
			PlayerWalkRB = "AfdsPpneMstpSrasWpstDnon";
			PlayerWalkRF = "AfdsPpneMstpSrasWpstDnon";
			PrimaryWeapon = "AfdsPpneMstpSrasWrflDnon";
			SlowB = "AfdsPpneMstpSrasWpstDnon";
			SlowF = "AfdsPpneMstpSrasWpstDnon";
			SlowL = "AfdsPpneMstpSrasWpstDnon";
			SlowLB = "AfdsPpneMstpSrasWpstDnon";
			SlowLF = "AfdsPpneMstpSrasWpstDnon";
			SlowR = "AfdsPpneMstpSrasWpstDnon";
			SlowRB = "AfdsPpneMstpSrasWpstDnon";
			SlowRF = "AfdsPpneMstpSrasWpstDnon";
			Stand = "AfdsPercMstpSlowWpstDnon";
			Stop = "AfdsPpneMstpSrasWpstDnon";
			TactB = "AfdsPpneMstpSrasWpstDnon";
			TactF = "AfdsPpneMstpSrasWpstDnon";
			TactL = "AfdsPpneMstpSrasWpstDnon";
			TactLB = "AfdsPpneMstpSrasWpstDnon";
			TactLF = "AfdsPpneMstpSrasWpstDnon";
			TactR = "AfdsPpneMstpSrasWpstDnon";
			TactRB = "AfdsPpneMstpSrasWpstDnon";
			TactRF = "AfdsPpneMstpSrasWpstDnon";
			TurnL = "AfdsPpneMstpSrasWpstDnon_turnL";
			TurnR = "AfdsPpneMstpSrasWpstDnon_turnR";
			Up = "AfdsPknlMstpSrasWpstDnon";
			WalkB = "AfdsPpneMstpSrasWpstDnon";
			WalkF = "AfdsPpneMstpSrasWpstDnon";
			WalkL = "AfdsPpneMstpSrasWpstDnon";
			WalkLB = "AfdsPpneMstpSrasWpstDnon";
			WalkLF = "AfdsPpneMstpSrasWpstDnon";
			WalkR = "AfdsPpneMstpSrasWpstDnon";
			WalkRB = "AfdsPpneMstpSrasWpstDnon";
			WalkRF = "AfdsPpneMstpSrasWpstDnon";
		};
		class FiringDrillsPistolProneActions_inv: FiringDrillsPistolProneActions
		{
			Default = "AfdsPpneMstpSrasWpstDnon_inv";
			Stop = "AfdsPpneMstpSrasWpstDnon_inv";
		};
		class FiringDrillsPistolStandActions: PistolStandActions
		{
			AdjustB = "";
			AdjustF = "";
			AdjustL = "";
			AdjustR = "";
			Binoculars = "AfdsPercMstpSoptWbinDnon";
			Civil = "AfdsPercMstpSnonWnonDnon";
			CivilLying = "AfdsPpneMstpSnonWnonDnon";
			Combat = "AfdsPercMstpSrasWrflDnon";
			Crouch = "AfdsPknlMstpSrasWpstDnon";
			Default = "AfdsPercMstpSrasWpstDnon";
			Down = "AfdsPpneMstpSrasWpstDnon";
			EvasiveLeft = "AfdsPercMstpSrasWpstDnon";
			EvasiveRight = "AfdsPercMstpSrasWpstDnon";
			FastB = "AfdsPercMstpSrasWpstDnon";
			FastF = "AfdsPercMstpSrasWpstDnon";
			FastL = "AfdsPercMstpSrasWpstDnon";
			FastLB = "AfdsPercMstpSrasWpstDnon";
			FastLF = "AfdsPercMstpSrasWpstDnon";
			FastR = "AfdsPercMstpSrasWpstDnon";
			FastRB = "AfdsPercMstpSrasWpstDnon";
			FastRF = "AfdsPercMstpSrasWpstDnon";
			FDStart = "AmovPercMstpSrasWpstDnon";
			FireNotPossible = "AfdsPercMstpSrasWpstDnon";
			Gear = "AfdsPercMstpSrasWpstDnon_inv";
			GetOver = "";
			HandGunOn = "AfdsPercMstpSrasWrflDnon";
			Lying = "AfdsPpneMstpSrasWpstDnon";
			PlayerCrouch = "AfdsPknlMstpSrasWpstDnon";
			PlayerProne = "AfdsPpneMstpSrasWpstDnon";
			PlayerSlowB = "AfdsPercMstpSrasWpstDnon";
			PlayerSlowF = "AfdsPercMstpSrasWpstDnon";
			PlayerSlowL = "AfdsPercMstpSrasWpstDnon";
			PlayerSlowLB = "AfdsPercMstpSrasWpstDnon";
			PlayerSlowLF = "AfdsPercMstpSrasWpstDnon";
			PlayerSlowR = "AfdsPercMstpSrasWpstDnon";
			PlayerSlowRB = "AfdsPercMstpSrasWpstDnon";
			PlayerSlowRF = "AfdsPercMstpSrasWpstDnon";
			PlayerStand = "AfdsPercMstpSlowWpstDnon";
			PlayerTactB = "AfdsPercMstpSrasWpstDnon";
			PlayerTactF = "AfdsPercMstpSrasWpstDnon";
			PlayerTactL = "AfdsPercMstpSrasWpstDnon";
			PlayerTactLB = "AfdsPercMstpSrasWpstDnon";
			PlayerTactLF = "AfdsPercMstpSrasWpstDnon";
			PlayerTactR = "AfdsPercMstpSrasWpstDnon";
			PlayerTactRB = "AfdsPercMstpSrasWpstDnon";
			PlayerTactRF = "AfdsPercMstpSrasWpstDnon";
			PlayerWalkB = "AfdsPercMstpSrasWpstDnon";
			PlayerWalkF = "AfdsPercMstpSrasWpstDnon";
			PlayerWalkL = "AfdsPercMstpSrasWpstDnon";
			PlayerWalkLB = "AfdsPercMstpSrasWpstDnon";
			PlayerWalkLF = "AfdsPercMstpSrasWpstDnon";
			PlayerWalkR = "AfdsPercMstpSrasWpstDnon";
			PlayerWalkRB = "AfdsPercMstpSrasWpstDnon";
			PlayerWalkRF = "AfdsPercMstpSrasWpstDnon";
			PrimaryWeapon = "AfdsPercMstpSrasWrflDnon";
			SlowB = "AfdsPercMstpSrasWpstDnon";
			SlowF = "AfdsPercMstpSrasWpstDnon";
			SlowL = "AfdsPercMstpSrasWpstDnon";
			SlowLB = "AfdsPercMstpSrasWpstDnon";
			SlowLF = "AfdsPercMstpSrasWpstDnon";
			SlowR = "AfdsPercMstpSrasWpstDnon";
			SlowRB = "AfdsPercMstpSrasWpstDnon";
			SlowRF = "AfdsPercMstpSrasWpstDnon";
			Stand = "AfdsPercMstpSlowWpstDnon";
			Stop = "AfdsPercMstpSrasWpstDnon";
			TactB = "AfdsPercMstpSrasWpstDnon";
			TactF = "AfdsPercMstpSrasWpstDnon";
			TactL = "AfdsPercMstpSrasWpstDnon";
			TactLB = "AfdsPercMstpSrasWpstDnon";
			TactLF = "AfdsPercMstpSrasWpstDnon";
			TactR = "AfdsPercMstpSrasWpstDnon";
			TactRB = "AfdsPercMstpSrasWpstDnon";
			TactRF = "AfdsPercMstpSrasWpstDnon";
			TurnL = "AfdsPercMstpSrasWpstDnon_turnL";
			TurnR = "AfdsPercMstpSrasWpstDnon_turnR";
			Up = "AfdsPknlMstpSrasWpstDnon";
			WalkB = "AfdsPercMstpSrasWpstDnon";
			WalkF = "AfdsPercMstpSrasWpstDnon";
			WalkL = "AfdsPercMstpSrasWpstDnon";
			WalkLB = "AfdsPercMstpSrasWpstDnon";
			WalkLF = "AfdsPercMstpSrasWpstDnon";
			WalkR = "AfdsPercMstpSrasWpstDnon";
			WalkRB = "AfdsPercMstpSrasWpstDnon";
			WalkRF = "AfdsPercMstpSrasWpstDnon";
		};
		class FiringDrillsPistolStandActions_inv: FiringDrillsPistolStandActions
		{
			Default = "AfdsPercMstpSrasWpstDnon_inv";
			PlayerStand = "AfdsPercMstpSrasWpstDnon";
			Stop = "AfdsPercMstpSrasWpstDnon_inv";
		};
		class FiringDrillsRifleKneelActions: RifleKneelActions
		{
			AdjustB = "";
			AdjustF = "";
			AdjustL = "";
			AdjustR = "";
			Binoculars = "AfdsPknlMstpSoptWbinDnon";
			Civil = "AfdsPknlMstpSnonWnonDnon";
			CivilLying = "AfdsPpneMstpSnonWnonDnon";
			Combat = "AfdsPknlMstpSrasWrflDnon";
			Crouch = "AfdsPknlMstpSrasWrflDnon";
			Default = "AfdsPknlMstpSrasWrflDnon";
			Down = "AfdsPpneMstpSrasWrflDnon";
			EvasiveLeft = "AfdsPknlMstpSrasWrflDnon";
			EvasiveRight = "AfdsPknlMstpSrasWrflDnon";
			FastB = "AfdsPknlMstpSrasWrflDnon";
			FastF = "AfdsPknlMstpSrasWrflDnon";
			FastL = "AfdsPknlMstpSrasWrflDnon";
			FastLB = "AfdsPknlMstpSrasWrflDnon";
			FastLF = "AfdsPknlMstpSrasWrflDnon";
			FastR = "AfdsPknlMstpSrasWrflDnon";
			FastRB = "AfdsPknlMstpSrasWrflDnon";
			FastRF = "AfdsPknlMstpSrasWrflDnon";
			FDStart = "AmovPknlMstpSrasWrflDnon";
			FireNotPossible = "AfdsPknlMstpSrasWrflDnon";
			Gear = "AfdsPknlMstpSrasWrflDnon_inv";
			GetOver = "";
			HandGunOn = "AfdsPknlMstpSrasWpstDnon";
			Lying = "AfdsPpneMstpSrasWrflDnon";
			PlayerProne = "AfdsPpneMstpSrasWrflDnon";
			PlayerSlowB = "AfdsPknlMstpSrasWrflDnon";
			PlayerSlowF = "AfdsPknlMstpSrasWrflDnon";
			PlayerSlowL = "AfdsPknlMstpSrasWrflDnon";
			PlayerSlowLB = "AfdsPknlMstpSrasWrflDnon";
			PlayerSlowLF = "AfdsPknlMstpSrasWrflDnon";
			PlayerSlowR = "AfdsPknlMstpSrasWrflDnon";
			PlayerSlowRB = "AfdsPknlMstpSrasWrflDnon";
			PlayerSlowRF = "AfdsPknlMstpSrasWrflDnon";
			PlayerStand = "AfdsPercMstpSrasWrflDnon";
			PlayerTactB = "AfdsPknlMstpSrasWrflDnon";
			PlayerTactF = "AfdsPknlMstpSrasWrflDnon";
			PlayerTactL = "AfdsPknlMstpSrasWrflDnon";
			PlayerTactLB = "AfdsPknlMstpSrasWrflDnon";
			PlayerTactLF = "AfdsPknlMstpSrasWrflDnon";
			PlayerTactR = "AfdsPknlMstpSrasWrflDnon";
			PlayerTactRB = "AfdsPknlMstpSrasWrflDnon";
			PlayerTactRF = "AfdsPknlMstpSrasWrflDnon";
			PlayerWalkB = "AfdsPknlMstpSrasWrflDnon";
			PlayerWalkF = "AfdsPknlMstpSrasWrflDnon";
			PlayerWalkL = "AfdsPknlMstpSrasWrflDnon";
			PlayerWalkLB = "AfdsPknlMstpSrasWrflDnon";
			PlayerWalkLF = "AfdsPknlMstpSrasWrflDnon";
			PlayerWalkR = "AfdsPknlMstpSrasWrflDnon";
			PlayerWalkRB = "AfdsPknlMstpSrasWrflDnon";
			PlayerWalkRF = "AfdsPknlMstpSrasWrflDnon";
			PrimaryWeapon = "AfdsPknlMstpSrasWrflDnon";
			SlowB = "AfdsPknlMstpSrasWrflDnon";
			SlowF = "AfdsPknlMstpSrasWrflDnon";
			SlowL = "AfdsPknlMstpSrasWrflDnon";
			SlowLB = "AfdsPknlMstpSrasWrflDnon";
			SlowLF = "AfdsPknlMstpSrasWrflDnon";
			SlowR = "AfdsPknlMstpSrasWrflDnon";
			SlowRB = "AfdsPknlMstpSrasWrflDnon";
			SlowRF = "AfdsPknlMstpSrasWrflDnon";
			Stand = "AfdsPknlMstpSlowWrflDnon";
			Stop = "AfdsPknlMstpSrasWrflDnon";
			TactB = "AfdsPknlMstpSrasWrflDnon";
			TactF = "AfdsPknlMstpSrasWrflDnon";
			TactL = "AfdsPknlMstpSrasWrflDnon";
			TactLB = "AfdsPknlMstpSrasWrflDnon";
			TactLF = "AfdsPknlMstpSrasWrflDnon";
			TactR = "AfdsPknlMstpSrasWrflDnon";
			TactRB = "AfdsPknlMstpSrasWrflDnon";
			TactRF = "AfdsPknlMstpSrasWrflDnon";
			TurnL = "AfdsPknlMstpSrasWrflDnon_turnL";
			TurnR = "AfdsPknlMstpSrasWrflDnon_turnR";
			Up = "AfdsPercMstpSrasWrflDnon";
			WalkB = "AfdsPknlMstpSrasWrflDnon";
			WalkF = "AfdsPknlMstpSrasWrflDnon";
			WalkL = "AfdsPknlMstpSrasWrflDnon";
			WalkLB = "AfdsPknlMstpSrasWrflDnon";
			WalkLF = "AfdsPknlMstpSrasWrflDnon";
			WalkR = "AfdsPknlMstpSrasWrflDnon";
			WalkRB = "AfdsPknlMstpSrasWrflDnon";
			WalkRF = "AfdsPknlMstpSrasWrflDnon";
		};
		class FiringDrillsRifleKneelActions_inv: FiringDrillsRifleKneelActions
		{
			Default = "AfdsPknlMstpSrasWrflDnon_inv";
			Stop = "AfdsPknlMstpSrasWrflDnon_inv";
		};
		class FiringDrillsRifleLowKneelActions: FiringDrillsRifleKneelActions
		{
			Combat = "AfdsPknlMstpSrasWrflDnon";
			Default = "AfdsPknlMstpSlowWrflDnon";
			EvasiveLeft = "AfdsPknlMstpSlowWrflDnon";
			EvasiveRight = "AfdsPknlMstpSlowWrflDnon";
			FastB = "AfdsPknlMstpSlowWrflDnon";
			FastF = "AfdsPknlMstpSlowWrflDnon";
			FastL = "AfdsPknlMstpSlowWrflDnon";
			FastLB = "AfdsPknlMstpSlowWrflDnon";
			FastLF = "AfdsPknlMstpSlowWrflDnon";
			FastR = "AfdsPknlMstpSlowWrflDnon";
			FastRB = "AfdsPknlMstpSlowWrflDnon";
			FastRF = "AfdsPknlMstpSlowWrflDnon";
			FDStart = "AmovPknlMstpSlowWrflDnon";
			PlayerSlowB = "AfdsPknlMstpSlowWrflDnon";
			PlayerSlowF = "AfdsPknlMstpSlowWrflDnon";
			PlayerSlowL = "AfdsPknlMstpSlowWrflDnon";
			PlayerSlowLB = "AfdsPknlMstpSlowWrflDnon";
			PlayerSlowLF = "AfdsPknlMstpSlowWrflDnon";
			PlayerSlowR = "AfdsPknlMstpSlowWrflDnon";
			PlayerSlowRB = "AfdsPknlMstpSlowWrflDnon";
			PlayerSlowRF = "AfdsPknlMstpSlowWrflDnon";
			PlayerStand = "AfdsPercMstpSlowWrflDnon";
			PlayerTactB = "AfdsPknlMstpSlowWrflDnon";
			PlayerTactF = "AfdsPknlMstpSlowWrflDnon";
			PlayerTactL = "AfdsPknlMstpSlowWrflDnon";
			PlayerTactLB = "AfdsPknlMstpSlowWrflDnon";
			PlayerTactLF = "AfdsPknlMstpSlowWrflDnon";
			PlayerTactR = "AfdsPknlMstpSlowWrflDnon";
			PlayerTactRB = "AfdsPknlMstpSlowWrflDnon";
			PlayerTactRF = "AfdsPknlMstpSlowWrflDnon";
			PlayerWalkB = "AfdsPknlMstpSlowWrflDnon";
			PlayerWalkF = "AfdsPknlMstpSlowWrflDnon";
			PlayerWalkL = "AfdsPknlMstpSlowWrflDnon";
			PlayerWalkLB = "AfdsPknlMstpSlowWrflDnon";
			PlayerWalkLF = "AfdsPknlMstpSlowWrflDnon";
			PlayerWalkR = "AfdsPknlMstpSlowWrflDnon";
			PlayerWalkRB = "AfdsPknlMstpSlowWrflDnon";
			PlayerWalkRF = "AfdsPknlMstpSlowWrflDnon";
			SlowB = "AfdsPknlMstpSlowWrflDnon";
			SlowF = "AfdsPknlMstpSlowWrflDnon";
			SlowL = "AfdsPknlMstpSlowWrflDnon";
			SlowLB = "AfdsPknlMstpSlowWrflDnon";
			SlowLF = "AfdsPknlMstpSlowWrflDnon";
			SlowR = "AfdsPknlMstpSlowWrflDnon";
			SlowRB = "AfdsPknlMstpSlowWrflDnon";
			SlowRF = "AfdsPknlMstpSlowWrflDnon";
			Stand = "AfdsPknlMstpSrasWrflDnon";
			Stop = "AfdsPknlMstpSlowWrflDnon";
			TactB = "AfdsPknlMstpSlowWrflDnon";
			TactF = "AfdsPknlMstpSlowWrflDnon";
			TactL = "AfdsPknlMstpSlowWrflDnon";
			TactLB = "AfdsPknlMstpSlowWrflDnon";
			TactLF = "AfdsPknlMstpSlowWrflDnon";
			TactR = "AfdsPknlMstpSlowWrflDnon";
			TactRB = "AfdsPknlMstpSlowWrflDnon";
			TactRF = "AfdsPknlMstpSlowWrflDnon";
			TurnL = "AfdsPknlMstpSlowWrflDnon_turnL";
			TurnR = "AfdsPknlMstpSlowWrflDnon_turnR";
			Up = "AfdsPercMstpSlowWrflDnon";
			WalkB = "AfdsPknlMstpSlowWrflDnon";
			WalkF = "AfdsPknlMstpSlowWrflDnon";
			WalkL = "AfdsPknlMstpSlowWrflDnon";
			WalkLB = "AfdsPknlMstpSlowWrflDnon";
			WalkLF = "AfdsPknlMstpSlowWrflDnon";
			WalkR = "AfdsPknlMstpSlowWrflDnon";
			WalkRB = "AfdsPknlMstpSlowWrflDnon";
			WalkRF = "AfdsPknlMstpSlowWrflDnon";
		};
		class FiringDrillsRifleLowKneelActions_inv: FiringDrillsRifleLowKneelActions
		{
			Default = "AfdsPknlMstpSlowWrflDnon_inv";
			Stop = "AfdsPknlMstpSlowWrflDnon_inv";
		};
		class FiringDrillsRifleLowStandActions: FiringDrillsRifleStandActions
		{
			Crouch = "AfdsPknlMstpSlowWrflDnon";
			Default = "AfdsPercMstpSlowWrflDnon";
			EvasiveLeft = "AfdsPercMstpSlowWrflDnon";
			EvasiveRight = "AfdsPercMstpSlowWrflDnon";
			FastB = "AfdsPercMstpSlowWrflDnon";
			FastF = "AfdsPercMstpSlowWrflDnon";
			FastL = "AfdsPercMstpSlowWrflDnon";
			FastLB = "AfdsPercMstpSlowWrflDnon";
			FastLF = "AfdsPercMstpSlowWrflDnon";
			FastR = "AfdsPercMstpSlowWrflDnon";
			FastRB = "AfdsPercMstpSlowWrflDnon";
			FastRF = "AfdsPercMstpSlowWrflDnon";
			FDStart = "AmovPercMstpSlowWrflDnon";
			Gear = "AfdsPercMstpSlowWrflDnon_inv";
			PlayerSlowB = "AfdsPercMstpSlowWrflDnon";
			PlayerSlowF = "AfdsPercMstpSlowWrflDnon";
			PlayerSlowL = "AfdsPercMstpSlowWrflDnon";
			PlayerSlowLB = "AfdsPercMstpSlowWrflDnon";
			PlayerSlowLF = "AfdsPercMstpSlowWrflDnon";
			PlayerSlowR = "AfdsPercMstpSlowWrflDnon";
			PlayerSlowRB = "AfdsPercMstpSlowWrflDnon";
			PlayerSlowRF = "AfdsPercMstpSlowWrflDnon";
			PlayerTactB = "AfdsPercMstpSlowWrflDnon";
			PlayerTactF = "AfdsPercMstpSlowWrflDnon";
			PlayerTactL = "AfdsPercMstpSlowWrflDnon";
			PlayerTactLB = "AfdsPercMstpSlowWrflDnon";
			PlayerTactLF = "AfdsPercMstpSlowWrflDnon";
			PlayerTactR = "AfdsPercMstpSlowWrflDnon";
			PlayerTactRB = "AfdsPercMstpSlowWrflDnon";
			PlayerTactRF = "AfdsPercMstpSlowWrflDnon";
			PlayerWalkB = "AfdsPercMstpSlowWrflDnon";
			PlayerWalkF = "AfdsPercMstpSlowWrflDnon";
			PlayerWalkL = "AfdsPercMstpSlowWrflDnon";
			PlayerWalkLB = "AfdsPercMstpSlowWrflDnon";
			PlayerWalkLF = "AfdsPercMstpSlowWrflDnon";
			PlayerWalkR = "AfdsPercMstpSlowWrflDnon";
			PlayerWalkRB = "AfdsPercMstpSlowWrflDnon";
			PlayerWalkRF = "AfdsPercMstpSlowWrflDnon";
			SlowB = "AfdsPercMstpSlowWrflDnon";
			SlowF = "AfdsPercMstpSlowWrflDnon";
			SlowL = "AfdsPercMstpSlowWrflDnon";
			SlowLB = "AfdsPercMstpSlowWrflDnon";
			SlowLF = "AfdsPercMstpSlowWrflDnon";
			SlowR = "AfdsPercMstpSlowWrflDnon";
			SlowRB = "AfdsPercMstpSlowWrflDnon";
			SlowRF = "AfdsPercMstpSlowWrflDnon";
			Stand = "AfdsPercMstpSrasWrflDnon";
			Stop = "AfdsPercMstpSlowWrflDnon";
			TactB = "AfdsPercMstpSlowWrflDnon";
			TactF = "AfdsPercMstpSlowWrflDnon";
			TactL = "AfdsPercMstpSlowWrflDnon";
			TactLB = "AfdsPercMstpSlowWrflDnon";
			TactLF = "AfdsPercMstpSlowWrflDnon";
			TactR = "AfdsPercMstpSlowWrflDnon";
			TactRB = "AfdsPercMstpSlowWrflDnon";
			TactRF = "AfdsPercMstpSlowWrflDnon";
			TurnL = "AfdsPercMstpSlowWrflDnon_turnL";
			TurnR = "AfdsPercMstpSlowWrflDnon_turnR";
			Up = "AfdsPknlMstpSlowWrflDnon";
			upDegree = "ManPosStand";
			WalkB = "AfdsPercMstpSlowWrflDnon";
			WalkF = "AfdsPercMstpSlowWrflDnon";
			WalkL = "AfdsPercMstpSlowWrflDnon";
			WalkLB = "AfdsPercMstpSlowWrflDnon";
			WalkLF = "AfdsPercMstpSlowWrflDnon";
			WalkR = "AfdsPercMstpSlowWrflDnon";
			WalkRB = "AfdsPercMstpSlowWrflDnon";
			WalkRF = "AfdsPercMstpSlowWrflDnon";
		};
		class FiringDrillsRifleLowStandActions_inv: FiringDrillsRifleLowStandActions
		{
			Default = "AfdsPercMstpSlowWrflDnon_inv";
			HandGunOn = "AfdsPercMstpSrasWpstDnon_inv";
			PlayerStand = "AfdsPercMstpSlowWrflDnon";
			Stop = "AfdsPercMstpSlowWrflDnon_inv";
		};
		class FiringDrillsRifleProneActions: RifleProneActions
		{
			AdjustB = "";
			AdjustF = "";
			AdjustL = "";
			AdjustR = "";
			Binoculars = "AfdsPpneMstpSoptWbinDnon";
			Civil = "AfdsPercMstpSnonWnonDnon";
			CivilLying = "AfdsPpneMstpSnonWnonDnon";
			Combat = "AfdsPercMstpSrasWrflDnon";
			Crouch = "AfdsPknlMstpSrasWrflDnon";
			Default = "AfdsPpneMstpSrasWrflDnon";
			Down = "AfdsPercMstpSrasWrflDnon";
			EvasiveLeft = "AfdsPpneMstpSrasWrflDnon";
			EvasiveRight = "AfdsPpneMstpSrasWrflDnon";
			FastB = "AfdsPpneMstpSrasWrflDnon";
			FastF = "AfdsPpneMstpSrasWrflDnon";
			FastL = "AfdsPpneMstpSrasWrflDnon";
			FastLB = "AfdsPpneMstpSrasWrflDnon";
			FastLF = "AfdsPpneMstpSrasWrflDnon";
			FastR = "AfdsPpneMstpSrasWrflDnon";
			FastRB = "AfdsPpneMstpSrasWrflDnon";
			FastRF = "AfdsPpneMstpSrasWrflDnon";
			FDStart = "AmovPpneMstpSrasWrflDnon";
			FireNotPossible = "AfdsPpneMstpSrasWrflDnon";
			Gear = "AfdsPpneMstpSrasWrflDnon_inv";
			HandGunOn = "AfdsPpneMstpSrasWpstDnon";
			Lying = "AfdsPpneMstpSrasWrflDnon";
			PlayerCrouch = "AfdsPknlMstpSrasWrflDnon";
			PlayerSlowB = "AfdsPpneMstpSrasWrflDnon";
			PlayerSlowF = "AfdsPpneMstpSrasWrflDnon";
			PlayerSlowL = "AfdsPpneMstpSrasWrflDnon";
			PlayerSlowLB = "AfdsPpneMstpSrasWrflDnon";
			PlayerSlowLF = "AfdsPpneMstpSrasWrflDnon";
			PlayerSlowR = "AfdsPpneMstpSrasWrflDnon";
			PlayerSlowRB = "AfdsPpneMstpSrasWrflDnon";
			PlayerSlowRF = "AfdsPpneMstpSrasWrflDnon";
			PlayerStand = "AfdsPercMstpSrasWrflDnon";
			PlayerTactB = "AfdsPpneMstpSrasWrflDnon";
			PlayerTactF = "AfdsPpneMstpSrasWrflDnon";
			PlayerTactL = "AfdsPpneMstpSrasWrflDnon";
			PlayerTactLB = "AfdsPpneMstpSrasWrflDnon";
			PlayerTactLF = "AfdsPpneMstpSrasWrflDnon";
			PlayerTactR = "AfdsPpneMstpSrasWrflDnon";
			PlayerTactRB = "AfdsPpneMstpSrasWrflDnon";
			PlayerTactRF = "AfdsPpneMstpSrasWrflDnon";
			PlayerWalkB = "AfdsPpneMstpSrasWrflDnon";
			PlayerWalkF = "AfdsPpneMstpSrasWrflDnon";
			PlayerWalkL = "AfdsPpneMstpSrasWrflDnon";
			PlayerWalkLB = "AfdsPpneMstpSrasWrflDnon";
			PlayerWalkLF = "AfdsPpneMstpSrasWrflDnon";
			PlayerWalkR = "AfdsPpneMstpSrasWrflDnon";
			PlayerWalkRB = "AfdsPpneMstpSrasWrflDnon";
			PlayerWalkRF = "AfdsPpneMstpSrasWrflDnon";
			PrimaryWeapon = "AfdsPpneMstpSrasWrflDnon";
			SlowB = "AfdsPpneMstpSrasWrflDnon";
			SlowF = "AfdsPpneMstpSrasWrflDnon";
			SlowL = "AfdsPpneMstpSrasWrflDnon";
			SlowLB = "AfdsPpneMstpSrasWrflDnon";
			SlowLF = "AfdsPpneMstpSrasWrflDnon";
			SlowR = "AfdsPpneMstpSrasWrflDnon";
			SlowRB = "AfdsPpneMstpSrasWrflDnon";
			SlowRF = "AfdsPpneMstpSrasWrflDnon";
			Stand = "AfdsPercMstpSlowWrflDnon";
			Stop = "AfdsPpneMstpSrasWrflDnon";
			TactB = "AfdsPpneMstpSrasWrflDnon";
			TactF = "AfdsPpneMstpSrasWrflDnon";
			TactL = "AfdsPpneMstpSrasWrflDnon";
			TactLB = "AfdsPpneMstpSrasWrflDnon";
			TactLF = "AfdsPpneMstpSrasWrflDnon";
			TactR = "AfdsPpneMstpSrasWrflDnon";
			TactRB = "AfdsPpneMstpSrasWrflDnon";
			TactRF = "AfdsPpneMstpSrasWrflDnon";
			TurnL = "AfdsPpneMstpSrasWrflDnon_turnL";
			TurnR = "AfdsPpneMstpSrasWrflDnon_turnR";
			Up = "AfdsPknlMstpSrasWrflDnon";
			WalkB = "AfdsPpneMstpSrasWrflDnon";
			WalkF = "AfdsPpneMstpSrasWrflDnon";
			WalkL = "AfdsPpneMstpSrasWrflDnon";
			WalkLB = "AfdsPpneMstpSrasWrflDnon";
			WalkLF = "AfdsPpneMstpSrasWrflDnon";
			WalkR = "AfdsPpneMstpSrasWrflDnon";
			WalkRB = "AfdsPpneMstpSrasWrflDnon";
			WalkRF = "AfdsPpneMstpSrasWrflDnon";
		};
		class FiringDrillsRifleProneActions_inv: FiringDrillsRifleProneActions
		{
			Default = "AfdsPpneMstpSrasWrflDnon_inv";
			Stop = "AfdsPpneMstpSrasWrflDnon_inv";
		};
		class FiringDrillsRifleStandActions: RifleStandActions
		{
			AdjustB = "";
			AdjustF = "";
			AdjustL = "";
			AdjustR = "";
			Binoculars = "AfdsPercMstpSoptWbinDnon";
			Civil = "AfdsPercMstpSnonWnonDnon";
			CivilLying = "AfdsPpneMstpSnonWnonDnon";
			Combat = "AfdsPercMstpSrasWrflDnon";
			Crouch = "AfdsPknlMstpSrasWrflDnon";
			Default = "AfdsPercMstpSrasWrflDnon";
			Down = "AfdsPpneMstpSrasWrflDnon";
			EvasiveLeft = "AfdsPercMstpSrasWrflDnon";
			EvasiveRight = "AfdsPercMstpSrasWrflDnon";
			FastB = "AfdsPercMstpSrasWrflDnon";
			FastF = "AfdsPercMstpSrasWrflDnon";
			FastL = "AfdsPercMstpSrasWrflDnon";
			FastLB = "AfdsPercMstpSrasWrflDnon";
			FastLF = "AfdsPercMstpSrasWrflDnon";
			FastR = "AfdsPercMstpSrasWrflDnon";
			FastRB = "AfdsPercMstpSrasWrflDnon";
			FastRF = "AfdsPercMstpSrasWrflDnon";
			FDStart = "AmovPercMstpSrasWrflDnon";
			FireNotPossible = "AfdsPercMstpSrasWrflDnon";
			Gear = "AfdsPercMstpSrasWrflDnon_inv";
			GetOver = "";
			HandGunOn = "AfdsPercMstpSrasWpstDnon";
			Lying = "AfdsPpneMstpSrasWrflDnon";
			PlayerSlowB = "AfdsPercMstpSrasWrflDnon";
			PlayerSlowF = "AfdsPercMstpSrasWrflDnon";
			PlayerSlowL = "AfdsPercMstpSrasWrflDnon";
			PlayerSlowLB = "AfdsPercMstpSrasWrflDnon";
			PlayerSlowLF = "AfdsPercMstpSrasWrflDnon";
			PlayerSlowR = "AfdsPercMstpSrasWrflDnon";
			PlayerSlowRB = "AfdsPercMstpSrasWrflDnon";
			PlayerSlowRF = "AfdsPercMstpSrasWrflDnon";
			PlayerTactB = "AfdsPercMstpSrasWrflDnon";
			PlayerTactF = "AfdsPercMstpSrasWrflDnon";
			PlayerTactL = "AfdsPercMstpSrasWrflDnon";
			PlayerTactLB = "AfdsPercMstpSrasWrflDnon";
			PlayerTactLF = "AfdsPercMstpSrasWrflDnon";
			PlayerTactR = "AfdsPercMstpSrasWrflDnon";
			PlayerTactRB = "AfdsPercMstpSrasWrflDnon";
			PlayerTactRF = "AfdsPercMstpSrasWrflDnon";
			PlayerWalkB = "AfdsPercMstpSrasWrflDnon";
			PlayerWalkF = "AfdsPercMstpSrasWrflDnon";
			PlayerWalkL = "AfdsPercMstpSrasWrflDnon";
			PlayerWalkLB = "AfdsPercMstpSrasWrflDnon";
			PlayerWalkLF = "AfdsPercMstpSrasWrflDnon";
			PlayerWalkR = "AfdsPercMstpSrasWrflDnon";
			PlayerWalkRB = "AfdsPercMstpSrasWrflDnon";
			PlayerWalkRF = "AfdsPercMstpSrasWrflDnon";
			PrimaryWeapon = "AfdsPercMstpSrasWrflDnon";
			SlowB = "AfdsPercMstpSrasWrflDnon";
			SlowF = "AfdsPercMstpSrasWrflDnon";
			SlowL = "AfdsPercMstpSrasWrflDnon";
			SlowLB = "AfdsPercMstpSrasWrflDnon";
			SlowLF = "AfdsPercMstpSrasWrflDnon";
			SlowR = "AfdsPercMstpSrasWrflDnon";
			SlowRB = "AfdsPercMstpSrasWrflDnon";
			SlowRF = "AfdsPercMstpSrasWrflDnon";
			Stand = "AfdsPercMstpSlowWrflDnon";
			StartFreefall = "AfdsPercMstpSrasWrflDnon";
			Stop = "AfdsPercMstpSrasWrflDnon";
			TactB = "AfdsPercMstpSrasWrflDnon";
			TactF = "AfdsPercMstpSrasWrflDnon";
			TactL = "AfdsPercMstpSrasWrflDnon";
			TactLB = "AfdsPercMstpSrasWrflDnon";
			TactLF = "AfdsPercMstpSrasWrflDnon";
			TactR = "AfdsPercMstpSrasWrflDnon";
			TactRB = "AfdsPercMstpSrasWrflDnon";
			TactRF = "AfdsPercMstpSrasWrflDnon";
			TurnL = "AfdsPercMstpSrasWrflDnon_turnL";
			TurnR = "AfdsPercMstpSrasWrflDnon_turnR";
			Up = "AfdsPknlMstpSrasWrflDnon";
			WalkB = "AfdsPercMstpSrasWrflDnon";
			WalkF = "AfdsPercMstpSrasWrflDnon";
			WalkL = "AfdsPercMstpSrasWrflDnon";
			WalkLB = "AfdsPercMstpSrasWrflDnon";
			WalkLF = "AfdsPercMstpSrasWrflDnon";
			WalkR = "AfdsPercMstpSrasWrflDnon";
			WalkRB = "AfdsPercMstpSrasWrflDnon";
			WalkRF = "AfdsPercMstpSrasWrflDnon";
		};
		class FiringDrillsRifleStandActions_inv: FiringDrillsRifleStandActions
		{
			Default = "AfdsPercMstpSrasWrflDnon_inv";
			HandGunOn = "AfdsPercMstpSrasWpstDnon_inv";
			PlayerStand = "AfdsPercMstpSrasWrflDnon";
			Stop = "AfdsPercMstpSrasWrflDnon_inv";
		};
		class HealActionBase: RifleKneelActions
		{
			BinocOff = "";
			BinocOn = "";
			bottomSwim = "";
			CanNotMove = "";
			Civil = "";
			CivilLying = "";
			Combat = "AmovPercMstpSrasWrflDnon";
			Crouch = "";
			Default = "AinvPknlMstpSnonWrflDnon_medic";
			Diary = "";
			dooraction = "";
			Down = "";
			FireNotPossible = "";
			Gear = "";
			GetInHigh = "";
			GetInLow = "";
			GetInMedium = "";
			GetInSDV = "";
			GetOutHigh = "";
			GetOutHighHemtt = "";
			GetOutHighZamak = "";
			GetOutLow = "";
			GetOutMedium = "";
			GetOutPara = "";
			GetOutSDV = "";
			GetOver = "";
			healingFinished = "AinjPpneMstpSnonWrflDnon";
			healStart = "AinvPknlMstpSnonWrflDnon_medic";
			healStartUp = "AinvPknlMstpSnonWrflDnon_medicUp";
			healStop = "AinvPknlMstpSnonWrflDnon_medicEnd";
			LadderOnDown = "";
			LadderOnUp = "";
			Lying = "";
			medicStop = "AinvPknlMstpSnonWrflDnon_medicEnd";
			PutDown = "";
			ReloadMortar = "";
			saluteOff = "";
			SceneCommanderTalk = "";
			ScenePoslechVelitele = "";
			SceneSitRfl_L = "";
			SceneSitRfl_R = "";
			SceneSitUnarm_L = "";
			SceneSitUnarm_R = "";
			SceneSleepA = "";
			SceneSleepB = "";
			SceneSleepC = "";
			Stand = "";
			StartDive = "";
			startSwim = "";
			Stop = "AinvPknlMstpSnonWrflDnon_medic0s";
			StopRelaxed = "AinvPknlMstpSnonWrflDnon_medic0s";
			StrokeGun = "";
			surfaceSwim = "";
			Surrender = "";
			TakeFlag = "";
			ThrowPrepare = "";
			toAgony = "AinjPpneMstpSnonWrflDnon";
			TurnL = "AinvPknlMstpSnonWrflDnon_medic0S";
			TurnLRelaxed = "AinvPknlMstpSnonWrflDnon_medic0S";
			TurnR = "AinvPknlMstpSnonWrflDnon_medic0S";
			TurnRRelaxed = "AinvPknlMstpSnonWrflDnon_medic0S";
			Up = "";
			updegree = "ManPosHealing";
			WeaponOff = "";
			WeaponOn = "";
		};
		class HealActionBaseDr: HealActionBase
		{
			Stop = "AinvPknlMstpSnonWrflDr_medic0S";
			StopRelaxed = "AinvPknlMstpSnonWrflDr_medic0S";
			TurnL = "AinvPknlMstpSnonWrflDr_medic0S";
			TurnLRelaxed = "AinvPknlMstpSnonWrflDr_medic0S";
			TurnR = "AinvPknlMstpSnonWrflDr_medic0S";
			TurnRRelaxed = "AinvPknlMstpSnonWrflDr_medic0S";
		};
		class HealActionsNon: CivilKneelActions_gear
		{
			carriedStill = "AinjPfalMstpSnonWnonDnon_carried_still";
			Down = "AinvPknlMstpSnonWnonDnon_medicEnd";
			FastB = "AinvPknlMstpSnonWnonDnon_medicEnd";
			grabCarry = "AcinPknlMstpSnonWnonDnon_AcinPercMrunSnonWnonDnon";
			LadderOnDown = "";
			LadderOnUp = "";
			medicMove = "";
			medicStart = "AinvPknlMstpSnonWnonDnon_medic";
			medicStartUp = "AinvPknlMstpSnonWrflDnon_medicUp";
			PlayerSlowB = "AinvPknlMstpSnonWnonDnon_medicEnd";
			PlayerWalkB = "AinvPknlMstpSnonWnonDnon_medicEnd";
			SlowB = "AinvPknlMstpSnonWnonDnon_medicEnd";
			Stand = "AinvPknlMstpSnonWnonDnon_medicEnd";
			Stop = "AmovPknlMstpSnonWnonDnon";
			StopRelaxed = "AmovPknlMstpSnonWnonDnon";
			TestDriver = "";
			TestDriverOut = "";
			TestGunner = "";
			toAgony = "AinjPpneMstpSnonWrflDnon";
			turnSpeed = 0;
			upDegree = "ManPosHealing";
			WalkB = "AinvPknlMstpSnonWnonDnon_medicEnd";
		};
		class HealActionsNonDr: HealActionsNon
		{
			Stop = "AinvPknlMstpSnonWnonDr_medic0s";
			StopRelaxed = "AinvPknlMstpSnonWnonDr_medic0s";
		};
		class HealSelfActionBase: HealActionBase
		{
			medicStartUp = "AmovPknlMstpSrasWrflDnon";
			medicStop = "AmovPknlMstpSrasWrflDnon";
			Stop = "AmovPknlMstpSrasWrflDnon";
			StopRelaxed = "AmovPknlMstpSrasWrflDnon";
		};
		class HealSelfActionProne: HealSelfActionBase
		{
			medicStartUp = "AmovPpneMstpSrasWrflDnon";
			medicStop = "AmovPpneMstpSrasWrflDnon";
			Stop = "AmovPpneMstpSrasWrflDnon";
			StopRelaxed = "AmovPpneMstpSrasWrflDnon";
		};
		class HealSelfActionsNon: HealActionsNon {};
		class HealSelfCivilActionBase: HealActionBase
		{
			Civil = "AmovPknlMstpSnonWnonDnon";
			medicStartUp = "AmovPknlMstpSnonWnonDnon";
			medicStop = "AmovPknlMstpSnonWnonDnon";
			Stop = "AmovPknlMstpSnonWnonDnon";
			StopRelaxed = "AmovPknlMstpSnonWnonDnon";
		};
		class HealSelfCivilActionProne: HealSelfCivilActionBase
		{
			Civil = "AmovPpneMstpSnonWnonDnon";
			medicStartUp = "AmovPpneMstpSnonWnonDnon";
			medicStop = "AmovPpneMstpSnonWnonDnon";
			Stop = "AmovPpneMstpSnonWnonDnon";
			StopRelaxed = "AmovPpneMstpSnonWnonDnon";
		};
		class HealSelfLauncherActionBase: HealActionBase
		{
			medicStartUp = "AmovPknlMstpSrasWlnrDnon";
			medicStop = "AmovPknlMstpSrasWlnrDnon";
			Stop = "AmovPknlMstpSrasWlnrDnon";
			StopRelaxed = "AmovPknlMstpSrasWlnrDnon";
		};
		class HealSelfPistolActionBase: HealActionBase
		{
			medicStartUp = "AmovPknlMstpSrasWpstDnon";
			medicStop = "AmovPknlMstpSrasWpstDnon";
			Stop = "AmovPknlMstpSrasWpstDnon";
			StopRelaxed = "AmovPknlMstpSrasWpstDnon";
		};
		class HealSelfPistolActionProne: HealSelfPistolActionBase
		{
			medicStartUp = "AmovPpneMstpSrasWpstDnon";
			medicStop = "AmovPpneMstpSrasWpstDnon";
			Stop = "AmovPpneMstpSrasWpstDnon";
			StopRelaxed = "AmovPpneMstpSrasWpstDnon";
		};
		class Heli_Light_Cargo01_Shooting_Actions: CargoActions
		{
			reloadMagazine[] = {"WeaponMagazineReloadStand", "Gesture"};
		};
		class IncapacitatedAction: ToIncapacitatedAction {};
		class IncapacitatedPistolAction: ToIncapacitatedPistolAction {};
		class IncapacitatedRifleAction: ToIncapacitatedRifleAction {};
		class InjuredManActions: NoActions
		{
			FastF = "AmovPpneMsprSlowWrflDf_injured";
			healingFinished = "AmovPpneMstpSrasWrflDnon";
			LadderOnDown = "";
			LadderOnUp = "";
			medic = "AinvPknlMstpSlayWrflDnon_medic";
			medicStart = "";
			medicStartUp = "";
			medicStop = "";
			medicUp = "AinvPknlMstpSlayWrflDnon_medicUp";
			PlayerSlowF = "AmovPpneMsprSlowWrflDf_injured";
			PlayerWalkF = "AmovPpneMsprSlowWrflDf_injured";
			SlowF = "AmovPpneMsprSlowWrflDf_injured";
			stance = "ManStanceProne";
			TestDriver = "";
			TestDriverOut = "";
			TestGunner = "";
			turnSpeed = 0;
			upDegree = "ManPosLying";
			WalkF = "AmovPpneMsprSlowWrflDf_injured";
		};
		class InjuredManActionsNon: InjuredManActionsRfl
		{
			agonyStart = "AinjPpneMstpSnonWnonDnon";
			agonyStop = "AmovPpneMstpSnonWnonDnon";
			carriedStill = "AinjPfalMstpSnonWnonDnon_carried_still";
			FastF = "AmovPpneMsprSnonWnonDf_injured";
			grabCarried = "AinjPfalMstpSnonWnonDnon_carried_Up";
			grabDrag = "AmovPercMstpSnonWnonDnon_AcinPknlMwlkSnonWnonDb_2";
			grabDragged = "AinjPpneMrunSnonWnonDb_grab";
			healedStart = "AinjPpneMstpSnonWnonDnon_injuredHealed";
			healedStop = "AinjPpneMstpSnonWnonDnon";
			Lying = "AmovPpneMstpSnonWnonDnon_injured";
			medic = "AinvPknlMstpSnonWnonDnon_medic_1";
			medicStart = "AinvPknlMstpSnonWnonDnon_medic";
			medicStop = "AinvPknlMstpSnonWnonDnon_medicEnd";
			PlayerSlowF = "AmovPpneMsprSnonWnonDf_injured";
			PlayerWalkF = "AmovPpneMsprSnonWnonDf_injured";
			released = "AinjPpneMstpSnonWnonDnon";
			releasedBad = "AinjPpneMstpSnonWnonDnon";
			SlowF = "AmovPpneMsprSnonWnonDf_injured";
			Stop = "AmovPpneMstpSnonWnonDnon_injured";
			WalkF = "AmovPpneMsprSnonWnonDf_injured";
		};
		class InjuredManActionsNon_healed: InjuredManActionsNon_norot {};
		class InjuredManActionsNon_norot: InjuredManActionsNon
		{
			turnSpeed = 0;
		};
		class InjuredManActionsRfl: InjuredManActions
		{
			agonyStart = "AinjPpneMstpSnonWrflDnon";
			agonyStop = "AmovPpneMstpSrasWrflDnon";
			Combat = "Unconscious";
			healedStart = "AinjPpneMstpSnonWrflDnon_injuredHealed";
			healedStop = "AinjPpneMstpSnonWrflDnon";
			Lying = "AmovPpneMstpSrasWrflDnon_injured";
			medicStart = "AinvPknlMstpSnonWrflDnon_medic";
			medicStartUp = "AinvPknlMstpSnonWrflDnon_medicUp";
			medicStop = "AinvPknlMstpSnonWrflDnon_medicEnd";
			Stop = "AmovPpneMstpSrasWrflDnon_injured";
			turnSpeed = 2;
		};
		class InjuredManActionsRfl_healed: InjuredManActionsRfl_norot
		{
			Default = "AinjPpneMstpSnonWrflDnon_injuredHealed";
			FastF = "";
			Lying = "";
			medicStart = "";
			medicStartUp = "";
			medicStop = "";
			PlayerCrouch = "AinjPpneMstpSnonWrflDnon_injuredHealed";
			PlayerProne = "AinjPpneMstpSnonWrflDnon_injuredHealed";
			PlayerSlowF = "";
			PlayerStand = "AinjPpneMstpSnonWrflDnon_injuredHealed";
			PlayerWalkF = "";
			SlowF = "";
			Stop = "AinjPpneMstpSnonWrflDnon_injuredHealed";
			WalkF = "";
		};
		class InjuredManActionsRfl_norot: InjuredManActionsRfl
		{
			Stop = "AinjPpneMstpSnonWrflDnon";
			turnSpeed = 0;
		};
		class InjuredManCarriedActions: InjuredManActions
		{
			agonyStop = "AmovPpneMstpSrasWrflDnon";
			Combat = "AinjPfalMstpSnonWnonDnon_carried_still";
			Default = "AinjPfalMstpSnonWrflDnon_carried_still";
			FastF = "";
			healingFinished = "";
			Lying = "AinjPfalMstpSnonWrflDnon_carried_still";
			PlayerCrouch = "AinjPfalMstpSnonWrflDnon_carried_still";
			PlayerProne = "AinjPfalMstpSnonWrflDnon_carried_still";
			PlayerSlowF = "";
			PlayerStand = "AinjPfalMstpSnonWrflDnon_carried_still";
			PlayerWalkF = "";
			released = "AmovPpneMstpSrasWrflDnon";
			SlowF = "";
			Stop = "AinjPfalMstpSnonWrflDnon_carried_still";
			StopRelaxed = "AinjPfalMstpSnonWrflDnon_carried_still";
			WalkF = "";
		};
		class InjuredManCarriedActionsNon: InjuredManActionsNon
		{
			Default = "AinjPfalMstpSnonWnonDnon_carried_still";
			FastF = "";
			Lying = "AinjPfalMstpSnonWnonDnon_carried_still";
			PlayerStand = "AinjPfalMstpSnonWnonDnon_carried_still";
			released = "AinjPfalMstpSnonWnonDnon_carried_Down";
			releasedBad = "AinjPfalMstpSnonWnonDf_carried_fall";
			SlowF = "";
			Stop = "AinjPfalMstpSnonWnonDnon_carried_still";
			StopRelaxed = "AinjPfalMstpSnonWnonDnon_carried_still";
			turnSpeed = 0;
			upDegree = "ManPosDragged";
			WalkF = "";
		};
		class InjuredManCarriedActionsNonStill: InjuredManCarriedActionsNon {};
		class InjuredManCarriedActionsNonWc: InjuredManCarriedActionsNon
		{
			releasedBad = "AinjPfalMstpSnonWnonDf_carried_fallwc";
		};
		class InjuredManCarriedActionsRfl: InjuredManCarriedActions
		{
			agonyStart = "AinjPpneMstpSnonWrflDnon";
			released = "AinjPfalMstpSnonWrflDnon_carried_Down";
			releasedBad = "AinjPfalMstpSnonWrflDf_carried_fall";
			upDegree = "ManPosDragged";
		};
		class InjuredManCarriedActionsRflStill: InjuredManCarriedActionsRfl
		{
			combat = "";
		};
		class InjuredManCarriedActionsRflWc: InjuredManCarriedActionsRfl
		{
			releasedBad = "AinjPfalMstpSnonWrflDf_carried_fallwc";
		};
		class InjuredManDraggedActions: InjuredManActions
		{
			Default = "AcinPknlMwlkSlowWrflDb_still";
			FastF = "";
			PlayerSlowF = "";
			PlayerWalkF = "";
			released = "AmovPpneMstpSnonWnonDnon";
			SlowF = "";
			Stop = "AcinPknlMwlkSlowWrflDb_still";
			StopRelaxed = "AcinPknlMwlkSlowWrflDb_still";
			upDegree = "ManPosDragged";
			WalkF = "";
		};
		class InjuredManDraggedActionsNon: InjuredManDraggedActions
		{
			Default = "AinjPpneMrunSnonWnonDb_still";
			grabCarried = "AinjPfalMstpSnonWnonDnon_carried_Up";
			grabDrag = "AmovPercMstpSnonWnonDnon_AcinPknlMwlkSnonWnonDb_2";
			grabDragged = "AinjPpneMrunSnonWnonDb_grab";
			released = "AinjPpneMrunSnonWnonDb_release";
			releasedBad = "AinjPpneMrunSnonWnonDb_release";
			Stop = "AinjPpneMrunSnonWnonDb_still";
			StopRelaxed = "AinjPpneMrunSnonWnonDb_still";
		};
		class InjuredManDraggedActionsRfl: InjuredManDraggedActions
		{
			agonyStart = "AinjPpneMstpSnonWrflDnon";
			agonyStop = "AmovPpneMstpSrasWrflDnon";
			released = "AinjPpneMstpSnonWrflDb_release";
			releasedBad = "AinjPpneMstpSnonWrflDb_release";
		};
		class InjuredManDraggedDeadActions: InjuredManDraggedActions
		{
			released = "Unconscious";
		};
		class LadderCivilActions: NoActions
		{
			default = "LadderCivilStatic";
			down = "LadderCivilDownLoop";
			ladderOff = "AmovPercMstpSnonWnonDnon";
			ladderOffBottom = "LadderCivilDownOff";
			ladderOffTop = "LadderCivilTopOff";
			stop = "LadderCivilStatic";
			turnSpeed = 0.1;
			up = "LadderCivilUpLoop";
		};
		class LadderRifleActions: LadderCivilActions
		{
			default = "LadderRifleStatic";
			down = "LadderRifleDownLoop";
			ladderOff = "AmovPercMstpSlowWrflDnon";
			ladderOffBottom = "LadderRifleDownOff";
			ladderOffTop = "LadderRifleTopOff";
			ladderOnDown = "LadderRifleOn";
			ladderOnUp = "LadderRifleOn";
			stop = "LadderRifleStatic";
			up = "LadderRifleUpLoop";
		};
		class LauncherKneelActions: NoActions
		{
			binocOff = "AmovPknlMstpSrasWlnrDnon";
			binocOn = "AwopPknlMstpSoptWbinDnon_lnr";
			Binoculars = "AmovPknlMstpSoptWbinDnon";
			BottomDive = "AbdvPercMstpSnonWnonDnon";
			bottomSwim = "AbswPercMrunSnonWnonDf";
			Civil = "AmovPknlMstpSnonWnonDnon";
			CivilLying = "AmovPpneMstpSnonWnonDnon";
			Combat = "AmovPercMstpSrasWlnrDnon";
			Crouch = "AmovPknlMstpSrasWlnrDnon";
			default = "AmovPknlMstpSrasWlnrDnon";
			Diary = "";
			Down = "AmovPpneMstpSnonWnonDnon";
			EvasiveLeft = "AmovPercMevaSlowWlnrDfl";
			EvasiveRight = "AmovPercMevaSlowWlnrDfr";
			FastB = "AmovPknlMrunSrasWlnrDb";
			FastF = "AmovPknlMevaSlowWlnrDf";
			FastL = "AmovPknlMrunSrasWlnrDl";
			FastLB = "AmovPknlMrunSrasWlnrDbl";
			FastLF = "AmovPknlMevaSlowWlnrDfl";
			FastR = "AmovPknlMrunSrasWlnrDr";
			FastRB = "AmovPknlMrunSrasWlnrDbr";
			FastRF = "AmovPknlMevaSlowWlnrDfr";
			Gear = "AinvPknlMstpSrasWlnrDnon";
			GestureReloadRPG7[] = {"GestureReloadRPG7Kneel", "Gesture"};
			GetInBoat = "GetInHeli_Transport_01Cargo";
			getInCar = "AmovPknlMstpSrasWrflDnon";
			getInTank = "AmovPknlMstpSrasWrflDnon";
			GetOutBoat = "AcrgPknlMstpSnonWnonDnon_AmovPercMstpSrasWrflDnon_getOutLow";
			getOutCar = "AmovPknlMstpSrasWrflDnon";
			getOutTank = "AmovPknlMstpSrasWrflDnon";
			handGunOn = "AmovPknlMstpSrasWpstDnon";
			leanLRot = 0.5;
			leanLShift = 0.01;
			leanRRot = 0.5;
			leanRShift = 0.01;
			LimpB = "AmovPknlMlmpSrasWlnrDb";
			LimpF = "AmovPknlMlmpSrasWlnrDf";
			LimpL = "AmovPknlMlmpSrasWlnrDl";
			LimpLB = "AmovPknlMlmpSrasWlnrDbl";
			LimpLF = "AmovPknlMlmpSrasWlnrDfl";
			LimpR = "AmovPknlMlmpSrasWlnrDr";
			LimpRB = "AmovPknlMlmpSrasWlnrDbr";
			LimpRF = "AmovPknlMlmpSrasWlnrDfr";
			Lying = "AmovPknlMstpSrasWrflDnon";
			medic = "AinvPknlMstpSlayWnonDnon_medic";
			medicOther = "AinvPknlMstpSlayWlnrDnon_medicOther";
			PlayerProne = "AmovPpneMstpSnonWnonDnon";
			PlayerSlowB = "AmovPknlMrunSrasWlnrDb";
			PlayerSlowF = "AmovPknlMrunSrasWlnrDf";
			PlayerSlowL = "AmovPknlMrunSrasWlnrDl";
			PlayerSlowLB = "AmovPknlMrunSrasWlnrDbl";
			PlayerSlowLF = "AmovPknlMrunSrasWlnrDfl";
			PlayerSlowR = "AmovPknlMrunSrasWlnrDr";
			PlayerSlowRB = "AmovPknlMrunSrasWlnrDbr";
			PlayerSlowRF = "AmovPknlMrunSrasWlnrDfr";
			PlayerStand = "AmovPercMstpSrasWlnrDnon";
			PlayerTactB = "AmovPknlMtacSrasWlnrDb";
			PlayerTactF = "AmovPknlMtacSrasWlnrDf";
			PlayerTactL = "AmovPknlMtacSrasWlnrDl";
			PlayerTactLB = "AmovPknlMtacSrasWlnrDbl";
			PlayerTactLF = "AmovPknlMtacSrasWlnrDfl";
			PlayerTactR = "AmovPknlMtacSrasWlnrDr";
			PlayerTactRB = "AmovPknlMtacSrasWlnrDbr";
			PlayerTactRF = "AmovPknlMtacSrasWlnrDfr";
			PlayerWalkB = "AmovPknlMwlkSrasWlnrDb";
			PlayerWalkF = "AmovPknlMwlkSrasWlnrDf";
			PlayerWalkL = "AmovPknlMwlkSrasWlnrDl";
			PlayerWalkLB = "AmovPknlMwlkSrasWlnrDbl";
			PlayerWalkLF = "AmovPknlMwlkSrasWlnrDfl";
			PlayerWalkR = "AmovPknlMwlkSrasWlnrDr";
			PlayerWalkRB = "AmovPknlMwlkSrasWlnrDbr";
			PlayerWalkRF = "AmovPknlMwlkSrasWlnrDfr";
			PrimaryWeapon = "AmovPknlMstpSrasWrflDnon";
			putDown = "AmovPknlMstpSrasWlnrDnon_AinvPknlMstpSrasWlnrDnon_Putdown";
			Relax = "AmovPknlMstpSrasWlnrDnon_relax";
			reloadMagazine[] = {"LauncherMagazineReloadStand", "gesture"};
			ReloadRPG = "ReloadRPGKneel";
			SecondaryWeapon = "AmovPknlMstpSrasWlnrDnon";
			SlowB = "AmovPknlMrunSrasWlnrDb";
			SlowF = "AmovPknlMrunSrasWlnrDf";
			SlowL = "AmovPknlMrunSrasWlnrDl";
			SlowLB = "AmovPknlMrunSrasWlnrDbl";
			SlowLF = "AmovPknlMrunSrasWlnrDfl";
			SlowR = "AmovPknlMrunSrasWlnrDr";
			SlowRB = "AmovPknlMrunSrasWlnrDbr";
			SlowRF = "AmovPknlMrunSrasWlnrDfr";
			stance = "ManStanceCrouch";
			Stand = "";
			startDive = "AdvePercMstpSnonWnonDnon";
			StartFreefall = "AfalPknlMstpSrasWlnrDnon";
			startSwim = "AswmPercMrunSnonWnonDf";
			stop = "AmovPknlMstpSrasWlnrDnon";
			SurfaceDive = "AsdvPercMstpSnonWnonDnon";
			surfaceSwim = "AsswPercMrunSnonWnonDf";
			Surrender = "AmovPercMstpSsurWnonDnon";
			TactB = "AmovPknlMtacSrasWlnrDb";
			TactF = "AmovPknlMtacSrasWlnrDf";
			TactL = "AmovPknlMtacSrasWlnrDl";
			TactLB = "AmovPknlMtacSrasWlnrDbl";
			TactLF = "AmovPknlMtacSrasWlnrDfl";
			TactR = "AmovPknlMtacSrasWlnrDr";
			TactRB = "AmovPknlMtacSrasWlnrDbr";
			TactRF = "AmovPknlMtacSrasWlnrDfr";
			throwGrenade[] = {"GestureThrowGrenadeLauncher", "Gesture"};
			treated = "AinvPknlMstpSnonWnonDnon_healed_2";
			turnL = "AmovPknlMstpSrasWlnrDnon_turnL";
			turnLRelaxed = "AmovPknlMstpSrasWlnrDnon_turnL";
			turnR = "AmovPknlMstpSrasWlnrDnon_turnR";
			turnRRelaxed = "AmovPknlMstpSrasWlnrDnon_turnR";
			turnSpeed = 4.5;
			Up = "AmovPercMstpSrasWlnrDnon";
			upDegree = "ManPosWeapon";
			WalkB = "AmovPknlMwlkSrasWlnrDb";
			WalkF = "AmovPknlMwlkSrasWlnrDf";
			WalkL = "AmovPknlMwlkSrasWlnrDl";
			WalkLB = "AmovPknlMwlkSrasWlnrDbl";
			WalkLF = "AmovPknlMwlkSrasWlnrDfl";
			WalkR = "AmovPknlMwlkSrasWlnrDr";
			WalkRB = "AmovPknlMwlkSrasWlnrDbr";
			WalkRF = "AmovPknlMwlkSrasWlnrDfr";
			weaponOff = "AmovPknlMstpSrasWrflDnon";
			weaponOn = "AmovPknlMstpSrasWlnrDnon";
		};
		class LauncherKneelActions_inv: LauncherKneelActions
		{
			Civil = "AinvPknlMstpSnonWnonDnon";
			Default = "AinvPknlMstpSrasWlnrDnon";
			HandGunOn = "AinvPknlMstpSrasWpstDnon";
			Stop = "AinvPknlMstpSrasWlnrDnon";
			StopRelaxed = "AinvPknlMstpSrasWlnrDnon";
		};
		class LauncherKneelActionsLimpB: LauncherKneelActions
		{
			Stand = "";
			Up = "AmovPercMlmpSrasWlnrDb";
		};
		class LauncherKneelActionsLimpF: LauncherKneelActions
		{
			Stand = "";
			Up = "AmovPercMlmpSrasWlnrDf";
		};
		class LauncherKneelActionsLimpL: LauncherKneelActions
		{
			Stand = "";
			Up = "AmovPercMlmpSrasWlnrDl";
		};
		class LauncherKneelActionsLimpLB: LauncherKneelActions
		{
			Stand = "";
			Up = "AmovPercMlmpSrasWlnrDbl";
		};
		class LauncherKneelActionsLimpLF: LauncherKneelActions
		{
			Stand = "";
			Up = "AmovPercMlmpSrasWlnrDfl";
		};
		class LauncherKneelActionsLimpR: LauncherKneelActions
		{
			Stand = "";
			Up = "AmovPercMlmpSrasWlnrDr";
		};
		class LauncherKneelActionsLimpRB: LauncherKneelActions
		{
			Stand = "";
			Up = "AmovPercMlmpSrasWlnrDbr";
		};
		class LauncherKneelActionsLimpRF: LauncherKneelActions
		{
			Stand = "";
			Up = "AmovPercMlmpSrasWlnrDfr";
		};
		class LauncherKneelActionsRunB: LauncherKneelActionsRunF
		{
			PlayerStand = "AmovPercMrunSrasWlnrDb";
			Stand = "AmovPercMrunSrasWlnrDb";
			Up = "AmovPercMrunSrasWlnrDb";
		};
		class LauncherKneelActionsRunBL: LauncherKneelActionsRunF
		{
			PlayerStand = "AmovPercMrunSrasWlnrDbl";
			Stand = "AmovPercMrunSrasWlnrDbl";
			Up = "AmovPercMrunSrasWlnrDbl";
		};
		class LauncherKneelActionsRunBR: LauncherKneelActionsRunF
		{
			PlayerStand = "AmovPercMrunSrasWlnrDbr";
			Stand = "AmovPercMrunSrasWlnrDbr";
			Up = "AmovPercMrunSrasWlnrDbr";
		};
		class LauncherKneelActionsRunF: LauncherKneelActions
		{
			PlayerStand = "AmovPercMrunSrasWlnrDf";
			Stand = "AmovPercMrunSrasWlnrDf";
			Up = "AmovPercMrunSrasWlnrDf";
		};
		class LauncherKneelActionsRunFL: LauncherKneelActionsRunF
		{
			PlayerStand = "AmovPercMrunSrasWlnrDfl";
			Stand = "AmovPercMrunSrasWlnrDfl";
			Up = "AmovPercMrunSrasWlnrDfl";
		};
		class LauncherKneelActionsRunFR: LauncherKneelActionsRunF
		{
			PlayerStand = "AmovPercMrunSrasWlnrDfr";
			Stand = "AmovPercMrunSrasWlnrDfr";
			Up = "AmovPercMrunSrasWlnrDfr";
		};
		class LauncherKneelActionsRunL: LauncherKneelActionsRunF
		{
			PlayerStand = "AmovPercMrunSrasWlnrDl";
			Stand = "AmovPercMrunSrasWlnrDl";
			Up = "AmovPercMrunSrasWlnrDl";
		};
		class LauncherKneelActionsRunR: LauncherKneelActionsRunF
		{
			PlayerStand = "AmovPercMrunSrasWlnrDr";
			Stand = "AmovPercMrunSrasWlnrDr";
			Up = "AmovPercMrunSrasWlnrDr";
		};
		class LauncherKneelActionsTacB: LauncherKneelActionsTacF
		{
			PlayerStand = "AmovPercMtacSrasWlnrDb";
			Stand = "AmovPercMtacSrasWlnrDb";
			Up = "AmovPercMtacSrasWlnrDb";
		};
		class LauncherKneelActionsTacBL: LauncherKneelActionsTacF
		{
			PlayerStand = "AmovPercMtacSrasWlnrDbl";
			Stand = "AmovPercMtacSrasWlnrDbl";
			Up = "AmovPercMtacSrasWlnrDbl";
		};
		class LauncherKneelActionsTacBR: LauncherKneelActionsTacF
		{
			PlayerStand = "AmovPercMtacSrasWlnrDbr";
			Stand = "AmovPercMtacSrasWlnrDbr";
			Up = "AmovPercMtacSrasWlnrDbr";
		};
		class LauncherKneelActionsTacF: LauncherKneelActions
		{
			PlayerStand = "AmovPercMtacSrasWlnrDf";
			Stand = "AmovPercMtacSrasWlnrDf";
			Up = "AmovPercMtacSrasWlnrDf";
		};
		class LauncherKneelActionsTacFL: LauncherKneelActionsTacF
		{
			PlayerStand = "AmovPercMtacSrasWlnrDfl";
			Stand = "AmovPercMtacSrasWlnrDfl";
			Up = "AmovPercMtacSrasWlnrDfl";
		};
		class LauncherKneelActionsTacFR: LauncherKneelActionsTacF
		{
			PlayerStand = "AmovPercMtacSrasWlnrDfr";
			Stand = "AmovPercMtacSrasWlnrDfr";
			Up = "AmovPercMtacSrasWlnrDfr";
		};
		class LauncherKneelActionsTacL: LauncherKneelActionsTacF
		{
			PlayerStand = "AmovPercMtacSrasWlnrDl";
			Stand = "AmovPercMtacSrasWlnrDl";
			Up = "AmovPercMtacSrasWlnrDl";
		};
		class LauncherKneelActionsTacR: LauncherKneelActionsTacF
		{
			PlayerStand = "AmovPercMtacSrasWlnrDr";
			Stand = "AmovPercMtacSrasWlnrDr";
			Up = "AmovPercMtacSrasWlnrDr";
		};
		class LauncherKneelActionsWlkB: LauncherKneelActionsWlkF
		{
			PlayerStand = "AmovPercMwlkSrasWlnrDb";
			Stand = "AmovPercMwlkSrasWlnrDb";
			Up = "AmovPercMwlkSrasWlnrDb";
		};
		class LauncherKneelActionsWlkBL: LauncherKneelActionsWlkF
		{
			PlayerStand = "AmovPercMwlkSrasWlnrDbl";
			Stand = "AmovPercMwlkSrasWlnrDbl";
			Up = "AmovPercMwlkSrasWlnrDbl";
		};
		class LauncherKneelActionsWlkBR: LauncherKneelActionsWlkF
		{
			PlayerStand = "AmovPercMwlkSrasWlnrDbr";
			Stand = "AmovPercMwlkSrasWlnrDbr";
			Up = "AmovPercMwlkSrasWlnrDbr";
		};
		class LauncherKneelActionsWlkF: LauncherKneelActions
		{
			PlayerStand = "AmovPercMwlkSrasWlnrDf";
			Stand = "AmovPercMwlkSrasWlnrDf";
			Up = "AmovPercMwlkSrasWlnrDf";
		};
		class LauncherKneelActionsWlkFL: LauncherKneelActionsWlkF
		{
			PlayerStand = "AmovPercMwlkSrasWlnrDfl";
			Stand = "AmovPercMwlkSrasWlnrDfl";
			Up = "AmovPercMwlkSrasWlnrDfl";
		};
		class LauncherKneelActionsWlkFR: LauncherKneelActionsWlkF
		{
			PlayerStand = "AmovPercMwlkSrasWlnrDfr";
			Stand = "AmovPercMwlkSrasWlnrDfr";
			Up = "AmovPercMwlkSrasWlnrDfr";
		};
		class LauncherKneelActionsWlkL: LauncherKneelActionsWlkF
		{
			PlayerStand = "AmovPercMwlkSrasWlnrDl";
			Stand = "AmovPercMwlkSrasWlnrDl";
			Up = "AmovPercMwlkSrasWlnrDl";
		};
		class LauncherKneelActionsWlkR: LauncherKneelActionsWlkF
		{
			PlayerStand = "AmovPercMwlkSrasWlnrDr";
			Stand = "AmovPercMwlkSrasWlnrDr";
			Up = "AmovPercMwlkSrasWlnrDr";
		};
		class LauncherKneelEvasiveFActions: LauncherStandRunFActions
		{
			PlayerSlowF = "AmovPercMevaSlowWlnrDf";
			PlayerSlowLF = "AmovPercMevaSlowWlnrDfl";
			PlayerSlowRF = "AmovPercMevaSlowWlnrDfr";
			PlayerWalkF = "AmovPercMevaSlowWlnrDf";
			PlayerWalkLF = "AmovPercMevaSlowWlnrDfl";
			PlayerWalkRF = "AmovPercMevaSlowWlnrDfr";
			SlowF = "AmovPercMevaSlowWlnrDf";
			SlowLF = "AmovPercMevaSlowWlnrDfl";
			SlowRF = "AmovPercMevaSlowWlnrDfr";
			stance = "ManStanceCrouch";
			turnSpeed = 4;
			WalkF = "AmovPercMevaSlowWlnrDf";
			WalkLF = "AmovPercMevaSlowWlnrDfl";
			WalkRF = "AmovPercMevaSlowWlnrDfr";
		};
		class LauncherKneelRunBActions: LauncherKneelRunFActions {};
		class LauncherKneelRunFActions: LauncherKneelActions {};
		class LauncherProneActions: LauncherKneelActions
		{
			BinocOff = "AmovPercMstpSrasWlnrDnon";
			BinocOn = "AwopPercMstpSoptWbinDnon_lnr";
			Combat = "AmovPpneMstpSrasWlnrDnon";
			Default = "AmovPpneMstpSrasWlnrDnon";
			EvasiveLeft = "";
			EvasiveRight = "";
			FastB = "AmovPpneMrunSrasWlnrDb";
			FastF = "AmovPpneMrunSrasWlnrDf";
			FastL = "AmovPpneMrunSrasWlnrDl";
			FastLB = "AmovPpneMrunSrasWlnrDbl";
			FastLF = "AmovPpneMrunSrasWlnrDfl";
			FastR = "AmovPpneMrunSrasWlnrDr";
			FastRB = "AmovPpneMrunSrasWlnrDr";
			FastRF = "AmovPpneMrunSrasWlnrDfr";
			HandGunOn = "AmovPpneMstpSrasWpstDnon";
			PlayerSlowB = "AmovPpneMrunSrasWlnrDb";
			PlayerSlowF = "AmovPpneMrunSrasWlnrDf";
			PlayerSlowL = "AmovPpneMrunSrasWlnrDl";
			PlayerSlowLB = "AmovPpneMrunSrasWlnrDbl";
			PlayerSlowLF = "AmovPpneMrunSrasWlnrDfl";
			PlayerSlowR = "AmovPpneMrunSrasWlnrDr";
			PlayerSlowRB = "AmovPpneMrunSrasWlnrDbr";
			PlayerSlowRF = "AmovPpneMrunSrasWlnrDfr";
			PlayerTactB = "AmovPpneMrunSrasWlnrDb";
			PlayerTactF = "AmovPpneMrunSrasWlnrDf";
			PlayerTactL = "AmovPpneMrunSrasWlnrDl";
			PlayerTactLB = "AmovPpneMrunSrasWlnrDbl";
			PlayerTactLF = "AmovPpneMrunSrasWlnrDfl";
			PlayerTactR = "AmovPpneMrunSrasWlnrDr";
			PlayerTactRB = "AmovPpneMrunSrasWlnrDbr";
			PlayerTactRF = "AmovPpneMrunSrasWlnrDfr";
			PlayerWalkB = "AmovPpneMrunSrasWlnrDb";
			PlayerWalkF = "AmovPpneMrunSrasWlnrDf";
			PlayerWalkL = "AmovPpneMrunSrasWlnrDl";
			PlayerWalkLB = "AmovPpneMrunSrasWlnrDbl";
			PlayerWalkLF = "AmovPpneMrunSrasWlnrDfl";
			PlayerWalkR = "AmovPpneMrunSrasWlnrDr";
			PlayerWalkRB = "AmovPpneMrunSrasWlnrDbr";
			PlayerWalkRF = "AmovPpneMrunSrasWlnrDfr";
			SlowB = "AmovPpneMrunSrasWlnrDb";
			SlowF = "AmovPpneMrunSrasWlnrDf";
			SlowL = "AmovPpneMrunSrasWlnrDl";
			SlowLB = "AmovPpneMrunSrasWlnrDbl";
			SlowLF = "AmovPpneMrunSrasWlnrDfl";
			SlowR = "AmovPpneMrunSrasWlnrDr";
			SlowRB = "AmovPpneMrunSrasWlnrDbr";
			SlowRF = "AmovPpneMrunSrasWlnrDfr";
			stance = "ManStanceProne";
			Stand = "AmovPercMstpSrasWrflDnon";
			Stop = "AmovPpneMstpSrasWlnrDnon";
			StopRelaxed = "AmovPpneMstpSrasWlnrDnon";
			TactB = "AmovPpneMrunSrasWlnrDb";
			TactF = "AmovPpneMrunSrasWlnrDf";
			TactL = "AmovPpneMrunSrasWlnrDl";
			TactLB = "AmovPpneMrunSrasWlnrDbl";
			TactLF = "AmovPpneMrunSrasWlnrDfl";
			TactR = "AmovPpneMrunSrasWlnrDr";
			TactRB = "AmovPpneMrunSrasWlnrDbr";
			TactRF = "AmovPpneMrunSrasWlnrDfr";
			TurnL = "AmovPercMstpSrasWlnrDnon_turnL";
			TurnLRelaxed = "AmovPercMstpSrasWlnrDnon_turnL";
			TurnR = "AmovPercMstpSrasWlnrDnon_turnR";
			TurnRRelaxed = "AmovPercMstpSrasWlnrDnon_turnR";
			Up = "AmovPknlMstpSrasWlnrDnon";
			WalkB = "AmovPpneMrunSrasWlnrDb";
			WalkF = "AmovPpneMrunSrasWlnrDf";
			WalkL = "AmovPpneMrunSrasWlnrDl";
			WalkLB = "AmovPpneMrunSrasWlnrDbl";
			WalkLF = "AmovPpneMrunSrasWlnrDfl";
			WalkR = "AmovPpneMrunSrasWlnrDr";
			WalkRB = "AmovPpneMrunSrasWlnrDbr";
			WalkRF = "AmovPpneMrunSrasWlnrDfr";
			WeaponOff = "AmovPpneMstpSrasWrflDnon";
			WeaponOn = "AmovPpneMstpSrasWlnrDnon";
		};
		class LauncherStandActions: LauncherKneelActions
		{
			BinocOff = "AmovPercMstpSrasWlnrDnon";
			BinocOn = "AwopPercMstpSoptWbinDnon_lnr";
			Binoculars = "AmovPercMstpSoptWbinDnon";
			Civil = "AmovPercMstpSnonWnonDnon";
			Default = "AmovPercMstpSrasWlnrDnon";
			Down = "AmovPpneMstpSnonWnonDnon";
			EvasiveLeft = "AmovPercMrunSrasWlnrDfl";
			EvasiveRight = "AmovPercMrunSrasWlnrDfr";
			FastB = "AmovPercMrunSrasWlnrDb";
			FastF = "AmovPercMevaSlowWlnrDf";
			FastL = "AmovPercMrunSrasWlnrDl";
			FastLB = "AmovPercMrunSrasWlnrDbl";
			FastLF = "AmovPercMevaSlowWlnrDfl";
			FastR = "AmovPercMrunSrasWlnrDr";
			FastRB = "AmovPercMrunSrasWlnrDr";
			FastRF = "AmovPercMevaSlowWlnrDfr";
			Gear = "AinvPercMstpSrasWlnrDnon";
			GestureReloadRPG7[] = {"GestureReloadRPG7", "Gesture"};
			GetOver = "AovrPercMstpSrasWlnrDf";
			HandGunOn = "AmovPercMstpSrasWpstDnon";
			LimpB = "AmovPercMlmpSrasWlnrDb";
			LimpF = "AmovPercMlmpSrasWlnrDf";
			LimpL = "AmovPercMlmpSrasWlnrDl";
			LimpLB = "AmovPercMlmpSrasWlnrDbl";
			LimpLF = "AmovPercMlmpSrasWlnrDfl";
			LimpR = "AmovPercMlmpSrasWlnrDr";
			LimpRB = "AmovPercMlmpSrasWlnrDbr";
			LimpRF = "AmovPercMlmpSrasWlnrDfr";
			PlayerCrouch = "AmovPknlMstpSrasWlnrDnon";
			PlayerProne = "AmovPpneMstpSnonWnonDnon";
			PlayerSlowB = "AmovPercMrunSrasWlnrDb";
			PlayerSlowF = "AmovPercMrunSrasWlnrDf";
			PlayerSlowL = "AmovPercMrunSrasWlnrDl";
			PlayerSlowLB = "AmovPercMrunSrasWlnrDbl";
			PlayerSlowLF = "AmovPercMrunSrasWlnrDfl";
			PlayerSlowR = "AmovPercMrunSrasWlnrDr";
			PlayerSlowRB = "AmovPercMrunSrasWlnrDbr";
			PlayerSlowRF = "AmovPercMrunSrasWlnrDfr";
			PlayerStand = "";
			PlayerTactB = "AmovPercMtacSrasWlnrDb";
			PlayerTactF = "AmovPercMtacSrasWlnrDf";
			PlayerTactL = "AmovPercMtacSrasWlnrDl";
			PlayerTactLB = "AmovPercMtacSrasWlnrDbl";
			PlayerTactLF = "AmovPercMtacSrasWlnrDfl";
			PlayerTactR = "AmovPercMtacSrasWlnrDr";
			PlayerTactRB = "AmovPercMtacSrasWlnrDbr";
			PlayerTactRF = "AmovPercMtacSrasWlnrDfr";
			PlayerWalkB = "AmovPercMwlkSrasWlnrDb";
			PlayerWalkF = "AmovPercMwlkSrasWlnrDf";
			PlayerWalkL = "AmovPercMwlkSrasWlnrDl";
			PlayerWalkLB = "AmovPercMwlkSrasWlnrDbl";
			PlayerWalkLF = "AmovPercMwlkSrasWlnrDfl";
			PlayerWalkR = "AmovPercMwlkSrasWlnrDr";
			PlayerWalkRB = "AmovPercMwlkSrasWlnrDbr";
			PlayerWalkRF = "AmovPercMwlkSrasWlnrDfr";
			PrimaryWeapon = "AmovPercMstpSrasWrflDnon";
			putDown = "AmovPercMstpSrasWlnrDnon_AinvPercMstpSrasWlnrDnon_Putdown";
			ReloadRPG = "ReloadRPG";
			SecondaryWeapon = "AmovPercMstpSrasWlnrDnon";
			SlowB = "AmovPercMrunSrasWlnrDb";
			SlowF = "AmovPercMrunSrasWlnrDf";
			SlowL = "AmovPercMrunSrasWlnrDl";
			SlowLB = "AmovPercMrunSrasWlnrDbl";
			SlowLF = "AmovPercMrunSrasWlnrDfl";
			SlowR = "AmovPercMrunSrasWlnrDr";
			SlowRB = "AmovPercMrunSrasWlnrDbr";
			SlowRF = "AmovPercMrunSrasWlnrDfr";
			stance = "ManStanceStand";
			Stand = "";
			StartFreefall = "AfalPercMstpSrasWlnrDnon";
			Stop = "AmovPercMstpSrasWlnrDnon";
			StopRelaxed = "AidlPercMstpSrasWlnrDnon_AI";
			TactB = "AmovPercMtacSrasWlnrDb";
			TactF = "AmovPercMtacSrasWlnrDf";
			TactL = "AmovPercMtacSrasWlnrDl";
			TactLB = "AmovPercMtacSrasWlnrDbl";
			TactLF = "AmovPercMtacSrasWlnrDfl";
			TactR = "AmovPercMtacSrasWlnrDr";
			TactRB = "AmovPercMtacSrasWlnrDbr";
			TactRF = "AmovPercMtacSrasWlnrDfr";
			TurnL = "AmovPercMstpSrasWlnrDnon_turnL";
			TurnLRelaxed = "AmovPercMstpSrasWlnrDnon_turnL";
			TurnR = "AmovPercMstpSrasWlnrDnon_turnR";
			TurnRRelaxed = "AmovPercMstpSrasWlnrDnon_turnR";
			Up = "AmovPknlMstpSrasWlnrDnon";
			WalkB = "AmovPercMwlkSrasWlnrDb";
			WalkF = "AmovPercMwlkSrasWlnrDf";
			WalkL = "AmovPercMwlkSrasWlnrDl";
			WalkLB = "AmovPercMwlkSrasWlnrDbl";
			WalkLF = "AmovPercMwlkSrasWlnrDfl";
			WalkR = "AmovPercMwlkSrasWlnrDr";
			WalkRB = "AmovPercMwlkSrasWlnrDbr";
			WalkRF = "AmovPercMwlkSrasWlnrDfr";
			WeaponOff = "AmovPercMstpSrasWrflDnon";
			WeaponOn = "AmovPercMstpSrasWlnrDnon";
		};
		class LauncherStandActions_inv: LauncherStandActions
		{
			Civil = "AinvPercMstpSnonWnonDnon";
			Default = "AinvPercMstpSrasWlnrDnon";
			HandGunOn = "AinvPercMstpSrasWpstDnon";
			PlayerStand = "AmovPercMstpSrasWlnrDnon";
			Stop = "AinvPercMstpSrasWlnrDnon";
			StopRelaxed = "AinvPercMstpSrasWlnrDnon";
		};
		class LauncherStandActionsLimpB: LauncherStandActions
		{
			Stand = "";
			Up = "AmovPknlMlmpSrasWlnrDb";
		};
		class LauncherStandActionsLimpF: LauncherStandActions
		{
			Stand = "";
			Up = "AmovPknlMlmpSrasWlnrDf";
		};
		class LauncherStandActionsLimpL: LauncherStandActions
		{
			Stand = "";
			Up = "AmovPknlMlmpSrasWlnrDl";
		};
		class LauncherStandActionsLimpLB: LauncherStandActions
		{
			Stand = "";
			Up = "AmovPknlMlmpSrasWlnrDbl";
		};
		class LauncherStandActionsLimpLF: LauncherStandActions
		{
			Stand = "";
			Up = "AmovPknlMlmpSrasWlnrDfl";
		};
		class LauncherStandActionsLimpR: LauncherStandActions
		{
			Stand = "";
			Up = "AmovPknlMlmpSrasWlnrDr";
		};
		class LauncherStandActionsLimpRB: LauncherStandActions
		{
			Stand = "";
			Up = "AmovPknlMlmpSrasWlnrDbr";
		};
		class LauncherStandActionsLimpRF: LauncherStandActions
		{
			Stand = "";
			Up = "AmovPknlMlmpSrasWlnrDfr";
		};
		class LauncherStandActionsRunB: LauncherStandActionsRunF
		{
			Crouch = "AmovPknlMrunSrasWlnrDb";
			PlayerCrouch = "AmovPknlMrunSrasWlnrDb";
			Up = "AmovPknlMrunSrasWlnrDb";
		};
		class LauncherStandActionsRunBL: LauncherStandActionsRunF
		{
			Crouch = "AmovPknlMrunSrasWlnrDbl";
			PlayerCrouch = "AmovPknlMrunSrasWlnrDbl";
			Up = "AmovPknlMrunSrasWlnrDbl";
		};
		class LauncherStandActionsRunBR: LauncherStandActionsRunF
		{
			Crouch = "AmovPknlMrunSrasWlnrDbr";
			PlayerCrouch = "AmovPknlMrunSrasWlnrDbr";
			Up = "AmovPknlMrunSrasWlnrDbr";
		};
		class LauncherStandActionsRunF: LauncherStandActions
		{
			Crouch = "AmovPknlMrunSrasWlnrDf";
			PlayerCrouch = "AmovPknlMrunSrasWlnrDf";
			Up = "AmovPknlMrunSrasWlnrDf";
		};
		class LauncherStandActionsRunFL: LauncherStandActionsRunF
		{
			Crouch = "AmovPknlMrunSrasWlnrDfl";
			PlayerCrouch = "AmovPknlMrunSrasWlnrDfl";
			Up = "AmovPknlMrunSrasWlnrDfl";
		};
		class LauncherStandActionsRunFR: LauncherStandActionsRunF
		{
			Crouch = "AmovPknlMrunSrasWlnrDfr";
			PlayerCrouch = "AmovPknlMrunSrasWlnrDfr";
			Up = "AmovPknlMrunSrasWlnrDfr";
		};
		class LauncherStandActionsRunL: LauncherStandActionsRunF
		{
			Crouch = "AmovPknlMrunSrasWlnrDl";
			PlayerCrouch = "AmovPknlMrunSrasWlnrDl";
			Up = "AmovPknlMrunSrasWlnrDl";
		};
		class LauncherStandActionsRunR: LauncherStandActionsRunF
		{
			Crouch = "AmovPknlMrunSrasWlnrDr";
			PlayerCrouch = "AmovPknlMrunSrasWlnrDr";
			Up = "AmovPknlMrunSrasWlnrDr";
		};
		class LauncherStandActionsTacB: LauncherStandActionsTacF
		{
			Crouch = "AmovPknlMTacSrasWlnrDb";
			PlayerCrouch = "AmovPknlMTacSrasWlnrDb";
			Up = "AmovPknlMTacSrasWlnrDb";
		};
		class LauncherStandActionsTacBL: LauncherStandActionsTacF
		{
			Crouch = "AmovPknlMTacSrasWlnrDbl";
			PlayerCrouch = "AmovPknlMTacSrasWlnrDbl";
			Up = "AmovPknlMTacSrasWlnrDbl";
		};
		class LauncherStandActionsTacBR: LauncherStandActionsTacF
		{
			Crouch = "AmovPknlMTacSrasWlnrDbr";
			PlayerCrouch = "AmovPknlMTacSrasWlnrDbr";
			Up = "AmovPknlMTacSrasWlnrDbr";
		};
		class LauncherStandActionsTacF: LauncherStandActions
		{
			Crouch = "AmovPknlMTacSrasWlnrDf";
			PlayerCrouch = "AmovPknlMTacSrasWlnrDf";
			Up = "AmovPknlMTacSrasWlnrDf";
		};
		class LauncherStandActionsTacFL: LauncherStandActionsTacF
		{
			Crouch = "AmovPknlMTacSrasWlnrDfl";
			PlayerCrouch = "AmovPknlMTacSrasWlnrDfl";
			Up = "AmovPknlMTacSrasWlnrDfl";
		};
		class LauncherStandActionsTacFR: LauncherStandActionsTacF
		{
			Crouch = "AmovPknlMTacSrasWlnrDfr";
			PlayerCrouch = "AmovPknlMTacSrasWlnrDfr";
			Up = "AmovPknlMTacSrasWlnrDfr";
		};
		class LauncherStandActionsTacL: LauncherStandActionsTacF
		{
			Crouch = "AmovPknlMTacSrasWlnrDl";
			PlayerCrouch = "AmovPknlMTacSrasWlnrDl";
			Up = "AmovPknlMTacSrasWlnrDl";
		};
		class LauncherStandActionsTacR: LauncherStandActionsTacF
		{
			Crouch = "AmovPknlMTacSrasWlnrDr";
			PlayerCrouch = "AmovPknlMTacSrasWlnrDr";
			Up = "AmovPknlMTacSrasWlnrDr";
		};
		class LauncherStandActionsWlkB: LauncherStandActionsWlkF
		{
			Crouch = "AmovPknlMwlkSrasWlnrDb";
			PlayerCrouch = "AmovPknlMwlkSrasWlnrDb";
			Up = "AmovPknlMwlkSrasWlnrDb";
		};
		class LauncherStandActionsWlkBL: LauncherStandActionsWlkF
		{
			Crouch = "AmovPknlMwlkSrasWlnrDbl";
			PlayerCrouch = "AmovPknlMwlkSrasWlnrDbl";
			Up = "AmovPknlMwlkSrasWlnrDbl";
		};
		class LauncherStandActionsWlkBR: LauncherStandActionsWlkF
		{
			Crouch = "AmovPknlMwlkSrasWlnrDbr";
			PlayerCrouch = "AmovPknlMwlkSrasWlnrDbr";
			Up = "AmovPknlMwlkSrasWlnrDbr";
		};
		class LauncherStandActionsWlkF: LauncherStandActions
		{
			Crouch = "AmovPknlMwlkSrasWlnrDf";
			PlayerCrouch = "AmovPknlMwlkSrasWlnrDf";
			Up = "AmovPknlMwlkSrasWlnrDf";
		};
		class LauncherStandActionsWlkFL: LauncherStandActionsWlkF
		{
			Crouch = "AmovPknlMwlkSrasWlnrDfl";
			PlayerCrouch = "AmovPknlMwlkSrasWlnrDfl";
			Up = "AmovPknlMwlkSrasWlnrDfl";
		};
		class LauncherStandActionsWlkFR: LauncherStandActionsWlkF
		{
			Crouch = "AmovPknlMwlkSrasWlnrDfr";
			PlayerCrouch = "AmovPknlMwlkSrasWlnrDfr";
			Up = "AmovPknlMwlkSrasWlnrDfr";
		};
		class LauncherStandActionsWlkL: LauncherStandActionsWlkF
		{
			Crouch = "AmovPknlMwlkSrasWlnrDl";
			PlayerCrouch = "AmovPknlMwlkSrasWlnrDl";
			Up = "AmovPknlMwlkSrasWlnrDl";
		};
		class LauncherStandActionsWlkR: LauncherStandActionsWlkF
		{
			Crouch = "AmovPknlMwlkSrasWlnrDr";
			PlayerCrouch = "AmovPknlMwlkSrasWlnrDr";
			Up = "AmovPknlMwlkSrasWlnrDr";
		};
		class LauncherStandLowStpActions: LauncherStandActions
		{
			EvasiveLeft = "AmovPercMwlkSlowWlnrDfl";
			EvasiveRight = "AmovPercMwlkSlowWlnrDfr";
			FastB = "AmovPercMwlkSlowWlnrDb";
			FastF = "AmovPercMrunSlowWlnrDf";
			FastL = "AmovPercMwlkSlowWlnrDl";
			FastLB = "AmovPercMwlkSlowWlnrDbl";
			FastLF = "AmovPercMrunSlowWlnrDfl";
			FastR = "AmovPercMwlkSlowWlnrDr";
			FastRB = "AmovPercMwlkSlowWlnrDbr";
			FastRF = "AmovPercMrunSlowWlnrDfr";
			FireNotPossible = "AmovPercMstpSrasWlnrDnon";
			GetOver = "AovrPercMstpSlowWlnrDf";
			PlayerSlowB = "AmovPercMwlkSlowWlnrDb";
			PlayerSlowF = "AmovPercMwlkSlowWlnrDf";
			PlayerSlowL = "AmovPercMwlkSlowWlnrDl";
			PlayerSlowLB = "AmovPercMwlkSlowWlnrDbl";
			PlayerSlowLF = "AmovPercMwlkSlowWlnrDfl";
			PlayerSlowR = "AmovPercMwlkSlowWlnrDr";
			PlayerSlowRB = "AmovPercMwlkSlowWlnrDbr";
			PlayerSlowRF = "AmovPercMwlkSlowWlnrDfr";
			PlayerStand = "AmovPercMstpSrasWlnrDnon";
			PlayerTactB = "AmovPercMwlkSlowWlnrDb";
			PlayerTactF = "AmovPercMwlkSlowWlnrDf";
			PlayerTactL = "AmovPercMwlkSlowWlnrDl";
			PlayerTactLB = "AmovPercMwlkSlowWlnrDbl";
			PlayerTactLF = "AmovPercMwlkSlowWlnrDfl";
			PlayerTactR = "AmovPercMwlkSlowWlnrDr";
			PlayerTactRB = "AmovPercMwlkSlowWlnrDbr";
			PlayerTactRF = "AmovPercMwlkSlowWlnrDfr";
			PlayerWalkB = "AmovPercMwlkSlowWlnrDb";
			PlayerWalkF = "AmovPercMwlkSlowWlnrDf";
			PlayerWalkL = "AmovPercMwlkSlowWlnrDl";
			PlayerWalkLB = "AmovPercMwlkSlowWlnrDbl";
			PlayerWalkLF = "AmovPercMwlkSlowWlnrDfl";
			PlayerWalkR = "AmovPercMwlkSlowWlnrDr";
			PlayerWalkRB = "AmovPercMwlkSlowWlnrDbr";
			PlayerWalkRF = "AmovPercMwlkSlowWlnrDfr";
			SlowB = "AmovPercMwlkSlowWlnrDb";
			SlowF = "AmovPercMwlkSlowWlnrDf";
			SlowL = "AmovPercMwlkSlowWlnrDl";
			SlowLB = "AmovPercMwlkSlowWlnrDbl";
			SlowLF = "AmovPercMwlkSlowWlnrDfl";
			SlowR = "AmovPercMwlkSlowWlnrDr";
			SlowRB = "AmovPercMwlkSlowWlnrDbr";
			SlowRF = "AmovPercMwlkSlowWlnrDfr";
			Stop = "AmovPercMstpSlowWlnrDnon";
			TactB = "AmovPercMwlkSlowWlnrDb";
			TactF = "AmovPercMwlkSlowWlnrDf";
			TactL = "AmovPercMwlkSlowWlnrDl";
			TactLB = "AmovPercMwlkSlowWlnrDbl";
			TactLF = "AmovPercMwlkSlowWlnrDfl";
			TactR = "AmovPercMwlkSlowWlnrDr";
			TactRB = "AmovPercMwlkSlowWlnrDbr";
			TactRF = "AmovPercMwlkSlowWlnrDfr";
			TurnL = "AmovPercMstpSlowWlnrDnon_turnL";
			TurnLRelaxed = "AmovPercMstpSlowWlnrDnon_turnL";
			TurnR = "AmovPercMstpSlowWlnrDnon_turnR";
			TurnRRelaxed = "AmovPercMstpSlowWlnrDnon_turnR";
			WalkB = "AmovPercMwlkSlowWlnrDb";
			WalkF = "AmovPercMwlkSlowWlnrDf";
			WalkL = "AmovPercMwlkSlowWlnrDl";
			WalkLB = "AmovPercMwlkSlowWlnrDbl";
			WalkLF = "AmovPercMwlkSlowWlnrDfl";
			WalkR = "AmovPercMwlkSlowWlnrDr";
			WalkRB = "AmovPercMwlkSlowWlnrDbr";
			WalkRF = "AmovPercMwlkSlowWlnrDfr";
		};
		class LauncherStandRunBActions: LauncherStandActions {};
		class LauncherStandRunFActions: LauncherStandActions {};
		class MortarActions: CivilStandActions
		{
			Gear = "";
		};
		class MoveWithInjuredMan: NoActions
		{
			BottomDive = "AbdvPercMstpSnonWnonDnon";
			bottomSwim = "AbswPercMrunSnonWnonDf";
			default = "AcinPknlMstpSrasWrflDnon";
			grabCarry = "AcinPknlMstpSrasWrflDnon_AcinPercMrunSrasWrflDnon";
			PlayerSlowB = "AcinPknlMwlkSrasWrflDb";
			PlayerSlowLB = "AcinPknlMwlkSrasWrflDb";
			PlayerSlowRB = "AcinPknlMwlkSrasWrflDb";
			PlayerWalkB = "AcinPknlMwlkSrasWrflDb";
			PlayerWalkLB = "AcinPknlMwlkSrasWrflDb";
			PlayerWalkRB = "AcinPknlMwlkSrasWrflDb";
			SlowB = "AcinPknlMwlkSrasWrflDb";
			SlowLB = "AcinPknlMwlkSrasWrflDb";
			SlowRB = "AcinPknlMwlkSrasWrflDb";
			stance = "ManStanceCrouch";
			startDive = "AdvePercMstpSnonWnonDnon";
			startSwim = "AswmPercMrunSnonWnonDf";
			stop = "Helper_SwitchToCarryRfl";
			SurfaceDive = "AsdvPercMstpSnonWnonDnon";
			surfaceSwim = "AsswPercMrunSnonWnonDf";
			turnSpeed = 2;
			upDegree = "ManPosStand";
			WalkB = "AcinPknlMwlkSrasWrflDb";
			WalkLB = "AcinPknlMwlkSrasWrflDb";
			WalkRB = "AcinPknlMwlkSrasWrflDb";
		};
		class MoveWithInjuredMan_2Death2: MoveWithInjuredMan {};
		class MoveWithInjuredMan_helperNon: MoveWithInjuredMan_helperRfl
		{
			Civil = "AcinPknlMstpSrasWrflDnon";
			FastB = "AcinPknlMwlkSnonWnonDb";
			FastLB = "AcinPknlMwlkSnonWnonDb";
			FastRB = "AcinPknlMwlkSnonWnonDb";
			grabCarry = "AcinPercMstpSnonWnonDnon";
			grabDrag = "AmovPercMstpSnonWnonDnon_AcinPknlMwlkSnonWnonDb_2";
			medicStart = "AinvPknlMstpSnonWnonDnon_medic";
			medicStartUp = "AinvPknlMstpSnonWrflDnon_medicUp";
			PlayerSlowB = "AcinPknlMwlkSnonWnonDb";
			PlayerSlowLB = "AcinPknlMwlkSnonWnonDb";
			PlayerSlowRB = "AcinPknlMwlkSnonWnonDb";
			PlayerStand = "Helper_SwitchToCarryNon";
			PlayerWalkB = "AcinPknlMwlkSnonWnonDb";
			PlayerWalkLB = "AcinPknlMwlkSnonWnonDb";
			PlayerWalkRB = "AcinPknlMwlkSnonWnonDb";
			SlowB = "AcinPknlMwlkSnonWnonDb";
			SlowLB = "AcinPknlMwlkSnonWnonDb";
			SlowRB = "AcinPknlMwlkSnonWnonDb";
			WalkB = "AcinPknlMwlkSnonWnonDb";
			WalkLB = "AcinPknlMwlkSnonWnonDb";
			WalkRB = "AcinPknlMwlkSnonWnonDb";
		};
		class MoveWithInjuredMan_helperNonPst: MoveWithInjuredMan_helperNon
		{
			Civil = "AcinPknlMstpSnonWpstDnon_AcinPercMrunSnonWpstDnon";
			Default = "AcinPknlMstpSnonWpstDnon_AcinPercMrunSnonWpstDnon";
			grabCarry = "AcinPercMstpSnonWpstDnon";
			HandGunOn = "AcinPercMstpSnonWpstDnon";
			stop = "AcinPknlMstpSnonWpstDnon_AcinPercMrunSnonWpstDnon";
			updegree = "ManPosHandGunStand";
		};
		class MoveWithInjuredMan_helperRfl: MoveWithInjuredMan
		{
			Combat = "AcinPercMstpSrasWrflDnon";
			FastB = "AcinPercMstpSrasWrflDnon";
			FastF = "AcinPercMstpSrasWrflDnon";
			FastL = "AcinPercMstpSrasWrflDnon";
			FastLB = "AcinPercMstpSrasWrflDnon";
			FastLF = "AcinPercMstpSrasWrflDnon";
			FastR = "AcinPercMstpSrasWrflDnon";
			FastRB = "AcinPercMstpSrasWrflDnon";
			FastRF = "AcinPercMstpSrasWrflDnon";
			PlayerSlowB = "AcinPercMstpSrasWrflDnon";
			PlayerSlowF = "AcinPercMstpSrasWrflDnon";
			PlayerSlowL = "AcinPercMstpSrasWrflDnon";
			PlayerSlowLB = "AcinPercMstpSrasWrflDnon";
			PlayerSlowLF = "AcinPercMstpSrasWrflDnon";
			PlayerSlowR = "AcinPercMstpSrasWrflDnon";
			PlayerSlowRB = "AcinPercMstpSrasWrflDnon";
			PlayerSlowRF = "AcinPercMstpSrasWrflDnon";
			PlayerTactB = "AcinPercMstpSrasWrflDnon";
			PlayerTactF = "AcinPercMstpSrasWrflDnon";
			PlayerTactL = "AcinPercMstpSrasWrflDnon";
			PlayerTactLB = "AcinPercMstpSrasWrflDnon";
			PlayerTactLF = "AcinPercMstpSrasWrflDnon";
			PlayerTactR = "AcinPercMstpSrasWrflDnon";
			PlayerTactRB = "AcinPercMstpSrasWrflDnon";
			PlayerTactRF = "AcinPercMstpSrasWrflDnon";
			PlayerWalkB = "AcinPercMstpSrasWrflDnon";
			PlayerWalkF = "AcinPercMstpSrasWrflDnon";
			PlayerWalkL = "AcinPercMstpSrasWrflDnon";
			PlayerWalkLB = "AcinPercMstpSrasWrflDnon";
			PlayerWalkLF = "AcinPercMstpSrasWrflDnon";
			PlayerWalkR = "AcinPercMstpSrasWrflDnon";
			PlayerWalkRB = "AcinPercMstpSrasWrflDnon";
			PlayerWalkRF = "AcinPercMstpSrasWrflDnon";
			SlowB = "AcinPercMstpSrasWrflDnon";
			SlowF = "AcinPercMstpSrasWrflDnon";
			SlowL = "AcinPercMstpSrasWrflDnon";
			SlowLB = "AcinPercMstpSrasWrflDnon";
			SlowLF = "AcinPercMstpSrasWrflDnon";
			SlowR = "AcinPercMstpSrasWrflDnon";
			SlowRB = "AcinPercMstpSrasWrflDnon";
			SlowRF = "AcinPercMstpSrasWrflDnon";
			TactB = "AcinPercMstpSrasWrflDnon";
			TactF = "AcinPercMstpSrasWrflDnon";
			TactL = "AcinPercMstpSrasWrflDnon";
			TactLB = "AcinPercMstpSrasWrflDnon";
			TactLF = "AcinPercMstpSrasWrflDnon";
			TactR = "AcinPercMstpSrasWrflDnon";
			TactRB = "AcinPercMstpSrasWrflDnon";
			TactRF = "AcinPercMstpSrasWrflDnon";
			WalkB = "AcinPercMstpSrasWrflDnon";
			WalkF = "AcinPercMstpSrasWrflDnon";
			WalkL = "AcinPercMstpSrasWrflDnon";
			WalkLB = "AcinPercMstpSrasWrflDnon";
			WalkLF = "AcinPercMstpSrasWrflDnon";
			WalkR = "AcinPercMstpSrasWrflDnon";
			WalkRB = "AcinPercMstpSrasWrflDnon";
			WalkRF = "AcinPercMstpSrasWrflDnon";
		};
		class MoveWithInjuredMan_release: RifleBaseLowStandActions
		{
			Diary = "";
		};
		class MoveWithInjuredManCarrier: MoveWithInjuredMan
		{
			Default = "AcinPercMstpSrasWrflDnon";
			FastF = "AcinPercMrunSrasWrflDf";
			FastLF = "AcinPercMrunSrasWrflDf";
			FastRF = "AcinPercMrunSrasWrflDf";
			grabCarry = "AcinPercMstpSrasWrflDnon";
			grabDrag = "";
			LadderOnDown = "";
			LadderOnUp = "";
			PlayerProne = "AcinPercMrunSrasWrflDf_AmovPercMstpSlowWrflDnon";
			PlayerSlowB = "";
			PlayerSlowF = "AcinPercMrunSrasWrflDf";
			PlayerSlowLB = "";
			PlayerSlowLF = "AcinPercMrunSrasWrflDf";
			PlayerSlowRB = "";
			PlayerSlowRF = "AcinPercMrunSrasWrflDf";
			PlayerWalkB = "";
			PlayerWalkF = "AcinPercMrunSrasWrflDf";
			PlayerWalkLB = "";
			PlayerWalkLF = "AcinPercMrunSrasWrflDf";
			PlayerWalkRB = "";
			PlayerWalkRF = "AcinPercMrunSrasWrflDf";
			released = "AcinPercMrunSrasWrflDf_AmovPercMstpSlowWrflDnon";
			SlowB = "";
			SlowF = "AcinPercMrunSrasWrflDf";
			SlowLB = "";
			SlowLF = "AcinPercMrunSrasWrflDf";
			SlowRB = "";
			SlowRF = "AcinPercMrunSrasWrflDf";
			stance = "ManStanceStand";
			Stop = "AcinPercMstpSrasWrflDnon";
			StopRelaxed = "AcinPercMstpSrasWrflDnon";
			TestDriver = "";
			TestDriverOut = "";
			TestGunner = "";
			WalkB = "";
			WalkF = "AcinPercMrunSrasWrflDf";
			WalkLB = "";
			WalkLF = "AcinPercMrunSrasWrflDf";
			WalkRB = "";
			WalkRF = "AcinPercMrunSrasWrflDf";
		};
		class MoveWithInjuredManCarrierNon: MoveWithInjuredManCarrierRfl
		{
			agonyStart = "AinjPpneMstpSnonWnonDnon";
			agonyStop = "AmovPpneMstpSnonWnonDnon";
			CanNotMove = "";
			Civil = "AcinPercMstpSnonWnonDnon";
			Default = "AcinPercMstpSnonWnonDnon";
			EvasiveLeft = "AcinPercMstpSnonWnonDnon";
			EvasiveRight = "AcinPercMstpSnonWnonDnon";
			FastB = "AcinPercMrunSnonWnonDb";
			FastF = "AcinPercMrunSnonWnonDf";
			FastL = "AcinPercMrunSnonWnonDl";
			FastLB = "AcinPercMrunSnonWnonDbl";
			FastLF = "AcinPercMrunSnonWnonDfl";
			FastR = "AcinPercMrunSnonWnonDl";
			FastRB = "AcinPercMrunSnonWnonDbr";
			FastRF = "AcinPercMrunSnonWnonDfr";
			grabCarry = "AcinPercMstpSnonWnonDnon";
			medicStart = "AinvPknlMstpSnonWnonDnon_medic";
			medicStop = "AinvPknlMstpSnonWnonDnon_medicEnd";
			PlayerSlowB = "AcinPercMrunSnonWnonDb";
			PlayerSlowF = "AcinPercMrunSnonWnonDf";
			PlayerSlowL = "AcinPercMrunSnonWnonDl";
			PlayerSlowLB = "AcinPercMrunSnonWnonDbl";
			PlayerSlowLF = "AcinPercMrunSnonWnonDfl";
			PlayerSlowR = "AcinPercMrunSnonWnonDr";
			PlayerSlowRB = "AcinPercMrunSnonWnonDbr";
			PlayerSlowRF = "AcinPercMrunSnonWnonDfr";
			PlayerStand = "AcinPercMstpSnonWnonDnon";
			PlayerWalkB = "AcinPercMrunSnonWnonDb";
			PlayerWalkF = "AcinPercMrunSnonWnonDf";
			PlayerWalkL = "AcinPercMrunSnonWnonDl";
			PlayerWalkLB = "AcinPercMrunSnonWnonDbl";
			PlayerWalkLF = "AcinPercMrunSnonWnonDfl";
			PlayerWalkR = "AcinPercMrunSnonWnonDr";
			PlayerWalkRB = "AcinPercMrunSnonWnonDbr";
			PlayerWalkRF = "AcinPercMrunSnonWnonDfr";
			released = "AcinPercMrunSnonWnonDf_AmovPercMstpSnonWnonDnon";
			SlowB = "AcinPercMrunSnonWnonDb";
			SlowF = "AcinPercMrunSnonWnonDf";
			SlowL = "AcinPercMrunSnonWnonDl";
			SlowLB = "AcinPercMrunSnonWnonDbl";
			SlowLF = "AcinPercMrunSnonWnonDfl";
			SlowR = "AcinPercMrunSnonWnonDr";
			SlowRB = "AcinPercMrunSnonWnonDbr";
			SlowRF = "AcinPercMrunSnonWnonDfr";
			Stand = "";
			Stop = "AcinPercMstpSnonWnonDnon";
			StopRelaxed = "AcinPercMstpSnonWnonDnon";
			upDegree = "ManPosNoWeapon";
			WalkB = "AcinPercMrunSnonWnonDb";
			WalkF = "AcinPercMrunSnonWnonDf";
			WalkL = "AcinPercMrunSnonWnonDl";
			WalkLB = "AcinPercMrunSnonWnonDbl";
			WalkLF = "AcinPercMrunSnonWnonDfl";
			WalkR = "AcinPercMrunSnonWnonDr";
			WalkRB = "AcinPercMrunSnonWnonDbr";
			WalkRF = "AcinPercMrunSnonWnonDfr";
		};
		class MoveWithInjuredManCarrierNonStill: MoveWithInjuredManCarrierNon
		{
			grabDrag = "AmovPercMstpSnonWnonDnon_AcinPknlMwlkSnonWnonDb_2";
			PlayerTactB = "AcinPercMrunSnonWnonDb";
			PlayerTactF = "AcinPercMrunSnonWnonDf";
			PlayerTactL = "AcinPercMrunSnonWnonDl";
			PlayerTactLB = "AcinPercMrunSnonWnonDbl";
			PlayerTactLF = "AcinPercMrunSnonWnonDfl";
			PlayerTactR = "AcinPercMrunSnonWnonDr";
			PlayerTactRB = "AcinPercMrunSnonWnonDbr";
			PlayerTactRF = "AcinPercMrunSnonWnonDfr";
			TactB = "AcinPercMrunSnonWnonDb";
			TactF = "AcinPercMrunSnonWnonDf";
			TactL = "AcinPercMrunSnonWnonDl";
			TactLB = "AcinPercMrunSnonWnonDbl";
			TactLF = "AcinPercMrunSnonWnonDfl";
			TactR = "AcinPercMrunSnonWnonDr";
			TactRB = "AcinPercMrunSnonWnonDbr";
			TactRF = "AcinPercMrunSnonWnonDfr";
			upDegree = "manPosCarrying";
		};
		class MoveWithInjuredManCarrierNonWc: MoveWithInjuredManCarrierNon {};
		class MoveWithInjuredManCarrierPst: MoveWithInjuredManCarrierRfl
		{
			HandGunOn = "AcinPercMstpSnonWpstDnon";
			upDegree = "ManPosHandGunStand";
		};
		class MoveWithInjuredManCarrierPstStill: MoveWithInjuredManCarrierNon
		{
			CanNotMove = "AcinPercMstpSnonWpstDnon";
			Default = "AcinPercMstpSnonWpstDnon";
			FastB = "AcinPercMrunSnonWpstDb";
			FastF = "AcinPercMrunSnonWpstDf";
			FastL = "AcinPercMrunSnonWpstDl";
			FastLB = "AcinPercMrunSnonWpstDbl";
			FastLF = "AcinPercMrunSnonWpstDfl";
			FastR = "AcinPercMrunSnonWpstDl";
			FastRB = "AcinPercMrunSnonWpstDbr";
			FastRF = "AcinPercMrunSnonWpstDfr";
			grabDrag = "AmovPercMstpSrasWpstDnon_AcinPknlMwlkSnonWpstDb_2";
			PlayerSlowB = "AcinPercMrunSnonWpstDb";
			PlayerSlowF = "AcinPercMrunSnonWpstDf";
			PlayerSlowL = "AcinPercMrunSnonWpstDl";
			PlayerSlowLB = "AcinPercMrunSnonWpstDbl";
			PlayerSlowLF = "AcinPercMrunSnonWpstDfl";
			PlayerSlowR = "AcinPercMrunSnonWpstDr";
			PlayerSlowRB = "AcinPercMrunSnonWpstDbr";
			PlayerSlowRF = "AcinPercMrunSnonWpstDfr";
			PlayerStand = "AcinPercMstpSnonWpstDnon";
			PlayerTactB = "AcinPercMrunSnonWpstDb";
			PlayerTactF = "AcinPercMrunSnonWpstDf";
			PlayerTactL = "AcinPercMrunSnonWpstDl";
			PlayerTactLB = "AcinPercMrunSnonWpstDbl";
			PlayerTactLF = "AcinPercMrunSnonWpstDfl";
			PlayerTactR = "AcinPercMrunSnonWpstDr";
			PlayerTactRB = "AcinPercMrunSnonWpstDbr";
			PlayerTactRF = "AcinPercMrunSnonWpstDfr";
			PlayerWalkB = "AcinPercMrunSnonWpstDb";
			PlayerWalkF = "AcinPercMrunSnonWpstDf";
			PlayerWalkL = "AcinPercMrunSnonWpstDl";
			PlayerWalkLB = "AcinPercMrunSnonWpstDbl";
			PlayerWalkLF = "AcinPercMrunSnonWpstDfl";
			PlayerWalkR = "AcinPercMrunSnonWpstDr";
			PlayerWalkRB = "AcinPercMrunSnonWpstDbr";
			PlayerWalkRF = "AcinPercMrunSnonWpstDfr";
			released = "AcinPercMrunSnonWpstDf_AmovPercMstpSrasWpstDnon";
			SlowB = "AcinPercMrunSnonWpstDb";
			SlowF = "AcinPercMrunSnonWpstDf";
			SlowL = "AcinPercMrunSnonWpstDl";
			SlowLB = "AcinPercMrunSnonWpstDbl";
			SlowLF = "AcinPercMrunSnonWpstDfl";
			SlowR = "AcinPercMrunSnonWpstDr";
			SlowRB = "AcinPercMrunSnonWpstDbr";
			SlowRF = "AcinPercMrunSnonWpstDfr";
			Stop = "AcinPercMstpSnonWpstDnon";
			StopRelaxed = "AcinPercMstpSnonWpstDnon";
			TactB = "AcinPercMrunSnonWpstDb";
			TactF = "AcinPercMrunSnonWpstDf";
			TactL = "AcinPercMrunSnonWpstDl";
			TactLB = "AcinPercMrunSnonWpstDbl";
			TactLF = "AcinPercMrunSnonWpstDfl";
			TactR = "AcinPercMrunSnonWpstDr";
			TactRB = "AcinPercMrunSnonWpstDbr";
			TactRF = "AcinPercMrunSnonWpstDfr";
			upDegree = "manPosCarrying";
			WalkB = "AcinPercMrunSnonWpstDb";
			WalkF = "AcinPercMrunSnonWpstDf";
			WalkL = "AcinPercMrunSnonWpstDl";
			WalkLB = "AcinPercMrunSnonWpstDbl";
			WalkLF = "AcinPercMrunSnonWpstDfl";
			WalkR = "AcinPercMrunSnonWpstDr";
			WalkRB = "AcinPercMrunSnonWpstDbr";
			WalkRF = "AcinPercMrunSnonWpstDfr";
		};
		class MoveWithInjuredManCarrierPstWc: MoveWithInjuredManCarrierRflWc {};
		class MoveWithInjuredManCarrierRfl: MoveWithInjuredManCarrier
		{
			agonyStart = "AinjPpneMstpSnonWrflDnon";
			agonyStop = "AmovPpneMstpSrasWrflDnon";
			CanNotMove = "AcinPercMstpSrasWrflDnon";
			EvasiveLeft = "AcinPercMstpSrasWrflDnon";
			EvasiveRight = "AcinPercMstpSrasWrflDnon";
			FastB = "AcinPercMrunSrasWrflDb";
			FastL = "AcinPercMrunSrasWrflDl";
			FastLB = "AcinPercMrunSrasWrflDbl";
			FastLF = "AcinPercMrunSrasWrflDfl";
			FastR = "AcinPercMrunSrasWrflDl";
			FastRB = "AcinPercMrunSrasWrflDbr";
			FastRF = "AcinPercMrunSrasWrflDfr";
			medicStart = "AinvPknlMstpSnonWrflDnon_medic";
			medicStartUp = "AinvPknlMstpSnonWrflDnon_medicUp";
			medicStop = "AinvPknlMstpSnonWrflDnon_medicEnd";
			PlayerProne = "";
			PlayerSlowB = "AcinPercMrunSrasWrflDb";
			PlayerSlowL = "AcinPercMrunSrasWrflDl";
			PlayerSlowLB = "AcinPercMrunSrasWrflDbl";
			PlayerSlowLF = "AcinPercMrunSrasWrflDfl";
			PlayerSlowR = "AcinPercMrunSrasWrflDr";
			PlayerSlowRB = "AcinPercMrunSrasWrflDbr";
			PlayerSlowRF = "AcinPercMrunSrasWrflDfr";
			PlayerStand = "AcinPercMstpSrasWrflDnon";
			PlayerTactB = "AcinPercMrunSrasWrflDb";
			PlayerTactF = "AcinPercMrunSrasWrflDf";
			PlayerTactL = "AcinPercMrunSrasWrflDl";
			PlayerTactLB = "AcinPercMrunSrasWrflDbl";
			PlayerTactLF = "AcinPercMrunSrasWrflDfl";
			PlayerTactR = "AcinPercMrunSrasWrflDr";
			PlayerTactRB = "AcinPercMrunSrasWrflDbr";
			PlayerTactRF = "AcinPercMrunSrasWrflDfr";
			PlayerWalkB = "AcinPercMrunSrasWrflDb";
			PlayerWalkL = "AcinPercMrunSrasWrflDl";
			PlayerWalkLB = "AcinPercMrunSrasWrflDbl";
			PlayerWalkLF = "AcinPercMrunSrasWrflDfl";
			PlayerWalkR = "AcinPercMrunSrasWrflDr";
			PlayerWalkRB = "AcinPercMrunSrasWrflDbr";
			PlayerWalkRF = "AcinPercMrunSrasWrflDfr";
			SlowB = "AcinPercMrunSrasWrflDb";
			SlowL = "AcinPercMrunSrasWrflDl";
			SlowLB = "AcinPercMrunSrasWrflDbl";
			SlowLF = "AcinPercMrunSrasWrflDfl";
			SlowR = "AcinPercMrunSrasWrflDr";
			SlowRB = "AcinPercMrunSrasWrflDbr";
			SlowRF = "AcinPercMrunSrasWrflDfr";
			Stand = "AmovPercMstpSlowWrflDnon";
			StartDive = "";
			StartSwim = "";
			TactB = "AcinPercMrunSrasWrflDb";
			TactF = "AcinPercMrunSrasWrflDf";
			TactL = "AcinPercMrunSrasWrflDl";
			TactLB = "AcinPercMrunSrasWrflDbl";
			TactLF = "AcinPercMrunSrasWrflDfl";
			TactR = "AcinPercMrunSrasWrflDr";
			TactRB = "AcinPercMrunSrasWrflDbr";
			TactRF = "AcinPercMrunSrasWrflDfr";
			toAgony = "AmovPpneMstpSrasWrflDnon_injured";
			updegree = "ManPosCombat";
			WalkB = "AcinPercMrunSrasWrflDb";
			WalkL = "AcinPercMrunSrasWrflDl";
			WalkLB = "AcinPercMrunSrasWrflDbl";
			WalkLF = "AcinPercMrunSrasWrflDfl";
			WalkR = "AcinPercMrunSrasWrflDr";
			WalkRB = "AcinPercMrunSrasWrflDbr";
			WalkRF = "AcinPercMrunSrasWrflDfr";
		};
		class MoveWithInjuredManCarrierRflStill: MoveWithInjuredManCarrierRfl
		{
			grabDrag = "AmovPercMstpSlowWrflDnon_AcinPknlMwlkSlowWrflDb_2";
			upDegree = "manPosCarrying";
		};
		class MoveWithInjuredManCarrierRflWc: MoveWithInjuredManCarrierRfl
		{
			toAgony = "AinjPpneMstpSnonWrflDnon";
		};
		class MoveWithInjuredManDragger: MoveWithInjuredMan
		{
			released = "AcinPknlMstpSrasWrflDnon_AmovPknlMstpSrasWrflDnon";
			Stop = "AcinPknlMstpSrasWrflDnon";
			StopRelaxed = "AcinPknlMstpSrasWrflDnon";
			Up = "Helper_SwitchToCarryRfl";
		};
		class MoveWithInjuredManDraggerNon: MoveWithInjuredManDragger
		{
			Default = "AcinPknlMstpSnonWnonDnon";
			FastB = "AcinPknlMwlkSnonWnonDb";
			FastLB = "AcinPknlMwlkSnonWnonDb";
			FastRB = "AcinPknlMwlkSnonWnonDb";
			grabCarry = "Helper_SwitchToCarrynon";
			grabDrag = "AmovPercMstpSnonWnonDnon_AcinPknlMwlkSnonWnonDb_2";
			grabDragged = "AinjPpneMrunSnonWnonDb_grab";
			HandGunOn = "AcinPknlMstpSnonWnonDnon";
			PlayerSlowB = "AcinPknlMwlkSnonWnonDb";
			PlayerSlowLB = "AcinPknlMwlkSnonWnonDb";
			PlayerSlowRB = "AcinPknlMwlkSnonWnonDb";
			PlayerWalkB = "AcinPknlMwlkSnonWnonDb";
			PlayerWalkLB = "AcinPknlMwlkSnonWnonDb";
			PlayerWalkRB = "AcinPknlMwlkSnonWnonDb";
			released = "AmovPknlMstpSnonWnonDnon";
			SlowB = "AcinPknlMwlkSnonWnonDb";
			SlowLB = "AcinPknlMwlkSnonWnonDb";
			SlowRB = "AcinPknlMwlkSnonWnonDb";
			Stop = "AcinPknlMstpSnonWnonDnon";
			StopRelaxed = "AcinPknlMstpSnonWnonDnon";
			Up = "";
			upDegree = "ManPosNoWeapon";
			WalkB = "AcinPknlMwlkSnonWnonDb";
			WalkLB = "AcinPknlMwlkSnonWnonDb";
			WalkRB = "AcinPknlMwlkSnonWnonDb";
		};
		class MoveWithInjuredManDraggerPst: MoveWithInjuredManDragger
		{
			Default = "AcinPknlMstpSnonWpstDnon";
			FastB = "AcinPknlMwlkSnonWpstDb";
			FastLB = "AcinPknlMwlkSnonWpstDb";
			FastRB = "AcinPknlMwlkSnonWpstDb";
			grabCarry = "Helper_SwitchToCarrynon_pst";
			grabDrag = "AmovPercMstpSrasWpstDnon_AcinPknlMwlkSnonWpstDb_2";
			grabDragged = "AinjPpneMrunSnonWnonDb_grab";
			HandGunOn = "AcinPknlMstpSnonWpstDnon";
			PlayerSlowB = "AcinPknlMwlkSnonWpstDb";
			PlayerSlowLB = "AcinPknlMwlkSnonWpstDb";
			PlayerSlowRB = "AcinPknlMwlkSnonWpstDb";
			PlayerWalkB = "AcinPknlMwlkSnonWpstDb";
			PlayerWalkLB = "AcinPknlMwlkSnonWpstDb";
			PlayerWalkRB = "AcinPknlMwlkSnonWpstDb";
			released = "AmovPknlMstpSrasWpstDnon";
			SlowB = "AcinPknlMwlkSnonWpstDb";
			SlowLB = "AcinPknlMwlkSnonWpstDb";
			SlowRB = "AcinPknlMwlkSnonWpstDb";
			Stop = "AcinPknlMstpSnonWpstDnon";
			StopRelaxed = "AcinPknlMstpSnonWpstDnon";
			Up = "";
			upDegree = "ManPosHandGunStand";
			WalkB = "AcinPknlMwlkSnonWpstDb";
			WalkLB = "AcinPknlMwlkSnonWpstDb";
			WalkRB = "AcinPknlMwlkSnonWpstDb";
		};
		class MoveWithInjuredManDraggerRfl: MoveWithInjuredManDragger
		{
			agonyStart = "AinjPpneMstpSnonWrflDnon";
			agonyStop = "AmovPpneMstpSrasWrflDnon";
			EvasiveLeft = "AcinPknlMstpSrasWrflDnon";
			EvasiveRight = "AcinPknlMstpSrasWrflDnon";
			FastF = "AcinPknlMstpSrasWrflDnon";
			FastL = "AcinPknlMstpSrasWrflDnon";
			FastLF = "AcinPknlMstpSrasWrflDnon";
			FastR = "AcinPknlMstpSrasWrflDnon";
			FastRF = "AcinPknlMstpSrasWrflDnon";
			medicStart = "AinvPknlMstpSnonWrflDnon_medic";
			medicStartRightSide = "AinvPknlMstpSnonWrflDr_medic0S";
			medicStartUp = "AinvPknlMstpSnonWrflDnon_medicUp";
			medicStop = "AinvPknlMstpSnonWrflDnon_medicEnd";
			PlayerSlowF = "AcinPknlMstpSrasWrflDnon";
			PlayerSlowL = "AcinPknlMstpSrasWrflDnon";
			PlayerSlowLF = "AcinPknlMstpSrasWrflDnon";
			PlayerSlowR = "AcinPknlMstpSrasWrflDnon";
			PlayerSlowRF = "AcinPknlMstpSrasWrflDnon";
			PlayerWalkF = "AcinPknlMstpSrasWrflDnon";
			PlayerWalkL = "AcinPknlMstpSrasWrflDnon";
			PlayerWalkLF = "AcinPknlMstpSrasWrflDnon";
			PlayerWalkR = "AcinPknlMstpSrasWrflDnon";
			PlayerWalkRF = "AcinPknlMstpSrasWrflDnon";
			released = "AmovPknlMstpSrasWrflDnon";
			SlowF = "AcinPknlMstpSrasWrflDnon";
			SlowL = "AcinPknlMstpSrasWrflDnon";
			SlowLF = "AcinPknlMstpSrasWrflDnon";
			SlowR = "AcinPknlMstpSrasWrflDnon";
			SlowRF = "AcinPknlMstpSrasWrflDnon";
			WalkF = "AcinPknlMstpSrasWrflDnon";
			WalkL = "AcinPknlMstpSrasWrflDnon";
			WalkLF = "AcinPknlMstpSrasWrflDnon";
			WalkR = "AcinPknlMstpSrasWrflDnon";
			WalkRF = "AcinPknlMstpSrasWrflDnon";
		};
		class NoActions: ManActions
		{
			access = 3;
			GestureAgonyCargo[] = {"GestureAgonyCargo", "Gesture"};
			GestureDismountMuzzle[] = {"GestureDismountMuzzle", "Gesture"};
			GestureEmpty[] = {"GestureEmpty", "Gesture"};
			GestureLegPush[] = {"GestureLegPush", "Gesture"};
			GestureMountMuzzle[] = {"GestureMountMuzzle", "Gesture"};
			GestureNod[] = {"GestureNod", "Gesture"};
			GestureReload_smg_03[] = {"GestureReload_smg_03", "Gesture"};
			GestureReloadAK12[] = {"GestureReloadAK12", "Gesture"};
			GestureReloadAK12_Drum[] = {"GestureReloadAK12_Drum", "Gesture"};
			GestureReloadAKM[] = {"GestureReloadAKM", "Gesture"};
			GestureReloadAKM_Drum[] = {"GestureReloadAKM_Drum", "Gesture"};
			GestureReloadAKS[] = {"GestureReloadAKS", "Gesture"};
			GestureReloadARX[] = {"GestureReloadARX", "Gesture"};
			GestureReloadARX2[] = {"GestureReloadARX2", "Gesture"};
			GestureReloadCTAR[] = {"GestureReloadCTAR", "Gesture"};
			GestureReloadDMR[] = {"GestureReloadDMR", "Gesture"};
			GestureReloadDMR02[] = {"GestureReloadDMR02", "Gesture"};
			GestureReloadDMR03[] = {"GestureReloadDMR03", "Gesture"};
			GestureReloadDMR04[] = {"GestureReloadDMR04", "Gesture"};
			GestureReloadDMR05[] = {"GestureReloadDMR05", "Gesture"};
			GestureReloadDMR06[] = {"GestureReloadDMR06", "Gesture"};
			GestureReloadDMR07[] = {"GestureReloadDMR07", "Gesture"};
			GestureReloadEBR[] = {"GestureReloadEBR", "Gesture"};
			GestureReloadFlaregun[] = {"GestureReloadFlaregun", "Gesture"};
			GestureReloadHunterShotgun01[] = {"GestureReloadHunterShotgun01", "Gesture"};
			GestureReloadKatiba[] = {"GestureReloadKatiba", "Gesture"};
			GestureReloadKatibaUGL[] = {"GestureReloadKatibaUGL", "Gesture"};
			GestureReloadLIM[] = {"GestureReloadLIM", "Gesture"};
			GestureReloadLRR[] = {"GestureReloadLRR", "Gesture"};
			GestureReloadM200[] = {"GestureReloadM200", "Gesture"};
			GestureReloadM4SSAS[] = {"GestureReloadM4SSAS", "Gesture"};
			GestureReloadMk20[] = {"GestureReloadMk20", "Gesture"};
			GestureReloadMk20UGL[] = {"GestureReloadMk20UGL", "Gesture"};
			GestureReloadMMG01[] = {"GestureReloadMMG01", "Gesture"};
			GestureReloadMMG02[] = {"GestureReloadMMG02", "Gesture"};
			GestureReloadMSBS[] = {"GestureReloadMSBS", "Gesture"};
			GestureReloadMSBS_UBS[] = {"GestureReloadMSBS_UBS", "Gesture"};
			GestureReloadMSBS_UGL[] = {"GestureReloadMSBS_UGL", "Gesture"};
			GestureReloadMX[] = {"GestureReloadMX", "Gesture"};
			GestureReloadMXCompact[] = {"GestureReloadMXCompact", "Gesture"};
			GestureReloadMXSniper[] = {"GestureReloadMXSniper", "Gesture"};
			GestureReloadMXUGL[] = {"GestureReloadMXUGL", "Gesture"};
			GestureReloadPistol[] = {"GestureReloadPistol", "Gesture"};
			GestureReloadPistolHeavy02[] = {"GestureReloadPistolHeavy02", "Gesture"};
			GestureReloadRPG7[] = {"GestureReloadRPG7", "Gesture"};
			GestureReloadSDAR[] = {"GestureReloadSDAR", "Gesture"};
			GestureReloadSMG_01[] = {"GestureReloadSMG_01", "Gesture"};
			GestureReloadSMG_02[] = {"GestureReloadSMG_02", "Gesture"};
			GestureReloadSMG_03[] = {"GestureReloadSMG_03", "Gesture"};
			GestureReloadSMG_05[] = {"GestureReloadSMG_05", "Gesture"};
			GestureReloadSPAR_01[] = {"GestureReloadSPAR_01", "Gesture"};
			GestureReloadSPAR_02[] = {"GestureReloadSPAR_02", "Gesture"};
			GestureReloadSPARUGL[] = {"GestureReloadSPARUGL", "Gesture"};
			GestureReloadTRG[] = {"GestureReloadTRG", "Gesture"};
			GestureReloadTRGUGL[] = {"GestureReloadTRGUGL", "Gesture"};
			GestureSpasm0[] = {"GestureSpasm0", "Gesture"};
			GestureSpasm0weak[] = {"GestureSpasm0weak", "Gesture"};
			GestureSpasm1[] = {"GestureSpasm1", "Gesture"};
			GestureSpasm1weak[] = {"GestureSpasm1weak", "Gesture"};
			GestureSpasm2[] = {"GestureSpasm2", "Gesture"};
			GestureSpasm2weak[] = {"GestureSpasm2weak", "Gesture"};
			GestureSpasm3[] = {"GestureSpasm3", "Gesture"};
			GestureSpasm3weak[] = {"GestureSpasm3weak", "Gesture"};
			GestureSpasm4[] = {"GestureSpasm4", "Gesture"};
			GestureSpasm4weak[] = {"GestureSpasm4weak", "Gesture"};
			GestureSpasm5[] = {"GestureSpasm5", "Gesture"};
			GestureSpasm5weak[] = {"GestureSpasm5weak", "Gesture"};
			GestureSpasm6[] = {"GestureSpasm6", "Gesture"};
			GestureSpasm6weak[] = {"GestureSpasm6weak", "Gesture"};
			grabCarried = "AinjPfalMstpSnonWrflDnon_carried_Up";
			HandSignalFreeze[] = {"HandSignalFreeze", "Gesture"};
			HandSignalGetDown[] = {"HandSignalGetDown", "Gesture"};
			HandSignalGetUp[] = {"HandSignalGetUp", "Gesture"};
			HandSignalHold[] = {"HandSignalHold", "Gesture"};
			HandSignalMoveForward[] = {"HandSignalMoveForward", "Gesture"};
			HandSignalMoveOut[] = {"HandSignalMoveOut", "Gesture"};
			HandSignalPoint[] = {"HandSignalPoint", "Gesture"};
			HandSignalRadio[] = {"HandSignalRadio", "Gesture"};
			ladderOnDown = "LadderCivilOn_Top";
			ladderOnUp = "LadderCivilOn_Top";
			leanLRot = 0;
			leanLShift = 0;
			leanRRot = 0;
			leanRShift = 0;
			limitFast = 5;
			reloadGM6[] = {"GestureReloadGM6", "Gesture"};
			stance = "ManStanceUndefined";
			turnSpeed = 1;
			upDegree = -1;
			useFastMove = 0;
		};
		class NoActionsLying: NoActions
		{
			stance = "ManStanceProne";
			upDegree = "ManPosLying";
		};
		class para_actions: RifleBaseLowStandActions
		{
			Die = "KIA_Para_Pilot";
		};
		class ParachuteFreeFall: NoActions
		{
			bottomSwim = "AbswPercMrunSnonWnonDf";
			Civil = "AmovPercMstpSnonWnonDnon";
			Combat = "AmovPercMstpSrasWrflDnon";
			Default = "HaloFreeFall_non";
			EvasiveLeft = "HaloFreeFall_FL";
			EvasiveRight = "HaloFreeFall_FR";
			FastB = "HaloFreeFall_B";
			FastF = "HaloFreeFall_F";
			FastL = "HaloFreeFall_L";
			FastLB = "HaloFreeFall_BL";
			FastLF = "HaloFreeFall_FL";
			FastR = "HaloFreeFall_R";
			FastRB = "HaloFreeFall_BR";
			FastRF = "HaloFreeFall_FR";
			HandGunOn = "AmovPercMstpSrasWpstDnon";
			PlayerSlowB = "HaloFreeFall_B";
			PlayerSlowF = "HaloFreeFall_F";
			PlayerSlowL = "HaloFreeFall_L";
			PlayerSlowLB = "HaloFreeFall_BL";
			PlayerSlowLF = "HaloFreeFall_FL";
			PlayerSlowR = "HaloFreeFall_R";
			PlayerSlowRB = "HaloFreeFall_BR";
			PlayerSlowRF = "HaloFreeFall_FR";
			PlayerTactB = "HaloFreeFall_B";
			PlayerTactF = "HaloFreeFall_F";
			PlayerTactL = "HaloFreeFall_L";
			PlayerTactLB = "HaloFreeFall_BL";
			PlayerTactLF = "HaloFreeFall_FL";
			PlayerTactR = "HaloFreeFall_R";
			PlayerTactRB = "HaloFreeFall_BR";
			PlayerTactRF = "HaloFreeFall_FR";
			PlayerWalkB = "HaloFreeFall_B";
			PlayerWalkF = "HaloFreeFall_F";
			PlayerWalkL = "HaloFreeFall_L";
			PlayerWalkLB = "HaloFreeFall_BL";
			PlayerWalkLF = "HaloFreeFall_FL";
			PlayerWalkR = "HaloFreeFall_R";
			PlayerWalkRB = "HaloFreeFall_BR";
			PlayerWalkRF = "HaloFreeFall_FR";
			PrimaryWeapon = "AmovPercMstpSrasWrflDnon";
			SecondaryWeapon = "AmovPercMstpSrasWlnrDnon";
			SlowB = "HaloFreeFall_B";
			SlowF = "HaloFreeFall_F";
			SlowL = "HaloFreeFall_L";
			SlowLB = "HaloFreeFall_BL";
			SlowLF = "HaloFreeFall_FL";
			SlowR = "HaloFreeFall_R";
			SlowRB = "HaloFreeFall_BR";
			SlowRF = "HaloFreeFall_FR";
			startSwim = "AswmPercMrunSnonWnonDf";
			Stop = "AmovPpneMstpSnonWnonDnon";
			StopRelaxed = "AmovPpneMstpSnonWnonDnon";
			StopSwim = "AmovPercMstpSnonWnonDnon";
			surfaceSwim = "AsswPercMrunSnonWnonDf";
			TactB = "HaloFreeFall_B";
			TactF = "HaloFreeFall_F";
			TactL = "HaloFreeFall_L";
			TactLB = "HaloFreeFall_BL";
			TactLF = "HaloFreeFall_FL";
			TactR = "HaloFreeFall_R";
			TactRB = "HaloFreeFall_BR";
			TactRF = "HaloFreeFall_FR";
			upDegree = "ManPosFreefall";
			WalkB = "HaloFreeFall_B";
			WalkF = "HaloFreeFall_F";
			WalkL = "HaloFreeFall_L";
			WalkLB = "HaloFreeFall_BL";
			WalkLF = "HaloFreeFall_FL";
			WalkR = "HaloFreeFall_R";
			WalkRB = "HaloFreeFall_BR";
			WalkRF = "HaloFreeFall_FR";
		};
		class passenger_bench_1Actions: FFV_BaseActions
		{
			Binoculars = "passenger_bench_1_Aim_Binoc";
			civil = "passenger_bench_1_Idle_Unarmed";
			default = "passenger_bench_1_Aim";
			die = "passenger_bench_1_Die";
			HandGunOn = "passenger_bench_1_Aim_Pistol";
			Obstructed = "passenger_bench_1_Obstructed";
			PrimaryWeapon = "passenger_bench_1_Aim";
			Stand = "passenger_bench_1_Idle";
			stop = "passenger_bench_1_Aim";
			stopRelaxed = "passenger_bench_1_Aim";
			Unconscious = "passenger_bench_1_Die";
			upDegree = "ManPosCombat";
		};
		class passenger_bench_1BinocActions: passenger_bench_1Actions
		{
			binocOn = "";
			default = "passenger_bench_1_Aim_Binoc";
			stop = "passenger_bench_1_Aim_Binoc";
			stopRelaxed = "passenger_bench_1_Aim_Binoc";
			upDegree = "ManPosBinocStand";
		};
		class passenger_bench_1BinocPistolActions: passenger_bench_1BinocActions
		{
			default = "passenger_bench_1_Aim_Pistol_Binoc";
			die = "passenger_bench_1_Die_Pistol";
			GetOutHigh = "AcrgPknlMstpSnonWnonDnon_AmovPercMstpSrasWpstDnon_getOutHigh";
			GetOutHighHemtt = "AcrgPknlMstpSnonWnonDnon_AmovPercMstpSrasWpstDnon_getOutHighHemtt";
			GetOutHighZamak = "AcrgPknlMstpSnonWnonDnon_AmovPercMstpSrasWpstDnon_getOutHighZamak";
			GetOutLow = "AcrgPknlMstpSnonWnonDnon_AmovPercMstpSrasWpstDnon_getOutLow";
			GetOutMedium = "AcrgPknlMstpSnonWnonDnon_AmovPercMstpSrasWpstDnon_getOutMedium";
			GetOutSDV = "AcrgPknlMstpSnonWnonDnon_AmovPercMstpSrasWpstDnon_getOutHigh";
			stop = "passenger_bench_1_Aim_Pistol_Binoc";
			stopRelaxed = "passenger_bench_1_Aim_Pistol_Binoc";
			Unconscious = "passenger_bench_1_Die_Pistol";
		};
		class passenger_bench_1BinocUnarmedActions: passenger_bench_1BinocActions
		{
			default = "passenger_bench_1_Aim_Unarmed_Binoc";
			die = "passenger_bench_1_Die_Pistol";
			GetOutHigh = "AcrgPknlMstpSnonWnonDnon_AmovPercMstpSnonWnonDnon_getOutHigh";
			GetOutHighHemtt = "AcrgPknlMstpSnonWnonDnon_AmovPercMstpSnonWnonDnon_getOutHighHemtt";
			GetOutHighZamak = "AcrgPknlMstpSnonWnonDnon_AmovPercMstpSnonWnonDnon_getOutHighZamak";
			GetOutLow = "AcrgPknlMstpSnonWnonDnon_AmovPercMstpSnonWnonDnon_getOutLow";
			GetOutMedium = "AcrgPknlMstpSnonWnonDnon_AmovPercMstpSnonWnonDnon_getOutMedium";
			GetOutSDV = "AcrgPknlMstpSnonWnonDnon_AmovPercMstpSnonWnonDnon_getOutHigh";
			stop = "passenger_bench_1_Aim_Unarmed_Binoc";
			stopRelaxed = "passenger_bench_1_Aim_Unarmed_Binoc";
			Unconscious = "passenger_bench_1_Die_Pistol";
		};
		class passenger_bench_1DeadActions: FFV_BaseActions
		{
			default = "passenger_bench_1_Die";
			die = "passenger_bench_1_Die";
			stop = "passenger_bench_1_Die";
			Unconscious = "passenger_bench_1_Die";
		};
		class passenger_bench_1DeadPistolActions: FFV_BaseActions
		{
			default = "passenger_bench_1_Die_Pistol";
			die = "passenger_bench_1_Die_Pistol";
			stop = "passenger_bench_1_Die_Pistol";
			Unconscious = "passenger_bench_1_Die_Pistol";
		};
		class passenger_bench_1IdleActions: passenger_bench_1Actions
		{
			Combat = "passenger_bench_1_Aim";
			default = "passenger_bench_1_Idle";
			fireNotPossible = "passenger_bench_1_Aim";
			PlayerStand = "passenger_bench_1_Aim";
			stop = "passenger_bench_1_Idle";
			stopRelaxed = "passenger_bench_1_Idle";
			upDegree = "ManPosStand";
		};
		class passenger_bench_1IdlePistolActions: passenger_bench_1Actions
		{
			Combat = "passenger_bench_1_Aim_Pistol";
			default = "passenger_bench_1_Idle_Pistol";
			die = "passenger_bench_1_Die_Pistol";
			fireNotPossible = "passenger_bench_1_Aim_Pistol";
			GetOutHigh = "AcrgPknlMstpSnonWnonDnon_AmovPercMstpSrasWpstDnon_getOutHigh";
			GetOutHighHemtt = "AcrgPknlMstpSnonWnonDnon_AmovPercMstpSrasWpstDnon_getOutHighHemtt";
			GetOutHighZamak = "AcrgPknlMstpSnonWnonDnon_AmovPercMstpSrasWpstDnon_getOutHighZamak";
			GetOutLow = "AcrgPknlMstpSnonWnonDnon_AmovPercMstpSrasWpstDnon_getOutLow";
			GetOutMedium = "AcrgPknlMstpSnonWnonDnon_AmovPercMstpSrasWpstDnon_getOutMedium";
			GetOutSDV = "AcrgPknlMstpSnonWnonDnon_AmovPercMstpSrasWpstDnon_getOutHigh";
			PlayerStand = "passenger_bench_1_Aim_Pistol";
			Stand = "passenger_bench_1_Idle_Pistol";
			stop = "passenger_bench_1_Idle_Pistol";
			stopRelaxed = "passenger_bench_1_Idle_Pistol";
			Unconscious = "passenger_bench_1_Die_Pistol";
			upDegree = "ManPosHandGunStand";
		};
		class passenger_bench_1IdleUnarmedActions: FFV_BaseActions
		{
			Binoculars = "passenger_bench_1_Aim_Unarmed_Binoc";
			civil = "passenger_bench_1_Idle_Unarmed";
			default = "passenger_bench_1_Idle_Unarmed";
			die = "passenger_bench_1_Die_Pistol";
			GetOutHigh = "AcrgPknlMstpSnonWnonDnon_AmovPercMstpSnonWnonDnon_getOutHigh";
			GetOutHighHemtt = "AcrgPknlMstpSnonWnonDnon_AmovPercMstpSnonWnonDnon_getOutHighHemtt";
			GetOutHighZamak = "AcrgPknlMstpSnonWnonDnon_AmovPercMstpSnonWnonDnon_getOutHighZamak";
			GetOutLow = "AcrgPknlMstpSnonWnonDnon_AmovPercMstpSnonWnonDnon_getOutLow";
			GetOutMedium = "AcrgPknlMstpSnonWnonDnon_AmovPercMstpSnonWnonDnon_getOutMedium";
			GetOutSDV = "AcrgPknlMstpSnonWnonDnon_AmovPercMstpSnonWnonDnon_getOutHigh";
			HandGunOn = "passenger_bench_1_Aim_Pistol";
			PrimaryWeapon = "passenger_bench_1_Aim";
			Stand = "passenger_bench_1_Idle_Unarmed";
			stop = "passenger_bench_1_Idle_Unarmed";
			stopRelaxed = "passenger_bench_1_Idle_Unarmed";
			throwGrenade[] = {"GestureThrowGrenadeUna", "Gesture"};
			Unconscious = "passenger_bench_1_Die_Pistol";
			upDegree = "ManPosNoWeapon";
		};
		class passenger_bench_1ObstructedActions: passenger_bench_1Actions
		{
			Combat = "passenger_bench_1_Aim";
			default = "passenger_bench_1_Obstructed";
			fireNotPossible = "passenger_bench_1_Obstructed";
			PlayerStand = "passenger_bench_1_Obstructed";
			stop = "passenger_bench_1_Obstructed";
			stopRelaxed = "passenger_bench_1_Obstructed";
		};
		class passenger_bench_1ObstructedPistolActions: passenger_bench_1PistolActions
		{
			Combat = "passenger_bench_1_Aim_Pistol";
			default = "passenger_bench_1_Obstructed_Pistol";
			fireNotPossible = "passenger_bench_1_Obstructed_Pistol";
			PlayerStand = "passenger_bench_1_Obstructed_Pistol";
			Stand = "passenger_bench_1_Obstructed_Pistol";
			stop = "passenger_bench_1_Obstructed_Pistol";
			stopRelaxed = "passenger_bench_1_Obstructed_Pistol";
		};
		class passenger_bench_1PistolActions: passenger_bench_1Actions
		{
			Binoculars = "passenger_bench_1_Aim_Pistol_Binoc";
			default = "passenger_bench_1_Aim_Pistol";
			die = "passenger_bench_1_Die_Pistol";
			GetOutHigh = "AcrgPknlMstpSnonWnonDnon_AmovPercMstpSrasWpstDnon_getOutHigh";
			GetOutHighHemtt = "AcrgPknlMstpSnonWnonDnon_AmovPercMstpSrasWpstDnon_getOutHighHemtt";
			GetOutHighZamak = "AcrgPknlMstpSnonWnonDnon_AmovPercMstpSrasWpstDnon_getOutHighZamak";
			GetOutLow = "AcrgPknlMstpSnonWnonDnon_AmovPercMstpSrasWpstDnon_getOutLow";
			GetOutMedium = "AcrgPknlMstpSnonWnonDnon_AmovPercMstpSrasWpstDnon_getOutMedium";
			GetOutSDV = "AcrgPknlMstpSnonWnonDnon_AmovPercMstpSrasWpstDnon_getOutHigh";
			Obstructed = "passenger_bench_1_Obstructed_Pistol";
			Stand = "passenger_bench_1_Idle_Pistol";
			stop = "passenger_bench_1_Aim_Pistol";
			stopRelaxed = "passenger_bench_1_Aim_Pistol";
			throwGrenade[] = {"GestureThrowGrenadePistol", "Gesture"};
			Unconscious = "passenger_bench_1_Die_Pistol";
			upDegree = "ManPosHandGunStand";
		};
		class passenger_boat_1Actions: FFV_BaseActions
		{
			Binoculars = "passenger_boat_1_Aim_Binoc";
			civil = "passenger_boat_1_Idle_Unarmed";
			default = "passenger_boat_1_Aim";
			die = "passenger_boat_1_Die";
			HandGunOn = "passenger_boat_1_Aim_Pistol";
			Obstructed = "passenger_boat_1_Obstructed";
			PrimaryWeapon = "passenger_boat_1_Aim";
			Stand = "passenger_boat_1_Idle";
			stop = "passenger_boat_1_Aim";
			stopRelaxed = "passenger_boat_1_Aim";
			Unconscious = "passenger_boat_1_Die";
			upDegree = "ManPosCombat";
		};
		class passenger_boat_1BinocActions: passenger_boat_1Actions
		{
			binocOn = "";
			default = "passenger_boat_1_Aim_Binoc";
			stop = "passenger_boat_1_Aim_Binoc";
			stopRelaxed = "passenger_boat_1_Aim_Binoc";
			upDegree = "ManPosBinocStand";
		};
		class passenger_boat_1BinocPistolActions: passenger_boat_1BinocActions
		{
			default = "passenger_boat_1_Aim_Pistol_Binoc";
			die = "passenger_boat_1_Die_Pistol";
			GetOutHigh = "AcrgPknlMstpSnonWnonDnon_AmovPercMstpSrasWpstDnon_getOutHigh";
			GetOutHighHemtt = "AcrgPknlMstpSnonWnonDnon_AmovPercMstpSrasWpstDnon_getOutHighHemtt";
			GetOutHighZamak = "AcrgPknlMstpSnonWnonDnon_AmovPercMstpSrasWpstDnon_getOutHighZamak";
			GetOutLow = "AcrgPknlMstpSnonWnonDnon_AmovPercMstpSrasWpstDnon_getOutLow";
			GetOutMedium = "AcrgPknlMstpSnonWnonDnon_AmovPercMstpSrasWpstDnon_getOutMedium";
			GetOutSDV = "AcrgPknlMstpSnonWnonDnon_AmovPercMstpSrasWpstDnon_getOutHigh";
			stop = "passenger_boat_1_Aim_Pistol_Binoc";
			stopRelaxed = "passenger_boat_1_Aim_Pistol_Binoc";
			Unconscious = "passenger_boat_1_Die_Pistol";
		};
		class passenger_boat_1BinocUnarmedActions: passenger_boat_1BinocActions
		{
			default = "passenger_boat_1_Aim_Unarmed_Binoc";
			die = "passenger_boat_1_Die_Pistol";
			GetOutHigh = "AcrgPknlMstpSnonWnonDnon_AmovPercMstpSnonWnonDnon_getOutHigh";
			GetOutHighHemtt = "AcrgPknlMstpSnonWnonDnon_AmovPercMstpSnonWnonDnon_getOutHighHemtt";
			GetOutHighZamak = "AcrgPknlMstpSnonWnonDnon_AmovPercMstpSnonWnonDnon_getOutHighZamak";
			GetOutLow = "AcrgPknlMstpSnonWnonDnon_AmovPercMstpSnonWnonDnon_getOutLow";
			GetOutMedium = "AcrgPknlMstpSnonWnonDnon_AmovPercMstpSnonWnonDnon_getOutMedium";
			GetOutSDV = "AcrgPknlMstpSnonWnonDnon_AmovPercMstpSnonWnonDnon_getOutHigh";
			stop = "passenger_boat_1_Aim_Unarmed_Binoc";
			stopRelaxed = "passenger_boat_1_Aim_Unarmed_Binoc";
			Unconscious = "passenger_boat_1_Die_Pistol";
		};
		class passenger_boat_1DeadActions: FFV_BaseActions
		{
			default = "passenger_boat_1_Die";
			die = "passenger_boat_1_Die";
			stop = "passenger_boat_1_Die";
			Unconscious = "passenger_boat_1_Die";
		};
		class passenger_boat_1DeadPistolActions: FFV_BaseActions
		{
			default = "passenger_boat_1_Die_Pistol";
			die = "passenger_boat_1_Die_Pistol";
			stop = "passenger_boat_1_Die_Pistol";
			Unconscious = "passenger_boat_1_Die_Pistol";
		};
		class passenger_boat_1IdleActions: passenger_boat_1Actions
		{
			Combat = "passenger_boat_1_Aim";
			default = "passenger_boat_1_Idle";
			fireNotPossible = "passenger_boat_1_Aim";
			PlayerStand = "passenger_boat_1_Aim";
			stop = "passenger_boat_1_Idle";
			stopRelaxed = "passenger_boat_1_Idle";
			upDegree = "ManPosStand";
		};
		class passenger_boat_1IdlePistolActions: passenger_boat_1Actions
		{
			Combat = "passenger_boat_1_Aim_Pistol";
			default = "passenger_boat_1_Idle_Pistol";
			die = "passenger_boat_1_Die_Pistol";
			fireNotPossible = "passenger_boat_1_Aim_Pistol";
			GetOutHigh = "AcrgPknlMstpSnonWnonDnon_AmovPercMstpSrasWpstDnon_getOutHigh";
			GetOutHighHemtt = "AcrgPknlMstpSnonWnonDnon_AmovPercMstpSrasWpstDnon_getOutHighHemtt";
			GetOutHighZamak = "AcrgPknlMstpSnonWnonDnon_AmovPercMstpSrasWpstDnon_getOutHighZamak";
			GetOutLow = "AcrgPknlMstpSnonWnonDnon_AmovPercMstpSrasWpstDnon_getOutLow";
			GetOutMedium = "AcrgPknlMstpSnonWnonDnon_AmovPercMstpSrasWpstDnon_getOutMedium";
			GetOutSDV = "AcrgPknlMstpSnonWnonDnon_AmovPercMstpSrasWpstDnon_getOutHigh";
			PlayerStand = "passenger_boat_1_Aim_Pistol";
			Stand = "passenger_boat_1_Idle_Pistol";
			stop = "passenger_boat_1_Idle_Pistol";
			stopRelaxed = "passenger_boat_1_Idle_Pistol";
			Unconscious = "passenger_boat_1_Die_Pistol";
			upDegree = "ManPosHandGunStand";
		};
		class passenger_boat_1IdleUnarmedActions: FFV_BaseActions
		{
			Binoculars = "passenger_boat_1_Aim_Unarmed_Binoc";
			civil = "passenger_boat_1_Idle_Unarmed";
			default = "passenger_boat_1_Idle_Unarmed";
			die = "passenger_boat_1_Die_Pistol";
			GetOutHigh = "AcrgPknlMstpSnonWnonDnon_AmovPercMstpSnonWnonDnon_getOutHigh";
			GetOutHighHemtt = "AcrgPknlMstpSnonWnonDnon_AmovPercMstpSnonWnonDnon_getOutHighHemtt";
			GetOutHighZamak = "AcrgPknlMstpSnonWnonDnon_AmovPercMstpSnonWnonDnon_getOutHighZamak";
			GetOutLow = "AcrgPknlMstpSnonWnonDnon_AmovPercMstpSnonWnonDnon_getOutLow";
			GetOutMedium = "AcrgPknlMstpSnonWnonDnon_AmovPercMstpSnonWnonDnon_getOutMedium";
			GetOutSDV = "AcrgPknlMstpSnonWnonDnon_AmovPercMstpSnonWnonDnon_getOutHigh";
			HandGunOn = "passenger_boat_1_Aim_Pistol";
			PrimaryWeapon = "passenger_boat_1_Aim";
			Stand = "passenger_boat_1_Idle_Unarmed";
			stop = "passenger_boat_1_Idle_Unarmed";
			stopRelaxed = "passenger_boat_1_Idle_Unarmed";
			throwGrenade[] = {"GestureThrowGrenadeUna", "Gesture"};
			Unconscious = "passenger_boat_1_Die_Pistol";
			upDegree = "ManPosNoWeapon";
		};
		class passenger_boat_1ObstructedActions: passenger_boat_1Actions
		{
			Combat = "passenger_boat_1_Aim";
			default = "passenger_boat_1_Obstructed";
			fireNotPossible = "passenger_boat_1_Obstructed";
			PlayerStand = "passenger_boat_1_Obstructed";
			stop = "passenger_boat_1_Obstructed";
			stopRelaxed = "passenger_boat_1_Obstructed";
		};
		class passenger_boat_1ObstructedPistolActions: passenger_boat_1PistolActions
		{
			Combat = "passenger_boat_1_Aim_Pistol";
			default = "passenger_boat_1_Obstructed_Pistol";
			fireNotPossible = "passenger_boat_1_Obstructed_Pistol";
			PlayerStand = "passenger_boat_1_Obstructed_Pistol";
			Stand = "passenger_boat_1_Obstructed_Pistol";
			stop = "passenger_boat_1_Obstructed_Pistol";
			stopRelaxed = "passenger_boat_1_Obstructed_Pistol";
		};
		class passenger_boat_1PistolActions: passenger_boat_1Actions
		{
			Binoculars = "passenger_boat_1_Aim_Pistol_Binoc";
			default = "passenger_boat_1_Aim_Pistol";
			die = "passenger_boat_1_Die_Pistol";
			GetOutHigh = "AcrgPknlMstpSnonWnonDnon_AmovPercMstpSrasWpstDnon_getOutHigh";
			GetOutHighHemtt = "AcrgPknlMstpSnonWnonDnon_AmovPercMstpSrasWpstDnon_getOutHighHemtt";
			GetOutHighZamak = "AcrgPknlMstpSnonWnonDnon_AmovPercMstpSrasWpstDnon_getOutHighZamak";
			GetOutLow = "AcrgPknlMstpSnonWnonDnon_AmovPercMstpSrasWpstDnon_getOutLow";
			GetOutMedium = "AcrgPknlMstpSnonWnonDnon_AmovPercMstpSrasWpstDnon_getOutMedium";
			GetOutSDV = "AcrgPknlMstpSnonWnonDnon_AmovPercMstpSrasWpstDnon_getOutHigh";
			Obstructed = "passenger_boat_1_Obstructed_Pistol";
			Stand = "passenger_boat_1_Idle_Pistol";
			stop = "passenger_boat_1_Aim_Pistol";
			stopRelaxed = "passenger_boat_1_Aim_Pistol";
			throwGrenade[] = {"GestureThrowGrenadePistol", "Gesture"};
			Unconscious = "passenger_boat_1_Die_Pistol";
			upDegree = "ManPosHandGunStand";
		};
		class passenger_boat_2Actions: FFV_BaseActions
		{
			Binoculars = "passenger_boat_2_Aim_Binoc";
			civil = "passenger_boat_2_Idle_Unarmed";
			default = "passenger_boat_2_Aim";
			die = "passenger_boat_2_Die";
			HandGunOn = "passenger_boat_2_Aim_Pistol";
			Obstructed = "passenger_boat_2_Obstructed";
			PrimaryWeapon = "passenger_boat_2_Aim";
			Stand = "passenger_boat_2_Idle";
			stop = "passenger_boat_2_Aim";
			stopRelaxed = "passenger_boat_2_Aim";
			Unconscious = "passenger_boat_2_Die";
			upDegree = "ManPosCombat";
		};
		class passenger_boat_2BinocActions: passenger_boat_2Actions
		{
			binocOn = "";
			default = "passenger_boat_2_Aim_Binoc";
			stop = "passenger_boat_2_Aim_Binoc";
			stopRelaxed = "passenger_boat_2_Aim_Binoc";
			upDegree = "ManPosBinocStand";
		};
		class passenger_boat_2BinocPistolActions: passenger_boat_2BinocActions
		{
			default = "passenger_boat_2_Aim_Pistol_Binoc";
			die = "passenger_boat_2_Die_Pistol";
			GetOutHigh = "AcrgPknlMstpSnonWnonDnon_AmovPercMstpSrasWpstDnon_getOutHigh";
			GetOutHighHemtt = "AcrgPknlMstpSnonWnonDnon_AmovPercMstpSrasWpstDnon_getOutHighHemtt";
			GetOutHighZamak = "AcrgPknlMstpSnonWnonDnon_AmovPercMstpSrasWpstDnon_getOutHighZamak";
			GetOutLow = "AcrgPknlMstpSnonWnonDnon_AmovPercMstpSrasWpstDnon_getOutLow";
			GetOutMedium = "AcrgPknlMstpSnonWnonDnon_AmovPercMstpSrasWpstDnon_getOutMedium";
			GetOutSDV = "AcrgPknlMstpSnonWnonDnon_AmovPercMstpSrasWpstDnon_getOutHigh";
			stop = "passenger_boat_2_Aim_Pistol_Binoc";
			stopRelaxed = "passenger_boat_2_Aim_Pistol_Binoc";
			Unconscious = "passenger_boat_2_Die_Pistol";
		};
		class passenger_boat_2BinocUnarmedActions: passenger_boat_2BinocActions
		{
			default = "passenger_boat_2_Aim_Unarmed_Binoc";
			die = "passenger_boat_2_Die_Pistol";
			GetOutHigh = "AcrgPknlMstpSnonWnonDnon_AmovPercMstpSnonWnonDnon_getOutHigh";
			GetOutHighHemtt = "AcrgPknlMstpSnonWnonDnon_AmovPercMstpSnonWnonDnon_getOutHighHemtt";
			GetOutHighZamak = "AcrgPknlMstpSnonWnonDnon_AmovPercMstpSnonWnonDnon_getOutHighZamak";
			GetOutLow = "AcrgPknlMstpSnonWnonDnon_AmovPercMstpSnonWnonDnon_getOutLow";
			GetOutMedium = "AcrgPknlMstpSnonWnonDnon_AmovPercMstpSnonWnonDnon_getOutMedium";
			GetOutSDV = "AcrgPknlMstpSnonWnonDnon_AmovPercMstpSnonWnonDnon_getOutHigh";
			stop = "passenger_boat_2_Aim_Unarmed_Binoc";
			stopRelaxed = "passenger_boat_2_Aim_Unarmed_Binoc";
			Unconscious = "passenger_boat_2_Die_Pistol";
		};
		class passenger_boat_2DeadActions: FFV_BaseActions
		{
			default = "passenger_boat_2_Die";
			die = "passenger_boat_2_Die";
			stop = "passenger_boat_2_Die";
			Unconscious = "passenger_boat_2_Die";
		};
		class passenger_boat_2DeadPistolActions: FFV_BaseActions
		{
			default = "passenger_boat_2_Die_Pistol";
			die = "passenger_boat_2_Die_Pistol";
			stop = "passenger_boat_2_Die_Pistol";
			Unconscious = "passenger_boat_2_Die_Pistol";
		};
		class passenger_boat_2IdleActions: passenger_boat_2Actions
		{
			Combat = "passenger_boat_2_Aim";
			default = "passenger_boat_2_Idle";
			fireNotPossible = "passenger_boat_2_Aim";
			PlayerStand = "passenger_boat_2_Aim";
			stop = "passenger_boat_2_Idle";
			stopRelaxed = "passenger_boat_2_Idle";
			upDegree = "ManPosStand";
		};
		class passenger_boat_2IdlePistolActions: passenger_boat_2Actions
		{
			Combat = "passenger_boat_2_Aim_Pistol";
			default = "passenger_boat_2_Idle_Pistol";
			die = "passenger_boat_2_Die_Pistol";
			fireNotPossible = "passenger_boat_2_Aim_Pistol";
			GetOutHigh = "AcrgPknlMstpSnonWnonDnon_AmovPercMstpSrasWpstDnon_getOutHigh";
			GetOutHighHemtt = "AcrgPknlMstpSnonWnonDnon_AmovPercMstpSrasWpstDnon_getOutHighHemtt";
			GetOutHighZamak = "AcrgPknlMstpSnonWnonDnon_AmovPercMstpSrasWpstDnon_getOutHighZamak";
			GetOutLow = "AcrgPknlMstpSnonWnonDnon_AmovPercMstpSrasWpstDnon_getOutLow";
			GetOutMedium = "AcrgPknlMstpSnonWnonDnon_AmovPercMstpSrasWpstDnon_getOutMedium";
			GetOutSDV = "AcrgPknlMstpSnonWnonDnon_AmovPercMstpSrasWpstDnon_getOutHigh";
			PlayerStand = "passenger_boat_2_Aim_Pistol";
			Stand = "passenger_boat_2_Idle_Pistol";
			stop = "passenger_boat_2_Idle_Pistol";
			stopRelaxed = "passenger_boat_2_Idle_Pistol";
			Unconscious = "passenger_boat_2_Die_Pistol";
			upDegree = "ManPosHandGunStand";
		};
		class passenger_boat_2IdleUnarmedActions: FFV_BaseActions
		{
			Binoculars = "passenger_boat_2_Aim_Unarmed_Binoc";
			civil = "passenger_boat_2_Idle_Unarmed";
			default = "passenger_boat_2_Idle_Unarmed";
			die = "passenger_boat_2_Die_Pistol";
			GetOutHigh = "AcrgPknlMstpSnonWnonDnon_AmovPercMstpSnonWnonDnon_getOutHigh";
			GetOutHighHemtt = "AcrgPknlMstpSnonWnonDnon_AmovPercMstpSnonWnonDnon_getOutHighHemtt";
			GetOutHighZamak = "AcrgPknlMstpSnonWnonDnon_AmovPercMstpSnonWnonDnon_getOutHighZamak";
			GetOutLow = "AcrgPknlMstpSnonWnonDnon_AmovPercMstpSnonWnonDnon_getOutLow";
			GetOutMedium = "AcrgPknlMstpSnonWnonDnon_AmovPercMstpSnonWnonDnon_getOutMedium";
			GetOutSDV = "AcrgPknlMstpSnonWnonDnon_AmovPercMstpSnonWnonDnon_getOutHigh";
			HandGunOn = "passenger_boat_2_Aim_Pistol";
			PrimaryWeapon = "passenger_boat_2_Aim";
			Stand = "passenger_boat_2_Idle_Unarmed";
			stop = "passenger_boat_2_Idle_Unarmed";
			stopRelaxed = "passenger_boat_2_Idle_Unarmed";
			throwGrenade[] = {"GestureThrowGrenadeUna", "Gesture"};
			Unconscious = "passenger_boat_2_Die_Pistol";
			upDegree = "ManPosNoWeapon";
		};
		class passenger_boat_2ObstructedActions: passenger_boat_2Actions
		{
			Combat = "passenger_boat_2_Aim";
			default = "passenger_boat_2_Obstructed";
			fireNotPossible = "passenger_boat_2_Obstructed";
			PlayerStand = "passenger_boat_2_Obstructed";
			stop = "passenger_boat_2_Obstructed";
			stopRelaxed = "passenger_boat_2_Obstructed";
		};
		class passenger_boat_2ObstructedPistolActions: passenger_boat_2PistolActions
		{
			Combat = "passenger_boat_2_Aim_Pistol";
			default = "passenger_boat_2_Obstructed_Pistol";
			fireNotPossible = "passenger_boat_2_Obstructed_Pistol";
			PlayerStand = "passenger_boat_2_Obstructed_Pistol";
			Stand = "passenger_boat_2_Obstructed_Pistol";
			stop = "passenger_boat_2_Obstructed_Pistol";
			stopRelaxed = "passenger_boat_2_Obstructed_Pistol";
		};
		class passenger_boat_2PistolActions: passenger_boat_2Actions
		{
			Binoculars = "passenger_boat_2_Aim_Pistol_Binoc";
			default = "passenger_boat_2_Aim_Pistol";
			die = "passenger_boat_2_Die_Pistol";
			GetOutHigh = "AcrgPknlMstpSnonWnonDnon_AmovPercMstpSrasWpstDnon_getOutHigh";
			GetOutHighHemtt = "AcrgPknlMstpSnonWnonDnon_AmovPercMstpSrasWpstDnon_getOutHighHemtt";
			GetOutHighZamak = "AcrgPknlMstpSnonWnonDnon_AmovPercMstpSrasWpstDnon_getOutHighZamak";
			GetOutLow = "AcrgPknlMstpSnonWnonDnon_AmovPercMstpSrasWpstDnon_getOutLow";
			GetOutMedium = "AcrgPknlMstpSnonWnonDnon_AmovPercMstpSrasWpstDnon_getOutMedium";
			GetOutSDV = "AcrgPknlMstpSnonWnonDnon_AmovPercMstpSrasWpstDnon_getOutHigh";
			Obstructed = "passenger_boat_2_Obstructed_Pistol";
			Stand = "passenger_boat_2_Idle_Pistol";
			stop = "passenger_boat_2_Aim_Pistol";
			stopRelaxed = "passenger_boat_2_Aim_Pistol";
			throwGrenade[] = {"GestureThrowGrenadePistol", "Gesture"};
			Unconscious = "passenger_boat_2_Die_Pistol";
			upDegree = "ManPosHandGunStand";
		};
		class passenger_boat_3Actions: FFV_BaseActions
		{
			Binoculars = "passenger_boat_3_Aim_Binoc";
			civil = "passenger_boat_3_Idle_Unarmed";
			default = "passenger_boat_3_Aim";
			die = "passenger_boat_3_Die";
			HandGunOn = "passenger_boat_3_Aim_Pistol";
			Obstructed = "passenger_boat_3_Obstructed";
			PrimaryWeapon = "passenger_boat_3_Aim";
			Stand = "passenger_boat_3_Idle";
			stop = "passenger_boat_3_Aim";
			stopRelaxed = "passenger_boat_3_Aim";
			Unconscious = "passenger_boat_3_Die";
			upDegree = "ManPosCombat";
		};
		class passenger_boat_3BinocActions: passenger_boat_3Actions
		{
			binocOn = "";
			default = "passenger_boat_3_Aim_Binoc";
			stop = "passenger_boat_3_Aim_Binoc";
			stopRelaxed = "passenger_boat_3_Aim_Binoc";
			upDegree = "ManPosBinocStand";
		};
		class passenger_boat_3BinocPistolActions: passenger_boat_3BinocActions
		{
			default = "passenger_boat_3_Aim_Pistol_Binoc";
			die = "passenger_boat_3_Die_Pistol";
			GetOutHigh = "AcrgPknlMstpSnonWnonDnon_AmovPercMstpSrasWpstDnon_getOutHigh";
			GetOutHighHemtt = "AcrgPknlMstpSnonWnonDnon_AmovPercMstpSrasWpstDnon_getOutHighHemtt";
			GetOutHighZamak = "AcrgPknlMstpSnonWnonDnon_AmovPercMstpSrasWpstDnon_getOutHighZamak";
			GetOutLow = "AcrgPknlMstpSnonWnonDnon_AmovPercMstpSrasWpstDnon_getOutLow";
			GetOutMedium = "AcrgPknlMstpSnonWnonDnon_AmovPercMstpSrasWpstDnon_getOutMedium";
			GetOutSDV = "AcrgPknlMstpSnonWnonDnon_AmovPercMstpSrasWpstDnon_getOutHigh";
			stop = "passenger_boat_3_Aim_Pistol_Binoc";
			stopRelaxed = "passenger_boat_3_Aim_Pistol_Binoc";
			Unconscious = "passenger_boat_3_Die_Pistol";
		};
		class passenger_boat_3BinocUnarmedActions: passenger_boat_3BinocActions
		{
			default = "passenger_boat_3_Aim_Unarmed_Binoc";
			die = "passenger_boat_3_Die_Pistol";
			GetOutHigh = "AcrgPknlMstpSnonWnonDnon_AmovPercMstpSnonWnonDnon_getOutHigh";
			GetOutHighHemtt = "AcrgPknlMstpSnonWnonDnon_AmovPercMstpSnonWnonDnon_getOutHighHemtt";
			GetOutHighZamak = "AcrgPknlMstpSnonWnonDnon_AmovPercMstpSnonWnonDnon_getOutHighZamak";
			GetOutLow = "AcrgPknlMstpSnonWnonDnon_AmovPercMstpSnonWnonDnon_getOutLow";
			GetOutMedium = "AcrgPknlMstpSnonWnonDnon_AmovPercMstpSnonWnonDnon_getOutMedium";
			GetOutSDV = "AcrgPknlMstpSnonWnonDnon_AmovPercMstpSnonWnonDnon_getOutHigh";
			stop = "passenger_boat_3_Aim_Unarmed_Binoc";
			stopRelaxed = "passenger_boat_3_Aim_Unarmed_Binoc";
			Unconscious = "passenger_boat_3_Die_Pistol";
		};
		class passenger_boat_3DeadActions: FFV_BaseActions
		{
			default = "passenger_boat_3_Die";
			die = "passenger_boat_3_Die";
			stop = "passenger_boat_3_Die";
			Unconscious = "passenger_boat_3_Die";
		};
		class passenger_boat_3DeadPistolActions: FFV_BaseActions
		{
			default = "passenger_boat_3_Die_Pistol";
			die = "passenger_boat_3_Die_Pistol";
			stop = "passenger_boat_3_Die_Pistol";
			Unconscious = "passenger_boat_3_Die_Pistol";
		};
		class passenger_boat_3IdleActions: passenger_boat_3Actions
		{
			Combat = "passenger_boat_3_Aim";
			default = "passenger_boat_3_Idle";
			fireNotPossible = "passenger_boat_3_Aim";
			PlayerStand = "passenger_boat_3_Aim";
			stop = "passenger_boat_3_Idle";
			stopRelaxed = "passenger_boat_3_Idle";
			upDegree = "ManPosStand";
		};
		class passenger_boat_3IdlePistolActions: passenger_boat_3Actions
		{
			Combat = "passenger_boat_3_Aim_Pistol";
			default = "passenger_boat_3_Idle_Pistol";
			die = "passenger_boat_3_Die_Pistol";
			fireNotPossible = "passenger_boat_3_Aim_Pistol";
			GetOutHigh = "AcrgPknlMstpSnonWnonDnon_AmovPercMstpSrasWpstDnon_getOutHigh";
			GetOutHighHemtt = "AcrgPknlMstpSnonWnonDnon_AmovPercMstpSrasWpstDnon_getOutHighHemtt";
			GetOutHighZamak = "AcrgPknlMstpSnonWnonDnon_AmovPercMstpSrasWpstDnon_getOutHighZamak";
			GetOutLow = "AcrgPknlMstpSnonWnonDnon_AmovPercMstpSrasWpstDnon_getOutLow";
			GetOutMedium = "AcrgPknlMstpSnonWnonDnon_AmovPercMstpSrasWpstDnon_getOutMedium";
			GetOutSDV = "AcrgPknlMstpSnonWnonDnon_AmovPercMstpSrasWpstDnon_getOutHigh";
			PlayerStand = "passenger_boat_3_Aim_Pistol";
			Stand = "passenger_boat_3_Idle_Pistol";
			stop = "passenger_boat_3_Idle_Pistol";
			stopRelaxed = "passenger_boat_3_Idle_Pistol";
			Unconscious = "passenger_boat_3_Die_Pistol";
			upDegree = "ManPosHandGunStand";
		};
		class passenger_boat_3IdleUnarmedActions: FFV_BaseActions
		{
			Binoculars = "passenger_boat_3_Aim_Unarmed_Binoc";
			civil = "passenger_boat_3_Idle_Unarmed";
			default = "passenger_boat_3_Idle_Unarmed";
			die = "passenger_boat_3_Die_Pistol";
			GetOutHigh = "AcrgPknlMstpSnonWnonDnon_AmovPercMstpSnonWnonDnon_getOutHigh";
			GetOutHighHemtt = "AcrgPknlMstpSnonWnonDnon_AmovPercMstpSnonWnonDnon_getOutHighHemtt";
			GetOutHighZamak = "AcrgPknlMstpSnonWnonDnon_AmovPercMstpSnonWnonDnon_getOutHighZamak";
			GetOutLow = "AcrgPknlMstpSnonWnonDnon_AmovPercMstpSnonWnonDnon_getOutLow";
			GetOutMedium = "AcrgPknlMstpSnonWnonDnon_AmovPercMstpSnonWnonDnon_getOutMedium";
			GetOutSDV = "AcrgPknlMstpSnonWnonDnon_AmovPercMstpSnonWnonDnon_getOutHigh";
			HandGunOn = "passenger_boat_3_Aim_Pistol";
			PrimaryWeapon = "passenger_boat_3_Aim";
			Stand = "passenger_boat_3_Idle_Unarmed";
			stop = "passenger_boat_3_Idle_Unarmed";
			stopRelaxed = "passenger_boat_3_Idle_Unarmed";
			throwGrenade[] = {"GestureThrowGrenadeUna", "Gesture"};
			Unconscious = "passenger_boat_3_Die_Pistol";
			upDegree = "ManPosNoWeapon";
		};
		class passenger_boat_3ObstructedActions: passenger_boat_3Actions
		{
			Combat = "passenger_boat_3_Aim";
			default = "passenger_boat_3_Obstructed";
			fireNotPossible = "passenger_boat_3_Obstructed";
			PlayerStand = "passenger_boat_3_Obstructed";
			stop = "passenger_boat_3_Obstructed";
			stopRelaxed = "passenger_boat_3_Obstructed";
		};
		class passenger_boat_3ObstructedPistolActions: passenger_boat_3PistolActions
		{
			Combat = "passenger_boat_3_Aim_Pistol";
			default = "passenger_boat_3_Obstructed_Pistol";
			fireNotPossible = "passenger_boat_3_Obstructed_Pistol";
			PlayerStand = "passenger_boat_3_Obstructed_Pistol";
			Stand = "passenger_boat_3_Obstructed_Pistol";
			stop = "passenger_boat_3_Obstructed_Pistol";
			stopRelaxed = "passenger_boat_3_Obstructed_Pistol";
		};
		class passenger_boat_3PistolActions: passenger_boat_3Actions
		{
			Binoculars = "passenger_boat_3_Aim_Pistol_Binoc";
			default = "passenger_boat_3_Aim_Pistol";
			die = "passenger_boat_3_Die_Pistol";
			GetOutHigh = "AcrgPknlMstpSnonWnonDnon_AmovPercMstpSrasWpstDnon_getOutHigh";
			GetOutHighHemtt = "AcrgPknlMstpSnonWnonDnon_AmovPercMstpSrasWpstDnon_getOutHighHemtt";
			GetOutHighZamak = "AcrgPknlMstpSnonWnonDnon_AmovPercMstpSrasWpstDnon_getOutHighZamak";
			GetOutLow = "AcrgPknlMstpSnonWnonDnon_AmovPercMstpSrasWpstDnon_getOutLow";
			GetOutMedium = "AcrgPknlMstpSnonWnonDnon_AmovPercMstpSrasWpstDnon_getOutMedium";
			GetOutSDV = "AcrgPknlMstpSnonWnonDnon_AmovPercMstpSrasWpstDnon_getOutHigh";
			Obstructed = "passenger_boat_3_Obstructed_Pistol";
			Stand = "passenger_boat_3_Idle_Pistol";
			stop = "passenger_boat_3_Aim_Pistol";
			stopRelaxed = "passenger_boat_3_Aim_Pistol";
			throwGrenade[] = {"GestureThrowGrenadePistol", "Gesture"};
			Unconscious = "passenger_boat_3_Die_Pistol";
			upDegree = "ManPosHandGunStand";
		};
		class passenger_boat_4Actions: FFV_BaseActions
		{
			Binoculars = "passenger_boat_4_Aim_Binoc";
			civil = "passenger_boat_4_Idle_Unarmed";
			default = "passenger_boat_4_Aim";
			die = "passenger_boat_4_Die";
			HandGunOn = "passenger_boat_4_Aim_Pistol";
			Obstructed = "passenger_boat_4_Obstructed";
			PrimaryWeapon = "passenger_boat_4_Aim";
			Stand = "passenger_boat_4_Idle";
			stop = "passenger_boat_4_Aim";
			stopRelaxed = "passenger_boat_4_Aim";
			Unconscious = "passenger_boat_4_Die";
			upDegree = "ManPosCombat";
		};
		class passenger_boat_4BinocActions: passenger_boat_4Actions
		{
			binocOn = "";
			default = "passenger_boat_4_Aim_Binoc";
			stop = "passenger_boat_4_Aim_Binoc";
			stopRelaxed = "passenger_boat_4_Aim_Binoc";
			upDegree = "ManPosBinocStand";
		};
		class passenger_boat_4BinocPistolActions: passenger_boat_4BinocActions
		{
			default = "passenger_boat_4_Aim_Pistol_Binoc";
			die = "passenger_boat_4_Die_Pistol";
			GetOutHigh = "AcrgPknlMstpSnonWnonDnon_AmovPercMstpSrasWpstDnon_getOutHigh";
			GetOutHighHemtt = "AcrgPknlMstpSnonWnonDnon_AmovPercMstpSrasWpstDnon_getOutHighHemtt";
			GetOutHighZamak = "AcrgPknlMstpSnonWnonDnon_AmovPercMstpSrasWpstDnon_getOutHighZamak";
			GetOutLow = "AcrgPknlMstpSnonWnonDnon_AmovPercMstpSrasWpstDnon_getOutLow";
			GetOutMedium = "AcrgPknlMstpSnonWnonDnon_AmovPercMstpSrasWpstDnon_getOutMedium";
			GetOutSDV = "AcrgPknlMstpSnonWnonDnon_AmovPercMstpSrasWpstDnon_getOutHigh";
			stop = "passenger_boat_4_Aim_Pistol_Binoc";
			stopRelaxed = "passenger_boat_4_Aim_Pistol_Binoc";
			Unconscious = "passenger_boat_4_Die_Pistol";
		};
		class passenger_boat_4BinocUnarmedActions: passenger_boat_4BinocActions
		{
			default = "passenger_boat_4_Aim_Unarmed_Binoc";
			die = "passenger_boat_4_Die_Pistol";
			GetOutHigh = "AcrgPknlMstpSnonWnonDnon_AmovPercMstpSnonWnonDnon_getOutHigh";
			GetOutHighHemtt = "AcrgPknlMstpSnonWnonDnon_AmovPercMstpSnonWnonDnon_getOutHighHemtt";
			GetOutHighZamak = "AcrgPknlMstpSnonWnonDnon_AmovPercMstpSnonWnonDnon_getOutHighZamak";
			GetOutLow = "AcrgPknlMstpSnonWnonDnon_AmovPercMstpSnonWnonDnon_getOutLow";
			GetOutMedium = "AcrgPknlMstpSnonWnonDnon_AmovPercMstpSnonWnonDnon_getOutMedium";
			GetOutSDV = "AcrgPknlMstpSnonWnonDnon_AmovPercMstpSnonWnonDnon_getOutHigh";
			stop = "passenger_boat_4_Aim_Unarmed_Binoc";
			stopRelaxed = "passenger_boat_4_Aim_Unarmed_Binoc";
			Unconscious = "passenger_boat_4_Die_Pistol";
		};
		class passenger_boat_4DeadActions: FFV_BaseActions
		{
			default = "passenger_boat_4_Die";
			die = "passenger_boat_4_Die";
			stop = "passenger_boat_4_Die";
			Unconscious = "passenger_boat_4_Die";
		};
		class passenger_boat_4DeadPistolActions: FFV_BaseActions
		{
			default = "passenger_boat_4_Die_Pistol";
			die = "passenger_boat_4_Die_Pistol";
			stop = "passenger_boat_4_Die_Pistol";
			Unconscious = "passenger_boat_4_Die_Pistol";
		};
		class passenger_boat_4IdleActions: passenger_boat_4Actions
		{
			Combat = "passenger_boat_4_Aim";
			default = "passenger_boat_4_Idle";
			fireNotPossible = "passenger_boat_4_Aim";
			PlayerStand = "passenger_boat_4_Aim";
			stop = "passenger_boat_4_Idle";
			stopRelaxed = "passenger_boat_4_Idle";
			upDegree = "ManPosStand";
		};
		class passenger_boat_4IdlePistolActions: passenger_boat_4Actions
		{
			Combat = "passenger_boat_4_Aim_Pistol";
			default = "passenger_boat_4_Idle_Pistol";
			die = "passenger_boat_4_Die_Pistol";
			fireNotPossible = "passenger_boat_4_Aim_Pistol";
			GetOutHigh = "AcrgPknlMstpSnonWnonDnon_AmovPercMstpSrasWpstDnon_getOutHigh";
			GetOutHighHemtt = "AcrgPknlMstpSnonWnonDnon_AmovPercMstpSrasWpstDnon_getOutHighHemtt";
			GetOutHighZamak = "AcrgPknlMstpSnonWnonDnon_AmovPercMstpSrasWpstDnon_getOutHighZamak";
			GetOutLow = "AcrgPknlMstpSnonWnonDnon_AmovPercMstpSrasWpstDnon_getOutLow";
			GetOutMedium = "AcrgPknlMstpSnonWnonDnon_AmovPercMstpSrasWpstDnon_getOutMedium";
			GetOutSDV = "AcrgPknlMstpSnonWnonDnon_AmovPercMstpSrasWpstDnon_getOutHigh";
			PlayerStand = "passenger_boat_4_Aim_Pistol";
			Stand = "passenger_boat_4_Idle_Pistol";
			stop = "passenger_boat_4_Idle_Pistol";
			stopRelaxed = "passenger_boat_4_Idle_Pistol";
			Unconscious = "passenger_boat_4_Die_Pistol";
			upDegree = "ManPosHandGunStand";
		};
		class passenger_boat_4IdleUnarmedActions: FFV_BaseActions
		{
			Binoculars = "passenger_boat_4_Aim_Unarmed_Binoc";
			civil = "passenger_boat_4_Idle_Unarmed";
			default = "passenger_boat_4_Idle_Unarmed";
			die = "passenger_boat_4_Die_Pistol";
			GetOutHigh = "AcrgPknlMstpSnonWnonDnon_AmovPercMstpSnonWnonDnon_getOutHigh";
			GetOutHighHemtt = "AcrgPknlMstpSnonWnonDnon_AmovPercMstpSnonWnonDnon_getOutHighHemtt";
			GetOutHighZamak = "AcrgPknlMstpSnonWnonDnon_AmovPercMstpSnonWnonDnon_getOutHighZamak";
			GetOutLow = "AcrgPknlMstpSnonWnonDnon_AmovPercMstpSnonWnonDnon_getOutLow";
			GetOutMedium = "AcrgPknlMstpSnonWnonDnon_AmovPercMstpSnonWnonDnon_getOutMedium";
			GetOutSDV = "AcrgPknlMstpSnonWnonDnon_AmovPercMstpSnonWnonDnon_getOutHigh";
			HandGunOn = "passenger_boat_4_Aim_Pistol";
			PrimaryWeapon = "passenger_boat_4_Aim";
			Stand = "passenger_boat_4_Idle_Unarmed";
			stop = "passenger_boat_4_Idle_Unarmed";
			stopRelaxed = "passenger_boat_4_Idle_Unarmed";
			throwGrenade[] = {"GestureThrowGrenadeUna", "Gesture"};
			Unconscious = "passenger_boat_4_Die_Pistol";
			upDegree = "ManPosNoWeapon";
		};
		class passenger_boat_4ObstructedActions: passenger_boat_4Actions
		{
			Combat = "passenger_boat_4_Aim";
			default = "passenger_boat_4_Obstructed";
			fireNotPossible = "passenger_boat_4_Obstructed";
			PlayerStand = "passenger_boat_4_Obstructed";
			stop = "passenger_boat_4_Obstructed";
			stopRelaxed = "passenger_boat_4_Obstructed";
		};
		class passenger_boat_4ObstructedPistolActions: passenger_boat_4PistolActions
		{
			Combat = "passenger_boat_4_Aim_Pistol";
			default = "passenger_boat_4_Obstructed_Pistol";
			fireNotPossible = "passenger_boat_4_Obstructed_Pistol";
			PlayerStand = "passenger_boat_4_Obstructed_Pistol";
			Stand = "passenger_boat_4_Obstructed_Pistol";
			stop = "passenger_boat_4_Obstructed_Pistol";
			stopRelaxed = "passenger_boat_4_Obstructed_Pistol";
		};
		class passenger_boat_4PistolActions: passenger_boat_4Actions
		{
			Binoculars = "passenger_boat_4_Aim_Pistol_Binoc";
			default = "passenger_boat_4_Aim_Pistol";
			die = "passenger_boat_4_Die_Pistol";
			GetOutHigh = "AcrgPknlMstpSnonWnonDnon_AmovPercMstpSrasWpstDnon_getOutHigh";
			GetOutHighHemtt = "AcrgPknlMstpSnonWnonDnon_AmovPercMstpSrasWpstDnon_getOutHighHemtt";
			GetOutHighZamak = "AcrgPknlMstpSnonWnonDnon_AmovPercMstpSrasWpstDnon_getOutHighZamak";
			GetOutLow = "AcrgPknlMstpSnonWnonDnon_AmovPercMstpSrasWpstDnon_getOutLow";
			GetOutMedium = "AcrgPknlMstpSnonWnonDnon_AmovPercMstpSrasWpstDnon_getOutMedium";
			GetOutSDV = "AcrgPknlMstpSnonWnonDnon_AmovPercMstpSrasWpstDnon_getOutHigh";
			Obstructed = "passenger_boat_4_Obstructed_Pistol";
			Stand = "passenger_boat_4_Idle_Pistol";
			stop = "passenger_boat_4_Aim_Pistol";
			stopRelaxed = "passenger_boat_4_Aim_Pistol";
			throwGrenade[] = {"GestureThrowGrenadePistol", "Gesture"};
			Unconscious = "passenger_boat_4_Die_Pistol";
			upDegree = "ManPosHandGunStand";
		};
		class passenger_flatground_1Actions: FFV_BaseActions
		{
			Binoculars = "passenger_flatground_1_Aim_Binoc";
			civil = "passenger_flatground_1_Idle_Unarmed";
			default = "passenger_flatground_1_Aim";
			die = "passenger_flatground_1_Die";
			HandGunOn = "passenger_flatground_1_Aim_Pistol";
			Obstructed = "passenger_flatground_1_Obstructed";
			PrimaryWeapon = "passenger_flatground_1_Aim";
			Stand = "passenger_flatground_1_Idle";
			stop = "passenger_flatground_1_Aim";
			stopRelaxed = "passenger_flatground_1_Aim";
			Unconscious = "passenger_flatground_1_Die";
			upDegree = "ManPosCombat";
		};
		class passenger_flatground_1BinocActions: passenger_flatground_1Actions
		{
			binocOn = "";
			default = "passenger_flatground_1_Aim_Binoc";
			stop = "passenger_flatground_1_Aim_Binoc";
			stopRelaxed = "passenger_flatground_1_Aim_Binoc";
			upDegree = "ManPosBinocStand";
		};
		class passenger_flatground_1BinocPistolActions: passenger_flatground_1BinocActions
		{
			default = "passenger_flatground_1_Aim_Pistol_Binoc";
			die = "passenger_flatground_1_Die_Pistol";
			GetOutHigh = "AcrgPknlMstpSnonWnonDnon_AmovPercMstpSrasWpstDnon_getOutHigh";
			GetOutHighHemtt = "AcrgPknlMstpSnonWnonDnon_AmovPercMstpSrasWpstDnon_getOutHighHemtt";
			GetOutHighZamak = "AcrgPknlMstpSnonWnonDnon_AmovPercMstpSrasWpstDnon_getOutHighZamak";
			GetOutLow = "AcrgPknlMstpSnonWnonDnon_AmovPercMstpSrasWpstDnon_getOutLow";
			GetOutMedium = "AcrgPknlMstpSnonWnonDnon_AmovPercMstpSrasWpstDnon_getOutMedium";
			GetOutSDV = "AcrgPknlMstpSnonWnonDnon_AmovPercMstpSrasWpstDnon_getOutHigh";
			stop = "passenger_flatground_1_Aim_Pistol_Binoc";
			stopRelaxed = "passenger_flatground_1_Aim_Pistol_Binoc";
			Unconscious = "passenger_flatground_1_Die_Pistol";
		};
		class passenger_flatground_1BinocUnarmedActions: passenger_flatground_1BinocActions
		{
			default = "passenger_flatground_1_Aim_Unarmed_Binoc";
			die = "passenger_flatground_1_Die_Pistol";
			GetOutHigh = "AcrgPknlMstpSnonWnonDnon_AmovPercMstpSnonWnonDnon_getOutHigh";
			GetOutHighHemtt = "AcrgPknlMstpSnonWnonDnon_AmovPercMstpSnonWnonDnon_getOutHighHemtt";
			GetOutHighZamak = "AcrgPknlMstpSnonWnonDnon_AmovPercMstpSnonWnonDnon_getOutHighZamak";
			GetOutLow = "AcrgPknlMstpSnonWnonDnon_AmovPercMstpSnonWnonDnon_getOutLow";
			GetOutMedium = "AcrgPknlMstpSnonWnonDnon_AmovPercMstpSnonWnonDnon_getOutMedium";
			GetOutSDV = "AcrgPknlMstpSnonWnonDnon_AmovPercMstpSnonWnonDnon_getOutHigh";
			stop = "passenger_flatground_1_Aim_Unarmed_Binoc";
			stopRelaxed = "passenger_flatground_1_Aim_Unarmed_Binoc";
			Unconscious = "passenger_flatground_1_Die_Pistol";
		};
		class passenger_flatground_1DeadActions: FFV_BaseActions
		{
			default = "passenger_flatground_1_Die";
			die = "passenger_flatground_1_Die";
			stop = "passenger_flatground_1_Die";
			Unconscious = "passenger_flatground_1_Die";
		};
		class passenger_flatground_1DeadPistolActions: FFV_BaseActions
		{
			default = "passenger_flatground_1_Die_Pistol";
			die = "passenger_flatground_1_Die_Pistol";
			stop = "passenger_flatground_1_Die_Pistol";
			Unconscious = "passenger_flatground_1_Die_Pistol";
		};
		class passenger_flatground_1IdleActions: passenger_flatground_1Actions
		{
			Combat = "passenger_flatground_1_Aim";
			default = "passenger_flatground_1_Idle";
			fireNotPossible = "passenger_flatground_1_Aim";
			PlayerStand = "passenger_flatground_1_Aim";
			stop = "passenger_flatground_1_Idle";
			stopRelaxed = "passenger_flatground_1_Idle";
			upDegree = "ManPosStand";
		};
		class passenger_flatground_1IdlePistolActions: passenger_flatground_1Actions
		{
			Combat = "passenger_flatground_1_Aim_Pistol";
			default = "passenger_flatground_1_Idle_Pistol";
			die = "passenger_flatground_1_Die_Pistol";
			fireNotPossible = "passenger_flatground_1_Aim_Pistol";
			GetOutHigh = "AcrgPknlMstpSnonWnonDnon_AmovPercMstpSrasWpstDnon_getOutHigh";
			GetOutHighHemtt = "AcrgPknlMstpSnonWnonDnon_AmovPercMstpSrasWpstDnon_getOutHighHemtt";
			GetOutHighZamak = "AcrgPknlMstpSnonWnonDnon_AmovPercMstpSrasWpstDnon_getOutHighZamak";
			GetOutLow = "AcrgPknlMstpSnonWnonDnon_AmovPercMstpSrasWpstDnon_getOutLow";
			GetOutMedium = "AcrgPknlMstpSnonWnonDnon_AmovPercMstpSrasWpstDnon_getOutMedium";
			GetOutSDV = "AcrgPknlMstpSnonWnonDnon_AmovPercMstpSrasWpstDnon_getOutHigh";
			PlayerStand = "passenger_flatground_1_Aim_Pistol";
			Stand = "passenger_flatground_1_Idle_Pistol";
			stop = "passenger_flatground_1_Idle_Pistol";
			stopRelaxed = "passenger_flatground_1_Idle_Pistol";
			Unconscious = "passenger_flatground_1_Die_Pistol";
			upDegree = "ManPosHandGunStand";
		};
		class passenger_flatground_1IdleUnarmedActions: FFV_BaseActions
		{
			Binoculars = "passenger_flatground_1_Aim_Unarmed_Binoc";
			civil = "passenger_flatground_1_Idle_Unarmed";
			default = "passenger_flatground_1_Idle_Unarmed";
			die = "passenger_flatground_1_Die_Pistol";
			GetOutHigh = "AcrgPknlMstpSnonWnonDnon_AmovPercMstpSnonWnonDnon_getOutHigh";
			GetOutHighHemtt = "AcrgPknlMstpSnonWnonDnon_AmovPercMstpSnonWnonDnon_getOutHighHemtt";
			GetOutHighZamak = "AcrgPknlMstpSnonWnonDnon_AmovPercMstpSnonWnonDnon_getOutHighZamak";
			GetOutLow = "AcrgPknlMstpSnonWnonDnon_AmovPercMstpSnonWnonDnon_getOutLow";
			GetOutMedium = "AcrgPknlMstpSnonWnonDnon_AmovPercMstpSnonWnonDnon_getOutMedium";
			GetOutSDV = "AcrgPknlMstpSnonWnonDnon_AmovPercMstpSnonWnonDnon_getOutHigh";
			HandGunOn = "passenger_flatground_1_Aim_Pistol";
			PrimaryWeapon = "passenger_flatground_1_Aim";
			Stand = "passenger_flatground_1_Idle_Unarmed";
			stop = "passenger_flatground_1_Idle_Unarmed";
			stopRelaxed = "passenger_flatground_1_Idle_Unarmed";
			throwGrenade[] = {"GestureThrowGrenadeUna", "Gesture"};
			Unconscious = "passenger_flatground_1_Die_Pistol";
			upDegree = "ManPosNoWeapon";
		};
		class passenger_flatground_1ObstructedActions: passenger_flatground_1Actions
		{
			Combat = "passenger_flatground_1_Aim";
			default = "passenger_flatground_1_Obstructed";
			fireNotPossible = "passenger_flatground_1_Obstructed";
			PlayerStand = "passenger_flatground_1_Obstructed";
			stop = "passenger_flatground_1_Obstructed";
			stopRelaxed = "passenger_flatground_1_Obstructed";
		};
		class passenger_flatground_1ObstructedPistolActions: passenger_flatground_1PistolActions
		{
			Combat = "passenger_flatground_1_Aim_Pistol";
			default = "passenger_flatground_1_Obstructed_Pistol";
			fireNotPossible = "passenger_flatground_1_Obstructed_Pistol";
			PlayerStand = "passenger_flatground_1_Obstructed_Pistol";
			Stand = "passenger_flatground_1_Obstructed_Pistol";
			stop = "passenger_flatground_1_Obstructed_Pistol";
			stopRelaxed = "passenger_flatground_1_Obstructed_Pistol";
		};
		class passenger_flatground_1PistolActions: passenger_flatground_1Actions
		{
			Binoculars = "passenger_flatground_1_Aim_Pistol_Binoc";
			default = "passenger_flatground_1_Aim_Pistol";
			die = "passenger_flatground_1_Die_Pistol";
			GetOutHigh = "AcrgPknlMstpSnonWnonDnon_AmovPercMstpSrasWpstDnon_getOutHigh";
			GetOutHighHemtt = "AcrgPknlMstpSnonWnonDnon_AmovPercMstpSrasWpstDnon_getOutHighHemtt";
			GetOutHighZamak = "AcrgPknlMstpSnonWnonDnon_AmovPercMstpSrasWpstDnon_getOutHighZamak";
			GetOutLow = "AcrgPknlMstpSnonWnonDnon_AmovPercMstpSrasWpstDnon_getOutLow";
			GetOutMedium = "AcrgPknlMstpSnonWnonDnon_AmovPercMstpSrasWpstDnon_getOutMedium";
			GetOutSDV = "AcrgPknlMstpSnonWnonDnon_AmovPercMstpSrasWpstDnon_getOutHigh";
			Obstructed = "passenger_flatground_1_Obstructed_Pistol";
			Stand = "passenger_flatground_1_Idle_Pistol";
			stop = "passenger_flatground_1_Aim_Pistol";
			stopRelaxed = "passenger_flatground_1_Aim_Pistol";
			throwGrenade[] = {"GestureThrowGrenadePistol", "Gesture"};
			Unconscious = "passenger_flatground_1_Die_Pistol";
			upDegree = "ManPosHandGunStand";
		};
		class passenger_flatground_2Actions: FFV_BaseActions
		{
			Binoculars = "passenger_flatground_2_Aim_Binoc";
			civil = "passenger_flatground_2_Idle_Unarmed";
			default = "passenger_flatground_2_Aim";
			die = "passenger_flatground_2_Die";
			HandGunOn = "passenger_flatground_2_Aim_Pistol";
			Obstructed = "passenger_flatground_2_Obstructed";
			PrimaryWeapon = "passenger_flatground_2_Aim";
			Stand = "passenger_flatground_2_Idle";
			stop = "passenger_flatground_2_Aim";
			stopRelaxed = "passenger_flatground_2_Aim";
			Unconscious = "passenger_flatground_2_Die";
			upDegree = "ManPosCombat";
		};
		class passenger_flatground_2BinocActions: passenger_flatground_2Actions
		{
			binocOn = "";
			default = "passenger_flatground_2_Aim_Binoc";
			stop = "passenger_flatground_2_Aim_Binoc";
			stopRelaxed = "passenger_flatground_2_Aim_Binoc";
			upDegree = "ManPosBinocStand";
		};
		class passenger_flatground_2BinocPistolActions: passenger_flatground_2BinocActions
		{
			default = "passenger_flatground_2_Aim_Pistol_Binoc";
			die = "passenger_flatground_2_Die_Pistol";
			GetOutHigh = "AcrgPknlMstpSnonWnonDnon_AmovPercMstpSrasWpstDnon_getOutHigh";
			GetOutHighHemtt = "AcrgPknlMstpSnonWnonDnon_AmovPercMstpSrasWpstDnon_getOutHighHemtt";
			GetOutHighZamak = "AcrgPknlMstpSnonWnonDnon_AmovPercMstpSrasWpstDnon_getOutHighZamak";
			GetOutLow = "AcrgPknlMstpSnonWnonDnon_AmovPercMstpSrasWpstDnon_getOutLow";
			GetOutMedium = "AcrgPknlMstpSnonWnonDnon_AmovPercMstpSrasWpstDnon_getOutMedium";
			GetOutSDV = "AcrgPknlMstpSnonWnonDnon_AmovPercMstpSrasWpstDnon_getOutHigh";
			stop = "passenger_flatground_2_Aim_Pistol_Binoc";
			stopRelaxed = "passenger_flatground_2_Aim_Pistol_Binoc";
			Unconscious = "passenger_flatground_2_Die_Pistol";
		};
		class passenger_flatground_2BinocUnarmedActions: passenger_flatground_2BinocActions
		{
			default = "passenger_flatground_2_Aim_Unarmed_Binoc";
			die = "passenger_flatground_2_Die_Pistol";
			GetOutHigh = "AcrgPknlMstpSnonWnonDnon_AmovPercMstpSnonWnonDnon_getOutHigh";
			GetOutHighHemtt = "AcrgPknlMstpSnonWnonDnon_AmovPercMstpSnonWnonDnon_getOutHighHemtt";
			GetOutHighZamak = "AcrgPknlMstpSnonWnonDnon_AmovPercMstpSnonWnonDnon_getOutHighZamak";
			GetOutLow = "AcrgPknlMstpSnonWnonDnon_AmovPercMstpSnonWnonDnon_getOutLow";
			GetOutMedium = "AcrgPknlMstpSnonWnonDnon_AmovPercMstpSnonWnonDnon_getOutMedium";
			GetOutSDV = "AcrgPknlMstpSnonWnonDnon_AmovPercMstpSnonWnonDnon_getOutHigh";
			stop = "passenger_flatground_2_Aim_Unarmed_Binoc";
			stopRelaxed = "passenger_flatground_2_Aim_Unarmed_Binoc";
			Unconscious = "passenger_flatground_2_Die_Pistol";
		};
		class passenger_flatground_2DeadActions: FFV_BaseActions
		{
			default = "passenger_flatground_2_Die";
			die = "passenger_flatground_2_Die";
			stop = "passenger_flatground_2_Die";
			Unconscious = "passenger_flatground_2_Die";
		};
		class passenger_flatground_2DeadPistolActions: FFV_BaseActions
		{
			default = "passenger_flatground_2_Die_Pistol";
			die = "passenger_flatground_2_Die_Pistol";
			stop = "passenger_flatground_2_Die_Pistol";
			Unconscious = "passenger_flatground_2_Die_Pistol";
		};
		class passenger_flatground_2IdleActions: passenger_flatground_2Actions
		{
			Combat = "passenger_flatground_2_Aim";
			default = "passenger_flatground_2_Idle";
			fireNotPossible = "passenger_flatground_2_Aim";
			PlayerStand = "passenger_flatground_2_Aim";
			stop = "passenger_flatground_2_Idle";
			stopRelaxed = "passenger_flatground_2_Idle";
			upDegree = "ManPosStand";
		};
		class passenger_flatground_2IdlePistolActions: passenger_flatground_2Actions
		{
			Combat = "passenger_flatground_2_Aim_Pistol";
			default = "passenger_flatground_2_Idle_Pistol";
			die = "passenger_flatground_2_Die_Pistol";
			fireNotPossible = "passenger_flatground_2_Aim_Pistol";
			GetOutHigh = "AcrgPknlMstpSnonWnonDnon_AmovPercMstpSrasWpstDnon_getOutHigh";
			GetOutHighHemtt = "AcrgPknlMstpSnonWnonDnon_AmovPercMstpSrasWpstDnon_getOutHighHemtt";
			GetOutHighZamak = "AcrgPknlMstpSnonWnonDnon_AmovPercMstpSrasWpstDnon_getOutHighZamak";
			GetOutLow = "AcrgPknlMstpSnonWnonDnon_AmovPercMstpSrasWpstDnon_getOutLow";
			GetOutMedium = "AcrgPknlMstpSnonWnonDnon_AmovPercMstpSrasWpstDnon_getOutMedium";
			GetOutSDV = "AcrgPknlMstpSnonWnonDnon_AmovPercMstpSrasWpstDnon_getOutHigh";
			PlayerStand = "passenger_flatground_2_Aim_Pistol";
			Stand = "passenger_flatground_2_Idle_Pistol";
			stop = "passenger_flatground_2_Idle_Pistol";
			stopRelaxed = "passenger_flatground_2_Idle_Pistol";
			Unconscious = "passenger_flatground_2_Die_Pistol";
			upDegree = "ManPosHandGunStand";
		};
		class passenger_flatground_2IdleUnarmedActions: FFV_BaseActions
		{
			Binoculars = "passenger_flatground_2_Aim_Unarmed_Binoc";
			civil = "passenger_flatground_2_Idle_Unarmed";
			default = "passenger_flatground_2_Idle_Unarmed";
			die = "passenger_flatground_2_Die_Pistol";
			GetOutHigh = "AcrgPknlMstpSnonWnonDnon_AmovPercMstpSnonWnonDnon_getOutHigh";
			GetOutHighHemtt = "AcrgPknlMstpSnonWnonDnon_AmovPercMstpSnonWnonDnon_getOutHighHemtt";
			GetOutHighZamak = "AcrgPknlMstpSnonWnonDnon_AmovPercMstpSnonWnonDnon_getOutHighZamak";
			GetOutLow = "AcrgPknlMstpSnonWnonDnon_AmovPercMstpSnonWnonDnon_getOutLow";
			GetOutMedium = "AcrgPknlMstpSnonWnonDnon_AmovPercMstpSnonWnonDnon_getOutMedium";
			GetOutSDV = "AcrgPknlMstpSnonWnonDnon_AmovPercMstpSnonWnonDnon_getOutHigh";
			HandGunOn = "passenger_flatground_2_Aim_Pistol";
			PrimaryWeapon = "passenger_flatground_2_Aim";
			Stand = "passenger_flatground_2_Idle_Unarmed";
			stop = "passenger_flatground_2_Idle_Unarmed";
			stopRelaxed = "passenger_flatground_2_Idle_Unarmed";
			throwGrenade[] = {"GestureThrowGrenadeUna", "Gesture"};
			Unconscious = "passenger_flatground_2_Die_Pistol";
			upDegree = "ManPosNoWeapon";
		};
		class passenger_flatground_2ObstructedActions: passenger_flatground_2Actions
		{
			Combat = "passenger_flatground_2_Aim";
			default = "passenger_flatground_2_Obstructed";
			fireNotPossible = "passenger_flatground_2_Obstructed";
			PlayerStand = "passenger_flatground_2_Obstructed";
			stop = "passenger_flatground_2_Obstructed";
			stopRelaxed = "passenger_flatground_2_Obstructed";
		};
		class passenger_flatground_2ObstructedPistolActions: passenger_flatground_2PistolActions
		{
			Combat = "passenger_flatground_2_Aim_Pistol";
			default = "passenger_flatground_2_Obstructed_Pistol";
			fireNotPossible = "passenger_flatground_2_Obstructed_Pistol";
			PlayerStand = "passenger_flatground_2_Obstructed_Pistol";
			Stand = "passenger_flatground_2_Obstructed_Pistol";
			stop = "passenger_flatground_2_Obstructed_Pistol";
			stopRelaxed = "passenger_flatground_2_Obstructed_Pistol";
		};
		class passenger_flatground_2PistolActions: passenger_flatground_2Actions
		{
			Binoculars = "passenger_flatground_2_Aim_Pistol_Binoc";
			default = "passenger_flatground_2_Aim_Pistol";
			die = "passenger_flatground_2_Die_Pistol";
			GetOutHigh = "AcrgPknlMstpSnonWnonDnon_AmovPercMstpSrasWpstDnon_getOutHigh";
			GetOutHighHemtt = "AcrgPknlMstpSnonWnonDnon_AmovPercMstpSrasWpstDnon_getOutHighHemtt";
			GetOutHighZamak = "AcrgPknlMstpSnonWnonDnon_AmovPercMstpSrasWpstDnon_getOutHighZamak";
			GetOutLow = "AcrgPknlMstpSnonWnonDnon_AmovPercMstpSrasWpstDnon_getOutLow";
			GetOutMedium = "AcrgPknlMstpSnonWnonDnon_AmovPercMstpSrasWpstDnon_getOutMedium";
			GetOutSDV = "AcrgPknlMstpSnonWnonDnon_AmovPercMstpSrasWpstDnon_getOutHigh";
			Obstructed = "passenger_flatground_2_Obstructed_Pistol";
			Stand = "passenger_flatground_2_Idle_Pistol";
			stop = "passenger_flatground_2_Aim_Pistol";
			stopRelaxed = "passenger_flatground_2_Aim_Pistol";
			throwGrenade[] = {"GestureThrowGrenadePistol", "Gesture"};
			Unconscious = "passenger_flatground_2_Die_Pistol";
			upDegree = "ManPosHandGunStand";
		};
		class passenger_flatground_3Actions: FFV_BaseActions
		{
			Binoculars = "passenger_flatground_3_Aim_Binoc";
			civil = "passenger_flatground_3_Idle_Unarmed";
			default = "passenger_flatground_3_Aim";
			die = "passenger_flatground_3_Die";
			HandGunOn = "passenger_flatground_3_Aim_Pistol";
			Obstructed = "passenger_flatground_3_Obstructed";
			PrimaryWeapon = "passenger_flatground_3_Aim";
			Stand = "passenger_flatground_3_Idle";
			stop = "passenger_flatground_3_Aim";
			stopRelaxed = "passenger_flatground_3_Aim";
			Unconscious = "passenger_flatground_3_Die";
			upDegree = "ManPosCombat";
		};
		class passenger_flatground_3BinocActions: passenger_flatground_3Actions
		{
			binocOn = "";
			default = "passenger_flatground_3_Aim_Binoc";
			stop = "passenger_flatground_3_Aim_Binoc";
			stopRelaxed = "passenger_flatground_3_Aim_Binoc";
			upDegree = "ManPosBinocStand";
		};
		class passenger_flatground_3BinocPistolActions: passenger_flatground_3BinocActions
		{
			default = "passenger_flatground_3_Aim_Pistol_Binoc";
			die = "passenger_flatground_3_Die_Pistol";
			GetOutHigh = "AcrgPknlMstpSnonWnonDnon_AmovPercMstpSrasWpstDnon_getOutHigh";
			GetOutHighHemtt = "AcrgPknlMstpSnonWnonDnon_AmovPercMstpSrasWpstDnon_getOutHighHemtt";
			GetOutHighZamak = "AcrgPknlMstpSnonWnonDnon_AmovPercMstpSrasWpstDnon_getOutHighZamak";
			GetOutLow = "AcrgPknlMstpSnonWnonDnon_AmovPercMstpSrasWpstDnon_getOutLow";
			GetOutMedium = "AcrgPknlMstpSnonWnonDnon_AmovPercMstpSrasWpstDnon_getOutMedium";
			GetOutSDV = "AcrgPknlMstpSnonWnonDnon_AmovPercMstpSrasWpstDnon_getOutHigh";
			stop = "passenger_flatground_3_Aim_Pistol_Binoc";
			stopRelaxed = "passenger_flatground_3_Aim_Pistol_Binoc";
			Unconscious = "passenger_flatground_3_Die_Pistol";
		};
		class passenger_flatground_3BinocUnarmedActions: passenger_flatground_3BinocActions
		{
			default = "passenger_flatground_3_Aim_Unarmed_Binoc";
			die = "passenger_flatground_3_Die_Pistol";
			GetOutHigh = "AcrgPknlMstpSnonWnonDnon_AmovPercMstpSnonWnonDnon_getOutHigh";
			GetOutHighHemtt = "AcrgPknlMstpSnonWnonDnon_AmovPercMstpSnonWnonDnon_getOutHighHemtt";
			GetOutHighZamak = "AcrgPknlMstpSnonWnonDnon_AmovPercMstpSnonWnonDnon_getOutHighZamak";
			GetOutLow = "AcrgPknlMstpSnonWnonDnon_AmovPercMstpSnonWnonDnon_getOutLow";
			GetOutMedium = "AcrgPknlMstpSnonWnonDnon_AmovPercMstpSnonWnonDnon_getOutMedium";
			GetOutSDV = "AcrgPknlMstpSnonWnonDnon_AmovPercMstpSnonWnonDnon_getOutHigh";
			stop = "passenger_flatground_3_Aim_Unarmed_Binoc";
			stopRelaxed = "passenger_flatground_3_Aim_Unarmed_Binoc";
			Unconscious = "passenger_flatground_3_Die_Pistol";
		};
		class passenger_flatground_3DeadActions: FFV_BaseActions
		{
			default = "passenger_flatground_3_Die";
			die = "passenger_flatground_3_Die";
			stop = "passenger_flatground_3_Die";
			Unconscious = "passenger_flatground_3_Die";
		};
		class passenger_flatground_3DeadPistolActions: FFV_BaseActions
		{
			default = "passenger_flatground_3_Die_Pistol";
			die = "passenger_flatground_3_Die_Pistol";
			stop = "passenger_flatground_3_Die_Pistol";
			Unconscious = "passenger_flatground_3_Die_Pistol";
		};
		class passenger_flatground_3IdleActions: passenger_flatground_3Actions
		{
			Combat = "passenger_flatground_3_Aim";
			default = "passenger_flatground_3_Idle";
			fireNotPossible = "passenger_flatground_3_Aim";
			PlayerStand = "passenger_flatground_3_Aim";
			stop = "passenger_flatground_3_Idle";
			stopRelaxed = "passenger_flatground_3_Idle";
			upDegree = "ManPosStand";
		};
		class passenger_flatground_3IdlePistolActions: passenger_flatground_3Actions
		{
			Combat = "passenger_flatground_3_Aim_Pistol";
			default = "passenger_flatground_3_Idle_Pistol";
			die = "passenger_flatground_3_Die_Pistol";
			fireNotPossible = "passenger_flatground_3_Aim_Pistol";
			GetOutHigh = "AcrgPknlMstpSnonWnonDnon_AmovPercMstpSrasWpstDnon_getOutHigh";
			GetOutHighHemtt = "AcrgPknlMstpSnonWnonDnon_AmovPercMstpSrasWpstDnon_getOutHighHemtt";
			GetOutHighZamak = "AcrgPknlMstpSnonWnonDnon_AmovPercMstpSrasWpstDnon_getOutHighZamak";
			GetOutLow = "AcrgPknlMstpSnonWnonDnon_AmovPercMstpSrasWpstDnon_getOutLow";
			GetOutMedium = "AcrgPknlMstpSnonWnonDnon_AmovPercMstpSrasWpstDnon_getOutMedium";
			GetOutSDV = "AcrgPknlMstpSnonWnonDnon_AmovPercMstpSrasWpstDnon_getOutHigh";
			PlayerStand = "passenger_flatground_3_Aim_Pistol";
			Stand = "passenger_flatground_3_Idle_Pistol";
			stop = "passenger_flatground_3_Idle_Pistol";
			stopRelaxed = "passenger_flatground_3_Idle_Pistol";
			Unconscious = "passenger_flatground_3_Die_Pistol";
			upDegree = "ManPosHandGunStand";
		};
		class passenger_flatground_3IdleUnarmedActions: FFV_BaseActions
		{
			Binoculars = "passenger_flatground_3_Aim_Unarmed_Binoc";
			civil = "passenger_flatground_3_Idle_Unarmed";
			default = "passenger_flatground_3_Idle_Unarmed";
			die = "passenger_flatground_3_Die_Pistol";
			GetOutHigh = "AcrgPknlMstpSnonWnonDnon_AmovPercMstpSnonWnonDnon_getOutHigh";
			GetOutHighHemtt = "AcrgPknlMstpSnonWnonDnon_AmovPercMstpSnonWnonDnon_getOutHighHemtt";
			GetOutHighZamak = "AcrgPknlMstpSnonWnonDnon_AmovPercMstpSnonWnonDnon_getOutHighZamak";
			GetOutLow = "AcrgPknlMstpSnonWnonDnon_AmovPercMstpSnonWnonDnon_getOutLow";
			GetOutMedium = "AcrgPknlMstpSnonWnonDnon_AmovPercMstpSnonWnonDnon_getOutMedium";
			GetOutSDV = "AcrgPknlMstpSnonWnonDnon_AmovPercMstpSnonWnonDnon_getOutHigh";
			HandGunOn = "passenger_flatground_3_Aim_Pistol";
			PrimaryWeapon = "passenger_flatground_3_Aim";
			Stand = "passenger_flatground_3_Idle_Unarmed";
			stop = "passenger_flatground_3_Idle_Unarmed";
			stopRelaxed = "passenger_flatground_3_Idle_Unarmed";
			throwGrenade[] = {"GestureThrowGrenadeUna", "Gesture"};
			Unconscious = "passenger_flatground_3_Die_Pistol";
			upDegree = "ManPosNoWeapon";
		};
		class passenger_flatground_3ObstructedActions: passenger_flatground_3Actions
		{
			Combat = "passenger_flatground_3_Aim";
			default = "passenger_flatground_3_Obstructed";
			fireNotPossible = "passenger_flatground_3_Obstructed";
			PlayerStand = "passenger_flatground_3_Obstructed";
			stop = "passenger_flatground_3_Obstructed";
			stopRelaxed = "passenger_flatground_3_Obstructed";
		};
		class passenger_flatground_3ObstructedPistolActions: passenger_flatground_3PistolActions
		{
			Combat = "passenger_flatground_3_Aim_Pistol";
			default = "passenger_flatground_3_Obstructed_Pistol";
			fireNotPossible = "passenger_flatground_3_Obstructed_Pistol";
			PlayerStand = "passenger_flatground_3_Obstructed_Pistol";
			Stand = "passenger_flatground_3_Obstructed_Pistol";
			stop = "passenger_flatground_3_Obstructed_Pistol";
			stopRelaxed = "passenger_flatground_3_Obstructed_Pistol";
		};
		class passenger_flatground_3PistolActions: passenger_flatground_3Actions
		{
			Binoculars = "passenger_flatground_3_Aim_Pistol_Binoc";
			default = "passenger_flatground_3_Aim_Pistol";
			die = "passenger_flatground_3_Die_Pistol";
			GetOutHigh = "AcrgPknlMstpSnonWnonDnon_AmovPercMstpSrasWpstDnon_getOutHigh";
			GetOutHighHemtt = "AcrgPknlMstpSnonWnonDnon_AmovPercMstpSrasWpstDnon_getOutHighHemtt";
			GetOutHighZamak = "AcrgPknlMstpSnonWnonDnon_AmovPercMstpSrasWpstDnon_getOutHighZamak";
			GetOutLow = "AcrgPknlMstpSnonWnonDnon_AmovPercMstpSrasWpstDnon_getOutLow";
			GetOutMedium = "AcrgPknlMstpSnonWnonDnon_AmovPercMstpSrasWpstDnon_getOutMedium";
			GetOutSDV = "AcrgPknlMstpSnonWnonDnon_AmovPercMstpSrasWpstDnon_getOutHigh";
			Obstructed = "passenger_flatground_3_Obstructed_Pistol";
			Stand = "passenger_flatground_3_Idle_Pistol";
			stop = "passenger_flatground_3_Aim_Pistol";
			stopRelaxed = "passenger_flatground_3_Aim_Pistol";
			throwGrenade[] = {"GestureThrowGrenadePistol", "Gesture"};
			Unconscious = "passenger_flatground_3_Die_Pistol";
			upDegree = "ManPosHandGunStand";
		};
		class passenger_flatground_4Actions: FFV_BaseActions
		{
			Binoculars = "passenger_flatground_4_Aim_Binoc";
			civil = "passenger_flatground_4_Idle_Unarmed";
			default = "passenger_flatground_4_Aim";
			die = "passenger_flatground_4_Die";
			HandGunOn = "passenger_flatground_4_Aim_Pistol";
			Obstructed = "passenger_flatground_4_Obstructed";
			PrimaryWeapon = "passenger_flatground_4_Aim";
			Stand = "passenger_flatground_4_Idle";
			stop = "passenger_flatground_4_Aim";
			stopRelaxed = "passenger_flatground_4_Aim";
			Unconscious = "passenger_flatground_4_Die";
			upDegree = "ManPosCombat";
		};
		class passenger_flatground_4BinocActions: passenger_flatground_4Actions
		{
			binocOn = "";
			default = "passenger_flatground_4_Aim_Binoc";
			stop = "passenger_flatground_4_Aim_Binoc";
			stopRelaxed = "passenger_flatground_4_Aim_Binoc";
			upDegree = "ManPosBinocStand";
		};
		class passenger_flatground_4BinocPistolActions: passenger_flatground_4BinocActions
		{
			default = "passenger_flatground_4_Aim_Pistol_Binoc";
			die = "passenger_flatground_4_Die_Pistol";
			GetOutHigh = "AcrgPknlMstpSnonWnonDnon_AmovPercMstpSrasWpstDnon_getOutHigh";
			GetOutHighHemtt = "AcrgPknlMstpSnonWnonDnon_AmovPercMstpSrasWpstDnon_getOutHighHemtt";
			GetOutHighZamak = "AcrgPknlMstpSnonWnonDnon_AmovPercMstpSrasWpstDnon_getOutHighZamak";
			GetOutLow = "AcrgPknlMstpSnonWnonDnon_AmovPercMstpSrasWpstDnon_getOutLow";
			GetOutMedium = "AcrgPknlMstpSnonWnonDnon_AmovPercMstpSrasWpstDnon_getOutMedium";
			GetOutSDV = "AcrgPknlMstpSnonWnonDnon_AmovPercMstpSrasWpstDnon_getOutHigh";
			stop = "passenger_flatground_4_Aim_Pistol_Binoc";
			stopRelaxed = "passenger_flatground_4_Aim_Pistol_Binoc";
			Unconscious = "passenger_flatground_4_Die_Pistol";
		};
		class passenger_flatground_4BinocUnarmedActions: passenger_flatground_4BinocActions
		{
			default = "passenger_flatground_4_Aim_Unarmed_Binoc";
			die = "passenger_flatground_4_Die_Pistol";
			GetOutHigh = "AcrgPknlMstpSnonWnonDnon_AmovPercMstpSnonWnonDnon_getOutHigh";
			GetOutHighHemtt = "AcrgPknlMstpSnonWnonDnon_AmovPercMstpSnonWnonDnon_getOutHighHemtt";
			GetOutHighZamak = "AcrgPknlMstpSnonWnonDnon_AmovPercMstpSnonWnonDnon_getOutHighZamak";
			GetOutLow = "AcrgPknlMstpSnonWnonDnon_AmovPercMstpSnonWnonDnon_getOutLow";
			GetOutMedium = "AcrgPknlMstpSnonWnonDnon_AmovPercMstpSnonWnonDnon_getOutMedium";
			GetOutSDV = "AcrgPknlMstpSnonWnonDnon_AmovPercMstpSnonWnonDnon_getOutHigh";
			stop = "passenger_flatground_4_Aim_Unarmed_Binoc";
			stopRelaxed = "passenger_flatground_4_Aim_Unarmed_Binoc";
			Unconscious = "passenger_flatground_4_Die_Pistol";
		};
		class passenger_flatground_4DeadActions: FFV_BaseActions
		{
			default = "passenger_flatground_4_Die";
			die = "passenger_flatground_4_Die";
			stop = "passenger_flatground_4_Die";
			Unconscious = "passenger_flatground_4_Die";
		};
		class passenger_flatground_4DeadPistolActions: FFV_BaseActions
		{
			default = "passenger_flatground_4_Die_Pistol";
			die = "passenger_flatground_4_Die_Pistol";
			stop = "passenger_flatground_4_Die_Pistol";
			Unconscious = "passenger_flatground_4_Die_Pistol";
		};
		class passenger_flatground_4IdleActions: passenger_flatground_4Actions
		{
			Combat = "passenger_flatground_4_Aim";
			default = "passenger_flatground_4_Idle";
			fireNotPossible = "passenger_flatground_4_Aim";
			PlayerStand = "passenger_flatground_4_Aim";
			stop = "passenger_flatground_4_Idle";
			stopRelaxed = "passenger_flatground_4_Idle";
			upDegree = "ManPosStand";
		};
		class passenger_flatground_4IdlePistolActions: passenger_flatground_4Actions
		{
			Combat = "passenger_flatground_4_Aim_Pistol";
			default = "passenger_flatground_4_Idle_Pistol";
			die = "passenger_flatground_4_Die_Pistol";
			fireNotPossible = "passenger_flatground_4_Aim_Pistol";
			GetOutHigh = "AcrgPknlMstpSnonWnonDnon_AmovPercMstpSrasWpstDnon_getOutHigh";
			GetOutHighHemtt = "AcrgPknlMstpSnonWnonDnon_AmovPercMstpSrasWpstDnon_getOutHighHemtt";
			GetOutHighZamak = "AcrgPknlMstpSnonWnonDnon_AmovPercMstpSrasWpstDnon_getOutHighZamak";
			GetOutLow = "AcrgPknlMstpSnonWnonDnon_AmovPercMstpSrasWpstDnon_getOutLow";
			GetOutMedium = "AcrgPknlMstpSnonWnonDnon_AmovPercMstpSrasWpstDnon_getOutMedium";
			GetOutSDV = "AcrgPknlMstpSnonWnonDnon_AmovPercMstpSrasWpstDnon_getOutHigh";
			PlayerStand = "passenger_flatground_4_Aim_Pistol";
			Stand = "passenger_flatground_4_Idle_Pistol";
			stop = "passenger_flatground_4_Idle_Pistol";
			stopRelaxed = "passenger_flatground_4_Idle_Pistol";
			Unconscious = "passenger_flatground_4_Die_Pistol";
			upDegree = "ManPosHandGunStand";
		};
		class passenger_flatground_4IdleUnarmedActions: FFV_BaseActions
		{
			Binoculars = "passenger_flatground_4_Aim_Unarmed_Binoc";
			civil = "passenger_flatground_4_Idle_Unarmed";
			default = "passenger_flatground_4_Idle_Unarmed";
			die = "passenger_flatground_4_Die_Pistol";
			GetOutHigh = "AcrgPknlMstpSnonWnonDnon_AmovPercMstpSnonWnonDnon_getOutHigh";
			GetOutHighHemtt = "AcrgPknlMstpSnonWnonDnon_AmovPercMstpSnonWnonDnon_getOutHighHemtt";
			GetOutHighZamak = "AcrgPknlMstpSnonWnonDnon_AmovPercMstpSnonWnonDnon_getOutHighZamak";
			GetOutLow = "AcrgPknlMstpSnonWnonDnon_AmovPercMstpSnonWnonDnon_getOutLow";
			GetOutMedium = "AcrgPknlMstpSnonWnonDnon_AmovPercMstpSnonWnonDnon_getOutMedium";
			GetOutSDV = "AcrgPknlMstpSnonWnonDnon_AmovPercMstpSnonWnonDnon_getOutHigh";
			HandGunOn = "passenger_flatground_4_Aim_Pistol";
			PrimaryWeapon = "passenger_flatground_4_Aim";
			Stand = "passenger_flatground_4_Idle_Unarmed";
			stop = "passenger_flatground_4_Idle_Unarmed";
			stopRelaxed = "passenger_flatground_4_Idle_Unarmed";
			throwGrenade[] = {"GestureThrowGrenadeUna", "Gesture"};
			Unconscious = "passenger_flatground_4_Die_Pistol";
			upDegree = "ManPosNoWeapon";
		};
		class passenger_flatground_4ObstructedActions: passenger_flatground_4Actions
		{
			Combat = "passenger_flatground_4_Aim";
			default = "passenger_flatground_4_Obstructed";
			fireNotPossible = "passenger_flatground_4_Obstructed";
			PlayerStand = "passenger_flatground_4_Obstructed";
			stop = "passenger_flatground_4_Obstructed";
			stopRelaxed = "passenger_flatground_4_Obstructed";
		};
		class passenger_flatground_4ObstructedPistolActions: passenger_flatground_4PistolActions
		{
			Combat = "passenger_flatground_4_Aim_Pistol";
			default = "passenger_flatground_4_Obstructed_Pistol";
			fireNotPossible = "passenger_flatground_4_Obstructed_Pistol";
			PlayerStand = "passenger_flatground_4_Obstructed_Pistol";
			Stand = "passenger_flatground_4_Obstructed_Pistol";
			stop = "passenger_flatground_4_Obstructed_Pistol";
			stopRelaxed = "passenger_flatground_4_Obstructed_Pistol";
		};
		class passenger_flatground_4PistolActions: passenger_flatground_4Actions
		{
			Binoculars = "passenger_flatground_4_Aim_Pistol_Binoc";
			default = "passenger_flatground_4_Aim_Pistol";
			die = "passenger_flatground_4_Die_Pistol";
			GetOutHigh = "AcrgPknlMstpSnonWnonDnon_AmovPercMstpSrasWpstDnon_getOutHigh";
			GetOutHighHemtt = "AcrgPknlMstpSnonWnonDnon_AmovPercMstpSrasWpstDnon_getOutHighHemtt";
			GetOutHighZamak = "AcrgPknlMstpSnonWnonDnon_AmovPercMstpSrasWpstDnon_getOutHighZamak";
			GetOutLow = "AcrgPknlMstpSnonWnonDnon_AmovPercMstpSrasWpstDnon_getOutLow";
			GetOutMedium = "AcrgPknlMstpSnonWnonDnon_AmovPercMstpSrasWpstDnon_getOutMedium";
			GetOutSDV = "AcrgPknlMstpSnonWnonDnon_AmovPercMstpSrasWpstDnon_getOutHigh";
			Obstructed = "passenger_flatground_4_Obstructed_Pistol";
			Stand = "passenger_flatground_4_Idle_Pistol";
			stop = "passenger_flatground_4_Aim_Pistol";
			stopRelaxed = "passenger_flatground_4_Aim_Pistol";
			throwGrenade[] = {"GestureThrowGrenadePistol", "Gesture"};
			Unconscious = "passenger_flatground_4_Die_Pistol";
			upDegree = "ManPosHandGunStand";
		};
		class passenger_inside_1Actions: FFV_BaseActions
		{
			Binoculars = "passenger_inside_1_Aim_Binoc";
			civil = "passenger_inside_1_Idle_Unarmed";
			default = "passenger_inside_1_Aim";
			die = "passenger_inside_1_Die";
			HandGunOn = "passenger_inside_1_Aim_Pistol";
			Obstructed = "passenger_inside_1_Obstructed";
			PrimaryWeapon = "passenger_inside_1_Aim";
			Stand = "passenger_inside_1_Idle";
			stop = "passenger_inside_1_Aim";
			stopRelaxed = "passenger_inside_1_Aim";
			Unconscious = "passenger_inside_1_Die";
			upDegree = "ManPosCombat";
		};
		class passenger_inside_1BinocActions: passenger_inside_1Actions
		{
			binocOn = "";
			default = "passenger_inside_1_Aim_Binoc";
			stop = "passenger_inside_1_Aim_Binoc";
			stopRelaxed = "passenger_inside_1_Aim_Binoc";
			upDegree = "ManPosBinocStand";
		};
		class passenger_inside_1BinocPistolActions: passenger_inside_1BinocActions
		{
			default = "passenger_inside_1_Aim_Pistol_Binoc";
			die = "passenger_inside_1_Die_Pistol";
			GetOutHigh = "AcrgPknlMstpSnonWnonDnon_AmovPercMstpSrasWpstDnon_getOutHigh";
			GetOutHighHemtt = "AcrgPknlMstpSnonWnonDnon_AmovPercMstpSrasWpstDnon_getOutHighHemtt";
			GetOutHighZamak = "AcrgPknlMstpSnonWnonDnon_AmovPercMstpSrasWpstDnon_getOutHighZamak";
			GetOutLow = "AcrgPknlMstpSnonWnonDnon_AmovPercMstpSrasWpstDnon_getOutLow";
			GetOutMedium = "AcrgPknlMstpSnonWnonDnon_AmovPercMstpSrasWpstDnon_getOutMedium";
			GetOutSDV = "AcrgPknlMstpSnonWnonDnon_AmovPercMstpSrasWpstDnon_getOutHigh";
			stop = "passenger_inside_1_Aim_Pistol_Binoc";
			stopRelaxed = "passenger_inside_1_Aim_Pistol_Binoc";
			Unconscious = "passenger_inside_1_Die_Pistol";
		};
		class passenger_inside_1BinocUnarmedActions: passenger_inside_1BinocActions
		{
			default = "passenger_inside_1_Aim_Unarmed_Binoc";
			die = "passenger_inside_1_Die_Pistol";
			GetOutHigh = "AcrgPknlMstpSnonWnonDnon_AmovPercMstpSnonWnonDnon_getOutHigh";
			GetOutHighHemtt = "AcrgPknlMstpSnonWnonDnon_AmovPercMstpSnonWnonDnon_getOutHighHemtt";
			GetOutHighZamak = "AcrgPknlMstpSnonWnonDnon_AmovPercMstpSnonWnonDnon_getOutHighZamak";
			GetOutLow = "AcrgPknlMstpSnonWnonDnon_AmovPercMstpSnonWnonDnon_getOutLow";
			GetOutMedium = "AcrgPknlMstpSnonWnonDnon_AmovPercMstpSnonWnonDnon_getOutMedium";
			GetOutSDV = "AcrgPknlMstpSnonWnonDnon_AmovPercMstpSnonWnonDnon_getOutHigh";
			stop = "passenger_inside_1_Aim_Unarmed_Binoc";
			stopRelaxed = "passenger_inside_1_Aim_Unarmed_Binoc";
			Unconscious = "passenger_inside_1_Die_Pistol";
		};
		class passenger_inside_1DeadActions: FFV_BaseActions
		{
			default = "passenger_inside_1_Die";
			die = "passenger_inside_1_Die";
			stop = "passenger_inside_1_Die";
			Unconscious = "passenger_inside_1_Die";
		};
		class passenger_inside_1DeadPistolActions: FFV_BaseActions
		{
			default = "passenger_inside_1_Die_Pistol";
			die = "passenger_inside_1_Die_Pistol";
			stop = "passenger_inside_1_Die_Pistol";
			Unconscious = "passenger_inside_1_Die_Pistol";
		};
		class passenger_inside_1IdleActions: passenger_inside_1Actions
		{
			Combat = "passenger_inside_1_Aim";
			default = "passenger_inside_1_Idle";
			fireNotPossible = "passenger_inside_1_Aim";
			PlayerStand = "passenger_inside_1_Aim";
			stop = "passenger_inside_1_Idle";
			stopRelaxed = "passenger_inside_1_Idle";
			upDegree = "ManPosStand";
		};
		class passenger_inside_1IdlePistolActions: passenger_inside_1Actions
		{
			Combat = "passenger_inside_1_Aim_Pistol";
			default = "passenger_inside_1_Idle_Pistol";
			die = "passenger_inside_1_Die_Pistol";
			fireNotPossible = "passenger_inside_1_Aim_Pistol";
			GetOutHigh = "AcrgPknlMstpSnonWnonDnon_AmovPercMstpSrasWpstDnon_getOutHigh";
			GetOutHighHemtt = "AcrgPknlMstpSnonWnonDnon_AmovPercMstpSrasWpstDnon_getOutHighHemtt";
			GetOutHighZamak = "AcrgPknlMstpSnonWnonDnon_AmovPercMstpSrasWpstDnon_getOutHighZamak";
			GetOutLow = "AcrgPknlMstpSnonWnonDnon_AmovPercMstpSrasWpstDnon_getOutLow";
			GetOutMedium = "AcrgPknlMstpSnonWnonDnon_AmovPercMstpSrasWpstDnon_getOutMedium";
			GetOutSDV = "AcrgPknlMstpSnonWnonDnon_AmovPercMstpSrasWpstDnon_getOutHigh";
			PlayerStand = "passenger_inside_1_Aim_Pistol";
			Stand = "passenger_inside_1_Idle_Pistol";
			stop = "passenger_inside_1_Idle_Pistol";
			stopRelaxed = "passenger_inside_1_Idle_Pistol";
			Unconscious = "passenger_inside_1_Die_Pistol";
			upDegree = "ManPosHandGunStand";
		};
		class passenger_inside_1IdleUnarmedActions: FFV_BaseActions
		{
			Binoculars = "passenger_inside_1_Aim_Unarmed_Binoc";
			civil = "passenger_inside_1_Idle_Unarmed";
			default = "passenger_inside_1_Idle_Unarmed";
			die = "passenger_inside_1_Die_Pistol";
			GetOutHigh = "AcrgPknlMstpSnonWnonDnon_AmovPercMstpSnonWnonDnon_getOutHigh";
			GetOutHighHemtt = "AcrgPknlMstpSnonWnonDnon_AmovPercMstpSnonWnonDnon_getOutHighHemtt";
			GetOutHighZamak = "AcrgPknlMstpSnonWnonDnon_AmovPercMstpSnonWnonDnon_getOutHighZamak";
			GetOutLow = "AcrgPknlMstpSnonWnonDnon_AmovPercMstpSnonWnonDnon_getOutLow";
			GetOutMedium = "AcrgPknlMstpSnonWnonDnon_AmovPercMstpSnonWnonDnon_getOutMedium";
			GetOutSDV = "AcrgPknlMstpSnonWnonDnon_AmovPercMstpSnonWnonDnon_getOutHigh";
			HandGunOn = "passenger_inside_1_Aim_Pistol";
			PrimaryWeapon = "passenger_inside_1_Aim";
			Stand = "passenger_inside_1_Idle_Unarmed";
			stop = "passenger_inside_1_Idle_Unarmed";
			stopRelaxed = "passenger_inside_1_Idle_Unarmed";
			throwGrenade[] = {"GestureThrowGrenadeUna", "Gesture"};
			Unconscious = "passenger_inside_1_Die_Pistol";
			upDegree = "ManPosNoWeapon";
		};
		class passenger_inside_1ObstructedActions: passenger_inside_1Actions
		{
			Combat = "passenger_inside_1_Aim";
			default = "passenger_inside_1_Obstructed";
			fireNotPossible = "passenger_inside_1_Obstructed";
			PlayerStand = "passenger_inside_1_Obstructed";
			stop = "passenger_inside_1_Obstructed";
			stopRelaxed = "passenger_inside_1_Obstructed";
		};
		class passenger_inside_1ObstructedPistolActions: passenger_inside_1PistolActions
		{
			Combat = "passenger_inside_1_Aim_Pistol";
			default = "passenger_inside_1_Obstructed_Pistol";
			fireNotPossible = "passenger_inside_1_Obstructed_Pistol";
			PlayerStand = "passenger_inside_1_Obstructed_Pistol";
			Stand = "passenger_inside_1_Obstructed_Pistol";
			stop = "passenger_inside_1_Obstructed_Pistol";
			stopRelaxed = "passenger_inside_1_Obstructed_Pistol";
		};
		class passenger_inside_1PistolActions: passenger_inside_1Actions
		{
			Binoculars = "passenger_inside_1_Aim_Pistol_Binoc";
			default = "passenger_inside_1_Aim_Pistol";
			die = "passenger_inside_1_Die_Pistol";
			GetOutHigh = "AcrgPknlMstpSnonWnonDnon_AmovPercMstpSrasWpstDnon_getOutHigh";
			GetOutHighHemtt = "AcrgPknlMstpSnonWnonDnon_AmovPercMstpSrasWpstDnon_getOutHighHemtt";
			GetOutHighZamak = "AcrgPknlMstpSnonWnonDnon_AmovPercMstpSrasWpstDnon_getOutHighZamak";
			GetOutLow = "AcrgPknlMstpSnonWnonDnon_AmovPercMstpSrasWpstDnon_getOutLow";
			GetOutMedium = "AcrgPknlMstpSnonWnonDnon_AmovPercMstpSrasWpstDnon_getOutMedium";
			GetOutSDV = "AcrgPknlMstpSnonWnonDnon_AmovPercMstpSrasWpstDnon_getOutHigh";
			Obstructed = "passenger_inside_1_Obstructed_Pistol";
			Stand = "passenger_inside_1_Idle_Pistol";
			stop = "passenger_inside_1_Aim_Pistol";
			stopRelaxed = "passenger_inside_1_Aim_Pistol";
			throwGrenade[] = {"GestureThrowGrenadePistol", "Gesture"};
			Unconscious = "passenger_inside_1_Die_Pistol";
			upDegree = "ManPosHandGunStand";
		};
		class passenger_inside_2Actions: FFV_BaseActions
		{
			Binoculars = "passenger_inside_2_Aim_Binoc";
			civil = "passenger_inside_2_Idle_Unarmed";
			default = "passenger_inside_2_Aim";
			die = "passenger_inside_2_Die";
			HandGunOn = "passenger_inside_2_Aim_Pistol";
			Obstructed = "passenger_inside_2_Obstructed";
			PrimaryWeapon = "passenger_inside_2_Aim";
			Stand = "passenger_inside_2_Idle";
			stop = "passenger_inside_2_Aim";
			stopRelaxed = "passenger_inside_2_Aim";
			Unconscious = "passenger_inside_2_Die";
			upDegree = "ManPosCombat";
		};
		class passenger_inside_2BinocActions: passenger_inside_2Actions
		{
			binocOn = "";
			default = "passenger_inside_2_Aim_Binoc";
			stop = "passenger_inside_2_Aim_Binoc";
			stopRelaxed = "passenger_inside_2_Aim_Binoc";
			upDegree = "ManPosBinocStand";
		};
		class passenger_inside_2BinocPistolActions: passenger_inside_2BinocActions
		{
			default = "passenger_inside_2_Aim_Pistol_Binoc";
			die = "passenger_inside_2_Die_Pistol";
			GetOutHigh = "AcrgPknlMstpSnonWnonDnon_AmovPercMstpSrasWpstDnon_getOutHigh";
			GetOutHighHemtt = "AcrgPknlMstpSnonWnonDnon_AmovPercMstpSrasWpstDnon_getOutHighHemtt";
			GetOutHighZamak = "AcrgPknlMstpSnonWnonDnon_AmovPercMstpSrasWpstDnon_getOutHighZamak";
			GetOutLow = "AcrgPknlMstpSnonWnonDnon_AmovPercMstpSrasWpstDnon_getOutLow";
			GetOutMedium = "AcrgPknlMstpSnonWnonDnon_AmovPercMstpSrasWpstDnon_getOutMedium";
			GetOutSDV = "AcrgPknlMstpSnonWnonDnon_AmovPercMstpSrasWpstDnon_getOutHigh";
			stop = "passenger_inside_2_Aim_Pistol_Binoc";
			stopRelaxed = "passenger_inside_2_Aim_Pistol_Binoc";
			Unconscious = "passenger_inside_2_Die_Pistol";
		};
		class passenger_inside_2BinocUnarmedActions: passenger_inside_2BinocActions
		{
			default = "passenger_inside_2_Aim_Unarmed_Binoc";
			die = "passenger_inside_2_Die_Pistol";
			GetOutHigh = "AcrgPknlMstpSnonWnonDnon_AmovPercMstpSnonWnonDnon_getOutHigh";
			GetOutHighHemtt = "AcrgPknlMstpSnonWnonDnon_AmovPercMstpSnonWnonDnon_getOutHighHemtt";
			GetOutHighZamak = "AcrgPknlMstpSnonWnonDnon_AmovPercMstpSnonWnonDnon_getOutHighZamak";
			GetOutLow = "AcrgPknlMstpSnonWnonDnon_AmovPercMstpSnonWnonDnon_getOutLow";
			GetOutMedium = "AcrgPknlMstpSnonWnonDnon_AmovPercMstpSnonWnonDnon_getOutMedium";
			GetOutSDV = "AcrgPknlMstpSnonWnonDnon_AmovPercMstpSnonWnonDnon_getOutHigh";
			stop = "passenger_inside_2_Aim_Unarmed_Binoc";
			stopRelaxed = "passenger_inside_2_Aim_Unarmed_Binoc";
			Unconscious = "passenger_inside_2_Die_Pistol";
		};
		class passenger_inside_2DeadActions: FFV_BaseActions
		{
			default = "passenger_inside_2_Die";
			die = "passenger_inside_2_Die";
			stop = "passenger_inside_2_Die";
			Unconscious = "passenger_inside_2_Die";
		};
		class passenger_inside_2DeadPistolActions: FFV_BaseActions
		{
			default = "passenger_inside_2_Die_Pistol";
			die = "passenger_inside_2_Die_Pistol";
			stop = "passenger_inside_2_Die_Pistol";
			Unconscious = "passenger_inside_2_Die_Pistol";
		};
		class passenger_inside_2IdleActions: passenger_inside_2Actions
		{
			Combat = "passenger_inside_2_Aim";
			default = "passenger_inside_2_Idle";
			fireNotPossible = "passenger_inside_2_Aim";
			PlayerStand = "passenger_inside_2_Aim";
			stop = "passenger_inside_2_Idle";
			stopRelaxed = "passenger_inside_2_Idle";
			upDegree = "ManPosStand";
		};
		class passenger_inside_2IdlePistolActions: passenger_inside_2Actions
		{
			Combat = "passenger_inside_2_Aim_Pistol";
			default = "passenger_inside_2_Idle_Pistol";
			die = "passenger_inside_2_Die_Pistol";
			fireNotPossible = "passenger_inside_2_Aim_Pistol";
			GetOutHigh = "AcrgPknlMstpSnonWnonDnon_AmovPercMstpSrasWpstDnon_getOutHigh";
			GetOutHighHemtt = "AcrgPknlMstpSnonWnonDnon_AmovPercMstpSrasWpstDnon_getOutHighHemtt";
			GetOutHighZamak = "AcrgPknlMstpSnonWnonDnon_AmovPercMstpSrasWpstDnon_getOutHighZamak";
			GetOutLow = "AcrgPknlMstpSnonWnonDnon_AmovPercMstpSrasWpstDnon_getOutLow";
			GetOutMedium = "AcrgPknlMstpSnonWnonDnon_AmovPercMstpSrasWpstDnon_getOutMedium";
			GetOutSDV = "AcrgPknlMstpSnonWnonDnon_AmovPercMstpSrasWpstDnon_getOutHigh";
			PlayerStand = "passenger_inside_2_Aim_Pistol";
			Stand = "passenger_inside_2_Idle_Pistol";
			stop = "passenger_inside_2_Idle_Pistol";
			stopRelaxed = "passenger_inside_2_Idle_Pistol";
			Unconscious = "passenger_inside_2_Die_Pistol";
			upDegree = "ManPosHandGunStand";
		};
		class passenger_inside_2IdleUnarmedActions: FFV_BaseActions
		{
			Binoculars = "passenger_inside_2_Aim_Unarmed_Binoc";
			civil = "passenger_inside_2_Idle_Unarmed";
			default = "passenger_inside_2_Idle_Unarmed";
			die = "passenger_inside_2_Die_Pistol";
			GetOutHigh = "AcrgPknlMstpSnonWnonDnon_AmovPercMstpSnonWnonDnon_getOutHigh";
			GetOutHighHemtt = "AcrgPknlMstpSnonWnonDnon_AmovPercMstpSnonWnonDnon_getOutHighHemtt";
			GetOutHighZamak = "AcrgPknlMstpSnonWnonDnon_AmovPercMstpSnonWnonDnon_getOutHighZamak";
			GetOutLow = "AcrgPknlMstpSnonWnonDnon_AmovPercMstpSnonWnonDnon_getOutLow";
			GetOutMedium = "AcrgPknlMstpSnonWnonDnon_AmovPercMstpSnonWnonDnon_getOutMedium";
			GetOutSDV = "AcrgPknlMstpSnonWnonDnon_AmovPercMstpSnonWnonDnon_getOutHigh";
			HandGunOn = "passenger_inside_2_Aim_Pistol";
			PrimaryWeapon = "passenger_inside_2_Aim";
			Stand = "passenger_inside_2_Idle_Unarmed";
			stop = "passenger_inside_2_Idle_Unarmed";
			stopRelaxed = "passenger_inside_2_Idle_Unarmed";
			throwGrenade[] = {"GestureThrowGrenadeUna", "Gesture"};
			Unconscious = "passenger_inside_2_Die_Pistol";
			upDegree = "ManPosNoWeapon";
		};
		class passenger_inside_2ObstructedActions: passenger_inside_2Actions
		{
			Combat = "passenger_inside_2_Aim";
			default = "passenger_inside_2_Obstructed";
			fireNotPossible = "passenger_inside_2_Obstructed";
			PlayerStand = "passenger_inside_2_Obstructed";
			stop = "passenger_inside_2_Obstructed";
			stopRelaxed = "passenger_inside_2_Obstructed";
		};
		class passenger_inside_2ObstructedPistolActions: passenger_inside_2PistolActions
		{
			Combat = "passenger_inside_2_Aim_Pistol";
			default = "passenger_inside_2_Obstructed_Pistol";
			fireNotPossible = "passenger_inside_2_Obstructed_Pistol";
			PlayerStand = "passenger_inside_2_Obstructed_Pistol";
			Stand = "passenger_inside_2_Obstructed_Pistol";
			stop = "passenger_inside_2_Obstructed_Pistol";
			stopRelaxed = "passenger_inside_2_Obstructed_Pistol";
		};
		class passenger_inside_2PistolActions: passenger_inside_2Actions
		{
			Binoculars = "passenger_inside_2_Aim_Pistol_Binoc";
			default = "passenger_inside_2_Aim_Pistol";
			die = "passenger_inside_2_Die_Pistol";
			GetOutHigh = "AcrgPknlMstpSnonWnonDnon_AmovPercMstpSrasWpstDnon_getOutHigh";
			GetOutHighHemtt = "AcrgPknlMstpSnonWnonDnon_AmovPercMstpSrasWpstDnon_getOutHighHemtt";
			GetOutHighZamak = "AcrgPknlMstpSnonWnonDnon_AmovPercMstpSrasWpstDnon_getOutHighZamak";
			GetOutLow = "AcrgPknlMstpSnonWnonDnon_AmovPercMstpSrasWpstDnon_getOutLow";
			GetOutMedium = "AcrgPknlMstpSnonWnonDnon_AmovPercMstpSrasWpstDnon_getOutMedium";
			GetOutSDV = "AcrgPknlMstpSnonWnonDnon_AmovPercMstpSrasWpstDnon_getOutHigh";
			Obstructed = "passenger_inside_2_Obstructed_Pistol";
			Stand = "passenger_inside_2_Idle_Pistol";
			stop = "passenger_inside_2_Aim_Pistol";
			stopRelaxed = "passenger_inside_2_Aim_Pistol";
			throwGrenade[] = {"GestureThrowGrenadePistol", "Gesture"};
			Unconscious = "passenger_inside_2_Die_Pistol";
			upDegree = "ManPosHandGunStand";
		};
		class passenger_inside_3Actions: FFV_BaseActions
		{
			Binoculars = "passenger_inside_3_Aim_Binoc";
			civil = "passenger_inside_3_Idle_Unarmed";
			default = "passenger_inside_3_Aim";
			die = "passenger_inside_3_Die";
			HandGunOn = "passenger_inside_3_Aim_Pistol";
			Obstructed = "passenger_inside_3_Obstructed";
			PrimaryWeapon = "passenger_inside_3_Aim";
			Stand = "passenger_inside_3_Idle";
			stop = "passenger_inside_3_Aim";
			stopRelaxed = "passenger_inside_3_Aim";
			Unconscious = "passenger_inside_3_Die";
			upDegree = "ManPosCombat";
		};
		class passenger_inside_3BinocActions: passenger_inside_3Actions
		{
			binocOn = "";
			default = "passenger_inside_3_Aim_Binoc";
			stop = "passenger_inside_3_Aim_Binoc";
			stopRelaxed = "passenger_inside_3_Aim_Binoc";
			upDegree = "ManPosBinocStand";
		};
		class passenger_inside_3BinocPistolActions: passenger_inside_3BinocActions
		{
			default = "passenger_inside_3_Aim_Pistol_Binoc";
			die = "passenger_inside_3_Die_Pistol";
			GetOutHigh = "AcrgPknlMstpSnonWnonDnon_AmovPercMstpSrasWpstDnon_getOutHigh";
			GetOutHighHemtt = "AcrgPknlMstpSnonWnonDnon_AmovPercMstpSrasWpstDnon_getOutHighHemtt";
			GetOutHighZamak = "AcrgPknlMstpSnonWnonDnon_AmovPercMstpSrasWpstDnon_getOutHighZamak";
			GetOutLow = "AcrgPknlMstpSnonWnonDnon_AmovPercMstpSrasWpstDnon_getOutLow";
			GetOutMedium = "AcrgPknlMstpSnonWnonDnon_AmovPercMstpSrasWpstDnon_getOutMedium";
			GetOutSDV = "AcrgPknlMstpSnonWnonDnon_AmovPercMstpSrasWpstDnon_getOutHigh";
			stop = "passenger_inside_3_Aim_Pistol_Binoc";
			stopRelaxed = "passenger_inside_3_Aim_Pistol_Binoc";
			Unconscious = "passenger_inside_3_Die_Pistol";
		};
		class passenger_inside_3BinocUnarmedActions: passenger_inside_3BinocActions
		{
			default = "passenger_inside_3_Aim_Unarmed_Binoc";
			die = "passenger_inside_3_Die_Pistol";
			GetOutHigh = "AcrgPknlMstpSnonWnonDnon_AmovPercMstpSnonWnonDnon_getOutHigh";
			GetOutHighHemtt = "AcrgPknlMstpSnonWnonDnon_AmovPercMstpSnonWnonDnon_getOutHighHemtt";
			GetOutHighZamak = "AcrgPknlMstpSnonWnonDnon_AmovPercMstpSnonWnonDnon_getOutHighZamak";
			GetOutLow = "AcrgPknlMstpSnonWnonDnon_AmovPercMstpSnonWnonDnon_getOutLow";
			GetOutMedium = "AcrgPknlMstpSnonWnonDnon_AmovPercMstpSnonWnonDnon_getOutMedium";
			GetOutSDV = "AcrgPknlMstpSnonWnonDnon_AmovPercMstpSnonWnonDnon_getOutHigh";
			stop = "passenger_inside_3_Aim_Unarmed_Binoc";
			stopRelaxed = "passenger_inside_3_Aim_Unarmed_Binoc";
			Unconscious = "passenger_inside_3_Die_Pistol";
		};
		class passenger_inside_3DeadActions: FFV_BaseActions
		{
			default = "passenger_inside_3_Die";
			die = "passenger_inside_3_Die";
			stop = "passenger_inside_3_Die";
			Unconscious = "passenger_inside_3_Die";
		};
		class passenger_inside_3DeadPistolActions: FFV_BaseActions
		{
			default = "passenger_inside_3_Die_Pistol";
			die = "passenger_inside_3_Die_Pistol";
			stop = "passenger_inside_3_Die_Pistol";
			Unconscious = "passenger_inside_3_Die_Pistol";
		};
		class passenger_inside_3IdleActions: passenger_inside_3Actions
		{
			Combat = "passenger_inside_3_Aim";
			default = "passenger_inside_3_Idle";
			fireNotPossible = "passenger_inside_3_Aim";
			PlayerStand = "passenger_inside_3_Aim";
			stop = "passenger_inside_3_Idle";
			stopRelaxed = "passenger_inside_3_Idle";
			upDegree = "ManPosStand";
		};
		class passenger_inside_3IdlePistolActions: passenger_inside_3Actions
		{
			Combat = "passenger_inside_3_Aim_Pistol";
			default = "passenger_inside_3_Idle_Pistol";
			die = "passenger_inside_3_Die_Pistol";
			fireNotPossible = "passenger_inside_3_Aim_Pistol";
			GetOutHigh = "AcrgPknlMstpSnonWnonDnon_AmovPercMstpSrasWpstDnon_getOutHigh";
			GetOutHighHemtt = "AcrgPknlMstpSnonWnonDnon_AmovPercMstpSrasWpstDnon_getOutHighHemtt";
			GetOutHighZamak = "AcrgPknlMstpSnonWnonDnon_AmovPercMstpSrasWpstDnon_getOutHighZamak";
			GetOutLow = "AcrgPknlMstpSnonWnonDnon_AmovPercMstpSrasWpstDnon_getOutLow";
			GetOutMedium = "AcrgPknlMstpSnonWnonDnon_AmovPercMstpSrasWpstDnon_getOutMedium";
			GetOutSDV = "AcrgPknlMstpSnonWnonDnon_AmovPercMstpSrasWpstDnon_getOutHigh";
			PlayerStand = "passenger_inside_3_Aim_Pistol";
			Stand = "passenger_inside_3_Idle_Pistol";
			stop = "passenger_inside_3_Idle_Pistol";
			stopRelaxed = "passenger_inside_3_Idle_Pistol";
			Unconscious = "passenger_inside_3_Die_Pistol";
			upDegree = "ManPosHandGunStand";
		};
		class passenger_inside_3IdleUnarmedActions: FFV_BaseActions
		{
			Binoculars = "passenger_inside_3_Aim_Unarmed_Binoc";
			civil = "passenger_inside_3_Idle_Unarmed";
			default = "passenger_inside_3_Idle_Unarmed";
			die = "passenger_inside_3_Die_Pistol";
			GetOutHigh = "AcrgPknlMstpSnonWnonDnon_AmovPercMstpSnonWnonDnon_getOutHigh";
			GetOutHighHemtt = "AcrgPknlMstpSnonWnonDnon_AmovPercMstpSnonWnonDnon_getOutHighHemtt";
			GetOutHighZamak = "AcrgPknlMstpSnonWnonDnon_AmovPercMstpSnonWnonDnon_getOutHighZamak";
			GetOutLow = "AcrgPknlMstpSnonWnonDnon_AmovPercMstpSnonWnonDnon_getOutLow";
			GetOutMedium = "AcrgPknlMstpSnonWnonDnon_AmovPercMstpSnonWnonDnon_getOutMedium";
			GetOutSDV = "AcrgPknlMstpSnonWnonDnon_AmovPercMstpSnonWnonDnon_getOutHigh";
			HandGunOn = "passenger_inside_3_Aim_Pistol";
			PrimaryWeapon = "passenger_inside_3_Aim";
			Stand = "passenger_inside_3_Idle_Unarmed";
			stop = "passenger_inside_3_Idle_Unarmed";
			stopRelaxed = "passenger_inside_3_Idle_Unarmed";
			throwGrenade[] = {"GestureThrowGrenadeUna", "Gesture"};
			Unconscious = "passenger_inside_3_Die_Pistol";
			upDegree = "ManPosNoWeapon";
		};
		class passenger_inside_3ObstructedActions: passenger_inside_3Actions
		{
			Combat = "passenger_inside_3_Aim";
			default = "passenger_inside_3_Obstructed";
			fireNotPossible = "passenger_inside_3_Obstructed";
			PlayerStand = "passenger_inside_3_Obstructed";
			stop = "passenger_inside_3_Obstructed";
			stopRelaxed = "passenger_inside_3_Obstructed";
		};
		class passenger_inside_3ObstructedPistolActions: passenger_inside_3PistolActions
		{
			Combat = "passenger_inside_3_Aim_Pistol";
			default = "passenger_inside_3_Obstructed_Pistol";
			fireNotPossible = "passenger_inside_3_Obstructed_Pistol";
			PlayerStand = "passenger_inside_3_Obstructed_Pistol";
			Stand = "passenger_inside_3_Obstructed_Pistol";
			stop = "passenger_inside_3_Obstructed_Pistol";
			stopRelaxed = "passenger_inside_3_Obstructed_Pistol";
		};
		class passenger_inside_3PistolActions: passenger_inside_3Actions
		{
			Binoculars = "passenger_inside_3_Aim_Pistol_Binoc";
			default = "passenger_inside_3_Aim_Pistol";
			die = "passenger_inside_3_Die_Pistol";
			GetOutHigh = "AcrgPknlMstpSnonWnonDnon_AmovPercMstpSrasWpstDnon_getOutHigh";
			GetOutHighHemtt = "AcrgPknlMstpSnonWnonDnon_AmovPercMstpSrasWpstDnon_getOutHighHemtt";
			GetOutHighZamak = "AcrgPknlMstpSnonWnonDnon_AmovPercMstpSrasWpstDnon_getOutHighZamak";
			GetOutLow = "AcrgPknlMstpSnonWnonDnon_AmovPercMstpSrasWpstDnon_getOutLow";
			GetOutMedium = "AcrgPknlMstpSnonWnonDnon_AmovPercMstpSrasWpstDnon_getOutMedium";
			GetOutSDV = "AcrgPknlMstpSnonWnonDnon_AmovPercMstpSrasWpstDnon_getOutHigh";
			Obstructed = "passenger_inside_3_Obstructed_Pistol";
			Stand = "passenger_inside_3_Idle_Pistol";
			stop = "passenger_inside_3_Aim_Pistol";
			stopRelaxed = "passenger_inside_3_Aim_Pistol";
			throwGrenade[] = {"GestureThrowGrenadePistol", "Gesture"};
			Unconscious = "passenger_inside_3_Die_Pistol";
			upDegree = "ManPosHandGunStand";
		};
		class passenger_inside_4Actions: FFV_BaseActions
		{
			Binoculars = "passenger_inside_4_Aim_Binoc";
			civil = "passenger_inside_4_Idle_Unarmed";
			default = "passenger_inside_4_Aim";
			die = "passenger_inside_4_Die";
			HandGunOn = "passenger_inside_4_Aim_Pistol";
			Obstructed = "passenger_inside_4_Obstructed";
			PrimaryWeapon = "passenger_inside_4_Aim";
			Stand = "passenger_inside_4_Idle";
			stop = "passenger_inside_4_Aim";
			stopRelaxed = "passenger_inside_4_Aim";
			Unconscious = "passenger_inside_4_Die";
			upDegree = "ManPosCombat";
		};
		class passenger_inside_4BinocActions: passenger_inside_4Actions
		{
			binocOn = "";
			default = "passenger_inside_4_Aim_Binoc";
			stop = "passenger_inside_4_Aim_Binoc";
			stopRelaxed = "passenger_inside_4_Aim_Binoc";
			upDegree = "ManPosBinocStand";
		};
		class passenger_inside_4BinocPistolActions: passenger_inside_4BinocActions
		{
			default = "passenger_inside_4_Aim_Pistol_Binoc";
			die = "passenger_inside_4_Die_Pistol";
			GetOutHigh = "AcrgPknlMstpSnonWnonDnon_AmovPercMstpSrasWpstDnon_getOutHigh";
			GetOutHighHemtt = "AcrgPknlMstpSnonWnonDnon_AmovPercMstpSrasWpstDnon_getOutHighHemtt";
			GetOutHighZamak = "AcrgPknlMstpSnonWnonDnon_AmovPercMstpSrasWpstDnon_getOutHighZamak";
			GetOutLow = "AcrgPknlMstpSnonWnonDnon_AmovPercMstpSrasWpstDnon_getOutLow";
			GetOutMedium = "AcrgPknlMstpSnonWnonDnon_AmovPercMstpSrasWpstDnon_getOutMedium";
			GetOutSDV = "AcrgPknlMstpSnonWnonDnon_AmovPercMstpSrasWpstDnon_getOutHigh";
			stop = "passenger_inside_4_Aim_Pistol_Binoc";
			stopRelaxed = "passenger_inside_4_Aim_Pistol_Binoc";
			Unconscious = "passenger_inside_4_Die_Pistol";
		};
		class passenger_inside_4BinocUnarmedActions: passenger_inside_4BinocActions
		{
			default = "passenger_inside_4_Aim_Unarmed_Binoc";
			die = "passenger_inside_4_Die_Pistol";
			GetOutHigh = "AcrgPknlMstpSnonWnonDnon_AmovPercMstpSnonWnonDnon_getOutHigh";
			GetOutHighHemtt = "AcrgPknlMstpSnonWnonDnon_AmovPercMstpSnonWnonDnon_getOutHighHemtt";
			GetOutHighZamak = "AcrgPknlMstpSnonWnonDnon_AmovPercMstpSnonWnonDnon_getOutHighZamak";
			GetOutLow = "AcrgPknlMstpSnonWnonDnon_AmovPercMstpSnonWnonDnon_getOutLow";
			GetOutMedium = "AcrgPknlMstpSnonWnonDnon_AmovPercMstpSnonWnonDnon_getOutMedium";
			GetOutSDV = "AcrgPknlMstpSnonWnonDnon_AmovPercMstpSnonWnonDnon_getOutHigh";
			stop = "passenger_inside_4_Aim_Unarmed_Binoc";
			stopRelaxed = "passenger_inside_4_Aim_Unarmed_Binoc";
			Unconscious = "passenger_inside_4_Die_Pistol";
		};
		class passenger_inside_4DeadActions: FFV_BaseActions
		{
			default = "passenger_inside_4_Die";
			die = "passenger_inside_4_Die";
			stop = "passenger_inside_4_Die";
			Unconscious = "passenger_inside_4_Die";
		};
		class passenger_inside_4DeadPistolActions: FFV_BaseActions
		{
			default = "passenger_inside_4_Die_Pistol";
			die = "passenger_inside_4_Die_Pistol";
			stop = "passenger_inside_4_Die_Pistol";
			Unconscious = "passenger_inside_4_Die_Pistol";
		};
		class passenger_inside_4IdleActions: passenger_inside_4Actions
		{
			Combat = "passenger_inside_4_Aim";
			default = "passenger_inside_4_Idle";
			fireNotPossible = "passenger_inside_4_Aim";
			PlayerStand = "passenger_inside_4_Aim";
			stop = "passenger_inside_4_Idle";
			stopRelaxed = "passenger_inside_4_Idle";
			upDegree = "ManPosStand";
		};
		class passenger_inside_4IdlePistolActions: passenger_inside_4Actions
		{
			Combat = "passenger_inside_4_Aim_Pistol";
			default = "passenger_inside_4_Idle_Pistol";
			die = "passenger_inside_4_Die_Pistol";
			fireNotPossible = "passenger_inside_4_Aim_Pistol";
			GetOutHigh = "AcrgPknlMstpSnonWnonDnon_AmovPercMstpSrasWpstDnon_getOutHigh";
			GetOutHighHemtt = "AcrgPknlMstpSnonWnonDnon_AmovPercMstpSrasWpstDnon_getOutHighHemtt";
			GetOutHighZamak = "AcrgPknlMstpSnonWnonDnon_AmovPercMstpSrasWpstDnon_getOutHighZamak";
			GetOutLow = "AcrgPknlMstpSnonWnonDnon_AmovPercMstpSrasWpstDnon_getOutLow";
			GetOutMedium = "AcrgPknlMstpSnonWnonDnon_AmovPercMstpSrasWpstDnon_getOutMedium";
			GetOutSDV = "AcrgPknlMstpSnonWnonDnon_AmovPercMstpSrasWpstDnon_getOutHigh";
			PlayerStand = "passenger_inside_4_Aim_Pistol";
			Stand = "passenger_inside_4_Idle_Pistol";
			stop = "passenger_inside_4_Idle_Pistol";
			stopRelaxed = "passenger_inside_4_Idle_Pistol";
			Unconscious = "passenger_inside_4_Die_Pistol";
			upDegree = "ManPosHandGunStand";
		};
		class passenger_inside_4IdleUnarmedActions: FFV_BaseActions
		{
			Binoculars = "passenger_inside_4_Aim_Unarmed_Binoc";
			civil = "passenger_inside_4_Idle_Unarmed";
			default = "passenger_inside_4_Idle_Unarmed";
			die = "passenger_inside_4_Die_Pistol";
			GetOutHigh = "AcrgPknlMstpSnonWnonDnon_AmovPercMstpSnonWnonDnon_getOutHigh";
			GetOutHighHemtt = "AcrgPknlMstpSnonWnonDnon_AmovPercMstpSnonWnonDnon_getOutHighHemtt";
			GetOutHighZamak = "AcrgPknlMstpSnonWnonDnon_AmovPercMstpSnonWnonDnon_getOutHighZamak";
			GetOutLow = "AcrgPknlMstpSnonWnonDnon_AmovPercMstpSnonWnonDnon_getOutLow";
			GetOutMedium = "AcrgPknlMstpSnonWnonDnon_AmovPercMstpSnonWnonDnon_getOutMedium";
			GetOutSDV = "AcrgPknlMstpSnonWnonDnon_AmovPercMstpSnonWnonDnon_getOutHigh";
			HandGunOn = "passenger_inside_4_Aim_Pistol";
			PrimaryWeapon = "passenger_inside_4_Aim";
			Stand = "passenger_inside_4_Idle_Unarmed";
			stop = "passenger_inside_4_Idle_Unarmed";
			stopRelaxed = "passenger_inside_4_Idle_Unarmed";
			throwGrenade[] = {"GestureThrowGrenadeUna", "Gesture"};
			Unconscious = "passenger_inside_4_Die_Pistol";
			upDegree = "ManPosNoWeapon";
		};
		class passenger_inside_4ObstructedActions: passenger_inside_4Actions
		{
			Combat = "passenger_inside_4_Aim";
			default = "passenger_inside_4_Obstructed";
			fireNotPossible = "passenger_inside_4_Obstructed";
			PlayerStand = "passenger_inside_4_Obstructed";
			stop = "passenger_inside_4_Obstructed";
			stopRelaxed = "passenger_inside_4_Obstructed";
		};
		class passenger_inside_4ObstructedPistolActions: passenger_inside_4PistolActions
		{
			Combat = "passenger_inside_4_Aim_Pistol";
			default = "passenger_inside_4_Obstructed_Pistol";
			fireNotPossible = "passenger_inside_4_Obstructed_Pistol";
			PlayerStand = "passenger_inside_4_Obstructed_Pistol";
			Stand = "passenger_inside_4_Obstructed_Pistol";
			stop = "passenger_inside_4_Obstructed_Pistol";
			stopRelaxed = "passenger_inside_4_Obstructed_Pistol";
		};
		class passenger_inside_4PistolActions: passenger_inside_4Actions
		{
			Binoculars = "passenger_inside_4_Aim_Pistol_Binoc";
			default = "passenger_inside_4_Aim_Pistol";
			die = "passenger_inside_4_Die_Pistol";
			GetOutHigh = "AcrgPknlMstpSnonWnonDnon_AmovPercMstpSrasWpstDnon_getOutHigh";
			GetOutHighHemtt = "AcrgPknlMstpSnonWnonDnon_AmovPercMstpSrasWpstDnon_getOutHighHemtt";
			GetOutHighZamak = "AcrgPknlMstpSnonWnonDnon_AmovPercMstpSrasWpstDnon_getOutHighZamak";
			GetOutLow = "AcrgPknlMstpSnonWnonDnon_AmovPercMstpSrasWpstDnon_getOutLow";
			GetOutMedium = "AcrgPknlMstpSnonWnonDnon_AmovPercMstpSrasWpstDnon_getOutMedium";
			GetOutSDV = "AcrgPknlMstpSnonWnonDnon_AmovPercMstpSrasWpstDnon_getOutHigh";
			Obstructed = "passenger_inside_4_Obstructed_Pistol";
			Stand = "passenger_inside_4_Idle_Pistol";
			stop = "passenger_inside_4_Aim_Pistol";
			stopRelaxed = "passenger_inside_4_Aim_Pistol";
			throwGrenade[] = {"GestureThrowGrenadePistol", "Gesture"};
			Unconscious = "passenger_inside_4_Die_Pistol";
			upDegree = "ManPosHandGunStand";
		};
		class passenger_inside_5Actions: FFV_BaseActions
		{
			Binoculars = "passenger_inside_5_Aim_Binoc";
			civil = "passenger_inside_5_Idle_Unarmed";
			default = "passenger_inside_5_Aim";
			die = "passenger_inside_5_Die";
			HandGunOn = "passenger_inside_5_Aim_Pistol";
			Obstructed = "passenger_inside_5_Obstructed";
			PrimaryWeapon = "passenger_inside_5_Aim";
			Stand = "passenger_inside_5_Idle";
			stop = "passenger_inside_5_Aim";
			stopRelaxed = "passenger_inside_5_Aim";
			Unconscious = "passenger_inside_5_Die";
			upDegree = "ManPosCombat";
		};
		class passenger_inside_5BinocActions: passenger_inside_5Actions
		{
			binocOn = "";
			default = "passenger_inside_5_Aim_Binoc";
			stop = "passenger_inside_5_Aim_Binoc";
			stopRelaxed = "passenger_inside_5_Aim_Binoc";
			upDegree = "ManPosBinocStand";
		};
		class passenger_inside_5BinocPistolActions: passenger_inside_5BinocActions
		{
			default = "passenger_inside_5_Aim_Pistol_Binoc";
			die = "passenger_inside_5_Die_Pistol";
			GetOutHigh = "AcrgPknlMstpSnonWnonDnon_AmovPercMstpSrasWpstDnon_getOutHigh";
			GetOutHighHemtt = "AcrgPknlMstpSnonWnonDnon_AmovPercMstpSrasWpstDnon_getOutHighHemtt";
			GetOutHighZamak = "AcrgPknlMstpSnonWnonDnon_AmovPercMstpSrasWpstDnon_getOutHighZamak";
			GetOutLow = "AcrgPknlMstpSnonWnonDnon_AmovPercMstpSrasWpstDnon_getOutLow";
			GetOutMedium = "AcrgPknlMstpSnonWnonDnon_AmovPercMstpSrasWpstDnon_getOutMedium";
			GetOutSDV = "AcrgPknlMstpSnonWnonDnon_AmovPercMstpSrasWpstDnon_getOutHigh";
			stop = "passenger_inside_5_Aim_Pistol_Binoc";
			stopRelaxed = "passenger_inside_5_Aim_Pistol_Binoc";
			Unconscious = "passenger_inside_5_Die_Pistol";
		};
		class passenger_inside_5BinocUnarmedActions: passenger_inside_5BinocActions
		{
			default = "passenger_inside_5_Aim_Unarmed_Binoc";
			die = "passenger_inside_5_Die_Pistol";
			GetOutHigh = "AcrgPknlMstpSnonWnonDnon_AmovPercMstpSnonWnonDnon_getOutHigh";
			GetOutHighHemtt = "AcrgPknlMstpSnonWnonDnon_AmovPercMstpSnonWnonDnon_getOutHighHemtt";
			GetOutHighZamak = "AcrgPknlMstpSnonWnonDnon_AmovPercMstpSnonWnonDnon_getOutHighZamak";
			GetOutLow = "AcrgPknlMstpSnonWnonDnon_AmovPercMstpSnonWnonDnon_getOutLow";
			GetOutMedium = "AcrgPknlMstpSnonWnonDnon_AmovPercMstpSnonWnonDnon_getOutMedium";
			GetOutSDV = "AcrgPknlMstpSnonWnonDnon_AmovPercMstpSnonWnonDnon_getOutHigh";
			stop = "passenger_inside_5_Aim_Unarmed_Binoc";
			stopRelaxed = "passenger_inside_5_Aim_Unarmed_Binoc";
			Unconscious = "passenger_inside_5_Die_Pistol";
		};
		class passenger_inside_5DeadActions: FFV_BaseActions
		{
			default = "passenger_inside_5_Die";
			die = "passenger_inside_5_Die";
			stop = "passenger_inside_5_Die";
			Unconscious = "passenger_inside_5_Die";
		};
		class passenger_inside_5DeadPistolActions: FFV_BaseActions
		{
			default = "passenger_inside_5_Die_Pistol";
			die = "passenger_inside_5_Die_Pistol";
			stop = "passenger_inside_5_Die_Pistol";
			Unconscious = "passenger_inside_5_Die_Pistol";
		};
		class passenger_inside_5IdleActions: passenger_inside_5Actions
		{
			Combat = "passenger_inside_5_Aim";
			default = "passenger_inside_5_Idle";
			fireNotPossible = "passenger_inside_5_Aim";
			PlayerStand = "passenger_inside_5_Aim";
			stop = "passenger_inside_5_Idle";
			stopRelaxed = "passenger_inside_5_Idle";
			upDegree = "ManPosStand";
		};
		class passenger_inside_5IdlePistolActions: passenger_inside_5Actions
		{
			Combat = "passenger_inside_5_Aim_Pistol";
			default = "passenger_inside_5_Idle_Pistol";
			die = "passenger_inside_5_Die_Pistol";
			fireNotPossible = "passenger_inside_5_Aim_Pistol";
			GetOutHigh = "AcrgPknlMstpSnonWnonDnon_AmovPercMstpSrasWpstDnon_getOutHigh";
			GetOutHighHemtt = "AcrgPknlMstpSnonWnonDnon_AmovPercMstpSrasWpstDnon_getOutHighHemtt";
			GetOutHighZamak = "AcrgPknlMstpSnonWnonDnon_AmovPercMstpSrasWpstDnon_getOutHighZamak";
			GetOutLow = "AcrgPknlMstpSnonWnonDnon_AmovPercMstpSrasWpstDnon_getOutLow";
			GetOutMedium = "AcrgPknlMstpSnonWnonDnon_AmovPercMstpSrasWpstDnon_getOutMedium";
			GetOutSDV = "AcrgPknlMstpSnonWnonDnon_AmovPercMstpSrasWpstDnon_getOutHigh";
			PlayerStand = "passenger_inside_5_Aim_Pistol";
			Stand = "passenger_inside_5_Idle_Pistol";
			stop = "passenger_inside_5_Idle_Pistol";
			stopRelaxed = "passenger_inside_5_Idle_Pistol";
			Unconscious = "passenger_inside_5_Die_Pistol";
			upDegree = "ManPosHandGunStand";
		};
		class passenger_inside_5IdleUnarmedActions: FFV_BaseActions
		{
			Binoculars = "passenger_inside_5_Aim_Unarmed_Binoc";
			civil = "passenger_inside_5_Idle_Unarmed";
			default = "passenger_inside_5_Idle_Unarmed";
			die = "passenger_inside_5_Die_Pistol";
			GetOutHigh = "AcrgPknlMstpSnonWnonDnon_AmovPercMstpSnonWnonDnon_getOutHigh";
			GetOutHighHemtt = "AcrgPknlMstpSnonWnonDnon_AmovPercMstpSnonWnonDnon_getOutHighHemtt";
			GetOutHighZamak = "AcrgPknlMstpSnonWnonDnon_AmovPercMstpSnonWnonDnon_getOutHighZamak";
			GetOutLow = "AcrgPknlMstpSnonWnonDnon_AmovPercMstpSnonWnonDnon_getOutLow";
			GetOutMedium = "AcrgPknlMstpSnonWnonDnon_AmovPercMstpSnonWnonDnon_getOutMedium";
			GetOutSDV = "AcrgPknlMstpSnonWnonDnon_AmovPercMstpSnonWnonDnon_getOutHigh";
			HandGunOn = "passenger_inside_5_Aim_Pistol";
			PrimaryWeapon = "passenger_inside_5_Aim";
			Stand = "passenger_inside_5_Idle_Unarmed";
			stop = "passenger_inside_5_Idle_Unarmed";
			stopRelaxed = "passenger_inside_5_Idle_Unarmed";
			throwGrenade[] = {"GestureThrowGrenadeUna", "Gesture"};
			Unconscious = "passenger_inside_5_Die_Pistol";
			upDegree = "ManPosNoWeapon";
		};
		class passenger_inside_5ObstructedActions: passenger_inside_5Actions
		{
			Combat = "passenger_inside_5_Aim";
			default = "passenger_inside_5_Obstructed";
			fireNotPossible = "passenger_inside_5_Obstructed";
			PlayerStand = "passenger_inside_5_Obstructed";
			stop = "passenger_inside_5_Obstructed";
			stopRelaxed = "passenger_inside_5_Obstructed";
		};
		class passenger_inside_5ObstructedPistolActions: passenger_inside_5PistolActions
		{
			Combat = "passenger_inside_5_Aim_Pistol";
			default = "passenger_inside_5_Obstructed_Pistol";
			fireNotPossible = "passenger_inside_5_Obstructed_Pistol";
			PlayerStand = "passenger_inside_5_Obstructed_Pistol";
			Stand = "passenger_inside_5_Obstructed_Pistol";
			stop = "passenger_inside_5_Obstructed_Pistol";
			stopRelaxed = "passenger_inside_5_Obstructed_Pistol";
		};
		class passenger_inside_5PistolActions: passenger_inside_5Actions
		{
			Binoculars = "passenger_inside_5_Aim_Pistol_Binoc";
			default = "passenger_inside_5_Aim_Pistol";
			die = "passenger_inside_5_Die_Pistol";
			GetOutHigh = "AcrgPknlMstpSnonWnonDnon_AmovPercMstpSrasWpstDnon_getOutHigh";
			GetOutHighHemtt = "AcrgPknlMstpSnonWnonDnon_AmovPercMstpSrasWpstDnon_getOutHighHemtt";
			GetOutHighZamak = "AcrgPknlMstpSnonWnonDnon_AmovPercMstpSrasWpstDnon_getOutHighZamak";
			GetOutLow = "AcrgPknlMstpSnonWnonDnon_AmovPercMstpSrasWpstDnon_getOutLow";
			GetOutMedium = "AcrgPknlMstpSnonWnonDnon_AmovPercMstpSrasWpstDnon_getOutMedium";
			GetOutSDV = "AcrgPknlMstpSnonWnonDnon_AmovPercMstpSrasWpstDnon_getOutHigh";
			Obstructed = "passenger_inside_5_Obstructed_Pistol";
			Stand = "passenger_inside_5_Idle_Pistol";
			stop = "passenger_inside_5_Aim_Pistol";
			stopRelaxed = "passenger_inside_5_Aim_Pistol";
			throwGrenade[] = {"GestureThrowGrenadePistol", "Gesture"};
			Unconscious = "passenger_inside_5_Die_Pistol";
			upDegree = "ManPosHandGunStand";
		};
		class passenger_inside_6Actions: FFV_BaseActions
		{
			Binoculars = "passenger_inside_6_Aim_Binoc";
			civil = "passenger_inside_6_Idle_Unarmed";
			default = "passenger_inside_6_Aim";
			die = "passenger_inside_6_Die";
			HandGunOn = "passenger_inside_6_Aim_Pistol";
			Obstructed = "passenger_inside_6_Obstructed";
			PrimaryWeapon = "passenger_inside_6_Aim";
			Stand = "passenger_inside_6_Idle";
			stop = "passenger_inside_6_Aim";
			stopRelaxed = "passenger_inside_6_Aim";
			Unconscious = "passenger_inside_6_Die";
			upDegree = "ManPosCombat";
		};
		class passenger_inside_6BinocActions: passenger_inside_6Actions
		{
			binocOn = "";
			default = "passenger_inside_6_Aim_Binoc";
			stop = "passenger_inside_6_Aim_Binoc";
			stopRelaxed = "passenger_inside_6_Aim_Binoc";
			upDegree = "ManPosBinocStand";
		};
		class passenger_inside_6BinocPistolActions: passenger_inside_6BinocActions
		{
			default = "passenger_inside_6_Aim_Pistol_Binoc";
			die = "passenger_inside_6_Die_Pistol";
			GetOutHigh = "AcrgPknlMstpSnonWnonDnon_AmovPercMstpSrasWpstDnon_getOutHigh";
			GetOutHighHemtt = "AcrgPknlMstpSnonWnonDnon_AmovPercMstpSrasWpstDnon_getOutHighHemtt";
			GetOutHighZamak = "AcrgPknlMstpSnonWnonDnon_AmovPercMstpSrasWpstDnon_getOutHighZamak";
			GetOutLow = "AcrgPknlMstpSnonWnonDnon_AmovPercMstpSrasWpstDnon_getOutLow";
			GetOutMedium = "AcrgPknlMstpSnonWnonDnon_AmovPercMstpSrasWpstDnon_getOutMedium";
			GetOutSDV = "AcrgPknlMstpSnonWnonDnon_AmovPercMstpSrasWpstDnon_getOutHigh";
			stop = "passenger_inside_6_Aim_Pistol_Binoc";
			stopRelaxed = "passenger_inside_6_Aim_Pistol_Binoc";
			Unconscious = "passenger_inside_6_Die_Pistol";
		};
		class passenger_inside_6BinocUnarmedActions: passenger_inside_6BinocActions
		{
			default = "passenger_inside_6_Aim_Unarmed_Binoc";
			die = "passenger_inside_6_Die_Pistol";
			GetOutHigh = "AcrgPknlMstpSnonWnonDnon_AmovPercMstpSnonWnonDnon_getOutHigh";
			GetOutHighHemtt = "AcrgPknlMstpSnonWnonDnon_AmovPercMstpSnonWnonDnon_getOutHighHemtt";
			GetOutHighZamak = "AcrgPknlMstpSnonWnonDnon_AmovPercMstpSnonWnonDnon_getOutHighZamak";
			GetOutLow = "AcrgPknlMstpSnonWnonDnon_AmovPercMstpSnonWnonDnon_getOutLow";
			GetOutMedium = "AcrgPknlMstpSnonWnonDnon_AmovPercMstpSnonWnonDnon_getOutMedium";
			GetOutSDV = "AcrgPknlMstpSnonWnonDnon_AmovPercMstpSnonWnonDnon_getOutHigh";
			stop = "passenger_inside_6_Aim_Unarmed_Binoc";
			stopRelaxed = "passenger_inside_6_Aim_Unarmed_Binoc";
			Unconscious = "passenger_inside_6_Die_Pistol";
		};
		class passenger_inside_6DeadActions: FFV_BaseActions
		{
			default = "passenger_inside_6_Die";
			die = "passenger_inside_6_Die";
			stop = "passenger_inside_6_Die";
			Unconscious = "passenger_inside_6_Die";
		};
		class passenger_inside_6DeadPistolActions: FFV_BaseActions
		{
			default = "passenger_inside_6_Die_Pistol";
			die = "passenger_inside_6_Die_Pistol";
			stop = "passenger_inside_6_Die_Pistol";
			Unconscious = "passenger_inside_6_Die_Pistol";
		};
		class passenger_inside_6IdleActions: passenger_inside_6Actions
		{
			Combat = "passenger_inside_6_Aim";
			default = "passenger_inside_6_Idle";
			fireNotPossible = "passenger_inside_6_Aim";
			PlayerStand = "passenger_inside_6_Aim";
			stop = "passenger_inside_6_Idle";
			stopRelaxed = "passenger_inside_6_Idle";
			upDegree = "ManPosStand";
		};
		class passenger_inside_6IdlePistolActions: passenger_inside_6Actions
		{
			Combat = "passenger_inside_6_Aim_Pistol";
			default = "passenger_inside_6_Idle_Pistol";
			die = "passenger_inside_6_Die_Pistol";
			fireNotPossible = "passenger_inside_6_Aim_Pistol";
			GetOutHigh = "AcrgPknlMstpSnonWnonDnon_AmovPercMstpSrasWpstDnon_getOutHigh";
			GetOutHighHemtt = "AcrgPknlMstpSnonWnonDnon_AmovPercMstpSrasWpstDnon_getOutHighHemtt";
			GetOutHighZamak = "AcrgPknlMstpSnonWnonDnon_AmovPercMstpSrasWpstDnon_getOutHighZamak";
			GetOutLow = "AcrgPknlMstpSnonWnonDnon_AmovPercMstpSrasWpstDnon_getOutLow";
			GetOutMedium = "AcrgPknlMstpSnonWnonDnon_AmovPercMstpSrasWpstDnon_getOutMedium";
			GetOutSDV = "AcrgPknlMstpSnonWnonDnon_AmovPercMstpSrasWpstDnon_getOutHigh";
			PlayerStand = "passenger_inside_6_Aim_Pistol";
			Stand = "passenger_inside_6_Idle_Pistol";
			stop = "passenger_inside_6_Idle_Pistol";
			stopRelaxed = "passenger_inside_6_Idle_Pistol";
			Unconscious = "passenger_inside_6_Die_Pistol";
			upDegree = "ManPosHandGunStand";
		};
		class passenger_inside_6IdleUnarmedActions: FFV_BaseActions
		{
			Binoculars = "passenger_inside_6_Aim_Unarmed_Binoc";
			civil = "passenger_inside_6_Idle_Unarmed";
			default = "passenger_inside_6_Idle_Unarmed";
			die = "passenger_inside_6_Die_Pistol";
			GetOutHigh = "AcrgPknlMstpSnonWnonDnon_AmovPercMstpSnonWnonDnon_getOutHigh";
			GetOutHighHemtt = "AcrgPknlMstpSnonWnonDnon_AmovPercMstpSnonWnonDnon_getOutHighHemtt";
			GetOutHighZamak = "AcrgPknlMstpSnonWnonDnon_AmovPercMstpSnonWnonDnon_getOutHighZamak";
			GetOutLow = "AcrgPknlMstpSnonWnonDnon_AmovPercMstpSnonWnonDnon_getOutLow";
			GetOutMedium = "AcrgPknlMstpSnonWnonDnon_AmovPercMstpSnonWnonDnon_getOutMedium";
			GetOutSDV = "AcrgPknlMstpSnonWnonDnon_AmovPercMstpSnonWnonDnon_getOutHigh";
			HandGunOn = "passenger_inside_6_Aim_Pistol";
			PrimaryWeapon = "passenger_inside_6_Aim";
			Stand = "passenger_inside_6_Idle_Unarmed";
			stop = "passenger_inside_6_Idle_Unarmed";
			stopRelaxed = "passenger_inside_6_Idle_Unarmed";
			throwGrenade[] = {"GestureThrowGrenadeUna", "Gesture"};
			Unconscious = "passenger_inside_6_Die_Pistol";
			upDegree = "ManPosNoWeapon";
		};
		class passenger_inside_6ObstructedActions: passenger_inside_6Actions
		{
			Combat = "passenger_inside_6_Aim";
			default = "passenger_inside_6_Obstructed";
			fireNotPossible = "passenger_inside_6_Obstructed";
			PlayerStand = "passenger_inside_6_Obstructed";
			stop = "passenger_inside_6_Obstructed";
			stopRelaxed = "passenger_inside_6_Obstructed";
		};
		class passenger_inside_6ObstructedPistolActions: passenger_inside_6PistolActions
		{
			Combat = "passenger_inside_6_Aim_Pistol";
			default = "passenger_inside_6_Obstructed_Pistol";
			fireNotPossible = "passenger_inside_6_Obstructed_Pistol";
			PlayerStand = "passenger_inside_6_Obstructed_Pistol";
			Stand = "passenger_inside_6_Obstructed_Pistol";
			stop = "passenger_inside_6_Obstructed_Pistol";
			stopRelaxed = "passenger_inside_6_Obstructed_Pistol";
		};
		class passenger_inside_6PistolActions: passenger_inside_6Actions
		{
			Binoculars = "passenger_inside_6_Aim_Pistol_Binoc";
			default = "passenger_inside_6_Aim_Pistol";
			die = "passenger_inside_6_Die_Pistol";
			GetOutHigh = "AcrgPknlMstpSnonWnonDnon_AmovPercMstpSrasWpstDnon_getOutHigh";
			GetOutHighHemtt = "AcrgPknlMstpSnonWnonDnon_AmovPercMstpSrasWpstDnon_getOutHighHemtt";
			GetOutHighZamak = "AcrgPknlMstpSnonWnonDnon_AmovPercMstpSrasWpstDnon_getOutHighZamak";
			GetOutLow = "AcrgPknlMstpSnonWnonDnon_AmovPercMstpSrasWpstDnon_getOutLow";
			GetOutMedium = "AcrgPknlMstpSnonWnonDnon_AmovPercMstpSrasWpstDnon_getOutMedium";
			GetOutSDV = "AcrgPknlMstpSnonWnonDnon_AmovPercMstpSrasWpstDnon_getOutHigh";
			Obstructed = "passenger_inside_6_Obstructed_Pistol";
			Stand = "passenger_inside_6_Idle_Pistol";
			stop = "passenger_inside_6_Aim_Pistol";
			stopRelaxed = "passenger_inside_6_Aim_Pistol";
			throwGrenade[] = {"GestureThrowGrenadePistol", "Gesture"};
			Unconscious = "passenger_inside_6_Die_Pistol";
			upDegree = "ManPosHandGunStand";
		};
		class passenger_inside_7Actions: FFV_BaseActions
		{
			Binoculars = "passenger_inside_7_Aim_Binoc";
			civil = "passenger_inside_7_Idle_Unarmed";
			default = "passenger_inside_7_Aim";
			die = "passenger_inside_7_Die";
			HandGunOn = "passenger_inside_7_Aim_Pistol";
			Obstructed = "passenger_inside_7_Obstructed";
			PrimaryWeapon = "passenger_inside_7_Aim";
			Stand = "passenger_inside_7_Idle";
			stop = "passenger_inside_7_Aim";
			stopRelaxed = "passenger_inside_7_Aim";
			Unconscious = "passenger_inside_7_Die";
			upDegree = "ManPosCombat";
		};
		class passenger_inside_7BinocActions: passenger_inside_7Actions
		{
			binocOn = "";
			default = "passenger_inside_7_Aim_Binoc";
			stop = "passenger_inside_7_Aim_Binoc";
			stopRelaxed = "passenger_inside_7_Aim_Binoc";
			upDegree = "ManPosBinocStand";
		};
		class passenger_inside_7BinocPistolActions: passenger_inside_7BinocActions
		{
			default = "passenger_inside_7_Aim_Pistol_Binoc";
			die = "passenger_inside_7_Die_Pistol";
			GetOutHigh = "AcrgPknlMstpSnonWnonDnon_AmovPercMstpSrasWpstDnon_getOutHigh";
			GetOutHighHemtt = "AcrgPknlMstpSnonWnonDnon_AmovPercMstpSrasWpstDnon_getOutHighHemtt";
			GetOutHighZamak = "AcrgPknlMstpSnonWnonDnon_AmovPercMstpSrasWpstDnon_getOutHighZamak";
			GetOutLow = "AcrgPknlMstpSnonWnonDnon_AmovPercMstpSrasWpstDnon_getOutLow";
			GetOutMedium = "AcrgPknlMstpSnonWnonDnon_AmovPercMstpSrasWpstDnon_getOutMedium";
			GetOutSDV = "AcrgPknlMstpSnonWnonDnon_AmovPercMstpSrasWpstDnon_getOutHigh";
			stop = "passenger_inside_7_Aim_Pistol_Binoc";
			stopRelaxed = "passenger_inside_7_Aim_Pistol_Binoc";
			Unconscious = "passenger_inside_7_Die_Pistol";
		};
		class passenger_inside_7BinocUnarmedActions: passenger_inside_7BinocActions
		{
			default = "passenger_inside_7_Aim_Unarmed_Binoc";
			die = "passenger_inside_7_Die_Pistol";
			GetOutHigh = "AcrgPknlMstpSnonWnonDnon_AmovPercMstpSnonWnonDnon_getOutHigh";
			GetOutHighHemtt = "AcrgPknlMstpSnonWnonDnon_AmovPercMstpSnonWnonDnon_getOutHighHemtt";
			GetOutHighZamak = "AcrgPknlMstpSnonWnonDnon_AmovPercMstpSnonWnonDnon_getOutHighZamak";
			GetOutLow = "AcrgPknlMstpSnonWnonDnon_AmovPercMstpSnonWnonDnon_getOutLow";
			GetOutMedium = "AcrgPknlMstpSnonWnonDnon_AmovPercMstpSnonWnonDnon_getOutMedium";
			GetOutSDV = "AcrgPknlMstpSnonWnonDnon_AmovPercMstpSnonWnonDnon_getOutHigh";
			stop = "passenger_inside_7_Aim_Unarmed_Binoc";
			stopRelaxed = "passenger_inside_7_Aim_Unarmed_Binoc";
			Unconscious = "passenger_inside_7_Die_Pistol";
		};
		class passenger_inside_7DeadActions: FFV_BaseActions
		{
			default = "passenger_inside_7_Die";
			die = "passenger_inside_7_Die";
			stop = "passenger_inside_7_Die";
			Unconscious = "passenger_inside_7_Die";
		};
		class passenger_inside_7DeadPistolActions: FFV_BaseActions
		{
			default = "passenger_inside_7_Die_Pistol";
			die = "passenger_inside_7_Die_Pistol";
			stop = "passenger_inside_7_Die_Pistol";
			Unconscious = "passenger_inside_7_Die_Pistol";
		};
		class passenger_inside_7IdleActions: passenger_inside_7Actions
		{
			Combat = "passenger_inside_7_Aim";
			default = "passenger_inside_7_Idle";
			fireNotPossible = "passenger_inside_7_Aim";
			PlayerStand = "passenger_inside_7_Aim";
			stop = "passenger_inside_7_Idle";
			stopRelaxed = "passenger_inside_7_Idle";
			upDegree = "ManPosStand";
		};
		class passenger_inside_7IdlePistolActions: passenger_inside_7Actions
		{
			Combat = "passenger_inside_7_Aim_Pistol";
			default = "passenger_inside_7_Idle_Pistol";
			die = "passenger_inside_7_Die_Pistol";
			fireNotPossible = "passenger_inside_7_Aim_Pistol";
			GetOutHigh = "AcrgPknlMstpSnonWnonDnon_AmovPercMstpSrasWpstDnon_getOutHigh";
			GetOutHighHemtt = "AcrgPknlMstpSnonWnonDnon_AmovPercMstpSrasWpstDnon_getOutHighHemtt";
			GetOutHighZamak = "AcrgPknlMstpSnonWnonDnon_AmovPercMstpSrasWpstDnon_getOutHighZamak";
			GetOutLow = "AcrgPknlMstpSnonWnonDnon_AmovPercMstpSrasWpstDnon_getOutLow";
			GetOutMedium = "AcrgPknlMstpSnonWnonDnon_AmovPercMstpSrasWpstDnon_getOutMedium";
			GetOutSDV = "AcrgPknlMstpSnonWnonDnon_AmovPercMstpSrasWpstDnon_getOutHigh";
			PlayerStand = "passenger_inside_7_Aim_Pistol";
			Stand = "passenger_inside_7_Idle_Pistol";
			stop = "passenger_inside_7_Idle_Pistol";
			stopRelaxed = "passenger_inside_7_Idle_Pistol";
			Unconscious = "passenger_inside_7_Die_Pistol";
			upDegree = "ManPosHandGunStand";
		};
		class passenger_inside_7IdleUnarmedActions: FFV_BaseActions
		{
			Binoculars = "passenger_inside_7_Aim_Unarmed_Binoc";
			civil = "passenger_inside_7_Idle_Unarmed";
			default = "passenger_inside_7_Idle_Unarmed";
			die = "passenger_inside_7_Die_Pistol";
			GetOutHigh = "AcrgPknlMstpSnonWnonDnon_AmovPercMstpSnonWnonDnon_getOutHigh";
			GetOutHighHemtt = "AcrgPknlMstpSnonWnonDnon_AmovPercMstpSnonWnonDnon_getOutHighHemtt";
			GetOutHighZamak = "AcrgPknlMstpSnonWnonDnon_AmovPercMstpSnonWnonDnon_getOutHighZamak";
			GetOutLow = "AcrgPknlMstpSnonWnonDnon_AmovPercMstpSnonWnonDnon_getOutLow";
			GetOutMedium = "AcrgPknlMstpSnonWnonDnon_AmovPercMstpSnonWnonDnon_getOutMedium";
			GetOutSDV = "AcrgPknlMstpSnonWnonDnon_AmovPercMstpSnonWnonDnon_getOutHigh";
			HandGunOn = "passenger_inside_7_Aim_Pistol";
			PrimaryWeapon = "passenger_inside_7_Aim";
			Stand = "passenger_inside_7_Idle_Unarmed";
			stop = "passenger_inside_7_Idle_Unarmed";
			stopRelaxed = "passenger_inside_7_Idle_Unarmed";
			throwGrenade[] = {"GestureThrowGrenadeUna", "Gesture"};
			Unconscious = "passenger_inside_7_Die_Pistol";
			upDegree = "ManPosNoWeapon";
		};
		class passenger_inside_7ObstructedActions: passenger_inside_7Actions
		{
			Combat = "passenger_inside_7_Aim";
			default = "passenger_inside_7_Obstructed";
			fireNotPossible = "passenger_inside_7_Obstructed";
			PlayerStand = "passenger_inside_7_Obstructed";
			stop = "passenger_inside_7_Obstructed";
			stopRelaxed = "passenger_inside_7_Obstructed";
		};
		class passenger_inside_7ObstructedPistolActions: passenger_inside_7PistolActions
		{
			Combat = "passenger_inside_7_Aim_Pistol";
			default = "passenger_inside_7_Obstructed_Pistol";
			fireNotPossible = "passenger_inside_7_Obstructed_Pistol";
			PlayerStand = "passenger_inside_7_Obstructed_Pistol";
			Stand = "passenger_inside_7_Obstructed_Pistol";
			stop = "passenger_inside_7_Obstructed_Pistol";
			stopRelaxed = "passenger_inside_7_Obstructed_Pistol";
		};
		class passenger_inside_7PistolActions: passenger_inside_7Actions
		{
			Binoculars = "passenger_inside_7_Aim_Pistol_Binoc";
			default = "passenger_inside_7_Aim_Pistol";
			die = "passenger_inside_7_Die_Pistol";
			GetOutHigh = "AcrgPknlMstpSnonWnonDnon_AmovPercMstpSrasWpstDnon_getOutHigh";
			GetOutHighHemtt = "AcrgPknlMstpSnonWnonDnon_AmovPercMstpSrasWpstDnon_getOutHighHemtt";
			GetOutHighZamak = "AcrgPknlMstpSnonWnonDnon_AmovPercMstpSrasWpstDnon_getOutHighZamak";
			GetOutLow = "AcrgPknlMstpSnonWnonDnon_AmovPercMstpSrasWpstDnon_getOutLow";
			GetOutMedium = "AcrgPknlMstpSnonWnonDnon_AmovPercMstpSrasWpstDnon_getOutMedium";
			GetOutSDV = "AcrgPknlMstpSnonWnonDnon_AmovPercMstpSrasWpstDnon_getOutHigh";
			Obstructed = "passenger_inside_7_Obstructed_Pistol";
			Stand = "passenger_inside_7_Idle_Pistol";
			stop = "passenger_inside_7_Aim_Pistol";
			stopRelaxed = "passenger_inside_7_Aim_Pistol";
			throwGrenade[] = {"GestureThrowGrenadePistol", "Gesture"};
			Unconscious = "passenger_inside_7_Die_Pistol";
			upDegree = "ManPosHandGunStand";
		};
		class passenger_inside_8Actions: FFV_BaseActions
		{
			Binoculars = "passenger_inside_8_Aim_Binoc";
			civil = "passenger_inside_8_Idle_Unarmed";
			default = "passenger_inside_8_Aim";
			die = "passenger_inside_8_Die";
			HandGunOn = "passenger_inside_8_Aim_Pistol";
			Obstructed = "passenger_inside_8_Obstructed";
			PrimaryWeapon = "passenger_inside_8_Aim";
			Stand = "passenger_inside_8_Idle";
			stop = "passenger_inside_8_Aim";
			stopRelaxed = "passenger_inside_8_Aim";
			Unconscious = "passenger_inside_8_Die";
			upDegree = "ManPosCombat";
		};
		class passenger_inside_8BinocActions: passenger_inside_8Actions
		{
			binocOn = "";
			default = "passenger_inside_8_Aim_Binoc";
			stop = "passenger_inside_8_Aim_Binoc";
			stopRelaxed = "passenger_inside_8_Aim_Binoc";
			upDegree = "ManPosBinocStand";
		};
		class passenger_inside_8BinocPistolActions: passenger_inside_8BinocActions
		{
			default = "passenger_inside_8_Aim_Pistol_Binoc";
			die = "passenger_inside_8_Die_Pistol";
			GetOutHigh = "AcrgPknlMstpSnonWnonDnon_AmovPercMstpSrasWpstDnon_getOutHigh";
			GetOutHighHemtt = "AcrgPknlMstpSnonWnonDnon_AmovPercMstpSrasWpstDnon_getOutHighHemtt";
			GetOutHighZamak = "AcrgPknlMstpSnonWnonDnon_AmovPercMstpSrasWpstDnon_getOutHighZamak";
			GetOutLow = "AcrgPknlMstpSnonWnonDnon_AmovPercMstpSrasWpstDnon_getOutLow";
			GetOutMedium = "AcrgPknlMstpSnonWnonDnon_AmovPercMstpSrasWpstDnon_getOutMedium";
			GetOutSDV = "AcrgPknlMstpSnonWnonDnon_AmovPercMstpSrasWpstDnon_getOutHigh";
			stop = "passenger_inside_8_Aim_Pistol_Binoc";
			stopRelaxed = "passenger_inside_8_Aim_Pistol_Binoc";
			Unconscious = "passenger_inside_8_Die_Pistol";
		};
		class passenger_inside_8BinocUnarmedActions: passenger_inside_8BinocActions
		{
			default = "passenger_inside_8_Aim_Unarmed_Binoc";
			die = "passenger_inside_8_Die_Pistol";
			GetOutHigh = "AcrgPknlMstpSnonWnonDnon_AmovPercMstpSnonWnonDnon_getOutHigh";
			GetOutHighHemtt = "AcrgPknlMstpSnonWnonDnon_AmovPercMstpSnonWnonDnon_getOutHighHemtt";
			GetOutHighZamak = "AcrgPknlMstpSnonWnonDnon_AmovPercMstpSnonWnonDnon_getOutHighZamak";
			GetOutLow = "AcrgPknlMstpSnonWnonDnon_AmovPercMstpSnonWnonDnon_getOutLow";
			GetOutMedium = "AcrgPknlMstpSnonWnonDnon_AmovPercMstpSnonWnonDnon_getOutMedium";
			GetOutSDV = "AcrgPknlMstpSnonWnonDnon_AmovPercMstpSnonWnonDnon_getOutHigh";
			stop = "passenger_inside_8_Aim_Unarmed_Binoc";
			stopRelaxed = "passenger_inside_8_Aim_Unarmed_Binoc";
			Unconscious = "passenger_inside_8_Die_Pistol";
		};
		class passenger_inside_8DeadActions: FFV_BaseActions
		{
			default = "passenger_inside_8_Die";
			die = "passenger_inside_8_Die";
			stop = "passenger_inside_8_Die";
			Unconscious = "passenger_inside_8_Die";
		};
		class passenger_inside_8DeadPistolActions: FFV_BaseActions
		{
			default = "passenger_inside_8_Die_Pistol";
			die = "passenger_inside_8_Die_Pistol";
			stop = "passenger_inside_8_Die_Pistol";
			Unconscious = "passenger_inside_8_Die_Pistol";
		};
		class passenger_inside_8IdleActions: passenger_inside_8Actions
		{
			Combat = "passenger_inside_8_Aim";
			default = "passenger_inside_8_Idle";
			fireNotPossible = "passenger_inside_8_Aim";
			PlayerStand = "passenger_inside_8_Aim";
			stop = "passenger_inside_8_Idle";
			stopRelaxed = "passenger_inside_8_Idle";
			upDegree = "ManPosStand";
		};
		class passenger_inside_8IdlePistolActions: passenger_inside_8Actions
		{
			Combat = "passenger_inside_8_Aim_Pistol";
			default = "passenger_inside_8_Idle_Pistol";
			die = "passenger_inside_8_Die_Pistol";
			fireNotPossible = "passenger_inside_8_Aim_Pistol";
			GetOutHigh = "AcrgPknlMstpSnonWnonDnon_AmovPercMstpSrasWpstDnon_getOutHigh";
			GetOutHighHemtt = "AcrgPknlMstpSnonWnonDnon_AmovPercMstpSrasWpstDnon_getOutHighHemtt";
			GetOutHighZamak = "AcrgPknlMstpSnonWnonDnon_AmovPercMstpSrasWpstDnon_getOutHighZamak";
			GetOutLow = "AcrgPknlMstpSnonWnonDnon_AmovPercMstpSrasWpstDnon_getOutLow";
			GetOutMedium = "AcrgPknlMstpSnonWnonDnon_AmovPercMstpSrasWpstDnon_getOutMedium";
			GetOutSDV = "AcrgPknlMstpSnonWnonDnon_AmovPercMstpSrasWpstDnon_getOutHigh";
			PlayerStand = "passenger_inside_8_Aim_Pistol";
			Stand = "passenger_inside_8_Idle_Pistol";
			stop = "passenger_inside_8_Idle_Pistol";
			stopRelaxed = "passenger_inside_8_Idle_Pistol";
			Unconscious = "passenger_inside_8_Die_Pistol";
			upDegree = "ManPosHandGunStand";
		};
		class passenger_inside_8IdleUnarmedActions: FFV_BaseActions
		{
			Binoculars = "passenger_inside_8_Aim_Unarmed_Binoc";
			civil = "passenger_inside_8_Idle_Unarmed";
			default = "passenger_inside_8_Idle_Unarmed";
			die = "passenger_inside_8_Die_Pistol";
			GetOutHigh = "AcrgPknlMstpSnonWnonDnon_AmovPercMstpSnonWnonDnon_getOutHigh";
			GetOutHighHemtt = "AcrgPknlMstpSnonWnonDnon_AmovPercMstpSnonWnonDnon_getOutHighHemtt";
			GetOutHighZamak = "AcrgPknlMstpSnonWnonDnon_AmovPercMstpSnonWnonDnon_getOutHighZamak";
			GetOutLow = "AcrgPknlMstpSnonWnonDnon_AmovPercMstpSnonWnonDnon_getOutLow";
			GetOutMedium = "AcrgPknlMstpSnonWnonDnon_AmovPercMstpSnonWnonDnon_getOutMedium";
			GetOutSDV = "AcrgPknlMstpSnonWnonDnon_AmovPercMstpSnonWnonDnon_getOutHigh";
			HandGunOn = "passenger_inside_8_Aim_Pistol";
			PrimaryWeapon = "passenger_inside_8_Aim";
			Stand = "passenger_inside_8_Idle_Unarmed";
			stop = "passenger_inside_8_Idle_Unarmed";
			stopRelaxed = "passenger_inside_8_Idle_Unarmed";
			throwGrenade[] = {"GestureThrowGrenadeUna", "Gesture"};
			Unconscious = "passenger_inside_8_Die_Pistol";
			upDegree = "ManPosNoWeapon";
		};
		class passenger_inside_8ObstructedActions: passenger_inside_8Actions
		{
			Combat = "passenger_inside_8_Aim";
			default = "passenger_inside_8_Obstructed";
			fireNotPossible = "passenger_inside_8_Obstructed";
			PlayerStand = "passenger_inside_8_Obstructed";
			stop = "passenger_inside_8_Obstructed";
			stopRelaxed = "passenger_inside_8_Obstructed";
		};
		class passenger_inside_8ObstructedPistolActions: passenger_inside_8PistolActions
		{
			Combat = "passenger_inside_8_Aim_Pistol";
			default = "passenger_inside_8_Obstructed_Pistol";
			fireNotPossible = "passenger_inside_8_Obstructed_Pistol";
			PlayerStand = "passenger_inside_8_Obstructed_Pistol";
			Stand = "passenger_inside_8_Obstructed_Pistol";
			stop = "passenger_inside_8_Obstructed_Pistol";
			stopRelaxed = "passenger_inside_8_Obstructed_Pistol";
		};
		class passenger_inside_8PistolActions: passenger_inside_8Actions
		{
			Binoculars = "passenger_inside_8_Aim_Pistol_Binoc";
			default = "passenger_inside_8_Aim_Pistol";
			die = "passenger_inside_8_Die_Pistol";
			GetOutHigh = "AcrgPknlMstpSnonWnonDnon_AmovPercMstpSrasWpstDnon_getOutHigh";
			GetOutHighHemtt = "AcrgPknlMstpSnonWnonDnon_AmovPercMstpSrasWpstDnon_getOutHighHemtt";
			GetOutHighZamak = "AcrgPknlMstpSnonWnonDnon_AmovPercMstpSrasWpstDnon_getOutHighZamak";
			GetOutLow = "AcrgPknlMstpSnonWnonDnon_AmovPercMstpSrasWpstDnon_getOutLow";
			GetOutMedium = "AcrgPknlMstpSnonWnonDnon_AmovPercMstpSrasWpstDnon_getOutMedium";
			GetOutSDV = "AcrgPknlMstpSnonWnonDnon_AmovPercMstpSrasWpstDnon_getOutHigh";
			Obstructed = "passenger_inside_8_Obstructed_Pistol";
			Stand = "passenger_inside_8_Idle_Pistol";
			stop = "passenger_inside_8_Aim_Pistol";
			stopRelaxed = "passenger_inside_8_Aim_Pistol";
			throwGrenade[] = {"GestureThrowGrenadePistol", "Gesture"};
			Unconscious = "passenger_inside_8_Die_Pistol";
			upDegree = "ManPosHandGunStand";
		};
		class PistolAdjustBKneelActions: PistolAdjustKneelBaseActions
		{
			AdjustB = "AadjPpneMstpSrasWpstDup";
			AdjustF = "AmovPknlMstpSrasWpstDnon";
			Combat = "AadjPknlMstpSrasWpstDdown";
			default = "AadjPknlMstpSrasWpstDdown";
			FastB = "AadjPknlMrunSrasWpstDb_down";
			FastF = "AadjPknlMevaSrasWpstDf_down";
			FastL = "AadjPknlMrunSrasWpstDl_down";
			FastLB = "AadjPknlMrunSrasWpstDbl_down";
			FastLF = "AadjPknlMevaSrasWpstDfl_down";
			FastR = "AadjPknlMrunSrasWpstDr_down";
			FastRB = "AadjPknlMrunSrasWpstDbr_down";
			FastRF = "AadjPknlMevaSrasWpstDfr_down";
			FireNotPossible = "AadjPknlMstpSrasWpstDdown";
			PlayerSlowB = "AadjPknlMrunSrasWpstDb_down";
			PlayerSlowF = "AadjPknlMrunSrasWpstDf_down";
			PlayerSlowL = "AadjPknlMrunSrasWpstDl_down";
			PlayerSlowLB = "AadjPknlMrunSrasWpstDbl_down";
			PlayerSlowLF = "AadjPknlMrunSrasWpstDfl_down";
			PlayerSlowR = "AadjPknlMrunSrasWpstDr_down";
			PlayerSlowRB = "AadjPknlMrunSrasWpstDbr_down";
			PlayerSlowRF = "AadjPknlMrunSrasWpstDfr_down";
			PlayerStand = "AadjPercMstpSrasWpstDdown";
			PlayerTactB = "AadjPknlMtacSrasWpstDb_down";
			PlayerTactF = "AadjPknlMtacSrasWpstDf_down";
			PlayerTactL = "AadjPknlMtacSrasWpstDl_down";
			PlayerTactLB = "AadjPknlMtacSrasWpstDbl_down";
			PlayerTactLF = "AadjPknlMtacSrasWpstDfl_down";
			PlayerTactR = "AadjPknlMtacSrasWpstDr_down";
			PlayerTactRB = "AadjPknlMtacSrasWpstDbr_down";
			PlayerTactRF = "AadjPknlMtacSrasWpstDfr_down";
			PlayerWalkB = "AadjPknlMwlkSrasWpstDb_down";
			PlayerWalkF = "AadjPknlMwlkSrasWpstDf_down";
			PlayerWalkL = "AadjPknlMwlkSrasWpstDl_down";
			PlayerWalkLB = "AadjPknlMwlkSrasWpstDbl_down";
			PlayerWalkLF = "AadjPknlMwlkSrasWpstDfl_down";
			PlayerWalkR = "AadjPknlMwlkSrasWpstDr_down";
			PlayerWalkRB = "AadjPknlMwlkSrasWpstDbr_down";
			PlayerWalkRF = "AadjPknlMwlkSrasWpstDfr_down";
			SlowB = "AadjPknlMrunSrasWpstDb_down";
			SlowF = "AadjPknlMrunSrasWpstDf_down";
			SlowL = "AadjPknlMrunSrasWpstDl_down";
			SlowLB = "AadjPknlMrunSrasWpstDbl_down";
			SlowLF = "AadjPknlMrunSrasWpstDfl_down";
			SlowR = "AadjPknlMrunSrasWpstDr_down";
			SlowRB = "AadjPknlMrunSrasWpstDbr_down";
			SlowRF = "AadjPknlMrunSrasWpstDfr_down";
			Stand = "AmovPknlMstpSlowWpstDnon";
			stop = "AadjPknlMstpSrasWpstDdown";
			StopRelaxed = "AadjPknlMstpSrasWpstDdown";
			TactB = "AadjPknlMtacSrasWpstDb_down";
			TactF = "AadjPknlMtacSrasWpstDf_down";
			TactL = "AadjPknlMtacSrasWpstDl_down";
			TactLB = "AadjPknlMtacSrasWpstDbl_down";
			TactLF = "AadjPknlMtacSrasWpstDfl_down";
			TactR = "AadjPknlMtacSrasWpstDr_down";
			TactRB = "AadjPknlMtacSrasWpstDbr_down";
			TactRF = "AadjPknlMtacSrasWpstDfr_down";
			turnL = "AadjPknlMstpSrasWpstDdown";
			turnLRelaxed = "AadjPknlMstpSrasWpstDdown";
			turnR = "AadjPknlMstpSrasWpstDdown";
			turnRRelaxed = "AadjPknlMstpSrasWpstDdown";
			up = "AadjPercMstpSrasWpstDdown";
			WalkB = "AadjPknlMwlkSrasWpstDb_down";
			WalkF = "AadjPknlMwlkSrasWpstDf_down";
			WalkL = "AadjPknlMwlkSrasWpstDl_down";
			WalkLB = "AadjPknlMwlkSrasWpstDbl_down";
			WalkLF = "AadjPknlMwlkSrasWpstDfl_down";
			WalkR = "AadjPknlMwlkSrasWpstDr_down";
			WalkRB = "AadjPknlMwlkSrasWpstDbr_down";
			WalkRF = "AadjPknlMwlkSrasWpstDfr_down";
		};
		class PistolAdjustBKneelActionsRunB: PistolAdjustBKneelActions
		{
			AdjustB = "";
			AdjustF = "";
			AdjustL = "";
			AdjustR = "";
			PlayerCrouch = "AadjPknlMtacSrasWpstDb_down";
			PlayerStand = "AadjPercMrunSrasWpstDb_down";
			Up = "AadjPercMrunSrasWpstDb_down";
		};
		class PistolAdjustBKneelActionsRunBL: PistolAdjustBKneelActions
		{
			AdjustB = "";
			AdjustF = "";
			AdjustL = "";
			AdjustR = "";
			PlayerCrouch = "AadjPknlMtacSrasWpstDbl_down";
			PlayerStand = "AadjPercMrunSrasWpstDbl_down";
			Up = "AadjPercMrunSrasWpstDbl_down";
		};
		class PistolAdjustBKneelActionsRunBR: PistolAdjustBKneelActions
		{
			AdjustB = "";
			AdjustF = "";
			AdjustL = "";
			AdjustR = "";
			PlayerCrouch = "AadjPknlMtacSrasWpstDbr_down";
			PlayerStand = "AadjPercMrunSrasWpstDbr_down";
		};
		class PistolAdjustBKneelActionsRunF: PistolAdjustBKneelActions
		{
			AdjustB = "";
			AdjustF = "";
			AdjustL = "";
			AdjustR = "";
			PlayerCrouch = "AadjPknlMtacSrasWpstDf_down";
			PlayerStand = "AadjPercMrunSrasWpstDf_down";
			Up = "AadjPercMrunSrasWpstDf_down";
		};
		class PistolAdjustBKneelActionsRunFL: PistolAdjustBKneelActions
		{
			AdjustB = "";
			AdjustF = "";
			AdjustL = "";
			AdjustR = "";
			PlayerCrouch = "AadjPknlMtacSrasWpstDfl_down";
			PlayerStand = "AadjPercMrunSrasWpstDfl_down";
			Up = "AadjPercMrunSrasWpstDfl_down";
		};
		class PistolAdjustBKneelActionsRunFR: PistolAdjustBKneelActions
		{
			AdjustB = "";
			AdjustF = "";
			AdjustL = "";
			AdjustR = "";
			PlayerCrouch = "AadjPknlMtacSrasWpstDfr_down";
			PlayerStand = "AadjPercMrunSrasWpstDfr_down";
			Up = "AadjPercMrunSrasWpstDfr_down";
		};
		class PistolAdjustBKneelActionsRunL: PistolAdjustBKneelActions
		{
			AdjustB = "";
			AdjustF = "";
			AdjustL = "";
			AdjustR = "";
			PlayerCrouch = "AadjPknlMtacSrasWpstDl_down";
			PlayerStand = "AadjPercMrunSrasWpstDl_down";
			Up = "AadjPercMrunSrasWpstDl_down";
		};
		class PistolAdjustBKneelActionsRunR: PistolAdjustBKneelActions
		{
			AdjustB = "";
			AdjustF = "";
			AdjustL = "";
			AdjustR = "";
			PlayerCrouch = "AadjPknlMtacSrasWpstDr_down";
			PlayerStand = "AadjPercMrunSrasWpstDr_down";
			Up = "AadjPercMrunSrasWpstDr_down";
		};
		class PistolAdjustBKneelActionsTacB: PistolAdjustBKneelActions
		{
			AdjustB = "";
			AdjustF = "";
			AdjustL = "";
			AdjustR = "";
			PlayerCrouch = "AadjPknlMrunSrasWpstDb_down";
			PlayerStand = "AadjPercMtacSrasWpstDb_down";
			Up = "AadjPercMtacSrasWpstDb_down";
		};
		class PistolAdjustBKneelActionsTacBL: PistolAdjustBKneelActions
		{
			AdjustB = "";
			AdjustF = "";
			AdjustL = "";
			AdjustR = "";
			PlayerCrouch = "AadjPknlMrunSrasWpstDbl_down";
			PlayerStand = "AadjPercMtacSrasWpstDbl_down";
			Up = "AadjPercMtacSrasWpstDbl_down";
		};
		class PistolAdjustBKneelActionsTacBR: PistolAdjustBKneelActions
		{
			AdjustB = "";
			AdjustF = "";
			AdjustL = "";
			AdjustR = "";
			PlayerCrouch = "AadjPknlMrunSrasWpstDbr_down";
			PlayerStand = "AadjPercMtacSrasWpstDbr_down";
		};
		class PistolAdjustBKneelActionsTacF: PistolAdjustBKneelActions
		{
			AdjustB = "";
			AdjustF = "";
			AdjustL = "";
			AdjustR = "";
			PlayerCrouch = "AadjPknlMrunSrasWpstDf_down";
			PlayerStand = "AadjPercMtacSrasWpstDf_down";
			Up = "AadjPercMtacSrasWpstDf_down";
		};
		class PistolAdjustBKneelActionsTacFL: PistolAdjustBKneelActions
		{
			AdjustB = "";
			AdjustF = "";
			AdjustL = "";
			AdjustR = "";
			PlayerCrouch = "AadjPknlMrunSrasWpstDfl_down";
			PlayerStand = "AadjPercMtacSrasWpstDfl_down";
			Up = "AadjPercMtacSrasWpstDfl_down";
		};
		class PistolAdjustBKneelActionsTacFR: PistolAdjustBKneelActions
		{
			AdjustB = "";
			AdjustF = "";
			AdjustL = "";
			AdjustR = "";
			PlayerCrouch = "AadjPknlMrunSrasWpstDfr_down";
			PlayerStand = "AadjPercMtacSrasWpstDfr_down";
			Up = "AadjPercMtacSrasWpstDfr_down";
		};
		class PistolAdjustBKneelActionsTacL: PistolAdjustBKneelActions
		{
			AdjustB = "";
			AdjustF = "";
			AdjustL = "";
			AdjustR = "";
			PlayerCrouch = "AadjPknlMrunSrasWpstDl_down";
			PlayerStand = "AadjPercMtacSrasWpstDl_down";
			Up = "AadjPercMtacSrasWpstDl_down";
		};
		class PistolAdjustBKneelActionsTacR: PistolAdjustBKneelActions
		{
			AdjustB = "";
			AdjustF = "";
			AdjustL = "";
			AdjustR = "";
			PlayerCrouch = "AadjPknlMrunSrasWpstDr_down";
			PlayerStand = "AadjPercMtacSrasWpstDr_down";
			Up = "AadjPercMtacSrasWpstDr_down";
		};
		class PistolAdjustBKneelActionsWlkB: PistolAdjustBKneelActions
		{
			AdjustB = "";
			AdjustF = "";
			AdjustL = "";
			AdjustR = "";
			PlayerStand = "AadjPercMwlkSrasWpstDb_down";
			Up = "AadjPercMwlkSrasWpstDb_down";
		};
		class PistolAdjustBKneelActionsWlkBL: PistolAdjustBKneelActions
		{
			AdjustB = "";
			AdjustF = "";
			AdjustL = "";
			AdjustR = "";
			PlayerStand = "AadjPercMwlkSrasWpstDbl_down";
			Up = "AadjPercMwlkSrasWpstDbl_down";
		};
		class PistolAdjustBKneelActionsWlkBR: PistolAdjustBKneelActions
		{
			AdjustB = "";
			AdjustF = "";
			AdjustL = "";
			AdjustR = "";
			PlayerStand = "AadjPercMwlkSrasWpstDbr_down";
			Stand = "AadjPknlMwlkSrasWpstDbr_down";
			Up = "AadjPercMwlkSrasWpstDbr_down";
		};
		class PistolAdjustBKneelActionsWlkF: PistolAdjustBKneelActions
		{
			AdjustB = "";
			AdjustF = "";
			AdjustL = "";
			AdjustR = "";
			PlayerStand = "AadjPercMwlkSrasWpstDf_down";
			Up = "AadjPercMwlkSrasWpstDf_down";
		};
		class PistolAdjustBKneelActionsWlkFL: PistolAdjustBKneelActions
		{
			AdjustB = "";
			AdjustF = "";
			AdjustL = "";
			AdjustR = "";
			PlayerStand = "AadjPercMwlkSrasWpstDfl_down";
			Up = "AadjPercMwlkSrasWpstDfl_down";
		};
		class PistolAdjustBKneelActionsWlkFR: PistolAdjustBKneelActions
		{
			AdjustB = "";
			AdjustF = "";
			AdjustL = "";
			AdjustR = "";
			PlayerStand = "AadjPercMwlkSrasWpstDfr_down";
			Up = "AadjPercMwlkSrasWpstDfr_down";
		};
		class PistolAdjustBKneelActionsWlkL: PistolAdjustBKneelActions
		{
			AdjustB = "";
			AdjustF = "";
			AdjustL = "";
			AdjustR = "";
			PlayerStand = "AadjPercMwlkSrasWpstDl_down";
			Up = "AadjPercMwlkSrasWpstDl_down";
		};
		class PistolAdjustBKneelActionsWlkR: PistolAdjustBKneelActions
		{
			AdjustB = "";
			AdjustF = "";
			AdjustL = "";
			AdjustR = "";
			PlayerStand = "AadjPercMwlkSrasWpstDr_down";
			Up = "AadjPercMwlkSrasWpstDr_down";
		};
		class PistolAdjustBKneelEvasiveActionsF: PistolAdjustBKneelActions
		{
			AdjustB = "";
			AdjustF = "";
			AdjustL = "";
			AdjustR = "";
			PlayerStand = "AadjPercMevaSrasWpstDf_left";
			Up = "AadjPercMevaSrasWpstDf_left";
		};
		class PistolAdjustBKneelEvasiveActionsFL: PistolAdjustBKneelActions
		{
			AdjustB = "";
			AdjustF = "";
			AdjustL = "";
			AdjustR = "";
			PlayerStand = "AadjPercMevaSrasWpstDfl_left";
			Up = "AadjPercMevaSrasWpstDfl_left";
		};
		class PistolAdjustBKneelEvasiveActionsFR: PistolAdjustBKneelActions
		{
			AdjustB = "";
			AdjustF = "";
			AdjustL = "";
			AdjustR = "";
			PlayerStand = "AadjPercMevaSrasWpstDfr_left";
			Up = "AadjPercMevaSrasWpstDfr_left";
		};
		class PistolAdjustBProneActions: PistolAdjustProneBaseActions
		{
			AdjustF = "AmovPpneMstpSrasWpstDnon";
			CanNotMove = "AadjPpneMstpSrasWpstDdown";
			Combat = "AadjPpneMstpSrasWpstDdown";
			default = "AadjPpneMstpSrasWpstDdown";
			FastB = "AadjPpneMstpSrasWpstDdown";
			FastF = "AadjPpneMstpSrasWpstDdown";
			FastL = "AadjPpneMstpSrasWpstDdown";
			FastLB = "AadjPpneMstpSrasWpstDdown";
			FastLF = "AadjPpneMstpSrasWpstDdown";
			FastR = "AadjPpneMstpSrasWpstDdown";
			FastRB = "AadjPpneMstpSrasWpstDdown";
			FastRF = "AadjPpneMstpSrasWpstDdown";
			FireNotPossible = "AadjPpneMstpSrasWpstDdown";
			Lying = "AadjPpneMstpSrasWpstDdown";
			PlayerSlowB = "AadjPpneMstpSrasWpstDdown";
			PlayerSlowF = "AadjPpneMstpSrasWpstDdown";
			PlayerSlowL = "AadjPpneMstpSrasWpstDdown";
			PlayerSlowLB = "AadjPpneMstpSrasWpstDdown";
			PlayerSlowLF = "AadjPpneMstpSrasWpstDdown";
			PlayerSlowR = "AadjPpneMstpSrasWpstDdown";
			PlayerSlowRB = "AadjPpneMstpSrasWpstDdown";
			PlayerSlowRF = "AadjPpneMstpSrasWpstDdown";
			PlayerTactB = "AadjPpneMstpSrasWpstDdown";
			PlayerTactF = "AadjPpneMstpSrasWpstDdown";
			PlayerTactL = "AadjPpneMstpSrasWpstDdown";
			PlayerTactLB = "AadjPpneMstpSrasWpstDdown";
			PlayerTactLF = "AadjPpneMstpSrasWpstDdown";
			PlayerTactR = "AadjPpneMstpSrasWpstDdown";
			PlayerTactRB = "AadjPpneMstpSrasWpstDdown";
			PlayerTactRF = "AadjPpneMstpSrasWpstDdown";
			PlayerWalkB = "AadjPpneMstpSrasWpstDdown";
			PlayerWalkF = "AadjPpneMstpSrasWpstDdown";
			PlayerWalkL = "AadjPpneMstpSrasWpstDdown";
			PlayerWalkLB = "AadjPpneMstpSrasWpstDdown";
			PlayerWalkLF = "AadjPpneMstpSrasWpstDdown";
			PlayerWalkR = "AadjPpneMstpSrasWpstDdown";
			PlayerWalkRB = "AadjPpneMstpSrasWpstDdown";
			PlayerWalkRF = "AadjPpneMstpSrasWpstDdown";
			Relax = "AadjPpneMstpSrasWpstDdown";
			reloadMGun = "AadjPpneMstpSrasWpstDdown";
			reloadMortar = "AadjPpneMstpSrasWpstDdown";
			SlowB = "AadjPpneMstpSrasWpstDdown";
			SlowF = "AadjPpneMstpSrasWpstDdown";
			SlowL = "AadjPpneMstpSrasWpstDdown";
			SlowLB = "AadjPpneMstpSrasWpstDdown";
			SlowLF = "AadjPpneMstpSrasWpstDdown";
			SlowR = "AadjPpneMstpSrasWpstDdown";
			SlowRB = "AadjPpneMstpSrasWpstDdown";
			SlowRF = "AadjPpneMstpSrasWpstDdown";
			stop = "AadjPpneMstpSrasWpstDdown";
			stopRelaxed = "AadjPpneMstpSrasWpstDdown";
			strokeGun = "";
			TactB = "AadjPpneMstpSrasWpstDdown";
			TactF = "AadjPpneMstpSrasWpstDdown";
			TactL = "AadjPpneMstpSrasWpstDdown";
			TactLB = "AadjPpneMstpSrasWpstDdown";
			TactLF = "AadjPpneMstpSrasWpstDdown";
			TactR = "AadjPpneMstpSrasWpstDdown";
			TactRB = "AadjPpneMstpSrasWpstDdown";
			TactRF = "AadjPpneMstpSrasWpstDdown";
			turnL = "AadjPpneMstpSrasWpstDdown_turnL";
			turnLRelaxed = "AadjPpneMstpSrasWpstDdown_turnL";
			turnR = "AadjPpneMstpSrasWpstDdown_turnR";
			turnRRelaxed = "AadjPpneMstpSrasWpstDdown_turnR";
			turnSpeed = 1.5;
			WalkB = "AadjPpneMstpSrasWpstDdown";
			WalkF = "AadjPpneMstpSrasWpstDdown";
			WalkL = "AadjPpneMstpSrasWpstDdown";
			WalkLB = "AadjPpneMstpSrasWpstDdown";
			WalkLF = "AadjPpneMstpSrasWpstDdown";
			WalkR = "AadjPpneMstpSrasWpstDdown";
			WalkRB = "AadjPpneMstpSrasWpstDdown";
			WalkRF = "AadjPpneMstpSrasWpstDdown";
			weaponOff = "AadjPpneMstpSrasWpstDdown";
		};
		class PistolAdjustBStandActions: PistolAdjustStandBaseActions
		{
			AdjustB = "AadjPknlMstpSrasWpstDup";
			AdjustF = "AmovPercMstpSrasWpstDnon";
			Combat = "AadjPercMstpSrasWpstDdown";
			Crouch = "AadjPknlMstpSrasWpstDdown";
			default = "AadjPercMstpSrasWpstDdown";
			FastB = "AadjPercMrunSrasWpstDb_down";
			FastF = "AadjPercMevaSrasWpstDf_down";
			FastL = "AadjPercMrunSrasWpstDl_down";
			FastLB = "AadjPercMrunSrasWpstDbl_down";
			FastLF = "AadjPercMevaSrasWpstDfl_down";
			FastR = "AadjPercMrunSrasWpstDr_down";
			FastRB = "AadjPercMrunSrasWpstDbr_down";
			FastRF = "AadjPercMevaSrasWpstDfr_down";
			FireNotPossible = "AadjPercMstpSrasWpstDdown";
			PlayerCrouch = "AadjPknlMstpSrasWpstDdown";
			PlayerSlowB = "AadjPercMrunSrasWpstDb_down";
			PlayerSlowF = "AadjPercMrunSrasWpstDf_down";
			PlayerSlowL = "AadjPercMrunSrasWpstDl_down";
			PlayerSlowLB = "AadjPercMrunSrasWpstDbl_down";
			PlayerSlowLF = "AadjPercMrunSrasWpstDfl_down";
			PlayerSlowR = "AadjPercMrunSrasWpstDr_down";
			PlayerSlowRB = "AadjPercMrunSrasWpstDbr_down";
			PlayerSlowRF = "AadjPercMrunSrasWpstDfr_down";
			PlayerStand = "AmovPercMstpSrasWpstDnon";
			PlayerTactB = "AadjPercMtacSrasWpstDb_down";
			PlayerTactF = "AadjPercMtacSrasWpstDf_down";
			PlayerTactL = "AadjPercMtacSrasWpstDl_down";
			PlayerTactLB = "AadjPercMtacSrasWpstDbl_down";
			PlayerTactLF = "AadjPercMtacSrasWpstDfl_down";
			PlayerTactR = "AadjPercMtacSrasWpstDr_down";
			PlayerTactRB = "AadjPercMtacSrasWpstDbr_down";
			PlayerTactRF = "AadjPercMtacSrasWpstDfr_down";
			PlayerWalkB = "AadjPercMwlkSrasWpstDb_down";
			PlayerWalkF = "AadjPercMwlkSrasWpstDf_down";
			PlayerWalkL = "AadjPercMwlkSrasWpstDl_down";
			PlayerWalkLB = "AadjPercMwlkSrasWpstDbl_down";
			PlayerWalkLF = "AadjPercMwlkSrasWpstDfl_down";
			PlayerWalkR = "AadjPercMwlkSrasWpstDr_down";
			PlayerWalkRB = "AadjPercMwlkSrasWpstDbr_down";
			PlayerWalkRF = "AadjPercMwlkSrasWpstDfr_down";
			SlowB = "AadjPercMrunSrasWpstDb_down";
			SlowF = "AadjPercMrunSrasWpstDf_down";
			SlowL = "AadjPercMrunSrasWpstDl_down";
			SlowLB = "AadjPercMrunSrasWpstDbl_down";
			SlowLF = "AadjPercMrunSrasWpstDfl_down";
			SlowR = "AadjPercMrunSrasWpstDr_down";
			SlowRB = "AadjPercMrunSrasWpstDbr_down";
			SlowRF = "AadjPercMrunSrasWpstDfr_down";
			stop = "AadjPercMstpSrasWpstDdown";
			StopRelaxed = "AadjPercMstpSrasWpstDdown";
			TactB = "AadjPercMtacSrasWpstDb_down";
			TactF = "AadjPercMtacSrasWpstDf_down";
			TactL = "AadjPercMtacSrasWpstDl_down";
			TactLB = "AadjPercMtacSrasWpstDbl_down";
			TactLF = "AadjPercMtacSrasWpstDfl_down";
			TactR = "AadjPercMtacSrasWpstDr_down";
			TactRB = "AadjPercMtacSrasWpstDbr_down";
			TactRF = "AadjPercMtacSrasWpstDfr_down";
			turnL = "AadjPercMstpSrasWpstDdown";
			turnLRelaxed = "AadjPercMstpSrasWpstDdown";
			turnR = "AadjPercMstpSrasWpstDdown";
			turnRRelaxed = "AadjPercMstpSrasWpstDdown";
			up = "AadjPknlMstpSrasWpstDdown";
			WalkB = "AadjPercMwlkSrasWpstDb_down";
			WalkF = "AadjPercMwlkSrasWpstDf_down";
			WalkL = "AadjPercMwlkSrasWpstDl_down";
			WalkLB = "AadjPercMwlkSrasWpstDbl_down";
			WalkLF = "AadjPercMwlkSrasWpstDfl_down";
			WalkR = "AadjPercMwlkSrasWpstDr_down";
			WalkRB = "AadjPercMwlkSrasWpstDbr_down";
			WalkRF = "AadjPercMwlkSrasWpstDfr_down";
		};
		class PistolAdjustBStandActionsRunB: PistolAdjustBStandActions
		{
			AdjustB = "";
			AdjustF = "";
			AdjustL = "";
			AdjustR = "";
			PlayerCrouch = "AadjPknlMrunSrasWpstDb_down";
			PlayerStand = "AadjPercMtacSrasWpstDb_down";
			Up = "AadjPknlMrunSrasWpstDb_down";
		};
		class PistolAdjustBStandActionsRunBL: PistolAdjustBStandActions
		{
			AdjustB = "";
			AdjustF = "";
			AdjustL = "";
			AdjustR = "";
			PlayerCrouch = "AadjPknlMrunSrasWpstDbl_down";
			PlayerStand = "AadjPercMtacSrasWpstDbl_down";
			Up = "AadjPknlMrunSrasWpstDbl_down";
		};
		class PistolAdjustBStandActionsRunBR: PistolAdjustBStandActions
		{
			AdjustB = "";
			AdjustF = "";
			AdjustL = "";
			AdjustR = "";
			PlayerCrouch = "AadjPknlMrunSrasWpstDbr_down";
			PlayerStand = "AadjPercMtacSrasWpstDbr_down";
		};
		class PistolAdjustBStandActionsRunF: PistolAdjustBStandActions
		{
			AdjustB = "";
			AdjustF = "";
			AdjustL = "";
			AdjustR = "";
			PlayerCrouch = "AadjPknlMrunSrasWpstDf_down";
			PlayerStand = "AadjPercMtacSrasWpstDf_down";
			Up = "AadjPknlMrunSrasWpstDf_down";
		};
		class PistolAdjustBStandActionsRunFL: PistolAdjustBStandActions
		{
			AdjustB = "";
			AdjustF = "";
			AdjustL = "";
			AdjustR = "";
			PlayerCrouch = "AadjPknlMrunSrasWpstDfl_down";
			PlayerStand = "AadjPercMtacSrasWpstDfl_down";
			Up = "AadjPknlMrunSrasWpstDfl_down";
		};
		class PistolAdjustBStandActionsRunFR: PistolAdjustBStandActions
		{
			AdjustB = "";
			AdjustF = "";
			AdjustL = "";
			AdjustR = "";
			PlayerCrouch = "AadjPknlMrunSrasWpstDfr_down";
			PlayerStand = "AadjPercMtacSrasWpstDfr_down";
			Up = "AadjPknlMrunSrasWpstDfr_down";
		};
		class PistolAdjustBStandActionsRunL: PistolAdjustBStandActions
		{
			AdjustB = "";
			AdjustF = "";
			AdjustL = "";
			AdjustR = "";
			PlayerCrouch = "AadjPknlMrunSrasWpstDl_down";
			PlayerStand = "AadjPercMtacSrasWpstDl_down";
			Up = "AadjPknlMrunSrasWpstDl_down";
		};
		class PistolAdjustBStandActionsRunR: PistolAdjustBStandActions
		{
			AdjustB = "";
			AdjustF = "";
			AdjustL = "";
			AdjustR = "";
			PlayerCrouch = "AadjPknlMrunSrasWpstDr_down";
			PlayerStand = "AadjPercMtacSrasWpstDr_down";
			Up = "AadjPknlMrunSrasWpstDr_down";
		};
		class PistolAdjustBStandActionsTacB: PistolAdjustBStandActions
		{
			AdjustB = "";
			AdjustF = "";
			AdjustL = "";
			AdjustR = "";
			PlayerCrouch = "AadjPknlMtacSrasWpstDb_down";
			PlayerStand = "AadjPercMrunSrasWpstDb_down";
			Up = "AadjPknlMtacSrasWpstDb_down";
		};
		class PistolAdjustBStandActionsTacBL: PistolAdjustBStandActions
		{
			AdjustB = "";
			AdjustF = "";
			AdjustL = "";
			AdjustR = "";
			PlayerCrouch = "AadjPknlMtacSrasWpstDbl_down";
			PlayerStand = "AadjPercMrunSrasWpstDbl_down";
			Up = "AadjPknlMtacSrasWpstDbl_down";
		};
		class PistolAdjustBStandActionsTacBR: PistolAdjustBStandActions
		{
			AdjustB = "";
			AdjustF = "";
			AdjustL = "";
			AdjustR = "";
			PlayerCrouch = "AadjPknlMtacSrasWpstDbr_down";
			PlayerStand = "AadjPercMrunSrasWpstDbr_down";
		};
		class PistolAdjustBStandActionsTacF: PistolAdjustBStandActions
		{
			AdjustB = "";
			AdjustF = "";
			AdjustL = "";
			AdjustR = "";
			PlayerCrouch = "AadjPknlMtacSrasWpstDf_down";
			PlayerStand = "AadjPercMrunSrasWpstDf_down";
			Up = "AadjPknlMtacSrasWpstDf_down";
		};
		class PistolAdjustBStandActionsTacFL: PistolAdjustBStandActions
		{
			AdjustB = "";
			AdjustF = "";
			AdjustL = "";
			AdjustR = "";
			PlayerCrouch = "AadjPknlMtacSrasWpstDfl_down";
			PlayerStand = "AadjPercMrunSrasWpstDfl_down";
			Up = "AadjPknlMtacSrasWpstDfl_down";
		};
		class PistolAdjustBStandActionsTacFR: PistolAdjustBStandActions
		{
			AdjustB = "";
			AdjustF = "";
			AdjustL = "";
			AdjustR = "";
			PlayerCrouch = "AadjPknlMtacSrasWpstDfr_down";
			PlayerStand = "AadjPercMrunSrasWpstDfr_down";
			Up = "AadjPknlMtacSrasWpstDfr_down";
		};
		class PistolAdjustBStandActionsTacL: PistolAdjustBStandActions
		{
			AdjustB = "";
			AdjustF = "";
			AdjustL = "";
			AdjustR = "";
			PlayerCrouch = "AadjPknlMtacSrasWpstDl_down";
			PlayerStand = "AadjPercMrunSrasWpstDl_down";
			Up = "AadjPknlMtacSrasWpstDl_down";
		};
		class PistolAdjustBStandActionsTacR: PistolAdjustBStandActions
		{
			AdjustB = "";
			AdjustF = "";
			AdjustL = "";
			AdjustR = "";
			PlayerCrouch = "AadjPknlMtacSrasWpstDr_down";
			PlayerStand = "AadjPercMrunSrasWpstDr_down";
			Up = "AadjPknlMtacSrasWpstDr_down";
		};
		class PistolAdjustBStandActionsWlkB: PistolAdjustBStandActions
		{
			AdjustB = "";
			AdjustF = "";
			AdjustL = "";
			AdjustR = "";
			PlayerCrouch = "AadjPknlMwlkSrasWpstDb_down";
			Up = "AadjPknlMwlkSrasWpstDb_down";
		};
		class PistolAdjustBStandActionsWlkBL: PistolAdjustBStandActions
		{
			AdjustB = "";
			AdjustF = "";
			AdjustL = "";
			AdjustR = "";
			PlayerCrouch = "AadjPknlMwlkSrasWpstDbl_down";
			Up = "AadjPknlMwlkSrasWpstDbl_down";
		};
		class PistolAdjustBStandActionsWlkBR: PistolAdjustBStandActions
		{
			AdjustB = "";
			AdjustF = "";
			AdjustL = "";
			AdjustR = "";
			PlayerCrouch = "AadjPknlMwlkSrasWpstDbr_down";
			Stand = "AadjPercMwlkSrasWpstDbr_down";
			Up = "AadjPknlMwlkSrasWpstDbr_down";
		};
		class PistolAdjustBStandActionsWlkF: PistolAdjustBStandActions
		{
			AdjustB = "";
			AdjustF = "";
			AdjustL = "";
			AdjustR = "";
			PlayerCrouch = "AadjPknlMwlkSrasWpstDf_down";
			Up = "AadjPknlMwlkSrasWpstDf_down";
		};
		class PistolAdjustBStandActionsWlkFL: PistolAdjustBStandActions
		{
			AdjustB = "";
			AdjustF = "";
			AdjustL = "";
			AdjustR = "";
			PlayerCrouch = "AadjPknlMwlkSrasWpstDfl_down";
			Up = "AadjPknlMwlkSrasWpstDfl_down";
		};
		class PistolAdjustBStandActionsWlkFR: PistolAdjustBStandActions
		{
			AdjustB = "";
			AdjustF = "";
			AdjustL = "";
			AdjustR = "";
			PlayerCrouch = "AadjPknlMwlkSrasWpstDfr_down";
			Up = "AadjPknlMwlkSrasWpstDfr_down";
		};
		class PistolAdjustBStandActionsWlkL: PistolAdjustBStandActions
		{
			AdjustB = "";
			AdjustF = "";
			AdjustL = "";
			AdjustR = "";
			PlayerCrouch = "AadjPknlMwlkSrasWpstDl_down";
			Up = "AadjPknlMwlkSrasWpstDl_down";
		};
		class PistolAdjustBStandActionsWlkR: PistolAdjustBStandActions
		{
			AdjustB = "";
			AdjustF = "";
			AdjustL = "";
			AdjustR = "";
			PlayerCrouch = "AadjPknlMwlkSrasWpstDr_down";
			Up = "AadjPknlMwlkSrasWpstDr_down";
		};
		class PistolAdjustBStandEvasiveActionsF: PistolAdjustBStandActions
		{
			AdjustB = "";
			AdjustF = "";
			AdjustL = "";
			AdjustR = "";
			PlayerCrouch = "AadjPknlMevaSrasWpstDf_down";
			Up = "AadjPknlMevaSrasWpstDf_down";
		};
		class PistolAdjustBStandEvasiveActionsFL: PistolAdjustBStandActions
		{
			AdjustB = "";
			AdjustF = "";
			AdjustL = "";
			AdjustR = "";
			PlayerCrouch = "AadjPknlMevaSrasWpstDfl_down";
			Up = "AadjPknlMevaSrasWpstDfl_down";
		};
		class PistolAdjustBStandEvasiveActionsFR: PistolAdjustBStandActions
		{
			AdjustB = "";
			AdjustF = "";
			AdjustL = "";
			AdjustR = "";
			PlayerCrouch = "AadjPknlMevaSrasWpstDfr_down";
			Up = "AadjPknlMevaSrasWpstDfr_down";
		};
		class PistolAdjustFKneelActions: PistolAdjustKneelBaseActions
		{
			AdjustB = "AmovPknlMstpSrasWpstDnon";
			AdjustF = "AadjPercMstpSrasWpstDdown";
			Combat = "AadjPknlMstpSrasWpstDup";
			default = "AadjPknlMstpSrasWpstDup";
			FastB = "AadjPknlMrunSrasWpstDb_up";
			FastF = "AadjPknlMevaSrasWpstDf_up";
			FastL = "AadjPknlMrunSrasWpstDl_up";
			FastLB = "AadjPknlMrunSrasWpstDbl_up";
			FastLF = "AadjPknlMevaSrasWpstDfl_up";
			FastR = "AadjPknlMrunSrasWpstDr_up";
			FastRB = "AadjPknlMrunSrasWpstDbr_up";
			FastRF = "AadjPknlMevaSrasWpstDfr_up";
			FireNotPossible = "AadjPknlMstpSrasWpstDup";
			PlayerSlowB = "AadjPknlMrunSrasWpstDb_up";
			PlayerSlowF = "AadjPknlMrunSrasWpstDf_up";
			PlayerSlowL = "AadjPknlMrunSrasWpstDl_up";
			PlayerSlowLB = "AadjPknlMrunSrasWpstDbl_up";
			PlayerSlowLF = "AadjPknlMrunSrasWpstDfl_up";
			PlayerSlowR = "AadjPknlMrunSrasWpstDr_up";
			PlayerSlowRB = "AadjPknlMrunSrasWpstDbr_up";
			PlayerSlowRF = "AadjPknlMrunSrasWpstDfr_up";
			PlayerStand = "AadjPercMstpSrasWpstDup";
			PlayerTactB = "AadjPknlMtacSrasWpstDb_up";
			PlayerTactF = "AadjPknlMtacSrasWpstDf_up";
			PlayerTactL = "AadjPknlMtacSrasWpstDl_up";
			PlayerTactLB = "AadjPknlMtacSrasWpstDbl_up";
			PlayerTactLF = "AadjPknlMtacSrasWpstDfl_up";
			PlayerTactR = "AadjPknlMtacSrasWpstDr_up";
			PlayerTactRB = "AadjPknlMtacSrasWpstDbr_up";
			PlayerTactRF = "AadjPknlMtacSrasWpstDfr_up";
			PlayerWalkB = "AadjPknlMwlkSrasWpstDb_up";
			PlayerWalkF = "AadjPknlMwlkSrasWpstDf_up";
			PlayerWalkL = "AadjPknlMwlkSrasWpstDl_up";
			PlayerWalkLB = "AadjPknlMwlkSrasWpstDbl_up";
			PlayerWalkLF = "AadjPknlMwlkSrasWpstDfl_up";
			PlayerWalkR = "AadjPknlMwlkSrasWpstDr_up";
			PlayerWalkRB = "AadjPknlMwlkSrasWpstDbr_up";
			PlayerWalkRF = "AadjPknlMwlkSrasWpstDfr_up";
			SlowB = "AadjPknlMrunSrasWpstDb_up";
			SlowF = "AadjPknlMrunSrasWpstDf_up";
			SlowL = "AadjPknlMrunSrasWpstDl_up";
			SlowLB = "AadjPknlMrunSrasWpstDbl_up";
			SlowLF = "AadjPknlMrunSrasWpstDfl_up";
			SlowR = "AadjPknlMrunSrasWpstDr_up";
			SlowRB = "AadjPknlMrunSrasWpstDbr_up";
			SlowRF = "AadjPknlMrunSrasWpstDfr_up";
			Stand = "AmovPknlMstpSlowWpstDnon";
			stop = "AadjPknlMstpSrasWpstDup";
			StopRelaxed = "AadjPknlMstpSrasWpstDup";
			TactB = "AadjPknlMtacSrasWpstDb_up";
			TactF = "AadjPknlMtacSrasWpstDf_up";
			TactL = "AadjPknlMtacSrasWpstDl_up";
			TactLB = "AadjPknlMtacSrasWpstDbl_up";
			TactLF = "AadjPknlMtacSrasWpstDfl_up";
			TactR = "AadjPknlMtacSrasWpstDr_up";
			TactRB = "AadjPknlMtacSrasWpstDbr_up";
			TactRF = "AadjPknlMtacSrasWpstDfr_up";
			turnL = "AadjPknlMstpSrasWpstDup";
			turnLRelaxed = "AadjPknlMstpSrasWpstDup";
			turnR = "AadjPknlMstpSrasWpstDup";
			turnRRelaxed = "AadjPknlMstpSrasWpstDup";
			up = "AadjPercMstpSrasWpstDup";
			WalkB = "AadjPknlMwlkSrasWpstDb_up";
			WalkF = "AadjPknlMwlkSrasWpstDf_up";
			WalkL = "AadjPknlMwlkSrasWpstDl_up";
			WalkLB = "AadjPknlMwlkSrasWpstDbl_up";
			WalkLF = "AadjPknlMwlkSrasWpstDfl_up";
			WalkR = "AadjPknlMwlkSrasWpstDr_up";
			WalkRB = "AadjPknlMwlkSrasWpstDbr_up";
			WalkRF = "AadjPknlMwlkSrasWpstDfr_up";
		};
		class PistolAdjustFKneelActionsRunB: PistolAdjustFKneelActions
		{
			AdjustB = "";
			AdjustF = "";
			AdjustL = "";
			AdjustR = "";
			PlayerCrouch = "AadjPknlMtacSrasWpstDb_up";
			PlayerStand = "AadjPercMrunSrasWpstDb_up";
			Up = "AadjPercMrunSrasWpstDb_up";
		};
		class PistolAdjustFKneelActionsRunBL: PistolAdjustFKneelActions
		{
			AdjustB = "";
			AdjustF = "";
			AdjustL = "";
			AdjustR = "";
			PlayerCrouch = "AadjPknlMtacSrasWpstDbl_up";
			PlayerStand = "AadjPercMrunSrasWpstDbl_up";
			Up = "AadjPercMrunSrasWpstDbl_up";
		};
		class PistolAdjustFKneelActionsRunBR: PistolAdjustFKneelActions
		{
			AdjustB = "";
			AdjustF = "";
			AdjustL = "";
			AdjustR = "";
			PlayerCrouch = "AadjPknlMtacSrasWpstDbr_up";
			PlayerStand = "AadjPercMrunSrasWpstDbr_up";
		};
		class PistolAdjustFKneelActionsRunF: PistolAdjustFKneelActions
		{
			AdjustB = "";
			AdjustF = "";
			AdjustL = "";
			AdjustR = "";
			PlayerCrouch = "AadjPknlMtacSrasWpstDf_up";
			PlayerStand = "AadjPercMrunSrasWpstDf_up";
			Up = "AadjPercMrunSrasWpstDf_up";
		};
		class PistolAdjustFKneelActionsRunFL: PistolAdjustFKneelActions
		{
			AdjustB = "";
			AdjustF = "";
			AdjustL = "";
			AdjustR = "";
			PlayerCrouch = "AadjPknlMtacSrasWpstDfl_up";
			PlayerStand = "AadjPercMrunSrasWpstDfl_up";
			Up = "AadjPercMrunSrasWpstDfl_up";
		};
		class PistolAdjustFKneelActionsRunFR: PistolAdjustFKneelActions
		{
			AdjustB = "";
			AdjustF = "";
			AdjustL = "";
			AdjustR = "";
			PlayerCrouch = "AadjPknlMtacSrasWpstDfr_up";
			PlayerStand = "AadjPercMrunSrasWpstDfr_up";
			Up = "AadjPercMrunSrasWpstDfr_up";
		};
		class PistolAdjustFKneelActionsRunL: PistolAdjustFKneelActions
		{
			AdjustB = "";
			AdjustF = "";
			AdjustL = "";
			AdjustR = "";
			PlayerCrouch = "AadjPknlMtacSrasWpstDl_up";
			PlayerStand = "AadjPercMrunSrasWpstDl_up";
			Up = "AadjPercMrunSrasWpstDl_up";
		};
		class PistolAdjustFKneelActionsRunR: PistolAdjustFKneelActions
		{
			AdjustB = "";
			AdjustF = "";
			AdjustL = "";
			AdjustR = "";
			PlayerCrouch = "AadjPknlMtacSrasWpstDr_up";
			PlayerStand = "AadjPercMrunSrasWpstDr_up";
			Up = "AadjPercMrunSrasWpstDr_up";
		};
		class PistolAdjustFKneelActionsTacB: PistolAdjustFKneelActions
		{
			AdjustB = "";
			AdjustF = "";
			AdjustL = "";
			AdjustR = "";
			PlayerCrouch = "AadjPknlMrunSrasWpstDb_up";
			PlayerStand = "AadjPercMtacSrasWpstDb_up";
			Up = "AadjPercMtacSrasWpstDb_up";
		};
		class PistolAdjustFKneelActionsTacBL: PistolAdjustFKneelActions
		{
			AdjustB = "";
			AdjustF = "";
			AdjustL = "";
			AdjustR = "";
			PlayerCrouch = "AadjPknlMrunSrasWpstDbl_up";
			PlayerStand = "AadjPercMtacSrasWpstDbl_up";
			Up = "AadjPercMtacSrasWpstDbl_up";
		};
		class PistolAdjustFKneelActionsTacBR: PistolAdjustFKneelActions
		{
			AdjustB = "";
			AdjustF = "";
			AdjustL = "";
			AdjustR = "";
			PlayerCrouch = "AadjPknlMrunSrasWpstDbr_up";
			PlayerStand = "AadjPercMtacSrasWpstDbr_up";
		};
		class PistolAdjustFKneelActionsTacF: PistolAdjustFKneelActions
		{
			AdjustB = "";
			AdjustF = "";
			AdjustL = "";
			AdjustR = "";
			PlayerCrouch = "AadjPknlMrunSrasWpstDf_up";
			PlayerStand = "AadjPercMtacSrasWpstDf_up";
			Up = "AadjPercMtacSrasWpstDf_up";
		};
		class PistolAdjustFKneelActionsTacFL: PistolAdjustFKneelActions
		{
			AdjustB = "";
			AdjustF = "";
			AdjustL = "";
			AdjustR = "";
			PlayerCrouch = "AadjPknlMrunSrasWpstDfl_up";
			PlayerStand = "AadjPercMtacSrasWpstDfl_up";
			Up = "AadjPercMtacSrasWpstDfl_up";
		};
		class PistolAdjustFKneelActionsTacFR: PistolAdjustFKneelActions
		{
			AdjustB = "";
			AdjustF = "";
			AdjustL = "";
			AdjustR = "";
			PlayerCrouch = "AadjPknlMrunSrasWpstDfr_up";
			PlayerStand = "AadjPercMtacSrasWpstDfr_up";
			Up = "AadjPercMtacSrasWpstDfr_up";
		};
		class PistolAdjustFKneelActionsTacL: PistolAdjustFKneelActions
		{
			AdjustB = "";
			AdjustF = "";
			AdjustL = "";
			AdjustR = "";
			PlayerCrouch = "AadjPknlMrunSrasWpstDl_up";
			PlayerStand = "AadjPercMtacSrasWpstDl_up";
			Up = "AadjPercMtacSrasWpstDl_up";
		};
		class PistolAdjustFKneelActionsTacR: PistolAdjustFKneelActions
		{
			AdjustB = "";
			AdjustF = "";
			AdjustL = "";
			AdjustR = "";
			PlayerCrouch = "AadjPknlMrunSrasWpstDr_up";
			PlayerStand = "AadjPercMtacSrasWpstDr_up";
			Up = "AadjPercMtacSrasWpstDr_up";
		};
		class PistolAdjustFKneelActionsWlkB: PistolAdjustFKneelActions
		{
			AdjustB = "";
			AdjustF = "";
			AdjustL = "";
			AdjustR = "";
			PlayerStand = "AadjPercMwlkSrasWpstDb_up";
			Up = "AadjPercMwlkSrasWpstDb_up";
		};
		class PistolAdjustFKneelActionsWlkBL: PistolAdjustFKneelActions
		{
			AdjustB = "";
			AdjustF = "";
			AdjustL = "";
			AdjustR = "";
			PlayerStand = "AadjPercMwlkSrasWpstDbl_up";
			Up = "AadjPercMwlkSrasWpstDbl_up";
		};
		class PistolAdjustFKneelActionsWlkBR: PistolAdjustFKneelActions
		{
			AdjustB = "";
			AdjustF = "";
			AdjustL = "";
			AdjustR = "";
			PlayerStand = "AadjPercMwlkSrasWpstDbr_up";
			Stand = "AadjPknlMwlkSrasWpstDbr_up";
			Up = "AadjPercMwlkSrasWpstDbr_up";
		};
		class PistolAdjustFKneelActionsWlkF: PistolAdjustFKneelActions
		{
			AdjustB = "";
			AdjustF = "";
			AdjustL = "";
			AdjustR = "";
			PlayerStand = "AadjPercMwlkSrasWpstDf_up";
			Up = "AadjPercMwlkSrasWpstDf_up";
		};
		class PistolAdjustFKneelActionsWlkFL: PistolAdjustFKneelActions
		{
			AdjustB = "";
			AdjustF = "";
			AdjustL = "";
			AdjustR = "";
			PlayerStand = "AadjPercMwlkSrasWpstDfl_up";
			Up = "AadjPercMwlkSrasWpstDfl_up";
		};
		class PistolAdjustFKneelActionsWlkFR: PistolAdjustFKneelActions
		{
			AdjustB = "";
			AdjustF = "";
			AdjustL = "";
			AdjustR = "";
			PlayerStand = "AadjPercMwlkSrasWpstDfr_up";
			Up = "AadjPercMwlkSrasWpstDfr_up";
		};
		class PistolAdjustFKneelActionsWlkL: PistolAdjustFKneelActions
		{
			AdjustB = "";
			AdjustF = "";
			AdjustL = "";
			AdjustR = "";
			PlayerStand = "AadjPercMwlkSrasWpstDl_up";
			Up = "AadjPercMwlkSrasWpstDl_up";
		};
		class PistolAdjustFKneelActionsWlkR: PistolAdjustFKneelActions
		{
			AdjustB = "";
			AdjustF = "";
			AdjustL = "";
			AdjustR = "";
			PlayerStand = "AadjPercMwlkSrasWpstDr_up";
			Up = "AadjPercMwlkSrasWpstDr_up";
		};
		class PistolAdjustFKneelEvasiveActionsF: PistolAdjustFKneelActions
		{
			AdjustB = "";
			AdjustF = "";
			AdjustL = "";
			AdjustR = "";
			PlayerStand = "AadjPercMevaSrasWpstDf_left";
			Up = "AadjPercMevaSrasWpstDf_left";
		};
		class PistolAdjustFKneelEvasiveActionsFL: PistolAdjustFKneelActions
		{
			AdjustB = "";
			AdjustF = "";
			AdjustL = "";
			AdjustR = "";
			PlayerStand = "AadjPercMevaSrasWpstDfl_left";
			Up = "AadjPercMevaSrasWpstDfl_left";
		};
		class PistolAdjustFKneelEvasiveActionsFR: PistolAdjustFKneelActions
		{
			AdjustB = "";
			AdjustF = "";
			AdjustL = "";
			AdjustR = "";
			PlayerStand = "AadjPercMevaSrasWpstDfr_left";
			Up = "AadjPercMevaSrasWpstDfr_left";
		};
		class PistolAdjustFProneActions: PistolAdjustProneBaseActions
		{
			AdjustB = "AmovPpneMstpSrasWpstDnon";
			AdjustF = "AadjPknlMstpSrasWpstDdown";
			CanNotMove = "AadjPpneMstpSrasWpstDup";
			Combat = "AadjPpneMstpSrasWpstDup";
			default = "AadjPpneMstpSrasWpstDup";
			Down = "AmovPpneMstpSrasWpstDnon";
			EvasiveLeft = "";
			EvasiveRight = "";
			FastB = "AadjPpneMwlkSrasWpstDup_b";
			FastF = "AadjPpneMwlkSrasWpstDup_f";
			FastL = "AadjPpneMwlkSrasWpstDup_l";
			FastLB = "AadjPpneMwlkSrasWpstDup_bl";
			FastLF = "AadjPpneMwlkSrasWpstDup_fl";
			FastR = "AadjPpneMwlkSrasWpstDup_r";
			FastRB = "AadjPpneMwlkSrasWpstDup_br";
			FastRF = "AadjPpneMwlkSrasWpstDup_fr";
			FireNotPossible = "AadjPpneMstpSrasWpstDup";
			gestureAdvance[] = {"GestureAdvance", "Gesture"};
			gestureFreeze = "";
			gestureGo = "";
			gestureGoB = "";
			GestureReloadFlaregun[] = {"GestureReloadFlaregunContext", "Gesture"};
			GestureReloadPistol[] = {"GestureReloadPistolContext", "Gesture"};
			GestureReloadPistolHeavy02[] = {"GestureReloadPistolHeavy02Context", "Gesture"};
			gestureUp = "";
			Lying = "AadjPpneMstpSrasWpstDup";
			PlayerSlowB = "AadjPpneMwlkSrasWpstDup_b";
			PlayerSlowF = "AadjPpneMwlkSrasWpstDup_f";
			PlayerSlowL = "AadjPpneMwlkSrasWpstDup_l";
			PlayerSlowLB = "AadjPpneMwlkSrasWpstDup_bl";
			PlayerSlowLF = "AadjPpneMwlkSrasWpstDup_fl";
			PlayerSlowR = "AadjPpneMwlkSrasWpstDup_r";
			PlayerSlowRB = "AadjPpneMwlkSrasWpstDup_br";
			PlayerSlowRF = "AadjPpneMwlkSrasWpstDup_fr";
			PlayerTactB = "AadjPpneMwlkSrasWpstDup_b";
			PlayerTactF = "AadjPpneMwlkSrasWpstDup_f";
			PlayerTactL = "AadjPpneMwlkSrasWpstDup_l";
			PlayerTactLB = "AadjPpneMwlkSrasWpstDup_bl";
			PlayerTactLF = "AadjPpneMwlkSrasWpstDup_fl";
			PlayerTactR = "AadjPpneMwlkSrasWpstDup_r";
			PlayerTactRB = "AadjPpneMwlkSrasWpstDup_br";
			PlayerTactRF = "AadjPpneMwlkSrasWpstDup_fr";
			PlayerWalkB = "AadjPpneMwlkSrasWpstDup_b";
			PlayerWalkF = "AadjPpneMwlkSrasWpstDup_f";
			PlayerWalkL = "AadjPpneMwlkSrasWpstDup_l";
			PlayerWalkLB = "AadjPpneMwlkSrasWpstDup_bl";
			PlayerWalkLF = "AadjPpneMwlkSrasWpstDup_fl";
			PlayerWalkR = "AadjPpneMwlkSrasWpstDup_r";
			PlayerWalkRB = "AadjPpneMwlkSrasWpstDup_br";
			PlayerWalkRF = "AadjPpneMwlkSrasWpstDup_fr";
			Relax = "AadjPpneMstpSrasWpstDup";
			reloadMGun = "AadjPpneMstpSrasWpstDup";
			reloadMortar = "AadjPpneMstpSrasWpstDup";
			SlowB = "AadjPpneMwlkSrasWpstDup_b";
			SlowF = "AadjPpneMwlkSrasWpstDup_f";
			SlowL = "AadjPpneMwlkSrasWpstDup_l";
			SlowLB = "AadjPpneMwlkSrasWpstDup_bl";
			SlowLF = "AadjPpneMwlkSrasWpstDup_fl";
			SlowR = "AadjPpneMwlkSrasWpstDup_r";
			SlowRB = "AadjPpneMwlkSrasWpstDup_br";
			SlowRF = "AadjPpneMwlkSrasWpstDup_fr";
			stop = "AadjPpneMstpSrasWpstDup";
			stopRelaxed = "AadjPpneMstpSrasWpstDup";
			TactB = "AadjPpneMwlkSrasWpstDup_b";
			TactF = "AadjPpneMwlkSrasWpstDup_f";
			TactL = "AadjPpneMwlkSrasWpstDup_l";
			TactLB = "AadjPpneMwlkSrasWpstDup_bl";
			TactLF = "AadjPpneMwlkSrasWpstDup_fl";
			TactR = "AadjPpneMwlkSrasWpstDup_r";
			TactRB = "AadjPpneMwlkSrasWpstDup_br";
			TactRF = "AadjPpneMwlkSrasWpstDup_fr";
			throwGrenade[] = {"GestureThrowGrenadePistolContext", "Gesture"};
			turnL = "AadjPpneMstpSrasWpstDup_turnL";
			turnLRelaxed = "AadjPpneMstpSrasWpstDup_turnL";
			turnR = "AadjPpneMstpSrasWpstDup_turnR";
			turnRRelaxed = "AadjPpneMstpSrasWpstDup_turnR";
			turnSpeed = 1.5;
			WalkB = "AadjPpneMwlkSrasWpstDup_b";
			WalkF = "AadjPpneMwlkSrasWpstDup_f";
			WalkL = "AadjPpneMwlkSrasWpstDup_l";
			WalkLB = "AadjPpneMwlkSrasWpstDup_bl";
			WalkLF = "AadjPpneMwlkSrasWpstDup_fl";
			WalkR = "AadjPpneMwlkSrasWpstDup_r";
			WalkRB = "AadjPpneMwlkSrasWpstDup_br";
			WalkRF = "AadjPpneMwlkSrasWpstDup_fr";
			weaponOff = "AadjPpneMstpSrasWpstDup";
		};
		class PistolAdjustFStandActions: PistolAdjustStandBaseActions
		{
			AdjustB = "AmovPercMstpSrasWpstDnon";
			Combat = "AadjPercMstpSrasWpstDup";
			Crouch = "AadjPknlMstpSrasWpstDup";
			default = "AadjPercMstpSrasWpstDup";
			FastB = "AadjPercMrunSrasWpstDb_up";
			FastF = "AadjPercMevaSrasWpstDf_up";
			FastL = "AadjPercMrunSrasWpstDl_up";
			FastLB = "AadjPercMrunSrasWpstDbl_up";
			FastLF = "AadjPercMevaSrasWpstDfl_up";
			FastR = "AadjPercMrunSrasWpstDr_up";
			FastRB = "AadjPercMrunSrasWpstDbr_up";
			FastRF = "AadjPercMevaSrasWpstDfr_up";
			FireNotPossible = "AadjPercMstpSrasWpstDup";
			PlayerCrouch = "AadjPknlMstpSrasWpstDup";
			PlayerSlowB = "AadjPercMrunSrasWpstDb_up";
			PlayerSlowF = "AadjPercMrunSrasWpstDf_up";
			PlayerSlowL = "AadjPercMrunSrasWpstDl_up";
			PlayerSlowLB = "AadjPercMrunSrasWpstDbl_up";
			PlayerSlowLF = "AadjPercMrunSrasWpstDfl_up";
			PlayerSlowR = "AadjPercMrunSrasWpstDr_up";
			PlayerSlowRB = "AadjPercMrunSrasWpstDbr_up";
			PlayerSlowRF = "AadjPercMrunSrasWpstDfr_up";
			PlayerStand = "AmovPercMstpSrasWpstDnon";
			PlayerTactB = "AadjPercMtacSrasWpstDb_up";
			PlayerTactF = "AadjPercMtacSrasWpstDf_up";
			PlayerTactL = "AadjPercMtacSrasWpstDl_up";
			PlayerTactLB = "AadjPercMtacSrasWpstDbl_up";
			PlayerTactLF = "AadjPercMtacSrasWpstDfl_up";
			PlayerTactR = "AadjPercMtacSrasWpstDr_up";
			PlayerTactRB = "AadjPercMtacSrasWpstDbr_up";
			PlayerTactRF = "AadjPercMtacSrasWpstDfr_up";
			PlayerWalkB = "AadjPercMwlkSrasWpstDb_up";
			PlayerWalkF = "AadjPercMwlkSrasWpstDf_up";
			PlayerWalkL = "AadjPercMwlkSrasWpstDl_up";
			PlayerWalkLB = "AadjPercMwlkSrasWpstDbl_up";
			PlayerWalkLF = "AadjPercMwlkSrasWpstDfl_up";
			PlayerWalkR = "AadjPercMwlkSrasWpstDr_up";
			PlayerWalkRB = "AadjPercMwlkSrasWpstDbr_up";
			PlayerWalkRF = "AadjPercMwlkSrasWpstDfr_up";
			SlowB = "AadjPercMrunSrasWpstDb_up";
			SlowF = "AadjPercMrunSrasWpstDf_up";
			SlowL = "AadjPercMrunSrasWpstDl_up";
			SlowLB = "AadjPercMrunSrasWpstDbl_up";
			SlowLF = "AadjPercMrunSrasWpstDfl_up";
			SlowR = "AadjPercMrunSrasWpstDr_up";
			SlowRB = "AadjPercMrunSrasWpstDbr_up";
			SlowRF = "AadjPercMrunSrasWpstDfr_up";
			stop = "AadjPercMstpSrasWpstDup";
			StopRelaxed = "AadjPercMstpSrasWpstDup";
			TactB = "AadjPercMtacSrasWpstDb_up";
			TactF = "AadjPercMtacSrasWpstDf_up";
			TactL = "AadjPercMtacSrasWpstDl_up";
			TactLB = "AadjPercMtacSrasWpstDbl_up";
			TactLF = "AadjPercMtacSrasWpstDfl_up";
			TactR = "AadjPercMtacSrasWpstDr_up";
			TactRB = "AadjPercMtacSrasWpstDbr_up";
			TactRF = "AadjPercMtacSrasWpstDfr_up";
			turnL = "AadjPercMstpSrasWpstDup";
			turnLRelaxed = "AadjPercMstpSrasWpstDup";
			turnR = "AadjPercMstpSrasWpstDup";
			turnRRelaxed = "AadjPercMstpSrasWpstDup";
			up = "AadjPknlMstpSrasWpstDup";
			WalkB = "AadjPercMwlkSrasWpstDb_up";
			WalkF = "AadjPercMwlkSrasWpstDf_up";
			WalkL = "AadjPercMwlkSrasWpstDl_up";
			WalkLB = "AadjPercMwlkSrasWpstDbl_up";
			WalkLF = "AadjPercMwlkSrasWpstDfl_up";
			WalkR = "AadjPercMwlkSrasWpstDr_up";
			WalkRB = "AadjPercMwlkSrasWpstDbr_up";
			WalkRF = "AadjPercMwlkSrasWpstDfr_up";
		};
		class PistolAdjustFStandActionsRunB: PistolAdjustFStandActions
		{
			AdjustB = "";
			AdjustF = "";
			AdjustL = "";
			AdjustR = "";
			PlayerCrouch = "AadjPknlMrunSrasWpstDb_up";
			PlayerStand = "AadjPercMtacSrasWpstDb_up";
			Up = "AadjPknlMrunSrasWpstDb_up";
		};
		class PistolAdjustFStandActionsRunBL: PistolAdjustFStandActions
		{
			AdjustB = "";
			AdjustF = "";
			AdjustL = "";
			AdjustR = "";
			PlayerCrouch = "AadjPknlMrunSrasWpstDbl_up";
			PlayerStand = "AadjPercMtacSrasWpstDbl_up";
			Up = "AadjPknlMrunSrasWpstDbl_up";
		};
		class PistolAdjustFStandActionsRunBR: PistolAdjustFStandActions
		{
			AdjustB = "";
			AdjustF = "";
			AdjustL = "";
			AdjustR = "";
			PlayerCrouch = "AadjPknlMrunSrasWpstDbr_up";
			PlayerStand = "AadjPercMtacSrasWpstDbr_up";
		};
		class PistolAdjustFStandActionsRunF: PistolAdjustFStandActions
		{
			AdjustB = "";
			AdjustF = "";
			AdjustL = "";
			AdjustR = "";
			PlayerCrouch = "AadjPknlMrunSrasWpstDf_up";
			PlayerStand = "AadjPercMtacSrasWpstDf_up";
			Up = "AadjPknlMrunSrasWpstDf_up";
		};
		class PistolAdjustFStandActionsRunFL: PistolAdjustFStandActions
		{
			AdjustB = "";
			AdjustF = "";
			AdjustL = "";
			AdjustR = "";
			PlayerCrouch = "AadjPknlMrunSrasWpstDfl_up";
			PlayerStand = "AadjPercMtacSrasWpstDfl_up";
			Up = "AadjPknlMrunSrasWpstDfl_up";
		};
		class PistolAdjustFStandActionsRunFR: PistolAdjustFStandActions
		{
			AdjustB = "";
			AdjustF = "";
			AdjustL = "";
			AdjustR = "";
			PlayerCrouch = "AadjPknlMrunSrasWpstDfr_up";
			PlayerStand = "AadjPercMtacSrasWpstDfr_up";
			Up = "AadjPknlMrunSrasWpstDfr_up";
		};
		class PistolAdjustFStandActionsRunL: PistolAdjustFStandActions
		{
			AdjustB = "";
			AdjustF = "";
			AdjustL = "";
			AdjustR = "";
			PlayerCrouch = "AadjPknlMrunSrasWpstDl_up";
			PlayerStand = "AadjPercMtacSrasWpstDl_up";
			Up = "AadjPknlMrunSrasWpstDl_up";
		};
		class PistolAdjustFStandActionsRunR: PistolAdjustFStandActions
		{
			AdjustB = "";
			AdjustF = "";
			AdjustL = "";
			AdjustR = "";
			PlayerCrouch = "AadjPknlMrunSrasWpstDr_up";
			PlayerStand = "AadjPercMtacSrasWpstDr_up";
			Up = "AadjPknlMrunSrasWpstDr_up";
		};
		class PistolAdjustFStandActionsTacB: PistolAdjustFStandActions
		{
			AdjustB = "";
			AdjustF = "";
			AdjustL = "";
			AdjustR = "";
			PlayerCrouch = "AadjPknlMtacSrasWpstDb_up";
			PlayerStand = "AadjPercMrunSrasWpstDb_up";
			Up = "AadjPknlMtacSrasWpstDb_up";
		};
		class PistolAdjustFStandActionsTacBL: PistolAdjustFStandActions
		{
			AdjustB = "";
			AdjustF = "";
			AdjustL = "";
			AdjustR = "";
			PlayerCrouch = "AadjPknlMtacSrasWpstDbl_up";
			PlayerStand = "AadjPercMrunSrasWpstDbl_up";
			Up = "AadjPknlMtacSrasWpstDbl_up";
		};
		class PistolAdjustFStandActionsTacBR: PistolAdjustFStandActions
		{
			AdjustB = "";
			AdjustF = "";
			AdjustL = "";
			AdjustR = "";
			PlayerCrouch = "AadjPknlMtacSrasWpstDbr_up";
			PlayerStand = "AadjPercMrunSrasWpstDbr_up";
		};
		class PistolAdjustFStandActionsTacF: PistolAdjustFStandActions
		{
			AdjustB = "";
			AdjustF = "";
			AdjustL = "";
			AdjustR = "";
			PlayerCrouch = "AadjPknlMtacSrasWpstDf_up";
			PlayerStand = "AadjPercMrunSrasWpstDf_up";
			Up = "AadjPknlMtacSrasWpstDf_up";
		};
		class PistolAdjustFStandActionsTacFL: PistolAdjustFStandActions
		{
			AdjustB = "";
			AdjustF = "";
			AdjustL = "";
			AdjustR = "";
			PlayerCrouch = "AadjPknlMtacSrasWpstDfl_up";
			PlayerStand = "AadjPercMrunSrasWpstDfl_up";
			Up = "AadjPknlMtacSrasWpstDfl_up";
		};
		class PistolAdjustFStandActionsTacFR: PistolAdjustFStandActions
		{
			AdjustB = "";
			AdjustF = "";
			AdjustL = "";
			AdjustR = "";
			PlayerCrouch = "AadjPknlMtacSrasWpstDfr_up";
			PlayerStand = "AadjPercMrunSrasWpstDfr_up";
			Up = "AadjPknlMtacSrasWpstDfr_up";
		};
		class PistolAdjustFStandActionsTacL: PistolAdjustFStandActions
		{
			AdjustB = "";
			AdjustF = "";
			AdjustL = "";
			AdjustR = "";
			PlayerCrouch = "AadjPknlMtacSrasWpstDl_up";
			PlayerStand = "AadjPercMrunSrasWpstDl_up";
			Up = "AadjPknlMtacSrasWpstDl_up";
		};
		class PistolAdjustFStandActionsTacR: PistolAdjustFStandActions
		{
			AdjustB = "";
			AdjustF = "";
			AdjustL = "";
			AdjustR = "";
			PlayerCrouch = "AadjPknlMtacSrasWpstDr_up";
			PlayerStand = "AadjPercMrunSrasWpstDr_up";
			Up = "AadjPknlMtacSrasWpstDr_up";
		};
		class PistolAdjustFStandActionsWlkB: PistolAdjustFStandActions
		{
			AdjustB = "";
			AdjustF = "";
			AdjustL = "";
			AdjustR = "";
			PlayerCrouch = "AadjPknlMwlkSrasWpstDb_up";
			Up = "AadjPknlMwlkSrasWpstDb_up";
		};
		class PistolAdjustFStandActionsWlkBL: PistolAdjustFStandActions
		{
			AdjustB = "";
			AdjustF = "";
			AdjustL = "";
			AdjustR = "";
			PlayerCrouch = "AadjPknlMwlkSrasWpstDbl_up";
			Up = "AadjPknlMwlkSrasWpstDbl_up";
		};
		class PistolAdjustFStandActionsWlkBR: PistolAdjustFStandActions
		{
			AdjustB = "";
			AdjustF = "";
			AdjustL = "";
			AdjustR = "";
			PlayerCrouch = "AadjPknlMwlkSrasWpstDbr_up";
			Stand = "AadjPercMwlkSrasWpstDbr_up";
			Up = "AadjPknlMwlkSrasWpstDbr_up";
		};
		class PistolAdjustFStandActionsWlkF: PistolAdjustFStandActions
		{
			AdjustB = "";
			AdjustF = "";
			AdjustL = "";
			AdjustR = "";
			PlayerCrouch = "AadjPknlMwlkSrasWpstDf_up";
			Up = "AadjPknlMwlkSrasWpstDf_up";
		};
		class PistolAdjustFStandActionsWlkFL: PistolAdjustFStandActions
		{
			AdjustB = "";
			AdjustF = "";
			AdjustL = "";
			AdjustR = "";
			PlayerCrouch = "AadjPknlMwlkSrasWpstDfl_up";
			Up = "AadjPknlMwlkSrasWpstDfl_up";
		};
		class PistolAdjustFStandActionsWlkFR: PistolAdjustFStandActions
		{
			AdjustB = "";
			AdjustF = "";
			AdjustL = "";
			AdjustR = "";
			PlayerCrouch = "AadjPknlMwlkSrasWpstDfr_up";
			Up = "AadjPknlMwlkSrasWpstDfr_up";
		};
		class PistolAdjustFStandActionsWlkL: PistolAdjustFStandActions
		{
			AdjustB = "";
			AdjustF = "";
			AdjustL = "";
			AdjustR = "";
			PlayerCrouch = "AadjPknlMwlkSrasWpstDl_up";
			Up = "AadjPknlMwlkSrasWpstDl_up";
		};
		class PistolAdjustFStandActionsWlkR: PistolAdjustFStandActions
		{
			AdjustB = "";
			AdjustF = "";
			AdjustL = "";
			AdjustR = "";
			PlayerCrouch = "AadjPknlMwlkSrasWpstDr_up";
			Up = "AadjPknlMwlkSrasWpstDr_up";
		};
		class PistolAdjustFStandEvasiveActionsF: PistolAdjustFStandActions
		{
			AdjustB = "";
			AdjustF = "";
			AdjustL = "";
			AdjustR = "";
			PlayerCrouch = "AadjPknlMevaSrasWpstDf_up";
			Up = "AadjPknlMevaSrasWpstDf_up";
		};
		class PistolAdjustFStandEvasiveActionsFL: PistolAdjustFStandActions
		{
			AdjustB = "";
			AdjustF = "";
			AdjustL = "";
			AdjustR = "";
			PlayerCrouch = "AadjPknlMevaSrasWpstDfl_up";
			Up = "AadjPknlMevaSrasWpstDfl_up";
		};
		class PistolAdjustFStandEvasiveActionsFR: PistolAdjustFStandActions
		{
			AdjustB = "";
			AdjustF = "";
			AdjustL = "";
			AdjustR = "";
			PlayerCrouch = "AadjPknlMevaSrasWpstDfr_up";
			Up = "AadjPknlMevaSrasWpstDfr_up";
		};
		class PistolAdjustKneelBaseActions: PistolKneelActions
		{
			Crouch = "";
			Lying = "";
		};
		class PistolAdjustLKneelActions: PistolAdjustKneelBaseActions
		{
			AdjustR = "AmovPknlMstpSrasWpstDnon";
			Combat = "AadjPknlMstpSrasWpstDleft";
			default = "AadjPknlMstpSrasWpstDleft";
			down = "AadjPpneMstpSrasWpstDleft";
			FastB = "AadjPknlMrunSrasWpstDb_left";
			FastF = "AadjPknlMevaSrasWpstDf_left";
			FastL = "AadjPknlMrunSrasWpstDl_left";
			FastLB = "AadjPknlMrunSrasWpstDbl_left";
			FastLF = "AadjPknlMevaSrasWpstDfl_left";
			FastR = "AadjPknlMrunSrasWpstDr_left";
			FastRB = "AadjPknlMrunSrasWpstDbr_left";
			FastRF = "AadjPknlMevaSrasWpstDfr_left";
			FireNotPossible = "AadjPknlMstpSrasWpstDleft";
			PlayerProne = "AadjPpneMstpSrasWpstDleft";
			PlayerSlowB = "AadjPknlMrunSrasWpstDb_left";
			PlayerSlowF = "AadjPknlMrunSrasWpstDf_left";
			PlayerSlowL = "AadjPknlMrunSrasWpstDl_left";
			PlayerSlowLB = "AadjPknlMrunSrasWpstDbl_left";
			PlayerSlowLF = "AadjPknlMrunSrasWpstDfl_left";
			PlayerSlowR = "AadjPknlMrunSrasWpstDr_left";
			PlayerSlowRB = "AadjPknlMrunSrasWpstDbr_left";
			PlayerSlowRF = "AadjPknlMrunSrasWpstDfr_left";
			PlayerStand = "AadjPercMstpSrasWpstDleft";
			PlayerTactB = "AadjPknlMtacSrasWpstDb_left";
			PlayerTactF = "AadjPknlMtacSrasWpstDf_left";
			PlayerTactL = "AadjPknlMtacSrasWpstDl_left";
			PlayerTactLB = "AadjPknlMtacSrasWpstDbl_left";
			PlayerTactLF = "AadjPknlMtacSrasWpstDfl_left";
			PlayerTactR = "AadjPknlMtacSrasWpstDr_left";
			PlayerTactRB = "AadjPknlMtacSrasWpstDbr_left";
			PlayerTactRF = "AadjPknlMtacSrasWpstDfr_left";
			PlayerWalkB = "AadjPknlMwlkSrasWpstDb_left";
			PlayerWalkF = "AadjPknlMwlkSrasWpstDf_left";
			PlayerWalkL = "AadjPknlMwlkSrasWpstDl_left";
			PlayerWalkLB = "AadjPknlMwlkSrasWpstDbl_left";
			PlayerWalkLF = "AadjPknlMwlkSrasWpstDfl_left";
			PlayerWalkR = "AadjPknlMwlkSrasWpstDr_left";
			PlayerWalkRB = "AadjPknlMwlkSrasWpstDbr_left";
			PlayerWalkRF = "AadjPknlMwlkSrasWpstDfr_left";
			SlowB = "AadjPknlMrunSrasWpstDb_left";
			SlowF = "AadjPknlMrunSrasWpstDf_left";
			SlowL = "AadjPknlMrunSrasWpstDl_left";
			SlowLB = "AadjPknlMrunSrasWpstDbl_left";
			SlowLF = "AadjPknlMrunSrasWpstDfl_left";
			SlowR = "AadjPknlMrunSrasWpstDr_left";
			SlowRB = "AadjPknlMrunSrasWpstDbr_left";
			SlowRF = "AadjPknlMrunSrasWpstDfr_left";
			Stand = "AmovPknlMstpSlowWpstDnon";
			stop = "AadjPknlMstpSrasWpstDleft";
			StopRelaxed = "AadjPknlMstpSrasWpstDleft";
			TactB = "AadjPknlMtacSrasWpstDb_left";
			TactF = "AadjPknlMtacSrasWpstDf_left";
			TactL = "AadjPknlMtacSrasWpstDl_left";
			TactLB = "AadjPknlMtacSrasWpstDbl_left";
			TactLF = "AadjPknlMtacSrasWpstDfl_left";
			TactR = "AadjPknlMtacSrasWpstDr_left";
			TactRB = "AadjPknlMtacSrasWpstDbr_left";
			TactRF = "AadjPknlMtacSrasWpstDfr_left";
			turnL = "AadjPknlMstpSrasWpstDleft";
			turnLRelaxed = "AadjPknlMstpSrasWpstDleft";
			turnR = "AadjPknlMstpSrasWpstDleft";
			turnRRelaxed = "AadjPknlMstpSrasWpstDleft";
			up = "AadjPercMstpSrasWpstDleft";
			WalkB = "AadjPknlMwlkSrasWpstDb_left";
			WalkF = "AadjPknlMwlkSrasWpstDf_left";
			WalkL = "AadjPknlMwlkSrasWpstDl_left";
			WalkLB = "AadjPknlMwlkSrasWpstDbl_left";
			WalkLF = "AadjPknlMwlkSrasWpstDfl_left";
			WalkR = "AadjPknlMwlkSrasWpstDr_left";
			WalkRB = "AadjPknlMwlkSrasWpstDbr_left";
			WalkRF = "AadjPknlMwlkSrasWpstDfr_left";
		};
		class PistolAdjustLKneelActionsRunB: PistolAdjustLKneelActions
		{
			AdjustB = "";
			AdjustF = "";
			AdjustL = "";
			AdjustR = "";
			PlayerCrouch = "AadjPknlMtacSrasWpstDb_left";
			PlayerStand = "AadjPercMrunSrasWpstDb_left";
			Up = "AadjPercMrunSrasWpstDb_left";
		};
		class PistolAdjustLKneelActionsRunBL: PistolAdjustLKneelActions
		{
			AdjustB = "";
			AdjustF = "";
			AdjustL = "";
			AdjustR = "";
			PlayerCrouch = "AadjPknlMtacSrasWpstDbl_left";
			PlayerStand = "AadjPercMrunSrasWpstDbl_left";
			Up = "AadjPercMrunSrasWpstDbl_left";
		};
		class PistolAdjustLKneelActionsRunBR: PistolAdjustLKneelActions
		{
			AdjustB = "";
			AdjustF = "";
			AdjustL = "";
			AdjustR = "";
			PlayerCrouch = "AadjPknlMtacSrasWpstDbr_left";
			PlayerStand = "AadjPercMrunSrasWpstDbr_left";
		};
		class PistolAdjustLKneelActionsRunF: PistolAdjustLKneelActions
		{
			AdjustB = "";
			AdjustF = "";
			AdjustL = "";
			AdjustR = "";
			PlayerCrouch = "AadjPknlMtacSrasWpstDf_left";
			PlayerStand = "AadjPercMrunSrasWpstDf_left";
			Up = "AadjPercMrunSrasWpstDf_left";
		};
		class PistolAdjustLKneelActionsRunFL: PistolAdjustLKneelActions
		{
			AdjustB = "";
			AdjustF = "";
			AdjustL = "";
			AdjustR = "";
			PlayerCrouch = "AadjPknlMtacSrasWpstDfl_left";
			PlayerStand = "AadjPercMrunSrasWpstDfl_left";
			Up = "AadjPercMrunSrasWpstDfl_left";
		};
		class PistolAdjustLKneelActionsRunFR: PistolAdjustLKneelActions
		{
			AdjustB = "";
			AdjustF = "";
			AdjustL = "";
			AdjustR = "";
			PlayerCrouch = "AadjPknlMtacSrasWpstDfr_left";
			PlayerStand = "AadjPercMrunSrasWpstDfr_left";
			Up = "AadjPercMrunSrasWpstDfr_left";
		};
		class PistolAdjustLKneelActionsRunL: PistolAdjustLKneelActions
		{
			AdjustB = "";
			AdjustF = "";
			AdjustL = "";
			AdjustR = "";
			PlayerCrouch = "AadjPknlMtacSrasWpstDl_left";
			PlayerStand = "AadjPercMrunSrasWpstDl_left";
			Up = "AadjPercMrunSrasWpstDl_left";
		};
		class PistolAdjustLKneelActionsRunR: PistolAdjustLKneelActions
		{
			AdjustB = "";
			AdjustF = "";
			AdjustL = "";
			AdjustR = "";
			PlayerCrouch = "AadjPknlMtacSrasWpstDr_left";
			PlayerStand = "AadjPercMrunSrasWpstDr_left";
			Up = "AadjPercMrunSrasWpstDr_left";
		};
		class PistolAdjustLKneelActionsTacB: PistolAdjustLKneelActions
		{
			AdjustB = "";
			AdjustF = "";
			AdjustL = "";
			AdjustR = "";
			PlayerCrouch = "AadjPknlMrunSrasWpstDb_left";
			PlayerStand = "AadjPercMtacSrasWpstDb_left";
			Up = "AadjPercMtacSrasWpstDb_left";
		};
		class PistolAdjustLKneelActionsTacBL: PistolAdjustLKneelActions
		{
			AdjustB = "";
			AdjustF = "";
			AdjustL = "";
			AdjustR = "";
			PlayerCrouch = "AadjPknlMrunSrasWpstDbl_left";
			PlayerStand = "AadjPercMtacSrasWpstDbl_left";
			Up = "AadjPercMtacSrasWpstDbl_left";
		};
		class PistolAdjustLKneelActionsTacBR: PistolAdjustLKneelActions
		{
			AdjustB = "";
			AdjustF = "";
			AdjustL = "";
			AdjustR = "";
			PlayerCrouch = "AadjPknlMrunSrasWpstDbr_left";
			PlayerStand = "AadjPercMtacSrasWpstDbr_left";
		};
		class PistolAdjustLKneelActionsTacF: PistolAdjustLKneelActions
		{
			AdjustB = "";
			AdjustF = "";
			AdjustL = "";
			AdjustR = "";
			PlayerCrouch = "AadjPknlMrunSrasWpstDf_left";
			PlayerStand = "AadjPercMtacSrasWpstDf_left";
			Up = "AadjPercMtacSrasWpstDf_left";
		};
		class PistolAdjustLKneelActionsTacFL: PistolAdjustLKneelActions
		{
			AdjustB = "";
			AdjustF = "";
			AdjustL = "";
			AdjustR = "";
			PlayerCrouch = "AadjPknlMrunSrasWpstDfl_left";
			PlayerStand = "AadjPercMtacSrasWpstDfl_left";
			Up = "AadjPercMtacSrasWpstDfl_left";
		};
		class PistolAdjustLKneelActionsTacFR: PistolAdjustLKneelActions
		{
			AdjustB = "";
			AdjustF = "";
			AdjustL = "";
			AdjustR = "";
			PlayerCrouch = "AadjPknlMrunSrasWpstDfr_left";
			PlayerStand = "AadjPercMtacSrasWpstDfr_left";
			Up = "AadjPercMtacSrasWpstDfr_left";
		};
		class PistolAdjustLKneelActionsTacL: PistolAdjustLKneelActions
		{
			AdjustB = "";
			AdjustF = "";
			AdjustL = "";
			AdjustR = "";
			PlayerCrouch = "AadjPknlMrunSrasWpstDl_left";
			PlayerStand = "AadjPercMtacSrasWpstDl_left";
			Up = "AadjPercMtacSrasWpstDl_left";
		};
		class PistolAdjustLKneelActionsTacR: PistolAdjustLKneelActions
		{
			AdjustB = "";
			AdjustF = "";
			AdjustL = "";
			AdjustR = "";
			PlayerCrouch = "AadjPknlMrunSrasWpstDr_left";
			PlayerStand = "AadjPercMtacSrasWpstDr_left";
			Up = "AadjPercMtacSrasWpstDr_left";
		};
		class PistolAdjustLKneelActionsWlkB: PistolAdjustLKneelActions
		{
			AdjustB = "";
			AdjustF = "";
			AdjustL = "";
			AdjustR = "";
			PlayerStand = "AadjPercMwlkSrasWpstDb_left";
			Up = "AadjPercMwlkSrasWpstDb_left";
		};
		class PistolAdjustLKneelActionsWlkBL: PistolAdjustLKneelActions
		{
			AdjustB = "";
			AdjustF = "";
			AdjustL = "";
			AdjustR = "";
			PlayerStand = "AadjPercMwlkSrasWpstDbl_left";
			Up = "AadjPercMwlkSrasWpstDbl_left";
		};
		class PistolAdjustLKneelActionsWlkBR: PistolAdjustLKneelActions
		{
			AdjustB = "";
			AdjustF = "";
			AdjustL = "";
			AdjustR = "";
			PlayerStand = "AadjPercMwlkSrasWpstDbr_left";
			Stand = "AadjPknlMwlkSrasWpstDbr_left";
			Up = "AadjPercMwlkSrasWpstDbr_left";
		};
		class PistolAdjustLKneelActionsWlkF: PistolAdjustLKneelActions
		{
			AdjustB = "";
			AdjustF = "";
			AdjustL = "";
			AdjustR = "";
			PlayerStand = "AadjPercMwlkSrasWpstDf_left";
			Up = "AadjPercMwlkSrasWpstDf_left";
		};
		class PistolAdjustLKneelActionsWlkFL: PistolAdjustLKneelActions
		{
			AdjustB = "";
			AdjustF = "";
			AdjustL = "";
			AdjustR = "";
			PlayerStand = "AadjPercMwlkSrasWpstDfl_left";
			Up = "AadjPercMwlkSrasWpstDfl_left";
		};
		class PistolAdjustLKneelActionsWlkFR: PistolAdjustLKneelActions
		{
			AdjustB = "";
			AdjustF = "";
			AdjustL = "";
			AdjustR = "";
			PlayerStand = "AadjPercMwlkSrasWpstDfr_left";
			Up = "AadjPercMwlkSrasWpstDfr_left";
		};
		class PistolAdjustLKneelActionsWlkL: PistolAdjustLKneelActions
		{
			AdjustB = "";
			AdjustF = "";
			AdjustL = "";
			AdjustR = "";
			PlayerStand = "AadjPercMwlkSrasWpstDl_left";
			Up = "AadjPercMwlkSrasWpstDl_left";
		};
		class PistolAdjustLKneelActionsWlkR: PistolAdjustLKneelActions
		{
			AdjustB = "";
			AdjustF = "";
			AdjustL = "";
			AdjustR = "";
			PlayerStand = "AadjPercMwlkSrasWpstDr_left";
			Up = "AadjPercMwlkSrasWpstDr_left";
		};
		class PistolAdjustLKneelEvasiveActionsF: PistolAdjustLKneelActions
		{
			AdjustB = "";
			AdjustF = "";
			AdjustL = "";
			AdjustR = "";
			PlayerStand = "AadjPercMevaSrasWpstDf_left";
			Up = "AadjPercMevaSrasWpstDf_left";
		};
		class PistolAdjustLKneelEvasiveActionsFL: PistolAdjustLKneelActions
		{
			AdjustB = "";
			AdjustF = "";
			AdjustL = "";
			AdjustR = "";
			PlayerStand = "AadjPercMevaSrasWpstDfl_left";
			Up = "AadjPercMevaSrasWpstDfl_left";
		};
		class PistolAdjustLKneelEvasiveActionsFR: PistolAdjustLKneelActions
		{
			AdjustB = "";
			AdjustF = "";
			AdjustL = "";
			AdjustR = "";
			PlayerStand = "AadjPercMevaSrasWpstDfr_left";
			Up = "AadjPercMevaSrasWpstDfr_left";
		};
		class PistolAdjustLProneActions: PistolAdjustProneBaseActions
		{
			CanNotMove = "AadjPpneMstpSrasWpstDleft";
			Combat = "AadjPpneMstpSrasWpstDleft";
			default = "AadjPpneMstpSrasWpstDleft";
			EvasiveLeft = "AadjPpneMstpSrasWpstDleft";
			EvasiveRight = "AadjPpneMstpSrasWpstDleft";
			FastB = "AadjPpneMwlkSrasWpstDleft_b";
			FastF = "AadjPpneMwlkSrasWpstDleft_f";
			FastL = "AadjPpneMwlkSrasWpstDleft_l";
			FastLB = "";
			FastLF = "";
			FastR = "AadjPpneMwlkSrasWpstDleft_r";
			FastRB = "";
			FastRF = "";
			FireNotPossible = "AadjPpneMstpSrasWpstDleft";
			gestureAdvance[] = {"GestureAdvance", "Gesture"};
			gestureFreeze = "";
			gestureGo = "";
			gestureGoB = "";
			GestureReloadFlaregun[] = {"GestureReloadFlaregunContext", "Gesture"};
			GestureReloadPistol[] = {"GestureReloadPistolContext", "Gesture"};
			GestureReloadPistolHeavy02[] = {"GestureReloadPistolHeavy02Context", "Gesture"};
			gestureUp = "";
			Lying = "AadjPpneMstpSrasWpstDleft";
			PlayerSlowB = "AadjPpneMwlkSrasWpstDleft_f";
			PlayerSlowF = "AadjPpneMwlkSrasWpstDleft_f";
			PlayerSlowL = "AadjPpneMwlkSrasWpstDleft_l";
			PlayerSlowLB = "";
			PlayerSlowLF = "";
			PlayerSlowR = "AadjPpneMwlkSrasWpstDleft_r";
			PlayerSlowRB = "AadjPpneMwlkSrasWpstDleft_b";
			PlayerSlowRF = "";
			PlayerTactB = "AadjPpneMwlkSrasWpstDleft_b";
			PlayerTactF = "AadjPpneMwlkSrasWpstDleft_f";
			PlayerTactL = "AadjPpneMwlkSrasWpstDleft_l";
			PlayerTactLB = "";
			PlayerTactLF = "";
			PlayerTactR = "AadjPpneMwlkSrasWpstDleft_r";
			PlayerTactRB = "";
			PlayerTactRF = "";
			PlayerWalkB = "AadjPpneMwlkSrasWpstDleft_b";
			PlayerWalkF = "AadjPpneMwlkSrasWpstDleft_f";
			PlayerWalkL = "AadjPpneMwlkSrasWpstDleft_l";
			PlayerWalkLB = "";
			PlayerWalkLF = "";
			PlayerWalkR = "AadjPpneMwlkSrasWpstDleft_r";
			PlayerWalkRB = "";
			PlayerWalkRF = "";
			Relax = "AadjPpneMstpSrasWpstDleft";
			reloadMGun = "AadjPpneMstpSrasWpstDleft";
			reloadMortar = "AadjPpneMstpSrasWpstDleft";
			SlowB = "AadjPpneMwlkSrasWpstDleft_b";
			SlowF = "AadjPpneMwlkSrasWpstDleft_f";
			SlowL = "AadjPpneMwlkSrasWpstDleft_l";
			SlowLB = "";
			SlowLF = "";
			SlowR = "AadjPpneMwlkSrasWpstDleft_r";
			SlowRB = "";
			SlowRF = "";
			stop = "AadjPpneMstpSrasWpstDleft";
			stopRelaxed = "AadjPpneMstpSrasWpstDleft";
			TactB = "AadjPpneMwlkSrasWpstDleft_b";
			TactF = "AadjPpneMwlkSrasWpstDleft_f";
			TactL = "AadjPpneMwlkSrasWpstDleft_l";
			TactLB = "";
			TactLF = "";
			TactR = "AadjPpneMwlkSrasWpstDleft_r";
			TactRB = "";
			TactRF = "";
			throwGrenade[] = {"GestureThrowGrenadePistolContext", "Gesture"};
			turnL = "AadjPpneMstpSrasWpstDleft";
			turnLRelaxed = "AadjPpneMstpSrasWpstDleft";
			turnR = "AadjPpneMstpSrasWpstDleft";
			turnRRelaxed = "AadjPpneMstpSrasWpstDleft";
			turnSpeed = 1.5;
			WalkB = "";
			WalkF = "";
			WalkL = "";
			WalkLB = "";
			WalkLF = "";
			WalkR = "";
			WalkRB = "";
			WalkRF = "";
			weaponOff = "AadjPpneMstpSrasWpstDleft";
		};
		class PistolAdjustLStandActions: PistolAdjustStandBaseActions
		{
			AdjustR = "AmovPercMstpSrasWpstDnon";
			Combat = "AadjPercMstpSrasWpstDleft";
			Crouch = "AadjPknlMstpSrasWpstDleft";
			default = "AadjPercMstpSrasWpstDleft";
			down = "AadjPpneMstpSrasWpstDleft";
			FastB = "AadjPercMrunSrasWpstDb_left";
			FastF = "AadjPercMevaSrasWpstDf_left";
			FastL = "AadjPercMrunSrasWpstDl_left";
			FastLB = "AadjPercMrunSrasWpstDbl_left";
			FastLF = "AadjPercMevaSrasWpstDfl_left";
			FastR = "AadjPercMrunSrasWpstDr_left";
			FastRB = "AadjPercMrunSrasWpstDbr_left";
			FastRF = "AadjPercMevaSrasWpstDfr_left";
			FireNotPossible = "AadjPercMstpSrasWpstDleft";
			PlayerCrouch = "AadjPknlMstpSrasWpstDleft";
			PlayerSlowB = "AadjPercMrunSrasWpstDb_left";
			PlayerSlowF = "AadjPercMrunSrasWpstDf_left";
			PlayerSlowL = "AadjPercMrunSrasWpstDl_left";
			PlayerSlowLB = "AadjPercMrunSrasWpstDbl_left";
			PlayerSlowLF = "AadjPercMrunSrasWpstDfl_left";
			PlayerSlowR = "AadjPercMrunSrasWpstDr_left";
			PlayerSlowRB = "AadjPercMrunSrasWpstDbr_left";
			PlayerSlowRF = "AadjPercMrunSrasWpstDfr_left";
			PlayerStand = "AmovPercMstpSrasWpstDnon";
			PlayerTactB = "AadjPercMtacSrasWpstDb_left";
			PlayerTactF = "AadjPercMtacSrasWpstDf_left";
			PlayerTactL = "AadjPercMtacSrasWpstDl_left";
			PlayerTactLB = "AadjPercMtacSrasWpstDbl_left";
			PlayerTactLF = "AadjPercMtacSrasWpstDfl_left";
			PlayerTactR = "AadjPercMtacSrasWpstDr_left";
			PlayerTactRB = "AadjPercMtacSrasWpstDbr_left";
			PlayerTactRF = "AadjPercMtacSrasWpstDfr_left";
			PlayerWalkB = "AadjPercMwlkSrasWpstDb_left";
			PlayerWalkF = "AadjPercMwlkSrasWpstDf_left";
			PlayerWalkL = "AadjPercMwlkSrasWpstDl_left";
			PlayerWalkLB = "AadjPercMwlkSrasWpstDbl_left";
			PlayerWalkLF = "AadjPercMwlkSrasWpstDfl_left";
			PlayerWalkR = "AadjPercMwlkSrasWpstDr_left";
			PlayerWalkRB = "AadjPercMwlkSrasWpstDbr_left";
			PlayerWalkRF = "AadjPercMwlkSrasWpstDfr_left";
			SlowB = "AadjPercMrunSrasWpstDb_left";
			SlowF = "AadjPercMrunSrasWpstDf_left";
			SlowL = "AadjPercMrunSrasWpstDl_left";
			SlowLB = "AadjPercMrunSrasWpstDbl_left";
			SlowLF = "AadjPercMrunSrasWpstDfl_left";
			SlowR = "AadjPercMrunSrasWpstDr_left";
			SlowRB = "AadjPercMrunSrasWpstDbr_left";
			SlowRF = "AadjPercMrunSrasWpstDfr_left";
			stop = "AadjPercMstpSrasWpstDleft";
			StopRelaxed = "AadjPercMstpSrasWpstDleft";
			TactB = "AadjPercMtacSrasWpstDb_left";
			TactF = "AadjPercMtacSrasWpstDf_left";
			TactL = "AadjPercMtacSrasWpstDl_left";
			TactLB = "AadjPercMtacSrasWpstDbl_left";
			TactLF = "AadjPercMtacSrasWpstDfl_left";
			TactR = "AadjPercMtacSrasWpstDr_left";
			TactRB = "AadjPercMtacSrasWpstDbr_left";
			TactRF = "AadjPercMtacSrasWpstDfr_left";
			turnL = "AadjPercMstpSrasWpstDleft";
			turnLRelaxed = "AadjPercMstpSrasWpstDleft";
			turnR = "AadjPercMstpSrasWpstDleft";
			turnRRelaxed = "AadjPercMstpSrasWpstDleft";
			up = "AadjPknlMstpSrasWpstDleft";
			WalkB = "AadjPercMwlkSrasWpstDb_left";
			WalkF = "AadjPercMwlkSrasWpstDf_left";
			WalkL = "AadjPercMwlkSrasWpstDl_left";
			WalkLB = "AadjPercMwlkSrasWpstDbl_left";
			WalkLF = "AadjPercMwlkSrasWpstDfl_left";
			WalkR = "AadjPercMwlkSrasWpstDr_left";
			WalkRB = "AadjPercMwlkSrasWpstDbr_left";
			WalkRF = "AadjPercMwlkSrasWpstDfr_left";
		};
		class PistolAdjustLStandActionsRunB: PistolAdjustLStandActions
		{
			AdjustB = "";
			AdjustF = "";
			AdjustL = "";
			AdjustR = "";
			PlayerCrouch = "AadjPknlMrunSrasWpstDb_left";
			PlayerStand = "AadjPercMtacSrasWpstDb_left";
			Up = "AadjPknlMrunSrasWpstDb_left";
		};
		class PistolAdjustLStandActionsRunBL: PistolAdjustLStandActions
		{
			AdjustB = "";
			AdjustF = "";
			AdjustL = "";
			AdjustR = "";
			PlayerCrouch = "AadjPknlMrunSrasWpstDbl_left";
			PlayerStand = "AadjPercMtacSrasWpstDbl_left";
			Up = "AadjPknlMrunSrasWpstDbl_left";
		};
		class PistolAdjustLStandActionsRunBR: PistolAdjustLStandActions
		{
			AdjustB = "";
			AdjustF = "";
			AdjustL = "";
			AdjustR = "";
			PlayerCrouch = "AadjPknlMrunSrasWpstDbr_left";
			PlayerStand = "AadjPercMtacSrasWpstDbr_left";
		};
		class PistolAdjustLStandActionsRunF: PistolAdjustLStandActions
		{
			AdjustB = "";
			AdjustF = "";
			AdjustL = "";
			AdjustR = "";
			PlayerCrouch = "AadjPknlMrunSrasWpstDf_left";
			PlayerStand = "AadjPercMtacSrasWpstDf_left";
			Up = "AadjPknlMrunSrasWpstDf_left";
		};
		class PistolAdjustLStandActionsRunFL: PistolAdjustLStandActions
		{
			AdjustB = "";
			AdjustF = "";
			AdjustL = "";
			AdjustR = "";
			PlayerCrouch = "AadjPknlMrunSrasWpstDfl_left";
			PlayerStand = "AadjPercMtacSrasWpstDfl_left";
			Up = "AadjPknlMrunSrasWpstDfl_left";
		};
		class PistolAdjustLStandActionsRunFR: PistolAdjustLStandActions
		{
			AdjustB = "";
			AdjustF = "";
			AdjustL = "";
			AdjustR = "";
			PlayerCrouch = "AadjPknlMrunSrasWpstDfr_left";
			PlayerStand = "AadjPercMtacSrasWpstDfr_left";
			Up = "AadjPknlMrunSrasWpstDfr_left";
		};
		class PistolAdjustLStandActionsRunL: PistolAdjustLStandActions
		{
			AdjustB = "";
			AdjustF = "";
			AdjustL = "";
			AdjustR = "";
			PlayerCrouch = "AadjPknlMrunSrasWpstDl_left";
			PlayerStand = "AadjPercMtacSrasWpstDl_left";
			Up = "AadjPknlMrunSrasWpstDl_left";
		};
		class PistolAdjustLStandActionsRunR: PistolAdjustLStandActions
		{
			AdjustB = "";
			AdjustF = "";
			AdjustL = "";
			AdjustR = "";
			PlayerCrouch = "AadjPknlMrunSrasWpstDr_left";
			PlayerStand = "AadjPercMtacSrasWpstDr_left";
			Up = "AadjPknlMrunSrasWpstDr_left";
		};
		class PistolAdjustLStandActionsTacB: PistolAdjustLStandActions
		{
			AdjustB = "";
			AdjustF = "";
			AdjustL = "";
			AdjustR = "";
			PlayerCrouch = "AadjPknlMtacSrasWpstDb_left";
			PlayerStand = "AadjPercMrunSrasWpstDb_left";
			Up = "AadjPknlMtacSrasWpstDb_left";
		};
		class PistolAdjustLStandActionsTacBL: PistolAdjustLStandActions
		{
			AdjustB = "";
			AdjustF = "";
			AdjustL = "";
			AdjustR = "";
			PlayerCrouch = "AadjPknlMtacSrasWpstDbl_left";
			PlayerStand = "AadjPercMrunSrasWpstDbl_left";
			Up = "AadjPknlMtacSrasWpstDbl_left";
		};
		class PistolAdjustLStandActionsTacBR: PistolAdjustLStandActions
		{
			AdjustB = "";
			AdjustF = "";
			AdjustL = "";
			AdjustR = "";
			PlayerCrouch = "AadjPknlMtacSrasWpstDbr_left";
			PlayerStand = "AadjPercMrunSrasWpstDbr_left";
		};
		class PistolAdjustLStandActionsTacF: PistolAdjustLStandActions
		{
			AdjustB = "";
			AdjustF = "";
			AdjustL = "";
			AdjustR = "";
			PlayerCrouch = "AadjPknlMtacSrasWpstDf_left";
			PlayerStand = "AadjPercMrunSrasWpstDf_left";
			Up = "AadjPknlMtacSrasWpstDf_left";
		};
		class PistolAdjustLStandActionsTacFL: PistolAdjustLStandActions
		{
			AdjustB = "";
			AdjustF = "";
			AdjustL = "";
			AdjustR = "";
			PlayerCrouch = "AadjPknlMtacSrasWpstDfl_left";
			PlayerStand = "AadjPercMrunSrasWpstDfl_left";
			Up = "AadjPknlMtacSrasWpstDfl_left";
		};
		class PistolAdjustLStandActionsTacFR: PistolAdjustLStandActions
		{
			AdjustB = "";
			AdjustF = "";
			AdjustL = "";
			AdjustR = "";
			PlayerCrouch = "AadjPknlMtacSrasWpstDfr_left";
			PlayerStand = "AadjPercMrunSrasWpstDfr_left";
			Up = "AadjPknlMtacSrasWpstDfr_left";
		};
		class PistolAdjustLStandActionsTacL: PistolAdjustLStandActions
		{
			AdjustB = "";
			AdjustF = "";
			AdjustL = "";
			AdjustR = "";
			PlayerCrouch = "AadjPknlMtacSrasWpstDl_left";
			PlayerStand = "AadjPercMrunSrasWpstDl_left";
			Up = "AadjPknlMtacSrasWpstDl_left";
		};
		class PistolAdjustLStandActionsTacR: PistolAdjustLStandActions
		{
			AdjustB = "";
			AdjustF = "";
			AdjustL = "";
			AdjustR = "";
			PlayerCrouch = "AadjPknlMtacSrasWpstDr_left";
			PlayerStand = "AadjPercMrunSrasWpstDr_left";
			Up = "AadjPknlMtacSrasWpstDr_left";
		};
		class PistolAdjustLStandActionsWlkB: PistolAdjustLStandActions
		{
			AdjustB = "";
			AdjustF = "";
			AdjustL = "";
			AdjustR = "";
			PlayerCrouch = "AadjPknlMwlkSrasWpstDb_left";
			Up = "AadjPknlMwlkSrasWpstDb_left";
		};
		class PistolAdjustLStandActionsWlkBL: PistolAdjustLStandActions
		{
			AdjustB = "";
			AdjustF = "";
			AdjustL = "";
			AdjustR = "";
			PlayerCrouch = "AadjPknlMwlkSrasWpstDbl_left";
			Up = "AadjPknlMwlkSrasWpstDbl_left";
		};
		class PistolAdjustLStandActionsWlkBR: PistolAdjustLStandActions
		{
			AdjustB = "";
			AdjustF = "";
			AdjustL = "";
			AdjustR = "";
			PlayerCrouch = "AadjPknlMwlkSrasWpstDbr_left";
			Stand = "AadjPercMwlkSrasWpstDbr_left";
			Up = "AadjPknlMwlkSrasWpstDbr_left";
		};
		class PistolAdjustLStandActionsWlkF: PistolAdjustLStandActions
		{
			AdjustB = "";
			AdjustF = "";
			AdjustL = "";
			AdjustR = "";
			PlayerCrouch = "AadjPknlMwlkSrasWpstDf_left";
			Up = "AadjPknlMwlkSrasWpstDf_left";
		};
		class PistolAdjustLStandActionsWlkFL: PistolAdjustLStandActions
		{
			AdjustB = "";
			AdjustF = "";
			AdjustL = "";
			AdjustR = "";
			PlayerCrouch = "AadjPknlMwlkSrasWpstDfl_left";
			Up = "AadjPknlMwlkSrasWpstDfl_left";
		};
		class PistolAdjustLStandActionsWlkFR: PistolAdjustLStandActions
		{
			AdjustB = "";
			AdjustF = "";
			AdjustL = "";
			AdjustR = "";
			PlayerCrouch = "AadjPknlMwlkSrasWpstDfr_left";
			Up = "AadjPknlMwlkSrasWpstDfr_left";
		};
		class PistolAdjustLStandActionsWlkL: PistolAdjustLStandActions
		{
			AdjustB = "";
			AdjustF = "";
			AdjustL = "";
			AdjustR = "";
			PlayerCrouch = "AadjPknlMwlkSrasWpstDl_left";
			Up = "AadjPknlMwlkSrasWpstDl_left";
		};
		class PistolAdjustLStandActionsWlkR: PistolAdjustLStandActions
		{
			AdjustB = "";
			AdjustF = "";
			AdjustL = "";
			AdjustR = "";
			PlayerCrouch = "AadjPknlMwlkSrasWpstDr_left";
			Up = "AadjPknlMwlkSrasWpstDr_left";
		};
		class PistolAdjustLStandEvasiveActionsF: PistolAdjustLStandActions
		{
			AdjustB = "";
			AdjustF = "";
			AdjustL = "";
			AdjustR = "";
			PlayerCrouch = "AadjPknlMevaSrasWpstDf_left";
			Up = "AadjPknlMevaSrasWpstDf_left";
		};
		class PistolAdjustLStandEvasiveActionsFL: PistolAdjustLStandActions
		{
			AdjustB = "";
			AdjustF = "";
			AdjustL = "";
			AdjustR = "";
			PlayerCrouch = "AadjPknlMevaSrasWpstDfl_left";
			Up = "AadjPknlMevaSrasWpstDfl_left";
		};
		class PistolAdjustLStandEvasiveActionsFR: PistolAdjustLStandActions
		{
			AdjustB = "";
			AdjustF = "";
			AdjustL = "";
			AdjustR = "";
			PlayerCrouch = "AadjPknlMevaSrasWpstDfr_left";
			Up = "AadjPknlMevaSrasWpstDfr_left";
		};
		class PistolAdjustProneBaseActions: PistolProneActions
		{
			Crouch = "";
			Lying = "";
		};
		class PistolAdjustRKneelActions: PistolAdjustKneelBaseActions
		{
			AdjustL = "AmovPknlMstpSrasWpstDnon";
			Combat = "AadjPknlMstpSrasWpstDright";
			default = "AadjPknlMstpSrasWpstDright";
			down = "AadjPpneMstpSrasWpstDright";
			FastB = "AadjPknlMrunSrasWpstDb_right";
			FastF = "AadjPknlMevaSrasWpstDf_right";
			FastL = "AadjPknlMrunSrasWpstDl_right";
			FastLB = "AadjPknlMrunSrasWpstDbl_right";
			FastLF = "AadjPknlMevaSrasWpstDfl_right";
			FastR = "AadjPknlMrunSrasWpstDr_right";
			FastRB = "AadjPknlMrunSrasWpstDbr_right";
			FastRF = "AadjPknlMevaSrasWpstDfr_right";
			FireNotPossible = "AadjPknlMstpSrasWpstDright";
			PlayerProne = "AadjPpneMstpSrasWpstDright";
			PlayerSlowB = "AadjPknlMrunSrasWpstDb_right";
			PlayerSlowF = "AadjPknlMrunSrasWpstDf_right";
			PlayerSlowL = "AadjPknlMrunSrasWpstDl_right";
			PlayerSlowLB = "AadjPknlMrunSrasWpstDbl_right";
			PlayerSlowLF = "AadjPknlMrunSrasWpstDfl_right";
			PlayerSlowR = "AadjPknlMrunSrasWpstDr_right";
			PlayerSlowRB = "AadjPknlMrunSrasWpstDbr_right";
			PlayerSlowRF = "AadjPknlMrunSrasWpstDfr_right";
			PlayerStand = "AadjPercMstpSrasWpstDright";
			PlayerTactB = "AadjPknlMtacSrasWpstDb_right";
			PlayerTactF = "AadjPknlMtacSrasWpstDf_right";
			PlayerTactL = "AadjPknlMtacSrasWpstDl_right";
			PlayerTactLB = "AadjPknlMtacSrasWpstDbl_right";
			PlayerTactLF = "AadjPknlMtacSrasWpstDfl_right";
			PlayerTactR = "AadjPknlMtacSrasWpstDr_right";
			PlayerTactRB = "AadjPknlMtacSrasWpstDbr_right";
			PlayerTactRF = "AadjPknlMtacSrasWpstDfr_right";
			PlayerWalkB = "AadjPknlMwlkSrasWpstDb_right";
			PlayerWalkF = "AadjPknlMwlkSrasWpstDf_right";
			PlayerWalkL = "AadjPknlMwlkSrasWpstDl_right";
			PlayerWalkLB = "AadjPknlMwlkSrasWpstDbl_right";
			PlayerWalkLF = "AadjPknlMwlkSrasWpstDfl_right";
			PlayerWalkR = "AadjPknlMwlkSrasWpstDr_right";
			PlayerWalkRB = "AadjPknlMwlkSrasWpstDbr_right";
			PlayerWalkRF = "AadjPknlMwlkSrasWpstDfr_right";
			SlowB = "AadjPknlMrunSrasWpstDb_right";
			SlowF = "AadjPknlMrunSrasWpstDf_right";
			SlowL = "AadjPknlMrunSrasWpstDl_right";
			SlowLB = "AadjPknlMrunSrasWpstDbl_right";
			SlowLF = "AadjPknlMrunSrasWpstDfl_right";
			SlowR = "AadjPknlMrunSrasWpstDr_right";
			SlowRB = "AadjPknlMrunSrasWpstDbr_right";
			SlowRF = "AadjPknlMrunSrasWpstDfr_right";
			Stand = "AmovPknlMstpSlowWpstDnon";
			stop = "AadjPknlMstpSrasWpstDright";
			StopRelaxed = "AadjPknlMstpSrasWpstDright";
			TactB = "AadjPknlMtacSrasWpstDb_right";
			TactF = "AadjPknlMtacSrasWpstDf_right";
			TactL = "AadjPknlMtacSrasWpstDl_right";
			TactLB = "AadjPknlMtacSrasWpstDbl_right";
			TactLF = "AadjPknlMtacSrasWpstDfl_right";
			TactR = "AadjPknlMtacSrasWpstDr_right";
			TactRB = "AadjPknlMtacSrasWpstDbr_right";
			TactRF = "AadjPknlMtacSrasWpstDfr_right";
			turnL = "AadjPknlMstpSrasWpstDright";
			turnLRelaxed = "AadjPknlMstpSrasWpstDright";
			turnR = "AadjPknlMstpSrasWpstDright";
			turnRRelaxed = "AadjPknlMstpSrasWpstDright";
			up = "AadjPercMstpSrasWpstDright";
			WalkB = "AadjPknlMwlkSrasWpstDb_right";
			WalkF = "AadjPknlMwlkSrasWpstDf_right";
			WalkL = "AadjPknlMwlkSrasWpstDl_right";
			WalkLB = "AadjPknlMwlkSrasWpstDbl_right";
			WalkLF = "AadjPknlMwlkSrasWpstDfl_right";
			WalkR = "AadjPknlMwlkSrasWpstDr_right";
			WalkRB = "AadjPknlMwlkSrasWpstDbr_right";
			WalkRF = "AadjPknlMwlkSrasWpstDfr_right";
		};
		class PistolAdjustRKneelActionsRunB: PistolAdjustRKneelActions
		{
			AdjustB = "";
			AdjustF = "";
			AdjustL = "";
			AdjustR = "";
			PlayerCrouch = "AadjPknlMtacSrasWpstDb_right";
			PlayerStand = "AadjPercMrunSrasWpstDb_right";
			Up = "AadjPercMrunSrasWpstDb_right";
		};
		class PistolAdjustRKneelActionsRunBL: PistolAdjustRKneelActions
		{
			AdjustB = "";
			AdjustF = "";
			AdjustL = "";
			AdjustR = "";
			PlayerCrouch = "AadjPknlMtacSrasWpstDbl_right";
			PlayerStand = "AadjPercMrunSrasWpstDbl_right";
			Up = "AadjPercMrunSrasWpstDbl_right";
		};
		class PistolAdjustRKneelActionsRunBR: PistolAdjustRKneelActions
		{
			AdjustB = "";
			AdjustF = "";
			AdjustL = "";
			AdjustR = "";
			PlayerCrouch = "AadjPknlMtacSrasWpstDbr_right";
			PlayerStand = "AadjPercMrunSrasWpstDbr_right";
		};
		class PistolAdjustRKneelActionsRunF: PistolAdjustRKneelActions
		{
			AdjustB = "";
			AdjustF = "";
			AdjustL = "";
			AdjustR = "";
			PlayerCrouch = "AadjPknlMtacSrasWpstDf_right";
			PlayerStand = "AadjPercMrunSrasWpstDf_right";
			Up = "AadjPercMrunSrasWpstDf_right";
		};
		class PistolAdjustRKneelActionsRunFL: PistolAdjustRKneelActions
		{
			AdjustB = "";
			AdjustF = "";
			AdjustL = "";
			AdjustR = "";
			PlayerCrouch = "AadjPknlMtacSrasWpstDfl_right";
			PlayerStand = "AadjPercMrunSrasWpstDfl_right";
			Up = "AadjPercMrunSrasWpstDfl_right";
		};
		class PistolAdjustRKneelActionsRunFR: PistolAdjustRKneelActions
		{
			AdjustB = "";
			AdjustF = "";
			AdjustL = "";
			AdjustR = "";
			PlayerCrouch = "AadjPknlMtacSrasWpstDfr_right";
			PlayerStand = "AadjPercMrunSrasWpstDfr_right";
			Up = "AadjPercMrunSrasWpstDfr_right";
		};
		class PistolAdjustRKneelActionsRunL: PistolAdjustRKneelActions
		{
			AdjustB = "";
			AdjustF = "";
			AdjustL = "";
			AdjustR = "";
			PlayerCrouch = "AadjPknlMtacSrasWpstDl_right";
			PlayerStand = "AadjPercMrunSrasWpstDl_right";
			Up = "AadjPercMrunSrasWpstDl_right";
		};
		class PistolAdjustRKneelActionsRunR: PistolAdjustRKneelActions
		{
			AdjustB = "";
			AdjustF = "";
			AdjustL = "";
			AdjustR = "";
			PlayerCrouch = "AadjPknlMtacSrasWpstDr_right";
			PlayerStand = "AadjPercMrunSrasWpstDr_right";
			Up = "AadjPercMrunSrasWpstDr_right";
		};
		class PistolAdjustRKneelActionsTacB: PistolAdjustRKneelActions
		{
			AdjustB = "";
			AdjustF = "";
			AdjustL = "";
			AdjustR = "";
			PlayerCrouch = "AadjPknlMrunSrasWpstDb_right";
			PlayerStand = "AadjPercMtacSrasWpstDb_right";
			Up = "AadjPercMtacSrasWpstDb_right";
		};
		class PistolAdjustRKneelActionsTacBL: PistolAdjustRKneelActions
		{
			AdjustB = "";
			AdjustF = "";
			AdjustL = "";
			AdjustR = "";
			PlayerCrouch = "AadjPknlMrunSrasWpstDbl_right";
			PlayerStand = "AadjPercMtacSrasWpstDbl_right";
			Up = "AadjPercMtacSrasWpstDbl_right";
		};
		class PistolAdjustRKneelActionsTacBR: PistolAdjustRKneelActions
		{
			AdjustB = "";
			AdjustF = "";
			AdjustL = "";
			AdjustR = "";
			PlayerCrouch = "AadjPknlMrunSrasWpstDbr_right";
			PlayerStand = "AadjPercMtacSrasWpstDbr_right";
		};
		class PistolAdjustRKneelActionsTacF: PistolAdjustRKneelActions
		{
			AdjustB = "";
			AdjustF = "";
			AdjustL = "";
			AdjustR = "";
			PlayerCrouch = "AadjPknlMrunSrasWpstDf_right";
			PlayerStand = "AadjPercMtacSrasWpstDf_right";
			Up = "AadjPercMtacSrasWpstDf_right";
		};
		class PistolAdjustRKneelActionsTacFL: PistolAdjustRKneelActions
		{
			AdjustB = "";
			AdjustF = "";
			AdjustL = "";
			AdjustR = "";
			PlayerCrouch = "AadjPknlMrunSrasWpstDfl_right";
			PlayerStand = "AadjPercMtacSrasWpstDfl_right";
			Up = "AadjPercMtacSrasWpstDfl_right";
		};
		class PistolAdjustRKneelActionsTacFR: PistolAdjustRKneelActions
		{
			AdjustB = "";
			AdjustF = "";
			AdjustL = "";
			AdjustR = "";
			PlayerCrouch = "AadjPknlMrunSrasWpstDfr_right";
			PlayerStand = "AadjPercMtacSrasWpstDfr_right";
			Up = "AadjPercMtacSrasWpstDfr_right";
		};
		class PistolAdjustRKneelActionsTacL: PistolAdjustRKneelActions
		{
			AdjustB = "";
			AdjustF = "";
			AdjustL = "";
			AdjustR = "";
			PlayerCrouch = "AadjPknlMrunSrasWpstDl_right";
			PlayerStand = "AadjPercMtacSrasWpstDl_right";
			Up = "AadjPercMtacSrasWpstDl_right";
		};
		class PistolAdjustRKneelActionsTacR: PistolAdjustRKneelActions
		{
			AdjustB = "";
			AdjustF = "";
			AdjustL = "";
			AdjustR = "";
			PlayerCrouch = "AadjPknlMrunSrasWpstDr_right";
			PlayerStand = "AadjPercMtacSrasWpstDr_right";
			Up = "AadjPercMtacSrasWpstDr_right";
		};
		class PistolAdjustRKneelActionsWlkB: PistolAdjustRKneelActions
		{
			AdjustB = "";
			AdjustF = "";
			AdjustL = "";
			AdjustR = "";
			PlayerStand = "AadjPercMwlkSrasWpstDb_right";
			Up = "AadjPercMwlkSrasWpstDb_right";
		};
		class PistolAdjustRKneelActionsWlkBL: PistolAdjustRKneelActions
		{
			AdjustB = "";
			AdjustF = "";
			AdjustL = "";
			AdjustR = "";
			PlayerStand = "AadjPercMwlkSrasWpstDbl_right";
			Up = "AadjPercMwlkSrasWpstDbl_right";
		};
		class PistolAdjustRKneelActionsWlkBR: PistolAdjustRKneelActions
		{
			AdjustB = "";
			AdjustF = "";
			AdjustL = "";
			AdjustR = "";
			PlayerStand = "AadjPercMwlkSrasWpstDbr_right";
			Stand = "AadjPknlMwlkSrasWpstDbr_right";
			Up = "AadjPercMwlkSrasWpstDbr_right";
		};
		class PistolAdjustRKneelActionsWlkF: PistolAdjustRKneelActions
		{
			AdjustB = "";
			AdjustF = "";
			AdjustL = "";
			AdjustR = "";
			PlayerStand = "AadjPercMwlkSrasWpstDf_right";
			Up = "AadjPercMwlkSrasWpstDf_right";
		};
		class PistolAdjustRKneelActionsWlkFL: PistolAdjustRKneelActions
		{
			AdjustB = "";
			AdjustF = "";
			AdjustL = "";
			AdjustR = "";
			PlayerStand = "AadjPercMwlkSrasWpstDfl_right";
			Up = "AadjPercMwlkSrasWpstDfl_right";
		};
		class PistolAdjustRKneelActionsWlkFR: PistolAdjustRKneelActions
		{
			AdjustB = "";
			AdjustF = "";
			AdjustL = "";
			AdjustR = "";
			PlayerStand = "AadjPercMwlkSrasWpstDfr_right";
			Up = "AadjPercMwlkSrasWpstDfr_right";
		};
		class PistolAdjustRKneelActionsWlkL: PistolAdjustRKneelActions
		{
			AdjustB = "";
			AdjustF = "";
			AdjustL = "";
			AdjustR = "";
			PlayerStand = "AadjPercMwlkSrasWpstDl_right";
			Up = "AadjPercMwlkSrasWpstDl_right";
		};
		class PistolAdjustRKneelActionsWlkR: PistolAdjustRKneelActions
		{
			AdjustB = "";
			AdjustF = "";
			AdjustL = "";
			AdjustR = "";
			PlayerStand = "AadjPercMwlkSrasWpstDr_right";
			Up = "AadjPercMwlkSrasWpstDr_right";
		};
		class PistolAdjustRKneelEvasiveActionsF: PistolAdjustRKneelActions
		{
			AdjustB = "";
			AdjustF = "";
			AdjustL = "";
			AdjustR = "";
			PlayerStand = "AadjPercMevaSrasWpstDf_left";
			Up = "AadjPercMevaSrasWpstDf_left";
		};
		class PistolAdjustRKneelEvasiveActionsFL: PistolAdjustRKneelActions
		{
			AdjustB = "";
			AdjustF = "";
			AdjustL = "";
			AdjustR = "";
			PlayerStand = "AadjPercMevaSrasWpstDfl_left";
			Up = "AadjPercMevaSrasWpstDfl_left";
		};
		class PistolAdjustRKneelEvasiveActionsFR: PistolAdjustRKneelActions
		{
			AdjustB = "";
			AdjustF = "";
			AdjustL = "";
			AdjustR = "";
			PlayerStand = "AadjPercMevaSrasWpstDfr_left";
			Up = "AadjPercMevaSrasWpstDfr_left";
		};
		class PistolAdjustRProneActions: PistolAdjustProneBaseActions
		{
			CanNotMove = "AadjPpneMstpSrasWpstDright";
			Combat = "AadjPpneMstpSrasWpstDright";
			default = "AadjPpneMstpSrasWpstDright";
			EvasiveLeft = "AadjPpneMstpSrasWpstDright";
			EvasiveRight = "AadjPpneMstpSrasWpstDright";
			FastB = "AadjPpneMwlkSrasWpstDright_b";
			FastF = "AadjPpneMwlkSrasWpstDright_f";
			FastL = "AadjPpneMwlkSrasWpstDright_l";
			FastLB = "";
			FastLF = "";
			FastR = "AadjPpneMwlkSrasWpstDright_r";
			FastRB = "";
			FastRF = "";
			FireNotPossible = "AadjPpneMstpSrasWpstDright";
			gestureAdvance[] = {"GestureAdvance", "Gesture"};
			gestureFreeze = "";
			gestureGo = "";
			gestureGoB = "";
			GestureReloadFlaregun[] = {"GestureReloadFlaregunContext", "Gesture"};
			GestureReloadPistol[] = {"GestureReloadPistolContext", "Gesture"};
			GestureReloadPistolHeavy02[] = {"GestureReloadPistolHeavy02Context", "Gesture"};
			gestureUp = "";
			Lying = "AadjPpneMstpSrasWpstDright";
			PlayerSlowB = "AadjPpneMwlkSrasWpstDright_b";
			PlayerSlowF = "AadjPpneMwlkSrasWpstDright_f";
			PlayerSlowL = "AadjPpneMwlkSrasWpstDright_l";
			PlayerSlowLB = "";
			PlayerSlowLF = "";
			PlayerSlowR = "AadjPpneMwlkSrasWpstDright_r";
			PlayerSlowRB = "";
			PlayerSlowRF = "";
			PlayerTactB = "AadjPpneMwlkSrasWpstDright_b";
			PlayerTactF = "AadjPpneMwlkSrasWpstDright_f";
			PlayerTactL = "AadjPpneMwlkSrasWpstDright_l";
			PlayerTactLB = "";
			PlayerTactLF = "";
			PlayerTactR = "AadjPpneMwlkSrasWpstDright_r";
			PlayerTactRB = "";
			PlayerTactRF = "";
			PlayerWalkB = "AadjPpneMwlkSrasWpstDright_b";
			PlayerWalkF = "AadjPpneMwlkSrasWpstDright_f";
			PlayerWalkL = "AadjPpneMwlkSrasWpstDright_l";
			PlayerWalkLB = "";
			PlayerWalkLF = "";
			PlayerWalkR = "AadjPpneMwlkSrasWpstDright_r";
			PlayerWalkRB = "";
			PlayerWalkRF = "";
			Relax = "AadjPpneMstpSrasWpstDright";
			reloadMGun = "AadjPpneMstpSrasWpstDright";
			reloadMortar = "AadjPpneMstpSrasWpstDright";
			SlowB = "AadjPpneMwlkSrasWpstDright_b";
			SlowF = "AadjPpneMwlkSrasWpstDright_f";
			SlowL = "AadjPpneMwlkSrasWpstDright_l";
			SlowLB = "";
			SlowLF = "";
			SlowR = "AadjPpneMwlkSrasWpstDright_r";
			SlowRB = "";
			SlowRF = "";
			stop = "AadjPpneMstpSrasWpstDright";
			stopRelaxed = "AadjPpneMstpSrasWpstDright";
			TactB = "AadjPpneMwlkSrasWpstDright_b";
			TactF = "AadjPpneMwlkSrasWpstDright_f";
			TactL = "AadjPpneMwlkSrasWpstDright_l";
			TactLB = "";
			TactLF = "";
			TactR = "AadjPpneMwlkSrasWpstDright_r";
			TactRB = "";
			TactRF = "";
			throwGrenade[] = {"GestureThrowGrenadePistolContext", "Gesture"};
			turnL = "AadjPpneMstpSrasWpstDright";
			turnLRelaxed = "AadjPpneMstpSrasWpstDright";
			turnR = "AadjPpneMstpSrasWpstDright";
			turnRRelaxed = "AadjPpneMstpSrasWpstDright";
			turnSpeed = 1.5;
			WalkB = "";
			WalkF = "";
			WalkL = "";
			WalkLB = "";
			WalkLF = "";
			WalkR = "";
			WalkRB = "";
			WalkRF = "";
			weaponOff = "AadjPpneMstpSrasWpstDright";
		};
		class PistolAdjustRStandActions: PistolAdjustStandBaseActions
		{
			AdjustL = "AmovPercMstpSrasWpstDnon";
			Combat = "AadjPercMstpSrasWpstDright";
			Crouch = "AadjPknlMstpSrasWpstDright";
			default = "AadjPercMstpSrasWpstDright";
			down = "AadjPpneMstpSrasWpstDright";
			FastB = "AadjPercMrunSrasWpstDb_right";
			FastF = "AadjPercMevaSrasWpstDf_right";
			FastL = "AadjPercMrunSrasWpstDl_right";
			FastLB = "AadjPercMrunSrasWpstDbl_right";
			FastLF = "AadjPercMevaSrasWpstDfl_right";
			FastR = "AadjPercMrunSrasWpstDr_right";
			FastRB = "AadjPercMrunSrasWpstDbr_right";
			FastRF = "AadjPercMevaSrasWpstDfr_right";
			FireNotPossible = "AadjPercMstpSrasWpstDright";
			PlayerCrouch = "AadjPknlMstpSrasWpstDright";
			PlayerSlowB = "AadjPercMrunSrasWpstDb_right";
			PlayerSlowF = "AadjPercMrunSrasWpstDf_right";
			PlayerSlowL = "AadjPercMrunSrasWpstDl_right";
			PlayerSlowLB = "AadjPercMrunSrasWpstDbl_right";
			PlayerSlowLF = "AadjPercMrunSrasWpstDfl_right";
			PlayerSlowR = "AadjPercMrunSrasWpstDr_right";
			PlayerSlowRB = "AadjPercMrunSrasWpstDbr_right";
			PlayerSlowRF = "AadjPercMrunSrasWpstDfr_right";
			PlayerStand = "AmovPercMstpSrasWpstDnon";
			PlayerTactB = "AadjPercMtacSrasWpstDb_right";
			PlayerTactF = "AadjPercMtacSrasWpstDf_right";
			PlayerTactL = "AadjPercMtacSrasWpstDl_right";
			PlayerTactLB = "AadjPercMtacSrasWpstDbl_right";
			PlayerTactLF = "AadjPercMtacSrasWpstDfl_right";
			PlayerTactR = "AadjPercMtacSrasWpstDr_right";
			PlayerTactRB = "AadjPercMtacSrasWpstDbr_right";
			PlayerTactRF = "AadjPercMtacSrasWpstDfr_right";
			PlayerWalkB = "AadjPercMwlkSrasWpstDb_right";
			PlayerWalkF = "AadjPercMwlkSrasWpstDf_right";
			PlayerWalkL = "AadjPercMwlkSrasWpstDl_right";
			PlayerWalkLB = "AadjPercMwlkSrasWpstDbl_right";
			PlayerWalkLF = "AadjPercMwlkSrasWpstDfl_right";
			PlayerWalkR = "AadjPercMwlkSrasWpstDr_right";
			PlayerWalkRB = "AadjPercMwlkSrasWpstDbr_right";
			PlayerWalkRF = "AadjPercMwlkSrasWpstDfr_right";
			SlowB = "AadjPercMrunSrasWpstDb_right";
			SlowF = "AadjPercMrunSrasWpstDf_right";
			SlowL = "AadjPercMrunSrasWpstDl_right";
			SlowLB = "AadjPercMrunSrasWpstDbl_right";
			SlowLF = "AadjPercMrunSrasWpstDfl_right";
			SlowR = "AadjPercMrunSrasWpstDr_right";
			SlowRB = "AadjPercMrunSrasWpstDbr_right";
			SlowRF = "AadjPercMrunSrasWpstDfr_right";
			stop = "AadjPercMstpSrasWpstDright";
			StopRelaxed = "AadjPercMstpSrasWpstDright";
			TactB = "AadjPercMtacSrasWpstDb_right";
			TactF = "AadjPercMtacSrasWpstDf_right";
			TactL = "AadjPercMtacSrasWpstDl_right";
			TactLB = "AadjPercMtacSrasWpstDbl_right";
			TactLF = "AadjPercMtacSrasWpstDfl_right";
			TactR = "AadjPercMtacSrasWpstDr_right";
			TactRB = "AadjPercMtacSrasWpstDbr_right";
			TactRF = "AadjPercMtacSrasWpstDfr_right";
			turnL = "AadjPercMstpSrasWpstDright";
			turnLRelaxed = "AadjPercMstpSrasWpstDright";
			turnR = "AadjPercMstpSrasWpstDright";
			turnRRelaxed = "AadjPercMstpSrasWpstDright";
			up = "AadjPknlMstpSrasWpstDright";
			WalkB = "AadjPercMwlkSrasWpstDb_right";
			WalkF = "AadjPercMwlkSrasWpstDf_right";
			WalkL = "AadjPercMwlkSrasWpstDl_right";
			WalkLB = "AadjPercMwlkSrasWpstDbl_right";
			WalkLF = "AadjPercMwlkSrasWpstDfl_right";
			WalkR = "AadjPercMwlkSrasWpstDr_right";
			WalkRB = "AadjPercMwlkSrasWpstDbr_right";
			WalkRF = "AadjPercMwlkSrasWpstDfr_right";
		};
		class PistolAdjustRStandActionsRunB: PistolAdjustRStandActions
		{
			AdjustB = "";
			AdjustF = "";
			AdjustL = "";
			AdjustR = "";
			PlayerCrouch = "AadjPknlMrunSrasWpstDb_right";
			PlayerStand = "AadjPercMtacSrasWpstDb_right";
			Up = "AadjPknlMrunSrasWpstDb_right";
		};
		class PistolAdjustRStandActionsRunBL: PistolAdjustRStandActions
		{
			AdjustB = "";
			AdjustF = "";
			AdjustL = "";
			AdjustR = "";
			PlayerCrouch = "AadjPknlMrunSrasWpstDbl_right";
			PlayerStand = "AadjPercMtacSrasWpstDbl_right";
			Up = "AadjPknlMrunSrasWpstDbl_right";
		};
		class PistolAdjustRStandActionsRunBR: PistolAdjustRStandActions
		{
			AdjustB = "";
			AdjustF = "";
			AdjustL = "";
			AdjustR = "";
			PlayerCrouch = "AadjPknlMrunSrasWpstDbr_right";
			PlayerStand = "AadjPercMtacSrasWpstDbr_right";
		};
		class PistolAdjustRStandActionsRunF: PistolAdjustRStandActions
		{
			AdjustB = "";
			AdjustF = "";
			AdjustL = "";
			AdjustR = "";
			PlayerCrouch = "AadjPknlMrunSrasWpstDf_right";
			PlayerStand = "AadjPercMtacSrasWpstDf_right";
			Up = "AadjPknlMrunSrasWpstDf_right";
		};
		class PistolAdjustRStandActionsRunFL: PistolAdjustRStandActions
		{
			AdjustB = "";
			AdjustF = "";
			AdjustL = "";
			AdjustR = "";
			PlayerCrouch = "AadjPknlMrunSrasWpstDfl_right";
			PlayerStand = "AadjPercMtacSrasWpstDfl_right";
			Up = "AadjPknlMrunSrasWpstDfl_right";
		};
		class PistolAdjustRStandActionsRunFR: PistolAdjustRStandActions
		{
			AdjustB = "";
			AdjustF = "";
			AdjustL = "";
			AdjustR = "";
			PlayerCrouch = "AadjPknlMrunSrasWpstDfr_right";
			PlayerStand = "AadjPercMtacSrasWpstDfr_right";
			Up = "AadjPknlMrunSrasWpstDfr_right";
		};
		class PistolAdjustRStandActionsRunL: PistolAdjustRStandActions
		{
			AdjustB = "";
			AdjustF = "";
			AdjustL = "";
			AdjustR = "";
			PlayerCrouch = "AadjPknlMrunSrasWpstDl_right";
			PlayerStand = "AadjPercMtacSrasWpstDl_right";
			Up = "AadjPknlMrunSrasWpstDl_right";
		};
		class PistolAdjustRStandActionsRunR: PistolAdjustRStandActions
		{
			AdjustB = "";
			AdjustF = "";
			AdjustL = "";
			AdjustR = "";
			PlayerCrouch = "AadjPknlMrunSrasWpstDr_right";
			PlayerStand = "AadjPercMtacSrasWpstDr_right";
			Up = "AadjPknlMrunSrasWpstDr_right";
		};
		class PistolAdjustRStandActionsTacB: PistolAdjustRStandActions
		{
			AdjustB = "";
			AdjustF = "";
			AdjustL = "";
			AdjustR = "";
			PlayerCrouch = "AadjPknlMtacSrasWpstDb_right";
			PlayerStand = "AadjPercMrunSrasWpstDb_right";
			Up = "AadjPknlMtacSrasWpstDb_right";
		};
		class PistolAdjustRStandActionsTacBL: PistolAdjustRStandActions
		{
			AdjustB = "";
			AdjustF = "";
			AdjustL = "";
			AdjustR = "";
			PlayerCrouch = "AadjPknlMtacSrasWpstDbl_right";
			PlayerStand = "AadjPercMrunSrasWpstDbl_right";
			Up = "AadjPknlMtacSrasWpstDbl_right";
		};
		class PistolAdjustRStandActionsTacBR: PistolAdjustRStandActions
		{
			AdjustB = "";
			AdjustF = "";
			AdjustL = "";
			AdjustR = "";
			PlayerCrouch = "AadjPknlMtacSrasWpstDbr_right";
			PlayerStand = "AadjPercMrunSrasWpstDbr_right";
		};
		class PistolAdjustRStandActionsTacF: PistolAdjustRStandActions
		{
			AdjustB = "";
			AdjustF = "";
			AdjustL = "";
			AdjustR = "";
			PlayerCrouch = "AadjPknlMtacSrasWpstDf_right";
			PlayerStand = "AadjPercMrunSrasWpstDf_right";
			Up = "AadjPknlMtacSrasWpstDf_right";
		};
		class PistolAdjustRStandActionsTacFL: PistolAdjustRStandActions
		{
			AdjustB = "";
			AdjustF = "";
			AdjustL = "";
			AdjustR = "";
			PlayerCrouch = "AadjPknlMtacSrasWpstDfl_right";
			PlayerStand = "AadjPercMrunSrasWpstDfl_right";
			Up = "AadjPknlMtacSrasWpstDfl_right";
		};
		class PistolAdjustRStandActionsTacFR: PistolAdjustRStandActions
		{
			AdjustB = "";
			AdjustF = "";
			AdjustL = "";
			AdjustR = "";
			PlayerCrouch = "AadjPknlMtacSrasWpstDfr_right";
			PlayerStand = "AadjPercMrunSrasWpstDfr_right";
			Up = "AadjPknlMtacSrasWpstDfr_right";
		};
		class PistolAdjustRStandActionsTacL: PistolAdjustRStandActions
		{
			AdjustB = "";
			AdjustF = "";
			AdjustL = "";
			AdjustR = "";
			PlayerCrouch = "AadjPknlMtacSrasWpstDl_right";
			PlayerStand = "AadjPercMrunSrasWpstDl_right";
			Up = "AadjPknlMtacSrasWpstDl_right";
		};
		class PistolAdjustRStandActionsTacR: PistolAdjustRStandActions
		{
			AdjustB = "";
			AdjustF = "";
			AdjustL = "";
			AdjustR = "";
			PlayerCrouch = "AadjPknlMtacSrasWpstDr_right";
			PlayerStand = "AadjPercMrunSrasWpstDr_right";
			Up = "AadjPknlMtacSrasWpstDr_right";
		};
		class PistolAdjustRStandActionsWlkB: PistolAdjustRStandActions
		{
			AdjustB = "";
			AdjustF = "";
			AdjustL = "";
			AdjustR = "";
			PlayerCrouch = "AadjPknlMwlkSrasWpstDb_right";
			Up = "AadjPknlMwlkSrasWpstDb_right";
		};
		class PistolAdjustRStandActionsWlkBL: PistolAdjustRStandActions
		{
			AdjustB = "";
			AdjustF = "";
			AdjustL = "";
			AdjustR = "";
			PlayerCrouch = "AadjPknlMwlkSrasWpstDbl_right";
			Up = "AadjPknlMwlkSrasWpstDbl_right";
		};
		class PistolAdjustRStandActionsWlkBR: PistolAdjustRStandActions
		{
			AdjustB = "";
			AdjustF = "";
			AdjustL = "";
			AdjustR = "";
			PlayerCrouch = "AadjPknlMwlkSrasWpstDbr_right";
			Stand = "AadjPercMwlkSrasWpstDbr_right";
			Up = "AadjPknlMwlkSrasWpstDbr_right";
		};
		class PistolAdjustRStandActionsWlkF: PistolAdjustRStandActions
		{
			AdjustB = "";
			AdjustF = "";
			AdjustL = "";
			AdjustR = "";
			PlayerCrouch = "AadjPknlMwlkSrasWpstDf_right";
			Up = "AadjPknlMwlkSrasWpstDf_right";
		};
		class PistolAdjustRStandActionsWlkFL: PistolAdjustRStandActions
		{
			AdjustB = "";
			AdjustF = "";
			AdjustL = "";
			AdjustR = "";
			PlayerCrouch = "AadjPknlMwlkSrasWpstDfl_right";
			Up = "AadjPknlMwlkSrasWpstDfl_right";
		};
		class PistolAdjustRStandActionsWlkFR: PistolAdjustRStandActions
		{
			AdjustB = "";
			AdjustF = "";
			AdjustL = "";
			AdjustR = "";
			PlayerCrouch = "AadjPknlMwlkSrasWpstDfr_right";
			Up = "AadjPknlMwlkSrasWpstDfr_right";
		};
		class PistolAdjustRStandActionsWlkL: PistolAdjustRStandActions
		{
			AdjustB = "";
			AdjustF = "";
			AdjustL = "";
			AdjustR = "";
			PlayerCrouch = "AadjPknlMwlkSrasWpstDl_right";
			Up = "AadjPknlMwlkSrasWpstDl_right";
		};
		class PistolAdjustRStandActionsWlkR: PistolAdjustRStandActions
		{
			AdjustB = "";
			AdjustF = "";
			AdjustL = "";
			AdjustR = "";
			PlayerCrouch = "AadjPknlMwlkSrasWpstDr_right";
			Up = "AadjPknlMwlkSrasWpstDr_right";
		};
		class PistolAdjustRStandEvasiveActionsF: PistolAdjustRStandActions
		{
			AdjustB = "";
			AdjustF = "";
			AdjustL = "";
			AdjustR = "";
			PlayerCrouch = "AadjPknlMevaSrasWpstDf_right";
			Up = "AadjPknlMevaSrasWpstDf_right";
		};
		class PistolAdjustRStandEvasiveActionsFL: PistolAdjustRStandActions
		{
			AdjustB = "";
			AdjustF = "";
			AdjustL = "";
			AdjustR = "";
			PlayerCrouch = "AadjPknlMevaSrasWpstDfl_right";
			Up = "AadjPknlMevaSrasWpstDfl_right";
		};
		class PistolAdjustRStandEvasiveActionsFR: PistolAdjustRStandActions
		{
			AdjustB = "";
			AdjustF = "";
			AdjustL = "";
			AdjustR = "";
			PlayerCrouch = "AadjPknlMevaSrasWpstDfr_right";
			Up = "AadjPknlMevaSrasWpstDfr_right";
		};
		class PistolAdjustStandBaseActions: PistolStandActions
		{
			Crouch = "";
			Lying = "";
		};
		class PistolKneelActions: PistolStandActions
		{
			AdjustB = "AadjPknlMstpSrasWpstDdown";
			AdjustF = "AadjPknlMstpSrasWpstDup";
			AdjustL = "AadjPknlMstpSrasWpstDleft";
			AdjustLB = "AadjPknlMstpSrasWpstDdown";
			AdjustLF = "AadjPknlMstpSrasWpstDup";
			AdjustR = "AadjPknlMstpSrasWpstDright";
			AdjustRB = "AadjPknlMstpSrasWpstDdown";
			AdjustRF = "AadjPknlMstpSrasWpstDup";
			binocOff = "AmovPknlMstpSrasWpstDnon";
			binocOn = "AwopPknlMstpSoptWbinDnon_pst";
			Binoculars = "AmovPknlMstpSoptWbinDnon";
			CanNotMove = "AmovPknlMstpSrasWpstDnon";
			Civil = "AmovPknlMstpSnonWnonDnon";
			Combat = "AmovPknlMstpSrasWrflDnon";
			default = "AmovPknlMstpSrasWpstDnon";
			FastB = "AmovPknlMrunSrasWpstDb";
			FastF = "AmovPknlMevaSrasWpstDf";
			FastL = "AmovPknlMevaSrasWpstDl";
			FastLB = "AmovPknlMrunSrasWpstDbl";
			FastLF = "AmovPknlMevaSrasWpstDfl";
			FastR = "AmovPknlMevaSrasWpstDr";
			FastRB = "AmovPknlMrunSrasWpstDbr";
			FastRF = "AmovPknlMevaSrasWpstDfr";
			FireNotPossible = "AmovPknlMstpSrasWpstDnon";
			Gear = "AinvPknlMstpSrasWpstDnon";
			handGunOn = "AmovPknlMstpSrasWpstDnon";
			LimpB = "AmovPknlMlmpSrasWpstDb";
			LimpF = "AmovPknlMlmpSrasWpstDf";
			LimpL = "AmovPknlMlmpSrasWpstDl";
			LimpLB = "AmovPknlMlmpSrasWpstDbl";
			LimpLF = "AmovPknlMlmpSrasWpstDfl";
			LimpR = "AmovPknlMlmpSrasWpstDr";
			LimpRB = "AmovPknlMlmpSrasWpstDbr";
			LimpRF = "AmovPknlMlmpSrasWpstDfr";
			medicStop = "AmovPknlMstpSrasWpstDnon";
			PlayerSlowB = "AmovPknlMrunSrasWpstDb";
			PlayerSlowF = "AmovPknlMrunSrasWpstDf";
			PlayerSlowL = "AmovPknlMrunSrasWpstDl";
			PlayerSlowLB = "AmovPknlMrunSrasWpstDbl";
			PlayerSlowLF = "AmovPknlMrunSrasWpstDfl";
			PlayerSlowR = "AmovPknlMrunSrasWpstDr";
			PlayerSlowRB = "AmovPknlMrunSrasWpstDbr";
			PlayerSlowRF = "AmovPknlMrunSrasWpstDfr";
			PlayerStand = "AmovPercMstpSrasWpstDnon";
			PlayerTactB = "AmovPknlMtacSrasWpstDb";
			PlayerTactF = "AmovPknlMtacSrasWpstDf";
			PlayerTactL = "AmovPknlMtacSrasWpstDl";
			PlayerTactLB = "AmovPknlMtacSrasWpstDbl";
			PlayerTactLF = "AmovPknlMtacSrasWpstDfl";
			PlayerTactR = "AmovPknlMtacSrasWpstDr";
			PlayerTactRB = "AmovPknlMtacSrasWpstDbr";
			PlayerTactRF = "AmovPknlMtacSrasWpstDfr";
			PlayerWalkB = "AmovPknlMwlkSrasWpstDb";
			PlayerWalkF = "AmovPknlMwlkSrasWpstDf";
			PlayerWalkL = "AmovPknlMwlkSrasWpstDl";
			PlayerWalkLB = "AmovPknlMwlkSrasWpstDbl";
			PlayerWalkLF = "AmovPknlMwlkSrasWpstDfl";
			PlayerWalkR = "AmovPknlMwlkSrasWpstDr";
			PlayerWalkRB = "AmovPknlMwlkSrasWpstDbr";
			PlayerWalkRF = "AmovPknlMwlkSrasWpstDfr";
			PrimaryWeapon = "AmovPknlMstpSrasWrflDnon";
			putDown = "AmovPknlMstpSrasWpstDnon_AinvPknlMstpSrasWpstDnon_Putdown";
			reloadMagazine[] = {"PistolMagazineReloadKneel_g", "Gesture"};
			salute = "";
			SecondaryWeapon = "AmovPknlMstpSrasWlnrDnon";
			sitDown = "";
			SlowB = "AmovPknlMrunSlowWpstDb";
			SlowF = "AmovPknlMrunSlowWpstDf";
			SlowL = "AmovPknlMrunSlowWpstDl";
			SlowLB = "AmovPknlMrunSlowWpstDbl";
			SlowLF = "AmovPknlMrunSlowWpstDfl";
			SlowR = "AmovPknlMrunSlowWpstDr";
			SlowRB = "AmovPknlMrunSlowWpstDbr";
			SlowRF = "AmovPknlMrunSlowWpstDfr";
			stance = "ManStanceCrouch";
			Stand = "AmovPknlMstpSlowWpstDnon";
			StartFreefall = "AfalPknlMstpSrasWpstDnon";
			stop = "AmovPknlMstpSrasWpstDnon";
			stopRelaxed = "AidlPknlMstpSrasWpstDnon_AI";
			strokeGun = "AmovPknlMstpSrasWpstDnon";
			TactB = "AmovPknlMtacSrasWpstDb";
			TactF = "AmovPknlMtacSrasWpstDf";
			TactL = "AmovPknlMtacSrasWpstDl";
			TactLB = "AmovPknlMtacSrasWpstDbl";
			TactLF = "AmovPknlMtacSrasWpstDfl";
			TactR = "AmovPknlMtacSrasWpstDr";
			TactRB = "AmovPknlMtacSrasWpstDbr";
			TactRF = "AmovPknlMtacSrasWpstDfr";
			takeFlag = "AinvPknlMstpSnonWnonDnon_2";
			throwPrepare = "AwopPknlMstpSgthWpstDnon_Part2";
			turnL = "AmovPknlMstpSrasWpstDnon_turnL";
			turnLRelaxed = "AmovPknlMstpSrasWpstDnon_turnL";
			turnR = "AmovPknlMstpSrasWpstDnon_turnR";
			turnRRelaxed = "AmovPknlMstpSrasWpstDnon_turnR";
			turnSpeed = 4.5;
			up = "AmovPercMstpSrasWpstDnon";
			upDegree = "ManPosHandGunCrouch";
			WalkB = "AmovPknlMwlkSrasWpstDb";
			WalkF = "AmovPknlMwlkSrasWpstDf";
			WalkL = "AmovPknlMwlkSrasWpstDl";
			WalkLB = "AmovPknlMwlkSrasWpstDbl";
			WalkLF = "AmovPknlMwlkSrasWpstDfl";
			WalkR = "AmovPknlMwlkSrasWpstDr";
			WalkRB = "AmovPknlMwlkSrasWpstDbr";
			WalkRF = "AmovPknlMwlkSrasWpstDfr";
			weaponOff = "AmovPknlMstpSrasWpstDnon";
			weaponOn = "AmovPknlMstpSrasWlnrDnon";
		};
		class PistolKneelActions_explo: PistolKneelActions_gear
		{
			Stop = "AmovPknlMstpSrasWpstDnon";
			StopRelaxed = "AmovPknlMstpSrasWpstDnon";
		};
		class PistolKneelActions_gear: PistolKneelActions
		{
			Civil = "AmovPknlMstpSnonWnonDnon_gear";
			Default = "AmovPknlMstpSrasWpstDnon_gear";
			HandGunOn = "AinvPknlMstpSrasWrflDnon";
			Stop = "AmovPknlMstpSrasWpstDnon_gear";
			StopRelaxed = "AmovPknlMstpSrasWpstDnon_gear";
		};
		class PistolKneelActions_inv: PistolKneelActions
		{
			Civil = "AinvPknlMstpSnonWnonDnon";
			Default = "AinvPknlMstpSrasWpstDnon";
			HandGunOn = "AmovPknlMstpSrasWpstDnon";
			Stop = "AinvPknlMstpSrasWpstDnon";
			StopRelaxed = "AinvPknlMstpSrasWpstDnon";
		};
		class PistolKneelActionsLimpB: PistolKneelActions
		{
			Stand = "AmovPknlMlmpSlowWpstDb";
			Up = "AmovPercMlmpSrasWpstDb";
		};
		class PistolKneelActionsLimpF: PistolKneelActions
		{
			Stand = "AmovPknlMlmpSlowWpstDf";
			Up = "AmovPercMlmpSrasWpstDf";
		};
		class PistolKneelActionsLimpL: PistolKneelActions
		{
			Stand = "AmovPknlMlmpSlowWpstDl";
			Up = "AmovPercMlmpSrasWpstDl";
		};
		class PistolKneelActionsLimpLB: PistolKneelActions
		{
			Stand = "AmovPknlMlmpSlowWpstDbl";
			Up = "AmovPercMlmpSrasWpstDbl";
		};
		class PistolKneelActionsLimpLF: PistolKneelActions
		{
			Stand = "AmovPknlMlmpSlowWpstDfl";
			Up = "AmovPercMlmpSrasWpstDfl";
		};
		class PistolKneelActionsLimpR: PistolKneelActions
		{
			Stand = "AmovPknlMlmpSlowWpstDr";
			Up = "AmovPercMlmpSrasWpstDr";
		};
		class PistolKneelActionsLimpRB: PistolKneelActions
		{
			Stand = "AmovPknlMlmpSlowWpstDbr";
			Up = "AmovPercMlmpSrasWpstDbr";
		};
		class PistolKneelActionsLimpRF: PistolKneelActions
		{
			Stand = "AmovPknlMlmpSlowWpstDfr";
			Up = "AmovPercMlmpSrasWpstDfr";
		};
		class PistolKneelActionsNoAdjust: PistolKneelActions
		{
			AdjustB = "";
			AdjustF = "";
			AdjustL = "";
			AdjustLB = "";
			AdjustLF = "";
			AdjustR = "";
			AdjustRB = "";
			AdjustRF = "";
		};
		class PistolKneelActionsRunB: PistolKneelActionsNoAdjust
		{
			AdjustB = "";
			PlayerStand = "AmovPercMrunSrasWpstDb";
			Stand = "AmovPknlMrunSlowWpstDb";
			Up = "AmovPercMrunSrasWpstDb";
		};
		class PistolKneelActionsRunBL: PistolKneelActionsNoAdjust
		{
			PlayerStand = "AmovPercMrunSrasWpstDbl";
			Stand = "AmovPknlMrunSlowWpstDbl";
			Up = "AmovPercMrunSrasWpstDbl";
		};
		class PistolKneelActionsRunBR: PistolKneelActionsNoAdjust
		{
			PlayerStand = "AmovPercMrunSrasWpstDbr";
			Stand = "AmovPknlMrunSlowWpstDbr";
			Up = "AmovPercMrunSrasWpstDbr";
		};
		class PistolKneelActionsRunF: PistolKneelActionsNoAdjust
		{
			AdjustF = "";
			PlayerStand = "AmovPercMrunSrasWpstDf";
			Stand = "AmovPknlMrunSlowWpstDf";
			Up = "AmovPercMrunSrasWpstDf";
		};
		class PistolKneelActionsRunFL: PistolKneelActionsNoAdjust
		{
			PlayerStand = "AmovPercMrunSrasWpstDfl";
			Stand = "AmovPknlMrunSlowWpstDfl";
			Up = "AmovPercMrunSrasWpstDfl";
		};
		class PistolKneelActionsRunFr: PistolKneelActionsNoAdjust
		{
			PlayerStand = "AmovPercMrunSrasWpstDfr";
			Stand = "AmovPknlMrunSlowWpstDfr";
			Up = "AmovPercMrunSrasWpstDfr";
		};
		class PistolKneelActionsRunL: PistolKneelActionsNoAdjust
		{
			AdjustL = "";
			PlayerStand = "AmovPercMrunSrasWpstDl";
			Stand = "AmovPknlMrunSlowWpstDl";
			Up = "AmovPercMrunSrasWpstDl";
		};
		class PistolKneelActionsRunR: PistolKneelActionsNoAdjust
		{
			AdjustR = "";
			PlayerStand = "AmovPercMrunSrasWpstDr";
			Stand = "AmovPknlMrunSlowWpstDr";
			Up = "AmovPercMrunSrasWpstDr";
		};
		class PistolKneelActionsTacB: PistolKneelActionsNoAdjust
		{
			AdjustB = "";
			PlayerStand = "AmovPercMTacSrasWpstDb";
			Stand = "AmovPknlMtacSlowWpstDb";
			Up = "AmovPercMTacSrasWpstDb";
		};
		class PistolKneelActionsTacBL: PistolKneelActionsNoAdjust
		{
			PlayerStand = "AmovPercMTacSrasWpstDbl";
			Stand = "AmovPknlMtacSlowWpstDbl";
			Up = "AmovPercMTacSrasWpstDbl";
		};
		class PistolKneelActionsTacBR: PistolKneelActionsNoAdjust
		{
			PlayerStand = "AmovPercMTacSrasWpstDbr";
			Stand = "AmovPknlMtacSlowWpstDbr";
			Up = "AmovPercMTacSrasWpstDbr";
		};
		class PistolKneelActionsTacF: PistolKneelActionsNoAdjust
		{
			AdjustF = "";
			PlayerStand = "AmovPercMTacSrasWpstDf";
			Stand = "AmovPknlMtacSlowWpstDf";
			Up = "AmovPercMTacSrasWpstDf";
		};
		class PistolKneelActionsTacFL: PistolKneelActionsNoAdjust
		{
			PlayerStand = "AmovPercMTacSrasWpstDfl";
			Stand = "AmovPknlMtacSlowWpstDfl";
			Up = "AmovPercMTacSrasWpstDfl";
		};
		class PistolKneelActionsTacFr: PistolKneelActionsNoAdjust
		{
			PlayerStand = "AmovPercMTacSrasWpstDfr";
			Stand = "AmovPknlMtacSlowWpstDfr";
			Up = "AmovPercMTacSrasWpstDfr";
		};
		class PistolKneelActionsTacL: PistolKneelActionsNoAdjust
		{
			AdjustL = "";
			PlayerStand = "AmovPercMTacSrasWpstDl";
			Stand = "AmovPknlMtacSlowWpstDl";
			Up = "AmovPercMTacSrasWpstDl";
		};
		class PistolKneelActionsTacR: PistolKneelActionsNoAdjust
		{
			AdjustR = "";
			PlayerStand = "AmovPercMTacSrasWpstDr";
			Stand = "AmovPknlMtacSlowWpstDr";
			Up = "AmovPercMTacSrasWpstDr";
		};
		class PistolKneelActionsWlkB: PistolKneelActionsRunF
		{
			AdjustB = "";
			PlayerStand = "AmovPercMwlkSrasWpstDb";
			Stand = "AmovPknlMwlkSlowWpstDb";
			Up = "AmovPercMwlkSrasWpstDb";
		};
		class PistolKneelActionsWlkBL: PistolKneelActionsRunF
		{
			PlayerStand = "AmovPercMwlkSrasWpstDbl";
			Stand = "AmovPknlMwlkSlowWpstDbl";
			Up = "AmovPercMwlkSrasWpstDbl";
		};
		class PistolKneelActionsWlkBR: PistolKneelActionsRunF
		{
			PlayerStand = "AmovPercMwlkSrasWpstDbr";
			Stand = "AmovPknlMwlkSlowWpstDbr";
			Up = "AmovPercMwlkSrasWpstDbr";
		};
		class PistolKneelActionsWlkF: PistolKneelActionsRunF
		{
			PlayerStand = "AmovPercMwlkSrasWpstDf";
			Stand = "AmovPknlMwlkSlowWpstDf";
			Up = "AmovPercMwlkSrasWpstDf";
		};
		class PistolKneelActionsWlkFL: PistolKneelActionsRunF
		{
			PlayerStand = "AmovPercMwlkSrasWpstDfl";
			Stand = "AmovPknlMwlkSlowWpstDfl";
			Up = "AmovPercMwlkSrasWpstDfl";
		};
		class PistolKneelActionsWlkFR: PistolKneelActionsRunF
		{
			PlayerStand = "AmovPercMwlkSrasWpstDfr";
			Stand = "AmovPknlMwlkSlowWpstDfr";
			Up = "AmovPercMwlkSrasWpstDfr";
		};
		class PistolKneelActionsWlkL: PistolKneelActionsRunF
		{
			AdjustL = "";
			PlayerStand = "AmovPercMwlkSrasWpstDl";
			Stand = "AmovPknlMwlkSlowWpstDl";
			Up = "AmovPercMwlkSrasWpstDl";
		};
		class PistolKneelActionsWlkR: PistolKneelActionsRunF
		{
			AdjustR = "";
			PlayerStand = "AmovPercMwlkSrasWpstDr";
			Stand = "AmovPknlMwlkSlowWpstDr";
			Up = "AmovPercMwlkSrasWpstDr";
		};
		class PistolKneelEvasiveActionsF: PistolKneelActions
		{
			AdjustF = "AmovPknlMrunSrasWpstDf";
			Crouch = "AmovPknlMevaSrasWpstDf";
			PlayerCrouch = "";
			PlayerStand = "AmovPercMevaSrasWpstDf";
			turnSpeed = 4;
			Up = "AmovPercMevaSrasWpstDf";
		};
		class PistolKneelEvasiveActionsFL: PistolKneelActions
		{
			AdjustLF = "AmovPknlMrunSrasWpstDfl";
			Crouch = "AmovPknlMevaSrasWpstDfl";
			PlayerCrouch = "";
			PlayerStand = "AmovPercMevaSrasWpstDfl";
			turnSpeed = 4;
			Up = "AmovPercMevaSrasWpstDfl";
		};
		class PistolKneelEvasiveActionsFR: PistolKneelActions
		{
			AdjustRF = "AmovPknlMrunSrasWpstDfr";
			Crouch = "AmovPknlMevaSrasWpstDfr";
			PlayerCrouch = "";
			PlayerStand = "AmovPercMevaSrasWpstDfr";
			turnSpeed = 4;
			Up = "AmovPercMevaSrasWpstDfr";
		};
		class PistolKneelEvasiveActionsL: PistolKneelActions
		{
			AdjustL = "AmovPknlMrunSrasWpstDl";
			down = "AadjPpneMstpSrasWpstDleft";
			PlayerCrouch = "";
			PlayerProne = "AadjPpneMstpSrasWpstDleft";
			PlayerStand = "AmovPercMevaSrasWpstDl";
			turnSpeed = 4;
			Up = "AmovPercMevaSrasWpstDl";
		};
		class PistolKneelEvasiveActionsR: PistolKneelActions
		{
			AdjustR = "AmovPknlMrunSrasWpstDr";
			down = "AadjPpneMstpSrasWpstDright";
			PlayerCrouch = "";
			PlayerProne = "AadjPpneMstpSrasWpstDright";
			PlayerStand = "AmovPercMevaSrasWpstDr";
			turnSpeed = 4;
			Up = "AmovPercMevaSrasWpstDr";
		};
		class PistolKneelTakeActions: PistolKneelActions
		{
			default = "AinvPknlMstpSnonWnonDnon_2";
			stop = "AinvPknlMstpSnonWnonDnon_2";
			StopRelaxed = "AinvPknlMstpSnonWnonDnon_2";
		};
		class PistolLowKneelActions: PistolKneelActions
		{
			AdjustB = "";
			AdjustF = "";
			AdjustL = "";
			AdjustR = "";
			Combat = "AmovPknlMstpSrasWpstDnon";
			Crouch = "AmovPknlMstpSlowWpstDnon";
			default = "AmovPknlMstpSlowWpstDnon";
			FastB = "AmovPknlMrunSlowWpstDb";
			FastL = "AmovPknlMrunSlowWpstDl";
			FastLB = "AmovPknlMrunSlowWpstDbl";
			FastR = "AmovPknlMrunSlowWpstDr";
			FastRB = "AmovPknlMrunSlowWpstDbr";
			handGunOn = "AmovPknlMstpSrasWpstDnon";
			LimpB = "AmovPknlMlmpSlowWpstDb";
			LimpF = "AmovPknlMlmpSlowWpstDf";
			LimpL = "AmovPknlMlmpSlowWpstDl";
			LimpLB = "AmovPknlMlmpSlowWpstDbl";
			LimpLF = "AmovPknlMlmpSlowWpstDfl";
			LimpR = "AmovPknlMlmpSlowWpstDr";
			LimpRB = "AmovPknlMlmpSlowWpstDbr";
			LimpRF = "AmovPknlMlmpSlowWpstDfr";
			PlayerCrouch = "AmovPknlMstpSlowWpstDnon";
			PlayerSlowB = "AmovPknlMrunSlowWpstDb";
			PlayerSlowF = "AmovPknlMrunSlowWpstDf";
			PlayerSlowL = "AmovPknlMrunSlowWpstDl";
			PlayerSlowLB = "AmovPknlMrunSlowWpstDbl";
			PlayerSlowLF = "AmovPknlMrunSlowWpstDfl";
			PlayerSlowR = "AmovPknlMrunSlowWpstDr";
			PlayerSlowRB = "AmovPknlMrunSlowWpstDbr";
			PlayerSlowRF = "AmovPknlMrunSlowWpstDfr";
			PlayerStand = "AmovPercMstpSlowWpstDnon";
			PlayerTactB = "AmovPknlMtacSlowWpstDb";
			PlayerTactF = "AmovPknlMtacSlowWpstDf";
			PlayerTactL = "AmovPknlMtacSlowWpstDl";
			PlayerTactLB = "AmovPknlMtacSlowWpstDbl";
			PlayerTactLF = "AmovPknlMtacSlowWpstDfl";
			PlayerTactR = "AmovPknlMtacSlowWpstDr";
			PlayerTactRB = "AmovPknlMtacSlowWpstDbr";
			PlayerTactRF = "AmovPknlMtacSlowWpstDfr";
			PlayerWalkB = "AmovPknlMwlkSlowWpstDb";
			PlayerWalkF = "AmovPknlMwlkSlowWpstDf";
			PlayerWalkL = "AmovPknlMwlkSlowWpstDl";
			PlayerWalkLB = "AmovPknlMwlkSlowWpstDbl";
			PlayerWalkLF = "AmovPknlMwlkSlowWpstDfl";
			PlayerWalkR = "AmovPknlMwlkSlowWpstDr";
			PlayerWalkRB = "AmovPknlMwlkSlowWpstDbr";
			PlayerWalkRF = "AmovPknlMwlkSlowWpstDfr";
			Stand = "AmovPknlMstpSrasWpstDnon";
			Stop = "AmovPknlMstpSlowWpstDnon";
			stopRelaxed = "AidlPknlMstpSlowWpstDnon_AI";
			TactB = "AmovPknlMtacSlowWpstDb";
			TactF = "AmovPknlMtacSlowWpstDf";
			TactL = "AmovPknlMtacSlowWpstDl";
			TactLB = "AmovPknlMtacSlowWpstDbl";
			TactLF = "AmovPknlMtacSlowWpstDfl";
			TactR = "AmovPknlMtacSlowWpstDr";
			TactRB = "AmovPknlMtacSlowWpstDbr";
			TactRF = "AmovPknlMtacSlowWpstDfr";
			turnL = "AmovPknlMstpSlowWpstDnon_turnL";
			turnR = "AmovPknlMstpSlowWpstDnon_turnR";
		};
		class PistolLowKneelActionsLimpB: PistolLowKneelActions
		{
			Combat = "AmovPknlMlmpSrasWpstDb";
			Up = "AmovPercMlmpSlowWpstDb";
		};
		class PistolLowKneelActionsLimpF: PistolLowKneelActions
		{
			Combat = "AmovPknlMlmpSrasWpstDf";
			Up = "AmovPercMlmpSlowWpstDf";
		};
		class PistolLowKneelActionsLimpL: PistolLowKneelActions
		{
			Combat = "AmovPknlMlmpSrasWpstDl";
			Up = "AmovPercMlmpSlowWpstDl";
		};
		class PistolLowKneelActionsLimpLB: PistolLowKneelActions
		{
			Combat = "AmovPknlMlmpSrasWpstDbl";
			Up = "AmovPercMlmpSlowWpstDbl";
		};
		class PistolLowKneelActionsLimpLF: PistolLowKneelActions
		{
			Combat = "AmovPknlMlmpSrasWpstDfl";
			Up = "AmovPercMlmpSlowWpstDfl";
		};
		class PistolLowKneelActionsLimpR: PistolLowKneelActions
		{
			Combat = "AmovPknlMlmpSrasWpstDr";
			Up = "AmovPercMlmpSlowWpstDr";
		};
		class PistolLowKneelActionsLimpRB: PistolLowKneelActions
		{
			Combat = "AmovPknlMlmpSrasWpstDbr";
			Up = "AmovPercMlmpSlowWpstDbr";
		};
		class PistolLowKneelActionsLimpRF: PistolLowKneelActions
		{
			Combat = "AmovPknlMlmpSrasWpstDfr";
			Up = "AmovPercMlmpSlowWpstDfr";
		};
		class PistolLowKneelActionsNoAdjust: PistolLowKneelActions
		{
			AdjustB = "";
			AdjustF = "";
			AdjustL = "";
			AdjustLB = "";
			AdjustLF = "";
			AdjustR = "";
			AdjustRB = "";
			AdjustRF = "";
		};
		class PistolLowKneelActionsRunB: PistolLowKneelActionsNoAdjust
		{
			fireNotPossible = "AmovPknlMtacSrasWpstDb";
			PlayerStand = "AmovPercMrunSlowWpstDb";
			Stand = "AmovPknlMrunSrasWpstDb";
			Up = "AmovPercMrunSlowWpstDb";
		};
		class PistolLowKneelActionsRunBL: PistolLowKneelActionsNoAdjust
		{
			fireNotPossible = "AmovPknlMtacSrasWpstDbl";
			PlayerStand = "AmovPercMrunSlowWpstDbl";
			Stand = "AmovPknlMrunSrasWpstDbl";
			Up = "AmovPercMrunSlowWpstDbl";
		};
		class PistolLowKneelActionsRunBR: PistolLowKneelActionsNoAdjust
		{
			fireNotPossible = "AmovPknlMtacSrasWpstDbr";
			PlayerStand = "AmovPercMrunSlowWpstDbr";
			Stand = "AmovPknlMrunSrasWpstDbr";
			Up = "AmovPercMrunSlowWpstDbr";
		};
		class PistolLowKneelActionsRunF: PistolLowKneelActionsNoAdjust
		{
			fireNotPossible = "AmovPknlMtacSrasWpstDf";
			PlayerStand = "AmovPercMrunSlowWpstDf";
			Stand = "AmovPknlMrunSrasWpstDf";
			Up = "AmovPercMrunSlowWpstDf";
		};
		class PistolLowKneelActionsRunFL: PistolLowKneelActionsNoAdjust
		{
			fireNotPossible = "AmovPknlMtacSrasWpstDfl";
			PlayerStand = "AmovPercMrunSlowWpstDfl";
			Stand = "AmovPknlMrunSrasWpstDfl";
			Up = "AmovPercMrunSlowWpstDfl";
		};
		class PistolLowKneelActionsRunFr: PistolLowKneelActionsNoAdjust
		{
			fireNotPossible = "AmovPknlMtacSrasWpstDfr";
			PlayerStand = "AmovPercMrunSlowWpstDfr";
			Stand = "AmovPknlMrunSrasWpstDfr";
			Up = "AmovPercMrunSlowWpstDfr";
		};
		class PistolLowKneelActionsRunL: PistolLowKneelActionsNoAdjust
		{
			fireNotPossible = "AmovPknlMtacSrasWpstDl";
			PlayerStand = "AmovPercMrunSlowWpstDl";
			Stand = "AmovPknlMrunSrasWpstDl";
			Up = "AmovPercMrunSlowWpstDl";
		};
		class PistolLowKneelActionsRunR: PistolLowKneelActionsNoAdjust
		{
			fireNotPossible = "AmovPknlMtacSrasWpstDr";
			PlayerStand = "AmovPercMrunSlowWpstDr";
			Stand = "AmovPknlMrunSrasWpstDr";
			Up = "AmovPercMrunSlowWpstDr";
		};
		class PistolLowKneelActionsTacB: PistolLowKneelActionsRunF
		{
			fireNotPossible = "AmovPknlMtacSrasWpstDb";
			PlayerStand = "AmovPercMtacSlowWpstDb";
			Stand = "AmovPknlMtacSrasWpstDb";
			Up = "AmovPercMtacSlowWpstDb";
		};
		class PistolLowKneelActionsTacBL: PistolLowKneelActionsRunF
		{
			fireNotPossible = "AmovPknlMtacSrasWpstDbl";
			PlayerStand = "AmovPercMtacSlowWpstDbl";
			Stand = "AmovPknlMtacSrasWpstDbl";
			Up = "AmovPercMtacSlowWpstDbl";
		};
		class PistolLowKneelActionsTacBR: PistolLowKneelActionsRunF
		{
			fireNotPossible = "AmovPknlMtacSrasWpstDbr";
			PlayerStand = "AmovPercMtacSlowWpstDbr";
			Stand = "AmovPknlMtacSrasWpstDbr";
			Up = "AmovPercMtacSlowWpstDbr";
		};
		class PistolLowKneelActionsTacF: PistolLowKneelActionsRunF
		{
			fireNotPossible = "AmovPknlMtacSrasWpstDf";
			PlayerStand = "AmovPercMtacSlowWpstDf";
			Stand = "AmovPknlMtacSrasWpstDf";
			Up = "AmovPercMtacSlowWpstDf";
		};
		class PistolLowKneelActionsTacFL: PistolLowKneelActionsRunF
		{
			fireNotPossible = "AmovPknlMtacSrasWpstDfl";
			PlayerStand = "AmovPercMtacSlowWpstDfl";
			Stand = "AmovPknlMtacSrasWpstDfl";
			Up = "AmovPercMtacSlowWpstDfl";
		};
		class PistolLowKneelActionsTacFR: PistolLowKneelActionsRunF
		{
			fireNotPossible = "AmovPknlMtacSrasWpstDfr";
			PlayerStand = "AmovPercMtacSlowWpstDfr";
			Stand = "AmovPknlMtacSrasWpstDfr";
			Up = "AmovPercMtacSlowWpstDfr";
		};
		class PistolLowKneelActionsTacL: PistolLowKneelActionsRunF
		{
			fireNotPossible = "AmovPknlMtacSrasWpstDl";
			PlayerStand = "AmovPercMtacSlowWpstDl";
			Stand = "AmovPknlMtacSrasWpstDl";
			Up = "AmovPercMtacSlowWpstDl";
		};
		class PistolLowKneelActionsTacR: PistolLowKneelActionsRunF
		{
			fireNotPossible = "AmovPknlMtacSrasWpstDr";
			PlayerStand = "AmovPercMtacSlowWpstDr";
			Stand = "AmovPknlMtacSrasWpstDr";
			Up = "AmovPercMtacSlowWpstDr";
		};
		class PistolLowKneelActionsWlkB: PistolLowKneelActionsRunF
		{
			fireNotPossible = "AmovPknlMwlkSrasWpstDb";
			PlayerStand = "AmovPercMwlkSlowWpstDb";
			Stand = "AmovPknlMwlkSrasWpstDb";
			Up = "AmovPercMwlkSlowWpstDb";
		};
		class PistolLowKneelActionsWlkBL: PistolLowKneelActionsRunF
		{
			fireNotPossible = "AmovPknlMwlkSrasWpstDbl";
			PlayerStand = "AmovPercMwlkSlowWpstDbl";
			Stand = "AmovPknlMwlkSrasWpstDbl";
			Up = "AmovPercMwlkSlowWpstDbl";
		};
		class PistolLowKneelActionsWlkBR: PistolLowKneelActionsRunF
		{
			fireNotPossible = "AmovPknlMwlkSrasWpstDbr";
			PlayerStand = "AmovPercMwlkSlowWpstDbr";
			Stand = "AmovPknlMwlkSrasWpstDbr";
			Up = "AmovPercMwlkSlowWpstDbr";
		};
		class PistolLowKneelActionsWlkF: PistolLowKneelActionsRunF
		{
			fireNotPossible = "AmovPknlMwlkSrasWpstDf";
			PlayerStand = "AmovPercMwlkSlowWpstDf";
			Stand = "AmovPknlMwlkSrasWpstDf";
			Up = "AmovPercMwlkSlowWpstDf";
		};
		class PistolLowKneelActionsWlkFL: PistolLowKneelActionsRunF
		{
			fireNotPossible = "AmovPknlMwlkSrasWpstDfl";
			PlayerStand = "AmovPercMwlkSlowWpstDfl";
			Stand = "AmovPknlMwlkSrasWpstDfl";
			Up = "AmovPercMwlkSlowWpstDfl";
		};
		class PistolLowKneelActionsWlkFR: PistolLowKneelActionsRunF
		{
			fireNotPossible = "AmovPknlMwlkSrasWpstDfr";
			PlayerStand = "AmovPercMwlkSlowWpstDfr";
			Stand = "AmovPknlMwlkSrasWpstDfr";
			Up = "AmovPercMwlkSlowWpstDfr";
		};
		class PistolLowKneelActionsWlkL: PistolLowKneelActionsRunF
		{
			fireNotPossible = "AmovPknlMwlkSrasWpstDl";
			PlayerStand = "AmovPercMwlkSlowWpstDl";
			Stand = "AmovPknlMwlkSrasWpstDl";
			Up = "AmovPercMwlkSlowWpstDl";
		};
		class PistolLowKneelActionsWlkR: PistolLowKneelActionsRunF
		{
			fireNotPossible = "AmovPknlMwlkSrasWpstDr";
			PlayerStand = "AmovPercMwlkSlowWpstDr";
			Stand = "AmovPknlMwlkSrasWpstDr";
			Up = "AmovPercMwlkSlowWpstDr";
		};
		class PistolLowKneelEvasiveActionsF: PistolLowKneelActions
		{
			AdjustF = "AmovPknlMrunSrasWpstDf";
			Crouch = "AmovPknlMevaSrasWpstDf";
			PlayerStand = "AmovPercMevaSlowWpstDf";
			salute = "";
			turnSpeed = 4;
			Up = "AmovPercMevaSlowWpstDf";
		};
		class PistolLowKneelEvasiveActionsFL: PistolLowKneelActions
		{
			AdjustLF = "AmovPknlMrunSrasWpstDfl";
			Crouch = "AmovPknlMevaSrasWpstDfl";
			PlayerStand = "AmovPercMevaSlowWpstDfl";
			salute = "";
			turnSpeed = 4;
			Up = "AmovPercMevaSlowWpstDfl";
		};
		class PistolLowKneelEvasiveActionsFR: PistolLowKneelActions
		{
			AdjustRF = "AmovPknlMrunSrasWpstDfr";
			Crouch = "AmovPknlMevaSrasWpstDfr";
			PlayerStand = "AmovPercMevaSlowWpstDfr";
			salute = "";
			turnSpeed = 4;
			Up = "AmovPercMevaSlowWpstDfr";
		};
		class PistolLowStandActions: PistolStandActions
		{
			AdjustB = "";
			AdjustF = "";
			AdjustL = "";
			AdjustR = "";
			Combat = "AmovPercMstpSrasWpstDnon";
			Default = "AmovPercMstpSlowWpstDnon";
			EvasiveLeft = "AmovPercMevaSlowWpstDfl";
			EvasiveRight = "AmovPercMevaSlowWpstDfr";
			FastB = "AmovPercMrunSlowWpstDb";
			FastF = "AmovPercMevaSlowWpstDf";
			FastL = "AmovPercMrunSlowWpstDl";
			FastLB = "AmovPercMrunSlowWpstDbl";
			FastLF = "AmovPercMevaSlowWpstDfl";
			FastR = "AmovPercMrunSlowWpstDr";
			FastRB = "AmovPercMrunSlowWpstDbr";
			FastRF = "AmovPercMevaSlowWpstDfr";
			GetOver = "AovrPercMstpSlowWpstDf";
			HandGunOn = "AmovPercMstpSrasWpstDnon";
			LimpB = "AmovPercMlmpSlowWpstDb";
			LimpF = "AmovPercMlmpSlowWpstDf";
			LimpL = "AmovPercMlmpSlowWpstDl";
			LimpLB = "AmovPercMlmpSlowWpstDbl";
			LimpLF = "AmovPercMlmpSlowWpstDfl";
			LimpR = "AmovPercMlmpSlowWpstDr";
			LimpRB = "AmovPercMlmpSlowWpstDbr";
			LimpRF = "AmovPercMlmpSlowWpstDfr";
			PlayerCrouch = "AmovPknlMstpSlowWpstDnon";
			PlayerSlowB = "AmovPercMrunSlowWpstDb";
			PlayerSlowF = "AmovPercMrunSlowWpstDf";
			PlayerSlowL = "AmovPercMrunSlowWpstDl";
			PlayerSlowLB = "AmovPercMrunSlowWpstDbl";
			PlayerSlowLF = "AmovPercMrunSlowWpstDfl";
			PlayerSlowR = "AmovPercMrunSlowWpstDr";
			PlayerSlowRB = "AmovPercMrunSlowWpstDbr";
			PlayerSlowRF = "AmovPercMrunSlowWpstDfr";
			PlayerTactB = "AmovPercMtacSlowWpstDb";
			PlayerTactF = "AmovPercMtacSlowWpstDf";
			PlayerTactL = "AmovPercMtacSlowWpstDl";
			PlayerTactLB = "AmovPercMtacSlowWpstDbl";
			PlayerTactLF = "AmovPercMtacSlowWpstDfl";
			PlayerTactR = "AmovPercMtacSlowWpstDr";
			PlayerTactRB = "AmovPercMtacSlowWpstDbr";
			PlayerTactRF = "AmovPercMtacSlowWpstDfr";
			PlayerWalkB = "AmovPercMwlkSlowWpstDb";
			PlayerWalkF = "AmovPercMwlkSlowWpstDf";
			PlayerWalkL = "AmovPercMwlkSlowWpstDl";
			PlayerWalkLB = "AmovPercMwlkSlowWpstDbl";
			PlayerWalkLF = "AmovPercMwlkSlowWpstDfl";
			PlayerWalkR = "AmovPercMwlkSlowWpstDr";
			PlayerWalkRB = "AmovPercMwlkSlowWpstDbr";
			PlayerWalkRF = "AmovPercMwlkSlowWpstDfr";
			SlowRF = "AmovPercMrunSlowWpstDfr";
			Stand = "AmovPercMstpSrasWpstDnon";
			Stop = "AmovPercMstpSlowWpstDnon";
			stopRelaxed = "AidlPercMstpSlowWpstDnon_AI";
			TactB = "AmovPercMtacSlowWpstDb";
			TactF = "AmovPercMtacSlowWpstDf";
			TactL = "AmovPercMtacSlowWpstDl";
			TactLB = "AmovPercMtacSlowWpstDbl";
			TactLF = "AmovPercMtacSlowWpstDfl";
			TactR = "AmovPercMtacSlowWpstDr";
			TactRB = "AmovPercMtacSlowWpstDbr";
			TactRF = "AmovPercMtacSlowWpstDfr";
			turnL = "AmovPercMstpSlowWpstDnon_turnL";
			turnR = "AmovPercMstpSlowWpstDnon_turnR";
		};
		class PistolLowStandActionsFastF: PistolLowStandActionsNoAdjust
		{
			Crouch = "AmovPknlMevaSrasWpstDf";
			PlayerCrouch = "AmovPknlMevaSrasWpstDf";
			Stand = "AmovPercMevaSrasWpstDf";
			turnSpeed = 4.5;
			Up = "AmovPknlMevaSrasWpstDf";
		};
		class PistolLowStandActionsFastFL: PistolLowStandActionsNoAdjust
		{
			Crouch = "AmovPknlMevaSrasWpstDfl";
			PlayerCrouch = "AmovPknlMevaSrasWpstDfl";
			Stand = "AmovPercMevaSrasWpstDfl";
			turnSpeed = 4.5;
			Up = "AmovPknlMevaSrasWpstDfl";
		};
		class PistolLowStandActionsFastFR: PistolLowStandActionsNoAdjust
		{
			Crouch = "AmovPknlMevaSrasWpstDfr";
			PlayerCrouch = "AmovPknlMevaSrasWpstDfr";
			Stand = "AmovPercMevaSrasWpstDfr";
			turnSpeed = 4.5;
			Up = "AmovPknlMevaSrasWpstDfr";
		};
		class PistolLowStandActionsLimpB: PistolLowStandActions
		{
			Combat = "AmovPercMlmpSrasWpstDb";
			Up = "AmovPknlMlmpSlowWpstDb";
		};
		class PistolLowStandActionsLimpF: PistolLowStandActions
		{
			Combat = "AmovPercMlmpSrasWpstDf";
			Up = "AmovPknlMlmpSlowWpstDf";
		};
		class PistolLowStandActionsLimpL: PistolLowStandActions
		{
			Combat = "AmovPercMlmpSrasWpstDl";
			Up = "AmovPknlMlmpSlowWpstDl";
		};
		class PistolLowStandActionsLimpLB: PistolLowStandActions
		{
			Combat = "AmovPercMlmpSrasWpstDbl";
			Up = "AmovPknlMlmpSlowWpstDbl";
		};
		class PistolLowStandActionsLimpLF: PistolLowStandActions
		{
			Combat = "AmovPercMlmpSrasWpstDfl";
			Up = "AmovPknlMlmpSlowWpstDfl";
		};
		class PistolLowStandActionsLimpR: PistolLowStandActions
		{
			Combat = "AmovPercMlmpSrasWpstDr";
			Up = "AmovPknlMlmpSlowWpstDr";
		};
		class PistolLowStandActionsLimpRB: PistolLowStandActions
		{
			Combat = "AmovPercMlmpSrasWpstDbr";
			Up = "AmovPknlMlmpSlowWpstDbr";
		};
		class PistolLowStandActionsLimpRF: PistolLowStandActions
		{
			Combat = "AmovPercMlmpSrasWpstDfr";
			Up = "AmovPknlMlmpSlowWpstDfr";
		};
		class PistolLowStandActionsNoAdjust: PistolLowStandActions
		{
			AdjustB = "";
			AdjustF = "";
			AdjustL = "";
			AdjustLB = "";
			AdjustLF = "";
			AdjustR = "";
			AdjustRB = "";
			AdjustRF = "";
		};
		class PistolLowStandActionsRunB: PistolLowStandActionsNoAdjust
		{
			Crouch = "AmovPknlMrunSlowWpstDb";
			fireNotPossible = "AmovPercMtacSrasWpstDb";
			PlayerCrouch = "AmovPknlMrunSlowWpstDb";
			Stand = "AmovPercMrunSrasWpstDb";
			turnSpeed = 4.5;
			Up = "AmovPknlMrunSlowWpstDb";
		};
		class PistolLowStandActionsRunBL: PistolLowStandActionsNoAdjust
		{
			Crouch = "AmovPknlMrunSlowWpstDbl";
			fireNotPossible = "AmovPercMtacSrasWpstDbl";
			PlayerCrouch = "AmovPknlMrunSlowWpstDbl";
			Stand = "AmovPercMrunSrasWpstDbl";
			turnSpeed = 4.5;
			Up = "AmovPknlMrunSlowWpstDbl";
		};
		class PistolLowStandActionsRunBR: PistolLowStandActionsNoAdjust
		{
			Crouch = "AmovPknlMrunSlowWpstDbr";
			fireNotPossible = "AmovPercMtacSrasWpstDbr";
			PlayerCrouch = "AmovPknlMrunSlowWpstDbr";
			Stand = "AmovPercMrunSrasWpstDbr";
			turnSpeed = 4.5;
			Up = "AmovPknlMrunSlowWpstDbr";
		};
		class PistolLowStandActionsRunF: PistolLowStandActionsNoAdjust
		{
			Crouch = "AmovPknlMrunSlowWpstDf";
			fireNotPossible = "AmovPercMtacSrasWpstDf";
			PlayerCrouch = "AmovPknlMrunSlowWpstDf";
			Stand = "AmovPercMrunSrasWpstDf";
			turnSpeed = 4.5;
			Up = "AmovPknlMrunSlowWpstDf";
		};
		class PistolLowStandActionsRunFL: PistolLowStandActionsNoAdjust
		{
			Crouch = "AmovPknlMrunSlowWpstDfl";
			fireNotPossible = "AmovPercMtacSrasWpstDfl";
			PlayerCrouch = "AmovPknlMrunSlowWpstDfl";
			Stand = "AmovPercMrunSrasWpstDfl";
			turnSpeed = 4.5;
			Up = "AmovPknlMrunSlowWpstDfl";
		};
		class PistolLowStandActionsRunFR: PistolLowStandActionsNoAdjust
		{
			Crouch = "AmovPknlMrunSlowWpstDfr";
			fireNotPossible = "AmovPercMtacSrasWpstDfr";
			PlayerCrouch = "AmovPknlMrunSlowWpstDfr";
			Stand = "AmovPercMrunSrasWpstDfr";
			turnSpeed = 4.5;
			Up = "AmovPknlMrunSlowWpstDfr";
		};
		class PistolLowStandActionsRunL: PistolLowStandActionsNoAdjust
		{
			Crouch = "AmovPknlMrunSlowWpstDl";
			fireNotPossible = "AmovPercMtacSrasWpstDl";
			PlayerCrouch = "AmovPknlMrunSlowWpstDl";
			Stand = "AmovPercMrunSrasWpstDl";
			turnSpeed = 4.5;
			Up = "AmovPknlMrunSlowWpstDl";
		};
		class PistolLowStandActionsRunR: PistolLowStandActionsNoAdjust
		{
			Crouch = "AmovPknlMrunSlowWpstDr";
			fireNotPossible = "AmovPercMtacSrasWpstDr";
			PlayerCrouch = "AmovPknlMrunSlowWpstDr";
			Stand = "AmovPercMrunSrasWpstDr";
			turnSpeed = 4.5;
			Up = "AmovPknlMrunSlowWpstDr";
		};
		class PistolLowStandActionsTacB: PistolLowStandActionsRunF
		{
			Crouch = "AmovPknlMtacSlowWpstDb";
			fireNotPossible = "AmovPercMtacSrasWpstDb";
			PlayerCrouch = "AmovPknlMtacSlowWpstDb";
			Stand = "AmovPercMtacSrasWpstDb";
			turnSpeed = 8;
			Up = "AmovPknlMtacSlowWpstDb";
		};
		class PistolLowStandActionsTacBL: PistolLowStandActionsRunF
		{
			Crouch = "AmovPknlMtacSlowWpstDbl";
			fireNotPossible = "AmovPercMtacSrasWpstDbl";
			PlayerCrouch = "AmovPknlMtacSlowWpstDbl";
			Stand = "AmovPercMtacSrasWpstDbl";
			turnSpeed = 8;
			Up = "AmovPknlMtacSlowWpstDbl";
		};
		class PistolLowStandActionsTacBR: PistolLowStandActionsRunF
		{
			Crouch = "AmovPknlMtacSlowWpstDbr";
			fireNotPossible = "AmovPercMtacSrasWpstDbr";
			PlayerCrouch = "AmovPknlMtacSlowWpstDbr";
			Stand = "AmovPercMtacSrasWpstDbr";
			turnSpeed = 8;
			Up = "AmovPknlMtacSlowWpstDbr";
		};
		class PistolLowStandActionsTacF: PistolLowStandActionsRunF
		{
			Crouch = "AmovPknlMtacSlowWpstDf";
			PlayerCrouch = "AmovPknlMtacSlowWpstDf";
			Stand = "AmovPercMtacSrasWpstDf";
			turnSpeed = 8;
			Up = "AmovPknlMtacSlowWpstDf";
		};
		class PistolLowStandActionsTacFL: PistolLowStandActionsRunF
		{
			Crouch = "AmovPknlMtacSlowWpstDfl";
			fireNotPossible = "AmovPercMtacSrasWpstDfl";
			PlayerCrouch = "AmovPknlMtacSlowWpstDfl";
			Stand = "AmovPercMtacSrasWpstDfl";
			turnSpeed = 8;
			Up = "AmovPknlMtacSlowWpstDfl";
		};
		class PistolLowStandActionsTacFR: PistolLowStandActionsRunF
		{
			Crouch = "AmovPknlMtacSlowWpstDfr";
			fireNotPossible = "AmovPercMtacSrasWpstDfr";
			PlayerCrouch = "AmovPknlMtacSlowWpstDfr";
			Stand = "AmovPercMtacSrasWpstDfr";
			turnSpeed = 8;
			Up = "AmovPknlMtacSlowWpstDfr";
		};
		class PistolLowStandActionsTacL: PistolLowStandActionsRunF
		{
			Crouch = "AmovPknlMtacSlowWpstDl";
			fireNotPossible = "AmovPercMtacSrasWpstDl";
			PlayerCrouch = "AmovPknlMtacSlowWpstDl";
			Stand = "AmovPercMtacSrasWpstDl";
			turnSpeed = 8;
			Up = "AmovPknlMtacSlowWpstDl";
		};
		class PistolLowStandActionsTacR: PistolLowStandActionsRunF
		{
			Crouch = "AmovPknlMtacSlowWpstDr";
			fireNotPossible = "AmovPercMtacSrasWpstDr";
			PlayerCrouch = "AmovPknlMtacSlowWpstDr";
			Stand = "AmovPercMtacSrasWpstDr";
			turnSpeed = 8;
			Up = "AmovPknlMtacSlowWpstDr";
		};
		class PistolLowStandActionsWlkB: PistolLowStandActionsRunF
		{
			Crouch = "AmovPknlMwlkSlowWpstDb";
			fireNotPossible = "AmovPercMwlkSrasWpstDb";
			PlayerCrouch = "AmovPknlMwlkSlowWpstDb";
			Stand = "AmovPercMwlkSrasWpstDb";
			turnSpeed = 8;
			Up = "AmovPknlMwlkSlowWpstDb";
		};
		class PistolLowStandActionsWlkBL: PistolLowStandActionsRunF
		{
			Crouch = "AmovPknlMwlkSlowWpstDbl";
			fireNotPossible = "AmovPercMwlkSrasWpstDbl";
			PlayerCrouch = "AmovPknlMwlkSlowWpstDbl";
			Stand = "AmovPercMwlkSrasWpstDbl";
			turnSpeed = 8;
			Up = "AmovPknlMwlkSlowWpstDbl";
		};
		class PistolLowStandActionsWlkBR: PistolLowStandActionsRunF
		{
			Crouch = "AmovPknlMwlkSlowWpstDbr";
			fireNotPossible = "AmovPercMwlkSrasWpstDbr";
			PlayerCrouch = "AmovPknlMwlkSlowWpstDbr";
			Stand = "AmovPercMwlkSrasWpstDbr";
			turnSpeed = 8;
			Up = "AmovPknlMwlkSlowWpstDbr";
		};
		class PistolLowStandActionsWlkF: PistolLowStandActionsRunF
		{
			Crouch = "AmovPknlMwlkSlowWpstDf";
			fireNotPossible = "AmovPercMwlkSrasWpstDf";
			PlayerCrouch = "AmovPknlMwlkSlowWpstDf";
			Stand = "AmovPercMwlkSrasWpstDf";
			turnSpeed = 8;
			Up = "AmovPknlMwlkSlowWpstDf";
		};
		class PistolLowStandActionsWlkFL: PistolLowStandActionsRunF
		{
			Crouch = "AmovPknlMwlkSlowWpstDfl";
			fireNotPossible = "AmovPercMwlkSrasWpstDfl";
			PlayerCrouch = "AmovPknlMwlkSlowWpstDfl";
			Stand = "AmovPercMwlkSrasWpstDfl";
			turnSpeed = 8;
			Up = "AmovPknlMwlkSlowWpstDfl";
		};
		class PistolLowStandActionsWlkFR: PistolLowStandActionsRunF
		{
			Crouch = "AmovPknlMwlkSlowWpstDfr";
			fireNotPossible = "AmovPercMwlkSrasWpstDfr";
			PlayerCrouch = "AmovPknlMwlkSlowWpstDfr";
			Stand = "AmovPercMwlkSrasWpstDfr";
			turnSpeed = 8;
			Up = "AmovPknlMwlkSlowWpstDfr";
		};
		class PistolLowStandActionsWlkL: PistolLowStandActionsRunF
		{
			Crouch = "AmovPknlMwlkSlowWpstDl";
			fireNotPossible = "AmovPercMwlkSrasWpstDl";
			PlayerCrouch = "AmovPknlMwlkSlowWpstDl";
			Stand = "AmovPercMwlkSrasWpstDl";
			turnSpeed = 8;
			Up = "AmovPknlMwlkSlowWpstDl";
		};
		class PistolLowStandActionsWlkR: PistolLowStandActionsRunF
		{
			Crouch = "AmovPknlMwlkSlowWpstDr";
			fireNotPossible = "AmovPercMwlkSrasWpstDr";
			PlayerCrouch = "AmovPknlMwlkSlowWpstDr";
			Stand = "AmovPercMwlkSrasWpstDr";
			turnSpeed = 8;
			Up = "AmovPknlMwlkSlowWpstDr";
		};
		class PistolLowStandCutsceneActions: NoActions
		{
			Combat = "Acts_PistolLowStand_Default";
			Default = "Acts_PistolLowStand_Default";
			Relaxed = "Acts_PistolLowStand_Default";
			stance = "ManStanceStand";
			Stop = "Acts_PistolLowStand_Default";
			StopRelaxed = "Acts_PistolLowStand_Default";
			upDegree = "ManPosStand";
		};
		class PistolLowStandEvasiveActionsF: PistolLowStandActionsNoAdjust
		{
			AdjustF = "AmovPercMrunSrasWpstDf";
			PlayerCrouch = "AmovPknlMevaSrasWpstDf";
			salute = "";
			Stand = "AmovPercMstpSrasWpstDnon";
			turnSpeed = 4;
			Up = "AmovPknlMevaSrasWpstDf";
		};
		class PistolLowStandEvasiveActionsFL: PistolLowStandActionsNoAdjust
		{
			AdjustLF = "AmovPercMrunSrasWpstDfl";
			PlayerCrouch = "AmovPknlMevaSrasWpstDfl";
			salute = "";
			Stand = "AmovPercMstpSrasWpstDnon";
			turnSpeed = 4;
			Up = "AmovPknlMevaSrasWpstDfl";
		};
		class PistolLowStandEvasiveActionsFR: PistolLowStandActionsNoAdjust
		{
			AdjustRF = "AmovPercMrunSrasWpstDfr";
			PlayerCrouch = "AmovPknlMevaSrasWpstDfr";
			salute = "";
			Stand = "AmovPercMstpSrasWpstDnon";
			turnSpeed = 4;
			Up = "AmovPknlMevaSrasWpstDfr";
		};
		class PistolProneActions: PistolStandActions
		{
			AdjustB = "AadjPpneMstpSrasWpstDdown";
			AdjustF = "AadjPpneMstpSrasWpstDup";
			AdjustL = "AadjPpneMstpSrasWpstDleft";
			AdjustLB = "AadjPpneMstpSrasWpstDdown";
			AdjustLF = "AadjPpneMstpSrasWpstDup";
			AdjustR = "AadjPpneMstpSrasWpstDright";
			AdjustRB = "AadjPpneMstpSrasWpstDdown";
			AdjustRF = "AadjPpneMstpSrasWpstDup";
			binocOff = "AmovPpneMstpSrasWpstDnon";
			binocOn = "AwopPpneMstpSoptWbinDnon_pst";
			Binoculars = "AmovPpneMstpSoptWbinDnon";
			CanNotMove = "AmovPpneMstpSrasWpstDnon";
			Civil = "AmovPpneMstpSnonWnonDnon";
			Combat = "AmovPpneMstpSrasWrflDnon";
			default = "AmovPpneMstpSrasWpstDnon";
			down = "AmovPercMstpSrasWpstDnon";
			EvasiveLeft = "AmovPpneMstpSrasWpstDnon_AmovPpneMevaSlowWpstDl";
			EvasiveRight = "AmovPpneMstpSrasWpstDnon_AmovPpneMevaSlowWpstDr";
			FastB = "AmovPpneMrunSlowWpstDb";
			FastF = "AmovPpneMsprSlowWpstDf";
			FastL = "AmovPpneMrunSlowWpstDl";
			FastLB = "AmovPpneMrunSlowWpstDbl";
			FastLF = "AmovPpneMrunSlowWpstDfl";
			FastR = "AmovPpneMrunSlowWpstDr";
			FastRB = "AmovPpneMrunSlowWpstDbr";
			FastRF = "AmovPpneMrunSlowWpstDfr";
			FireNotPossible = "AmovPpneMstpSrasWpstDnon";
			Gear = "AinvPpneMstpSrasWpstDnon";
			gestureAdvance[] = {"GestureAdvanceProne", "Gesture"};
			gestureCeaseFire[] = {"", "Gesture"};
			gestureCover[] = {"", "Gesture"};
			gestureFollow[] = {"", "Gesture"};
			gestureFreeze[] = {"GestureFreezeProne", "Gesture"};
			gestureGo[] = {"GestureGoBProne", "Gesture"};
			gestureGoB[] = {"GestureGoBProne", "Gesture"};
			gestureNo[] = {"", "Gesture"};
			gesturePoint[] = {"", "Gesture"};
			GestureReloadAKM = "RifleReloadProneAKM";
			GestureReloadAKM_Drum = "RifleReloadProneAKM_Drum";
			GestureReloadAKS = "RifleReloadProneAKS";
			GestureReloadARX = "RifleReloadProneARX";
			GestureReloadARX2 = "RifleReloadProneARX2";
			GestureReloadCTAR = "RifleReloadProneCTAR";
			GestureReloadDMR = "RifleReloadProneDMR";
			GestureReloadDMR02 = "RifleReloadProneDMR02";
			GestureReloadDMR03 = "RifleReloadProneDMR03";
			GestureReloadDMR04 = "RifleReloadProneDMR04";
			GestureReloadDMR05 = "RifleReloadProneDMR05";
			GestureReloadDMR06 = "RifleReloadProneDMR06";
			GestureReloadDMR07 = "RifleReloadProneDMR07";
			GestureReloadEBR = "RifleReloadProneEBR";
			GestureReloadFlaregun = "PistolReloadProneFlaregun";
			GestureReloadHunterShotgun01 = "RifleReloadProneHunterShotgun01";
			GestureReloadKatiba = "RifleReloadProneKatiba";
			GestureReloadKatibaUGL = "RifleReloadProneKatibaUGL";
			GestureReloadLIM = "RifleReloadProneLIM";
			GestureReloadLRR = "RifleReloadProneLRR";
			GestureReloadM200 = "RifleReloadProneM200";
			GestureReloadM4SSAS = "RifleReloadProneM4SSAS";
			GestureReloadMk20 = "RifleReloadProneMk20";
			GestureReloadMk20UGL = "RifleReloadProneMk20UGL";
			GestureReloadMMG01 = "RifleReloadProneMMG01";
			GestureReloadMMG02 = "RifleReloadProneMMG02";
			GestureReloadMSBS = "RifleReloadProneMSBS";
			GestureReloadMSBS_UBS = "RifleReloadProneMSBS_UBS";
			GestureReloadMSBS_UGL = "RifleReloadProneMSBS_UGL";
			GestureReloadMX = "RifleReloadProneMX";
			GestureReloadMXCompact = "RifleReloadProneMXCompact";
			GestureReloadMXSniper = "RifleReloadProneMXSniper";
			GestureReloadMXUGL = "RifleReloadProneMXUGL";
			GestureReloadPistol = "PistolReloadProne";
			GestureReloadPistolHeavy02 = "PistolHeavy02ReloadProne";
			GestureReloadSDAR = "RifleReloadProneSDAR";
			GestureReloadSMG_01 = "RifleReloadProneSMG_01";
			GestureReloadSMG_02 = "RifleReloadProneSMG_02";
			GestureReloadSMG_03 = "RifleReloadProneSMG_03";
			GestureReloadSMG_05 = "RifleReloadProneSMG_05";
			GestureReloadSPAR_01 = "RifleReloadProneSPAR_01";
			GestureReloadSPAR_02 = "RifleReloadProneSPAR_02";
			GestureReloadSPARUGL = "RifleReloadProneSPARUGL";
			GestureReloadTRG = "RifleReloadProneTRG";
			GestureReloadTRGUGL = "RifleReloadProneTRGUGL";
			gestureUp[] = {"GestureGoBProne", "Gesture"};
			gestureYes[] = {"", "Gesture"};
			GetOver = "";
			handGunOn = "AmovPpneMstpSrasWrflDnon";
			leanLRot = 0;
			leanLShift = 0;
			leanRRot = 0;
			leanRShift = 0;
			LimpB = "AmovPpneMrunSlowWpstDb";
			LimpF = "AmovPpneMrunSlowWpstDf";
			LimpL = "AmovPpneMrunSlowWpstDl";
			LimpLB = "AmovPpneMrunSlowWpstDbl";
			LimpLF = "AmovPpneMrunSlowWpstDfl";
			LimpR = "AmovPpneMrunSlowWpstDr";
			LimpRB = "AmovPpneMrunSlowWpstDbr";
			LimpRF = "AmovPpneMrunSlowWpstDfr";
			medic = "AinvPpneMstpSlayWpstDnon_medic";
			medicOther = "AinvPpneMstpSlayWpstDnon_medicOther";
			PlayerSlowB = "AmovPpneMrunSlowWpstDb";
			PlayerSlowF = "AmovPpneMrunSlowWpstDf";
			PlayerSlowL = "AmovPpneMrunSlowWpstDl";
			PlayerSlowLB = "AmovPpneMrunSlowWpstDbl";
			PlayerSlowLF = "AmovPpneMrunSlowWpstDfl";
			PlayerSlowR = "AmovPpneMrunSlowWpstDr";
			PlayerSlowRB = "AmovPpneMrunSlowWpstDbr";
			PlayerSlowRF = "AmovPpneMrunSlowWpstDfr";
			PlayerStand = "AmovPercMstpSrasWpstDnon";
			PlayerTactB = "AmovPpneMrunSlowWpstDb";
			PlayerTactF = "AmovPpneMrunSlowWpstDf";
			PlayerTactL = "AmovPpneMrunSlowWpstDl";
			PlayerTactLB = "AmovPpneMrunSlowWpstDbl";
			PlayerTactLF = "AmovPpneMrunSlowWpstDfl";
			PlayerTactR = "AmovPpneMrunSlowWpstDr";
			PlayerTactRB = "AmovPpneMrunSlowWpstDbr";
			PlayerTactRF = "AmovPpneMrunSlowWpstDfr";
			PlayerWalkB = "AmovPpneMrunSlowWpstDb";
			PlayerWalkF = "AmovPpneMrunSlowWpstDf";
			PlayerWalkL = "AmovPpneMrunSlowWpstDl";
			PlayerWalkLB = "AmovPpneMrunSlowWpstDbl";
			PlayerWalkLF = "AmovPpneMrunSlowWpstDfl";
			PlayerWalkR = "AmovPpneMrunSlowWpstDr";
			PlayerWalkRB = "AmovPpneMrunSlowWpstDbr";
			PlayerWalkRF = "AmovPpneMrunSlowWpstDfr";
			PrimaryWeapon = "AmovPpneMstpSrasWrflDnon";
			putDown = "AmovPpneMstpSrasWpstDnon_AinvPpneMstpSrasWpstDnon_Putdown";
			Relax = "AmovPpneMstpSrasWpstDnon_relax";
			reloadGM6 = "reloadGM6";
			reloadMagazine = "PistolMagazineReloadProne";
			reloadMGun = "AmovPpneMstpSrasWpstDnon";
			reloadMortar = "AmovPpneMstpSrasWpstDnon";
			salute = "";
			SecondaryWeapon = "AmovPknlMstpSrasWlnrDnon";
			sitDown = "";
			SlowB = "AmovPpneMrunSlowWpstDb";
			SlowF = "AmovPpneMrunSlowWpstDf";
			SlowL = "AmovPpneMrunSlowWpstDl";
			SlowLB = "AmovPpneMrunSlowWpstDbl";
			SlowLF = "AmovPpneMrunSlowWpstDfl";
			SlowR = "AmovPpneMrunSlowWpstDr";
			SlowRB = "AmovPpneMrunSlowWpstDbr";
			SlowRF = "AmovPpneMrunSlowWpstDfr";
			stance = "ManStanceProne";
			Stand = "";
			StartFreefall = "AfalPpneMstpSrasWpstDnon";
			stop = "AmovPpneMstpSrasWpstDnon";
			stopRelaxed = "AidlPpneMstpSrasWpstDnon_AI";
			strokeGun = "AmovPpneMstpSrasWpstDnon";
			TactB = "AmovPpneMrunSlowWpstDb";
			TactF = "AmovPpneMrunSlowWpstDf";
			TactL = "AmovPpneMrunSlowWpstDl";
			TactLB = "AmovPpneMrunSlowWpstDbl";
			TactLF = "AmovPpneMrunSlowWpstDfl";
			TactR = "AmovPpneMrunSlowWpstDr";
			TactRB = "AmovPpneMrunSlowWpstDbr";
			TactRF = "AmovPpneMrunSlowWpstDfr";
			takeFlag = "AmovPpneMstpSrasWpstDnon";
			throwGrenade = "AwopPpneMstpSgthWpstDnon_Fast_Start_1";
			throwPrepare = "AwopPpneMstpSgthWpstDnon_Part2";
			treated = "AmovPpneMstpSrasWpstDnon_healed";
			turnL = "AmovPpneMstpSrasWpstDnon_turnL";
			turnLRelaxed = "AmovPpneMstpSrasWpstDnon_turnL";
			turnR = "AmovPpneMstpSrasWpstDnon_turnR";
			turnRRelaxed = "AmovPpneMstpSrasWpstDnon_turnR";
			turnSpeed = 2.5;
			upDegree = "ManPosHandGunLying";
			WalkB = "AmovPpneMrunSlowWpstDb";
			WalkF = "AmovPpneMrunSlowWpstDf";
			WalkL = "AmovPpneMrunSlowWpstDl";
			WalkLB = "AmovPpneMrunSlowWpstDbl";
			WalkLF = "AmovPpneMrunSlowWpstDfl";
			WalkR = "AmovPpneMrunSlowWpstDr";
			WalkRB = "AmovPpneMrunSlowWpstDbr";
			WalkRF = "AmovPpneMrunSlowWpstDfr";
			weaponOff = "AmovPpneMstpSrasWpstDnon";
			weaponOn = "AmovPknlMstpSrasWlnrDnon";
		};
		class PistolProneActions_inv: PistolProneActions
		{
			Civil = "AmovPknlMstpSnonWnonDnon_gear";
			Default = "AinvPpneMstpSrasWpstDnon";
			PlayerProne = "AinvPpneMstpSnonWnonDnon";
			Stop = "AinvPpneMstpSrasWpstDnon";
			StopRelaxed = "AinvPpneMstpSrasWpstDnon";
		};
		class PistolRaisedStandCutsceneActions: NoActions
		{
			Combat = "Acts_PistolRaisedStand_Default";
			Default = "Acts_PistolRaisedStand_Default";
			Relaxed = "Acts_PistolRaisedStand_Default";
			stance = "ManStanceStand";
			StopRelaxed = "Acts_PistolRaisedStand_Default";
			upDegree = "ManPosStand";
		};
		class PistolRunFActions: PistolStandActions
		{
			throwPrepare = "AmovPercMrunSrasWpstDf";
		};
		class PistolSitActions: PistolStandActions
		{
			default = "AmovPsitMstpSnonWpstDnon_ground";
			Diary = "";
			GetOver = "";
			sitDown = "AmovPercMstpSrasWpstDnon";
			stance = "ManStanceCrouch";
			stop = "AmovPsitMstpSnonWpstDnon_ground";
			StopRelaxed = "AmovPsitMstpSnonWpstDnon_ground";
			turnL = "";
			turnR = "";
		};
		class PistolStandActions: NoActions
		{
			AdjustB = "AadjPercMstpSrasWpstDdown";
			AdjustF = "AadjPercMstpSrasWpstDup";
			AdjustL = "AadjPercMstpSrasWpstDleft";
			AdjustLB = "AadjPercMstpSrasWpstDdown";
			AdjustLF = "AadjPercMstpSrasWpstDup";
			AdjustR = "AadjPercMstpSrasWpstDright";
			AdjustRB = "AadjPercMstpSrasWpstDdown";
			AdjustRF = "AadjPercMstpSrasWpstDup";
			binocOff = "AmovPercMstpSrasWpstDnon";
			binocOn = "AwopPercMstpSoptWbinDnon_pst";
			Binoculars = "AmovPercMstpSoptWbinDnon";
			BottomDive = "AbdvPercMstpSnonWnonDnon";
			bottomSwim = "AbswPercMrunSnonWnonDf";
			CanNotMove = "AmovPercMstpSrasWpstDnon";
			Civil = "AmovPercMstpSnonWnonDnon";
			CivilLying = "AmovPpneMstpSnonWnonDnon";
			Combat = "AmovPercMstpSrasWrflDnon";
			Crouch = "AmovPknlMstpSrasWpstDnon";
			default = "AmovPercMstpSrasWpstDnon";
			Diary = "";
			down = "AmovPpneMstpSrasWpstDnon";
			EvasiveLeft = "AmovPercMevaSrasWpstDfl";
			EvasiveRight = "AmovPercMevaSrasWpstDfr";
			FastB = "AmovPercMrunSrasWpstDb";
			FastF = "AmovPercMevaSrasWpstDf";
			FastL = "AmovPercMevaSrasWpstDl";
			FastLB = "AmovPercMrunSrasWpstDbl";
			FastLF = "AmovPercMevaSrasWpstDfl";
			FastR = "AmovPercMevaSrasWpstDr";
			FastRB = "AmovPercMrunSrasWpstDbr";
			FastRF = "AmovPercMevaSrasWpstDfr";
			FireNotPossible = "AmovPercMstpSrasWpstDnon";
			Gear = "AinvPercMstpSrasWpstDnon";
			gestureAdvance[] = {"GestureAdvance", "Gesture"};
			gestureCeaseFire[] = {"GestureCeaseFire", "Gesture"};
			gestureChangeAntenna[] = {"GestureChangeAntenna", "Gesture"};
			gestureCover[] = {"GestureCover", "Gesture"};
			gestureFollow[] = {"GestureFollow", "Gesture"};
			gestureFreeze[] = {"GestureFreezeStandPistol", "Gesture"};
			gestureGo[] = {"GestureGoStandPistol", "Gesture"};
			gestureGoB[] = {"GestureGoBStand", "Gesture"};
			gestureHi[] = {"GestureHi", "Gesture"};
			gestureHiB[] = {"GestureHiB", "Gesture"};
			gestureHiC[] = {"GestureHiC", "Gesture"};
			gestureNo[] = {"GestureNo", "Gesture"};
			gesturePoint[] = {"GesturePointStand", "Gesture"};
			gestureUp[] = {"GestureUp", "Gesture"};
			gestureYes[] = {"GestureYes", "Gesture"};
			GetInBoat = "GetInHeli_Transport_01Cargo";
			GetInHelicopterCargo = "GetInHelicopterCargoPst";
			GetInHigh = "AmovPercMstpSnonWnonDnon_AcrgPknlMstpSnonWnonDnon_getInHigh";
			GetInLow = "AmovPercMstpSnonWnonDnon_AcrgPknlMstpSnonWnonDnon_getInLow";
			GetInMedium = "AmovPercMstpSnonWnonDnon_AcrgPknlMstpSnonWnonDnon_getInMedium";
			GetInMRAP_01 = "GetInMRAP_01Pst";
			GetInMRAP_01_cargo = "GetInMRAP_01_cargoPst";
			GetInSDV = "AmovPercMstpSnonWnonDnon_AcrgPknlMstpSnonWnonDnon_getInHigh";
			GetInVertical = "GetIn_Vertical_Pistol";
			GetOutBoat = "AcrgPknlMstpSnonWnonDnon_AmovPercMstpSrasWrflDnon_getOutLow";
			GetOutHelicopterCargo = "GetOutHelicopterCargoPst";
			GetOutHigh = "AcrgPknlMstpSnonWnonDnon_AmovPercMstpSrasWpstDnon_getOutHigh";
			GetOutHighHemtt = "AcrgPknlMstpSnonWnonDnon_AmovPercMstpSrasWpstDnon_getOutHighHemtt";
			GetOutHighZamak = "AcrgPknlMstpSnonWnonDnon_AmovPercMstpSrasWpstDnon_getOutHighZamak";
			GetOutLow = "AcrgPknlMstpSnonWnonDnon_AmovPercMstpSrasWpstDnon_getOutLow";
			GetOutMedium = "AcrgPknlMstpSnonWnonDnon_AmovPercMstpSrasWpstDnon_getOutMedium";
			GetOutMRAP_01 = "GetOutMRAP_01Pst";
			GetOutMRAP_01_cargo = "GetOutMRAP_01_cargoPst";
			GetOutSDV = "AcrgPknlMstpSnonWnonDnon_AmovPercMstpSrasWpstDnon_getOutHigh";
			getOver = "AovrPercMstpSrasWpstDf";
			grabCarry = "Helper_SwitchToCarrynon_pst";
			grabDrag = "AmovPercMstpSrasWpstDnon_AcinPknlMwlkSnonWpstDb_2";
			grabDragged = "AinjPpneMrunSnonWnonDb_grab";
			handGunOn = "AmovPercMstpSrasWpstDnon";
			leanLRot = 0.5;
			leanLShift = 0.01;
			leanRRot = 0.5;
			leanRShift = 0.01;
			limitFast = 5.5;
			LimpB = "AmovPercMlmpSrasWpstDb";
			LimpF = "AmovPercMlmpSrasWpstDf";
			LimpL = "AmovPercMlmpSrasWpstDl";
			LimpLB = "AmovPercMlmpSrasWpstDbl";
			LimpLF = "AmovPercMlmpSrasWpstDfl";
			LimpR = "AmovPercMlmpSrasWpstDr";
			LimpRB = "AmovPercMlmpSrasWpstDbr";
			LimpRF = "AmovPercMlmpSrasWpstDfr";
			Lying = "AmovPpneMstpSrasWpstDnon";
			medic = "AinvPknlMstpSlayWpstDnon_medic";
			medicOther = "AinvPknlMstpSlayWpstDnon_medicOther";
			PlayerCrouch = "AmovPknlMstpSrasWpstDnon";
			PlayerProne = "AmovPpneMstpSrasWpstDnon";
			PlayerSlowB = "AmovPercMrunSrasWpstDb";
			PlayerSlowF = "AmovPercMrunSrasWpstDf";
			PlayerSlowL = "AmovPercMrunSrasWpstDl";
			PlayerSlowLB = "AmovPercMrunSrasWpstDbl";
			PlayerSlowLF = "AmovPercMrunSrasWpstDfl";
			PlayerSlowR = "AmovPercMrunSrasWpstDr";
			PlayerSlowRB = "AmovPercMrunSrasWpstDbr";
			PlayerSlowRF = "AmovPercMrunSrasWpstDfr";
			PlayerStand = "AmovPercMstpSlowWpstDnon";
			PlayerTactB = "AmovPercMtacSrasWpstDb";
			PlayerTactF = "AmovPercMtacSrasWpstDf";
			PlayerTactL = "AmovPercMtacSrasWpstDl";
			PlayerTactLB = "AmovPercMtacSrasWpstDbl";
			PlayerTactLF = "AmovPercMtacSrasWpstDfl";
			PlayerTactR = "AmovPercMtacSrasWpstDr";
			PlayerTactRB = "AmovPercMtacSrasWpstDbr";
			PlayerTactRF = "AmovPercMtacSrasWpstDfr";
			PlayerWalkB = "AmovPercMwlkSrasWpstDb";
			PlayerWalkF = "AmovPercMwlkSrasWpstDf";
			PlayerWalkL = "AmovPercMwlkSrasWpstDl";
			PlayerWalkLB = "AmovPercMwlkSrasWpstDbl";
			PlayerWalkLF = "AmovPercMwlkSrasWpstDfl";
			PlayerWalkR = "AmovPercMwlkSrasWpstDr";
			PlayerWalkRB = "AmovPercMwlkSrasWpstDbr";
			PlayerWalkRF = "AmovPercMwlkSrasWpstDfr";
			PrimaryWeapon = "AmovPercMstpSrasWrflDnon";
			putDown = "AmovPercMstpSrasWpstDnon_AinvPercMstpSrasWpstDnon_Putdown";
			Relax = "AmovPknlMstpSrasWpstDnon_relax";
			reloadMagazine[] = {"PistolMagazineReloadStand_g", "Gesture"};
			salute = "AmovPercMstpSrasWpstDnon_salute";
			saluteOff = "AmovPercMstpSrasWpstDnon";
			SecondaryWeapon = "AmovPercMstpSrasWlnrDnon";
			sitDown = "AmovPsitMstpSnonWpstDnon_ground";
			SlowB = "AmovPercMrunSlowWpstDb";
			SlowF = "AmovPercMrunSlowWpstDf";
			SlowL = "AmovPercMrunSlowWpstDl";
			SlowLB = "AmovPercMrunSlowWpstDbl";
			SlowLF = "AmovPercMrunSlowWpstDfl";
			SlowR = "AmovPercMrunSlowWpstDr";
			SlowRB = "AmovPercMrunSlowWpstDbr";
			SlowRF = "AmovPercMrunSlowWpstDr";
			stance = "ManStanceStand";
			Stand = "AmovPercMstpSlowWpstDnon";
			startDive = "AdvePercMstpSnonWnonDnon";
			StartFreefall = "AfalPercMstpSrasWpstDnon";
			startSwim = "AswmPercMrunSnonWnonDf";
			stop = "AmovPercMstpSrasWpstDnon";
			stopRelaxed = "AmovPercMstpSrasWpstDnon";
			strokeGun = "AmovPercMstpSrasWpstDnon";
			SurfaceDive = "AsdvPercMstpSnonWnonDnon";
			surfaceSwim = "AsswPercMrunSnonWnonDf";
			Surrender = "AmovPercMstpSsurWnonDnon";
			TactB = "AmovPercMrunSlowWpstDb";
			TactF = "AmovPercMrunSlowWpstDf";
			TactL = "AmovPercMrunSlowWpstDl";
			TactLB = "AmovPercMrunSlowWpstDbl";
			TactLF = "AmovPercMrunSlowWpstDfl";
			TactR = "AmovPercMrunSlowWpstDr";
			TactRB = "AmovPercMrunSlowWpstDbr";
			TactRF = "AmovPercMrunSlowWpstDfr";
			takeFlag = "AinvPknlMstpSnonWnonDnon_1";
			throwGrenade[] = {"GestureThrowGrenadePistol", "Gesture"};
			throwPrepare = "AwopPercMstpSgthWpstDnon_Part2";
			treated = "AinvPknlMstpSnonWnonDnon_healed_1";
			turnL = "AmovPercMstpSrasWpstDnon_turnL";
			turnLRelaxed = "AmovPercMstpSrasWpstDnon_turnL";
			turnR = "AmovPercMstpSrasWpstDnon_turnR";
			turnRRelaxed = "AmovPercMstpSrasWpstDnon_turnR";
			turnSpeed = 8;
			up = "AmovPknlMstpSrasWpstDnon";
			upDegree = "ManPosHandGunStand";
			WalkB = "AmovPercMwlkSrasWpstDb";
			WalkF = "AmovPercMwlkSrasWpstDf";
			WalkL = "AmovPercMwlkSrasWpstDl";
			WalkLB = "AmovPercMwlkSrasWpstDbl";
			WalkLF = "AmovPercMwlkSrasWpstDfl";
			WalkR = "AmovPercMwlkSrasWpstDr";
			WalkRB = "AmovPercMwlkSrasWpstDbr";
			WalkRF = "AmovPercMwlkSrasWpstDfr";
			weaponOff = "AmovPercMstpSrasWpstDnon";
			weaponOn = "AmovPercMstpSrasWlnrDnon";
		};
		class PistolStandActions_gear: PistolStandActions
		{
			Civil = "AmovPercMstpSnonWnonDnon_gear";
			Default = "AmovPercMstpSrasWpstDnon_gear";
			HandGunOn = "AinvPercMstpSrasWrflDnon";
			PlayerStand = "AmovPercMstpSrasWpstDnon";
			Stop = "AmovPercMstpSrasWpstDnon_gear";
			StopRelaxed = "AmovPercMstpSrasWpstDnon_gear";
		};
		class PistolStandActions_inv: PistolStandActions
		{
			Civil = "AinvPercMstpSnonWnonDnon";
			Default = "AinvPercMstpSrasWpstDnon";
			HandGunOn = "AmovPercMstpSrasWpstDnon";
			PlayerStand = "AmovPercMstpSrasWpstDnon";
			Stop = "AinvPercMstpSrasWpstDnon";
			StopRelaxed = "AinvPercMstpSrasWpstDnon";
		};
		class PistolStandActionsLimpB: PistolStandActions
		{
			Stand = "AmovPercMlmpSlowWpstDb";
			Up = "AmovPknlMlmpSrasWpstDb";
		};
		class PistolStandActionsLimpF: PistolStandActions
		{
			Stand = "AmovPercMlmpSlowWpstDf";
			Up = "AmovPknlMlmpSrasWpstDf";
		};
		class PistolStandActionsLimpL: PistolStandActions
		{
			Stand = "AmovPercMlmpSlowWpstDl";
			Up = "AmovPknlMlmpSrasWpstDl";
		};
		class PistolStandActionsLimpLB: PistolStandActions
		{
			Stand = "AmovPercMlmpSlowWpstDbl";
			Up = "AmovPknlMlmpSrasWpstDbl";
		};
		class PistolStandActionsLimpLF: PistolStandActions
		{
			Stand = "AmovPercMlmpSlowWpstDfl";
			Up = "AmovPknlMlmpSrasWpstDfl";
		};
		class PistolStandActionsLimpR: PistolStandActions
		{
			Stand = "AmovPercMlmpSlowWpstDr";
			Up = "AmovPknlMlmpSrasWpstDr";
		};
		class PistolStandActionsLimpRB: PistolStandActions
		{
			Stand = "AmovPercMlmpSlowWpstDbr";
			Up = "AmovPknlMlmpSrasWpstDbr";
		};
		class PistolStandActionsLimpRF: PistolStandActions
		{
			Stand = "AmovPercMlmpSlowWpstDfr";
			Up = "AmovPknlMlmpSrasWpstDfr";
		};
		class PistolStandActionsNoAdjust: PistolStandActions
		{
			AdjustB = "";
			AdjustF = "";
			AdjustL = "";
			AdjustLB = "";
			AdjustLF = "";
			AdjustR = "";
			AdjustRB = "";
			AdjustRF = "";
		};
		class PistolStandActionsRunB: PistolStandActionsNoAdjust
		{
			AdjustB = "";
			Crouch = "AmovPknlMrunSrasWpstDb";
			PlayerCrouch = "AmovPknlMrunSrasWpstDb";
			Stand = "AmovPercMrunSlowWpstDb";
			turnSpeed = 4.5;
			Up = "AmovPknlMrunSrasWpstDb";
		};
		class PistolStandActionsRunBL: PistolStandActionsNoAdjust
		{
			Crouch = "AmovPknlMrunSrasWpstDbl";
			PlayerCrouch = "AmovPknlMrunSrasWpstDbl";
			Stand = "AmovPercMrunSlowWpstDbl";
			turnSpeed = 4.5;
			Up = "AmovPknlMrunSrasWpstDbl";
		};
		class PistolStandActionsRunBR: PistolStandActionsNoAdjust
		{
			Crouch = "AmovPknlMrunSrasWpstDbr";
			PlayerCrouch = "AmovPknlMrunSrasWpstDbr";
			Stand = "AmovPercMrunSlowWpstDbr";
			turnSpeed = 4.5;
			Up = "AmovPknlMrunSrasWpstDbr";
		};
		class PistolStandActionsRunF: PistolStandActionsNoAdjust
		{
			Crouch = "AmovPknlMrunSrasWpstDf";
			PlayerCrouch = "AmovPknlMrunSrasWpstDf";
			Stand = "AmovPercMrunSlowWpstDf";
			turnSpeed = 4.5;
			Up = "AmovPknlMrunSrasWpstDf";
		};
		class PistolStandActionsRunFL: PistolStandActionsNoAdjust
		{
			Crouch = "AmovPknlMrunSrasWpstDfl";
			PlayerCrouch = "AmovPknlMrunSrasWpstDfl";
			Stand = "AmovPercMrunSlowWpstDfl";
			turnSpeed = 4.5;
			Up = "AmovPknlMrunSrasWpstDfl";
		};
		class PistolStandActionsRunFR: PistolStandActionsNoAdjust
		{
			Crouch = "AmovPknlMrunSrasWpstDfr";
			PlayerCrouch = "AmovPknlMrunSrasWpstDfr";
			Stand = "AmovPercMrunSlowWpstDfr";
			turnSpeed = 4.5;
			Up = "AmovPknlMrunSrasWpstDfr";
		};
		class PistolStandActionsRunL: PistolStandActionsNoAdjust
		{
			AdjustL = "";
			Crouch = "AmovPknlMrunSrasWpstDl";
			PlayerCrouch = "AmovPknlMrunSrasWpstDl";
			Stand = "AmovPercMrunSlowWpstDl";
			turnSpeed = 4.5;
			Up = "AmovPknlMrunSrasWpstDl";
		};
		class PistolStandActionsRunR: PistolStandActionsNoAdjust
		{
			AdjustR = "";
			Crouch = "AmovPknlMrunSrasWpstDr";
			PlayerCrouch = "AmovPknlMrunSrasWpstDr";
			Stand = "AmovPercMrunSlowWpstDr";
			turnSpeed = 4.5;
			Up = "AmovPknlMrunSrasWpstDr";
		};
		class PistolStandActionsTacB: PistolStandActionsNoAdjust
		{
			AdjustB = "";
			Crouch = "AmovPknlMtacSrasWpstDb";
			PlayerCrouch = "AmovPknlMtacSrasWpstDb";
			Stand = "AmovPercMtacSlowWpstDb";
			turnSpeed = 4.5;
			Up = "AmovPknlMtacSrasWpstDb";
		};
		class PistolStandActionsTacBL: PistolStandActionsNoAdjust
		{
			Crouch = "AmovPknlMtacSrasWpstDbl";
			PlayerCrouch = "AmovPknlMtacSrasWpstDbl";
			Stand = "AmovPercMtacSlowWpstDbl";
			turnSpeed = 4.5;
			Up = "AmovPknlMtacSrasWpstDbl";
		};
		class PistolStandActionsTacBR: PistolStandActionsNoAdjust
		{
			Crouch = "AmovPknlMtacSrasWpstDbr";
			PlayerCrouch = "AmovPknlMtacSrasWpstDbr";
			Stand = "AmovPercMtacSlowWpstDbr";
			turnSpeed = 4.5;
			Up = "AmovPknlMtacSrasWpstDbr";
		};
		class PistolStandActionsTacF: PistolStandActionsNoAdjust
		{
			AdjustF = "";
			Crouch = "AmovPknlMtacSrasWpstDf";
			PlayerCrouch = "AmovPknlMtacSrasWpstDf";
			Stand = "AmovPercMtacSlowWpstDf";
			turnSpeed = 4.5;
			Up = "AmovPknlMtacSrasWpstDf";
		};
		class PistolStandActionsTacFL: PistolStandActionsNoAdjust
		{
			Crouch = "AmovPknlMtacSrasWpstDfl";
			PlayerCrouch = "AmovPknlMtacSrasWpstDfl";
			Stand = "AmovPercMtacSlowWpstDfl";
			turnSpeed = 4.5;
			Up = "AmovPknlMtacSrasWpstDfl";
		};
		class PistolStandActionsTacFR: PistolStandActionsNoAdjust
		{
			Crouch = "AmovPknlMtacSrasWpstDfr";
			PlayerCrouch = "AmovPknlMtacSrasWpstDfr";
			Stand = "AmovPercMtacSlowWpstDfr";
			turnSpeed = 4.5;
			Up = "AmovPknlMtacSrasWpstDfr";
		};
		class PistolStandActionsTacL: PistolStandActionsNoAdjust
		{
			AdjustL = "";
			Crouch = "AmovPknlMtacSrasWpstDl";
			PlayerCrouch = "AmovPknlMtacSrasWpstDl";
			Stand = "AmovPercMtacSlowWpstDl";
			turnSpeed = 4.5;
			Up = "AmovPknlMtacSrasWpstDl";
		};
		class PistolStandActionsTacR: PistolStandActionsNoAdjust
		{
			AdjustR = "";
			Crouch = "AmovPknlMtacSrasWpstDr";
			PlayerCrouch = "AmovPknlMtacSrasWpstDr";
			Stand = "AmovPercMtacSlowWpstDr";
			turnSpeed = 4.5;
			Up = "AmovPknlMtacSrasWpstDr";
		};
		class PistolStandActionsWlkB: PistolStandActionsRunF
		{
			AdjustB = "";
			Crouch = "AmovPknlMwlkSrasWpstDb";
			PlayerCrouch = "AmovPknlMwlkSrasWpstDb";
			Stand = "AmovPercMwlkSlowWpstDb";
			turnSpeed = 8;
			Up = "AmovPknlMwlkSrasWpstDb";
		};
		class PistolStandActionsWlkBL: PistolStandActionsRunF
		{
			Crouch = "AmovPknlMwlkSrasWpstDbl";
			PlayerCrouch = "AmovPknlMwlkSrasWpstDbl";
			Stand = "AmovPercMwlkSlowWpstDbl";
			turnSpeed = 8;
			Up = "AmovPknlMwlkSrasWpstDbl";
		};
		class PistolStandActionsWlkBR: PistolStandActionsRunF
		{
			Crouch = "AmovPknlMwlkSrasWpstDbr";
			PlayerCrouch = "AmovPknlMwlkSrasWpstDbr";
			Stand = "AmovPercMwlkSlowWpstDbr";
			turnSpeed = 8;
			Up = "AmovPknlMwlkSrasWpstDbr";
		};
		class PistolStandActionsWlkF: PistolStandActionsRunF
		{
			Crouch = "AmovPknlMwlkSrasWpstDf";
			PlayerCrouch = "AmovPknlMwlkSrasWpstDf";
			Stand = "AmovPercMwlkSlowWpstDf";
			turnSpeed = 8;
			Up = "AmovPknlMwlkSrasWpstDf";
		};
		class PistolStandActionsWlkFL: PistolStandActionsRunF
		{
			Crouch = "AmovPknlMwlkSrasWpstDfl";
			PlayerCrouch = "AmovPknlMwlkSrasWpstDfl";
			Stand = "AmovPercMwlkSlowWpstDfl";
			turnSpeed = 8;
			Up = "AmovPknlMwlkSrasWpstDfl";
		};
		class PistolStandActionsWlkFR: PistolStandActionsRunF
		{
			Crouch = "AmovPknlMwlkSrasWpstDfr";
			PlayerCrouch = "AmovPknlMwlkSrasWpstDfr";
			Stand = "AmovPercMwlkSlowWpstDfr";
			turnSpeed = 8;
			Up = "AmovPknlMwlkSrasWpstDfr";
		};
		class PistolStandActionsWlkL: PistolStandActionsRunF
		{
			AdjustL = "";
			Crouch = "AmovPknlMwlkSrasWpstDl";
			PlayerCrouch = "AmovPknlMwlkSrasWpstDl";
			Stand = "AmovPercMwlkSlowWpstDl";
			turnSpeed = 8;
			Up = "AmovPknlMwlkSrasWpstDl";
		};
		class PistolStandActionsWlkR: PistolStandActionsRunF
		{
			AdjustR = "";
			Crouch = "AmovPknlMwlkSrasWpstDr";
			PlayerCrouch = "AmovPknlMwlkSrasWpstDr";
			Stand = "AmovPercMwlkSlowWpstDr";
			turnSpeed = 8;
			Up = "AmovPknlMwlkSrasWpstDr";
		};
		class PistolStandEvasiveActionsF: PistolStandActions
		{
			AdjustF = "AmovPercMrunSrasWpstDf";
			PlayerCrouch = "AmovPknlMevaSrasWpstDf";
			salute = "";
			Stand = "AmovPercMstpSrasWpstDnon";
			turnSpeed = 4;
			Up = "AmovPknlMevaSrasWpstDf";
		};
		class PistolStandEvasiveActionsFL: PistolStandActions
		{
			AdjustLF = "AmovPercMrunSrasWpstDfl";
			PlayerCrouch = "AmovPknlMevaSrasWpstDfl";
			salute = "";
			Stand = "AmovPercMstpSrasWpstDnon";
			turnSpeed = 4;
			Up = "AmovPknlMevaSrasWpstDfl";
		};
		class PistolStandEvasiveActionsFR: PistolStandActions
		{
			AdjustRF = "AmovPercMrunSrasWpstDfr";
			PlayerCrouch = "AmovPknlMevaSrasWpstDfr";
			salute = "";
			Stand = "AmovPercMstpSrasWpstDnon";
			turnSpeed = 4;
			Up = "AmovPknlMevaSrasWpstDfr";
		};
		class PistolStandEvasiveActionsL: PistolStandActionsRunL
		{
			Down = "AadjPpneMstpSrasWpstDleft";
			PlayerCrouch = "AmovPknlMevaSrasWpstDl";
			PlayerProne = "AadjPpneMstpSrasWpstDleft";
			turnSpeed = 4;
			Up = "AmovPknlMevaSrasWpstDl";
		};
		class PistolStandEvasiveActionsR: PistolStandActionsRunR
		{
			Down = "AadjPpneMstpSrasWpstDright";
			PlayerCrouch = "AmovPknlMevaSrasWpstDr";
			PlayerProne = "AadjPpneMstpSrasWpstDright";
			turnSpeed = 4;
			Up = "AmovPknlMevaSrasWpstDr";
		};
		class PistolStandSaluteActions: PistolStandActions
		{
			default = "AmovPercMstpSrasWpstDnon_Salute";
			salute = "AmovPercMstpSrasWpstDnon";
			stop = "AmovPercMstpSrasWpstDnon_Salute";
			stopRelaxed = "AmovPercMstpSrasWpstDnon_Salute";
		};
		class PistolStandTakeActions: PistolStandActions
		{
			default = "AinvPknlMstpSnonWnonDnon_1";
			salute = "";
			sitDown = "";
			stop = "AinvPknlMstpSnonWnonDnon_1";
			StopRelaxed = "AinvPknlMstpSnonWnonDnon_1";
		};
		class PistolWalkFActions: PistolStandActions
		{
			throwPrepare = "AmovPercMwlkSrasWpstDf";
		};
		class ReviveMedicActions: NoActions
		{
			BinocOn = "";
			Civil = "";
			Default = "";
			HandGunOn = "";
			MedicOther = "UnconsciousReviveMedic";
			PrimaryWeapon = "";
			SecondaryWeapon = "";
			Stop = "";
		};
		class ReviveWoundedActions: NoActions
		{
			Default = "UnconsciousReviveDefault";
			Stop = "UnconsciousReviveDefault";
			Unconscious = "UnconsciousReviveDefault";
		};
		class ReviveWoundedDefaultActions: NoActions
		{
			BinocOn = "UnconsciousOutProne";
			Civil = "UnconsciousOutProne";
			Default = "UnconsciousReviveDefault";
			HandGunOn = "UnconsciousOutProne";
			PrimaryWeapon = "UnconsciousOutProne";
			SecondaryWeapon = "UnconsciousOutProne";
			Stop = "UnconsciousReviveDefault";
			Unconscious = "UnconsciousReviveDefault";
		};
		class RifleAdjustBKneelActions: RifleAdjustKneelBaseActions
		{
			AdjustB = "AadjPpneMstpSrasWrflDup";
			AdjustF = "AmovPknlMstpSrasWrflDnon";
			Combat = "AadjPknlMstpSrasWrflDdown";
			default = "AadjPknlMstpSrasWrflDdown";
			downDegree = "ManPosCombat";
			FastB = "AadjPknlMrunSrasWrflDb_down";
			FastF = "AadjPknlMevaSrasWrflDf_down";
			FastL = "AadjPknlMrunSrasWrflDl_down";
			FastLB = "AadjPknlMrunSrasWrflDbl_down";
			FastLF = "AadjPknlMevaSrasWrflDfl_down";
			FastR = "AadjPknlMrunSrasWrflDr_down";
			FastRB = "AadjPknlMrunSrasWrflDbr_down";
			FastRF = "AadjPknlMevaSrasWrflDfr_down";
			FireNotPossible = "AadjPknlMstpSrasWrflDdown";
			PlayerCrouch = "AmovPknlMstpSrasWrflDnon";
			PlayerSlowB = "AadjPknlMrunSrasWrflDb_down";
			PlayerSlowF = "AadjPknlMrunSrasWrflDf_down";
			PlayerSlowL = "AadjPknlMrunSrasWrflDl_down";
			PlayerSlowLB = "AadjPknlMrunSrasWrflDbl_down";
			PlayerSlowLF = "AadjPknlMrunSrasWrflDfl_down";
			PlayerSlowR = "AadjPknlMrunSrasWrflDr_down";
			PlayerSlowRB = "AadjPknlMrunSrasWrflDbr_down";
			PlayerSlowRF = "AadjPknlMrunSrasWrflDfr_down";
			PlayerStand = "AadjPercMstpSrasWrflDdown";
			PlayerTactB = "AadjPknlMtacSrasWrflDb_down";
			PlayerTactF = "AadjPknlMtacSrasWrflDf_down";
			PlayerTactL = "AadjPknlMtacSrasWrflDl_down";
			PlayerTactLB = "AadjPknlMtacSrasWrflDbl_down";
			PlayerTactLF = "AadjPknlMtacSrasWrflDfl_down";
			PlayerTactR = "AadjPknlMtacSrasWrflDr_down";
			PlayerTactRB = "AadjPknlMtacSrasWrflDbr_down";
			PlayerTactRF = "AadjPknlMtacSrasWrflDfr_down";
			PlayerWalkB = "AadjPknlMwlkSrasWrflDb_down";
			PlayerWalkF = "AadjPknlMwlkSrasWrflDf_down";
			PlayerWalkL = "AadjPknlMwlkSrasWrflDl_down";
			PlayerWalkLB = "AadjPknlMwlkSrasWrflDbl_down";
			PlayerWalkLF = "AadjPknlMwlkSrasWrflDfl_down";
			PlayerWalkR = "AadjPknlMwlkSrasWrflDr_down";
			PlayerWalkRB = "AadjPknlMwlkSrasWrflDbr_down";
			PlayerWalkRF = "AadjPknlMwlkSrasWrflDfr_down";
			SlowB = "AadjPknlMrunSrasWrflDb_down";
			SlowF = "AadjPknlMrunSrasWrflDf_down";
			SlowL = "AadjPknlMrunSrasWrflDl_down";
			SlowLB = "AadjPknlMrunSrasWrflDbl_down";
			SlowLF = "AadjPknlMrunSrasWrflDfl_down";
			SlowR = "AadjPknlMrunSrasWrflDr_down";
			SlowRB = "AadjPknlMrunSrasWrflDbr_down";
			SlowRF = "AadjPknlMrunSrasWrflDfr_down";
			Stand = "AmovPknlMstpSlowWrflDnon";
			stop = "AadjPknlMstpSrasWrflDdown";
			StopRelaxed = "AadjPknlMstpSrasWrflDdown";
			TactB = "AadjPknlMtacSrasWrflDb_down";
			TactF = "AadjPknlMtacSrasWrflDf_down";
			TactL = "AadjPknlMtacSrasWrflDl_down";
			TactLB = "AadjPknlMtacSrasWrflDbl_down";
			TactLF = "AadjPknlMtacSrasWrflDfl_down";
			TactR = "AadjPknlMtacSrasWrflDr_down";
			TactRB = "AadjPknlMtacSrasWrflDbr_down";
			TactRF = "AadjPknlMtacSrasWrflDfr_down";
			turnL = "AadjPknlMstpSrasWrflDdown";
			turnLRelaxed = "AadjPknlMstpSrasWrflDdown";
			turnR = "AadjPknlMstpSrasWrflDdown";
			turnRRelaxed = "AadjPknlMstpSrasWrflDdown";
			up = "AadjPercMstpSrasWrflDdown";
			WalkB = "AadjPknlMwlkSrasWrflDb_down";
			WalkF = "AadjPknlMwlkSrasWrflDf_down";
			WalkL = "AadjPknlMwlkSrasWrflDl_down";
			WalkLB = "AadjPknlMwlkSrasWrflDbl_down";
			WalkLF = "AadjPknlMwlkSrasWrflDfl_down";
			WalkR = "AadjPknlMwlkSrasWrflDr_down";
			WalkRB = "AadjPknlMwlkSrasWrflDbr_down";
			WalkRF = "AadjPknlMwlkSrasWrflDfr_down";
		};
		class RifleAdjustBKneelActionsRunB: RifleAdjustBKneelActions
		{
			AdjustB = "";
			AdjustF = "";
			AdjustL = "";
			AdjustR = "";
			PlayerCrouch = "AadjPknlMtacSrasWrflDb_down";
			PlayerStand = "AadjPercMrunSrasWrflDb_down";
			Up = "AadjPercMrunSrasWrflDb_down";
		};
		class RifleAdjustBKneelActionsRunBL: RifleAdjustBKneelActions
		{
			AdjustB = "";
			AdjustF = "";
			AdjustL = "";
			AdjustR = "";
			PlayerCrouch = "AadjPknlMtacSrasWrflDbl_down";
			PlayerStand = "AadjPercMrunSrasWrflDbl_down";
			Up = "AadjPercMrunSrasWrflDbl_down";
		};
		class RifleAdjustBKneelActionsRunBR: RifleAdjustBKneelActions
		{
			AdjustB = "";
			AdjustF = "";
			AdjustL = "";
			AdjustR = "";
			PlayerCrouch = "AadjPknlMtacSrasWrflDbr_down";
			PlayerStand = "AadjPercMrunSrasWrflDbr_down";
		};
		class RifleAdjustBKneelActionsRunF: RifleAdjustBKneelActions
		{
			AdjustB = "";
			AdjustF = "";
			AdjustL = "";
			AdjustR = "";
			PlayerCrouch = "AadjPknlMtacSrasWrflDf_down";
			PlayerStand = "AadjPercMrunSrasWrflDf_down";
			Up = "AadjPercMrunSrasWrflDf_down";
		};
		class RifleAdjustBKneelActionsRunFL: RifleAdjustBKneelActions
		{
			AdjustB = "";
			AdjustF = "";
			AdjustL = "";
			AdjustR = "";
			PlayerCrouch = "AadjPknlMtacSrasWrflDfl_down";
			PlayerStand = "AadjPercMrunSrasWrflDfl_down";
			Up = "AadjPercMrunSrasWrflDfl_down";
		};
		class RifleAdjustBKneelActionsRunFR: RifleAdjustBKneelActions
		{
			AdjustB = "";
			AdjustF = "";
			AdjustL = "";
			AdjustR = "";
			PlayerCrouch = "AadjPknlMtacSrasWrflDfr_down";
			PlayerStand = "AadjPercMrunSrasWrflDfr_down";
			Up = "AadjPercMrunSrasWrflDfr_down";
		};
		class RifleAdjustBKneelActionsRunL: RifleAdjustBKneelActions
		{
			AdjustB = "";
			AdjustF = "";
			AdjustL = "";
			AdjustR = "";
			PlayerCrouch = "AadjPknlMtacSrasWrflDl_down";
			PlayerStand = "AadjPercMrunSrasWrflDl_down";
			Up = "AadjPercMrunSrasWrflDl_down";
		};
		class RifleAdjustBKneelActionsRunR: RifleAdjustBKneelActions
		{
			AdjustB = "";
			AdjustF = "";
			AdjustL = "";
			AdjustR = "";
			PlayerCrouch = "AadjPknlMtacSrasWrflDr_down";
			PlayerStand = "AadjPercMrunSrasWrflDr_down";
			Up = "AadjPercMrunSrasWrflDr_down";
		};
		class RifleAdjustBKneelActionsTacB: RifleAdjustBKneelActions
		{
			AdjustB = "";
			AdjustF = "";
			AdjustL = "";
			AdjustR = "";
			PlayerCrouch = "AadjPknlMrunSrasWrflDb_down";
			PlayerStand = "AadjPercMtacSrasWrflDb_down";
			Up = "AadjPercMtacSrasWrflDb_down";
		};
		class RifleAdjustBKneelActionsTacBL: RifleAdjustBKneelActions
		{
			AdjustB = "";
			AdjustF = "";
			AdjustL = "";
			AdjustR = "";
			PlayerCrouch = "AadjPknlMrunSrasWrflDbl_down";
			PlayerStand = "AadjPercMtacSrasWrflDbl_down";
			Up = "AadjPercMtacSrasWrflDbl_down";
		};
		class RifleAdjustBKneelActionsTacBR: RifleAdjustBKneelActions
		{
			AdjustB = "";
			AdjustF = "";
			AdjustL = "";
			AdjustR = "";
			PlayerCrouch = "AadjPknlMrunSrasWrflDbr_down";
			PlayerStand = "AadjPercMtacSrasWrflDbr_down";
		};
		class RifleAdjustBKneelActionsTacF: RifleAdjustBKneelActions
		{
			AdjustB = "";
			AdjustF = "";
			AdjustL = "";
			AdjustR = "";
			PlayerCrouch = "AadjPknlMrunSrasWrflDf_down";
			PlayerStand = "AadjPercMtacSrasWrflDf_down";
			Up = "AadjPercMtacSrasWrflDf_down";
		};
		class RifleAdjustBKneelActionsTacFL: RifleAdjustBKneelActions
		{
			AdjustB = "";
			AdjustF = "";
			AdjustL = "";
			AdjustR = "";
			PlayerCrouch = "AadjPknlMrunSrasWrflDfl_down";
			PlayerStand = "AadjPercMtacSrasWrflDfl_down";
			Up = "AadjPercMtacSrasWrflDfl_down";
		};
		class RifleAdjustBKneelActionsTacFR: RifleAdjustBKneelActions
		{
			AdjustB = "";
			AdjustF = "";
			AdjustL = "";
			AdjustR = "";
			PlayerCrouch = "AadjPknlMrunSrasWrflDfr_down";
			PlayerStand = "AadjPercMtacSrasWrflDfr_down";
			Up = "AadjPercMtacSrasWrflDfr_down";
		};
		class RifleAdjustBKneelActionsTacL: RifleAdjustBKneelActions
		{
			AdjustB = "";
			AdjustF = "";
			AdjustL = "";
			AdjustR = "";
			PlayerCrouch = "AadjPknlMrunSrasWrflDl_down";
			PlayerStand = "AadjPercMtacSrasWrflDl_down";
			Up = "AadjPercMtacSrasWrflDl_down";
		};
		class RifleAdjustBKneelActionsTacR: RifleAdjustBKneelActions
		{
			AdjustB = "";
			AdjustF = "";
			AdjustL = "";
			AdjustR = "";
			PlayerCrouch = "AadjPknlMrunSrasWrflDr_down";
			PlayerStand = "AadjPercMtacSrasWrflDr_down";
			Up = "AadjPercMtacSrasWrflDr_down";
		};
		class RifleAdjustBKneelActionsWlkB: RifleAdjustBKneelActions
		{
			AdjustB = "";
			AdjustF = "";
			AdjustL = "";
			AdjustR = "";
			PlayerStand = "AadjPercMwlkSrasWrflDb_down";
			Up = "AadjPercMwlkSrasWrflDb_down";
		};
		class RifleAdjustBKneelActionsWlkBL: RifleAdjustBKneelActions
		{
			AdjustB = "";
			AdjustF = "";
			AdjustL = "";
			AdjustR = "";
			PlayerStand = "AadjPercMwlkSrasWrflDbl_down";
			Up = "AadjPercMwlkSrasWrflDbl_down";
		};
		class RifleAdjustBKneelActionsWlkBR: RifleAdjustBKneelActions
		{
			AdjustB = "";
			AdjustF = "";
			AdjustL = "";
			AdjustR = "";
			PlayerStand = "AadjPercMwlkSrasWrflDbr_down";
			Stand = "AadjPknlMwlkSrasWrflDbr_down";
			Up = "AadjPercMwlkSrasWrflDbr_down";
		};
		class RifleAdjustBKneelActionsWlkF: RifleAdjustBKneelActions
		{
			AdjustB = "";
			AdjustF = "";
			AdjustL = "";
			AdjustR = "";
			PlayerStand = "AadjPercMwlkSrasWrflDf_down";
			Up = "AadjPercMwlkSrasWrflDf_down";
		};
		class RifleAdjustBKneelActionsWlkFL: RifleAdjustBKneelActions
		{
			AdjustB = "";
			AdjustF = "";
			AdjustL = "";
			AdjustR = "";
			PlayerStand = "AadjPercMwlkSrasWrflDfl_down";
			Up = "AadjPercMwlkSrasWrflDfl_down";
		};
		class RifleAdjustBKneelActionsWlkFR: RifleAdjustBKneelActions
		{
			AdjustB = "";
			AdjustF = "";
			AdjustL = "";
			AdjustR = "";
			PlayerStand = "AadjPercMwlkSrasWrflDfr_down";
			Up = "AadjPercMwlkSrasWrflDfr_down";
		};
		class RifleAdjustBKneelActionsWlkL: RifleAdjustBKneelActions
		{
			AdjustB = "";
			AdjustF = "";
			AdjustL = "";
			AdjustR = "";
			PlayerStand = "AadjPercMwlkSrasWrflDl_down";
			Up = "AadjPercMwlkSrasWrflDl_down";
		};
		class RifleAdjustBKneelActionsWlkR: RifleAdjustBKneelActions
		{
			AdjustB = "";
			AdjustF = "";
			AdjustL = "";
			AdjustR = "";
			PlayerStand = "AadjPercMwlkSrasWrflDr_down";
			Up = "AadjPercMwlkSrasWrflDr_down";
		};
		class RifleAdjustBKneelEvasiveActionsF: RifleAdjustBKneelActions
		{
			AdjustB = "";
			AdjustF = "";
			AdjustL = "";
			AdjustR = "";
			PlayerStand = "AadjPercMevaSrasWrflDf_down";
			Up = "AadjPercMevaSrasWrflDf_down";
		};
		class RifleAdjustBKneelEvasiveActionsFL: RifleAdjustBKneelActions
		{
			AdjustB = "";
			AdjustF = "";
			AdjustL = "";
			AdjustR = "";
			PlayerStand = "AadjPercMevaSrasWrflDfl_down";
			Up = "AadjPercMevaSrasWrflDfl_down";
		};
		class RifleAdjustBKneelEvasiveActionsFR: RifleAdjustBKneelActions
		{
			AdjustB = "";
			AdjustF = "";
			AdjustL = "";
			AdjustR = "";
			PlayerStand = "AadjPercMevaSrasWrflDfr_down";
			Up = "AadjPercMevaSrasWrflDfr_down";
		};
		class RifleAdjustBProneActions: RifleAdjustProneBaseActions
		{
			AdjustF = "AmovPpneMstpSrasWrflDnon";
			Combat = "AadjPpneMstpSrasWrflDdown";
			default = "AadjPpneMstpSrasWrflDdown";
			EvasiveLeft = "AadjPpneMstpSrasWrflDdown";
			EvasiveRight = "AadjPpneMstpSrasWrflDdown";
			FastB = "AadjPpneMstpSrasWrflDdown";
			FastF = "AadjPpneMstpSrasWrflDdown";
			FastL = "AadjPpneMstpSrasWrflDdown";
			FastLB = "AadjPpneMstpSrasWrflDdown";
			FastLF = "AadjPpneMstpSrasWrflDdown";
			FastR = "AadjPpneMstpSrasWrflDdown";
			FastRB = "AadjPpneMstpSrasWrflDdown";
			FastRF = "AadjPpneMstpSrasWrflDdown";
			Gear = "";
			leanLRot = 0.1;
			leanLShift = 0.1;
			leanRRot = 0.1;
			leanRShift = 0.1;
			limitFast = 3.5;
			PlayerProne = "AmovPpneMstpSrasWrflDnon";
			PlayerSlowB = "AadjPpneMstpSrasWrflDdown";
			PlayerSlowF = "AadjPpneMstpSrasWrflDdown";
			PlayerSlowL = "AadjPpneMstpSrasWrflDdown";
			PlayerSlowLB = "AadjPpneMstpSrasWrflDdown";
			PlayerSlowLF = "AadjPpneMstpSrasWrflDdown";
			PlayerSlowR = "AadjPpneMstpSrasWrflDdown";
			PlayerSlowRB = "AadjPpneMstpSrasWrflDdown";
			PlayerSlowRF = "AadjPpneMstpSrasWrflDdown";
			PlayerTactB = "AadjPpneMstpSrasWrflDdown";
			PlayerTactF = "AadjPpneMstpSrasWrflDdown";
			PlayerTactL = "AadjPpneMstpSrasWrflDdown";
			PlayerTactLB = "AadjPpneMstpSrasWrflDdown";
			PlayerTactLF = "AadjPpneMstpSrasWrflDdown";
			PlayerTactR = "AadjPpneMstpSrasWrflDdown";
			PlayerTactRB = "AadjPpneMstpSrasWrflDdown";
			PlayerTactRF = "AadjPpneMstpSrasWrflDdown";
			PlayerWalkB = "AadjPpneMstpSrasWrflDdown";
			PlayerWalkF = "AadjPpneMstpSrasWrflDdown";
			PlayerWalkL = "AadjPpneMstpSrasWrflDdown";
			PlayerWalkLB = "AadjPpneMstpSrasWrflDdown";
			PlayerWalkLF = "AadjPpneMstpSrasWrflDdown";
			PlayerWalkR = "AadjPpneMstpSrasWrflDdown";
			PlayerWalkRB = "AadjPpneMstpSrasWrflDdown";
			PlayerWalkRF = "AadjPpneMstpSrasWrflDdown";
			putDown = "AmovPpneMstpSrasWrflDnon";
			ReloadGM6[] = {"GestureReloadGM6", "Gesture"};
			reloadMGun = "";
			reloadMortar = "";
			SlowB = "AadjPpneMstpSrasWrflDdown";
			SlowF = "AadjPpneMstpSrasWrflDdown";
			SlowL = "AadjPpneMstpSrasWrflDdown";
			SlowLB = "AadjPpneMstpSrasWrflDdown";
			SlowLF = "AadjPpneMstpSrasWrflDdown";
			SlowR = "AadjPpneMstpSrasWrflDdown";
			SlowRB = "AadjPpneMstpSrasWrflDdown";
			SlowRF = "AadjPpneMstpSrasWrflDdown";
			stop = "AadjPpneMstpSrasWrflDdown";
			stopRelaxed = "AadjPpneMstpSrasWrflDdown";
			strokeGun = "";
			TactB = "AadjPpneMstpSrasWrflDdown";
			TactF = "AadjPpneMstpSrasWrflDdown";
			TactL = "AadjPpneMstpSrasWrflDdown";
			TactLB = "AadjPpneMstpSrasWrflDdown";
			TactLF = "AadjPpneMstpSrasWrflDdown";
			TactR = "AadjPpneMstpSrasWrflDdown";
			TactRB = "AadjPpneMstpSrasWrflDdown";
			TactRF = "AadjPpneMstpSrasWrflDdown";
			throwGrenade[] = {"GestureThrowGrenade", "Gesture"};
			throwPrepare = "";
			turnL = "AadjPpneMstpSrasWrflDdown_turnL";
			turnLRelaxed = "AadjPpneMstpSrasWrflDdown_turnL";
			turnR = "AadjPpneMstpSrasWrflDdown_turnR";
			turnRRelaxed = "AadjPpneMstpSrasWrflDdown_turnR";
			WalkB = "AadjPpneMstpSrasWrflDdown";
			WalkF = "AadjPpneMstpSrasWrflDdown";
			WalkL = "AadjPpneMstpSrasWrflDdown";
			WalkLB = "AadjPpneMstpSrasWrflDdown";
			WalkLF = "AadjPpneMstpSrasWrflDdown";
			WalkR = "AadjPpneMstpSrasWrflDdown";
			WalkRB = "AadjPpneMstpSrasWrflDdown";
			WalkRF = "AadjPpneMstpSrasWrflDdown";
		};
		class RifleAdjustBStandActions: RifleAdjustStandBaseActions
		{
			AdjustB = "AadjPknlMstpSrasWrflDup";
			AdjustF = "AmovPercMstpSrasWrflDnon";
			AdjustL = "AadjPercMstpSrasWrflDleft";
			AdjustR = "AadjPercMstpSrasWrflDright";
			Combat = "AadjPercMstpSrasWrflDdown";
			Crouch = "AadjPknlMstpSrasWrflDdown";
			default = "AadjPercMstpSrasWrflDdown";
			downDegree = "ManPosCombat";
			FastB = "AadjPercMrunSrasWrflDb_down";
			FastF = "AadjPercMevaSrasWrflDf_down";
			FastL = "AadjPercMrunSrasWrflDl_down";
			FastLB = "AadjPercMrunSrasWrflDbl_down";
			FastLF = "AadjPercMevaSrasWrflDfl_down";
			FastR = "AadjPercMrunSrasWrflDr_down";
			FastRB = "AadjPercMrunSrasWrflDbr_down";
			FastRF = "AadjPercMevaSrasWrflDfr_down";
			FireNotPossible = "AadjPercMstpSrasWrflDdown";
			PlayerCrouch = "AadjPknlMstpSrasWrflDdown";
			PlayerSlowB = "AadjPercMrunSrasWrflDb_down";
			PlayerSlowF = "AadjPercMrunSrasWrflDf_down";
			PlayerSlowL = "AadjPercMrunSrasWrflDl_down";
			PlayerSlowLB = "AadjPercMrunSrasWrflDbl_down";
			PlayerSlowLF = "AadjPercMrunSrasWrflDfl_down";
			PlayerSlowR = "AadjPercMrunSrasWrflDr_down";
			PlayerSlowRB = "AadjPercMrunSrasWrflDbr_down";
			PlayerSlowRF = "AadjPercMrunSrasWrflDfr_down";
			PlayerTactB = "AadjPercMtacSrasWrflDb_down";
			PlayerTactF = "AadjPercMtacSrasWrflDf_down";
			PlayerTactL = "AadjPercMtacSrasWrflDl_down";
			PlayerTactLB = "AadjPercMtacSrasWrflDbl_down";
			PlayerTactLF = "AadjPercMtacSrasWrflDfl_down";
			PlayerTactR = "AadjPercMtacSrasWrflDr_down";
			PlayerTactRB = "AadjPercMtacSrasWrflDbr_down";
			PlayerTactRF = "AadjPercMtacSrasWrflDfr_down";
			PlayerWalkB = "AadjPercMwlkSrasWrflDb_down";
			PlayerWalkF = "AadjPercMwlkSrasWrflDf_down";
			PlayerWalkL = "AadjPercMwlkSrasWrflDl_down";
			PlayerWalkLB = "AadjPercMwlkSrasWrflDbl_down";
			PlayerWalkLF = "AadjPercMwlkSrasWrflDfl_down";
			PlayerWalkR = "AadjPercMwlkSrasWrflDr_down";
			PlayerWalkRB = "AadjPercMwlkSrasWrflDbr_down";
			PlayerWalkRF = "AadjPercMwlkSrasWrflDfr_down";
			SlowB = "AadjPercMrunSrasWrflDb_down";
			SlowF = "AadjPercMrunSrasWrflDf_down";
			SlowL = "AadjPercMrunSrasWrflDl_down";
			SlowLB = "AadjPercMrunSrasWrflDbl_down";
			SlowLF = "AadjPercMrunSrasWrflDfl_down";
			SlowR = "AadjPercMrunSrasWrflDr_down";
			SlowRB = "AadjPercMrunSrasWrflDbr_down";
			SlowRF = "AadjPercMrunSrasWrflDfr_down";
			stop = "AadjPercMstpSrasWrflDdown";
			StopRelaxed = "AadjPercMstpSrasWrflDdown";
			TactB = "AadjPercMtacSrasWrflDb_down";
			TactF = "AadjPercMtacSrasWrflDf_down";
			TactL = "AadjPercMtacSrasWrflDl_down";
			TactLB = "AadjPercMtacSrasWrflDbl_down";
			TactLF = "AadjPercMtacSrasWrflDfl_down";
			TactR = "AadjPercMtacSrasWrflDr_down";
			TactRB = "AadjPercMtacSrasWrflDbr_down";
			TactRF = "AadjPercMtacSrasWrflDfr_down";
			turnL = "AadjPercMstpSrasWrflDdown";
			turnLRelaxed = "AadjPercMstpSrasWrflDdown";
			turnR = "AadjPercMstpSrasWrflDdown";
			turnRRelaxed = "AadjPercMstpSrasWrflDdown";
			up = "AadjPknlMstpSrasWrflDdown";
			WalkB = "AadjPercMwlkSrasWrflDb_down";
			WalkF = "AadjPercMwlkSrasWrflDf_down";
			WalkL = "AadjPercMwlkSrasWrflDl_down";
			WalkLB = "AadjPercMwlkSrasWrflDbl_down";
			WalkLF = "AadjPercMwlkSrasWrflDfl_down";
			WalkR = "AadjPercMwlkSrasWrflDr_down";
			WalkRB = "AadjPercMwlkSrasWrflDbr_down";
			WalkRF = "AadjPercMwlkSrasWrflDfr_down";
		};
		class RifleAdjustBStandActionsRunB: RifleAdjustBStandActions
		{
			AdjustB = "";
			AdjustF = "";
			AdjustL = "";
			AdjustR = "";
			PlayerCrouch = "AadjPknlMrunSrasWrflDb_down";
			PlayerStand = "AadjPercMtacSrasWrflDb_down";
			Up = "AadjPknlMrunSrasWrflDb_down";
		};
		class RifleAdjustBStandActionsRunBL: RifleAdjustBStandActions
		{
			AdjustB = "";
			AdjustF = "";
			AdjustL = "";
			AdjustR = "";
			PlayerCrouch = "AadjPknlMrunSrasWrflDbl_down";
			PlayerStand = "AadjPercMtacSrasWrflDbl_down";
			Up = "AadjPknlMrunSrasWrflDbl_down";
		};
		class RifleAdjustBStandActionsRunBR: RifleAdjustBStandActions
		{
			AdjustB = "";
			AdjustF = "";
			AdjustL = "";
			AdjustR = "";
			PlayerCrouch = "AadjPknlMrunSrasWrflDbr_down";
			PlayerStand = "AadjPercMtacSrasWrflDbr_down";
		};
		class RifleAdjustBStandActionsRunF: RifleAdjustBStandActions
		{
			AdjustB = "";
			AdjustF = "";
			AdjustL = "";
			AdjustR = "";
			PlayerCrouch = "AadjPknlMrunSrasWrflDf_down";
			PlayerStand = "AadjPercMtacSrasWrflDf_down";
			Up = "AadjPknlMrunSrasWrflDf_down";
		};
		class RifleAdjustBStandActionsRunFL: RifleAdjustBStandActions
		{
			AdjustB = "";
			AdjustF = "";
			AdjustL = "";
			AdjustR = "";
			PlayerCrouch = "AadjPknlMrunSrasWrflDfl_down";
			PlayerStand = "AadjPercMtacSrasWrflDfl_down";
			Up = "AadjPknlMrunSrasWrflDfl_down";
		};
		class RifleAdjustBStandActionsRunFR: RifleAdjustBStandActions
		{
			AdjustB = "";
			AdjustF = "";
			AdjustL = "";
			AdjustR = "";
			PlayerCrouch = "AadjPknlMrunSrasWrflDfr_down";
			PlayerStand = "AadjPercMtacSrasWrflDfr_down";
			Up = "AadjPknlMrunSrasWrflDfr_down";
		};
		class RifleAdjustBStandActionsRunL: RifleAdjustBStandActions
		{
			AdjustB = "";
			AdjustF = "";
			AdjustL = "";
			AdjustR = "";
			PlayerCrouch = "AadjPknlMrunSrasWrflDl_down";
			PlayerStand = "AadjPercMtacSrasWrflDl_down";
			Up = "AadjPknlMrunSrasWrflDl_down";
		};
		class RifleAdjustBStandActionsRunR: RifleAdjustBStandActions
		{
			AdjustB = "";
			AdjustF = "";
			AdjustL = "";
			AdjustR = "";
			PlayerCrouch = "AadjPknlMrunSrasWrflDr_down";
			PlayerStand = "AadjPercMtacSrasWrflDr_down";
			Up = "AadjPknlMrunSrasWrflDr_down";
		};
		class RifleAdjustBStandActionsTacB: RifleAdjustBStandActions
		{
			AdjustB = "";
			AdjustF = "";
			AdjustL = "";
			AdjustR = "";
			PlayerCrouch = "AadjPknlMtacSrasWrflDb_down";
			PlayerStand = "AadjPercMrunSrasWrflDb_down";
			Up = "AadjPknlMtacSrasWrflDb_down";
		};
		class RifleAdjustBStandActionsTacBL: RifleAdjustBStandActions
		{
			AdjustB = "";
			AdjustF = "";
			AdjustL = "";
			AdjustR = "";
			PlayerCrouch = "AadjPknlMtacSrasWrflDbl_down";
			PlayerStand = "AadjPercMrunSrasWrflDbl_down";
			Up = "AadjPknlMtacSrasWrflDbl_down";
		};
		class RifleAdjustBStandActionsTacBR: RifleAdjustBStandActions
		{
			AdjustB = "";
			AdjustF = "";
			AdjustL = "";
			AdjustR = "";
			PlayerCrouch = "AadjPknlMtacSrasWrflDbr_down";
			PlayerStand = "AadjPercMrunSrasWrflDbr_down";
		};
		class RifleAdjustBStandActionsTacF: RifleAdjustBStandActions
		{
			AdjustB = "";
			AdjustF = "";
			AdjustL = "";
			AdjustR = "";
			PlayerCrouch = "AadjPknlMtacSrasWrflDf_down";
			PlayerStand = "AadjPercMrunSrasWrflDf_down";
			Up = "AadjPknlMtacSrasWrflDf_down";
		};
		class RifleAdjustBStandActionsTacFL: RifleAdjustBStandActions
		{
			AdjustB = "";
			AdjustF = "";
			AdjustL = "";
			AdjustR = "";
			PlayerCrouch = "AadjPknlMtacSrasWrflDfl_down";
			PlayerStand = "AadjPercMrunSrasWrflDfl_down";
			Up = "AadjPknlMtacSrasWrflDfl_down";
		};
		class RifleAdjustBStandActionsTacFR: RifleAdjustBStandActions
		{
			AdjustB = "";
			AdjustF = "";
			AdjustL = "";
			AdjustR = "";
			PlayerCrouch = "AadjPknlMtacSrasWrflDfr_down";
			PlayerStand = "AadjPercMrunSrasWrflDfr_down";
			Up = "AadjPknlMtacSrasWrflDfr_down";
		};
		class RifleAdjustBStandActionsTacL: RifleAdjustBStandActions
		{
			AdjustB = "";
			AdjustF = "";
			AdjustL = "";
			AdjustR = "";
			PlayerCrouch = "AadjPknlMtacSrasWrflDl_down";
			PlayerStand = "AadjPercMrunSrasWrflDl_down";
			Up = "AadjPknlMtacSrasWrflDl_down";
		};
		class RifleAdjustBStandActionsTacR: RifleAdjustBStandActions
		{
			AdjustB = "";
			AdjustF = "";
			AdjustL = "";
			AdjustR = "";
			PlayerCrouch = "AadjPknlMtacSrasWrflDr_down";
			PlayerStand = "AadjPercMrunSrasWrflDr_down";
			Up = "AadjPknlMtacSrasWrflDr_down";
		};
		class RifleAdjustBStandActionsWlkB: RifleAdjustBStandActions
		{
			AdjustB = "";
			AdjustF = "";
			AdjustL = "";
			AdjustR = "";
			PlayerCrouch = "AadjPknlMwlkSrasWrflDb_down";
			Up = "AadjPknlMwlkSrasWrflDb_down";
		};
		class RifleAdjustBStandActionsWlkBL: RifleAdjustBStandActions
		{
			AdjustB = "";
			AdjustF = "";
			AdjustL = "";
			AdjustR = "";
			PlayerCrouch = "AadjPknlMwlkSrasWrflDbl_down";
			Up = "AadjPknlMwlkSrasWrflDbl_down";
		};
		class RifleAdjustBStandActionsWlkBR: RifleAdjustBStandActions
		{
			AdjustB = "";
			AdjustF = "";
			AdjustL = "";
			AdjustR = "";
			PlayerCrouch = "AadjPknlMwlkSrasWrflDbr_down";
			Stand = "AadjPercMwlkSrasWrflDbr_down";
			Up = "AadjPknlMwlkSrasWrflDbr_down";
		};
		class RifleAdjustBStandActionsWlkF: RifleAdjustBStandActions
		{
			AdjustB = "";
			AdjustF = "";
			AdjustL = "";
			AdjustR = "";
			PlayerCrouch = "AadjPknlMwlkSrasWrflDf_down";
			Up = "AadjPknlMwlkSrasWrflDf_down";
		};
		class RifleAdjustBStandActionsWlkFL: RifleAdjustBStandActions
		{
			AdjustB = "";
			AdjustF = "";
			AdjustL = "";
			AdjustR = "";
			PlayerCrouch = "AadjPknlMwlkSrasWrflDfl_down";
			Up = "AadjPknlMwlkSrasWrflDfl_down";
		};
		class RifleAdjustBStandActionsWlkFR: RifleAdjustBStandActions
		{
			AdjustB = "";
			AdjustF = "";
			AdjustL = "";
			AdjustR = "";
			PlayerCrouch = "AadjPknlMwlkSrasWrflDfr_down";
			Up = "AadjPknlMwlkSrasWrflDfr_down";
		};
		class RifleAdjustBStandActionsWlkL: RifleAdjustBStandActions
		{
			AdjustB = "";
			AdjustF = "";
			AdjustL = "";
			AdjustR = "";
			PlayerCrouch = "AadjPknlMwlkSrasWrflDl_down";
			Up = "AadjPknlMwlkSrasWrflDl_down";
		};
		class RifleAdjustBStandActionsWlkR: RifleAdjustBStandActions
		{
			AdjustB = "";
			AdjustF = "";
			AdjustL = "";
			AdjustR = "";
			PlayerCrouch = "AadjPknlMwlkSrasWrflDr_down";
			Up = "AadjPknlMwlkSrasWrflDr_down";
		};
		class RifleAdjustBStandEvasiveActionsF: RifleAdjustBStandActions
		{
			AdjustB = "";
			AdjustF = "";
			AdjustL = "";
			AdjustR = "";
			PlayerCrouch = "AadjPknlMevaSrasWrflDf_down";
			Up = "AadjPknlMevaSrasWrflDf_down";
		};
		class RifleAdjustBStandEvasiveActionsFL: RifleAdjustBStandActions
		{
			AdjustB = "";
			AdjustF = "";
			AdjustL = "";
			AdjustR = "";
			PlayerCrouch = "AadjPknlMevaSrasWrflDfl_down";
			Up = "AadjPknlMevaSrasWrflDfl_down";
		};
		class RifleAdjustBStandEvasiveActionsFR: RifleAdjustBStandActions
		{
			AdjustB = "";
			AdjustF = "";
			AdjustL = "";
			AdjustR = "";
			PlayerCrouch = "AadjPknlMevaSrasWrflDfr_down";
			Up = "AadjPknlMevaSrasWrflDfr_down";
		};
		class RifleAdjustFKneelActions: RifleAdjustKneelBaseActions
		{
			AdjustB = "AmovPknlMstpSrasWrflDnon";
			AdjustF = "AadjPercMstpSrasWrflDdown";
			Combat = "AadjPknlMstpSrasWrflDup";
			default = "AadjPknlMstpSrasWrflDup";
			FastB = "AadjPknlMrunSrasWrflDb_up";
			FastF = "AadjPknlMevaSrasWrflDf_up";
			FastL = "AadjPknlMrunSrasWrflDl_up";
			FastLB = "AadjPknlMrunSrasWrflDbl_up";
			FastLF = "AadjPknlMevaSrasWrflDfl_up";
			FastR = "AadjPknlMrunSrasWrflDr_up";
			FastRB = "AadjPknlMrunSrasWrflDbr_up";
			FastRF = "AadjPknlMevaSrasWrflDfr_up";
			FireNotPossible = "AadjPknlMstpSrasWrflDup";
			PlayerCrouch = "AmovPknlMstpSrasWrflDnon";
			PlayerSlowB = "AadjPknlMrunSrasWrflDb_up";
			PlayerSlowF = "AadjPknlMrunSrasWrflDf_up";
			PlayerSlowL = "AadjPknlMrunSrasWrflDl_up";
			PlayerSlowLB = "AadjPknlMrunSrasWrflDbl_up";
			PlayerSlowLF = "AadjPknlMrunSrasWrflDfl_up";
			PlayerSlowR = "AadjPknlMrunSrasWrflDr_up";
			PlayerSlowRB = "AadjPknlMrunSrasWrflDbr_up";
			PlayerSlowRF = "AadjPknlMrunSrasWrflDfr_up";
			PlayerStand = "AadjPercMstpSrasWrflDup";
			PlayerTactB = "AadjPknlMtacSrasWrflDb_up";
			PlayerTactF = "AadjPknlMtacSrasWrflDf_up";
			PlayerTactL = "AadjPknlMtacSrasWrflDl_up";
			PlayerTactLB = "AadjPknlMtacSrasWrflDbl_up";
			PlayerTactLF = "AadjPknlMtacSrasWrflDfl_up";
			PlayerTactR = "AadjPknlMtacSrasWrflDr_up";
			PlayerTactRB = "AadjPknlMtacSrasWrflDbr_up";
			PlayerTactRF = "AadjPknlMtacSrasWrflDfr_up";
			PlayerWalkB = "AadjPknlMwlkSrasWrflDb_up";
			PlayerWalkF = "AadjPknlMwlkSrasWrflDf_up";
			PlayerWalkL = "AadjPknlMwlkSrasWrflDl_up";
			PlayerWalkLB = "AadjPknlMwlkSrasWrflDbl_up";
			PlayerWalkLF = "AadjPknlMwlkSrasWrflDfl_up";
			PlayerWalkR = "AadjPknlMwlkSrasWrflDr_up";
			PlayerWalkRB = "AadjPknlMwlkSrasWrflDbr_up";
			PlayerWalkRF = "AadjPknlMwlkSrasWrflDfr_up";
			SlowB = "AadjPknlMrunSrasWrflDb_up";
			SlowF = "AadjPknlMrunSrasWrflDf_up";
			SlowL = "AadjPknlMrunSrasWrflDl_up";
			SlowLB = "AadjPknlMrunSrasWrflDbl_up";
			SlowLF = "AadjPknlMrunSrasWrflDfl_up";
			SlowR = "AadjPknlMrunSrasWrflDr_up";
			SlowRB = "AadjPknlMrunSrasWrflDbr_up";
			SlowRF = "AadjPknlMrunSrasWrflDfr_up";
			Stand = "AmovPknlMstpSlowWrflDnon";
			stop = "AadjPknlMstpSrasWrflDup";
			StopRelaxed = "AadjPknlMstpSrasWrflDup";
			TactB = "AadjPknlMtacSrasWrflDb_up";
			TactF = "AadjPknlMtacSrasWrflDf_up";
			TactL = "AadjPknlMtacSrasWrflDl_up";
			TactLB = "AadjPknlMtacSrasWrflDbl_up";
			TactLF = "AadjPknlMtacSrasWrflDfl_up";
			TactR = "AadjPknlMtacSrasWrflDr_up";
			TactRB = "AadjPknlMtacSrasWrflDbr_up";
			TactRF = "AadjPknlMtacSrasWrflDfr_up";
			turnL = "AadjPknlMstpSrasWrflDup";
			turnLRelaxed = "AadjPknlMstpSrasWrflDup";
			turnR = "AadjPknlMstpSrasWrflDup";
			turnRRelaxed = "AadjPknlMstpSrasWrflDup";
			up = "AadjPercMstpSrasWrflDup";
			upDegree = "ManPosCombat";
			WalkB = "AadjPknlMwlkSrasWrflDb_up";
			WalkF = "AadjPknlMwlkSrasWrflDf_up";
			WalkL = "AadjPknlMwlkSrasWrflDl_up";
			WalkLB = "AadjPknlMwlkSrasWrflDbl_up";
			WalkLF = "AadjPknlMwlkSrasWrflDfl_up";
			WalkR = "AadjPknlMwlkSrasWrflDr_up";
			WalkRB = "AadjPknlMwlkSrasWrflDbr_up";
			WalkRF = "AadjPknlMwlkSrasWrflDfr_up";
		};
		class RifleAdjustFKneelActionsRunB: RifleAdjustFKneelActions
		{
			AdjustB = "";
			AdjustF = "";
			AdjustL = "";
			AdjustR = "";
			PlayerCrouch = "AadjPknlMtacSrasWrflDb_up";
			PlayerStand = "AadjPercMrunSrasWrflDb_up";
			Up = "AadjPercMrunSrasWrflDb_up";
		};
		class RifleAdjustFKneelActionsRunBL: RifleAdjustFKneelActions
		{
			AdjustB = "";
			AdjustF = "";
			AdjustL = "";
			AdjustR = "";
			PlayerCrouch = "AadjPknlMtacSrasWrflDbl_up";
			PlayerStand = "AadjPercMrunSrasWrflDbl_up";
			Up = "AadjPercMrunSrasWrflDbl_up";
		};
		class RifleAdjustFKneelActionsRunBR: RifleAdjustFKneelActions
		{
			AdjustB = "";
			AdjustF = "";
			AdjustL = "";
			AdjustR = "";
			PlayerCrouch = "AadjPknlMtacSrasWrflDbr_up";
			PlayerStand = "AadjPercMrunSrasWrflDbr_up";
		};
		class RifleAdjustFKneelActionsRunF: RifleAdjustFKneelActions
		{
			AdjustB = "";
			AdjustF = "";
			AdjustL = "";
			AdjustR = "";
			PlayerCrouch = "AadjPknlMtacSrasWrflDf_up";
			PlayerStand = "AadjPercMrunSrasWrflDf_up";
			Up = "AadjPercMrunSrasWrflDf_up";
		};
		class RifleAdjustFKneelActionsRunFL: RifleAdjustFKneelActions
		{
			AdjustB = "";
			AdjustF = "";
			AdjustL = "";
			AdjustR = "";
			PlayerCrouch = "AadjPknlMtacSrasWrflDfl_up";
			PlayerStand = "AadjPercMrunSrasWrflDfl_up";
			Up = "AadjPercMrunSrasWrflDfl_up";
		};
		class RifleAdjustFKneelActionsRunFR: RifleAdjustFKneelActions
		{
			AdjustB = "";
			AdjustF = "";
			AdjustL = "";
			AdjustR = "";
			PlayerCrouch = "AadjPknlMtacSrasWrflDfr_up";
			PlayerStand = "AadjPercMrunSrasWrflDfr_up";
			Up = "AadjPercMrunSrasWrflDfr_up";
		};
		class RifleAdjustFKneelActionsRunL: RifleAdjustFKneelActions
		{
			AdjustB = "";
			AdjustF = "";
			AdjustL = "";
			AdjustR = "";
			PlayerCrouch = "AadjPknlMtacSrasWrflDl_up";
			PlayerStand = "AadjPercMrunSrasWrflDl_up";
			Up = "AadjPercMrunSrasWrflDl_up";
		};
		class RifleAdjustFKneelActionsRunR: RifleAdjustFKneelActions
		{
			AdjustB = "";
			AdjustF = "";
			AdjustL = "";
			AdjustR = "";
			PlayerCrouch = "AadjPknlMtacSrasWrflDr_up";
			PlayerStand = "AadjPercMrunSrasWrflDr_up";
			Up = "AadjPercMrunSrasWrflDr_up";
		};
		class RifleAdjustFKneelActionsTacB: RifleAdjustFKneelActions
		{
			AdjustB = "";
			AdjustF = "";
			AdjustL = "";
			AdjustR = "";
			PlayerCrouch = "AadjPknlMrunSrasWrflDb_up";
			PlayerStand = "AadjPercMtacSrasWrflDb_up";
			Up = "AadjPercMtacSrasWrflDb_up";
		};
		class RifleAdjustFKneelActionsTacBL: RifleAdjustFKneelActions
		{
			AdjustB = "";
			AdjustF = "";
			AdjustL = "";
			AdjustR = "";
			PlayerCrouch = "AadjPknlMrunSrasWrflDbl_up";
			PlayerStand = "AadjPercMtacSrasWrflDbl_up";
			Up = "AadjPercMtacSrasWrflDbl_up";
		};
		class RifleAdjustFKneelActionsTacBR: RifleAdjustFKneelActions
		{
			AdjustB = "";
			AdjustF = "";
			AdjustL = "";
			AdjustR = "";
			PlayerCrouch = "AadjPknlMrunSrasWrflDbr_up";
			PlayerStand = "AadjPercMtacSrasWrflDbr_up";
		};
		class RifleAdjustFKneelActionsTacF: RifleAdjustFKneelActions
		{
			AdjustB = "";
			AdjustF = "";
			AdjustL = "";
			AdjustR = "";
			PlayerCrouch = "AadjPknlMrunSrasWrflDf_up";
			PlayerStand = "AadjPercMtacSrasWrflDf_up";
			Up = "AadjPercMtacSrasWrflDf_up";
		};
		class RifleAdjustFKneelActionsTacFL: RifleAdjustFKneelActions
		{
			AdjustB = "";
			AdjustF = "";
			AdjustL = "";
			AdjustR = "";
			PlayerCrouch = "AadjPknlMrunSrasWrflDfl_up";
			PlayerStand = "AadjPercMtacSrasWrflDfl_up";
			Up = "AadjPercMtacSrasWrflDfl_up";
		};
		class RifleAdjustFKneelActionsTacFR: RifleAdjustFKneelActions
		{
			AdjustB = "";
			AdjustF = "";
			AdjustL = "";
			AdjustR = "";
			PlayerCrouch = "AadjPknlMrunSrasWrflDfr_up";
			PlayerStand = "AadjPercMtacSrasWrflDfr_up";
			Up = "AadjPercMtacSrasWrflDfr_up";
		};
		class RifleAdjustFKneelActionsTacL: RifleAdjustFKneelActions
		{
			AdjustB = "";
			AdjustF = "";
			AdjustL = "";
			AdjustR = "";
			PlayerCrouch = "AadjPknlMrunSrasWrflDl_up";
			PlayerStand = "AadjPercMtacSrasWrflDl_up";
			Up = "AadjPercMtacSrasWrflDl_up";
		};
		class RifleAdjustFKneelActionsTacR: RifleAdjustFKneelActions
		{
			AdjustB = "";
			AdjustF = "";
			AdjustL = "";
			AdjustR = "";
			PlayerCrouch = "AadjPknlMrunSrasWrflDr_up";
			PlayerStand = "AadjPercMtacSrasWrflDr_up";
			Up = "AadjPercMtacSrasWrflDr_up";
		};
		class RifleAdjustFKneelActionsWlkB: RifleAdjustFKneelActions
		{
			AdjustB = "";
			AdjustF = "";
			AdjustL = "";
			AdjustR = "";
			PlayerStand = "AadjPercMwlkSrasWrflDb_up";
			Up = "AadjPercMwlkSrasWrflDb_up";
		};
		class RifleAdjustFKneelActionsWlkBL: RifleAdjustFKneelActions
		{
			AdjustB = "";
			AdjustF = "";
			AdjustL = "";
			AdjustR = "";
			PlayerStand = "AadjPercMwlkSrasWrflDbl_up";
			Up = "AadjPercMwlkSrasWrflDbl_up";
		};
		class RifleAdjustFKneelActionsWlkBR: RifleAdjustFKneelActions
		{
			AdjustB = "";
			AdjustF = "";
			AdjustL = "";
			AdjustR = "";
			PlayerStand = "AadjPercMwlkSrasWrflDbr_up";
			Stand = "AadjPknlMwlkSrasWrflDbr_up";
			Up = "AadjPercMwlkSrasWrflDbr_up";
		};
		class RifleAdjustFKneelActionsWlkF: RifleAdjustFKneelActions
		{
			AdjustB = "";
			AdjustF = "";
			AdjustL = "";
			AdjustR = "";
			PlayerStand = "AadjPercMwlkSrasWrflDf_up";
			Up = "AadjPercMwlkSrasWrflDf_up";
		};
		class RifleAdjustFKneelActionsWlkFL: RifleAdjustFKneelActions
		{
			AdjustB = "";
			AdjustF = "";
			AdjustL = "";
			AdjustR = "";
			PlayerStand = "AadjPercMwlkSrasWrflDfl_up";
			Up = "AadjPercMwlkSrasWrflDfl_up";
		};
		class RifleAdjustFKneelActionsWlkFR: RifleAdjustFKneelActions
		{
			AdjustB = "";
			AdjustF = "";
			AdjustL = "";
			AdjustR = "";
			PlayerStand = "AadjPercMwlkSrasWrflDfr_up";
			Up = "AadjPercMwlkSrasWrflDfr_up";
		};
		class RifleAdjustFKneelActionsWlkL: RifleAdjustFKneelActions
		{
			AdjustB = "";
			AdjustF = "";
			AdjustL = "";
			AdjustR = "";
			PlayerStand = "AadjPercMwlkSrasWrflDl_up";
			Up = "AadjPercMwlkSrasWrflDl_up";
		};
		class RifleAdjustFKneelActionsWlkR: RifleAdjustFKneelActions
		{
			AdjustB = "";
			AdjustF = "";
			AdjustL = "";
			AdjustR = "";
			PlayerStand = "AadjPercMwlkSrasWrflDr_up";
			Up = "AadjPercMwlkSrasWrflDr_up";
		};
		class RifleAdjustFKneelEvasiveActionsF: RifleAdjustFKneelActions
		{
			AdjustB = "";
			AdjustF = "";
			AdjustL = "";
			AdjustR = "";
			PlayerStand = "AadjPercMevaSrasWrflDf_left";
			Up = "AadjPercMevaSrasWrflDf_left";
		};
		class RifleAdjustFKneelEvasiveActionsFL: RifleAdjustFKneelActions
		{
			AdjustB = "";
			AdjustF = "";
			AdjustL = "";
			AdjustR = "";
			PlayerStand = "AadjPercMevaSrasWrflDfl_left";
			Up = "AadjPercMevaSrasWrflDfl_left";
		};
		class RifleAdjustFKneelEvasiveActionsFR: RifleAdjustFKneelActions
		{
			AdjustB = "";
			AdjustF = "";
			AdjustL = "";
			AdjustR = "";
			PlayerStand = "AadjPercMevaSrasWrflDfr_left";
			Up = "AadjPercMevaSrasWrflDfr_left";
		};
		class RifleAdjustFProneActions: RifleAdjustProneBaseActions
		{
			AdjustB = "AmovPpneMstpSrasWrflDnon";
			AdjustF = "AadjPknlMstpSrasWrflDdown";
			Combat = "AadjPpneMstpSrasWrflDup";
			default = "AadjPpneMstpSrasWrflDup";
			DismountOptic = "";
			Down = "AmovPpneMstpSrasWrflDnon";
			EvasiveLeft = "";
			EvasiveRight = "";
			FastB = "AadjPpneMwlkSrasWrflDup_b";
			FastF = "AadjPpneMwlkSrasWrflDup_f";
			FastL = "AadjPpneMwlkSrasWrflDup_l";
			FastLB = "AadjPpneMwlkSrasWrflDup_bl";
			FastLF = "AadjPpneMwlkSrasWrflDup_fl";
			FastR = "AadjPpneMwlkSrasWrflDup_r";
			FastRB = "AadjPpneMwlkSrasWrflDup_br";
			FastRF = "AadjPpneMwlkSrasWrflDup_fr";
			Gear = "";
			gestureAdvance[] = {"GestureAdvance", "Gesture"};
			GestureDismountMuzzle[] = {"GestureDismountMuzzle", "Gesture"};
			gestureFreeze = "";
			gestureGo = "";
			gestureGoB = "";
			GestureMountMuzzle[] = {"GestureMountMuzzle", "Gesture"};
			GestureReload_smg_03[] = {"GestureReload_smg_03Context", "Gesture"};
			GestureReloadAK12[] = {"GestureReloadAK12Context", "Gesture"};
			GestureReloadAK12_Drum[] = {"GestureReloadAK12_DrumContext", "Gesture"};
			GestureReloadAKM[] = {"GestureReloadAKMContext", "Gesture"};
			GestureReloadAKM_Drum[] = {"GestureReloadAKM_DrumContext", "Gesture"};
			GestureReloadAKS[] = {"GestureReloadAKSContext", "Gesture"};
			GestureReloadARX[] = {"GestureReloadARXContext", "Gesture"};
			GestureReloadARX2[] = {"GestureReloadARX2Context", "Gesture"};
			GestureReloadCTAR[] = {"GestureReloadCTARContext", "Gesture"};
			GestureReloadDMR[] = {"GestureReloadDMRContext", "Gesture"};
			GestureReloadDMR02[] = {"GestureReloadDMR02Context", "Gesture"};
			GestureReloadDMR03[] = {"GestureReloadDMR03Context", "Gesture"};
			GestureReloadDMR04[] = {"GestureReloadDMR04Context", "Gesture"};
			GestureReloadDMR05[] = {"GestureReloadDMR05Context", "Gesture"};
			GestureReloadDMR06[] = {"GestureReloadDMR06Context", "Gesture"};
			GestureReloadDMR07[] = {"GestureReloadDMR07Context", "Gesture"};
			GestureReloadEBR[] = {"GestureReloadEBRContext", "Gesture"};
			GestureReloadFlaregun[] = {"GestureReloadFlaregunContext", "Gesture"};
			GestureReloadHunterShotgun01[] = {"GestureReloadHunterShotgun01Context", "Gesture"};
			GestureReloadKatiba[] = {"GestureReloadKatibaContext", "Gesture"};
			GestureReloadKatibaUGL[] = {"GestureReloadKatibaUGLContext", "Gesture"};
			GestureReloadLIM[] = {"GestureReloadLIMContext", "Gesture"};
			GestureReloadLRR[] = {"GestureReloadLRRContext", "Gesture"};
			GestureReloadM200[] = {"GestureReloadM200Context", "Gesture"};
			GestureReloadM4SSAS[] = {"GestureReloadM4SSASContext", "Gesture"};
			GestureReloadMk20[] = {"GestureReloadMk20Context", "Gesture"};
			GestureReloadMk20UGL[] = {"GestureReloadMk20UGLContext", "Gesture"};
			GestureReloadMMG01[] = {"GestureReloadMMG01Context", "Gesture"};
			GestureReloadMMG02[] = {"GestureReloadMMG02Context", "Gesture"};
			GestureReloadMSBS[] = {"GestureReloadMSBSContext", "Gesture"};
			GestureReloadMSBS_UBS[] = {"GestureReloadMSBS_UBSContext", "Gesture"};
			GestureReloadMSBS_UGL[] = {"GestureReloadMSBS_UGLContext", "Gesture"};
			GestureReloadMX[] = {"GestureReloadMXContext", "Gesture"};
			GestureReloadMXCompact[] = {"GestureReloadMXCompactContext", "Gesture"};
			GestureReloadMXSniper[] = {"GestureReloadMXSniperContext", "Gesture"};
			GestureReloadMXUGL[] = {"GestureReloadMXUGLContext", "Gesture"};
			GestureReloadPistol[] = {"GestureReloadPistolContext", "Gesture"};
			GestureReloadPistolHeavy02[] = {"GestureReloadPistolHeavy02Context", "Gesture"};
			GestureReloadSDAR[] = {"GestureReloadSDARContext", "Gesture"};
			GestureReloadSMG_01[] = {"GestureReloadSMG_01Context", "Gesture"};
			GestureReloadSMG_02[] = {"GestureReloadSMG_02Context", "Gesture"};
			GestureReloadSMG_03[] = {"GestureReloadSMG_03Context", "Gesture"};
			GestureReloadSMG_05[] = {"GestureReloadSMG_05Context", "Gesture"};
			GestureReloadSPAR_01[] = {"GestureReloadSPAR_01Context", "Gesture"};
			GestureReloadSPAR_02[] = {"GestureReloadSPAR_02Context", "Gesture"};
			GestureReloadSPARUGL[] = {"GestureReloadSPARUGLContext", "Gesture"};
			GestureReloadTRG[] = {"GestureReloadTRGContext", "Gesture"};
			GestureReloadTRGUGL[] = {"GestureReloadTRGUGLContext", "Gesture"};
			gestureUp = "";
			leanLRot = 0.1;
			leanLShift = 0.1;
			leanRRot = 0.1;
			leanRShift = 0.1;
			limitFast = 3.5;
			MountOptic = "";
			PlayerProne = "AmovPpneMstpSrasWrflDnon";
			PlayerSlowB = "AadjPpneMwlkSrasWrflDup_b";
			PlayerSlowF = "AadjPpneMwlkSrasWrflDup_f";
			PlayerSlowL = "AadjPpneMwlkSrasWrflDup_l";
			PlayerSlowLB = "AadjPpneMwlkSrasWrflDup_bl";
			PlayerSlowLF = "AadjPpneMwlkSrasWrflDup_fl";
			PlayerSlowR = "AadjPpneMwlkSrasWrflDup_r";
			PlayerSlowRB = "AadjPpneMwlkSrasWrflDup_br";
			PlayerSlowRF = "AadjPpneMwlkSrasWrflDup_fr";
			PlayerTactB = "AadjPpneMwlkSrasWrflDup_b";
			PlayerTactF = "AadjPpneMwlkSrasWrflDup_f";
			PlayerTactL = "AadjPpneMwlkSrasWrflDup_l";
			PlayerTactLB = "AadjPpneMwlkSrasWrflDup_bl";
			PlayerTactLF = "AadjPpneMwlkSrasWrflDup_fl";
			PlayerTactR = "AadjPpneMwlkSrasWrflDup_r";
			PlayerTactRB = "AadjPpneMwlkSrasWrflDup_br";
			PlayerTactRF = "AadjPpneMwlkSrasWrflDup_fr";
			PlayerWalkB = "AadjPpneMwlkSrasWrflDup_b";
			PlayerWalkF = "AadjPpneMwlkSrasWrflDup_f";
			PlayerWalkL = "AadjPpneMwlkSrasWrflDup_l";
			PlayerWalkLB = "AadjPpneMwlkSrasWrflDup_bl";
			PlayerWalkLF = "AadjPpneMwlkSrasWrflDup_fl";
			PlayerWalkR = "AadjPpneMwlkSrasWrflDup_r";
			PlayerWalkRB = "AadjPpneMwlkSrasWrflDup_br";
			PlayerWalkRF = "AadjPpneMwlkSrasWrflDup_fr";
			putDown = "AmovPpneMstpSrasWrflDnon";
			ReloadGM6[] = {"GestureReloadGM6Context", "Gesture"};
			reloadMGun = "";
			reloadMortar = "";
			SlowB = "AadjPpneMwlkSrasWrflDup_b";
			SlowF = "AadjPpneMwlkSrasWrflDup_f";
			SlowL = "AadjPpneMwlkSrasWrflDup_l";
			SlowLB = "AadjPpneMwlkSrasWrflDup_bl";
			SlowLF = "AadjPpneMwlkSrasWrflDup_fl";
			SlowR = "AadjPpneMwlkSrasWrflDup_r";
			SlowRB = "AadjPpneMwlkSrasWrflDup_br";
			SlowRF = "AadjPpneMwlkSrasWrflDup_fr";
			stop = "AadjPpneMstpSrasWrflDup";
			stopRelaxed = "AadjPpneMstpSrasWrflDup";
			strokeGun = "";
			TactB = "AadjPpneMwlkSrasWrflDup_b";
			TactF = "AadjPpneMwlkSrasWrflDup_f";
			TactL = "AadjPpneMwlkSrasWrflDup_l";
			TactLB = "AadjPpneMwlkSrasWrflDup_bl";
			TactLF = "AadjPpneMwlkSrasWrflDup_fl";
			TactR = "AadjPpneMwlkSrasWrflDup_r";
			TactRB = "AadjPpneMwlkSrasWrflDup_br";
			TactRF = "AadjPpneMwlkSrasWrflDup_fr";
			throwGrenade[] = {"GestureThrowGrenadeContext", "Gesture"};
			throwPrepare = "";
			turnL = "AadjPpneMstpSrasWrflDup_turnL";
			turnLRelaxed = "AadjPpneMstpSrasWrflDup_turnL";
			turnR = "AadjPpneMstpSrasWrflDup_turnR";
			turnRRelaxed = "AadjPpneMstpSrasWrflDup_turnR";
			WalkB = "AadjPpneMwlkSrasWrflDup_b";
			WalkF = "AadjPpneMwlkSrasWrflDup_f";
			WalkL = "AadjPpneMwlkSrasWrflDup_l";
			WalkLB = "AadjPpneMwlkSrasWrflDup_bl";
			WalkLF = "AadjPpneMwlkSrasWrflDup_fl";
			WalkR = "AadjPpneMwlkSrasWrflDup_r";
			WalkRB = "AadjPpneMwlkSrasWrflDup_br";
			WalkRF = "AadjPpneMwlkSrasWrflDup_fr";
		};
		class RifleAdjustFStandActions: RifleAdjustStandBaseActions
		{
			AdjustB = "AmovPercMstpSrasWrflDnon";
			AdjustF = "AadjPercMstpSrasWrflDup";
			AdjustL = "AadjPercMstpSrasWrflDleft";
			AdjustLF = "AadjPercMstpSrasWrflDup";
			AdjustR = "AadjPercMstpSrasWrflDright";
			AdjustRF = "AadjPercMstpSrasWrflDup";
			Combat = "AadjPercMstpSrasWrflDup";
			Crouch = "AadjPknlMstpSrasWrflDup";
			default = "AadjPercMstpSrasWrflDup";
			FastB = "AadjPercMrunSrasWrflDb_up";
			FastF = "AadjPercMevaSrasWrflDf_up";
			FastL = "AadjPercMrunSrasWrflDl_up";
			FastLB = "AadjPercMrunSrasWrflDbl_up";
			FastLF = "AadjPercMevaSrasWrflDfl_up";
			FastR = "AadjPercMrunSrasWrflDr_up";
			FastRB = "AadjPercMrunSrasWrflDbr_up";
			FastRF = "AadjPercMevaSrasWrflDfr_up";
			FireNotPossible = "AadjPercMstpSrasWrflDup";
			PlayerCrouch = "AadjPknlMstpSrasWrflDup";
			PlayerSlowB = "AadjPercMrunSrasWrflDb_up";
			PlayerSlowF = "AadjPercMrunSrasWrflDf_up";
			PlayerSlowL = "AadjPercMrunSrasWrflDl_up";
			PlayerSlowLB = "AadjPercMrunSrasWrflDbl_up";
			PlayerSlowLF = "AadjPercMrunSrasWrflDfl_up";
			PlayerSlowR = "AadjPercMrunSrasWrflDr_up";
			PlayerSlowRB = "AadjPercMrunSrasWrflDbr_up";
			PlayerSlowRF = "AadjPercMrunSrasWrflDfr_up";
			PlayerTactB = "AadjPercMtacSrasWrflDb_up";
			PlayerTactF = "AadjPercMtacSrasWrflDf_up";
			PlayerTactL = "AadjPercMtacSrasWrflDl_up";
			PlayerTactLB = "AadjPercMtacSrasWrflDbl_up";
			PlayerTactLF = "AadjPercMtacSrasWrflDfl_up";
			PlayerTactR = "AadjPercMtacSrasWrflDr_up";
			PlayerTactRB = "AadjPercMtacSrasWrflDbr_up";
			PlayerTactRF = "AadjPercMtacSrasWrflDfr_up";
			PlayerWalkB = "AadjPercMwlkSrasWrflDb_up";
			PlayerWalkF = "AadjPercMwlkSrasWrflDf_up";
			PlayerWalkL = "AadjPercMwlkSrasWrflDl_up";
			PlayerWalkLB = "AadjPercMwlkSrasWrflDbl_up";
			PlayerWalkLF = "AadjPercMwlkSrasWrflDfl_up";
			PlayerWalkR = "AadjPercMwlkSrasWrflDr_up";
			PlayerWalkRB = "AadjPercMwlkSrasWrflDbr_up";
			PlayerWalkRF = "AadjPercMwlkSrasWrflDfr_up";
			SlowB = "AadjPercMrunSrasWrflDb_up";
			SlowF = "AadjPercMrunSrasWrflDf_up";
			SlowL = "AadjPercMrunSrasWrflDl_up";
			SlowLB = "AadjPercMrunSrasWrflDbl_up";
			SlowLF = "AadjPercMrunSrasWrflDfl_up";
			SlowR = "AadjPercMrunSrasWrflDr_up";
			SlowRB = "AadjPercMrunSrasWrflDbr_up";
			SlowRF = "AadjPercMrunSrasWrflDfr_up";
			stop = "AadjPercMstpSrasWrflDup";
			StopRelaxed = "AadjPercMstpSrasWrflDup";
			TactB = "AadjPercMtacSrasWrflDb_up";
			TactF = "AadjPercMtacSrasWrflDf_up";
			TactL = "AadjPercMtacSrasWrflDl_up";
			TactLB = "AadjPercMtacSrasWrflDbl_up";
			TactLF = "AadjPercMtacSrasWrflDfl_up";
			TactR = "AadjPercMtacSrasWrflDr_up";
			TactRB = "AadjPercMtacSrasWrflDbr_up";
			TactRF = "AadjPercMtacSrasWrflDfr_up";
			turnL = "AadjPercMstpSrasWrflDup";
			turnLRelaxed = "AadjPercMstpSrasWrflDup";
			turnR = "AadjPercMstpSrasWrflDup";
			turnRRelaxed = "AadjPercMstpSrasWrflDup";
			up = "AadjPknlMstpSrasWrflDup";
			WalkB = "AadjPercMwlkSrasWrflDb_up";
			WalkF = "AadjPercMwlkSrasWrflDf_up";
			WalkL = "AadjPercMwlkSrasWrflDl_up";
			WalkLB = "AadjPercMwlkSrasWrflDbl_up";
			WalkLF = "AadjPercMwlkSrasWrflDfl_up";
			WalkR = "AadjPercMwlkSrasWrflDr_up";
			WalkRB = "AadjPercMwlkSrasWrflDbr_up";
			WalkRF = "AadjPercMwlkSrasWrflDfr_up";
		};
		class RifleAdjustFStandActionsRunB: RifleAdjustFStandActions
		{
			AdjustB = "";
			AdjustF = "";
			AdjustL = "";
			AdjustR = "";
			PlayerCrouch = "AadjPknlMrunSrasWrflDb_up";
			PlayerStand = "AadjPercMtacSrasWrflDb_up";
			Up = "AadjPknlMrunSrasWrflDb_up";
		};
		class RifleAdjustFStandActionsRunBL: RifleAdjustFStandActions
		{
			AdjustB = "";
			AdjustF = "";
			AdjustL = "";
			AdjustR = "";
			PlayerCrouch = "AadjPknlMrunSrasWrflDbl_up";
			PlayerStand = "AadjPercMtacSrasWrflDbl_up";
			Up = "AadjPknlMrunSrasWrflDbl_up";
		};
		class RifleAdjustFStandActionsRunBR: RifleAdjustFStandActions
		{
			AdjustB = "";
			AdjustF = "";
			AdjustL = "";
			AdjustR = "";
			PlayerCrouch = "AadjPknlMrunSrasWrflDbr_up";
			PlayerStand = "AadjPercMtacSrasWrflDbr_up";
		};
		class RifleAdjustFStandActionsRunF: RifleAdjustFStandActions
		{
			AdjustB = "";
			AdjustF = "";
			AdjustL = "";
			AdjustR = "";
			PlayerCrouch = "AadjPknlMrunSrasWrflDf_up";
			PlayerStand = "AadjPercMtacSrasWrflDf_up";
			Up = "AadjPknlMrunSrasWrflDf_up";
		};
		class RifleAdjustFStandActionsRunFL: RifleAdjustFStandActions
		{
			AdjustB = "";
			AdjustF = "";
			AdjustL = "";
			AdjustR = "";
			PlayerCrouch = "AadjPknlMrunSrasWrflDfl_up";
			PlayerStand = "AadjPercMtacSrasWrflDfl_up";
			Up = "AadjPknlMrunSrasWrflDfl_up";
		};
		class RifleAdjustFStandActionsRunFR: RifleAdjustFStandActions
		{
			AdjustB = "";
			AdjustF = "";
			AdjustL = "";
			AdjustR = "";
			PlayerCrouch = "AadjPknlMrunSrasWrflDfr_up";
			PlayerStand = "AadjPercMtacSrasWrflDfr_up";
			Up = "AadjPknlMrunSrasWrflDfr_up";
		};
		class RifleAdjustFStandActionsRunL: RifleAdjustFStandActions
		{
			AdjustB = "";
			AdjustF = "";
			AdjustL = "";
			AdjustR = "";
			PlayerCrouch = "AadjPknlMrunSrasWrflDl_up";
			PlayerStand = "AadjPercMtacSrasWrflDl_up";
			Up = "AadjPknlMrunSrasWrflDl_up";
		};
		class RifleAdjustFStandActionsRunR: RifleAdjustFStandActions
		{
			AdjustB = "";
			AdjustF = "";
			AdjustL = "";
			AdjustR = "";
			PlayerCrouch = "AadjPknlMrunSrasWrflDr_up";
			PlayerStand = "AadjPercMtacSrasWrflDr_up";
			Up = "AadjPknlMrunSrasWrflDr_up";
		};
		class RifleAdjustFStandActionsTacB: RifleAdjustFStandActions
		{
			AdjustB = "";
			AdjustF = "";
			AdjustL = "";
			AdjustR = "";
			PlayerCrouch = "AadjPknlMtacSrasWrflDb_up";
			PlayerStand = "AadjPercMrunSrasWrflDb_up";
			Up = "AadjPknlMtacSrasWrflDb_up";
		};
		class RifleAdjustFStandActionsTacBL: RifleAdjustFStandActions
		{
			AdjustB = "";
			AdjustF = "";
			AdjustL = "";
			AdjustR = "";
			PlayerCrouch = "AadjPknlMtacSrasWrflDbl_up";
			PlayerStand = "AadjPercMrunSrasWrflDbl_up";
			Up = "AadjPknlMtacSrasWrflDbl_up";
		};
		class RifleAdjustFStandActionsTacBR: RifleAdjustFStandActions
		{
			AdjustB = "";
			AdjustF = "";
			AdjustL = "";
			AdjustR = "";
			PlayerCrouch = "AadjPknlMtacSrasWrflDbr_up";
			PlayerStand = "AadjPercMrunSrasWrflDbr_up";
		};
		class RifleAdjustFStandActionsTacF: RifleAdjustFStandActions
		{
			AdjustB = "";
			AdjustF = "";
			AdjustL = "";
			AdjustR = "";
			PlayerCrouch = "AadjPknlMtacSrasWrflDf_up";
			PlayerStand = "AadjPercMrunSrasWrflDf_up";
			Up = "AadjPknlMtacSrasWrflDf_up";
		};
		class RifleAdjustFStandActionsTacFL: RifleAdjustFStandActions
		{
			AdjustB = "";
			AdjustF = "";
			AdjustL = "";
			AdjustR = "";
			PlayerCrouch = "AadjPknlMtacSrasWrflDfl_up";
			PlayerStand = "AadjPercMrunSrasWrflDfl_up";
			Up = "AadjPknlMtacSrasWrflDfl_up";
		};
		class RifleAdjustFStandActionsTacFR: RifleAdjustFStandActions
		{
			AdjustB = "";
			AdjustF = "";
			AdjustL = "";
			AdjustR = "";
			PlayerCrouch = "AadjPknlMtacSrasWrflDfr_up";
			PlayerStand = "AadjPercMrunSrasWrflDfr_up";
			Up = "AadjPknlMtacSrasWrflDfr_up";
		};
		class RifleAdjustFStandActionsTacL: RifleAdjustFStandActions
		{
			AdjustB = "";
			AdjustF = "";
			AdjustL = "";
			AdjustR = "";
			PlayerCrouch = "AadjPknlMtacSrasWrflDl_up";
			PlayerStand = "AadjPercMrunSrasWrflDl_up";
			Up = "AadjPknlMtacSrasWrflDl_up";
		};
		class RifleAdjustFStandActionsTacR: RifleAdjustFStandActions
		{
			AdjustB = "";
			AdjustF = "";
			AdjustL = "";
			AdjustR = "";
			PlayerCrouch = "AadjPknlMtacSrasWrflDr_up";
			PlayerStand = "AadjPercMrunSrasWrflDr_up";
			Up = "AadjPknlMtacSrasWrflDr_up";
		};
		class RifleAdjustFStandActionsWlkB: RifleAdjustFStandActions
		{
			AdjustB = "";
			AdjustF = "";
			AdjustL = "";
			AdjustR = "";
			PlayerCrouch = "AadjPknlMwlkSrasWrflDb_up";
			Up = "AadjPknlMwlkSrasWrflDb_up";
		};
		class RifleAdjustFStandActionsWlkBL: RifleAdjustFStandActions
		{
			AdjustB = "";
			AdjustF = "";
			AdjustL = "";
			AdjustR = "";
			PlayerCrouch = "AadjPknlMwlkSrasWrflDbl_up";
			Up = "AadjPknlMwlkSrasWrflDbl_up";
		};
		class RifleAdjustFStandActionsWlkBR: RifleAdjustFStandActions
		{
			AdjustB = "";
			AdjustF = "";
			AdjustL = "";
			AdjustR = "";
			PlayerCrouch = "AadjPknlMwlkSrasWrflDbr_up";
			Stand = "AadjPercMwlkSrasWrflDbr_up";
			Up = "AadjPknlMwlkSrasWrflDbr_up";
		};
		class RifleAdjustFStandActionsWlkF: RifleAdjustFStandActions
		{
			AdjustB = "";
			AdjustF = "";
			AdjustL = "";
			AdjustR = "";
			PlayerCrouch = "AadjPknlMwlkSrasWrflDf_up";
			Up = "AadjPknlMwlkSrasWrflDf_up";
		};
		class RifleAdjustFStandActionsWlkFL: RifleAdjustFStandActions
		{
			AdjustB = "";
			AdjustF = "";
			AdjustL = "";
			AdjustR = "";
			PlayerCrouch = "AadjPknlMwlkSrasWrflDfl_up";
			Up = "AadjPknlMwlkSrasWrflDfl_up";
		};
		class RifleAdjustFStandActionsWlkFR: RifleAdjustFStandActions
		{
			AdjustB = "";
			AdjustF = "";
			AdjustL = "";
			AdjustR = "";
			PlayerCrouch = "AadjPknlMwlkSrasWrflDfr_up";
			Up = "AadjPknlMwlkSrasWrflDfr_up";
		};
		class RifleAdjustFStandActionsWlkL: RifleAdjustFStandActions
		{
			AdjustB = "";
			AdjustF = "";
			AdjustL = "";
			AdjustR = "";
			PlayerCrouch = "AadjPknlMwlkSrasWrflDl_up";
			Up = "AadjPknlMwlkSrasWrflDl_up";
		};
		class RifleAdjustFStandActionsWlkR: RifleAdjustFStandActions
		{
			AdjustB = "";
			AdjustF = "";
			AdjustL = "";
			AdjustR = "";
			PlayerCrouch = "AadjPknlMwlkSrasWrflDr_up";
			Up = "AadjPknlMwlkSrasWrflDr_up";
		};
		class RifleAdjustFStandEvasiveActionsF: RifleAdjustFStandActions
		{
			AdjustB = "";
			AdjustF = "";
			AdjustL = "";
			AdjustR = "";
			PlayerCrouch = "AadjPknlMevaSrasWrflDf_up";
			Up = "AadjPknlMevaSrasWrflDf_up";
		};
		class RifleAdjustFStandEvasiveActionsFL: RifleAdjustFStandActions
		{
			AdjustB = "";
			AdjustF = "";
			AdjustL = "";
			AdjustR = "";
			PlayerCrouch = "AadjPknlMevaSrasWrflDfl_up";
			Up = "AadjPknlMevaSrasWrflDfl_up";
		};
		class RifleAdjustFStandEvasiveActionsFR: RifleAdjustFStandActions
		{
			AdjustB = "";
			AdjustF = "";
			AdjustL = "";
			AdjustR = "";
			PlayerCrouch = "AadjPknlMevaSrasWrflDfr_up";
			Up = "AadjPknlMevaSrasWrflDfr_up";
		};
		class RifleAdjustKneelBaseActions: RifleKneelActions
		{
			AdjustB = "AadjPknlMstpSrasWrflDdown";
			AdjustF = "AadjPknlMstpSrasWrflDup";
			AdjustL = "AadjPknlMstpSrasWrflDleft";
			AdjustLB = "AadjPknlMstpSrasWrflDdown";
			AdjustLF = "AadjPknlMstpSrasWrflDup";
			AdjustR = "AadjPknlMstpSrasWrflDright";
			AdjustRB = "AadjPknlMstpSrasWrflDdown";
			AdjustRF = "AadjPknlMstpSrasWrflDup";
			Crouch = "";
			Lying = "";
		};
		class RifleAdjustLKneelActions: RifleAdjustKneelBaseActions
		{
			AdjustR = "AmovPknlMstpSrasWrflDnon";
			Combat = "AadjPknlMstpSrasWrflDleft";
			default = "AadjPknlMstpSrasWrflDleft";
			down = "AadjPpneMstpSrasWrflDleft";
			FastB = "AadjPknlMrunSrasWrflDb_left";
			FastF = "AadjPknlMevaSrasWrflDf_left";
			FastL = "AadjPknlMrunSrasWrflDl_left";
			FastLB = "AadjPknlMrunSrasWrflDbl_left";
			FastLF = "AadjPknlMevaSrasWrflDfl_left";
			FastR = "AadjPknlMrunSrasWrflDr_left";
			FastRB = "AadjPknlMrunSrasWrflDbr_left";
			FastRF = "AadjPknlMevaSrasWrflDfr_left";
			FireNotPossible = "AadjPknlMstpSrasWrflDleft";
			PlayerCrouch = "AmovPknlMstpSrasWrflDnon";
			PlayerProne = "AadjPpneMstpSrasWrflDleft";
			PlayerSlowB = "AadjPknlMrunSrasWrflDb_left";
			PlayerSlowF = "AadjPknlMrunSrasWrflDf_left";
			PlayerSlowL = "AadjPknlMrunSrasWrflDl_left";
			PlayerSlowLB = "AadjPknlMrunSrasWrflDbl_left";
			PlayerSlowLF = "AadjPknlMrunSrasWrflDfl_left";
			PlayerSlowR = "AadjPknlMrunSrasWrflDr_left";
			PlayerSlowRB = "AadjPknlMrunSrasWrflDbr_left";
			PlayerSlowRF = "AadjPknlMrunSrasWrflDfr_left";
			PlayerStand = "AadjPercMstpSrasWrflDleft";
			PlayerTactB = "AadjPknlMtacSrasWrflDb_left";
			PlayerTactF = "AadjPknlMtacSrasWrflDf_left";
			PlayerTactL = "AadjPknlMtacSrasWrflDl_left";
			PlayerTactLB = "AadjPknlMtacSrasWrflDbl_left";
			PlayerTactLF = "AadjPknlMtacSrasWrflDfl_left";
			PlayerTactR = "AadjPknlMtacSrasWrflDr_left";
			PlayerTactRB = "AadjPknlMtacSrasWrflDbr_left";
			PlayerTactRF = "AadjPknlMtacSrasWrflDfr_left";
			PlayerWalkB = "AadjPknlMwlkSrasWrflDb_left";
			PlayerWalkF = "AadjPknlMwlkSrasWrflDf_left";
			PlayerWalkL = "AadjPknlMwlkSrasWrflDl_left";
			PlayerWalkLB = "AadjPknlMwlkSrasWrflDbl_left";
			PlayerWalkLF = "AadjPknlMwlkSrasWrflDfl_left";
			PlayerWalkR = "AadjPknlMwlkSrasWrflDr_left";
			PlayerWalkRB = "AadjPknlMwlkSrasWrflDbr_left";
			PlayerWalkRF = "AadjPknlMwlkSrasWrflDfr_left";
			SlowB = "AadjPknlMrunSrasWrflDb_left";
			SlowF = "AadjPknlMrunSrasWrflDf_left";
			SlowL = "AadjPknlMrunSrasWrflDl_left";
			SlowLB = "AadjPknlMrunSrasWrflDbl_left";
			SlowLF = "AadjPknlMrunSrasWrflDfl_left";
			SlowR = "AadjPknlMrunSrasWrflDr_left";
			SlowRB = "AadjPknlMrunSrasWrflDbr_left";
			SlowRF = "AadjPknlMrunSrasWrflDfr_left";
			Stand = "AmovPknlMstpSlowWrflDnon";
			stop = "AadjPknlMstpSrasWrflDleft";
			StopRelaxed = "AadjPknlMstpSrasWrflDleft";
			TactB = "AadjPknlMtacSrasWrflDb_left";
			TactF = "AadjPknlMtacSrasWrflDf_left";
			TactL = "AadjPknlMtacSrasWrflDl_left";
			TactLB = "AadjPknlMtacSrasWrflDbl_left";
			TactLF = "AadjPknlMtacSrasWrflDfl_left";
			TactR = "AadjPknlMtacSrasWrflDr_left";
			TactRB = "AadjPknlMtacSrasWrflDbr_left";
			TactRF = "AadjPknlMtacSrasWrflDfr_left";
			turnL = "AadjPknlMstpSrasWrflDleft";
			turnLRelaxed = "AadjPknlMstpSrasWrflDleft";
			turnR = "AadjPknlMstpSrasWrflDleft";
			turnRRelaxed = "AadjPknlMstpSrasWrflDleft";
			up = "AadjPercMstpSrasWrflDleft";
			upDegree = "ManPosCombat";
			WalkB = "AadjPknlMwlkSrasWrflDb_left";
			WalkF = "AadjPknlMwlkSrasWrflDf_left";
			WalkL = "AadjPknlMwlkSrasWrflDl_left";
			WalkLB = "AadjPknlMwlkSrasWrflDbl_left";
			WalkLF = "AadjPknlMwlkSrasWrflDfl_left";
			WalkR = "AadjPknlMwlkSrasWrflDr_left";
			WalkRB = "AadjPknlMwlkSrasWrflDbr_left";
			WalkRF = "AadjPknlMwlkSrasWrflDfr_left";
		};
		class RifleAdjustLKneelActionsRunB: RifleAdjustLKneelActions
		{
			AdjustB = "";
			AdjustF = "";
			AdjustL = "";
			AdjustR = "";
			PlayerCrouch = "AadjPknlMtacSrasWrflDb_left";
			PlayerStand = "AadjPercMrunSrasWrflDb_left";
			Up = "AadjPercMrunSrasWrflDb_left";
		};
		class RifleAdjustLKneelActionsRunBL: RifleAdjustLKneelActions
		{
			AdjustB = "";
			AdjustF = "";
			AdjustL = "";
			AdjustR = "";
			PlayerCrouch = "AadjPknlMtacSrasWrflDbl_left";
			PlayerStand = "AadjPercMrunSrasWrflDbl_left";
			Up = "AadjPercMrunSrasWrflDbl_left";
		};
		class RifleAdjustLKneelActionsRunBR: RifleAdjustLKneelActions
		{
			AdjustB = "";
			AdjustF = "";
			AdjustL = "";
			AdjustR = "";
			PlayerCrouch = "AadjPknlMtacSrasWrflDbr_left";
			PlayerStand = "AadjPercMrunSrasWrflDbr_left";
		};
		class RifleAdjustLKneelActionsRunF: RifleAdjustLKneelActions
		{
			AdjustB = "";
			AdjustF = "";
			AdjustL = "";
			AdjustR = "";
			PlayerCrouch = "AadjPknlMtacSrasWrflDf_left";
			PlayerStand = "AadjPercMrunSrasWrflDf_left";
			Up = "AadjPercMrunSrasWrflDf_left";
		};
		class RifleAdjustLKneelActionsRunFL: RifleAdjustLKneelActions
		{
			AdjustB = "";
			AdjustF = "";
			AdjustL = "";
			AdjustR = "";
			PlayerCrouch = "AadjPknlMtacSrasWrflDfl_left";
			PlayerStand = "AadjPercMrunSrasWrflDfl_left";
			Up = "AadjPercMrunSrasWrflDfl_left";
		};
		class RifleAdjustLKneelActionsRunFR: RifleAdjustLKneelActions
		{
			AdjustB = "";
			AdjustF = "";
			AdjustL = "";
			AdjustR = "";
			PlayerCrouch = "AadjPknlMtacSrasWrflDfr_left";
			PlayerStand = "AadjPercMrunSrasWrflDfr_left";
			Up = "AadjPercMrunSrasWrflDfr_left";
		};
		class RifleAdjustLKneelActionsRunL: RifleAdjustLKneelActions
		{
			AdjustB = "";
			AdjustF = "";
			AdjustL = "";
			AdjustR = "";
			PlayerCrouch = "AadjPknlMtacSrasWrflDl_left";
			PlayerStand = "AadjPercMrunSrasWrflDl_left";
			Up = "AadjPercMrunSrasWrflDl_left";
		};
		class RifleAdjustLKneelActionsRunR: RifleAdjustLKneelActions
		{
			AdjustB = "";
			AdjustF = "";
			AdjustL = "";
			AdjustR = "";
			PlayerCrouch = "AadjPknlMtacSrasWrflDr_left";
			PlayerStand = "AadjPercMrunSrasWrflDr_left";
			Up = "AadjPercMrunSrasWrflDr_left";
		};
		class RifleAdjustLKneelActionsTacB: RifleAdjustLKneelActions
		{
			AdjustB = "";
			AdjustF = "";
			AdjustL = "";
			AdjustR = "";
			PlayerCrouch = "AadjPknlMrunSrasWrflDb_left";
			PlayerStand = "AadjPercMtacSrasWrflDb_left";
			Up = "AadjPercMtacSrasWrflDb_left";
		};
		class RifleAdjustLKneelActionsTacBL: RifleAdjustLKneelActions
		{
			AdjustB = "";
			AdjustF = "";
			AdjustL = "";
			AdjustR = "";
			PlayerCrouch = "AadjPknlMrunSrasWrflDbl_left";
			PlayerStand = "AadjPercMtacSrasWrflDbl_left";
			Up = "AadjPercMtacSrasWrflDbl_left";
		};
		class RifleAdjustLKneelActionsTacBR: RifleAdjustLKneelActions
		{
			AdjustB = "";
			AdjustF = "";
			AdjustL = "";
			AdjustR = "";
			PlayerCrouch = "AadjPknlMrunSrasWrflDbr_left";
			PlayerStand = "AadjPercMtacSrasWrflDbr_left";
		};
		class RifleAdjustLKneelActionsTacF: RifleAdjustLKneelActions
		{
			AdjustB = "";
			AdjustF = "";
			AdjustL = "";
			AdjustR = "";
			PlayerCrouch = "AadjPknlMrunSrasWrflDf_left";
			PlayerStand = "AadjPercMtacSrasWrflDf_left";
			Up = "AadjPercMtacSrasWrflDf_left";
		};
		class RifleAdjustLKneelActionsTacFL: RifleAdjustLKneelActions
		{
			AdjustB = "";
			AdjustF = "";
			AdjustL = "";
			AdjustR = "";
			PlayerCrouch = "AadjPknlMrunSrasWrflDfl_left";
			PlayerStand = "AadjPercMtacSrasWrflDfl_left";
			Up = "AadjPercMtacSrasWrflDfl_left";
		};
		class RifleAdjustLKneelActionsTacFR: RifleAdjustLKneelActions
		{
			AdjustB = "";
			AdjustF = "";
			AdjustL = "";
			AdjustR = "";
			PlayerCrouch = "AadjPknlMrunSrasWrflDfr_left";
			PlayerStand = "AadjPercMtacSrasWrflDfr_left";
			Up = "AadjPercMtacSrasWrflDfr_left";
		};
		class RifleAdjustLKneelActionsTacL: RifleAdjustLKneelActions
		{
			AdjustB = "";
			AdjustF = "";
			AdjustL = "";
			AdjustR = "";
			PlayerCrouch = "AadjPknlMrunSrasWrflDl_left";
			PlayerStand = "AadjPercMtacSrasWrflDl_left";
			Up = "AadjPercMtacSrasWrflDl_left";
		};
		class RifleAdjustLKneelActionsTacR: RifleAdjustLKneelActions
		{
			AdjustB = "";
			AdjustF = "";
			AdjustL = "";
			AdjustR = "";
			PlayerCrouch = "AadjPknlMrunSrasWrflDr_left";
			PlayerStand = "AadjPercMtacSrasWrflDr_left";
			Up = "AadjPercMtacSrasWrflDr_left";
		};
		class RifleAdjustLKneelActionsWlkB: RifleAdjustLKneelActions
		{
			AdjustB = "";
			AdjustF = "";
			AdjustL = "";
			AdjustR = "";
			PlayerStand = "AadjPercMwlkSrasWrflDb_left";
			Up = "AadjPercMwlkSrasWrflDb_left";
		};
		class RifleAdjustLKneelActionsWlkBL: RifleAdjustLKneelActions
		{
			AdjustB = "";
			AdjustF = "";
			AdjustL = "";
			AdjustR = "";
			PlayerStand = "AadjPercMwlkSrasWrflDbl_left";
			Up = "AadjPercMwlkSrasWrflDbl_left";
		};
		class RifleAdjustLKneelActionsWlkBR: RifleAdjustLKneelActions
		{
			AdjustB = "";
			AdjustF = "";
			AdjustL = "";
			AdjustR = "";
			PlayerStand = "AadjPercMwlkSrasWrflDbr_left";
			Stand = "AadjPknlMwlkSrasWrflDbr_left";
			Up = "AadjPercMwlkSrasWrflDbr_left";
		};
		class RifleAdjustLKneelActionsWlkF: RifleAdjustLKneelActions
		{
			AdjustB = "";
			AdjustF = "";
			AdjustL = "";
			AdjustR = "";
			PlayerStand = "AadjPercMwlkSrasWrflDf_left";
			Up = "AadjPercMwlkSrasWrflDf_left";
		};
		class RifleAdjustLKneelActionsWlkFL: RifleAdjustLKneelActions
		{
			AdjustB = "";
			AdjustF = "";
			AdjustL = "";
			AdjustR = "";
			PlayerStand = "AadjPercMwlkSrasWrflDfl_left";
			Up = "AadjPercMwlkSrasWrflDfl_left";
		};
		class RifleAdjustLKneelActionsWlkFR: RifleAdjustLKneelActions
		{
			AdjustB = "";
			AdjustF = "";
			AdjustL = "";
			AdjustR = "";
			PlayerStand = "AadjPercMwlkSrasWrflDfr_left";
			Up = "AadjPercMwlkSrasWrflDfr_left";
		};
		class RifleAdjustLKneelActionsWlkL: RifleAdjustLKneelActions
		{
			AdjustB = "";
			AdjustF = "";
			AdjustL = "";
			AdjustR = "";
			PlayerStand = "AadjPercMwlkSrasWrflDl_left";
			Up = "AadjPercMwlkSrasWrflDl_left";
		};
		class RifleAdjustLKneelActionsWlkR: RifleAdjustLKneelActions
		{
			AdjustB = "";
			AdjustF = "";
			AdjustL = "";
			AdjustR = "";
			PlayerStand = "AadjPercMwlkSrasWrflDr_left";
			Up = "AadjPercMwlkSrasWrflDr_left";
		};
		class RifleAdjustLKneelEvasiveActionsF: RifleAdjustLKneelActions
		{
			AdjustB = "";
			AdjustF = "";
			AdjustL = "";
			AdjustR = "";
			PlayerStand = "AadjPercMevaSrasWrflDf_left";
			Up = "AadjPercMevaSrasWrflDf_left";
		};
		class RifleAdjustLKneelEvasiveActionsFL: RifleAdjustLKneelActions
		{
			AdjustB = "";
			AdjustF = "";
			AdjustL = "";
			AdjustR = "";
			PlayerStand = "AadjPercMevaSrasWrflDfl_left";
			Up = "AadjPercMevaSrasWrflDfl_left";
		};
		class RifleAdjustLKneelEvasiveActionsFR: RifleAdjustLKneelActions
		{
			AdjustB = "";
			AdjustF = "";
			AdjustL = "";
			AdjustR = "";
			PlayerStand = "AadjPercMevaSrasWrflDfr_left";
			Up = "AadjPercMevaSrasWrflDfr_left";
		};
		class RifleAdjustLProneActions: RifleAdjustProneBaseActions
		{
			AdjustR = "AmovPpneMstpSrasWrflDnon";
			Combat = "AadjPpneMstpSrasWrflDleft";
			default = "AadjPpneMstpSrasWrflDleft";
			DismountOptic = "";
			EvasiveLeft = "AadjPpneMstpSrasWrflDleft";
			EvasiveRight = "AadjPpneMstpSrasWrflDleft";
			FastB = "AadjPpneMwlkSrasWrflDleft_b";
			FastF = "AadjPpneMwlkSrasWrflDleft_f";
			FastL = "AadjPpneMwlkSrasWrflDleft_l";
			FastLB = "";
			FastLF = "";
			FastR = "AadjPpneMwlkSrasWrflDleft_r";
			FastRB = "";
			FastRF = "";
			Gear = "";
			gestureAdvance[] = {"GestureAdvance", "Gesture"};
			GestureDismountMuzzle[] = {"GestureDismountMuzzle", "Gesture"};
			gestureFreeze = "";
			gestureGo = "";
			gestureGoB = "";
			GestureMountMuzzle[] = {"GestureMountMuzzle", "Gesture"};
			GestureReload_smg_03[] = {"GestureReload_smg_03Context", "Gesture"};
			GestureReloadAK12[] = {"GestureReloadAK12Context", "Gesture"};
			GestureReloadAK12_Drum[] = {"GestureReloadAK12_DrumContext", "Gesture"};
			GestureReloadAKM[] = {"GestureReloadAKMContext", "Gesture"};
			GestureReloadAKM_Drum[] = {"GestureReloadAKM_DrumContext", "Gesture"};
			GestureReloadAKS[] = {"GestureReloadAKSContext", "Gesture"};
			GestureReloadARX[] = {"GestureReloadARXContext", "Gesture"};
			GestureReloadARX2[] = {"GestureReloadARX2Context", "Gesture"};
			GestureReloadCTAR[] = {"GestureReloadCTARContext", "Gesture"};
			GestureReloadDMR[] = {"GestureReloadDMRContext", "Gesture"};
			GestureReloadDMR02[] = {"GestureReloadDMR02Context", "Gesture"};
			GestureReloadDMR03[] = {"GestureReloadDMR03Context", "Gesture"};
			GestureReloadDMR04[] = {"GestureReloadDMR04Context", "Gesture"};
			GestureReloadDMR05[] = {"GestureReloadDMR05Context", "Gesture"};
			GestureReloadDMR06[] = {"GestureReloadDMR06Context", "Gesture"};
			GestureReloadDMR07[] = {"GestureReloadDMR07Context", "Gesture"};
			GestureReloadEBR[] = {"GestureReloadEBRContext", "Gesture"};
			GestureReloadFlaregun[] = {"GestureReloadFlaregunContext", "Gesture"};
			GestureReloadHunterShotgun01[] = {"GestureReloadHunterShotgun01Context", "Gesture"};
			GestureReloadKatiba[] = {"GestureReloadKatibaContext", "Gesture"};
			GestureReloadKatibaUGL[] = {"GestureReloadKatibaUGLContext", "Gesture"};
			GestureReloadLIM[] = {"GestureReloadLIMContext", "Gesture"};
			GestureReloadLRR[] = {"GestureReloadLRRContext", "Gesture"};
			GestureReloadM200[] = {"GestureReloadM200Context", "Gesture"};
			GestureReloadM4SSAS[] = {"GestureReloadM4SSASContext", "Gesture"};
			GestureReloadMk20[] = {"GestureReloadMk20Context", "Gesture"};
			GestureReloadMk20UGL[] = {"GestureReloadMk20UGLContext", "Gesture"};
			GestureReloadMMG01[] = {"GestureReloadMMG01Context", "Gesture"};
			GestureReloadMMG02[] = {"GestureReloadMMG02Context", "Gesture"};
			GestureReloadMSBS[] = {"GestureReloadMSBSContext", "Gesture"};
			GestureReloadMSBS_UBS[] = {"GestureReloadMSBS_UBSContext", "Gesture"};
			GestureReloadMSBS_UGL[] = {"GestureReloadMSBS_UGLContext", "Gesture"};
			GestureReloadMX[] = {"GestureReloadMXContext", "Gesture"};
			GestureReloadMXCompact[] = {"GestureReloadMXCompactContext", "Gesture"};
			GestureReloadMXSniper[] = {"GestureReloadMXSniperContext", "Gesture"};
			GestureReloadMXUGL[] = {"GestureReloadMXUGLContext", "Gesture"};
			GestureReloadPistol[] = {"GestureReloadPistolContext", "Gesture"};
			GestureReloadPistolHeavy02[] = {"GestureReloadPistolHeavy02Context", "Gesture"};
			GestureReloadSDAR[] = {"GestureReloadSDARContext", "Gesture"};
			GestureReloadSMG_01[] = {"GestureReloadSMG_01Context", "Gesture"};
			GestureReloadSMG_02[] = {"GestureReloadSMG_02Context", "Gesture"};
			GestureReloadSMG_03[] = {"GestureReloadSMG_03Context", "Gesture"};
			GestureReloadSMG_05[] = {"GestureReloadSMG_05Context", "Gesture"};
			GestureReloadSPAR_01[] = {"GestureReloadSPAR_01Context", "Gesture"};
			GestureReloadSPAR_02[] = {"GestureReloadSPAR_02Context", "Gesture"};
			GestureReloadSPARUGL[] = {"GestureReloadSPARUGLContext", "Gesture"};
			GestureReloadTRG[] = {"GestureReloadTRGContext", "Gesture"};
			GestureReloadTRGUGL[] = {"GestureReloadTRGUGLContext", "Gesture"};
			gestureUp = "";
			leanLRot = 0.1;
			leanLShift = 0.1;
			leanRRot = 0.1;
			leanRShift = 0.1;
			limitFast = 3.5;
			MountOptic = "";
			PlayerProne = "AmovPpneMstpSrasWrflDnon";
			PlayerSlowB = "AadjPpneMwlkSrasWrflDleft_b";
			PlayerSlowF = "AadjPpneMwlkSrasWrflDleft_f";
			PlayerSlowL = "AadjPpneMwlkSrasWrflDleft_l";
			PlayerSlowLB = "";
			PlayerSlowLF = "";
			PlayerSlowR = "AadjPpneMwlkSrasWrflDleft_r";
			PlayerSlowRB = "";
			PlayerSlowRF = "";
			PlayerTactB = "AadjPpneMwlkSrasWrflDleft_b";
			PlayerTactF = "AadjPpneMwlkSrasWrflDleft_f";
			PlayerTactL = "AadjPpneMwlkSrasWrflDleft_l";
			PlayerTactLB = "";
			PlayerTactLF = "";
			PlayerTactR = "AadjPpneMwlkSrasWrflDleft_r";
			PlayerTactRB = "";
			PlayerTactRF = "";
			PlayerWalkB = "AadjPpneMwlkSrasWrflDleft_b";
			PlayerWalkF = "AadjPpneMwlkSrasWrflDleft_f";
			PlayerWalkL = "AadjPpneMwlkSrasWrflDleft_l";
			PlayerWalkLB = "";
			PlayerWalkLF = "";
			PlayerWalkR = "AadjPpneMwlkSrasWrflDleft_r";
			PlayerWalkRB = "";
			PlayerWalkRF = "";
			putDown = "AmovPpneMstpSrasWrflDnon";
			ReloadGM6[] = {"GestureReloadGM6Context", "Gesture"};
			reloadMGun = "";
			reloadMortar = "";
			SlowB = "AadjPpneMwlkSrasWrflDleft_b";
			SlowF = "AadjPpneMwlkSrasWrflDleft_f";
			SlowL = "AadjPpneMwlkSrasWrflDleft_l";
			SlowLB = "";
			SlowLF = "";
			SlowR = "AadjPpneMwlkSrasWrflDleft_r";
			SlowRB = "";
			SlowRF = "";
			stop = "AadjPpneMstpSrasWrflDleft";
			stopRelaxed = "AadjPpneMstpSrasWrflDleft";
			strokeGun = "";
			TactB = "AadjPpneMwlkSrasWrflDleft_b";
			TactF = "AadjPpneMwlkSrasWrflDleft_f";
			TactL = "AadjPpneMwlkSrasWrflDleft_l";
			TactLB = "";
			TactLF = "";
			TactR = "AadjPpneMwlkSrasWrflDleft_r";
			TactRB = "";
			TactRF = "";
			throwGrenade[] = {"GestureThrowGrenadeContext", "Gesture"};
			throwPrepare = "";
			turnL = "AadjPpneMstpSrasWrflDleft";
			turnLRelaxed = "AadjPpneMstpSrasWrflDleft";
			turnR = "AadjPpneMstpSrasWrflDleft";
			turnRRelaxed = "AadjPpneMstpSrasWrflDleft";
			WalkB = "";
			WalkF = "";
			WalkL = "";
			WalkLB = "";
			WalkLF = "";
			WalkR = "";
			WalkRB = "";
			WalkRF = "";
		};
		class RifleAdjustLStandActions: RifleAdjustStandBaseActions
		{
			AdjustB = "AadjPercMstpSrasWrflDdown";
			AdjustF = "AadjPercMstpSrasWrflDup";
			AdjustL = "AadjPercMstpSrasWrflDleft";
			AdjustLB = "AadjPercMstpSrasWrflDdown";
			AdjustLF = "AadjPercMstpSrasWrflDup";
			AdjustR = "AmovPercMstpSrasWrflDnon";
			AdjustRB = "AadjPercMstpSrasWrflDdown";
			AdjustRF = "AadjPercMstpSrasWrflDup";
			Combat = "AadjPercMstpSrasWrflDleft";
			Crouch = "AadjPknlMstpSrasWrflDleft";
			default = "AadjPercMstpSrasWrflDleft";
			down = "AadjPpneMstpSrasWrflDleft";
			FastB = "AadjPercMrunSrasWrflDb_left";
			FastF = "AadjPercMevaSrasWrflDf_left";
			FastL = "AadjPercMrunSrasWrflDl_left";
			FastLB = "AadjPercMrunSrasWrflDbl_left";
			FastLF = "AadjPercMevaSrasWrflDfl_left";
			FastR = "AadjPercMrunSrasWrflDr_left";
			FastRB = "AadjPercMrunSrasWrflDbr_left";
			FastRF = "AadjPercMevaSrasWrflDfr_left";
			FireNotPossible = "AadjPercMstpSrasWrflDleft";
			PlayerCrouch = "AadjPknlMstpSrasWrflDleft";
			PlayerProne = "AadjPpneMstpSrasWrflDleft";
			PlayerSlowB = "AadjPercMrunSrasWrflDb_left";
			PlayerSlowF = "AadjPercMrunSrasWrflDf_left";
			PlayerSlowL = "AadjPercMrunSrasWrflDl_left";
			PlayerSlowLB = "AadjPercMrunSrasWrflDbl_left";
			PlayerSlowLF = "AadjPercMrunSrasWrflDfl_left";
			PlayerSlowR = "AadjPercMrunSrasWrflDr_left";
			PlayerSlowRB = "AadjPercMrunSrasWrflDbr_left";
			PlayerSlowRF = "AadjPercMrunSrasWrflDfr_left";
			PlayerTactB = "AadjPercMtacSrasWrflDb_left";
			PlayerTactF = "AadjPercMtacSrasWrflDf_left";
			PlayerTactL = "AadjPercMtacSrasWrflDl_left";
			PlayerTactLB = "AadjPercMtacSrasWrflDbl_left";
			PlayerTactLF = "AadjPercMtacSrasWrflDfl_left";
			PlayerTactR = "AadjPercMtacSrasWrflDr_left";
			PlayerTactRB = "AadjPercMtacSrasWrflDbr_left";
			PlayerTactRF = "AadjPercMtacSrasWrflDfr_left";
			PlayerWalkB = "AadjPercMwlkSrasWrflDb_left";
			PlayerWalkF = "AadjPercMwlkSrasWrflDf_left";
			PlayerWalkL = "AadjPercMwlkSrasWrflDl_left";
			PlayerWalkLB = "AadjPercMwlkSrasWrflDbl_left";
			PlayerWalkLF = "AadjPercMwlkSrasWrflDfl_left";
			PlayerWalkR = "AadjPercMwlkSrasWrflDr_left";
			PlayerWalkRB = "AadjPercMwlkSrasWrflDbr_left";
			PlayerWalkRF = "AadjPercMwlkSrasWrflDfr_left";
			SlowB = "AadjPercMrunSrasWrflDb_left";
			SlowF = "AadjPercMrunSrasWrflDf_left";
			SlowL = "AadjPercMrunSrasWrflDl_left";
			SlowLB = "AadjPercMrunSrasWrflDbl_left";
			SlowLF = "AadjPercMrunSrasWrflDfl_left";
			SlowR = "AadjPercMrunSrasWrflDr_left";
			SlowRB = "AadjPercMrunSrasWrflDbr_left";
			SlowRF = "AadjPercMrunSrasWrflDfr_left";
			stop = "AadjPercMstpSrasWrflDleft";
			StopRelaxed = "AadjPercMstpSrasWrflDleft";
			TactB = "AadjPercMtacSrasWrflDb_left";
			TactF = "AadjPercMtacSrasWrflDf_left";
			TactL = "AadjPercMtacSrasWrflDl_left";
			TactLB = "AadjPercMtacSrasWrflDbl_left";
			TactLF = "AadjPercMtacSrasWrflDfl_left";
			TactR = "AadjPercMtacSrasWrflDr_left";
			TactRB = "AadjPercMtacSrasWrflDbr_left";
			TactRF = "AadjPercMtacSrasWrflDfr_left";
			turnL = "AadjPercMstpSrasWrflDleft";
			turnLRelaxed = "AadjPercMstpSrasWrflDleft";
			turnR = "AadjPercMstpSrasWrflDleft";
			turnRRelaxed = "AadjPercMstpSrasWrflDleft";
			up = "AadjPknlMstpSrasWrflDleft";
			WalkB = "AadjPercMwlkSrasWrflDb_left";
			WalkF = "AadjPercMwlkSrasWrflDf_left";
			WalkL = "AadjPercMwlkSrasWrflDl_left";
			WalkLB = "AadjPercMwlkSrasWrflDbl_left";
			WalkLF = "AadjPercMwlkSrasWrflDfl_left";
			WalkR = "AadjPercMwlkSrasWrflDr_left";
			WalkRB = "AadjPercMwlkSrasWrflDbr_left";
			WalkRF = "AadjPercMwlkSrasWrflDfr_left";
		};
		class RifleAdjustLStandActionsRunB: RifleAdjustLStandActions
		{
			AdjustB = "";
			AdjustF = "";
			AdjustL = "";
			AdjustR = "";
			PlayerCrouch = "AadjPknlMrunSrasWrflDb_left";
			PlayerStand = "AadjPercMtacSrasWrflDb_left";
			Up = "AadjPknlMrunSrasWrflDb_left";
		};
		class RifleAdjustLStandActionsRunBL: RifleAdjustLStandActions
		{
			AdjustB = "";
			AdjustF = "";
			AdjustL = "";
			AdjustR = "";
			PlayerCrouch = "AadjPknlMrunSrasWrflDbl_left";
			PlayerStand = "AadjPercMtacSrasWrflDbl_left";
			Up = "AadjPknlMrunSrasWrflDbl_left";
		};
		class RifleAdjustLStandActionsRunBR: RifleAdjustLStandActions
		{
			AdjustB = "";
			AdjustF = "";
			AdjustL = "";
			AdjustR = "";
			PlayerCrouch = "AadjPknlMrunSrasWrflDbr_left";
			PlayerStand = "AadjPercMtacSrasWrflDbr_left";
		};
		class RifleAdjustLStandActionsRunF: RifleAdjustLStandActions
		{
			AdjustB = "";
			AdjustF = "";
			AdjustL = "";
			AdjustR = "";
			PlayerCrouch = "AadjPknlMrunSrasWrflDf_left";
			PlayerStand = "AadjPercMtacSrasWrflDf_left";
			Up = "AadjPknlMrunSrasWrflDf_left";
		};
		class RifleAdjustLStandActionsRunFL: RifleAdjustLStandActions
		{
			AdjustB = "";
			AdjustF = "";
			AdjustL = "";
			AdjustR = "";
			PlayerCrouch = "AadjPknlMrunSrasWrflDfl_left";
			PlayerStand = "AadjPercMtacSrasWrflDfl_left";
			Up = "AadjPknlMrunSrasWrflDfl_left";
		};
		class RifleAdjustLStandActionsRunFR: RifleAdjustLStandActions
		{
			AdjustB = "";
			AdjustF = "";
			AdjustL = "";
			AdjustR = "";
			PlayerCrouch = "AadjPknlMrunSrasWrflDfr_left";
			PlayerStand = "AadjPercMtacSrasWrflDfr_left";
			Up = "AadjPknlMrunSrasWrflDfr_left";
		};
		class RifleAdjustLStandActionsRunL: RifleAdjustLStandActions
		{
			AdjustB = "";
			AdjustF = "";
			AdjustL = "";
			AdjustR = "";
			PlayerCrouch = "AadjPknlMrunSrasWrflDl_left";
			PlayerStand = "AadjPercMtacSrasWrflDl_left";
			Up = "AadjPknlMrunSrasWrflDl_left";
		};
		class RifleAdjustLStandActionsRunR: RifleAdjustLStandActions
		{
			AdjustB = "";
			AdjustF = "";
			AdjustL = "";
			AdjustR = "";
			PlayerCrouch = "AadjPknlMrunSrasWrflDr_left";
			PlayerStand = "AadjPercMtacSrasWrflDr_left";
			Up = "AadjPknlMrunSrasWrflDr_left";
		};
		class RifleAdjustLStandActionsTacB: RifleAdjustLStandActions
		{
			AdjustB = "";
			AdjustF = "";
			AdjustL = "";
			AdjustR = "";
			PlayerCrouch = "AadjPknlMtacSrasWrflDb_left";
			PlayerStand = "AadjPercMrunSrasWrflDb_left";
			Up = "AadjPknlMtacSrasWrflDb_left";
		};
		class RifleAdjustLStandActionsTacBL: RifleAdjustLStandActions
		{
			AdjustB = "";
			AdjustF = "";
			AdjustL = "";
			AdjustR = "";
			PlayerCrouch = "AadjPknlMtacSrasWrflDbl_left";
			PlayerStand = "AadjPercMrunSrasWrflDbl_left";
			Up = "AadjPknlMtacSrasWrflDbl_left";
		};
		class RifleAdjustLStandActionsTacBR: RifleAdjustLStandActions
		{
			AdjustB = "";
			AdjustF = "";
			AdjustL = "";
			AdjustR = "";
			PlayerCrouch = "AadjPknlMtacSrasWrflDbr_left";
			PlayerStand = "AadjPercMrunSrasWrflDbr_left";
		};
		class RifleAdjustLStandActionsTacF: RifleAdjustLStandActions
		{
			AdjustB = "";
			AdjustF = "";
			AdjustL = "";
			AdjustR = "";
			PlayerCrouch = "AadjPknlMtacSrasWrflDf_left";
			PlayerStand = "AadjPercMrunSrasWrflDf_left";
			Up = "AadjPknlMtacSrasWrflDf_left";
		};
		class RifleAdjustLStandActionsTacFL: RifleAdjustLStandActions
		{
			AdjustB = "";
			AdjustF = "";
			AdjustL = "";
			AdjustR = "";
			PlayerCrouch = "AadjPknlMtacSrasWrflDfl_left";
			PlayerStand = "AadjPercMrunSrasWrflDfl_left";
			Up = "AadjPknlMtacSrasWrflDfl_left";
		};
		class RifleAdjustLStandActionsTacFR: RifleAdjustLStandActions
		{
			AdjustB = "";
			AdjustF = "";
			AdjustL = "";
			AdjustR = "";
			PlayerCrouch = "AadjPknlMtacSrasWrflDfr_left";
			PlayerStand = "AadjPercMrunSrasWrflDfr_left";
			Up = "AadjPknlMtacSrasWrflDfr_left";
		};
		class RifleAdjustLStandActionsTacL: RifleAdjustLStandActions
		{
			AdjustB = "";
			AdjustF = "";
			AdjustL = "";
			AdjustR = "";
			PlayerCrouch = "AadjPknlMtacSrasWrflDl_left";
			PlayerStand = "AadjPercMrunSrasWrflDl_left";
			Up = "AadjPknlMtacSrasWrflDl_left";
		};
		class RifleAdjustLStandActionsTacR: RifleAdjustLStandActions
		{
			AdjustB = "";
			AdjustF = "";
			AdjustL = "";
			AdjustR = "";
			PlayerCrouch = "AadjPknlMtacSrasWrflDr_left";
			PlayerStand = "AadjPercMrunSrasWrflDr_left";
			Up = "AadjPknlMtacSrasWrflDr_left";
		};
		class RifleAdjustLStandActionsWlkB: RifleAdjustLStandActions
		{
			AdjustB = "";
			AdjustF = "";
			AdjustL = "";
			AdjustR = "";
			PlayerCrouch = "AadjPknlMwlkSrasWrflDb_left";
			Up = "AadjPknlMwlkSrasWrflDb_left";
		};
		class RifleAdjustLStandActionsWlkBL: RifleAdjustLStandActions
		{
			AdjustB = "";
			AdjustF = "";
			AdjustL = "";
			AdjustR = "";
			PlayerCrouch = "AadjPknlMwlkSrasWrflDbl_left";
			Up = "AadjPknlMwlkSrasWrflDbl_left";
		};
		class RifleAdjustLStandActionsWlkBR: RifleAdjustLStandActions
		{
			AdjustB = "";
			AdjustF = "";
			AdjustL = "";
			AdjustR = "";
			PlayerCrouch = "AadjPknlMwlkSrasWrflDbr_left";
			Stand = "AadjPercMwlkSrasWrflDbr_left";
			Up = "AadjPknlMwlkSrasWrflDbr_left";
		};
		class RifleAdjustLStandActionsWlkF: RifleAdjustLStandActions
		{
			AdjustB = "";
			AdjustF = "";
			AdjustL = "";
			AdjustR = "";
			PlayerCrouch = "AadjPknlMwlkSrasWrflDf_left";
			Up = "AadjPknlMwlkSrasWrflDf_left";
		};
		class RifleAdjustLStandActionsWlkFL: RifleAdjustLStandActions
		{
			AdjustB = "";
			AdjustF = "";
			AdjustL = "";
			AdjustR = "";
			PlayerCrouch = "AadjPknlMwlkSrasWrflDfl_left";
			Up = "AadjPknlMwlkSrasWrflDfl_left";
		};
		class RifleAdjustLStandActionsWlkFR: RifleAdjustLStandActions
		{
			AdjustB = "";
			AdjustF = "";
			AdjustL = "";
			AdjustR = "";
			PlayerCrouch = "AadjPknlMwlkSrasWrflDfr_left";
			Up = "AadjPknlMwlkSrasWrflDfr_left";
		};
		class RifleAdjustLStandActionsWlkL: RifleAdjustLStandActions
		{
			AdjustB = "";
			AdjustF = "";
			AdjustL = "";
			AdjustR = "";
			PlayerCrouch = "AadjPknlMwlkSrasWrflDl_left";
			Up = "AadjPknlMwlkSrasWrflDl_left";
		};
		class RifleAdjustLStandActionsWlkR: RifleAdjustLStandActions
		{
			AdjustB = "";
			AdjustF = "";
			AdjustL = "";
			AdjustR = "";
			PlayerCrouch = "AadjPknlMwlkSrasWrflDr_left";
			Up = "AadjPknlMwlkSrasWrflDr_left";
		};
		class RifleAdjustLStandEvasiveActionsF: RifleAdjustLStandActions
		{
			AdjustB = "";
			AdjustF = "";
			AdjustL = "";
			AdjustR = "";
			PlayerCrouch = "AadjPknlMevaSrasWrflDf_left";
			Up = "AadjPknlMevaSrasWrflDf_left";
		};
		class RifleAdjustLStandEvasiveActionsFL: RifleAdjustLStandActions
		{
			AdjustB = "";
			AdjustF = "";
			AdjustL = "";
			AdjustR = "";
			PlayerCrouch = "AadjPknlMevaSrasWrflDfl_left";
			Up = "AadjPknlMevaSrasWrflDfl_left";
		};
		class RifleAdjustLStandEvasiveActionsFR: RifleAdjustLStandActions
		{
			AdjustB = "";
			AdjustF = "";
			AdjustL = "";
			AdjustR = "";
			PlayerCrouch = "AadjPknlMevaSrasWrflDfr_left";
			Up = "AadjPknlMevaSrasWrflDfr_left";
		};
		class RifleAdjustProneBaseActions: RifleProneActions
		{
			Crouch = "";
			Lying = "";
		};
		class RifleAdjustRKneelActions: RifleAdjustKneelBaseActions
		{
			AdjustL = "AmovPknlMstpSrasWrflDnon";
			Combat = "AadjPknlMstpSrasWrflDright";
			default = "AadjPknlMstpSrasWrflDright";
			down = "AadjPpneMstpSrasWrflDright";
			FastB = "AadjPknlMrunSrasWrflDb_right";
			FastF = "AadjPknlMevaSrasWrflDf_right";
			FastL = "AadjPknlMrunSrasWrflDl_right";
			FastLB = "AadjPknlMrunSrasWrflDbl_right";
			FastLF = "AadjPknlMevaSrasWrflDfl_right";
			FastR = "AadjPknlMrunSrasWrflDr_right";
			FastRB = "AadjPknlMrunSrasWrflDbr_right";
			FastRF = "AadjPknlMevaSrasWrflDfr_right";
			FireNotPossible = "AadjPknlMstpSrasWrflDright";
			PlayerCrouch = "AmovPknlMstpSrasWrflDnon";
			PlayerProne = "AadjPpneMstpSrasWrflDright";
			PlayerSlowB = "AadjPknlMrunSrasWrflDb_right";
			PlayerSlowF = "AadjPknlMrunSrasWrflDf_right";
			PlayerSlowL = "AadjPknlMrunSrasWrflDl_right";
			PlayerSlowLB = "AadjPknlMrunSrasWrflDbl_right";
			PlayerSlowLF = "AadjPknlMrunSrasWrflDfl_right";
			PlayerSlowR = "AadjPknlMrunSrasWrflDr_right";
			PlayerSlowRB = "AadjPknlMrunSrasWrflDbr_right";
			PlayerSlowRF = "AadjPknlMrunSrasWrflDfr_right";
			PlayerStand = "AadjPercMstpSrasWrflDright";
			PlayerTactB = "AadjPknlMtacSrasWrflDb_right";
			PlayerTactF = "AadjPknlMtacSrasWrflDf_right";
			PlayerTactL = "AadjPknlMtacSrasWrflDl_right";
			PlayerTactLB = "AadjPknlMtacSrasWrflDbl_right";
			PlayerTactLF = "AadjPknlMtacSrasWrflDfl_right";
			PlayerTactR = "AadjPknlMtacSrasWrflDr_right";
			PlayerTactRB = "AadjPknlMtacSrasWrflDbr_right";
			PlayerTactRF = "AadjPknlMtacSrasWrflDfr_right";
			PlayerWalkB = "AadjPknlMwlkSrasWrflDb_right";
			PlayerWalkF = "AadjPknlMwlkSrasWrflDf_right";
			PlayerWalkL = "AadjPknlMwlkSrasWrflDl_right";
			PlayerWalkLB = "AadjPknlMwlkSrasWrflDbl_right";
			PlayerWalkLF = "AadjPknlMwlkSrasWrflDfl_right";
			PlayerWalkR = "AadjPknlMwlkSrasWrflDr_right";
			PlayerWalkRB = "AadjPknlMwlkSrasWrflDbr_right";
			PlayerWalkRF = "AadjPknlMwlkSrasWrflDfr_right";
			SlowB = "AadjPknlMrunSrasWrflDb_right";
			SlowF = "AadjPknlMrunSrasWrflDf_right";
			SlowL = "AadjPknlMrunSrasWrflDl_right";
			SlowLB = "AadjPknlMrunSrasWrflDbl_right";
			SlowLF = "AadjPknlMrunSrasWrflDfl_right";
			SlowR = "AadjPknlMrunSrasWrflDr_right";
			SlowRB = "AadjPknlMrunSrasWrflDbr_right";
			SlowRF = "AadjPknlMrunSrasWrflDfr_right";
			Stand = "AmovPknlMstpSlowWrflDnon";
			stop = "AadjPknlMstpSrasWrflDright";
			StopRelaxed = "AadjPknlMstpSrasWrflDright";
			TactB = "AadjPknlMtacSrasWrflDb_right";
			TactF = "AadjPknlMtacSrasWrflDf_right";
			TactL = "AadjPknlMtacSrasWrflDl_right";
			TactLB = "AadjPknlMtacSrasWrflDbl_right";
			TactLF = "AadjPknlMtacSrasWrflDfl_right";
			TactR = "AadjPknlMtacSrasWrflDr_right";
			TactRB = "AadjPknlMtacSrasWrflDbr_right";
			TactRF = "AadjPknlMtacSrasWrflDfr_right";
			turnL = "AadjPknlMstpSrasWrflDright";
			turnLRelaxed = "AadjPknlMstpSrasWrflDright";
			turnR = "AadjPknlMstpSrasWrflDright";
			turnRRelaxed = "AadjPknlMstpSrasWrflDright";
			up = "AadjPercMstpSrasWrflDright";
			upDegree = "ManPosCombat";
			WalkB = "AadjPknlMwlkSrasWrflDb_right";
			WalkF = "AadjPknlMwlkSrasWrflDf_right";
			WalkL = "AadjPknlMwlkSrasWrflDl_right";
			WalkLB = "AadjPknlMwlkSrasWrflDbl_right";
			WalkLF = "AadjPknlMwlkSrasWrflDfl_right";
			WalkR = "AadjPknlMwlkSrasWrflDr_right";
			WalkRB = "AadjPknlMwlkSrasWrflDbr_right";
			WalkRF = "AadjPknlMwlkSrasWrflDfr_right";
		};
		class RifleAdjustRKneelActionsRunB: RifleAdjustRKneelActions
		{
			AdjustB = "";
			AdjustF = "";
			AdjustL = "";
			AdjustR = "";
			PlayerCrouch = "AadjPknlMtacSrasWrflDb_right";
			PlayerStand = "AadjPercMrunSrasWrflDb_right";
			Up = "AadjPercMrunSrasWrflDb_right";
		};
		class RifleAdjustRKneelActionsRunBL: RifleAdjustRKneelActions
		{
			AdjustB = "";
			AdjustF = "";
			AdjustL = "";
			AdjustR = "";
			PlayerCrouch = "AadjPknlMtacSrasWrflDbl_right";
			PlayerStand = "AadjPercMrunSrasWrflDbl_right";
			Up = "AadjPercMrunSrasWrflDbl_right";
		};
		class RifleAdjustRKneelActionsRunBR: RifleAdjustRKneelActions
		{
			AdjustB = "";
			AdjustF = "";
			AdjustL = "";
			AdjustR = "";
			PlayerCrouch = "AadjPknlMtacSrasWrflDbr_right";
			PlayerStand = "AadjPercMrunSrasWrflDbr_right";
		};
		class RifleAdjustRKneelActionsRunF: RifleAdjustRKneelActions
		{
			AdjustB = "";
			AdjustF = "";
			AdjustL = "";
			AdjustR = "";
			PlayerCrouch = "AadjPknlMtacSrasWrflDf_right";
			PlayerStand = "AadjPercMrunSrasWrflDf_right";
			Up = "AadjPercMrunSrasWrflDf_right";
		};
		class RifleAdjustRKneelActionsRunFL: RifleAdjustRKneelActions
		{
			AdjustB = "";
			AdjustF = "";
			AdjustL = "";
			AdjustR = "";
			PlayerCrouch = "AadjPknlMtacSrasWrflDfl_right";
			PlayerStand = "AadjPercMrunSrasWrflDfl_right";
			Up = "AadjPercMrunSrasWrflDfl_right";
		};
		class RifleAdjustRKneelActionsRunFR: RifleAdjustRKneelActions
		{
			AdjustB = "";
			AdjustF = "";
			AdjustL = "";
			AdjustR = "";
			PlayerCrouch = "AadjPknlMtacSrasWrflDfr_right";
			PlayerStand = "AadjPercMrunSrasWrflDfr_right";
			Up = "AadjPercMrunSrasWrflDfr_right";
		};
		class RifleAdjustRKneelActionsRunL: RifleAdjustRKneelActions
		{
			AdjustB = "";
			AdjustF = "";
			AdjustL = "";
			AdjustR = "";
			PlayerCrouch = "AadjPknlMtacSrasWrflDl_right";
			PlayerStand = "AadjPercMrunSrasWrflDl_right";
			Up = "AadjPercMrunSrasWrflDl_right";
		};
		class RifleAdjustRKneelActionsRunR: RifleAdjustRKneelActions
		{
			AdjustB = "";
			AdjustF = "";
			AdjustL = "";
			AdjustR = "";
			PlayerCrouch = "AadjPknlMtacSrasWrflDr_right";
			PlayerStand = "AadjPercMrunSrasWrflDr_right";
			Up = "AadjPercMrunSrasWrflDr_right";
		};
		class RifleAdjustRKneelActionsTacB: RifleAdjustRKneelActions
		{
			AdjustB = "";
			AdjustF = "";
			AdjustL = "";
			AdjustR = "";
			PlayerCrouch = "AadjPknlMrunSrasWrflDb_right";
			PlayerStand = "AadjPercMtacSrasWrflDb_right";
			Up = "AadjPercMtacSrasWrflDb_right";
		};
		class RifleAdjustRKneelActionsTacBL: RifleAdjustRKneelActions
		{
			AdjustB = "";
			AdjustF = "";
			AdjustL = "";
			AdjustR = "";
			PlayerCrouch = "AadjPknlMrunSrasWrflDbl_right";
			PlayerStand = "AadjPercMtacSrasWrflDbl_right";
			Up = "AadjPercMtacSrasWrflDbl_right";
		};
		class RifleAdjustRKneelActionsTacBR: RifleAdjustRKneelActions
		{
			AdjustB = "";
			AdjustF = "";
			AdjustL = "";
			AdjustR = "";
			PlayerCrouch = "AadjPknlMrunSrasWrflDbr_right";
			PlayerStand = "AadjPercMtacSrasWrflDbr_right";
		};
		class RifleAdjustRKneelActionsTacF: RifleAdjustRKneelActions
		{
			AdjustB = "";
			AdjustF = "";
			AdjustL = "";
			AdjustR = "";
			PlayerCrouch = "AadjPknlMrunSrasWrflDf_right";
			PlayerStand = "AadjPercMtacSrasWrflDf_right";
			Up = "AadjPercMtacSrasWrflDf_right";
		};
		class RifleAdjustRKneelActionsTacFL: RifleAdjustRKneelActions
		{
			AdjustB = "";
			AdjustF = "";
			AdjustL = "";
			AdjustR = "";
			PlayerCrouch = "AadjPknlMrunSrasWrflDfl_right";
			PlayerStand = "AadjPercMtacSrasWrflDfl_right";
			Up = "AadjPercMtacSrasWrflDfl_right";
		};
		class RifleAdjustRKneelActionsTacFR: RifleAdjustRKneelActions
		{
			AdjustB = "";
			AdjustF = "";
			AdjustL = "";
			AdjustR = "";
			PlayerCrouch = "AadjPknlMrunSrasWrflDfr_right";
			PlayerStand = "AadjPercMtacSrasWrflDfr_right";
			Up = "AadjPercMtacSrasWrflDfr_right";
		};
		class RifleAdjustRKneelActionsTacL: RifleAdjustRKneelActions
		{
			AdjustB = "";
			AdjustF = "";
			AdjustL = "";
			AdjustR = "";
			PlayerCrouch = "AadjPknlMrunSrasWrflDl_right";
			PlayerStand = "AadjPercMtacSrasWrflDl_right";
			Up = "AadjPercMtacSrasWrflDl_right";
		};
		class RifleAdjustRKneelActionsTacR: RifleAdjustRKneelActions
		{
			AdjustB = "";
			AdjustF = "";
			AdjustL = "";
			AdjustR = "";
			PlayerCrouch = "AadjPknlMrunSrasWrflDr_right";
			PlayerStand = "AadjPercMtacSrasWrflDr_right";
			Up = "AadjPercMtacSrasWrflDr_right";
		};
		class RifleAdjustRKneelActionsWlkB: RifleAdjustRKneelActions
		{
			AdjustB = "";
			AdjustF = "";
			AdjustL = "";
			AdjustR = "";
			PlayerStand = "AadjPercMwlkSrasWrflDb_right";
			Up = "AadjPercMwlkSrasWrflDb_right";
		};
		class RifleAdjustRKneelActionsWlkBL: RifleAdjustRKneelActions
		{
			AdjustB = "";
			AdjustF = "";
			AdjustL = "";
			AdjustR = "";
			PlayerStand = "AadjPercMwlkSrasWrflDbl_right";
			Up = "AadjPercMwlkSrasWrflDbl_right";
		};
		class RifleAdjustRKneelActionsWlkBR: RifleAdjustRKneelActions
		{
			AdjustB = "";
			AdjustF = "";
			AdjustL = "";
			AdjustR = "";
			PlayerStand = "AadjPercMwlkSrasWrflDbr_right";
			Stand = "AadjPknlMwlkSrasWrflDbr_right";
			Up = "AadjPercMwlkSrasWrflDbr_right";
		};
		class RifleAdjustRKneelActionsWlkF: RifleAdjustRKneelActions
		{
			AdjustB = "";
			AdjustF = "";
			AdjustL = "";
			AdjustR = "";
			PlayerStand = "AadjPercMwlkSrasWrflDf_right";
			Up = "AadjPercMwlkSrasWrflDf_right";
		};
		class RifleAdjustRKneelActionsWlkFL: RifleAdjustRKneelActions
		{
			AdjustB = "";
			AdjustF = "";
			AdjustL = "";
			AdjustR = "";
			PlayerStand = "AadjPercMwlkSrasWrflDfl_right";
			Up = "AadjPercMwlkSrasWrflDfl_right";
		};
		class RifleAdjustRKneelActionsWlkFR: RifleAdjustRKneelActions
		{
			AdjustB = "";
			AdjustF = "";
			AdjustL = "";
			AdjustR = "";
			PlayerStand = "AadjPercMwlkSrasWrflDfr_right";
			Up = "AadjPercMwlkSrasWrflDfr_right";
		};
		class RifleAdjustRKneelActionsWlkL: RifleAdjustRKneelActions
		{
			AdjustB = "";
			AdjustF = "";
			AdjustL = "";
			AdjustR = "";
			PlayerStand = "AadjPercMwlkSrasWrflDl_right";
			Up = "AadjPercMwlkSrasWrflDl_right";
		};
		class RifleAdjustRKneelActionsWlkR: RifleAdjustRKneelActions
		{
			AdjustB = "";
			AdjustF = "";
			AdjustL = "";
			AdjustR = "";
			PlayerStand = "AadjPercMwlkSrasWrflDr_right";
			Up = "AadjPercMwlkSrasWrflDr_right";
		};
		class RifleAdjustRKneelEvasiveActionsF: RifleAdjustRKneelActions
		{
			AdjustB = "";
			AdjustF = "";
			AdjustL = "";
			AdjustR = "";
			PlayerStand = "AadjPercMevaSrasWrflDf_left";
			Up = "AadjPercMevaSrasWrflDf_left";
		};
		class RifleAdjustRKneelEvasiveActionsFL: RifleAdjustRKneelActions
		{
			AdjustB = "";
			AdjustF = "";
			AdjustL = "";
			AdjustR = "";
			PlayerStand = "AadjPercMevaSrasWrflDfl_left";
			Up = "AadjPercMevaSrasWrflDfl_left";
		};
		class RifleAdjustRKneelEvasiveActionsFR: RifleAdjustRKneelActions
		{
			AdjustB = "";
			AdjustF = "";
			AdjustL = "";
			AdjustR = "";
			PlayerStand = "AadjPercMevaSrasWrflDfr_left";
			Up = "AadjPercMevaSrasWrflDfr_left";
		};
		class RifleAdjustRProneActions: RifleAdjustProneBaseActions
		{
			Combat = "AadjPpneMstpSrasWrflDright";
			default = "AadjPpneMstpSrasWrflDright";
			DismountOptic = "";
			EvasiveLeft = "AadjPpneMstpSrasWrflDright";
			EvasiveRight = "AadjPpneMstpSrasWrflDright";
			FastB = "AadjPpneMwlkSrasWrflDright_b";
			FastF = "AadjPpneMwlkSrasWrflDright_f";
			FastL = "AadjPpneMwlkSrasWrflDright_l";
			FastLB = "";
			FastLF = "";
			FastR = "AadjPpneMwlkSrasWrflDright_r";
			FastRB = "";
			FastRF = "";
			Gear = "";
			gestureAdvance[] = {"GestureAdvance", "Gesture"};
			GestureDismountMuzzle[] = {"GestureDismountMuzzle", "Gesture"};
			gestureFreeze = "";
			gestureGo = "";
			gestureGoB = "";
			GestureMountMuzzle[] = {"GestureMountMuzzle", "Gesture"};
			GestureReload_smg_03[] = {"GestureReload_smg_03ContextAnimDrive", "Gesture"};
			GestureReloadAK12[] = {"GestureReloadAK12ContextAnimDrive", "Gesture"};
			GestureReloadAK12_Drum[] = {"GestureReloadAK12_DrumContextAnimDrive", "Gesture"};
			GestureReloadAKM[] = {"GestureReloadAKMContext", "Gesture"};
			GestureReloadAKM_Drum[] = {"GestureReloadAKM_DrumContextAnimDrive", "Gesture"};
			GestureReloadAKS[] = {"GestureReloadAKSContext", "Gesture"};
			GestureReloadARX[] = {"GestureReloadARXContext", "Gesture"};
			GestureReloadARX2[] = {"GestureReloadARX2Context", "Gesture"};
			GestureReloadCTAR[] = {"GestureReloadCTARContext", "Gesture"};
			GestureReloadDMR[] = {"GestureReloadDMRContextAnimDrive", "Gesture"};
			GestureReloadDMR02[] = {"GestureReloadDMR02ContextAnimDrive", "Gesture"};
			GestureReloadDMR03[] = {"GestureReloadDMR03ContextAnimDrive", "Gesture"};
			GestureReloadDMR04[] = {"GestureReloadDMR04ContextAnimDrive", "Gesture"};
			GestureReloadDMR05[] = {"GestureReloadDMR05ContextAnimDrive", "Gesture"};
			GestureReloadDMR06[] = {"GestureReloadDMR06ContextAnimDrive", "Gesture"};
			GestureReloadDMR07[] = {"GestureReloadDMR07Context", "Gesture"};
			GestureReloadEBR[] = {"GestureReloadEBRContextAnimDrive", "Gesture"};
			GestureReloadFlaregun[] = {"GestureReloadFlaregunContextAnimDrive", "Gesture"};
			GestureReloadHunterShotgun01[] = {"GestureReloadHunterShotgun01ContextAnimDrive", "Gesture"};
			GestureReloadKatiba[] = {"GestureReloadKatibaContextAnimDrive", "Gesture"};
			GestureReloadKatibaUGL[] = {"GestureReloadKatibaUGLContextAnimDrive", "Gesture"};
			GestureReloadLIM[] = {"GestureReloadLIMContext", "Gesture"};
			GestureReloadLRR[] = {"GestureReloadLRRContextAnimDrive", "Gesture"};
			GestureReloadM200[] = {"GestureReloadM200ContextAnimDrive", "Gesture"};
			GestureReloadM4SSAS[] = {"GestureReloadM4SSASContextAnimDrive", "Gesture"};
			GestureReloadMk20[] = {"GestureReloadMk20ContextAnimDrive", "Gesture"};
			GestureReloadMk20UGL[] = {"GestureReloadMk20UGLContextAnimDrive", "Gesture"};
			GestureReloadMMG01[] = {"GestureReloadMMG01ContextAnimDrive", "Gesture"};
			GestureReloadMMG02[] = {"GestureReloadMMG02ContextAnimDrive", "Gesture"};
			GestureReloadMSBS[] = {"GestureReloadMSBSContextAnimDrive", "Gesture"};
			GestureReloadMSBS_UBS[] = {"GestureReloadMSBS_UBSContextAnimDrive", "Gesture"};
			GestureReloadMSBS_UGL[] = {"GestureReloadMSBS_UGLContextAnimDrive", "Gesture"};
			GestureReloadMX[] = {"GestureReloadMXContextAnimDrive", "Gesture"};
			GestureReloadMXCompact[] = {"GestureReloadMXCompactContextAnimDrive", "Gesture"};
			GestureReloadMXSniper[] = {"GestureReloadMXSniperContextAnimDrive", "Gesture"};
			GestureReloadMXUGL[] = {"GestureReloadMXUGLContextAnimDrive", "Gesture"};
			GestureReloadPistol[] = {"GestureReloadPistolContextAnimDrive", "Gesture"};
			GestureReloadPistolHeavy02[] = {"GestureReloadPistolHeavy02ContextAnimDrive", "Gesture"};
			GestureReloadSDAR[] = {"GestureReloadSDARContextAnimDrive", "Gesture"};
			GestureReloadSMG_01[] = {"GestureReloadSMG_01ContextAnimDrive", "Gesture"};
			GestureReloadSMG_02[] = {"GestureReloadSMG_02ContextAnimDrive", "Gesture"};
			GestureReloadSMG_03[] = {"GestureReloadSMG_03ContextAnimDrive", "Gesture"};
			GestureReloadSMG_05[] = {"GestureReloadSMG_05Context", "Gesture"};
			GestureReloadSPAR_01[] = {"GestureReloadSPAR_01Context", "Gesture"};
			GestureReloadSPAR_02[] = {"GestureReloadSPAR_02Context", "Gesture"};
			GestureReloadSPARUGL[] = {"GestureReloadSPARUGLContext", "Gesture"};
			GestureReloadTRG[] = {"GestureReloadTRGContextAnimDrive", "Gesture"};
			GestureReloadTRGUGL[] = {"GestureReloadTRGUGLContextAnimDrive", "Gesture"};
			gestureUp = "";
			leanLRot = 0.1;
			leanLShift = 0.1;
			leanRRot = 0.1;
			leanRShift = 0.1;
			limitFast = 3.5;
			MountOptic = "";
			PlayerProne = "AmovPpneMstpSrasWrflDnon";
			PlayerSlowB = "AadjPpneMwlkSrasWrflDright_b";
			PlayerSlowF = "AadjPpneMwlkSrasWrflDright_f";
			PlayerSlowL = "AadjPpneMwlkSrasWrflDright_l";
			PlayerSlowLB = "";
			PlayerSlowLF = "";
			PlayerSlowR = "AadjPpneMwlkSrasWrflDright_r";
			PlayerSlowRB = "";
			PlayerSlowRF = "";
			PlayerTactB = "AadjPpneMwlkSrasWrflDright_b";
			PlayerTactF = "AadjPpneMwlkSrasWrflDright_f";
			PlayerTactL = "AadjPpneMwlkSrasWrflDright_l";
			PlayerTactLB = "";
			PlayerTactLF = "";
			PlayerTactR = "AadjPpneMwlkSrasWrflDright_r";
			PlayerTactRB = "";
			PlayerTactRF = "";
			PlayerWalkB = "AadjPpneMwlkSrasWrflDright_b";
			PlayerWalkF = "AadjPpneMwlkSrasWrflDright_f";
			PlayerWalkL = "AadjPpneMwlkSrasWrflDright_l";
			PlayerWalkLB = "";
			PlayerWalkLF = "";
			PlayerWalkR = "AadjPpneMwlkSrasWrflDright_r";
			PlayerWalkRB = "";
			PlayerWalkRF = "";
			putDown = "AmovPpneMstpSrasWrflDnon";
			ReloadGM6[] = {"GestureReloadGM6Context", "Gesture"};
			reloadMGun = "";
			reloadMortar = "";
			SlowB = "AadjPpneMwlkSrasWrflDright_b";
			SlowF = "AadjPpneMwlkSrasWrflDright_f";
			SlowL = "AadjPpneMwlkSrasWrflDright_l";
			SlowLB = "";
			SlowLF = "";
			SlowR = "AadjPpneMwlkSrasWrflDright_r";
			SlowRB = "";
			SlowRF = "";
			stop = "AadjPpneMstpSrasWrflDright";
			stopRelaxed = "AadjPpneMstpSrasWrflDright";
			strokeGun = "";
			TactB = "AadjPpneMwlkSrasWrflDright_b";
			TactF = "AadjPpneMwlkSrasWrflDright_f";
			TactL = "AadjPpneMwlkSrasWrflDright_l";
			TactLB = "";
			TactLF = "";
			TactR = "AadjPpneMwlkSrasWrflDright_r";
			TactRB = "";
			TactRF = "";
			throwGrenade[] = {"GestureThrowGrenadeContext", "Gesture"};
			throwPrepare = "";
			turnL = "AadjPpneMstpSrasWrflDright";
			turnLRelaxed = "AadjPpneMstpSrasWrflDright";
			turnR = "AadjPpneMstpSrasWrflDright";
			turnRRelaxed = "AadjPpneMstpSrasWrflDright";
			WalkB = "AadjPpneMwlkSrasWrflDright_f";
			WalkF = "";
			WalkL = "";
			WalkLB = "";
			WalkLF = "";
			WalkR = "";
			WalkRB = "";
			WalkRF = "";
		};
		class RifleAdjustRStandActions: RifleAdjustStandBaseActions
		{
			AdjustB = "AadjPercMstpSrasWrflDdown";
			AdjustF = "AadjPercMstpSrasWrflDup";
			AdjustL = "AmovPercMstpSrasWrflDnon";
			AdjustLB = "AadjPercMstpSrasWrflDdown";
			AdjustLF = "AadjPercMstpSrasWrflDup";
			AdjustR = "AadjPercMstpSrasWrflDright";
			AdjustRB = "AadjPercMstpSrasWrflDdown";
			AdjustRF = "AadjPercMstpSrasWrflDup";
			Combat = "AadjPercMstpSrasWrflDright";
			Crouch = "AadjPknlMstpSrasWrflDright";
			default = "AadjPercMstpSrasWrflDright";
			down = "AadjPpneMstpSrasWrflDright";
			FastB = "AadjPercMrunSrasWrflDb_right";
			FastF = "AadjPercMevaSrasWrflDf_right";
			FastL = "AadjPercMrunSrasWrflDl_right";
			FastLB = "AadjPercMrunSrasWrflDbl_right";
			FastLF = "AadjPercMevaSrasWrflDfl_right";
			FastR = "AadjPercMrunSrasWrflDr_right";
			FastRB = "AadjPercMrunSrasWrflDbr_right";
			FastRF = "AadjPercMevaSrasWrflDfr_right";
			FireNotPossible = "AadjPercMstpSrasWrflDright";
			PlayerCrouch = "AadjPknlMstpSrasWrflDright";
			PlayerProne = "AadjPpneMstpSrasWrflDright";
			PlayerSlowB = "AadjPercMrunSrasWrflDb_right";
			PlayerSlowF = "AadjPercMrunSrasWrflDf_right";
			PlayerSlowL = "AadjPercMrunSrasWrflDl_right";
			PlayerSlowLB = "AadjPercMrunSrasWrflDbl_right";
			PlayerSlowLF = "AadjPercMrunSrasWrflDfl_right";
			PlayerSlowR = "AadjPercMrunSrasWrflDr_right";
			PlayerSlowRB = "AadjPercMrunSrasWrflDbr_right";
			PlayerSlowRF = "AadjPercMrunSrasWrflDfr_right";
			PlayerTactB = "AadjPercMtacSrasWrflDb_right";
			PlayerTactF = "AadjPercMtacSrasWrflDf_right";
			PlayerTactL = "AadjPercMtacSrasWrflDl_right";
			PlayerTactLB = "AadjPercMtacSrasWrflDbl_right";
			PlayerTactLF = "AadjPercMtacSrasWrflDfl_right";
			PlayerTactR = "AadjPercMtacSrasWrflDr_right";
			PlayerTactRB = "AadjPercMtacSrasWrflDbr_right";
			PlayerTactRF = "AadjPercMtacSrasWrflDfr_right";
			PlayerWalkB = "AadjPercMwlkSrasWrflDb_right";
			PlayerWalkF = "AadjPercMwlkSrasWrflDf_right";
			PlayerWalkL = "AadjPercMwlkSrasWrflDl_right";
			PlayerWalkLB = "AadjPercMwlkSrasWrflDbl_right";
			PlayerWalkLF = "AadjPercMwlkSrasWrflDfl_right";
			PlayerWalkR = "AadjPercMwlkSrasWrflDr_right";
			PlayerWalkRB = "AadjPercMwlkSrasWrflDbr_right";
			PlayerWalkRF = "AadjPercMwlkSrasWrflDfr_right";
			SlowB = "AadjPercMrunSrasWrflDb_right";
			SlowF = "AadjPercMrunSrasWrflDf_right";
			SlowL = "AadjPercMrunSrasWrflDl_right";
			SlowLB = "AadjPercMrunSrasWrflDbl_right";
			SlowLF = "AadjPercMrunSrasWrflDfl_right";
			SlowR = "AadjPercMrunSrasWrflDr_right";
			SlowRB = "AadjPercMrunSrasWrflDbr_right";
			SlowRF = "AadjPercMrunSrasWrflDfr_right";
			stop = "AadjPercMstpSrasWrflDright";
			StopRelaxed = "AadjPercMstpSrasWrflDright";
			TactB = "AadjPercMtacSrasWrflDb_right";
			TactF = "AadjPercMtacSrasWrflDf_right";
			TactL = "AadjPercMtacSrasWrflDl_right";
			TactLB = "AadjPercMtacSrasWrflDbl_right";
			TactLF = "AadjPercMtacSrasWrflDfl_right";
			TactR = "AadjPercMtacSrasWrflDr_right";
			TactRB = "AadjPercMtacSrasWrflDbr_right";
			TactRF = "AadjPercMtacSrasWrflDfr_right";
			turnL = "AadjPercMstpSrasWrflDright";
			turnLRelaxed = "AadjPercMstpSrasWrflDright";
			turnR = "AadjPercMstpSrasWrflDright";
			turnRRelaxed = "AadjPercMstpSrasWrflDright";
			up = "AadjPknlMstpSrasWrflDright";
			WalkB = "AadjPercMwlkSrasWrflDb_right";
			WalkF = "AadjPercMwlkSrasWrflDf_right";
			WalkL = "AadjPercMwlkSrasWrflDl_right";
			WalkLB = "AadjPercMwlkSrasWrflDbl_right";
			WalkLF = "AadjPercMwlkSrasWrflDfl_right";
			WalkR = "AadjPercMwlkSrasWrflDr_right";
			WalkRB = "AadjPercMwlkSrasWrflDbr_right";
			WalkRF = "AadjPercMwlkSrasWrflDfr_right";
		};
		class RifleAdjustRStandActionsRunB: RifleAdjustRStandActions
		{
			AdjustB = "";
			AdjustF = "";
			AdjustL = "";
			AdjustR = "";
			PlayerCrouch = "AadjPknlMrunSrasWrflDb_right";
			PlayerStand = "AadjPercMtacSrasWrflDb_right";
			Up = "AadjPknlMrunSrasWrflDb_right";
		};
		class RifleAdjustRStandActionsRunBL: RifleAdjustRStandActions
		{
			AdjustB = "";
			AdjustF = "";
			AdjustL = "";
			AdjustR = "";
			PlayerCrouch = "AadjPknlMrunSrasWrflDbl_right";
			PlayerStand = "AadjPercMtacSrasWrflDbl_right";
			Up = "AadjPknlMrunSrasWrflDbl_right";
		};
		class RifleAdjustRStandActionsRunBR: RifleAdjustRStandActions
		{
			AdjustB = "";
			AdjustF = "";
			AdjustL = "";
			AdjustR = "";
			PlayerCrouch = "AadjPknlMrunSrasWrflDbr_right";
			PlayerStand = "AadjPercMtacSrasWrflDbr_right";
		};
		class RifleAdjustRStandActionsRunF: RifleAdjustRStandActions
		{
			AdjustB = "";
			AdjustF = "";
			AdjustL = "";
			AdjustR = "";
			PlayerCrouch = "AadjPknlMrunSrasWrflDf_right";
			PlayerStand = "AadjPercMtacSrasWrflDf_right";
			Up = "AadjPknlMrunSrasWrflDf_right";
		};
		class RifleAdjustRStandActionsRunFL: RifleAdjustRStandActions
		{
			AdjustB = "";
			AdjustF = "";
			AdjustL = "";
			AdjustR = "";
			PlayerCrouch = "AadjPknlMrunSrasWrflDfl_right";
			PlayerStand = "AadjPercMtacSrasWrflDfl_right";
			Up = "AadjPknlMrunSrasWrflDfl_right";
		};
		class RifleAdjustRStandActionsRunFR: RifleAdjustRStandActions
		{
			AdjustB = "";
			AdjustF = "";
			AdjustL = "";
			AdjustR = "";
			PlayerCrouch = "AadjPknlMrunSrasWrflDfr_right";
			PlayerStand = "AadjPercMtacSrasWrflDfr_right";
			Up = "AadjPknlMrunSrasWrflDfr_right";
		};
		class RifleAdjustRStandActionsRunL: RifleAdjustRStandActions
		{
			AdjustB = "";
			AdjustF = "";
			AdjustL = "";
			AdjustR = "";
			PlayerCrouch = "AadjPknlMrunSrasWrflDl_right";
			PlayerStand = "AadjPercMtacSrasWrflDl_right";
			Up = "AadjPknlMrunSrasWrflDl_right";
		};
		class RifleAdjustRStandActionsRunR: RifleAdjustRStandActions
		{
			AdjustB = "";
			AdjustF = "";
			AdjustL = "";
			AdjustR = "";
			PlayerCrouch = "AadjPknlMrunSrasWrflDr_right";
			PlayerStand = "AadjPercMtacSrasWrflDr_right";
			Up = "AadjPknlMrunSrasWrflDr_right";
		};
		class RifleAdjustRStandActionsTacB: RifleAdjustRStandActions
		{
			AdjustB = "";
			AdjustF = "";
			AdjustL = "";
			AdjustR = "";
			PlayerCrouch = "AadjPknlMtacSrasWrflDb_right";
			PlayerStand = "AadjPercMrunSrasWrflDb_right";
			Up = "AadjPknlMtacSrasWrflDb_right";
		};
		class RifleAdjustRStandActionsTacBL: RifleAdjustRStandActions
		{
			AdjustB = "";
			AdjustF = "";
			AdjustL = "";
			AdjustR = "";
			PlayerCrouch = "AadjPknlMtacSrasWrflDbl_right";
			PlayerStand = "AadjPercMrunSrasWrflDbl_right";
			Up = "AadjPknlMtacSrasWrflDbl_right";
		};
		class RifleAdjustRStandActionsTacBR: RifleAdjustRStandActions
		{
			AdjustB = "";
			AdjustF = "";
			AdjustL = "";
			AdjustR = "";
			PlayerCrouch = "AadjPknlMtacSrasWrflDbr_right";
			PlayerStand = "AadjPercMrunSrasWrflDbr_right";
		};
		class RifleAdjustRStandActionsTacF: RifleAdjustRStandActions
		{
			AdjustB = "";
			AdjustF = "";
			AdjustL = "";
			AdjustR = "";
			PlayerCrouch = "AadjPknlMtacSrasWrflDf_right";
			PlayerStand = "AadjPercMrunSrasWrflDf_right";
			Up = "AadjPknlMtacSrasWrflDf_right";
		};
		class RifleAdjustRStandActionsTacFL: RifleAdjustRStandActions
		{
			AdjustB = "";
			AdjustF = "";
			AdjustL = "";
			AdjustR = "";
			PlayerCrouch = "AadjPknlMtacSrasWrflDfl_right";
			PlayerStand = "AadjPercMrunSrasWrflDfl_right";
			Up = "AadjPknlMtacSrasWrflDfl_right";
		};
		class RifleAdjustRStandActionsTacFR: RifleAdjustRStandActions
		{
			AdjustB = "";
			AdjustF = "";
			AdjustL = "";
			AdjustR = "";
			PlayerCrouch = "AadjPknlMtacSrasWrflDfr_right";
			PlayerStand = "AadjPercMrunSrasWrflDfr_right";
			Up = "AadjPknlMtacSrasWrflDfr_right";
		};
		class RifleAdjustRStandActionsTacL: RifleAdjustRStandActions
		{
			AdjustB = "";
			AdjustF = "";
			AdjustL = "";
			AdjustR = "";
			PlayerCrouch = "AadjPknlMtacSrasWrflDl_right";
			PlayerStand = "AadjPercMrunSrasWrflDl_right";
			Up = "AadjPknlMtacSrasWrflDl_right";
		};
		class RifleAdjustRStandActionsTacR: RifleAdjustRStandActions
		{
			AdjustB = "";
			AdjustF = "";
			AdjustL = "";
			AdjustR = "";
			PlayerCrouch = "AadjPknlMtacSrasWrflDr_right";
			PlayerStand = "AadjPercMrunSrasWrflDr_right";
			Up = "AadjPknlMtacSrasWrflDr_right";
		};
		class RifleAdjustRStandActionsWlkB: RifleAdjustRStandActions
		{
			AdjustB = "";
			AdjustF = "";
			AdjustL = "";
			AdjustR = "";
			PlayerCrouch = "AadjPknlMwlkSrasWrflDb_right";
			Up = "AadjPknlMwlkSrasWrflDb_right";
		};
		class RifleAdjustRStandActionsWlkBL: RifleAdjustRStandActions
		{
			AdjustB = "";
			AdjustF = "";
			AdjustL = "";
			AdjustR = "";
			PlayerCrouch = "AadjPknlMwlkSrasWrflDbl_right";
			Up = "AadjPknlMwlkSrasWrflDbl_right";
		};
		class RifleAdjustRStandActionsWlkBR: RifleAdjustRStandActions
		{
			AdjustB = "";
			AdjustF = "";
			AdjustL = "";
			AdjustR = "";
			PlayerCrouch = "AadjPknlMwlkSrasWrflDbr_right";
			Stand = "AadjPercMwlkSrasWrflDbr_right";
			Up = "AadjPknlMwlkSrasWrflDbr_right";
		};
		class RifleAdjustRStandActionsWlkF: RifleAdjustRStandActions
		{
			AdjustB = "";
			AdjustF = "";
			AdjustL = "";
			AdjustR = "";
			PlayerCrouch = "AadjPknlMwlkSrasWrflDf_right";
			Up = "AadjPknlMwlkSrasWrflDf_right";
		};
		class RifleAdjustRStandActionsWlkFL: RifleAdjustRStandActions
		{
			AdjustB = "";
			AdjustF = "";
			AdjustL = "";
			AdjustR = "";
			PlayerCrouch = "AadjPknlMwlkSrasWrflDfl_right";
			Up = "AadjPknlMwlkSrasWrflDfl_right";
		};
		class RifleAdjustRStandActionsWlkFR: RifleAdjustRStandActions
		{
			AdjustB = "";
			AdjustF = "";
			AdjustL = "";
			AdjustR = "";
			PlayerCrouch = "AadjPknlMwlkSrasWrflDfr_right";
			Up = "AadjPknlMwlkSrasWrflDfr_right";
		};
		class RifleAdjustRStandActionsWlkL: RifleAdjustRStandActions
		{
			AdjustB = "";
			AdjustF = "";
			AdjustL = "";
			AdjustR = "";
			PlayerCrouch = "AadjPknlMwlkSrasWrflDl_right";
			Up = "AadjPknlMwlkSrasWrflDl_right";
		};
		class RifleAdjustRStandActionsWlkR: RifleAdjustRStandActions
		{
			AdjustB = "";
			AdjustF = "";
			AdjustL = "";
			AdjustR = "";
			PlayerCrouch = "AadjPknlMwlkSrasWrflDr_right";
			Up = "AadjPknlMwlkSrasWrflDr_right";
		};
		class RifleAdjustRStandEvasiveActionsF: RifleAdjustRStandActions
		{
			AdjustB = "";
			AdjustF = "";
			AdjustL = "";
			AdjustR = "";
			PlayerCrouch = "AadjPknlMevaSrasWrflDf_right";
			Up = "AadjPknlMevaSrasWrflDf_right";
		};
		class RifleAdjustRStandEvasiveActionsFL: RifleAdjustRStandActions
		{
			AdjustB = "";
			AdjustF = "";
			AdjustL = "";
			AdjustR = "";
			PlayerCrouch = "AadjPknlMevaSrasWrflDfl_right";
			Up = "AadjPknlMevaSrasWrflDfl_right";
		};
		class RifleAdjustRStandEvasiveActionsFR: RifleAdjustRStandActions
		{
			AdjustB = "";
			AdjustF = "";
			AdjustL = "";
			AdjustR = "";
			PlayerCrouch = "AadjPknlMevaSrasWrflDfr_right";
			Up = "AadjPknlMevaSrasWrflDfr_right";
		};
		class RifleAdjustStandBaseActions: RifleBaseStandActions
		{
			Crouch = "";
			Lying = "";
		};
		class RifleBaseLowStandActions: NoActions
		{
			agonyStart = "AinjPpneMstpSnonWrflDnon";
			agonyStop = "AmovPpneMstpSrasWrflDnon";
			binocOff = "AmovPercMstpSrasWrflDnon";
			binocOn = "AwopPercMstpSoptWbinDnon_rfl";
			Binoculars = "AmovPercMstpSoptWbinDnon";
			BottomDive = "AbdvPercMrunSnonWrflDf";
			bottomSwim = "AbswPercMrunSnonWnonDf";
			CanNotMove = "AmovPercMstpSrasWrflDnon";
			Civil = "AmovPercMstpSnonWnonDnon";
			CivilLying = "AmovPpneMstpSnonWnonDnon";
			Combat = "AmovPercMstpSrasWrflDnon";
			Crouch = "AmovPknlMstpSlowWrflDnon";
			default = "AmovPercMstpSlowWrflDnon";
			Diary = "";
			DismountOptic = "DismountOptic";
			DismountSide = "DismountSide";
			down = "AmovPpneMstpSrasWrflDnon";
			EvasiveLeft = "";
			EvasiveRight = "";
			FastB = "AmovPercMrunSlowWrflDb";
			FastF = "AmovPercMevaSlowWrflDf";
			FastL = "AmovPercMrunSlowWrflDl";
			FastLB = "AmovPercMrunSlowWrflDbl";
			FastLF = "AmovPercMevaSlowWrflDfl";
			FastR = "AmovPercMrunSlowWrflDr";
			FastRB = "AmovPercMrunSlowWrflDbr";
			FastRF = "AmovPercMevaSlowWrflDfr";
			FireNotPossible = "AmovPercMstpSrasWrflDnon";
			Gear = "AmovPercMstpSlowWrflDnon_gear";
			gestureAdvance[] = {"GestureAttackStand", "Gesture"};
			gestureCeaseFire[] = {"GestureCeaseFire", "Gesture"};
			gestureCover[] = {"GestureCover", "Gesture"};
			gestureFollow[] = {"GestureFollow", "Gesture"};
			gestureFreeze[] = {"GestureFreezeStand", "Gesture"};
			gestureGo[] = {"GestureGoStand", "Gesture"};
			gestureGoB[] = {"GestureGoBStand", "Gesture"};
			gestureHi[] = {"GestureHi", "Gesture"};
			gestureHiB[] = {"GestureHiB", "Gesture"};
			gestureHiC[] = {"GestureHiC", "Gesture"};
			gestureNo[] = {"GestureNo", "Gesture"};
			gesturePoint[] = {"GestureAttackStand", "Gesture"};
			gestureUp[] = {"GestureUp", "Gesture"};
			gestureYes[] = {"GestureYes", "Gesture"};
			GetInHelicopterCargo = "GetInHelicopterCargoRfl";
			GetInHigh = "AmovPercMstpSnonWnonDnon_AcrgPknlMstpSnonWnonDnon_getInHigh";
			GetInLow = "AmovPercMstpSnonWnonDnon_AcrgPknlMstpSnonWnonDnon_getInLow";
			GetInMedium = "AmovPercMstpSnonWnonDnon_AcrgPknlMstpSnonWnonDnon_getInMedium";
			GetInMRAP_01 = "GetInMRAP_01Rfl";
			GetInMRAP_01_cargo = "GetInMRAP_01_cargoRfl";
			GetInSDV = "AmovPercMstpSnonWnonDnon_AcrgPknlMstpSnonWnonDnon_getInHigh";
			GetInVertical = "GetIn_Vertical_Rifle";
			GetOutHeli_Attack_01Gunner = "Heli_Attack_01Gunner_AmovPercMstpSlowWrflDnon";
			GetOutHeli_Attack_01Pilot = "Heli_Attack_01Pilot_AmovPercMstpSlowWrflDnon";
			GetOutHelicopterCargo = "GetOutHelicopterCargoRfl";
			GetOutHigh = "AcrgPknlMstpSnonWnonDnon_AmovPercMstpSrasWrflDnon_getOutHigh";
			GetOutHighHemtt = "AcrgPknlMstpSnonWnonDnon_AmovPercMstpSrasWrflDnon_getOutHighHemtt";
			GetOutHighZamak = "AcrgPknlMstpSnonWnonDnon_AmovPercMstpSrasWrflDnon_getOutHighZamak";
			GetOutLow = "AcrgPknlMstpSnonWnonDnon_AmovPercMstpSrasWrflDnon_getOutLow";
			GetOutMedium = "AcrgPknlMstpSnonWnonDnon_AmovPercMstpSrasWrflDnon_getOutMedium";
			GetOutMRAP_01 = "GetOutMRAP_01Rfl";
			GetOutMRAP_01_cargo = "GetOutMRAP_01_cargoRfl";
			GetOutPara = "AparPercMstpSnonWnonDnon_AmovPpneMstpSnonWnonDnon";
			GetOutSDV = "AcrgPknlMstpSnonWnonDnon_AmovPercMstpSrasWrflDnon_getOutHigh";
			getOver = "AovrPercMstpSlowWrflDf";
			handGunOn = "AmovPercMstpSrasWpstDnon";
			healedStart = "AinjPpneMstpSnonWrflDnon_injuredHealed";
			healedStop = "AinjPpneMstpSnonWrflDnon";
			ladderOnDown = "LadderRifleOn";
			ladderOnUp = "LadderRifleOn";
			leanLRot = 0.5;
			leanLShift = 0.01;
			leanRRot = 0.5;
			leanRShift = 0.01;
			limitFast = 5.5;
			LimpB = "AmovPercMlmpSlowWrflDb";
			LimpF = "AmovPercMlmpSlowWrflDf";
			LimpL = "AmovPercMlmpSlowWrflDl";
			LimpLB = "AmovPercMlmpSlowWrflDbl";
			LimpLF = "AmovPercMlmpSlowWrflDfl";
			LimpR = "AmovPercMlmpSlowWrflDr";
			LimpRB = "AmovPercMlmpSlowWrflDbr";
			LimpRF = "AmovPercMlmpSlowWrflDfr";
			Lying = "AmovPpneMstpSrasWrflDnon";
			medic = "AinvPknlMstpSlayWrflDnon_medic";
			medicOther = "AinvPknlMstpSlayWrflDnon_medicOther";
			medicStart = "AinvPknlMstpSnonWrflDnon_medic0S";
			medicStartRightSide = "AinvPknlMstpSnonWrflDr_medic0S";
			medicStop = "AinvPknlMstpSnonWrflDnon_medicEnd";
			medicUp = "AinvPknlMstpSlayWrflDnon_medicUp";
			MountOptic = "MountOptic";
			MountSide = "MountSide";
			PlayerCrouch = "AmovPknlMstpSlowWrflDnon";
			PlayerProne = "AmovPpneMstpSrasWrflDnon";
			PlayerSlowB = "AmovPercMrunSlowWrflDb";
			PlayerSlowF = "AmovPercMrunSlowWrflDf";
			PlayerSlowL = "AmovPercMrunSlowWrflDl";
			PlayerSlowLB = "AmovPercMrunSlowWrflDbl";
			PlayerSlowLF = "AmovPercMrunSlowWrflDfl";
			PlayerSlowR = "AmovPercMrunSlowWrflDr";
			PlayerSlowRB = "AmovPercMrunSlowWrflDbr";
			PlayerSlowRF = "AmovPercMrunSlowWrflDfr";
			PlayerStand = "AmovPercMstpSlowWrflDnon";
			PlayerTactB = "AmovPercMtacSlowWrflDb_ver2";
			PlayerTactF = "AmovPercMtacSlowWrflDf_ver2";
			PlayerTactL = "AmovPercMtacSlowWrflDl_ver2";
			PlayerTactLB = "AmovPercMtacSlowWrflDbl_ver2";
			PlayerTactLF = "AmovPercMtacSlowWrflDfl_ver2";
			PlayerTactR = "AmovPercMtacSlowWrflDr_ver2";
			PlayerTactRB = "AmovPercMtacSlowWrflDbr_ver2";
			PlayerTactRF = "AmovPercMtacSlowWrflDfr_ver2";
			PlayerWalkB = "AmovPercMwlkSlowWrflDb_ver2";
			PlayerWalkF = "AmovPercMwlkSlowWrflDf_ver2";
			PlayerWalkL = "AmovPercMwlkSlowWrflDl_ver2";
			PlayerWalkLB = "AmovPercMwlkSlowWrflDbl_ver2";
			PlayerWalkLF = "AmovPercMwlkSlowWrflDfl_ver2";
			PlayerWalkR = "AmovPercMwlkSlowWrflDr_ver2";
			PlayerWalkRB = "AmovPercMwlkSlowWrflDbr_ver2";
			PlayerWalkRF = "AmovPercMwlkSlowWrflDfr_ver2";
			PrimaryWeapon = "AmovPercMstpSrasWrflDnon";
			putDown = "AmovPknlMstpSrasWrflDnon_explo";
			Relax = "AmovPknlMstpSlowWrflDnon_relax";
			reloadGM6[] = {"GestureReloadGM6", "Gesture"};
			reloadMagazine[] = {"WeaponMagazineReloadStand_g", "Gesture"};
			reloadMGun = "AmovPercMstpSlowWrflDnon";
			reloadMortar = "AmovPercMstpSlowWrflDnon";
			salute = "AmovPercMstpSlowWrflDnon_salute";
			saluteOff = "AmovPercMstpSlowWrflDnon";
			SecondaryWeapon = "AmovPercMstpSrasWlnrDnon";
			sitDown = "AmovPsitMstpSlowWrflDnon";
			SlowB = "AmovPercMrunSlowWrflDb";
			SlowF = "AmovPercMrunSlowWrflDf";
			SlowL = "AmovPercMrunSlowWrflDl";
			SlowLB = "AmovPercMrunSlowWrflDbl";
			SlowLF = "AmovPercMrunSlowWrflDfl";
			SlowR = "AmovPercMrunSlowWrflDr";
			SlowRB = "AmovPercMrunSlowWrflDbr";
			SlowRF = "AmovPercMrunSlowWrflDfr";
			stance = "ManStanceStand";
			Stand = "AmovPercMstpSrasWrflDnon";
			startDive = "AdvePercMrunSnonWrflDf";
			StartFreefall = "AfalPercMstpSrasWrflDnon";
			startSwim = "AswmPercMrunSnonWnonDf";
			stop = "AmovPercMstpSlowWrflDnon";
			StopRelaxed = "AidlPercMstpSlowWrflDnon_AI";
			strokeGun = "AmovPercMstpSrasWrflDnon";
			SurfaceDive = "AsdvPercMrunSnonWrflDf";
			surfaceSwim = "AsswPercMrunSnonWnonDf";
			Surrender = "AmovPercMstpSsurWnonDnon";
			TactB = "AmovPercMtacSlowWrflDb_ver2";
			TactF = "AmovPercMtacSlowWrflDf_ver2";
			TactL = "AmovPercMtacSlowWrflDl_ver2";
			TactLB = "AmovPercMtacSlowWrflDbl_ver2";
			TactLF = "AmovPercMtacSlowWrflDfl_ver2";
			TactR = "AmovPercMtacSlowWrflDr_ver2";
			TactRB = "AmovPercMtacSlowWrflDbr_ver2";
			TactRF = "AmovPercMtacSlowWrflDfr_ver2";
			takeFlag = "AinvPknlMstpSlayWrflDnon";
			throwGrenade[] = {"GestureThrowGrenade", "Gesture"};
			throwPrepare = "AwopPercMstpSgthWrflDnon_Start1";
			treated = "AinvPknlMstpSlayWrflDnon_healed";
			turnL = "AmovPercMstpSlowWrflDnon_turnL";
			turnLRelaxed = "AmovPercMstpSlowWrflDnon_turnL";
			turnR = "AmovPercMstpSlowWrflDnon_turnR";
			turnRRelaxed = "AmovPercMstpSlowWrflDnon_turnR";
			turnSpeed = 8;
			up = "AmovPknlMstpSlowWrflDnon";
			upDegree = "ManPosStand";
			WalkB = "AmovPercMwlkSlowWrflDb_ver2";
			WalkF = "AmovPercMwlkSlowWrflDf_ver2";
			WalkL = "AmovPercMwlkSlowWrflDl_ver2";
			WalkLB = "AmovPercMwlkSlowWrflDbl_ver2";
			WalkLF = "AmovPercMwlkSlowWrflDfl_ver2";
			WalkR = "AmovPercMwlkSlowWrflDr_ver2";
			WalkRB = "AmovPercMwlkSlowWrflDbr_ver2";
			WalkRF = "AmovPercMwlkSlowWrflDfr_ver2";
			weaponOff = "AmovPercMstpSrasWrflDnon";
			weaponOn = "AmovPknlMstpSrasWlnrDnon";
		};
		class RifleBaseStandActions: RifleBaseLowStandActions
		{
			CanNotMove = "AmovPercMstpSlowWrflDnon";
			Crouch = "AmovPknlMstpSrasWrflDnon";
			default = "AmovPercMstpSrasWrflDnon";
			EvasiveLeft = "";
			EvasiveRight = "";
			FastB = "AmovPercMrunSrasWrflDb";
			FastF = "AmovPercMevaSrasWrflDf";
			FastL = "AmovPercMevaSrasWrflDl";
			FastLB = "AmovPercMrunSrasWrflDbl";
			FastLF = "AmovPercMevaSrasWrflDfl";
			FastR = "AmovPercMevaSrasWrflDr";
			FastRB = "AmovPercMrunSrasWrflDbr";
			FastRF = "AmovPercMevaSrasWrflDfr";
			GetInBoat = "GetInHeli_Transport_01Cargo";
			GetOutBoat = "AcrgPknlMstpSnonWnonDnon_AmovPercMstpSrasWrflDnon_getOutLow";
			getOver = "AovrPercMstpSrasWrflDf";
			LimpB = "AmovPercMlmpSrasWrflDb";
			LimpF = "AmovPercMlmpSrasWrflDf";
			LimpL = "AmovPercMlmpSrasWrflDl";
			LimpLB = "AmovPercMlmpSrasWrflDbl";
			LimpLF = "AmovPercMlmpSrasWrflDfl";
			LimpR = "AmovPercMlmpSrasWrflDr";
			LimpRB = "AmovPercMlmpSrasWrflDbr";
			LimpRF = "AmovPercMlmpSrasWrflDfr";
			PlayerCrouch = "AmovPknlMstpSrasWrflDnon";
			PlayerSlowB = "AmovPercMrunSrasWrflDb";
			PlayerSlowF = "AmovPercMrunSrasWrflDf";
			PlayerSlowL = "AmovPercMrunSrasWrflDl";
			PlayerSlowLB = "AmovPercMrunSrasWrflDbl";
			PlayerSlowLF = "AmovPercMrunSrasWrflDfl";
			PlayerSlowR = "AmovPercMrunSrasWrflDr";
			PlayerSlowRB = "AmovPercMrunSrasWrflDbr";
			PlayerSlowRF = "AmovPercMrunSrasWrflDfr";
			PlayerStand = "AmovPercMstpSrasWrflDnon";
			PlayerTactB = "AmovPercMtacSrasWrflDb";
			PlayerTactF = "AmovPercMtacSrasWrflDf";
			PlayerTactL = "AmovPercMtacSrasWrflDl";
			PlayerTactLB = "AmovPercMtacSrasWrflDbl";
			PlayerTactLF = "AmovPercMtacSrasWrflDfl";
			PlayerTactR = "AmovPercMtacSrasWrflDr";
			PlayerTactRB = "AmovPercMtacSrasWrflDbr";
			PlayerTactRF = "AmovPercMtacSrasWrflDfr";
			PlayerWalkB = "AmovPercMwlkSrasWrflDb";
			PlayerWalkF = "AmovPercMwlkSrasWrflDf";
			PlayerWalkL = "AmovPercMwlkSrasWrflDl";
			PlayerWalkLB = "AmovPercMwlkSrasWrflDbl";
			PlayerWalkLF = "AmovPercMwlkSrasWrflDfl";
			PlayerWalkR = "AmovPercMwlkSrasWrflDr";
			PlayerWalkRB = "AmovPercMwlkSrasWrflDbr";
			PlayerWalkRF = "AmovPercMwlkSrasWrflDfr";
			reloadMGun = "AmovPercMstpSrasWrflDnon";
			reloadMortar = "AmovPercMstpSrasWrflDnon";
			salute = "AmovPercMstpSrasWrflDnon_salute";
			saluteOff = "AmovPercMstpSrasWrflDnon";
			SlowB = "AmovPercMrunSrasWrflDb_ldst";
			SlowF = "AmovPercMrunSrasWrflDf_ldst";
			SlowL = "AmovPercMrunSrasWrflDl_ldst";
			SlowLB = "AmovPercMrunSrasWrflDbl_ldst";
			SlowLF = "AmovPercMrunSrasWrflDfl_ldst";
			SlowR = "AmovPercMrunSrasWrflDr_ldst";
			SlowRB = "AmovPercMrunSrasWrflDbr_ldst";
			SlowRF = "AmovPercMrunSrasWrflDfr_ldst";
			Stand = "AmovPercMstpSlowWrflDnon";
			stop = "AmovPercMstpSrasWrflDnon";
			StopRelaxed = "AidlPercMstpSrasWrflDnon_AI";
			TactB = "AmovPercMtacSrasWrflDb";
			TactF = "AmovPercMtacSrasWrflDf";
			TactL = "AmovPercMtacSrasWrflDl";
			TactLB = "AmovPercMtacSrasWrflDbl";
			TactLF = "AmovPercMtacSrasWrflDfl";
			TactR = "AmovPercMtacSrasWrflDr";
			TactRB = "AmovPercMtacSrasWrflDbr";
			TactRF = "AmovPercMtacSrasWrflDfr";
			throwPrepare = "AwopPercMstpSgthWrflDnon_Start2";
			turnL = "AmovPercMstpSrasWrflDnon_turnL";
			turnLRelaxed = "AmovPercMstpSrasWrflDnon_turnL";
			turnR = "AmovPercMstpSrasWrflDnon_turnR";
			turnRRelaxed = "AmovPercMstpSrasWrflDnon_turnR";
			up = "AmovPknlMstpSrasWrflDnon";
			upDegree = "ManPosCombat";
			WalkB = "AmovPercMwlkSrasWrflDb";
			WalkF = "AmovPercMwlkSrasWrflDf";
			WalkL = "AmovPercMwlkSrasWrflDl";
			WalkLB = "AmovPercMwlkSrasWrflDbl";
			WalkLF = "AmovPercMwlkSrasWrflDfl";
			WalkR = "AmovPercMwlkSrasWrflDr";
			WalkRB = "AmovPercMwlkSrasWrflDbr";
			WalkRF = "AmovPercMwlkSrasWrflDfr";
			WeaponOn = "AmovPercMstpSrasWlnrDnon";
		};
		class RifleCrouchActions: RifleKneelActions
		{
			AdjustB = "AadjPcrhMstpSrasWrflDdown";
			AdjustF = "AadjPcrhMstpSrasWrflDup";
			AdjustL = "AadjPcrhMstpSrasWrflDleft";
			AdjustLB = "AadjPcrhMstpSrasWrflDdown";
			AdjustLF = "AadjPcrhMstpSrasWrflDup";
			AdjustR = "AadjPcrhMstpSrasWrflDright";
			AdjustRB = "AadjPcrhMstpSrasWrflDdown";
			AdjustRF = "AadjPcrhMstpSrasWrflDup";
			Crouch = "AmovPcrhMstpSrasWrflDnon";
			PlayerCrouch = "AmovPknlMstpSrasWrflDnon";
			Stop = "AmovPcrhMstpSrasWrflDnon";
		};
		class RifleKneelActions: RifleBaseStandActions
		{
			AdjustB = "AadjPknlMstpSrasWrflDdown";
			AdjustF = "AadjPknlMstpSrasWrflDup";
			AdjustL = "AadjPknlMstpSrasWrflDleft";
			AdjustLB = "AadjPknlMstpSrasWrflDdown";
			AdjustLF = "AadjPknlMstpSrasWrflDup";
			AdjustR = "AadjPknlMstpSrasWrflDright";
			AdjustRB = "AadjPknlMstpSrasWrflDdown";
			AdjustRF = "AadjPknlMstpSrasWrflDup";
			binocOff = "AmovPknlMstpSrasWrflDnon";
			binocOn = "AwopPknlMstpSoptWbinDnon_rfl";
			Binoculars = "AmovPknlMstpSoptWbinDnon";
			CanNotMove = "AmovPknlMstpSrasWrflDnon";
			default = "AmovPknlMstpSrasWrflDnon";
			Diary = "";
			EvasiveLeft = "AmovPknlMevaSrasWrflDfl";
			EvasiveRight = "AmovPknlMevaSrasWrflDfr";
			FastB = "AmovPknlMrunSrasWrflDb";
			FastF = "AmovPknlMevaSrasWrflDf";
			FastL = "AmovPknlMevaSrasWrflDl";
			FastLB = "AmovPknlMrunSrasWrflDbl";
			FastLF = "AmovPknlMevaSrasWrflDfl";
			FastR = "AmovPknlMevaSrasWrflDr";
			FastRB = "AmovPknlMrunSrasWrflDbr";
			FastRF = "AmovPknlMevaSrasWrflDfr";
			FireNotPossible = "AmovPknlMstpSrasWrflDnon";
			Gear = "AinvPknlMstpSrasWrflDnon";
			handGunOn = "AmovPknlMstpSrasWpstDnon";
			LimpB = "AmovPknlMlmpSrasWrflDb";
			LimpF = "AmovPknlMlmpSrasWrflDf";
			LimpL = "AmovPknlMlmpSrasWrflDl";
			LimpLB = "AmovPknlMlmpSrasWrflDbl";
			LimpLF = "AmovPknlMlmpSrasWrflDfl";
			LimpR = "AmovPknlMlmpSrasWrflDr";
			LimpRB = "AmovPknlMlmpSrasWrflDbr";
			LimpRF = "AmovPknlMlmpSrasWrflDfr";
			medicStop = "AmovPknlMstpSrasWrflDnon";
			PlayerCrouch = "";
			PlayerSlowB = "AmovPknlMrunSrasWrflDb";
			PlayerSlowF = "AmovPknlMrunSrasWrflDf";
			PlayerSlowL = "AmovPknlMrunSrasWrflDl";
			PlayerSlowLB = "AmovPknlMrunSrasWrflDbl";
			PlayerSlowLF = "AmovPknlMrunSrasWrflDfl";
			PlayerSlowR = "AmovPknlMrunSrasWrflDr";
			PlayerSlowRB = "AmovPknlMrunSrasWrflDbr";
			PlayerSlowRF = "AmovPknlMrunSrasWrflDfr";
			PlayerTactB = "AmovPknlMtacSrasWrflDb";
			PlayerTactF = "AmovPknlMtacSrasWrflDf";
			PlayerTactL = "AmovPknlMtacSrasWrflDl";
			PlayerTactLB = "AmovPknlMtacSrasWrflDbl";
			PlayerTactLF = "AmovPknlMtacSrasWrflDfl";
			PlayerTactR = "AmovPknlMtacSrasWrflDr";
			PlayerTactRB = "AmovPknlMtacSrasWrflDbr";
			PlayerTactRF = "AmovPknlMtacSrasWrflDfr";
			PlayerWalkB = "AmovPknlMwlkSrasWrflDb";
			PlayerWalkF = "AmovPknlMwlkSrasWrflDf";
			PlayerWalkL = "AmovPknlMwlkSrasWrflDl";
			PlayerWalkLB = "AmovPknlMwlkSrasWrflDbl";
			PlayerWalkLF = "AmovPknlMwlkSrasWrflDfl";
			PlayerWalkR = "AmovPknlMwlkSrasWrflDr";
			PlayerWalkRB = "AmovPknlMwlkSrasWrflDbr";
			PlayerWalkRF = "AmovPknlMwlkSrasWrflDfr";
			PrimaryWeapon = "AmovPknlMstpSrasWrflDnon";
			putDown = "AmovPknlMstpSrasWrflDnon_AinvPknlMstpSrasWrflDnon_Putdown";
			reloadMGun = "AmovPknlMstpSrasWrflDnon";
			reloadMortar = "AmovPknlMstpSrasWrflDnon";
			salute = "";
			SecondaryWeapon = "AmovPknlMstpSrasWlnrDnon";
			SlowB = "AmovPknlMrunSrasWrflDb";
			SlowF = "AmovPknlMrunSrasWrflDf";
			SlowL = "AmovPknlMrunSrasWrflDl";
			SlowLB = "AmovPknlMrunSrasWrflDbl";
			SlowLF = "AmovPknlMrunSrasWrflDfl";
			SlowR = "AmovPknlMrunSrasWrflDr";
			SlowRB = "AmovPknlMrunSrasWrflDbr";
			SlowRF = "AmovPknlMrunSrasWrflDfr";
			stance = "ManStanceCrouch";
			Stand = "AmovPknlMstpSlowWrflDnon";
			StartFreefall = "AfalPknlMstpSrasWrflDnon";
			stop = "AmovPknlMstpSrasWrflDnon";
			stopRelaxed = "AidlPknlMstpSrasWrflDnon_AI";
			strokeGun = "AmovPknlMstpSrasWrflDnon";
			TactB = "AmovPknlMtacSrasWrflDb";
			TactF = "AmovPknlMtacSrasWrflDf";
			TactL = "AmovPknlMtacSrasWrflDl";
			TactLB = "AmovPknlMtacSrasWrflDbl";
			TactLF = "AmovPknlMtacSrasWrflDfl";
			TactR = "AmovPknlMtacSrasWrflDr";
			TactRB = "AmovPknlMtacSrasWrflDbr";
			TactRF = "AmovPknlMtacSrasWrflDfr";
			takeFlag = "AinvPknlMstpSlayWrflDnon_1";
			throwPrepare = "AwopPknlMstpSgthWrflDnon_Start";
			turnL = "AmovPknlMstpSrasWrflDnon_turnL";
			turnLRelaxed = "AmovPknlMstpSrasWrflDnon_turnL";
			turnR = "AmovPknlMstpSrasWrflDnon_turnR";
			turnRRelaxed = "AmovPknlMstpSrasWrflDnon_turnR";
			turnSpeed = 4.5;
			up = "AmovPercMstpSrasWrflDnon";
			upDegree = "ManPosCrouch";
			WalkB = "AmovPknlMwlkSrasWrflDb";
			WalkF = "AmovPknlMwlkSrasWrflDf";
			WalkL = "AmovPknlMwlkSrasWrflDl";
			WalkLB = "AmovPknlMwlkSrasWrflDbl";
			WalkLF = "AmovPknlMwlkSrasWrflDfl";
			WalkR = "AmovPknlMwlkSrasWrflDr";
			WalkRB = "AmovPknlMwlkSrasWrflDbr";
			WalkRF = "AmovPknlMwlkSrasWrflDfr";
			weaponOff = "AmovPknlMstpSrasWrflDnon";
			weaponOn = "AmovPknlMstpSrasWlnrDnon";
		};
		class RifleKneelActions_diary: RifleKneelActions_gear
		{
			Default = "AmovPknlMstpSrasWrflDnon_diary";
			Stop = "AmovPknlMstpSrasWrflDnon_diary";
			StopRelaxed = "AmovPknlMstpSrasWrflDnon_diary";
		};
		class RifleKneelActions_explo: RifleKneelActions_gear
		{
			Stop = "AmovPknlMstpSrasWrflDnon";
			StopRelaxed = "AmovPknlMstpSrasWrflDnon";
		};
		class RifleKneelActions_gear: RifleKneelActions
		{
			Civil = "AmovPknlMstpSnonWnonDnon_gear";
			Default = "AmovPknlMstpSrasWrflDnon_gear";
			HandGunOn = "AmovPknlMstpSrasWpstDnon_gear";
			PlayerCrouch = "AmovPknlMstpSrasWrflDnon";
			Stop = "AmovPknlMstpSrasWrflDnon_gear";
			StopRelaxed = "AmovPknlMstpSrasWrflDnon_gear";
		};
		class RifleKneelActions_inv: RifleKneelLowActions
		{
			Civil = "AinvPknlMstpSnonWnonDnon";
			Default = "AinvPknlMstpSrasWrflDnon";
			HandGunOn = "AinvPknlMstpSrasWpstDnon";
			PlayerCrouch = "AmovPknlMstpSrasWrflDnon";
			Stop = "AinvPknlMstpSrasWrflDnon";
			StopRelaxed = "AinvPknlMstpSrasWrflDnon";
		};
		class RifleKneelActionsLimpB: RifleKneelActions
		{
			Stand = "AmovPknlMlmpSlowWrflDb";
			Up = "AmovPercMlmpSrasWrflDb";
		};
		class RifleKneelActionsLimpF: RifleKneelActions
		{
			Stand = "AmovPknlMlmpSlowWrflDf";
			Up = "AmovPercMlmpSrasWrflDf";
		};
		class RifleKneelActionsLimpL: RifleKneelActions
		{
			Stand = "AmovPknlMlmpSlowWrflDl";
			Up = "AmovPercMlmpSrasWrflDl";
		};
		class RifleKneelActionsLimpLB: RifleKneelActions
		{
			Stand = "AmovPknlMlmpSlowWrflDbl";
			Up = "AmovPercMlmpSrasWrflDbl";
		};
		class RifleKneelActionsLimpLF: RifleKneelActions
		{
			Stand = "AmovPknlMlmpSlowWrflDfl";
			Up = "AmovPercMlmpSrasWrflDfl";
		};
		class RifleKneelActionsLimpR: RifleKneelActions
		{
			Stand = "AmovPknlMlmpSlowWrflDr";
			Up = "AmovPercMlmpSrasWrflDr";
		};
		class RifleKneelActionsLimpRB: RifleKneelActions
		{
			Stand = "AmovPknlMlmpSlowWrflDbr";
			Up = "AmovPercMlmpSrasWrflDbr";
		};
		class RifleKneelActionsLimpRF: RifleKneelActions
		{
			Stand = "AmovPknlMlmpSlowWrflDfr";
			Up = "AmovPercMlmpSrasWrflDfr";
		};
		class RifleKneelActionsNoAdjust: RifleKneelActions
		{
			AdjustB = "";
			AdjustF = "";
			AdjustL = "";
			AdjustLB = "";
			AdjustLF = "";
			AdjustR = "";
			AdjustRB = "";
			AdjustRF = "";
		};
		class RifleKneelActionsRunB: RifleKneelActionsNoAdjust
		{
			AdjustB = "";
			PlayerCrouch = "AmovPknlMtacSrasWrflDb";
			PlayerStand = "AmovPercMrunSrasWrflDb";
			Stand = "AmovPknlMrunSlowWrflDb";
			Up = "AmovPercMrunSrasWrflDb";
		};
		class RifleKneelActionsRunBL: RifleKneelActionsNoAdjust
		{
			PlayerCrouch = "AmovPknlMtacSrasWrflDbl";
			PlayerStand = "AmovPercMrunSrasWrfldbl";
			Stand = "AmovPknlMrunSlowWrflDbl";
			Up = "AmovPercMrunSrasWrfldbl";
		};
		class RifleKneelActionsRunBR: RifleKneelActionsNoAdjust
		{
			PlayerCrouch = "AmovPknlMtacSrasWrflDbr";
			PlayerStand = "AmovPercMrunSrasWrflDbr";
			Stand = "AmovPknlMrunSlowWrflDbr";
			Up = "AmovPercMrunSrasWrflDbr";
		};
		class RifleKneelActionsRunF: RifleKneelActions
		{
			AdjustF = "";
			PlayerCrouch = "AmovPknlMtacSrasWrflDf";
			PlayerStand = "AmovPercMrunSrasWrflDf";
			Stand = "AmovPknlMrunSlowWrflDf";
			Up = "AmovPercMrunSrasWrflDf";
		};
		class RifleKneelActionsRunFL: RifleKneelActionsNoAdjust
		{
			PlayerCrouch = "AmovPknlMtacSrasWrflDfl";
			PlayerStand = "AmovPercMrunSrasWrflDfl";
			Stand = "AmovPknlMrunSlowWrflDfl";
			Up = "AmovPercMrunSrasWrflDfl";
		};
		class RifleKneelActionsRunFR: RifleKneelActionsNoAdjust
		{
			PlayerCrouch = "AmovPknlMtacSrasWrflDfr";
			PlayerStand = "AmovPercMrunSrasWrflDfr";
			Stand = "AmovPknlMrunSlowWrflDfr";
			Up = "AmovPercMrunSrasWrflDfr";
		};
		class RifleKneelActionsRunL: RifleKneelActionsNoAdjust
		{
			AdjustL = "";
			PlayerCrouch = "AmovPknlMtacSrasWrflDl";
			PlayerStand = "AmovPercMrunSrasWrflDl";
			Stand = "AmovPknlMrunSlowWrflDl";
			Up = "AmovPercMrunSrasWrflDl";
		};
		class RifleKneelActionsRunR: RifleKneelActionsNoAdjust
		{
			AdjustR = "";
			PlayerCrouch = "AmovPknlMtacSrasWrflDr";
			PlayerStand = "AmovPercMrunSrasWrflDr";
			Stand = "AmovPknlMrunSlowWrflDr";
			Up = "AmovPercMrunSrasWrflDr";
		};
		class RifleKneelActionsTacB: RifleKneelActionsNoAdjust
		{
			AdjustB = "";
			PlayerStand = "AmovPercMTacSrasWrflDb";
			Stand = "AmovPknlMtacSlowWrflDb";
			Up = "AmovPercMTacSrasWrflDb";
		};
		class RifleKneelActionsTacBL: RifleKneelActionsNoAdjust
		{
			PlayerStand = "AmovPercMTacSrasWrfldbl";
			Stand = "AmovPknlMtacSlowWrflDbl";
			Up = "AmovPercMTacSrasWrfldbl";
		};
		class RifleKneelActionsTacBR: RifleKneelActionsNoAdjust
		{
			PlayerStand = "AmovPercMTacSrasWrflDbr";
			Stand = "AmovPknlMtacSlowWrflDbr";
			Up = "AmovPercMTacSrasWrflDbr";
		};
		class RifleKneelActionsTacF: RifleKneelActionsNoAdjust
		{
			AdjustF = "";
			PlayerStand = "AmovPercMTacSrasWrflDf";
			Stand = "AmovPknlMtacSlowWrflDf";
			Up = "AmovPercMTacSrasWrflDf";
		};
		class RifleKneelActionsTacFL: RifleKneelActionsNoAdjust
		{
			PlayerStand = "AmovPercMTacSrasWrflDfl";
			Stand = "AmovPknlMtacSlowWrflDfl";
			Up = "AmovPercMTacSrasWrflDfl";
		};
		class RifleKneelActionsTacFR: RifleKneelActionsNoAdjust
		{
			PlayerStand = "AmovPercMTacSrasWrflDfr";
			Stand = "AmovPknlMtacSlowWrflDfr";
			Up = "AmovPercMTacSrasWrflDfr";
		};
		class RifleKneelActionsTacL: RifleKneelActionsNoAdjust
		{
			AdjustL = "";
			PlayerStand = "AmovPercMTacSrasWrflDl";
			Stand = "AmovPknlMtacSlowWrflDl";
			Up = "AmovPercMTacSrasWrflDl";
		};
		class RifleKneelActionsTacR: RifleKneelActionsNoAdjust
		{
			AdjustR = "";
			PlayerStand = "AmovPercMTacSrasWrflDr";
			Stand = "AmovPknlMtacSlowWrflDr";
			Up = "AmovPercMTacSrasWrflDr";
		};
		class RifleKneelActionsWlkB: RifleKneelActionsNoAdjust
		{
			AdjustB = "";
			PlayerStand = "AmovPercMwlkSrasWrflDb";
			Stand = "AmovPknlMwlkSlowWrflDb";
			Up = "AmovPercMwlkSrasWrflDb";
		};
		class RifleKneelActionsWlkBL: RifleKneelActionsNoAdjust
		{
			PlayerStand = "AmovPercMwlkSrasWrfldbl";
			Stand = "AmovPknlMwlkSlowWrflDbl";
			Up = "AmovPercMwlkSrasWrfldbl";
		};
		class RifleKneelActionsWlkBR: RifleKneelActionsNoAdjust
		{
			PlayerStand = "AmovPercMwlkSrasWrflDbr";
			Stand = "AmovPknlMwlkSlowWrflDbr";
			Up = "AmovPercMwlkSrasWrflDbr";
		};
		class RifleKneelActionsWlkF: RifleKneelActionsNoAdjust
		{
			AdjustF = "";
			PlayerStand = "AmovPercMwlkSrasWrflDf";
			Stand = "AmovPknlMwlkSlowWrflDf";
			Up = "AmovPercMwlkSrasWrflDf";
		};
		class RifleKneelActionsWlkFL: RifleKneelActionsNoAdjust
		{
			PlayerStand = "AmovPercMwlkSrasWrflDfl";
			Stand = "AmovPknlMwlkSlowWrflDfl";
			Up = "AmovPercMwlkSrasWrflDfl";
		};
		class RifleKneelActionsWlkFR: RifleKneelActionsNoAdjust
		{
			PlayerStand = "AmovPercMwlkSrasWrflDfr";
			Stand = "AmovPknlMwlkSlowWrflDfr";
			Up = "AmovPercMwlkSrasWrflDfr";
		};
		class RifleKneelActionsWlkL: RifleKneelActionsNoAdjust
		{
			AdjustL = "";
			PlayerStand = "AmovPercMwlkSrasWrflDl";
			Stand = "AmovPknlMwlkSlowWrflDl";
			Up = "AmovPercMwlkSrasWrflDl";
		};
		class RifleKneelActionsWlkR: RifleKneelActionsNoAdjust
		{
			AdjustR = "";
			PlayerStand = "AmovPercMwlkSrasWrflDr";
			Stand = "AmovPknlMwlkSlowWrflDr";
			Up = "AmovPercMwlkSrasWrflDr";
		};
		class RifleKneelEvasiveActionsF: RifleKneelActionsNoAdjust
		{
			AdjustF = "AmovPknlMrunSrasWrflDf";
			PlayerStand = "AmovPercMevaSrasWrflDf";
			Up = "AmovPercMevaSrasWrflDf";
		};
		class RifleKneelEvasiveActionsFL: RifleKneelEvasiveActionsF
		{
			AdjustLF = "AmovPknlMrunSrasWrflDfl";
			PlayerStand = "AmovPercMevaSrasWrflDfl";
			Up = "AmovPercMevaSrasWrflDfl";
		};
		class RifleKneelEvasiveActionsFR: RifleKneelEvasiveActionsF
		{
			AdjustRF = "AmovPknlMrunSrasWrflDfr";
			PlayerStand = "AmovPercMevaSrasWrflDfr";
			Up = "AmovPercMevaSrasWrflDfr";
		};
		class RifleKneelEvasiveActionsL: RifleKneelActionsRunL
		{
			Down = "AadjPpneMstpSrasWrflDleft";
			PlayerProne = "AadjPpneMstpSrasWrflDleft";
			PlayerStand = "AmovPercMevaSrasWrflDr";
			turnSpeed = 4;
			Up = "AmovPercMevaSrasWrflDr";
		};
		class RifleKneelEvasiveActionsR: RifleKneelActionsRunR
		{
			Down = "AadjPpneMstpSrasWrflDright";
			PlayerProne = "AadjPpneMstpSrasWrflDright";
			PlayerStand = "AmovPercMevaSrasWrflDr";
			turnSpeed = 4;
			Up = "AmovPercMevaSrasWrflDr";
		};
		class RifleKneelLowActions: RifleKneelActions
		{
			CanNotMove = "AmovPknlMstpSlowWrflDnon";
			Combat = "AmovPknlMstpSrasWrflDnon";
			Default = "AmovPknlMstpSlowWrflDnon";
			Diary = "";
			FastB = "AmovPknlMrunSlowWrflDb";
			FastF = "AmovPknlMevaSlowWrflDf";
			FastL = "AmovPknlMrunSlowWrflDl";
			FastLB = "AmovPknlMrunSlowWrflDbl";
			FastLF = "AmovPknlMevaSlowWrflDfl";
			FastR = "AmovPknlMrunSlowWrflDr";
			FastRB = "AmovPknlMrunSlowWrflDbr";
			FastRF = "AmovPknlMevaSlowWrflDfr";
			GetOver = "AovrPercMstpSlowWrflDf";
			LimpB = "AmovPknlMlmpSlowWrflDb";
			LimpF = "AmovPknlMlmpSlowWrflDf";
			LimpL = "AmovPknlMlmpSlowWrflDl";
			LimpLB = "AmovPknlMlmpSlowWrflDbl";
			LimpLF = "AmovPknlMlmpSlowWrflDfl";
			LimpR = "AmovPknlMlmpSlowWrflDr";
			LimpRB = "AmovPknlMlmpSlowWrflDbr";
			LimpRF = "AmovPknlMlmpSlowWrflDfr";
			PlayerSlowB = "AmovPknlMrunSlowWrflDb";
			PlayerSlowF = "AmovPknlMrunSlowWrflDf";
			PlayerSlowL = "AmovPknlMrunSlowWrflDl";
			PlayerSlowLB = "AmovPknlMrunSlowWrflDbl";
			PlayerSlowLF = "AmovPknlMrunSlowWrflDfl";
			PlayerSlowR = "AmovPknlMrunSlowWrflDr";
			PlayerSlowRB = "AmovPknlMrunSlowWrflDbr";
			PlayerSlowRF = "AmovPknlMrunSlowWrflDfr";
			PlayerStand = "AmovPercMstpSlowWrflDnon";
			PlayerTactB = "AmovPknlMtacSlowWrflDb";
			PlayerTactF = "AmovPknlMtacSlowWrflDf";
			PlayerTactL = "AmovPknlMtacSlowWrflDl";
			PlayerTactLB = "AmovPknlMtacSlowWrflDbl";
			PlayerTactLF = "AmovPknlMtacSlowWrflDfl";
			PlayerTactR = "AmovPknlMtacSlowWrflDr";
			PlayerTactRB = "AmovPknlMtacSlowWrflDbr";
			PlayerTactRF = "AmovPknlMtacSlowWrflDfr";
			PlayerWalkB = "AmovPknlMwlkSlowWrflDb";
			PlayerWalkF = "AmovPknlMwlkSlowWrflDf";
			PlayerWalkL = "AmovPknlMwlkSlowWrflDl";
			PlayerWalkLB = "AmovPknlMwlkSlowWrflDbl";
			PlayerWalkLF = "AmovPknlMwlkSlowWrflDfl";
			PlayerWalkR = "AmovPknlMwlkSlowWrflDr";
			PlayerWalkRB = "AmovPknlMwlkSlowWrflDbr";
			PlayerWalkRF = "AmovPknlMwlkSlowWrflDfr";
			SlowB = "AmovPknlMrunSlowWrflDb";
			SlowF = "AmovPknlMrunSlowWrflDf";
			SlowL = "AmovPknlMrunSlowWrflDl";
			SlowLB = "AmovPknlMrunSlowWrflDbl";
			SlowLF = "AmovPknlMrunSlowWrflDfl";
			SlowR = "AmovPknlMrunSlowWrflDr";
			SlowRB = "AmovPknlMrunSlowWrflDbr";
			SlowRF = "AmovPknlMrunSlowWrflDfr";
			Stand = "AmovPknlMstpSrasWrflDnon";
			Stop = "AmovPknlMstpSlowWrflDnon";
			StopRelaxed = "AidlPknlMstpSlowWrflDnon_AI";
			TactB = "AmovPknlMtacSlowWrflDb";
			TactF = "AmovPknlMtacSlowWrflDf";
			TactL = "AmovPknlMtacSlowWrflDl";
			TactLB = "AmovPknlMtacSlowWrflDbl";
			TactLF = "AmovPknlMtacSlowWrflDfl";
			TactR = "AmovPknlMtacSlowWrflDr";
			TactRB = "AmovPknlMtacSlowWrflDbr";
			TactRF = "AmovPknlMtacSlowWrflDfr";
			TurnL = "AmovPknlMstpSlowWrflDnon_turnL";
			TurnLRelaxed = "AmovPknlMstpSlowWrflDnon_turnL";
			TurnR = "AmovPknlMstpSlowWrflDnon_turnR";
			TurnRRelaxed = "AmovPknlMstpSlowWrflDnon_turnR";
			Up = "AmovPercMstpSlowWrflDnon";
			WalkB = "AmovPknlMwlkSlowWrflDb";
			WalkF = "AmovPknlMwlkSlowWrflDf";
			WalkL = "AmovPknlMwlkSlowWrflDl";
			WalkLB = "AmovPknlMwlkSlowWrflDbl";
			WalkLF = "AmovPknlMwlkSlowWrflDfl";
			WalkR = "AmovPknlMwlkSlowWrflDr";
			WalkRB = "AmovPknlMwlkSlowWrflDbr";
			WalkRF = "AmovPknlMwlkSlowWrflDfr";
			WeaponOff = "AmovPknlMstpSlowWrflDnon";
		};
		class RifleKneelLowActions_diary: RifleKneelLowActions_gear
		{
			Default = "AmovPknlMstpSlowWrflDnon_diary";
			Stop = "AmovPknlMstpSlowWrflDnon_diary";
			StopRelaxed = "AmovPknlMstpSlowWrflDnon_diary";
		};
		class RifleKneelLowActions_explo: RifleKneelLowActions_gear
		{
			Stop = "AmovPknlMstpSlowWrflDnon";
			StopRelaxed = "AmovPknlMstpSlowWrflDnon";
		};
		class RifleKneelLowActions_gear: RifleKneelLowActionsNoAdjust
		{
			Civil = "AmovPknlMstpSnonWnonDnon_gear";
			Default = "AmovPknlMstpSlowWrflDnon_gear";
			HandGunOn = "AmovPknlMstpSrasWpstDnon_gear";
			PlayerCrouch = "AmovPknlMstpSlowWrflDnon";
			Stop = "AmovPknlMstpSlowWrflDnon_gear";
			StopRelaxed = "AmovPknlMstpSlowWrflDnon_gear";
		};
		class RifleKneelLowActions_relax: RifleKneelLowActionsNoAdjust
		{
			SlowF = "AmovPercMrunSlowWrflDf";
		};
		class RifleKneelLowActionsNoAdjust: RifleKneelLowActions
		{
			AdjustB = "";
			AdjustF = "";
			AdjustL = "";
			AdjustLB = "";
			AdjustLF = "";
			AdjustR = "";
			AdjustRB = "";
			AdjustRF = "";
		};
		class RifleKneelLowActionsRunB: RifleKneelLowActionsNoAdjust
		{
			AdjustB = "";
			fireNotPossible = "AmovPknlMtacSrasWrflDb";
			PlayerStand = "AmovPercMrunSlowWrflDb";
			Stand = "AmovPknlMrunSrasWrflDb";
			Up = "AmovPercMrunSlowWrflDb";
		};
		class RifleKneelLowActionsRunBL: RifleKneelLowActionsNoAdjust
		{
			fireNotPossible = "AmovPknlMtacSrasWrflDbl";
			PlayerStand = "AmovPercMrunSlowWrflDbl";
			Stand = "AmovPknlMrunSrasWrflDbl";
			Up = "AmovPercMrunSlowWrflDbl";
		};
		class RifleKneelLowActionsRunBR: RifleKneelLowActionsNoAdjust
		{
			fireNotPossible = "AmovPknlMtacSrasWrflDbr";
			PlayerStand = "AmovPercMrunSlowWrflDbr";
			Stand = "AmovPknlMrunSrasWrflDbr";
			Up = "AmovPercMrunSlowWrflDbr";
		};
		class RifleKneelLowActionsRunF: RifleKneelLowActionsNoAdjust
		{
			AdjustF = "";
			fireNotPossible = "AmovPknlMtacSrasWrflDf";
			PlayerStand = "AmovPercMrunSlowWrflDf";
			Stand = "AmovPknlMrunSrasWrflDf";
			Up = "AmovPercMrunSlowWrflDf";
		};
		class RifleKneelLowActionsRunFL: RifleKneelLowActionsNoAdjust
		{
			fireNotPossible = "AmovPknlMtacSrasWrflDfl";
			PlayerStand = "AmovPercMrunSlowWrflDfl";
			Stand = "AmovPknlMrunSrasWrflDfl";
			Up = "AmovPercMrunSlowWrflDfl";
		};
		class RifleKneelLowActionsRunFR: RifleKneelLowActionsNoAdjust
		{
			fireNotPossible = "AmovPknlMtacSrasWrflDfr";
			PlayerStand = "AmovPercMrunSlowWrflDfr";
			Stand = "AmovPknlMrunSrasWrflDfr";
			Up = "AmovPercMrunSlowWrflDfr";
		};
		class RifleKneelLowActionsRunL: RifleKneelLowActionsNoAdjust
		{
			AdjustL = "";
			fireNotPossible = "AmovPknlMtacSrasWrflDl";
			PlayerStand = "AmovPercMrunSlowWrflDl";
			Stand = "AmovPknlMrunSrasWrflDl";
			Up = "AmovPercMrunSlowWrflDl";
		};
		class RifleKneelLowActionsRunR: RifleKneelLowActionsNoAdjust
		{
			AdjustR = "";
			fireNotPossible = "AmovPknlMtacSrasWrflDr";
			PlayerStand = "AmovPercMrunSlowWrflDr";
			Stand = "AmovPknlMrunSrasWrflDr";
			Up = "AmovPercMrunSlowWrflDr";
		};
		class RifleKneelLowActionsTacB: RifleKneelLowActionsNoAdjust
		{
			AdjustB = "";
			PlayerStand = "AmovPercMtacSlowWrflDb_ver2";
			Stand = "AmovPknlMtacSrasWrflDb";
			Up = "AmovPercMtacSlowWrflDb_ver2";
		};
		class RifleKneelLowActionsTacBL: RifleKneelLowActionsNoAdjust
		{
			PlayerStand = "AmovPercMtacSlowWrflDbl_ver2";
			Stand = "AmovPknlMtacSrasWrflDbl";
			Up = "AmovPercMtacSlowWrflDbl_ver2";
		};
		class RifleKneelLowActionsTacBR: RifleKneelLowActionsNoAdjust
		{
			PlayerStand = "AmovPercMtacSlowWrflDbr_ver2";
			Stand = "AmovPknlMtacSrasWrflDbr";
			Up = "AmovPercMtacSlowWrflDbr_ver2";
		};
		class RifleKneelLowActionsTacF: RifleKneelLowActionsNoAdjust
		{
			AdjustF = "";
			PlayerStand = "AmovPercMtacSlowWrflDf_ver2";
			Stand = "AmovPknlMtacSrasWrflDf";
			Up = "AmovPercMtacSlowWrflDf_ver2";
		};
		class RifleKneelLowActionsTacFL: RifleKneelLowActionsNoAdjust
		{
			PlayerStand = "AmovPercMtacSlowWrflDfl_ver2";
			Stand = "AmovPknlMtacSrasWrflDfl";
			Up = "AmovPercMtacSlowWrflDfl_ver2";
		};
		class RifleKneelLowActionsTacFR: RifleKneelLowActionsNoAdjust
		{
			PlayerStand = "AmovPercMtacSlowWrflDfr_ver2";
			Stand = "AmovPknlMtacSrasWrflDfr";
			Up = "AmovPercMtacSlowWrflDfr_ver2";
		};
		class RifleKneelLowActionsTacL: RifleKneelLowActionsNoAdjust
		{
			AdjustL = "";
			PlayerStand = "AmovPercMtacSlowWrflDl_ver2";
			Stand = "AmovPknlMtacSrasWrflDl";
			Up = "AmovPercMtacSlowWrflDl_ver2";
		};
		class RifleKneelLowActionsTacR: RifleKneelLowActionsNoAdjust
		{
			AdjustR = "";
			PlayerStand = "AmovPercMtacSlowWrflDr_ver2";
			Stand = "AmovPknlMtacSrasWrflDr";
			Up = "AmovPercMtacSlowWrflDr_ver2";
		};
		class RifleKneelLowActionsWlkB: RifleKneelLowActionsNoAdjust
		{
			AdjustB = "";
			fireNotPossible = "AmovPknlMwlkSrasWrflDb";
			PlayerStand = "AmovPercMwlkSlowWrflDb_ver2";
			Stand = "AmovPknlMwlkSrasWrflDb";
			Up = "AmovPercMwlkSlowWrflDb_ver2";
		};
		class RifleKneelLowActionsWlkBL: RifleKneelLowActionsNoAdjust
		{
			fireNotPossible = "AmovPknlMwlkSrasWrflDbl";
			PlayerStand = "AmovPercMwlkSlowWrflDbl_ver2";
			Stand = "AmovPknlMwlkSrasWrflDbl";
			Up = "AmovPercMwlkSlowWrflDbl_ver2";
		};
		class RifleKneelLowActionsWlkBR: RifleKneelLowActionsNoAdjust
		{
			fireNotPossible = "AmovPknlMwlkSrasWrflDbr";
			PlayerStand = "AmovPercMwlkSlowWrflDbr_ver2";
			Stand = "AmovPknlMwlkSrasWrflDbr";
			Up = "AmovPercMwlkSlowWrflDbr_ver2";
		};
		class RifleKneelLowActionsWlkF: RifleKneelLowActionsNoAdjust
		{
			AdjustF = "";
			fireNotPossible = "AmovPknlMwlkSrasWrflDf";
			PlayerStand = "AmovPercMwlkSlowWrflDf_ver2";
			Stand = "AmovPknlMwlkSrasWrflDf";
			Up = "AmovPercMwlkSlowWrflDf_ver2";
		};
		class RifleKneelLowActionsWlkFL: RifleKneelLowActionsNoAdjust
		{
			fireNotPossible = "AmovPknlMwlkSrasWrflDfl";
			PlayerStand = "AmovPercMwlkSlowWrflDfl_ver2";
			Stand = "AmovPknlMwlkSrasWrflDfl";
			Up = "AmovPercMwlkSlowWrflDfl_ver2";
		};
		class RifleKneelLowActionsWlkFR: RifleKneelLowActionsNoAdjust
		{
			fireNotPossible = "AmovPknlMwlkSrasWrflDfr";
			PlayerStand = "AmovPercMwlkSlowWrflDfr_ver2";
			Stand = "AmovPknlMwlkSrasWrflDfr";
			Up = "AmovPercMwlkSlowWrflDfr_ver2";
		};
		class RifleKneelLowActionsWlkL: RifleKneelLowActionsNoAdjust
		{
			AdjustL = "";
			fireNotPossible = "AmovPknlMwlkSrasWrflDl";
			PlayerStand = "AmovPercMwlkSlowWrflDl_ver2";
			Stand = "AmovPknlMwlkSrasWrflDl";
			Up = "AmovPercMwlkSlowWrflDl_ver2";
		};
		class RifleKneelLowActionsWlkR: RifleKneelLowActionsNoAdjust
		{
			AdjustR = "";
			fireNotPossible = "AmovPknlMwlkSrasWrflDr";
			PlayerStand = "AmovPercMwlkSlowWrflDr_ver2";
			Stand = "AmovPknlMwlkSrasWrflDr";
			Up = "AmovPercMwlkSlowWrflDr_ver2";
		};
		class RifleKneelLowEvasiveActionsF: RifleKneelLowActionsNoAdjust
		{
			AdjustF = "AmovPknlMrunSrasWrflDf";
			PlayerStand = "AmovPercMevaSlowWrflDf";
			Up = "AmovPercMevaSlowWrflDf";
		};
		class RifleKneelLowEvasiveActionsFL: RifleKneelLowActionsNoAdjust
		{
			AdjustLF = "AmovPknlMrunSrasWrflDfl";
			PlayerStand = "AmovPercMevaSlowWrflDfl";
			Up = "AmovPercMevaSlowWrflDfl";
		};
		class RifleKneelLowEvasiveActionsFR: RifleKneelLowActionsNoAdjust
		{
			AdjustRF = "AmovPknlMrunSrasWrflDfr";
			PlayerStand = "AmovPercMevaSlowWrflDfr";
			Up = "AmovPercMevaSlowWrflDfr";
		};
		class RifleKneelTakeActions: RifleKneelActions
		{
			default = "AinvPknlMstpSlayWrflDnon_1";
			PlayerCrouch = "AmovPknlMstpSrasWrflDnon";
			sitDown = "";
			stop = "AinvPknlMstpSlayWrflDnon_1";
			StopRelaxed = "AinvPknlMstpSlayWrflDnon_1";
		};
		class RifleLowKneelActionsLimpB: RifleKneelLowActions
		{
			Combat = "AmovPknlMlmpSrasWrflDb";
			Up = "AmovPercMlmpSlowWrflDb";
		};
		class RifleLowKneelActionsLimpF: RifleKneelLowActions
		{
			Combat = "AmovPknlMlmpSrasWrflDf";
			Up = "AmovPercMlmpSlowWrflDf";
		};
		class RifleLowKneelActionsLimpL: RifleKneelLowActions
		{
			Combat = "AmovPknlMlmpSrasWrflDl";
			Up = "AmovPercMlmpSlowWrflDl";
		};
		class RifleLowKneelActionsLimpLB: RifleKneelLowActions
		{
			Combat = "AmovPknlMlmpSrasWrflDbl";
			Up = "AmovPercMlmpSlowWrflDbl";
		};
		class RifleLowKneelActionsLimpLF: RifleKneelLowActions
		{
			Combat = "AmovPknlMlmpSrasWrflDfl";
			Up = "AmovPercMlmpSlowWrflDfl";
		};
		class RifleLowKneelActionsLimpR: RifleKneelLowActions
		{
			Combat = "AmovPknlMlmpSrasWrflDr";
			Up = "AmovPercMlmpSlowWrflDr";
		};
		class RifleLowKneelActionsLimpRB: RifleKneelLowActions
		{
			Combat = "AmovPknlMlmpSrasWrflDbr";
			Up = "AmovPercMlmpSlowWrflDbr";
		};
		class RifleLowKneelActionsLimpRF: RifleKneelLowActions
		{
			Combat = "AmovPknlMlmpSrasWrflDfr";
			Up = "AmovPercMlmpSlowWrflDfr";
		};
		class RifleLowSitActions: RifleBaseLowStandActions
		{
			default = "AmovPsitMstpSlowWrflDnon";
			Diary = "";
			Gear = "";
			GetOver = "";
			sitDown = "AmovPercMstpSlowWrflDnon";
			stance = "ManStanceCrouch";
			stop = "AmovPsitMstpSlowWrflDnon";
			StopRelaxed = "AmovPsitMstpSlowWrflDnon";
			turnL = "";
			turnR = "";
		};
		class RifleLowStandActions: RifleBaseLowStandActions
		{
			Diary = "";
			Gear = "AinvPercMstpSrasWrflDnon";
			GetInBoat = "GetInHeli_Transport_01Cargo";
			GetOutBoat = "AcrgPknlMstpSnonWnonDnon_AmovPercMstpSrasWrflDnon_getOutLow";
			GetOutPara = "AmovPknlMstpSnonWnonDnon";
			PlayerStand = "";
			putDown = "AmovPercMstpSrasWrflDnon_AinvPercMstpSrasWrflDnon_Putdown";
			StopRelaxed = "AmovPercMstpSlowWrflDnon";
		};
		class RifleLowStandActions_diary: RifleLowStandActions_gear
		{
			Default = "AmovPercMstpSlowWrflDnon_diary";
			Stop = "AmovPercMstpSlowWrflDnon_diary";
			StopRelaxed = "AmovPercMstpSlowWrflDnon_diary";
		};
		class RifleLowStandActions_evasiveActions: RifleLowStandActions {};
		class RifleLowStandActions_gear: RifleLowStandActions
		{
			Civil = "AmovPercMstpSnonWnonDnon_gear";
			Default = "AmovPercMstpSlowWrflDnon_gear";
			HandGunOn = "AmovPercMstpSrasWpstDnon_gear";
			PlayerStand = "AmovPercMstpSlowWrflDnon";
			Stop = "AmovPercMstpSlowWrflDnon_gear";
			StopRelaxed = "AmovPercMstpSlowWrflDnon_gear";
		};
		class RifleLowStandActions_talkCalm: RifleLowStandActions
		{
			Default = "AidlPercSlowWrflDnon_talkCalm";
		};
		class RifleLowStandActionsLimpB: RifleBaseLowStandActions
		{
			Combat = "AmovPercMlmpSrasWrflDb";
			Up = "AmovPknlMlmpSlowWrflDb";
		};
		class RifleLowStandActionsLimpF: RifleBaseLowStandActions
		{
			Combat = "AmovPercMlmpSrasWrflDf";
			Up = "AmovPknlMlmpSlowWrflDf";
		};
		class RifleLowStandActionsLimpL: RifleBaseLowStandActions
		{
			Combat = "AmovPercMlmpSrasWrflDl";
			Up = "AmovPknlMlmpSlowWrflDl";
		};
		class RifleLowStandActionsLimpLB: RifleBaseLowStandActions
		{
			Combat = "AmovPercMlmpSrasWrflDbl";
			Up = "AmovPknlMlmpSlowWrflDbl";
		};
		class RifleLowStandActionsLimpLF: RifleBaseLowStandActions
		{
			Combat = "AmovPercMlmpSrasWrflDfl";
			Up = "AmovPknlMlmpSlowWrflDfl";
		};
		class RifleLowStandActionsLimpR: RifleBaseLowStandActions
		{
			Combat = "AmovPercMlmpSrasWrflDr";
			Up = "AmovPknlMlmpSlowWrflDr";
		};
		class RifleLowStandActionsLimpRB: RifleBaseLowStandActions
		{
			Combat = "AmovPercMlmpSrasWrflDbr";
			Up = "AmovPknlMlmpSlowWrflDbr";
		};
		class RifleLowStandActionsLimpRF: RifleBaseLowStandActions
		{
			Combat = "AmovPercMlmpSrasWrflDfr";
			Up = "AmovPknlMlmpSlowWrflDfr";
		};
		class RifleLowStandActionsNoAdjust: RifleLowStandActions
		{
			AdjustB = "";
			AdjustF = "";
			AdjustL = "";
			AdjustLB = "";
			AdjustLF = "";
			AdjustR = "";
			AdjustRB = "";
			AdjustRF = "";
		};
		class RifleLowStandActionsRunB: RifleLowStandActionsNoAdjust
		{
			Combat = "AmovPercMtacSrasWrflDb";
			FireNotPossible = "AmovPercMtacSrasWrflDb";
			PlayerCrouch = "AmovPknlMrunSlowWrflDb";
			turnSpeed = 4.5;
			Up = "AmovPknlMrunSlowWrflDb";
		};
		class RifleLowStandActionsRunBL: RifleLowStandActionsNoAdjust
		{
			Combat = "AmovPercMtacSrasWrflDbl";
			FireNotPossible = "AmovPercMtacSrasWrflDbl";
			PlayerCrouch = "AmovPknlMrunSlowWrflDbl";
			turnSpeed = 4.5;
			Up = "AmovPknlMrunSlowWrflDbl";
		};
		class RifleLowStandActionsRunBR: RifleLowStandActionsNoAdjust
		{
			Combat = "AmovPercMtacSrasWrflDbr";
			FireNotPossible = "AmovPercMtacSrasWrflDbr";
			PlayerCrouch = "AmovPknlMrunSlowWrflDbr";
			turnSpeed = 4.5;
			Up = "AmovPknlMrunSlowWrflDbr";
		};
		class RifleLowStandActionsRunF: RifleLowStandActionsNoAdjust
		{
			Combat = "AmovPercMtacSrasWrflDf";
			FireNotPossible = "AmovPercMtacSrasWrflDf";
			PlayerCrouch = "AmovPknlMrunSlowWrflDf";
			ThrowPrepare = "AmovPercMrunSlowWrflDf";
			turnSpeed = 4.5;
			Up = "AmovPknlMrunSlowWrflDf";
		};
		class RifleLowStandActionsRunFL: RifleLowStandActionsNoAdjust
		{
			Combat = "AmovPercMtacSrasWrflDfl";
			FireNotPossible = "AmovPercMtacSrasWrflDfl";
			PlayerCrouch = "AmovPknlMrunSlowWrflDfl";
			ThrowPrepare = "AmovPercMrunSlowWrflDfl";
			turnSpeed = 4.5;
			Up = "AmovPknlMrunSlowWrflDfl";
		};
		class RifleLowStandActionsRunFR: RifleLowStandActionsNoAdjust
		{
			Combat = "AmovPercMtacSrasWrflDfr";
			FireNotPossible = "AmovPercMtacSrasWrflDfr";
			PlayerCrouch = "AmovPknlMrunSlowWrflDfr";
			ThrowPrepare = "AmovPercMrunSlowWrflDfr";
			turnSpeed = 4.5;
			Up = "AmovPknlMrunSlowWrflDfr";
		};
		class RifleLowStandActionsRunL: RifleLowStandActionsNoAdjust
		{
			Combat = "AmovPercMtacSrasWrflDl";
			FireNotPossible = "AmovPercMtacSrasWrflDl";
			PlayerCrouch = "AmovPknlMrunSlowWrflDl";
			turnSpeed = 4.5;
			Up = "AmovPknlMrunSlowWrflDl";
		};
		class RifleLowStandActionsRunR: RifleLowStandActionsNoAdjust
		{
			Combat = "AmovPercMtacSrasWrflDr";
			FireNotPossible = "AmovPercMtacSrasWrflDr";
			PlayerCrouch = "AmovPknlMrunSlowWrflDr";
			turnSpeed = 4.5;
			Up = "AmovPknlMrunSlowWrflDr";
		};
		class RifleLowStandActionsTacB: RifleLowStandActionsNoAdjust
		{
			Combat = "AmovPercMTacSrasWrflDb";
			PlayerCrouch = "AmovPknlMtacSlowWrflDb";
			Up = "AmovPknlMtacSlowWrflDb";
		};
		class RifleLowStandActionsTacBL: RifleLowStandActionsNoAdjust
		{
			Combat = "AmovPercMTacSrasWrflDbl";
			PlayerCrouch = "AmovPknlMtacSlowWrflDbl";
			Up = "AmovPknlMtacSlowWrflDbl";
		};
		class RifleLowStandActionsTacBR: RifleLowStandActionsNoAdjust
		{
			Combat = "AmovPercMTacSrasWrflDbr";
			PlayerCrouch = "";
			Up = "AmovPknlMtacSlowWrflDbr";
		};
		class RifleLowStandActionsTacF: RifleLowStandActionsNoAdjust
		{
			Combat = "AmovPercMTacSrasWrflDf";
			PlayerCrouch = "AmovPknlMtacSlowWrflDf";
			ThrowPrepare = "AmovPercMtacSlowWrflDf_ver2";
			Up = "AmovPknlMtacSlowWrflDf";
		};
		class RifleLowStandActionsTacFL: RifleLowStandActionsNoAdjust
		{
			Combat = "AmovPercMTacSrasWrflDfl";
			PlayerCrouch = "AmovPknlMtacSlowWrflDfl";
			ThrowPrepare = "AmovPercMtacSlowWrflDfl_ver2";
			Up = "AmovPknlMtacSlowWrflDfl";
		};
		class RifleLowStandActionsTacFR: RifleLowStandActionsNoAdjust
		{
			Combat = "AmovPercMTacSrasWrflDfr";
			PlayerCrouch = "AmovPknlMtacSlowWrflDfr";
			ThrowPrepare = "AmovPercMtacSlowWrflDfr_ver2";
			Up = "AmovPknlMtacSlowWrflDfr";
		};
		class RifleLowStandActionsTacL: RifleLowStandActionsNoAdjust
		{
			Combat = "AmovPercMTacSrasWrflDl";
			PlayerCrouch = "AmovPknlMtacSlowWrflDl";
			Up = "AmovPknlMtacSlowWrflDl";
		};
		class RifleLowStandActionsTacR: RifleLowStandActionsNoAdjust
		{
			Combat = "AmovPercMTacSrasWrflDr";
			PlayerCrouch = "AmovPknlMtacSlowWrflDr";
			Up = "AmovPknlMtacSlowWrflDr";
		};
		class RifleLowStandActionsWlkB: RifleLowStandActionsNoAdjust
		{
			Combat = "AmovPercMwlkSrasWrflDb";
			FireNotPossible = "AmovPercMwlkSrasWrflDb";
			PlayerCrouch = "AmovPknlMwlkSlowWrflDb";
			Up = "AmovPknlMwlkSlowWrflDb";
		};
		class RifleLowStandActionsWlkBL: RifleLowStandActionsNoAdjust
		{
			Combat = "AmovPercMwlkSrasWrflDbl";
			FireNotPossible = "AmovPercMwlkSrasWrflDbl";
			PlayerCrouch = "AmovPknlMwlkSlowWrflDbl";
			Up = "AmovPknlMwlkSlowWrflDbl";
		};
		class RifleLowStandActionsWlkBR: RifleLowStandActionsNoAdjust
		{
			Combat = "AmovPercMwlkSrasWrflDbr";
			FireNotPossible = "AmovPercMwlkSrasWrflDbr";
			PlayerCrouch = "AmovPknlMwlkSlowWrflDbr";
			Up = "AmovPknlMwlkSlowWrflDbr";
		};
		class RifleLowStandActionsWlkF: RifleLowStandActionsNoAdjust
		{
			Combat = "AmovPercMwlkSrasWrflDf";
			PlayerCrouch = "AmovPknlMwlkSlowWrflDf";
			ThrowPrepare = "AmovPercMwlkSlowWrflDf_ver2";
			Up = "AmovPknlMwlkSlowWrflDf";
		};
		class RifleLowStandActionsWlkFL: RifleLowStandActionsNoAdjust
		{
			Combat = "AmovPercMwlkSrasWrflDfl";
			FireNotPossible = "AmovPercMwlkSrasWrflDfl";
			PlayerCrouch = "AmovPknlMwlkSlowWrflDfl";
			ThrowPrepare = "AmovPercMwlkSlowWrflDfl_ver2";
			Up = "AmovPknlMwlkSlowWrflDfl";
		};
		class RifleLowStandActionsWlkFR: RifleLowStandActionsNoAdjust
		{
			Combat = "AmovPercMwlkSrasWrflDfr";
			FireNotPossible = "AmovPercMwlkSrasWrflDfr";
			PlayerCrouch = "AmovPknlMwlkSlowWrflDr";
			up = "AmovPknlMwlkSlowWrflDr";
		};
		class RifleLowStandActionsWlkL: RifleLowStandActionsNoAdjust
		{
			Combat = "AmovPercMwlkSrasWrflDl";
			FireNotPossible = "AmovPercMwlkSrasWrflDl";
			PlayerCrouch = "AmovPknlMwlkSlowWrflDl";
			Up = "AmovPknlMwlkSlowWrflDl";
		};
		class RifleLowStandActionsWlkR: RifleLowStandActionsNoAdjust
		{
			Combat = "AmovPercMwlkSrasWrflDr";
			FireNotPossible = "AmovPercMwlkSrasWrflDr";
			PlayerCrouch = "AmovPknlMwlkSlowWrflDr";
			Up = "AmovPknlMwlkSlowWrflDr";
		};
		class RifleLowStandCutsceneActions: NoActions
		{
			Combat = "Acts_RifleLowStand_Default";
			Default = "Acts_RifleLowStand_Default";
			stance = "ManStanceStand";
			Stand = "Acts_RifleLowStand_Default";
			Stop = "Acts_RifleLowStand_Default";
			StopRelaxed = "Acts_RifleLowStand_Default";
			upDegree = "ManPosStand";
		};
		class RifleLowStandSaluteActions: RifleBaseLowStandActions
		{
			default = "AmovPercMstpSlowWrflDnon_Salute";
			salute = "AmovPercMstpSlowWrflDnon";
			sitDown = "";
			stop = "AmovPercMstpSlowWrflDnon_Salute";
			StopRelaxed = "AmovPercMstpSlowWrflDnon_Salute";
		};
		class RifleProneActions: RifleBaseStandActions
		{
			AdjustB = "AadjPpneMstpSrasWrflDdown";
			AdjustF = "AadjPpneMstpSrasWrflDup";
			AdjustL = "AadjPpneMstpSrasWrflDleft";
			AdjustLB = "AadjPpneMstpSrasWrflDdown";
			AdjustLF = "AadjPpneMstpSrasWrflDup";
			AdjustR = "AadjPpneMstpSrasWrflDright";
			AdjustRB = "AadjPpneMstpSrasWrflDdown";
			AdjustRF = "AadjPpneMstpSrasWrflDup";
			binocOff = "AmovPpneMstpSrasWrflDnon";
			binocOn = "AwopPpneMstpSoptWbinDnon_rfl";
			Binoculars = "AmovPpneMstpSoptWbinDnon";
			CanNotMove = "AmovPpneMstpSrasWrflDnon";
			default = "AmovPpneMstpSrasWrflDnon";
			Diary = "";
			DismountOptic = "DismountOpticProne";
			DismountSide = "";
			down = "AmovPercMstpSrasWrflDnon";
			EvasiveLeft = "AmovPpneMstpSrasWrflDnon_AmovPpneMevaSlowWrflDl";
			EvasiveRight = "AmovPpneMstpSrasWrflDnon_AmovPpneMevaSlowWrflDr";
			FastB = "AmovPpneMsprSlowWrflDb";
			FastF = "AmovPpneMevaSlowWrflDf";
			FastL = "AmovPpneMsprSlowWrflDl";
			FastLB = "AmovPpneMsprSlowWrflDbl";
			FastLF = "AmovPpneMsprSlowWrflDfl";
			FastR = "AmovPpneMsprSlowWrflDr";
			FastRB = "AmovPpneMsprSlowWrflDbr";
			FastRF = "AmovPpneMsprSlowWrflDfr";
			FireNotPossible = "AmovPpneMstpSrasWrflDnon";
			Gear = "AinvPpneMstpSrasWrflDnon";
			gestureAdvance[] = {"GestureAdvanceProne", "Gesture"};
			gestureCeaseFire[] = {"", "Gesture"};
			gestureCover[] = {"", "Gesture"};
			GestureDismountMuzzle[] = {"GestureDismountMuzzleProne", "Gesture"};
			gestureFollow[] = {"", "Gesture"};
			gestureFreeze[] = {"GestureFreezeProne", "Gesture"};
			gestureGo[] = {"GestureGoBProne", "Gesture"};
			gestureGoB[] = {"GestureGoBProne", "Gesture"};
			GestureMountMuzzle[] = {"GestureMountMuzzleProne", "Gesture"};
			gestureNo[] = {"", "Gesture"};
			gesturePoint[] = {"", "Gesture"};
			GestureReload_smg_03 = "RifleReloadProne_smg_03";
			GestureReloadAK12[] = {"RifleReloadProneAK12", "Gesture"};
			GestureReloadAK12_Drum[] = {"RifleReloadProneAK12_Drum", "Gesture"};
			GestureReloadAKM = "RifleReloadProneAKM";
			GestureReloadAKM_Drum[] = {"RifleReloadProneAKM_Drum", "Gesture"};
			GestureReloadAKS = "RifleReloadProneAKS";
			GestureReloadARX = "RifleReloadProneARX";
			GestureReloadARX2 = "RifleReloadProneARX2";
			GestureReloadCTAR = "RifleReloadProneCTAR";
			GestureReloadDMR = "RifleReloadProneDMR";
			GestureReloadDMR02 = "RifleReloadProneDMR02";
			GestureReloadDMR03 = "RifleReloadProneDMR03";
			GestureReloadDMR04 = "RifleReloadProneDMR04";
			GestureReloadDMR05 = "RifleReloadProneDMR05";
			GestureReloadDMR06 = "RifleReloadProneDMR06";
			GestureReloadDMR07 = "RifleReloadProneDMR07";
			GestureReloadEBR = "RifleReloadProneEBR";
			GestureReloadFlaregun = "PistolReloadProneFlaregun";
			GestureReloadHunterShotgun01[] = {"RifleReloadProneHunterShotgun01", "Gesture"};
			GestureReloadKatiba = "RifleReloadProneKatiba";
			GestureReloadKatibaUGL = "RifleReloadProneKatibaUGL";
			GestureReloadLIM = "RifleReloadProneLIM";
			GestureReloadLRR = "RifleReloadProneLRR";
			GestureReloadM200 = "RifleReloadProneM200";
			GestureReloadM4SSAS = "RifleReloadProneM4SSAS";
			GestureReloadMk20 = "RifleReloadProneMk20";
			GestureReloadMk20UGL = "RifleReloadProneMk20UGL";
			GestureReloadMMG01 = "RifleReloadProneMMG01";
			GestureReloadMMG02 = "RifleReloadProneMMG02";
			GestureReloadMSBS[] = {"RifleReloadProneMSBS", "Gesture"};
			GestureReloadMSBS_UBS[] = {"RifleReloadProneMSBS_UBS", "Gesture"};
			GestureReloadMSBS_UGL[] = {"RifleReloadProneMSBS_UGL", "Gesture"};
			GestureReloadMX = "RifleReloadProneMX";
			GestureReloadMXCompact = "RifleReloadProneMXCompact";
			GestureReloadMXSniper = "RifleReloadProneMXSniper";
			GestureReloadMXUGL = "RifleReloadProneMXUGL";
			GestureReloadPistol = "PistolReloadProne";
			GestureReloadPistolHeavy02 = "PistolHeavy02ReloadProne";
			GestureReloadSDAR = "RifleReloadProneSDAR";
			GestureReloadSMG_01 = "RifleReloadProneSMG_01";
			GestureReloadSMG_02 = "RifleReloadProneSMG_02";
			GestureReloadSMG_03 = "RifleReloadProneSMG_03";
			GestureReloadSMG_05 = "RifleReloadProneSMG_05";
			GestureReloadSPAR_01 = "RifleReloadProneSPAR_01";
			GestureReloadSPAR_02 = "RifleReloadProneSPAR_02";
			GestureReloadSPARUGL = "RifleReloadProneSPARUGL";
			GestureReloadTRG = "RifleReloadProneTRG";
			GestureReloadTRGUGL = "RifleReloadProneTRGUGL";
			gestureUp[] = {"GestureGoBProne", "Gesture"};
			gestureYes[] = {"", "Gesture"};
			GetOver = "";
			handGunOn = "AmovPpneMstpSrasWpstDnon";
			leanLRot = 0;
			leanLShift = 0;
			leanRRot = 0;
			leanRShift = 0;
			LimpB = "AmovPpneMrunSlowWrflDb";
			LimpF = "AmovPpneMrunSlowWrflDf";
			LimpL = "AmovPpneMrunSlowWrflDl";
			LimpLB = "AmovPpneMrunSlowWrflDbl";
			LimpLF = "AmovPpneMrunSlowWrflDfl";
			LimpR = "AmovPpneMrunSlowWrflDr";
			LimpRB = "AmovPpneMrunSlowWrflDbr";
			LimpRF = "AmovPpneMrunSlowWrflDfr";
			medic = "AinvPpneMstpSlayWrflDnon_medic";
			medicOther = "AinvPpneMstpSlayWrflDnon_medicOther";
			MountOptic = "MountOpticProne";
			MountSide = "";
			PlayerProne = "";
			PlayerSlowB = "AmovPpneMsprSlowWrflDb";
			PlayerSlowF = "AmovPpneMsprSlowWrflDf";
			PlayerSlowL = "AmovPpneMsprSlowWrflDl";
			PlayerSlowLB = "AmovPpneMsprSlowWrflDbl";
			PlayerSlowLF = "AmovPpneMsprSlowWrflDfl";
			PlayerSlowR = "AmovPpneMsprSlowWrflDr";
			PlayerSlowRB = "AmovPpneMsprSlowWrflDbr";
			PlayerSlowRF = "AmovPpneMsprSlowWrflDfr";
			PlayerTactB = "AmovPpneMrunSlowWrflDb";
			PlayerTactF = "AmovPpneMrunSlowWrflDf";
			PlayerTactL = "AmovPpneMrunSlowWrflDl";
			PlayerTactLB = "AmovPpneMrunSlowWrflDbl";
			PlayerTactLF = "AmovPpneMrunSlowWrflDfl";
			PlayerTactR = "AmovPpneMrunSlowWrflDr";
			PlayerTactRB = "AmovPpneMrunSlowWrflDbr";
			PlayerTactRF = "AmovPpneMrunSlowWrflDfr";
			PlayerWalkB = "AmovPpneMrunSlowWrflDb";
			PlayerWalkF = "AmovPpneMrunSlowWrflDf";
			PlayerWalkL = "AmovPpneMrunSlowWrflDl";
			PlayerWalkLB = "AmovPpneMrunSlowWrflDbl";
			PlayerWalkLF = "AmovPpneMrunSlowWrflDfl";
			PlayerWalkR = "AmovPpneMrunSlowWrflDr";
			PlayerWalkRB = "AmovPpneMrunSlowWrflDbr";
			PlayerWalkRF = "AmovPpneMrunSlowWrflDfr";
			PrimaryWeapon = "AmovPpneMstpSrasWrflDnon";
			putDown = "AmovPpneMstpSrasWrflDnon_AinvPpneMstpSrasWrflDnon_Putdown";
			Relax = "AmovPpneMstpSrasWrflDnon_relax";
			ReloadGM6 = "RifleReloadProneGM6";
			reloadMagazine = "WeaponMagazineReloadProne";
			reloadMGun = "AmovPpneMstpSrasWrflDnon";
			reloadMortar = "AmovPpneMstpSrasWrflDnon";
			salute = "";
			SecondaryWeapon = "AmovPknlMstpSrasWlnrDnon";
			sitDown = "";
			SlowB = "AmovPpneMsprSlowWrflDb";
			SlowF = "AmovPpneMsprSlowWrflDf";
			SlowL = "AmovPpneMsprSlowWrflDl";
			SlowLB = "AmovPpneMsprSlowWrflDbl";
			SlowLF = "AmovPpneMsprSlowWrflDfl";
			SlowR = "AmovPpneMsprSlowWrflDr";
			SlowRB = "AmovPpneMsprSlowWrflDbr";
			SlowRF = "AmovPpneMsprSlowWrflDfr";
			stance = "ManStanceProne";
			Stand = "AmovPpneMstpSrasWrflDnon";
			StartFreefall = "AfalPpneMstpSrasWrflDnon";
			stop = "AmovPpneMstpSrasWrflDnon";
			stopRelaxed = "AidlPpneMstpSrasWrflDnon_AI";
			strokeGun = "AmovPpneMstpSrasWrflDnon";
			TactB = "AmovPpneMrunSlowWrflDb";
			TactF = "AmovPpneMrunSlowWrflDf";
			TactL = "AmovPpneMrunSlowWrflDl";
			TactLB = "AmovPpneMrunSlowWrflDbl";
			TactLF = "AmovPpneMrunSlowWrflDfl";
			TactR = "AmovPpneMrunSlowWrflDr";
			TactRB = "AmovPpneMrunSlowWrflDbr";
			TactRF = "AmovPpneMrunSlowWrflDfr";
			takeFlag = "AmovPpneMstpSrasWrflDnon";
			throwGrenade = "AwopPpneMstpSgthWrflDnon_Fast_Start";
			throwPrepare = "AwopPpneMstpSgthWrflDnon_Start";
			treated = "AmovPpneMstpSrasWrflDnon_healed";
			turnL = "AmovPpneMstpSrasWrflDnon_turnL";
			turnLRelaxed = "AmovPpneMstpSrasWrflDnon_turnL";
			turnR = "AmovPpneMstpSrasWrflDnon_turnR";
			turnRRelaxed = "AmovPpneMstpSrasWrflDnon_turnR";
			turnSpeed = 2.5;
			upDegree = "ManPosLying";
			WalkB = "AmovPpneMrunSlowWrflDb";
			WalkF = "AmovPpneMrunSlowWrflDf";
			WalkL = "AmovPpneMrunSlowWrflDl";
			WalkLB = "AmovPpneMrunSlowWrflDbl";
			WalkLF = "AmovPpneMrunSlowWrflDfl";
			WalkR = "AmovPpneMrunSlowWrflDr";
			WalkRB = "AmovPpneMrunSlowWrflDbr";
			WalkRF = "AmovPpneMrunSlowWrflDfr";
			weaponOff = "AmovPpneMstpSrasWrflDnon";
			weaponOn = "AmovPknlMstpSrasWlnrDnon";
		};
		class RifleProneActions_injured: RifleProneActions
		{
			binocOff = "";
			binocOn = "";
			CanNotMove = "";
			Civil = "";
			CivilLying = "";
			Combat = "";
			Crouch = "";
			default = "";
			down = "";
			EvasiveLeft = "";
			EvasiveRight = "";
			FastB = "";
			FastF = "AmovPpneMsprSlowWrflDf_injured";
			FastL = "";
			FastLB = "";
			FastLF = "";
			FastR = "";
			FastRB = "";
			FastRF = "";
			FireNotPossible = "";
			handGunOn = "";
			healingFinished = "AmovPpneMstpSrasWrflDnon";
			limitFast = 0.5;
			Lying = "";
			PlayerProne = "AmovPpneMstpSrasWrflDnon";
			PlayerSlowB = "";
			PlayerSlowF = "AmovPpneMsprSlowWrflDf_injured";
			PlayerSlowL = "";
			PlayerSlowLB = "";
			PlayerSlowLF = "";
			PlayerSlowR = "";
			PlayerSlowRB = "";
			PlayerSlowRF = "";
			PlayerWalkB = "";
			PlayerWalkF = "AmovPpneMsprSlowWrflDf_injured";
			PlayerWalkL = "";
			PlayerWalkLB = "";
			PlayerWalkLF = "";
			PlayerWalkR = "";
			PlayerWalkRB = "";
			PlayerWalkRF = "";
			putDown = "";
			reloadGM6 = "";
			reloadMagazine = "";
			reloadMGun = "";
			reloadMortar = "";
			SlowB = "";
			SlowF = "AmovPpneMsprSlowWrflDf_injured";
			SlowL = "";
			SlowLB = "";
			SlowLF = "";
			SlowR = "";
			SlowRB = "";
			SlowRF = "";
			Stand = "AmovPpneMsprSlowWrflDf_injured";
			stop = "";
			stopRelaxed = "";
			strokeGun = "";
			takeFlag = "";
			throwGrenade[] = {"GestureThrowGrenade", "Gesture"};
			throwPrepare = "";
			treated = "AmovPpneMstpSrasWrflDnon_injuredHealed";
			turnL = "";
			turnLRelaxed = "";
			turnR = "";
			turnRRelaxed = "";
			turnSpeed = 0.4;
			up = "AmovPpneMsprSlowWrflDf_injured";
			WalkB = "";
			WalkF = "AmovPpneMsprSlowWrflDf_injured";
			WalkL = "";
			WalkLB = "";
			WalkLF = "";
			WalkR = "";
			WalkRB = "";
			WalkRF = "";
			weaponOff = "";
			weaponOn = "";
		};
		class RifleProneActions_inv: RifleProneActions
		{
			Civil = "AinvPpneMstpSnonWnonDnon";
			Default = "AinvPpneMstpSrasWrflDnon";
			HandGunOn = "AinvPpneMstpSrasWpstDnon";
			PlayerProne = "AmovPpneMstpSrasWrflDnon";
			Stop = "AinvPpneMstpSrasWrflDnon";
			StopRelaxed = "AinvPpneMstpSrasWrflDnon";
		};
		class RifleProneActionsEvasiveF: RifleProneActions
		{
			down = "AmovPercMevaSrasWrflDf";
			PlayerStand = "AmovPercMevaSrasWrflDf";
		};
		class RifleProneActionsRunB: RifleProneActions {};
		class RifleProneActionsRunF: RifleProneActions
		{
			PlayerStand = "AmovPpneMstpSrasWrflDnon_AmovPercMsprSlowWrflDf";
		};
		class RifleSitActions: RifleBaseStandActions
		{
			default = "AmovPsitMstpSrasWrflDnon";
			Diary = "";
			Gear = "";
			GetOver = "";
			sitDown = "AmovPercMstpSrasWrflDnon";
			stance = "ManStanceCrouch";
			stop = "AmovPsitMstpSrasWrflDnon";
			StopRelaxed = "AmovPsitMstpSrasWrflDnon";
			turnL = "";
			turnR = "";
			turnSpeed = 0;
		};
		class RifleSitactionTest: RifleSitActions
		{
			Default = "sitRfl_R_BidleLoopTest";
			Stop = "sitRfl_R_BidleLoopTest";
			StopRelaxed = "sitRfl_R_BidleLoopTest";
		};
		class RifleStandActions: RifleBaseStandActions
		{
			AdjustB = "AadjPercMstpSrasWrflDdown";
			AdjustF = "AadjPercMstpSrasWrflDup";
			AdjustL = "AadjPercMstpSrasWrflDleft";
			AdjustLB = "AadjPercMstpSrasWrflDdown";
			AdjustLF = "AadjPercMstpSrasWrflDup";
			AdjustR = "AadjPercMstpSrasWrflDright";
			AdjustRB = "AadjPercMstpSrasWrflDdown";
			AdjustRF = "AadjPercMstpSrasWrflDup";
			BottomDive = "AbdvPercMstpSnonWrflDnon";
			Diary = "";
			Gear = "AinvPercMstpSrasWrflDnon";
			PlayerStand = "";
			putDown = "AmovPercMstpSrasWrflDnon_AinvPercMstpSrasWrflDnon_Putdown";
			startDive = "AdvePercMstpSnonWrflDnon";
			SurfaceDive = "AsdvPercMstpSnonWrflDnon";
		};
		class RifleStandActions_diary: RifleStandActions_gear
		{
			Default = "AmovPercMstpSrasWrflDnon_diary";
			Stop = "AmovPercMstpSrasWrflDnon_diary";
			StopRelaxed = "AmovPercMstpSrasWrflDnon_diary";
		};
		class RifleStandActions_gear: RifleLowStandActions
		{
			Civil = "AmovPercMstpSnonWnonDnon_gear";
			Default = "AmovPercMstpSrasWrflDnon_gear";
			HandGunOn = "AmovPercMstpSrasWpstDnon_gear";
			PlayerStand = "AmovPercMstpSrasWrflDnon";
			Stop = "AmovPercMstpSrasWrflDnon_gear";
			StopRelaxed = "AmovPercMstpSrasWrflDnon_gear";
		};
		class RifleStandActions_Idle: RifleStandActions {};
		class RifleStandActions_inv: RifleLowStandActions
		{
			Civil = "AinvPercMstpSnonWnonDnon";
			Default = "AinvPercMstpSrasWrflDnon";
			HandGunOn = "AinvPercMstpSrasWpstDnon";
			PlayerStand = "AmovPercMstpSrasWrflDnon";
			Stop = "AinvPercMstpSrasWrflDnon";
			StopRelaxed = "AinvPercMstpSrasWrflDnon";
		};
		class RifleStandActionsLimpB: RifleBaseStandActions
		{
			Stand = "AmovPercMlmpSlowWrflDb";
			Up = "AmovPknlMlmpSrasWrflDb";
		};
		class RifleStandActionsLimpF: RifleBaseStandActions
		{
			Stand = "AmovPercMlmpSlowWrflDf";
			Up = "AmovPknlMlmpSrasWrflDf";
		};
		class RifleStandActionsLimpL: RifleBaseStandActions
		{
			Stand = "AmovPercMlmpSlowWrflDl";
			Up = "AmovPknlMlmpSrasWrflDl";
		};
		class RifleStandActionsLimpLB: RifleBaseStandActions
		{
			Stand = "AmovPercMlmpSlowWrflDbl";
			Up = "AmovPknlMlmpSrasWrflDbl";
		};
		class RifleStandActionsLimpLF: RifleBaseStandActions
		{
			Stand = "AmovPercMlmpSlowWrflDfl";
			Up = "AmovPknlMlmpSrasWrflDfl";
		};
		class RifleStandActionsLimpR: RifleBaseStandActions
		{
			Stand = "AmovPercMlmpSlowWrflDr";
			Up = "AmovPknlMlmpSrasWrflDr";
		};
		class RifleStandActionsLimpRB: RifleBaseStandActions
		{
			Stand = "AmovPercMlmpSlowWrflDbr";
			Up = "AmovPknlMlmpSrasWrflDbr";
		};
		class RifleStandActionsLimpRF: RifleBaseStandActions
		{
			Stand = "AmovPercMlmpSlowWrflDfr";
			Up = "AmovPknlMlmpSrasWrflDfr";
		};
		class RifleStandActionsNoAdjust: RifleStandActions
		{
			AdjustB = "";
			AdjustF = "";
			AdjustL = "";
			AdjustLB = "";
			AdjustLF = "";
			AdjustR = "";
			AdjustRB = "";
			AdjustRF = "";
		};
		class RifleStandActionsRunB: RifleStandActionsNoAdjust
		{
			AdjustB = "";
			PlayerCrouch = "AmovPknlMrunSrasWrflDb";
			PlayerStand = "AmovPercMtacSrasWrflDb";
			Stand = "AmovPercMrunSlowWrflDb";
			turnSpeed = 4.5;
			Up = "AmovPknlMrunSrasWrflDb";
		};
		class RifleStandActionsRunBL: RifleStandActionsNoAdjust
		{
			PlayerCrouch = "AmovPknlMrunSrasWrflDbl";
			PlayerStand = "AmovPercMtacSrasWrflDbl";
			Stand = "AmovPercMrunSlowWrflDbl";
			turnSpeed = 4.5;
			Up = "AmovPknlMrunSrasWrflDbl";
		};
		class RifleStandActionsRunBR: RifleStandActionsNoAdjust
		{
			PlayerCrouch = "AmovPknlMrunSrasWrflDbr";
			PlayerStand = "AmovPercMtacSrasWrflDbr";
			Stand = "AmovPercMrunSlowWrflDbr";
			turnSpeed = 4.5;
			Up = "AmovPknlMrunSrasWrflDbr";
		};
		class RifleStandActionsRunF: RifleStandActionsNoAdjust
		{
			AdjustF = "";
			Combat = "AmovPercMtacSrasWrflDf";
			PlayerCrouch = "AmovPknlMrunSrasWrflDf";
			PlayerStand = "AmovPercMtacSrasWrflDf";
			Stand = "AmovPercMrunSlowWrflDf";
			ThrowPrepare = "AmovPercMrunSrasWrflDf";
			turnSpeed = 4.5;
			Up = "AmovPknlMrunSrasWrflDf";
		};
		class RifleStandActionsRunFL: RifleStandActionsNoAdjust
		{
			PlayerCrouch = "AmovPknlMrunSrasWrflDfl";
			PlayerStand = "AmovPercMtacSrasWrflDfl";
			Stand = "AmovPercMrunSlowWrflDfl";
			ThrowPrepare = "AmovPercMrunSrasWrflDfl";
			turnSpeed = 4.5;
			Up = "AmovPknlMrunSrasWrflDfl";
		};
		class RifleStandActionsRunFR: RifleStandActionsNoAdjust
		{
			PlayerCrouch = "AmovPknlMrunSrasWrflDfr";
			PlayerStand = "AmovPercMtacSrasWrflDfr";
			Stand = "AmovPercMrunSlowWrflDfr";
			ThrowPrepare = "AmovPercMrunSrasWrflDfr";
			turnSpeed = 4.5;
			Up = "AmovPknlMrunSrasWrflDfr";
		};
		class RifleStandActionsRunL: RifleStandActionsNoAdjust
		{
			AdjustL = "";
			PlayerCrouch = "AmovPknlMrunSrasWrflDl";
			PlayerStand = "AmovPercMtacSrasWrflDl";
			Stand = "AmovPercMrunSlowWrflDl";
			turnSpeed = 4.5;
			Up = "AmovPknlMrunSrasWrflDl";
		};
		class RifleStandActionsRunR: RifleStandActionsNoAdjust
		{
			AdjustR = "";
			PlayerCrouch = "AmovPknlMrunSrasWrflDr";
			PlayerStand = "AmovPercMtacSrasWrflDr";
			Stand = "AmovPercMrunSlowWrflDr";
			turnSpeed = 4.5;
			Up = "AmovPknlMrunSrasWrflDr";
		};
		class RifleStandActionsTacB: RifleStandActionsNoAdjust
		{
			AdjustB = "";
			PlayerCrouch = "AmovPknlMtacSrasWrflDb";
			Stand = "AmovPercMtacSlowWrflDb_ver2";
			Up = "AmovPknlMtacSrasWrflDb";
		};
		class RifleStandActionsTacBL: RifleStandActionsNoAdjust
		{
			PlayerCrouch = "AmovPknlMtacSrasWrflDbl";
			Stand = "AmovPercMtacSlowWrflDbl_ver2";
			Up = "AmovPknlMtacSrasWrflDbl";
		};
		class RifleStandActionsTacBR: RifleStandActionsNoAdjust
		{
			PlayerCrouch = "AmovPknlMtacSrasWrflDbr";
			Stand = "AmovPercMtacSlowWrflDbr_ver2";
			Up = "AmovPknlMtacSrasWrflDbr";
		};
		class RifleStandActionsTacF: RifleStandActionsNoAdjust
		{
			AdjustF = "";
			Combat = "AmovPercMTacSrasWrflDf";
			PlayerCrouch = "AmovPknlMtacSrasWrflDf";
			Stand = "AmovPercMtacSlowWrflDf_ver2";
			ThrowPrepare = "AmovPercMTacSrasWrflDf";
			Up = "AmovPknlMtacSrasWrflDf";
		};
		class RifleStandActionsTacFL: RifleStandActionsNoAdjust
		{
			PlayerCrouch = "AmovPknlMtacSrasWrflDfl";
			Stand = "AmovPercMtacSlowWrflDfl_ver2";
			ThrowPrepare = "AmovPercMTacSrasWrflDfl";
			Up = "AmovPknlMtacSrasWrflDfl";
		};
		class RifleStandActionsTacFR: RifleStandActionsNoAdjust
		{
			PlayerCrouch = "AmovPknlMtacSrasWrflDfr";
			Stand = "AmovPercMtacSlowWrflDfr_ver2";
			ThrowPrepare = "AmovPercMTacSrasWrflDfr";
			Up = "AmovPknlMtacSrasWrflDfr";
		};
		class RifleStandActionsTacL: RifleStandActionsNoAdjust
		{
			AdjustL = "";
			PlayerCrouch = "AmovPknlMtacSrasWrflDl";
			Stand = "AmovPercMtacSlowWrflDl_ver2";
			Up = "AmovPknlMtacSrasWrflDl";
		};
		class RifleStandActionsTacLnr: RifleStandActionsTacF
		{
			PlayerSlowF = "AmovPercMtacSrasWlnrDf";
			PlayerSlowLF = "AmovPercMtacSrasWlnrDfl";
			PlayerSlowRF = "AmovPercMtacSrasWlnrDfr";
			PlayerTactF = "AmovPercMtacSrasWlnrDf";
			PlayerTactLF = "AmovPercMtacSrasWlnrDfl";
			PlayerTactRF = "AmovPercMtacSrasWlnrDfr";
			PlayerWalkF = "AmovPercMtacSrasWlnrDf";
			PlayerWalkLF = "AmovPercMtacSrasWlnrDfl";
			PlayerWalkRF = "AmovPercMtacSrasWlnrDfr";
			SlowF = "AmovPercMtacSrasWlnrDf";
			SlowLF = "AmovPercMtacSrasWlnrDfl";
			SlowLR = "AmovPercMtacSrasWlnrDfr";
			TactF = "AmovPercMtacSrasWlnrDf";
			TactLF = "AmovPercMtacSrasWlnrDfl";
			TactLR = "AmovPercMtacSrasWlnrDfr";
			upDegree = "ManPosWeapon";
			WalkF = "AmovPercMtacSrasWlnrDf";
			WalkLF = "AmovPercMtacSrasWlnrDfl";
			WalkRF = "AmovPercMtacSrasWlnrDfr";
		};
		class RifleStandActionsTacR: RifleStandActionsNoAdjust
		{
			AdjustR = "";
			PlayerCrouch = "AmovPknlMtacSrasWrflDr";
			Stand = "AmovPercMtacSlowWrflDr_ver2";
			Up = "AmovPknlMtacSrasWrflDr";
		};
		class RifleStandActionsWlkB: RifleStandActionsNoAdjust
		{
			AdjustB = "";
			PlayerCrouch = "AmovPknlMwlkSrasWrflDb";
			Stand = "AmovPercMwlkSlowWrflDb_ver2";
			Up = "AmovPknlMwlkSrasWrflDb";
		};
		class RifleStandActionsWlkBL: RifleStandActionsNoAdjust
		{
			PlayerCrouch = "AmovPknlMwlkSrasWrflDbl";
			Stand = "AmovPercMwlkSlowWrflDbl_ver2";
			Up = "AmovPknlMwlkSrasWrflDbl";
		};
		class RifleStandActionsWlkBR: RifleStandActionsNoAdjust
		{
			PlayerCrouch = "";
			Stand = "AmovPercMwlkSlowWrflDbr_ver2";
			Up = "AmovPknlMwlkSrasWrflDbr";
		};
		class RifleStandActionsWlkF: RifleStandActionsNoAdjust
		{
			AdjustF = "";
			Combat = "AmovPercMwlkSrasWrflDf";
			PlayerCrouch = "AmovPknlMwlkSrasWrflDf";
			Stand = "AmovPercMwlkSlowWrflDf_ver2";
			ThrowPrepare = "AmovPercMwlkSrasWrflDf";
			Up = "AmovPknlMwlkSrasWrflDf";
		};
		class RifleStandActionsWlkFL: RifleStandActionsNoAdjust
		{
			PlayerCrouch = "AmovPknlMwlkSrasWrflDfl";
			Stand = "AmovPercMwlkSlowWrflDfl_ver2";
			ThrowPrepare = "AmovPercMwlkSrasWrflDfl";
			Up = "AmovPknlMwlkSrasWrflDfl";
		};
		class RifleStandActionsWlkFR: RifleStandActionsNoAdjust
		{
			PlayerCrouch = "AmovPknlMwlkSrasWrflDfr";
			Stand = "AmovPercMwlkSlowWrflDfr_ver2";
			ThrowPrepare = "AmovPercMwlkSrasWrflDfr";
			Up = "AmovPknlMwlkSrasWrflDfr";
		};
		class RifleStandActionsWlkL: RifleStandActionsNoAdjust
		{
			AdjustL = "";
			PlayerCrouch = "AmovPknlMwlkSrasWrflDl";
			Stand = "AmovPercMwlkSlowWrflDl_ver2";
			Up = "AmovPknlMwlkSrasWrflDl";
		};
		class RifleStandActionsWlkR: RifleStandActionsNoAdjust
		{
			AdjustR = "";
			PlayerCrouch = "AmovPknlMwlkSrasWrflDr";
			Stand = "AmovPercMwlkSlowWrflDr_ver2";
			Up = "AmovPknlMwlkSrasWrflDr";
		};
		class RifleStandEvasiveActionsF: RifleStandActionsNoAdjust
		{
			AdjustF = "AmovPercMrunSrasWrflDf";
			PlayerCrouch = "AmovPknlMevaSrasWrflDf";
			salute = "";
			sitDown = "";
			turnSpeed = 4;
			Up = "AmovPknlMevaSrasWrflDf";
		};
		class RifleStandEvasiveActionsF_Idle: RifleStandActions_Idle {};
		class RifleStandEvasiveActionsFL: RifleStandActionsNoAdjust
		{
			AdjustLF = "AmovPercMrunSrasWrflDfl";
			PlayerCrouch = "AmovPknlMevaSrasWrflDfl";
			salute = "";
			sitDown = "";
			turnSpeed = 4;
			Up = "AmovPknlMevaSrasWrflDfl";
		};
		class RifleStandEvasiveActionsFR: RifleStandActionsNoAdjust
		{
			AdjustRF = "AmovPercMrunSrasWrflDfr";
			PlayerCrouch = "AmovPknlMevaSrasWrflDfr";
			salute = "";
			sitDown = "";
			turnSpeed = 4;
			Up = "AmovPknlMevaSrasWrflDfr";
		};
		class RifleStandEvasiveActionsL: RifleStandActionsRunL
		{
			Down = "AadjPpneMstpSrasWrflDleft";
			PlayerCrouch = "AmovPknlMevaSrasWrflDl";
			PlayerProne = "AadjPpneMstpSrasWrflDleft";
			turnSpeed = 4;
			Up = "AmovPknlMevaSrasWrflDl";
		};
		class RifleStandEvasiveActionsR: RifleStandActionsRunR
		{
			Down = "AadjPpneMstpSrasWrflDright";
			PlayerCrouch = "AmovPknlMevaSrasWrflDr";
			PlayerProne = "AadjPpneMstpSrasWrflDright";
			turnSpeed = 4;
			Up = "AmovPknlMevaSrasWrflDr";
		};
		class RifleStandLowEvasiveActionsF: RifleLowStandActionsNoAdjust
		{
			AdjustF = "AmovPercMrunSrasWrflDf";
			PlayerCrouch = "AmovPknlMevaSlowWrflDf";
			salute = "";
			sitDown = "";
			ThrowPrepare = "AmovPercMevaSlowWrflDf";
			turnSpeed = 4;
			Up = "AmovPknlMevaSlowWrflDf";
		};
		class RifleStandLowEvasiveActionsFL: RifleLowStandActionsNoAdjust
		{
			AdjustLF = "AmovPercMrunSrasWrflDfl";
			PlayerCrouch = "AmovPknlMevaSlowWrflDfl";
			salute = "";
			sitDown = "";
			ThrowPrepare = "AmovPercMevaSlowWrflDfl";
			turnSpeed = 4;
			Up = "AmovPknlMevaSlowWrflDfl";
		};
		class RifleStandLowEvasiveActionsFR: RifleLowStandActionsNoAdjust
		{
			AdjustLF = "AmovPercMrunSrasWrflDfl";
			PlayerCrouch = "AmovPknlMevaSlowWrflDfr";
			salute = "";
			sitDown = "";
			ThrowPrepare = "AmovPercMevaSlowWrflDfr";
			turnSpeed = 4;
			Up = "AmovPknlMevaSlowWrflDfr";
		};
		class RifleStandSaluteActions: RifleBaseStandActions
		{
			default = "AmovPercMstpSrasWrflDnon_Salute";
			salute = "AmovPercMstpSrasWrflDnon";
			sitDown = "";
			stop = "AmovPercMstpSrasWrflDnon_Salute";
			StopRelaxed = "AmovPercMstpSrasWrflDnon_Salute";
		};
		class RifleStandSaluteActions_Idle: RifleStandActions_Idle
		{
			Default = "AidlPercMstpSrasWrflDnon_Salute";
			Salute = "AmovPercMstpSrasWrflDnon";
			SitDown = "";
			Stop = "AidlPercMstpSrasWrflDnon_Salute";
			StopRelaxed = "AidlPercMstpSrasWrflDnon_Salute";
		};
		class RifleStandTakeActions: RifleBaseLowStandActions
		{
			default = "";
			PutDown = "AmovPercMstpSrasWrflDnon";
			salute = "";
			sitDown = "";
			stop = "AmovPercMstpSrasWrflDnon_gear";
			StopRelaxed = "AmovPercMstpSrasWrflDnon_gear";
		};
		class StaticCutsceneLoop: NoActions
		{
			Die = "DeadState";
			LadderOnDown = "";
			LadderOnUp = "";
			stance = "ManStanceStand";
			TestDriver = "";
			TestDriverOut = "";
			TestGunner = "";
			upDegree = "ManPosStand";
		};
		class StaticCutsceneLoopPlayerWalk: NoActions
		{
			default = "AmovPercMstpSlowWrflDnon";
			Die = "DeadState";
			LadderOnDown = "";
			LadderOnUp = "";
			stance = "ManStanceStand";
			stop = "AmovPercMstpSlowWrflDnon";
			stopRelaxed = "AmovPercMstpSlowWrflDnon";
			TestDriver = "";
			TestDriverOut = "";
			TestGunner = "";
			upDegree = "ManPosStand";
		};
		class StaticCutsceneLoopViper: NoActions
		{
			default = "viper_runLoop";
			Die = "DeadState";
			LadderOnDown = "";
			LadderOnUp = "";
			stance = "ManStanceStand";
			stop = "viper_runLoop";
			stopRelaxed = "viper_runLoop";
			TestDriver = "";
			TestDriverOut = "";
			TestGunner = "";
			upDegree = "ManPosStand";
		};
		class StaticCutsceneLoopViperSgt: NoActions
		{
			default = "vipersgt_runLoop";
			Die = "DeadState";
			LadderOnDown = "";
			LadderOnUp = "";
			stance = "ManStanceStand";
			stop = "vipersgt_runLoop";
			stopRelaxed = "vipersgt_runLoop";
			TestDriver = "";
			TestDriverOut = "";
			TestGunner = "";
			upDegree = "ManPosStand";
		};
		class SurfaceDivingActions: NoActions
		{
			BottomDive = "AbdvPercMstpSnonWnonDnon";
			default = "AsdvPercMstpSnonWnonDnon";
			FastB = "AsdvPercMrunSnonWnonDb";
			FastF = "AsdvPercMsprSnonWnonDf";
			FastL = "AsdvPercMrunSnonWnonDl";
			FastLB = "AsdvPercMrunSnonWnonDbl";
			FastLF = "AsdvPercMrunSnonWnonDfl";
			FastR = "AsdvPercMrunSnonWnonDr";
			FastRB = "AsdvPercMrunSnonWnonDbr";
			FastRF = "AsdvPercMrunSnonWnonDfr";
			GetInBoat = "AmovPercMstpSnonWnonDnon_AcrgPknlMstpSnonWnonDnon_getInHigh";
			GetInSDV = "AsdvPercMstpSnonWnonDnon_GetInSDV";
			GetOutBoat = "AcrgPknlMstpSnonWnonDnon_AmovPercMstpSrasWrflDnon_getOutHigh";
			GetOutSDV = "AsdvPercMstpSnonWnonDnon_GetOutSDV";
			limitFast = 3.2;
			LimpB = "AsdvPercMwlkSnonWnonDb";
			LimpF = "AsdvPercMwlkSnonWnonDf";
			LimpL = "AsdvPercMwlkSnonWnonDl";
			LimpLB = "AsdvPercMwlkSnonWnonDbl";
			LimpLF = "AsdvPercMwlkSnonWnonDfl";
			LimpR = "AsdvPercMwlkSnonWnonDr";
			LimpRB = "AsdvPercMwlkSnonWnonDbr";
			LimpRF = "AsdvPercMwlkSnonWnonDfr";
			PlayerSlowB = "AsdvPercMrunSnonWnonDb";
			PlayerSlowF = "AsdvPercMrunSnonWnonDf";
			PlayerSlowL = "AsdvPercMrunSnonWnonDl";
			PlayerSlowLB = "AsdvPercMrunSnonWnonDbl";
			PlayerSlowLF = "AsdvPercMrunSnonWnonDfl";
			PlayerSlowR = "AsdvPercMrunSnonWnonDr";
			PlayerSlowRB = "AsdvPercMrunSnonWnonDbr";
			PlayerSlowRF = "AsdvPercMrunSnonWnonDfr";
			PlayerTactB = "AsdvPercMtacSnonWnonDb";
			PlayerTactF = "AsdvPercMtacSnonWnonDf";
			PlayerTactL = "AsdvPercMtacSnonWnonDl";
			PlayerTactLB = "AsdvPercMtacSnonWnonDbl";
			PlayerTactLF = "AsdvPercMtacSnonWnonDfl";
			PlayerTactR = "AsdvPercMtacSnonWnonDr";
			PlayerTactRB = "AsdvPercMtacSnonWnonDbr";
			PlayerTactRF = "AsdvPercMtacSnonWnonDfr";
			PlayerWalkB = "AsdvPercMwlkSnonWnonDb";
			PlayerWalkF = "AsdvPercMwlkSnonWnonDf";
			PlayerWalkL = "AsdvPercMwlkSnonWnonDl";
			PlayerWalkLB = "AsdvPercMwlkSnonWnonDbl";
			PlayerWalkLF = "AsdvPercMwlkSnonWnonDfl";
			PlayerWalkR = "AsdvPercMwlkSnonWnonDr";
			PlayerWalkRB = "AsdvPercMwlkSnonWnonDbr";
			PlayerWalkRF = "AsdvPercMwlkSnonWnonDfr";
			PrimaryWeapon = "AsdvPercMstpSnonWrflDnon";
			putDown = "AsdvPercMstpSnonWnonDnon_AsdvPercMstpSnonWnonDnon_putDown";
			relax = "AsdvPercMstpSnonWnonDnon_relax";
			SlowB = "AsdvPercMrunSnonWnonDb";
			SlowF = "AsdvPercMrunSnonWnonDf";
			SlowL = "AsdvPercMrunSnonWnonDl";
			SlowLB = "AsdvPercMrunSnonWnonDbl";
			SlowLF = "AsdvPercMrunSnonWnonDfl";
			SlowR = "AsdvPercMrunSnonWnonDr";
			SlowRB = "AsdvPercMrunSnonWnonDbr";
			SlowRF = "AsdvPercMrunSnonWnonDfr";
			stop = "AsdvPercMstpSnonWnonDnon";
			stopDive = "AmovPercMstpSnonWnonDnon";
			stopRelaxed = "AsdvPercMstpSnonWnonDnon";
			SurfaceDive = "AsdvPercMstpSnonWnonDnon";
			swimDown = "AsdvPercMstpSnonWnonDnon_goDown";
			swimUp = "AsdvPercMstpSnonWnonDnon_goup";
			TactB = "AsdvPercMtacSnonWnonDb";
			TactF = "AsdvPercMtacSnonWnonDf";
			TactL = "AsdvPercMtacSnonWnonDl";
			TactLB = "AsdvPercMtacSnonWnonDbl";
			TactLF = "AsdvPercMtacSnonWnonDfl";
			TactR = "AsdvPercMtacSnonWnonDr";
			TactRB = "AsdvPercMtacSnonWnonDbr";
			TactRF = "AsdvPercMtacSnonWnonDfr";
			turnL = "AsdvPercMstpSnonWnonDnon_turnL";
			turnR = "AsdvPercMstpSnonWnonDnon_turnR";
			upDegree = "ManPosSurfaceDiving";
			WalkB = "AsdvPercMwlkSnonWnonDb";
			WalkF = "AsdvPercMwlkSnonWnonDf";
			WalkL = "AsdvPercMwlkSnonWnonDl";
			WalkLB = "AsdvPercMwlkSnonWnonDbl";
			WalkLF = "AsdvPercMwlkSnonWnonDfl";
			WalkR = "AsdvPercMwlkSnonWnonDr";
			WalkRB = "AsdvPercMwlkSnonWnonDbr";
			WalkRF = "AsdvPercMwlkSnonWnonDfr";
		};
		class SurfaceDivingActionsFastF: SurfaceDivingActions
		{
			BottomDive = "AbdvPercMsprSnonWnonDf";
			StartDive = "AdvePercMsprSnonWnonDf";
			SurfaceDive = "AsdvPercMsprSnonWnonDf";
		};
		class SurfaceDivingActionsGoingOut: SurfaceDivingActions
		{
			Civil = "AmovPercMstpSnonWnonDnon";
			Combat = "AmovPercMstpSrasWrflDnon";
			Default = "AmovPercMstpSnonWnonDnon";
			Stop = "AmovPercMstpSrasWrflDnon";
			upDegree = "ManPosGoingFromWater";
		};
		class SurfaceDivingActionsRunB: SurfaceDivingActions
		{
			BottomDive = "AbdvPercMrunSnonWnonDb";
			StartDive = "AdvePercMrunSnonWnonDb";
			SurfaceDive = "AsdvPercMrunSnonWnonDb";
		};
		class SurfaceDivingActionsRunBL: SurfaceDivingActions
		{
			BottomDive = "AbdvPercMrunSnonWnonDbl";
			StartDive = "AdvePercMrunSnonWnonDbl";
			SurfaceDive = "AsdvPercMrunSnonWnonDbl";
		};
		class SurfaceDivingActionsRunBR: SurfaceDivingActions
		{
			BottomDive = "AbdvPercMrunSnonWnonDbr";
			StartDive = "AdvePercMrunSnonWnonDbr";
			SurfaceDive = "AsdvPercMrunSnonWnonDbr";
		};
		class SurfaceDivingActionsRunF: SurfaceDivingActions
		{
			BottomDive = "AbdvPercMrunSnonWnonDf";
			SurfaceDive = "AsdvPercMrunSnonWnonDf";
		};
		class SurfaceDivingActionsRunFL: SurfaceDivingActions
		{
			BottomDive = "AbdvPercMrunSnonWnonDfl";
			StartDive = "AdvePercMrunSnonWnonDfl";
			SurfaceDive = "AsdvPercMrunSnonWnonDfl";
		};
		class SurfaceDivingActionsRunFR: SurfaceDivingActions
		{
			BottomDive = "AbdvPercMrunSnonWnonDfr";
			StartDive = "AdvePercMrunSnonWnonDfr";
			SurfaceDive = "AsdvPercMrunSnonWnonDfr";
		};
		class SurfaceDivingActionsRunL: SurfaceDivingActions
		{
			BottomDive = "AbdvPercMrunSnonWnonDl";
			StartDive = "AdvePercMrunSnonWnonDl";
			SurfaceDive = "AsdvPercMrunSnonWnonDl";
		};
		class SurfaceDivingActionsRunR: SurfaceDivingActions
		{
			BottomDive = "AbdvPercMrunSnonWnonDr";
			StartDive = "AdvePercMrunSnonWnonDr";
			SurfaceDive = "AsdvPercMrunSnonWnonDr";
		};
		class SurfaceDivingActionsTacB: SurfaceDivingActions
		{
			BottomDive = "AbdvPercMtacSnonWnonDb";
			StartDive = "AdvePercMtacSnonWnonDb";
			SurfaceDive = "AsdvPercMtacSnonWnonDb";
		};
		class SurfaceDivingActionsTacBL: SurfaceDivingActions
		{
			BottomDive = "AbdvPercMtacSnonWnonDbl";
			StartDive = "AdvePercMtacSnonWnonDbl";
			SurfaceDive = "AsdvPercMtacSnonWnonDbl";
		};
		class SurfaceDivingActionsTacBR: SurfaceDivingActions
		{
			BottomDive = "AbdvPercMtacSnonWnonDbr";
			StartDive = "AdvePercMtacSnonWnonDbr";
			SurfaceDive = "AsdvPercMtacSnonWnonDbr";
		};
		class SurfaceDivingActionsTacF: SurfaceDivingActions
		{
			BottomDive = "AbdvPercMtacSnonWnonDf";
			StartDive = "AdvePercMtacSnonWnonDf";
			SurfaceDive = "AsdvPercMtacSnonWnonDf";
		};
		class SurfaceDivingActionsTacFL: SurfaceDivingActions
		{
			BottomDive = "AbdvPercMtacSnonWnonDfl";
			StartDive = "AdvePercMtacSnonWnonDfl";
			SurfaceDive = "AsdvPercMtacSnonWnonDfl";
		};
		class SurfaceDivingActionsTacFR: SurfaceDivingActions
		{
			BottomDive = "AbdvPercMtacSnonWnonDfr";
			StartDive = "AdvePercMtacSnonWnonDfr";
			SurfaceDive = "AsdvPercMtacSnonWnonDfr";
		};
		class SurfaceDivingActionsTacL: SurfaceDivingActions
		{
			BottomDive = "AbdvPercMtacSnonWnonDl";
			StartDive = "AdvePercMtacSnonWnonDl";
			SurfaceDive = "AsdvPercMtacSnonWnonDl";
		};
		class SurfaceDivingActionsTacR: SurfaceDivingActions
		{
			BottomDive = "AbdvPercMtacSnonWnonDr";
			StartDive = "AdvePercMtacSnonWnonDr";
			SurfaceDive = "AsdvPercMtacSnonWnonDr";
		};
		class SurfaceDivingActionsWlkB: SurfaceDivingActions
		{
			BottomDive = "AbdvPercMwlkSnonWnonDb";
			StartDive = "AdvePercMwlkSnonWnonDb";
			SurfaceDive = "AsdvPercMwlkSnonWnonDb";
		};
		class SurfaceDivingActionsWlkBL: SurfaceDivingActions
		{
			BottomDive = "AbdvPercMwlkSnonWnonDbl";
			StartDive = "AdvePercMwlkSnonWnonDbl";
			SurfaceDive = "AsdvPercMwlkSnonWnonDbl";
		};
		class SurfaceDivingActionsWlkBR: SurfaceDivingActions
		{
			BottomDive = "AbdvPercMwlkSnonWnonDbr";
			StartDive = "AdvePercMwlkSnonWnonDbr";
			SurfaceDive = "AsdvPercMwlkSnonWnonDbr";
		};
		class SurfaceDivingActionsWlkF: SurfaceDivingActions
		{
			BottomDive = "AbdvPercMwlkSnonWnonDf";
			StartDive = "AdvePercMwlkSnonWnonDf";
			SurfaceDive = "AsdvPercMwlkSnonWnonDf";
		};
		class SurfaceDivingActionsWlkFL: SurfaceDivingActions
		{
			BottomDive = "AbdvPercMwlkSnonWnonDfl";
			StartDive = "AdvePercMwlkSnonWnonDfl";
			SurfaceDive = "AsdvPercMwlkSnonWnonDfl";
		};
		class SurfaceDivingActionsWlkFR: SurfaceDivingActions
		{
			BottomDive = "AbdvPercMwlkSnonWnonDfr";
			StartDive = "AdvePercMwlkSnonWnonDfr";
			SurfaceDive = "AsdvPercMwlkSnonWnonDfr";
		};
		class SurfaceDivingActionsWlkL: SurfaceDivingActions
		{
			BottomDive = "AbdvPercMwlkSnonWnonDl";
			StartDive = "AdvePercMwlkSnonWnonDl";
			SurfaceDive = "AsdvPercMwlkSnonWnonDl";
		};
		class SurfaceDivingActionsWlkR: SurfaceDivingActions
		{
			BottomDive = "AbdvPercMwlkSnonWnonDr";
			StartDive = "AdvePercMwlkSnonWnonDr";
			SurfaceDive = "AsdvPercMwlkSnonWnonDr";
		};
		class SurfaceDivingRifleActions: SurfaceDivingActions
		{
			BottomDive = "AbdvPercMstpSnonWrflDnon";
			Civil = "AsdvPercMstpSnonWnonDnon";
			default = "AsdvPercMstpSnonWrflDnon";
			FastB = "AsdvPercMrunSnonWrflDb";
			FastF = "AsdvPercMsprSnonWrflDf";
			FastL = "AsdvPercMrunSnonWrflDl";
			FastLB = "AsdvPercMrunSnonWrflDbl";
			FastLF = "AsdvPercMrunSnonWrflDfl";
			FastR = "AsdvPercMrunSnonWrflDr";
			FastRB = "AsdvPercMrunSnonWrflDbr";
			FastRF = "AsdvPercMrunSnonWrflDfr";
			GetInSDV = "AsdvPercMstpSnonWrflDnon_GetInSDV";
			GetOutSDV = "AsdvPercMstpSnonWrflDnon_GetOutSDV";
			LimpB = "AsdvPercMwlkSnonWrflDb";
			LimpF = "AsdvPercMwlkSnonWrflDf";
			LimpL = "AsdvPercMwlkSnonWrflDl";
			LimpLB = "AsdvPercMwlkSnonWrflDbl";
			LimpLF = "AsdvPercMwlkSnonWrflDfl";
			LimpR = "AsdvPercMwlkSnonWrflDr";
			LimpRB = "AsdvPercMwlkSnonWrflDbr";
			LimpRF = "AsdvPercMwlkSnonWrflDfr";
			PlayerSlowB = "AsdvPercMrunSnonWrflDb";
			PlayerSlowF = "AsdvPercMrunSnonWrflDf";
			PlayerSlowL = "AsdvPercMrunSnonWrflDl";
			PlayerSlowLB = "AsdvPercMrunSnonWrflDbl";
			PlayerSlowLF = "AsdvPercMrunSnonWrflDfl";
			PlayerSlowR = "AsdvPercMrunSnonWrflDr";
			PlayerSlowRB = "AsdvPercMrunSnonWrflDbr";
			PlayerSlowRF = "AsdvPercMrunSnonWrflDfr";
			PlayerTactB = "AsdvPercMtacSnonWrflDb";
			PlayerTactF = "AsdvPercMtacSnonWrflDf";
			PlayerTactL = "AsdvPercMtacSnonWrflDl";
			PlayerTactLB = "AsdvPercMtacSnonWrflDbl";
			PlayerTactLF = "AsdvPercMtacSnonWrflDfl";
			PlayerTactR = "AsdvPercMtacSnonWrflDr";
			PlayerTactRB = "AsdvPercMtacSnonWrflDbr";
			PlayerTactRF = "AsdvPercMtacSnonWrflDfr";
			PlayerWalkB = "AsdvPercMwlkSnonWrflDb";
			PlayerWalkF = "AsdvPercMwlkSnonWrflDf";
			PlayerWalkL = "AsdvPercMwlkSnonWrflDl";
			PlayerWalkLB = "AsdvPercMwlkSnonWrflDbl";
			PlayerWalkLF = "AsdvPercMwlkSnonWrflDfl";
			PlayerWalkR = "AsdvPercMwlkSnonWrflDr";
			PlayerWalkRB = "AsdvPercMwlkSnonWrflDbr";
			PlayerWalkRF = "AsdvPercMwlkSnonWrflDfr";
			putDown = "AsdvPercMstpSnonWrflDnon_AsdvPercMstpSnonWrflDnon_putDown";
			relax = "AsdvPercMstpSnonWrflDnon_relax";
			SlowB = "AsdvPercMrunSnonWrflDb";
			SlowF = "AsdvPercMrunSnonWrflDf";
			SlowL = "AsdvPercMrunSnonWrflDl";
			SlowLB = "AsdvPercMrunSnonWrflDbl";
			SlowLF = "AsdvPercMrunSnonWrflDfl";
			SlowR = "AsdvPercMrunSnonWrflDr";
			SlowRB = "AsdvPercMrunSnonWrflDbr";
			SlowRF = "AsdvPercMrunSnonWrflDfr";
			StartDive = "AdvePercMstpSnonWrflDnon";
			stop = "AsdvPercMstpSnonWrflDnon";
			stopDive = "AmovPercMstpSrasWrflDnon";
			stopRelaxed = "AsdvPercMstpSnonWrflDnon";
			SurfaceDive = "AsdvPercMstpSnonWrflDnon";
			swimDown = "AsdvPercMstpSnonWrflDnon_goDown";
			swimUp = "AsdvPercMstpSnonWrflDnon_goup";
			TactB = "AsdvPercMtacSnonWrflDb";
			TactF = "AsdvPercMtacSnonWrflDf";
			TactL = "AsdvPercMtacSnonWrflDl";
			TactLB = "AsdvPercMtacSnonWrflDbl";
			TactLF = "AsdvPercMtacSnonWrflDfl";
			TactR = "AsdvPercMtacSnonWrflDr";
			TactRB = "AsdvPercMtacSnonWrflDbr";
			TactRF = "AsdvPercMtacSnonWrflDfr";
			turnL = "AsdvPercMstpSnonWrflDnon_turnL";
			turnR = "AsdvPercMstpSnonWrflDnon_turnR";
			WalkB = "AsdvPercMwlkSnonWrflDb";
			WalkF = "AsdvPercMwlkSnonWrflDf";
			WalkL = "AsdvPercMwlkSnonWrflDl";
			WalkLB = "AsdvPercMwlkSnonWrflDbl";
			WalkLF = "AsdvPercMwlkSnonWrflDfl";
			WalkR = "AsdvPercMwlkSnonWrflDr";
			WalkRB = "AsdvPercMwlkSnonWrflDbr";
			WalkRF = "AsdvPercMwlkSnonWrflDfr";
		};
		class SurfaceDivingRifleActionsFastF: SurfaceDivingRifleActions
		{
			BottomDive = "AbdvPercMsprSnonWrflDf";
			StartDive = "AdvePercMsprSnonWrflDf";
			SurfaceDive = "AsdvPercMsprSnonWrflDf";
		};
		class SurfaceDivingRifleActionsGoingOut: SurfaceDivingRifleActions
		{
			Combat = "AmovPercMstpSrasWrflDnon";
			Default = "AmovPercMstpSrasWrflDnon";
			Stop = "AmovPercMstpSrasWrflDnon";
			upDegree = "ManPosGoingFromWater";
		};
		class SurfaceDivingRifleActionsRunB: SurfaceDivingRifleActions
		{
			BottomDive = "AbdvPercMrunSnonWrflDb";
			StartDive = "AdvePercMrunSnonWrflDb";
			SurfaceDive = "AsdvPercMrunSnonWrflDb";
		};
		class SurfaceDivingRifleActionsRunBL: SurfaceDivingRifleActions
		{
			BottomDive = "AbdvPercMrunSnonWrflDbl";
			StartDive = "AdvePercMrunSnonWrflDbl";
			SurfaceDive = "AsdvPercMrunSnonWrflDbl";
		};
		class SurfaceDivingRifleActionsRunBR: SurfaceDivingRifleActions
		{
			BottomDive = "AbdvPercMrunSnonWrflDbr";
			StartDive = "AdvePercMrunSnonWrflDbr";
			SurfaceDive = "AsdvPercMrunSnonWrflDbr";
		};
		class SurfaceDivingRifleActionsRunF: SurfaceDivingRifleActions
		{
			BottomDive = "AbdvPercMrunSnonWrflDf";
			StartDive = "AdvePercMrunSnonWrflDf";
			SurfaceDive = "AsdvPercMrunSnonWrflDf";
		};
		class SurfaceDivingRifleActionsRunFL: SurfaceDivingRifleActions
		{
			BottomDive = "AbdvPercMrunSnonWrflDfl";
			StartDive = "AdvePercMrunSnonWrflDfl";
			SurfaceDive = "AsdvPercMrunSnonWrflDfl";
		};
		class SurfaceDivingRifleActionsRunFR: SurfaceDivingRifleActions
		{
			BottomDive = "AbdvPercMrunSnonWrflDfr";
			StartDive = "AdvePercMrunSnonWrflDfr";
			SurfaceDive = "AsdvPercMrunSnonWrflDfr";
		};
		class SurfaceDivingRifleActionsRunL: SurfaceDivingRifleActions
		{
			BottomDive = "AbdvPercMrunSnonWrflDl";
			StartDive = "AdvePercMrunSnonWrflDl";
			SurfaceDive = "AsdvPercMrunSnonWrflDl";
		};
		class SurfaceDivingRifleActionsRunR: SurfaceDivingRifleActions
		{
			BottomDive = "AbdvPercMrunSnonWrflDr";
			StartDive = "AdvePercMrunSnonWrflDr";
			SurfaceDive = "AsdvPercMrunSnonWrflDr";
		};
		class SurfaceDivingRifleActionsTacB: SurfaceDivingRifleActions
		{
			BottomDive = "AbdvPercMtacSnonWrflDb";
			StartDive = "AdvePercMtacSnonWrflDb";
			SurfaceDive = "AsdvPercMtacSnonWrflDb";
		};
		class SurfaceDivingRifleActionsTacBL: SurfaceDivingRifleActions
		{
			BottomDive = "AbdvPercMtacSnonWrflDbl";
			StartDive = "AdvePercMtacSnonWrflDbl";
			SurfaceDive = "AsdvPercMtacSnonWrflDbl";
		};
		class SurfaceDivingRifleActionsTacBR: SurfaceDivingRifleActions
		{
			BottomDive = "AbdvPercMtacSnonWrflDbr";
			StartDive = "AdvePercMtacSnonWrflDbr";
			SurfaceDive = "AsdvPercMtacSnonWrflDbr";
		};
		class SurfaceDivingRifleActionsTacF: SurfaceDivingRifleActions
		{
			BottomDive = "AbdvPercMtacSnonWrflDf";
			StartDive = "AdvePercMtacSnonWrflDf";
			SurfaceDive = "AsdvPercMtacSnonWrflDf";
		};
		class SurfaceDivingRifleActionsTacFL: SurfaceDivingRifleActions
		{
			BottomDive = "AbdvPercMtacSnonWrflDfl";
			StartDive = "AdvePercMtacSnonWrflDfl";
			SurfaceDive = "AsdvPercMtacSnonWrflDfl";
		};
		class SurfaceDivingRifleActionsTacFR: SurfaceDivingRifleActions
		{
			BottomDive = "AbdvPercMtacSnonWrflDfr";
			StartDive = "AdvePercMtacSnonWrflDfr";
			SurfaceDive = "AsdvPercMtacSnonWrflDfr";
		};
		class SurfaceDivingRifleActionsTacL: SurfaceDivingRifleActions
		{
			BottomDive = "AbdvPercMtacSnonWrflDl";
			StartDive = "AdvePercMtacSnonWrflDl";
			SurfaceDive = "AsdvPercMtacSnonWrflDl";
		};
		class SurfaceDivingRifleActionsTacR: SurfaceDivingRifleActions
		{
			BottomDive = "AbdvPercMtacSnonWrflDr";
			StartDive = "AdvePercMtacSnonWrflDr";
			SurfaceDive = "AsdvPercMtacSnonWrflDr";
		};
		class SurfaceDivingRifleActionsWlkB: SurfaceDivingRifleActions
		{
			BottomDive = "AbdvPercMwlkSnonWrflDb";
			StartDive = "AdvePercMwlkSnonWrflDb";
			SurfaceDive = "AsdvPercMwlkSnonWrflDb";
		};
		class SurfaceDivingRifleActionsWlkBL: SurfaceDivingRifleActions
		{
			BottomDive = "AbdvPercMwlkSnonWrflDbl";
			StartDive = "AdvePercMwlkSnonWrflDbl";
			SurfaceDive = "AsdvPercMwlkSnonWrflDbl";
		};
		class SurfaceDivingRifleActionsWlkBR: SurfaceDivingRifleActions
		{
			BottomDive = "AbdvPercMwlkSnonWrflDbr";
			StartDive = "AdvePercMwlkSnonWrflDbr";
			SurfaceDive = "AsdvPercMwlkSnonWrflDbr";
		};
		class SurfaceDivingRifleActionsWlkF: SurfaceDivingRifleActions
		{
			BottomDive = "AbdvPercMwlkSnonWrflDf";
			StartDive = "AdvePercMwlkSnonWrflDf";
			SurfaceDive = "AsdvPercMwlkSnonWrflDf";
		};
		class SurfaceDivingRifleActionsWlkFL: SurfaceDivingRifleActions
		{
			BottomDive = "AbdvPercMwlkSnonWrflDfl";
			StartDive = "AdvePercMwlkSnonWrflDfl";
			SurfaceDive = "AsdvPercMwlkSnonWrflDfl";
		};
		class SurfaceDivingRifleActionsWlkFR: SurfaceDivingRifleActions
		{
			BottomDive = "AbdvPercMwlkSnonWrflDfr";
			StartDive = "AdvePercMwlkSnonWrflDfr";
			SurfaceDive = "AsdvPercMwlkSnonWrflDfr";
		};
		class SurfaceDivingRifleActionsWlkL: SurfaceDivingRifleActions
		{
			BottomDive = "AbdvPercMwlkSnonWrflDl";
			StartDive = "AdvePercMwlkSnonWrflDl";
			SurfaceDive = "AsdvPercMwlkSnonWrflDl";
		};
		class SurfaceDivingRifleActionsWlkR: SurfaceDivingRifleActions
		{
			BottomDive = "AbdvPercMwlkSnonWrflDr";
			StartDive = "AdvePercMwlkSnonWrflDr";
			SurfaceDive = "AsdvPercMwlkSnonWrflDr";
		};
		class SurfaceSwimmingActions: SwimmingActions
		{
			default = "AsswPercMstpSnonWnonDnon";
			FastB = "AsswPercMrunSnonWnonDb";
			FastF = "AsswPercMsprSnonWnonDf";
			FastL = "AsswPercMstpSnonWnonDnon";
			FastLB = "AsswPercMstpSnonWnonDnon";
			FastLF = "AsswPercMsprSnonWnonDf";
			FastR = "AsswPercMstpSnonWnonDnon";
			FastRB = "AsswPercMstpSnonWnonDnon";
			FastRF = "AsswPercMsprSnonWnonDf";
			LimpB = "AsswPercMwlkSnonWnonDb";
			LimpF = "AsswPercMwlkSnonWnonDf";
			LimpL = "AsswPercMwlkSnonWnonDl";
			LimpLB = "AsswPercMstpSnonWnonDnon";
			LimpLF = "AsswPercMwlkSnonWnonDfl";
			LimpR = "AsswPercMwlkSnonWnonDr";
			LimpRB = "AsswPercMstpSnonWnonDnon";
			LimpRF = "AsswPercMwlkSnonWnonDfr";
			PlayerSlowB = "AsswPercMrunSnonWnonDb";
			PlayerSlowF = "AsswPercMrunSnonWnonDf";
			PlayerSlowL = "AsswPercMrunSnonWnonDl";
			PlayerSlowLB = "AsswPercMstpSnonWnonDnon";
			PlayerSlowLF = "AsswPercMrunSnonWnonDfl";
			PlayerSlowR = "AsswPercMrunSnonWnonDr";
			PlayerSlowRB = "AsswPercMstpSnonWnonDnon";
			PlayerSlowRF = "AsswPercMrunSnonWnonDfr";
			PlayerTactB = "AsswPercMwlkSnonWnonDb";
			PlayerTactF = "AsswPercMwlkSnonWnonDf";
			PlayerTactL = "AsswPercMwlkSnonWnonDl";
			PlayerTactLB = "AsswPercMstpSnonWnonDnon";
			PlayerTactLF = "AsswPercMwlkSnonWnonDfl";
			PlayerTactR = "AsswPercMwlkSnonWnonDr";
			PlayerTactRB = "AsswPercMstpSnonWnonDnon";
			PlayerTactRF = "AsswPercMwlkSnonWnonDfr";
			PlayerWalkB = "AsswPercMwlkSnonWnonDb";
			PlayerWalkF = "AsswPercMwlkSnonWnonDf";
			PlayerWalkL = "AsswPercMwlkSnonWnonDl";
			PlayerWalkLB = "AsswPercMstpSnonWnonDnon";
			PlayerWalkLF = "AsswPercMwlkSnonWnonDfl";
			PlayerWalkR = "AsswPercMwlkSnonWnonDr";
			PlayerWalkRB = "AsswPercMstpSnonWnonDnon";
			PlayerWalkRF = "AsswPercMwlkSnonWnonDfr";
			relax = "AsswPercMstpSnonWnonDnon_relax";
			SlowB = "AsswPercMrunSnonWnonDb";
			SlowF = "AsswPercMrunSnonWnonDf";
			SlowL = "AsswPercMrunSnonWnonDl";
			SlowLB = "AsswPercMstpSnonWnonDnon";
			SlowLF = "AsswPercMrunSnonWnonDfl";
			SlowR = "AsswPercMrunSnonWnonDr";
			SlowRB = "AsswPercMstpSnonWnonDnon";
			SlowRF = "AsswPercMrunSnonWnonDfr";
			stop = "AsswPercMstpSnonWnonDnon";
			stopRelaxed = "AsswPercMstpSnonWnonDnon";
			swimDown = "AsswPercMstpSnonWnonDnon_goDown";
			swimUp = "AsswPercMstpSnonWnonDnon_goup";
			TactB = "AsswPercMwlkSnonWnonDb";
			TactF = "AsswPercMwlkSnonWnonDf";
			TactL = "AsswPercMwlkSnonWnonDl";
			TactLB = "AsswPercMstpSnonWnonDnon";
			TactLF = "AsswPercMwlkSnonWnonDfl";
			TactR = "AsswPercMwlkSnonWnonDr";
			TactRB = "AsswPercMstpSnonWnonDnon";
			TactRF = "AsswPercMwlkSnonWnonDfr";
			turnL = "AsswPercMstpSnonWnonDnon";
			turnR = "AsswPercMstpSnonWnonDnon";
			upDegree = "ManPosSurfaceSwimming";
			WalkB = "AsswPercMwlkSnonWnonDb";
			WalkF = "AsswPercMwlkSnonWnonDf";
			WalkL = "AsswPercMwlkSnonWnonDl";
			WalkLB = "AsswPercMstpSnonWnonDnon";
			WalkLF = "AsswPercMwlkSnonWnonDfl";
			WalkR = "AsswPercMwlkSnonWnonDr";
			WalkRB = "AsswPercMstpSnonWnonDnon";
			WalkRF = "AsswPercMwlkSnonWnonDfr";
		};
		class SurfaceSwimmingActionsFastF: SurfaceSwimmingActionsRunF
		{
			limitFast = 4;
		};
		class SurfaceSwimmingActionsFastFL: SurfaceSwimmingActionsRunF
		{
			limitFast = 4;
		};
		class SurfaceSwimmingActionsFastFR: SurfaceSwimmingActionsRunF
		{
			limitFast = 4;
		};
		class SurfaceSwimmingActionsRunB: SurfaceSwimmingActions
		{
			bottomSwim = "AbswPercMrunSnonWnonDb";
			startSwim = "AswmPercMrunSnonWnonDb";
			surfaceSwim = "AsswPercMrunSnonWnonDb";
		};
		class SurfaceSwimmingActionsRunBL: SurfaceSwimmingActions
		{
			bottomSwim = "AbswPercMrunSnonWnonDbl";
			startSwim = "AswmPercMrunSnonWnonDbl";
			surfaceSwim = "AsswPercMrunSnonWnonDbl";
		};
		class SurfaceSwimmingActionsRunBR: SurfaceSwimmingActions
		{
			bottomSwim = "AbswPercMrunSnonWnonDbr";
			startSwim = "AswmPercMrunSnonWnonDbr";
			surfaceSwim = "AsswPercMrunSnonWnonDbr";
		};
		class SurfaceSwimmingActionsRunF: SurfaceSwimmingActions
		{
			bottomSwim = "AbswPercMrunSnonWnonDf";
			startSwim = "AswmPercMrunSnonWnonDf";
			surfaceSwim = "AsswPercMrunSnonWnonDf";
		};
		class SurfaceSwimmingActionsRunFL: SurfaceSwimmingActions
		{
			bottomSwim = "AbswPercMrunSnonWnonDfl";
			startSwim = "AswmPercMrunSnonWnonDfl";
			surfaceSwim = "AsswPercMrunSnonWnonDfl";
		};
		class SurfaceSwimmingActionsRunFR: SurfaceSwimmingActions
		{
			bottomSwim = "AbswPercMrunSnonWnonDfr";
			startSwim = "AswmPercMrunSnonWnonDfr";
			surfaceSwim = "AsswPercMrunSnonWnonDfr";
		};
		class SurfaceSwimmingActionsRunL: SurfaceSwimmingActions
		{
			bottomSwim = "AbswPercMrunSnonWnonDl";
			startSwim = "AswmPercMrunSnonWnonDl";
			surfaceSwim = "AsswPercMrunSnonWnonDl";
		};
		class SurfaceSwimmingActionsRunR: SurfaceSwimmingActions
		{
			bottomSwim = "AbswPercMrunSnonWnonDr";
			startSwim = "AswmPercMrunSnonWnonDr";
			surfaceSwim = "AsswPercMrunSnonWnonDr";
		};
		class SwimmingActions: NoActions
		{
			bottomSwim = "AbswPercMstpSnonWnonDnon";
			default = "AswmPercMstpSnonWnonDnon";
			FastB = "AswmPercMrunSnonWnonDb";
			FastF = "AswmPercMsprSnonWnonDf";
			FastL = "AswmPercMstpSnonWnonDnon";
			FastLB = "AswmPercMstpSnonWnonDnon";
			FastLF = "AswmPercMsprSnonWnonDf";
			FastR = "AswmPercMstpSnonWnonDnon";
			FastRB = "AswmPercMstpSnonWnonDnon";
			FastRF = "AswmPercMsprSnonWnonDf";
			GetInBoat = "AmovPercMstpSnonWnonDnon_AcrgPknlMstpSnonWnonDnon_getInHigh";
			GetOutBoat = "AcrgPknlMstpSnonWnonDnon_AmovPercMstpSrasWrflDnon_getOutHigh";
			GetOutPara = "AswmPercMstpSnonWnonDnon";
			limitFast = 2;
			LimpB = "AswmPercMwlkSnonWnonDb";
			LimpF = "AswmPercMwlkSnonWnonDf";
			LimpL = "AswmPercMwlkSnonWnonDl";
			LimpLB = "AswmPercMstpSnonWnonDnon";
			LimpLF = "AswmPercMwlkSnonWnonDfl";
			LimpR = "AswmPercMwlkSnonWnonDr";
			LimpRB = "AswmPercMstpSnonWnonDnon";
			LimpRF = "AswmPercMwlkSnonWnonDfr";
			medic = "AswmPercMstpSnonWnonDnon_AswmPercMstpSnonWnonDnon_putDown";
			PlayerSlowB = "AswmPercMrunSnonWnonDb";
			PlayerSlowF = "AswmPercMrunSnonWnonDf";
			PlayerSlowL = "AswmPercMrunSnonWnonDl";
			PlayerSlowLB = "AswmPercMstpSnonWnonDnon";
			PlayerSlowLF = "AswmPercMrunSnonWnonDfl";
			PlayerSlowR = "AswmPercMrunSnonWnonDr";
			PlayerSlowRB = "AswmPercMstpSnonWnonDnon";
			PlayerSlowRF = "AswmPercMrunSnonWnonDfr";
			PlayerTactB = "AswmPercMwlkSnonWnonDb";
			PlayerTactF = "AswmPercMwlkSnonWnonDf";
			PlayerTactL = "AswmPercMwlkSnonWnonDl";
			PlayerTactLB = "AswmPercMstpSnonWnonDnon";
			PlayerTactLF = "AswmPercMwlkSnonWnonDfl";
			PlayerTactR = "AswmPercMwlkSnonWnonDr";
			PlayerTactRB = "AswmPercMstpSnonWnonDnon";
			PlayerTactRF = "AswmPercMwlkSnonWnonDfr";
			PlayerWalkB = "AswmPercMwlkSnonWnonDb";
			PlayerWalkF = "AswmPercMwlkSnonWnonDf";
			PlayerWalkL = "AswmPercMwlkSnonWnonDl";
			PlayerWalkLB = "AswmPercMstpSnonWnonDnon";
			PlayerWalkLF = "AswmPercMwlkSnonWnonDfl";
			PlayerWalkR = "AswmPercMwlkSnonWnonDr";
			PlayerWalkRB = "AswmPercMstpSnonWnonDnon";
			PlayerWalkRF = "AswmPercMwlkSnonWnonDfr";
			putDown = "AswmPercMstpSnonWnonDnon_AswmPercMstpSnonWnonDnon_putDown";
			relax = "AswmPercMstpSnonWnonDnon_relax";
			SlowB = "AswmPercMrunSnonWnonDb";
			SlowF = "AswmPercMrunSnonWnonDf";
			SlowL = "AswmPercMrunSnonWnonDl";
			SlowLB = "AswmPercMstpSnonWnonDnon";
			SlowLF = "AswmPercMrunSnonWnonDfl";
			SlowR = "AswmPercMrunSnonWnonDr";
			SlowRB = "AswmPercMstpSnonWnonDnon";
			SlowRF = "AswmPercMrunSnonWnonDfr";
			startSwim = "AswmPercMstpSnonWnonDnon";
			stop = "AswmPercMstpSnonWnonDnon";
			stopRelaxed = "AswmPercMstpSnonWnonDnon";
			stopSwim = "AmovPercMstpSnonWnonDnon";
			surfaceSwim = "AsswPercMstpSnonWnonDnon";
			swimDown = "AswmPercMstpSnonWnonDnon_goDown";
			swimUp = "AswmPercMstpSnonWnonDnon_goup";
			TactB = "AswmPercMwlkSnonWnonDb";
			TactF = "AswmPercMwlkSnonWnonDf";
			TactL = "AswmPercMwlkSnonWnonDl";
			TactLB = "AswmPercMstpSnonWnonDnon";
			TactLF = "AswmPercMwlkSnonWnonDfl";
			TactR = "AswmPercMwlkSnonWnonDr";
			TactRB = "AswmPercMstpSnonWnonDnon";
			TactRF = "AswmPercMwlkSnonWnonDfr";
			turnL = "AswmPercMstpSnonWnonDnon";
			turnR = "AswmPercMstpSnonWnonDnon";
			upDegree = "ManPosSwimming";
			WalkB = "AswmPercMwlkSnonWnonDb";
			WalkF = "AswmPercMwlkSnonWnonDf";
			WalkL = "AswmPercMwlkSnonWnonDl";
			WalkLB = "AswmPercMstpSnonWnonDnon";
			WalkLF = "AswmPercMwlkSnonWnonDfl";
			WalkR = "AswmPercMwlkSnonWnonDr";
			WalkRB = "AswmPercMstpSnonWnonDnon";
			WalkRF = "AswmPercMwlkSnonWnonDfr";
		};
		class SwimmingActionsFastF: SwimmingActionsRunF
		{
			limitFast = 4;
		};
		class SwimmingActionsFastFL: SwimmingActionsRunF
		{
			limitFast = 4;
		};
		class SwimmingActionsFastFR: SwimmingActionsRunF
		{
			limitFast = 4;
		};
		class SwimmingActionsRunB: SwimmingActions
		{
			bottomSwim = "AbswPercMrunSnonWnonDb";
			startSwim = "AswmPercMrunSnonWnonDb";
			surfaceSwim = "AsswPercMrunSnonWnonDb";
		};
		class SwimmingActionsRunBL: SwimmingActions
		{
			bottomSwim = "AbswPercMrunSnonWnonDbl";
			startSwim = "AswmPercMrunSnonWnonDbl";
			surfaceSwim = "AsswPercMrunSnonWnonDbl";
		};
		class SwimmingActionsRunBR: SwimmingActions
		{
			bottomSwim = "AbswPercMrunSnonWnonDbr";
			startSwim = "AswmPercMrunSnonWnonDbr";
			surfaceSwim = "AsswPercMrunSnonWnonDbr";
		};
		class SwimmingActionsRunF: SwimmingActions
		{
			bottomSwim = "AbswPercMrunSnonWnonDf";
			startSwim = "AswmPercMrunSnonWnonDf";
			surfaceSwim = "AsswPercMrunSnonWnonDf";
		};
		class SwimmingActionsRunFL: SwimmingActions
		{
			bottomSwim = "AbswPercMrunSnonWnonDfl";
			startSwim = "AswmPercMrunSnonWnonDfl";
			surfaceSwim = "AsswPercMrunSnonWnonDfl";
		};
		class SwimmingActionsRunFR: SwimmingActions
		{
			bottomSwim = "AbswPercMrunSnonWnonDfr";
			startSwim = "AswmPercMrunSnonWnonDfr";
			surfaceSwim = "AsswPercMrunSnonWnonDfr";
		};
		class SwimmingActionsRunL: SwimmingActions
		{
			bottomSwim = "AbswPercMrunSnonWnonDl";
			startSwim = "AswmPercMrunSnonWnonDl";
			surfaceSwim = "AsswPercMrunSnonWnonDl";
		};
		class SwimmingActionsRunR: SwimmingActions
		{
			bottomSwim = "AbswPercMrunSnonWnonDr";
			startSwim = "AswmPercMrunSnonWnonDr";
			surfaceSwim = "AsswPercMrunSnonWnonDr";
		};
		class ToIncapacitatedAction: NoActions
		{
			Die = "DeadState";
			limitFast = 5.5;
			stance = "ManStanceProne";
			turnSpeed = 2.5;
			upDegree = "ManPosDead";
		};
		class ToIncapacitatedPistolAction: ToIncapacitatedAction
		{
			AgonyStop = "AmovPpneMstpSrasWpstDnon";
		};
		class ToIncapacitatedRifleAction: ToIncapacitatedAction
		{
			AgonyStop = "AmovPpneMstpSrasWrflDnon";
		};
		class vehicle_coshooter_1Actions: FFV_BaseActions
		{
			Binoculars = "vehicle_coshooter_1_Aim_Binoc";
			civil = "vehicle_coshooter_1_Idle_Unarmed";
			default = "vehicle_coshooter_1_Aim";
			die = "vehicle_coshooter_1_Die";
			HandGunOn = "vehicle_coshooter_1_Aim_Pistol";
			Obstructed = "vehicle_coshooter_1_Obstructed";
			PrimaryWeapon = "vehicle_coshooter_1_Aim";
			Stand = "vehicle_coshooter_1_Idle";
			stop = "vehicle_coshooter_1_Aim";
			stopRelaxed = "vehicle_coshooter_1_Aim";
			Unconscious = "vehicle_coshooter_1_Die";
			upDegree = "ManPosCombat";
		};
		class vehicle_coshooter_1BinocActions: vehicle_coshooter_1Actions
		{
			binocOn = "";
			default = "vehicle_coshooter_1_Aim_Binoc";
			stop = "vehicle_coshooter_1_Aim_Binoc";
			stopRelaxed = "vehicle_coshooter_1_Aim_Binoc";
			upDegree = "ManPosBinocStand";
		};
		class vehicle_coshooter_1BinocPistolActions: vehicle_coshooter_1BinocActions
		{
			default = "vehicle_coshooter_1_Aim_Pistol_Binoc";
			die = "vehicle_coshooter_1_Die_Pistol";
			GetOutHigh = "AcrgPknlMstpSnonWnonDnon_AmovPercMstpSrasWpstDnon_getOutHigh";
			GetOutHighHemtt = "AcrgPknlMstpSnonWnonDnon_AmovPercMstpSrasWpstDnon_getOutHighHemtt";
			GetOutHighZamak = "AcrgPknlMstpSnonWnonDnon_AmovPercMstpSrasWpstDnon_getOutHighZamak";
			GetOutLow = "AcrgPknlMstpSnonWnonDnon_AmovPercMstpSrasWpstDnon_getOutLow";
			GetOutMedium = "AcrgPknlMstpSnonWnonDnon_AmovPercMstpSrasWpstDnon_getOutMedium";
			GetOutSDV = "AcrgPknlMstpSnonWnonDnon_AmovPercMstpSrasWpstDnon_getOutHigh";
			stop = "vehicle_coshooter_1_Aim_Pistol_Binoc";
			stopRelaxed = "vehicle_coshooter_1_Aim_Pistol_Binoc";
			Unconscious = "vehicle_coshooter_1_Die_Pistol";
		};
		class vehicle_coshooter_1BinocUnarmedActions: vehicle_coshooter_1BinocActions
		{
			default = "vehicle_coshooter_1_Aim_Unarmed_Binoc";
			die = "vehicle_coshooter_1_Die_Pistol";
			GetOutHigh = "AcrgPknlMstpSnonWnonDnon_AmovPercMstpSnonWnonDnon_getOutHigh";
			GetOutHighHemtt = "AcrgPknlMstpSnonWnonDnon_AmovPercMstpSnonWnonDnon_getOutHighHemtt";
			GetOutHighZamak = "AcrgPknlMstpSnonWnonDnon_AmovPercMstpSnonWnonDnon_getOutHighZamak";
			GetOutLow = "AcrgPknlMstpSnonWnonDnon_AmovPercMstpSnonWnonDnon_getOutLow";
			GetOutMedium = "AcrgPknlMstpSnonWnonDnon_AmovPercMstpSnonWnonDnon_getOutMedium";
			GetOutSDV = "AcrgPknlMstpSnonWnonDnon_AmovPercMstpSnonWnonDnon_getOutHigh";
			stop = "vehicle_coshooter_1_Aim_Unarmed_Binoc";
			stopRelaxed = "vehicle_coshooter_1_Aim_Unarmed_Binoc";
			Unconscious = "vehicle_coshooter_1_Die_Pistol";
		};
		class vehicle_coshooter_1DeadActions: FFV_BaseActions
		{
			default = "vehicle_coshooter_1_Die";
			die = "vehicle_coshooter_1_Die";
			stop = "vehicle_coshooter_1_Die";
			Unconscious = "vehicle_coshooter_1_Die";
		};
		class vehicle_coshooter_1DeadPistolActions: FFV_BaseActions
		{
			default = "vehicle_coshooter_1_Die_Pistol";
			die = "vehicle_coshooter_1_Die_Pistol";
			stop = "vehicle_coshooter_1_Die_Pistol";
			Unconscious = "vehicle_coshooter_1_Die_Pistol";
		};
		class vehicle_coshooter_1IdleActions: vehicle_coshooter_1Actions
		{
			Combat = "vehicle_coshooter_1_Aim";
			default = "vehicle_coshooter_1_Idle";
			fireNotPossible = "vehicle_coshooter_1_Aim";
			PlayerStand = "vehicle_coshooter_1_Aim";
			stop = "vehicle_coshooter_1_Idle";
			stopRelaxed = "vehicle_coshooter_1_Idle";
			upDegree = "ManPosStand";
		};
		class vehicle_coshooter_1IdlePistolActions: vehicle_coshooter_1Actions
		{
			Combat = "vehicle_coshooter_1_Aim_Pistol";
			default = "vehicle_coshooter_1_Idle_Pistol";
			die = "vehicle_coshooter_1_Die_Pistol";
			fireNotPossible = "vehicle_coshooter_1_Aim_Pistol";
			GetOutHigh = "AcrgPknlMstpSnonWnonDnon_AmovPercMstpSrasWpstDnon_getOutHigh";
			GetOutHighHemtt = "AcrgPknlMstpSnonWnonDnon_AmovPercMstpSrasWpstDnon_getOutHighHemtt";
			GetOutHighZamak = "AcrgPknlMstpSnonWnonDnon_AmovPercMstpSrasWpstDnon_getOutHighZamak";
			GetOutLow = "AcrgPknlMstpSnonWnonDnon_AmovPercMstpSrasWpstDnon_getOutLow";
			GetOutMedium = "AcrgPknlMstpSnonWnonDnon_AmovPercMstpSrasWpstDnon_getOutMedium";
			GetOutSDV = "AcrgPknlMstpSnonWnonDnon_AmovPercMstpSrasWpstDnon_getOutHigh";
			PlayerStand = "vehicle_coshooter_1_Aim_Pistol";
			Stand = "vehicle_coshooter_1_Idle_Pistol";
			stop = "vehicle_coshooter_1_Idle_Pistol";
			stopRelaxed = "vehicle_coshooter_1_Idle_Pistol";
			Unconscious = "vehicle_coshooter_1_Die_Pistol";
			upDegree = "ManPosHandGunStand";
		};
		class vehicle_coshooter_1IdleUnarmedActions: FFV_BaseActions
		{
			Binoculars = "vehicle_coshooter_1_Aim_Unarmed_Binoc";
			civil = "vehicle_coshooter_1_Idle_Unarmed";
			default = "vehicle_coshooter_1_Idle_Unarmed";
			die = "vehicle_coshooter_1_Die_Pistol";
			GetOutHigh = "AcrgPknlMstpSnonWnonDnon_AmovPercMstpSnonWnonDnon_getOutHigh";
			GetOutHighHemtt = "AcrgPknlMstpSnonWnonDnon_AmovPercMstpSnonWnonDnon_getOutHighHemtt";
			GetOutHighZamak = "AcrgPknlMstpSnonWnonDnon_AmovPercMstpSnonWnonDnon_getOutHighZamak";
			GetOutLow = "AcrgPknlMstpSnonWnonDnon_AmovPercMstpSnonWnonDnon_getOutLow";
			GetOutMedium = "AcrgPknlMstpSnonWnonDnon_AmovPercMstpSnonWnonDnon_getOutMedium";
			GetOutSDV = "AcrgPknlMstpSnonWnonDnon_AmovPercMstpSnonWnonDnon_getOutHigh";
			HandGunOn = "vehicle_coshooter_1_Aim_Pistol";
			PrimaryWeapon = "vehicle_coshooter_1_Aim";
			Stand = "vehicle_coshooter_1_Idle_Unarmed";
			stop = "vehicle_coshooter_1_Idle_Unarmed";
			stopRelaxed = "vehicle_coshooter_1_Idle_Unarmed";
			throwGrenade[] = {"GestureThrowGrenadeUna", "Gesture"};
			Unconscious = "vehicle_coshooter_1_Die_Pistol";
			upDegree = "ManPosNoWeapon";
		};
		class vehicle_coshooter_1ObstructedActions: vehicle_coshooter_1Actions
		{
			Combat = "vehicle_coshooter_1_Aim";
			default = "vehicle_coshooter_1_Obstructed";
			fireNotPossible = "vehicle_coshooter_1_Obstructed";
			PlayerStand = "vehicle_coshooter_1_Obstructed";
			stop = "vehicle_coshooter_1_Obstructed";
			stopRelaxed = "vehicle_coshooter_1_Obstructed";
		};
		class vehicle_coshooter_1ObstructedPistolActions: vehicle_coshooter_1PistolActions
		{
			Combat = "vehicle_coshooter_1_Aim_Pistol";
			default = "vehicle_coshooter_1_Obstructed_Pistol";
			fireNotPossible = "vehicle_coshooter_1_Obstructed_Pistol";
			PlayerStand = "vehicle_coshooter_1_Obstructed_Pistol";
			Stand = "vehicle_coshooter_1_Obstructed_Pistol";
			stop = "vehicle_coshooter_1_Obstructed_Pistol";
			stopRelaxed = "vehicle_coshooter_1_Obstructed_Pistol";
		};
		class vehicle_coshooter_1PistolActions: vehicle_coshooter_1Actions
		{
			Binoculars = "vehicle_coshooter_1_Aim_Pistol_Binoc";
			default = "vehicle_coshooter_1_Aim_Pistol";
			die = "vehicle_coshooter_1_Die_Pistol";
			GetOutHigh = "AcrgPknlMstpSnonWnonDnon_AmovPercMstpSrasWpstDnon_getOutHigh";
			GetOutHighHemtt = "AcrgPknlMstpSnonWnonDnon_AmovPercMstpSrasWpstDnon_getOutHighHemtt";
			GetOutHighZamak = "AcrgPknlMstpSnonWnonDnon_AmovPercMstpSrasWpstDnon_getOutHighZamak";
			GetOutLow = "AcrgPknlMstpSnonWnonDnon_AmovPercMstpSrasWpstDnon_getOutLow";
			GetOutMedium = "AcrgPknlMstpSnonWnonDnon_AmovPercMstpSrasWpstDnon_getOutMedium";
			GetOutSDV = "AcrgPknlMstpSnonWnonDnon_AmovPercMstpSrasWpstDnon_getOutHigh";
			Obstructed = "vehicle_coshooter_1_Obstructed_Pistol";
			Stand = "vehicle_coshooter_1_Idle_Pistol";
			stop = "vehicle_coshooter_1_Aim_Pistol";
			stopRelaxed = "vehicle_coshooter_1_Aim_Pistol";
			throwGrenade[] = {"GestureThrowGrenadePistol", "Gesture"};
			Unconscious = "vehicle_coshooter_1_Die_Pistol";
			upDegree = "ManPosHandGunStand";
		};
		class vehicle_passenger_stand_1Actions: FFV_BaseActions
		{
			Binoculars = "vehicle_passenger_stand_1_Aim_Binoc";
			civil = "vehicle_passenger_stand_1_Idle_Unarmed";
			default = "vehicle_passenger_stand_1_Aim";
			die = "vehicle_passenger_stand_1_Die";
			HandGunOn = "vehicle_passenger_stand_1_Aim_Pistol";
			Obstructed = "vehicle_passenger_stand_1_Obstructed";
			PrimaryWeapon = "vehicle_passenger_stand_1_Aim";
			SecondaryWeapon = "vehicle_passenger_stand_1_Aim_Launcher";
			Stand = "vehicle_passenger_stand_1_Idle";
			stop = "vehicle_passenger_stand_1_Aim";
			stopRelaxed = "vehicle_passenger_stand_1_Aim";
			Unconscious = "vehicle_passenger_stand_1_Die";
			upDegree = "ManPosCombat";
		};
		class vehicle_passenger_stand_1BinocActions: vehicle_passenger_stand_1Actions
		{
			binocOn = "";
			default = "vehicle_passenger_stand_1_Aim_Binoc";
			stop = "vehicle_passenger_stand_1_Aim_Binoc";
			stopRelaxed = "vehicle_passenger_stand_1_Aim_Binoc";
			upDegree = "ManPosBinocStand";
		};
		class vehicle_passenger_stand_1BinocLauncherActions: vehicle_passenger_stand_1LauncherActions
		{
			binocOn = "";
			default = "vehicle_passenger_stand_1_Aim_Launcher_Binoc";
			stop = "vehicle_passenger_stand_1_Aim_Launcher_Binoc";
			stopRelaxed = "vehicle_passenger_stand_1_Aim_Launcher_Binoc";
			upDegree = "ManPosBinocStand";
		};
		class vehicle_passenger_stand_1BinocPistolActions: vehicle_passenger_stand_1BinocActions
		{
			default = "vehicle_passenger_stand_1_Aim_Pistol_Binoc";
			die = "vehicle_passenger_stand_1_Die_Pistol";
			GetOutHigh = "AcrgPknlMstpSnonWnonDnon_AmovPercMstpSrasWpstDnon_getOutHigh";
			GetOutHighHemtt = "AcrgPknlMstpSnonWnonDnon_AmovPercMstpSrasWpstDnon_getOutHighHemtt";
			GetOutHighZamak = "AcrgPknlMstpSnonWnonDnon_AmovPercMstpSrasWpstDnon_getOutHighZamak";
			GetOutLow = "AcrgPknlMstpSnonWnonDnon_AmovPercMstpSrasWpstDnon_getOutLow";
			GetOutMedium = "AcrgPknlMstpSnonWnonDnon_AmovPercMstpSrasWpstDnon_getOutMedium";
			GetOutSDV = "AcrgPknlMstpSnonWnonDnon_AmovPercMstpSrasWpstDnon_getOutHigh";
			stop = "vehicle_passenger_stand_1_Aim_Pistol_Binoc";
			stopRelaxed = "vehicle_passenger_stand_1_Aim_Pistol_Binoc";
			Unconscious = "vehicle_passenger_stand_1_Die_Pistol";
		};
		class vehicle_passenger_stand_1BinocUnarmedActions: vehicle_passenger_stand_1BinocActions
		{
			default = "vehicle_passenger_stand_1_Aim_Unarmed_Binoc";
			die = "vehicle_passenger_stand_1_Die_Pistol";
			GetOutHigh = "AcrgPknlMstpSnonWnonDnon_AmovPercMstpSnonWnonDnon_getOutHigh";
			GetOutHighHemtt = "AcrgPknlMstpSnonWnonDnon_AmovPercMstpSnonWnonDnon_getOutHighHemtt";
			GetOutHighZamak = "AcrgPknlMstpSnonWnonDnon_AmovPercMstpSnonWnonDnon_getOutHighZamak";
			GetOutLow = "AcrgPknlMstpSnonWnonDnon_AmovPercMstpSnonWnonDnon_getOutLow";
			GetOutMedium = "AcrgPknlMstpSnonWnonDnon_AmovPercMstpSnonWnonDnon_getOutMedium";
			GetOutSDV = "AcrgPknlMstpSnonWnonDnon_AmovPercMstpSnonWnonDnon_getOutHigh";
			stop = "vehicle_passenger_stand_1_Aim_Unarmed_Binoc";
			stopRelaxed = "vehicle_passenger_stand_1_Aim_Unarmed_Binoc";
			Unconscious = "vehicle_passenger_stand_1_Die_Pistol";
		};
		class vehicle_passenger_stand_1DeadActions: FFV_BaseActions
		{
			default = "vehicle_passenger_stand_1_Die";
			die = "vehicle_passenger_stand_1_Die";
			stop = "vehicle_passenger_stand_1_Die";
			Unconscious = "vehicle_passenger_stand_1_Die";
		};
		class vehicle_passenger_stand_1DeadPistolActions: FFV_BaseActions
		{
			default = "vehicle_passenger_stand_1_Die_Pistol";
			die = "vehicle_passenger_stand_1_Die_Pistol";
			stop = "vehicle_passenger_stand_1_Die_Pistol";
			Unconscious = "vehicle_passenger_stand_1_Die_Pistol";
		};
		class vehicle_passenger_stand_1IdleActions: vehicle_passenger_stand_1Actions
		{
			Combat = "vehicle_passenger_stand_1_Aim";
			default = "vehicle_passenger_stand_1_Idle";
			fireNotPossible = "vehicle_passenger_stand_1_Aim";
			PlayerStand = "vehicle_passenger_stand_1_Aim";
			stop = "vehicle_passenger_stand_1_Idle";
			stopRelaxed = "vehicle_passenger_stand_1_Idle";
			upDegree = "ManPosStand";
		};
		class vehicle_passenger_stand_1IdleLauncherActions: vehicle_passenger_stand_1LauncherActions
		{
			Combat = "vehicle_passenger_stand_1_Aim_Launcher";
			default = "vehicle_passenger_stand_1_Idle_Launcher";
			fireNotPossible = "vehicle_passenger_stand_1_Aim_Launcher";
			PlayerStand = "vehicle_passenger_stand_1_Aim_Launcher";
			stop = "vehicle_passenger_stand_1_Idle_Launcher";
			stopRelaxed = "vehicle_passenger_stand_1_Idle_Launcher";
			upDegree = "ManPosStand";
		};
		class vehicle_passenger_stand_1IdlePistolActions: vehicle_passenger_stand_1Actions
		{
			Combat = "vehicle_passenger_stand_1_Aim_Pistol";
			default = "vehicle_passenger_stand_1_Idle_Pistol";
			die = "vehicle_passenger_stand_1_Die_Pistol";
			fireNotPossible = "vehicle_passenger_stand_1_Aim_Pistol";
			GetOutHigh = "AcrgPknlMstpSnonWnonDnon_AmovPercMstpSrasWpstDnon_getOutHigh";
			GetOutHighHemtt = "AcrgPknlMstpSnonWnonDnon_AmovPercMstpSrasWpstDnon_getOutHighHemtt";
			GetOutHighZamak = "AcrgPknlMstpSnonWnonDnon_AmovPercMstpSrasWpstDnon_getOutHighZamak";
			GetOutLow = "AcrgPknlMstpSnonWnonDnon_AmovPercMstpSrasWpstDnon_getOutLow";
			GetOutMedium = "AcrgPknlMstpSnonWnonDnon_AmovPercMstpSrasWpstDnon_getOutMedium";
			GetOutSDV = "AcrgPknlMstpSnonWnonDnon_AmovPercMstpSrasWpstDnon_getOutHigh";
			PlayerStand = "vehicle_passenger_stand_1_Aim_Pistol";
			Stand = "vehicle_passenger_stand_1_Idle_Pistol";
			stop = "vehicle_passenger_stand_1_Idle_Pistol";
			stopRelaxed = "vehicle_passenger_stand_1_Idle_Pistol";
			Unconscious = "vehicle_passenger_stand_1_Die_Pistol";
			upDegree = "ManPosHandGunStand";
		};
		class vehicle_passenger_stand_1IdleUnarmedActions: FFV_BaseActions
		{
			Binoculars = "vehicle_passenger_stand_1_Aim_Unarmed_Binoc";
			civil = "vehicle_passenger_stand_1_Idle_Unarmed";
			default = "vehicle_passenger_stand_1_Idle_Unarmed";
			die = "vehicle_passenger_stand_1_Die_Pistol";
			GetOutHigh = "AcrgPknlMstpSnonWnonDnon_AmovPercMstpSnonWnonDnon_getOutHigh";
			GetOutHighHemtt = "AcrgPknlMstpSnonWnonDnon_AmovPercMstpSnonWnonDnon_getOutHighHemtt";
			GetOutHighZamak = "AcrgPknlMstpSnonWnonDnon_AmovPercMstpSnonWnonDnon_getOutHighZamak";
			GetOutLow = "AcrgPknlMstpSnonWnonDnon_AmovPercMstpSnonWnonDnon_getOutLow";
			GetOutMedium = "AcrgPknlMstpSnonWnonDnon_AmovPercMstpSnonWnonDnon_getOutMedium";
			GetOutSDV = "AcrgPknlMstpSnonWnonDnon_AmovPercMstpSnonWnonDnon_getOutHigh";
			HandGunOn = "vehicle_passenger_stand_1_Aim_Pistol";
			PrimaryWeapon = "vehicle_passenger_stand_1_Aim";
			SecondaryWeapon = "vehicle_passenger_stand_1_Aim_Launcher";
			Stand = "vehicle_passenger_stand_1_Idle_Unarmed";
			stop = "vehicle_passenger_stand_1_Idle_Unarmed";
			stopRelaxed = "vehicle_passenger_stand_1_Idle_Unarmed";
			throwGrenade[] = {"GestureThrowGrenadeUna", "Gesture"};
			Unconscious = "vehicle_passenger_stand_1_Die_Pistol";
			upDegree = "ManPosNoWeapon";
		};
		class vehicle_passenger_stand_1LauncherActions: FFV_BaseActions
		{
			Binoculars = "vehicle_passenger_stand_1_Aim_Launcher_Binoc";
			civil = "vehicle_passenger_stand_1_Idle_Unarmed";
			default = "vehicle_passenger_stand_1_Aim_Launcher";
			die = "vehicle_passenger_stand_1_Die_Pistol";
			HandGunOn = "vehicle_passenger_stand_1_Aim_Pistol";
			PrimaryWeapon = "vehicle_passenger_stand_1_Aim";
			reloadRPG = "vehicle_passenger_stand_1_Aim_Launcher_Reload";
			SecondaryWeapon = "vehicle_passenger_stand_1_Aim_Launcher";
			Stand = "vehicle_passenger_stand_1_Idle_Launcher";
			stop = "vehicle_passenger_stand_1_Aim_Launcher";
			stopRelaxed = "vehicle_passenger_stand_1_Aim_Launcher";
			Unconscious = "vehicle_passenger_stand_1_Die_Pistol";
			upDegree = "ManPosWeapon";
		};
		class vehicle_passenger_stand_1ObstructedActions: vehicle_passenger_stand_1Actions
		{
			Combat = "vehicle_passenger_stand_1_Aim";
			default = "vehicle_passenger_stand_1_Obstructed";
			fireNotPossible = "vehicle_passenger_stand_1_Obstructed";
			PlayerStand = "vehicle_passenger_stand_1_Obstructed";
			stop = "vehicle_passenger_stand_1_Obstructed";
			stopRelaxed = "vehicle_passenger_stand_1_Obstructed";
		};
		class vehicle_passenger_stand_1ObstructedPistolActions: vehicle_passenger_stand_1PistolActions
		{
			Combat = "vehicle_passenger_stand_1_Aim_Pistol";
			default = "vehicle_passenger_stand_1_Obstructed_Pistol";
			fireNotPossible = "vehicle_passenger_stand_1_Obstructed_Pistol";
			PlayerStand = "vehicle_passenger_stand_1_Obstructed_Pistol";
			Stand = "vehicle_passenger_stand_1_Obstructed_Pistol";
			stop = "vehicle_passenger_stand_1_Obstructed_Pistol";
			stopRelaxed = "vehicle_passenger_stand_1_Obstructed_Pistol";
		};
		class vehicle_passenger_stand_1PistolActions: vehicle_passenger_stand_1Actions
		{
			Binoculars = "vehicle_passenger_stand_1_Aim_Pistol_Binoc";
			default = "vehicle_passenger_stand_1_Aim_Pistol";
			die = "vehicle_passenger_stand_1_Die_Pistol";
			GetOutHigh = "AcrgPknlMstpSnonWnonDnon_AmovPercMstpSrasWpstDnon_getOutHigh";
			GetOutHighHemtt = "AcrgPknlMstpSnonWnonDnon_AmovPercMstpSrasWpstDnon_getOutHighHemtt";
			GetOutHighZamak = "AcrgPknlMstpSnonWnonDnon_AmovPercMstpSrasWpstDnon_getOutHighZamak";
			GetOutLow = "AcrgPknlMstpSnonWnonDnon_AmovPercMstpSrasWpstDnon_getOutLow";
			GetOutMedium = "AcrgPknlMstpSnonWnonDnon_AmovPercMstpSrasWpstDnon_getOutMedium";
			GetOutSDV = "AcrgPknlMstpSnonWnonDnon_AmovPercMstpSrasWpstDnon_getOutHigh";
			Obstructed = "vehicle_passenger_stand_1_Obstructed_Pistol";
			Stand = "vehicle_passenger_stand_1_Idle_Pistol";
			stop = "vehicle_passenger_stand_1_Aim_Pistol";
			stopRelaxed = "vehicle_passenger_stand_1_Aim_Pistol";
			throwGrenade[] = {"GestureThrowGrenadePistol", "Gesture"};
			Unconscious = "vehicle_passenger_stand_1_Die_Pistol";
			upDegree = "ManPosHandGunStand";
		};
		class vehicle_passenger_stand_2Actions: FFV_BaseActions
		{
			Binoculars = "vehicle_passenger_stand_2_Aim_Binoc";
			civil = "vehicle_passenger_stand_2_Idle_Unarmed";
			default = "vehicle_passenger_stand_2_Aim";
			die = "vehicle_passenger_stand_2_Die";
			HandGunOn = "vehicle_passenger_stand_2_Aim_Pistol";
			Obstructed = "vehicle_passenger_stand_2_Obstructed";
			PrimaryWeapon = "vehicle_passenger_stand_2_Aim";
			SecondaryWeapon = "vehicle_passenger_stand_2_Aim_Launcher";
			Stand = "vehicle_passenger_stand_2_Idle";
			stop = "vehicle_passenger_stand_2_Aim";
			stopRelaxed = "vehicle_passenger_stand_2_Aim";
			Unconscious = "vehicle_passenger_stand_2_Die";
			upDegree = "ManPosCombat";
		};
		class vehicle_passenger_stand_2BinocActions: vehicle_passenger_stand_2Actions
		{
			binocOn = "";
			default = "vehicle_passenger_stand_2_Aim_Binoc";
			stop = "vehicle_passenger_stand_2_Aim_Binoc";
			stopRelaxed = "vehicle_passenger_stand_2_Aim_Binoc";
			upDegree = "ManPosBinocStand";
		};
		class vehicle_passenger_stand_2BinocLauncherActions: vehicle_passenger_stand_2LauncherActions
		{
			binocOn = "";
			default = "vehicle_passenger_stand_2_Aim_Launcher_Binoc";
			stop = "vehicle_passenger_stand_2_Aim_Launcher_Binoc";
			stopRelaxed = "vehicle_passenger_stand_2_Aim_Launcher_Binoc";
			upDegree = "ManPosBinocStand";
		};
		class vehicle_passenger_stand_2BinocPistolActions: vehicle_passenger_stand_2BinocActions
		{
			default = "vehicle_passenger_stand_2_Aim_Pistol_Binoc";
			die = "vehicle_passenger_stand_2_Die_Pistol";
			GetOutHigh = "AcrgPknlMstpSnonWnonDnon_AmovPercMstpSrasWpstDnon_getOutHigh";
			GetOutHighHemtt = "AcrgPknlMstpSnonWnonDnon_AmovPercMstpSrasWpstDnon_getOutHighHemtt";
			GetOutHighZamak = "AcrgPknlMstpSnonWnonDnon_AmovPercMstpSrasWpstDnon_getOutHighZamak";
			GetOutLow = "AcrgPknlMstpSnonWnonDnon_AmovPercMstpSrasWpstDnon_getOutLow";
			GetOutMedium = "AcrgPknlMstpSnonWnonDnon_AmovPercMstpSrasWpstDnon_getOutMedium";
			GetOutSDV = "AcrgPknlMstpSnonWnonDnon_AmovPercMstpSrasWpstDnon_getOutHigh";
			stop = "vehicle_passenger_stand_2_Aim_Pistol_Binoc";
			stopRelaxed = "vehicle_passenger_stand_2_Aim_Pistol_Binoc";
			Unconscious = "vehicle_passenger_stand_2_Die_Pistol";
		};
		class vehicle_passenger_stand_2BinocUnarmedActions: vehicle_passenger_stand_2BinocActions
		{
			default = "vehicle_passenger_stand_2_Aim_Unarmed_Binoc";
			die = "vehicle_passenger_stand_2_Die_Pistol";
			GetOutHigh = "AcrgPknlMstpSnonWnonDnon_AmovPercMstpSnonWnonDnon_getOutHigh";
			GetOutHighHemtt = "AcrgPknlMstpSnonWnonDnon_AmovPercMstpSnonWnonDnon_getOutHighHemtt";
			GetOutHighZamak = "AcrgPknlMstpSnonWnonDnon_AmovPercMstpSnonWnonDnon_getOutHighZamak";
			GetOutLow = "AcrgPknlMstpSnonWnonDnon_AmovPercMstpSnonWnonDnon_getOutLow";
			GetOutMedium = "AcrgPknlMstpSnonWnonDnon_AmovPercMstpSnonWnonDnon_getOutMedium";
			GetOutSDV = "AcrgPknlMstpSnonWnonDnon_AmovPercMstpSnonWnonDnon_getOutHigh";
			stop = "vehicle_passenger_stand_2_Aim_Unarmed_Binoc";
			stopRelaxed = "vehicle_passenger_stand_2_Aim_Unarmed_Binoc";
			Unconscious = "vehicle_passenger_stand_2_Die_Pistol";
		};
		class vehicle_passenger_stand_2DeadActions: FFV_BaseActions
		{
			default = "vehicle_passenger_stand_2_Die";
			die = "vehicle_passenger_stand_2_Die";
			stop = "vehicle_passenger_stand_2_Die";
			Unconscious = "vehicle_passenger_stand_2_Die";
		};
		class vehicle_passenger_stand_2DeadPistolActions: FFV_BaseActions
		{
			default = "vehicle_passenger_stand_2_Die_Pistol";
			die = "vehicle_passenger_stand_2_Die_Pistol";
			stop = "vehicle_passenger_stand_2_Die_Pistol";
			Unconscious = "vehicle_passenger_stand_2_Die_Pistol";
		};
		class vehicle_passenger_stand_2IdleActions: vehicle_passenger_stand_2Actions
		{
			Combat = "vehicle_passenger_stand_2_Aim";
			default = "vehicle_passenger_stand_2_Idle";
			fireNotPossible = "vehicle_passenger_stand_2_Aim";
			PlayerStand = "vehicle_passenger_stand_2_Aim";
			stop = "vehicle_passenger_stand_2_Idle";
			stopRelaxed = "vehicle_passenger_stand_2_Idle";
			upDegree = "ManPosStand";
		};
		class vehicle_passenger_stand_2IdleLauncherActions: vehicle_passenger_stand_2LauncherActions
		{
			Combat = "vehicle_passenger_stand_2_Aim_Launcher";
			default = "vehicle_passenger_stand_2_Idle_Launcher";
			fireNotPossible = "vehicle_passenger_stand_2_Aim_Launcher";
			PlayerStand = "vehicle_passenger_stand_2_Aim_Launcher";
			stop = "vehicle_passenger_stand_2_Idle_Launcher";
			stopRelaxed = "vehicle_passenger_stand_2_Idle_Launcher";
			upDegree = "ManPosStand";
		};
		class vehicle_passenger_stand_2IdlePistolActions: vehicle_passenger_stand_2Actions
		{
			Combat = "vehicle_passenger_stand_2_Aim_Pistol";
			default = "vehicle_passenger_stand_2_Idle_Pistol";
			die = "vehicle_passenger_stand_2_Die_Pistol";
			fireNotPossible = "vehicle_passenger_stand_2_Aim_Pistol";
			GetOutHigh = "AcrgPknlMstpSnonWnonDnon_AmovPercMstpSrasWpstDnon_getOutHigh";
			GetOutHighHemtt = "AcrgPknlMstpSnonWnonDnon_AmovPercMstpSrasWpstDnon_getOutHighHemtt";
			GetOutHighZamak = "AcrgPknlMstpSnonWnonDnon_AmovPercMstpSrasWpstDnon_getOutHighZamak";
			GetOutLow = "AcrgPknlMstpSnonWnonDnon_AmovPercMstpSrasWpstDnon_getOutLow";
			GetOutMedium = "AcrgPknlMstpSnonWnonDnon_AmovPercMstpSrasWpstDnon_getOutMedium";
			GetOutSDV = "AcrgPknlMstpSnonWnonDnon_AmovPercMstpSrasWpstDnon_getOutHigh";
			PlayerStand = "vehicle_passenger_stand_2_Aim_Pistol";
			Stand = "vehicle_passenger_stand_2_Idle_Pistol";
			stop = "vehicle_passenger_stand_2_Idle_Pistol";
			stopRelaxed = "vehicle_passenger_stand_2_Idle_Pistol";
			Unconscious = "vehicle_passenger_stand_2_Die_Pistol";
			upDegree = "ManPosHandGunStand";
		};
		class vehicle_passenger_stand_2IdleUnarmedActions: FFV_BaseActions
		{
			Binoculars = "vehicle_passenger_stand_2_Aim_Unarmed_Binoc";
			civil = "vehicle_passenger_stand_2_Idle_Unarmed";
			default = "vehicle_passenger_stand_2_Idle_Unarmed";
			die = "vehicle_passenger_stand_2_Die_Pistol";
			GetOutHigh = "AcrgPknlMstpSnonWnonDnon_AmovPercMstpSnonWnonDnon_getOutHigh";
			GetOutHighHemtt = "AcrgPknlMstpSnonWnonDnon_AmovPercMstpSnonWnonDnon_getOutHighHemtt";
			GetOutHighZamak = "AcrgPknlMstpSnonWnonDnon_AmovPercMstpSnonWnonDnon_getOutHighZamak";
			GetOutLow = "AcrgPknlMstpSnonWnonDnon_AmovPercMstpSnonWnonDnon_getOutLow";
			GetOutMedium = "AcrgPknlMstpSnonWnonDnon_AmovPercMstpSnonWnonDnon_getOutMedium";
			GetOutSDV = "AcrgPknlMstpSnonWnonDnon_AmovPercMstpSnonWnonDnon_getOutHigh";
			HandGunOn = "vehicle_passenger_stand_2_Aim_Pistol";
			PrimaryWeapon = "vehicle_passenger_stand_2_Aim";
			SecondaryWeapon = "vehicle_passenger_stand_2_Aim_Launcher";
			Stand = "vehicle_passenger_stand_2_Idle_Unarmed";
			stop = "vehicle_passenger_stand_2_Idle_Unarmed";
			stopRelaxed = "vehicle_passenger_stand_2_Idle_Unarmed";
			throwGrenade[] = {"GestureThrowGrenadeUna", "Gesture"};
			Unconscious = "vehicle_passenger_stand_2_Die_Pistol";
			upDegree = "ManPosNoWeapon";
		};
		class vehicle_passenger_stand_2LauncherActions: FFV_BaseActions
		{
			Binoculars = "vehicle_passenger_stand_2_Aim_Launcher_Binoc";
			civil = "vehicle_passenger_stand_2_Idle_Unarmed";
			default = "vehicle_passenger_stand_2_Aim_Launcher";
			die = "vehicle_passenger_stand_2_Die_Pistol";
			HandGunOn = "vehicle_passenger_stand_2_Aim_Pistol";
			PrimaryWeapon = "vehicle_passenger_stand_2_Aim";
			reloadRPG = "vehicle_passenger_stand_2_Aim_Launcher_Reload";
			SecondaryWeapon = "vehicle_passenger_stand_2_Aim_Launcher";
			Stand = "vehicle_passenger_stand_2_Idle_Launcher";
			stop = "vehicle_passenger_stand_2_Aim_Launcher";
			stopRelaxed = "vehicle_passenger_stand_2_Aim_Launcher";
			Unconscious = "vehicle_passenger_stand_2_Die_Pistol";
			upDegree = "ManPosWeapon";
		};
		class vehicle_passenger_stand_2ObstructedActions: vehicle_passenger_stand_2Actions
		{
			Combat = "vehicle_passenger_stand_2_Aim";
			default = "vehicle_passenger_stand_2_Obstructed";
			fireNotPossible = "vehicle_passenger_stand_2_Obstructed";
			PlayerStand = "vehicle_passenger_stand_2_Obstructed";
			stop = "vehicle_passenger_stand_2_Obstructed";
			stopRelaxed = "vehicle_passenger_stand_2_Obstructed";
		};
		class vehicle_passenger_stand_2ObstructedPistolActions: vehicle_passenger_stand_2PistolActions
		{
			Combat = "vehicle_passenger_stand_2_Aim_Pistol";
			default = "vehicle_passenger_stand_2_Obstructed_Pistol";
			fireNotPossible = "vehicle_passenger_stand_2_Obstructed_Pistol";
			PlayerStand = "vehicle_passenger_stand_2_Obstructed_Pistol";
			Stand = "vehicle_passenger_stand_2_Obstructed_Pistol";
			stop = "vehicle_passenger_stand_2_Obstructed_Pistol";
			stopRelaxed = "vehicle_passenger_stand_2_Obstructed_Pistol";
		};
		class vehicle_passenger_stand_2PistolActions: vehicle_passenger_stand_2Actions
		{
			Binoculars = "vehicle_passenger_stand_2_Aim_Pistol_Binoc";
			default = "vehicle_passenger_stand_2_Aim_Pistol";
			die = "vehicle_passenger_stand_2_Die_Pistol";
			GetOutHigh = "AcrgPknlMstpSnonWnonDnon_AmovPercMstpSrasWpstDnon_getOutHigh";
			GetOutHighHemtt = "AcrgPknlMstpSnonWnonDnon_AmovPercMstpSrasWpstDnon_getOutHighHemtt";
			GetOutHighZamak = "AcrgPknlMstpSnonWnonDnon_AmovPercMstpSrasWpstDnon_getOutHighZamak";
			GetOutLow = "AcrgPknlMstpSnonWnonDnon_AmovPercMstpSrasWpstDnon_getOutLow";
			GetOutMedium = "AcrgPknlMstpSnonWnonDnon_AmovPercMstpSrasWpstDnon_getOutMedium";
			GetOutSDV = "AcrgPknlMstpSnonWnonDnon_AmovPercMstpSrasWpstDnon_getOutHigh";
			Obstructed = "vehicle_passenger_stand_2_Obstructed_Pistol";
			Stand = "vehicle_passenger_stand_2_Idle_Pistol";
			stop = "vehicle_passenger_stand_2_Aim_Pistol";
			stopRelaxed = "vehicle_passenger_stand_2_Aim_Pistol";
			throwGrenade[] = {"GestureThrowGrenadePistol", "Gesture"};
			Unconscious = "vehicle_passenger_stand_2_Die_Pistol";
			upDegree = "ManPosHandGunStand";
		};
		class vehicle_turnout_1Actions: FFV_BaseActions
		{
			Binoculars = "vehicle_turnout_1_Aim_Binoc";
			civil = "vehicle_turnout_1_Idle_Unarmed";
			default = "vehicle_turnout_1_Aim";
			die = "vehicle_turnout_1_Die";
			HandGunOn = "vehicle_turnout_1_Aim_Pistol";
			Obstructed = "vehicle_turnout_1_Obstructed";
			PrimaryWeapon = "vehicle_turnout_1_Aim";
			Stand = "vehicle_turnout_1_Idle";
			stop = "vehicle_turnout_1_Aim";
			stopRelaxed = "vehicle_turnout_1_Aim";
			Unconscious = "vehicle_turnout_1_Die";
			upDegree = "ManPosCombat";
		};
		class vehicle_turnout_1BinocActions: vehicle_turnout_1Actions
		{
			binocOn = "";
			default = "vehicle_turnout_1_Aim_Binoc";
			stop = "vehicle_turnout_1_Aim_Binoc";
			stopRelaxed = "vehicle_turnout_1_Aim_Binoc";
			upDegree = "ManPosBinocStand";
		};
		class vehicle_turnout_1BinocPistolActions: vehicle_turnout_1BinocActions
		{
			default = "vehicle_turnout_1_Aim_Pistol_Binoc";
			die = "vehicle_turnout_1_Die_Pistol";
			GetOutHigh = "AcrgPknlMstpSnonWnonDnon_AmovPercMstpSrasWpstDnon_getOutHigh";
			GetOutHighHemtt = "AcrgPknlMstpSnonWnonDnon_AmovPercMstpSrasWpstDnon_getOutHighHemtt";
			GetOutHighZamak = "AcrgPknlMstpSnonWnonDnon_AmovPercMstpSrasWpstDnon_getOutHighZamak";
			GetOutLow = "AcrgPknlMstpSnonWnonDnon_AmovPercMstpSrasWpstDnon_getOutLow";
			GetOutMedium = "AcrgPknlMstpSnonWnonDnon_AmovPercMstpSrasWpstDnon_getOutMedium";
			GetOutSDV = "AcrgPknlMstpSnonWnonDnon_AmovPercMstpSrasWpstDnon_getOutHigh";
			stop = "vehicle_turnout_1_Aim_Pistol_Binoc";
			stopRelaxed = "vehicle_turnout_1_Aim_Pistol_Binoc";
			Unconscious = "vehicle_turnout_1_Die_Pistol";
		};
		class vehicle_turnout_1BinocUnarmedActions: vehicle_turnout_1BinocActions
		{
			default = "vehicle_turnout_1_Aim_Unarmed_Binoc";
			die = "vehicle_turnout_1_Die_Pistol";
			GetOutHigh = "AcrgPknlMstpSnonWnonDnon_AmovPercMstpSnonWnonDnon_getOutHigh";
			GetOutHighHemtt = "AcrgPknlMstpSnonWnonDnon_AmovPercMstpSnonWnonDnon_getOutHighHemtt";
			GetOutHighZamak = "AcrgPknlMstpSnonWnonDnon_AmovPercMstpSnonWnonDnon_getOutHighZamak";
			GetOutLow = "AcrgPknlMstpSnonWnonDnon_AmovPercMstpSnonWnonDnon_getOutLow";
			GetOutMedium = "AcrgPknlMstpSnonWnonDnon_AmovPercMstpSnonWnonDnon_getOutMedium";
			GetOutSDV = "AcrgPknlMstpSnonWnonDnon_AmovPercMstpSnonWnonDnon_getOutHigh";
			stop = "vehicle_turnout_1_Aim_Unarmed_Binoc";
			stopRelaxed = "vehicle_turnout_1_Aim_Unarmed_Binoc";
			Unconscious = "vehicle_turnout_1_Die_Pistol";
		};
		class vehicle_turnout_1DeadActions: FFV_BaseActions
		{
			default = "vehicle_turnout_1_Die";
			die = "vehicle_turnout_1_Die";
			stop = "vehicle_turnout_1_Die";
			Unconscious = "vehicle_turnout_1_Die";
		};
		class vehicle_turnout_1DeadPistolActions: FFV_BaseActions
		{
			default = "vehicle_turnout_1_Die_Pistol";
			die = "vehicle_turnout_1_Die_Pistol";
			stop = "vehicle_turnout_1_Die_Pistol";
			Unconscious = "vehicle_turnout_1_Die_Pistol";
		};
		class vehicle_turnout_1IdleActions: vehicle_turnout_1Actions
		{
			Combat = "vehicle_turnout_1_Aim";
			default = "vehicle_turnout_1_Idle";
			fireNotPossible = "vehicle_turnout_1_Aim";
			PlayerStand = "vehicle_turnout_1_Aim";
			stop = "vehicle_turnout_1_Idle";
			stopRelaxed = "vehicle_turnout_1_Idle";
			upDegree = "ManPosStand";
		};
		class vehicle_turnout_1IdlePistolActions: vehicle_turnout_1Actions
		{
			Combat = "vehicle_turnout_1_Aim_Pistol";
			default = "vehicle_turnout_1_Idle_Pistol";
			die = "vehicle_turnout_1_Die_Pistol";
			fireNotPossible = "vehicle_turnout_1_Aim_Pistol";
			GetOutHigh = "AcrgPknlMstpSnonWnonDnon_AmovPercMstpSrasWpstDnon_getOutHigh";
			GetOutHighHemtt = "AcrgPknlMstpSnonWnonDnon_AmovPercMstpSrasWpstDnon_getOutHighHemtt";
			GetOutHighZamak = "AcrgPknlMstpSnonWnonDnon_AmovPercMstpSrasWpstDnon_getOutHighZamak";
			GetOutLow = "AcrgPknlMstpSnonWnonDnon_AmovPercMstpSrasWpstDnon_getOutLow";
			GetOutMedium = "AcrgPknlMstpSnonWnonDnon_AmovPercMstpSrasWpstDnon_getOutMedium";
			GetOutSDV = "AcrgPknlMstpSnonWnonDnon_AmovPercMstpSrasWpstDnon_getOutHigh";
			PlayerStand = "vehicle_turnout_1_Aim_Pistol";
			Stand = "vehicle_turnout_1_Idle_Pistol";
			stop = "vehicle_turnout_1_Idle_Pistol";
			stopRelaxed = "vehicle_turnout_1_Idle_Pistol";
			Unconscious = "vehicle_turnout_1_Die_Pistol";
			upDegree = "ManPosHandGunStand";
		};
		class vehicle_turnout_1IdleUnarmedActions: FFV_BaseActions
		{
			Binoculars = "vehicle_turnout_1_Aim_Unarmed_Binoc";
			civil = "vehicle_turnout_1_Idle_Unarmed";
			default = "vehicle_turnout_1_Idle_Unarmed";
			die = "vehicle_turnout_1_Die_Pistol";
			GetOutHigh = "AcrgPknlMstpSnonWnonDnon_AmovPercMstpSnonWnonDnon_getOutHigh";
			GetOutHighHemtt = "AcrgPknlMstpSnonWnonDnon_AmovPercMstpSnonWnonDnon_getOutHighHemtt";
			GetOutHighZamak = "AcrgPknlMstpSnonWnonDnon_AmovPercMstpSnonWnonDnon_getOutHighZamak";
			GetOutLow = "AcrgPknlMstpSnonWnonDnon_AmovPercMstpSnonWnonDnon_getOutLow";
			GetOutMedium = "AcrgPknlMstpSnonWnonDnon_AmovPercMstpSnonWnonDnon_getOutMedium";
			GetOutSDV = "AcrgPknlMstpSnonWnonDnon_AmovPercMstpSnonWnonDnon_getOutHigh";
			HandGunOn = "vehicle_turnout_1_Aim_Pistol";
			PrimaryWeapon = "vehicle_turnout_1_Aim";
			Stand = "vehicle_turnout_1_Idle_Unarmed";
			stop = "vehicle_turnout_1_Idle_Unarmed";
			stopRelaxed = "vehicle_turnout_1_Idle_Unarmed";
			throwGrenade[] = {"GestureThrowGrenadeUna", "Gesture"};
			Unconscious = "vehicle_turnout_1_Die_Pistol";
			upDegree = "ManPosNoWeapon";
		};
		class vehicle_turnout_1ObstructedActions: vehicle_turnout_1Actions
		{
			Combat = "vehicle_turnout_1_Aim";
			default = "vehicle_turnout_1_Obstructed";
			fireNotPossible = "vehicle_turnout_1_Obstructed";
			PlayerStand = "vehicle_turnout_1_Obstructed";
			stop = "vehicle_turnout_1_Obstructed";
			stopRelaxed = "vehicle_turnout_1_Obstructed";
		};
		class vehicle_turnout_1ObstructedPistolActions: vehicle_turnout_1PistolActions
		{
			Combat = "vehicle_turnout_1_Aim_Pistol";
			default = "vehicle_turnout_1_Obstructed_Pistol";
			fireNotPossible = "vehicle_turnout_1_Obstructed_Pistol";
			PlayerStand = "vehicle_turnout_1_Obstructed_Pistol";
			Stand = "vehicle_turnout_1_Obstructed_Pistol";
			stop = "vehicle_turnout_1_Obstructed_Pistol";
			stopRelaxed = "vehicle_turnout_1_Obstructed_Pistol";
		};
		class vehicle_turnout_1PistolActions: vehicle_turnout_1Actions
		{
			Binoculars = "vehicle_turnout_1_Aim_Pistol_Binoc";
			default = "vehicle_turnout_1_Aim_Pistol";
			die = "vehicle_turnout_1_Die_Pistol";
			GetOutHigh = "AcrgPknlMstpSnonWnonDnon_AmovPercMstpSrasWpstDnon_getOutHigh";
			GetOutHighHemtt = "AcrgPknlMstpSnonWnonDnon_AmovPercMstpSrasWpstDnon_getOutHighHemtt";
			GetOutHighZamak = "AcrgPknlMstpSnonWnonDnon_AmovPercMstpSrasWpstDnon_getOutHighZamak";
			GetOutLow = "AcrgPknlMstpSnonWnonDnon_AmovPercMstpSrasWpstDnon_getOutLow";
			GetOutMedium = "AcrgPknlMstpSnonWnonDnon_AmovPercMstpSrasWpstDnon_getOutMedium";
			GetOutSDV = "AcrgPknlMstpSnonWnonDnon_AmovPercMstpSrasWpstDnon_getOutHigh";
			Obstructed = "vehicle_turnout_1_Obstructed_Pistol";
			Stand = "vehicle_turnout_1_Idle_Pistol";
			stop = "vehicle_turnout_1_Aim_Pistol";
			stopRelaxed = "vehicle_turnout_1_Aim_Pistol";
			throwGrenade[] = {"GestureThrowGrenadePistol", "Gesture"};
			Unconscious = "vehicle_turnout_1_Die_Pistol";
			upDegree = "ManPosHandGunStand";
		};
		class vehicle_turnout_2Actions: FFV_BaseActions
		{
			Binoculars = "vehicle_turnout_2_Aim_Binoc";
			civil = "vehicle_turnout_2_Idle_Unarmed";
			default = "vehicle_turnout_2_Aim";
			die = "vehicle_turnout_2_Die";
			HandGunOn = "vehicle_turnout_2_Aim_Pistol";
			Obstructed = "vehicle_turnout_2_Obstructed";
			PrimaryWeapon = "vehicle_turnout_2_Aim";
			Stand = "vehicle_turnout_2_Idle";
			stop = "vehicle_turnout_2_Aim";
			stopRelaxed = "vehicle_turnout_2_Aim";
			Unconscious = "vehicle_turnout_2_Die";
			upDegree = "ManPosCombat";
		};
		class vehicle_turnout_2BinocActions: vehicle_turnout_2Actions
		{
			binocOn = "";
			default = "vehicle_turnout_2_Aim_Binoc";
			stop = "vehicle_turnout_2_Aim_Binoc";
			stopRelaxed = "vehicle_turnout_2_Aim_Binoc";
			upDegree = "ManPosBinocStand";
		};
		class vehicle_turnout_2BinocPistolActions: vehicle_turnout_2BinocActions
		{
			default = "vehicle_turnout_2_Aim_Pistol_Binoc";
			die = "vehicle_turnout_2_Die_Pistol";
			GetOutHigh = "AcrgPknlMstpSnonWnonDnon_AmovPercMstpSrasWpstDnon_getOutHigh";
			GetOutHighHemtt = "AcrgPknlMstpSnonWnonDnon_AmovPercMstpSrasWpstDnon_getOutHighHemtt";
			GetOutHighZamak = "AcrgPknlMstpSnonWnonDnon_AmovPercMstpSrasWpstDnon_getOutHighZamak";
			GetOutLow = "AcrgPknlMstpSnonWnonDnon_AmovPercMstpSrasWpstDnon_getOutLow";
			GetOutMedium = "AcrgPknlMstpSnonWnonDnon_AmovPercMstpSrasWpstDnon_getOutMedium";
			GetOutSDV = "AcrgPknlMstpSnonWnonDnon_AmovPercMstpSrasWpstDnon_getOutHigh";
			stop = "vehicle_turnout_2_Aim_Pistol_Binoc";
			stopRelaxed = "vehicle_turnout_2_Aim_Pistol_Binoc";
			Unconscious = "vehicle_turnout_2_Die_Pistol";
		};
		class vehicle_turnout_2BinocUnarmedActions: vehicle_turnout_2BinocActions
		{
			default = "vehicle_turnout_2_Aim_Unarmed_Binoc";
			die = "vehicle_turnout_2_Die_Pistol";
			GetOutHigh = "AcrgPknlMstpSnonWnonDnon_AmovPercMstpSnonWnonDnon_getOutHigh";
			GetOutHighHemtt = "AcrgPknlMstpSnonWnonDnon_AmovPercMstpSnonWnonDnon_getOutHighHemtt";
			GetOutHighZamak = "AcrgPknlMstpSnonWnonDnon_AmovPercMstpSnonWnonDnon_getOutHighZamak";
			GetOutLow = "AcrgPknlMstpSnonWnonDnon_AmovPercMstpSnonWnonDnon_getOutLow";
			GetOutMedium = "AcrgPknlMstpSnonWnonDnon_AmovPercMstpSnonWnonDnon_getOutMedium";
			GetOutSDV = "AcrgPknlMstpSnonWnonDnon_AmovPercMstpSnonWnonDnon_getOutHigh";
			stop = "vehicle_turnout_2_Aim_Unarmed_Binoc";
			stopRelaxed = "vehicle_turnout_2_Aim_Unarmed_Binoc";
			Unconscious = "vehicle_turnout_2_Die_Pistol";
		};
		class vehicle_turnout_2DeadActions: FFV_BaseActions
		{
			default = "vehicle_turnout_2_Die";
			die = "vehicle_turnout_2_Die";
			stop = "vehicle_turnout_2_Die";
			Unconscious = "vehicle_turnout_2_Die";
		};
		class vehicle_turnout_2DeadPistolActions: FFV_BaseActions
		{
			default = "vehicle_turnout_2_Die_Pistol";
			die = "vehicle_turnout_2_Die_Pistol";
			stop = "vehicle_turnout_2_Die_Pistol";
			Unconscious = "vehicle_turnout_2_Die_Pistol";
		};
		class vehicle_turnout_2IdleActions: vehicle_turnout_2Actions
		{
			Combat = "vehicle_turnout_2_Aim";
			default = "vehicle_turnout_2_Idle";
			fireNotPossible = "vehicle_turnout_2_Aim";
			PlayerStand = "vehicle_turnout_2_Aim";
			stop = "vehicle_turnout_2_Idle";
			stopRelaxed = "vehicle_turnout_2_Idle";
			upDegree = "ManPosStand";
		};
		class vehicle_turnout_2IdlePistolActions: vehicle_turnout_2Actions
		{
			Combat = "vehicle_turnout_2_Aim_Pistol";
			default = "vehicle_turnout_2_Idle_Pistol";
			die = "vehicle_turnout_2_Die_Pistol";
			fireNotPossible = "vehicle_turnout_2_Aim_Pistol";
			GetOutHigh = "AcrgPknlMstpSnonWnonDnon_AmovPercMstpSrasWpstDnon_getOutHigh";
			GetOutHighHemtt = "AcrgPknlMstpSnonWnonDnon_AmovPercMstpSrasWpstDnon_getOutHighHemtt";
			GetOutHighZamak = "AcrgPknlMstpSnonWnonDnon_AmovPercMstpSrasWpstDnon_getOutHighZamak";
			GetOutLow = "AcrgPknlMstpSnonWnonDnon_AmovPercMstpSrasWpstDnon_getOutLow";
			GetOutMedium = "AcrgPknlMstpSnonWnonDnon_AmovPercMstpSrasWpstDnon_getOutMedium";
			GetOutSDV = "AcrgPknlMstpSnonWnonDnon_AmovPercMstpSrasWpstDnon_getOutHigh";
			PlayerStand = "vehicle_turnout_2_Aim_Pistol";
			Stand = "vehicle_turnout_2_Idle_Pistol";
			stop = "vehicle_turnout_2_Idle_Pistol";
			stopRelaxed = "vehicle_turnout_2_Idle_Pistol";
			Unconscious = "vehicle_turnout_2_Die_Pistol";
			upDegree = "ManPosHandGunStand";
		};
		class vehicle_turnout_2IdleUnarmedActions: FFV_BaseActions
		{
			Binoculars = "vehicle_turnout_2_Aim_Unarmed_Binoc";
			civil = "vehicle_turnout_2_Idle_Unarmed";
			default = "vehicle_turnout_2_Idle_Unarmed";
			die = "vehicle_turnout_2_Die_Pistol";
			GetOutHigh = "AcrgPknlMstpSnonWnonDnon_AmovPercMstpSnonWnonDnon_getOutHigh";
			GetOutHighHemtt = "AcrgPknlMstpSnonWnonDnon_AmovPercMstpSnonWnonDnon_getOutHighHemtt";
			GetOutHighZamak = "AcrgPknlMstpSnonWnonDnon_AmovPercMstpSnonWnonDnon_getOutHighZamak";
			GetOutLow = "AcrgPknlMstpSnonWnonDnon_AmovPercMstpSnonWnonDnon_getOutLow";
			GetOutMedium = "AcrgPknlMstpSnonWnonDnon_AmovPercMstpSnonWnonDnon_getOutMedium";
			GetOutSDV = "AcrgPknlMstpSnonWnonDnon_AmovPercMstpSnonWnonDnon_getOutHigh";
			HandGunOn = "vehicle_turnout_2_Aim_Pistol";
			PrimaryWeapon = "vehicle_turnout_2_Aim";
			Stand = "vehicle_turnout_2_Idle_Unarmed";
			stop = "vehicle_turnout_2_Idle_Unarmed";
			stopRelaxed = "vehicle_turnout_2_Idle_Unarmed";
			throwGrenade[] = {"GestureThrowGrenadeUna", "Gesture"};
			Unconscious = "vehicle_turnout_2_Die_Pistol";
			upDegree = "ManPosNoWeapon";
		};
		class vehicle_turnout_2ObstructedActions: vehicle_turnout_2Actions
		{
			Combat = "vehicle_turnout_2_Aim";
			default = "vehicle_turnout_2_Obstructed";
			fireNotPossible = "vehicle_turnout_2_Obstructed";
			PlayerStand = "vehicle_turnout_2_Obstructed";
			stop = "vehicle_turnout_2_Obstructed";
			stopRelaxed = "vehicle_turnout_2_Obstructed";
		};
		class vehicle_turnout_2ObstructedPistolActions: vehicle_turnout_2PistolActions
		{
			Combat = "vehicle_turnout_2_Aim_Pistol";
			default = "vehicle_turnout_2_Obstructed_Pistol";
			fireNotPossible = "vehicle_turnout_2_Obstructed_Pistol";
			PlayerStand = "vehicle_turnout_2_Obstructed_Pistol";
			Stand = "vehicle_turnout_2_Obstructed_Pistol";
			stop = "vehicle_turnout_2_Obstructed_Pistol";
			stopRelaxed = "vehicle_turnout_2_Obstructed_Pistol";
		};
		class vehicle_turnout_2PistolActions: vehicle_turnout_2Actions
		{
			Binoculars = "vehicle_turnout_2_Aim_Pistol_Binoc";
			default = "vehicle_turnout_2_Aim_Pistol";
			die = "vehicle_turnout_2_Die_Pistol";
			GetOutHigh = "AcrgPknlMstpSnonWnonDnon_AmovPercMstpSrasWpstDnon_getOutHigh";
			GetOutHighHemtt = "AcrgPknlMstpSnonWnonDnon_AmovPercMstpSrasWpstDnon_getOutHighHemtt";
			GetOutHighZamak = "AcrgPknlMstpSnonWnonDnon_AmovPercMstpSrasWpstDnon_getOutHighZamak";
			GetOutLow = "AcrgPknlMstpSnonWnonDnon_AmovPercMstpSrasWpstDnon_getOutLow";
			GetOutMedium = "AcrgPknlMstpSnonWnonDnon_AmovPercMstpSrasWpstDnon_getOutMedium";
			GetOutSDV = "AcrgPknlMstpSnonWnonDnon_AmovPercMstpSrasWpstDnon_getOutHigh";
			Obstructed = "vehicle_turnout_2_Obstructed_Pistol";
			Stand = "vehicle_turnout_2_Idle_Pistol";
			stop = "vehicle_turnout_2_Aim_Pistol";
			stopRelaxed = "vehicle_turnout_2_Aim_Pistol";
			throwGrenade[] = {"GestureThrowGrenadePistol", "Gesture"};
			Unconscious = "vehicle_turnout_2_Die_Pistol";
			upDegree = "ManPosHandGunStand";
		};
	};
	class AgonyBase: Default
	{
		actions = "InjuredManActions";
		collisionShape = "A3\anims_f\Data\Geom\Sdr\geom_Adth.p3d";
		collisionShapeSafe = "A3\anims_f\Data\Geom\Sdr\geom_Adth.p3d";
		disableWeaponsLong = 1;
		headBobMode = 2;
		headBobStrength = -1;
	};
	class AgonyBaseRfl: AgonyBase
	{
		actions = "InjuredManActionsRfl";
	};
	class BlendAnims
	{
		aimingDefault[] = {};
		aimingKneelUnarmedDefault = "";
		aimingNo[] = {};
		aimingUpDefault[] = {};
		empty[] = {};
		headDefault[] = {};
		headNo[] = {};
		legsDefault[] = {};
		legsNo[] = {};
	};
	class Default
	{
		access = 3;
		actions = "NoActions";
		adjstance = "m";
		aiming = "aimingDefault";
		aimingBody = "aimingUpDefault";
		aimPrecision = 1;
		boundingSphere = 1;
		camShakeFire = 1;
		canBlendStep = 0;
		canPullTrigger = 1;
		canReload = 1;
		collisionShape = "A3\anims_f\Data\Geom\Sdr\Perc_Wrfl.p3d";
		collisionShapeSafe = "";
		connectAs = "";
		connectFrom[] = {};
		connectTo[] = {};
		disableWeapons = 0;
		disableWeaponsLong = 0;
		duty = -0.5;
		enableAutoActions = 0;
		enableBinocular = 0;
		enableDirectControl = 1;
		enableMissile = 0;
		enableOptics = 0;
		equivalentTo = "";
		file = "";
		forceAim = 0;
		hasCollShapeSafe = 0;
		head = "headDefault";
		headBobMode = 0;
		headBobStrength = 0;
		idle = "idleDefault";
		ignoreMinPlayTime[] = {"Unconscious"};
		interpolateFrom[] = {};
		interpolateTo[] = {};
		interpolateWith[] = {};
		interpolationRestart = 0;
		interpolationSpeed = 6;
		leaning = "leaningDefault";
		leaningFactorBeg = 0;
		leaningFactorEnd = 0;
		leaningFactorZeroPoint = -1;
		leftHandIKBeg = 0;
		leftHandIKCurve[] = {};
		leftHandIKEnd = 0;
		legs = "legsDefault";
		limitGunMovement = 1;
		looped = 1;
		minPlayTime = 0;
		onLadder = 0;
		onLandBeg = 0;
		onLandEnd = 0;
		preload = 0;
		ragdoll = 0;
		relSpeedMax = 1;
		relSpeedMin = 1;
		rightHandIKBeg = 0;
		rightHandIKCurve[] = {};
		rightHandIKEnd = 0;
		showHandGun = 0;
		showItemInHand = 0;
		showItemInRightHand = 0;
		showWeaponAim = 1;
		soundEdge[] = {0.5, 1};
		soundEnabled = 1;
		soundOverride = "";
		speed = 0.5;
		stamina = 1;
		static = 0;
		terminal = 0;
		useIdles = 1;
		variantAfter[] = {5, 10, 20};
		variantsAI[] = {""};
		variantsPlayer[] = {};
		visibleSize = 0.6;
		Walkcycles = 1;
		weaponIK = 0;
		weaponLowered = 0;
		weaponObstructed = 0;
	};
	class DefaultDie: Default
	{
		aiming = "aimingNo";
		aimingBody = "aimingNo";
		boundingSphere = 1.5;
		canPullTrigger = 0;
		disableWeapons = 1;
		enableDirectControl = 0;
		head = "headNo";
		headBobMode = 1;
		headBobStrength = -1;
		interpolationRestart = 1;
		legs = "legsNo";
		showWeaponAim = 0;
		soundEdge[] = {0.45};
	};
	class HealBase: Default
	{
		actions = "HealActionBase";
		aiming = "empty";
		aimingBody = "empty";
		canPullTrigger = 0;
		disableWeapons = 1;
		disableWeaponsLong = 1;
		duty = 0.2;
		limitGunMovement = 0;
		looped = 0;
		showWeaponAim = 0;
	};
	class HealBaseRfl: HealBase {};
	class InjuredMovedBase: Default
	{
		actions = "InjuredManCarriedActions";
		headBobMode = 1;
		headBobStrength = -1;
		speed = 1;
		visibleSize = 0.600122;
	};
	class Interpolations {};
	class ManActions
	{
		AdjustB = "";
		AdjustF = "";
		AdjustL = "";
		AdjustLB = "";
		AdjustLF = "";
		AdjustR = "";
		AdjustRB = "";
		AdjustRF = "";
		agonyStart = "AinjPpneMstpSnonWnonDnon";
		agonyStop = "AmovPpneMstpSnonWnonDnon";
		apctracked2_slot1_in = "apctracked2_slot1_in";
		apctracked2_slot1_out = "apctracked2_slot1_out_settlein";
		apctracked2_slot2_in = "apctracked2_slot2_in";
		apctracked2_slot2_out = "apctracked2_slot2_out_settlein";
		apcwheeled3_slot1_in = "apcwheeled3_slot1_in";
		apcwheeled3_slot1_out = "apcwheeled3_slot1_out_settlein";
		bench_Heli_Light_01_get_in = "bench_Heli_Light_01_get_in";
		bench_Heli_Light_01_get_out = "bench_Heli_Light_01_get_out";
		BinocOff = "";
		BinocOn = "";
		Binoculars = "";
		BottomDive = "AbdvPercMrunSnonWnonDf";
		bottomSwim = "";
		CanNotMove = "";
		carriedStill = "AinjPfalMstpSnonWrflDnon_carried_still";
		ChopperHeavy_L_GetIn_H = "ChopperHeavy_L_GetIn_H";
		ChopperHeavy_L_GetOut_H = "ChopperHeavy_L_GetOut_H";
		ChopperHeavy_L_Static_H = "ChopperHeavy_L_Static_H";
		ChopperHeavy_LP_Static_H = "ChopperHeavy_LP_Static_H";
		ChopperHeavy_Lux_GetIn_H = "ChopperHeavy_Lux_GetIn_H";
		chopperheavy_Lux_getout_H = "chopperheavy_Lux_getout_H";
		ChopperHeavy_R_GetIn_H = "ChopperHeavy_R_GetIn_H";
		ChopperHeavy_R_GetOut_H = "ChopperHeavy_R_GetOut_H";
		ChopperHeavy_R_static_H = "ChopperHeavy_R_static_H";
		chopperLight_C_L_idleA_H = "chopperLight_C_L_idleA_H";
		chopperLight_C_L_idleB_H = "chopperLight_C_L_idleB_H";
		chopperLight_C_L_idleC_H = "chopperLight_C_L_idleC_H";
		chopperLight_C_L_idleD_H = "chopperLight_C_L_idleD_H";
		chopperLight_C_L_static_H = "chopperLight_C_L_static_H";
		chopperLight_C_LIn_H = "chopperLight_C_LIn_H";
		chopperLight_C_LOut_H = "chopperLight_C_LOut_H";
		chopperLight_C_R_idleA_H = "chopperLight_C_R_idleA_H";
		chopperLight_C_R_idleB_H = "chopperLight_C_R_idleB_H";
		chopperLight_C_R_idleC_H = "chopperLight_C_R_idleC_H";
		chopperLight_C_R_idleD_H = "chopperLight_C_R_idleD_H";
		chopperLight_C_R_static_H = "chopperLight_C_R_static_H";
		chopperLight_C_Rin_H = "chopperLight_C_Rin_H";
		chopperLight_C_Rout_H = "chopperLight_C_Rout_H";
		chopperLight_CB_static_H = "chopperLight_CB_static_H";
		chopperLight_L_In_H = "chopperLight_L_In_H";
		chopperLight_L_Out_H = "chopperLight_L_Out_H";
		chopperLight_L_static_H = "ChopperLight_L_static_H_getin";
		chopperLight_R_in_H = "chopperLight_R_in_H";
		chopperLight_R_out_H = "chopperLight_R_out_H";
		chopperLight_R_static_H = "chopperLight_R_static_H";
		chopperLight_RP_static_H = "chopperLight_RP_static_H";
		Civil = "";
		CivilLying = "";
		CoDriver_Van_02 = "CoDriver_Van_02_SettleIn";
		Combat = "";
		Commander_AFV_Wheeled_01_in = "Commander_AFV_Wheeled_01_in";
		Commander_AFV_Wheeled_01_out = "Commander_AFV_Wheeled_01_settlein";
		Commander_APC_tracked_01_aa_F_in = "Commander_APC_tracked_01_aa_F_in";
		Commander_APC_tracked_01_aa_F_out = "Commander_APC_tracked_01_aa_F_settlein";
		Commander_APC_tracked_01_crv_in = "Commander_APC_tracked_01_crv_in";
		Commander_APC_tracked_01_crv_out = "Commander_APC_tracked_01_crv_out";
		Commander_APC_tracked_02_aa_F_in = "Commander_APC_tracked_02_aa_F_in";
		Commander_APC_tracked_02_aa_F_out = "Commander_APC_tracked_02_aa_F_out_settlein";
		Commander_APC_tracked_02_cannon_F_in = "Commander_APC_tracked_02_cannon_F_in";
		Commander_APC_tracked_02_cannon_F_out = "Commander_APC_tracked_02_cannon_F_out_settlein";
		Commander_APC_tracked_03_cannon_F_in = "Commander_APC_tracked_03_cannon_F_in";
		Commander_APC_tracked_03_cannon_F_out = "Commander_APC_tracked_03_cannon_F_settlein";
		Commander_APC_Wheeled_01_in = "Commander_APC_Wheeled_01_in";
		Commander_APC_Wheeled_01_out = "Commander_APC_Wheeled_01_out";
		Commander_APC_Wheeled_02_rcws_F_in = "Commander_APC_Wheeled_02_rcws_F_in";
		Commander_APC_Wheeled_02_rcws_F_out = "Commander_APC_Wheeled_02_rcws_F_out";
		Commander_APC_Wheeled_03_cannon_F_in = "Commander_APC_Wheeled_03_cannon_F_in";
		Commander_APC_Wheeled_03_cannon_F_out = "Commander_APC_Wheeled_03_cannon_F_out_settlein";
		commander_apctracked1_in = "commander_apctracked1_in";
		commander_apctracked1_out = "commander_apctracked1_out_settlein";
		commander_apctracked1aa_in = "commander_apctracked1aa_in";
		commander_apctracked1aa_out = "commander_apctracked1aa_out_settlein";
		commander_apctracked1rcws_out = "commander_apctracked1rcws_out_settlein";
		commander_apctracked3_in = "commander_apctracked3_in";
		commander_apctracked3_out = "commander_apctracked3_out_settlein";
		commander_apcwheeled1_in = "commander_apcwheeled1_in";
		commander_apcwheeled1_out = "commander_apcwheeled1_out_settlein";
		commander_apcwheeled2_in = "commander_apcwheeled2_in";
		commander_apcwheeled2_out = "commander_apcwheeled2_out_settlein";
		commander_apcwheeled2hi_in = "commander_apcwheeled2hi_in";
		commander_apcwheeled2hi_out = "commander_apcwheeled2hi_out_settlein";
		Commander_LT_01_AT_F_in = "Commander_LT_01_AT_F_in";
		Commander_LT_01_AT_F_out = "Commander_LT_01_AT_F_out_settlein";
		commander_mbt3_in = "commander_mbt3_in";
		commander_mbt3_out = "commander_mbt3_out_settlein";
		Commander_MBT_01_arty_F_in = "Commander_MBT_01_arty_F_in";
		Commander_MBT_01_arty_F_out = "Commander_MBT_01_arty_F_out";
		Commander_MBT_01_cannon_F_in = "Commander_MBT_01_cannon_F_in";
		Commander_MBT_01_cannon_F_out = "Commander_MBT_01_cannon_F_out_settlein";
		Commander_MBT_02_arty_F_in = "Commander_MBT_02_arty_F_in";
		Commander_MBT_02_cannon_F_in = "Commander_MBT_02_cannon_F_in";
		Commander_MBT_02_cannon_F_out = "Commander_MBT_02_cannon_F_settlein";
		Commander_MBT_03_cannon_F_in = "Commander_MBT_03_cannon_F_in";
		Commander_MBT_03_cannon_F_out = "Commander_MBT_03_cannon_F_out";
		Commander_MBT_04_in = "Commander_MBT_04_in";
		Commander_MBT_04_out = "Commander_MBT_04_out_settlein";
		commander_MRAP_03 = "commander_MRAP_03_settlein";
		commander_sdv = "commander_sdv";
		copilot_Heli_Light_02 = "copilot_Heli_Light_02";
		copilot_Heli_Light_02_Enter = "copilot_Heli_Light_02_Enter";
		copilot_Heli_Light_02_Exit = "copilot_Heli_Light_02_Exit";
		copilot_Heli_Light_03 = "copilot_Heli_Light_03";
		copilot_Heli_Light_03_Enter = "copilot_Heli_Light_03_Enter";
		copilot_Heli_Light_03_Exit = "copilot_Heli_Light_03_Exit";
		Copilot_Plane_Civil_01 = "Copilot_Plane_Civil_01";
		Copilot_Plane_Civil_01_Enter = "Copilot_Plane_Civil_01_GetIn";
		Copilot_Plane_Civil_01_Exit = "Copilot_Plane_Civil_01_GetOut";
		copilot_VTOL_01 = "copilot_vtol01_armed_settlein";
		crew_tank01_in = "crew_tank01_in";
		crew_tank01_out = "crew_tank01_out";
		Crouch = "";
		CutsceneCivilStand = "Acts_CivilStand_Default";
		CutscenePistolLowStand = "Acts_PistolLowStand_Default";
		CutscenePistolRaisedStand = "Acts_PistolRaisedStand_Default";
		CutsceneRifleLowStand = "Acts_RifleLowStand_Default";
		Default = "";
		Diary = "";
		Die = "Unconscious";
		DismountOptic = "";
		DismountSide = "";
		dooraction = "AmovPercMwlkSnonWnonDf";
		Down = "";
		Driver_AFV_Wheeled_01_in = "Driver_AFV_Wheeled_01_in";
		Driver_AFV_Wheeled_01_out = "Driver_AFV_Wheeled_01_out";
		Driver_APC_tracked_01_crv_in = "Driver_APC_tracked_01_crv_in";
		Driver_APC_tracked_02_F_in = "Driver_APC_tracked_02_cannon_F_in";
		Driver_APC_tracked_02_F_out = "Driver_APC_tracked_02_cannon_F_out";
		Driver_APC_tracked_03_cannon_F_in = "Driver_APC_tracked_03_cannon_F_in";
		Driver_APC_tracked_03_cannon_F_out = "Driver_APC_tracked_03_cannon_F_out";
		Driver_APC_Wheeled_01_in = "Driver_APC_Wheeled_01_in";
		Driver_APC_Wheeled_01_out = "Driver_APC_Wheeled_01_out";
		Driver_APC_Wheeled_02_rcws_F_in = "Driver_APC_Wheeled_02_rcws_F_in";
		Driver_APC_Wheeled_02_rcws_F_out = "Driver_APC_Wheeled_02_rcws_F_out";
		Driver_APC_Wheeled_03_cannon_F_in = "Driver_APC_Wheeled_03_cannon_F_in";
		Driver_APC_Wheeled_03_cannon_F_out = "Driver_APC_Wheeled_03_cannon_F_out";
		driver_apctracked3_in = "driver_apctracked3_in";
		driver_apctracked3_out = "driver_apctracked3_out_settlein";
		driver_apcwheeled1_out = "driver_apcwheeled1_out";
		driver_apcwheeled2_in = "driver_apcwheeled2_in";
		driver_apcwheeled2_out = "driver_apcwheeled2_out_settlein";
		driver_apcwheeled3_in = "driver_apcwheeled3_in";
		driver_boat01 = "driver_boat01_settlein";
		driver_boat_transport_02 = "driver_boat_transport_02_settlein";
		driver_hemtt = "driver_hemtt";
		Driver_High01 = "Driver_High01";
		Driver_low01 = "Driver_low01";
		driver_lsv_01 = "driver_lsv_01_settlein";
		driver_lsv_02 = "driver_lsv_02_settlein";
		Driver_LT_01_AT_F_in = "Driver_LT_01_AT_F_in";
		Driver_LT_01_AT_F_out = "Driver_LT_01_AT_F_out";
		driver_mantis = "driver_mantis_settlein";
		Driver_MBT_01_cannon_F_in = "Driver_MBT_01_cannon_F_in";
		Driver_MBT_02_F_in = "Driver_MBT_02_F_in";
		Driver_MBT_03_cannon_F_in = "Driver_MBT_03_cannon_F_in";
		Driver_MBT_03_cannon_F_out = "Driver_MBT_03_cannon_F_out";
		Driver_MBT_04_in = "Driver_MBT_04_in";
		Driver_MBT_04_out = "Driver_MBT_04_out";
		Driver_mid01 = "Driver_mid01";
		driver_MRAP_01 = "driver_offroad01_settlein";
		driver_MRAP_03 = "driver_MRAP_03";
		driver_offroad01 = "driver_offroad01_settlein";
		driver_quadbike = "driver_quadbike";
		driver_scooter_01 = "driver_scooter_01_settlein";
		driver_sdv = "driver_sdv_settlein";
		driver_tractor = "driver_tractor_settlein";
		driver_Truck_02 = "driver_Truck_02";
		driver_Truck_03 = "driver_Truck_03_settlein";
		driver_ugv_01 = "driver_ugv_01";
		driver_Van_01 = "driver_Van_01_settlein";
		Driver_Van_02 = "Driver_Van_02_SettleIn";
		EvasiveLeft = "";
		EvasiveRight = "";
		FastB = "";
		FastF = "";
		FastL = "";
		FastLB = "";
		FastLF = "";
		FastR = "";
		FastRB = "";
		FastRF = "";
		FDStart = "";
		FireNotPossible = "";
		frontGunner_lsv_01 = "frontGunner_lsv_01_settlein";
		Gear = "";
		gestureAdvance = "";
		GestureAgonyCargo = "";
		gestureAttack = "";
		gestureCeaseFire = "";
		gestureCover = "";
		GestureDismountMuzzle = "";
		gestureEmpty = "";
		gestureFollow = "";
		gestureFreeze = "";
		gestureGo = "";
		gestureGoB = "";
		gestureHi = "";
		gestureHiB = "";
		gestureHiC = "";
		GestureLegPush = "";
		GestureMountMuzzle = "";
		gestureNo = "";
		gestureNod = "";
		gesturePoint = "";
		GestureReload_smg_03 = "";
		GestureReloadAK12 = "";
		GestureReloadAK12_Drum = "";
		GestureReloadAKM = "";
		GestureReloadAKM_Drum = "";
		GestureReloadAKS = "";
		GestureReloadARX = "";
		GestureReloadARX2 = "";
		GestureReloadCTAR = "";
		GestureReloadDMR = "";
		GestureReloadDMR02 = "";
		GestureReloadDMR03 = "";
		GestureReloadDMR04 = "";
		GestureReloadDMR05 = "";
		GestureReloadDMR06 = "";
		GestureReloadDMR07 = "";
		GestureReloadEBR = "";
		GestureReloadFlaregun = "";
		GestureReloadHunterShotgun01 = "";
		GestureReloadKatiba = "";
		GestureReloadKatibaUGL = "";
		GestureReloadLIM = "";
		GestureReloadLRR = "";
		GestureReloadM200 = "";
		GestureReloadM4SSAS = "";
		GestureReloadMk20 = "";
		GestureReloadMk20UGL = "";
		GestureReloadMMG01 = "";
		GestureReloadMMG02 = "";
		GestureReloadMSBS = "";
		GestureReloadMSBS_UBS = "";
		GestureReloadMSBS_UGL = "";
		GestureReloadMX = "";
		GestureReloadMXCompact = "";
		GestureReloadMXSniper = "";
		GestureReloadMXUGL = "";
		GestureReloadPistol = "";
		GestureReloadPistolHeavy02 = "";
		GestureReloadRPG7 = "GestureReloadRPG7";
		GestureReloadSDAR = "";
		GestureReloadSMG_01 = "";
		GestureReloadSMG_02 = "";
		GestureReloadSMG_03 = "";
		GestureReloadSMG_05 = "";
		GestureReloadSPAR_01 = "";
		GestureReloadSPAR_02 = "";
		GestureReloadSPARUGL = "";
		GestureReloadTRG = "";
		GestureReloadTRGUGL = "";
		GestureSpasm0 = "";
		GestureSpasm0weak = "";
		GestureSpasm1 = "";
		GestureSpasm1weak = "";
		GestureSpasm2 = "";
		GestureSpasm2weak = "";
		GestureSpasm3 = "";
		GestureSpasm3weak = "";
		GestureSpasm4 = "";
		GestureSpasm4weak = "";
		GestureSpasm5 = "";
		GestureSpasm5weak = "";
		GestureSpasm6 = "";
		GestureSpasm6weak = "";
		gestureUp = "";
		gestureYes = "";
		GetInAMV_cargo = "GetInAMV_cargo";
		GetInAssaultBoat = "GetInAssaultBoat";
		GetInBoat = "";
		GetInHeli_Attack_01Gunner = "";
		GetInHeli_Attack_01Pilot = "";
		GetInHeli_Light_01bench = "GetInHeli_Light_01bench";
		GetInHeli_Transport_01Cargo = "GetInHeli_Transport_01Cargo";
		GetInHeli_Transport_02Cargo = "GetInHeli_Transport_02Cargo";
		GetInHelicopterCargo = "";
		GetInHemttBack = "GetInHemttBack";
		GetInHigh = "";
		GetInLow = "";
		GetInMantis = "GetInMantis";
		GetInMedium = "";
		GetInMortar = "GetInMortar";
		GetInMRAP_01 = "";
		GetInMRAP_01_cargo = "";
		GetInMRAP_03 = "GetInMRAP_03";
		GetInOffroad = "GetInOffroad";
		GetInOffroadBack = "GetInOffroadBack";
		GetInOffroadCargo = "GetInOffroadCargo";
		GetInQuadbike = "GetInQuadbike";
		GetInQuadbike_cargo = "GetInQuadbike_cargo";
		GetInSDV = "";
		GetInSpeedboat = "GetInSpeedboat";
		GetInVertical = "";
		GetOutAssaultBoat = "GetOutAssaultBoat";
		GetOutBoat = "";
		GetOutHeli_Attack_01Gunner = "";
		GetOutHeli_Attack_01Pilot = "";
		GetOutHeli_Light_01bench = "GetOutHeli_Light_01bench";
		GetOutHelicopterCargo = "";
		GetOutHigh = "";
		GetOutHighHemtt = "";
		GetOutHighZamak = "";
		GetOutLow = "";
		GetOutMantis = "GetOutMantis";
		GetOutMedium = "";
		GetOutMortar = "GetOutMortar";
		GetOutMRAP_01 = "";
		GetOutMRAP_01_cargo = "";
		GetOutPara = "GetOutPara";
		GetOutQuadbike = "GetOutQuadbike";
		GetOutQuadbike_cargo = "GetOutQuadbike_cargo";
		GetOutSDV = "";
		GetOutSpeedboat = "GetOutSpeedboat";
		GetOver = "";
		grabCarried = "AinjPfalMstpSnonWnonDnon_carried_still";
		grabCarry = "Helper_SwitchToCarryRfl";
		grabDrag = "AmovPercMstpSlowWrflDnon_AcinPknlMwlkSlowWrflDb_2";
		grabDragged = "AcinPknlMwlkSlowWrflDb_still";
		gunner_01_VTOL_01_armed = "gunner01_vtol01_armed_settlein";
		gunner_01_VTOL_01_vehicle = "gunner01_vtol01_vehicle_settlein";
		gunner_01_VTOL_02 = "gunner01_vtol02_vehicle_settlein";
		gunner_02_VTOL_01_armed = "gunner02_vtol01_armed_settlein";
		gunner_02_VTOL_01_vehicle = "gunner02_vtol01_vehicle_settlein";
		Gunner_AFV_Wheeled_01_in = "Gunner_AFV_Wheeled_01_in";
		Gunner_AFV_Wheeled_01_out = "Gunner_AFV_Wheeled_01_settlein";
		Gunner_APC_tracked_01_aa_F_in = "Gunner_APC_tracked_01_aa_F_in";
		Gunner_APC_tracked_01_aa_F_out = "Gunner_APC_tracked_01_aa_F_settlein";
		Gunner_APC_tracked_01_crv_in = "Gunner_APC_tracked_01_crv_in";
		Gunner_APC_tracked_02_aa_F_in = "Gunner_APC_tracked_02_aa_F_in";
		Gunner_APC_tracked_02_aa_F_out = "Gunner_APC_tracked_02_aa_F_out_settlein";
		Gunner_APC_tracked_02_cannon_F_in = "Gunner_APC_tracked_02_cannon_F_in";
		Gunner_APC_tracked_02_cannon_F_out = "Gunner_APC_tracked_02_cannon_F_out_settlein";
		Gunner_APC_tracked_03_cannon_F_in = "Gunner_APC_tracked_03_cannon_F_in";
		Gunner_APC_tracked_03_cannon_F_out = "Gunner_APC_tracked_03_cannon_F_settlein";
		Gunner_APC_Wheeled_01_in = "Gunner_APC_Wheeled_01_in";
		Gunner_APC_Wheeled_01_out = "Gunner_APC_Wheeled_01_out";
		Gunner_APC_Wheeled_03_cannon_F_in = "Gunner_APC_Wheeled_03_cannon_F_in";
		gunner_apctracked1aa_in = "gunner_apctracked1aa_in";
		gunner_apctracked1aa_out = "gunner_apctracked1aa_out_settlein";
		gunner_apctracked3_in = "gunner_apctracked3_in";
		gunner_apctracked3_out = "gunner_apctracked3_out_settlein";
		gunner_apcwheeled1_in = "gunner_apcwheeled1_in";
		gunner_apcwheeled1_out = "gunner_apcwheeled1_out_settlein";
		gunner_apcwheeled3_in = "gunner_apcwheeled3_in";
		gunner_Heli_Transport_01 = "gunner_Heli_Transport_01";
		Gunner_HeliTransport3_1 = "Gunner_HeliTransport3_1";
		Gunner_HeliTransport3_2 = "Gunner_HeliTransport3_2";
		gunner_hmg02_low = "gunner_hmg02_low";
		gunner_hmg02_standing = "gunner_hmg02_standing";
		gunner_lsv_01 = "gunner_lsv_01_settlein";
		Gunner_LSV_01_AT_F = "Gunner_LSV_01_AT_F";
		gunner_lsv_02 = "gunner_lsv_02_settlein";
		Gunner_LSV_02_AT_F = "Gunner_LSV_02_AT_F";
		gunner_mbt3_in = "gunner_mbt3_in";
		gunner_mbt3_out = "gunner_mbt3_out_settlein";
		Gunner_MBT_01_arty_F_in = "Gunner_MBT_01_arty_F_in";
		Gunner_MBT_01_arty_F_out = "Gunner_MBT_01_arty_F_settlein";
		Gunner_MBT_01_cannon_F_in = "Gunner_MBT_01_cannon_F_in";
		Gunner_MBT_01_mlrs_F_in = "Gunner_MBT_01_mlrs_F_in";
		Gunner_MBT_02_arty_F_in = "Gunner_MBT_02_arty_F_in";
		Gunner_MBT_02_arty_F_out = "Gunner_MBT_02_arty_F_settlein";
		Gunner_MBT_02_cannon_F_in = "Gunner_MBT_02_cannon_F_in";
		Gunner_MBT_02_cannon_F_out = "Gunner_MBT_02_cannon_F_settlein";
		Gunner_MBT_03_cannon_F_in = "Gunner_MBT_03_cannon_F_in";
		Gunner_MBT_03_cannon_F_out = "Gunner_MBT_03_cannon_F_out";
		Gunner_MBT_04_in = "Gunner_MBT_04_in";
		gunner_mortar = "gunner_mortar";
		gunner_MRAP_01 = "gunner_MRAP_01_settlein";
		gunner_MRAP_03 = "gunner_MRAP_03_settlein";
		gunner_MRAP_03_lookingatmonitor = "gunner_MRAP_03_lookingatmonitor";
		gunner_offroad01 = "gunner_offroad01";
		Gunner_Offroad_01_AT_F = "Gunner_Offroad_01_AT_F";
		Gunner_Offroad_02_AT_F = "Gunner_Offroad_02_AT_F";
		Gunner_Offroad_02_LMG_F = "Gunner_Offroad_02_LMG_F";
		gunner_standup01 = "gunner_standup01";
		gunner_static_low01 = "gunner_static_low01";
		gunner_staticlauncher = "gunner_staticlauncher";
		HandGunOn = "";
		HandSignalFreeze = "";
		HandSignalGetDown = "";
		HandSignalGetUp = "";
		HandSignalHold = "";
		HandSignalMoveForward = "";
		HandSignalMoveOut = "";
		HandSignalPoint = "";
		HandSignalRadio = "";
		healedStart = "";
		healedStop = "";
		Heli_Attack_01_Gunner = "Heli_Attack_01_Gunner";
		Heli_Attack_01_Gunner_Enter = "Heli_Attack_01_Gunner_getin";
		Heli_Attack_01_Gunner_Exit = "Heli_Attack_01_Gunner_getout";
		Heli_Attack_01_Pilot = "Heli_Attack_01_Pilot";
		Heli_Attack_01_Pilot_Enter = "Heli_Attack_01_Pilot_getin";
		Heli_Attack_01_Pilot_Exit = "Heli_Attack_01_Pilot_getout";
		Heli_Attack_02_Cargo = "Heli_Attack_02_Cargo";
		Heli_Attack_02_Gunner_SettleIn = "Heli_Attack_02_Gunner_SettleIn";
		Heli_Attack_02_Pilot = "Heli_Attack_02_Pilot";
		Heli_Light_02_Cargo = "Heli_Light_02_Cargo";
		Heli_Light_02_Gunner = "Heli_Light_02_Gunner";
		Heli_Light_02_Pilot = "Heli_Light_02_Pilot";
		JumpOff = "";
		Kart_driver = "Kart_driver";
		LadderOff = "";
		LadderOffBottom = "";
		LadderOffTop = "";
		LadderOnDown = "";
		LadderOnUp = "";
		LimpB = "";
		LimpF = "";
		LimpL = "";
		LimpLB = "";
		LimpLF = "";
		LimpR = "";
		LimpRB = "";
		LimpRF = "";
		Lying = "";
		mbt1_slot1_in = "mbt1_slot1_in";
		mbt1_slot1_out = "mbt1_slot1_out_settlein";
		mbt1_slot2_in = "mbt1_slot2_in";
		mbt1_slot2_out = "mbt1_slot2_out_settlein";
		mbt1c_slot2_in = "mbt1c_slot2_in";
		mbt1c_slot2_out = "mbt1c_slot2_out_settlein";
		mbt2_slot1_in = "mbt2_slot1_in";
		mbt2_slot1_out = "mbt2_slot1_out_settlein";
		mbt2_slot2_in = "mbt2_slot2_in";
		mbt2_slot2_out = "mbt2_slot2_out_settlein";
		mbt2_slot2a_in = "mbt2_slot2a_in";
		mbt2_slot2a_out = "mbt2_slot2a_out_settlein";
		mbt2_slot2b_in = "mbt2_slot2b_in";
		mbt2_slot2b_out = "mbt2_slot2b_out_settlein";
		Medic = "";
		MedicOther = "";
		medicStart = "AinvPknlMstpSnonWnonDnon_medic0S";
		medicStartRightSide = "AinvPknlMstpSnonWnonDr_medic0S";
		medicStartUp = "AinvPknlMstpSnonWrflDnon_medicUp0S";
		medicStop = "AinvPknlMstpSnonWnonDnon_medicEnd";
		Mk201_Turret = "Mk201_Turret";
		Mk34_Turret = "Mk34_Turret";
		Mortar_01_F_Turret = "Mortar_01_F_Turret";
		Mortar_Gunner = "Mortar_Gunner";
		MountOptic = "";
		MountSide = "";
		Obstructed = "";
		Panic = "";
		Para_Pilot = "Para_Pilot";
		passenger_apc_generic01 = "passenger_apc_generic01_settlein";
		passenger_apc_generic01_ns = "passenger_apc_generic01";
		passenger_apc_generic02 = "passenger_apc_generic02_settlein";
		passenger_apc_generic02_ns = "passenger_apc_generic02";
		passenger_apc_generic02b = "passenger_apc_generic02b_settlein";
		passenger_apc_generic02b_ns = "passenger_apc_generic02b";
		passenger_apc_generic03 = "passenger_apc_generic03_settlein";
		passenger_apc_generic03_low = "passenger_apc_generic03_low_settlein";
		passenger_apc_generic03_ns = "passenger_apc_generic03";
		passenger_apc_generic04 = "passenger_apc_generic04_settlein";
		passenger_apc_generic04_ns = "passenger_apc_generic04";
		passenger_apc_narrow_generic01 = "passenger_apc_narrow_generic01_settlein";
		passenger_apc_narrow_generic01_low = "passenger_apc_narrow_generic01_low_settlein";
		passenger_apc_narrow_generic01_ns = "passenger_apc_narrow_generic01";
		passenger_apc_narrow_generic02 = "passenger_apc_narrow_generic02_settlein";
		passenger_apc_narrow_generic02_low = "passenger_apc_narrow_generic02_low_settlein";
		passenger_apc_narrow_generic02_ns = "passenger_apc_narrow_generic02";
		passenger_apc_narrow_generic03 = "passenger_apc_narrow_generic03_settlein";
		passenger_apc_narrow_generic03_ns = "passenger_apc_narrow_generic03";
		passenger_apc_narrow_generic03still = "passenger_apc_narrow_generic03still_settlein";
		passenger_apc_narrow_generic03still_ns = "passenger_apc_narrow_generic03still";
		passenger_bench_1 = "passenger_bench_1_Idle";
		passenger_boat_1 = "passenger_boat_1_Idle";
		passenger_boat_2 = "passenger_boat_2_Idle";
		passenger_boat_3 = "passenger_boat_3_Idle";
		passenger_boat_4 = "passenger_boat_4_Idle";
		passenger_boat_holdleft = "passenger_boat_holdleft";
		passenger_boat_holdleft2 = "passenger_boat_holdleft2";
		passenger_boat_holdright = "passenger_boat_holdright";
		passenger_boat_holdright2 = "passenger_boat_holdright2";
		passenger_boat_rightrear = "passenger_boat_rightrear_settlein";
		passenger_flatground_1 = "passenger_flatground_1_Idle";
		passenger_flatground_2 = "passenger_flatground_2_Idle";
		passenger_flatground_3 = "passenger_flatground_3_Idle";
		passenger_flatground_4 = "passenger_flatground_4_Idle";
		passenger_flatground_4_vehicle_passenger_stand_1 = "passenger_flatground_4_Aim_vehicle_passenger_stand_1_Aim";
		passenger_flatground_crosslegs = "passenger_flatground_crosslegs_settlein";
		passenger_flatground_generic01 = "passenger_flatground_generic01_settlein";
		passenger_flatground_generic02 = "passenger_flatground_generic02_settlein";
		passenger_flatground_generic03 = "passenger_flatground_generic03_settlein";
		passenger_flatground_generic04 = "passenger_flatground_generic04_settlein";
		passenger_flatground_generic05 = "passenger_flatground_generic05_settlein";
		passenger_flatground_leanleft = "passenger_flatground_leanleft_settlein";
		passenger_flatground_leanright = "passenger_flatground_leanright_settlein";
		passenger_generic01_foldhands = "passenger_generic01_foldhands_settlein";
		passenger_generic01_leanleft = "passenger_generic01_leanleft_settlein";
		passenger_generic01_leanright = "passenger_generic01_leanright_settlein";
		passenger_generic02_foldhands = "passenger_generic02_foldhands_settlein";
		passenger_injured_medevac_truck01 = "passenger_injured_medevac_truck01";
		passenger_injured_medevac_truck02 = "passenger_injured_medevac_truck02";
		passenger_injured_medevac_truck03 = "passenger_injured_medevac_truck03";
		passenger_inside_1 = "passenger_inside_1_Idle";
		passenger_inside_2 = "passenger_inside_2_Idle";
		passenger_inside_3 = "passenger_inside_3_Idle";
		passenger_inside_4 = "passenger_inside_4_Idle";
		passenger_inside_5 = "passenger_inside_5_Idle";
		passenger_inside_6 = "passenger_inside_6_Idle";
		passenger_inside_7 = "passenger_inside_7_Idle";
		passenger_inside_8 = "passenger_inside_8_Idle";
		passenger_low01 = "passenger_low01_settlein";
		passenger_mantisrear = "passenger_mantisrear";
		passenger_MRAP_01_back = "passenger_MRAP_01_back_settlein";
		passenger_MRAP_01_front = "passenger_MRAP_01_front_settlein";
		passenger_MRAP_03exgunner = "passenger_MRAP_03exgunner_settlein";
		Passenger_Plane_Civil_01_L = "Passenger_Plane_Civil_01_L";
		Passenger_Plane_Civil_01_R = "Passenger_Plane_Civil_01_R";
		passenger_quadbike = "passenger_quadbike";
		passenger_scooter_01 = "passenger_scooter_01_settlein";
		passenger_scooter_02 = "passenger_scooter_02_settlein";
		passenger_sdv = "passenger_sdv_settlein";
		Passenger_Van_02_Medevac_Back = "Passenger_Van_02_Medevac_Back";
		Passenger_Van_02_Medevac_Front = "Passenger_Van_02_Medevac_Front";
		Passenger_Van_02_Transport_Left_1 = "Passenger_Van_02_Transport_Left_1_settleIn";
		Passenger_Van_02_Transport_Left_2 = "Passenger_Van_02_Transport_Left_2_settleIn";
		Passenger_Van_02_Transport_Left_3 = "Passenger_Van_02_Transport_Left_3_settleIn";
		Passenger_Van_02_Transport_Middle_3 = "Passenger_Van_02_Transport_Middle_3_settleIn";
		Passenger_Van_02_Transport_Right_1 = "Passenger_Van_02_Transport_Right_1_settleIn";
		Passenger_Van_02_Transport_Right_2 = "Passenger_Van_02_Transport_Right_2_settleIn";
		Passenger_Van_02_Transport_Right_3 = "Passenger_Van_02_Transport_Right_3_settleIn";
		passenger_VAN_codriver01 = "passenger_VAN_codriver01_settlein";
		passenger_VAN_codriver02 = "passenger_VAN_codriver02_settlein";
		Patient_Van_02_Medevac_Back = "Patient_Van_02_Medevac_Back";
		Patient_Van_02_Medevac_Front = "Patient_Van_02_Medevac_Front";
		PBX_Cargo01 = "PBX_Cargo01";
		PBX_Cargo02 = "PBX_Cargo02";
		PBX_Cargo03 = "PBX_Cargo03";
		PBX_Driver = "PBX_Driver";
		pilot_Heli_Attack_01 = "pilot_Heli_Attack_01_settlein";
		pilot_Heli_Light_02 = "pilot_Heli_Light_02";
		pilot_Heli_Light_02_Enter = "pilot_Heli_Light_02_Enter";
		pilot_Heli_Light_02_Exit = "pilot_Heli_Light_02_Exit";
		pilot_Heli_Light_03 = "pilot_Heli_Light_03";
		pilot_Heli_Light_03_Enter = "pilot_Heli_Light_03_Enter";
		pilot_Heli_Light_03_Exit = "pilot_Heli_Light_03_Exit";
		pilot_Heli_Transport_01 = "pilot_Heli_Transport_01";
		pilot_Heli_Transport_03 = "pilot_Heli_Transport_03";
		pilot_Heli_Transport_04 = "pilot_Heli_Transport_04";
		pilot_plane_cas_01 = "pilot_plane_cas_01";
		pilot_plane_cas_01_Enter = "pilot_plane_cas_01_getin";
		pilot_plane_cas_01_Exit = "pilot_plane_cas_01_getout";
		pilot_plane_cas_02 = "pilot_plane_cas_02";
		pilot_plane_cas_02_Enter = "pilot_plane_cas_02_getin";
		pilot_plane_cas_02_Exit = "pilot_plane_cas_02_getout";
		Pilot_Plane_Civil_01 = "Pilot_Plane_Civil_01";
		Pilot_Plane_Civil_01_Enter = "Pilot_Plane_Civil_01_GetIn";
		Pilot_Plane_Civil_01_Exit = "Pilot_Plane_Civil_01_GetOut";
		Pilot_Plane_Fighter_01 = "Pilot_Plane_Fighter_01_SettleIn";
		Pilot_Plane_Fighter_01_Enter = "Pilot_Plane_Fighter_01_GetIn";
		Pilot_Plane_Fighter_01_Exit = "Pilot_Plane_Fighter_01_GetOut";
		Pilot_Plane_Fighter_02 = "Pilot_Plane_Fighter_02_SettleIn";
		Pilot_Plane_Fighter_02_Enter = "Pilot_Plane_Fighter_02_GetIn";
		Pilot_Plane_Fighter_02_Exit = "Pilot_Plane_Fighter_02_GetOut";
		Pilot_Plane_Fighter_04 = "Pilot_Plane_Fighter_04_SettleIn";
		Pilot_Plane_Fighter_04_Enter = "Pilot_Plane_Fighter_04_GetIn";
		Pilot_Plane_Fighter_04_Exit = "Pilot_Plane_Fighter_04_GetOut";
		Pilot_Plane_Fighter_Ejection = "Pilot_Plane_Fighter_Ejection";
		pilot_VTOL_01 = "pilot_vtol01_armed_settlein";
		pilot_VTOL_02 = "pilot_vtol02_vehicle_settlein";
		Plane_Fighter_03_pilot = "Plane_Fighter_03_pilot";
		PlayerCrouch = "";
		PlayerProne = "";
		PlayerSlowB = "";
		PlayerSlowF = "";
		PlayerSlowL = "";
		PlayerSlowLB = "";
		PlayerSlowLF = "";
		PlayerSlowR = "";
		PlayerSlowRB = "";
		PlayerSlowRF = "";
		PlayerStand = "";
		PlayerTactB = "";
		PlayerTactF = "";
		PlayerTactL = "";
		PlayerTactLB = "";
		PlayerTactLF = "";
		PlayerTactR = "";
		PlayerTactRB = "";
		PlayerTactRF = "";
		PlayerWalkB = "";
		PlayerWalkF = "";
		PlayerWalkL = "";
		PlayerWalkLB = "";
		PlayerWalkLF = "";
		PlayerWalkR = "";
		PlayerWalkRB = "";
		PlayerWalkRF = "";
		PrimaryWeapon = "";
		PutDown = "";
		PutDownEnd = "";
		Relax = "";
		released = "";
		releasedBad = "";
		reloadGM6 = "";
		ReloadMagazine = "";
		ReloadMGun = "";
		ReloadMortar = "";
		ReloadRPG = "ReloadRPG";
		RHIB_Cargo = "RHIB_Cargo";
		RHIB_Driver = "RHIB_Driver";
		RHIB_Gunner = "RHIB_Gunner";
		Salute = "";
		saluteOff = "";
		SecondaryWeapon = "";
		SitDown = "";
		SlowB = "";
		SlowF = "";
		SlowL = "";
		SlowLB = "";
		SlowLF = "";
		SlowR = "";
		SlowRB = "";
		SlowRF = "";
		Stand = "";
		startDive = "AdvePercMrunSnonWnonDf";
		StartFreefall = "";
		startSwim = "";
		Static_Turret = "Static_Turret";
		Stop = "";
		StopDive = "";
		StopRelaxed = "";
		StopSwim = "";
		StrokeFist = "";
		StrokeGun = "";
		SurfaceDive = "AsdvPercMrunSnonWnonDf";
		surfaceSwim = "";
		Surrender = "";
		swimDown = "";
		swimUp = "";
		TactB = "";
		TactF = "";
		TactL = "";
		TactLB = "";
		TactLF = "";
		TactR = "";
		TactRB = "";
		TactRF = "";
		TakeFlag = "";
		TestDriver = "BasicDriver";
		TestDriverOut = "BasicDriverOut";
		TestGunner = "BasicSittingGunner";
		ThrowGrenade = "";
		ThrowPrepare = "";
		Treated = "";
		Truck_02_Driver = "Truck_02_Driver";
		truck_02_mrl_gunner = "truck_02_mrl_gunner";
		Truck_Cargo01 = "Truck_Cargo01";
		Truck_Cargo02 = "Truck_Cargo02";
		Truck_Cargo03 = "Truck_Cargo03";
		Truck_Cargo04 = "Truck_Cargo04";
		Truck_Driver = "Truck_Driver";
		TurnL = "";
		TurnLRelaxed = "";
		TurnR = "";
		TurnRRelaxed = "";
		Unconscious = "Unconscious";
		Up = "";
		vehicle_coshooter_1 = "vehicle_coshooter_1_Idle";
		vehicle_passenger_stand_1_passenger_flatground_4 = "vehicle_passenger_stand_1_Aim_passenger_flatground_4_Aim";
		vehicle_passenger_stand_2 = "vehicle_passenger_stand_2_Idle";
		vehicle_turnout_1 = "vehicle_turnout_1_Idle";
		vehicle_turnout_2 = "vehicle_turnout_2_Idle";
		WalkB = "";
		WalkF = "";
		WalkL = "";
		WalkLB = "";
		WalkLF = "";
		WalkR = "";
		WalkRB = "";
		WalkRF = "";
		WeaponOff = "";
		WeaponOn = "";
		Zodiac_Cargo01 = "Zodiac_Cargo01";
		Zodiac_Cargo02 = "Zodiac_Cargo02";
		Zodiac_Cargo03 = "Zodiac_Cargo03";
		Zodiac_Cargo04 = "Zodiac_Cargo04";
		Zodiac_Driver = "Zodiac_Driver";
	};
	class StandBase: Default
	{
		disableWeapons = 1;
		headBobMode = 2;
		headBobStrength = 0.20398;
		leaningFactorBeg = 1;
		leaningFactorEnd = 1;
	};
};
