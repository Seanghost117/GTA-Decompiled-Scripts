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
	var uLocal_18 = 0;
	var uLocal_19 = 0;
	var uLocal_20 = 0;
	char* sLocal_21 = 0;
	var uLocal_22 = 0;
	var uLocal_23 = 0;
	float fLocal_24 = 0f;
	var uLocal_25 = 0;
	var uLocal_26 = 0;
	var uLocal_27 = 0;
	float fLocal_28 = 0f;
	float fLocal_29 = 0f;
	var uLocal_30 = 0;
	var uLocal_31 = 0;
	var uLocal_32 = 0;
	float fLocal_33 = 0f;
	float fLocal_34 = 0f;
	float fLocal_35 = 0f;
	var uLocal_36 = 0;
	var uLocal_37 = 0;
	int iLocal_38 = 0;
	var uLocal_39 = 0;
	var uLocal_40 = 0;
	var uLocal_41 = 0;
	var uLocal_42 = 0;
	var uLocal_43 = 0;
	char* sLocal_44 = 0;
	char* sLocal_45 = 0;
	int iLocal_46 = 0;
	int iLocal_47 = 0;
	int iLocal_48 = 0;
	var uLocal_49 = 0;
	var uLocal_50 = 0;
	var uLocal_51 = 0;
	var uLocal_52 = 0;
	var uLocal_53 = 0;
	var uLocal_54 = 0;
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
	sLocal_21 = "NULL";
	fLocal_24 = 0f;
	fLocal_28 = -0.0375f;
	fLocal_29 = 0.17f;
	fLocal_33 = 80f;
	fLocal_34 = 140f;
	fLocal_35 = 180f;
	iLocal_38 = 3;
	sLocal_44 = "RCMBarryLeadInOut";
	sLocal_45 = "idle";
	uLocal_49 = { 189.5964f, -956.0344f, 29.5771f };
	uLocal_52 = { 190.2424f, -956.379f, 28.63f };
	unk_0x8B438725D591ED78(0, 26, 1);

	if (func_25(unk_0xC1A5EC5C986B98AD()))
		if (unk_0x83C5A442AAD15BAF(unk_0x93E99A2DBCBA9CFA()) != 0)
			unk_0x8FE445B0989D8C71(unk_0x93E99A2DBCBA9CFA(), 0, 0);

	if (unk_0x55EEDBBFDC6E810F(83))
		func_22(false);

	unk_0x28818732C8F0F80E(sLocal_44);
	unk_0xA3C681843B51A4CC("BARY1", 7);

	while (!unk_0x2BBF749E555360DC(sLocal_44) || !unk_0x578F9DB3098790E9(7))
	{
		unk_0x8B438725D591ED78(0, 26, 1);
		SYSTEM::WAIT(0);
	}

	unk_0x8B438725D591ED78(0, 26, 1);
	func_25(unk_0xC1A5EC5C986B98AD());
	iLocal_46 = unk_0xA5E11AF0A2B928C1() + 13000;
	iLocal_47 = unk_0x15A88CFAAFFC6C4B(0, 5);
	func_19();

	while (!func_13(&uLocal_43, 49, uLocal_52, func_18(1.12f), false))
	{
		unk_0x8B438725D591ED78(0, 26, 1);
		SYSTEM::WAIT(0);
	}

	unk_0x8B438725D591ED78(0, 26, 1);
	func_12();
	iLocal_48 = unk_0xA5E11AF0A2B928C1() + 1000;
	unk_0x8B438725D591ED78(0, 26, 1);

	while (true)
	{
		func_25(unk_0xC1A5EC5C986B98AD());
	
		if (unk_0xA5E11AF0A2B928C1() < iLocal_48)
			unk_0x8B438725D591ED78(0, 26, 1);
	
		func_11();
	
		if (!func_25(uLocal_43))
			func_22(false);
	
		func_3();
	
		if (func_2(unk_0xC1A5EC5C986B98AD(), uLocal_52, 1) > 70f)
		{
			func_1(&uLocal_40, false);
			func_1(&uLocal_41, false);
			func_1(&uLocal_42, false);
			func_22(false);
		}
	
		SYSTEM::WAIT(0);
	}

	return;
}

void func_1(var uParam0, BOOL bParam1) // Position - 0x1D9
{
	if (unk_0x7DE17ACDD8BA2642(*uParam0))
	{
		if (unk_0xEFF022A75A217E08(*uParam0))
			unk_0xA81AA70A4D25E140(*uParam0, 1, 1);
	
		if (!bParam1)
			unk_0xC621CC7313639986(uParam0);
		else
			unk_0x6CB555E9F2BCE87A(*uParam0);
	}

	return;
}

float func_2(var uParam0, var uParam1, var uParam2, var uParam3, int iParam4) // Position - 0x214
{
	var unk;

	if (!unk_0x055111B11E6624FD(uParam0, 0))
		unk = { unk_0x30BE8A934C020461(uParam0, 1) };
	else
		unk = { unk_0x30BE8A934C020461(uParam0, 0) };

	return unk_0x2E496FE654DA4166(unk, uParam1, iParam4);
}

BOOL func_3() // Position - 0x24E
{
	var unk;

	if (_DOES_ENTITY_EXIST_AND_IS_ALIVE(unk_0xC1A5EC5C986B98AD()) && _DOES_ENTITY_EXIST_AND_IS_ALIVE(uLocal_43) && !_CONVERSATION_IS_DIALOGUE_IN_PROGRESS() && unk_0xA5E11AF0A2B928C1() > iLocal_46 && func_8(unk_0xC1A5EC5C986B98AD(), uLocal_43, 1) < 20f && !unk_0x5ABCFD3441B37CA6())
	{
		unk = 16;
		_CONVERSATION_INITIALIZE_ACTOR(&unk, 0, uLocal_43, "BARRY", 0, 1);
		_CONVERSATION_ADD_LINE_NO_SUBTITLE(&unk, "BARY1AU", func_6(), 7, 0, 0);
		iLocal_46 = unk_0xA5E11AF0A2B928C1() + unk_0x15A88CFAAFFC6C4B(12000, 18000);
		return true;
	}

	return false;
}

void _CONVERSATION_ADD_LINE_NO_SUBTITLE(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5) // Position - 0x2DE
{
	func_5(uParam0, 145, sParam1, iParam4, iParam5, 0);

	if (iParam3 > 7)
		if (iParam3 < 12)
			iParam3 = 7;

	unk_0xECDAB41968FF21A8(&Global_20591, 0);
	Global_21728 = iParam3;
	TEXT_LABEL_ASSIGN_STRING(&Global_21715, sParam2, 24);
	return;
}

void func_5(var uParam0, eCharacter echParam1, char* sParam2, int iParam3, int iParam4, int iParam5) // Position - 0x319
{
	Global_21179 = { *uParam0 };
	Global_7569 = echParam1;
	TEXT_LABEL_ASSIGN_STRING(&Global_21795, sParam2, 24);
	Global_22714 = iParam5;

	if (iParam3 == 0)
	{
		Global_22712 = 1;
		Global_22710 = 0;
	}
	else
	{
		Global_22712 = 0;
		Global_22710 = 1;
	}

	if (iParam4 == 0)
	{
		Global_22713 = 1;
		Global_22711 = 0;
	}
	else
	{
		Global_22713 = 0;
		Global_22711 = 1;
	}

	return;
}

char* func_6() // Position - 0x36F
{
	char* str;

	switch (iLocal_47)
	{
		case 0:
			str = "BARY1_RCMLI1";
			break;
	
		case 1:
			str = "BARY1_RCMLI2";
			break;
	
		case 2:
			str = "BARY1_RCMLI3";
			break;
	
		case 3:
			str = "BARY1_RCMLI4";
			break;
	
		case 4:
			str = "BARY1_RCMLI5";
			break;
	}

	iLocal_47 = iLocal_47 + 1;

	if (iLocal_47 > 4)
		iLocal_47 = 0;

	return str;
}

void _CONVERSATION_INITIALIZE_ACTOR(var uParam0, int iParam1, var uParam2, char* sParam3, int iParam4, int iParam5) // Position - 0x3D5
{
	uParam0->[iParam1 /*10*/].f_7 == 1;
	uParam0->[iParam1 /*10*/] = uParam2;
	TEXT_LABEL_ASSIGN_STRING(&(uParam0->[iParam1 /*10*/].f_1), sParam3, 24);
	uParam0->[iParam1 /*10*/].f_7 = 1;
	uParam0->[iParam1 /*10*/].f_8 = iParam4;
	uParam0->[iParam1 /*10*/].f_9 = iParam5;

	if (!Global_78558)
	{
		if (!unk_0x66599E73DBA5A850(uParam2))
			if (uParam0->[iParam1 /*10*/].f_8 == 0)
				unk_0xAD4CEC14FE6404F6(uParam2, 0);
			else
				unk_0xAD4CEC14FE6404F6(uParam2, 1);
	
		if (!unk_0x66599E73DBA5A850(uParam2))
			if (uParam0->[iParam1 /*10*/].f_9 == 0)
				unk_0x59B8D6E436F5B21C(uParam2, 0);
			else
				unk_0x59B8D6E436F5B21C(uParam2, 1);
	}

	return;
}

float func_8(var uParam0, var uParam1, int iParam2) // Position - 0x470
{
	var unk;
	var unk4;

	if (!unk_0x055111B11E6624FD(uParam0, 0))
		unk = { unk_0x30BE8A934C020461(uParam0, 1) };
	else
		unk = { unk_0x30BE8A934C020461(uParam0, 0) };

	if (!unk_0x055111B11E6624FD(uParam1, 0))
		unk4 = { unk_0x30BE8A934C020461(uParam1, 1) };
	else
		unk4 = { unk_0x30BE8A934C020461(uParam1, 0) };

	return unk_0x2E496FE654DA4166(unk, unk4, iParam2);
}

BOOL _CONVERSATION_IS_DIALOGUE_IN_PROGRESS() // Position - 0x4CE
{
	if (Global_21725 != 0 || unk_0x0DCB385165FDE763())
		return true;

	return false;
}

BOOL _DOES_ENTITY_EXIST_AND_IS_ALIVE(var uParam0) // Position - 0x4F0
{
	if (unk_0x7DE17ACDD8BA2642(uParam0))
		if (!unk_0x055111B11E6624FD(uParam0, 0))
			return true;

	return false;
}

void func_11() // Position - 0x511
{
	if (unk_0xD612176B6DC58EF7(-1, uLocal_52, 5f))
	{
		if (_DOES_ENTITY_EXIST_AND_IS_ALIVE(uLocal_43))
		{
			unk_0x2718E9CC165A99F6(uLocal_43, 0);
			unk_0xBDB4E7074E200B95(uLocal_43, 1000, 1, 0);
		}
	
		if (_DOES_ENTITY_EXIST_AND_IS_ALIVE(uLocal_41))
			unk_0x2718E9CC165A99F6(uLocal_41, 0);
	
		if (_DOES_ENTITY_EXIST_AND_IS_ALIVE(uLocal_40))
			unk_0x2718E9CC165A99F6(uLocal_40, 0);
	}

	return;
}

void func_12() // Position - 0x561
{
	if (_DOES_ENTITY_EXIST_AND_IS_ALIVE(uLocal_43))
	{
		if (!unk_0x1AFE963DA61006ED(uLocal_43))
			unk_0x85BAE84748AD1A23(uLocal_43, 1, 0);
	
		unk_0x0A3B6B850C2EC4FD(uLocal_43, 1, 0, 0, 0, 1);
		unk_0xC5B2830898581862(uLocal_43, 1);
		unk_0xCFFDA1550DF82B52(uLocal_43, 0);
		unk_0xD14067404D35AAE7(uLocal_43, 0);
		unk_0x260A70C42FAA4EDC(uLocal_43, "POSTBARRY");
		unk_0x8386356641D0DED1(uLocal_43, joaat("PLAYER"));
		unk_0xDDE449983CE7572E(uLocal_43, 0, 0);
		unk_0x2718E9CC165A99F6(uLocal_43, 1);
		unk_0xC2E3C377D893C17A(uLocal_43, uLocal_52, 1, 0, 0, 1);
		unk_0x692C3FDAD7DB53CC(uLocal_43, func_18(1.12f));
		unk_0x2718E9CC165A99F6(uLocal_43, 1);
		unk_0x3EE48ADC8C7F5CC4(uLocal_43, sLocal_44, sLocal_45, 8f, -8f, -1, 9, 0, 0, 0, 0);
		unk_0xEDB03CCB50D11479(uLocal_43, unk_0xC1A5EC5C986B98AD(), -1, 0, 2);
	}

	return;
}

BOOL func_13(var uParam0, int iParam1, var uParam2, var uParam3, var uParam4, float fParam5, BOOL bParam6) // Position - 0x613
{
	int num;

	if (!func_17(iParam1))
	{
		num = func_15(iParam1);
		unk_0x852EC2A7DE66202D(num);
	
		if (unk_0x0CBB7C273DED26E7(num))
		{
			if (unk_0x7DE17ACDD8BA2642(*uParam0))
				unk_0xE9C250FA35A936C8(uParam0);
		
			*uParam0 = unk_0x69FDD9508259E5B5(26, num, uParam2, fParam5, 0, 0);
			unk_0x87EDBB907BE25521(*uParam0);
		
			if (num == joaat("IG_LamarDavis"))
				if (unk_0xAC464F61BE9FD50D(*uParam0, 3) == 0)
					unk_0xFECAE061D8C80757(*uParam0, 5, 2, 0, 0);
		
			func_14(*uParam0, iParam1);
		
			if (bParam6)
				unk_0xE0A291F406691F03(num);
		
			return true;
		}
	}

	return false;
}

int func_14(int iParam0, int iParam1) // Position - 0x6A1
{
	int num;

	num = 7;

	if (iParam1 == 19)
	{
		num = 3;
	}
	else if (iParam1 == 14)
	{
		num = 4;
	}
	else if (iParam1 == 17)
	{
		num = 5;
	}
	else
	{
		num = 7;
		return 0;
	}

	Global_96515[num - 3] = iParam0;
	return 1;
}

int func_15(int iParam0) // Position - 0x6E7
{
	if (!func_17(iParam0))
		return func_16(iParam0);
	else
		iParam0 != 145;

	return 0;
}

int func_16(int iParam0) // Position - 0x70D
{
	return Global_2028[iParam0 /*29*/];
}

BOOL func_17(int iParam0) // Position - 0x71C
{
	return iParam0 < 3;
}

float func_18(float fParam0) // Position - 0x728
{
	return fParam0 * 57.29578f;
}

void func_19() // Position - 0x738
{
	if (unk_0x17AE936FF608BF89(190.56f, -956.4f, 28.63f, 20f, joaat("prop_protest_table_01"), 0))
	{
		uLocal_41 = unk_0x0744FA5607ECEB91(190.56f, -956.4f, 28.63f, 20f, joaat("prop_protest_table_01"), 0, 0, 1);
	
		if (func_25(uLocal_41))
		{
			if (!unk_0x1AFE963DA61006ED(uLocal_41))
				unk_0x85BAE84748AD1A23(uLocal_41, 1, 0);
		
			uLocal_49 = { 189.5964f, -956.0344f, 29.54f };
			unk_0xC2E3C377D893C17A(uLocal_41, uLocal_49, 1, 0, 0, 1);
			unk_0x692C3FDAD7DB53CC(uLocal_41, func_18(-2.01f));
			unk_0x2718E9CC165A99F6(uLocal_41, 1);
		}
	}

	if (unk_0x17AE936FF608BF89(190.56f, -956.4f, 28.63f, 20f, joaat("prop_chair_08"), 0))
	{
		uLocal_40 = unk_0x0744FA5607ECEB91(190.56f, -956.4f, 28.63f, 20f, joaat("prop_chair_08"), 0, 0, 1);
	
		if (func_25(uLocal_40))
		{
			if (!unk_0x1AFE963DA61006ED(uLocal_40))
				unk_0x85BAE84748AD1A23(uLocal_40, 1, 0);
		
			uLocal_49 = { 190.2574f, -956.3513f, 29.621f };
			unk_0xC2E3C377D893C17A(uLocal_40, uLocal_49, 1, 0, 0, 1);
			unk_0x692C3FDAD7DB53CC(uLocal_40, func_18(-1.68f));
			unk_0x2718E9CC165A99F6(uLocal_40, 1);
		}
	}
	else
	{
		uLocal_49 = { 190.2574f, -956.3513f, 29.621f };
		func_20(&uLocal_40, joaat("prop_chair_08"), uLocal_49, func_18(-1.68f));
		unk_0xC2E3C377D893C17A(uLocal_40, uLocal_49, 1, 0, 0, 1);
		unk_0x692C3FDAD7DB53CC(uLocal_40, func_18(-1.68f));
		unk_0x2718E9CC165A99F6(uLocal_40, 1);
	}

	uLocal_49 = { 192.4462f, -953.5946f, 29.0919f };

	if (unk_0x17AE936FF608BF89(uLocal_49, 25f, joaat("prop_protest_sign_01"), 0))
	{
		uLocal_42 = unk_0x0744FA5607ECEB91(uLocal_49, 25f, joaat("prop_protest_sign_01"), 0, 0, 1);
	
		if (func_25(uLocal_42))
		{
			if (!unk_0x1AFE963DA61006ED(uLocal_42))
				unk_0x85BAE84748AD1A23(uLocal_42, 1, 0);
		
			uLocal_49.f_2 = 29.603f;
			unk_0xC2E3C377D893C17A(uLocal_42, uLocal_49, 1, 0, 0, 1);
			unk_0x692C3FDAD7DB53CC(uLocal_42, 23.45f);
		}
	}
	else
	{
		func_20(&uLocal_42, joaat("prop_protest_sign_01"), uLocal_49, 23.45f);
		unk_0xC2E3C377D893C17A(uLocal_42, uLocal_49, 1, 0, 0, 1);
		unk_0x692C3FDAD7DB53CC(uLocal_42, 23.45f);
	}

	return;
}

void func_20(var uParam0, int iParam1, var uParam2, var uParam3, var uParam4, float fParam5) // Position - 0x969
{
	func_21(uParam0);
	*uParam0 = unk_0xF19D6C0E8B56BE23(iParam1, uParam2, 1, 1, 0);
	unk_0x692C3FDAD7DB53CC(*uParam0, fParam5);
	return;
}

void func_21(var uParam0) // Position - 0x990
{
	if (unk_0x7DE17ACDD8BA2642(*uParam0))
	{
		if (unk_0xEFF022A75A217E08(*uParam0))
			unk_0xA81AA70A4D25E140(*uParam0, 1, 1);
	
		unk_0xEF078F1FEE785D3E(uParam0);
	}

	return;
}

void func_22(BOOL bParam0) // Position - 0x9BB
{
	if (bParam0)
		func_24(&uLocal_43);
	else
		func_23(&uLocal_43, 1, 0, 1);

	if (_DOES_ENTITY_EXIST_AND_IS_ALIVE(uLocal_41))
		unk_0x2718E9CC165A99F6(uLocal_41, 0);

	if (_DOES_ENTITY_EXIST_AND_IS_ALIVE(uLocal_40))
		unk_0x2718E9CC165A99F6(uLocal_40, 0);

	if (bParam0)
	{
		func_21(&uLocal_40);
		func_21(&uLocal_41);
		func_21(&uLocal_42);
	}
	else
	{
		func_1(&uLocal_40, false);
		func_1(&uLocal_41, false);
		func_1(&uLocal_42, false);
	}

	unk_0x0B34FA69ECCE3927(sLocal_44);
	unk_0x32FF0B09752F532B(7, 0);
	unk_0x675D9C12C73D3DE7();
	return;
}

void func_23(var uParam0, int iParam1, int iParam2, int iParam3) // Position - 0xA39
{
	if (unk_0x7DE17ACDD8BA2642(*uParam0))
	{
		if (!unk_0x66599E73DBA5A850(*uParam0))
		{
			unk_0x351E6B9FD37CFF33(*uParam0, 0, 1);
		
			if (iParam3 == 0)
				unk_0xA0E06A3361300416(*uParam0);
		
			unk_0x71A535529C1CA5DF(*uParam0, iParam1);
		
			if (iParam2 == 1)
				unk_0xC5B2830898581862(*uParam0, 0);
		}
	
		unk_0x1EEF71E3CDD868D3(uParam0);
	}

	return;
}

void func_24(var uParam0) // Position - 0xA89
{
	if (unk_0x7DE17ACDD8BA2642(*uParam0))
	{
		if (!unk_0x055111B11E6624FD(*uParam0, 0))
			unk_0x351E6B9FD37CFF33(*uParam0, 0, 1);
	
		if (!unk_0x1AFE963DA61006ED(*uParam0))
			unk_0x85BAE84748AD1A23(*uParam0, 1, 0);
	
		unk_0xE9C250FA35A936C8(uParam0);
	}

	return;
}

BOOL func_25(var uParam0) // Position - 0xACA
{
	if (!unk_0x7DE17ACDD8BA2642(uParam0))
		return false;

	return !unk_0x055111B11E6624FD(uParam0, 0);
}

