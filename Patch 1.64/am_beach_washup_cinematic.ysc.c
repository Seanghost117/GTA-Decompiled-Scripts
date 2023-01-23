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
	float fLocal_21 = 0f;
	var uLocal_22 = 0;
	var uLocal_23 = 0;
	var uLocal_24 = 0;
	float fLocal_25 = 0f;
	float fLocal_26 = 0f;
	var uLocal_27 = 0;
	var uLocal_28 = 0;
	var uLocal_29 = 0;
	float fLocal_30 = 0f;
	float fLocal_31 = 0f;
	float fLocal_32 = 0f;
	var uLocal_33 = 0;
	var uLocal_34 = 0;
	int iLocal_35 = 0;
	var uLocal_36 = 0;
	var uLocal_37 = 0;
	var uLocal_38 = 0;
	var uLocal_39 = 0;
	var uLocal_40 = 0;
	var uLocal_41 = 0;
	var uLocal_42 = 0;
	var uLocal_43 = 0;
	var uScriptParam_0 = 0;
	var uScriptParam_1 = 0;
	var uScriptParam_2 = 0;
	var uScriptParam_3 = 1176255488;
	var uScriptParam_4 = 1;
	var uScriptParam_5 = -1;
	var uScriptParam_6 = -1;
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
	fLocal_21 = 0f;
	fLocal_25 = -0.0375f;
	fLocal_26 = 0.17f;
	fLocal_30 = 80f;
	fLocal_31 = 140f;
	fLocal_32 = 180f;
	iLocal_35 = 3;
	func_43(&uScriptParam_0);

	while (true)
	{
		func_42();
	
		if (func_33())
			break;
	
		func_14();
	}

	func_1();
	return;
}

void func_1() // Position - 0x85
{
	func_3(&uLocal_37);
	func_2();
	return;
}

void func_2() // Position - 0x97
{
	unk_0x675D9C12C73D3DE7();
	return;
}

void func_3(var uParam0) // Position - 0xA3
{
	var unk;

	func_4(false, true, true, 0, false, false, false);

	if (unk_0xF57C1326FD40C8A7(uParam0->f_6))
		unk_0x42B9FA814615C4F9(uParam0->f_6, 0);

	unk_0x0F2FEB47E011668F(unk_0xC1A5EC5C986B98AD());
	*uParam0 = { unk };
	return;
}

void func_4(BOOL bParam0, BOOL bParam1, BOOL bParam2, int iParam3, BOOL bParam4, BOOL bParam5, BOOL bParam6) // Position - 0xDA
{
	if (bParam0)
	{
		unk_0x8ECAA315E07E3A17(unk_0x93E99A2DBCBA9CFA(), 0);
		unk_0x24E4702792B3DA06(unk_0x93E99A2DBCBA9CFA(), 1);
		unk_0xD9CC3BD0E86A83F2(unk_0x93E99A2DBCBA9CFA(), 1);
		func_13(1);
		unk_0x2A7FF4CA1CC371B5();
		unk_0x3096CB6635EB839E();
	
		if (Global_20383.f_1 > 3 && !bParam6)
		{
			if (unk_0xE444FD7526C8BB46())
				unk_0xD6625E11483B2324(0);
		
			if (!func_12())
				Global_20383.f_1 = 3;
		
			Global_21725 = 5;
		}
	
		func_11(1, iParam3, bParam2, 0);
		Global_63368 = 1;
		Global_75696 = 1;
		Global_78556 = 1;
	}
	else
	{
		func_13(0);
		unk_0x5862CC4FD19EB752();
		Global_63368 = 0;
	
		if (bParam1)
			unk_0xDB4D82037BD5A339();
	
		unk_0x24E4702792B3DA06(unk_0x93E99A2DBCBA9CFA(), 0);
		unk_0xD9CC3BD0E86A83F2(unk_0x93E99A2DBCBA9CFA(), 0);
		func_11(0, iParam3, bParam2, 0);
	
		if (unk_0xA26A9A07F761D8F8())
			if (!unk_0x66599E73DBA5A850(unk_0xC1A5EC5C986B98AD()) && !func_9(unk_0x93E99A2DBCBA9CFA()) && !_NETWORK_IS_PLAYER_IN_SCTV(unk_0x93E99A2DBCBA9CFA(), 0) && !func_5() && !bParam4 && !bParam5 && !unk_0x8253CEEA17ED481B())
				unk_0x226C3A30511D5DC4(unk_0xC1A5EC5C986B98AD(), 0);
		else if (!unk_0x66599E73DBA5A850(unk_0xC1A5EC5C986B98AD()) && !func_9(unk_0x93E99A2DBCBA9CFA()) && !bParam4 && !bParam5)
			unk_0x226C3A30511D5DC4(unk_0xC1A5EC5C986B98AD(), 0);
	
		Global_78556 = 0;
	}

	return;
}

BOOL func_5() // Position - 0x227
{
	return IS_BIT_SET(Global_1853910[unk_0x93E99A2DBCBA9CFA() /*862*/].f_36.f_18, 14);
}

BOOL _NETWORK_IS_PLAYER_IN_SCTV(int player, int bCheckTeam) // Position - 0x241
{
	BOOL flag;

	if (player == unk_0x93E99A2DBCBA9CFA())
		flag = func_7(-1, false) == 8;
	else
		flag = Global_1853910[player /*862*/].f_205 == 8;

	if (bCheckTeam == 1)
		if (unk_0xE6DEE82DB0922DF0(player))
			flag = unk_0x4292F1DE8BA2D22E(player) == 8;

	return flag;
}

int func_7(int iParam0, BOOL bParam1) // Position - 0x28C
{
	int num;
	int num2;

	num2 = iParam0;

	if (num2 == -1)
		num2 = func_8();

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

int func_8() // Position - 0x2CD
{
	return Global_1574918;
}

BOOL func_9(int iParam0) // Position - 0x2D9
{
	if (_NETWORK_IS_PLAYER_IN_SCTV(iParam0, 0))
		return true;

	if (func_10())
		if (iParam0 == unk_0x93E99A2DBCBA9CFA())
			return true;

	if (IS_BIT_SET(Global_2657589[iParam0 /*466*/].f_199, 2))
		return true;

	return false;
}

BOOL func_10() // Position - 0x318
{
	return IS_BIT_SET(Global_2621446, 3);
}

int func_11(int iParam0, int iParam1, BOOL bParam2, int iParam3) // Position - 0x326
{
	int num;

	num = 0;

	if (unk_0xCC17806DB0C41C19())
	{
		if (unk_0x39D9A0A5E812BD25() != iParam0 && bParam2)
		{
			unk_0xA740EFFFBB4FED55(iParam0, iParam1, 1, iParam3);
			num = 1;
		}
	}

	return num;
}

BOOL func_12() // Position - 0x359
{
	if (Global_20383.f_1 == 1 || Global_20383.f_1 == 0)
		return true;

	return false;
}

void func_13(int iParam0) // Position - 0x380
{
	if (iParam0 == 1)
		unk_0xECDAB41968FF21A8(&Global_8253, 13);
	else
		unk_0x061B1200C95204CB(&Global_8253, 13);

	return;
}

void func_14() // Position - 0x3A3
{
	if (func_15(&uLocal_37))
		func_1();

	return;
}

BOOL func_15(var uParam0) // Position - 0x3B8
{
	unk_0xE288789FFB1A0C2F();
	unk_0xFDCA452DEAED1F96();
	func_30(true);
	unk_0x91E7CCDECE70A543();
	func_24(0);

	if (unk_0xFEE065E56A9BEF3F())
		unk_0x72316F178C953A18(0);

	switch (func_23(uParam0))
	{
		case 0:
			func_18(uParam0);
			break;
	
		case 1:
			func_16(uParam0);
			break;
	
		case 2:
			return true;
	}

	return false;
}

void func_16(var uParam0) // Position - 0x416
{
	var unk;

	unk = unk_0x7E80728A2E77D8E8(uParam0->f_5);

	if (unk_0xABF98B1999FE64CA(unk) >= 0.9f)
	{
		unk_0x5A691093FF311F77(uParam0->f_5);
		unk_0x9E2404A25985615A(0, 1, 3000, 1, 0, 0);
		unk_0x6C7E85F31A43117F(unk_0x93E99A2DBCBA9CFA(), 1f, 2000, 0, 1, 0);
		func_17(uParam0, 2);
	}

	return;
}

void func_17(var uParam0, int iParam1) // Position - 0x461
{
	*uParam0 = iParam1;
	return;
}

void func_18(var uParam0) // Position - 0x46E
{
	char* str;

	str = func_20();
	unk_0x28818732C8F0F80E(str);

	if (!unk_0x2BBF749E555360DC(str))
		return;

	unk_0x78DD793477D04C42(800);
	func_17(uParam0, 1);
	func_19(uParam0);
	return;
}

void func_19(var uParam0) // Position - 0x4A3
{
	char* str;

	str = func_20();
	uParam0->f_5 = unk_0x62E15BEBEB67DC6D(uParam0->f_1, 0f, 0f, uParam0->f_4, 2, 0, 0, 1065353216, 0, 1065353216);
	unk_0xA499ADFC7EB2E4DB(unk_0xC1A5EC5C986B98AD(), uParam0->f_5, str, "action", 1000f, -1.5f, 0, 0, 1148846080, 0);
	unk_0x16410571CFB5ED71(uParam0->f_5);
	unk_0x69B06069E38FB537(unk_0xC1A5EC5C986B98AD(), "HS4F_IG25_BEACH", 0);
	unk_0xBB6027D1D193CBA6(unk_0xC1A5EC5C986B98AD(), 0, 0);
	uParam0->f_6 = unk_0x002AF75213D62F6C(joaat("DEFAULT_ANIMATED_CAMERA"), 1);
	unk_0xCAAB6519E962CA4D(uParam0->f_6, "action_camera", str, uParam0->f_1, 0f, 0f, uParam0->f_4, 0, 2);
	unk_0x9E2404A25985615A(1, 0, 3000, 1, 0, 0);
	unk_0x0B34FA69ECCE3927(str);
	return;
}

char* func_20() // Position - 0x54F
{
	if (func_21())
		return "ANIM@SCRIPTED@HEIST@IG25_BEACH@HEELED@";

	return "ANIM@SCRIPTED@HEIST@IG25_BEACH@MALE@";
}

BOOL func_21() // Position - 0x567
{
	return func_22(unk_0x93E99A2DBCBA9CFA());
}

BOOL func_22(var uParam0) // Position - 0x577
{
	if (unk_0x504B9BB48D41C264(unk_0xF2CFBB1105511E1A(uParam0)) == joaat("MP_F_Freemode_01"))
		return 1;

	return 0;
}

int func_23(var uParam0) // Position - 0x596
{
	return *uParam0;
}

void func_24(int iParam0) // Position - 0x5A1
{
	if (func_29())
		return;

	if (!Global_20383.f_1 == 1)
	{
		if (func_28(0))
			func_25(iParam0);
	
		unk_0xECDAB41968FF21A8(&Global_8254, 2);
	}

	return;
}

void func_25(int iParam0) // Position - 0x5D4
{
	if (func_29())
		return;

	if (Global_20584)
		if (func_27())
			func_26(true, true);
		else
			func_26(false, false);

	if (Global_20383.f_1 == 10 || Global_20383.f_1 == 9)
		unk_0xECDAB41968FF21A8(&Global_8254, 16);

	if (unk_0xE444FD7526C8BB46())
		unk_0xD6625E11483B2324(0);

	Global_21725 = 5;

	if (iParam0 == 1)
		unk_0xECDAB41968FF21A8(&Global_8253, 30);
	else
		unk_0x061B1200C95204CB(&Global_8253, 30);

	if (!func_12())
		Global_20383.f_1 = 3;

	return;
}

void func_26(BOOL bParam0, BOOL bParam1) // Position - 0x65E
{
	if (bParam0)
	{
		if (func_28(0))
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

BOOL func_27() // Position - 0x6D2
{
	return IS_BIT_SET(Global_1962996, 5);
}

BOOL func_28(int iParam0) // Position - 0x6E0
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

BOOL func_29() // Position - 0x737
{
	return IS_BIT_SET(Global_1962996, 19);
}

void func_30(BOOL bParam0) // Position - 0x746
{
	if (bParam0)
		func_32();

	func_31(4, -1);
	func_31(6, -1);
	func_31(7, -1);
	func_31(3, -1);
	func_31(1, -1);
	func_31(2, -1);
	func_31(11, -1);
	func_31(13, -1);
	func_31(14, -1);
	func_31(16, -1);
	return;
}

void func_31(int iParam0, int iParam1) // Position - 0x797
{
	unk_0xECDAB41968FF21A8(&(Global_1653913.f_1047), iParam0);

	switch (iParam0)
	{
		case 5:
			if (iParam1 > -1)
				Global_1653913.f_170[iParam1] = 1;
			break;
	}

	return;
}

void func_32() // Position - 0x7CD
{
	Global_2793044.f_4629 = 0;
	return;
}

BOOL func_33() // Position - 0x7DD
{
	if (_SHOULD_NETWORK_SCRIPT_TERMINATE())
		return true;

	return false;
}

BOOL _SHOULD_NETWORK_SCRIPT_TERMINATE() // Position - 0x7F1
{
	if (Global_1575035 == false)
		if (!unk_0xA26A9A07F761D8F8())
			return true;

	if (func_41())
		return true;

	if (Global_2696915)
		return true;

	if (func_40())
		return true;

	if (_DOES_EVENT_OF_TYPE_EXIST(159))
		if (!func_38())
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

int _GET_CURRENT_SESSION_TYPE_SCRIPT_HASH() // Position - 0x875
{
	switch (func_37())
	{
		case 0:
			return func_36();
	
		case 2:
			return joaat("creator");
	}

	return 0;
}

int func_36() // Position - 0x8A8
{
	switch (Global_2697019)
	{
		case 0:
			return joaat("freemode");
	
		default:
		
	}

	return joaat("freemode");
}

int func_37() // Position - 0x8CC
{
	return Global_32163;
}

BOOL func_38() // Position - 0x8D7
{
	return Global_2683862.f_698;
}

BOOL _DOES_EVENT_OF_TYPE_EXIST(int iParam0) // Position - 0x8E6
{
	if (unk_0x36D3321E138A43F0(1, iParam0))
		return true;

	return false;
}

BOOL func_40() // Position - 0x8FD
{
	return Global_2694524;
}

BOOL func_41() // Position - 0x909
{
	return Global_2683862.f_693;
}

void func_42() // Position - 0x918
{
	SYSTEM::WAIT(0);
	return;
}

void func_43(var uParam0) // Position - 0x925
{
	unk_0xCF50389093DECE87(32, 0, -1);
	func_44(&uLocal_37, *uParam0, uParam0->f_3);
	return;
}

void func_44(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4) // Position - 0x943
{
	func_46(uParam0, uParam1);
	func_45(uParam0, uParam4);
	func_4(true, true, true, 0, false, false, false);
	unk_0xC2E3C377D893C17A(unk_0xC1A5EC5C986B98AD(), uParam1, 1, 0, 0, 1);

	if (unk_0x72474BA05A104E1E())
		unk_0x1390E232D730D553();

	return;
}

void func_45(var uParam0, var uParam1) // Position - 0x983
{
	uParam0->f_4 = uParam1;
	return;
}

void func_46(var uParam0, var uParam1, var uParam2, var uParam3) // Position - 0x991
{
	uParam0->f_1 = { uParam1 };
	return;
}

