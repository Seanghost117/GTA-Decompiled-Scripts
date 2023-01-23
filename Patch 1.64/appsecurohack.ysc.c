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
	unk_0x389D5B1C24A046B5();

	if (iLocal_20 == 0)
	{
		func_10();
		iLocal_20 = 1;
	}

	while (true)
	{
		SYSTEM::WAIT(0);
	
		if (Global_20383.f_1 != 9)
		{
			switch (Global_20383.f_1)
			{
				case 7:
					if (iLocal_20 == 1)
						func_6();
					break;
			
				case 8:
					if (func_5(2, Global_20351, 0))
					{
						func_4();
						Global_20361 = true;
					
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

BOOL func_1() // Position - 0xC9
{
	if (Global_20383.f_1 == 1 || Global_20383.f_1 == 3 || Global_20383.f_1 == 0 || Global_20327 == 1)
	{
		Global_20370 = 1;
		return true;
	}

	return false;
}

void func_2() // Position - 0x10C
{
	unk_0x675D9C12C73D3DE7();
	return;
}

BOOL func_3() // Position - 0x118
{
	if (Global_8859 == 1 || Global_20383.f_1 < 7)
	{
		Global_20370 = 1;
		return true;
	}

	return false;
}

void func_4() // Position - 0x141
{
	if (!unk_0x055111B11E6624FD(unk_0xC1A5EC5C986B98AD(), 0))
		unk_0x531D638530A8DB97(-1, "Menu_Back", &Global_20372, 1);

	return;
}

BOOL func_5(int iParam0, int iParam1, int iParam2) // Position - 0x161
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

void func_6() // Position - 0x1D3
{
	func_7();
	unk_0x8B438725D591ED78(0, 80, 1);
	return;
}

void func_7() // Position - 0x1E7
{
	unk_0x9FD96C5DE6EDFC15(Global_20364, "SET_DATA_SLOT");
	unk_0xC6A3EF6C4A3412C1(27);
	unk_0xC6A3EF6C4A3412C1(0);
	unk_0xC6A3EF6C4A3412C1(Global_4542585);
	unk_0xC6A3EF6C4A3412C1(Global_4542584);
	func_9("");
	func_9(&Global_4542586);
	unk_0xAE3413B0654A0035();
	unk_0x9FD96C5DE6EDFC15(Global_20364, "DISPLAY_VIEW");
	unk_0xC6A3EF6C4A3412C1(27);
	unk_0xAE3413B0654A0035();

	if (!IS_BIT_SET(Global_4718592.f_21, 30))
		func_8(Global_20364, "SET_SOFT_KEYS", 3f, 0f, 27f, -1f, -1f, 0, 0, 0, 0, 0);

	return;
}

void func_8(int iParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6, char* sParam7, char* sParam8, char* sParam9, char* sParam10, char* sParam11) // Position - 0x262
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
		func_9(sParam7);

	if (!unk_0x2AC37494BBF1DB16(sParam8))
		func_9(sParam8);

	if (!unk_0x2AC37494BBF1DB16(sParam9))
		func_9(sParam9);

	if (!unk_0x2AC37494BBF1DB16(sParam10))
		func_9(sParam10);

	if (!unk_0x2AC37494BBF1DB16(sParam11))
		func_9(sParam11);

	unk_0xAE3413B0654A0035();
	return;
}

void func_9(char* sParam0) // Position - 0x315
{
	unk_0x2AF11E92DE43CDE3(sParam0);
	unk_0xF8FCA9E7130CE1C8();
	return;
}

void func_10() // Position - 0x327
{
	func_7();
	func_8(Global_20364, "SET_SOFT_KEYS", 2f, 0f, 27f, -1f, -1f, 0, 0, 0, 0, 0);
	return;
}

