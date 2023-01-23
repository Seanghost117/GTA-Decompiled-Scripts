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
	int iLocal_18 = 0;
	var uLocal_19 = 0;
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

	if (unk_0x72474BA05A104E1E())
		unk_0x78DD793477D04C42(500);

	if (unk_0x55EEDBBFDC6E810F(3))
		func_5();

	uLocal_19 = unk_0x2B4645565204EA06("instructional_buttons");

	while (!unk_0x5FAF55B1F052A2E6(uLocal_19))
	{
		SYSTEM::WAIT(0);
	}

	while (true)
	{
		unk_0x55CCA1B8F633F628(uLocal_19, 255, 255, 255, 0, 0);
		func_4();
		func_1(iLocal_18, uLocal_19);
		SYSTEM::WAIT(0);
	}

	return;
}

void func_1(int iParam0, var uParam1) // Position - 0x8D
{
	switch (iParam0)
	{
		case 0:
			unk_0x9FD96C5DE6EDFC15(uParam1, "CLEAR_ALL");
			unk_0xAE3413B0654A0035();
			unk_0x9FD96C5DE6EDFC15(uParam1, "SET_CLEAR_SPACE");
			unk_0xC6A3EF6C4A3412C1(200);
			unk_0xAE3413B0654A0035();
			unk_0x9FD96C5DE6EDFC15(uParam1, "SET_DATA_SLOT");
			unk_0xC6A3EF6C4A3412C1(0);
			func_3(unk_0x28AEB293270C3DDA(2, 191, 1));
			func_2("PRESS A");
			unk_0xAE3413B0654A0035();
			unk_0x9FD96C5DE6EDFC15(uParam1, "SET_DATA_SLOT");
			unk_0xC6A3EF6C4A3412C1(1);
			func_3(unk_0x28AEB293270C3DDA(2, 194, 1));
			func_2("PRESS B");
			unk_0xAE3413B0654A0035();
			unk_0x9FD96C5DE6EDFC15(uParam1, "SET_DATA_SLOT");
			unk_0xC6A3EF6C4A3412C1(2);
			func_3(unk_0x28AEB293270C3DDA(2, 193, 1));
			func_2("PRESS X");
			unk_0xAE3413B0654A0035();
			unk_0x9FD96C5DE6EDFC15(uParam1, "SET_DATA_SLOT");
			unk_0xC6A3EF6C4A3412C1(3);
			func_3(unk_0x28AEB293270C3DDA(2, 192, 1));
			func_2("PRESS Y");
			unk_0xAE3413B0654A0035();
			unk_0x9FD96C5DE6EDFC15(uParam1, "DRAW_INSTRUCTIONAL_BUTTONS");
			unk_0xAE3413B0654A0035();
			unk_0x9FD96C5DE6EDFC15(uParam1, "SET_BACKGROUND_COLOUR");
			unk_0xC6A3EF6C4A3412C1(0);
			unk_0xC6A3EF6C4A3412C1(0);
			unk_0xC6A3EF6C4A3412C1(0);
			unk_0xC6A3EF6C4A3412C1(80);
			unk_0xAE3413B0654A0035();
			iLocal_18 = -1;
			break;
	
		case 1:
			unk_0x9FD96C5DE6EDFC15(uParam1, "CLEAR_ALL");
			unk_0xAE3413B0654A0035();
			unk_0x9FD96C5DE6EDFC15(uParam1, "SET_CLEAR_SPACE");
			unk_0xC6A3EF6C4A3412C1(200);
			unk_0xAE3413B0654A0035();
			unk_0x9FD96C5DE6EDFC15(uParam1, "SET_DATA_SLOT");
			unk_0xC6A3EF6C4A3412C1(0);
			func_3(unk_0x28AEB293270C3DDA(2, 187, 1));
			func_2("DOWN");
			unk_0xAE3413B0654A0035();
			unk_0x9FD96C5DE6EDFC15(uParam1, "SET_DATA_SLOT");
			unk_0xC6A3EF6C4A3412C1(1);
			func_3(unk_0x28AEB293270C3DDA(2, 188, 1));
			func_2("UP");
			unk_0xAE3413B0654A0035();
			unk_0x9FD96C5DE6EDFC15(uParam1, "SET_DATA_SLOT");
			unk_0xC6A3EF6C4A3412C1(2);
			func_3(unk_0x28AEB293270C3DDA(2, 190, 1));
			func_2("LEFT");
			unk_0xAE3413B0654A0035();
			unk_0x9FD96C5DE6EDFC15(uParam1, "SET_DATA_SLOT");
			unk_0xC6A3EF6C4A3412C1(3);
			func_3(unk_0x28AEB293270C3DDA(2, 189, 1));
			func_2("RIGHT");
			unk_0xAE3413B0654A0035();
			unk_0x9FD96C5DE6EDFC15(uParam1, "DRAW_INSTRUCTIONAL_BUTTONS");
			unk_0xAE3413B0654A0035();
			unk_0x9FD96C5DE6EDFC15(uParam1, "SET_BACKGROUND_COLOUR");
			unk_0xC6A3EF6C4A3412C1(0);
			unk_0xC6A3EF6C4A3412C1(0);
			unk_0xC6A3EF6C4A3412C1(0);
			unk_0xC6A3EF6C4A3412C1(80);
			unk_0xAE3413B0654A0035();
			iLocal_18 = -1;
			break;
	
		case 2:
			unk_0x9FD96C5DE6EDFC15(uParam1, "CLEAR_ALL");
			unk_0xAE3413B0654A0035();
			unk_0x9FD96C5DE6EDFC15(uParam1, "SET_CLEAR_SPACE");
			unk_0xC6A3EF6C4A3412C1(200);
			unk_0xAE3413B0654A0035();
			unk_0x9FD96C5DE6EDFC15(uParam1, "SET_DATA_SLOT");
			unk_0xC6A3EF6C4A3412C1(0);
			func_3(unk_0x28AEB293270C3DDA(2, 202, 1));
			func_2("BACK");
			unk_0xAE3413B0654A0035();
			unk_0x9FD96C5DE6EDFC15(uParam1, "DRAW_INSTRUCTIONAL_BUTTONS");
			unk_0xAE3413B0654A0035();
			unk_0x9FD96C5DE6EDFC15(uParam1, "SET_BACKGROUND_COLOUR");
			unk_0xC6A3EF6C4A3412C1(0);
			unk_0xC6A3EF6C4A3412C1(0);
			unk_0xC6A3EF6C4A3412C1(0);
			unk_0xC6A3EF6C4A3412C1(80);
			unk_0xAE3413B0654A0035();
			iLocal_18 = -1;
			break;
	
		default:
			break;
	}

	return;
}

void func_2(char* sParam0) // Position - 0x312
{
	unk_0x2AF11E92DE43CDE3(sParam0);
	unk_0xF8FCA9E7130CE1C8();
	return;
}

void func_3(var uParam0) // Position - 0x324
{
	unk_0x7DDE71A42D80E8FA(uParam0);
	return;
}

void func_4() // Position - 0x332
{
	if (Global_20362 == false)
	{
		if (unk_0x51EB177CA0562B62(2, 189) || unk_0x51EB177CA0562B62(2, 190) || unk_0x51EB177CA0562B62(2, 188) || unk_0x51EB177CA0562B62(2, 187) || unk_0x51EB177CA0562B62(2, 205) || unk_0x51EB177CA0562B62(2, 206) || unk_0x51EB177CA0562B62(2, 207) || unk_0x51EB177CA0562B62(2, 208) || unk_0x51EB177CA0562B62(2, 201) || unk_0x51EB177CA0562B62(2, 202))
		{
			Global_20362 = true;
			SYSTEM::SETTIMERA(0);
		}
	}
	else if (SYSTEM::TIMERA() > 50)
	{
		Global_20362 = false;
	}

	if (Global_20362 == false)
	{
		if (unk_0x51EB177CA0562B62(2, 217))
			iLocal_18 = 1;
	
		if (unk_0x51EB177CA0562B62(2, 189))
			iLocal_18 = 2;
	
		if (unk_0x51EB177CA0562B62(2, 190))
			iLocal_18 = 2;
	
		unk_0x51EB177CA0562B62(2, 205);
		unk_0x51EB177CA0562B62(2, 206);
		unk_0x51EB177CA0562B62(2, 207);
		unk_0x51EB177CA0562B62(2, 208);
	
		if (unk_0x51EB177CA0562B62(2, 188))
			iLocal_18 = 2;
	
		if (unk_0x51EB177CA0562B62(2, 187))
			iLocal_18 = 2;
	
		if (unk_0x51EB177CA0562B62(2, 201))
			iLocal_18 = 1;
	
		if (unk_0x51EB177CA0562B62(2, 202))
			iLocal_18 = 0;
	
		if (unk_0x51EB177CA0562B62(2, 203))
			iLocal_18 = 1;
	
		if (unk_0x51EB177CA0562B62(2, 204))
			iLocal_18 = 1;
	}

	return;
}

void func_5() // Position - 0x47D
{
	func_6(false);
	unk_0x577AE0048ADA90C8(0);
	unk_0xD0AE101DBAA43C98(&uLocal_19);
	unk_0x675D9C12C73D3DE7();
	return;
}

void func_6(BOOL bParam0) // Position - 0x499
{
	if (bParam0)
	{
		func_13();
	
		if (Global_20383.f_1 == 10 || Global_20383.f_1 == 9)
			unk_0xECDAB41968FF21A8(&Global_8254, 16);
	
		Global_20383.f_1 = 1;
	
		if (func_12(0))
			func_7(0);
	}
	else if (Global_20383.f_1 == 1)
	{
		if (!Global_20383.f_1 == 0)
			Global_20383.f_1 = 3;
	}

	return;
}

void func_7(int iParam0) // Position - 0x4FC
{
	if (func_11())
		return;

	if (Global_20584)
		if (func_10())
			func_9(true, true);
		else
			func_9(false, false);

	if (Global_20383.f_1 == 10 || Global_20383.f_1 == 9)
		unk_0xECDAB41968FF21A8(&Global_8254, 16);

	if (unk_0xE444FD7526C8BB46())
		unk_0xD6625E11483B2324(0);

	Global_21725 = 5;

	if (iParam0 == 1)
		unk_0xECDAB41968FF21A8(&Global_8253, 30);
	else
		unk_0x061B1200C95204CB(&Global_8253, 30);

	if (!func_8())
		Global_20383.f_1 = 3;

	return;
}

BOOL func_8() // Position - 0x586
{
	if (Global_20383.f_1 == 1 || Global_20383.f_1 == 0)
		return true;

	return false;
}

void func_9(BOOL bParam0, BOOL bParam1) // Position - 0x5AD
{
	if (bParam0)
	{
		if (func_12(0))
		{
			Global_20584 = true;
		
			if (bParam1)
				unk_0xF756EDB27C588BED(&Global_20320);
		
			Global_20311 = { Global_20329[Global_20328 /*3*/] };
			unk_0x6B2D55EA37C443D5(Global_20311);
		}
	}
	else if (Global_20584 == true)
	{
		Global_20584 = false;
		Global_20311 = { Global_20336[Global_20328 /*3*/] };
	
		if (bParam1)
			unk_0x6B2D55EA37C443D5(Global_20320);
		else
			unk_0x6B2D55EA37C443D5(Global_20311);
	}

	return;
}

BOOL func_10() // Position - 0x621
{
	return IS_BIT_SET(Global_1962996, 5);
}

BOOL func_11() // Position - 0x62F
{
	return IS_BIT_SET(Global_1962996, 19);
}

BOOL func_12(int iParam0) // Position - 0x63E
{
	if (iParam0 == 1)
		if (Global_20383.f_1 > 3)
			if (IS_BIT_SET(Global_8253, 14))
				return true;
			else
				return false;
		else
			return false;

	if (unk_0x24B651D85CCE5EB4(joaat("cellphone_flashhand")) > 0)
		return true;

	if (Global_20383.f_1 > 3)
		return true;

	return false;
}

void func_13() // Position - 0x695
{
	if (Global_20383.f_1 == 9 || Global_20383.f_1 == 10)
	{
		Global_21778 = false;
		Global_21774 = 1;
	}

	return;
}

