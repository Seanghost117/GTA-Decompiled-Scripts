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
	int iLocal_21 = 0;
	float fLocal_22 = 0f;
	var uLocal_23 = 0;
	var uLocal_24 = 0;
	var uLocal_25 = 0;
	float fLocal_26 = 0f;
	float fLocal_27 = 0f;
	var uLocal_28 = 0;
	var uLocal_29 = 0;
	float fLocal_30 = 0f;
	float fLocal_31 = 0f;
	float fLocal_32 = 0f;
	var uLocal_33 = 0;
	var uLocal_34 = 0;
	var uLocal_35 = 0;
	var uLocal_36 = 0;
	var uLocal_37 = 0;
	var uLocal_38 = 0;
	var uLocal_39 = 0;
	int iLocal_40 = 0;
	int iLocal_41 = 0;
	int iLocal_42 = 0;
	int iLocal_43 = 0;
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
	int iLocal_54 = 0;
	int iLocal_55 = 0;
	int iLocal_56 = 0;
	int iLocal_57 = 0;
	int iLocal_58 = 0;
	var uLocal_59 = 0;
	var uLocal_60 = 0;
	var uLocal_61 = 0;
	int iLocal_62 = 0;
	int iLocal_63 = 0;
	float fLocal_64 = 0f;
	int iLocal_65 = 0;
	int iLocal_66 = 0;
	int iLocal_67 = 0;
	var uLocal_68 = 0;
	var uLocal_69 = 0;
	var uLocal_70 = 0;
	BOOL bLocal_71 = 0;
	int iLocal_72 = 0;
	BOOL bLocal_73 = 0;
#endregion

void main() // Position - 0x0
{
	int num;

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
	iLocal_21 = 3;
	fLocal_22 = 0f;
	fLocal_26 = -0.0375f;
	fLocal_27 = 0.17f;
	fLocal_30 = 80f;
	fLocal_31 = 140f;
	fLocal_32 = 180f;
	iLocal_40 = 1;
	iLocal_41 = 65;
	iLocal_42 = 49;
	iLocal_43 = 64;
	iLocal_62 = 1000;
	iLocal_63 = 3333;
	fLocal_64 = 0f;
	bLocal_71 = true;
	unk_0x389D5B1C24A046B5();

	if (unk_0x55EEDBBFDC6E810F(32))
		unk_0x675D9C12C73D3DE7();

	iLocal_57 = unk_0xA5E11AF0A2B928C1();
	iLocal_66 = 0;
	func_179(iLocal_67);
	func_178();
	func_176(&Global_4542597);
	func_175(&Global_4542597, 1);
	func_173(&uLocal_68);

	while (true)
	{
		if (Global_32414 != iLocal_66)
		{
			if (iLocal_66 == 0 && Global_32414 != 0)
				if (unk_0x674D69D3896862C7() || func_172())
					_DISPLAY_HELP_TEXT("CHEAT_TROPHIE" /*Cheats have been activated. Trophies will not be awarded for the duration of this session.*/, -1);
				else
					_DISPLAY_HELP_TEXT("CHEAT_ACHIEVE" /*Cheats have been activated. Achievements will not be awarded for the duration of this session.*/, -1);
		
			iLocal_66 != 0 && Global_32414 == 0;
		}
	
		iLocal_66 = Global_32414;
	
		if (!func_170(14))
		{
			if (!unk_0x73651E4B1D91FE32(24))
				func_161();
		
			if (!unk_0x73651E4B1D91FE32(25))
				func_159();
		
			if (Global_32173)
			{
				if (!unk_0x73651E4B1D91FE32(12))
				{
					num = func_144(true);
				
					if (num > 0)
					{
						func_143(12, num);
						unk_0x3CC35ACFFC9C730E(joaat("NUM_GOLD_MEDALS_OBTAINED"), num, 1);
					}
				
					if (num >= 70)
						func_137(12, 1);
				}
			
				Global_32173 = false;
			}
		
			if (unk_0x7DE17ACDD8BA2642(unk_0xC1A5EC5C986B98AD()))
			{
				if (!unk_0x055111B11E6624FD(unk_0xC1A5EC5C986B98AD(), 0))
				{
					iLocal_67 = iLocal_67 + 1;
				
					if (unk_0xA5E11AF0A2B928C1() > iLocal_57)
					{
						func_126(false);
						iLocal_57 = unk_0xA5E11AF0A2B928C1() + iLocal_62;
					}
				
					if (unk_0xA5E11AF0A2B928C1() > iLocal_58)
					{
						if (!unk_0x73651E4B1D91FE32(14) || iLocal_65 == 1)
							if (func_125(53))
								func_124();
					
						iLocal_58 = unk_0xA5E11AF0A2B928C1() + iLocal_63;
					}
				}
			}
		
			func_116(&Global_4542597);
			func_1();
		}
		else
		{
			func_116(&Global_4542597);
			func_1();
		}
	
		SYSTEM::WAIT(0);
	}

	return;
}

void func_1() // Position - 0x20A
{
	BOOL flag;
	int num;

	if (!func_115(&Global_4542597))
		return;

	if (!Global_78558)
	{
		if (bLocal_73)
			bLocal_73 = false;
	
		return;
	}

	if (!func_112())
		return;

	if (bLocal_71)
	{
		if (!func_110(3, -1))
			return;
	
		if (!func_110(5, -1))
			return;
	}

	if (bLocal_73)
		return;

	flag = unk_0xAF010EE6091E0F6C(&num);
	num == -1 && iLocal_72 == 0;

	if (flag && num == 0)
	{
		func_109();
		bLocal_73 = true;
	}
	else
	{
		func_2();
	}

	return;
}

void func_2() // Position - 0x29A
{
	int num;

	if (!unk_0x73651E4B1D91FE32(33))
		if (func_106())
			func_137(33, 1);

	if (!unk_0x73651E4B1D91FE32(29))
	{
		if (func_102(&uLocal_68) > 5f)
		{
			func_17(unk_0xC1A5EC5C986B98AD());
			func_173(&uLocal_68);
		}
	}

	num = func_15(func_16(-1), 0);

	if (num >= 100)
		if (!unk_0x73651E4B1D91FE32(36))
			func_137(36, 1);

	if (num >= 50)
		if (!unk_0x73651E4B1D91FE32(35))
			func_137(35, 1);

	if (num >= 25)
		if (!unk_0x73651E4B1D91FE32(34))
			func_137(34, 1);

	if (!unk_0x73651E4B1D91FE32(37))
		func_13(false);

	if (!unk_0x73651E4B1D91FE32(38))
		if (func_12(joaat("MPPLY_TOTAL_CUSTOM_RACES_WON")) >= 5)
			func_137(38, 1);

	if (!unk_0x73651E4B1D91FE32(39))
		if (func_11(48, -1) >= 10)
			func_137(39, 1);

	if (!unk_0x73651E4B1D91FE32(40))
		if (func_11(52, -1) > 0)
			func_137(40, 1);

	if (!unk_0x73651E4B1D91FE32(41))
		if (IS_BIT_SET(Global_2793044.f_2320.f_18, 1))
			func_137(41, 1);

	if (!unk_0x73651E4B1D91FE32(43))
		if (_MPCHAR_STAT_GET_INT(MP_STAT_CHAR_FM_PLAT_AWARD_COUNT, -1, 0) >= 30)
			func_137(43, 1);

	if (!unk_0x73651E4B1D91FE32(44))
		if (func_11(14, -1) >= 20)
			func_137(44, 1);

	if (!unk_0x73651E4B1D91FE32(45))
		func_8(false);

	if (!unk_0x73651E4B1D91FE32(48))
		if (func_7(11, -1))
			func_137(48, 1);

	if (!unk_0x73651E4B1D91FE32(49))
		func_3(false);

	return;
}

int func_3(BOOL bParam0) // Position - 0x439
{
	if (!func_112())
		return 0;

	if (!Global_78558)
		return 0;

	if (unk_0x73651E4B1D91FE32(49))
		return 0;

	bParam0 == true;

	if (!func_4(100, -1))
	{
		bParam0 == true;
		return 0;
	}

	if (!func_4(102, -1))
	{
		bParam0 == true;
		return 0;
	}

	if (!func_4(101, -1))
	{
		bParam0 == true;
		return 0;
	}

	func_137(49, 1);
	return 1;
}

BOOL func_4(int iParam0, int iParam1) // Position - 0x4B4
{
	var unk;
	BOOL num;

	unk = Global_2848280[iParam0 /*3*/][func_5(iParam1)];

	if (unk_0x494B367FE0CBD765(unk, &num, -1))
		return num;

	return false;
}

int func_5(int iParam0) // Position - 0x4E0
{
	int num;
	int num2;

	num = iParam0;

	if (num == -1)
	{
		num2 = func_6();
	
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

int func_6() // Position - 0x514
{
	return Global_1574918;
}

BOOL func_7(int iParam0, int iParam1) // Position - 0x520
{
	if (iParam1 == -1)
		iParam1 = func_6();

	return unk_0xD03506C6E58E4E95(iParam0, iParam1);
}

int func_8(BOOL bParam0) // Position - 0x53C
{
	int i;
	int num;
	int num2;

	if (!func_112())
		return 0;

	if (unk_0x73651E4B1D91FE32(45))
		return 0;

	if (!Global_78558)
		return 0;

	num2 = _MPCHAR_STAT_GET_INT(MP_STAT_CHAR_ACH45_TRACKER, -1, 0);

	for (i = 0; i < 9; i = i + 1)
	{
		if (func_9(num2, i, bParam0))
			num = num + 1;
	}

	if (num == 9)
	{
		func_137(45, 1);
		return 1;
	}

	return 0;
}

BOOL func_9(int iParam0, int iParam1, BOOL bParam2) // Position - 0x5AE
{
	BOOL flag;

	flag = IS_BIT_SET(iParam0, iParam1);

	if (!bParam2)
		return flag;

	switch (iParam1)
	{
		case 0:
			return flag;
	
		case 1:
			return flag;
	
		case 2:
			return flag;
	
		case 3:
			return flag;
	
		case 4:
			return flag;
	
		case 5:
			return flag;
	
		case 6:
			return flag;
	
		case 7:
			return flag;
	
		case 8:
			return flag;
	
		default:
		
	}

	return false;
}

int _MPCHAR_STAT_GET_INT(eMPStat empsParam0, int iParam1, int iParam2) // Position - 0x633
{
	var unk;
	int num;

	if (empsParam0 != 14192)
	{
		iParam2 == 0;
		unk = Global_2805027[empsParam0 /*3*/][func_5(iParam1)];
	
		if (unk_0xDD7756E2742E0F6D(unk, &num, -1))
			return num;
	}

	return 0;
}

int func_11(int iParam0, int iParam1) // Position - 0x670
{
	var unk;
	int num;

	unk = Global_2850192[iParam0 /*3*/][func_5(iParam1)];

	if (unk_0xDD7756E2742E0F6D(unk, &num, -1))
		return num;

	return 0;
}

int func_12(int iParam0) // Position - 0x69C
{
	int num;
	int num2;

	num = iParam0;

	if (unk_0xDD7756E2742E0F6D(num, &num2, -1))
		return num2;

	return 0;
}

int func_13(BOOL bParam0) // Position - 0x6BA
{
	int num;

	if (unk_0x73651E4B1D91FE32(37))
		return 0;

	if (!func_112())
		return 0;

	if (!Global_78558)
		return 0;

	if (bParam0)
	{
		num = func_11(21, -1);
		num = num - func_11(58, -1);
		num = num - func_11(57, -1);
	}

	if (func_14(8, -1))
	{
		func_137(37, 1);
		return 1;
	}

	return 0;
}

BOOL func_14(int iParam0, int iParam1) // Position - 0x724
{
	var unk;
	BOOL num;

	unk = Global_2850649[iParam0 /*3*/][func_5(iParam1)];

	if (unk_0x494B367FE0CBD765(unk, &num, -1))
		return num;

	return false;
}

int func_15(var uParam0, int iParam1) // Position - 0x750
{
	int i;
	int value;
	int value2;
	int num;
	float value3;

	iParam1 == 0;
	value = 8000;
	value2 = 0;
	num = (value - value2) / 2;

	for (i = 0; i <= 100; i = i + 1)
	{
		if (value == value2)
		{
			i = 8000;
		
			if (num == 0)
				num = 1;
		
			return num;
		}
	
		if (Global_297010[num] == uParam0)
		{
			value = num;
			value2 = num;
		}
		else if (Global_297010[num] < uParam0)
		{
			if (value2 == num)
				value2 = value2 + 1;
			else
				value2 = num;
		}
		else if (value == num)
		{
			value = value - 1;
		}
		else
		{
			value = num;
		}
	
		value3 = ((SYSTEM::TO_FLOAT(value) - SYSTEM::TO_FLOAT(value2)) / 2f) + SYSTEM::TO_FLOAT(value2);
		num = SYSTEM::ROUND(value3);
	}

	return 8000;
}

var func_16(int iParam0) // Position - 0x80F
{
	return Global_1665638[func_5(iParam0)];
}

void func_17(var uParam0) // Position - 0x823
{
	int i;
	int num;

	num = 44;
	num.f_221 = 51;

	if (unk_0x73651E4B1D91FE32(29))
		return;

	func_98(uParam0, &num);
	i = 0;

	for (i = 0; i < num; i = i + 1)
	{
		if (func_18(uParam0, num[i /*5*/]))
		{
			func_137(29, 1);
			return;
		}
	}

	i = 0;

	for (i = 0; i < num.f_221; i = i + 1)
	{
		if (func_18(uParam0, num.f_221[i /*5*/]))
		{
			func_137(29, 1);
			return;
		}
	}

	return;
}

BOOL func_18(var uParam0, int iParam1) // Position - 0x8B2
{
	var unk;
	int num;
	int num2;
	int num3;
	int num4;
	int num5;
	int i;
	var unk40;

	if (iParam1 == -61829581)
		return false;

	if (iParam1 == joaat("WEAPON_KNUCKLE"))
		return false;

	if (unk_0x66599E73DBA5A850(uParam0))
		return false;

	if (!unk_0xED31EFCAA05B93ED(uParam0, iParam1, 0))
		return false;

	num = func_97(iParam1, &unk);

	if (iParam1 != joaat("WEAPON_PISTOL") && iParam1 != joaat("WEAPON_APPISTOL") && iParam1 != joaat("WEAPON_COMBATPISTOL") && iParam1 != joaat("WEAPON_MICROSMG") && iParam1 != joaat("WEAPON_SMG") && iParam1 != joaat("WEAPON_PUMPSHOTGUN") && iParam1 != joaat("WEAPON_ASSAULTSHOTGUN") && iParam1 != joaat("WEAPON_SAWNOFFSHOTGUN") && iParam1 != joaat("WEAPON_ASSAULTRIFLE") && iParam1 != joaat("WEAPON_CARBINERIFLE") && iParam1 != joaat("WEAPON_ADVANCEDRIFLE") && iParam1 != joaat("WEAPON_SNIPERRIFLE") && iParam1 != joaat("WEAPON_HEAVYSNIPER") && iParam1 != joaat("WEAPON_MG") && iParam1 != joaat("WEAPON_COMBATMG") && iParam1 != joaat("WEAPON_GRENADELAUNCHER") && iParam1 != joaat("WEAPON_ASSAULTMG") && iParam1 != joaat("WEAPON_ASSAULTSMG") && iParam1 != joaat("WEAPON_ASSAULTSNIPER") && iParam1 != joaat("WEAPON_BULLPUPSHOTGUN") && iParam1 != joaat("WEAPON_PISTOL50") && num == -1 || unk_0x99844FCFECAC01A5(num) < 3)
		return false;

	num2 = 0;
	num3 = 0;
	num4 = 0;
	num5 = 0;

	for (i = 0; func_21(&unk40, iParam1, i, false); i = i + 1)
	{
		if (unk40.f_4 == joaat("WAPClip"))
			num3 = num3 + 1;
	
		if (unk40.f_4 == joaat("WAPScop"))
			num2 = num2 + 1;
	
		if (func_19(uParam0, iParam1, unk40))
		{
			if (unk40.f_4 == joaat("WAPClip"))
				num5 = unk40.f_6;
			else if (unk40.f_4 == joaat("WAPScop"))
				num4 = unk40.f_6;
		}
		else if (unk40.f_4 == joaat("WAPClip") || unk40.f_4 == joaat("WAPScop") || unk40.f_4 == joaat("WAPRail") || unk40.f_4 == joaat("gun_root") || unk40.f_4 == joaat("Gun_GripR"))
		{
		}
		else
		{
			return false;
		}
	}

	if (num2 > num4)
		return false;

	if (num3 > num5)
		return false;

	if (unk_0x7E1297C446B85BE1(iParam1) > 0 && unk_0x60B2BAFA7F1A9CDF(uParam0, iParam1) == 0)
		return false;

	return true;
}

BOOL func_19(var uParam0, int iParam1, var uParam2) // Position - 0xB32
{
	if (_DOES_ENTITY_EXIST_AND_IS_ALIVE(uParam0))
		return unk_0x1A7C88BD7ADA98BE(uParam0, iParam1, uParam2);

	return false;
}

BOOL _DOES_ENTITY_EXIST_AND_IS_ALIVE(var uParam0) // Position - 0xB51
{
	if (unk_0x7DE17ACDD8BA2642(uParam0))
		if (!unk_0x055111B11E6624FD(uParam0, 0))
			return true;

	return false;
}

BOOL func_21(var uParam0, int iParam1, int iParam2, BOOL bParam3) // Position - 0xB72
{
	int num;
	int num2;
	int num3;
	int num4;
	int num5;
	int num6;
	int num7;
	int num8;
	int num9;
	int num10;
	int num11;
	int num12;
	int num13;
	int num14;
	int num15;
	int i;
	int num16;
	var unk38;
	int num17;

	num = 37;
	func_96(uParam0, 0, 989182658, 0, 0);

	switch (iParam1)
	{
		case joaat("WEAPON_PISTOL"):
			if (func_95(iLocal_55))
			{
				if (!func_92(joaat("COMPONENT_GUNRUN_MK2_UPGRADE"), joaat("WEAPON_PISTOL"), -1))
				{
					switch (iParam2)
					{
						case 0:
							func_96(uParam0, joaat("COMPONENT_GUNRUN_MK2_UPGRADE"), joaat("Gun_GripR"), 1, 0);
							break;
					
						case 1:
							func_96(uParam0, joaat("COMPONENT_PISTOL_CLIP_01"), joaat("WAPClip"), 1, 1);
							break;
					
						case 2:
							func_96(uParam0, joaat("COMPONENT_PISTOL_CLIP_02"), joaat("WAPClip"), 2, 0);
							break;
					
						case 3:
							func_96(uParam0, joaat("COMPONENT_AT_PI_FLSH"), joaat("WAPFlshLasr"), 1, 0);
							break;
					
						case 4:
							func_96(uParam0, joaat("COMPONENT_AT_PI_SUPP_02"), joaat("WAPSupp"), 1, 0);
							break;
					
						case 5:
							func_96(uParam0, joaat("COMPONENT_PISTOL_VARMOD_LUXE"), joaat("gun_root"), 1, 0);
							break;
					}
				}
				else
				{
					switch (iParam2)
					{
						case 0:
							func_96(uParam0, joaat("COMPONENT_PISTOL_CLIP_01"), joaat("WAPClip"), 1, 1);
							break;
					
						case 1:
							func_96(uParam0, joaat("COMPONENT_PISTOL_CLIP_02"), joaat("WAPClip"), 2, 0);
							break;
					
						case 2:
							func_96(uParam0, joaat("COMPONENT_AT_PI_FLSH"), joaat("WAPFlshLasr"), 1, 0);
							break;
					
						case 3:
							func_96(uParam0, joaat("COMPONENT_AT_PI_SUPP_02"), joaat("WAPSupp"), 1, 0);
							break;
					
						case 4:
							func_96(uParam0, joaat("COMPONENT_GUNRUN_MK2_UPGRADE"), joaat("Gun_GripR"), 1, 0);
							break;
					}
				}
			}
			else
			{
				switch (iParam2)
				{
					case 0:
						func_96(uParam0, joaat("COMPONENT_PISTOL_CLIP_01"), joaat("WAPClip"), 1, 1);
						break;
				
					case 1:
						func_96(uParam0, joaat("COMPONENT_PISTOL_CLIP_02"), joaat("WAPClip"), 2, 0);
						break;
				
					case 2:
						func_96(uParam0, joaat("COMPONENT_AT_PI_FLSH"), joaat("WAPFlshLasr"), 1, 0);
						break;
				
					case 3:
						func_96(uParam0, joaat("COMPONENT_AT_PI_SUPP_02"), joaat("WAPSupp"), 1, 0);
						break;
				
					case 4:
						func_96(uParam0, joaat("COMPONENT_PISTOL_VARMOD_LUXE"), joaat("gun_root"), 1, 0);
						break;
				}
			}
			break;
	
		case joaat("WEAPON_COMBATPISTOL"):
			switch (iParam2)
			{
				case 0:
					func_96(uParam0, joaat("COMPONENT_COMBATPISTOL_CLIP_01"), joaat("WAPClip"), 1, 1);
					break;
			
				case 1:
					func_96(uParam0, joaat("COMPONENT_COMBATPISTOL_CLIP_02"), joaat("WAPClip"), 2, 0);
					break;
			
				case 2:
					func_96(uParam0, joaat("COMPONENT_AT_PI_FLSH"), joaat("WAPFlshLasr"), 1, 0);
					break;
			
				case 3:
					func_96(uParam0, joaat("COMPONENT_AT_PI_SUPP"), joaat("WAPSupp"), 1, 0);
					break;
			
				case 4:
					func_96(uParam0, joaat("COMPONENT_COMBATPISTOL_VARMOD_LOWRIDER"), joaat("gun_root"), 1, 0);
					break;
			}
			break;
	
		case joaat("WEAPON_APPISTOL"):
			if (unk_0xA26A9A07F761D8F8())
			{
				switch (iParam2)
				{
					case 0:
						func_96(uParam0, joaat("COMPONENT_APPISTOL_CLIP_01"), joaat("WAPClip"), 1, 1);
						break;
				
					case 1:
						func_96(uParam0, joaat("COMPONENT_APPISTOL_CLIP_02"), joaat("WAPClip"), 2, 0);
						break;
				
					case 2:
						func_96(uParam0, joaat("COMPONENT_AT_PI_FLSH"), joaat("WAPFlshLasr"), 1, 0);
						break;
				
					case 3:
						func_96(uParam0, joaat("COMPONENT_AT_PI_SUPP"), joaat("WAPSupp"), 1, 0);
						break;
				
					case 4:
						func_96(uParam0, joaat("COMPONENT_APPISTOL_VARMOD_LUXE"), joaat("gun_root"), 1, 0);
						break;
				
					case 5:
						func_96(uParam0, joaat("COMPONENT_APPISTOL_VARMOD_SECURITY"), joaat("gun_root"), 2, 0);
						break;
				}
			}
			else
			{
				switch (iParam2)
				{
					case 0:
						func_96(uParam0, joaat("COMPONENT_APPISTOL_CLIP_01"), joaat("WAPClip"), 1, 1);
						break;
				
					case 1:
						func_96(uParam0, joaat("COMPONENT_APPISTOL_CLIP_02"), joaat("WAPClip"), 2, 0);
						break;
				
					case 2:
						func_96(uParam0, joaat("COMPONENT_AT_PI_FLSH"), joaat("WAPFlshLasr"), 1, 0);
						break;
				
					case 3:
						func_96(uParam0, joaat("COMPONENT_AT_PI_SUPP"), joaat("WAPSupp"), 1, 0);
						break;
				
					case 4:
						func_96(uParam0, joaat("COMPONENT_APPISTOL_VARMOD_LUXE"), joaat("gun_root"), 1, 0);
						break;
				}
			}
			break;
	
		case joaat("WEAPON_MICROSMG"):
			if (unk_0xA26A9A07F761D8F8())
			{
				switch (iParam2)
				{
					case 0:
						func_96(uParam0, joaat("COMPONENT_MICROSMG_CLIP_01"), joaat("WAPClip"), 1, 1);
						break;
				
					case 1:
						func_96(uParam0, joaat("COMPONENT_MICROSMG_CLIP_02"), joaat("WAPClip"), 2, 0);
						break;
				
					case 2:
						func_96(uParam0, joaat("COMPONENT_AT_PI_FLSH"), joaat("WAPFlshLasr"), 1, 0);
						break;
				
					case 3:
						func_96(uParam0, joaat("COMPONENT_AT_SCOPE_MACRO"), joaat("WAPScop"), 1, 0);
						break;
				
					case 4:
						func_96(uParam0, joaat("COMPONENT_AT_AR_SUPP_02"), joaat("WAPSupp"), 1, 0);
						break;
				
					case 5:
						func_96(uParam0, joaat("COMPONENT_MICROSMG_VARMOD_LUXE"), joaat("gun_root"), 1, 0);
						break;
				
					case 6:
						func_96(uParam0, joaat("COMPONENT_MICROSMG_VARMOD_SECURITY"), joaat("gun_root"), 2, 0);
						break;
				
					case 7:
						func_96(uParam0, -1566778158, joaat("gun_root"), 3, 0);
						break;
				}
			
				if (*uParam0 == -1566778158 && !(func_7(36788, -1) || func_82(-1566778158, joaat("WEAPON_MICROSMG"), -1)))
					return false;
			}
			else
			{
				switch (iParam2)
				{
					case 0:
						func_96(uParam0, joaat("COMPONENT_MICROSMG_CLIP_01"), joaat("WAPClip"), 1, 1);
						break;
				
					case 1:
						func_96(uParam0, joaat("COMPONENT_MICROSMG_CLIP_02"), joaat("WAPClip"), 2, 0);
						break;
				
					case 2:
						func_96(uParam0, joaat("COMPONENT_AT_PI_FLSH"), joaat("WAPFlshLasr"), 1, 0);
						break;
				
					case 3:
						func_96(uParam0, joaat("COMPONENT_AT_SCOPE_MACRO"), joaat("WAPScop"), 1, 0);
						break;
				
					case 4:
						func_96(uParam0, joaat("COMPONENT_AT_AR_SUPP_02"), joaat("WAPSupp"), 1, 0);
						break;
				
					case 5:
						func_96(uParam0, joaat("COMPONENT_MICROSMG_VARMOD_LUXE"), joaat("gun_root"), 1, 0);
						break;
				}
			}
			break;
	
		case joaat("WEAPON_SMG"):
			if (func_95(iLocal_55))
			{
				if (!func_92(joaat("COMPONENT_GUNRUN_MK2_UPGRADE"), joaat("WEAPON_SMG"), -1))
				{
					switch (iParam2)
					{
						case 0:
							func_96(uParam0, joaat("COMPONENT_GUNRUN_MK2_UPGRADE"), joaat("Gun_GripR"), 1, 0);
							break;
					
						case 1:
							func_96(uParam0, joaat("COMPONENT_SMG_CLIP_01"), joaat("WAPClip"), 1, 1);
							break;
					
						case 2:
							func_96(uParam0, joaat("COMPONENT_SMG_CLIP_02"), joaat("WAPClip"), 2, 0);
							break;
					
						case 3:
							func_96(uParam0, joaat("COMPONENT_SMG_CLIP_03"), joaat("WAPClip"), 3, 0);
							break;
					
						case 4:
							func_96(uParam0, joaat("COMPONENT_AT_AR_FLSH"), joaat("WAPFlshLasr"), 1, 0);
							break;
					
						case 5:
							func_96(uParam0, joaat("COMPONENT_AT_SCOPE_MACRO_02"), joaat("WAPScop"), 1, 0);
							break;
					
						case 6:
							func_96(uParam0, joaat("COMPONENT_AT_PI_SUPP"), joaat("WAPSupp"), 1, 0);
							break;
					
						case 7:
							func_96(uParam0, joaat("COMPONENT_SMG_VARMOD_LUXE"), joaat("gun_root"), 1, 0);
							break;
					}
				}
				else
				{
					switch (iParam2)
					{
						case 0:
							func_96(uParam0, joaat("COMPONENT_SMG_CLIP_01"), joaat("WAPClip"), 1, 1);
							break;
					
						case 1:
							func_96(uParam0, joaat("COMPONENT_SMG_CLIP_02"), joaat("WAPClip"), 2, 0);
							break;
					
						case 2:
							func_96(uParam0, joaat("COMPONENT_SMG_CLIP_03"), joaat("WAPClip"), 3, 0);
							break;
					
						case 3:
							func_96(uParam0, joaat("COMPONENT_AT_AR_FLSH"), joaat("WAPFlshLasr"), 1, 0);
							break;
					
						case 4:
							func_96(uParam0, joaat("COMPONENT_AT_SCOPE_MACRO_02"), joaat("WAPScop"), 1, 0);
							break;
					
						case 5:
							func_96(uParam0, joaat("COMPONENT_AT_PI_SUPP"), joaat("WAPSupp"), 1, 0);
							break;
					
						case 6:
							func_96(uParam0, joaat("COMPONENT_GUNRUN_MK2_UPGRADE"), joaat("Gun_GripR"), 1, 0);
							break;
					}
				}
			}
			else
			{
				switch (iParam2)
				{
					case 0:
						func_96(uParam0, joaat("COMPONENT_SMG_CLIP_01"), joaat("WAPClip"), 1, 1);
						break;
				
					case 1:
						func_96(uParam0, joaat("COMPONENT_SMG_CLIP_02"), joaat("WAPClip"), 2, 0);
						break;
				
					case 2:
						func_96(uParam0, joaat("COMPONENT_SMG_CLIP_03"), joaat("WAPClip"), 3, 0);
						break;
				
					case 3:
						func_96(uParam0, joaat("COMPONENT_AT_AR_FLSH"), joaat("WAPFlshLasr"), 1, 0);
						break;
				
					case 4:
						func_96(uParam0, joaat("COMPONENT_AT_SCOPE_MACRO_02"), joaat("WAPScop"), 1, 0);
						break;
				
					case 5:
						func_96(uParam0, joaat("COMPONENT_AT_PI_SUPP"), joaat("WAPSupp"), 1, 0);
						break;
				
					case 6:
						func_96(uParam0, joaat("COMPONENT_SMG_VARMOD_LUXE"), joaat("gun_root"), 1, 0);
						break;
				}
			}
			break;
	
		case joaat("WEAPON_ASSAULTRIFLE"):
			if (func_95(iLocal_55))
			{
				if (!func_92(joaat("COMPONENT_GUNRUN_MK2_UPGRADE"), joaat("WEAPON_ASSAULTRIFLE"), -1))
				{
					switch (iParam2)
					{
						case 0:
							func_96(uParam0, joaat("COMPONENT_GUNRUN_MK2_UPGRADE"), joaat("Gun_GripR"), 1, 0);
							break;
					
						case 1:
							func_96(uParam0, joaat("COMPONENT_ASSAULTRIFLE_CLIP_01"), joaat("WAPClip"), 1, 1);
							break;
					
						case 2:
							func_96(uParam0, joaat("COMPONENT_ASSAULTRIFLE_CLIP_02"), joaat("WAPClip"), 2, 0);
							break;
					
						case 3:
							func_96(uParam0, joaat("COMPONENT_ASSAULTRIFLE_CLIP_03"), joaat("WAPClip"), 3, 0);
							break;
					
						case 4:
							func_96(uParam0, joaat("COMPONENT_AT_AR_AFGRIP"), joaat("WAPGrip"), 1, 0);
							break;
					
						case 5:
							func_96(uParam0, joaat("COMPONENT_AT_AR_FLSH"), joaat("WAPFlshLasr"), 1, 0);
							break;
					
						case 6:
							func_96(uParam0, joaat("COMPONENT_AT_SCOPE_MACRO"), joaat("WAPScop"), 1, 0);
							break;
					
						case 7:
							func_96(uParam0, joaat("COMPONENT_AT_AR_SUPP_02"), joaat("WAPSupp"), 1, 0);
							break;
					
						case 8:
							func_96(uParam0, joaat("COMPONENT_ASSAULTRIFLE_VARMOD_LUXE"), joaat("gun_root"), 1, 0);
							break;
					}
				}
				else
				{
					switch (iParam2)
					{
						case 0:
							func_96(uParam0, joaat("COMPONENT_ASSAULTRIFLE_CLIP_01"), joaat("WAPClip"), 1, 1);
							break;
					
						case 1:
							func_96(uParam0, joaat("COMPONENT_ASSAULTRIFLE_CLIP_02"), joaat("WAPClip"), 2, 0);
							break;
					
						case 2:
							func_96(uParam0, joaat("COMPONENT_ASSAULTRIFLE_CLIP_03"), joaat("WAPClip"), 3, 0);
							break;
					
						case 3:
							func_96(uParam0, joaat("COMPONENT_AT_AR_AFGRIP"), joaat("WAPGrip"), 1, 0);
							break;
					
						case 4:
							func_96(uParam0, joaat("COMPONENT_AT_AR_FLSH"), joaat("WAPFlshLasr"), 1, 0);
							break;
					
						case 5:
							func_96(uParam0, joaat("COMPONENT_AT_SCOPE_MACRO"), joaat("WAPScop"), 1, 0);
							break;
					
						case 6:
							func_96(uParam0, joaat("COMPONENT_AT_AR_SUPP_02"), joaat("WAPSupp"), 1, 0);
							break;
					
						case 7:
							func_96(uParam0, joaat("COMPONENT_GUNRUN_MK2_UPGRADE"), joaat("Gun_GripR"), 1, 0);
							break;
					}
				}
			}
			else
			{
				switch (iParam2)
				{
					case 0:
						func_96(uParam0, joaat("COMPONENT_ASSAULTRIFLE_CLIP_01"), joaat("WAPClip"), 1, 1);
						break;
				
					case 1:
						func_96(uParam0, joaat("COMPONENT_ASSAULTRIFLE_CLIP_02"), joaat("WAPClip"), 2, 0);
						break;
				
					case 2:
						func_96(uParam0, joaat("COMPONENT_ASSAULTRIFLE_CLIP_03"), joaat("WAPClip"), 3, 0);
						break;
				
					case 3:
						func_96(uParam0, joaat("COMPONENT_AT_AR_AFGRIP"), joaat("WAPGrip"), 1, 0);
						break;
				
					case 4:
						func_96(uParam0, joaat("COMPONENT_AT_AR_FLSH"), joaat("WAPFlshLasr"), 1, 0);
						break;
				
					case 5:
						func_96(uParam0, joaat("COMPONENT_AT_SCOPE_MACRO"), joaat("WAPScop"), 1, 0);
						break;
				
					case 6:
						func_96(uParam0, joaat("COMPONENT_AT_AR_SUPP_02"), joaat("WAPSupp"), 1, 0);
						break;
				
					case 7:
						func_96(uParam0, joaat("COMPONENT_ASSAULTRIFLE_VARMOD_LUXE"), joaat("gun_root"), 1, 0);
						break;
				}
			}
			break;
	
		case joaat("WEAPON_CARBINERIFLE"):
			if (func_95(iLocal_55))
			{
				if (!func_92(joaat("COMPONENT_GUNRUN_MK2_UPGRADE"), joaat("WEAPON_CARBINERIFLE"), -1))
				{
					switch (iParam2)
					{
						case 0:
							func_96(uParam0, joaat("COMPONENT_GUNRUN_MK2_UPGRADE"), joaat("Gun_GripR"), 1, 0);
							break;
					
						case 1:
							func_96(uParam0, joaat("COMPONENT_CARBINERIFLE_CLIP_01"), joaat("WAPClip"), 1, 1);
							break;
					
						case 2:
							func_96(uParam0, joaat("COMPONENT_CARBINERIFLE_CLIP_02"), joaat("WAPClip"), 2, 0);
							break;
					
						case 3:
							func_96(uParam0, joaat("COMPONENT_CARBINERIFLE_CLIP_03"), joaat("WAPClip"), 3, 0);
							break;
					
						case 4:
							func_96(uParam0, joaat("COMPONENT_AT_AR_AFGRIP"), joaat("WAPGrip"), 1, 0);
							break;
					
						case 5:
							func_96(uParam0, joaat("COMPONENT_AT_AR_FLSH"), joaat("WAPFlshLasr"), 1, 0);
							break;
					
						case 6:
							func_96(uParam0, joaat("COMPONENT_AT_SCOPE_MEDIUM"), joaat("WAPScop"), 1, 0);
							break;
					
						case 7:
							func_96(uParam0, joaat("COMPONENT_AT_AR_SUPP"), joaat("WAPSupp"), 1, 0);
							break;
					
						case 8:
							func_96(uParam0, joaat("COMPONENT_CARBINERIFLE_VARMOD_LUXE"), joaat("gun_root"), 1, 0);
							break;
					}
				}
				else
				{
					switch (iParam2)
					{
						case 0:
							func_96(uParam0, joaat("COMPONENT_CARBINERIFLE_CLIP_01"), joaat("WAPClip"), 1, 1);
							break;
					
						case 1:
							func_96(uParam0, joaat("COMPONENT_CARBINERIFLE_CLIP_02"), joaat("WAPClip"), 2, 0);
							break;
					
						case 2:
							func_96(uParam0, joaat("COMPONENT_CARBINERIFLE_CLIP_03"), joaat("WAPClip"), 3, 0);
							break;
					
						case 3:
							func_96(uParam0, joaat("COMPONENT_AT_AR_AFGRIP"), joaat("WAPGrip"), 1, 0);
							break;
					
						case 4:
							func_96(uParam0, joaat("COMPONENT_AT_AR_FLSH"), joaat("WAPFlshLasr"), 1, 0);
							break;
					
						case 5:
							func_96(uParam0, joaat("COMPONENT_AT_SCOPE_MEDIUM"), joaat("WAPScop"), 1, 0);
							break;
					
						case 6:
							func_96(uParam0, joaat("COMPONENT_AT_AR_SUPP"), joaat("WAPSupp"), 1, 0);
							break;
					
						case 7:
							func_96(uParam0, joaat("COMPONENT_GUNRUN_MK2_UPGRADE"), joaat("Gun_GripR"), 1, 0);
							break;
					}
				}
			}
			else
			{
				switch (iParam2)
				{
					case 0:
						func_96(uParam0, joaat("COMPONENT_CARBINERIFLE_CLIP_01"), joaat("WAPClip"), 1, 1);
						break;
				
					case 1:
						func_96(uParam0, joaat("COMPONENT_CARBINERIFLE_CLIP_02"), joaat("WAPClip"), 2, 0);
						break;
				
					case 2:
						func_96(uParam0, joaat("COMPONENT_CARBINERIFLE_CLIP_03"), joaat("WAPClip"), 3, 0);
						break;
				
					case 3:
						func_96(uParam0, joaat("COMPONENT_AT_AR_AFGRIP"), joaat("WAPGrip"), 1, 0);
						break;
				
					case 4:
						func_96(uParam0, joaat("COMPONENT_AT_AR_FLSH"), joaat("WAPFlshLasr"), 1, 0);
						break;
				
					case 5:
						func_96(uParam0, joaat("COMPONENT_AT_SCOPE_MEDIUM"), joaat("WAPScop"), 1, 0);
						break;
				
					case 6:
						func_96(uParam0, joaat("COMPONENT_AT_AR_SUPP"), joaat("WAPSupp"), 1, 0);
						break;
				
					case 7:
						func_96(uParam0, joaat("COMPONENT_CARBINERIFLE_VARMOD_LUXE"), joaat("gun_root"), 1, 0);
						break;
				}
			}
			break;
	
		case joaat("WEAPON_ADVANCEDRIFLE"):
			switch (iParam2)
			{
				case 0:
					func_96(uParam0, joaat("COMPONENT_ADVANCEDRIFLE_CLIP_01"), joaat("WAPClip"), 1, 1);
					break;
			
				case 1:
					func_96(uParam0, joaat("COMPONENT_ADVANCEDRIFLE_CLIP_02"), joaat("WAPClip"), 2, 0);
					break;
			
				case 2:
					func_96(uParam0, joaat("COMPONENT_AT_AR_FLSH"), joaat("WAPFlshLasr"), 1, 0);
					break;
			
				case 3:
					func_96(uParam0, joaat("COMPONENT_AT_SCOPE_SMALL"), joaat("WAPScop"), 1, 0);
					break;
			
				case 4:
					func_96(uParam0, joaat("COMPONENT_AT_AR_SUPP"), joaat("WAPSupp"), 1, 0);
					break;
			
				case 5:
					func_96(uParam0, joaat("COMPONENT_ADVANCEDRIFLE_VARMOD_LUXE"), joaat("gun_root"), 1, 0);
					break;
			}
			break;
	
		case joaat("WEAPON_MG"):
			switch (iParam2)
			{
				case 0:
					func_96(uParam0, joaat("COMPONENT_MG_CLIP_01"), joaat("WAPClip"), 1, 1);
					break;
			
				case 1:
					func_96(uParam0, joaat("COMPONENT_MG_CLIP_02"), joaat("WAPClip"), 2, 0);
					break;
			
				case 2:
					func_96(uParam0, joaat("COMPONENT_AT_SCOPE_SMALL_02"), joaat("WAPScop"), 1, 0);
					break;
			
				case 3:
					func_96(uParam0, joaat("COMPONENT_MG_VARMOD_LOWRIDER"), joaat("gun_root"), 1, 0);
					break;
			}
			break;
	
		case joaat("WEAPON_COMBATMG"):
			if (func_95(iLocal_55))
			{
				if (!func_92(joaat("COMPONENT_GUNRUN_MK2_UPGRADE"), joaat("WEAPON_COMBATMG"), -1))
				{
					switch (iParam2)
					{
						case 0:
							func_96(uParam0, joaat("COMPONENT_GUNRUN_MK2_UPGRADE"), joaat("Gun_GripR"), 1, 0);
							break;
					
						case 1:
							func_96(uParam0, joaat("COMPONENT_COMBATMG_CLIP_01"), joaat("WAPClip"), 1, 1);
							break;
					
						case 2:
							func_96(uParam0, joaat("COMPONENT_COMBATMG_CLIP_02"), joaat("WAPClip"), 2, 0);
							break;
					
						case 3:
							func_96(uParam0, joaat("COMPONENT_AT_AR_AFGRIP"), joaat("WAPGrip"), 1, 0);
							break;
					
						case 4:
							func_96(uParam0, joaat("COMPONENT_AT_SCOPE_MEDIUM"), joaat("WAPScop"), 1, 0);
							break;
					
						case 5:
							func_96(uParam0, joaat("COMPONENT_COMBATMG_VARMOD_LOWRIDER"), joaat("gun_root"), 1, 0);
							break;
					}
				}
				else
				{
					switch (iParam2)
					{
						case 0:
							func_96(uParam0, joaat("COMPONENT_COMBATMG_CLIP_01"), joaat("WAPClip"), 1, 1);
							break;
					
						case 1:
							func_96(uParam0, joaat("COMPONENT_COMBATMG_CLIP_02"), joaat("WAPClip"), 2, 0);
							break;
					
						case 2:
							func_96(uParam0, joaat("COMPONENT_AT_AR_AFGRIP"), joaat("WAPGrip"), 1, 0);
							break;
					
						case 3:
							func_96(uParam0, joaat("COMPONENT_AT_SCOPE_MEDIUM"), joaat("WAPScop"), 1, 0);
							break;
					
						case 4:
							func_96(uParam0, joaat("COMPONENT_GUNRUN_MK2_UPGRADE"), joaat("Gun_GripR"), 1, 0);
							break;
					}
				}
			}
			else
			{
				switch (iParam2)
				{
					case 0:
						func_96(uParam0, joaat("COMPONENT_COMBATMG_CLIP_01"), joaat("WAPClip"), 1, 1);
						break;
				
					case 1:
						func_96(uParam0, joaat("COMPONENT_COMBATMG_CLIP_02"), joaat("WAPClip"), 2, 0);
						break;
				
					case 2:
						func_96(uParam0, joaat("COMPONENT_AT_AR_AFGRIP"), joaat("WAPGrip"), 1, 0);
						break;
				
					case 3:
						func_96(uParam0, joaat("COMPONENT_AT_SCOPE_MEDIUM"), joaat("WAPScop"), 1, 0);
						break;
				
					case 4:
						func_96(uParam0, joaat("COMPONENT_COMBATMG_VARMOD_LOWRIDER"), joaat("gun_root"), 1, 0);
						break;
				}
			}
			break;
	
		case joaat("WEAPON_ASSAULTSHOTGUN"):
			switch (iParam2)
			{
				case 0:
					func_96(uParam0, joaat("COMPONENT_ASSAULTSHOTGUN_CLIP_01"), joaat("WAPClip"), 1, 1);
					break;
			
				case 1:
					func_96(uParam0, joaat("COMPONENT_ASSAULTSHOTGUN_CLIP_02"), joaat("WAPClip"), 2, 0);
					break;
			
				case 2:
					func_96(uParam0, joaat("COMPONENT_AT_AR_AFGRIP"), joaat("WAPGrip"), 1, 0);
					break;
			
				case 3:
					func_96(uParam0, joaat("COMPONENT_AT_AR_FLSH"), joaat("WAPFlshLasr"), 1, 0);
					break;
			
				case 4:
					func_96(uParam0, joaat("COMPONENT_AT_AR_SUPP"), joaat("WAPSupp"), 1, 0);
					break;
			}
			break;
	
		case joaat("WEAPON_SNIPERRIFLE"):
			switch (iParam2)
			{
				case 0:
					func_96(uParam0, joaat("COMPONENT_SNIPERRIFLE_CLIP_01"), joaat("WAPClip"), 1, 1);
					break;
			
				case 1:
					func_96(uParam0, joaat("COMPONENT_AT_AR_SUPP_02"), joaat("WAPSupp"), 1, 0);
					break;
			
				case 2:
					func_96(uParam0, joaat("COMPONENT_AT_SCOPE_LARGE"), joaat("WAPScop"), 1, 1);
					break;
			
				case 3:
					func_96(uParam0, joaat("COMPONENT_AT_SCOPE_MAX"), joaat("WAPScop"), 2, 0);
					break;
			
				case 4:
					func_96(uParam0, joaat("COMPONENT_SNIPERRIFLE_VARMOD_LUXE"), joaat("gun_root"), 1, 0);
					break;
			}
			break;
	
		case joaat("WEAPON_HEAVYSNIPER"):
			if (func_95(iLocal_55))
			{
				if (!func_92(joaat("COMPONENT_GUNRUN_MK2_UPGRADE"), joaat("WEAPON_HEAVYSNIPER"), -1))
				{
					switch (iParam2)
					{
						case 0:
							func_96(uParam0, joaat("COMPONENT_GUNRUN_MK2_UPGRADE"), joaat("Gun_GripR"), 1, 0);
							break;
					
						case 1:
							func_96(uParam0, joaat("COMPONENT_HEAVYSNIPER_CLIP_01"), joaat("WAPClip"), 1, 1);
							break;
					
						case 2:
							func_96(uParam0, joaat("COMPONENT_AT_SCOPE_LARGE"), joaat("WAPScop"), 1, 1);
							break;
					
						case 3:
							func_96(uParam0, joaat("COMPONENT_AT_SCOPE_MAX"), joaat("WAPScop"), 2, 0);
							break;
					}
				}
				else
				{
					switch (iParam2)
					{
						case 0:
							func_96(uParam0, joaat("COMPONENT_HEAVYSNIPER_CLIP_01"), joaat("WAPClip"), 1, 1);
							break;
					
						case 1:
							func_96(uParam0, joaat("COMPONENT_AT_SCOPE_LARGE"), joaat("WAPScop"), 1, 1);
							break;
					
						case 2:
							func_96(uParam0, joaat("COMPONENT_AT_SCOPE_MAX"), joaat("WAPScop"), 2, 0);
							break;
					
						case 3:
							func_96(uParam0, joaat("COMPONENT_GUNRUN_MK2_UPGRADE"), joaat("Gun_GripR"), 1, 0);
							break;
					}
				}
			}
			else
			{
				switch (iParam2)
				{
					case 0:
						func_96(uParam0, joaat("COMPONENT_HEAVYSNIPER_CLIP_01"), joaat("WAPClip"), 1, 1);
						break;
				
					case 1:
						func_96(uParam0, joaat("COMPONENT_AT_SCOPE_LARGE"), joaat("WAPScop"), 1, 1);
						break;
				
					case 2:
						func_96(uParam0, joaat("COMPONENT_AT_SCOPE_MAX"), joaat("WAPScop"), 2, 0);
						break;
				}
			}
			break;
	
		case joaat("WEAPON_GRENADELAUNCHER"):
			switch (iParam2)
			{
				case 0:
					func_96(uParam0, joaat("COMPONENT_AT_AR_AFGRIP"), joaat("WAPGrip"), 1, 0);
					break;
			
				case 1:
					func_96(uParam0, joaat("COMPONENT_AT_AR_FLSH"), joaat("WAPFlshLasr"), 1, 0);
					break;
			
				case 2:
					func_96(uParam0, joaat("COMPONENT_AT_SCOPE_SMALL"), joaat("WAPScop"), 1, 0);
					break;
			}
			break;
	
		case joaat("WEAPON_MINIGUN"):
			switch (iParam2)
			{
				case 0:
					func_96(uParam0, joaat("COMPONENT_MINIGUN_CLIP_01"), joaat("WAPClip"), 1, 1);
					break;
			}
			break;
	
		case joaat("WEAPON_ASSAULTSMG"):
			switch (iParam2)
			{
				case 0:
					func_96(uParam0, joaat("COMPONENT_ASSAULTSMG_CLIP_01"), joaat("WAPClip"), 1, 1);
					break;
			
				case 1:
					func_96(uParam0, joaat("COMPONENT_ASSAULTSMG_CLIP_02"), joaat("WAPClip"), 2, 0);
					break;
			
				case 2:
					func_96(uParam0, joaat("COMPONENT_AT_AR_FLSH"), joaat("WAPFlshLasr"), 1, 0);
					break;
			
				case 3:
					func_96(uParam0, joaat("COMPONENT_AT_SCOPE_MACRO"), joaat("WAPScop"), 1, 0);
					break;
			
				case 4:
					func_96(uParam0, joaat("COMPONENT_AT_AR_SUPP_02"), joaat("WAPSupp"), 1, 0);
					break;
			
				case 5:
					func_96(uParam0, joaat("COMPONENT_ASSAULTSMG_VARMOD_LOWRIDER"), joaat("gun_root"), 1, 0);
					break;
			}
			break;
	
		case joaat("WEAPON_BULLPUPSHOTGUN"):
			switch (iParam2)
			{
				case 0:
					func_96(uParam0, joaat("COMPONENT_AT_AR_AFGRIP"), joaat("WAPGrip"), 1, 0);
					break;
			
				case 1:
					func_96(uParam0, joaat("COMPONENT_AT_AR_FLSH"), joaat("WAPFlshLasr"), 1, 0);
					break;
			
				case 2:
					func_96(uParam0, joaat("COMPONENT_AT_AR_SUPP_02"), joaat("WAPSupp"), 1, 0);
					break;
			}
			break;
	
		case joaat("WEAPON_PISTOL50"):
			switch (iParam2)
			{
				case 0:
					func_96(uParam0, joaat("COMPONENT_PISTOL50_CLIP_01"), joaat("WAPClip"), 1, 1);
					break;
			
				case 1:
					func_96(uParam0, joaat("COMPONENT_PISTOL50_CLIP_02"), joaat("WAPClip"), 2, 0);
					break;
			
				case 2:
					func_96(uParam0, joaat("COMPONENT_AT_PI_FLSH"), joaat("WAPFlshLasr"), 1, 0);
					break;
			
				case 3:
					func_96(uParam0, joaat("COMPONENT_AT_AR_SUPP_02"), joaat("WAPSupp"), 1, 0);
					break;
			
				case 4:
					func_96(uParam0, joaat("COMPONENT_PISTOL50_VARMOD_LUXE"), joaat("gun_root"), 1, 0);
					break;
			}
			break;
	
		case joaat("WEAPON_SAWNOFFSHOTGUN"):
			switch (iParam2)
			{
				case 0:
					func_96(uParam0, joaat("COMPONENT_SAWNOFFSHOTGUN_VARMOD_LUXE"), joaat("gun_root"), 1, 0);
					break;
			}
			break;
	
		case joaat("WEAPON_ASSAULTRIFLE_MK2"):
			switch (iParam2)
			{
				case 0:
					func_96(uParam0, joaat("COMPONENT_ASSAULTRIFLE_MK2_CLIP_01"), joaat("WAPClip"), 1, 1);
					break;
			
				case 1:
					func_96(uParam0, joaat("COMPONENT_ASSAULTRIFLE_MK2_CLIP_02"), joaat("WAPClip"), 2, 0);
					break;
			
				case 2:
					func_96(uParam0, joaat("COMPONENT_ASSAULTRIFLE_MK2_CLIP_TRACER"), joaat("WAPClip"), 3, 0);
					break;
			
				case 3:
					func_96(uParam0, joaat("COMPONENT_ASSAULTRIFLE_MK2_CLIP_INCENDIARY"), joaat("WAPClip"), 4, 0);
					break;
			
				case 4:
					func_96(uParam0, joaat("COMPONENT_ASSAULTRIFLE_MK2_CLIP_ARMORPIERCING"), joaat("WAPClip"), 5, 0);
					break;
			
				case 5:
					func_96(uParam0, joaat("COMPONENT_ASSAULTRIFLE_MK2_CLIP_FMJ"), joaat("WAPClip"), 6, 0);
					break;
			
				case 6:
					func_96(uParam0, 0, joaat("WAPGrip"), 1, 1);
					break;
			
				case 7:
					func_96(uParam0, joaat("COMPONENT_AT_AR_AFGRIP_02"), joaat("WAPGrip"), 2, 0);
					break;
			
				case 8:
					func_96(uParam0, 0, joaat("WAPFlshLasr_2"), 1, 1);
					break;
			
				case 9:
					func_96(uParam0, joaat("COMPONENT_AT_AR_FLSH"), joaat("WAPFlshLasr_2"), 2, 0);
					break;
			
				case 10:
					func_96(uParam0, 0, joaat("WAPScop_2"), 1, 1);
					break;
			
				case 11:
					func_96(uParam0, joaat("COMPONENT_AT_SIGHTS"), joaat("WAPScop_2"), 2, 0);
					break;
			
				case 12:
					func_96(uParam0, joaat("COMPONENT_AT_SCOPE_MACRO_MK2"), joaat("WAPScop_2"), 3, 0);
					break;
			
				case 13:
					func_96(uParam0, joaat("COMPONENT_AT_SCOPE_MEDIUM_MK2"), joaat("WAPScop_2"), 4, 0);
					break;
			
				case 14:
					func_96(uParam0, 0, joaat("WAPSupp_2"), 1, 1);
					break;
			
				case 15:
					func_96(uParam0, joaat("COMPONENT_AT_AR_SUPP_02"), joaat("WAPSupp_2"), 2, 0);
					break;
			
				case 16:
					func_96(uParam0, joaat("COMPONENT_AT_MUZZLE_01"), joaat("WAPSupp_2"), 3, 0);
					break;
			
				case 17:
					func_96(uParam0, joaat("COMPONENT_AT_MUZZLE_02"), joaat("WAPSupp_2"), 4, 0);
					break;
			
				case 18:
					func_96(uParam0, joaat("COMPONENT_AT_MUZZLE_03"), joaat("WAPSupp_2"), 5, 0);
					break;
			
				case 19:
					func_96(uParam0, joaat("COMPONENT_AT_MUZZLE_04"), joaat("WAPSupp_2"), 6, 0);
					break;
			
				case 20:
					func_96(uParam0, joaat("COMPONENT_AT_MUZZLE_05"), joaat("WAPSupp_2"), 7, 0);
					break;
			
				case 21:
					func_96(uParam0, joaat("COMPONENT_AT_MUZZLE_06"), joaat("WAPSupp_2"), 8, 0);
					break;
			
				case 22:
					func_96(uParam0, joaat("COMPONENT_AT_MUZZLE_07"), joaat("WAPSupp_2"), 9, 0);
					break;
			
				case 23:
					func_96(uParam0, joaat("COMPONENT_AT_AR_BARREL_01"), joaat("WAPBarrel"), 1, 1);
					break;
			
				case 24:
					func_96(uParam0, joaat("COMPONENT_AT_AR_BARREL_02"), joaat("WAPBarrel"), 2, 0);
					break;
			
				case 25:
					func_96(uParam0, 0, joaat("gun_root"), 1, 1);
					break;
			
				case 26:
					func_96(uParam0, joaat("COMPONENT_ASSAULTRIFLE_MK2_CAMO"), joaat("gun_root"), 2, 0);
					break;
			
				case 27:
					func_96(uParam0, joaat("COMPONENT_ASSAULTRIFLE_MK2_CAMO_02"), joaat("gun_root"), 3, 0);
					break;
			
				case 28:
					func_96(uParam0, joaat("COMPONENT_ASSAULTRIFLE_MK2_CAMO_03"), joaat("gun_root"), 4, 0);
					break;
			
				case 29:
					func_96(uParam0, joaat("COMPONENT_ASSAULTRIFLE_MK2_CAMO_04"), joaat("gun_root"), 5, 0);
					break;
			
				case 30:
					func_96(uParam0, joaat("COMPONENT_ASSAULTRIFLE_MK2_CAMO_05"), joaat("gun_root"), 6, 0);
					break;
			
				case 31:
					func_96(uParam0, joaat("COMPONENT_ASSAULTRIFLE_MK2_CAMO_06"), joaat("gun_root"), 7, 0);
					break;
			
				case 32:
					func_96(uParam0, joaat("COMPONENT_ASSAULTRIFLE_MK2_CAMO_07"), joaat("gun_root"), 8, 0);
					break;
			
				case 33:
					func_96(uParam0, joaat("COMPONENT_ASSAULTRIFLE_MK2_CAMO_08"), joaat("gun_root"), 9, 0);
					break;
			
				case 34:
					func_96(uParam0, joaat("COMPONENT_ASSAULTRIFLE_MK2_CAMO_09"), joaat("gun_root"), 10, 0);
					break;
			
				case 35:
					func_96(uParam0, joaat("COMPONENT_ASSAULTRIFLE_MK2_CAMO_10"), joaat("gun_root"), 11, 0);
					break;
			
				case 36:
					func_96(uParam0, joaat("COMPONENT_ASSAULTRIFLE_MK2_CAMO_IND_01"), joaat("gun_root"), 12, 0);
					break;
			}
			break;
	
		case joaat("WEAPON_CARBINERIFLE_MK2"):
			switch (iParam2)
			{
				case 0:
					func_96(uParam0, joaat("COMPONENT_CARBINERIFLE_MK2_CLIP_01"), joaat("WAPClip"), 1, 1);
					break;
			
				case 1:
					func_96(uParam0, joaat("COMPONENT_CARBINERIFLE_MK2_CLIP_02"), joaat("WAPClip"), 2, 0);
					break;
			
				case 2:
					func_96(uParam0, joaat("COMPONENT_CARBINERIFLE_MK2_CLIP_TRACER"), joaat("WAPClip"), 3, 0);
					break;
			
				case 3:
					func_96(uParam0, joaat("COMPONENT_CARBINERIFLE_MK2_CLIP_INCENDIARY"), joaat("WAPClip"), 4, 0);
					break;
			
				case 4:
					func_96(uParam0, joaat("COMPONENT_CARBINERIFLE_MK2_CLIP_ARMORPIERCING"), joaat("WAPClip"), 5, 0);
					break;
			
				case 5:
					func_96(uParam0, joaat("COMPONENT_CARBINERIFLE_MK2_CLIP_FMJ"), joaat("WAPClip"), 6, 0);
					break;
			
				case 6:
					func_96(uParam0, 0, joaat("WAPGrip_2"), 1, 1);
					break;
			
				case 7:
					func_96(uParam0, joaat("COMPONENT_AT_AR_AFGRIP_02"), joaat("WAPGrip_2"), 2, 0);
					break;
			
				case 8:
					func_96(uParam0, 0, joaat("WAPFlshLasr"), 1, 1);
					break;
			
				case 9:
					func_96(uParam0, joaat("COMPONENT_AT_AR_FLSH"), joaat("WAPFlshLasr"), 2, 0);
					break;
			
				case 10:
					func_96(uParam0, 0, joaat("WAPScop"), 1, 1);
					break;
			
				case 11:
					func_96(uParam0, joaat("COMPONENT_AT_SIGHTS"), joaat("WAPScop"), 2, 0);
					break;
			
				case 12:
					func_96(uParam0, joaat("COMPONENT_AT_SCOPE_MACRO_MK2"), joaat("WAPScop"), 3, 0);
					break;
			
				case 13:
					func_96(uParam0, joaat("COMPONENT_AT_SCOPE_MEDIUM_MK2"), joaat("WAPScop"), 4, 0);
					break;
			
				case 14:
					func_96(uParam0, 0, joaat("WAPSupp_2"), 1, 1);
					break;
			
				case 15:
					func_96(uParam0, joaat("COMPONENT_AT_AR_SUPP"), joaat("WAPSupp_2"), 2, 0);
					break;
			
				case 16:
					func_96(uParam0, joaat("COMPONENT_AT_MUZZLE_01"), joaat("WAPSupp_2"), 3, 0);
					break;
			
				case 17:
					func_96(uParam0, joaat("COMPONENT_AT_MUZZLE_02"), joaat("WAPSupp_2"), 4, 0);
					break;
			
				case 18:
					func_96(uParam0, joaat("COMPONENT_AT_MUZZLE_03"), joaat("WAPSupp_2"), 5, 0);
					break;
			
				case 19:
					func_96(uParam0, joaat("COMPONENT_AT_MUZZLE_04"), joaat("WAPSupp_2"), 6, 0);
					break;
			
				case 20:
					func_96(uParam0, joaat("COMPONENT_AT_MUZZLE_05"), joaat("WAPSupp_2"), 7, 0);
					break;
			
				case 21:
					func_96(uParam0, joaat("COMPONENT_AT_MUZZLE_06"), joaat("WAPSupp_2"), 8, 0);
					break;
			
				case 22:
					func_96(uParam0, joaat("COMPONENT_AT_MUZZLE_07"), joaat("WAPSupp_2"), 9, 0);
					break;
			
				case 23:
					func_96(uParam0, joaat("COMPONENT_AT_CR_BARREL_01"), joaat("WAPBarrel"), 1, 1);
					break;
			
				case 24:
					func_96(uParam0, joaat("COMPONENT_AT_CR_BARREL_02"), joaat("WAPBarrel"), 2, 0);
					break;
			
				case 25:
					func_96(uParam0, 0, joaat("gun_root"), 1, 1);
					break;
			
				case 26:
					func_96(uParam0, joaat("COMPONENT_CARBINERIFLE_MK2_CAMO"), joaat("gun_root"), 2, 0);
					break;
			
				case 27:
					func_96(uParam0, joaat("COMPONENT_CARBINERIFLE_MK2_CAMO_02"), joaat("gun_root"), 3, 0);
					break;
			
				case 28:
					func_96(uParam0, joaat("COMPONENT_CARBINERIFLE_MK2_CAMO_03"), joaat("gun_root"), 4, 0);
					break;
			
				case 29:
					func_96(uParam0, joaat("COMPONENT_CARBINERIFLE_MK2_CAMO_04"), joaat("gun_root"), 5, 0);
					break;
			
				case 30:
					func_96(uParam0, joaat("COMPONENT_CARBINERIFLE_MK2_CAMO_05"), joaat("gun_root"), 6, 0);
					break;
			
				case 31:
					func_96(uParam0, joaat("COMPONENT_CARBINERIFLE_MK2_CAMO_06"), joaat("gun_root"), 7, 0);
					break;
			
				case 32:
					func_96(uParam0, joaat("COMPONENT_CARBINERIFLE_MK2_CAMO_07"), joaat("gun_root"), 8, 0);
					break;
			
				case 33:
					func_96(uParam0, joaat("COMPONENT_CARBINERIFLE_MK2_CAMO_08"), joaat("gun_root"), 9, 0);
					break;
			
				case 34:
					func_96(uParam0, joaat("COMPONENT_CARBINERIFLE_MK2_CAMO_09"), joaat("gun_root"), 10, 0);
					break;
			
				case 35:
					func_96(uParam0, joaat("COMPONENT_CARBINERIFLE_MK2_CAMO_10"), joaat("gun_root"), 11, 0);
					break;
			
				case 36:
					func_96(uParam0, joaat("COMPONENT_CARBINERIFLE_MK2_CAMO_IND_01"), joaat("gun_root"), 12, 0);
					break;
			}
			break;
	
		case joaat("WEAPON_COMBATMG_MK2"):
			switch (iParam2)
			{
				case 0:
					func_96(uParam0, joaat("COMPONENT_COMBATMG_MK2_CLIP_01"), joaat("WAPClip"), 1, 1);
					break;
			
				case 1:
					func_96(uParam0, joaat("COMPONENT_COMBATMG_MK2_CLIP_02"), joaat("WAPClip"), 2, 0);
					break;
			
				case 2:
					func_96(uParam0, joaat("COMPONENT_COMBATMG_MK2_CLIP_TRACER"), joaat("WAPClip"), 3, 0);
					break;
			
				case 3:
					func_96(uParam0, joaat("COMPONENT_COMBATMG_MK2_CLIP_INCENDIARY"), joaat("WAPClip"), 4, 0);
					break;
			
				case 4:
					func_96(uParam0, joaat("COMPONENT_COMBATMG_MK2_CLIP_ARMORPIERCING"), joaat("WAPClip"), 5, 0);
					break;
			
				case 5:
					func_96(uParam0, joaat("COMPONENT_COMBATMG_MK2_CLIP_FMJ"), joaat("WAPClip"), 6, 0);
					break;
			
				case 6:
					func_96(uParam0, 0, joaat("WAPGrip_2"), 1, 1);
					break;
			
				case 7:
					func_96(uParam0, joaat("COMPONENT_AT_AR_AFGRIP_02"), joaat("WAPGrip_2"), 2, 0);
					break;
			
				case 8:
					func_96(uParam0, 0, joaat("WAPScop"), 1, 1);
					break;
			
				case 9:
					func_96(uParam0, joaat("COMPONENT_AT_SIGHTS"), joaat("WAPScop"), 2, 0);
					break;
			
				case 10:
					func_96(uParam0, joaat("COMPONENT_AT_SCOPE_SMALL_MK2"), joaat("WAPScop"), 3, 0);
					break;
			
				case 11:
					func_96(uParam0, joaat("COMPONENT_AT_SCOPE_MEDIUM_MK2"), joaat("WAPScop"), 4, 0);
					break;
			
				case 12:
					func_96(uParam0, 0, joaat("WAPSupp"), 1, 1);
					break;
			
				case 13:
					func_96(uParam0, joaat("COMPONENT_AT_MUZZLE_01"), joaat("WAPSupp"), 2, 0);
					break;
			
				case 14:
					func_96(uParam0, joaat("COMPONENT_AT_MUZZLE_02"), joaat("WAPSupp"), 3, 0);
					break;
			
				case 15:
					func_96(uParam0, joaat("COMPONENT_AT_MUZZLE_03"), joaat("WAPSupp"), 4, 0);
					break;
			
				case 16:
					func_96(uParam0, joaat("COMPONENT_AT_MUZZLE_04"), joaat("WAPSupp"), 5, 0);
					break;
			
				case 17:
					func_96(uParam0, joaat("COMPONENT_AT_MUZZLE_05"), joaat("WAPSupp"), 6, 0);
					break;
			
				case 18:
					func_96(uParam0, joaat("COMPONENT_AT_MUZZLE_06"), joaat("WAPSupp"), 7, 0);
					break;
			
				case 19:
					func_96(uParam0, joaat("COMPONENT_AT_MUZZLE_07"), joaat("WAPSupp"), 8, 0);
					break;
			
				case 20:
					func_96(uParam0, joaat("COMPONENT_AT_MG_BARREL_01"), joaat("WAPBarrel"), 1, 1);
					break;
			
				case 21:
					func_96(uParam0, joaat("COMPONENT_AT_MG_BARREL_02"), joaat("WAPBarrel"), 2, 0);
					break;
			
				case 22:
					func_96(uParam0, 0, joaat("gun_root"), 1, 1);
					break;
			
				case 23:
					func_96(uParam0, joaat("COMPONENT_COMBATMG_MK2_CAMO"), joaat("gun_root"), 2, 0);
					break;
			
				case 24:
					func_96(uParam0, joaat("COMPONENT_COMBATMG_MK2_CAMO_02"), joaat("gun_root"), 3, 0);
					break;
			
				case 25:
					func_96(uParam0, joaat("COMPONENT_COMBATMG_MK2_CAMO_03"), joaat("gun_root"), 4, 0);
					break;
			
				case 26:
					func_96(uParam0, joaat("COMPONENT_COMBATMG_MK2_CAMO_04"), joaat("gun_root"), 5, 0);
					break;
			
				case 27:
					func_96(uParam0, joaat("COMPONENT_COMBATMG_MK2_CAMO_05"), joaat("gun_root"), 6, 0);
					break;
			
				case 28:
					func_96(uParam0, joaat("COMPONENT_COMBATMG_MK2_CAMO_06"), joaat("gun_root"), 7, 0);
					break;
			
				case 29:
					func_96(uParam0, joaat("COMPONENT_COMBATMG_MK2_CAMO_07"), joaat("gun_root"), 8, 0);
					break;
			
				case 30:
					func_96(uParam0, joaat("COMPONENT_COMBATMG_MK2_CAMO_08"), joaat("gun_root"), 9, 0);
					break;
			
				case 31:
					func_96(uParam0, joaat("COMPONENT_COMBATMG_MK2_CAMO_09"), joaat("gun_root"), 10, 0);
					break;
			
				case 32:
					func_96(uParam0, joaat("COMPONENT_COMBATMG_MK2_CAMO_10"), joaat("gun_root"), 11, 0);
					break;
			
				case 33:
					func_96(uParam0, joaat("COMPONENT_COMBATMG_MK2_CAMO_IND_01"), joaat("gun_root"), 12, 0);
					break;
			}
			break;
	
		case joaat("WEAPON_HEAVYSNIPER_MK2"):
			switch (iParam2)
			{
				case 0:
					func_96(uParam0, joaat("COMPONENT_HEAVYSNIPER_MK2_CLIP_01"), joaat("WAPClip"), 1, 1);
					break;
			
				case 1:
					func_96(uParam0, joaat("COMPONENT_HEAVYSNIPER_MK2_CLIP_02"), joaat("WAPClip"), 2, 0);
					break;
			
				case 2:
					func_96(uParam0, joaat("COMPONENT_HEAVYSNIPER_MK2_CLIP_INCENDIARY"), joaat("WAPClip"), 3, 0);
					break;
			
				case 3:
					func_96(uParam0, joaat("COMPONENT_HEAVYSNIPER_MK2_CLIP_ARMORPIERCING"), joaat("WAPClip"), 4, 0);
					break;
			
				case 4:
					func_96(uParam0, joaat("COMPONENT_HEAVYSNIPER_MK2_CLIP_FMJ"), joaat("WAPClip"), 5, 0);
					break;
			
				case 5:
					func_96(uParam0, joaat("COMPONENT_HEAVYSNIPER_MK2_CLIP_EXPLOSIVE"), joaat("WAPClip"), 6, 0);
					break;
			
				case 6:
					func_96(uParam0, joaat("COMPONENT_AT_SCOPE_LARGE_MK2"), joaat("WAPScop"), 1, 0);
					break;
			
				case 7:
					func_96(uParam0, joaat("COMPONENT_AT_SCOPE_MAX"), joaat("WAPScop"), 2, 1);
					break;
			
				case 8:
					func_96(uParam0, joaat("COMPONENT_AT_SCOPE_NV"), joaat("WAPScop"), 3, 0);
					break;
			
				case 9:
					func_96(uParam0, joaat("COMPONENT_AT_SCOPE_THERMAL"), joaat("WAPScop"), 4, 0);
					break;
			
				case 10:
					func_96(uParam0, 0, joaat("WAPSupp"), 1, 1);
					break;
			
				case 11:
					func_96(uParam0, joaat("COMPONENT_AT_SR_SUPP_03"), joaat("WAPSupp"), 2, 0);
					break;
			
				case 12:
					func_96(uParam0, joaat("COMPONENT_AT_MUZZLE_08"), joaat("WAPSupp"), 3, 0);
					break;
			
				case 13:
					func_96(uParam0, joaat("COMPONENT_AT_MUZZLE_09"), joaat("WAPSupp"), 4, 0);
					break;
			
				case 14:
					func_96(uParam0, joaat("COMPONENT_AT_SR_BARREL_01"), joaat("WAPBarrel"), 1, 1);
					break;
			
				case 15:
					func_96(uParam0, joaat("COMPONENT_AT_SR_BARREL_02"), joaat("WAPBarrel"), 2, 0);
					break;
			
				case 16:
					func_96(uParam0, 0, joaat("gun_root"), 1, 1);
					break;
			
				case 17:
					func_96(uParam0, joaat("COMPONENT_HEAVYSNIPER_MK2_CAMO"), joaat("gun_root"), 2, 0);
					break;
			
				case 18:
					func_96(uParam0, joaat("COMPONENT_HEAVYSNIPER_MK2_CAMO_02"), joaat("gun_root"), 3, 0);
					break;
			
				case 19:
					func_96(uParam0, joaat("COMPONENT_HEAVYSNIPER_MK2_CAMO_03"), joaat("gun_root"), 4, 0);
					break;
			
				case 20:
					func_96(uParam0, joaat("COMPONENT_HEAVYSNIPER_MK2_CAMO_04"), joaat("gun_root"), 5, 0);
					break;
			
				case 21:
					func_96(uParam0, joaat("COMPONENT_HEAVYSNIPER_MK2_CAMO_05"), joaat("gun_root"), 6, 0);
					break;
			
				case 22:
					func_96(uParam0, joaat("COMPONENT_HEAVYSNIPER_MK2_CAMO_06"), joaat("gun_root"), 7, 0);
					break;
			
				case 23:
					func_96(uParam0, joaat("COMPONENT_HEAVYSNIPER_MK2_CAMO_07"), joaat("gun_root"), 8, 0);
					break;
			
				case 24:
					func_96(uParam0, joaat("COMPONENT_HEAVYSNIPER_MK2_CAMO_08"), joaat("gun_root"), 9, 0);
					break;
			
				case 25:
					func_96(uParam0, joaat("COMPONENT_HEAVYSNIPER_MK2_CAMO_09"), joaat("gun_root"), 10, 0);
					break;
			
				case 26:
					func_96(uParam0, joaat("COMPONENT_HEAVYSNIPER_MK2_CAMO_10"), joaat("gun_root"), 11, 0);
					break;
			
				case 27:
					func_96(uParam0, joaat("COMPONENT_HEAVYSNIPER_MK2_CAMO_IND_01"), joaat("gun_root"), 12, 0);
					break;
			}
			break;
	
		case joaat("WEAPON_PISTOL_MK2"):
			switch (iParam2)
			{
				case 0:
					func_96(uParam0, joaat("COMPONENT_PISTOL_MK2_CLIP_01"), joaat("WAPClip"), 1, 1);
					break;
			
				case 1:
					func_96(uParam0, joaat("COMPONENT_PISTOL_MK2_CLIP_02"), joaat("WAPClip"), 2, 0);
					break;
			
				case 2:
					func_96(uParam0, joaat("COMPONENT_PISTOL_MK2_CLIP_TRACER"), joaat("WAPClip"), 3, 0);
					break;
			
				case 3:
					func_96(uParam0, joaat("COMPONENT_PISTOL_MK2_CLIP_INCENDIARY"), joaat("WAPClip"), 4, 0);
					break;
			
				case 4:
					func_96(uParam0, joaat("COMPONENT_PISTOL_MK2_CLIP_HOLLOWPOINT"), joaat("WAPClip"), 5, 0);
					break;
			
				case 5:
					func_96(uParam0, joaat("COMPONENT_PISTOL_MK2_CLIP_FMJ"), joaat("WAPClip"), 6, 0);
					break;
			
				case 6:
					func_96(uParam0, 0, joaat("WAPScop"), 1, 1);
					break;
			
				case 7:
					func_96(uParam0, joaat("COMPONENT_AT_PI_RAIL"), joaat("WAPScop"), 2, 0);
					break;
			
				case 8:
					func_96(uParam0, 0, joaat("WAPFlshLasr"), 1, 1);
					break;
			
				case 9:
					func_96(uParam0, joaat("COMPONENT_AT_PI_FLSH_02"), joaat("WAPFlshLasr"), 2, 0);
					break;
			
				case 10:
					func_96(uParam0, 0, joaat("WAPSupp"), 1, 1);
					break;
			
				case 11:
					func_96(uParam0, joaat("COMPONENT_AT_PI_SUPP_02"), joaat("WAPSupp"), 2, 0);
					break;
			
				case 12:
					func_96(uParam0, joaat("COMPONENT_AT_PI_COMP"), joaat("WAPSupp"), 3, 0);
					break;
			
				case 13:
					func_96(uParam0, 0, joaat("gun_root"), 1, 1);
					break;
			
				case 14:
					func_96(uParam0, joaat("COMPONENT_PISTOL_MK2_CAMO"), joaat("gun_root"), 2, 0);
					break;
			
				case 15:
					func_96(uParam0, joaat("COMPONENT_PISTOL_MK2_CAMO_02"), joaat("gun_root"), 3, 0);
					break;
			
				case 16:
					func_96(uParam0, joaat("COMPONENT_PISTOL_MK2_CAMO_03"), joaat("gun_root"), 4, 0);
					break;
			
				case 17:
					func_96(uParam0, joaat("COMPONENT_PISTOL_MK2_CAMO_04"), joaat("gun_root"), 5, 0);
					break;
			
				case 18:
					func_96(uParam0, joaat("COMPONENT_PISTOL_MK2_CAMO_05"), joaat("gun_root"), 6, 0);
					break;
			
				case 19:
					func_96(uParam0, joaat("COMPONENT_PISTOL_MK2_CAMO_06"), joaat("gun_root"), 7, 0);
					break;
			
				case 20:
					func_96(uParam0, joaat("COMPONENT_PISTOL_MK2_CAMO_07"), joaat("gun_root"), 8, 0);
					break;
			
				case 21:
					func_96(uParam0, joaat("COMPONENT_PISTOL_MK2_CAMO_08"), joaat("gun_root"), 9, 0);
					break;
			
				case 22:
					func_96(uParam0, joaat("COMPONENT_PISTOL_MK2_CAMO_09"), joaat("gun_root"), 10, 0);
					break;
			
				case 23:
					func_96(uParam0, joaat("COMPONENT_PISTOL_MK2_CAMO_10"), joaat("gun_root"), 11, 0);
					break;
			
				case 24:
					func_96(uParam0, joaat("COMPONENT_PISTOL_MK2_CAMO_IND_01"), joaat("gun_root"), 12, 0);
					break;
			
				case 25:
					func_96(uParam0, 1141184690, joaat("gun_root"), 13, 0);
					break;
			}
		
			if (*uParam0 == 1141184690 && !func_7(36786, -1))
				return false;
			break;
	
		case joaat("WEAPON_SMG_MK2"):
			switch (iParam2)
			{
				case 0:
					func_96(uParam0, joaat("COMPONENT_SMG_MK2_CLIP_01"), joaat("WAPClip"), 1, 1);
					break;
			
				case 1:
					func_96(uParam0, joaat("COMPONENT_SMG_MK2_CLIP_02"), joaat("WAPClip"), 2, 0);
					break;
			
				case 2:
					func_96(uParam0, joaat("COMPONENT_SMG_MK2_CLIP_TRACER"), joaat("WAPClip"), 3, 0);
					break;
			
				case 3:
					func_96(uParam0, joaat("COMPONENT_SMG_MK2_CLIP_INCENDIARY"), joaat("WAPClip"), 4, 0);
					break;
			
				case 4:
					func_96(uParam0, joaat("COMPONENT_SMG_MK2_CLIP_HOLLOWPOINT"), joaat("WAPClip"), 5, 0);
					break;
			
				case 5:
					func_96(uParam0, joaat("COMPONENT_SMG_MK2_CLIP_FMJ"), joaat("WAPClip"), 6, 0);
					break;
			
				case 6:
					func_96(uParam0, 0, joaat("WAPFlshLasr_2"), 1, 1);
					break;
			
				case 7:
					func_96(uParam0, joaat("COMPONENT_AT_AR_FLSH"), joaat("WAPFlshLasr_2"), 2, 0);
					break;
			
				case 8:
					func_96(uParam0, 0, joaat("WAPScop"), 1, 1);
					break;
			
				case 9:
					func_96(uParam0, joaat("COMPONENT_AT_SIGHTS_SMG"), joaat("WAPScop"), 2, 0);
					break;
			
				case 10:
					func_96(uParam0, joaat("COMPONENT_AT_SCOPE_MACRO_02_SMG_MK2"), joaat("WAPScop"), 3, 0);
					break;
			
				case 11:
					func_96(uParam0, joaat("COMPONENT_AT_SCOPE_SMALL_SMG_MK2"), joaat("WAPScop"), 4, 0);
					break;
			
				case 12:
					func_96(uParam0, 0, joaat("WAPSupp_2"), 1, 1);
					break;
			
				case 13:
					func_96(uParam0, joaat("COMPONENT_AT_PI_SUPP"), joaat("WAPSupp_2"), 1, 0);
					break;
			
				case 14:
					func_96(uParam0, joaat("COMPONENT_AT_MUZZLE_01"), joaat("WAPSupp_2"), 2, 0);
					break;
			
				case 15:
					func_96(uParam0, joaat("COMPONENT_AT_MUZZLE_02"), joaat("WAPSupp_2"), 3, 0);
					break;
			
				case 16:
					func_96(uParam0, joaat("COMPONENT_AT_MUZZLE_03"), joaat("WAPSupp_2"), 4, 0);
					break;
			
				case 17:
					func_96(uParam0, joaat("COMPONENT_AT_MUZZLE_04"), joaat("WAPSupp_2"), 5, 0);
					break;
			
				case 18:
					func_96(uParam0, joaat("COMPONENT_AT_MUZZLE_05"), joaat("WAPSupp_2"), 6, 0);
					break;
			
				case 19:
					func_96(uParam0, joaat("COMPONENT_AT_MUZZLE_06"), joaat("WAPSupp_2"), 7, 0);
					break;
			
				case 20:
					func_96(uParam0, joaat("COMPONENT_AT_MUZZLE_07"), joaat("WAPSupp_2"), 8, 0);
					break;
			
				case 21:
					func_96(uParam0, joaat("COMPONENT_AT_SB_BARREL_01"), joaat("WAPBarrel"), 1, 1);
					break;
			
				case 22:
					func_96(uParam0, joaat("COMPONENT_AT_SB_BARREL_02"), joaat("WAPBarrel"), 2, 0);
					break;
			
				case 23:
					func_96(uParam0, 0, joaat("gun_root"), 1, 1);
					break;
			
				case 24:
					func_96(uParam0, joaat("COMPONENT_SMG_MK2_CAMO"), joaat("gun_root"), 2, 0);
					break;
			
				case 25:
					func_96(uParam0, joaat("COMPONENT_SMG_MK2_CAMO_02"), joaat("gun_root"), 3, 0);
					break;
			
				case 26:
					func_96(uParam0, joaat("COMPONENT_SMG_MK2_CAMO_03"), joaat("gun_root"), 4, 0);
					break;
			
				case 27:
					func_96(uParam0, joaat("COMPONENT_SMG_MK2_CAMO_04"), joaat("gun_root"), 5, 0);
					break;
			
				case 28:
					func_96(uParam0, joaat("COMPONENT_SMG_MK2_CAMO_05"), joaat("gun_root"), 6, 0);
					break;
			
				case 29:
					func_96(uParam0, joaat("COMPONENT_SMG_MK2_CAMO_06"), joaat("gun_root"), 7, 0);
					break;
			
				case 30:
					func_96(uParam0, joaat("COMPONENT_SMG_MK2_CAMO_07"), joaat("gun_root"), 8, 0);
					break;
			
				case 31:
					func_96(uParam0, joaat("COMPONENT_SMG_MK2_CAMO_08"), joaat("gun_root"), 9, 0);
					break;
			
				case 32:
					func_96(uParam0, joaat("COMPONENT_SMG_MK2_CAMO_09"), joaat("gun_root"), 10, 0);
					break;
			
				case 33:
					func_96(uParam0, joaat("COMPONENT_SMG_MK2_CAMO_10"), joaat("gun_root"), 11, 0);
					break;
			
				case 34:
					func_96(uParam0, joaat("COMPONENT_SMG_MK2_CAMO_IND_01"), joaat("gun_root"), 12, 0);
					break;
			}
			break;
	
		case joaat("WEAPON_PUMPSHOTGUN"):
			if (func_95(iLocal_55))
			{
				if (!func_92(joaat("COMPONENT_GUNRUN_MK2_UPGRADE"), joaat("WEAPON_PUMPSHOTGUN"), -1))
				{
					switch (iParam2)
					{
						case 0:
							func_96(uParam0, joaat("COMPONENT_GUNRUN_MK2_UPGRADE"), joaat("Gun_GripR"), 1, 0);
							break;
					
						case 1:
							func_96(uParam0, joaat("COMPONENT_AT_AR_FLSH"), joaat("WAPFlshLasr"), 1, 0);
							break;
					
						case 2:
							func_96(uParam0, joaat("COMPONENT_AT_SR_SUPP"), joaat("WAPSupp"), 1, 0);
							break;
					
						case 3:
							func_96(uParam0, joaat("COMPONENT_PUMPSHOTGUN_VARMOD_LOWRIDER"), joaat("gun_root"), 1, 0);
							break;
					
						case 4:
							func_96(uParam0, joaat("COMPONENT_PUMPSHOTGUN_VARMOD_SECURITY"), joaat("gun_root"), 2, 0);
							break;
					
						case 5:
							func_96(uParam0, 330905451, joaat("gun_root"), 3, 0);
							break;
					}
				}
				else
				{
					switch (iParam2)
					{
						case 0:
							func_96(uParam0, joaat("COMPONENT_AT_AR_FLSH"), joaat("WAPFlshLasr"), 1, 0);
							break;
					
						case 1:
							func_96(uParam0, joaat("COMPONENT_AT_SR_SUPP"), joaat("WAPSupp"), 1, 0);
							break;
					
						case 2:
							func_96(uParam0, joaat("COMPONENT_PUMPSHOTGUN_VARMOD_LOWRIDER"), joaat("gun_root"), 1, 0);
							break;
					
						case 3:
							func_96(uParam0, joaat("COMPONENT_GUNRUN_MK2_UPGRADE"), joaat("Gun_GripR"), 1, 0);
							break;
					}
				}
			}
			else if (unk_0xA26A9A07F761D8F8())
			{
				switch (iParam2)
				{
					case 0:
						func_96(uParam0, joaat("COMPONENT_AT_AR_FLSH"), joaat("WAPFlshLasr"), 1, 0);
						break;
				
					case 1:
						func_96(uParam0, joaat("COMPONENT_AT_SR_SUPP"), joaat("WAPSupp"), 1, 0);
						break;
				
					case 2:
						func_96(uParam0, joaat("COMPONENT_PUMPSHOTGUN_VARMOD_LOWRIDER"), joaat("gun_root"), 1, 0);
						break;
				
					case 3:
						func_96(uParam0, joaat("COMPONENT_PUMPSHOTGUN_VARMOD_SECURITY"), joaat("gun_root"), 2, 0);
						break;
				
					case 4:
						func_96(uParam0, 330905451, joaat("gun_root"), 3, 0);
						break;
				}
			}
			else
			{
				switch (iParam2)
				{
					case 0:
						func_96(uParam0, joaat("COMPONENT_AT_AR_FLSH"), joaat("WAPFlshLasr"), 1, 0);
						break;
				
					case 1:
						func_96(uParam0, joaat("COMPONENT_AT_SR_SUPP"), joaat("WAPSupp"), 1, 0);
						break;
				
					case 2:
						func_96(uParam0, joaat("COMPONENT_PUMPSHOTGUN_VARMOD_LOWRIDER"), joaat("gun_root"), 1, 0);
						break;
				}
			}
		
			if (*uParam0 == 330905451 && !(func_7(36787, -1) || func_82(330905451, joaat("WEAPON_PUMPSHOTGUN"), -1)))
				return false;
			break;
	
		case joaat("WEAPON_SPECIALCARBINE"):
			if (func_95(iLocal_55))
			{
				if (!func_92(joaat("COMPONENT_GUNRUN_MK2_UPGRADE"), joaat("WEAPON_SPECIALCARBINE"), -1))
				{
					switch (iParam2)
					{
						case 0:
							func_96(uParam0, joaat("COMPONENT_GUNRUN_MK2_UPGRADE"), joaat("Gun_GripR"), 1, 0);
							break;
					
						case 1:
							func_96(uParam0, joaat("COMPONENT_SPECIALCARBINE_CLIP_01"), joaat("WAPClip"), 1, 1);
							break;
					
						case 2:
							func_96(uParam0, joaat("COMPONENT_SPECIALCARBINE_CLIP_02"), joaat("WAPClip"), 2, 0);
							break;
					
						case 3:
							func_96(uParam0, joaat("COMPONENT_SPECIALCARBINE_CLIP_03"), joaat("WAPClip"), 3, 0);
							break;
					
						case 4:
							func_96(uParam0, joaat("COMPONENT_AT_AR_FLSH"), joaat("WAPFlsh"), 1, 0);
							break;
					
						case 5:
							func_96(uParam0, joaat("COMPONENT_AT_SCOPE_MEDIUM"), joaat("WAPScop"), 1, 0);
							break;
					
						case 6:
							func_96(uParam0, joaat("COMPONENT_AT_AR_SUPP_02"), joaat("WAPSupp"), 1, 0);
							break;
					
						case 7:
							func_96(uParam0, joaat("COMPONENT_AT_AR_AFGRIP"), joaat("WAPGrip"), 1, 0);
							break;
					
						case 8:
							func_96(uParam0, joaat("COMPONENT_SPECIALCARBINE_VARMOD_LOWRIDER"), joaat("gun_root"), 1, 0);
							break;
					}
				}
				else
				{
					switch (iParam2)
					{
						case 0:
							func_96(uParam0, joaat("COMPONENT_SPECIALCARBINE_CLIP_01"), joaat("WAPClip"), 1, 1);
							break;
					
						case 1:
							func_96(uParam0, joaat("COMPONENT_SPECIALCARBINE_CLIP_02"), joaat("WAPClip"), 2, 0);
							break;
					
						case 2:
							func_96(uParam0, joaat("COMPONENT_SPECIALCARBINE_CLIP_03"), joaat("WAPClip"), 3, 0);
							break;
					
						case 3:
							func_96(uParam0, joaat("COMPONENT_AT_AR_FLSH"), joaat("WAPFlsh"), 1, 0);
							break;
					
						case 4:
							func_96(uParam0, joaat("COMPONENT_AT_SCOPE_MEDIUM"), joaat("WAPScop"), 1, 0);
							break;
					
						case 5:
							func_96(uParam0, joaat("COMPONENT_AT_AR_SUPP_02"), joaat("WAPSupp"), 1, 0);
							break;
					
						case 6:
							func_96(uParam0, joaat("COMPONENT_AT_AR_AFGRIP"), joaat("WAPGrip"), 1, 0);
							break;
					
						case 7:
							func_96(uParam0, joaat("COMPONENT_SPECIALCARBINE_VARMOD_LOWRIDER"), joaat("gun_root"), 1, 0);
							break;
					
						case 8:
							func_96(uParam0, joaat("COMPONENT_GUNRUN_MK2_UPGRADE"), joaat("Gun_GripR"), 1, 0);
							break;
					}
				}
			}
			else
			{
				switch (iParam2)
				{
					case 0:
						func_96(uParam0, joaat("COMPONENT_SPECIALCARBINE_CLIP_01"), joaat("WAPClip"), 1, 1);
						break;
				
					case 1:
						func_96(uParam0, joaat("COMPONENT_SPECIALCARBINE_CLIP_02"), joaat("WAPClip"), 2, 0);
						break;
				
					case 2:
						func_96(uParam0, joaat("COMPONENT_SPECIALCARBINE_CLIP_03"), joaat("WAPClip"), 3, 0);
						break;
				
					case 3:
						func_96(uParam0, joaat("COMPONENT_AT_AR_FLSH"), joaat("WAPFlsh"), 1, 0);
						break;
				
					case 4:
						func_96(uParam0, joaat("COMPONENT_AT_SCOPE_MEDIUM"), joaat("WAPScop"), 1, 0);
						break;
				
					case 5:
						func_96(uParam0, joaat("COMPONENT_AT_AR_SUPP_02"), joaat("WAPSupp"), 1, 0);
						break;
				
					case 6:
						func_96(uParam0, joaat("COMPONENT_AT_AR_AFGRIP"), joaat("WAPGrip"), 1, 0);
						break;
				
					case 7:
						func_96(uParam0, joaat("COMPONENT_SPECIALCARBINE_VARMOD_LOWRIDER"), joaat("gun_root"), 1, 0);
						break;
				}
			}
			break;
	
		case joaat("WEAPON_SNSPISTOL"):
			if (func_95(iLocal_55))
			{
				if (!func_92(joaat("COMPONENT_GUNRUN_MK2_UPGRADE"), joaat("WEAPON_SNSPISTOL"), -1))
				{
					switch (iParam2)
					{
						case 0:
							func_96(uParam0, joaat("COMPONENT_GUNRUN_MK2_UPGRADE"), joaat("Gun_GripR"), 1, 0);
							break;
					
						case 1:
							func_96(uParam0, joaat("COMPONENT_SNSPISTOL_CLIP_01"), joaat("WAPClip"), 1, 1);
							break;
					
						case 2:
							func_96(uParam0, joaat("COMPONENT_SNSPISTOL_CLIP_02"), joaat("WAPClip"), 2, 0);
							break;
					
						case 3:
							func_96(uParam0, joaat("COMPONENT_SNSPISTOL_VARMOD_LOWRIDER"), joaat("gun_root"), 1, 0);
							break;
					}
				}
				else
				{
					switch (iParam2)
					{
						case 0:
							func_96(uParam0, joaat("COMPONENT_SNSPISTOL_CLIP_01"), joaat("WAPClip"), 1, 1);
							break;
					
						case 1:
							func_96(uParam0, joaat("COMPONENT_SNSPISTOL_CLIP_02"), joaat("WAPClip"), 2, 0);
							break;
					
						case 2:
							func_96(uParam0, joaat("COMPONENT_SNSPISTOL_VARMOD_LOWRIDER"), joaat("gun_root"), 1, 0);
							break;
					
						case 3:
							func_96(uParam0, joaat("COMPONENT_GUNRUN_MK2_UPGRADE"), joaat("Gun_GripR"), 1, 0);
							break;
					}
				}
			}
			else
			{
				switch (iParam2)
				{
					case 0:
						func_96(uParam0, joaat("COMPONENT_SNSPISTOL_CLIP_01"), joaat("WAPClip"), 1, 1);
						break;
				
					case 1:
						func_96(uParam0, joaat("COMPONENT_SNSPISTOL_CLIP_02"), joaat("WAPClip"), 2, 0);
						break;
				
					case 2:
						func_96(uParam0, joaat("COMPONENT_SNSPISTOL_VARMOD_LOWRIDER"), joaat("gun_root"), 1, 0);
						break;
				}
			}
			break;
	
		case joaat("WEAPON_MARKSMANRIFLE"):
			if (func_95(iLocal_55))
			{
				if (!func_92(joaat("COMPONENT_GUNRUN_MK2_UPGRADE"), joaat("WEAPON_MARKSMANRIFLE"), -1))
				{
					switch (iParam2)
					{
						case 0:
							func_96(uParam0, joaat("COMPONENT_GUNRUN_MK2_UPGRADE"), joaat("Gun_GripR"), 1, 0);
							break;
					
						case 1:
							func_96(uParam0, joaat("COMPONENT_MARKSMANRIFLE_CLIP_01"), joaat("WAPClip"), 1, 1);
							break;
					
						case 2:
							func_96(uParam0, joaat("COMPONENT_MARKSMANRIFLE_CLIP_02"), joaat("WAPClip"), 2, 0);
							break;
					
						case 3:
							func_96(uParam0, joaat("COMPONENT_AT_SCOPE_LARGE_FIXED_ZOOM"), joaat("WAPScop"), 1, 1);
							break;
					
						case 4:
							func_96(uParam0, joaat("COMPONENT_AT_AR_FLSH"), joaat("WAPFlsh"), 1, 0);
							break;
					
						case 5:
							func_96(uParam0, joaat("COMPONENT_AT_AR_SUPP"), joaat("WAPSupp"), 1, 0);
							break;
					
						case 6:
							func_96(uParam0, joaat("COMPONENT_AT_AR_AFGRIP"), joaat("WAPGrip"), 1, 0);
							break;
					
						case 7:
							func_96(uParam0, joaat("COMPONENT_MARKSMANRIFLE_VARMOD_LUXE"), joaat("gun_root"), 1, 0);
							break;
					}
				}
				else
				{
					switch (iParam2)
					{
						case 0:
							func_96(uParam0, joaat("COMPONENT_MARKSMANRIFLE_CLIP_01"), joaat("WAPClip"), 1, 1);
							break;
					
						case 1:
							func_96(uParam0, joaat("COMPONENT_MARKSMANRIFLE_CLIP_02"), joaat("WAPClip"), 2, 0);
							break;
					
						case 2:
							func_96(uParam0, joaat("COMPONENT_AT_SCOPE_LARGE_FIXED_ZOOM"), joaat("WAPScop"), 1, 1);
							break;
					
						case 3:
							func_96(uParam0, joaat("COMPONENT_AT_AR_FLSH"), joaat("WAPFlsh"), 1, 0);
							break;
					
						case 4:
							func_96(uParam0, joaat("COMPONENT_AT_AR_SUPP"), joaat("WAPSupp"), 1, 0);
							break;
					
						case 5:
							func_96(uParam0, joaat("COMPONENT_AT_AR_AFGRIP"), joaat("WAPGrip"), 1, 0);
							break;
					
						case 6:
							func_96(uParam0, joaat("COMPONENT_MARKSMANRIFLE_VARMOD_LUXE"), joaat("gun_root"), 1, 0);
							break;
					
						case 7:
							func_96(uParam0, joaat("COMPONENT_GUNRUN_MK2_UPGRADE"), joaat("Gun_GripR"), 1, 0);
							break;
					}
				}
			}
			else
			{
				switch (iParam2)
				{
					case 0:
						func_96(uParam0, joaat("COMPONENT_MARKSMANRIFLE_CLIP_01"), joaat("WAPClip"), 1, 1);
						break;
				
					case 1:
						func_96(uParam0, joaat("COMPONENT_MARKSMANRIFLE_CLIP_02"), joaat("WAPClip"), 2, 0);
						break;
				
					case 2:
						func_96(uParam0, joaat("COMPONENT_AT_SCOPE_LARGE_FIXED_ZOOM"), joaat("WAPScop"), 1, 1);
						break;
				
					case 3:
						func_96(uParam0, joaat("COMPONENT_AT_AR_FLSH"), joaat("WAPFlsh"), 1, 0);
						break;
				
					case 4:
						func_96(uParam0, joaat("COMPONENT_AT_AR_SUPP"), joaat("WAPSupp"), 1, 0);
						break;
				
					case 5:
						func_96(uParam0, joaat("COMPONENT_AT_AR_AFGRIP"), joaat("WAPGrip"), 1, 0);
						break;
				
					case 6:
						func_96(uParam0, joaat("COMPONENT_MARKSMANRIFLE_VARMOD_LUXE"), joaat("gun_root"), 1, 0);
						break;
				}
			}
			break;
	
		case joaat("WEAPON_REVOLVER"):
			if (func_95(iLocal_55))
			{
				if (!func_92(joaat("COMPONENT_GUNRUN_MK2_UPGRADE"), joaat("WEAPON_REVOLVER"), -1))
				{
					switch (iParam2)
					{
						case 0:
							func_96(uParam0, joaat("COMPONENT_GUNRUN_MK2_UPGRADE"), joaat("Gun_GripR"), 1, 0);
							break;
					
						case 1:
							func_96(uParam0, joaat("COMPONENT_REVOLVER_CLIP_01"), joaat("WAPClip"), 1, 1);
							break;
					
						case 2:
							func_96(uParam0, joaat("COMPONENT_REVOLVER_VARMOD_BOSS"), joaat("gun_root"), 1, 0);
							break;
					
						case 3:
							func_96(uParam0, joaat("COMPONENT_REVOLVER_VARMOD_GOON"), joaat("gun_root"), 2, 0);
							break;
					}
				}
				else
				{
					switch (iParam2)
					{
						case 0:
							func_96(uParam0, joaat("COMPONENT_REVOLVER_CLIP_01"), joaat("WAPClip"), 1, 1);
							break;
					
						case 1:
							func_96(uParam0, joaat("COMPONENT_REVOLVER_VARMOD_BOSS"), joaat("gun_root"), 1, 0);
							break;
					
						case 2:
							func_96(uParam0, joaat("COMPONENT_REVOLVER_VARMOD_GOON"), joaat("gun_root"), 2, 0);
							break;
					
						case 3:
							func_96(uParam0, joaat("COMPONENT_GUNRUN_MK2_UPGRADE"), joaat("Gun_GripR"), 1, 0);
							break;
					}
				}
			}
			else
			{
				switch (iParam2)
				{
					case 0:
						func_96(uParam0, joaat("COMPONENT_REVOLVER_CLIP_01"), joaat("WAPClip"), 1, 1);
						break;
				
					case 1:
						func_96(uParam0, joaat("COMPONENT_REVOLVER_VARMOD_BOSS"), joaat("gun_root"), 1, 0);
						break;
				
					case 2:
						func_96(uParam0, joaat("COMPONENT_REVOLVER_VARMOD_GOON"), joaat("gun_root"), 2, 0);
						break;
				}
			}
			break;
	
		case joaat("WEAPON_BULLPUPRIFLE"):
			if (func_95(iLocal_55))
			{
				if (!func_92(joaat("COMPONENT_GUNRUN_MK2_UPGRADE"), joaat("WEAPON_BULLPUPRIFLE"), -1))
				{
					switch (iParam2)
					{
						case 0:
							func_96(uParam0, joaat("COMPONENT_GUNRUN_MK2_UPGRADE"), joaat("Gun_GripR"), 1, 0);
							break;
					
						case 1:
							func_96(uParam0, joaat("COMPONENT_BULLPUPRIFLE_CLIP_01"), joaat("WAPClip"), 1, 1);
							break;
					
						case 2:
							func_96(uParam0, joaat("COMPONENT_BULLPUPRIFLE_CLIP_02"), joaat("WAPClip"), 2, 0);
							break;
					
						case 3:
							func_96(uParam0, joaat("COMPONENT_AT_AR_FLSH"), joaat("WAPFlsh"), 1, 0);
							break;
					
						case 4:
							func_96(uParam0, joaat("COMPONENT_AT_SCOPE_SMALL"), joaat("WAPScop"), 1, 0);
							break;
					
						case 5:
							func_96(uParam0, joaat("COMPONENT_AT_AR_SUPP"), joaat("WAPSupp"), 1, 0);
							break;
					
						case 6:
							func_96(uParam0, joaat("COMPONENT_AT_AR_AFGRIP"), joaat("WAPGrip"), 1, 0);
							break;
					
						case 7:
							func_96(uParam0, joaat("COMPONENT_BULLPUPRIFLE_VARMOD_LOW"), joaat("gun_root"), 1, 0);
							break;
					}
				}
				else
				{
					switch (iParam2)
					{
						case 0:
							func_96(uParam0, joaat("COMPONENT_BULLPUPRIFLE_CLIP_01"), joaat("WAPClip"), 1, 1);
							break;
					
						case 1:
							func_96(uParam0, joaat("COMPONENT_BULLPUPRIFLE_CLIP_02"), joaat("WAPClip"), 2, 0);
							break;
					
						case 2:
							func_96(uParam0, joaat("COMPONENT_AT_AR_FLSH"), joaat("WAPFlsh"), 1, 0);
							break;
					
						case 3:
							func_96(uParam0, joaat("COMPONENT_AT_SCOPE_SMALL"), joaat("WAPScop"), 1, 0);
							break;
					
						case 4:
							func_96(uParam0, joaat("COMPONENT_AT_AR_SUPP"), joaat("WAPSupp"), 1, 0);
							break;
					
						case 5:
							func_96(uParam0, joaat("COMPONENT_AT_AR_AFGRIP"), joaat("WAPGrip"), 1, 0);
							break;
					
						case 6:
							func_96(uParam0, joaat("COMPONENT_BULLPUPRIFLE_VARMOD_LOW"), joaat("gun_root"), 1, 0);
							break;
					
						case 7:
							func_96(uParam0, joaat("COMPONENT_GUNRUN_MK2_UPGRADE"), joaat("Gun_GripR"), 1, 0);
							break;
					}
				}
			}
			else
			{
				switch (iParam2)
				{
					case 0:
						func_96(uParam0, joaat("COMPONENT_BULLPUPRIFLE_CLIP_01"), joaat("WAPClip"), 1, 1);
						break;
				
					case 1:
						func_96(uParam0, joaat("COMPONENT_BULLPUPRIFLE_CLIP_02"), joaat("WAPClip"), 2, 0);
						break;
				
					case 2:
						func_96(uParam0, joaat("COMPONENT_AT_AR_FLSH"), joaat("WAPFlsh"), 1, 0);
						break;
				
					case 3:
						func_96(uParam0, joaat("COMPONENT_AT_SCOPE_SMALL"), joaat("WAPScop"), 1, 0);
						break;
				
					case 4:
						func_96(uParam0, joaat("COMPONENT_AT_AR_SUPP"), joaat("WAPSupp"), 1, 0);
						break;
				
					case 5:
						func_96(uParam0, joaat("COMPONENT_AT_AR_AFGRIP"), joaat("WAPGrip"), 1, 0);
						break;
				
					case 6:
						func_96(uParam0, joaat("COMPONENT_BULLPUPRIFLE_VARMOD_LOW"), joaat("gun_root"), 1, 0);
						break;
				}
			}
			break;
	
		case joaat("WEAPON_PUMPSHOTGUN_MK2"):
			switch (iParam2)
			{
				case 0:
					func_96(uParam0, joaat("COMPONENT_PUMPSHOTGUN_MK2_CLIP_01"), joaat("WAPClip"), 1, 1);
					break;
			
				case 1:
					func_96(uParam0, joaat("COMPONENT_PUMPSHOTGUN_MK2_CLIP_INCENDIARY"), joaat("WAPClip"), 2, 0);
					break;
			
				case 2:
					func_96(uParam0, joaat("COMPONENT_PUMPSHOTGUN_MK2_CLIP_HOLLOWPOINT"), joaat("WAPClip"), 3, 0);
					break;
			
				case 3:
					func_96(uParam0, joaat("COMPONENT_PUMPSHOTGUN_MK2_CLIP_ARMORPIERCING"), joaat("WAPClip"), 4, 0);
					break;
			
				case 4:
					func_96(uParam0, joaat("COMPONENT_PUMPSHOTGUN_MK2_CLIP_EXPLOSIVE"), joaat("WAPClip"), 5, 0);
					break;
			
				case 5:
					func_96(uParam0, 0, joaat("WAPFlshLasr_2"), 1, 1);
					break;
			
				case 6:
					func_96(uParam0, joaat("COMPONENT_AT_AR_FLSH"), joaat("WAPFlshLasr_2"), 2, 0);
					break;
			
				case 7:
					func_96(uParam0, 0, joaat("WAPScop"), 1, 1);
					break;
			
				case 8:
					func_96(uParam0, joaat("COMPONENT_AT_SIGHTS"), joaat("WAPScop"), 2, 0);
					break;
			
				case 9:
					func_96(uParam0, joaat("COMPONENT_AT_SCOPE_MACRO_MK2"), joaat("WAPScop"), 3, 0);
					break;
			
				case 10:
					func_96(uParam0, joaat("COMPONENT_AT_SCOPE_SMALL_MK2"), joaat("WAPScop"), 4, 0);
					break;
			
				case 11:
					func_96(uParam0, 0, joaat("WAPSupp"), 1, 1);
					break;
			
				case 12:
					func_96(uParam0, joaat("COMPONENT_AT_SR_SUPP_03"), joaat("WAPSupp"), 2, 0);
					break;
			
				case 13:
					func_96(uParam0, joaat("COMPONENT_AT_MUZZLE_08"), joaat("WAPSupp"), 3, 0);
					break;
			
				case 14:
					func_96(uParam0, 0, joaat("gun_root"), 1, 1);
					break;
			
				case 15:
					func_96(uParam0, joaat("COMPONENT_PUMPSHOTGUN_MK2_CAMO"), joaat("gun_root"), 2, 0);
					break;
			
				case 16:
					func_96(uParam0, joaat("COMPONENT_PUMPSHOTGUN_MK2_CAMO_02"), joaat("gun_root"), 3, 0);
					break;
			
				case 17:
					func_96(uParam0, joaat("COMPONENT_PUMPSHOTGUN_MK2_CAMO_03"), joaat("gun_root"), 4, 0);
					break;
			
				case 18:
					func_96(uParam0, joaat("COMPONENT_PUMPSHOTGUN_MK2_CAMO_04"), joaat("gun_root"), 5, 0);
					break;
			
				case 19:
					func_96(uParam0, joaat("COMPONENT_PUMPSHOTGUN_MK2_CAMO_05"), joaat("gun_root"), 6, 0);
					break;
			
				case 20:
					func_96(uParam0, joaat("COMPONENT_PUMPSHOTGUN_MK2_CAMO_06"), joaat("gun_root"), 7, 0);
					break;
			
				case 21:
					func_96(uParam0, joaat("COMPONENT_PUMPSHOTGUN_MK2_CAMO_07"), joaat("gun_root"), 8, 0);
					break;
			
				case 22:
					func_96(uParam0, joaat("COMPONENT_PUMPSHOTGUN_MK2_CAMO_08"), joaat("gun_root"), 9, 0);
					break;
			
				case 23:
					func_96(uParam0, joaat("COMPONENT_PUMPSHOTGUN_MK2_CAMO_09"), joaat("gun_root"), 10, 0);
					break;
			
				case 24:
					func_96(uParam0, joaat("COMPONENT_PUMPSHOTGUN_MK2_CAMO_10"), joaat("gun_root"), 11, 0);
					break;
			
				case 25:
					func_96(uParam0, joaat("COMPONENT_PUMPSHOTGUN_MK2_CAMO_IND_01"), joaat("gun_root"), 12, 0);
					break;
			}
			break;
	
		case joaat("WEAPON_SPECIALCARBINE_MK2"):
			switch (iParam2)
			{
				case 0:
					func_96(uParam0, joaat("COMPONENT_SPECIALCARBINE_MK2_CLIP_01"), joaat("WAPClip"), 1, 1);
					break;
			
				case 1:
					func_96(uParam0, joaat("COMPONENT_SPECIALCARBINE_MK2_CLIP_02"), joaat("WAPClip"), 2, 0);
					break;
			
				case 2:
					func_96(uParam0, joaat("COMPONENT_SPECIALCARBINE_MK2_CLIP_TRACER"), joaat("WAPClip"), 3, 0);
					break;
			
				case 3:
					func_96(uParam0, joaat("COMPONENT_SPECIALCARBINE_MK2_CLIP_INCENDIARY"), joaat("WAPClip"), 4, 0);
					break;
			
				case 4:
					func_96(uParam0, joaat("COMPONENT_SPECIALCARBINE_MK2_CLIP_ARMORPIERCING"), joaat("WAPClip"), 5, 0);
					break;
			
				case 5:
					func_96(uParam0, joaat("COMPONENT_SPECIALCARBINE_MK2_CLIP_FMJ"), joaat("WAPClip"), 6, 0);
					break;
			
				case 6:
					func_96(uParam0, 0, joaat("WAPFlshLasr"), 1, 1);
					break;
			
				case 7:
					func_96(uParam0, joaat("COMPONENT_AT_AR_FLSH"), joaat("WAPFlshLasr"), 2, 0);
					break;
			
				case 8:
					func_96(uParam0, 0, joaat("WAPScop_2"), 1, 1);
					break;
			
				case 9:
					func_96(uParam0, joaat("COMPONENT_AT_SIGHTS"), joaat("WAPScop_2"), 2, 0);
					break;
			
				case 10:
					func_96(uParam0, joaat("COMPONENT_AT_SCOPE_MACRO_MK2"), joaat("WAPScop_2"), 3, 0);
					break;
			
				case 11:
					func_96(uParam0, joaat("COMPONENT_AT_SCOPE_MEDIUM_MK2"), joaat("WAPScop_2"), 4, 0);
					break;
			
				case 12:
					func_96(uParam0, 0, joaat("WAPSupp"), 1, 1);
					break;
			
				case 13:
					func_96(uParam0, joaat("COMPONENT_AT_AR_SUPP_02"), joaat("WAPSupp"), 2, 0);
					break;
			
				case 14:
					func_96(uParam0, joaat("COMPONENT_AT_MUZZLE_01"), joaat("WAPSupp"), 3, 0);
					break;
			
				case 15:
					func_96(uParam0, joaat("COMPONENT_AT_MUZZLE_02"), joaat("WAPSupp"), 4, 0);
					break;
			
				case 16:
					func_96(uParam0, joaat("COMPONENT_AT_MUZZLE_03"), joaat("WAPSupp"), 5, 0);
					break;
			
				case 17:
					func_96(uParam0, joaat("COMPONENT_AT_MUZZLE_04"), joaat("WAPSupp"), 6, 0);
					break;
			
				case 18:
					func_96(uParam0, joaat("COMPONENT_AT_MUZZLE_05"), joaat("WAPSupp"), 7, 0);
					break;
			
				case 19:
					func_96(uParam0, joaat("COMPONENT_AT_MUZZLE_06"), joaat("WAPSupp"), 8, 0);
					break;
			
				case 20:
					func_96(uParam0, joaat("COMPONENT_AT_MUZZLE_07"), joaat("WAPSupp"), 9, 0);
					break;
			
				case 21:
					func_96(uParam0, 0, joaat("WAPGrip"), 1, 1);
					break;
			
				case 22:
					func_96(uParam0, joaat("COMPONENT_AT_AR_AFGRIP_02"), joaat("WAPGrip"), 2, 0);
					break;
			
				case 23:
					func_96(uParam0, joaat("COMPONENT_AT_SC_BARREL_01"), joaat("WAPBarrel"), 1, 1);
					break;
			
				case 24:
					func_96(uParam0, joaat("COMPONENT_AT_SC_BARREL_02"), joaat("WAPBarrel"), 2, 0);
					break;
			
				case 25:
					func_96(uParam0, 0, joaat("gun_root"), 1, 1);
					break;
			
				case 26:
					func_96(uParam0, joaat("COMPONENT_SPECIALCARBINE_MK2_CAMO"), joaat("gun_root"), 2, 0);
					break;
			
				case 27:
					func_96(uParam0, joaat("COMPONENT_SPECIALCARBINE_MK2_CAMO_02"), joaat("gun_root"), 3, 0);
					break;
			
				case 28:
					func_96(uParam0, joaat("COMPONENT_SPECIALCARBINE_MK2_CAMO_03"), joaat("gun_root"), 4, 0);
					break;
			
				case 29:
					func_96(uParam0, joaat("COMPONENT_SPECIALCARBINE_MK2_CAMO_04"), joaat("gun_root"), 5, 0);
					break;
			
				case 30:
					func_96(uParam0, joaat("COMPONENT_SPECIALCARBINE_MK2_CAMO_05"), joaat("gun_root"), 6, 0);
					break;
			
				case 31:
					func_96(uParam0, joaat("COMPONENT_SPECIALCARBINE_MK2_CAMO_06"), joaat("gun_root"), 7, 0);
					break;
			
				case 32:
					func_96(uParam0, joaat("COMPONENT_SPECIALCARBINE_MK2_CAMO_07"), joaat("gun_root"), 8, 0);
					break;
			
				case 33:
					func_96(uParam0, joaat("COMPONENT_SPECIALCARBINE_MK2_CAMO_08"), joaat("gun_root"), 9, 0);
					break;
			
				case 34:
					func_96(uParam0, joaat("COMPONENT_SPECIALCARBINE_MK2_CAMO_09"), joaat("gun_root"), 10, 0);
					break;
			
				case 35:
					func_96(uParam0, joaat("COMPONENT_SPECIALCARBINE_MK2_CAMO_10"), joaat("gun_root"), 11, 0);
					break;
			
				case 36:
					func_96(uParam0, joaat("COMPONENT_SPECIALCARBINE_MK2_CAMO_IND_01"), joaat("gun_root"), 12, 0);
					break;
			}
			break;
	
		case joaat("WEAPON_SNSPISTOL_MK2"):
			switch (iParam2)
			{
				case 0:
					func_96(uParam0, joaat("COMPONENT_SNSPISTOL_MK2_CLIP_01"), joaat("WAPClip"), 1, 1);
					break;
			
				case 1:
					func_96(uParam0, joaat("COMPONENT_SNSPISTOL_MK2_CLIP_02"), joaat("WAPClip"), 2, 0);
					break;
			
				case 2:
					func_96(uParam0, joaat("COMPONENT_SNSPISTOL_MK2_CLIP_TRACER"), joaat("WAPClip"), 3, 0);
					break;
			
				case 3:
					func_96(uParam0, joaat("COMPONENT_SNSPISTOL_MK2_CLIP_INCENDIARY"), joaat("WAPClip"), 4, 0);
					break;
			
				case 4:
					func_96(uParam0, joaat("COMPONENT_SNSPISTOL_MK2_CLIP_HOLLOWPOINT"), joaat("WAPClip"), 5, 0);
					break;
			
				case 5:
					func_96(uParam0, joaat("COMPONENT_SNSPISTOL_MK2_CLIP_FMJ"), joaat("WAPClip"), 6, 0);
					break;
			
				case 6:
					func_96(uParam0, 0, joaat("WAPFlshLasr_2"), 1, 1);
					break;
			
				case 7:
					func_96(uParam0, joaat("COMPONENT_AT_PI_FLSH_03"), joaat("WAPFlshLasr_2"), 2, 0);
					break;
			
				case 8:
					func_96(uParam0, 0, joaat("WAPScop"), 1, 1);
					break;
			
				case 9:
					func_96(uParam0, joaat("COMPONENT_AT_PI_RAIL_02"), joaat("WAPScop"), 2, 0);
					break;
			
				case 10:
					func_96(uParam0, 0, joaat("WAPSupp_2"), 1, 1);
					break;
			
				case 11:
					func_96(uParam0, joaat("COMPONENT_AT_PI_SUPP_02"), joaat("WAPSupp_2"), 2, 0);
					break;
			
				case 12:
					func_96(uParam0, joaat("COMPONENT_AT_PI_COMP_02"), joaat("WAPSupp_2"), 3, 0);
					break;
			
				case 13:
					func_96(uParam0, 0, joaat("gun_root"), 1, 1);
					break;
			
				case 14:
					func_96(uParam0, joaat("COMPONENT_SNSPISTOL_MK2_CAMO"), joaat("gun_root"), 2, 0);
					break;
			
				case 15:
					func_96(uParam0, joaat("COMPONENT_SNSPISTOL_MK2_CAMO_02"), joaat("gun_root"), 3, 0);
					break;
			
				case 16:
					func_96(uParam0, joaat("COMPONENT_SNSPISTOL_MK2_CAMO_03"), joaat("gun_root"), 4, 0);
					break;
			
				case 17:
					func_96(uParam0, joaat("COMPONENT_SNSPISTOL_MK2_CAMO_04"), joaat("gun_root"), 5, 0);
					break;
			
				case 18:
					func_96(uParam0, joaat("COMPONENT_SNSPISTOL_MK2_CAMO_05"), joaat("gun_root"), 6, 0);
					break;
			
				case 19:
					func_96(uParam0, joaat("COMPONENT_SNSPISTOL_MK2_CAMO_06"), joaat("gun_root"), 7, 0);
					break;
			
				case 20:
					func_96(uParam0, joaat("COMPONENT_SNSPISTOL_MK2_CAMO_07"), joaat("gun_root"), 8, 0);
					break;
			
				case 21:
					func_96(uParam0, joaat("COMPONENT_SNSPISTOL_MK2_CAMO_08"), joaat("gun_root"), 9, 0);
					break;
			
				case 22:
					func_96(uParam0, joaat("COMPONENT_SNSPISTOL_MK2_CAMO_09"), joaat("gun_root"), 10, 0);
					break;
			
				case 23:
					func_96(uParam0, joaat("COMPONENT_SNSPISTOL_MK2_CAMO_10"), joaat("gun_root"), 11, 0);
					break;
			
				case 24:
					func_96(uParam0, joaat("COMPONENT_SNSPISTOL_MK2_CAMO_IND_01"), joaat("gun_root"), 12, 0);
					break;
			}
			break;
	
		case joaat("WEAPON_MARKSMANRIFLE_MK2"):
			switch (iParam2)
			{
				case 0:
					func_96(uParam0, joaat("COMPONENT_MARKSMANRIFLE_MK2_CLIP_01"), joaat("WAPClip"), 1, 1);
					break;
			
				case 1:
					func_96(uParam0, joaat("COMPONENT_MARKSMANRIFLE_MK2_CLIP_02"), joaat("WAPClip"), 2, 0);
					break;
			
				case 2:
					func_96(uParam0, joaat("COMPONENT_MARKSMANRIFLE_MK2_CLIP_TRACER"), joaat("WAPClip"), 3, 0);
					break;
			
				case 3:
					func_96(uParam0, joaat("COMPONENT_MARKSMANRIFLE_MK2_CLIP_INCENDIARY"), joaat("WAPClip"), 4, 0);
					break;
			
				case 4:
					func_96(uParam0, joaat("COMPONENT_MARKSMANRIFLE_MK2_CLIP_ARMORPIERCING"), joaat("WAPClip"), 5, 0);
					break;
			
				case 5:
					func_96(uParam0, joaat("COMPONENT_MARKSMANRIFLE_MK2_CLIP_FMJ"), joaat("WAPClip"), 6, 0);
					break;
			
				case 6:
					func_96(uParam0, 0, joaat("WAPFlshLasr"), 1, 1);
					break;
			
				case 7:
					func_96(uParam0, joaat("COMPONENT_AT_AR_FLSH"), joaat("WAPFlshLasr"), 2, 0);
					break;
			
				case 8:
					func_96(uParam0, joaat("COMPONENT_AT_SIGHTS"), joaat("WAPScop_2"), 2, 0);
					break;
			
				case 9:
					func_96(uParam0, joaat("COMPONENT_AT_SCOPE_MEDIUM_MK2"), joaat("WAPScop_2"), 3, 0);
					break;
			
				case 10:
					func_96(uParam0, joaat("COMPONENT_AT_SCOPE_LARGE_FIXED_ZOOM_MK2"), joaat("WAPScop_2"), 4, 1);
					break;
			
				case 11:
					func_96(uParam0, 0, joaat("WAPSupp_2"), 1, 1);
					break;
			
				case 12:
					func_96(uParam0, joaat("COMPONENT_AT_AR_SUPP"), joaat("WAPSupp_2"), 2, 0);
					break;
			
				case 13:
					func_96(uParam0, joaat("COMPONENT_AT_MUZZLE_01"), joaat("WAPSupp_2"), 3, 0);
					break;
			
				case 14:
					func_96(uParam0, joaat("COMPONENT_AT_MUZZLE_02"), joaat("WAPSupp_2"), 4, 0);
					break;
			
				case 15:
					func_96(uParam0, joaat("COMPONENT_AT_MUZZLE_03"), joaat("WAPSupp_2"), 5, 0);
					break;
			
				case 16:
					func_96(uParam0, joaat("COMPONENT_AT_MUZZLE_04"), joaat("WAPSupp_2"), 6, 0);
					break;
			
				case 17:
					func_96(uParam0, joaat("COMPONENT_AT_MUZZLE_05"), joaat("WAPSupp_2"), 7, 0);
					break;
			
				case 18:
					func_96(uParam0, joaat("COMPONENT_AT_MUZZLE_06"), joaat("WAPSupp_2"), 8, 0);
					break;
			
				case 19:
					func_96(uParam0, joaat("COMPONENT_AT_MUZZLE_07"), joaat("WAPSupp_2"), 9, 0);
					break;
			
				case 20:
					func_96(uParam0, 0, joaat("WAPGrip_2"), 1, 1);
					break;
			
				case 21:
					func_96(uParam0, joaat("COMPONENT_AT_AR_AFGRIP_02"), joaat("WAPGrip_2"), 2, 0);
					break;
			
				case 22:
					func_96(uParam0, joaat("COMPONENT_AT_MRFL_BARREL_01"), joaat("WAPBarrel"), 1, 1);
					break;
			
				case 23:
					func_96(uParam0, joaat("COMPONENT_AT_MRFL_BARREL_02"), joaat("WAPBarrel"), 2, 0);
					break;
			
				case 24:
					func_96(uParam0, 0, joaat("gun_root"), 1, 1);
					break;
			
				case 25:
					func_96(uParam0, joaat("COMPONENT_MARKSMANRIFLE_MK2_CAMO"), joaat("gun_root"), 2, 0);
					break;
			
				case 26:
					func_96(uParam0, joaat("COMPONENT_MARKSMANRIFLE_MK2_CAMO_02"), joaat("gun_root"), 3, 0);
					break;
			
				case 27:
					func_96(uParam0, joaat("COMPONENT_MARKSMANRIFLE_MK2_CAMO_03"), joaat("gun_root"), 4, 0);
					break;
			
				case 28:
					func_96(uParam0, joaat("COMPONENT_MARKSMANRIFLE_MK2_CAMO_04"), joaat("gun_root"), 5, 0);
					break;
			
				case 29:
					func_96(uParam0, joaat("COMPONENT_MARKSMANRIFLE_MK2_CAMO_05"), joaat("gun_root"), 6, 0);
					break;
			
				case 30:
					func_96(uParam0, joaat("COMPONENT_MARKSMANRIFLE_MK2_CAMO_06"), joaat("gun_root"), 7, 0);
					break;
			
				case 31:
					func_96(uParam0, joaat("COMPONENT_MARKSMANRIFLE_MK2_CAMO_07"), joaat("gun_root"), 8, 0);
					break;
			
				case 32:
					func_96(uParam0, joaat("COMPONENT_MARKSMANRIFLE_MK2_CAMO_08"), joaat("gun_root"), 9, 0);
					break;
			
				case 33:
					func_96(uParam0, joaat("COMPONENT_MARKSMANRIFLE_MK2_CAMO_09"), joaat("gun_root"), 10, 0);
					break;
			
				case 34:
					func_96(uParam0, joaat("COMPONENT_MARKSMANRIFLE_MK2_CAMO_10"), joaat("gun_root"), 11, 0);
					break;
			
				case 35:
					func_96(uParam0, joaat("COMPONENT_MARKSMANRIFLE_MK2_CAMO_IND_01"), joaat("gun_root"), 12, 0);
					break;
			}
			break;
	
		case joaat("WEAPON_REVOLVER_MK2"):
			switch (iParam2)
			{
				case 0:
					func_96(uParam0, joaat("COMPONENT_REVOLVER_MK2_CLIP_01"), joaat("WAPClip"), 1, 1);
					break;
			
				case 1:
					func_96(uParam0, joaat("COMPONENT_REVOLVER_MK2_CLIP_TRACER"), joaat("WAPClip"), 2, 0);
					break;
			
				case 2:
					func_96(uParam0, joaat("COMPONENT_REVOLVER_MK2_CLIP_INCENDIARY"), joaat("WAPClip"), 3, 0);
					break;
			
				case 3:
					func_96(uParam0, joaat("COMPONENT_REVOLVER_MK2_CLIP_HOLLOWPOINT"), joaat("WAPClip"), 4, 0);
					break;
			
				case 4:
					func_96(uParam0, joaat("COMPONENT_REVOLVER_MK2_CLIP_FMJ"), joaat("WAPClip"), 5, 0);
					break;
			
				case 5:
					func_96(uParam0, 0, joaat("WAPScop"), 1, 1);
					break;
			
				case 6:
					func_96(uParam0, joaat("COMPONENT_AT_SIGHTS"), joaat("WAPScop"), 2, 0);
					break;
			
				case 7:
					func_96(uParam0, joaat("COMPONENT_AT_SCOPE_MACRO_MK2"), joaat("WAPScop"), 3, 0);
					break;
			
				case 8:
					func_96(uParam0, 0, joaat("WAPFlshLasr"), 1, 1);
					break;
			
				case 9:
					func_96(uParam0, joaat("COMPONENT_AT_PI_FLSH"), joaat("WAPFlshLasr"), 2, 0);
					break;
			
				case 10:
					func_96(uParam0, 0, joaat("WAPSupp"), 1, 1);
					break;
			
				case 11:
					func_96(uParam0, joaat("COMPONENT_AT_PI_COMP_03"), joaat("WAPSupp"), 2, 0);
					break;
			
				case 12:
					func_96(uParam0, 0, joaat("gun_root"), 1, 1);
					break;
			
				case 13:
					func_96(uParam0, joaat("COMPONENT_REVOLVER_MK2_CAMO"), joaat("gun_root"), 2, 0);
					break;
			
				case 14:
					func_96(uParam0, joaat("COMPONENT_REVOLVER_MK2_CAMO_02"), joaat("gun_root"), 3, 0);
					break;
			
				case 15:
					func_96(uParam0, joaat("COMPONENT_REVOLVER_MK2_CAMO_03"), joaat("gun_root"), 4, 0);
					break;
			
				case 16:
					func_96(uParam0, joaat("COMPONENT_REVOLVER_MK2_CAMO_04"), joaat("gun_root"), 5, 0);
					break;
			
				case 17:
					func_96(uParam0, joaat("COMPONENT_REVOLVER_MK2_CAMO_05"), joaat("gun_root"), 6, 0);
					break;
			
				case 18:
					func_96(uParam0, joaat("COMPONENT_REVOLVER_MK2_CAMO_06"), joaat("gun_root"), 7, 0);
					break;
			
				case 19:
					func_96(uParam0, joaat("COMPONENT_REVOLVER_MK2_CAMO_07"), joaat("gun_root"), 8, 0);
					break;
			
				case 20:
					func_96(uParam0, joaat("COMPONENT_REVOLVER_MK2_CAMO_08"), joaat("gun_root"), 9, 0);
					break;
			
				case 21:
					func_96(uParam0, joaat("COMPONENT_REVOLVER_MK2_CAMO_09"), joaat("gun_root"), 10, 0);
					break;
			
				case 22:
					func_96(uParam0, joaat("COMPONENT_REVOLVER_MK2_CAMO_10"), joaat("gun_root"), 11, 0);
					break;
			
				case 23:
					func_96(uParam0, joaat("COMPONENT_REVOLVER_MK2_CAMO_IND_01"), joaat("gun_root"), 12, 0);
					break;
			}
			break;
	
		case joaat("WEAPON_BULLPUPRIFLE_MK2"):
			switch (iParam2)
			{
				case 0:
					func_96(uParam0, joaat("COMPONENT_BULLPUPRIFLE_MK2_CLIP_01"), joaat("WAPClip"), 1, 1);
					break;
			
				case 1:
					func_96(uParam0, joaat("COMPONENT_BULLPUPRIFLE_MK2_CLIP_02"), joaat("WAPClip"), 2, 0);
					break;
			
				case 2:
					func_96(uParam0, joaat("COMPONENT_BULLPUPRIFLE_MK2_CLIP_TRACER"), joaat("WAPClip"), 3, 0);
					break;
			
				case 3:
					func_96(uParam0, joaat("COMPONENT_BULLPUPRIFLE_MK2_CLIP_INCENDIARY"), joaat("WAPClip"), 4, 0);
					break;
			
				case 4:
					func_96(uParam0, joaat("COMPONENT_BULLPUPRIFLE_MK2_CLIP_ARMORPIERCING"), joaat("WAPClip"), 5, 0);
					break;
			
				case 5:
					func_96(uParam0, joaat("COMPONENT_BULLPUPRIFLE_MK2_CLIP_FMJ"), joaat("WAPClip"), 6, 0);
					break;
			
				case 6:
					func_96(uParam0, 0, joaat("WAPFlshLasr"), 1, 1);
					break;
			
				case 7:
					func_96(uParam0, joaat("COMPONENT_AT_AR_FLSH"), joaat("WAPFlshLasr"), 2, 0);
					break;
			
				case 8:
					func_96(uParam0, 0, joaat("WAPScop_2"), 1, 1);
					break;
			
				case 9:
					func_96(uParam0, joaat("COMPONENT_AT_SIGHTS"), joaat("WAPScop_2"), 2, 0);
					break;
			
				case 10:
					func_96(uParam0, joaat("COMPONENT_AT_SCOPE_MACRO_02_MK2"), joaat("WAPScop_2"), 3, 0);
					break;
			
				case 11:
					func_96(uParam0, joaat("COMPONENT_AT_SCOPE_SMALL_MK2"), joaat("WAPScop_2"), 4, 0);
					break;
			
				case 12:
					func_96(uParam0, joaat("COMPONENT_AT_BP_BARREL_01"), joaat("WAPBarrel"), 1, 1);
					break;
			
				case 13:
					func_96(uParam0, joaat("COMPONENT_AT_BP_BARREL_02"), joaat("WAPBarrel"), 2, 0);
					break;
			
				case 14:
					func_96(uParam0, 0, joaat("WAPSupp"), 1, 1);
					break;
			
				case 15:
					func_96(uParam0, joaat("COMPONENT_AT_AR_SUPP"), joaat("WAPSupp"), 2, 0);
					break;
			
				case 16:
					func_96(uParam0, joaat("COMPONENT_AT_MUZZLE_01"), joaat("WAPSupp"), 3, 0);
					break;
			
				case 17:
					func_96(uParam0, joaat("COMPONENT_AT_MUZZLE_02"), joaat("WAPSupp"), 4, 0);
					break;
			
				case 18:
					func_96(uParam0, joaat("COMPONENT_AT_MUZZLE_03"), joaat("WAPSupp"), 5, 0);
					break;
			
				case 19:
					func_96(uParam0, joaat("COMPONENT_AT_MUZZLE_04"), joaat("WAPSupp"), 6, 0);
					break;
			
				case 20:
					func_96(uParam0, joaat("COMPONENT_AT_MUZZLE_05"), joaat("WAPSupp"), 7, 0);
					break;
			
				case 21:
					func_96(uParam0, joaat("COMPONENT_AT_MUZZLE_06"), joaat("WAPSupp"), 8, 0);
					break;
			
				case 22:
					func_96(uParam0, joaat("COMPONENT_AT_MUZZLE_07"), joaat("WAPSupp"), 9, 0);
					break;
			
				case 23:
					func_96(uParam0, 0, joaat("WAPGrip"), 1, 1);
					break;
			
				case 24:
					func_96(uParam0, joaat("COMPONENT_AT_AR_AFGRIP_02"), joaat("WAPGrip"), 2, 0);
					break;
			
				case 25:
					func_96(uParam0, 0, joaat("gun_root"), 1, 1);
					break;
			
				case 26:
					func_96(uParam0, joaat("COMPONENT_BULLPUPRIFLE_MK2_CAMO"), joaat("gun_root"), 2, 0);
					break;
			
				case 27:
					func_96(uParam0, joaat("COMPONENT_BULLPUPRIFLE_MK2_CAMO_02"), joaat("gun_root"), 3, 0);
					break;
			
				case 28:
					func_96(uParam0, joaat("COMPONENT_BULLPUPRIFLE_MK2_CAMO_03"), joaat("gun_root"), 4, 0);
					break;
			
				case 29:
					func_96(uParam0, joaat("COMPONENT_BULLPUPRIFLE_MK2_CAMO_04"), joaat("gun_root"), 5, 0);
					break;
			
				case 30:
					func_96(uParam0, joaat("COMPONENT_BULLPUPRIFLE_MK2_CAMO_05"), joaat("gun_root"), 6, 0);
					break;
			
				case 31:
					func_96(uParam0, joaat("COMPONENT_BULLPUPRIFLE_MK2_CAMO_06"), joaat("gun_root"), 7, 0);
					break;
			
				case 32:
					func_96(uParam0, joaat("COMPONENT_BULLPUPRIFLE_MK2_CAMO_07"), joaat("gun_root"), 8, 0);
					break;
			
				case 33:
					func_96(uParam0, joaat("COMPONENT_BULLPUPRIFLE_MK2_CAMO_08"), joaat("gun_root"), 9, 0);
					break;
			
				case 34:
					func_96(uParam0, joaat("COMPONENT_BULLPUPRIFLE_MK2_CAMO_09"), joaat("gun_root"), 10, 0);
					break;
			
				case 35:
					func_96(uParam0, joaat("COMPONENT_BULLPUPRIFLE_MK2_CAMO_10"), joaat("gun_root"), 11, 0);
					break;
			
				case 36:
					func_96(uParam0, joaat("COMPONENT_BULLPUPRIFLE_MK2_CAMO_IND_01"), joaat("gun_root"), 12, 0);
					break;
			}
			break;
	
		case joaat("WEAPON_RAYPISTOL"):
			switch (iParam2)
			{
				case 0:
					func_96(uParam0, joaat("COMPONENT_RAYPISTOL_VARMOD_XMAS18"), joaat("gun_root"), 1, 0);
					break;
			}
			break;
	
		case joaat("WEAPON_CERAMICPISTOL"):
			switch (iParam2)
			{
				case 0:
					func_96(uParam0, joaat("COMPONENT_CERAMICPISTOL_CLIP_01"), joaat("WAPClip"), 1, 1);
					break;
			
				case 1:
					func_96(uParam0, joaat("COMPONENT_CERAMICPISTOL_CLIP_02"), joaat("WAPClip"), 2, 0);
					break;
			
				case 2:
					func_96(uParam0, joaat("COMPONENT_CERAMICPISTOL_SUPP"), joaat("WAPSupp"), 1, 0);
					break;
			}
			break;
	
		case joaat("WEAPON_HEAVYRIFLE"):
			if (unk_0xA26A9A07F761D8F8())
			{
				switch (iParam2)
				{
					case 0:
						func_96(uParam0, joaat("COMPONENT_HEAVYRIFLE_CLIP_01"), joaat("WAPClip"), 1, 1);
						break;
				
					case 1:
						func_96(uParam0, joaat("COMPONENT_HEAVYRIFLE_CLIP_02"), joaat("WAPClip"), 2, 0);
						break;
				
					case 2:
						func_96(uParam0, joaat("COMPONENT_HEAVYRIFLE_SIGHT_01"), joaat("WAPScop"), 1, 0);
						break;
				
					case 3:
						func_96(uParam0, joaat("COMPONENT_AT_SCOPE_MEDIUM"), joaat("WAPScop"), 2, 0);
						break;
				
					case 4:
						func_96(uParam0, joaat("COMPONENT_AT_AR_FLSH"), joaat("WAPFlshLasr"), 1, 0);
						break;
				
					case 5:
						func_96(uParam0, joaat("COMPONENT_AT_AR_SUPP"), joaat("WAPSupp"), 1, 0);
						break;
				
					case 6:
						func_96(uParam0, joaat("COMPONENT_AT_AR_AFGRIP"), joaat("WAPGrip"), 1, 0);
						break;
				
					case 7:
						func_96(uParam0, joaat("COMPONENT_HEAVYRIFLE_CAMO1"), joaat("gun_root"), 1, 0);
						break;
				}
			}
			else
			{
				switch (iParam2)
				{
					case 0:
						func_96(uParam0, joaat("COMPONENT_HEAVYRIFLE_CLIP_01"), joaat("WAPClip"), 1, 1);
						break;
				
					case 1:
						func_96(uParam0, joaat("COMPONENT_HEAVYRIFLE_CLIP_02"), joaat("WAPClip"), 2, 0);
						break;
				
					case 2:
						func_96(uParam0, joaat("COMPONENT_HEAVYRIFLE_SIGHT_01"), joaat("WAPScop"), 1, 0);
						break;
				
					case 3:
						func_96(uParam0, joaat("COMPONENT_AT_SCOPE_MEDIUM"), joaat("WAPScop"), 2, 0);
						break;
				
					case 4:
						func_96(uParam0, joaat("COMPONENT_AT_AR_FLSH"), joaat("WAPFlshLasr"), 1, 0);
						break;
				
					case 5:
						func_96(uParam0, joaat("COMPONENT_AT_AR_SUPP"), joaat("WAPSupp"), 1, 0);
						break;
				
					case 6:
						func_96(uParam0, joaat("COMPONENT_AT_AR_AFGRIP"), joaat("WAPGrip"), 1, 0);
						break;
				}
			}
			break;
	
		case joaat("WEAPON_TACTICALRIFLE"):
			switch (iParam2)
			{
				case 0:
					func_96(uParam0, joaat("COMPONENT_TACTICALRIFLE_CLIP_01"), joaat("WAPClip"), 1, 1);
					break;
			
				case 1:
					func_96(uParam0, joaat("COMPONENT_TACTICALRIFLE_CLIP_02"), joaat("WAPClip"), 2, 0);
					break;
			
				case 2:
					func_96(uParam0, joaat("COMPONENT_AT_AR_FLSH_REH"), joaat("WAPFlshLasr"), 1, 0);
					break;
			
				case 3:
					func_96(uParam0, joaat("COMPONENT_AT_AR_SUPP_02"), joaat("WAPSupp"), 1, 0);
					break;
			
				case 4:
					func_96(uParam0, joaat("COMPONENT_AT_AR_AFGRIP"), joaat("WAPGrip"), 1, 0);
					break;
			}
			break;
	
		case joaat("WEAPON_KNIFE"):
			if (unk_0xA26A9A07F761D8F8() && func_81(iLocal_55))
			{
				num2 = func_79(iParam1, &num);
			
				if (num2 > 0 && iParam2 >= 0 && iParam2 < num)
				{
					switch (num[iParam2])
					{
						case 370527443:
							func_96(uParam0, num[iParam2], joaat("gun_root"), 1, 0);
							break;
					
						case 1109907117:
							func_96(uParam0, num[iParam2], joaat("gun_root"), 2, 0);
							break;
					
						case 2055456612:
							func_96(uParam0, num[iParam2], joaat("gun_root"), 3, 0);
							break;
					
						case 1690606566:
							func_96(uParam0, num[iParam2], joaat("gun_root"), 4, 0);
							break;
					
						case -1633316949:
							func_96(uParam0, num[iParam2], joaat("gun_root"), 5, 0);
							break;
					
						case -1461476313:
							func_96(uParam0, num[iParam2], joaat("gun_root"), 6, 0);
							break;
					
						case -1770422457:
							func_96(uParam0, num[iParam2], joaat("gun_root"), 7, 0);
							break;
					
						case -2059739958:
							func_96(uParam0, num[iParam2], joaat("gun_root"), 8, 0);
							break;
					
						case -1280001599:
							func_96(uParam0, num[iParam2], joaat("gun_root"), 9, 0);
							break;
					
						case -922885037:
							func_96(uParam0, num[iParam2], joaat("gun_root"), 10, 0);
							break;
					}
				}
			}
			break;
	
		case joaat("WEAPON_BAT"):
			if (unk_0xA26A9A07F761D8F8() && func_81(iLocal_55))
			{
				num2 = func_79(iParam1, &num);
			
				if (num2 > 0 && iParam2 >= 0 && iParam2 < num)
				{
					switch (num[iParam2])
					{
						case 716207715:
							func_96(uParam0, num[iParam2], joaat("gun_root"), 1, 0);
							break;
					
						case 446271089:
							func_96(uParam0, num[iParam2], joaat("gun_root"), 2, 0);
							break;
					
						case 1045616099:
							func_96(uParam0, num[iParam2], joaat("gun_root"), 3, 0);
							break;
					
						case 1336277129:
							func_96(uParam0, num[iParam2], joaat("gun_root"), 4, 0);
							break;
					
						case -513369076:
							func_96(uParam0, num[iParam2], joaat("gun_root"), 5, 0);
							break;
					
						case -447700000:
							func_96(uParam0, num[iParam2], joaat("gun_root"), 6, 0);
							break;
					
						case -149207179:
							func_96(uParam0, num[iParam2], joaat("gun_root"), 7, 0);
							break;
					
						case 166784288:
							func_96(uParam0, num[iParam2], joaat("gun_root"), 8, 0);
							break;
					
						case 2068729789:
							func_96(uParam0, num[iParam2], joaat("gun_root"), 9, 0);
							break;
					
						case 1761389338:
							func_96(uParam0, num[iParam2], joaat("gun_root"), 10, 0);
							break;
					}
				}
			}
			break;
	
		default:
			num15 = func_97(iParam1, &unk38);
		
			if (num15 != -1)
			{
				for (i = 0; i < unk_0x99844FCFECAC01A5(num15); i = i + 1)
				{
					if (unk_0xDDBECC1D7EC5DB2B(num15, i, &num17))
					{
						if (!func_78(num17.f_3))
						{
							if (num17 == joaat("WAPClip") || num17 == joaat("WAPClip_2"))
								num4 = num4 + 1;
							else if (num17 == joaat("WAPFlshLasr") || num17 == joaat("WAPFlshLasr_2"))
								num5 = num5 + 1;
							else if (num17 == joaat("WAPScop") || num17 == joaat("WAPScop_2"))
								num6 = num6 + 1;
							else if (num17 == joaat("WAPRail") || num17 == joaat("WAPRail_2"))
								num7 = num7 + 1;
							else if (num17 == joaat("WAPGrip") || num17 == joaat("WAPGrip_2"))
								num8 = num8 + 1;
							else if (num17 == joaat("WAPSupp") || num17 == joaat("WAPSupp_2"))
								num9 = num9 + 1;
							else if (num17 == 1731751835)
								num10 = num10 + 1;
							else if (num17 == joaat("gun_root"))
								num11 = num11 + 1;
							else if (num17 == joaat("Gun_GripR"))
								num12 = num12 + 1;
							else if (num17 == joaat("WAPBarrel"))
								num13 = num13 + 1;
							else
								num14 = num14 + 1;
						
							if (num16 == iParam2)
							{
								if (num17 == joaat("WAPClip") || num17 == joaat("WAPClip_2"))
									num3 = num4;
								else if (num17 == joaat("WAPFlshLasr") || num17 == joaat("WAPFlshLasr_2"))
									num3 = num5;
								else if (num17 == joaat("WAPScop") || num17 == joaat("WAPScop_2"))
									num3 = num6;
								else if (num17 == joaat("WAPRail") || num17 == joaat("WAPRail_2"))
									num3 = num7;
								else if (num17 == joaat("WAPGrip") || num17 == joaat("WAPGrip_2"))
									num3 = num8;
								else if (num17 == joaat("WAPSupp") || num17 == joaat("WAPSupp_2"))
									num3 = num9;
								else if (num17 == 1731751835)
									num3 = num10;
								else if (num17 == joaat("gun_root"))
									num3 = num11;
								else if (num17 == joaat("Gun_GripR"))
									num3 = num12;
								else if (num17 == joaat("WAPBarrel"))
									num3 = num13;
								else
									num3 = num14;
							
								func_96(uParam0, num17.f_3, num17, num3, num17.f_1);
							}
						
							num16 = num16 + 1;
						}
					}
				}
			}
			break;
	}

	if (bParam3)
		uParam0->f_2 = func_22(iParam1, *uParam0);

	return uParam0->f_4 != 989182658;
}

int func_22(int iParam0, int iParam1) // Position - 0x6027
{
	int value;
	float num;
	int num2;
	int i;
	var unk;
	var unk40;
	int num3;
	int j;
	var unk62;
	var unk101;
	var unk123;
	var unk139;
	float num4;

	value = 0;
	num = 2.5f;

	if (!unk_0xA26A9A07F761D8F8())
	{
		num = 2.5f;
	
		switch (iParam0)
		{
			case joaat("WEAPON_PISTOL"):
				switch (iParam1)
				{
					case joaat("COMPONENT_PISTOL_CLIP_01"):
						value = 120;
						break;
				
					case joaat("COMPONENT_PISTOL_CLIP_02"):
						value = 155;
						break;
				
					case joaat("COMPONENT_AT_PI_FLSH"):
						value = 189;
						break;
				
					case joaat("COMPONENT_AT_PI_SUPP_02"):
						value = 729;
						break;
				
					case joaat("COMPONENT_PISTOL_VARMOD_LUXE"):
						value = 18600;
						break;
				}
				break;
		
			case joaat("WEAPON_COMBATPISTOL"):
				switch (iParam1)
				{
					case joaat("COMPONENT_COMBATPISTOL_CLIP_01"):
						value = 136;
						break;
				
					case joaat("COMPONENT_COMBATPISTOL_CLIP_02"):
						value = 159;
						break;
				
					case joaat("COMPONENT_AT_PI_FLSH"):
						value = 189;
						break;
				
					case joaat("COMPONENT_AT_PI_SUPP"):
						value = 735;
						break;
				
					case joaat("COMPONENT_COMBATPISTOL_VARMOD_LOWRIDER"):
						value = 14500;
						break;
				}
				break;
		
			case joaat("WEAPON_APPISTOL"):
				switch (iParam1)
				{
					case joaat("COMPONENT_APPISTOL_CLIP_01"):
						value = 145;
						break;
				
					case joaat("COMPONENT_APPISTOL_CLIP_02"):
						value = 165;
						break;
				
					case joaat("COMPONENT_AT_PI_FLSH"):
						value = 185;
						break;
				
					case joaat("COMPONENT_AT_PI_SUPP"):
						value = 730;
						break;
				
					case joaat("COMPONENT_APPISTOL_VARMOD_LUXE"):
						value = 15800;
						break;
				}
				break;
		
			case joaat("WEAPON_MICROSMG"):
				switch (iParam1)
				{
					case joaat("COMPONENT_MICROSMG_CLIP_01"):
						value = 120;
						break;
				
					case joaat("COMPONENT_MICROSMG_CLIP_02"):
						value = 137;
						break;
				
					case joaat("COMPONENT_AT_PI_FLSH"):
						value = 190;
						break;
				
					case joaat("COMPONENT_AT_SCOPE_MACRO"):
						value = 549;
						break;
				
					case joaat("COMPONENT_AT_AR_SUPP_02"):
						value = 775;
						break;
				
					case joaat("COMPONENT_MICROSMG_VARMOD_LUXE"):
						value = 15100;
						break;
				}
				break;
		
			case joaat("WEAPON_SMG"):
				switch (iParam1)
				{
					case joaat("COMPONENT_SMG_CLIP_01"):
						value = 119;
						break;
				
					case joaat("COMPONENT_SMG_CLIP_02"):
						value = 134;
						break;
				
					case joaat("COMPONENT_SMG_CLIP_03"):
						value = -1;
						break;
				
					case joaat("COMPONENT_AT_AR_FLSH"):
						value = 210;
						break;
				
					case joaat("COMPONENT_AT_SCOPE_MACRO_02"):
						value = 549;
						break;
				
					case joaat("COMPONENT_AT_PI_SUPP"):
						value = 815;
						break;
				
					case joaat("COMPONENT_SMG_VARMOD_LUXE"):
						value = 19300;
						break;
				}
				break;
		
			case joaat("WEAPON_ASSAULTRIFLE"):
				switch (iParam1)
				{
					case joaat("COMPONENT_ASSAULTRIFLE_CLIP_01"):
						value = 120;
						break;
				
					case joaat("COMPONENT_ASSAULTRIFLE_CLIP_02"):
						value = 129;
						break;
				
					case joaat("COMPONENT_ASSAULTRIFLE_CLIP_03"):
						value = -1;
						break;
				
					case joaat("COMPONENT_AT_AR_AFGRIP"):
						value = 159;
						break;
				
					case joaat("COMPONENT_AT_AR_FLSH"):
						value = 189;
						break;
				
					case joaat("COMPONENT_AT_SCOPE_MACRO"):
						value = 565;
						break;
				
					case joaat("COMPONENT_AT_AR_SUPP_02"):
						value = 810;
						break;
				
					case joaat("COMPONENT_ASSAULTRIFLE_VARMOD_LUXE"):
						value = 14400;
						break;
				}
				break;
		
			case joaat("WEAPON_CARBINERIFLE"):
				switch (iParam1)
				{
					case joaat("COMPONENT_CARBINERIFLE_CLIP_01"):
						value = 99;
						break;
				
					case joaat("COMPONENT_CARBINERIFLE_CLIP_02"):
						value = 105;
						break;
				
					case joaat("COMPONENT_CARBINERIFLE_CLIP_03"):
						value = -1;
						break;
				
					case joaat("COMPONENT_AT_AR_AFGRIP"):
						value = 132;
						break;
				
					case joaat("COMPONENT_AT_AR_FLSH"):
						value = 150;
						break;
				
					case joaat("COMPONENT_AT_SCOPE_MEDIUM"):
						value = 450;
						break;
				
					case joaat("COMPONENT_AT_AR_SUPP"):
						value = 815;
						break;
				
					case joaat("COMPONENT_CARBINERIFLE_VARMOD_LUXE"):
						value = 17900;
						break;
				}
				break;
		
			case joaat("WEAPON_ADVANCEDRIFLE"):
				switch (iParam1)
				{
					case joaat("COMPONENT_ADVANCEDRIFLE_CLIP_01"):
						value = 110;
						break;
				
					case joaat("COMPONENT_ADVANCEDRIFLE_CLIP_02"):
						value = 124;
						break;
				
					case joaat("COMPONENT_AT_AR_FLSH"):
						value = 159;
						break;
				
					case joaat("COMPONENT_AT_SCOPE_SMALL"):
						value = 450;
						break;
				
					case joaat("COMPONENT_AT_AR_SUPP"):
						value = 812;
						break;
				
					case joaat("COMPONENT_ADVANCEDRIFLE_VARMOD_LUXE"):
						value = 16500;
						break;
				}
				break;
		
			case joaat("WEAPON_MG"):
				switch (iParam1)
				{
					case joaat("COMPONENT_MG_CLIP_01"):
						value = 135;
						break;
				
					case joaat("COMPONENT_MG_CLIP_02"):
						value = 145;
						break;
				
					case joaat("COMPONENT_AT_SCOPE_SMALL_02"):
						value = 450;
						break;
				
					case joaat("COMPONENT_MG_VARMOD_LOWRIDER"):
						value = 15600;
						break;
				}
				break;
		
			case joaat("WEAPON_COMBATMG"):
				switch (iParam1)
				{
					case joaat("COMPONENT_COMBATMG_CLIP_01"):
						value = 119;
						break;
				
					case joaat("COMPONENT_COMBATMG_CLIP_02"):
						value = 126;
						break;
				
					case joaat("COMPONENT_AT_AR_AFGRIP"):
						value = 129;
						break;
				
					case joaat("COMPONENT_AT_SCOPE_MEDIUM"):
						value = 559;
						break;
				
					case joaat("COMPONENT_COMBATMG_VARMOD_LOWRIDER"):
						value = 14000;
						break;
				}
				break;
		
			case joaat("WEAPON_PUMPSHOTGUN"):
				switch (iParam1)
				{
					case joaat("COMPONENT_AT_AR_FLSH"):
						value = 189;
						break;
				
					case joaat("COMPONENT_AT_SR_SUPP"):
						value = 975;
						break;
				
					case joaat("COMPONENT_PUMPSHOTGUN_VARMOD_LOWRIDER"):
						value = 16900;
						break;
				}
				break;
		
			case joaat("WEAPON_ASSAULTSHOTGUN"):
				switch (iParam1)
				{
					case joaat("COMPONENT_ASSAULTSHOTGUN_CLIP_01"):
						value = 129;
						break;
				
					case joaat("COMPONENT_ASSAULTSHOTGUN_CLIP_02"):
						value = 139;
						break;
				
					case joaat("COMPONENT_AT_AR_AFGRIP"):
						value = 150;
						break;
				
					case joaat("COMPONENT_AT_AR_FLSH"):
						value = 225;
						break;
				
					case joaat("COMPONENT_AT_AR_SUPP"):
						value = 899;
						break;
				}
				break;
		
			case joaat("WEAPON_SNIPERRIFLE"):
				switch (iParam1)
				{
					case joaat("COMPONENT_SNIPERRIFLE_CLIP_01"):
						value = -1;
						break;
				
					case joaat("COMPONENT_AT_SCOPE_LARGE"):
						value = 559;
						break;
				
					case joaat("COMPONENT_AT_SCOPE_MAX"):
						value = 975;
						break;
				
					case joaat("COMPONENT_AT_AR_SUPP_02"):
						value = 920;
						break;
				
					case joaat("COMPONENT_SNIPERRIFLE_VARMOD_LUXE"):
						value = 13000;
						break;
				}
				break;
		
			case joaat("WEAPON_HEAVYSNIPER"):
				switch (iParam1)
				{
					case joaat("COMPONENT_HEAVYSNIPER_CLIP_01"):
						value = -1;
						break;
				
					case joaat("COMPONENT_AT_SCOPE_LARGE"):
						value = 575;
						break;
				
					case joaat("COMPONENT_AT_SCOPE_MAX"):
						value = 999;
						break;
				}
				break;
		
			case joaat("WEAPON_GRENADELAUNCHER"):
				switch (iParam1)
				{
					case joaat("COMPONENT_AT_AR_AFGRIP"):
						value = 128;
						break;
				
					case joaat("COMPONENT_AT_AR_FLSH"):
						value = 185;
						break;
				
					case joaat("COMPONENT_AT_SCOPE_SMALL"):
						value = 525;
						break;
				}
				break;
		
			case joaat("WEAPON_MINIGUN"):
				switch (iParam1)
				{
					case joaat("COMPONENT_MINIGUN_CLIP_01"):
						value = -1;
						break;
				}
				break;
		
			case joaat("WEAPON_ASSAULTSMG"):
				switch (iParam1)
				{
					case joaat("COMPONENT_ASSAULTSMG_CLIP_01"):
						value = 110;
						break;
				
					case joaat("COMPONENT_ASSAULTSMG_CLIP_02"):
						value = 9700;
						break;
				
					case joaat("COMPONENT_AT_AR_FLSH"):
						value = 2275;
						break;
				
					case joaat("COMPONENT_AT_SCOPE_MACRO"):
						value = 10875;
						break;
				
					case joaat("COMPONENT_AT_AR_SUPP_02"):
						value = 12400;
						break;
				
					case joaat("COMPONENT_ASSAULTSMG_VARMOD_LOWRIDER"):
						value = 17600;
						break;
				}
			
				if (_IS_EXCLUSIVE_CONTENT_UNLOCKED() && func_76() || func_75())
					value = 0;
				break;
		
			case joaat("WEAPON_BULLPUPSHOTGUN"):
				switch (iParam1)
				{
					case joaat("COMPONENT_AT_AR_AFGRIP"):
						value = 4100;
						break;
				
					case joaat("COMPONENT_AT_AR_FLSH"):
						value = 2300;
						break;
				
					case joaat("COMPONENT_AT_AR_SUPP_02"):
						value = 12450;
						break;
				}
			
				if (_IS_EXCLUSIVE_CONTENT_UNLOCKED() && func_76() || func_75())
					value = 0;
				break;
		
			case joaat("WEAPON_PISTOL50"):
				switch (iParam1)
				{
					case joaat("COMPONENT_PISTOL50_CLIP_01"):
						value = 0;
						break;
				
					case joaat("COMPONENT_PISTOL50_CLIP_02"):
						value = 9500;
						break;
				
					case joaat("COMPONENT_AT_PI_FLSH"):
						value = 2000;
						break;
				
					case joaat("COMPONENT_AT_AR_SUPP_02"):
						value = 12250;
						break;
				
					case joaat("COMPONENT_PISTOL50_VARMOD_LUXE"):
						value = 20000;
						break;
				}
			
				if (_IS_EXCLUSIVE_CONTENT_UNLOCKED() && func_76() || func_75())
					value = 0;
				break;
		
			case joaat("WEAPON_SAWNOFFSHOTGUN"):
				switch (iParam1)
				{
					case joaat("COMPONENT_SAWNOFFSHOTGUN_VARMOD_LUXE"):
						value = 13700;
						break;
				}
				break;
		
			case joaat("WEAPON_MARKSMANRIFLE"):
				switch (iParam1)
				{
					case joaat("COMPONENT_MARKSMANRIFLE_CLIP_01"):
						value = 0;
						break;
				
					case joaat("COMPONENT_MARKSMANRIFLE_CLIP_02"):
						value = 3612;
						break;
				
					case joaat("COMPONENT_AT_SCOPE_LARGE_FIXED_ZOOM"):
						value = 0;
						break;
				
					case joaat("COMPONENT_AT_AR_FLSH"):
						value = 1020;
						break;
				
					case joaat("COMPONENT_AT_AR_SUPP"):
						value = 5000;
						break;
				
					case joaat("COMPONENT_AT_AR_AFGRIP"):
						value = 1760;
						break;
				
					case joaat("COMPONENT_MARKSMANRIFLE_VARMOD_LUXE"):
						value = 17200;
						break;
				}
				break;
		
			case joaat("WEAPON_HEAVYPISTOL"):
				switch (iParam1)
				{
					case joaat("COMPONENT_HEAVYPISTOL_CLIP_01"):
						value = 0;
						break;
				
					case joaat("COMPONENT_HEAVYPISTOL_CLIP_02"):
						value = 3680;
						break;
				
					case joaat("COMPONENT_AT_PI_FLSH"):
						value = 710;
						break;
				
					case joaat("COMPONENT_AT_PI_SUPP"):
						value = 4800;
						break;
				
					case joaat("COMPONENT_HEAVYPISTOL_VARMOD_LUXE"):
						value = 12000;
						break;
				}
				break;
		
			case joaat("WEAPON_KNUCKLE"):
				switch (iParam1)
				{
					case joaat("COMPONENT_KNUCKLE_VARMOD_PIMP"):
						value = 4900;
						break;
				
					case joaat("COMPONENT_KNUCKLE_VARMOD_BALLAS"):
						value = 5600;
						break;
				
					case joaat("COMPONENT_KNUCKLE_VARMOD_DOLLAR"):
						value = 5500;
						break;
				
					case joaat("COMPONENT_KNUCKLE_VARMOD_DIAMOND"):
						value = 5200;
						break;
				
					case joaat("COMPONENT_KNUCKLE_VARMOD_HATE"):
						value = 4600;
						break;
				
					case joaat("COMPONENT_KNUCKLE_VARMOD_LOVE"):
						value = 4700;
						break;
				
					case joaat("COMPONENT_KNUCKLE_VARMOD_PLAYER"):
						value = 4800;
						break;
				
					case joaat("COMPONENT_KNUCKLE_VARMOD_KING"):
						value = 4300;
						break;
				
					case joaat("COMPONENT_KNUCKLE_VARMOD_VAGOS"):
						value = 4000;
						break;
				}
				break;
		
			case joaat("WEAPON_BULLPUPRIFLE"):
				switch (iParam1)
				{
					case joaat("COMPONENT_BULLPUPRIFLE_CLIP_01"):
						value = 108;
						break;
				
					case joaat("COMPONENT_BULLPUPRIFLE_CLIP_02"):
						value = 9950;
						break;
				
					case joaat("COMPONENT_AT_AR_FLSH"):
						value = 2575;
						break;
				
					case joaat("COMPONENT_AT_SCOPE_MACRO"):
						value = 11350;
						break;
				
					case joaat("COMPONENT_AT_AR_SUPP_02"):
						value = 12500;
						break;
				
					case joaat("COMPONENT_AT_AR_AFGRIP"):
						value = 4275;
						break;
				
					case joaat("COMPONENT_BULLPUPRIFLE_VARMOD_LOW"):
						value = 16600;
						break;
				}
				break;
		
			case joaat("WEAPON_SNSPISTOL"):
				switch (iParam1)
				{
					case joaat("COMPONENT_SNSPISTOL_CLIP_01"):
						value = 29;
						break;
				
					case joaat("COMPONENT_SNSPISTOL_CLIP_02"):
						value = 9150;
						break;
				
					case joaat("COMPONENT_SNSPISTOL_VARMOD_LOWRIDER"):
						value = 13900;
						break;
				}
				break;
		
			case joaat("WEAPON_SPECIALCARBINE"):
				switch (iParam1)
				{
					case joaat("COMPONENT_SPECIALCARBINE_CLIP_01"):
						value = 108;
						break;
				
					case joaat("COMPONENT_SPECIALCARBINE_CLIP_02"):
						value = 9975;
						break;
				
					case joaat("COMPONENT_SPECIALCARBINE_CLIP_03"):
						value = -1;
						break;
				
					case joaat("COMPONENT_AT_AR_FLSH"):
						value = 2525;
						break;
				
					case joaat("COMPONENT_AT_SCOPE_MEDIUM"):
						value = 11550;
						break;
				
					case joaat("COMPONENT_AT_AR_SUPP_02"):
						value = 12500;
						break;
				
					case joaat("COMPONENT_SPECIALCARBINE_VARMOD_LOWRIDER"):
						value = 18000;
						break;
				}
				break;
		
			case joaat("WEAPON_MACHINEPISTOL"):
				switch (iParam1)
				{
					case joaat("COMPONENT_MACHINEPISTOL_CLIP_01"):
						value = 0;
						break;
				
					case joaat("COMPONENT_MACHINEPISTOL_CLIP_02"):
						value = 3680;
						break;
				
					case joaat("COMPONENT_MACHINEPISTOL_CLIP_03"):
						value = -1;
						break;
				
					case joaat("COMPONENT_AT_PI_SUPP"):
						value = 4840;
						break;
				}
				break;
		
			default:
				num2 = func_97(iParam0, &unk);
			
				if (num2 != -1)
				{
					for (i = 0; i < unk_0x99844FCFECAC01A5(num2); i = i + 1)
					{
						if (unk_0xDDBECC1D7EC5DB2B(num2, i, &unk40))
						{
							if (!func_78(unk40.f_3))
							{
								if (unk40.f_3 == iParam1)
								{
									num = 1f;
								
									if (!func_73(iParam1))
										unk40.f_5 = -1;
								
									if (unk40.f_5 == -1)
										value = -1;
									else
										value = unk40.f_5;
								
									if (iParam0 == joaat("WEAPON_HAMMER"))
										if (_IS_EXCLUSIVE_CONTENT_UNLOCKED() && func_76() || func_75())
											value = 0;
								}
							}
						}
					}
				}
				break;
		}
	}
	else
	{
		num = 2.5f;
	
		switch (iParam0)
		{
			case joaat("WEAPON_PISTOL"):
				switch (iParam1)
				{
					case joaat("COMPONENT_PISTOL_CLIP_01"):
						value = 120;
						break;
				
					case joaat("COMPONENT_PISTOL_CLIP_02"):
						value = 9175;
						value = SYSTEM::FLOOR(SYSTEM::TO_FLOAT(value) * Global_262145.f_2895);
						break;
				
					case joaat("COMPONENT_AT_PI_FLSH"):
						value = 1675;
						value = SYSTEM::FLOOR(SYSTEM::TO_FLOAT(value) * Global_262145.f_4347);
						break;
				
					case joaat("COMPONENT_AT_PI_SUPP_02"):
						value = 12050;
						value = SYSTEM::FLOOR(SYSTEM::TO_FLOAT(value) * Global_262145.f_4348);
						break;
				
					case joaat("COMPONENT_PISTOL_VARMOD_LUXE"):
						value = Global_262145.f_11040;
						value = SYSTEM::FLOOR(SYSTEM::TO_FLOAT(value) * Global_262145.f_4425);
						break;
				
					case joaat("COMPONENT_GUNRUN_MK2_UPGRADE"):
						value = Global_262145.f_21193;
						break;
				}
				break;
		
			case joaat("WEAPON_COMBATPISTOL"):
				switch (iParam1)
				{
					case joaat("COMPONENT_COMBATPISTOL_CLIP_01"):
						value = 136;
						break;
				
					case joaat("COMPONENT_COMBATPISTOL_CLIP_02"):
						value = Global_262145.f_21079;
						value = SYSTEM::FLOOR(SYSTEM::TO_FLOAT(value) * Global_262145.f_2896);
						break;
				
					case joaat("COMPONENT_AT_PI_FLSH"):
						value = 1825;
						value = SYSTEM::FLOOR(SYSTEM::TO_FLOAT(value) * Global_262145.f_4349);
						break;
				
					case joaat("COMPONENT_AT_PI_SUPP"):
						value = Global_262145.f_21080;
						value = SYSTEM::FLOOR(SYSTEM::TO_FLOAT(value) * Global_262145.f_4350);
						break;
				
					case joaat("COMPONENT_COMBATPISTOL_VARMOD_LOWRIDER"):
						value = Global_262145.f_12431;
						value = SYSTEM::FLOOR(SYSTEM::TO_FLOAT(value) * Global_262145.f_4420);
						break;
				}
				break;
		
			case joaat("WEAPON_APPISTOL"):
				switch (iParam1)
				{
					case joaat("COMPONENT_APPISTOL_CLIP_01"):
						value = 145;
						break;
				
					case joaat("COMPONENT_APPISTOL_CLIP_02"):
						value = 9400;
						value = SYSTEM::FLOOR(SYSTEM::TO_FLOAT(value) * Global_262145.f_2898);
						break;
				
					case joaat("COMPONENT_AT_PI_FLSH"):
						value = 1975;
						value = SYSTEM::FLOOR(SYSTEM::TO_FLOAT(value) * Global_262145.f_4351);
						break;
				
					case joaat("COMPONENT_AT_PI_SUPP"):
						value = 12200;
						value = SYSTEM::FLOOR(SYSTEM::TO_FLOAT(value) * Global_262145.f_4352);
						break;
				
					case joaat("COMPONENT_APPISTOL_VARMOD_LUXE"):
						value = Global_262145.f_11039;
						value = SYSTEM::FLOOR(SYSTEM::TO_FLOAT(value) * Global_262145.f_4414);
						break;
				
					case joaat("COMPONENT_APPISTOL_VARMOD_SECURITY"):
						value = Global_262145.f_32010;
						break;
				}
				break;
		
			case joaat("WEAPON_MICROSMG"):
				switch (iParam1)
				{
					case joaat("COMPONENT_MICROSMG_CLIP_01"):
						value = 120;
						break;
				
					case joaat("COMPONENT_MICROSMG_CLIP_02"):
						value = 9325;
						value = SYSTEM::FLOOR(SYSTEM::TO_FLOAT(value) * Global_262145.f_2899);
						break;
				
					case joaat("COMPONENT_AT_PI_FLSH"):
						value = 1900;
						value = SYSTEM::FLOOR(SYSTEM::TO_FLOAT(value) * Global_262145.f_4355);
						break;
				
					case joaat("COMPONENT_AT_SCOPE_MACRO"):
						value = 10800;
						value = SYSTEM::FLOOR(SYSTEM::TO_FLOAT(value) * Global_262145.f_4357);
						break;
				
					case joaat("COMPONENT_AT_AR_SUPP_02"):
						value = 12150;
						value = SYSTEM::FLOOR(SYSTEM::TO_FLOAT(value) * Global_262145.f_4356);
						break;
				
					case joaat("COMPONENT_MICROSMG_VARMOD_LUXE"):
						value = Global_262145.f_11043;
						value = SYSTEM::FLOOR(SYSTEM::TO_FLOAT(value) * Global_262145.f_4424);
						break;
				
					case joaat("COMPONENT_MICROSMG_VARMOD_SECURITY"):
						value = Global_262145.f_32009;
						break;
				
					case -1566778158:
						value = 0;
						break;
				}
				break;
		
			case joaat("WEAPON_SMG"):
				switch (iParam1)
				{
					case joaat("COMPONENT_SMG_CLIP_01"):
						value = 119;
						break;
				
					case joaat("COMPONENT_SMG_CLIP_02"):
						value = 9475;
						value = SYSTEM::FLOOR(SYSTEM::TO_FLOAT(value) * Global_262145.f_2900);
						break;
				
					case joaat("COMPONENT_SMG_CLIP_03"):
						value = Global_262145.f_16587;
						break;
				
					case joaat("COMPONENT_AT_AR_FLSH"):
						value = 2050;
						value = SYSTEM::FLOOR(SYSTEM::TO_FLOAT(value) * Global_262145.f_4358);
						break;
				
					case joaat("COMPONENT_AT_SCOPE_MACRO_02"):
						value = 10825;
						value = SYSTEM::FLOOR(SYSTEM::TO_FLOAT(value) * Global_262145.f_4360);
						break;
				
					case joaat("COMPONENT_AT_PI_SUPP"):
						value = 12250;
						value = SYSTEM::FLOOR(SYSTEM::TO_FLOAT(value) * Global_262145.f_4359);
						break;
				
					case joaat("COMPONENT_SMG_VARMOD_LUXE"):
						value = Global_262145.f_11042;
						value = SYSTEM::FLOOR(SYSTEM::TO_FLOAT(value) * Global_262145.f_4429);
						break;
				
					case joaat("COMPONENT_GUNRUN_MK2_UPGRADE"):
						value = Global_262145.f_21194;
						break;
				}
				break;
		
			case joaat("WEAPON_ASSAULTRIFLE"):
				switch (iParam1)
				{
					case joaat("COMPONENT_ASSAULTRIFLE_CLIP_01"):
						value = 120;
						break;
				
					case joaat("COMPONENT_ASSAULTRIFLE_CLIP_02"):
						value = 9550;
						value = SYSTEM::FLOOR(SYSTEM::TO_FLOAT(value) * Global_262145.f_2902);
						break;
				
					case joaat("COMPONENT_ASSAULTRIFLE_CLIP_03"):
						value = Global_262145.f_16582;
						break;
				
					case joaat("COMPONENT_AT_AR_AFGRIP"):
						value = 4200;
						value = SYSTEM::FLOOR(SYSTEM::TO_FLOAT(value) * Global_262145.f_4368);
						break;
				
					case joaat("COMPONENT_AT_AR_FLSH"):
						value = 2125;
						value = SYSTEM::FLOOR(SYSTEM::TO_FLOAT(value) * Global_262145.f_4365);
						break;
				
					case joaat("COMPONENT_AT_SCOPE_MACRO"):
						value = 10850;
						value = SYSTEM::FLOOR(SYSTEM::TO_FLOAT(value) * Global_262145.f_4367);
						break;
				
					case joaat("COMPONENT_AT_AR_SUPP_02"):
						value = 12300;
						value = SYSTEM::FLOOR(SYSTEM::TO_FLOAT(value) * Global_262145.f_4366);
						break;
				
					case joaat("COMPONENT_ASSAULTRIFLE_VARMOD_LUXE"):
						value = Global_262145.f_11036;
						value = SYSTEM::FLOOR(SYSTEM::TO_FLOAT(value) * Global_262145.f_4415);
						break;
				
					case joaat("COMPONENT_GUNRUN_MK2_UPGRADE"):
						value = Global_262145.f_21196;
						break;
				}
				break;
		
			case joaat("WEAPON_CARBINERIFLE"):
				switch (iParam1)
				{
					case joaat("COMPONENT_CARBINERIFLE_CLIP_01"):
						value = 99;
						break;
				
					case joaat("COMPONENT_CARBINERIFLE_CLIP_02"):
						value = 9775;
						value = SYSTEM::FLOOR(SYSTEM::TO_FLOAT(value) * Global_262145.f_2903);
						break;
				
					case joaat("COMPONENT_CARBINERIFLE_CLIP_03"):
						value = Global_262145.f_16581;
						break;
				
					case joaat("COMPONENT_AT_AR_AFGRIP"):
						value = 4350;
						value = SYSTEM::FLOOR(SYSTEM::TO_FLOAT(value) * Global_262145.f_4376);
						break;
				
					case joaat("COMPONENT_AT_AR_FLSH"):
						value = 2350;
						value = SYSTEM::FLOOR(SYSTEM::TO_FLOAT(value) * Global_262145.f_4373);
						break;
				
					case joaat("COMPONENT_AT_SCOPE_MEDIUM"):
						value = 10900;
						value = SYSTEM::FLOOR(SYSTEM::TO_FLOAT(value) * Global_262145.f_4375);
						break;
				
					case joaat("COMPONENT_AT_AR_SUPP"):
						value = 12450;
						value = SYSTEM::FLOOR(SYSTEM::TO_FLOAT(value) * Global_262145.f_4374);
						break;
				
					case joaat("COMPONENT_CARBINERIFLE_VARMOD_LUXE"):
						value = Global_262145.f_11038;
						value = SYSTEM::FLOOR(SYSTEM::TO_FLOAT(value) * Global_262145.f_4418);
						break;
				
					case joaat("COMPONENT_GUNRUN_MK2_UPGRADE"):
						value = Global_262145.f_21197;
						break;
				}
				break;
		
			case joaat("WEAPON_ADVANCEDRIFLE"):
				switch (iParam1)
				{
					case joaat("COMPONENT_ADVANCEDRIFLE_CLIP_01"):
						value = 110;
						break;
				
					case joaat("COMPONENT_ADVANCEDRIFLE_CLIP_02"):
						value = 9925;
						value = SYSTEM::FLOOR(SYSTEM::TO_FLOAT(value) * Global_262145.f_2905);
						break;
				
					case joaat("COMPONENT_AT_AR_FLSH"):
						value = 2425;
						value = SYSTEM::FLOOR(SYSTEM::TO_FLOAT(value) * Global_262145.f_4378);
						break;
				
					case joaat("COMPONENT_AT_SCOPE_SMALL"):
						value = 10950;
						value = SYSTEM::FLOOR(SYSTEM::TO_FLOAT(value) * Global_262145.f_4380);
						break;
				
					case joaat("COMPONENT_AT_AR_SUPP"):
						value = 12500;
						value = SYSTEM::FLOOR(SYSTEM::TO_FLOAT(value) * Global_262145.f_4379);
						break;
				
					case joaat("COMPONENT_ADVANCEDRIFLE_VARMOD_LUXE"):
						value = Global_262145.f_11037;
						value = SYSTEM::FLOOR(SYSTEM::TO_FLOAT(value) * Global_262145.f_4413);
						break;
				}
				break;
		
			case joaat("WEAPON_MG"):
				switch (iParam1)
				{
					case joaat("COMPONENT_MG_CLIP_01"):
						value = 135;
						break;
				
					case joaat("COMPONENT_MG_CLIP_02"):
						value = 9850;
						value = SYSTEM::FLOOR(SYSTEM::TO_FLOAT(value) * Global_262145.f_2906);
						break;
				
					case joaat("COMPONENT_AT_SCOPE_SMALL_02"):
						value = 10925;
						value = SYSTEM::FLOOR(SYSTEM::TO_FLOAT(value) * Global_262145.f_4381);
						break;
				
					case joaat("COMPONENT_MG_VARMOD_LOWRIDER"):
						value = Global_262145.f_12432;
						value = SYSTEM::FLOOR(SYSTEM::TO_FLOAT(value) * Global_262145.f_4423);
						break;
				}
				break;
		
			case joaat("WEAPON_COMBATMG"):
				switch (iParam1)
				{
					case joaat("COMPONENT_COMBATMG_CLIP_01"):
						value = 119;
						break;
				
					case joaat("COMPONENT_COMBATMG_CLIP_02"):
						value = 10000;
						value = SYSTEM::FLOOR(SYSTEM::TO_FLOAT(value) * Global_262145.f_2907);
						break;
				
					case joaat("COMPONENT_AT_AR_AFGRIP"):
						value = 4425;
						value = SYSTEM::FLOOR(SYSTEM::TO_FLOAT(value) * Global_262145.f_4403);
						break;
				
					case joaat("COMPONENT_AT_SCOPE_MEDIUM"):
						value = 10975;
						value = SYSTEM::FLOOR(SYSTEM::TO_FLOAT(value) * Global_262145.f_4404);
						break;
				
					case joaat("COMPONENT_COMBATMG_VARMOD_LOWRIDER"):
						value = Global_262145.f_12433;
						value = SYSTEM::FLOOR(SYSTEM::TO_FLOAT(value) * Global_262145.f_4419);
						break;
				
					case joaat("COMPONENT_GUNRUN_MK2_UPGRADE"):
						value = Global_262145.f_21195;
						break;
				}
				break;
		
			case joaat("WEAPON_PUMPSHOTGUN"):
				switch (iParam1)
				{
					case joaat("COMPONENT_AT_AR_FLSH"):
						value = 1750;
						value = SYSTEM::FLOOR(SYSTEM::TO_FLOAT(value) * Global_262145.f_4385);
						break;
				
					case joaat("COMPONENT_AT_SR_SUPP"):
						value = 12350;
						value = SYSTEM::FLOOR(SYSTEM::TO_FLOAT(value) * Global_262145.f_4386);
						break;
				
					case joaat("COMPONENT_PUMPSHOTGUN_VARMOD_LOWRIDER"):
						value = Global_262145.f_12428;
						value = SYSTEM::FLOOR(SYSTEM::TO_FLOAT(value) * Global_262145.f_4427);
						break;
				
					case joaat("COMPONENT_GUNRUN_MK2_UPGRADE"):
						value = Global_262145.f_22933;
						break;
				
					case joaat("COMPONENT_PUMPSHOTGUN_VARMOD_SECURITY"):
						value = Global_262145.f_32007;
						break;
				
					case 330905451:
						value = 0;
						break;
				}
				break;
		
			case joaat("WEAPON_ASSAULTSHOTGUN"):
				switch (iParam1)
				{
					case joaat("COMPONENT_ASSAULTSHOTGUN_CLIP_01"):
						value = 129;
						break;
				
					case joaat("COMPONENT_ASSAULTSHOTGUN_CLIP_02"):
						value = 9625;
						value = SYSTEM::FLOOR(SYSTEM::TO_FLOAT(value) * Global_262145.f_2909);
						break;
				
					case joaat("COMPONENT_AT_AR_AFGRIP"):
						value = 4275;
						value = SYSTEM::FLOOR(SYSTEM::TO_FLOAT(value) * Global_262145.f_4389);
						break;
				
					case joaat("COMPONENT_AT_AR_FLSH"):
						value = 2200;
						value = SYSTEM::FLOOR(SYSTEM::TO_FLOAT(value) * Global_262145.f_4390);
						break;
				
					case joaat("COMPONENT_AT_AR_SUPP"):
						value = 12350;
						value = SYSTEM::FLOOR(SYSTEM::TO_FLOAT(value) * Global_262145.f_4391);
						break;
				}
				break;
		
			case joaat("WEAPON_SNIPERRIFLE"):
				switch (iParam1)
				{
					case joaat("COMPONENT_SNIPERRIFLE_CLIP_01"):
						value = -1;
						break;
				
					case joaat("COMPONENT_AT_SCOPE_LARGE"):
						value = 12400;
						value = SYSTEM::FLOOR(SYSTEM::TO_FLOAT(value) * Global_262145.f_4392);
						break;
				
					case joaat("COMPONENT_AT_SCOPE_MAX"):
						value = 12500;
						value = SYSTEM::FLOOR(SYSTEM::TO_FLOAT(value) * Global_262145.f_4393);
						break;
				
					case joaat("COMPONENT_AT_AR_SUPP_02"):
						value = 12050;
						value = SYSTEM::FLOOR(SYSTEM::TO_FLOAT(value) * Global_262145.f_4394);
						break;
				
					case joaat("COMPONENT_SNIPERRIFLE_VARMOD_LUXE"):
						value = Global_262145.f_11045;
						value = SYSTEM::FLOOR(SYSTEM::TO_FLOAT(value) * Global_262145.f_4430);
						break;
				}
				break;
		
			case joaat("WEAPON_HEAVYSNIPER"):
				switch (iParam1)
				{
					case joaat("COMPONENT_HEAVYSNIPER_CLIP_01"):
						value = -1;
						break;
				
					case joaat("COMPONENT_AT_SCOPE_LARGE"):
						value = 99;
						value = SYSTEM::FLOOR(SYSTEM::TO_FLOAT(value) * Global_262145.f_4395);
						break;
				
					case joaat("COMPONENT_AT_SCOPE_MAX"):
						value = 12500;
						value = SYSTEM::FLOOR(SYSTEM::TO_FLOAT(value) * Global_262145.f_4396);
						break;
				
					case joaat("COMPONENT_GUNRUN_MK2_UPGRADE"):
						value = Global_262145.f_21198;
						break;
				}
				break;
		
			case joaat("WEAPON_GRENADELAUNCHER"):
				switch (iParam1)
				{
					case joaat("COMPONENT_AT_AR_AFGRIP"):
						value = 4500;
						value = SYSTEM::FLOOR(SYSTEM::TO_FLOAT(value) * Global_262145.f_4405);
						break;
				
					case joaat("COMPONENT_AT_AR_FLSH"):
						value = 2500;
						value = SYSTEM::FLOOR(SYSTEM::TO_FLOAT(value) * Global_262145.f_4401);
						break;
				
					case joaat("COMPONENT_AT_SCOPE_SMALL"):
						value = 11000;
						value = SYSTEM::FLOOR(SYSTEM::TO_FLOAT(value) * Global_262145.f_4402);
						break;
				}
				break;
		
			case joaat("WEAPON_MINIGUN"):
				switch (iParam1)
				{
					case joaat("COMPONENT_MINIGUN_CLIP_01"):
						value = -1;
						break;
				}
				break;
		
			case joaat("WEAPON_ASSAULTSMG"):
				switch (iParam1)
				{
					case joaat("COMPONENT_ASSAULTSMG_CLIP_01"):
						value = 110;
						break;
				
					case joaat("COMPONENT_ASSAULTSMG_CLIP_02"):
						value = 9700;
						value = SYSTEM::FLOOR(SYSTEM::TO_FLOAT(value) * Global_262145.f_2901);
						break;
				
					case joaat("COMPONENT_AT_AR_FLSH"):
						value = 2275;
						value = SYSTEM::FLOOR(SYSTEM::TO_FLOAT(value) * Global_262145.f_4361);
						break;
				
					case joaat("COMPONENT_AT_SCOPE_MACRO"):
						value = 10875;
						value = SYSTEM::FLOOR(SYSTEM::TO_FLOAT(value) * Global_262145.f_4364);
						break;
				
					case joaat("COMPONENT_AT_AR_SUPP_02"):
						value = 12400;
						value = SYSTEM::FLOOR(SYSTEM::TO_FLOAT(value) * Global_262145.f_4362);
						break;
				
					case joaat("COMPONENT_ASSAULTSMG_VARMOD_LOWRIDER"):
						value = Global_262145.f_12429;
						value = SYSTEM::FLOOR(SYSTEM::TO_FLOAT(value) * Global_262145.f_4363);
						break;
				}
				break;
		
			case joaat("WEAPON_GUSENBERG"):
				switch (iParam1)
				{
					case joaat("COMPONENT_GUSENBERG_CLIP_01"):
						value = 0;
						break;
				
					case joaat("COMPONENT_GUSENBERG_CLIP_02"):
						value = Global_262145.f_7061;
						break;
				}
				break;
		
			case joaat("WEAPON_SNSPISTOL"):
				switch (iParam1)
				{
					case joaat("COMPONENT_SNSPISTOL_CLIP_01"):
						value = 0;
						break;
				
					case joaat("COMPONENT_SNSPISTOL_CLIP_02"):
						value = Global_262145.f_7640;
						break;
				
					case joaat("COMPONENT_SNSPISTOL_VARMOD_LOWRIDER"):
						value = Global_262145.f_12430;
						break;
				
					case joaat("COMPONENT_GUNRUN_MK2_UPGRADE"):
						value = Global_262145.f_22938;
						break;
				}
				break;
		
			case joaat("WEAPON_SPECIALCARBINE"):
				switch (iParam1)
				{
					case joaat("COMPONENT_SPECIALCARBINE_CLIP_01"):
						value = 0;
						break;
				
					case joaat("COMPONENT_SPECIALCARBINE_CLIP_02"):
						value = Global_262145.f_7645;
						break;
				
					case joaat("COMPONENT_SPECIALCARBINE_CLIP_03"):
						value = Global_262145.f_16584;
						break;
				
					case joaat("COMPONENT_AT_AR_FLSH"):
						value = Global_262145.f_7648;
						break;
				
					case joaat("COMPONENT_AT_SCOPE_MEDIUM"):
						value = Global_262145.f_7644;
						break;
				
					case joaat("COMPONENT_AT_AR_SUPP_02"):
						value = Global_262145.f_7642;
						break;
				
					case joaat("COMPONENT_AT_AR_AFGRIP"):
						value = Global_262145.f_7647;
						break;
				
					case joaat("COMPONENT_SPECIALCARBINE_VARMOD_LOWRIDER"):
						value = Global_262145.f_12434;
						break;
				
					case joaat("COMPONENT_GUNRUN_MK2_UPGRADE"):
						value = Global_262145.f_22934;
						break;
				}
				break;
		
			case joaat("WEAPON_HEAVYPISTOL"):
				switch (iParam1)
				{
					case joaat("COMPONENT_HEAVYPISTOL_CLIP_01"):
						value = 0;
						break;
				
					case joaat("COMPONENT_HEAVYPISTOL_CLIP_02"):
						value = Global_262145.f_7646;
						break;
				
					case joaat("COMPONENT_AT_PI_FLSH"):
						value = Global_262145.f_7650;
						break;
				
					case joaat("COMPONENT_AT_PI_SUPP"):
						value = Global_262145.f_7643;
						break;
				
					case joaat("COMPONENT_HEAVYPISTOL_VARMOD_LUXE"):
						value = Global_262145.f_7670;
						break;
				}
				break;
		
			case joaat("WEAPON_BULLPUPRIFLE"):
				switch (iParam1)
				{
					case joaat("COMPONENT_BULLPUPRIFLE_CLIP_01"):
						value = 0;
						break;
				
					case joaat("COMPONENT_BULLPUPRIFLE_CLIP_02"):
						value = Global_262145.f_7653;
						break;
				
					case joaat("COMPONENT_AT_AR_FLSH"):
						value = Global_262145.f_7656;
						break;
				
					case joaat("COMPONENT_AT_AR_SUPP"):
						value = Global_262145.f_7651;
						break;
				
					case joaat("COMPONENT_AT_SCOPE_SMALL"):
						value = Global_262145.f_7652;
						break;
				
					case joaat("COMPONENT_AT_AR_AFGRIP"):
						value = Global_262145.f_7654;
						break;
				
					case joaat("COMPONENT_BULLPUPRIFLE_VARMOD_LOW"):
						value = Global_262145.f_12435;
						break;
				
					case joaat("COMPONENT_GUNRUN_MK2_UPGRADE"):
						value = Global_262145.f_22937;
						break;
				}
				break;
		
			case joaat("WEAPON_VINTAGEPISTOL"):
				switch (iParam1)
				{
					case joaat("COMPONENT_VINTAGEPISTOL_CLIP_01"):
						value = 0;
						break;
				
					case joaat("COMPONENT_VINTAGEPISTOL_CLIP_02"):
						value = Global_262145.f_8128;
						break;
				
					case joaat("COMPONENT_AT_PI_SUPP"):
						value = Global_262145.f_8129;
						break;
				}
				break;
		
			case joaat("WEAPON_HEAVYSHOTGUN"):
				switch (iParam1)
				{
					case joaat("COMPONENT_HEAVYSHOTGUN_CLIP_01"):
						value = 0;
						break;
				
					case joaat("COMPONENT_HEAVYSHOTGUN_CLIP_02"):
						value = Global_262145.f_8857;
						break;
				
					case joaat("COMPONENT_HEAVYSHOTGUN_CLIP_03"):
						value = Global_262145.f_16588;
						break;
				
					case joaat("COMPONENT_AT_AR_FLSH"):
						value = Global_262145.f_8858;
						break;
				
					case joaat("COMPONENT_AT_AR_SUPP_02"):
						value = Global_262145.f_8859;
						break;
				
					case joaat("COMPONENT_AT_AR_AFGRIP"):
						value = Global_262145.f_8860;
						break;
				}
				break;
		
			case joaat("WEAPON_MARKSMANRIFLE"):
				switch (iParam1)
				{
					case joaat("COMPONENT_MARKSMANRIFLE_CLIP_01"):
						value = 0;
						break;
				
					case joaat("COMPONENT_MARKSMANRIFLE_CLIP_02"):
						value = Global_262145.f_8863;
						break;
				
					case joaat("COMPONENT_AT_AR_FLSH"):
						value = Global_262145.f_8864;
						break;
				
					case joaat("COMPONENT_AT_AR_SUPP"):
						value = Global_262145.f_8866;
						break;
				
					case joaat("COMPONENT_AT_AR_AFGRIP"):
						value = Global_262145.f_8867;
						break;
				
					case joaat("COMPONENT_MARKSMANRIFLE_VARMOD_LUXE"):
						value = Global_262145.f_8868;
						break;
				
					case joaat("COMPONENT_GUNRUN_MK2_UPGRADE"):
						value = Global_262145.f_22935;
						break;
				}
				break;
		
			case joaat("WEAPON_BULLPUPSHOTGUN"):
				switch (iParam1)
				{
					case joaat("COMPONENT_AT_AR_AFGRIP"):
						value = 4100;
						value = SYSTEM::FLOOR(SYSTEM::TO_FLOAT(value) * Global_262145.f_15137);
						break;
				
					case joaat("COMPONENT_AT_AR_FLSH"):
						value = 2300;
						value = SYSTEM::FLOOR(SYSTEM::TO_FLOAT(value) * Global_262145.f_4387);
						break;
				
					case joaat("COMPONENT_AT_AR_SUPP_02"):
						value = 12450;
						value = SYSTEM::FLOOR(SYSTEM::TO_FLOAT(value) * Global_262145.f_4388);
						break;
				}
			
				if (_IS_EXCLUSIVE_CONTENT_UNLOCKED() && func_76() || func_75())
					value = 0;
				break;
		
			case joaat("WEAPON_PISTOL50"):
				switch (iParam1)
				{
					case joaat("COMPONENT_PISTOL50_CLIP_01"):
						value = 0;
						break;
				
					case joaat("COMPONENT_PISTOL50_CLIP_02"):
						value = 9500;
						value = SYSTEM::FLOOR(SYSTEM::TO_FLOAT(value) * Global_262145.f_2897);
						break;
				
					case joaat("COMPONENT_AT_PI_FLSH"):
						value = 2000;
						value = SYSTEM::FLOOR(SYSTEM::TO_FLOAT(value) * Global_262145.f_4353);
						break;
				
					case joaat("COMPONENT_AT_AR_SUPP_02"):
						value = 12250;
						value = SYSTEM::FLOOR(SYSTEM::TO_FLOAT(value) * Global_262145.f_4354);
						break;
				
					case joaat("COMPONENT_PISTOL50_VARMOD_LUXE"):
						value = Global_262145.f_11041;
						value = SYSTEM::FLOOR(SYSTEM::TO_FLOAT(value) * Global_262145.f_4426);
						break;
				}
			
				if (_IS_EXCLUSIVE_CONTENT_UNLOCKED() && func_76() || func_75())
					value = 0;
				break;
		
			case joaat("WEAPON_SAWNOFFSHOTGUN"):
				switch (iParam1)
				{
					case joaat("COMPONENT_SAWNOFFSHOTGUN_VARMOD_LUXE"):
						value = Global_262145.f_11044;
						value = SYSTEM::FLOOR(SYSTEM::TO_FLOAT(value) * Global_262145.f_4428);
						break;
				}
				break;
		
			case joaat("WEAPON_KNUCKLE"):
				switch (iParam1)
				{
					case joaat("COMPONENT_KNUCKLE_VARMOD_PIMP"):
						value = Global_262145.f_11368;
						value = SYSTEM::FLOOR(SYSTEM::TO_FLOAT(value) * Global_262145.f_4433);
						break;
				
					case joaat("COMPONENT_KNUCKLE_VARMOD_BALLAS"):
						value = Global_262145.f_11369;
						value = SYSTEM::FLOOR(SYSTEM::TO_FLOAT(value) * Global_262145.f_4434);
						break;
				
					case joaat("COMPONENT_KNUCKLE_VARMOD_DOLLAR"):
						value = Global_262145.f_11370;
						value = SYSTEM::FLOOR(SYSTEM::TO_FLOAT(value) * Global_262145.f_4435);
						break;
				
					case joaat("COMPONENT_KNUCKLE_VARMOD_DIAMOND"):
						value = Global_262145.f_11371;
						value = SYSTEM::FLOOR(SYSTEM::TO_FLOAT(value) * Global_262145.f_4436);
						break;
				
					case joaat("COMPONENT_KNUCKLE_VARMOD_HATE"):
						value = Global_262145.f_11372;
						value = SYSTEM::FLOOR(SYSTEM::TO_FLOAT(value) * Global_262145.f_4437);
						break;
				
					case joaat("COMPONENT_KNUCKLE_VARMOD_LOVE"):
						value = Global_262145.f_11373;
						value = SYSTEM::FLOOR(SYSTEM::TO_FLOAT(value) * Global_262145.f_4438);
						break;
				
					case joaat("COMPONENT_KNUCKLE_VARMOD_PLAYER"):
						value = Global_262145.f_11374;
						value = SYSTEM::FLOOR(SYSTEM::TO_FLOAT(value) * Global_262145.f_4439);
						break;
				
					case joaat("COMPONENT_KNUCKLE_VARMOD_KING"):
						value = Global_262145.f_11375;
						value = SYSTEM::FLOOR(SYSTEM::TO_FLOAT(value) * Global_262145.f_4440);
						break;
				
					case joaat("COMPONENT_KNUCKLE_VARMOD_VAGOS"):
						value = Global_262145.f_11376;
						value = SYSTEM::FLOOR(SYSTEM::TO_FLOAT(value) * Global_262145.f_4441);
						break;
				}
				break;
		
			case joaat("WEAPON_MACHINEPISTOL"):
				switch (iParam1)
				{
					case joaat("COMPONENT_MACHINEPISTOL_CLIP_01"):
						value = 0;
						break;
				
					case joaat("COMPONENT_MACHINEPISTOL_CLIP_02"):
						value = Global_262145.f_11393;
						value = SYSTEM::FLOOR(SYSTEM::TO_FLOAT(value) * Global_262145.f_4443);
						break;
				
					case joaat("COMPONENT_MACHINEPISTOL_CLIP_03"):
						value = Global_262145.f_16586;
						break;
				
					case joaat("COMPONENT_AT_PI_SUPP"):
						value = Global_262145.f_11394;
						value = SYSTEM::FLOOR(SYSTEM::TO_FLOAT(value) * Global_262145.f_4444);
						break;
				}
				break;
		
			case joaat("WEAPON_SWITCHBLADE"):
				switch (iParam1)
				{
					case joaat("COMPONENT_SWITCHBLADE_VARMOD_BASE"):
						value = 0;
						break;
				
					case joaat("COMPONENT_SWITCHBLADE_VARMOD_VAR1"):
						value = Global_262145.f_13276;
						break;
				
					case joaat("COMPONENT_SWITCHBLADE_VARMOD_VAR2"):
						value = Global_262145.f_13277;
						break;
				}
				break;
		
			case joaat("WEAPON_REVOLVER"):
				switch (iParam1)
				{
					case joaat("COMPONENT_REVOLVER_CLIP_01"):
						value = 0;
						break;
				
					case joaat("COMPONENT_REVOLVER_VARMOD_BOSS"):
						value = Global_262145.f_13334;
						break;
				
					case joaat("COMPONENT_REVOLVER_VARMOD_GOON"):
						value = Global_262145.f_13275;
						break;
				
					case joaat("COMPONENT_GUNRUN_MK2_UPGRADE"):
						value = Global_262145.f_22936;
						break;
				}
				break;
		
			case joaat("WEAPON_COMPACTRIFLE"):
				switch (iParam1)
				{
					case joaat("COMPONENT_COMPACTRIFLE_CLIP_01"):
						value = 0;
						break;
				
					case joaat("COMPONENT_COMPACTRIFLE_CLIP_02"):
						value = Global_262145.f_15067;
						break;
				
					case joaat("COMPONENT_COMPACTRIFLE_CLIP_03"):
						value = Global_262145.f_16583;
						break;
				}
				break;
		
			case joaat("WEAPON_DBSHOTGUN"):
				switch (iParam1)
				{
					case joaat("COMPONENT_DBSHOTGUN_CLIP_01"):
						value = 0;
						break;
				}
				break;
		
			case joaat("WEAPON_MINISMG"):
				switch (iParam1)
				{
					case joaat("COMPONENT_MINISMG_CLIP_01"):
						value = 0;
						break;
				
					case joaat("COMPONENT_MINISMG_CLIP_02"):
						value = Global_262145.f_19042;
						break;
				}
				break;
		
			case joaat("WEAPON_COMBATPDW"):
				switch (iParam1)
				{
					case joaat("COMPONENT_COMBATPDW_CLIP_01"):
						value = 0;
						break;
				
					case joaat("COMPONENT_COMBATPDW_CLIP_02"):
						value = Global_262145.f_21075;
						break;
				
					case joaat("COMPONENT_COMBATPDW_CLIP_03"):
						value = Global_262145.f_16585;
						break;
				
					case joaat("COMPONENT_AT_AR_FLSH"):
						value = Global_262145.f_21076;
						break;
				
					case joaat("COMPONENT_AT_SCOPE_SMALL"):
						value = Global_262145.f_21078;
						break;
				
					case joaat("COMPONENT_AT_AR_AFGRIP"):
						value = Global_262145.f_21077;
						break;
				}
				break;
		
			case joaat("WEAPON_ASSAULTRIFLE_MK2"):
				switch (iParam1)
				{
					case joaat("COMPONENT_ASSAULTRIFLE_MK2_CLIP_01"):
						value = 0;
						break;
				
					case joaat("COMPONENT_ASSAULTRIFLE_MK2_CLIP_02"):
						value = Global_262145.f_21199;
						break;
				
					case joaat("COMPONENT_ASSAULTRIFLE_MK2_CLIP_ARMORPIERCING"):
						value = Global_262145.f_21200;
						break;
				
					case joaat("COMPONENT_ASSAULTRIFLE_MK2_CLIP_FMJ"):
						value = Global_262145.f_21201;
						break;
				
					case joaat("COMPONENT_ASSAULTRIFLE_MK2_CLIP_INCENDIARY"):
						value = Global_262145.f_21202;
						break;
				
					case joaat("COMPONENT_ASSAULTRIFLE_MK2_CLIP_TRACER"):
						value = Global_262145.f_21203;
						break;
				
					case joaat("COMPONENT_AT_AR_FLSH"):
						value = Global_262145.f_21204;
						break;
				
					case joaat("COMPONENT_AT_SIGHTS"):
						value = Global_262145.f_21205;
						break;
				
					case joaat("COMPONENT_AT_SCOPE_MACRO_MK2"):
						value = Global_262145.f_21206;
						break;
				
					case joaat("COMPONENT_AT_SCOPE_SMALL_MK2"):
						value = Global_262145.f_21207;
						break;
				
					case joaat("COMPONENT_AT_SCOPE_MEDIUM_MK2"):
						value = Global_262145.f_21208;
						break;
				
					case joaat("COMPONENT_AT_AR_SUPP_02"):
						value = Global_262145.f_21209;
						break;
				
					case joaat("COMPONENT_AT_MUZZLE_01"):
						value = Global_262145.f_21210;
						break;
				
					case joaat("COMPONENT_AT_MUZZLE_02"):
						value = Global_262145.f_21211;
						break;
				
					case joaat("COMPONENT_AT_MUZZLE_03"):
						value = Global_262145.f_21212;
						break;
				
					case joaat("COMPONENT_AT_MUZZLE_04"):
						value = Global_262145.f_21213;
						break;
				
					case joaat("COMPONENT_AT_MUZZLE_05"):
						value = Global_262145.f_21214;
						break;
				
					case joaat("COMPONENT_AT_MUZZLE_06"):
						value = Global_262145.f_21215;
						break;
				
					case joaat("COMPONENT_AT_MUZZLE_07"):
						value = Global_262145.f_21216;
						break;
				
					case joaat("COMPONENT_AT_AR_AFGRIP_02"):
						value = Global_262145.f_21217;
						break;
				
					case joaat("COMPONENT_AT_AR_BARREL_01"):
						value = 0;
						break;
				
					case joaat("COMPONENT_AT_AR_BARREL_02"):
						value = Global_262145.f_21218;
						break;
				
					case joaat("COMPONENT_ASSAULTRIFLE_MK2_CAMO"):
						value = Global_262145.f_21327;
						break;
				
					case joaat("COMPONENT_ASSAULTRIFLE_MK2_CAMO_02"):
						value = Global_262145.f_21328;
						break;
				
					case joaat("COMPONENT_ASSAULTRIFLE_MK2_CAMO_03"):
						value = Global_262145.f_21329;
						break;
				
					case joaat("COMPONENT_ASSAULTRIFLE_MK2_CAMO_04"):
						value = Global_262145.f_21330;
						break;
				
					case joaat("COMPONENT_ASSAULTRIFLE_MK2_CAMO_05"):
						value = Global_262145.f_21331;
						break;
				
					case joaat("COMPONENT_ASSAULTRIFLE_MK2_CAMO_06"):
						value = Global_262145.f_21332;
						break;
				
					case joaat("COMPONENT_ASSAULTRIFLE_MK2_CAMO_07"):
						value = Global_262145.f_21333;
						break;
				
					case joaat("COMPONENT_ASSAULTRIFLE_MK2_CAMO_08"):
						value = Global_262145.f_21334;
						break;
				
					case joaat("COMPONENT_ASSAULTRIFLE_MK2_CAMO_09"):
						value = Global_262145.f_21335;
						break;
				
					case joaat("COMPONENT_ASSAULTRIFLE_MK2_CAMO_10"):
						value = Global_262145.f_21336;
						break;
				
					case joaat("COMPONENT_ASSAULTRIFLE_MK2_CAMO_IND_01"):
						value = Global_262145.f_21337;
						break;
				}
				break;
		
			case joaat("WEAPON_CARBINERIFLE_MK2"):
				switch (iParam1)
				{
					case joaat("COMPONENT_CARBINERIFLE_MK2_CLIP_01"):
						value = 0;
						break;
				
					case joaat("COMPONENT_CARBINERIFLE_MK2_CLIP_02"):
						value = Global_262145.f_21219;
						break;
				
					case joaat("COMPONENT_CARBINERIFLE_MK2_CLIP_ARMORPIERCING"):
						value = Global_262145.f_21220;
						break;
				
					case joaat("COMPONENT_CARBINERIFLE_MK2_CLIP_FMJ"):
						value = Global_262145.f_21221;
						break;
				
					case joaat("COMPONENT_CARBINERIFLE_MK2_CLIP_INCENDIARY"):
						value = Global_262145.f_21222;
						break;
				
					case joaat("COMPONENT_CARBINERIFLE_MK2_CLIP_TRACER"):
						value = Global_262145.f_21223;
						break;
				
					case joaat("COMPONENT_AT_AR_FLSH"):
						value = Global_262145.f_21224;
						break;
				
					case joaat("COMPONENT_AT_SIGHTS"):
						value = Global_262145.f_21225;
						break;
				
					case joaat("COMPONENT_AT_SCOPE_MACRO_MK2"):
						value = Global_262145.f_21226;
						break;
				
					case joaat("COMPONENT_AT_SCOPE_SMALL_MK2"):
						value = Global_262145.f_21227;
						break;
				
					case joaat("COMPONENT_AT_SCOPE_MEDIUM_MK2"):
						value = Global_262145.f_21228;
						break;
				
					case joaat("COMPONENT_AT_AR_SUPP"):
						value = Global_262145.f_21229;
						break;
				
					case joaat("COMPONENT_AT_MUZZLE_01"):
						value = Global_262145.f_21230;
						break;
				
					case joaat("COMPONENT_AT_MUZZLE_02"):
						value = Global_262145.f_21231;
						break;
				
					case joaat("COMPONENT_AT_MUZZLE_03"):
						value = Global_262145.f_21232;
						break;
				
					case joaat("COMPONENT_AT_MUZZLE_04"):
						value = Global_262145.f_21233;
						break;
				
					case joaat("COMPONENT_AT_MUZZLE_05"):
						value = Global_262145.f_21234;
						break;
				
					case joaat("COMPONENT_AT_MUZZLE_06"):
						value = Global_262145.f_21235;
						break;
				
					case joaat("COMPONENT_AT_MUZZLE_07"):
						value = Global_262145.f_21236;
						break;
				
					case joaat("COMPONENT_AT_AR_AFGRIP_02"):
						value = Global_262145.f_21237;
						break;
				
					case joaat("COMPONENT_AT_CR_BARREL_01"):
						value = 0;
						break;
				
					case joaat("COMPONENT_AT_CR_BARREL_02"):
						value = Global_262145.f_21238;
						break;
				
					case joaat("COMPONENT_CARBINERIFLE_MK2_CAMO"):
						value = Global_262145.f_21327;
						break;
				
					case joaat("COMPONENT_CARBINERIFLE_MK2_CAMO_02"):
						value = Global_262145.f_21328;
						break;
				
					case joaat("COMPONENT_CARBINERIFLE_MK2_CAMO_03"):
						value = Global_262145.f_21329;
						break;
				
					case joaat("COMPONENT_CARBINERIFLE_MK2_CAMO_04"):
						value = Global_262145.f_21330;
						break;
				
					case joaat("COMPONENT_CARBINERIFLE_MK2_CAMO_05"):
						value = Global_262145.f_21331;
						break;
				
					case joaat("COMPONENT_CARBINERIFLE_MK2_CAMO_06"):
						value = Global_262145.f_21332;
						break;
				
					case joaat("COMPONENT_CARBINERIFLE_MK2_CAMO_07"):
						value = Global_262145.f_21333;
						break;
				
					case joaat("COMPONENT_CARBINERIFLE_MK2_CAMO_08"):
						value = Global_262145.f_21334;
						break;
				
					case joaat("COMPONENT_CARBINERIFLE_MK2_CAMO_09"):
						value = Global_262145.f_21335;
						break;
				
					case joaat("COMPONENT_CARBINERIFLE_MK2_CAMO_10"):
						value = Global_262145.f_21336;
						break;
				
					case joaat("COMPONENT_CARBINERIFLE_MK2_CAMO_IND_01"):
						value = Global_262145.f_21337;
						break;
				}
				break;
		
			case joaat("WEAPON_COMBATMG_MK2"):
				switch (iParam1)
				{
					case joaat("COMPONENT_COMBATMG_MK2_CLIP_01"):
						value = 0;
						break;
				
					case joaat("COMPONENT_COMBATMG_MK2_CLIP_02"):
						value = Global_262145.f_21239;
						break;
				
					case joaat("COMPONENT_COMBATMG_MK2_CLIP_ARMORPIERCING"):
						value = Global_262145.f_21240;
						break;
				
					case joaat("COMPONENT_COMBATMG_MK2_CLIP_FMJ"):
						value = Global_262145.f_21241;
						break;
				
					case joaat("COMPONENT_COMBATMG_MK2_CLIP_INCENDIARY"):
						value = Global_262145.f_21242;
						break;
				
					case joaat("COMPONENT_COMBATMG_MK2_CLIP_TRACER"):
						value = Global_262145.f_21243;
						break;
				
					case joaat("COMPONENT_AT_SIGHTS"):
						value = Global_262145.f_21244;
						break;
				
					case joaat("COMPONENT_AT_SCOPE_MACRO_MK2"):
						value = Global_262145.f_21245;
						break;
				
					case joaat("COMPONENT_AT_SCOPE_SMALL_MK2"):
						value = Global_262145.f_21246;
						break;
				
					case joaat("COMPONENT_AT_SCOPE_MEDIUM_MK2"):
						value = Global_262145.f_21247;
						break;
				
					case joaat("COMPONENT_AT_MUZZLE_01"):
						value = Global_262145.f_21248;
						break;
				
					case joaat("COMPONENT_AT_MUZZLE_02"):
						value = Global_262145.f_21249;
						break;
				
					case joaat("COMPONENT_AT_MUZZLE_03"):
						value = Global_262145.f_21250;
						break;
				
					case joaat("COMPONENT_AT_MUZZLE_04"):
						value = Global_262145.f_21251;
						break;
				
					case joaat("COMPONENT_AT_MUZZLE_05"):
						value = Global_262145.f_21252;
						break;
				
					case joaat("COMPONENT_AT_MUZZLE_06"):
						value = Global_262145.f_21253;
						break;
				
					case joaat("COMPONENT_AT_MUZZLE_07"):
						value = Global_262145.f_21254;
						break;
				
					case joaat("COMPONENT_AT_AR_AFGRIP_02"):
						value = Global_262145.f_21255;
						break;
				
					case joaat("COMPONENT_AT_MG_BARREL_01"):
						value = 0;
						break;
				
					case joaat("COMPONENT_AT_MG_BARREL_02"):
						value = Global_262145.f_21256;
						break;
				
					case joaat("COMPONENT_COMBATMG_MK2_CAMO"):
						value = Global_262145.f_21327;
						break;
				
					case joaat("COMPONENT_COMBATMG_MK2_CAMO_02"):
						value = Global_262145.f_21328;
						break;
				
					case joaat("COMPONENT_COMBATMG_MK2_CAMO_03"):
						value = Global_262145.f_21329;
						break;
				
					case joaat("COMPONENT_COMBATMG_MK2_CAMO_04"):
						value = Global_262145.f_21330;
						break;
				
					case joaat("COMPONENT_COMBATMG_MK2_CAMO_05"):
						value = Global_262145.f_21331;
						break;
				
					case joaat("COMPONENT_COMBATMG_MK2_CAMO_06"):
						value = Global_262145.f_21332;
						break;
				
					case joaat("COMPONENT_COMBATMG_MK2_CAMO_07"):
						value = Global_262145.f_21333;
						break;
				
					case joaat("COMPONENT_COMBATMG_MK2_CAMO_08"):
						value = Global_262145.f_21334;
						break;
				
					case joaat("COMPONENT_COMBATMG_MK2_CAMO_09"):
						value = Global_262145.f_21335;
						break;
				
					case joaat("COMPONENT_COMBATMG_MK2_CAMO_10"):
						value = Global_262145.f_21336;
						break;
				
					case joaat("COMPONENT_COMBATMG_MK2_CAMO_IND_01"):
						value = Global_262145.f_21337;
						break;
				}
				break;
		
			case joaat("WEAPON_HEAVYSNIPER_MK2"):
				switch (iParam1)
				{
					case joaat("COMPONENT_HEAVYSNIPER_MK2_CLIP_01"):
						value = 0;
						break;
				
					case joaat("COMPONENT_HEAVYSNIPER_MK2_CLIP_02"):
						value = Global_262145.f_21257;
						break;
				
					case joaat("COMPONENT_HEAVYSNIPER_MK2_CLIP_ARMORPIERCING"):
						value = Global_262145.f_21258;
						break;
				
					case joaat("COMPONENT_HEAVYSNIPER_MK2_CLIP_FMJ"):
						value = Global_262145.f_21260;
						break;
				
					case joaat("COMPONENT_HEAVYSNIPER_MK2_CLIP_INCENDIARY"):
						value = Global_262145.f_21261;
						break;
				
					case joaat("COMPONENT_HEAVYSNIPER_MK2_CLIP_EXPLOSIVE"):
						value = Global_262145.f_21259;
						break;
				
					case joaat("COMPONENT_AT_SCOPE_LARGE_MK2"):
						value = Global_262145.f_21262;
						break;
				
					case joaat("COMPONENT_AT_SCOPE_MAX"):
						value = 0;
						break;
				
					case joaat("COMPONENT_AT_SCOPE_NV"):
						value = Global_262145.f_21263;
						break;
				
					case joaat("COMPONENT_AT_SCOPE_THERMAL"):
						value = Global_262145.f_21264;
						break;
				
					case joaat("COMPONENT_AT_SR_SUPP_03"):
						value = Global_262145.f_21265;
						break;
				
					case joaat("COMPONENT_AT_MUZZLE_08"):
						value = Global_262145.f_21266;
						break;
				
					case joaat("COMPONENT_AT_MUZZLE_09"):
						value = Global_262145.f_21267;
						break;
				
					case joaat("COMPONENT_AT_SR_BARREL_01"):
						value = 0;
						break;
				
					case joaat("COMPONENT_AT_SR_BARREL_02"):
						value = Global_262145.f_21268;
						break;
				
					case joaat("COMPONENT_HEAVYSNIPER_MK2_CAMO"):
						value = Global_262145.f_21327;
						break;
				
					case joaat("COMPONENT_HEAVYSNIPER_MK2_CAMO_02"):
						value = Global_262145.f_21328;
						break;
				
					case joaat("COMPONENT_HEAVYSNIPER_MK2_CAMO_03"):
						value = Global_262145.f_21329;
						break;
				
					case joaat("COMPONENT_HEAVYSNIPER_MK2_CAMO_04"):
						value = Global_262145.f_21330;
						break;
				
					case joaat("COMPONENT_HEAVYSNIPER_MK2_CAMO_05"):
						value = Global_262145.f_21331;
						break;
				
					case joaat("COMPONENT_HEAVYSNIPER_MK2_CAMO_06"):
						value = Global_262145.f_21332;
						break;
				
					case joaat("COMPONENT_HEAVYSNIPER_MK2_CAMO_07"):
						value = Global_262145.f_21333;
						break;
				
					case joaat("COMPONENT_HEAVYSNIPER_MK2_CAMO_08"):
						value = Global_262145.f_21334;
						break;
				
					case joaat("COMPONENT_HEAVYSNIPER_MK2_CAMO_09"):
						value = Global_262145.f_21335;
						break;
				
					case joaat("COMPONENT_HEAVYSNIPER_MK2_CAMO_10"):
						value = Global_262145.f_21336;
						break;
				
					case joaat("COMPONENT_HEAVYSNIPER_MK2_CAMO_IND_01"):
						value = Global_262145.f_21337;
						break;
				}
				break;
		
			case joaat("WEAPON_PISTOL_MK2"):
				switch (iParam1)
				{
					case joaat("COMPONENT_PISTOL_MK2_CLIP_01"):
						value = 0;
						break;
				
					case joaat("COMPONENT_PISTOL_MK2_CLIP_02"):
						value = Global_262145.f_21269;
						break;
				
					case joaat("COMPONENT_PISTOL_MK2_CLIP_HOLLOWPOINT"):
						value = Global_262145.f_21271;
						break;
				
					case joaat("COMPONENT_PISTOL_MK2_CLIP_FMJ"):
						value = Global_262145.f_21270;
						break;
				
					case joaat("COMPONENT_PISTOL_MK2_CLIP_INCENDIARY"):
						value = Global_262145.f_21272;
						break;
				
					case joaat("COMPONENT_PISTOL_MK2_CLIP_TRACER"):
						value = Global_262145.f_21273;
						break;
				
					case joaat("COMPONENT_AT_PI_FLSH_02"):
						value = Global_262145.f_21274;
						break;
				
					case joaat("COMPONENT_AT_PI_RAIL"):
						value = Global_262145.f_21275;
						break;
				
					case joaat("COMPONENT_AT_PI_SUPP_02"):
						value = Global_262145.f_21276;
						break;
				
					case joaat("COMPONENT_AT_PI_COMP"):
						value = Global_262145.f_21277;
						break;
				
					case joaat("COMPONENT_PISTOL_MK2_CAMO"):
						value = Global_262145.f_21327;
						break;
				
					case joaat("COMPONENT_PISTOL_MK2_CAMO_02"):
						value = Global_262145.f_21328;
						break;
				
					case joaat("COMPONENT_PISTOL_MK2_CAMO_03"):
						value = Global_262145.f_21329;
						break;
				
					case joaat("COMPONENT_PISTOL_MK2_CAMO_04"):
						value = Global_262145.f_21330;
						break;
				
					case joaat("COMPONENT_PISTOL_MK2_CAMO_05"):
						value = Global_262145.f_21331;
						break;
				
					case joaat("COMPONENT_PISTOL_MK2_CAMO_06"):
						value = Global_262145.f_21332;
						break;
				
					case joaat("COMPONENT_PISTOL_MK2_CAMO_07"):
						value = Global_262145.f_21333;
						break;
				
					case joaat("COMPONENT_PISTOL_MK2_CAMO_08"):
						value = Global_262145.f_21334;
						break;
				
					case joaat("COMPONENT_PISTOL_MK2_CAMO_09"):
						value = Global_262145.f_21335;
						break;
				
					case joaat("COMPONENT_PISTOL_MK2_CAMO_10"):
						value = Global_262145.f_21336;
						break;
				
					case joaat("COMPONENT_PISTOL_MK2_CAMO_IND_01"):
						value = Global_262145.f_21337;
						break;
				
					case 1141184690:
						value = 0;
						break;
				}
				break;
		
			case joaat("WEAPON_SMG_MK2"):
				switch (iParam1)
				{
					case joaat("COMPONENT_SMG_MK2_CLIP_01"):
						value = 0;
						break;
				
					case joaat("COMPONENT_SMG_MK2_CLIP_02"):
						value = Global_262145.f_21278;
						break;
				
					case joaat("COMPONENT_SMG_MK2_CLIP_HOLLOWPOINT"):
						value = Global_262145.f_21280;
						break;
				
					case joaat("COMPONENT_SMG_MK2_CLIP_FMJ"):
						value = Global_262145.f_21279;
						break;
				
					case joaat("COMPONENT_SMG_MK2_CLIP_INCENDIARY"):
						value = Global_262145.f_21281;
						break;
				
					case joaat("COMPONENT_SMG_MK2_CLIP_TRACER"):
						value = Global_262145.f_21282;
						break;
				
					case joaat("COMPONENT_AT_AR_FLSH"):
						value = Global_262145.f_21283;
						break;
				
					case joaat("COMPONENT_AT_SIGHTS_SMG"):
						value = Global_262145.f_21284;
						break;
				
					case joaat("COMPONENT_AT_SCOPE_MACRO_02_SMG_MK2"):
						value = Global_262145.f_21285;
						break;
				
					case joaat("COMPONENT_AT_SCOPE_SMALL_SMG_MK2"):
						value = Global_262145.f_21286;
						break;
				
					case joaat("COMPONENT_AT_PI_SUPP"):
						value = Global_262145.f_21287;
						break;
				
					case joaat("COMPONENT_AT_MUZZLE_01"):
						value = Global_262145.f_21288;
						break;
				
					case joaat("COMPONENT_AT_MUZZLE_02"):
						value = Global_262145.f_21289;
						break;
				
					case joaat("COMPONENT_AT_MUZZLE_03"):
						value = Global_262145.f_21290;
						break;
				
					case joaat("COMPONENT_AT_MUZZLE_04"):
						value = Global_262145.f_21291;
						break;
				
					case joaat("COMPONENT_AT_MUZZLE_05"):
						value = Global_262145.f_21292;
						break;
				
					case joaat("COMPONENT_AT_MUZZLE_06"):
						value = Global_262145.f_21293;
						break;
				
					case joaat("COMPONENT_AT_MUZZLE_07"):
						value = Global_262145.f_21294;
						break;
				
					case joaat("COMPONENT_AT_SB_BARREL_01"):
						value = 0;
						break;
				
					case joaat("COMPONENT_AT_SB_BARREL_02"):
						value = Global_262145.f_21295;
						break;
				
					case joaat("COMPONENT_SMG_MK2_CAMO"):
						value = Global_262145.f_21327;
						break;
				
					case joaat("COMPONENT_SMG_MK2_CAMO_02"):
						value = Global_262145.f_21328;
						break;
				
					case joaat("COMPONENT_SMG_MK2_CAMO_03"):
						value = Global_262145.f_21329;
						break;
				
					case joaat("COMPONENT_SMG_MK2_CAMO_04"):
						value = Global_262145.f_21330;
						break;
				
					case joaat("COMPONENT_SMG_MK2_CAMO_05"):
						value = Global_262145.f_21331;
						break;
				
					case joaat("COMPONENT_SMG_MK2_CAMO_06"):
						value = Global_262145.f_21332;
						break;
				
					case joaat("COMPONENT_SMG_MK2_CAMO_07"):
						value = Global_262145.f_21333;
						break;
				
					case joaat("COMPONENT_SMG_MK2_CAMO_08"):
						value = Global_262145.f_21334;
						break;
				
					case joaat("COMPONENT_SMG_MK2_CAMO_09"):
						value = Global_262145.f_21335;
						break;
				
					case joaat("COMPONENT_SMG_MK2_CAMO_10"):
						value = Global_262145.f_21336;
						break;
				
					case joaat("COMPONENT_SMG_MK2_CAMO_IND_01"):
						value = Global_262145.f_21337;
						break;
				}
				break;
		
			case joaat("WEAPON_PUMPSHOTGUN_MK2"):
				switch (iParam1)
				{
					case joaat("COMPONENT_PUMPSHOTGUN_MK2_CLIP_01"):
						value = 0;
						break;
				
					case joaat("COMPONENT_PUMPSHOTGUN_MK2_CLIP_ARMORPIERCING"):
						value = Global_262145.f_22965;
						break;
				
					case joaat("COMPONENT_PUMPSHOTGUN_MK2_CLIP_EXPLOSIVE"):
						value = Global_262145.f_22966;
						break;
				
					case joaat("COMPONENT_PUMPSHOTGUN_MK2_CLIP_HOLLOWPOINT"):
						value = Global_262145.f_22964;
						break;
				
					case joaat("COMPONENT_PUMPSHOTGUN_MK2_CLIP_INCENDIARY"):
						value = Global_262145.f_22963;
						break;
				
					case joaat("COMPONENT_AT_AR_FLSH"):
						value = Global_262145.f_22992;
						break;
				
					case joaat("COMPONENT_AT_SIGHTS"):
						value = Global_262145.f_22993;
						break;
				
					case joaat("COMPONENT_AT_SCOPE_MACRO_MK2"):
						value = Global_262145.f_22994;
						break;
				
					case joaat("COMPONENT_AT_SCOPE_SMALL_MK2"):
						value = Global_262145.f_22995;
						break;
				
					case joaat("COMPONENT_AT_SR_SUPP_03"):
						value = Global_262145.f_22996;
						break;
				
					case joaat("COMPONENT_AT_MUZZLE_08"):
						value = Global_262145.f_22997;
						break;
				
					case joaat("COMPONENT_PUMPSHOTGUN_MK2_CAMO"):
						value = Global_262145.f_21327;
						break;
				
					case joaat("COMPONENT_PUMPSHOTGUN_MK2_CAMO_02"):
						value = Global_262145.f_21328;
						break;
				
					case joaat("COMPONENT_PUMPSHOTGUN_MK2_CAMO_03"):
						value = Global_262145.f_21329;
						break;
				
					case joaat("COMPONENT_PUMPSHOTGUN_MK2_CAMO_04"):
						value = Global_262145.f_21330;
						break;
				
					case joaat("COMPONENT_PUMPSHOTGUN_MK2_CAMO_05"):
						value = Global_262145.f_21331;
						break;
				
					case joaat("COMPONENT_PUMPSHOTGUN_MK2_CAMO_06"):
						value = Global_262145.f_21332;
						break;
				
					case joaat("COMPONENT_PUMPSHOTGUN_MK2_CAMO_07"):
						value = Global_262145.f_21333;
						break;
				
					case joaat("COMPONENT_PUMPSHOTGUN_MK2_CAMO_08"):
						value = Global_262145.f_21334;
						break;
				
					case joaat("COMPONENT_PUMPSHOTGUN_MK2_CAMO_09"):
						value = Global_262145.f_21335;
						break;
				
					case joaat("COMPONENT_PUMPSHOTGUN_MK2_CAMO_10"):
						value = Global_262145.f_21336;
						break;
				
					case joaat("COMPONENT_PUMPSHOTGUN_MK2_CAMO_IND_01"):
						value = Global_262145.f_21337;
						break;
				}
				break;
		
			case joaat("WEAPON_SPECIALCARBINE_MK2"):
				switch (iParam1)
				{
					case joaat("COMPONENT_SPECIALCARBINE_MK2_CLIP_01"):
						value = 0;
						break;
				
					case joaat("COMPONENT_SPECIALCARBINE_MK2_CLIP_02"):
						value = Global_262145.f_22967;
						break;
				
					case joaat("COMPONENT_SPECIALCARBINE_MK2_CLIP_ARMORPIERCING"):
						value = Global_262145.f_22971;
						break;
				
					case joaat("COMPONENT_SPECIALCARBINE_MK2_CLIP_FMJ"):
						value = Global_262145.f_22969;
						break;
				
					case joaat("COMPONENT_SPECIALCARBINE_MK2_CLIP_INCENDIARY"):
						value = Global_262145.f_22970;
						break;
				
					case joaat("COMPONENT_SPECIALCARBINE_MK2_CLIP_TRACER"):
						value = Global_262145.f_22968;
						break;
				
					case joaat("COMPONENT_AT_AR_FLSH"):
						value = Global_262145.f_22998;
						break;
				
					case joaat("COMPONENT_AT_SIGHTS"):
						value = Global_262145.f_22999;
						break;
				
					case joaat("COMPONENT_AT_SCOPE_MACRO_MK2"):
						value = Global_262145.f_23000;
						break;
				
					case joaat("COMPONENT_AT_SCOPE_MEDIUM_MK2"):
						value = Global_262145.f_23001;
						break;
				
					case joaat("COMPONENT_AT_AR_SUPP_02"):
						value = Global_262145.f_23002;
						break;
				
					case joaat("COMPONENT_AT_MUZZLE_01"):
						value = Global_262145.f_23003;
						break;
				
					case joaat("COMPONENT_AT_MUZZLE_02"):
						value = Global_262145.f_23004;
						break;
				
					case joaat("COMPONENT_AT_MUZZLE_03"):
						value = Global_262145.f_23005;
						break;
				
					case joaat("COMPONENT_AT_MUZZLE_04"):
						value = Global_262145.f_23006;
						break;
				
					case joaat("COMPONENT_AT_MUZZLE_05"):
						value = Global_262145.f_23007;
						break;
				
					case joaat("COMPONENT_AT_MUZZLE_06"):
						value = Global_262145.f_23008;
						break;
				
					case joaat("COMPONENT_AT_MUZZLE_07"):
						value = Global_262145.f_23009;
						break;
				
					case joaat("COMPONENT_AT_AR_AFGRIP_02"):
						value = Global_262145.f_23010;
						break;
				
					case joaat("COMPONENT_AT_SC_BARREL_01"):
						value = 0;
						break;
				
					case joaat("COMPONENT_AT_SC_BARREL_02"):
						value = Global_262145.f_23011;
						break;
				
					case joaat("COMPONENT_SPECIALCARBINE_MK2_CAMO"):
						value = Global_262145.f_21327;
						break;
				
					case joaat("COMPONENT_SPECIALCARBINE_MK2_CAMO_02"):
						value = Global_262145.f_21328;
						break;
				
					case joaat("COMPONENT_SPECIALCARBINE_MK2_CAMO_03"):
						value = Global_262145.f_21329;
						break;
				
					case joaat("COMPONENT_SPECIALCARBINE_MK2_CAMO_04"):
						value = Global_262145.f_21330;
						break;
				
					case joaat("COMPONENT_SPECIALCARBINE_MK2_CAMO_05"):
						value = Global_262145.f_21331;
						break;
				
					case joaat("COMPONENT_SPECIALCARBINE_MK2_CAMO_06"):
						value = Global_262145.f_21332;
						break;
				
					case joaat("COMPONENT_SPECIALCARBINE_MK2_CAMO_07"):
						value = Global_262145.f_21333;
						break;
				
					case joaat("COMPONENT_SPECIALCARBINE_MK2_CAMO_08"):
						value = Global_262145.f_21334;
						break;
				
					case joaat("COMPONENT_SPECIALCARBINE_MK2_CAMO_09"):
						value = Global_262145.f_21335;
						break;
				
					case joaat("COMPONENT_SPECIALCARBINE_MK2_CAMO_10"):
						value = Global_262145.f_21336;
						break;
				
					case joaat("COMPONENT_SPECIALCARBINE_MK2_CAMO_IND_01"):
						value = Global_262145.f_21337;
						break;
				}
				break;
		
			case joaat("WEAPON_SNSPISTOL_MK2"):
				switch (iParam1)
				{
					case joaat("COMPONENT_SNSPISTOL_MK2_CLIP_01"):
						value = 0;
						break;
				
					case joaat("COMPONENT_SNSPISTOL_MK2_CLIP_02"):
						value = Global_262145.f_23882;
						break;
				
					case joaat("COMPONENT_SNSPISTOL_MK2_CLIP_FMJ"):
						value = Global_262145.f_22987;
						break;
				
					case joaat("COMPONENT_SNSPISTOL_MK2_CLIP_HOLLOWPOINT"):
						value = Global_262145.f_22989;
						break;
				
					case joaat("COMPONENT_SNSPISTOL_MK2_CLIP_INCENDIARY"):
						value = Global_262145.f_22988;
						break;
				
					case joaat("COMPONENT_SNSPISTOL_MK2_CLIP_TRACER"):
						value = Global_262145.f_22986;
						break;
				
					case joaat("COMPONENT_AT_PI_FLSH_03"):
						value = Global_262145.f_23043;
						break;
				
					case joaat("COMPONENT_AT_PI_RAIL_02"):
						value = Global_262145.f_23044;
						break;
				
					case joaat("COMPONENT_AT_PI_SUPP_02"):
						value = Global_262145.f_23045;
						break;
				
					case joaat("COMPONENT_AT_PI_COMP_02"):
						value = Global_262145.f_23046;
						break;
				
					case joaat("COMPONENT_SNSPISTOL_MK2_CAMO"):
						value = Global_262145.f_21327;
						break;
				
					case joaat("COMPONENT_SNSPISTOL_MK2_CAMO_02"):
						value = Global_262145.f_21328;
						break;
				
					case joaat("COMPONENT_SNSPISTOL_MK2_CAMO_03"):
						value = Global_262145.f_21329;
						break;
				
					case joaat("COMPONENT_SNSPISTOL_MK2_CAMO_04"):
						value = Global_262145.f_21330;
						break;
				
					case joaat("COMPONENT_SNSPISTOL_MK2_CAMO_05"):
						value = Global_262145.f_21331;
						break;
				
					case joaat("COMPONENT_SNSPISTOL_MK2_CAMO_06"):
						value = Global_262145.f_21332;
						break;
				
					case joaat("COMPONENT_SNSPISTOL_MK2_CAMO_07"):
						value = Global_262145.f_21333;
						break;
				
					case joaat("COMPONENT_SNSPISTOL_MK2_CAMO_08"):
						value = Global_262145.f_21334;
						break;
				
					case joaat("COMPONENT_SNSPISTOL_MK2_CAMO_09"):
						value = Global_262145.f_21335;
						break;
				
					case joaat("COMPONENT_SNSPISTOL_MK2_CAMO_10"):
						value = Global_262145.f_21336;
						break;
				
					case joaat("COMPONENT_SNSPISTOL_MK2_CAMO_IND_01"):
						value = Global_262145.f_21337;
						break;
				}
				break;
		
			case joaat("WEAPON_MARKSMANRIFLE_MK2"):
				switch (iParam1)
				{
					case joaat("COMPONENT_MARKSMANRIFLE_MK2_CLIP_01"):
						value = 0;
						break;
				
					case joaat("COMPONENT_MARKSMANRIFLE_MK2_CLIP_02"):
						value = Global_262145.f_22972;
						break;
				
					case joaat("COMPONENT_MARKSMANRIFLE_MK2_CLIP_ARMORPIERCING"):
						value = Global_262145.f_22976;
						break;
				
					case joaat("COMPONENT_MARKSMANRIFLE_MK2_CLIP_FMJ"):
						value = Global_262145.f_22974;
						break;
				
					case joaat("COMPONENT_MARKSMANRIFLE_MK2_CLIP_INCENDIARY"):
						value = Global_262145.f_22975;
						break;
				
					case joaat("COMPONENT_MARKSMANRIFLE_MK2_CLIP_TRACER"):
						value = Global_262145.f_22973;
						break;
				
					case joaat("COMPONENT_AT_AR_FLSH"):
						value = Global_262145.f_23012;
						break;
				
					case joaat("COMPONENT_AT_SIGHTS"):
						value = Global_262145.f_23013;
						break;
				
					case joaat("COMPONENT_AT_SCOPE_MEDIUM_MK2"):
						value = Global_262145.f_23014;
						break;
				
					case joaat("COMPONENT_AT_SCOPE_LARGE_FIXED_ZOOM_MK2"):
						value = 0;
						break;
				
					case joaat("COMPONENT_AT_AR_SUPP"):
						value = Global_262145.f_23015;
						break;
				
					case joaat("COMPONENT_AT_MUZZLE_01"):
						value = Global_262145.f_23016;
						break;
				
					case joaat("COMPONENT_AT_MUZZLE_02"):
						value = Global_262145.f_23017;
						break;
				
					case joaat("COMPONENT_AT_MUZZLE_03"):
						value = Global_262145.f_23018;
						break;
				
					case joaat("COMPONENT_AT_MUZZLE_04"):
						value = Global_262145.f_23019;
						break;
				
					case joaat("COMPONENT_AT_MUZZLE_05"):
						value = Global_262145.f_23020;
						break;
				
					case joaat("COMPONENT_AT_MUZZLE_06"):
						value = Global_262145.f_23021;
						break;
				
					case joaat("COMPONENT_AT_MUZZLE_07"):
						value = Global_262145.f_23022;
						break;
				
					case joaat("COMPONENT_AT_AR_AFGRIP_02"):
						value = Global_262145.f_23023;
						break;
				
					case joaat("COMPONENT_AT_MRFL_BARREL_01"):
						value = 0;
						break;
				
					case joaat("COMPONENT_AT_MRFL_BARREL_02"):
						value = Global_262145.f_23024;
						break;
				
					case joaat("COMPONENT_MARKSMANRIFLE_MK2_CAMO"):
						value = Global_262145.f_21327;
						break;
				
					case joaat("COMPONENT_MARKSMANRIFLE_MK2_CAMO_02"):
						value = Global_262145.f_21328;
						break;
				
					case joaat("COMPONENT_MARKSMANRIFLE_MK2_CAMO_03"):
						value = Global_262145.f_21329;
						break;
				
					case joaat("COMPONENT_MARKSMANRIFLE_MK2_CAMO_04"):
						value = Global_262145.f_21330;
						break;
				
					case joaat("COMPONENT_MARKSMANRIFLE_MK2_CAMO_05"):
						value = Global_262145.f_21331;
						break;
				
					case joaat("COMPONENT_MARKSMANRIFLE_MK2_CAMO_06"):
						value = Global_262145.f_21332;
						break;
				
					case joaat("COMPONENT_MARKSMANRIFLE_MK2_CAMO_07"):
						value = Global_262145.f_21333;
						break;
				
					case joaat("COMPONENT_MARKSMANRIFLE_MK2_CAMO_08"):
						value = Global_262145.f_21334;
						break;
				
					case joaat("COMPONENT_MARKSMANRIFLE_MK2_CAMO_09"):
						value = Global_262145.f_21335;
						break;
				
					case joaat("COMPONENT_MARKSMANRIFLE_MK2_CAMO_10"):
						value = Global_262145.f_21336;
						break;
				
					case joaat("COMPONENT_MARKSMANRIFLE_MK2_CAMO_IND_01"):
						value = Global_262145.f_21337;
						break;
				}
				break;
		
			case joaat("WEAPON_REVOLVER_MK2"):
				switch (iParam1)
				{
					case joaat("COMPONENT_REVOLVER_MK2_CLIP_01"):
						value = 0;
						break;
				
					case joaat("COMPONENT_REVOLVER_MK2_CLIP_TRACER"):
						value = Global_262145.f_22977;
						break;
				
					case joaat("COMPONENT_REVOLVER_MK2_CLIP_FMJ"):
						value = Global_262145.f_22978;
						break;
				
					case joaat("COMPONENT_REVOLVER_MK2_CLIP_HOLLOWPOINT"):
						value = Global_262145.f_22980;
						break;
				
					case joaat("COMPONENT_REVOLVER_MK2_CLIP_INCENDIARY"):
						value = Global_262145.f_22979;
						break;
				
					case joaat("COMPONENT_AT_SIGHTS"):
						value = Global_262145.f_23025;
						break;
				
					case joaat("COMPONENT_AT_SCOPE_MACRO_MK2"):
						value = Global_262145.f_23026;
						break;
				
					case joaat("COMPONENT_AT_PI_FLSH"):
						value = Global_262145.f_23027;
						break;
				
					case joaat("COMPONENT_AT_PI_COMP_03"):
						value = Global_262145.f_23028;
						break;
				
					case joaat("COMPONENT_REVOLVER_MK2_CAMO"):
						value = Global_262145.f_21327;
						break;
				
					case joaat("COMPONENT_REVOLVER_MK2_CAMO_02"):
						value = Global_262145.f_21328;
						break;
				
					case joaat("COMPONENT_REVOLVER_MK2_CAMO_03"):
						value = Global_262145.f_21329;
						break;
				
					case joaat("COMPONENT_REVOLVER_MK2_CAMO_04"):
						value = Global_262145.f_21330;
						break;
				
					case joaat("COMPONENT_REVOLVER_MK2_CAMO_05"):
						value = Global_262145.f_21331;
						break;
				
					case joaat("COMPONENT_REVOLVER_MK2_CAMO_06"):
						value = Global_262145.f_21332;
						break;
				
					case joaat("COMPONENT_REVOLVER_MK2_CAMO_07"):
						value = Global_262145.f_21333;
						break;
				
					case joaat("COMPONENT_REVOLVER_MK2_CAMO_08"):
						value = Global_262145.f_21334;
						break;
				
					case joaat("COMPONENT_REVOLVER_MK2_CAMO_09"):
						value = Global_262145.f_21335;
						break;
				
					case joaat("COMPONENT_REVOLVER_MK2_CAMO_10"):
						value = Global_262145.f_21336;
						break;
				
					case joaat("COMPONENT_REVOLVER_MK2_CAMO_IND_01"):
						value = Global_262145.f_21337;
						break;
				}
				break;
		
			case joaat("WEAPON_BULLPUPRIFLE_MK2"):
				switch (iParam1)
				{
					case joaat("COMPONENT_BULLPUPRIFLE_MK2_CLIP_01"):
						value = 0;
						break;
				
					case joaat("COMPONENT_BULLPUPRIFLE_MK2_CLIP_02"):
						value = Global_262145.f_22981;
						break;
				
					case joaat("COMPONENT_BULLPUPRIFLE_MK2_CLIP_ARMORPIERCING"):
						value = Global_262145.f_22985;
						break;
				
					case joaat("COMPONENT_BULLPUPRIFLE_MK2_CLIP_FMJ"):
						value = Global_262145.f_22983;
						break;
				
					case joaat("COMPONENT_BULLPUPRIFLE_MK2_CLIP_INCENDIARY"):
						value = Global_262145.f_22984;
						break;
				
					case joaat("COMPONENT_BULLPUPRIFLE_MK2_CLIP_TRACER"):
						value = Global_262145.f_22982;
						break;
				
					case joaat("COMPONENT_AT_AR_FLSH"):
						value = Global_262145.f_23029;
						break;
				
					case joaat("COMPONENT_AT_SIGHTS"):
						value = Global_262145.f_23030;
						break;
				
					case joaat("COMPONENT_AT_SCOPE_MACRO_02_MK2"):
						value = Global_262145.f_23031;
						break;
				
					case joaat("COMPONENT_AT_SCOPE_SMALL_MK2"):
						value = Global_262145.f_23032;
						break;
				
					case joaat("COMPONENT_AT_BP_BARREL_01"):
						value = 0;
						break;
				
					case joaat("COMPONENT_AT_BP_BARREL_02"):
						value = Global_262145.f_23042;
						break;
				
					case joaat("COMPONENT_AT_AR_SUPP"):
						value = Global_262145.f_23033;
						break;
				
					case joaat("COMPONENT_AT_MUZZLE_01"):
						value = Global_262145.f_23034;
						break;
				
					case joaat("COMPONENT_AT_MUZZLE_02"):
						value = Global_262145.f_23035;
						break;
				
					case joaat("COMPONENT_AT_MUZZLE_03"):
						value = Global_262145.f_23036;
						break;
				
					case joaat("COMPONENT_AT_MUZZLE_04"):
						value = Global_262145.f_23037;
						break;
				
					case joaat("COMPONENT_AT_MUZZLE_05"):
						value = Global_262145.f_23038;
						break;
				
					case joaat("COMPONENT_AT_MUZZLE_06"):
						value = Global_262145.f_23039;
						break;
				
					case joaat("COMPONENT_AT_MUZZLE_07"):
						value = Global_262145.f_23040;
						break;
				
					case joaat("COMPONENT_AT_AR_AFGRIP_02"):
						value = Global_262145.f_23041;
						break;
				
					case joaat("COMPONENT_BULLPUPRIFLE_MK2_CAMO"):
						value = Global_262145.f_21327;
						break;
				
					case joaat("COMPONENT_BULLPUPRIFLE_MK2_CAMO_02"):
						value = Global_262145.f_21328;
						break;
				
					case joaat("COMPONENT_BULLPUPRIFLE_MK2_CAMO_03"):
						value = Global_262145.f_21329;
						break;
				
					case joaat("COMPONENT_BULLPUPRIFLE_MK2_CAMO_04"):
						value = Global_262145.f_21330;
						break;
				
					case joaat("COMPONENT_BULLPUPRIFLE_MK2_CAMO_05"):
						value = Global_262145.f_21331;
						break;
				
					case joaat("COMPONENT_BULLPUPRIFLE_MK2_CAMO_06"):
						value = Global_262145.f_21332;
						break;
				
					case joaat("COMPONENT_BULLPUPRIFLE_MK2_CAMO_07"):
						value = Global_262145.f_21333;
						break;
				
					case joaat("COMPONENT_BULLPUPRIFLE_MK2_CAMO_08"):
						value = Global_262145.f_21334;
						break;
				
					case joaat("COMPONENT_BULLPUPRIFLE_MK2_CAMO_09"):
						value = Global_262145.f_21335;
						break;
				
					case joaat("COMPONENT_BULLPUPRIFLE_MK2_CAMO_10"):
						value = Global_262145.f_21336;
						break;
				
					case joaat("COMPONENT_BULLPUPRIFLE_MK2_CAMO_IND_01"):
						value = Global_262145.f_21337;
						break;
				}
				break;
		
			case joaat("WEAPON_RAYPISTOL"):
				switch (iParam1)
				{
					case joaat("COMPONENT_RAYPISTOL_VARMOD_XMAS18"):
						value = 0;
						break;
				}
				break;
		
			case joaat("WEAPON_CERAMICPISTOL"):
				switch (iParam1)
				{
					case joaat("COMPONENT_CERAMICPISTOL_CLIP_01"):
						value = 0;
						break;
				
					case joaat("COMPONENT_CERAMICPISTOL_CLIP_02"):
						value = Global_262145.f_28697;
						break;
				
					case joaat("COMPONENT_CERAMICPISTOL_SUPP"):
						value = Global_262145.f_28698;
						break;
				}
				break;
		
			case joaat("WEAPON_COMBATSHOTGUN"):
				switch (iParam1)
				{
					case joaat("COMPONENT_COMBATSHOTGUN_CLIP_01"):
						value = 0;
						break;
				
					case joaat("COMPONENT_AT_AR_FLSH"):
						value = Global_262145.f_30836;
						break;
				
					case joaat("COMPONENT_AT_AR_SUPP"):
						value = Global_262145.f_30837;
						break;
				}
				break;
		
			case joaat("WEAPON_GADGETPISTOL"):
				switch (iParam1)
				{
					case joaat("COMPONENT_GADGETPISTOL_CLIP_01"):
						value = 0;
						break;
				}
				break;
		
			case joaat("WEAPON_MILITARYRIFLE"):
				switch (iParam1)
				{
					case joaat("COMPONENT_MILITARYRIFLE_CLIP_01"):
						value = Global_262145.f_30822;
						break;
				
					case joaat("COMPONENT_MILITARYRIFLE_CLIP_02"):
						value = Global_262145.f_30823;
						break;
				
					case joaat("COMPONENT_MILITARYRIFLE_SIGHT_01"):
						value = Global_262145.f_30824;
						break;
				
					case joaat("COMPONENT_AT_SCOPE_SMALL"):
						value = Global_262145.f_30825;
						break;
				
					case joaat("COMPONENT_AT_AR_FLSH"):
						value = Global_262145.f_30826;
						break;
				
					case joaat("COMPONENT_AT_AR_SUPP"):
						value = Global_262145.f_30827;
						break;
				}
				break;
		
			case joaat("WEAPON_HEAVYRIFLE"):
				switch (iParam1)
				{
					case joaat("COMPONENT_HEAVYRIFLE_CLIP_01"):
						value = Global_262145.f_31975;
						break;
				
					case joaat("COMPONENT_HEAVYRIFLE_CLIP_02"):
						value = Global_262145.f_31976;
						break;
				
					case joaat("COMPONENT_HEAVYRIFLE_CAMO1"):
						value = Global_262145.f_32008;
						break;
				
					case joaat("COMPONENT_AT_AR_AFGRIP"):
						value = Global_262145.f_31981;
						break;
				
					case joaat("COMPONENT_AT_AR_FLSH"):
						value = Global_262145.f_31979;
						break;
				
					case joaat("COMPONENT_AT_SCOPE_MEDIUM"):
						value = Global_262145.f_31978;
						break;
				
					case joaat("COMPONENT_AT_AR_SUPP"):
						value = Global_262145.f_31980;
						break;
				
					case joaat("COMPONENT_HEAVYRIFLE_SIGHT_01"):
						value = Global_262145.f_31977;
						break;
				}
				break;
		
			case joaat("WEAPON_TACTICALRIFLE"):
				switch (iParam1)
				{
					case joaat("COMPONENT_TACTICALRIFLE_CLIP_01"):
						value = 0;
						break;
				
					case joaat("COMPONENT_TACTICALRIFLE_CLIP_02"):
						value = *Global_262145.f_33218;
						break;
				
					case joaat("COMPONENT_AT_AR_FLSH_REH"):
						value = *Global_262145.f_33220;
						break;
				
					case joaat("COMPONENT_AT_AR_SUPP_02"):
						value = *Global_262145.f_33221;
						break;
				
					case joaat("COMPONENT_AT_AR_AFGRIP"):
						value = *Global_262145.f_33219;
						break;
				}
				break;
		
			case joaat("WEAPON_KNIFE"):
				switch (iParam1)
				{
					case 370527443:
						value = *Global_262145.f_34096;
						break;
				
					case 1109907117:
						value = *Global_262145.f_34100;
						break;
				
					case 2055456612:
						value = *Global_262145.f_34097;
						break;
				
					case 1690606566:
						value = *Global_262145.f_34098;
						break;
				
					case -1633316949:
						value = *Global_262145.f_34101;
						break;
				
					case -1461476313:
						value = *Global_262145.f_34099;
						break;
				
					case -1770422457:
						value = *Global_262145.f_34103;
						break;
				
					case -2059739958:
						value = *Global_262145.f_34102;
						break;
				
					case -1280001599:
						value = *Global_262145.f_34104;
						break;
				
					case -922885037:
						value = *Global_262145.f_34105;
						break;
				}
				break;
		
			case joaat("WEAPON_BAT"):
				switch (iParam1)
				{
					case 716207715:
						value = *Global_262145.f_34086;
						break;
				
					case 446271089:
						value = *Global_262145.f_34087;
						break;
				
					case 1045616099:
						value = *Global_262145.f_34089;
						break;
				
					case 1336277129:
						value = *Global_262145.f_34090;
						break;
				
					case -513369076:
						value = *Global_262145.f_34091;
						break;
				
					case -447700000:
						value = *Global_262145.f_34092;
						break;
				
					case -149207179:
						value = *Global_262145.f_34093;
						break;
				
					case 166784288:
						value = *Global_262145.f_34094;
						break;
				
					case 2068729789:
						value = *Global_262145.f_34095;
						break;
				
					case 1761389338:
						value = *Global_262145.f_34088;
						break;
				}
				break;
		
			case 465894841:
				switch (iParam1)
				{
					case 375646046:
						value = 0;
						break;
				
					case 503494624:
						value = *Global_262145.f_34069;
						break;
				}
				break;
		
			default:
				num3 = func_97(iParam0, &unk62);
			
				if (num3 != -1)
				{
					for (j = 0; j < unk_0x99844FCFECAC01A5(num3); j = j + 1)
					{
						if (unk_0xDDBECC1D7EC5DB2B(num3, j, &unk101))
						{
							if (!func_78(unk101.f_3))
							{
								if (unk101.f_3 == iParam1)
								{
									num = 1f;
								
									if (unk101.f_5 == -1)
										value = -1;
									else
										value = unk101.f_5;
								}
							}
						}
					}
				}
				break;
		}
	}

	if (unk_0xA26A9A07F761D8F8() && func_71())
	{
		TEXT_LABEL_ASSIGN_STRING(&unk139, func_69(iParam1, iParam0), 16);
		func_62(&unk123, unk139, unk_0x504B9BB48D41C264(unk_0xC1A5EC5C986B98AD()), 3, 1, func_67(iParam0), func_66(iParam0), -1, false, false);
	
		if (unk_0x0E4605546F88E7A3(&unk123))
			value = unk_0x054F135D011EC4C3(unk_0x14580F20CBCE4FA9(&unk123), joaat("CATEGORY_WEAPON_MOD"), 1);
	}

	if (value > 0)
	{
		num4 = func_23(iParam0, &value, num);
		num4 != 1f;
	}

	return value;
}

float func_23(int iParam0, var uParam1, float fParam2) // Position - 0x9B5D
{
	float num;
	float num2;
	int num3;

	num = 0f;
	num2 = 0f;

	if (unk_0xA26A9A07F761D8F8() && func_71())
	{
		num2 = num2 + func_61();
		num = 1f - num2;
		*uParam1 = SYSTEM::FLOOR(SYSTEM::TO_FLOAT(*uParam1) * num);
		return num;
	}

	if (!unk_0xA26A9A07F761D8F8())
		*uParam1 = SYSTEM::FLOOR(SYSTEM::TO_FLOAT(*uParam1) * fParam2);

	if (!Global_78558)
	{
		if (*uParam1 != 0)
		{
			num3 = func_52(iParam0);
		
			if (num3 == 3)
				num2 = 0.1f;
			else if (num3 == 2)
				num2 = 0.15f;
			else if (num3 == 1)
				num2 = 0.25f;
		}
	}

	if (unk_0xA26A9A07F761D8F8())
	{
		if (iLocal_54 == 1)
		{
			*uParam1 = SYSTEM::FLOOR(SYSTEM::TO_FLOAT(*uParam1) * Global_262145.f_77);
			num2 = num2 + (SYSTEM::TO_FLOAT(Global_262145.f_133) / 100f);
		}
	
		if (iLocal_54 == 0)
		{
			*uParam1 = SYSTEM::FLOOR(SYSTEM::TO_FLOAT(*uParam1) * Global_262145.f_77);
		
			if (func_24())
			{
				num2 = num2 + (SYSTEM::TO_FLOAT(Global_262145.f_133) / 100f);
				iLocal_54 = 1;
			}
			else
			{
				iLocal_54 = -1;
			}
		}
	
		num2 = num2 + func_61();
	}

	num = 1f - num2;
	*uParam1 = SYSTEM::FLOOR(SYSTEM::TO_FLOAT(*uParam1) * num);
	return num;
}

BOOL func_24() // Position - 0x9C96
{
	int value;
	int value2;
	float num;

	if (unk_0xCC17806DB0C41C19())
		return false;

	if (func_112())
	{
		if (func_27())
		{
			value = func_26();
			value2 = func_25();
			num = (SYSTEM::TO_FLOAT(value2) / SYSTEM::TO_FLOAT(value)) * 100f;
		
			if (num > (float)Global_262145.f_132 && value >= 8)
				return true;
		}
	}

	return false;
}

int func_25() // Position - 0x9CF4
{
	int num;

	num = num + Global_1665499;
	num = num + Global_1665502;
	return num;
}

int func_26() // Position - 0x9D10
{
	int num;

	num = num + Global_1665500;
	num = num + Global_1665501;
	num = num + Global_1665499;
	num = num + Global_1665502;
	num = num + Global_1665504;
	num = num + Global_1665503;
	num = num + func_12(joaat("MPPLY_EXPLOITS"));
	num = num + func_12(joaat("MPPLY_VC_ANNOYINGME"));
	num = num + func_12(joaat("MPPLY_VC_HATE"));
	num = num + func_12(joaat("MPPLY_BAD_CREW_NAME"));
	num = num + func_12(joaat("MPPLY_BAD_CREW_MOTTO"));
	num = num + func_12(joaat("MPPLY_BAD_CREW_STATUS"));
	num = num + func_12(joaat("MPPLY_BAD_CREW_EMBLEM"));
	num = num + func_12(joaat("MPPLY_PLAYERMADE_TITLE"));
	num = num + func_12(joaat("MPPLY_PLAYERMADE_DESC"));
	return num;
}

BOOL func_27() // Position - 0x9DCE
{
	var unk;
	var unk8;

	unk_0x29C15CE62DB7A939(&unk, &(unk.f_1), &(unk.f_2), &(unk.f_3), &(unk.f_4), &(unk.f_5));
	unk8 = { func_51(joaat("MPPLY_STARTED_MP")) };

	if (func_28(unk8, unk, 7))
		return true;

	return false;
}

BOOL func_28(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, int iParam14) // Position - 0x9E12
{
	int num;
	int num2;

	num = func_49(uParam7);
	num2 = func_39(uParam0, iParam14);

	if (num2 == -15)
		return false;

	if (func_29(num, num2) == 1)
		return true;

	return false;
}

int func_29(int iParam0, int iParam1) // Position - 0x9E4D
{
	int num;
	int num2;

	if (!func_37(iParam1) || !func_37(iParam0))
		return 1;

	num = func_35(iParam0);
	num2 = func_35(iParam1);

	if (num > num2)
		return 1;
	else if (num < num2)
		return 0;

	num = func_34(iParam0);
	num2 = func_34(iParam1);

	if (num > num2)
		return 1;
	else if (num < num2)
		return 0;

	num = func_33(iParam0);
	num2 = func_33(iParam1);

	if (num > num2)
		return 1;
	else if (num < num2)
		return 0;

	num = func_32(iParam0);
	num2 = func_32(iParam1);

	if (num > num2)
		return 1;
	else if (num < num2)
		return 0;

	num = func_31(iParam0);
	num2 = func_31(iParam1);

	if (num > num2)
		return 1;
	else if (num < num2)
		return 0;

	num = func_30(iParam0);
	num2 = func_30(iParam1);

	if (num > num2)
		return 1;

	return 0;
}

int func_30(int iParam0) // Position - 0x9F59
{
	return SYSTEM::SHIFT_RIGHT(iParam0, 20) & 63;
}

int func_31(int iParam0) // Position - 0x9F6C
{
	return SYSTEM::SHIFT_RIGHT(iParam0, 14) & 63;
}

int func_32(int iParam0) // Position - 0x9F7F
{
	return SYSTEM::SHIFT_RIGHT(iParam0, 9) & 31;
}

int func_33(int iParam0) // Position - 0x9F92
{
	return SYSTEM::SHIFT_RIGHT(iParam0, 4) & 31;
}

int func_34(int iParam0) // Position - 0x9FA4
{
	return iParam0 & 15;
}

int func_35(int iParam0) // Position - 0x9FB1
{
	return (SYSTEM::SHIFT_RIGHT(iParam0, 26) & 31 * IS_BIT_SET(iParam0, 31) ? -1 : 1) + 2011;
}

var func_36(BOOL bParam0, var uParam1, var uParam2) // Position - 0x9FD3
{
	if (bParam0)
		return uParam1;

	return uParam2;
}

BOOL func_37(int iParam0) // Position - 0x9FEA
{
	int num;
	int num2;
	int num3;
	int num4;
	int num5;
	int num6;

	if (iParam0 == -15)
		return false;

	num = func_30(iParam0);

	if (num < 0 || num >= 60)
		return false;

	num2 = func_31(iParam0);

	if (num2 < 0 || num2 >= 60)
		return false;

	num3 = func_32(iParam0);

	if (num3 < 0 || num3 > 23)
		return false;

	num4 = func_35(iParam0);

	if (num4 <= 0 || num4 > 2043 || num4 < 1979)
		return false;

	num5 = func_34(iParam0);

	if (num5 < 0 || num5 > 11)
		return false;

	num6 = func_33(iParam0);

	if (num6 < 1 || num6 > func_38(num5, num4))
		return false;

	return true;
}

int func_38(int iParam0, int iParam1) // Position - 0xA0C6
{
	if (iParam1 < 0)
		iParam1 = 0;

	switch (iParam0)
	{
		case 0:
		case 2:
		case 4:
		case 6:
		case 7:
		case 9:
		case 11:
			return 31;
	
		case 3:
		case 5:
		case 8:
		case 10:
			return 30;
	
		case 1:
			if (iParam1 % 4 == 0)
				if (iParam1 % 100 != 0)
					return 29;
				else if (iParam1 % 400 == 0)
					return 29;
		
			return 28;
	}

	return 30;
}

int func_39(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, int iParam7) // Position - 0xA168
{
	var unk;
	var unk2;
	var unk3;

	if (func_48(uParam0) == 0)
	{
		unk = func_49(uParam0);
		unk2 = unk;
		func_40(&unk2, 0, 0, 0, iParam7, 0, 0);
	
		if (iParam7 == 0)
			unk2 = unk;
	
		return unk2;
	}

	return unk3;
}

void func_40(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6) // Position - 0xA1A8
{
	int num;
	int i;
	int num2;
	int j;
	int k;
	int l;
	int m;

	num = func_35(*uParam0);
	i = func_34(*uParam0);
	num2 = func_33(*uParam0);
	j = func_32(*uParam0);
	k = func_31(*uParam0);
	l = func_30(*uParam0);

	if (iParam6 == 0 && iParam5 == 0 && iParam4 == 0 && iParam3 == 0 && iParam2 == 0 && iParam1 == 0)
		return;

	if (iParam1 < 0)
		return;

	if (iParam2 < 0)
		return;

	if (iParam3 < 0)
		return;

	if (iParam4 < 0)
		return;

	if (iParam5 < 0)
		return;

	if (iParam6 < 0)
		return;

	for (l = l + iParam1; l >= 60; l = l - 60)
	{
		iParam2 = iParam2 + 1;
	}

	for (k = k + iParam2; k >= 60; k = k - 60)
	{
		iParam3 = iParam3 + 1;
	}

	for (j = j + iParam3; j >= 24; j = j - 24)
	{
		iParam4 = iParam4 + 1;
	}

	num2 = num2 + iParam4;

	for (m = func_38(i, num); num2 > m; m = func_38(i, num))
	{
		i = i + 1;
		num2 = num2 - m;
	
		if (i > 11)
		{
			num = num + 1;
			i = i - 12;
		}
	}

	for (i = i + iParam5; i > 11; i = i - 12)
	{
		iParam6 = iParam6 + 1;
	}

	num = num + iParam6;
	func_41(uParam0, l, k, j, num2, i, num);
	return;
}

void func_41(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6) // Position - 0xA32A
{
	func_47(uParam0, iParam1);
	func_46(uParam0, iParam2);
	func_45(uParam0, iParam3);
	func_44(uParam0, iParam5);
	func_43(uParam0, iParam4);
	func_42(uParam0, iParam6);
	return;
}

void func_42(var uParam0, int iParam1) // Position - 0xA362
{
	if (iParam1 <= 0)
		return;

	if (iParam1 > 2043 || iParam1 < 1979)
		return;

	*uParam0 = *uParam0 - *uParam0 & 2080374784;

	if (iParam1 < 2011)
	{
		*uParam0 = *uParam0 || SYSTEM::SHIFT_LEFT(2011 - iParam1, 26);
		*uParam0 = *uParam0 | -2147483648;
	}
	else
	{
		*uParam0 = *uParam0 || SYSTEM::SHIFT_LEFT(iParam1 - 2011, 26);
		*uParam0 = *uParam0 - *uParam0 & -2147483648;
	}

	return;
}

void func_43(var uParam0, int iParam1) // Position - 0xA3E8
{
	int num;
	int num2;

	num = func_34(*uParam0);
	num2 = func_35(*uParam0);

	if (iParam1 < 1 || iParam1 > func_38(num, num2))
		return;

	*uParam0 = *uParam0 - *uParam0 & 496;
	*uParam0 = *uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 4);
	return;
}

void func_44(var uParam0, int iParam1) // Position - 0xA439
{
	if (iParam1 < 0 || iParam1 > 11)
		return;

	*uParam0 = *uParam0 - *uParam0 & 15;
	*uParam0 = *uParam0 || iParam1;
	return;
}

void func_45(var uParam0, int iParam1) // Position - 0xA46C
{
	if (iParam1 < 0 || iParam1 > 24)
		return;

	*uParam0 = *uParam0 - *uParam0 & 15872;
	*uParam0 = *uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 9);
	return;
}

void func_46(var uParam0, int iParam1) // Position - 0xA4A6
{
	if (iParam1 < 0 || iParam1 >= 60)
		return;

	*uParam0 = *uParam0 - *uParam0 & 1032192;
	*uParam0 = *uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 14);
	return;
}

void func_47(var uParam0, int iParam1) // Position - 0xA4E1
{
	if (iParam1 < 0 || iParam1 >= 60)
		return;

	*uParam0 = *uParam0 - *uParam0 & 66060288;
	*uParam0 = *uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 20);
	return;
}

int func_48(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6) // Position - 0xA51D
{
	if (iParam0 == 0 && iParam0.f_1 == 0 && iParam0.f_2 == 0 && iParam0.f_3 == 0 && iParam0.f_4 == 0 && iParam0.f_5 == 0 && iParam0.f_6 == 0)
		return 1;

	return 0;
}

var func_49(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6) // Position - 0xA573
{
	var unk;

	if (iParam0 > 0)
		func_42(&unk, iParam0);

	if (iParam0.f_1 > 0)
		func_44(&unk, func_50(iParam0.f_1));

	if (iParam0.f_2 > 0)
		func_43(&unk, iParam0.f_2);

	if (iParam0.f_3 > 0)
		func_45(&unk, iParam0.f_3);

	if (iParam0.f_4 > 0)
		func_46(&unk, iParam0.f_4);

	if (iParam0.f_5 > 0)
		func_47(&unk, iParam0.f_5);

	return unk;
}

int func_50(int iParam0) // Position - 0xA5E9
{
	if (iParam0 < 1)
		return 0;

	if (iParam0 > 12)
		return 0;

	switch (iParam0)
	{
		case 1:
			return 0;
	
		case 2:
			return 1;
	
		case 3:
			return 2;
	
		case 4:
			return 3;
	
		case 5:
			return 4;
	
		case 6:
			return 5;
	
		case 7:
			return 6;
	
		case 8:
			return 7;
	
		case 9:
			return 8;
	
		case 10:
			return 9;
	
		case 11:
			return 10;
	
		case 12:
			return 11;
	}

	return 0;
}

struct<7> func_51(int iParam0) // Position - 0xA6AE
{
	int num;
	var unk;
	var unk8;

	num = iParam0;

	if (unk_0xF8578E75E35C4FE3(num, &unk8, 7, -1))
		return unk8;

	return unk;
}

int func_52(int iParam0) // Position - 0xA6D2
{
	eCharacter character;
	int num;
	int i;
	var unk;
	BOOL flag;

	character = _GET_CURRENT_PLAYER_CHARACTER();

	if (iParam0 == 0 || !func_55(character))
		return -1;

	num = 7;

	switch (iParam0)
	{
		case joaat("WEAPON_UNARMED"):
			break;
	
		case joaat("GADGET_PARACHUTE"):
			break;
	
		case joaat("WEAPON_MICROSMG"):
			num = 1;
			break;
	
		case joaat("WEAPON_SMG"):
			num = 1;
			break;
	
		case joaat("WEAPON_SAWNOFFSHOTGUN"):
			num = 3;
			break;
	
		case joaat("WEAPON_PUMPSHOTGUN"):
			num = 3;
			break;
	
		case joaat("WEAPON_ASSAULTSHOTGUN"):
			num = 3;
			break;
	
		case joaat("WEAPON_ASSAULTRIFLE"):
			num = 2;
			break;
	
		case joaat("WEAPON_CARBINERIFLE"):
			num = 2;
			break;
	
		case joaat("WEAPON_ADVANCEDRIFLE"):
			num = 2;
			break;
	
		case joaat("WEAPON_SNIPERRIFLE"):
			break;
	
		case joaat("WEAPON_HEAVYSNIPER"):
			break;
	
		case joaat("WEAPON_MG"):
			num = 4;
			break;
	
		case joaat("WEAPON_COMBATMG"):
			num = 4;
			break;
	
		case joaat("WEAPON_RPG"):
			break;
	
		case joaat("WEAPON_GRENADELAUNCHER"):
			break;
	
		case joaat("WEAPON_MINIGUN"):
			num = 5;
			break;
	
		case joaat("WEAPON_KNIFE"):
			break;
	
		case joaat("WEAPON_NIGHTSTICK"):
			break;
	
		case joaat("WEAPON_PETROLCAN"):
			break;
	
		case joaat("WEAPON_STUNGUN"):
			break;
	
		case joaat("WEAPON_APPISTOL"):
			num = 0;
			break;
	
		case joaat("WEAPON_COMBATPISTOL"):
			num = 0;
			break;
	
		case joaat("WEAPON_PISTOL"):
			num = 0;
			break;
	
		case joaat("WEAPON_SMOKEGRENADE"):
			break;
	
		case joaat("WEAPON_GRENADE"):
			break;
	
		case joaat("WEAPON_STICKYBOMB"):
			break;
	}

	if (num != 7)
	{
		switch (func_53(num, character))
		{
			case 1:
				return 3;
		
			case 2:
				return 2;
		
			case 3:
				return 1;
		}
	}
	else
	{
		unk = 6;
		unk[0] = func_53(1, character);
		unk[1] = func_53(3, character);
		unk[2] = func_53(2, character);
		unk[3] = func_53(4, character);
		unk[4] = func_53(5, character);
		unk[5] = func_53(0, character);
		flag = false;
	
		for (i = 0; i < 6; i = i + 1)
		{
			if (unk[i] < 3)
				flag = true;
		}
	
		if (!flag)
			return 1;
	
		flag = false;
	
		for (i = 0; i < 6; i = i + 1)
		{
			if (unk[i] < 2)
				flag = true;
		}
	
		if (!flag)
			return 2;
	
		flag = false;
	
		for (i = 0; i < 6; i = i + 1)
		{
			if (unk[i] < 1)
				flag = true;
		}
	
		if (!flag)
			return 3;
	}

	return -1;
}

int func_53(int iParam0, eCharacter echParam1) // Position - 0xA92E
{
	int num;
	int num2;
	int num3;
	int num4;
	int num5;

	if (iParam0 == 0)
	{
		num = 0;
		num2 = 1;
		num3 = 2;
		num4 = -1;
	}
	else if (iParam0 == 1)
	{
		num = 3;
		num2 = 4;
		num3 = 5;
		num4 = -1;
	}
	else if (iParam0 == 2)
	{
		num = 9;
		num2 = 10;
		num3 = 11;
		num4 = -1;
	}
	else if (iParam0 == 3)
	{
		num = 6;
		num2 = 7;
		num3 = 8;
		num4 = -1;
	}
	else if (iParam0 == 4)
	{
		num = 12;
		num2 = 13;
		num3 = 14;
		num4 = -1;
	}
	else if (iParam0 == 5)
	{
		num = 15;
		num2 = 16;
		num3 = 17;
		num4 = -1;
	}
	else if (iParam0 == 6)
	{
		num = 18;
		num2 = 19;
		num3 = 20;
		num4 = 21;
	}
	else
	{
		return 0;
	}

	num5 = func_54(num, echParam1);

	if (func_54(num2, echParam1) < num5)
		num5 = func_54(num2, echParam1);

	if (func_54(num3, echParam1) < num5)
		num5 = func_54(num3, echParam1);

	if (num4 != -1)
		if (func_54(num4, echParam1) < num5)
			num5 = func_54(num4, echParam1);

	return num5;
}

int func_54(int iParam0, eCharacter echParam1) // Position - 0xAA32
{
	return Global_113648.f_19149[echParam1 /*271*/].f_3[iParam0 /*12*/].f_3;
}

BOOL func_55(eCharacter echParam0) // Position - 0xAA4E
{
	return echParam0 < CHAR_MULTIPLAYER;
}

eCharacter _GET_CURRENT_PLAYER_CHARACTER() // Position - 0xAA5A
{
	func_57();
	return Global_113648.f_2365.f_539.f_4321;
}

void func_57() // Position - 0xAA73
{
	eCharacter character;

	if (unk_0x7DE17ACDD8BA2642(unk_0xC1A5EC5C986B98AD()))
	{
		if (_GET_CHARACTER_MODEL(Global_113648.f_2365.f_539.f_4321) != unk_0x504B9BB48D41C264(unk_0xC1A5EC5C986B98AD()))
		{
			character = _GET_PLAYER_CHARACTER_FROM_PED(unk_0xC1A5EC5C986B98AD());
		
			if (func_55(character) && !func_170(14) || Global_112599)
			{
				if (Global_113648.f_2365.f_539.f_4321 != character && func_55(Global_113648.f_2365.f_539.f_4321))
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

eCharacter _GET_PLAYER_CHARACTER_FROM_PED(var uParam0) // Position - 0xAB70
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

int _GET_CHARACTER_MODEL(eCharacter character) // Position - 0xABAD
{
	if (func_55(character))
		return func_60(character);
	else
		character != _CHAR_NULL;

	return 0;
}

int func_60(eCharacter echParam0) // Position - 0xABD2
{
	return Global_2028[echParam0 /*29*/];
}

var func_61() // Position - 0xABE1
{
	return Global_100733.f_2088;
}

void func_62(char* sParam0, var uParam1, var uParam2, var uParam3, var uParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, BOOL bParam11, BOOL bParam12) // Position - 0xABF0
{
	switch (unk_0x14580F20CBCE4FA9(&uParam1))
	{
		case joaat("GSA_TYPE_R1"):
		case joaat("GSA_TYPE_R"):
			TEXT_LABEL_ASSIGN_STRING(&uParam1, "GSA_TYPE_R", 16);
			break;
	
		case joaat("GSA_TYPE_C1"):
		case joaat("GSA_TYPE_C"):
			TEXT_LABEL_ASSIGN_STRING(&uParam1, "GSA_TYPE_C", 16);
			break;
	
		case joaat("GSA_TYPE_RO1"):
		case joaat("GSA_TYPE_RO"):
			TEXT_LABEL_ASSIGN_STRING(&uParam1, "GSA_TYPE_RO", 16);
			break;
	
		case joaat("GSA_TYPE_CH1"):
		case joaat("GSA_TYPE_CH"):
			TEXT_LABEL_ASSIGN_STRING(&uParam1, "GSA_TYPE_CH", 16);
			break;
	
		case joaat("GSA_TYPE_G1"):
		case joaat("GSA_TYPE_G"):
			TEXT_LABEL_ASSIGN_STRING(&uParam1, "GSA_TYPE_G", 16);
			break;
	
		case joaat("GSA_TYPE_B1"):
		case joaat("GSA_TYPE_B"):
			TEXT_LABEL_ASSIGN_STRING(&uParam1, "GSA_TYPE_B", 16);
			break;
	
		case joaat("GSA_TYPE_FW1"):
		case joaat("GSA_TYPE_FW"):
			TEXT_LABEL_ASSIGN_STRING(&uParam1, "GSA_TYPE_FW" /*Fireworks*/, 16);
			break;
	}

	TEXT_LABEL_ASSIGN_STRING(sParam0, "", 64);

	switch (iParam6)
	{
		case 0:
			if (iParam5 == joaat("MP_M_Freemode_01"))
				TEXT_LABEL_ASSIGN_STRING(sParam0, "M", 64);
			else if (iParam5 == joaat("MP_F_Freemode_01"))
				TEXT_LABEL_ASSIGN_STRING(sParam0, "F", 64);
		
			TEXT_LABEL_APPEND_STRING(sParam0, "_HA_", 64);
			TEXT_LABEL_APPEND_STRING(sParam0, &uParam1, 64);
			TEXT_LABEL_APPEND_STRING(sParam0, "_t", 64);
			TEXT_LABEL_APPEND_INT(sParam0, iParam7, 64);
			TEXT_LABEL_APPEND_STRING(sParam0, "_v", 64);
			TEXT_LABEL_APPEND_INT(sParam0, iParam8, 64);
			break;
	
		case 1:
			if (iParam5 == joaat("MP_M_Freemode_01"))
				TEXT_LABEL_ASSIGN_STRING(sParam0, "M", 64);
			else if (iParam5 == joaat("MP_F_Freemode_01"))
				TEXT_LABEL_ASSIGN_STRING(sParam0, "F", 64);
		
			TEXT_LABEL_APPEND_STRING(sParam0, "_CL_", 64);
		
			if (iParam7 == 12)
				TEXT_LABEL_APPEND_STRING(sParam0, "OUTFIT_", 64);
		
			TEXT_LABEL_APPEND_STRING(sParam0, &uParam1, 64);
		
			if (iParam9 != -1)
			{
				TEXT_LABEL_APPEND_STRING(sParam0, "_n", 64);
				TEXT_LABEL_APPEND_INT(sParam0, iParam9, 64);
			}
		
			TEXT_LABEL_APPEND_STRING(sParam0, "_t", 64);
			TEXT_LABEL_APPEND_INT(sParam0, iParam7, 64);
			TEXT_LABEL_APPEND_STRING(sParam0, "_v", 64);
			TEXT_LABEL_APPEND_INT(sParam0, iParam8, 64);
		
			if (iParam10 != -1)
			{
				TEXT_LABEL_APPEND_STRING(sParam0, "_p", 64);
				TEXT_LABEL_APPEND_INT(sParam0, iParam10, 64);
			}
			break;
	
		case 2:
			if (iParam5 == joaat("MP_M_Freemode_01"))
				TEXT_LABEL_ASSIGN_STRING(sParam0, "M", 64);
			else if (iParam5 == joaat("MP_F_Freemode_01"))
				TEXT_LABEL_ASSIGN_STRING(sParam0, "F", 64);
		
			TEXT_LABEL_APPEND_STRING(sParam0, "_TA_", 64);
			TEXT_LABEL_APPEND_STRING(sParam0, &uParam1, 64);
			TEXT_LABEL_APPEND_STRING(sParam0, "_t", 64);
			TEXT_LABEL_APPEND_INT(sParam0, iParam7, 64);
			TEXT_LABEL_APPEND_STRING(sParam0, "_v", 64);
			TEXT_LABEL_APPEND_INT(sParam0, iParam8, 64);
			break;
	
		case 3:
			TEXT_LABEL_APPEND_STRING(sParam0, "WP_", 64);
			TEXT_LABEL_APPEND_STRING(sParam0, &uParam1, 64);
			TEXT_LABEL_APPEND_STRING(sParam0, "_t", 64);
			TEXT_LABEL_APPEND_INT(sParam0, iParam7, 64);
			TEXT_LABEL_APPEND_STRING(sParam0, "_v", 64);
			TEXT_LABEL_APPEND_INT(sParam0, iParam8, 64);
		
			if (iParam9 != -1)
			{
				TEXT_LABEL_APPEND_STRING(sParam0, "_n", 64);
				TEXT_LABEL_APPEND_INT(sParam0, iParam9, 64);
			}
			break;
	
		case 4:
			if (iParam5 == Global_75654)
			{
				TEXT_LABEL_ASSIGN_STRING(sParam0, "VE_BIG_YACHT_t0_v0", 64);
			}
			else if (iParam5 == Global_75655)
			{
				TEXT_LABEL_ASSIGN_STRING(sParam0, "VE_BIG_TRUCK_t0_v0", 64);
			}
			else if (iParam5 == Global_75656)
			{
				TEXT_LABEL_ASSIGN_STRING(sParam0, "VE_BALLISTIC_EQUIPMENT_t0_v0", 64);
			}
			else if (iParam5 == Global_75657)
			{
				TEXT_LABEL_ASSIGN_STRING(sParam0, "VE_BIG_PLANE_t0_v0", 64);
			}
			else if (iParam5 == Global_75658)
			{
				TEXT_LABEL_ASSIGN_STRING(sParam0, "VE_HACKER_TRUCK_t0_v0", 64);
			}
			else if (iParam5 == func_65())
			{
				TEXT_LABEL_ASSIGN_STRING(sParam0, "VE_KOSATKA_t0_v0", 64);
			}
			else if (iParam5 == func_64())
			{
				if (iParam7 == 40)
					TEXT_LABEL_ASSIGN_STRING(sParam0, "VEU_BRICKADE2_t0_v0", 64);
				else if (iParam7 == 2)
					TEXT_LABEL_ASSIGN_STRING(sParam0, "VE_BRICKADE2_t2_v38", 64);
				else if (iParam7 == 1)
					TEXT_LABEL_ASSIGN_STRING(sParam0, "VE_BRICKADE2_t1_v38", 64);
				else
					TEXT_LABEL_ASSIGN_STRING(sParam0, "VE_BRICKADE2_t0_v38", 64);
			}
			else if (iParam5 == func_63())
			{
				if (iParam7 == 1)
					TEXT_LABEL_ASSIGN_STRING(sParam0, "VE_MANCHEZ3_t1_v4", 64);
				else
					TEXT_LABEL_ASSIGN_STRING(sParam0, "VE_MANCHEZ3_t0_v4", 64);
			}
			else if (iParam5 == 0)
			{
				TEXT_LABEL_APPEND_STRING(sParam0, "VEM_", 64);
			
				if (iParam7 == 24 || iParam7 == 25)
				{
					if (iParam9 == 1)
						TEXT_LABEL_APPEND_STRING(sParam0, "COLOUR_1_", 64);
					else if (iParam9 == 2)
						TEXT_LABEL_APPEND_STRING(sParam0, "COLOUR_2_", 64);
					else if (iParam9 == 3)
						TEXT_LABEL_APPEND_STRING(sParam0, "COLOUR_EXTRA_1_", 64);
				
					if (iParam10 == 5)
						TEXT_LABEL_APPEND_STRING(sParam0, "MCT_CHROME_", 64);
					else if (iParam10 == 1)
						TEXT_LABEL_APPEND_STRING(sParam0, "MCT_CLASSIC_", 64);
					else if (iParam10 == 0)
						TEXT_LABEL_APPEND_STRING(sParam0, "MCT_METALLIC_", 64);
					else if (iParam10 == 4)
						TEXT_LABEL_APPEND_STRING(sParam0, "MCT_METALS_", 64);
					else if (iParam10 == 3)
						TEXT_LABEL_APPEND_STRING(sParam0, "MCT_MATTE_", 64);
					else if (iParam10 == 2)
						TEXT_LABEL_APPEND_STRING(sParam0, "MCT_PEARLESCENT_", 64);
					else if (iParam10 == 7)
						TEXT_LABEL_APPEND_STRING(sParam0, "MCT_NONE_", 64);
				
					iParam9 = -1;
				}
				else if (iParam7 == 38)
				{
					TEXT_LABEL_APPEND_STRING(sParam0, "COLOUR_5_", 64);
				}
				else if (iParam7 == 65)
				{
					TEXT_LABEL_APPEND_STRING(sParam0, "COLOUR_6_", 64);
				}
			
				TEXT_LABEL_APPEND_STRING(sParam0, &uParam1, 64);
			
				if (iParam9 != -1)
				{
					TEXT_LABEL_APPEND_STRING(sParam0, "_n", 64);
					TEXT_LABEL_APPEND_INT(sParam0, iParam9, 64);
				}
			
				TEXT_LABEL_APPEND_STRING(sParam0, "_t", 64);
				TEXT_LABEL_APPEND_INT(sParam0, iParam7, 64);
				TEXT_LABEL_APPEND_STRING(sParam0, "_v", 64);
				TEXT_LABEL_APPEND_INT(sParam0, iParam8, 64);
			}
			else if (iParam7 == 22)
			{
				TEXT_LABEL_ASSIGN_STRING(&uParam1, unk_0x749766113BB6FF2D(iParam5), 16);
			
				if (unk_0x2AC37494BBF1DB16(&uParam1) || unk_0x14580F20CBCE4FA9(&uParam1) == joaat("carnotfound"))
					return;
			
				TEXT_LABEL_APPEND_STRING(sParam0, "VEM_INSURANCE_", 64);
				TEXT_LABEL_APPEND_STRING(sParam0, &uParam1, 64);
			
				if (!bParam11)
				{
					switch (iParam5)
					{
						case joaat("dubsta2"):
						case joaat("cavalcade2"):
						case joaat("mesa2"):
						case joaat("rapidgt2"):
						case joaat("emperor2"):
						case joaat("cargobob2"):
							TEXT_LABEL_APPEND_STRING(sParam0, "2", 64);
							break;
					
						case joaat("mesa3"):
						case joaat("emperor3"):
						case joaat("burrito3"):
						case joaat("mule3"):
							TEXT_LABEL_APPEND_STRING(sParam0, "3", 64);
							break;
					
						case joaat("tornado4"):
							TEXT_LABEL_APPEND_STRING(sParam0, "4", 64);
							break;
					}
				}
			}
			else if (iParam7 == 40)
			{
				switch (iParam5)
				{
					case joaat("fcr2"):
						TEXT_LABEL_ASSIGN_STRING(&uParam1, "FCR2", 16);
						break;
				
					case joaat("diablous2"):
						TEXT_LABEL_ASSIGN_STRING(&uParam1, "DIABLOUS2", 16);
						break;
				
					case joaat("comet3"):
						TEXT_LABEL_ASSIGN_STRING(&uParam1, "COMET3", 16);
						break;
				
					default:
						TEXT_LABEL_ASSIGN_STRING(&uParam1, unk_0x749766113BB6FF2D(iParam5), 16);
					
						if (unk_0x2AC37494BBF1DB16(&uParam1))
							return;
						break;
				}
			
				TEXT_LABEL_APPEND_STRING(sParam0, "VEU_", 64);
				TEXT_LABEL_APPEND_STRING(sParam0, &uParam1, 64);
				TEXT_LABEL_APPEND_STRING(sParam0, "_t0_v", 64);
				TEXT_LABEL_APPEND_INT(sParam0, iParam8, 64);
			}
			else
			{
				TEXT_LABEL_APPEND_STRING(sParam0, "VE_", 64);
				TEXT_LABEL_APPEND_STRING(sParam0, &uParam1, 64);
			
				if (!bParam11)
				{
					switch (iParam5)
					{
						case joaat("dubsta2"):
						case joaat("cavalcade2"):
						case joaat("mesa2"):
						case joaat("rapidgt2"):
						case joaat("emperor2"):
						case joaat("cargobob2"):
							TEXT_LABEL_APPEND_STRING(sParam0, "2", 64);
							break;
					
						case joaat("mesa3"):
						case joaat("emperor3"):
						case joaat("burrito3"):
						case joaat("mule3"):
							TEXT_LABEL_APPEND_STRING(sParam0, "3", 64);
							break;
					
						case joaat("tornado4"):
							TEXT_LABEL_APPEND_STRING(sParam0, "4", 64);
							break;
					}
				}
			
				if (iParam9 != -1)
				{
					TEXT_LABEL_APPEND_STRING(sParam0, "_n", 64);
					TEXT_LABEL_APPEND_INT(sParam0, iParam9, 64);
				}
			
				TEXT_LABEL_APPEND_STRING(sParam0, "_t", 64);
				TEXT_LABEL_APPEND_INT(sParam0, iParam7, 64);
				TEXT_LABEL_APPEND_STRING(sParam0, "_v", 64);
				TEXT_LABEL_APPEND_INT(sParam0, iParam8, 64);
			
				if (iParam10 != -1)
				{
					TEXT_LABEL_APPEND_STRING(sParam0, "_p", 64);
					TEXT_LABEL_APPEND_INT(sParam0, iParam10, 64);
				}
			}
			break;
	}

	if (bParam12)
		TEXT_LABEL_APPEND_STRING(sParam0, "_CESP", 64);

	return;
}

int func_63() // Position - 0xB220
{
	return 1384502824;
}

int func_64() // Position - 0xB22D
{
	return -1576586413;
}

int func_65() // Position - 0xB23A
{
	return joaat("kosatka");
}

int func_66(int iParam0) // Position - 0xB247
{
	switch (iParam0)
	{
		case joaat("WEAPON_PISTOL_MK2"):
		case joaat("WEAPON_SMG_MK2"):
		case joaat("WEAPON_ASSAULTRIFLE_MK2"):
		case joaat("WEAPON_CARBINERIFLE_MK2"):
		case joaat("WEAPON_COMBATMG_MK2"):
		case joaat("WEAPON_HEAVYSNIPER_MK2"):
		case joaat("WEAPON_PUMPSHOTGUN_MK2"):
		case joaat("WEAPON_SPECIALCARBINE_MK2"):
		case joaat("WEAPON_SNSPISTOL_MK2"):
		case joaat("WEAPON_MARKSMANRIFLE_MK2"):
		case joaat("WEAPON_REVOLVER_MK2"):
		case joaat("WEAPON_BULLPUPRIFLE_MK2"):
			return 2;
	}

	return -1;
}

int func_67(int iParam0) // Position - 0xB2A6
{
	return func_68(iParam0);
}

int func_68(int iParam0) // Position - 0xB2B4
{
	switch (iParam0)
	{
		case joaat("WEAPON_UNARMED"):
			return 0;
	
		case joaat("WEAPON_PISTOL"):
			return 1;
	
		case joaat("WEAPON_COMBATPISTOL"):
			return 2;
	
		case joaat("WEAPON_APPISTOL"):
			return 3;
	
		case joaat("WEAPON_PISTOL50"):
			return 4;
	
		case joaat("WEAPON_SMG"):
			return 5;
	
		case joaat("WEAPON_ASSAULTSMG"):
			return 6;
	
		case joaat("WEAPON_MICROSMG"):
			return 7;
	
		case joaat("WEAPON_ASSAULTRIFLE"):
			return 8;
	
		case joaat("WEAPON_CARBINERIFLE"):
			return 9;
	
		case joaat("WEAPON_ADVANCEDRIFLE"):
			return 11;
	
		case joaat("WEAPON_MG"):
			return 12;
	
		case joaat("WEAPON_COMBATMG"):
			return 13;
	
		case joaat("WEAPON_ASSAULTMG"):
			return 14;
	
		case joaat("WEAPON_STICKYBOMB"):
			return 15;
	
		case joaat("WEAPON_GRENADE"):
			return 16;
	
		case joaat("WEAPON_SMOKEGRENADE"):
			return 17;
	
		case joaat("WEAPON_REMOTESNIPER"):
			return 18;
	
		case joaat("WEAPON_ASSAULTSNIPER"):
			return 19;
	
		case joaat("WEAPON_SNIPERRIFLE"):
			return 20;
	
		case joaat("WEAPON_HEAVYSNIPER"):
			return 21;
	
		case joaat("WEAPON_PUMPSHOTGUN"):
			return 22;
	
		case joaat("WEAPON_BULLPUPSHOTGUN"):
			return 23;
	
		case joaat("WEAPON_ASSAULTSHOTGUN"):
			return 24;
	
		case joaat("WEAPON_SAWNOFFSHOTGUN"):
			return 25;
	
		case joaat("WEAPON_GRENADELAUNCHER"):
			return 26;
	
		case joaat("WEAPON_RPG"):
			return 27;
	
		case joaat("WEAPON_MINIGUN"):
			return 28;
	
		case joaat("WEAPON_LOUDHAILER"):
			return 29;
	
		case joaat("WEAPON_PROGRAMMABLEAR"):
			return 30;
	
		case joaat("WEAPON_STUNGUN"):
			return 31;
	
		case joaat("WEAPON_RUBBERGUN"):
			return 32;
	
		case joaat("GADGET_PARACHUTE"):
			return 33;
	
		case joaat("WEAPON_KNIFE"):
			return 34;
	
		case joaat("WEAPON_NIGHTSTICK"):
			return 35;
	
		case joaat("WEAPON_HAMMER"):
			return 36;
	
		case joaat("WEAPON_BAT"):
			return 37;
	
		case joaat("WEAPON_CROWBAR"):
			return 38;
	
		case joaat("WEAPON_GOLFCLUB"):
			return 39;
	
		case joaat("WEAPON_GRENADELAUNCHER_SMOKE"):
			return 40;
	
		case joaat("WEAPON_MOLOTOV"):
			return 41;
	
		case joaat("WEAPON_FIREEXTINGUISHER"):
			return 42;
	
		case joaat("WEAPON_PETROLCAN"):
			return 43;
	
		case joaat("WEAPON_DIGISCANNER"):
			return 44;
	
		case joaat("WEAPON_BOTTLE"):
			return 45;
	
		case joaat("WEAPON_SPECIALCARBINE"):
			return 46;
	
		case joaat("WEAPON_SNSPISTOL"):
			return 47;
	
		case joaat("WEAPON_HEAVYPISTOL"):
			return 49;
	
		case joaat("WEAPON_BULLPUPRIFLE"):
			return 48;
	
		case joaat("WEAPON_GUSENBERG"):
			return 50;
	
		case joaat("WEAPON_DAGGER"):
			return 51;
	
		case joaat("WEAPON_VINTAGEPISTOL"):
			return 52;
	
		case joaat("WEAPON_FLAREGUN"):
			return 57;
	
		case joaat("WEAPON_MUSKET"):
			return 53;
	
		case joaat("WEAPON_FIREWORK"):
			return 54;
	
		case joaat("WEAPON_MARKSMANRIFLE"):
			return 56;
	
		case joaat("WEAPON_HEAVYSHOTGUN"):
			return 55;
	
		case joaat("WEAPON_PROXMINE"):
			return 60;
	
		case joaat("WEAPON_HOMINGLAUNCHER"):
			return 61;
	
		case joaat("WEAPON_HATCHET"):
			return 58;
	
		case joaat("WEAPON_RAILGUN"):
			return 59;
	
		case joaat("WEAPON_COMBATPDW"):
			return 64;
	
		case joaat("WEAPON_KNUCKLE"):
			return 62;
	
		case joaat("WEAPON_MARKSMANPISTOL"):
			return 63;
	
		case joaat("WEAPON_MACHETE"):
			return 65;
	
		case joaat("WEAPON_MACHINEPISTOL"):
			return 68;
	
		case joaat("WEAPON_DBSHOTGUN"):
			return 66;
	
		case joaat("WEAPON_COMPACTRIFLE"):
			return 67;
	
		case joaat("WEAPON_FLASHLIGHT"):
			return 69;
	
		case joaat("WEAPON_REVOLVER"):
			return 70;
	
		case joaat("WEAPON_SWITCHBLADE"):
			return 71;
	
		case joaat("WEAPON_AUTOSHOTGUN"):
			return 72;
	
		case joaat("WEAPON_MINISMG"):
			return 73;
	
		case joaat("WEAPON_COMPACTLAUNCHER"):
			return 74;
	
		case joaat("WEAPON_BATTLEAXE"):
			return 75;
	
		case joaat("WEAPON_PIPEBOMB"):
			return 76;
	
		case joaat("WEAPON_POOLCUE"):
			return 77;
	
		case joaat("WEAPON_WRENCH"):
			return 78;
	
		case joaat("WEAPON_ASSAULTRIFLE_MK2"):
			return 8;
	
		case joaat("WEAPON_CARBINERIFLE_MK2"):
			return 9;
	
		case joaat("WEAPON_COMBATMG_MK2"):
			return 13;
	
		case joaat("WEAPON_HEAVYSNIPER_MK2"):
			return 21;
	
		case joaat("WEAPON_PISTOL_MK2"):
			return 1;
	
		case joaat("WEAPON_SMG_MK2"):
			return 5;
	
		case joaat("WEAPON_PUMPSHOTGUN_MK2"):
			return 22;
	
		case joaat("WEAPON_SPECIALCARBINE_MK2"):
			return 46;
	
		case joaat("WEAPON_SNSPISTOL_MK2"):
			return 47;
	
		case joaat("WEAPON_MARKSMANRIFLE_MK2"):
			return 56;
	
		case joaat("WEAPON_REVOLVER_MK2"):
			return 70;
	
		case joaat("WEAPON_BULLPUPRIFLE_MK2"):
			return 48;
	
		case joaat("WEAPON_DOUBLEACTION"):
			return 79;
	
		case joaat("WEAPON_STONE_HATCHET"):
			return 80;
	
		case joaat("WEAPON_RAYPISTOL"):
			return 81;
	
		case joaat("WEAPON_RAYCARBINE"):
			return 82;
	
		case joaat("WEAPON_RAYMINIGUN"):
			return 83;
	
		case joaat("WEAPON_NAVYREVOLVER"):
			return 84;
	
		case joaat("WEAPON_CERAMICPISTOL"):
			return 85;
	
		case joaat("WEAPON_COMBATSHOTGUN"):
			return 86;
	
		case joaat("WEAPON_MILITARYRIFLE"):
			return 88;
	
		case joaat("WEAPON_GADGETPISTOL"):
			return 87;
	
		case joaat("WEAPON_HEAVYRIFLE"):
			return 10;
	
		case joaat("WEAPON_EMPLAUNCHER"):
			return 89;
	
		case joaat("WEAPON_FERTILIZERCAN"):
			return 90;
	
		case joaat("WEAPON_STUNGUN_MP"):
			return 91;
	
		case joaat("WEAPON_METALDETECTOR"):
			return 92;
	
		case joaat("WEAPON_TACTICALRIFLE"):
			return 93;
	
		case joaat("WEAPON_PRECISIONRIFLE"):
			return 94;
	
		case 465894841:
			return 95;
	
		case 1703483498:
			return 96;
	
		case -22923932:
			return 97;
	}

	return 0;
}

char* func_69(int iParam0, int iParam1) // Position - 0xB8BE
{
	int num;
	int i;
	var unk;
	var unk40;

	if (iParam1 == joaat("WEAPON_KNUCKLE"))
	{
		switch (iParam0)
		{
			case joaat("COMPONENT_KNUCKLE_VARMOD_BASE"):
				return "WT_KNUCKLE" /*Knuckle Duster*/;
		
			case joaat("COMPONENT_KNUCKLE_VARMOD_PIMP"):
				return "WCT_KNUCK_02";
		
			case joaat("COMPONENT_KNUCKLE_VARMOD_BALLAS"):
				return "WCT_KNUCK_BG";
		
			case joaat("COMPONENT_KNUCKLE_VARMOD_DOLLAR"):
				return "WCT_KNUCK_DLR";
		
			case joaat("COMPONENT_KNUCKLE_VARMOD_DIAMOND"):
				return "WCT_KNUCK_DMD";
		
			case joaat("COMPONENT_KNUCKLE_VARMOD_HATE"):
				return "WCT_KNUCK_HT";
		
			case joaat("COMPONENT_KNUCKLE_VARMOD_LOVE"):
				return "WCT_KNUCK_LV";
		
			case joaat("COMPONENT_KNUCKLE_VARMOD_PLAYER"):
				return "WCT_KNUCK_PC";
		
			case joaat("COMPONENT_KNUCKLE_VARMOD_KING"):
				return "WCT_KNUCK_SLG";
		
			case joaat("COMPONENT_KNUCKLE_VARMOD_VAGOS"):
				return "WCT_KNUCK_VG";
		}
	}
	else if (iParam1 == joaat("WEAPON_BAT"))
	{
		switch (iParam0)
		{
			case 716207715:
				return "WCT_BAT_XM3";
		
			case 446271089:
				return "WCT_BAT_XM301";
		
			case 1045616099:
				return "WCT_BAT_XM302";
		
			case 1336277129:
				return "WCT_BAT_XM303";
		
			case -513369076:
				return "WCT_BAT_XM304";
		
			case -447700000:
				return "WCT_BAT_XM305";
		
			case -149207179:
				return "WCT_BAT_XM306";
		
			case 166784288:
				return "WCT_BAT_XM307";
		
			case 2068729789:
				return "WCT_BAT_XM308";
		
			case 1761389338:
				return "WCT_BAT_XM309";
		}
	}
	else if (iParam1 == joaat("WEAPON_KNIFE"))
	{
		switch (iParam0)
		{
			case 370527443:
				return "WCT_KNIFE_XM3";
		
			case 1109907117:
				return "WCT_KNIFE_XM301";
		
			case 2055456612:
				return "WCT_KNIFE_XM302";
		
			case 1690606566:
				return "WCT_KNIFE_XM303";
		
			case -1633316949:
				return "WCT_KNIFE_XM304";
		
			case -1461476313:
				return "WCT_KNIFE_XM305";
		
			case -1770422457:
				return "WCT_KNIFE_XM306";
		
			case -2059739958:
				return "WCT_KNIFE_XM307";
		
			case -1280001599:
				return "WCT_KNIFE_XM308";
		
			case -922885037:
				return "WCT_KNIFE_XM309";
		}
	}

	switch (iParam0)
	{
		case 0:
			return "WCT_NONE" /*No Attachment*/;
	
		case joaat("COMPONENT_AT_RAILCOVER_01"):
			return "WCT_RAIL";
	
		case joaat("COMPONENT_AT_AR_AFGRIP"):
			return "WCT_GRIP" /*Grip*/;
	
		case joaat("COMPONENT_AT_PI_FLSH"):
			return "WCT_FLASH" /*Flashlight*/;
	
		case joaat("COMPONENT_AT_AR_FLSH"):
			return "WCT_FLASH" /*Flashlight*/;
	
		case joaat("COMPONENT_AT_SCOPE_MACRO"):
			return "WCT_SCOPE_MAC" /*Scope*/;
	
		case joaat("COMPONENT_AT_SCOPE_MACRO_02"):
			return "WCT_SCOPE_MAC" /*Scope*/;
	
		case joaat("COMPONENT_AT_SCOPE_SMALL"):
			return "WCT_SCOPE_SML" /*Scope*/;
	
		case joaat("COMPONENT_AT_SCOPE_SMALL_02"):
			return "WCT_SCOPE_SML" /*Scope*/;
	
		case joaat("COMPONENT_AT_SCOPE_MEDIUM"):
			return "WCT_SCOPE_MED" /*Scope*/;
	
		case joaat("COMPONENT_AT_SCOPE_LARGE"):
			return "WCT_SCOPE_LRG" /*Scope*/;
	
		case joaat("COMPONENT_AT_SCOPE_MAX"):
			return "WCT_SCOPE_MAX" /*Advanced Scope*/;
	
		case joaat("COMPONENT_AT_PI_SUPP"):
			return "WCT_SUPP" /*Suppressor*/;
	
		case joaat("COMPONENT_AT_AR_SUPP"):
			return "WCT_SUPP" /*Suppressor*/;
	
		case joaat("COMPONENT_AT_AR_SUPP_02"):
			return "WCT_SUPP" /*Suppressor*/;
	
		case joaat("COMPONENT_AT_SR_SUPP"):
			return "WCT_SUPP" /*Suppressor*/;
	
		case joaat("COMPONENT_PISTOL_CLIP_01"):
			return "WCT_CLIP1" /*Default Clip*/;
	
		case joaat("COMPONENT_PISTOL_CLIP_02"):
			return "WCT_CLIP2" /*Extended Clip*/;
	
		case joaat("COMPONENT_COMBATPISTOL_CLIP_01"):
			return "WCT_CLIP1" /*Default Clip*/;
	
		case joaat("COMPONENT_COMBATPISTOL_CLIP_02"):
			return "WCT_CLIP2" /*Extended Clip*/;
	
		case joaat("COMPONENT_APPISTOL_CLIP_01"):
			return "WCT_CLIP1" /*Default Clip*/;
	
		case joaat("COMPONENT_APPISTOL_CLIP_02"):
			return "WCT_CLIP2" /*Extended Clip*/;
	
		case joaat("COMPONENT_MICROSMG_CLIP_01"):
			return "WCT_CLIP1" /*Default Clip*/;
	
		case joaat("COMPONENT_MICROSMG_CLIP_02"):
			return "WCT_CLIP2" /*Extended Clip*/;
	
		case joaat("COMPONENT_SMG_CLIP_01"):
			return "WCT_CLIP1" /*Default Clip*/;
	
		case joaat("COMPONENT_SMG_CLIP_02"):
			return "WCT_CLIP2" /*Extended Clip*/;
	
		case joaat("COMPONENT_ASSAULTRIFLE_CLIP_01"):
			return "WCT_CLIP1" /*Default Clip*/;
	
		case joaat("COMPONENT_ASSAULTRIFLE_CLIP_02"):
			return "WCT_CLIP2" /*Extended Clip*/;
	
		case joaat("COMPONENT_CARBINERIFLE_CLIP_01"):
			return "WCT_CLIP1" /*Default Clip*/;
	
		case joaat("COMPONENT_CARBINERIFLE_CLIP_02"):
			return "WCT_CLIP2" /*Extended Clip*/;
	
		case joaat("COMPONENT_ADVANCEDRIFLE_CLIP_01"):
			return "WCT_CLIP1" /*Default Clip*/;
	
		case joaat("COMPONENT_ADVANCEDRIFLE_CLIP_02"):
			return "WCT_CLIP2" /*Extended Clip*/;
	
		case joaat("COMPONENT_MG_CLIP_01"):
			return "WCT_CLIP1" /*Default Clip*/;
	
		case joaat("COMPONENT_MG_CLIP_02"):
			return "WCT_CLIP2" /*Extended Clip*/;
	
		case joaat("COMPONENT_COMBATMG_CLIP_01"):
			return "WCT_CLIP1" /*Default Clip*/;
	
		case joaat("COMPONENT_COMBATMG_CLIP_02"):
			return "WCT_CLIP2" /*Extended Clip*/;
	
		case joaat("COMPONENT_ASSAULTSHOTGUN_CLIP_01"):
			return "WCT_CLIP1" /*Default Clip*/;
	
		case joaat("COMPONENT_ASSAULTSHOTGUN_CLIP_02"):
			return "WCT_CLIP2" /*Extended Clip*/;
	
		case joaat("COMPONENT_SNIPERRIFLE_CLIP_01"):
			return "WCT_CLIP1" /*Default Clip*/;
	
		case joaat("COMPONENT_HEAVYSNIPER_CLIP_01"):
			return "WCT_CLIP1" /*Default Clip*/;
	
		case joaat("COMPONENT_MINIGUN_CLIP_01"):
			return "WCT_CLIP2" /*Extended Clip*/;
	
		case joaat("COMPONENT_ASSAULTSMG_CLIP_01"):
			return "WCT_CLIP1" /*Default Clip*/;
	
		case joaat("COMPONENT_ASSAULTSMG_CLIP_02"):
			return "WCT_CLIP2" /*Extended Clip*/;
	
		case joaat("COMPONENT_PISTOL50_CLIP_01"):
			return "WCT_CLIP1" /*Default Clip*/;
	
		case joaat("COMPONENT_PISTOL50_CLIP_02"):
			return "WCT_CLIP2" /*Extended Clip*/;
	
		case joaat("COMPONENT_ASSAULTSNIPER_CLIP_01"):
			return "WCT_CLIP1" /*Default Clip*/;
	
		case joaat("COMPONENT_ASSAULTMG_CLIP_01"):
			return "WCT_CLIP1" /*Default Clip*/;
	
		case joaat("COMPONENT_ASSAULTMG_CLIP_02"):
			return "WCT_CLIP2" /*Extended Clip*/;
	
		case joaat("COMPONENT_PROGRAMMABLEAR_CLIP_01"):
			return "WCT_CLIP1" /*Default Clip*/;
	
		case joaat("COMPONENT_PROGRAMMABLEAR_CLIP_02"):
			return "WCT_CLIP2" /*Extended Clip*/;
	
		case joaat("COMPONENT_SNSPISTOL_CLIP_01"):
			return "WCT_CLIP1" /*Default Clip*/;
	
		case joaat("COMPONENT_SNSPISTOL_CLIP_02"):
			return "WCT_CLIP2" /*Extended Clip*/;
	
		case joaat("COMPONENT_VINTAGEPISTOL_CLIP_01"):
			return "WCT_CLIP1" /*Default Clip*/;
	
		case joaat("COMPONENT_VINTAGEPISTOL_CLIP_02"):
			return "WCT_CLIP2" /*Extended Clip*/;
	
		case joaat("COMPONENT_HEAVYSHOTGUN_CLIP_01"):
			return "WCT_CLIP1" /*Default Clip*/;
	
		case joaat("COMPONENT_MARKSMANRIFLE_CLIP_01"):
			return "WCT_CLIP1" /*Default Clip*/;
	
		case joaat("COMPONENT_HEAVYSHOTGUN_CLIP_02"):
			return "WCT_CLIP2" /*Extended Clip*/;
	
		case joaat("COMPONENT_MARKSMANRIFLE_CLIP_02"):
			return "WCT_CLIP2" /*Extended Clip*/;
	
		case joaat("COMPONENT_TACTICALRIFLE_CLIP_01"):
			return "WCT_CLIP1" /*Default Clip*/;
	
		case joaat("COMPONENT_TACTICALRIFLE_CLIP_02"):
			return "WCT_CLIP2" /*Extended Clip*/;
	
		case joaat("COMPONENT_AT_SCOPE_LARGE_FIXED_ZOOM"):
			return "WCT_SCOPE_LRG" /*Scope*/;
	
		case joaat("COMPONENT_AT_PI_SUPP_02"):
			return "WCT_SUPP" /*Suppressor*/;
	
		case joaat("COMPONENT_COMBATPDW_CLIP_01"):
			return "WCT_CLIP1" /*Default Clip*/;
	
		case joaat("COMPONENT_COMBATPDW_CLIP_02"):
			return "WCT_CLIP2" /*Extended Clip*/;
	
		case joaat("COMPONENT_MARKSMANPISTOL_CLIP_01"):
			return "WCT_CLIP1" /*Default Clip*/;
	
		case joaat("COMPONENT_MACHINEPISTOL_CLIP_01"):
			return "WCT_CLIP1" /*Default Clip*/;
	
		case joaat("COMPONENT_MACHINEPISTOL_CLIP_02"):
			return "WCT_CLIP2" /*Extended Clip*/;
	
		case joaat("COMPONENT_ASSAULTRIFLE_VARMOD_LUXE"):
			return "WCT_VAR_GOLD";
	
		case joaat("COMPONENT_ADVANCEDRIFLE_VARMOD_LUXE"):
			return "WCT_VAR_METAL";
	
		case joaat("COMPONENT_CARBINERIFLE_VARMOD_LUXE"):
			return "WCT_VAR_GOLD";
	
		case joaat("COMPONENT_APPISTOL_VARMOD_LUXE"):
			return "WCT_VAR_METAL";
	
		case joaat("COMPONENT_PISTOL_VARMOD_LUXE"):
			return "WCT_VAR_GOLD";
	
		case joaat("COMPONENT_PISTOL50_VARMOD_LUXE"):
			return "WCT_VAR_SIL";
	
		case joaat("COMPONENT_HEAVYPISTOL_VARMOD_LUXE"):
			return "WCT_VAR_WOOD";
	
		case joaat("COMPONENT_SMG_VARMOD_LUXE"):
			return "WCT_VAR_GOLD";
	
		case joaat("COMPONENT_MICROSMG_VARMOD_LUXE"):
			return "WCT_VAR_GOLD";
	
		case joaat("COMPONENT_SAWNOFFSHOTGUN_VARMOD_LUXE"):
			return "WCT_VAR_METAL";
	
		case joaat("COMPONENT_SNIPERRIFLE_VARMOD_LUXE"):
			return "WCT_VAR_WOOD";
	
		case joaat("COMPONENT_MARKSMANRIFLE_VARMOD_LUXE"):
			return "WCT_VAR_GOLD";
	
		case joaat("COMPONENT_ASSAULTSMG_VARMOD_LOWRIDER"):
			return "WCT_VAR_GOLD";
	
		case joaat("COMPONENT_BULLPUPRIFLE_VARMOD_LOW"):
			return "WCT_VAR_METAL";
	
		case joaat("COMPONENT_COMBATMG_VARMOD_LOWRIDER"):
			return "WCT_VAR_ETCHM";
	
		case joaat("COMPONENT_COMBATPISTOL_VARMOD_LOWRIDER"):
			return "WCT_VAR_GOLD";
	
		case joaat("COMPONENT_MG_VARMOD_LOWRIDER"):
			return "WCT_VAR_GOLD";
	
		case joaat("COMPONENT_PUMPSHOTGUN_VARMOD_LOWRIDER"):
			return "WCT_VAR_GOLD";
	
		case joaat("COMPONENT_SNSPISTOL_VARMOD_LOWRIDER"):
			return "WCT_VAR_WOOD";
	
		case joaat("COMPONENT_SPECIALCARBINE_VARMOD_LOWRIDER"):
			return "WCT_VAR_ETCHM";
	
		case joaat("COMPONENT_SWITCHBLADE_VARMOD_BASE"):
			return "WCT_SB_BASE";
	
		case joaat("COMPONENT_SWITCHBLADE_VARMOD_VAR1"):
			return "WCT_SB_VAR1";
	
		case joaat("COMPONENT_SWITCHBLADE_VARMOD_VAR2"):
			return "WCT_SB_VAR2";
	
		case joaat("COMPONENT_REVOLVER_CLIP_01"):
			return "WCT_CLIP1" /*Default Clip*/;
	
		case joaat("COMPONENT_REVOLVER_VARMOD_BOSS"):
			return "WCT_REV_VARB";
	
		case joaat("COMPONENT_REVOLVER_VARMOD_GOON"):
			return "WCT_REV_VARG";
	
		case joaat("COMPONENT_SMG_CLIP_03"):
			return "WCT_CLIP_DRM";
	
		case joaat("COMPONENT_CARBINERIFLE_CLIP_03"):
			return "WCT_CLIP_BOX";
	
		case joaat("COMPONENT_ASSAULTRIFLE_CLIP_03"):
			return "WCT_CLIP_DRM";
	
		case joaat("COMPONENT_HEAVYSHOTGUN_CLIP_03"):
			return "WCT_CLIP_DRM";
	
		case joaat("COMPONENT_GUNRUN_MK2_UPGRADE"):
			return "WCT_VAR_GUN";
	
		case joaat("COMPONENT_MARKSMANRIFLE_MK2_CAMO_IND_01"):
			return "WCT_CAMO_IND";
	
		case joaat("COMPONENT_SNSPISTOL_MK2_CAMO_IND_01"):
			return "WCT_CAMO_IND";
	
		case joaat("COMPONENT_SNSPISTOL_MK2_CLIP_02"):
			return "WCT_CLIP2" /*Extended Clip*/;
	
		case joaat("COMPONENT_AT_SCOPE_MACRO_02_MK2"):
			return "WCT_SCOPE_MAC2";
	
		case joaat("COMPONENT_AT_SCOPE_SMALL_MK2"):
			return "WCT_SCOPE_SML2";
	
		case joaat("COMPONENT_RAYPISTOL_VARMOD_XMAS18"):
			return "WCT_VAR_RAY18";
	
		case joaat("COMPONENT_CERAMICPISTOL_CLIP_01"):
			return "WCT_CLIP1" /*Default Clip*/;
	
		case joaat("COMPONENT_CERAMICPISTOL_CLIP_02"):
			return "WCT_CLIP2" /*Extended Clip*/;
	
		case joaat("COMPONENT_CERAMICPISTOL_SUPP"):
			return "WCT_SUPP" /*Suppressor*/;
	
		case joaat("COMPONENT_HEAVYRIFLE_CAMO1"):
			return "WCT_VAR_FAM";
	
		case joaat("COMPONENT_MICROSMG_VARMOD_SECURITY"):
			return "WCT_VAR_WEED";
	
		case joaat("COMPONENT_APPISTOL_VARMOD_SECURITY"):
			return "WCT_VAR_STUD";
	
		case joaat("COMPONENT_PUMPSHOTGUN_VARMOD_SECURITY"):
			return "WCT_VAR_BONE";
	
		case 1141184690:
			return "WCT_PISTMK2_XM3";
	
		case -1566778158:
			return "WCT_MSMG_XM3";
	
		case 330905451:
			return "WCT_PUMPSHT_XM3";
	
		case 375646046:
			return "WCT_CLIP1" /*Default Clip*/;
	
		case 503494624:
			return "WCT_SUPP" /*Suppressor*/;
	
		default:
			if (iParam1 != 0)
			{
				num = func_97(iParam1, &unk);
			
				if (num != -1)
				{
					for (i = 0; i < unk_0x99844FCFECAC01A5(num); i = i + 1)
					{
						if (unk_0xDDBECC1D7EC5DB2B(num, i, &unk40))
							if (unk40.f_3 == iParam0)
								return func_70(&(unk40.f_6));
					}
				}
			}
			break;
	}

	return "WCT_INVALID";
}

char* func_70(var uParam0) // Position - 0xC27E
{
	return uParam0;
}

int func_71() // Position - 0xC288
{
	if (unk_0xA26A9A07F761D8F8() && _NETSHOPPING_SHOULD_USE_TRANSACTION_SYSTEM())
		return 1;

	return 0;
}

int _NETSHOPPING_SHOULD_USE_TRANSACTION_SYSTEM() // Position - 0xC2A5
{
	if (unk_0xCC17806DB0C41C19())
		return unk_0xF6919DB2626A28C5();

	return 0;
}

// Unhandled jump detected. Output should be considered invalid
BOOL func_73(int iParam0) // Position - 0xC2BC
{
	if (!unk_0xA26A9A07F761D8F8())
	{
		switch (iParam0)
		{
			case joaat("COMPONENT_ASSAULTRIFLE_CLIP_03"):
			case joaat("COMPONENT_CARBINERIFLE_CLIP_03"):
			case joaat("COMPONENT_COMBATPDW_CLIP_03"):
			case joaat("COMPONENT_COMPACTRIFLE_CLIP_03"):
			case joaat("COMPONENT_HEAVYSHOTGUN_CLIP_03"):
			case joaat("COMPONENT_MACHINEPISTOL_CLIP_03"):
			case joaat("COMPONENT_SMG_CLIP_03"):
			case joaat("COMPONENT_SPECIALCARBINE_CLIP_03"):
				return false;
		
			default:
				goto 0x5E;
		}
	}
	else if (func_74(iParam0))
	{
		return Global_262145.f_21188;
	}

	return true;
}

BOOL func_74(int iParam0) // Position - 0xC31E
{
	switch (iParam0)
	{
		case joaat("COMPONENT_PISTOL_MK2_CAMO_IND_01"):
		case joaat("COMPONENT_SMG_MK2_CAMO_IND_01"):
		case joaat("COMPONENT_HEAVYSNIPER_MK2_CAMO_IND_01"):
		case joaat("COMPONENT_COMBATMG_MK2_CAMO_IND_01"):
		case joaat("COMPONENT_ASSAULTRIFLE_MK2_CAMO_IND_01"):
		case joaat("COMPONENT_CARBINERIFLE_MK2_CAMO_IND_01"):
		case joaat("COMPONENT_PUMPSHOTGUN_MK2_CAMO_IND_01"):
		case joaat("COMPONENT_SPECIALCARBINE_MK2_CAMO_IND_01"):
		case joaat("COMPONENT_SNSPISTOL_MK2_CAMO_IND_01"):
		case joaat("COMPONENT_MARKSMANRIFLE_MK2_CAMO_IND_01"):
		case joaat("COMPONENT_REVOLVER_MK2_CAMO_IND_01"):
		case joaat("COMPONENT_BULLPUPRIFLE_MK2_CAMO_IND_01"):
			return true;
	}

	return false;
}

int func_75() // Position - 0xC37D
{
	int num;
	int num2;
	int num3;
	int num4;

	if (IS_BIT_SET(Global_25, 6))
		if (IS_BIT_SET(Global_25, 2) || IS_BIT_SET(Global_25, 4))
			return 1;
		else
			return 0;

	if (unk_0xDD7756E2742E0F6D(joaat("SP_UNLOCK_EXCLUS_CONTENT"), &num, -1))
		if (IS_BIT_SET(num, 6))
			if (IS_BIT_SET(num, 2) || IS_BIT_SET(num, 4))
				return 1;
			else
				return 0;

	if (unk_0x2E0A64C3A8C33FD3(0))
	{
		if (Global_152525.f_3)
		{
			num3 = joaat("MPPLY_PLAT_UP_LB_CHECK");
		
			if (unk_0xDD7756E2742E0F6D(num3, &num2, -1))
				if (IS_BIT_SET(num2, 8))
					return 1;
		}
	}

	if (unk_0x7D33DF1E1089E1D1())
	{
		num4 = unk_0x516080EA609481E1(866);
	
		if (IS_BIT_SET(num4, 2) || IS_BIT_SET(num4, 4))
			return 1;
	}

	return 0;
}

int func_76() // Position - 0xC433
{
	int num;
	int num2;
	int num3;
	int num4;
	var unk;

	if (IS_BIT_SET(Global_25, 5))
		if (IS_BIT_SET(Global_25, 1) || IS_BIT_SET(Global_25, 3))
			return 1;
		else
			return 0;

	if (unk_0xDD7756E2742E0F6D(joaat("SP_UNLOCK_EXCLUS_CONTENT"), &num, -1))
		if (IS_BIT_SET(num, 5))
			if (IS_BIT_SET(num, 1) || IS_BIT_SET(num, 3))
				return 1;
			else
				return 0;

	if (unk_0x2E0A64C3A8C33FD3(0))
	{
		if (Global_152525.f_3)
		{
			num3 = joaat("MPPLY_PLAT_UP_LB_CHECK");
		
			if (unk_0xDD7756E2742E0F6D(num3, &num2, -1))
				if (IS_BIT_SET(num2, 5))
					return 1;
		}
	}

	if (unk_0x7D33DF1E1089E1D1())
	{
		num4 = unk_0x516080EA609481E1(866);
	
		if (IS_BIT_SET(num4, 1) || IS_BIT_SET(num4, 3))
			return 1;
	}

	if (unk_0x7FFBE14C34D75E19())
	{
		if (unk_0x8BD41D5945F5762B())
		{
			if (unk_0xD916E44D1A0A301C())
			{
				unk_0xDD7756E2742E0F6D(joaat("SP_UNLOCK_EXCLUS_CONTENT"), &unk, -1);
				unk_0xECDAB41968FF21A8(&unk, 1);
				unk_0xECDAB41968FF21A8(&unk, 3);
				unk_0xECDAB41968FF21A8(&unk, 5);
				unk_0xECDAB41968FF21A8(&Global_25, 1);
				unk_0xECDAB41968FF21A8(&Global_25, 3);
				unk_0xECDAB41968FF21A8(&Global_25, 5);
				unk_0x3CC35ACFFC9C730E(joaat("SP_UNLOCK_EXCLUS_CONTENT"), unk, 1);
			
				if (unk_0x7D33DF1E1089E1D1())
				{
					unk = unk_0x516080EA609481E1(866);
					unk_0xECDAB41968FF21A8(&unk, 1);
					unk_0xECDAB41968FF21A8(&unk, 3);
					unk_0x705949B096008718(unk);
				}
			
				return 1;
			}
		}
	}

	return 0;
}

BOOL _IS_EXCLUSIVE_CONTENT_UNLOCKED() // Position - 0xC56C
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

BOOL func_78(int iParam0) // Position - 0xC624
{
	switch (iParam0)
	{
		case joaat("COMPONENT_PISTOL_MK2_CAMO_SLIDE"):
		case joaat("COMPONENT_PISTOL_MK2_CAMO_02_SLIDE"):
		case joaat("COMPONENT_PISTOL_MK2_CAMO_03_SLIDE"):
		case joaat("COMPONENT_PISTOL_MK2_CAMO_04_SLIDE"):
		case joaat("COMPONENT_PISTOL_MK2_CAMO_05_SLIDE"):
		case joaat("COMPONENT_PISTOL_MK2_CAMO_06_SLIDE"):
		case joaat("COMPONENT_PISTOL_MK2_CAMO_07_SLIDE"):
		case joaat("COMPONENT_PISTOL_MK2_CAMO_08_SLIDE"):
		case joaat("COMPONENT_PISTOL_MK2_CAMO_09_SLIDE"):
		case joaat("COMPONENT_PISTOL_MK2_CAMO_10_SLIDE"):
		case joaat("COMPONENT_PISTOL_MK2_CAMO_IND_01_SLIDE"):
		case joaat("COMPONENT_SNSPISTOL_MK2_CAMO_SLIDE"):
		case joaat("COMPONENT_SNSPISTOL_MK2_CAMO_02_SLIDE"):
		case joaat("COMPONENT_SNSPISTOL_MK2_CAMO_03_SLIDE"):
		case joaat("COMPONENT_SNSPISTOL_MK2_CAMO_04_SLIDE"):
		case joaat("COMPONENT_SNSPISTOL_MK2_CAMO_05_SLIDE"):
		case joaat("COMPONENT_SNSPISTOL_MK2_CAMO_06_SLIDE"):
		case joaat("COMPONENT_SNSPISTOL_MK2_CAMO_07_SLIDE"):
		case joaat("COMPONENT_SNSPISTOL_MK2_CAMO_08_SLIDE"):
		case joaat("COMPONENT_SNSPISTOL_MK2_CAMO_09_SLIDE"):
		case joaat("COMPONENT_SNSPISTOL_MK2_CAMO_10_SLIDE"):
		case joaat("COMPONENT_SNSPISTOL_MK2_CAMO_IND_01_SLIDE"):
		case 1011473080:
			return true;
	}

	return false;
}

int func_79(int iParam0, var uParam1) // Position - 0xC6C5
{
	int num;
	int num2;
	var unk;

	num = 0;

	switch (iParam0)
	{
		case joaat("WEAPON_KNIFE"):
			if (unk_0xA26A9A07F761D8F8())
			{
				if (func_80(370527443, iParam0, &num2, &unk) && num2)
				{
					uParam1->[num] = 370527443;
					num = num + 1;
				}
			
				if (func_80(1109907117, iParam0, &num2, &unk) && num2)
				{
					uParam1->[num] = 1109907117;
					num = num + 1;
				}
			
				if (func_80(2055456612, iParam0, &num2, &unk) && num2)
				{
					uParam1->[num] = 2055456612;
					num = num + 1;
				}
			
				if (func_80(1690606566, iParam0, &num2, &unk) && num2)
				{
					uParam1->[num] = 1690606566;
					num = num + 1;
				}
			
				if (func_80(-1633316949, iParam0, &num2, &unk) && num2)
				{
					uParam1->[num] = -1633316949;
					num = num + 1;
				}
			
				if (func_80(-1461476313, iParam0, &num2, &unk) && num2)
				{
					uParam1->[num] = -1461476313;
					num = num + 1;
				}
			
				if (func_80(-1770422457, iParam0, &num2, &unk) && num2)
				{
					uParam1->[num] = -1770422457;
					num = num + 1;
				}
			
				if (func_80(-2059739958, iParam0, &num2, &unk) && num2)
				{
					uParam1->[num] = -2059739958;
					num = num + 1;
				}
			
				if (func_80(-1280001599, iParam0, &num2, &unk) && num2)
				{
					uParam1->[num] = -1280001599;
					num = num + 1;
				}
			
				if (func_80(-922885037, iParam0, &num2, &unk) && num2)
				{
					uParam1->[num] = -922885037;
					num = num + 1;
				}
			}
			break;
	
		case joaat("WEAPON_BAT"):
			if (unk_0xA26A9A07F761D8F8())
			{
				if (func_80(716207715, iParam0, &num2, &unk) && num2)
				{
					uParam1->[num] = 716207715;
					num = num + 1;
				}
			
				if (func_80(446271089, iParam0, &num2, &unk) && num2)
				{
					uParam1->[num] = 446271089;
					num = num + 1;
				}
			
				if (func_80(1045616099, iParam0, &num2, &unk) && num2)
				{
					uParam1->[num] = 1045616099;
					num = num + 1;
				}
			
				if (func_80(1336277129, iParam0, &num2, &unk) && num2)
				{
					uParam1->[num] = 1336277129;
					num = num + 1;
				}
			
				if (func_80(-513369076, iParam0, &num2, &unk) && num2)
				{
					uParam1->[num] = -513369076;
					num = num + 1;
				}
			
				if (func_80(-447700000, iParam0, &num2, &unk) && num2)
				{
					uParam1->[num] = -447700000;
					num = num + 1;
				}
			
				if (func_80(-149207179, iParam0, &num2, &unk) && num2)
				{
					uParam1->[num] = -149207179;
					num = num + 1;
				}
			
				if (func_80(166784288, iParam0, &num2, &unk) && num2)
				{
					uParam1->[num] = 166784288;
					num = num + 1;
				}
			
				if (func_80(2068729789, iParam0, &num2, &unk) && num2)
				{
					uParam1->[num] = 2068729789;
					num = num + 1;
				}
			
				if (func_80(1761389338, iParam0, &num2, &unk) && num2)
				{
					uParam1->[num] = 1761389338;
					num = num + 1;
				}
			}
			break;
	}

	return num;
}

int func_80(int iParam0, int iParam1, var uParam2, var uParam3) // Position - 0xCA41
{
	*uParam2 = 1;
	*uParam3 = 0;

	switch (iParam1)
	{
		case joaat("WEAPON_BAT"):
			if (!*Global_262145.f_33877 || func_82(iParam0, iParam1, -1))
			{
				*uParam2 = 1;
				*uParam3 = 0;
				return 1;
			}
		
			if (*Global_262145.f_33877)
			{
				*uParam2 = 0;
				*uParam3 = 1;
				return 1;
			}
		
			return 1;
	
		case joaat("WEAPON_KNIFE"):
			if (!*Global_262145.f_33877 || func_82(iParam0, iParam1, -1))
			{
				*uParam2 = 1;
				*uParam3 = 0;
				return 1;
			}
		
			if (*Global_262145.f_33877)
			{
				*uParam2 = 0;
				*uParam3 = 1;
				return 1;
			}
		
			return 1;
	}

	return 0;
}

BOOL func_81(int iParam0) // Position - 0xCAF7
{
	return iParam0 == 58;
}

BOOL func_82(int iParam0, int iParam1, int iParam2) // Position - 0xCB04
{
	int num;
	int num2;

	if (func_91())
		return false;

	num = func_86(iParam0, iParam1, iParam2);
	num2 = func_84(iParam0, iParam1);
	return IS_BIT_SET(num, func_83(num2));
}

int func_83(int iParam0) // Position - 0xCB36
{
	return iParam0 % 32;
}

int func_84(int iParam0, int iParam1) // Position - 0xCB43
{
	return func_85(iParam0, iParam1);
}

int func_85(int iParam0, int iParam1) // Position - 0xCB53
{
	switch (iParam1)
	{
		case joaat("WEAPON_PISTOL"):
			switch (iParam0)
			{
				case joaat("COMPONENT_PISTOL_CLIP_01"):
					return 1;
			
				case joaat("COMPONENT_PISTOL_CLIP_02"):
					return 2;
			
				case joaat("COMPONENT_AT_PI_FLSH"):
					return 3;
			
				case joaat("COMPONENT_AT_PI_SUPP_02"):
					return 4;
			
				case joaat("COMPONENT_PISTOL_VARMOD_LUXE"):
					return 175;
			
				case joaat("COMPONENT_GUNRUN_MK2_UPGRADE"):
					return 211;
			}
			break;
	
		case joaat("WEAPON_COMBATPISTOL"):
			switch (iParam0)
			{
				case joaat("COMPONENT_COMBATPISTOL_CLIP_01"):
					return 5;
			
				case joaat("COMPONENT_COMBATPISTOL_CLIP_02"):
					return 6;
			
				case joaat("COMPONENT_AT_PI_FLSH"):
					return 7;
			
				case joaat("COMPONENT_AT_PI_SUPP"):
					return 8;
			
				case joaat("COMPONENT_COMBATPISTOL_VARMOD_LOWRIDER"):
					return 186;
			}
			break;
	
		case joaat("WEAPON_APPISTOL"):
			switch (iParam0)
			{
				case joaat("COMPONENT_APPISTOL_CLIP_01"):
					return 11;
			
				case joaat("COMPONENT_APPISTOL_CLIP_02"):
					return 12;
			
				case joaat("COMPONENT_AT_PI_FLSH"):
					return 13;
			
				case joaat("COMPONENT_AT_PI_SUPP"):
					return 14;
			
				case joaat("COMPONENT_APPISTOL_VARMOD_LUXE"):
					return 164;
			
				case joaat("COMPONENT_APPISTOL_VARMOD_SECURITY"):
					return 569;
			}
			break;
	
		case joaat("WEAPON_MICROSMG"):
			switch (iParam0)
			{
				case joaat("COMPONENT_MICROSMG_CLIP_01"):
					return 15;
			
				case joaat("COMPONENT_MICROSMG_CLIP_02"):
					return 16;
			
				case joaat("COMPONENT_AT_PI_FLSH"):
					return 17;
			
				case joaat("COMPONENT_AT_SCOPE_MACRO"):
					return 18;
			
				case joaat("COMPONENT_AT_AR_SUPP_02"):
					return 19;
			
				case joaat("COMPONENT_MICROSMG_VARMOD_LUXE"):
					return 174;
			
				case joaat("COMPONENT_MICROSMG_VARMOD_SECURITY"):
					return 570;
			
				case -1566778158:
					return 602;
			}
			break;
	
		case joaat("WEAPON_SMG"):
			switch (iParam0)
			{
				case joaat("COMPONENT_SMG_CLIP_01"):
					return 22;
			
				case joaat("COMPONENT_SMG_CLIP_02"):
					return 23;
			
				case joaat("COMPONENT_SMG_CLIP_03"):
					return 207;
			
				case joaat("COMPONENT_AT_AR_FLSH"):
					return 24;
			
				case joaat("COMPONENT_AT_SCOPE_MACRO_02"):
					return 25;
			
				case joaat("COMPONENT_AT_PI_SUPP"):
					return 26;
			
				case joaat("COMPONENT_SMG_VARMOD_LUXE"):
					return 179;
			
				case joaat("COMPONENT_GUNRUN_MK2_UPGRADE"):
					return 212;
			}
			break;
	
		case joaat("WEAPON_ASSAULTRIFLE"):
			switch (iParam0)
			{
				case joaat("COMPONENT_ASSAULTRIFLE_CLIP_01"):
					return 27;
			
				case joaat("COMPONENT_ASSAULTRIFLE_CLIP_02"):
					return 28;
			
				case joaat("COMPONENT_ASSAULTRIFLE_CLIP_03"):
					return 201;
			
				case joaat("COMPONENT_AT_AR_AFGRIP"):
					return 29;
			
				case joaat("COMPONENT_AT_AR_FLSH"):
					return 30;
			
				case joaat("COMPONENT_AT_SCOPE_MACRO"):
					return 31;
			
				case joaat("COMPONENT_AT_AR_SUPP_02"):
					return 32;
			
				case joaat("COMPONENT_ASSAULTRIFLE_VARMOD_LUXE"):
					return 165;
			
				case joaat("COMPONENT_GUNRUN_MK2_UPGRADE"):
					return 213;
			}
			break;
	
		case joaat("WEAPON_CARBINERIFLE"):
			switch (iParam0)
			{
				case joaat("COMPONENT_CARBINERIFLE_CLIP_01"):
					return 33;
			
				case joaat("COMPONENT_CARBINERIFLE_CLIP_02"):
					return 34;
			
				case joaat("COMPONENT_CARBINERIFLE_CLIP_03"):
					return 202;
			
				case joaat("COMPONENT_AT_RAILCOVER_01"):
					return 35;
			
				case joaat("COMPONENT_AT_AR_AFGRIP"):
					return 36;
			
				case joaat("COMPONENT_AT_AR_FLSH"):
					return 37;
			
				case joaat("COMPONENT_AT_SCOPE_MEDIUM"):
					return 38;
			
				case joaat("COMPONENT_AT_AR_SUPP"):
					return 39;
			
				case joaat("COMPONENT_CARBINERIFLE_VARMOD_LUXE"):
					return 168;
			
				case joaat("COMPONENT_GUNRUN_MK2_UPGRADE"):
					return 214;
			}
			break;
	
		case joaat("WEAPON_ADVANCEDRIFLE"):
			switch (iParam0)
			{
				case joaat("COMPONENT_ADVANCEDRIFLE_CLIP_01"):
					return 44;
			
				case joaat("COMPONENT_ADVANCEDRIFLE_CLIP_02"):
					return 45;
			
				case joaat("COMPONENT_AT_AR_FLSH"):
					return 47;
			
				case joaat("COMPONENT_AT_SCOPE_SMALL"):
					return 48;
			
				case joaat("COMPONENT_AT_AR_SUPP"):
					return 49;
			
				case joaat("COMPONENT_ADVANCEDRIFLE_VARMOD_LUXE"):
					return 163;
			}
			break;
	
		case joaat("WEAPON_MG"):
			switch (iParam0)
			{
				case joaat("COMPONENT_MG_CLIP_01"):
					return 50;
			
				case joaat("COMPONENT_MG_CLIP_02"):
					return 51;
			
				case joaat("COMPONENT_AT_SCOPE_SMALL_02"):
					return 52;
			
				case joaat("COMPONENT_MG_VARMOD_LOWRIDER"):
					return 187;
			}
			break;
	
		case joaat("WEAPON_COMBATMG"):
			switch (iParam0)
			{
				case joaat("COMPONENT_COMBATMG_CLIP_01"):
					return 53;
			
				case joaat("COMPONENT_COMBATMG_CLIP_02"):
					return 54;
			
				case joaat("COMPONENT_AT_AR_AFGRIP"):
					return 55;
			
				case joaat("COMPONENT_AT_SCOPE_MEDIUM"):
					return 56;
			
				case joaat("COMPONENT_COMBATMG_VARMOD_LOWRIDER"):
					return 188;
			
				case joaat("COMPONENT_GUNRUN_MK2_UPGRADE"):
					return 215;
			}
			break;
	
		case joaat("WEAPON_PUMPSHOTGUN"):
			switch (iParam0)
			{
				case joaat("COMPONENT_AT_SR_SUPP"):
					return 59;
			
				case joaat("COMPONENT_AT_AR_FLSH"):
					return 60;
			
				case joaat("COMPONENT_PUMPSHOTGUN_VARMOD_LOWRIDER"):
					return 193;
			
				case joaat("COMPONENT_GUNRUN_MK2_UPGRADE"):
					return 389;
			
				case joaat("COMPONENT_PUMPSHOTGUN_VARMOD_SECURITY"):
					return 571;
			
				case 330905451:
					return 603;
			}
			break;
	
		case joaat("WEAPON_ASSAULTSHOTGUN"):
			switch (iParam0)
			{
				case joaat("COMPONENT_ASSAULTSHOTGUN_CLIP_01"):
					return 64;
			
				case joaat("COMPONENT_ASSAULTSHOTGUN_CLIP_02"):
					return 65;
			
				case joaat("COMPONENT_AT_AR_AFGRIP"):
					return 66;
			
				case joaat("COMPONENT_AT_AR_FLSH"):
					return 67;
			
				case joaat("COMPONENT_AT_AR_SUPP"):
					return 68;
			}
			break;
	
		case joaat("WEAPON_SNIPERRIFLE"):
			switch (iParam0)
			{
				case joaat("COMPONENT_SNIPERRIFLE_CLIP_01"):
					return 69;
			
				case joaat("COMPONENT_AT_SCOPE_LARGE"):
					return 70;
			
				case joaat("COMPONENT_AT_SCOPE_MAX"):
					return 71;
			
				case joaat("COMPONENT_AT_AR_SUPP_02"):
					return 72;
			
				case joaat("COMPONENT_SNIPERRIFLE_VARMOD_LUXE"):
					return 180;
			}
			break;
	
		case joaat("WEAPON_HEAVYSNIPER"):
			switch (iParam0)
			{
				case joaat("COMPONENT_HEAVYSNIPER_CLIP_01"):
					return 76;
			
				case joaat("COMPONENT_AT_SCOPE_MAX"):
					return 77;
			
				case joaat("COMPONENT_AT_SCOPE_LARGE"):
					return 82;
			
				case joaat("COMPONENT_GUNRUN_MK2_UPGRADE"):
					return 216;
			}
			break;
	
		case joaat("WEAPON_GRENADELAUNCHER"):
			switch (iParam0)
			{
				case joaat("COMPONENT_AT_AR_AFGRIP"):
					return 78;
			
				case joaat("COMPONENT_AT_AR_FLSH"):
					return 79;
			
				case joaat("COMPONENT_AT_SCOPE_SMALL"):
					return 80;
			}
			break;
	
		case joaat("WEAPON_MINIGUN"):
			switch (iParam0)
			{
				case joaat("COMPONENT_MINIGUN_CLIP_01"):
					return 81;
			}
			break;
	
		case joaat("WEAPON_ASSAULTSMG"):
			switch (iParam0)
			{
				case joaat("COMPONENT_ASSAULTSMG_CLIP_01"):
					return 83;
			
				case joaat("COMPONENT_ASSAULTSMG_CLIP_02"):
					return 84;
			
				case joaat("COMPONENT_AT_AR_FLSH"):
					return 85;
			
				case joaat("COMPONENT_AT_SCOPE_MACRO"):
					return 86;
			
				case joaat("COMPONENT_AT_AR_SUPP_02"):
					return 87;
			
				case joaat("COMPONENT_ASSAULTSMG_VARMOD_LOWRIDER"):
					return 189;
			}
			break;
	
		case joaat("WEAPON_BULLPUPSHOTGUN"):
			switch (iParam0)
			{
				case joaat("COMPONENT_AT_AR_AFGRIP"):
					return 88;
			
				case joaat("COMPONENT_AT_AR_FLSH"):
					return 89;
			
				case joaat("COMPONENT_AT_AR_SUPP_02"):
					return 90;
			}
			break;
	
		case joaat("WEAPON_PISTOL50"):
			switch (iParam0)
			{
				case joaat("COMPONENT_PISTOL50_CLIP_01"):
					return 91;
			
				case joaat("COMPONENT_PISTOL50_CLIP_02"):
					return 92;
			
				case joaat("COMPONENT_AT_PI_FLSH"):
					return 93;
			
				case joaat("COMPONENT_AT_AR_SUPP_02"):
					return 94;
			
				case joaat("COMPONENT_PISTOL50_VARMOD_LUXE"):
					return 176;
			}
			break;
	
		case joaat("WEAPON_ASSAULTSNIPER"):
			switch (iParam0)
			{
				case joaat("COMPONENT_ASSAULTSNIPER_CLIP_01"):
					return 95;
			
				case joaat("COMPONENT_AT_SCOPE_LARGE"):
					return 96;
			
				case joaat("COMPONENT_AT_SCOPE_MAX"):
					return 97;
			
				case joaat("COMPONENT_AT_AR_SUPP"):
					return 98;
			}
			break;
	
		case joaat("WEAPON_ASSAULTMG"):
			switch (iParam0)
			{
				case joaat("COMPONENT_ASSAULTMG_CLIP_01"):
					return 105;
			
				case joaat("COMPONENT_ASSAULTMG_CLIP_02"):
					return 106;
			
				case joaat("COMPONENT_AT_AR_AFGRIP"):
					return 107;
			
				case joaat("COMPONENT_AT_SCOPE_MEDIUM"):
					return 108;
			}
			break;
	
		case joaat("WEAPON_PROGRAMMABLEAR"):
			switch (iParam0)
			{
				case joaat("COMPONENT_PROGRAMMABLEAR_CLIP_01"):
					return 109;
			
				case joaat("COMPONENT_PROGRAMMABLEAR_CLIP_02"):
					return 110;
			}
			break;
	
		case joaat("WEAPON_SPECIALCARBINE"):
			switch (iParam0)
			{
				case joaat("COMPONENT_SPECIALCARBINE_CLIP_01"):
					return 111;
			
				case joaat("COMPONENT_SPECIALCARBINE_CLIP_02"):
					return 112;
			
				case joaat("COMPONENT_SPECIALCARBINE_CLIP_03"):
					return 208;
			
				case joaat("COMPONENT_AT_AR_AFGRIP"):
					return 113;
			
				case joaat("COMPONENT_AT_AR_FLSH"):
					return 114;
			
				case joaat("COMPONENT_AT_SCOPE_MEDIUM"):
					return 115;
			
				case joaat("COMPONENT_AT_AR_SUPP_02"):
					return 116;
			
				case joaat("COMPONENT_SPECIALCARBINE_VARMOD_LOWRIDER"):
					return 190;
			
				case joaat("COMPONENT_GUNRUN_MK2_UPGRADE"):
					return 390;
			}
			break;
	
		case joaat("WEAPON_SNSPISTOL"):
			switch (iParam0)
			{
				case joaat("COMPONENT_SNSPISTOL_CLIP_01"):
					return 117;
			
				case joaat("COMPONENT_SNSPISTOL_CLIP_02"):
					return 118;
			
				case joaat("COMPONENT_AT_PI_FLSH"):
					return 119;
			
				case joaat("COMPONENT_AT_PI_SUPP"):
					return 120;
			
				case joaat("COMPONENT_SNSPISTOL_VARMOD_LOWRIDER"):
					return 191;
			
				case joaat("COMPONENT_GUNRUN_MK2_UPGRADE"):
					return 391;
			}
			break;
	
		case joaat("WEAPON_HEAVYPISTOL"):
			switch (iParam0)
			{
				case joaat("COMPONENT_HEAVYPISTOL_CLIP_01"):
					return 121;
			
				case joaat("COMPONENT_HEAVYPISTOL_CLIP_02"):
					return 122;
			
				case joaat("COMPONENT_AT_PI_FLSH"):
					return 123;
			
				case joaat("COMPONENT_AT_PI_SUPP"):
					return 124;
			
				case joaat("COMPONENT_HEAVYPISTOL_VARMOD_LUXE"):
					return 171;
			}
			break;
	
		case joaat("WEAPON_BULLPUPRIFLE"):
			switch (iParam0)
			{
				case joaat("COMPONENT_BULLPUPRIFLE_CLIP_01"):
					return 131;
			
				case joaat("COMPONENT_BULLPUPRIFLE_CLIP_02"):
					return 132;
			
				case joaat("COMPONENT_AT_AR_FLSH"):
					return 127;
			
				case joaat("COMPONENT_AT_AR_SUPP"):
					return 128;
			
				case joaat("COMPONENT_AT_SCOPE_SMALL"):
					return 129;
			
				case joaat("COMPONENT_AT_AR_AFGRIP"):
					return 130;
			
				case joaat("COMPONENT_BULLPUPRIFLE_VARMOD_LOW"):
					return 192;
			
				case joaat("COMPONENT_GUNRUN_MK2_UPGRADE"):
					return 394;
			}
			break;
	
		case joaat("WEAPON_GUSENBERG"):
			switch (iParam0)
			{
				case joaat("COMPONENT_GUSENBERG_CLIP_01"):
					return 125;
			
				case joaat("COMPONENT_GUSENBERG_CLIP_02"):
					return 126;
			}
			break;
	
		case joaat("WEAPON_VINTAGEPISTOL"):
			switch (iParam0)
			{
				case joaat("COMPONENT_VINTAGEPISTOL_CLIP_01"):
					return 133;
			
				case joaat("COMPONENT_VINTAGEPISTOL_CLIP_02"):
					return 134;
			
				case joaat("COMPONENT_AT_PI_SUPP"):
					return 136;
			}
			break;
	
		case joaat("WEAPON_HEAVYSHOTGUN"):
			switch (iParam0)
			{
				case joaat("COMPONENT_HEAVYSHOTGUN_CLIP_01"):
					return 137;
			
				case joaat("COMPONENT_HEAVYSHOTGUN_CLIP_02"):
					return 140;
			
				case joaat("COMPONENT_HEAVYSHOTGUN_CLIP_03"):
					return 205;
			
				case joaat("COMPONENT_AT_AR_FLSH"):
					return 145;
			
				case joaat("COMPONENT_AT_AR_SUPP_02"):
					return 146;
			
				case joaat("COMPONENT_AT_AR_AFGRIP"):
					return 147;
			}
			break;
	
		case joaat("WEAPON_MARKSMANRIFLE"):
			switch (iParam0)
			{
				case joaat("COMPONENT_MARKSMANRIFLE_CLIP_01"):
					return 138;
			
				case joaat("COMPONENT_MARKSMANRIFLE_CLIP_02"):
					return 139;
			
				case joaat("COMPONENT_AT_SCOPE_LARGE_FIXED_ZOOM"):
					return 141;
			
				case joaat("COMPONENT_AT_AR_FLSH"):
					return 142;
			
				case joaat("COMPONENT_AT_AR_SUPP"):
					return 143;
			
				case joaat("COMPONENT_AT_AR_AFGRIP"):
					return 144;
			
				case joaat("COMPONENT_MARKSMANRIFLE_VARMOD_LUXE"):
					return 172;
			
				case joaat("COMPONENT_GUNRUN_MK2_UPGRADE"):
					return 392;
			}
			break;
	
		case joaat("WEAPON_COMBATPDW"):
			switch (iParam0)
			{
				case joaat("COMPONENT_COMBATPDW_CLIP_01"):
					return 149;
			
				case joaat("COMPONENT_COMBATPDW_CLIP_02"):
					return 150;
			
				case joaat("COMPONENT_COMBATPDW_CLIP_03"):
					return 203;
			
				case joaat("COMPONENT_AT_AR_FLSH"):
					return 151;
			
				case joaat("COMPONENT_AT_SCOPE_SMALL"):
					return 152;
			
				case joaat("COMPONENT_AT_AR_AFGRIP"):
					return 153;
			}
			break;
	
		case joaat("WEAPON_SAWNOFFSHOTGUN"):
			switch (iParam0)
			{
				case joaat("COMPONENT_SAWNOFFSHOTGUN_VARMOD_LUXE"):
					return 178;
			}
			break;
	
		case joaat("WEAPON_MARKSMANPISTOL"):
			switch (iParam0)
			{
				case joaat("COMPONENT_MARKSMANPISTOL_CLIP_01"):
					return 148;
			}
			break;
	
		case joaat("WEAPON_KNUCKLE"):
			switch (iParam0)
			{
				case joaat("COMPONENT_KNUCKLE_VARMOD_PIMP"):
					return 154;
			
				case joaat("COMPONENT_KNUCKLE_VARMOD_BALLAS"):
					return 155;
			
				case joaat("COMPONENT_KNUCKLE_VARMOD_DOLLAR"):
					return 156;
			
				case joaat("COMPONENT_KNUCKLE_VARMOD_DIAMOND"):
					return 157;
			
				case joaat("COMPONENT_KNUCKLE_VARMOD_HATE"):
					return 158;
			
				case joaat("COMPONENT_KNUCKLE_VARMOD_LOVE"):
					return 159;
			
				case joaat("COMPONENT_KNUCKLE_VARMOD_PLAYER"):
					return 160;
			
				case joaat("COMPONENT_KNUCKLE_VARMOD_KING"):
					return 161;
			
				case joaat("COMPONENT_KNUCKLE_VARMOD_VAGOS"):
					return 162;
			}
			break;
	
		case joaat("WEAPON_MACHINEPISTOL"):
			switch (iParam0)
			{
				case joaat("COMPONENT_MACHINEPISTOL_CLIP_01"):
					return 184;
			
				case joaat("COMPONENT_MACHINEPISTOL_CLIP_02"):
					return 185;
			
				case joaat("COMPONENT_MACHINEPISTOL_CLIP_03"):
					return 206;
			
				case joaat("COMPONENT_AT_PI_SUPP"):
					return 183;
			}
			break;
	
		case joaat("WEAPON_SWITCHBLADE"):
			switch (iParam0)
			{
				case joaat("COMPONENT_SWITCHBLADE_VARMOD_VAR1"):
					return 194;
			
				case joaat("COMPONENT_SWITCHBLADE_VARMOD_VAR2"):
					return 195;
			}
			break;
	
		case joaat("WEAPON_REVOLVER"):
			switch (iParam0)
			{
				case joaat("COMPONENT_REVOLVER_CLIP_01"):
					return 196;
			
				case joaat("COMPONENT_REVOLVER_VARMOD_BOSS"):
					return 197;
			
				case joaat("COMPONENT_REVOLVER_VARMOD_GOON"):
					return 198;
			
				case joaat("COMPONENT_GUNRUN_MK2_UPGRADE"):
					return 393;
			}
			break;
	
		case joaat("WEAPON_COMPACTRIFLE"):
			switch (iParam0)
			{
				case joaat("COMPONENT_COMPACTRIFLE_CLIP_01"):
					return 199;
			
				case joaat("COMPONENT_COMPACTRIFLE_CLIP_02"):
					return 200;
			
				case joaat("COMPONENT_COMPACTRIFLE_CLIP_03"):
					return 204;
			}
			break;
	
		case joaat("WEAPON_MINISMG"):
			switch (iParam0)
			{
				case joaat("COMPONENT_MINISMG_CLIP_01"):
					return 209;
			
				case joaat("COMPONENT_MINISMG_CLIP_02"):
					return 210;
			}
			break;
	
		case joaat("WEAPON_PISTOL_MK2"):
			switch (iParam0)
			{
				case joaat("COMPONENT_PISTOL_MK2_CLIP_01"):
					return 217;
			
				case joaat("COMPONENT_PISTOL_MK2_CLIP_02"):
					return 218;
			
				case joaat("COMPONENT_PISTOL_MK2_CLIP_FMJ"):
					return 219;
			
				case joaat("COMPONENT_PISTOL_MK2_CLIP_HOLLOWPOINT"):
					return 220;
			
				case joaat("COMPONENT_PISTOL_MK2_CLIP_INCENDIARY"):
					return 221;
			
				case joaat("COMPONENT_PISTOL_MK2_CLIP_TRACER"):
					return 222;
			
				case joaat("COMPONENT_AT_PI_FLSH_02"):
					return 223;
			
				case joaat("COMPONENT_AT_PI_RAIL"):
					return 224;
			
				case joaat("COMPONENT_AT_PI_SUPP_02"):
					return 225;
			
				case joaat("COMPONENT_AT_PI_COMP"):
					return 226;
			
				case joaat("COMPONENT_PISTOL_MK2_CAMO"):
					return 367;
			
				case joaat("COMPONENT_PISTOL_MK2_CAMO_02"):
					return 368;
			
				case joaat("COMPONENT_PISTOL_MK2_CAMO_03"):
					return 369;
			
				case joaat("COMPONENT_PISTOL_MK2_CAMO_04"):
					return 370;
			
				case joaat("COMPONENT_PISTOL_MK2_CAMO_05"):
					return 371;
			
				case joaat("COMPONENT_PISTOL_MK2_CAMO_06"):
					return 372;
			
				case joaat("COMPONENT_PISTOL_MK2_CAMO_07"):
					return 373;
			
				case joaat("COMPONENT_PISTOL_MK2_CAMO_08"):
					return 374;
			
				case joaat("COMPONENT_PISTOL_MK2_CAMO_09"):
					return 375;
			
				case joaat("COMPONENT_PISTOL_MK2_CAMO_10"):
					return 376;
			
				case joaat("COMPONENT_PISTOL_MK2_CAMO_IND_01"):
					return 377;
			
				case 1141184690:
					return 601;
			}
			break;
	
		case joaat("WEAPON_SMG_MK2"):
			switch (iParam0)
			{
				case joaat("COMPONENT_SMG_MK2_CLIP_01"):
					return 227;
			
				case joaat("COMPONENT_SMG_MK2_CLIP_02"):
					return 228;
			
				case joaat("COMPONENT_SMG_MK2_CLIP_FMJ"):
					return 229;
			
				case joaat("COMPONENT_SMG_MK2_CLIP_HOLLOWPOINT"):
					return 230;
			
				case joaat("COMPONENT_SMG_MK2_CLIP_INCENDIARY"):
					return 231;
			
				case joaat("COMPONENT_SMG_MK2_CLIP_TRACER"):
					return 232;
			
				case joaat("COMPONENT_AT_AR_FLSH"):
					return 233;
			
				case joaat("COMPONENT_AT_SIGHTS_SMG"):
					return 234;
			
				case joaat("COMPONENT_AT_SCOPE_MACRO_02_SMG_MK2"):
					return 235;
			
				case joaat("COMPONENT_AT_SCOPE_SMALL_SMG_MK2"):
					return 236;
			
				case joaat("COMPONENT_AT_PI_SUPP"):
					return 237;
			
				case joaat("COMPONENT_AT_MUZZLE_01"):
					return 238;
			
				case joaat("COMPONENT_AT_MUZZLE_02"):
					return 239;
			
				case joaat("COMPONENT_AT_MUZZLE_03"):
					return 240;
			
				case joaat("COMPONENT_AT_MUZZLE_04"):
					return 241;
			
				case joaat("COMPONENT_AT_MUZZLE_05"):
					return 242;
			
				case joaat("COMPONENT_AT_MUZZLE_06"):
					return 243;
			
				case joaat("COMPONENT_AT_MUZZLE_07"):
					return 244;
			
				case joaat("COMPONENT_AT_SB_BARREL_01"):
					return 245;
			
				case joaat("COMPONENT_AT_SB_BARREL_02"):
					return 246;
			
				case joaat("COMPONENT_SMG_MK2_CAMO"):
					return 378;
			
				case joaat("COMPONENT_SMG_MK2_CAMO_02"):
					return 379;
			
				case joaat("COMPONENT_SMG_MK2_CAMO_03"):
					return 380;
			
				case joaat("COMPONENT_SMG_MK2_CAMO_04"):
					return 381;
			
				case joaat("COMPONENT_SMG_MK2_CAMO_05"):
					return 382;
			
				case joaat("COMPONENT_SMG_MK2_CAMO_06"):
					return 383;
			
				case joaat("COMPONENT_SMG_MK2_CAMO_07"):
					return 384;
			
				case joaat("COMPONENT_SMG_MK2_CAMO_08"):
					return 385;
			
				case joaat("COMPONENT_SMG_MK2_CAMO_09"):
					return 386;
			
				case joaat("COMPONENT_SMG_MK2_CAMO_10"):
					return 387;
			
				case joaat("COMPONENT_SMG_MK2_CAMO_IND_01"):
					return 388;
			}
			break;
	
		case joaat("WEAPON_HEAVYSNIPER_MK2"):
			switch (iParam0)
			{
				case joaat("COMPONENT_HEAVYSNIPER_MK2_CLIP_01"):
					return 247;
			
				case joaat("COMPONENT_HEAVYSNIPER_MK2_CLIP_02"):
					return 248;
			
				case joaat("COMPONENT_HEAVYSNIPER_MK2_CLIP_ARMORPIERCING"):
					return 249;
			
				case joaat("COMPONENT_HEAVYSNIPER_MK2_CLIP_EXPLOSIVE"):
					return 250;
			
				case joaat("COMPONENT_HEAVYSNIPER_MK2_CLIP_FMJ"):
					return 251;
			
				case joaat("COMPONENT_HEAVYSNIPER_MK2_CLIP_INCENDIARY"):
					return 252;
			
				case joaat("COMPONENT_AT_SCOPE_LARGE_MK2"):
					return 253;
			
				case joaat("COMPONENT_AT_SCOPE_MAX"):
					return 254;
			
				case joaat("COMPONENT_AT_SCOPE_NV"):
					return 255;
			
				case joaat("COMPONENT_AT_SCOPE_THERMAL"):
					return 256;
			
				case joaat("COMPONENT_AT_SR_SUPP_03"):
					return 257;
			
				case joaat("COMPONENT_AT_MUZZLE_08"):
					return 258;
			
				case joaat("COMPONENT_AT_MUZZLE_09"):
					return 259;
			
				case joaat("COMPONENT_AT_SR_BARREL_01"):
					return 260;
			
				case joaat("COMPONENT_AT_SR_BARREL_02"):
					return 261;
			
				case joaat("COMPONENT_HEAVYSNIPER_MK2_CAMO"):
					return 356;
			
				case joaat("COMPONENT_HEAVYSNIPER_MK2_CAMO_02"):
					return 357;
			
				case joaat("COMPONENT_HEAVYSNIPER_MK2_CAMO_03"):
					return 358;
			
				case joaat("COMPONENT_HEAVYSNIPER_MK2_CAMO_04"):
					return 359;
			
				case joaat("COMPONENT_HEAVYSNIPER_MK2_CAMO_05"):
					return 360;
			
				case joaat("COMPONENT_HEAVYSNIPER_MK2_CAMO_06"):
					return 361;
			
				case joaat("COMPONENT_HEAVYSNIPER_MK2_CAMO_07"):
					return 362;
			
				case joaat("COMPONENT_HEAVYSNIPER_MK2_CAMO_08"):
					return 363;
			
				case joaat("COMPONENT_HEAVYSNIPER_MK2_CAMO_09"):
					return 364;
			
				case joaat("COMPONENT_HEAVYSNIPER_MK2_CAMO_10"):
					return 365;
			
				case joaat("COMPONENT_HEAVYSNIPER_MK2_CAMO_IND_01"):
					return 366;
			}
			break;
	
		case joaat("WEAPON_COMBATMG_MK2"):
			switch (iParam0)
			{
				case joaat("COMPONENT_COMBATMG_MK2_CLIP_01"):
					return 262;
			
				case joaat("COMPONENT_COMBATMG_MK2_CLIP_02"):
					return 263;
			
				case joaat("COMPONENT_COMBATMG_MK2_CLIP_ARMORPIERCING"):
					return 264;
			
				case joaat("COMPONENT_COMBATMG_MK2_CLIP_FMJ"):
					return 265;
			
				case joaat("COMPONENT_COMBATMG_MK2_CLIP_INCENDIARY"):
					return 266;
			
				case joaat("COMPONENT_COMBATMG_MK2_CLIP_TRACER"):
					return 267;
			
				case joaat("COMPONENT_AT_AR_AFGRIP_02"):
					return 268;
			
				case joaat("COMPONENT_AT_SIGHTS"):
					return 269;
			
				case joaat("COMPONENT_AT_SCOPE_SMALL_MK2"):
					return 270;
			
				case joaat("COMPONENT_AT_SCOPE_MEDIUM_MK2"):
					return 271;
			
				case joaat("COMPONENT_AT_MUZZLE_01"):
					return 272;
			
				case joaat("COMPONENT_AT_MUZZLE_02"):
					return 273;
			
				case joaat("COMPONENT_AT_MUZZLE_03"):
					return 274;
			
				case joaat("COMPONENT_AT_MUZZLE_04"):
					return 275;
			
				case joaat("COMPONENT_AT_MUZZLE_05"):
					return 276;
			
				case joaat("COMPONENT_AT_MUZZLE_06"):
					return 277;
			
				case joaat("COMPONENT_AT_MUZZLE_07"):
					return 278;
			
				case joaat("COMPONENT_AT_MG_BARREL_01"):
					return 279;
			
				case joaat("COMPONENT_AT_MG_BARREL_02"):
					return 280;
			
				case joaat("COMPONENT_COMBATMG_MK2_CAMO"):
					return 345;
			
				case joaat("COMPONENT_COMBATMG_MK2_CAMO_02"):
					return 346;
			
				case joaat("COMPONENT_COMBATMG_MK2_CAMO_03"):
					return 347;
			
				case joaat("COMPONENT_COMBATMG_MK2_CAMO_04"):
					return 348;
			
				case joaat("COMPONENT_COMBATMG_MK2_CAMO_05"):
					return 349;
			
				case joaat("COMPONENT_COMBATMG_MK2_CAMO_06"):
					return 350;
			
				case joaat("COMPONENT_COMBATMG_MK2_CAMO_07"):
					return 351;
			
				case joaat("COMPONENT_COMBATMG_MK2_CAMO_08"):
					return 352;
			
				case joaat("COMPONENT_COMBATMG_MK2_CAMO_09"):
					return 353;
			
				case joaat("COMPONENT_COMBATMG_MK2_CAMO_10"):
					return 354;
			
				case joaat("COMPONENT_COMBATMG_MK2_CAMO_IND_01"):
					return 355;
			}
			break;
	
		case joaat("WEAPON_ASSAULTRIFLE_MK2"):
			switch (iParam0)
			{
				case joaat("COMPONENT_ASSAULTRIFLE_MK2_CLIP_01"):
					return 281;
			
				case joaat("COMPONENT_ASSAULTRIFLE_MK2_CLIP_02"):
					return 282;
			
				case joaat("COMPONENT_ASSAULTRIFLE_MK2_CLIP_ARMORPIERCING"):
					return 283;
			
				case joaat("COMPONENT_ASSAULTRIFLE_MK2_CLIP_FMJ"):
					return 284;
			
				case joaat("COMPONENT_ASSAULTRIFLE_MK2_CLIP_INCENDIARY"):
					return 285;
			
				case joaat("COMPONENT_ASSAULTRIFLE_MK2_CLIP_TRACER"):
					return 286;
			
				case joaat("COMPONENT_AT_AR_AFGRIP_02"):
					return 287;
			
				case joaat("COMPONENT_AT_AR_FLSH"):
					return 288;
			
				case joaat("COMPONENT_AT_SIGHTS"):
					return 289;
			
				case joaat("COMPONENT_AT_SCOPE_MACRO_MK2"):
					return 290;
			
				case joaat("COMPONENT_AT_SCOPE_MEDIUM_MK2"):
					return 291;
			
				case joaat("COMPONENT_AT_AR_SUPP_02"):
					return 292;
			
				case joaat("COMPONENT_AT_MUZZLE_01"):
					return 293;
			
				case joaat("COMPONENT_AT_MUZZLE_02"):
					return 294;
			
				case joaat("COMPONENT_AT_MUZZLE_03"):
					return 295;
			
				case joaat("COMPONENT_AT_MUZZLE_04"):
					return 296;
			
				case joaat("COMPONENT_AT_MUZZLE_05"):
					return 297;
			
				case joaat("COMPONENT_AT_MUZZLE_06"):
					return 298;
			
				case joaat("COMPONENT_AT_MUZZLE_07"):
					return 299;
			
				case joaat("COMPONENT_AT_AR_BARREL_01"):
					return 300;
			
				case joaat("COMPONENT_AT_AR_BARREL_02"):
					return 301;
			
				case joaat("COMPONENT_ASSAULTRIFLE_MK2_CAMO"):
					return 323;
			
				case joaat("COMPONENT_ASSAULTRIFLE_MK2_CAMO_02"):
					return 324;
			
				case joaat("COMPONENT_ASSAULTRIFLE_MK2_CAMO_03"):
					return 325;
			
				case joaat("COMPONENT_ASSAULTRIFLE_MK2_CAMO_04"):
					return 326;
			
				case joaat("COMPONENT_ASSAULTRIFLE_MK2_CAMO_05"):
					return 327;
			
				case joaat("COMPONENT_ASSAULTRIFLE_MK2_CAMO_06"):
					return 328;
			
				case joaat("COMPONENT_ASSAULTRIFLE_MK2_CAMO_07"):
					return 329;
			
				case joaat("COMPONENT_ASSAULTRIFLE_MK2_CAMO_08"):
					return 330;
			
				case joaat("COMPONENT_ASSAULTRIFLE_MK2_CAMO_09"):
					return 331;
			
				case joaat("COMPONENT_ASSAULTRIFLE_MK2_CAMO_10"):
					return 332;
			
				case joaat("COMPONENT_ASSAULTRIFLE_MK2_CAMO_IND_01"):
					return 333;
			}
			break;
	
		case joaat("WEAPON_CARBINERIFLE_MK2"):
			switch (iParam0)
			{
				case joaat("COMPONENT_CARBINERIFLE_MK2_CLIP_01"):
					return 302;
			
				case joaat("COMPONENT_CARBINERIFLE_MK2_CLIP_02"):
					return 303;
			
				case joaat("COMPONENT_CARBINERIFLE_MK2_CLIP_ARMORPIERCING"):
					return 304;
			
				case joaat("COMPONENT_CARBINERIFLE_MK2_CLIP_FMJ"):
					return 305;
			
				case joaat("COMPONENT_CARBINERIFLE_MK2_CLIP_INCENDIARY"):
					return 306;
			
				case joaat("COMPONENT_CARBINERIFLE_MK2_CLIP_TRACER"):
					return 307;
			
				case joaat("COMPONENT_AT_AR_AFGRIP_02"):
					return 308;
			
				case joaat("COMPONENT_AT_AR_FLSH"):
					return 309;
			
				case joaat("COMPONENT_AT_SIGHTS"):
					return 310;
			
				case joaat("COMPONENT_AT_SCOPE_MACRO_MK2"):
					return 311;
			
				case joaat("COMPONENT_AT_SCOPE_MEDIUM_MK2"):
					return 312;
			
				case joaat("COMPONENT_AT_AR_SUPP"):
					return 313;
			
				case joaat("COMPONENT_AT_MUZZLE_01"):
					return 314;
			
				case joaat("COMPONENT_AT_MUZZLE_02"):
					return 315;
			
				case joaat("COMPONENT_AT_MUZZLE_03"):
					return 316;
			
				case joaat("COMPONENT_AT_MUZZLE_04"):
					return 317;
			
				case joaat("COMPONENT_AT_MUZZLE_05"):
					return 318;
			
				case joaat("COMPONENT_AT_MUZZLE_06"):
					return 319;
			
				case joaat("COMPONENT_AT_MUZZLE_07"):
					return 320;
			
				case joaat("COMPONENT_AT_CR_BARREL_01"):
					return 321;
			
				case joaat("COMPONENT_AT_CR_BARREL_02"):
					return 322;
			
				case joaat("COMPONENT_CARBINERIFLE_MK2_CAMO"):
					return 334;
			
				case joaat("COMPONENT_CARBINERIFLE_MK2_CAMO_02"):
					return 335;
			
				case joaat("COMPONENT_CARBINERIFLE_MK2_CAMO_03"):
					return 336;
			
				case joaat("COMPONENT_CARBINERIFLE_MK2_CAMO_04"):
					return 337;
			
				case joaat("COMPONENT_CARBINERIFLE_MK2_CAMO_05"):
					return 338;
			
				case joaat("COMPONENT_CARBINERIFLE_MK2_CAMO_06"):
					return 339;
			
				case joaat("COMPONENT_CARBINERIFLE_MK2_CAMO_07"):
					return 340;
			
				case joaat("COMPONENT_CARBINERIFLE_MK2_CAMO_08"):
					return 341;
			
				case joaat("COMPONENT_CARBINERIFLE_MK2_CAMO_09"):
					return 342;
			
				case joaat("COMPONENT_CARBINERIFLE_MK2_CAMO_10"):
					return 343;
			
				case joaat("COMPONENT_CARBINERIFLE_MK2_CAMO_IND_01"):
					return 344;
			}
			break;
	
		case joaat("WEAPON_PUMPSHOTGUN_MK2"):
			switch (iParam0)
			{
				case joaat("COMPONENT_PUMPSHOTGUN_MK2_CLIP_01"):
					return 395;
			
				case joaat("COMPONENT_PUMPSHOTGUN_MK2_CLIP_ARMORPIERCING"):
					return 396;
			
				case joaat("COMPONENT_PUMPSHOTGUN_MK2_CLIP_EXPLOSIVE"):
					return 397;
			
				case joaat("COMPONENT_PUMPSHOTGUN_MK2_CLIP_HOLLOWPOINT"):
					return 398;
			
				case joaat("COMPONENT_PUMPSHOTGUN_MK2_CLIP_INCENDIARY"):
					return 399;
			
				case joaat("COMPONENT_AT_AR_FLSH"):
					return 400;
			
				case joaat("COMPONENT_AT_SIGHTS"):
					return 401;
			
				case joaat("COMPONENT_AT_SCOPE_MACRO_MK2"):
					return 402;
			
				case joaat("COMPONENT_AT_SCOPE_SMALL_MK2"):
					return 403;
			
				case joaat("COMPONENT_AT_SR_SUPP_03"):
					return 404;
			
				case joaat("COMPONENT_AT_MUZZLE_08"):
					return 405;
			
				case joaat("COMPONENT_PUMPSHOTGUN_MK2_CAMO"):
					return 488;
			
				case joaat("COMPONENT_PUMPSHOTGUN_MK2_CAMO_02"):
					return 489;
			
				case joaat("COMPONENT_PUMPSHOTGUN_MK2_CAMO_03"):
					return 490;
			
				case joaat("COMPONENT_PUMPSHOTGUN_MK2_CAMO_04"):
					return 491;
			
				case joaat("COMPONENT_PUMPSHOTGUN_MK2_CAMO_05"):
					return 492;
			
				case joaat("COMPONENT_PUMPSHOTGUN_MK2_CAMO_06"):
					return 493;
			
				case joaat("COMPONENT_PUMPSHOTGUN_MK2_CAMO_07"):
					return 494;
			
				case joaat("COMPONENT_PUMPSHOTGUN_MK2_CAMO_08"):
					return 495;
			
				case joaat("COMPONENT_PUMPSHOTGUN_MK2_CAMO_09"):
					return 496;
			
				case joaat("COMPONENT_PUMPSHOTGUN_MK2_CAMO_10"):
					return 497;
			
				case joaat("COMPONENT_PUMPSHOTGUN_MK2_CAMO_IND_01"):
					return 498;
			}
			break;
	
		case joaat("WEAPON_SPECIALCARBINE_MK2"):
			switch (iParam0)
			{
				case joaat("COMPONENT_SPECIALCARBINE_MK2_CLIP_01"):
					return 406;
			
				case joaat("COMPONENT_SPECIALCARBINE_MK2_CLIP_02"):
					return 407;
			
				case joaat("COMPONENT_SPECIALCARBINE_MK2_CLIP_ARMORPIERCING"):
					return 408;
			
				case joaat("COMPONENT_SPECIALCARBINE_MK2_CLIP_FMJ"):
					return 409;
			
				case joaat("COMPONENT_SPECIALCARBINE_MK2_CLIP_INCENDIARY"):
					return 410;
			
				case joaat("COMPONENT_SPECIALCARBINE_MK2_CLIP_TRACER"):
					return 411;
			
				case joaat("COMPONENT_AT_AR_FLSH"):
					return 412;
			
				case joaat("COMPONENT_AT_SIGHTS"):
					return 413;
			
				case joaat("COMPONENT_AT_SCOPE_MACRO_MK2"):
					return 414;
			
				case joaat("COMPONENT_AT_SCOPE_MEDIUM_MK2"):
					return 415;
			
				case joaat("COMPONENT_AT_AR_SUPP_02"):
					return 416;
			
				case joaat("COMPONENT_AT_MUZZLE_01"):
					return 417;
			
				case joaat("COMPONENT_AT_MUZZLE_02"):
					return 418;
			
				case joaat("COMPONENT_AT_MUZZLE_03"):
					return 419;
			
				case joaat("COMPONENT_AT_MUZZLE_04"):
					return 420;
			
				case joaat("COMPONENT_AT_MUZZLE_05"):
					return 421;
			
				case joaat("COMPONENT_AT_MUZZLE_06"):
					return 422;
			
				case joaat("COMPONENT_AT_MUZZLE_07"):
					return 423;
			
				case joaat("COMPONENT_AT_AR_AFGRIP_02"):
					return 424;
			
				case joaat("COMPONENT_AT_SC_BARREL_01"):
					return 425;
			
				case joaat("COMPONENT_AT_SC_BARREL_02"):
					return 426;
			
				case joaat("COMPONENT_SPECIALCARBINE_MK2_CAMO"):
					return 532;
			
				case joaat("COMPONENT_SPECIALCARBINE_MK2_CAMO_02"):
					return 533;
			
				case joaat("COMPONENT_SPECIALCARBINE_MK2_CAMO_03"):
					return 534;
			
				case joaat("COMPONENT_SPECIALCARBINE_MK2_CAMO_04"):
					return 535;
			
				case joaat("COMPONENT_SPECIALCARBINE_MK2_CAMO_05"):
					return 536;
			
				case joaat("COMPONENT_SPECIALCARBINE_MK2_CAMO_06"):
					return 537;
			
				case joaat("COMPONENT_SPECIALCARBINE_MK2_CAMO_07"):
					return 538;
			
				case joaat("COMPONENT_SPECIALCARBINE_MK2_CAMO_08"):
					return 539;
			
				case joaat("COMPONENT_SPECIALCARBINE_MK2_CAMO_09"):
					return 540;
			
				case joaat("COMPONENT_SPECIALCARBINE_MK2_CAMO_10"):
					return 541;
			
				case joaat("COMPONENT_SPECIALCARBINE_MK2_CAMO_IND_01"):
					return 542;
			}
			break;
	
		case joaat("WEAPON_SNSPISTOL_MK2"):
			switch (iParam0)
			{
				case joaat("COMPONENT_SNSPISTOL_MK2_CLIP_01"):
					return 427;
			
				case joaat("COMPONENT_SNSPISTOL_MK2_CLIP_02"):
					return 428;
			
				case joaat("COMPONENT_SNSPISTOL_MK2_CLIP_FMJ"):
					return 429;
			
				case joaat("COMPONENT_SNSPISTOL_MK2_CLIP_HOLLOWPOINT"):
					return 430;
			
				case joaat("COMPONENT_SNSPISTOL_MK2_CLIP_INCENDIARY"):
					return 431;
			
				case joaat("COMPONENT_SNSPISTOL_MK2_CLIP_TRACER"):
					return 432;
			
				case joaat("COMPONENT_AT_PI_FLSH_03"):
					return 433;
			
				case joaat("COMPONENT_AT_PI_RAIL_02"):
					return 434;
			
				case joaat("COMPONENT_AT_PI_SUPP_02"):
					return 435;
			
				case joaat("COMPONENT_AT_PI_COMP_02"):
					return 436;
			
				case joaat("COMPONENT_SNSPISTOL_MK2_CAMO"):
					return 510;
			
				case joaat("COMPONENT_SNSPISTOL_MK2_CAMO_02"):
					return 511;
			
				case joaat("COMPONENT_SNSPISTOL_MK2_CAMO_03"):
					return 512;
			
				case joaat("COMPONENT_SNSPISTOL_MK2_CAMO_04"):
					return 513;
			
				case joaat("COMPONENT_SNSPISTOL_MK2_CAMO_05"):
					return 514;
			
				case joaat("COMPONENT_SNSPISTOL_MK2_CAMO_06"):
					return 515;
			
				case joaat("COMPONENT_SNSPISTOL_MK2_CAMO_07"):
					return 516;
			
				case joaat("COMPONENT_SNSPISTOL_MK2_CAMO_08"):
					return 517;
			
				case joaat("COMPONENT_SNSPISTOL_MK2_CAMO_09"):
					return 518;
			
				case joaat("COMPONENT_SNSPISTOL_MK2_CAMO_10"):
					return 519;
			
				case joaat("COMPONENT_SNSPISTOL_MK2_CAMO_IND_01"):
					return 520;
			}
			break;
	
		case joaat("WEAPON_MARKSMANRIFLE_MK2"):
			switch (iParam0)
			{
				case joaat("COMPONENT_MARKSMANRIFLE_MK2_CLIP_01"):
					return 437;
			
				case joaat("COMPONENT_MARKSMANRIFLE_MK2_CLIP_02"):
					return 438;
			
				case joaat("COMPONENT_MARKSMANRIFLE_MK2_CLIP_ARMORPIERCING"):
					return 439;
			
				case joaat("COMPONENT_MARKSMANRIFLE_MK2_CLIP_FMJ"):
					return 440;
			
				case joaat("COMPONENT_MARKSMANRIFLE_MK2_CLIP_INCENDIARY"):
					return 441;
			
				case joaat("COMPONENT_MARKSMANRIFLE_MK2_CLIP_TRACER"):
					return 442;
			
				case joaat("COMPONENT_AT_AR_FLSH"):
					return 443;
			
				case joaat("COMPONENT_AT_SIGHTS"):
					return 444;
			
				case joaat("COMPONENT_AT_SCOPE_MEDIUM_MK2"):
					return 445;
			
				case joaat("COMPONENT_AT_SCOPE_LARGE_FIXED_ZOOM_MK2"):
					return 446;
			
				case joaat("COMPONENT_AT_AR_SUPP"):
					return 447;
			
				case joaat("COMPONENT_AT_MUZZLE_01"):
					return 448;
			
				case joaat("COMPONENT_AT_MUZZLE_02"):
					return 449;
			
				case joaat("COMPONENT_AT_MUZZLE_03"):
					return 450;
			
				case joaat("COMPONENT_AT_MUZZLE_04"):
					return 451;
			
				case joaat("COMPONENT_AT_MUZZLE_05"):
					return 452;
			
				case joaat("COMPONENT_AT_MUZZLE_06"):
					return 453;
			
				case joaat("COMPONENT_AT_MUZZLE_07"):
					return 454;
			
				case joaat("COMPONENT_AT_AR_AFGRIP_02"):
					return 455;
			
				case joaat("COMPONENT_AT_MRFL_BARREL_01"):
					return 456;
			
				case joaat("COMPONENT_AT_MRFL_BARREL_02"):
					return 457;
			
				case joaat("COMPONENT_MARKSMANRIFLE_MK2_CAMO"):
					return 521;
			
				case joaat("COMPONENT_MARKSMANRIFLE_MK2_CAMO_02"):
					return 522;
			
				case joaat("COMPONENT_MARKSMANRIFLE_MK2_CAMO_03"):
					return 523;
			
				case joaat("COMPONENT_MARKSMANRIFLE_MK2_CAMO_04"):
					return 524;
			
				case joaat("COMPONENT_MARKSMANRIFLE_MK2_CAMO_05"):
					return 525;
			
				case joaat("COMPONENT_MARKSMANRIFLE_MK2_CAMO_06"):
					return 526;
			
				case joaat("COMPONENT_MARKSMANRIFLE_MK2_CAMO_07"):
					return 527;
			
				case joaat("COMPONENT_MARKSMANRIFLE_MK2_CAMO_08"):
					return 528;
			
				case joaat("COMPONENT_MARKSMANRIFLE_MK2_CAMO_09"):
					return 529;
			
				case joaat("COMPONENT_MARKSMANRIFLE_MK2_CAMO_10"):
					return 530;
			
				case joaat("COMPONENT_MARKSMANRIFLE_MK2_CAMO_IND_01"):
					return 531;
			}
			break;
	
		case joaat("WEAPON_REVOLVER_MK2"):
			switch (iParam0)
			{
				case joaat("COMPONENT_REVOLVER_MK2_CLIP_01"):
					return 458;
			
				case joaat("COMPONENT_REVOLVER_MK2_CLIP_FMJ"):
					return 459;
			
				case joaat("COMPONENT_REVOLVER_MK2_CLIP_HOLLOWPOINT"):
					return 460;
			
				case joaat("COMPONENT_REVOLVER_MK2_CLIP_INCENDIARY"):
					return 461;
			
				case joaat("COMPONENT_REVOLVER_MK2_CLIP_TRACER"):
					return 462;
			
				case joaat("COMPONENT_AT_SIGHTS"):
					return 463;
			
				case joaat("COMPONENT_AT_SCOPE_MACRO_MK2"):
					return 464;
			
				case joaat("COMPONENT_AT_PI_FLSH"):
					return 465;
			
				case joaat("COMPONENT_AT_PI_COMP_03"):
					return 466;
			
				case joaat("COMPONENT_REVOLVER_MK2_CAMO"):
					return 499;
			
				case joaat("COMPONENT_REVOLVER_MK2_CAMO_02"):
					return 500;
			
				case joaat("COMPONENT_REVOLVER_MK2_CAMO_03"):
					return 501;
			
				case joaat("COMPONENT_REVOLVER_MK2_CAMO_04"):
					return 502;
			
				case joaat("COMPONENT_REVOLVER_MK2_CAMO_05"):
					return 503;
			
				case joaat("COMPONENT_REVOLVER_MK2_CAMO_06"):
					return 504;
			
				case joaat("COMPONENT_REVOLVER_MK2_CAMO_07"):
					return 505;
			
				case joaat("COMPONENT_REVOLVER_MK2_CAMO_08"):
					return 506;
			
				case joaat("COMPONENT_REVOLVER_MK2_CAMO_09"):
					return 507;
			
				case joaat("COMPONENT_REVOLVER_MK2_CAMO_10"):
					return 508;
			
				case joaat("COMPONENT_REVOLVER_MK2_CAMO_IND_01"):
					return 509;
			}
			break;
	
		case joaat("WEAPON_BULLPUPRIFLE_MK2"):
			switch (iParam0)
			{
				case joaat("COMPONENT_BULLPUPRIFLE_MK2_CLIP_01"):
					return 467;
			
				case joaat("COMPONENT_BULLPUPRIFLE_MK2_CLIP_02"):
					return 468;
			
				case joaat("COMPONENT_BULLPUPRIFLE_MK2_CLIP_ARMORPIERCING"):
					return 469;
			
				case joaat("COMPONENT_BULLPUPRIFLE_MK2_CLIP_FMJ"):
					return 470;
			
				case joaat("COMPONENT_BULLPUPRIFLE_MK2_CLIP_INCENDIARY"):
					return 471;
			
				case joaat("COMPONENT_BULLPUPRIFLE_MK2_CLIP_TRACER"):
					return 472;
			
				case joaat("COMPONENT_AT_AR_FLSH"):
					return 473;
			
				case joaat("COMPONENT_AT_SIGHTS"):
					return 474;
			
				case joaat("COMPONENT_AT_SCOPE_MACRO_02_MK2"):
					return 475;
			
				case joaat("COMPONENT_AT_SCOPE_SMALL_MK2"):
					return 476;
			
				case joaat("COMPONENT_AT_BP_BARREL_01"):
					return 477;
			
				case joaat("COMPONENT_AT_BP_BARREL_02"):
					return 478;
			
				case joaat("COMPONENT_AT_AR_SUPP"):
					return 479;
			
				case joaat("COMPONENT_AT_MUZZLE_01"):
					return 480;
			
				case joaat("COMPONENT_AT_MUZZLE_02"):
					return 481;
			
				case joaat("COMPONENT_AT_MUZZLE_03"):
					return 482;
			
				case joaat("COMPONENT_AT_MUZZLE_04"):
					return 483;
			
				case joaat("COMPONENT_AT_MUZZLE_05"):
					return 484;
			
				case joaat("COMPONENT_AT_MUZZLE_06"):
					return 485;
			
				case joaat("COMPONENT_AT_MUZZLE_07"):
					return 486;
			
				case joaat("COMPONENT_AT_AR_AFGRIP_02"):
					return 487;
			
				case joaat("COMPONENT_BULLPUPRIFLE_MK2_CAMO"):
					return 543;
			
				case joaat("COMPONENT_BULLPUPRIFLE_MK2_CAMO_02"):
					return 544;
			
				case joaat("COMPONENT_BULLPUPRIFLE_MK2_CAMO_03"):
					return 545;
			
				case joaat("COMPONENT_BULLPUPRIFLE_MK2_CAMO_04"):
					return 546;
			
				case joaat("COMPONENT_BULLPUPRIFLE_MK2_CAMO_05"):
					return 547;
			
				case joaat("COMPONENT_BULLPUPRIFLE_MK2_CAMO_06"):
					return 548;
			
				case joaat("COMPONENT_BULLPUPRIFLE_MK2_CAMO_07"):
					return 549;
			
				case joaat("COMPONENT_BULLPUPRIFLE_MK2_CAMO_08"):
					return 550;
			
				case joaat("COMPONENT_BULLPUPRIFLE_MK2_CAMO_09"):
					return 551;
			
				case joaat("COMPONENT_BULLPUPRIFLE_MK2_CAMO_10"):
					return 552;
			
				case joaat("COMPONENT_BULLPUPRIFLE_MK2_CAMO_IND_01"):
					return 553;
			}
			break;
	
		case joaat("WEAPON_RAYPISTOL"):
			switch (iParam0)
			{
				case joaat("COMPONENT_RAYPISTOL_VARMOD_XMAS18"):
					return 554;
			}
			break;
	
		case joaat("WEAPON_CERAMICPISTOL"):
			switch (iParam0)
			{
				case joaat("COMPONENT_CERAMICPISTOL_CLIP_01"):
					return 555;
			
				case joaat("COMPONENT_CERAMICPISTOL_CLIP_02"):
					return 556;
			
				case joaat("COMPONENT_CERAMICPISTOL_SUPP"):
					return 557;
			}
			break;
	
		case joaat("WEAPON_COMBATSHOTGUN"):
			switch (iParam0)
			{
				case joaat("COMPONENT_COMBATSHOTGUN_CLIP_01"):
					return 559;
			
				case joaat("COMPONENT_AT_AR_FLSH"):
					return 560;
			
				case joaat("COMPONENT_AT_AR_SUPP"):
					return 561;
			}
			break;
	
		case joaat("WEAPON_MILITARYRIFLE"):
			switch (iParam0)
			{
				case joaat("COMPONENT_MILITARYRIFLE_CLIP_01"):
					return 562;
			
				case joaat("COMPONENT_MILITARYRIFLE_CLIP_02"):
					return 563;
			
				case joaat("COMPONENT_MILITARYRIFLE_SIGHT_01"):
					return 564;
			
				case joaat("COMPONENT_AT_SCOPE_SMALL"):
					return 565;
			
				case joaat("COMPONENT_AT_AR_FLSH"):
					return 566;
			
				case joaat("COMPONENT_AT_AR_SUPP"):
					return 567;
			}
			break;
	
		case joaat("WEAPON_GADGETPISTOL"):
			switch (iParam0)
			{
				case joaat("COMPONENT_GADGETPISTOL_CLIP_01"):
					return 558;
			}
			break;
	
		case joaat("WEAPON_HEAVYRIFLE"):
			switch (iParam0)
			{
				case joaat("COMPONENT_HEAVYRIFLE_CLIP_01"):
					return 99;
			
				case joaat("COMPONENT_HEAVYRIFLE_CLIP_02"):
					return 100;
			
				case joaat("COMPONENT_HEAVYRIFLE_CAMO1"):
					return 568;
			
				case joaat("COMPONENT_AT_AR_AFGRIP"):
					return 101;
			
				case joaat("COMPONENT_AT_AR_FLSH"):
					return 102;
			
				case joaat("COMPONENT_AT_SCOPE_MEDIUM"):
					return 103;
			
				case joaat("COMPONENT_AT_AR_SUPP"):
					return 104;
			
				case joaat("COMPONENT_HEAVYRIFLE_SIGHT_01"):
					return 572;
			}
			break;
	
		case joaat("WEAPON_TACTICALRIFLE"):
			switch (iParam0)
			{
				case joaat("COMPONENT_TACTICALRIFLE_CLIP_01"):
					return 573;
			
				case joaat("COMPONENT_TACTICALRIFLE_CLIP_02"):
					return 574;
			
				case joaat("COMPONENT_AT_AR_FLSH_REH"):
					return 575;
			
				case joaat("COMPONENT_AT_AR_SUPP_02"):
					return 576;
			
				case joaat("COMPONENT_AT_AR_AFGRIP"):
					return 577;
			}
			break;
	
		case 465894841:
			switch (iParam0)
			{
				case 375646046:
					return 578;
			
				case 503494624:
					return 579;
			}
			break;
	
		case -22923932:
			switch (iParam0)
			{
				case 1130760338:
					return 580;
			}
			break;
	
		case joaat("WEAPON_BAT"):
			switch (iParam0)
			{
				case 716207715:
					return 581;
			
				case 446271089:
					return 583;
			
				case 1045616099:
					return 584;
			
				case 1336277129:
					return 585;
			
				case -513369076:
					return 586;
			
				case -447700000:
					return 587;
			
				case -149207179:
					return 588;
			
				case 166784288:
					return 589;
			
				case 2068729789:
					return 590;
			
				case 1761389338:
					return 591;
			}
			break;
	
		case joaat("WEAPON_KNIFE"):
			switch (iParam0)
			{
				case 370527443:
					return 582;
			
				case 1109907117:
					return 592;
			
				case 2055456612:
					return 593;
			
				case 1690606566:
					return 594;
			
				case -1633316949:
					return 595;
			
				case -1461476313:
					return 596;
			
				case -1770422457:
					return 597;
			
				case -2059739958:
					return 598;
			
				case -1280001599:
					return 599;
			
				case -922885037:
					return 600;
			}
			break;
	}

	return 0;
}

int func_86(int iParam0, int iParam1, int iParam2) // Position - 0xF023
{
	int num;

	num = _MPCHAR_STAT_GET_INT(func_87(iParam0, iParam1), iParam2, 0);
	return num;
}

eMPStat func_87(int iParam0, int iParam1) // Position - 0xF03E
{
	int num;
	int num2;

	num = func_84(iParam0, iParam1);
	num2 = func_90(num);

	if (func_89() == 0 || func_88() == 0 || func_89() == 999 && func_88() == 999)
	{
		switch (num2)
		{
			case 0:
				return MP_STAT_WEAP_FM_ADDON_PURCH;
		
			case 1:
				return MP_STAT_WEAP_FM_ADDON_PURCH2;
		
			case 2:
				return MP_STAT_WEAP_FM_ADDON_PURCH3;
		
			case 3:
				return MP_STAT_WEAP_FM_ADDON_PURCH4;
		
			case 4:
				return MP_STAT_WEAP_FM_ADDON_PURCH5;
		
			case 5:
				return MP_STAT_WEAP_FM_ADDON_PURCH6;
		
			case 6:
				return MP_STAT_WEAP_FM_ADDON_PURCH7;
		
			case 7:
				return MP_STAT_WEAP_FM_ADDON_PURCH8;
		
			case 8:
				return MP_STAT_WEAP_FM_ADDON_PURCH9;
		
			case 9:
				return MP_STAT_WEAP_FM_ADDON_PURCH10;
		
			case 10:
				return MP_STAT_WEAP_FM_ADDON_PURCH11;
		
			case 11:
				return MP_STAT_WEAP_FM_ADDON_PURCH12;
		
			case 12:
				return MP_STAT_WEAP_FM_ADDON_PURCH13;
		
			case 13:
				return MP_STAT_WEAP_FM_ADDON_PURCH14;
		
			case 14:
				return MP_STAT_WEAP_FM_ADDON_PURCH15;
		
			case 15:
				return MP_STAT_WEAP_FM_ADDON_PURCH16;
		
			case 16:
				return MP_STAT_WEAP_FM_ADDON_PURCH17;
		
			case 17:
				return MP_STAT_WEAP_FM_ADDON_PURCH18;
		
			case 18:
				return MP_STAT_WEAP_FM_ADDON_PURCH19;
		}
	}

	return 14192;
}

int func_88() // Position - 0xF1AF
{
	return Global_32164;
}

int func_89() // Position - 0xF1BA
{
	return Global_32163;
}

int func_90(int iParam0) // Position - 0xF1C5
{
	return iParam0 / 32;
}

BOOL func_91() // Position - 0xF1D2
{
	return Global_1575039;
}

BOOL func_92(int iParam0, int iParam1, int iParam2) // Position - 0xF1DE
{
	int num;
	int num2;

	if (func_91())
		return false;

	num = func_93(iParam0, iParam1, iParam2);
	num2 = func_84(iParam0, iParam1);
	return IS_BIT_SET(num, func_83(num2));
}

int func_93(int iParam0, int iParam1, int iParam2) // Position - 0xF210
{
	int num;

	num = _MPCHAR_STAT_GET_INT(func_94(iParam0, iParam1), iParam2, 0);
	return num;
}

eMPStat func_94(int iParam0, int iParam1) // Position - 0xF22B
{
	int num;
	int num2;

	num = func_84(iParam0, iParam1);
	num2 = func_90(num);

	if (func_89() == 0 || func_88() == 0 || func_89() == 999 && func_88() == 999)
	{
		switch (num2)
		{
			case 0:
				return MP_STAT_CHAR_FM_WEAP_ADDON_1_EQUIP;
		
			case 1:
				return MP_STAT_CHAR_FM_WEAP_ADDON_2_EQUIP;
		
			case 2:
				return MP_STAT_CHAR_FM_WEAP_ADDON_3_EQUIP;
		
			case 3:
				return MP_STAT_CHAR_FM_WEAP_ADDON_4_EQUIP;
		
			case 4:
				return MP_STAT_CHAR_FM_WEAP_ADDON_5_EQUIP;
		
			case 5:
				return MP_STAT_CHAR_FM_WEAP_ADDON_6_EQUIP;
		
			case 6:
				return MP_STAT_CHAR_FM_WEAP_ADDON_7_EQUIP;
		
			case 7:
				return MP_STAT_CHAR_FM_WEAP_ADDON_8_EQUIP;
		
			case 8:
				return MP_STAT_CHAR_FM_WEAP_ADDON_9_EQUIP;
		
			case 9:
				return MP_STAT_CHAR_FM_WEAP_ADDON_10_EQUIP;
		
			case 10:
				return MP_STAT_CHAR_FM_WEAP_ADDON_11_EQUIP;
		
			case 11:
				return MP_STAT_CHAR_FM_WEAP_ADDON_12_EQUIP;
		
			case 12:
				return MP_STAT_CHAR_FM_WEAP_ADDON_13_EQUIP;
		
			case 13:
				return MP_STAT_CHAR_FM_WEAP_ADDON_14_EQUIP;
		
			case 14:
				return MP_STAT_CHAR_FM_WEAP_ADDON_15_EQUIP;
		
			case 15:
				return MP_STAT_CHAR_FM_WEAP_ADDON_16_EQUIP;
		
			case 16:
				return MP_STAT_CHAR_FM_WEAP_ADDON_17_EQUIP;
		
			case 17:
				return MP_STAT_CHAR_FM_WEAP_ADDON_18_EQUIP;
		
			case 18:
				return MP_STAT_CHAR_FM_WEAP_ADDON_19_EQUIP;
		}
	}

	return MP_STAT_CHAR_FM_WEAP_ADDON_5_EQUIP;
}

BOOL func_95(int iParam0) // Position - 0xF39F
{
	switch (iParam0)
	{
		case 46:
		case 47:
		case 48:
		case 49:
		case 52:
		case 53:
		case 56:
		case 59:
			return true;
	
		default:
		
	}

	return false;
}

void func_96(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4) // Position - 0xF3E3
{
	*uParam0 = iParam1;
	uParam0->f_4 = iParam2;
	uParam0->f_6 = iParam3;
	uParam0->f_1 = iParam4;
	return;
}

int func_97(int iParam0, var uParam1) // Position - 0xF402
{
	int i;
	int num;

	num = unk_0xDF411E9128FAD473();

	for (i = 0; i < num; i = i + 1)
	{
		if (unk_0xF65F6F7A093E58A1(i, uParam1))
			if (uParam1->f_1 == iParam0)
				return i;
	}

	return -1;
}

void func_98(var uParam0, var uParam1) // Position - 0xF43D
{
	int i;
	int j;
	int k;
	int num;
	int num2;
	int l;
	int num3;
	var unk5;
	var unk44;
	int num4;
	int num5;

	if (!unk_0x66599E73DBA5A850(uParam0))
	{
		for (i = 0; i <= 44 - 1; i = i + 1)
		{
			uParam1->[i /*5*/].f_1 = 0;
		}
	
		for (i = 0; i <= 44 - 1; i = i + 1)
		{
			num = func_101(i);
		
			if (num != 0)
			{
				num2 = unk_0x91BEC56C475EB62C(uParam0, func_101(i));
				num2.f_1 = 0;
				num2.f_2 = 0;
				num2.f_3 = 0;
				num2.f_4 = 0;
			
				if (num2 != 0 && num2 != joaat("WEAPON_UNARMED"))
				{
					num2.f_1 = unk_0x18974B8F28F70FE4(uParam0, num2);
				
					if (num2 == joaat("GADGET_PARACHUTE"))
						num2.f_1 = 1;
				
					num2.f_3 = unk_0x60B2BAFA7F1A9CDF(uParam0, num2);
					num2.f_4 = unk_0xBE5DF33289584192(uParam0, num2);
				
					if (num2.f_1 == -1)
						if (!unk_0xB2BC9E9923E2546A(uParam0, num2, &(num2.f_1)))
							num2.f_1 = 0;
				
					uParam1->[i /*5*/].f_1 = num2.f_1;
					j = 0;
				
					for (k = func_100(num2, j); k != 0; k = func_100(num2, j))
					{
						if (unk_0x1A7C88BD7ADA98BE(uParam0, num2, k))
							unk_0xECDAB41968FF21A8(&(num2.f_2), j);
					
						j = j + 1;
					}
				}
			
				uParam1->[i /*5*/] = { num2 };
			}
		}
	
		for (i = 0; i <= 50; i = i + 1)
		{
			uParam1->f_221[i /*5*/].f_1 = 0;
		}
	
		num3 = unk_0x022B5D696E908BAE();
	
		for (l = 0; l < num3; l = l + 1)
		{
			if (unk_0xA44505E95028BA80(l, &unk5) && !func_99(unk5.f_1) && num4 < 51)
			{
				if (!unk_0xEF068EDE5319404F(unk5))
				{
					num2 = unk5.f_1;
					num2.f_1 = 0;
					num2.f_2 = 0;
					num2.f_3 = 0;
					num2.f_4 = 0;
					num2.f_1 = unk_0x18974B8F28F70FE4(uParam0, num2);
				
					if (unk_0xED31EFCAA05B93ED(uParam0, num2, 0))
					{
						num2.f_3 = unk_0x60B2BAFA7F1A9CDF(uParam0, num2);
						num2.f_4 = unk_0xBE5DF33289584192(uParam0, num2);
					}
				
					if (num2.f_1 == -1)
						if (!unk_0xB2BC9E9923E2546A(uParam0, num2, &(num2.f_1)))
							num2.f_1 = 0;
				
					uParam1->f_221[num4 /*5*/].f_1 = num2.f_1;
					num5 = 0;
				
					for (j = 0; j < unk_0x66C9E88F514EFC8C(l); j = j + 1)
					{
						if (unk_0x4DEA25423FB9A358(l, j, &unk44))
						{
							if (!func_78(unk44.f_3))
							{
								if (unk_0x1A7C88BD7ADA98BE(uParam0, num2, unk44.f_3))
									unk_0xECDAB41968FF21A8(&(num2.f_2), num5);
							
								num5 = num5 + 1;
							}
						}
					}
				}
			
				if (num2 != 0)
				{
					if (!unk_0xED31EFCAA05B93ED(uParam0, num2, 0))
					{
						num2 = 0;
						num2.f_1 = 0;
					}
				}
			
				uParam1->f_221[num4 /*5*/] = { num2 };
				num4 = num4 + 1;
			}
		}
	}

	return;
}

BOOL func_99(int iParam0) // Position - 0xF6C5
{
	if (unk_0xA26A9A07F761D8F8())
	{
	}
	else
	{
		switch (iParam0)
		{
			case joaat("WEAPON_PISTOL50"):
			case joaat("WEAPON_BULLPUPSHOTGUN"):
			case joaat("WEAPON_ASSAULTSMG"):
				return false;
		
			case joaat("WEAPON_BOTTLE"):
			case joaat("WEAPON_SNSPISTOL"):
			case joaat("WEAPON_GUSENBERG"):
				return false;
		
			case joaat("WEAPON_HEAVYPISTOL"):
			case joaat("WEAPON_SPECIALCARBINE"):
				return false;
		
			case joaat("WEAPON_BULLPUPRIFLE"):
				return false;
		
			case joaat("WEAPON_DAGGER"):
			case joaat("WEAPON_VINTAGEPISTOL"):
				return false;
		
			case joaat("WEAPON_FIREWORK"):
			case joaat("WEAPON_MUSKET"):
				return false;
		
			case joaat("WEAPON_HEAVYSHOTGUN"):
			case joaat("WEAPON_MARKSMANRIFLE"):
				return false;
		
			case joaat("WEAPON_HOMINGLAUNCHER"):
			case joaat("WEAPON_PROXMINE"):
				return false;
		
			case joaat("WEAPON_COMBATPDW"):
			case joaat("WEAPON_KNUCKLE"):
			case joaat("WEAPON_MARKSMANPISTOL"):
				return false;
		
			case joaat("WEAPON_HEAVYRIFLE"):
			case joaat("WEAPON_ASSAULTMG"):
			case joaat("WEAPON_ASSAULTSNIPER"):
			case joaat("WEAPON_AMRIFLE"):
			case joaat("WEAPON_CROSSBOW"):
			case joaat("WEAPON_HARPOON"):
			case joaat("WEAPON_PROGRAMMABLEAR"):
			case joaat("WEAPON_RUBBERGUN"):
			case joaat("WEAPON_LOUDHAILER"):
			case joaat("WEAPON_FLAREGUN"):
			case joaat("WEAPON_HANDCUFFS"):
			case joaat("WEAPON_SNOWBALL"):
			case joaat("WEAPON_GARBAGEBAG"):
			case joaat("WEAPON_FLASHLIGHT"):
			case joaat("WEAPON_SWITCHBLADE"):
			case joaat("WEAPON_REVOLVER"):
			case joaat("WEAPON_DBSHOTGUN"):
			case joaat("WEAPON_COMPACTRIFLE"):
			case joaat("WEAPON_AUTOSHOTGUN"):
			case joaat("WEAPON_MINISMG"):
			case joaat("WEAPON_COMPACTLAUNCHER"):
			case joaat("WEAPON_BATTLEAXE"):
			case joaat("WEAPON_PIPEBOMB"):
			case joaat("WEAPON_POOLCUE"):
			case joaat("WEAPON_WRENCH"):
			case joaat("WEAPON_DOUBLEACTION"):
			case joaat("WEAPON_RAYCARBINE"):
			case joaat("WEAPON_RAYMINIGUN"):
			case joaat("WEAPON_RAYPISTOL"):
			case joaat("WEAPON_NAVYREVOLVER"):
			case joaat("WEAPON_CERAMICPISTOL"):
			case joaat("WEAPON_GADGETPISTOL"):
			case joaat("WEAPON_MILITARYRIFLE"):
			case joaat("WEAPON_COMBATSHOTGUN"):
			case joaat("WEAPON_EMPLAUNCHER"):
			case joaat("WEAPON_FERTILIZERCAN"):
			case joaat("WEAPON_STUNGUN_MP"):
			case joaat("WEAPON_METALDETECTOR"):
			case joaat("WEAPON_PRECISIONRIFLE"):
			case joaat("WEAPON_TACTICALRIFLE"):
			case 465894841:
			case 1703483498:
			case -22923932:
				return true;
		}
	}

	return false;
}

int func_100(int iParam0, int iParam1) // Position - 0xF89F
{
	int num;
	int num2;
	int i;
	int num3;
	var unk;
	var unk40;

	num = 0;

	switch (iParam0)
	{
		case joaat("WEAPON_PISTOL"):
			switch (iParam1)
			{
				case 0:
					num = joaat("COMPONENT_GUNRUN_MK2_UPGRADE");
					break;
			
				case 1:
					num = joaat("COMPONENT_PISTOL_CLIP_01");
					break;
			
				case 2:
					num = joaat("COMPONENT_PISTOL_CLIP_02");
					break;
			
				case 3:
					num = joaat("COMPONENT_AT_PI_FLSH");
					break;
			
				case 4:
					num = joaat("COMPONENT_AT_PI_SUPP_02");
					break;
			
				case 5:
					num = joaat("COMPONENT_PISTOL_VARMOD_LUXE");
					break;
			}
			break;
	
		case joaat("WEAPON_COMBATPISTOL"):
			switch (iParam1)
			{
				case 0:
					num = joaat("COMPONENT_COMBATPISTOL_CLIP_01");
					break;
			
				case 1:
					num = joaat("COMPONENT_COMBATPISTOL_CLIP_02");
					break;
			
				case 2:
					num = joaat("COMPONENT_AT_PI_FLSH");
					break;
			
				case 3:
					num = joaat("COMPONENT_AT_PI_SUPP");
					break;
			
				case 4:
					num = joaat("COMPONENT_COMBATPISTOL_VARMOD_LOWRIDER");
					break;
			}
			break;
	
		case joaat("WEAPON_APPISTOL"):
			switch (iParam1)
			{
				case 0:
					num = joaat("COMPONENT_APPISTOL_CLIP_01");
					break;
			
				case 1:
					num = joaat("COMPONENT_APPISTOL_CLIP_02");
					break;
			
				case 2:
					num = joaat("COMPONENT_AT_PI_FLSH");
					break;
			
				case 3:
					num = joaat("COMPONENT_AT_PI_SUPP");
					break;
			
				case 4:
					num = joaat("COMPONENT_APPISTOL_VARMOD_LUXE");
					break;
			
				case 5:
					num = joaat("COMPONENT_APPISTOL_VARMOD_SECURITY");
					break;
			}
			break;
	
		case joaat("WEAPON_MICROSMG"):
			switch (iParam1)
			{
				case 0:
					num = joaat("COMPONENT_MICROSMG_CLIP_01");
					break;
			
				case 1:
					num = joaat("COMPONENT_MICROSMG_CLIP_02");
					break;
			
				case 2:
					num = joaat("COMPONENT_AT_PI_FLSH");
					break;
			
				case 3:
					num = joaat("COMPONENT_AT_SCOPE_MACRO");
					break;
			
				case 4:
					num = joaat("COMPONENT_AT_AR_SUPP_02");
					break;
			
				case 5:
					num = joaat("COMPONENT_MICROSMG_VARMOD_LUXE");
					break;
			
				case 6:
					num = joaat("COMPONENT_MICROSMG_VARMOD_SECURITY");
					break;
			}
			break;
	
		case joaat("WEAPON_SMG"):
			switch (iParam1)
			{
				case 0:
					num = joaat("COMPONENT_GUNRUN_MK2_UPGRADE");
					break;
			
				case 1:
					num = joaat("COMPONENT_SMG_CLIP_01");
					break;
			
				case 2:
					num = joaat("COMPONENT_SMG_CLIP_02");
					break;
			
				case 3:
					num = joaat("COMPONENT_SMG_CLIP_03");
					break;
			
				case 4:
					num = joaat("COMPONENT_AT_AR_FLSH");
					break;
			
				case 5:
					num = joaat("COMPONENT_AT_PI_SUPP");
					break;
			
				case 6:
					num = joaat("COMPONENT_AT_SCOPE_MACRO_02");
					break;
			
				case 7:
					num = joaat("COMPONENT_AT_AR_AFGRIP");
					break;
			
				case 8:
					num = joaat("COMPONENT_SMG_VARMOD_LUXE");
					break;
			}
			break;
	
		case joaat("WEAPON_ASSAULTRIFLE"):
			switch (iParam1)
			{
				case 0:
					num = joaat("COMPONENT_GUNRUN_MK2_UPGRADE");
					break;
			
				case 1:
					num = joaat("COMPONENT_ASSAULTRIFLE_CLIP_01");
					break;
			
				case 2:
					num = joaat("COMPONENT_ASSAULTRIFLE_CLIP_02");
					break;
			
				case 3:
					num = joaat("COMPONENT_ASSAULTRIFLE_CLIP_03");
					break;
			
				case 4:
					num = joaat("COMPONENT_AT_AR_AFGRIP");
					break;
			
				case 5:
					num = joaat("COMPONENT_AT_AR_FLSH");
					break;
			
				case 6:
					num = joaat("COMPONENT_AT_SCOPE_MACRO");
					break;
			
				case 7:
					num = joaat("COMPONENT_AT_AR_SUPP_02");
					break;
			
				case 8:
					num = joaat("COMPONENT_ASSAULTRIFLE_VARMOD_LUXE");
					break;
			}
			break;
	
		case joaat("WEAPON_CARBINERIFLE"):
			switch (iParam1)
			{
				case 0:
					num = joaat("COMPONENT_GUNRUN_MK2_UPGRADE");
					break;
			
				case 1:
					num = joaat("COMPONENT_CARBINERIFLE_CLIP_01");
					break;
			
				case 2:
					num = joaat("COMPONENT_CARBINERIFLE_CLIP_02");
					break;
			
				case 3:
					num = joaat("COMPONENT_CARBINERIFLE_CLIP_03");
					break;
			
				case 4:
					num = joaat("COMPONENT_AT_RAILCOVER_01");
					break;
			
				case 5:
					num = joaat("COMPONENT_AT_AR_AFGRIP");
					break;
			
				case 6:
					num = joaat("COMPONENT_AT_AR_FLSH");
					break;
			
				case 7:
					num = joaat("COMPONENT_AT_SCOPE_MEDIUM");
					break;
			
				case 8:
					num = joaat("COMPONENT_AT_AR_SUPP");
					break;
			
				case 9:
					num = joaat("COMPONENT_CARBINERIFLE_VARMOD_LUXE");
					break;
			}
			break;
	
		case joaat("WEAPON_ADVANCEDRIFLE"):
			switch (iParam1)
			{
				case 0:
					num = joaat("COMPONENT_ADVANCEDRIFLE_CLIP_01");
					break;
			
				case 1:
					num = joaat("COMPONENT_ADVANCEDRIFLE_CLIP_02");
					break;
			
				case 2:
					num = joaat("COMPONENT_AT_AR_FLSH");
					break;
			
				case 3:
					num = joaat("COMPONENT_AT_SCOPE_SMALL");
					break;
			
				case 4:
					num = joaat("COMPONENT_AT_AR_SUPP");
					break;
			
				case 5:
					num = joaat("COMPONENT_ADVANCEDRIFLE_VARMOD_LUXE");
					break;
			}
			break;
	
		case joaat("WEAPON_MG"):
			switch (iParam1)
			{
				case 0:
					num = joaat("COMPONENT_MG_CLIP_01");
					break;
			
				case 1:
					num = joaat("COMPONENT_MG_CLIP_02");
					break;
			
				case 2:
					num = joaat("COMPONENT_AT_SCOPE_SMALL_02");
					break;
			
				case 3:
					num = joaat("COMPONENT_AT_AR_AFGRIP");
					break;
			
				case 4:
					num = joaat("COMPONENT_MG_VARMOD_LOWRIDER");
					break;
			}
			break;
	
		case joaat("WEAPON_COMBATMG"):
			switch (iParam1)
			{
				case 0:
					num = joaat("COMPONENT_GUNRUN_MK2_UPGRADE");
					break;
			
				case 1:
					num = joaat("COMPONENT_COMBATMG_CLIP_01");
					break;
			
				case 2:
					num = joaat("COMPONENT_COMBATMG_CLIP_02");
					break;
			
				case 3:
					num = joaat("COMPONENT_AT_AR_AFGRIP");
					break;
			
				case 4:
					num = joaat("COMPONENT_AT_SCOPE_MEDIUM");
					break;
			
				case 5:
					num = joaat("COMPONENT_COMBATMG_VARMOD_LOWRIDER");
					break;
			}
			break;
	
		case joaat("WEAPON_PUMPSHOTGUN"):
			switch (iParam1)
			{
				case 0:
					num = joaat("COMPONENT_AT_SR_SUPP");
					break;
			
				case 1:
					num = joaat("COMPONENT_AT_AR_FLSH");
					break;
			
				case 2:
					num = joaat("COMPONENT_PUMPSHOTGUN_VARMOD_LOWRIDER");
					break;
			
				case 3:
					num = joaat("COMPONENT_PUMPSHOTGUN_VARMOD_SECURITY");
					break;
			
				case 4:
					num = 330905451;
					break;
			}
			break;
	
		case joaat("WEAPON_ASSAULTSHOTGUN"):
			switch (iParam1)
			{
				case 0:
					num = joaat("COMPONENT_ASSAULTSHOTGUN_CLIP_01");
					break;
			
				case 1:
					num = joaat("COMPONENT_ASSAULTSHOTGUN_CLIP_02");
					break;
			
				case 2:
					num = joaat("COMPONENT_AT_AR_AFGRIP");
					break;
			
				case 3:
					num = joaat("COMPONENT_AT_AR_FLSH");
					break;
			
				case 4:
					num = joaat("COMPONENT_AT_AR_SUPP");
					break;
			}
			break;
	
		case joaat("WEAPON_SNIPERRIFLE"):
			switch (iParam1)
			{
				case 0:
					num = joaat("COMPONENT_SNIPERRIFLE_CLIP_01");
					break;
			
				case 1:
					num = joaat("COMPONENT_AT_SCOPE_LARGE");
					break;
			
				case 2:
					num = joaat("COMPONENT_AT_SCOPE_MAX");
					break;
			
				case 3:
					num = joaat("COMPONENT_AT_AR_SUPP_02");
					break;
			
				case 4:
					num = joaat("COMPONENT_SNIPERRIFLE_VARMOD_LUXE");
					break;
			}
			break;
	
		case joaat("WEAPON_HEAVYSNIPER"):
			switch (iParam1)
			{
				case 0:
					num = joaat("COMPONENT_GUNRUN_MK2_UPGRADE");
					break;
			
				case 1:
					num = joaat("COMPONENT_HEAVYSNIPER_CLIP_01");
					break;
			
				case 2:
					num = joaat("COMPONENT_AT_SCOPE_LARGE");
					break;
			
				case 3:
					num = joaat("COMPONENT_AT_SCOPE_MAX");
					break;
			}
			break;
	
		case joaat("WEAPON_GRENADELAUNCHER"):
			switch (iParam1)
			{
				case 0:
					num = joaat("COMPONENT_AT_AR_AFGRIP");
					break;
			
				case 1:
					num = joaat("COMPONENT_AT_AR_FLSH");
					break;
			
				case 2:
					num = joaat("COMPONENT_AT_SCOPE_SMALL");
					break;
			}
			break;
	
		case joaat("WEAPON_MINIGUN"):
			switch (iParam1)
			{
				case 0:
					num = joaat("COMPONENT_MINIGUN_CLIP_01");
					break;
			}
			break;
	
		case joaat("WEAPON_ASSAULTSMG"):
			switch (iParam1)
			{
				case 0:
					num = joaat("COMPONENT_ASSAULTSMG_CLIP_01");
					break;
			
				case 1:
					num = joaat("COMPONENT_ASSAULTSMG_CLIP_02");
					break;
			
				case 2:
					num = joaat("COMPONENT_AT_AR_FLSH");
					break;
			
				case 3:
					num = joaat("COMPONENT_AT_SCOPE_MACRO");
					break;
			
				case 4:
					num = joaat("COMPONENT_AT_AR_SUPP_02");
					break;
			
				case 5:
					num = joaat("COMPONENT_ASSAULTSMG_VARMOD_LOWRIDER");
					break;
			}
			break;
	
		case joaat("WEAPON_BULLPUPSHOTGUN"):
			switch (iParam1)
			{
				case 0:
					num = joaat("COMPONENT_AT_AR_AFGRIP");
					break;
			
				case 1:
					num = joaat("COMPONENT_AT_AR_FLSH");
					break;
			
				case 2:
					num = joaat("COMPONENT_AT_AR_SUPP_02");
					break;
			}
			break;
	
		case joaat("WEAPON_PISTOL50"):
			switch (iParam1)
			{
				case 0:
					num = joaat("COMPONENT_PISTOL50_CLIP_01");
					break;
			
				case 1:
					num = joaat("COMPONENT_PISTOL50_CLIP_02");
					break;
			
				case 2:
					num = joaat("COMPONENT_AT_PI_FLSH");
					break;
			
				case 3:
					num = joaat("COMPONENT_AT_AR_SUPP_02");
					break;
			
				case 4:
					num = joaat("COMPONENT_PISTOL50_VARMOD_LUXE");
					break;
			}
			break;
	
		case joaat("WEAPON_COMBATPDW"):
			switch (iParam1)
			{
				case 0:
					num = joaat("COMPONENT_COMBATPDW_CLIP_01");
					break;
			
				case 1:
					num = joaat("COMPONENT_COMBATPDW_CLIP_02");
					break;
			
				case 2:
					num = joaat("COMPONENT_COMBATPDW_CLIP_03");
					break;
			
				case 3:
					num = joaat("COMPONENT_AT_AR_FLSH");
					break;
			
				case 4:
					num = joaat("COMPONENT_AT_SCOPE_SMALL");
					break;
			
				case 5:
					num = joaat("COMPONENT_AT_AR_AFGRIP");
					break;
			}
			break;
	
		case joaat("WEAPON_SAWNOFFSHOTGUN"):
			switch (iParam1)
			{
				case 0:
					num = joaat("COMPONENT_SAWNOFFSHOTGUN_VARMOD_LUXE");
					break;
			}
			break;
	
		case joaat("WEAPON_BULLPUPRIFLE"):
			switch (iParam1)
			{
				case 0:
					num = joaat("COMPONENT_BULLPUPRIFLE_CLIP_01");
					break;
			
				case 1:
					num = joaat("COMPONENT_BULLPUPRIFLE_CLIP_02");
					break;
			
				case 2:
					num = joaat("COMPONENT_AT_AR_FLSH");
					break;
			
				case 3:
					num = joaat("COMPONENT_AT_SCOPE_SMALL");
					break;
			
				case 4:
					num = joaat("COMPONENT_AT_AR_SUPP");
					break;
			
				case 5:
					num = joaat("COMPONENT_AT_AR_AFGRIP");
					break;
			
				case 6:
					num = joaat("COMPONENT_BULLPUPRIFLE_VARMOD_LOW");
					break;
			}
			break;
	
		case joaat("WEAPON_SNSPISTOL"):
			switch (iParam1)
			{
				case 0:
					num = joaat("COMPONENT_SNSPISTOL_CLIP_01");
					break;
			
				case 1:
					num = joaat("COMPONENT_SNSPISTOL_CLIP_02");
					break;
			
				case 2:
					num = joaat("COMPONENT_SNSPISTOL_VARMOD_LOWRIDER");
					break;
			}
			break;
	
		case joaat("WEAPON_SPECIALCARBINE"):
			switch (iParam1)
			{
				case 0:
					num = joaat("COMPONENT_SPECIALCARBINE_CLIP_01");
					break;
			
				case 1:
					num = joaat("COMPONENT_SPECIALCARBINE_CLIP_02");
					break;
			
				case 2:
					num = joaat("COMPONENT_SPECIALCARBINE_CLIP_03");
					break;
			
				case 3:
					num = joaat("COMPONENT_AT_AR_FLSH");
					break;
			
				case 4:
					num = joaat("COMPONENT_AT_SCOPE_MEDIUM");
					break;
			
				case 5:
					num = joaat("COMPONENT_AT_AR_SUPP_02");
					break;
			
				case 6:
					num = joaat("COMPONENT_AT_AR_AFGRIP");
					break;
			
				case 7:
					num = joaat("COMPONENT_SPECIALCARBINE_VARMOD_LOWRIDER");
					break;
			}
			break;
	
		case joaat("WEAPON_KNUCKLE"):
			switch (iParam1)
			{
				case 0:
					num = joaat("COMPONENT_KNUCKLE_VARMOD_PIMP");
					break;
			
				case 1:
					num = joaat("COMPONENT_KNUCKLE_VARMOD_BALLAS");
					break;
			
				case 2:
					num = joaat("COMPONENT_KNUCKLE_VARMOD_DOLLAR");
					break;
			
				case 3:
					num = joaat("COMPONENT_KNUCKLE_VARMOD_DIAMOND");
					break;
			
				case 4:
					num = joaat("COMPONENT_KNUCKLE_VARMOD_HATE");
					break;
			
				case 5:
					num = joaat("COMPONENT_KNUCKLE_VARMOD_LOVE");
					break;
			
				case 6:
					num = joaat("COMPONENT_KNUCKLE_VARMOD_PLAYER");
					break;
			
				case 7:
					num = joaat("COMPONENT_KNUCKLE_VARMOD_KING");
					break;
			
				case 8:
					num = joaat("COMPONENT_KNUCKLE_VARMOD_VAGOS");
					break;
			}
			break;
	
		case joaat("WEAPON_MACHINEPISTOL"):
			switch (iParam1)
			{
				case 0:
					num = joaat("COMPONENT_MACHINEPISTOL_CLIP_01");
					break;
			
				case 1:
					num = joaat("COMPONENT_MACHINEPISTOL_CLIP_02");
					break;
			
				case 2:
					num = joaat("COMPONENT_MACHINEPISTOL_CLIP_03");
					break;
			
				case 3:
					num = joaat("COMPONENT_AT_PI_SUPP");
					break;
			}
			break;
	
		case joaat("WEAPON_SWITCHBLADE"):
			switch (iParam1)
			{
				case 0:
					num = joaat("COMPONENT_SWITCHBLADE_VARMOD_VAR1");
					break;
			
				case 1:
					num = joaat("COMPONENT_SWITCHBLADE_VARMOD_VAR2");
					break;
			}
			break;
	
		case joaat("WEAPON_REVOLVER"):
			switch (iParam1)
			{
				case 0:
					num = joaat("COMPONENT_REVOLVER_CLIP_01");
					break;
			
				case 1:
					num = joaat("COMPONENT_REVOLVER_VARMOD_BOSS");
					break;
			
				case 2:
					num = joaat("COMPONENT_REVOLVER_VARMOD_GOON");
					break;
			}
			break;
	
		case joaat("WEAPON_MINISMG"):
			switch (iParam1)
			{
				case 0:
					num = joaat("COMPONENT_MINISMG_CLIP_01");
					break;
			
				case 1:
					num = joaat("COMPONENT_MINISMG_CLIP_02");
					break;
			}
			break;
	
		case joaat("WEAPON_BAT"):
			switch (iParam1)
			{
				case 0:
					num = 716207715;
					break;
			
				case 1:
					num = 446271089;
					break;
			
				case 2:
					num = 1045616099;
					break;
			
				case 3:
					num = 1336277129;
					break;
			
				case 4:
					num = -513369076;
					break;
			
				case 5:
					num = -447700000;
					break;
			
				case 6:
					num = -149207179;
					break;
			
				case 7:
					num = 166784288;
					break;
			
				case 8:
					num = 2068729789;
					break;
			
				case 9:
					num = 1761389338;
					break;
			}
			break;
	
		default:
			if (iParam0 != 0)
			{
				num2 = func_97(iParam0, &unk);
			
				if (num2 != -1)
				{
					for (i = 0; i < unk_0x99844FCFECAC01A5(num2); i = i + 1)
					{
						if (unk_0xDDBECC1D7EC5DB2B(num2, i, &unk40))
						{
							if (!func_78(unk40.f_3))
							{
								if (num3 == iParam1)
									return unk40.f_3;
							
								num3 = num3 + 1;
							}
						}
					}
				}
			}
			break;
	}

	return num;
}

int func_101(int iParam0) // Position - 0x10502
{
	int num;

	num = 0;

	switch (iParam0)
	{
		case 0:
			num = joaat("SLOT_UNARMED");
			break;
	
		case 1:
			num = joaat("SLOT_KNIFE");
			break;
	
		case 2:
			num = joaat("SLOT_NIGHTSTICK");
			break;
	
		case 3:
			num = joaat("SLOT_HAMMER");
			break;
	
		case 4:
			num = joaat("SLOT_BAT");
			break;
	
		case 5:
			num = joaat("SLOT_CROWBAR");
			break;
	
		case 6:
			num = joaat("SLOT_GOLFCLUB");
			break;
	
		case 7:
			num = joaat("SLOT_STUNGUN");
			break;
	
		case 8:
			num = joaat("SLOT_PISTOL");
			break;
	
		case 9:
			num = joaat("SLOT_COMBATPISTOL");
			break;
	
		case 10:
			num = joaat("SLOT_APPISTOL");
			break;
	
		case 11:
			num = joaat("SLOT_MICROSMG");
			break;
	
		case 12:
			num = joaat("SLOT_SMG");
			break;
	
		case 13:
			num = joaat("SLOT_ASSAULTRIFLE");
			break;
	
		case 14:
			num = joaat("SLOT_CARBINERIFLE");
			break;
	
		case 15:
			num = joaat("SLOT_ADVANCEDRIFLE");
			break;
	
		case 16:
			num = joaat("SLOT_MG");
			break;
	
		case 17:
			num = joaat("SLOT_COMBATMG");
			break;
	
		case 18:
			num = joaat("SLOT_PUMPSHOTGUN");
			break;
	
		case 19:
			num = joaat("SLOT_SAWNOFFSHOTGUN");
			break;
	
		case 20:
			num = joaat("SLOT_ASSAULTSHOTGUN");
			break;
	
		case 21:
			num = joaat("SLOT_SNIPERRIFLE");
			break;
	
		case 22:
			num = joaat("SLOT_HEAVYSNIPER");
			break;
	
		case 23:
			num = joaat("SLOT_GRENADELAUNCHER");
			break;
	
		case 24:
			num = joaat("SLOT_RPG");
			break;
	
		case 25:
			num = joaat("SLOT_MINIGUN");
			break;
	
		case 26:
			num = joaat("SLOT_GRENADE");
			break;
	
		case 27:
			num = joaat("SLOT_STICKYBOMB");
			break;
	
		case 28:
			num = joaat("SLOT_SMOKEGRENADE");
			break;
	
		case 29:
			num = joaat("SLOT_MOLOTOV");
			break;
	
		case 30:
			num = joaat("SLOT_FIREEXTINGUISHER");
			break;
	
		case 31:
			num = joaat("SLOT_PETROLCAN");
			break;
	
		case 33:
			num = joaat("SLOT_PARACHUTE");
			break;
	
		case 34:
			num = joaat("SLOT_DIGISCANNER");
			break;
	
		case 35:
			num = joaat("SLOT_OBJECT");
			break;
	
		case 36:
			num = joaat("SLOT_ASSAULTSMG");
			break;
	
		case 37:
			num = joaat("SLOT_BULLPUPSHOTGUN");
			break;
	
		case 38:
			num = joaat("SLOT_PISTOL50");
			break;
	}

	return num;
}

float func_102(var uParam0) // Position - 0x10776
{
	if (func_105(uParam0))
		if (func_104(uParam0))
			return uParam0->f_2;
		else
			return func_103(IS_BIT_SET(*uParam0, 4)) - uParam0->f_1;

	return uParam0->f_1;
}

float func_103(BOOL bParam0) // Position - 0x107B2
{
	float num;
	float num2;
	int value;
	float num3;
	float num4;

	if (bParam0)
	{
		num = SYSTEM::TO_FLOAT(unk_0xA5E11AF0A2B928C1());
		num2 = num / 1000f;
		return num2;
	}

	if (unk_0xA26A9A07F761D8F8())
	{
		value = unk_0x0DB7F8294D73598B();
		num3 = SYSTEM::TO_FLOAT(value);
		num4 = num3 / 1000f;
		return num4;
	}

	return SYSTEM::TO_FLOAT(unk_0xA5E11AF0A2B928C1()) / 1000f;
}

BOOL func_104(var uParam0) // Position - 0x1080A
{
	return IS_BIT_SET(*uParam0, 2);
}

BOOL func_105(var uParam0) // Position - 0x10817
{
	return IS_BIT_SET(*uParam0, 1);
}

BOOL func_106() // Position - 0x10824
{
	if (Global_1574612)
		return true;

	if (func_108())
		return true;

	if (func_107())
		return true;

	return func_4(124, -1);
}

BOOL func_107() // Position - 0x10854
{
	return Global_1575048;
}

BOOL func_108() // Position - 0x10860
{
	return Global_1575050;
}

void func_109() // Position - 0x1086C
{
	int i;

	for (i = 1; i <= 49; i = i + 1)
	{
		if (!unk_0x73651E4B1D91FE32(i))
			if (unk_0xA89FB64B4B51F939(i))
				func_137(i, 1);
	}

	for (i = 51; i <= 59; i = i + 1)
	{
		if (!unk_0x73651E4B1D91FE32(i))
			if (unk_0xA89FB64B4B51F939(i))
				func_137(i, 1);
	}

	for (i = 70; i <= 77; i = i + 1)
	{
		if (!unk_0x73651E4B1D91FE32(i))
			if (unk_0xA89FB64B4B51F939(i))
				func_137(i, 1);
	}

	return;
}

BOOL func_110(int iParam0, int iParam1) // Position - 0x10900
{
	int num;
	int num2;

	if (iParam1 == -1)
		iParam1 = func_6();

	num = func_111(iParam1);
	num2 = unk_0x516080EA609481E1(num);
	return IS_BIT_SET(num2, iParam0);
}

int func_111(int iParam0) // Position - 0x10929
{
	int num;

	if (iParam0 == -1)
		iParam0 = func_6();

	switch (iParam0)
	{
		case 0:
			num = 914;
			break;
	
		case 1:
			num = 915;
			break;
	
		case 2:
			num = 916;
			break;
	
		case 3:
			num = 917;
			break;
	
		case 4:
			num = 918;
			break;
	}

	return num;
}

BOOL func_112() // Position - 0x1098C
{
	if (func_114() && func_113(0))
		return true;

	return false;
}

var func_113(int iParam0) // Position - 0x109AA
{
	return Global_1574538[iParam0];
}

var func_114() // Position - 0x109BA
{
	return func_113(func_6() + 1);
}

BOOL func_115(var uParam0) // Position - 0x109CC
{
	return uParam0->f_79 == 1;
}

void func_116(var uParam0) // Position - 0x109DA
{
	float num;

	num = Global_4542596;
	uParam0->f_80 = uParam0->f_80 + unk_0x290D4E218346D595();

	if (!func_115(uParam0))
		return;

	if (func_123(uParam0) < 0f)
	{
		func_122(uParam0, 0);
		return;
	}

	if (func_170(14))
		num = 10f;

	if (func_123(uParam0) < num)
		return;

	if (func_121(uParam0, 0))
		return;

	if (func_119(uParam0->[0]))
	{
		func_118(uParam0);
		func_117(uParam0);
		func_122(uParam0, 0);
	}

	return;
}

void func_117(var uParam0) // Position - 0x10A62
{
	int i;

	for (i = 0; i < *uParam0; i = i + 1)
	{
		if (func_121(uParam0, i))
			i = *uParam0 + 100;
	}

	return;
}

void func_118(var uParam0) // Position - 0x10A93
{
	int num;

	num = 1;

	if (func_121(uParam0, 0))
		return;

	while (num < *uParam0)
	{
		uParam0->[num - 1] = uParam0->[num];
		num = num + 1;
	}

	return;
}

BOOL func_119(int iParam0) // Position - 0x10ACA
{
	if (unk_0x73651E4B1D91FE32(iParam0))
		return false;

	if (func_170(14) && !func_120(iParam0))
		return false;

	if (!unk_0xD530287A65F961E4(iParam0))
		return false;

	if (unk_0x73651E4B1D91FE32(iParam0))
		return true;

	return false;
}

BOOL func_120(int iParam0) // Position - 0x10B14
{
	switch (iParam0)
	{
		case 60:
		case 61:
		case 62:
		case 63:
		case 64:
		case 65:
		case 66:
		case 67:
		case 68:
		case 69:
			return true;
	
		default:
		
	}

	return false;
}

BOOL func_121(var uParam0, int iParam1) // Position - 0x10B64
{
	return uParam0->[iParam1] == 78;
}

void func_122(var uParam0, int iParam1) // Position - 0x10B75
{
	if (iParam1 == 0f)
		uParam0->f_80 = 0f;
	else
		uParam0->f_80 = iParam1;

	return;
}

float func_123(var uParam0) // Position - 0x10B92
{
	return uParam0->f_80;
}

int func_124() // Position - 0x10B9E
{
	float num;

	if (unk_0xA26A9A07F761D8F8() || Global_78558)
		return 0;

	if (unk_0x48DC6A21D1CAD89C(unk_0x93E99A2DBCBA9CFA()))
	{
		if (unk_0x1B82EF141CC65934(unk_0x93E99A2DBCBA9CFA()))
		{
			num = unk_0x7DB14D48638F58B8();
		
			if (num > 0.01f && unk_0xCC17806DB0C41C19())
				func_143(14, SYSTEM::FLOOR(num * 100f));
		
			if (num >= 0.975f)
			{
				func_137(14, 1);
				return 1;
			}
		}
	}

	return 0;
}

BOOL func_125(int iParam0) // Position - 0x10C16
{
	if (iParam0 == 94 || iParam0 == -1)
		return false;

	return Global_113648.f_9087.f_330[iParam0 /*6*/];
}

void func_126(BOOL bParam0) // Position - 0x10C42
{
	if (Global_78558)
	{
		if (bParam0)
			func_8(bParam0);
	
		func_3(bParam0);
		func_13(bParam0);
		bParam0;
	}

	func_136(bParam0);
	func_129(bParam0);
	func_128();
	func_127();

	if (bParam0)
		func_105(&uLocal_59);

	return;
}

int func_127() // Position - 0x10C96
{
	int num;
	int num2;

	if (unk_0x73651E4B1D91FE32(50))
		return 0;

	num = 0;
	num2 = 0;
	num = num + (unk_0x4A06FF8590E8B30F(joaat("FIRST_PERSON_CAM_TIME")) * 24);
	num = num + unk_0x5D023954CF57F615(joaat("FIRST_PERSON_CAM_TIME"));
	num2 = num2 + (unk_0x4A06FF8590E8B30F(joaat("MP_FIRST_PERSON_CAM_TIME")) * 24);
	num2 = num2 + unk_0x5D023954CF57F615(joaat("MP_FIRST_PERSON_CAM_TIME"));

	if (num + num2 >= 15)
	{
		func_137(50, 1);
		return 1;
	}

	return 0;
}

int func_128() // Position - 0x10D04
{
	int num;

	if (unk_0x73651E4B1D91FE32(22))
		return 0;

	num = unk_0x647D5F55234F23EA();

	if (num > 0)
	{
		if (Global_32429 < num)
		{
			if (Global_32429 >= 0)
				func_143(22, num);
		
			Global_32429 = num;
		}
	}

	if (unk_0x647D5F55234F23EA() >= 50)
	{
		func_137(22, 1);
		return 1;
	}

	return 0;
}

int func_129(BOOL bParam0) // Position - 0x10D5B
{
	var unk;
	int num;
	int i;
	int num2;

	if (unk_0x73651E4B1D91FE32(17))
		return 0;

	unk = 6;
	unk[0] = func_135();
	unk[1] = func_134();
	unk[2] = func_133();
	unk[3] = func_132();
	unk[4] = func_131();
	unk[5] = func_130();
	num = 0;

	for (i = 0; i < 6; i = i + 1)
	{
		if (unk[i])
			num = num + 1;
	}

	unk_0xDD7756E2742E0F6D(joaat("NUM_DISCIPLINE_GOLD_EARNED"), &num2, -1);

	if (num > num2 && num > 0)
	{
		unk_0x3CC35ACFFC9C730E(joaat("NUM_DISCIPLINE_GOLD_EARNED"), num, 1);
		func_143(17, num);
	}

	bParam0;

	if (!unk[0])
	{
		bParam0;
		return 0;
	}

	if (!unk[1])
	{
		bParam0;
		return 0;
	}

	if (!unk[2])
	{
		bParam0;
		return 0;
	}

	if (!unk[3])
	{
		bParam0;
		return 0;
	}

	if (!unk[4])
	{
		bParam0;
		return 0;
	}

	if (!unk[5])
	{
		bParam0;
		return 0;
	}

	func_137(17, 1);
	return 1;
}

int func_130() // Position - 0x10E7D
{
	int i;

	i = 0;

	for (i = 0; i < 12; i = i + 1)
	{
		if (Global_113648.f_1990[0 /*121*/][i /*10*/].f_8 == 3)
			return 1;
		else if (Global_113648.f_1990[1 /*121*/][i /*10*/].f_8 == 3)
			return 1;
		else if (Global_113648.f_1990[2 /*121*/][i /*10*/].f_8 == 3)
			return 1;
	}

	return 0;
}

int func_131() // Position - 0x10EEA
{
	int i;

	i = 0;

	for (i = 0; i < 22; i = i + 1)
	{
		if (Global_113648.f_19149[0 /*271*/].f_3[i /*12*/].f_3 == 3)
			return 1;
		else if (Global_113648.f_19149[1 /*271*/].f_3[i /*12*/].f_3 == 3)
			return 1;
		else if (Global_113648.f_19149[2 /*271*/].f_3[i /*12*/].f_3 == 3)
			return 1;
	}

	return 0;
}

int func_132() // Position - 0x10F60
{
	int i;

	i = 0;

	for (i = 0; i < 4; i = i + 1)
	{
		if (IS_BIT_SET(Global_113648.f_24978.f_1, i))
			return 1;
	}

	return 0;
}

int func_133() // Position - 0x10F91
{
	int i;

	i = 0;

	for (i = 0; i < 5; i = i + 1)
	{
		if (IS_BIT_SET(Global_113648.f_24981.f_2, i))
			return 1;
	}

	return 0;
}

int func_134() // Position - 0x10FC2
{
	int i;

	i = 0;

	for (i = 0; i < 7; i = i + 1)
	{
		if (Global_113648.f_19018.f_19[i] == 1)
			return 1;
	}

	return 0;
}

int func_135() // Position - 0x10FF5
{
	int i;

	i = 0;

	for (i = 0; i < 3; i = i + 1)
	{
		if (Global_113648.f_20013[i] == 1)
			return 1;
	}

	return 0;
}

int func_136(BOOL bParam0) // Position - 0x11026
{
	var unk;
	int num;
	int num2;

	num = 0;

	if (unk_0x73651E4B1D91FE32(27))
		return 0;

	if (unk_0xDD7756E2742E0F6D(joaat("SP0_MONEY_TOTAL_SPENT"), &unk, -1))
		num = num + unk;

	if (unk_0xDD7756E2742E0F6D(joaat("SP1_MONEY_TOTAL_SPENT"), &unk, -1))
		num = num + unk;

	if (unk_0xDD7756E2742E0F6D(joaat("SP2_MONEY_TOTAL_SPENT"), &unk, -1))
		num = num + unk;

	bParam0;
	num2 = 0;
	unk_0xDD7756E2742E0F6D(joaat("NUM_CASH_SPENT"), &num2, -1);

	if (num > 0 && num2 / 2000000 != num / 2000000)
	{
		unk_0x3CC35ACFFC9C730E(joaat("NUM_CASH_SPENT"), num, 1);
		func_143(27, num);
	}

	if (num < 200000000)
		return 0;

	func_137(27, 1);
	return 1;
}

int func_137(int iParam0, int iParam1) // Position - 0x110DD
{
	if (iParam0 >= 78)
		return 0;

	return func_138(iParam0, iParam1);
}

int func_138(int iParam0, int iParam1) // Position - 0x110F8
{
	if (func_170(14) && !func_120(iParam0))
		return 0;

	if (unk_0x73651E4B1D91FE32(iParam0) && iParam1 == 1)
		return 0;

	if (Global_32414 != 0 && !Global_78558)
		return 0;

	if (func_115(&Global_4542597))
	{
		if (func_141(&Global_4542597, iParam0))
			return 0;
	
		if (func_139(&Global_4542597, iParam0))
			return 1;
	}
	else
	{
		if (!unk_0xD530287A65F961E4(iParam0))
			return 0;
	
		if (unk_0x73651E4B1D91FE32(iParam0))
			return 1;
	
		return 0;
	}

	return 0;
}

BOOL func_139(var uParam0, int iParam1) // Position - 0x11195
{
	int i;
	var unk;

	unk = 78;

	if (unk_0x73651E4B1D91FE32(iParam1))
		return false;

	if (func_170(14) && !func_120(iParam1))
		return false;

	if (func_141(uParam0, iParam1))
		return false;

	if (func_123(uParam0) < 0f)
		func_122(uParam0, 0);

	func_176(&unk);
	i = 0;

	for (i = 0; i < *uParam0 - 1; i = i + 1)
	{
		unk[i + 1] = uParam0->[i];
	}

	func_140(&unk, iParam1);
	i = 0;

	for (i = 0; i < *uParam0; i = i + 1)
	{
		uParam0->[i] = unk[i];
	}

	return true;
}

int func_140(var uParam0, int iParam1) // Position - 0x11246
{
	int i;

	if (unk_0x73651E4B1D91FE32(iParam1))
		return 0;

	if (func_170(14) && !func_120(iParam1))
		return 0;

	if (func_141(uParam0, iParam1))
		return 0;

	if (func_123(uParam0) < 0f)
		func_122(uParam0, 0);

	for (i = 0; i < *uParam0; i = i + 1)
	{
		if (func_121(uParam0, i))
		{
			uParam0->[i] = iParam1;
			return 1;
		}
	}

	return 0;
}

BOOL func_141(var uParam0, int iParam1) // Position - 0x112C1
{
	return func_142(uParam0, iParam1) != -1;
}

int func_142(var uParam0, int iParam1) // Position - 0x112D3
{
	int i;

	for (i = 0; i < *uParam0; i = i + 1)
	{
		if (uParam0->[i] == iParam1)
			return i;
	}

	return -1;
}

int func_143(int iParam0, int iParam1) // Position - 0x11300
{
	int num;

	if (iParam0 < 0)
		return 0;

	if (iParam0 > 78)
		return 0;

	if (iParam1 <= 0 || iParam1 > 100)
		return 0;

	num = unk_0xED220A261CE0D89C(iParam0);

	if (iParam1 > num)
		return unk_0x0B3E167D2C1443C7(iParam0, iParam1);

	return 0;
}

int func_144(BOOL bParam0) // Position - 0x11351
{
	int num;

	num = func_157(bParam0) + func_145(bParam0);
	bParam0;
	return num;
}

int func_145(BOOL bParam0) // Position - 0x1136F
{
	int i;
	int num;
	int num2;
	int num3;
	int num4;
	int j;
	float num5;
	int num6;

	num3 = 0;
	num4 = 0;
	bParam0;

	for (i = 0; i < Global_113648.f_18576; i = i + 1)
	{
		if (Global_113648.f_18576[i /*6*/].f_3 != -1 && func_155(i, 7))
		{
			num3 = 0;
			num4 = 0;
		
			for (j = 0; j < func_153(i, 7); j = j + 1)
			{
				num6 = func_151(i, 7, j);
			
				if (!Global_63587[num6 /*13*/].f_7)
				{
					if (func_148(num6) == 1)
						num4 = num4 + 1;
				
					num3 = num3 + 1;
				}
			}
		
			num5 = func_147(num4, num3, false);
			num2 = func_146(num5);
		
			if (i >= 52 && i <= 56)
			{
				bParam0;
				num2 = Global_113648.f_2354[i - 52 /*2*/];
				num5 = 0f;
			}
		
			if (num5 >= 100f || num2 == 3)
				num = num + 1;
		}
	}

	bParam0;
	return num;
}

int func_146(float fParam0) // Position - 0x11463
{
	if (fParam0 == 0f)
		return 0;

	if (fParam0 == 100f)
		return 3;
	else if (fParam0 > 50f)
		return 2;

	return 1;
}

float func_147(int iParam0, int iParam1, BOOL bParam2) // Position - 0x11498
{
	float num;
	float value;

	if (bParam2)
		return 0f;

	if (iParam0 == iParam1)
		return 100f;

	num = SYSTEM::TO_FLOAT(iParam0) / SYSTEM::TO_FLOAT(iParam1);
	value = (50f * num) + 50f;
	value = SYSTEM::TO_FLOAT(SYSTEM::CEIL(value));

	if (value > 100f)
		value = 100f;

	return value;
}

int func_148(int iParam0) // Position - 0x114F7
{
	if (func_149(iParam0, func_150(Global_63587[iParam0 /*13*/].f_4)))
		return 1;

	return 0;
}

BOOL func_149(int iParam0, int iParam1) // Position - 0x1151A
{
	if (iParam1 < 0)
		return false;

	switch (Global_63587[iParam0 /*13*/])
	{
		case 1:
		case 2:
		case 4:
		case 5:
		case 17:
			if (iParam1 < 1)
				return false;
			break;
	}

	if (iParam1 == 2147483647)
		return false;

	if (iParam0 == 881 || iParam0 == 889 || iParam0 == 897 && Global_113648.f_24906[4 /*4*/] == _GET_CURRENT_PLAYER_CHARACTER())
		Global_63587[iParam0 /*13*/].f_2 = 0;

	if (Global_63587[iParam0 /*13*/].f_3)
		if (iParam1 < Global_63587[iParam0 /*13*/].f_2)
			return true;
	else if (iParam1 >= Global_63587[iParam0 /*13*/].f_2)
		return true;

	return false;
}

int func_150(int iParam0) // Position - 0x115E4
{
	int num;

	if (iParam0 == 0)
		return -1;

	if (unk_0xDD7756E2742E0F6D(iParam0, &num, -1))
		return num - 1;

	return -1;
}

int func_151(int iParam0, int iParam1, int iParam2) // Position - 0x1160D
{
	switch (iParam1)
	{
		case 1:
			return Global_91469[iParam0 /*34*/].f_17[iParam2];
	
		case 7:
			return func_152(iParam0, iParam2);
	
		default:
			break;
	}

	return 914;
}

int func_152(int iParam0, int iParam1) // Position - 0x11650
{
	switch (iParam0)
	{
		case 2:
			switch (iParam1)
			{
				case 0:
					return 741;
			
				case 1:
					return 742;
			
				default:
				
			}
		
			return -1;
	
		case 3:
			switch (iParam1)
			{
				case 0:
					return 743;
			
				case 1:
					return 744;
			
				default:
				
			}
		
			return -1;
	
		case 5:
			switch (iParam1)
			{
				case 0:
					return 745;
			
				case 1:
					return 746;
			
				default:
				
			}
		
			return -1;
	
		case 6:
			switch (iParam1)
			{
				case 0:
					return 747;
			
				case 1:
					return 748;
			
				default:
				
			}
		
			return -1;
	
		case 8:
			switch (iParam1)
			{
				case 0:
					return 749;
			
				default:
				
			}
		
			return -1;
	
		case 12:
			switch (iParam1)
			{
				case 0:
					return 750;
			
				default:
				
			}
		
			return -1;
	
		case 14:
			switch (iParam1)
			{
				case 0:
					return 751;
			
				case 1:
					return 752;
			
				default:
				
			}
		
			return -1;
	
		case 16:
			switch (iParam1)
			{
				case 0:
					return 753;
			
				case 1:
					return 754;
			
				default:
				
			}
		
			return -1;
	
		case 17:
			switch (iParam1)
			{
				case 0:
					return 755;
			
				case 1:
					return 756;
			
				case 2:
					return 757;
			
				default:
				
			}
		
			return -1;
	
		case 18:
			switch (iParam1)
			{
				case 0:
					return 758;
			
				case 1:
					return 759;
			
				default:
				
			}
		
			return -1;
	
		case 19:
			switch (iParam1)
			{
				case 0:
					return 760;
			
				case 1:
					return 761;
			
				default:
				
			}
		
			return -1;
	
		case 20:
			switch (iParam1)
			{
				case 0:
					return 762;
			
				default:
				
			}
		
			return -1;
	
		case 21:
			switch (iParam1)
			{
				case 0:
					return 763;
			
				default:
				
			}
		
			return -1;
	
		case 22:
			switch (iParam1)
			{
				case 0:
					return 764;
			
				case 1:
					return 765;
			
				default:
				
			}
		
			return -1;
	
		case 23:
			switch (iParam1)
			{
				case 0:
					return 766;
			
				default:
				
			}
		
			return -1;
	
		case 25:
			switch (iParam1)
			{
				case 0:
					return 767;
			
				case 1:
					return 768;
			
				case 2:
					return 769;
			
				default:
				
			}
		
			return -1;
	
		case 26:
			switch (iParam1)
			{
				case 0:
					return 770;
			
				case 1:
					return 771;
			
				default:
				
			}
		
			return -1;
	
		case 28:
			switch (iParam1)
			{
				case 0:
					return 772;
			
				case 1:
					return 773;
			
				default:
				
			}
		
			return -1;
	
		case 29:
			switch (iParam1)
			{
				case 0:
					return 774;
			
				case 1:
					return 775;
			
				default:
				
			}
		
			return -1;
	
		case 30:
			switch (iParam1)
			{
				case 0:
					return 776;
			
				case 1:
					return 777;
			
				default:
				
			}
		
			return -1;
	
		case 32:
			switch (iParam1)
			{
				case 0:
					return 778;
			
				case 1:
					return 779;
			
				default:
				
			}
		
			return -1;
	
		default:
		
	}

	switch (iParam0)
	{
		case 33:
			switch (iParam1)
			{
				case 0:
					return 780;
			
				case 1:
					return 781;
			
				case 2:
					return 782;
			
				default:
				
			}
		
			return -1;
	
		case 34:
			switch (iParam1)
			{
				case 0:
					return 783;
			
				case 1:
					return 784;
			
				default:
				
			}
		
			return -1;
	
		case 38:
			switch (iParam1)
			{
				case 0:
					return 785;
			
				case 1:
					return 786;
			
				default:
				
			}
		
			return -1;
	
		case 39:
			switch (iParam1)
			{
				case 0:
					return 787;
			
				case 1:
					return 788;
			
				default:
				
			}
		
			return -1;
	
		case 40:
			switch (iParam1)
			{
				case 0:
					return 789;
			
				default:
				
			}
		
			return -1;
	
		case 41:
			switch (iParam1)
			{
				case 0:
					return 790;
			
				case 1:
					return 791;
			
				case 2:
					return 792;
			
				default:
				
			}
		
			return -1;
	
		case 42:
			switch (iParam1)
			{
				case 0:
					return 793;
			
				case 1:
					return 794;
			
				case 2:
					return 795;
			
				default:
				
			}
		
			return -1;
	
		case 43:
			switch (iParam1)
			{
				case 0:
					return 796;
			
				case 1:
					return 797;
			
				default:
				
			}
		
			return -1;
	
		case 46:
			switch (iParam1)
			{
				case 0:
					return 798;
			
				case 1:
					return 799;
			
				default:
				
			}
		
			return -1;
	
		case 47:
			switch (iParam1)
			{
				case 0:
					return 800;
			
				case 1:
					return 801;
			
				default:
				
			}
		
			return -1;
	
		case 49:
			switch (iParam1)
			{
				case 0:
					return 802;
			
				case 1:
					return 803;
			
				default:
				
			}
		
			return -1;
	
		case 50:
			switch (iParam1)
			{
				case 0:
					return 804;
			
				case 1:
					return 805;
			
				default:
				
			}
		
			return -1;
	
		case 51:
			switch (iParam1)
			{
				case 0:
					return 806;
			
				default:
				
			}
		
			return -1;
	
		case 57:
			switch (iParam1)
			{
				case 0:
					return 807;
			
				case 1:
					return 808;
			
				case 2:
					return 809;
			
				default:
				
			}
		
			return -1;
	
		case 58:
			switch (iParam1)
			{
				case 0:
					return 828;
			
				case 1:
					return 829;
			
				case 2:
					return 830;
			
				default:
				
			}
		
			return -1;
	
		case 59:
			switch (iParam1)
			{
				case 0:
					return 831;
			
				case 1:
					return 832;
			
				case 2:
					return 833;
			
				default:
				
			}
		
			return -1;
	
		case 60:
			switch (iParam1)
			{
				case 0:
					return 834;
			
				case 1:
					return 835;
			
				case 2:
					return 836;
			
				default:
				
			}
		
			return -1;
	
		case 61:
			switch (iParam1)
			{
				case 0:
					return 837;
			
				case 1:
					return 838;
			
				case 2:
					return 839;
			
				default:
				
			}
		
			return -1;
	
		case 62:
			switch (iParam1)
			{
				case 0:
					return 840;
			
				case 1:
					return 841;
			
				case 2:
					return 842;
			
				default:
				
			}
		
			return -1;
	
		case 24:
			switch (iParam1)
			{
				case 0:
					return 843;
			
				case 1:
					return 844;
			
				case 2:
					return 845;
			
				default:
				
			}
		
			return -1;
	
		default:
		
	}

	return -1;
}

int func_153(int iParam0, int iParam1) // Position - 0x11D34
{
	switch (iParam1)
	{
		case 1:
			return Global_91469[iParam0 /*34*/].f_16;
	
		case 7:
			return func_154(iParam0);
	
		default:
			break;
	}

	return 0;
}

int func_154(int iParam0) // Position - 0x11D6F
{
	switch (iParam0)
	{
		case 2:
			return 2;
	
		case 3:
			return 2;
	
		case 5:
			return 2;
	
		case 6:
			return 2;
	
		case 8:
			return 1;
	
		case 12:
			return 1;
	
		case 14:
			return 2;
	
		case 16:
			return 2;
	
		case 17:
			return 3;
	
		case 18:
			return 2;
	
		case 19:
			return 2;
	
		case 20:
			return 1;
	
		case 21:
			return 1;
	
		case 22:
			return 2;
	
		case 23:
			return 1;
	
		case 25:
			return 3;
	
		case 26:
			return 2;
	
		case 28:
			return 2;
	
		case 29:
			return 2;
	
		case 30:
			return 2;
	
		case 32:
			return 2;
	
		default:
		
	}

	switch (iParam0)
	{
		case 33:
			return 3;
	
		case 34:
			return 2;
	
		case 38:
			return 2;
	
		case 39:
			return 2;
	
		case 40:
			return 1;
	
		case 41:
			return 3;
	
		case 42:
			return 3;
	
		case 43:
			return 2;
	
		case 46:
			return 2;
	
		case 47:
			return 2;
	
		case 49:
			return 2;
	
		case 50:
			return 2;
	
		case 51:
			return 1;
	
		case 57:
			return 3;
	
		case 58:
			return 3;
	
		case 59:
			return 3;
	
		case 60:
			return 3;
	
		case 61:
			return 3;
	
		case 62:
			return 3;
	
		case 24:
			return 3;
	
		default:
		
	}

	return 0;
}

BOOL func_155(int iParam0, int iParam1) // Position - 0x11F20
{
	switch (iParam1)
	{
		case 1:
			return !IS_BIT_SET(Global_91469[iParam0 /*34*/].f_15, 5);
	
		case 7:
			return func_156(iParam0);
	
		default:
			break;
	}

	return false;
}

BOOL func_156(int iParam0) // Position - 0x11F5E
{
	switch (iParam0)
	{
		case 0:
			return 0;
	
		case 1:
			return 0;
	
		case 2:
			return 1;
	
		case 3:
			return 1;
	
		case 4:
			return 0;
	
		case 5:
			return 1;
	
		case 6:
			return 1;
	
		case 7:
			return 0;
	
		case 8:
			return 1;
	
		case 9:
			return 0;
	
		case 10:
			return 0;
	
		case 11:
			return 0;
	
		case 12:
			return 1;
	
		case 13:
			return 0;
	
		case 14:
			return 1;
	
		case 15:
			return 0;
	
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
			return 1;
	
		case 23:
			return 1;
	
		case 24:
			return 1;
	
		case 25:
			return 1;
	
		case 26:
			return 1;
	
		case 27:
			return 0;
	
		case 28:
			return 1;
	
		case 29:
			return 1;
	
		case 30:
			return 1;
	
		case 31:
			return 0;
	
		case 32:
			return 1;
	
		case 33:
			return 1;
	
		case 34:
			return 1;
	
		case 35:
			return 0;
	
		case 36:
			return 0;
	
		case 37:
			return 0;
	
		case 38:
			return 1;
	
		case 39:
			return 1;
	
		case 40:
			return 1;
	
		case 41:
			return 1;
	
		case 42:
			return 1;
	
		case 43:
			return 1;
	
		case 44:
			return 0;
	
		case 45:
			return 0;
	
		case 46:
			return 1;
	
		case 47:
			return 1;
	
		case 48:
			return 0;
	
		case 49:
			return 1;
	
		case 50:
			return 1;
	
		case 51:
			return 1;
	
		case 52:
			return 1;
	
		case 54:
			return 1;
	
		case 55:
			return 1;
	
		case 56:
			return 1;
	
		case 53:
			return 1;
	
		case 57:
			return 1;
	
		case 58:
			return 1;
	
		case 59:
			return 1;
	
		case 60:
			return 1;
	
		case 61:
			return 1;
	
		case 62:
			return 1;
	
		default:
			break;
	}

	return 0;
}

int func_157(BOOL bParam0) // Position - 0x122A4
{
	int i;
	int num;
	int num2;
	int num3;
	int num4;
	int j;
	float num5;
	int num6;
	int num7;

	num3 = 0;
	num4 = 0;
	bParam0;

	for (i = 0; i < Global_113648.f_9087.f_330; i = i + 1)
	{
		if (Global_113648.f_9087.f_330[i /*6*/].f_3 != -1 && func_155(i, 1))
		{
			num3 = 0;
			num4 = 0;
			num7 = -1;
		
			for (j = 0; j < func_153(i, 1); j = j + 1)
			{
				num6 = func_151(i, 1, j);
			
				if (!Global_63587[num6 /*13*/].f_7)
				{
					if (func_148(num6) == 1)
						num4 = num4 + 1;
				
					switch (num6)
					{
						case 42:
						case 55:
						case 85:
						case 70:
						case 101:
							num7 = func_158(num6);
						
							if (num7 >= 2147483647)
								num7 = 1;
							break;
					}
				
					num3 = num3 + 1;
				}
			}
		
			num5 = func_147(num4, num3, false);
			num2 = func_146(num5);
		
			if (num7 > -1)
				num2 = num7;
		
			if (num5 >= 100f || num2 == 3)
				num = num + 1;
		}
	}

	bParam0;
	return num;
}

int func_158(int iParam0) // Position - 0x123BE
{
	int num;

	num = func_150(Global_63587[iParam0 /*13*/].f_4);

	if (num > -2)
		return num;

	return 0;
}

void func_159() // Position - 0x123E3
{
	var unk;
	var unk2;

	unk_0x055111B11E6624FD(unk_0xC1A5EC5C986B98AD(), 0);

	if (!unk_0x1589BC95A4C50F21(unk_0xC1A5EC5C986B98AD()))
		return;

	if (unk_0x7BB3D8F4F6310EB8(unk_0xC1A5EC5C986B98AD(), "creatures@shark@move", "attack_player", 3))
	{
		func_137(25, 1);
		return;
	}

	if (unk_0x055111B11E6624FD(unk_0xC1A5EC5C986B98AD(), 0))
	{
		unk = unk_0xECEBAC41E869D431(unk_0xC1A5EC5C986B98AD());
	
		if (unk_0x71904BD37B848CAF(unk))
		{
			unk2 = unk_0x9C8D7679C15E75FF(unk);
		
			if (func_160(unk2))
			{
				if (unk_0x504B9BB48D41C264(unk2) == joaat("A_C_SharkTiger"))
				{
					func_137(25, 1);
					return;
				}
			}
		}
	}

	return;
}

BOOL func_160(var uParam0) // Position - 0x1246C
{
	if (!unk_0x7DE17ACDD8BA2642(uParam0))
		return false;

	return !unk_0x055111B11E6624FD(uParam0, 0);
}

void func_161() // Position - 0x1248A
{
	switch (iLocal_56)
	{
		case 0:
			fLocal_64 = 0f;
		
			if (!unk_0x7DE17ACDD8BA2642(unk_0xC1A5EC5C986B98AD()))
				return;
		
			if (unk_0x055111B11E6624FD(unk_0xC1A5EC5C986B98AD(), 0))
				return;
		
			if (unk_0x83C5A442AAD15BAF(unk_0x93E99A2DBCBA9CFA()) >= 3 && unk_0x5ABCFD3441B37CA6() == 0)
			{
				if (func_166() == 2)
				{
					func_173(&uLocal_59);
					iLocal_56 = iLocal_56 + 1;
				}
			}
			break;
	
		case 1:
			if (func_165() || unk_0xB53553DC4AAC7D8A())
				return;
		
			if (unk_0x83C5A442AAD15BAF(unk_0x93E99A2DBCBA9CFA()) < 3)
			{
				func_164(&uLocal_59);
				iLocal_56 = 0;
				return;
			}
		
			if (unk_0x5ABCFD3441B37CA6() == 1)
			{
				func_164(&uLocal_59);
				iLocal_56 = 0;
				return;
			}
		
			if (func_166() < 2)
			{
				func_164(&uLocal_59);
				iLocal_56 = 0;
				return;
			}
		
			if (unk_0x055111B11E6624FD(unk_0xC1A5EC5C986B98AD(), 0))
			{
				func_164(&uLocal_59);
				iLocal_56 = 0;
				return;
			}
		
			fLocal_64 = func_163(&uLocal_59);
		
			if (fLocal_64 >= 180f)
			{
				func_137(24, 1);
				func_162(&uLocal_59);
				iLocal_56 = iLocal_56 + 1;
			}
			break;
	
		case 2:
			iLocal_56 = iLocal_56 + 1;
			break;
	}

	return;
}

void func_162(var uParam0) // Position - 0x1259A
{
	if (func_105(uParam0))
	{
		if (!func_104(uParam0))
		{
			uParam0->f_2 = func_103(IS_BIT_SET(*uParam0, 4)) - uParam0->f_1;
			unk_0xECDAB41968FF21A8(uParam0, 2);
		}
	}

	return;
}

float func_163(var uParam0) // Position - 0x125D1
{
	if (func_105(uParam0))
		if (func_104(uParam0))
			return uParam0->f_2;
		else
			return func_103(IS_BIT_SET(*uParam0, 4)) - uParam0->f_1;

	return 0f;
}

void func_164(var uParam0) // Position - 0x1260A
{
	uParam0->f_1 = 0f;
	uParam0->f_2 = 0f;
	*uParam0 = 0;
	return;
}

BOOL func_165() // Position - 0x12620
{
	if (!unk_0xA26A9A07F761D8F8())
		return Global_98159.f_44 == 1;

	return false;
}

int func_166() // Position - 0x1263C
{
	int num;
	int num2;

	num = 0;
	num2 = func_168(CHAR_TREVOR);

	if (func_167(num2, 0) || IS_BIT_SET(Global_96532, 2))
		num = num + 1;

	num2 = func_168(CHAR_FRANKLIN);

	if (func_167(num2, 0) || IS_BIT_SET(Global_96532, 1))
		num = num + 1;

	num2 = func_168(CHAR_MICHAEL);

	if (func_167(num2, 0) || IS_BIT_SET(Global_96532, 0))
		num = num + 1;

	return num;
}

BOOL func_167(int iParam0, int iParam1) // Position - 0x126B2
{
	return false;
}

int func_168(eCharacter echParam0) // Position - 0x1270B
{
	if (echParam0 > CHAR_MULTIPLAYER)
		return 0;

	if (echParam0 == _GET_CURRENT_PLAYER_CHARACTER())
		return unk_0xC1A5EC5C986B98AD();

	return Global_98159[func_169(echParam0)];
}

int func_169(eCharacter echParam0) // Position - 0x1273C
{
	if (echParam0 == CHAR_MICHAEL)
		return 0;
	else if (echParam0 == CHAR_TREVOR)
		return 2;
	else if (echParam0 == CHAR_FRANKLIN)
		return 1;
	else if (echParam0 == _CHAR_NULL)
		return 3;

	return 4;
}

BOOL func_170(int iParam0) // Position - 0x12777
{
	return Global_43257 == iParam0;
}

void _DISPLAY_HELP_TEXT(char* text, int iParam1) // Position - 0x12785
{
	unk_0x476CC3711883B966(text);
	unk_0xBC8969B539DCA239(0, 0, 1, iParam1);
	return;
}

BOOL func_172() // Position - 0x1279C
{
	return unk_0x01689609224A6C92() || unk_0xEE17703CF2C2875A();
}

void func_173(var uParam0) // Position - 0x127B2
{
	func_174(uParam0, 0f);
	return;
}

void func_174(var uParam0, float fParam1) // Position - 0x127C1
{
	uParam0->f_1 = func_103(IS_BIT_SET(*uParam0, 4)) - fParam1;
	unk_0xECDAB41968FF21A8(uParam0, 1);
	unk_0x061B1200C95204CB(uParam0, 2);
	uParam0->f_2 = 0f;
	return;
}

void func_175(var uParam0, int iParam1) // Position - 0x127EC
{
	uParam0->f_79 = iParam1;

	if (uParam0->f_79)
		func_122(uParam0, 0);

	return;
}

void func_176(var uParam0) // Position - 0x12808
{
	int i;

	for (i = 0; i < *uParam0; i = i + 1)
	{
		func_177(uParam0, i);
	}

	func_122(uParam0, Global_4542596 - 0.5f);
	return;
}

void func_177(var uParam0, int iParam1) // Position - 0x1283C
{
	uParam0->[iParam1] = 78;
	return;
}

void func_178() // Position - 0x1284C
{
	int i;
	int num;

	num = 78;

	for (i = 1; i <= num - 1; i = i + 1)
	{
		unk_0x73651E4B1D91FE32(i);
	}

	return;
}

void func_179(int iParam0) // Position - 0x12876
{
	iParam0 > 0;
	return;
}

