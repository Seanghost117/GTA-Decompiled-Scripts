#region Local Var
	var uLocal_0 = 0;
	var uLocal_1 = 0;
	int iLocal_2 = 0;
	int iLocal_3 = 0;
	int iLocal_4 = 0;
	int iLocal_5 = 0;
	int iLocal_6 = 0;
	int iLocal_7 = 0;
	int iLocal_8 = 0;
	int iLocal_9 = 0;
	int iLocal_10 = 0;
	int iLocal_11 = 0;
	var uLocal_12 = 0;
	var uLocal_13 = 0;
	float fLocal_14 = 0f;
	var uLocal_15 = 0;
	var uLocal_16 = 0;
	int iLocal_17 = 0;
	char* sLocal_18 = 0;
	var uLocal_19 = 0;
	var uLocal_20 = 0;
	var uLocal_21 = 0;
	var uLocal_22 = 0;
	float fLocal_23 = 0f;
	float fLocal_24 = 0f;
	float fLocal_25 = 0f;
	var uLocal_26 = 0;
	var uLocal_27 = 0;
	int iLocal_28 = 0;
	float fLocal_29 = 0f;
	var uLocal_30 = 0;
	var uLocal_31 = 0;
	var uLocal_32 = 0;
	float fLocal_33 = 0f;
	float fLocal_34 = 0f;
	var uLocal_35 = 0;
	var uLocal_36 = 0;
	var uLocal_37 = 0;
	var uLocal_38 = 0;
	int iLocal_39 = 0;
	int iLocal_40 = 0;
	int iLocal_41 = 0;
	int iLocal_42 = 0;
	var uLocal_43 = 0;
	var uLocal_44 = 0;
	var uLocal_45 = 0;
	var uLocal_46 = 0;
	var uLocal_47 = 0;
	var uLocal_48 = 0;
	var uLocal_49 = 0;
	var uLocal_50 = 0;
	var uLocal_51 = 0;
	var uLocal_52 = 0;
	var uLocal_53 = 0;
	var uLocal_54 = 0;
	var uLocal_55 = 0;
#endregion

void main() // Position - 0x0
{
	iLocal_2 = 1;
	iLocal_3 = 134;
	iLocal_4 = 134;
	iLocal_5 = 1;
	iLocal_6 = 1;
	iLocal_7 = 1;
	iLocal_8 = 134;
	iLocal_9 = 1;
	iLocal_10 = 12;
	iLocal_11 = 12;
	fLocal_14 = 0.001f;
	iLocal_17 = -1;
	sLocal_18 = "NULL";
	fLocal_23 = 80f;
	fLocal_24 = 140f;
	fLocal_25 = 180f;
	iLocal_28 = 3;
	fLocal_29 = 0f;
	fLocal_33 = -0.0375f;
	fLocal_34 = 0.17f;
	iLocal_39 = 1;
	iLocal_40 = 65;
	iLocal_41 = 49;
	iLocal_42 = 64;

	if (func_88(&uLocal_46))
	{
		while (!func_79())
		{
			func_67(&uLocal_46);
		
			if (func_57(&uLocal_46))
				break;
		
			func_17(&uLocal_46);
			SYSTEM::WAIT(0);
		}
	}

	func_1(&uLocal_46);
	return;
}

void func_1(var uParam0) // Position - 0xA8
{
	func_16();

	if (func_10(uParam0))
		unk_0xCD3C8E1022864F65(1);

	if (func_8(&uLocal_46))
		func_4(&uLocal_46);

	unk_0x508B7A54DEE39001(5);
	func_3();
	unk_0x429DB10B7EDCA0F2(unk_0x93E99A2DBCBA9CFA(), 0);
	func_2();
	return;
}

void func_2() // Position - 0xE7
{
	unk_0x675D9C12C73D3DE7();
	return;
}

void func_3() // Position - 0xF3
{
	unk_0x061B1200C95204CB(&(Global_1853910[unk_0x93E99A2DBCBA9CFA() /*862*/].f_837), 3);
	return;
}

void func_4(var uParam0) // Position - 0x10E
{
	func_7(false, true);
	func_6(false, -1, true);
	func_5(&(uParam0->f_6), 5);
	return;
}

void func_5(var uParam0, int iParam1) // Position - 0x12C
{
	unk_0x061B1200C95204CB(uParam0, iParam1);
	return;
}

void func_6(BOOL bParam0, int iParam1, BOOL bParam2) // Position - 0x13C
{
	if (!unk_0xB8CEC43FB7EF2D92(Global_2646729.f_1582) || Global_2646729.f_1582 == unk_0xAF908D5E2416DA93() || bParam2)
	{
		if (bParam0)
		{
			Global_2646729.f_1582 = unk_0xAF908D5E2416DA93();
			Global_2646729.f_1583 = unk_0x0DB7F8294D73598B();
		}
		else
		{
			Global_2646729.f_1582 = -1;
		}
	
		Global_2646729.f_1585 = iParam1;
		Global_2646729.f_1587 = bParam0;
	}
	else
	{
		!bParam2;
	}

	return;
}

void func_7(BOOL bParam0, BOOL bParam1) // Position - 0x1AE
{
	if (!unk_0xB8CEC43FB7EF2D92(Global_2646729.f_1598) || Global_2646729.f_1598 == unk_0xAF908D5E2416DA93() || bParam1)
	{
		if (bParam0)
		{
			Global_2646729.f_1598 = unk_0xAF908D5E2416DA93();
			unk_0xECDAB41968FF21A8(&(Global_2657589[unk_0x93E99A2DBCBA9CFA() /*466*/].f_73.f_2), 23);
		}
		else
		{
			Global_2646729.f_1598 = -1;
			unk_0x061B1200C95204CB(&(Global_2657589[unk_0x93E99A2DBCBA9CFA() /*466*/].f_73.f_2), 23);
		}
	}
	else
	{
		!bParam1;
	}

	return;
}

BOOL func_8(var uParam0) // Position - 0x22D
{
	return func_9(&(uParam0->f_6), 5);
}

BOOL func_9(var uParam0, int iParam1) // Position - 0x23E
{
	return IS_BIT_SET(*uParam0, iParam1);
}

BOOL func_10(var uParam0) // Position - 0x24C
{
	if (uParam0->f_2 != 0)
		if (func_14("STEALTH_OFF" /*Press ~INPUT_VEH_ROOF~ to enter Stealth Mode when piloting the ~a~. All pilot and passenger weapons are unavailable in Stealth Mode as the ~a~ will not appear on enemy radars or maps.*/, func_15(uParam0->f_2), func_15(uParam0->f_2)) || func_13("STEALTH_ON_P" /*The Pilot has turned on Stealth Mode. All pilot and passenger weapons are unavailable as the ~a~ will not appear on enemy radars or maps.*/, func_15(uParam0->f_2)))
			return true;

	return _IS_THIS_HELP_MESSAGE_BEING_DISPLAYED("STEALTH_ON" /*Press ~INPUT_VEH_ROOF~ to disable Stealth Mode.*/) || _IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(func_11()) || _IS_THIS_HELP_MESSAGE_BEING_DISPLAYED("STEALTH_OFF_P" /*The Pilot has disabled Stealth Mode.*/);
}

char* func_11() // Position - 0x2B0
{
	return "STEALTH_WARN" /*All pilot and passenger weapons are unavailable while the vehicle is in Stealth Mode.*/;
}

BOOL _IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(char* message) // Position - 0x2BB
{
	unk_0x56C9BC27C0FF68D7(message);
	return unk_0x6A92D111B5409879(0);
}

var func_13(char* sParam0, char* sParam1) // Position - 0x2CE
{
	unk_0x56C9BC27C0FF68D7(sParam0);
	unk_0x48849374B34BB7B9(sParam1);
	return unk_0x6A92D111B5409879(0);
}

var func_14(char* sParam0, char* sParam1, char* sParam2) // Position - 0x2E7
{
	unk_0x56C9BC27C0FF68D7(sParam0);
	unk_0x48849374B34BB7B9(sParam1);
	unk_0x48849374B34BB7B9(sParam2);
	return unk_0x6A92D111B5409879(0);
}

char* func_15(int iParam0) // Position - 0x306
{
	if (iParam0 == joaat("annihilator2"))
		return "ANNIH_2_STEALTH" /*Stealth Annihilator*/;

	return unk_0x749766113BB6FF2D(iParam0);
}

void func_16() // Position - 0x324
{
	unk_0x061B1200C95204CB(&(Global_1853910[unk_0x93E99A2DBCBA9CFA() /*862*/].f_837), 1);
	return;
}

void func_17(var uParam0) // Position - 0x33F
{
	func_54(uParam0);
	func_53(uParam0);

	if (func_52(uParam0))
	{
		if (func_51(uParam0) && !func_50(uParam0) && unk_0xB6B927AA8C3DAD36(uParam0->f_1) && !func_49())
		{
			func_48(uParam0, true, 0);
			func_47(uParam0);
		}
		else if (func_9(&(uParam0->f_6), 6) && func_50(uParam0))
		{
			if (unk_0xB6B927AA8C3DAD36(uParam0->f_1) && !func_49())
			{
				func_48(uParam0, false, 0);
				func_5(&(uParam0->f_6), 6);
				func_5(&(uParam0->f_6), 2);
			}
		}
	}

	if (func_46(uParam0))
	{
		unk_0x429DB10B7EDCA0F2(unk_0x93E99A2DBCBA9CFA(), 1);
		func_45();
		func_44(uParam0);
	}
	else if (func_43(uParam0))
	{
		unk_0x429DB10B7EDCA0F2(unk_0x93E99A2DBCBA9CFA(), 0);
		func_16();
		func_44(uParam0);
		func_42(uParam0, 5);
	}

	if (func_50(uParam0) && !func_51(uParam0))
	{
		func_40(uParam0);
		func_39();
		func_42(uParam0, 2);
	
		if (func_36(uParam0))
			func_34();
	}
	else
	{
		func_18(uParam0);
	}

	func_3();
	unk_0x061B1200C95204CB(&(Global_1853910[unk_0x93E99A2DBCBA9CFA() /*862*/].f_837), 4);
	return;
}

void func_18(var uParam0) // Position - 0x474
{
	int num;

	if (!func_9(&(uParam0->f_6), 0) && !func_9(&(uParam0->f_6), 2) && !unk_0xF0E4B64AC0B5660E() && func_33(uParam0) && !func_32(0) && !func_31() && func_29() && unk_0x7DE17ACDD8BA2642(unk_0xA66E176E5772E965(uParam0->f_1, -1, 0)))
	{
		func_25(uParam0, 1);
		func_24(&(uParam0->f_6), 3);
		num = uParam0->f_6.f_2 ? 3333 : 10000;
		uParam0->f_6.f_2 = 0;
	
		if (func_52(uParam0))
			func_21(func_22(uParam0), func_15(uParam0->f_2), func_15(uParam0->f_2), num);
		else
			func_20(func_22(uParam0), func_15(uParam0->f_2), num);
	
		func_19(uParam0);
		func_24(&(uParam0->f_6), 0);
	}

	return;
}

void func_19(var uParam0) // Position - 0x552
{
	func_24(&(uParam0->f_6), 2);
	return;
}

void func_20(char* sParam0, char* sParam1, int iParam2) // Position - 0x563
{
	unk_0x476CC3711883B966(sParam0);
	unk_0x48849374B34BB7B9(sParam1);
	unk_0xBC8969B539DCA239(0, 0, 1, iParam2);
	return;
}

void func_21(char* sParam0, char* sParam1, char* sParam2, int iParam3) // Position - 0x580
{
	unk_0x476CC3711883B966(sParam0);
	unk_0x48849374B34BB7B9(sParam1);
	unk_0x48849374B34BB7B9(sParam2);
	unk_0xBC8969B539DCA239(0, 0, 1, iParam3);
	return;
}

char* func_22(var uParam0) // Position - 0x5A3
{
	if (func_52(uParam0))
		return "STEALTH_OFF" /*Press ~INPUT_VEH_ROOF~ to enter Stealth Mode when piloting the ~a~. All pilot and passenger weapons are unavailable in Stealth Mode as the ~a~ will not appear on enemy radars or maps.*/;

	return "STEALTH_OFF_P" /*The Pilot has disabled Stealth Mode.*/;
}

var func_23(BOOL bParam0, var uParam1, var uParam2) // Position - 0x5BF
{
	if (bParam0)
		return uParam1;

	return uParam2;
}

void func_24(var uParam0, int iParam1) // Position - 0x5D6
{
	unk_0xECDAB41968FF21A8(uParam0, iParam1);
	return;
}

void func_25(var uParam0, int iParam1) // Position - 0x5E6
{
	int num;

	if (func_52(uParam0))
	{
		switch (uParam0->f_2)
		{
			case joaat("akula"):
			case joaat("annihilator2"):
				num = func_28(19004, -1) + iParam1;
			
				if (num >= 0)
					func_26(19004, num, -1);
				break;
		}
	}

	return;
}

void func_26(int iParam0, int iParam1, Hash hParam2) // Position - 0x62C
{
	if (hParam2 == -1)
		hParam2 = func_27();

	if (iParam1 < 0)
		iParam1 = 255;

	unk_0x5B9D75B86493C415(iParam0, iParam1, hParam2);
	return;
}

Hash func_27() // Position - 0x654
{
	return Global_1574918;
}

int func_28(int iParam0, Hash hParam1) // Position - 0x660
{
	if (hParam1 == -1)
		hParam1 = func_27();

	return unk_0x088E49A1CEC4C23F(iParam0, hParam1);
}

BOOL func_29() // Position - 0x67C
{
	return !IS_BIT_SET(Global_1853910[unk_0x93E99A2DBCBA9CFA() /*862*/].f_837, 4) && !func_30();
}

BOOL func_30() // Position - 0x69F
{
	return *Global_4718592.f_104427 == 6 || *Global_4718592.f_104427 == 7 && Global_4718592.f_2 == 20;
}

BOOL func_31() // Position - 0x6D3
{
	return Global_75693;
}

BOOL func_32(int iParam0) // Position - 0x6DF
{
	if (iParam0 == 1)
		if (Global_20383.f_1 > 3)
			if (IS_BIT_SET(Global_8253, 14))
				return true;
			else
				return false;
		else
			return false;

	if (unk_0x24B651D85CCE5EB4(joaat("cellphone_flashhand")) > 0)
		return true;

	if (Global_20383.f_1 > 3)
		return true;

	return false;
}

BOOL func_33(var uParam0) // Position - 0x736
{
	if (func_52(uParam0))
	{
		switch (uParam0->f_2)
		{
			case joaat("akula"):
				return func_28(19004, -1) < 3;
		
			default:
			
		}
	}

	return true;
}

void func_34() // Position - 0x764
{
	if (!unk_0xF0E4B64AC0B5660E())
		_DISPLAY_HELP_TEXT("STEALTH_WARN" /*All pilot and passenger weapons are unavailable while the vehicle is in Stealth Mode.*/, 3000);

	return;
}

void _DISPLAY_HELP_TEXT(char* text, int iParam1) // Position - 0x77E
{
	unk_0x476CC3711883B966(text);
	unk_0xBC8969B539DCA239(0, 0, 1, iParam1);
	return;
}

BOOL func_36(var uParam0) // Position - 0x795
{
	int num;

	if (func_32(0) || func_31())
		return false;

	num = func_37(uParam0);

	switch (num)
	{
		case 1:
			if (unk_0xE665ABCFC5784C35(0, 114) || unk_0xE665ABCFC5784C35(0, 99) || unk_0xE665ABCFC5784C35(0, 100))
				return true;
			break;
	
		case 0:
			if (unk_0xE665ABCFC5784C35(0, 114))
				return true;
			break;
	
		case 2:
			if (unk_0xE665ABCFC5784C35(0, 92))
				return true;
			break;
	
		case 3:
			if (unk_0xE665ABCFC5784C35(0, 68))
				return true;
			break;
	}

	return false;
}

int func_37(var uParam0) // Position - 0x839
{
	if (!func_38(uParam0))
		return 4;

	switch (uParam0->f_2)
	{
		case joaat("akula"):
		case joaat("annihilator2"):
			switch (uParam0->f_4)
			{
				case -1:
					return 1;
			
				case 0:
					return 2;
			
				default:
				
			}
		
			return 4;
	}

	return 4;
}

BOOL func_38(var uParam0) // Position - 0x889
{
	return unk_0x7DE17ACDD8BA2642(unk_0xC1A5EC5C986B98AD()) && !unk_0x055111B11E6624FD(unk_0xC1A5EC5C986B98AD(), 0);
}

void func_39() // Position - 0x8A8
{
	unk_0x8B438725D591ED78(0, 24, 1);
	unk_0x8B438725D591ED78(0, 66, 1);
	unk_0x8B438725D591ED78(0, 67, 1);
	unk_0x8B438725D591ED78(0, 68, 1);
	unk_0x8B438725D591ED78(0, 114, 1);
	unk_0x8B438725D591ED78(0, 69, 1);
	unk_0x8B438725D591ED78(0, 70, 1);
	unk_0x8B438725D591ED78(0, 91, 1);
	unk_0x8B438725D591ED78(0, 92, 1);
	unk_0x8B438725D591ED78(0, 99, 1);
	unk_0x8B438725D591ED78(0, 100, 1);
	unk_0x8B438725D591ED78(0, 37, 1);
	return;
}

void func_40(var uParam0) // Position - 0x910
{
	int num;

	if (!func_9(&(uParam0->f_6), 0) && !func_9(&(uParam0->f_6), 1) && !unk_0xF0E4B64AC0B5660E() && func_9(&(uParam0->f_6), 3) && !func_32(0) && !func_31() && func_29() && unk_0x7DE17ACDD8BA2642(unk_0xA66E176E5772E965(uParam0->f_1, -1, 0)))
	{
		num = uParam0->f_6.f_2 ? 3333 : 10000;
		uParam0->f_6.f_2 = 0;
	
		if (func_52(uParam0))
			_DISPLAY_HELP_TEXT(func_41(uParam0), num);
		else
			func_21(func_41(uParam0), func_15(uParam0->f_2), func_15(uParam0->f_2), num);
	
		func_47(uParam0);
		func_24(&(uParam0->f_6), 0);
	}

	return;
}

char* func_41(var uParam0) // Position - 0x9D9
{
	if (func_52(uParam0))
		return "STEALTH_ON" /*Press ~INPUT_VEH_ROOF~ to disable Stealth Mode.*/;

	return "STEALTH_ON_P" /*The Pilot has turned on Stealth Mode. All pilot and passenger weapons are unavailable as the ~a~ will not appear on enemy radars or maps.*/;
}

void func_42(var uParam0, int iParam1) // Position - 0x9F6
{
	if (func_51(uParam0))
		return;

	if (unk_0x5CFA88F5D9B5E4B8() != iParam1)
		unk_0x508B7A54DEE39001(iParam1);

	if (unk_0x83C5A442AAD15BAF(unk_0x93E99A2DBCBA9CFA()) > iParam1)
		unk_0x8FE445B0989D8C71(unk_0x93E99A2DBCBA9CFA(), iParam1, 0);

	return;
}

BOOL func_43(var uParam0) // Position - 0xA31
{
	return !func_9(uParam0, 0) && func_9(uParam0, 1);
}

void func_44(var uParam0) // Position - 0xA4D
{
	func_5(&(uParam0->f_6), 0);

	if (func_10(uParam0))
		unk_0xCD3C8E1022864F65(1);

	if (!func_52(uParam0))
		if (func_50(uParam0))
			func_5(&(uParam0->f_6), 1);
		else
			func_5(&(uParam0->f_6), 2);

	return;
}

void func_45() // Position - 0xA94
{
	unk_0xECDAB41968FF21A8(&(Global_1853910[unk_0x93E99A2DBCBA9CFA() /*862*/].f_837), 1);
	return;
}

BOOL func_46(var uParam0) // Position - 0xAAF
{
	return func_9(uParam0, 0) && !func_9(uParam0, 1);
}

void func_47(var uParam0) // Position - 0xACB
{
	func_24(&(uParam0->f_6), 1);
	return;
}

void func_48(var uParam0, BOOL bParam1, int iParam2) // Position - 0xADC
{
	switch (uParam0->f_2)
	{
		case joaat("akula"):
		case joaat("annihilator2"):
			unk_0xD703EE4CC6CC49FD(uParam0->f_1, !bParam1, iParam2);
			break;
	}

	return;
}

BOOL func_49() // Position - 0xB09
{
	return IS_BIT_SET(Global_1853910[unk_0x93E99A2DBCBA9CFA() /*862*/].f_837, 3);
}

BOOL func_50(var uParam0) // Position - 0xB21
{
	return func_9(uParam0, 0);
}

BOOL func_51(var uParam0) // Position - 0xB30
{
	return func_9(uParam0, 2);
}

BOOL func_52(var uParam0) // Position - 0xB3F
{
	return func_38(uParam0) && uParam0->f_3 == unk_0xC1A5EC5C986B98AD() || unk_0xA66E176E5772E965(uParam0->f_1, -1, 0) == unk_0xC1A5EC5C986B98AD();
}

void func_53(var uParam0) // Position - 0xB70
{
	if (func_10(uParam0) && func_32(0) || func_31())
	{
		uParam0->f_6.f_2 = 1;
		unk_0xCD3C8E1022864F65(1);
		func_5(&(uParam0->f_6), 0);
	
		if (func_50(uParam0))
		{
			func_5(&(uParam0->f_6), 1);
		}
		else
		{
			func_5(&(uParam0->f_6), 2);
		
			if (func_52(uParam0))
				func_25(uParam0, -1);
		}
	}

	return;
}

void func_54(var uParam0) // Position - 0xBD8
{
	if (func_50(uParam0))
		if (func_8(uParam0))
			if (func_56())
				func_4(uParam0);
		else if (!func_56())
			func_55(uParam0);
	else if (func_8(uParam0))
		func_4(uParam0);

	unk_0x061B1200C95204CB(&(Global_1853910[unk_0x93E99A2DBCBA9CFA() /*862*/].f_837), 2);
	return;
}

void func_55(var uParam0) // Position - 0xC35
{
	func_7(true, true);
	func_6(true, -1, true);
	func_24(&(uParam0->f_6), 5);
	return;
}

BOOL func_56() // Position - 0xC53
{
	return IS_BIT_SET(Global_1853910[unk_0x93E99A2DBCBA9CFA() /*862*/].f_837, 2);
}

BOOL func_57(var uParam0) // Position - 0xC6B
{
	if (!func_38(uParam0))
		return true;

	if (!func_66(uParam0))
		return true;

	if (!func_65(uParam0->f_2))
		return true;

	if (func_64(unk_0x93E99A2DBCBA9CFA(), true, true))
		return true;

	if (func_63(unk_0x93E99A2DBCBA9CFA()))
		return true;

	if (func_60(unk_0x93E99A2DBCBA9CFA()))
		return true;

	if (func_58(unk_0x93E99A2DBCBA9CFA()))
		return true;

	return false;
}

BOOL func_58(int iParam0) // Position - 0xCDE
{
	if (iParam0 > -1)
	{
		if (Global_2657589[iParam0 /*466*/].f_246 > -1)
			if (func_59(Global_2657589[iParam0 /*466*/].f_246) == 4)
				return true;
	
		if (IS_BIT_SET(Global_2657589[iParam0 /*466*/].f_199, 4))
			return true;
	}

	return false;
}

int func_59(int iParam0) // Position - 0xD27
{
	switch (iParam0)
	{
		case -1:
			return 6;
	
		case 0:
			return 0;
	
		case 1:
			return 0;
	
		case 2:
			return 0;
	
		case 3:
			return 0;
	
		case 4:
			return 0;
	
		case 5:
			return 0;
	
		case 6:
			return 0;
	
		case 50:
			return 0;
	
		case 7:
			return 1;
	
		case 8:
			return 1;
	
		case 9:
			return 1;
	
		case 10:
			return 1;
	
		case 11:
			return 1;
	
		case 12:
			return 1;
	
		case 13:
			return 1;
	
		case 14:
			return 1;
	
		case 15:
			return 1;
	
		case 16:
			return 1;
	
		case 17:
			return 1;
	
		case 18:
			return 1;
	
		case 19:
			return 1;
	
		case 20:
			return 1;
	
		case 21:
			return 1;
	
		case 22:
			return 2;
	
		case 23:
			return 2;
	
		case 24:
			return 2;
	
		case 25:
			return 2;
	
		case 26:
			return 2;
	
		case 27:
			return 2;
	
		case 28:
			return 3;
	
		case 29:
			return 3;
	
		case 30:
			return 3;
	
		case 31:
			return 3;
	
		case 32:
			return 3;
	
		case 33:
			return 3;
	
		case 34:
			return 3;
	
		case 35:
			return 3;
	
		case 36:
			return 3;
	
		case 37:
			return 3;
	
		case 38:
			return 3;
	
		case 39:
			return 4;
	
		case 40:
			return 4;
	
		case 41:
			return 4;
	
		case 42:
			return 4;
	
		case 43:
			return 4;
	
		case 44:
			return 4;
	
		case 45:
			return 5;
	
		case 46:
			return 3;
	
		case 47:
			return 3;
	
		case 48:
			return 3;
	
		case 49:
			return 3;
	
		case 52:
			return 3;
	
		case 51:
			return 1;
	
		case 53:
			return 3;
	
		case 54:
			return 2;
	
		case 55:
			return 1;
	
		case 56:
			return 3;
	
		case 57:
			return 1;
	
		case 58:
			return 3;
	
		case 59:
			return 3;
	}

	return 6;
}

BOOL func_60(Player plParam0) // Position - 0x1050
{
	if (plParam0 != _INVALID_PLAYER_INDEX() && _NETWORK_IS_PLAYER_VALID(plParam0, true, true))
		return IS_BIT_SET(Global_2657589[plParam0 /*466*/].f_321, 3);

	return false;
}

BOOL _NETWORK_IS_PLAYER_VALID(Player player, BOOL bIsPlaying, BOOL bUnk) // Position - 0x1081
{
	Player player;

	player = player;

	if (player != -1)
	{
		if (unk_0xE6DEE82DB0922DF0(player))
		{
			if (bIsPlaying)
				if (!unk_0x48DC6A21D1CAD89C(player))
					return false;
		
			if (bUnk)
				if (player == Global_2672505.f_3)
					return Global_2672505.f_2;
				else if (Global_2657589[player /*466*/] != 4)
					return false;
		
			return true;
		}
	}

	return false;
}

Player _INVALID_PLAYER_INDEX() // Position - 0x10E1
{
	return -1;
}

BOOL func_63(int iParam0) // Position - 0x10EA
{
	if (IS_BIT_SET(Global_1853910[iParam0 /*862*/].f_267.f_31, 14))
		return true;

	if (IS_BIT_SET(Global_1853910[iParam0 /*862*/].f_267.f_31, 11))
		return true;

	return false;
}

BOOL func_64(Player plParam0, BOOL bParam1, BOOL bParam2) // Position - 0x1123
{
	if (plParam0 == _INVALID_PLAYER_INDEX())
		return false;

	if (IS_BIT_SET(Global_1853910[plParam0 /*862*/].f_267.f_31, 0))
		return true;

	if (bParam1)
		if (IS_BIT_SET(Global_1853910[plParam0 /*862*/].f_267.f_31, 1))
			return true;

	if (bParam2)
		if (Global_2657589[plParam0 /*466*/].f_321.f_7 != -1)
			return true;

	return false;
}

BOOL func_65(int iParam0) // Position - 0x1187
{
	switch (iParam0)
	{
		case joaat("akula"):
		case joaat("annihilator2"):
			return true;
	
		default:
		
	}

	return false;
}

BOOL func_66(var uParam0) // Position - 0x11A7
{
	return unk_0x7DE17ACDD8BA2642(uParam0->f_1) && unk_0xFBD273FDBCF0C5BD(uParam0->f_1, 0);
}

void func_67(var uParam0) // Position - 0x11C5
{
	BOOL flag;
	BOOL flag2;
	var unk;

	flag = func_9(uParam0, 4);
	flag2 = func_9(uParam0, 0);
	func_78(uParam0);

	if (flag)
		func_24(uParam0, 3);
	else
		func_5(uParam0, 3);

	if (flag2)
		func_24(uParam0, 1);
	else
		func_5(uParam0, 1);

	if (func_38(uParam0))
	{
		if (unk_0x3C3D6D026CF7F51B(unk_0xC1A5EC5C986B98AD(), 0))
		{
			uParam0->f_1 = unk_0xB3011BC7288F3091(unk_0xC1A5EC5C986B98AD());
		
			if (func_66(uParam0))
			{
				uParam0->f_2 = unk_0x504B9BB48D41C264(uParam0->f_1);
			
				if (unk_0xA2C02BFE3012901E(unk_0xC1A5EC5C986B98AD(), 2))
					func_24(uParam0, 2);
			}
		}
	}

	if (func_66(uParam0))
	{
		if (!unk_0x9CFCDD9C62B56708(uParam0->f_1, -1, 0))
		{
			unk = unk_0xA66E176E5772E965(uParam0->f_1, -1, 0);
		
			if (unk_0x7DE17ACDD8BA2642(unk) && !unk_0x055111B11E6624FD(unk, 0) && unk_0x60A06DE259634304(unk))
			{
				uParam0->f_3 = unk;
			
				if (unk == unk_0xC1A5EC5C986B98AD())
				{
					func_24(uParam0, 4);
				
					if (!func_9(uParam0, 3))
						func_24(&(uParam0->f_6), 6);
				}
			}
		}
	
		if (func_38(uParam0))
			uParam0->f_4 = _GET_VEHICLE_SEAT_PED_IS_IN(unk_0xC1A5EC5C986B98AD(), 0);
	
		if (func_52(uParam0))
			if (func_76() && func_70(uParam0))
				func_24(uParam0, 0);
		else
			func_68(uParam0);
	}

	if (func_46(uParam0))
		uParam0->f_6.f_3 = unk_0x0DB7F8294D73598B();

	return;
}

void func_68(var uParam0) // Position - 0x131C
{
	if (unk_0x7DE17ACDD8BA2642(uParam0->f_3) && func_69(unk_0xB850F932D03EF34D(uParam0->f_3)))
		func_24(uParam0, 0);
	else
		func_5(uParam0, 0);

	return;
}

BOOL func_69(int iParam0) // Position - 0x1351
{
	return iParam0 != -1 && IS_BIT_SET(Global_1853910[iParam0 /*862*/].f_837, 1);
}

BOOL func_70(var uParam0) // Position - 0x1370
{
	BOOL flag;

	flag = func_75();

	if (unk_0xB6B927AA8C3DAD36(uParam0->f_1))
	{
		func_74(uParam0);
	
		switch (uParam0->f_2)
		{
			case joaat("akula"):
			case joaat("annihilator2"):
				flag = !unk_0x5F81D84BCBE77405(uParam0->f_1);
				break;
		}
	}
	else if (func_73(uParam0))
	{
		if (func_72(uParam0))
			unk_0xBDB0FB8EEE50C9CD(uParam0->f_1);
	}
	else
	{
		func_71(uParam0);
	}

	return flag;
}

void func_71(var uParam0) // Position - 0x13DB
{
	func_24(&(uParam0->f_6), 4);
	uParam0->f_6.f_1 = unk_0xA5E11AF0A2B928C1();
	return;
}

BOOL func_72(var uParam0) // Position - 0x13F6
{
	return unk_0xA5E11AF0A2B928C1() - uParam0->f_6.f_1 >= 200;
}

BOOL func_73(var uParam0) // Position - 0x140C
{
	return func_9(&(uParam0->f_6), 4);
}

void func_74(var uParam0) // Position - 0x141D
{
	func_5(&(uParam0->f_6), 4);
	return;
}

BOOL func_75() // Position - 0x142E
{
	return IS_BIT_SET(Global_1853910[unk_0x93E99A2DBCBA9CFA() /*862*/].f_837, 1);
}

BOOL func_76() // Position - 0x1446
{
	return !func_30();
}

int _GET_VEHICLE_SEAT_PED_IS_IN(var ped, int includeLastVehicle) // Position - 0x1453
{
	var unk;
	int num;
	int i;
	int num2;

	if (!unk_0x66599E73DBA5A850(ped))
	{
		if (unk_0x3C3D6D026CF7F51B(ped, includeLastVehicle))
		{
			unk = unk_0x95DC39736F6748E3(ped, includeLastVehicle);
		
			if (unk_0x7DE17ACDD8BA2642(unk))
			{
				num = unk_0xB47599824058F1C1(unk_0x504B9BB48D41C264(unk));
			
				if (num == 1)
				{
					num2 = -1;
					return num2;
				}
			
				for (i = 0; i < num; i = i + 1)
				{
					num2 = i - 1;
				
					if (!unk_0x9CFCDD9C62B56708(unk, num2, 0))
						if (unk_0xA66E176E5772E965(unk, num2, 0) == ped)
							return num2;
				}
			}
		}
	}

	return num2;
}

void func_78(var uParam0) // Position - 0x14D8
{
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_3 = 0;
	uParam0->f_2 = 0;
	uParam0->f_4 = -1;
	return;
}

BOOL func_79() // Position - 0x14F8
{
	if (_SHOULD_NETWORK_SCRIPT_TERMINATE())
		return true;

	return false;
}

BOOL _SHOULD_NETWORK_SCRIPT_TERMINATE() // Position - 0x150C
{
	if (Global_1575035 == false)
		if (!unk_0xA26A9A07F761D8F8())
			return true;

	if (func_87())
		return true;

	if (Global_2696915)
		return true;

	if (func_86())
		return true;

	if (_DOES_EVENT_OF_TYPE_EXIST(159))
		if (!func_84())
			return true;

	if (_DOES_EVENT_OF_TYPE_EXIST(157))
		return true;

	if (!unk_0x67EBFCF2F78761B9())
		return true;

	if (_GET_CURRENT_SESSION_TYPE_SCRIPT_HASH() != 0)
		if (unk_0x24B651D85CCE5EB4(_GET_CURRENT_SESSION_TYPE_SCRIPT_HASH()) == 0)
			return true;

	return false;
}

int _GET_CURRENT_SESSION_TYPE_SCRIPT_HASH() // Position - 0x1590
{
	switch (func_83())
	{
		case 0:
			return func_82();
	
		case 2:
			return joaat("creator");
	}

	return 0;
}

int func_82() // Position - 0x15C3
{
	switch (Global_2697019)
	{
		case 0:
			return joaat("freemode");
	
		default:
		
	}

	return joaat("freemode");
}

int func_83() // Position - 0x15E7
{
	return Global_32163;
}

BOOL func_84() // Position - 0x15F2
{
	return Global_2683862.f_698;
}

BOOL _DOES_EVENT_OF_TYPE_EXIST(int iParam0) // Position - 0x1601
{
	if (unk_0x36D3321E138A43F0(1, iParam0))
		return true;

	return false;
}

BOOL func_86() // Position - 0x1618
{
	return Global_2694524;
}

BOOL func_87() // Position - 0x1624
{
	return Global_2683862.f_693;
}

BOOL func_88(var uParam0) // Position - 0x1633
{
	func_67(uParam0);

	if (func_66(uParam0))
		if (func_52(uParam0))
			if (unk_0xB6B927AA8C3DAD36(uParam0->f_1))
				if (!func_49())
					func_48(uParam0, false, 0);
				else
					func_24(&(uParam0->f_6), 3);
		else
			func_24(&(uParam0->f_6), 3);

	return true;
}

