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
	struct<19> Local_75 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 300000, 0, 0, 30000, 2, 0, 0 } ;
	var uLocal_76 = 0;
	struct<4> Local_77[32];
	int iLocal_78 = 0;
	int iLocal_79 = 0;
	var uLocal_80 = 0;
	var uLocal_81 = 0;
	var uLocal_82 = 0;
	var uLocal_83 = 0;
	int iLocal_84 = 0;
	int iLocal_85 = 0;
	struct<21> Local_86 = { 0, -1, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, -1, -1 } ;
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
	if (unk_0x25DDB354A40FFCDB() && func_278(unk_0x460153A63B9477BC(), 0, 1))
	{
		func_270(ScriptParam_86);
	}
	else
	{
		func_267();
	}
	while (true)
	{
		func_266();
		if (func_256() || func_252(16))
		{
			func_267();
		}
		if (unk_0xD0E70037A973A810())
		{
			func_267();
		}
		switch (func_251(unk_0x59E2AD1A8ACEDA31()))
		{
			case 0:
				if (func_250() == 1)
				{
					func_249();
					Local_77[unk_0x59E2AD1A8ACEDA31() /*4*/] = 1;
				}
				else if (func_250() == 4)
				{
					Local_77[unk_0x59E2AD1A8ACEDA31() /*4*/] = 3;
				}
				break;
			
			case 1:
				if (func_250() == 1)
				{
					func_129();
				}
				else if (func_250() == 4)
				{
					func_14();
					Local_77[unk_0x59E2AD1A8ACEDA31() /*4*/] = 3;
				}
				break;
			
			case 3:
				func_13(&(Local_75.f_18));
				if (func_12(&(Local_75.f_18)))
				{
					Local_77[unk_0x59E2AD1A8ACEDA31() /*4*/] = 4;
				}
				break;
			
			case 2:
				Local_77[unk_0x59E2AD1A8ACEDA31() /*4*/] = 4;
			
			case 4:
				func_267();
				break;
		}
		if (unk_0xAFF96FDC3971E7EA())
		{
			switch (func_250())
			{
				case 0:
					Local_75 = 1;
					break;
				
				case 1:
					func_11();
					func_3();
					if (func_1())
					{
						Local_75 = 4;
					}
					break;
				
				case 4:
					break;
				}
		}
	}
}

int func_1()
{
	if (func_2())
	{
		return 1;
	}
	return 0;
}

int func_2()
{
	if (Local_75.f_7 == 2)
	{
		return 1;
	}
	return 0;
}

void func_3()
{
	struct<14> Var0;
	
	switch (Local_75.f_7)
	{
		case 0:
			if (unk_0xCE990E643CD9D0E5(Local_75.f_1, 0))
			{
				Local_75.f_7 = 1;
			}
			else if (func_9(&(Local_75.f_8), 480000, 0))
			{
				Var0.f_2 = 732175343;
				func_7(Var0, func_8(1));
				unk_0xBE20AB8238688965(&(Local_75.f_1), 1);
				Local_75.f_7 = 2;
			}
			break;
		
		case 1:
			func_4();
			break;
		
		case 2:
			break;
	}
}

void func_4()
{
	if (!func_9(&(Local_75.f_10), Local_75.f_12, 0))
	{
		if (func_9(&(Local_75.f_13), Local_75.f_15, 0))
		{
			Local_75.f_17++;
			Local_75.f_16 = func_6();
			func_5(&(Local_75.f_13));
		}
	}
	else
	{
		Local_75.f_7 = 2;
	}
}

void func_5(var uParam0)
{
	uParam0->f_1 = 0;
}

int func_6()
{
	switch (Local_75.f_17)
	{
		case 0:
		case 1:
			return 2;
		
		case 2:
		case 3:
		case 4:
		case 5:
			return 3;
		
		case 6:
		case 7:
		case 8:
			return 4;
		
		case 9:
			return 5;
		
		default:
	}
	return Local_75.f_16;
}

void func_7(struct<2> Param0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, int iParam13)
{
	Param0 = -1949011582;
	Param0.f_1 = unk_0x460153A63B9477BC();
	if (!iParam13 == 0)
	{
		unk_0xB802750B43D4047C(1, &Param0, 14, iParam13);
	}
}

int func_8(int iParam0)
{
	var uVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = 0;
	while (iVar1 < unk_0xEFA28384DDD283E1())
	{
		if (unk_0xBD09DF93F957A0CF(unk_0x628A51AC66E80772(iVar1)))
		{
			iVar2 = unk_0x9019589211A13B02(unk_0x628A51AC66E80772(iVar1));
			if (func_278(iVar2, 0, 0))
			{
				if (iVar2 != unk_0x460153A63B9477BC() || iParam0)
				{
					unk_0xBE20AB8238688965(&uVar0, iVar2);
				}
			}
		}
		iVar1++;
	}
	return uVar0;
}

int func_9(var uParam0, int iParam1, bool bParam2)
{
	if (iParam1 == -1)
	{
		return 1;
	}
	func_10(uParam0, bParam2, 0);
	if (unk_0x25DDB354A40FFCDB() && !bParam2)
	{
		if (unk_0x44F29CF6A0675F4F(unk_0x624736CA66E14161(unk_0x6CAAB7E78B5D978A(), *uParam0)) >= iParam1)
		{
			return 1;
		}
	}
	else if (unk_0x44F29CF6A0675F4F(unk_0x624736CA66E14161(unk_0x578C4EF320340AF7(), *uParam0)) >= iParam1)
	{
		return 1;
	}
	return 0;
}

void func_10(var uParam0, bool bParam1, bool bParam2)
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

void func_11()
{
	int iVar0;
	
	if (Local_75 == 1)
	{
		if (unk_0xBD09DF93F957A0CF(unk_0x628A51AC66E80772(iLocal_84)))
		{
			iVar0 = unk_0x9019589211A13B02(unk_0x628A51AC66E80772(iLocal_84));
			if (func_278(iVar0, 1, 1))
			{
				if (!unk_0xCE990E643CD9D0E5(Local_75.f_1, 0))
				{
					if (unk_0xCE990E643CD9D0E5(Local_77[iLocal_84 /*4*/].f_1, 0))
					{
						iLocal_85 = 1;
						unk_0xBE20AB8238688965(&(Local_75.f_1), 0);
					}
				}
			}
		}
	}
	iLocal_84++;
	if (iLocal_84 == unk_0xEFA28384DDD283E1())
	{
		if (iLocal_85 == 0)
		{
			if (unk_0xCE990E643CD9D0E5(Local_75.f_1, 0))
			{
				unk_0xD2459066EA58CE43(&(Local_75.f_1), 0);
			}
		}
		else
		{
			iLocal_85 = 0;
		}
		iLocal_84 = 0;
	}
}

int func_12(var uParam0)
{
	if (uParam0->f_1)
	{
		if (unk_0x44F29CF6A0675F4F(unk_0x624736CA66E14161(unk_0x6CAAB7E78B5D978A(), *uParam0)) >= 1000)
		{
			return 1;
		}
	}
	return 0;
}

void func_13(var uParam0)
{
	if (!uParam0->f_1)
	{
		if (unk_0xAFF96FDC3971E7EA())
		{
			func_10(uParam0, 0, 0);
		}
	}
}

void func_14()
{
	int iVar0;
	var uVar1;
	var uVar2;
	
	if (!unk_0xCE990E643CD9D0E5(iLocal_78, 1))
	{
		if ((unk_0xCE990E643CD9D0E5(Local_77[unk_0x59E2AD1A8ACEDA31() /*4*/].f_1, 0) && unk_0x1A3D0DF92BF7D8C4(unk_0x460153A63B9477BC()) >= (Local_75.f_16 - 1)) && Local_77[unk_0x59E2AD1A8ACEDA31() /*4*/].f_2 < 10)
		{
			Local_77[unk_0x59E2AD1A8ACEDA31() /*4*/].f_2++;
		}
		if (Local_77[unk_0x59E2AD1A8ACEDA31() /*4*/].f_2 > 0)
		{
			iVar0 = (Local_77[unk_0x59E2AD1A8ACEDA31() /*4*/].f_2 * Global_262145.f_8102);
			Global_2464451 = iVar0;
			func_107(&iVar0, 1);
			if (iVar0 > 0)
			{
				func_104(iVar0, 1, 1, 0);
				if (func_103())
				{
					func_91(-2043695058, iVar0, &uVar2, 0, 0, 0);
				}
				else
				{
					unk_0x41E465DD667BCD29(iVar0, "AM_DISTRACT_COPS", &uVar1);
				}
			}
			if (func_90())
			{
				func_77(12, "DSC_PASS0", 0, 0, -99);
			}
			else
			{
				func_77(12, "DSC_PASS1", 0, 0, -99);
			}
			func_20(51, iVar0, "DSC_CASH", "DSC_BIGM", 1, -1, -1082130432, 2);
			if (unk_0xCE990E643CD9D0E5(iLocal_78, 4))
			{
				if (!unk_0xCE990E643CD9D0E5(iLocal_78, 5))
				{
					func_15(66, 1, -1);
				}
			}
		}
		unk_0xBE20AB8238688965(&iLocal_78, 1);
	}
}

void func_15(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	iVar0 = func_17(iParam0, func_18(iParam2));
	iVar0 = (iVar0 + iParam1);
	func_16(iParam0, iVar0, iParam2);
}

void func_16(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	iVar0 = Global_2589533[iParam0 /*3*/][func_18(iParam2)];
	unk_0x6000E4684CB4330B(iVar0, iParam1, 1);
}

int func_17(int iParam0, int iParam1)
{
	int iVar0;
	var uVar1;
	
	iVar0 = Global_2589533[iParam0 /*3*/][func_18(iParam1)];
	if (unk_0xD2F202166691EDB2(iVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

int func_18(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = iParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_19();
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

int func_19()
{
	return Global_1312763;
}

int func_20(int iParam0, int iParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6, int iParam7)
{
	struct<80> Var0;
	
	Var0.f_3 = -1;
	Var0.f_4 = -1;
	Var0.f_5 = -1;
	Var0.f_6 = -1;
	Var0.f_7 = -1082130432;
	Var0.f_16 = 1;
	Var0.f_71 = 1;
	Var0.f_72 = 2;
	Var0.f_79 = -1;
	func_76(iParam0, &Var0, iParam1, sParam2, sParam3);
	Var0.f_71 = iParam4;
	Var0.f_6 = iParam5;
	Var0.f_7 = iParam6;
	Var0.f_72 = iParam7;
	return func_21(&Var0);
}

int func_21(var uParam0)
{
	int iVar0;
	
	if (uParam0->f_1 == 1)
	{
		if (Global_2440049.f_3156)
		{
			return 0;
		}
	}
	func_38(uParam0, uParam0->f_17);
	func_35(uParam0);
	if (func_34())
	{
		func_35(uParam0);
	}
	if (func_33(uParam0->f_1))
	{
		func_26();
		if (Global_2440049.f_2834[0 /*80*/].f_2 == 0)
		{
			Global_2440049.f_2834[0 /*80*/] = { *uParam0 };
			if (func_25(uParam0->f_69, 8192))
			{
				Global_1663777 = 1;
			}
			return 1;
		}
		if (((Global_2440049.f_2834[0 /*80*/].f_1 == 13 || Global_2440049.f_2834[0 /*80*/].f_1 == 53) || Global_2440049.f_2834[0 /*80*/].f_1 == 54) || Global_2440049.f_2834[0 /*80*/].f_1 == 58)
		{
			Global_2440049.f_2834[0 /*80*/].f_2 = 5;
		}
		iVar0 = 2;
		while (iVar0 >= 1)
		{
			Global_2440049.f_2834[iVar0 + 1 /*80*/] = { Global_2440049.f_2834[iVar0 /*80*/] };
			iVar0 = (iVar0 + -1);
		}
		Global_2440049.f_2834[1 /*80*/] = { *uParam0 };
		return 1;
	}
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (Global_2440049.f_2834[iVar0 /*80*/].f_2 == 0)
		{
			Global_2440049.f_2834[iVar0 /*80*/] = { *uParam0 };
			if (iVar0 == 0)
			{
				func_26();
			}
			return 1;
		}
		else
		{
			if (uParam0->f_1 == 1)
			{
				func_23(&(Global_2440049.f_2834[iVar0 /*80*/].f_69), 2);
				Global_2440049.f_2834[iVar0 /*80*/].f_2 = 5;
			}
			if (uParam0->f_1 == 86 && !func_25(uParam0->f_69, 128))
			{
				if (func_22(Global_2440049.f_2834[iVar0 /*80*/].f_1))
				{
					Global_2440049.f_2834[iVar0 /*80*/].f_2 = 5;
					func_23(&(Global_2440049.f_2834[iVar0 /*80*/].f_69), 1);
				}
			}
		}
		iVar0++;
	}
	return 0;
}

int func_22(int iParam0)
{
	switch (iParam0)
	{
		case 88:
		case 87:
		case 91:
		case 92:
		case 86:
		case 93:
		case 94:
		case 95:
		case 96:
		case 97:
		case 98:
		case 99:
		case 89:
		case 100:
		case 101:
		case 102:
		case 103:
		case 90:
		case 110:
			return 1;
		
		default:
	}
	return 0;
}

void func_23(var uParam0, int iParam1)
{
	func_24(uParam0, iParam1);
}

void func_24(var uParam0, var uParam1)
{
	*uParam0 = (*uParam0 || uParam1);
}

bool func_25(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

void func_26()
{
	bool bVar0;
	
	if (Global_2440049.f_3157)
	{
		return;
	}
	if (!Global_77101)
	{
		Global_77101 = 1;
		bVar0 = true;
	}
	func_27();
	if (bVar0)
	{
		Global_77101 = 0;
	}
}

void func_27()
{
	Global_2440049.f_3158 = 0;
	Global_2440049.f_3158.f_578 = 0;
	func_31(&(Global_2440049.f_3158.f_1));
	Global_2440049.f_3158.f_1.f_1 = 0;
	func_28(&(Global_2440049.f_3158.f_1), 1);
}

void func_28(var uParam0, int iParam1)
{
	if (uParam0->f_1 != 0)
	{
		unk_0x2E352DDBBF674246(&(uParam0->f_1));
		uParam0->f_1 = 0;
	}
	if ((uParam0->f_562 || iParam1) && uParam0->f_4 != 0)
	{
		if (unk_0xF8EDFF98A9C94C74())
		{
			unk_0x830F007E19C63E14(uParam0->f_4, "TOGGLE_MOUSE_BUTTONS");
			unk_0xF1B28F753235CE2A(false);
			unk_0xE1FDD153F5858534();
		}
		unk_0x2E352DDBBF674246(&(uParam0->f_4));
		uParam0->f_4 = 0;
	}
	if (uParam0->f_564)
	{
		unk_0xFF8E7A064055ECA6(false);
		uParam0->f_564 = 0;
	}
	if (!Global_77101)
	{
		if (!unk_0x252C34B7867FDDFA(unk_0x2639A2323BEA8CC6()))
		{
			if (!Global_77102)
			{
				if (unk_0x03DB5C6AABF8DA46() && !func_30(0))
				{
					unk_0xFD45D90342D2A0CD(800);
				}
			}
		}
	}
	func_29(0);
}

void func_29(int iParam0)
{
	Global_77093 = iParam0;
	Global_77094 = iParam0;
}

bool func_30(bool bParam0)
{
	if (!bParam0 && unk_0x7B70881748D166CD(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return unk_0xCE990E643CD9D0E5(Global_77081, 0);
}

void func_31(var uParam0)
{
	func_32(uParam0);
	uParam0->f_570 = 0;
	uParam0->f_31 = 0;
	uParam0->f_56 = 0;
	uParam0->f_567 = 0;
	uParam0->f_569 = 0;
}

void func_32(var uParam0)
{
	uParam0->f_547 = 1f;
	uParam0->f_546 = 0;
	uParam0->f_568 = 0f;
	uParam0->f_558 = 0;
	uParam0->f_30 = 0f;
	uParam0->f_548 = 0f;
	uParam0->f_559 = 0f;
	uParam0->f_560 = 0f;
	uParam0->f_545 = 0;
	uParam0->f_563 = 0;
	uParam0->f_572 = 0;
	uParam0->f_564 = 0;
	uParam0->f_565 = 0;
	uParam0->f_566 = 0;
	*uParam0 = 0.1125f;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
	uParam0->f_574 = 0;
	uParam0->f_575 = 0;
	uParam0->f_573 = 1f;
}

int func_33(int iParam0)
{
	if (((((((((((((((((((((((iParam0 == 3 || iParam0 == 4) || iParam0 == 5) || iParam0 == 6) || iParam0 == 11) || iParam0 == 12) || iParam0 == 28) || iParam0 == 29) || iParam0 == 30) || iParam0 == 24) || iParam0 == 32) || iParam0 == 31) || iParam0 == 26) || iParam0 == 25) || iParam0 == 56) || iParam0 == 7) || iParam0 == 8) || iParam0 == 9) || iParam0 == 10) || iParam0 == 104) || iParam0 == 100) || iParam0 == 103) || iParam0 == 105) || iParam0 == 110)
	{
		return 1;
	}
	return 0;
}

bool func_34()
{
	return Global_2451787.f_18;
}

void func_35(var uParam0)
{
	if (func_37(uParam0->f_1))
	{
		uParam0->f_72 = func_36();
	}
}

int func_36()
{
	return 21;
}

int func_37(int iParam0)
{
	switch (iParam0)
	{
		case 63:
		case 64:
		case 65:
		case 66:
		case 67:
		case 68:
		case 69:
		case 70:
		case 71:
		case 72:
		case 73:
		case 74:
		case 75:
		case 76:
		case 77:
		case 78:
		case joaat("MPSV_LP0_31"):
		case 80:
		case 81:
		case 82:
		case 83:
			return 1;
		
		default:
	}
	return 0;
}

void func_38(var uParam0, int iParam1)
{
	if (func_37(uParam0->f_1))
	{
		uParam0->f_73 = 1;
	}
	if (iParam1 == func_75() || !func_278(iParam1, 0, 1))
	{
		return;
	}
	if (func_22(uParam0->f_1))
	{
		if (uParam0->f_71 == 1)
		{
			uParam0->f_73 = func_39(iParam1, -2, 0, 0, 0);
		}
	}
}

int func_39(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	int iVar1;
	
	if (func_71(iParam0) && !bParam4)
	{
		if (bParam2)
		{
			return 0;
		}
		else
		{
			return 1;
		}
	}
	if (iParam1 == -2)
	{
		iVar0 = unk_0x6CC163E30ECE0790(iParam0);
		if (iVar0 > -1 && iVar0 < 4)
		{
			if (Global_4456448.f_77785[iVar0] != -1)
			{
				iParam1 = iVar0;
			}
		}
	}
	if (((func_71(unk_0x460153A63B9477BC()) || (func_70() && func_69())) && !unk_0xCE990E643CD9D0E5(Global_2540384.f_4655, 31)) && !bParam4)
	{
		iVar1 = func_68();
		if (unk_0xAE06B9E39EBDE049(iVar1))
		{
			if (unk_0xD0390A93AF3907B8(iVar1))
			{
				if (unk_0xE4400E48E081F17A(iVar1) != -1)
				{
					if (func_278(unk_0xE4400E48E081F17A(iVar1), 0, 1))
					{
						if ((iParam1 > -1 && unk_0xFC559366953F62B3()) && iParam1 < 4)
						{
							if (Global_4456448.f_77785[iParam1] != -1)
							{
								return func_66(iParam1, iParam0, 0);
							}
							else
							{
								return func_52(iParam0, unk_0xE4400E48E081F17A(iVar1), iParam1, bParam2, bParam3);
							}
						}
						else
						{
							return func_52(iParam0, unk_0xE4400E48E081F17A(iVar1), iParam1, bParam2, bParam3);
						}
					}
				}
			}
			else if ((iParam1 > -1 && unk_0xFC559366953F62B3()) && iParam1 < 4)
			{
				if (Global_4456448.f_77785[iParam1] != -1)
				{
					return func_66(iParam1, iParam0, 0);
				}
				else
				{
					return func_40(0, -1, 0);
				}
			}
			else
			{
				return func_40(0, -1, 0);
			}
		}
	}
	if ((iParam1 > -1 && unk_0xFC559366953F62B3()) && iParam1 < 4)
	{
		if (Global_4456448.f_77785[iParam1] != -1)
		{
			return func_66(iParam1, iParam0, 0);
		}
		else
		{
			return func_52(iParam0, unk_0x460153A63B9477BC(), iParam1, bParam2, bParam3);
		}
	}
	return func_52(iParam0, unk_0x460153A63B9477BC(), iParam1, bParam2, bParam3);
}

int func_40(bool bParam0, int iParam1, bool bParam2)
{
	return func_41(unk_0x460153A63B9477BC(), bParam0, iParam1, bParam2);
}

int func_41(int iParam0, bool bParam1, int iParam2, bool bParam3)
{
	int iVar0;
	
	if (!unk_0x166E920FB00B2DBB(iParam0))
	{
		return 3;
	}
	iVar0 = unk_0x6CC163E30ECE0790(iParam0);
	if ((func_51() || (func_50() && func_48())) && Global_1388252.f_1)
	{
		if (bParam1)
		{
			return func_47(iParam2, iVar0);
		}
		else
		{
			return func_47(iVar0, iVar0);
		}
	}
	if (bParam1)
	{
		if (iParam2 > -1)
		{
			if (func_46(iVar0, iParam2, 0) && !unk_0xCE990E643CD9D0E5(Global_4456448.f_15, 18))
			{
				if (iVar0 == iParam2)
				{
					return func_45(1);
				}
				else
				{
					return func_45(0);
				}
			}
			else if (bParam3)
			{
				return 28;
			}
			else if (unk_0xCE990E643CD9D0E5(Global_4456448.f_4, 20))
			{
				return func_42(iVar0, iParam2, 1, 4);
			}
			else
			{
				return func_42(iVar0, iParam2, 0, 4);
			}
		}
		return 28;
	}
	if (iVar0 == iParam2 || iParam2 == -1)
	{
		return func_45(1);
	}
	return func_45(0);
}

int func_42(int iParam0, int iParam1, bool bParam2, int iParam3)
{
	int iVar0;
	
	iVar0 = func_44(iParam0, iParam1, iParam3);
	if (func_43(Global_4456448.f_82708, 1))
	{
		if (iVar0 == 1)
		{
			iVar0 = 0;
		}
	}
	if (bParam2)
	{
		switch (iVar0)
		{
			case 0:
				return 28;
			
			case 1:
				return 29;
			
			case 2:
				return 30;
			
			case 3:
				return 31;
			
			case 4:
				return 32;
			
			case 5:
				return 33;
			
			case 6:
				return 34;
			
			case 7:
				return 35;
			
			case 8:
				return 36;
			
			case 9:
				return 37;
			
			case 10:
				return 38;
			
			case 11:
				return 39;
			
			case 12:
				return 40;
			
			case 13:
				return 41;
			
			case 14:
				return 42;
			
			case 15:
				return 43;
			
			default:
		}
	}
	else
	{
		switch (iVar0)
		{
			case 0:
				return 28;
			
			case 1:
				return 29;
			
			case 2:
				return 30;
			}
		
		default:
	}
	return 28;
}

int func_43(int iParam0, bool bParam1)
{
	int iVar0;
	
	if (bParam1)
	{
		if (Global_4456448.f_129348 == 65)
		{
			return 1;
		}
	}
	if (iParam0 == 0)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 <= 6)
	{
		if (iParam0 == Global_262145.f_9021[iVar0])
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_44(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < iParam2)
	{
		if (iVar0 == iParam1)
		{
			return iVar1;
		}
		else if (!iParam0 == iVar0)
		{
			if (!func_46(iParam0, iVar0, 0))
			{
				iVar1++;
			}
		}
		iVar0++;
	}
	return -1;
}

int func_45(bool bParam0)
{
	if (bParam0)
	{
		return 118;
	}
	return 116;
}

int func_46(int iParam0, int iParam1, int iParam2)
{
	if (iParam2 == 1)
	{
		if (iParam0 == iParam1)
		{
			return 1;
		}
		return 0;
	}
	if ((iParam0 > -1 && iParam1 > -1) && iParam0 == iParam1)
	{
		return 1;
	}
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					return unk_0xCE990E643CD9D0E5(Global_4456448.f_541, 0);
				
				case 1:
					return unk_0xCE990E643CD9D0E5(Global_4456448.f_541, 1);
				
				case 2:
					return unk_0xCE990E643CD9D0E5(Global_4456448.f_541, 2);
				
				case 3:
					return unk_0xCE990E643CD9D0E5(Global_4456448.f_541, 3);
				
				default:
			}
			break;
		
		case 1:
			switch (iParam1)
			{
				case 0:
					return unk_0xCE990E643CD9D0E5(Global_4456448.f_541, 4);
				
				case 1:
					return unk_0xCE990E643CD9D0E5(Global_4456448.f_541, 5);
				
				case 2:
					return unk_0xCE990E643CD9D0E5(Global_4456448.f_541, 6);
				
				case 3:
					return unk_0xCE990E643CD9D0E5(Global_4456448.f_541, 7);
				
				default:
			}
			break;
		
		case 2:
			switch (iParam1)
			{
				case 0:
					return unk_0xCE990E643CD9D0E5(Global_4456448.f_541, 8);
				
				case 1:
					return unk_0xCE990E643CD9D0E5(Global_4456448.f_541, 9);
				
				case 2:
					return unk_0xCE990E643CD9D0E5(Global_4456448.f_541, 10);
				
				case 3:
					return unk_0xCE990E643CD9D0E5(Global_4456448.f_541, 11);
				
				default:
			}
			break;
		
		case 3:
			switch (iParam1)
			{
				case 0:
					return unk_0xCE990E643CD9D0E5(Global_4456448.f_541, 12);
				
				case 1:
					return unk_0xCE990E643CD9D0E5(Global_4456448.f_541, 13);
				
				case 2:
					return unk_0xCE990E643CD9D0E5(Global_4456448.f_541, 14);
				
				case 3:
					return unk_0xCE990E643CD9D0E5(Global_4456448.f_541, 15);
				
				default:
			}
			break;
	}
	return 0;
}

int func_47(int iParam0, int iParam1)
{
	if (iParam0 == -1)
	{
		iParam0 = func_44(iParam1, iParam0, 4);
	}
	switch (iParam0)
	{
		case 0:
			return 15;
		
		case 1:
			return 21;
		
		case 2:
			return 24;
		
		case 3:
			return 18;
		
		default:
	}
	return 28;
}

bool func_48()
{
	if (func_49())
	{
		return 1;
	}
	return unk_0xCE990E643CD9D0E5(Global_4456448.f_133494, 4);
}

bool func_49()
{
	return unk_0xCE990E643CD9D0E5(Global_4456448.f_123318, 12);
}

bool func_50()
{
	if (unk_0xFC559366953F62B3())
	{
		return unk_0xCE990E643CD9D0E5(Global_4456448.f_133494, 0);
	}
	return ((unk_0xCE990E643CD9D0E5(Global_4456448.f_133494, 0) || Global_1655243) && unk_0x7B70881748D166CD(joaat("fm_deathmatch_creator")) > 0);
}

int func_51()
{
	if (func_49() && unk_0xFC559366953F62B3())
	{
		return 1;
	}
	return 0;
}

int func_52(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	if (iParam2 == -2)
	{
		iVar0 = unk_0x6CC163E30ECE0790(iParam0);
	}
	else
	{
		iVar0 = iParam2;
	}
	if (Global_1590682[unk_0x460153A63B9477BC() /*883*/] == 148)
	{
		bVar1 = true;
	}
	iVar2 = iParam0;
	if (iVar2 > -1)
	{
		if (Global_1590682[iVar2 /*883*/] == 148)
		{
			bVar1 = true;
		}
	}
	if (!bVar1)
	{
		if (iVar0 != -1)
		{
			if (func_61())
			{
				iVar3 = func_57(iParam0);
				if (!iVar3 == -1)
				{
					return func_55(iVar3);
				}
			}
			if ((func_54(iParam1, iParam0, iVar0, 0) && !unk_0xCE990E643CD9D0E5(Global_4456448.f_15, 18)) || ((func_46(unk_0x6CC163E30ECE0790(iParam1), unk_0x6CC163E30ECE0790(iParam0), 0) && unk_0xCE990E643CD9D0E5(Global_4456448.f_15, 23)) && !unk_0xCE990E643CD9D0E5(Global_4456448.f_15, 18)))
			{
				return func_45(1);
			}
			else if (unk_0xCE990E643CD9D0E5(Global_4456448.f_15, 26))
			{
				return func_53(1);
			}
			else
			{
				return func_41(iParam1, 1, iVar0, bParam4);
			}
		}
		else if ((Global_1574416 || Global_1574407) || Global_1590682[iParam0 /*883*/] == 0)
		{
			if (iParam0 == iParam1 || (Global_1574416 == 1 && Global_1574426 == 0))
			{
				return func_45(1);
			}
			else
			{
				return func_41(iParam1, 1, iVar0, bParam4);
			}
		}
		if (Global_1574411 && Global_1573907.f_14 == iParam0)
		{
			return 28;
		}
	}
	iVar4 = func_57(iParam0);
	if (!iVar4 == -1)
	{
		return func_55(iVar4);
	}
	if (bParam3)
	{
		return 0;
	}
	return 1;
}

int func_53(bool bParam0)
{
	if (bParam0)
	{
		return 119;
	}
	return 116;
}

bool func_54(int iParam0, int iParam1, int iParam2, int iParam3)
{
	if (iParam2 == -2)
	{
		if (iParam3 == 0)
		{
			if (unk_0x6CC163E30ECE0790(iParam0) == -1 && unk_0x6CC163E30ECE0790(iParam1) == -1)
			{
				return 0;
			}
		}
		return unk_0x6CC163E30ECE0790(iParam0) == unk_0x6CC163E30ECE0790(iParam1);
	}
	else
	{
		if (iParam3 == 0)
		{
			if (unk_0x6CC163E30ECE0790(iParam0) == -1 && iParam2 == -1)
			{
				return 0;
			}
		}
		return unk_0x6CC163E30ECE0790(iParam0) == iParam2;
	}
	return unk_0x6CC163E30ECE0790(iParam0) == iParam2;
}

int func_55(int iParam0)
{
	int iVar0;
	
	if (iParam0 > -1)
	{
		iVar0 = func_56(iParam0);
		switch (iVar0)
		{
			case 0:
				return 192;
			
			case 1:
				return 193;
			
			case 2:
				return 194;
			
			case 3:
				return 195;
			
			case 4:
				return 196;
			
			case 5:
				return 197;
			
			case 6:
				return 198;
			
			case 7:
				return 199;
			
			case 8:
				return 200;
			
			case 9:
				return 201;
			
			case 10:
				return 202;
			
			case 11:
				return 203;
			
			case 12:
				return 204;
			
			case 13:
				return 205;
			
			case 14:
				return 206;
			}
		
		default:
	}
	return 1;
}

var func_56(int iParam0)
{
	return Global_2417956.f_818.f_44[iParam0 /*2*/].f_1;
}

int func_57(int iParam0)
{
	if (!iParam0 == func_75())
	{
		if (func_59(iParam0, 1))
		{
			return Global_2417956.f_818.f_11[func_58(iParam0)];
		}
	}
	return -1;
}

int func_58(int iParam0)
{
	if (iParam0 != func_75())
	{
		return Global_1630317[iParam0 /*595*/].f_11;
	}
	return func_75();
}

bool func_59(int iParam0, bool bParam1)
{
	if (!bParam1)
	{
		if (func_60(iParam0))
		{
			return 0;
		}
	}
	return Global_1630317[iParam0 /*595*/].f_11 != func_75();
}

int func_60(int iParam0)
{
	if (iParam0 != func_75())
	{
		if (Global_1630317[iParam0 /*595*/].f_11 != func_75())
		{
			return Global_1630317[iParam0 /*595*/].f_11 == iParam0;
		}
	}
	return 0;
}

int func_61()
{
	if ((((func_65() || func_64()) || func_34()) || func_63()) || func_62())
	{
		return 1;
	}
	if (unk_0xFC559366953F62B3() && unk_0xCE990E643CD9D0E5(Global_4456448.f_36, 1))
	{
		return 1;
	}
	return 0;
}

var func_62()
{
	return Global_2451787.f_23;
}

var func_63()
{
	return Global_2451787.f_20;
}

var func_64()
{
	return Global_2451787.f_17;
}

var func_65()
{
	return Global_2451787.f_16;
}

int func_66(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = Global_969055.f_14[iParam0];
	if (func_61())
	{
		iVar2 = func_57(iParam1);
		if (!iVar2 == -1)
		{
			return func_55(iVar2);
		}
	}
	if (iVar1 > -1 && iVar1 < 17)
	{
		if (unk_0xCE990E643CD9D0E5(Global_4456448.f_592[iParam0 /*16355*/].f_7079[iVar1], 24))
		{
			return 18;
		}
	}
	if (iParam0 > -1 && iParam1 != func_75())
	{
		if (Global_4456448.f_77785[iParam0] != -1 && Global_4456448.f_77785[iParam0] <= 4)
		{
			if (Global_4456448.f_77785[iParam0] == 0)
			{
				iVar0 = 15;
			}
			else if (Global_4456448.f_77785[iParam0] == 1)
			{
				iVar0 = 18;
			}
			else if (Global_4456448.f_77785[iParam0] == 2)
			{
				iVar0 = 24;
			}
			else if (Global_4456448.f_77785[iParam0] == 4)
			{
				if (unk_0xCE990E643CD9D0E5(Global_4456448.f_15, 29))
				{
					iVar0 = 21;
				}
				else
				{
					iVar0 = 6;
				}
			}
			else
			{
				iVar0 = Global_4456448.f_77785[iParam0];
			}
		}
		else
		{
			iVar0 = func_41(iParam1, !bParam2, iParam0, 0);
		}
		if (unk_0xCE990E643CD9D0E5(Global_4456448.f_21, 13))
		{
			iVar0 = func_67(iParam0);
		}
		if (unk_0xCE990E643CD9D0E5(Global_4456448.f_24, 29))
		{
			iVar0 = 0;
		}
		if (unk_0xCE990E643CD9D0E5(Global_4456448.f_15, 26) && !func_46(iParam0, unk_0x6CC163E30ECE0790(iParam1), 0))
		{
			iVar0 = func_53(1);
		}
	}
	else
	{
		iVar0 = 1;
	}
	return iVar0;
}

int func_67(int iParam0)
{
	int iVar0;
	
	switch (iParam0)
	{
		case 0:
			iVar0 = Global_4456448.f_129476;
			break;
		
		case 1:
			iVar0 = Global_4456448.f_129477;
			break;
		
		case 2:
			iVar0 = Global_4456448.f_129478;
			break;
		
		case 3:
			iVar0 = Global_4456448.f_129479;
			break;
	}
	switch (iVar0)
	{
		case 0:
			return 15;
		
		case 1:
			return 21;
		
		case 2:
			return 24;
		
		case 3:
			return 18;
		
		case 4:
			return 6;
		
		case 5:
			return 9;
		
		case 6:
			return 3;
		
		case 7:
			return 1;
		
		case 8:
			return 12;
		
		case 9:
			return 2;
		
		default:
	}
	return 2;
}

var func_68()
{
	return Global_2359302.f_2;
}

bool func_69()
{
	return unk_0xCE990E643CD9D0E5(Global_2359302, 4);
}

bool func_70()
{
	return unk_0xCE990E643CD9D0E5(Global_1590682[unk_0x460153A63B9477BC() /*883*/].f_39.f_18, 14);
}

int func_71(int iParam0)
{
	if (func_73(iParam0, 0))
	{
		return 1;
	}
	if (func_72())
	{
		if (iParam0 == unk_0x460153A63B9477BC())
		{
			return 1;
		}
	}
	if (unk_0xCE990E643CD9D0E5(Global_2425869[iParam0 /*443*/].f_199, 2))
	{
		return 1;
	}
	return 0;
}

bool func_72()
{
	return unk_0xCE990E643CD9D0E5(Global_2359302, 3);
}

bool func_73(int iParam0, int iParam1)
{
	bool bVar0;
	
	if (iParam0 == unk_0x460153A63B9477BC())
	{
		bVar0 = func_74(-1, 0) == 8;
	}
	else
	{
		bVar0 = Global_1590682[iParam0 /*883*/].f_211 == 8;
	}
	if (iParam1 == 1)
	{
		if (unk_0x166E920FB00B2DBB(iParam0))
		{
			bVar0 = unk_0x6CC163E30ECE0790(iParam0) == 8;
		}
	}
	return bVar0;
}

int func_74(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_19();
	}
	if (Global_1312876[iVar1] == 1)
	{
		if (bParam1)
		{
		}
		iVar0 = 8;
	}
	else
	{
		iVar0 = Global_1312757[iVar1];
		if (bParam1)
		{
		}
	}
	return iVar0;
}

int func_75()
{
	return -1;
}

void func_76(var uParam0, var uParam1, var uParam2, char* sParam3, char* sParam4)
{
	uParam1->f_17 = func_75();
	uParam1->f_18 = func_75();
	uParam1->f_19 = func_75();
	uParam1->f_20 = func_75();
	uParam1->f_1 = uParam0;
	uParam1->f_2 = 1;
	StringCopy(&(uParam1->f_21), sParam4, 16);
	StringCopy(&(uParam1->f_8), sParam3, 32);
	uParam1->f_16 = 1;
	uParam1->f_3 = uParam2;
	uParam1->f_71 = 1;
	uParam1->f_74 = 1;
	uParam1->f_75 = 1;
	uParam1->f_76 = 0;
	uParam1->f_77 = 0;
	uParam1->f_73 = 0;
	StringCopy(&(uParam1->f_25), "", 64);
	StringCopy(&(uParam1->f_41), "", 64);
}

void func_77(int iParam0, char* sParam1, char* sParam2, bool bParam3, int iParam4)
{
	func_78(1, iParam0, sParam1, sParam2, bParam3, iParam4);
}

void func_78(int iParam0, var uParam1, char* sParam2, char* sParam3, bool bParam4, int iParam5)
{
	var uVar0;
	bool bVar1;
	
	uVar0 = uParam1;
	bVar1 = false;
	func_79(iParam0, sParam2, uVar0, bVar1, sParam3, bParam4, iParam5);
}

void func_79(var uParam0, char* sParam1, var uParam2, bool bParam3, char* sParam4, bool bParam5, int iParam6)
{
	int iVar0;
	
	if (unk_0x7BCC91F3C1CF24E8(sParam1))
	{
		return;
	}
	if (unk_0xA221A4BC051BFCCE(sParam1) > 15)
	{
		return;
	}
	if (!unk_0x7BCC91F3C1CF24E8(sParam4))
	{
		if (unk_0xA221A4BC051BFCCE(sParam4) > 31)
		{
			return;
		}
	}
	iVar0 = func_88();
	if (iVar0 == -1)
	{
		return;
	}
	func_87(iVar0);
	func_86(iVar0, uParam0);
	func_85(iVar0, uParam2, bParam3);
	func_84(iVar0, sParam1);
	if (unk_0x7BCC91F3C1CF24E8(sParam4) && iParam6 == -99)
	{
		return;
	}
	func_83(iVar0);
	if (!unk_0x7BCC91F3C1CF24E8(sParam4))
	{
		func_81(iVar0, sParam4, bParam5);
	}
	if (!iParam6 == -99)
	{
		func_80(iVar0, iParam6);
	}
}

void func_80(int iParam0, int iParam1)
{
	Global_1370593.f_59[iParam0 /*16*/].f_15 = iParam1;
}

void func_81(int iParam0, char* sParam1, bool bParam2)
{
	StringCopy(&(Global_1370593.f_59[iParam0 /*16*/].f_7), sParam1, 32);
	if (!bParam2)
	{
		return;
	}
	func_82(iParam0);
}

void func_82(int iParam0)
{
	unk_0xBE20AB8238688965(&(Global_1370593.f_59[iParam0 /*16*/]), 5);
}

void func_83(int iParam0)
{
	unk_0xBE20AB8238688965(&(Global_1370593.f_59[iParam0 /*16*/]), 4);
}

void func_84(int iParam0, char* sParam1)
{
	struct<4> Var0;
	
	StringCopy(&Var0, sParam1, 16);
	Global_1370593.f_59[iParam0 /*16*/].f_3 = { Var0 };
}

void func_85(int iParam0, var uParam1, bool bParam2)
{
	Global_1370593.f_59[iParam0 /*16*/].f_2 = uParam1;
	if (bParam2)
	{
		unk_0xBE20AB8238688965(&(Global_1370593.f_59[iParam0 /*16*/]), 2);
		unk_0xD2459066EA58CE43(&(Global_1370593.f_59[iParam0 /*16*/]), 3);
	}
	else
	{
		unk_0xBE20AB8238688965(&(Global_1370593.f_59[iParam0 /*16*/]), 3);
		unk_0xD2459066EA58CE43(&(Global_1370593.f_59[iParam0 /*16*/]), 2);
	}
}

void func_86(int iParam0, var uParam1)
{
	Global_1370593.f_59[iParam0 /*16*/].f_1 = uParam1;
}

void func_87(int iParam0)
{
	unk_0xBE20AB8238688965(&(Global_1370593.f_59[iParam0 /*16*/]), 0);
}

int func_88()
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 8)
	{
		if (!func_89(iVar0))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

bool func_89(int iParam0)
{
	return unk_0xCE990E643CD9D0E5(Global_1370593.f_59[iParam0 /*16*/], 0);
}

int func_90()
{
	if (unk_0xCE990E643CD9D0E5(unk_0x344C570D6F8700DF(0, 65535), 0))
	{
		return 1;
	}
	return 0;
}

void func_91(int iParam0, int iParam1, var uParam2, bool bParam3, bool bParam4, bool bParam5)
{
	int iVar0;
	
	if (!func_103())
	{
		return;
	}
	iVar0 = 1;
	if (bParam4)
	{
		iVar0 = 4;
	}
	else if (bParam3)
	{
		iVar0 = 2;
	}
	else if (bParam5)
	{
		iVar0 = 8;
	}
	switch (iParam0)
	{
		case -1645229221:
		case -585718395:
		case -1359375127:
		case 454359403:
		case -982394051:
		case 1643659499:
		case -2072289654:
		case 650665123:
		case 1654961868:
		case -876847842:
		case 68030260:
		case -2122299283:
		case 366672791:
		case 283351220:
		case 291576838:
		case 1182673174:
		case -516219046:
		case 1036455748:
		case 277665518:
		case 2043854386:
		case 1839532116:
		case 1022400740:
		case 1940862352:
		case -1389227906:
		case 711665950:
		case 1704445500:
		case 1515774909:
		case 1173654533:
		case -899802304:
		case -663944335:
		case 1208553146:
		case -613221010:
		case -671062876:
		case -407201236:
		case -754024203:
		case -1885444887:
		case 1931729587:
		case 1064954035:
		case -180141073:
		case 2131324797:
		case 1612072658:
		case -517447402:
		case 1948102096:
		case 1108628223:
		case -1834046564:
		case -1239008812:
		case -222363842:
		case -1276678868:
		case 1564537328:
		case -96593501:
		case 742499889:
		case 2050093329:
		case -1752488069:
		case 634375935:
		case 1850983186:
		case 763367758:
		case 1941570214:
		case 665109499:
		case -1330755006:
		case 1976384368:
		case 268924934:
		case 1869490922:
		case -336803850:
		case -1412692765:
		case 618167454:
		case 980623936:
		case 437291904:
		case -135813048:
		case -930104477:
		case -1420909320:
		case -1733398043:
		case -1892760262:
		case -1545737048:
		case 2039302543:
		case 402505853:
		case -1143510182:
		case 1678112166:
		case 837955913:
		case -1532467144:
		case 1815541181:
			if (iParam1 > 0 || Global_262145.f_27657)
			{
				func_92(uParam2, -1135378931, 537254313, 1474183246, iParam0, iParam1, iVar0, 7);
			}
			break;
		
		case -31156877:
		case -1027218631:
		case -1398318418:
		case 1652884147:
		case -57868256:
		case -1216489292:
		case -46622315:
		case -352356931:
		case -990286235:
		case 563463121:
		case 1734805203:
		case 941287179:
		case -1186079845:
		case -1985150258:
		case -1127021384:
		case -109201286:
		case 312105838:
		case 1982688246:
		case -661030418:
		case 1301046174:
		case -1586170317:
		case 393059668:
		case 23796958:
		case -1077156170:
		case 1780666425:
		case -2043695058:
		case -1922554349:
		case 1287308202:
		case 691372038:
		case 1480707108:
		case 1512499951:
		case 562283735:
		case -154732333:
		case -1362660491:
		case 645708827:
		case 767907967:
		case -1970151306:
		case 718859568:
		case -1955564771:
		case 892388724:
		case -1426920838:
		case 1349151477:
		case 1620609399:
		case 1961641934:
		case 210955503:
		case -59668082:
		case 1736933716:
		case -1468524125:
		case 111573502:
		case 1525644423:
		case 968073639:
		case 1577781788:
		case -934465332:
		case -1194253122:
		case -212607085:
		case -815546555:
		case 1048226110:
		case 569170531:
		case -856006867:
		case 848090538:
		case -47546905:
		case -293060240:
		case 463142405:
		case 1550217370:
		case -101307780:
		case -664597565:
		case 599804707:
		case -327918414:
		case 550898518:
		case 835976347:
		case 1347433368:
		case 1052472386:
		case -2130199671:
		case -1227654538:
		case 1864522104:
		case 215608230:
		case -876012764:
		case -722894325:
		case 1407278493:
		case -1579394494:
		case -27443911:
		case 1179783540:
		case 923419301:
		case -308826175:
		case 603298940:
		case -12619854:
		case -311112675:
		case 870439158:
		case -974288740:
		case -4138654:
		case -1180954122:
		case -1918051016:
		case 844330594:
		case 1934825517:
		case 1852024236:
		case 2099238988:
		case 1952643559:
		case -1172900789:
		case -2015399333:
		case -1574795641:
		case -961034881:
		case 1135468152:
		case 1265272476:
		case -634726636:
		case 696556762:
		case 403506509:
		case -883876414:
		case -1064150715:
		case -1387253055:
		case -716963152:
		case 1138089938:
		case -561012053:
			func_92(uParam2, -1135378931, 1445302971, 1474183246, iParam0, iParam1, iVar0, 7);
			break;
	}
	switch (iParam0)
	{
		case -1342064661:
		case -1693570755:
		case 1868043300:
		case -697248883:
		case -1295545795:
		case 914079366:
		case 395122350:
		case -331981076:
		case 1671535231:
		case -1896606724:
		case -1291433573:
		case 538631715:
		case 133782822:
		case 2081885153:
		case -1314365345:
		case 1322977732:
		case 396623013:
		case 1981664462:
		case -1921250821:
		case -1370731547:
		case 1683798242:
		case -910968288:
			if (iParam1 > 0 || Global_262145.f_27657)
			{
				func_92(uParam2, -1135378931, 537254313, 1474183246, iParam0, iParam1, iVar0, 7);
			}
			break;
		
		case 1240683675:
		case 1241904665:
		case -1100963799:
		case -494565059:
		case 827308208:
		case -1857685192:
		case 1698417709:
		case 1057653594:
		case 1810506918:
		case 451427308:
		case 824622151:
		case 1253978276:
		case -1576080766:
		case 1508411869:
		case 1428501742:
		case -1918967151:
		case 1261538664:
		case 1180397655:
		case 1414674366:
		case 261460130:
		case -2027658376:
		case -2017925037:
		case 1668610896:
		case -2032529561:
		case -1224479447:
		case -319306689:
		case -466527264:
		case 1925965142:
		case 592152676:
		case 2035612943:
		case 1568659720:
		case 1220095570:
		case 2050320631:
		case 592672421:
		case 1775876058:
		case -842062976:
		case -518651910:
		case 14658715:
		case -604793592:
		case -823426392:
		case -1401862980:
		case -173354274:
		case 409533976:
		case -1472522337:
		case 542574408:
		case -1261799063:
		case 784631574:
		case -2027479156:
		case -837690641:
			func_92(uParam2, -1135378931, 1445302971, 1474183246, iParam0, iParam1, iVar0, 7);
			break;
	}
}

int func_92(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7)
{
	bool bVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	int iVar4;
	bool bVar5;
	
	bVar0 = false;
	if (!func_103())
	{
		bVar0 = true;
	}
	iVar1 = 1;
	if (!bVar0)
	{
		if (!unk_0x5053392075AA583C(func_19()) || unk_0x701B05C16EF4F48E())
		{
			Global_4265553 = 1;
			return 0;
		}
		if (Global_2463410)
		{
			if (iParam3 == 1067618600 || iParam3 == -1303831698)
			{
				Global_4265554 = 1;
				return 0;
			}
		}
	}
	bVar3 = false;
	iVar2 = 0;
	while (iVar2 < 15)
	{
		if (Global_4264051[iVar2 /*85*/].f_66.f_2 == 0)
		{
			bVar3 = true;
		}
		iVar2++;
	}
	if (!bVar3)
	{
		return 0;
	}
	*uParam0 = 15;
	iVar4 = 2147483647;
	if ((bVar0 || iVar1) || unk_0x734A68E809CC23F0(&iVar4, iParam3, iParam4, iParam2, iParam5, iParam6))
	{
		if ((bVar0 || iVar1) || unk_0x9F5556ED9A739FBC(iVar4))
		{
			*uParam0 = func_99(iVar4, iParam1, iParam4, iParam2, iParam3, iParam5, 0, iParam6, iParam7, 1, 1);
			if (iVar1 && !bVar0)
			{
			}
			if (bVar0)
			{
				if (*uParam0 != -1)
				{
					Global_4264051[*uParam0 /*85*/].f_66.f_8 = 1;
					Global_4264051[*uParam0 /*85*/].f_66.f_12 = 1;
				}
			}
			Global_4265538 = 1;
			return 1;
		}
	}
	else
	{
		if (iParam7 & 2 != 0)
		{
			Global_4265552 = 1;
			Global_4265555 = iParam4;
			Global_4265557 = iParam3;
			Global_4265558 = 1;
			Global_4265556 = iParam5;
		}
		if (iParam7 & 8 != 0)
		{
			Global_4265555 = iParam4;
			Global_4265557 = iParam3;
			Global_4265558 = 1;
			Global_4265556 = iParam5;
		}
		bVar5 = false;
		if (bVar5)
		{
			func_98(1, iParam4);
			Global_4265552 = 0;
		}
		if (iParam7 & 4 != 0)
		{
			func_93(-1, iParam4, iParam6, iParam5, -1);
		}
	}
	return 0;
}

void func_93(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	switch (iParam1)
	{
		case 1704445500:
			unk_0xBE20AB8238688965(&(Global_2425869[unk_0x460153A63B9477BC() /*443*/].f_126.f_71), 0);
			break;
	}
	if (iParam0 != -1)
	{
		func_94(iParam0);
	}
}

void func_94(int iParam0)
{
	bool bVar0;
	
	bVar0 = false;
	if (!func_103())
	{
		bVar0 = true;
	}
	if (iParam0 != -1)
	{
		if (func_97(iParam0))
		{
			if (!bVar0)
			{
				unk_0x2ABDF07188759AF4();
			}
		}
		else if (!bVar0)
		{
			unk_0x7365588A145923CE(Global_4264051[iParam0 /*85*/].f_66);
		}
		func_95(&(Global_4264051[iParam0 /*85*/]));
	}
}

void func_95(var uParam0)
{
	uParam0->f_66 = 0;
	uParam0->f_66 = 2147483647;
	uParam0->f_66.f_1 = 0;
	uParam0->f_66.f_2 = 0;
	uParam0->f_66.f_3 = -1593119440;
	uParam0->f_66.f_4 = -2085313189;
	uParam0->f_66.f_5 = 0;
	uParam0->f_66.f_6 = 1227573907;
	uParam0->f_66.f_7 = -1161833819;
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_13 = 0;
	uParam0->f_2 = 0;
	func_96(&(uParam0->f_14));
	func_96(&(uParam0->f_14.f_13));
	StringCopy(&(uParam0->f_14.f_26), "", 32);
	StringCopy(&(uParam0->f_14.f_34), "", 24);
	StringCopy(&(uParam0->f_14.f_40), "", 16);
	StringCopy(&(uParam0->f_14.f_44), "", 32);
	uParam0->f_3 = 0;
	uParam0->f_4 = 0;
	uParam0->f_5 = 0;
	uParam0->f_6 = 0;
	uParam0->f_7 = 0;
	uParam0->f_8 = 0;
	uParam0->f_66.f_8 = 0;
	uParam0->f_66.f_9 = 0;
	uParam0->f_66.f_10 = 0;
	uParam0->f_66.f_11 = 0;
	uParam0->f_66.f_13 = 0;
	uParam0->f_66.f_12 = 0;
	uParam0->f_66.f_14 = 0;
	uParam0->f_66.f_15 = 0;
	uParam0->f_66.f_16 = 0;
	uParam0->f_66.f_18 = 0;
}

void func_96(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
	uParam0->f_4 = 0;
	uParam0->f_5 = 0;
	uParam0->f_6 = 0;
	uParam0->f_7 = 0;
	uParam0->f_8 = 0;
	uParam0->f_9 = 0;
	uParam0->f_10 = 0;
	uParam0->f_11 = 0;
	uParam0->f_12 = 0;
}

int func_97(int iParam0)
{
	if (iParam0 >= 0 && iParam0 < 15)
	{
		return Global_4264051[iParam0 /*85*/].f_66.f_5 == 1;
	}
	return 0;
}

void func_98(int iParam0, int iParam1)
{
	Global_2464590 = iParam1;
	Global_2464589 = iParam0;
}

int func_99(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, bool bParam6, int iParam7, var uParam8, int iParam9, int iParam10)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 15)
	{
		if (Global_4264051[iVar0 /*85*/].f_66.f_2 == 0)
		{
			if (!func_103())
			{
				iParam0 = iVar0 + 900;
			}
			Global_4264051[iVar0 /*85*/].f_66.f_2 = 1;
			Global_4264051[iVar0 /*85*/].f_66.f_1 = iParam5;
			Global_4264051[iVar0 /*85*/].f_66.f_3 = iParam1;
			Global_4264051[iVar0 /*85*/].f_66.f_4 = iParam2;
			Global_4264051[iVar0 /*85*/].f_66.f_7 = iParam3;
			Global_4264051[iVar0 /*85*/].f_66.f_5 = 0;
			Global_4264051[iVar0 /*85*/].f_66 = iParam0;
			Global_4264051[iVar0 /*85*/].f_66.f_6 = iParam4;
			Global_4264051[iVar0 /*85*/].f_66.f_11 = uParam8;
			Global_4264051[iVar0 /*85*/].f_66.f_10 = iParam7;
			Global_4264051[iVar0 /*85*/].f_66.f_13 = iParam9;
			Global_4264051[iVar0 /*85*/].f_66.f_12 = 0;
			Global_4264051[iVar0 /*85*/].f_66.f_14 = unk_0xD3137A576BE9EC5C();
			Global_4264051[iVar0 /*85*/].f_66.f_18 = 0;
			Global_4265538 = 0;
			if (bParam6)
			{
				Global_4264051[iVar0 /*85*/].f_66.f_5 = 1;
			}
			if (iParam1 == -1135378931 && iParam10)
			{
				func_100(Global_4264051[iVar0 /*85*/], iVar0);
			}
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_100(struct<67> Param0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, int iParam19)
{
	struct<3> Var0;
	int iVar1;
	
	if (iParam19 < 0)
	{
		return;
	}
	Var0.f_2 = 2147483647;
	Var0.x = 1191422458;
	Var0.f_1 = unk_0x460153A63B9477BC();
	Var0.f_2 = { Param0.f_66 };
	Var0.f_2.f_33 = iParam19;
	iVar1 = func_102(Var0.f_1);
	if ((Global_262145.f_23581 && !Global_262145.f_23582) && !Global_262145.f_23583)
	{
		return;
	}
	if (!iVar1 == 0)
	{
		func_101();
		unk_0xB802750B43D4047C(1, &Var0, 36, iVar1);
	}
}

void func_101()
{
	unk_0xBE9B3870B1B370E3("AM_ARENA_SHP");
}

var func_102(int iParam0)
{
	var uVar0;
	
	if (iParam0 != -1)
	{
		unk_0xBE20AB8238688965(&uVar0, iParam0);
	}
	return uVar0;
}

int func_103()
{
	if (unk_0xF8EDFF98A9C94C74())
	{
		return unk_0xC5AA3415F982DC6C();
	}
	return 0;
}

void func_104(int iParam0, int iParam1, int iParam2, float fParam3)
{
	func_105(iParam0, iParam1, iParam2, fParam3);
}

void func_105(int iParam0, int iParam1, int iParam2, float fParam3)
{
	int iVar0;
	int iVar1;
	float fVar2;
	
	if (iParam1 < 1)
	{
		iParam1 = 1;
	}
	iVar0 = (iParam0 * iParam1);
	fParam3 = 0f;
	if (iVar0 > 0)
	{
		fVar2 = (100f - fParam3);
		iVar1 = floor((IntToFloat(iVar0) * (fVar2 / 100f)));
	}
	else
	{
		iVar1 = iVar0;
	}
	Global_1590682[unk_0x460153A63B9477BC() /*883*/].f_211.f_4 = iVar1;
	Global_1590682[unk_0x460153A63B9477BC() /*883*/].f_211.f_3 = (Global_1590682[unk_0x460153A63B9477BC() /*883*/].f_211.f_3 + iVar1);
	if (iParam2 == 1)
	{
		func_106(iVar1, 0);
	}
}

void func_106(int iParam0, bool bParam1)
{
	if (bParam1)
	{
	}
	iParam0 = iParam0;
}

void func_107(int iParam0, int iParam1)
{
	int iVar0;
	
	if (*iParam0 > 0)
	{
		if (!func_128())
		{
			if (func_127(0))
			{
				if (!func_123(0))
				{
					if (unk_0x166E920FB00B2DBB(func_122()))
					{
						if (func_121() == 100)
						{
							iVar0 = *iParam0;
							*iParam0 = 0;
						}
						else
						{
							iVar0 = ((*iParam0 / 100) * func_121());
							*iParam0 = (*iParam0 - iVar0);
						}
						func_119(&iVar0, 0);
						if (iParam1 == 1)
						{
							func_112("GB_BCUT_TICK1", func_122(), iVar0, 0, 0, 1);
						}
						func_111(20);
						func_108(func_122(), iVar0, 1);
					}
				}
			}
		}
	}
}

void func_108(int iParam0, int iParam1, int iParam2)
{
	struct<8> Var0;
	
	if (func_278(iParam0, 0, 1))
	{
		Var0 = 1596100569;
		Var0.f_1 = unk_0x460153A63B9477BC();
		Var0.f_2 = iParam1;
		Var0.f_4 = iParam2;
		Var0.f_5 = func_110(iParam0);
		func_109(&(Var0.f_6), &(Var0.f_7));
		unk_0xB802750B43D4047C(1, &Var0, 8, func_102(iParam0));
	}
}

void func_109(var uParam0, var uParam1)
{
	*uParam0 = Global_1652336.f_9;
	*uParam1 = Global_1652336.f_10;
}

var func_110(int iParam0)
{
	return Global_1630317[iParam0 /*595*/].f_506;
}

void func_111(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	unk_0xBE20AB8238688965(&(Global_2540384.f_5188.f_7[iVar0]), iVar1);
}

int func_112(char* sParam0, int iParam1, int iParam2, int iParam3, bool bParam4, int iParam5)
{
	int iVar0;
	struct<8> Var1;
	
	iVar0 = -1;
	if (unk_0x56B60AE958412839(unk_0x460153A63B9477BC(), iParam1) || iParam5)
	{
		if (!bParam4)
		{
			StringCopy(&Var1, unk_0x72C1D3A1AB8CAA5B(iParam1), 64);
		}
		else
		{
			StringCopy(&Var1, unk_0x72C1D3A1AB8CAA5B(iParam1), 64);
		}
		if (unk_0x7BCC91F3C1CF24E8(&Var1))
		{
		}
		unk_0x5B8DD855EAFD33B5(sParam0);
		unk_0x7006FC1051C85FCA(func_39(iParam1, -2, 1, 0, 0));
		unk_0x9EFD301E3BE8324E(func_117(&Var1));
		if (!iParam3 == 0)
		{
			unk_0x7006FC1051C85FCA(iParam3);
		}
		unk_0x42710E9E08FA375A(iParam2);
		iVar0 = unk_0xD60C2975A14D763D(0, 1);
		func_113(27, sParam0, 1, &Var1, iParam2, 0, 0, 0, 1, 0, 0, 0);
	}
	return iVar0;
}

void func_113(int iParam0, char* sParam1, int iParam2, char* sParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, char* sParam9, char* sParam10, char* sParam11)
{
	int iVar0;
	
	if ((!func_116() || !unk_0xFC559366953F62B3()) || !func_73(unk_0x460153A63B9477BC(), 0))
	{
		return;
	}
	iVar0 = func_114(iParam2);
	if (iVar0 >= 0 && iVar0 < 5)
	{
		Global_1672611.f_5[iVar0 /*53*/] = iParam0;
		Global_1672611.f_5[iVar0 /*53*/].f_1 = iParam2;
		StringCopy(&(Global_1672611.f_5[iVar0 /*53*/].f_8), sParam1, 16);
		Global_1672611.f_5[iVar0 /*53*/].f_2[0] = iParam4;
		Global_1672611.f_5[iVar0 /*53*/].f_2[1] = iParam5;
		Global_1672611.f_5[iVar0 /*53*/].f_2[2] = iParam6;
		Global_1672611.f_5[iVar0 /*53*/].f_7 = iParam7;
		Global_1672611.f_5[iVar0 /*53*/].f_6 = iParam8;
		StringCopy(&(Global_1672611.f_5[iVar0 /*53*/].f_12), sParam3, 64);
		StringCopy(&(Global_1672611.f_5[iVar0 /*53*/].f_28[0 /*6*/]), sParam9, 24);
		StringCopy(&(Global_1672611.f_5[iVar0 /*53*/].f_28[1 /*6*/]), sParam10, 24);
		StringCopy(&(Global_1672611.f_5[iVar0 /*53*/].f_28[2 /*6*/]), sParam11, 24);
	}
}

int func_114(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= (Global_1672611 - 1))
	{
		if (iParam0 > Global_1672611.f_5[iVar0 /*53*/].f_1)
		{
			func_115(iVar0);
			return iVar0;
		}
		iVar0++;
	}
	Global_1672611++;
	if (Global_1672611 > 5)
	{
		Global_1672611 = 5;
		return Global_1672611;
	}
	return (Global_1672611 - 1);
}

void func_115(int iParam0)
{
	int iVar0;
	
	iVar0 = 4;
	while (iVar0 >= iParam0 + 1)
	{
		Global_1672611.f_5[iVar0 /*53*/] = { Global_1672611.f_5[(iVar0 - 1) /*53*/] };
		iVar0 = (iVar0 + -1);
	}
}

bool func_116()
{
	return unk_0x95C5B896CB42B20E(-1762644250);
}

var func_117(char* sParam0)
{
	char cVar0[64];
	
	StringCopy(&cVar0, "<C>", 64);
	StringConCat(&cVar0, sParam0, 64);
	StringConCat(&cVar0, "</C>~s~", 64);
	return func_118(&cVar0);
}

var func_118(char[4] cParam0)
{
	return cParam0;
}

void func_119(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	if (bParam1)
	{
		iVar1 = func_120(1);
	}
	else
	{
		iVar1 = func_120(0);
	}
	iVar0 = ((*iParam0 / 100) * iVar1);
	*iParam0 = (*iParam0 - iVar0);
}

int func_120(bool bParam0)
{
	if (bParam0)
	{
		return round((0.05f * 100f));
	}
	return Global_262145.f_12398;
}

int func_121()
{
	return Global_262145.f_12397;
}

int func_122()
{
	return Global_1630317[unk_0x460153A63B9477BC() /*595*/].f_11;
}

bool func_123(bool bParam0)
{
	return func_124(unk_0x460153A63B9477BC(), bParam0);
}

int func_124(int iParam0, bool bParam1)
{
	return func_125(iParam0, bParam1, 1);
}

int func_125(int iParam0, bool bParam1, int iParam2)
{
	int iVar0;
	
	if (iParam0 == func_75())
	{
		return 0;
	}
	if (!bParam1)
	{
		if (func_126(iParam0, iParam2))
		{
			return 0;
		}
	}
	iVar0 = Global_1630317[iParam0 /*595*/].f_11;
	if (iVar0 != func_75() && Global_1630317[iVar0 /*595*/].f_11.f_423 == iParam2)
	{
		return 1;
	}
	return 0;
}

int func_126(int iParam0, int iParam1)
{
	if (iParam0 != func_75())
	{
		if (Global_1630317[iParam0 /*595*/].f_11 != func_75())
		{
			if (Global_1630317[iParam0 /*595*/].f_11 == iParam0 && Global_1630317[iParam0 /*595*/].f_11.f_423 == iParam1)
			{
				return 1;
			}
		}
	}
	return 0;
}

bool func_127(bool bParam0)
{
	return func_59(unk_0x460153A63B9477BC(), bParam0);
}

bool func_128()
{
	return func_60(unk_0x460153A63B9477BC());
}

void func_129()
{
	func_247();
	if (unk_0x8F678487EEBD8CE4(iLocal_79))
	{
		if (func_245() || func_244())
		{
			unk_0x14C1B9C77E952C6F(iLocal_79, 0);
		}
		else
		{
			unk_0x14C1B9C77E952C6F(iLocal_79, 4);
		}
	}
	switch (Local_77[unk_0x59E2AD1A8ACEDA31() /*4*/].f_3)
	{
		case 0:
			if (unk_0xC2169C00B643278B(unk_0x9B0761B4C3EB8BC7(), Local_75.f_2, Local_75.f_5, Local_75.f_5, 1000f, 0, 1, 0))
			{
				func_221();
				unk_0xBE20AB8238688965(&(Local_77[unk_0x59E2AD1A8ACEDA31() /*4*/].f_1), 0);
				unk_0xBE20AB8238688965(&(Global_2540384.f_4656), 0);
				Local_77[unk_0x59E2AD1A8ACEDA31() /*4*/].f_3 = 1;
			}
			if (Local_75.f_7 > 1)
			{
				Local_77[unk_0x59E2AD1A8ACEDA31() /*4*/].f_3 = 2;
			}
			break;
		
		case 1:
			func_195();
			func_130();
			if (Local_75.f_7 > 1)
			{
				Local_77[unk_0x59E2AD1A8ACEDA31() /*4*/].f_3 = 2;
			}
			break;
		
		case 2:
			func_14();
			break;
	}
}

void func_130()
{
	func_194();
	func_139();
	func_132();
	func_131();
}

void func_131()
{
	if (!unk_0xCE990E643CD9D0E5(iLocal_78, 5))
	{
		if (!unk_0xCE990E643CD9D0E5(iLocal_78, 4))
		{
			if (Local_75.f_17 == 0)
			{
				unk_0xBE20AB8238688965(&iLocal_78, 4);
			}
			else
			{
				unk_0xBE20AB8238688965(&iLocal_78, 5);
			}
		}
		else if (!func_278(unk_0x460153A63B9477BC(), 1, 1))
		{
			unk_0xBE20AB8238688965(&iLocal_78, 5);
		}
	}
}

void func_132()
{
	if ((((unk_0xA2C6E70C9BCA9C34() == 7 || unk_0xA2C6E70C9BCA9C34() == 8) || unk_0xA2C6E70C9BCA9C34() == 9) || unk_0xA2C6E70C9BCA9C34() == 10) || unk_0xA2C6E70C9BCA9C34() == 12)
	{
		func_138();
	}
	else
	{
		func_137();
	}
	if ((Local_75.f_12 - func_136(&(Local_75.f_10), 0, 0)) >= 0)
	{
		func_133((Local_75.f_12 - func_136(&(Local_75.f_10), 0, 0)), "DCP_TIMER", 0, 1, -1, 0, 2, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, -1);
	}
	else
	{
		func_133(0, "DCP_TIMER", 0, 1, -1, 0, 2, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, -1);
	}
}

void func_133(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17)
{
	int iVar0;
	int iVar1;
	
	iVar0 = -1;
	iVar1 = 0;
	while (iVar1 <= 9)
	{
		if (iVar0 == -1)
		{
			if (func_135(7, iVar1) == 0)
			{
				iVar0 = iVar1;
			}
		}
		iVar1++;
	}
	if (iVar0 > -1)
	{
		Global_1378744.f_1 = 1;
		func_134(7, iVar0);
		Global_1378744.f_4573[iVar0] = iParam0;
		StringCopy(&(Global_1378744.f_4573.f_11[iVar0 /*16*/]), sParam1, 64);
		Global_1378744.f_4573.f_172[iVar0] = iParam2;
		Global_1378744.f_4573.f_216[iVar0] = iParam3;
		Global_1378744.f_4573.f_183[iVar0] = iParam4;
		Global_1378744.f_4573.f_194[iVar0] = iParam5;
		Global_1378744.f_4573.f_249[iVar0] = iParam6;
		Global_1378744.f_4573.f_260[iVar0] = iParam7;
		Global_1378744.f_4573.f_205[iVar0] = iParam8;
		Global_1378744.f_4573.f_314[iVar0] = iParam9;
		Global_1378744.f_4573.f_325[iVar0] = iParam10;
		Global_1378744.f_4573.f_357[iVar0] = iParam11;
		Global_1378744.f_4573.f_238[iVar0] = iParam12;
		Global_1378744.f_4573.f_271[iVar0] = iParam13;
		Global_1378744.f_4573.f_368[iVar0] = iParam14;
		Global_1378744.f_4573.f_379[iVar0] = iParam15;
		Global_1378744.f_4573.f_390[iVar0] = iParam16;
		Global_1378744.f_4573.f_227[iVar0] = iParam17;
	}
}

void func_134(int iParam0, int iParam1)
{
	unk_0xBE20AB8238688965(&(Global_1378744.f_6304[iParam0]), iParam1);
}

bool func_135(int iParam0, int iParam1)
{
	return unk_0xCE990E643CD9D0E5(Global_1378744.f_6304[iParam0], iParam1);
}

int func_136(var uParam0, bool bParam1, bool bParam2)
{
	if (unk_0x25DDB354A40FFCDB() && !bParam1)
	{
		if (!bParam2)
		{
			return unk_0x624736CA66E14161(unk_0x6CAAB7E78B5D978A(), *uParam0);
		}
		else
		{
			return unk_0x624736CA66E14161(unk_0x29B9AF1CB5B8175D(), *uParam0);
		}
	}
	return unk_0x624736CA66E14161(unk_0x578C4EF320340AF7(), *uParam0);
}

void func_137()
{
	Global_1378744.f_1131 = 1;
}

void func_138()
{
	Global_1378744.f_1130 = 1;
}

void func_139()
{
	if (func_9(&uLocal_80, 30000, 0))
	{
		switch (Local_75.f_16)
		{
			case 2:
				func_191(2106, 1, -1);
				break;
			
			case 3:
				func_191(2107, 1, -1);
				break;
			
			case 4:
				func_191(2108, 1, -1);
				break;
			
			case 5:
				func_191(2109, 1, -1);
				break;
		}
		func_140(0, unk_0x9B0761B4C3EB8BC7(), "XPT_DSC", -1636175450, 2048546661, (Global_262145.f_8103 * Local_75.f_16), 1, -1, 0, 0, 0);
		Local_77[unk_0x59E2AD1A8ACEDA31() /*4*/].f_2++;
		func_5(&uLocal_80);
	}
}

int func_140(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, char* sParam8, bool bParam9, int iParam10)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_150(iParam0, sParam2, iParam3, iParam4, iParam5, iParam6, iParam7, bParam9);
	if (iParam4 == -592022605 || iParam4 == -1915191729)
	{
		if (unk_0xAE06B9E39EBDE049(iParam1))
		{
			if (unk_0xA1914E72A0EB31D0(iParam1))
			{
				iVar1 = unk_0x9048E8838E822F21(iParam1);
				func_146(unk_0x1D5C49FCA9BC5B02(iVar1, 31086, 0f, 0f, 0f), iVar0, 0, sParam8, iParam10);
			}
		}
	}
	else
	{
		func_141(iParam1, iVar0, sParam8, iParam10);
	}
	return iVar0;
}

void func_141(int iParam0, int iParam1, char* sParam2, int iParam3)
{
	struct<3> Var0;
	
	Var0 = { func_144(iParam0, 1) };
	if (iParam0 == func_143(unk_0x9B0761B4C3EB8BC7()))
	{
		func_142(1);
	}
	func_146(Var0, iParam1, 0, sParam2, iParam3);
}

void func_142(int iParam0)
{
	Global_2440049.f_2002 = iParam0;
}

int func_143(int iParam0)
{
	return iParam0;
}

Vector3 func_144(int iParam0, bool bParam1)
{
	struct<3> Var0;
	struct<3> Var1;
	float fVar2;
	struct<3> Var3;
	struct<3> Var4;
	float fVar5;
	
	if (unk_0xC337F69A1938DDA2())
	{
		Var1 = { unk_0x1DB2F48A1F5B2CD3(2) };
	}
	if (iParam0 == func_145(unk_0x9B0761B4C3EB8BC7()) && unk_0xF7B3A1430308F92B(unk_0xFA3A11B011BBD7F6()) == 4)
	{
		Var0 = { unk_0x7EC595B99EA7C4B1(iParam0, 0f, 8f, -0.2f) };
	}
	else
	{
		Var0 = { unk_0x3E4D3CCC220BDFB1(iParam0, 0) };
	}
	fVar2 = 0f;
	if (!unk_0xA59F96B50B97E63C(iParam0, 0))
	{
		fVar2 = unk_0xEF7858F25585F853(iParam0);
		if (unk_0xF7B3A1430308F92B(unk_0xFA3A11B011BBD7F6()) == 4)
		{
			fVar2 = Var1.f_2;
		}
	}
	unk_0x140662B520844E45(unk_0x36FE6D3220816ADA(iParam0), &Var3, &Var4);
	if (bParam1)
	{
		fVar5 = (Var4.f_2 + 0.18f);
	}
	else
	{
		fVar5 = (Var3.f_2 + 0.18f);
	}
	Var0 = { unk_0x1BAE5C94E38E44FE(Var0, fVar2, 0f, 0f, fVar5) };
	return Var0;
}

int func_145(int iParam0)
{
	return iParam0;
}

void func_146(struct<3> Param0, int iParam1, int iParam2, char* sParam3, int iParam4)
{
	int iVar0;
	int iVar1;
	
	if (iParam1 != 0)
	{
		iVar1 = -1;
		iVar0 = 0;
		while (iVar0 < 20)
		{
			if (Global_2440049.f_1401[iVar0 /*30*/].f_6 == 0 || Global_2440049.f_1401[iVar0 /*30*/].f_6 == 7)
			{
				iVar1 = iVar0;
				iVar0 = 20;
			}
			iVar0++;
		}
		if (iVar1 != -1)
		{
			Global_2440049.f_1401[iVar1 /*30*/] = { Param0 };
			Global_2440049.f_1401[iVar1 /*30*/].f_6 = 1;
			Global_2440049.f_1401[iVar1 /*30*/].f_4 = func_149(Global_2440049.f_1401[iVar1 /*30*/], &Global_1312335, &Global_1312336);
			Global_2440049.f_1401[iVar1 /*30*/].f_7 = unk_0x6CAAB7E78B5D978A();
			Global_2440049.f_1401[iVar1 /*30*/].f_3 = iParam1;
			Global_2440049.f_1401[iVar1 /*30*/].f_8 = iParam2;
			Global_2440049.f_1401[iVar1 /*30*/].f_9 = func_148();
			Global_2440049.f_1401[iVar1 /*30*/].f_10 = func_147();
			StringCopy(&(Global_2440049.f_1401[iVar1 /*30*/].f_22), sParam3, 16);
			Global_2440049.f_1401[iVar1 /*30*/].f_26 = unk_0x8C358101651A3F7C(unk_0x6CAAB7E78B5D978A(), iParam4);
		}
	}
}

int func_147()
{
	if (Global_2440049.f_2002)
	{
		Global_2440049.f_2002 = 0;
		return 1;
	}
	Global_2440049.f_2002 = 0;
	return 0;
}

var func_148()
{
	var uVar0;
	
	uVar0 = Global_2440049.f_2004;
	Global_2440049.f_2004 = 1;
	return uVar0;
}

float func_149(struct<3> Param0, var uParam1, var uParam2)
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	
	fVar0 = unk_0x272784C60C397DB6(unk_0x0F1DDC797C100E7F(), Param0, 1);
	if (fVar0 < 5f)
	{
		*uParam1 = 0.402f;
		*uParam2 = 0.476f;
		return 0f;
	}
	if (fVar0 > 20f)
	{
		*uParam1 = 0.212f;
		*uParam2 = 0.286f;
		return 1f;
	}
	fVar1 = (1f - ((fVar0 - 5f) / (20f - 5f)));
	fVar2 = (fVar1 * (0.402f - 0.212f));
	fVar3 = (fVar1 * (0.476f - 0.286f));
	*uParam1 = (fVar2 + 0.212f);
	*uParam2 = (fVar3 + 0.286f);
	return fVar1;
}

var func_150(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	var uVar0;
	
	uVar0 = func_151(iParam0, 0, sParam1, iParam4, iParam5, 0, iParam6, 1, iParam2, iParam3, bParam7);
	return uVar0;
}

int func_151(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, bool bParam5, int iParam6, bool bParam7, int iParam8, int iParam9, bool bParam10)
{
	float fVar0;
	int iVar1;
	int iVar2;
	float fVar3;
	
	if (func_190(unk_0x460153A63B9477BC()) || func_189(unk_0x460153A63B9477BC()))
	{
		if (Global_262145.f_9637 > 16000)
		{
			iVar2 = 16000;
		}
		else
		{
			iVar2 = Global_262145.f_9637;
		}
	}
	else if (func_187() || func_183(unk_0x460153A63B9477BC()))
	{
		if (Global_262145.f_22787 > 16000)
		{
			iVar2 = 16000;
		}
		else
		{
			iVar2 = Global_262145.f_22787;
		}
	}
	else if (Global_262145.f_6636 > 15000)
	{
		iVar2 = 15000;
	}
	else
	{
		iVar2 = Global_262145.f_6636;
	}
	if (func_182(sParam2))
	{
	}
	if (func_181())
	{
		if (iParam4 < 1)
		{
			iParam4 = 1;
		}
		iVar1 = round((IntToFloat(iParam3) * (IntToFloat(iParam4) + fVar0)));
		iVar1 = func_179(iVar1);
		fVar3 = (to_float(iVar1) * Global_262145.f_1);
		iVar1 = round(fVar3);
		if (bParam10)
		{
			iVar1 = func_178(&iVar1);
		}
		if (iParam1 == 0)
		{
			switch (iParam0)
			{
				case 2:
					func_175(0, &iVar1);
					break;
				
				case 3:
					func_175(1, &iVar1);
					break;
				
				case 1:
					func_172(&iVar1);
					break;
				}
		}
		if (iVar1 > Global_1688737)
		{
			return 0;
		}
		if (iParam1 == 0)
		{
			if (iVar1 > iVar2)
			{
				if (iParam0 == 1)
				{
					iVar1 = iVar2;
				}
				if (iParam0 == 2 || iParam0 == 3)
				{
					iVar1 = iVar2;
				}
			}
		}
		if (bParam7)
		{
			func_191(1164, iVar1, -1);
			if (iParam1 == 0)
			{
				func_162((func_171(unk_0x460153A63B9477BC()) + iVar1), iParam9, 0);
				if (iParam8 == 0)
				{
				}
				if (iParam9 == 0)
				{
				}
				unk_0xC0B1609C742F66E3(iVar1, iParam8, iParam9);
				if (Global_1590682[unk_0x460153A63B9477BC() /*883*/].f_39.f_2 != -1)
				{
					func_191(1165, iVar1, -1);
				}
				func_156(iVar1);
			}
		}
		if (bParam5)
		{
		}
		if (bParam7)
		{
			if (iParam6 == -1)
			{
				func_152((func_154(unk_0x460153A63B9477BC()) + iVar1));
			}
			else
			{
				func_152((func_154(unk_0x460153A63B9477BC()) + iParam6));
			}
		}
	}
	return iVar1;
}

void func_152(int iParam0)
{
	if (func_181())
	{
		Global_1590682[unk_0x460153A63B9477BC() /*883*/].f_211.f_5 = iParam0;
		func_153(joaat("MPPLY_GLOBALXP"), iParam0);
	}
}

void func_153(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != 0)
	{
		unk_0x6000E4684CB4330B(iVar0, iParam1, 1);
	}
}

int func_154(int iParam0)
{
	if (iParam0 > -1)
	{
		if (func_278(iParam0, 0, 1))
		{
			if (iParam0 == unk_0x460153A63B9477BC())
			{
				return func_155(joaat("MPPLY_GLOBALXP"));
			}
			else
			{
				return Global_1590682[iParam0 /*883*/].f_211.f_5;
			}
		}
		else
		{
			return func_155(joaat("MPPLY_GLOBALXP"));
		}
	}
	return 0;
}

int func_155(int iParam0)
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

void func_156(int iParam0)
{
	struct<13> Var0;
	int iVar1;
	
	Var0 = { func_161(unk_0x460153A63B9477BC()) };
	if (unk_0xE2FBD13450B2DA21())
	{
		if (unk_0xBF9EC1ED7E386622(&Var0))
		{
			iVar1 = func_159(func_160(&Var0));
			if (iVar1 == 0)
			{
				func_158(&Global_1388052, iParam0);
				func_157(joaat("MPPLY_CREW_LOCAL_XP_0"), Global_1388052);
			}
			else if (iVar1 == 1)
			{
				func_158(&Global_1388053, iParam0);
				func_157(joaat("MPPLY_CREW_LOCAL_XP_1"), Global_1388053);
			}
			else if (iVar1 == 2)
			{
				func_158(&Global_1388054, iParam0);
				func_157(joaat("MPPLY_CREW_LOCAL_XP_2"), Global_1388054);
			}
			else if (iVar1 == 3)
			{
				func_158(&Global_1388055, iParam0);
				func_157(joaat("MPPLY_CREW_LOCAL_XP_3"), Global_1388055);
			}
			else if (iVar1 == 4)
			{
				func_158(&Global_1388056, iParam0);
				func_157(joaat("MPPLY_CREW_LOCAL_XP_4"), Global_1388056);
			}
		}
	}
}

void func_157(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != 0)
	{
		unk_0x6000E4684CB4330B(iVar0, iParam1, 1);
	}
	switch (iParam0)
	{
		case joaat("MPPLY_CREW_0_ID"):
			Global_1388047 = iParam1;
			break;
		
		case joaat("MPPLY_CREW_1_ID"):
			Global_1388049 = iParam1;
			break;
		
		case joaat("MPPLY_CREW_2_ID"):
			Global_1388049 = iParam1;
			break;
		
		case joaat("MPPLY_CREW_3_ID"):
			Global_1388050 = iParam1;
			break;
		
		case joaat("MPPLY_CREW_4_ID"):
			Global_1388051 = iParam1;
			break;
		
		case joaat("MPPLY_CREW_LOCAL_XP_0"):
			Global_1388052 = iParam1;
			break;
		
		case joaat("MPPLY_CREW_LOCAL_XP_1"):
			Global_1388053 = iParam1;
			break;
		
		case joaat("MPPLY_CREW_LOCAL_XP_2"):
			Global_1388054 = iParam1;
			break;
		
		case joaat("MPPLY_CREW_LOCAL_XP_3"):
			Global_1388055 = iParam1;
			break;
		
		case joaat("MPPLY_CREW_LOCAL_XP_4"):
			Global_1388056 = iParam1;
			break;
		
		case joaat("MPPLY_BECAME_CHEATER_NUM"):
			Global_1388057 = iParam1;
			break;
		
		case joaat("MPPLY_FRIENDLY"):
			Global_1388058 = iParam1;
			break;
		
		case joaat("MPPLY_OFFENSIVE_LANGUAGE"):
			Global_1388059 = iParam1;
			break;
		
		case joaat("MPPLY_GRIEFING"):
			Global_1388060 = iParam1;
			break;
		
		case joaat("MPPLY_HELPFUL"):
			Global_1388061 = iParam1;
			break;
		
		case joaat("MPPLY_OFFENSIVE_TAGPLATE"):
			Global_1388062 = iParam1;
			break;
		
		case joaat("MPPLY_OFFENSIVE_UGC"):
			Global_1388063 = iParam1;
			break;
		
		default:
			break;
	}
}

void func_158(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 + iParam1);
}

int func_159(int iParam0)
{
	if (iParam0 == Global_1388047)
	{
		return 0;
	}
	else if (iParam0 == Global_1388048)
	{
		return 1;
	}
	else if (iParam0 == Global_1388049)
	{
		return 2;
	}
	else if (iParam0 == Global_1388050)
	{
		return 3;
	}
	else if (iParam0 == Global_1388051)
	{
		return 4;
	}
	else
	{
		return -1;
	}
	return -1;
}

int func_160(var uParam0)
{
	if (unk_0xE2FBD13450B2DA21())
	{
		if (unk_0xBF9EC1ED7E386622(uParam0))
		{
			return Global_2462175;
		}
	}
	return Global_2462175;
}

struct<13> func_161(int iParam0)
{
	struct<13> Var0;
	
	unk_0x2BDD80E79441BD36(iParam0, &Var0, 13);
	return Var0;
}

void func_162(int iParam0, int iParam1, int iParam2)
{
	if (func_181())
	{
		if (iParam0 >= 1787576850)
		{
			iParam0 = 1787576850;
		}
		if (Global_262145.f_9605 == 0 && iParam1 != -1076930708)
		{
			if (iParam2 == 0)
			{
				if (iParam0 < Global_1388197[func_18(-1)])
				{
					unk_0xC0B1609C742F66E3(iParam0, -523908350, iParam1);
					return;
				}
				else if (iParam0 == Global_1388197[func_18(-1)])
				{
					return;
				}
			}
		}
		if (Global_262145.f_9604 == 0)
		{
			if (iParam0 == 0)
			{
				unk_0xC0B1609C742F66E3(iParam0, -1158693853, -1345423847);
				if (iParam2 == 0)
				{
					return;
				}
			}
		}
		if (Global_262145.f_9604 == 0)
		{
			if (iParam0 < 0)
			{
				unk_0xC0B1609C742F66E3(iParam0, -1586921397, iParam1);
				return;
			}
		}
		if (func_170(unk_0x460153A63B9477BC()))
		{
			Global_1590682[unk_0x460153A63B9477BC() /*883*/].f_211.f_1 = iParam0;
			Global_1590682[unk_0x460153A63B9477BC() /*883*/].f_211.f_6 = func_168(iParam0, 1);
		}
		func_167(639, iParam0, -1, 1);
		func_166(640, func_168(iParam0, 1), -1, 1, 0);
		Global_1388197[func_18(-1)] = iParam0;
		func_163(-1109644434, 7, 0);
	}
}

void func_163(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	if (func_165(iParam1, iParam2))
	{
		iVar0 = func_164();
		Global_2462127[iVar0] = iParam1;
		Global_2462138[iVar0] = iParam0;
	}
}

int func_164()
{
	int iVar0;
	int iVar1;
	
	iVar0 = 9;
	iVar1 = 0;
	while (iVar1 <= 9)
	{
		if (Global_2462127[iVar1] == 0)
		{
			iVar0 = iVar1;
			iVar1 = 10;
		}
		iVar1++;
	}
	return iVar0;
}

int func_165(int iParam0, var uParam1)
{
	if (Global_1312884)
	{
		return 0;
	}
	if (iParam0 == 22)
	{
		return 1;
	}
	if ((((((((uParam1 || !Global_1312896) || iParam0 == 3) || iParam0 == 10) || iParam0 == 11) || iParam0 == 27) || iParam0 == 28) || iParam0 == 29) || iParam0 == 30)
	{
		return 1;
	}
	else
	{
		return 0;
	}
	return 1;
}

void func_166(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	int iVar0;
	
	if (bParam4)
	{
	}
	iVar0 = Global_2551832[iParam0 /*3*/][func_18(iParam2)];
	if (iVar0 != 0)
	{
		unk_0x6000E4684CB4330B(iVar0, iParam1, iParam3);
	}
}

void func_167(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	iVar0 = Global_2551832[iParam0 /*3*/][func_18(iParam2)];
	if (iVar0 != 0)
	{
		unk_0x6000E4684CB4330B(iVar0, iParam1, iParam3);
	}
	switch (iParam0)
	{
		case 787:
			Global_1388125[func_18(iParam2)] = iParam1;
			break;
		
		case 788:
			Global_1388131[func_18(iParam2)] = iParam1;
			break;
		
		case 789:
			Global_1388137[func_18(iParam2)] = iParam1;
			break;
		
		case 790:
			Global_1388143[func_18(iParam2)] = iParam1;
			break;
		
		case 8727:
			Global_1388149[func_18(iParam2)] = iParam1;
			break;
		
		case 777:
			Global_1388095[func_18(iParam2)] = iParam1;
			break;
		
		case 778:
			Global_1388101[func_18(iParam2)] = iParam1;
			break;
		
		case 779:
			Global_1388107[func_18(iParam2)] = iParam1;
			break;
		
		case 780:
			Global_1388113[func_18(iParam2)] = iParam1;
			break;
		
		case 8729:
			Global_1388119[func_18(iParam2)] = iParam1;
			break;
		
		case 767:
			Global_1388065[func_18(iParam2)] = iParam1;
			break;
		
		case 768:
			Global_1388071[func_18(iParam2)] = iParam1;
			break;
		
		case 769:
			Global_1388077[func_18(iParam2)] = iParam1;
			break;
		
		case 770:
			Global_1388083[func_18(iParam2)] = iParam1;
			break;
		
		case 8731:
			Global_1388089[func_18(iParam2)] = iParam1;
			break;
		
		case 757:
			Global_1388155[func_18(iParam2)] = iParam1;
			break;
		
		case 758:
			Global_1388161[func_18(iParam2)] = iParam1;
			break;
		
		case 759:
			Global_1388167[func_18(iParam2)] = iParam1;
			break;
		
		case 760:
			Global_1388173[func_18(iParam2)] = iParam1;
			break;
		
		case 8733:
			Global_1388179[func_18(iParam2)] = iParam1;
			break;
		
		case 1303:
			Global_1388185[func_18(iParam2)] = iParam1;
			break;
		
		case 7234:
			Global_1388191[func_18(iParam2)] = iParam1;
			break;
		
		case 639:
			Global_1388197[func_18(iParam2)] = iParam1;
			break;
		
		case 1278:
			Global_1388203[func_18(iParam2)] = iParam1;
			break;
		
		case 1877:
			Global_2590417[0 /*3*/][func_18(iParam2)] = iParam1;
			break;
		
		case 2268:
			Global_2590417[1 /*3*/][func_18(iParam2)] = iParam1;
			break;
		
		case 2930:
			Global_2590417[2 /*3*/][func_18(iParam2)] = iParam1;
			break;
		
		case 3059:
			Global_2590417[3 /*3*/][func_18(iParam2)] = iParam1;
			break;
		
		case 10138:
			Global_2590566[func_18(iParam2)] = iParam1;
			break;
		
		case 764:
			Global_1388209[func_18(iParam2)] = iParam1;
			break;
		
		case 765:
			Global_1388215[func_18(iParam2)] = iParam1;
			break;
		
		case 766:
			Global_1388221[func_18(iParam2)] = iParam1;
			break;
		
		case 8732:
			Global_1388227[func_18(iParam2)] = iParam1;
			break;
		
		case 9534:
			Global_1388233[func_18(iParam2)] = iParam1;
			break;
		
		case 1236:
			Global_1388239[func_18(iParam2)] = iParam1;
			break;
		
		case 3054:
			Global_2590490[0 /*3*/][func_18(iParam2)] = iParam1;
			break;
		
		case 3055:
			Global_2590490[1 /*3*/][func_18(iParam2)] = iParam1;
			break;
		
		case 3056:
			Global_2590490[2 /*3*/][func_18(iParam2)] = iParam1;
			break;
		
		case 3057:
			Global_2590490[3 /*3*/][func_18(iParam2)] = iParam1;
			break;
		
		case 3058:
			Global_2590490[4 /*3*/][func_18(iParam2)] = iParam1;
			break;
		
		case 3637:
			Global_2590569[0 /*3*/][func_18(iParam2)] = iParam1;
			break;
		
		case 3638:
			Global_2590569[1 /*3*/][func_18(iParam2)] = iParam1;
			break;
		
		case 3639:
			Global_2590569[2 /*3*/][func_18(iParam2)] = iParam1;
			break;
		
		case 3640:
			Global_2590569[3 /*3*/][func_18(iParam2)] = iParam1;
			break;
		
		case 3641:
			Global_2590569[4 /*3*/][func_18(iParam2)] = iParam1;
			break;
		
		case 3642:
			Global_2590585[0 /*3*/][func_18(iParam2)] = iParam1;
			break;
		
		case 3643:
			Global_2590585[1 /*3*/][func_18(iParam2)] = iParam1;
			break;
		
		case 3644:
			Global_2590585[2 /*3*/][func_18(iParam2)] = iParam1;
			break;
		
		case 3645:
			Global_2590585[3 /*3*/][func_18(iParam2)] = iParam1;
			break;
		
		case 3646:
			Global_2590585[4 /*3*/][func_18(iParam2)] = iParam1;
			break;
		
		case 3222:
			Global_2590490[5 /*3*/][func_18(iParam2)] = iParam1;
			break;
		
		case 3228:
			Global_2590417[4 /*3*/][func_18(iParam2)] = iParam1;
			break;
		
		case 3664:
			Global_2590601[func_18(iParam2)] = iParam1;
			break;
		
		case 3665:
			Global_2590610[func_18(iParam2)] = iParam1;
			break;
		
		case 3666:
			Global_2590604[func_18(iParam2)] = iParam1;
			break;
		
		case 3667:
			Global_2590613[func_18(iParam2)] = iParam1;
			break;
		
		case 3668:
			Global_2590607[func_18(iParam2)] = iParam1;
			break;
		
		case 3669:
			Global_2590616[func_18(iParam2)] = iParam1;
			break;
		
		case 3690:
			Global_2590619[func_18(iParam2)] = iParam1;
			break;
		
		case 3230:
			Global_2590490[6 /*3*/][func_18(iParam2)] = iParam1;
			break;
		
		case 3231:
			Global_2590417[5 /*3*/][func_18(iParam2)] = iParam1;
			break;
		
		case 3235:
			Global_2590490[7 /*3*/][func_18(iParam2)] = iParam1;
			break;
		
		case 3233:
			Global_2590417[6 /*3*/][func_18(iParam2)] = iParam1;
			break;
		
		case 4020:
			Global_2590490[8 /*3*/][func_18(iParam2)] = iParam1;
			break;
		
		case 4021:
			Global_2590417[7 /*3*/][func_18(iParam2)] = iParam1;
			break;
		
		case 4023:
			Global_2590490[9 /*3*/][func_18(iParam2)] = iParam1;
			break;
		
		case 4024:
			Global_2590417[8 /*3*/][func_18(iParam2)] = iParam1;
			break;
		
		case 4026:
			Global_2590490[10 /*3*/][func_18(iParam2)] = iParam1;
			break;
		
		case 4027:
			Global_2590417[9 /*3*/][func_18(iParam2)] = iParam1;
			break;
		
		case 4029:
			Global_2590490[11 /*3*/][func_18(iParam2)] = iParam1;
			break;
		
		case 4030:
			Global_2590417[10 /*3*/][func_18(iParam2)] = iParam1;
			break;
		
		case 6110:
			Global_2590490[12 /*3*/][func_18(iParam2)] = iParam1;
			break;
		
		case 6111:
			Global_2590417[11 /*3*/][func_18(iParam2)] = iParam1;
			break;
		
		case 6168:
			Global_2590490[13 /*3*/][func_18(iParam2)] = iParam1;
			break;
		
		case 6169:
			Global_2590417[12 /*3*/][func_18(iParam2)] = iParam1;
			break;
		
		case 6546:
			Global_2590490[14 /*3*/][func_18(iParam2)] = iParam1;
			break;
		
		case 6547:
			Global_2590417[13 /*3*/][func_18(iParam2)] = iParam1;
			break;
		
		case 6559:
			Global_2590490[15 /*3*/][func_18(iParam2)] = iParam1;
			break;
		
		case 6560:
			Global_2590417[14 /*3*/][func_18(iParam2)] = iParam1;
			break;
		
		case 6562:
			Global_2590490[16 /*3*/][func_18(iParam2)] = iParam1;
			break;
		
		case 6563:
			Global_2590417[15 /*3*/][func_18(iParam2)] = iParam1;
			break;
		
		case 6565:
			Global_2590490[17 /*3*/][func_18(iParam2)] = iParam1;
			break;
		
		case 6566:
			Global_2590417[16 /*3*/][func_18(iParam2)] = iParam1;
			break;
		
		case 7284:
			Global_2590417[17 /*3*/][func_18(iParam2)] = iParam1;
			break;
		
		case 7286:
			Global_2590417[18 /*3*/][func_18(iParam2)] = iParam1;
			break;
		
		case 7288:
			Global_2590417[19 /*3*/][func_18(iParam2)] = iParam1;
			break;
		
		case 8011:
			Global_2590417[20 /*3*/][func_18(iParam2)] = iParam1;
			break;
		
		case 8283:
			Global_2590622[func_18(iParam2)] = iParam1;
			break;
		
		case 8284:
			Global_2590625[func_18(iParam2)] = iParam1;
			break;
		
		case 8285:
			Global_2590628[func_18(iParam2)] = iParam1;
			break;
		
		case 8286:
			Global_2590631[func_18(iParam2)] = iParam1;
			break;
		
		case 8287:
			Global_2590634[func_18(iParam2)] = iParam1;
			break;
		
		case 8288:
			Global_2590637[func_18(iParam2)] = iParam1;
			break;
		
		case 8289:
			Global_2590640[func_18(iParam2)] = iParam1;
			break;
		
		case 8290:
			Global_2590643[func_18(iParam2)] = iParam1;
			break;
		
		case 8291:
			Global_2590646[func_18(iParam2)] = iParam1;
			break;
		
		case 8292:
			Global_2590649[func_18(iParam2)] = iParam1;
			break;
		
		case 8293:
			Global_2590652[func_18(iParam2)] = iParam1;
			break;
		
		case 8294:
			Global_2590655[func_18(iParam2)] = iParam1;
			break;
		
		case 8295:
			Global_2590658[func_18(iParam2)] = iParam1;
			break;
		
		case 8901:
			Global_2590661[func_18(iParam2)] = iParam1;
			break;
		
		case 8535:
			Global_2590417[21 /*3*/][func_18(iParam2)] = iParam1;
			break;
		
		case 8978:
			Global_2590490[23 /*3*/][func_18(iParam2)] = iParam1;
			break;
		
		case 8976:
			Global_2590417[22 /*3*/][func_18(iParam2)] = iParam1;
			break;
		
		case 8981:
			Global_2590490[24 /*3*/][func_18(iParam2)] = iParam1;
			break;
		
		case 8979:
			Global_2590417[23 /*3*/][func_18(iParam2)] = iParam1;
			break;
		
		default:
			break;
	}
}

int func_168(int iParam0, bool bParam1)
{
	if (bParam1)
	{
	}
	return func_169(iParam0, 0);
}

int func_169(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	float fVar4;
	
	if (iParam1 == 0)
	{
	}
	iVar1 = 8000;
	iVar2 = 0;
	iVar3 = ((iVar1 - iVar2) / 2);
	iVar0 = 0;
	while (iVar0 <= 100)
	{
		if (iVar1 == iVar2)
		{
			iVar0 = 8000;
			if (iVar3 == 0)
			{
				iVar3 = 1;
			}
			return iVar3;
		}
		if (Global_292402[iVar3] == iParam0)
		{
			iVar1 = iVar3;
			iVar2 = iVar3;
		}
		else if (Global_292402[iVar3] < iParam0)
		{
			if (iVar2 == iVar3)
			{
				iVar2++;
			}
			else
			{
				iVar2 = iVar3;
			}
		}
		else if (iVar1 == iVar3)
		{
			iVar1 = (iVar1 - 1);
		}
		else
		{
			iVar1 = iVar3;
		}
		fVar4 = (((to_float(iVar1) - to_float(iVar2)) / 2f) + to_float(iVar2));
		iVar3 = round(fVar4);
		iVar0++;
	}
	return 8000;
}

int func_170(int iParam0)
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

int func_171(int iParam0)
{
	if (Global_1312485.f_9 == 0)
	{
		if (iParam0 > -1)
		{
			if (iParam0 == unk_0x460153A63B9477BC())
			{
				return Global_1388197[func_18(-1)];
			}
			else if (func_170(iParam0))
			{
				return Global_1590682[iParam0 /*883*/].f_211.f_1;
			}
		}
	}
	else
	{
		return Global_1388197[func_18(-1)];
	}
	return 0;
}

void func_172(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	iVar1 = unk_0x6CC163E30ECE0790(unk_0x460153A63B9477BC());
	iVar0 = 0;
	while (iVar0 < unk_0xEFA28384DDD283E1())
	{
		iVar4 = unk_0x628A51AC66E80772(iVar0);
		if (unk_0xBD09DF93F957A0CF(iVar4))
		{
			iVar5 = unk_0x9019589211A13B02(iVar4);
			if (unk_0x6CC163E30ECE0790(iVar5) != -1)
			{
				if (unk_0x6CC163E30ECE0790(iVar5) == iVar1 || func_46(unk_0x6CC163E30ECE0790(iVar5), iVar1, 0))
				{
					iVar2++;
					if (iVar5 != unk_0x460153A63B9477BC())
					{
						if (func_174(unk_0x460153A63B9477BC(), iVar5))
						{
							bVar3 = true;
						}
					}
				}
			}
		}
		iVar0++;
	}
	if (bVar3)
	{
		iVar6 = round((func_173(*iParam0, 100) * (10f * Global_262145.f_4218)));
	}
	if (iVar2 > 4)
	{
		iVar2 = 4;
	}
	if (iVar2 >= 2)
	{
		iVar7 = round((func_173(*iParam0, 100) * (20f * Global_262145.f_4211)));
	}
	*iParam0 = (*iParam0 + iVar6);
	*iParam0 = (*iParam0 + iVar7);
}

float func_173(int iParam0, int iParam1)
{
	float fVar0;
	float fVar1;
	float fVar2;
	
	fVar0 = to_float(iParam0);
	fVar1 = to_float(iParam1);
	fVar2 = (fVar0 / fVar1);
	return fVar2;
}

int func_174(int iParam0, int iParam1)
{
	if (unk_0xE2FBD13450B2DA21())
	{
		Global_2515173 = { func_161(iParam0) };
		Global_2515186 = { func_161(iParam1) };
		if (unk_0xBF9EC1ED7E386622(&Global_2515173))
		{
			if (unk_0xBF9EC1ED7E386622(&Global_2515186))
			{
				unk_0x192BD21E18525C69(&Global_2515103, 35, &Global_2515173);
				unk_0x192BD21E18525C69(&Global_2515138, 35, &Global_2515186);
				if (Global_2515103 == Global_2515138)
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

void func_175(bool bParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	
	if (bParam0)
	{
		iVar0 = 0;
		while (iVar0 < unk_0xEFA28384DDD283E1())
		{
			iVar3 = iVar0;
			if (unk_0xBD09DF93F957A0CF(iVar3))
			{
				iVar4 = unk_0x9019589211A13B02(iVar3);
				if (func_278(iVar4, 0, 1))
				{
					if (iVar4 != unk_0x460153A63B9477BC())
					{
						iVar1++;
						if (func_174(unk_0x460153A63B9477BC(), iVar4))
						{
							bVar2 = true;
						}
					}
				}
			}
			iVar0++;
		}
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < 32)
		{
			iVar4 = iVar0;
			if (func_278(iVar4, 1, 1))
			{
				if (iVar4 != unk_0x460153A63B9477BC())
				{
					if (func_176(unk_0x460153A63B9477BC(), iVar4) <= 20f)
					{
						iVar1++;
						if (func_174(unk_0x460153A63B9477BC(), iVar4))
						{
							bVar2 = true;
						}
					}
				}
			}
			iVar0++;
		}
	}
	if (bVar2)
	{
		iVar5 = round((func_173(*iParam1, 100) * (10f * Global_262145.f_4218)));
	}
	if (iVar1 > 4)
	{
		iVar1 = 4;
	}
	if (iVar1 >= 1)
	{
		iVar6 = round((func_173(*iParam1, 100) * (20f * Global_262145.f_4211)));
	}
	*iParam1 = (*iParam1 + iVar5);
	*iParam1 = (*iParam1 + iVar6);
}

float func_176(int iParam0, int iParam1)
{
	return vdist(func_177(iParam0), func_177(iParam1));
	return 0f;
}

Vector3 func_177(int iParam0)
{
	return unk_0x3E4D3CCC220BDFB1(unk_0x1FA7B77001D60F9D(iParam0), 0);
}

int func_178(int iParam0)
{
	int iVar0;
	
	if (unk_0x2F9269FB5C4717C0() != 3)
	{
		return *iParam0;
	}
	iVar0 = round((func_173(*iParam0, 100) * 25f));
	*iParam0 = (*iParam0 + iVar0);
	return *iParam0;
}

int func_179(int iParam0)
{
	if (iParam0 < 0)
	{
		if (unk_0x44F29CF6A0675F4F(iParam0) > func_171(unk_0x460153A63B9477BC()))
		{
			iParam0 = -func_171(unk_0x460153A63B9477BC());
		}
	}
	if (func_180(8000, 0, 0) > 0)
	{
		if (func_180(8000, 0, 0) < (iParam0 + func_171(unk_0x460153A63B9477BC())))
		{
			iParam0 = (func_180(8000, 0, 0) - func_171(unk_0x460153A63B9477BC()));
		}
	}
	return iParam0;
}

int func_180(int iParam0, bool bParam1, int iParam2)
{
	if (iParam2 == 0)
	{
	}
	if (bParam1)
	{
	}
	if (iParam0 >= 8000)
	{
		iParam0 = 8000;
	}
	return Global_292402[iParam0];
}

int func_181()
{
	return 1;
}

int func_182(char* sParam0)
{
	if (unk_0x211E6DB3335430B4(sParam0))
	{
		return 1;
	}
	else if (unk_0xF005CCA4263DF67F(sParam0, "") || unk_0xF005CCA4263DF67F(sParam0, "0"))
	{
		return 1;
	}
	return 0;
}

int func_183(int iParam0)
{
	return func_184(func_185(iParam0));
}

int func_184(int iParam0)
{
	switch (iParam0)
	{
		case 233:
			return 1;
		
		default:
	}
	return 0;
}

int func_185(int iParam0)
{
	if (func_186(iParam0, 0))
	{
		return Global_1630317[iParam0 /*595*/].f_11.f_33;
	}
	return -1;
}

int func_186(int iParam0, int iParam1)
{
	if (Global_1630317[iParam0 /*595*/].f_11.f_33 != -1 || (iParam1 && Global_1630317[iParam0 /*595*/].f_11.f_32 != -1))
	{
		return 1;
	}
	return 0;
}

bool func_187()
{
	if (unk_0xFC559366953F62B3())
	{
		return func_34();
	}
	return func_188(Global_4456448.f_82708);
}

int func_188(int iParam0)
{
	int iVar0;
	
	if (iParam0 == 0)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 16)
	{
		if (Global_262145.f_5009[iVar0] == iParam0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

bool func_189(int iParam0)
{
	return Global_2425869[iParam0 /*443*/].f_119 == 2;
}

bool func_190(int iParam0)
{
	return Global_2425869[iParam0 /*443*/].f_119 == 7;
}

void func_191(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	iVar0 = func_193(iParam0, func_18(iParam2), 0);
	iVar0 = (iVar0 + iParam1);
	if (!func_192(iParam0))
	{
		func_166(iParam0, iVar0, iParam2, 1, 0);
	}
	else
	{
		func_167(iParam0, iVar0, iParam2, 1);
	}
}

int func_192(int iParam0)
{
	if (Global_1388046)
	{
		switch (iParam0)
		{
			case 787:
			case 788:
			case 789:
			case 790:
			case 8727:
			case 777:
			case 778:
			case 779:
			case 780:
			case 8729:
			case 767:
			case 768:
			case 769:
			case 770:
			case 8731:
			case 757:
			case 758:
			case 759:
			case 760:
			case 8733:
			case 1303:
			case 7234:
			case 639:
			case 1278:
			case 764:
			case 765:
			case 766:
			case 8732:
			case 9534:
			case 1236:
			case 1877:
			case 2268:
			case 2930:
			case 3059:
			case 10138:
			case 3054:
			case 3055:
			case 3056:
			case 3057:
			case 3058:
			case 3233:
			case 3235:
			case 3637:
			case 3638:
			case 3639:
			case 3640:
			case 3641:
			case 3642:
			case 3643:
			case 3644:
			case 3645:
			case 3646:
			case 3228:
			case 3222:
			case 3664:
			case 3665:
			case 3666:
			case 3667:
			case 3668:
			case 3669:
			case 3690:
			case 3231:
			case 3230:
			case 4021:
			case 4020:
			case 4024:
			case 4023:
			case 4027:
			case 4026:
			case 4030:
			case 4029:
			case 6111:
			case 6110:
			case 6169:
			case 6168:
			case 6534:
			case 6533:
			case 6547:
			case 6546:
			case 6560:
			case 6559:
			case 6563:
			case 6562:
			case 6566:
			case 6565:
			case 7284:
			case 7286:
			case 7288:
			case 8283:
			case 8284:
			case 8285:
			case 8286:
			case 8287:
			case 8288:
			case 8289:
			case 8290:
			case 8291:
			case 8292:
			case 8293:
			case 8294:
			case 8295:
			case 8011:
			case 8535:
			case 8976:
			case 8978:
			case 8979:
			case 8981:
				return 1;
				break;
			}
	}
	return 0;
}

int func_193(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	var uVar1;
	
	if (iParam0 != 11771)
	{
		if (iParam2 == 0)
		{
		}
		iVar0 = Global_2551832[iParam0 /*3*/][func_18(iParam1)];
		if (unk_0xD2F202166691EDB2(iVar0, &uVar1, -1))
		{
			return uVar1;
		}
	}
	return 0;
}

void func_194()
{
	if (func_9(&uLocal_82, 10000, 0))
	{
		if (unk_0x1A3D0DF92BF7D8C4(unk_0x460153A63B9477BC()) < Local_75.f_16)
		{
			unk_0xCAD5C18968E57C30(unk_0x460153A63B9477BC(), Local_75.f_16, 0);
			unk_0x4B86C627B5EABFBF(unk_0x460153A63B9477BC(), 0);
		}
		unk_0x458523DB8A789DCF(unk_0x460153A63B9477BC());
	}
}

void func_195()
{
	if (!unk_0xC2169C00B643278B(unk_0x9B0761B4C3EB8BC7(), Local_75.f_2, Local_75.f_5, Local_75.f_5, 1000f, 0, 1, 0))
	{
		func_198();
		Local_77[unk_0x59E2AD1A8ACEDA31() /*4*/].f_3 = 0;
	}
	else if (!unk_0xC2169C00B643278B(unk_0x9B0761B4C3EB8BC7(), Local_75.f_2, Local_75.f_6, Local_75.f_6, 950f, 0, 1, 0))
	{
		if (!unk_0xCE990E643CD9D0E5(iLocal_78, 0) && unk_0xCE990E643CD9D0E5(iLocal_78, 3))
		{
			if (!unk_0xDABD547F0DF2906C() && !func_197())
			{
				if (!func_245())
				{
					func_196("DCP_LEAVE", -1);
				}
				unk_0xBE20AB8238688965(&iLocal_78, 0);
			}
		}
	}
	else
	{
		if (!unk_0xCE990E643CD9D0E5(iLocal_78, 3))
		{
			unk_0xBE20AB8238688965(&iLocal_78, 3);
		}
		if (unk_0xCE990E643CD9D0E5(iLocal_78, 0))
		{
			unk_0xD2459066EA58CE43(&iLocal_78, 0);
		}
	}
}

void func_196(char* sParam0, int iParam1)
{
	unk_0x17751E107423AFE9(sParam0);
	unk_0x1A169149B3D18FCB(0, 0, 1, iParam1);
}

bool func_197()
{
	return unk_0x578C4EF320340AF7() <= Global_22550.f_5878 + 100;
}

void func_198()
{
	func_5(&uLocal_80);
	func_5(&uLocal_82);
	func_199();
	unk_0xD2459066EA58CE43(&(Local_77[unk_0x59E2AD1A8ACEDA31() /*4*/].f_1), 0);
	unk_0xD2459066EA58CE43(&iLocal_78, 3);
	unk_0xBE20AB8238688965(&(Global_2540384.f_4656), 0);
	if (!unk_0xCE990E643CD9D0E5(iLocal_78, 5))
	{
		unk_0xBE20AB8238688965(&iLocal_78, 5);
	}
}

void func_199()
{
	if (unk_0xCE990E643CD9D0E5(iLocal_78, 2))
	{
		func_200(1, 1, 0);
		unk_0xD2459066EA58CE43(&iLocal_78, 2);
	}
}

void func_200(bool bParam0, bool bParam1, bool bParam2)
{
	if (bParam1)
	{
		unk_0x13AF25746D6C3CA9(&(Global_2405074.f_45), &Global_2409354, 320);
	}
	else
	{
		Global_2405074.f_45 = { Global_2409354 };
		Global_2405074.f_45.f_49 = { Global_2409354.f_49 };
		Global_2405074.f_45.f_52 = Global_2409354.f_52;
		Global_2405074.f_45.f_53 = Global_2409354.f_53;
	}
	if (bParam0)
	{
		func_220();
	}
	if (!bParam2)
	{
		func_203(0, 1, 0, 1060320051, 1086324736, 1065353216, 1088421888, 1084227584, 0, 1066192077, 0, 0, 1, 0, 1109393408);
	}
	func_202(0);
	func_201();
}

void func_201()
{
	struct<6> Var0;
	
	if (Global_2405074.f_487.f_1 == unk_0x354AD085195C5FA6())
	{
		Global_2405074.f_487 = { Var0 };
	}
}

void func_202(bool bParam0)
{
	if (bParam0)
	{
		Global_2405074.f_707 = 0;
	}
	else
	{
		Global_2405074.f_707 = 1;
	}
}

void func_203(bool bParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14)
{
	if (bParam0)
	{
		if (func_219())
		{
			func_218();
		}
		Global_2405074.f_708.f_518 = unk_0x354AD085195C5FA6();
		Global_2405074.f_708.f_504 = iParam1;
		Global_2405074.f_708.f_505 = iParam2;
		Global_2405074.f_708.f_506 = iParam10;
		func_216();
		func_207(8, 0, 0, 0, 0);
		Global_2405074.f_708.f_507 = iParam11;
		Global_2405074.f_708.f_512 = iParam3;
		Global_2405074.f_708.f_513 = iParam4;
		Global_2405074.f_708.f_510 = iParam5;
		Global_2405074.f_708.f_511 = iParam6;
		Global_2405074.f_708.f_514 = iParam7;
		Global_2405074.f_708.f_515 = iParam8;
		Global_2405074.f_708.f_516 = iParam9;
		Global_2405074.f_708.f_517 = iParam14;
		Global_2405074.f_708.f_508 = iParam12;
		Global_2405074.f_708.f_509 = iParam13;
		Global_2405074.f_1747 = 1;
	}
	else
	{
		func_204();
	}
}

void func_204()
{
	if (func_219() && !func_206())
	{
		func_218();
	}
	if (func_206())
	{
		func_205();
	}
	else
	{
		func_216();
		func_207(0, 0, 0, 0, 0);
		Global_2405074.f_1747 = 0;
		Global_2405074.f_1746 = 0;
	}
}

void func_205()
{
	unk_0x13AF25746D6C3CA9(&(Global_2405074.f_708), &(Global_2405074.f_1227), 519);
	Global_2405074.f_487 = { Global_2405074.f_493 };
	if (unk_0x354AD085195C5FA6() == Global_2405074.f_708.f_518)
	{
		Global_2405074.f_1746 = 0;
	}
}

int func_206()
{
	if ((Global_2405074.f_1746 && !unk_0x354AD085195C5FA6() == Global_2405074.f_1227.f_518) && unk_0x7FD2BDF03806FD9D(Global_2405074.f_1227.f_518))
	{
		return 1;
	}
	return 0;
}

void func_207(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	if (Global_2440049.f_2005.f_703.f_16 != func_75())
	{
		if (unk_0xCE990E643CD9D0E5(Global_2425869[Global_2440049.f_2005.f_703.f_16 /*443*/].f_411, 0) && func_208())
		{
			iParam0 = 23;
		}
	}
	if (iParam0 != 18 && iParam0 != 17)
	{
		Global_2412648 = 0;
	}
	Global_2405074.f_487 = iParam0;
	Global_2405074.f_487.f_1 = unk_0x354AD085195C5FA6();
	Global_2405074.f_487.f_2 = iParam1;
	Global_2405074.f_487.f_3 = iParam2;
	Global_2405074.f_487.f_4 = iParam3;
	Global_2405074.f_487.f_5 = iParam4;
}

int func_208()
{
	if ((((((func_185(unk_0x460153A63B9477BC()) == 229 || func_185(unk_0x460153A63B9477BC()) == 191) || func_215()) || func_214()) || func_213(unk_0x460153A63B9477BC())) || Global_2515847.f_227 == 1) || (Global_2405074.f_1747 && func_209(unk_0x460153A63B9477BC())))
	{
		return 0;
	}
	return 1;
}

int func_209(int iParam0)
{
	if (func_212(iParam0))
	{
		return 1;
	}
	if (func_210(iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_210(int iParam0)
{
	return func_211(iParam0, 20);
}

bool func_211(int iParam0, int iParam1)
{
	return unk_0xCE990E643CD9D0E5(Global_1630317[iParam0 /*595*/].f_11.f_4, iParam1);
}

int func_212(var uParam0)
{
	int iVar0;
	
	iVar0 = uParam0;
	if (iVar0 != -1)
	{
		return unk_0xCE990E643CD9D0E5(Global_1630317[iVar0 /*595*/].f_1, 7);
	}
	return 0;
}

int func_213(int iParam0)
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

var func_214()
{
	return Global_1574411;
}

int func_215()
{
	if (Global_4456448 == 6)
	{
		return 1;
	}
	return 0;
}

void func_216()
{
	if (func_219() && !func_206())
	{
		func_218();
	}
	func_217();
	Global_2405074.f_708 = 0;
}

void func_217()
{
	int iVar0;
	struct<5> Var1;
	
	Var1.f_4 = 1065353216;
	iVar0 = 0;
	while (iVar0 < 100)
	{
		Global_2405074.f_708.f_1[iVar0 /*5*/] = { Var1 };
		iVar0++;
	}
}

void func_218()
{
	if (func_206())
	{
		if (Global_2405074.f_708.f_518 == Global_2405074.f_1227.f_518)
		{
			return;
		}
	}
	if (!unk_0x354AD085195C5FA6() == Global_2405074.f_708.f_518)
	{
		unk_0x13AF25746D6C3CA9(&(Global_2405074.f_1227), &(Global_2405074.f_708), 519);
		Global_2405074.f_493 = { Global_2405074.f_487 };
		Global_2405074.f_1746 = 1;
	}
}

int func_219()
{
	if ((Global_2405074.f_1747 && !unk_0x354AD085195C5FA6() == Global_2405074.f_708.f_518) && unk_0x7FD2BDF03806FD9D(Global_2405074.f_708.f_518))
	{
		return 1;
	}
	return 0;
}

void func_220()
{
	unk_0x13AF25746D6C3CA9(&(Global_2405074.f_365), &Global_2409674, 121);
}

void func_221()
{
	if (!unk_0xCE990E643CD9D0E5(iLocal_78, 2))
	{
		func_241(Local_75.f_2, (Local_75.f_6 * 1.5f), 0, 0, 1, 0);
		func_223(Local_75.f_2, Local_75.f_6, 0, 1);
		func_222(Local_75.f_2, 1, 0);
		unk_0xBE20AB8238688965(&iLocal_78, 2);
	}
}

void func_222(struct<3> Param0, int iParam1, int iParam2)
{
	Global_2405074.f_45.f_49 = { Param0 };
	Global_2405074.f_45.f_52 = iParam1;
	Global_2405074.f_45.f_53 = iParam2;
}

void func_223(struct<3> Param0, var uParam1, int iParam2, int iParam3)
{
	func_224(Param0, 0f, 0f, 0f, uParam1, 0, iParam2, iParam3);
}

void func_224(struct<3> Param0, struct<3> Param1, var uParam2, int iParam3, int iParam4, var uParam5)
{
	struct<12> Var0;
	
	if (func_233(unk_0x460153A63B9477BC()) || uParam5)
	{
		if (Var0.f_10 == 1)
		{
			func_232(&Param0, &Param1);
		}
		Var0 = { Param0 };
		Var0.f_3 = { Param1 };
		Var0.f_6 = uParam2;
		Var0.f_10 = iParam3;
		if (func_227(Var0))
		{
			Global_2405074.f_45.f_64 = func_226(unk_0x460153A63B9477BC());
			func_225(Var0, iParam4);
		}
	}
}

void func_225(struct<12> Param0, int iParam1)
{
	Global_2405074.f_365[iParam1 /*12*/] = { Param0 };
	Global_2405074.f_365[iParam1 /*12*/].f_9 = 1;
}

int func_226(int iParam0)
{
	if (func_278(iParam0, 0, 1))
	{
		return Global_2425869[iParam0 /*443*/].f_1;
	}
	return 0;
}

int func_227(struct<12> Param0)
{
	struct<12> Var0[1];
	int iVar1;
	
	Var0[0 /*12*/] = { Param0 };
	Var0[0 /*12*/].f_9 = 1;
	iVar1 = 0;
	while (iVar1 < 4)
	{
		if (Global_2405074.f_45[iVar1 /*12*/].f_9 == 1)
		{
			if (!func_228(Global_2405074.f_45[iVar1 /*12*/], &Var0))
			{
				return 0;
			}
		}
		iVar1++;
	}
	return 1;
}

int func_228(struct<3> Param0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < *uParam10)
	{
		if ((uParam10[iVar0 /*12*/])->f_9)
		{
			switch ((uParam10[iVar0 /*12*/])->f_10)
			{
				case 0:
					switch (Param0.f_10)
					{
						case 0:
							if (func_231(Param0, Param0.f_6, *(uParam10[iVar0 /*12*/]), (uParam10[iVar0 /*12*/])->f_6))
							{
								return 0;
							}
							break;
						
						case 1:
							if (func_229(Param0, Param0.f_3, *(uParam10[iVar0 /*12*/]), (uParam10[iVar0 /*12*/])->f_6))
							{
								return 0;
							}
							break;
						
						case 2:
							break;
					}
					break;
				
				case 1:
					switch (Param0.f_10)
					{
						case 0:
							if (func_231(Param0, Param0.f_6, *(uParam10[iVar0 /*12*/]), (uParam10[iVar0 /*12*/])->f_6))
							{
								return 0;
							}
							break;
						
						case 1:
							if (func_229(Param0, Param0.f_3, *(uParam10[iVar0 /*12*/]), (uParam10[iVar0 /*12*/])->f_6))
							{
								return 0;
							}
							break;
						
						case 2:
							break;
					}
					break;
				
				case 2:
					break;
				}
		}
		iVar0++;
	}
	if (vmag(Param0) == 0f)
	{
		return 0;
	}
	return 1;
}

bool func_229(struct<3> Param0, struct<3> Param1, struct<3> Param2, float fParam3)
{
	struct<3> Var0;
	struct<3> Var1;
	float fVar2;
	
	fVar2 = (fParam3 * 0.7071068f);
	Var0 = { Param2 - Vector(fVar2, fVar2, fVar2) };
	Var1 = { Param2 + Vector(fVar2, fVar2, fVar2) };
	return func_230(Param0, Param1, Var0, Var1);
}

int func_230(struct<3> Param0, struct<3> Param1, struct<3> Param2, struct<3> Param3)
{
	if (((((Param0.x >= Param2.x && Param0.f_1 >= Param2.f_1) && Param0.f_2 >= Param2.f_2) && Param1.x <= Param3.x) && Param1.f_1 <= Param3.f_1) && Param1.f_2 <= Param3.f_2)
	{
		return 1;
	}
	return 0;
}

int func_231(struct<3> Param0, float fParam1, struct<3> Param2, float fParam3)
{
	struct<3> Var0;
	
	Var0 = { Param2 - Param0 };
	if ((vmag(Var0) + fParam1) < fParam3)
	{
		return 1;
	}
	return 0;
}

void func_232(var uParam0, var uParam1)
{
	struct<3> Var0;
	struct<3> Var1;
	
	if (*uParam0 <= *uParam1)
	{
		Var0.x = *uParam0;
		Var1.x = *uParam1;
	}
	else
	{
		Var0.x = *uParam1;
		Var1.x = *uParam0;
	}
	if (uParam0->f_1 <= uParam1->f_1)
	{
		Var0.f_1 = uParam0->f_1;
		Var1.f_1 = uParam1->f_1;
	}
	else
	{
		Var0.f_1 = uParam1->f_1;
		Var1.f_1 = uParam0->f_1;
	}
	if (uParam0->f_2 <= uParam1->f_2)
	{
		Var0.f_2 = uParam0->f_2;
		Var1.f_2 = uParam1->f_2;
	}
	else
	{
		Var0.f_2 = uParam1->f_2;
		Var1.f_2 = uParam0->f_2;
	}
	*uParam0 = { Var0 };
	*uParam1 = { Var1 };
}

int func_233(int iParam0)
{
	if (((func_236(iParam0, 1) || func_235(iParam0)) || func_186(iParam0, 0)) || func_234(iParam0))
	{
		return 1;
	}
	return 0;
}

int func_234(int iParam0)
{
	if (!func_278(iParam0, 0, 1))
	{
		return 0;
	}
	return Global_1590682[iParam0 /*883*/].f_35;
}

int func_235(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return Global_1630317[iVar0 /*595*/] != -1;
	}
	return 0;
}

bool func_236(int iParam0, bool bParam1)
{
	if (func_240() != 0)
	{
		return func_226(iParam0) != 0;
	}
	return func_237(iParam0, bParam1, 0);
}

int func_237(int iParam0, bool bParam1, bool bParam2)
{
	if (bParam1)
	{
		if (func_238(iParam0))
		{
			return 1;
		}
	}
	if (!bParam2)
	{
	}
	if (Global_1590682[iParam0 /*883*/] == -1)
	{
		return 0;
	}
	return 1;
}

bool func_238(int iParam0)
{
	return func_239(iParam0);
}

bool func_239(int iParam0)
{
	return unk_0xCE990E643CD9D0E5(Global_1590682[iParam0 /*883*/].f_13.f_1, 0);
}

int func_240()
{
	return Global_30968;
}

void func_241(struct<3> Param0, float fParam1, int iParam2, int iParam3, int iParam4, int iParam5)
{
	func_242(Param0, 0f, 0f, 0f, fParam1, 0, iParam2, iParam4, iParam3, iParam5);
}

void func_242(struct<3> Param0, struct<3> Param1, var uParam2, int iParam3, int iParam4, var uParam5, var uParam6, var uParam7)
{
	struct<12> Var0;
	
	if (func_233(unk_0x460153A63B9477BC()) || uParam5)
	{
		if (Global_2405074.f_1747)
		{
			func_204();
		}
		if (Var0.f_10 == 1)
		{
			func_232(&Param0, &Param1);
		}
		Var0 = { Param0 };
		Var0.f_3 = { Param1 };
		Var0.f_6 = uParam2;
		Var0.f_10 = iParam3;
		Var0.f_11 = uParam6;
		Var0.f_8 = uParam7;
		if (Var0.f_8 < 0f)
		{
			Var0.f_8 = 0f;
		}
		Global_2405074.f_45.f_64 = func_226(unk_0x460153A63B9477BC());
		func_243(Var0, iParam4);
	}
}

void func_243(struct<12> Param0, int iParam1)
{
	Global_2405074.f_45[iParam1 /*12*/] = { Param0 };
	Global_2405074.f_45[iParam1 /*12*/].f_9 = 1;
}

var func_244()
{
	return Global_2416085.f_1864;
}

int func_245()
{
	if (func_246(21))
	{
		return 1;
	}
	if (func_246(0))
	{
		return 1;
	}
	return 0;
}

bool func_246(int iParam0)
{
	int iVar0;
	
	iVar0 = func_193(2481, -1, 0);
	return unk_0xCE990E643CD9D0E5(iVar0, iParam0);
}

void func_247()
{
	if (!unk_0xCE990E643CD9D0E5(iLocal_78, 6))
	{
		if (((((((func_248(60000) && func_250() == 1) && Local_75.f_7 <= 1) && !unk_0xDABD547F0DF2906C()) && !unk_0xF0C12886E5C1B20E()) && func_278(unk_0x460153A63B9477BC(), 1, 1)) && !func_197()) && Local_75.f_16 != 5)
		{
			if (!func_245())
			{
				func_196("DCP_HELP1", -1);
			}
			unk_0xBE20AB8238688965(&iLocal_78, 6);
		}
	}
}

bool func_248(int iParam0)
{
	return unk_0x44F29CF6A0675F4F(unk_0x624736CA66E14161(Global_2413901, unk_0x6CAAB7E78B5D978A())) > iParam0;
}

void func_249()
{
	if (unk_0x8F678487EEBD8CE4(iLocal_79))
	{
		if (func_245() || func_244())
		{
			unk_0x14C1B9C77E952C6F(iLocal_79, 0);
		}
		else
		{
			unk_0x14C1B9C77E952C6F(iLocal_79, 4);
		}
	}
	else
	{
		iLocal_79 = unk_0x5F920D11DDA03179(Local_75.f_2, Local_75.f_5);
		unk_0xECC9A00CF1181EC2(iLocal_79, 50);
		unk_0xB7F03636BDF7080E(iLocal_79, 220);
		unk_0x3DBD102E8C35EA16(iLocal_79, 0);
		unk_0xB023F5C66F5716C7(iLocal_79, "DCP_BLIPN");
		if (func_245())
		{
			unk_0x14C1B9C77E952C6F(iLocal_79, 0);
		}
	}
}

int func_250()
{
	return Local_75;
}

int func_251(int iParam0)
{
	return Local_77[iParam0 /*4*/];
}

bool func_252(int iParam0)
{
	return !func_253(iParam0);
}

int func_253(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			break;
		
		case 1:
			break;
		
		case 2:
			break;
		
		case 3:
			break;
		
		case 4:
			if (Global_262145.f_6661)
			{
				return 0;
			}
			if (func_255(unk_0x460153A63B9477BC(), 7))
			{
				return 0;
			}
			if (unk_0xCE990E643CD9D0E5(Global_1590682[unk_0x460153A63B9477BC() /*883*/].f_274.f_26, 0) || unk_0xCE990E643CD9D0E5(Global_1590682[unk_0x460153A63B9477BC() /*883*/].f_274.f_26, 1))
			{
				return 0;
			}
			break;
		
		case 5:
			if (Global_262145.f_6662)
			{
				return 0;
			}
			if (func_255(unk_0x460153A63B9477BC(), 7))
			{
				return 0;
			}
			if (unk_0xCE990E643CD9D0E5(Global_1590682[unk_0x460153A63B9477BC() /*883*/].f_274.f_26, 0) || unk_0xCE990E643CD9D0E5(Global_1590682[unk_0x460153A63B9477BC() /*883*/].f_274.f_26, 1))
			{
				return 0;
			}
			break;
		
		case 6:
			if (Global_262145.f_6663)
			{
				return 0;
			}
			break;
		
		case 7:
			break;
		
		case 8:
			break;
		
		case 9:
			if (Global_262145.f_6664)
			{
				return 0;
			}
			if (func_255(unk_0x460153A63B9477BC(), 7))
			{
				return 0;
			}
			if (unk_0xCE990E643CD9D0E5(Global_1590682[unk_0x460153A63B9477BC() /*883*/].f_274.f_26, 0) || unk_0xCE990E643CD9D0E5(Global_1590682[unk_0x460153A63B9477BC() /*883*/].f_274.f_26, 1))
			{
				return 0;
			}
			break;
		
		case 15:
			if (func_254(4))
			{
				return 0;
			}
			if (func_255(unk_0x460153A63B9477BC(), 7))
			{
				return 0;
			}
			if (unk_0xCE990E643CD9D0E5(Global_1590682[unk_0x460153A63B9477BC() /*883*/].f_274.f_26, 0) || unk_0xCE990E643CD9D0E5(Global_1590682[unk_0x460153A63B9477BC() /*883*/].f_274.f_26, 1))
			{
				return 0;
			}
			break;
		
		case 17:
			if (func_254(4))
			{
				return 0;
			}
			if (func_255(unk_0x460153A63B9477BC(), 7))
			{
				return 0;
			}
			if (unk_0xCE990E643CD9D0E5(Global_1590682[unk_0x460153A63B9477BC() /*883*/].f_274.f_26, 0) || unk_0xCE990E643CD9D0E5(Global_1590682[unk_0x460153A63B9477BC() /*883*/].f_274.f_26, 1))
			{
				return 0;
			}
			break;
		
		case 16:
			if (func_254(4))
			{
				return 0;
			}
			if (func_255(unk_0x460153A63B9477BC(), 7))
			{
				return 0;
			}
			if (unk_0xCE990E643CD9D0E5(Global_1590682[unk_0x460153A63B9477BC() /*883*/].f_274.f_26, 0) || unk_0xCE990E643CD9D0E5(Global_1590682[unk_0x460153A63B9477BC() /*883*/].f_274.f_26, 1))
			{
				return 0;
			}
			break;
		
		case 18:
		case 21:
		case 22:
		case 23:
			if (func_254(4))
			{
				return 0;
			}
			if (func_255(unk_0x460153A63B9477BC(), 7))
			{
				return 0;
			}
			if (unk_0xCE990E643CD9D0E5(Global_1590682[unk_0x460153A63B9477BC() /*883*/].f_274.f_26, 0) || unk_0xCE990E643CD9D0E5(Global_1590682[unk_0x460153A63B9477BC() /*883*/].f_274.f_26, 1))
			{
				return 0;
			}
			break;
		
		case 19:
			if (func_254(4))
			{
				return 0;
			}
			if (func_255(unk_0x460153A63B9477BC(), 7))
			{
				return 0;
			}
			break;
		
		case 20:
			if (func_254(4))
			{
				return 0;
			}
			if (func_255(unk_0x460153A63B9477BC(), 7))
			{
				return 0;
			}
			break;
		
		case 10:
			break;
		
		case 11:
			break;
		
		case 12:
			break;
	}
	return 1;
}

int func_254(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (func_278(unk_0xF1110FE23C67293A(iVar0), 0, 1))
		{
			if (unk_0xCE990E643CD9D0E5(Global_2425869[iVar0 /*443*/].f_212, iParam0))
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

bool func_255(int iParam0, int iParam1)
{
	return unk_0xCE990E643CD9D0E5(Global_2425869[iParam0 /*443*/].f_212, iParam1);
}

int func_256()
{
	var uVar0;
	
	func_263(&uVar0);
	if (Global_1312872 == 0)
	{
		if (!unk_0x25DDB354A40FFCDB())
		{
			return 1;
		}
	}
	if (func_262())
	{
		return 1;
	}
	if (Global_2464493)
	{
		return 1;
	}
	if (func_261())
	{
		return 1;
	}
	if (func_260(159))
	{
		if (!func_259())
		{
			return 1;
		}
	}
	if (func_260(157))
	{
		return 1;
	}
	if (!unk_0x0EB6C63A09FD9DF1())
	{
		return 1;
	}
	if (func_257() != 0)
	{
		if (unk_0x7B70881748D166CD(func_257()) == 0)
		{
			return 1;
		}
	}
	return 0;
}

int func_257()
{
	switch (func_240())
	{
		case 0:
			return func_258();
			break;
		
		case 2:
			return joaat("creator");
			break;
	}
	return 0;
}

int func_258()
{
	switch (Global_2464595)
	{
		case 0:
			return joaat("freemode");
		
		default:
	}
	return joaat("freemode");
}

bool func_259()
{
	return Global_2451787.f_696;
}

int func_260(int iParam0)
{
	if (unk_0x16F1FCCC54559709(1, iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_261()
{
	return Global_2462250;
}

bool func_262()
{
	return Global_2451787.f_691;
}

void func_263(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<3> Var3;
	
	iVar0 = 0;
	while (iVar0 < unk_0x2AC1C68C7CCA90E5(1))
	{
		iVar1 = unk_0x39BE1B4CEB4DAEC8(1, iVar0);
		if (iVar1 == 174)
		{
			unk_0x477FAFFE21935947(1, iVar0, &iVar2, 2);
			switch (iVar2)
			{
				case 1035596089:
					func_264(iVar0);
					break;
				
				case 1120313136:
					unk_0x477FAFFE21935947(1, iVar0, &Var3, 4);
					if (Var3.f_2 == 397890833)
					{
						*uParam0 = 1;
					}
					break;
				}
		}
		iVar0++;
	}
}

void func_264(int iParam0)
{
	struct<3> Var0;
	int iVar1;
	int iVar2;
	bool bVar3;
	
	if (unk_0x477FAFFE21935947(1, iParam0, &Var0, 3))
	{
		if (func_278(Var0.f_1, 1, 1))
		{
			iVar1 = unk_0x1FA7B77001D60F9D(Var0.f_1);
			if (unk_0xAE06B9E39EBDE049(iVar1))
			{
				if (unk_0x47DBF174A0CB9D55(iVar1, 0))
				{
					iVar2 = unk_0xA5D5B1042E8F47BD(iVar1, 0);
					if (unk_0x292280AF1BBBD6AC(iVar2, Var0.f_2) && unk_0x82CC259B7B4F4AD9())
					{
						if (func_265(iVar2, &bVar3))
						{
							unk_0xADCDA8AF77C0D19D(iVar2, Var0.f_2);
						}
						if (bVar3)
						{
							unk_0xE730EAF558C97567(&iVar2);
						}
					}
				}
			}
		}
	}
}

int func_265(int iParam0, var uParam1)
{
	if (unk_0xAE06B9E39EBDE049(iParam0))
	{
		if (!unk_0x1758275D343D5BA3(iParam0))
		{
			if (unk_0x38CC98C4A0688263(iParam0))
			{
				if (!unk_0xCA6AF782C906AC86(unk_0x36FE6D3220816ADA(iParam0)))
				{
					unk_0x4F3C4F457D44BB0F(iParam0, 0, 1);
					*uParam1 = 1;
				}
			}
		}
		if (unk_0x1D2A3118784C0272(iParam0, 0))
		{
			if (unk_0xAA5B806352173DEA(iParam0))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_266()
{
	wait(0);
}

void func_267()
{
	if (unk_0x8F678487EEBD8CE4(iLocal_79))
	{
		unk_0x93370FA10F15BE44(&iLocal_79);
	}
	if (unk_0xCE990E643CD9D0E5(Local_75.f_1, 1))
	{
		func_77(12, "DSC_FAIL", 0, 0, -99);
	}
	func_199();
	func_269(16, 0);
	unk_0xBE20AB8238688965(&(Global_2540384.f_4656), 0);
	func_268();
}

void func_268()
{
	unk_0xD39E529EBE5DB04F();
}

void func_269(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		if (!unk_0xCE990E643CD9D0E5(Global_2425869[unk_0x460153A63B9477BC() /*443*/].f_212, iParam0))
		{
			unk_0xBE20AB8238688965(&(Global_2425869[unk_0x460153A63B9477BC() /*443*/].f_212), iParam0);
		}
	}
	else if (unk_0xCE990E643CD9D0E5(Global_2425869[unk_0x460153A63B9477BC() /*443*/].f_212, iParam0))
	{
		unk_0xD2459066EA58CE43(&(Global_2425869[unk_0x460153A63B9477BC() /*443*/].f_212), iParam0);
	}
}

void func_270(struct<21> Param0)
{
	func_276(func_277(Param0), Param0);
	func_274(0, -1, 0);
	unk_0x97D2F2E2C92FD519(&Local_75, 20);
	unk_0xBB96A3ECD45D0317(&Local_77, 129);
	if (!func_273())
	{
		func_267();
	}
	if (unk_0x25DDB354A40FFCDB())
	{
		unk_0x3A396632EB359434(0);
		if (unk_0xAFF96FDC3971E7EA())
		{
			func_271();
		}
		func_269(16, 1);
		Local_77[unk_0x59E2AD1A8ACEDA31() /*4*/] = 0;
	}
	else
	{
		func_267();
	}
}

void func_271()
{
	Local_75.f_2 = { func_272() };
	Local_75.f_5 = 200f;
	Local_75.f_6 = 180f;
}

Vector3 func_272()
{
	switch (unk_0x344C570D6F8700DF(0, 10))
	{
		case 0:
			return 1440f, -2135f, 60f;
		
		case 1:
			return 233f, -1725f, 30f;
		
		case 2:
			return -403f, -1207f, 38f;
		
		case 3:
			return -1060f, -1028f, 3f;
		
		case 4:
			return -2152f, -329f, 14f;
		
		case 5:
			return -1651f, 214f, 61f;
		
		case 6:
			return -527f, 662f, 142f;
		
		case 7:
			return -27f, -747f, 45f;
		
		case 8:
			return 1292f, -649f, 68f;
		
		case 9:
			return 978f, -3143f, 6f;
		
		default:
	}
	return 978f, -3143f, 6f;
}

int func_273()
{
	int iVar0;
	
	iVar0 = 0;
	while (true)
	{
		iVar0++;
		if (!unk_0x25DDB354A40FFCDB())
		{
			return 0;
		}
		if (unk_0x331F7CFA5515B989())
		{
			return 1;
		}
		if (func_262())
		{
			return 0;
		}
		if (func_260(157))
		{
			return 0;
		}
		if (iVar0 >= 3600)
		{
			return 0;
		}
		wait(0);
	}
	return 0;
}

int func_274(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = unk_0x361B374A50D875B4();
	while (iVar0 != 2)
	{
		if (((iVar0 == 3 || iVar0 == 4) || iVar0 == 5) || iVar0 == 6)
		{
			if (!bParam2)
			{
				func_268();
			}
			else
			{
				return 0;
			}
		}
		if (!func_275())
		{
			if (iParam0 == 0)
			{
				if (!unk_0x25DDB354A40FFCDB())
				{
					if (!bParam2)
					{
						func_268();
					}
					else
					{
						return 0;
					}
				}
				if (func_262())
				{
					if (!bParam2)
					{
						func_268();
					}
					else
					{
						return 0;
					}
				}
				if (func_260(157))
				{
					if (!bParam2)
					{
						func_268();
					}
					else
					{
						return 0;
					}
				}
			}
			else if (!unk_0x3BF0BB5923982C0D())
			{
				if (!bParam2)
				{
					func_268();
				}
				else
				{
					return 0;
				}
			}
		}
		wait(0);
		iVar0 = unk_0x361B374A50D875B4();
	}
	if (iParam1 > -1)
	{
		Global_1312519 = iVar0;
	}
	if (iParam0 == 0)
	{
		if (!unk_0x25DDB354A40FFCDB())
		{
			if (!bParam2)
			{
				func_268();
			}
			else
			{
				return 0;
			}
		}
	}
	else if (!unk_0x3BF0BB5923982C0D())
	{
		if (!bParam2)
		{
			func_268();
		}
		else
		{
			return 0;
		}
	}
	return 1;
}

bool func_275()
{
	return Global_1312872;
}

void func_276(int iParam0, struct<17> Param1, var uParam2, var uParam3, var uParam4, var uParam5)
{
	if (!unk_0x25DDB354A40FFCDB())
	{
		func_268();
	}
	unk_0xA88557896B79E30D(iParam0, 0, Param1.f_16);
}

int func_277(int iParam0)
{
	switch (iParam0)
	{
		case 3:
			return 2;
		
		case 1:
			return 32;
		
		case 32:
			return 32;
		
		case 33:
			return 32;
		
		case 34:
			return 32;
		
		case 35:
			return 32;
		
		case 36:
			return 32;
		
		case 37:
			return 32;
		
		case 38:
			return 32;
		
		case 39:
			return 32;
		
		case 40:
			return 32;
		
		case 41:
			return 32;
		
		case 42:
			return 32;
		
		case 43:
			return 32;
		
		case 44:
			return 32;
		
		case 45:
			return 32;
		
		case 46:
			return 32;
		
		case 47:
			return 32;
		
		case 48:
			return 32;
		
		case 49:
			return 32;
		
		case 50:
			return 4;
		
		case 51:
			return 32;
		
		case 52:
			return 32;
		
		case 53:
			return 32;
		
		case 54:
			return 32;
		
		case 55:
			return 32;
		
		case 56:
			return 32;
		
		case 57:
			return 32;
		
		case 58:
			return 32;
		
		case 59:
			return 32;
		
		case 60:
			return 32;
		
		case 61:
			return 32;
		
		case 62:
			return 32;
		
		case 63:
			return 32;
		
		case 64:
			return 4;
		
		case 65:
			return 32;
		
		case 66:
			return 4;
		
		case 67:
			return 4;
		
		case 68:
			return 32;
		
		case 69:
			return 32;
		
		case 70:
			return 4;
		
		case 71:
			return 32;
		
		case 72:
			return 32;
		
		case 73:
		case 74:
			return 4;
		
		case 75:
			return 32;
		
		case 76:
			return 32;
		
		case 77:
			return 32;
		
		case 78:
			return 32;
		
		case joaat("MPSV_LP0_31"):
			return 32;
		
		case 80:
			return 32;
		
		case 81:
			return 32;
		
		case 82:
			return 32;
		
		case 84:
			return 32;
		
		case 83:
			return 32;
		
		case 85:
			return 32;
		
		case 86:
			return 8;
		
		case 87:
			return 32;
		
		case 88:
			return 32;
		
		case 89:
			return 32;
		
		case 90:
			return 32;
		
		case 91:
			return 8;
		
		case 92:
			return 32;
		
		case 93:
			return 8;
		
		case 94:
			return 8;
		
		case 102:
			return 8;
		
		case 95:
			return 8;
		
		case 96:
			return 32;
		
		case 97:
			return 32;
		
		case 98:
			return 32;
		
		case 99:
			return 8;
		
		case 100:
			return 32;
		
		case 101:
			return 32;
		
		case 103:
			return 32;
		
		case 104:
			return 32;
		
		case 105:
			return 32;
		
		case 106:
			return 8;
		
		case 107:
			return 8;
		
		case 108:
			return 8;
		
		case 109:
			return 8;
		
		case 110:
			return 8;
		
		case 111:
			return 8;
		
		case 112:
			return 8;
		
		case 113:
			return 8;
		
		case 114:
			return 32;
		
		case 115:
			return 8;
		
		case 116:
			return 8;
		
		case 117:
			return 8;
		
		case 118:
			return 8;
		
		case 119:
			return 32;
		
		case 120:
			return 32;
		
		case 121:
			return 32;
		
		case 122:
			return 32;
		
		case 123:
			return 8;
		
		case 124:
			return 8;
		
		case 125:
			return 8;
		
		case 126:
			return 8;
		
		case 127:
			return 32;
		
		case 128:
			return 32;
		
		case 129:
			return 32;
		
		case 130:
			return 8;
		
		case 131:
			return 8;
		
		case 132:
			return 32;
		
		case 133:
			return 32;
		
		case 12:
			return 32;
		
		case 4:
			return 16;
		
		case 13:
			return 32;
		
		case 5:
			return 16;
		
		case 6:
			return 2;
		
		case 8:
			return 2;
		
		case 9:
			return 2;
		
		case 7:
			return 16;
		
		case 10:
			return 2;
		
		case 11:
			return 4;
		
		case 15:
			return 32;
		
		case 16:
			return 32;
		
		case 27:
			return 2;
		
		case 25:
			return 2;
		
		case 26:
			return 2;
		
		case 18:
			return 32;
		
		case 28:
			return 32;
		
		case 29:
			return 2;
		
		case 30:
			return 32;
		
		case 31:
			return 32;
		
		case 17:
			return 2;
		
		case 134:
			return 32;
		
		case 135:
			return 32;
		
		case 19:
			return 32;
		
		case 22:
			return 32;
		
		case 23:
			return 32;
		
		case 24:
			return 32;
		
		case 20:
			return 2;
		
		case 0:
			return 0;
		
		case 21:
			return 32;
		
		case 146:
			return 32;
		
		case 147:
			return 32;
		
		case 136:
			return 32;
		
		case 137:
			return 32;
		
		case 141:
			return 32;
		
		case 139:
			return 32;
		
		case 140:
			return 32;
		
		case 144:
			return 32;
		
		case 145:
			return 32;
		
		case 142:
			return 32;
		
		case 143:
			return 32;
		
		case 148:
			return 32;
		
		case 149:
			return 32;
		
		case 150:
			return 32;
		
		case 151:
			return 32;
		
		case 152:
			return 2;
		
		case 157:
			return 1;
		
		case 153:
			return 2;
		
		case 154:
			return 4;
		
		case 155:
			return 2;
		
		case 156:
			return 2;
		
		case 138:
			return 1;
		
		case 158:
			return 2;
		
		case 159:
		case 160:
		case 161:
		case 162:
		case 163:
		case 164:
			return 0;
		
		case 180:
			return 1;
		
		case 165:
			return 4;
		
		case 168:
			return 4;
		
		case 169:
			return 1;
		
		case 170:
			return 1;
		
		case 176:
			return 1;
		
		case 172:
			return 2;
		
		case 177:
			return 1;
		
		case 173:
			return 1;
		
		case 171:
			return 2;
		
		case 174:
			return 8;
		
		case 175:
			return 8;
		
		case 178:
			return 1;
		
		case 179:
			return 2;
		
		case 166:
			return 16;
		
		case 167:
			return 32;
		
		default:
	}
	return 0;
}

int func_278(int iParam0, bool bParam1, bool bParam2)
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

