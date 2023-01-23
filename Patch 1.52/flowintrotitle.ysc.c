#region Local Var
	int iLocal_0 = 0;
	int iLocal_1 = 0;
	int iLocal_2 = 0;
#endregion

void __EntryFunction__()
{
	if (unk_0xED06FD5709A59F02(83))
	{
		func_10();
	}
	unk_0xB41F0F02EFE4C880(0);
	unk_0xD2459066EA58CE43(&(Global_111858.f_10012.f_25), 1);
	func_7();
	unk_0xFF8E7A064055ECA6(true);
	if (!unk_0x03DB5C6AABF8DA46())
	{
		unk_0x1D40553EDD51A1B8(0);
	}
	iLocal_0 = unk_0x5DEA4192B46CB99B("OPENING_CREDITS");
	while (!unk_0x95EF219D38B20CFF(iLocal_0))
	{
		func_7();
		wait(0);
	}
	while (!unk_0x03DB5C6AABF8DA46())
	{
		func_7();
		wait(0);
	}
	func_6("TITLE", 0f, 1f, 1.5f, 1f, 0f, 1.5f, 15f);
	iLocal_1 = (unk_0x578C4EF320340AF7() + 8000 + round((2f * 1000f)));
	while (!unk_0x3EBB66F936A3436E())
	{
		func_7();
		if (!unk_0xCE990E643CD9D0E5(Global_111858.f_10012.f_25, 1))
		{
			unk_0x37FC7E88C7659D33(iLocal_0, 255, 255, 255, 255, 0);
			if (!iLocal_2)
			{
				if (unk_0x578C4EF320340AF7() > iLocal_1)
				{
					func_5("TITLE");
					iLocal_2 = 1;
					iLocal_1 = (unk_0x578C4EF320340AF7() + round((2f * 1000f)));
				}
			}
			else if (unk_0x578C4EF320340AF7() > iLocal_1)
			{
				unk_0xBE20AB8238688965(&(Global_111858.f_10012.f_25), 1);
				if (unk_0x525CC859D62A4F04() || unk_0xF8EDFF98A9C94C74())
				{
					func_4(1, 1);
					func_2();
				}
				else
				{
					func_1();
				}
			}
		}
		wait(0);
	}
	func_10();
}

void func_1()
{
	Global_98994 = 1;
}

int func_2()
{
	if (func_3(0))
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

bool func_3(bool bParam0)
{
	if (!bParam0 && unk_0x7B70881748D166CD(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return unk_0xCE990E643CD9D0E5(Global_77081, 0);
}

void func_4(int iParam0, int iParam1)
{
	Global_98994.f_7 = iParam0;
	Global_98994.f_8 = iParam1;
}

void func_5(char* sParam0)
{
	unk_0x830F007E19C63E14(iLocal_0, "HIDE_LOGO");
	unk_0xB23270F3D5E62FDE("STRING");
	unk_0x9EFD301E3BE8324E(sParam0);
	unk_0x2042E9CA4306F725();
	unk_0xE1FDD153F5858534();
}

void func_6(char* sParam0, float fParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6, float fParam7)
{
	unk_0x830F007E19C63E14(iLocal_0, "SHOW_LOGO");
	unk_0xB23270F3D5E62FDE("STRING");
	unk_0x9EFD301E3BE8324E(sParam0);
	unk_0x2042E9CA4306F725();
	unk_0x49B9B8101B158AEE(fParam1);
	unk_0x49B9B8101B158AEE(fParam2);
	unk_0x49B9B8101B158AEE(fParam3);
	unk_0x49B9B8101B158AEE(fParam4);
	unk_0x49B9B8101B158AEE(fParam5);
	unk_0x49B9B8101B158AEE(fParam6);
	unk_0x49B9B8101B158AEE(fParam7);
	unk_0xE1FDD153F5858534();
}

void func_7()
{
	unk_0xEF408E7129CB009B();
	unk_0x779660A9E5364C4D(2, 199, 1);
	unk_0x9D15035C6653D1B1(7);
	func_8();
}

void func_8()
{
	unk_0x0037AEC7A79CCCB4();
	func_9();
}

void func_9()
{
	Global_22411.f_134 = 1;
}

void func_10()
{
	unk_0xBE20AB8238688965(&(Global_111858.f_10012.f_25), 1);
	if (iLocal_0 != 0)
	{
		unk_0x2E352DDBBF674246(&iLocal_0);
	}
	unk_0x9D15035C6653D1B1(4);
	unk_0xFF8E7A064055ECA6(false);
	unk_0xB41F0F02EFE4C880(1);
	unk_0xD39E529EBE5DB04F();
}

