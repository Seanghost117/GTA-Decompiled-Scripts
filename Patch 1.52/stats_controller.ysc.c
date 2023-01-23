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
	char* sLocal_18 = NULL;
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
	var uLocal_30 = 0;
	float fLocal_31 = 0f;
	float fLocal_32 = 0f;
	float fLocal_33 = 0f;
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
	int iLocal_53 = 0;
	int iLocal_54 = 0;
	int iLocal_55 = 0;
	int iLocal_56 = 0;
	int iLocal_57 = 0;
	int iLocal_58 = 0;
	bool bLocal_59 = 0;
	int iLocal_60 = 0;
	int iLocal_61 = 0;
	int iLocal_62 = 0;
	int iLocal_63 = 0;
	int iLocal_64 = 0;
	int iLocal_65 = 0;
	int iLocal_66 = 0;
	int iLocal_67 = 0;
	int iLocal_68 = 0;
	int iLocal_69 = 0;
	int iLocal_70 = 0;
	int iLocal_71 = 0;
	int iLocal_72 = 0;
	int iLocal_73 = 0;
	int iLocal_74 = 0;
	int iLocal_75 = 0;
	int iLocal_76 = 0;
	int iLocal_77 = 0;
	int iLocal_78 = 0;
	int iLocal_79 = 0;
	int iLocal_80 = 0;
	int iLocal_81 = 0;
	int iLocal_82 = 0;
	int iLocal_83 = 0;
	int iLocal_84 = 0;
#endregion

void __EntryFunction__()
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
	iLocal_21 = 3;
	fLocal_22 = 0f;
	fLocal_26 = -0.0375f;
	fLocal_27 = 0.17f;
	fLocal_31 = 80f;
	fLocal_32 = 140f;
	fLocal_33 = 180f;
	iLocal_40 = 1;
	iLocal_41 = 65;
	iLocal_42 = 49;
	iLocal_43 = 64;
	iLocal_53 = 2;
	unk_0xDB4E5F36ED3505EE();
	if (unk_0xED06FD5709A59F02(32))
	{
		unk_0xD39E529EBE5DB04F();
	}
	while (true)
	{
		func_104();
		switch (iLocal_54)
		{
			case 0:
				func_99();
				break;
			
			case 1:
				func_90();
				func_2();
				Global_96239 = 0;
				break;
			
			case 2:
				func_1();
				break;
		}
		wait(0);
	}
}

void func_1()
{
	iLocal_54 = 0;
}

void func_2()
{
	int iVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	int iVar12;
	bool bVar13;
	int iVar14;
	int iVar15;
	bool bVar16;
	
	if (iLocal_60)
	{
		iLocal_60 = 0;
	}
	else
	{
		iLocal_55++;
	}
	bLocal_59 = false;
	if (unk_0x25DDB354A40FFCDB())
	{
		iVar0 = 3;
	}
	else
	{
		iVar0 = func_85();
	}
	if (iVar0 != iLocal_58)
	{
		iLocal_58 = iVar0;
		bLocal_59 = true;
		iLocal_66 = 0;
		iLocal_67 = 0;
		iLocal_74 = 0;
		iLocal_80 = 0;
	}
	if (iLocal_58 == 145)
	{
		return;
	}
	bVar1 = false;
	if ((iLocal_55 == 6 && func_84(64)) || (iLocal_55 == 5 && unk_0x7B70881748D166CD(joaat("pilot_school")) > 0))
	{
		bVar1 = true;
		iLocal_60 = 1;
	}
	func_78();
	if (Global_96237 || (Global_96238 && !func_75(0)))
	{
		if (!unk_0x5AEB5DDFFAD43CA5(unk_0x9B0761B4C3EB8BC7()))
		{
			iVar2 = 0;
			while (iVar2 < 8)
			{
				func_74(iLocal_58, iVar2);
				iVar2++;
			}
			Global_96237 = 0;
		}
	}
	if (!bVar1)
	{
		if (((((((((unk_0x5AEB5DDFFAD43CA5(unk_0x9B0761B4C3EB8BC7()) || (!unk_0x25DDB354A40FFCDB() && !func_73(iLocal_58))) || unk_0x9CC4D06F5338CA6B()) || func_72()) || unk_0x3EBB66F936A3436E()) || unk_0x03DB5C6AABF8DA46()) || !unk_0x4DC4117F94CD5B84(unk_0x460153A63B9477BC())) || Global_76831) || Global_96239) || iLocal_61)
		{
			iLocal_82 = 1;
			iLocal_83 = unk_0x578C4EF320340AF7();
			if (unk_0x25DDB354A40FFCDB())
			{
				iLocal_84 = unk_0x6CAAB7E78B5D978A();
			}
			return;
		}
		if (iLocal_82)
		{
			if ((!unk_0x25DDB354A40FFCDB() && (unk_0x578C4EF320340AF7() - iLocal_83) > 3000) || (unk_0x25DDB354A40FFCDB() && unk_0x8B4402A4BB3C8EFC(unk_0x6CAAB7E78B5D978A(), unk_0x8C358101651A3F7C(iLocal_84, 3000))))
			{
				iLocal_82 = 0;
			}
			else
			{
				return;
			}
		}
	}
	if (((!unk_0x25DDB354A40FFCDB() && (unk_0x578C4EF320340AF7() - iLocal_56) > 2000) || (unk_0x25DDB354A40FFCDB() && unk_0x8B4402A4BB3C8EFC(unk_0x6CAAB7E78B5D978A(), unk_0x8C358101651A3F7C(iLocal_57, 2000)))) || bLocal_59)
	{
		if (iLocal_55 >= 8)
		{
			iLocal_55 = 0;
			iLocal_56 = unk_0x578C4EF320340AF7();
			if (unk_0x25DDB354A40FFCDB())
			{
				iLocal_57 = unk_0x6CAAB7E78B5D978A();
			}
		}
		iVar11 = 1;
		if (bLocal_59)
		{
			iVar11 = 8;
		}
		iVar12 = 0;
		while (iVar12 < iVar11)
		{
			bVar13 = true;
			if (bLocal_59)
			{
				iVar8 = iVar12;
			}
			else
			{
				iVar8 = iLocal_55;
			}
			func_71(iLocal_58, iVar8, &iVar6, &iVar7);
			if (unk_0x25DDB354A40FFCDB())
			{
				iVar3 = func_70(iVar7, -1, 0);
			}
			else if (iVar8 == 0)
			{
				iVar3 = Global_111858.f_2359.f_539.f_2387[iLocal_58];
			}
			else
			{
				unk_0xD2F202166691EDB2(iVar6, &iVar3, -1);
			}
			iVar5 = iVar3;
			iVar3 = func_69(iVar3, 0, 100);
			if (func_56(iLocal_58, iVar8, iVar3, &iVar4))
			{
				if (unk_0x25DDB354A40FFCDB())
				{
					func_55(iVar7, iVar4, -1, 1, 0);
				}
				else if (iVar8 == 0)
				{
					if (Global_111858.f_2359.f_539.f_2387[iLocal_58] == 0)
					{
						bVar13 = false;
					}
					Global_111858.f_2359.f_539.f_2387[iLocal_58] = iVar4;
				}
				else
				{
					unk_0x6000E4684CB4330B(iVar6, iVar4, 1);
				}
				if (iVar4 > func_53(iLocal_58, iVar8, -1))
				{
					if (unk_0x25DDB354A40FFCDB())
					{
					}
					else if ((!Global_111858.f_9081 && !func_52(0)) || !unk_0xCE990E643CD9D0E5(Global_111858.f_9081.f_2[27 /*3*/], 2))
					{
						bVar13 = false;
					}
					iVar14 = iVar4;
					iVar15 = (iVar14 - (iVar14 % func_51(iLocal_58, iVar8)));
					if ((iVar14 % func_51(iLocal_58, iVar8)) >= 0)
					{
						iVar15 = (iVar15 + func_51(iLocal_58, iVar8));
					}
					if (iVar14 >= iVar15)
					{
						iVar14 = iVar15;
					}
					else
					{
						iVar14 = (iVar15 - func_51(iLocal_58, iVar8));
					}
					if (iVar4 > iVar14)
					{
						bVar13 = false;
					}
					if (func_46())
					{
						bVar13 = false;
					}
					if (bVar13)
					{
						if (!bLocal_59)
						{
							if (unk_0x25DDB354A40FFCDB())
							{
								if (func_45(117, -1) == 0)
								{
									if (!unk_0xDABD547F0DF2906C() && func_9())
									{
										func_8("STAT_HELP2", -1);
										func_4(117, 1, -1, 1);
									}
								}
							}
							iLocal_61 = 1;
							iLocal_64 = (iVar4 - iVar3);
							iLocal_64 = (iLocal_64 + (iVar3 % func_51(iLocal_58, iVar8)));
							iLocal_65 = iVar4;
							iLocal_62 = iLocal_58;
							iLocal_63 = iVar8;
						}
					}
					if (iVar4 >= 100)
					{
						if (func_3(iLocal_58, iVar8, &iVar9))
						{
							if (iLocal_58 == 0)
							{
								unk_0xD2F202166691EDB2(joaat("SP0_TOTAL_PLAYING_TIME"), &iVar10, -1);
								unk_0x6000E4684CB4330B(iVar9, iVar10, 1);
							}
							else if (iLocal_58 == 1)
							{
								unk_0xD2F202166691EDB2(joaat("SP1_TOTAL_PLAYING_TIME"), &iVar10, -1);
								unk_0x6000E4684CB4330B(iVar9, iVar10, 1);
							}
							else if (iLocal_58 == 2)
							{
								unk_0xD2F202166691EDB2(joaat("SP2_TOTAL_PLAYING_TIME"), &iVar10, -1);
								unk_0x6000E4684CB4330B(iVar9, iVar10, 1);
							}
							else if (iLocal_58 == 3)
							{
							}
						}
					}
				}
				func_74(iLocal_58, iVar8);
			}
			else if (iVar4 < iVar5)
			{
				bVar16 = true;
				if (unk_0x25DDB354A40FFCDB())
				{
					func_55(iVar7, iVar4, -1, 1, 0);
				}
				else if (iVar8 == 0)
				{
					Global_111858.f_2359.f_539.f_2387[iLocal_58] = iVar4;
					bVar16 = false;
				}
				else
				{
					unk_0x6000E4684CB4330B(iVar6, iVar4, 1);
				}
				if (bVar16)
				{
					func_74(iLocal_58, iVar8);
				}
			}
			iVar12++;
		}
	}
	else
	{
		iLocal_60 = 1;
	}
}

bool func_3(int iParam0, int iParam1, var uParam2)
{
	*uParam2 = joaat("LAST_PLAYING_TIME");
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					*uParam2 = joaat("SP0_SPECIAL_ABILITY_MAXED");
					break;
				
				case 1:
					*uParam2 = joaat("SP0_STAMINA_MAXED");
					break;
				
				case 3:
					*uParam2 = joaat("SP0_LUNG_CAPACITY_MAXED");
					break;
				
				case 2:
					*uParam2 = joaat("SP0_STRENGTH_MAXED");
					break;
				
				case 4:
					*uParam2 = joaat("SP0_WHEELIE_ABILITY_MAXED");
					break;
				
				case 5:
					*uParam2 = joaat("SP0_FLYING_ABILITY_MAXED");
					break;
				
				case 6:
					*uParam2 = joaat("SP0_SHOOTING_ABILITY_MAXED");
					break;
				
				case 7:
					*uParam2 = joaat("SP0_STEALTH_ABILITY_MAXED");
					break;
			}
			break;
		
		case 1:
			switch (iParam1)
			{
				case 0:
					*uParam2 = joaat("SP1_SPECIAL_ABILITY_MAXED");
					break;
				
				case 1:
					*uParam2 = joaat("SP1_STAMINA_MAXED");
					break;
				
				case 3:
					*uParam2 = joaat("SP1_LUNG_CAPACITY_MAXED");
					break;
				
				case 2:
					*uParam2 = joaat("SP1_STRENGTH_MAXED");
					break;
				
				case 4:
					*uParam2 = joaat("SP1_WHEELIE_ABILITY_MAXED");
					break;
				
				case 5:
					*uParam2 = joaat("SP1_FLYING_ABILITY_MAXED");
					break;
				
				case 6:
					*uParam2 = joaat("SP1_SHOOTING_ABILITY_MAXED");
					break;
				
				case 7:
					*uParam2 = joaat("SP1_STEALTH_ABILITY_MAXED");
					break;
			}
			break;
		
		case 2:
			switch (iParam1)
			{
				case 0:
					*uParam2 = joaat("SP2_SPECIAL_ABILITY_MAXED");
					break;
				
				case 1:
					*uParam2 = joaat("SP2_STAMINA_MAXED");
					break;
				
				case 3:
					*uParam2 = joaat("SP2_LUNG_CAPACITY_MAXED");
					break;
				
				case 2:
					*uParam2 = joaat("SP2_STRENGTH_MAXED");
					break;
				
				case 4:
					*uParam2 = joaat("SP2_WHEELIE_ABILITY_MAXED");
					break;
				
				case 5:
					*uParam2 = joaat("SP2_FLYING_ABILITY_MAXED");
					break;
				
				case 6:
					*uParam2 = joaat("SP2_SHOOTING_ABILITY_MAXED");
					break;
				
				case 7:
					*uParam2 = joaat("SP2_STEALTH_ABILITY_MAXED");
					break;
			}
			break;
	}
	return *uParam2 != joaat("LAST_PLAYING_TIME");
}

void func_4(int iParam0, bool bParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	if (func_7())
	{
		iVar0 = Global_2587834[iParam0 /*3*/][func_5(iParam2)];
		if (iVar0 != 0)
		{
			unk_0xBD9D9E72ABB288E4(iVar0, bParam1, iParam3);
		}
	}
}

int func_5(var uParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = uParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_6();
		if (iVar1 > -1)
		{
			Global_2551544 = 0;
			iVar0 = iVar1;
		}
		else
		{
			iVar0 = 0;
			Global_2551544 = 1;
		}
	}
	return iVar0;
}

int func_6()
{
	return Global_1312763;
}

int func_7()
{
	return 1;
	return 0;
}

void func_8(char* sParam0, int iParam1)
{
	unk_0x17751E107423AFE9(sParam0);
	unk_0x1A169149B3D18FCB(0, 0, true, iParam1);
}

int func_9()
{
	if ((unk_0xE3609B05778E27BF() && unk_0xEBB78303C505A9D7()) && !func_44(unk_0x460153A63B9477BC()))
	{
		return 0;
	}
	if (Global_1663919 == 1)
	{
		return 0;
	}
	if (Global_1663771 == 1)
	{
		return 0;
	}
	if (func_43(unk_0x460153A63B9477BC()))
	{
		return 0;
	}
	if (unk_0xA6D96BF009729CDB())
	{
		return 0;
	}
	if (Global_1574403 == 1)
	{
		return 0;
	}
	if (unk_0xB330C2EF9E4B0D6E())
	{
		return 0;
	}
	if (Global_968398)
	{
		return 0;
	}
	if (Global_1590682[unk_0x460153A63B9477BC() /*883*/].f_757 == 1)
	{
		return 0;
	}
	if (func_42())
	{
		return 0;
	}
	if (func_41())
	{
		return 0;
	}
	if (func_40())
	{
		if (!func_41())
		{
			if (!func_39(3, -1))
			{
				if (func_37(&Global_2464572, 300000, 0) == 1)
				{
					func_36(&Global_2464570);
					func_34(3, -1);
				}
				else if (func_37(&Global_2464570, 7000, 0) == 0)
				{
					return 0;
				}
			}
		}
		else
		{
			return 0;
		}
	}
	if (func_33())
	{
		return 0;
	}
	if (func_32())
	{
		return 0;
	}
	if (func_30())
	{
		return 0;
	}
	if (func_29())
	{
		return 0;
	}
	if (func_28())
	{
		return 0;
	}
	if (func_27())
	{
		return 0;
	}
	if (unk_0x450A8984AFF05042())
	{
		return 0;
	}
	if (unk_0xF0C12886E5C1B20E())
	{
		return 0;
	}
	if (unk_0xE8CD061CB2B99F32())
	{
		if (func_26(unk_0x9B0761B4C3EB8BC7()) == joaat("weapon_sniperrifle") || func_26(unk_0x9B0761B4C3EB8BC7()) == joaat("weapon_heavysniper"))
		{
			return 0;
		}
	}
	if (unk_0x03DB5C6AABF8DA46())
	{
		return 0;
	}
	if (func_25(8, -1))
	{
		return 0;
	}
	if (func_24(12, -1))
	{
		return 0;
	}
	if (unk_0xD91913FA3B12A5C4(19))
	{
		return 0;
	}
	if (func_23())
	{
		return 0;
	}
	if (func_22())
	{
		return 0;
	}
	if (Global_1590682[unk_0x460153A63B9477BC() /*883*/].f_35)
	{
		return 0;
	}
	if (Global_1574197)
	{
		return 0;
	}
	if (Global_1574201)
	{
		return 0;
	}
	if (Global_1574203)
	{
		return 0;
	}
	if (Global_2440049.f_4010.f_39)
	{
		return 0;
	}
	if (func_21(0))
	{
		return 0;
	}
	if (func_20())
	{
		return 0;
	}
	if (Global_2540384.f_4028)
	{
		return 0;
	}
	if (Global_2440049.f_3876)
	{
		return 0;
	}
	if (!func_19(unk_0x460153A63B9477BC(), 1, 0))
	{
		return 0;
	}
	if (func_18(unk_0x460153A63B9477BC()))
	{
		return 0;
	}
	if (Global_2440049.f_4010.f_39 == 1)
	{
		return 0;
	}
	if (Global_2452679.f_2846.f_25 == 1)
	{
		return 0;
	}
	if (func_17(1))
	{
		return 0;
	}
	if (func_15())
	{
		return 0;
	}
	if (unk_0xD91913FA3B12A5C4(16))
	{
		return 0;
	}
	if (func_14())
	{
		return 0;
	}
	if (func_13())
	{
		return 0;
	}
	if (unk_0x19D4274B54F9D9FA())
	{
		if (func_12("FHU_HELP3"))
		{
			return 0;
		}
	}
	if (Global_1590682[unk_0x460153A63B9477BC() /*883*/].f_739)
	{
		return 0;
	}
	if (func_10(unk_0x460153A63B9477BC()))
	{
		return 0;
	}
	return 1;
}

int func_10(int iParam0)
{
	if (iParam0 != func_11())
	{
		return unk_0xCE990E643CD9D0E5(Global_1590682[iParam0 /*883*/].f_274.f_334, 26);
	}
	return 0;
}

int func_11()
{
	return -1;
}

bool func_12(char* sParam0)
{
	unk_0x69476B1CA6A9FF80(sParam0);
	return unk_0x1A3A9FFE5CA6F64B(0);
}

bool func_13()
{
	return Global_2440049.f_2005.f_701 != 0;
}

bool func_14()
{
	return Global_2440049.f_3158.f_578;
}

bool func_15()
{
	return func_16();
}

bool func_16()
{
	return Global_1370593.f_40 == 3;
}

bool func_17(bool bParam0)
{
	if (bParam0)
	{
		return (Global_22411.f_4 && Global_22411.f_104 == 4);
	}
	return Global_22411.f_4;
}

bool func_18(int iParam0)
{
	return unk_0xCE990E643CD9D0E5(Global_1627436[iParam0 /*90*/].f_14, 0);
}

int func_19(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		if (unk_0x166E920FB00B2DBB(iParam0))
		{
			if (bParam1)
			{
				if (!unk_0x5A228A6A51E757C8(iParam0))
				{
					return 0;
				}
			}
			if (bParam2)
			{
				if (!Global_2440049.f_3[iVar0])
				{
					return 0;
				}
			}
			return 1;
		}
	}
	return 0;
}

int func_20()
{
	if (unk_0x7B70881748D166CD(joaat("appcamera")) > 0)
	{
		return 1;
	}
	return 0;
}

int func_21(int iParam0)
{
	if (iParam0 == 1)
	{
		if (Global_19681.f_1 > 3)
		{
			if (unk_0xCE990E643CD9D0E5(Global_7551, 14))
			{
				return 1;
			}
			else
			{
				return 0;
			}
		}
		else
		{
			return 0;
		}
	}
	if (unk_0x7B70881748D166CD(joaat("cellphone_flashhand")) > 0)
	{
		return 1;
	}
	if (Global_19681.f_1 > 3)
	{
		return 1;
	}
	return 0;
}

bool func_22()
{
	return Global_1377236.f_112;
}

bool func_23()
{
	return Global_2440049.f_2834[0 /*80*/].f_1 != 0;
}

int func_24(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 5:
			if (iParam1 > -1)
			{
				if (Global_1377236.f_137[iParam1])
				{
					return 1;
				}
				if (Global_1377236.f_170[iParam1])
				{
					return 1;
				}
			}
			break;
		
		default:
			if (unk_0xCE990E643CD9D0E5(Global_1377236.f_1046, iParam0))
			{
				return 1;
			}
			if (unk_0xCE990E643CD9D0E5(Global_1377236.f_1047, iParam0))
			{
				return 1;
			}
			break;
	}
	return 0;
}

bool func_25(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 5:
			if (iParam1 > -1)
			{
				return Global_1377236.f_203[iParam1];
			}
			break;
	}
	return unk_0xCE990E643CD9D0E5(Global_1377236.f_1048, iParam0);
}

int func_26(int iParam0)
{
	var uVar0;
	
	unk_0x1386E5E658CE3032(iParam0, &uVar0, 1);
	return uVar0;
}

bool func_27()
{
	return Global_2451787.f_690;
}

bool func_28()
{
	return unk_0xCE990E643CD9D0E5(Global_959568.f_8, 13);
}

bool func_29()
{
	return Global_2451787.f_689;
}

int func_30()
{
	if (func_31() == 1 || func_31() == 4)
	{
		return 1;
	}
	return 0;
}

int func_31()
{
	return Global_1312485.f_18;
}

int func_32()
{
	if (func_31() == 3 || func_31() == 2)
	{
		return 1;
	}
	return 0;
}

int func_33()
{
	if (unk_0x7B70881748D166CD(joaat("maintransition")) > 0)
	{
		return 1;
	}
	return 0;
}

void func_34(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	if (iParam1 == -1)
	{
		iParam1 = func_6();
	}
	Global_1388046 = 0;
	if (unk_0x3D1E37C2BD9F339F() == 0)
	{
		return;
	}
	switch (iParam0)
	{
		case 0:
			unk_0xEEE079E71E99332D(0, iParam1);
			iVar1 = func_35(iParam1);
			iVar0 = unk_0xFCBF95335DD16537(iVar1);
			break;
		
		default:
			iVar1 = func_35(iParam1);
			iVar0 = unk_0xFCBF95335DD16537(iVar1);
			if (!unk_0xCE990E643CD9D0E5(iVar0, iParam0))
			{
				unk_0xBE20AB8238688965(&iVar0, iParam0);
				unk_0xEEE079E71E99332D(iVar0, iParam1);
			}
			break;
	}
	switch (iParam0)
	{
		case 0:
			func_4(120, 0, iParam1, 1);
			func_4(124, 0, iParam1, 1);
			func_4(115, 0, iParam1, 1);
			func_4(119, 0, iParam1, 1);
			func_4(121, 0, iParam1, 1);
			func_4(122, 0, iParam1, 1);
			func_4(125, 0, iParam1, 1);
			func_55(1303, 0, iParam1, 1, 0);
			func_55(7234, 0, iParam1, 1, 0);
			break;
	}
}

int func_35(int iParam0)
{
	int iVar0;
	
	if (iParam0 == -1)
	{
		iParam0 = func_6();
	}
	switch (iParam0)
	{
		case 0:
			iVar0 = 914;
			break;
		
		case 1:
			iVar0 = 915;
			break;
		
		case 2:
			iVar0 = 916;
			break;
		
		case 3:
			iVar0 = 917;
			break;
		
		case 4:
			iVar0 = 918;
			break;
	}
	return iVar0;
}

void func_36(var uParam0)
{
	uParam0->f_1 = 0;
}

int func_37(var uParam0, int iParam1, bool bParam2)
{
	if (iParam1 == -1)
	{
		return 1;
	}
	func_38(uParam0, bParam2, 0);
	if (unk_0x25DDB354A40FFCDB() && !bParam2)
	{
		if (unk_0x44F29CF6A0675F4F(unk_0x624736CA66E14161(unk_0x6CAAB7E78B5D978A(), *uParam0)) >= iParam1)
		{
			func_36(uParam0);
			return 1;
		}
	}
	else if (unk_0x44F29CF6A0675F4F(unk_0x624736CA66E14161(unk_0x578C4EF320340AF7(), *uParam0)) >= iParam1)
	{
		func_36(uParam0);
		return 1;
	}
	return 0;
}

void func_38(var uParam0, bool bParam1, bool bParam2)
{
	if (uParam0->f_1 == 0)
	{
		if (unk_0x25DDB354A40FFCDB() && !bParam1)
		{
			if (!bParam2)
			{
				*uParam0 = unk_0x6CAAB7E78B5D978A();
			}
			else
			{
				*uParam0 = unk_0x29B9AF1CB5B8175D();
			}
		}
		else
		{
			*uParam0 = unk_0x578C4EF320340AF7();
		}
		uParam0->f_1 = 1;
	}
}

bool func_39(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	if (iParam1 == -1)
	{
		iParam1 = func_6();
	}
	iVar0 = func_35(iParam1);
	iVar1 = unk_0xFCBF95335DD16537(iVar0);
	return unk_0xCE990E643CD9D0E5(iVar1, iParam0);
}

int func_40()
{
	int iVar0;
	
	if (unk_0x011A67D2B195B6EB())
	{
		if (unk_0xB6E5F77B7062D58A())
		{
			if (unk_0xE06C56C6444527A6())
			{
				unk_0xD2F202166691EDB2(joaat("SP_UNLOCK_EXCLUS_CONTENT"), &iVar0, -1);
				unk_0xBE20AB8238688965(&iVar0, 2);
				unk_0xBE20AB8238688965(&iVar0, 4);
				unk_0xBE20AB8238688965(&iVar0, 6);
				unk_0xBE20AB8238688965(&Global_25, 2);
				unk_0xBE20AB8238688965(&Global_25, 4);
				unk_0xBE20AB8238688965(&Global_25, 6);
				unk_0x6000E4684CB4330B(joaat("SP_UNLOCK_EXCLUS_CONTENT"), iVar0, 1);
				if (unk_0x3D1E37C2BD9F339F())
				{
					iVar0 = unk_0xFCBF95335DD16537(866);
					unk_0xBE20AB8238688965(&iVar0, 0);
					unk_0xB2B72C9FCE371E70(iVar0);
				}
				return 1;
			}
		}
	}
	if (Global_150693 == 2)
	{
		return 1;
	}
	else if (Global_150693 == 3)
	{
		return 0;
	}
	if (unk_0x3D1E37C2BD9F339F())
	{
		if (unk_0xCE990E643CD9D0E5(unk_0xFCBF95335DD16537(866), 0))
		{
			return 1;
		}
	}
	return 0;
}

bool func_41()
{
	return Global_1312896;
}

bool func_42()
{
	return Global_1590682[unk_0x460153A63B9477BC() /*883*/].f_196 != 0;
}

int func_43(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (!unk_0x25DDB354A40FFCDB())
	{
		return 0;
	}
	if (iParam0 == unk_0x460153A63B9477BC())
	{
		return Global_2515846;
	}
	else
	{
		iVar0 = unk_0x1FA7B77001D60F9D(iParam0);
		if (unk_0xAE06B9E39EBDE049(iVar0))
		{
			iVar1 = unk_0x36FE6D3220816ADA(iVar0);
			if (iVar1 == joaat("mp_m_freemode_01") || iVar1 == joaat("mp_f_freemode_01"))
			{
				return 0;
			}
			else
			{
				return 1;
			}
		}
		else
		{
			return 0;
		}
	}
	return 0;
}

bool func_44(int iParam0)
{
	return unk_0xCE990E643CD9D0E5(Global_2425869[iParam0 /*443*/].f_314.f_3, 13);
}

int func_45(int iParam0, int iParam1)
{
	int iVar0;
	var uVar1;
	
	iVar0 = Global_2587834[iParam0 /*3*/][func_5(iParam1)];
	if (unk_0xB9112C701DE2A810(iVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

int func_46()
{
	if (!func_49(1))
	{
		return 0;
	}
	if (func_47())
	{
		return 0;
	}
	return Global_1676115;
}

bool func_47()
{
	return func_48(unk_0x460153A63B9477BC());
}

int func_48(int iParam0)
{
	if (iParam0 != func_11())
	{
		if (Global_1630317[iParam0 /*595*/].f_11 != func_11())
		{
			return Global_1630317[iParam0 /*595*/].f_11 == iParam0;
		}
	}
	return 0;
}

bool func_49(bool bParam0)
{
	return func_50(unk_0x460153A63B9477BC(), bParam0);
}

bool func_50(int iParam0, bool bParam1)
{
	if (!bParam1)
	{
		if (func_48(iParam0))
		{
			return 0;
		}
	}
	return Global_1630317[iParam0 /*595*/].f_11 != func_11();
}

int func_51(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					return 20;
					break;
				
				case 1:
					return 20;
					break;
				
				case 3:
					return 20;
					break;
				
				case 2:
					return 20;
					break;
				
				case 4:
					return 20;
					break;
				
				case 5:
					return 20;
					break;
				
				case 6:
					return 20;
					break;
				
				case 7:
					return 20;
					break;
			}
			break;
		
		case 1:
			switch (iParam1)
			{
				case 0:
					return 20;
					break;
				
				case 1:
					return 20;
					break;
				
				case 3:
					return 20;
					break;
				
				case 2:
					return 20;
					break;
				
				case 4:
					return 20;
					break;
				
				case 5:
					return 20;
					break;
				
				case 6:
					return 20;
					break;
				
				case 7:
					return 20;
					break;
			}
			break;
		
		case 2:
			switch (iParam1)
			{
				case 0:
					return 20;
					break;
				
				case 1:
					return 20;
					break;
				
				case 3:
					return 20;
					break;
				
				case 2:
					return 20;
					break;
				
				case 4:
					return 20;
					break;
				
				case 5:
					return 20;
					break;
				
				case 6:
					return 20;
					break;
				
				case 7:
					return 20;
					break;
			}
			break;
		
		case 3:
			switch (iParam1)
			{
				case 0:
					return 20;
					break;
				
				case 1:
					return 20;
					break;
				
				case 3:
					return 20;
					break;
				
				case 2:
					return 20;
					break;
				
				case 4:
					return 20;
					break;
				
				case 5:
					return 20;
					break;
				
				case 6:
					return 20;
					break;
				
				case 7:
					return 20;
					break;
			}
			break;
	}
	return 1;
}

bool func_52(bool bParam0)
{
	if (!bParam0 && unk_0x7B70881748D166CD(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return unk_0xCE990E643CD9D0E5(Global_77081, 0);
}

int func_53(int iParam0, int iParam1, int iParam2)
{
	if (!unk_0x25DDB354A40FFCDB())
	{
		if (func_54(14))
		{
			return 100;
		}
	}
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					return 0;
					break;
				
				case 1:
					return 47;
					break;
				
				case 3:
					return 22;
					break;
				
				case 2:
					return 21;
					break;
				
				case 4:
					return 54;
					break;
				
				case 5:
					return 31;
					break;
				
				case 6:
					return 79;
					break;
				
				case 7:
					return 81;
					break;
			}
			break;
		
		case 1:
			switch (iParam1)
			{
				case 0:
					return 0;
					break;
				
				case 1:
					return 51;
					break;
				
				case 3:
					return 46;
					break;
				
				case 2:
					return 49;
					break;
				
				case 4:
					return 71;
					break;
				
				case 5:
					return 19;
					break;
				
				case 6:
					return 24;
					break;
				
				case 7:
					return 21;
					break;
			}
			break;
		
		case 2:
			switch (iParam1)
			{
				case 0:
					return 0;
					break;
				
				case 1:
					return 23;
					break;
				
				case 3:
					return 28;
					break;
				
				case 2:
					return 79;
					break;
				
				case 4:
					return 31;
					break;
				
				case 5:
					return 82;
					break;
				
				case 6:
					return 69;
					break;
				
				case 7:
					return 49;
					break;
			}
			break;
		
		case 3:
			switch (iParam1)
			{
				case 1:
					return func_70(1224, iParam2, 0);
					break;
				
				case 3:
					return func_70(1230, iParam2, 0);
					break;
				
				case 2:
					return func_70(1226, iParam2, 0);
					break;
				
				case 4:
					return func_70(1229, iParam2, 0);
					break;
				
				case 5:
					return func_70(1228, iParam2, 0);
					break;
				
				case 6:
					return func_70(1225, iParam2, 0);
					break;
				
				case 7:
					return func_70(1227, iParam2, 0);
					break;
			}
			break;
	}
	return 0;
}

bool func_54(int iParam0)
{
	return Global_41631 == iParam0;
}

void func_55(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	int iVar0;
	
	if (bParam4)
	{
	}
	iVar0 = Global_2551832[iParam0 /*3*/][func_5(iParam2)];
	if (iVar0 != 0)
	{
		unk_0x6000E4684CB4330B(iVar0, iParam1, iParam3);
	}
}

int func_56(int iParam0, int iParam1, int iParam2, var uParam3)
{
	*uParam3 = func_57(iParam0, iParam1, 0, -1);
	if (*uParam3 > iParam2)
	{
		return 1;
	}
	return 0;
}

int func_57(int iParam0, int iParam1, bool bParam2, int iParam3)
{
	float fVar0;
	float fVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	float fVar12;
	
	iVar2 = 0;
	switch (iParam1)
	{
		case 0:
			if (iParam0 == 0)
			{
				unk_0xD2F202166691EDB2(joaat("SP0_SPECIAL_ABILITY_UNLOCKED"), &iVar3, -1);
				fVar0 = to_float(iVar3);
			}
			else if (iParam0 == 1)
			{
				unk_0xD2F202166691EDB2(joaat("SP1_SPECIAL_ABILITY_UNLOCKED"), &iVar3, -1);
				fVar0 = to_float(iVar3);
			}
			else if (iParam0 == 2)
			{
				unk_0xD2F202166691EDB2(joaat("SP2_SPECIAL_ABILITY_UNLOCKED"), &iVar3, -1);
				fVar0 = to_float(iVar3);
			}
			else if (iParam0 == 3)
			{
				fVar0 = to_float(func_70(64, iParam3, 0));
			}
			break;
		
		case 1:
			if (iParam0 == 0)
			{
				unk_0xB734B6962B239811(joaat("SP0_DIST_RUNNING"), &fVar1, -1);
				fVar0 = ((fVar1 - Global_111858.f_2359.f_539.f_2355[iParam0]) / 175f);
			}
			else if (iParam0 == 1)
			{
				unk_0xB734B6962B239811(joaat("SP1_DIST_RUNNING"), &fVar1, -1);
				fVar0 = ((fVar1 - Global_111858.f_2359.f_539.f_2355[iParam0]) / 175f);
			}
			else if (iParam0 == 2)
			{
				unk_0xB734B6962B239811(joaat("SP2_DIST_RUNNING"), &fVar1, -1);
				fVar0 = ((fVar1 - Global_111858.f_2359.f_539.f_2355[iParam0]) / 175f);
			}
			else if (iParam0 == 3)
			{
				fVar0 = (func_68(20, iParam3) / 175f);
				func_65(&fVar0);
			}
			if (iParam0 == 0)
			{
				fVar0 = (fVar0 + to_float(func_64(joaat("SP0_TIME_SWIMMING"))));
			}
			else if (iParam0 == 1)
			{
				fVar0 = (fVar0 + to_float(func_64(joaat("SP1_TIME_SWIMMING"))));
			}
			else if (iParam0 == 2)
			{
				fVar0 = (fVar0 + to_float(func_64(joaat("SP2_TIME_SWIMMING"))));
			}
			else if (iParam0 == 3)
			{
				fVar0 = (fVar0 + to_float(func_64(func_63(50, iParam3))));
				func_65(&fVar0);
			}
			if (iParam0 == 0)
			{
				fVar0 = (fVar0 + to_float(func_64(joaat("SP0_TIME_DRIVING_BICYCLE"))));
			}
			else if (iParam0 == 1)
			{
				fVar0 = (fVar0 + to_float(func_64(joaat("SP1_TIME_DRIVING_BICYCLE"))));
			}
			else if (iParam0 == 2)
			{
				fVar0 = (fVar0 + to_float(func_64(joaat("SP2_TIME_DRIVING_BICYCLE"))));
			}
			else if (iParam0 == 3)
			{
				fVar0 = (fVar0 + to_float(func_64(func_63(47, iParam3))));
				func_65(&fVar0);
			}
			if (iParam0 == 3)
			{
				fVar0 = (fVar0 + ((4f * Global_262145.f_23838) * IntToFloat(func_70(7235, -1, 0))));
			}
			if (iParam0 == 3)
			{
				fVar0 = (fVar0 * 0.25f);
			}
			break;
		
		case 3:
			if (iParam0 == 0)
			{
				fVar0 = (to_float(func_62(joaat("SP0_TIME_UNDERWATER"))) / 30f);
			}
			else if (iParam0 == 1)
			{
				fVar0 = (to_float(func_62(joaat("SP1_TIME_UNDERWATER"))) / 30f);
			}
			else if (iParam0 == 2)
			{
				fVar0 = (to_float(func_62(joaat("SP2_TIME_UNDERWATER"))) / 30f);
			}
			else if (iParam0 == 3)
			{
				fVar0 = (to_float(func_62(func_63(52, iParam3))) / 30f);
				func_65(&fVar0);
			}
			break;
		
		case 2:
			if (iParam0 == 0)
			{
				unk_0xD2F202166691EDB2(joaat("SP0_UNARMED_HITS"), &iVar3, -1);
				fVar0 = (to_float((iVar3 - Global_111858.f_2359.f_539.f_2359[iParam0])) / 20f);
			}
			else if (iParam0 == 1)
			{
				unk_0xD2F202166691EDB2(joaat("SP1_UNARMED_HITS"), &iVar3, -1);
				fVar0 = (to_float((iVar3 - Global_111858.f_2359.f_539.f_2359[iParam0])) / 20f);
			}
			else if (iParam0 == 2)
			{
				unk_0xD2F202166691EDB2(joaat("SP2_UNARMED_HITS"), &iVar3, -1);
				fVar0 = (to_float((iVar3 - Global_111858.f_2359.f_539.f_2359[iParam0])) / 20f);
			}
			else if (iParam0 == 3)
			{
				fVar0 = (to_float(func_70(1499, iParam3, 0)) / 20f);
				func_65(&fVar0);
			}
			break;
		
		case 4:
			if (iParam0 == 0)
			{
				unk_0xD2F202166691EDB2(joaat("SP0_NUMBER_NEAR_MISS"), &iVar3, -1);
				fVar0 = (fVar0 + (to_float((iVar3 - Global_111858.f_2359.f_539.f_2363[iParam0])) / 50f));
			}
			else if (iParam0 == 1)
			{
				unk_0xD2F202166691EDB2(joaat("SP1_NUMBER_NEAR_MISS"), &iVar3, -1);
				fVar0 = (fVar0 + (to_float((iVar3 - Global_111858.f_2359.f_539.f_2363[iParam0])) / 50f));
			}
			else if (iParam0 == 2)
			{
				unk_0xD2F202166691EDB2(joaat("SP2_NUMBER_NEAR_MISS"), &iVar3, -1);
				fVar0 = (fVar0 + (to_float((iVar3 - Global_111858.f_2359.f_539.f_2363[iParam0])) / 50f));
			}
			else if (iParam0 == 3)
			{
				fVar0 = (fVar0 + IntToFloat((func_70(112, iParam3, 0) / 50)));
				func_65(&fVar0);
			}
			break;
		
		case 5:
			if (iParam0 == 0)
			{
				fVar0 = (to_float(func_64(joaat("SP0_TIME_DRIVING_PLANE"))) / 10f);
			}
			else if (iParam0 == 1)
			{
				fVar0 = (to_float(func_64(joaat("SP1_TIME_DRIVING_PLANE"))) / 10f);
			}
			else if (iParam0 == 2)
			{
				fVar0 = (to_float(func_64(joaat("SP2_TIME_DRIVING_PLANE"))) / 10f);
			}
			else if (iParam0 == 3)
			{
				fVar0 = (to_float(func_64(func_63(43, iParam3))) / 10f);
			}
			if (iParam0 == 0)
			{
				fVar0 = (fVar0 + (to_float(func_64(joaat("SP0_TIME_DRIVING_HELI"))) / 10f));
			}
			else if (iParam0 == 1)
			{
				fVar0 = (fVar0 + (to_float(func_64(joaat("SP1_TIME_DRIVING_HELI"))) / 10f));
			}
			else if (iParam0 == 2)
			{
				fVar0 = (fVar0 + (to_float(func_64(joaat("SP2_TIME_DRIVING_HELI"))) / 10f));
			}
			else if (iParam0 == 3)
			{
				fVar0 = (fVar0 + (to_float(func_64(func_63(45, iParam3))) / 10f));
			}
			if (iParam0 == 0)
			{
				unk_0xD2F202166691EDB2(joaat("SP0_PLANE_LANDINGS"), &iVar3, -1);
				fVar0 = (fVar0 + to_float(iVar3));
			}
			else if (iParam0 == 1)
			{
				unk_0xD2F202166691EDB2(joaat("SP1_PLANE_LANDINGS"), &iVar3, -1);
				fVar0 = (fVar0 + to_float(iVar3));
			}
			else if (iParam0 == 2)
			{
				unk_0xD2F202166691EDB2(joaat("SP2_PLANE_LANDINGS"), &iVar3, -1);
				fVar0 = (fVar0 + to_float(iVar3));
			}
			else if (iParam0 == 3)
			{
				fVar0 = (fVar0 + IntToFloat(func_70(61, iParam3, 0)));
				func_65(&fVar0);
			}
			if ((iParam0 == 0 || iParam0 == 1) || iParam0 == 2)
			{
				iVar4 = func_61(iParam0, 0);
				if (iParam0 == 2)
				{
					if (iVar4 == 3)
					{
						fVar0 = (fVar0 + 10f);
					}
					else if (iVar4 == 2)
					{
						fVar0 = (fVar0 + 7f);
					}
					else if (iVar4 == 1)
					{
						fVar0 = (fVar0 + 5f);
					}
				}
				else if (iVar4 == 3)
				{
					fVar0 = (fVar0 + 12f);
				}
				else if (iVar4 == 2)
				{
					fVar0 = (fVar0 + 9f);
				}
				else if (iVar4 == 1)
				{
					fVar0 = (fVar0 + 7f);
				}
				iVar4 = func_61(iParam0, 1);
				if (iParam0 == 2)
				{
					if (iVar4 == 3)
					{
						fVar0 = (fVar0 + 10f);
					}
					else if (iVar4 == 2)
					{
						fVar0 = (fVar0 + 7f);
					}
					else if (iVar4 == 1)
					{
						fVar0 = (fVar0 + 5f);
					}
				}
				else if (iVar4 == 3)
				{
					fVar0 = (fVar0 + 12f);
				}
				else if (iVar4 == 2)
				{
					fVar0 = (fVar0 + 9f);
				}
				else if (iVar4 == 1)
				{
					fVar0 = (fVar0 + 7f);
				}
				iVar4 = func_61(iParam0, 2);
				if (iVar4 == 3)
				{
					fVar0 = (fVar0 + 12f);
				}
				else if (iVar4 == 2)
				{
					fVar0 = (fVar0 + 9f);
				}
				else if (iVar4 == 1)
				{
					fVar0 = (fVar0 + 7f);
				}
				iVar4 = func_61(iParam0, 3);
				if (iVar4 == 3)
				{
					fVar0 = (fVar0 + 12f);
				}
				else if (iVar4 == 2)
				{
					fVar0 = (fVar0 + 9f);
				}
				else if (iVar4 == 1)
				{
					fVar0 = (fVar0 + 7f);
				}
				iVar4 = func_61(iParam0, 6);
				if (iVar4 == 3)
				{
					fVar0 = (fVar0 + 12f);
				}
				else if (iVar4 == 2)
				{
					fVar0 = (fVar0 + 9f);
				}
				else if (iVar4 == 1)
				{
					fVar0 = (fVar0 + 7f);
				}
				iVar4 = func_61(iParam0, 4);
				if (iVar4 == 3)
				{
					fVar0 = (fVar0 + 5f);
				}
				else if (iVar4 == 2)
				{
					fVar0 = (fVar0 + 3f);
				}
				else if (iVar4 == 1)
				{
					fVar0 = (fVar0 + 2f);
				}
				iVar4 = func_61(iParam0, 5);
				if (iVar4 == 3)
				{
					fVar0 = (fVar0 + 12f);
				}
				else if (iVar4 == 2)
				{
					fVar0 = (fVar0 + 9f);
				}
				else if (iVar4 == 1)
				{
					fVar0 = (fVar0 + 7f);
				}
				iVar4 = func_61(iParam0, 7);
				if (iVar4 == 3)
				{
					fVar0 = (fVar0 + 12f);
				}
				else if (iVar4 == 2)
				{
					fVar0 = (fVar0 + 9f);
				}
				else if (iVar4 == 1)
				{
					fVar0 = (fVar0 + 7f);
				}
				iVar4 = func_61(iParam0, 8);
				if (iVar4 == 3)
				{
					fVar0 = (fVar0 + 12f);
				}
				else if (iVar4 == 2)
				{
					fVar0 = (fVar0 + 9f);
				}
				else if (iVar4 == 1)
				{
					fVar0 = (fVar0 + 7f);
				}
				iVar4 = func_61(iParam0, 11);
				if (iVar4 == 3)
				{
					fVar0 = (fVar0 + 12f);
				}
				else if (iVar4 == 2)
				{
					fVar0 = (fVar0 + 9f);
				}
				else if (iVar4 == 1)
				{
					fVar0 = (fVar0 + 7f);
				}
			}
			break;
		
		case 7:
			if (iParam0 == 0)
			{
				unk_0xB734B6962B239811(joaat("SP0_DIST_WALK_ST"), &fVar1, -1);
				fVar0 = ((fVar1 - Global_111858.f_2359.f_539.f_2367[iParam0]) / 45f);
			}
			else if (iParam0 == 1)
			{
				unk_0xB734B6962B239811(joaat("SP1_DIST_WALK_ST"), &fVar1, -1);
				fVar0 = ((fVar1 - Global_111858.f_2359.f_539.f_2367[iParam0]) / 45f);
			}
			else if (iParam0 == 2)
			{
				unk_0xB734B6962B239811(joaat("SP2_DIST_WALK_ST"), &fVar1, -1);
				fVar0 = ((fVar1 - Global_111858.f_2359.f_539.f_2367[iParam0]) / 45f);
			}
			else if (iParam0 == 3)
			{
				fVar0 = (func_68(19, iParam3) / 45f);
			}
			if (iParam0 == 0)
			{
				unk_0xD2F202166691EDB2(joaat("SP0_KILLS_STEALTH"), &iVar3, -1);
				fVar0 = (fVar0 + ((to_float((iVar3 - Global_111858.f_2359.f_539.f_2371[iParam0])) / 2f) * 1.5f));
			}
			else if (iParam0 == 1)
			{
				unk_0xD2F202166691EDB2(joaat("SP1_KILLS_STEALTH"), &iVar3, -1);
				fVar0 = (fVar0 + ((to_float((iVar3 - Global_111858.f_2359.f_539.f_2371[iParam0])) / 2f) * 1.5f));
			}
			else if (iParam0 == 2)
			{
				unk_0xD2F202166691EDB2(joaat("SP2_KILLS_STEALTH"), &iVar3, -1);
				fVar0 = (fVar0 + ((to_float((iVar3 - Global_111858.f_2359.f_539.f_2371[iParam0])) / 2f) * 1.5f));
			}
			else if (iParam0 == 3)
			{
				iVar3 = func_70(34, iParam3, 0);
				fVar0 = (fVar0 + ((to_float(iVar3) / 2f) * 1.5f));
				func_65(&fVar0);
			}
			break;
		
		case 6:
			if (iParam0 == 0)
			{
				unk_0xD2F202166691EDB2(joaat("SP0_HITS_MISSION"), &iVar5, -1);
				unk_0xD2F202166691EDB2(joaat("SP0_HITS_PEDS_VEHICLES"), &iVar6, -1);
				iVar6 = (iVar6 - iVar5);
				fVar0 = (to_float((iVar5 - Global_111858.f_2359.f_539.f_2375[iParam0])) / 40f);
				fVar0 = (fVar0 + (to_float((iVar6 - Global_111858.f_2359.f_539.f_2379[iParam0])) / 80f));
			}
			else if (iParam0 == 1)
			{
				unk_0xD2F202166691EDB2(joaat("SP1_HITS_MISSION"), &iVar5, -1);
				unk_0xD2F202166691EDB2(joaat("SP1_HITS_PEDS_VEHICLES"), &iVar6, -1);
				iVar6 = (iVar6 - iVar5);
				fVar0 = (to_float((iVar5 - Global_111858.f_2359.f_539.f_2375[iParam0])) / 40f);
				fVar0 = (fVar0 + (to_float((iVar6 - Global_111858.f_2359.f_539.f_2379[iParam0])) / 80f));
			}
			else if (iParam0 == 2)
			{
				unk_0xD2F202166691EDB2(joaat("SP2_HITS_MISSION"), &iVar5, -1);
				unk_0xD2F202166691EDB2(joaat("SP2_HITS_PEDS_VEHICLES"), &iVar6, -1);
				iVar6 = (iVar6 - iVar5);
				fVar0 = (to_float((iVar5 - Global_111858.f_2359.f_539.f_2375[iParam0])) / 40f);
				fVar0 = (fVar0 + (to_float((iVar6 - Global_111858.f_2359.f_539.f_2379[iParam0])) / 80f));
			}
			else if (iParam0 == 3)
			{
				iVar6 = func_70(171, iParam3, 0);
				fVar0 = (fVar0 + (to_float(iVar6) / 80f));
			}
			if ((iParam0 == 0 || iParam0 == 1) || iParam0 == 2)
			{
				iVar7 = 0;
				while (iVar7 < 22)
				{
					switch (func_60(iVar7, iParam0))
					{
						case 3:
							iVar8++;
							break;
						
						case 2:
							iVar9++;
							break;
						
						case 1:
							iVar10++;
							break;
					}
					iVar7++;
				}
				fVar0 = (fVar0 + IntToFloat(iVar8 * 3));
				fVar0 = (fVar0 + IntToFloat(iVar9 * 2));
				fVar0 = (fVar0 + IntToFloat(iVar10 * 1));
			}
			else if (iParam0 == 3)
			{
				fVar0 = (fVar0 + IntToFloat(func_59(joaat("MPPLY_SHOOTINGRANGE_WINS")) * 1));
				func_65(&fVar0);
			}
			break;
	}
	if (iParam1 != 0)
	{
		iVar11 = func_53(iParam0, iParam1, iParam3);
		fVar0 = (fVar0 + IntToFloat(iVar11));
		fVar0 = (fVar0 + IntToFloat(func_58(iParam0, iParam1, iParam3)));
	}
	if (bParam2)
	{
		fVar12 = (fVar0 - (fVar0 % IntToFloat(func_51(iParam0, iParam1))));
		if ((fVar0 % IntToFloat(func_51(iParam0, iParam1))) >= 0f)
		{
			fVar12 = (fVar12 + IntToFloat(func_51(iParam0, iParam1)));
		}
		if (fVar0 >= fVar12)
		{
			fVar0 = fVar12;
		}
		else
		{
			fVar0 = (fVar12 - IntToFloat(func_51(iParam0, iParam1)));
		}
	}
	iVar2 = floor(fVar0);
	iVar2 = func_69(iVar2, 0, 100);
	return iVar2;
}

int func_58(int iParam0, int iParam1, int iParam2)
{
	switch (iParam0)
	{
		case 0:
		case 1:
		case 2:
			switch (iParam1)
			{
				case 1:
				case 3:
				case 2:
				case 4:
				case 5:
				case 6:
				case 7:
					return Global_111858.f_2359.f_539.f_2247[iParam1 /*4*/][iParam0];
					break;
			}
			break;
		
		case 3:
			switch (iParam1)
			{
				case 1:
					return func_70(72, iParam2, 0);
					break;
				
				case 3:
					return func_70(74, iParam2, 0);
					break;
				
				case 2:
					return func_70(73, iParam2, 0);
					break;
				
				case 4:
					return func_70(75, iParam2, 0);
					break;
				
				case 5:
					return func_70(76, iParam2, 0);
					break;
				
				case 6:
					return func_70(77, iParam2, 0);
					break;
				
				case 7:
					return func_70(78, iParam2, 0);
					break;
			}
			break;
	}
	return 0;
}

int func_59(int iParam0)
{
	int iVar0;
	var uVar1;
	
	iVar0 = iParam0;
	if (unk_0xD2F202166691EDB2(iVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

int func_60(int iParam0, int iParam1)
{
	return Global_111858.f_19143[iParam1 /*271*/].f_3[iParam0 /*12*/].f_3;
}

int func_61(int iParam0, int iParam1)
{
	if (iParam0 < 0 || iParam0 > 2)
	{
		return 0;
	}
	return Global_111858.f_1984[iParam0 /*121*/][iParam1 /*10*/].f_8;
}

int func_62(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = (iVar0 + (unk_0x9C27B1930FF63156(iParam0) * 86400));
	iVar0 = (iVar0 + unk_0x053F950BA67B1356(iParam0) * 3600);
	iVar0 = (iVar0 + unk_0x8F81D26EC430B987(iParam0) * 60);
	iVar0 = (iVar0 + unk_0x813C198E5D09168B(iParam0));
	return iVar0;
}

int func_63(int iParam0, int iParam1)
{
	return Global_2551832[iParam0 /*3*/][func_5(iParam1)];
}

int func_64(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = (iVar0 + unk_0x9C27B1930FF63156(iParam0) * 1440);
	iVar0 = (iVar0 + unk_0x053F950BA67B1356(iParam0) * 60);
	iVar0 = (iVar0 + unk_0x8F81D26EC430B987(iParam0));
	return iVar0;
}

var func_65(float fParam0)
{
	if (func_46())
	{
		if (func_66() < Global_262145.f_12703)
		{
			if (*fParam0 + (IntToFloat(func_66()) * Global_262145.f_12702)) <= IntToFloat(Global_262145.f_12712)
			{
				*fParam0 = (*fParam0 + (IntToFloat(func_66()) * Global_262145.f_12702));
			}
		}
		return *fParam0;
	}
	return *fParam0;
}

int func_66()
{
	if (func_49(1))
	{
		return Global_1590682[func_67() /*883*/].f_211.f_6;
	}
	return 0;
}

int func_67()
{
	return Global_1630317[unk_0x460153A63B9477BC() /*595*/].f_11;
}

float func_68(int iParam0, int iParam1)
{
	int iVar0;
	var uVar1;
	
	iVar0 = Global_2587146[iParam0 /*3*/][func_5(iParam1)];
	if (unk_0xB734B6962B239811(iVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0f;
}

int func_69(int iParam0, int iParam1, int iParam2)
{
	if (iParam0 > iParam2)
	{
		return iParam2;
	}
	else if (iParam0 < iParam1)
	{
		return iParam1;
	}
	return iParam0;
}

int func_70(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	var uVar1;
	
	if (iParam0 != 11771)
	{
		if (iParam2 == 0)
		{
		}
		iVar0 = Global_2551832[iParam0 /*3*/][func_5(iParam1)];
		if (unk_0xD2F202166691EDB2(iVar0, &uVar1, -1))
		{
			return uVar1;
		}
	}
	return 0;
}

void func_71(int iParam0, int iParam1, var uParam2, var uParam3)
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					*uParam2 = joaat("SP0_SPECIAL_ABILITY_UNLOCKED");
					break;
				
				case 1:
					*uParam2 = joaat("SP0_STAMINA");
					break;
				
				case 3:
					*uParam2 = joaat("SP0_LUNG_CAPACITY");
					break;
				
				case 2:
					*uParam2 = joaat("SP0_STRENGTH");
					break;
				
				case 4:
					*uParam2 = joaat("SP0_WHEELIE_ABILITY");
					break;
				
				case 5:
					*uParam2 = joaat("SP0_FLYING_ABILITY");
					break;
				
				case 6:
					*uParam2 = joaat("SP0_SHOOTING_ABILITY");
					break;
				
				case 7:
					*uParam2 = joaat("SP0_STEALTH_ABILITY");
					break;
			}
			break;
		
		case 1:
			switch (iParam1)
			{
				case 0:
					*uParam2 = joaat("SP1_SPECIAL_ABILITY_UNLOCKED");
					break;
				
				case 1:
					*uParam2 = joaat("SP1_STAMINA");
					break;
				
				case 3:
					*uParam2 = joaat("SP1_LUNG_CAPACITY");
					break;
				
				case 2:
					*uParam2 = joaat("SP1_STRENGTH");
					break;
				
				case 4:
					*uParam2 = joaat("SP1_WHEELIE_ABILITY");
					break;
				
				case 5:
					*uParam2 = joaat("SP1_FLYING_ABILITY");
					break;
				
				case 6:
					*uParam2 = joaat("SP1_SHOOTING_ABILITY");
					break;
				
				case 7:
					*uParam2 = joaat("SP1_STEALTH_ABILITY");
					break;
			}
			break;
		
		case 2:
			switch (iParam1)
			{
				case 0:
					*uParam2 = joaat("SP2_SPECIAL_ABILITY_UNLOCKED");
					break;
				
				case 1:
					*uParam2 = joaat("SP2_STAMINA");
					break;
				
				case 3:
					*uParam2 = joaat("SP2_LUNG_CAPACITY");
					break;
				
				case 2:
					*uParam2 = joaat("SP2_STRENGTH");
					break;
				
				case 4:
					*uParam2 = joaat("SP2_WHEELIE_ABILITY");
					break;
				
				case 5:
					*uParam2 = joaat("SP2_FLYING_ABILITY");
					break;
				
				case 6:
					*uParam2 = joaat("SP2_SHOOTING_ABILITY");
					break;
				
				case 7:
					*uParam2 = joaat("SP2_STEALTH_ABILITY");
					break;
			}
			break;
		
		case 3:
			switch (iParam1)
			{
				case 0:
					*uParam3 = 64;
					break;
				
				case 1:
					*uParam3 = 65;
					break;
				
				case 3:
					*uParam3 = 67;
					break;
				
				case 2:
					*uParam3 = 66;
					break;
				
				case 4:
					*uParam3 = 68;
					break;
				
				case 5:
					*uParam3 = 69;
					break;
				
				case 6:
					*uParam3 = 70;
					break;
				
				case 7:
					*uParam3 = 71;
					break;
			}
			break;
	}
}

int func_72()
{
	if (!unk_0x25DDB354A40FFCDB())
	{
		return Global_96433.f_44 == 1;
	}
	return 0;
}

bool func_73(int iParam0)
{
	return iParam0 < 3;
}

void func_74(int iParam0, int iParam1)
{
	int iVar0;
	float fVar1;
	int iVar2;
	int iVar3;
	
	if (((iParam0 != 0 || iParam0 != 1) || iParam0 != 2) || iParam0 != 3)
	{
		return;
	}
	func_71(iParam0, iParam1, &iVar2, &iVar3);
	if (unk_0x25DDB354A40FFCDB())
	{
		iVar0 = func_70(iVar3, -1, 0);
	}
	else
	{
		unk_0xD2F202166691EDB2(iVar2, &iVar0, -1);
	}
	switch (iParam1)
	{
		case 2:
			fVar1 = (0.8f + (0.4f * (to_float(iVar0) / 100f)));
			unk_0x5D3F0C0523D3F11D(unk_0x460153A63B9477BC(), fVar1, 1);
			break;
		
		case 7:
			if (unk_0x7B70881748D166CD(joaat("armenian3")) != 0 || unk_0x7B70881748D166CD(joaat("trevor3")) != 0)
			{
				Global_96238 = 1;
			}
			else
			{
				fVar1 = (1f - (to_float(iVar0) / 100f));
				unk_0x2E8D60D137C4350A(unk_0x460153A63B9477BC(), fVar1);
				unk_0x9EBFE808FBF640D7(unk_0x460153A63B9477BC(), fVar1);
				unk_0xB790930E399DDA41(unk_0x460153A63B9477BC(), fVar1);
			}
			break;
	}
}

int func_75(int iParam0)
{
	if (Global_41631 == 15)
	{
		return 0;
	}
	if (func_76(iParam0))
	{
		return 0;
	}
	return 1;
}

bool func_76(int iParam0)
{
	return func_77(iParam0, Global_41631);
}

int func_77(int iParam0, int iParam1)
{
	if (iParam1 == 15)
	{
		return 1;
	}
	if (iParam0 == 15)
	{
		return 0;
	}
	switch (iParam0)
	{
		case 16:
			switch (iParam1)
			{
				case 9:
				case 10:
				case 7:
				case 13:
				case 14:
					return 0;
					break;
			}
			return 1;
			break;
		
		case 0:
			switch (iParam1)
			{
				case 5:
				case 17:
					return 1;
					break;
			}
			break;
		
		case 2:
		case 3:
			switch (iParam1)
			{
				case 5:
				case 6:
				case 8:
				case 17:
					return 1;
					break;
			}
			break;
		
		case 4:
			if (iParam1 == 17)
			{
				return 1;
			}
			break;
		
		case 5:
			break;
		
		case 6:
		case 8:
			if (iParam1 == 5)
			{
				return 1;
			}
			break;
		
		case 7:
			if (iParam1 == 6)
			{
				return 1;
			}
			break;
		
		case 9:
			if (iParam1 == 5)
			{
				return 1;
			}
			break;
		
		case 10:
			switch (iParam1)
			{
				case 5:
				case 6:
				case 17:
					return 1;
					break;
			}
			break;
		
		case 11:
			if (iParam1 == 5)
			{
				return 1;
			}
			break;
		
		case 17:
			switch (iParam1)
			{
				case 17:
				case 12:
				case 5:
					return 1;
					break;
			}
			break;
		
		case 18:
		case 12:
			switch (iParam1)
			{
				case 5:
				case 6:
				case 8:
					return 1;
					break;
			}
			break;
		
		case 13:
			switch (iParam1)
			{
				case 5:
					return 1;
					break;
			}
			break;
		
		case 14:
			switch (iParam1)
			{
				case 5:
					return 1;
					break;
			}
			break;
	}
	return 0;
}

void func_78()
{
	func_83();
	func_82();
	func_79();
}

void func_79()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!iLocal_80)
	{
		if (iLocal_58 == 3)
		{
			if (Global_2097152[func_81() /*10931*/].f_6175.f_7)
			{
				iLocal_77 = func_62(func_63(147, -1));
				Global_2097152[func_81() /*10931*/].f_6175.f_7 = 0;
			}
			else
			{
				iLocal_77 = Global_2097152[func_81() /*10931*/].f_6175.f_6;
			}
			if (Global_2097152[func_81() /*10931*/].f_6175.f_4 == 0)
			{
				Global_2097152[func_81() /*10931*/].f_6175.f_4 = unk_0x5A002C4821A13338();
			}
			iLocal_79 = Global_2097152[func_81() /*10931*/].f_6175.f_4;
			iLocal_78 = Global_2097152[func_81() /*10931*/].f_6175.f_5;
		}
		else
		{
			if (Global_111858.f_2359.f_539.f_2292[iLocal_58])
			{
				switch (iLocal_58)
				{
					case 0:
						iLocal_77 = func_62(joaat("SP0_TOTAL_WHEELIE_TIME"));
						break;
					
					case 1:
						iLocal_77 = func_62(joaat("SP1_TOTAL_WHEELIE_TIME"));
						break;
					
					case 2:
						iLocal_77 = func_62(joaat("SP2_TOTAL_WHEELIE_TIME"));
						break;
				}
				Global_111858.f_2359.f_539.f_2292[iLocal_58] = 0;
			}
			else
			{
				iLocal_77 = Global_111858.f_2359.f_539.f_2288[iLocal_58];
			}
			if (Global_111858.f_2359.f_539.f_2280[iLocal_58] == 0)
			{
				Global_111858.f_2359.f_539.f_2280[iLocal_58] = unk_0x5A002C4821A13338();
			}
			iLocal_79 = Global_111858.f_2359.f_539.f_2280[iLocal_58];
			iLocal_78 = Global_111858.f_2359.f_539.f_2284[iLocal_58];
		}
		iLocal_80 = 1;
		iLocal_81 = 1;
	}
	else if ((unk_0x5A002C4821A13338() - iLocal_79) > 86400)
	{
		iLocal_80 = 0;
		iLocal_81 = 0;
		iLocal_79 = unk_0x5A002C4821A13338();
		iLocal_78 = 0;
		if (iLocal_58 == 3)
		{
			Global_2097152[func_81() /*10931*/].f_6175.f_7 = 1;
		}
		else
		{
			Global_111858.f_2359.f_539.f_2292[iLocal_58] = 1;
		}
	}
	if (iLocal_81)
	{
		switch (iLocal_58)
		{
			case 0:
				iVar0 = func_62(joaat("SP0_TOTAL_WHEELIE_TIME"));
				break;
			
			case 1:
				iVar0 = func_62(joaat("SP1_TOTAL_WHEELIE_TIME"));
				break;
			
			case 2:
				iVar0 = func_62(joaat("SP2_TOTAL_WHEELIE_TIME"));
				break;
			
			case 3:
				iVar0 = func_62(func_63(147, -1));
				break;
		}
		iVar1 = (iVar0 - iLocal_77);
		iVar2 = (floor((to_float(iVar1) / 15f)) - iLocal_78);
		if (iVar2 > 0)
		{
			func_80(iLocal_58, 4, iVar2);
			iLocal_78 = (iLocal_78 + iVar2);
		}
		if (iVar0 > (iLocal_77 + (unk_0xFD4F66ED3A6F0B81() / 1000) * 60))
		{
			iLocal_81 = 0;
		}
	}
	if (iLocal_58 == 3)
	{
		Global_2097152[func_81() /*10931*/].f_6175.f_4 = iLocal_79;
		Global_2097152[func_81() /*10931*/].f_6175.f_5 = iLocal_78;
	}
	else
	{
		Global_111858.f_2359.f_539.f_2280[iLocal_58] = iLocal_79;
		Global_111858.f_2359.f_539.f_2284[iLocal_58] = iLocal_78;
	}
}

void func_80(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	
	switch (iParam0)
	{
		case 0:
		case 1:
		case 2:
			Global_111858.f_2359.f_539.f_2247[iParam1 /*4*/][iParam0] = (Global_111858.f_2359.f_539.f_2247[iParam1 /*4*/][iParam0] + iParam2);
			break;
		
		case 3:
			iVar1 = 11771;
			switch (iParam1)
			{
				case 1:
					iVar1 = 72;
					break;
				
				case 3:
					iVar1 = 74;
					break;
				
				case 2:
					iVar1 = 73;
					break;
				
				case 4:
					iVar1 = 75;
					break;
				
				case 5:
					iVar1 = 76;
					break;
				
				case 6:
					iVar1 = 77;
					break;
				
				case 7:
					iVar1 = 78;
					break;
			}
			if (iVar1 != 11771)
			{
				iVar0 = func_70(iVar1, -1, 0);
				iVar0 = (iVar0 + iParam2);
				if (iVar0 > 100)
				{
					iVar0 = 100;
				}
				func_55(iVar1, iVar0, -1, 1, 0);
			}
			break;
	}
}

int func_81()
{
	int iVar0;
	
	iVar0 = 0;
	return iVar0;
}

void func_82()
{
	bool bVar0;
	int iVar1;
	int iVar2;
	
	if (iLocal_74)
	{
		bVar0 = true;
		if (!unk_0x5AEB5DDFFAD43CA5(unk_0x9B0761B4C3EB8BC7()) && unk_0x47DBF174A0CB9D55(unk_0x9B0761B4C3EB8BC7(), false))
		{
			iVar1 = unk_0xB0919F8F7C8097BD(unk_0x9B0761B4C3EB8BC7());
			if ((((unk_0xAE06B9E39EBDE049(iVar1) && unk_0x80FF6C016CDB0FAF(iVar1, 0)) && !unk_0xA16974805191D19C(iVar1)) && unk_0x10D3F7E169A49C44(iVar1, -1, 0) == unk_0x9B0761B4C3EB8BC7()) && (unk_0x97AFEF6099069369(unk_0x36FE6D3220816ADA(iVar1)) || unk_0xB86B8E85030B1552(unk_0x36FE6D3220816ADA(iVar1))))
			{
				bVar0 = false;
				if (unk_0xF3A639BEE7AADF55(iVar1) >= 53f)
				{
					func_80(iLocal_58, 4, 2);
					bVar0 = true;
				}
			}
		}
		if (bVar0)
		{
			iLocal_74 = 0;
			iLocal_75 = unk_0x578C4EF320340AF7();
			if (unk_0x25DDB354A40FFCDB())
			{
				iLocal_76 = unk_0x6CAAB7E78B5D978A();
			}
		}
	}
	else if (!unk_0x5AEB5DDFFAD43CA5(unk_0x9B0761B4C3EB8BC7()) && unk_0x47DBF174A0CB9D55(unk_0x9B0761B4C3EB8BC7(), false))
	{
		iVar2 = unk_0xB0919F8F7C8097BD(unk_0x9B0761B4C3EB8BC7());
		if (((unk_0xAE06B9E39EBDE049(iVar2) && unk_0x80FF6C016CDB0FAF(iVar2, 0)) && unk_0xF3A639BEE7AADF55(iVar2) < 20f) && !unk_0xA16974805191D19C(iVar2))
		{
			if ((!unk_0x25DDB354A40FFCDB() && (unk_0x578C4EF320340AF7() - iLocal_75) > 10000) || (unk_0x25DDB354A40FFCDB() && unk_0x8B4402A4BB3C8EFC(unk_0x6CAAB7E78B5D978A(), unk_0x8C358101651A3F7C(iLocal_76, 10000))))
			{
				iLocal_74 = 1;
			}
		}
	}
}

void func_83()
{
	bool bVar0;
	int iVar1;
	char cVar2[64];
	
	bVar0 = false;
	if (unk_0x47DBF174A0CB9D55(unk_0x9B0761B4C3EB8BC7(), false))
	{
		iVar1 = unk_0xA5D5B1042E8F47BD(unk_0x9B0761B4C3EB8BC7(), false);
		if (((unk_0xAE06B9E39EBDE049(iVar1) && unk_0x80FF6C016CDB0FAF(iVar1, 0)) && unk_0x10D3F7E169A49C44(iVar1, -1, 0) == unk_0x9B0761B4C3EB8BC7()) && (((unk_0xB86B8E85030B1552(unk_0x36FE6D3220816ADA(iVar1)) || unk_0x97AFEF6099069369(unk_0x36FE6D3220816ADA(iVar1))) || unk_0x72B9CC2155AEDF58(unk_0x36FE6D3220816ADA(iVar1))) || unk_0x0CE6C9C2E6F95026(unk_0x36FE6D3220816ADA(iVar1))))
		{
			if (iLocal_66)
			{
				if (!unk_0xA16974805191D19C(iVar1))
				{
					if ((!unk_0x25DDB354A40FFCDB() && (unk_0x578C4EF320340AF7() - iLocal_68) > 1500) || (unk_0x25DDB354A40FFCDB() && unk_0x8B4402A4BB3C8EFC(unk_0x6CAAB7E78B5D978A(), unk_0x8C358101651A3F7C(iLocal_69, 1500))))
					{
						iLocal_70 = unk_0x578C4EF320340AF7();
						if (unk_0x25DDB354A40FFCDB())
						{
							iLocal_71 = unk_0x6CAAB7E78B5D978A();
						}
						iLocal_67 = 1;
					}
					iLocal_66 = 0;
				}
			}
			if (iLocal_67)
			{
				if (!unk_0xA16974805191D19C(iVar1))
				{
					if (unk_0xFEB73FC16397E7DC(iVar1))
					{
						if ((((!unk_0x25DDB354A40FFCDB() && (unk_0x578C4EF320340AF7() - iLocal_70) > 20) || (!unk_0x25DDB354A40FFCDB() && (unk_0x578C4EF320340AF7() - iLocal_70) == 0)) || (unk_0x25DDB354A40FFCDB() && unk_0x8B4402A4BB3C8EFC(unk_0x6CAAB7E78B5D978A(), unk_0x8C358101651A3F7C(iLocal_71, 20)))) || (unk_0x25DDB354A40FFCDB() && unk_0xEB0A63F08EC049F2(unk_0x6CAAB7E78B5D978A(), iLocal_71)))
						{
						}
						else
						{
							func_80(iLocal_58, 4, 1);
						}
						StringCopy(&cVar2, "Player landed on all wheels in ", 64);
						StringIntConCat(&cVar2, (unk_0x578C4EF320340AF7() - iLocal_70), 64);
						StringConCat(&cVar2, "ms", 64);
						bVar0 = true;
					}
				}
				else
				{
					bVar0 = true;
				}
			}
			if (!iLocal_66 && !iLocal_67)
			{
				if ((!unk_0x25DDB354A40FFCDB() && (unk_0x578C4EF320340AF7() - iLocal_72) > 1000) || (unk_0x25DDB354A40FFCDB() && unk_0x8B4402A4BB3C8EFC(unk_0x6CAAB7E78B5D978A(), unk_0x8C358101651A3F7C(iLocal_73, 1000))))
				{
					if (unk_0xA16974805191D19C(iVar1))
					{
						if (!iLocal_66)
						{
							iLocal_68 = unk_0x578C4EF320340AF7();
							if (unk_0x25DDB354A40FFCDB())
							{
								iLocal_69 = unk_0x6CAAB7E78B5D978A();
							}
							iLocal_66 = 1;
						}
					}
				}
			}
		}
		else if (iLocal_66 || iLocal_67)
		{
			bVar0 = true;
		}
	}
	else if (iLocal_66 || iLocal_67)
	{
		bVar0 = true;
	}
	if (bVar0)
	{
		iLocal_72 = unk_0x578C4EF320340AF7();
		if (unk_0x25DDB354A40FFCDB())
		{
			iLocal_73 = unk_0x6CAAB7E78B5D978A();
		}
		iLocal_66 = 0;
		iLocal_67 = 0;
	}
}

bool func_84(int iParam0)
{
	return (Global_110943 && iParam0) != 0;
}

int func_85()
{
	func_86();
	return Global_111858.f_2359.f_539.f_4321;
}

void func_86()
{
	int iVar0;
	
	if (unk_0xAE06B9E39EBDE049(unk_0x9B0761B4C3EB8BC7()))
	{
		if (func_88(Global_111858.f_2359.f_539.f_4321) != unk_0x36FE6D3220816ADA(unk_0x9B0761B4C3EB8BC7()))
		{
			iVar0 = func_87(unk_0x9B0761B4C3EB8BC7());
			if (func_73(iVar0) && (!func_54(14) || Global_110809))
			{
				if (Global_111858.f_2359.f_539.f_4321 != iVar0 && func_73(Global_111858.f_2359.f_539.f_4321))
				{
					Global_111858.f_2359.f_539.f_4322 = Global_111858.f_2359.f_539.f_4321;
				}
				Global_111858.f_2359.f_539.f_4323 = iVar0;
				Global_111858.f_2359.f_539.f_4321 = iVar0;
				return;
			}
		}
		else
		{
			if (Global_111858.f_2359.f_539.f_4321 != 145)
			{
				Global_111858.f_2359.f_539.f_4323 = Global_111858.f_2359.f_539.f_4321;
			}
			return;
		}
	}
	Global_111858.f_2359.f_539.f_4321 = 145;
}

int func_87(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0xAE06B9E39EBDE049(iParam0))
	{
		iVar1 = unk_0x36FE6D3220816ADA(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_88(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_88(int iParam0)
{
	if (func_73(iParam0))
	{
		return func_89(iParam0);
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

var func_89(int iParam0)
{
	return Global_1848[iParam0 /*29*/];
}

void func_90()
{
	char* sVar0;
	int iVar1;
	
	if (iLocal_61)
	{
		if (iLocal_62 != iLocal_58)
		{
			iLocal_61 = 0;
			return;
		}
		sVar0 = "CHAR_DEFAULT";
		switch (iLocal_62)
		{
			case 0:
				sVar0 = "CHAR_MICHAEL";
				break;
			
			case 1:
				sVar0 = "CHAR_FRANKLIN";
				break;
			
			case 2:
				sVar0 = "CHAR_TREVOR";
				break;
			
			case 3:
				iVar1 = func_93(unk_0x460153A63B9477BC());
				if (iVar1 == 0)
				{
					return;
				}
				else
				{
					sVar0 = unk_0x3EF2973864CBE5FC(iVar1);
				}
				break;
		}
		unk_0x5B8DD855EAFD33B5("PS_UPDATE");
		unk_0x42710E9E08FA375A(iLocal_65);
		unk_0xB04D76E97C52CE13(func_92(iLocal_63), func_91(iLocal_63), iLocal_64, (iLocal_65 - iLocal_64), 0, sVar0, sVar0);
		iLocal_82 = 1;
		iLocal_83 = unk_0x578C4EF320340AF7() + 5000;
		if (unk_0x25DDB354A40FFCDB())
		{
			iLocal_84 = unk_0x8C358101651A3F7C(unk_0x6CAAB7E78B5D978A(), 5000);
		}
		iLocal_61 = 0;
	}
}

int func_91(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 23;
			break;
		
		case 1:
			return 2;
			break;
		
		case 3:
			return 24;
			break;
		
		case 2:
			return 25;
			break;
		
		case 4:
			return 14;
			break;
		
		case 5:
			return 27;
			break;
		
		case 6:
			return 17;
			break;
		
		case 7:
			return 28;
			break;
	}
	return -1;
}

char* func_92(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "PSF_SPEC_AB";
			break;
		
		case 1:
			return "PSF_STAMINA";
			break;
		
		case 3:
			return "PSF_LUNG";
			break;
		
		case 2:
			return "PSF_STRENGTH";
			break;
		
		case 4:
			return "PSF_DRIVING";
			break;
		
		case 5:
			return "PSF_FLYING";
			break;
		
		case 6:
			return "PSF_SHOOTING";
			break;
		
		case 7:
			return "PSF_STEALTH";
			break;
	}
	return "ERROR";
}

int func_93(int iParam0)
{
	int iVar0;
	
	iVar0 = func_96(iParam0);
	if (iVar0 == -1)
	{
		func_94(iParam0, 1);
		return 0;
	}
	Global_1389221[iVar0 /*5*/].f_4 = 1;
	return Global_1389221[iVar0 /*5*/].f_2;
}

void func_94(int iParam0, bool bParam1)
{
	if (!func_19(iParam0, 0, 1))
	{
		return;
	}
	if (func_96(iParam0) != -1)
	{
		return;
	}
	if (Global_1389384)
	{
		if (iParam0 == Global_1389384.f_1)
		{
			return;
		}
	}
	if (func_95(iParam0))
	{
		return;
	}
	if (Global_1389422 >= 32)
	{
		return;
	}
	Global_1389389[Global_1389422] = iParam0;
	Global_1389422++;
	if (bParam1)
	{
	}
}

int func_95(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_1389422)
	{
		if (Global_1389389[iVar0] == iParam0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_96(int iParam0)
{
	int iVar0;
	
	if (!func_19(iParam0, 0, 1))
	{
		return -1;
	}
	if (Global_1389382 == 0)
	{
		return -1;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_1389382)
	{
		if (Global_1389221[iVar0 /*5*/].f_1 == iParam0)
		{
			if (unk_0x3F2B70A051A32606(Global_1389221[iVar0 /*5*/].f_2) && unk_0xCA635244223E5D25(Global_1389221[iVar0 /*5*/].f_2))
			{
				return iVar0;
			}
			func_97(iVar0);
			return -1;
		}
		iVar0++;
	}
	return -1;
}

void func_97(int iParam0)
{
	char cVar0[64];
	char cVar1[64];
	int iVar2;
	int iVar3;
	
	if (iParam0 >= Global_1389382)
	{
		return;
	}
	if (unk_0x3F2B70A051A32606(Global_1389221[iParam0 /*5*/].f_2))
	{
		StringCopy(&cVar0, "CHAR_DEFAULT", 64);
		if (Global_1389221[iParam0 /*5*/].f_2 != 0)
		{
			StringCopy(&cVar1, unk_0x3EF2973864CBE5FC(Global_1389221[iParam0 /*5*/].f_2), 64);
			unk_0xC16699C9E79C9231(&cVar1, &cVar1, &cVar0, &cVar0);
		}
		unk_0x709B7208105825BB(Global_1389221[iParam0 /*5*/].f_2);
	}
	iVar2 = iParam0;
	iVar3 = iVar2 + 1;
	while (iVar3 < Global_1389382)
	{
		Global_1389221[iVar2 /*5*/] = { Global_1389221[iVar3 /*5*/] };
		iVar2++;
		iVar3++;
	}
	func_98(&(Global_1389221[iVar2 /*5*/]));
	Global_1389382 = (Global_1389382 - 1);
}

void func_98(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = func_11();
	uParam0->f_2 = 0;
	uParam0->f_4 = 0;
	if (unk_0x25DDB354A40FFCDB())
	{
		uParam0->f_3 = unk_0x6CAAB7E78B5D978A();
	}
}

void func_99()
{
	float fVar0;
	int iVar1;
	
	if (unk_0xB9D6B1BA2EE681C0() != 1)
	{
		return;
	}
	if (unk_0x25DDB354A40FFCDB())
	{
		if (!func_103(unk_0x460153A63B9477BC()))
		{
			return;
		}
		if (func_102() != 0)
		{
			return;
		}
	}
	if (unk_0x25DDB354A40FFCDB())
	{
		if (func_102() == 0)
		{
			iLocal_53 = 1;
		}
	}
	else
	{
		iLocal_53 = 0;
	}
	if (!func_101())
	{
		func_100();
	}
	iLocal_55 = 0;
	iLocal_56 = 0;
	if (unk_0x25DDB354A40FFCDB())
	{
		iLocal_57 = unk_0x6CAAB7E78B5D978A();
	}
	iLocal_72 = unk_0x578C4EF320340AF7();
	if (unk_0x25DDB354A40FFCDB())
	{
		iLocal_73 = unk_0x6CAAB7E78B5D978A();
	}
	if (unk_0x25DDB354A40FFCDB())
	{
		if (!unk_0xCE990E643CD9D0E5(Global_2097152[func_81() /*10931*/].f_6175.f_1273, 2))
		{
			fVar0 = (to_float(func_70(192, -1, 0)) / 20f);
			iVar1 = floor(fVar0);
			iVar1 = func_69(iVar1, 0, 100);
			func_80(3, 2, iVar1);
			unk_0xBE20AB8238688965(&(Global_2097152[func_81() /*10931*/].f_6175.f_1273), 2);
		}
	}
	bLocal_59 = true;
	iLocal_54 = 1;
}

void func_100()
{
	int iVar0;
	var uVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	var uVar6;
	
	if (unk_0x25DDB354A40FFCDB())
	{
		iVar0 = 0;
		while (iVar0 < 8)
		{
			if (iVar0 != 0)
			{
				func_71(3, iVar0, &uVar1, &iVar2);
				func_55(iVar2, func_53(3, iVar0, -1), -1, 1, 0);
			}
			iVar0++;
		}
		func_4(0, 1, -1, 1);
		Global_96237 = 1;
	}
	else
	{
		iVar3 = 0;
		while (iVar3 < 3)
		{
			iVar4 = 0;
			while (iVar4 < 8)
			{
				if (iVar4 != 0)
				{
					func_71(iVar3, iVar4, &iVar5, &uVar6);
					unk_0x6000E4684CB4330B(iVar5, func_53(iVar3, iVar4, -1), 1);
				}
				iVar4++;
			}
			iVar3++;
		}
		Global_111858.f_2359.f_539.f_2387[0] = func_53(0, 0, -1);
		Global_111858.f_2359.f_539.f_2387[1] = func_53(1, 0, -1);
		Global_111858.f_2359.f_539.f_2387[2] = func_53(2, 0, -1);
		Global_111858.f_2359.f_539.f_2354 = 1;
		Global_96237 = 1;
	}
}

int func_101()
{
	if (unk_0x25DDB354A40FFCDB())
	{
		return 1;
	}
	return Global_111858.f_2359.f_539.f_2354;
}

int func_102()
{
	return Global_30968;
}

int func_103(int iParam0)
{
	if (iParam0 == -1)
	{
		return 0;
	}
	else
	{
		return unk_0xCE990E643CD9D0E5(Global_2440049.f_1, iParam0);
	}
	return 1;
}

void func_104()
{
	if (iLocal_54 != 0 && iLocal_53 != 2)
	{
		if (iLocal_53 == 0)
		{
			if (unk_0x25DDB354A40FFCDB())
			{
				iLocal_53 = 2;
			}
			if (!func_101())
			{
				iLocal_53 = 2;
			}
		}
		else if (iLocal_53 == 1)
		{
			if ((!unk_0x25DDB354A40FFCDB() || !func_103(unk_0x460153A63B9477BC())) || func_102() != 0)
			{
				iLocal_53 = 2;
			}
		}
		if (iLocal_53 == 2)
		{
			iLocal_54 = 2;
		}
	}
}

