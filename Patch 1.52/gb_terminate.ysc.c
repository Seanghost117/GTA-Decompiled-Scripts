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
	char* sLocal_20 = NULL;
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
	int iLocal_82 = 0;
	var uLocal_83 = 0;
	struct<11> Local_84 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	struct<4> Local_85[32];
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
	sLocal_20 = "NULL";
	fLocal_21 = 0f;
	fLocal_25 = -0.0375f;
	fLocal_26 = 0.17f;
	fLocal_30 = 80f;
	fLocal_31 = 140f;
	fLocal_32 = 180f;
	iLocal_36 = 3;
	iLocal_40 = 1;
	iLocal_41 = 65;
	iLocal_42 = 49;
	iLocal_43 = 64;
	fLocal_62 = ((0.05f + 0.275f) - 0.01f);
	if (unk_0x25DDB354A40FFCDB())
	{
		if (!func_702(ScriptParam_86))
		{
			func_646();
		}
	}
	while (true)
	{
		func_645();
		if (func_637())
		{
			func_646();
		}
		switch (func_636(unk_0x59E2AD1A8ACEDA31()))
		{
			case 0:
				if (func_635() == 1)
				{
					if (func_634())
					{
						func_633(unk_0x59E2AD1A8ACEDA31(), 1);
					}
				}
				break;
			
			case 1:
				if (func_635() == 1)
				{
					if (!func_631())
					{
						func_100();
					}
					if (func_53(1))
					{
						func_633(unk_0x59E2AD1A8ACEDA31(), 3);
					}
				}
				else if (func_635() == 3)
				{
					func_633(unk_0x59E2AD1A8ACEDA31(), 3);
				}
				break;
			
			case 3:
				func_646();
				break;
		}
		if (unk_0xAFF96FDC3971E7EA())
		{
			if (func_52())
			{
				func_51(3);
			}
			switch (func_635())
			{
				case 0:
					if (func_43())
					{
						func_51(1);
					}
					break;
				
				case 1:
					if (func_42() == 3)
					{
						func_51(3);
					}
					else
					{
						func_1();
					}
					break;
				
				case 3:
					func_646();
					break;
				}
		}
	}
}

void func_1()
{
	switch (Local_84.f_8)
	{
		case 0:
			if (func_41())
			{
				func_40(1);
			}
			func_38();
			break;
		
		case 1:
			func_38();
			func_2();
			break;
		
		case 2:
			if (unk_0xCE990E643CD9D0E5(Local_84.f_1, 5))
			{
				func_40(3);
			}
			func_38();
			break;
		
		case 3:
			break;
	}
}

void func_2()
{
	if (!func_13(func_37()))
	{
		func_12(1);
		func_40(2);
		unk_0xBE20AB8238688965(&(Local_84.f_1), 2);
	}
	if (func_11() == func_10() || !func_9(func_11(), 0, 1))
	{
		func_12(3);
		func_40(2);
		unk_0xBE20AB8238688965(&(Local_84.f_1), 3);
	}
	if (unk_0xCE990E643CD9D0E5(Local_84.f_1, 0))
	{
		if (func_3(&(Local_84.f_4), func_5(), 0))
		{
			unk_0xBE20AB8238688965(&(Local_84.f_1), 4);
		}
	}
	if (unk_0xCE990E643CD9D0E5(Local_84.f_1, 4))
	{
		func_12(2);
		func_40(2);
	}
	if (unk_0xCE990E643CD9D0E5(Local_84.f_1, 1) || unk_0xCE990E643CD9D0E5(Local_84.f_1, 7))
	{
		func_12(0);
		func_40(2);
	}
}

int func_3(var uParam0, int iParam1, bool bParam2)
{
	if (iParam1 == -1)
	{
		return 1;
	}
	func_4(uParam0, bParam2, 0);
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

void func_4(var uParam0, bool bParam1, bool bParam2)
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

int func_5()
{
	if (func_6(unk_0x460153A63B9477BC(), 1))
	{
		return 120000;
	}
	return 300000;
}

bool func_6(int iParam0, bool bParam1)
{
	return func_7(iParam0, bParam1, 1);
}

int func_7(int iParam0, bool bParam1, int iParam2)
{
	int iVar0;
	
	if (iParam0 == func_10())
	{
		return 0;
	}
	if (!bParam1)
	{
		if (func_8(iParam0, iParam2))
		{
			return 0;
		}
	}
	iVar0 = Global_1630317[iParam0 /*595*/].f_11;
	if (iVar0 != func_10() && Global_1630317[iVar0 /*595*/].f_11.f_423 == iParam2)
	{
		return 1;
	}
	return 0;
}

int func_8(int iParam0, int iParam1)
{
	if (iParam0 != func_10())
	{
		if (Global_1630317[iParam0 /*595*/].f_11 != func_10())
		{
			if (Global_1630317[iParam0 /*595*/].f_11 == iParam0 && Global_1630317[iParam0 /*595*/].f_11.f_423 == iParam1)
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_9(int iParam0, bool bParam1, bool bParam2)
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

int func_10()
{
	return -1;
}

int func_11()
{
	return Global_1630317[unk_0x460153A63B9477BC() /*595*/].f_11;
}

void func_12(int iParam0)
{
	Local_84.f_9 = iParam0;
}

int func_13(int iParam0)
{
	if (func_34(iParam0) && ((func_32(iParam0) == 142 || func_32(iParam0) == 164) || func_32(iParam0) == 148))
	{
		return 0;
	}
	if (iParam0 == func_10())
	{
		return 0;
	}
	if (!func_9(iParam0, 0, 1))
	{
		return 0;
	}
	if (func_31(iParam0, 1, 0))
	{
		return 0;
	}
	if (func_30(iParam0))
	{
		return 0;
	}
	if (func_28(iParam0, 1) && func_27(iParam0) == func_11())
	{
		return 0;
	}
	if (func_23(iParam0))
	{
		return 0;
	}
	if (func_22(iParam0, 7))
	{
		return 0;
	}
	if (func_17(iParam0))
	{
		return 0;
	}
	if (func_14(iParam0, 6))
	{
		return 0;
	}
	return 1;
}

int func_14(int iParam0, int iParam1)
{
	int iVar0;
	
	if (func_16() != 0)
	{
		return 0;
	}
	if (!func_15(iParam0))
	{
		return 0;
	}
	iVar0 = iParam0;
	if (Global_1590682[iVar0 /*883*/] == iParam1)
	{
		return 1;
	}
	return 0;
}

int func_15(int iParam0)
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

int func_16()
{
	return Global_30968;
}

int func_17(int iParam0)
{
	if (func_19(iParam0, 0))
	{
		return 1;
	}
	if (func_18())
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

bool func_18()
{
	return unk_0xCE990E643CD9D0E5(Global_2359302, 3);
}

bool func_19(int iParam0, int iParam1)
{
	bool bVar0;
	
	if (iParam0 == unk_0x460153A63B9477BC())
	{
		bVar0 = func_20(-1, 0) == 8;
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

int func_20(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_21();
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

int func_21()
{
	return Global_1312763;
}

bool func_22(int iParam0, int iParam1)
{
	return unk_0xCE990E643CD9D0E5(Global_2425869[iParam0 /*443*/].f_212, iParam1);
}

bool func_23(int iParam0)
{
	if (iParam0 == unk_0x460153A63B9477BC())
	{
		return func_26();
	}
	return unk_0xCE990E643CD9D0E5(Global_1377236.f_241.f_136[func_25(10) /*33*/][iParam0], func_24(10));
}

int func_24(int iParam0)
{
	return (iParam0 % 32);
}

int func_25(int iParam0)
{
	return (iParam0 / 32);
}

bool func_26()
{
	return Global_1312436;
}

int func_27(int iParam0)
{
	if (iParam0 != func_10())
	{
		return Global_1630317[iParam0 /*595*/].f_11;
	}
	return func_10();
}

bool func_28(int iParam0, bool bParam1)
{
	if (!bParam1)
	{
		if (func_29(iParam0))
		{
			return 0;
		}
	}
	return Global_1630317[iParam0 /*595*/].f_11 != func_10();
}

int func_29(int iParam0)
{
	if (iParam0 != func_10())
	{
		if (Global_1630317[iParam0 /*595*/].f_11 != func_10())
		{
			return Global_1630317[iParam0 /*595*/].f_11 == iParam0;
		}
	}
	return 0;
}

bool func_30(int iParam0)
{
	return Global_1590682[iParam0 /*883*/].f_196 != 0;
}

int func_31(int iParam0, bool bParam1, bool bParam2)
{
	if (iParam0 == func_10())
	{
		return 0;
	}
	if (unk_0xCE990E643CD9D0E5(Global_1590682[iParam0 /*883*/].f_274.f_26, 0))
	{
		return 1;
	}
	if (bParam1)
	{
		if (unk_0xCE990E643CD9D0E5(Global_1590682[iParam0 /*883*/].f_274.f_26, 1))
		{
			return 1;
		}
	}
	if (bParam2)
	{
		if (Global_2425869[iParam0 /*443*/].f_314.f_6 != -1)
		{
			return 1;
		}
	}
	return 0;
}

int func_32(int iParam0)
{
	if (func_33(iParam0, 0))
	{
		return Global_1630317[iParam0 /*595*/].f_11.f_33;
	}
	return -1;
}

int func_33(int iParam0, int iParam1)
{
	if (Global_1630317[iParam0 /*595*/].f_11.f_33 != -1 || (iParam1 && Global_1630317[iParam0 /*595*/].f_11.f_32 != -1))
	{
		return 1;
	}
	return 0;
}

int func_34(int iParam0)
{
	if (func_29(iParam0))
	{
		if (func_35(iParam0))
		{
			return 1;
		}
	}
	return 0;
}

int func_35(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return func_36(iParam0, 9);
	}
	return 0;
}

bool func_36(int iParam0, int iParam1)
{
	return unk_0xCE990E643CD9D0E5(Global_1630317[iParam0 /*595*/].f_11.f_4, iParam1);
}

int func_37()
{
	return Local_84.f_2;
}

void func_38()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = unk_0xEFA28384DDD283E1();
	iVar2 = 0;
	while (iVar2 < iVar1)
	{
		if (func_42() < 2)
		{
			if (unk_0xCE990E643CD9D0E5(Local_85[iVar2 /*4*/].f_1, 1))
			{
				func_39(unk_0xF1110FE23C67293A(iVar2));
				unk_0xBE20AB8238688965(&(Local_84.f_1), 1);
			}
			if (unk_0xCE990E643CD9D0E5(Local_85[iVar2 /*4*/].f_1, 4))
			{
				func_39(func_11());
				unk_0xBE20AB8238688965(&(Local_84.f_1), 7);
			}
			if (unk_0xCE990E643CD9D0E5(Local_85[iVar2 /*4*/].f_1, 0))
			{
				unk_0xBE20AB8238688965(&(Local_84.f_1), 0);
			}
			if (unk_0xCE990E643CD9D0E5(Local_85[iVar2 /*4*/].f_1, 2))
			{
				unk_0xBE20AB8238688965(&(Local_84.f_1), 4);
			}
		}
		else if (func_42() == 2)
		{
			if (unk_0xCE990E643CD9D0E5(Local_85[iVar2 /*4*/].f_1, 3))
			{
				iVar0++;
			}
		}
		iVar2++;
	}
	if (func_42() == 2)
	{
		if (iVar0 == unk_0xB9E6DF0411C3488E())
		{
			unk_0xBE20AB8238688965(&(Local_84.f_1), 5);
		}
		else if (func_3(&(Local_84.f_6), 10000, 0))
		{
			unk_0xBE20AB8238688965(&(Local_84.f_1), 5);
		}
	}
}

void func_39(int iParam0)
{
	Local_84.f_3 = iParam0;
}

void func_40(int iParam0)
{
	Local_84.f_8 = iParam0;
}

int func_41()
{
	return 1;
}

int func_42()
{
	return Local_84.f_8;
}

int func_43()
{
	if (func_44())
	{
		return 1;
	}
	return 0;
}

int func_44()
{
	if (unk_0xCE990E643CD9D0E5(Local_84.f_1, 6))
	{
		return 1;
	}
	func_50(func_10());
	if (Global_2540384.f_5188.f_4 != func_10())
	{
	}
	else
	{
		func_51(3);
	}
	if (func_9(Global_2540384.f_5188.f_4, 0, 1))
	{
		if (!func_48(Global_2540384.f_5188.f_4, unk_0x460153A63B9477BC(), 1))
		{
			func_50(Global_2540384.f_5188.f_4);
		}
	}
	if (func_37() != func_10())
	{
		if (func_6(unk_0x460153A63B9477BC(), 1))
		{
			if (func_47(func_37(), 13))
			{
				Local_84.f_10 = 1;
			}
		}
		func_45(func_46(func_37()), 1);
		Global_2540384.f_5188.f_4 = func_10();
		unk_0xBE20AB8238688965(&(Local_84.f_1), 6);
		return 1;
	}
	else if (func_37() == func_10())
	{
	}
	return 0;
}

void func_45(int iParam0, int iParam1)
{
	struct<3> Var0;
	
	Var0.x = -909357184;
	Var0.f_1 = unk_0x460153A63B9477BC();
	Var0.f_2 = iParam1;
	if (!iParam0 == 0)
	{
		unk_0xB802750B43D4047C(1, &Var0, 3, iParam0);
	}
}

int func_46(int iParam0)
{
	var uVar0;
	
	if (iParam0 != -1)
	{
		unk_0xBE20AB8238688965(&uVar0, iParam0);
	}
	return uVar0;
}

bool func_47(int iParam0, int iParam1)
{
	return unk_0xCE990E643CD9D0E5(Global_1630317[iParam0 /*595*/].f_11.f_5, iParam1);
}

int func_48(int iParam0, int iParam1, bool bParam2)
{
	if (iParam1 != func_10())
	{
		if (!bParam2)
		{
			if (func_49(iParam0, iParam1))
			{
				return 0;
			}
		}
		if (Global_1630317[iParam0 /*595*/].f_11 != func_10())
		{
			return iParam1 == Global_1630317[iParam0 /*595*/].f_11;
		}
	}
	return 0;
}

int func_49(int iParam0, int iParam1)
{
	if (iParam1 != func_10())
	{
		if (iParam0 != func_10())
		{
			if (Global_1630317[iParam0 /*595*/].f_11 != func_10())
			{
				if (Global_1630317[iParam0 /*595*/].f_11 == iParam0)
				{
					return iParam1 == iParam0;
				}
			}
		}
	}
	return 0;
}

void func_50(int iParam0)
{
	Local_84.f_2 = iParam0;
	if (iParam0 == func_10())
	{
	}
}

void func_51(int iParam0)
{
	Local_84 = iParam0;
}

int func_52()
{
	if (Global_2540384.f_5188.f_40)
	{
		Global_2540384.f_5188.f_40 = 0;
		return 1;
	}
	return 0;
}

int func_53(bool bParam0)
{
	if (func_64(1))
	{
		return 1;
	}
	if (Global_2540384.f_5188.f_41)
	{
		Global_2540384.f_5188.f_41 = 0;
		return 1;
	}
	if (bParam0)
	{
		if (func_63() == func_10() || !func_9(func_63(), 0, 1))
		{
			return 1;
		}
	}
	if (!func_61(unk_0x460153A63B9477BC()))
	{
		if (func_54())
		{
			return 1;
		}
	}
	return 0;
}

int func_54()
{
	if (func_60(unk_0x460153A63B9477BC()) && func_57())
	{
		return 1;
	}
	if (func_55())
	{
		return 1;
	}
	return 0;
}

bool func_55()
{
	return func_56() == 1;
}

int func_56()
{
	return Global_1704006;
}

int func_57()
{
	switch (func_58(func_59(unk_0x460153A63B9477BC())))
	{
		case 11:
		case 14:
			return 1;
		
		default:
	}
	return 0;
}

int func_58(int iParam0)
{
	switch (iParam0)
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
		case 5:
		case 6:
		case 7:
		case 8:
		case 9:
		case 10:
		case 11:
		case 12:
		case 13:
		case 14:
		case 15:
		case 16:
		case 17:
		case 18:
		case 19:
		case 20:
		case 21:
			return 0;
			break;
		
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
			return 1;
			break;
		
		case 22:
		case 23:
		case 24:
		case 25:
		case 26:
		case 27:
		case 28:
		case 29:
		case 30:
		case 31:
		case 32:
		case 33:
		case 34:
		case 35:
		case 36:
		case 37:
		case 38:
		case 39:
		case 40:
		case 41:
			return 2;
			break;
		
		case 43:
		case 42:
		case 44:
		case 45:
		case 46:
		case 47:
		case 48:
		case 49:
		case 50:
		case 51:
		case 52:
		case 53:
		case 54:
		case 55:
		case 56:
		case 57:
		case 58:
		case 59:
		case 98:
		case 99:
		case 100:
		case 112:
		case 113:
		case 114:
		case 115:
		case 119:
		case 116:
		case 118:
		case 120:
		case 121:
		case 126:
		case 127:
		case 134:
		case 135:
		case 136:
		case 137:
		case 138:
		case 139:
		case 140:
		case 141:
		case 142:
		case 143:
		case 144:
			return 3;
			break;
		
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
			return 4;
			break;
		
		case 81:
			return 5;
			break;
		
		case 82:
			return 6;
			break;
		
		case 83:
		case 84:
		case 85:
		case 86:
		case 87:
			return 7;
			break;
		
		case 88:
			return 8;
			break;
		
		case 89:
		case 90:
		case 91:
		case 92:
		case 93:
		case 94:
		case 95:
		case 96:
		case 97:
			return 9;
			break;
		
		case 101:
			return 10;
			break;
		
		case 102:
		case 103:
		case 104:
		case 105:
		case 106:
		case 107:
		case 108:
		case 109:
		case 110:
		case 111:
			return 11;
			break;
		
		case 117:
			return 12;
			break;
		
		case 122:
			return 13;
			break;
		
		case 123:
			return 14;
			break;
		
		case 124:
			return 15;
			break;
		
		case 125:
			return 16;
			break;
		
		case 128:
		case 129:
		case 130:
		case 131:
		case 132:
		case 133:
			return 17;
			break;
		
		case 145:
			return 18;
			break;
		
		case 146:
			return 19;
			break;
		
		case 147:
			return 20;
			break;
	}
	return -1;
}

int func_59(int iParam0)
{
	if (iParam0 != func_10() && func_9(iParam0, 1, 1))
	{
		return Global_2425869[iParam0 /*443*/].f_314.f_15;
	}
	return -1;
}

int func_60(int iParam0)
{
	if (iParam0 != func_10() && func_9(iParam0, 1, 1))
	{
		return unk_0xCE990E643CD9D0E5(Global_2425869[iParam0 /*443*/].f_314, 4);
	}
	return 0;
}

int func_61(int iParam0)
{
	if (func_62(iParam0) != func_10())
	{
		return func_62(iParam0) == func_27(iParam0);
	}
	return 0;
}

int func_62(int iParam0)
{
	return Global_1630317[iParam0 /*595*/].f_11.f_35;
}

int func_63()
{
	return Global_1630317[unk_0x460153A63B9477BC() /*595*/].f_11.f_35;
}

int func_64(bool bParam0)
{
	bool bVar0;
	
	if (!func_99(1))
	{
		bVar0 = false;
		if (Global_1630317[unk_0x460153A63B9477BC() /*595*/].f_11.f_57 != func_10())
		{
			if (func_9(Global_1630317[unk_0x460153A63B9477BC() /*595*/].f_11.f_57, 0, 1))
			{
				if ((Global_1630317[unk_0x460153A63B9477BC() /*595*/].f_11.f_24 == 4 || Global_1630317[unk_0x460153A63B9477BC() /*595*/].f_11.f_24 == 8) || Global_1630317[unk_0x460153A63B9477BC() /*595*/].f_11.f_24 == 6)
				{
					bVar0 = true;
				}
			}
		}
		else if (func_98(func_32(unk_0x460153A63B9477BC())) == 0)
		{
			bVar0 = true;
		}
		if (bVar0)
		{
			if (bParam0)
			{
				func_97(31);
				if (func_96(func_32(unk_0x460153A63B9477BC())))
				{
					func_97(81);
				}
				if (Global_1630317[unk_0x460153A63B9477BC() /*595*/].f_11.f_57 != func_10() && unk_0x166E920FB00B2DBB(Global_1630317[unk_0x460153A63B9477BC() /*595*/].f_11.f_57))
				{
					Global_1627096 = func_66(Global_1630317[unk_0x460153A63B9477BC() /*595*/].f_11.f_57, -2, 0, 0, 0);
					if (!func_65(Global_1630317[unk_0x460153A63B9477BC() /*595*/].f_11.f_57))
					{
						func_97(88);
					}
				}
				else
				{
					Global_1627096 = 1;
				}
				Global_1627080 = { Global_1630317[unk_0x460153A63B9477BC() /*595*/].f_11.f_104 };
			}
			return 1;
		}
	}
	return 0;
}

bool func_65(int iParam0)
{
	return func_8(iParam0, 1);
}

int func_66(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	int iVar1;
	
	if (func_17(iParam0) && !bParam4)
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
	if (((func_17(unk_0x460153A63B9477BC()) || (func_95() && func_94())) && !unk_0xCE990E643CD9D0E5(Global_2540384.f_4655, 31)) && !bParam4)
	{
		iVar1 = func_93();
		if (unk_0xAE06B9E39EBDE049(iVar1))
		{
			if (unk_0xD0390A93AF3907B8(iVar1))
			{
				if (unk_0xE4400E48E081F17A(iVar1) != -1)
				{
					if (func_9(unk_0xE4400E48E081F17A(iVar1), 0, 1))
					{
						if ((iParam1 > -1 && unk_0xFC559366953F62B3()) && iParam1 < 4)
						{
							if (Global_4456448.f_77785[iParam1] != -1)
							{
								return func_91(iParam1, iParam0, 0);
							}
							else
							{
								return func_79(iParam0, unk_0xE4400E48E081F17A(iVar1), iParam1, bParam2, bParam3);
							}
						}
						else
						{
							return func_79(iParam0, unk_0xE4400E48E081F17A(iVar1), iParam1, bParam2, bParam3);
						}
					}
				}
			}
			else if ((iParam1 > -1 && unk_0xFC559366953F62B3()) && iParam1 < 4)
			{
				if (Global_4456448.f_77785[iParam1] != -1)
				{
					return func_91(iParam1, iParam0, 0);
				}
				else
				{
					return func_67(0, -1, 0);
				}
			}
			else
			{
				return func_67(0, -1, 0);
			}
		}
	}
	if ((iParam1 > -1 && unk_0xFC559366953F62B3()) && iParam1 < 4)
	{
		if (Global_4456448.f_77785[iParam1] != -1)
		{
			return func_91(iParam1, iParam0, 0);
		}
		else
		{
			return func_79(iParam0, unk_0x460153A63B9477BC(), iParam1, bParam2, bParam3);
		}
	}
	return func_79(iParam0, unk_0x460153A63B9477BC(), iParam1, bParam2, bParam3);
}

int func_67(bool bParam0, int iParam1, bool bParam2)
{
	return func_68(unk_0x460153A63B9477BC(), bParam0, iParam1, bParam2);
}

int func_68(int iParam0, bool bParam1, int iParam2, bool bParam3)
{
	int iVar0;
	
	if (!unk_0x166E920FB00B2DBB(iParam0))
	{
		return 3;
	}
	iVar0 = unk_0x6CC163E30ECE0790(iParam0);
	if ((func_78() || (func_77() && func_75())) && Global_1388252.f_1)
	{
		if (bParam1)
		{
			return func_74(iParam2, iVar0);
		}
		else
		{
			return func_74(iVar0, iVar0);
		}
	}
	if (bParam1)
	{
		if (iParam2 > -1)
		{
			if (func_73(iVar0, iParam2, 0) && !unk_0xCE990E643CD9D0E5(Global_4456448.f_15, 18))
			{
				if (iVar0 == iParam2)
				{
					return func_72(1);
				}
				else
				{
					return func_72(0);
				}
			}
			else if (bParam3)
			{
				return 28;
			}
			else if (unk_0xCE990E643CD9D0E5(Global_4456448.f_4, 20))
			{
				return func_69(iVar0, iParam2, 1, 4);
			}
			else
			{
				return func_69(iVar0, iParam2, 0, 4);
			}
		}
		return 28;
	}
	if (iVar0 == iParam2 || iParam2 == -1)
	{
		return func_72(1);
	}
	return func_72(0);
}

int func_69(int iParam0, int iParam1, bool bParam2, int iParam3)
{
	int iVar0;
	
	iVar0 = func_71(iParam0, iParam1, iParam3);
	if (func_70(Global_4456448.f_82708, 1))
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

int func_70(int iParam0, bool bParam1)
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

int func_71(int iParam0, int iParam1, int iParam2)
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
			if (!func_73(iParam0, iVar0, 0))
			{
				iVar1++;
			}
		}
		iVar0++;
	}
	return -1;
}

int func_72(bool bParam0)
{
	if (bParam0)
	{
		return 118;
	}
	return 116;
}

int func_73(int iParam0, int iParam1, int iParam2)
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

int func_74(int iParam0, int iParam1)
{
	if (iParam0 == -1)
	{
		iParam0 = func_71(iParam1, iParam0, 4);
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

bool func_75()
{
	if (func_76())
	{
		return 1;
	}
	return unk_0xCE990E643CD9D0E5(Global_4456448.f_133494, 4);
}

bool func_76()
{
	return unk_0xCE990E643CD9D0E5(Global_4456448.f_123318, 12);
}

bool func_77()
{
	if (unk_0xFC559366953F62B3())
	{
		return unk_0xCE990E643CD9D0E5(Global_4456448.f_133494, 0);
	}
	return ((unk_0xCE990E643CD9D0E5(Global_4456448.f_133494, 0) || Global_1655243) && unk_0x7B70881748D166CD(joaat("fm_deathmatch_creator")) > 0);
}

int func_78()
{
	if (func_76() && unk_0xFC559366953F62B3())
	{
		return 1;
	}
	return 0;
}

int func_79(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
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
			if (func_85())
			{
				iVar3 = func_84(iParam0);
				if (!iVar3 == -1)
				{
					return func_82(iVar3);
				}
			}
			if ((func_81(iParam1, iParam0, iVar0, 0) && !unk_0xCE990E643CD9D0E5(Global_4456448.f_15, 18)) || ((func_73(unk_0x6CC163E30ECE0790(iParam1), unk_0x6CC163E30ECE0790(iParam0), 0) && unk_0xCE990E643CD9D0E5(Global_4456448.f_15, 23)) && !unk_0xCE990E643CD9D0E5(Global_4456448.f_15, 18)))
			{
				return func_72(1);
			}
			else if (unk_0xCE990E643CD9D0E5(Global_4456448.f_15, 26))
			{
				return func_80(1);
			}
			else
			{
				return func_68(iParam1, 1, iVar0, bParam4);
			}
		}
		else if ((Global_1574416 || Global_1574407) || Global_1590682[iParam0 /*883*/] == 0)
		{
			if (iParam0 == iParam1 || (Global_1574416 == 1 && Global_1574426 == 0))
			{
				return func_72(1);
			}
			else
			{
				return func_68(iParam1, 1, iVar0, bParam4);
			}
		}
		if (Global_1574411 && Global_1573907.f_14 == iParam0)
		{
			return 28;
		}
	}
	iVar4 = func_84(iParam0);
	if (!iVar4 == -1)
	{
		return func_82(iVar4);
	}
	if (bParam3)
	{
		return 0;
	}
	return 1;
}

int func_80(bool bParam0)
{
	if (bParam0)
	{
		return 119;
	}
	return 116;
}

bool func_81(int iParam0, int iParam1, int iParam2, int iParam3)
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

int func_82(int iParam0)
{
	int iVar0;
	
	if (iParam0 > -1)
	{
		iVar0 = func_83(iParam0);
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

var func_83(int iParam0)
{
	return Global_2417956.f_818.f_44[iParam0 /*2*/].f_1;
}

int func_84(int iParam0)
{
	if (!iParam0 == func_10())
	{
		if (func_28(iParam0, 1))
		{
			return Global_2417956.f_818.f_11[func_27(iParam0)];
		}
	}
	return -1;
}

int func_85()
{
	if ((((func_90() || func_89()) || func_88()) || func_87()) || func_86())
	{
		return 1;
	}
	if (unk_0xFC559366953F62B3() && unk_0xCE990E643CD9D0E5(Global_4456448.f_36, 1))
	{
		return 1;
	}
	return 0;
}

var func_86()
{
	return Global_2451787.f_23;
}

var func_87()
{
	return Global_2451787.f_20;
}

bool func_88()
{
	return Global_2451787.f_18;
}

var func_89()
{
	return Global_2451787.f_17;
}

var func_90()
{
	return Global_2451787.f_16;
}

int func_91(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = Global_969055.f_14[iParam0];
	if (func_85())
	{
		iVar2 = func_84(iParam1);
		if (!iVar2 == -1)
		{
			return func_82(iVar2);
		}
	}
	if (iVar1 > -1 && iVar1 < 17)
	{
		if (unk_0xCE990E643CD9D0E5(Global_4456448.f_592[iParam0 /*16355*/].f_7079[iVar1], 24))
		{
			return 18;
		}
	}
	if (iParam0 > -1 && iParam1 != func_10())
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
			iVar0 = func_68(iParam1, !bParam2, iParam0, 0);
		}
		if (unk_0xCE990E643CD9D0E5(Global_4456448.f_21, 13))
		{
			iVar0 = func_92(iParam0);
		}
		if (unk_0xCE990E643CD9D0E5(Global_4456448.f_24, 29))
		{
			iVar0 = 0;
		}
		if (unk_0xCE990E643CD9D0E5(Global_4456448.f_15, 26) && !func_73(iParam0, unk_0x6CC163E30ECE0790(iParam1), 0))
		{
			iVar0 = func_80(1);
		}
	}
	else
	{
		iVar0 = 1;
	}
	return iVar0;
}

int func_92(int iParam0)
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

var func_93()
{
	return Global_2359302.f_2;
}

bool func_94()
{
	return unk_0xCE990E643CD9D0E5(Global_2359302, 4);
}

bool func_95()
{
	return unk_0xCE990E643CD9D0E5(Global_1590682[unk_0x460153A63B9477BC() /*883*/].f_39.f_18, 14);
}

int func_96(int iParam0)
{
	switch (iParam0)
	{
		case 179:
		case 180:
		case 148:
			if (Global_1590682[unk_0x460153A63B9477BC() /*883*/] == 148 && func_8(Global_1630317[unk_0x460153A63B9477BC() /*595*/].f_11.f_35, 1))
			{
				return 1;
			}
			else
			{
				return 0;
			}
			break;
		
		case 182:
		case 183:
		case 185:
		case 186:
		case 189:
		case 190:
		case 191:
		case 192:
		case 193:
		case 194:
		case 195:
		case 197:
		case 198:
		case 199:
		case 200:
		case 201:
		case 205:
		case 207:
		case 208:
		case 209:
		case 210:
		case 211:
			return 1;
	}
	return 0;
}

void func_97(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	unk_0xBE20AB8238688965(&(Global_2540384.f_5188.f_7[iVar0]), iVar1);
}

int func_98(int iParam0)
{
	switch (iParam0)
	{
		case 153:
		case 154:
		case 155:
		case 162:
		case 160:
		case 163:
		case 167:
		case 168:
		case 169:
		case 171:
		case 172:
		case 178:
		case 190:
		case 191:
		case 192:
		case 189:
		case 193:
		case 194:
		case 199:
		case 205:
		case 210:
		case 225:
		case 226:
		case 227:
		case 229:
		case 230:
		case 233:
		case 237:
		case 238:
		case 239:
		case 240:
		case 249:
		case 250:
		case 243:
		case 158:
		case 181:
		case 256:
		case 258:
			return 0;
		
		case 152:
		case 159:
		case 142:
		case 164:
		case 157:
		case 166:
		case 170:
		case 173:
		case 180:
		case 183:
		case 185:
		case 182:
		case 186:
		case 197:
		case 200:
		case 201:
		case 198:
		case 195:
		case 207:
		case 208:
		case 209:
		case 214:
		case 215:
		case 216:
		case 217:
		case 218:
		case 219:
		case 220:
		case 221:
		case 241:
		case 242:
		case 244:
		case 248:
		case 24:
		case 26:
		case 259:
			return 1;
		
		case 148:
		case 179:
			return 2;
		
		default:
	}
	return -1;
}

bool func_99(bool bParam0)
{
	return func_28(unk_0x460153A63B9477BC(), bParam0);
}

void func_100()
{
	switch (func_630())
	{
		case 0:
			func_615(151, 1, -1, 0);
			func_614(1);
			if (func_42() > 0)
			{
				func_613(1);
			}
			break;
		
		case 1:
			if (!unk_0xCE990E643CD9D0E5(iLocal_82, 2))
			{
				func_610();
			}
			if (Global_1683884 == func_10())
			{
				if (unk_0x166E920FB00B2DBB(func_37()))
				{
					Global_1683884 = func_37();
				}
			}
			func_604();
			func_594();
			func_575();
			func_573();
			func_529();
			func_403(&(Global_1366969.f_534), &Global_1366969, 28, &(Global_1366969.f_1), &(Global_1366969.f_117), -1, 0, 0);
			if (func_42() > 1)
			{
				func_613(2);
			}
			break;
		
		case 2:
			if (!unk_0xCE990E643CD9D0E5(Local_85[unk_0x59E2AD1A8ACEDA31() /*4*/].f_1, 3))
			{
				func_401(0, func_10());
				func_307();
				func_101();
			}
			if (func_42() > 2)
			{
				func_613(3);
			}
			break;
		
		case 3:
			break;
	}
}

void func_101()
{
	struct<20> Var0;
	
	Var0.f_2 = 1065353216;
	Var0.f_3 = 1065353216;
	Var0.f_4 = 1;
	Var0.f_9 = -1;
	Var0.f_18 = -1;
	Var0.f_19 = -1;
	if (!unk_0xCE990E643CD9D0E5(Local_85[unk_0x59E2AD1A8ACEDA31() /*4*/].f_1, 3))
	{
		if ((unk_0xCE990E643CD9D0E5(Local_84.f_1, 2) || unk_0xCE990E643CD9D0E5(Local_84.f_1, 4)) || unk_0xCE990E643CD9D0E5(Local_84.f_1, 4))
		{
			unk_0xBE20AB8238688965(&(Local_85[unk_0x59E2AD1A8ACEDA31() /*4*/].f_1), 3);
			return;
		}
		if (func_306())
		{
			unk_0xBE20AB8238688965(&(Local_85[unk_0x59E2AD1A8ACEDA31() /*4*/].f_1), 3);
			return;
		}
		if (func_300())
		{
			unk_0xBE20AB8238688965(&(Local_85[unk_0x59E2AD1A8ACEDA31() /*4*/].f_1), 3);
			return;
		}
		if (unk_0xCE990E643CD9D0E5(Local_84.f_1, 7))
		{
			func_102(151, 1, &Var0, 0);
		}
		else
		{
			func_102(151, unk_0xCE990E643CD9D0E5(Local_85[unk_0x59E2AD1A8ACEDA31() /*4*/].f_1, 1), &Var0, 0);
		}
		unk_0xBE20AB8238688965(&(Local_85[unk_0x59E2AD1A8ACEDA31() /*4*/].f_1), 3);
	}
}

void func_102(int iParam0, bool bParam1, var uParam2, bool bParam3)
{
	int iVar0;
	int iVar1;
	float fVar2;
	float fVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	
	func_298(iParam0, &fVar2, &fVar3);
	if (uParam2->f_6 == 0)
	{
		iVar1 = (iVar1 + uParam2->f_1);
		iVar0 = (iVar0 + *uParam2);
	}
	if (bParam1)
	{
		iVar1 = (iVar1 + func_297(iParam0, uParam2->f_13, bParam3));
		if (iParam0 == 233)
		{
			iVar6 = (uParam2->f_10 / uParam2->f_11) * 100;
			iVar1 = ((iVar1 / 100) * iVar6);
		}
		if ((iParam0 == 158 && uParam2->f_21 == 1) && !uParam2->f_22)
		{
			iVar1 = 200;
		}
		iVar1 = round((to_float(iVar1) / to_float(uParam2->f_4)));
		iVar1 = round((IntToFloat(iVar1) * fVar3));
		iVar1 = round((IntToFloat(iVar1) * uParam2->f_3));
		iVar0 = (iVar0 + func_296(iParam0, bParam3));
		iVar0 = round((to_float(iVar0) / to_float(uParam2->f_4)));
		iVar0 = round((IntToFloat(iVar0) * fVar2));
		iVar0 = round((IntToFloat(iVar0) * uParam2->f_2));
	}
	else if ((iParam0 == 185 || iParam0 == 220) || iParam0 == 221)
	{
		iVar1 = round((to_float(iVar1) / to_float(uParam2->f_4)));
		iVar1 = round((IntToFloat(iVar1) * fVar3));
		iVar1 = round((IntToFloat(iVar1) * uParam2->f_3));
		iVar0 = round((to_float(iVar0) / to_float(uParam2->f_4)));
		iVar0 = round((IntToFloat(iVar0) * fVar2));
		iVar0 = round((IntToFloat(iVar0) * uParam2->f_2));
	}
	if (uParam2->f_18 > -1)
	{
		iVar0 = (iVar0 + uParam2->f_18);
	}
	if (uParam2->f_19 > -1)
	{
		iVar1 = (iVar1 + uParam2->f_19);
	}
	if (func_294(iParam0))
	{
		if (bParam1)
		{
			if (func_293(unk_0x460153A63B9477BC()) > 0)
			{
				func_292();
			}
			else
			{
				func_291();
			}
		}
		else
		{
			func_290();
		}
	}
	func_274(iParam0, bParam1, uParam2, &iVar0, &iVar4);
	func_272(iParam0, uParam2, &iVar0, &iVar5);
	func_246(iParam0, uParam2, &iVar0, &iVar5);
	func_243(iParam0, uParam2, &iVar0, &iVar5, &iVar7);
	func_226(iParam0, uParam2, &iVar0, &iVar5);
	if (iParam0 == 168)
	{
		Global_2540384.f_5188.f_383 = iVar4;
	}
	else
	{
		Global_2540384.f_5188.f_383 = iVar5;
	}
	iVar8 = func_63();
	if (iVar8 != func_10() && iParam0 != 148)
	{
		if (func_28(unk_0x460153A63B9477BC(), 0))
		{
			if (!func_48(unk_0x460153A63B9477BC(), iVar8, 1))
			{
				func_212(&iVar0, 1);
			}
		}
	}
	func_206(iParam0, &iVar9, &iVar10);
	iVar1 = (iVar1 + iVar9);
	iVar0 = (iVar0 + iVar10);
	if (iVar1 > 0)
	{
		Global_1676128.f_10 = iVar1;
		func_205();
		func_158(0, unk_0x9B0761B4C3EB8BC7(), "", -875716015, 1626430110, iVar1, 1, -1, 0, 0, 0);
	}
	if (iVar0 > 0)
	{
		Global_1676128.f_9 = iVar0;
		func_135(iParam0, iVar0, iVar7, iVar4, iVar5, uParam2);
		func_134(iParam0, iVar0);
		if (func_133(iParam0))
		{
			if (func_132(iParam0) > -1)
			{
				func_131(func_132(iParam0), iVar0);
			}
		}
		Global_2464451 = iVar0;
		func_130(&Global_2462715, 0, 0);
	}
	if (func_35(unk_0x460153A63B9477BC()) || func_129(unk_0x460153A63B9477BC()))
	{
		func_116(iParam0);
	}
	if (func_96(iParam0))
	{
		Global_1676146.f_13 = iVar0;
		Global_1676146.f_14 = iVar1;
	}
	if (func_115(iParam0))
	{
		Global_1676200.f_13 = iVar0;
		Global_1676200.f_14 = iVar1;
	}
	if (func_114(iParam0))
	{
		Global_1676263.f_12 = iVar0;
		Global_1676263.f_13 = iVar1;
	}
	if (func_113(iParam0))
	{
		Global_1676307.f_12 = iVar0;
		Global_1676307.f_13 = iVar1;
	}
	if (func_112(iParam0))
	{
		Global_1676361.f_12 = iVar0;
		Global_1676361.f_13 = iVar1;
	}
	if (func_111(iParam0))
	{
		if (func_110(iParam0))
		{
			Global_1676443.f_12 = iVar0;
			Global_1676443.f_13 = iVar1;
		}
		else if (func_106(iParam0))
		{
			Global_1676497.f_12 = iVar0;
			Global_1676497.f_13 = iVar1;
		}
	}
	if (func_105(iParam0))
	{
		Global_1676581.f_12 = iVar0;
		Global_1676581.f_13 = iVar1;
	}
	if (func_104(iParam0))
	{
		Global_1676656.f_16 = iVar0;
		Global_1676656.f_17 = iVar1;
	}
	if (func_103(iParam0))
	{
		Global_1676743.f_16 = iVar0;
		Global_1676743.f_17 = iVar1;
	}
}

int func_103(int iParam0)
{
	switch (iParam0)
	{
		case 256:
			return 1;
		
		default:
	}
	return 0;
}

int func_104(int iParam0)
{
	switch (iParam0)
	{
		case 158:
			return 1;
		
		default:
	}
	return 0;
}

int func_105(int iParam0)
{
	switch (iParam0)
	{
		case 243:
			return 1;
		
		default:
	}
	return 0;
}

int func_106(int iParam0)
{
	if (((((((((iParam0 == 250 || iParam0 == 238) || iParam0 == 242) || iParam0 == 244) || iParam0 == 248) || iParam0 == 241) || iParam0 == 239) || iParam0 == 240) || iParam0 == 249) || (iParam0 == 237 && func_107(func_108(unk_0x460153A63B9477BC()))))
	{
		return 1;
	}
	return 0;
}

int func_107(int iParam0)
{
	switch (iParam0)
	{
		case 0:
		case 4:
		case 3:
		case 2:
		case 5:
		case 1:
			return 1;
		
		default:
	}
	return 0;
}

int func_108(int iParam0)
{
	if (func_32(iParam0) == 237 || func_32(iParam0) == 250)
	{
		return func_109(iParam0);
	}
	return -1;
}

int func_109(int iParam0)
{
	if (func_33(iParam0, 0))
	{
		return Global_1630317[iParam0 /*595*/].f_11.f_181;
	}
	return -1;
}

int func_110(int iParam0)
{
	if (iParam0 == 237)
	{
		return 1;
	}
	return 0;
}

int func_111(int iParam0)
{
	switch (iParam0)
	{
		case 150:
		case 236:
		case 237:
		case 238:
		case 239:
		case 240:
		case 241:
		case 242:
		case 244:
		case 248:
		case 249:
		case 250:
			return 1;
		
		default:
	}
	return 0;
}

int func_112(int iParam0)
{
	switch (iParam0)
	{
		case 233:
			return 1;
		
		default:
	}
	return 0;
}

int func_113(int iParam0)
{
	switch (iParam0)
	{
		case 229:
		case 230:
			return 1;
		
		default:
	}
	return 0;
}

int func_114(int iParam0)
{
	switch (iParam0)
	{
		case 225:
		case 226:
		case 227:
			return 1;
		
		default:
	}
	return 0;
}

int func_115(int iParam0)
{
	switch (iParam0)
	{
		case 214:
		case 215:
		case 216:
		case 217:
		case 218:
		case 219:
		case 220:
		case 221:
		case 188:
		case 178:
			return 1;
		
		default:
	}
	return 0;
}

void func_116(int iParam0)
{
	if (func_128(unk_0x460153A63B9477BC()) && func_127())
	{
		if (func_126(iParam0))
		{
			func_120(10268, -1);
		}
		else if (func_119(iParam0))
		{
			func_120(10270, -1);
		}
		else if (func_118(iParam0, 1))
		{
			func_120(10271, -1);
		}
		else if (func_117(iParam0))
		{
			func_120(10272, -1);
		}
	}
}

int func_117(int iParam0)
{
	switch (iParam0)
	{
		case 194:
		case 193:
		case 189:
		case 153:
			return 1;
		
		default:
	}
	return 0;
}

int func_118(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 199:
		case 205:
		case 210:
		case 211:
			return 1;
		
		default:
	}
	if (iParam1 == 0)
	{
		switch (iParam0)
		{
			case 194:
			case 193:
			case 189:
			case 153:
				return 1;
			}
		
		default:
	}
	return 0;
}

int func_119(int iParam0)
{
	switch (iParam0)
	{
		case 179:
		case 201:
		case 200:
		case 148:
			return 1;
		
		default:
	}
	return 0;
}

void func_120(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = func_124(iParam0, func_125(iParam1), 0);
	iVar0++;
	if (!func_123(iParam0))
	{
		func_122(iParam0, iVar0, iParam1, 1, 0);
	}
	else
	{
		func_121(iParam0, iVar0, iParam1, 1);
	}
}

void func_121(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	iVar0 = Global_2551832[iParam0 /*3*/][func_125(iParam2)];
	if (iVar0 != 0)
	{
		unk_0x6000E4684CB4330B(iVar0, iParam1, iParam3);
	}
	switch (iParam0)
	{
		case 787:
			Global_1388125[func_125(iParam2)] = iParam1;
			break;
		
		case 788:
			Global_1388131[func_125(iParam2)] = iParam1;
			break;
		
		case 789:
			Global_1388137[func_125(iParam2)] = iParam1;
			break;
		
		case 790:
			Global_1388143[func_125(iParam2)] = iParam1;
			break;
		
		case 8727:
			Global_1388149[func_125(iParam2)] = iParam1;
			break;
		
		case 777:
			Global_1388095[func_125(iParam2)] = iParam1;
			break;
		
		case 778:
			Global_1388101[func_125(iParam2)] = iParam1;
			break;
		
		case 779:
			Global_1388107[func_125(iParam2)] = iParam1;
			break;
		
		case 780:
			Global_1388113[func_125(iParam2)] = iParam1;
			break;
		
		case 8729:
			Global_1388119[func_125(iParam2)] = iParam1;
			break;
		
		case 767:
			Global_1388065[func_125(iParam2)] = iParam1;
			break;
		
		case 768:
			Global_1388071[func_125(iParam2)] = iParam1;
			break;
		
		case 769:
			Global_1388077[func_125(iParam2)] = iParam1;
			break;
		
		case 770:
			Global_1388083[func_125(iParam2)] = iParam1;
			break;
		
		case 8731:
			Global_1388089[func_125(iParam2)] = iParam1;
			break;
		
		case 757:
			Global_1388155[func_125(iParam2)] = iParam1;
			break;
		
		case 758:
			Global_1388161[func_125(iParam2)] = iParam1;
			break;
		
		case 759:
			Global_1388167[func_125(iParam2)] = iParam1;
			break;
		
		case 760:
			Global_1388173[func_125(iParam2)] = iParam1;
			break;
		
		case 8733:
			Global_1388179[func_125(iParam2)] = iParam1;
			break;
		
		case 1303:
			Global_1388185[func_125(iParam2)] = iParam1;
			break;
		
		case 7234:
			Global_1388191[func_125(iParam2)] = iParam1;
			break;
		
		case 639:
			Global_1388197[func_125(iParam2)] = iParam1;
			break;
		
		case 1278:
			Global_1388203[func_125(iParam2)] = iParam1;
			break;
		
		case 1877:
			Global_2590417[0 /*3*/][func_125(iParam2)] = iParam1;
			break;
		
		case 2268:
			Global_2590417[1 /*3*/][func_125(iParam2)] = iParam1;
			break;
		
		case 2930:
			Global_2590417[2 /*3*/][func_125(iParam2)] = iParam1;
			break;
		
		case 3059:
			Global_2590417[3 /*3*/][func_125(iParam2)] = iParam1;
			break;
		
		case 10138:
			Global_2590566[func_125(iParam2)] = iParam1;
			break;
		
		case 764:
			Global_1388209[func_125(iParam2)] = iParam1;
			break;
		
		case 765:
			Global_1388215[func_125(iParam2)] = iParam1;
			break;
		
		case 766:
			Global_1388221[func_125(iParam2)] = iParam1;
			break;
		
		case 8732:
			Global_1388227[func_125(iParam2)] = iParam1;
			break;
		
		case 9534:
			Global_1388233[func_125(iParam2)] = iParam1;
			break;
		
		case 1236:
			Global_1388239[func_125(iParam2)] = iParam1;
			break;
		
		case 3054:
			Global_2590490[0 /*3*/][func_125(iParam2)] = iParam1;
			break;
		
		case 3055:
			Global_2590490[1 /*3*/][func_125(iParam2)] = iParam1;
			break;
		
		case 3056:
			Global_2590490[2 /*3*/][func_125(iParam2)] = iParam1;
			break;
		
		case 3057:
			Global_2590490[3 /*3*/][func_125(iParam2)] = iParam1;
			break;
		
		case 3058:
			Global_2590490[4 /*3*/][func_125(iParam2)] = iParam1;
			break;
		
		case 3637:
			Global_2590569[0 /*3*/][func_125(iParam2)] = iParam1;
			break;
		
		case 3638:
			Global_2590569[1 /*3*/][func_125(iParam2)] = iParam1;
			break;
		
		case 3639:
			Global_2590569[2 /*3*/][func_125(iParam2)] = iParam1;
			break;
		
		case 3640:
			Global_2590569[3 /*3*/][func_125(iParam2)] = iParam1;
			break;
		
		case 3641:
			Global_2590569[4 /*3*/][func_125(iParam2)] = iParam1;
			break;
		
		case 3642:
			Global_2590585[0 /*3*/][func_125(iParam2)] = iParam1;
			break;
		
		case 3643:
			Global_2590585[1 /*3*/][func_125(iParam2)] = iParam1;
			break;
		
		case 3644:
			Global_2590585[2 /*3*/][func_125(iParam2)] = iParam1;
			break;
		
		case 3645:
			Global_2590585[3 /*3*/][func_125(iParam2)] = iParam1;
			break;
		
		case 3646:
			Global_2590585[4 /*3*/][func_125(iParam2)] = iParam1;
			break;
		
		case 3222:
			Global_2590490[5 /*3*/][func_125(iParam2)] = iParam1;
			break;
		
		case 3228:
			Global_2590417[4 /*3*/][func_125(iParam2)] = iParam1;
			break;
		
		case 3664:
			Global_2590601[func_125(iParam2)] = iParam1;
			break;
		
		case 3665:
			Global_2590610[func_125(iParam2)] = iParam1;
			break;
		
		case 3666:
			Global_2590604[func_125(iParam2)] = iParam1;
			break;
		
		case 3667:
			Global_2590613[func_125(iParam2)] = iParam1;
			break;
		
		case 3668:
			Global_2590607[func_125(iParam2)] = iParam1;
			break;
		
		case 3669:
			Global_2590616[func_125(iParam2)] = iParam1;
			break;
		
		case 3690:
			Global_2590619[func_125(iParam2)] = iParam1;
			break;
		
		case 3230:
			Global_2590490[6 /*3*/][func_125(iParam2)] = iParam1;
			break;
		
		case 3231:
			Global_2590417[5 /*3*/][func_125(iParam2)] = iParam1;
			break;
		
		case 3235:
			Global_2590490[7 /*3*/][func_125(iParam2)] = iParam1;
			break;
		
		case 3233:
			Global_2590417[6 /*3*/][func_125(iParam2)] = iParam1;
			break;
		
		case 4020:
			Global_2590490[8 /*3*/][func_125(iParam2)] = iParam1;
			break;
		
		case 4021:
			Global_2590417[7 /*3*/][func_125(iParam2)] = iParam1;
			break;
		
		case 4023:
			Global_2590490[9 /*3*/][func_125(iParam2)] = iParam1;
			break;
		
		case 4024:
			Global_2590417[8 /*3*/][func_125(iParam2)] = iParam1;
			break;
		
		case 4026:
			Global_2590490[10 /*3*/][func_125(iParam2)] = iParam1;
			break;
		
		case 4027:
			Global_2590417[9 /*3*/][func_125(iParam2)] = iParam1;
			break;
		
		case 4029:
			Global_2590490[11 /*3*/][func_125(iParam2)] = iParam1;
			break;
		
		case 4030:
			Global_2590417[10 /*3*/][func_125(iParam2)] = iParam1;
			break;
		
		case 6110:
			Global_2590490[12 /*3*/][func_125(iParam2)] = iParam1;
			break;
		
		case 6111:
			Global_2590417[11 /*3*/][func_125(iParam2)] = iParam1;
			break;
		
		case 6168:
			Global_2590490[13 /*3*/][func_125(iParam2)] = iParam1;
			break;
		
		case 6169:
			Global_2590417[12 /*3*/][func_125(iParam2)] = iParam1;
			break;
		
		case 6546:
			Global_2590490[14 /*3*/][func_125(iParam2)] = iParam1;
			break;
		
		case 6547:
			Global_2590417[13 /*3*/][func_125(iParam2)] = iParam1;
			break;
		
		case 6559:
			Global_2590490[15 /*3*/][func_125(iParam2)] = iParam1;
			break;
		
		case 6560:
			Global_2590417[14 /*3*/][func_125(iParam2)] = iParam1;
			break;
		
		case 6562:
			Global_2590490[16 /*3*/][func_125(iParam2)] = iParam1;
			break;
		
		case 6563:
			Global_2590417[15 /*3*/][func_125(iParam2)] = iParam1;
			break;
		
		case 6565:
			Global_2590490[17 /*3*/][func_125(iParam2)] = iParam1;
			break;
		
		case 6566:
			Global_2590417[16 /*3*/][func_125(iParam2)] = iParam1;
			break;
		
		case 7284:
			Global_2590417[17 /*3*/][func_125(iParam2)] = iParam1;
			break;
		
		case 7286:
			Global_2590417[18 /*3*/][func_125(iParam2)] = iParam1;
			break;
		
		case 7288:
			Global_2590417[19 /*3*/][func_125(iParam2)] = iParam1;
			break;
		
		case 8011:
			Global_2590417[20 /*3*/][func_125(iParam2)] = iParam1;
			break;
		
		case 8283:
			Global_2590622[func_125(iParam2)] = iParam1;
			break;
		
		case 8284:
			Global_2590625[func_125(iParam2)] = iParam1;
			break;
		
		case 8285:
			Global_2590628[func_125(iParam2)] = iParam1;
			break;
		
		case 8286:
			Global_2590631[func_125(iParam2)] = iParam1;
			break;
		
		case 8287:
			Global_2590634[func_125(iParam2)] = iParam1;
			break;
		
		case 8288:
			Global_2590637[func_125(iParam2)] = iParam1;
			break;
		
		case 8289:
			Global_2590640[func_125(iParam2)] = iParam1;
			break;
		
		case 8290:
			Global_2590643[func_125(iParam2)] = iParam1;
			break;
		
		case 8291:
			Global_2590646[func_125(iParam2)] = iParam1;
			break;
		
		case 8292:
			Global_2590649[func_125(iParam2)] = iParam1;
			break;
		
		case 8293:
			Global_2590652[func_125(iParam2)] = iParam1;
			break;
		
		case 8294:
			Global_2590655[func_125(iParam2)] = iParam1;
			break;
		
		case 8295:
			Global_2590658[func_125(iParam2)] = iParam1;
			break;
		
		case 8901:
			Global_2590661[func_125(iParam2)] = iParam1;
			break;
		
		case 8535:
			Global_2590417[21 /*3*/][func_125(iParam2)] = iParam1;
			break;
		
		case 8978:
			Global_2590490[23 /*3*/][func_125(iParam2)] = iParam1;
			break;
		
		case 8976:
			Global_2590417[22 /*3*/][func_125(iParam2)] = iParam1;
			break;
		
		case 8981:
			Global_2590490[24 /*3*/][func_125(iParam2)] = iParam1;
			break;
		
		case 8979:
			Global_2590417[23 /*3*/][func_125(iParam2)] = iParam1;
			break;
		
		default:
			break;
	}
}

void func_122(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	int iVar0;
	
	if (bParam4)
	{
	}
	iVar0 = Global_2551832[iParam0 /*3*/][func_125(iParam2)];
	if (iVar0 != 0)
	{
		unk_0x6000E4684CB4330B(iVar0, iParam1, iParam3);
	}
}

int func_123(int iParam0)
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

int func_124(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	var uVar1;
	
	if (iParam0 != 11771)
	{
		if (iParam2 == 0)
		{
		}
		iVar0 = Global_2551832[iParam0 /*3*/][func_125(iParam1)];
		if (unk_0xD2F202166691EDB2(iVar0, &uVar1, -1))
		{
			return uVar1;
		}
	}
	return 0;
}

int func_125(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = iParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_21();
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

int func_126(int iParam0)
{
	switch (iParam0)
	{
		case 180:
		case 183:
		case 185:
		case 186:
		case 182:
		case 195:
		case 197:
		case 198:
		case 207:
		case 208:
		case 209:
			return 1;
		
		default:
	}
	return 0;
}

bool func_127()
{
	return func_65(unk_0x460153A63B9477BC());
}

bool func_128(int iParam0)
{
	if (iParam0 == -1)
	{
		return 0;
	}
	return unk_0xCE990E643CD9D0E5(Global_1590682[iParam0 /*883*/].f_274.f_123, 14);
}

bool func_129(int iParam0)
{
	return func_36(iParam0, 20);
}

void func_130(var uParam0, bool bParam1, bool bParam2)
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

void func_131(int iParam0, int iParam1)
{
	if (iParam1 > 0)
	{
		if (Global_262145.f_23502 == 0 || Global_262145.f_23502 == 1)
		{
			if (!unk_0xF8EDFF98A9C94C74() || Global_262145.f_23502 == 1)
			{
				Global_2540384.f_283 = iParam0;
				if (iParam1 > Global_262145.f_6585)
				{
					iParam1 = Global_262145.f_6585;
				}
				Global_2540384.f_284 = iParam1;
				Global_2540384.f_285 = 0;
			}
		}
	}
}

int func_132(int iParam0)
{
	switch (iParam0)
	{
		case 142:
			return 25;
		
		case 157:
			return 22;
		
		case 159:
			return 21;
		
		case 151:
			return 33;
		
		case 148:
			return 23;
		
		case 164:
			return 24;
		
		case 152:
			return 26;
		
		case 153:
			return 30;
		
		case 154:
			return 32;
		
		case 155:
			return 28;
		
		case 160:
			return 29;
		
		case 162:
			return 31;
		
		case 163:
			return 27;
		
		case 166:
			return 38;
		
		case 170:
			return 34;
		
		case 171:
			return 35;
		
		case 172:
			return 36;
		
		case 173:
			return 37;
		
		case 179:
			return 23;
		
		default:
	}
	return 0;
}

int func_133(int iParam0)
{
	int iVar0;
	
	iVar0 = 1;
	switch (iParam0)
	{
		case 167:
			iVar0 = 0;
			break;
		
		case 169:
			iVar0 = 0;
			break;
		
		case 168:
			iVar0 = 0;
			break;
		
		case 166:
			iVar0 = 0;
			break;
		
		case 190:
			iVar0 = 0;
			break;
		
		case 191:
			iVar0 = 0;
			break;
		
		case 192:
			iVar0 = 0;
			break;
	}
	return iVar0;
}

void func_134(int iParam0, int iParam1)
{
	if (func_128(unk_0x460153A63B9477BC()) && func_127())
	{
		if (func_126(iParam0) && iParam1 > 0)
		{
			func_122(10269, (func_124(10269, -1, 0) + iParam1), -1, 1, 0);
		}
	}
}

void func_135(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, var uParam5)
{
	var uVar0;
	var uVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	bool bVar6;
	struct<2> Var7;
	
	iVar5 = func_11();
	if (iVar5 != func_10())
	{
		func_157(iVar5, &uVar0, &uVar1);
	}
	bVar6 = !func_99(1);
	Var7.f_1 = -1;
	switch (iParam0)
	{
		case 168:
			if (!func_156())
			{
				unk_0x475095B9C4F7F732(iParam1, iParam3);
			}
			break;
		
		case 190:
			if (func_127())
			{
				if (!func_156())
				{
					Var7 = { func_155() };
					unk_0x04A60A9702B796BA(iParam1, unk_0x856D5567211886A2(func_154(Var7)), func_153(Var7), iParam4);
				}
			}
			else if (func_156())
			{
				func_142(-856006867, iParam1, &iVar4, 0, 1, 0);
				Global_4264051[iVar4 /*85*/].f_6 = uVar0;
				Global_4264051[iVar4 /*85*/].f_7 = uVar1;
				Global_4264051[iVar4 /*85*/].f_8 = bVar6;
			}
			else
			{
				unk_0x475095B9C4F7F732(iParam1, iParam4);
			}
			break;
		
		case 226:
			if (func_141())
			{
				if (!func_156())
				{
					unk_0x04A60A9702B796BA(iParam1, unk_0x856D5567211886A2(func_154(func_140(unk_0x460153A63B9477BC()))), 5, iParam4);
				}
			}
			else if (func_156())
			{
				func_142(-856006867, iParam1, &iVar4, 0, 1, 0);
				Global_4264051[iVar4 /*85*/].f_6 = uVar0;
				Global_4264051[iVar4 /*85*/].f_7 = uVar1;
				Global_4264051[iVar4 /*85*/].f_8 = bVar6;
			}
			else
			{
				unk_0x475095B9C4F7F732(iParam1, iParam4);
			}
			break;
		
		case 230:
			if (func_141())
			{
				if (!func_156())
				{
					iVar2 = func_136(uParam5->f_16, iParam4);
					iVar3 = iParam1;
					if (iVar2 > 0)
					{
						iVar3 = (iVar3 - iVar2);
					}
					if (iParam2 > 0)
					{
						iVar3 = (iVar3 - iParam2);
					}
					unk_0x0772DE890A00482D(iVar3, iParam4, iParam2, iVar2, uParam5->f_16);
				}
			}
			else if (func_156())
			{
				func_142(463142405, iParam1, &iVar4, 0, 1, 0);
				Global_4264051[iVar4 /*85*/].f_6 = uVar0;
				Global_4264051[iVar4 /*85*/].f_7 = uVar1;
				Global_4264051[iVar4 /*85*/].f_8 = bVar6;
			}
			else
			{
				unk_0xE4C8AA120E162283(uVar0, uVar1, iParam1, bVar6);
			}
			break;
		
		case 233:
			if (func_156())
			{
				func_142(1407278493, iParam1, &iVar4, 0, 1, 0);
				Global_4264051[iVar4 /*85*/].f_6 = uVar0;
				Global_4264051[iVar4 /*85*/].f_7 = uVar1;
				Global_4264051[iVar4 /*85*/].f_8 = bVar6;
			}
			else
			{
				unk_0xEC03AD87CC7E1447(iParam1);
			}
			break;
		
		case 237:
			if (func_141())
			{
				if (!func_156())
				{
					unk_0x052D79AA393A7E68(iParam1, uParam5->f_20, iParam4);
				}
			}
			else if (func_156())
			{
				func_142(-856006867, iParam1, &iVar4, 0, 1, 0);
				Global_4264051[iVar4 /*85*/].f_6 = uVar0;
				Global_4264051[iVar4 /*85*/].f_7 = uVar1;
				Global_4264051[iVar4 /*85*/].f_8 = bVar6;
			}
			else
			{
				unk_0x475095B9C4F7F732(iParam1, iParam4);
			}
			break;
		
		case 250:
			if (func_156())
			{
				func_142(-961034881, iParam1, &iVar4, 0, 1, 0);
				Global_4264051[iVar4 /*85*/].f_6 = uVar0;
				Global_4264051[iVar4 /*85*/].f_7 = uVar1;
				Global_4264051[iVar4 /*85*/].f_8 = bVar6;
			}
			else
			{
				unk_0xA85DAA0267EF6B8D(iParam1);
			}
			break;
		
		case 249:
			if (func_156())
			{
				func_142(1135468152, iParam1, &iVar4, 0, 1, 0);
				Global_4264051[iVar4 /*85*/].f_6 = uVar0;
				Global_4264051[iVar4 /*85*/].f_7 = uVar1;
				Global_4264051[iVar4 /*85*/].f_8 = bVar6;
			}
			else
			{
				unk_0x92A7449E57F4C0C3(iParam1);
			}
			break;
		
		case 242:
		case 244:
		case 248:
		case 241:
		case 239:
		case 240:
			if (func_156())
			{
				func_142(-634726636, iParam1, &iVar4, 0, 1, 0);
				Global_4264051[iVar4 /*85*/].f_6 = uVar0;
				Global_4264051[iVar4 /*85*/].f_7 = uVar1;
				Global_4264051[iVar4 /*85*/].f_8 = bVar6;
			}
			else
			{
				unk_0xC2561B6B17B28E67(iParam1);
			}
			break;
		
		case 243:
			if (func_156())
			{
				func_142(1698417709, iParam1, &iVar4, 0, 1, 0);
				Global_4264051[iVar4 /*85*/].f_6 = uVar0;
				Global_4264051[iVar4 /*85*/].f_7 = uVar1;
				Global_4264051[iVar4 /*85*/].f_8 = bVar6;
			}
			else
			{
				unk_0x8092F21D0B94C61E(iParam1);
			}
			break;
		
		case 158:
			if (uParam5->f_22)
			{
				if (func_156())
				{
					func_142(1668610896, iParam1, &iVar4, 0, 1, 0);
				}
				else
				{
					unk_0xFD7A82D67D455BFC(iParam1, 0, 0, 1, iParam1, 0, 0);
				}
			}
			else if (func_156())
			{
				func_142(-2032529561, iParam1, &iVar4, 0, 1, 0);
			}
			else
			{
				unk_0xFD7A82D67D455BFC(iParam1, 1, iParam1, 0, 0, 0, 0);
			}
			break;
		
		default:
			if (func_156())
			{
				func_142(-856006867, iParam1, &iVar4, 0, 1, 0);
				Global_4264051[iVar4 /*85*/].f_6 = uVar0;
				Global_4264051[iVar4 /*85*/].f_7 = uVar1;
				Global_4264051[iVar4 /*85*/].f_8 = bVar6;
			}
			else
			{
				unk_0x88199F47F6269E70(uVar0, uVar1, iParam1, bVar6);
			}
			break;
	}
}

int func_136(int iParam0, int iParam1)
{
	float fVar0;
	float fVar1;
	
	fVar0 = func_139(iParam0, iParam1);
	fVar1 = (to_float(func_137(iParam0, iParam1)) * fVar0);
	return round(fVar1);
}

int func_137(int iParam0, int iParam1)
{
	return (func_138(iParam0) * iParam1);
}

int func_138(int iParam0)
{
	switch (iParam0)
	{
		case 8:
			return Global_262145.f_22319;
		
		case 0:
			return Global_262145.f_22320;
		
		case 1:
			return Global_262145.f_22321;
		
		case 2:
			return Global_262145.f_22322;
		
		case 3:
			return Global_262145.f_22323;
		
		case 4:
			return Global_262145.f_22324;
		
		case 5:
			return Global_262145.f_22325;
		
		case 6:
			return Global_262145.f_22326;
		
		case 7:
			return Global_262145.f_22327;
		
		default:
	}
	return 0;
}

float func_139(int iParam0, int iParam1)
{
	float fVar0;
	float fVar1;
	int iVar2;
	
	fVar0 = 0f;
	fVar1 = to_float(Global_262145.f_22329);
	switch (iParam0)
	{
		case -1:
		case 8:
			return 0f;
		
		case 7:
			fVar0 = Global_262145.f_22331;
			fVar1 = to_float(Global_262145.f_22328);
			break;
		
		case 3:
			fVar0 = Global_262145.f_22331;
			fVar1 = to_float(Global_262145.f_22328);
			break;
		
		case 0:
			fVar0 = Global_262145.f_22332;
			break;
		
		case 1:
			fVar0 = Global_262145.f_22332;
			break;
		
		case 4:
			fVar0 = Global_262145.f_22332;
			break;
		
		case 6:
			fVar0 = Global_262145.f_22333;
			fVar1 = to_float(Global_262145.f_22330);
			break;
		
		case 2:
			fVar0 = Global_262145.f_22333;
			fVar1 = to_float(Global_262145.f_22330);
			break;
		
		case 5:
			fVar0 = Global_262145.f_22333;
			fVar1 = to_float(Global_262145.f_22330);
			break;
	}
	iVar2 = floor((to_float(iParam1) / fVar1));
	return (to_float(iVar2) * fVar0);
}

int func_140(int iParam0)
{
	if (iParam0 == func_10())
	{
		return 0;
	}
	return Global_1590682[iParam0 /*883*/].f_274.f_183[5 /*12*/];
}

bool func_141()
{
	return func_29(unk_0x460153A63B9477BC());
}

void func_142(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4, bool bParam5)
{
	int iVar0;
	
	if (!func_156())
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
				func_143(iParam2, -1135378931, 537254313, 1474183246, iParam0, iParam1, iVar0, 7);
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
			func_143(iParam2, -1135378931, 1445302971, 1474183246, iParam0, iParam1, iVar0, 7);
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
				func_143(iParam2, -1135378931, 537254313, 1474183246, iParam0, iParam1, iVar0, 7);
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
			func_143(iParam2, -1135378931, 1445302971, 1474183246, iParam0, iParam1, iVar0, 7);
			break;
	}
}

int func_143(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7)
{
	bool bVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	int iVar4;
	bool bVar5;
	
	bVar0 = false;
	if (!func_156())
	{
		bVar0 = true;
	}
	iVar1 = 1;
	if (!bVar0)
	{
		if (!unk_0x5053392075AA583C(func_21()) || unk_0x701B05C16EF4F48E())
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
			*uParam0 = func_150(iVar4, iParam1, iParam4, iParam2, iParam3, iParam5, 0, iParam6, iParam7, 1, 1);
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
			func_149(1, iParam4);
			Global_4265552 = 0;
		}
		if (iParam7 & 4 != 0)
		{
			func_144(-1, iParam4, iParam6, iParam5, -1);
		}
	}
	return 0;
}

void func_144(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	switch (iParam1)
	{
		case 1704445500:
			unk_0xBE20AB8238688965(&(Global_2425869[unk_0x460153A63B9477BC() /*443*/].f_126.f_71), 0);
			break;
	}
	if (iParam0 != -1)
	{
		func_145(iParam0);
	}
}

void func_145(int iParam0)
{
	bool bVar0;
	
	bVar0 = false;
	if (!func_156())
	{
		bVar0 = true;
	}
	if (iParam0 != -1)
	{
		if (func_148(iParam0))
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
		func_146(&(Global_4264051[iParam0 /*85*/]));
	}
}

void func_146(var uParam0)
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
	func_147(&(uParam0->f_14));
	func_147(&(uParam0->f_14.f_13));
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

void func_147(var uParam0)
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

int func_148(int iParam0)
{
	if (iParam0 >= 0 && iParam0 < 15)
	{
		return Global_4264051[iParam0 /*85*/].f_66.f_5 == 1;
	}
	return 0;
}

void func_149(int iParam0, int iParam1)
{
	Global_2464590 = iParam1;
	Global_2464589 = iParam0;
}

int func_150(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, bool bParam6, int iParam7, var uParam8, int iParam9, int iParam10)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 15)
	{
		if (Global_4264051[iVar0 /*85*/].f_66.f_2 == 0)
		{
			if (!func_156())
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
				func_151(Global_4264051[iVar0 /*85*/], iVar0);
			}
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_151(struct<67> Param0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, int iParam19)
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
	iVar1 = func_46(Var0.f_1);
	if ((Global_262145.f_23581 && !Global_262145.f_23582) && !Global_262145.f_23583)
	{
		return;
	}
	if (!iVar1 == 0)
	{
		func_152();
		unk_0xB802750B43D4047C(1, &Var0, 36, iVar1);
	}
}

void func_152()
{
	unk_0xBE9B3870B1B370E3("AM_ARENA_SHP");
}

int func_153(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return 3;
		
		case 2:
			return 1;
		
		case 3:
			return 4;
		
		case 4:
			return 2;
		
		case 5:
			return 0;
		
		case 6:
			return 3;
		
		case 7:
			return 1;
		
		case 8:
			return 4;
		
		case 9:
			return 2;
		
		case 10:
			return 0;
		
		case 11:
			return 3;
		
		case 12:
			return 1;
		
		case 13:
			return 4;
		
		case 14:
			return 2;
		
		case 15:
			return 0;
		
		case 16:
			return 3;
		
		case 17:
			return 1;
		
		case 18:
			return 4;
		
		case 19:
			return 2;
		
		case 20:
			return 0;
		
		case 21:
			return 5;
		
		case 22:
			return 5;
		
		case 23:
			return 5;
		
		case 24:
			return 5;
		
		case 25:
			return 5;
		
		case 26:
			return 5;
		
		case 27:
			return 5;
		
		case 28:
			return 5;
		
		case 29:
			return 5;
		
		case 30:
			return 5;
		
		case 31:
			return 5;
		
		default:
	}
	return -1;
}

char* func_154(int iParam0)
{
	char* sVar0;
	
	switch (iParam0)
	{
		case 2:
			sVar0 = "MP_BWH_WEED_1";
			break;
		
		case 1:
			sVar0 = "MP_BWH_METH_1";
			break;
		
		case 3:
			sVar0 = "MP_BWH_CRACK_1";
			break;
		
		case 5:
			sVar0 = "MP_BWH_FAKEID_1";
			break;
		
		case 4:
			sVar0 = "MP_BWH_CASH_1";
			break;
		
		case 7:
			sVar0 = "MP_BWH_WEED_2";
			break;
		
		case 6:
			sVar0 = "MP_BWH_METH_2";
			break;
		
		case 8:
			sVar0 = "MP_BWH_CRACK_2";
			break;
		
		case 10:
			sVar0 = "MP_BWH_FAKEID_2";
			break;
		
		case 9:
			sVar0 = "MP_BWH_CASH_2";
			break;
		
		case 12:
			sVar0 = "MP_BWH_WEED_3";
			break;
		
		case 11:
			sVar0 = "MP_BWH_METH_3";
			break;
		
		case 13:
			sVar0 = "MP_BWH_CRACK_3";
			break;
		
		case 15:
			sVar0 = "MP_BWH_FAKEID_3";
			break;
		
		case 14:
			sVar0 = "MP_BWH_CASH_3";
			break;
		
		case 17:
			sVar0 = "MP_BWH_WEED_4";
			break;
		
		case 16:
			sVar0 = "MP_BWH_METH_4";
			break;
		
		case 18:
			sVar0 = "MP_BWH_CRACK_4";
			break;
		
		case 20:
			sVar0 = "MP_BWH_FAKEID_4";
			break;
		
		case 19:
			sVar0 = "MP_BWH_CASH_4";
			break;
		
		case 21:
			sVar0 = "MP_BUNKER_1";
			break;
		
		case 22:
			sVar0 = "MP_BUNKER_2";
			break;
		
		case 23:
			sVar0 = "MP_BUNKER_3";
			break;
		
		case 24:
			sVar0 = "MP_BUNKER_4";
			break;
		
		case 25:
			sVar0 = "MP_BUNKER_5";
			break;
		
		case 26:
			sVar0 = "MP_BUNKER_6";
			break;
		
		case 27:
			sVar0 = "MP_BUNKER_7";
			break;
		
		case 28:
			sVar0 = "MP_BUNKER_9";
			break;
		
		case 29:
			sVar0 = "MP_BUNKER_10";
			break;
		
		case 30:
			sVar0 = "MP_BUNKER_11";
			break;
		
		case 31:
			sVar0 = "MP_BUNKER_12";
			break;
	}
	return sVar0;
}

struct<2> func_155()
{
	return Global_1630317[unk_0x460153A63B9477BC() /*595*/].f_11.f_193;
}

int func_156()
{
	if (unk_0xF8EDFF98A9C94C74())
	{
		return unk_0xC5AA3415F982DC6C();
	}
	return 0;
}

void func_157(int iParam0, var uParam1, var uParam2)
{
	*uParam1 = Global_1630317[iParam0 /*595*/].f_11.f_8[0];
	*uParam2 = Global_1630317[iParam0 /*595*/].f_11.f_8[1];
}

int func_158(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, char* sParam8, bool bParam9, int iParam10)
{
	return func_159(iParam0, iParam1, sParam2, iParam3, iParam4, iParam5, iParam6, iParam7, sParam8, bParam9, iParam10);
}

int func_159(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, char* sParam8, bool bParam9, int iParam10)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_169(iParam0, sParam2, iParam3, iParam4, iParam5, iParam6, iParam7, bParam9);
	if (iParam4 == -592022605 || iParam4 == -1915191729)
	{
		if (unk_0xAE06B9E39EBDE049(iParam1))
		{
			if (unk_0xA1914E72A0EB31D0(iParam1))
			{
				iVar1 = unk_0x9048E8838E822F21(iParam1);
				func_165(unk_0x1D5C49FCA9BC5B02(iVar1, 31086, 0f, 0f, 0f), iVar0, 0, sParam8, iParam10);
			}
		}
	}
	else
	{
		func_160(iParam1, iVar0, sParam8, iParam10);
	}
	return iVar0;
}

void func_160(int iParam0, int iParam1, char* sParam2, int iParam3)
{
	struct<3> Var0;
	
	Var0 = { func_163(iParam0, 1) };
	if (iParam0 == func_162(unk_0x9B0761B4C3EB8BC7()))
	{
		func_161(1);
	}
	func_165(Var0, iParam1, 0, sParam2, iParam3);
}

void func_161(int iParam0)
{
	Global_2440049.f_2002 = iParam0;
}

int func_162(int iParam0)
{
	return iParam0;
}

Vector3 func_163(int iParam0, bool bParam1)
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
	if (iParam0 == func_164(unk_0x9B0761B4C3EB8BC7()) && unk_0xF7B3A1430308F92B(unk_0xFA3A11B011BBD7F6()) == 4)
	{
		Var0 = { unk_0x7EC595B99EA7C4B1(iParam0, 0f, 8f, -0.2f) };
	}
	else
	{
		Var0 = { unk_0x3E4D3CCC220BDFB1(iParam0, false) };
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

int func_164(int iParam0)
{
	return iParam0;
}

void func_165(struct<3> Param0, int iParam1, int iParam2, char* sParam3, int iParam4)
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
			Global_2440049.f_1401[iVar1 /*30*/].f_4 = func_168(Global_2440049.f_1401[iVar1 /*30*/], &Global_1312335, &Global_1312336);
			Global_2440049.f_1401[iVar1 /*30*/].f_7 = unk_0x6CAAB7E78B5D978A();
			Global_2440049.f_1401[iVar1 /*30*/].f_3 = iParam1;
			Global_2440049.f_1401[iVar1 /*30*/].f_8 = iParam2;
			Global_2440049.f_1401[iVar1 /*30*/].f_9 = func_167();
			Global_2440049.f_1401[iVar1 /*30*/].f_10 = func_166();
			StringCopy(&(Global_2440049.f_1401[iVar1 /*30*/].f_22), sParam3, 16);
			Global_2440049.f_1401[iVar1 /*30*/].f_26 = unk_0x8C358101651A3F7C(unk_0x6CAAB7E78B5D978A(), iParam4);
		}
	}
}

int func_166()
{
	if (Global_2440049.f_2002)
	{
		Global_2440049.f_2002 = 0;
		return 1;
	}
	Global_2440049.f_2002 = 0;
	return 0;
}

var func_167()
{
	var uVar0;
	
	uVar0 = Global_2440049.f_2004;
	Global_2440049.f_2004 = 1;
	return uVar0;
}

float func_168(struct<3> Param0, var uParam1, var uParam2)
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	
	fVar0 = unk_0x272784C60C397DB6(unk_0x0F1DDC797C100E7F(), Param0, true);
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

var func_169(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	var uVar0;
	
	uVar0 = func_170(iParam0, 0, sParam1, iParam4, iParam5, 0, iParam6, 1, iParam2, iParam3, bParam7);
	return uVar0;
}

int func_170(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, bool bParam5, int iParam6, bool bParam7, int iParam8, int iParam9, bool bParam10)
{
	float fVar0;
	int iVar1;
	int iVar2;
	float fVar3;
	
	if (func_204(unk_0x460153A63B9477BC()) || func_203(unk_0x460153A63B9477BC()))
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
	else if (func_201() || func_200(unk_0x460153A63B9477BC()))
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
	if (func_199(sParam2))
	{
	}
	if (func_198())
	{
		if (iParam4 < 1)
		{
			iParam4 = 1;
		}
		iVar1 = round((IntToFloat(iParam3) * (IntToFloat(iParam4) + fVar0)));
		iVar1 = func_196(iVar1);
		fVar3 = (to_float(iVar1) * Global_262145.f_1);
		iVar1 = round(fVar3);
		if (bParam10)
		{
			iVar1 = func_195(&iVar1);
		}
		if (iParam1 == 0)
		{
			switch (iParam0)
			{
				case 2:
					func_192(0, &iVar1);
					break;
				
				case 3:
					func_192(1, &iVar1);
					break;
				
				case 1:
					func_189(&iVar1);
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
			func_188(1164, iVar1, -1);
			if (iParam1 == 0)
			{
				func_181((func_187(unk_0x460153A63B9477BC()) + iVar1), iParam9, 0);
				if (iParam8 == 0)
				{
				}
				if (iParam9 == 0)
				{
				}
				unk_0xC0B1609C742F66E3(iVar1, iParam8, iParam9);
				if (Global_1590682[unk_0x460153A63B9477BC() /*883*/].f_39.f_2 != -1)
				{
					func_188(1165, iVar1, -1);
				}
				func_175(iVar1);
			}
		}
		if (bParam5)
		{
		}
		if (bParam7)
		{
			if (iParam6 == -1)
			{
				func_171((func_173(unk_0x460153A63B9477BC()) + iVar1));
			}
			else
			{
				func_171((func_173(unk_0x460153A63B9477BC()) + iParam6));
			}
		}
	}
	return iVar1;
}

void func_171(int iParam0)
{
	if (func_198())
	{
		Global_1590682[unk_0x460153A63B9477BC() /*883*/].f_211.f_5 = iParam0;
		func_172(joaat("MPPLY_GLOBALXP"), iParam0);
	}
}

void func_172(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != 0)
	{
		unk_0x6000E4684CB4330B(iVar0, iParam1, 1);
	}
}

int func_173(int iParam0)
{
	if (iParam0 > -1)
	{
		if (func_9(iParam0, 0, 1))
		{
			if (iParam0 == unk_0x460153A63B9477BC())
			{
				return func_174(joaat("MPPLY_GLOBALXP"));
			}
			else
			{
				return Global_1590682[iParam0 /*883*/].f_211.f_5;
			}
		}
		else
		{
			return func_174(joaat("MPPLY_GLOBALXP"));
		}
	}
	return 0;
}

int func_174(int iParam0)
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

void func_175(int iParam0)
{
	struct<13> Var0;
	int iVar1;
	
	Var0 = { func_180(unk_0x460153A63B9477BC()) };
	if (unk_0xE2FBD13450B2DA21())
	{
		if (unk_0xBF9EC1ED7E386622(&Var0))
		{
			iVar1 = func_178(func_179(&Var0));
			if (iVar1 == 0)
			{
				func_177(&Global_1388052, iParam0);
				func_176(joaat("MPPLY_CREW_LOCAL_XP_0"), Global_1388052);
			}
			else if (iVar1 == 1)
			{
				func_177(&Global_1388053, iParam0);
				func_176(joaat("MPPLY_CREW_LOCAL_XP_1"), Global_1388053);
			}
			else if (iVar1 == 2)
			{
				func_177(&Global_1388054, iParam0);
				func_176(joaat("MPPLY_CREW_LOCAL_XP_2"), Global_1388054);
			}
			else if (iVar1 == 3)
			{
				func_177(&Global_1388055, iParam0);
				func_176(joaat("MPPLY_CREW_LOCAL_XP_3"), Global_1388055);
			}
			else if (iVar1 == 4)
			{
				func_177(&Global_1388056, iParam0);
				func_176(joaat("MPPLY_CREW_LOCAL_XP_4"), Global_1388056);
			}
		}
	}
}

void func_176(int iParam0, int iParam1)
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

void func_177(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 + iParam1);
}

int func_178(int iParam0)
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

int func_179(var uParam0)
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

struct<13> func_180(int iParam0)
{
	struct<13> Var0;
	
	unk_0x2BDD80E79441BD36(iParam0, &Var0, 13);
	return Var0;
}

void func_181(int iParam0, int iParam1, int iParam2)
{
	if (func_198())
	{
		if (iParam0 >= 1787576850)
		{
			iParam0 = 1787576850;
		}
		if (Global_262145.f_9605 == 0 && iParam1 != -1076930708)
		{
			if (iParam2 == 0)
			{
				if (iParam0 < Global_1388197[func_125(-1)])
				{
					unk_0xC0B1609C742F66E3(iParam0, -523908350, iParam1);
					return;
				}
				else if (iParam0 == Global_1388197[func_125(-1)])
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
		if (func_15(unk_0x460153A63B9477BC()))
		{
			Global_1590682[unk_0x460153A63B9477BC() /*883*/].f_211.f_1 = iParam0;
			Global_1590682[unk_0x460153A63B9477BC() /*883*/].f_211.f_6 = func_185(iParam0, 1);
		}
		func_121(639, iParam0, -1, 1);
		func_122(640, func_185(iParam0, 1), -1, 1, 0);
		Global_1388197[func_125(-1)] = iParam0;
		func_182(-1109644434, 7, 0);
	}
}

void func_182(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	if (func_184(iParam1, iParam2))
	{
		iVar0 = func_183();
		Global_2462127[iVar0] = iParam1;
		Global_2462138[iVar0] = iParam0;
	}
}

int func_183()
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

int func_184(int iParam0, var uParam1)
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

int func_185(int iParam0, bool bParam1)
{
	if (bParam1)
	{
	}
	return func_186(iParam0, 0);
}

int func_186(int iParam0, int iParam1)
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

int func_187(int iParam0)
{
	if (Global_1312485.f_9 == 0)
	{
		if (iParam0 > -1)
		{
			if (iParam0 == unk_0x460153A63B9477BC())
			{
				return Global_1388197[func_125(-1)];
			}
			else if (func_15(iParam0))
			{
				return Global_1590682[iParam0 /*883*/].f_211.f_1;
			}
		}
	}
	else
	{
		return Global_1388197[func_125(-1)];
	}
	return 0;
}

void func_188(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	iVar0 = func_124(iParam0, func_125(iParam2), 0);
	iVar0 = (iVar0 + iParam1);
	if (!func_123(iParam0))
	{
		func_122(iParam0, iVar0, iParam2, 1, 0);
	}
	else
	{
		func_121(iParam0, iVar0, iParam2, 1);
	}
}

void func_189(int iParam0)
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
				if (unk_0x6CC163E30ECE0790(iVar5) == iVar1 || func_73(unk_0x6CC163E30ECE0790(iVar5), iVar1, 0))
				{
					iVar2++;
					if (iVar5 != unk_0x460153A63B9477BC())
					{
						if (func_191(unk_0x460153A63B9477BC(), iVar5))
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
		iVar6 = round((func_190(*iParam0, 100) * (10f * Global_262145.f_4218)));
	}
	if (iVar2 > 4)
	{
		iVar2 = 4;
	}
	if (iVar2 >= 2)
	{
		iVar7 = round((func_190(*iParam0, 100) * (20f * Global_262145.f_4211)));
	}
	*iParam0 = (*iParam0 + iVar6);
	*iParam0 = (*iParam0 + iVar7);
}

float func_190(int iParam0, int iParam1)
{
	float fVar0;
	float fVar1;
	float fVar2;
	
	fVar0 = to_float(iParam0);
	fVar1 = to_float(iParam1);
	fVar2 = (fVar0 / fVar1);
	return fVar2;
}

int func_191(int iParam0, int iParam1)
{
	if (unk_0xE2FBD13450B2DA21())
	{
		Global_2515173 = { func_180(iParam0) };
		Global_2515186 = { func_180(iParam1) };
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

void func_192(bool bParam0, int iParam1)
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
				if (func_9(iVar4, 0, 1))
				{
					if (iVar4 != unk_0x460153A63B9477BC())
					{
						iVar1++;
						if (func_191(unk_0x460153A63B9477BC(), iVar4))
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
			if (func_9(iVar4, 1, 1))
			{
				if (iVar4 != unk_0x460153A63B9477BC())
				{
					if (func_193(unk_0x460153A63B9477BC(), iVar4) <= 20f)
					{
						iVar1++;
						if (func_191(unk_0x460153A63B9477BC(), iVar4))
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
		iVar5 = round((func_190(*iParam1, 100) * (10f * Global_262145.f_4218)));
	}
	if (iVar1 > 4)
	{
		iVar1 = 4;
	}
	if (iVar1 >= 1)
	{
		iVar6 = round((func_190(*iParam1, 100) * (20f * Global_262145.f_4211)));
	}
	*iParam1 = (*iParam1 + iVar5);
	*iParam1 = (*iParam1 + iVar6);
}

float func_193(int iParam0, int iParam1)
{
	return vdist(func_194(iParam0), func_194(iParam1));
	return 0f;
}

Vector3 func_194(int iParam0)
{
	return unk_0x3E4D3CCC220BDFB1(unk_0x1FA7B77001D60F9D(iParam0), false);
}

int func_195(int iParam0)
{
	int iVar0;
	
	if (unk_0x2F9269FB5C4717C0() != 3)
	{
		return *iParam0;
	}
	iVar0 = round((func_190(*iParam0, 100) * 25f));
	*iParam0 = (*iParam0 + iVar0);
	return *iParam0;
}

int func_196(int iParam0)
{
	if (iParam0 < 0)
	{
		if (unk_0x44F29CF6A0675F4F(iParam0) > func_187(unk_0x460153A63B9477BC()))
		{
			iParam0 = -func_187(unk_0x460153A63B9477BC());
		}
	}
	if (func_197(8000, 0, 0) > 0)
	{
		if (func_197(8000, 0, 0) < (iParam0 + func_187(unk_0x460153A63B9477BC())))
		{
			iParam0 = (func_197(8000, 0, 0) - func_187(unk_0x460153A63B9477BC()));
		}
	}
	return iParam0;
}

int func_197(int iParam0, bool bParam1, int iParam2)
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

int func_198()
{
	return 1;
}

int func_199(char* sParam0)
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

int func_200(int iParam0)
{
	return func_112(func_32(iParam0));
}

bool func_201()
{
	if (unk_0xFC559366953F62B3())
	{
		return func_88();
	}
	return func_202(Global_4456448.f_82708);
}

int func_202(int iParam0)
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

bool func_203(int iParam0)
{
	return Global_2425869[iParam0 /*443*/].f_119 == 2;
}

bool func_204(int iParam0)
{
	return Global_2425869[iParam0 /*443*/].f_119 == 7;
}

void func_205()
{
	Global_2463792 = 1;
}

void func_206(int iParam0, var uParam1, var uParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	*uParam1 = 0;
	*uParam2 = 0;
	if (!func_211(7))
	{
		return;
	}
	iVar0 = func_209(iParam0);
	iVar1 = func_208(iParam0);
	iVar2 = unk_0x44F29CF6A0675F4F(unk_0x624736CA66E14161(Global_2540384.f_5188.f_266, unk_0x6CAAB7E78B5D978A()));
	if (func_207(iParam0) != -1)
	{
		if (iVar2 > func_207(iParam0))
		{
			iVar2 = func_207(iParam0);
		}
	}
	else if (iVar2 > Global_262145.f_12403)
	{
		iVar2 = Global_262145.f_12403;
	}
	iVar3 = floor((to_float(iVar2) / (1000f * 60f)));
	if (iVar3 < 1)
	{
		iVar3 = 1;
	}
	*uParam1 = (iVar3 * iVar1);
	*uParam2 = (iVar3 * iVar0);
}

int func_207(int iParam0)
{
	if (func_118(iParam0, 0) || func_119(iParam0))
	{
		return Global_262145.f_18495;
	}
	if (func_126(iParam0))
	{
		return Global_262145.f_18494;
	}
	switch (iParam0)
	{
		case 192:
			return Global_262145.f_18491;
		
		case 191:
			return Global_262145.f_18493;
		
		case 190:
			return Global_262145.f_18492;
		
		case 227:
			return Global_262145.f_21053;
		
		case 226:
			return Global_262145.f_21041;
		
		case 225:
			return Global_262145.f_21061;
		
		case 230:
			return Global_262145.f_22316;
		
		case 229:
			return Global_262145.f_22220;
		
		case 233:
			return Global_262145.f_22792;
		
		case 237:
			return Global_262145.f_23955;
		
		case 238:
			return Global_262145.f_24066;
		
		case 249:
			return Global_262145.f_24082;
		
		case 243:
			return Global_262145.f_26374;
		
		default:
	}
	return -1;
}

int func_208(int iParam0)
{
	switch (iParam0)
	{
		case 148:
			return Global_262145.f_12494;
		
		case 152:
			return Global_262145.f_12529;
		
		case 151:
			return 0;
		
		case 142:
			return Global_262145.f_12517;
		
		case 157:
			return Global_262145.f_12484;
		
		case 159:
			return Global_262145.f_12467;
		
		case 164:
			return Global_262145.f_12507;
		
		case 160:
			return Global_262145.f_12557;
		
		case 162:
			return Global_262145.f_12577;
		
		case 163:
			return Global_262145.f_12542;
		
		case 154:
			return Global_262145.f_12612;
		
		case 155:
			return Global_262145.f_12602;
		
		case 153:
			return Global_262145.f_12566;
		
		case 170:
			return Global_262145.f_15003;
		
		case 171:
			return Global_262145.f_15062;
		
		case 172:
			return Global_262145.f_15080;
		
		case 173:
			return Global_262145.f_15021;
		
		case 166:
			return Global_262145.f_15036;
		
		case 167:
			return Global_262145.f_15127;
		
		case 169:
			return Global_262145.f_15099;
		
		case 168:
			return Global_262145.f_15092;
		
		case 179:
			return Global_262145.f_18374;
		
		case 180:
			return Global_262145.f_18152;
		
		case 182:
			return Global_262145.f_18152;
		
		case 183:
			return Global_262145.f_18152;
		
		case 185:
			return Global_262145.f_18152;
		
		case 186:
			return Global_262145.f_18152;
		
		case 189:
			return Global_262145.f_18374;
		
		case 190:
			return Global_262145.f_18028;
		
		case 191:
			return Global_262145.f_18119;
		
		case 192:
			return Global_262145.f_17913;
		
		case 193:
			return Global_262145.f_18374;
		
		case 194:
			return Global_262145.f_18374;
		
		case 195:
			return Global_262145.f_18152;
		
		case 197:
			return Global_262145.f_18152;
		
		case 198:
			return Global_262145.f_18152;
		
		case 199:
			return Global_262145.f_18374;
		
		case 200:
			return Global_262145.f_18374;
		
		case 201:
			return Global_262145.f_18374;
		
		case 205:
			return Global_262145.f_18374;
		
		case 207:
			return Global_262145.f_18152;
		
		case 208:
			return Global_262145.f_18152;
		
		case 209:
			return Global_262145.f_18152;
		
		case 210:
			return Global_262145.f_18374;
		
		case 211:
			return Global_262145.f_18374;
		
		case 214:
			return Global_262145.f_19224;
		
		case 215:
			return Global_262145.f_19226;
		
		case 216:
			return Global_262145.f_19228;
		
		case 217:
			return Global_262145.f_19230;
		
		case 218:
			return Global_262145.f_19232;
		
		case 219:
			return Global_262145.f_19234;
		
		case 220:
			return Global_262145.f_19236;
		
		case 221:
			return Global_262145.f_19238;
		
		case 225:
			if (!func_141())
			{
				return Global_262145.f_21063;
			}
			break;
		
		case 226:
			if (!func_141())
			{
				return Global_262145.f_21043;
			}
			break;
		
		case 227:
			if (!func_141())
			{
				return Global_262145.f_21055;
			}
			break;
		
		case 229:
			if (!func_141())
			{
				return Global_262145.f_22222;
			}
			break;
		
		case 230:
			if (!func_141())
			{
				return Global_262145.f_22318;
			}
			break;
		
		case 233:
			if (!func_141())
			{
				return Global_262145.f_22791;
			}
			break;
		
		case 241:
			return 100;
		
		case 242:
			return 100;
		
		case 244:
			return 100;
		
		case 248:
			return 100;
		
		case 239:
			return 100;
		
		case 240:
			return 100;
		
		case 250:
			return 100;
		
		case 237:
			if (!func_141())
			{
				return Global_262145.f_23957;
			}
			break;
		
		case 238:
			if (!func_141())
			{
				return Global_262145.f_24068;
			}
			break;
		
		case 249:
			if (!func_141())
			{
				return Global_262145.f_24084;
			}
			break;
		
		case 243:
			if (!func_141())
			{
				return Global_262145.f_26377;
			}
			break;
		
		case 158:
			if (!func_141())
			{
				return 100;
			}
			break;
	}
	return 0;
}

int func_209(int iParam0)
{
	switch (iParam0)
	{
		case 148:
			return Global_262145.f_12493;
		
		case 152:
			return Global_262145.f_12528;
		
		case 151:
			return 0;
		
		case 142:
			return Global_262145.f_12516;
		
		case 157:
			return Global_262145.f_12483;
		
		case 159:
			return Global_262145.f_12466;
		
		case 164:
			return Global_262145.f_12506;
		
		case 160:
			return Global_262145.f_12556;
		
		case 162:
			return Global_262145.f_12576;
		
		case 163:
			return Global_262145.f_12541;
		
		case 154:
			return Global_262145.f_12611;
		
		case 155:
			return Global_262145.f_12601;
		
		case 153:
			return Global_262145.f_12565;
		
		case 170:
			return Global_262145.f_15002;
		
		case 171:
			return Global_262145.f_15061;
		
		case 172:
			return Global_262145.f_15079;
		
		case 173:
			return Global_262145.f_15020;
		
		case 166:
			return Global_262145.f_15035;
		
		case 179:
			return Global_262145.f_18373;
		
		case 180:
			return Global_262145.f_18151;
		
		case 182:
			return Global_262145.f_18151;
		
		case 183:
			return Global_262145.f_18151;
		
		case 185:
			return Global_262145.f_18151;
		
		case 186:
			return Global_262145.f_18151;
		
		case 189:
			return Global_262145.f_18373;
		
		case 193:
			return Global_262145.f_18373;
		
		case 194:
			return Global_262145.f_18373;
		
		case 195:
			return Global_262145.f_18151;
		
		case 197:
			return Global_262145.f_18151;
		
		case 198:
			return Global_262145.f_18151;
		
		case 199:
			return Global_262145.f_18373;
		
		case 200:
			return Global_262145.f_18373;
		
		case 201:
			return Global_262145.f_18373;
		
		case 205:
			return Global_262145.f_18373;
		
		case 207:
			return Global_262145.f_18151;
		
		case 208:
			return Global_262145.f_18151;
		
		case 209:
			return Global_262145.f_18151;
		
		case 210:
			return Global_262145.f_18373;
		
		case 211:
			return Global_262145.f_18373;
		
		case 190:
			if (func_210(0))
			{
				return Global_262145.f_18027;
			}
			else
			{
				return 0;
			}
			break;
		
		case 191:
			if (func_210(0))
			{
				return Global_262145.f_18118;
			}
			else
			{
				return 0;
			}
			break;
		
		case 192:
			if (func_210(0))
			{
				return Global_262145.f_17912;
			}
			else
			{
				return 0;
			}
			break;
		
		case 214:
			return Global_262145.f_19223;
		
		case 215:
			return Global_262145.f_19225;
		
		case 216:
			return Global_262145.f_19227;
		
		case 217:
			return Global_262145.f_19229;
		
		case 218:
			return Global_262145.f_19231;
		
		case 219:
			return Global_262145.f_19233;
		
		case 220:
			return Global_262145.f_19235;
		
		case 221:
			return Global_262145.f_19237;
		
		case 225:
			if (func_210(0))
			{
				return Global_262145.f_21062;
			}
			break;
		
		case 226:
			if (func_210(0))
			{
				return Global_262145.f_21042;
			}
			break;
		
		case 227:
			if (func_210(0))
			{
				return Global_262145.f_21054;
			}
			break;
		
		case 229:
			if (func_210(0))
			{
				return Global_262145.f_22221;
			}
			break;
		
		case 230:
			if (func_210(0))
			{
				return Global_262145.f_22317;
			}
			break;
		
		case 233:
			if (func_210(0))
			{
				return Global_262145.f_22793;
			}
			break;
		
		case 241:
			return 500;
		
		case 242:
			return 500;
		
		case 244:
			return 500;
		
		case 248:
			return 500;
		
		case 239:
			return 500;
		
		case 240:
			return 500;
		
		case 250:
			return 500;
		
		case 237:
			if (func_210(0))
			{
				return Global_262145.f_23956;
			}
			break;
		
		case 238:
			if (func_210(0))
			{
				return Global_262145.f_24067;
			}
			break;
		
		case 249:
			if (func_210(0))
			{
				return Global_262145.f_24083;
			}
			break;
		
		case 243:
			return Global_262145.f_26373;
		
		case 158:
			if (func_210(0))
			{
				return 500;
			}
			break;
	}
	return 0;
}

bool func_210(bool bParam0)
{
	return func_6(unk_0x460153A63B9477BC(), bParam0);
}

bool func_211(int iParam0)
{
	return unk_0xCE990E643CD9D0E5(Global_2540384.f_5188.f_45, iParam0);
}

void func_212(int iParam0, int iParam1)
{
	int iVar0;
	
	if (*iParam0 > 0)
	{
		if (!func_141())
		{
			if (func_99(0))
			{
				if (!func_210(0))
				{
					if (unk_0x166E920FB00B2DBB(func_11()))
					{
						if (func_225() == 100)
						{
							iVar0 = *iParam0;
							*iParam0 = 0;
						}
						else
						{
							iVar0 = ((*iParam0 / 100) * func_225());
							*iParam0 = (*iParam0 - iVar0);
						}
						func_223(&iVar0, 0);
						if (iParam1 == 1)
						{
							func_216("GB_BCUT_TICK1", func_11(), iVar0, 0, 0, 1);
						}
						func_97(20);
						func_213(func_11(), iVar0, 1);
					}
				}
			}
		}
	}
}

void func_213(int iParam0, int iParam1, int iParam2)
{
	struct<8> Var0;
	
	if (func_9(iParam0, 0, 1))
	{
		Var0 = 1596100569;
		Var0.f_1 = unk_0x460153A63B9477BC();
		Var0.f_2 = iParam1;
		Var0.f_4 = iParam2;
		Var0.f_5 = func_215(iParam0);
		func_214(&(Var0.f_6), &(Var0.f_7));
		unk_0xB802750B43D4047C(1, &Var0, 8, func_46(iParam0));
	}
}

void func_214(var uParam0, var uParam1)
{
	*uParam0 = Global_1652336.f_9;
	*uParam1 = Global_1652336.f_10;
}

var func_215(int iParam0)
{
	return Global_1630317[iParam0 /*595*/].f_506;
}

int func_216(char* sParam0, int iParam1, int iParam2, int iParam3, bool bParam4, int iParam5)
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
		unk_0x7006FC1051C85FCA(func_66(iParam1, -2, 1, 0, 0));
		unk_0x9EFD301E3BE8324E(func_221(&Var1));
		if (!iParam3 == 0)
		{
			unk_0x7006FC1051C85FCA(iParam3);
		}
		unk_0x42710E9E08FA375A(iParam2);
		iVar0 = unk_0xD60C2975A14D763D(0, 1);
		func_217(27, sParam0, 1, &Var1, iParam2, 0, 0, 0, 1, 0, 0, 0);
	}
	return iVar0;
}

void func_217(int iParam0, char* sParam1, int iParam2, char* sParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, char* sParam9, char* sParam10, char* sParam11)
{
	int iVar0;
	
	if ((!func_220() || !unk_0xFC559366953F62B3()) || !func_19(unk_0x460153A63B9477BC(), 0))
	{
		return;
	}
	iVar0 = func_218(iParam2);
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

int func_218(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= (Global_1672611 - 1))
	{
		if (iParam0 > Global_1672611.f_5[iVar0 /*53*/].f_1)
		{
			func_219(iVar0);
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

void func_219(int iParam0)
{
	int iVar0;
	
	iVar0 = 4;
	while (iVar0 >= iParam0 + 1)
	{
		Global_1672611.f_5[iVar0 /*53*/] = { Global_1672611.f_5[(iVar0 - 1) /*53*/] };
		iVar0 = (iVar0 + -1);
	}
}

bool func_220()
{
	return unk_0x95C5B896CB42B20E(-1762644250);
}

var func_221(char* sParam0)
{
	char cVar0[64];
	
	StringCopy(&cVar0, "<C>", 64);
	StringConCat(&cVar0, sParam0, 64);
	StringConCat(&cVar0, "</C>~s~", 64);
	return func_222(&cVar0);
}

var func_222(char[4] cParam0)
{
	return cParam0;
}

void func_223(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	if (bParam1)
	{
		iVar1 = func_224(1);
	}
	else
	{
		iVar1 = func_224(0);
	}
	iVar0 = ((*iParam0 / 100) * iVar1);
	*iParam0 = (*iParam0 - iVar0);
}

int func_224(bool bParam0)
{
	if (bParam0)
	{
		return round((0.05f * 100f));
	}
	return Global_262145.f_12398;
}

int func_225()
{
	return Global_262145.f_12397;
}

void func_226(int iParam0, var uParam1, int iParam2, var uParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	var uVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	float fVar12;
	float fVar13;
	float fVar14;
	float fVar15;
	float fVar16;
	int iVar17;
	bool bVar18;
	bool bVar19;
	int iVar20;
	int iVar21;
	int iVar22;
	int iVar23;
	
	bVar18 = func_210(1);
	bVar19 = false;
	if (iParam0 == 237)
	{
		if (func_141())
		{
			iVar17 = unk_0x460153A63B9477BC();
		}
		else
		{
			iVar17 = func_11();
		}
		iVar11 = iVar17;
		if (iVar11 != -1)
		{
			iVar0 = Global_1590682[iVar11 /*883*/].f_861.f_1;
			if (uParam1->f_10 == uParam1->f_11)
			{
				iVar1 = iVar0;
				bVar19 = true;
			}
			else
			{
				fVar12 = to_float(uParam1->f_10);
				fVar13 = to_float(uParam1->f_11);
				fVar14 = ((fVar12 / fVar13) * 100f);
				fVar15 = ((IntToFloat(iVar0) / 100f) * fVar14);
				iVar1 = ceil(fVar15);
			}
			*uParam3 = iVar1;
			if (bVar19)
			{
				iVar2 = Global_1590682[iVar11 /*883*/].f_861.f_2;
			}
			else
			{
				iVar2 = func_242(Global_1590682[iVar11 /*883*/].f_861, *uParam3);
			}
			if (uParam1->f_17)
			{
				iVar20 = (iVar2 - ceil((IntToFloat(iVar2) * 0.9f)));
				if (iVar20 > 100000)
				{
					iVar20 = 100000;
				}
				iVar2 = (iVar2 - iVar20);
			}
			*iParam2 = (*iParam2 + iVar2);
			iVar10 = func_241(*iParam2);
			if (iVar10 > 0)
			{
				if (iVar17 == unk_0x460153A63B9477BC())
				{
					func_240("TICK_TCUT", iVar10);
				}
				*iParam2 = (*iParam2 - iVar10);
			}
			Global_1676443.f_49 = *uParam3;
			if (iVar17 == unk_0x460153A63B9477BC())
			{
				if (iVar2 > 0)
				{
					func_239(iVar2);
				}
				if (*uParam3 > 0)
				{
					func_237(*uParam3);
				}
				iVar6 = func_236(&uVar5);
				iVar7 = Global_262145.f_23986;
				if (iVar6 > iVar7)
				{
					iVar6 = iVar7;
				}
				iVar9 = ceil((IntToFloat(iVar6) * Global_262145.f_23985));
				iVar8 = ((*iParam2 / 100) * iVar9);
				*iParam2 = (*iParam2 + iVar8);
				if (*iParam2 > 0)
				{
					if (iVar6 > 0)
					{
						func_97(140);
					}
				}
				if (*iParam2 > 0)
				{
					if (!bVar18)
					{
						iVar21 = 0;
						while (iVar21 < unk_0xEFA28384DDD283E1())
						{
							iVar22 = iVar21;
							if (unk_0xBD09DF93F957A0CF(iVar22))
							{
								iVar23 = unk_0x9019589211A13B02(iVar22);
								if (func_235(iVar23))
								{
									func_227(iVar23, 1, 198210293);
								}
							}
							iVar21++;
						}
					}
				}
				Global_2540384.f_5188.f_382 = *iParam2;
			}
			else if (bVar18)
			{
				fVar16 = Global_262145.f_23958;
				iVar3 = ceil((IntToFloat(*iParam2) * fVar16));
				*iParam2 = iVar3;
				iVar4 = Global_262145.f_23959;
				if (*iParam2 > iVar4)
				{
					*iParam2 = iVar4;
				}
				if (*iParam2 > 0)
				{
					Global_1688746 = *iParam2;
					func_97(121);
				}
			}
			else
			{
				*iParam2 = 0;
			}
		}
	}
}

void func_227(int iParam0, int iParam1, int iParam2)
{
	var uVar0;
	
	uVar0 = func_229(iParam0);
	func_228(iParam0, uVar0, iParam1, iParam2);
}

void func_228(int iParam0, var uParam1, var uParam2, var uParam3)
{
	struct<8> Var0;
	
	Var0 = -2029779863;
	Var0.f_1 = unk_0x460153A63B9477BC();
	Var0.f_2 = uParam1;
	Var0.f_4 = uParam2;
	Var0.f_3 = uParam3;
	Var0.f_5 = func_215(iParam0);
	func_214(&(Var0.f_6), &(Var0.f_7));
	if (iParam0 != func_10())
	{
		if (unk_0x166E920FB00B2DBB(iParam0))
		{
			unk_0xB802750B43D4047C(1, &Var0, 8, func_46(iParam0));
		}
	}
}

int func_229(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_234();
	iVar0 = func_232(iParam0, iVar0);
	iVar1 = Global_1630317[func_11() /*595*/].f_11.f_422;
	iVar0 = (iVar0 + (iVar1 * Global_262145.f_14963));
	if (iVar0 < func_231())
	{
		iVar0 = func_231();
	}
	if (iVar0 > func_230())
	{
		iVar0 = func_230();
	}
	return iVar0;
}

int func_230()
{
	return Global_262145.f_14964;
}

int func_231()
{
	return Global_262145.f_16139;
}

int func_232(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = (func_293(iParam0) * func_233());
	iParam1 = (iParam1 - iVar0);
	return iParam1;
}

int func_233()
{
	return Global_262145.f_16138;
}

var func_234()
{
	return Global_262145.f_12389;
}

int func_235(int iParam0)
{
	if (unk_0x166E920FB00B2DBB(iParam0))
	{
		if (iParam0 != unk_0x460153A63B9477BC())
		{
			if (func_48(iParam0, unk_0x460153A63B9477BC(), 0))
			{
				if (!func_36(iParam0, 26))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_236(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = 0;
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (unk_0x166E920FB00B2DBB(unk_0xF1110FE23C67293A(iVar0)))
		{
			iVar2 = unk_0xF1110FE23C67293A(iVar0);
			if (!func_19(iVar2, 0) && !func_48(iVar2, unk_0x460153A63B9477BC(), 1))
			{
				iVar1++;
			}
			else if (func_19(iVar2, 0))
			{
				*uParam0++;
			}
		}
		iVar0++;
	}
	return iVar1;
}

void func_237(int iParam0)
{
	func_238(iParam0, 7237);
}

void func_238(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam0 <= 0)
	{
		return;
	}
	iVar0 = func_124(iParam1, -1, 0);
	func_122(iParam1, (iVar0 + iParam0), -1, 1, 0);
}

void func_239(int iParam0)
{
	func_238(iParam0, 7232);
}

int func_240(char* sParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = -1;
	unk_0x5B8DD855EAFD33B5(sParam0);
	unk_0x42710E9E08FA375A(iParam1);
	iVar0 = unk_0xD60C2975A14D763D(0, 1);
	func_217(3, sParam0, 1, "", iParam1, 0, 0, 0, 1, 0, 0, 0);
	return iVar0;
}

int func_241(int iParam0)
{
	float fVar0;
	float fVar1;
	
	fVar0 = to_float(iParam0);
	fVar1 = (fVar0 * Global_262145.f_23987);
	if (fVar1 > 100000f)
	{
		fVar1 = 100000f;
	}
	return round(fVar1);
}

int func_242(struct<5> Param0, int iParam1)
{
	int iVar0;
	float fVar1;
	float fVar2;
	
	if (iParam1 == Param0.f_1)
	{
		return Param0.f_2;
	}
	iVar0 = Param0.f_2;
	if ((Param0.f_4 == 1 || Param0.f_4 == 2) || Param0.f_4 == 3)
	{
		iVar0 = (iVar0 - Param0.f_3);
	}
	fVar1 = (to_float(iParam1) / to_float(Param0.f_1));
	fVar2 = to_float(iVar0);
	return floor((fVar2 * fVar1));
}

void func_243(int iParam0, var uParam1, int iParam2, var uParam3, var uParam4)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	var uVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	float fVar10;
	float fVar11;
	float fVar12;
	float fVar13;
	float fVar14;
	int iVar15;
	bool bVar16;
	bool bVar17;
	int iVar18;
	int iVar19;
	int iVar20;
	
	*uParam4 = 0;
	bVar16 = func_210(1);
	bVar17 = false;
	if (iParam0 == 229)
	{
	}
	else if (iParam0 == 230)
	{
		if (func_141())
		{
			iVar15 = unk_0x460153A63B9477BC();
		}
		else
		{
			iVar15 = func_11();
		}
		if (iVar15 != -1)
		{
			iVar0 = (uParam1->f_15 + uParam1->f_8);
			if (uParam1->f_10 == uParam1->f_11)
			{
				iVar1 = iVar0;
				bVar17 = true;
			}
			else
			{
				fVar10 = to_float(uParam1->f_10);
				fVar11 = to_float(uParam1->f_11);
				fVar12 = ((fVar10 / fVar11) * 100f);
				fVar13 = ((IntToFloat(iVar0) / 100f) * fVar12);
				iVar1 = ceil(fVar13);
			}
			*uParam3 = iVar1;
			iVar2 = func_137(uParam1->f_16, *uParam3);
			*iParam2 = (*iParam2 + iVar2);
			if (bVar17)
			{
				iVar9 = func_136(uParam1->f_16, *uParam3);
				if (iVar9 > 0)
				{
					*iParam2 = (*iParam2 + iVar9);
				}
			}
			if (func_245(*iParam2) > 0)
			{
				if (iVar15 == unk_0x460153A63B9477BC())
				{
					func_240("SMTICK_RONCUT", func_245(*iParam2));
				}
				*iParam2 = (*iParam2 - func_245(*iParam2));
			}
			if (iVar15 == unk_0x460153A63B9477BC())
			{
				func_244(iVar2, iVar9);
				iVar6 = func_236(&uVar5);
				iVar7 = Global_262145.f_22335;
				if (iVar6 > iVar7)
				{
					iVar6 = iVar7;
				}
				iVar8 = ceil((IntToFloat(iVar6) * Global_262145.f_22334));
				*uParam4 = ((*iParam2 / 100) * iVar8);
				*iParam2 = (*iParam2 + *uParam4);
				if (*iParam2 > 0)
				{
					if (iVar6 > 0)
					{
						func_97(44);
					}
				}
				if (*iParam2 > 0)
				{
					if (!bVar16)
					{
						iVar18 = 0;
						while (iVar18 < unk_0xEFA28384DDD283E1())
						{
							iVar19 = iVar18;
							if (unk_0xBD09DF93F957A0CF(iVar19))
							{
								iVar20 = unk_0x9019589211A13B02(iVar19);
								if (func_235(iVar20))
								{
									func_227(iVar20, 1, 1160415507);
								}
							}
							iVar18++;
						}
					}
				}
				Global_2540384.f_5188.f_382 = *iParam2;
			}
			else if (bVar16)
			{
				fVar14 = Global_262145.f_22268;
				iVar3 = ceil((IntToFloat(*iParam2) * fVar14));
				*iParam2 = iVar3;
				iVar4 = Global_262145.f_22269;
				if (*iParam2 > iVar4)
				{
					*iParam2 = iVar4;
				}
				if (*iParam2 > 0)
				{
					Global_1688746 = *iParam2;
					func_97(121);
				}
			}
			else
			{
				*iParam2 = 0;
			}
		}
	}
}

void func_244(int iParam0, int iParam1)
{
	if (iParam0 > 0)
	{
		func_238(iParam0, 6117);
	}
	if (iParam1 > 0)
	{
		func_238(iParam1, 6118);
	}
}

int func_245(int iParam0)
{
	float fVar0;
	float fVar1;
	
	fVar0 = to_float(iParam0);
	fVar1 = (fVar0 * Global_262145.f_22302);
	if (fVar1 > to_float(Global_262145.f_22303))
	{
		fVar1 = to_float(Global_262145.f_22303);
	}
	return round(fVar1);
}

void func_246(int iParam0, var uParam1, int iParam2, var uParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	var uVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	float fVar10;
	float fVar11;
	float fVar12;
	float fVar13;
	float fVar14;
	int iVar15;
	int iVar16;
	bool bVar17;
	int iVar18;
	int iVar19;
	int iVar20;
	
	bVar17 = func_210(1);
	if (iParam0 == 225)
	{
	}
	else if (iParam0 == 226)
	{
		if (func_141())
		{
			iVar15 = unk_0x460153A63B9477BC();
		}
		else
		{
			iVar15 = func_11();
		}
		if (iVar15 != -1)
		{
			iVar16 = func_140(iVar15);
			iVar0 = (func_271(iVar15, iVar16) + uParam1->f_8);
			if (uParam1->f_10 == uParam1->f_11)
			{
				iVar1 = iVar0;
			}
			else
			{
				fVar10 = to_float(uParam1->f_10);
				fVar11 = to_float(uParam1->f_11);
				fVar12 = ((fVar10 / fVar11) * 100f);
				fVar13 = ((IntToFloat(iVar0) / 100f) * fVar12);
				iVar1 = ceil(fVar13);
			}
			*uParam3 = iVar1;
			iVar2 = func_267(iVar15, iVar16, iVar1);
			if (uParam1->f_14 == 0)
			{
				iVar2 = ceil((IntToFloat(iVar2) * Global_262145.f_21045));
			}
			else
			{
				iVar2 = ceil((IntToFloat(iVar2) * Global_262145.f_21044));
			}
			*iParam2 = (*iParam2 + iVar2);
			if (iVar15 == unk_0x460153A63B9477BC())
			{
				func_261(iVar16, iVar2);
				if (func_257(iVar16) >= Global_262145.f_20591 || iVar2 >= Global_262145.f_20591)
				{
					func_247(5);
				}
				iVar6 = func_236(&uVar5);
				iVar7 = round(Global_262145.f_21047);
				if (iVar6 > iVar7)
				{
					iVar6 = iVar7;
				}
				iVar8 = ceil((IntToFloat(iVar6) * Global_262145.f_21046));
				iVar9 = ((*iParam2 / 100) * iVar8);
				*iParam2 = (*iParam2 + iVar9);
				if (*iParam2 > 0)
				{
					if (iVar6 > 0)
					{
						func_97(108);
					}
					else
					{
						func_97(110);
					}
				}
				if (*iParam2 > 0)
				{
					if (!bVar17)
					{
						iVar18 = 0;
						while (iVar18 < unk_0xEFA28384DDD283E1())
						{
							iVar19 = iVar18;
							if (unk_0xBD09DF93F957A0CF(iVar19))
							{
								iVar20 = unk_0x9019589211A13B02(iVar19);
								if (func_235(iVar20))
								{
									func_227(iVar20, 1, -1905128202);
								}
							}
							iVar18++;
						}
					}
				}
				Global_2540384.f_5188.f_382 = *iParam2;
			}
			else if (bVar17)
			{
				fVar14 = Global_262145.f_21048;
				iVar3 = ceil((IntToFloat(*iParam2) * fVar14));
				*iParam2 = iVar3;
				iVar4 = Global_262145.f_21049;
				if (*iParam2 > iVar4)
				{
					*iParam2 = iVar4;
				}
				if (*iParam2 > 0)
				{
					Global_1688746 = *iParam2;
					func_97(112);
				}
			}
			else
			{
				*iParam2 = 0;
			}
		}
	}
	else if (iParam0 == 227)
	{
	}
}

void func_247(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			if (Global_262145.f_20579)
			{
				if (func_249(Global_262145.f_20580))
				{
					func_248("CLOTHAWDSTRAP2", "CLOTHAWDDESC1", 0, 0, 0);
				}
			}
			break;
		
		case 1:
			if (Global_262145.f_20581)
			{
				if (func_249(Global_262145.f_20582))
				{
					func_248("CLOTHAWDSTRAP2", "CLOTHAWDDESC2", 0, 0, 0);
				}
			}
			break;
		
		case 2:
			if (Global_262145.f_20583)
			{
				if (func_249(Global_262145.f_20584))
				{
					func_248("CLOTHAWDSTRAP2", "CLOTHAWDDESC3", 0, 0, 0);
				}
			}
			break;
		
		case 3:
			if (Global_262145.f_20585)
			{
				if (func_249(Global_262145.f_20586))
				{
					func_248("CLOTHAWDSTRAP2", "CLOTHAWDDESC5", 0, 0, 0);
				}
			}
			break;
		
		case 4:
			if (Global_262145.f_20587)
			{
				if (func_249(Global_262145.f_20588))
				{
					func_248("CLOTHAWDSTRAP2", "CLOTHAWDDESC6", 0, 0, 0);
				}
			}
			break;
		
		case 5:
			if (Global_262145.f_20589)
			{
				if (func_249(Global_262145.f_20590))
				{
					func_240("CLOTHAWDSTRAP3", Global_262145.f_20591);
				}
			}
			break;
		
		case 6:
			if (Global_262145.f_20592)
			{
				if (func_249(Global_262145.f_20593))
				{
					func_240("CLOTHAWDSTRAP5", Global_262145.f_20727);
				}
			}
			break;
		
		case 7:
			if (Global_262145.f_20595)
			{
				if (func_249(Global_262145.f_20596))
				{
					func_248("CLOTHAWDSTRAP2", "CLOTHAWDDESC8", 0, 0, 0);
				}
			}
			break;
		
		case 8:
			if (Global_262145.f_20597)
			{
				if (func_249(Global_262145.f_20598))
				{
					func_248("CLOTHAWDSTRAP2", "CLOTHAWDDESC9", 0, 0, 0);
				}
			}
			break;
		
		case 9:
			if (Global_262145.f_20599)
			{
				if (func_249(Global_262145.f_20600))
				{
					func_248("CLOTHAWDSTRAP2", "CLOTHAWDDESC10", 0, 0, 0);
				}
			}
			break;
		
		case 10:
			if (Global_262145.f_20601)
			{
				if (func_249(Global_262145.f_20602))
				{
					func_248("CLOTHAWDSTRAP2", "CLOTHAWDDESC11", 0, 0, 0);
				}
			}
			break;
		
		case 11:
			if (Global_262145.f_20603)
			{
				if (func_249(Global_262145.f_20604))
				{
					func_248("CLOTHAWDSTRAP2", "CLOTHAWDDESC12", 0, 0, 0);
				}
			}
			break;
		
		case 12:
			if (Global_262145.f_20605)
			{
				if (func_249(Global_262145.f_20606))
				{
					func_248("CLOTHAWDSTRAP2", "CLOTHAWDDESC13", 0, 0, 0);
				}
			}
			break;
		
		case 13:
			if (Global_262145.f_20607)
			{
				if (func_249(Global_262145.f_20608))
				{
					func_248("CLOTHAWDSTRAP2", "CLOTHAWDDESC14", 0, 0, 0);
				}
			}
			break;
		
		case 14:
			if (Global_262145.f_20609)
			{
				if (func_249(Global_262145.f_20610))
				{
					func_248("CLOTHAWDSTRAP2", "CLOTHAWDDESC15", 0, 0, 0);
				}
			}
			break;
	}
}

int func_248(char* sParam0, char* sParam1, int iParam2, int iParam3, bool bParam4)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = -1;
	unk_0x5B8DD855EAFD33B5(sParam0);
	if (!iParam2 == 0)
	{
		unk_0x7006FC1051C85FCA(iParam2);
	}
	if (!iParam3 == 0)
	{
		unk_0x7006FC1051C85FCA(iParam3);
	}
	unk_0x6A826E35A3096ED0(sParam1);
	if (!bParam4)
	{
		iVar0 = unk_0xD60C2975A14D763D(0, 1);
	}
	else
	{
		Global_2515173 = { func_180(unk_0x460153A63B9477BC()) };
		if (unk_0x192BD21E18525C69(&Global_2515103, 35, &Global_2515173))
		{
			iVar1 = 0;
			if (unk_0xF005CCA4263DF67F(&(Global_2515103.f_22), "Leader") && Global_2515103.f_30 == 0)
			{
				iVar1 = 1;
			}
			if (Global_2515103.f_21 > 0)
			{
				iVar2 = 0;
			}
			else
			{
				iVar2 = 1;
			}
			iVar0 = unk_0x2262CFE2DD056505(iVar2, unk_0xCF44EDAC07B5D763(&Global_2515103, 35), &(Global_2515103.f_17), Global_2515103.f_30, iVar1, 0, Global_2515103, unk_0x72C1D3A1AB8CAA5B(unk_0x460153A63B9477BC()), Global_1314053, Global_1314054, Global_1314055);
		}
		else
		{
			iVar0 = unk_0xD60C2975A14D763D(0, 1);
		}
	}
	func_217(8, sParam0, 1, sParam1, 0, 0, 0, 0, 1, 0, 0, 0);
	return iVar0;
}

int func_249(int iParam0)
{
	switch (iParam0)
	{
		case joaat("DLC_MP_GR_M_JBIB_19_0"):
		case joaat("DLC_MP_GR_F_JBIB_25_0"):
		case -1191485992:
		case joaat("CLO_GRF_U_25_0"):
			if (!func_254(15417, -1, -1))
			{
				func_253(15417, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("DLC_MP_GR_M_JBIB_19_1"):
		case joaat("DLC_MP_GR_F_JBIB_25_1"):
		case -1407302654:
		case joaat("CLO_GRF_U_25_1"):
			if (!func_254(15418, -1, -1))
			{
				func_253(15418, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("DLC_MP_GR_M_JBIB_20_0"):
		case joaat("DLC_MP_GR_F_JBIB_26_0"):
		case joaat("CLO_GRM_U_20_0"):
		case -1850642937:
			if (!func_254(15425, -1, -1))
			{
				func_253(15425, 1, -1, 1);
				return 1;
			}
			break;
	}
	switch (iParam0)
	{
		case joaat("DLC_MP_GR_M_DECL_5_0"):
		case joaat("DLC_MP_GR_F_DECL_5_0"):
		case -1307315235:
		case joaat("CLO_GRF_DECL_19"):
			if (!func_254(15405, -1, -1))
			{
				func_253(15405, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("DLC_MP_GR_M_DECL_5_1"):
		case joaat("DLC_MP_GR_F_DECL_5_1"):
		case joaat("CLO_GRM_DECL_20"):
		case 1374601256:
			if (!func_254(15393, -1, -1))
			{
				func_253(15393, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("DLC_MP_GR_M_DECL_5_2"):
		case joaat("DLC_MP_GR_F_DECL_5_2"):
		case joaat("CLO_GRM_DECL_21"):
		case -660288110:
			if (!func_254(15409, -1, -1))
			{
				func_253(15409, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("DLC_MP_GR_M_DECL_5_3"):
		case joaat("DLC_MP_GR_F_DECL_5_3"):
		case -1005186539:
		case joaat("CLO_GRF_DECL_22"):
			if (!func_254(15396, -1, -1))
			{
				func_253(15396, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("DLC_MP_GR_M_DECL_5_4"):
		case joaat("DLC_MP_GR_F_DECL_5_4"):
		case joaat("CLO_GRM_DECL_23"):
		case -1132522169:
			if (!func_254(15412, -1, -1))
			{
				func_253(15412, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("DLC_MP_GR_M_DECL_5_5"):
		case joaat("DLC_MP_GR_F_DECL_5_5"):
		case 1110085176:
		case joaat("CLO_GRF_DECL_24"):
			if (!func_252(209, -1))
			{
				func_250(209, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("DLC_MP_GR_M_DECL_5_6"):
		case joaat("DLC_MP_GR_F_DECL_5_6"):
		case joaat("CLO_GRM_DECL_25"):
		case -182614393:
			if (!func_254(15403, -1, -1))
			{
				func_253(15403, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("DLC_MP_GR_M_DECL_5_7"):
		case joaat("DLC_MP_GR_F_DECL_5_7"):
		case -1496983695:
		case joaat("CLO_GRF_DECL_26"):
			if (!func_252(209, -1))
			{
				func_250(209, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("DLC_MP_GR_M_DECL_5_8"):
		case joaat("DLC_MP_GR_F_DECL_5_8"):
		case joaat("CLO_GRM_DECL_27"):
		case -646852824:
			if (!func_254(15389, -1, -1))
			{
				func_253(15389, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("DLC_MP_GR_M_DECL_5_9"):
		case joaat("DLC_MP_GR_F_DECL_5_9"):
		case 420690954:
		case joaat("CLO_GRF_DECL_28"):
			if (!func_252(209, -1))
			{
				func_250(209, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("DLC_MP_GR_M_DECL_5_10"):
		case joaat("DLC_MP_GR_F_DECL_5_10"):
		case joaat("CLO_GRM_DECL_29"):
		case 1717168382:
			if (!func_254(15398, -1, -1))
			{
				func_253(15398, 1, -1, 1);
				return 1;
			}
			break;
	}
	switch (iParam0)
	{
		case joaat("DLC_MP_GR_M_PHEAD_6_0"):
		case joaat("DLC_MP_GR_F_PHEAD_6_0"):
		case joaat("DLC_MP_GR_M_PHEAD_7_0"):
		case joaat("DLC_MP_GR_F_PHEAD_7_0"):
		case -1991379993:
		case joaat("CLO_GRF_PH_6_0"):
			if (!func_254(15400, -1, -1))
			{
				func_253(15400, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("DLC_MP_GR_M_PHEAD_6_1"):
		case joaat("DLC_MP_GR_F_PHEAD_6_1"):
		case joaat("DLC_MP_GR_M_PHEAD_7_1"):
		case joaat("DLC_MP_GR_F_PHEAD_7_1"):
		case 2065127290:
		case joaat("CLO_GRF_PH_6_1"):
			if (!func_252(209, -1))
			{
				func_250(209, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("DLC_MP_GR_M_PHEAD_6_2"):
		case joaat("DLC_MP_GR_F_PHEAD_6_2"):
		case joaat("DLC_MP_GR_M_PHEAD_7_2"):
		case joaat("DLC_MP_GR_F_PHEAD_7_2"):
		case -56403312:
		case joaat("CLO_GRF_PH_6_2"):
			if (!func_254(15408, -1, -1))
			{
				func_253(15408, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("DLC_MP_GR_M_PHEAD_6_3"):
		case joaat("DLC_MP_GR_F_PHEAD_6_3"):
		case joaat("DLC_MP_GR_M_PHEAD_7_3"):
		case joaat("DLC_MP_GR_F_PHEAD_7_3"):
		case -292700571:
		case joaat("CLO_GRF_PH_6_3"):
			if (!func_252(209, -1))
			{
				func_250(209, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("DLC_MP_GR_M_PHEAD_6_4"):
		case joaat("DLC_MP_GR_F_PHEAD_6_4"):
		case joaat("DLC_MP_GR_M_PHEAD_7_4"):
		case joaat("DLC_MP_GR_F_PHEAD_7_4"):
		case -648899601:
		case joaat("CLO_GRF_PH_6_4"):
			if (!func_254(15411, -1, -1))
			{
				func_253(15411, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("DLC_MP_GR_M_PHEAD_6_5"):
		case joaat("DLC_MP_GR_F_PHEAD_6_5"):
		case joaat("DLC_MP_GR_M_PHEAD_7_5"):
		case joaat("DLC_MP_GR_F_PHEAD_7_5"):
		case -889194678:
		case joaat("CLO_GRF_PH_6_5"):
			if (!func_254(15397, -1, -1))
			{
				func_253(15397, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("DLC_MP_GR_M_PHEAD_6_6"):
		case joaat("DLC_MP_GR_F_PHEAD_6_6"):
		case joaat("DLC_MP_GR_M_PHEAD_7_6"):
		case joaat("DLC_MP_GR_F_PHEAD_7_6"):
		case 867092646:
		case joaat("CLO_GRF_PH_6_6"):
			if (!func_254(15413, -1, -1))
			{
				func_253(15413, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("DLC_MP_GR_M_PHEAD_6_7"):
		case joaat("DLC_MP_GR_F_PHEAD_6_7"):
		case joaat("DLC_MP_GR_M_PHEAD_7_7"):
		case joaat("DLC_MP_GR_F_PHEAD_7_7"):
		case 627387411:
		case joaat("CLO_GRF_PH_6_7"):
			if (!func_254(15391, -1, -1))
			{
				func_253(15391, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("DLC_MP_GR_M_PHEAD_6_8"):
		case joaat("DLC_MP_GR_F_PHEAD_6_8"):
		case joaat("DLC_MP_GR_M_PHEAD_7_8"):
		case joaat("DLC_MP_GR_F_PHEAD_7_8"):
		case joaat("CLO_GRM_PH_6_8"):
		case 1682427144:
			if (!func_254(15388, -1, -1))
			{
				func_253(15388, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("DLC_MP_GR_M_PHEAD_6_9"):
		case joaat("DLC_MP_GR_F_PHEAD_6_9"):
		case joaat("DLC_MP_GR_M_PHEAD_7_9"):
		case joaat("DLC_MP_GR_F_PHEAD_7_9"):
		case 35480964:
		case joaat("CLO_GRF_PH_6_9"):
			if (!func_252(209, -1))
			{
				func_250(209, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("DLC_MP_GR_M_PHEAD_6_10"):
		case joaat("DLC_MP_GR_F_PHEAD_6_10"):
		case joaat("DLC_MP_GR_M_PHEAD_7_10"):
		case joaat("DLC_MP_GR_F_PHEAD_7_10"):
		case joaat("CLO_GRM_PH_6_10"):
		case 1377465778:
			if (!func_254(15401, -1, -1))
			{
				func_253(15401, 1, -1, 1);
				return 1;
			}
			break;
	}
	switch (iParam0)
	{
		case joaat("MP_Gunrunning_Award_000_M"):
		case joaat("MP_Gunrunning_Award_000_F"):
		case -1604737223:
		case joaat("CLO_GRF_DECL_0"):
			if (!func_254(15394, -1, -1))
			{
				func_253(15394, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("MP_Gunrunning_Award_001_M"):
		case joaat("MP_Gunrunning_Award_001_F"):
		case -1367129204:
		case joaat("CLO_GRF_DECL_1"):
			if (!func_252(209, -1))
			{
				func_250(209, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("MP_Gunrunning_Award_002_M"):
		case joaat("MP_Gunrunning_Award_002_F"):
		case joaat("CLO_GRM_DECL_2"):
		case -1438775324:
			if (!func_254(15406, -1, -1))
			{
				func_253(15406, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("MP_Gunrunning_Award_003_M"):
		case joaat("MP_Gunrunning_Award_003_F"):
		case -1686659723:
		case joaat("CLO_GRF_DECL_3"):
			if (!func_254(15395, -1, -1))
			{
				func_253(15395, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("MP_Gunrunning_Award_004_M"):
		case joaat("MP_Gunrunning_Award_004_F"):
		case 1992217604:
		case joaat("CLO_GRF_DECL_4"):
			if (!func_252(209, -1))
			{
				func_250(209, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("MP_Gunrunning_Award_005_M"):
		case joaat("MP_Gunrunning_Award_005_F"):
		case -1934557208:
		case joaat("CLO_GRF_DECL_5"):
			if (!func_254(15410, -1, -1))
			{
				func_253(15410, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("MP_Gunrunning_Award_006_M"):
		case joaat("MP_Gunrunning_Award_006_F"):
		case -1034032319:
		case joaat("CLO_GRF_DECL_6"):
			if (!func_254(15407, -1, -1))
			{
				func_253(15407, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("MP_Gunrunning_Award_007_M"):
		case joaat("MP_Gunrunning_Award_007_F"):
		case 1747334867:
		case joaat("CLO_GRF_DECL_7"):
			if (!func_252(209, -1))
			{
				func_250(209, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("MP_Gunrunning_Award_008_M"):
		case joaat("MP_Gunrunning_Award_008_F"):
		case 236389050:
		case joaat("CLO_GRF_DECL_8"):
			if (!func_252(209, -1))
			{
				func_250(209, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("MP_Gunrunning_Award_009_M"):
		case joaat("MP_Gunrunning_Award_009_F"):
		case joaat("CLO_GRM_DECL_9"):
		case 908992470:
			if (!func_254(15414, -1, -1))
			{
				func_253(15414, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("MP_Gunrunning_Award_010_M"):
		case joaat("MP_Gunrunning_Award_010_F"):
		case joaat("CLO_GRM_DECL_10"):
		case -1021993708:
			if (!func_254(15415, -1, -1))
			{
				func_253(15415, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("MP_Gunrunning_Award_011_M"):
		case joaat("MP_Gunrunning_Award_011_F"):
		case 479676642:
		case joaat("CLO_GRF_DECL_11"):
			if (!func_254(15399, -1, -1))
			{
				func_253(15399, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("MP_Gunrunning_Award_012_M"):
		case joaat("MP_Gunrunning_Award_012_F"):
		case 242920617:
		case joaat("CLO_GRF_DECL_12"):
			if (!func_254(15404, -1, -1))
			{
				func_253(15404, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("MP_Gunrunning_Award_013_M"):
		case joaat("MP_Gunrunning_Award_013_F"):
		case -1219723702:
		case joaat("CLO_GRF_DECL_13"):
			if (!func_252(209, -1))
			{
				func_250(209, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("MP_Gunrunning_Award_014_M"):
		case joaat("MP_Gunrunning_Award_014_F"):
		case joaat("CLO_GRM_DECL_14"):
		case 2087194554:
			if (!func_254(15392, -1, -1))
			{
				func_253(15392, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("MP_Gunrunning_Award_015_M"):
		case joaat("MP_Gunrunning_Award_015_F"):
		case joaat("CLO_GRM_DECL_15"):
		case 981732339:
			if (!func_254(15390, -1, -1))
			{
				func_253(15390, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("MP_Gunrunning_Award_016_M"):
		case joaat("MP_Gunrunning_Award_016_F"):
		case joaat("CLO_GRM_DECL_16"):
		case 1271443068:
			if (!func_254(15402, -1, -1))
			{
				func_253(15402, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("MP_Gunrunning_Award_017_M"):
		case joaat("MP_Gunrunning_Award_017_F"):
		case joaat("CLO_GRM_DECL_17"):
		case -1785118184:
			if (!func_254(15416, -1, -1))
			{
				func_253(15416, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("MP_Gunrunning_Award_018_M"):
		case joaat("MP_Gunrunning_Award_018_F"):
		case 2029126042:
		case joaat("CLO_GRF_DECL_18"):
			if (!func_252(209, -1))
			{
				func_250(209, 1, -1, 1);
				return 1;
			}
			break;
	}
	switch (iParam0)
	{
		case joaat("MP_Gunrunning_Award_019_M"):
		case joaat("MP_Gunrunning_Award_025_F"):
		case -14316613:
		case joaat("CLO_GRF_DECL_30"):
			if (!func_254(15426, -1, -1))
			{
				func_253(15426, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("MP_Gunrunning_Award_020_M"):
		case joaat("MP_Gunrunning_Award_020_F"):
		case 1281631799:
		case joaat("CLO_GRF_DECL_31"):
			if (!func_254(15422, -1, -1))
			{
				func_253(15422, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("MP_Gunrunning_Award_020_M_ALT"):
		case joaat("MP_Gunrunning_Award_020_F_ALT"):
		case 447234752:
		case joaat("CLO_GRF_DECL_32"):
			if (!func_254(15423, -1, -1))
			{
				func_253(15423, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("MP_Gunrunning_Award_021_M"):
		case joaat("MP_Gunrunning_Award_021_F"):
		case 278933172:
		case joaat("CLO_GRF_DECL_33"):
			if (!func_254(15421, -1, -1))
			{
				func_253(15421, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("MP_Gunrunning_Award_022_M"):
		case joaat("MP_Gunrunning_Award_026_F"):
		case -562607521:
		case joaat("CLO_GRF_DECL_34"):
			if (!func_254(15427, -1, -1))
			{
				func_253(15427, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("MP_Gunrunning_Award_023_M"):
		case joaat("MP_Gunrunning_Award_023_F"):
		case 755492739:
		case joaat("CLO_GRF_DECL_35"):
			if (!func_254(15419, -1, -1))
			{
				func_253(15419, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("MP_Gunrunning_Award_024_M"):
		case joaat("MP_Gunrunning_Award_024_F"):
		case -85982412:
		case joaat("CLO_GRF_DECL_36"):
			if (!func_254(15420, -1, -1))
			{
				func_253(15420, 1, -1, 1);
				return 1;
			}
			break;
	}
	return 0;
}

void func_250(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	if (func_251())
	{
		iVar0 = Global_2587834[iParam0 /*3*/][func_125(iParam2)];
		if (iVar0 != 0)
		{
			unk_0xBD9D9E72ABB288E4(iVar0, iParam1, iParam3);
		}
	}
}

int func_251()
{
	return 1;
	return 0;
}

int func_252(int iParam0, int iParam1)
{
	var uVar0;
	var uVar1;
	
	uVar0 = Global_2587834[iParam0 /*3*/][func_125(iParam1)];
	if (unk_0xB9112C701DE2A810(uVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

int func_253(int iParam0, bool bParam1, int iParam2, int iParam3)
{
	int iVar0;
	int iVar1;
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
	int iVar13;
	int iVar14;
	int iVar15;
	int iVar16;
	int iVar17;
	int iVar18;
	int iVar19;
	int iVar20;
	int iVar21;
	int iVar22;
	int iVar23;
	int iVar24;
	int iVar25;
	
	if (iParam2 == -1)
	{
		iParam2 = func_21();
	}
	iVar0 = 0;
	if (iParam0 >= 0 && iParam0 < 192)
	{
		iVar2 = unk_0x43BE40E27DB6DC2E((iParam0 - 0), 0, 1, iParam2);
		iVar1 = ((iParam0 - 0) - unk_0x12730A13C85FC896((iParam0 - 0)) * 64);
		iVar0 = unk_0xC06DB57B81E2C02B(iVar2, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 192 && iParam0 < 384)
	{
		iVar3 = unk_0x43BE40E27DB6DC2E((iParam0 - 192), 1, 1, iParam2);
		iVar1 = ((iParam0 - 192) - unk_0x12730A13C85FC896((iParam0 - 192)) * 64);
		iVar0 = unk_0xC06DB57B81E2C02B(iVar3, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 513 && iParam0 < 705)
	{
		iVar4 = unk_0x43BE40E27DB6DC2E((iParam0 - 513), 0, 0, 0);
		iVar1 = ((iParam0 - 513) - unk_0x12730A13C85FC896((iParam0 - 513)) * 64);
		iVar0 = unk_0xC06DB57B81E2C02B(iVar4, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 705 && iParam0 < 1281)
	{
		iVar5 = unk_0x43BE40E27DB6DC2E((iParam0 - 705), 1, 0, 0);
		iVar1 = ((iParam0 - 705) - unk_0x12730A13C85FC896((iParam0 - 705)) * 64);
		iVar0 = unk_0xC06DB57B81E2C02B(iVar5, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 3111 && iParam0 < 3879)
	{
		iVar6 = unk_0x840F9A9E6D216561((iParam0 - 3111), 0, 1, iParam2);
		iVar1 = ((iParam0 - 3111) - unk_0x12730A13C85FC896((iParam0 - 3111)) * 64);
		iVar0 = unk_0xC06DB57B81E2C02B(iVar6, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 2919 && iParam0 < 3111)
	{
		iVar7 = unk_0x840F9A9E6D216561((iParam0 - 2919), 0, 0, 0);
		iVar1 = ((iParam0 - 2919) - unk_0x12730A13C85FC896((iParam0 - 2919)) * 64);
		iVar0 = unk_0xC06DB57B81E2C02B(iVar7, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 4207 && iParam0 < 4335)
	{
		iVar8 = unk_0x4B2E4855CB2B4FAA((iParam0 - 4207), 0, 1, iParam2, "_NGPSTAT_BOOL");
		iVar1 = ((iParam0 - 4207) - unk_0x12730A13C85FC896((iParam0 - 4207)) * 64);
		iVar0 = unk_0xC06DB57B81E2C02B(iVar8, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 4335 && iParam0 < 4399)
	{
		iVar9 = unk_0x4B2E4855CB2B4FAA((iParam0 - 4335), 0, 0, 0, "_NGPSTAT_BOOL");
		iVar1 = ((iParam0 - 4335) - unk_0x12730A13C85FC896((iParam0 - 4335)) * 64);
		iVar0 = unk_0xC06DB57B81E2C02B(iVar9, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 6029 && iParam0 < 6413)
	{
		iVar10 = unk_0x4B2E4855CB2B4FAA((iParam0 - 6029), 0, 1, iParam2, "_NGTATPSTAT_BOOL");
		iVar1 = ((iParam0 - 6029) - unk_0x12730A13C85FC896((iParam0 - 6029)) * 64);
		iVar0 = unk_0xC06DB57B81E2C02B(iVar10, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 7385 && iParam0 < 7641)
	{
		iVar11 = unk_0x4B2E4855CB2B4FAA((iParam0 - 7385), 0, 1, iParam2, "_NGDLCPSTAT_BOOL");
		iVar1 = ((iParam0 - 7385) - unk_0x12730A13C85FC896((iParam0 - 7385)) * 64);
		iVar0 = unk_0xC06DB57B81E2C02B(iVar11, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 7321 && iParam0 < 7385)
	{
		iVar12 = unk_0x4B2E4855CB2B4FAA((iParam0 - 7321), 0, 0, 0, "_NGDLCPSTAT_BOOL");
		iVar1 = ((iParam0 - 7321) - unk_0x12730A13C85FC896((iParam0 - 7321)) * 64);
		iVar0 = unk_0xC06DB57B81E2C02B(iVar12, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 9361 && iParam0 < 9553)
	{
		iVar13 = unk_0x4B2E4855CB2B4FAA((iParam0 - 9361), 0, 1, iParam2, "_DLCBIKEPSTAT_BOOL");
		iVar1 = ((iParam0 - 9361) - unk_0x12730A13C85FC896((iParam0 - 9361)) * 64);
		iVar0 = unk_0xC06DB57B81E2C02B(iVar13, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 15369 && iParam0 < 15561)
	{
		iVar14 = unk_0x4B2E4855CB2B4FAA((iParam0 - 15369), 0, 1, iParam2, "_DLCGUNPSTAT_BOOL");
		iVar1 = ((iParam0 - 15369) - unk_0x12730A13C85FC896((iParam0 - 15369)) * 64);
		iVar0 = unk_0xC06DB57B81E2C02B(iVar14, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 15562 && iParam0 < 15946)
	{
		iVar15 = unk_0x4B2E4855CB2B4FAA((iParam0 - 15562), 0, 1, iParam2, "_GUNTATPSTAT_BOOL");
		iVar1 = ((iParam0 - 15562) - unk_0x12730A13C85FC896((iParam0 - 15562)) * 64);
		iVar0 = unk_0xC06DB57B81E2C02B(iVar15, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 15946 && iParam0 < 16010)
	{
		iVar16 = unk_0x4B2E4855CB2B4FAA((iParam0 - 15946), 0, 1, iParam2, "_DLCSMUGCHARPSTAT_BOOL");
		iVar1 = ((iParam0 - 15946) - unk_0x12730A13C85FC896((iParam0 - 15946)) * 64);
		iVar0 = unk_0xC06DB57B81E2C02B(iVar16, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 18098 && iParam0 < 18162)
	{
		iVar17 = unk_0x4B2E4855CB2B4FAA((iParam0 - 18098), 0, 1, iParam2, "_GANGOPSPSTAT_BOOL");
		iVar1 = ((iParam0 - 18098) - unk_0x12730A13C85FC896((iParam0 - 18098)) * 64);
		iVar0 = unk_0xC06DB57B81E2C02B(iVar17, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 22066 && iParam0 < 22194)
	{
		iVar18 = unk_0x4B2E4855CB2B4FAA((iParam0 - 22066), 0, 1, iParam2, "_BUSINESSBATPSTAT_BOOL");
		iVar1 = ((iParam0 - 22066) - unk_0x12730A13C85FC896((iParam0 - 22066)) * 64);
		iVar0 = unk_0xC06DB57B81E2C02B(iVar18, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 24962 && iParam0 < 25538)
	{
		iVar19 = unk_0x4B2E4855CB2B4FAA((iParam0 - 24962), 0, 1, iParam2, "_ARENAWARSPSTAT_BOOL");
		iVar1 = ((iParam0 - 24962) - unk_0x12730A13C85FC896((iParam0 - 24962)) * 64);
		iVar0 = unk_0xC06DB57B81E2C02B(iVar19, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 26810 && iParam0 < 27258)
	{
		iVar20 = unk_0x4B2E4855CB2B4FAA((iParam0 - 26810), 0, 1, iParam2, "_CASINOPSTAT_BOOL");
		iVar1 = ((iParam0 - 26810) - unk_0x12730A13C85FC896((iParam0 - 26810)) * 64);
		iVar0 = unk_0xC06DB57B81E2C02B(iVar20, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 28098 && iParam0 < 28354)
	{
		iVar21 = unk_0x4B2E4855CB2B4FAA((iParam0 - 28098), 0, 1, iParam2, "_CASINOHSTPSTAT_BOOL");
		iVar1 = ((iParam0 - 28098) - unk_0x12730A13C85FC896((iParam0 - 28098)) * 64);
		iVar0 = unk_0xC06DB57B81E2C02B(iVar21, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 28355 && iParam0 < 28483)
	{
		iVar22 = unk_0x4B2E4855CB2B4FAA((iParam0 - 28355), 0, 1, iParam2, "_HEIST3TATTOOSTAT_BOOL");
		iVar1 = ((iParam0 - 28355) - unk_0x12730A13C85FC896((iParam0 - 28355)) * 64);
		iVar0 = unk_0xC06DB57B81E2C02B(iVar22, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 30227 && iParam0 < 30355)
	{
		iVar23 = unk_0x4B2E4855CB2B4FAA((iParam0 - 30227), 0, 1, iParam2, "_SU20PSTAT_BOOL");
		iVar1 = ((iParam0 - 30227) - unk_0x12730A13C85FC896((iParam0 - 30227)) * 64);
		iVar0 = unk_0xC06DB57B81E2C02B(iVar23, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 30355 && iParam0 < 30483)
	{
		iVar24 = unk_0x4B2E4855CB2B4FAA((iParam0 - 30355), 0, 1, iParam2, "_SU20TATTOOSTAT_BOOL");
		iVar1 = ((iParam0 - 30355) - unk_0x12730A13C85FC896((iParam0 - 30355)) * 64);
		iVar0 = unk_0xC06DB57B81E2C02B(iVar24, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 30515 && iParam0 < 30707)
	{
		iVar25 = unk_0x4B2E4855CB2B4FAA((iParam0 - 30515), 0, 1, iParam2, "_HISLANDPSTAT_BOOL");
		iVar1 = ((iParam0 - 30515) - unk_0x12730A13C85FC896((iParam0 - 30515)) * 64);
		iVar0 = unk_0xC06DB57B81E2C02B(iVar25, bParam1, iVar1, iParam3);
	}
	return iVar0;
}

int func_254(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	var uVar2;
	
	iVar0 = 0;
	if (iParam1 == -1)
	{
		iParam1 = func_21();
	}
	iVar1 = func_256(iParam0, iParam1);
	uVar2 = func_255(iParam0);
	if (0 != iVar1)
	{
		iVar0 = unk_0x9FD0AD883E4A7C1E(iVar1, uVar2, iParam2);
	}
	return iVar0;
}

int func_255(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	if (iParam0 >= 0 && iParam0 < 192)
	{
		iVar0 = ((iParam0 - 0) - unk_0x12730A13C85FC896((iParam0 - 0)) * 64);
	}
	else if (iParam0 >= 192 && iParam0 < 384)
	{
		iVar0 = ((iParam0 - 192) - unk_0x12730A13C85FC896((iParam0 - 192)) * 64);
	}
	else if (iParam0 >= 513 && iParam0 < 705)
	{
		iVar0 = ((iParam0 - 513) - unk_0x12730A13C85FC896((iParam0 - 513)) * 64);
	}
	else if (iParam0 >= 705 && iParam0 < 1281)
	{
		iVar0 = ((iParam0 - 705) - unk_0x12730A13C85FC896((iParam0 - 705)) * 64);
	}
	else if (iParam0 >= 2919 && iParam0 < 3111)
	{
		iVar0 = ((iParam0 - 2919) - unk_0x12730A13C85FC896((iParam0 - 2919)) * 64);
	}
	else if (iParam0 >= 3111 && iParam0 < 3879)
	{
		iVar0 = ((iParam0 - 3111) - unk_0x12730A13C85FC896((iParam0 - 3111)) * 64);
	}
	else if (iParam0 >= 4335 && iParam0 < 4399)
	{
		iVar0 = ((iParam0 - 4335) - unk_0x12730A13C85FC896((iParam0 - 4335)) * 64);
	}
	else if (iParam0 >= 4207 && iParam0 < 4335)
	{
		iVar0 = ((iParam0 - 4207) - unk_0x12730A13C85FC896((iParam0 - 4207)) * 64);
	}
	else if (iParam0 >= 6029 && iParam0 < 6413)
	{
		iVar0 = ((iParam0 - 6029) - unk_0x12730A13C85FC896((iParam0 - 6029)) * 64);
	}
	else if (iParam0 >= 7385 && iParam0 < 7641)
	{
		iVar0 = ((iParam0 - 7385) - unk_0x12730A13C85FC896((iParam0 - 7385)) * 64);
	}
	else if (iParam0 >= 7321 && iParam0 < 7385)
	{
		iVar0 = ((iParam0 - 7321) - unk_0x12730A13C85FC896((iParam0 - 7321)) * 64);
	}
	else if (iParam0 >= 9361 && iParam0 < 9553)
	{
		iVar0 = ((iParam0 - 9361) - unk_0x12730A13C85FC896((iParam0 - 9361)) * 64);
	}
	else if (iParam0 >= 15369 && iParam0 < 15561)
	{
		iVar0 = ((iParam0 - 15369) - unk_0x12730A13C85FC896((iParam0 - 15369)) * 64);
	}
	else if (iParam0 >= 15562 && iParam0 < 15946)
	{
		iVar0 = ((iParam0 - 15562) - unk_0x12730A13C85FC896((iParam0 - 15562)) * 64);
	}
	else if (iParam0 >= 15946 && iParam0 < 16010)
	{
		iVar0 = ((iParam0 - 15946) - unk_0x12730A13C85FC896((iParam0 - 15946)) * 64);
	}
	else if (iParam0 >= 18098 && iParam0 < 18162)
	{
		iVar0 = ((iParam0 - 18098) - unk_0x12730A13C85FC896((iParam0 - 18098)) * 64);
	}
	else if (iParam0 >= 22066 && iParam0 < 22194)
	{
		iVar0 = ((iParam0 - 22066) - unk_0x12730A13C85FC896((iParam0 - 22066)) * 64);
	}
	else if (iParam0 >= 24962 && iParam0 < 25538)
	{
		iVar0 = ((iParam0 - 24962) - unk_0x12730A13C85FC896((iParam0 - 24962)) * 64);
	}
	else if (iParam0 >= 26810 && iParam0 < 27258)
	{
		iVar0 = ((iParam0 - 26810) - unk_0x12730A13C85FC896((iParam0 - 26810)) * 64);
	}
	else if (iParam0 >= 28098 && iParam0 < 28354)
	{
		iVar0 = ((iParam0 - 28098) - unk_0x12730A13C85FC896((iParam0 - 28098)) * 64);
	}
	else if (iParam0 >= 28355 && iParam0 < 28483)
	{
		iVar0 = ((iParam0 - 28355) - unk_0x12730A13C85FC896((iParam0 - 28355)) * 64);
	}
	else if (iParam0 >= 30227 && iParam0 < 30355)
	{
		iVar0 = ((iParam0 - 30227) - unk_0x12730A13C85FC896((iParam0 - 30227)) * 64);
	}
	else if (iParam0 >= 30355 && iParam0 < 30483)
	{
		iVar0 = ((iParam0 - 30355) - unk_0x12730A13C85FC896((iParam0 - 30355)) * 64);
	}
	else if (iParam0 >= 30515 && iParam0 < 30707)
	{
		iVar0 = ((iParam0 - 30515) - unk_0x12730A13C85FC896((iParam0 - 30515)) * 64);
	}
	return iVar0;
}

int func_256(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam1 == -1)
	{
		iParam1 = func_21();
	}
	iVar0 = 0;
	if (iParam0 >= 0 && iParam0 < 192)
	{
		iVar0 = unk_0x43BE40E27DB6DC2E((iParam0 - 0), 0, 1, iParam1);
	}
	else if (iParam0 >= 192 && iParam0 < 384)
	{
		iVar0 = unk_0x43BE40E27DB6DC2E((iParam0 - 192), 1, 1, iParam1);
	}
	else if (iParam0 >= 513 && iParam0 < 705)
	{
		iVar0 = unk_0x43BE40E27DB6DC2E((iParam0 - 513), 0, 0, 0);
	}
	else if (iParam0 >= 705 && iParam0 < 1281)
	{
		iVar0 = unk_0x43BE40E27DB6DC2E((iParam0 - 705), 1, 0, 0);
	}
	else if (iParam0 >= 2919 && iParam0 < 3111)
	{
		iVar0 = unk_0x840F9A9E6D216561((iParam0 - 2919), 0, 0, 0);
	}
	else if (iParam0 >= 3111 && iParam0 < 3879)
	{
		iVar0 = unk_0x840F9A9E6D216561((iParam0 - 3111), 0, 1, iParam1);
	}
	else if (iParam0 >= 4335 && iParam0 < 4399)
	{
		iVar0 = unk_0x4B2E4855CB2B4FAA((iParam0 - 4335), 0, 0, 0, "_NGPSTAT_BOOL");
	}
	else if (iParam0 >= 4207 && iParam0 < 4335)
	{
		iVar0 = unk_0x4B2E4855CB2B4FAA((iParam0 - 4207), 0, 1, iParam1, "_NGPSTAT_BOOL");
	}
	else if (iParam0 >= 6029 && iParam0 < 6413)
	{
		iVar0 = unk_0x4B2E4855CB2B4FAA((iParam0 - 6029), 0, 1, iParam1, "_NGTATPSTAT_BOOL");
	}
	else if (iParam0 >= 7321 && iParam0 < 7385)
	{
		iVar0 = unk_0x4B2E4855CB2B4FAA((iParam0 - 7321), 0, 0, 0, "_NGDLCPSTAT_BOOL");
	}
	else if (iParam0 >= 7385 && iParam0 < 7641)
	{
		iVar0 = unk_0x4B2E4855CB2B4FAA((iParam0 - 7385), 0, 1, iParam1, "_NGDLCPSTAT_BOOL");
	}
	else if (iParam0 >= 9361 && iParam0 < 9553)
	{
		iVar0 = unk_0x4B2E4855CB2B4FAA((iParam0 - 9361), 0, 1, iParam1, "_DLCBIKEPSTAT_BOOL");
	}
	else if (iParam0 >= 15369 && iParam0 < 15561)
	{
		iVar0 = unk_0x4B2E4855CB2B4FAA((iParam0 - 15369), 0, 1, iParam1, "_DLCGUNPSTAT_BOOL");
	}
	else if (iParam0 >= 15562 && iParam0 < 15946)
	{
		iVar0 = unk_0x4B2E4855CB2B4FAA((iParam0 - 15562), 0, 1, iParam1, "_GUNTATPSTAT_BOOL");
	}
	else if (iParam0 >= 15946 && iParam0 < 16010)
	{
		iVar0 = unk_0x4B2E4855CB2B4FAA((iParam0 - 15946), 0, 1, iParam1, "_DLCSMUGCHARPSTAT_BOOL");
	}
	else if (iParam0 >= 18098 && iParam0 < 18162)
	{
		iVar0 = unk_0x4B2E4855CB2B4FAA((iParam0 - 18098), 0, 1, iParam1, "_GANGOPSPSTAT_BOOL");
	}
	else if (iParam0 >= 22066 && iParam0 < 22194)
	{
		iVar0 = unk_0x4B2E4855CB2B4FAA((iParam0 - 22066), 0, 1, iParam1, "_BUSINESSBATPSTAT_BOOL");
	}
	else if (iParam0 >= 24962 && iParam0 < 25538)
	{
		iVar0 = unk_0x4B2E4855CB2B4FAA((iParam0 - 24962), 0, 1, iParam1, "_ARENAWARSPSTAT_BOOL");
	}
	else if (iParam0 >= 26810 && iParam0 < 27258)
	{
		iVar0 = unk_0x4B2E4855CB2B4FAA((iParam0 - 26810), 0, 1, iParam1, "_CASINOPSTAT_BOOL");
	}
	else if (iParam0 >= 28098 && iParam0 < 28354)
	{
		iVar0 = unk_0x4B2E4855CB2B4FAA((iParam0 - 28098), 0, 1, iParam1, "_CASINOHSTPSTAT_BOOL");
	}
	else if (iParam0 >= 28355 && iParam0 < 28483)
	{
		iVar0 = unk_0x4B2E4855CB2B4FAA((iParam0 - 28355), 0, 1, iParam1, "_HEIST3TATTOOSTAT_BOOL");
	}
	else if (iParam0 >= 30227 && iParam0 < 30355)
	{
		iVar0 = unk_0x4B2E4855CB2B4FAA((iParam0 - 30227), 0, 1, iParam1, "_SU20PSTAT_BOOL");
	}
	else if (iParam0 >= 30355 && iParam0 < 30483)
	{
		iVar0 = unk_0x4B2E4855CB2B4FAA((iParam0 - 30355), 0, 1, iParam1, "_SU20TATTOOSTAT_BOOL");
	}
	else if (iParam0 >= 30515 && iParam0 < 30707)
	{
		iVar0 = unk_0x4B2E4855CB2B4FAA((iParam0 - 30515), 0, 1, iParam1, "_HISLANDPSTAT_BOOL");
	}
	return iVar0;
}

int func_257(int iParam0)
{
	int iVar0;
	
	iVar0 = func_259(iParam0);
	return func_124(func_258(iVar0), -1, 0);
}

int func_258(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 3952;
		
		case 1:
			return 3953;
		
		case 2:
			return 3954;
		
		case 3:
			return 3955;
		
		case 4:
			return 3956;
		
		case 5:
			return 5457;
		
		default:
	}
	return 3952;
}

int func_259(int iParam0)
{
	int iVar0;
	
	if (func_260(iParam0))
	{
		iVar0 = 0;
		while (iVar0 <= 5)
		{
			if (Global_1590682[unk_0x460153A63B9477BC() /*883*/].f_274.f_183[iVar0 /*12*/] == iParam0)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return -1;
}

int func_260(int iParam0)
{
	if (iParam0 == 32 || iParam0 == 0)
	{
		return 0;
	}
	return 1;
}

void func_261(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	iVar0 = func_259(iParam0);
	iVar1 = func_258(iVar0);
	iVar2 = (func_124(iVar1, -1, 0) + iParam1);
	func_122(iVar1, iVar2, -1, 1, 0);
	if (iVar0 == 5)
	{
		return;
	}
	if (func_264(9357, -1, -1) < 3)
	{
		iVar3 = 0;
		iVar0 = 0;
		while (iVar0 <= 5)
		{
			if (Global_1590682[unk_0x460153A63B9477BC() /*883*/].f_274.f_183[iVar0 /*12*/] != 0)
			{
				iVar1 = func_258(iVar0);
				iVar3 = (iVar3 + func_124(iVar1, -1, 0));
			}
			iVar0++;
		}
		iVar4 = 1;
		while (iVar4 <= 3)
		{
			if (iVar3 >= func_263(iVar4))
			{
				iVar5 = iVar4;
			}
			iVar4++;
		}
		func_262(9357, iVar5, -1, 1);
	}
}

var func_262(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	var uVar2;
	
	if (iParam2 == -1)
	{
		iParam2 = func_21();
	}
	if (iParam1 < 0)
	{
		iParam1 = 255;
	}
	iVar0 = 0;
	iVar1 = 0;
	if (iParam0 >= 384 && iParam0 < 457)
	{
		iVar0 = unk_0x169039D5869899DA((iParam0 - 384), 0, 1, iParam2);
		iVar1 = ((iParam0 - 384) - unk_0xCCD6EB3D51BA0D9E((iParam0 - 384)) * 8) * 8;
	}
	else if (iParam0 >= 457 && iParam0 < 513)
	{
		iVar0 = unk_0x169039D5869899DA((iParam0 - 457), 1, 1, iParam2);
		iVar1 = ((iParam0 - 457) - unk_0xCCD6EB3D51BA0D9E((iParam0 - 457)) * 8) * 8;
	}
	else if (iParam0 >= 1281 && iParam0 < 1305)
	{
		iVar0 = unk_0x169039D5869899DA((iParam0 - 1281), 0, 0, 0);
		iVar1 = ((iParam0 - 1281) - unk_0xCCD6EB3D51BA0D9E((iParam0 - 1281)) * 8) * 8;
	}
	else if (iParam0 >= 1305 && iParam0 < 1361)
	{
		iVar0 = unk_0x169039D5869899DA((iParam0 - 1305), 1, 0, 0);
		iVar1 = ((iParam0 - 1305) - unk_0xCCD6EB3D51BA0D9E((iParam0 - 1305)) * 8) * 8;
	}
	else if (iParam0 >= 1393 && iParam0 < 2919)
	{
		iVar0 = unk_0x33259517529FA9DD((iParam0 - 1393), 0, 1, iParam2);
		iVar1 = ((iParam0 - 1393) - unk_0xCCD6EB3D51BA0D9E((iParam0 - 1393)) * 8) * 8;
	}
	else if (iParam0 >= 1361 && iParam0 < 1393)
	{
		iVar0 = unk_0x33259517529FA9DD((iParam0 - 1361), 0, 0, 0);
		iVar1 = ((iParam0 - 1361) - unk_0xCCD6EB3D51BA0D9E((iParam0 - 1361)) * 8) * 8;
	}
	else if (iParam0 >= 3879 && iParam0 < 4143)
	{
		iVar0 = unk_0x7F2F9520C57D9D66((iParam0 - 3879), 0, 1, iParam2, "_NGPSTAT_INT");
		iVar1 = ((iParam0 - 3879) - unk_0xCCD6EB3D51BA0D9E((iParam0 - 3879)) * 8) * 8;
	}
	else if (iParam0 >= 4143 && iParam0 < 4207)
	{
		iVar0 = unk_0x7F2F9520C57D9D66((iParam0 - 4143), 0, 0, 0, "_NGPSTAT_INT");
		iVar1 = ((iParam0 - 4143) - unk_0xCCD6EB3D51BA0D9E((iParam0 - 4143)) * 8) * 8;
	}
	else if (iParam0 >= 4399 && iParam0 < 6028)
	{
		iVar0 = unk_0x7F2F9520C57D9D66((iParam0 - 4399), 0, 1, iParam2, "_LRPSTAT_INT");
		iVar1 = ((iParam0 - 4399) - unk_0xCCD6EB3D51BA0D9E((iParam0 - 4399)) * 8) * 8;
	}
	else if (iParam0 >= 6413 && iParam0 < 7262)
	{
		iVar0 = unk_0x7F2F9520C57D9D66((iParam0 - 6413), 0, 1, iParam2, "_APAPSTAT_INT");
		iVar1 = ((iParam0 - 6413) - unk_0xCCD6EB3D51BA0D9E((iParam0 - 6413)) * 8) * 8;
	}
	else if (iParam0 >= 7262 && iParam0 < 7313)
	{
		iVar0 = unk_0x7F2F9520C57D9D66((iParam0 - 7262), 0, 1, iParam2, "_LR2PSTAT_INT");
		iVar1 = ((iParam0 - 7262) - unk_0xCCD6EB3D51BA0D9E((iParam0 - 7262)) * 8) * 8;
	}
	else if (iParam0 >= 7681 && iParam0 < 9361)
	{
		iVar0 = unk_0x7F2F9520C57D9D66((iParam0 - 7681), 0, 1, iParam2, "_BIKEPSTAT_INT");
		iVar1 = ((iParam0 - 7681) - unk_0xCCD6EB3D51BA0D9E((iParam0 - 7681)) * 8) * 8;
	}
	else if (iParam0 >= 9553 && iParam0 < 15265)
	{
		iVar0 = unk_0x7F2F9520C57D9D66((iParam0 - 9553), 0, 1, iParam2, "_IMPEXPPSTAT_INT");
		iVar1 = ((iParam0 - 9553) - unk_0xCCD6EB3D51BA0D9E((iParam0 - 9553)) * 8) * 8;
	}
	else if (iParam0 >= 15265 && iParam0 < 15369)
	{
		iVar0 = unk_0x7F2F9520C57D9D66((iParam0 - 15265), 0, 1, iParam2, "_GUNRPSTAT_INT");
		iVar1 = ((iParam0 - 15265) - unk_0xCCD6EB3D51BA0D9E((iParam0 - 15265)) * 8) * 8;
	}
	else if (iParam0 >= 16010 && iParam0 < 18098)
	{
		iVar0 = unk_0x7F2F9520C57D9D66((iParam0 - 16010), 0, 1, iParam2, "_DLCSMUGCHARPSTAT_INT");
		iVar1 = ((iParam0 - 16010) - unk_0xCCD6EB3D51BA0D9E((iParam0 - 16010)) * 8) * 8;
	}
	else if (iParam0 >= 18162 && iParam0 < 19018)
	{
		iVar0 = unk_0x7F2F9520C57D9D66((iParam0 - 18162), 0, 1, iParam2, "_GANGOPSPSTAT_INT");
		iVar1 = ((iParam0 - 18162) - unk_0xCCD6EB3D51BA0D9E((iParam0 - 18162)) * 8) * 8;
	}
	else if (iParam0 >= 19018 && iParam0 < 22066)
	{
		iVar0 = unk_0x7F2F9520C57D9D66((iParam0 - 19018), 0, 1, iParam2, "_BUSINESSBATPSTAT_INT");
		iVar1 = ((iParam0 - 19018) - unk_0xCCD6EB3D51BA0D9E((iParam0 - 19018)) * 8) * 8;
	}
	else if (iParam0 >= 22194 && iParam0 < 24962)
	{
		iVar0 = unk_0x7F2F9520C57D9D66((iParam0 - 22194), 0, 1, iParam2, "_ARENAWARSPSTAT_INT");
		iVar1 = ((iParam0 - 22194) - unk_0xCCD6EB3D51BA0D9E((iParam0 - 22194)) * 8) * 8;
	}
	else if (iParam0 >= 25538 && iParam0 < 26810)
	{
		iVar0 = unk_0x7F2F9520C57D9D66((iParam0 - 25538), 0, 1, iParam2, "_CASINOPSTAT_INT");
		iVar1 = ((iParam0 - 25538) - unk_0xCCD6EB3D51BA0D9E((iParam0 - 25538)) * 8) * 8;
	}
	else if (iParam0 >= 27258 && iParam0 < 28098)
	{
		iVar0 = unk_0x7F2F9520C57D9D66((iParam0 - 27258), 0, 1, iParam2, "_CASINOHSTPSTAT_INT");
		iVar1 = ((iParam0 - 27258) - unk_0xCCD6EB3D51BA0D9E((iParam0 - 27258)) * 8) * 8;
	}
	else if (iParam0 >= 28483 && iParam0 < 30227)
	{
		iVar0 = unk_0x7F2F9520C57D9D66((iParam0 - 28483), 0, 1, iParam2, "_SU20PSTAT_INT");
		iVar1 = ((iParam0 - 28483) - unk_0xCCD6EB3D51BA0D9E((iParam0 - 28483)) * 8) * 8;
	}
	else if (iParam0 >= 30483 && iParam0 < 30515)
	{
		iVar0 = unk_0x7F2F9520C57D9D66((iParam0 - 30483), 0, 1, iParam2, "_HISLANDPSTAT_INT");
		iVar1 = ((iParam0 - 30483) - unk_0xCCD6EB3D51BA0D9E((iParam0 - 30483)) * 8) * 8;
	}
	else if (iParam0 >= 7641 && iParam0 < 7681)
	{
		iVar0 = unk_0x7F2F9520C57D9D66((iParam0 - 7641), 0, 1, iParam2, "_NGDLCPSTAT_INT");
		iVar1 = ((iParam0 - 7641) - unk_0xCCD6EB3D51BA0D9E((iParam0 - 7641)) * 8) * 8;
	}
	else if (iParam0 >= 7313 && iParam0 < 7321)
	{
		iVar0 = unk_0x7F2F9520C57D9D66((iParam0 - 7313), 0, 0, 0, "_NGDLCPSTAT_INT");
		iVar1 = ((iParam0 - 7313) - unk_0xCCD6EB3D51BA0D9E((iParam0 - 7313)) * 8) * 8;
	}
	uVar2 = unk_0x9972E0F3B8651981(iVar0, iParam1, iVar1, 8, iParam3);
	return uVar2;
}

int func_263(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return 100000;
			break;
		
		case 2:
			return 300000;
			break;
		
		case 3:
			return 500000;
			break;
	}
	return 0;
}

int func_264(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (iParam1 == -1)
	{
		iParam1 = func_21();
	}
	iVar0 = 0;
	iVar1 = func_266(iParam0, iParam1);
	iVar2 = func_265(iParam0);
	if (0 != iVar1)
	{
		if (!unk_0x84F15E111A2161E1(iVar1, &iVar0, iVar2, 8, iParam2))
		{
			iVar0 = 0;
		}
	}
	return iVar0;
}

int func_265(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	if (iParam0 >= 384 && iParam0 < 457)
	{
		iVar0 = ((iParam0 - 384) - unk_0xCCD6EB3D51BA0D9E((iParam0 - 384)) * 8) * 8;
	}
	else if (iParam0 >= 457 && iParam0 < 513)
	{
		iVar0 = ((iParam0 - 457) - unk_0xCCD6EB3D51BA0D9E((iParam0 - 457)) * 8) * 8;
	}
	else if (iParam0 >= 1281 && iParam0 < 1305)
	{
		iVar0 = ((iParam0 - 1281) - unk_0xCCD6EB3D51BA0D9E((iParam0 - 1281)) * 8) * 8;
	}
	else if (iParam0 >= 1305 && iParam0 < 1361)
	{
		iVar0 = ((iParam0 - 1305) - unk_0xCCD6EB3D51BA0D9E((iParam0 - 1305)) * 8) * 8;
	}
	else if (iParam0 >= 1361 && iParam0 < 1393)
	{
		iVar0 = ((iParam0 - 1361) - unk_0xCCD6EB3D51BA0D9E((iParam0 - 1361)) * 8) * 8;
	}
	else if (iParam0 >= 1393 && iParam0 < 2919)
	{
		iVar0 = ((iParam0 - 1393) - unk_0xCCD6EB3D51BA0D9E((iParam0 - 1393)) * 8) * 8;
	}
	else if (iParam0 >= 4143 && iParam0 < 4207)
	{
		iVar0 = ((iParam0 - 4143) - unk_0xCCD6EB3D51BA0D9E((iParam0 - 4143)) * 8) * 8;
	}
	else if (iParam0 >= 3879 && iParam0 < 4143)
	{
		iVar0 = ((iParam0 - 3879) - unk_0xCCD6EB3D51BA0D9E((iParam0 - 3879)) * 8) * 8;
	}
	else if (iParam0 >= 4399 && iParam0 < 6028)
	{
		iVar0 = ((iParam0 - 4399) - unk_0xCCD6EB3D51BA0D9E((iParam0 - 4399)) * 8) * 8;
	}
	else if (iParam0 >= 6413 && iParam0 < 7262)
	{
		iVar0 = ((iParam0 - 6413) - unk_0xCCD6EB3D51BA0D9E((iParam0 - 6413)) * 8) * 8;
	}
	else if (iParam0 >= 7262 && iParam0 < 7313)
	{
		iVar0 = ((iParam0 - 7262) - unk_0xCCD6EB3D51BA0D9E((iParam0 - 7262)) * 8) * 8;
	}
	else if (iParam0 >= 7681 && iParam0 < 9361)
	{
		iVar0 = ((iParam0 - 7681) - unk_0xCCD6EB3D51BA0D9E((iParam0 - 7681)) * 8) * 8;
	}
	else if (iParam0 >= 9553 && iParam0 < 15265)
	{
		iVar0 = ((iParam0 - 9553) - unk_0xCCD6EB3D51BA0D9E((iParam0 - 9553)) * 8) * 8;
	}
	else if (iParam0 >= 15265 && iParam0 < 15369)
	{
		iVar0 = ((iParam0 - 15265) - unk_0xCCD6EB3D51BA0D9E((iParam0 - 15265)) * 8) * 8;
	}
	else if (iParam0 >= 7313 && iParam0 < 7321)
	{
		iVar0 = ((iParam0 - 7313) - unk_0xCCD6EB3D51BA0D9E((iParam0 - 7313)) * 8) * 8;
	}
	else if (iParam0 >= 7641 && iParam0 < 7681)
	{
		iVar0 = ((iParam0 - 7641) - unk_0xCCD6EB3D51BA0D9E((iParam0 - 7641)) * 8) * 8;
	}
	else if (iParam0 >= 16010 && iParam0 < 18098)
	{
		iVar0 = ((iParam0 - 16010) - unk_0xCCD6EB3D51BA0D9E((iParam0 - 16010)) * 8) * 8;
	}
	else if (iParam0 >= 18162 && iParam0 < 19018)
	{
		iVar0 = ((iParam0 - 18162) - unk_0xCCD6EB3D51BA0D9E((iParam0 - 18162)) * 8) * 8;
	}
	else if (iParam0 >= 19018 && iParam0 < 22066)
	{
		iVar0 = ((iParam0 - 19018) - unk_0xCCD6EB3D51BA0D9E((iParam0 - 19018)) * 8) * 8;
	}
	else if (iParam0 >= 22194 && iParam0 < 24962)
	{
		iVar0 = ((iParam0 - 22194) - unk_0xCCD6EB3D51BA0D9E((iParam0 - 22194)) * 8) * 8;
	}
	else if (iParam0 >= 25538 && iParam0 < 26810)
	{
		iVar0 = ((iParam0 - 25538) - unk_0xCCD6EB3D51BA0D9E((iParam0 - 25538)) * 8) * 8;
	}
	else if (iParam0 >= 27258 && iParam0 < 28098)
	{
		iVar0 = ((iParam0 - 27258) - unk_0xCCD6EB3D51BA0D9E((iParam0 - 27258)) * 8) * 8;
	}
	else if (iParam0 >= 28483 && iParam0 < 30227)
	{
		iVar0 = ((iParam0 - 28483) - unk_0xCCD6EB3D51BA0D9E((iParam0 - 28483)) * 8) * 8;
	}
	else if (iParam0 >= 30483 && iParam0 < 30515)
	{
		iVar0 = ((iParam0 - 30483) - unk_0xCCD6EB3D51BA0D9E((iParam0 - 30483)) * 8) * 8;
	}
	return iVar0;
}

int func_266(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam1 == -1)
	{
		iParam1 = func_21();
	}
	iVar0 = 0;
	if (iParam0 >= 384 && iParam0 < 457)
	{
		iVar0 = unk_0x169039D5869899DA((iParam0 - 384), 0, 1, iParam1);
	}
	else if (iParam0 >= 457 && iParam0 < 513)
	{
		iVar0 = unk_0x169039D5869899DA((iParam0 - 457), 1, 1, iParam1);
	}
	else if (iParam0 >= 1281 && iParam0 < 1305)
	{
		iVar0 = unk_0x169039D5869899DA((iParam0 - 1281), 0, 0, 0);
	}
	else if (iParam0 >= 1305 && iParam0 < 1361)
	{
		iVar0 = unk_0x169039D5869899DA((iParam0 - 1305), 1, 0, 0);
	}
	else if (iParam0 >= 1361 && iParam0 < 1393)
	{
		iVar0 = unk_0x33259517529FA9DD((iParam0 - 1361), 0, 0, 0);
	}
	else if (iParam0 >= 1393 && iParam0 < 2919)
	{
		iVar0 = unk_0x33259517529FA9DD((iParam0 - 1393), 0, 1, iParam1);
	}
	else if (iParam0 >= 4143 && iParam0 < 4207)
	{
		iVar0 = unk_0x7F2F9520C57D9D66((iParam0 - 4143), 0, 0, 0, "_NGPSTAT_INT");
	}
	else if (iParam0 >= 3879 && iParam0 < 4143)
	{
		iVar0 = unk_0x7F2F9520C57D9D66((iParam0 - 3879), 0, 1, iParam1, "_NGPSTAT_INT");
	}
	else if (iParam0 >= 4399 && iParam0 < 6028)
	{
		iVar0 = unk_0x7F2F9520C57D9D66((iParam0 - 4399), 0, 1, iParam1, "_LRPSTAT_INT");
	}
	else if (iParam0 >= 6413 && iParam0 < 7262)
	{
		iVar0 = unk_0x7F2F9520C57D9D66((iParam0 - 6413), 0, 1, iParam1, "_APAPSTAT_INT");
	}
	else if (iParam0 >= 7262 && iParam0 < 7313)
	{
		iVar0 = unk_0x7F2F9520C57D9D66((iParam0 - 7262), 0, 1, iParam1, "_LR2PSTAT_INT");
	}
	else if (iParam0 >= 7681 && iParam0 < 9361)
	{
		iVar0 = unk_0x7F2F9520C57D9D66((iParam0 - 7681), 0, 1, iParam1, "_BIKEPSTAT_INT");
	}
	else if (iParam0 >= 9553 && iParam0 < 15265)
	{
		iVar0 = unk_0x7F2F9520C57D9D66((iParam0 - 9553), 0, 1, iParam1, "_IMPEXPPSTAT_INT");
	}
	else if (iParam0 >= 15265 && iParam0 < 15369)
	{
		iVar0 = unk_0x7F2F9520C57D9D66((iParam0 - 15265), 0, 1, iParam1, "_GUNRPSTAT_INT");
	}
	else if (iParam0 >= 7313 && iParam0 < 7321)
	{
		iVar0 = unk_0x7F2F9520C57D9D66((iParam0 - 7313), 0, 0, 0, "_NGDLCPSTAT_INT");
	}
	else if (iParam0 >= 7641 && iParam0 < 7681)
	{
		iVar0 = unk_0x7F2F9520C57D9D66((iParam0 - 7641), 0, 1, iParam1, "_NGDLCPSTAT_INT");
	}
	else if (iParam0 >= 16010 && iParam0 < 18098)
	{
		iVar0 = unk_0x7F2F9520C57D9D66((iParam0 - 16010), 0, 1, iParam1, "_DLCSMUGCHARPSTAT_INT");
	}
	else if (iParam0 >= 18162 && iParam0 < 19018)
	{
		iVar0 = unk_0x7F2F9520C57D9D66((iParam0 - 18162), 0, 1, iParam1, "_GANGOPSPSTAT_INT");
	}
	else if (iParam0 >= 19018 && iParam0 < 22066)
	{
		iVar0 = unk_0x7F2F9520C57D9D66((iParam0 - 19018), 0, 1, iParam1, "_BUSINESSBATPSTAT_INT");
	}
	else if (iParam0 >= 22194 && iParam0 < 24962)
	{
		iVar0 = unk_0x7F2F9520C57D9D66((iParam0 - 22194), 0, 1, iParam1, "_ARENAWARSPSTAT_INT");
	}
	else if (iParam0 >= 25538 && iParam0 < 26810)
	{
		iVar0 = unk_0x7F2F9520C57D9D66((iParam0 - 25538), 0, 1, iParam1, "_CASINOPSTAT_INT");
	}
	else if (iParam0 >= 27258 && iParam0 < 28098)
	{
		iVar0 = unk_0x7F2F9520C57D9D66((iParam0 - 27258), 0, 1, iParam1, "_CASINOHSTPSTAT_INT");
	}
	else if (iParam0 >= 28483 && iParam0 < 30227)
	{
		iVar0 = unk_0x7F2F9520C57D9D66((iParam0 - 28483), 0, 1, iParam1, "_SU20PSTAT_INT");
	}
	else if (iParam0 >= 30483 && iParam0 < 30515)
	{
		iVar0 = unk_0x7F2F9520C57D9D66((iParam0 - 30483), 0, 1, iParam1, "_HISLANDPSTAT_INT");
	}
	return iVar0;
}

int func_267(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	
	iVar1 = func_153(iParam1);
	if (func_260(iParam1))
	{
		switch (iVar1)
		{
			case 1:
				iVar0 = Global_262145.f_16968;
				if (func_268(iParam0, iParam1, 0))
				{
					iVar0 = (iVar0 + Global_262145.f_16973);
				}
				if (func_268(iParam0, iParam1, 1))
				{
					iVar0 = (iVar0 + Global_262145.f_16978);
				}
				iVar0 = (iVar0 * iParam2);
				break;
			
			case 3:
				iVar0 = Global_262145.f_16967;
				if (func_268(iParam0, iParam1, 0))
				{
					iVar0 = (iVar0 + Global_262145.f_16972);
				}
				if (func_268(iParam0, iParam1, 1))
				{
					iVar0 = (iVar0 + Global_262145.f_16977);
				}
				iVar0 = (iVar0 * iParam2);
				break;
			
			case 4:
				iVar0 = Global_262145.f_16966;
				if (func_268(iParam0, iParam1, 0))
				{
					iVar0 = (iVar0 + Global_262145.f_16971);
				}
				if (func_268(iParam0, iParam1, 1))
				{
					iVar0 = (iVar0 + Global_262145.f_16976);
				}
				iVar0 = (iVar0 * iParam2);
				break;
			
			case 0:
				iVar0 = Global_262145.f_16964;
				if (func_268(iParam0, iParam1, 0))
				{
					iVar0 = (iVar0 + Global_262145.f_16969);
				}
				if (func_268(iParam0, iParam1, 1))
				{
					iVar0 = (iVar0 + Global_262145.f_16974);
				}
				iVar0 = (iVar0 * iParam2);
				break;
			
			case 2:
				iVar0 = Global_262145.f_16965;
				if (func_268(iParam0, iParam1, 0))
				{
					iVar0 = (iVar0 + Global_262145.f_16970);
				}
				if (func_268(iParam0, iParam1, 1))
				{
					iVar0 = (iVar0 + Global_262145.f_16975);
				}
				iVar0 = (iVar0 * iParam2);
				break;
			
			case 5:
				iVar0 = Global_262145.f_21070;
				if (func_268(iParam0, iParam1, 0))
				{
					iVar0 = (iVar0 + Global_262145.f_21072);
				}
				if (func_268(iParam0, iParam1, 1))
				{
					iVar0 = (iVar0 + Global_262145.f_21071);
				}
				iVar0 = (iVar0 * iParam2);
				break;
			}
	}
	return iVar0;
}

int func_268(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	if (func_270(iParam0, iParam1))
	{
		iVar0 = func_269(iParam0, iParam1);
		return unk_0xCE990E643CD9D0E5(Global_1590682[iParam0 /*883*/].f_274.f_183[iVar0 /*12*/].f_5, iParam2);
	}
	return 0;
}

int func_269(int iParam0, int iParam1)
{
	int iVar0;
	
	if (func_260(iParam1) && iParam0 != func_10())
	{
		iVar0 = 0;
		while (iVar0 <= 5)
		{
			if (Global_1590682[iParam0 /*883*/].f_274.f_183[iVar0 /*12*/] == iParam1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return -1;
}

int func_270(int iParam0, int iParam1)
{
	int iVar0;
	
	if (func_260(iParam1) && iParam0 != func_10())
	{
		iVar0 = 0;
		while (iVar0 <= 5)
		{
			if (Global_1590682[iParam0 /*883*/].f_274.f_183[iVar0 /*12*/] == iParam1)
			{
				return 1;
			}
			iVar0++;
		}
	}
	return 0;
}

int func_271(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam0 == func_10())
	{
		return 0;
	}
	if (func_260(iParam1))
	{
		iVar0 = 0;
		while (iVar0 <= 5)
		{
			if (Global_1590682[iParam0 /*883*/].f_274.f_183[iVar0 /*12*/] == iParam1)
			{
				return Global_1590682[iParam0 /*883*/].f_274.f_183[iVar0 /*12*/].f_1;
			}
			iVar0++;
		}
	}
	return 0;
}

void func_272(int iParam0, var uParam1, int iParam2, var uParam3)
{
	struct<2> Var0;
	float fVar1;
	float fVar2;
	float fVar3;
	int iVar4;
	float fVar5;
	int iVar6;
	float fVar7;
	float fVar8;
	var uVar9;
	int iVar10;
	int iVar11;
	int iVar12;
	int iVar13;
	struct<2> Var14;
	float fVar15;
	float fVar16;
	float fVar17;
	int iVar18;
	float fVar19;
	int iVar20;
	float fVar21;
	int iVar22;
	int iVar23;
	
	if (iParam0 == 192)
	{
	}
	else if (iParam0 == 190)
	{
		if (uParam1->f_10 > 0)
		{
			if (func_127())
			{
				Var0 = { func_155() };
				if (uParam1->f_10 == uParam1->f_11)
				{
					*uParam3 = (uParam1->f_15 + uParam1->f_8);
				}
				else
				{
					fVar1 = to_float(uParam1->f_10);
					fVar2 = to_float(uParam1->f_11);
					fVar3 = ((fVar1 / fVar2) * 100f);
					iVar4 = (uParam1->f_15 + uParam1->f_8);
					fVar5 = ((IntToFloat(iVar4) / 100f) * fVar3);
					*uParam3 = ceil(fVar5);
				}
				iVar6 = func_267(unk_0x460153A63B9477BC(), Var0, *uParam3);
				if (Var0.f_1 == 1)
				{
					fVar7 = (to_float(iVar6) * Global_262145.f_18603);
					iVar6 = round(fVar7);
				}
				else
				{
					fVar8 = (to_float(iVar6) * Global_262145.f_18602);
					iVar6 = round(fVar8);
				}
				*iParam2 = (*iParam2 + iVar6);
				iVar10 = func_236(&uVar9);
				iVar11 = round(Global_262145.f_18593);
				if (iVar10 > iVar11)
				{
					iVar10 = iVar11;
				}
				iVar12 = ceil((IntToFloat(iVar10) * Global_262145.f_18592));
				iVar13 = ((*iParam2 / 100) * iVar12);
				*iParam2 = (*iParam2 + iVar13);
				if (uParam1->f_6)
				{
					*iParam2 = (*iParam2 + *uParam1);
				}
				if (uParam1->f_6)
				{
					if (uParam1->f_12 == 11)
					{
						if (*uParam1 > 0)
						{
							*iParam2 = (*iParam2 + *uParam1);
						}
					}
					else if (uParam1->f_12 == 9)
					{
						if (*uParam1 > 0)
						{
							*iParam2 = (*iParam2 + *uParam1);
						}
					}
				}
				if (iVar10 > 0)
				{
					func_97(86);
				}
				Global_2540384.f_5188.f_382 = *iParam2;
			}
			else if (func_210(0))
			{
				Var14 = { func_273(func_11()) };
				if (uParam1->f_10 == uParam1->f_11)
				{
					*uParam3 = (uParam1->f_15 + uParam1->f_8);
				}
				else
				{
					fVar15 = to_float(uParam1->f_10);
					fVar16 = to_float(uParam1->f_11);
					fVar17 = ((fVar15 / fVar16) * 100f);
					iVar18 = (uParam1->f_15 + uParam1->f_8);
					fVar19 = ((IntToFloat(iVar18) / 100f) * fVar17);
					*uParam3 = ceil(fVar19);
				}
				iVar20 = func_267(func_11(), Var14, *uParam3);
				if (Var14.f_1 == 1)
				{
					iVar20 = ceil((IntToFloat(iVar20) * Global_262145.f_18603));
				}
				else if (Var14.f_1 == 0)
				{
					iVar20 = ceil((IntToFloat(iVar20) * Global_262145.f_18602));
				}
				*iParam2 = (*iParam2 + iVar20);
				fVar21 = Global_262145.f_18642;
				iVar22 = ceil((IntToFloat(*iParam2) * fVar21));
				*iParam2 = iVar22;
				iVar23 = Global_262145.f_18643;
				if (*iParam2 > iVar23)
				{
					*iParam2 = iVar23;
				}
				if (uParam1->f_6)
				{
					if (uParam1->f_12 == 11)
					{
						if (*uParam1 > 0)
						{
							*iParam2 = (*iParam2 + *uParam1);
						}
					}
				}
			}
		}
	}
}

struct<2> func_273(int iParam0)
{
	return Global_1630317[iParam0 /*595*/].f_11.f_193;
}

void func_274(int iParam0, bool bParam1, var uParam2, int iParam3, var uParam4)
{
	int iVar0;
	int iVar1;
	var uVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	
	if (iParam0 == 167)
	{
		if (func_29(unk_0x460153A63B9477BC()))
		{
			if (bParam1)
			{
				func_289();
			}
			func_288();
		}
	}
	else if (iParam0 == 168)
	{
		if (bParam1)
		{
			if (func_29(unk_0x460153A63B9477BC()))
			{
				if (uParam2->f_5)
				{
					*iParam3 = (*iParam3 + func_280(Global_1630317[unk_0x460153A63B9477BC() /*595*/].f_11.f_182));
				}
				else
				{
					*uParam4 = uParam2->f_7;
					if (uParam2->f_8 > 0)
					{
						*uParam4 = (*uParam4 + uParam2->f_8);
					}
					iVar0 = func_279(*uParam4);
					iVar1 = (iVar0 * *uParam4);
					*iParam3 = (*iParam3 + iVar1);
					iVar3 = func_236(&uVar2);
					iVar4 = Global_262145.f_16149;
					if (iVar3 > iVar4)
					{
						iVar3 = iVar4;
					}
					iVar5 = ceil((IntToFloat(iVar3) * Global_262145.f_15358));
					iVar6 = ((*iParam3 / 100) * iVar5);
					*iParam3 = (*iParam3 + iVar6);
					if (uParam2->f_6)
					{
						*iParam3 = (*iParam3 + *uParam2);
					}
					if (iVar3 > 0 && uParam2->f_9 != 4)
					{
						func_97(44);
					}
				}
				func_277(*iParam3);
				func_276();
				Global_2540384.f_5188.f_382 = *iParam3;
				iVar7 = 0;
				while (iVar7 < unk_0xEFA28384DDD283E1())
				{
					iVar8 = iVar7;
					if (unk_0xBD09DF93F957A0CF(iVar8))
					{
						iVar9 = unk_0x9019589211A13B02(iVar8);
						if (func_235(iVar9))
						{
							func_227(iVar9, 1, -1292453789);
						}
					}
					iVar7++;
				}
			}
		}
		if (func_29(unk_0x460153A63B9477BC()))
		{
			func_275();
		}
	}
}

void func_275()
{
	int iVar0;
	
	iVar0 = Global_2590607[func_21()];
	iVar0++;
	func_121(3668, iVar0, -1, 1);
}

void func_276()
{
	int iVar0;
	
	iVar0 = Global_2590613[func_21()];
	iVar0++;
	func_121(3667, iVar0, -1, 1);
}

void func_277(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = Global_2590616[func_21()];
	iVar0 = (iVar0 + iParam0);
	func_121(3669, iVar0, -1, 1);
	if (func_264(7666, -1, -1) < 24)
	{
		iVar1 = 1;
		while (iVar1 <= 24)
		{
			if (iVar0 >= func_278(iVar1))
			{
				iVar2 = iVar1;
			}
			iVar1++;
		}
		func_262(7666, iVar2, -1, 1);
	}
}

int func_278(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return Global_262145.f_16282;
			break;
		
		case 2:
			return Global_262145.f_16283;
			break;
		
		case 3:
			return Global_262145.f_16284;
			break;
		
		case 4:
			return Global_262145.f_16285;
			break;
		
		case 5:
			return Global_262145.f_16286;
			break;
		
		case 6:
			return Global_262145.f_16287;
			break;
		
		case 7:
			return Global_262145.f_16288;
			break;
		
		case 8:
			return Global_262145.f_16289;
			break;
		
		case 9:
			return Global_262145.f_16290;
			break;
		
		case 10:
			return Global_262145.f_16291;
			break;
		
		case 11:
			return Global_262145.f_16292;
			break;
		
		case 12:
			return Global_262145.f_16293;
			break;
		
		case 13:
			return Global_262145.f_16294;
			break;
		
		case 14:
			return Global_262145.f_16295;
			break;
		
		case 15:
			return Global_262145.f_16296;
			break;
		
		case 16:
			return Global_262145.f_16297;
			break;
		
		case 17:
			return Global_262145.f_16298;
			break;
		
		case 18:
			return Global_262145.f_16299;
			break;
		
		case 19:
			return Global_262145.f_16300;
			break;
		
		case 20:
			return Global_262145.f_16301;
			break;
		
		case 21:
			return Global_262145.f_16302;
			break;
		
		case 22:
			return Global_262145.f_16303;
			break;
		
		case 23:
			return Global_262145.f_16304;
			break;
		
		case 24:
			return Global_262145.f_16305;
			break;
	}
	return 0;
}

var func_279(int iParam0)
{
	if (iParam0 >= Global_262145.f_15336)
	{
		return Global_262145.f_15357;
	}
	else if (iParam0 >= Global_262145.f_15335)
	{
		return Global_262145.f_15356;
	}
	else if (iParam0 >= Global_262145.f_15334)
	{
		return Global_262145.f_15355;
	}
	else if (iParam0 >= Global_262145.f_15333)
	{
		return Global_262145.f_15354;
	}
	else if (iParam0 >= Global_262145.f_15332)
	{
		return Global_262145.f_15353;
	}
	else if (iParam0 >= Global_262145.f_15331)
	{
		return Global_262145.f_15352;
	}
	else if (iParam0 >= Global_262145.f_15330)
	{
		return Global_262145.f_15351;
	}
	else if (iParam0 >= Global_262145.f_15329)
	{
		return Global_262145.f_15350;
	}
	else if (iParam0 >= Global_262145.f_15328)
	{
		return Global_262145.f_15349;
	}
	else if (iParam0 >= Global_262145.f_15327)
	{
		return Global_262145.f_15348;
	}
	else if (iParam0 >= Global_262145.f_15326)
	{
		return Global_262145.f_15347;
	}
	else if (iParam0 >= Global_262145.f_15325)
	{
		return Global_262145.f_15346;
	}
	else if (iParam0 >= Global_262145.f_15324)
	{
		return Global_262145.f_15345;
	}
	else if (iParam0 >= Global_262145.f_15323)
	{
		return Global_262145.f_15344;
	}
	else if (iParam0 >= Global_262145.f_15322)
	{
		return Global_262145.f_15343;
	}
	else if (iParam0 >= Global_262145.f_15321)
	{
		return Global_262145.f_15342;
	}
	else if (iParam0 >= Global_262145.f_15320)
	{
		return Global_262145.f_15341;
	}
	else if (iParam0 >= Global_262145.f_15319)
	{
		return Global_262145.f_15340;
	}
	else if (iParam0 >= Global_262145.f_15318)
	{
		return Global_262145.f_15339;
	}
	else if (iParam0 >= Global_262145.f_15317)
	{
		return Global_262145.f_15338;
	}
	return Global_262145.f_15337;
}

int func_280(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (func_287(iParam0))
	{
		iVar2 = 1;
		while (iVar2 <= 6)
		{
			iVar3 = iVar2;
			if (func_286(iParam0, iVar3))
			{
				iVar0 = (iVar0 + func_285(iVar3));
				iVar1++;
			}
			iVar2++;
		}
		if (iVar1 < func_281(iParam0))
		{
			iVar2 = 0;
			while (iVar2 <= (func_281(iParam0) - iVar1))
			{
				iVar0 = (iVar0 + func_285(unk_0x344C570D6F8700DF(1, 6)));
				iVar2++;
			}
		}
	}
	return iVar0;
}

int func_281(int iParam0)
{
	int iVar0;
	
	if (func_284(iParam0))
	{
		iVar0 = func_282(func_283(iParam0));
		return func_124(iVar0, -1, 0);
	}
	return 0;
}

int func_282(int iParam0)
{
	if (iParam0 == 0)
	{
		return 3647;
	}
	else if (iParam0 == 1)
	{
		return 3648;
	}
	else if (iParam0 == 2)
	{
		return 3649;
	}
	else if (iParam0 == 3)
	{
		return 3650;
	}
	else if (iParam0 == 4)
	{
		return 3651;
	}
	return 3647;
}

int func_283(int iParam0)
{
	int iVar0;
	
	if (func_284(iParam0))
	{
		iVar0 = 0;
		while (iVar0 <= 4)
		{
			if (Global_1590682[unk_0x460153A63B9477BC() /*883*/].f_274.f_106[iVar0 /*3*/] == iParam0)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return -1;
}

int func_284(int iParam0)
{
	if (iParam0 < 1 || iParam0 > 22)
	{
		return 0;
	}
	return 1;
}

int func_285(int iParam0)
{
	if (iParam0 == 1)
	{
		return Global_262145.f_15536;
	}
	else if (iParam0 == 2)
	{
		return Global_262145.f_15534;
	}
	else if (iParam0 == 3)
	{
		return Global_262145.f_15538;
	}
	else if (iParam0 == 4)
	{
		return Global_262145.f_15532;
	}
	else if (iParam0 == 5)
	{
		return Global_262145.f_15530;
	}
	else if (iParam0 == 6)
	{
		return Global_262145.f_15540;
	}
	return 0;
}

int func_286(int iParam0, int iParam1)
{
	int iVar0;
	
	if (func_284(iParam0))
	{
		iVar0 = 0;
		while (iVar0 < 6)
		{
			if (Global_1677993[iVar0] == iParam1 && Global_1678000[iVar0] == iParam0)
			{
				return 1;
			}
			iVar0++;
		}
	}
	return 0;
}

int func_287(int iParam0)
{
	int iVar0;
	
	if (func_284(iParam0))
	{
		iVar0 = 0;
		while (iVar0 <= 4)
		{
			if (Global_1590682[unk_0x460153A63B9477BC() /*883*/].f_274.f_106[iVar0 /*3*/] == iParam0)
			{
				return 1;
			}
			iVar0++;
		}
	}
	return 0;
}

void func_288()
{
	int iVar0;
	
	iVar0 = Global_2590604[func_21()];
	iVar0++;
	Global_2590604[func_21()] = iVar0;
	func_121(3666, iVar0, -1, 1);
}

void func_289()
{
	int iVar0;
	int iVar1;
	
	iVar0 = Global_2590601[func_21()];
	iVar1 = Global_2590610[func_21()];
	iVar0++;
	iVar1++;
	Global_2590601[func_21()] = iVar0;
	Global_2590610[func_21()] = iVar1;
	Global_1590682[unk_0x460153A63B9477BC() /*883*/].f_274.f_128 = iVar1;
	func_121(3664, iVar0, -1, 1);
	func_121(3665, iVar1, -1, 1);
}

void func_290()
{
	if (func_141())
	{
		Global_2452679.f_3074.f_134 = 0;
		Global_1630317[unk_0x460153A63B9477BC() /*595*/].f_11.f_422 = Global_2452679.f_3074.f_134;
	}
}

void func_291()
{
	if (func_141())
	{
		if (Global_2452679.f_3074.f_134 < 10)
		{
			Global_2452679.f_3074.f_134++;
			Global_1630317[unk_0x460153A63B9477BC() /*595*/].f_11.f_422 = Global_2452679.f_3074.f_134;
		}
	}
}

void func_292()
{
	if (func_141())
	{
		if (Global_2452679.f_3074.f_134 > 0)
		{
			Global_2452679.f_3074.f_134 = (Global_2452679.f_3074.f_134 - 1);
			Global_1630317[unk_0x460153A63B9477BC() /*595*/].f_11.f_422 = Global_2452679.f_3074.f_134;
		}
	}
}

int func_293(int iParam0)
{
	return Global_1630317[iParam0 /*595*/].f_11.f_28;
}

int func_294(int iParam0)
{
	switch (iParam0)
	{
		case 167:
		case 168:
		case 178:
		case 188:
			return 1;
		
		case 225:
		case 226:
		case 229:
		case 230:
		case 233:
		case 237:
		case 158:
		case 256:
		case 258:
			if (func_99(1) && !func_210(1))
			{
				if (func_295(func_11()))
				{
					return 1;
				}
			}
			break;
	}
	return 0;
}

bool func_295(int iParam0)
{
	if (iParam0 == -1)
	{
		return 0;
	}
	return unk_0xCE990E643CD9D0E5(Global_1590682[iParam0 /*883*/].f_274.f_26, 26);
}

int func_296(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		return Global_262145.f_18289;
	}
	switch (iParam0)
	{
		case 142:
			return round((IntToFloat(Global_262145.f_12514) * Global_262145.f_12519));
		
		case 157:
			return 0;
		
		case 159:
			return round((IntToFloat(Global_262145.f_12464) * Global_262145.f_12469));
		
		case 151:
			return 0;
		
		case 148:
			return round((IntToFloat(Global_262145.f_12491) * Global_262145.f_12495));
		
		case 164:
			return round((IntToFloat(Global_262145.f_12504) * Global_262145.f_12508));
		
		case 152:
			return round((IntToFloat(Global_262145.f_12526) * Global_262145.f_12531));
		
		case 153:
			return round((IntToFloat(Global_262145.f_12688) * Global_262145.f_12689));
		
		case 154:
			return round((IntToFloat(Global_262145.f_12694) * Global_262145.f_12695));
		
		case 155:
			return round((IntToFloat(Global_262145.f_12692) * Global_262145.f_12693));
		
		case 160:
			return round((IntToFloat(Global_262145.f_12686) * Global_262145.f_12687));
		
		case 162:
			return round((IntToFloat(Global_262145.f_12690) * Global_262145.f_12691));
		
		case 163:
			return round((IntToFloat(Global_262145.f_12684) * Global_262145.f_12685));
		
		case 170:
			return 0;
		
		case 171:
			return Global_262145.f_15059;
		
		case 172:
			return Global_262145.f_15075;
		
		case 173:
			return Global_262145.f_15018;
		
		case 166:
			return 0;
		
		case 179:
			return Global_262145.f_18297;
		
		case 180:
			return Global_262145.f_18172;
		
		case 182:
			return 0;
		
		case 183:
			return Global_262145.f_18180;
		
		case 185:
			return Global_262145.f_18189;
		
		case 186:
			return 0;
		
		case 189:
			return Global_262145.f_18385;
		
		case 190:
			return 0;
		
		case 191:
			return 0;
		
		case 192:
			return 0;
		
		case 193:
			return Global_262145.f_18402;
		
		case 194:
			return 0;
		
		case 195:
			return 0;
		
		case 197:
			return Global_262145.f_18249;
		
		case 198:
			return 0;
		
		case 199:
			return Global_262145.f_18433;
		
		case 200:
			return 0;
		
		case 201:
			return Global_262145.f_18311;
		
		case 205:
			return Global_262145.f_18420;
		
		case 207:
			return 0;
		
		case 208:
			return Global_262145.f_18278;
		
		case 209:
			return 0;
		
		case 210:
			return Global_262145.f_18415;
		
		case 211:
			return Global_262145.f_18379;
		
		case 214:
			return Global_262145.f_18973;
		
		case 215:
			return Global_262145.f_18983;
		
		case 216:
			return Global_262145.f_18993;
		
		case 217:
			return Global_262145.f_19002;
		
		case 218:
			return Global_262145.f_19011;
		
		case 219:
			return Global_262145.f_19027;
		
		case 241:
			return Global_262145.f_24103;
		
		case 242:
			return Global_262145.f_24099;
		
		case 248:
			return Global_262145.f_24102;
		
		case 244:
			return Global_262145.f_24100;
		
		case 239:
			return Global_262145.f_24104;
		
		case 240:
			return Global_262145.f_24105;
		
		case 243:
			return Global_262145.f_26372;
		
		default:
	}
	return 0;
}

int func_297(int iParam0, bool bParam1, bool bParam2)
{
	if (bParam2)
	{
		return Global_262145.f_18290;
	}
	switch (iParam0)
	{
		case 142:
			return round((IntToFloat(Global_262145.f_12515) * Global_262145.f_12520));
		
		case 157:
			return 0;
		
		case 159:
			return round((IntToFloat(Global_262145.f_12465) * Global_262145.f_12470));
		
		case 151:
			return 0;
		
		case 148:
			return round((IntToFloat(Global_262145.f_12492) * Global_262145.f_12496));
		
		case 164:
			return round((IntToFloat(Global_262145.f_12505) * Global_262145.f_12509));
		
		case 152:
			return round((IntToFloat(Global_262145.f_12527) * Global_262145.f_12532));
		
		case 153:
			return round((IntToFloat(Global_262145.f_12564) * Global_262145.f_12567));
		
		case 154:
			return round((IntToFloat(Global_262145.f_12610) * Global_262145.f_12613));
		
		case 155:
			return round((IntToFloat(Global_262145.f_12600) * Global_262145.f_12603));
		
		case 160:
			return round((IntToFloat(Global_262145.f_12555) * Global_262145.f_12558));
		
		case 162:
			return round((IntToFloat(Global_262145.f_12575) * Global_262145.f_12580));
		
		case 163:
			return round((IntToFloat(Global_262145.f_12540) * Global_262145.f_12543));
		
		case 170:
			return Global_262145.f_15001;
		
		case 171:
			return Global_262145.f_15060;
		
		case 172:
			return Global_262145.f_15076;
		
		case 173:
			return Global_262145.f_15019;
		
		case 166:
			return 0;
		
		case 167:
			return Global_262145.f_17098;
		
		case 168:
			return Global_262145.f_17097;
		
		case 179:
			return Global_262145.f_18298;
		
		case 180:
			return Global_262145.f_18173;
		
		case 182:
			return 0;
		
		case 183:
			return Global_262145.f_18181;
		
		case 185:
			return Global_262145.f_18190;
		
		case 186:
			return 0;
		
		case 189:
			return Global_262145.f_18386;
		
		case 190:
			return 0;
		
		case 191:
			return 0;
		
		case 192:
			return 0;
		
		case 193:
			return Global_262145.f_18403;
		
		case 194:
			return 0;
		
		case 195:
			return 0;
		
		case 197:
			return Global_262145.f_18250;
		
		case 198:
			return 0;
		
		case 199:
			return Global_262145.f_18434;
		
		case 200:
			return 0;
		
		case 201:
			return Global_262145.f_18312;
		
		case 205:
			return Global_262145.f_18421;
		
		case 207:
			return 0;
		
		case 208:
			return Global_262145.f_18279;
		
		case 209:
			return 0;
		
		case 210:
			return Global_262145.f_18416;
		
		case 211:
			return Global_262145.f_18380;
		
		case 214:
			return Global_262145.f_18974;
		
		case 215:
			return Global_262145.f_18984;
		
		case 216:
			return Global_262145.f_18994;
		
		case 217:
			return Global_262145.f_19003;
		
		case 218:
			return Global_262145.f_19012;
		
		case 219:
			return Global_262145.f_19028;
		
		case 178:
			if (func_141())
			{
				return Global_262145.f_18851;
			}
			else if (bParam1)
			{
				return Global_262145.f_18852;
			}
			break;
		
		case 188:
			if (func_141())
			{
				return Global_262145.f_18935;
			}
			else if (bParam1)
			{
				return Global_262145.f_18936;
			}
			break;
		
		case 225:
			if (func_141() && !func_127())
			{
				if (func_295(unk_0x460153A63B9477BC()))
				{
					return Global_262145.f_21058;
				}
				else
				{
					return Global_262145.f_21059;
				}
			}
			else if (func_127())
			{
				return Global_262145.f_21060;
			}
			break;
		
		case 226:
			if (func_141() && !func_127())
			{
				if (func_295(unk_0x460153A63B9477BC()))
				{
					return Global_262145.f_21038;
				}
				else
				{
					return Global_262145.f_21039;
				}
			}
			else if (func_127())
			{
				return Global_262145.f_21040;
			}
			break;
		
		case 227:
			if (func_141() && !func_127())
			{
				if (func_295(unk_0x460153A63B9477BC()))
				{
					return Global_262145.f_21050;
				}
				else
				{
					return Global_262145.f_21051;
				}
			}
			else if (func_127())
			{
				return Global_262145.f_21052;
			}
			break;
		
		case 229:
			if (func_141() && !func_127())
			{
				if (func_295(unk_0x460153A63B9477BC()))
				{
					return Global_262145.f_22217;
				}
				else
				{
					return Global_262145.f_22218;
				}
			}
			else if (func_127())
			{
				return Global_262145.f_22219;
			}
			break;
		
		case 230:
			if (func_141() && !func_127())
			{
				if (func_295(unk_0x460153A63B9477BC()))
				{
					return Global_262145.f_22313;
				}
				else
				{
					return Global_262145.f_22314;
				}
			}
			else if (func_127())
			{
				return Global_262145.f_22315;
			}
			break;
		
		case 233:
			if (func_141() && !func_127())
			{
				if (func_295(unk_0x460153A63B9477BC()))
				{
					return Global_262145.f_22789;
				}
				else
				{
					return Global_262145.f_22790;
				}
			}
			else if (func_127())
			{
				return Global_262145.f_22788;
			}
			break;
		
		case 241:
			return Global_262145.f_24110;
		
		case 242:
			return Global_262145.f_24106;
		
		case 244:
			return Global_262145.f_24107;
		
		case 248:
			return Global_262145.f_24109;
		
		case 239:
			return Global_262145.f_24111;
		
		case 240:
			return Global_262145.f_24112;
		
		case 237:
			if (func_141() && !func_127())
			{
				if (func_295(unk_0x460153A63B9477BC()))
				{
					return Global_262145.f_23952;
				}
				else
				{
					return Global_262145.f_23953;
				}
			}
			else if (func_127())
			{
				return Global_262145.f_23954;
			}
			break;
		
		case 238:
			if (func_141() && !func_127())
			{
				if (func_295(unk_0x460153A63B9477BC()))
				{
					return Global_262145.f_24063;
				}
				else
				{
					return Global_262145.f_24064;
				}
			}
			else if (func_127())
			{
				return Global_262145.f_24065;
			}
			break;
		
		case 249:
			if (func_141() && !func_127())
			{
				if (func_295(unk_0x460153A63B9477BC()))
				{
					return Global_262145.f_24079;
				}
				else
				{
					return Global_262145.f_24080;
				}
			}
			else if (func_127())
			{
				return Global_262145.f_24081;
			}
			break;
		
		case 243:
			if (func_141() && !func_127())
			{
				if (func_295(unk_0x460153A63B9477BC()))
				{
					return Global_262145.f_26375;
				}
				else
				{
					return Global_262145.f_26376;
				}
			}
			else if (func_127())
			{
				return Global_262145.f_26375;
			}
			break;
		
		case 158:
			if (func_141() && !func_127())
			{
				if (func_295(unk_0x460153A63B9477BC()))
				{
					return 1500;
				}
				else
				{
					return 1000;
				}
			}
			else if (func_127())
			{
				return 1500;
			}
			break;
	}
	return 0;
}

void func_298(int iParam0, var uParam1, var uParam2)
{
	int iVar0;
	
	if (iParam0 == 157)
	{
		*uParam1 = 1f;
		*uParam2 = 1f;
		return;
	}
	if (func_299(iParam0))
	{
		if (!func_141())
		{
			*uParam1 = 1f;
			*uParam2 = Global_262145.f_12408;
		}
		else
		{
			*uParam1 = 1f;
			*uParam2 = 1f;
		}
		return;
	}
	if (func_28(unk_0x460153A63B9477BC(), 1))
	{
		if (func_96(iParam0))
		{
			*uParam1 = (Global_262145.f_18149 / 100f);
			*uParam2 = (Global_262145.f_18149 / 100f);
		}
		else if (iParam0 == 242)
		{
			*uParam1 = Global_262145.f_24113;
			*uParam2 = Global_262145.f_24113;
		}
		else if (iParam0 == 244)
		{
			*uParam1 = Global_262145.f_24114;
			*uParam2 = Global_262145.f_24114;
		}
		else if (iParam0 == 248)
		{
			*uParam1 = Global_262145.f_24116;
			*uParam2 = Global_262145.f_24116;
		}
		else if (iParam0 == 241)
		{
			*uParam1 = Global_262145.f_24117;
			*uParam2 = Global_262145.f_24117;
		}
		else if (iParam0 == 239)
		{
			*uParam1 = Global_262145.f_24118;
			*uParam2 = Global_262145.f_24118;
		}
		else if (iParam0 == 240)
		{
			*uParam1 = Global_262145.f_24119;
			*uParam2 = Global_262145.f_24119;
		}
		else
		{
			*uParam1 = Global_262145.f_12405;
			*uParam2 = Global_262145.f_12404;
		}
	}
	else if (func_96(iParam0))
	{
		*uParam1 = (Global_262145.f_18150 / 100f);
		*uParam2 = (Global_262145.f_18150 / 100f);
	}
	else if (iParam0 == 242)
	{
		*uParam1 = Global_262145.f_24120;
		*uParam2 = Global_262145.f_24120;
	}
	else if (iParam0 == 244)
	{
		*uParam1 = Global_262145.f_24121;
		*uParam2 = Global_262145.f_24121;
	}
	else if (iParam0 == 248)
	{
		*uParam1 = Global_262145.f_24123;
		*uParam2 = Global_262145.f_24123;
	}
	else if (iParam0 == 241)
	{
		*uParam1 = Global_262145.f_24124;
		*uParam2 = Global_262145.f_24124;
	}
	else if (iParam0 == 239)
	{
		*uParam1 = Global_262145.f_24125;
		*uParam2 = Global_262145.f_24125;
	}
	else if (iParam0 == 240)
	{
		*uParam1 = Global_262145.f_24126;
		*uParam2 = Global_262145.f_24126;
	}
	else
	{
		*uParam1 = Global_262145.f_12407;
		*uParam2 = Global_262145.f_12406;
	}
	iVar0 = func_63();
	if (iVar0 != func_10())
	{
		if (func_48(unk_0x460153A63B9477BC(), iVar0, 1))
		{
			*uParam1 = 1f;
			*uParam2 = 1f;
		}
	}
}

int func_299(int iParam0)
{
	switch (iParam0)
	{
		case 160:
		case 162:
		case 153:
		case 154:
		case 155:
		case 163:
		case 171:
		case 172:
			return 1;
		
		default:
	}
	return 0;
}

int func_300()
{
	if ((func_36(unk_0x460153A63B9477BC(), 21) || func_36(unk_0x460153A63B9477BC(), 22)) || func_305())
	{
		return 1;
	}
	if (func_302())
	{
		func_301(22);
		return 1;
	}
	return 0;
}

void func_301(int iParam0)
{
	unk_0xBE20AB8238688965(&(Global_1630317[unk_0x460153A63B9477BC() /*595*/].f_11.f_4), iParam0);
}

int func_302()
{
	if (func_33(unk_0x460153A63B9477BC(), 0))
	{
		if (((func_26() && !func_304()) || func_22(unk_0x460153A63B9477BC(), 21)) || func_22(unk_0x460153A63B9477BC(), 25))
		{
			return 1;
		}
		else
		{
			func_303(27);
		}
	}
	return 0;
}

void func_303(int iParam0)
{
	unk_0xD2459066EA58CE43(&(Global_1630317[unk_0x460153A63B9477BC() /*595*/].f_11.f_4), iParam0);
}

bool func_304()
{
	return Global_1312436.f_1;
}

bool func_305()
{
	return func_252(377, -1);
}

int func_306()
{
	return 0;
}

void func_307()
{
	char* sVar0;
	char* sVar1;
	struct<14> Var2;
	
	if (func_349())
	{
		return;
	}
	if (func_348())
	{
		func_341();
	}
	if (func_340())
	{
		func_339();
	}
	sVar0 = "GB_WORK_OVER";
	sVar1 = "GB_WORK_OVER";
	if (func_6(unk_0x460153A63B9477BC(), 1))
	{
		sVar0 = "BK_RUN_OVER";
	}
	if ((!unk_0xCE990E643CD9D0E5(Local_84.f_1, 2) && !unk_0xCE990E643CD9D0E5(Local_84.f_1, 4)) && !unk_0xCE990E643CD9D0E5(Local_84.f_1, 3))
	{
		if (unk_0xCE990E643CD9D0E5(Local_84.f_1, 7))
		{
			sVar1 = "GBTER_B_SSH";
			if (Local_84.f_10)
			{
				sVar1 = "GBTER_B_SSH_A";
			}
			if (Local_84.f_10)
			{
				func_331(101, sVar0, sVar1, func_333(), func_332(unk_0x460153A63B9477BC()), func_37(), func_10(), func_10(), 0, -1, -1, -1, 2, -1, 2);
			}
			else
			{
				func_330(87, func_37(), -1, sVar1, sVar0, 1, -1, 2, 0);
			}
		}
		else if (func_329() != unk_0x460153A63B9477BC())
		{
			sVar1 = "GBTER_BIG_COMS";
			if (func_6(unk_0x460153A63B9477BC(), 1))
			{
				sVar1 = "GBTER_B_SSO";
				if (Local_84.f_10)
				{
					sVar1 = "GBTER_B_SSO_A";
				}
			}
			if (Local_84.f_10)
			{
				func_331(101, sVar0, sVar1, func_333(), func_332(unk_0x460153A63B9477BC()), func_329(), func_37(), func_10(), 0, -1, -1, -1, 2, -1, 2);
			}
			else
			{
				func_328(91, func_329(), func_37(), -1, sVar1, sVar0, 1, -1, 2, 0, 0, 0);
			}
		}
		else
		{
			sVar1 = "GBTER_BIG_WINS";
			if (func_6(unk_0x460153A63B9477BC(), 1))
			{
				sVar1 = "GBTER_B_SSW";
				if (Local_84.f_10)
				{
					sVar1 = "GBTER_B_SSW_A";
				}
			}
			if (Local_84.f_10)
			{
				func_331(101, "GB_WINNER", sVar1, func_333(), func_332(unk_0x460153A63B9477BC()), func_37(), func_10(), func_10(), 0, -1, -1, -1, 2, -1, 2);
			}
			else
			{
				func_330(87, func_37(), -1, sVar1, "GB_WINNER", 1, -1, 2, 0);
			}
		}
	}
	else if (unk_0xCE990E643CD9D0E5(Local_84.f_1, 3))
	{
	}
	else
	{
		sVar1 = "GBTER_BIG_FLEE";
		if (func_6(unk_0x460153A63B9477BC(), 1))
		{
			sVar1 = "GBTER_B_BFLEE";
		}
		func_309(88, sVar0, sVar1, 1, -1, 2, 1, 0);
		if (unk_0xCE990E643CD9D0E5(Local_84.f_1, 4) || func_31(func_37(), 1, 0))
		{
			if (unk_0x460153A63B9477BC() == func_63())
			{
				Var2.f_10 = func_63();
				Var2.f_2 = 546379482;
				func_308(Var2, func_46(func_37()));
			}
		}
	}
}

void func_308(struct<2> Param0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, int iParam13)
{
	Param0 = -1949011582;
	Param0.f_1 = unk_0x460153A63B9477BC();
	if (!iParam13 == 0)
	{
		unk_0xB802750B43D4047C(1, &Param0, 14, iParam13);
	}
}

int func_309(int iParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7)
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
	func_327(iParam0, &Var0, -1, sParam2, sParam1);
	Var0.f_71 = iParam3;
	Var0.f_6 = iParam4;
	Var0.f_72 = iParam5;
	Var0.f_16 = iParam6;
	if (iParam7 != 0)
	{
		func_325(&(Var0.f_69), iParam7);
	}
	return func_310(&Var0);
}

int func_310(var uParam0)
{
	int iVar0;
	
	if (uParam0->f_1 == 1)
	{
		if (Global_2440049.f_3156)
		{
			return 0;
		}
	}
	func_324(uParam0, uParam0->f_17);
	func_321(uParam0);
	if (func_88())
	{
		func_321(uParam0);
	}
	if (func_320(uParam0->f_1))
	{
		func_313();
		if (Global_2440049.f_2834[0 /*80*/].f_2 == 0)
		{
			Global_2440049.f_2834[0 /*80*/] = { *uParam0 };
			if (func_312(uParam0->f_69, 8192))
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
				func_313();
			}
			return 1;
		}
		else
		{
			if (uParam0->f_1 == 1)
			{
				func_325(&(Global_2440049.f_2834[iVar0 /*80*/].f_69), 2);
				Global_2440049.f_2834[iVar0 /*80*/].f_2 = 5;
			}
			if (uParam0->f_1 == 86 && !func_312(uParam0->f_69, 128))
			{
				if (func_311(Global_2440049.f_2834[iVar0 /*80*/].f_1))
				{
					Global_2440049.f_2834[iVar0 /*80*/].f_2 = 5;
					func_325(&(Global_2440049.f_2834[iVar0 /*80*/].f_69), 1);
				}
			}
		}
		iVar0++;
	}
	return 0;
}

int func_311(int iParam0)
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

bool func_312(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

void func_313()
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
	func_314();
	if (bVar0)
	{
		Global_77101 = 0;
	}
}

void func_314()
{
	Global_2440049.f_3158 = 0;
	Global_2440049.f_3158.f_578 = 0;
	func_318(&(Global_2440049.f_3158.f_1));
	Global_2440049.f_3158.f_1.f_1 = 0;
	func_315(&(Global_2440049.f_3158.f_1), 1);
}

void func_315(var uParam0, int iParam1)
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
				if (unk_0x03DB5C6AABF8DA46() && !func_317(0))
				{
					unk_0xFD45D90342D2A0CD(800);
				}
			}
		}
	}
	func_316(0);
}

void func_316(int iParam0)
{
	Global_77093 = iParam0;
	Global_77094 = iParam0;
}

bool func_317(bool bParam0)
{
	if (!bParam0 && unk_0x7B70881748D166CD(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return unk_0xCE990E643CD9D0E5(Global_77081, 0);
}

void func_318(var uParam0)
{
	func_319(uParam0);
	uParam0->f_570 = 0;
	uParam0->f_31 = 0;
	uParam0->f_56 = 0;
	uParam0->f_567 = 0;
	uParam0->f_569 = 0;
}

void func_319(var uParam0)
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

int func_320(int iParam0)
{
	if (((((((((((((((((((((((iParam0 == 3 || iParam0 == 4) || iParam0 == 5) || iParam0 == 6) || iParam0 == 11) || iParam0 == 12) || iParam0 == 28) || iParam0 == 29) || iParam0 == 30) || iParam0 == 24) || iParam0 == 32) || iParam0 == 31) || iParam0 == 26) || iParam0 == 25) || iParam0 == 56) || iParam0 == 7) || iParam0 == 8) || iParam0 == 9) || iParam0 == 10) || iParam0 == 104) || iParam0 == 100) || iParam0 == 103) || iParam0 == 105) || iParam0 == 110)
	{
		return 1;
	}
	return 0;
}

void func_321(var uParam0)
{
	if (func_323(uParam0->f_1))
	{
		uParam0->f_72 = func_322();
	}
}

int func_322()
{
	return 21;
}

int func_323(int iParam0)
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

void func_324(var uParam0, int iParam1)
{
	if (func_323(uParam0->f_1))
	{
		uParam0->f_73 = 1;
	}
	if (iParam1 == func_10() || !func_9(iParam1, 0, 1))
	{
		return;
	}
	if (func_311(uParam0->f_1))
	{
		if (uParam0->f_71 == 1)
		{
			uParam0->f_73 = func_66(iParam1, -2, 0, 0, 0);
		}
	}
}

void func_325(var uParam0, int iParam1)
{
	func_326(uParam0, iParam1);
}

void func_326(var uParam0, var uParam1)
{
	*uParam0 = (*uParam0 || uParam1);
}

void func_327(var uParam0, var uParam1, int iParam2, char* sParam3, char* sParam4)
{
	uParam1->f_17 = func_10();
	uParam1->f_18 = func_10();
	uParam1->f_19 = func_10();
	uParam1->f_20 = func_10();
	uParam1->f_1 = uParam0;
	uParam1->f_2 = 1;
	StringCopy(&(uParam1->f_21), sParam4, 16);
	StringCopy(&(uParam1->f_8), sParam3, 32);
	uParam1->f_16 = 1;
	uParam1->f_3 = iParam2;
	uParam1->f_71 = 1;
	uParam1->f_74 = 1;
	uParam1->f_75 = 1;
	uParam1->f_76 = 0;
	uParam1->f_77 = 0;
	uParam1->f_73 = 0;
	StringCopy(&(uParam1->f_25), "", 64);
	StringCopy(&(uParam1->f_41), "", 64);
}

int func_328(int iParam0, int iParam1, int iParam2, int iParam3, char* sParam4, char* sParam5, int iParam6, int iParam7, int iParam8, char* sParam9, char* sParam10, char* sParam11)
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
	func_327(iParam0, &Var0, iParam3, sParam4, sParam5);
	Var0.f_17 = iParam1;
	Var0.f_18 = iParam2;
	Var0.f_71 = iParam6;
	Var0.f_6 = iParam7;
	Var0.f_72 = iParam8;
	StringCopy(&(Var0.f_25), sParam9, 64);
	StringCopy(&(Var0.f_41), sParam10, 64);
	StringCopy(&(Var0.f_57), sParam11, 16);
	return func_310(&Var0);
}

int func_329()
{
	return Local_84.f_3;
}

int func_330(int iParam0, int iParam1, int iParam2, char* sParam3, char* sParam4, int iParam5, int iParam6, int iParam7, int iParam8)
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
	func_327(iParam0, &Var0, iParam2, sParam3, sParam4);
	Var0.f_17 = iParam1;
	Var0.f_71 = iParam5;
	Var0.f_6 = iParam6;
	Var0.f_72 = iParam7;
	if (iParam8 != 0)
	{
		func_325(&(Var0.f_69), iParam8);
	}
	return func_310(&Var0);
}

int func_331(int iParam0, char* sParam1, char* sParam2, char* sParam3, var uParam4, int iParam5, int iParam6, int iParam7, char* sParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14)
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
	func_327(iParam0, &Var0, iParam9, sParam2, sParam1);
	Var0.f_4 = iParam10;
	Var0.f_5 = iParam11;
	Var0.f_17 = iParam5;
	Var0.f_18 = iParam6;
	Var0.f_19 = iParam7;
	StringCopy(&(Var0.f_25), sParam3, 64);
	StringCopy(&(Var0.f_57), sParam8, 16);
	Var0.f_73 = uParam4;
	Var0.f_71 = uParam4;
	Var0.f_6 = iParam13;
	Var0.f_72 = iParam12;
	if (iParam14 != 2)
	{
		Var0.f_71 = iParam14;
	}
	func_325(&(Var0.f_69), 4);
	return func_310(&Var0);
}

int func_332(int iParam0)
{
	int iVar0;
	
	iVar0 = func_84(iParam0);
	if (iVar0 != -1)
	{
		return func_82(iVar0);
	}
	return 1;
}

char* func_333()
{
	int iVar0;
	char* sVar1;
	
	iVar0 = func_27(unk_0x460153A63B9477BC());
	if (iVar0 != func_10())
	{
		if (iVar0 != unk_0x460153A63B9477BC())
		{
			if (((func_36(iVar0, 28) || func_36(unk_0x460153A63B9477BC(), 28)) || func_338(iVar0)) && !func_337(iVar0))
			{
				return func_335(iVar0, 0);
			}
			if (!unk_0xC6C08C02733D02C8() && !unk_0xB454B9D1010ED3BA(0, -1, 1))
			{
				return func_335(iVar0, 0);
			}
		}
		sVar1 = func_334(&(Global_1630317[iVar0 /*595*/].f_11.f_104));
		if (unk_0x7BCC91F3C1CF24E8(sVar1))
		{
			return func_335(iVar0, 0);
		}
		else
		{
			return sVar1;
		}
	}
	return "";
}

var func_334(var uParam0)
{
	return uParam0;
}

char* func_335(int iParam0, bool bParam1)
{
	if (!bParam1)
	{
		if (func_6(iParam0, 1))
		{
			return func_336();
		}
	}
	return unk_0x7C774D8CB8DC6FE3("GB_REST_ACC");
}

char* func_336()
{
	return unk_0x7C774D8CB8DC6FE3("GB_REST_ACCM");
}

int func_337(int iParam0)
{
	struct<13> Var0;
	
	Var0 = { func_180(iParam0) };
	if (unk_0xC6C08C02733D02C8())
	{
		if (unk_0xF9A94F315B890564(0))
		{
			if (unk_0xA20DDBBB15EC6235(&Var0))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_338(int iParam0)
{
	struct<13> Var0;
	
	if (iParam0 != func_10())
	{
		Var0 = { func_180(iParam0) };
		if (unk_0xDCA0815D900F27F8() || unk_0xF8EDFF98A9C94C74())
		{
			if (unk_0xF9A94F315B890564(0))
			{
				return 0;
			}
		}
		else if (unk_0xC6C08C02733D02C8())
		{
			if (unk_0xF9A94F315B890564(0))
			{
				if (unk_0xA20DDBBB15EC6235(&Var0))
				{
					return 0;
				}
			}
		}
	}
	return 1;
}

void func_339()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		if (Global_2440049.f_2834[iVar0 /*80*/].f_2 != 0)
		{
			Global_2440049.f_2834[iVar0 /*80*/].f_2 = 5;
			func_325(&(Global_2440049.f_2834[iVar0 /*80*/].f_69), 1);
		}
		iVar0++;
	}
}

bool func_340()
{
	return Global_2440049.f_2834[0 /*80*/].f_1 != 0;
}

void func_341()
{
	if (!func_347())
	{
		return;
	}
	if (!unk_0x856D5567211886A2(unk_0x6C5C6B207AA78253()) == Global_1312603.f_9)
	{
		return;
	}
	func_342();
}

void func_342()
{
	func_344();
	func_343(0);
}

void func_343(bool bParam0)
{
	bool bVar0;
	
	bVar0 = unk_0x25DDB354A40FFCDB();
	Global_1312603 = 20;
	StringCopy(&(Global_1312603.f_1), "", 32);
	Global_1312603.f_9 = 0;
	if (bVar0)
	{
		Global_1312603.f_10 = unk_0x6CAAB7E78B5D978A();
		Global_1312603.f_11 = unk_0x6CAAB7E78B5D978A();
	}
	StringCopy(&(Global_1312603.f_12), "", 16);
	StringCopy(&(Global_1312603.f_16), "", 64);
	StringCopy(&(Global_1312603.f_32), "", 64);
	Global_1312603.f_52 = 0;
	Global_1312603.f_53 = 0;
	Global_1312603.f_54 = 0;
	Global_1312603.f_55 = -1;
	Global_1312603.f_56 = 0;
	Global_1312603.f_59 = 0;
	if (bParam0)
	{
		return;
	}
}

void func_344()
{
	if (!func_346())
	{
	}
	if (func_347())
	{
		unk_0x6BF33E036B49E0DD(&(Global_1312603.f_12));
		func_345();
		unk_0x9F579D40FBAC4233();
	}
}

void func_345()
{
	switch (Global_1312603)
	{
		case 20:
			return;
		
		case 0:
			return;
		
		case 1:
			unk_0x42710E9E08FA375A(Global_1312603.f_52);
			return;
		
		case 2:
			unk_0x42710E9E08FA375A(Global_1312603.f_52);
			unk_0x42710E9E08FA375A(Global_1312603.f_53);
			return;
		
		case 3:
			unk_0x6A826E35A3096ED0(&(Global_1312603.f_16));
			return;
		
		case 4:
			unk_0x6A826E35A3096ED0(&(Global_1312603.f_16));
			unk_0x6A826E35A3096ED0(&(Global_1312603.f_32));
			return;
		
		case 5:
			unk_0x9EFD301E3BE8324E(&(Global_1312603.f_16));
			return;
		
		case 6:
			unk_0x7006FC1051C85FCA(Global_1312603.f_56);
			unk_0x9EFD301E3BE8324E(&(Global_1312603.f_16));
			return;
		
		case 7:
			unk_0x6A826E35A3096ED0(&(Global_1312603.f_16));
			return;
		
		case 8:
			unk_0x7006FC1051C85FCA(Global_1312603.f_56);
			unk_0x6A826E35A3096ED0(&(Global_1312603.f_16));
			return;
		
		case 9:
			unk_0x05CA0125610AB2F4(&(Global_1312603.f_16));
			return;
		
		case 10:
			unk_0x9EFD301E3BE8324E(&(Global_1312603.f_16));
			unk_0x9EFD301E3BE8324E(&(Global_1312603.f_32));
			return;
		
		case 12:
			unk_0x9EFD301E3BE8324E(&(Global_1312603.f_16));
			unk_0x6A826E35A3096ED0(&(Global_1312603.f_32));
			return;
		
		case 13:
			unk_0x7006FC1051C85FCA(Global_1312603.f_56);
			unk_0x6A826E35A3096ED0(&(Global_1312603.f_16));
			unk_0x7006FC1051C85FCA(Global_1312603.f_57);
			unk_0x6A826E35A3096ED0(&(Global_1312603.f_32));
			return;
		
		case 11:
			unk_0x05CA0125610AB2F4(&(Global_1312603.f_16));
			return;
		
		case 14:
			unk_0x7006FC1051C85FCA(Global_1312603.f_56);
			unk_0x9EFD301E3BE8324E(&(Global_1312603.f_16));
			unk_0x7006FC1051C85FCA(Global_1312603.f_56);
			unk_0x6A826E35A3096ED0(&(Global_1312603.f_32));
			return;
		
		case 15:
			unk_0x7006FC1051C85FCA(Global_1312603.f_56);
			unk_0x9EFD301E3BE8324E(&(Global_1312603.f_16));
			unk_0x7006FC1051C85FCA(Global_1312603.f_57);
			unk_0x6A826E35A3096ED0(&(Global_1312603.f_32));
			return;
		
		case 17:
			unk_0x9EFD301E3BE8324E(&(Global_1312603.f_16));
			unk_0x9EFD301E3BE8324E(&(Global_1312603.f_32));
			unk_0x7006FC1051C85FCA(Global_1312603.f_56);
			unk_0x6A826E35A3096ED0(&(Global_1312603.f_48));
			return;
		
		case 16:
			unk_0x7006FC1051C85FCA(Global_1312603.f_56);
			unk_0x9EFD301E3BE8324E(&(Global_1312603.f_16));
			return;
		
		case 19:
			unk_0x7006FC1051C85FCA(Global_1312603.f_56);
			unk_0x6A826E35A3096ED0(&(Global_1312603.f_16));
			return;
		
		case 18:
			unk_0x9EFD301E3BE8324E(&(Global_1312603.f_16));
			unk_0x7006FC1051C85FCA(Global_1312603.f_56);
			unk_0x6A826E35A3096ED0(&(Global_1312603.f_48));
			unk_0x9EFD301E3BE8324E(&(Global_1312603.f_32));
			return;
		
		default:
	}
}

int func_346()
{
	if (!func_347())
	{
		return 0;
	}
	unk_0xCD7691F7F3015C57(&(Global_1312603.f_12));
	func_345();
	return unk_0x5E0AC8AED85CE7CB();
}

int func_347()
{
	if (Global_1312603 == 20)
	{
		return 0;
	}
	return 1;
}

bool func_348()
{
	return func_347();
}

int func_349()
{
	if (!func_350(1, 1, 1, 0) || func_631())
	{
		return 1;
	}
	return 0;
}

int func_350(bool bParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (func_47(unk_0x460153A63B9477BC(), 29))
	{
		return 0;
	}
	if (func_22(unk_0x460153A63B9477BC(), 21))
	{
		return 0;
	}
	if (func_22(unk_0x460153A63B9477BC(), 25))
	{
		return 0;
	}
	if (bParam2)
	{
		if (unk_0xD0E70037A973A810())
		{
			return 0;
		}
	}
	if (!func_400(unk_0x460153A63B9477BC()))
	{
		return 0;
	}
	if (bParam0)
	{
		if (unk_0x450A8984AFF05042())
		{
			return 0;
		}
	}
	if (func_398(unk_0x460153A63B9477BC()))
	{
		return 0;
	}
	if (func_397())
	{
		return 0;
	}
	if (func_396())
	{
		return 0;
	}
	if (func_395())
	{
		return 0;
	}
	if (func_394())
	{
		return 0;
	}
	if (unk_0xFC559366953F62B3())
	{
		return 0;
	}
	if (func_392(unk_0x460153A63B9477BC()))
	{
		return 0;
	}
	if (!func_390())
	{
		return 0;
	}
	if (func_22(unk_0x460153A63B9477BC(), 0) || func_22(unk_0x460153A63B9477BC(), 3))
	{
		return 0;
	}
	if ((func_22(unk_0x460153A63B9477BC(), 12) || func_22(unk_0x460153A63B9477BC(), 14)) || func_22(unk_0x460153A63B9477BC(), 13))
	{
		return 0;
	}
	if (func_384(unk_0x460153A63B9477BC(), 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0))
	{
		if (!func_360())
		{
			return 0;
		}
	}
	if (bParam1)
	{
		if (func_359())
		{
			return 0;
		}
	}
	if (Global_1663771)
	{
		return 0;
	}
	if (func_358(unk_0x460153A63B9477BC()))
	{
		return 0;
	}
	if (func_357())
	{
		return 0;
	}
	if (func_356(unk_0x460153A63B9477BC()))
	{
		return 0;
	}
	if ((func_355(unk_0x460153A63B9477BC()) && func_59(unk_0x460153A63B9477BC()) == 123) && !bParam3)
	{
		return 0;
	}
	if (func_354())
	{
		return 0;
	}
	if (unk_0xCE990E643CD9D0E5(Global_1590682[unk_0x460153A63B9477BC() /*883*/].f_274.f_26, 4))
	{
		return 0;
	}
	if (func_353(unk_0x460153A63B9477BC()))
	{
		return 0;
	}
	if (func_352(unk_0x460153A63B9477BC()))
	{
		return 0;
	}
	if (!func_129(unk_0x460153A63B9477BC()))
	{
		if (func_351(unk_0x460153A63B9477BC()))
		{
			return 0;
		}
	}
	if (func_55())
	{
		return 0;
	}
	return 1;
}

int func_351(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return Global_1627436[iVar0 /*90*/].f_77.f_12 != 0;
	}
	return 0;
}

int func_352(int iParam0)
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

int func_353(int iParam0)
{
	if (Global_2425869[iParam0 /*443*/].f_265.f_4 != 0 || Global_2425869[iParam0 /*443*/].f_265.f_5)
	{
		return 1;
	}
	return 0;
}

bool func_354()
{
	return Global_1678288.f_4347 != -1;
}

int func_355(int iParam0)
{
	if (iParam0 != func_10() && func_9(iParam0, 1, 1))
	{
		return unk_0xCE990E643CD9D0E5(Global_2425869[iParam0 /*443*/].f_314, 3);
	}
	return 0;
}

int func_356(int iParam0)
{
	if (unk_0xCE990E643CD9D0E5(Global_1590682[iParam0 /*883*/].f_274.f_26, 14))
	{
		return 1;
	}
	if (unk_0xCE990E643CD9D0E5(Global_1590682[iParam0 /*883*/].f_274.f_26, 11))
	{
		return 1;
	}
	return 0;
}

int func_357()
{
	if (Global_4254512.f_943 > -1)
	{
		return 1;
	}
	return 0;
}

int func_358(int iParam0)
{
	if (!func_9(iParam0, 0, 1))
	{
		return 0;
	}
	return Global_1590682[iParam0 /*883*/].f_35;
}

bool func_359()
{
	return Global_99007.f_352 > 0;
}

int func_360()
{
	int iVar0;
	
	iVar0 = func_32(unk_0x460153A63B9477BC());
	if (((func_383(Global_1590682[unk_0x460153A63B9477BC() /*883*/].f_274.f_28) || func_382(unk_0x460153A63B9477BC())) || func_381(unk_0x460153A63B9477BC())) || func_376(unk_0x460153A63B9477BC()))
	{
		if (((iVar0 == 167 || iVar0 == 168) || iVar0 == 178) || iVar0 == 188)
		{
			return 1;
		}
	}
	if (func_374(unk_0x460153A63B9477BC()))
	{
		if (func_126(iVar0) || func_373(iVar0))
		{
			return 1;
		}
	}
	if (func_372(unk_0x460153A63B9477BC()))
	{
		if (func_373(iVar0))
		{
			return 1;
		}
	}
	if (func_371(unk_0x460153A63B9477BC()))
	{
		if (func_114(iVar0))
		{
			return 1;
		}
	}
	if (func_370(unk_0x460153A63B9477BC()))
	{
		if (func_113(iVar0))
		{
			return 1;
		}
	}
	if (func_369(unk_0x460153A63B9477BC()))
	{
		if (func_112(iVar0))
		{
			return 1;
		}
	}
	if (func_368(unk_0x460153A63B9477BC()))
	{
		if (func_367(iVar0))
		{
			return 1;
		}
	}
	if (func_366(unk_0x460153A63B9477BC(), 0))
	{
		if (func_365(iVar0))
		{
			if (func_61(unk_0x460153A63B9477BC()))
			{
				return 1;
			}
		}
	}
	if (func_364(unk_0x460153A63B9477BC()))
	{
		if (func_104(iVar0))
		{
			return 1;
		}
		if (func_103(iVar0))
		{
			return 1;
		}
		if (func_363())
		{
			return 1;
		}
	}
	if (func_362(unk_0x460153A63B9477BC()))
	{
		if (func_361())
		{
			return 1;
		}
	}
	return 0;
}

bool func_361()
{
	return Global_2540384.f_6663;
}

int func_362(int iParam0)
{
	if (iParam0 != func_10())
	{
		if (func_9(iParam0, 1, 1))
		{
			if (Global_2425869[iParam0 /*443*/].f_314.f_6 != -1)
			{
				return func_58(Global_2425869[iParam0 /*443*/].f_314.f_6) == 16;
			}
		}
	}
	return 0;
}

bool func_363()
{
	return Global_2540384.f_6662;
}

int func_364(int iParam0)
{
	if (iParam0 != func_10())
	{
		if (func_9(iParam0, 1, 1))
		{
			if (Global_2425869[iParam0 /*443*/].f_314.f_6 != -1)
			{
				return func_58(Global_2425869[iParam0 /*443*/].f_314.f_6) == 14;
			}
		}
	}
	return 0;
}

int func_365(int iParam0)
{
	switch (iParam0)
	{
		case 241:
		case 248:
		case 242:
		case 244:
		case 240:
		case 239:
			return 1;
		
		default:
	}
	return 0;
}

int func_366(int iParam0, bool bParam1)
{
	int iVar0;
	
	if (bParam1)
	{
		if (unk_0x47DBF174A0CB9D55(unk_0x9B0761B4C3EB8BC7(), false))
		{
			iVar0 = unk_0xA5D5B1042E8F47BD(unk_0x9B0761B4C3EB8BC7(), false);
			if (unk_0x36FE6D3220816ADA(iVar0) == joaat("terbyte"))
			{
				return 1;
			}
		}
	}
	if (iParam0 != func_10())
	{
		if (func_9(iParam0, 1, 1))
		{
			if (Global_2425869[iParam0 /*443*/].f_314.f_6 != -1 && Global_2425869[iParam0 /*443*/].f_314.f_9 != func_10())
			{
				return func_58(Global_2425869[iParam0 /*443*/].f_314.f_6) == 12;
			}
		}
	}
	return 0;
}

int func_367(int iParam0)
{
	switch (iParam0)
	{
		case 237:
		case 238:
		case 249:
		case 250:
			return 1;
		
		default:
	}
	return 0;
}

int func_368(int iParam0)
{
	if (iParam0 != func_10())
	{
		if (func_9(iParam0, 1, 1))
		{
			if (Global_2425869[iParam0 /*443*/].f_314.f_6 != -1)
			{
				return func_58(Global_2425869[iParam0 /*443*/].f_314.f_6) == 11;
			}
		}
	}
	return 0;
}

int func_369(int iParam0)
{
	if (iParam0 != func_10())
	{
		if (func_9(iParam0, 1, 1))
		{
			if (Global_2425869[iParam0 /*443*/].f_314.f_6 != -1)
			{
				return func_58(Global_2425869[iParam0 /*443*/].f_314.f_6) == 9;
			}
		}
	}
	return 0;
}

int func_370(int iParam0)
{
	if (iParam0 != func_10())
	{
		if (func_9(iParam0, 1, 1))
		{
			if (Global_2425869[iParam0 /*443*/].f_314.f_6 != -1)
			{
				return func_58(Global_2425869[iParam0 /*443*/].f_314.f_6) == 7;
			}
		}
	}
	return 0;
}

int func_371(int iParam0)
{
	if (iParam0 != func_10())
	{
		if (func_9(iParam0, 1, 1))
		{
			if (Global_2425869[iParam0 /*443*/].f_314.f_6 != -1)
			{
				return func_58(Global_2425869[iParam0 /*443*/].f_314.f_6) == 4;
			}
		}
	}
	return 0;
}

int func_372(int iParam0)
{
	if (iParam0 != func_10())
	{
		if (func_9(iParam0, 1, 1))
		{
			if (Global_2425869[iParam0 /*443*/].f_314.f_6 != -1)
			{
				return func_58(Global_2425869[iParam0 /*443*/].f_314.f_6) == 2;
			}
		}
	}
	return 0;
}

int func_373(int iParam0)
{
	switch (iParam0)
	{
		case 190:
		case 191:
		case 192:
			return 1;
		
		default:
	}
	return 0;
}

int func_374(int iParam0)
{
	if (func_375(Global_1590682[iParam0 /*883*/].f_274.f_28, -1))
	{
		return 1;
	}
	return 0;
}

int func_375(int iParam0, int iParam1)
{
	if (iParam1 == -1)
	{
		switch (iParam0)
		{
			case 91:
			case 92:
			case 93:
			case 94:
			case 95:
			case 96:
			case 97:
			case 98:
			case 99:
			case 100:
			case 101:
			case 102:
				return 1;
				break;
		}
	}
	else if (iParam1 == 91)
	{
		switch (iParam0)
		{
			case 91:
			case 92:
			case 93:
			case 94:
			case 95:
			case 96:
				return 1;
				break;
		}
	}
	else if (iParam1 == 97)
	{
		switch (iParam0)
		{
			case 97:
			case 98:
			case 99:
			case 100:
			case 101:
			case 102:
				return 1;
				break;
			}
	}
	return 0;
}

int func_376(int iParam0)
{
	if (func_377(Global_1590682[iParam0 /*883*/].f_274.f_28, 0, 0))
	{
		return 1;
	}
	return 0;
}

int func_377(int iParam0, bool bParam1, bool bParam2)
{
	if (bParam2)
	{
		return func_378(unk_0x460153A63B9477BC(), 0);
	}
	if (bParam1)
	{
		if (func_378(unk_0x460153A63B9477BC(), 0))
		{
			return 0;
		}
		switch (iParam0)
		{
			case 103:
			case 106:
			case 109:
			case 112:
			case 104:
			case 107:
			case 110:
			case 113:
			case 105:
			case 108:
			case 111:
			case 114:
				return 1;
				break;
			}
	}
	switch (iParam0)
	{
		case 103:
		case 106:
		case 109:
		case 112:
		case 104:
		case 107:
		case 110:
		case 113:
		case 105:
		case 108:
		case 111:
		case 114:
			return 1;
			break;
	}
	return 0;
}

bool func_378(int iParam0, bool bParam1)
{
	if (Global_1590518 != func_10())
	{
		if (!func_380(Global_1590518))
		{
			return 0;
		}
		if (bParam1)
		{
			if (unk_0x460153A63B9477BC() != Global_1590518)
			{
				if (unk_0xCE990E643CD9D0E5(Global_2425869[Global_1590518 /*443*/].f_199, 24) || func_379(Global_1590518))
				{
					return 1;
				}
			}
		}
	}
	return unk_0xCE990E643CD9D0E5(Global_2425869[iParam0 /*443*/].f_199, 24);
}

int func_379(int iParam0)
{
	if (iParam0 != func_10())
	{
		return unk_0xCE990E643CD9D0E5(Global_2425869[iParam0 /*443*/].f_199, 9);
	}
	return 0;
}

int func_380(int iParam0)
{
	if (iParam0 != func_10())
	{
		return unk_0xCE990E643CD9D0E5(Global_1590682[iParam0 /*883*/].f_274.f_351, 2);
	}
	return 0;
}

int func_381(int iParam0)
{
	if (iParam0 != func_10())
	{
		if (func_9(iParam0, 1, 1))
		{
			if (Global_2425869[iParam0 /*443*/].f_314.f_6 != -1)
			{
				return func_58(Global_2425869[iParam0 /*443*/].f_314.f_6) == 1;
			}
		}
	}
	return 0;
}

int func_382(int iParam0)
{
	if (iParam0 != func_10())
	{
		if (func_9(iParam0, 1, 1))
		{
			if (Global_2425869[iParam0 /*443*/].f_314.f_6 != -1)
			{
				return func_58(Global_2425869[iParam0 /*443*/].f_314.f_6) == 0;
			}
		}
	}
	return 0;
}

int func_383(int iParam0)
{
	switch (iParam0)
	{
		case 87:
		case 88:
		case 89:
		case 90:
			return 1;
			break;
	}
	return 0;
}

int func_384(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9, bool bParam10, bool bParam11, bool bParam12, bool bParam13, bool bParam14, bool bParam15, bool bParam16)
{
	if (Global_1590682[iParam0 /*883*/].f_274.f_28 > 0)
	{
		if (bParam1)
		{
			if (unk_0xCE990E643CD9D0E5(Global_1590682[iParam0 /*883*/].f_274.f_26, 0))
			{
				return 1;
			}
		}
		else
		{
			return 1;
		}
	}
	if (!bParam2)
	{
		if (func_382(iParam0))
		{
			return 1;
		}
	}
	if (!bParam3)
	{
		if (func_372(iParam0))
		{
			return 1;
		}
	}
	if (!bParam4)
	{
		if (func_381(iParam0))
		{
			return 1;
		}
	}
	if (!bParam5)
	{
		if (func_371(iParam0))
		{
			return 1;
		}
	}
	if (!bParam6)
	{
		if (func_370(iParam0))
		{
			return 1;
		}
	}
	if (!bParam7)
	{
		if (func_369(iParam0))
		{
			return 1;
		}
	}
	if (!bParam8)
	{
		if (func_389(iParam0))
		{
			return 1;
		}
	}
	if (!bParam9)
	{
		if (func_368(iParam0))
		{
			return 1;
		}
	}
	if (!bParam10)
	{
		if (func_388(iParam0))
		{
			return 1;
		}
	}
	if (!bParam11)
	{
		if (func_366(iParam0, 0))
		{
			return 1;
		}
	}
	if (!bParam12)
	{
		if (func_387(iParam0))
		{
			return 1;
		}
	}
	if (!bParam13)
	{
		if (func_364(iParam0))
		{
			return 1;
		}
	}
	if (!bParam14)
	{
		if (func_386(iParam0))
		{
			return 1;
		}
	}
	if (!bParam15)
	{
		if (func_362(iParam0))
		{
			return 1;
		}
	}
	if (!bParam16)
	{
		if (func_385(iParam0))
		{
			return 1;
		}
	}
	return 0;
}

int func_385(int iParam0)
{
	if (iParam0 != func_10())
	{
		if (func_9(iParam0, 1, 1))
		{
			if (Global_2425869[iParam0 /*443*/].f_314.f_6 != -1)
			{
				return func_58(Global_2425869[iParam0 /*443*/].f_314.f_6) == 17;
			}
		}
	}
	return 0;
}

int func_386(int iParam0)
{
	if (iParam0 != func_10())
	{
		if (func_9(iParam0, 1, 1))
		{
			if (Global_2425869[iParam0 /*443*/].f_314.f_6 != -1)
			{
				return func_58(Global_2425869[iParam0 /*443*/].f_314.f_6) == 15;
			}
		}
	}
	return 0;
}

int func_387(int iParam0)
{
	if (iParam0 != func_10())
	{
		if (func_9(iParam0, 1, 1))
		{
			if (Global_2425869[iParam0 /*443*/].f_314.f_6 != -1)
			{
				return func_58(Global_2425869[iParam0 /*443*/].f_314.f_6) == 13;
			}
		}
	}
	return 0;
}

int func_388(int iParam0)
{
	if (iParam0 != func_10())
	{
		if (func_9(iParam0, 1, 1))
		{
			if (Global_2425869[iParam0 /*443*/].f_314.f_6 != -1)
			{
				return func_58(Global_2425869[iParam0 /*443*/].f_314.f_6) == 11;
			}
		}
	}
	return 0;
}

int func_389(int iParam0)
{
	if (iParam0 != func_10())
	{
		if (func_9(iParam0, 1, 1))
		{
			if (Global_2425869[iParam0 /*443*/].f_314.f_6 != -1 && Global_2425869[iParam0 /*443*/].f_314.f_9 != func_10())
			{
				return func_58(Global_2425869[iParam0 /*443*/].f_314.f_6) == 8;
			}
		}
	}
	return 0;
}

int func_390()
{
	if (func_391() == 0)
	{
		return 1;
	}
	return 0;
}

int func_391()
{
	return Global_1312485.f_18;
}

bool func_392(int iParam0)
{
	return func_393(iParam0);
}

bool func_393(int iParam0)
{
	return unk_0xCE990E643CD9D0E5(Global_1590682[iParam0 /*883*/].f_13.f_1, 0);
}

bool func_394()
{
	return Global_1590682[unk_0x460153A63B9477BC() /*883*/].f_196 != 0;
}

bool func_395()
{
	return Global_1312896;
}

bool func_396()
{
	return Global_1590682[unk_0x460153A63B9477BC() /*883*/] == 5;
}

bool func_397()
{
	return unk_0xCE990E643CD9D0E5(Global_1590682[unk_0x460153A63B9477BC() /*883*/].f_39.f_18, 0);
}

int func_398(int iParam0)
{
	if (func_399(iParam0, 1, 0))
	{
		if (Global_1590682[iParam0 /*883*/] != 6)
		{
			return 1;
		}
	}
	return 0;
}

int func_399(int iParam0, bool bParam1, bool bParam2)
{
	if (bParam1)
	{
		if (func_392(iParam0))
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

bool func_400(int iParam0)
{
	return unk_0xCE990E643CD9D0E5(Global_1590682[iParam0 /*883*/].f_142, 22);
}

void func_401(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam1 != func_10())
	{
		if (unk_0x166E920FB00B2DBB(iParam1))
		{
			if (iParam1 == unk_0x460153A63B9477BC())
			{
				iVar0 = 1;
			}
			else if (func_402(iParam1, unk_0x460153A63B9477BC()))
			{
				iVar0 = 1;
			}
		}
	}
	if (iParam0 || iVar0)
	{
		if (func_9(unk_0x460153A63B9477BC(), 1, 1))
		{
			unk_0xCAD5C18968E57C30(unk_0x460153A63B9477BC(), 0, 0);
			unk_0x4B86C627B5EABFBF(unk_0x460153A63B9477BC(), 0);
			Global_2540384.f_5188.f_384 = unk_0x5A002C4821A13338();
		}
	}
}

int func_402(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam0 != func_10() && iParam1 != func_10())
	{
		iVar0 = func_27(iParam0);
		if (iVar0 != func_10())
		{
			return iVar0 == func_27(iParam1);
		}
	}
	return 0;
}

void func_403(var uParam0, int iParam1, int iParam2, var uParam3, var uParam4, int iParam5, bool bParam6, char* sParam7)
{
	int iVar0;
	int iVar1[32];
	bool bVar2;
	int iVar3;
	char* sVar4;
	int iVar5;
	struct<4> Var6;
	int iVar7;
	int iVar8;
	int iVar9;
	float fVar10;
	int iVar11;
	int iVar12;
	int iVar13;
	int iVar14;
	int iVar15;
	int iVar16;
	int iVar17;
	int iVar18;
	int iVar19;
	int iVar20;
	int iVar21;
	struct<2> Var22;
	
	if (func_525(iParam2))
	{
		return;
	}
	fVar10 = -1f;
	iVar11 = -1;
	iVar12 = -1;
	iVar14 = 0;
	iVar15 = 0;
	uParam3->f_36 = 0;
	if (func_523() || iParam2 == 28)
	{
		if (func_478(iParam1, iParam2, uParam3, Global_1574191, 0, func_521(), sParam7))
		{
			func_477(1);
			if ((!func_476() && !func_475()) || unk_0xCE990E643CD9D0E5(Global_2540384.f_4652, 1))
			{
				if (func_474())
				{
					func_473();
				}
				else
				{
					unk_0xFCC7EAA298CE7AC2(76, 84);
					if (uParam3->f_27 == 0)
					{
						func_472(1);
						Global_1574191 = 0;
						iVar19 = -1;
						if (Global_1574412 != 1)
						{
							func_471(iParam1, 0, 0);
							if (unk_0xCE990E643CD9D0E5(uParam3->f_33, 7))
							{
								unk_0xD2459066EA58CE43(&(uParam3->f_33), 7);
							}
						}
						if (iParam2 == 28)
						{
							iVar17 = 0;
							while (iVar17 < 32)
							{
								iVar1[iVar17] = -1;
								iVar17++;
							}
							iVar17 = 0;
							while (iVar17 < 32)
							{
								if (func_9(unk_0xF1110FE23C67293A(iVar17), 0, 1))
								{
									iVar3 = unk_0xF1110FE23C67293A(iVar17);
									if (!func_19(iVar3, 0))
									{
										if ((func_467(iVar3) || Global_2425869[iVar3 /*443*/].f_240 != -1) || func_30(iVar3))
										{
											iVar9 = iVar3;
											if (func_29(iVar3))
											{
												iVar1[iVar9] = iVar20;
												iVar20++;
												iVar0++;
												func_466(&iVar1, iVar3, &iVar20, &iVar0);
											}
										}
									}
								}
								iVar17++;
							}
						}
						if (!func_464(unk_0x460153A63B9477BC(), 0) && func_32(unk_0x460153A63B9477BC()) != 188)
						{
							bVar2 = iVar0 > 0;
						}
						iVar17 = 0;
						while (iVar17 < 32)
						{
							if (func_463())
							{
								if (func_9(unk_0xF1110FE23C67293A(iVar17), 0, 1))
								{
									iVar3 = unk_0xF1110FE23C67293A(iVar17);
								}
								else
								{
									iVar3 = func_10();
								}
							}
							else
							{
								iVar3 = (uParam0[iVar17 /*42*/])->f_1;
							}
							if ((func_462(iVar3) && func_458(iVar3, iParam2)) && func_9(iVar3, 0, 1))
							{
								iVar9 = iVar3;
								iVar7 = Global_1590682[iVar9 /*883*/].f_211.f_6;
								Var6 = { func_453(iVar3) };
								if (iVar3 == unk_0x460153A63B9477BC())
								{
									uParam3->f_35 = iVar18;
								}
								StringCopy(&(uParam3->f_1), unk_0x72C1D3A1AB8CAA5B(iVar3), 64);
								*(uParam4[iVar17 /*13*/]) = { func_180(iVar3) };
								iVar5 = func_447(iVar3);
								sVar4 = "";
								if (iVar5 != 0)
								{
									sVar4 = unk_0x3EF2973864CBE5FC(iVar5);
								}
								Global_1574191++;
								if ((uParam0[iVar17 /*42*/])->f_22 != -1f)
								{
									fVar10 = (uParam0[iVar17 /*42*/])->f_22;
								}
								if ((uParam0[iVar17 /*42*/])->f_31 != -1)
								{
									iVar11 = (uParam0[iVar17 /*42*/])->f_31;
								}
								if ((uParam0[iVar17 /*42*/])->f_41 != -1)
								{
									iVar12 = (uParam0[iVar17 /*42*/])->f_41;
								}
								iVar8 = (uParam0[iVar17 /*42*/])->f_9;
								if (((uParam0[iVar17 /*42*/])->f_9 != -1 || (uParam0[iVar17 /*42*/])->f_22 != -1f) || (uParam0[iVar17 /*42*/])->f_31 != -1)
								{
									if (!func_463())
									{
										iVar15 = 1;
									}
								}
								if (iParam5 != -1)
								{
									func_442(&iVar8, &fVar10, (uParam0[iVar17 /*42*/])->f_9, iParam5);
									StringCopy(&(uParam3->f_104), func_441(iParam5, 1, 0, 0), 16);
								}
								if (bParam6)
								{
									iVar13 = (uParam0[iVar17 /*42*/])->f_2 + 1;
									if (iVar19 != iVar13)
									{
										iVar19 = iVar13;
									}
									else
									{
										iVar13 = -2;
									}
								}
								iVar16 = func_440(iVar3, 0);
								if (bVar2)
								{
									if (func_28(iVar3, 1) && iVar1[iVar9] != -1)
									{
										iVar18 = iVar1[iVar9];
									}
									else
									{
										iVar18 = (iVar0 + iVar21);
										iVar21++;
									}
								}
								uParam3->f_38[iVar9 /*2*/].f_1 = iVar18;
								if ((uParam0[iVar17 /*42*/])->f_39 != -1)
								{
									StringCopy(&Var22, "UW_TM", 16);
									StringIntConCat(&Var22, (uParam0[iVar17 /*42*/])->f_39, 16);
								}
								if (func_439(iParam5))
								{
									func_438(iVar3, iParam1, uParam3, iVar18, Var6, sVar4, iVar7, iVar8, iVar16, iVar15, fVar10, iVar8, iVar12, &Var22, (uParam0[iVar17 /*42*/])->f_40, iVar13, bParam6);
								}
								else
								{
									func_438(iVar3, iParam1, uParam3, iVar18, Var6, sVar4, iVar7, iVar8, iVar16, iVar15, fVar10, iVar11, iVar12, &Var22, (uParam0[iVar17 /*42*/])->f_40, iVar13, bParam6);
								}
								unk_0xBE20AB8238688965(&iVar14, iVar3);
								iVar18++;
							}
							iVar17++;
						}
						iVar17 = 0;
						while (iVar17 < 32)
						{
							iVar3 = unk_0xF1110FE23C67293A(iVar17);
							if (func_9(iVar3, 0, 1) && !unk_0xCE990E643CD9D0E5(iVar14, iVar3))
							{
								iVar3 = unk_0xF1110FE23C67293A(iVar17);
							}
							else
							{
								iVar3 = func_10();
							}
							if (func_462(iVar3))
							{
								if (func_9(unk_0xF1110FE23C67293A(iVar17), 0, 1))
								{
									iVar9 = iVar3;
									iVar7 = Global_1590682[iVar9 /*883*/].f_211.f_6;
									Var6 = { func_453(iVar3) };
									*(uParam4[iVar17 /*13*/]) = { func_180(iVar3) };
									iVar5 = func_447(iVar3);
									sVar4 = "";
									if (iVar5 != 0)
									{
										sVar4 = unk_0x3EF2973864CBE5FC(iVar5);
									}
									Global_1574191++;
									iVar16 = func_440(iVar3, 1);
									if (bVar2)
									{
										if (func_28(iVar3, 1))
										{
											iVar18 = iVar1[iVar17];
										}
										else
										{
											iVar18 = (iVar0 + iVar21);
											iVar21++;
										}
									}
									uParam3->f_38[iVar9 /*2*/].f_1 = iVar18;
									func_418(iVar3, unk_0x72C1D3A1AB8CAA5B(iVar3), iParam1, uParam3, iVar18, Var6, sVar4, iVar7, iVar16, iVar15);
									iVar18++;
								}
							}
							iVar17++;
						}
						if (unk_0xCE990E643CD9D0E5(uParam3->f_33, 11))
						{
							func_415(uParam3, iParam1, iParam2);
						}
						func_414(&(uParam3->f_21));
						func_413();
						uParam3->f_27 = 2;
					}
					if (uParam3->f_27 == 2)
					{
						if (!unk_0xCE990E643CD9D0E5(uParam3->f_33, 7))
						{
							func_412(uParam3, iParam1);
							func_411(iParam1, 0, 1);
							unk_0xBE20AB8238688965(&(uParam3->f_33), 7);
						}
						func_412(uParam3, iParam1);
						if (!unk_0xCE990E643CD9D0E5(uParam3->f_33, 11))
						{
							unk_0xBE20AB8238688965(&(uParam3->f_33), 11);
						}
						if (func_407(uParam3))
						{
							Global_1574412 = 1;
						}
						func_404(uParam3);
						if (Global_1574412 == 1)
						{
							uParam3->f_27 = 0;
						}
						if (Global_1574412 == 2)
						{
							uParam3->f_27 = 0;
						}
					}
					if (unk_0x95EF219D38B20CFF(*iParam1))
					{
						unk_0x9D15035C6653D1B1(7);
						unk_0xE6A03BA84586E67B(*iParam1, 0.122f, 0.3f, 0.28f, 0.6f, 255, 255, 255, 255, 0);
						unk_0x9D15035C6653D1B1(4);
					}
				}
			}
		}
		else
		{
			uParam3->f_27 = 0;
			func_413();
			func_472(0);
			if (unk_0xCE990E643CD9D0E5(uParam3->f_33, 7))
			{
				unk_0xD2459066EA58CE43(&(uParam3->f_33), 7);
			}
			if (unk_0xCE990E643CD9D0E5(uParam3->f_33, 10))
			{
				unk_0xD2459066EA58CE43(&(uParam3->f_33), 10);
			}
		}
	}
	unk_0x5C64FD27DB62AF7A();
}

void func_404(var uParam0)
{
	if (!func_406(&(uParam0->f_21)))
	{
		func_4(&(uParam0->f_21), 0, 0);
	}
	else if (func_3(&(uParam0->f_21), 250, 0))
	{
		func_414(&(uParam0->f_21));
		func_405(0);
	}
}

void func_405(bool bParam0)
{
	if (bParam0)
	{
		if (Global_1574412 != 2)
		{
			Global_1574412 = 2;
		}
	}
	else
	{
		switch (Global_1574412)
		{
			case 0:
				Global_1574412 = 1;
				break;
			
			case 1:
				break;
			
			case 2:
				break;
			}
	}
}

bool func_406(var uParam0)
{
	return uParam0->f_1;
}

int func_407(var uParam0)
{
	int iVar0;
	int iVar1;
	struct<13> Var2;
	int iVar3;
	int iVar4;
	
	iVar4 = 0;
	iVar0 = uParam0->f_37;
	iVar3 = unk_0xF1110FE23C67293A(uParam0->f_37);
	if (iVar3 != func_10() && func_9(iVar3, 0, 1))
	{
		Var2 = { func_180(iVar3) };
		iVar1 = func_410(uParam0, uParam0->f_37);
		if (func_409(Var2))
		{
			switch (iVar1)
			{
				case 0:
					if (unk_0x4B9AEC757F715980(&Var2))
					{
						if (unk_0x30EE34228B1AF045(&Var2))
						{
							iVar4 = 1;
							func_408(uParam0, iVar0, 2);
						}
					}
					else if (unk_0x7677D662EB0C9C8A(&Var2))
					{
						iVar4 = 1;
						func_408(uParam0, iVar0, 1);
					}
					break;
				
				case 2:
					if (unk_0x4B9AEC757F715980(&Var2))
					{
						if (!unk_0x30EE34228B1AF045(&Var2))
						{
							iVar4 = 1;
							func_408(uParam0, iVar0, 0);
						}
					}
					else
					{
						iVar4 = 1;
						func_408(uParam0, iVar0, 0);
					}
					break;
				
				case 1:
					if (unk_0x4B9AEC757F715980(&Var2))
					{
						if (!unk_0x7677D662EB0C9C8A(&Var2))
						{
							iVar4 = 1;
							func_408(uParam0, iVar0, 0);
						}
					}
					else if (!unk_0x7677D662EB0C9C8A(&Var2))
					{
						iVar4 = 1;
						func_408(uParam0, iVar0, 0);
					}
					break;
				}
			}
	}
	uParam0->f_37++;
	if (uParam0->f_37 >= 32)
	{
		uParam0->f_37 = 0;
	}
	return iVar4;
}

void func_408(var uParam0, int iParam1, int iParam2)
{
	uParam0->f_38[iParam1 /*2*/] = iParam2;
}

bool func_409(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12)
{
	return unk_0xF6B8932480699645(&uParam0, 13);
}

var func_410(var uParam0, int iParam1)
{
	return uParam0->f_38[iParam1 /*2*/];
}

void func_411(int iParam0, bool bParam1, int iParam2)
{
	if (unk_0x830F007E19C63E14(*iParam0, "COLLAPSE"))
	{
		unk_0xF1B28F753235CE2A(bParam1);
		unk_0xE1FDD153F5858534();
	}
	if (iParam2 == 1)
	{
		if (unk_0x830F007E19C63E14(*iParam0, "DISPLAY_VIEW"))
		{
			unk_0xE1FDD153F5858534();
		}
	}
}

void func_412(var uParam0, int iParam1)
{
	if (!unk_0xCE990E643CD9D0E5(uParam0->f_33, 10))
	{
		unk_0x830F007E19C63E14(*iParam1, "SET_HIGHLIGHT");
		unk_0xAD291B8F75D737AD(uParam0->f_35);
		unk_0xE1FDD153F5858534();
		unk_0xBE20AB8238688965(&(uParam0->f_33), 10);
	}
}

void func_413()
{
	if (Global_1574412 != 0)
	{
		Global_1574412 = 0;
	}
}

void func_414(var uParam0)
{
	uParam0->f_1 = 0;
}

void func_415(var uParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar2 = unk_0xF1110FE23C67293A(iVar0);
		if (iVar2 != func_10())
		{
			if (func_9(iVar2, 0, 1))
			{
				if (uParam0->f_38[iVar0 /*2*/].f_1 != -1)
				{
					iVar1 = func_417(uParam0->f_38[iVar0 /*2*/], 0, iParam2);
					func_416(iParam1, uParam0->f_38[iVar0 /*2*/].f_1, iVar1, Global_1590682[iVar0 /*883*/].f_211.f_6);
				}
			}
		}
		iVar0++;
	}
}

void func_416(var uParam0, int iParam1, int iParam2, int iParam3)
{
	if (unk_0x95EF219D38B20CFF(*uParam0))
	{
		if (unk_0x830F007E19C63E14(*uParam0, "SET_ICON"))
		{
			unk_0xAD291B8F75D737AD(iParam1);
			unk_0xAD291B8F75D737AD(iParam2);
			if (iParam2 == 65)
			{
				unk_0xAD291B8F75D737AD(iParam3);
			}
			unk_0xE1FDD153F5858534();
		}
	}
}

int func_417(int iParam0, bool bParam1, int iParam2)
{
	int iVar0;
	
	iVar0 = 65;
	switch (iParam2)
	{
		case 21:
			iVar0 = 0;
			break;
	}
	if (bParam1)
	{
		iVar0 = 116;
	}
	switch (iParam0)
	{
		case 2:
			return 47;
		
		case 1:
			return 49;
		
		default:
	}
	return iVar0;
}

void func_418(int iParam0, char* sParam1, int iParam2, var uParam3, int iParam4, char* sParam5, var uParam6, var uParam7, var uParam8, char* sParam9, int iParam10, int iParam11, int iParam12)
{
	int iVar0;
	char* sVar1;
	
	if (iParam4 >= func_437() && iParam4 < func_436())
	{
		iParam4 = (iParam4 % 16);
		iVar0 = iParam4 + 1;
		if (Global_1574193)
		{
			iVar0 += 16;
		}
		sVar1 = "SET_DATA_SLOT";
		if (Global_1574412 == 1)
		{
			sVar1 = "UPDATE_SLOT";
		}
		if (unk_0x830F007E19C63E14(*iParam2, sVar1))
		{
			unk_0xAD291B8F75D737AD(iParam4);
			if (unk_0xCE990E643CD9D0E5(uParam3->f_33, 8) || uParam3->f_108 == 6)
			{
				func_435("");
			}
			else
			{
				unk_0xAD291B8F75D737AD(iParam10);
			}
			func_435(sParam1);
			unk_0xAD291B8F75D737AD(iParam11);
			if (uParam3->f_108 == 6)
			{
				func_435("");
			}
			else
			{
				unk_0xAD291B8F75D737AD(65);
			}
			unk_0xAD291B8F75D737AD(-1);
			func_435("");
			if (uParam3->f_108 == 6)
			{
				func_435("");
			}
			else
			{
				func_435(&sParam5);
			}
			func_423(uParam3, iParam0);
			unk_0x4A096F645CED26D9(sParam9);
			unk_0x4A096F645CED26D9(sParam9);
			if (func_422(uParam3))
			{
				func_421("DPAD_FRIEND");
			}
			else if (func_420(uParam3))
			{
				func_421("DPAD_FRIEND");
			}
			else if (func_419(uParam3))
			{
				func_421("DPAD_CREW");
			}
			else
			{
				func_421("");
			}
			unk_0xE1FDD153F5858534();
		}
	}
}

bool func_419(var uParam0)
{
	return unk_0xCE990E643CD9D0E5(uParam0->f_33, 6);
}

bool func_420(var uParam0)
{
	return unk_0xCE990E643CD9D0E5(uParam0->f_33, 5);
}

void func_421(char* sParam0)
{
	unk_0xB23270F3D5E62FDE(sParam0);
	unk_0x2042E9CA4306F725();
}

int func_422(var uParam0)
{
	if (func_420(uParam0) && func_419(uParam0))
	{
		return 1;
	}
	return 0;
}

void func_423(var uParam0, int iParam1)
{
	if (func_434(iParam1))
	{
		unk_0xAD291B8F75D737AD(121);
	}
	else if (func_427(iParam1))
	{
		unk_0xAD291B8F75D737AD(122);
	}
	else if (((unk_0xCE990E643CD9D0E5(Global_4456448.f_27, 15) && iParam1 > -1) && iParam1 < 32) && unk_0xCE990E643CD9D0E5(Global_2425869[iParam1 /*443*/].f_420, 0))
	{
		unk_0xAD291B8F75D737AD(123);
	}
	else
	{
		if (func_424())
		{
			uParam0->f_36 = 0;
		}
		unk_0xF1B28F753235CE2A(uParam0->f_36);
	}
}

int func_424()
{
	if (unk_0xFC559366953F62B3())
	{
		if (func_425() || func_90())
		{
			return 1;
		}
	}
	return 0;
}

int func_425()
{
	if (unk_0xFC559366953F62B3())
	{
		return func_90();
	}
	return func_426(Global_4456448.f_82708);
}

int func_426(int iParam0)
{
	int iVar0;
	
	if (iParam0 == 0)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 8)
	{
		if (Global_262145.f_4991[iVar0] == iParam0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_427(int iParam0)
{
	if ((func_9(iParam0, 0, 1) && func_428()) && func_6(iParam0, 1))
	{
		return 1;
	}
	return 0;
}

int func_428()
{
	if (func_433(unk_0x460153A63B9477BC()) || func_432())
	{
		if (!func_429(unk_0x460153A63B9477BC()))
		{
			return 0;
		}
	}
	return 1;
}

int func_429(int iParam0)
{
	if (func_431(iParam0) == 236 || func_431(iParam0) == 150)
	{
		return func_430(iParam0);
	}
	return 0;
}

int func_430(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return unk_0xCE990E643CD9D0E5(Global_1630317[iVar0 /*595*/].f_1, 7);
	}
	return 0;
}

int func_431(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return Global_1630317[iVar0 /*595*/];
	}
	return -1;
}

int func_432()
{
	switch (func_32(unk_0x460153A63B9477BC()))
	{
		case 193:
		case 194:
		case 199:
		case 205:
		case 210:
		case 188:
			return 1;
		
		default:
	}
	return 0;
}

int func_433(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return Global_1630317[iVar0 /*595*/] != -1;
	}
	return 0;
}

int func_434(int iParam0)
{
	if (func_424())
	{
		if (func_9(iParam0, 0, 1))
		{
			return func_29(iParam0);
		}
	}
	if ((func_9(iParam0, 0, 1) && func_428()) && func_8(iParam0, 0))
	{
		return 1;
	}
	return 0;
}

void func_435(char* sParam0)
{
	unk_0x54AED56A452DCB4F(sParam0);
}

int func_436()
{
	int iVar0;
	
	if (Global_1574193)
	{
		iVar0 = 32;
	}
	else
	{
		iVar0 = 16;
	}
	return iVar0;
}

int func_437()
{
	int iVar0;
	
	iVar0 = 0;
	if (Global_1574193)
	{
		iVar0 = 16;
	}
	return iVar0;
}

void func_438(int iParam0, int iParam1, var uParam2, int iParam3, char* sParam4, var uParam5, var uParam6, var uParam7, char* sParam8, int iParam9, int iParam10, int iParam11, int iParam12, float fParam13, int iParam14, int iParam15, char* sParam16, int iParam17, int iParam18, bool bParam19)
{
	int iVar0;
	char* sVar1;
	
	if (iParam3 >= func_437() && iParam3 < func_436())
	{
		iParam3 = (iParam3 % 16);
		iVar0 = iParam3 + 1;
		if (Global_1574193)
		{
			iVar0 += 16;
		}
		if (bParam19)
		{
			iVar0 = iParam18;
			if (iVar0 == -2)
			{
				iParam10 = -1;
			}
		}
		sVar1 = "SET_DATA_SLOT";
		if (Global_1574412 == 1)
		{
			sVar1 = "UPDATE_SLOT";
		}
		if (unk_0x95EF219D38B20CFF(*iParam1))
		{
			if (unk_0x830F007E19C63E14(*iParam1, sVar1))
			{
				unk_0xAD291B8F75D737AD(iParam3);
				if (unk_0xCE990E643CD9D0E5(uParam2->f_33, 8) || uParam2->f_108 == 6)
				{
					func_435("");
				}
				else
				{
					unk_0xAD291B8F75D737AD(iParam9);
				}
				if (uParam2->f_108 == 6 && !unk_0x7BCC91F3C1CF24E8(sParam16))
				{
					func_421(sParam16);
				}
				else
				{
					func_435(&(uParam2->f_1));
				}
				unk_0xAD291B8F75D737AD(iParam11);
				if (uParam2->f_108 == 6)
				{
					func_435("");
				}
				else
				{
					unk_0xAD291B8F75D737AD(65);
				}
				if (iParam12 == 1)
				{
					unk_0xAD291B8F75D737AD(iVar0);
				}
				else
				{
					unk_0xAD291B8F75D737AD(-1);
				}
				if (func_463())
				{
					func_435("");
				}
				else if (uParam2->f_108 == 6 && !unk_0x7BCC91F3C1CF24E8(sParam16))
				{
					unk_0xB23270F3D5E62FDE("FM_AE_ONE_INT");
					unk_0x6A826E35A3096ED0(sParam16);
					unk_0x42710E9E08FA375A(iParam17);
					unk_0x2042E9CA4306F725();
				}
				else if (uParam2->f_108 == 5 && !unk_0x7BCC91F3C1CF24E8(sParam16))
				{
					unk_0xB23270F3D5E62FDE("FM_AE_ONE_INT");
					unk_0x6A826E35A3096ED0(sParam16);
					unk_0x42710E9E08FA375A(iParam17);
					unk_0x2042E9CA4306F725();
				}
				else if (uParam2->f_108 == 7 && !unk_0x7BCC91F3C1CF24E8(sParam16))
				{
					unk_0xB23270F3D5E62FDE("FM_AE_TWO_INT");
					unk_0x6A826E35A3096ED0(sParam16);
					unk_0x42710E9E08FA375A(iParam17);
					unk_0x2042E9CA4306F725();
				}
				else if (uParam2->f_108 == 8 && !unk_0x7BCC91F3C1CF24E8(&(uParam2->f_104)))
				{
					unk_0xB23270F3D5E62FDE("FM_AE_UNIT");
					if (fParam13 != -1f)
					{
						unk_0x5BC8B357341A4FEE(fParam13, 1);
					}
					if (iParam10 != -1)
					{
						unk_0x42710E9E08FA375A(iParam10);
					}
					unk_0x6A826E35A3096ED0(&(uParam2->f_104));
					unk_0x2042E9CA4306F725();
				}
				else if (uParam2->f_108 == 9)
				{
					unk_0xB23270F3D5E62FDE("FM_AE_CASH");
					unk_0x5181FCFE1210A213(iParam10, 1);
					unk_0x2042E9CA4306F725();
				}
				else if (uParam2->f_108 == 10)
				{
					if (iParam10 == 0)
					{
						unk_0xB23270F3D5E62FDE("FM_AE_CASH");
						unk_0x5181FCFE1210A213(iParam10, 1);
						unk_0x2042E9CA4306F725();
					}
					else
					{
						unk_0xB23270F3D5E62FDE("FM_NG_CASH");
						unk_0x5181FCFE1210A213(iParam10, 1);
						unk_0x2042E9CA4306F725();
					}
				}
				else if (iParam15 > -1)
				{
					if (iParam15 == 0 && !unk_0x7BCC91F3C1CF24E8(&(uParam2->f_104)))
					{
						func_421(&(uParam2->f_104));
					}
					else
					{
						func_435("");
					}
				}
				else if (iParam14 != -1)
				{
					unk_0xB23270F3D5E62FDE("STRING");
					unk_0x7899A951E85F4B28(iParam14, 6);
					unk_0x2042E9CA4306F725();
				}
				else if (fParam13 != -1f)
				{
					unk_0xB23270F3D5E62FDE("NUMBER");
					unk_0x5BC8B357341A4FEE(fParam13, 1);
					unk_0x2042E9CA4306F725();
				}
				else if (iParam10 != -1)
				{
					unk_0xAD291B8F75D737AD(iParam10);
				}
				else
				{
					func_435("");
				}
				if (uParam2->f_108 == 6)
				{
					func_435("");
				}
				else
				{
					func_435(&sParam4);
				}
				func_423(uParam2, iParam0);
				if (iParam12 == 1 || unk_0x7BCC91F3C1CF24E8(sParam8))
				{
					func_435("");
					func_435("");
				}
				else
				{
					unk_0x4A096F645CED26D9(sParam8);
					unk_0x4A096F645CED26D9(sParam8);
				}
				if (func_422(uParam2))
				{
					func_421("DPAD_FRIEND");
				}
				else if (func_420(uParam2))
				{
					func_421("DPAD_FRIEND");
				}
				else if (func_419(uParam2))
				{
					func_421("DPAD_CREW");
				}
				else
				{
					func_421("");
				}
				unk_0xE1FDD153F5858534();
			}
		}
	}
}

int func_439(int iParam0)
{
	return 0;
	switch (iParam0)
	{
		case 11:
		case 12:
			return 1;
		
		default:
	}
	return 0;
}

int func_440(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 116;
	if ((!bParam1 && func_433(iParam0)) && !func_129(iParam0))
	{
		iVar0 = func_322();
	}
	iVar1 = func_84(iParam0);
	if (!iVar1 == -1)
	{
		return func_82(iVar1);
	}
	return iVar0;
}

char* func_441(int iParam0, bool bParam1, bool bParam2, int iParam3)
{
	switch (iParam0)
	{
		case 0:
		case 3:
		case 4:
		case 5:
		case 1:
		case 6:
		case 9:
		case 10:
		case 13:
		case 11:
		case 12:
			if (unk_0x1CB1AF03C74FCE70())
			{
				if (bParam1)
				{
					return "AMCH_M_LB";
				}
				else if (bParam2)
				{
					return "AMCH_M";
				}
				else
				{
					return "AMCH_METRES";
				}
			}
			else if (bParam1)
			{
				return "AMCH_FT_LB";
			}
			else if (bParam2)
			{
				return "AMCH_FT";
			}
			else
			{
				return "AMCH_FEET";
			}
			break;
		
		case 2:
			if (unk_0x1CB1AF03C74FCE70())
			{
				if (bParam1)
				{
					return "AMCH_KMH_LB";
				}
				else if (bParam2)
				{
					return "AMCH_KMHN";
				}
				else
				{
					return "AMCH_KMH";
				}
			}
			else if (bParam1)
			{
				return "AMCH_MPH_LB";
			}
			else if (bParam2)
			{
				return "AMCH_MPHN";
			}
			else
			{
				return "AMCH_MPH";
			}
			break;
		
		case 7:
			if (bParam1 || bParam2)
			{
				return "";
			}
			else
			{
				return "AMCH_VEH";
			}
			break;
		
		case 15:
		case 16:
		case 17:
		case 18:
			if (bParam1 || bParam2)
			{
				return "";
			}
			else if (iParam3 != 1)
			{
				return "AMCH_KILLS";
			}
			else
			{
				return "AMCH_KILL";
			}
			break;
	}
	if (bParam1 || bParam2)
	{
		return "";
	}
	return "AMCH_EMPTY";
}

int func_442(var uParam0, float fParam1, int iParam2, int iParam3)
{
	if (func_446(iParam3))
	{
		*fParam1 = (func_443(iParam3, iParam2) / 10f);
		return 1;
	}
	if (func_439(iParam3))
	{
		*fParam1 = (func_443(iParam3, iParam2) / 1000f);
		return 1;
	}
	*uParam0 = iParam2;
	return 0;
}

float func_443(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
		case 3:
		case 4:
		case 5:
		case 1:
		case 6:
		case 9:
		case 10:
		case 13:
		case 11:
		case 12:
			if (unk_0x1CB1AF03C74FCE70())
			{
				return to_float(iParam1);
			}
			else
			{
				return func_445(to_float(iParam1));
			}
			break;
		
		case 2:
			if (unk_0x1CB1AF03C74FCE70())
			{
				return to_float(iParam1);
			}
			else
			{
				return func_444(to_float(iParam1));
			}
			break;
	}
	return to_float(iParam1);
}

float func_444(float fParam0)
{
	return (fParam0 / 1.609344f);
}

float func_445(float fParam0)
{
	return (fParam0 / 0.3048f);
}

int func_446(int iParam0)
{
	switch (iParam0)
	{
		case 0:
		case 2:
		case 3:
		case 5:
		case 4:
		case 1:
		case 6:
		case 9:
		case 10:
		case 13:
		case 11:
		case 12:
			return 1;
		
		default:
	}
	return 0;
}

int func_447(int iParam0)
{
	int iVar0;
	
	iVar0 = func_450(iParam0);
	if (iVar0 == -1)
	{
		func_448(iParam0, 1);
		return 0;
	}
	Global_1389221[iVar0 /*5*/].f_4 = 1;
	return Global_1389221[iVar0 /*5*/].f_2;
}

void func_448(int iParam0, bool bParam1)
{
	if (!func_9(iParam0, 0, 1))
	{
		return;
	}
	if (func_450(iParam0) != -1)
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
	if (func_449(iParam0))
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

int func_449(int iParam0)
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

int func_450(int iParam0)
{
	int iVar0;
	
	if (!func_9(iParam0, 0, 1))
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
			func_451(iVar0);
			return -1;
		}
		iVar0++;
	}
	return -1;
}

void func_451(int iParam0)
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
	func_452(&(Global_1389221[iVar2 /*5*/]));
	Global_1389382 = (Global_1389382 - 1);
}

void func_452(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = func_10();
	uParam0->f_2 = 0;
	uParam0->f_4 = 0;
	if (unk_0x25DDB354A40FFCDB())
	{
		uParam0->f_3 = unk_0x6CAAB7E78B5D978A();
	}
}

struct<4> func_453(int iParam0)
{
	char cVar0[32];
	
	if (func_9(iParam0, 0, 1))
	{
		Global_2515173 = { func_180(iParam0) };
		if (unk_0xC6C08C02733D02C8())
		{
			if (func_409(Global_2515173))
			{
				if (!unk_0xA20DDBBB15EC6235(&Global_2515173))
				{
					return cVar0;
				}
			}
		}
		else if (!unk_0xF9A94F315B890564(0))
		{
			return cVar0;
		}
		if (func_457(&Global_2515173))
		{
			Global_2515103 = { func_455(iParam0) };
			func_454(&Global_2515103, &cVar0);
		}
	}
	return cVar0;
}

void func_454(var uParam0, char* sParam1)
{
	unk_0xA36843D7CCD081D6(uParam0, 35, sParam1);
}

struct<35> func_455(int iParam0)
{
	struct<13> Var0;
	struct<35> Var1;
	
	if (func_456(iParam0))
	{
		return Global_1312928[unk_0x460153A63B9477BC() /*35*/];
	}
	Var0 = { func_180(iParam0) };
	unk_0x192BD21E18525C69(&Var1, 35, &Var0);
	return Var1;
}

int func_456(int iParam0)
{
	if (iParam0 == unk_0x460153A63B9477BC())
	{
		return 1;
	}
	return 0;
}

int func_457(var uParam0)
{
	if (unk_0xDCA94C1EA9942FBD())
	{
		if (unk_0xE2FBD13450B2DA21() && unk_0xBF9EC1ED7E386622(uParam0))
		{
			return 1;
		}
	}
	return 0;
}

int func_458(int iParam0, int iParam1)
{
	if (iParam1 == 27)
	{
		if ((func_461(iParam0) || func_460(iParam0)) || func_459(iParam0))
		{
			return 0;
		}
	}
	if (!func_400(iParam0))
	{
		return 0;
	}
	if ((!func_467(iParam0) && Global_2425869[iParam0 /*443*/].f_240 == -1) && !func_30(iParam0))
	{
		return 0;
	}
	return 1;
}

bool func_459(int iParam0)
{
	if (func_461(iParam0))
	{
		return 1;
	}
	return unk_0xCE990E643CD9D0E5(Global_1630317[iParam0 /*595*/].f_1, 8);
}

int func_460(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return (unk_0xCE990E643CD9D0E5(Global_1630317[iParam0 /*595*/].f_1, 10) || unk_0xCE990E643CD9D0E5(Global_1630317[iParam0 /*595*/].f_1, 9));
	}
	return 0;
}

bool func_461(int iParam0)
{
	return unk_0xCE990E643CD9D0E5(Global_1630317[iParam0 /*595*/].f_1, 2);
}

int func_462(int iParam0)
{
	int iVar0;
	
	if (iParam0 == func_10())
	{
		return 0;
	}
	if (func_19(iParam0, 0))
	{
		return 0;
	}
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		if (unk_0xCE990E643CD9D0E5(Global_1590682[iVar0 /*883*/].f_142, 2))
		{
			return 0;
		}
	}
	return 1;
}

int func_463()
{
	switch (func_32(unk_0x460153A63B9477BC()))
	{
		case 179:
		case 180:
		case 182:
		case 183:
		case 184:
		case 185:
		case 186:
		case 189:
		case 190:
		case 191:
		case 192:
		case 195:
		case 197:
		case 198:
		case 200:
		case 201:
		case 202:
		case 203:
		case 204:
		case 206:
		case 207:
		case 208:
		case 209:
		case 211:
			return 1;
		
		default:
	}
	switch (func_431(unk_0x460153A63B9477BC()))
	{
		case 131:
		case 140:
		case 138:
		case 146:
			return 1;
			break;
	}
	if (func_129(unk_0x460153A63B9477BC()))
	{
		switch (func_32(unk_0x460153A63B9477BC()))
		{
			case 148:
			case 151:
			case 152:
			case 153:
			case 157:
			case 159:
			case 162:
			case 164:
			case 142:
				return 1;
				break;
			}
	}
	if (func_429(unk_0x460153A63B9477BC()))
	{
		return 1;
	}
	return 0;
}

int func_464(int iParam0, int iParam1)
{
	if (Global_1630317[iParam0 /*595*/].f_11.f_33 != -1 && func_465(Global_1630317[iParam0 /*595*/].f_11.f_33))
	{
		return 1;
	}
	if (iParam1 && Global_1630317[iParam0 /*595*/].f_11.f_32 != -1)
	{
		if (func_465(Global_1630317[iParam0 /*595*/].f_11.f_32))
		{
			return 1;
		}
	}
	return 0;
}

int func_465(int iParam0)
{
	switch (iParam0)
	{
		case 155:
		case 160:
		case 153:
		case 162:
		case 154:
		case 163:
		case 171:
		case 172:
		case 240:
		case 239:
			return 1;
		
		default:
	}
	return func_118(iParam0, 0);
	return 0;
}

void func_466(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (func_9(unk_0xF1110FE23C67293A(iVar0), 0, 1))
		{
			iVar1 = unk_0xF1110FE23C67293A(iVar0);
			if (!func_19(iVar1, 0))
			{
				if ((func_467(iVar1) || Global_2425869[iVar1 /*443*/].f_240 != -1) || func_30(iVar1))
				{
					if (func_48(iVar1, iParam1, 0))
					{
						(*iParam0)[iVar0] = *iParam2;
						*iParam2++;
						*iParam3++;
					}
				}
			}
		}
		iVar0++;
	}
}

int func_467(int iParam0)
{
	if (func_9(iParam0, 0, 1))
	{
		if (func_9(unk_0x460153A63B9477BC(), 0, 1))
		{
			if (unk_0x56B60AE958412839(iParam0, unk_0x460153A63B9477BC()) || (func_32(iParam0) == 233 && func_468(iParam0)))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_468(int iParam0)
{
	bool bVar0;
	bool bVar1;
	
	bVar0 = func_469(unk_0x460153A63B9477BC());
	bVar1 = func_469(iParam0);
	if ((bVar0 && !bVar1) || (!bVar0 && bVar1))
	{
		return 0;
	}
	return 1;
}

bool func_469(int iParam0)
{
	return func_470(&(Global_2425869[iParam0 /*443*/].f_429), 0);
}

bool func_470(var uParam0, int iParam1)
{
	return unk_0xCE990E643CD9D0E5(*uParam0, iParam1);
}

void func_471(int iParam0, int iParam1, int iParam2)
{
	if (unk_0x95EF219D38B20CFF(*iParam0))
	{
		unk_0x830F007E19C63E14(*iParam0, "SET_DATA_SLOT_EMPTY");
		unk_0xAD291B8F75D737AD(iParam1);
		unk_0xAD291B8F75D737AD(iParam2);
		unk_0xE1FDD153F5858534();
	}
}

void func_472(bool bParam0)
{
	if (bParam0)
	{
		if (Global_1377233.f_2 == 0)
		{
			Global_1377233.f_2 = 1;
		}
	}
	else if (Global_1377233.f_2 == 1)
	{
		Global_1377233.f_2 = 0;
	}
}

void func_473()
{
	if (unk_0xCE990E643CD9D0E5(Global_2540384.f_4652, 1))
	{
		if (func_340())
		{
			func_339();
		}
	}
}

int func_474()
{
	if (unk_0xCE990E643CD9D0E5(Global_2540384.f_4652, 0) && func_340())
	{
		return 1;
	}
	if (unk_0xCE990E643CD9D0E5(Global_2540384.f_4652, 1) && func_340())
	{
		return 1;
	}
	return 0;
}

int func_475()
{
	if (func_340())
	{
		if (func_311(Global_2440049.f_2834[0 /*80*/].f_1))
		{
			return 1;
		}
	}
	return 0;
}

int func_476()
{
	if (func_340())
	{
		if (func_323(Global_2440049.f_2834[0 /*80*/].f_1))
		{
			return 1;
		}
	}
	return 0;
}

void func_477(int iParam0)
{
	if (Global_1377233.f_1 != Global_1377233)
	{
		Global_1377233.f_1 = Global_1377233;
	}
	if (Global_1377233 != iParam0)
	{
		Global_1377233 = iParam0;
	}
}

int func_478(int iParam0, int iParam1, var uParam2, var uParam3, bool bParam4, bool bParam5, char* sParam6)
{
	struct<4> Var0;
	char* sVar1;
	bool bVar2;
	bool bVar3;
	float fVar4;
	int iVar5;
	char* sVar6;
	
	StringCopy(&Var0, "", 16);
	bVar2 = iParam1 == 20;
	bVar3 = func_520(iParam1);
	fVar4 = func_519();
	iVar5 = -1;
	if (iParam1 == 27 || iParam1 == 28)
	{
		if (func_518())
		{
			if (func_517() > 0 && Global_1574193)
			{
				unk_0xD10328357EA7B9E5();
				unk_0x530DC1525CA60B00(fVar4);
				unk_0x4CB4237D8858ADA6(18);
				if (unk_0xDABD547F0DF2906C())
				{
					unk_0x64083C4199676F44();
				}
				unk_0x4CB4237D8858ADA6(10);
			}
		}
	}
	if (!bParam5)
	{
		if (!func_507())
		{
			func_506(iParam0, uParam2, 1);
			return 0;
		}
	}
	if (unk_0xCE990E643CD9D0E5(Global_2540384.f_4655, 26))
	{
		func_506(iParam0, uParam2, 1);
		return 0;
	}
	if (!func_406(&(uParam2->f_19)))
	{
		if (func_517() == 1)
		{
			func_505(bVar3, iParam0, 0);
			func_4(&(uParam2->f_19), 0, 0);
			func_506(iParam0, uParam2, 0);
			unk_0xBE20AB8238688965(&(Global_2540384.f_4656), 5);
		}
	}
	if (func_406(&(uParam2->f_19)) || bParam5)
	{
		if (unk_0xDABD547F0DF2906C())
		{
			unk_0x64083C4199676F44();
		}
		unk_0x4CB4237D8858ADA6(10);
		if (func_3(&(uParam2->f_19), 10000, 0) || (func_517() == 0 && !bParam5))
		{
			func_506(iParam0, uParam2, 1);
			return 0;
		}
		else
		{
			if (bVar2 == 0)
			{
				func_504();
				if (iParam1 == 27 || iParam1 == 28)
				{
					unk_0xD10328357EA7B9E5();
				}
				unk_0x4CB4237D8858ADA6(18);
			}
			if (!unk_0xCE990E643CD9D0E5(uParam2->f_33, 0))
			{
				if (bVar2 == 0)
				{
					func_504();
					if (iParam1 == 27 || iParam1 == 28)
					{
						unk_0xD10328357EA7B9E5();
					}
					unk_0x4CB4237D8858ADA6(18);
				}
				unk_0x530DC1525CA60B00(fVar4);
				if (func_505(bVar3, iParam0, 0))
				{
					func_471(iParam0, 0, 0);
					sVar1 = func_502(iParam1, &(Global_4456448.f_82715), bParam4);
					Var0 = { func_500(iParam1) };
					if (bParam4)
					{
						func_497(iParam0, sVar1, "", 0, -1, -1, 1);
					}
					else if (iParam1 == 27)
					{
						func_490(iParam0, func_494(uParam2), func_491(uParam2), -1);
					}
					else if (iParam1 == 28)
					{
						sVar6 = func_486(uParam2);
						if (!unk_0x7BCC91F3C1CF24E8(sParam6))
						{
							sVar6 = sParam6;
						}
						func_484(iParam0, sVar6, func_485(), -1);
					}
					else if (func_424())
					{
						uParam2->f_34 = Global_1574192;
						func_497(iParam0, sVar1, &Var0, 1, -1, Global_1574192, 1);
					}
					else if (bVar2)
					{
						iVar5 = func_479(iParam1);
						uParam2->f_34 = Global_1574192;
						func_497(iParam0, sVar1, "", 0, iVar5, Global_1574192, 1);
					}
					else
					{
						iVar5 = func_479(iParam1);
						func_497(iParam0, sVar1, &Var0, 1, iVar5, -1, 1);
					}
					unk_0xBE20AB8238688965(&(uParam2->f_33), 0);
				}
			}
			if (unk_0xCE990E643CD9D0E5(uParam2->f_33, 0))
			{
				Global_1574191 = uParam3;
				Global_1574190 = 1;
				unk_0x530DC1525CA60B00(fVar4);
				if (bVar2)
				{
					if (uParam2->f_34 != Global_1574192)
					{
						unk_0xD2459066EA58CE43(&(uParam2->f_33), 0);
					}
				}
				return 1;
			}
		}
	}
	return 0;
}

int func_479(int iParam0)
{
	int iVar0;
	
	iVar0 = -1;
	if (func_483())
	{
		iVar0 = 2;
	}
	switch (iParam0)
	{
		case 40:
			iVar0 = 22;
			break;
		
		case 0:
		case 31:
		case 30:
		case 32:
		case 33:
		case 34:
		case 35:
		case 36:
		case 37:
		case 38:
		case 39:
			iVar0 = 3;
			break;
		
		case 2:
			iVar0 = 3;
			break;
		
		case 1:
			iVar0 = 6;
			break;
		
		case 3:
			iVar0 = 5;
			break;
		
		case 26:
			iVar0 = 21;
			break;
		
		case 4:
		case 5:
		case 6:
		case 8:
		case 9:
		case 10:
		case 11:
			iVar0 = 4;
			break;
		
		case 7:
			iVar0 = 10;
			break;
		
		case 12:
		case 13:
		case 14:
		case 17:
			iVar0 = 2;
			break;
		
		case 15:
			iVar0 = 17;
			break;
		
		case 16:
			iVar0 = 18;
			break;
		
		case 18:
			if (func_482(unk_0x460153A63B9477BC()))
			{
				iVar0 = 20;
			}
			if (func_481(unk_0x460153A63B9477BC()))
			{
				iVar0 = 19;
			}
			break;
	}
	if (func_480(unk_0x460153A63B9477BC()))
	{
		iVar0 = 2;
	}
	if (func_201())
	{
		iVar0 = 20;
	}
	return iVar0;
}

bool func_480(int iParam0)
{
	return Global_2425869[iParam0 /*443*/].f_119 == 4;
}

bool func_481(int iParam0)
{
	return Global_2425869[iParam0 /*443*/].f_119 == 7;
}

bool func_482(int iParam0)
{
	return Global_2425869[iParam0 /*443*/].f_119 == 2;
}

bool func_483()
{
	return Global_4456448.f_1 == 0;
}

void func_484(int iParam0, char* sParam1, char* sParam2, int iParam3)
{
	if (unk_0x95EF219D38B20CFF(*iParam0))
	{
		unk_0x830F007E19C63E14(*iParam0, "SET_TITLE");
		if (unk_0x7BCC91F3C1CF24E8(sParam2))
		{
			func_421(sParam1);
		}
		else
		{
			unk_0xB23270F3D5E62FDE("FM_AE_BRACKT");
			unk_0x6A826E35A3096ED0(sParam1);
			unk_0x6A826E35A3096ED0(sParam2);
			unk_0x2042E9CA4306F725();
		}
		func_421("");
		if (iParam3 != -1)
		{
			unk_0xAD291B8F75D737AD(iParam3);
		}
		unk_0xE1FDD153F5858534();
	}
}

char* func_485()
{
	switch (func_32(unk_0x460153A63B9477BC()))
	{
		case 163:
			return "BD_SORT_1";
			break;
		
		case 160:
			return "BD_SORT_4";
			break;
		
		case 154:
			return "BD_SORT_3";
			break;
		
		case 155:
			return "BD_SORT_3";
			break;
	}
	return "";
}

char* func_486(var uParam0)
{
	switch (uParam0->f_112)
	{
		case 0:
			return "GR_DPD_E";
			break;
		
		case 1:
			return "GR_DPD_F";
			break;
		
		case 2:
			return "GR_DPD_S";
			break;
	}
	switch (uParam0->f_110)
	{
		case 0:
			return "GR_DPD_A";
			break;
		
		case 1:
			return "GR_DPD_B";
			break;
		
		case 2:
			return "GR_DPD_C";
			break;
		
		case 3:
			return "GR_DPD_D";
			break;
	}
	switch (func_32(unk_0x460153A63B9477BC()))
	{
		case 233:
			return "H2_DPAD_SET";
			break;
		
		case 180:
			return "GB_BIGUNLOAD_T";
			break;
		
		case 182:
			return "DEAL_DEALN";
			break;
		
		case 194:
			return "PI_BIK_13_0";
			break;
		
		case 189:
			return "PI_BIK_4_1";
			break;
		
		case 193:
			return "PI_BIK_13_1";
			break;
		
		case 205:
			return "PI_BIK_13_3";
			break;
		
		case 186:
			return "CELL_BIKER_CK";
			break;
		
		case 207:
			return "DV_SH_TITLE";
			break;
		
		case 208:
			return "BA_SH_TITLE";
			break;
		
		case 209:
			return "SHU_SH_TITLE";
			break;
		
		case 210:
			return "PI_BIK_13_4";
			break;
		
		case 183:
			return "CELL_BIKER_RESC";
			break;
		
		case 199:
			return "CELL_BIKER_SEAR";
			break;
		
		case 201:
			return "CELL_BIKER_STAN";
			break;
		
		case 142:
			return "PIM_MAGM210";
			break;
		
		case 163:
			return "PIM_MAGM608";
			break;
		
		case 160:
			return "PIM_MAGM604";
			break;
		
		case 154:
			return "PIM_MAGM602";
			break;
		
		case 155:
			return "PIM_MAGM603";
			break;
		
		case 148:
			if (func_488())
			{
				return "LBD_BKVBK";
			}
			return "PIM_MAGM201";
			break;
		
		case 151:
			if (func_210(1))
			{
				return "GB_DPAD_BMFD";
			}
			return "PIM_MAGM202";
			break;
		
		case 152:
			return "PIM_MAGM204";
			break;
		
		case 153:
			if (func_210(1))
			{
				return "PI_BIK_3_2";
			}
			return "PIM_MAGM601";
			break;
		
		case 157:
			return "PIM_MAGM207";
			break;
		
		case 159:
			return "PIM_MAGM206";
			break;
		
		case 162:
			return "PIM_MAGM607";
			break;
		
		case 164:
			return "PIM_MAGM212";
			break;
		
		case 166:
			return "GB_DPAD_HEAD";
		
		case 167:
			return "GB_DPAD_BUY";
		
		case 168:
			return "GB_DPAD_SELL";
		
		case 169:
			return "GB_DPAD_DEF";
		
		case 170:
			return "GB_DPAD_AIR";
		
		case 171:
			return "GB_DPAD_CASH";
		
		case 172:
			return "GB_DPAD_SAL";
		
		case 173:
			return "GB_DPAD_FRA";
		
		case 178:
			return "VEX_TITLEa";
		
		case 188:
			return "VEX_TITLEb";
		
		case 218:
			return "FRT_MODE";
		
		case 217:
			return "FRT_TRNS";
		
		case 214:
			return "MODE_PLW";
		
		case 215:
			return "MODE_FUL";
		
		case 216:
			return "MODE_AA";
		
		case 219:
			return "MODE_VEL";
		
		case 220:
			return "MODE_RMP";
		
		case 221:
			return "MODE_STK";
		
		case 225:
			return "GR_TITLEL";
		
		case 226:
			return "GRS_TITLEL";
		
		case 227:
			return "GRD_TITLEL";
		
		case 195:
			return "GB_STEAL_T";
		
		case 198:
			return "SC_MENU_TITLE";
		
		case 190:
			return "GB_DPAD_BSEL";
		
		case 191:
			return "GB_DPAD_BDEF";
		
		case 185:
			return "GB_DPAD_GFH";
		
		case 197:
			return "GB_DPAD_JB";
		
		case 179:
			return "CELL_JOUST";
		
		case 200:
			return "CAG_BLIP";
		
		case 192:
			if (func_487(Global_1630317[unk_0x460153A63B9477BC() /*595*/].f_11.f_181))
			{
				return "GB_DPAD_BSET";
			}
			return "GB_DPAD_BBUY";
			break;
	}
	return "";
}

int func_487(int iParam0)
{
	switch (iParam0)
	{
		case 15:
		case 16:
		case 17:
		case 18:
		case 19:
			return 1;
		
		default:
	}
	return 0;
}

bool func_488()
{
	return (func_489() && func_65(func_63()));
}

bool func_489()
{
	return Global_1590682[unk_0x460153A63B9477BC() /*883*/] == 148;
}

void func_490(int iParam0, char* sParam1, char* sParam2, int iParam3)
{
	if (unk_0x95EF219D38B20CFF(*iParam0))
	{
		unk_0x830F007E19C63E14(*iParam0, "SET_TITLE");
		if (unk_0x7BCC91F3C1CF24E8(sParam2))
		{
			func_421(sParam1);
		}
		else if (func_431(unk_0x460153A63B9477BC()) == 133)
		{
			unk_0xB23270F3D5E62FDE("FM_AE_BRACKT_C");
			unk_0x6A826E35A3096ED0(sParam1);
			unk_0x6A826E35A3096ED0(sParam2);
			unk_0x2042E9CA4306F725();
		}
		else
		{
			unk_0xB23270F3D5E62FDE("FM_AE_BRACKT");
			unk_0x6A826E35A3096ED0(sParam1);
			unk_0x6A826E35A3096ED0(sParam2);
			unk_0x2042E9CA4306F725();
		}
		func_421("");
		if (iParam3 != -1)
		{
			unk_0xAD291B8F75D737AD(iParam3);
		}
		unk_0xE1FDD153F5858534();
	}
}

char* func_491(var uParam0)
{
	int iVar0;
	
	iVar0 = func_431(unk_0x460153A63B9477BC());
	if (func_493())
	{
		if (uParam0->f_103 != -1)
		{
			iVar0 = uParam0->f_103;
		}
	}
	switch (iVar0)
	{
		case 131:
			return "";
		
		case 132:
			return "FM_AE_SORT_5";
		
		case 133:
			switch (func_492())
			{
				case 0:
					return "FM_AE_SORT_2";
				
				case 1:
					return "FM_AE_SORT_2";
				
				case 2:
					return "FM_AE_SORT_3";
				
				case 3:
					return "FM_AE_SORT_2";
				
				case 4:
					return "FM_AE_SORT_2";
				
				case 5:
					return "FM_AE_SORT_2";
				
				case 6:
					return "FM_AE_SORT_2";
				
				case 7:
					return "FM_AE_SORT_13";
				
				case 8:
					return "FM_AE_SORT_4";
				
				case 9:
					return "FM_AE_SORT_2";
				
				case 10:
					return "FM_AE_SORT_2";
				
				case 11:
					return "FM_AE_SORT_2";
				
				case 12:
					return "FM_AE_SORT_2";
				
				case 13:
					return "FM_AE_SORT_2";
				
				case 14:
					return "FM_AE_SORT_5";
				
				case 15:
					return "FM_AE_SORT_9";
				
				case 16:
					return "FM_AE_SORT_9";
				
				case 17:
					return "FM_AE_SORT_9";
				
				case 18:
					return "FM_AE_SORT_9";
				
				default:
			}
			break;
		
		case 136:
			return "";
		
		case 138:
			return "";
		
		case 139:
			return "FM_AE_SORT_10";
		
		case 140:
			return "";
		
		case 141:
			return "FM_AE_SORT_5";
		
		case 144:
			return "FM_AE_SORT_1";
		
		case 129:
			return "FM_AE_SORT_9";
	}
	return "";
}

int func_492()
{
	if (func_431(unk_0x460153A63B9477BC()) == 133)
	{
		return Global_2540384.f_5109;
	}
	return -1;
}

bool func_493()
{
	return Global_1590555;
}

char* func_494(var uParam0)
{
	int iVar0;
	
	iVar0 = func_431(unk_0x460153A63B9477BC());
	if (func_493())
	{
		if (uParam0->f_103 != -1)
		{
			iVar0 = uParam0->f_103;
		}
	}
	switch (iVar0)
	{
		case 131:
			return "PIM_TA9";
		
		case 132:
			if (func_496() == 0)
			{
				return "CPC_TILEL";
			}
			else if (func_496() == 1)
			{
				return "CPC_TILELA";
			}
			return "PIM_TA0";
			break;
		
		case 133:
			switch (func_492())
			{
				case 0:
					return "AMCH_0SLC";
				
				case 1:
					return "AMCH_1SLC";
				
				case 2:
					return "AMCH_2SLC";
				
				case 3:
					return "AMCH_3SLC";
				
				case 4:
					return "AMCH_4SLC";
				
				case 5:
					return "AMCH_5SLC";
				
				case 6:
					return "AMCH_6SLC";
				
				case 7:
					return "AMCH_7SLC";
				
				case 8:
					return "AMCH_8SLC";
				
				case 9:
					return "AMCH_12SLC";
				
				case 10:
					return "AMCH_13SLC";
				
				case 11:
					return "AMCH_15SLC";
				
				case 12:
					return "AMCH_16SLC";
				
				case 13:
					return "AMCH_23SLC";
				
				case 14:
					return "AMCH_9SLC";
				
				case 15:
					return "AMCH_19SLC";
				
				case 16:
					return "AMCH_20SLC";
				
				case 17:
					return "AMCH_21SLC";
				
				case 18:
					return "AMCH_22SLC";
				
				default:
			}
			break;
		
		case 136:
			return "PIM_TA10";
		
		case 138:
			return "PIM_TA4";
		
		case 139:
			return "PIM_TA5";
		
		case 140:
			return "PIM_TA3";
		
		case 141:
			return "PIM_TA8";
		
		case 144:
			return "PIM_TA2";
		
		case 129:
			if (func_495() == 1)
			{
				return "FM_AE_TITL_12";
			}
			else
			{
				return "PIM_TA7";
			}
			break;
		
		case 146:
			return "PIM_TA6";
	}
	return "";
}

int func_495()
{
	return Global_2540384.f_5112;
}

int func_496()
{
	if (func_431(unk_0x460153A63B9477BC()) == 132)
	{
		return Global_2540384.f_5107;
	}
	return -1;
}

void func_497(int iParam0, char* sParam1, char* sParam2, bool bParam3, int iParam4, int iParam5, int iParam6)
{
	int iVar0;
	int iVar1;
	
	if (unk_0x95EF219D38B20CFF(*iParam0))
	{
		unk_0x830F007E19C63E14(*iParam0, "SET_TITLE");
		if (bParam3)
		{
			func_435(sParam1);
		}
		else if (iParam5 != -1)
		{
			unk_0xB23270F3D5E62FDE(sParam1);
			unk_0x42710E9E08FA375A(iParam5);
			unk_0x2042E9CA4306F725();
		}
		else
		{
			func_421(sParam1);
		}
		if (func_518() && iParam6)
		{
			if (func_499())
			{
				iVar0 = 2;
				iVar1 = 2;
			}
			else
			{
				iVar0 = 1;
				iVar1 = 2;
			}
			unk_0xB23270F3D5E62FDE("LBD_DPD_CNT");
			unk_0x42710E9E08FA375A(iVar0);
			unk_0x42710E9E08FA375A(iVar1);
			unk_0x2042E9CA4306F725();
		}
		else
		{
			func_421(sParam2);
		}
		if (iParam4 != -1)
		{
			unk_0xAD291B8F75D737AD(iParam4);
			if (func_498(unk_0x460153A63B9477BC()))
			{
				unk_0xAD291B8F75D737AD(166);
			}
			else if (func_88())
			{
				unk_0xAD291B8F75D737AD(220);
			}
		}
		unk_0xE1FDD153F5858534();
	}
}

int func_498(int iParam0)
{
	if (func_482(iParam0) || func_481(iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_499()
{
	return Global_1574193;
}

struct<4> func_500(int iParam0)
{
	struct<4> Var0;
	
	StringCopy(&Var0, "", 16);
	if (func_501(unk_0x460153A63B9477BC()) || func_480(unk_0x460153A63B9477BC()))
	{
		return Var0;
	}
	switch (iParam0)
	{
		case 12:
		case 13:
		case 14:
		case 17:
		case 15:
		case 16:
		case 18:
			StringCopy(&Var0, "LBD_DIF_", 16);
			StringIntConCat(&Var0, Global_4456448.f_525, 16);
			break;
	}
	if (func_424() && unk_0xFC559366953F62B3())
	{
		StringCopy(&Var0, "LBD_DIF_", 16);
		StringIntConCat(&Var0, Global_4456448.f_525, 16);
	}
	return Var0;
}

bool func_501(int iParam0)
{
	return Global_2425869[iParam0 /*443*/].f_119 == 5;
}

char* func_502(int iParam0, char* sParam1, bool bParam2)
{
	var uVar0;
	
	if (iParam0 == 20 && (!func_424() || unk_0x7BCC91F3C1CF24E8(sParam1)))
	{
		uVar0 = func_503();
		return uVar0;
	}
	else if (bParam2)
	{
		return "HUD_LBD_IMP";
	}
	else if (iParam0 == 25)
	{
		if (Global_1574431 == 0)
		{
			Global_1574431 = 1;
		}
		return "HUD_LBD_OVR";
	}
	else if (!unk_0x7BCC91F3C1CF24E8(sParam1))
	{
		if (Global_1574431 == 1)
		{
			Global_1574431 = 0;
		}
		return sParam1;
	}
	else
	{
		if (Global_1574431 == 0)
		{
			Global_1574431 = 1;
		}
		switch (iParam0)
		{
			case 0:
			case 31:
				return "HUD_LBD_DM";
				break;
			
			case 1:
				return "HUD_LBD_TDM";
				break;
			
			case 5:
				return "HUD_LBD_GRCE";
				break;
			
			case 4:
			case 9:
			case 10:
			case 6:
			case 26:
			case 11:
				return "HUD_LBD_RCE";
				break;
			
			case 7:
				return "HUD_LBD_BRCE";
				break;
			
			case 18:
			case 14:
			case 17:
			case 15:
			case 13:
			case 12:
			case 16:
			case 19:
				return "HUD_TITLEMC";
				break;
			
			case 3:
				return "HUD_LBD_HRD";
				break;
			
			case 22:
				return "HUD_LBD_SHOO";
				break;
			}
	}
	return sParam1;
}

char* func_503()
{
	if (unk_0x45A083C1167D5EA3())
	{
		return "HUD_LBD_FMF";
	}
	if (unk_0x8F4B4AF1CA27A518())
	{
		return "HUD_LBD_FMC";
	}
	if (unk_0xE598AA6FDE2D9C78())
	{
		return "HUD_LBD_FMS";
	}
	if (unk_0x0287AAEDDA576E74())
	{
		return "HUD_LBD_FMI";
	}
	return "HUD_LBD_FMP";
}

void func_504()
{
	Global_42556 = 1;
}

bool func_505(bool bParam0, int iParam1, bool bParam2)
{
	if (bParam0)
	{
		*iParam1 = unk_0x5DEA4192B46CB99B("mp_mm_card_freemode");
	}
	else if (bParam2)
	{
		*iParam1 = unk_0x5DEA4192B46CB99B("MP_SPECTATOR_CARD");
	}
	else
	{
		*iParam1 = unk_0x5DEA4192B46CB99B("mp_matchmaking_card");
	}
	return unk_0x95EF219D38B20CFF(*iParam1);
}

void func_506(int iParam0, var uParam1, bool bParam2)
{
	unk_0xD2459066EA58CE43(&(uParam1->f_33), 7);
	Global_1574191 = 0;
	func_413();
	Global_1574190 = 0;
	uParam1->f_27 = 0;
	if (bParam2)
	{
		if (func_406(&(uParam1->f_19)))
		{
			func_414(&(uParam1->f_19));
			unk_0xD2459066EA58CE43(&(Global_2540384.f_4656), 5);
		}
	}
	if (unk_0x95EF219D38B20CFF(*iParam0))
	{
		unk_0x2E352DDBBF674246(iParam0);
	}
	if (unk_0xCE990E643CD9D0E5(uParam1->f_33, 0))
	{
		unk_0xD2459066EA58CE43(&(uParam1->f_33), 0);
	}
	unk_0x530DC1525CA60B00(0f);
}

int func_507()
{
	if (func_516())
	{
		return 0;
	}
	if (func_396())
	{
		return 0;
	}
	if (!func_514())
	{
		return 0;
	}
	if (!func_390())
	{
		return 0;
	}
	if (func_513(8, -1))
	{
		return 0;
	}
	if (func_517() == 2)
	{
		return 0;
	}
	if (Global_2540384.f_4607)
	{
		return 0;
	}
	if (func_394())
	{
		return 0;
	}
	else if (!func_399(unk_0x460153A63B9477BC(), 1, 0) && Global_1311716[0 /*4*/] > 0)
	{
		return 0;
	}
	if (((func_512(1) || func_510(1)) || Global_22411.f_124) || Global_22411)
	{
		return 0;
	}
	if (unk_0xF0C12886E5C1B20E())
	{
		return 0;
	}
	if (func_509() && Global_1696334 == 2)
	{
		return 0;
	}
	if (func_17(unk_0x460153A63B9477BC()) && !func_509())
	{
		return 0;
	}
	if (Global_1663771)
	{
		return 0;
	}
	if (Global_1663776)
	{
		return 0;
	}
	if (func_211(0))
	{
		return 0;
	}
	if (unk_0xCE990E643CD9D0E5(Global_1590682[unk_0x460153A63B9477BC() /*883*/].f_274.f_26, 4))
	{
		return 0;
	}
	if (Global_1370294)
	{
		return 0;
	}
	if ((Global_1690739.f_718.f_5 || Global_1693565.f_718.f_5) || Global_1689767.f_718.f_5)
	{
		return 0;
	}
	if ((Global_1697303.f_724.f_5 || Global_1697303.f_744.f_724.f_5) || Global_1697303.f_1497.f_724.f_5)
	{
		return 0;
	}
	if (Global_1704127.f_726.f_5)
	{
		return 0;
	}
	if (func_508(unk_0x460153A63B9477BC()))
	{
		return 0;
	}
	if ((Global_1370330 || Global_1370331) || Global_1370332)
	{
		return 0;
	}
	return 1;
}

bool func_508(int iParam0)
{
	if (iParam0 == func_10())
	{
		return 0;
	}
	return unk_0xCE990E643CD9D0E5(Global_2425869[iParam0 /*443*/].f_314.f_4, 6);
}

bool func_509()
{
	return (unk_0xCE990E643CD9D0E5(Global_4456448.f_30, 12) && unk_0xCE990E643CD9D0E5(Global_1696335, 0));
}

int func_510(bool bParam0)
{
	if (unk_0xDE4629DF35A51BEF())
	{
		if (!unk_0x5AEB5DDFFAD43CA5(unk_0x9B0761B4C3EB8BC7()))
		{
			if (func_511(unk_0x9B0761B4C3EB8BC7()))
			{
				if (unk_0x22D6FB6153F774D3(0, 25) || unk_0x22D6FB6153F774D3(0, 68))
				{
					return 0;
				}
			}
		}
	}
	if (Global_22411.f_130)
	{
		return 0;
	}
	if (unk_0x22D6FB6153F774D3(0, 19) || (!bParam0 && unk_0xB9C0D9B37277621D(0, 19)))
	{
		return 1;
	}
	if (unk_0xF8EDFF98A9C94C74())
	{
		if (((unk_0x22D6FB6153F774D3(0, 166) || unk_0x22D6FB6153F774D3(0, 167)) || unk_0x22D6FB6153F774D3(0, 168)) || unk_0x22D6FB6153F774D3(0, 169))
		{
			return 1;
		}
		if (!bParam0)
		{
			if (((unk_0xB9C0D9B37277621D(0, 166) || unk_0xB9C0D9B37277621D(0, 167)) || unk_0xB9C0D9B37277621D(0, 168)) || unk_0xB9C0D9B37277621D(0, 169))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_511(int iParam0)
{
	int iVar0;
	
	if (unk_0xE8CD061CB2B99F32())
	{
		if (!unk_0x5AEB5DDFFAD43CA5(iParam0))
		{
			unk_0x1386E5E658CE3032(iParam0, &iVar0, 1);
			if (((iVar0 == joaat("weapon_sniperrifle") || iVar0 == joaat("weapon_heavysniper")) || iVar0 == joaat("weapon_marksmanrifle")) || iVar0 == joaat("WEAPON_HEAVYSNIPER_MK2"))
			{
				return 1;
			}
		}
	}
	return 0;
}

bool func_512(bool bParam0)
{
	if (bParam0)
	{
		return (Global_22411.f_4 && Global_22411.f_104 == 4);
	}
	return Global_22411.f_4;
}

bool func_513(int iParam0, int iParam1)
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

int func_514()
{
	if (func_515())
	{
		return 1;
	}
	if (unk_0x03DB5C6AABF8DA46())
	{
		return 0;
	}
	if (unk_0x5DA78AD6801A0523() || unk_0x5B772EFCB84373BE())
	{
		return 0;
	}
	if (unk_0x463040FA7A1E5224())
	{
		return 0;
	}
	return 1;
}

bool func_515()
{
	return Global_1312458;
}

bool func_516()
{
	return unk_0x578C4EF320340AF7() <= Global_22550.f_5878 + 100;
}

int func_517()
{
	return Global_1377236.f_68;
}

int func_518()
{
	if (Global_1574192 > 16)
	{
		return 1;
	}
	return 0;
}

float func_519()
{
	float fVar0;
	float fVar1;
	float fVar2;
	
	fVar2 = 0.6347182f;
	fVar1 = (1f - (1f - unk_0x1D5FD59B82DB8734()));
	fVar0 = (1f - (fVar1 - fVar2));
	return fVar0;
}

int func_520(int iParam0)
{
	switch (iParam0)
	{
		case 20:
		case 21:
		case 27:
		case 28:
		case 40:
			return 1;
		
		default:
	}
	return 0;
}

int func_521()
{
	if (func_522(unk_0x460153A63B9477BC()))
	{
		return Global_1319161;
	}
	return 0;
}

int func_522(int iParam0)
{
	if (unk_0x25DDB354A40FFCDB())
	{
		if (func_19(iParam0, 0))
		{
			return unk_0x118E43E714532022(iParam0);
		}
	}
	return 0;
}

int func_523()
{
	if (func_521())
	{
		return 1;
	}
	if (func_459(unk_0x460153A63B9477BC()))
	{
		return 0;
	}
	if (func_493())
	{
		return 1;
	}
	if (func_433(unk_0x460153A63B9477BC()))
	{
		switch (func_431(unk_0x460153A63B9477BC()))
		{
			case 131:
			case 132:
			case 133:
			case 136:
			case 138:
			case 139:
			case 141:
			case 144:
			case 146:
				return 1;
				break;
			
			case 140:
				if (!func_524(unk_0x460153A63B9477BC()))
				{
					return 1;
				}
				break;
			
			case 129:
				if (!func_524(unk_0x460153A63B9477BC()))
				{
					return 1;
				}
				break;
			
			case 174:
				if (!func_524(unk_0x460153A63B9477BC()))
				{
					return 1;
				}
				break;
			
			case 175:
				return 1;
				break;
			}
	}
	return 0;
}

bool func_524(int iParam0)
{
	return unk_0xCE990E643CD9D0E5(Global_1630317[iParam0 /*595*/].f_1, 4);
}

int func_525(int iParam0)
{
	if (iParam0 == 28)
	{
		if ((func_433(unk_0x460153A63B9477BC()) && !func_129(unk_0x460153A63B9477BC())) && !func_429(unk_0x460153A63B9477BC()))
		{
			return 1;
		}
	}
	if (iParam0 == 27)
	{
		if (func_33(unk_0x460153A63B9477BC(), 0) && func_129(unk_0x460153A63B9477BC()))
		{
			return 1;
		}
		if (func_526(unk_0x460153A63B9477BC()) == 3)
		{
			return 1;
		}
	}
	return 0;
}

int func_526(int iParam0)
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	var uVar3;
	bool bVar4;
	
	iVar0 = 2;
	bVar1 = ((func_433(iParam0) && !func_461(iParam0)) && !unk_0xCE990E643CD9D0E5(Global_1630317[iParam0 /*595*/].f_1, 8));
	bVar2 = func_129(iParam0);
	uVar3 = func_26();
	bVar4 = func_300();
	if ((bVar1 && (func_430(iParam0) || func_528(iParam0))) || bVar4)
	{
		iVar0 = 0;
	}
	else if (uVar3 || ((!bVar2 && !func_35(iParam0)) && !func_527(iParam0)))
	{
		iVar0 = 2;
	}
	else
	{
		iVar0 = 3;
	}
	if (Global_2540384.f_5188.f_217 != iVar0)
	{
		Global_2540384.f_5188.f_217 = iVar0;
	}
	return iVar0;
}

bool func_527(int iParam0)
{
	return func_36(iParam0, 19);
}

int func_528(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return unk_0xCE990E643CD9D0E5(Global_1630317[iVar0 /*595*/].f_1, 0);
	}
	return 0;
}

void func_529()
{
	if (func_9(func_37(), 1, 1) && !unk_0xA59F96B50B97E63C(unk_0x1FA7B77001D60F9D(func_37()), 0))
	{
		func_530(151, unk_0x3E4D3CCC220BDFB1(unk_0x1FA7B77001D60F9D(func_37()), true), &uLocal_83, 1140457472, 1144750080, 0);
	}
}

void func_530(int iParam0, struct<3> Param1, var uParam2, float fParam3, float fParam4, int iParam5)
{
	float fVar0;
	float fVar1;
	
	if ((((func_433(unk_0x460153A63B9477BC()) && !func_461(unk_0x460153A63B9477BC())) && !unk_0xCE990E643CD9D0E5(Global_1630317[unk_0x460153A63B9477BC() /*595*/].f_1, 8)) && (func_430(unk_0x460153A63B9477BC()) || func_528(unk_0x460153A63B9477BC()))) || func_572(Param1))
	{
		return;
	}
	Global_1676119 = { Param1 };
	fVar0 = vdist(unk_0x3E4D3CCC220BDFB1(unk_0x9B0761B4C3EB8BC7(), false), Param1);
	func_568(iParam0, fVar0);
	if (unk_0xF0C12886E5C1B20E() && unk_0xCFB49FF4012D7C68() == 15)
	{
		if (func_35(unk_0x460153A63B9477BC()) || func_34(unk_0x460153A63B9477BC()))
		{
			if (!unk_0x9257D9337B908AFC(1344549371))
			{
				unk_0x16611E08D2E0FBE9(1344549371);
			}
		}
		else if (unk_0x9257D9337B908AFC(1344549371))
		{
			unk_0x9182C03E20E1D981(1344549371);
		}
	}
	if (fVar0 < fParam3)
	{
		if (!(func_22(unk_0x460153A63B9477BC(), 21) || func_22(unk_0x460153A63B9477BC(), 25)))
		{
			func_567(Param1, 1, 0);
		}
		if (!*uParam2 && func_9(unk_0x460153A63B9477BC(), 1, 1))
		{
			*uParam2 = 1;
			if (func_566(iParam0))
			{
				unk_0x34FEEAC2548C3789(func_565(iParam0));
				if (func_564(iParam0, -1))
				{
					unk_0x53797676AD34A9AA(0);
					if (unk_0x1A3D0DF92BF7D8C4(unk_0x460153A63B9477BC()) > 0)
					{
						unk_0xCAD5C18968E57C30(unk_0x460153A63B9477BC(), 0, 1);
						unk_0x4B86C627B5EABFBF(unk_0x460153A63B9477BC(), 1);
					}
					unk_0xBE20AB8238688965(&(Global_1676119.f_3), 0);
				}
			}
			if (func_563(iParam0))
			{
				fVar1 = func_562(iParam0);
				if (fVar1 != 1f)
				{
					func_559(fVar1);
					unk_0xBE20AB8238688965(&(Global_1676119.f_3), 1);
				}
			}
			if (!Global_2391045)
			{
				if (func_558(iParam0) && func_35(unk_0x460153A63B9477BC()))
				{
					func_556(1);
					func_555(2);
				}
			}
			func_301(19);
		}
	}
	else
	{
		if (fVar0 > fParam4)
		{
			if (func_36(unk_0x460153A63B9477BC(), 19))
			{
				func_303(19);
			}
		}
		if (*uParam2 && func_9(unk_0x460153A63B9477BC(), 1, 1))
		{
			*uParam2 = 0;
			if (func_566(iParam0))
			{
				if (unk_0xCE990E643CD9D0E5(Global_1676119.f_3, 0))
				{
					unk_0x34FEEAC2548C3789(1f);
					unk_0x53797676AD34A9AA(5);
					unk_0xD2459066EA58CE43(&(Global_1676119.f_3), 0);
				}
			}
			if (func_563(iParam0))
			{
				func_554();
				unk_0xD2459066EA58CE43(&(Global_1676119.f_3), 1);
			}
			if (iParam5 && !func_433(unk_0x460153A63B9477BC()))
			{
				if (func_32(unk_0x460153A63B9477BC()) != 152)
				{
					func_532();
				}
			}
			if (func_211(2))
			{
				func_556(0);
				func_531(2);
			}
		}
	}
}

void func_531(int iParam0)
{
	unk_0xD2459066EA58CE43(&(Global_2540384.f_5188.f_45), iParam0);
}

void func_532()
{
	unk_0x13AF25746D6C3CA9(&(Global_2405074.f_24), &Global_2409333, 2);
	unk_0x13AF25746D6C3CA9(&(Global_2405074.f_26), &Global_2409335, 19);
	func_552();
	func_535(1, 1, 0);
	func_533();
}

void func_533()
{
	func_534(0, 0);
}

void func_534(int iParam0, int iParam1)
{
	Global_2405074.f_22 = iParam0;
	Global_2405074.f_23 = iParam1;
}

void func_535(bool bParam0, bool bParam1, bool bParam2)
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
		func_551();
	}
	if (!bParam2)
	{
		func_538(0, 1, 0, 1060320051, 1086324736, 1065353216, 1088421888, 1084227584, 0, 1066192077, 0, 0, 1, 0, 1109393408);
	}
	func_537(0);
	func_536();
}

void func_536()
{
	struct<6> Var0;
	
	if (Global_2405074.f_487.f_1 == unk_0x354AD085195C5FA6())
	{
		Global_2405074.f_487 = { Var0 };
	}
}

void func_537(bool bParam0)
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

void func_538(bool bParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14)
{
	if (bParam0)
	{
		if (func_550())
		{
			func_549();
		}
		Global_2405074.f_708.f_518 = unk_0x354AD085195C5FA6();
		Global_2405074.f_708.f_504 = iParam1;
		Global_2405074.f_708.f_505 = iParam2;
		Global_2405074.f_708.f_506 = iParam10;
		func_547();
		func_542(8, 0, 0, 0, 0);
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
		func_539();
	}
}

void func_539()
{
	if (func_550() && !func_541())
	{
		func_549();
	}
	if (func_541())
	{
		func_540();
	}
	else
	{
		func_547();
		func_542(0, 0, 0, 0, 0);
		Global_2405074.f_1747 = 0;
		Global_2405074.f_1746 = 0;
	}
}

void func_540()
{
	unk_0x13AF25746D6C3CA9(&(Global_2405074.f_708), &(Global_2405074.f_1227), 519);
	Global_2405074.f_487 = { Global_2405074.f_493 };
	if (unk_0x354AD085195C5FA6() == Global_2405074.f_708.f_518)
	{
		Global_2405074.f_1746 = 0;
	}
}

int func_541()
{
	if ((Global_2405074.f_1746 && !unk_0x354AD085195C5FA6() == Global_2405074.f_1227.f_518) && unk_0x7FD2BDF03806FD9D(Global_2405074.f_1227.f_518))
	{
		return 1;
	}
	return 0;
}

void func_542(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	if (Global_2440049.f_2005.f_703.f_16 != func_10())
	{
		if (unk_0xCE990E643CD9D0E5(Global_2425869[Global_2440049.f_2005.f_703.f_16 /*443*/].f_411, 0) && func_543())
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

int func_543()
{
	if ((((((func_32(unk_0x460153A63B9477BC()) == 229 || func_32(unk_0x460153A63B9477BC()) == 191) || func_546()) || func_545()) || func_352(unk_0x460153A63B9477BC())) || Global_2515847.f_227 == 1) || (Global_2405074.f_1747 && func_544(unk_0x460153A63B9477BC())))
	{
		return 0;
	}
	return 1;
}

int func_544(int iParam0)
{
	if (func_430(iParam0))
	{
		return 1;
	}
	if (func_129(iParam0))
	{
		return 1;
	}
	return 0;
}

var func_545()
{
	return Global_1574411;
}

int func_546()
{
	if (Global_4456448 == 6)
	{
		return 1;
	}
	return 0;
}

void func_547()
{
	if (func_550() && !func_541())
	{
		func_549();
	}
	func_548();
	Global_2405074.f_708 = 0;
}

void func_548()
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

void func_549()
{
	if (func_541())
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

int func_550()
{
	if ((Global_2405074.f_1747 && !unk_0x354AD085195C5FA6() == Global_2405074.f_708.f_518) && unk_0x7FD2BDF03806FD9D(Global_2405074.f_708.f_518))
	{
		return 1;
	}
	return 0;
}

void func_551()
{
	unk_0x13AF25746D6C3CA9(&(Global_2405074.f_365), &Global_2409674, 121);
}

void func_552()
{
	func_553();
}

void func_553()
{
	int iVar0;
	struct<4> Var1;
	
	iVar0 = 0;
	while (iVar0 < 50)
	{
		Global_2405074.f_2257[iVar0 /*4*/] = { Var1 };
		iVar0++;
	}
	Global_2405074.f_2256 = 0;
}

void func_554()
{
	if (unk_0x7FD2BDF03806FD9D(Global_2540384.f_5184))
	{
		if (!Global_2540384.f_5184 == unk_0x354AD085195C5FA6() && Global_2540384.f_5183 < 1f)
		{
			return;
		}
	}
	Global_2540384.f_5184 = -1;
	Global_2540384.f_5183 = 1f;
}

void func_555(int iParam0)
{
	unk_0xBE20AB8238688965(&(Global_2540384.f_5188.f_45), iParam0);
}

void func_556(int iParam0)
{
	if (func_557() && iParam0)
	{
		return;
	}
	if (iParam0 == Global_2391045)
	{
		return;
	}
	Global_2391045 = iParam0;
	Global_2391047 = 0;
	Global_2391048 = 0;
}

int func_557()
{
	if ((((Global_968397 != -1 && Global_968397 != 33) && Global_968397 != 35) && Global_968397 != 37) && Global_968397 != 21)
	{
		return 1;
	}
	return 0;
}

int func_558(int iParam0)
{
	switch (iParam0)
	{
		case 142:
		case 159:
		case 148:
		case 157:
		case 166:
		case 179:
		case 189:
		case 193:
		case 198:
		case 205:
			return 1;
		
		default:
	}
	return 0;
}

void func_559(float fParam0)
{
	float fVar0;
	
	if (unk_0x856D5567211886A2(unk_0x6C5C6B207AA78253()) == func_560())
	{
		return;
	}
	fVar0 = (Global_2540384.f_5183 - fParam0);
	if (unk_0x7FD2BDF03806FD9D(Global_2540384.f_5184))
	{
		if (!Global_2540384.f_5184 == unk_0x354AD085195C5FA6() && unk_0x0D77CDCF403AEBD2(fVar0) > 0.001f)
		{
			return;
		}
	}
	Global_2540384.f_5183 = fParam0;
	Global_2540384.f_5184 = unk_0x354AD085195C5FA6();
}

int func_560()
{
	switch (func_16())
	{
		case 0:
			return func_561();
			break;
		
		case 2:
			return joaat("creator");
			break;
	}
	return 0;
}

int func_561()
{
	switch (Global_2464595)
	{
		case 0:
			return joaat("freemode");
		
		default:
	}
	return joaat("freemode");
}

float func_562(int iParam0)
{
	switch (iParam0)
	{
		case 142:
		case 157:
		case 159:
		case 151:
		case 148:
		case 164:
		case 152:
		case 153:
		case 154:
		case 155:
		case 160:
		case 162:
		case 166:
		case 173:
		case 169:
		case 167:
		case 168:
		case 170:
		case 178:
		case 179:
		case 189:
		case 180:
		case 182:
		case 183:
		case 190:
		case 191:
		case 192:
		case 193:
		case 194:
		case 199:
		case 201:
		case 185:
		case 197:
		case 186:
		case 198:
		case 195:
		case 205:
		case 207:
		case 208:
		case 209:
		case 216:
		case 218:
		case 215:
		case 214:
		case 220:
		case 221:
		case 217:
		case 219:
		case 225:
		case 226:
		case 227:
		case 229:
		case 230:
		case 233:
		case 237:
		case 238:
		case 239:
		case 240:
		case 241:
		case 242:
		case 244:
		case 248:
		case 249:
		case 250:
		case 243:
		case 158:
		case 181:
		case 256:
		case 258:
			return 0f;
		
		default:
	}
	return 1f;
}

int func_563(int iParam0)
{
	switch (iParam0)
	{
		case 152:
		case 164:
		case 151:
		case 170:
		case 169:
		case 201:
		case 191:
		case 198:
		case 180:
		case 200:
		case 208:
		case 216:
		case 218:
		case 215:
		case 214:
		case 220:
		case 221:
		case 217:
		case 219:
		case 227:
		case 237:
		case 238:
		case 239:
		case 240:
		case 241:
		case 242:
		case 244:
		case 248:
		case 249:
		case 250:
			return 1;
		
		default:
	}
	return 0;
}

int func_564(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 148:
		case 164:
		case 152:
		case 153:
		case 160:
			return 1;
		
		case 168:
			if ((iParam1 != 2 && iParam1 != 10) && iParam1 != 7)
			{
				return 1;
			}
			break;
		
		case 170:
		case 166:
		case 173:
			return 1;
		
		case 179:
		case 183:
		case 181:
		case 189:
		case 191:
		case 192:
		case 193:
		case 194:
		case 186:
		case 199:
		case 185:
		case 201:
		case 198:
		case 195:
		case 180:
		case 207:
		case 208:
		case 209:
		case 210:
		case 214:
		case 217:
		case 218:
		case 215:
		case 216:
		case 219:
		case 220:
		case 221:
		case 237:
		case 238:
		case 239:
		case 240:
		case 241:
		case 242:
		case 244:
		case 248:
		case 249:
		case 250:
		case 227:
			return 1;
		
		case 190:
			if (((iParam1 != 6 && iParam1 != 9) && iParam1 != 7) && iParam1 != 1)
			{
				return 1;
			}
			break;
	}
	return 0;
}

float func_565(int iParam0)
{
	switch (iParam0)
	{
		case 131:
		case 138:
		case 140:
		case 139:
		case 141:
		case 146:
		case 216:
		case 218:
		case 215:
		case 214:
		case 220:
		case 221:
		case 217:
		case 219:
		case 237:
		case 238:
		case 239:
		case 240:
		case 241:
		case 242:
		case 244:
		case 248:
		case 249:
		case 250:
			return 0f;
		
		case 144:
			return 0f;
		
		case 185:
			return 0f;
		
		default:
	}
	return 1f;
}

int func_566(int iParam0)
{
	switch (iParam0)
	{
		case 152:
		case 142:
		case 164:
		case 151:
		case 160:
		case 166:
		case 173:
		case 183:
		case 185:
		case 197:
		case 186:
		case 201:
		case 191:
		case 198:
		case 207:
		case 208:
		case 209:
		case 200:
		case 195:
		case 180:
		case 216:
		case 218:
		case 215:
		case 214:
		case 220:
		case 221:
		case 217:
		case 219:
		case 227:
		case 237:
		case 238:
		case 239:
		case 240:
		case 241:
		case 242:
		case 244:
		case 248:
		case 249:
		case 250:
			return 1;
		
		default:
	}
	return 0;
}

void func_567(struct<3> Param0, int iParam1, int iParam2)
{
	Global_2405074.f_45.f_49 = { Param0 };
	Global_2405074.f_45.f_52 = iParam1;
	Global_2405074.f_45.f_53 = iParam2;
}

void func_568(int iParam0, float fParam1)
{
	int iVar0;
	
	iVar0 = func_571(iParam0);
	if (iVar0 == -1)
	{
		return;
	}
	if (fParam1 < IntToFloat(iVar0))
	{
		func_569();
	}
}

void func_569()
{
	if (!func_570(unk_0x460153A63B9477BC()))
	{
		func_301(25);
	}
}

bool func_570(int iParam0)
{
	return func_36(iParam0, 25);
}

int func_571(int iParam0)
{
	switch (iParam0)
	{
		case 152:
			return Global_262145.f_12530;
		
		case 142:
			return Global_262145.f_12518;
		
		case 157:
			return Global_262145.f_12485;
		
		case 159:
			return Global_262145.f_12468;
		
		case 162:
			return Global_262145.f_12579;
		
		case 173:
			return 100;
		
		case 170:
			return 100;
		
		default:
	}
	return -1;
}

int func_572(struct<3> Param0)
{
	if ((Param0.x == 0f && Param0.f_1 == 0f) && Param0.f_2 == 0f)
	{
		return 1;
	}
	return 0;
}

void func_573()
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < unk_0x2AC1C68C7CCA90E5(1))
	{
		iVar1 = unk_0x39BE1B4CEB4DAEC8(1, iVar0);
		switch (iVar1)
		{
			case 185:
				func_574(iVar0);
				break;
		}
		iVar0++;
	}
}

void func_574(int iParam0)
{
	struct<6> Var0;
	
	if (unk_0x477FAFFE21935947(1, iParam0, &Var0, 13))
	{
		if ((unk_0xAE06B9E39EBDE049(Var0) && unk_0xA1914E72A0EB31D0(Var0)) && unk_0x9048E8838E822F21(Var0) == unk_0x1FA7B77001D60F9D(func_37()))
		{
			if (Var0.f_5)
			{
				if (unk_0xAE06B9E39EBDE049(Var0.f_1) && unk_0xA1914E72A0EB31D0(Var0.f_1))
				{
					if (unk_0x9048E8838E822F21(Var0.f_1) == unk_0x9B0761B4C3EB8BC7())
					{
						unk_0xBE20AB8238688965(&(Local_85[unk_0x59E2AD1A8ACEDA31() /*4*/].f_1), 1);
					}
				}
			}
		}
	}
}

void func_575()
{
	if (!unk_0xCE990E643CD9D0E5(iLocal_82, 3))
	{
		if (func_9(func_37(), 1, 1) && unk_0x166E920FB00B2DBB(func_37()))
		{
			func_592(func_37(), func_593(6), 1, 0);
			func_590(func_37(), 432, 1, 0);
			func_588(func_37(), 1, 1, 0);
			func_587(func_37(), Global_262145.f_12363, 1, 0);
			func_584(func_37(), 1, 0);
			if (func_42() <= 1)
			{
				func_576(func_37(), 1, 7000);
			}
			unk_0xBE20AB8238688965(&iLocal_82, 3);
		}
	}
}

void func_576(int iParam0, bool bParam1, int iParam2)
{
	int iVar0;
	
	if (iParam0 == func_10())
	{
		return;
	}
	if (iParam2 > 200000)
	{
		iParam2 = 200000;
	}
	iVar0 = iParam0;
	if (bParam1)
	{
		if (iParam0 == Global_2440049)
		{
		}
		else if (unk_0x8F678487EEBD8CE4(Global_2416085[iVar0]))
		{
			unk_0xBE20AB8238688965(&(Global_2416085.f_370), iVar0);
			unk_0xD2459066EA58CE43(&(Global_2416085.f_375), iVar0);
			unk_0x009A89A6CD1E6C3E(Global_2416085[iVar0], 1);
			unk_0x40220FC2DDAA6EF7(Global_2416085[iVar0], 250);
			func_577(iParam0);
			if (iParam2 < 0)
			{
				unk_0xBE20AB8238688965(&(Global_2416085.f_375), iVar0);
			}
			else
			{
				Global_2416085.f_201[iVar0] = unk_0x8C358101651A3F7C(unk_0x6CAAB7E78B5D978A(), iParam2);
			}
		}
		else
		{
			unk_0xBE20AB8238688965(&(Global_2416085.f_370), iVar0);
			unk_0xD2459066EA58CE43(&(Global_2416085.f_375), iVar0);
			if (iParam2 < 0)
			{
				unk_0xBE20AB8238688965(&(Global_2416085.f_375), iVar0);
			}
			else
			{
				Global_2416085.f_201[iVar0] = unk_0x8C358101651A3F7C(unk_0x6CAAB7E78B5D978A(), iParam2);
			}
		}
	}
	if (!bParam1)
	{
		unk_0xD2459066EA58CE43(&(Global_2416085.f_370), iVar0);
		unk_0xD2459066EA58CE43(&(Global_2416085.f_375), iVar0);
		if (unk_0x8F678487EEBD8CE4(Global_2416085[iVar0]))
		{
			func_577(iParam0);
			unk_0x009A89A6CD1E6C3E(Global_2416085[iVar0], 0);
		}
	}
}

void func_577(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (func_9(iParam0, 0, 1))
	{
		if (unk_0x8F678487EEBD8CE4(Global_2416085[iVar0]))
		{
			Global_2416085.f_1504[iVar0] = func_578(iParam0);
			unk_0xE346A71235BB8065(Global_2416085[iVar0], Global_2416085.f_1504[iVar0]);
		}
	}
}

int func_578(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = iParam0;
	if (func_9(iParam0, 0, 1))
	{
		if (unk_0x8F678487EEBD8CE4(Global_2416085[iVar0]))
		{
			iVar1 = unk_0x456314646600276D(Global_2416085[iVar0]);
			if (unk_0xCE990E643CD9D0E5(Global_2416085.f_386, iVar0) || unk_0xCE990E643CD9D0E5(Global_2416085.f_385, iVar0))
			{
				return 1;
			}
			else if ((unk_0xCE990E643CD9D0E5(Global_2416085.f_371, iVar0) || unk_0xCE990E643CD9D0E5(Global_2416085.f_370, iVar0)) || unk_0xCE990E643CD9D0E5(Global_2416085.f_388, iVar0))
			{
				return func_581(10);
			}
			else
			{
				switch (iVar1)
				{
					case 253:
					case 252:
					case 255:
						return func_581(7);
						break;
					
					case 257:
					case 258:
					case 259:
					case 260:
					case 261:
						return func_581(11);
						break;
					
					case 254:
						if (unk_0x6CC163E30ECE0790(iParam0) == unk_0x6CC163E30ECE0790(Global_2440049))
						{
							return func_581(6);
						}
						else
						{
							return func_581(5);
						}
						break;
					
					case 271:
						if (unk_0x6CC163E30ECE0790(iParam0) == unk_0x6CC163E30ECE0790(Global_2440049))
						{
							return func_581(6);
						}
						else
						{
							return func_581(5);
						}
						break;
					
					case 163:
					case 164:
						if (func_81(Global_2440049, iParam0, -2, 0))
						{
							return func_581(6);
						}
						else
						{
							return func_581(5);
						}
						break;
					
					case 303:
					case 418:
						return func_581(10);
						break;
					
					case 364:
						if (func_579(Global_2440049, iParam0, 1))
						{
							return func_581(10);
						}
						else
						{
							return func_581(5);
						}
						break;
					
					case 478:
					case 501:
					case 523:
					case 556:
						return func_581(10);
						break;
					
					case 417:
						if ((func_364(iParam0) || func_386(iParam0)) || func_362(iParam0))
						{
							if (func_579(Global_2440049, iParam0, 1))
							{
								return 3;
							}
							else
							{
								return 4;
							}
						}
						else if (func_579(Global_2440049, iParam0, 1))
						{
							return func_581(6);
						}
						else
						{
							return func_581(5);
						}
						break;
					
					case 256:
					case 268:
					default:
						if (func_579(Global_2440049, iParam0, 1))
						{
							return func_581(6);
						}
						else
						{
							return func_581(5);
						}
						break;
					}
				}
			}
	}
	return 1;
}

int func_579(int iParam0, int iParam1, bool bParam2)
{
	if (func_66(iParam0, -2, 0, 0, 0) == func_66(iParam1, -2, 0, 0, 0))
	{
		return 1;
	}
	if (bParam2)
	{
		if (func_580(func_66(iParam0, -2, 0, 0, 0)) && func_580(func_66(iParam1, -2, 0, 0, 0)))
		{
			return 1;
		}
	}
	return 0;
}

int func_580(int iParam0)
{
	if (iParam0 == func_72(1) || iParam0 == func_72(0))
	{
		return 1;
	}
	return 0;
}

int func_581(int iParam0)
{
	switch (iParam0)
	{
		case 5:
		case 6:
			if (func_583())
			{
				if (iParam0 == 5)
				{
					iParam0 = 6;
				}
				else
				{
					iParam0 = 5;
				}
			}
			break;
	}
	return func_582(iParam0);
}

int func_582(int iParam0)
{
	switch (iParam0)
	{
		case 10:
			return 9;
			break;
		
		case 5:
			return 8;
			break;
		
		case 6:
			return 7;
			break;
		
		case 8:
			return 6;
			break;
		
		case 7:
			return 4;
			break;
		
		case 4:
		case 11:
			return 2;
			break;
		
		case 0:
		case 2:
		case 3:
		case 9:
		case 1:
			return 1;
			break;
	}
	return 1;
}

int func_583()
{
	int iVar0;
	
	iVar0 = unk_0x6CC163E30ECE0790(Global_2440049);
	if (iVar0 > -1 && iVar0 < 4)
	{
		return unk_0xCE990E643CD9D0E5(Global_4456448.f_592[iVar0 /*16355*/].f_10170, 4);
	}
	return 0;
}

void func_584(int iParam0, bool bParam1, bool bParam2)
{
	var uVar0;
	
	if (func_586(iParam0))
	{
		return;
	}
	func_585(&(Global_2416085.f_723[iParam0]), &(Global_2416085.f_1086[iParam0]), &(Global_2416085.f_393), bParam1, iParam0, bParam2, &uVar0);
}

int func_585(var uParam0, var uParam1, int iParam2, bool bParam3, int iParam4, bool bParam5, var uParam6)
{
	if (bParam5)
	{
		if (!unk_0x7FD2BDF03806FD9D(*uParam1) || *uParam1 == unk_0x354AD085195C5FA6())
		{
			*uParam1 = unk_0x354AD085195C5FA6();
			*uParam0 = unk_0x354AD085195C5FA6();
		}
	}
	if (!unk_0x7FD2BDF03806FD9D(*uParam0) || *uParam0 == unk_0x354AD085195C5FA6())
	{
		if (bParam3)
		{
			if (!unk_0xCE990E643CD9D0E5(*iParam2, iParam4))
			{
				*uParam6 = 1;
				unk_0xBE20AB8238688965(iParam2, iParam4);
			}
			*uParam0 = unk_0x354AD085195C5FA6();
		}
		else
		{
			if (unk_0xCE990E643CD9D0E5(*iParam2, iParam4))
			{
				*uParam6 = 1;
				unk_0xD2459066EA58CE43(iParam2, iParam4);
			}
			if (*uParam1 == unk_0x354AD085195C5FA6())
			{
				*uParam1 = -1;
			}
			*uParam0 = -1;
		}
		return 1;
	}
	else if (unk_0x7FD2BDF03806FD9D(*uParam1) && !*uParam1 == unk_0x354AD085195C5FA6())
	{
	}
	return 0;
}

int func_586(int iParam0)
{
	if (iParam0 == func_10())
	{
		return 1;
	}
	if (unk_0x856D5567211886A2(unk_0x6C5C6B207AA78253()) == func_560())
	{
		return 1;
	}
	return 0;
}

void func_587(int iParam0, float fParam1, bool bParam2, bool bParam3)
{
	var uVar0;
	
	if (func_586(iParam0))
	{
		return;
	}
	if (func_585(&(Global_2416085.f_756[iParam0]), &(Global_2416085.f_1119[iParam0]), &(Global_2416085.f_392), bParam2, iParam0, bParam3, &uVar0))
	{
		if (bParam2)
		{
			Global_2416085.f_558[iParam0] = fParam1;
		}
	}
}

void func_588(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	var uVar0;
	
	if (func_586(iParam0))
	{
		return;
	}
	if (func_585(&(Global_2416085.f_822[iParam0]), &(Global_2416085.f_1185[iParam0]), &(Global_2416085.f_367), bParam1, iParam0, bParam3, &uVar0))
	{
		func_589(iParam0, bParam2);
	}
}

void func_589(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		unk_0xBE20AB8238688965(&(Global_2416085.f_368), iParam0);
	}
	else
	{
		unk_0xD2459066EA58CE43(&(Global_2416085.f_368), iParam0);
	}
	if (unk_0x8F678487EEBD8CE4(Global_2416085[iParam0]))
	{
		if (bParam1)
		{
			unk_0x91136D871CEAF8CC(Global_2416085[iParam0], false);
		}
		else
		{
			unk_0x91136D871CEAF8CC(Global_2416085[iParam0], true);
		}
	}
}

void func_590(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	bool bVar0;
	
	if (func_586(iParam0))
	{
		return;
	}
	if (func_585(&(Global_2416085.f_591[iParam0]), &(Global_2416085.f_954[iParam0]), &(Global_2416085.f_388), bParam2, iParam0, bParam3, &bVar0))
	{
		if (bParam2)
		{
			Global_2416085.f_426[iParam0] = iParam1;
		}
		if (bVar0)
		{
			func_591();
		}
	}
}

void func_591()
{
	Global_2416085.f_1651 = 1;
}

void func_592(int iParam0, var uParam1, bool bParam2, bool bParam3)
{
	var uVar0;
	
	if (func_586(iParam0))
	{
		return;
	}
	if (func_585(&(Global_2416085.f_624[iParam0]), &(Global_2416085.f_987[iParam0]), &(Global_2416085.f_389), bParam2, iParam0, bParam3, &uVar0))
	{
		if (bParam2)
		{
			Global_2416085.f_459[iParam0] = uParam1;
		}
	}
}

int func_593(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	switch (iParam0)
	{
		case 1:
			return 4;
		
		case 0:
			return 4;
		
		case 6:
			return 59;
		
		case 18:
			return 2;
		
		case 13:
			return 5;
		
		case 116:
			return 38;
		
		case 28:
			return 6;
		
		case 29:
			return 7;
		
		case 30:
			return 8;
		
		case 31:
			return 9;
		
		case 32:
			return 10;
		
		case 33:
			return 11;
		
		case 34:
			return 12;
		
		case 35:
			return 13;
		
		case 36:
			return 14;
		
		case 37:
			return 15;
		
		case 38:
			return 16;
		
		case 39:
			return 17;
		
		case 40:
			return 18;
		
		case 41:
			return 19;
		
		case 42:
			return 20;
		
		case 43:
			return 21;
		
		case 44:
			return 22;
		
		case 45:
			return 23;
		
		case 46:
			return 24;
		
		case 47:
			return 25;
		
		case 48:
			return 26;
		
		case 49:
			return 27;
		
		case 50:
			return 28;
		
		case 51:
			return 29;
		
		case 52:
			return 30;
		
		case 53:
			return 31;
		
		case 54:
			return 32;
		
		case 55:
			return 33;
		
		case 56:
			return 34;
		
		case 57:
			return 35;
		
		case 58:
			return 36;
		
		case 59:
			return 37;
		
		case 9:
			return 57;
		
		case 10:
			return 53;
		
		case 118:
			return 57;
		
		case 14:
			return 56;
		
		case 3:
			return 55;
		
		case 21:
			return 50;
		
		case 15:
			return 51;
		
		case 20:
			return 52;
		
		case 11:
			return 54;
		
		case 23:
			return 58;
		
		case 12:
			return 60;
		
		case 24:
			return 61;
		
		case 4:
			return 62;
		
		default:
	}
	unk_0x28DD484BAEAF8437(iParam0, &iVar0, &iVar1, &iVar2, &iVar3);
	return ((((iVar0 * 16777216) + (iVar1 * 65536)) + iVar2 * 256) + iVar3);
	return 0;
}

void func_594()
{
	char* sVar0;
	
	if (func_349())
	{
		if (func_348())
		{
			func_341();
		}
		return;
	}
	sVar0 = "GBTER_KILL";
	if (func_6(unk_0x460153A63B9477BC(), 1))
	{
		sVar0 = "GBTER_B_KILL";
		if (Local_84.f_10)
		{
			sVar0 = "GBTER_AB_KILL";
		}
	}
	if (!func_601(sVar0))
	{
		func_595(sVar0, func_37(), 1, 0);
	}
}

void func_595(char* sParam0, int iParam1, int iParam2, bool bParam3)
{
	func_596(sParam0, unk_0x72C1D3A1AB8CAA5B(iParam1), bParam3, 1);
}

int func_596(char* sParam0, char* sParam1, bool bParam2, int iParam3)
{
	var uVar0;
	
	if (unk_0x7BCC91F3C1CF24E8(sParam0))
	{
		return 0;
	}
	if (unk_0xA221A4BC051BFCCE(sParam0) > 23)
	{
		return 0;
	}
	if (unk_0x7BCC91F3C1CF24E8(sParam1))
	{
		return 0;
	}
	if (unk_0xA221A4BC051BFCCE(sParam1) > 63)
	{
		return 0;
	}
	if (func_600(sParam0, sParam1) && Global_1312603.f_56 == Global_1312603.f_58)
	{
		return 0;
	}
	uVar0 = Global_1312603.f_54;
	func_342();
	Global_1312603 = 9;
	StringCopy(&(Global_1312603.f_1), unk_0x6C5C6B207AA78253(), 32);
	Global_1312603.f_9 = unk_0x856D5567211886A2(&(Global_1312603.f_1));
	StringCopy(&(Global_1312603.f_12), sParam0, 16);
	StringCopy(&(Global_1312603.f_16), sParam1, 64);
	Global_1312603.f_58 = iParam3;
	Global_1312603.f_56 = iParam3;
	Global_1312603.f_54 = uVar0;
	func_599();
	func_598(bParam2);
	func_597();
	return 1;
}

void func_597()
{
	unk_0xBE20AB8238688965(&(Global_1312603.f_59), 1);
}

void func_598(bool bParam0)
{
	if (bParam0)
	{
		unk_0xBE20AB8238688965(&(Global_1312603.f_59), 0);
		return;
	}
	unk_0xD2459066EA58CE43(&(Global_1312603.f_59), 0);
}

void func_599()
{
	Global_1312603.f_10 = unk_0x8C358101651A3F7C(unk_0x6CAAB7E78B5D978A(), 86400000);
	Global_1312603.f_11 = unk_0x6CAAB7E78B5D978A();
}

bool func_600(char* sParam0, char* sParam1)
{
	if (!func_347())
	{
		return 0;
	}
	if (unk_0x7BCC91F3C1CF24E8(sParam0))
	{
		return 0;
	}
	if (unk_0x7BCC91F3C1CF24E8(sParam1))
	{
		return 0;
	}
	if (!unk_0x856D5567211886A2(sParam0) == unk_0x856D5567211886A2(&(Global_1312603.f_12)))
	{
		return 0;
	}
	return unk_0x856D5567211886A2(sParam1) == unk_0x856D5567211886A2(&(Global_1312603.f_16));
}

int func_601(char* sParam0)
{
	if (unk_0x7BCC91F3C1CF24E8(sParam0))
	{
		return 0;
	}
	if (!func_347())
	{
		return 0;
	}
	if (Global_1312603 == 11)
	{
		if (unk_0xA221A4BC051BFCCE(sParam0) > 63)
		{
			return 0;
		}
	}
	else if (unk_0xA221A4BC051BFCCE(sParam0) > 23)
	{
		return 0;
	}
	return func_602(sParam0);
}

bool func_602(char* sParam0)
{
	if (!func_347())
	{
		return 0;
	}
	if (Global_1312603 == 11)
	{
		return func_603(sParam0);
	}
	if (unk_0x7BCC91F3C1CF24E8(sParam0))
	{
		return 0;
	}
	return unk_0x856D5567211886A2(sParam0) == unk_0x856D5567211886A2(&(Global_1312603.f_12));
}

bool func_603(char* sParam0)
{
	if (!func_347())
	{
		return 0;
	}
	if (unk_0x7BCC91F3C1CF24E8(sParam0))
	{
		return 0;
	}
	return unk_0x856D5567211886A2(sParam0) == unk_0x856D5567211886A2(&(Global_1312603.f_16));
}

void func_604()
{
	int iVar0;
	int iVar1;
	char* sVar2;
	
	if (func_349())
	{
		return;
	}
	if (unk_0xCE990E643CD9D0E5(Local_84.f_1, 0))
	{
		if (func_406(&(Local_84.f_4)))
		{
			iVar1 = (func_5() - func_609(&(Local_84.f_4), 0, 0));
			if (iVar1 > 30000)
			{
				iVar0 = 1;
			}
			else
			{
				iVar0 = 6;
			}
			iVar1 = func_608(iVar1, 0);
			sVar2 = "GB_WORK_END";
			if (func_6(unk_0x460153A63B9477BC(), 1))
			{
				sVar2 = "BK_TIME";
			}
			if (iVar1 > 0)
			{
				func_605(iVar1, sVar2, 0, 0, -1, 0, 3, 0, iVar0, 0, 0, 0, 0, 0, 0, 0, 0, -1);
			}
			else
			{
				func_605(0, sVar2, 0, 0, -1, 0, 3, 0, iVar0, 0, 0, 0, 0, 0, 0, 0, 0, -1);
			}
		}
	}
}

void func_605(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17)
{
	int iVar0;
	int iVar1;
	
	iVar0 = -1;
	iVar1 = 0;
	while (iVar1 <= 9)
	{
		if (iVar0 == -1)
		{
			if (func_607(7, iVar1) == 0)
			{
				iVar0 = iVar1;
			}
		}
		iVar1++;
	}
	if (iVar0 > -1)
	{
		Global_1378744.f_1 = 1;
		func_606(7, iVar0);
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

void func_606(int iParam0, int iParam1)
{
	unk_0xBE20AB8238688965(&(Global_1378744.f_6304[iParam0]), iParam1);
}

bool func_607(int iParam0, int iParam1)
{
	return unk_0xCE990E643CD9D0E5(Global_1378744.f_6304[iParam0], iParam1);
}

int func_608(int iParam0, int iParam1)
{
	if (iParam0 > iParam1)
	{
		return iParam0;
	}
	return iParam1;
}

int func_609(var uParam0, bool bParam1, bool bParam2)
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

void func_610()
{
	char* sVar0;
	char* sVar1;
	char* sVar2;
	char* sVar3;
	char* sVar4;
	char* sVar5;
	
	if (func_349())
	{
		return;
	}
	if (unk_0x460153A63B9477BC() != func_63())
	{
		if (unk_0xCE990E643CD9D0E5(iLocal_82, 0))
		{
			if (!func_340())
			{
				sVar0 = "GBTER_START";
				if (func_6(unk_0x460153A63B9477BC(), 1))
				{
					sVar0 = "GBTER_BSTART";
					if (Local_84.f_10)
					{
						sVar0 = "GBTER_AB_START";
					}
				}
				func_612(sVar0, unk_0x72C1D3A1AB8CAA5B(func_37()), 0, -1);
				func_611(1);
				unk_0xBE20AB8238688965(&iLocal_82, 2);
			}
		}
		else
		{
			sVar1 = "GBTER_BIG";
			sVar2 = "GBTER_BIG_GS";
			if (func_6(unk_0x460153A63B9477BC(), 1))
			{
				sVar1 = "GBTER_B_BIG";
				sVar2 = "GBTER_B_SS";
				if (Local_84.f_10)
				{
					sVar1 = "GBTER_B_BIG";
					sVar2 = "GBTER_AB_SS";
				}
			}
			func_339();
			func_330(86, func_37(), -1, sVar2, sVar1, 1, -1, 2, 0);
			unk_0xBE20AB8238688965(&(Local_85[unk_0x59E2AD1A8ACEDA31() /*4*/].f_1), 0);
		}
	}
	else if (unk_0xCE990E643CD9D0E5(iLocal_82, 0))
	{
		if (!func_340())
		{
			sVar3 = "GBTER_BOSS";
			if (func_6(unk_0x460153A63B9477BC(), 1))
			{
				sVar3 = "GBTER_BBOSS";
				if (Local_84.f_10)
				{
					sVar3 = "GBTER_AB_BOSS";
				}
			}
			func_612(sVar3, unk_0x72C1D3A1AB8CAA5B(func_37()), 0, -1);
			unk_0xBE20AB8238688965(&iLocal_82, 2);
			func_611(1);
		}
	}
	else
	{
		sVar4 = "GBTER_BIG";
		sVar5 = "GBTER_BIG_GS";
		if (func_6(unk_0x460153A63B9477BC(), 1))
		{
			sVar4 = "GBTER_B_BIG";
			sVar5 = "GBTER_B_BSS";
			if (Local_84.f_10)
			{
				sVar4 = "GBTER_B_BIG";
				sVar5 = "GBTER_AB_SS";
			}
		}
		func_339();
		func_330(86, func_37(), -1, sVar5, sVar4, 1, -1, 2, 0);
		unk_0xBE20AB8238688965(&(Local_85[unk_0x59E2AD1A8ACEDA31() /*4*/].f_1), 0);
	}
	unk_0xBE20AB8238688965(&iLocal_82, 0);
}

void func_611(int iParam0)
{
	char* sVar0;
	
	sVar0 = "GTAO_Boss_Goons_FM_Soundset";
	if (func_210(1))
	{
		sVar0 = "GTAO_Biker_FM_Soundset";
	}
	if (iParam0 && !func_340())
	{
		unk_0xC4CC25B68A91D144(-1, "Boss_Message_Orange", sVar0, false);
	}
}

void func_612(char* sParam0, char* sParam1, int iParam2, int iParam3)
{
	unk_0x17751E107423AFE9(sParam0);
	if (!iParam2 == 0)
	{
		unk_0x7006FC1051C85FCA(iParam2);
	}
	unk_0x9EFD301E3BE8324E(sParam1);
	unk_0x1A169149B3D18FCB(0, 0, false, iParam3);
}

void func_613(int iParam0)
{
	Local_85[unk_0x59E2AD1A8ACEDA31() /*4*/].f_2 = iParam0;
}

void func_614(bool bParam0)
{
	if (bParam0)
	{
		if (!func_36(unk_0x460153A63B9477BC(), 9))
		{
			if (func_526(unk_0x460153A63B9477BC()) != 0)
			{
				func_301(9);
			}
		}
	}
	else if (func_36(unk_0x460153A63B9477BC(), 9))
	{
		func_303(9);
	}
}

void func_615(int iParam0, bool bParam1, int iParam2, int iParam3)
{
	float fVar0;
	
	if (Global_1630317[unk_0x460153A63B9477BC() /*595*/].f_11.f_33 != iParam0)
	{
		func_629(-1);
		Global_1630317[unk_0x460153A63B9477BC() /*595*/].f_11.f_33 = iParam0;
		if (func_628() != -1)
		{
			func_627(-1);
		}
		if (func_626() != -1)
		{
			func_625(-1);
		}
		func_624(iParam2);
		func_622(iParam0);
		if (!func_563(iParam0))
		{
			fVar0 = func_562(iParam0);
			if (fVar0 != 1f)
			{
				func_559(fVar0);
				unk_0xBE20AB8238688965(&(Global_1676119.f_3), 1);
			}
		}
		if (!func_566(iParam0) || iParam3)
		{
			if (func_564(iParam0, iParam2) && iParam3 == 1)
			{
				unk_0x53797676AD34A9AA(0);
				if (!unk_0x5AEB5DDFFAD43CA5(unk_0x9B0761B4C3EB8BC7()))
				{
					unk_0xCAD5C18968E57C30(unk_0x460153A63B9477BC(), 0, 0);
					unk_0x4B86C627B5EABFBF(unk_0x460153A63B9477BC(), 0);
				}
				unk_0xBE20AB8238688965(&(Global_1676119.f_3), 0);
			}
			else if (unk_0xB9FD7D4438BECDFC() < 5)
			{
				unk_0x34FEEAC2548C3789(1f);
				unk_0x53797676AD34A9AA(5);
			}
		}
		if (func_26())
		{
			func_301(27);
		}
		if (bParam1)
		{
			if (!func_300())
			{
				func_556(1);
			}
		}
		if ((((((iParam0 == 159 || iParam0 == 157) || iParam0 == 153) || iParam0 == 154) || iParam0 == 164) || iParam0 == 155) || iParam0 == 171)
		{
			if ((unk_0xCE990E643CD9D0E5(Global_2540384.f_4619, 1) || unk_0xCE990E643CD9D0E5(Global_2540384.f_4619, 4)) || unk_0xCE990E643CD9D0E5(Global_2540384.f_4619, 0))
			{
				func_97(6);
			}
			func_621();
		}
		if (((iParam0 == 164 || iParam0 == 208) || iParam0 == 250) || iParam0 == 237)
		{
			unk_0x40ECEB892E6BDDDB(3, false);
			unk_0x40ECEB892E6BDDDB(5, false);
		}
		if (func_433(unk_0x460153A63B9477BC()) && func_35(unk_0x460153A63B9477BC()))
		{
			unk_0xBE20AB8238688965(&(Global_1630317[unk_0x460153A63B9477BC() /*595*/].f_1), 8);
		}
		func_617();
		if (func_616(iParam0))
		{
			unk_0x40ECEB892E6BDDDB(3, false);
			unk_0x40ECEB892E6BDDDB(5, false);
			unk_0xBE20AB8238688965(&(Global_1676119.f_3), 6);
		}
		Global_2540384.f_6650 = 0;
	}
}

int func_616(int iParam0)
{
	switch (iParam0)
	{
		case 216:
		case 218:
		case 215:
		case 120:
		case 214:
		case 220:
		case 221:
		case 217:
		case 219:
			return 1;
		
		default:
	}
	return 0;
}

void func_617()
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	
	bVar3 = func_620();
	iVar2 = func_27(unk_0x460153A63B9477BC());
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar1 = unk_0xF1110FE23C67293A(iVar0);
		if (unk_0x166E920FB00B2DBB(iVar1))
		{
			if (func_48(iVar1, iVar2, 1) || func_618(iVar1, unk_0x460153A63B9477BC()))
			{
				unk_0xA3B640F5FFBB6FBF(unk_0x460153A63B9477BC(), iVar1, bVar3);
				unk_0xA3B640F5FFBB6FBF(iVar1, unk_0x460153A63B9477BC(), bVar3);
			}
		}
		iVar0++;
	}
}

int func_618(int iParam0, int iParam1)
{
	if (func_28(iParam0, 1) && func_28(iParam1, 1))
	{
		return (func_619(iParam0) == func_27(iParam1) || func_619(iParam1) == func_27(iParam0));
	}
	return 0;
}

int func_619(int iParam0)
{
	if (func_28(iParam0, 1))
	{
		return Global_1630317[func_27(iParam0) /*595*/].f_11.f_457;
	}
	return func_10();
}

int func_620()
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_11();
	if (iVar0 != func_10())
	{
		if (func_9(iVar0, 0, 1))
		{
			iVar1 = iVar0;
			if (iVar1 != -1)
			{
				return unk_0xCE990E643CD9D0E5(Global_1630317[iVar1 /*595*/].f_1, 16);
			}
		}
	}
	return 0;
}

void func_621()
{
	if (unk_0xCE990E643CD9D0E5(Global_2540384.f_4619, 1))
	{
		unk_0xD2459066EA58CE43(&(Global_2540384.f_4619), 1);
	}
	if (unk_0xCE990E643CD9D0E5(Global_2540384.f_4619, 4))
	{
		unk_0xD2459066EA58CE43(&(Global_2540384.f_4619), 4);
	}
	if (unk_0xCE990E643CD9D0E5(Global_2540384.f_4619, 6))
	{
		unk_0xD2459066EA58CE43(&(Global_2540384.f_4619), 6);
	}
	unk_0xD2459066EA58CE43(&(Global_2540384.f_4619), 0);
	unk_0xD2459066EA58CE43(&(Global_2540384.f_4619), 2);
	Global_1590682[unk_0x460153A63B9477BC() /*883*/].f_758 = 0;
	if (Global_2540384.f_4621 > 0)
	{
		unk_0x53797676AD34A9AA(Global_2540384.f_4621);
	}
	Global_2540384.f_4620 = 0;
}

void func_622(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_124(3792, -1, 0);
	iVar1 = func_623(iParam0);
	if (iVar1 != -1)
	{
		unk_0xBE20AB8238688965(&iVar0, iVar1);
		func_122(3792, iVar0, -1, 1, 0);
	}
}

int func_623(int iParam0)
{
	switch (iParam0)
	{
		case 170:
			return 0;
		
		case 166:
			return 1;
		
		case 171:
			return 2;
		
		case 172:
			return 3;
		
		case 173:
			return 4;
		
		case 214:
			return 5;
		
		case 215:
			return 6;
		
		case 216:
			return 7;
		
		case 217:
			return 8;
		
		case 218:
			return 9;
		
		case 219:
			return 10;
		
		case 220:
			return 11;
		
		case 221:
			return 12;
		
		default:
	}
	return -1;
}

void func_624(int iParam0)
{
	int iVar0;
	
	iVar0 = unk_0x460153A63B9477BC();
	if (Global_1630317[iVar0 /*595*/].f_11.f_181 != iParam0)
	{
		Global_1630317[iVar0 /*595*/].f_11.f_181 = iParam0;
	}
}

void func_625(int iParam0)
{
	if (Global_2540384.f_5188.f_341 != iParam0)
	{
		Global_2540384.f_5188.f_341 = iParam0;
	}
}

int func_626()
{
	return Global_2540384.f_5188.f_341;
}

void func_627(int iParam0)
{
	if (Global_2540384.f_5188.f_340 != iParam0)
	{
		Global_2540384.f_5188.f_340 = iParam0;
	}
}

int func_628()
{
	return Global_2540384.f_5188.f_340;
}

void func_629(int iParam0)
{
	Global_1630317[unk_0x460153A63B9477BC() /*595*/].f_11.f_32 = iParam0;
}

int func_630()
{
	return Local_85[unk_0x59E2AD1A8ACEDA31() /*4*/].f_2;
}

int func_631()
{
	if (func_632(151) || func_300())
	{
		return 1;
	}
	return 0;
}

int func_632(int iParam0)
{
	if (!func_141() && !func_28(unk_0x460153A63B9477BC(), 1))
	{
		if (!func_35(unk_0x460153A63B9477BC()))
		{
			if (func_300())
			{
				return 1;
			}
		}
	}
	switch (iParam0)
	{
		case 148:
			break;
		
		case 151:
			break;
		
		case 152:
			break;
	}
	return 0;
}

void func_633(int iParam0, int iParam1)
{
	Local_85[iParam0 /*4*/] = iParam1;
}

int func_634()
{
	return 1;
}

int func_635()
{
	return Local_84;
}

int func_636(int iParam0)
{
	return Local_85[iParam0 /*4*/];
}

int func_637()
{
	var uVar0;
	
	func_642(&uVar0);
	if (Global_1312872 == 0)
	{
		if (!unk_0x25DDB354A40FFCDB())
		{
			return 1;
		}
	}
	if (func_641())
	{
		return 1;
	}
	if (Global_2464493)
	{
		return 1;
	}
	if (func_640())
	{
		return 1;
	}
	if (func_639(159))
	{
		if (!func_638())
		{
			return 1;
		}
	}
	if (func_639(157))
	{
		return 1;
	}
	if (!unk_0x0EB6C63A09FD9DF1())
	{
		return 1;
	}
	if (func_560() != 0)
	{
		if (unk_0x7B70881748D166CD(func_560()) == 0)
		{
			return 1;
		}
	}
	return 0;
}

bool func_638()
{
	return Global_2451787.f_696;
}

int func_639(int iParam0)
{
	if (unk_0x16F1FCCC54559709(1, iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_640()
{
	return Global_2462250;
}

bool func_641()
{
	return Global_2451787.f_691;
}

void func_642(var uParam0)
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
					func_643(iVar0);
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

void func_643(int iParam0)
{
	struct<3> Var0;
	int iVar1;
	int iVar2;
	bool bVar3;
	
	if (unk_0x477FAFFE21935947(1, iParam0, &Var0, 3))
	{
		if (func_9(Var0.f_1, 1, 1))
		{
			iVar1 = unk_0x1FA7B77001D60F9D(Var0.f_1);
			if (unk_0xAE06B9E39EBDE049(iVar1))
			{
				if (unk_0x47DBF174A0CB9D55(iVar1, false))
				{
					iVar2 = unk_0xA5D5B1042E8F47BD(iVar1, false);
					if (unk_0x292280AF1BBBD6AC(iVar2, Var0.f_2) && unk_0x82CC259B7B4F4AD9())
					{
						if (func_644(iVar2, &bVar3))
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

int func_644(int iParam0, var uParam1)
{
	if (unk_0xAE06B9E39EBDE049(iParam0))
	{
		if (!unk_0x1758275D343D5BA3(iParam0))
		{
			if (unk_0x38CC98C4A0688263(iParam0))
			{
				if (!unk_0xCA6AF782C906AC86(unk_0x36FE6D3220816ADA(iParam0)))
				{
					unk_0x4F3C4F457D44BB0F(iParam0, false, 1);
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

void func_645()
{
	wait(0);
}

void func_646()
{
	func_341();
	if (func_9(func_37(), 0, 1))
	{
		func_587(func_37(), 1f, 1, 0);
		func_45(func_46(func_37()), 0);
	}
	Global_1683884 = func_10();
	func_647(1, 0);
	unk_0xD39E529EBE5DB04F();
}

void func_647(bool bParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	if (Global_1366969.f_1.f_108 != 0)
	{
		Global_1366969.f_1.f_108 = 0;
	}
	Global_1366969.f_1.f_109 = -1;
	Global_1366969.f_1.f_110 = -1;
	if (Global_1630317[unk_0x460153A63B9477BC() /*595*/].f_11.f_33 == 167 || Global_1630317[unk_0x460153A63B9477BC() /*595*/].f_11.f_33 == 168)
	{
		func_700();
		unk_0xD2459066EA58CE43(&(Global_1676119.f_3), 4);
	}
	if ((func_127() && iParam1 != 0) && Global_262145.f_16989)
	{
		if (Global_1630317[unk_0x460153A63B9477BC() /*595*/].f_11.f_33 == 190 || Global_1630317[unk_0x460153A63B9477BC() /*595*/].f_11.f_33 == 192)
		{
			func_680(unk_0x460153A63B9477BC(), iParam1, 1, 0);
		}
	}
	if (((Global_1630317[unk_0x460153A63B9477BC() /*595*/].f_11.f_33 == 164 || Global_1630317[unk_0x460153A63B9477BC() /*595*/].f_11.f_33 == 208) || Global_1630317[unk_0x460153A63B9477BC() /*595*/].f_11.f_33 == 250) || Global_1630317[unk_0x460153A63B9477BC() /*595*/].f_11.f_33 == 237)
	{
		unk_0x40ECEB892E6BDDDB(3, true);
		unk_0x40ECEB892E6BDDDB(5, true);
	}
	if (Global_1630317[unk_0x460153A63B9477BC() /*595*/].f_11.f_33 != -1)
	{
		Global_1630317[unk_0x460153A63B9477BC() /*595*/].f_11.f_33 = -1;
		if (!unk_0xCE990E643CD9D0E5(Global_1574656.f_1, 14) && !func_433(unk_0x460153A63B9477BC()))
		{
			func_556(0);
		}
	}
	else if (func_678(unk_0x460153A63B9477BC()) != -1)
	{
		func_629(-1);
	}
	func_677(func_10());
	if (func_211(16))
	{
		func_531(16);
	}
	func_674(0);
	func_624(-1);
	func_673();
	iVar0 = 0;
	while (iVar0 < 8)
	{
		func_670(iVar0);
		iVar0++;
	}
	if (unk_0xCE990E643CD9D0E5(Global_1676119.f_3, 0))
	{
		unk_0x34FEEAC2548C3789(1f);
		unk_0x53797676AD34A9AA(5);
		unk_0xD2459066EA58CE43(&(Global_1676119.f_3), 0);
	}
	if (unk_0xCE990E643CD9D0E5(Global_1676119.f_3, 5))
	{
		unk_0xD2459066EA58CE43(&(Global_1676119.f_3), 5);
	}
	iVar1 = func_669();
	if ((func_465(iVar1) || iVar1 == 205) || iVar1 == 210)
	{
		func_668(-1);
	}
	else if (((iVar1 == 201 || iVar1 == 200) || iVar1 == 179) || func_126(iVar1))
	{
		func_665(-1, 1);
	}
	else if (((((func_664(iVar1) || func_663(iVar1)) || func_662(iVar1)) || func_114(iVar1)) || func_113(iVar1)) || func_112(iVar1))
	{
	}
	else
	{
		func_665(-1, 1);
	}
	func_303(19);
	func_303(20);
	func_303(21);
	func_303(22);
	func_303(27);
	func_531(3);
	func_531(4);
	func_531(7);
	func_661();
	if (func_35(unk_0x460153A63B9477BC()))
	{
		func_614(0);
	}
	func_303(29);
	Global_1630317[unk_0x460153A63B9477BC() /*595*/].f_11.f_57 = func_10();
	if (Global_2540384.f_5188.f_41 != 0)
	{
		Global_2540384.f_5188.f_41 = 0;
	}
	if (bParam0)
	{
		func_532();
	}
	if (!func_433(unk_0x460153A63B9477BC()))
	{
		func_554();
		unk_0xD2459066EA58CE43(&(Global_1676119.f_3), 1);
	}
	if (unk_0xCE990E643CD9D0E5(Global_1676119.f_3, 6))
	{
		unk_0x40ECEB892E6BDDDB(3, true);
		unk_0x40ECEB892E6BDDDB(5, true);
		unk_0xD2459066EA58CE43(&(Global_1676119.f_3), 6);
	}
	if (unk_0xCE990E643CD9D0E5(Global_1676119.f_3, 7))
	{
		unk_0xD2459066EA58CE43(&(Global_1676119.f_3), 7);
	}
	if (unk_0xCE990E643CD9D0E5(Global_1676119.f_3, 8))
	{
		func_660("IMPEXP_SELFDES", 0);
		func_650("IMPEXP_SELFDES");
		unk_0xD2459066EA58CE43(&(Global_1676119.f_3), 8);
	}
	func_648(iVar1, 0);
}

void func_648(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		if (!unk_0xCE990E643CD9D0E5(Global_1676119.f_3, 9))
		{
			unk_0x17E478571720218F(func_649(iParam0));
			unk_0xBE20AB8238688965(&(Global_1676119.f_3), 9);
		}
	}
	else if (unk_0xCE990E643CD9D0E5(Global_1676119.f_3, 9))
	{
		unk_0xFA07F8BEBDAAFBA8(func_649(iParam0));
		unk_0xD2459066EA58CE43(&(Global_1676119.f_3), 9);
	}
}

char* func_649(int iParam0)
{
	switch (iParam0)
	{
		case 219:
			return "DLC_IE_VIP_Velocity_Vehicle_Scene";
		
		case 221:
			return "DLC_IE_VIP_Stockpiling_Vehicle_Scene";
		
		case 220:
			return "DLC_IE_VIP_Ramped_Up_Vehicle_Scene";
		
		case 214:
			return "DLC_IE_VIP_Plowed_Vehicle_Scene";
		
		case 217:
			return "DLC_IE_VIP_Transporter_Vehicle_Scene";
		
		case 218:
			return "DLC_IE_VIP_Fortified_Vehicle_Scene";
		
		case 215:
			return "DLC_IE_VIP_Fully_Loaded_Vehicle_Scene";
		
		case 216:
			return "DLC_IE_VIP_Amphibious_Assault_Vehicle_Scene";
		
		default:
	}
	return "";
}

void func_650(char* sParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 35)
	{
		if (!unk_0x211E6DB3335430B4(&(Global_111858.f_14137[iVar0 /*104*/])))
		{
			if (unk_0xF005CCA4263DF67F(&(Global_111858.f_14137[iVar0 /*104*/]), sParam0))
			{
				if (Global_111858.f_14137[iVar0 /*104*/].f_24 == 2)
				{
				}
				else
				{
					func_652();
					Global_111858.f_14137[iVar0 /*104*/].f_99[Global_19681] = 0;
					if (func_651(iVar0))
					{
					}
					else
					{
						Global_111858.f_14137[iVar0 /*104*/].f_24 = 0;
						Global_111858.f_14137[iVar0 /*104*/].f_28 = 0;
						Global_111858.f_14137[iVar0 /*104*/].f_29 = 0;
					}
					unk_0xB6B2734989D2EBCB(Global_111858.f_14137[iVar0 /*104*/].f_16);
				}
			}
		}
		iVar0++;
	}
}

int func_651(int iParam0)
{
	if ((Global_111858.f_14137[iParam0 /*104*/].f_99[0] == 1 || Global_111858.f_14137[iParam0 /*104*/].f_99[1] == 1) || Global_111858.f_14137[iParam0 /*104*/].f_99[2] == 1)
	{
		return 1;
	}
	return 0;
}

void func_652()
{
	if (func_659(14))
	{
		if (!unk_0xA59F96B50B97E63C(unk_0x9B0761B4C3EB8BC7(), 0))
		{
			if (unk_0x36FE6D3220816ADA(unk_0x9B0761B4C3EB8BC7()) == Global_111858.f_28046[0 /*29*/])
			{
				Global_19681 = 0;
			}
			else if (unk_0x36FE6D3220816ADA(unk_0x9B0761B4C3EB8BC7()) == Global_111858.f_28046[1 /*29*/])
			{
				Global_19681 = 1;
			}
			else if (unk_0x36FE6D3220816ADA(unk_0x9B0761B4C3EB8BC7()) == Global_111858.f_28046[2 /*29*/])
			{
				Global_19681 = 2;
			}
			else
			{
				Global_19681 = 0;
			}
		}
	}
	else
	{
		Global_19681 = func_653();
		if (Global_19681 == 145)
		{
			Global_19681 = 3;
		}
		if (Global_76833)
		{
			Global_19681 = 3;
		}
		if (Global_19681 > 3)
		{
			Global_19681 = 3;
		}
	}
}

var func_653()
{
	func_654();
	return Global_111858.f_2359.f_539.f_4321;
}

void func_654()
{
	int iVar0;
	
	if (unk_0xAE06B9E39EBDE049(unk_0x9B0761B4C3EB8BC7()))
	{
		if (func_657(Global_111858.f_2359.f_539.f_4321) != unk_0x36FE6D3220816ADA(unk_0x9B0761B4C3EB8BC7()))
		{
			iVar0 = func_656(unk_0x9B0761B4C3EB8BC7());
			if (func_655(iVar0) && (!func_659(14) || Global_110809))
			{
				if (Global_111858.f_2359.f_539.f_4321 != iVar0 && func_655(Global_111858.f_2359.f_539.f_4321))
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

bool func_655(int iParam0)
{
	return iParam0 < 3;
}

int func_656(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0xAE06B9E39EBDE049(iParam0))
	{
		iVar1 = unk_0x36FE6D3220816ADA(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_657(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_657(int iParam0)
{
	if (func_655(iParam0))
	{
		return func_658(iParam0);
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

var func_658(int iParam0)
{
	return Global_1848[iParam0 /*29*/];
}

bool func_659(int iParam0)
{
	return Global_41631 == iParam0;
}

void func_660(char* sParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 35)
	{
		if (!unk_0x211E6DB3335430B4(&(Global_111858.f_14137[iVar0 /*104*/])))
		{
			if (unk_0xF005CCA4263DF67F(&(Global_111858.f_14137[iVar0 /*104*/]), sParam0))
			{
				if (Global_111858.f_14137[iVar0 /*104*/].f_24 == 0)
				{
				}
				Global_111858.f_14137[iVar0 /*104*/].f_24 = 1;
				if (Global_111858.f_14137[iVar0 /*104*/].f_25 == 1)
				{
					if (Global_111858.f_14137[iVar0 /*104*/].f_99[0] == 1)
					{
						Global_111858.f_14047[0 /*20*/].f_17 = 0;
					}
					if (Global_111858.f_14137[iVar0 /*104*/].f_99[1] == 1)
					{
						Global_111858.f_14047[1 /*20*/].f_17 = 0;
					}
					if (Global_111858.f_14137[iVar0 /*104*/].f_99[2] == 1)
					{
						Global_111858.f_14047[2 /*20*/].f_17 = 0;
					}
					if (Global_111858.f_14137[iVar0 /*104*/].f_99[3] == 1)
					{
						Global_111858.f_14047[3 /*20*/].f_17 = 0;
					}
					Global_111858.f_14137[iVar0 /*104*/].f_25 = 0;
					if (iParam1 == 1)
					{
						Global_111858.f_14137[iVar0 /*104*/].f_27 = 1;
					}
				}
			}
		}
		iVar0++;
	}
}

void func_661()
{
	if (func_570(unk_0x460153A63B9477BC()))
	{
		func_303(25);
	}
}

int func_662(int iParam0)
{
	switch (iParam0)
	{
		case 178:
		case 188:
			return 1;
		
		default:
	}
	return 0;
}

int func_663(int iParam0)
{
	if ((iParam0 == 191 || iParam0 == 190) || iParam0 == 192)
	{
		return 1;
	}
	return 0;
}

int func_664(int iParam0)
{
	switch (iParam0)
	{
		case 167:
		case 169:
		case 168:
			return 1;
		
		default:
	}
	return 0;
}

void func_665(int iParam0, bool bParam1)
{
	int iVar0;
	
	if (iParam0 == -1)
	{
		iParam0 = func_669();
	}
	if (iParam0 > 0)
	{
		if (func_11() != func_10())
		{
			if (func_62(unk_0x460153A63B9477BC()) == unk_0x460153A63B9477BC())
			{
				Global_2516617.f_93[func_667(iParam0)] = 1;
			}
		}
		iVar0 = func_667(159);
		if (func_666(iVar0, Global_262145.f_12614, bParam1))
		{
			func_414(&(Global_2516617[iVar0 /*2*/]));
			func_4(&(Global_2516617[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_667(157);
		if (func_666(iVar0, Global_262145.f_12614, bParam1))
		{
			func_414(&(Global_2516617[iVar0 /*2*/]));
			func_4(&(Global_2516617[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_667(148);
		if (func_666(iVar0, Global_262145.f_12614, bParam1))
		{
			func_414(&(Global_2516617[iVar0 /*2*/]));
			func_4(&(Global_2516617[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_667(164);
		if (func_666(iVar0, Global_262145.f_12614, bParam1))
		{
			func_414(&(Global_2516617[iVar0 /*2*/]));
			func_4(&(Global_2516617[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_667(142);
		if (func_666(iVar0, Global_262145.f_12614, bParam1))
		{
			func_414(&(Global_2516617[iVar0 /*2*/]));
			func_4(&(Global_2516617[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_667(152);
		if (func_666(iVar0, Global_262145.f_12614, bParam1))
		{
			func_414(&(Global_2516617[iVar0 /*2*/]));
			func_4(&(Global_2516617[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_667(166);
		if (func_666(iVar0, Global_262145.f_12614, bParam1))
		{
			func_414(&(Global_2516617[iVar0 /*2*/]));
			func_4(&(Global_2516617[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_667(170);
		if (func_666(iVar0, Global_262145.f_12614, bParam1))
		{
			func_414(&(Global_2516617[iVar0 /*2*/]));
			func_4(&(Global_2516617[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_667(173);
		if (func_666(iVar0, Global_262145.f_12614, bParam1))
		{
			func_414(&(Global_2516617[iVar0 /*2*/]));
			func_4(&(Global_2516617[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_667(179);
		if (func_666(iVar0, Global_262145.f_12614, bParam1))
		{
			func_414(&(Global_2516617[iVar0 /*2*/]));
			func_4(&(Global_2516617[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_667(200);
		if (func_666(iVar0, Global_262145.f_12614, bParam1))
		{
			func_414(&(Global_2516617[iVar0 /*2*/]));
			func_4(&(Global_2516617[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_667(201);
		if (func_666(iVar0, Global_262145.f_12614, bParam1))
		{
			func_414(&(Global_2516617[iVar0 /*2*/]));
			func_4(&(Global_2516617[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_667(182);
		if (func_666(iVar0, Global_262145.f_12615, 0))
		{
			func_414(&(Global_2516617[iVar0 /*2*/]));
			func_4(&(Global_2516617[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_667(183);
		if (func_666(iVar0, Global_262145.f_12615, 0))
		{
			func_414(&(Global_2516617[iVar0 /*2*/]));
			func_4(&(Global_2516617[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_667(185);
		if (func_666(iVar0, Global_262145.f_12615, 0))
		{
			func_414(&(Global_2516617[iVar0 /*2*/]));
			func_4(&(Global_2516617[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_667(186);
		if (func_666(iVar0, Global_262145.f_12615, 0))
		{
			func_414(&(Global_2516617[iVar0 /*2*/]));
			func_4(&(Global_2516617[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_667(180);
		if (func_666(iVar0, Global_262145.f_12615, 0))
		{
			func_414(&(Global_2516617[iVar0 /*2*/]));
			func_4(&(Global_2516617[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_667(195);
		if (func_666(iVar0, Global_262145.f_12615, 0))
		{
			func_414(&(Global_2516617[iVar0 /*2*/]));
			func_4(&(Global_2516617[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_667(197);
		if (func_666(iVar0, Global_262145.f_12615, 0))
		{
			func_414(&(Global_2516617[iVar0 /*2*/]));
			func_4(&(Global_2516617[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_667(198);
		if (func_666(iVar0, Global_262145.f_12615, 0))
		{
			func_414(&(Global_2516617[iVar0 /*2*/]));
			func_4(&(Global_2516617[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_667(207);
		if (func_666(iVar0, Global_262145.f_12615, 0))
		{
			func_414(&(Global_2516617[iVar0 /*2*/]));
			func_4(&(Global_2516617[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_667(208);
		if (func_666(iVar0, Global_262145.f_12615, 0))
		{
			func_414(&(Global_2516617[iVar0 /*2*/]));
			func_4(&(Global_2516617[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_667(209);
		if (func_666(iVar0, Global_262145.f_12615, 0))
		{
			func_414(&(Global_2516617[iVar0 /*2*/]));
			func_4(&(Global_2516617[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_667(214);
		if (func_666(iVar0, Global_262145.f_12615, 0))
		{
			func_414(&(Global_2516617[iVar0 /*2*/]));
			func_4(&(Global_2516617[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_667(215);
		if (func_666(iVar0, Global_262145.f_12615, 0))
		{
			func_414(&(Global_2516617[iVar0 /*2*/]));
			func_4(&(Global_2516617[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_667(216);
		if (func_666(iVar0, Global_262145.f_12615, 0))
		{
			func_414(&(Global_2516617[iVar0 /*2*/]));
			func_4(&(Global_2516617[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_667(217);
		if (func_666(iVar0, Global_262145.f_12615, 0))
		{
			func_414(&(Global_2516617[iVar0 /*2*/]));
			func_4(&(Global_2516617[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_667(218);
		if (func_666(iVar0, Global_262145.f_12615, 0))
		{
			func_414(&(Global_2516617[iVar0 /*2*/]));
			func_4(&(Global_2516617[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_667(219);
		if (func_666(iVar0, Global_262145.f_12615, 0))
		{
			func_414(&(Global_2516617[iVar0 /*2*/]));
			func_4(&(Global_2516617[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_667(220);
		if (func_666(iVar0, Global_262145.f_12615, 0))
		{
			func_414(&(Global_2516617[iVar0 /*2*/]));
			func_4(&(Global_2516617[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_667(221);
		if (func_666(iVar0, Global_262145.f_12615, 0))
		{
			func_414(&(Global_2516617[iVar0 /*2*/]));
			func_4(&(Global_2516617[iVar0 /*2*/]), 1, 0);
		}
	}
}

int func_666(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		if ((!func_36(unk_0x460153A63B9477BC(), 19) && !func_36(unk_0x460153A63B9477BC(), 20)) && !func_36(unk_0x460153A63B9477BC(), 9))
		{
			return 0;
		}
	}
	if (Global_2516617.f_93[iParam0] == 1 && func_406(&(Global_2516617[iParam0 /*2*/])))
	{
		if (func_609(&(Global_2516617[iParam0 /*2*/]), 1, 0) < iParam1)
		{
			Global_2516617.f_93[iParam0] = 0;
			return 1;
		}
		return 0;
	}
	return 1;
}

int func_667(int iParam0)
{
	switch (iParam0)
	{
		case 159:
			return 11;
		
		case 157:
			return 12;
		
		case 148:
			return 13;
		
		case 164:
			return 14;
		
		case 142:
			return 15;
		
		case 152:
			return 16;
		
		case 163:
			return 17;
		
		case 155:
			return 18;
		
		case 160:
			return 19;
		
		case 153:
			return 20;
		
		case 162:
			return 21;
		
		case 154:
			return 22;
		
		case 166:
			return 8;
		
		case 170:
			return 9;
		
		case 173:
			return 10;
		
		case 171:
			return 23;
		
		case 172:
			return 24;
		
		case 179:
			return 25;
		
		case 189:
			return 26;
		
		case 193:
			return 27;
		
		case 194:
			return 28;
		
		case 199:
			return 29;
		
		case 201:
			return 30;
		
		case 200:
			return 31;
		
		case 205:
			return 32;
		
		case 210:
			return 33;
		
		case 182:
			return 34;
		
		case 183:
			return 35;
		
		case 185:
			return 36;
		
		case 186:
			return 37;
		
		case 180:
			return 38;
		
		case 195:
			return 39;
		
		case 197:
			return 40;
		
		case 198:
			return 41;
		
		case 207:
			return 42;
		
		case 208:
			return 43;
		
		case 209:
			return 44;
		
		case 211:
			return 45;
		
		case 214:
			return 0;
		
		case 215:
			return 1;
		
		case 216:
			return 2;
		
		case 217:
			return 3;
		
		case 218:
			return 4;
		
		case 219:
			return 5;
		
		case 220:
			return 6;
		
		case 221:
			return 7;
		
		default:
	}
	return -1;
}

void func_668(int iParam0)
{
	int iVar0;
	
	if (iParam0 == -1)
	{
		iParam0 = func_669();
	}
	if (iParam0 > 0)
	{
		if (func_11() != func_10())
		{
			Global_2516617.f_93[func_667(iParam0)] = 1;
		}
		iVar0 = func_667(155);
		if (func_666(iVar0, Global_262145.f_12615, 0))
		{
			func_414(&(Global_2516617[iVar0 /*2*/]));
			func_4(&(Global_2516617[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_667(163);
		if (func_666(iVar0, Global_262145.f_12615, 0))
		{
			func_414(&(Global_2516617[iVar0 /*2*/]));
			func_4(&(Global_2516617[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_667(160);
		if (func_666(iVar0, Global_262145.f_12615, 0))
		{
			func_414(&(Global_2516617[iVar0 /*2*/]));
			func_4(&(Global_2516617[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_667(153);
		if (func_666(iVar0, Global_262145.f_12615, 0))
		{
			func_414(&(Global_2516617[iVar0 /*2*/]));
			func_4(&(Global_2516617[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_667(162);
		if (func_666(iVar0, Global_262145.f_12615, 0))
		{
			func_414(&(Global_2516617[iVar0 /*2*/]));
			func_4(&(Global_2516617[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_667(154);
		if (func_666(iVar0, Global_262145.f_12615, 0))
		{
			func_414(&(Global_2516617[iVar0 /*2*/]));
			func_4(&(Global_2516617[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_667(171);
		if (func_666(iVar0, Global_262145.f_12615, 0))
		{
			func_414(&(Global_2516617[iVar0 /*2*/]));
			func_4(&(Global_2516617[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_667(172);
		if (func_666(iVar0, Global_262145.f_12615, 0))
		{
			func_414(&(Global_2516617[iVar0 /*2*/]));
			func_4(&(Global_2516617[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_667(199);
		if (func_666(iVar0, Global_262145.f_12615, 0))
		{
			func_414(&(Global_2516617[iVar0 /*2*/]));
			func_4(&(Global_2516617[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_667(194);
		if (func_666(iVar0, Global_262145.f_12615, 0))
		{
			func_414(&(Global_2516617[iVar0 /*2*/]));
			func_4(&(Global_2516617[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_667(193);
		if (func_666(iVar0, Global_262145.f_12615, 0))
		{
			func_414(&(Global_2516617[iVar0 /*2*/]));
			func_4(&(Global_2516617[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_667(210);
		if (func_666(iVar0, Global_262145.f_12615, 0))
		{
			func_414(&(Global_2516617[iVar0 /*2*/]));
			func_4(&(Global_2516617[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_667(205);
		if (func_666(iVar0, Global_262145.f_12615, 0))
		{
			func_414(&(Global_2516617[iVar0 /*2*/]));
			func_4(&(Global_2516617[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_667(189);
		if (func_666(iVar0, Global_262145.f_12615, 0))
		{
			func_414(&(Global_2516617[iVar0 /*2*/]));
			func_4(&(Global_2516617[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_667(211);
		if (func_666(iVar0, Global_262145.f_12615, 0))
		{
			func_414(&(Global_2516617[iVar0 /*2*/]));
			func_4(&(Global_2516617[iVar0 /*2*/]), 1, 0);
		}
	}
}

int func_669()
{
	char* sVar0;
	
	sVar0 = unk_0x6C5C6B207AA78253();
	if (unk_0xF005CCA4263DF67F(sVar0, "GB_ASSAULT"))
	{
		return 159;
	}
	else if (unk_0xF005CCA4263DF67F(sVar0, "GB_BELLYBEAST"))
	{
		return 157;
	}
	else if (unk_0xF005CCA4263DF67F(sVar0, "GB_DEATHMATCH"))
	{
		return 148;
	}
	else if (unk_0xF005CCA4263DF67F(sVar0, "GB_HUNT_THE_BOSS"))
	{
		return 164;
	}
	else if (unk_0xF005CCA4263DF67F(sVar0, "GB_SIGHTSEER"))
	{
		return 142;
	}
	else if (unk_0xF005CCA4263DF67F(sVar0, "GB_YACHT_ROB"))
	{
		return 152;
	}
	else if (unk_0xF005CCA4263DF67F(sVar0, "GB_CARJACKING"))
	{
		return 163;
	}
	else if (unk_0xF005CCA4263DF67F(sVar0, "GB_COLLECT_MONEY"))
	{
		return 155;
	}
	else if (unk_0xF005CCA4263DF67F(sVar0, "GB_FINDERSKEEPERS"))
	{
		return 160;
	}
	else if (unk_0xF005CCA4263DF67F(sVar0, "GB_FIVESTAR"))
	{
		return 153;
	}
	else if (unk_0xF005CCA4263DF67F(sVar0, "GB_POINT_TO_POINT"))
	{
		return 162;
	}
	else if (unk_0xF005CCA4263DF67F(sVar0, "GB_ROB_SHOP"))
	{
		return 154;
	}
	else if (unk_0xF005CCA4263DF67F(sVar0, "GB_HEADHUNTER"))
	{
		return 166;
	}
	else if (unk_0xF005CCA4263DF67F(sVar0, "GB_CONTRABAND_BUY"))
	{
		return 167;
	}
	else if (unk_0xF005CCA4263DF67F(sVar0, "GB_CONTRABAND_SELL"))
	{
		return 168;
	}
	else if (unk_0xF005CCA4263DF67F(sVar0, "GB_CONTRABAND_DEFEND"))
	{
		return 169;
	}
	else if (unk_0xF005CCA4263DF67F(sVar0, "GB_AIRFREIGHT"))
	{
		return 170;
	}
	else if (unk_0xF005CCA4263DF67F(sVar0, "GB_CASHING_OUT"))
	{
		return 171;
	}
	else if (unk_0xF005CCA4263DF67F(sVar0, "GB_SALVAGE"))
	{
		return 172;
	}
	else if (unk_0xF005CCA4263DF67F(sVar0, "GB_FRAGILE_GOODS"))
	{
		return 173;
	}
	else if (unk_0xF005CCA4263DF67F(sVar0, "GB_VEHICLE_EXPORT"))
	{
		return 178;
	}
	else if (unk_0xF005CCA4263DF67F(sVar0, "GB_ILLICIT_GOODS_RESUPPLY"))
	{
		return 192;
	}
	else if (unk_0xF005CCA4263DF67F(sVar0, "GB_BIKER_JOUST"))
	{
		return 179;
	}
	else if (unk_0xF005CCA4263DF67F(sVar0, "GB_BIKER_UNLOAD_WEAPONS"))
	{
		return 180;
	}
	else if (unk_0xF005CCA4263DF67F(sVar0, "GB_BIKER_BAD_DEAL"))
	{
		return 182;
	}
	else if (unk_0xF005CCA4263DF67F(sVar0, "GB_BIKER_RESCUE_CONTACT"))
	{
		return 183;
	}
	else if (unk_0xF005CCA4263DF67F(sVar0, "GB_BIKER_LAST_RESPECTS"))
	{
		return 185;
	}
	else if (unk_0xF005CCA4263DF67F(sVar0, "GB_BIKER_CONTRACT_KILLING"))
	{
		return 186;
	}
	else if (unk_0xF005CCA4263DF67F(sVar0, "GB_BIKER_RACE_P2P"))
	{
		return 189;
	}
	else if (unk_0xF005CCA4263DF67F(sVar0, "GB_BIKER_CONTRABAND_SELL"))
	{
		return 190;
	}
	else if (unk_0xF005CCA4263DF67F(sVar0, "GB_BIKER_CONTRABAND_DEFEND"))
	{
		return 191;
	}
	else if (unk_0xF005CCA4263DF67F(sVar0, "GB_ILLICIT_GOODS_RESUPPLY"))
	{
		return 192;
	}
	else if (unk_0xF005CCA4263DF67F(sVar0, "GB_BIKER_DRIVEBY_ASSASSIN"))
	{
		return 193;
	}
	else if (unk_0xF005CCA4263DF67F(sVar0, "GB_BIKER_RIPPIN_IT_UP"))
	{
		return 194;
	}
	else if (unk_0xF005CCA4263DF67F(sVar0, "GB_BIKER_FREE_PRISONER"))
	{
		return 197;
	}
	else if (unk_0xF005CCA4263DF67F(sVar0, "GB_BIKER_SAFECRACKER"))
	{
		return 198;
	}
	else if (unk_0xF005CCA4263DF67F(sVar0, "GB_BIKER_STEAL_BIKES"))
	{
		return 195;
	}
	else if (unk_0xF005CCA4263DF67F(sVar0, "GB_BIKER_SEARCH_AND_DESTROY"))
	{
		return 199;
	}
	else if (unk_0xF005CCA4263DF67F(sVar0, "AM_PENNED_IN"))
	{
		return 200;
	}
	else if (unk_0xF005CCA4263DF67F(sVar0, "GB_BIKER_STAND_YOUR_GROUND"))
	{
		return 201;
	}
	else if (unk_0xF005CCA4263DF67F(sVar0, "GB_BIKER_CRIMINAL_MISCHIEF"))
	{
		return 205;
	}
	else if (unk_0xF005CCA4263DF67F(sVar0, "GB_BIKER_DESTROY_VANS"))
	{
		return 207;
	}
	else if (unk_0xF005CCA4263DF67F(sVar0, "GB_BIKER_BURN_ASSETS"))
	{
		return 208;
	}
	else if (unk_0xF005CCA4263DF67F(sVar0, "GB_BIKER_SHUTTLE"))
	{
		return 209;
	}
	else if (unk_0xF005CCA4263DF67F(sVar0, "GB_BIKER_WHEELIE_RIDER"))
	{
		return 210;
	}
	else if (unk_0xF005CCA4263DF67F(sVar0, "GB_PLOUGHED"))
	{
		return 214;
	}
	else if (unk_0xF005CCA4263DF67F(sVar0, "GB_FULLY_LOADED"))
	{
		return 215;
	}
	else if (unk_0xF005CCA4263DF67F(sVar0, "GB_AMPHIBIOUS_ASSAULT"))
	{
		return 216;
	}
	else if (unk_0xF005CCA4263DF67F(sVar0, "GB_TRANSPORTER"))
	{
		return 217;
	}
	else if (unk_0xF005CCA4263DF67F(sVar0, "GB_FORTIFIED"))
	{
		return 218;
	}
	else if (unk_0xF005CCA4263DF67F(sVar0, "GB_VELOCITY"))
	{
		return 219;
	}
	else if (unk_0xF005CCA4263DF67F(sVar0, "GB_STOCKPILING"))
	{
		return 221;
	}
	else if (unk_0xF005CCA4263DF67F(sVar0, "GB_RAMPED_UP"))
	{
		return 220;
	}
	else if (unk_0xF005CCA4263DF67F(sVar0, "GB_GUNRUNNING"))
	{
		return 225;
	}
	else if (unk_0xF005CCA4263DF67F(sVar0, "GB_GUNRUNNING_DEFEND"))
	{
		return 227;
	}
	else if (unk_0xF005CCA4263DF67F(sVar0, "GB_SMUGGLER"))
	{
		return 229;
	}
	else if (unk_0xF005CCA4263DF67F(sVar0, "GB_FM_GANGOPS"))
	{
		return 233;
	}
	return 0;
}

void func_670(int iParam0)
{
	if (!func_671(Global_1630317[unk_0x460153A63B9477BC() /*595*/].f_11.f_150[iParam0 /*3*/], func_672(), 0))
	{
		Global_1630317[unk_0x460153A63B9477BC() /*595*/].f_11.f_150[iParam0 /*3*/] = { func_672() };
	}
	if (!func_671(Global_1630317[unk_0x460153A63B9477BC() /*595*/].f_11.f_125[iParam0 /*3*/], func_672(), 0))
	{
		Global_1630317[unk_0x460153A63B9477BC() /*595*/].f_11.f_125[iParam0 /*3*/] = { func_672() };
	}
}

bool func_671(struct<3> Param0, struct<3> Param1, bool bParam2)
{
	if (bParam2)
	{
		return (Param0.x == Param1.x && Param0.f_1 == Param1.f_1);
	}
	return ((Param0.x == Param1.x && Param0.f_1 == Param1.f_1) && Param0.f_2 == Param1.f_2);
}

Vector3 func_672()
{
	struct<3> Var0;
	
	return Var0;
}

void func_673()
{
	struct<20> Var0;
	
	Var0.f_2 = -1;
	Var0.f_3 = -1;
	Var0.f_4 = -1;
	Var0.f_6 = -1;
	Var0.f_7 = -1;
	Var0.f_8 = -1;
	Global_1573907 = { Var0 };
	Global_1573907.f_13 = func_10();
	if (unk_0xCE990E643CD9D0E5(Global_1573344, 3))
	{
		unk_0xD2459066EA58CE43(&Global_1573344, 3);
	}
}

void func_674(bool bParam0)
{
	if (bParam0)
	{
		if (!func_47(unk_0x460153A63B9477BC(), 14))
		{
			func_676(14);
		}
	}
	else if (func_47(unk_0x460153A63B9477BC(), 14))
	{
		func_675(14);
	}
}

void func_675(int iParam0)
{
	unk_0xD2459066EA58CE43(&(Global_1630317[unk_0x460153A63B9477BC() /*595*/].f_11.f_5), iParam0);
}

void func_676(int iParam0)
{
	unk_0xBE20AB8238688965(&(Global_1630317[unk_0x460153A63B9477BC() /*595*/].f_11.f_5), iParam0);
}

void func_677(int iParam0)
{
	if (func_29(unk_0x460153A63B9477BC()))
	{
		if (unk_0x460153A63B9477BC() != iParam0)
		{
			if (Global_1630317[unk_0x460153A63B9477BC() /*595*/].f_11.f_457 != iParam0)
			{
				Global_1630317[unk_0x460153A63B9477BC() /*595*/].f_11.f_457 = iParam0;
				if (iParam0 != func_10())
				{
				}
			}
		}
	}
}

int func_678(int iParam0)
{
	if (func_679(iParam0, 0))
	{
		return Global_1630317[iParam0 /*595*/].f_11.f_32;
	}
	return -1;
}

int func_679(int iParam0, int iParam1)
{
	if (Global_1630317[iParam0 /*595*/].f_11.f_32 != -1 || (iParam1 && Global_1630317[iParam0 /*595*/].f_11.f_33 != -1))
	{
		return 1;
	}
	return 0;
}

void func_680(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	int iVar0;
	
	if (func_270(iParam0, iParam1) && func_699(iParam0, iParam1))
	{
		iVar0 = func_269(iParam0, iParam1);
		func_684(iVar0, bParam2, bParam3);
		func_681(iVar0, 1);
	}
}

void func_681(int iParam0, bool bParam1)
{
	if (!func_683(iParam0))
	{
		return;
	}
	func_253(func_682(iParam0), bParam1, -1, 1);
	Global_1590682[unk_0x460153A63B9477BC() /*883*/].f_274.f_183[iParam0 /*12*/].f_6 = bParam1;
}

int func_682(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 7628;
		
		case 1:
			return 7629;
		
		case 2:
			return 7630;
		
		case 3:
			return 7631;
		
		case 4:
			return 7632;
		
		case 5:
			return 15373;
		
		default:
	}
	return 7628;
}

bool func_683(int iParam0)
{
	return (iParam0 >= 0 && iParam0 < 6);
}

void func_684(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	float fVar6;
	
	bVar1 = false;
	iVar2 = func_698(unk_0x460153A63B9477BC(), iParam0);
	if (!bParam1)
	{
		func_697(iParam0, 0, bParam2);
	}
	if (bParam1)
	{
		iVar0 = Global_2515430[iParam0];
		iVar0 = func_696(iParam0, bParam2);
		if (iVar0 < 0)
		{
			iVar0 = 0;
		}
		if (!bParam2)
		{
			Global_1678139 = -1;
		}
		func_695(iParam0, 0, bParam2);
	}
	else if (func_693(iParam0, bParam2))
	{
		iVar0 = func_692(iVar2, 0);
		iVar3 = func_691(unk_0x460153A63B9477BC(), iVar2);
		iVar4 = func_690(iVar2, bParam2);
		iVar5 = func_692(iVar2, bParam2);
		fVar6 = (to_float(iVar5) / to_float(iVar4));
		iVar0 = (iVar0 - round((to_float(iVar3) * fVar6)));
		if (iVar0 <= 0)
		{
			iVar0 = iVar5;
		}
		if (func_689(iVar2) && func_688(unk_0x460153A63B9477BC(), iVar2) == 2)
		{
			iVar0 = (iVar0 / 2);
			bVar1 = true;
		}
		func_697(iParam0, iVar0, bParam2);
	}
	else
	{
		if (func_687(unk_0x460153A63B9477BC(), iVar2) > 0)
		{
			func_686(iParam0, (Global_1590682[unk_0x460153A63B9477BC() /*883*/].f_274.f_183[iParam0 /*12*/].f_2 - (func_690(iVar2, bParam2) / 2)));
		}
		iVar0 = (func_692(iVar2, bParam2) / func_687(unk_0x460153A63B9477BC(), iVar2) + 1);
	}
	if (!bVar1)
	{
		if (func_689(iVar2) && func_688(unk_0x460153A63B9477BC(), iVar2) == 2)
		{
			iVar0 = (iVar0 / 2);
			bVar1 = true;
		}
	}
	func_685(unk_0x460153A63B9477BC(), iVar2, iVar0, bParam2);
}

void func_685(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	int iVar0;
	
	if (iParam0 == func_10())
	{
		return;
	}
	if (func_260(iParam1))
	{
		iVar0 = 0;
		while (iVar0 <= 5)
		{
			if (Global_1590682[iParam0 /*883*/].f_274.f_183[iVar0 /*12*/] == iParam1)
			{
				if (bParam3)
				{
					Global_1590682[iParam0 /*883*/].f_274.f_257 = iParam2;
				}
				else
				{
					Global_1590682[iParam0 /*883*/].f_274.f_183[iVar0 /*12*/].f_9 = iParam2;
				}
			}
			iVar0++;
		}
	}
}

void func_686(int iParam0, int iParam1)
{
	if (iParam0 != -1 && iParam1 != Global_1590682[unk_0x460153A63B9477BC() /*883*/].f_274.f_183[iParam0 /*12*/].f_2)
	{
		Global_1590682[unk_0x460153A63B9477BC() /*883*/].f_274.f_183[iParam0 /*12*/].f_2 = iParam1;
	}
}

int func_687(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam0 == func_10())
	{
		return 0;
	}
	if (func_260(iParam1))
	{
		iVar0 = 0;
		while (iVar0 <= 5)
		{
			if (Global_1590682[iParam0 /*883*/].f_274.f_183[iVar0 /*12*/] == iParam1)
			{
				return Global_1590682[iParam0 /*883*/].f_274.f_183[iVar0 /*12*/].f_8;
			}
			iVar0++;
		}
	}
	return 0;
}

int func_688(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam0 == func_10())
	{
		return 0;
	}
	if (func_260(iParam1) && func_689(iParam1))
	{
		iVar0 = 0;
		while (iVar0 <= 5)
		{
			if (Global_1590682[iParam0 /*883*/].f_274.f_183[iVar0 /*12*/] == iParam1)
			{
				return Global_1590682[iParam0 /*883*/].f_274.f_183[iVar0 /*12*/].f_11;
			}
			iVar0++;
		}
	}
	return 0;
}

bool func_689(int iParam0)
{
	return func_153(iParam0) == 5;
}

int func_690(int iParam0, bool bParam1)
{
	var uVar0;
	int iVar1;
	
	iVar1 = func_153(iParam0);
	switch (iVar1)
	{
		case 1:
			uVar0 = Global_262145.f_16958;
			if (func_268(unk_0x460153A63B9477BC(), iParam0, 0))
			{
				uVar0 = Global_262145.f_16963;
			}
			break;
		
		case 3:
			uVar0 = Global_262145.f_16957;
			if (func_268(unk_0x460153A63B9477BC(), iParam0, 0))
			{
				uVar0 = Global_262145.f_16962;
			}
			break;
		
		case 4:
			uVar0 = Global_262145.f_16956;
			if (func_268(unk_0x460153A63B9477BC(), iParam0, 0))
			{
				uVar0 = Global_262145.f_16961;
			}
			break;
		
		case 0:
			uVar0 = Global_262145.f_16954;
			if (func_268(unk_0x460153A63B9477BC(), iParam0, 0))
			{
				uVar0 = Global_262145.f_16959;
			}
			break;
		
		case 2:
			uVar0 = Global_262145.f_16955;
			if (func_268(unk_0x460153A63B9477BC(), iParam0, 0))
			{
				uVar0 = Global_262145.f_16960;
			}
			break;
		
		case 5:
			if (bParam1)
			{
				uVar0 = Global_262145.f_21084;
				if (func_268(unk_0x460153A63B9477BC(), iParam0, 0))
				{
					uVar0 = Global_262145.f_21085;
				}
			}
			else
			{
				uVar0 = Global_262145.f_21068;
				if (func_268(unk_0x460153A63B9477BC(), iParam0, 0))
				{
					uVar0 = Global_262145.f_21069;
				}
			}
			break;
	}
	return uVar0;
}

int func_691(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam0 == func_10())
	{
		return 0;
	}
	if (func_260(iParam1))
	{
		iVar0 = 0;
		while (iVar0 <= 5)
		{
			if (Global_1590682[iParam0 /*883*/].f_274.f_183[iVar0 /*12*/] == iParam1)
			{
				return Global_1590682[iParam0 /*883*/].f_274.f_183[iVar0 /*12*/].f_2;
			}
			iVar0++;
		}
	}
	return 0;
}

int func_692(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = func_153(iParam0);
	switch (iVar1)
	{
		case 1:
			iVar0 = Global_262145.f_16939;
			if (func_268(unk_0x460153A63B9477BC(), iParam0, 0))
			{
				iVar0 = (iVar0 - Global_262145.f_16948);
			}
			if (func_268(unk_0x460153A63B9477BC(), iParam0, 1))
			{
				iVar0 = (iVar0 - Global_262145.f_16953);
			}
			break;
		
		case 3:
			iVar0 = Global_262145.f_16940;
			if (func_268(unk_0x460153A63B9477BC(), iParam0, 0))
			{
				iVar0 = (iVar0 - Global_262145.f_16947);
			}
			if (func_268(unk_0x460153A63B9477BC(), iParam0, 1))
			{
				iVar0 = (iVar0 - Global_262145.f_16952);
			}
			break;
		
		case 4:
			iVar0 = Global_262145.f_16941;
			if (func_268(unk_0x460153A63B9477BC(), iParam0, 0))
			{
				iVar0 = (iVar0 - Global_262145.f_16946);
			}
			if (func_268(unk_0x460153A63B9477BC(), iParam0, 1))
			{
				iVar0 = (iVar0 - Global_262145.f_16951);
			}
			break;
		
		case 0:
			iVar0 = Global_262145.f_16942;
			if (func_268(unk_0x460153A63B9477BC(), iParam0, 0))
			{
				iVar0 = (iVar0 - Global_262145.f_16944);
			}
			if (func_268(unk_0x460153A63B9477BC(), iParam0, 1))
			{
				iVar0 = (iVar0 - Global_262145.f_16949);
			}
			break;
		
		case 2:
			iVar0 = Global_262145.f_16943;
			if (func_268(unk_0x460153A63B9477BC(), iParam0, 0))
			{
				iVar0 = (iVar0 - Global_262145.f_16945);
			}
			if (func_268(unk_0x460153A63B9477BC(), iParam0, 1))
			{
				iVar0 = (iVar0 - Global_262145.f_16950);
			}
			break;
		
		case 5:
			if (bParam1)
			{
				iVar0 = Global_262145.f_21081;
			}
			else
			{
				iVar0 = Global_262145.f_21065;
			}
			if (func_268(unk_0x460153A63B9477BC(), iParam0, 0))
			{
				if (bParam1)
				{
					iVar0 = (iVar0 - Global_262145.f_21082);
				}
				else
				{
					iVar0 = (iVar0 - Global_262145.f_21066);
				}
			}
			if (func_268(unk_0x460153A63B9477BC(), iParam0, 1))
			{
				if (bParam1)
				{
					iVar0 = (iVar0 - Global_262145.f_21083);
				}
				else
				{
					iVar0 = (iVar0 - Global_262145.f_21067);
				}
			}
			if (func_688(unk_0x460153A63B9477BC(), iParam0) == 2)
			{
				iVar0 *= 2;
			}
			break;
	}
	return iVar0;
}

bool func_693(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		return func_254(15384, -1, -1);
	}
	return func_254(func_694(iParam0), -1, -1);
}

int func_694(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 9416;
		
		case 1:
			return 9417;
		
		case 2:
			return 9418;
		
		case 3:
			return 9419;
		
		case 4:
			return 9420;
		
		case 5:
			return 15372;
		
		default:
	}
	return 9416;
}

void func_695(int iParam0, bool bParam1, bool bParam2)
{
	if (bParam2)
	{
		func_253(15384, bParam1, -1, 1);
		return;
	}
	func_253(func_694(iParam0), bParam1, -1, 1);
}

int func_696(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = Global_2515430[iParam0];
	iVar1 = func_698(unk_0x460153A63B9477BC(), iParam0);
	if (bParam1)
	{
		iVar0 = Global_2515437;
	}
	if (func_689(iVar1))
	{
		if (func_688(unk_0x460153A63B9477BC(), iVar1) == 2)
		{
			iVar0 *= 2;
		}
	}
	return iVar0;
}

void func_697(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		Global_2515437 = iParam1;
		return;
	}
	Global_2515430[iParam0] = iParam1;
}

int func_698(int iParam0, int iParam1)
{
	var uVar0;
	
	if (iParam0 == func_10())
	{
		return 0;
	}
	if (iParam1 < 0 || iParam1 >= 6)
	{
		return 0;
	}
	if (func_260(Global_1590682[iParam0 /*883*/].f_274.f_183[iParam1 /*12*/]))
	{
		uVar0 = Global_1590682[iParam0 /*883*/].f_274.f_183[iParam1 /*12*/];
	}
	return uVar0;
}

int func_699(int iParam0, int iParam1)
{
	int iVar0;
	
	if (func_270(iParam0, iParam1))
	{
		iVar0 = func_269(iParam0, iParam1);
		if (Global_1590682[iParam0 /*883*/].f_274.f_183[iVar0 /*12*/].f_4 > 0 && Global_1590682[iParam0 /*883*/].f_274.f_183[iVar0 /*12*/].f_7)
		{
			return 1;
		}
	}
	return 0;
}

void func_700()
{
	unk_0xD2459066EA58CE43(&(Global_2540384.f_1797), 28);
	unk_0xD2459066EA58CE43(&(Global_2540384.f_1797), 29);
	func_701(24);
}

void func_701(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	unk_0xD2459066EA58CE43(&(Global_2540384.f_5188.f_7[iVar0]), iVar1);
}

int func_702(struct<21> Param0)
{
	func_754(func_755(Param0), Param0);
	unk_0xDF803FB4BC52CAF6(0);
	func_751(0, -1, 0);
	unk_0x97D2F2E2C92FD519(&Local_84, 11);
	unk_0xBB96A3ECD45D0317(&Local_85, 129);
	unk_0x3A396632EB359434(0);
	func_703(0, 0, 0);
	return 1;
}

void func_703(int iParam0, int iParam1, bool bParam2)
{
	func_750();
	if (func_61(unk_0x460153A63B9477BC()))
	{
		func_709(1);
	}
	if ((iParam0 != 0 && unk_0x166E920FB00B2DBB(iParam1)) && func_708(iParam1, 1))
	{
		switch (iParam0)
		{
			case 157:
				unk_0xBE20AB8238688965(&Global_1676114, 0);
				break;
			}
	}
	if (!func_141() && !func_28(unk_0x460153A63B9477BC(), 1))
	{
		if (func_305())
		{
			func_555(3);
		}
	}
	func_555(4);
	if (func_99(0))
	{
		Global_1630317[unk_0x460153A63B9477BC() /*595*/].f_11.f_57 = func_11();
	}
	if (func_96(iParam0))
	{
		func_707();
		Global_1676146.f_18 = func_706(func_63());
	}
	else if (func_115(func_678(unk_0x460153A63B9477BC())))
	{
		func_705();
		Global_1676200.f_18 = func_706(func_63());
	}
	if (bParam2)
	{
		if (!func_300())
		{
			func_556(1);
		}
	}
	func_704();
}

void func_704()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		Global_1366969.f_534[iVar0 /*42*/].f_1 = func_10();
		Global_1366969.f_534[iVar0 /*42*/].f_9 = 0;
		iVar0++;
	}
}

void func_705()
{
	struct<63> Var0;
	
	Var0.f_8 = -1;
	Var0.f_9 = -1;
	Var0.f_10 = -1;
	Var0.f_11 = -1;
	Var0.f_12 = -1;
	Var0.f_15 = -1;
	Var0.f_16 = -1;
	Var0.f_17 = -1;
	Var0.f_18 = -1;
	Var0.f_19 = -1;
	Var0.f_20 = -1;
	Var0.f_21 = -1;
	Var0.f_22 = -1;
	Var0.f_23 = -1;
	Var0.f_24 = -1;
	Var0.f_25 = -1;
	Var0.f_26 = -1;
	Var0.f_27 = -1;
	Var0.f_28 = -1;
	Var0.f_29 = -1;
	Var0.f_30 = -1;
	Var0.f_31 = -1;
	Var0.f_32 = -1;
	Var0.f_33 = -1;
	Var0.f_34 = -1;
	Var0.f_35 = -1;
	Var0.f_36 = -1;
	Var0.f_37 = -1;
	Var0.f_38 = -1;
	Var0.f_39 = -1;
	Var0.f_40 = -1;
	Var0.f_41 = -1;
	Var0.f_42 = -1;
	Var0.f_43 = -1;
	Var0.f_44 = -1;
	Var0.f_45 = -1;
	Var0.f_46 = -1;
	Var0.f_47 = -1;
	Var0.f_48 = -1;
	Var0.f_49 = -1;
	Var0.f_50 = -1;
	Var0.f_51 = -1;
	Var0.f_52 = -1;
	Var0.f_53 = -1;
	Var0.f_54 = -1;
	Var0.f_55 = -1;
	Var0.f_56 = -1;
	Var0.f_57 = -1;
	Var0.f_58 = -1;
	Var0.f_59 = -1;
	Var0.f_60 = -1;
	Var0.f_61 = -1;
	Var0.f_62 = -1;
	Global_1676200 = { Var0 };
	Global_1676200.f_24 = 0;
	Global_1676200.f_25 = 0;
	Global_1676200.f_17 = 0;
}

int func_706(int iParam0)
{
	if (func_28(iParam0, 1))
	{
		return Global_1630317[iParam0 /*595*/].f_11.f_424;
	}
	return -1;
}

void func_707()
{
	struct<54> Var0;
	
	Var0.f_8 = -1;
	Var0.f_9 = -1;
	Var0.f_10 = -1;
	Var0.f_11 = -1;
	Var0.f_12 = -1;
	Var0.f_15 = -1;
	Var0.f_16 = -1;
	Var0.f_17 = -1;
	Var0.f_18 = -1;
	Var0.f_19 = -1;
	Var0.f_20 = -1;
	Var0.f_21 = -1;
	Var0.f_22 = -1;
	Var0.f_23 = -1;
	Var0.f_24 = -1;
	Var0.f_25 = -1;
	Var0.f_26 = -1;
	Var0.f_27 = -1;
	Var0.f_28 = -1;
	Var0.f_29 = -1;
	Var0.f_30 = -1;
	Var0.f_31 = -1;
	Var0.f_32 = -1;
	Var0.f_33 = -1;
	Var0.f_34 = -1;
	Var0.f_35 = -1;
	Var0.f_36 = -1;
	Var0.f_37 = -1;
	Var0.f_38 = -1;
	Var0.f_39 = -1;
	Var0.f_40 = -1;
	Var0.f_41 = -1;
	Var0.f_42 = -1;
	Var0.f_43 = -1;
	Var0.f_44 = -1;
	Var0.f_45 = -1;
	Var0.f_46 = -1;
	Var0.f_47 = -1;
	Var0.f_48 = -1;
	Var0.f_49 = -1;
	Var0.f_50 = -1;
	Var0.f_51 = -1;
	Var0.f_52 = -1;
	Var0.f_53 = -1;
	Global_1676146 = { Var0 };
	Global_1676146.f_29 = 0;
	Global_1676146.f_30 = 0;
	Global_1676146.f_17 = 0;
}

int func_708(int iParam0, bool bParam1)
{
	return func_48(unk_0x460153A63B9477BC(), iParam0, bParam1);
}

void func_709(bool bParam0)
{
	int iVar0;
	
	func_701(33);
	func_701(34);
	func_701(35);
	func_701(36);
	func_701(37);
	func_701(38);
	func_701(39);
	func_701(40);
	func_701(43);
	func_701(41);
	func_701(54);
	func_701(42);
	func_701(47);
	func_749(23);
	func_749(24);
	func_701(92);
	unk_0xD2459066EA58CE43(&(Global_2540384.f_1797), 2);
	func_748();
	func_743();
	func_738();
	func_733();
	func_722();
	func_718();
	func_714();
	func_711();
	if (bParam0)
	{
		iVar0 = 0;
		while (iVar0 < 2)
		{
			Global_2540384.f_5188.f_14[iVar0] = 0;
			iVar0++;
		}
	}
	else if (func_710(3))
	{
		func_749(3);
	}
	else if (func_710(4))
	{
		func_749(4);
	}
	else if (func_710(5))
	{
		func_749(5);
	}
	else if (func_710(6))
	{
		func_749(6);
	}
	else if (func_710(7))
	{
		func_749(7);
	}
	else if (((((((((((((((((func_710(0) || func_710(1)) || func_710(2)) || func_710(8)) || func_710(9)) || func_710(10)) || func_710(11)) || func_710(12)) || func_710(13)) || func_710(14)) || func_710(15)) || func_710(16)) || func_710(17)) || func_710(18)) || func_710(19)) || func_710(20)) || func_710(21)) || func_710(22))
	{
		func_749(8);
		func_749(0);
		func_749(1);
		func_749(2);
		func_749(9);
		func_749(10);
		func_749(11);
		func_749(12);
		func_749(13);
		func_749(14);
		func_749(15);
		func_749(16);
		func_749(17);
		func_749(18);
		func_749(19);
		func_749(20);
		func_749(21);
		func_749(22);
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < 2)
		{
			Global_2540384.f_5188.f_14[iVar0] = 0;
			iVar0++;
		}
	}
}

bool func_710(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	return unk_0xCE990E643CD9D0E5(Global_2540384.f_5188.f_14[iVar0], iVar1);
}

void func_711()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 15)
	{
		if (func_713(iVar0))
		{
			func_712(iVar0);
		}
		iVar0++;
	}
}

void func_712(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	unk_0xD2459066EA58CE43(&(Global_2540384.f_5188.f_35[iVar0]), iVar1);
}

bool func_713(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	return unk_0xCE990E643CD9D0E5(Global_2540384.f_5188.f_35[iVar0], iVar1);
}

void func_714()
{
	if (func_716())
	{
		func_715(0);
		func_715(1);
		func_715(2);
		func_715(3);
	}
}

void func_715(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	unk_0xD2459066EA58CE43(&(Global_2540384.f_5188.f_33[iVar0]), iVar1);
}

int func_716()
{
	if (((func_717(0) || func_717(1)) || func_717(2)) || func_717(3))
	{
		return 1;
	}
	return 0;
}

bool func_717(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	return unk_0xCE990E643CD9D0E5(Global_2540384.f_5188.f_33[iVar0], iVar1);
}

void func_718()
{
	if (func_720())
	{
		func_719(4);
		func_719(5);
		func_719(6);
		func_719(7);
	}
}

void func_719(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	unk_0xD2459066EA58CE43(&(Global_2540384.f_5188.f_31[iVar0]), iVar1);
}

int func_720()
{
	if (((func_721(4) || func_721(5)) || func_721(6)) || func_721(7))
	{
		return 1;
	}
	return 0;
}

bool func_721(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	return unk_0xCE990E643CD9D0E5(Global_2540384.f_5188.f_31[iVar0], iVar1);
}

void func_722()
{
	int iVar0;
	
	if (func_732())
	{
		func_731(8);
		func_731(9);
		func_731(10);
		func_731(12);
		func_731(13);
		func_731(14);
		func_731(19);
		func_731(20);
		func_731(21);
		func_731(22);
		func_731(23);
		func_731(24);
		func_731(25);
		func_731(26);
		func_731(15);
		func_731(16);
		func_731(17);
		func_731(18);
		func_731(35);
		func_731(45);
		func_731(46);
		if (func_730(11))
		{
			func_731(11);
			iVar0 = func_124(7227, -1, 0);
			unk_0xBE20AB8238688965(&iVar0, 2);
			func_122(7227, iVar0, -1, 1, 0);
		}
	}
	if (func_730(48))
	{
		if (func_728(151, 3))
		{
			func_726(151, 3);
		}
		func_731(48);
	}
	if (func_730(49))
	{
		if (func_728(152, 3))
		{
			func_726(152, 3);
		}
		func_731(49);
	}
	if (func_730(50))
	{
		if (func_728(153, 3))
		{
			func_726(153, 3);
		}
		func_731(50);
	}
	if (func_730(51))
	{
		if (func_728(func_723(), 3))
		{
			func_726(func_723(), 3);
		}
		func_731(51);
	}
}

int func_723()
{
	if (func_725())
	{
		func_724(154, Global_19681, 1);
	}
	return 154;
}

void func_724(int iParam0, int iParam1, int iParam2)
{
	if (iParam1 < 0 || iParam1 > 4)
	{
		return;
	}
	Global_1848[iParam0 /*29*/].f_24[iParam1] = iParam2;
	if (iParam0 < 162)
	{
		Global_111858.f_28046[iParam0 /*29*/].f_24[iParam1] = iParam2;
	}
}

int func_725()
{
	int iVar0;
	
	iVar0 = func_27(unk_0x460153A63B9477BC());
	if (((iVar0 != unk_0x460153A63B9477BC() && iVar0 != func_10()) && unk_0x166E920FB00B2DBB(iVar0)) && iVar0 != -1)
	{
		return 1;
	}
	return 0;
}

void func_726(int iParam0, int iParam1)
{
	int iVar0;
	
	if (Global_117[iParam0 /*10*/].f_8 != 154)
	{
		if (iParam1 > 3)
		{
		}
		else
		{
			iVar0 = iParam1;
			func_727(iParam0, iVar0, 0);
			func_724(iParam0, iVar0, 0);
		}
	}
}

void func_727(int iParam0, int iParam1, int iParam2)
{
	if (iParam1 < 0 || iParam1 > 4)
	{
		return;
	}
	Global_1848[iParam0 /*29*/].f_12[iParam1] = iParam2;
	if (iParam0 < 162)
	{
		Global_111858.f_28046[iParam0 /*29*/].f_12[iParam1] = iParam2;
	}
}

int func_728(int iParam0, int iParam1)
{
	if (func_729(iParam0, iParam1) == 1)
	{
		return 1;
	}
	return 0;
}

int func_729(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 4)
	{
		return 0;
	}
	return Global_1848[iParam0 /*29*/].f_12[iParam1];
}

bool func_730(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	return unk_0xCE990E643CD9D0E5(Global_2540384.f_5188.f_26[iVar0], iVar1);
}

void func_731(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	unk_0xD2459066EA58CE43(&(Global_2540384.f_5188.f_26[iVar0]), iVar1);
}

int func_732()
{
	if (((((((((((((((((((((func_730(8) || func_730(9)) || func_730(10)) || func_730(12)) || func_730(11)) || func_730(13)) || func_730(14)) || func_730(19)) || func_730(20)) || func_730(21)) || func_730(22)) || func_730(23)) || func_730(24)) || func_730(25)) || func_730(26)) || func_730(15)) || func_730(16)) || func_730(17)) || func_730(18)) || func_730(35)) || func_730(45)) || func_730(46))
	{
		return 1;
	}
	return 0;
}

void func_733()
{
	if (func_737())
	{
		func_736(0);
		func_736(1);
		func_736(2);
		func_736(3);
		func_736(4);
		func_736(5);
		if (func_735(32))
		{
			if (func_728(func_734(), 3))
			{
				func_726(func_734(), 3);
			}
			func_736(32);
		}
	}
}

int func_734()
{
	if (func_725())
	{
		func_724(12, Global_19681, 1);
	}
	return 12;
}

bool func_735(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	return unk_0xCE990E643CD9D0E5(Global_2540384.f_5188.f_23[iVar0], iVar1);
}

void func_736(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	unk_0xD2459066EA58CE43(&(Global_2540384.f_5188.f_23[iVar0]), iVar1);
}

int func_737()
{
	if ((((func_735(1) || func_735(0)) || func_735(2)) || func_735(4)) || func_735(5))
	{
		return 1;
	}
	return 0;
}

void func_738()
{
	if (func_742())
	{
		func_741(0);
		func_741(1);
		func_741(2);
		func_741(3);
		func_741(4);
		func_741(5);
		func_741(6);
		func_741(7);
		if (func_740(8))
		{
			func_741(8);
		}
		if (func_740(15))
		{
			if (func_728(func_739(), 3))
			{
				func_726(func_739(), 3);
			}
			func_741(15);
		}
	}
}

int func_739()
{
	if (func_725())
	{
		func_724(20, Global_19681, 1);
	}
	return 20;
}

bool func_740(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	return unk_0xCE990E643CD9D0E5(Global_2540384.f_5188.f_21[iVar0], iVar1);
}

void func_741(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	unk_0xD2459066EA58CE43(&(Global_2540384.f_5188.f_21[iVar0]), iVar1);
}

int func_742()
{
	if ((((((((func_740(0) || func_740(1)) || func_740(2)) || func_740(3)) || func_740(4)) || func_740(5)) || func_740(6)) || func_740(7)) || func_740(8))
	{
		return 1;
	}
	return 0;
}

void func_743()
{
	if (func_747())
	{
		func_746(0);
		func_746(1);
		func_746(2);
		func_746(3);
		func_746(4);
		func_746(5);
		func_746(6);
		func_746(7);
		func_746(8);
		func_746(9);
		func_746(10);
		func_746(11);
		func_746(12);
		if (func_745(13))
		{
			if (func_728(func_744(), 3))
			{
				func_726(func_744(), 3);
			}
			func_746(13);
		}
	}
}

int func_744()
{
	if (func_725())
	{
		func_724(76, Global_19681, 1);
	}
	return 76;
}

bool func_745(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	return unk_0xCE990E643CD9D0E5(Global_2540384.f_5188.f_19[iVar0], iVar1);
}

void func_746(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	unk_0xD2459066EA58CE43(&(Global_2540384.f_5188.f_19[iVar0]), iVar1);
}

int func_747()
{
	if ((((((((((((func_745(0) || func_745(1)) || func_745(2)) || func_745(3)) || func_745(4)) || func_745(5)) || func_745(6)) || func_745(7)) || func_745(8)) || func_745(9)) || func_745(10)) || func_745(11)) || func_745(12))
	{
		return 1;
	}
	return 0;
}

void func_748()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 1)
	{
		Global_2540384.f_5188.f_17[iVar0] = 0;
		iVar0++;
	}
}

void func_749(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	unk_0xD2459066EA58CE43(&(Global_2540384.f_5188.f_14[iVar0]), iVar1);
}

void func_750()
{
	struct<14> Var0;
	
	Global_1676128 = { Var0 };
	Global_1676128.f_14 = 0;
	Global_1676128.f_15 = 0;
}

int func_751(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = unk_0x361B374A50D875B4();
	while (iVar0 != 2)
	{
		if (((iVar0 == 3 || iVar0 == 4) || iVar0 == 5) || iVar0 == 6)
		{
			if (!bParam2)
			{
				func_753();
			}
			else
			{
				return 0;
			}
		}
		if (!func_752())
		{
			if (iParam0 == 0)
			{
				if (!unk_0x25DDB354A40FFCDB())
				{
					if (!bParam2)
					{
						func_753();
					}
					else
					{
						return 0;
					}
				}
				if (func_641())
				{
					if (!bParam2)
					{
						func_753();
					}
					else
					{
						return 0;
					}
				}
				if (func_639(157))
				{
					if (!bParam2)
					{
						func_753();
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
					func_753();
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
				func_753();
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
			func_753();
		}
		else
		{
			return 0;
		}
	}
	return 1;
}

bool func_752()
{
	return Global_1312872;
}

void func_753()
{
	unk_0xD39E529EBE5DB04F();
}

void func_754(int iParam0, struct<17> Param1, var uParam2, var uParam3, var uParam4, var uParam5)
{
	if (!unk_0x25DDB354A40FFCDB())
	{
		func_753();
	}
	unk_0xA88557896B79E30D(iParam0, 0, Param1.f_16);
}

int func_755(int iParam0)
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

