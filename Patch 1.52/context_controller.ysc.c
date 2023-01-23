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
	var uLocal_21 = 0;
	var uLocal_22 = 0;
	float fLocal_23 = 0f;
	float fLocal_24 = 0f;
	float fLocal_25 = 0f;
	var uLocal_26 = 0;
	var uLocal_27 = 0;
	float fLocal_28 = 0f;
	var uLocal_29 = 0;
	var uLocal_30 = 0;
	var uLocal_31 = 0;
	float fLocal_32 = 0f;
	float fLocal_33 = 0f;
	var uLocal_34 = 0;
	var uLocal_35 = 0;
	int iLocal_36 = 0;
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
	var uLocal_54 = 0;
	var uLocal_55 = 0;
	var uLocal_56 = 0;
	var uLocal_57 = 0;
	var uLocal_58 = 0;
	var uLocal_59 = 0;
	var uLocal_60 = 0;
	var uLocal_61 = 0;
	float fLocal_62 = 0f;
	var uLocal_63 = 0;
	var uLocal_64 = 0;
	var uLocal_65 = 0;
	var uLocal_66 = 0;
	var uLocal_67 = 0;
	var uLocal_68 = 0;
	var uLocal_69 = 0;
	var uLocal_70 = 0;
	var uLocal_71 = 0;
	var uLocal_72 = 0;
	var uLocal_73 = 0;
	var uLocal_74 = 0;
	var uLocal_75 = 0;
	var uLocal_76 = 0;
	var uLocal_77 = 0;
	var uLocal_78 = 0;
	var uLocal_79 = 0;
	var uLocal_80 = 0;
	var uLocal_81 = 0;
	bool bLocal_82 = 0;
	bool bLocal_83 = 0;
	bool bLocal_84 = 0;
	struct<4> Local_85 = { 0, 0, 0, 0 } ;
	struct<16> Local_86 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	int iLocal_87 = 0;
	int iLocal_88 = 0;
	int iLocal_89 = 0;
	int iLocal_90 = 0;
#endregion

void __EntryFunction__()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	bool bVar4;
	bool bVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	
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
	fLocal_28 = 0f;
	fLocal_32 = -0.0375f;
	fLocal_33 = 0.17f;
	iLocal_36 = 3;
	iLocal_40 = 1;
	iLocal_41 = 65;
	iLocal_42 = 49;
	iLocal_43 = 64;
	fLocal_62 = ((0.05f + 0.275f) - 0.01f);
	iLocal_90 = -1;
	if (unk_0x7B70881748D166CD(joaat("context_controller")) > 1)
	{
		unk_0xD39E529EBE5DB04F();
	}
	unk_0xDB4E5F36ED3505EE();
	iVar0 = 0;
	iVar1 = iVar0;
	settimera(0);
	Global_42550 = 0;
	func_39();
	StringCopy(&Global_42551, "CC_SUBSTR", 16);
	iVar2 = -1;
	iVar3 = -1;
	bVar4 = false;
	bVar5 = false;
	iVar6 = 0;
	iVar7 = -1;
	iVar8 = Global_76833;
	while (true)
	{
		if (Global_76833)
		{
			func_35();
		}
		else
		{
			func_33();
		}
		func_26();
		if (Global_76833 != iVar8)
		{
			func_25();
			func_39();
			iVar2 = -1;
			iVar8 = Global_76833;
			while (unk_0x9CC4D06F5338CA6B())
			{
				wait(2000);
			}
		}
		if (Global_42556)
		{
			if (Global_42558 > -1)
			{
				if (!Global_42356[Global_42558 /*32*/].f_6)
				{
					if (!func_23(Global_42558, 1))
					{
						Global_42558 = -1;
					}
				}
			}
		}
		if (func_19())
		{
			iVar2 = -1;
			func_25();
		}
		if (iVar2 > -1)
		{
			if (!Global_42556)
			{
				if (Global_42558 != iVar2)
				{
					if (func_18(Global_42558))
					{
						func_25();
						if (!Global_42356[iVar2 /*32*/].f_5 && Global_42356[iVar2 /*32*/])
						{
							if (!func_19())
							{
								if (!Global_42356[iVar2 /*32*/].f_7)
								{
									if (!Global_42356[iVar2 /*32*/].f_6)
									{
										if (!Global_42356[iVar2 /*32*/].f_12)
										{
											func_17(Global_42356[iVar2 /*32*/].f_8, Global_42356[iVar2 /*32*/].f_3);
										}
										else
										{
											func_16(Global_42356[iVar2 /*32*/].f_8, Global_42356[iVar2 /*32*/].f_13, Global_42356[iVar2 /*32*/].f_3, Global_42356[iVar2 /*32*/].f_30);
										}
										Global_42558 = iVar2;
									}
								}
							}
						}
					}
				}
			}
			else
			{
				func_25();
			}
		}
		else
		{
			func_25();
		}
		switch (iVar0)
		{
			case 0:
				iVar2 = func_15();
				if (unk_0xCC84ED0AF76B3545(2, 51))
				{
					iVar6 = 1;
				}
				if (!func_19())
				{
					if (iVar2 > -1 && iVar6)
					{
						if (unk_0x1BD7199394D7F19A(2, 51))
						{
							Global_42356[iVar2 /*32*/].f_4 = 1;
							Global_42356[iVar2 /*32*/].f_29 = 0;
							iVar7 = Global_42356[iVar2 /*32*/].f_1;
							iVar0 = 1;
							Global_42549 = 0;
						}
					}
				}
				else
				{
					iVar2 = -1;
				}
				if (iVar3 != iVar2)
				{
					if (iVar2 != -1)
					{
						if (!unk_0x7C4984752F886E92(unk_0x1FA7B77001D60F9D(unk_0x2639A2323BEA8CC6()), 1))
						{
							if (unk_0x47DBF174A0CB9D55(unk_0x1FA7B77001D60F9D(unk_0x2639A2323BEA8CC6()), 0))
							{
								if (unk_0xC6F4182B2D1E3EAD(0, 101))
								{
									bVar5 = true;
									unk_0x779660A9E5364C4D(0, 101, 1);
								}
								if (unk_0xC6F4182B2D1E3EAD(0, 74))
								{
									bVar4 = true;
									unk_0x779660A9E5364C4D(0, 74, 1);
								}
							}
						}
					}
					else
					{
						if (bVar5)
						{
							unk_0x047901495C0572C0(0, 101, 1);
							bVar5 = false;
						}
						if (bVar4)
						{
							unk_0x047901495C0572C0(0, 74, 1);
							bVar4 = false;
						}
					}
					iVar3 = iVar2;
				}
				break;
			
			case 1:
				if (iVar2 < 0 || func_14() == 0)
				{
					iVar0 = 0;
				}
				else
				{
					if (timera() > 5000)
					{
						Global_42356[iVar2 /*32*/].f_7 = 1;
						iVar0 = 0;
					}
					else if (func_13(iVar2))
					{
						iVar0 = 2;
					}
					if (!iVar7 == Global_42356[iVar2 /*32*/].f_1)
					{
						iVar0 = 0;
					}
					if (Global_42356[iVar2 /*32*/].f_7 || Global_42356[iVar2 /*32*/] == 0)
					{
						iVar0 = 0;
					}
				}
				break;
			
			case 2:
				if (Global_42549)
				{
					func_25();
				}
				if (unk_0x1BD7199394D7F19A(2, 51))
				{
					if (iVar2 > -1)
					{
						Global_42356[iVar2 /*32*/].f_29 = 0;
					}
				}
				if (Global_42550)
				{
					Global_42550 = 0;
					iVar0 = 0;
				}
				else if (iVar2 > -1)
				{
					if (!(Global_42356[iVar2 /*32*/].f_4 || Global_42356[iVar2 /*32*/].f_7))
					{
						Global_42550 = 0;
						iVar2 = -1;
					}
				}
				if (iVar2 > -1)
				{
					if (Global_42356[iVar2 /*32*/].f_7 || Global_42356[iVar2 /*32*/] == 0)
					{
						iVar2 = -1;
					}
				}
				if (iVar2 == -1)
				{
					iVar0 = 0;
					iVar6 = 0;
				}
				break;
		}
		if (iVar2 > -1)
		{
			unk_0x779660A9E5364C4D(0, 46, 1);
			unk_0x779660A9E5364C4D(0, 54, 1);
		}
		if (iVar0 != iVar1)
		{
			iVar1 = iVar0;
			settimera(0);
			iVar6 = 0;
		}
		func_12();
		func_10(&iVar2);
		Global_42555 = 0;
		Global_42556 = 0;
		func_1();
		wait(0);
	}
}

void func_1()
{
	bool bVar0;
	
	if (!bLocal_82)
	{
		return;
	}
	bVar0 = true;
	if (iLocal_87 == 1)
	{
		bVar0 = false;
	}
	if (bLocal_83)
	{
		if (bLocal_84)
		{
			unk_0x593511A61E25B0D5(0);
		}
		unk_0x17751E107423AFE9(&Local_85);
		if (bLocal_84)
		{
			unk_0x9EFD301E3BE8324E(&Local_86);
		}
		else
		{
			unk_0x6A826E35A3096ED0(&Global_42551);
			unk_0x6A826E35A3096ED0(&Local_86);
		}
		unk_0x1A169149B3D18FCB(0, 0, bVar0, 50);
	}
	else
	{
		unk_0x17751E107423AFE9(&Local_85);
		unk_0x6A826E35A3096ED0(&Global_42551);
		unk_0x1A169149B3D18FCB(0, 0, bVar0, 50);
	}
	switch (iLocal_87)
	{
		case 0:
			break;
		
		case 1:
			func_9(0);
			break;
		
		case 2:
			func_2(0);
			break;
	}
}

void func_2(int iParam0)
{
	char* sVar0;
	
	sVar0 = "GTAO_Boss_Goons_FM_Soundset";
	if (func_4(1))
	{
		sVar0 = "GTAO_Biker_FM_Soundset";
	}
	if (iParam0 && !func_3())
	{
		unk_0xC4CC25B68A91D144(-1, "Boss_Message_Orange", sVar0, 0);
	}
}

bool func_3()
{
	return Global_2440049.f_2834[0 /*80*/].f_1 != 0;
}

bool func_4(bool bParam0)
{
	return func_5(unk_0x460153A63B9477BC(), bParam0);
}

int func_5(int iParam0, bool bParam1)
{
	return func_6(iParam0, bParam1, 1);
}

int func_6(int iParam0, bool bParam1, int iParam2)
{
	int iVar0;
	
	if (iParam0 == func_8())
	{
		return 0;
	}
	if (!bParam1)
	{
		if (func_7(iParam0, iParam2))
		{
			return 0;
		}
	}
	iVar0 = Global_1630317[iParam0 /*595*/].f_11;
	if (iVar0 != func_8() && Global_1630317[iVar0 /*595*/].f_11.f_423 == iParam2)
	{
		return 1;
	}
	return 0;
}

int func_7(int iParam0, int iParam1)
{
	if (iParam0 != func_8())
	{
		if (Global_1630317[iParam0 /*595*/].f_11 != func_8())
		{
			if (Global_1630317[iParam0 /*595*/].f_11 == iParam0 && Global_1630317[iParam0 /*595*/].f_11.f_423 == iParam1)
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_8()
{
	return -1;
}

void func_9(int iParam0)
{
	unk_0x642EF0F7FC397A2C(3, 21, 200, 0, 0);
	if (iParam0 && !func_3())
	{
		unk_0xC4CC25B68A91D144(-1, "Event_Message_Purple", "GTAO_FM_Events_Soundset", 0);
	}
}

void func_10(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 6)
	{
		if (Global_42356[iVar0 /*32*/] && Global_42356[iVar0 /*32*/].f_4)
		{
			if (Global_42356[iVar0 /*32*/].f_31 != 0)
			{
				if (!unk_0x7FD2BDF03806FD9D(Global_42356[iVar0 /*32*/].f_31))
				{
					if (*iParam0 > -1)
					{
						func_11();
					}
					Global_42356[iVar0 /*32*/] = 0;
					Global_42356[iVar0 /*32*/].f_31 = 0;
					Global_42356[iVar0 /*32*/] = 0;
					Global_42356[iVar0 /*32*/].f_4 = 0;
					Global_42356[iVar0 /*32*/].f_5 = 0;
					Global_42356[iVar0 /*32*/].f_2 = 0;
					Global_42356[iVar0 /*32*/].f_7 = 0;
					Global_42356[iVar0 /*32*/].f_6 = 0;
					Global_42356[iVar0 /*32*/].f_3 = 0;
					*iParam0 = -1;
				}
			}
		}
		iVar0++;
	}
}

void func_11()
{
	if (Global_42558 != -1 || bLocal_82)
	{
		bLocal_82 = false;
		Global_42558 = -1;
	}
}

void func_12()
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 6)
	{
		if (Global_42356[iVar0 /*32*/].f_7)
		{
			if (iVar0 == Global_42558)
			{
				func_25();
			}
			Global_42356[iVar0 /*32*/].f_31 = 0;
			Global_42356[iVar0 /*32*/] = 0;
			Global_42356[iVar0 /*32*/].f_4 = 0;
			Global_42356[iVar0 /*32*/].f_5 = 0;
			Global_42356[iVar0 /*32*/].f_2 = 0;
			Global_42356[iVar0 /*32*/].f_7 = 0;
			Global_42356[iVar0 /*32*/].f_6 = 0;
			Global_42356[iVar0 /*32*/].f_1 = -1;
			Global_42356[iVar0 /*32*/].f_3 = 0;
		}
		iVar0++;
	}
}

int func_13(int iParam0)
{
	if (iParam0 < 0)
	{
		return 0;
	}
	if (Global_42356[iParam0 /*32*/].f_5)
	{
		return 1;
	}
	return 0;
}

int func_14()
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	iVar1 = 0;
	iVar0 = 0;
	while (iVar0 < 6)
	{
		if (Global_42356[iVar0 /*32*/] == 1)
		{
			if (Global_42356[iVar0 /*32*/].f_4 == 0)
			{
				iVar1++;
			}
		}
		iVar0++;
	}
	if (iVar1 == 0)
	{
		func_25();
	}
	return iVar1;
}

int func_15()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0;
	iVar1 = -1;
	iVar2 = -1;
	iVar0 = 0;
	while (iVar0 < 6)
	{
		if (Global_42356[iVar0 /*32*/])
		{
			if (Global_42356[iVar0 /*32*/].f_2 > iVar1)
			{
				iVar2 = iVar0;
				iVar1 = Global_42356[iVar0 /*32*/].f_2;
			}
		}
		iVar0++;
	}
	return iVar2;
}

void func_16(struct<4> Param0, struct<16> Param1, var uParam2, var uParam3)
{
	Local_85 = { Param0 };
	Local_86 = { Param1 };
	bLocal_82 = true;
	bLocal_83 = true;
	iLocal_87 = uParam2;
	bLocal_84 = uParam3;
}

void func_17(struct<4> Param0, var uParam1)
{
	Local_85 = { Param0 };
	bLocal_82 = true;
	bLocal_83 = false;
	iLocal_87 = uParam1;
}

int func_18(int iParam0)
{
	int iVar0;
	
	if (Global_95884 && Global_95883)
	{
		return 0;
	}
	if (iParam0 > 0)
	{
		if (func_23(iParam0, 1) || bLocal_82)
		{
			return 1;
		}
	}
	if (unk_0xDABD547F0DF2906C() && !unk_0xF59B57FF909D9255())
	{
		iVar0 = 0;
		while (iVar0 < 6)
		{
			if (func_23(iVar0, 1))
			{
				return 1;
			}
			iVar0++;
		}
		return 0;
	}
	return 1;
}

int func_19()
{
	if (Global_74030)
	{
		return 1;
	}
	if (!unk_0x5A228A6A51E757C8(unk_0x2639A2323BEA8CC6()))
	{
		return 1;
	}
	if (func_22(0))
	{
		return 1;
	}
	if (unk_0x3EBB66F936A3436E())
	{
		return 1;
	}
	if (Global_42555)
	{
		return 1;
	}
	if (unk_0xD91913FA3B12A5C4(19))
	{
		return 1;
	}
	if (func_21(1))
	{
		return 1;
	}
	if (unk_0x9CC4D06F5338CA6B())
	{
		return 1;
	}
	if (func_20(8, -1))
	{
		return 1;
	}
	return 0;
}

bool func_20(int iParam0, int iParam1)
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

bool func_21(bool bParam0)
{
	if (bParam0)
	{
		return (Global_22411.f_4 && Global_22411.f_104 == 4);
	}
	return Global_22411.f_4;
}

int func_22(int iParam0)
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

bool func_23(int iParam0, int iParam1)
{
	int iVar0;
	bool bVar1;
	
	iVar0 = func_24(iParam0);
	if (iParam1 == 0)
	{
		if (iVar0 == -1)
		{
			return 0;
		}
	}
	else
	{
		iVar0 = iParam0;
	}
	if (iVar0 < 0)
	{
		return 0;
	}
	if (Global_42356[iVar0 /*32*/].f_6)
	{
		return 0;
	}
	bVar1 = false;
	if (!Global_42356[iVar0 /*32*/].f_12)
	{
		unk_0x69476B1CA6A9FF80(&(Global_42356[iVar0 /*32*/].f_8));
		unk_0x6A826E35A3096ED0(&Global_42551);
		bVar1 = unk_0x1A3A9FFE5CA6F64B(0);
	}
	else
	{
		unk_0x69476B1CA6A9FF80(&(Global_42356[iVar0 /*32*/].f_8));
		unk_0x6A826E35A3096ED0(&Global_42551);
		if (Global_42356[iVar0 /*32*/].f_30)
		{
			unk_0x9EFD301E3BE8324E(&(Global_42356[iVar0 /*32*/].f_13));
		}
		else
		{
			unk_0x6A826E35A3096ED0(&(Global_42356[iVar0 /*32*/].f_13));
		}
		bVar1 = unk_0x1A3A9FFE5CA6F64B(0);
	}
	return bVar1;
}

int func_24(int iParam0)
{
	int iVar0;
	
	if (iParam0 < 0)
	{
		return -1;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 6)
	{
		if (Global_42356[iVar0 /*32*/].f_1 == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_25()
{
	func_11();
	Global_42558 = -1;
}

void func_26()
{
	if (!unk_0x9CC4D06F5338CA6B() && !func_32())
	{
		if (func_31(0))
		{
			if (!unk_0x7BCC91F3C1CF24E8(&(Global_2451787.f_782.f_12)))
			{
				func_30();
				func_27(6, 0, 0);
			}
		}
	}
}

int func_27(int iParam0, bool bParam1, int iParam2)
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	
	Global_74143 = iParam0;
	bVar0 = iParam2 == true;
	bVar1 = iParam2 == 2;
	bVar2 = iParam2 == 3;
	switch (Global_74143)
	{
		case 3:
			Global_74141 = 0;
			break;
		
		case 4:
			Global_74141 = 3;
			break;
	}
	if (unk_0x7B70881748D166CD(joaat("appsecuroserv")) > 0)
	{
		if (bVar0)
		{
		}
		return 0;
	}
	if (unk_0x7B70881748D166CD(joaat("appbikerbusiness")) > 0)
	{
		if (bVar1)
		{
		}
		return 0;
	}
	if (unk_0x7B70881748D166CD(joaat("appimportexport")) > 0)
	{
		if (bVar2)
		{
		}
		return 0;
	}
	if (unk_0x7B70881748D166CD(joaat("appinternet")) > 0)
	{
		if ((bVar0 || bVar1) || bVar2)
		{
		}
		return 0;
	}
	if (Global_76833 && func_29())
	{
		return 0;
	}
	if (!Global_76833 && func_28())
	{
		return 0;
	}
	if (bVar0)
	{
		if (!unk_0x8DC2EFD1CECAA468("appSecuroServ"))
		{
			unk_0xBE9B3870B1B370E3("appSecuroServ");
			if (bParam1)
			{
				return 0;
			}
		}
		while (!unk_0x8DC2EFD1CECAA468("appSecuroServ"))
		{
			wait(0);
		}
		start_new_script("appSecuroServ", 4592);
		unk_0x5F82526B41A5EBCE("appSecuroServ");
		return 1;
	}
	if (bVar1)
	{
		if (!unk_0x8DC2EFD1CECAA468("appBikerBusiness"))
		{
			unk_0xBE9B3870B1B370E3("appBikerBusiness");
			if (bParam1)
			{
				return 0;
			}
		}
		while (!unk_0x8DC2EFD1CECAA468("appBikerBusiness"))
		{
			wait(0);
		}
		start_new_script("appBikerBusiness", 4592);
		unk_0x5F82526B41A5EBCE("appBikerBusiness");
		return 1;
	}
	if (bVar2)
	{
		if (!unk_0x8DC2EFD1CECAA468("appImportExport"))
		{
			unk_0xBE9B3870B1B370E3("appImportExport");
			if (bParam1)
			{
				return 0;
			}
		}
		while (!unk_0x8DC2EFD1CECAA468("appImportExport"))
		{
			wait(0);
		}
		start_new_script("appImportExport", 4592);
		unk_0x5F82526B41A5EBCE("appImportExport");
		return 1;
	}
	if (!unk_0x8DC2EFD1CECAA468("appInternet"))
	{
		unk_0xBE9B3870B1B370E3("appInternet");
		if (bParam1)
		{
			return 0;
		}
	}
	while (!unk_0x8DC2EFD1CECAA468("appInternet"))
	{
		wait(0);
	}
	start_new_script("appInternet", 4592);
	unk_0x5F82526B41A5EBCE("appInternet");
	return 1;
}

var func_28()
{
	return Global_74031;
}

var func_29()
{
	return Global_1664241;
}

void func_30()
{
	Global_2451787.f_782.f_28 = 0;
}

bool func_31(bool bParam0)
{
	if (bParam0)
	{
		return (Global_2451787.f_782.f_28 && unk_0x856D5567211886A2(unk_0x6C5C6B207AA78253()) == Global_2451787.f_782.f_31);
	}
	return Global_2451787.f_782.f_28;
}

bool func_32()
{
	return Global_74030;
}

void func_33()
{
	bool bVar0;
	int iVar1;
	
	bVar0 = false;
	iVar1 = 0;
	iVar1 = 0;
	while (iVar1 < 3)
	{
		if (Global_58891[iVar1] < 0)
		{
			Global_58891[iVar1] = 0;
			bVar0 = true;
		}
		iVar1++;
	}
	if (bVar0)
	{
		func_34(0);
		func_34(1);
		func_34(2);
	}
}

void func_34(int iParam0)
{
	int iVar0;
	
	iVar0 = Global_58891[iParam0];
	switch (iParam0)
	{
		case 0:
			unk_0x6000E4684CB4330B(joaat("SP0_TOTAL_CASH"), iVar0, 1);
			break;
		
		case 1:
			unk_0x6000E4684CB4330B(joaat("SP1_TOTAL_CASH"), iVar0, 1);
			break;
		
		case 2:
			unk_0x6000E4684CB4330B(joaat("SP2_TOTAL_CASH"), iVar0, 1);
			break;
	}
}

void func_35()
{
	struct<13> Var0[1];
	struct<16> Var1[1];
	int iVar2;
	
	if (Global_1573306 != -1)
	{
		Var0[0 /*13*/] = Global_1573307[0];
		Var0[0 /*13*/].f_1 = Global_1573307[1];
		Var0[0 /*13*/].f_2 = Global_1573307[2];
		Var0[0 /*13*/].f_3 = Global_1573307[3];
		Var0[0 /*13*/].f_4 = Global_1573307[4];
		Var0[0 /*13*/].f_5 = Global_1573307[5];
		Var0[0 /*13*/].f_6 = Global_1573307[6];
		Var0[0 /*13*/].f_7 = Global_1573307[7];
		Var0[0 /*13*/].f_8 = Global_1573307[8];
		Var0[0 /*13*/].f_9 = Global_1573307[9];
		Var0[0 /*13*/].f_10 = Global_1573307[10];
		Var0[0 /*13*/].f_11 = Global_1573307[11];
		Var0[0 /*13*/].f_12 = Global_1573307[12];
		if (unk_0x11E5DE894D6A8A5F() || unk_0xC6C08C02733D02C8())
		{
			if (!iLocal_88)
			{
				if (unk_0x190054A458CEA91B(&(Var0[0 /*13*/])))
				{
					iLocal_88 = 1;
				}
			}
			if (iLocal_88)
			{
				if (unk_0x00AF5518D74B83B5())
				{
				}
				else
				{
					if (unk_0x0FFBCF0B10BBD8F2())
					{
						StringCopy(&(Global_2097152[func_38() /*10931*/].f_10754.f_18[Global_1573306 /*6*/]), unk_0xAFA62A5813E1DD32(&(Var0[0 /*13*/])), 24);
					}
					func_37();
				}
			}
		}
		else if (unk_0x59ED414969A48197() || unk_0xDCA0815D900F27F8())
		{
			if (func_36(Var0[0 /*13*/]))
			{
				switch (iLocal_89)
				{
					case 0:
						iLocal_90 = unk_0xE7746A0D51702E3C(&Var0, 1);
						if (iLocal_90 >= 0)
						{
							iLocal_89++;
						}
						break;
					
					case 1:
						iVar2 = unk_0x8DF7D641A8ECA71F(iLocal_90, &Var1, 1);
						switch (iVar2)
						{
							case -1:
								func_37();
								break;
							
							case 0:
								MemCopy(&(Global_2097152[func_38() /*10931*/].f_10754.f_18[Global_1573306 /*6*/]), {Var1[0 /*16*/]}, 6);
								func_37();
								break;
							
							case 1:
								break;
						}
						break;
				}
			}
			else
			{
				func_37();
			}
		}
		else
		{
			if (func_36(Var0[0 /*13*/]))
			{
				StringCopy(&(Global_2097152[func_38() /*10931*/].f_10754.f_18[Global_1573306 /*6*/]), unk_0x0A66DEAAC2CBBE46(&(Var0[0 /*13*/])), 24);
			}
			func_37();
		}
	}
}

bool func_36(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12)
{
	return unk_0xF6B8932480699645(&uParam0, 13);
}

void func_37()
{
	Global_1573306 = -1;
	iLocal_88 = 0;
	iLocal_90 = -1;
	iLocal_89 = 0;
}

int func_38()
{
	int iVar0;
	
	iVar0 = 0;
	return iVar0;
}

void func_39()
{
	int iVar0;
	
	Global_42549 = 0;
	Global_42555 = 0;
	Global_42556 = 0;
	Global_42557 = 1;
	Global_42558 = -1;
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 6)
	{
		Global_42356[iVar0 /*32*/] = 0;
		iVar0++;
	}
}

