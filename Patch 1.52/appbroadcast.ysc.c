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
	int iLocal_28 = 0;
	var uLocal_29 = 0;
	struct<2> Local_30 = { 0, 0 } ;
	var uLocal_31 = 0;
	var uLocal_32 = 0;
	struct<2> Local_33 = { 0, 0 } ;
	var uLocal_34 = 0;
	var uLocal_35 = 0;
	struct<2> Local_36 = { 0, 0 } ;
	var uLocal_37 = 0;
	var uLocal_38 = 0;
	struct<2> Local_39 = { 0, 0 } ;
	var uLocal_40 = 0;
	var uLocal_41 = 0;
	struct<2> Local_42 = { 0, 0 } ;
	var uLocal_43 = 0;
	var uLocal_44 = 0;
	struct<2> Local_45 = { 0, 0 } ;
	var uLocal_46 = 0;
	var uLocal_47 = 0;
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
	StringCopy(&Local_30, "CELL_212", 16);
	StringCopy(&Local_33, "CELL_213", 16);
	StringCopy(&Local_36, "CELL_39", 16);
	StringCopy(&Local_39, "CELL_MP_300", 16);
	StringCopy(&Local_42, "CELL_MP_301", 16);
	StringCopy(&Local_45, "CELL_MP_302", 16);
	unk_0xDB4E5F36ED3505EE();
	func_44(&iLocal_28);
	func_35();
	while (true)
	{
		wait(0);
		if (!unk_0x3BF0BB5923982C0D())
		{
			func_33(1);
			func_32();
		}
		if (!Global_19681.f_1 == 9 && Global_19681.f_1 > 3)
		{
			func_3();
			if (Global_19681.f_1 != 8)
			{
				if (func_2())
				{
					func_32();
				}
			}
		}
		if (func_1())
		{
			func_32();
		}
	}
}

int func_1()
{
	if (((Global_19681.f_1 == 1 || Global_19681.f_1 == 3) || Global_19681.f_1 == 0) || Global_19625 == 1)
	{
		Global_19668 = 1;
		return 1;
	}
	return 0;
}

int func_2()
{
	if (Global_8157 == 1 || Global_19681.f_1 < 7)
	{
		Global_19668 = 1;
		return 1;
	}
	return 0;
}

void func_3()
{
	if (func_28(&iLocal_28))
	{
		if (func_16())
		{
			if (Global_2462172)
			{
				unk_0xDF9C8CD1971F3081(0);
				func_10(-326397561, func_11(1, 1));
				Global_2462172 = 0;
			}
			else
			{
				unk_0xDF9C8CD1971F3081(1);
				func_10(178504896, func_11(1, 1));
				Global_2462172 = 1;
			}
			func_4(0);
			return;
		}
	}
}

void func_4(int iParam0)
{
	if (func_9())
	{
		return;
	}
	if (Global_19864)
	{
		if (func_8())
		{
			func_6(1, 1);
		}
		else
		{
			func_6(0, 0);
		}
	}
	if (Global_19681.f_1 == 10 || Global_19681.f_1 == 9)
	{
		unk_0xBE20AB8238688965(&Global_7552, 16);
	}
	if (unk_0x6B12213471F330A3())
	{
		unk_0xBE4122AC23440E7D(false);
	}
	Global_21005 = 5;
	if (iParam0 == 1)
	{
		unk_0xBE20AB8238688965(&Global_7551, 30);
	}
	else
	{
		unk_0xD2459066EA58CE43(&Global_7551, 30);
	}
	if (!func_5())
	{
		Global_19681.f_1 = 3;
	}
}

int func_5()
{
	if (Global_19681.f_1 == 1 || Global_19681.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

void func_6(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		if (func_7(0))
		{
			Global_19864 = 1;
			if (bParam1)
			{
				unk_0x1F1B1269BB6217F7(&Global_19618);
			}
			Global_19609 = { Global_19627[Global_19626 /*3*/] };
			unk_0x241AFEE3D5B4FF70(Global_19609);
		}
	}
	else if (Global_19864 == 1)
	{
		Global_19864 = 0;
		Global_19609 = { Global_19634[Global_19626 /*3*/] };
		if (bParam1)
		{
			unk_0x241AFEE3D5B4FF70(Global_19618);
		}
		else
		{
			unk_0x241AFEE3D5B4FF70(Global_19609);
		}
	}
}

int func_7(int iParam0)
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

bool func_8()
{
	return unk_0xCE990E643CD9D0E5(Global_1689730, 5);
}

bool func_9()
{
	return unk_0xCE990E643CD9D0E5(Global_1689730, 19);
}

void func_10(int iParam0, int iParam1)
{
	struct<4> Var0;
	
	Var0 = 1120313136;
	Var0.f_1 = unk_0x460153A63B9477BC();
	Var0.f_2 = iParam0;
	Var0.f_3 = unk_0x344C570D6F8700DF(0, 9999);
	if (!iParam1 == 0)
	{
		if (unk_0x25DDB354A40FFCDB())
		{
			unk_0xB802750B43D4047C(1, &Var0, 4, iParam1);
		}
	}
}

int func_11(int iParam0, bool bParam1)
{
	var uVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = 0;
	while (iVar1 < 32)
	{
		iVar2 = unk_0xF1110FE23C67293A(iVar1);
		if (func_15(iVar2, 0, 0))
		{
			if (iVar2 != unk_0x460153A63B9477BC() || iParam0)
			{
				if (bParam1)
				{
					unk_0xBE20AB8238688965(&uVar0, iVar1);
				}
				else if (!func_12(iVar2, 0))
				{
					unk_0xBE20AB8238688965(&uVar0, iVar1);
				}
			}
		}
		iVar1++;
	}
	return uVar0;
}

bool func_12(int iParam0, int iParam1)
{
	bool bVar0;
	
	if (iParam0 == unk_0x460153A63B9477BC())
	{
		bVar0 = func_13(-1, 0) == 8;
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

int func_13(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_14();
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

int func_14()
{
	return Global_1312763;
}

int func_15(int iParam0, bool bParam1, bool bParam2)
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

int func_16()
{
	if (!func_22(unk_0x460153A63B9477BC(), 1) && func_17())
	{
		return 1;
	}
	return 0;
}

int func_17()
{
	if (Global_1312466)
	{
		return 1;
	}
	if (func_21())
	{
		return 1;
	}
	if (func_20())
	{
		return 1;
	}
	return func_18(120, -1);
}

int func_18(int iParam0, int iParam1)
{
	var uVar0;
	var uVar1;
	
	uVar0 = Global_2587834[iParam0 /*3*/][func_19(iParam1)];
	if (unk_0xB9112C701DE2A810(uVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

int func_19(var uParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = uParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_14();
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

bool func_20()
{
	return Global_1312884;
}

bool func_21()
{
	return Global_1312886;
}

bool func_22(int iParam0, bool bParam1)
{
	if (func_27() != 0)
	{
		return func_26(iParam0) != 0;
	}
	return func_23(iParam0, bParam1, 0);
}

int func_23(int iParam0, bool bParam1, bool bParam2)
{
	if (bParam1)
	{
		if (func_24(iParam0))
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

bool func_24(int iParam0)
{
	return func_25(iParam0);
}

bool func_25(int iParam0)
{
	return unk_0xCE990E643CD9D0E5(Global_1590682[iParam0 /*883*/].f_13.f_1, 0);
}

int func_26(int iParam0)
{
	if (func_15(iParam0, 0, 1))
	{
		return Global_2425869[iParam0 /*443*/].f_1;
	}
	return 0;
}

int func_27()
{
	return Global_30968;
}

int func_28(int iParam0)
{
	if (!unk_0xCE990E643CD9D0E5(*iParam0, 0))
	{
		return 0;
	}
	if (Global_19659)
	{
		return 0;
	}
	if (!unk_0x87F0CB19476706C3())
	{
		return 0;
	}
	if (!unk_0x1BD7199394D7F19A(2, Global_19650))
	{
		return 0;
	}
	func_29();
	Global_19659 = 1;
	return 1;
}

void func_29()
{
	if (!unk_0xA59F96B50B97E63C(unk_0x9B0761B4C3EB8BC7(), 0))
	{
		unk_0xC4CC25B68A91D144(-1, "Menu_Accept", &Global_19670, 1);
		func_30();
	}
}

void func_30()
{
	if (func_31())
	{
		unk_0x12C8655E426FEBB8(5);
	}
}

int func_31()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (Global_76833)
	{
		return 0;
	}
	iVar2 = 0;
	iVar0 = unk_0xFA3A11B011BBD7F6();
	iVar1 = unk_0xF7B3A1430308F92B(iVar0);
	if (iVar1 == 4)
	{
		iVar2 = 1;
	}
	if (Global_4271302 || iVar2)
	{
		return 1;
	}
	return 1;
}

void func_32()
{
	unk_0xD39E529EBE5DB04F();
}

void func_33(bool bParam0)
{
	if (bParam0)
	{
		func_34();
		if (Global_19681.f_1 == 10 || Global_19681.f_1 == 9)
		{
			unk_0xBE20AB8238688965(&Global_7552, 16);
		}
		Global_19681.f_1 = 1;
		if (func_7(0))
		{
			func_4(0);
		}
	}
	else if (Global_19681.f_1 == 1)
	{
		if (!Global_19681.f_1 == 0)
		{
			Global_19681.f_1 = 3;
		}
	}
}

void func_34()
{
	if (Global_19681.f_1 == 9 || Global_19681.f_1 == 10)
	{
		Global_21058 = 0;
		Global_21054 = 1;
	}
}

void func_35()
{
	if (!Global_19681.f_1 == 7)
	{
		Global_19681.f_1 = 7;
	}
	func_43(Global_19662, "SET_DATA_SLOT_EMPTY", to_float(13), -1082130432, -1082130432, -1082130432, -1082130432);
	if (func_16())
	{
		if (Global_2462172)
		{
			func_42(Global_19662, "SET_DATA_SLOT", to_float(13), to_float(0), to_float(12), -1f, -1f, &Local_42, 0, 0, 0, 0);
		}
		else
		{
			func_42(Global_19662, "SET_DATA_SLOT", to_float(13), to_float(0), to_float(12), -1f, -1f, &Local_39, 0, 0, 0, 0);
		}
	}
	else
	{
		func_42(Global_19662, "SET_DATA_SLOT", to_float(13), to_float(0), to_float(12), -1f, -1f, &Local_45, 0, 0, 0, 0);
	}
	func_43(Global_19662, "DISPLAY_VIEW", to_float(13), -1082130432, -1082130432, -1082130432, -1082130432);
	func_39(&Local_36);
	if (func_16())
	{
		func_36(13, &Local_30, 1, "", 4, &Local_33, &iLocal_28);
	}
	else
	{
		func_36(1, "", 1, "", 4, &Local_33, &iLocal_28);
	}
}

void func_36(int iParam0, char* sParam1, int iParam2, char* sParam3, int iParam4, char* sParam5, int iParam6)
{
	func_37(2, iParam0, sParam1, 0, iParam6, -1);
	func_37(1, iParam2, sParam3, 1, iParam6, 17);
	func_37(3, iParam4, sParam5, 2, iParam6, -1);
}

void func_37(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5)
{
	if (iParam1 == 1)
	{
		func_42(Global_19662, "SET_SOFT_KEYS", to_float(iParam0), 0f, to_float(iParam1), -1f, -1f, 0, 0, 0, 0, 0);
		unk_0xD2459066EA58CE43(iParam4, iParam3);
		func_38(iParam5, 0);
		return;
	}
	if (Global_19669)
	{
		func_42(Global_19662, "SET_SOFT_KEYS", to_float(iParam0), 1f, to_float(iParam1), -1f, -1f, sParam2, 0, 0, 0, 0);
		unk_0xBE20AB8238688965(iParam4, iParam3);
		func_38(iParam5, 1);
		return;
	}
	func_42(Global_19662, "SET_SOFT_KEYS", to_float(iParam0), 1f, to_float(iParam1), -1f, -1f, 0, 0, 0, 0, 0);
	unk_0xBE20AB8238688965(iParam4, iParam3);
	func_38(iParam5, 1);
}

void func_38(int iParam0, bool bParam1)
{
	if (iParam0 == -1)
	{
		return;
	}
	if (bParam1)
	{
		unk_0xBE20AB8238688965(&Global_7551, iParam0);
		return;
	}
	unk_0xD2459066EA58CE43(&Global_7551, iParam0);
}

void func_39(char* sParam0)
{
	func_40(Global_19662, "SET_HEADER", sParam0, 0, 0, 0, 0);
}

void func_40(var uParam0, char* sParam1, char* sParam2, char* sParam3, char* sParam4, char* sParam5, char* sParam6)
{
	unk_0x830F007E19C63E14(uParam0, sParam1);
	func_41(sParam2);
	if (!unk_0x7BCC91F3C1CF24E8(sParam3))
	{
		func_41(sParam3);
	}
	if (!unk_0x7BCC91F3C1CF24E8(sParam4))
	{
		func_41(sParam4);
	}
	if (!unk_0x7BCC91F3C1CF24E8(sParam5))
	{
		func_41(sParam5);
	}
	if (!unk_0x7BCC91F3C1CF24E8(sParam6))
	{
		func_41(sParam6);
	}
	unk_0xE1FDD153F5858534();
}

void func_41(char* sParam0)
{
	unk_0xB23270F3D5E62FDE(sParam0);
	unk_0x2042E9CA4306F725();
}

void func_42(var uParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6, char* sParam7, char* sParam8, char* sParam9, char* sParam10, char* sParam11)
{
	unk_0x830F007E19C63E14(uParam0, sParam1);
	unk_0xAD291B8F75D737AD(round(fParam2));
	if (fParam3 != -1f)
	{
		unk_0xAD291B8F75D737AD(round(fParam3));
	}
	if (fParam4 != -1f)
	{
		unk_0xAD291B8F75D737AD(round(fParam4));
	}
	if (fParam5 != -1f)
	{
		unk_0xAD291B8F75D737AD(round(fParam5));
	}
	if (fParam6 != -1f)
	{
		unk_0xAD291B8F75D737AD(round(fParam6));
	}
	if (!unk_0x7BCC91F3C1CF24E8(sParam7))
	{
		func_41(sParam7);
	}
	if (!unk_0x7BCC91F3C1CF24E8(sParam8))
	{
		func_41(sParam8);
	}
	if (!unk_0x7BCC91F3C1CF24E8(sParam9))
	{
		func_41(sParam9);
	}
	if (!unk_0x7BCC91F3C1CF24E8(sParam10))
	{
		func_41(sParam10);
	}
	if (!unk_0x7BCC91F3C1CF24E8(sParam11))
	{
		func_41(sParam11);
	}
	unk_0xE1FDD153F5858534();
}

void func_43(var uParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6)
{
	unk_0x830F007E19C63E14(uParam0, sParam1);
	unk_0xAD291B8F75D737AD(round(fParam2));
	if (fParam3 != -1f)
	{
		unk_0xAD291B8F75D737AD(round(fParam3));
	}
	if (fParam4 != -1f)
	{
		unk_0xAD291B8F75D737AD(round(fParam4));
	}
	if (fParam5 != -1f)
	{
		unk_0xAD291B8F75D737AD(round(fParam5));
	}
	if (fParam6 != -1f)
	{
		unk_0xAD291B8F75D737AD(round(fParam6));
	}
	unk_0xE1FDD153F5858534();
}

void func_44(var uParam0)
{
	*uParam0 = 0;
}

