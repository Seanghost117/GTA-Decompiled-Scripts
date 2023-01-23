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
	int iLocal_19 = 0;
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
	if (unk_0x03DB5C6AABF8DA46())
	{
		unk_0xFD45D90342D2A0CD(500);
	}
	if (unk_0xED06FD5709A59F02(3))
	{
		func_5();
	}
	iLocal_19 = unk_0x5DEA4192B46CB99B("instructional_buttons");
	while (!unk_0x95EF219D38B20CFF(iLocal_19))
	{
		wait(0);
	}
	while (true)
	{
		unk_0x37FC7E88C7659D33(iLocal_19, 255, 255, 255, 0, 0);
		func_4();
		func_1(iLocal_18, iLocal_19);
		wait(0);
	}
}

void func_1(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			unk_0x830F007E19C63E14(iParam1, "CLEAR_ALL");
			unk_0xE1FDD153F5858534();
			unk_0x830F007E19C63E14(iParam1, "SET_CLEAR_SPACE");
			unk_0xAD291B8F75D737AD(200);
			unk_0xE1FDD153F5858534();
			unk_0x830F007E19C63E14(iParam1, "SET_DATA_SLOT");
			unk_0xAD291B8F75D737AD(0);
			func_3(unk_0xED026A379B794F61(2, 191, true));
			func_2("PRESS A");
			unk_0xE1FDD153F5858534();
			unk_0x830F007E19C63E14(iParam1, "SET_DATA_SLOT");
			unk_0xAD291B8F75D737AD(1);
			func_3(unk_0xED026A379B794F61(2, 194, true));
			func_2("PRESS B");
			unk_0xE1FDD153F5858534();
			unk_0x830F007E19C63E14(iParam1, "SET_DATA_SLOT");
			unk_0xAD291B8F75D737AD(2);
			func_3(unk_0xED026A379B794F61(2, 193, true));
			func_2("PRESS X");
			unk_0xE1FDD153F5858534();
			unk_0x830F007E19C63E14(iParam1, "SET_DATA_SLOT");
			unk_0xAD291B8F75D737AD(3);
			func_3(unk_0xED026A379B794F61(2, 192, true));
			func_2("PRESS Y");
			unk_0xE1FDD153F5858534();
			unk_0x830F007E19C63E14(iParam1, "DRAW_INSTRUCTIONAL_BUTTONS");
			unk_0xE1FDD153F5858534();
			unk_0x830F007E19C63E14(iParam1, "SET_BACKGROUND_COLOUR");
			unk_0xAD291B8F75D737AD(0);
			unk_0xAD291B8F75D737AD(0);
			unk_0xAD291B8F75D737AD(0);
			unk_0xAD291B8F75D737AD(80);
			unk_0xE1FDD153F5858534();
			iLocal_18 = -1;
			break;
		
		case 1:
			unk_0x830F007E19C63E14(iParam1, "CLEAR_ALL");
			unk_0xE1FDD153F5858534();
			unk_0x830F007E19C63E14(iParam1, "SET_CLEAR_SPACE");
			unk_0xAD291B8F75D737AD(200);
			unk_0xE1FDD153F5858534();
			unk_0x830F007E19C63E14(iParam1, "SET_DATA_SLOT");
			unk_0xAD291B8F75D737AD(0);
			func_3(unk_0xED026A379B794F61(2, 187, true));
			func_2("DOWN");
			unk_0xE1FDD153F5858534();
			unk_0x830F007E19C63E14(iParam1, "SET_DATA_SLOT");
			unk_0xAD291B8F75D737AD(1);
			func_3(unk_0xED026A379B794F61(2, 188, true));
			func_2("UP");
			unk_0xE1FDD153F5858534();
			unk_0x830F007E19C63E14(iParam1, "SET_DATA_SLOT");
			unk_0xAD291B8F75D737AD(2);
			func_3(unk_0xED026A379B794F61(2, 190, true));
			func_2("LEFT");
			unk_0xE1FDD153F5858534();
			unk_0x830F007E19C63E14(iParam1, "SET_DATA_SLOT");
			unk_0xAD291B8F75D737AD(3);
			func_3(unk_0xED026A379B794F61(2, 189, true));
			func_2("RIGHT");
			unk_0xE1FDD153F5858534();
			unk_0x830F007E19C63E14(iParam1, "DRAW_INSTRUCTIONAL_BUTTONS");
			unk_0xE1FDD153F5858534();
			unk_0x830F007E19C63E14(iParam1, "SET_BACKGROUND_COLOUR");
			unk_0xAD291B8F75D737AD(0);
			unk_0xAD291B8F75D737AD(0);
			unk_0xAD291B8F75D737AD(0);
			unk_0xAD291B8F75D737AD(80);
			unk_0xE1FDD153F5858534();
			iLocal_18 = -1;
			break;
		
		case 2:
			unk_0x830F007E19C63E14(iParam1, "CLEAR_ALL");
			unk_0xE1FDD153F5858534();
			unk_0x830F007E19C63E14(iParam1, "SET_CLEAR_SPACE");
			unk_0xAD291B8F75D737AD(200);
			unk_0xE1FDD153F5858534();
			unk_0x830F007E19C63E14(iParam1, "SET_DATA_SLOT");
			unk_0xAD291B8F75D737AD(0);
			func_3(unk_0xED026A379B794F61(2, 202, true));
			func_2("BACK");
			unk_0xE1FDD153F5858534();
			unk_0x830F007E19C63E14(iParam1, "DRAW_INSTRUCTIONAL_BUTTONS");
			unk_0xE1FDD153F5858534();
			unk_0x830F007E19C63E14(iParam1, "SET_BACKGROUND_COLOUR");
			unk_0xAD291B8F75D737AD(0);
			unk_0xAD291B8F75D737AD(0);
			unk_0xAD291B8F75D737AD(0);
			unk_0xAD291B8F75D737AD(80);
			unk_0xE1FDD153F5858534();
			iLocal_18 = -1;
			break;
		
		default:
			break;
	}
}

void func_2(char* sParam0)
{
	unk_0xB23270F3D5E62FDE(sParam0);
	unk_0x2042E9CA4306F725();
}

void func_3(char* sParam0)
{
	unk_0x54AED56A452DCB4F(sParam0);
}

void func_4()
{
	if (Global_19660 == 0)
	{
		if (((((((((unk_0x22D6FB6153F774D3(2, 189) || unk_0x22D6FB6153F774D3(2, 190)) || unk_0x22D6FB6153F774D3(2, 188)) || unk_0x22D6FB6153F774D3(2, 187)) || unk_0x22D6FB6153F774D3(2, 205)) || unk_0x22D6FB6153F774D3(2, 206)) || unk_0x22D6FB6153F774D3(2, 207)) || unk_0x22D6FB6153F774D3(2, 208)) || unk_0x22D6FB6153F774D3(2, 201)) || unk_0x22D6FB6153F774D3(2, 202))
		{
			Global_19660 = 1;
			settimera(0);
		}
	}
	else if (timera() > 50)
	{
		Global_19660 = 0;
	}
	if (Global_19660 == 0)
	{
		if (unk_0x22D6FB6153F774D3(2, 217))
		{
			iLocal_18 = 1;
		}
		if (unk_0x22D6FB6153F774D3(2, 189))
		{
			iLocal_18 = 2;
		}
		if (unk_0x22D6FB6153F774D3(2, 190))
		{
			iLocal_18 = 2;
		}
		if (unk_0x22D6FB6153F774D3(2, 205))
		{
		}
		if (unk_0x22D6FB6153F774D3(2, 206))
		{
		}
		if (unk_0x22D6FB6153F774D3(2, 207))
		{
		}
		if (unk_0x22D6FB6153F774D3(2, 208))
		{
		}
		if (unk_0x22D6FB6153F774D3(2, 188))
		{
			iLocal_18 = 2;
		}
		if (unk_0x22D6FB6153F774D3(2, 187))
		{
			iLocal_18 = 2;
		}
		if (unk_0x22D6FB6153F774D3(2, 201))
		{
			iLocal_18 = 1;
		}
		if (unk_0x22D6FB6153F774D3(2, 202))
		{
			iLocal_18 = 0;
		}
		if (unk_0x22D6FB6153F774D3(2, 203))
		{
			iLocal_18 = 1;
		}
		if (unk_0x22D6FB6153F774D3(2, 204))
		{
			iLocal_18 = 1;
		}
	}
}

void func_5()
{
	func_6(0);
	unk_0x73D73FA241EA4AB7(0);
	unk_0x2E352DDBBF674246(&iLocal_19);
	unk_0xD39E529EBE5DB04F();
}

void func_6(bool bParam0)
{
	if (bParam0)
	{
		func_13();
		if (Global_19681.f_1 == 10 || Global_19681.f_1 == 9)
		{
			unk_0xBE20AB8238688965(&Global_7552, 16);
		}
		Global_19681.f_1 = 1;
		if (func_12(0))
		{
			func_7(0);
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

void func_7(int iParam0)
{
	if (func_11())
	{
		return;
	}
	if (Global_19864)
	{
		if (func_10())
		{
			func_9(1, 1);
		}
		else
		{
			func_9(0, 0);
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
	if (!func_8())
	{
		Global_19681.f_1 = 3;
	}
}

int func_8()
{
	if (Global_19681.f_1 == 1 || Global_19681.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

void func_9(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		if (func_12(0))
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

bool func_10()
{
	return unk_0xCE990E643CD9D0E5(Global_1689730, 5);
}

bool func_11()
{
	return unk_0xCE990E643CD9D0E5(Global_1689730, 19);
}

int func_12(int iParam0)
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

void func_13()
{
	if (Global_19681.f_1 == 9 || Global_19681.f_1 == 10)
	{
		Global_21058 = 0;
		Global_21054 = 1;
	}
}

