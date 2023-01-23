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
	var uLocal_21 = 0;
	var uLocal_22 = 0;
	var uLocal_23 = 0;
	var uLocal_24 = 0;
	var uLocal_25 = 0;
	var uLocal_26 = 0;
	var uLocal_27 = 0;
	var uLocal_28 = 0;
	var uLocal_29 = 0;
	var uLocal_30 = 0;
	var uLocal_31 = 0;
	var uLocal_32 = 0;
	var uLocal_33 = 0;
	var uLocal_34 = 0;
	var uLocal_35 = 0;
	var uLocal_36 = 0;
	var uLocal_37 = 0;
	var uLocal_38 = 0;
	var uLocal_39 = 0;
	var uLocal_40 = 0;
	var uLocal_41 = 0;
	var uLocal_42 = 0;
	var uLocal_43 = 0;
	var uLocal_44 = 0;
	var uLocal_45 = 0;
	var uLocal_46 = 0;
	var uLocal_47 = 0;
	var uLocal_48 = 0;
	var uLocal_49 = 0;
	var uLocal_50 = 0;
	int iLocal_51 = 0;
	var uLocal_52 = 0;
	var uLocal_53 = 0;
	var uLocal_54 = 0;
	var uLocal_55 = 0;
	var uLocal_56 = 0;
	var uLocal_57 = 0;
	var uLocal_58 = 0;
	var uLocal_59 = 0;
	BOOL bLocal_60 = 0;
	BOOL bLocal_61 = 0;
	int iLocal_62 = 0;
	int iLocal_63 = 0;
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
	iLocal_51 = -99;
	TEXT_LABEL_ASSIGN_STRING(&uLocal_52, "TRACKID", 32);
	unk_0x389D5B1C24A046B5();
	unk_0xA3C681843B51A4CC(&uLocal_52, 1);

	while (!unk_0x578F9DB3098790E9(1))
	{
		SYSTEM::WAIT(0);
	}

	func_15();
	func_14();
	func_11();
	SYSTEM::SETTIMERA(0);

	while (true)
	{
		SYSTEM::WAIT(0);
	
		if (bLocal_61)
		{
			if (iLocal_63 < 101)
			{
				if (SYSTEM::TIMERA() > 30)
				{
					iLocal_63 = iLocal_63 + 1;
					unk_0x9FD96C5DE6EDFC15(Global_20364, "SET_DATA_SLOT");
					unk_0xC6A3EF6C4A3412C1(23);
					unk_0xC6A3EF6C4A3412C1(0);
					unk_0xC6A3EF6C4A3412C1(1);
					func_10("CELL_4005");
					unk_0xC6A3EF6C4A3412C1(iLocal_63);
					unk_0xAE3413B0654A0035();
					func_9(Global_20364, "DISPLAY_VIEW", 23f, SYSTEM::TO_FLOAT(0), -1082130432, -1082130432, -1082130432);
					SYSTEM::SETTIMERA(0);
				}
			}
			else
			{
				unk_0x9FD96C5DE6EDFC15(Global_20364, "SET_DATA_SLOT");
				unk_0xC6A3EF6C4A3412C1(23);
				unk_0xC6A3EF6C4A3412C1(0);
				unk_0xC6A3EF6C4A3412C1(2);
				func_10("CELL_4006");
				func_10("CELL_4007");
				unk_0xAE3413B0654A0035();
				func_9(Global_20364, "DISPLAY_VIEW", 23f, SYSTEM::TO_FLOAT(0), -1082130432, -1082130432, -1082130432);
				iLocal_62 = 1;
				bLocal_61 = false;
			}
		}
	
		if (Global_20383.f_1 != 9)
		{
			switch (Global_20383.f_1)
			{
				case 7:
					func_8();
				
					if (bLocal_60 == false)
						func_6();
					break;
			
				case 8:
					if (func_5(2, Global_20351, 0))
					{
						func_4();
						bLocal_61 = false;
						iLocal_62 = 0;
						Global_20361 = true;
						func_14();
					
						if (Global_20383.f_1 > 3)
							Global_20383.f_1 = 7;
					}
					break;
			
				default:
					break;
			}
		
			if (func_3())
				func_2();
		}
		else
		{
			Global_20385 = 6;
			func_2();
		}
	
		if (func_1())
			func_2();
	}

	return;
}

BOOL func_1() // Position - 0x1C6
{
	if (Global_20383.f_1 == 1 || Global_20383.f_1 == 3 || Global_20383.f_1 == 0 || Global_20327 == 1)
	{
		Global_20370 = 1;
		return true;
	}

	return false;
}

void func_2() // Position - 0x209
{
	bLocal_61 = false;
	unk_0x675D9C12C73D3DE7();
	return;
}

BOOL func_3() // Position - 0x218
{
	if (Global_8859 == 1 || Global_20383.f_1 < 7)
	{
		Global_20370 = 1;
		return true;
	}

	return false;
}

void func_4() // Position - 0x241
{
	if (!unk_0x055111B11E6624FD(unk_0xC1A5EC5C986B98AD(), 0))
		unk_0x531D638530A8DB97(-1, "Menu_Back", &Global_20372, 1);

	return;
}

BOOL func_5(int iParam0, int iParam1, int iParam2) // Position - 0x262
{
	if (unk_0x87644B1F984197FE(iParam0, iParam1) || iParam2 == 1 && unk_0xE665ABCFC5784C35(iParam0, iParam1))
	{
		if (unk_0xCC17806DB0C41C19())
			if (unk_0x6C75193377D3CE17() == 0 || unk_0xEBDA168F3804CE1F() && unk_0x42AAFCB5B7854AA9(2))
				return false;
	
		if (unk_0xFEE065E56A9BEF3F() || unk_0x47F8B78DC1737D5C())
			return false;
		else
			return true;
	}

	return false;
}

void func_6() // Position - 0x2D4
{
	if (SYSTEM::TIMERA() > 2200)
	{
		if (Global_20371)
			func_7(Global_20364, "SET_SOFT_KEYS", 2f, 1f, 13f, -1f, -1f, "CELL_201" /*CALL*/, 0, 0, 0, 0);
		else
			func_7(Global_20364, "SET_SOFT_KEYS", 2f, 1f, 13f, -1f, -1f, 0, 0, 0, 0, 0);
	
		bLocal_60 = true;
	}

	return;
}

void func_7(int iParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6, char* sParam7, char* sParam8, char* sParam9, char* sParam10, char* sParam11) // Position - 0x324
{
	unk_0x9FD96C5DE6EDFC15(iParam0, sParam1);
	unk_0xC6A3EF6C4A3412C1(SYSTEM::ROUND(fParam2));

	if (fParam3 != -1f)
		unk_0xC6A3EF6C4A3412C1(SYSTEM::ROUND(fParam3));

	if (fParam4 != -1f)
		unk_0xC6A3EF6C4A3412C1(SYSTEM::ROUND(fParam4));

	if (fParam5 != -1f)
		unk_0xC6A3EF6C4A3412C1(SYSTEM::ROUND(fParam5));

	if (fParam6 != -1f)
		unk_0xC6A3EF6C4A3412C1(SYSTEM::ROUND(fParam6));

	if (!unk_0x2AC37494BBF1DB16(sParam7))
		func_10(sParam7);

	if (!unk_0x2AC37494BBF1DB16(sParam8))
		func_10(sParam8);

	if (!unk_0x2AC37494BBF1DB16(sParam9))
		func_10(sParam9);

	if (!unk_0x2AC37494BBF1DB16(sParam10))
		func_10(sParam10);

	if (!unk_0x2AC37494BBF1DB16(sParam11))
		func_10(sParam11);

	unk_0xAE3413B0654A0035();
	return;
}

void func_8() // Position - 0x3D7
{
	if (Global_20361 == false)
	{
		if (func_5(2, Global_20352, 0))
		{
			if (bLocal_60 && iLocal_62 == 0 && bLocal_61 == false)
			{
				iLocal_63 = 0;
				unk_0x9FD96C5DE6EDFC15(Global_20364, "SET_DATA_SLOT");
				unk_0xC6A3EF6C4A3412C1(23);
				unk_0xC6A3EF6C4A3412C1(0);
				unk_0xC6A3EF6C4A3412C1(1);
				func_10("CELL_4005");
				unk_0xC6A3EF6C4A3412C1(iLocal_63);
				unk_0xAE3413B0654A0035();
				func_9(Global_20364, "DISPLAY_VIEW", 23f, SYSTEM::TO_FLOAT(0), -1082130432, -1082130432, -1082130432);
			
				if (Global_20371)
				{
					func_7(Global_20364, "SET_SOFT_KEYS", 2f, 0f, 13f, -1f, -1f, "CELL_201" /*CALL*/, 0, 0, 0, 0);
					func_7(Global_20364, "SET_SOFT_KEYS", 3f, 1f, 14f, -1f, -1f, "CELL_213" /*NO*/, 0, 0, 0, 0);
				}
				else
				{
					func_7(Global_20364, "SET_SOFT_KEYS", 2f, 0f, 13f, -1f, -1f, 0, 0, 0, 0, 0);
					func_7(Global_20364, "SET_SOFT_KEYS", 3f, 1f, 14f, -1f, -1f, 0, 0, 0, 0, 0);
				}
			
				func_7(Global_20364, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
				unk_0x061B1200C95204CB(&Global_8253, 17);
				bLocal_61 = true;
				SYSTEM::SETTIMERA(0);
			}
		}
	}

	return;
}

void func_9(int iParam0, char* sParam1, float fParam2, float fParam3, int iParam4, int iParam5, int iParam6) // Position - 0x4ED
{
	unk_0x9FD96C5DE6EDFC15(iParam0, sParam1);
	unk_0xC6A3EF6C4A3412C1(SYSTEM::ROUND(fParam2));

	if (fParam3 != -1f)
		unk_0xC6A3EF6C4A3412C1(SYSTEM::ROUND(fParam3));

	if (iParam4 != -1f)
		unk_0xC6A3EF6C4A3412C1(SYSTEM::ROUND(iParam4));

	if (iParam5 != -1f)
		unk_0xC6A3EF6C4A3412C1(SYSTEM::ROUND(iParam5));

	if (iParam6 != -1f)
		unk_0xC6A3EF6C4A3412C1(SYSTEM::ROUND(iParam6));

	unk_0xAE3413B0654A0035();
	return;
}

void func_10(char* sParam0) // Position - 0x550
{
	unk_0x2AF11E92DE43CDE3(sParam0);
	unk_0xF8FCA9E7130CE1C8();
	return;
}

void func_11() // Position - 0x562
{
	var unk;

	func_13(134, 1);
	unk = unk_0xA0674C2A551A1A0B();

	switch (func_12(unk))
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

	return;
}

int func_12(int iParam0) // Position - 0x5AC
{
	switch (iParam0)
	{
		case 1:
		case 2:
		case 3:
		case 4:
			return 3;
	
		case 5:
		case 6:
		case 7:
		case 8:
			return 4;
	
		case 9:
		case 10:
		case 11:
		case 12:
			return 1;
	
		case 13:
		case 14:
		case 15:
		case 16:
			return 2;
	}

	return 0;
}

void func_13(int iParam0, int iParam1) // Position - 0x638
{
	int num;

	if (iParam1 < 1)
		return;

	if (Global_59104[iParam0 /*7*/].f_2)
		return;

	if (unk_0xA26A9A07F761D8F8())
		return;

	if (Global_59104[iParam0 /*7*/])
	{
		unk_0xDD7756E2742E0F6D(Global_59104[iParam0 /*7*/].f_1, &num, -1);
		num = num + iParam1;
		unk_0x3CC35ACFFC9C730E(Global_59104[iParam0 /*7*/].f_1, num, 1);
	}

	return;
}

void func_14() // Position - 0x695
{
	unk_0x9FD96C5DE6EDFC15(Global_20364, "SET_DATA_SLOT");
	unk_0xC6A3EF6C4A3412C1(23);
	unk_0xC6A3EF6C4A3412C1(0);
	unk_0xC6A3EF6C4A3412C1(0);
	func_10("CELL_4001");
	func_10(&uLocal_20);
	func_10(&(uLocal_20.f_16));
	func_10("CELL_4002");
	unk_0xC6A3EF6C4A3412C1(uLocal_20.f_24);
	func_10("CELL_4003");
	func_10(&(uLocal_20.f_25));
	func_10("CELL_4004");
	unk_0xAE3413B0654A0035();
	func_9(Global_20364, "DISPLAY_VIEW", 23f, SYSTEM::TO_FLOAT(0), -1082130432, -1082130432, -1082130432);

	if (Global_20371)
	{
		if (bLocal_60)
			func_7(Global_20364, "SET_SOFT_KEYS", 2f, 1f, 13f, -1f, -1f, "CELL_201" /*CALL*/, 0, 0, 0, 0);
		else
			func_7(Global_20364, "SET_SOFT_KEYS", 2f, 0f, 13f, -1f, -1f, "CELL_201" /*CALL*/, 0, 0, 0, 0);
	
		func_7(Global_20364, "SET_SOFT_KEYS", 3f, 1f, 14f, -1f, -1f, "CELL_213" /*NO*/, 0, 0, 0, 0);
	}
	else
	{
		if (bLocal_60)
			func_7(Global_20364, "SET_SOFT_KEYS", 2f, 1f, 13f, -1f, -1f, 0, 0, 0, 0, 0);
		else
			func_7(Global_20364, "SET_SOFT_KEYS", 2f, 0f, 13f, -1f, -1f, 0, 0, 0, 0, 0);
	
		func_7(Global_20364, "SET_SOFT_KEYS", 3f, 1f, 14f, -1f, -1f, 0, 0, 0, 0, 0);
	}

	func_7(Global_20364, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
	unk_0x061B1200C95204CB(&Global_8253, 17);
	return;
}

void func_15() // Position - 0x7E5
{
	iLocal_51 = unk_0x21A9848B633326D8();
	TEXT_LABEL_ASSIGN_STRING(&uLocal_20, "", 64);
	TEXT_LABEL_APPEND_INT(&uLocal_20, iLocal_51, 64);
	TEXT_LABEL_APPEND_STRING(&uLocal_20, "S", 64);
	TEXT_LABEL_ASSIGN_STRING(&(uLocal_20.f_16), "", 32);
	TEXT_LABEL_APPEND_INT(&(uLocal_20.f_16), iLocal_51, 32);
	TEXT_LABEL_APPEND_STRING(&(uLocal_20.f_16), "A", 32);
	TEXT_LABEL_ASSIGN_STRING(&(uLocal_20.f_25), unk_0x7CFA96A83D31CA9A(), 24);

	if (!unk_0x42FA33BDEDF21186(&uLocal_20))
		TEXT_LABEL_ASSIGN_STRING(&uLocal_20, "CELL_195" /*Unknown*/, 64);

	if (!unk_0x42FA33BDEDF21186(&(uLocal_20.f_16)))
	{
		TEXT_LABEL_ASSIGN_STRING(&(uLocal_20.f_16), "CELL_195" /*Unknown*/, 32);
		TEXT_LABEL_ASSIGN_STRING(&(uLocal_20.f_25), "CELL_195" /*Unknown*/, 24);
	}

	return;
}

