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
	if (unk_0xED06FD5709A59F02(83))
	{
		func_6();
	}
	if ((!Global_1 && !unk_0xF8EDFF98A9C94C74()) && unk_0x525CC859D62A4F04())
	{
		unk_0xFF8E7A064055ECA6(true);
		if (!unk_0x03DB5C6AABF8DA46())
		{
			if (!unk_0x5DA78AD6801A0523())
			{
				unk_0x1D40553EDD51A1B8(800);
			}
		}
		iLocal_20 = unk_0x5DEA4192B46CB99B("MP_BIG_MESSAGE_FREEMODE");
		iLocal_21 = unk_0x5DEA4192B46CB99B("INSTRUCTIONAL_BUTTONS");
		while (!unk_0x95EF219D38B20CFF(iLocal_20) || !unk_0x95EF219D38B20CFF(iLocal_21))
		{
			wait(0);
		}
		unk_0x830F007E19C63E14(iLocal_20, "SHOW_CENTERED_MP_MESSAGE");
		func_5("INSTALL_COMP");
		unk_0xE1FDD153F5858534();
		unk_0x830F007E19C63E14(iLocal_21, "SET_DATA_SLOT_EMPTY");
		unk_0xE1FDD153F5858534();
		unk_0x830F007E19C63E14(iLocal_21, "SET_DATA_SLOT");
		unk_0xAD291B8F75D737AD(0);
		func_4(unk_0xED026A379B794F61(2, 201, true));
		func_5("HUD_CONTINUE");
		unk_0xE1FDD153F5858534();
		unk_0x830F007E19C63E14(iLocal_21, "DRAW_INSTRUCTIONAL_BUTTONS");
		unk_0xF1B28F753235CE2A(false);
		unk_0xE1FDD153F5858534();
		while (!unk_0x03DB5C6AABF8DA46())
		{
			wait(0);
		}
		unk_0xCABF0F03F83CC102();
		while (!iLocal_22)
		{
			unk_0xEF408E7129CB009B();
			unk_0x9D15035C6653D1B1(7);
			unk_0x37FC7E88C7659D33(iLocal_20, 255, 255, 255, 0, 0);
			unk_0x37FC7E88C7659D33(iLocal_21, 255, 255, 255, 0, 0);
			if (unk_0x22D6FB6153F774D3(2, 201))
			{
				iLocal_22 = 1;
			}
			wait(0);
		}
		unk_0xFF8E7A064055ECA6(false);
		func_3(1, 1);
		func_1();
	}
	Global_77102.f_1 = 0;
	unk_0xBE20AB8238688965(&(Global_111858.f_10012.f_25), 0);
	func_6();
}

int func_1()
{
	if (func_2(0))
	{
		return 0;
	}
	if (Global_98994.f_8)
	{
		if (Global_98994.f_10 > 0)
		{
			return 0;
		}
	}
	else if (Global_98994.f_10 > 1)
	{
		return 0;
	}
	Global_98994.f_10++;
	return 1;
}

bool func_2(bool bParam0)
{
	if (!bParam0 && unk_0x7B70881748D166CD(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return unk_0xCE990E643CD9D0E5(Global_77081, 0);
}

void func_3(int iParam0, int iParam1)
{
	Global_98994.f_7 = iParam0;
	Global_98994.f_8 = iParam1;
}

void func_4(char* sParam0)
{
	unk_0x54AED56A452DCB4F(sParam0);
}

void func_5(char* sParam0)
{
	unk_0xB23270F3D5E62FDE(sParam0);
	unk_0x2042E9CA4306F725();
}

void func_6()
{
	if (iLocal_20 != 0)
	{
		unk_0x2E352DDBBF674246(&iLocal_20);
	}
	if (iLocal_21 != 0)
	{
		unk_0x2E352DDBBF674246(&iLocal_21);
	}
	unk_0x9D15035C6653D1B1(4);
	unk_0xFF8E7A064055ECA6(false);
	unk_0xD39E529EBE5DB04F();
}

