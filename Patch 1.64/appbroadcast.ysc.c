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
	var uLocal_28 = 0;
	var uLocal_29 = 0;
	var uLocal_30 = 0;
	var uLocal_31 = 0;
	var uLocal_32 = 0;
	var uLocal_33 = 0;
	var uLocal_34 = 0;
	var uLocal_35 = 0;
	var uLocal_36 = 0;
	var uLocal_37 = 0;
	var uLocal_38 = 0;
	var uLocal_39 = 0;
	var uLocal_40 = 0;
	var uLocal_41 = 0;
	var uLocal_42 = 0;
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
	TEXT_LABEL_ASSIGN_STRING(&uLocal_30, "CELL_212" /*YES*/, 16);
	TEXT_LABEL_ASSIGN_STRING(&uLocal_34, "CELL_213" /*NO*/, 16);
	TEXT_LABEL_ASSIGN_STRING(&uLocal_38, "CELL_39" /*Broadcast*/, 16);
	TEXT_LABEL_ASSIGN_STRING(&uLocal_42, "CELL_MP_300" /*Activate?*/, 16);
	TEXT_LABEL_ASSIGN_STRING(&uLocal_46, "CELL_MP_301" /*Deactivate?*/, 16);
	TEXT_LABEL_ASSIGN_STRING(&uLocal_50, "CELL_MP_302" /*Unavailable*/, 16);
	unk_0x389D5B1C24A046B5();
	func_45(&uLocal_28);
	func_36();

	while (true)
	{
		SYSTEM::WAIT(0);
	
		if (!unk_0xE3C3FF8D5649A77D())
		{
			func_34(true);
			func_33();
		}
	
		if (!Global_20383.f_1 == 9 && Global_20383.f_1 > 3)
		{
			func_3();
		
			if (Global_20383.f_1 != 8)
				if (func_2())
					func_33();
		}
	
		if (func_1())
			func_33();
	}

	return;
}

BOOL func_1() // Position - 0xDE
{
	if (Global_20383.f_1 == 1 || Global_20383.f_1 == 3 || Global_20383.f_1 == 0 || Global_20327 == 1)
	{
		Global_20370 = 1;
		return true;
	}

	return false;
}

BOOL func_2() // Position - 0x121
{
	if (Global_8859 == 1 || Global_20383.f_1 < 7)
	{
		Global_20370 = 1;
		return true;
	}

	return false;
}

void func_3() // Position - 0x14A
{
	if (func_29(&uLocal_28))
	{
		if (func_16())
		{
			if (Global_2694463)
			{
				unk_0x6821A8C8B49F0BBF(0);
				func_10(-1011984062, _GET_LOBBY_SCRIPT_EVENT_BITS(true, true));
				Global_2694463 = false;
			}
			else
			{
				unk_0x6821A8C8B49F0BBF(1);
				func_10(213830448, _GET_LOBBY_SCRIPT_EVENT_BITS(true, true));
				Global_2694463 = true;
			}
		
			func_4(0);
			return;
		}
	}

	return;
}

void func_4(int iParam0) // Position - 0x1A6
{
	if (func_9())
		return;

	if (Global_20584)
		if (func_8())
			func_6(true, true);
		else
			func_6(false, false);

	if (Global_20383.f_1 == 10 || Global_20383.f_1 == 9)
		unk_0xECDAB41968FF21A8(&Global_8254, 16);

	if (unk_0xE444FD7526C8BB46())
		unk_0xD6625E11483B2324(0);

	Global_21725 = 5;

	if (iParam0 == 1)
		unk_0xECDAB41968FF21A8(&Global_8253, 30);
	else
		unk_0x061B1200C95204CB(&Global_8253, 30);

	if (!func_5())
		Global_20383.f_1 = 3;

	return;
}

BOOL func_5() // Position - 0x230
{
	if (Global_20383.f_1 == 1 || Global_20383.f_1 == 0)
		return true;

	return false;
}

void func_6(BOOL bParam0, BOOL bParam1) // Position - 0x257
{
	if (bParam0)
	{
		if (func_7(0))
		{
			Global_20584 = true;
		
			if (bParam1)
				unk_0xF756EDB27C588BED(&Global_20320);
		
			Global_20311 = { Global_20329[Global_20328 /*3*/] };
			unk_0x6B2D55EA37C443D5(Global_20311);
		}
	}
	else if (Global_20584 == true)
	{
		Global_20584 = false;
		Global_20311 = { Global_20336[Global_20328 /*3*/] };
	
		if (bParam1)
			unk_0x6B2D55EA37C443D5(Global_20320);
		else
			unk_0x6B2D55EA37C443D5(Global_20311);
	}

	return;
}

BOOL func_7(int iParam0) // Position - 0x2CB
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

BOOL func_8() // Position - 0x322
{
	return IS_BIT_SET(Global_1962996, 5);
}

BOOL func_9() // Position - 0x330
{
	return IS_BIT_SET(Global_1962996, 19);
}

void func_10(int iParam0, int iParam1) // Position - 0x33F
{
	int num;

	num = 113023613;
	num.f_1 = unk_0x93E99A2DBCBA9CFA();
	num.f_2 = iParam0;
	num.f_3 = unk_0x15A88CFAAFFC6C4B(0, 9999);

	if (!iParam1 == 0)
		if (unk_0xA26A9A07F761D8F8())
			unk_0x46F55A5B9F053761(1, &num, 4, iParam1);

	return;
}

int _GET_LOBBY_SCRIPT_EVENT_BITS(BOOL includeLocalPlayer, BOOL includeSpectators) // Position - 0x384
{
	int unk;
	int i;
	Player player;

	for (i = 0; i < 32; i = i + 1)
	{
		player = unk_0xADCF72047FEB806E(i);
	
		if (_NETWORK_IS_PLAYER_VALID(player, false, false))
			if (player != unk_0x93E99A2DBCBA9CFA() || includeLocalPlayer)
				if (includeSpectators)
					unk_0xECDAB41968FF21A8(&unk, i);
				else if (!_NETWORK_IS_PLAYER_IN_SCTV(player, 0))
					unk_0xECDAB41968FF21A8(&unk, i);
	}

	return unk;
}

BOOL _NETWORK_IS_PLAYER_IN_SCTV(Player player, int bCheckTeam) // Position - 0x3E9
{
	BOOL flag;

	if (player == unk_0x93E99A2DBCBA9CFA())
		flag = func_13(-1, false) == 8;
	else
		flag = Global_1853910[player /*862*/].f_205 == 8;

	if (bCheckTeam == 1)
		if (unk_0xE6DEE82DB0922DF0(player))
			flag = unk_0x4292F1DE8BA2D22E(player) == 8;

	return flag;
}

int func_13(int iParam0, BOOL bParam1) // Position - 0x434
{
	int num;
	int num2;

	num2 = iParam0;

	if (num2 == -1)
		num2 = func_14();

	if (Global_1575040[num2] == 1)
	{
		bParam1;
		num = 8;
	}
	else
	{
		num = Global_1574912[num2];
		bParam1;
	}

	return num;
}

int func_14() // Position - 0x475
{
	return Global_1574918;
}

BOOL _NETWORK_IS_PLAYER_VALID(Player player, BOOL bIsPlaying, BOOL bUnk) // Position - 0x481
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

BOOL func_16() // Position - 0x4E1
{
	if (!func_23(unk_0x93E99A2DBCBA9CFA(), true) && func_17())
		return true;

	return false;
}

BOOL func_17() // Position - 0x504
{
	if (!func_18())
		return false;

	return true;
}

BOOL func_18() // Position - 0x519
{
	if (Global_1574612)
		return true;

	if (func_22())
		return true;

	if (func_21())
		return true;

	return func_19(120, -1);
}

BOOL func_19(int iParam0, int iParam1) // Position - 0x549
{
	int num;
	int num2;

	num = Global_2848280[iParam0 /*3*/][func_20(iParam1)];

	if (unk_0x494B367FE0CBD765(num, &num2, -1))
		return num2;

	return 0;
}

int func_20(int iParam0) // Position - 0x575
{
	int num;
	int num2;

	num = iParam0;

	if (num == -1)
	{
		num2 = func_14();
	
		if (num2 > -1)
		{
			Global_2804739 = 0;
			num = num2;
		}
		else
		{
			num = 0;
			Global_2804739 = 1;
		}
	}

	return num;
}

BOOL func_21() // Position - 0x5A9
{
	return Global_1575048;
}

BOOL func_22() // Position - 0x5B5
{
	return Global_1575050;
}

BOOL func_23(int iParam0, BOOL bParam1) // Position - 0x5C1
{
	if (func_28() != 0)
		return func_27(iParam0) != 0;

	return func_24(iParam0, bParam1, false);
}

BOOL func_24(int iParam0, BOOL bParam1, BOOL bParam2) // Position - 0x5E8
{
	if (bParam1)
		if (func_25(iParam0))
			return 1;

	!bParam2;

	if (Global_1853910[iParam0 /*862*/] == -1)
		return 0;

	return 1;
}

BOOL func_25(int iParam0) // Position - 0x61A
{
	return func_26(iParam0);
}

BOOL func_26(int iParam0) // Position - 0x628
{
	return IS_BIT_SET(Global_1853910[iParam0 /*862*/].f_11.f_1, 0);
}

int func_27(int iParam0) // Position - 0x63F
{
	if (_NETWORK_IS_PLAYER_VALID(iParam0, false, true))
		return Global_2657589[iParam0 /*466*/].f_1;

	return 0;
}

int func_28() // Position - 0x661
{
	return Global_32163;
}

BOOL func_29(var uParam0) // Position - 0x66C
{
	if (!IS_BIT_SET(*uParam0, 0))
		return false;

	if (Global_20361)
		return false;

	if (!unk_0x35DF833D93BCC488())
		return false;

	if (!unk_0x87644B1F984197FE(2, Global_20352))
		return false;

	func_30();
	Global_20361 = true;
	return true;
}

void func_30() // Position - 0x6B0
{
	if (!unk_0x055111B11E6624FD(unk_0xC1A5EC5C986B98AD(), 0))
	{
		unk_0x531D638530A8DB97(-1, "Menu_Accept", &Global_20372, 1);
		func_31();
	}

	return;
}

void func_31() // Position - 0x6D5
{
	if (func_32())
		unk_0x8C27BB4299B24A0D(5);

	return;
}

BOOL func_32() // Position - 0x6E9
{
	var unk;
	int num;
	int num2;

	if (Global_78558)
		return false;

	num2 = 0;
	unk = unk_0x990C52ABB0EFEBA9();
	num = unk_0x80A3F4E694565F6A(unk);

	if (num == 4)
		num2 = 1;

	if (Global_4542575 || num2)
		return true;

	return true;
}

void func_33() // Position - 0x730
{
	unk_0x675D9C12C73D3DE7();
	return;
}

void func_34(BOOL bParam0) // Position - 0x73C
{
	if (bParam0)
	{
		func_35();
	
		if (Global_20383.f_1 == 10 || Global_20383.f_1 == 9)
			unk_0xECDAB41968FF21A8(&Global_8254, 16);
	
		Global_20383.f_1 = 1;
	
		if (func_7(0))
			func_4(0);
	}
	else if (Global_20383.f_1 == 1)
	{
		if (!Global_20383.f_1 == 0)
			Global_20383.f_1 = 3;
	}

	return;
}

void func_35() // Position - 0x79F
{
	if (Global_20383.f_1 == 9 || Global_20383.f_1 == 10)
	{
		Global_21778 = 0;
		Global_21774 = 1;
	}

	return;
}

void func_36() // Position - 0x7C8
{
	if (!Global_20383.f_1 == 7)
		Global_20383.f_1 = 7;

	func_44(Global_20364, "SET_DATA_SLOT_EMPTY", SYSTEM::TO_FLOAT(13), -1082130432, -1082130432, -1082130432, -1082130432);

	if (func_16())
		if (Global_2694463)
			func_43(Global_20364, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(13), SYSTEM::TO_FLOAT(0), SYSTEM::TO_FLOAT(12), -1f, -1f, &uLocal_46, 0, 0, 0, 0);
		else
			func_43(Global_20364, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(13), SYSTEM::TO_FLOAT(0), SYSTEM::TO_FLOAT(12), -1f, -1f, &uLocal_42, 0, 0, 0, 0);
	else
		func_43(Global_20364, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(13), SYSTEM::TO_FLOAT(0), SYSTEM::TO_FLOAT(12), -1f, -1f, &uLocal_50, 0, 0, 0, 0);

	func_44(Global_20364, "DISPLAY_VIEW", SYSTEM::TO_FLOAT(13), -1082130432, -1082130432, -1082130432, -1082130432);
	func_40(&uLocal_38);

	if (func_16())
		func_37(13, &uLocal_30, 1, "", 4, &uLocal_34, &uLocal_28);
	else
		func_37(1, "", 1, "", 4, &uLocal_34, &uLocal_28);

	return;
}

void func_37(int iParam0, char* sParam1, int iParam2, char* sParam3, int iParam4, char* sParam5, var uParam6) // Position - 0x8D8
{
	func_38(2, iParam0, sParam1, 0, uParam6, -1);
	func_38(1, iParam2, sParam3, 1, uParam6, 17);
	func_38(3, iParam4, sParam5, 2, uParam6, -1);
	return;
}

void func_38(int iParam0, int iParam1, char* sParam2, int iParam3, var uParam4, int iParam5) // Position - 0x908
{
	if (iParam1 == 1)
	{
		func_43(Global_20364, "SET_SOFT_KEYS", SYSTEM::TO_FLOAT(iParam0), 0f, SYSTEM::TO_FLOAT(iParam1), -1f, -1f, 0, 0, 0, 0, 0);
		unk_0x061B1200C95204CB(uParam4, iParam3);
		func_39(iParam5, false);
		return;
	}

	if (Global_20371)
	{
		func_43(Global_20364, "SET_SOFT_KEYS", SYSTEM::TO_FLOAT(iParam0), 1f, SYSTEM::TO_FLOAT(iParam1), -1f, -1f, sParam2, 0, 0, 0, 0);
		unk_0xECDAB41968FF21A8(uParam4, iParam3);
		func_39(iParam5, true);
		return;
	}

	func_43(Global_20364, "SET_SOFT_KEYS", SYSTEM::TO_FLOAT(iParam0), 1f, SYSTEM::TO_FLOAT(iParam1), -1f, -1f, 0, 0, 0, 0, 0);
	unk_0xECDAB41968FF21A8(uParam4, iParam3);
	func_39(iParam5, true);
	return;
}

void func_39(int iParam0, BOOL bParam1) // Position - 0x9AA
{
	if (iParam0 == -1)
		return;

	if (bParam1)
	{
		unk_0xECDAB41968FF21A8(&Global_8253, iParam0);
		return;
	}

	unk_0x061B1200C95204CB(&Global_8253, iParam0);
	return;
}

void func_40(int iParam0) // Position - 0x9D5
{
	func_41(Global_20364, "SET_HEADER", iParam0, 0, 0, 0, 0);
	return;
}

void func_41(var uParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6) // Position - 0x9ED
{
	unk_0x9FD96C5DE6EDFC15(uParam0, sParam1);
	func_42(iParam2);

	if (!unk_0x2AC37494BBF1DB16(iParam3))
		func_42(iParam3);

	if (!unk_0x2AC37494BBF1DB16(iParam4))
		func_42(iParam4);

	if (!unk_0x2AC37494BBF1DB16(iParam5))
		func_42(iParam5);

	if (!unk_0x2AC37494BBF1DB16(iParam6))
		func_42(iParam6);

	unk_0xAE3413B0654A0035();
	return;
}

void func_42(int iParam0) // Position - 0xA48
{
	unk_0x2AF11E92DE43CDE3(iParam0);
	unk_0xF8FCA9E7130CE1C8();
	return;
}

void func_43(var uParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11) // Position - 0xA5A
{
	unk_0x9FD96C5DE6EDFC15(uParam0, sParam1);
	unk_0xC6A3EF6C4A3412C1(SYSTEM::ROUND(fParam2));

	if (fParam3 != -1f)
		unk_0xC6A3EF6C4A3412C1(SYSTEM::ROUND(fParam3));

	if (fParam4 != -1f)
		unk_0xC6A3EF6C4A3412C1(SYSTEM::ROUND(fParam4));

	if (fParam5 != -1f)
		unk_0xC6A3EF6C4A3412C1(SYSTEM::ROUND(fParam5));

	if (fParam6 != -1f)
		unk_0xC6A3EF6C4A3412C1(SYSTEM::ROUND(fParam6));

	if (!unk_0x2AC37494BBF1DB16(iParam7))
		func_42(iParam7);

	if (!unk_0x2AC37494BBF1DB16(iParam8))
		func_42(iParam8);

	if (!unk_0x2AC37494BBF1DB16(iParam9))
		func_42(iParam9);

	if (!unk_0x2AC37494BBF1DB16(iParam10))
		func_42(iParam10);

	if (!unk_0x2AC37494BBF1DB16(iParam11))
		func_42(iParam11);

	unk_0xAE3413B0654A0035();
	return;
}

void func_44(var uParam0, char* sParam1, float fParam2, int iParam3, int iParam4, int iParam5, int iParam6) // Position - 0xB0D
{
	unk_0x9FD96C5DE6EDFC15(uParam0, sParam1);
	unk_0xC6A3EF6C4A3412C1(SYSTEM::ROUND(fParam2));

	if (iParam3 != -1f)
		unk_0xC6A3EF6C4A3412C1(SYSTEM::ROUND(iParam3));

	if (iParam4 != -1f)
		unk_0xC6A3EF6C4A3412C1(SYSTEM::ROUND(iParam4));

	if (iParam5 != -1f)
		unk_0xC6A3EF6C4A3412C1(SYSTEM::ROUND(iParam5));

	if (iParam6 != -1f)
		unk_0xC6A3EF6C4A3412C1(SYSTEM::ROUND(iParam6));

	unk_0xAE3413B0654A0035();
	return;
}

void func_45(var uParam0) // Position - 0xB70
{
	*uParam0 = 0;
	return;
}

