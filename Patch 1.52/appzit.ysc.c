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
	struct<26> Local_20 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_21 = 0;
	var uLocal_22 = 0;
	var uLocal_23 = 0;
	var uLocal_24 = 0;
	var uLocal_25 = 0;
	int iLocal_26 = 0;
	char cLocal_27[32] = "";
	var uLocal_28 = 0;
	var uLocal_29 = 0;
	var uLocal_30 = 0;
	var uLocal_31 = 0;
	int iLocal_32 = 0;
	int iLocal_33 = 0;
	int iLocal_34 = 0;
	int iLocal_35 = 0;
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
	iLocal_26 = -99;
	StringCopy(&cLocal_27, "TRACKID", 32);
	unk_0xDB4E5F36ED3505EE();
	unk_0xBAA4D421B8B8A744(&cLocal_27, 1);
	while (!unk_0xF5EE205091CE6DB2(1))
	{
		wait(0);
	}
	func_15();
	func_14();
	func_11();
	settimera(0);
	while (true)
	{
		wait(0);
		if (iLocal_33)
		{
			if (iLocal_35 < 101)
			{
				if (timera() > 30)
				{
					iLocal_35++;
					unk_0x830F007E19C63E14(Global_19662, "SET_DATA_SLOT");
					unk_0xAD291B8F75D737AD(23);
					unk_0xAD291B8F75D737AD(0);
					unk_0xAD291B8F75D737AD(1);
					func_10("CELL_4005");
					unk_0xAD291B8F75D737AD(iLocal_35);
					unk_0xE1FDD153F5858534();
					func_9(Global_19662, "DISPLAY_VIEW", 23f, to_float(0), -1082130432, -1082130432, -1082130432);
					settimera(0);
				}
			}
			else
			{
				unk_0x830F007E19C63E14(Global_19662, "SET_DATA_SLOT");
				unk_0xAD291B8F75D737AD(23);
				unk_0xAD291B8F75D737AD(0);
				unk_0xAD291B8F75D737AD(2);
				func_10("CELL_4006");
				func_10("CELL_4007");
				unk_0xE1FDD153F5858534();
				func_9(Global_19662, "DISPLAY_VIEW", 23f, to_float(0), -1082130432, -1082130432, -1082130432);
				iLocal_34 = 1;
				iLocal_33 = 0;
			}
		}
		if (Global_19681.f_1 != 9)
		{
			switch (Global_19681.f_1)
			{
				case 7:
					func_8();
					if (iLocal_32 == 0)
					{
						func_6();
					}
					break;
				
				case 8:
					if (func_5(2, Global_19649, 0))
					{
						func_4();
						iLocal_33 = 0;
						iLocal_34 = 0;
						Global_19659 = 1;
						func_14();
						if (Global_19681.f_1 > 3)
						{
							Global_19681.f_1 = 7;
						}
					}
					break;
				
				default:
					break;
			}
			if (func_3())
			{
				func_2();
			}
		}
		else
		{
			Global_19683 = 6;
			func_2();
		}
		if (func_1())
		{
			func_2();
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

void func_2()
{
	iLocal_33 = 0;
	unk_0xD39E529EBE5DB04F();
}

int func_3()
{
	if (Global_8157 == 1 || Global_19681.f_1 < 7)
	{
		Global_19668 = 1;
		return 1;
	}
	return 0;
}

void func_4()
{
	if (!unk_0xA59F96B50B97E63C(unk_0x9B0761B4C3EB8BC7(), 0))
	{
		unk_0xC4CC25B68A91D144(-1, "Menu_Back", &Global_19670, 1);
	}
}

int func_5(int iParam0, int iParam1, int iParam2)
{
	if (unk_0x1BD7199394D7F19A(iParam0, iParam1) || (iParam2 == 1 && unk_0x79800E51B3B6D197(iParam0, iParam1)))
	{
		if (unk_0xF8EDFF98A9C94C74())
		{
			if (unk_0x913D69ADE739309E() == 0 || (unk_0xDFAB5E5CBE16E8B1() && unk_0xC1F43F8D0D5EB664(2)))
			{
				return 0;
			}
		}
		if (unk_0xF0C12886E5C1B20E() || unk_0x06EBE4F22EC30D45())
		{
			return 0;
		}
		else
		{
			return 1;
		}
	}
	return 0;
}

void func_6()
{
	if (timera() > 2200)
	{
		if (Global_19669)
		{
			func_7(Global_19662, "SET_SOFT_KEYS", 2f, 1f, 13f, -1f, -1f, "CELL_201", 0, 0, 0, 0);
		}
		else
		{
			func_7(Global_19662, "SET_SOFT_KEYS", 2f, 1f, 13f, -1f, -1f, 0, 0, 0, 0, 0);
		}
		iLocal_32 = 1;
	}
}

void func_7(int iParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6, char* sParam7, char* sParam8, char* sParam9, char* sParam10, char* sParam11)
{
	unk_0x830F007E19C63E14(iParam0, sParam1);
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
		func_10(sParam7);
	}
	if (!unk_0x7BCC91F3C1CF24E8(sParam8))
	{
		func_10(sParam8);
	}
	if (!unk_0x7BCC91F3C1CF24E8(sParam9))
	{
		func_10(sParam9);
	}
	if (!unk_0x7BCC91F3C1CF24E8(sParam10))
	{
		func_10(sParam10);
	}
	if (!unk_0x7BCC91F3C1CF24E8(sParam11))
	{
		func_10(sParam11);
	}
	unk_0xE1FDD153F5858534();
}

void func_8()
{
	if (Global_19659 == 0)
	{
		if (func_5(2, Global_19650, 0))
		{
			if ((iLocal_32 && iLocal_34 == 0) && iLocal_33 == 0)
			{
				iLocal_35 = 0;
				unk_0x830F007E19C63E14(Global_19662, "SET_DATA_SLOT");
				unk_0xAD291B8F75D737AD(23);
				unk_0xAD291B8F75D737AD(0);
				unk_0xAD291B8F75D737AD(1);
				func_10("CELL_4005");
				unk_0xAD291B8F75D737AD(iLocal_35);
				unk_0xE1FDD153F5858534();
				func_9(Global_19662, "DISPLAY_VIEW", 23f, to_float(0), -1082130432, -1082130432, -1082130432);
				if (Global_19669)
				{
					func_7(Global_19662, "SET_SOFT_KEYS", 2f, 0f, 13f, -1f, -1f, "CELL_201", 0, 0, 0, 0);
					func_7(Global_19662, "SET_SOFT_KEYS", 3f, 1f, 14f, -1f, -1f, "CELL_213", 0, 0, 0, 0);
				}
				else
				{
					func_7(Global_19662, "SET_SOFT_KEYS", 2f, 0f, 13f, -1f, -1f, 0, 0, 0, 0, 0);
					func_7(Global_19662, "SET_SOFT_KEYS", 3f, 1f, 14f, -1f, -1f, 0, 0, 0, 0, 0);
				}
				func_7(Global_19662, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
				unk_0xD2459066EA58CE43(&Global_7551, 17);
				iLocal_33 = 1;
				settimera(0);
			}
		}
	}
}

void func_9(int iParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6)
{
	unk_0x830F007E19C63E14(iParam0, sParam1);
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

void func_10(char* sParam0)
{
	unk_0xB23270F3D5E62FDE(sParam0);
	unk_0x2042E9CA4306F725();
}

void func_11()
{
	int iVar0;
	
	func_13(134, 1);
	iVar0 = unk_0x9301B13EC408DE79();
	switch (func_12(iVar0))
	{
		case 1:
			func_13(82, 1);
			break;
		
		case 2:
			func_13(81, 1);
			break;
		
		default:
			func_13(83, 1);
			break;
	}
}

int func_12(int iParam0)
{
	switch (iParam0)
	{
		case 1:
		case 2:
		case 3:
		case 4:
			return 3;
			break;
		
		case 5:
		case 6:
		case 7:
		case 8:
			return 4;
			break;
		
		case 9:
		case 10:
		case 11:
		case 12:
			return 1;
			break;
		
		case 13:
		case 14:
		case 15:
		case 16:
			return 2;
			break;
	}
	return 0;
}

void func_13(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam1 < 1)
	{
		return;
	}
	if (Global_57459[iParam0 /*7*/].f_2)
	{
		return;
	}
	if (unk_0x25DDB354A40FFCDB())
	{
		return;
	}
	if (Global_57459[iParam0 /*7*/])
	{
		unk_0xD2F202166691EDB2(Global_57459[iParam0 /*7*/].f_1, &iVar0, -1);
		iVar0 = (iVar0 + iParam1);
		unk_0x6000E4684CB4330B(Global_57459[iParam0 /*7*/].f_1, iVar0, 1);
	}
}

void func_14()
{
	unk_0x830F007E19C63E14(Global_19662, "SET_DATA_SLOT");
	unk_0xAD291B8F75D737AD(23);
	unk_0xAD291B8F75D737AD(0);
	unk_0xAD291B8F75D737AD(0);
	func_10("CELL_4001");
	func_10(&Local_20);
	func_10(&(Local_20.f_16));
	func_10("CELL_4002");
	unk_0xAD291B8F75D737AD(Local_20.f_24);
	func_10("CELL_4003");
	func_10(&(Local_20.f_25));
	func_10("CELL_4004");
	unk_0xE1FDD153F5858534();
	func_9(Global_19662, "DISPLAY_VIEW", 23f, to_float(0), -1082130432, -1082130432, -1082130432);
	if (Global_19669)
	{
		if (iLocal_32)
		{
			func_7(Global_19662, "SET_SOFT_KEYS", 2f, 1f, 13f, -1f, -1f, "CELL_201", 0, 0, 0, 0);
		}
		else
		{
			func_7(Global_19662, "SET_SOFT_KEYS", 2f, 0f, 13f, -1f, -1f, "CELL_201", 0, 0, 0, 0);
		}
		func_7(Global_19662, "SET_SOFT_KEYS", 3f, 1f, 14f, -1f, -1f, "CELL_213", 0, 0, 0, 0);
	}
	else
	{
		if (iLocal_32)
		{
			func_7(Global_19662, "SET_SOFT_KEYS", 2f, 1f, 13f, -1f, -1f, 0, 0, 0, 0, 0);
		}
		else
		{
			func_7(Global_19662, "SET_SOFT_KEYS", 2f, 0f, 13f, -1f, -1f, 0, 0, 0, 0, 0);
		}
		func_7(Global_19662, "SET_SOFT_KEYS", 3f, 1f, 14f, -1f, -1f, 0, 0, 0, 0, 0);
	}
	func_7(Global_19662, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
	unk_0xD2459066EA58CE43(&Global_7551, 17);
}

void func_15()
{
	iLocal_26 = unk_0xF549957FC5854167();
	StringCopy(&Local_20, "", 64);
	StringIntConCat(&Local_20, iLocal_26, 64);
	StringConCat(&Local_20, "S", 64);
	StringCopy(&(Local_20.f_16), "", 32);
	StringIntConCat(&(Local_20.f_16), iLocal_26, 32);
	StringConCat(&(Local_20.f_16), "A", 32);
	StringCopy(&(Local_20.f_25), unk_0x29E54CBCA7932BF9(), 24);
	if (!unk_0x3030AE9FCF1BC243(&Local_20))
	{
		StringCopy(&Local_20, "CELL_195", 64);
	}
	if (!unk_0x3030AE9FCF1BC243(&(Local_20.f_16)))
	{
		StringCopy(&(Local_20.f_16), "CELL_195", 32);
		StringCopy(&(Local_20.f_25), "CELL_195", 24);
	}
}

