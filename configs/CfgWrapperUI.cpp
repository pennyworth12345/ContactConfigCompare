class CfgWrapperUI
{
	access = 0;
	class Background
	{
		alpha = 0.75;
		texture = "#(argb,8,8,3)color(1,1,1,1)";
	};
	class Button
	{
		color1[] = {0, 0, 0, 1};
		color2[] = {0.2, 0.2, 0.2, 1};
		color3[] = {0.5, 0.5, 0.5, 1};
		color4[] = {0.6, 0.6, 0.6, 1};
		color5[] = {0.8, 0.8, 0.8, 1};
	};
	class Colors
	{
		color1[] = {0, 0, 0, 0};
		color2[] = {0, 0, 0, 0.2};
		color3[] = {0, 0, 0, 0.4};
		color4[] = {0, 0, 0, 0.6};
		color5[] = {0, 0, 0, 0.8};
	};
	class Cursors
	{
		class 3DEN
		{
			color[] = {1, 1, 1, 1};
			height = 32;
			hotspotX = 0.1875;
			hotspotY = 0;
			texture = "\a3\3DEN\Data\CfgWrapperUI\Cursors\3DEN_ca.paa";
			width = 32;
		};
		class 3DENConnectGroup: 3DEN
		{
			color[] = {1, 1, 1, 1};
			hotspotX = 0.1875;
			hotspotY = 0;
			texture = "\a3\3DEN\Data\CfgWrapperUI\Cursors\3DENConnectGroup_ca.paa";
		};
		class 3DENConnectSync: 3DEN
		{
			color[] = {1, 1, 1, 1};
			hotspotX = 0.1875;
			hotspotY = 0;
			texture = "\a3\3DEN\Data\CfgWrapperUI\Cursors\3DENConnectSync_ca.paa";
		};
		class 3DENDisconnect: 3DEN
		{
			color[] = {1, 0.5, 0, 1};
			hotspotX = 0.1875;
			hotspotY = 0;
			texture = "\a3\3DEN\Data\CfgWrapperUI\Cursors\3DENDisconnect_ca.paa";
		};
		class 3DENMove: 3DEN
		{
			color[] = {0, 1, 1, 1};
			hotspotX = 0.5;
			hotspotY = 0.5;
			texture = "\a3\3DEN\Data\CfgWrapperUI\Cursors\3DENMove_ca.paa";
		};
		class 3DENMoveIn: 3DEN
		{
			color[] = {0, 1, 1, 1};
			hotspotX = 0.5;
			hotspotY = 0.5;
			texture = "\a3\3DEN\Data\CfgWrapperUI\Cursors\3DENMoveIn_ca.paa";
		};
		class 3DENMoveInDisabled: 3DEN
		{
			color[] = {1, 0.5, 0, 1};
			hotspotX = 0.5;
			hotspotY = 0.5;
			texture = "\a3\3DEN\Data\CfgWrapperUI\Cursors\3DENMoveInDisabled_ca.paa";
		};
		class 3DENMoveSnap: 3DEN
		{
			color[] = {0, 1, 1, 1};
			hotspotX = 0.5;
			hotspotY = 0.5;
			texture = "\a3\3DEN\Data\CfgWrapperUI\Cursors\3DENMoveSnap_ca.paa";
		};
		class 3DENMoveZ: 3DEN
		{
			color[] = {0, 1, 1, 1};
			hotspotX = 0.5;
			hotspotY = 0.5;
			texture = "\a3\3DEN\Data\CfgWrapperUI\Cursors\3DENMoveZ_ca.paa";
		};
		class 3DENPlace: 3DEN
		{
			color[] = {1, 1, 1, 1};
			hotspotX = 0.1875;
			hotspotY = 0;
			texture = "\a3\3DEN\Data\CfgWrapperUI\Cursors\3DENPlace_ca.paa";
		};
		class 3DENPlaceMulti: 3DEN
		{
			color[] = {1, 1, 1, 1};
			hotspotX = 0.1875;
			hotspotY = 0;
			texture = "\a3\3DEN\Data\CfgWrapperUI\Cursors\3DENPlaceMulti_ca.paa";
		};
		class 3DENPlaceWaypoint: 3DEN
		{
			color[] = {0.5, 1, 0.5, 1};
			hotspotX = 0.5;
			hotspotY = 0.5;
			texture = "\a3\3DEN\Data\CfgWrapperUI\Cursors\3DENPlaceWaypoint_ca.paa";
		};
		class 3DENPlaceWaypointAttach: 3DEN
		{
			color[] = {0.5, 1, 0.5, 1};
			hotspotX = 0.5;
			hotspotY = 0.5;
			texture = "\a3\3DEN\Data\CfgWrapperUI\Cursors\3DENPlaceWaypointAttach_ca.paa";
		};
		class 3DENPlaceWaypointAttachMulti: 3DEN
		{
			color[] = {0.5, 1, 0.5, 1};
			hotspotX = 0.5;
			hotspotY = 0.5;
			texture = "\a3\3DEN\Data\CfgWrapperUI\Cursors\3DENPlaceWaypointAttachMulti_ca.paa";
		};
		class 3DENPlaceWaypointMulti: 3DEN
		{
			color[] = {0.5, 1, 0.5, 1};
			hotspotX = 0.5;
			hotspotY = 0.5;
			texture = "\a3\3DEN\Data\CfgWrapperUI\Cursors\3DENPlaceWaypointMulti_ca.paa";
		};
		class 3DENPlaceZ: 3DEN
		{
			color[] = {1, 1, 1, 1};
			hotspotX = 0.1875;
			hotspotY = 0;
			texture = "\a3\3DEN\Data\CfgWrapperUI\Cursors\3DENPlaceZ_ca.paa";
		};
		class 3DENPlaceZMulti: 3DEN
		{
			color[] = {1, 1, 1, 1};
			hotspotX = 0.1875;
			hotspotY = 0;
			texture = "\a3\3DEN\Data\CfgWrapperUI\Cursors\3DENPlaceZMulti_ca.paa";
		};
		class 3DENRotate: 3DEN
		{
			color[] = {0, 1, 1, 1};
			hotspotX = 0.5;
			hotspotY = 0.5;
			texture = "\a3\3DEN\Data\CfgWrapperUI\Cursors\3DENRotate_ca.paa";
		};
		class 3DENSelect: 3DEN
		{
			color[] = {1, 1, 1, 1};
			hotspotX = 0.1875;
			hotspotY = 0.1875;
			texture = "\a3\3DEN\Data\CfgWrapperUI\Cursors\3DENSelect_ca.paa";
		};
		class 3DENSelectWidgetX: 3DEN
		{
			color[] = {0.77, 0.18, 0.1, 1};
			hotspotX = 0.1875;
			hotspotY = 0.1875;
			texture = "\a3\3DEN\Data\CfgWrapperUI\Cursors\3DENSelectWidgetX_ca.paa";
		};
		class 3DENSelectWidgetY: 3DEN
		{
			color[] = {0.58, 0.82, 0.22, 1};
			hotspotX = 0.1875;
			hotspotY = 0.1875;
			texture = "\a3\3DEN\Data\CfgWrapperUI\Cursors\3DENSelectWidgetY_ca.paa";
		};
		class 3DENSelectWidgetZ: 3DEN
		{
			color[] = {0.26, 0.52, 0.92, 1};
			hotspotX = 0.1875;
			hotspotY = 0.1875;
			texture = "\a3\3DEN\Data\CfgWrapperUI\Cursors\3DENSelectWidgetZ_ca.paa";
		};
		class 3DENTransformRotate0: 3DEN
		{
			color[] = {0, 1, 1, 1};
			hotspotX = 0.5;
			hotspotY = 0.5;
			texture = "\a3\3DEN\Data\CfgWrapperUI\Cursors\3DENTransformRotate0_ca.paa";
		};
		class 3DENTransformRotate135: 3DEN
		{
			color[] = {0, 1, 1, 1};
			hotspotX = 0.5;
			hotspotY = 0.5;
			texture = "\a3\3DEN\Data\CfgWrapperUI\Cursors\3DENTransformRotate135_ca.paa";
		};
		class 3DENTransformRotate180: 3DEN
		{
			color[] = {0, 1, 1, 1};
			hotspotX = 0.5;
			hotspotY = 0.5;
			texture = "\a3\3DEN\Data\CfgWrapperUI\Cursors\3DENTransformRotate180_ca.paa";
		};
		class 3DENTransformRotate225: 3DEN
		{
			color[] = {0, 1, 1, 1};
			hotspotX = 0.5;
			hotspotY = 0.5;
			texture = "\a3\3DEN\Data\CfgWrapperUI\Cursors\3DENTransformRotate225_ca.paa";
		};
		class 3DENTransformRotate270: 3DEN
		{
			color[] = {0, 1, 1, 1};
			hotspotX = 0.5;
			hotspotY = 0.5;
			texture = "\a3\3DEN\Data\CfgWrapperUI\Cursors\3DENTransformRotate270_ca.paa";
		};
		class 3DENTransformRotate315: 3DEN
		{
			color[] = {0, 1, 1, 1};
			hotspotX = 0.5;
			hotspotY = 0.5;
			texture = "\a3\3DEN\Data\CfgWrapperUI\Cursors\3DENTransformRotate315_ca.paa";
		};
		class 3DENTransformRotate45: 3DEN
		{
			color[] = {0, 1, 1, 1};
			hotspotX = 0.5;
			hotspotY = 0.5;
			texture = "\a3\3DEN\Data\CfgWrapperUI\Cursors\3DENTransformRotate45_ca.paa";
		};
		class 3DENTransformRotate90: 3DEN
		{
			color[] = {0, 1, 1, 1};
			hotspotX = 0.5;
			hotspotY = 0.5;
			texture = "\a3\3DEN\Data\CfgWrapperUI\Cursors\3DENTransformRotate90_ca.paa";
		};
		class 3DENTransformScale0: 3DEN
		{
			color[] = {0, 1, 1, 1};
			hotspotX = 0.5;
			hotspotY = 0.5;
			texture = "\a3\3DEN\Data\CfgWrapperUI\Cursors\3DENTransformScale0_ca.paa";
		};
		class 3DENTransformScale135: 3DEN
		{
			color[] = {0, 1, 1, 1};
			hotspotX = 0.5;
			hotspotY = 0.5;
			texture = "\a3\3DEN\Data\CfgWrapperUI\Cursors\3DENTransformScale135_ca.paa";
		};
		class 3DENTransformScale45: 3DEN
		{
			color[] = {0, 1, 1, 1};
			hotspotX = 0.5;
			hotspotY = 0.5;
			texture = "\a3\3DEN\Data\CfgWrapperUI\Cursors\3DENTransformScale45_ca.paa";
		};
		class 3DENTransformScale90: 3DEN
		{
			color[] = {0, 1, 1, 1};
			hotspotX = 0.5;
			hotspotY = 0.5;
			texture = "\a3\3DEN\Data\CfgWrapperUI\Cursors\3DENTransformScale90_ca.paa";
		};
		class Arrow
		{
			color[] = {1, 1, 1, 1};
			height = 32;
			hotspotX = 0.1875;
			hotspotY = 0.03125;
			shadow = 0;
			texture = "\A3\ui_f\data\gui\cfg\cursors\arrow_gs.paa";
			width = 32;
		};
		class Curator
		{
			color[] = {1, 1, 1, 1};
			height = 32;
			hotspotX = 0.1875;
			hotspotY = 0;
			texture = "\a3\Ui_F_Curator\Data\CfgWrapperUI\Cursors\Curator_ca.paa";
			width = 32;
		};
		class CuratorDisconnect: Curator
		{
			color[] = {1, 0.5, 0, 1};
			hotspotX = 0.1875;
			hotspotY = 0;
			texture = "\a3\Ui_F_Curator\Data\CfgWrapperUI\Cursors\CuratorDisconnect_ca.paa";
		};
		class CuratorGroup: Curator
		{
			color[] = {1, 1, 1, 1};
			hotspotX = 0.1875;
			hotspotY = 0;
			texture = "\a3\Ui_F_Curator\Data\CfgWrapperUI\Cursors\CuratorGroup_ca.paa";
		};
		class CuratorMove: Curator
		{
			color[] = {0, 1, 1, 1};
			hotspotX = 0.5;
			hotspotY = 0.5;
			texture = "\a3\Ui_F_Curator\Data\CfgWrapperUI\Cursors\CuratorMove_ca.paa";
		};
		class CuratorMoveDisabled: Curator
		{
			color[] = {1, 0.5, 0, 1};
			hotspotX = 0.5;
			hotspotY = 0.5;
			texture = "\a3\Ui_F_Curator\Data\CfgWrapperUI\Cursors\CuratorMoveDisabled_ca.paa";
		};
		class CuratorMoveIn: Curator
		{
			color[] = {0, 1, 1, 1};
			hotspotX = 0.5;
			hotspotY = 0.5;
			texture = "\a3\Ui_F_Curator\Data\CfgWrapperUI\Cursors\CuratorMoveIn_ca.paa";
		};
		class CuratorMoveInDisabled: Curator
		{
			color[] = {1, 0.5, 0, 1};
			hotspotX = 0.5;
			hotspotY = 0.5;
			texture = "\a3\Ui_F_Curator\Data\CfgWrapperUI\Cursors\CuratorMoveInDisabled_ca.paa";
		};
		class CuratorMoveSnap: Curator
		{
			color[] = {0, 1, 1, 1};
			hotspotX = 0.5;
			hotspotY = 0.5;
			texture = "\a3\Ui_F_Curator\Data\CfgWrapperUI\Cursors\CuratorMoveSnap_ca.paa";
		};
		class CuratorMoveZ: Curator
		{
			color[] = {0, 1, 1, 1};
			hotspotX = 0.5;
			hotspotY = 0.5;
			texture = "\a3\Ui_F_Curator\Data\CfgWrapperUI\Cursors\CuratorMoveZ_ca.paa";
		};
		class CuratorPlace: Curator
		{
			color[] = {1, 1, 1, 1};
			hotspotX = 0.1875;
			hotspotY = 0;
			texture = "\a3\Ui_F_Curator\Data\CfgWrapperUI\Cursors\CuratorPlace_ca.paa";
		};
		class CuratorPlaceDisabled: Curator
		{
			color[] = {1, 0.5, 0, 1};
			hotspotX = 0.1875;
			hotspotY = 0;
			texture = "\a3\Ui_F_Curator\Data\CfgWrapperUI\Cursors\CuratorPlaceDisabled_ca.paa";
		};
		class CuratorPlaceMulti: Curator
		{
			color[] = {1, 1, 1, 1};
			hotspotX = 0.1875;
			hotspotY = 0;
			texture = "\a3\Ui_F_Curator\Data\CfgWrapperUI\Cursors\CuratorPlaceMulti_ca.paa";
		};
		class CuratorPlaceWaypoint: Curator
		{
			color[] = {0.5, 1, 0.5, 1};
			hotspotX = 0.5;
			hotspotY = 0.5;
			texture = "\a3\Ui_F_Curator\Data\CfgWrapperUI\Cursors\CuratorPlaceWaypoint_ca.paa";
		};
		class CuratorPlaceWaypointCycle: Curator
		{
			color[] = {0.5, 1, 0.5, 1};
			hotspotX = 0.5;
			hotspotY = 0.5;
			texture = "\a3\Ui_F_Curator\Data\CfgWrapperUI\Cursors\CuratorPlaceWaypointCycle_ca.paa";
		};
		class CuratorPlaceWaypointDestroy: Curator
		{
			color[] = {1, 0, 0, 1};
			hotspotX = 0.5;
			hotspotY = 0.5;
			texture = "\a3\Ui_F_Curator\Data\CfgWrapperUI\Cursors\CuratorPlaceWaypointDestroy_ca.paa";
		};
		class CuratorPlaceWaypointDestroyMulti: Curator
		{
			color[] = {1, 0, 0, 1};
			hotspotX = 0.5;
			hotspotY = 0.5;
			texture = "\a3\Ui_F_Curator\Data\CfgWrapperUI\Cursors\CuratorPlaceWaypointDestroyMulti_ca.paa";
		};
		class CuratorPlaceWaypointGetIn: Curator
		{
			color[] = {0.5, 1, 0.5, 1};
			hotspotX = 0.5;
			hotspotY = 0.5;
			texture = "\a3\Ui_F_Curator\Data\CfgWrapperUI\Cursors\CuratorPlaceWaypointGetIn_ca.paa";
		};
		class CuratorPlaceWaypointGetInMulti: Curator
		{
			color[] = {0.5, 1, 0.5, 1};
			hotspotX = 0.5;
			hotspotY = 0.5;
			texture = "\a3\Ui_F_Curator\Data\CfgWrapperUI\Cursors\CuratorPlaceWaypointGetInMulti_ca.paa";
		};
		class CuratorPlaceWaypointHook: Curator
		{
			color[] = {0.5, 1, 0.5, 1};
			hotspotX = 0.5;
			hotspotY = 0.5;
			texture = "\a3\Ui_F_Curator\Data\CfgWrapperUI\Cursors\CuratorPlaceWaypointHook_ca.paa";
		};
		class CuratorPlaceWaypointHookMulti: Curator
		{
			color[] = {0.5, 1, 0.5, 1};
			hotspotX = 0.5;
			hotspotY = 0.5;
			texture = "\a3\Ui_F_Curator\Data\CfgWrapperUI\Cursors\CuratorPlaceWaypointHookMulti_ca.paa";
		};
		class CuratorPlaceWaypointMulti: Curator
		{
			color[] = {0.5, 1, 0.5, 1};
			hotspotX = 0.5;
			hotspotY = 0.5;
			texture = "\a3\Ui_F_Curator\Data\CfgWrapperUI\Cursors\CuratorPlaceWaypointMulti_ca.paa";
		};
		class CuratorRotate: Curator
		{
			color[] = {0, 1, 1, 1};
			hotspotX = 0.5;
			hotspotY = 0.5;
			texture = "\a3\Ui_F_Curator\Data\CfgWrapperUI\Cursors\CuratorRotate_ca.paa";
		};
		class CuratorSelect: Curator
		{
			color[] = {1, 1, 1, 1};
			hotspotX = 0.5;
			hotspotY = 0.5;
			texture = "\a3\Ui_F_Curator\Data\CfgWrapperUI\Cursors\CuratorSelect_ca.paa";
		};
		class CuratorSync: Curator
		{
			color[] = {1, 1, 1, 1};
			hotspotX = 0.1875;
			hotspotY = 0;
			texture = "\a3\Ui_F_Curator\Data\CfgWrapperUI\Cursors\CuratorSync_ca.paa";
		};
		class Debug: Arrow
		{
			color[] = {1, 1, 0.7, 1};
			shadow = 0;
		};
		class HC_move: Track
		{
			color[] = {0, 0.6, 0, 1};
			texture = "\A3\ui_f\data\gui\cfg\cursors\hc_move_gs.paa";
		};
		class HC_overEnemy: Track
		{
			texture = "\A3\ui_f\data\gui\cfg\cursors\hc_overEnemy_gs.paa";
		};
		class HC_overFriendly: Track
		{
			color[] = {0, 0.6, 0, 1};
			texture = "\A3\ui_f\data\gui\cfg\cursors\hc_overFriendly_gs.paa";
		};
		class HC_overMission: Track
		{
			color[] = {0.85, 0.4, 0, 1};
			texture = "\A3\ui_f\data\gui\cfg\cursors\hc_overMission_gs.paa";
		};
		class HC_unsel: Track
		{
			texture = "\A3\ui_f\data\gui\cfg\cursors\hc_unsel_gs.paa";
		};
		class Move
		{
			color[] = {0, 0.6, 0, 1};
			height = 24;
			hotspotX = 0.5;
			hotspotY = 0.5;
			shadow = 0;
			texture = "\A3\ui_f\data\gui\cfg\cursors\move_gs.paa";
			width = 24;
		};
		class Move3D
		{
			color[] = {0, 0.6, 0, 1};
			height = 32;
			hotspotX = 0;
			hotspotY = 0;
			shadow = 0;
			texture = "\A3\ui_f\data\gui\cfg\cursors\move3D_gs.paa";
			width = 32;
		};
		class Raise3D
		{
			color[] = {0, 0.8, 1, 1};
			height = 32;
			hotspotX = 0;
			hotspotY = 0;
			shadow = 0;
			texture = "\A3\ui_f\data\gui\cfg\cursors\raise3D_gs.paa";
			width = 32;
		};
		class Rotate
		{
			color[] = {0.1, 0.1, 0.9, 1};
			height = 24;
			hotspotX = 0.5;
			hotspotY = 0.5;
			shadow = 0;
			texture = "\A3\ui_f\data\gui\cfg\cursors\rotate_gs.paa";
			width = 24;
		};
		class Rotate3D
		{
			color[] = {0.1, 0.1, 0.9, 1};
			height = 32;
			hotspotX = 0;
			hotspotY = 0;
			shadow = 0;
			texture = "\A3\ui_f\data\gui\cfg\cursors\rotate3D_gs.paa";
			width = 32;
		};
		class Scroll
		{
			color[] = {0.8, 0.6, 0, 1};
			height = 24;
			hotspotX = 0.5;
			hotspotY = 0.5;
			shadow = 0;
			texture = "\A3\ui_f\data\gui\cfg\cursors\scroll_gs.paa";
			width = 24;
		};
		class Track
		{
			color[] = {0.7, 0.1, 0, 1};
			height = 24;
			hotspotX = 0.5;
			hotspotY = 0.5;
			shadow = 0;
			texture = "\A3\ui_f\data\gui\cfg\cursors\track_gs.paa";
			width = 24;
		};
		class Track3D
		{
			color[] = {0.7, 0.1, 0, 1};
			height = 32;
			hotspotX = 0;
			hotspotY = 0;
			shadow = 0;
			texture = "\A3\ui_f\data\gui\cfg\cursors\track3D_gs.paa";
			width = 32;
		};
		class Wait
		{
			color[] = {0.7, 0.7, 0.7, 1};
			height = 24;
			hotspotX = 0.5;
			hotspotY = 0.5;
			shadow = 0;
			texture = "\A3\ui_f\data\gui\cfg\cursors\wait_gs.paa";
			width = 24;
		};
	};
	class GroupBox
	{
		alpha = 0.2;
	};
	class GroupBox2
	{
		alpha = 0.5;
		texture = "#(argb,8,8,3)color(1,1,1,1)";
	};
	class ListBox
	{
		arrowEmpty = "\A3\ui_f\data\gui\cfg\slider\arrowEmpty_ca.paa";
		arrowFull = "\A3\ui_f\data\gui\cfg\slider\arrowFull_ca.paa";
		border = "\A3\ui_f\data\gui\cfg\slider\border_ca.paa";
		boxHorz = "#(argb,8,8,3)color(0,0,0,0)";
		boxLeft = "#(argb,8,8,3)color(0,0,0,0)";
		boxRight = "#(argb,8,8,3)color(0,0,0,0)";
		line = "#(argb,8,8,3)color(0,0,0,0)";
		thumb = "\A3\ui_f\data\gui\cfg\slider\thumb_ca.paa";
	};
	class Slider
	{
		arrowEmpty = "\A3\ui_f\data\gui\cfg\slider\arrowEmpty_ca.paa";
		arrowFull = "\A3\ui_f\data\gui\cfg\slider\arrowFull_ca.paa";
		border = "\A3\ui_f\data\gui\cfg\slider\border_ca.paa";
		thumb = "\A3\ui_f\data\gui\cfg\slider\thumb_ca.paa";
	};
	class TitleBar
	{
		alpha = 0.3;
		texture = "#(argb,8,8,3)color(1,1,1,1)";
	};
};
