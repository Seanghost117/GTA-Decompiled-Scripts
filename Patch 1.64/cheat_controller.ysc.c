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
	int iLocal_28 = 0;
	var uLocal_29 = 0;
	var uLocal_30 = 0;
	float fLocal_31 = 0f;
	float fLocal_32 = 0f;
	float fLocal_33 = 0f;
	var uLocal_34 = 0;
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
	int iLocal_46 = 0;
	int iLocal_47 = 0;
	int iLocal_48 = 0;
	int iLocal_49 = 0;
	int iLocal_50 = 0;
	int iLocal_51 = 0;
	int iLocal_52 = 0;
	int iLocal_53 = 0;
	int iLocal_54 = 0;
	int iLocal_55 = 0;
	int iLocal_56 = 0;
	int iLocal_57 = 0;
	int iLocal_58 = 0;
	int iLocal_59 = 0;
	int iLocal_60 = 0;
	int iLocal_61 = 0;
	int iLocal_62 = 0;
	int iLocal_63 = 0;
	int iLocal_64 = 0;
	int iLocal_65 = 0;
	int iLocal_66 = 0;
	int iLocal_67 = 0;
	var uLocal_68 = 0;
	int iLocal_69 = 0;
	char* sLocal_70 = 0;
	int iLocal_71 = 0;
	int iLocal_72 = 0;
	int iLocal_73 = 0;
	var uLocal_74 = 0;
	int iLocal_75 = 0;
	int iLocal_76 = 0;
	int iLocal_77 = 0;
	float fLocal_78 = 0f;
	int iLocal_79 = 0;
	var uLocal_80 = 10;
	var uLocal_81 = 0;
	var uLocal_82 = 0;
	var uLocal_83 = 0;
	var uLocal_84 = 0;
	var uLocal_85 = 0;
	var uLocal_86 = 0;
	var uLocal_87 = 0;
	var uLocal_88 = 0;
	var uLocal_89 = 0;
	var uLocal_90 = 0;
	int iLocal_91 = 0;
	BOOL bLocal_92 = 0;
	BOOL bLocal_93 = 0;
	int iLocal_94 = 0;
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
	iLocal_28 = 3;
	fLocal_31 = 80f;
	fLocal_32 = 140f;
	fLocal_33 = 180f;
	iLocal_39 = 1;
	iLocal_40 = 65;
	iLocal_41 = 49;
	iLocal_42 = 64;
	iLocal_46 = 1;
	iLocal_47 = 1;
	iLocal_48 = 1;
	iLocal_49 = 1;
	iLocal_50 = 1;
	iLocal_51 = 1;
	iLocal_52 = 1;
	iLocal_53 = 1;
	iLocal_54 = 1;
	iLocal_55 = 1;
	iLocal_56 = 1;
	iLocal_57 = 1;
	iLocal_58 = 1;
	iLocal_59 = 1;
	iLocal_60 = 1;
	iLocal_61 = 1;
	iLocal_62 = 1;
	iLocal_63 = 1;
	iLocal_64 = 1;
	iLocal_65 = 1;
	iLocal_66 = 1;
	iLocal_67 = joaat("bmx");
	iLocal_73 = 300000;
	fLocal_78 = 1f;

	if (unk_0x55EEDBBFDC6E810F(34))
		func_113();

	Global_32413 = 0;
	Global_32412 = 0;
	Global_32414 = 0;
	Global_32415 = 0;
	Global_32417 = 0;
	Global_32416 = 0;
	func_112();

	while (true)
	{
		func_2();
	
		if (unk_0xA26A9A07F761D8F8() && _NETWORK_IS_PLAYER_VALID(unk_0x93E99A2DBCBA9CFA(), true, true) && !Global_1836384 && Global_32163 == 0)
			func_113();
	
		SYSTEM::WAIT(0);
	}

	return;
}

BOOL _NETWORK_IS_PLAYER_VALID(Player player, BOOL bIsPlaying, BOOL bUnk) // Position - 0x127
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

void func_2() // Position - 0x187
{
	func_88();
	func_68();
	func_22();
	func_3(iLocal_67);
	return;
}

void func_3(int iParam0) // Position - 0x1A1
{
	switch (iLocal_46)
	{
		case 0:
			break;
	
		case 1:
			break;
	
		case 2:
			if (unk_0xF4AED47DB65D91CE())
			{
				func_21("CHEAT_VEHICLE_SPAWN_DENIED" /*Can't spawn that vehicle here.*/);
				iLocal_46 = 1;
			}
			else
			{
				func_20(iParam0);
			}
			break;
	
		case 4:
			func_4(iParam0);
			break;
	
		default:
			break;
	}

	return;
}

void func_4(int iParam0) // Position - 0x1F6
{
	var unk;
	float num;
	BOOL flag;

	flag = false;

	if (unk_0x0CBB7C273DED26E7(iParam0))
	{
		if (unk_0x48DC6A21D1CAD89C(unk_0x93E99A2DBCBA9CFA()))
		{
			if (unk_0x7DE17ACDD8BA2642(uLocal_68))
			{
				if (!unk_0x055111B11E6624FD(uLocal_68, 0))
				{
					if (unk_0xE0D346789C5160EB(unk_0xC1A5EC5C986B98AD(), uLocal_68, 0))
					{
						unk = { unk_0x30BE8A934C020461(uLocal_68, 1) };
						num = unk_0xD850DD08D5434072(uLocal_68);
						unk_0xC2E3C377D893C17A(unk_0xC1A5EC5C986B98AD(), unk, unk.f_1, unk.f_2 + 4f, 1, 0, 0, 1);
						flag = true;
					}
				}
			
				unk_0x2728CF7242F08BD5(&uLocal_68);
			}
		
			if (!flag)
			{
				if (iParam0 == joaat("duster") || iParam0 == joaat("stunt"))
					unk = { unk_0x7394CB479CCA24AF(unk_0xC1A5EC5C986B98AD(), -1.5f, 3.5f, 1f) };
				else if (iParam0 == joaat("buzzard"))
					unk = { unk_0x7394CB479CCA24AF(unk_0xC1A5EC5C986B98AD(), 0f, 6f, 2f) };
				else
					unk = { unk_0x7394CB479CCA24AF(unk_0xC1A5EC5C986B98AD(), 0f, 3.5f, 1f) };
			
				num = unk_0xD850DD08D5434072(unk_0xC1A5EC5C986B98AD()) + 90f;
			}
		
			if (func_18(iParam0, unk, num))
			{
				uLocal_68 = unk_0xABEEDBEF2BBDF5B3(iParam0, unk, num, 0, 1, 0);
				unk_0xCB8DD5B44DBC2DEB(uLocal_68, 1084227584);
				unk_0xE0A291F406691F03(iParam0);
				unk_0x0E4B6CF706BE8AA4(&uLocal_68);
				func_16(sLocal_70);
				func_5(20);
			}
			else
			{
				unk_0xE0A291F406691F03(iParam0);
				func_21("CHEAT_VEHICLE_SPAWN_DENIED" /*Can't spawn that vehicle here.*/);
			}
		
			iLocal_46 = 1;
		}
	}

	return;
}

void func_5(int iParam0) // Position - 0x339
{
	if (!func_15(14) && !func_14(""))
	{
		unk_0xECDAB41968FF21A8(&Global_32414, iParam0);
		Global_32417 = 1;
		func_6();
	}

	return;
}

void func_6() // Position - 0x36C
{
	eCharacter character;

	character = _GET_CURRENT_PLAYER_CHARACTER();

	switch (character)
	{
		case CHAR_MICHAEL:
			func_7(joaat("SP0_TIMES_CHEATED"), 1);
			break;
	
		case CHAR_FRANKLIN:
			func_7(joaat("SP1_TIMES_CHEATED"), 1);
			break;
	
		case CHAR_TREVOR:
			func_7(joaat("SP2_TIMES_CHEATED"), 1);
			break;
	}

	return;
}

void func_7(int iParam0, int iParam1) // Position - 0x3BA
{
	int num;

	unk_0xDD7756E2742E0F6D(iParam0, &num, -1);
	num = num + iParam1;
	unk_0x3CC35ACFFC9C730E(iParam0, num, 1);
	return;
}

eCharacter _GET_CURRENT_PLAYER_CHARACTER() // Position - 0x3DD
{
	func_9();
	return Global_113648.f_2365.f_539.f_4321;
}

void func_9() // Position - 0x3F6
{
	eCharacter character;

	if (unk_0x7DE17ACDD8BA2642(unk_0xC1A5EC5C986B98AD()))
	{
		if (_GET_CHARACTER_MODEL(Global_113648.f_2365.f_539.f_4321) != unk_0x504B9BB48D41C264(unk_0xC1A5EC5C986B98AD()))
		{
			character = _GET_PLAYER_CHARACTER_FROM_PED(unk_0xC1A5EC5C986B98AD());
		
			if (func_10(character) && !func_15(14) || Global_112599)
			{
				if (Global_113648.f_2365.f_539.f_4321 != character && func_10(Global_113648.f_2365.f_539.f_4321))
					Global_113648.f_2365.f_539.f_4322 = Global_113648.f_2365.f_539.f_4321;
			
				Global_113648.f_2365.f_539.f_4323 = character;
				Global_113648.f_2365.f_539.f_4321 = character;
				return;
			}
		}
		else
		{
			if (Global_113648.f_2365.f_539.f_4321 != _CHAR_NULL)
				Global_113648.f_2365.f_539.f_4323 = Global_113648.f_2365.f_539.f_4321;
		
			return;
		}
	}

	Global_113648.f_2365.f_539.f_4321 = 145;
	return;
}

BOOL func_10(eCharacter echParam0) // Position - 0x4F3
{
	return echParam0 < CHAR_MULTIPLAYER;
}

eCharacter _GET_PLAYER_CHARACTER_FROM_PED(var uParam0) // Position - 0x4FF
{
	eCharacter i;
	int num;

	if (unk_0x7DE17ACDD8BA2642(uParam0))
	{
		num = unk_0x504B9BB48D41C264(uParam0);
	
		for (i = CHAR_MICHAEL; i <= CHAR_TREVOR; i = i + 1)
		{
			if (_GET_CHARACTER_MODEL(i) == num)
				return i;
		}
	}

	return _CHAR_NULL;
}

int _GET_CHARACTER_MODEL(eCharacter character) // Position - 0x53C
{
	if (func_10(character))
		return func_13(character);
	else
		character != _CHAR_NULL;

	return 0;
}

int func_13(eCharacter echParam0) // Position - 0x561
{
	return Global_2028[echParam0 /*29*/];
}

BOOL func_14(char* sParam0) // Position - 0x570
{
	if (iLocal_94 != 0)
	{
		if (func_15(14) && unk_0x35DF833D93BCC488())
		{
			if (unk_0x4310A0DB886F9FED(sParam0, "CHEAT_SUPER_JUMP" /*Super jump.*/) && unk_0xF4AED47DB65D91CE())
				return false;
		
			if (unk_0x4310A0DB886F9FED(sParam0, "CHEAT_GRAVITY_MOON" /*Moon gravity.*/) && !unk_0x055111B11E6624FD(unk_0xC1A5EC5C986B98AD(), 0) && unk_0x1589BC95A4C50F21(unk_0xC1A5EC5C986B98AD()))
				return false;
		}
	
		return true;
	}

	return false;
}

BOOL func_15(int iParam0) // Position - 0x5DA
{
	return Global_43257 == iParam0;
}

void func_16(char* sParam0) // Position - 0x5E8
{
	if (func_14(""))
	{
	}
	else
	{
		unk_0xD30970E11AD0FF0D("CHEAT_ACTIVATED" /*Cheat activated:~n~~a~*/);
		unk_0x48849374B34BB7B9(sParam0);
		func_17(unk_0xEAFC6135DF75DE92(0, 1));
		unk_0xA3795A0A90C01B02(sParam0);
	}

	return;
}

void func_17(var uParam0) // Position - 0x61A
{
	uLocal_80[iLocal_91] = uParam0;
	iLocal_91 = iLocal_91 + 1;

	if (iLocal_91 >= 10)
		iLocal_91 = 0;

	return;
}

BOOL func_18(int iParam0, var uParam1, var uParam2, var uParam3, float fParam4) // Position - 0x63A
{
	var unk;
	var unk29;
	float num;
	float num2;
	var unk36;
	var unk39;
	int num3;
	var unk42;
	var unk43;
	var unk44;
	var unk45;
	var unk46;
	var unk47;
	var unk48;
	var unk49;

	unk = 9;
	unk_0x1C97A6E4D8DA4B2F(iParam0, &unk29, &num);
	num2 = unk_0x2655A8EC638E4FD1(num - unk29) / 2f;
	num2.f_1 = unk_0x2655A8EC638E4FD1(num.f_1 - unk29.f_1) / 2f;
	num2.f_2 = unk_0x2655A8EC638E4FD1(num.f_2 - unk29.f_2) / 2f;
	unk[0 /*3*/] = { uParam1 };
	unk[1 /*3*/] = { unk_0xF2A6E8EA57F9D501(uParam1, fParam4, -num2, -num2.f_1, -num2.f_2) };
	unk[2 /*3*/] = { unk_0xF2A6E8EA57F9D501(uParam1, fParam4, num2, -num2.f_1, -num2.f_2) };
	unk[3 /*3*/] = { unk_0xF2A6E8EA57F9D501(uParam1, fParam4, num2, num2.f_1, -num2.f_2) };
	unk[4 /*3*/] = { unk_0xF2A6E8EA57F9D501(uParam1, fParam4, -num2, num2.f_1, -num2.f_2) };
	unk[5 /*3*/] = { unk_0xF2A6E8EA57F9D501(uParam1, fParam4, -num2, -num2.f_1, num2.f_2) };
	unk[6 /*3*/] = { unk_0xF2A6E8EA57F9D501(uParam1, fParam4, num2, -num2.f_1, num2.f_2) };
	unk[7 /*3*/] = { unk_0xF2A6E8EA57F9D501(uParam1, fParam4, num2, num2.f_1, num2.f_2) };
	unk[8 /*3*/] = { unk_0xF2A6E8EA57F9D501(uParam1, fParam4, -num2, num2.f_1, num2.f_2) };

	if (!unk_0x5B1AFB012FBCA44D(uParam1))
		return false;

	unk48 = unk_0x3007BAE63434C7EE(_GET_PLAYER_COORDS(unk_0x93E99A2DBCBA9CFA()) + { 1f, 0f, 0f }, uParam1, 87, unk_0xC1A5EC5C986B98AD(), 0);
	unk_0x5A2817B89A8ECCD2(unk48, &num3, &unk36, &unk39, &unk49);

	if (num3 != 0)
		return false;

	unk42 = unk_0x3007BAE63434C7EE(unk[1 /*3*/], unk[3 /*3*/], 87, unk_0xC1A5EC5C986B98AD(), 0);
	unk_0x5A2817B89A8ECCD2(unk42, &num3, &unk36, &unk39, &unk49);

	if (num3 != 0)
		return false;

	unk43 = unk_0x3007BAE63434C7EE(unk[2 /*3*/], unk[4 /*3*/], 87, unk_0xC1A5EC5C986B98AD(), 0);
	unk_0x5A2817B89A8ECCD2(unk43, &num3, &unk36, &unk39, &unk49);

	if (num3 != 0)
		return false;

	unk44 = unk_0x3007BAE63434C7EE(unk[5 /*3*/], unk[7 /*3*/], 87, unk_0xC1A5EC5C986B98AD(), 0);
	unk_0x5A2817B89A8ECCD2(unk44, &num3, &unk36, &unk39, &unk49);

	if (num3 != 0)
		return false;

	unk45 = unk_0x3007BAE63434C7EE(unk[6 /*3*/], unk[8 /*3*/], 87, unk_0xC1A5EC5C986B98AD(), 0);
	unk_0x5A2817B89A8ECCD2(unk45, &num3, &unk36, &unk39, &unk49);

	if (num3 != 0)
		return false;

	unk46 = unk_0x3007BAE63434C7EE(unk[1 /*3*/], unk[8 /*3*/], 87, unk_0xC1A5EC5C986B98AD(), 0);
	unk_0x5A2817B89A8ECCD2(unk46, &num3, &unk36, &unk39, &unk49);

	if (num3 != 0)
		return false;

	unk47 = unk_0x3007BAE63434C7EE(unk[2 /*3*/], unk[7 /*3*/], 87, unk_0xC1A5EC5C986B98AD(), 0);
	unk_0x5A2817B89A8ECCD2(unk47, &num3, &unk36, &unk39, &unk49);

	if (num3 != 0)
		return false;

	return true;
}

Vector3 _GET_PLAYER_COORDS(var uParam0) // Position - 0x8F6
{
	return unk_0x30BE8A934C020461(unk_0xF2CFBB1105511E1A(uParam0), 0);
}

void func_20(int iParam0) // Position - 0x909
{
	if (unk_0x9C35450854805E6E(iParam0))
	{
		unk_0x852EC2A7DE66202D(iParam0);
	
		if (unk_0x0CBB7C273DED26E7(iParam0))
			iLocal_46 = 4;
	}

	return;
}

void func_21(char* sParam0) // Position - 0x92C
{
	if (!func_15(14))
	{
		unk_0xD30970E11AD0FF0D("CHEAT_DENIED" /*Cheat denied:~n~~a~*/);
		unk_0x48849374B34BB7B9(sParam0);
		func_17(unk_0xEAFC6135DF75DE92(0, 1));
	}

	return;
}

void func_22() // Position - 0x958
{
	func_65();
	func_64();
	func_45();
	func_44();
	func_43();
	func_39();
	func_36();
	func_32();
	func_23();
	return;
}

void func_23() // Position - 0x984
{
	switch (iLocal_66)
	{
		case 1:
			break;
	
		case 4:
			func_31(19, true);
			func_30();
			break;
	
		case 5:
			if (!unk_0x48DC6A21D1CAD89C(unk_0x93E99A2DBCBA9CFA()) || func_28() || func_27(23) || func_27(21) || func_27(19))
			{
				iLocal_66 = 9;
				return;
			}
		
			func_25();
			break;
	
		case 9:
			func_24("CHEAT_AIM_SLOW_MO" /*Slow motion aim.*/);
			func_31(19, false);
			unk_0x6F5281F7042DC893(1f);
			iLocal_77 = 0;
			iLocal_66 = 1;
			break;
	
		default:
			break;
	}

	return;
}

void func_24(char* sParam0) // Position - 0xA23
{
	if (func_14(sParam0))
	{
	}
	else
	{
		unk_0xD30970E11AD0FF0D("CHEAT_DEACTIVATED" /*Cheat deactivated:~n~~a~*/);
		unk_0x48849374B34BB7B9(sParam0);
		func_17(unk_0xEAFC6135DF75DE92(0, 1));
	}

	return;
}

void func_25() // Position - 0xA4E
{
	if (unk_0x4FBDBA15B9C41492(unk_0xC1A5EC5C986B98AD()))
		if (unk_0x51EB177CA0562B62(2, 25))
			if (func_26(unk_0xC1A5EC5C986B98AD()) != joaat("WEAPON_UNARMED") && func_26(unk_0xC1A5EC5C986B98AD()) != joaat("OBJECT"))
				unk_0x6F5281F7042DC893(fLocal_78);
			else
				unk_0x6F5281F7042DC893(1f);
		else
			unk_0x6F5281F7042DC893(1f);

	return;
}

int func_26(var uParam0) // Position - 0xAA5
{
	int unk;

	unk_0xEBC16D60E30C9AE1(uParam0, &unk, 1);
	return unk;
}

BOOL func_27(int iParam0) // Position - 0xAB9
{
	if (IS_BIT_SET(Global_32412, iParam0))
		return true;

	return false;
}

BOOL func_28() // Position - 0xACF
{
	if (func_15(0) || func_15(11) || func_15(4) || func_15(9) || func_15(10) || func_15(3) || func_15(2) || func_29(35))
		return true;

	return false;
}

BOOL func_29(int iParam0) // Position - 0xB35
{
	if (iParam0 == 146 || iParam0 == -1)
		return false;

	return Global_113648.f_9087.f_99.f_58[iParam0];
}

void func_30() // Position - 0xB62
{
	iLocal_77 = iLocal_77 + 1;

	if (iLocal_77 > 3)
	{
		iLocal_77 = 0;
		iLocal_66 = 9;
		return;
	}

	switch (iLocal_77)
	{
		case 1:
			func_16("CHEAT_AIM_SLOW_MO1" /*Slow motion aim level 1.*/);
			fLocal_78 = 0.6f;
			break;
	
		case 2:
			func_16("CHEAT_AIM_SLOW_MO2" /*Slow motion aim level 2.*/);
			fLocal_78 = 0.4f;
			break;
	
		case 3:
			func_16("CHEAT_AIM_SLOW_MO3" /*Slow motion aim level 3.*/);
			fLocal_78 = 0.2f;
			break;
	
		default:
			break;
	}

	iLocal_66 = 5;
	return;
}

void func_31(int iParam0, BOOL bParam1) // Position - 0xBD2
{
	if (bParam1)
	{
		unk_0xECDAB41968FF21A8(&Global_32413, iParam0);
		func_5(iParam0);
	}
	else
	{
		unk_0x061B1200C95204CB(&Global_32413, iParam0);
	}

	return;
}

void func_32() // Position - 0xBFA
{
	switch (iLocal_63)
	{
		case 1:
			break;
	
		case 4:
			func_31(16, true);
			func_35();
			break;
	
		case 5:
			unk_0x8B438725D591ED78(2, 37, 1);
			unk_0x8B438725D591ED78(2, 19, 1);
		
			if (!unk_0x48DC6A21D1CAD89C(unk_0x93E99A2DBCBA9CFA()) || func_28() || func_34() || func_33(true) || unk_0xE665ABCFC5784C35(2, 37) || unk_0xE665ABCFC5784C35(2, 19) || func_27(23) || func_27(21) || func_27(16))
				iLocal_63 = 9;
			break;
	
		case 9:
			unk_0x8B438725D591ED78(2, 37, 1);
			unk_0x8B438725D591ED78(2, 19, 1);
			func_24("CHEAT_SLOW_MO" /*Slow Motion.*/);
			func_31(16, false);
			iLocal_76 = 0;
			unk_0x6F5281F7042DC893(1f);
			iLocal_63 = 1;
			break;
	
		default:
			break;
	}

	return;
}

BOOL func_33(BOOL bParam0) // Position - 0xCE1
{
	if (bParam0)
		return Global_23131.f_4 && Global_23131.f_104 == 4;

	return Global_23131.f_4;
}

BOOL func_34() // Position - 0xD0A
{
	if (!unk_0xA26A9A07F761D8F8())
		return Global_98159.f_44 == 1;

	return false;
}

void func_35() // Position - 0xD26
{
	iLocal_76 = iLocal_76 + 1;

	if (iLocal_76 > 3)
	{
		iLocal_63 = 9;
		return;
	}

	switch (iLocal_76)
	{
		case 1:
			func_16("CHEAT_SLOW_MO1" /*Slow motion level 1.*/);
			unk_0x6F5281F7042DC893(0.6f);
			break;
	
		case 2:
			func_16("CHEAT_SLOW_MO2" /*Slow motion level 2.*/);
			unk_0x6F5281F7042DC893(0.4f);
			break;
	
		case 3:
			func_16("CHEAT_SLOW_MO3" /*Slow motion level 3.*/);
			unk_0x6F5281F7042DC893(0.2f);
			break;
	
		default:
			break;
	}

	iLocal_63 = 5;
	return;
}

void func_36() // Position - 0xD99
{
	var unk;
	var unk4;
	float num;

	switch (iLocal_64)
	{
		case 1:
			break;
	
		case 2:
			func_31(17, true);
			unk_0x2718E9CC165A99F6(unk_0xC1A5EC5C986B98AD(), 1);
			unk_0xA7225B88CE344621(unk_0x93E99A2DBCBA9CFA(), 1);
			unk_0x03879CC8EF9E3635(unk_0xC1A5EC5C986B98AD(), 1, 1, 1, 1, 1, 0, 0, 0);
			unk_0xCBDC2B59922F92C3(unk_0xC1A5EC5C986B98AD(), joaat("GADGET_PARACHUTE"), 1, 0, 1);
			unk = { unk_0x30BE8A934C020461(unk_0xC1A5EC5C986B98AD(), 1) };
			unk4 = unk_0xD850DD08D5434072(unk_0xC1A5EC5C986B98AD());
			unk_0xDE209AFE421606C6(unk, &num, 0, 0);
			num = num + 500f;
			unk_0xC2E3C377D893C17A(unk_0xC1A5EC5C986B98AD(), unk, unk.f_1, num, 1, 0, 0, 1);
			unk_0x692C3FDAD7DB53CC(unk_0xC1A5EC5C986B98AD(), unk4);
			iLocal_72 = unk_0xA5E11AF0A2B928C1();
			unk_0x6D5ACBBD4CE34249(0);
			iLocal_64 = 3;
			break;
	
		case 3:
			if (func_38(1000, iLocal_72))
			{
				unk_0x2718E9CC165A99F6(unk_0xC1A5EC5C986B98AD(), 0);
				unk_0xE333240A90F2FF3C(unk_0x93E99A2DBCBA9CFA(), 1, 0);
				iLocal_72 = unk_0xA5E11AF0A2B928C1();
				iLocal_64 = 4;
			}
			break;
	
		case 4:
			if (func_38(1000, iLocal_72))
			{
				unk_0x8B438725D591ED78(0, 144, 1);
				unk_0x8B438725D591ED78(0, 149, 1);
			
				if (_GET_CURRENT_PLAYER_CHARACTER() == CHAR_MICHAEL)
					unk_0xFECAE061D8C80757(unk_0xC1A5EC5C986B98AD(), 9, 0, 0, 0);
				else
					unk_0xFECAE061D8C80757(unk_0xC1A5EC5C986B98AD(), 8, 0, 0, 0);
			
				unk_0x78DD793477D04C42(250);
				iLocal_72 = unk_0xA5E11AF0A2B928C1();
				func_16("CHEAT_SKYFALL" /*Skyfall.*/);
				unk_0xB5255F83D0C3DDA0(2);
				iLocal_64 = 5;
			}
			break;
	
		case 5:
			if (!unk_0x48DC6A21D1CAD89C(unk_0x93E99A2DBCBA9CFA()) || func_28() || func_27(23) || func_27(21) || func_27(17))
			{
				iLocal_64 = 9;
				break;
			}
		
			unk_0x8B438725D591ED78(0, 144, 1);
			unk_0xEDECDDE17C1E41F5(2);
		
			if (unk_0xA92CED053FDC0D06(unk_0xC1A5EC5C986B98AD()))
			{
				unk_0x9E1A4BBC2E70DCFB(unk_0xC1A5EC5C986B98AD(), 1, 0f, 200f, 2.5f, 0f, 0f, 0f, 0, 1, 0, 0, 0, 1);
			
				if (unk_0x85A0C6DDA57C5652(unk_0xC1A5EC5C986B98AD()))
					iLocal_64 = 9;
			}
			else
			{
				iLocal_64 = 9;
			}
			break;
	
		case 9:
			func_37();
			func_24("CHEAT_SKYFALL" /*Skyfall.*/);
			func_31(17, false);
			iLocal_64 = 1;
			break;
	
		default:
			break;
	}

	return;
}

void func_37() // Position - 0xF99
{
	if (!unk_0x66599E73DBA5A850(unk_0xC1A5EC5C986B98AD()))
		unk_0x45F3BA5B1F335A4F(unk_0xC1A5EC5C986B98AD(), joaat("GADGET_PARACHUTE"));

	if (iLocal_62 != 5)
	{
		unk_0xA7225B88CE344621(unk_0x93E99A2DBCBA9CFA(), 0);
		unk_0x03879CC8EF9E3635(unk_0xC1A5EC5C986B98AD(), 0, 0, 0, 0, 0, 0, 0, 0);
	}

	unk_0xB5255F83D0C3DDA0(0);
	return;
}

BOOL func_38(int iParam0, int iParam1) // Position - 0xFDE
{
	int num;
	int num2;

	num = unk_0xA5E11AF0A2B928C1();
	num2 = num - iParam0;

	if (num2 > iParam1)
		return true;

	return false;
}

void func_39() // Position - 0xFFF
{
	var unk;

	switch (iLocal_62)
	{
		case 1:
			break;
	
		case 4:
			func_16("CHEAT_INVINCIBILITY" /*Invincible for 5 minutes.*/);
			func_31(15, true);
			iLocal_62 = 5;
			uLocal_74 = unk_0xA5E11AF0A2B928C1();
			unk_0xA7225B88CE344621(unk_0x93E99A2DBCBA9CFA(), 1);
			unk_0x03879CC8EF9E3635(unk_0xC1A5EC5C986B98AD(), 1, 1, 1, 1, 1, 0, 0, 0);
			break;
	
		case 5:
			if (!unk_0x48DC6A21D1CAD89C(unk_0x93E99A2DBCBA9CFA()) || unk_0x66599E73DBA5A850(unk_0xC1A5EC5C986B98AD()))
			{
				iLocal_62 = 9;
				return;
			}
		
			unk = { _GET_PLAYER_COORDS(unk_0x93E99A2DBCBA9CFA()) };
		
			if (func_28() || func_34() || func_27(23) || func_27(21) || func_27(15) || unk.f_2 <= -170f)
			{
				iLocal_62 = 9;
				return;
			}
		
			iLocal_75 = unk_0xA5E11AF0A2B928C1() - uLocal_74;
		
			if (unk_0x24B651D85CCE5EB4(joaat("appinternet")) == 0)
				func_40(iLocal_73 - iLocal_75, "CHEAT_INV" /*INVINCIBILITY*/, 0, 0, 1000, 0, 2, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, -1);
		
			if (iLocal_75 >= iLocal_73 - 1000)
			{
				iLocal_62 = 9;
				return;
			}
		
			unk_0xA7225B88CE344621(unk_0x93E99A2DBCBA9CFA(), 1);
			unk_0x03879CC8EF9E3635(unk_0xC1A5EC5C986B98AD(), 1, 1, 1, 1, 1, 0, 0, 0);
			unk_0xF37CDE10F1FA02C3();
			break;
	
		case 9:
			func_24("CHEAT_INVINCIBILITY_OFF" /*Invincibility*/);
			func_31(15, false);
			iLocal_62 = 1;
		
			if (!unk_0x66599E73DBA5A850(unk_0xC1A5EC5C986B98AD()))
			{
				unk_0xA7225B88CE344621(unk_0x93E99A2DBCBA9CFA(), 0);
				unk_0x03879CC8EF9E3635(unk_0xC1A5EC5C986B98AD(), 0, 0, 0, 0, 0, 0, 0, 0);
			}
			break;
	
		default:
			break;
	}

	return;
}

void func_40(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17) // Position - 0x117A
{
	int num;
	int i;

	num = -1;

	for (i = 0; i <= 9; i = i + 1)
	{
		if (num == -1)
			if (func_42(7, i) == false)
				num = i;
	}

	if (num > -1)
	{
		Global_1655472.f_1 = 1;
		func_41(7, num);
		Global_1655472.f_4659[num] = iParam0;
		TEXT_LABEL_ASSIGN_STRING(&Global_1655472.f_4659.f_11[num /*16*/], sParam1, 64);
		Global_1655472.f_4659.f_172[num] = iParam2;
		Global_1655472.f_4659.f_216[num] = iParam3;
		Global_1655472.f_4659.f_183[num] = iParam4;
		Global_1655472.f_4659.f_194[num] = iParam5;
		Global_1655472.f_4659.f_249[num] = iParam6;
		Global_1655472.f_4659.f_260[num] = iParam7;
		Global_1655472.f_4659.f_205[num] = iParam8;
		Global_1655472.f_4659.f_314[num] = iParam9;
		Global_1655472.f_4659.f_325[num] = iParam10;
		Global_1655472.f_4659.f_357[num] = iParam11;
		Global_1655472.f_4659.f_238[num] = iParam12;
		Global_1655472.f_4659.f_271[num] = iParam13;
		Global_1655472.f_4659.f_368[num] = iParam14;
		Global_1655472.f_4659.f_379[num] = iParam15;
		Global_1655472.f_4659.f_390[num] = iParam16;
		Global_1655472.f_4659.f_227[num] = iParam17;
	}

	return;
}

void func_41(int iParam0, int iParam1) // Position - 0x12D7
{
	unk_0xECDAB41968FF21A8(&Global_1655472.f_7009[iParam0], iParam1);
	return;
}

BOOL func_42(int iParam0, int iParam1) // Position - 0x12F0
{
	return IS_BIT_SET(Global_1655472.f_7009[iParam0], iParam1);
}

void func_43() // Position - 0x1306
{
	switch (iLocal_59)
	{
		case 1:
			break;
	
		case 4:
			func_16("CHEAT_FLAMING_BULLETS" /*Flaming bullets.*/);
			func_31(12, true);
			iLocal_59 = 5;
			break;
	
		case 5:
			if (!unk_0x48DC6A21D1CAD89C(unk_0x93E99A2DBCBA9CFA()) || func_27(23) || func_27(21) || func_27(12))
			{
				iLocal_59 = 9;
				return;
			}
		
			if (func_28())
			{
				iLocal_59 = 9;
				return;
			}
		
			unk_0x862854DF06397753(unk_0x93E99A2DBCBA9CFA());
			break;
	
		case 9:
			func_24("CHEAT_FLAMING_BULLETS" /*Flaming bullets.*/);
			func_31(12, false);
			iLocal_59 = 1;
			break;
	
		default:
			break;
	}

	return;
}

void func_44() // Position - 0x13AD
{
	switch (iLocal_60)
	{
		case 1:
			break;
	
		case 4:
			func_16("CHEAT_EXPLOSIVE_MELEE" /*Explosive melee attacks.*/);
			func_31(13, true);
			iLocal_60 = 5;
			break;
	
		case 5:
			if (!unk_0x48DC6A21D1CAD89C(unk_0x93E99A2DBCBA9CFA()) || func_27(23) || func_27(21) || func_27(13) || func_28())
			{
				iLocal_60 = 9;
				return;
			}
		
			unk_0xD6F191BCA9E07AEE(unk_0x93E99A2DBCBA9CFA());
			break;
	
		case 9:
			func_24("CHEAT_EXPLOSIVE_MELEE" /*Explosive melee attacks.*/);
			func_31(13, false);
			iLocal_60 = 1;
			break;
	
		default:
			break;
	}

	return;
}

void func_45() // Position - 0x1450
{
	switch (iLocal_65)
	{
		case 1:
			break;
	
		case 4:
			func_16("CHEAT_DRUNK" /*Drunk mode.*/);
			func_31(18, true);
			func_60(unk_0xC1A5EC5C986B98AD());
			func_58(30000, 1050253722, 1065353216, 0);
			iLocal_65 = 5;
			break;
	
		case 5:
			if (func_28() || !unk_0x48DC6A21D1CAD89C(unk_0x93E99A2DBCBA9CFA()) || func_27(23) || func_27(21) || func_27(18))
				iLocal_65 = 9;
			break;
	
		case 9:
			func_24("CHEAT_DRUNK" /*Drunk mode.*/);
			func_31(18, false);
			func_49(unk_0xC1A5EC5C986B98AD());
			func_48(1000);
			iLocal_65 = 1;
			break;
	
		case 10:
			func_46(true);
			func_31(18, false);
			iLocal_65 = 1;
			break;
	
		default:
			break;
	}

	return;
}

void func_46(BOOL bParam0) // Position - 0x152A
{
	unk_0x8660199B2F4898FA(0f);
	unk_0x7BCAFEC02B563C0E(0f);
	unk_0x349662FEA4ECE81F(0f);
	unk_0x7EC07327DEB05AC6(1);
	unk_0xE4752D69CC8F9119(0f);
	unk_0x1936275185C4A0E5(1);
	unk_0xBF6A4C0559E4BF39(0);

	if (unk_0xD19C2C73F4D74992("SAFEHOUSE_STONED_MICHAEL"))
		unk_0x3FA8C73B5856A3E4("SAFEHOUSE_STONED_MICHAEL");

	if (!unk_0x2AC37494BBF1DB16(&Global_44424))
		if (unk_0xD19C2C73F4D74992(&Global_44424))
			unk_0x3FA8C73B5856A3E4(&Global_44424);

	if (unk_0xF57C1326FD40C8A7(Global_44412))
	{
		if (unk_0x75F9043412E1F207(Global_44412))
		{
			unk_0xC7B060434432D1C9(Global_44412, 0f);
			unk_0x0969F28D2C570575(Global_44412, 1);
		}
	}

	if (unk_0xC0A15A60BC0C570E())
		unk_0x282AA8C5BDD0836B(0);

	if (bParam0)
		if (unk_0x4F873840FC0FA8FE() != -1 || unk_0xB31050BAEF14E6F4() != -1)
			unk_0xA2EC5ACB2B5D92A4();
		else if (unk_0xB53553DC4AAC7D8A())
			unk_0xA2EC5ACB2B5D92A4();

	Global_44419 = 0f;
	TEXT_LABEL_ASSIGN_STRING(&Global_44420, "", 16);
	TEXT_LABEL_ASSIGN_STRING(&Global_44424, "", 64);
	TEXT_LABEL_ASSIGN_STRING(&Global_44440, "", 16);
	func_47();
	return;
}

void func_47() // Position - 0x1606
{
	Global_44411 = false;
	Global_44412 = 0;
	Global_44413 = 0;
	Global_44414 = 30000;
	Global_44415 = 0f;
	Global_44417 = 0f;
	Global_44416 = 0f;
	Global_44418 = 1f;
	Global_44419 = 0f;
	TEXT_LABEL_ASSIGN_STRING(&Global_44420, "", 16);
	return;
}

void func_48(int iParam0) // Position - 0x163C
{
	int num;

	if (!Global_44411)
		return;

	num = unk_0xA5E11AF0A2B928C1();
	Global_44413 = num + iParam0;
	Global_44414 = iParam0;
	return;
}

void func_49(int iParam0) // Position - 0x1661
{
	int num;
	int num2;
	int num3;

	if (iParam0 == 0)
		return;

	if (!unk_0x7DE17ACDD8BA2642(iParam0))
		return;

	num = func_57(iParam0);

	if (!num == -1)
	{
		num2 = Global_44232[num /*5*/];
		func_52(1, num2, 1);
		return;
	}

	num3 = func_51(iParam0);

	if (num3 == -1)
		return;

	func_50(num3);
	return;
}

void func_50(int iParam0) // Position - 0x16BA
{
	if (iParam0 < 0 || iParam0 >= 5)
		return;

	if (!Global_44206[iParam0 /*5*/].f_1 == 0)
		if (Global_44206[iParam0 /*5*/].f_1 == unk_0xC1A5EC5C986B98AD())
			Global_44444 = 0;

	Global_44206[iParam0 /*5*/] = 13;
	Global_44206[iParam0 /*5*/].f_1 = 0;
	Global_44206[iParam0 /*5*/].f_2 = 0;
	Global_44206[iParam0 /*5*/].f_3 = 0;
	Global_44206[iParam0 /*5*/].f_4 = 0;
	Global_44204 = Global_44204 - 1;

	if (Global_44204 < 0)
		Global_44204 = 0;

	return;
}

int func_51(int iParam0) // Position - 0x173D
{
	int i;

	i = 0;

	for (i = 0; i < 5; i = i + 1)
	{
		if (Global_44206[i /*5*/].f_1 == iParam0)
			return i;
	}

	return -1;
}

void func_52(int iParam0, int iParam1, int iParam2) // Position - 0x176E
{
	func_53(iParam0, iParam1, iParam2, 0, 0, 1);
	return;
}

void func_53(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5) // Position - 0x1783
{
	int num;

	if (iParam0 == -1)
		return;

	if (iParam1 == -1)
		return;

	if (iParam2 == 6)
		return;

	if (func_55(iParam0, iParam1, iParam2))
		return;

	num = func_54();

	if (num == -1)
		return;

	Global_44313[num /*6*/] = iParam0;
	Global_44313[num /*6*/].f_1 = iParam1;
	Global_44313[num /*6*/].f_2 = iParam2;
	Global_44313[num /*6*/].f_3 = iParam3;
	Global_44313[num /*6*/].f_4 = iParam4;
	Global_44313[num /*6*/].f_5 = iParam5;
	return;
}

int func_54() // Position - 0x1805
{
	int i;

	i = 0;

	for (i = 0; i < 16; i = i + 1)
	{
		if (Global_44313[i /*6*/].f_2 == 6)
			return i;
	}

	return -1;
}

BOOL func_55(int iParam0, int iParam1, int iParam2) // Position - 0x1836
{
	if (func_56(iParam0, iParam1, iParam2) == -1)
		return false;

	return true;
}

int func_56(int iParam0, int iParam1, int iParam2) // Position - 0x1851
{
	int i;

	i = 0;

	for (i = 0; i < 16; i = i + 1)
	{
		if (iParam2 == Global_44313[i /*6*/].f_2)
			if (iParam0 == Global_44313[i /*6*/])
				if (iParam1 == Global_44313[i /*6*/].f_1)
					return i;
	}

	return -1;
}

int func_57(int iParam0) // Position - 0x189D
{
	int i;

	if (iParam0 == 0)
		return -1;

	i = 0;

	for (i = 0; i < 16; i = i + 1)
	{
		if (!Global_44232[i /*5*/] == -1)
			if (iParam0 == Global_44232[i /*5*/].f_1)
				return i;
	}

	return -1;
}

void func_58(int iParam0, int iParam1, int iParam2, int iParam3) // Position - 0x18E6
{
	func_59(-1, iParam0, iParam1, iParam2, iParam3, true);
	return;
}

void func_59(int iParam0, int iParam1, float fParam2, float fParam3, int iParam4, BOOL bParam5) // Position - 0x18FC
{
	int num;

	if (Global_3)
		return;

	if (Global_44411)
		return;

	if (!bParam5)
		if (iParam0 < 0)
			return;

	if (fParam2 < 0f || fParam2 > 5f)
		return;

	if (!unk_0x5943EF839F5E017B())
		unk_0x7FE424904239EBA6("DRUNK_SHAKE", fParam3);

	if (!unk_0xF4B77997BE81F7D9())
		unk_0xAE4F0A81118E0B44("DRUNK_SHAKE", fParam3 * Global_44410);

	if (unk_0xF57C1326FD40C8A7(iParam4))
	{
		unk_0xA490483DCDA2F37E(iParam4, "DRUNK_SHAKE", fParam3);
		Global_44412 = iParam4;
	}
	else
	{
		Global_44412 = 0;
	}

	Global_44411 = true;
	num = unk_0xA5E11AF0A2B928C1();
	Global_44413 = num + iParam0;

	if (bParam5)
		if (iParam0 == -1)
			Global_44413 = -1;

	Global_44414 = iParam1;
	Global_44415 = fParam2;
	Global_44417 = fParam3;
	Global_44416 = fParam3;
	return;
}

int func_60(int iParam0) // Position - 0x19B7
{
	return func_61(iParam0, -1, true);
}

int func_61(int iParam0, int iParam1, BOOL bParam2) // Position - 0x19C7
{
	int num;
	int num2;
	int num3;

	if (iParam0 == 0)
		return 0;

	if (!unk_0x7DE17ACDD8BA2642(iParam0))
		return 0;

	num = func_63(iParam0);

	if (!num == -1)
		return 1;

	num2 = func_51(iParam0);

	if (!num2 == -1)
		return 1;

	if (!bParam2)
		if (iParam1 == 0 || iParam1 < 0)
			return 0;

	num3 = func_62();

	if (num3 == -1)
		return 0;

	Global_44206[num3 /*5*/] = 0;
	Global_44206[num3 /*5*/].f_1 = iParam0;
	Global_44206[num3 /*5*/].f_2 = iParam1;
	Global_44206[num3 /*5*/].f_3 = iParam1;
	Global_44206[num3 /*5*/].f_4 = 0;

	if (iParam0 == unk_0xC1A5EC5C986B98AD())
		Global_44444 = 1;

	Global_44204 = Global_44204 + 1;
	return 1;
}

int func_62() // Position - 0x1A83
{
	int i;

	i = 0;

	for (i = 0; i < 5; i = i + 1)
	{
		if (Global_44206[i /*5*/] == 13)
			return i;
	}

	return -1;
}

int func_63(int iParam0) // Position - 0x1AB2
{
	int i;

	if (iParam0 == 0)
		return -1;

	i = 0;

	for (i = 0; i < 16; i = i + 1)
	{
		if (iParam0 == Global_44232[i /*5*/].f_1)
			return Global_44232[i /*5*/];
	}

	return -1;
}

void func_64() // Position - 0x1AF3
{
	switch (iLocal_58)
	{
		case 1:
			break;
	
		case 4:
			func_16("CHEAT_BANG_BANG" /*Bang bang!*/);
			func_31(11, true);
			iLocal_58 = 5;
			break;
	
		case 5:
			if (!unk_0x48DC6A21D1CAD89C(unk_0x93E99A2DBCBA9CFA()) || func_27(23) || func_27(21) || func_27(11))
			{
				iLocal_58 = 9;
				return;
			}
		
			if (func_28())
			{
				iLocal_58 = 9;
				return;
			}
		
			unk_0xD1A6BECE55945337(unk_0x93E99A2DBCBA9CFA());
			break;
	
		case 9:
			func_24("CHEAT_BANG_BANG" /*Bang bang!*/);
			func_31(11, false);
			iLocal_58 = 1;
			break;
	
		default:
			break;
	}

	return;
}

void func_65() // Position - 0x1B9A
{
	switch (iLocal_61)
	{
		case 1:
			break;
	
		case 4:
			func_5(14);
			func_31(14, true);
			func_67();
			break;
	
		case 5:
			if (!unk_0x66599E73DBA5A850(unk_0xC1A5EC5C986B98AD()))
				if (!unk_0x48DC6A21D1CAD89C(unk_0x93E99A2DBCBA9CFA()) || func_28() || func_27(23) || func_27(21) || func_27(14) || func_66(17) || unk_0x1589BC95A4C50F21(unk_0xC1A5EC5C986B98AD()))
					iLocal_61 = 9;
			else
				iLocal_61 = 9;
			break;
	
		case 9:
			func_24("CHEAT_GRAVITY_MOON" /*Moon gravity.*/);
			func_31(14, false);
			unk_0x641CC0A1C6A3270D(0);
			iLocal_79 = 0;
			iLocal_61 = 1;
			break;
	
		default:
			break;
	}

	return;
}

BOOL func_66(int iParam0) // Position - 0x1C65
{
	if (IS_BIT_SET(Global_32413, iParam0))
		return true;

	return false;
}

void func_67() // Position - 0x1C7B
{
	iLocal_79 = iLocal_79 + 1;

	if (iLocal_79 > 1)
	{
		iLocal_61 = 9;
		return;
	}

	switch (iLocal_79)
	{
		case 1:
			func_16("CHEAT_GRAVITY_MOON" /*Moon gravity.*/);
			unk_0x641CC0A1C6A3270D(1);
			break;
	
		default:
			break;
	}

	iLocal_61 = 5;
	return;
}

void func_68() // Position - 0x1CB8
{
	func_87();
	func_81();
	func_80();
	func_79();
	func_78();
	func_77();
	func_76();
	func_74();
	func_73();
	func_72();
	func_69();
	return;
}

void func_69() // Position - 0x1CEC
{
	if (iLocal_57 == 4)
	{
		iLocal_57 = 1;
	
		if (func_27(23) || func_27(22) || func_27(10))
		{
			func_21("CHEAT_NOT_NOW" /*Can't activate that cheat right now.*/);
			return;
		}
	
		if (func_70())
		{
			func_21("CHEAT_PHONE_DENIED" /*Can't activate cheats while using the cellphone.*/);
			return;
		}
	
		if (unk_0x48DC6A21D1CAD89C(unk_0x93E99A2DBCBA9CFA()))
		{
			func_16("CHEAT_GIVE_PARACHUTE" /*Parachute given.*/);
			unk_0xCBDC2B59922F92C3(unk_0xC1A5EC5C986B98AD(), joaat("GADGET_PARACHUTE"), 1, 1, 1);
			func_5(10);
		}
	}

	return;
}

BOOL func_70() // Position - 0x1D64
{
	if (bLocal_93)
	{
		bLocal_93 = false;
		return false;
	}

	if (func_71(0))
		return true;

	return false;
}

BOOL func_71(int iParam0) // Position - 0x1D85
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

void func_72() // Position - 0x1DDC
{
	int num;

	if (iLocal_56 == 4)
	{
		iLocal_56 = 1;
	
		if (func_27(23) || func_27(22) || func_27(9))
		{
			func_21("CHEAT_NOT_NOW" /*Can't activate that cheat right now.*/);
			return;
		}
	
		if (func_70())
		{
			func_21("CHEAT_PHONE_DENIED" /*Can't activate cheats while using the cellphone.*/);
			return;
		}
	
		if (unk_0x48DC6A21D1CAD89C(unk_0x93E99A2DBCBA9CFA()))
		{
			if (unk_0x5CFA88F5D9B5E4B8() == 0)
			{
				func_21("CHEAT_NOT_NOW" /*Can't activate that cheat right now.*/);
				return;
			}
		
			num = unk_0x83C5A442AAD15BAF(unk_0x93E99A2DBCBA9CFA());
		
			if (num > 0)
			{
				func_16("CHEAT_WANTED_DOWN" /*Wanted Level down.*/);
				unk_0x8FE445B0989D8C71(unk_0x93E99A2DBCBA9CFA(), num - 1, 0);
				func_5(9);
			}
			else
			{
				func_21("CHEAT_WANTED_DOWN_DENIED" /*No Wanted Level active.*/);
			}
		}
	}

	return;
}

void func_73() // Position - 0x1E7F
{
	int num;

	if (iLocal_55 == 4)
	{
		iLocal_55 = 1;
	
		if (func_27(23) || func_27(22) || func_27(8))
		{
			func_21("CHEAT_NOT_NOW" /*Can't activate that cheat right now.*/);
			return;
		}
	
		if (func_70())
		{
			func_21("CHEAT_PHONE_DENIED" /*Can't activate cheats while using the cellphone.*/);
			return;
		}
	
		if (unk_0x48DC6A21D1CAD89C(unk_0x93E99A2DBCBA9CFA()))
		{
			if (unk_0x5CFA88F5D9B5E4B8() == 0)
			{
				func_21("CHEAT_NOT_NOW" /*Can't activate that cheat right now.*/);
				return;
			}
		
			num = unk_0x83C5A442AAD15BAF(unk_0x93E99A2DBCBA9CFA());
		
			if (num < unk_0x5CFA88F5D9B5E4B8())
			{
				unk_0x8FE445B0989D8C71(unk_0x93E99A2DBCBA9CFA(), num + 1, 0);
				unk_0x6CDFCA6843DA90FF(unk_0x93E99A2DBCBA9CFA(), 0);
				func_16("CHEAT_WANTED_UP" /*Wanted Level up.*/);
				func_5(8);
			}
			else
			{
				func_21("CHEAT_WANTED_UP_DENIED" /*Current max Wanted Level reached.*/);
			}
		}
	}

	return;
}

void func_74() // Position - 0x1F2E
{
	if (iLocal_54 == 4)
	{
		iLocal_54 = 1;
	
		if (func_27(23) || func_27(22) || func_27(7) || func_15(9) || func_15(10) || !unk_0x024E5060D17D7B26(func_75()) || !unk_0xD2261DDD850656E5(unk_0x93E99A2DBCBA9CFA(), 0))
		{
			func_21("CHEAT_NOT_NOW" /*Can't activate that cheat right now.*/);
			return;
		}
	
		if (func_70())
		{
			func_21("CHEAT_PHONE_DENIED" /*Can't activate cheats while using the cellphone.*/);
			return;
		}
	
		if (unk_0x48DC6A21D1CAD89C(unk_0x93E99A2DBCBA9CFA()))
		{
			unk_0xA3F7AA17806EB0A8(unk_0x93E99A2DBCBA9CFA(), 1, 0);
			func_16("CHEAT_SPECIAL_ABILITY" /*Special ability recharged.*/);
			func_5(7);
		}
	}

	return;
}

var func_75() // Position - 0x1FD5
{
	return unk_0x504B9BB48D41C264(unk_0xC1A5EC5C986B98AD());
}

void func_76() // Position - 0x1FE5
{
	var unk;

	if (iLocal_53 == 4)
	{
		iLocal_53 = 1;
	
		if (func_27(23) || func_27(22) || func_27(6) || func_15(9) || func_15(10))
		{
			func_21("CHEAT_NOT_NOW" /*Can't activate that cheat right now.*/);
			return;
		}
	
		if (func_70())
		{
			func_21("CHEAT_PHONE_DENIED" /*Can't activate cheats while using the cellphone.*/);
			return;
		}
	
		if (unk_0x48DC6A21D1CAD89C(unk_0x93E99A2DBCBA9CFA()))
		{
			func_16("CHEAT_HEALTH_ARMOR" /*Max health and armor.*/);
			func_5(6);
			unk_0xED2BD879E739E86B(unk_0xC1A5EC5C986B98AD(), unk_0x15848AD475FC952B(unk_0xC1A5EC5C986B98AD()), 0);
			unk_0x937FA94E62DC1872(unk_0xC1A5EC5C986B98AD(), unk_0x0AA8C4BAC99FC0EA(unk_0x93E99A2DBCBA9CFA()) - unk_0x9E499A04DE5FC62A(unk_0xC1A5EC5C986B98AD()));
		
			if (unk_0x3C3D6D026CF7F51B(unk_0xC1A5EC5C986B98AD(), 0))
			{
				unk = unk_0xB3011BC7288F3091(unk_0xC1A5EC5C986B98AD());
			
				if (unk_0x7DE17ACDD8BA2642(unk))
					if (!unk_0x055111B11E6624FD(unk, 0))
						unk_0x8E2A5E6443418B19(unk);
			}
		}
	}

	return;
}

void func_77() // Position - 0x20BD
{
	if (iLocal_52 == 4)
	{
		iLocal_52 = 1;
	
		if (func_27(23) || func_27(22) || func_27(5))
		{
			func_21("CHEAT_NOT_NOW" /*Can't activate that cheat right now.*/);
			return;
		}
	
		if (func_70())
		{
			func_21("CHEAT_PHONE_DENIED" /*Can't activate cheats while using the cellphone.*/);
			return;
		}
	
		func_5(5);
	
		switch (iLocal_71)
		{
			case 0:
				iLocal_71 = 1;
				[[fallthrough]];
		
			case 1:
				unk_0xA86292DA3C45FD42("EXTRASUNNY");
				unk_0x78B7CD7030E66D08();
				func_16("CHEAT_ADVANCE_WEATHER_EXTRA_SUNNY" /*Extra sunny weather.*/);
				iLocal_71 = 2;
				break;
		
			case 2:
				unk_0xA86292DA3C45FD42("CLEAR");
				unk_0x78B7CD7030E66D08();
				func_16("CHEAT_ADVANCE_WEATHER_CLEAR" /*Clear weather.*/);
				iLocal_71 = 3;
				break;
		
			case 3:
				unk_0xA86292DA3C45FD42("CLOUDS");
				unk_0x78B7CD7030E66D08();
				func_16("CHEAT_ADVANCE_WEATHER_CLOUDY" /*Cloudy weather.*/);
				iLocal_71 = 4;
				break;
		
			case 4:
				unk_0xA86292DA3C45FD42("SMOG");
				unk_0x78B7CD7030E66D08();
				func_16("CHEAT_ADVANCE_WEATHER_SMOGGY" /*Smoggy weather.*/);
				iLocal_71 = 6;
				break;
		
			case 6:
				unk_0xA86292DA3C45FD42("OVERCAST");
				unk_0x78B7CD7030E66D08();
				func_16("CHEAT_ADVANCE_WEATHER_OVERCAST" /*Overcast weather.*/);
				iLocal_71 = 7;
				break;
		
			case 7:
				unk_0xA86292DA3C45FD42("RAIN");
				unk_0x78B7CD7030E66D08();
				func_16("CHEAT_ADVANCE_WEATHER_RAIN" /*Rainy weather.*/);
				func_31(5, true);
				iLocal_71 = 8;
				break;
		
			case 8:
				unk_0xA86292DA3C45FD42("THUNDER");
				unk_0x78B7CD7030E66D08();
				func_16("CHEAT_ADVANCE_WEATHER_THUNDER" /*Thundery weather.*/);
				iLocal_71 = 9;
				break;
		
			case 9:
				unk_0xA86292DA3C45FD42("CLEARING");
				unk_0x78B7CD7030E66D08();
				func_16("CHEAT_ADVANCE_WEATHER_CLEARING" /*Clearing weather.*/);
				iLocal_71 = 11;
				break;
		
			case 11:
				unk_0xA86292DA3C45FD42("XMAS");
				unk_0x78B7CD7030E66D08();
				func_16("CHEAT_ADVANCE_WEATHER_SNOW" /*Snowy weather.*/);
				iLocal_71 = 0;
				break;
		
			default:
				break;
		}
	}

	return;
}

void func_78() // Position - 0x224C
{
	if (iLocal_51 == 4)
	{
		iLocal_51 = 1;
	
		if (func_27(23) || func_27(22) || func_27(4))
		{
			func_21("CHEAT_NOT_NOW" /*Can't activate that cheat right now.*/);
			return;
		}
	
		if (func_70())
		{
			func_21("CHEAT_PHONE_DENIED" /*Can't activate cheats while using the cellphone.*/);
			return;
		}
	
		func_16("CHEAT_GIVE_WEAPONS" /*Give weapons.*/);
		func_5(4);
	
		if (unk_0x48DC6A21D1CAD89C(unk_0x93E99A2DBCBA9CFA()))
		{
			unk_0x44EBC7775DAE912E(unk_0xC1A5EC5C986B98AD(), joaat("WEAPON_KNIFE"), -1, 0);
			unk_0x44EBC7775DAE912E(unk_0xC1A5EC5C986B98AD(), joaat("WEAPON_SMG"), 300, 0);
			unk_0x44EBC7775DAE912E(unk_0xC1A5EC5C986B98AD(), joaat("WEAPON_ASSAULTRIFLE"), 300, 1);
			unk_0x44EBC7775DAE912E(unk_0xC1A5EC5C986B98AD(), joaat("WEAPON_PUMPSHOTGUN"), 150, 0);
			unk_0x44EBC7775DAE912E(unk_0xC1A5EC5C986B98AD(), joaat("WEAPON_SNIPERRIFLE"), 30, 0);
			unk_0x44EBC7775DAE912E(unk_0xC1A5EC5C986B98AD(), joaat("WEAPON_GRENADE"), 5, 0);
			unk_0x44EBC7775DAE912E(unk_0xC1A5EC5C986B98AD(), joaat("WEAPON_RPG"), 5, 0);
		}
	}

	return;
}

void func_79() // Position - 0x2321
{
	switch (iLocal_50)
	{
		case 1:
			break;
	
		case 4:
			func_16("CHEAT_FAST_SWIM" /*Fast swim.*/);
			func_31(3, true);
			iLocal_50 = 5;
			break;
	
		case 5:
			if (!unk_0x48DC6A21D1CAD89C(unk_0x93E99A2DBCBA9CFA()) || func_27(23) || func_27(22) || func_27(3))
			{
				iLocal_50 = 9;
			}
			else
			{
				unk_0x01A8D0EC6B7E5C0B(unk_0x93E99A2DBCBA9CFA(), 1.49f);
				unk_0xF37CDE10F1FA02C3();
			}
			break;
	
		case 9:
			unk_0x01A8D0EC6B7E5C0B(unk_0x93E99A2DBCBA9CFA(), 1f);
			func_24("CHEAT_FAST_SWIM" /*Fast swim.*/);
			func_31(3, false);
			iLocal_50 = 1;
			break;
	
		default:
			break;
	}

	return;
}

void func_80() // Position - 0x23C9
{
	switch (iLocal_49)
	{
		case 1:
			break;
	
		case 4:
			func_16("CHEAT_FAST_RUN" /*Fast run.*/);
			func_31(2, true);
			iLocal_49 = 5;
			break;
	
		case 5:
			if (!unk_0x48DC6A21D1CAD89C(unk_0x93E99A2DBCBA9CFA()) || unk_0x66599E73DBA5A850(unk_0xC1A5EC5C986B98AD()) || func_27(23) || func_27(22) || func_27(2))
			{
				iLocal_49 = 9;
			}
			else
			{
				if (unk_0x5C50456CDB486BD0(unk_0xC1A5EC5C986B98AD()) || unk_0xFC42DF91E1950588(unk_0xC1A5EC5C986B98AD()) && !unk_0x5CD470B5BDDAC029(unk_0xC1A5EC5C986B98AD()))
					unk_0xF97D7D2F274D93C7(unk_0x93E99A2DBCBA9CFA(), 1.49f);
				else
					unk_0xF97D7D2F274D93C7(unk_0x93E99A2DBCBA9CFA(), 1f);
			
				unk_0xF37CDE10F1FA02C3();
			}
			break;
	
		case 9:
			unk_0xF97D7D2F274D93C7(unk_0x93E99A2DBCBA9CFA(), 1f);
			func_24("CHEAT_FAST_RUN" /*Fast run.*/);
			func_31(2, false);
			iLocal_49 = 1;
			break;
	
		default:
			break;
	}

	return;
}

void func_81() // Position - 0x24B2
{
	int num;

	switch (iLocal_48)
	{
		case 1:
			break;
	
		case 4:
			func_16("CHEAT_SLIDEY_CARS" /*Slidey cars.*/);
			func_31(1, true);
			iLocal_48 = 5;
			break;
	
		case 5:
			if (!unk_0x48DC6A21D1CAD89C(unk_0x93E99A2DBCBA9CFA()) || func_27(23) || func_27(22) || func_27(1))
				iLocal_48 = 9;
		
			if (unk_0x3C3D6D026CF7F51B(unk_0xC1A5EC5C986B98AD(), 0))
			{
				num = unk_0x95DC39736F6748E3(unk_0xC1A5EC5C986B98AD(), 0);
			
				if (!unk_0x055111B11E6624FD(num, 0))
				{
					if (unk_0xA66E176E5772E965(num, -1, 0) == unk_0xC1A5EC5C986B98AD())
					{
						if (iLocal_69 == 0)
						{
							iLocal_69 = num;
						
							if (!unk_0x055111B11E6624FD(iLocal_69, 0))
								if (func_82(1))
									unk_0xD21D20E0D6202163(iLocal_69, 1);
								else
									iLocal_69 = 0;
						}
						else if (iLocal_69 != num)
						{
							if (!unk_0x055111B11E6624FD(iLocal_69, 0))
								unk_0xD21D20E0D6202163(iLocal_69, 0);
						
							iLocal_69 = 0;
						}
					}
				}
			}
			break;
	
		case 9:
			func_24("CHEAT_SLIDEY_CARS" /*Slidey cars.*/);
			iLocal_48 = 10;
			break;
	
		case 10:
			if (!unk_0x055111B11E6624FD(iLocal_69, 0))
			{
				unk_0xD21D20E0D6202163(iLocal_69, 0);
				iLocal_69 = 0;
			}
		
			func_31(1, false);
			iLocal_48 = 1;
			break;
	
		default:
			break;
	}

	return;
}

BOOL func_82(int iParam0) // Position - 0x25D9
{
	var unk;
	int num;
	eCharacter character;
	var unk2;
	var unk3;

	if (!unk_0x66599E73DBA5A850(unk_0xC1A5EC5C986B98AD()))
	{
		unk = unk_0xE475C458F52F1781();
	
		if (unk_0x7DE17ACDD8BA2642(unk))
		{
			if (unk_0xFBD273FDBCF0C5BD(unk, 0))
			{
				num = unk_0x504B9BB48D41C264(unk);
				character = _GET_CURRENT_PLAYER_CHARACTER();
			
				if (iParam0 & 1 != 0)
					if (!unk_0xF66D3BDEBE2E64B9(num))
						return false;
			
				if (iParam0 & 2 != 0)
					if (!unk_0x6CEF99E452573979(num))
						return false;
			
				if (iParam0 & 4 != 0)
					if (!unk_0x2D92D1084D213DC4(num))
						return false;
			
				if (iParam0 & 8 != 0)
					if (!unk_0x6123E78FD4B274FB(num))
						return false;
			
				if (iParam0 & 16 != 0)
					if (unk_0xD854D152961C41A9(unk, "door_dside_r") != -1 || unk_0xD854D152961C41A9(unk, "door_pside_r") != -1)
						return false;
			
				if (iParam0 & 32 != 0)
					if (unk_0xD854D152961C41A9(unk, "door_dside_r") == -1 || unk_0xD854D152961C41A9(unk, "door_pside_r") == -1)
						return false;
			
				if (iParam0 & 64 != 0)
					if (unk_0x6CEF99E452573979(num))
						if (unk_0xD854D152961C41A9(unk, "seat_r") == -1)
							return false;
					else if (unk_0xD854D152961C41A9(unk, "seat_dside_r") != -1 || unk_0xD854D152961C41A9(unk, "seat_pside_r") != -1)
						return false;
			
				if (iParam0 & 128 != 0)
					if (unk_0xD854D152961C41A9(unk, "seat_dside_r") == -1 || unk_0xD854D152961C41A9(unk, "seat_pside_r") == -1)
						return false;
			
				if (iParam0 & 256 != 0)
				{
					if (!func_10(character))
						return false;
				
					if (func_85(character, 0) != num)
						return false;
				}
			
				if (iParam0 & 512 != 0)
				{
					if (!unk_0xF66D3BDEBE2E64B9(num) && !unk_0x6CEF99E452573979(num))
						return false;
				
					if (unk_0xCC4A4E244DA78599(unk))
						return false;
				
					unk3 = unk_0x3AE80C6F6AA5BDE9(unk, &unk2);
				
					if (!unk_0x2AC37494BBF1DB16(unk3))
						if (unk_0x14580F20CBCE4FA9(unk3) == unk_0x14580F20CBCE4FA9("taxiService"))
							return false;
				
					if (func_83(unk, character, false))
						return false;
				}
			
				return true;
			}
		}
	}

	return false;
}

BOOL func_83(var uParam0, eCharacter echParam1, BOOL bParam2) // Position - 0x27DA
{
	int i;
	var unk;
	int num;

	if (!unk_0x7DE17ACDD8BA2642(uParam0) || !unk_0xFBD273FDBCF0C5BD(uParam0, 0))
		return false;

	for (i = 0; func_84(echParam1, i, &unk, &num); i = i + 1)
	{
		if (!bParam2 || IS_BIT_SET(Global_113648.f_7231[num], 0))
			if (unk_0x7B0F3D01B676C014(&unk, uParam0))
				return true;
	}

	return false;
}

BOOL func_84(eCharacter echParam0, int iParam1, char* sParam2, var uParam3) // Position - 0x2848
{
	TEXT_LABEL_ASSIGN_STRING(sParam2, "", 32);

	switch (echParam0)
	{
		case CHAR_MICHAEL:
			if (iParam1 == 0)
			{
				TEXT_LABEL_ASSIGN_STRING(sParam2, "Michael - Beverly Hills", 32);
				*uParam3 = 0;
				return true;
			}
			else if (iParam1 == 1)
			{
				TEXT_LABEL_ASSIGN_STRING(sParam2, "Trevor - Countryside", 32);
				*uParam3 = 1;
				return true;
			}
			break;
	
		case CHAR_FRANKLIN:
			if (iParam1 == 0)
			{
				TEXT_LABEL_ASSIGN_STRING(sParam2, "Franklin - Aunt", 32);
				*uParam3 = 5;
				return true;
			}
			else if (iParam1 == 1)
			{
				TEXT_LABEL_ASSIGN_STRING(sParam2, "Franklin - Hills", 32);
				*uParam3 = 6;
				return true;
			}
			break;
	
		case CHAR_TREVOR:
			if (iParam1 == 0)
			{
				TEXT_LABEL_ASSIGN_STRING(sParam2, "Trevor - Countryside", 32);
				*uParam3 = 2;
				return true;
			}
			else if (iParam1 == 1)
			{
				TEXT_LABEL_ASSIGN_STRING(sParam2, "Trevor - City", 32);
				*uParam3 = 3;
				return true;
			}
			else if (iParam1 == 2)
			{
				TEXT_LABEL_ASSIGN_STRING(sParam2, "Trevor - Stripclub", 32);
				*uParam3 = 4;
				return true;
			}
			break;
	}

	return false;
}

int func_85(eCharacter echParam0, int iParam1) // Position - 0x2920
{
	int num;

	if (func_10(echParam0))
	{
		num.f_11 = 12;
		num.f_31 = 49;
		num.f_81 = 2;
		func_86(echParam0, &num, iParam1);
		return num;
	}
	else
	{
		echParam0 != _CHAR_NULL;
	}

	return 0;
}

void func_86(eCharacter echParam0, var uParam1, int iParam2) // Position - 0x2962
{
	int num;

	uParam1->f_88 = 1;
	uParam1->f_84 = 255;
	uParam1->f_85 = 255;
	uParam1->f_86 = 255;
	uParam1->f_97 = 1;
	uParam1->f_3 = 1000;
	uParam1->f_1 = 0;

	switch (echParam0)
	{
		case CHAR_MICHAEL:
			num = joaat("tailgater");
		
			if (Global_113648.f_9087.f_99.f_58[128] && !Global_113648.f_9087.f_99.f_58[131])
				num = joaat("premier");
		
			switch (num)
			{
				case joaat("tailgater"):
					*uParam1 = num;
					uParam1->f_2 = 3f;
					uParam1->f_4 = 0;
					uParam1->f_9 = 1;
					uParam1->f_11[0] = 1;
					TEXT_LABEL_ASSIGN_STRING(&(uParam1->f_27), "5MDS003", 16);
					break;
			
				case joaat("premier"):
					*uParam1 = num;
					uParam1->f_2 = 14.9f;
					uParam1->f_5 = 43;
					uParam1->f_6 = 43;
					uParam1->f_7 = 0;
					uParam1->f_8 = 156;
					uParam1->f_9 = 0;
					TEXT_LABEL_ASSIGN_STRING(&(uParam1->f_27), "880HS955", 16);
					break;
			}
			break;
	
		case CHAR_TREVOR:
			num = joaat("bodhi2");
		
			switch (num)
			{
				case joaat("bodhi2"):
					*uParam1 = num;
					uParam1->f_2 = 14f;
					uParam1->f_5 = 32;
					uParam1->f_6 = 0;
					uParam1->f_7 = 0;
					uParam1->f_8 = 156;
					TEXT_LABEL_ASSIGN_STRING(&(uParam1->f_27), "BETTY 32", 16);
				
					if (Global_113648.f_9087.f_99.f_58[119])
						uParam1->f_11[1] = 1;
					break;
			}
			break;
	
		case CHAR_FRANKLIN:
			if (iParam2 == 1)
				num = joaat("buffalo2");
			else if (iParam2 == 2)
				num = joaat("bagger");
			else if (Global_113648.f_9087.f_99.f_58[118])
				num = joaat("bagger");
			else
				num = joaat("buffalo2");
		
			switch (num)
			{
				case joaat("bagger"):
					*uParam1 = num;
					uParam1->f_2 = 6f;
					uParam1->f_5 = 53;
					uParam1->f_6 = 0;
					uParam1->f_7 = 59;
					uParam1->f_8 = 156;
					TEXT_LABEL_ASSIGN_STRING(&(uParam1->f_27), "FC88", 16);
					break;
			
				case joaat("buffalo2"):
					*uParam1 = num;
					uParam1->f_2 = 0f;
					uParam1->f_5 = 111;
					uParam1->f_6 = 111;
					uParam1->f_7 = 0;
					uParam1->f_8 = 156;
					uParam1->f_10 = 1;
					TEXT_LABEL_ASSIGN_STRING(&(uParam1->f_27), "FC1988", 16);
					uParam1->f_11[0] = 1;
					uParam1->f_11[1] = 1;
					uParam1->f_11[2] = 1;
					uParam1->f_11[3] = 1;
					uParam1->f_11[4] = 1;
					uParam1->f_11[5] = 1;
					uParam1->f_11[6] = 1;
					uParam1->f_11[7] = 1;
					uParam1->f_11[8] = 1;
					break;
			}
			break;
	
		default:
			break;
	}

	return;
}

void func_87() // Position - 0x2BBE
{
	switch (iLocal_47)
	{
		case 1:
			break;
	
		case 4:
			func_16("CHEAT_SUPER_JUMP" /*Super jump.*/);
			func_31(0, true);
			iLocal_47 = 5;
			break;
	
		case 5:
			if (!unk_0x48DC6A21D1CAD89C(unk_0x93E99A2DBCBA9CFA()) || func_27(23) || func_27(22) || func_27(0) || unk_0xF4AED47DB65D91CE())
			{
				iLocal_47 = 9;
				return;
			}
		
			unk_0x8FA8BBD574AC45A9(unk_0x93E99A2DBCBA9CFA());
			unk_0x992BB708B4B7A005(unk_0xC1A5EC5C986B98AD(), 217, 1);
			break;
	
		case 9:
			func_24("CHEAT_SUPER_JUMP" /*Super jump.*/);
			func_31(0, false);
			iLocal_47 = 1;
			break;
	
		default:
			break;
	}

	return;
}

void func_88() // Position - 0x2C67
{
	if (func_111() || iLocal_94 != 0 || func_15(14))
		unk_0x8B438725D591ED78(2, 243, 1);

	func_110();

	if (unk_0x66599E73DBA5A850(unk_0xC1A5EC5C986B98AD()))
		return;

	if (unk_0xAF33F15F6E9C96D2(unk_0xC1A5EC5C986B98AD()))
		return;

	if (!unk_0x48DC6A21D1CAD89C(unk_0x93E99A2DBCBA9CFA()))
		return;

	if (!unk_0x1B82EF141CC65934(unk_0x93E99A2DBCBA9CFA()))
		return;

	if (func_34() || unk_0xB53553DC4AAC7D8A())
		return;

	if (func_109())
	{
		if (!bLocal_92)
		{
			func_108();
			bLocal_92 = true;
		}
	
		return;
	}

	bLocal_92 = false;
	bLocal_93 = false;

	if (func_107(988027572, 12) || unk_0x48C6BAEFB475AD01(joaat("buzzoff")) || func_106(20, joaat("buzzard")))
		func_103(joaat("buzzard"), "CHEAT_SPAWN_VEH1" /*Spawn Buzzard.*/);

	if (func_107(-1134279030, 11) || unk_0x48C6BAEFB475AD01(joaat("bandit")) || func_106(20, joaat("bmx")))
		func_103(joaat("bmx"), "CHEAT_SPAWN_VEH2" /*Spawn BMX.*/);

	if (func_107(971352167, 10) || unk_0x48C6BAEFB475AD01(joaat("holein1")) || func_106(20, joaat("caddy")))
		func_103(joaat("caddy"), "CHEAT_SPAWN_VEH3" /*Spawn Caddy.*/);

	if (func_107(-269863225, 10) || unk_0x48C6BAEFB475AD01(joaat("comet")) || func_106(20, joaat("comet2")))
		func_103(joaat("comet2"), "CHEAT_SPAWN_VEH4" /*Spawn Comet.*/);

	if (func_107(458579068, 12) || unk_0x48C6BAEFB475AD01(joaat("flyspray")) || func_106(20, joaat("duster")))
		func_103(joaat("duster"), "CHEAT_SPAWN_VEH5" /*Spawn Duster.*/);

	if (func_107(-666513193, 12) || unk_0x48C6BAEFB475AD01(joaat("rocket")) || func_106(20, joaat("pcj")))
		func_103(joaat("pcj"), "CHEAT_SPAWN_VEH6" /*Spawn PCJ.*/);

	if (func_107(-1245984749, 10) || unk_0x48C6BAEFB475AD01(joaat("rapidgt")) || func_106(20, joaat("rapidgt")))
		func_103(joaat("rapidgt"), "CHEAT_SPAWN_VEH7" /*Spawn Rapid GT.*/);

	if (func_107(2076774618, 12) || unk_0x48C6BAEFB475AD01(joaat("offroad")) || func_106(20, joaat("sanchez")))
		func_103(joaat("sanchez"), "CHEAT_SPAWN_VEH8" /*Spawn Sanchez.*/);

	if (func_107(855685457, 9) || unk_0x48C6BAEFB475AD01(joaat("vinewood")) || func_106(20, joaat("stretch")))
		func_103(joaat("stretch"), "CHEAT_SPAWN_VEH9" /*Spawn Stretch Limo.*/);

	if (func_107(-591395876, 12) || unk_0x48C6BAEFB475AD01(joaat("barnstorm")) || func_106(20, joaat("stunt")))
		func_103(joaat("stunt"), "CHEAT_SPAWN_VEH10" /*Spawn Stunt Plane.*/);

	if (func_107(-1399217582, 10) || unk_0x48C6BAEFB475AD01(joaat("trashed")) || func_106(20, joaat("trash")))
		func_103(joaat("trash"), "CHEAT_SPAWN_VEH11" /*Spawn Trashmaster.*/);

	if (_IS_EXCLUSIVE_CONTENT_UNLOCKED())
	{
		if (func_107(-375917581, 10) || unk_0x48C6BAEFB475AD01(joaat("extinct")) || func_106(20, joaat("dodo")))
			func_103(joaat("dodo"), "CHEAT_SPAWN_VEH12" /*Spawn Dodo Sea Plane.*/);
	
		if (func_107(-2124307881, 10) || unk_0x48C6BAEFB475AD01(joaat("deathcar")) || func_106(20, joaat("dukes2")))
			func_103(joaat("dukes2"), "CHEAT_SPAWN_VEH13" /*Spawn Duke O'Death.*/);
	
		if (func_107(1028964594, 9) || unk_0x48C6BAEFB475AD01(joaat("bubbles")) || func_106(20, joaat("submersible2")))
			func_103(joaat("submersible2"), "CHEAT_SPAWN_VEH14" /*Spawn Kraken submersible.*/);
	}

	if (func_107(-393416581, 11) || unk_0x48C6BAEFB475AD01(joaat("hoptoit")) || func_106(0, 0))
		func_101();

	if (func_107(-296509791, 8) || unk_0x48C6BAEFB475AD01(joaat("snowday")) || func_106(1, 0))
		func_100();

	if (func_107(1120820643, 7) || unk_0x48C6BAEFB475AD01(joaat("catchme")) || func_106(2, 0))
		func_99();

	if (func_107(-421458016, 9) || unk_0x48C6BAEFB475AD01(joaat("gotgills")) || func_106(3, 0))
		func_98();

	if (func_107(372390926, 12) || unk_0x48C6BAEFB475AD01(joaat("toolup")) || func_106(4, 0))
		iLocal_51 = 4;

	if (func_107(606506837, 8) || unk_0x48C6BAEFB475AD01(joaat("makeitrain")) || func_106(5, 0))
		iLocal_52 = 4;

	if (func_107(453014206, 12) || unk_0x48C6BAEFB475AD01(joaat("turtle")) || func_106(6, 0))
		iLocal_53 = 4;

	if (func_107(1773187142, 9) || unk_0x48C6BAEFB475AD01(joaat("powerup")) || func_106(7, 0))
		iLocal_54 = 4;

	if (func_107(1173296014, 10) || unk_0x48C6BAEFB475AD01(joaat("fugitive")) || func_106(8, 0))
		iLocal_55 = 4;

	if (func_107(-381269753, 10) || unk_0x48C6BAEFB475AD01(joaat("lawyerup")) || func_106(9, 0))
		iLocal_56 = 4;

	if (func_107(-2023988698, 11) || unk_0x48C6BAEFB475AD01(joaat("skydive")) || func_106(10, 0))
		iLocal_57 = 4;

	if (func_107(-835863906, 12) || unk_0x48C6BAEFB475AD01(joaat("highex")) || func_106(11, 0))
		func_97();

	if (func_107(1958387485, 12) || unk_0x48C6BAEFB475AD01(joaat("incendiary")) || func_106(12, 0))
		func_96();

	if (func_107(-903985180, 9) || unk_0x48C6BAEFB475AD01(joaat("hothands")) || func_106(13, 0))
		func_95();

	if (func_107(2087642905, 9) || unk_0x48C6BAEFB475AD01(joaat("floater")) || func_106(14, 0))
		func_94();

	if (func_107(1257820019, 10) || unk_0x48C6BAEFB475AD01(joaat("painkiller")) || func_106(15, 0))
		func_93();

	if (func_107(1540206179, 7) || unk_0x48C6BAEFB475AD01(joaat("slowmo")) || func_106(16, 0))
		func_92();

	if (func_107(115565392, 16) || unk_0x48C6BAEFB475AD01(joaat("skyfall")) || func_106(17, 0))
		func_91();

	if (func_107(-1276513277, 8) || unk_0x48C6BAEFB475AD01(joaat("liquor")) || func_106(18, 0))
		func_90();

	if (func_107(2040433593, 9) || unk_0x48C6BAEFB475AD01(joaat("deadeye")) || func_106(19, 0))
		func_89();

	return;
}

void func_89() // Position - 0x33CB
{
	if (func_28())
	{
		func_21("CHEAT_MISSION_DENIED" /*Not available on a mission or pastime.*/);
		return;
	}

	if (func_70())
	{
		func_21("CHEAT_PHONE_DENIED" /*Can't activate cheats while using the cellphone.*/);
		return;
	}

	if (func_27(23) || func_27(21) || func_27(16))
	{
		func_21("CHEAT_NOT_NOW" /*Can't activate that cheat right now.*/);
		return;
	}

	if (iLocal_63 != 1)
		func_21("CHEAT_NOT_NOW" /*Can't activate that cheat right now.*/);
	else
		iLocal_66 = 4;

	return;
}

void func_90() // Position - 0x3437
{
	if (func_28())
	{
		func_21("CHEAT_MISSION_DENIED" /*Not available on a mission or pastime.*/);
		iLocal_65 = 1;
		return;
	}

	if (func_70())
	{
		func_21("CHEAT_PHONE_DENIED" /*Can't activate cheats while using the cellphone.*/);
		iLocal_65 = 1;
		return;
	}

	if (func_27(23) || func_27(21) || func_27(18))
	{
		func_21("CHEAT_NOT_NOW" /*Can't activate that cheat right now.*/);
		iLocal_65 = 1;
		return;
	}

	if (iLocal_65 == 1)
		iLocal_65 = 4;
	else if (iLocal_65 == 5)
		iLocal_65 = 9;

	return;
}

void func_91() // Position - 0x34AE
{
	if (func_28())
	{
		func_21("CHEAT_MISSION_DENIED" /*Not available on a mission or pastime.*/);
		return;
	}

	if (func_70())
	{
		func_21("CHEAT_PHONE_DENIED" /*Can't activate cheats while using the cellphone.*/);
		return;
	}

	if (unk_0xF4AED47DB65D91CE())
	{
		func_21("CHEAT_NOT_HERE" /*Can't activate that cheat here.*/);
		return;
	}

	if (iLocal_64 != 1)
	{
		func_21("CHEAT_ALREADY_ACTIVE" /*Cheat already active.*/);
		return;
	}

	if (func_27(23) || func_27(21) || func_27(17) || func_66(0) || unk_0x3C3D6D026CF7F51B(unk_0xC1A5EC5C986B98AD(), 0) || !unk_0xE7D67251D717D594())
	{
		func_21("CHEAT_NOT_NOW" /*Can't activate that cheat right now.*/);
		return;
	}

	if (unk_0x66599E73DBA5A850(unk_0xC1A5EC5C986B98AD()) || unk_0xF41A4983A3778F18(unk_0x93E99A2DBCBA9CFA(), 0) || unk_0x24B651D85CCE5EB4(joaat("respawn_controller")) > 0)
	{
		func_21("CHEAT_NOT_NOW" /*Can't activate that cheat right now.*/);
		return;
	}

	iLocal_64 = 2;
	return;
}

void func_92() // Position - 0x3587
{
	if (func_28())
	{
		func_21("CHEAT_MISSION_DENIED" /*Not available on a mission or pastime.*/);
		return;
	}

	if (func_70())
	{
		func_21("CHEAT_PHONE_DENIED" /*Can't activate cheats while using the cellphone.*/);
		return;
	}

	if (func_27(23) || func_27(21) || func_27(16))
	{
		func_21("CHEAT_NOT_NOW" /*Can't activate that cheat right now.*/);
		return;
	}

	if (iLocal_66 != 1)
		func_21("CHEAT_NOT_NOW" /*Can't activate that cheat right now.*/);
	else
		iLocal_63 = 4;

	return;
}

void func_93() // Position - 0x35F3
{
	var unk;

	unk = { _GET_PLAYER_COORDS(unk_0x93E99A2DBCBA9CFA()) };

	if (func_28())
	{
		func_21("CHEAT_MISSION_DENIED" /*Not available on a mission or pastime.*/);
		return;
	}

	if (func_70())
	{
		func_21("CHEAT_PHONE_DENIED" /*Can't activate cheats while using the cellphone.*/);
		return;
	}

	if (func_27(23) || func_27(21) || func_27(15) || unk.f_2 <= -170f)
	{
		func_21("CHEAT_NOT_NOW" /*Can't activate that cheat right now.*/);
		return;
	}

	if (iLocal_62 == 1)
		iLocal_62 = 4;
	else if (iLocal_62 == 5)
		iLocal_62 = 9;

	return;
}

void func_94() // Position - 0x367D
{
	if (func_28())
	{
		func_21("CHEAT_MISSION_DENIED" /*Not available on a mission or pastime.*/);
		return;
	}

	if (func_70())
	{
		func_21("CHEAT_PHONE_DENIED" /*Can't activate cheats while using the cellphone.*/);
		return;
	}

	if (func_27(23) || func_27(21) || func_27(14) || func_66(17) || unk_0x1589BC95A4C50F21(unk_0xC1A5EC5C986B98AD()))
	{
		func_21("CHEAT_NOT_NOW" /*Can't activate that cheat right now.*/);
		return;
	}

	iLocal_61 = 4;
	return;
}

void func_95() // Position - 0x36F2
{
	if (func_28())
	{
		func_21("CHEAT_MISSION_DENIED" /*Not available on a mission or pastime.*/);
		iLocal_60 = 1;
		return;
	}

	if (func_70())
	{
		func_21("CHEAT_PHONE_DENIED" /*Can't activate cheats while using the cellphone.*/);
		iLocal_60 = 1;
		return;
	}

	if (func_27(23) || func_27(21) || func_27(13))
	{
		func_21("CHEAT_NOT_NOW" /*Can't activate that cheat right now.*/);
		iLocal_60 = 1;
		return;
	}

	if (iLocal_60 == 1)
		iLocal_60 = 4;
	else if (iLocal_60 == 5)
		iLocal_60 = 9;

	return;
}

void func_96() // Position - 0x3769
{
	if (func_28())
	{
		func_21("CHEAT_MISSION_DENIED" /*Not available on a mission or pastime.*/);
		iLocal_59 = 1;
		return;
	}

	if (func_70())
	{
		func_21("CHEAT_PHONE_DENIED" /*Can't activate cheats while using the cellphone.*/);
		iLocal_59 = 1;
		return;
	}

	if (func_27(23) || func_27(21) || func_27(12))
	{
		func_21("CHEAT_NOT_NOW" /*Can't activate that cheat right now.*/);
		iLocal_59 = 1;
		return;
	}

	if (iLocal_59 == 1)
		iLocal_59 = 4;
	else if (iLocal_59 == 5)
		iLocal_59 = 9;

	return;
}

void func_97() // Position - 0x37E0
{
	if (func_28())
	{
		func_21("CHEAT_MISSION_DENIED" /*Not available on a mission or pastime.*/);
		iLocal_58 = 1;
		return;
	}

	if (func_70())
	{
		func_21("CHEAT_PHONE_DENIED" /*Can't activate cheats while using the cellphone.*/);
		iLocal_58 = 1;
		return;
	}

	if (func_27(23) || func_27(21) || func_27(11))
	{
		func_21("CHEAT_NOT_NOW" /*Can't activate that cheat right now.*/);
		iLocal_58 = 1;
		return;
	}

	if (iLocal_58 == 1)
		iLocal_58 = 4;
	else if (iLocal_58 == 5)
		iLocal_58 = 9;

	return;
}

void func_98() // Position - 0x3857
{
	if (func_27(23) || func_27(22) || func_27(3) || func_15(9) || func_15(10))
	{
		func_21("CHEAT_NOT_NOW" /*Can't activate that cheat right now.*/);
		return;
	}

	if (func_70())
	{
		func_21("CHEAT_PHONE_DENIED" /*Can't activate cheats while using the cellphone.*/);
		return;
	}

	if (iLocal_50 == 1)
		iLocal_50 = 4;
	else if (iLocal_50 == 5)
		iLocal_50 = 9;

	return;
}

void func_99() // Position - 0x38CA
{
	if (func_27(23) || func_27(22) || func_27(2) || func_15(9) || func_15(10))
	{
		func_21("CHEAT_NOT_NOW" /*Can't activate that cheat right now.*/);
		return;
	}

	if (func_70())
	{
		func_21("CHEAT_PHONE_DENIED" /*Can't activate cheats while using the cellphone.*/);
		return;
	}

	if (iLocal_49 == 1)
		iLocal_49 = 4;
	else if (iLocal_49 == 5)
		iLocal_49 = 9;

	return;
}

void func_100() // Position - 0x393D
{
	if (func_27(23) || func_27(22) || func_27(1))
	{
		func_21("CHEAT_NOT_NOW" /*Can't activate that cheat right now.*/);
		return;
	}

	if (func_70())
	{
		func_21("CHEAT_PHONE_DENIED" /*Can't activate cheats while using the cellphone.*/);
		return;
	}

	if (iLocal_48 == 1)
		iLocal_48 = 4;
	else if (iLocal_48 == 5)
		iLocal_48 = 9;

	return;
}

void func_101() // Position - 0x3998
{
	if (func_27(23) || func_27(22) || func_27(0) || unk_0xF4AED47DB65D91CE())
	{
		func_21("CHEAT_NOT_NOW" /*Can't activate that cheat right now.*/);
		return;
	}

	if (func_70())
	{
		func_21("CHEAT_PHONE_DENIED" /*Can't activate cheats while using the cellphone.*/);
		return;
	}

	if (iLocal_47 == 1)
		iLocal_47 = 4;
	else if (iLocal_47 == 5)
		iLocal_47 = 9;

	return;
}

BOOL _IS_EXCLUSIVE_CONTENT_UNLOCKED() // Position - 0x39FD
{
	var unk;

	if (Global_152523 == 2)
		return true;
	else if (Global_152523 == 3)
		return false;

	if (unk_0x7FFBE14C34D75E19())
	{
		if (unk_0x8BD41D5945F5762B())
		{
			if (unk_0x001B3EAD68D731CE())
			{
				unk_0xDD7756E2742E0F6D(joaat("SP_UNLOCK_EXCLUS_CONTENT"), &unk, -1);
				unk_0xECDAB41968FF21A8(&unk, 2);
				unk_0xECDAB41968FF21A8(&unk, 4);
				unk_0xECDAB41968FF21A8(&unk, 6);
				unk_0xECDAB41968FF21A8(&Global_25, 2);
				unk_0xECDAB41968FF21A8(&Global_25, 4);
				unk_0xECDAB41968FF21A8(&Global_25, 6);
				unk_0x3CC35ACFFC9C730E(joaat("SP_UNLOCK_EXCLUS_CONTENT"), unk, 1);
			
				if (unk_0x7D33DF1E1089E1D1())
				{
					unk = unk_0x516080EA609481E1(866);
					unk_0xECDAB41968FF21A8(&unk, 0);
					unk_0x705949B096008718(unk);
				}
			
				return true;
			}
		}
	}

	if (unk_0x7D33DF1E1089E1D1())
		if (IS_BIT_SET(unk_0x516080EA609481E1(866), 0))
			return true;

	return false;
}

void func_103(int iParam0, char* sParam1) // Position - 0x3AB5
{
	if (iLocal_46 == 1)
	{
		if (func_15(9) || unk_0x24B651D85CCE5EB4(joaat("barry1")) > 0 || unk_0x24B651D85CCE5EB4(joaat("tennis")) > 0 || func_27(23) || func_27(22) || func_27(20))
		{
			func_21("CHEAT_NOT_NOW" /*Can't activate that cheat right now.*/);
			return;
		}
	
		if (func_70())
		{
			func_21("CHEAT_PHONE_DENIED" /*Can't activate cheats while using the cellphone.*/);
			return;
		}
	
		if (!func_104(iParam0))
		{
			func_21("CHEAT_VEHICLE_LOCKED_DENIED" /*Vehicle is not unlocked yet.*/);
			return;
		}
	
		iLocal_67 = iParam0;
		sLocal_70 = sParam1;
		iLocal_46 = 2;
	}

	return;
}

BOOL func_104(int iParam0) // Position - 0x3B4F
{
	switch (iParam0)
	{
		case joaat("dodo"):
			if (func_105(66, 0) == false)
				return false;
			break;
	
		case joaat("dukes2"):
			if (func_105(64, 0) == false)
				return false;
			break;
	
		case joaat("submersible2"):
			if (func_105(63, 0) == false)
				return false;
			break;
	}

	return true;
}

BOOL func_105(int iParam0, int iParam1) // Position - 0x3BA7
{
	if (iParam0 == -1)
		return false;

	return IS_BIT_SET(Global_113648.f_32751[iParam0], iParam1);
}

BOOL func_106(int iParam0, int iParam1) // Position - 0x3BC7
{
	if (IS_BIT_SET(Global_32415, iParam0))
	{
		if (iParam1 != 0)
		{
			if (iParam1 == Global_32416)
			{
				unk_0x061B1200C95204CB(&Global_32415, iParam0);
				bLocal_93 = true;
				return true;
			}
			else
			{
				return false;
			}
		}
		else
		{
			unk_0x061B1200C95204CB(&Global_32415, iParam0);
			bLocal_93 = true;
			return true;
		}
	}

	return false;
}

int func_107(int iParam0, int iParam1) // Position - 0x3C11
{
	if (!func_15(14))
		return unk_0xDF636A50C5A6CB12(iParam0, iParam1);

	return 0;
}

void func_108() // Position - 0x3C2F
{
	int i;

	for (i = 0; i < 10; i = i + 1)
	{
		if (uLocal_80[i] != -1)
		{
			unk_0x341B37C2C5AA5999(uLocal_80[i]);
			uLocal_80[i] = -1;
		}
	}

	return;
}

BOOL func_109() // Position - 0x3C65
{
	if (Global_100681 == 13 || Global_100681 == 10 || Global_100681 == 11 || Global_100681 == 12)
		return false;

	return true;
}

void func_110() // Position - 0x3CA3
{
	if (func_15(14) || !unk_0x35DF833D93BCC488() && iLocal_94 != 0)
		iLocal_94 = unk_0xA5E11AF0A2B928C1();

	if (iLocal_94 != 0)
		if (!func_15(14))
			if (unk_0xA5E11AF0A2B928C1() - iLocal_94 > 1000)
				iLocal_94 = 0;

	return;
}

BOOL func_111() // Position - 0x3CEE
{
	if (Global_78819)
		return true;
	else if (Global_63356 && !Global_63362)
		return true;

	return false;
}

void func_112() // Position - 0x3D18
{
	int i;

	for (i = 0; i < 10; i = i + 1)
	{
		uLocal_80[i] = -1;
	}

	bLocal_92 = false;
	iLocal_91 = 0;
	return;
}

void func_113() // Position - 0x3D40
{
	unk_0x6FE665CCE8AFAA7E(0);

	if (iLocal_64 == 5)
		func_37();

	if (iLocal_65 == 5)
		func_46(true);

	if (iLocal_63 == 5 || iLocal_66 == 5)
		unk_0x6F5281F7042DC893(1f);

	if (!unk_0x66599E73DBA5A850(unk_0xC1A5EC5C986B98AD()))
	{
		if (iLocal_62 == 5)
		{
			unk_0xA7225B88CE344621(unk_0x93E99A2DBCBA9CFA(), 0);
			unk_0x03879CC8EF9E3635(unk_0xC1A5EC5C986B98AD(), 0, 0, 0, 0, 0, 0, 0, 0);
		}
	
		unk_0xF97D7D2F274D93C7(unk_0x93E99A2DBCBA9CFA(), 1f);
		unk_0x01A8D0EC6B7E5C0B(unk_0x93E99A2DBCBA9CFA(), 1f);
	}

	unk_0x641CC0A1C6A3270D(0);
	Global_32413 = 0;
	Global_32412 = 0;
	Global_32414 = 0;
	Global_32415 = 0;
	Global_32417 = 0;
	Global_32416 = 0;
	unk_0x675D9C12C73D3DE7();
	return;
}

