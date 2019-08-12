class RscGUIEditor
{
	duration = 1e+011;
	enablesimulation = 0;
	fadein = 0;
	idd = 999;
	movingEnable = 1;
	onload = "uinamespace setvariable ['BIS_RscGUIEditor',_this select 0];";
	onunload = "uinamespace setvariable ['BIS_RscGUIEditor',nil];";
	path = "\A3\functions_f\gui\editor\";
	class controls
	{
		class Button_0: RscButton
		{
			idc = 1600;
			text = "";
			x = -3;
			y = -3;
		};
		class Button_1: Button_0
		{
			idc = 1601;
		};
		class Button_10: Button_0
		{
			idc = 1610;
		};
		class Button_11: Button_0
		{
			idc = 1611;
		};
		class Button_12: Button_0
		{
			idc = 1612;
		};
		class Button_13: Button_0
		{
			idc = 1613;
		};
		class Button_14: Button_0
		{
			idc = 1614;
		};
		class Button_15: Button_0
		{
			idc = 1615;
		};
		class Button_16: Button_0
		{
			idc = 1616;
		};
		class Button_17: Button_0
		{
			idc = 1617;
		};
		class Button_18: Button_0
		{
			idc = 1618;
		};
		class Button_19: Button_0
		{
			idc = 1619;
		};
		class Button_2: Button_0
		{
			idc = 1602;
		};
		class Button_20: Button_0
		{
			idc = 1620;
		};
		class Button_21: Button_0
		{
			idc = 1621;
		};
		class Button_22: Button_0
		{
			idc = 1622;
		};
		class Button_23: Button_0
		{
			idc = 1623;
		};
		class Button_24: Button_0
		{
			idc = 1624;
		};
		class Button_25: Button_0
		{
			idc = 1625;
		};
		class Button_26: Button_0
		{
			idc = 1626;
		};
		class Button_27: Button_0
		{
			idc = 1627;
		};
		class Button_28: Button_0
		{
			idc = 1628;
		};
		class Button_29: Button_0
		{
			idc = 1629;
		};
		class Button_3: Button_0
		{
			idc = 1603;
		};
		class Button_30: Button_0
		{
			idc = 1630;
		};
		class Button_31: Button_0
		{
			idc = 1631;
		};
		class Button_32: Button_0
		{
			idc = 1632;
		};
		class Button_33: Button_0
		{
			idc = 1633;
		};
		class Button_34: Button_0
		{
			idc = 1634;
		};
		class Button_35: Button_0
		{
			idc = 1635;
		};
		class Button_36: Button_0
		{
			idc = 1636;
		};
		class Button_37: Button_0
		{
			idc = 1637;
		};
		class Button_38: Button_0
		{
			idc = 1638;
		};
		class Button_39: Button_0
		{
			idc = 1639;
		};
		class Button_4: Button_0
		{
			idc = 1604;
		};
		class Button_40: Button_0
		{
			idc = 1640;
		};
		class Button_41: Button_0
		{
			idc = 1641;
		};
		class Button_42: Button_0
		{
			idc = 1642;
		};
		class Button_43: Button_0
		{
			idc = 1643;
		};
		class Button_44: Button_0
		{
			idc = 1644;
		};
		class Button_45: Button_0
		{
			idc = 1645;
		};
		class Button_46: Button_0
		{
			idc = 1646;
		};
		class Button_47: Button_0
		{
			idc = 1647;
		};
		class Button_48: Button_0
		{
			idc = 1648;
		};
		class Button_49: Button_0
		{
			idc = 1649;
		};
		class Button_5: Button_0
		{
			idc = 1605;
		};
		class Button_50: Button_0
		{
			idc = 1650;
		};
		class Button_51: Button_0
		{
			idc = 1651;
		};
		class Button_52: Button_0
		{
			idc = 1652;
		};
		class Button_53: Button_0
		{
			idc = 1653;
		};
		class Button_54: Button_0
		{
			idc = 1654;
		};
		class Button_55: Button_0
		{
			idc = 1655;
		};
		class Button_56: Button_0
		{
			idc = 1656;
		};
		class Button_57: Button_0
		{
			idc = 1657;
		};
		class Button_58: Button_0
		{
			idc = 1658;
		};
		class Button_59: Button_0
		{
			idc = 1659;
		};
		class Button_6: Button_0
		{
			idc = 1606;
		};
		class Button_60: Button_0
		{
			idc = 1660;
		};
		class Button_61: Button_0
		{
			idc = 1661;
		};
		class Button_62: Button_0
		{
			idc = 1662;
		};
		class Button_63: Button_0
		{
			idc = 1663;
		};
		class Button_64: Button_0
		{
			idc = 1664;
		};
		class Button_65: Button_0
		{
			idc = 1665;
		};
		class Button_66: Button_0
		{
			idc = 1666;
		};
		class Button_67: Button_0
		{
			idc = 1667;
		};
		class Button_68: Button_0
		{
			idc = 1668;
		};
		class Button_69: Button_0
		{
			idc = 1669;
		};
		class Button_7: Button_0
		{
			idc = 1607;
		};
		class Button_70: Button_0
		{
			idc = 1670;
		};
		class Button_71: Button_0
		{
			idc = 1671;
		};
		class Button_72: Button_0
		{
			idc = 1672;
		};
		class Button_73: Button_0
		{
			idc = 1673;
		};
		class Button_74: Button_0
		{
			idc = 1674;
		};
		class Button_75: Button_0
		{
			idc = 1675;
		};
		class Button_76: Button_0
		{
			idc = 1676;
		};
		class Button_77: Button_0
		{
			idc = 1677;
		};
		class Button_78: Button_0
		{
			idc = 1678;
		};
		class Button_79: Button_0
		{
			idc = 1679;
		};
		class Button_8: Button_0
		{
			idc = 1608;
		};
		class Button_80: Button_0
		{
			idc = 1680;
		};
		class Button_81: Button_0
		{
			idc = 1681;
		};
		class Button_82: Button_0
		{
			idc = 1682;
		};
		class Button_83: Button_0
		{
			idc = 1683;
		};
		class Button_84: Button_0
		{
			idc = 1684;
		};
		class Button_85: Button_0
		{
			idc = 1685;
		};
		class Button_86: Button_0
		{
			idc = 1686;
		};
		class Button_87: Button_0
		{
			idc = 1687;
		};
		class Button_88: Button_0
		{
			idc = 1688;
		};
		class Button_89: Button_0
		{
			idc = 1689;
		};
		class Button_9: Button_0
		{
			idc = 1609;
		};
		class Button_90: Button_0
		{
			idc = 1690;
		};
		class Button_91: Button_0
		{
			idc = 1691;
		};
		class Button_92: Button_0
		{
			idc = 1692;
		};
		class Button_93: Button_0
		{
			idc = 1693;
		};
		class Button_94: Button_0
		{
			idc = 1694;
		};
		class Button_95: Button_0
		{
			idc = 1695;
		};
		class Button_96: Button_0
		{
			idc = 1696;
		};
		class Button_97: Button_0
		{
			idc = 1697;
		};
		class Button_98: Button_0
		{
			idc = 1698;
		};
		class Button_99: Button_0
		{
			idc = 1699;
		};
		class ButtonMenu_0: RscButtonMenu
		{
			idc = 2400;
			text = "";
			x = -3;
			y = -3;
		};
		class ButtonMenu_1: ButtonMenu_0
		{
			idc = 2401;
		};
		class ButtonMenu_10: ButtonMenu_0
		{
			idc = 2410;
		};
		class ButtonMenu_11: ButtonMenu_0
		{
			idc = 2411;
		};
		class ButtonMenu_12: ButtonMenu_0
		{
			idc = 2412;
		};
		class ButtonMenu_13: ButtonMenu_0
		{
			idc = 2413;
		};
		class ButtonMenu_14: ButtonMenu_0
		{
			idc = 2414;
		};
		class ButtonMenu_15: ButtonMenu_0
		{
			idc = 2415;
		};
		class ButtonMenu_16: ButtonMenu_0
		{
			idc = 2416;
		};
		class ButtonMenu_17: ButtonMenu_0
		{
			idc = 2417;
		};
		class ButtonMenu_18: ButtonMenu_0
		{
			idc = 2418;
		};
		class ButtonMenu_19: ButtonMenu_0
		{
			idc = 2419;
		};
		class ButtonMenu_2: ButtonMenu_0
		{
			idc = 2402;
		};
		class ButtonMenu_20: ButtonMenu_0
		{
			idc = 2420;
		};
		class ButtonMenu_21: ButtonMenu_0
		{
			idc = 2421;
		};
		class ButtonMenu_22: ButtonMenu_0
		{
			idc = 2422;
		};
		class ButtonMenu_23: ButtonMenu_0
		{
			idc = 2423;
		};
		class ButtonMenu_24: ButtonMenu_0
		{
			idc = 2424;
		};
		class ButtonMenu_25: ButtonMenu_0
		{
			idc = 2425;
		};
		class ButtonMenu_26: ButtonMenu_0
		{
			idc = 2426;
		};
		class ButtonMenu_27: ButtonMenu_0
		{
			idc = 2427;
		};
		class ButtonMenu_28: ButtonMenu_0
		{
			idc = 2428;
		};
		class ButtonMenu_29: ButtonMenu_0
		{
			idc = 2429;
		};
		class ButtonMenu_3: ButtonMenu_0
		{
			idc = 2403;
		};
		class ButtonMenu_30: ButtonMenu_0
		{
			idc = 2430;
		};
		class ButtonMenu_31: ButtonMenu_0
		{
			idc = 2431;
		};
		class ButtonMenu_32: ButtonMenu_0
		{
			idc = 2432;
		};
		class ButtonMenu_33: ButtonMenu_0
		{
			idc = 2433;
		};
		class ButtonMenu_34: ButtonMenu_0
		{
			idc = 2434;
		};
		class ButtonMenu_35: ButtonMenu_0
		{
			idc = 2435;
		};
		class ButtonMenu_36: ButtonMenu_0
		{
			idc = 2436;
		};
		class ButtonMenu_37: ButtonMenu_0
		{
			idc = 2437;
		};
		class ButtonMenu_38: ButtonMenu_0
		{
			idc = 2438;
		};
		class ButtonMenu_39: ButtonMenu_0
		{
			idc = 2439;
		};
		class ButtonMenu_4: ButtonMenu_0
		{
			idc = 2404;
		};
		class ButtonMenu_40: ButtonMenu_0
		{
			idc = 2440;
		};
		class ButtonMenu_41: ButtonMenu_0
		{
			idc = 2441;
		};
		class ButtonMenu_42: ButtonMenu_0
		{
			idc = 2442;
		};
		class ButtonMenu_43: ButtonMenu_0
		{
			idc = 2443;
		};
		class ButtonMenu_44: ButtonMenu_0
		{
			idc = 2444;
		};
		class ButtonMenu_45: ButtonMenu_0
		{
			idc = 2445;
		};
		class ButtonMenu_46: ButtonMenu_0
		{
			idc = 2446;
		};
		class ButtonMenu_47: ButtonMenu_0
		{
			idc = 2447;
		};
		class ButtonMenu_48: ButtonMenu_0
		{
			idc = 2448;
		};
		class ButtonMenu_49: ButtonMenu_0
		{
			idc = 2449;
		};
		class ButtonMenu_5: ButtonMenu_0
		{
			idc = 2405;
		};
		class ButtonMenu_50: ButtonMenu_0
		{
			idc = 2450;
		};
		class ButtonMenu_51: ButtonMenu_0
		{
			idc = 2451;
		};
		class ButtonMenu_52: ButtonMenu_0
		{
			idc = 2452;
		};
		class ButtonMenu_53: ButtonMenu_0
		{
			idc = 2453;
		};
		class ButtonMenu_54: ButtonMenu_0
		{
			idc = 2454;
		};
		class ButtonMenu_55: ButtonMenu_0
		{
			idc = 2455;
		};
		class ButtonMenu_56: ButtonMenu_0
		{
			idc = 2456;
		};
		class ButtonMenu_57: ButtonMenu_0
		{
			idc = 2457;
		};
		class ButtonMenu_58: ButtonMenu_0
		{
			idc = 2458;
		};
		class ButtonMenu_59: ButtonMenu_0
		{
			idc = 2459;
		};
		class ButtonMenu_6: ButtonMenu_0
		{
			idc = 2406;
		};
		class ButtonMenu_60: ButtonMenu_0
		{
			idc = 2460;
		};
		class ButtonMenu_61: ButtonMenu_0
		{
			idc = 2461;
		};
		class ButtonMenu_62: ButtonMenu_0
		{
			idc = 2462;
		};
		class ButtonMenu_63: ButtonMenu_0
		{
			idc = 2463;
		};
		class ButtonMenu_64: ButtonMenu_0
		{
			idc = 2464;
		};
		class ButtonMenu_65: ButtonMenu_0
		{
			idc = 2465;
		};
		class ButtonMenu_66: ButtonMenu_0
		{
			idc = 2466;
		};
		class ButtonMenu_67: ButtonMenu_0
		{
			idc = 2467;
		};
		class ButtonMenu_68: ButtonMenu_0
		{
			idc = 2468;
		};
		class ButtonMenu_69: ButtonMenu_0
		{
			idc = 2469;
		};
		class ButtonMenu_7: ButtonMenu_0
		{
			idc = 2407;
		};
		class ButtonMenu_70: ButtonMenu_0
		{
			idc = 2470;
		};
		class ButtonMenu_71: ButtonMenu_0
		{
			idc = 2471;
		};
		class ButtonMenu_72: ButtonMenu_0
		{
			idc = 2472;
		};
		class ButtonMenu_73: ButtonMenu_0
		{
			idc = 2473;
		};
		class ButtonMenu_74: ButtonMenu_0
		{
			idc = 2474;
		};
		class ButtonMenu_75: ButtonMenu_0
		{
			idc = 2475;
		};
		class ButtonMenu_76: ButtonMenu_0
		{
			idc = 2476;
		};
		class ButtonMenu_77: ButtonMenu_0
		{
			idc = 2477;
		};
		class ButtonMenu_78: ButtonMenu_0
		{
			idc = 2478;
		};
		class ButtonMenu_79: ButtonMenu_0
		{
			idc = 2479;
		};
		class ButtonMenu_8: ButtonMenu_0
		{
			idc = 2408;
		};
		class ButtonMenu_80: ButtonMenu_0
		{
			idc = 2480;
		};
		class ButtonMenu_81: ButtonMenu_0
		{
			idc = 2481;
		};
		class ButtonMenu_82: ButtonMenu_0
		{
			idc = 2482;
		};
		class ButtonMenu_83: ButtonMenu_0
		{
			idc = 2483;
		};
		class ButtonMenu_84: ButtonMenu_0
		{
			idc = 2484;
		};
		class ButtonMenu_85: ButtonMenu_0
		{
			idc = 2485;
		};
		class ButtonMenu_86: ButtonMenu_0
		{
			idc = 2486;
		};
		class ButtonMenu_87: ButtonMenu_0
		{
			idc = 2487;
		};
		class ButtonMenu_88: ButtonMenu_0
		{
			idc = 2488;
		};
		class ButtonMenu_89: ButtonMenu_0
		{
			idc = 2489;
		};
		class ButtonMenu_9: ButtonMenu_0
		{
			idc = 2409;
		};
		class ButtonMenu_90: ButtonMenu_0
		{
			idc = 2490;
		};
		class ButtonMenu_91: ButtonMenu_0
		{
			idc = 2491;
		};
		class ButtonMenu_92: ButtonMenu_0
		{
			idc = 2492;
		};
		class ButtonMenu_93: ButtonMenu_0
		{
			idc = 2493;
		};
		class ButtonMenu_94: ButtonMenu_0
		{
			idc = 2494;
		};
		class ButtonMenu_95: ButtonMenu_0
		{
			idc = 2495;
		};
		class ButtonMenu_96: ButtonMenu_0
		{
			idc = 2496;
		};
		class ButtonMenu_97: ButtonMenu_0
		{
			idc = 2497;
		};
		class ButtonMenu_98: ButtonMenu_0
		{
			idc = 2498;
		};
		class ButtonMenu_99: ButtonMenu_0
		{
			idc = 2499;
		};
		class ButtonMenuCancel_0: RscButtonMenuCancel
		{
			idc = 2700;
			text = "";
			x = -3;
			y = -3;
		};
		class ButtonMenuCancel_1: ButtonMenuCancel_0
		{
			idc = 2701;
		};
		class ButtonMenuCancel_10: ButtonMenuCancel_0
		{
			idc = 2710;
		};
		class ButtonMenuCancel_11: ButtonMenuCancel_0
		{
			idc = 2711;
		};
		class ButtonMenuCancel_12: ButtonMenuCancel_0
		{
			idc = 2712;
		};
		class ButtonMenuCancel_13: ButtonMenuCancel_0
		{
			idc = 2713;
		};
		class ButtonMenuCancel_14: ButtonMenuCancel_0
		{
			idc = 2714;
		};
		class ButtonMenuCancel_15: ButtonMenuCancel_0
		{
			idc = 2715;
		};
		class ButtonMenuCancel_16: ButtonMenuCancel_0
		{
			idc = 2716;
		};
		class ButtonMenuCancel_17: ButtonMenuCancel_0
		{
			idc = 2717;
		};
		class ButtonMenuCancel_18: ButtonMenuCancel_0
		{
			idc = 2718;
		};
		class ButtonMenuCancel_19: ButtonMenuCancel_0
		{
			idc = 2719;
		};
		class ButtonMenuCancel_2: ButtonMenuCancel_0
		{
			idc = 2702;
		};
		class ButtonMenuCancel_20: ButtonMenuCancel_0
		{
			idc = 2720;
		};
		class ButtonMenuCancel_21: ButtonMenuCancel_0
		{
			idc = 2721;
		};
		class ButtonMenuCancel_22: ButtonMenuCancel_0
		{
			idc = 2722;
		};
		class ButtonMenuCancel_23: ButtonMenuCancel_0
		{
			idc = 2723;
		};
		class ButtonMenuCancel_24: ButtonMenuCancel_0
		{
			idc = 2724;
		};
		class ButtonMenuCancel_25: ButtonMenuCancel_0
		{
			idc = 2725;
		};
		class ButtonMenuCancel_26: ButtonMenuCancel_0
		{
			idc = 2726;
		};
		class ButtonMenuCancel_27: ButtonMenuCancel_0
		{
			idc = 2727;
		};
		class ButtonMenuCancel_28: ButtonMenuCancel_0
		{
			idc = 2728;
		};
		class ButtonMenuCancel_29: ButtonMenuCancel_0
		{
			idc = 2729;
		};
		class ButtonMenuCancel_3: ButtonMenuCancel_0
		{
			idc = 2703;
		};
		class ButtonMenuCancel_30: ButtonMenuCancel_0
		{
			idc = 2730;
		};
		class ButtonMenuCancel_31: ButtonMenuCancel_0
		{
			idc = 2731;
		};
		class ButtonMenuCancel_32: ButtonMenuCancel_0
		{
			idc = 2732;
		};
		class ButtonMenuCancel_33: ButtonMenuCancel_0
		{
			idc = 2733;
		};
		class ButtonMenuCancel_34: ButtonMenuCancel_0
		{
			idc = 2734;
		};
		class ButtonMenuCancel_35: ButtonMenuCancel_0
		{
			idc = 2735;
		};
		class ButtonMenuCancel_36: ButtonMenuCancel_0
		{
			idc = 2736;
		};
		class ButtonMenuCancel_37: ButtonMenuCancel_0
		{
			idc = 2737;
		};
		class ButtonMenuCancel_38: ButtonMenuCancel_0
		{
			idc = 2738;
		};
		class ButtonMenuCancel_39: ButtonMenuCancel_0
		{
			idc = 2739;
		};
		class ButtonMenuCancel_4: ButtonMenuCancel_0
		{
			idc = 2704;
		};
		class ButtonMenuCancel_40: ButtonMenuCancel_0
		{
			idc = 2740;
		};
		class ButtonMenuCancel_41: ButtonMenuCancel_0
		{
			idc = 2741;
		};
		class ButtonMenuCancel_42: ButtonMenuCancel_0
		{
			idc = 2742;
		};
		class ButtonMenuCancel_43: ButtonMenuCancel_0
		{
			idc = 2743;
		};
		class ButtonMenuCancel_44: ButtonMenuCancel_0
		{
			idc = 2744;
		};
		class ButtonMenuCancel_45: ButtonMenuCancel_0
		{
			idc = 2745;
		};
		class ButtonMenuCancel_46: ButtonMenuCancel_0
		{
			idc = 2746;
		};
		class ButtonMenuCancel_47: ButtonMenuCancel_0
		{
			idc = 2747;
		};
		class ButtonMenuCancel_48: ButtonMenuCancel_0
		{
			idc = 2748;
		};
		class ButtonMenuCancel_49: ButtonMenuCancel_0
		{
			idc = 2749;
		};
		class ButtonMenuCancel_5: ButtonMenuCancel_0
		{
			idc = 2705;
		};
		class ButtonMenuCancel_50: ButtonMenuCancel_0
		{
			idc = 2750;
		};
		class ButtonMenuCancel_51: ButtonMenuCancel_0
		{
			idc = 2751;
		};
		class ButtonMenuCancel_52: ButtonMenuCancel_0
		{
			idc = 2752;
		};
		class ButtonMenuCancel_53: ButtonMenuCancel_0
		{
			idc = 2753;
		};
		class ButtonMenuCancel_54: ButtonMenuCancel_0
		{
			idc = 2754;
		};
		class ButtonMenuCancel_55: ButtonMenuCancel_0
		{
			idc = 2755;
		};
		class ButtonMenuCancel_56: ButtonMenuCancel_0
		{
			idc = 2756;
		};
		class ButtonMenuCancel_57: ButtonMenuCancel_0
		{
			idc = 2757;
		};
		class ButtonMenuCancel_58: ButtonMenuCancel_0
		{
			idc = 2758;
		};
		class ButtonMenuCancel_59: ButtonMenuCancel_0
		{
			idc = 2759;
		};
		class ButtonMenuCancel_6: ButtonMenuCancel_0
		{
			idc = 2706;
		};
		class ButtonMenuCancel_60: ButtonMenuCancel_0
		{
			idc = 2760;
		};
		class ButtonMenuCancel_61: ButtonMenuCancel_0
		{
			idc = 2761;
		};
		class ButtonMenuCancel_62: ButtonMenuCancel_0
		{
			idc = 2762;
		};
		class ButtonMenuCancel_63: ButtonMenuCancel_0
		{
			idc = 2763;
		};
		class ButtonMenuCancel_64: ButtonMenuCancel_0
		{
			idc = 2764;
		};
		class ButtonMenuCancel_65: ButtonMenuCancel_0
		{
			idc = 2765;
		};
		class ButtonMenuCancel_66: ButtonMenuCancel_0
		{
			idc = 2766;
		};
		class ButtonMenuCancel_67: ButtonMenuCancel_0
		{
			idc = 2767;
		};
		class ButtonMenuCancel_68: ButtonMenuCancel_0
		{
			idc = 2768;
		};
		class ButtonMenuCancel_69: ButtonMenuCancel_0
		{
			idc = 2769;
		};
		class ButtonMenuCancel_7: ButtonMenuCancel_0
		{
			idc = 2707;
		};
		class ButtonMenuCancel_70: ButtonMenuCancel_0
		{
			idc = 2770;
		};
		class ButtonMenuCancel_71: ButtonMenuCancel_0
		{
			idc = 2771;
		};
		class ButtonMenuCancel_72: ButtonMenuCancel_0
		{
			idc = 2772;
		};
		class ButtonMenuCancel_73: ButtonMenuCancel_0
		{
			idc = 2773;
		};
		class ButtonMenuCancel_74: ButtonMenuCancel_0
		{
			idc = 2774;
		};
		class ButtonMenuCancel_75: ButtonMenuCancel_0
		{
			idc = 2775;
		};
		class ButtonMenuCancel_76: ButtonMenuCancel_0
		{
			idc = 2776;
		};
		class ButtonMenuCancel_77: ButtonMenuCancel_0
		{
			idc = 2777;
		};
		class ButtonMenuCancel_78: ButtonMenuCancel_0
		{
			idc = 2778;
		};
		class ButtonMenuCancel_79: ButtonMenuCancel_0
		{
			idc = 2779;
		};
		class ButtonMenuCancel_8: ButtonMenuCancel_0
		{
			idc = 2708;
		};
		class ButtonMenuCancel_80: ButtonMenuCancel_0
		{
			idc = 2780;
		};
		class ButtonMenuCancel_81: ButtonMenuCancel_0
		{
			idc = 2781;
		};
		class ButtonMenuCancel_82: ButtonMenuCancel_0
		{
			idc = 2782;
		};
		class ButtonMenuCancel_83: ButtonMenuCancel_0
		{
			idc = 2783;
		};
		class ButtonMenuCancel_84: ButtonMenuCancel_0
		{
			idc = 2784;
		};
		class ButtonMenuCancel_85: ButtonMenuCancel_0
		{
			idc = 2785;
		};
		class ButtonMenuCancel_86: ButtonMenuCancel_0
		{
			idc = 2786;
		};
		class ButtonMenuCancel_87: ButtonMenuCancel_0
		{
			idc = 2787;
		};
		class ButtonMenuCancel_88: ButtonMenuCancel_0
		{
			idc = 2788;
		};
		class ButtonMenuCancel_89: ButtonMenuCancel_0
		{
			idc = 2789;
		};
		class ButtonMenuCancel_9: ButtonMenuCancel_0
		{
			idc = 2709;
		};
		class ButtonMenuCancel_90: ButtonMenuCancel_0
		{
			idc = 2790;
		};
		class ButtonMenuCancel_91: ButtonMenuCancel_0
		{
			idc = 2791;
		};
		class ButtonMenuCancel_92: ButtonMenuCancel_0
		{
			idc = 2792;
		};
		class ButtonMenuCancel_93: ButtonMenuCancel_0
		{
			idc = 2793;
		};
		class ButtonMenuCancel_94: ButtonMenuCancel_0
		{
			idc = 2794;
		};
		class ButtonMenuCancel_95: ButtonMenuCancel_0
		{
			idc = 2795;
		};
		class ButtonMenuCancel_96: ButtonMenuCancel_0
		{
			idc = 2796;
		};
		class ButtonMenuCancel_97: ButtonMenuCancel_0
		{
			idc = 2797;
		};
		class ButtonMenuCancel_98: ButtonMenuCancel_0
		{
			idc = 2798;
		};
		class ButtonMenuCancel_99: ButtonMenuCancel_0
		{
			idc = 2799;
		};
		class ButtonMenuOK_0: RscButtonMenuOK
		{
			idc = 2600;
			text = "";
			x = -3;
			y = -3;
		};
		class ButtonMenuOK_1: ButtonMenuOK_0
		{
			idc = 2601;
		};
		class ButtonMenuOK_10: ButtonMenuOK_0
		{
			idc = 2610;
		};
		class ButtonMenuOK_11: ButtonMenuOK_0
		{
			idc = 2611;
		};
		class ButtonMenuOK_12: ButtonMenuOK_0
		{
			idc = 2612;
		};
		class ButtonMenuOK_13: ButtonMenuOK_0
		{
			idc = 2613;
		};
		class ButtonMenuOK_14: ButtonMenuOK_0
		{
			idc = 2614;
		};
		class ButtonMenuOK_15: ButtonMenuOK_0
		{
			idc = 2615;
		};
		class ButtonMenuOK_16: ButtonMenuOK_0
		{
			idc = 2616;
		};
		class ButtonMenuOK_17: ButtonMenuOK_0
		{
			idc = 2617;
		};
		class ButtonMenuOK_18: ButtonMenuOK_0
		{
			idc = 2618;
		};
		class ButtonMenuOK_19: ButtonMenuOK_0
		{
			idc = 2619;
		};
		class ButtonMenuOK_2: ButtonMenuOK_0
		{
			idc = 2602;
		};
		class ButtonMenuOK_20: ButtonMenuOK_0
		{
			idc = 2620;
		};
		class ButtonMenuOK_21: ButtonMenuOK_0
		{
			idc = 2621;
		};
		class ButtonMenuOK_22: ButtonMenuOK_0
		{
			idc = 2622;
		};
		class ButtonMenuOK_23: ButtonMenuOK_0
		{
			idc = 2623;
		};
		class ButtonMenuOK_24: ButtonMenuOK_0
		{
			idc = 2624;
		};
		class ButtonMenuOK_25: ButtonMenuOK_0
		{
			idc = 2625;
		};
		class ButtonMenuOK_26: ButtonMenuOK_0
		{
			idc = 2626;
		};
		class ButtonMenuOK_27: ButtonMenuOK_0
		{
			idc = 2627;
		};
		class ButtonMenuOK_28: ButtonMenuOK_0
		{
			idc = 2628;
		};
		class ButtonMenuOK_29: ButtonMenuOK_0
		{
			idc = 2629;
		};
		class ButtonMenuOK_3: ButtonMenuOK_0
		{
			idc = 2603;
		};
		class ButtonMenuOK_30: ButtonMenuOK_0
		{
			idc = 2630;
		};
		class ButtonMenuOK_31: ButtonMenuOK_0
		{
			idc = 2631;
		};
		class ButtonMenuOK_32: ButtonMenuOK_0
		{
			idc = 2632;
		};
		class ButtonMenuOK_33: ButtonMenuOK_0
		{
			idc = 2633;
		};
		class ButtonMenuOK_34: ButtonMenuOK_0
		{
			idc = 2634;
		};
		class ButtonMenuOK_35: ButtonMenuOK_0
		{
			idc = 2635;
		};
		class ButtonMenuOK_36: ButtonMenuOK_0
		{
			idc = 2636;
		};
		class ButtonMenuOK_37: ButtonMenuOK_0
		{
			idc = 2637;
		};
		class ButtonMenuOK_38: ButtonMenuOK_0
		{
			idc = 2638;
		};
		class ButtonMenuOK_39: ButtonMenuOK_0
		{
			idc = 2639;
		};
		class ButtonMenuOK_4: ButtonMenuOK_0
		{
			idc = 2604;
		};
		class ButtonMenuOK_40: ButtonMenuOK_0
		{
			idc = 2640;
		};
		class ButtonMenuOK_41: ButtonMenuOK_0
		{
			idc = 2641;
		};
		class ButtonMenuOK_42: ButtonMenuOK_0
		{
			idc = 2642;
		};
		class ButtonMenuOK_43: ButtonMenuOK_0
		{
			idc = 2643;
		};
		class ButtonMenuOK_44: ButtonMenuOK_0
		{
			idc = 2644;
		};
		class ButtonMenuOK_45: ButtonMenuOK_0
		{
			idc = 2645;
		};
		class ButtonMenuOK_46: ButtonMenuOK_0
		{
			idc = 2646;
		};
		class ButtonMenuOK_47: ButtonMenuOK_0
		{
			idc = 2647;
		};
		class ButtonMenuOK_48: ButtonMenuOK_0
		{
			idc = 2648;
		};
		class ButtonMenuOK_49: ButtonMenuOK_0
		{
			idc = 2649;
		};
		class ButtonMenuOK_5: ButtonMenuOK_0
		{
			idc = 2605;
		};
		class ButtonMenuOK_50: ButtonMenuOK_0
		{
			idc = 2650;
		};
		class ButtonMenuOK_51: ButtonMenuOK_0
		{
			idc = 2651;
		};
		class ButtonMenuOK_52: ButtonMenuOK_0
		{
			idc = 2652;
		};
		class ButtonMenuOK_53: ButtonMenuOK_0
		{
			idc = 2653;
		};
		class ButtonMenuOK_54: ButtonMenuOK_0
		{
			idc = 2654;
		};
		class ButtonMenuOK_55: ButtonMenuOK_0
		{
			idc = 2655;
		};
		class ButtonMenuOK_56: ButtonMenuOK_0
		{
			idc = 2656;
		};
		class ButtonMenuOK_57: ButtonMenuOK_0
		{
			idc = 2657;
		};
		class ButtonMenuOK_58: ButtonMenuOK_0
		{
			idc = 2658;
		};
		class ButtonMenuOK_59: ButtonMenuOK_0
		{
			idc = 2659;
		};
		class ButtonMenuOK_6: ButtonMenuOK_0
		{
			idc = 2606;
		};
		class ButtonMenuOK_60: ButtonMenuOK_0
		{
			idc = 2660;
		};
		class ButtonMenuOK_61: ButtonMenuOK_0
		{
			idc = 2661;
		};
		class ButtonMenuOK_62: ButtonMenuOK_0
		{
			idc = 2662;
		};
		class ButtonMenuOK_63: ButtonMenuOK_0
		{
			idc = 2663;
		};
		class ButtonMenuOK_64: ButtonMenuOK_0
		{
			idc = 2664;
		};
		class ButtonMenuOK_65: ButtonMenuOK_0
		{
			idc = 2665;
		};
		class ButtonMenuOK_66: ButtonMenuOK_0
		{
			idc = 2666;
		};
		class ButtonMenuOK_67: ButtonMenuOK_0
		{
			idc = 2667;
		};
		class ButtonMenuOK_68: ButtonMenuOK_0
		{
			idc = 2668;
		};
		class ButtonMenuOK_69: ButtonMenuOK_0
		{
			idc = 2669;
		};
		class ButtonMenuOK_7: ButtonMenuOK_0
		{
			idc = 2607;
		};
		class ButtonMenuOK_70: ButtonMenuOK_0
		{
			idc = 2670;
		};
		class ButtonMenuOK_71: ButtonMenuOK_0
		{
			idc = 2671;
		};
		class ButtonMenuOK_72: ButtonMenuOK_0
		{
			idc = 2672;
		};
		class ButtonMenuOK_73: ButtonMenuOK_0
		{
			idc = 2673;
		};
		class ButtonMenuOK_74: ButtonMenuOK_0
		{
			idc = 2674;
		};
		class ButtonMenuOK_75: ButtonMenuOK_0
		{
			idc = 2675;
		};
		class ButtonMenuOK_76: ButtonMenuOK_0
		{
			idc = 2676;
		};
		class ButtonMenuOK_77: ButtonMenuOK_0
		{
			idc = 2677;
		};
		class ButtonMenuOK_78: ButtonMenuOK_0
		{
			idc = 2678;
		};
		class ButtonMenuOK_79: ButtonMenuOK_0
		{
			idc = 2679;
		};
		class ButtonMenuOK_8: ButtonMenuOK_0
		{
			idc = 2608;
		};
		class ButtonMenuOK_80: ButtonMenuOK_0
		{
			idc = 2680;
		};
		class ButtonMenuOK_81: ButtonMenuOK_0
		{
			idc = 2681;
		};
		class ButtonMenuOK_82: ButtonMenuOK_0
		{
			idc = 2682;
		};
		class ButtonMenuOK_83: ButtonMenuOK_0
		{
			idc = 2683;
		};
		class ButtonMenuOK_84: ButtonMenuOK_0
		{
			idc = 2684;
		};
		class ButtonMenuOK_85: ButtonMenuOK_0
		{
			idc = 2685;
		};
		class ButtonMenuOK_86: ButtonMenuOK_0
		{
			idc = 2686;
		};
		class ButtonMenuOK_87: ButtonMenuOK_0
		{
			idc = 2687;
		};
		class ButtonMenuOK_88: ButtonMenuOK_0
		{
			idc = 2688;
		};
		class ButtonMenuOK_89: ButtonMenuOK_0
		{
			idc = 2689;
		};
		class ButtonMenuOK_9: ButtonMenuOK_0
		{
			idc = 2609;
		};
		class ButtonMenuOK_90: ButtonMenuOK_0
		{
			idc = 2690;
		};
		class ButtonMenuOK_91: ButtonMenuOK_0
		{
			idc = 2691;
		};
		class ButtonMenuOK_92: ButtonMenuOK_0
		{
			idc = 2692;
		};
		class ButtonMenuOK_93: ButtonMenuOK_0
		{
			idc = 2693;
		};
		class ButtonMenuOK_94: ButtonMenuOK_0
		{
			idc = 2694;
		};
		class ButtonMenuOK_95: ButtonMenuOK_0
		{
			idc = 2695;
		};
		class ButtonMenuOK_96: ButtonMenuOK_0
		{
			idc = 2696;
		};
		class ButtonMenuOK_97: ButtonMenuOK_0
		{
			idc = 2697;
		};
		class ButtonMenuOK_98: ButtonMenuOK_0
		{
			idc = 2698;
		};
		class ButtonMenuOK_99: ButtonMenuOK_0
		{
			idc = 2699;
		};
		class CheckBox_0: RscCheckBox
		{
			idc = 2800;
			text = "";
			x = -3;
			y = -3;
		};
		class CheckBox_1: CheckBox_0
		{
			idc = 2801;
		};
		class CheckBox_10: CheckBox_0
		{
			idc = 2810;
		};
		class CheckBox_11: CheckBox_0
		{
			idc = 2811;
		};
		class CheckBox_12: CheckBox_0
		{
			idc = 2812;
		};
		class CheckBox_13: CheckBox_0
		{
			idc = 2813;
		};
		class CheckBox_14: CheckBox_0
		{
			idc = 2814;
		};
		class CheckBox_15: CheckBox_0
		{
			idc = 2815;
		};
		class CheckBox_16: CheckBox_0
		{
			idc = 2816;
		};
		class CheckBox_17: CheckBox_0
		{
			idc = 2817;
		};
		class CheckBox_18: CheckBox_0
		{
			idc = 2818;
		};
		class CheckBox_19: CheckBox_0
		{
			idc = 2819;
		};
		class CheckBox_2: CheckBox_0
		{
			idc = 2802;
		};
		class CheckBox_20: CheckBox_0
		{
			idc = 2820;
		};
		class CheckBox_21: CheckBox_0
		{
			idc = 2821;
		};
		class CheckBox_22: CheckBox_0
		{
			idc = 2822;
		};
		class CheckBox_23: CheckBox_0
		{
			idc = 2823;
		};
		class CheckBox_24: CheckBox_0
		{
			idc = 2824;
		};
		class CheckBox_25: CheckBox_0
		{
			idc = 2825;
		};
		class CheckBox_26: CheckBox_0
		{
			idc = 2826;
		};
		class CheckBox_27: CheckBox_0
		{
			idc = 2827;
		};
		class CheckBox_28: CheckBox_0
		{
			idc = 2828;
		};
		class CheckBox_29: CheckBox_0
		{
			idc = 2829;
		};
		class CheckBox_3: CheckBox_0
		{
			idc = 2803;
		};
		class CheckBox_30: CheckBox_0
		{
			idc = 2830;
		};
		class CheckBox_31: CheckBox_0
		{
			idc = 2831;
		};
		class CheckBox_32: CheckBox_0
		{
			idc = 2832;
		};
		class CheckBox_33: CheckBox_0
		{
			idc = 2833;
		};
		class CheckBox_34: CheckBox_0
		{
			idc = 2834;
		};
		class CheckBox_35: CheckBox_0
		{
			idc = 2835;
		};
		class CheckBox_36: CheckBox_0
		{
			idc = 2836;
		};
		class CheckBox_37: CheckBox_0
		{
			idc = 2837;
		};
		class CheckBox_38: CheckBox_0
		{
			idc = 2838;
		};
		class CheckBox_39: CheckBox_0
		{
			idc = 2839;
		};
		class CheckBox_4: CheckBox_0
		{
			idc = 2804;
		};
		class CheckBox_40: CheckBox_0
		{
			idc = 2840;
		};
		class CheckBox_41: CheckBox_0
		{
			idc = 2841;
		};
		class CheckBox_42: CheckBox_0
		{
			idc = 2842;
		};
		class CheckBox_43: CheckBox_0
		{
			idc = 2843;
		};
		class CheckBox_44: CheckBox_0
		{
			idc = 2844;
		};
		class CheckBox_45: CheckBox_0
		{
			idc = 2845;
		};
		class CheckBox_46: CheckBox_0
		{
			idc = 2846;
		};
		class CheckBox_47: CheckBox_0
		{
			idc = 2847;
		};
		class CheckBox_48: CheckBox_0
		{
			idc = 2848;
		};
		class CheckBox_49: CheckBox_0
		{
			idc = 2849;
		};
		class CheckBox_5: CheckBox_0
		{
			idc = 2805;
		};
		class CheckBox_50: CheckBox_0
		{
			idc = 2850;
		};
		class CheckBox_51: CheckBox_0
		{
			idc = 2851;
		};
		class CheckBox_52: CheckBox_0
		{
			idc = 2852;
		};
		class CheckBox_53: CheckBox_0
		{
			idc = 2853;
		};
		class CheckBox_54: CheckBox_0
		{
			idc = 2854;
		};
		class CheckBox_55: CheckBox_0
		{
			idc = 2855;
		};
		class CheckBox_56: CheckBox_0
		{
			idc = 2856;
		};
		class CheckBox_57: CheckBox_0
		{
			idc = 2857;
		};
		class CheckBox_58: CheckBox_0
		{
			idc = 2858;
		};
		class CheckBox_59: CheckBox_0
		{
			idc = 2859;
		};
		class CheckBox_6: CheckBox_0
		{
			idc = 2806;
		};
		class CheckBox_60: CheckBox_0
		{
			idc = 2860;
		};
		class CheckBox_61: CheckBox_0
		{
			idc = 2861;
		};
		class CheckBox_62: CheckBox_0
		{
			idc = 2862;
		};
		class CheckBox_63: CheckBox_0
		{
			idc = 2863;
		};
		class CheckBox_64: CheckBox_0
		{
			idc = 2864;
		};
		class CheckBox_65: CheckBox_0
		{
			idc = 2865;
		};
		class CheckBox_66: CheckBox_0
		{
			idc = 2866;
		};
		class CheckBox_67: CheckBox_0
		{
			idc = 2867;
		};
		class CheckBox_68: CheckBox_0
		{
			idc = 2868;
		};
		class CheckBox_69: CheckBox_0
		{
			idc = 2869;
		};
		class CheckBox_7: CheckBox_0
		{
			idc = 2807;
		};
		class CheckBox_70: CheckBox_0
		{
			idc = 2870;
		};
		class CheckBox_71: CheckBox_0
		{
			idc = 2871;
		};
		class CheckBox_72: CheckBox_0
		{
			idc = 2872;
		};
		class CheckBox_73: CheckBox_0
		{
			idc = 2873;
		};
		class CheckBox_74: CheckBox_0
		{
			idc = 2874;
		};
		class CheckBox_75: CheckBox_0
		{
			idc = 2875;
		};
		class CheckBox_76: CheckBox_0
		{
			idc = 2876;
		};
		class CheckBox_77: CheckBox_0
		{
			idc = 2877;
		};
		class CheckBox_78: CheckBox_0
		{
			idc = 2878;
		};
		class CheckBox_79: CheckBox_0
		{
			idc = 2879;
		};
		class CheckBox_8: CheckBox_0
		{
			idc = 2808;
		};
		class CheckBox_80: CheckBox_0
		{
			idc = 2880;
		};
		class CheckBox_81: CheckBox_0
		{
			idc = 2881;
		};
		class CheckBox_82: CheckBox_0
		{
			idc = 2882;
		};
		class CheckBox_83: CheckBox_0
		{
			idc = 2883;
		};
		class CheckBox_84: CheckBox_0
		{
			idc = 2884;
		};
		class CheckBox_85: CheckBox_0
		{
			idc = 2885;
		};
		class CheckBox_86: CheckBox_0
		{
			idc = 2886;
		};
		class CheckBox_87: CheckBox_0
		{
			idc = 2887;
		};
		class CheckBox_88: CheckBox_0
		{
			idc = 2888;
		};
		class CheckBox_89: CheckBox_0
		{
			idc = 2889;
		};
		class CheckBox_9: CheckBox_0
		{
			idc = 2809;
		};
		class CheckBox_90: CheckBox_0
		{
			idc = 2890;
		};
		class CheckBox_91: CheckBox_0
		{
			idc = 2891;
		};
		class CheckBox_92: CheckBox_0
		{
			idc = 2892;
		};
		class CheckBox_93: CheckBox_0
		{
			idc = 2893;
		};
		class CheckBox_94: CheckBox_0
		{
			idc = 2894;
		};
		class CheckBox_95: CheckBox_0
		{
			idc = 2895;
		};
		class CheckBox_96: CheckBox_0
		{
			idc = 2896;
		};
		class CheckBox_97: CheckBox_0
		{
			idc = 2897;
		};
		class CheckBox_98: CheckBox_0
		{
			idc = 2898;
		};
		class CheckBox_99: CheckBox_0
		{
			idc = 2899;
		};
		class Combo_0: RscCombo
		{
			idc = 2100;
			text = "";
			x = -3;
			y = -3;
		};
		class Combo_1: Combo_0
		{
			idc = 2101;
		};
		class Combo_10: Combo_0
		{
			idc = 2110;
		};
		class Combo_11: Combo_0
		{
			idc = 2111;
		};
		class Combo_12: Combo_0
		{
			idc = 2112;
		};
		class Combo_13: Combo_0
		{
			idc = 2113;
		};
		class Combo_14: Combo_0
		{
			idc = 2114;
		};
		class Combo_15: Combo_0
		{
			idc = 2115;
		};
		class Combo_16: Combo_0
		{
			idc = 2116;
		};
		class Combo_17: Combo_0
		{
			idc = 2117;
		};
		class Combo_18: Combo_0
		{
			idc = 2118;
		};
		class Combo_19: Combo_0
		{
			idc = 2119;
		};
		class Combo_2: Combo_0
		{
			idc = 2102;
		};
		class Combo_20: Combo_0
		{
			idc = 2120;
		};
		class Combo_21: Combo_0
		{
			idc = 2121;
		};
		class Combo_22: Combo_0
		{
			idc = 2122;
		};
		class Combo_23: Combo_0
		{
			idc = 2123;
		};
		class Combo_24: Combo_0
		{
			idc = 2124;
		};
		class Combo_25: Combo_0
		{
			idc = 2125;
		};
		class Combo_26: Combo_0
		{
			idc = 2126;
		};
		class Combo_27: Combo_0
		{
			idc = 2127;
		};
		class Combo_28: Combo_0
		{
			idc = 2128;
		};
		class Combo_29: Combo_0
		{
			idc = 2129;
		};
		class Combo_3: Combo_0
		{
			idc = 2103;
		};
		class Combo_30: Combo_0
		{
			idc = 2130;
		};
		class Combo_31: Combo_0
		{
			idc = 2131;
		};
		class Combo_32: Combo_0
		{
			idc = 2132;
		};
		class Combo_33: Combo_0
		{
			idc = 2133;
		};
		class Combo_34: Combo_0
		{
			idc = 2134;
		};
		class Combo_35: Combo_0
		{
			idc = 2135;
		};
		class Combo_36: Combo_0
		{
			idc = 2136;
		};
		class Combo_37: Combo_0
		{
			idc = 2137;
		};
		class Combo_38: Combo_0
		{
			idc = 2138;
		};
		class Combo_39: Combo_0
		{
			idc = 2139;
		};
		class Combo_4: Combo_0
		{
			idc = 2104;
		};
		class Combo_40: Combo_0
		{
			idc = 2140;
		};
		class Combo_41: Combo_0
		{
			idc = 2141;
		};
		class Combo_42: Combo_0
		{
			idc = 2142;
		};
		class Combo_43: Combo_0
		{
			idc = 2143;
		};
		class Combo_44: Combo_0
		{
			idc = 2144;
		};
		class Combo_45: Combo_0
		{
			idc = 2145;
		};
		class Combo_46: Combo_0
		{
			idc = 2146;
		};
		class Combo_47: Combo_0
		{
			idc = 2147;
		};
		class Combo_48: Combo_0
		{
			idc = 2148;
		};
		class Combo_49: Combo_0
		{
			idc = 2149;
		};
		class Combo_5: Combo_0
		{
			idc = 2105;
		};
		class Combo_50: Combo_0
		{
			idc = 2150;
		};
		class Combo_51: Combo_0
		{
			idc = 2151;
		};
		class Combo_52: Combo_0
		{
			idc = 2152;
		};
		class Combo_53: Combo_0
		{
			idc = 2153;
		};
		class Combo_54: Combo_0
		{
			idc = 2154;
		};
		class Combo_55: Combo_0
		{
			idc = 2155;
		};
		class Combo_56: Combo_0
		{
			idc = 2156;
		};
		class Combo_57: Combo_0
		{
			idc = 2157;
		};
		class Combo_58: Combo_0
		{
			idc = 2158;
		};
		class Combo_59: Combo_0
		{
			idc = 2159;
		};
		class Combo_6: Combo_0
		{
			idc = 2106;
		};
		class Combo_60: Combo_0
		{
			idc = 2160;
		};
		class Combo_61: Combo_0
		{
			idc = 2161;
		};
		class Combo_62: Combo_0
		{
			idc = 2162;
		};
		class Combo_63: Combo_0
		{
			idc = 2163;
		};
		class Combo_64: Combo_0
		{
			idc = 2164;
		};
		class Combo_65: Combo_0
		{
			idc = 2165;
		};
		class Combo_66: Combo_0
		{
			idc = 2166;
		};
		class Combo_67: Combo_0
		{
			idc = 2167;
		};
		class Combo_68: Combo_0
		{
			idc = 2168;
		};
		class Combo_69: Combo_0
		{
			idc = 2169;
		};
		class Combo_7: Combo_0
		{
			idc = 2107;
		};
		class Combo_70: Combo_0
		{
			idc = 2170;
		};
		class Combo_71: Combo_0
		{
			idc = 2171;
		};
		class Combo_72: Combo_0
		{
			idc = 2172;
		};
		class Combo_73: Combo_0
		{
			idc = 2173;
		};
		class Combo_74: Combo_0
		{
			idc = 2174;
		};
		class Combo_75: Combo_0
		{
			idc = 2175;
		};
		class Combo_76: Combo_0
		{
			idc = 2176;
		};
		class Combo_77: Combo_0
		{
			idc = 2177;
		};
		class Combo_78: Combo_0
		{
			idc = 2178;
		};
		class Combo_79: Combo_0
		{
			idc = 2179;
		};
		class Combo_8: Combo_0
		{
			idc = 2108;
		};
		class Combo_80: Combo_0
		{
			idc = 2180;
		};
		class Combo_81: Combo_0
		{
			idc = 2181;
		};
		class Combo_82: Combo_0
		{
			idc = 2182;
		};
		class Combo_83: Combo_0
		{
			idc = 2183;
		};
		class Combo_84: Combo_0
		{
			idc = 2184;
		};
		class Combo_85: Combo_0
		{
			idc = 2185;
		};
		class Combo_86: Combo_0
		{
			idc = 2186;
		};
		class Combo_87: Combo_0
		{
			idc = 2187;
		};
		class Combo_88: Combo_0
		{
			idc = 2188;
		};
		class Combo_89: Combo_0
		{
			idc = 2189;
		};
		class Combo_9: Combo_0
		{
			idc = 2109;
		};
		class Combo_90: Combo_0
		{
			idc = 2190;
		};
		class Combo_91: Combo_0
		{
			idc = 2191;
		};
		class Combo_92: Combo_0
		{
			idc = 2192;
		};
		class Combo_93: Combo_0
		{
			idc = 2193;
		};
		class Combo_94: Combo_0
		{
			idc = 2194;
		};
		class Combo_95: Combo_0
		{
			idc = 2195;
		};
		class Combo_96: Combo_0
		{
			idc = 2196;
		};
		class Combo_97: Combo_0
		{
			idc = 2197;
		};
		class Combo_98: Combo_0
		{
			idc = 2198;
		};
		class Combo_99: Combo_0
		{
			idc = 2199;
		};
		class ControlsGroup_0: RscControlsGroup
		{
			idc = 2300;
			text = "";
			x = -3;
			y = -3;
		};
		class ControlsGroup_1: ControlsGroup_0
		{
			idc = 2301;
		};
		class ControlsGroup_10: ControlsGroup_0
		{
			idc = 2310;
		};
		class ControlsGroup_11: ControlsGroup_0
		{
			idc = 2311;
		};
		class ControlsGroup_12: ControlsGroup_0
		{
			idc = 2312;
		};
		class ControlsGroup_13: ControlsGroup_0
		{
			idc = 2313;
		};
		class ControlsGroup_14: ControlsGroup_0
		{
			idc = 2314;
		};
		class ControlsGroup_15: ControlsGroup_0
		{
			idc = 2315;
		};
		class ControlsGroup_16: ControlsGroup_0
		{
			idc = 2316;
		};
		class ControlsGroup_17: ControlsGroup_0
		{
			idc = 2317;
		};
		class ControlsGroup_18: ControlsGroup_0
		{
			idc = 2318;
		};
		class ControlsGroup_19: ControlsGroup_0
		{
			idc = 2319;
		};
		class ControlsGroup_2: ControlsGroup_0
		{
			idc = 2302;
		};
		class ControlsGroup_20: ControlsGroup_0
		{
			idc = 2320;
		};
		class ControlsGroup_21: ControlsGroup_0
		{
			idc = 2321;
		};
		class ControlsGroup_22: ControlsGroup_0
		{
			idc = 2322;
		};
		class ControlsGroup_23: ControlsGroup_0
		{
			idc = 2323;
		};
		class ControlsGroup_24: ControlsGroup_0
		{
			idc = 2324;
		};
		class ControlsGroup_25: ControlsGroup_0
		{
			idc = 2325;
		};
		class ControlsGroup_26: ControlsGroup_0
		{
			idc = 2326;
		};
		class ControlsGroup_27: ControlsGroup_0
		{
			idc = 2327;
		};
		class ControlsGroup_28: ControlsGroup_0
		{
			idc = 2328;
		};
		class ControlsGroup_29: ControlsGroup_0
		{
			idc = 2329;
		};
		class ControlsGroup_3: ControlsGroup_0
		{
			idc = 2303;
		};
		class ControlsGroup_30: ControlsGroup_0
		{
			idc = 2330;
		};
		class ControlsGroup_31: ControlsGroup_0
		{
			idc = 2331;
		};
		class ControlsGroup_32: ControlsGroup_0
		{
			idc = 2332;
		};
		class ControlsGroup_33: ControlsGroup_0
		{
			idc = 2333;
		};
		class ControlsGroup_34: ControlsGroup_0
		{
			idc = 2334;
		};
		class ControlsGroup_35: ControlsGroup_0
		{
			idc = 2335;
		};
		class ControlsGroup_36: ControlsGroup_0
		{
			idc = 2336;
		};
		class ControlsGroup_37: ControlsGroup_0
		{
			idc = 2337;
		};
		class ControlsGroup_38: ControlsGroup_0
		{
			idc = 2338;
		};
		class ControlsGroup_39: ControlsGroup_0
		{
			idc = 2339;
		};
		class ControlsGroup_4: ControlsGroup_0
		{
			idc = 2304;
		};
		class ControlsGroup_40: ControlsGroup_0
		{
			idc = 2340;
		};
		class ControlsGroup_41: ControlsGroup_0
		{
			idc = 2341;
		};
		class ControlsGroup_42: ControlsGroup_0
		{
			idc = 2342;
		};
		class ControlsGroup_43: ControlsGroup_0
		{
			idc = 2343;
		};
		class ControlsGroup_44: ControlsGroup_0
		{
			idc = 2344;
		};
		class ControlsGroup_45: ControlsGroup_0
		{
			idc = 2345;
		};
		class ControlsGroup_46: ControlsGroup_0
		{
			idc = 2346;
		};
		class ControlsGroup_47: ControlsGroup_0
		{
			idc = 2347;
		};
		class ControlsGroup_48: ControlsGroup_0
		{
			idc = 2348;
		};
		class ControlsGroup_49: ControlsGroup_0
		{
			idc = 2349;
		};
		class ControlsGroup_5: ControlsGroup_0
		{
			idc = 2305;
		};
		class ControlsGroup_50: ControlsGroup_0
		{
			idc = 2350;
		};
		class ControlsGroup_51: ControlsGroup_0
		{
			idc = 2351;
		};
		class ControlsGroup_52: ControlsGroup_0
		{
			idc = 2352;
		};
		class ControlsGroup_53: ControlsGroup_0
		{
			idc = 2353;
		};
		class ControlsGroup_54: ControlsGroup_0
		{
			idc = 2354;
		};
		class ControlsGroup_55: ControlsGroup_0
		{
			idc = 2355;
		};
		class ControlsGroup_56: ControlsGroup_0
		{
			idc = 2356;
		};
		class ControlsGroup_57: ControlsGroup_0
		{
			idc = 2357;
		};
		class ControlsGroup_58: ControlsGroup_0
		{
			idc = 2358;
		};
		class ControlsGroup_59: ControlsGroup_0
		{
			idc = 2359;
		};
		class ControlsGroup_6: ControlsGroup_0
		{
			idc = 2306;
		};
		class ControlsGroup_60: ControlsGroup_0
		{
			idc = 2360;
		};
		class ControlsGroup_61: ControlsGroup_0
		{
			idc = 2361;
		};
		class ControlsGroup_62: ControlsGroup_0
		{
			idc = 2362;
		};
		class ControlsGroup_63: ControlsGroup_0
		{
			idc = 2363;
		};
		class ControlsGroup_64: ControlsGroup_0
		{
			idc = 2364;
		};
		class ControlsGroup_65: ControlsGroup_0
		{
			idc = 2365;
		};
		class ControlsGroup_66: ControlsGroup_0
		{
			idc = 2366;
		};
		class ControlsGroup_67: ControlsGroup_0
		{
			idc = 2367;
		};
		class ControlsGroup_68: ControlsGroup_0
		{
			idc = 2368;
		};
		class ControlsGroup_69: ControlsGroup_0
		{
			idc = 2369;
		};
		class ControlsGroup_7: ControlsGroup_0
		{
			idc = 2307;
		};
		class ControlsGroup_70: ControlsGroup_0
		{
			idc = 2370;
		};
		class ControlsGroup_71: ControlsGroup_0
		{
			idc = 2371;
		};
		class ControlsGroup_72: ControlsGroup_0
		{
			idc = 2372;
		};
		class ControlsGroup_73: ControlsGroup_0
		{
			idc = 2373;
		};
		class ControlsGroup_74: ControlsGroup_0
		{
			idc = 2374;
		};
		class ControlsGroup_75: ControlsGroup_0
		{
			idc = 2375;
		};
		class ControlsGroup_76: ControlsGroup_0
		{
			idc = 2376;
		};
		class ControlsGroup_77: ControlsGroup_0
		{
			idc = 2377;
		};
		class ControlsGroup_78: ControlsGroup_0
		{
			idc = 2378;
		};
		class ControlsGroup_79: ControlsGroup_0
		{
			idc = 2379;
		};
		class ControlsGroup_8: ControlsGroup_0
		{
			idc = 2308;
		};
		class ControlsGroup_80: ControlsGroup_0
		{
			idc = 2380;
		};
		class ControlsGroup_81: ControlsGroup_0
		{
			idc = 2381;
		};
		class ControlsGroup_82: ControlsGroup_0
		{
			idc = 2382;
		};
		class ControlsGroup_83: ControlsGroup_0
		{
			idc = 2383;
		};
		class ControlsGroup_84: ControlsGroup_0
		{
			idc = 2384;
		};
		class ControlsGroup_85: ControlsGroup_0
		{
			idc = 2385;
		};
		class ControlsGroup_86: ControlsGroup_0
		{
			idc = 2386;
		};
		class ControlsGroup_87: ControlsGroup_0
		{
			idc = 2387;
		};
		class ControlsGroup_88: ControlsGroup_0
		{
			idc = 2388;
		};
		class ControlsGroup_89: ControlsGroup_0
		{
			idc = 2389;
		};
		class ControlsGroup_9: ControlsGroup_0
		{
			idc = 2309;
		};
		class ControlsGroup_90: ControlsGroup_0
		{
			idc = 2390;
		};
		class ControlsGroup_91: ControlsGroup_0
		{
			idc = 2391;
		};
		class ControlsGroup_92: ControlsGroup_0
		{
			idc = 2392;
		};
		class ControlsGroup_93: ControlsGroup_0
		{
			idc = 2393;
		};
		class ControlsGroup_94: ControlsGroup_0
		{
			idc = 2394;
		};
		class ControlsGroup_95: ControlsGroup_0
		{
			idc = 2395;
		};
		class ControlsGroup_96: ControlsGroup_0
		{
			idc = 2396;
		};
		class ControlsGroup_97: ControlsGroup_0
		{
			idc = 2397;
		};
		class ControlsGroup_98: ControlsGroup_0
		{
			idc = 2398;
		};
		class ControlsGroup_99: ControlsGroup_0
		{
			idc = 2399;
		};
		class Edit_0: RscEdit
		{
			idc = 1400;
			linespacing = 1;
			style = "0x00 + 0x40 + 0x10";
			text = "";
			x = -3;
			y = -3;
		};
		class Edit_1: Edit_0
		{
			idc = 1401;
		};
		class Edit_10: Edit_0
		{
			idc = 1410;
		};
		class Edit_11: Edit_0
		{
			idc = 1411;
		};
		class Edit_12: Edit_0
		{
			idc = 1412;
		};
		class Edit_13: Edit_0
		{
			idc = 1413;
		};
		class Edit_14: Edit_0
		{
			idc = 1414;
		};
		class Edit_15: Edit_0
		{
			idc = 1415;
		};
		class Edit_16: Edit_0
		{
			idc = 1416;
		};
		class Edit_17: Edit_0
		{
			idc = 1417;
		};
		class Edit_18: Edit_0
		{
			idc = 1418;
		};
		class Edit_19: Edit_0
		{
			idc = 1419;
		};
		class Edit_2: Edit_0
		{
			idc = 1402;
		};
		class Edit_20: Edit_0
		{
			idc = 1420;
		};
		class Edit_21: Edit_0
		{
			idc = 1421;
		};
		class Edit_22: Edit_0
		{
			idc = 1422;
		};
		class Edit_23: Edit_0
		{
			idc = 1423;
		};
		class Edit_24: Edit_0
		{
			idc = 1424;
		};
		class Edit_25: Edit_0
		{
			idc = 1425;
		};
		class Edit_26: Edit_0
		{
			idc = 1426;
		};
		class Edit_27: Edit_0
		{
			idc = 1427;
		};
		class Edit_28: Edit_0
		{
			idc = 1428;
		};
		class Edit_29: Edit_0
		{
			idc = 1429;
		};
		class Edit_3: Edit_0
		{
			idc = 1403;
		};
		class Edit_30: Edit_0
		{
			idc = 1430;
		};
		class Edit_31: Edit_0
		{
			idc = 1431;
		};
		class Edit_32: Edit_0
		{
			idc = 1432;
		};
		class Edit_33: Edit_0
		{
			idc = 1433;
		};
		class Edit_34: Edit_0
		{
			idc = 1434;
		};
		class Edit_35: Edit_0
		{
			idc = 1435;
		};
		class Edit_36: Edit_0
		{
			idc = 1436;
		};
		class Edit_37: Edit_0
		{
			idc = 1437;
		};
		class Edit_38: Edit_0
		{
			idc = 1438;
		};
		class Edit_39: Edit_0
		{
			idc = 1439;
		};
		class Edit_4: Edit_0
		{
			idc = 1404;
		};
		class Edit_40: Edit_0
		{
			idc = 1440;
		};
		class Edit_41: Edit_0
		{
			idc = 1441;
		};
		class Edit_42: Edit_0
		{
			idc = 1442;
		};
		class Edit_43: Edit_0
		{
			idc = 1443;
		};
		class Edit_44: Edit_0
		{
			idc = 1444;
		};
		class Edit_45: Edit_0
		{
			idc = 1445;
		};
		class Edit_46: Edit_0
		{
			idc = 1446;
		};
		class Edit_47: Edit_0
		{
			idc = 1447;
		};
		class Edit_48: Edit_0
		{
			idc = 1448;
		};
		class Edit_49: Edit_0
		{
			idc = 1449;
		};
		class Edit_5: Edit_0
		{
			idc = 1405;
		};
		class Edit_50: Edit_0
		{
			idc = 1450;
		};
		class Edit_51: Edit_0
		{
			idc = 1451;
		};
		class Edit_52: Edit_0
		{
			idc = 1452;
		};
		class Edit_53: Edit_0
		{
			idc = 1453;
		};
		class Edit_54: Edit_0
		{
			idc = 1454;
		};
		class Edit_55: Edit_0
		{
			idc = 1455;
		};
		class Edit_56: Edit_0
		{
			idc = 1456;
		};
		class Edit_57: Edit_0
		{
			idc = 1457;
		};
		class Edit_58: Edit_0
		{
			idc = 1458;
		};
		class Edit_59: Edit_0
		{
			idc = 1459;
		};
		class Edit_6: Edit_0
		{
			idc = 1406;
		};
		class Edit_60: Edit_0
		{
			idc = 1460;
		};
		class Edit_61: Edit_0
		{
			idc = 1461;
		};
		class Edit_62: Edit_0
		{
			idc = 1462;
		};
		class Edit_63: Edit_0
		{
			idc = 1463;
		};
		class Edit_64: Edit_0
		{
			idc = 1464;
		};
		class Edit_65: Edit_0
		{
			idc = 1465;
		};
		class Edit_66: Edit_0
		{
			idc = 1466;
		};
		class Edit_67: Edit_0
		{
			idc = 1467;
		};
		class Edit_68: Edit_0
		{
			idc = 1468;
		};
		class Edit_69: Edit_0
		{
			idc = 1469;
		};
		class Edit_7: Edit_0
		{
			idc = 1407;
		};
		class Edit_70: Edit_0
		{
			idc = 1470;
		};
		class Edit_71: Edit_0
		{
			idc = 1471;
		};
		class Edit_72: Edit_0
		{
			idc = 1472;
		};
		class Edit_73: Edit_0
		{
			idc = 1473;
		};
		class Edit_74: Edit_0
		{
			idc = 1474;
		};
		class Edit_75: Edit_0
		{
			idc = 1475;
		};
		class Edit_76: Edit_0
		{
			idc = 1476;
		};
		class Edit_77: Edit_0
		{
			idc = 1477;
		};
		class Edit_78: Edit_0
		{
			idc = 1478;
		};
		class Edit_79: Edit_0
		{
			idc = 1479;
		};
		class Edit_8: Edit_0
		{
			idc = 1408;
		};
		class Edit_80: Edit_0
		{
			idc = 1480;
		};
		class Edit_81: Edit_0
		{
			idc = 1481;
		};
		class Edit_82: Edit_0
		{
			idc = 1482;
		};
		class Edit_83: Edit_0
		{
			idc = 1483;
		};
		class Edit_84: Edit_0
		{
			idc = 1484;
		};
		class Edit_85: Edit_0
		{
			idc = 1485;
		};
		class Edit_86: Edit_0
		{
			idc = 1486;
		};
		class Edit_87: Edit_0
		{
			idc = 1487;
		};
		class Edit_88: Edit_0
		{
			idc = 1488;
		};
		class Edit_89: Edit_0
		{
			idc = 1489;
		};
		class Edit_9: Edit_0
		{
			idc = 1409;
		};
		class Edit_90: Edit_0
		{
			idc = 1490;
		};
		class Edit_91: Edit_0
		{
			idc = 1491;
		};
		class Edit_92: Edit_0
		{
			idc = 1492;
		};
		class Edit_93: Edit_0
		{
			idc = 1493;
		};
		class Edit_94: Edit_0
		{
			idc = 1494;
		};
		class Edit_95: Edit_0
		{
			idc = 1495;
		};
		class Edit_96: Edit_0
		{
			idc = 1496;
		};
		class Edit_97: Edit_0
		{
			idc = 1497;
		};
		class Edit_98: Edit_0
		{
			idc = 1498;
		};
		class Edit_99: Edit_0
		{
			idc = 1499;
		};
		class Frame_0: RscFrame
		{
			h = 0;
			idc = 1800;
			text = "";
			w = 0;
			x = -3;
			y = -3;
		};
		class Frame_1: Frame_0
		{
			idc = 1801;
		};
		class Frame_10: Frame_0
		{
			idc = 1810;
		};
		class Frame_11: Frame_0
		{
			idc = 1811;
		};
		class Frame_12: Frame_0
		{
			idc = 1812;
		};
		class Frame_13: Frame_0
		{
			idc = 1813;
		};
		class Frame_14: Frame_0
		{
			idc = 1814;
		};
		class Frame_15: Frame_0
		{
			idc = 1815;
		};
		class Frame_16: Frame_0
		{
			idc = 1816;
		};
		class Frame_17: Frame_0
		{
			idc = 1817;
		};
		class Frame_18: Frame_0
		{
			idc = 1818;
		};
		class Frame_19: Frame_0
		{
			idc = 1819;
		};
		class Frame_2: Frame_0
		{
			idc = 1802;
		};
		class Frame_20: Frame_0
		{
			idc = 1820;
		};
		class Frame_21: Frame_0
		{
			idc = 1821;
		};
		class Frame_22: Frame_0
		{
			idc = 1822;
		};
		class Frame_23: Frame_0
		{
			idc = 1823;
		};
		class Frame_24: Frame_0
		{
			idc = 1824;
		};
		class Frame_25: Frame_0
		{
			idc = 1825;
		};
		class Frame_26: Frame_0
		{
			idc = 1826;
		};
		class Frame_27: Frame_0
		{
			idc = 1827;
		};
		class Frame_28: Frame_0
		{
			idc = 1828;
		};
		class Frame_29: Frame_0
		{
			idc = 1829;
		};
		class Frame_3: Frame_0
		{
			idc = 1803;
		};
		class Frame_30: Frame_0
		{
			idc = 1830;
		};
		class Frame_31: Frame_0
		{
			idc = 1831;
		};
		class Frame_32: Frame_0
		{
			idc = 1832;
		};
		class Frame_33: Frame_0
		{
			idc = 1833;
		};
		class Frame_34: Frame_0
		{
			idc = 1834;
		};
		class Frame_35: Frame_0
		{
			idc = 1835;
		};
		class Frame_36: Frame_0
		{
			idc = 1836;
		};
		class Frame_37: Frame_0
		{
			idc = 1837;
		};
		class Frame_38: Frame_0
		{
			idc = 1838;
		};
		class Frame_39: Frame_0
		{
			idc = 1839;
		};
		class Frame_4: Frame_0
		{
			idc = 1804;
		};
		class Frame_40: Frame_0
		{
			idc = 1840;
		};
		class Frame_41: Frame_0
		{
			idc = 1841;
		};
		class Frame_42: Frame_0
		{
			idc = 1842;
		};
		class Frame_43: Frame_0
		{
			idc = 1843;
		};
		class Frame_44: Frame_0
		{
			idc = 1844;
		};
		class Frame_45: Frame_0
		{
			idc = 1845;
		};
		class Frame_46: Frame_0
		{
			idc = 1846;
		};
		class Frame_47: Frame_0
		{
			idc = 1847;
		};
		class Frame_48: Frame_0
		{
			idc = 1848;
		};
		class Frame_49: Frame_0
		{
			idc = 1849;
		};
		class Frame_5: Frame_0
		{
			idc = 1805;
		};
		class Frame_50: Frame_0
		{
			idc = 1850;
		};
		class Frame_51: Frame_0
		{
			idc = 1851;
		};
		class Frame_52: Frame_0
		{
			idc = 1852;
		};
		class Frame_53: Frame_0
		{
			idc = 1853;
		};
		class Frame_54: Frame_0
		{
			idc = 1854;
		};
		class Frame_55: Frame_0
		{
			idc = 1855;
		};
		class Frame_56: Frame_0
		{
			idc = 1856;
		};
		class Frame_57: Frame_0
		{
			idc = 1857;
		};
		class Frame_58: Frame_0
		{
			idc = 1858;
		};
		class Frame_59: Frame_0
		{
			idc = 1859;
		};
		class Frame_6: Frame_0
		{
			idc = 1806;
		};
		class Frame_60: Frame_0
		{
			idc = 1860;
		};
		class Frame_61: Frame_0
		{
			idc = 1861;
		};
		class Frame_62: Frame_0
		{
			idc = 1862;
		};
		class Frame_63: Frame_0
		{
			idc = 1863;
		};
		class Frame_64: Frame_0
		{
			idc = 1864;
		};
		class Frame_65: Frame_0
		{
			idc = 1865;
		};
		class Frame_66: Frame_0
		{
			idc = 1866;
		};
		class Frame_67: Frame_0
		{
			idc = 1867;
		};
		class Frame_68: Frame_0
		{
			idc = 1868;
		};
		class Frame_69: Frame_0
		{
			idc = 1869;
		};
		class Frame_7: Frame_0
		{
			idc = 1807;
		};
		class Frame_70: Frame_0
		{
			idc = 1870;
		};
		class Frame_71: Frame_0
		{
			idc = 1871;
		};
		class Frame_72: Frame_0
		{
			idc = 1872;
		};
		class Frame_73: Frame_0
		{
			idc = 1873;
		};
		class Frame_74: Frame_0
		{
			idc = 1874;
		};
		class Frame_75: Frame_0
		{
			idc = 1875;
		};
		class Frame_76: Frame_0
		{
			idc = 1876;
		};
		class Frame_77: Frame_0
		{
			idc = 1877;
		};
		class Frame_78: Frame_0
		{
			idc = 1878;
		};
		class Frame_79: Frame_0
		{
			idc = 1879;
		};
		class Frame_8: Frame_0
		{
			idc = 1808;
		};
		class Frame_80: Frame_0
		{
			idc = 1880;
		};
		class Frame_81: Frame_0
		{
			idc = 1881;
		};
		class Frame_82: Frame_0
		{
			idc = 1882;
		};
		class Frame_83: Frame_0
		{
			idc = 1883;
		};
		class Frame_84: Frame_0
		{
			idc = 1884;
		};
		class Frame_85: Frame_0
		{
			idc = 1885;
		};
		class Frame_86: Frame_0
		{
			idc = 1886;
		};
		class Frame_87: Frame_0
		{
			idc = 1887;
		};
		class Frame_88: Frame_0
		{
			idc = 1888;
		};
		class Frame_89: Frame_0
		{
			idc = 1889;
		};
		class Frame_9: Frame_0
		{
			idc = 1809;
		};
		class Frame_90: Frame_0
		{
			idc = 1890;
		};
		class Frame_91: Frame_0
		{
			idc = 1891;
		};
		class Frame_92: Frame_0
		{
			idc = 1892;
		};
		class Frame_93: Frame_0
		{
			idc = 1893;
		};
		class Frame_94: Frame_0
		{
			idc = 1894;
		};
		class Frame_95: Frame_0
		{
			idc = 1895;
		};
		class Frame_96: Frame_0
		{
			idc = 1896;
		};
		class Frame_97: Frame_0
		{
			idc = 1897;
		};
		class Frame_98: Frame_0
		{
			idc = 1898;
		};
		class Frame_99: Frame_0
		{
			idc = 1899;
		};
		class Grid_0: RscText
		{
			idc = 900;
			text = "";
			x = -3;
			y = -3;
		};
		class Grid_1: Grid_0
		{
			idc = 901;
		};
		class Grid_10: Grid_0
		{
			idc = 910;
		};
		class Grid_11: Grid_0
		{
			idc = 911;
		};
		class Grid_12: Grid_0
		{
			idc = 912;
		};
		class Grid_13: Grid_0
		{
			idc = 913;
		};
		class Grid_14: Grid_0
		{
			idc = 914;
		};
		class Grid_15: Grid_0
		{
			idc = 915;
		};
		class Grid_16: Grid_0
		{
			idc = 916;
		};
		class Grid_17: Grid_0
		{
			idc = 917;
		};
		class Grid_18: Grid_0
		{
			idc = 918;
		};
		class Grid_19: Grid_0
		{
			idc = 919;
		};
		class Grid_2: Grid_0
		{
			idc = 902;
		};
		class Grid_20: Grid_0
		{
			idc = 920;
		};
		class Grid_21: Grid_0
		{
			idc = 921;
		};
		class Grid_22: Grid_0
		{
			idc = 922;
		};
		class Grid_23: Grid_0
		{
			idc = 923;
		};
		class Grid_24: Grid_0
		{
			idc = 924;
		};
		class Grid_25: Grid_0
		{
			idc = 925;
		};
		class Grid_26: Grid_0
		{
			idc = 926;
		};
		class Grid_27: Grid_0
		{
			idc = 927;
		};
		class Grid_28: Grid_0
		{
			idc = 928;
		};
		class Grid_29: Grid_0
		{
			idc = 929;
		};
		class Grid_3: Grid_0
		{
			idc = 903;
		};
		class Grid_30: Grid_0
		{
			idc = 930;
		};
		class Grid_31: Grid_0
		{
			idc = 931;
		};
		class Grid_32: Grid_0
		{
			idc = 932;
		};
		class Grid_33: Grid_0
		{
			idc = 933;
		};
		class Grid_34: Grid_0
		{
			idc = 934;
		};
		class Grid_35: Grid_0
		{
			idc = 935;
		};
		class Grid_36: Grid_0
		{
			idc = 936;
		};
		class Grid_37: Grid_0
		{
			idc = 937;
		};
		class Grid_38: Grid_0
		{
			idc = 938;
		};
		class Grid_39: Grid_0
		{
			idc = 939;
		};
		class Grid_4: Grid_0
		{
			idc = 904;
		};
		class Grid_40: Grid_0
		{
			idc = 940;
		};
		class Grid_41: Grid_0
		{
			idc = 941;
		};
		class Grid_42: Grid_0
		{
			idc = 942;
		};
		class Grid_43: Grid_0
		{
			idc = 943;
		};
		class Grid_44: Grid_0
		{
			idc = 944;
		};
		class Grid_45: Grid_0
		{
			idc = 945;
		};
		class Grid_46: Grid_0
		{
			idc = 946;
		};
		class Grid_47: Grid_0
		{
			idc = 947;
		};
		class Grid_48: Grid_0
		{
			idc = 948;
		};
		class Grid_49: Grid_0
		{
			idc = 949;
		};
		class Grid_5: Grid_0
		{
			idc = 905;
		};
		class Grid_50: Grid_0
		{
			idc = 950;
		};
		class Grid_51: Grid_0
		{
			idc = 951;
		};
		class Grid_52: Grid_0
		{
			idc = 952;
		};
		class Grid_53: Grid_0
		{
			idc = 953;
		};
		class Grid_54: Grid_0
		{
			idc = 954;
		};
		class Grid_55: Grid_0
		{
			idc = 955;
		};
		class Grid_56: Grid_0
		{
			idc = 956;
		};
		class Grid_57: Grid_0
		{
			idc = 957;
		};
		class Grid_58: Grid_0
		{
			idc = 958;
		};
		class Grid_59: Grid_0
		{
			idc = 959;
		};
		class Grid_6: Grid_0
		{
			idc = 906;
		};
		class Grid_60: Grid_0
		{
			idc = 960;
		};
		class Grid_61: Grid_0
		{
			idc = 961;
		};
		class Grid_62: Grid_0
		{
			idc = 962;
		};
		class Grid_63: Grid_0
		{
			idc = 963;
		};
		class Grid_64: Grid_0
		{
			idc = 964;
		};
		class Grid_65: Grid_0
		{
			idc = 965;
		};
		class Grid_66: Grid_0
		{
			idc = 966;
		};
		class Grid_67: Grid_0
		{
			idc = 967;
		};
		class Grid_68: Grid_0
		{
			idc = 968;
		};
		class Grid_69: Grid_0
		{
			idc = 969;
		};
		class Grid_7: Grid_0
		{
			idc = 907;
		};
		class Grid_70: Grid_0
		{
			idc = 970;
		};
		class Grid_71: Grid_0
		{
			idc = 971;
		};
		class Grid_72: Grid_0
		{
			idc = 972;
		};
		class Grid_73: Grid_0
		{
			idc = 973;
		};
		class Grid_74: Grid_0
		{
			idc = 974;
		};
		class Grid_75: Grid_0
		{
			idc = 975;
		};
		class Grid_76: Grid_0
		{
			idc = 976;
		};
		class Grid_77: Grid_0
		{
			idc = 977;
		};
		class Grid_78: Grid_0
		{
			idc = 978;
		};
		class Grid_79: Grid_0
		{
			idc = 979;
		};
		class Grid_8: Grid_0
		{
			idc = 908;
		};
		class Grid_80: Grid_0
		{
			idc = 980;
		};
		class Grid_81: Grid_0
		{
			idc = 981;
		};
		class Grid_82: Grid_0
		{
			idc = 982;
		};
		class Grid_83: Grid_0
		{
			idc = 983;
		};
		class Grid_84: Grid_0
		{
			idc = 984;
		};
		class Grid_85: Grid_0
		{
			idc = 985;
		};
		class Grid_86: Grid_0
		{
			idc = 986;
		};
		class Grid_87: Grid_0
		{
			idc = 987;
		};
		class Grid_88: Grid_0
		{
			idc = 988;
		};
		class Grid_89: Grid_0
		{
			idc = 989;
		};
		class Grid_9: Grid_0
		{
			idc = 909;
		};
		class Grid_90: Grid_0
		{
			idc = 990;
		};
		class Grid_91: Grid_0
		{
			idc = 991;
		};
		class Grid_92: Grid_0
		{
			idc = 992;
		};
		class Grid_93: Grid_0
		{
			idc = 993;
		};
		class Grid_94: Grid_0
		{
			idc = 994;
		};
		class Grid_95: Grid_0
		{
			idc = 995;
		};
		class Grid_96: Grid_0
		{
			idc = 996;
		};
		class Grid_97: Grid_0
		{
			idc = 997;
		};
		class Grid_98: Grid_0
		{
			idc = 998;
		};
		class Grid_99: Grid_0
		{
			idc = 999;
		};
		class IGUIBack_0: IGUIBack
		{
			idc = 2200;
			text = "";
			x = -3;
			y = -3;
		};
		class IGUIBack_1: IGUIBack_0
		{
			idc = 2201;
		};
		class IGUIBack_10: IGUIBack_0
		{
			idc = 2210;
		};
		class IGUIBack_11: IGUIBack_0
		{
			idc = 2211;
		};
		class IGUIBack_12: IGUIBack_0
		{
			idc = 2212;
		};
		class IGUIBack_13: IGUIBack_0
		{
			idc = 2213;
		};
		class IGUIBack_14: IGUIBack_0
		{
			idc = 2214;
		};
		class IGUIBack_15: IGUIBack_0
		{
			idc = 2215;
		};
		class IGUIBack_16: IGUIBack_0
		{
			idc = 2216;
		};
		class IGUIBack_17: IGUIBack_0
		{
			idc = 2217;
		};
		class IGUIBack_18: IGUIBack_0
		{
			idc = 2218;
		};
		class IGUIBack_19: IGUIBack_0
		{
			idc = 2219;
		};
		class IGUIBack_2: IGUIBack_0
		{
			idc = 2202;
		};
		class IGUIBack_20: IGUIBack_0
		{
			idc = 2220;
		};
		class IGUIBack_21: IGUIBack_0
		{
			idc = 2221;
		};
		class IGUIBack_22: IGUIBack_0
		{
			idc = 2222;
		};
		class IGUIBack_23: IGUIBack_0
		{
			idc = 2223;
		};
		class IGUIBack_24: IGUIBack_0
		{
			idc = 2224;
		};
		class IGUIBack_25: IGUIBack_0
		{
			idc = 2225;
		};
		class IGUIBack_26: IGUIBack_0
		{
			idc = 2226;
		};
		class IGUIBack_27: IGUIBack_0
		{
			idc = 2227;
		};
		class IGUIBack_28: IGUIBack_0
		{
			idc = 2228;
		};
		class IGUIBack_29: IGUIBack_0
		{
			idc = 2229;
		};
		class IGUIBack_3: IGUIBack_0
		{
			idc = 2203;
		};
		class IGUIBack_30: IGUIBack_0
		{
			idc = 2230;
		};
		class IGUIBack_31: IGUIBack_0
		{
			idc = 2231;
		};
		class IGUIBack_32: IGUIBack_0
		{
			idc = 2232;
		};
		class IGUIBack_33: IGUIBack_0
		{
			idc = 2233;
		};
		class IGUIBack_34: IGUIBack_0
		{
			idc = 2234;
		};
		class IGUIBack_35: IGUIBack_0
		{
			idc = 2235;
		};
		class IGUIBack_36: IGUIBack_0
		{
			idc = 2236;
		};
		class IGUIBack_37: IGUIBack_0
		{
			idc = 2237;
		};
		class IGUIBack_38: IGUIBack_0
		{
			idc = 2238;
		};
		class IGUIBack_39: IGUIBack_0
		{
			idc = 2239;
		};
		class IGUIBack_4: IGUIBack_0
		{
			idc = 2204;
		};
		class IGUIBack_40: IGUIBack_0
		{
			idc = 2240;
		};
		class IGUIBack_41: IGUIBack_0
		{
			idc = 2241;
		};
		class IGUIBack_42: IGUIBack_0
		{
			idc = 2242;
		};
		class IGUIBack_43: IGUIBack_0
		{
			idc = 2243;
		};
		class IGUIBack_44: IGUIBack_0
		{
			idc = 2244;
		};
		class IGUIBack_45: IGUIBack_0
		{
			idc = 2245;
		};
		class IGUIBack_46: IGUIBack_0
		{
			idc = 2246;
		};
		class IGUIBack_47: IGUIBack_0
		{
			idc = 2247;
		};
		class IGUIBack_48: IGUIBack_0
		{
			idc = 2248;
		};
		class IGUIBack_49: IGUIBack_0
		{
			idc = 2249;
		};
		class IGUIBack_5: IGUIBack_0
		{
			idc = 2205;
		};
		class IGUIBack_50: IGUIBack_0
		{
			idc = 2250;
		};
		class IGUIBack_51: IGUIBack_0
		{
			idc = 2251;
		};
		class IGUIBack_52: IGUIBack_0
		{
			idc = 2252;
		};
		class IGUIBack_53: IGUIBack_0
		{
			idc = 2253;
		};
		class IGUIBack_54: IGUIBack_0
		{
			idc = 2254;
		};
		class IGUIBack_55: IGUIBack_0
		{
			idc = 2255;
		};
		class IGUIBack_56: IGUIBack_0
		{
			idc = 2256;
		};
		class IGUIBack_57: IGUIBack_0
		{
			idc = 2257;
		};
		class IGUIBack_58: IGUIBack_0
		{
			idc = 2258;
		};
		class IGUIBack_59: IGUIBack_0
		{
			idc = 2259;
		};
		class IGUIBack_6: IGUIBack_0
		{
			idc = 2206;
		};
		class IGUIBack_60: IGUIBack_0
		{
			idc = 2260;
		};
		class IGUIBack_61: IGUIBack_0
		{
			idc = 2261;
		};
		class IGUIBack_62: IGUIBack_0
		{
			idc = 2262;
		};
		class IGUIBack_63: IGUIBack_0
		{
			idc = 2263;
		};
		class IGUIBack_64: IGUIBack_0
		{
			idc = 2264;
		};
		class IGUIBack_65: IGUIBack_0
		{
			idc = 2265;
		};
		class IGUIBack_66: IGUIBack_0
		{
			idc = 2266;
		};
		class IGUIBack_67: IGUIBack_0
		{
			idc = 2267;
		};
		class IGUIBack_68: IGUIBack_0
		{
			idc = 2268;
		};
		class IGUIBack_69: IGUIBack_0
		{
			idc = 2269;
		};
		class IGUIBack_7: IGUIBack_0
		{
			idc = 2207;
		};
		class IGUIBack_70: IGUIBack_0
		{
			idc = 2270;
		};
		class IGUIBack_71: IGUIBack_0
		{
			idc = 2271;
		};
		class IGUIBack_72: IGUIBack_0
		{
			idc = 2272;
		};
		class IGUIBack_73: IGUIBack_0
		{
			idc = 2273;
		};
		class IGUIBack_74: IGUIBack_0
		{
			idc = 2274;
		};
		class IGUIBack_75: IGUIBack_0
		{
			idc = 2275;
		};
		class IGUIBack_76: IGUIBack_0
		{
			idc = 2276;
		};
		class IGUIBack_77: IGUIBack_0
		{
			idc = 2277;
		};
		class IGUIBack_78: IGUIBack_0
		{
			idc = 2278;
		};
		class IGUIBack_79: IGUIBack_0
		{
			idc = 2279;
		};
		class IGUIBack_8: IGUIBack_0
		{
			idc = 2208;
		};
		class IGUIBack_80: IGUIBack_0
		{
			idc = 2280;
		};
		class IGUIBack_81: IGUIBack_0
		{
			idc = 2281;
		};
		class IGUIBack_82: IGUIBack_0
		{
			idc = 2282;
		};
		class IGUIBack_83: IGUIBack_0
		{
			idc = 2283;
		};
		class IGUIBack_84: IGUIBack_0
		{
			idc = 2284;
		};
		class IGUIBack_85: IGUIBack_0
		{
			idc = 2285;
		};
		class IGUIBack_86: IGUIBack_0
		{
			idc = 2286;
		};
		class IGUIBack_87: IGUIBack_0
		{
			idc = 2287;
		};
		class IGUIBack_88: IGUIBack_0
		{
			idc = 2288;
		};
		class IGUIBack_89: IGUIBack_0
		{
			idc = 2289;
		};
		class IGUIBack_9: IGUIBack_0
		{
			idc = 2209;
		};
		class IGUIBack_90: IGUIBack_0
		{
			idc = 2290;
		};
		class IGUIBack_91: IGUIBack_0
		{
			idc = 2291;
		};
		class IGUIBack_92: IGUIBack_0
		{
			idc = 2292;
		};
		class IGUIBack_93: IGUIBack_0
		{
			idc = 2293;
		};
		class IGUIBack_94: IGUIBack_0
		{
			idc = 2294;
		};
		class IGUIBack_95: IGUIBack_0
		{
			idc = 2295;
		};
		class IGUIBack_96: IGUIBack_0
		{
			idc = 2296;
		};
		class IGUIBack_97: IGUIBack_0
		{
			idc = 2297;
		};
		class IGUIBack_98: IGUIBack_0
		{
			idc = 2298;
		};
		class IGUIBack_99: IGUIBack_0
		{
			idc = 2299;
		};
		class Listbox_0: RscListBox
		{
			h = 1;
			idc = 1500;
			text = "";
			w = 1;
			x = -3;
			y = -3;
		};
		class Listbox_1: Listbox_0
		{
			idc = 1501;
		};
		class Listbox_10: Listbox_0
		{
			idc = 1510;
		};
		class Listbox_11: Listbox_0
		{
			idc = 1511;
		};
		class Listbox_12: Listbox_0
		{
			idc = 1512;
		};
		class Listbox_13: Listbox_0
		{
			idc = 1513;
		};
		class Listbox_14: Listbox_0
		{
			idc = 1514;
		};
		class Listbox_15: Listbox_0
		{
			idc = 1515;
		};
		class Listbox_16: Listbox_0
		{
			idc = 1516;
		};
		class Listbox_17: Listbox_0
		{
			idc = 1517;
		};
		class Listbox_18: Listbox_0
		{
			idc = 1518;
		};
		class Listbox_19: Listbox_0
		{
			idc = 1519;
		};
		class Listbox_2: Listbox_0
		{
			idc = 1502;
		};
		class Listbox_20: Listbox_0
		{
			idc = 1520;
		};
		class Listbox_21: Listbox_0
		{
			idc = 1521;
		};
		class Listbox_22: Listbox_0
		{
			idc = 1522;
		};
		class Listbox_23: Listbox_0
		{
			idc = 1523;
		};
		class Listbox_24: Listbox_0
		{
			idc = 1524;
		};
		class Listbox_25: Listbox_0
		{
			idc = 1525;
		};
		class Listbox_26: Listbox_0
		{
			idc = 1526;
		};
		class Listbox_27: Listbox_0
		{
			idc = 1527;
		};
		class Listbox_28: Listbox_0
		{
			idc = 1528;
		};
		class Listbox_29: Listbox_0
		{
			idc = 1529;
		};
		class Listbox_3: Listbox_0
		{
			idc = 1503;
		};
		class Listbox_30: Listbox_0
		{
			idc = 1530;
		};
		class Listbox_31: Listbox_0
		{
			idc = 1531;
		};
		class Listbox_32: Listbox_0
		{
			idc = 1532;
		};
		class Listbox_33: Listbox_0
		{
			idc = 1533;
		};
		class Listbox_34: Listbox_0
		{
			idc = 1534;
		};
		class Listbox_35: Listbox_0
		{
			idc = 1535;
		};
		class Listbox_36: Listbox_0
		{
			idc = 1536;
		};
		class Listbox_37: Listbox_0
		{
			idc = 1537;
		};
		class Listbox_38: Listbox_0
		{
			idc = 1538;
		};
		class Listbox_39: Listbox_0
		{
			idc = 1539;
		};
		class Listbox_4: Listbox_0
		{
			idc = 1504;
		};
		class Listbox_40: Listbox_0
		{
			idc = 1540;
		};
		class Listbox_41: Listbox_0
		{
			idc = 1541;
		};
		class Listbox_42: Listbox_0
		{
			idc = 1542;
		};
		class Listbox_43: Listbox_0
		{
			idc = 1543;
		};
		class Listbox_44: Listbox_0
		{
			idc = 1544;
		};
		class Listbox_45: Listbox_0
		{
			idc = 1545;
		};
		class Listbox_46: Listbox_0
		{
			idc = 1546;
		};
		class Listbox_47: Listbox_0
		{
			idc = 1547;
		};
		class Listbox_48: Listbox_0
		{
			idc = 1548;
		};
		class Listbox_49: Listbox_0
		{
			idc = 1549;
		};
		class Listbox_5: Listbox_0
		{
			idc = 1505;
		};
		class Listbox_50: Listbox_0
		{
			idc = 1550;
		};
		class Listbox_51: Listbox_0
		{
			idc = 1551;
		};
		class Listbox_52: Listbox_0
		{
			idc = 1552;
		};
		class Listbox_53: Listbox_0
		{
			idc = 1553;
		};
		class Listbox_54: Listbox_0
		{
			idc = 1554;
		};
		class Listbox_55: Listbox_0
		{
			idc = 1555;
		};
		class Listbox_56: Listbox_0
		{
			idc = 1556;
		};
		class Listbox_57: Listbox_0
		{
			idc = 1557;
		};
		class Listbox_58: Listbox_0
		{
			idc = 1558;
		};
		class Listbox_59: Listbox_0
		{
			idc = 1559;
		};
		class Listbox_6: Listbox_0
		{
			idc = 1506;
		};
		class Listbox_60: Listbox_0
		{
			idc = 1560;
		};
		class Listbox_61: Listbox_0
		{
			idc = 1561;
		};
		class Listbox_62: Listbox_0
		{
			idc = 1562;
		};
		class Listbox_63: Listbox_0
		{
			idc = 1563;
		};
		class Listbox_64: Listbox_0
		{
			idc = 1564;
		};
		class Listbox_65: Listbox_0
		{
			idc = 1565;
		};
		class Listbox_66: Listbox_0
		{
			idc = 1566;
		};
		class Listbox_67: Listbox_0
		{
			idc = 1567;
		};
		class Listbox_68: Listbox_0
		{
			idc = 1568;
		};
		class Listbox_69: Listbox_0
		{
			idc = 1569;
		};
		class Listbox_7: Listbox_0
		{
			idc = 1507;
		};
		class Listbox_70: Listbox_0
		{
			idc = 1570;
		};
		class Listbox_71: Listbox_0
		{
			idc = 1571;
		};
		class Listbox_72: Listbox_0
		{
			idc = 1572;
		};
		class Listbox_73: Listbox_0
		{
			idc = 1573;
		};
		class Listbox_74: Listbox_0
		{
			idc = 1574;
		};
		class Listbox_75: Listbox_0
		{
			idc = 1575;
		};
		class Listbox_76: Listbox_0
		{
			idc = 1576;
		};
		class Listbox_77: Listbox_0
		{
			idc = 1577;
		};
		class Listbox_78: Listbox_0
		{
			idc = 1578;
		};
		class Listbox_79: Listbox_0
		{
			idc = 1579;
		};
		class Listbox_8: Listbox_0
		{
			idc = 1508;
		};
		class Listbox_80: Listbox_0
		{
			idc = 1580;
		};
		class Listbox_81: Listbox_0
		{
			idc = 1581;
		};
		class Listbox_82: Listbox_0
		{
			idc = 1582;
		};
		class Listbox_83: Listbox_0
		{
			idc = 1583;
		};
		class Listbox_84: Listbox_0
		{
			idc = 1584;
		};
		class Listbox_85: Listbox_0
		{
			idc = 1585;
		};
		class Listbox_86: Listbox_0
		{
			idc = 1586;
		};
		class Listbox_87: Listbox_0
		{
			idc = 1587;
		};
		class Listbox_88: Listbox_0
		{
			idc = 1588;
		};
		class Listbox_89: Listbox_0
		{
			idc = 1589;
		};
		class Listbox_9: Listbox_0
		{
			idc = 1509;
		};
		class Listbox_90: Listbox_0
		{
			idc = 1590;
		};
		class Listbox_91: Listbox_0
		{
			idc = 1591;
		};
		class Listbox_92: Listbox_0
		{
			idc = 1592;
		};
		class Listbox_93: Listbox_0
		{
			idc = 1593;
		};
		class Listbox_94: Listbox_0
		{
			idc = 1594;
		};
		class Listbox_95: Listbox_0
		{
			idc = 1595;
		};
		class Listbox_96: Listbox_0
		{
			idc = 1596;
		};
		class Listbox_97: Listbox_0
		{
			idc = 1597;
		};
		class Listbox_98: Listbox_0
		{
			idc = 1598;
		};
		class Listbox_99: Listbox_0
		{
			idc = 1599;
		};
		class MouseArea: RscText
		{
			idc = 799;
			linespacing = 1;
			style = "0x00 + 0x10";
			x = -3;
			y = -3;
		};
		class Picture_0: RscPicture
		{
			autoplay = 1;
			idc = 1200;
			loops = 1;
			text = "";
			x = -3;
			y = -3;
		};
		class Picture_1: Picture_0
		{
			idc = 1201;
		};
		class Picture_10: Picture_0
		{
			idc = 1210;
		};
		class Picture_11: Picture_0
		{
			idc = 1211;
		};
		class Picture_12: Picture_0
		{
			idc = 1212;
		};
		class Picture_13: Picture_0
		{
			idc = 1213;
		};
		class Picture_14: Picture_0
		{
			idc = 1214;
		};
		class Picture_15: Picture_0
		{
			idc = 1215;
		};
		class Picture_16: Picture_0
		{
			idc = 1216;
		};
		class Picture_17: Picture_0
		{
			idc = 1217;
		};
		class Picture_18: Picture_0
		{
			idc = 1218;
		};
		class Picture_19: Picture_0
		{
			idc = 1219;
		};
		class Picture_2: Picture_0
		{
			idc = 1202;
		};
		class Picture_20: Picture_0
		{
			idc = 1220;
		};
		class Picture_21: Picture_0
		{
			idc = 1221;
		};
		class Picture_22: Picture_0
		{
			idc = 1222;
		};
		class Picture_23: Picture_0
		{
			idc = 1223;
		};
		class Picture_24: Picture_0
		{
			idc = 1224;
		};
		class Picture_25: Picture_0
		{
			idc = 1225;
		};
		class Picture_26: Picture_0
		{
			idc = 1226;
		};
		class Picture_27: Picture_0
		{
			idc = 1227;
		};
		class Picture_28: Picture_0
		{
			idc = 1228;
		};
		class Picture_29: Picture_0
		{
			idc = 1229;
		};
		class Picture_3: Picture_0
		{
			idc = 1203;
		};
		class Picture_30: Picture_0
		{
			idc = 1230;
		};
		class Picture_31: Picture_0
		{
			idc = 1231;
		};
		class Picture_32: Picture_0
		{
			idc = 1232;
		};
		class Picture_33: Picture_0
		{
			idc = 1233;
		};
		class Picture_34: Picture_0
		{
			idc = 1234;
		};
		class Picture_35: Picture_0
		{
			idc = 1235;
		};
		class Picture_36: Picture_0
		{
			idc = 1236;
		};
		class Picture_37: Picture_0
		{
			idc = 1237;
		};
		class Picture_38: Picture_0
		{
			idc = 1238;
		};
		class Picture_39: Picture_0
		{
			idc = 1239;
		};
		class Picture_4: Picture_0
		{
			idc = 1204;
		};
		class Picture_40: Picture_0
		{
			idc = 1240;
		};
		class Picture_41: Picture_0
		{
			idc = 1241;
		};
		class Picture_42: Picture_0
		{
			idc = 1242;
		};
		class Picture_43: Picture_0
		{
			idc = 1243;
		};
		class Picture_44: Picture_0
		{
			idc = 1244;
		};
		class Picture_45: Picture_0
		{
			idc = 1245;
		};
		class Picture_46: Picture_0
		{
			idc = 1246;
		};
		class Picture_47: Picture_0
		{
			idc = 1247;
		};
		class Picture_48: Picture_0
		{
			idc = 1248;
		};
		class Picture_49: Picture_0
		{
			idc = 1249;
		};
		class Picture_5: Picture_0
		{
			idc = 1205;
		};
		class Picture_50: Picture_0
		{
			idc = 1250;
		};
		class Picture_51: Picture_0
		{
			idc = 1251;
		};
		class Picture_52: Picture_0
		{
			idc = 1252;
		};
		class Picture_53: Picture_0
		{
			idc = 1253;
		};
		class Picture_54: Picture_0
		{
			idc = 1254;
		};
		class Picture_55: Picture_0
		{
			idc = 1255;
		};
		class Picture_56: Picture_0
		{
			idc = 1256;
		};
		class Picture_57: Picture_0
		{
			idc = 1257;
		};
		class Picture_58: Picture_0
		{
			idc = 1258;
		};
		class Picture_59: Picture_0
		{
			idc = 1259;
		};
		class Picture_6: Picture_0
		{
			idc = 1206;
		};
		class Picture_60: Picture_0
		{
			idc = 1260;
		};
		class Picture_61: Picture_0
		{
			idc = 1261;
		};
		class Picture_62: Picture_0
		{
			idc = 1262;
		};
		class Picture_63: Picture_0
		{
			idc = 1263;
		};
		class Picture_64: Picture_0
		{
			idc = 1264;
		};
		class Picture_65: Picture_0
		{
			idc = 1265;
		};
		class Picture_66: Picture_0
		{
			idc = 1266;
		};
		class Picture_67: Picture_0
		{
			idc = 1267;
		};
		class Picture_68: Picture_0
		{
			idc = 1268;
		};
		class Picture_69: Picture_0
		{
			idc = 1269;
		};
		class Picture_7: Picture_0
		{
			idc = 1207;
		};
		class Picture_70: Picture_0
		{
			idc = 1270;
		};
		class Picture_71: Picture_0
		{
			idc = 1271;
		};
		class Picture_72: Picture_0
		{
			idc = 1272;
		};
		class Picture_73: Picture_0
		{
			idc = 1273;
		};
		class Picture_74: Picture_0
		{
			idc = 1274;
		};
		class Picture_75: Picture_0
		{
			idc = 1275;
		};
		class Picture_76: Picture_0
		{
			idc = 1276;
		};
		class Picture_77: Picture_0
		{
			idc = 1277;
		};
		class Picture_78: Picture_0
		{
			idc = 1278;
		};
		class Picture_79: Picture_0
		{
			idc = 1279;
		};
		class Picture_8: Picture_0
		{
			idc = 1208;
		};
		class Picture_80: Picture_0
		{
			idc = 1280;
		};
		class Picture_81: Picture_0
		{
			idc = 1281;
		};
		class Picture_82: Picture_0
		{
			idc = 1282;
		};
		class Picture_83: Picture_0
		{
			idc = 1283;
		};
		class Picture_84: Picture_0
		{
			idc = 1284;
		};
		class Picture_85: Picture_0
		{
			idc = 1285;
		};
		class Picture_86: Picture_0
		{
			idc = 1286;
		};
		class Picture_87: Picture_0
		{
			idc = 1287;
		};
		class Picture_88: Picture_0
		{
			idc = 1288;
		};
		class Picture_89: Picture_0
		{
			idc = 1289;
		};
		class Picture_9: Picture_0
		{
			idc = 1209;
		};
		class Picture_90: Picture_0
		{
			idc = 1290;
		};
		class Picture_91: Picture_0
		{
			idc = 1291;
		};
		class Picture_92: Picture_0
		{
			idc = 1292;
		};
		class Picture_93: Picture_0
		{
			idc = 1293;
		};
		class Picture_94: Picture_0
		{
			idc = 1294;
		};
		class Picture_95: Picture_0
		{
			idc = 1295;
		};
		class Picture_96: Picture_0
		{
			idc = 1296;
		};
		class Picture_97: Picture_0
		{
			idc = 1297;
		};
		class Picture_98: Picture_0
		{
			idc = 1298;
		};
		class Picture_99: Picture_0
		{
			idc = 1299;
		};
		class PictureKeepAspect_0: RscPictureKeepAspect
		{
			idc = 1300;
			text = "";
			x = -3;
			y = -3;
		};
		class PictureKeepAspect_1: PictureKeepAspect_0
		{
			idc = 1301;
		};
		class PictureKeepAspect_10: PictureKeepAspect_0
		{
			idc = 1310;
		};
		class PictureKeepAspect_11: PictureKeepAspect_0
		{
			idc = 1311;
		};
		class PictureKeepAspect_12: PictureKeepAspect_0
		{
			idc = 1312;
		};
		class PictureKeepAspect_13: PictureKeepAspect_0
		{
			idc = 1313;
		};
		class PictureKeepAspect_14: PictureKeepAspect_0
		{
			idc = 1314;
		};
		class PictureKeepAspect_15: PictureKeepAspect_0
		{
			idc = 1315;
		};
		class PictureKeepAspect_16: PictureKeepAspect_0
		{
			idc = 1316;
		};
		class PictureKeepAspect_17: PictureKeepAspect_0
		{
			idc = 1317;
		};
		class PictureKeepAspect_18: PictureKeepAspect_0
		{
			idc = 1318;
		};
		class PictureKeepAspect_19: PictureKeepAspect_0
		{
			idc = 1319;
		};
		class PictureKeepAspect_2: PictureKeepAspect_0
		{
			idc = 1302;
		};
		class PictureKeepAspect_20: PictureKeepAspect_0
		{
			idc = 1320;
		};
		class PictureKeepAspect_21: PictureKeepAspect_0
		{
			idc = 1321;
		};
		class PictureKeepAspect_22: PictureKeepAspect_0
		{
			idc = 1322;
		};
		class PictureKeepAspect_23: PictureKeepAspect_0
		{
			idc = 1323;
		};
		class PictureKeepAspect_24: PictureKeepAspect_0
		{
			idc = 1324;
		};
		class PictureKeepAspect_25: PictureKeepAspect_0
		{
			idc = 1325;
		};
		class PictureKeepAspect_26: PictureKeepAspect_0
		{
			idc = 1326;
		};
		class PictureKeepAspect_27: PictureKeepAspect_0
		{
			idc = 1327;
		};
		class PictureKeepAspect_28: PictureKeepAspect_0
		{
			idc = 1328;
		};
		class PictureKeepAspect_29: PictureKeepAspect_0
		{
			idc = 1329;
		};
		class PictureKeepAspect_3: PictureKeepAspect_0
		{
			idc = 1303;
		};
		class PictureKeepAspect_30: PictureKeepAspect_0
		{
			idc = 1330;
		};
		class PictureKeepAspect_31: PictureKeepAspect_0
		{
			idc = 1331;
		};
		class PictureKeepAspect_32: PictureKeepAspect_0
		{
			idc = 1332;
		};
		class PictureKeepAspect_33: PictureKeepAspect_0
		{
			idc = 1333;
		};
		class PictureKeepAspect_34: PictureKeepAspect_0
		{
			idc = 1334;
		};
		class PictureKeepAspect_35: PictureKeepAspect_0
		{
			idc = 1335;
		};
		class PictureKeepAspect_36: PictureKeepAspect_0
		{
			idc = 1336;
		};
		class PictureKeepAspect_37: PictureKeepAspect_0
		{
			idc = 1337;
		};
		class PictureKeepAspect_38: PictureKeepAspect_0
		{
			idc = 1338;
		};
		class PictureKeepAspect_39: PictureKeepAspect_0
		{
			idc = 1339;
		};
		class PictureKeepAspect_4: PictureKeepAspect_0
		{
			idc = 1304;
		};
		class PictureKeepAspect_40: PictureKeepAspect_0
		{
			idc = 1340;
		};
		class PictureKeepAspect_41: PictureKeepAspect_0
		{
			idc = 1341;
		};
		class PictureKeepAspect_42: PictureKeepAspect_0
		{
			idc = 1342;
		};
		class PictureKeepAspect_43: PictureKeepAspect_0
		{
			idc = 1343;
		};
		class PictureKeepAspect_44: PictureKeepAspect_0
		{
			idc = 1344;
		};
		class PictureKeepAspect_45: PictureKeepAspect_0
		{
			idc = 1345;
		};
		class PictureKeepAspect_46: PictureKeepAspect_0
		{
			idc = 1346;
		};
		class PictureKeepAspect_47: PictureKeepAspect_0
		{
			idc = 1347;
		};
		class PictureKeepAspect_48: PictureKeepAspect_0
		{
			idc = 1348;
		};
		class PictureKeepAspect_49: PictureKeepAspect_0
		{
			idc = 1349;
		};
		class PictureKeepAspect_5: PictureKeepAspect_0
		{
			idc = 1305;
		};
		class PictureKeepAspect_50: PictureKeepAspect_0
		{
			idc = 1350;
		};
		class PictureKeepAspect_51: PictureKeepAspect_0
		{
			idc = 1351;
		};
		class PictureKeepAspect_52: PictureKeepAspect_0
		{
			idc = 1352;
		};
		class PictureKeepAspect_53: PictureKeepAspect_0
		{
			idc = 1353;
		};
		class PictureKeepAspect_54: PictureKeepAspect_0
		{
			idc = 1354;
		};
		class PictureKeepAspect_55: PictureKeepAspect_0
		{
			idc = 1355;
		};
		class PictureKeepAspect_56: PictureKeepAspect_0
		{
			idc = 1356;
		};
		class PictureKeepAspect_57: PictureKeepAspect_0
		{
			idc = 1357;
		};
		class PictureKeepAspect_58: PictureKeepAspect_0
		{
			idc = 1358;
		};
		class PictureKeepAspect_59: PictureKeepAspect_0
		{
			idc = 1359;
		};
		class PictureKeepAspect_6: PictureKeepAspect_0
		{
			idc = 1306;
		};
		class PictureKeepAspect_60: PictureKeepAspect_0
		{
			idc = 1360;
		};
		class PictureKeepAspect_61: PictureKeepAspect_0
		{
			idc = 1361;
		};
		class PictureKeepAspect_62: PictureKeepAspect_0
		{
			idc = 1362;
		};
		class PictureKeepAspect_63: PictureKeepAspect_0
		{
			idc = 1363;
		};
		class PictureKeepAspect_64: PictureKeepAspect_0
		{
			idc = 1364;
		};
		class PictureKeepAspect_65: PictureKeepAspect_0
		{
			idc = 1365;
		};
		class PictureKeepAspect_66: PictureKeepAspect_0
		{
			idc = 1366;
		};
		class PictureKeepAspect_67: PictureKeepAspect_0
		{
			idc = 1367;
		};
		class PictureKeepAspect_68: PictureKeepAspect_0
		{
			idc = 1368;
		};
		class PictureKeepAspect_69: PictureKeepAspect_0
		{
			idc = 1369;
		};
		class PictureKeepAspect_7: PictureKeepAspect_0
		{
			idc = 1307;
		};
		class PictureKeepAspect_70: PictureKeepAspect_0
		{
			idc = 1370;
		};
		class PictureKeepAspect_71: PictureKeepAspect_0
		{
			idc = 1371;
		};
		class PictureKeepAspect_72: PictureKeepAspect_0
		{
			idc = 1372;
		};
		class PictureKeepAspect_73: PictureKeepAspect_0
		{
			idc = 1373;
		};
		class PictureKeepAspect_74: PictureKeepAspect_0
		{
			idc = 1374;
		};
		class PictureKeepAspect_75: PictureKeepAspect_0
		{
			idc = 1375;
		};
		class PictureKeepAspect_76: PictureKeepAspect_0
		{
			idc = 1376;
		};
		class PictureKeepAspect_77: PictureKeepAspect_0
		{
			idc = 1377;
		};
		class PictureKeepAspect_78: PictureKeepAspect_0
		{
			idc = 1378;
		};
		class PictureKeepAspect_79: PictureKeepAspect_0
		{
			idc = 1379;
		};
		class PictureKeepAspect_8: PictureKeepAspect_0
		{
			idc = 1308;
		};
		class PictureKeepAspect_80: PictureKeepAspect_0
		{
			idc = 1380;
		};
		class PictureKeepAspect_81: PictureKeepAspect_0
		{
			idc = 1381;
		};
		class PictureKeepAspect_82: PictureKeepAspect_0
		{
			idc = 1382;
		};
		class PictureKeepAspect_83: PictureKeepAspect_0
		{
			idc = 1383;
		};
		class PictureKeepAspect_84: PictureKeepAspect_0
		{
			idc = 1384;
		};
		class PictureKeepAspect_85: PictureKeepAspect_0
		{
			idc = 1385;
		};
		class PictureKeepAspect_86: PictureKeepAspect_0
		{
			idc = 1386;
		};
		class PictureKeepAspect_87: PictureKeepAspect_0
		{
			idc = 1387;
		};
		class PictureKeepAspect_88: PictureKeepAspect_0
		{
			idc = 1388;
		};
		class PictureKeepAspect_89: PictureKeepAspect_0
		{
			idc = 1389;
		};
		class PictureKeepAspect_9: PictureKeepAspect_0
		{
			idc = 1309;
		};
		class PictureKeepAspect_90: PictureKeepAspect_0
		{
			idc = 1390;
		};
		class PictureKeepAspect_91: PictureKeepAspect_0
		{
			idc = 1391;
		};
		class PictureKeepAspect_92: PictureKeepAspect_0
		{
			idc = 1392;
		};
		class PictureKeepAspect_93: PictureKeepAspect_0
		{
			idc = 1393;
		};
		class PictureKeepAspect_94: PictureKeepAspect_0
		{
			idc = 1394;
		};
		class PictureKeepAspect_95: PictureKeepAspect_0
		{
			idc = 1395;
		};
		class PictureKeepAspect_96: PictureKeepAspect_0
		{
			idc = 1396;
		};
		class PictureKeepAspect_97: PictureKeepAspect_0
		{
			idc = 1397;
		};
		class PictureKeepAspect_98: PictureKeepAspect_0
		{
			idc = 1398;
		};
		class PictureKeepAspect_99: PictureKeepAspect_0
		{
			idc = 1399;
		};
		class ShortcutButton_0: RscShortcutButton
		{
			idc = 1700;
			text = "";
			x = -3;
			y = -3;
		};
		class ShortcutButton_1: ShortcutButton_0
		{
			idc = 1701;
		};
		class ShortcutButton_10: ShortcutButton_0
		{
			idc = 1710;
		};
		class ShortcutButton_11: ShortcutButton_0
		{
			idc = 1711;
		};
		class ShortcutButton_12: ShortcutButton_0
		{
			idc = 1712;
		};
		class ShortcutButton_13: ShortcutButton_0
		{
			idc = 1713;
		};
		class ShortcutButton_14: ShortcutButton_0
		{
			idc = 1714;
		};
		class ShortcutButton_15: ShortcutButton_0
		{
			idc = 1715;
		};
		class ShortcutButton_16: ShortcutButton_0
		{
			idc = 1716;
		};
		class ShortcutButton_17: ShortcutButton_0
		{
			idc = 1717;
		};
		class ShortcutButton_18: ShortcutButton_0
		{
			idc = 1718;
		};
		class ShortcutButton_19: ShortcutButton_0
		{
			idc = 1719;
		};
		class ShortcutButton_2: ShortcutButton_0
		{
			idc = 1702;
		};
		class ShortcutButton_20: ShortcutButton_0
		{
			idc = 1720;
		};
		class ShortcutButton_21: ShortcutButton_0
		{
			idc = 1721;
		};
		class ShortcutButton_22: ShortcutButton_0
		{
			idc = 1722;
		};
		class ShortcutButton_23: ShortcutButton_0
		{
			idc = 1723;
		};
		class ShortcutButton_24: ShortcutButton_0
		{
			idc = 1724;
		};
		class ShortcutButton_25: ShortcutButton_0
		{
			idc = 1725;
		};
		class ShortcutButton_26: ShortcutButton_0
		{
			idc = 1726;
		};
		class ShortcutButton_27: ShortcutButton_0
		{
			idc = 1727;
		};
		class ShortcutButton_28: ShortcutButton_0
		{
			idc = 1728;
		};
		class ShortcutButton_29: ShortcutButton_0
		{
			idc = 1729;
		};
		class ShortcutButton_3: ShortcutButton_0
		{
			idc = 1703;
		};
		class ShortcutButton_30: ShortcutButton_0
		{
			idc = 1730;
		};
		class ShortcutButton_31: ShortcutButton_0
		{
			idc = 1731;
		};
		class ShortcutButton_32: ShortcutButton_0
		{
			idc = 1732;
		};
		class ShortcutButton_33: ShortcutButton_0
		{
			idc = 1733;
		};
		class ShortcutButton_34: ShortcutButton_0
		{
			idc = 1734;
		};
		class ShortcutButton_35: ShortcutButton_0
		{
			idc = 1735;
		};
		class ShortcutButton_36: ShortcutButton_0
		{
			idc = 1736;
		};
		class ShortcutButton_37: ShortcutButton_0
		{
			idc = 1737;
		};
		class ShortcutButton_38: ShortcutButton_0
		{
			idc = 1738;
		};
		class ShortcutButton_39: ShortcutButton_0
		{
			idc = 1739;
		};
		class ShortcutButton_4: ShortcutButton_0
		{
			idc = 1704;
		};
		class ShortcutButton_40: ShortcutButton_0
		{
			idc = 1740;
		};
		class ShortcutButton_41: ShortcutButton_0
		{
			idc = 1741;
		};
		class ShortcutButton_42: ShortcutButton_0
		{
			idc = 1742;
		};
		class ShortcutButton_43: ShortcutButton_0
		{
			idc = 1743;
		};
		class ShortcutButton_44: ShortcutButton_0
		{
			idc = 1744;
		};
		class ShortcutButton_45: ShortcutButton_0
		{
			idc = 1745;
		};
		class ShortcutButton_46: ShortcutButton_0
		{
			idc = 1746;
		};
		class ShortcutButton_47: ShortcutButton_0
		{
			idc = 1747;
		};
		class ShortcutButton_48: ShortcutButton_0
		{
			idc = 1748;
		};
		class ShortcutButton_49: ShortcutButton_0
		{
			idc = 1749;
		};
		class ShortcutButton_5: ShortcutButton_0
		{
			idc = 1705;
		};
		class ShortcutButton_50: ShortcutButton_0
		{
			idc = 1750;
		};
		class ShortcutButton_51: ShortcutButton_0
		{
			idc = 1751;
		};
		class ShortcutButton_52: ShortcutButton_0
		{
			idc = 1752;
		};
		class ShortcutButton_53: ShortcutButton_0
		{
			idc = 1753;
		};
		class ShortcutButton_54: ShortcutButton_0
		{
			idc = 1754;
		};
		class ShortcutButton_55: ShortcutButton_0
		{
			idc = 1755;
		};
		class ShortcutButton_56: ShortcutButton_0
		{
			idc = 1756;
		};
		class ShortcutButton_57: ShortcutButton_0
		{
			idc = 1757;
		};
		class ShortcutButton_58: ShortcutButton_0
		{
			idc = 1758;
		};
		class ShortcutButton_59: ShortcutButton_0
		{
			idc = 1759;
		};
		class ShortcutButton_6: ShortcutButton_0
		{
			idc = 1706;
		};
		class ShortcutButton_60: ShortcutButton_0
		{
			idc = 1760;
		};
		class ShortcutButton_61: ShortcutButton_0
		{
			idc = 1761;
		};
		class ShortcutButton_62: ShortcutButton_0
		{
			idc = 1762;
		};
		class ShortcutButton_63: ShortcutButton_0
		{
			idc = 1763;
		};
		class ShortcutButton_64: ShortcutButton_0
		{
			idc = 1764;
		};
		class ShortcutButton_65: ShortcutButton_0
		{
			idc = 1765;
		};
		class ShortcutButton_66: ShortcutButton_0
		{
			idc = 1766;
		};
		class ShortcutButton_67: ShortcutButton_0
		{
			idc = 1767;
		};
		class ShortcutButton_68: ShortcutButton_0
		{
			idc = 1768;
		};
		class ShortcutButton_69: ShortcutButton_0
		{
			idc = 1769;
		};
		class ShortcutButton_7: ShortcutButton_0
		{
			idc = 1707;
		};
		class ShortcutButton_70: ShortcutButton_0
		{
			idc = 1770;
		};
		class ShortcutButton_71: ShortcutButton_0
		{
			idc = 1771;
		};
		class ShortcutButton_72: ShortcutButton_0
		{
			idc = 1772;
		};
		class ShortcutButton_73: ShortcutButton_0
		{
			idc = 1773;
		};
		class ShortcutButton_74: ShortcutButton_0
		{
			idc = 1774;
		};
		class ShortcutButton_75: ShortcutButton_0
		{
			idc = 1775;
		};
		class ShortcutButton_76: ShortcutButton_0
		{
			idc = 1776;
		};
		class ShortcutButton_77: ShortcutButton_0
		{
			idc = 1777;
		};
		class ShortcutButton_78: ShortcutButton_0
		{
			idc = 1778;
		};
		class ShortcutButton_79: ShortcutButton_0
		{
			idc = 1779;
		};
		class ShortcutButton_8: ShortcutButton_0
		{
			idc = 1708;
		};
		class ShortcutButton_80: ShortcutButton_0
		{
			idc = 1780;
		};
		class ShortcutButton_81: ShortcutButton_0
		{
			idc = 1781;
		};
		class ShortcutButton_82: ShortcutButton_0
		{
			idc = 1782;
		};
		class ShortcutButton_83: ShortcutButton_0
		{
			idc = 1783;
		};
		class ShortcutButton_84: ShortcutButton_0
		{
			idc = 1784;
		};
		class ShortcutButton_85: ShortcutButton_0
		{
			idc = 1785;
		};
		class ShortcutButton_86: ShortcutButton_0
		{
			idc = 1786;
		};
		class ShortcutButton_87: ShortcutButton_0
		{
			idc = 1787;
		};
		class ShortcutButton_88: ShortcutButton_0
		{
			idc = 1788;
		};
		class ShortcutButton_89: ShortcutButton_0
		{
			idc = 1789;
		};
		class ShortcutButton_9: ShortcutButton_0
		{
			idc = 1709;
		};
		class ShortcutButton_90: ShortcutButton_0
		{
			idc = 1790;
		};
		class ShortcutButton_91: ShortcutButton_0
		{
			idc = 1791;
		};
		class ShortcutButton_92: ShortcutButton_0
		{
			idc = 1792;
		};
		class ShortcutButton_93: ShortcutButton_0
		{
			idc = 1793;
		};
		class ShortcutButton_94: ShortcutButton_0
		{
			idc = 1794;
		};
		class ShortcutButton_95: ShortcutButton_0
		{
			idc = 1795;
		};
		class ShortcutButton_96: ShortcutButton_0
		{
			idc = 1796;
		};
		class ShortcutButton_97: ShortcutButton_0
		{
			idc = 1797;
		};
		class ShortcutButton_98: ShortcutButton_0
		{
			idc = 1798;
		};
		class ShortcutButton_99: ShortcutButton_0
		{
			idc = 1799;
		};
		class ShortcutButtonMain_0: RscShortcutButtonMain
		{
			idc = 2000;
			text = "";
			x = -3;
			y = -3;
		};
		class ShortcutButtonMain_1: ShortcutButtonMain_0
		{
			idc = 2001;
		};
		class ShortcutButtonMain_10: ShortcutButtonMain_0
		{
			idc = 2010;
		};
		class ShortcutButtonMain_11: ShortcutButtonMain_0
		{
			idc = 2011;
		};
		class ShortcutButtonMain_12: ShortcutButtonMain_0
		{
			idc = 2012;
		};
		class ShortcutButtonMain_13: ShortcutButtonMain_0
		{
			idc = 2013;
		};
		class ShortcutButtonMain_14: ShortcutButtonMain_0
		{
			idc = 2014;
		};
		class ShortcutButtonMain_15: ShortcutButtonMain_0
		{
			idc = 2015;
		};
		class ShortcutButtonMain_16: ShortcutButtonMain_0
		{
			idc = 2016;
		};
		class ShortcutButtonMain_17: ShortcutButtonMain_0
		{
			idc = 2017;
		};
		class ShortcutButtonMain_18: ShortcutButtonMain_0
		{
			idc = 2018;
		};
		class ShortcutButtonMain_19: ShortcutButtonMain_0
		{
			idc = 2019;
		};
		class ShortcutButtonMain_2: ShortcutButtonMain_0
		{
			idc = 2002;
		};
		class ShortcutButtonMain_20: ShortcutButtonMain_0
		{
			idc = 2020;
		};
		class ShortcutButtonMain_21: ShortcutButtonMain_0
		{
			idc = 2021;
		};
		class ShortcutButtonMain_22: ShortcutButtonMain_0
		{
			idc = 2022;
		};
		class ShortcutButtonMain_23: ShortcutButtonMain_0
		{
			idc = 2023;
		};
		class ShortcutButtonMain_24: ShortcutButtonMain_0
		{
			idc = 2024;
		};
		class ShortcutButtonMain_25: ShortcutButtonMain_0
		{
			idc = 2025;
		};
		class ShortcutButtonMain_26: ShortcutButtonMain_0
		{
			idc = 2026;
		};
		class ShortcutButtonMain_27: ShortcutButtonMain_0
		{
			idc = 2027;
		};
		class ShortcutButtonMain_28: ShortcutButtonMain_0
		{
			idc = 2028;
		};
		class ShortcutButtonMain_29: ShortcutButtonMain_0
		{
			idc = 2029;
		};
		class ShortcutButtonMain_3: ShortcutButtonMain_0
		{
			idc = 2003;
		};
		class ShortcutButtonMain_30: ShortcutButtonMain_0
		{
			idc = 2030;
		};
		class ShortcutButtonMain_31: ShortcutButtonMain_0
		{
			idc = 2031;
		};
		class ShortcutButtonMain_32: ShortcutButtonMain_0
		{
			idc = 2032;
		};
		class ShortcutButtonMain_33: ShortcutButtonMain_0
		{
			idc = 2033;
		};
		class ShortcutButtonMain_34: ShortcutButtonMain_0
		{
			idc = 2034;
		};
		class ShortcutButtonMain_35: ShortcutButtonMain_0
		{
			idc = 2035;
		};
		class ShortcutButtonMain_36: ShortcutButtonMain_0
		{
			idc = 2036;
		};
		class ShortcutButtonMain_37: ShortcutButtonMain_0
		{
			idc = 2037;
		};
		class ShortcutButtonMain_38: ShortcutButtonMain_0
		{
			idc = 2038;
		};
		class ShortcutButtonMain_39: ShortcutButtonMain_0
		{
			idc = 2039;
		};
		class ShortcutButtonMain_4: ShortcutButtonMain_0
		{
			idc = 2004;
		};
		class ShortcutButtonMain_40: ShortcutButtonMain_0
		{
			idc = 2040;
		};
		class ShortcutButtonMain_41: ShortcutButtonMain_0
		{
			idc = 2041;
		};
		class ShortcutButtonMain_42: ShortcutButtonMain_0
		{
			idc = 2042;
		};
		class ShortcutButtonMain_43: ShortcutButtonMain_0
		{
			idc = 2043;
		};
		class ShortcutButtonMain_44: ShortcutButtonMain_0
		{
			idc = 2044;
		};
		class ShortcutButtonMain_45: ShortcutButtonMain_0
		{
			idc = 2045;
		};
		class ShortcutButtonMain_46: ShortcutButtonMain_0
		{
			idc = 2046;
		};
		class ShortcutButtonMain_47: ShortcutButtonMain_0
		{
			idc = 2047;
		};
		class ShortcutButtonMain_48: ShortcutButtonMain_0
		{
			idc = 2048;
		};
		class ShortcutButtonMain_49: ShortcutButtonMain_0
		{
			idc = 2049;
		};
		class ShortcutButtonMain_5: ShortcutButtonMain_0
		{
			idc = 2005;
		};
		class ShortcutButtonMain_50: ShortcutButtonMain_0
		{
			idc = 2050;
		};
		class ShortcutButtonMain_51: ShortcutButtonMain_0
		{
			idc = 2051;
		};
		class ShortcutButtonMain_52: ShortcutButtonMain_0
		{
			idc = 2052;
		};
		class ShortcutButtonMain_53: ShortcutButtonMain_0
		{
			idc = 2053;
		};
		class ShortcutButtonMain_54: ShortcutButtonMain_0
		{
			idc = 2054;
		};
		class ShortcutButtonMain_55: ShortcutButtonMain_0
		{
			idc = 2055;
		};
		class ShortcutButtonMain_56: ShortcutButtonMain_0
		{
			idc = 2056;
		};
		class ShortcutButtonMain_57: ShortcutButtonMain_0
		{
			idc = 2057;
		};
		class ShortcutButtonMain_58: ShortcutButtonMain_0
		{
			idc = 2058;
		};
		class ShortcutButtonMain_59: ShortcutButtonMain_0
		{
			idc = 2059;
		};
		class ShortcutButtonMain_6: ShortcutButtonMain_0
		{
			idc = 2006;
		};
		class ShortcutButtonMain_60: ShortcutButtonMain_0
		{
			idc = 2060;
		};
		class ShortcutButtonMain_61: ShortcutButtonMain_0
		{
			idc = 2061;
		};
		class ShortcutButtonMain_62: ShortcutButtonMain_0
		{
			idc = 2062;
		};
		class ShortcutButtonMain_63: ShortcutButtonMain_0
		{
			idc = 2063;
		};
		class ShortcutButtonMain_64: ShortcutButtonMain_0
		{
			idc = 2064;
		};
		class ShortcutButtonMain_65: ShortcutButtonMain_0
		{
			idc = 2065;
		};
		class ShortcutButtonMain_66: ShortcutButtonMain_0
		{
			idc = 2066;
		};
		class ShortcutButtonMain_67: ShortcutButtonMain_0
		{
			idc = 2067;
		};
		class ShortcutButtonMain_68: ShortcutButtonMain_0
		{
			idc = 2068;
		};
		class ShortcutButtonMain_69: ShortcutButtonMain_0
		{
			idc = 2069;
		};
		class ShortcutButtonMain_7: ShortcutButtonMain_0
		{
			idc = 2007;
		};
		class ShortcutButtonMain_70: ShortcutButtonMain_0
		{
			idc = 2070;
		};
		class ShortcutButtonMain_71: ShortcutButtonMain_0
		{
			idc = 2071;
		};
		class ShortcutButtonMain_72: ShortcutButtonMain_0
		{
			idc = 2072;
		};
		class ShortcutButtonMain_73: ShortcutButtonMain_0
		{
			idc = 2073;
		};
		class ShortcutButtonMain_74: ShortcutButtonMain_0
		{
			idc = 2074;
		};
		class ShortcutButtonMain_75: ShortcutButtonMain_0
		{
			idc = 2075;
		};
		class ShortcutButtonMain_76: ShortcutButtonMain_0
		{
			idc = 2076;
		};
		class ShortcutButtonMain_77: ShortcutButtonMain_0
		{
			idc = 2077;
		};
		class ShortcutButtonMain_78: ShortcutButtonMain_0
		{
			idc = 2078;
		};
		class ShortcutButtonMain_79: ShortcutButtonMain_0
		{
			idc = 2079;
		};
		class ShortcutButtonMain_8: ShortcutButtonMain_0
		{
			idc = 2008;
		};
		class ShortcutButtonMain_80: ShortcutButtonMain_0
		{
			idc = 2080;
		};
		class ShortcutButtonMain_81: ShortcutButtonMain_0
		{
			idc = 2081;
		};
		class ShortcutButtonMain_82: ShortcutButtonMain_0
		{
			idc = 2082;
		};
		class ShortcutButtonMain_83: ShortcutButtonMain_0
		{
			idc = 2083;
		};
		class ShortcutButtonMain_84: ShortcutButtonMain_0
		{
			idc = 2084;
		};
		class ShortcutButtonMain_85: ShortcutButtonMain_0
		{
			idc = 2085;
		};
		class ShortcutButtonMain_86: ShortcutButtonMain_0
		{
			idc = 2086;
		};
		class ShortcutButtonMain_87: ShortcutButtonMain_0
		{
			idc = 2087;
		};
		class ShortcutButtonMain_88: ShortcutButtonMain_0
		{
			idc = 2088;
		};
		class ShortcutButtonMain_89: ShortcutButtonMain_0
		{
			idc = 2089;
		};
		class ShortcutButtonMain_9: ShortcutButtonMain_0
		{
			idc = 2009;
		};
		class ShortcutButtonMain_90: ShortcutButtonMain_0
		{
			idc = 2090;
		};
		class ShortcutButtonMain_91: ShortcutButtonMain_0
		{
			idc = 2091;
		};
		class ShortcutButtonMain_92: ShortcutButtonMain_0
		{
			idc = 2092;
		};
		class ShortcutButtonMain_93: ShortcutButtonMain_0
		{
			idc = 2093;
		};
		class ShortcutButtonMain_94: ShortcutButtonMain_0
		{
			idc = 2094;
		};
		class ShortcutButtonMain_95: ShortcutButtonMain_0
		{
			idc = 2095;
		};
		class ShortcutButtonMain_96: ShortcutButtonMain_0
		{
			idc = 2096;
		};
		class ShortcutButtonMain_97: ShortcutButtonMain_0
		{
			idc = 2097;
		};
		class ShortcutButtonMain_98: ShortcutButtonMain_0
		{
			idc = 2098;
		};
		class ShortcutButtonMain_99: ShortcutButtonMain_0
		{
			idc = 2099;
		};
		class Slider_0: RscSlider
		{
			idc = 1900;
			text = "";
			x = -3;
			y = -3;
		};
		class Slider_1: Slider_0
		{
			idc = 1901;
		};
		class Slider_10: Slider_0
		{
			idc = 1910;
		};
		class Slider_11: Slider_0
		{
			idc = 1911;
		};
		class Slider_12: Slider_0
		{
			idc = 1912;
		};
		class Slider_13: Slider_0
		{
			idc = 1913;
		};
		class Slider_14: Slider_0
		{
			idc = 1914;
		};
		class Slider_15: Slider_0
		{
			idc = 1915;
		};
		class Slider_16: Slider_0
		{
			idc = 1916;
		};
		class Slider_17: Slider_0
		{
			idc = 1917;
		};
		class Slider_18: Slider_0
		{
			idc = 1918;
		};
		class Slider_19: Slider_0
		{
			idc = 1919;
		};
		class Slider_2: Slider_0
		{
			idc = 1902;
		};
		class Slider_20: Slider_0
		{
			idc = 1920;
		};
		class Slider_21: Slider_0
		{
			idc = 1921;
		};
		class Slider_22: Slider_0
		{
			idc = 1922;
		};
		class Slider_23: Slider_0
		{
			idc = 1923;
		};
		class Slider_24: Slider_0
		{
			idc = 1924;
		};
		class Slider_25: Slider_0
		{
			idc = 1925;
		};
		class Slider_26: Slider_0
		{
			idc = 1926;
		};
		class Slider_27: Slider_0
		{
			idc = 1927;
		};
		class Slider_28: Slider_0
		{
			idc = 1928;
		};
		class Slider_29: Slider_0
		{
			idc = 1929;
		};
		class Slider_3: Slider_0
		{
			idc = 1903;
		};
		class Slider_30: Slider_0
		{
			idc = 1930;
		};
		class Slider_31: Slider_0
		{
			idc = 1931;
		};
		class Slider_32: Slider_0
		{
			idc = 1932;
		};
		class Slider_33: Slider_0
		{
			idc = 1933;
		};
		class Slider_34: Slider_0
		{
			idc = 1934;
		};
		class Slider_35: Slider_0
		{
			idc = 1935;
		};
		class Slider_36: Slider_0
		{
			idc = 1936;
		};
		class Slider_37: Slider_0
		{
			idc = 1937;
		};
		class Slider_38: Slider_0
		{
			idc = 1938;
		};
		class Slider_39: Slider_0
		{
			idc = 1939;
		};
		class Slider_4: Slider_0
		{
			idc = 1904;
		};
		class Slider_40: Slider_0
		{
			idc = 1940;
		};
		class Slider_41: Slider_0
		{
			idc = 1941;
		};
		class Slider_42: Slider_0
		{
			idc = 1942;
		};
		class Slider_43: Slider_0
		{
			idc = 1943;
		};
		class Slider_44: Slider_0
		{
			idc = 1944;
		};
		class Slider_45: Slider_0
		{
			idc = 1945;
		};
		class Slider_46: Slider_0
		{
			idc = 1946;
		};
		class Slider_47: Slider_0
		{
			idc = 1947;
		};
		class Slider_48: Slider_0
		{
			idc = 1948;
		};
		class Slider_49: Slider_0
		{
			idc = 1949;
		};
		class Slider_5: Slider_0
		{
			idc = 1905;
		};
		class Slider_50: Slider_0
		{
			idc = 1950;
		};
		class Slider_51: Slider_0
		{
			idc = 1951;
		};
		class Slider_52: Slider_0
		{
			idc = 1952;
		};
		class Slider_53: Slider_0
		{
			idc = 1953;
		};
		class Slider_54: Slider_0
		{
			idc = 1954;
		};
		class Slider_55: Slider_0
		{
			idc = 1955;
		};
		class Slider_56: Slider_0
		{
			idc = 1956;
		};
		class Slider_57: Slider_0
		{
			idc = 1957;
		};
		class Slider_58: Slider_0
		{
			idc = 1958;
		};
		class Slider_59: Slider_0
		{
			idc = 1959;
		};
		class Slider_6: Slider_0
		{
			idc = 1906;
		};
		class Slider_60: Slider_0
		{
			idc = 1960;
		};
		class Slider_61: Slider_0
		{
			idc = 1961;
		};
		class Slider_62: Slider_0
		{
			idc = 1962;
		};
		class Slider_63: Slider_0
		{
			idc = 1963;
		};
		class Slider_64: Slider_0
		{
			idc = 1964;
		};
		class Slider_65: Slider_0
		{
			idc = 1965;
		};
		class Slider_66: Slider_0
		{
			idc = 1966;
		};
		class Slider_67: Slider_0
		{
			idc = 1967;
		};
		class Slider_68: Slider_0
		{
			idc = 1968;
		};
		class Slider_69: Slider_0
		{
			idc = 1969;
		};
		class Slider_7: Slider_0
		{
			idc = 1907;
		};
		class Slider_70: Slider_0
		{
			idc = 1970;
		};
		class Slider_71: Slider_0
		{
			idc = 1971;
		};
		class Slider_72: Slider_0
		{
			idc = 1972;
		};
		class Slider_73: Slider_0
		{
			idc = 1973;
		};
		class Slider_74: Slider_0
		{
			idc = 1974;
		};
		class Slider_75: Slider_0
		{
			idc = 1975;
		};
		class Slider_76: Slider_0
		{
			idc = 1976;
		};
		class Slider_77: Slider_0
		{
			idc = 1977;
		};
		class Slider_78: Slider_0
		{
			idc = 1978;
		};
		class Slider_79: Slider_0
		{
			idc = 1979;
		};
		class Slider_8: Slider_0
		{
			idc = 1908;
		};
		class Slider_80: Slider_0
		{
			idc = 1980;
		};
		class Slider_81: Slider_0
		{
			idc = 1981;
		};
		class Slider_82: Slider_0
		{
			idc = 1982;
		};
		class Slider_83: Slider_0
		{
			idc = 1983;
		};
		class Slider_84: Slider_0
		{
			idc = 1984;
		};
		class Slider_85: Slider_0
		{
			idc = 1985;
		};
		class Slider_86: Slider_0
		{
			idc = 1986;
		};
		class Slider_87: Slider_0
		{
			idc = 1987;
		};
		class Slider_88: Slider_0
		{
			idc = 1988;
		};
		class Slider_89: Slider_0
		{
			idc = 1989;
		};
		class Slider_9: Slider_0
		{
			idc = 1909;
		};
		class Slider_90: Slider_0
		{
			idc = 1990;
		};
		class Slider_91: Slider_0
		{
			idc = 1991;
		};
		class Slider_92: Slider_0
		{
			idc = 1992;
		};
		class Slider_93: Slider_0
		{
			idc = 1993;
		};
		class Slider_94: Slider_0
		{
			idc = 1994;
		};
		class Slider_95: Slider_0
		{
			idc = 1995;
		};
		class Slider_96: Slider_0
		{
			idc = 1996;
		};
		class Slider_97: Slider_0
		{
			idc = 1997;
		};
		class Slider_98: Slider_0
		{
			idc = 1998;
		};
		class Slider_99: Slider_0
		{
			idc = 1999;
		};
		class StructuredText_0: RscStructuredText
		{
			idc = 1100;
			text = "";
			x = -3;
			y = -3;
		};
		class StructuredText_1: StructuredText_0
		{
			idc = 1101;
		};
		class StructuredText_10: StructuredText_0
		{
			idc = 1110;
		};
		class StructuredText_11: StructuredText_0
		{
			idc = 1111;
		};
		class StructuredText_12: StructuredText_0
		{
			idc = 1112;
		};
		class StructuredText_13: StructuredText_0
		{
			idc = 1113;
		};
		class StructuredText_14: StructuredText_0
		{
			idc = 1114;
		};
		class StructuredText_15: StructuredText_0
		{
			idc = 1115;
		};
		class StructuredText_16: StructuredText_0
		{
			idc = 1116;
		};
		class StructuredText_17: StructuredText_0
		{
			idc = 1117;
		};
		class StructuredText_18: StructuredText_0
		{
			idc = 1118;
		};
		class StructuredText_19: StructuredText_0
		{
			idc = 1119;
		};
		class StructuredText_2: StructuredText_0
		{
			idc = 1102;
		};
		class StructuredText_20: StructuredText_0
		{
			idc = 1120;
		};
		class StructuredText_21: StructuredText_0
		{
			idc = 1121;
		};
		class StructuredText_22: StructuredText_0
		{
			idc = 1122;
		};
		class StructuredText_23: StructuredText_0
		{
			idc = 1123;
		};
		class StructuredText_24: StructuredText_0
		{
			idc = 1124;
		};
		class StructuredText_25: StructuredText_0
		{
			idc = 1125;
		};
		class StructuredText_26: StructuredText_0
		{
			idc = 1126;
		};
		class StructuredText_27: StructuredText_0
		{
			idc = 1127;
		};
		class StructuredText_28: StructuredText_0
		{
			idc = 1128;
		};
		class StructuredText_29: StructuredText_0
		{
			idc = 1129;
		};
		class StructuredText_3: StructuredText_0
		{
			idc = 1103;
		};
		class StructuredText_30: StructuredText_0
		{
			idc = 1130;
		};
		class StructuredText_31: StructuredText_0
		{
			idc = 1131;
		};
		class StructuredText_32: StructuredText_0
		{
			idc = 1132;
		};
		class StructuredText_33: StructuredText_0
		{
			idc = 1133;
		};
		class StructuredText_34: StructuredText_0
		{
			idc = 1134;
		};
		class StructuredText_35: StructuredText_0
		{
			idc = 1135;
		};
		class StructuredText_36: StructuredText_0
		{
			idc = 1136;
		};
		class StructuredText_37: StructuredText_0
		{
			idc = 1137;
		};
		class StructuredText_38: StructuredText_0
		{
			idc = 1138;
		};
		class StructuredText_39: StructuredText_0
		{
			idc = 1139;
		};
		class StructuredText_4: StructuredText_0
		{
			idc = 1104;
		};
		class StructuredText_40: StructuredText_0
		{
			idc = 1140;
		};
		class StructuredText_41: StructuredText_0
		{
			idc = 1141;
		};
		class StructuredText_42: StructuredText_0
		{
			idc = 1142;
		};
		class StructuredText_43: StructuredText_0
		{
			idc = 1143;
		};
		class StructuredText_44: StructuredText_0
		{
			idc = 1144;
		};
		class StructuredText_45: StructuredText_0
		{
			idc = 1145;
		};
		class StructuredText_46: StructuredText_0
		{
			idc = 1146;
		};
		class StructuredText_47: StructuredText_0
		{
			idc = 1147;
		};
		class StructuredText_48: StructuredText_0
		{
			idc = 1148;
		};
		class StructuredText_49: StructuredText_0
		{
			idc = 1149;
		};
		class StructuredText_5: StructuredText_0
		{
			idc = 1105;
		};
		class StructuredText_50: StructuredText_0
		{
			idc = 1150;
		};
		class StructuredText_51: StructuredText_0
		{
			idc = 1151;
		};
		class StructuredText_52: StructuredText_0
		{
			idc = 1152;
		};
		class StructuredText_53: StructuredText_0
		{
			idc = 1153;
		};
		class StructuredText_54: StructuredText_0
		{
			idc = 1154;
		};
		class StructuredText_55: StructuredText_0
		{
			idc = 1155;
		};
		class StructuredText_56: StructuredText_0
		{
			idc = 1156;
		};
		class StructuredText_57: StructuredText_0
		{
			idc = 1157;
		};
		class StructuredText_58: StructuredText_0
		{
			idc = 1158;
		};
		class StructuredText_59: StructuredText_0
		{
			idc = 1159;
		};
		class StructuredText_6: StructuredText_0
		{
			idc = 1106;
		};
		class StructuredText_60: StructuredText_0
		{
			idc = 1160;
		};
		class StructuredText_61: StructuredText_0
		{
			idc = 1161;
		};
		class StructuredText_62: StructuredText_0
		{
			idc = 1162;
		};
		class StructuredText_63: StructuredText_0
		{
			idc = 1163;
		};
		class StructuredText_64: StructuredText_0
		{
			idc = 1164;
		};
		class StructuredText_65: StructuredText_0
		{
			idc = 1165;
		};
		class StructuredText_66: StructuredText_0
		{
			idc = 1166;
		};
		class StructuredText_67: StructuredText_0
		{
			idc = 1167;
		};
		class StructuredText_68: StructuredText_0
		{
			idc = 1168;
		};
		class StructuredText_69: StructuredText_0
		{
			idc = 1169;
		};
		class StructuredText_7: StructuredText_0
		{
			idc = 1107;
		};
		class StructuredText_70: StructuredText_0
		{
			idc = 1170;
		};
		class StructuredText_71: StructuredText_0
		{
			idc = 1171;
		};
		class StructuredText_72: StructuredText_0
		{
			idc = 1172;
		};
		class StructuredText_73: StructuredText_0
		{
			idc = 1173;
		};
		class StructuredText_74: StructuredText_0
		{
			idc = 1174;
		};
		class StructuredText_75: StructuredText_0
		{
			idc = 1175;
		};
		class StructuredText_76: StructuredText_0
		{
			idc = 1176;
		};
		class StructuredText_77: StructuredText_0
		{
			idc = 1177;
		};
		class StructuredText_78: StructuredText_0
		{
			idc = 1178;
		};
		class StructuredText_79: StructuredText_0
		{
			idc = 1179;
		};
		class StructuredText_8: StructuredText_0
		{
			idc = 1108;
		};
		class StructuredText_80: StructuredText_0
		{
			idc = 1180;
		};
		class StructuredText_81: StructuredText_0
		{
			idc = 1181;
		};
		class StructuredText_82: StructuredText_0
		{
			idc = 1182;
		};
		class StructuredText_83: StructuredText_0
		{
			idc = 1183;
		};
		class StructuredText_84: StructuredText_0
		{
			idc = 1184;
		};
		class StructuredText_85: StructuredText_0
		{
			idc = 1185;
		};
		class StructuredText_86: StructuredText_0
		{
			idc = 1186;
		};
		class StructuredText_87: StructuredText_0
		{
			idc = 1187;
		};
		class StructuredText_88: StructuredText_0
		{
			idc = 1188;
		};
		class StructuredText_89: StructuredText_0
		{
			idc = 1189;
		};
		class StructuredText_9: StructuredText_0
		{
			idc = 1109;
		};
		class StructuredText_90: StructuredText_0
		{
			idc = 1190;
		};
		class StructuredText_91: StructuredText_0
		{
			idc = 1191;
		};
		class StructuredText_92: StructuredText_0
		{
			idc = 1192;
		};
		class StructuredText_93: StructuredText_0
		{
			idc = 1193;
		};
		class StructuredText_94: StructuredText_0
		{
			idc = 1194;
		};
		class StructuredText_95: StructuredText_0
		{
			idc = 1195;
		};
		class StructuredText_96: StructuredText_0
		{
			idc = 1196;
		};
		class StructuredText_97: StructuredText_0
		{
			idc = 1197;
		};
		class StructuredText_98: StructuredText_0
		{
			idc = 1198;
		};
		class StructuredText_99: StructuredText_0
		{
			idc = 1199;
		};
		class Text_0: RscText
		{
			idc = 1000;
			text = "";
			x = -3;
			y = -3;
		};
		class Text_1: Text_0
		{
			idc = 1001;
		};
		class Text_10: Text_0
		{
			idc = 1010;
		};
		class Text_11: Text_0
		{
			idc = 1011;
		};
		class Text_12: Text_0
		{
			idc = 1012;
		};
		class Text_13: Text_0
		{
			idc = 1013;
		};
		class Text_14: Text_0
		{
			idc = 1014;
		};
		class Text_15: Text_0
		{
			idc = 1015;
		};
		class Text_16: Text_0
		{
			idc = 1016;
		};
		class Text_17: Text_0
		{
			idc = 1017;
		};
		class Text_18: Text_0
		{
			idc = 1018;
		};
		class Text_19: Text_0
		{
			idc = 1019;
		};
		class Text_2: Text_0
		{
			idc = 1002;
		};
		class Text_20: Text_0
		{
			idc = 1020;
		};
		class Text_21: Text_0
		{
			idc = 1021;
		};
		class Text_22: Text_0
		{
			idc = 1022;
		};
		class Text_23: Text_0
		{
			idc = 1023;
		};
		class Text_24: Text_0
		{
			idc = 1024;
		};
		class Text_25: Text_0
		{
			idc = 1025;
		};
		class Text_26: Text_0
		{
			idc = 1026;
		};
		class Text_27: Text_0
		{
			idc = 1027;
		};
		class Text_28: Text_0
		{
			idc = 1028;
		};
		class Text_29: Text_0
		{
			idc = 1029;
		};
		class Text_3: Text_0
		{
			idc = 1003;
		};
		class Text_30: Text_0
		{
			idc = 1030;
		};
		class Text_31: Text_0
		{
			idc = 1031;
		};
		class Text_32: Text_0
		{
			idc = 1032;
		};
		class Text_33: Text_0
		{
			idc = 1033;
		};
		class Text_34: Text_0
		{
			idc = 1034;
		};
		class Text_35: Text_0
		{
			idc = 1035;
		};
		class Text_36: Text_0
		{
			idc = 1036;
		};
		class Text_37: Text_0
		{
			idc = 1037;
		};
		class Text_38: Text_0
		{
			idc = 1038;
		};
		class Text_39: Text_0
		{
			idc = 1039;
		};
		class Text_4: Text_0
		{
			idc = 1004;
		};
		class Text_40: Text_0
		{
			idc = 1040;
		};
		class Text_41: Text_0
		{
			idc = 1041;
		};
		class Text_42: Text_0
		{
			idc = 1042;
		};
		class Text_43: Text_0
		{
			idc = 1043;
		};
		class Text_44: Text_0
		{
			idc = 1044;
		};
		class Text_45: Text_0
		{
			idc = 1045;
		};
		class Text_46: Text_0
		{
			idc = 1046;
		};
		class Text_47: Text_0
		{
			idc = 1047;
		};
		class Text_48: Text_0
		{
			idc = 1048;
		};
		class Text_49: Text_0
		{
			idc = 1049;
		};
		class Text_5: Text_0
		{
			idc = 1005;
		};
		class Text_50: Text_0
		{
			idc = 1050;
		};
		class Text_51: Text_0
		{
			idc = 1051;
		};
		class Text_52: Text_0
		{
			idc = 1052;
		};
		class Text_53: Text_0
		{
			idc = 1053;
		};
		class Text_54: Text_0
		{
			idc = 1054;
		};
		class Text_55: Text_0
		{
			idc = 1055;
		};
		class Text_56: Text_0
		{
			idc = 1056;
		};
		class Text_57: Text_0
		{
			idc = 1057;
		};
		class Text_58: Text_0
		{
			idc = 1058;
		};
		class Text_59: Text_0
		{
			idc = 1059;
		};
		class Text_6: Text_0
		{
			idc = 1006;
		};
		class Text_60: Text_0
		{
			idc = 1060;
		};
		class Text_61: Text_0
		{
			idc = 1061;
		};
		class Text_62: Text_0
		{
			idc = 1062;
		};
		class Text_63: Text_0
		{
			idc = 1063;
		};
		class Text_64: Text_0
		{
			idc = 1064;
		};
		class Text_65: Text_0
		{
			idc = 1065;
		};
		class Text_66: Text_0
		{
			idc = 1066;
		};
		class Text_67: Text_0
		{
			idc = 1067;
		};
		class Text_68: Text_0
		{
			idc = 1068;
		};
		class Text_69: Text_0
		{
			idc = 1069;
		};
		class Text_7: Text_0
		{
			idc = 1007;
		};
		class Text_70: Text_0
		{
			idc = 1070;
		};
		class Text_71: Text_0
		{
			idc = 1071;
		};
		class Text_72: Text_0
		{
			idc = 1072;
		};
		class Text_73: Text_0
		{
			idc = 1073;
		};
		class Text_74: Text_0
		{
			idc = 1074;
		};
		class Text_75: Text_0
		{
			idc = 1075;
		};
		class Text_76: Text_0
		{
			idc = 1076;
		};
		class Text_77: Text_0
		{
			idc = 1077;
		};
		class Text_78: Text_0
		{
			idc = 1078;
		};
		class Text_79: Text_0
		{
			idc = 1079;
		};
		class Text_8: Text_0
		{
			idc = 1008;
		};
		class Text_80: Text_0
		{
			idc = 1080;
		};
		class Text_81: Text_0
		{
			idc = 1081;
		};
		class Text_82: Text_0
		{
			idc = 1082;
		};
		class Text_83: Text_0
		{
			idc = 1083;
		};
		class Text_84: Text_0
		{
			idc = 1084;
		};
		class Text_85: Text_0
		{
			idc = 1085;
		};
		class Text_86: Text_0
		{
			idc = 1086;
		};
		class Text_87: Text_0
		{
			idc = 1087;
		};
		class Text_88: Text_0
		{
			idc = 1088;
		};
		class Text_89: Text_0
		{
			idc = 1089;
		};
		class Text_9: Text_0
		{
			idc = 1009;
		};
		class Text_90: Text_0
		{
			idc = 1090;
		};
		class Text_91: Text_0
		{
			idc = 1091;
		};
		class Text_92: Text_0
		{
			idc = 1092;
		};
		class Text_93: Text_0
		{
			idc = 1093;
		};
		class Text_94: Text_0
		{
			idc = 1094;
		};
		class Text_95: Text_0
		{
			idc = 1095;
		};
		class Text_96: Text_0
		{
			idc = 1096;
		};
		class Text_97: Text_0
		{
			idc = 1097;
		};
		class Text_98: Text_0
		{
			idc = 1098;
		};
		class Text_99: Text_0
		{
			idc = 1099;
		};
		class TextCheckBox_0: RscTextCheckBox
		{
			idc = 2500;
			text = "";
			x = -3;
			y = -3;
		};
		class TextCheckBox_1: TextCheckBox_0
		{
			idc = 2501;
		};
		class TextCheckBox_10: TextCheckBox_0
		{
			idc = 2510;
		};
		class TextCheckBox_11: TextCheckBox_0
		{
			idc = 2511;
		};
		class TextCheckBox_12: TextCheckBox_0
		{
			idc = 2512;
		};
		class TextCheckBox_13: TextCheckBox_0
		{
			idc = 2513;
		};
		class TextCheckBox_14: TextCheckBox_0
		{
			idc = 2514;
		};
		class TextCheckBox_15: TextCheckBox_0
		{
			idc = 2515;
		};
		class TextCheckBox_16: TextCheckBox_0
		{
			idc = 2516;
		};
		class TextCheckBox_17: TextCheckBox_0
		{
			idc = 2517;
		};
		class TextCheckBox_18: TextCheckBox_0
		{
			idc = 2518;
		};
		class TextCheckBox_19: TextCheckBox_0
		{
			idc = 2519;
		};
		class TextCheckBox_2: TextCheckBox_0
		{
			idc = 2502;
		};
		class TextCheckBox_20: TextCheckBox_0
		{
			idc = 2520;
		};
		class TextCheckBox_21: TextCheckBox_0
		{
			idc = 2521;
		};
		class TextCheckBox_22: TextCheckBox_0
		{
			idc = 2522;
		};
		class TextCheckBox_23: TextCheckBox_0
		{
			idc = 2523;
		};
		class TextCheckBox_24: TextCheckBox_0
		{
			idc = 2524;
		};
		class TextCheckBox_25: TextCheckBox_0
		{
			idc = 2525;
		};
		class TextCheckBox_26: TextCheckBox_0
		{
			idc = 2526;
		};
		class TextCheckBox_27: TextCheckBox_0
		{
			idc = 2527;
		};
		class TextCheckBox_28: TextCheckBox_0
		{
			idc = 2528;
		};
		class TextCheckBox_29: TextCheckBox_0
		{
			idc = 2529;
		};
		class TextCheckBox_3: TextCheckBox_0
		{
			idc = 2503;
		};
		class TextCheckBox_30: TextCheckBox_0
		{
			idc = 2530;
		};
		class TextCheckBox_31: TextCheckBox_0
		{
			idc = 2531;
		};
		class TextCheckBox_32: TextCheckBox_0
		{
			idc = 2532;
		};
		class TextCheckBox_33: TextCheckBox_0
		{
			idc = 2533;
		};
		class TextCheckBox_34: TextCheckBox_0
		{
			idc = 2534;
		};
		class TextCheckBox_35: TextCheckBox_0
		{
			idc = 2535;
		};
		class TextCheckBox_36: TextCheckBox_0
		{
			idc = 2536;
		};
		class TextCheckBox_37: TextCheckBox_0
		{
			idc = 2537;
		};
		class TextCheckBox_38: TextCheckBox_0
		{
			idc = 2538;
		};
		class TextCheckBox_39: TextCheckBox_0
		{
			idc = 2539;
		};
		class TextCheckBox_4: TextCheckBox_0
		{
			idc = 2504;
		};
		class TextCheckBox_40: TextCheckBox_0
		{
			idc = 2540;
		};
		class TextCheckBox_41: TextCheckBox_0
		{
			idc = 2541;
		};
		class TextCheckBox_42: TextCheckBox_0
		{
			idc = 2542;
		};
		class TextCheckBox_43: TextCheckBox_0
		{
			idc = 2543;
		};
		class TextCheckBox_44: TextCheckBox_0
		{
			idc = 2544;
		};
		class TextCheckBox_45: TextCheckBox_0
		{
			idc = 2545;
		};
		class TextCheckBox_46: TextCheckBox_0
		{
			idc = 2546;
		};
		class TextCheckBox_47: TextCheckBox_0
		{
			idc = 2547;
		};
		class TextCheckBox_48: TextCheckBox_0
		{
			idc = 2548;
		};
		class TextCheckBox_49: TextCheckBox_0
		{
			idc = 2549;
		};
		class TextCheckBox_5: TextCheckBox_0
		{
			idc = 2505;
		};
		class TextCheckBox_50: TextCheckBox_0
		{
			idc = 2550;
		};
		class TextCheckBox_51: TextCheckBox_0
		{
			idc = 2551;
		};
		class TextCheckBox_52: TextCheckBox_0
		{
			idc = 2552;
		};
		class TextCheckBox_53: TextCheckBox_0
		{
			idc = 2553;
		};
		class TextCheckBox_54: TextCheckBox_0
		{
			idc = 2554;
		};
		class TextCheckBox_55: TextCheckBox_0
		{
			idc = 2555;
		};
		class TextCheckBox_56: TextCheckBox_0
		{
			idc = 2556;
		};
		class TextCheckBox_57: TextCheckBox_0
		{
			idc = 2557;
		};
		class TextCheckBox_58: TextCheckBox_0
		{
			idc = 2558;
		};
		class TextCheckBox_59: TextCheckBox_0
		{
			idc = 2559;
		};
		class TextCheckBox_6: TextCheckBox_0
		{
			idc = 2506;
		};
		class TextCheckBox_60: TextCheckBox_0
		{
			idc = 2560;
		};
		class TextCheckBox_61: TextCheckBox_0
		{
			idc = 2561;
		};
		class TextCheckBox_62: TextCheckBox_0
		{
			idc = 2562;
		};
		class TextCheckBox_63: TextCheckBox_0
		{
			idc = 2563;
		};
		class TextCheckBox_64: TextCheckBox_0
		{
			idc = 2564;
		};
		class TextCheckBox_65: TextCheckBox_0
		{
			idc = 2565;
		};
		class TextCheckBox_66: TextCheckBox_0
		{
			idc = 2566;
		};
		class TextCheckBox_67: TextCheckBox_0
		{
			idc = 2567;
		};
		class TextCheckBox_68: TextCheckBox_0
		{
			idc = 2568;
		};
		class TextCheckBox_69: TextCheckBox_0
		{
			idc = 2569;
		};
		class TextCheckBox_7: TextCheckBox_0
		{
			idc = 2507;
		};
		class TextCheckBox_70: TextCheckBox_0
		{
			idc = 2570;
		};
		class TextCheckBox_71: TextCheckBox_0
		{
			idc = 2571;
		};
		class TextCheckBox_72: TextCheckBox_0
		{
			idc = 2572;
		};
		class TextCheckBox_73: TextCheckBox_0
		{
			idc = 2573;
		};
		class TextCheckBox_74: TextCheckBox_0
		{
			idc = 2574;
		};
		class TextCheckBox_75: TextCheckBox_0
		{
			idc = 2575;
		};
		class TextCheckBox_76: TextCheckBox_0
		{
			idc = 2576;
		};
		class TextCheckBox_77: TextCheckBox_0
		{
			idc = 2577;
		};
		class TextCheckBox_78: TextCheckBox_0
		{
			idc = 2578;
		};
		class TextCheckBox_79: TextCheckBox_0
		{
			idc = 2579;
		};
		class TextCheckBox_8: TextCheckBox_0
		{
			idc = 2508;
		};
		class TextCheckBox_80: TextCheckBox_0
		{
			idc = 2580;
		};
		class TextCheckBox_81: TextCheckBox_0
		{
			idc = 2581;
		};
		class TextCheckBox_82: TextCheckBox_0
		{
			idc = 2582;
		};
		class TextCheckBox_83: TextCheckBox_0
		{
			idc = 2583;
		};
		class TextCheckBox_84: TextCheckBox_0
		{
			idc = 2584;
		};
		class TextCheckBox_85: TextCheckBox_0
		{
			idc = 2585;
		};
		class TextCheckBox_86: TextCheckBox_0
		{
			idc = 2586;
		};
		class TextCheckBox_87: TextCheckBox_0
		{
			idc = 2587;
		};
		class TextCheckBox_88: TextCheckBox_0
		{
			idc = 2588;
		};
		class TextCheckBox_89: TextCheckBox_0
		{
			idc = 2589;
		};
		class TextCheckBox_9: TextCheckBox_0
		{
			idc = 2509;
		};
		class TextCheckBox_90: TextCheckBox_0
		{
			idc = 2590;
		};
		class TextCheckBox_91: TextCheckBox_0
		{
			idc = 2591;
		};
		class TextCheckBox_92: TextCheckBox_0
		{
			idc = 2592;
		};
		class TextCheckBox_93: TextCheckBox_0
		{
			idc = 2593;
		};
		class TextCheckBox_94: TextCheckBox_0
		{
			idc = 2594;
		};
		class TextCheckBox_95: TextCheckBox_0
		{
			idc = 2595;
		};
		class TextCheckBox_96: TextCheckBox_0
		{
			idc = 2596;
		};
		class TextCheckBox_97: TextCheckBox_0
		{
			idc = 2597;
		};
		class TextCheckBox_98: TextCheckBox_0
		{
			idc = 2598;
		};
		class TextCheckBox_99: TextCheckBox_0
		{
			idc = 2599;
		};
		class Tool_0: RscStructuredText
		{
			idc = 800;
			text = "";
			x = -3;
			y = -3;
		};
		class Tool_1: Tool_0
		{
			idc = 801;
		};
		class Tool_10: Tool_0
		{
			idc = 810;
		};
		class Tool_11: Tool_0
		{
			idc = 811;
		};
		class Tool_12: Tool_0
		{
			idc = 812;
		};
		class Tool_13: Tool_0
		{
			idc = 813;
		};
		class Tool_14: Tool_0
		{
			idc = 814;
		};
		class Tool_15: Tool_0
		{
			idc = 815;
		};
		class Tool_16: Tool_0
		{
			idc = 816;
		};
		class Tool_17: Tool_0
		{
			idc = 817;
		};
		class Tool_18: Tool_0
		{
			idc = 818;
		};
		class Tool_19: Tool_0
		{
			idc = 819;
		};
		class Tool_2: Tool_0
		{
			idc = 802;
		};
		class Tool_20: Tool_0
		{
			idc = 820;
		};
		class Tool_21: Tool_0
		{
			idc = 821;
		};
		class Tool_22: Tool_0
		{
			idc = 822;
		};
		class Tool_23: Tool_0
		{
			idc = 823;
		};
		class Tool_24: Tool_0
		{
			idc = 824;
		};
		class Tool_25: Tool_0
		{
			idc = 825;
		};
		class Tool_26: Tool_0
		{
			idc = 826;
		};
		class Tool_27: Tool_0
		{
			idc = 827;
		};
		class Tool_28: Tool_0
		{
			idc = 828;
		};
		class Tool_29: Tool_0
		{
			idc = 829;
		};
		class Tool_3: Tool_0
		{
			idc = 803;
		};
		class Tool_30: Tool_0
		{
			idc = 830;
		};
		class Tool_31: Tool_0
		{
			idc = 831;
		};
		class Tool_32: Tool_0
		{
			idc = 832;
		};
		class Tool_33: Tool_0
		{
			idc = 833;
		};
		class Tool_34: Tool_0
		{
			idc = 834;
		};
		class Tool_35: Tool_0
		{
			idc = 835;
		};
		class Tool_36: Tool_0
		{
			idc = 836;
		};
		class Tool_37: Tool_0
		{
			idc = 837;
		};
		class Tool_38: Tool_0
		{
			idc = 838;
		};
		class Tool_39: Tool_0
		{
			idc = 839;
		};
		class Tool_4: Tool_0
		{
			idc = 804;
		};
		class Tool_40: Tool_0
		{
			idc = 840;
		};
		class Tool_41: Tool_0
		{
			idc = 841;
		};
		class Tool_42: Tool_0
		{
			idc = 842;
		};
		class Tool_43: Tool_0
		{
			idc = 843;
		};
		class Tool_44: Tool_0
		{
			idc = 844;
		};
		class Tool_45: Tool_0
		{
			idc = 845;
		};
		class Tool_46: Tool_0
		{
			idc = 846;
		};
		class Tool_47: Tool_0
		{
			idc = 847;
		};
		class Tool_48: Tool_0
		{
			idc = 848;
		};
		class Tool_49: Tool_0
		{
			idc = 849;
		};
		class Tool_5: Tool_0
		{
			idc = 805;
		};
		class Tool_50: Tool_0
		{
			idc = 850;
		};
		class Tool_51: Tool_0
		{
			idc = 851;
		};
		class Tool_52: Tool_0
		{
			idc = 852;
		};
		class Tool_53: Tool_0
		{
			idc = 853;
		};
		class Tool_54: Tool_0
		{
			idc = 854;
		};
		class Tool_55: Tool_0
		{
			idc = 855;
		};
		class Tool_56: Tool_0
		{
			idc = 856;
		};
		class Tool_57: Tool_0
		{
			idc = 857;
		};
		class Tool_58: Tool_0
		{
			idc = 858;
		};
		class Tool_59: Tool_0
		{
			idc = 859;
		};
		class Tool_6: Tool_0
		{
			idc = 806;
		};
		class Tool_60: Tool_0
		{
			idc = 860;
		};
		class Tool_61: Tool_0
		{
			idc = 861;
		};
		class Tool_62: Tool_0
		{
			idc = 862;
		};
		class Tool_63: Tool_0
		{
			idc = 863;
		};
		class Tool_64: Tool_0
		{
			idc = 864;
		};
		class Tool_65: Tool_0
		{
			idc = 865;
		};
		class Tool_66: Tool_0
		{
			idc = 866;
		};
		class Tool_67: Tool_0
		{
			idc = 867;
		};
		class Tool_68: Tool_0
		{
			idc = 868;
		};
		class Tool_69: Tool_0
		{
			idc = 869;
		};
		class Tool_7: Tool_0
		{
			idc = 807;
		};
		class Tool_70: Tool_0
		{
			idc = 870;
		};
		class Tool_71: Tool_0
		{
			idc = 871;
		};
		class Tool_72: Tool_0
		{
			idc = 872;
		};
		class Tool_73: Tool_0
		{
			idc = 873;
		};
		class Tool_74: Tool_0
		{
			idc = 874;
		};
		class Tool_75: Tool_0
		{
			idc = 875;
		};
		class Tool_76: Tool_0
		{
			idc = 876;
		};
		class Tool_77: Tool_0
		{
			idc = 877;
		};
		class Tool_78: Tool_0
		{
			idc = 878;
		};
		class Tool_79: Tool_0
		{
			idc = 879;
		};
		class Tool_8: Tool_0
		{
			idc = 808;
		};
		class Tool_80: Tool_0
		{
			idc = 880;
		};
		class Tool_81: Tool_0
		{
			idc = 881;
		};
		class Tool_82: Tool_0
		{
			idc = 882;
		};
		class Tool_83: Tool_0
		{
			idc = 883;
		};
		class Tool_84: Tool_0
		{
			idc = 884;
		};
		class Tool_85: Tool_0
		{
			idc = 885;
		};
		class Tool_86: Tool_0
		{
			idc = 886;
		};
		class Tool_87: Tool_0
		{
			idc = 887;
		};
		class Tool_88: Tool_0
		{
			idc = 888;
		};
		class Tool_89: Tool_0
		{
			idc = 889;
		};
		class Tool_9: Tool_0
		{
			idc = 809;
		};
		class Tool_90: Tool_0
		{
			idc = 890;
		};
		class Tool_91: Tool_0
		{
			idc = 891;
		};
		class Tool_92: Tool_0
		{
			idc = 892;
		};
		class Tool_93: Tool_0
		{
			idc = 893;
		};
		class Tool_94: Tool_0
		{
			idc = 894;
		};
		class Tool_95: Tool_0
		{
			idc = 895;
		};
		class Tool_96: Tool_0
		{
			idc = 896;
		};
		class Tool_97: Tool_0
		{
			idc = 897;
		};
		class Tool_98: Tool_0
		{
			idc = 898;
		};
		class Tool_99: Tool_0
		{
			idc = 899;
		};
	};
};
