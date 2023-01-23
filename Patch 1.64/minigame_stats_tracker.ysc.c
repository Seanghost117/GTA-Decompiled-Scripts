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
	char* sLocal_20 = 0;
	float fLocal_21 = 0f;
	var uLocal_22 = 0;
	var uLocal_23 = 0;
	var uLocal_24 = 0;
	float fLocal_25 = 0f;
	float fLocal_26 = 0f;
	var uLocal_27 = 0;
	int iLocal_28 = 0;
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
	int iLocal_39 = 0;
	int iLocal_40 = 0;
	int iLocal_41 = 0;
	int iLocal_42 = 0;
	var uLocal_43 = 0;
	var uLocal_44 = 0;
	int iLocal_45 = 0;
	var uLocal_46 = 0;
	var uLocal_47 = 0;
	var uLocal_48 = 0;
	var uLocal_49 = 0;
	var uScriptParam_0 = 0;
	var uScriptParam_1 = 0;
	var uScriptParam_2 = 1132396544;
	var uScriptParam_3 = 1132396544;
	var uScriptParam_4 = 1132396544;
	var uScriptParam_5 = 0;
	var uScriptParam_6 = -1082130432;
	var uScriptParam_7 = 0;
	var uScriptParam_8 = 0;
	var uScriptParam_9 = 8;
	var uScriptParam_10 = 0;
	var uScriptParam_11 = 0;
	var uScriptParam_12 = 0;
	var uScriptParam_13 = 0;
	var uScriptParam_14 = 0;
	var uScriptParam_15 = 0;
	var uScriptParam_16 = 0;
	var uScriptParam_17 = 0;
	var uScriptParam_18 = 0;
	var uScriptParam_19 = 0;
	var uScriptParam_20 = 0;
	var uScriptParam_21 = 0;
	var uScriptParam_22 = 0;
	var uScriptParam_23 = 0;
	var uScriptParam_24 = 0;
	var uScriptParam_25 = 0;
	var uScriptParam_26 = 0;
	var uScriptParam_27 = 0;
	var uScriptParam_28 = 0;
	var uScriptParam_29 = 0;
	var uScriptParam_30 = 0;
	var uScriptParam_31 = 0;
	var uScriptParam_32 = 0;
	var uScriptParam_33 = 0;
	var uScriptParam_34 = 0;
	var uScriptParam_35 = 0;
	var uScriptParam_36 = 0;
	var uScriptParam_37 = 0;
	var uScriptParam_38 = 0;
	var uScriptParam_39 = 0;
	var uScriptParam_40 = 0;
	var uScriptParam_41 = 0;
	var uScriptParam_42 = 0;
	var uScriptParam_43 = 0;
	var uScriptParam_44 = 0;
	var uScriptParam_45 = 0;
	var uScriptParam_46 = 0;
	var uScriptParam_47 = 0;
	var uScriptParam_48 = 0;
	var uScriptParam_49 = 0;
	var uScriptParam_50 = 0;
	var uScriptParam_51 = 0;
	var uScriptParam_52 = 0;
	var uScriptParam_53 = 0;
	var uScriptParam_54 = 0;
	var uScriptParam_55 = 0;
	var uScriptParam_56 = 0;
	var uScriptParam_57 = 0;
	var uScriptParam_58 = 0;
	var uScriptParam_59 = 0;
	var uScriptParam_60 = 0;
	var uScriptParam_61 = 0;
	var uScriptParam_62 = 0;
	var uScriptParam_63 = 0;
	var uScriptParam_64 = 0;
	var uScriptParam_65 = 0;
	var uScriptParam_66 = -1;
	var uScriptParam_67 = 1092616192;
#endregion

void main() // Position - 0x0
{
	int i;

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
	iLocal_28 = 3;
	fLocal_31 = 80f;
	fLocal_32 = 140f;
	fLocal_33 = 180f;
	iLocal_39 = 1;
	iLocal_40 = 65;
	iLocal_41 = 49;
	iLocal_42 = 64;

	if (unk_0x55EEDBBFDC6E810F(3))
		func_19();

	while (true)
	{
		switch (iLocal_45)
		{
			case 0:
				uLocal_46 = unk_0x2B4645565204EA06("mission_complete");
				iLocal_45 = 1;
				break;
		
			case 1:
				if (unk_0x5FAF55B1F052A2E6(uLocal_46))
					iLocal_45 = 2;
				break;
		
			case 2:
				unk_0x86478754F751ABD2(uLocal_46, "SET_MISSION_TITLE", uScriptParam_0, uScriptParam_0.f_1, 0, 0, 0);
				unk_0xFBFE2DEB3BFB27EC(uLocal_46, "SET_MISSION_TITLE_COLOUR", uScriptParam_0.f_2, uScriptParam_0.f_2, uScriptParam_0.f_2, -1082130432, -1082130432);
			
				if (uScriptParam_0.f_5.f_1 != -1f && !unk_0xB71C73D0269747D5(uScriptParam_0.f_5.f_2))
					unk_0x18E5A9E6DE82AC92(uLocal_46, "SET_TOTAL", SYSTEM::TO_FLOAT(uScriptParam_0.f_5), uScriptParam_0.f_5.f_1, -1f, -1f, -1f, uScriptParam_0.f_5.f_2, 0, 0, 0, 0);
			
				unk_0xFBFE2DEB3BFB27EC(uLocal_46, "SET_MEDAL", SYSTEM::TO_FLOAT(uScriptParam_0.f_5), -1082130432, -1082130432, -1082130432, -1082130432);
				unk_0xFBFE2DEB3BFB27EC(uLocal_46, "SET_SOCIAL_CLUB_INFO", 0f, -1082130432, -1082130432, -1082130432, -1082130432);
			
				for (i = 0; i < uScriptParam_0.f_66 + 1; i = i + 1)
				{
					unk_0x9FD96C5DE6EDFC15(uLocal_46, "SET_DATA_SLOT");
					unk_0xC6A3EF6C4A3412C1(uScriptParam_0.f_9[i /*7*/]);
					unk_0xC6A3EF6C4A3412C1(uScriptParam_0.f_9[i /*7*/].f_1);
				
					if (uScriptParam_0.f_9[i /*7*/].f_2 == 4)
					{
						unk_0xC6A3EF6C4A3412C1(2);
						unk_0xC6A3EF6C4A3412C1(0);
						unk_0xC6A3EF6C4A3412C1(0);
						unk_0x2AF11E92DE43CDE3("STRING");
						unk_0x610EBC15DA88FA9D(SYSTEM::FLOOR(uScriptParam_0.f_9[i /*7*/].f_3 * 1000f), 6);
						unk_0xF8FCA9E7130CE1C8();
					
						if (!unk_0xB71C73D0269747D5(uScriptParam_0.f_9[i /*7*/].f_5))
							func_18(uScriptParam_0.f_9[i /*7*/].f_5);
					}
					else if (uScriptParam_0.f_9[i /*7*/].f_2 == 8)
					{
						if (!unk_0xB71C73D0269747D5(uScriptParam_0.f_9[i /*7*/].f_5) && !unk_0xB71C73D0269747D5(uScriptParam_0.f_9[i /*7*/].f_6))
						{
							unk_0x2AF11E92DE43CDE3(uScriptParam_0.f_9[i /*7*/].f_6);
							unk_0x76B34CBB6F5FA1BB(uScriptParam_0.f_9[i /*7*/].f_5);
							unk_0xF8FCA9E7130CE1C8();
						}
					}
					else
					{
						unk_0xC6A3EF6C4A3412C1(uScriptParam_0.f_9[i /*7*/].f_2);
					
						if (uScriptParam_0.f_9[i /*7*/].f_3 % 1f == 0f)
						{
							unk_0xC49D258FBF3BF214(uScriptParam_0.f_9[i /*7*/].f_3);
						}
						else
						{
							unk_0x2AF11E92DE43CDE3("NUMBER" /*~1~*/);
							unk_0xC072D668E49D9A7A(uScriptParam_0.f_9[i /*7*/].f_3, 2);
							unk_0xF8FCA9E7130CE1C8();
						}
					
						if (uScriptParam_0.f_9[i /*7*/].f_4 % 1f == 0f)
						{
							unk_0xC49D258FBF3BF214(uScriptParam_0.f_9[i /*7*/].f_4);
						}
						else
						{
							unk_0x2AF11E92DE43CDE3("NUMBER" /*~1~*/);
							unk_0xC072D668E49D9A7A(uScriptParam_0.f_9[i /*7*/].f_4, 2);
							unk_0xF8FCA9E7130CE1C8();
						}
					
						if (!unk_0xB71C73D0269747D5(uScriptParam_0.f_9[i /*7*/].f_5))
							func_18(uScriptParam_0.f_9[i /*7*/].f_5);
					
						if (!unk_0xB71C73D0269747D5(uScriptParam_0.f_9[i /*7*/].f_6))
							func_18(uScriptParam_0.f_9[i /*7*/].f_6);
					}
				
					unk_0xAE3413B0654A0035();
				}
			
				if (uScriptParam_0.f_5 != 0 && !unk_0xB71C73D0269747D5(uScriptParam_0.f_5.f_2))
				{
					unk_0x9FD96C5DE6EDFC15(uLocal_46, "SET_TOTAL");
					unk_0xC6A3EF6C4A3412C1(uScriptParam_0.f_5);
				
					if (!unk_0xB71C73D0269747D5(uScriptParam_0.f_5.f_3))
						func_18(uScriptParam_0.f_5.f_3);
					else
						unk_0xC49D258FBF3BF214(uScriptParam_0.f_5.f_1);
				
					func_18(uScriptParam_0.f_5.f_2);
					unk_0xAE3413B0654A0035();
				}
			
				unk_0x9FD96C5DE6EDFC15(uLocal_46, "DRAW_MENU_LIST");
				unk_0xAE3413B0654A0035();
				func_12(1);
				func_9(&uLocal_47);
			
				if (!func_8(Global_113648.f_19099, 4096))
					func_6(&(Global_113648.f_19099), 4096);
			
				iLocal_45 = 3;
				break;
		
			case 3:
				if (func_2(&uLocal_47) > uScriptParam_0.f_67 && uScriptParam_0.f_67 != -1f || unk_0x72474BA05A104E1E() || Global_32308)
				{
					func_19();
				}
				else
				{
					func_1(true);
					unk_0x20C68F87D0FDD976(uLocal_46, 0.1495f, 0.3159f, 0.2021f, 0.5111f, 255, 255, 255, 0, 0);
				
					if (unk_0x32540FC8CD86BBDC(10))
						unk_0xEDECDDE17C1E41F5(10);
				}
				break;
		}
	
		SYSTEM::WAIT(0);
	}

	func_19();
	return;
}

void func_1(BOOL bParam0) // Position - 0x447
{
	Global_78819 = bParam0;
	Global_78820 = bParam0;
	return;
}

float func_2(var uParam0) // Position - 0x45B
{
	if (func_5(uParam0))
		if (func_4(uParam0))
			return uParam0->f_2;
		else
			return func_3(IS_BIT_SET(*uParam0, 4)) - uParam0->f_1;

	return uParam0->f_1;
}

float func_3(BOOL bParam0) // Position - 0x497
{
	float num;
	float num2;
	int value;
	float num3;
	float num4;

	if (bParam0)
	{
		num = SYSTEM::TO_FLOAT(unk_0xA5E11AF0A2B928C1());
		num2 = num / 1000f;
		return num2;
	}

	if (unk_0xA26A9A07F761D8F8())
	{
		value = unk_0x0DB7F8294D73598B();
		num3 = SYSTEM::TO_FLOAT(value);
		num4 = num3 / 1000f;
		return num4;
	}

	return SYSTEM::TO_FLOAT(unk_0xA5E11AF0A2B928C1()) / 1000f;
}

BOOL func_4(var uParam0) // Position - 0x4EF
{
	return IS_BIT_SET(*uParam0, 2);
}

BOOL func_5(var uParam0) // Position - 0x4FC
{
	return IS_BIT_SET(*uParam0, 1);
}

void func_6(int iParam0, int iParam1) // Position - 0x509
{
	func_7(iParam0, iParam1);
	return;
}

void func_7(int iParam0, int iParam1) // Position - 0x519
{
	*iParam0 = *iParam0 || iParam1;
	return;
}

BOOL func_8(int iParam0, int iParam1) // Position - 0x52A
{
	return iParam0 && iParam1 != false;
}

void func_9(var uParam0) // Position - 0x539
{
	if (!func_5(uParam0))
		func_10(uParam0);

	return;
}

void func_10(var uParam0) // Position - 0x551
{
	func_11(uParam0, 0f);
	return;
}

void func_11(var uParam0, float fParam1) // Position - 0x560
{
	uParam0->f_1 = func_3(IS_BIT_SET(*uParam0, 4)) - fParam1;
	unk_0xECDAB41968FF21A8(uParam0, 1);
	unk_0x061B1200C95204CB(uParam0, 2);
	uParam0->f_2 = 0f;
	return;
}

void func_12(int iParam0) // Position - 0x58B
{
	if (func_17())
		return;

	if (Global_20584)
		if (func_16())
			func_14(true, true);
		else
			func_14(false, false);

	if (Global_20383.f_1 == 10 || Global_20383.f_1 == 9)
		unk_0xECDAB41968FF21A8(&Global_8254, 16);

	if (unk_0xE444FD7526C8BB46())
		unk_0xD6625E11483B2324(0);

	Global_21725 = 5;

	if (iParam0 == 1)
		unk_0xECDAB41968FF21A8(&Global_8253, 30);
	else
		unk_0x061B1200C95204CB(&Global_8253, 30);

	if (!func_13())
		Global_20383.f_1 = 3;

	return;
}

BOOL func_13() // Position - 0x615
{
	if (Global_20383.f_1 == 1 || Global_20383.f_1 == 0)
		return true;

	return false;
}

void func_14(BOOL bParam0, BOOL bParam1) // Position - 0x63C
{
	if (bParam0)
	{
		if (func_15(0))
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

BOOL func_15(int iParam0) // Position - 0x6B0
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

BOOL func_16() // Position - 0x707
{
	return IS_BIT_SET(Global_1962996, 5);
}

BOOL func_17() // Position - 0x715
{
	return IS_BIT_SET(Global_1962996, 19);
}

void func_18(var uParam0) // Position - 0x724
{
	unk_0x2AF11E92DE43CDE3(uParam0);
	unk_0xF8FCA9E7130CE1C8();
	return;
}

void func_19() // Position - 0x736
{
	unk_0xD0AE101DBAA43C98(&uLocal_46);
	Global_32308 = false;
	func_1(0);
	unk_0x675D9C12C73D3DE7();
	return;
}

