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
		func_2();
	}
	iLocal_18 = unk_0x5DEA4192B46CB99B("graphic_design");
	while (!unk_0x95EF219D38B20CFF(iLocal_18))
	{
		wait(0);
	}
	while (true)
	{
		unk_0xE6A03BA84586E67B(iLocal_18, 0.5f, 0.5f, 1f, 1f, 255, 255, 255, 0, 0);
		func_1(iLocal_18);
		wait(0);
	}
}

void func_1(int iParam0)
{
	if (Global_19660 == 0)
	{
		if (((((((unk_0x22D6FB6153F774D3(2, 189) || unk_0x22D6FB6153F774D3(2, 190)) || unk_0x22D6FB6153F774D3(2, 188)) || unk_0x22D6FB6153F774D3(2, 187)) || unk_0x22D6FB6153F774D3(2, 205)) || unk_0x22D6FB6153F774D3(2, 206)) || unk_0x22D6FB6153F774D3(2, 201)) || unk_0x22D6FB6153F774D3(2, 202))
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
		if (unk_0x22D6FB6153F774D3(2, 189))
		{
			unk_0x830F007E19C63E14(iParam0, "SET_INPUT_EVENT");
			unk_0xAD291B8F75D737AD(10);
			unk_0xE1FDD153F5858534();
		}
		if (unk_0x22D6FB6153F774D3(2, 190))
		{
			unk_0x830F007E19C63E14(iParam0, "SET_INPUT_EVENT");
			unk_0xAD291B8F75D737AD(11);
			unk_0xE1FDD153F5858534();
		}
		if (unk_0x22D6FB6153F774D3(2, 205))
		{
			unk_0x830F007E19C63E14(iParam0, "SET_INPUT_EVENT");
			unk_0xAD291B8F75D737AD(4);
			unk_0xE1FDD153F5858534();
		}
		if (unk_0x22D6FB6153F774D3(2, 206))
		{
			unk_0x830F007E19C63E14(iParam0, "SET_INPUT_EVENT");
			unk_0xAD291B8F75D737AD(6);
			unk_0xE1FDD153F5858534();
		}
		if (unk_0x22D6FB6153F774D3(2, 188))
		{
			unk_0x830F007E19C63E14(iParam0, "SET_INPUT_EVENT");
			unk_0xAD291B8F75D737AD(8);
			unk_0xE1FDD153F5858534();
		}
		if (unk_0x22D6FB6153F774D3(2, 187))
		{
			unk_0x830F007E19C63E14(iParam0, "SET_INPUT_EVENT");
			unk_0xAD291B8F75D737AD(9);
			unk_0xE1FDD153F5858534();
		}
		if (unk_0x22D6FB6153F774D3(2, 201))
		{
			unk_0x830F007E19C63E14(iParam0, "SET_INPUT_EVENT");
			unk_0xAD291B8F75D737AD(16);
			unk_0xE1FDD153F5858534();
		}
		if (unk_0x22D6FB6153F774D3(2, 202))
		{
			unk_0x830F007E19C63E14(iParam0, "SET_INPUT_EVENT");
			unk_0xAD291B8F75D737AD(17);
			unk_0xE1FDD153F5858534();
		}
	}
}

void func_2()
{
	func_3(0);
	unk_0x73D73FA241EA4AB7(0);
	unk_0x2E352DDBBF674246(&iLocal_18);
	unk_0xD39E529EBE5DB04F();
}

void func_3(bool bParam0)
{
	if (bParam0)
	{
		func_10();
		if (Global_19681.f_1 == 10 || Global_19681.f_1 == 9)
		{
			unk_0xBE20AB8238688965(&Global_7552, 16);
		}
		Global_19681.f_1 = 1;
		if (func_9(0))
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

void func_4(int iParam0)
{
	if (func_8())
	{
		return;
	}
	if (Global_19864)
	{
		if (func_7())
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
		if (func_9(0))
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

bool func_7()
{
	return unk_0xCE990E643CD9D0E5(Global_1689730, 5);
}

bool func_8()
{
	return unk_0xCE990E643CD9D0E5(Global_1689730, 19);
}

int func_9(int iParam0)
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

void func_10()
{
	if (Global_19681.f_1 == 9 || Global_19681.f_1 == 10)
	{
		Global_21058 = 0;
		Global_21054 = 1;
	}
}

