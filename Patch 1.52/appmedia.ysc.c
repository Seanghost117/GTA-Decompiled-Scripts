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
	int iLocal_20 = 0;
	int iLocal_21 = 0;
	int iLocal_22 = 0;
	int iLocal_23 = 0;
	int iLocal_24 = 0;
	int iLocal_25 = 0;
	int iLocal_26[25] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	struct<6> Local_27[25];
	int iLocal_28 = 0;
	struct<3> Local_29 = { 0, 0, 0 } ;
	struct<3> Local_30 = { 0, 0, 0 } ;
	int iLocal_31 = 0;
	int iLocal_32 = 0;
	int iLocal_33 = 0;
	int iLocal_34 = 0;
	int iLocal_35 = 0;
	int iLocal_36 = 0;
	int iLocal_37 = 0;
	int iLocal_38 = 0;
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
	unk_0xDB4E5F36ED3505EE();
	func_27();
	func_26();
	while (true)
	{
		wait(0);
		if (iLocal_24 == 0)
		{
			if (Global_19681.f_1 != 9)
			{
				switch (Global_19681.f_1)
				{
					case 7:
						if ((iLocal_31 == 0 && iLocal_32 == 0) && Global_22040 == 0)
						{
							func_22();
							func_16();
						}
						break;
					
					case 8:
						if ((func_15(2, Global_19649, 0) && iLocal_31 == 0) && iLocal_32 == 0)
						{
							func_14();
							Global_19659 = 1;
							if (Global_19681.f_1 > 3)
							{
								if (unk_0xCE990E643CD9D0E5(Global_7552, 15))
								{
								}
								func_13();
							}
						}
						break;
					
					default:
						break;
				}
				if (func_12())
				{
					func_11();
				}
				if (iLocal_31)
				{
					func_9();
				}
				if (iLocal_32)
				{
					func_8();
				}
			}
			else
			{
				Global_19683 = 6;
				func_11();
			}
		}
		else
		{
			func_2();
		}
		if (func_1())
		{
			func_11();
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
	iLocal_25 = unk_0xD5A1646FC2F0ED37(0);
	switch (iLocal_25)
	{
		case 0:
			iLocal_24 = 0;
			func_3();
			break;
		
		case 1:
			break;
		
		case 2:
			Global_19681.f_1 = 3;
			func_11();
			break;
	}
}

void func_3()
{
	int iVar0;
	
	func_7(Global_19662, "SET_DATA_SLOT_EMPTY", 18f, -1082130432, -1082130432, -1082130432, -1082130432);
	iLocal_21 = unk_0x18383A341353C96C();
	iLocal_22 = 0;
	iVar0 = 0;
	while (iLocal_22 < iLocal_21)
	{
		if (unk_0x00E6BEC6180B23F3(iLocal_22))
		{
			func_6(Global_19662, "SET_DATA_SLOT", to_float(18), to_float(iVar0), to_float(0), -1f, -1f, &(Local_27[iLocal_22 /*6*/]), 0, 0, 0, 0);
			iLocal_26[iVar0] = iLocal_22;
			iVar0++;
		}
		iLocal_22++;
	}
	func_7(Global_19662, "DISPLAY_VIEW", 18f, -1082130432, -1082130432, -1082130432, -1082130432);
	func_4(Global_19662, "SET_HEADER", "CELL_MSMENU_1", 0, 0, 0, 0);
	if (Global_19669)
	{
		func_6(Global_19662, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, "CELL_205", 0, 0, 0, 0);
		func_6(Global_19662, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, "CELL_206", 0, 0, 0, 0);
	}
	else
	{
		func_6(Global_19662, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, 0, 0, 0, 0, 0);
		func_6(Global_19662, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, 0, 0, 0, 0, 0);
	}
	func_6(Global_19662, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
	unk_0xD2459066EA58CE43(&Global_7551, 17);
}

void func_4(int iParam0, char* sParam1, char* sParam2, char* sParam3, char* sParam4, char* sParam5, char* sParam6)
{
	unk_0x830F007E19C63E14(iParam0, sParam1);
	func_5(sParam2);
	if (!unk_0x7BCC91F3C1CF24E8(sParam3))
	{
		func_5(sParam3);
	}
	if (!unk_0x7BCC91F3C1CF24E8(sParam4))
	{
		func_5(sParam4);
	}
	if (!unk_0x7BCC91F3C1CF24E8(sParam5))
	{
		func_5(sParam5);
	}
	if (!unk_0x7BCC91F3C1CF24E8(sParam6))
	{
		func_5(sParam6);
	}
	unk_0xE1FDD153F5858534();
}

void func_5(char* sParam0)
{
	unk_0xB23270F3D5E62FDE(sParam0);
	unk_0x2042E9CA4306F725();
}

void func_6(int iParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6, char* sParam7, char* sParam8, char* sParam9, char* sParam10, char* sParam11)
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
		func_5(sParam7);
	}
	if (!unk_0x7BCC91F3C1CF24E8(sParam8))
	{
		func_5(sParam8);
	}
	if (!unk_0x7BCC91F3C1CF24E8(sParam9))
	{
		func_5(sParam9);
	}
	if (!unk_0x7BCC91F3C1CF24E8(sParam10))
	{
		func_5(sParam10);
	}
	if (!unk_0x7BCC91F3C1CF24E8(sParam11))
	{
		func_5(sParam11);
	}
	unk_0xE1FDD153F5858534();
}

void func_7(int iParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6)
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

void func_8()
{
	if (iLocal_31 == 0 && iLocal_32 == 1)
	{
		if (iLocal_36)
		{
			Local_30.x = (Local_30.x + 1f);
		}
		if (Local_30.x > Local_29.x || Local_30.x == Local_29.x)
		{
			Local_30.x = Local_29.x;
			iLocal_36 = 0;
		}
		if (iLocal_37)
		{
			Local_30.f_1 = (Local_30.f_1 - 2f);
		}
		if (Local_30.f_1 < Local_29.f_1 || Local_30.f_1 == Local_29.f_1)
		{
			Local_30.f_1 = Local_29.f_1;
			iLocal_37 = 0;
		}
		if (iLocal_38)
		{
			Local_30.f_2 = (Local_30.f_2 - 7f);
		}
		if (Local_30.f_2 < Local_29.f_2 || Local_30.f_2 == Local_29.f_2)
		{
			Local_30.f_2 = Local_29.f_2;
			iLocal_38 = 0;
		}
		if ((iLocal_36 == 0 && iLocal_37 == 0) && iLocal_38 == 0)
		{
			iLocal_32 = 0;
			if (Global_19681.f_1 > 3)
			{
				Global_19681.f_1 = 7;
				unk_0xD289B55B6AADBA10(1);
				Global_22042 = 1;
				func_26();
			}
		}
		unk_0xC6EAF6E2A0CACFED(Local_30, 0);
	}
}

void func_9()
{
	if ((iLocal_31 == 1 && iLocal_32 == 0) && Global_22040 == 6)
	{
		if (iLocal_33)
		{
			Local_30.x = (Local_30.x - 1f);
		}
		if (Local_30.x < Local_29.x || Local_30.x == Local_29.x)
		{
			Local_30.x = Local_29.x;
			iLocal_33 = 0;
		}
		if (iLocal_34)
		{
			Local_30.f_1 = (Local_30.f_1 - 0.5f);
		}
		if (Local_30.f_1 < Local_29.f_1 || Local_30.f_1 == Local_29.f_1)
		{
			Local_30.f_1 = Local_29.f_1;
			iLocal_34 = 0;
		}
		if (iLocal_35)
		{
			Local_30.f_2 = (Local_30.f_2 + 7f);
		}
		if (Local_30.f_2 > Local_29.f_2 || Local_30.f_2 == Local_29.f_2)
		{
			Local_30.f_2 = Local_29.f_2;
			iLocal_35 = 0;
		}
		if ((iLocal_33 == 0 && iLocal_34 == 0) && iLocal_35 == 0)
		{
			iLocal_31 = 0;
			func_10("CELL_MSHELP_2");
		}
		unk_0xC6EAF6E2A0CACFED(Local_30, 0);
	}
	if (unk_0xCE990E643CD9D0E5(Global_7552, 15))
	{
		iLocal_31 = 0;
		iLocal_32 = 0;
		func_7(Global_19662, "SET_DATA_SLOT_EMPTY", 18f, -1082130432, -1082130432, -1082130432, -1082130432);
		func_6(Global_19662, "SET_DATA_SLOT", to_float(18), to_float(0), to_float(0), -1f, -1f, "CELL_MSMENU_3", 0, 0, 0, 0);
		if (Global_19669)
		{
			func_6(Global_19662, "SET_SOFT_KEYS", 2f, 0f, 2f, -1f, -1f, "CELL_205", 0, 0, 0, 0);
			func_6(Global_19662, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, "CELL_206", 0, 0, 0, 0);
		}
		else
		{
			func_6(Global_19662, "SET_SOFT_KEYS", 2f, 0f, 2f, -1f, -1f, 0, 0, 0, 0, 0);
			func_6(Global_19662, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, 0, 0, 0, 0, 0);
		}
		func_6(Global_19662, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
		unk_0xD2459066EA58CE43(&Global_7551, 17);
		func_7(Global_19662, "DISPLAY_VIEW", 18f, -1082130432, -1082130432, -1082130432, -1082130432);
		func_4(Global_19662, "SET_HEADER", &(Local_27[iLocal_23 /*6*/]), 0, 0, 0, 0);
	}
}

void func_10(char* sParam0)
{
	unk_0x17751E107423AFE9(sParam0);
	unk_0x1A169149B3D18FCB(0, 1, true, -1);
}

void func_11()
{
	Global_22042 = 1;
	unk_0xD289B55B6AADBA10(1);
	unk_0xD39E529EBE5DB04F();
}

int func_12()
{
	if (Global_8157 == 1 || Global_19681.f_1 < 7)
	{
		Global_19668 = 1;
		return 1;
	}
	return 0;
}

void func_13()
{
	if (iLocal_31 == 0)
	{
		unk_0x37EA7872CB2E67FE(&Local_30, 0);
		Local_29 = { Global_19641 };
		iLocal_32 = 1;
		iLocal_36 = 1;
		iLocal_37 = 1;
		iLocal_38 = 1;
	}
}

void func_14()
{
	if (!unk_0xA59F96B50B97E63C(unk_0x9B0761B4C3EB8BC7(), 0))
	{
		unk_0xC4CC25B68A91D144(-1, "Menu_Back", &Global_19670, 1);
	}
}

int func_15(int iParam0, int iParam1, int iParam2)
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

void func_16()
{
	if (iLocal_28)
	{
		if (timera() > 50)
		{
			iLocal_28 = 0;
		}
	}
	if (unk_0xC1F43F8D0D5EB664(2))
	{
		if (func_15(2, 181, 0))
		{
			func_20();
		}
		if (func_15(2, 180, 0))
		{
			func_17();
		}
	}
	if (iLocal_28 == 0)
	{
		if (func_15(2, Global_19657, 0))
		{
			func_20();
			iLocal_28 = 1;
			settimera(0);
		}
		if (func_15(2, Global_19658, 0))
		{
			func_17();
			iLocal_28 = 1;
			settimera(0);
		}
	}
}

void func_17()
{
	func_7(Global_19662, "SET_INPUT_EVENT", to_float(3), -1082130432, -1082130432, -1082130432, -1082130432);
	unk_0xC4CC25B68A91D144(-1, "Menu_Navigate", &Global_19670, 1);
	func_18();
}

void func_18()
{
	if (func_19())
	{
		if (Global_19869 == 0)
		{
			unk_0x12C8655E426FEBB8(2);
		}
		else
		{
			unk_0x12C8655E426FEBB8(1);
		}
	}
}

int func_19()
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

void func_20()
{
	func_7(Global_19662, "SET_INPUT_EVENT", to_float(1), -1082130432, -1082130432, -1082130432, -1082130432);
	unk_0xC4CC25B68A91D144(-1, "Menu_Navigate", &Global_19670, 1);
	func_21();
}

void func_21()
{
	if (func_19())
	{
		if (Global_19869 == 0)
		{
			unk_0x12C8655E426FEBB8(1);
		}
		else
		{
			unk_0x12C8655E426FEBB8(2);
		}
	}
}

void func_22()
{
	int iVar0;
	
	if (Global_19659 == 0)
	{
		if (func_15(2, Global_19650, 0))
		{
			unk_0xD2459066EA58CE43(&Global_7552, 15);
			func_24();
			Global_19659 = 1;
			unk_0x830F007E19C63E14(Global_19662, "GET_CURRENT_SELECTION");
			iLocal_20 = unk_0xF4712E16A4C164FE();
			while (!unk_0x654BC7395AE9BF77(iLocal_20))
			{
				wait(0);
			}
			iVar0 = unk_0x14E3913C604B1108(iLocal_20);
			if (iVar0 > -1)
			{
				iLocal_23 = iLocal_26[iVar0];
				if (Global_19681.f_1 > 3)
				{
					if (Global_22040 == 0)
					{
						func_7(Global_19662, "SET_DATA_SLOT_EMPTY", 18f, -1082130432, -1082130432, -1082130432, -1082130432);
						func_6(Global_19662, "SET_DATA_SLOT", to_float(18), to_float(0), to_float(0), -1f, -1f, "CELL_MSMENU_2", 0, 0, 0, 0);
						func_7(Global_19662, "DISPLAY_VIEW", 18f, -1082130432, -1082130432, -1082130432, -1082130432);
						func_4(Global_19662, "SET_HEADER", &(Local_27[iLocal_23 /*6*/]), 0, 0, 0, 0);
						if (Global_19669)
						{
							func_6(Global_19662, "SET_SOFT_KEYS", 2f, 0f, 2f, -1f, -1f, "CELL_205", 0, 0, 0, 0);
							func_6(Global_19662, "SET_SOFT_KEYS", 3f, 0f, 4f, -1f, -1f, "CELL_206", 0, 0, 0, 0);
						}
						else
						{
							func_6(Global_19662, "SET_SOFT_KEYS", 2f, 0f, 2f, -1f, -1f, 0, 0, 0, 0, 0);
							func_6(Global_19662, "SET_SOFT_KEYS", 3f, 0f, 4f, -1f, -1f, 0, 0, 0, 0, 0);
						}
						func_6(Global_19662, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
						unk_0xD2459066EA58CE43(&Global_7551, 17);
						Global_22044 = iLocal_23;
						Global_22040 = 12;
						Global_19681.f_1 = 8;
						func_23();
					}
				}
			}
		}
	}
}

void func_23()
{
	if (iLocal_32 == 0)
	{
		unk_0x37EA7872CB2E67FE(&Local_30, 0);
		Local_29 = { -90.3f, -0.8f, 90f };
		iLocal_31 = 1;
		iLocal_33 = 1;
		iLocal_34 = 1;
		iLocal_35 = 1;
	}
}

void func_24()
{
	if (!unk_0xA59F96B50B97E63C(unk_0x9B0761B4C3EB8BC7(), 0))
	{
		unk_0xC4CC25B68A91D144(-1, "Menu_Accept", &Global_19670, 1);
		func_25();
	}
}

void func_25()
{
	if (func_19())
	{
		unk_0x12C8655E426FEBB8(5);
	}
}

void func_26()
{
	if ((unk_0x11E5DE894D6A8A5F() || unk_0xC6C08C02733D02C8()) || unk_0xF8EDFF98A9C94C74())
	{
		unk_0x15D261B581BF46C1();
		if (unk_0xF53706D3FE9A61CE(0))
		{
			iLocal_24 = 1;
		}
		else
		{
			Global_22042 = 1;
			Global_19681.f_1 = 3;
			func_11();
		}
	}
	else
	{
		func_3();
	}
}

void func_27()
{
	StringCopy(&(Local_27[0 /*6*/]), "CELL_MSSLOT_1", 24);
	StringCopy(&(Local_27[1 /*6*/]), "CELL_MSSLOT_2", 24);
	StringCopy(&(Local_27[2 /*6*/]), "CELL_MSSLOT_3", 24);
	StringCopy(&(Local_27[3 /*6*/]), "CELL_MSSLOT_4", 24);
	StringCopy(&(Local_27[4 /*6*/]), "CELL_MSSLOT_5", 24);
	StringCopy(&(Local_27[5 /*6*/]), "CELL_MSSLOT_6", 24);
	StringCopy(&(Local_27[6 /*6*/]), "CELL_MSSLOT_7", 24);
	StringCopy(&(Local_27[7 /*6*/]), "CELL_MSSLOT_8", 24);
	StringCopy(&(Local_27[8 /*6*/]), "CELL_MSSLOT_9", 24);
	StringCopy(&(Local_27[9 /*6*/]), "CELL_MSSLOT_10", 24);
	StringCopy(&(Local_27[10 /*6*/]), "CELL_MSSLOT_11", 24);
	StringCopy(&(Local_27[11 /*6*/]), "CELL_MSSLOT_12", 24);
	StringCopy(&(Local_27[12 /*6*/]), "CELL_MSSLOT_13", 24);
	StringCopy(&(Local_27[13 /*6*/]), "CELL_MSSLOT_14", 24);
	StringCopy(&(Local_27[14 /*6*/]), "CELL_MSSLOT_15", 24);
	StringCopy(&(Local_27[15 /*6*/]), "CELL_MSSLOT_16", 24);
	StringCopy(&(Local_27[16 /*6*/]), "CELL_MSSLOT_17", 24);
	StringCopy(&(Local_27[17 /*6*/]), "CELL_MSSLOT_18", 24);
	StringCopy(&(Local_27[18 /*6*/]), "CELL_MSSLOT_19", 24);
	StringCopy(&(Local_27[19 /*6*/]), "CELL_MSSLOT_20", 24);
}

