class CfgCommunicationMenu
{
	class A
	{
		expression = "%1";
		iconText = "A";
		text = "Alpha";
	};
	class ArtilleryBase
	{
		cursor = "\A3\ui_f\data\igui\cfg\cursors\iconCursorSupport_ca.paa";
		enable = "cursorOnGround";
		icon = "\a3\Ui_f\data\GUI\Cfg\CommunicationMenu\artillery_ca.paa";
		text = "Artillery strike";
	};
	class Attack
	{
		expression = "%1";
		icon = "\a3\Ui_f\data\GUI\Cfg\CommunicationMenu\attack_ca.paa";
		text = "Attack %1";
	};
	class B
	{
		expression = "%1";
		iconText = "B";
		text = "Bravo";
	};
	class C
	{
		expression = "%1";
		iconText = "C";
		text = "Charlie";
	};
	class Call
	{
		expression = "%1";
		icon = "\a3\Ui_f\data\GUI\Cfg\CommunicationMenu\call_ca.paa";
		text = "Call %1";
	};
	class CASBase
	{
		cursor = "\A3\ui_f\data\igui\cfg\cursors\iconCursorSupport_ca.paa";
		enable = "cursorOnGround";
		icon = "\a3\Ui_f\data\GUI\Cfg\CommunicationMenu\cas_ca.paa";
	};
	class D
	{
		expression = "%1";
		iconText = "D";
		text = "Delta";
	};
	class Default
	{
		cursor = "";
		enable = "";
		expression = "";
		icon = "\a3\Ui_f\data\GUI\Cfg\CommunicationMenu\call_ca.paa";
		iconText = "";
		submenu = "";
		text = "";
	};
	class Defend
	{
		expression = "%1";
		icon = "\a3\Ui_f\data\GUI\Cfg\CommunicationMenu\defend_ca.paa";
		text = "Defend %1";
	};
	class E
	{
		expression = "%1";
		iconText = "E";
		text = "Echo";
	};
	class F
	{
		expression = "%1";
		iconText = "F";
		text = "Foxtrot";
	};
	class G
	{
		expression = "%1";
		iconText = "G";
		text = "Golf";
	};
	class H
	{
		expression = "%1";
		iconText = "H";
		text = "Hotel";
	};
	class I
	{
		expression = "%1";
		iconText = "I";
		text = "India";
	};
	class J
	{
		expression = "%1";
		iconText = "J";
		text = "Juliet";
	};
	class K
	{
		expression = "%1";
		iconText = "K";
		text = "Kilo";
	};
	class L
	{
		expression = "%1";
		iconText = "L";
		text = "Lima";
	};
	class M
	{
		expression = "%1";
		iconText = "M";
		text = "Mike";
	};
	class moduleMPTypeDefense_evac: TransportBase
	{
		expression = "[2,playerside] call BIS_fnc_moduleMPTypeDefense_heliEvacLocal;";
		text = "Evacuation Helicopter";
	};
	class MortarBase
	{
		cursor = "\A3\ui_f\data\igui\cfg\cursors\iconCursorSupport_ca.paa";
		enable = "cursorOnGround";
		icon = "\a3\Ui_f\data\GUI\Cfg\CommunicationMenu\mortar_ca.paa";
	};
	class N
	{
		expression = "%1";
		iconText = "N";
		text = "November";
	};
	class O
	{
		expression = "%1";
		iconText = "O";
		text = "Oscar";
	};
	class P
	{
		expression = "%1";
		iconText = "P";
		text = "Papa";
	};
	class Q
	{
		expression = "%1";
		iconText = "Q";
		text = "Quebec";
	};
	class R
	{
		expression = "%1";
		iconText = "R";
		text = "Romeo";
	};
	class S
	{
		expression = "%1";
		iconText = "S";
		text = "Sierra";
	};
	class SupplyDropBase
	{
		cursor = "\A3\ui_f\data\igui\cfg\cursors\iconCursorSupport_ca.paa";
		enable = "cursorOnGround";
		icon = "\a3\Ui_f\data\GUI\Cfg\CommunicationMenu\supplydrop_ca.paa";
		text = "Supply drop";
	};
	class Support_Report_Done
	{
		expression = "player setVariable ['BIS_SUPP_supporting', FALSE]; call BIS_SUPP_refreshMainWindow";
		text = "Report: Support done";
	};
	class Support_Report_Failed
	{
		expression = "player setVariable ['BIS_SUPP_failed', TRUE]";
		text = "Report: Support failed";
	};
	class Support_Request_Artillery: ArtilleryBase
	{
		expression = "player setVariable ['BIS_SUPP_request', ['Artillery', _pos]]";
	};
	class Support_Request_CAS_Bombing: CASBase
	{
		expression = "player setVariable ['BIS_SUPP_request', ['CAS_Bombing', _pos]]";
		text = "CAS (bombing run)";
	};
	class Support_Request_CAS_Heli: CASBase
	{
		expression = "player setVariable ['BIS_SUPP_request', ['CAS_Heli', _pos]]";
		icon = "\a3\Ui_f\data\GUI\Cfg\CommunicationMenu\casheli_ca.paa";
		text = "CAS (helicopter attack)";
	};
	class Support_Request_Drop: SupplyDropBase
	{
		expression = "player setVariable ['BIS_SUPP_request', ['Drop', _pos]]";
	};
	class Support_Request_Transport: TransportBase
	{
		expression = "player setVariable ['BIS_SUPP_request', ['Transport', _pos]]";
	};
	class T
	{
		expression = "%1";
		iconText = "T";
		text = "Tango";
	};
	class Training_InstructorFigure
	{
		cursor = "\a3\Ui_f\data\IGUI\Cfg\Cursors\iconCursorSupport_ca.paa";
		enable = "1";
		expression = "[ 'ShowFigures',[ '%1' ] ] call BIS_fnc_InstructorFigure";
		icon = "\a3\Ui_f\data\GUI\Cfg\CommunicationMenu\instructor_ca.paa";
		removeAfterExpressionCall = 0;
		text = "%1";
	};
	class TransportBase
	{
		cursor = "\A3\ui_f\data\igui\cfg\cursors\iconCursorSupport_ca.paa";
		enable = "cursorOnGround";
		icon = "\a3\Ui_f\data\GUI\Cfg\CommunicationMenu\transport_ca.paa";
		text = "Helicopter transport";
	};
	class U
	{
		expression = "%1";
		iconText = "U";
		text = "Uniform";
	};
	class V
	{
		expression = "%1";
		iconText = "V";
		text = "Victor";
	};
	class W
	{
		expression = "%1";
		iconText = "W";
		text = "Whiskey";
	};
	class X
	{
		expression = "%1";
		iconText = "X";
		text = "X-Ray";
	};
	class Y
	{
		expression = "%1";
		iconText = "Y";
		text = "Yankee";
	};
	class Z
	{
		expression = "%1";
		iconText = "Z";
		text = "Zulu";
	};
};
