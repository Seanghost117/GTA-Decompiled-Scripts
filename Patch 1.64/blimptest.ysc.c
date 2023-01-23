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
	char* sLocal_18 = 0;
	var uLocal_19 = 0;
	var uLocal_20 = 0;
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
	int iLocal_35 = 0;
	var uLocal_36 = 0;
	var uLocal_37 = 0;
	var uLocal_38 = 0;
	var uLocal_39 = 0;
	var uLocal_40 = 0;
	int iLocal_41 = 0;
	int iLocal_42 = 0;
	var uLocal_43 = 0;
	int iLocal_44 = 0;
	var uLocal_45 = 0;
	int iLocal_46 = 0;
	int iLocal_47 = 0;
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
	sLocal_18 = "NULL";
	fLocal_21 = 0f;
	fLocal_25 = -0.0375f;
	fLocal_26 = 0.17f;
	fLocal_30 = 80f;
	fLocal_31 = 140f;
	fLocal_32 = 180f;
	iLocal_35 = 3;
	iLocal_41 = joaat("blimp");
	iLocal_44 = joaat("S_M_M_Pilot_02");
	iLocal_46 = joaat("buzzard");

	if (unk_0x72474BA05A104E1E())
		unk_0x78DD793477D04C42(500);

	if (unk_0x55EEDBBFDC6E810F(18))
		func_18();

	unk_0x508B7A54DEE39001(0);
	func_17();
	func_16();
	func_14();
	func_11();

	while (true)
	{
		unk_0x4EC989440A6E11DD(255, 255, 255, 255);
		unk_0xF4621DEB617A5113(0.75f, 0.9f);
		unk_0xD2087B0A3696F221(0f, 1f);
		func_10(0.05f, 0.63f, "PLCHLD_MISS", 0);
		unk_0x4EC989440A6E11DD(255, 255, 255, 255);
		unk_0xF4621DEB617A5113(0.4f, 0.45f);
		unk_0xD2087B0A3696F221(0f, 1f);
		func_10(0.05f, 0.7f, "PLCHLD_PASS", 0);
		func_1();
		SYSTEM::WAIT(0);
	}

	return;
}

void func_1() // Position - 0x116
{
	var unk;

	if (unk_0x7DE17ACDD8BA2642(uLocal_40))
	{
		if (unk_0x055111B11E6624FD(uLocal_40, 0) || unk_0x2935B4D6CE81318D(uLocal_40) <= 0 || unk_0x34DAE7F7DF2CC995(uLocal_40) <= 0f)
		{
			func_9(&iLocal_42);
		
			if (unk_0xA005AFE85A66532E(uLocal_40))
				unk_0xA470B8FA40799169(uLocal_40);
		
			if (iLocal_47 == 1)
			{
				unk = { unk_0x30BE8A934C020461(uLocal_40, 0) };
				func_8(unk);
			}
		
			if (iLocal_47 == 1)
			{
				func_7(&uLocal_43);
				func_4(&uLocal_40);
			}
			else
			{
				func_3(&uLocal_43, 1, 0, 1);
				func_2(&uLocal_40);
			}
		}
		else if (unk_0xA005AFE85A66532E(uLocal_40))
		{
			unk_0x39EE305A0CF39DC1(uLocal_40, 0.25f);
		}
	}

	return;
}

void func_2(var uParam0) // Position - 0x1B6
{
	if (unk_0x7DE17ACDD8BA2642(*uParam0))
	{
		unk_0x055111B11E6624FD(*uParam0, 0);
	
		if (unk_0x1AFE963DA61006ED(*uParam0) && unk_0xAE770DDB34967EC3(*uParam0, 1))
			unk_0x0E4B6CF706BE8AA4(uParam0);
	}

	return;
}

void func_3(var uParam0, int iParam1, int iParam2, int iParam3) // Position - 0x1EE
{
	if (unk_0x7DE17ACDD8BA2642(*uParam0))
	{
		if (!unk_0x66599E73DBA5A850(*uParam0))
		{
			unk_0x351E6B9FD37CFF33(*uParam0, 0, 1);
		
			if (iParam3 == 0)
				unk_0xA0E06A3361300416(*uParam0);
		
			unk_0x71A535529C1CA5DF(*uParam0, iParam1);
		
			if (iParam2 == 1)
				unk_0xC5B2830898581862(*uParam0, 0);
		}
	
		unk_0x1EEF71E3CDD868D3(uParam0);
	}

	return;
}

void func_4(var uParam0) // Position - 0x23E
{
	if (unk_0x7DE17ACDD8BA2642(*uParam0))
	{
		if (!unk_0x1AFE963DA61006ED(*uParam0))
			unk_0x85BAE84748AD1A23(*uParam0, 1, 0);
	
		if (func_6(*uParam0))
		{
			if (unk_0x1AFE963DA61006ED(*uParam0) && unk_0xAE770DDB34967EC3(*uParam0, 1))
			{
				if (_DOES_ENTITY_EXIST_AND_IS_ALIVE(unk_0xC1A5EC5C986B98AD()))
				{
					if (unk_0xE0D346789C5160EB(unk_0xC1A5EC5C986B98AD(), *uParam0, 0))
					{
						unk_0x0E4B6CF706BE8AA4(uParam0);
						return;
					}
				}
			
				unk_0x2728CF7242F08BD5(uParam0);
			}
		}
		else
		{
			if (_DOES_ENTITY_EXIST_AND_IS_ALIVE(unk_0xC1A5EC5C986B98AD()))
			{
				if (unk_0xE0D346789C5160EB(unk_0xC1A5EC5C986B98AD(), *uParam0, 0))
				{
					unk_0x0E4B6CF706BE8AA4(uParam0);
					return;
				}
			}
		
			unk_0x2728CF7242F08BD5(uParam0);
		}
	}

	return;
}

BOOL _DOES_ENTITY_EXIST_AND_IS_ALIVE(var uParam0) // Position - 0x2DA
{
	if (unk_0x7DE17ACDD8BA2642(uParam0))
		if (!unk_0x055111B11E6624FD(uParam0, 0))
			return true;

	return false;
}

BOOL func_6(var uParam0) // Position - 0x2FB
{
	if (_DOES_ENTITY_EXIST_AND_IS_ALIVE(uParam0))
		if (unk_0xFBD273FDBCF0C5BD(uParam0, 0))
			if (!unk_0x584CD220C093B0B4(uParam0))
				return true;

	return false;
}

void func_7(var uParam0) // Position - 0x325
{
	if (unk_0x7DE17ACDD8BA2642(*uParam0))
	{
		if (!unk_0x055111B11E6624FD(*uParam0, 0))
			unk_0x351E6B9FD37CFF33(*uParam0, 0, 1);
	
		if (!unk_0x1AFE963DA61006ED(*uParam0))
			unk_0x85BAE84748AD1A23(*uParam0, 1, 0);
	
		unk_0xE9C250FA35A936C8(uParam0);
	}

	return;
}

void func_8(var uParam0, var uParam1, var uParam2) // Position - 0x366
{
	int i;
	int num;
	var unk;

	num = 12;
	unk = 12;
	unk[0 /*3*/] = { 5f, 0f, 0f };
	unk[1 /*3*/] = { 0f, 5f, 0f };
	unk[2 /*3*/] = { 0f, 0f, 5f };
	unk[3 /*3*/] = { 5f, 5f, 0f };
	unk[4 /*3*/] = { 5f, 0f, 5f };
	unk[5 /*3*/] = { 0f, 5f, 5f };
	unk[6 /*3*/] = { 20f, 0f, 0f };
	unk[7 /*3*/] = { 0f, 20f, 0f };
	unk[8 /*3*/] = { 0f, 0f, 20f };
	unk[9 /*3*/] = { 20f, 20f, 0f };
	unk[10 /*3*/] = { 20f, 0f, 20f };
	unk[11 /*3*/] = { 0f, 20f, 20f };
	unk_0x06791F908899E862(uParam0, 8, 1f, 1, 0, 1065353216, 0);

	for (i = 0; i <= num - 1; i = i + 1)
	{
		unk_0x06791F908899E862(uParam0 + unk[i /*3*/], 8, 1f, 1, 0, 1065353216, 0);
	}

	return;
}

void func_9(var uParam0) // Position - 0x45C
{
	if (unk_0xCE4AAA035282336C(*uParam0))
	{
		unk_0xBD91E7D4B770F97E(*uParam0, 0);
		unk_0x45533C09A6C9B409(uParam0);
	}

	return;
}

void func_10(float fParam0, float fParam1, char* sParam2, int iParam3) // Position - 0x47C
{
	unk_0x1AFC19685A6AF4A9(sParam2);
	unk_0x8E03B3A2F624EF8B(fParam0, fParam1, iParam3);
	return;
}

void func_11() // Position - 0x494
{
	func_2(&uLocal_45);
	unk_0x852EC2A7DE66202D(iLocal_46);

	while (!unk_0x0CBB7C273DED26E7(iLocal_46))
	{
		SYSTEM::WAIT(0);
	}

	if (func_6(uLocal_40))
	{
		uLocal_45 = unk_0xABEEDBEF2BBDF5B3(iLocal_46, unk_0x7394CB479CCA24AF(uLocal_40, 50f, 0f, 15f), 0f, 1, 1, 0);
		unk_0xD1AD77A7D621DF91(uLocal_45);
		func_12(uLocal_45, uLocal_40);
	
		if (_DOES_ENTITY_EXIST_AND_IS_ALIVE(unk_0xC1A5EC5C986B98AD()))
		{
			unk_0x4C18E9202CF6CACA(unk_0xC1A5EC5C986B98AD(), uLocal_45, -1);
			unk_0xEAB390443C680F72(0f, 1065353216);
			unk_0xAABD7B0753C5C286(0f);
			unk_0xF82BC5193AF62796(unk_0x30BE8A934C020461(unk_0xC1A5EC5C986B98AD(), 1), 500f, 1, 0, 0, 0);
		}
	}

	unk_0xE0A291F406691F03(iLocal_46);
	return;
}

void func_12(var uParam0, var uParam1) // Position - 0x52F
{
	float num;

	num = func_13(unk_0x30BE8A934C020461(uParam0, 1), unk_0x30BE8A934C020461(uParam1, 1), 1);
	unk_0x692C3FDAD7DB53CC(uParam0, num);
	return;
}

float func_13(var uParam0, var uParam1, var uParam2, float fParam3, var uParam4, var uParam5, int iParam6) // Position - 0x554
{
	float num;
	float num2;
	float num3;

	num2 = fParam3 - uParam0;
	num3 = fParam3.f_1 - uParam0.f_1;

	if (num3 != 0f)
		num = unk_0x360118B65D6530C6(num2, num3);
	else if (num2 < 0f)
		num = -90f;
	else
		num = 90f;

	if (iParam6 == 1)
	{
		num = num * -1f;
	
		if (num < 0f)
			num = num + 360f;
	}

	return num;
}

void func_14() // Position - 0x5B9
{
	func_9(&iLocal_42);

	if (func_6(uLocal_40))
		iLocal_42 = func_15(uLocal_40, 1, 5);

	return;
}

int func_15(var uParam0, int iParam1, int iParam2) // Position - 0x5DA
{
	int num;

	num = 0;

	if (_DOES_ENTITY_EXIST_AND_IS_ALIVE(uParam0))
	{
		num = unk_0x53B496178AE44636(uParam0);
		unk_0x3BCF1F6A3573A1DF(num, iParam1);
		unk_0xC2E0B90856D55E49(num, iParam2);
		unk_0x225EB85DBC38E707(num, 1f);
	}

	return num;
}

void func_16() // Position - 0x60F
{
	unk_0x852EC2A7DE66202D(iLocal_44);

	while (!unk_0x0CBB7C273DED26E7(iLocal_44))
	{
		SYSTEM::WAIT(0);
	}

	if (func_6(uLocal_40))
	{
		uLocal_43 = unk_0x4FA078B1B32445FD(uLocal_40, 26, iLocal_44, -1, 1, 1);
	
		if (_DOES_ENTITY_EXIST_AND_IS_ALIVE(uLocal_43))
		{
			unk_0xC5B2830898581862(uLocal_43, 1);
			unk_0x598D91BBD045C1F3(uLocal_43, 118, 0);
			unk_0x598D91BBD045C1F3(uLocal_43, 29, 0);
			unk_0x598D91BBD045C1F3(uLocal_43, 116, 0);
		}
	}

	if (func_6(uLocal_40))
		unk_0x900E2CFB61F6D92B(uLocal_40, 1, "Blimp_City", 1);

	unk_0xE0A291F406691F03(iLocal_44);
	return;
}

void func_17() // Position - 0x68C
{
	var unk;

	if (func_6(uLocal_40) && unk_0xA005AFE85A66532E(uLocal_40))
		unk_0xA470B8FA40799169(uLocal_40);

	func_9(&iLocal_42);
	func_7(&uLocal_43);
	func_4(&uLocal_40);
	unk_0x852EC2A7DE66202D(iLocal_41);
	unk_0xC0B5FC4796023855(1, "Blimp_City");

	while (!unk_0x0CBB7C273DED26E7(iLocal_41) || !unk_0x56659E29BE303D7F(1, "Blimp_City"))
	{
		SYSTEM::WAIT(0);
	}

	unk = { unk_0x090690D94B6EE083(unk_0x97CF93A45CD8B11D(1, "Blimp_City"), 0f) };
	uLocal_40 = unk_0xABEEDBEF2BBDF5B3(iLocal_41, unk_0x94A87D0B438403E1(unk_0x97CF93A45CD8B11D(1, "Blimp_City"), 0f), unk.f_2, 1, 1, 0);
	unk_0xE0A291F406691F03(iLocal_41);
	return;
}

void func_18() // Position - 0x722
{
	if (func_6(uLocal_40) && unk_0xA005AFE85A66532E(uLocal_40))
		unk_0xA470B8FA40799169(uLocal_40);

	unk_0xC062EB7C484973F7(1, "Blimp_city");
	func_9(&iLocal_42);
	func_3(&uLocal_43, 1, 0, 1);
	func_2(&uLocal_40);
	func_2(&uLocal_45);
	unk_0xE0A291F406691F03(iLocal_44);
	unk_0xE0A291F406691F03(iLocal_41);
	unk_0xE0A291F406691F03(iLocal_46);
	unk_0x508B7A54DEE39001(6);
	unk_0x675D9C12C73D3DE7();
	return;
}

