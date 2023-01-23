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
	char* sLocal_18 = NULL;
	var uLocal_19 = 0;
	var uLocal_20 = 0;
	var uLocal_21 = 0;
	var uLocal_22 = 0;
	float fLocal_23 = 0f;
	float fLocal_24 = 0f;
	float fLocal_25 = 0f;
	var uLocal_26 = 0;
	var uLocal_27 = 0;
	int iLocal_28 = 0;
	float fLocal_29 = 0f;
	var uLocal_30 = 0;
	var uLocal_31 = 0;
	var uLocal_32 = 0;
	float fLocal_33 = 0f;
	float fLocal_34 = 0f;
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
	var uLocal_45 = 0;
	int iLocal_46 = 0;
	var uLocal_47 = 0;
	var uLocal_48 = 0;
	var uLocal_49 = 0;
	var uLocal_50 = 0;
	var uLocal_51 = 0;
	var uLocal_52 = 0;
	var uLocal_53 = 0;
	var uLocal_54 = 0;
	var uLocal_55 = 0;
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
	sLocal_18 = "NULL";
	fLocal_23 = 80f;
	fLocal_24 = 140f;
	fLocal_25 = 180f;
	iLocal_28 = 3;
	fLocal_29 = 0f;
	fLocal_33 = -0.0375f;
	fLocal_34 = 0.17f;
	iLocal_39 = 1;
	iLocal_40 = 65;
	iLocal_41 = 49;
	iLocal_42 = 64;
	if (func_93(&iLocal_46))
	{
		while (!func_81())
		{
			func_69(&iLocal_46);
			if (func_59(&iLocal_46))
			{
			}
			else
			{
				func_17(&iLocal_46);
				wait(0);
			}
		}
	}
	func_1(&iLocal_46);
}

void func_1(int iParam0)
{
	func_16();
	if (func_10(iParam0))
	{
		unk_0xD289B55B6AADBA10(1);
	}
	if (func_8(&iLocal_46))
	{
		func_4(&iLocal_46);
	}
	unk_0x53797676AD34A9AA(5);
	func_3();
	unk_0x301D40601D63F19F(unk_0x460153A63B9477BC(), 0);
	func_2();
}

void func_2()
{
	unk_0xD39E529EBE5DB04F();
}

void func_3()
{
	unk_0xD2459066EA58CE43(&(Global_1590682[unk_0x460153A63B9477BC() /*883*/].f_859), 3);
}

void func_4(int iParam0)
{
	func_7(0, 1);
	func_6(0, -1, 1);
	func_5(&(iParam0->f_6), 5);
}

void func_5(int iParam0, int iParam1)
{
	unk_0xD2459066EA58CE43(iParam0, iParam1);
}

void func_6(bool bParam0, int iParam1, bool bParam2)
{
	if ((!unk_0x7FD2BDF03806FD9D(Global_2416085.f_1582) || Global_2416085.f_1582 == unk_0x354AD085195C5FA6()) || bParam2)
	{
		if (bParam0)
		{
			Global_2416085.f_1582 = unk_0x354AD085195C5FA6();
			Global_2416085.f_1583 = unk_0x6CAAB7E78B5D978A();
		}
		else
		{
			Global_2416085.f_1582 = -1;
		}
		Global_2416085.f_1585 = iParam1;
		Global_2416085.f_1587 = bParam0;
	}
	else if (!bParam2)
	{
	}
}

void func_7(bool bParam0, bool bParam1)
{
	if ((!unk_0x7FD2BDF03806FD9D(Global_2416085.f_1598) || Global_2416085.f_1598 == unk_0x354AD085195C5FA6()) || bParam1)
	{
		if (bParam0)
		{
			Global_2416085.f_1598 = unk_0x354AD085195C5FA6();
			unk_0xBE20AB8238688965(&(Global_2425869[unk_0x460153A63B9477BC() /*443*/].f_71.f_2), 23);
		}
		else
		{
			Global_2416085.f_1598 = -1;
			unk_0xD2459066EA58CE43(&(Global_2425869[unk_0x460153A63B9477BC() /*443*/].f_71.f_2), 23);
		}
	}
	else if (!bParam1)
	{
	}
}

bool func_8(int iParam0)
{
	return func_9(&(iParam0->f_6), 5);
}

bool func_9(int iParam0, int iParam1)
{
	return unk_0xCE990E643CD9D0E5(*iParam0, iParam1);
}

int func_10(var uParam0)
{
	if (uParam0->f_2 != 0)
	{
		if (func_14("STEALTH_OFF", func_15(uParam0->f_2), func_15(uParam0->f_2)) || func_13("STEALTH_ON_P", func_15(uParam0->f_2)))
		{
			return 1;
		}
	}
	return ((func_12("STEALTH_ON") || func_12(func_11())) || func_12("STEALTH_OFF_P"));
}

char* func_11()
{
	return "STEALTH_WARN";
}

bool func_12(char* sParam0)
{
	unk_0x69476B1CA6A9FF80(sParam0);
	return unk_0x1A3A9FFE5CA6F64B(0);
}

bool func_13(char* sParam0, int iParam1)
{
	unk_0x69476B1CA6A9FF80(sParam0);
	unk_0x6A826E35A3096ED0(iParam1);
	return unk_0x1A3A9FFE5CA6F64B(0);
}

bool func_14(char* sParam0, int iParam1, int iParam2)
{
	unk_0x69476B1CA6A9FF80(sParam0);
	unk_0x6A826E35A3096ED0(iParam1);
	unk_0x6A826E35A3096ED0(iParam2);
	return unk_0x1A3A9FFE5CA6F64B(0);
}

char* func_15(int iParam0)
{
	if (iParam0 == joaat("annihilator2"))
	{
		return "ANNIH_2_STEALTH";
	}
	return unk_0xBBF5A53C394969AA(iParam0);
}

void func_16()
{
	unk_0xD2459066EA58CE43(&(Global_1590682[unk_0x460153A63B9477BC() /*883*/].f_859), 1);
}

void func_17(int iParam0)
{
	func_56(iParam0);
	func_55(iParam0);
	if (func_54(iParam0))
	{
		if (((func_53(iParam0) && !func_52(iParam0)) && unk_0xAA5B806352173DEA(iParam0->f_1)) && !func_51())
		{
			func_50(iParam0, 1, 0);
			func_49(iParam0);
		}
		else if (func_9(&(iParam0->f_6), 6) && func_52(iParam0))
		{
			if (unk_0xAA5B806352173DEA(iParam0->f_1) && !func_51())
			{
				func_50(iParam0, 0, 0);
				func_5(&(iParam0->f_6), 6);
				func_5(&(iParam0->f_6), 2);
			}
		}
	}
	if (func_48(iParam0))
	{
		unk_0x301D40601D63F19F(unk_0x460153A63B9477BC(), 1);
		func_47();
		func_46(iParam0);
	}
	else if (func_45(iParam0))
	{
		unk_0x301D40601D63F19F(unk_0x460153A63B9477BC(), 0);
		func_16();
		func_46(iParam0);
		func_44(iParam0, 5);
	}
	if (func_52(iParam0) && !func_53(iParam0))
	{
		func_42(iParam0);
		func_41();
		func_44(iParam0, 2);
		if (func_38(iParam0))
		{
			func_36();
		}
	}
	else
	{
		func_18(iParam0);
	}
	func_3();
	unk_0xD2459066EA58CE43(&(Global_1590682[unk_0x460153A63B9477BC() /*883*/].f_859), 4);
}

void func_18(int iParam0)
{
	int iVar0;
	
	if (((((((!func_9(&(iParam0->f_6), 0) && !func_9(&(iParam0->f_6), 2)) && !unk_0xDABD547F0DF2906C()) && func_35(iParam0)) && !func_34(0)) && !func_33()) && func_31()) && unk_0xAE06B9E39EBDE049(unk_0x10D3F7E169A49C44(iParam0->f_1, -1, 0)))
	{
		func_25(iParam0, 1);
		func_24(&(iParam0->f_6), 3);
		iVar0 = func_23(iParam0->f_6.f_2, 3333, 10000);
		iParam0->f_6.f_2 = 0;
		if (func_54(iParam0))
		{
			func_21(func_22(iParam0), func_15(iParam0->f_2), func_15(iParam0->f_2), iVar0);
		}
		else
		{
			func_20(func_22(iParam0), func_15(iParam0->f_2), iVar0);
		}
		func_19(iParam0);
		func_24(&(iParam0->f_6), 0);
	}
}

void func_19(int iParam0)
{
	func_24(&(iParam0->f_6), 2);
}

void func_20(char* sParam0, int iParam1, int iParam2)
{
	unk_0x17751E107423AFE9(sParam0);
	unk_0x6A826E35A3096ED0(iParam1);
	unk_0x1A169149B3D18FCB(0, 0, true, iParam2);
}

void func_21(char* sParam0, int iParam1, int iParam2, int iParam3)
{
	unk_0x17751E107423AFE9(sParam0);
	unk_0x6A826E35A3096ED0(iParam1);
	unk_0x6A826E35A3096ED0(iParam2);
	unk_0x1A169149B3D18FCB(0, 0, true, iParam3);
}

char* func_22(int iParam0)
{
	if (func_54(iParam0))
	{
		return "STEALTH_OFF";
	}
	return "STEALTH_OFF_P";
}

int func_23(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

void func_24(int iParam0, int iParam1)
{
	unk_0xBE20AB8238688965(iParam0, iParam1);
}

void func_25(int iParam0, int iParam1)
{
	int iVar0;
	
	if (func_54(iParam0))
	{
		switch (iParam0->f_2)
		{
			case joaat("akula"):
			case joaat("annihilator2"):
				iVar0 = (func_28(19004, -1, -1) + iParam1);
				if (iVar0 >= 0)
				{
					func_26(19004, iVar0, -1, 1);
				}
				break;
			}
	}
}

var func_26(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	var uVar2;
	
	if (iParam2 == -1)
	{
		iParam2 = func_27();
	}
	if (iParam1 < 0)
	{
		iParam1 = 255;
	}
	iVar0 = 0;
	iVar1 = 0;
	if (iParam0 >= 384 && iParam0 < 457)
	{
		iVar0 = unk_0x169039D5869899DA((iParam0 - 384), 0, 1, iParam2);
		iVar1 = ((iParam0 - 384) - unk_0xCCD6EB3D51BA0D9E((iParam0 - 384)) * 8) * 8;
	}
	else if (iParam0 >= 457 && iParam0 < 513)
	{
		iVar0 = unk_0x169039D5869899DA((iParam0 - 457), 1, 1, iParam2);
		iVar1 = ((iParam0 - 457) - unk_0xCCD6EB3D51BA0D9E((iParam0 - 457)) * 8) * 8;
	}
	else if (iParam0 >= 1281 && iParam0 < 1305)
	{
		iVar0 = unk_0x169039D5869899DA((iParam0 - 1281), 0, 0, 0);
		iVar1 = ((iParam0 - 1281) - unk_0xCCD6EB3D51BA0D9E((iParam0 - 1281)) * 8) * 8;
	}
	else if (iParam0 >= 1305 && iParam0 < 1361)
	{
		iVar0 = unk_0x169039D5869899DA((iParam0 - 1305), 1, 0, 0);
		iVar1 = ((iParam0 - 1305) - unk_0xCCD6EB3D51BA0D9E((iParam0 - 1305)) * 8) * 8;
	}
	else if (iParam0 >= 1393 && iParam0 < 2919)
	{
		iVar0 = unk_0x33259517529FA9DD((iParam0 - 1393), 0, 1, iParam2);
		iVar1 = ((iParam0 - 1393) - unk_0xCCD6EB3D51BA0D9E((iParam0 - 1393)) * 8) * 8;
	}
	else if (iParam0 >= 1361 && iParam0 < 1393)
	{
		iVar0 = unk_0x33259517529FA9DD((iParam0 - 1361), 0, 0, 0);
		iVar1 = ((iParam0 - 1361) - unk_0xCCD6EB3D51BA0D9E((iParam0 - 1361)) * 8) * 8;
	}
	else if (iParam0 >= 3879 && iParam0 < 4143)
	{
		iVar0 = unk_0x7F2F9520C57D9D66((iParam0 - 3879), 0, 1, iParam2, "_NGPSTAT_INT");
		iVar1 = ((iParam0 - 3879) - unk_0xCCD6EB3D51BA0D9E((iParam0 - 3879)) * 8) * 8;
	}
	else if (iParam0 >= 4143 && iParam0 < 4207)
	{
		iVar0 = unk_0x7F2F9520C57D9D66((iParam0 - 4143), 0, 0, 0, "_NGPSTAT_INT");
		iVar1 = ((iParam0 - 4143) - unk_0xCCD6EB3D51BA0D9E((iParam0 - 4143)) * 8) * 8;
	}
	else if (iParam0 >= 4399 && iParam0 < 6028)
	{
		iVar0 = unk_0x7F2F9520C57D9D66((iParam0 - 4399), 0, 1, iParam2, "_LRPSTAT_INT");
		iVar1 = ((iParam0 - 4399) - unk_0xCCD6EB3D51BA0D9E((iParam0 - 4399)) * 8) * 8;
	}
	else if (iParam0 >= 6413 && iParam0 < 7262)
	{
		iVar0 = unk_0x7F2F9520C57D9D66((iParam0 - 6413), 0, 1, iParam2, "_APAPSTAT_INT");
		iVar1 = ((iParam0 - 6413) - unk_0xCCD6EB3D51BA0D9E((iParam0 - 6413)) * 8) * 8;
	}
	else if (iParam0 >= 7262 && iParam0 < 7313)
	{
		iVar0 = unk_0x7F2F9520C57D9D66((iParam0 - 7262), 0, 1, iParam2, "_LR2PSTAT_INT");
		iVar1 = ((iParam0 - 7262) - unk_0xCCD6EB3D51BA0D9E((iParam0 - 7262)) * 8) * 8;
	}
	else if (iParam0 >= 7681 && iParam0 < 9361)
	{
		iVar0 = unk_0x7F2F9520C57D9D66((iParam0 - 7681), 0, 1, iParam2, "_BIKEPSTAT_INT");
		iVar1 = ((iParam0 - 7681) - unk_0xCCD6EB3D51BA0D9E((iParam0 - 7681)) * 8) * 8;
	}
	else if (iParam0 >= 9553 && iParam0 < 15265)
	{
		iVar0 = unk_0x7F2F9520C57D9D66((iParam0 - 9553), 0, 1, iParam2, "_IMPEXPPSTAT_INT");
		iVar1 = ((iParam0 - 9553) - unk_0xCCD6EB3D51BA0D9E((iParam0 - 9553)) * 8) * 8;
	}
	else if (iParam0 >= 15265 && iParam0 < 15369)
	{
		iVar0 = unk_0x7F2F9520C57D9D66((iParam0 - 15265), 0, 1, iParam2, "_GUNRPSTAT_INT");
		iVar1 = ((iParam0 - 15265) - unk_0xCCD6EB3D51BA0D9E((iParam0 - 15265)) * 8) * 8;
	}
	else if (iParam0 >= 16010 && iParam0 < 18098)
	{
		iVar0 = unk_0x7F2F9520C57D9D66((iParam0 - 16010), 0, 1, iParam2, "_DLCSMUGCHARPSTAT_INT");
		iVar1 = ((iParam0 - 16010) - unk_0xCCD6EB3D51BA0D9E((iParam0 - 16010)) * 8) * 8;
	}
	else if (iParam0 >= 18162 && iParam0 < 19018)
	{
		iVar0 = unk_0x7F2F9520C57D9D66((iParam0 - 18162), 0, 1, iParam2, "_GANGOPSPSTAT_INT");
		iVar1 = ((iParam0 - 18162) - unk_0xCCD6EB3D51BA0D9E((iParam0 - 18162)) * 8) * 8;
	}
	else if (iParam0 >= 19018 && iParam0 < 22066)
	{
		iVar0 = unk_0x7F2F9520C57D9D66((iParam0 - 19018), 0, 1, iParam2, "_BUSINESSBATPSTAT_INT");
		iVar1 = ((iParam0 - 19018) - unk_0xCCD6EB3D51BA0D9E((iParam0 - 19018)) * 8) * 8;
	}
	else if (iParam0 >= 22194 && iParam0 < 24962)
	{
		iVar0 = unk_0x7F2F9520C57D9D66((iParam0 - 22194), 0, 1, iParam2, "_ARENAWARSPSTAT_INT");
		iVar1 = ((iParam0 - 22194) - unk_0xCCD6EB3D51BA0D9E((iParam0 - 22194)) * 8) * 8;
	}
	else if (iParam0 >= 25538 && iParam0 < 26810)
	{
		iVar0 = unk_0x7F2F9520C57D9D66((iParam0 - 25538), 0, 1, iParam2, "_CASINOPSTAT_INT");
		iVar1 = ((iParam0 - 25538) - unk_0xCCD6EB3D51BA0D9E((iParam0 - 25538)) * 8) * 8;
	}
	else if (iParam0 >= 27258 && iParam0 < 28098)
	{
		iVar0 = unk_0x7F2F9520C57D9D66((iParam0 - 27258), 0, 1, iParam2, "_CASINOHSTPSTAT_INT");
		iVar1 = ((iParam0 - 27258) - unk_0xCCD6EB3D51BA0D9E((iParam0 - 27258)) * 8) * 8;
	}
	else if (iParam0 >= 28483 && iParam0 < 30227)
	{
		iVar0 = unk_0x7F2F9520C57D9D66((iParam0 - 28483), 0, 1, iParam2, "_SU20PSTAT_INT");
		iVar1 = ((iParam0 - 28483) - unk_0xCCD6EB3D51BA0D9E((iParam0 - 28483)) * 8) * 8;
	}
	else if (iParam0 >= 30483 && iParam0 < 30515)
	{
		iVar0 = unk_0x7F2F9520C57D9D66((iParam0 - 30483), 0, 1, iParam2, "_HISLANDPSTAT_INT");
		iVar1 = ((iParam0 - 30483) - unk_0xCCD6EB3D51BA0D9E((iParam0 - 30483)) * 8) * 8;
	}
	else if (iParam0 >= 7641 && iParam0 < 7681)
	{
		iVar0 = unk_0x7F2F9520C57D9D66((iParam0 - 7641), 0, 1, iParam2, "_NGDLCPSTAT_INT");
		iVar1 = ((iParam0 - 7641) - unk_0xCCD6EB3D51BA0D9E((iParam0 - 7641)) * 8) * 8;
	}
	else if (iParam0 >= 7313 && iParam0 < 7321)
	{
		iVar0 = unk_0x7F2F9520C57D9D66((iParam0 - 7313), 0, 0, 0, "_NGDLCPSTAT_INT");
		iVar1 = ((iParam0 - 7313) - unk_0xCCD6EB3D51BA0D9E((iParam0 - 7313)) * 8) * 8;
	}
	uVar2 = unk_0x9972E0F3B8651981(iVar0, iParam1, iVar1, 8, iParam3);
	return uVar2;
}

int func_27()
{
	return Global_1312763;
}

int func_28(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (iParam1 == -1)
	{
		iParam1 = func_27();
	}
	iVar0 = 0;
	iVar1 = func_30(iParam0, iParam1);
	iVar2 = func_29(iParam0);
	if (0 != iVar1)
	{
		if (!unk_0x84F15E111A2161E1(iVar1, &iVar0, iVar2, 8, iParam2))
		{
			iVar0 = 0;
		}
	}
	return iVar0;
}

int func_29(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	if (iParam0 >= 384 && iParam0 < 457)
	{
		iVar0 = ((iParam0 - 384) - unk_0xCCD6EB3D51BA0D9E((iParam0 - 384)) * 8) * 8;
	}
	else if (iParam0 >= 457 && iParam0 < 513)
	{
		iVar0 = ((iParam0 - 457) - unk_0xCCD6EB3D51BA0D9E((iParam0 - 457)) * 8) * 8;
	}
	else if (iParam0 >= 1281 && iParam0 < 1305)
	{
		iVar0 = ((iParam0 - 1281) - unk_0xCCD6EB3D51BA0D9E((iParam0 - 1281)) * 8) * 8;
	}
	else if (iParam0 >= 1305 && iParam0 < 1361)
	{
		iVar0 = ((iParam0 - 1305) - unk_0xCCD6EB3D51BA0D9E((iParam0 - 1305)) * 8) * 8;
	}
	else if (iParam0 >= 1361 && iParam0 < 1393)
	{
		iVar0 = ((iParam0 - 1361) - unk_0xCCD6EB3D51BA0D9E((iParam0 - 1361)) * 8) * 8;
	}
	else if (iParam0 >= 1393 && iParam0 < 2919)
	{
		iVar0 = ((iParam0 - 1393) - unk_0xCCD6EB3D51BA0D9E((iParam0 - 1393)) * 8) * 8;
	}
	else if (iParam0 >= 4143 && iParam0 < 4207)
	{
		iVar0 = ((iParam0 - 4143) - unk_0xCCD6EB3D51BA0D9E((iParam0 - 4143)) * 8) * 8;
	}
	else if (iParam0 >= 3879 && iParam0 < 4143)
	{
		iVar0 = ((iParam0 - 3879) - unk_0xCCD6EB3D51BA0D9E((iParam0 - 3879)) * 8) * 8;
	}
	else if (iParam0 >= 4399 && iParam0 < 6028)
	{
		iVar0 = ((iParam0 - 4399) - unk_0xCCD6EB3D51BA0D9E((iParam0 - 4399)) * 8) * 8;
	}
	else if (iParam0 >= 6413 && iParam0 < 7262)
	{
		iVar0 = ((iParam0 - 6413) - unk_0xCCD6EB3D51BA0D9E((iParam0 - 6413)) * 8) * 8;
	}
	else if (iParam0 >= 7262 && iParam0 < 7313)
	{
		iVar0 = ((iParam0 - 7262) - unk_0xCCD6EB3D51BA0D9E((iParam0 - 7262)) * 8) * 8;
	}
	else if (iParam0 >= 7681 && iParam0 < 9361)
	{
		iVar0 = ((iParam0 - 7681) - unk_0xCCD6EB3D51BA0D9E((iParam0 - 7681)) * 8) * 8;
	}
	else if (iParam0 >= 9553 && iParam0 < 15265)
	{
		iVar0 = ((iParam0 - 9553) - unk_0xCCD6EB3D51BA0D9E((iParam0 - 9553)) * 8) * 8;
	}
	else if (iParam0 >= 15265 && iParam0 < 15369)
	{
		iVar0 = ((iParam0 - 15265) - unk_0xCCD6EB3D51BA0D9E((iParam0 - 15265)) * 8) * 8;
	}
	else if (iParam0 >= 7313 && iParam0 < 7321)
	{
		iVar0 = ((iParam0 - 7313) - unk_0xCCD6EB3D51BA0D9E((iParam0 - 7313)) * 8) * 8;
	}
	else if (iParam0 >= 7641 && iParam0 < 7681)
	{
		iVar0 = ((iParam0 - 7641) - unk_0xCCD6EB3D51BA0D9E((iParam0 - 7641)) * 8) * 8;
	}
	else if (iParam0 >= 16010 && iParam0 < 18098)
	{
		iVar0 = ((iParam0 - 16010) - unk_0xCCD6EB3D51BA0D9E((iParam0 - 16010)) * 8) * 8;
	}
	else if (iParam0 >= 18162 && iParam0 < 19018)
	{
		iVar0 = ((iParam0 - 18162) - unk_0xCCD6EB3D51BA0D9E((iParam0 - 18162)) * 8) * 8;
	}
	else if (iParam0 >= 19018 && iParam0 < 22066)
	{
		iVar0 = ((iParam0 - 19018) - unk_0xCCD6EB3D51BA0D9E((iParam0 - 19018)) * 8) * 8;
	}
	else if (iParam0 >= 22194 && iParam0 < 24962)
	{
		iVar0 = ((iParam0 - 22194) - unk_0xCCD6EB3D51BA0D9E((iParam0 - 22194)) * 8) * 8;
	}
	else if (iParam0 >= 25538 && iParam0 < 26810)
	{
		iVar0 = ((iParam0 - 25538) - unk_0xCCD6EB3D51BA0D9E((iParam0 - 25538)) * 8) * 8;
	}
	else if (iParam0 >= 27258 && iParam0 < 28098)
	{
		iVar0 = ((iParam0 - 27258) - unk_0xCCD6EB3D51BA0D9E((iParam0 - 27258)) * 8) * 8;
	}
	else if (iParam0 >= 28483 && iParam0 < 30227)
	{
		iVar0 = ((iParam0 - 28483) - unk_0xCCD6EB3D51BA0D9E((iParam0 - 28483)) * 8) * 8;
	}
	else if (iParam0 >= 30483 && iParam0 < 30515)
	{
		iVar0 = ((iParam0 - 30483) - unk_0xCCD6EB3D51BA0D9E((iParam0 - 30483)) * 8) * 8;
	}
	return iVar0;
}

int func_30(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam1 == -1)
	{
		iParam1 = func_27();
	}
	iVar0 = 0;
	if (iParam0 >= 384 && iParam0 < 457)
	{
		iVar0 = unk_0x169039D5869899DA((iParam0 - 384), 0, 1, iParam1);
	}
	else if (iParam0 >= 457 && iParam0 < 513)
	{
		iVar0 = unk_0x169039D5869899DA((iParam0 - 457), 1, 1, iParam1);
	}
	else if (iParam0 >= 1281 && iParam0 < 1305)
	{
		iVar0 = unk_0x169039D5869899DA((iParam0 - 1281), 0, 0, 0);
	}
	else if (iParam0 >= 1305 && iParam0 < 1361)
	{
		iVar0 = unk_0x169039D5869899DA((iParam0 - 1305), 1, 0, 0);
	}
	else if (iParam0 >= 1361 && iParam0 < 1393)
	{
		iVar0 = unk_0x33259517529FA9DD((iParam0 - 1361), 0, 0, 0);
	}
	else if (iParam0 >= 1393 && iParam0 < 2919)
	{
		iVar0 = unk_0x33259517529FA9DD((iParam0 - 1393), 0, 1, iParam1);
	}
	else if (iParam0 >= 4143 && iParam0 < 4207)
	{
		iVar0 = unk_0x7F2F9520C57D9D66((iParam0 - 4143), 0, 0, 0, "_NGPSTAT_INT");
	}
	else if (iParam0 >= 3879 && iParam0 < 4143)
	{
		iVar0 = unk_0x7F2F9520C57D9D66((iParam0 - 3879), 0, 1, iParam1, "_NGPSTAT_INT");
	}
	else if (iParam0 >= 4399 && iParam0 < 6028)
	{
		iVar0 = unk_0x7F2F9520C57D9D66((iParam0 - 4399), 0, 1, iParam1, "_LRPSTAT_INT");
	}
	else if (iParam0 >= 6413 && iParam0 < 7262)
	{
		iVar0 = unk_0x7F2F9520C57D9D66((iParam0 - 6413), 0, 1, iParam1, "_APAPSTAT_INT");
	}
	else if (iParam0 >= 7262 && iParam0 < 7313)
	{
		iVar0 = unk_0x7F2F9520C57D9D66((iParam0 - 7262), 0, 1, iParam1, "_LR2PSTAT_INT");
	}
	else if (iParam0 >= 7681 && iParam0 < 9361)
	{
		iVar0 = unk_0x7F2F9520C57D9D66((iParam0 - 7681), 0, 1, iParam1, "_BIKEPSTAT_INT");
	}
	else if (iParam0 >= 9553 && iParam0 < 15265)
	{
		iVar0 = unk_0x7F2F9520C57D9D66((iParam0 - 9553), 0, 1, iParam1, "_IMPEXPPSTAT_INT");
	}
	else if (iParam0 >= 15265 && iParam0 < 15369)
	{
		iVar0 = unk_0x7F2F9520C57D9D66((iParam0 - 15265), 0, 1, iParam1, "_GUNRPSTAT_INT");
	}
	else if (iParam0 >= 7313 && iParam0 < 7321)
	{
		iVar0 = unk_0x7F2F9520C57D9D66((iParam0 - 7313), 0, 0, 0, "_NGDLCPSTAT_INT");
	}
	else if (iParam0 >= 7641 && iParam0 < 7681)
	{
		iVar0 = unk_0x7F2F9520C57D9D66((iParam0 - 7641), 0, 1, iParam1, "_NGDLCPSTAT_INT");
	}
	else if (iParam0 >= 16010 && iParam0 < 18098)
	{
		iVar0 = unk_0x7F2F9520C57D9D66((iParam0 - 16010), 0, 1, iParam1, "_DLCSMUGCHARPSTAT_INT");
	}
	else if (iParam0 >= 18162 && iParam0 < 19018)
	{
		iVar0 = unk_0x7F2F9520C57D9D66((iParam0 - 18162), 0, 1, iParam1, "_GANGOPSPSTAT_INT");
	}
	else if (iParam0 >= 19018 && iParam0 < 22066)
	{
		iVar0 = unk_0x7F2F9520C57D9D66((iParam0 - 19018), 0, 1, iParam1, "_BUSINESSBATPSTAT_INT");
	}
	else if (iParam0 >= 22194 && iParam0 < 24962)
	{
		iVar0 = unk_0x7F2F9520C57D9D66((iParam0 - 22194), 0, 1, iParam1, "_ARENAWARSPSTAT_INT");
	}
	else if (iParam0 >= 25538 && iParam0 < 26810)
	{
		iVar0 = unk_0x7F2F9520C57D9D66((iParam0 - 25538), 0, 1, iParam1, "_CASINOPSTAT_INT");
	}
	else if (iParam0 >= 27258 && iParam0 < 28098)
	{
		iVar0 = unk_0x7F2F9520C57D9D66((iParam0 - 27258), 0, 1, iParam1, "_CASINOHSTPSTAT_INT");
	}
	else if (iParam0 >= 28483 && iParam0 < 30227)
	{
		iVar0 = unk_0x7F2F9520C57D9D66((iParam0 - 28483), 0, 1, iParam1, "_SU20PSTAT_INT");
	}
	else if (iParam0 >= 30483 && iParam0 < 30515)
	{
		iVar0 = unk_0x7F2F9520C57D9D66((iParam0 - 30483), 0, 1, iParam1, "_HISLANDPSTAT_INT");
	}
	return iVar0;
}

bool func_31()
{
	return (!unk_0xCE990E643CD9D0E5(Global_1590682[unk_0x460153A63B9477BC() /*883*/].f_859, 4) && !func_32());
}

bool func_32()
{
	return ((Global_4456448.f_74284 == 6 || Global_4456448.f_74284 == 7) && Global_4456448.f_2 == 20);
}

bool func_33()
{
	return Global_74030;
}

int func_34(int iParam0)
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

int func_35(int iParam0)
{
	if (func_54(iParam0))
	{
		switch (iParam0->f_2)
		{
			case joaat("akula"):
				return func_28(19004, -1, -1) < 3;
			}
		
		default:
	}
	return 1;
}

void func_36()
{
	if (!unk_0xDABD547F0DF2906C())
	{
		func_37("STEALTH_WARN", 3000);
	}
}

void func_37(char* sParam0, int iParam1)
{
	unk_0x17751E107423AFE9(sParam0);
	unk_0x1A169149B3D18FCB(0, 0, true, iParam1);
}

int func_38(int iParam0)
{
	int iVar0;
	
	if (func_34(0) || func_33())
	{
		return 0;
	}
	iVar0 = func_39(iParam0);
	switch (iVar0)
	{
		case 1:
			if ((unk_0x79800E51B3B6D197(0, 114) || unk_0x79800E51B3B6D197(0, 99)) || unk_0x79800E51B3B6D197(0, 100))
			{
				return 1;
			}
			break;
		
		case 0:
			if (unk_0x79800E51B3B6D197(0, 114))
			{
				return 1;
			}
			break;
		
		case 2:
			if (unk_0x79800E51B3B6D197(0, 92))
			{
				return 1;
			}
			break;
		
		case 3:
			if (unk_0x79800E51B3B6D197(0, 68))
			{
				return 1;
			}
			break;
	}
	return 0;
}

int func_39(int iParam0)
{
	if (!func_40(iParam0))
	{
		return 4;
	}
	switch (iParam0->f_2)
	{
		case joaat("akula"):
		case joaat("annihilator2"):
			switch (iParam0->f_4)
			{
				case -1:
					return 1;
				
				case 0:
					return 2;
				
				default:
			}
			return 4;
		
		default:
	}
	return 4;
}

bool func_40(int iParam0)
{
	return (unk_0xAE06B9E39EBDE049(unk_0x9B0761B4C3EB8BC7()) && !unk_0xA59F96B50B97E63C(unk_0x9B0761B4C3EB8BC7(), 0));
}

void func_41()
{
	unk_0x779660A9E5364C4D(0, 24, 1);
	unk_0x779660A9E5364C4D(0, 66, 1);
	unk_0x779660A9E5364C4D(0, 67, 1);
	unk_0x779660A9E5364C4D(0, 68, 1);
	unk_0x779660A9E5364C4D(0, 114, 1);
	unk_0x779660A9E5364C4D(0, 69, 1);
	unk_0x779660A9E5364C4D(0, 70, 1);
	unk_0x779660A9E5364C4D(0, 91, 1);
	unk_0x779660A9E5364C4D(0, 92, 1);
	unk_0x779660A9E5364C4D(0, 99, 1);
	unk_0x779660A9E5364C4D(0, 100, 1);
	unk_0x779660A9E5364C4D(0, 37, 1);
}

void func_42(int iParam0)
{
	int iVar0;
	
	if (((((((!func_9(&(iParam0->f_6), 0) && !func_9(&(iParam0->f_6), 1)) && !unk_0xDABD547F0DF2906C()) && func_9(&(iParam0->f_6), 3)) && !func_34(0)) && !func_33()) && func_31()) && unk_0xAE06B9E39EBDE049(unk_0x10D3F7E169A49C44(iParam0->f_1, -1, 0)))
	{
		iVar0 = func_23(iParam0->f_6.f_2, 3333, 10000);
		iParam0->f_6.f_2 = 0;
		if (func_54(iParam0))
		{
			func_37(func_43(iParam0), iVar0);
		}
		else
		{
			func_21(func_43(iParam0), func_15(iParam0->f_2), func_15(iParam0->f_2), iVar0);
		}
		func_49(iParam0);
		func_24(&(iParam0->f_6), 0);
	}
}

char* func_43(int iParam0)
{
	if (func_54(iParam0))
	{
		return "STEALTH_ON";
	}
	return "STEALTH_ON_P";
}

void func_44(int iParam0, int iParam1)
{
	if (func_53(iParam0))
	{
		return;
	}
	if (unk_0xB9FD7D4438BECDFC() != iParam1)
	{
		unk_0x53797676AD34A9AA(iParam1);
	}
	if (unk_0x1A3D0DF92BF7D8C4(unk_0x460153A63B9477BC()) > iParam1)
	{
		unk_0xCAD5C18968E57C30(unk_0x460153A63B9477BC(), iParam1, 0);
	}
}

bool func_45(int iParam0)
{
	return (!func_9(iParam0, 0) && func_9(iParam0, 1));
}

void func_46(int iParam0)
{
	func_5(&(iParam0->f_6), 0);
	if (func_10(iParam0))
	{
		unk_0xD289B55B6AADBA10(1);
	}
	if (!func_54(iParam0))
	{
		if (func_52(iParam0))
		{
			func_5(&(iParam0->f_6), 1);
		}
		else
		{
			func_5(&(iParam0->f_6), 2);
		}
	}
}

void func_47()
{
	unk_0xBE20AB8238688965(&(Global_1590682[unk_0x460153A63B9477BC() /*883*/].f_859), 1);
}

bool func_48(int iParam0)
{
	return (func_9(iParam0, 0) && !func_9(iParam0, 1));
}

void func_49(int iParam0)
{
	func_24(&(iParam0->f_6), 1);
}

void func_50(int iParam0, bool bParam1, int iParam2)
{
	switch (iParam0->f_2)
	{
		case joaat("akula"):
		case joaat("annihilator2"):
			unk_0xCCDB409D29C7F28D(iParam0->f_1, !bParam1, iParam2);
			break;
	}
}

bool func_51()
{
	return unk_0xCE990E643CD9D0E5(Global_1590682[unk_0x460153A63B9477BC() /*883*/].f_859, 3);
}

bool func_52(int iParam0)
{
	return func_9(iParam0, 0);
}

bool func_53(int iParam0)
{
	return func_9(iParam0, 2);
}

bool func_54(int iParam0)
{
	return ((func_40(iParam0) && iParam0->f_3 == unk_0x9B0761B4C3EB8BC7()) || unk_0x10D3F7E169A49C44(iParam0->f_1, -1, 0) == unk_0x9B0761B4C3EB8BC7());
}

void func_55(int iParam0)
{
	if (func_10(iParam0) && (func_34(0) || func_33()))
	{
		iParam0->f_6.f_2 = 1;
		unk_0xD289B55B6AADBA10(1);
		func_5(&(iParam0->f_6), 0);
		if (func_52(iParam0))
		{
			func_5(&(iParam0->f_6), 1);
		}
		else
		{
			func_5(&(iParam0->f_6), 2);
			if (func_54(iParam0))
			{
				func_25(iParam0, -1);
			}
		}
	}
}

void func_56(int iParam0)
{
	if (func_52(iParam0))
	{
		if (func_8(iParam0))
		{
			if (func_58())
			{
				func_4(iParam0);
			}
		}
		else if (!func_58())
		{
			func_57(iParam0);
		}
	}
	else if (func_8(iParam0))
	{
		func_4(iParam0);
	}
	unk_0xD2459066EA58CE43(&(Global_1590682[unk_0x460153A63B9477BC() /*883*/].f_859), 2);
}

void func_57(int iParam0)
{
	func_7(1, 1);
	func_6(1, -1, 1);
	func_24(&(iParam0->f_6), 5);
}

bool func_58()
{
	return unk_0xCE990E643CD9D0E5(Global_1590682[unk_0x460153A63B9477BC() /*883*/].f_859, 2);
}

int func_59(int iParam0)
{
	if (!func_40(iParam0))
	{
		return 1;
	}
	if (!func_68(iParam0))
	{
		return 1;
	}
	if (!func_67(iParam0->f_2))
	{
		return 1;
	}
	if (func_66(unk_0x460153A63B9477BC(), 1, 1))
	{
		return 1;
	}
	if (func_65(unk_0x460153A63B9477BC()))
	{
		return 1;
	}
	if (func_62(unk_0x460153A63B9477BC()))
	{
		return 1;
	}
	if (func_60(unk_0x460153A63B9477BC()))
	{
		return 1;
	}
	return 0;
}

int func_60(int iParam0)
{
	if (iParam0 > -1)
	{
		if (Global_2425869[iParam0 /*443*/].f_240 > -1)
		{
			if (func_61(Global_2425869[iParam0 /*443*/].f_240) == 4)
			{
				return 1;
			}
		}
		if (unk_0xCE990E643CD9D0E5(Global_2425869[iParam0 /*443*/].f_199, 4))
		{
			return 1;
		}
	}
	return 0;
}

int func_61(int iParam0)
{
	switch (iParam0)
	{
		case -1:
			return 6;
			break;
		
		case 0:
			return 0;
			break;
		
		case 1:
			return 0;
			break;
		
		case 2:
			return 0;
			break;
		
		case 3:
			return 0;
			break;
		
		case 4:
			return 0;
			break;
		
		case 5:
			return 0;
			break;
		
		case 6:
			return 0;
			break;
		
		case 50:
			return 0;
			break;
		
		case 7:
			return 1;
			break;
		
		case 8:
			return 1;
			break;
		
		case 9:
			return 1;
			break;
		
		case 10:
			return 1;
			break;
		
		case 11:
			return 1;
			break;
		
		case 12:
			return 1;
			break;
		
		case 13:
			return 1;
			break;
		
		case 14:
			return 1;
			break;
		
		case 15:
			return 1;
			break;
		
		case 16:
			return 1;
			break;
		
		case 17:
			return 1;
			break;
		
		case 18:
			return 1;
			break;
		
		case 19:
			return 1;
			break;
		
		case 20:
			return 1;
			break;
		
		case 21:
			return 1;
			break;
		
		case 22:
			return 2;
			break;
		
		case 23:
			return 2;
			break;
		
		case 24:
			return 2;
			break;
		
		case 25:
			return 2;
			break;
		
		case 26:
			return 2;
			break;
		
		case 27:
			return 2;
			break;
		
		case 28:
			return 3;
			break;
		
		case 29:
			return 3;
			break;
		
		case 30:
			return 3;
			break;
		
		case 31:
			return 3;
			break;
		
		case 32:
			return 3;
			break;
		
		case 33:
			return 3;
			break;
		
		case 34:
			return 3;
			break;
		
		case 35:
			return 3;
			break;
		
		case 36:
			return 3;
			break;
		
		case 37:
			return 3;
			break;
		
		case 38:
			return 3;
			break;
		
		case 39:
			return 4;
			break;
		
		case 40:
			return 4;
			break;
		
		case 41:
			return 4;
			break;
		
		case 42:
			return 4;
			break;
		
		case 43:
			return 4;
			break;
		
		case 44:
			return 4;
			break;
		
		case 45:
			return 5;
			break;
		
		case 46:
			return 3;
			break;
		
		case 47:
			return 3;
			break;
		
		case 48:
			return 3;
			break;
		
		case 49:
			return 3;
			break;
		
		case 52:
			return 3;
			break;
		
		case 51:
			return 1;
			break;
		
		case 53:
			return 3;
			break;
	}
	return 6;
}

int func_62(int iParam0)
{
	if (iParam0 != func_64() && func_63(iParam0, 1, 1))
	{
		return unk_0xCE990E643CD9D0E5(Global_2425869[iParam0 /*443*/].f_314, 3);
	}
	return 0;
}

int func_63(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		if (unk_0x166E920FB00B2DBB(iParam0))
		{
			if (bParam1)
			{
				if (!unk_0x5A228A6A51E757C8(iParam0))
				{
					return 0;
				}
			}
			if (bParam2)
			{
				if (!Global_2440049.f_3[iVar0])
				{
					return 0;
				}
			}
			return 1;
		}
	}
	return 0;
}

int func_64()
{
	return -1;
}

int func_65(int iParam0)
{
	if (unk_0xCE990E643CD9D0E5(Global_1590682[iParam0 /*883*/].f_274.f_26, 14))
	{
		return 1;
	}
	if (unk_0xCE990E643CD9D0E5(Global_1590682[iParam0 /*883*/].f_274.f_26, 11))
	{
		return 1;
	}
	return 0;
}

int func_66(int iParam0, bool bParam1, bool bParam2)
{
	if (iParam0 == func_64())
	{
		return 0;
	}
	if (unk_0xCE990E643CD9D0E5(Global_1590682[iParam0 /*883*/].f_274.f_26, 0))
	{
		return 1;
	}
	if (bParam1)
	{
		if (unk_0xCE990E643CD9D0E5(Global_1590682[iParam0 /*883*/].f_274.f_26, 1))
		{
			return 1;
		}
	}
	if (bParam2)
	{
		if (Global_2425869[iParam0 /*443*/].f_314.f_6 != -1)
		{
			return 1;
		}
	}
	return 0;
}

int func_67(int iParam0)
{
	switch (iParam0)
	{
		case joaat("akula"):
		case joaat("annihilator2"):
			return 1;
		
		default:
	}
	return 0;
}

bool func_68(int iParam0)
{
	return (unk_0xAE06B9E39EBDE049(iParam0->f_1) && unk_0x80FF6C016CDB0FAF(iParam0->f_1, 0));
}

void func_69(int iParam0)
{
	bool bVar0;
	bool bVar1;
	int iVar2;
	
	bVar0 = func_9(iParam0, 4);
	bVar1 = func_9(iParam0, 0);
	func_80(iParam0);
	if (bVar0)
	{
		func_24(iParam0, 3);
	}
	else
	{
		func_5(iParam0, 3);
	}
	if (bVar1)
	{
		func_24(iParam0, 1);
	}
	else
	{
		func_5(iParam0, 1);
	}
	if (func_40(iParam0))
	{
		if (unk_0x47DBF174A0CB9D55(unk_0x9B0761B4C3EB8BC7(), false))
		{
			iParam0->f_1 = unk_0xB0919F8F7C8097BD(unk_0x9B0761B4C3EB8BC7());
			if (func_68(iParam0))
			{
				iParam0->f_2 = unk_0x36FE6D3220816ADA(iParam0->f_1);
				if (unk_0xA4E17AE82A76F738(unk_0x9B0761B4C3EB8BC7(), 2))
				{
					func_24(iParam0, 2);
				}
			}
		}
	}
	if (func_68(iParam0))
	{
		if (!unk_0xB064AF9925F5537B(iParam0->f_1, -1, 0))
		{
			iVar2 = unk_0x10D3F7E169A49C44(iParam0->f_1, -1, 0);
			if ((unk_0xAE06B9E39EBDE049(iVar2) && !unk_0xA59F96B50B97E63C(iVar2, 0)) && unk_0xD0390A93AF3907B8(iVar2))
			{
				iParam0->f_3 = iVar2;
				if (iVar2 == unk_0x9B0761B4C3EB8BC7())
				{
					func_24(iParam0, 4);
					if (!func_9(iParam0, 3))
					{
						func_24(&(iParam0->f_6), 6);
					}
				}
			}
		}
		if (func_40(iParam0))
		{
			iParam0->f_4 = func_79(unk_0x9B0761B4C3EB8BC7(), 0);
		}
		if (func_54(iParam0))
		{
			if (func_78() && func_72(iParam0))
			{
				func_24(iParam0, 0);
			}
		}
		else
		{
			func_70(iParam0);
		}
	}
	if (func_48(iParam0))
	{
		iParam0->f_6.f_3 = unk_0x6CAAB7E78B5D978A();
	}
}

void func_70(int iParam0)
{
	if (unk_0xAE06B9E39EBDE049(iParam0->f_3) && func_71(unk_0xE4400E48E081F17A(iParam0->f_3)))
	{
		func_24(iParam0, 0);
	}
	else
	{
		func_5(iParam0, 0);
	}
}

bool func_71(int iParam0)
{
	return (iParam0 != -1 && unk_0xCE990E643CD9D0E5(Global_1590682[iParam0 /*883*/].f_859, 1));
}

bool func_72(int iParam0)
{
	bool bVar0;
	
	bVar0 = func_77();
	if (unk_0xAA5B806352173DEA(iParam0->f_1))
	{
		func_76(iParam0);
		switch (iParam0->f_2)
		{
			case joaat("akula"):
			case joaat("annihilator2"):
				bVar0 = !unk_0x671A13F577C24EF6(iParam0->f_1);
				break;
		}
	}
	else if (func_75(iParam0))
	{
		if (func_74(iParam0))
		{
			unk_0xDE298EE8EAAC0776(iParam0->f_1);
		}
	}
	else
	{
		func_73(iParam0);
	}
	return bVar0;
}

void func_73(var uParam0)
{
	func_24(&(uParam0->f_6), 4);
	uParam0->f_6.f_1 = unk_0x578C4EF320340AF7();
}

bool func_74(var uParam0)
{
	return (unk_0x578C4EF320340AF7() - uParam0->f_6.f_1) >= 200;
}

bool func_75(var uParam0)
{
	return func_9(&(uParam0->f_6), 4);
}

void func_76(var uParam0)
{
	func_5(&(uParam0->f_6), 4);
}

bool func_77()
{
	return unk_0xCE990E643CD9D0E5(Global_1590682[unk_0x460153A63B9477BC() /*883*/].f_859, 1);
}

bool func_78()
{
	return !func_32();
}

int func_79(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (!unk_0x5AEB5DDFFAD43CA5(iParam0))
	{
		if (unk_0x47DBF174A0CB9D55(iParam0, bParam1))
		{
			iVar0 = unk_0xA5D5B1042E8F47BD(iParam0, bParam1);
			if (unk_0xAE06B9E39EBDE049(iVar0))
			{
				iVar1 = unk_0x112A81273D7187A5(unk_0x36FE6D3220816ADA(iVar0));
				if (iVar1 == 1)
				{
					iVar3 = -1;
					return iVar3;
				}
				iVar2 = 0;
				while (iVar2 < iVar1)
				{
					iVar3 = (iVar2 - 1);
					if (!unk_0xB064AF9925F5537B(iVar0, iVar3, 0))
					{
						if (unk_0x10D3F7E169A49C44(iVar0, iVar3, 0) == iParam0)
						{
							return iVar3;
						}
					}
					iVar2++;
				}
			}
		}
	}
	return iVar3;
}

void func_80(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_3 = 0;
	uParam0->f_2 = 0;
	uParam0->f_4 = -1;
}

int func_81()
{
	if (func_82())
	{
		return 1;
	}
	return 0;
}

int func_82()
{
	var uVar0;
	
	func_90(&uVar0);
	if (Global_1312872 == 0)
	{
		if (!unk_0x25DDB354A40FFCDB())
		{
			return 1;
		}
	}
	if (func_89())
	{
		return 1;
	}
	if (Global_2464493)
	{
		return 1;
	}
	if (func_88())
	{
		return 1;
	}
	if (func_87(159))
	{
		if (!func_86())
		{
			return 1;
		}
	}
	if (func_87(157))
	{
		return 1;
	}
	if (!unk_0x0EB6C63A09FD9DF1())
	{
		return 1;
	}
	if (func_83() != 0)
	{
		if (unk_0x7B70881748D166CD(func_83()) == 0)
		{
			return 1;
		}
	}
	return 0;
}

int func_83()
{
	switch (func_85())
	{
		case 0:
			return func_84();
			break;
		
		case 2:
			return joaat("creator");
			break;
	}
	return 0;
}

int func_84()
{
	switch (Global_2464595)
	{
		case 0:
			return joaat("freemode");
		
		default:
	}
	return joaat("freemode");
}

int func_85()
{
	return Global_30968;
}

bool func_86()
{
	return Global_2451787.f_696;
}

int func_87(int iParam0)
{
	if (unk_0x16F1FCCC54559709(1, iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_88()
{
	return Global_2462250;
}

bool func_89()
{
	return Global_2451787.f_691;
}

void func_90(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<3> Var3;
	
	iVar0 = 0;
	while (iVar0 < unk_0x2AC1C68C7CCA90E5(1))
	{
		iVar1 = unk_0x39BE1B4CEB4DAEC8(1, iVar0);
		if (iVar1 == 174)
		{
			unk_0x477FAFFE21935947(1, iVar0, &iVar2, 2);
			switch (iVar2)
			{
				case 1035596089:
					func_91(iVar0);
					break;
				
				case 1120313136:
					unk_0x477FAFFE21935947(1, iVar0, &Var3, 4);
					if (Var3.f_2 == 397890833)
					{
						*uParam0 = 1;
					}
					break;
				}
		}
		iVar0++;
	}
}

void func_91(int iParam0)
{
	struct<3> Var0;
	int iVar1;
	int iVar2;
	bool bVar3;
	
	if (unk_0x477FAFFE21935947(1, iParam0, &Var0, 3))
	{
		if (func_63(Var0.f_1, 1, 1))
		{
			iVar1 = unk_0x1FA7B77001D60F9D(Var0.f_1);
			if (unk_0xAE06B9E39EBDE049(iVar1))
			{
				if (unk_0x47DBF174A0CB9D55(iVar1, false))
				{
					iVar2 = unk_0xA5D5B1042E8F47BD(iVar1, false);
					if (unk_0x292280AF1BBBD6AC(iVar2, Var0.f_2) && unk_0x82CC259B7B4F4AD9())
					{
						if (func_92(iVar2, &bVar3))
						{
							unk_0xADCDA8AF77C0D19D(iVar2, Var0.f_2);
						}
						if (bVar3)
						{
							unk_0xE730EAF558C97567(&iVar2);
						}
					}
				}
			}
		}
	}
}

int func_92(int iParam0, var uParam1)
{
	if (unk_0xAE06B9E39EBDE049(iParam0))
	{
		if (!unk_0x1758275D343D5BA3(iParam0))
		{
			if (unk_0x38CC98C4A0688263(iParam0))
			{
				if (!unk_0xCA6AF782C906AC86(unk_0x36FE6D3220816ADA(iParam0)))
				{
					unk_0x4F3C4F457D44BB0F(iParam0, false, 1);
					*uParam1 = 1;
				}
			}
		}
		if (unk_0x1D2A3118784C0272(iParam0, 0))
		{
			if (unk_0xAA5B806352173DEA(iParam0))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_93(int iParam0)
{
	func_69(iParam0);
	if (func_68(iParam0))
	{
		if (func_54(iParam0))
		{
			if (unk_0xAA5B806352173DEA(iParam0->f_1))
			{
				if (!func_51())
				{
					func_50(iParam0, 0, 0);
				}
				else
				{
					func_24(&(iParam0->f_6), 3);
				}
			}
		}
		else
		{
			func_24(&(iParam0->f_6), 3);
		}
	}
	return 1;
}

