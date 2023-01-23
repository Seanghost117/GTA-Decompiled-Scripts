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
	var uLocal_45 = 0;
	int iLocal_46 = 0;
	int iLocal_47 = 0;
	int iLocal_48 = 0;
	int iLocal_49 = 0;
	int iLocal_50 = 0;
	int iLocal_51 = 0;
	int iLocal_52 = 0;
	int iLocal_53 = 0;
	int iLocal_54 = 0;
	int iLocal_55 = 0;
	int iLocal_56 = 0;
	int iLocal_57 = 0;
	int iLocal_58 = 0;
	int iLocal_59 = 0;
	int iLocal_60 = 0;
	int iLocal_61 = 0;
	int iLocal_62 = 0;
	int iLocal_63 = 0;
	int iLocal_64 = 0;
	int iLocal_65 = 0;
	int iLocal_66 = 0;
	int iLocal_67 = 0;
	int iLocal_68 = 0;
	int iLocal_69 = 0;
	int iLocal_70 = 0;
	int iLocal_71 = 0;
	int iLocal_72 = 0;
	int iLocal_73 = 0;
	int iLocal_74 = 0;
	int iLocal_75 = 0;
	int iLocal_76 = 0;
	int iLocal_77 = 0;
	float fLocal_78 = 0f;
	int iLocal_79 = 0;
	int iLocal_80[10] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_81 = 0;
	int iLocal_82 = 0;
	int iLocal_83 = 0;
	int iLocal_84 = 0;
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
	iLocal_46 = 1;
	iLocal_47 = 1;
	iLocal_48 = 1;
	iLocal_49 = 1;
	iLocal_50 = 1;
	iLocal_51 = 1;
	iLocal_52 = 1;
	iLocal_53 = 1;
	iLocal_54 = 1;
	iLocal_55 = 1;
	iLocal_56 = 1;
	iLocal_57 = 1;
	iLocal_58 = 1;
	iLocal_59 = 1;
	iLocal_60 = 1;
	iLocal_61 = 1;
	iLocal_62 = 1;
	iLocal_63 = 1;
	iLocal_64 = 1;
	iLocal_65 = 1;
	iLocal_66 = 1;
	iLocal_67 = joaat("bmx");
	iLocal_73 = 300000;
	fLocal_78 = 1f;
	if (unk_0xED06FD5709A59F02(34))
	{
		func_113();
	}
	Global_31216 = 0;
	Global_31215 = 0;
	Global_31217 = 0;
	Global_31218 = 0;
	Global_31220 = 0;
	Global_31219 = 0;
	func_112();
	while (true)
	{
		func_2();
		if (((unk_0x25DDB354A40FFCDB() && func_1(unk_0x460153A63B9477BC(), 1, 1)) && !Global_1574207) && Global_30968 == 0)
		{
			func_113();
		}
		wait(0);
	}
}

int func_1(int iParam0, bool bParam1, bool bParam2)
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

void func_2()
{
	func_88();
	func_68();
	func_22();
	func_3(iLocal_67);
}

void func_3(int iParam0)
{
	switch (iLocal_46)
	{
		case 0:
			break;
		
		case 1:
			break;
		
		case 2:
			if (unk_0xCE28B5EADA8A0CF9())
			{
				func_21("CHEAT_VEHICLE_SPAWN_DENIED");
				iLocal_46 = 1;
			}
			else
			{
				func_20(iParam0);
			}
			break;
		
		case 4:
			func_4(iParam0);
			break;
		
		default:
			break;
	}
}

void func_4(int iParam0)
{
	struct<3> Var0;
	float fVar1;
	bool bVar2;
	
	bVar2 = false;
	if (unk_0x7D167B9A0CCDA347(iParam0))
	{
		if (unk_0x5A228A6A51E757C8(unk_0x460153A63B9477BC()))
		{
			if (unk_0xAE06B9E39EBDE049(iLocal_68))
			{
				if (!unk_0xA59F96B50B97E63C(iLocal_68, 0))
				{
					if (unk_0xE0B3BC41DDA88DF0(unk_0x9B0761B4C3EB8BC7(), iLocal_68, 0))
					{
						Var0 = { unk_0x3E4D3CCC220BDFB1(iLocal_68, true) };
						fVar1 = unk_0xEF7858F25585F853(iLocal_68);
						unk_0x03D382CB0B44E2FC(unk_0x9B0761B4C3EB8BC7(), Var0.x, Var0.f_1, (Var0.f_2 + 4f), 1, 0, 0, 1);
						bVar2 = true;
					}
				}
				unk_0x03A2522C845CFAC6(&iLocal_68);
			}
			if (!bVar2)
			{
				if (iParam0 == joaat("duster") || iParam0 == joaat("stunt"))
				{
					Var0 = { unk_0x7EC595B99EA7C4B1(unk_0x9B0761B4C3EB8BC7(), -1.5f, 3.5f, 1f) };
				}
				else if (iParam0 == joaat("buzzard"))
				{
					Var0 = { unk_0x7EC595B99EA7C4B1(unk_0x9B0761B4C3EB8BC7(), 0f, 6f, 2f) };
				}
				else
				{
					Var0 = { unk_0x7EC595B99EA7C4B1(unk_0x9B0761B4C3EB8BC7(), 0f, 3.5f, 1f) };
				}
				fVar1 = (unk_0xEF7858F25585F853(unk_0x9B0761B4C3EB8BC7()) + 90f);
			}
			if (func_18(iParam0, Var0, fVar1))
			{
				iLocal_68 = unk_0xCE4780E24AFDFBF9(iParam0, Var0, fVar1, 0, 1, 0);
				unk_0xB11D151E210D4FAC(iLocal_68, 1084227584);
				unk_0x74528AC0906CBABE(iParam0);
				unk_0xE730EAF558C97567(&iLocal_68);
				func_16(iLocal_70);
				func_5(20);
			}
			else
			{
				unk_0x74528AC0906CBABE(iParam0);
				func_21("CHEAT_VEHICLE_SPAWN_DENIED");
			}
			iLocal_46 = 1;
		}
	}
}

void func_5(int iParam0)
{
	if (!func_15(14) && !func_14(""))
	{
		unk_0xBE20AB8238688965(&Global_31217, iParam0);
		Global_31220 = 1;
		func_6();
	}
}

void func_6()
{
	int iVar0;
	
	iVar0 = func_8();
	switch (iVar0)
	{
		case 0:
			func_7(joaat("SP0_TIMES_CHEATED"), 1);
			break;
		
		case 1:
			func_7(joaat("SP1_TIMES_CHEATED"), 1);
			break;
		
		case 2:
			func_7(joaat("SP2_TIMES_CHEATED"), 1);
			break;
	}
}

void func_7(int iParam0, int iParam1)
{
	int iVar0;
	
	unk_0xD2F202166691EDB2(iParam0, &iVar0, -1);
	iVar0 = (iVar0 + iParam1);
	unk_0x6000E4684CB4330B(iParam0, iVar0, 1);
}

int func_8()
{
	func_9();
	return Global_111858.f_2359.f_539.f_4321;
}

void func_9()
{
	int iVar0;
	
	if (unk_0xAE06B9E39EBDE049(unk_0x9B0761B4C3EB8BC7()))
	{
		if (func_12(Global_111858.f_2359.f_539.f_4321) != unk_0x36FE6D3220816ADA(unk_0x9B0761B4C3EB8BC7()))
		{
			iVar0 = func_11(unk_0x9B0761B4C3EB8BC7());
			if (func_10(iVar0) && (!func_15(14) || Global_110809))
			{
				if (Global_111858.f_2359.f_539.f_4321 != iVar0 && func_10(Global_111858.f_2359.f_539.f_4321))
				{
					Global_111858.f_2359.f_539.f_4322 = Global_111858.f_2359.f_539.f_4321;
				}
				Global_111858.f_2359.f_539.f_4323 = iVar0;
				Global_111858.f_2359.f_539.f_4321 = iVar0;
				return;
			}
		}
		else
		{
			if (Global_111858.f_2359.f_539.f_4321 != 145)
			{
				Global_111858.f_2359.f_539.f_4323 = Global_111858.f_2359.f_539.f_4321;
			}
			return;
		}
	}
	Global_111858.f_2359.f_539.f_4321 = 145;
}

bool func_10(int iParam0)
{
	return iParam0 < 3;
}

int func_11(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0xAE06B9E39EBDE049(iParam0))
	{
		iVar1 = unk_0x36FE6D3220816ADA(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_12(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_12(int iParam0)
{
	if (func_10(iParam0))
	{
		return func_13(iParam0);
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

var func_13(int iParam0)
{
	return Global_1848[iParam0 /*29*/];
}

int func_14(char* sParam0)
{
	if (iLocal_84 != 0)
	{
		if (func_15(14) && unk_0x87F0CB19476706C3())
		{
			if (unk_0xF005CCA4263DF67F(sParam0, "CHEAT_SUPER_JUMP") && unk_0xCE28B5EADA8A0CF9())
			{
				return 0;
			}
			if ((unk_0xF005CCA4263DF67F(sParam0, "CHEAT_GRAVITY_MOON") && !unk_0xA59F96B50B97E63C(unk_0x9B0761B4C3EB8BC7(), 0)) && unk_0xE72C9284B5143451(unk_0x9B0761B4C3EB8BC7()))
			{
				return 0;
			}
		}
		return 1;
	}
	return 0;
}

bool func_15(int iParam0)
{
	return Global_41631 == iParam0;
}

void func_16(int iParam0)
{
	if (func_14(""))
	{
	}
	else
	{
		unk_0x5B8DD855EAFD33B5("CHEAT_ACTIVATED");
		unk_0x6A826E35A3096ED0(iParam0);
		func_17(unk_0xD60C2975A14D763D(0, 1));
		unk_0x64AE0DA93273B549(iParam0);
	}
}

void func_17(int iParam0)
{
	iLocal_80[iLocal_81] = iParam0;
	iLocal_81++;
	if (iLocal_81 >= 10)
	{
		iLocal_81 = 0;
	}
}

int func_18(int iParam0, struct<3> Param1, float fParam2)
{
	struct<3> Var0[9];
	struct<3> Var1;
	struct<3> Var2;
	struct<3> Var3;
	var uVar4;
	var uVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	int iVar12;
	int iVar13;
	var uVar14;
	
	unk_0x140662B520844E45(iParam0, &Var1, &Var2);
	Var3.x = (unk_0x0D77CDCF403AEBD2((Var2.x - Var1.x)) / 2f);
	Var3.f_1 = (unk_0x0D77CDCF403AEBD2((Var2.f_1 - Var1.f_1)) / 2f);
	Var3.f_2 = (unk_0x0D77CDCF403AEBD2((Var2.f_2 - Var1.f_2)) / 2f);
	Var0[0 /*3*/] = { Param1 };
	Var0[1 /*3*/] = { unk_0x1BAE5C94E38E44FE(Param1, fParam2, -Var3.x, -Var3.f_1, -Var3.f_2) };
	Var0[2 /*3*/] = { unk_0x1BAE5C94E38E44FE(Param1, fParam2, Var3.x, -Var3.f_1, -Var3.f_2) };
	Var0[3 /*3*/] = { unk_0x1BAE5C94E38E44FE(Param1, fParam2, Var3.x, Var3.f_1, -Var3.f_2) };
	Var0[4 /*3*/] = { unk_0x1BAE5C94E38E44FE(Param1, fParam2, -Var3.x, Var3.f_1, -Var3.f_2) };
	Var0[5 /*3*/] = { unk_0x1BAE5C94E38E44FE(Param1, fParam2, -Var3.x, -Var3.f_1, Var3.f_2) };
	Var0[6 /*3*/] = { unk_0x1BAE5C94E38E44FE(Param1, fParam2, Var3.x, -Var3.f_1, Var3.f_2) };
	Var0[7 /*3*/] = { unk_0x1BAE5C94E38E44FE(Param1, fParam2, Var3.x, Var3.f_1, Var3.f_2) };
	Var0[8 /*3*/] = { unk_0x1BAE5C94E38E44FE(Param1, fParam2, -Var3.x, Var3.f_1, Var3.f_2) };
	if (!unk_0xECF201F09142F9D9(Param1))
	{
		return 0;
	}
	iVar13 = unk_0x00190B8DAB9274EF(func_19(unk_0x460153A63B9477BC()) + Vector(1f, 0f, 0f), Param1, 87, unk_0x9B0761B4C3EB8BC7(), 0);
	unk_0x0F0E6A09A9C90474(iVar13, &iVar6, &uVar4, &uVar5, &uVar14);
	if (iVar6 != 0)
	{
		return 0;
	}
	iVar7 = unk_0x00190B8DAB9274EF(Var0[1 /*3*/], Var0[3 /*3*/], 87, unk_0x9B0761B4C3EB8BC7(), 0);
	unk_0x0F0E6A09A9C90474(iVar7, &iVar6, &uVar4, &uVar5, &uVar14);
	if (iVar6 != 0)
	{
		return 0;
	}
	iVar8 = unk_0x00190B8DAB9274EF(Var0[2 /*3*/], Var0[4 /*3*/], 87, unk_0x9B0761B4C3EB8BC7(), 0);
	unk_0x0F0E6A09A9C90474(iVar8, &iVar6, &uVar4, &uVar5, &uVar14);
	if (iVar6 != 0)
	{
		return 0;
	}
	iVar9 = unk_0x00190B8DAB9274EF(Var0[5 /*3*/], Var0[7 /*3*/], 87, unk_0x9B0761B4C3EB8BC7(), 0);
	unk_0x0F0E6A09A9C90474(iVar9, &iVar6, &uVar4, &uVar5, &uVar14);
	if (iVar6 != 0)
	{
		return 0;
	}
	iVar10 = unk_0x00190B8DAB9274EF(Var0[6 /*3*/], Var0[8 /*3*/], 87, unk_0x9B0761B4C3EB8BC7(), 0);
	unk_0x0F0E6A09A9C90474(iVar10, &iVar6, &uVar4, &uVar5, &uVar14);
	if (iVar6 != 0)
	{
		return 0;
	}
	iVar11 = unk_0x00190B8DAB9274EF(Var0[1 /*3*/], Var0[8 /*3*/], 87, unk_0x9B0761B4C3EB8BC7(), 0);
	unk_0x0F0E6A09A9C90474(iVar11, &iVar6, &uVar4, &uVar5, &uVar14);
	if (iVar6 != 0)
	{
		return 0;
	}
	iVar12 = unk_0x00190B8DAB9274EF(Var0[2 /*3*/], Var0[7 /*3*/], 87, unk_0x9B0761B4C3EB8BC7(), 0);
	unk_0x0F0E6A09A9C90474(iVar12, &iVar6, &uVar4, &uVar5, &uVar14);
	if (iVar6 != 0)
	{
		return 0;
	}
	return 1;
}

Vector3 func_19(int iParam0)
{
	return unk_0x3E4D3CCC220BDFB1(unk_0x1FA7B77001D60F9D(iParam0), false);
}

void func_20(int iParam0)
{
	if (unk_0xA620E7D1DFDADB5C(iParam0))
	{
		unk_0x78FCB2E22C41B9D5(iParam0);
		if (unk_0x7D167B9A0CCDA347(iParam0))
		{
			iLocal_46 = 4;
		}
	}
}

void func_21(int iParam0)
{
	if (!func_15(14))
	{
		unk_0x5B8DD855EAFD33B5("CHEAT_DENIED");
		unk_0x6A826E35A3096ED0(iParam0);
		func_17(unk_0xD60C2975A14D763D(0, 1));
	}
}

void func_22()
{
	func_65();
	func_64();
	func_45();
	func_44();
	func_43();
	func_39();
	func_36();
	func_32();
	func_23();
}

void func_23()
{
	switch (iLocal_66)
	{
		case 1:
			break;
		
		case 4:
			func_31(19, 1);
			func_30();
			break;
		
		case 5:
			if ((((!unk_0x5A228A6A51E757C8(unk_0x460153A63B9477BC()) || func_28()) || func_27(23)) || func_27(21)) || func_27(19))
			{
				iLocal_66 = 9;
				return;
			}
			func_25();
			break;
		
		case 9:
			func_24("CHEAT_AIM_SLOW_MO");
			func_31(19, 0);
			unk_0x01BFF6CEF1167310(1f);
			iLocal_77 = 0;
			iLocal_66 = 1;
			break;
		
		default:
			break;
	}
}

void func_24(char* sParam0)
{
	if (func_14(sParam0))
	{
	}
	else
	{
		unk_0x5B8DD855EAFD33B5("CHEAT_DEACTIVATED");
		unk_0x6A826E35A3096ED0(sParam0);
		func_17(unk_0xD60C2975A14D763D(0, 1));
	}
}

void func_25()
{
	if (unk_0xEEB37DB9533AA764(unk_0x9B0761B4C3EB8BC7()))
	{
		if (unk_0x22D6FB6153F774D3(2, 25))
		{
			if (func_26(unk_0x9B0761B4C3EB8BC7()) != joaat("weapon_unarmed") && func_26(unk_0x9B0761B4C3EB8BC7()) != joaat("object"))
			{
				unk_0x01BFF6CEF1167310(fLocal_78);
			}
			else
			{
				unk_0x01BFF6CEF1167310(1f);
			}
		}
		else
		{
			unk_0x01BFF6CEF1167310(1f);
		}
	}
}

int func_26(int iParam0)
{
	var uVar0;
	
	unk_0x1386E5E658CE3032(iParam0, &uVar0, 1);
	return uVar0;
}

int func_27(int iParam0)
{
	if (unk_0xCE990E643CD9D0E5(Global_31215, iParam0))
	{
		return 1;
	}
	return 0;
}

int func_28()
{
	if (((((((func_15(0) || func_15(11)) || func_15(4)) || func_15(9)) || func_15(10)) || func_15(3)) || func_15(2)) || func_29(35))
	{
		return 1;
	}
	return 0;
}

int func_29(int iParam0)
{
	if (iParam0 == 146 || iParam0 == -1)
	{
		return 0;
	}
	return Global_111858.f_9081.f_99.f_58[iParam0];
}

void func_30()
{
	iLocal_77++;
	if (iLocal_77 > 3)
	{
		iLocal_77 = 0;
		iLocal_66 = 9;
		return;
	}
	switch (iLocal_77)
	{
		case 1:
			func_16("CHEAT_AIM_SLOW_MO1");
			fLocal_78 = 0.6f;
			break;
		
		case 2:
			func_16("CHEAT_AIM_SLOW_MO2");
			fLocal_78 = 0.4f;
			break;
		
		case 3:
			func_16("CHEAT_AIM_SLOW_MO3");
			fLocal_78 = 0.2f;
			break;
		
		default:
			break;
	}
	iLocal_66 = 5;
}

void func_31(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		unk_0xBE20AB8238688965(&Global_31216, iParam0);
		func_5(iParam0);
	}
	else
	{
		unk_0xD2459066EA58CE43(&Global_31216, iParam0);
	}
}

void func_32()
{
	switch (iLocal_63)
	{
		case 1:
			break;
		
		case 4:
			func_31(16, 1);
			func_35();
			break;
		
		case 5:
			unk_0x779660A9E5364C4D(2, 37, 1);
			unk_0x779660A9E5364C4D(2, 19, 1);
			if ((((((((!unk_0x5A228A6A51E757C8(unk_0x460153A63B9477BC()) || func_28()) || func_34()) || func_33(1)) || unk_0x79800E51B3B6D197(2, 37)) || unk_0x79800E51B3B6D197(2, 19)) || func_27(23)) || func_27(21)) || func_27(16))
			{
				iLocal_63 = 9;
			}
			break;
		
		case 9:
			unk_0x779660A9E5364C4D(2, 37, 1);
			unk_0x779660A9E5364C4D(2, 19, 1);
			func_24("CHEAT_SLOW_MO");
			func_31(16, 0);
			iLocal_76 = 0;
			unk_0x01BFF6CEF1167310(1f);
			iLocal_63 = 1;
			break;
		
		default:
			break;
	}
}

bool func_33(bool bParam0)
{
	if (bParam0)
	{
		return (Global_22411.f_4 && Global_22411.f_104 == 4);
	}
	return Global_22411.f_4;
}

int func_34()
{
	if (!unk_0x25DDB354A40FFCDB())
	{
		return Global_96433.f_44 == 1;
	}
	return 0;
}

void func_35()
{
	iLocal_76++;
	if (iLocal_76 > 3)
	{
		iLocal_63 = 9;
		return;
	}
	switch (iLocal_76)
	{
		case 1:
			func_16("CHEAT_SLOW_MO1");
			unk_0x01BFF6CEF1167310(0.6f);
			break;
		
		case 2:
			func_16("CHEAT_SLOW_MO2");
			unk_0x01BFF6CEF1167310(0.4f);
			break;
		
		case 3:
			func_16("CHEAT_SLOW_MO3");
			unk_0x01BFF6CEF1167310(0.2f);
			break;
		
		default:
			break;
	}
	iLocal_63 = 5;
}

void func_36()
{
	struct<3> Var0;
	float fVar1;
	float fVar2;
	
	switch (iLocal_64)
	{
		case 1:
			break;
		
		case 2:
			func_31(17, 1);
			unk_0x6A8F948698B360B4(unk_0x9B0761B4C3EB8BC7(), true);
			unk_0xBF70D1B666A353F5(unk_0x460153A63B9477BC(), 1);
			unk_0x52090984B5C8A3E4(unk_0x9B0761B4C3EB8BC7(), true, true, true, true, true, 0, 0, 0);
			unk_0x92BD213E6A0E666B(unk_0x9B0761B4C3EB8BC7(), joaat("gadget_parachute"), 1, false, true);
			Var0 = { unk_0x3E4D3CCC220BDFB1(unk_0x9B0761B4C3EB8BC7(), true) };
			fVar1 = unk_0xEF7858F25585F853(unk_0x9B0761B4C3EB8BC7());
			unk_0xE5CC8E2D904E42CE(Var0, &fVar2, 0, 0);
			fVar2 = (fVar2 + 500f);
			unk_0x03D382CB0B44E2FC(unk_0x9B0761B4C3EB8BC7(), Var0.x, Var0.f_1, fVar2, 1, 0, 0, 1);
			unk_0xE922BAA80E8F9324(unk_0x9B0761B4C3EB8BC7(), fVar1);
			iLocal_72 = unk_0x578C4EF320340AF7();
			unk_0x1D40553EDD51A1B8(0);
			iLocal_64 = 3;
			break;
		
		case 3:
			if (func_38(1000, iLocal_72))
			{
				unk_0x6A8F948698B360B4(unk_0x9B0761B4C3EB8BC7(), false);
				unk_0xDDEDC06C88DA4E04(unk_0x460153A63B9477BC(), true, 0);
				iLocal_72 = unk_0x578C4EF320340AF7();
				iLocal_64 = 4;
			}
			break;
		
		case 4:
			if (func_38(1000, iLocal_72))
			{
				unk_0x779660A9E5364C4D(0, 144, 1);
				unk_0x779660A9E5364C4D(0, 149, 1);
				if (func_8() == 0)
				{
					unk_0x45F588C0DD767737(unk_0x9B0761B4C3EB8BC7(), 9, 0, 0, 0);
				}
				else
				{
					unk_0x45F588C0DD767737(unk_0x9B0761B4C3EB8BC7(), 8, 0, 0, 0);
				}
				unk_0xFD45D90342D2A0CD(250);
				iLocal_72 = unk_0x578C4EF320340AF7();
				func_16("CHEAT_SKYFALL");
				unk_0x076EA622594A949E(2);
				iLocal_64 = 5;
			}
			break;
		
		case 5:
			if ((((!unk_0x5A228A6A51E757C8(unk_0x460153A63B9477BC()) || func_28()) || func_27(23)) || func_27(21)) || func_27(17))
			{
				iLocal_64 = 9;
				break;
			}
			unk_0x779660A9E5364C4D(0, 144, 1);
			unk_0x4CB4237D8858ADA6(2);
			if (unk_0xAACBFCE60AF94F2D(unk_0x9B0761B4C3EB8BC7()))
			{
				unk_0x8B77B020136E915A(unk_0x9B0761B4C3EB8BC7(), 1, 0f, 200f, 2.5f, 0f, 0f, 0f, 0, 1, 0, 0, 0, 1);
				if (unk_0x4162501391EDB9BF(unk_0x9B0761B4C3EB8BC7()))
				{
					iLocal_64 = 9;
				}
			}
			else
			{
				iLocal_64 = 9;
			}
			break;
		
		case 9:
			func_37();
			func_24("CHEAT_SKYFALL");
			func_31(17, 0);
			iLocal_64 = 1;
			break;
		
		default:
			break;
	}
}

void func_37()
{
	if (!unk_0x5AEB5DDFFAD43CA5(unk_0x9B0761B4C3EB8BC7()))
	{
		unk_0x5EB178758AAA183E(unk_0x9B0761B4C3EB8BC7(), joaat("gadget_parachute"));
	}
	if (iLocal_62 != 5)
	{
		unk_0xBF70D1B666A353F5(unk_0x460153A63B9477BC(), 0);
		unk_0x52090984B5C8A3E4(unk_0x9B0761B4C3EB8BC7(), false, false, false, false, false, 0, 0, 0);
	}
	unk_0x076EA622594A949E(0);
}

int func_38(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = unk_0x578C4EF320340AF7();
	iVar1 = (iVar0 - iParam0);
	if (iVar1 > iParam1)
	{
		return 1;
	}
	return 0;
}

void func_39()
{
	struct<3> Var0;
	
	switch (iLocal_62)
	{
		case 1:
			break;
		
		case 4:
			func_16("CHEAT_INVINCIBILITY");
			func_31(15, 1);
			iLocal_62 = 5;
			iLocal_74 = unk_0x578C4EF320340AF7();
			unk_0xBF70D1B666A353F5(unk_0x460153A63B9477BC(), 1);
			unk_0x52090984B5C8A3E4(unk_0x9B0761B4C3EB8BC7(), true, true, true, true, true, 0, 0, 0);
			break;
		
		case 5:
			if (!unk_0x5A228A6A51E757C8(unk_0x460153A63B9477BC()) || unk_0x5AEB5DDFFAD43CA5(unk_0x9B0761B4C3EB8BC7()))
			{
				iLocal_62 = 9;
				return;
			}
			Var0 = { func_19(unk_0x460153A63B9477BC()) };
			if (((((func_28() || func_34()) || func_27(23)) || func_27(21)) || func_27(15)) || Var0.f_2 <= -170f)
			{
				iLocal_62 = 9;
				return;
			}
			iLocal_75 = (unk_0x578C4EF320340AF7() - iLocal_74);
			if (unk_0x7B70881748D166CD(joaat("appinternet")) == 0)
			{
				func_40((iLocal_73 - iLocal_75), "CHEAT_INV", 0, 0, 1000, 0, 2, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, -1);
			}
			if (iLocal_75 >= (iLocal_73 - 1000))
			{
				iLocal_62 = 9;
				return;
			}
			unk_0xBF70D1B666A353F5(unk_0x460153A63B9477BC(), 1);
			unk_0x52090984B5C8A3E4(unk_0x9B0761B4C3EB8BC7(), true, true, true, true, true, 0, 0, 0);
			unk_0x03487B8B73468516();
			break;
		
		case 9:
			func_24("CHEAT_INVINCIBILITY_OFF");
			func_31(15, 0);
			iLocal_62 = 1;
			if (!unk_0x5AEB5DDFFAD43CA5(unk_0x9B0761B4C3EB8BC7()))
			{
				unk_0xBF70D1B666A353F5(unk_0x460153A63B9477BC(), 0);
				unk_0x52090984B5C8A3E4(unk_0x9B0761B4C3EB8BC7(), false, false, false, false, false, 0, 0, 0);
			}
			break;
		
		default:
			break;
	}
}

void func_40(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17)
{
	int iVar0;
	int iVar1;
	
	iVar0 = -1;
	iVar1 = 0;
	while (iVar1 <= 9)
	{
		if (iVar0 == -1)
		{
			if (func_42(7, iVar1) == 0)
			{
				iVar0 = iVar1;
			}
		}
		iVar1++;
	}
	if (iVar0 > -1)
	{
		Global_1378744.f_1 = 1;
		func_41(7, iVar0);
		Global_1378744.f_4573[iVar0] = iParam0;
		StringCopy(&(Global_1378744.f_4573.f_11[iVar0 /*16*/]), sParam1, 64);
		Global_1378744.f_4573.f_172[iVar0] = iParam2;
		Global_1378744.f_4573.f_216[iVar0] = iParam3;
		Global_1378744.f_4573.f_183[iVar0] = iParam4;
		Global_1378744.f_4573.f_194[iVar0] = iParam5;
		Global_1378744.f_4573.f_249[iVar0] = iParam6;
		Global_1378744.f_4573.f_260[iVar0] = iParam7;
		Global_1378744.f_4573.f_205[iVar0] = iParam8;
		Global_1378744.f_4573.f_314[iVar0] = iParam9;
		Global_1378744.f_4573.f_325[iVar0] = iParam10;
		Global_1378744.f_4573.f_357[iVar0] = iParam11;
		Global_1378744.f_4573.f_238[iVar0] = iParam12;
		Global_1378744.f_4573.f_271[iVar0] = iParam13;
		Global_1378744.f_4573.f_368[iVar0] = iParam14;
		Global_1378744.f_4573.f_379[iVar0] = iParam15;
		Global_1378744.f_4573.f_390[iVar0] = iParam16;
		Global_1378744.f_4573.f_227[iVar0] = iParam17;
	}
}

void func_41(int iParam0, int iParam1)
{
	unk_0xBE20AB8238688965(&(Global_1378744.f_6304[iParam0]), iParam1);
}

bool func_42(int iParam0, int iParam1)
{
	return unk_0xCE990E643CD9D0E5(Global_1378744.f_6304[iParam0], iParam1);
}

void func_43()
{
	switch (iLocal_59)
	{
		case 1:
			break;
		
		case 4:
			func_16("CHEAT_FLAMING_BULLETS");
			func_31(12, 1);
			iLocal_59 = 5;
			break;
		
		case 5:
			if (((!unk_0x5A228A6A51E757C8(unk_0x460153A63B9477BC()) || func_27(23)) || func_27(21)) || func_27(12))
			{
				iLocal_59 = 9;
				return;
			}
			if (func_28())
			{
				iLocal_59 = 9;
				return;
			}
			unk_0x5C949A0B90D8B830(unk_0x460153A63B9477BC());
			break;
		
		case 9:
			func_24("CHEAT_FLAMING_BULLETS");
			func_31(12, 0);
			iLocal_59 = 1;
			break;
		
		default:
			break;
	}
}

void func_44()
{
	switch (iLocal_60)
	{
		case 1:
			break;
		
		case 4:
			func_16("CHEAT_EXPLOSIVE_MELEE");
			func_31(13, 1);
			iLocal_60 = 5;
			break;
		
		case 5:
			if ((((!unk_0x5A228A6A51E757C8(unk_0x460153A63B9477BC()) || func_27(23)) || func_27(21)) || func_27(13)) || func_28())
			{
				iLocal_60 = 9;
				return;
			}
			unk_0x158E3F1503EDC2DC(unk_0x460153A63B9477BC());
			break;
		
		case 9:
			func_24("CHEAT_EXPLOSIVE_MELEE");
			func_31(13, 0);
			iLocal_60 = 1;
			break;
		
		default:
			break;
	}
}

void func_45()
{
	switch (iLocal_65)
	{
		case 1:
			break;
		
		case 4:
			func_16("CHEAT_DRUNK");
			func_31(18, 1);
			func_60(unk_0x9B0761B4C3EB8BC7());
			func_58(30000, 1050253722, 1065353216, 0);
			iLocal_65 = 5;
			break;
		
		case 5:
			if ((((func_28() || !unk_0x5A228A6A51E757C8(unk_0x460153A63B9477BC())) || func_27(23)) || func_27(21)) || func_27(18))
			{
				iLocal_65 = 9;
			}
			break;
		
		case 9:
			func_24("CHEAT_DRUNK");
			func_31(18, 0);
			func_49(unk_0x9B0761B4C3EB8BC7());
			func_48(1000);
			iLocal_65 = 1;
			break;
		
		case 10:
			func_46(1);
			func_31(18, 0);
			iLocal_65 = 1;
			break;
		
		default:
			break;
	}
}

void func_46(bool bParam0)
{
	unk_0x4BBB9B3A0DA8C277(0f);
	unk_0x4DC5556A84F500ED(0f);
	unk_0x582443322A476671(0f);
	unk_0x99E4391EBF519614(1);
	unk_0x79395D98B1E002B5(0f);
	unk_0xDEF12101C8B41A5E(1);
	unk_0x7847DF998CE21D7D(0);
	if (unk_0x306BF588BD8151E8("SAFEHOUSE_STONED_MICHAEL"))
	{
		unk_0xFA07F8BEBDAAFBA8("SAFEHOUSE_STONED_MICHAEL");
	}
	if (!unk_0x7BCC91F3C1CF24E8(&Global_42779))
	{
		if (unk_0x306BF588BD8151E8(&Global_42779))
		{
			unk_0xFA07F8BEBDAAFBA8(&Global_42779);
		}
	}
	if (unk_0x40397A9A17EEC1C5(Global_42768))
	{
		if (unk_0xD78C6D4D8984DD52(Global_42768))
		{
			unk_0xE5BEF932CBA74554(Global_42768, 0f);
			unk_0x67E7C2B137175486(Global_42768, 1);
		}
	}
	if (unk_0x8520BA0B467C93DA())
	{
		unk_0xAE57C4C2D11A9FFF(0);
	}
	if (bParam0)
	{
		if (unk_0x927B553F2D633AA5() != -1 || unk_0x7E1FC5070D7D65B1() != -1)
		{
			unk_0x8F2EB8BCB5CCE8D8();
		}
		else if (unk_0x9CC4D06F5338CA6B())
		{
			unk_0x8F2EB8BCB5CCE8D8();
		}
	}
	Global_42774 = 0f;
	StringCopy(&Global_42775, "", 16);
	StringCopy(&Global_42779, "", 64);
	StringCopy(&Global_42795, "", 16);
	func_47();
}

void func_47()
{
	Global_42767 = 0;
	Global_42768 = 0;
	Global_42769 = 0;
	Global_42770 = 30000;
	Global_42771 = 0f;
	Global_42773 = 0f;
	Global_42772 = 0f;
	Global_42774 = 0f;
	StringCopy(&Global_42775, "", 16);
}

void func_48(int iParam0)
{
	int iVar0;
	
	if (!Global_42767)
	{
		return;
	}
	iVar0 = unk_0x578C4EF320340AF7();
	Global_42769 = (iVar0 + iParam0);
	Global_42770 = iParam0;
}

void func_49(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (iParam0 == 0)
	{
		return;
	}
	if (!unk_0xAE06B9E39EBDE049(iParam0))
	{
		return;
	}
	iVar0 = func_57(iParam0);
	if (!iVar0 == -1)
	{
		iVar1 = Global_42588[iVar0 /*5*/];
		func_52(1, iVar1, 1);
		return;
	}
	iVar2 = func_51(iParam0);
	if (iVar2 == -1)
	{
		return;
	}
	func_50(iVar2);
}

void func_50(int iParam0)
{
	if (iParam0 < 0 || iParam0 >= 5)
	{
		return;
	}
	if (!Global_42562[iParam0 /*5*/].f_1 == 0)
	{
		if (Global_42562[iParam0 /*5*/].f_1 == unk_0x9B0761B4C3EB8BC7())
		{
			Global_42799 = 0;
		}
	}
	Global_42562[iParam0 /*5*/] = 13;
	Global_42562[iParam0 /*5*/].f_1 = 0;
	Global_42562[iParam0 /*5*/].f_2 = 0;
	Global_42562[iParam0 /*5*/].f_3 = 0;
	Global_42562[iParam0 /*5*/].f_4 = 0;
	Global_42560 = (Global_42560 - 1);
	if (Global_42560 < 0)
	{
		Global_42560 = 0;
	}
}

int func_51(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (Global_42562[iVar0 /*5*/].f_1 == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_52(int iParam0, int iParam1, int iParam2)
{
	func_53(iParam0, iParam1, iParam2, 0, 0, 1);
}

void func_53(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)
{
	int iVar0;
	
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam1 == -1)
	{
		return;
	}
	if (iParam2 == 6)
	{
		return;
	}
	if (func_55(iParam0, iParam1, iParam2))
	{
		return;
	}
	iVar0 = func_54();
	if (iVar0 == -1)
	{
		return;
	}
	Global_42669[iVar0 /*6*/] = iParam0;
	Global_42669[iVar0 /*6*/].f_1 = iParam1;
	Global_42669[iVar0 /*6*/].f_2 = iParam2;
	Global_42669[iVar0 /*6*/].f_3 = iParam3;
	Global_42669[iVar0 /*6*/].f_4 = iParam4;
	Global_42669[iVar0 /*6*/].f_5 = iParam5;
}

int func_54()
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 16)
	{
		if (Global_42669[iVar0 /*6*/].f_2 == 6)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_55(int iParam0, int iParam1, int iParam2)
{
	if (func_56(iParam0, iParam1, iParam2) == -1)
	{
		return 0;
	}
	return 1;
}

int func_56(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 16)
	{
		if (iParam2 == Global_42669[iVar0 /*6*/].f_2)
		{
			if (iParam0 == Global_42669[iVar0 /*6*/])
			{
				if (iParam1 == Global_42669[iVar0 /*6*/].f_1)
				{
					return iVar0;
				}
			}
		}
		iVar0++;
	}
	return -1;
}

int func_57(int iParam0)
{
	int iVar0;
	
	if (iParam0 == 0)
	{
		return -1;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 16)
	{
		if (!Global_42588[iVar0 /*5*/] == -1)
		{
			if (iParam0 == Global_42588[iVar0 /*5*/].f_1)
			{
				return iVar0;
			}
		}
		iVar0++;
	}
	return -1;
}

void func_58(int iParam0, float fParam1, float fParam2, int iParam3)
{
	func_59(-1, iParam0, fParam1, fParam2, iParam3, 1);
}

void func_59(int iParam0, var uParam1, float fParam2, float fParam3, int iParam4, bool bParam5)
{
	int iVar0;
	
	if (Global_3)
	{
		return;
	}
	if (Global_42767)
	{
		return;
	}
	if (!bParam5)
	{
		if (iParam0 < 0)
		{
			return;
		}
	}
	if (fParam2 < 0f || fParam2 > 5f)
	{
		return;
	}
	if (!unk_0x5041EC0E6E850F88())
	{
		unk_0xA900602AAE69404D("DRUNK_SHAKE", fParam3);
	}
	if (!unk_0x9BE59D9C27C29FBC())
	{
		unk_0xF313B9A839AE99A8("DRUNK_SHAKE", (fParam3 * Global_42766));
	}
	if (unk_0x40397A9A17EEC1C5(iParam4))
	{
		unk_0x2311A669433389E8(iParam4, "DRUNK_SHAKE", fParam3);
		Global_42768 = iParam4;
	}
	else
	{
		Global_42768 = 0;
	}
	Global_42767 = 1;
	iVar0 = unk_0x578C4EF320340AF7();
	Global_42769 = (iVar0 + iParam0);
	if (bParam5)
	{
		if (iParam0 == -1)
		{
			Global_42769 = -1;
		}
	}
	Global_42770 = uParam1;
	Global_42771 = fParam2;
	Global_42773 = fParam3;
	Global_42772 = fParam3;
}

int func_60(int iParam0)
{
	return func_61(iParam0, -1, 1);
}

int func_61(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (iParam0 == 0)
	{
		return 0;
	}
	if (!unk_0xAE06B9E39EBDE049(iParam0))
	{
		return 0;
	}
	iVar0 = func_63(iParam0);
	if (!iVar0 == -1)
	{
		return 1;
	}
	iVar1 = func_51(iParam0);
	if (!iVar1 == -1)
	{
		return 1;
	}
	if (!bParam2)
	{
		if (iParam1 == 0 || iParam1 < 0)
		{
			return 0;
		}
	}
	iVar2 = func_62();
	if (iVar2 == -1)
	{
		return 0;
	}
	Global_42562[iVar2 /*5*/] = 0;
	Global_42562[iVar2 /*5*/].f_1 = iParam0;
	Global_42562[iVar2 /*5*/].f_2 = iParam1;
	Global_42562[iVar2 /*5*/].f_3 = iParam1;
	Global_42562[iVar2 /*5*/].f_4 = 0;
	if (iParam0 == unk_0x9B0761B4C3EB8BC7())
	{
		Global_42799 = 1;
	}
	Global_42560++;
	return 1;
}

int func_62()
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (Global_42562[iVar0 /*5*/] == 13)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_63(int iParam0)
{
	int iVar0;
	
	if (iParam0 == 0)
	{
		return -1;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 16)
	{
		if (iParam0 == Global_42588[iVar0 /*5*/].f_1)
		{
			return Global_42588[iVar0 /*5*/];
		}
		iVar0++;
	}
	return -1;
}

void func_64()
{
	switch (iLocal_58)
	{
		case 1:
			break;
		
		case 4:
			func_16("CHEAT_BANG_BANG");
			func_31(11, 1);
			iLocal_58 = 5;
			break;
		
		case 5:
			if (((!unk_0x5A228A6A51E757C8(unk_0x460153A63B9477BC()) || func_27(23)) || func_27(21)) || func_27(11))
			{
				iLocal_58 = 9;
				return;
			}
			if (func_28())
			{
				iLocal_58 = 9;
				return;
			}
			unk_0x196A7A8B080A3185(unk_0x460153A63B9477BC());
			break;
		
		case 9:
			func_24("CHEAT_BANG_BANG");
			func_31(11, 0);
			iLocal_58 = 1;
			break;
		
		default:
			break;
	}
}

void func_65()
{
	switch (iLocal_61)
	{
		case 1:
			break;
		
		case 4:
			func_5(14);
			func_31(14, 1);
			func_67();
			break;
		
		case 5:
			if (!unk_0x5AEB5DDFFAD43CA5(unk_0x9B0761B4C3EB8BC7()))
			{
				if ((((((!unk_0x5A228A6A51E757C8(unk_0x460153A63B9477BC()) || func_28()) || func_27(23)) || func_27(21)) || func_27(14)) || func_66(17)) || unk_0xE72C9284B5143451(unk_0x9B0761B4C3EB8BC7()))
				{
					iLocal_61 = 9;
				}
			}
			else
			{
				iLocal_61 = 9;
			}
			break;
		
		case 9:
			func_24("CHEAT_GRAVITY_MOON");
			func_31(14, 0);
			unk_0x1E367A704B259915(0);
			iLocal_79 = 0;
			iLocal_61 = 1;
			break;
		
		default:
			break;
	}
}

int func_66(int iParam0)
{
	if (unk_0xCE990E643CD9D0E5(Global_31216, iParam0))
	{
		return 1;
	}
	return 0;
}

void func_67()
{
	iLocal_79++;
	if (iLocal_79 > 1)
	{
		iLocal_61 = 9;
		return;
	}
	switch (iLocal_79)
	{
		case 1:
			func_16("CHEAT_GRAVITY_MOON");
			unk_0x1E367A704B259915(1);
			break;
		
		default:
			break;
	}
	iLocal_61 = 5;
}

void func_68()
{
	func_87();
	func_81();
	func_80();
	func_79();
	func_78();
	func_77();
	func_76();
	func_74();
	func_73();
	func_72();
	func_69();
}

void func_69()
{
	if (iLocal_57 == 4)
	{
		iLocal_57 = 1;
		if ((func_27(23) || func_27(22)) || func_27(10))
		{
			func_21("CHEAT_NOT_NOW");
			return;
		}
		if (func_70())
		{
			func_21("CHEAT_PHONE_DENIED");
			return;
		}
		if (unk_0x5A228A6A51E757C8(unk_0x460153A63B9477BC()))
		{
			func_16("CHEAT_GIVE_PARACHUTE");
			unk_0x92BD213E6A0E666B(unk_0x9B0761B4C3EB8BC7(), joaat("gadget_parachute"), 1, true, true);
			func_5(10);
		}
	}
}

int func_70()
{
	if (iLocal_83)
	{
		iLocal_83 = 0;
		return 0;
	}
	if (func_71(0))
	{
		return 1;
	}
	return 0;
}

int func_71(int iParam0)
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

void func_72()
{
	int iVar0;
	
	if (iLocal_56 == 4)
	{
		iLocal_56 = 1;
		if ((func_27(23) || func_27(22)) || func_27(9))
		{
			func_21("CHEAT_NOT_NOW");
			return;
		}
		if (func_70())
		{
			func_21("CHEAT_PHONE_DENIED");
			return;
		}
		if (unk_0x5A228A6A51E757C8(unk_0x460153A63B9477BC()))
		{
			if (unk_0xB9FD7D4438BECDFC() == 0)
			{
				func_21("CHEAT_NOT_NOW");
				return;
			}
			iVar0 = unk_0x1A3D0DF92BF7D8C4(unk_0x460153A63B9477BC());
			if (iVar0 > 0)
			{
				func_16("CHEAT_WANTED_DOWN");
				unk_0xCAD5C18968E57C30(unk_0x460153A63B9477BC(), (iVar0 - 1), 0);
				func_5(9);
			}
			else
			{
				func_21("CHEAT_WANTED_DOWN_DENIED");
			}
		}
	}
}

void func_73()
{
	int iVar0;
	
	if (iLocal_55 == 4)
	{
		iLocal_55 = 1;
		if ((func_27(23) || func_27(22)) || func_27(8))
		{
			func_21("CHEAT_NOT_NOW");
			return;
		}
		if (func_70())
		{
			func_21("CHEAT_PHONE_DENIED");
			return;
		}
		if (unk_0x5A228A6A51E757C8(unk_0x460153A63B9477BC()))
		{
			if (unk_0xB9FD7D4438BECDFC() == 0)
			{
				func_21("CHEAT_NOT_NOW");
				return;
			}
			iVar0 = unk_0x1A3D0DF92BF7D8C4(unk_0x460153A63B9477BC());
			if (iVar0 < unk_0xB9FD7D4438BECDFC())
			{
				unk_0xCAD5C18968E57C30(unk_0x460153A63B9477BC(), iVar0 + 1, 0);
				unk_0x4B86C627B5EABFBF(unk_0x460153A63B9477BC(), 0);
				func_16("CHEAT_WANTED_UP");
				func_5(8);
			}
			else
			{
				func_21("CHEAT_WANTED_UP_DENIED");
			}
		}
	}
}

void func_74()
{
	if (iLocal_54 == 4)
	{
		iLocal_54 = 1;
		if ((((((func_27(23) || func_27(22)) || func_27(7)) || func_15(9)) || func_15(10)) || !unk_0x77B587D92B7201A1(func_75())) || !unk_0xD242AEF29A043F39(unk_0x460153A63B9477BC(), 0))
		{
			func_21("CHEAT_NOT_NOW");
			return;
		}
		if (func_70())
		{
			func_21("CHEAT_PHONE_DENIED");
			return;
		}
		if (unk_0x5A228A6A51E757C8(unk_0x460153A63B9477BC()))
		{
			unk_0x6A2A6ED2C03886BA(unk_0x460153A63B9477BC(), 1, 0);
			func_16("CHEAT_SPECIAL_ABILITY");
			func_5(7);
		}
	}
}

int func_75()
{
	return unk_0x36FE6D3220816ADA(unk_0x9B0761B4C3EB8BC7());
}

void func_76()
{
	int iVar0;
	
	if (iLocal_53 == 4)
	{
		iLocal_53 = 1;
		if ((((func_27(23) || func_27(22)) || func_27(6)) || func_15(9)) || func_15(10))
		{
			func_21("CHEAT_NOT_NOW");
			return;
		}
		if (func_70())
		{
			func_21("CHEAT_PHONE_DENIED");
			return;
		}
		if (unk_0x5A228A6A51E757C8(unk_0x460153A63B9477BC()))
		{
			func_16("CHEAT_HEALTH_ARMOR");
			func_5(6);
			unk_0x697DA7132EE43ABC(unk_0x9B0761B4C3EB8BC7(), unk_0x2A82FAC1E55962C6(unk_0x9B0761B4C3EB8BC7()), 0);
			unk_0x96FF45E594E61B11(unk_0x9B0761B4C3EB8BC7(), (unk_0x40B58AEC4931ACC0(unk_0x460153A63B9477BC()) - unk_0x90F6D247913C41F9(unk_0x9B0761B4C3EB8BC7())));
			if (unk_0x47DBF174A0CB9D55(unk_0x9B0761B4C3EB8BC7(), 0))
			{
				iVar0 = unk_0xB0919F8F7C8097BD(unk_0x9B0761B4C3EB8BC7());
				if (unk_0xAE06B9E39EBDE049(iVar0))
				{
					if (!unk_0xA59F96B50B97E63C(iVar0, 0))
					{
						unk_0xDF6CAD2F6A598A57(iVar0);
					}
				}
			}
		}
	}
}

void func_77()
{
	if (iLocal_52 == 4)
	{
		iLocal_52 = 1;
		if ((func_27(23) || func_27(22)) || func_27(5))
		{
			func_21("CHEAT_NOT_NOW");
			return;
		}
		if (func_70())
		{
			func_21("CHEAT_PHONE_DENIED");
			return;
		}
		func_5(5);
		switch (iLocal_71)
		{
			case 0:
				iLocal_71 = 1;
			
			case 1:
				unk_0xA0E8E405D991233C("EXTRASUNNY");
				unk_0x66B68DE096515636();
				func_16("CHEAT_ADVANCE_WEATHER_EXTRA_SUNNY");
				iLocal_71 = 2;
				break;
			
			case 2:
				unk_0xA0E8E405D991233C("CLEAR");
				unk_0x66B68DE096515636();
				func_16("CHEAT_ADVANCE_WEATHER_CLEAR");
				iLocal_71 = 3;
				break;
			
			case 3:
				unk_0xA0E8E405D991233C("CLOUDS");
				unk_0x66B68DE096515636();
				func_16("CHEAT_ADVANCE_WEATHER_CLOUDY");
				iLocal_71 = 4;
				break;
			
			case 4:
				unk_0xA0E8E405D991233C("SMOG");
				unk_0x66B68DE096515636();
				func_16("CHEAT_ADVANCE_WEATHER_SMOGGY");
				iLocal_71 = 6;
				break;
			
			case 6:
				unk_0xA0E8E405D991233C("OVERCAST");
				unk_0x66B68DE096515636();
				func_16("CHEAT_ADVANCE_WEATHER_OVERCAST");
				iLocal_71 = 7;
				break;
			
			case 7:
				unk_0xA0E8E405D991233C("RAIN");
				unk_0x66B68DE096515636();
				func_16("CHEAT_ADVANCE_WEATHER_RAIN");
				func_31(5, 1);
				iLocal_71 = 8;
				break;
			
			case 8:
				unk_0xA0E8E405D991233C("THUNDER");
				unk_0x66B68DE096515636();
				func_16("CHEAT_ADVANCE_WEATHER_THUNDER");
				iLocal_71 = 9;
				break;
			
			case 9:
				unk_0xA0E8E405D991233C("CLEARING");
				unk_0x66B68DE096515636();
				func_16("CHEAT_ADVANCE_WEATHER_CLEARING");
				iLocal_71 = 11;
				break;
			
			case 11:
				unk_0xA0E8E405D991233C("XMAS");
				unk_0x66B68DE096515636();
				func_16("CHEAT_ADVANCE_WEATHER_SNOW");
				iLocal_71 = 0;
				break;
			
			default:
				break;
			}
	}
}

void func_78()
{
	if (iLocal_51 == 4)
	{
		iLocal_51 = 1;
		if ((func_27(23) || func_27(22)) || func_27(4))
		{
			func_21("CHEAT_NOT_NOW");
			return;
		}
		if (func_70())
		{
			func_21("CHEAT_PHONE_DENIED");
			return;
		}
		func_16("CHEAT_GIVE_WEAPONS");
		func_5(4);
		if (unk_0x5A228A6A51E757C8(unk_0x460153A63B9477BC()))
		{
			unk_0xEB879F62C8DFA9E2(unk_0x9B0761B4C3EB8BC7(), joaat("weapon_knife"), -1, false);
			unk_0xEB879F62C8DFA9E2(unk_0x9B0761B4C3EB8BC7(), joaat("weapon_smg"), 300, false);
			unk_0xEB879F62C8DFA9E2(unk_0x9B0761B4C3EB8BC7(), joaat("weapon_assaultrifle"), 300, true);
			unk_0xEB879F62C8DFA9E2(unk_0x9B0761B4C3EB8BC7(), joaat("weapon_pumpshotgun"), 150, false);
			unk_0xEB879F62C8DFA9E2(unk_0x9B0761B4C3EB8BC7(), joaat("weapon_sniperrifle"), 30, false);
			unk_0xEB879F62C8DFA9E2(unk_0x9B0761B4C3EB8BC7(), joaat("weapon_grenade"), 5, false);
			unk_0xEB879F62C8DFA9E2(unk_0x9B0761B4C3EB8BC7(), joaat("weapon_rpg"), 5, false);
		}
	}
}

void func_79()
{
	switch (iLocal_50)
	{
		case 1:
			break;
		
		case 4:
			func_16("CHEAT_FAST_SWIM");
			func_31(3, 1);
			iLocal_50 = 5;
			break;
		
		case 5:
			if (((!unk_0x5A228A6A51E757C8(unk_0x460153A63B9477BC()) || func_27(23)) || func_27(22)) || func_27(3))
			{
				iLocal_50 = 9;
			}
			else
			{
				unk_0x888C1AFA66384CBC(unk_0x460153A63B9477BC(), 1.49f);
				unk_0x03487B8B73468516();
			}
			break;
		
		case 9:
			unk_0x888C1AFA66384CBC(unk_0x460153A63B9477BC(), 1f);
			func_24("CHEAT_FAST_SWIM");
			func_31(3, 0);
			iLocal_50 = 1;
			break;
		
		default:
			break;
	}
}

void func_80()
{
	switch (iLocal_49)
	{
		case 1:
			break;
		
		case 4:
			func_16("CHEAT_FAST_RUN");
			func_31(2, 1);
			iLocal_49 = 5;
			break;
		
		case 5:
			if ((((!unk_0x5A228A6A51E757C8(unk_0x460153A63B9477BC()) || unk_0x5AEB5DDFFAD43CA5(unk_0x9B0761B4C3EB8BC7())) || func_27(23)) || func_27(22)) || func_27(2))
			{
				iLocal_49 = 9;
			}
			else
			{
				if (unk_0x4D71E6F618DC5C0E(unk_0x9B0761B4C3EB8BC7()) || (unk_0x7587087519CF4F83(unk_0x9B0761B4C3EB8BC7()) && !unk_0x11B7C25143EE2F29(unk_0x9B0761B4C3EB8BC7())))
				{
					unk_0x2C6A525B8E4EFB9F(unk_0x460153A63B9477BC(), 1.49f);
				}
				else
				{
					unk_0x2C6A525B8E4EFB9F(unk_0x460153A63B9477BC(), 1f);
				}
				unk_0x03487B8B73468516();
			}
			break;
		
		case 9:
			unk_0x2C6A525B8E4EFB9F(unk_0x460153A63B9477BC(), 1f);
			func_24("CHEAT_FAST_RUN");
			func_31(2, 0);
			iLocal_49 = 1;
			break;
		
		default:
			break;
	}
}

void func_81()
{
	int iVar0;
	
	switch (iLocal_48)
	{
		case 1:
			break;
		
		case 4:
			func_16("CHEAT_SLIDEY_CARS");
			func_31(1, 1);
			iLocal_48 = 5;
			break;
		
		case 5:
			if (((!unk_0x5A228A6A51E757C8(unk_0x460153A63B9477BC()) || func_27(23)) || func_27(22)) || func_27(1))
			{
				iLocal_48 = 9;
			}
			if (unk_0x47DBF174A0CB9D55(unk_0x9B0761B4C3EB8BC7(), 0))
			{
				iVar0 = unk_0xA5D5B1042E8F47BD(unk_0x9B0761B4C3EB8BC7(), 0);
				if (!unk_0xA59F96B50B97E63C(iVar0, 0))
				{
					if (unk_0x10D3F7E169A49C44(iVar0, -1, 0) == unk_0x9B0761B4C3EB8BC7())
					{
						if (iLocal_69 == 0)
						{
							iLocal_69 = iVar0;
							if (!unk_0xA59F96B50B97E63C(iLocal_69, 0))
							{
								if (func_82(1))
								{
									unk_0x55987E96D5F44BC3(iLocal_69, 1);
								}
								else
								{
									iLocal_69 = 0;
								}
							}
						}
						else if (iLocal_69 != iVar0)
						{
							if (!unk_0xA59F96B50B97E63C(iLocal_69, 0))
							{
								unk_0x55987E96D5F44BC3(iLocal_69, 0);
							}
							iLocal_69 = 0;
						}
					}
				}
			}
			break;
		
		case 9:
			func_24("CHEAT_SLIDEY_CARS");
			iLocal_48 = 10;
			break;
		
		case 10:
			if (!unk_0xA59F96B50B97E63C(iLocal_69, 0))
			{
				unk_0x55987E96D5F44BC3(iLocal_69, 0);
				iLocal_69 = 0;
			}
			func_31(1, 0);
			iLocal_48 = 1;
			break;
		
		default:
			break;
	}
}

int func_82(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	char* sVar4;
	
	if (!unk_0x5AEB5DDFFAD43CA5(unk_0x9B0761B4C3EB8BC7()))
	{
		iVar0 = unk_0xA5D3CD332CD10EE9();
		if (unk_0xAE06B9E39EBDE049(iVar0))
		{
			if (unk_0x80FF6C016CDB0FAF(iVar0, 0))
			{
				iVar1 = unk_0x36FE6D3220816ADA(iVar0);
				iVar2 = func_8();
				if (iParam0 & 1 != 0)
				{
					if (!unk_0xB86B8E85030B1552(iVar1))
					{
						return 0;
					}
				}
				if (iParam0 & 2 != 0)
				{
					if (!unk_0x97AFEF6099069369(iVar1))
					{
						return 0;
					}
				}
				if (iParam0 & 4 != 0)
				{
					if (!unk_0x442D6659150AF4B3(iVar1))
					{
						return 0;
					}
				}
				if (iParam0 & 8 != 0)
				{
					if (!unk_0x5874D60325749F00(iVar1))
					{
						return 0;
					}
				}
				if (iParam0 & 16 != 0)
				{
					if (unk_0x0724529FC474C803(iVar0, "door_dside_r") != -1 || unk_0x0724529FC474C803(iVar0, "door_pside_r") != -1)
					{
						return 0;
					}
				}
				if (iParam0 & 32 != 0)
				{
					if (unk_0x0724529FC474C803(iVar0, "door_dside_r") == -1 || unk_0x0724529FC474C803(iVar0, "door_pside_r") == -1)
					{
						return 0;
					}
				}
				if (iParam0 & 64 != 0)
				{
					if (unk_0x97AFEF6099069369(iVar1))
					{
						if (unk_0x0724529FC474C803(iVar0, "seat_r") == -1)
						{
							return 0;
						}
					}
					else if (unk_0x0724529FC474C803(iVar0, "seat_dside_r") != -1 || unk_0x0724529FC474C803(iVar0, "seat_pside_r") != -1)
					{
						return 0;
					}
				}
				if (iParam0 & 128 != 0)
				{
					if (unk_0x0724529FC474C803(iVar0, "seat_dside_r") == -1 || unk_0x0724529FC474C803(iVar0, "seat_pside_r") == -1)
					{
						return 0;
					}
				}
				if (iParam0 & 256 != 0)
				{
					if (!func_10(iVar2))
					{
						return 0;
					}
					if (func_85(iVar2, 0) != iVar1)
					{
						return 0;
					}
				}
				if (iParam0 & 512 != 0)
				{
					if (!unk_0xB86B8E85030B1552(iVar1) && !unk_0x97AFEF6099069369(iVar1))
					{
						return 0;
					}
					if (unk_0x7A3E3E24F50F2AAB(iVar0))
					{
						return 0;
					}
					sVar4 = unk_0x9ABE4851D274FD5D(iVar0, &uVar3);
					if (!unk_0x7BCC91F3C1CF24E8(sVar4))
					{
						if (unk_0x856D5567211886A2(sVar4) == unk_0x856D5567211886A2("taxiService"))
						{
							return 0;
						}
					}
					if (func_83(iVar0, iVar2, 0))
					{
						return 0;
					}
				}
				return 1;
			}
		}
	}
	return 0;
}

int func_83(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	char* sVar1;
	int iVar2;
	
	if (!unk_0xAE06B9E39EBDE049(iParam0) || !unk_0x80FF6C016CDB0FAF(iParam0, 0))
	{
		return 0;
	}
	iVar0 = 0;
	while (func_84(iParam1, iVar0, &sVar1, &iVar2))
	{
		if (!bParam2 || unk_0xCE990E643CD9D0E5(Global_111858.f_7225[iVar2], 0))
		{
			if (unk_0x1362F9BE8812B12C(&sVar1, iParam0))
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_84(int iParam0, int iParam1, char* sParam2, var uParam3)
{
	StringCopy(sParam2, "", 32);
	switch (iParam0)
	{
		case 0:
			if (iParam1 == 0)
			{
				StringCopy(sParam2, "Michael - Beverly Hills", 32);
				*uParam3 = 0;
				return 1;
			}
			else if (iParam1 == 1)
			{
				StringCopy(sParam2, "Trevor - Countryside", 32);
				*uParam3 = 1;
				return 1;
			}
			break;
		
		case 1:
			if (iParam1 == 0)
			{
				StringCopy(sParam2, "Franklin - Aunt", 32);
				*uParam3 = 5;
				return 1;
			}
			else if (iParam1 == 1)
			{
				StringCopy(sParam2, "Franklin - Hills", 32);
				*uParam3 = 6;
				return 1;
			}
			break;
		
		case 2:
			if (iParam1 == 0)
			{
				StringCopy(sParam2, "Trevor - Countryside", 32);
				*uParam3 = 2;
				return 1;
			}
			else if (iParam1 == 1)
			{
				StringCopy(sParam2, "Trevor - City", 32);
				*uParam3 = 3;
				return 1;
			}
			else if (iParam1 == 2)
			{
				StringCopy(sParam2, "Trevor - Stripclub", 32);
				*uParam3 = 4;
				return 1;
			}
			break;
	}
	return 0;
}

int func_85(int iParam0, int iParam1)
{
	struct<82> Var0;
	
	if (func_10(iParam0))
	{
		Var0.f_11 = 12;
		Var0.f_31 = 49;
		Var0.f_81 = 2;
		func_86(iParam0, &Var0, iParam1);
		return Var0;
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

void func_86(int iParam0, var uParam1, int iParam2)
{
	int iVar0;
	
	uParam1->f_88 = 1;
	uParam1->f_84 = 255;
	uParam1->f_85 = 255;
	uParam1->f_86 = 255;
	uParam1->f_97 = 1;
	uParam1->f_3 = 1000;
	uParam1->f_1 = 0;
	switch (iParam0)
	{
		case 0:
			iVar0 = joaat("tailgater");
			if (Global_111858.f_9081.f_99.f_58[128] && !Global_111858.f_9081.f_99.f_58[131])
			{
				iVar0 = joaat("premier");
			}
			switch (iVar0)
			{
				case joaat("tailgater"):
					*uParam1 = iVar0;
					uParam1->f_2 = 3f;
					uParam1->f_4 = 0;
					uParam1->f_9 = 1;
					uParam1->f_11[0] = 1;
					StringCopy(&(uParam1->f_27), "5MDS003", 16);
					break;
				
				case joaat("premier"):
					*uParam1 = iVar0;
					uParam1->f_2 = 14.9f;
					uParam1->f_5 = 43;
					uParam1->f_6 = 43;
					uParam1->f_7 = 0;
					uParam1->f_8 = 156;
					uParam1->f_9 = 0;
					StringCopy(&(uParam1->f_27), "880HS955", 16);
					break;
			}
			break;
		
		case 2:
			iVar0 = joaat("bodhi2");
			switch (iVar0)
			{
				case joaat("bodhi2"):
					*uParam1 = iVar0;
					uParam1->f_2 = 14f;
					uParam1->f_5 = 32;
					uParam1->f_6 = 0;
					uParam1->f_7 = 0;
					uParam1->f_8 = 156;
					StringCopy(&(uParam1->f_27), "BETTY 32", 16);
					if (Global_111858.f_9081.f_99.f_58[119])
					{
						uParam1->f_11[1] = 1;
					}
					break;
			}
			break;
		
		case 1:
			if (iParam2 == 1)
			{
				iVar0 = joaat("buffalo2");
			}
			else if (iParam2 == 2)
			{
				iVar0 = joaat("bagger");
			}
			else if (Global_111858.f_9081.f_99.f_58[118])
			{
				iVar0 = joaat("bagger");
			}
			else
			{
				iVar0 = joaat("buffalo2");
			}
			switch (iVar0)
			{
				case joaat("bagger"):
					*uParam1 = iVar0;
					uParam1->f_2 = 6f;
					uParam1->f_5 = 53;
					uParam1->f_6 = 0;
					uParam1->f_7 = 59;
					uParam1->f_8 = 156;
					StringCopy(&(uParam1->f_27), "FC88", 16);
					break;
				
				case joaat("buffalo2"):
					*uParam1 = iVar0;
					uParam1->f_2 = 0f;
					uParam1->f_5 = 111;
					uParam1->f_6 = 111;
					uParam1->f_7 = 0;
					uParam1->f_8 = 156;
					uParam1->f_10 = 1;
					StringCopy(&(uParam1->f_27), "FC1988", 16);
					uParam1->f_11[0] = 1;
					uParam1->f_11[1] = 1;
					uParam1->f_11[2] = 1;
					uParam1->f_11[3] = 1;
					uParam1->f_11[4] = 1;
					uParam1->f_11[5] = 1;
					uParam1->f_11[6] = 1;
					uParam1->f_11[7] = 1;
					uParam1->f_11[8] = 1;
					break;
			}
			break;
		
		default:
			break;
	}
}

void func_87()
{
	switch (iLocal_47)
	{
		case 1:
			break;
		
		case 4:
			func_16("CHEAT_SUPER_JUMP");
			func_31(0, 1);
			iLocal_47 = 5;
			break;
		
		case 5:
			if ((((!unk_0x5A228A6A51E757C8(unk_0x460153A63B9477BC()) || func_27(23)) || func_27(22)) || func_27(0)) || unk_0xCE28B5EADA8A0CF9())
			{
				iLocal_47 = 9;
				return;
			}
			unk_0x53BB32FF7F507CE2(unk_0x460153A63B9477BC());
			unk_0x8342E6CB98CD545C(unk_0x9B0761B4C3EB8BC7(), 217, 1);
			break;
		
		case 9:
			func_24("CHEAT_SUPER_JUMP");
			func_31(0, 0);
			iLocal_47 = 1;
			break;
		
		default:
			break;
	}
}

void func_88()
{
	if ((func_111() || iLocal_84 != 0) || func_15(14))
	{
		unk_0x779660A9E5364C4D(2, 243, 1);
	}
	func_110();
	if (unk_0x5AEB5DDFFAD43CA5(unk_0x9B0761B4C3EB8BC7()))
	{
		return;
	}
	if (unk_0x83D81979576E65F2(unk_0x9B0761B4C3EB8BC7()))
	{
		return;
	}
	if (!unk_0x5A228A6A51E757C8(unk_0x460153A63B9477BC()))
	{
		return;
	}
	if (!unk_0x4DC4117F94CD5B84(unk_0x460153A63B9477BC()))
	{
		return;
	}
	if (func_34() || unk_0x9CC4D06F5338CA6B())
	{
		return;
	}
	if (func_109())
	{
		if (!iLocal_82)
		{
			func_108();
			iLocal_82 = 1;
		}
		return;
	}
	iLocal_82 = 0;
	iLocal_83 = 0;
	if ((func_107(988027572, 12) || unk_0xD7DBC8B89669F357(joaat("buzzoff"))) || func_106(20, joaat("buzzard")))
	{
		func_103(joaat("buzzard"), "CHEAT_SPAWN_VEH1");
	}
	if ((func_107(-1134279030, 11) || unk_0xD7DBC8B89669F357(joaat("bandit"))) || func_106(20, joaat("bmx")))
	{
		func_103(joaat("bmx"), "CHEAT_SPAWN_VEH2");
	}
	if ((func_107(971352167, 10) || unk_0xD7DBC8B89669F357(joaat("holein1"))) || func_106(20, joaat("caddy")))
	{
		func_103(joaat("caddy"), "CHEAT_SPAWN_VEH3");
	}
	if ((func_107(-269863225, 10) || unk_0xD7DBC8B89669F357(joaat("comet"))) || func_106(20, joaat("comet2")))
	{
		func_103(joaat("comet2"), "CHEAT_SPAWN_VEH4");
	}
	if ((func_107(458579068, 12) || unk_0xD7DBC8B89669F357(joaat("flyspray"))) || func_106(20, joaat("duster")))
	{
		func_103(joaat("duster"), "CHEAT_SPAWN_VEH5");
	}
	if ((func_107(-666513193, 12) || unk_0xD7DBC8B89669F357(joaat("rocket"))) || func_106(20, joaat("pcj")))
	{
		func_103(joaat("pcj"), "CHEAT_SPAWN_VEH6");
	}
	if ((func_107(-1245984749, 10) || unk_0xD7DBC8B89669F357(joaat("rapidgt"))) || func_106(20, joaat("rapidgt")))
	{
		func_103(joaat("rapidgt"), "CHEAT_SPAWN_VEH7");
	}
	if ((func_107(2076774618, 12) || unk_0xD7DBC8B89669F357(joaat("offroad"))) || func_106(20, joaat("sanchez")))
	{
		func_103(joaat("sanchez"), "CHEAT_SPAWN_VEH8");
	}
	if ((func_107(855685457, 9) || unk_0xD7DBC8B89669F357(joaat("vinewood"))) || func_106(20, joaat("stretch")))
	{
		func_103(joaat("stretch"), "CHEAT_SPAWN_VEH9");
	}
	if ((func_107(-591395876, 12) || unk_0xD7DBC8B89669F357(joaat("barnstorm"))) || func_106(20, joaat("stunt")))
	{
		func_103(joaat("stunt"), "CHEAT_SPAWN_VEH10");
	}
	if ((func_107(-1399217582, 10) || unk_0xD7DBC8B89669F357(joaat("trashed"))) || func_106(20, joaat("trash")))
	{
		func_103(joaat("trash"), "CHEAT_SPAWN_VEH11");
	}
	if (func_102())
	{
		if ((func_107(-375917581, 10) || unk_0xD7DBC8B89669F357(joaat("extinct"))) || func_106(20, joaat("dodo")))
		{
			func_103(joaat("dodo"), "CHEAT_SPAWN_VEH12");
		}
		if ((func_107(-2124307881, 10) || unk_0xD7DBC8B89669F357(joaat("deathcar"))) || func_106(20, joaat("dukes2")))
		{
			func_103(joaat("dukes2"), "CHEAT_SPAWN_VEH13");
		}
		if ((func_107(1028964594, 9) || unk_0xD7DBC8B89669F357(joaat("bubbles"))) || func_106(20, joaat("submersible2")))
		{
			func_103(joaat("submersible2"), "CHEAT_SPAWN_VEH14");
		}
	}
	if ((func_107(-393416581, 11) || unk_0xD7DBC8B89669F357(joaat("hoptoit"))) || func_106(0, 0))
	{
		func_101();
	}
	if ((func_107(-296509791, 8) || unk_0xD7DBC8B89669F357(joaat("snowday"))) || func_106(1, 0))
	{
		func_100();
	}
	if ((func_107(1120820643, 7) || unk_0xD7DBC8B89669F357(joaat("catchme"))) || func_106(2, 0))
	{
		func_99();
	}
	if ((func_107(-421458016, 9) || unk_0xD7DBC8B89669F357(joaat("gotgills"))) || func_106(3, 0))
	{
		func_98();
	}
	if ((func_107(372390926, 12) || unk_0xD7DBC8B89669F357(joaat("toolup"))) || func_106(4, 0))
	{
		iLocal_51 = 4;
	}
	if ((func_107(606506837, 8) || unk_0xD7DBC8B89669F357(joaat("makeitrain"))) || func_106(5, 0))
	{
		iLocal_52 = 4;
	}
	if ((func_107(453014206, 12) || unk_0xD7DBC8B89669F357(joaat("turtle"))) || func_106(6, 0))
	{
		iLocal_53 = 4;
	}
	if ((func_107(1773187142, 9) || unk_0xD7DBC8B89669F357(joaat("powerup"))) || func_106(7, 0))
	{
		iLocal_54 = 4;
	}
	if ((func_107(1173296014, 10) || unk_0xD7DBC8B89669F357(joaat("fugitive"))) || func_106(8, 0))
	{
		iLocal_55 = 4;
	}
	if ((func_107(-381269753, 10) || unk_0xD7DBC8B89669F357(joaat("lawyerup"))) || func_106(9, 0))
	{
		iLocal_56 = 4;
	}
	if ((func_107(-2023988698, 11) || unk_0xD7DBC8B89669F357(joaat("skydive"))) || func_106(10, 0))
	{
		iLocal_57 = 4;
	}
	if ((func_107(-835863906, 12) || unk_0xD7DBC8B89669F357(joaat("highex"))) || func_106(11, 0))
	{
		func_97();
	}
	if ((func_107(1958387485, 12) || unk_0xD7DBC8B89669F357(joaat("incendiary"))) || func_106(12, 0))
	{
		func_96();
	}
	if ((func_107(-903985180, 9) || unk_0xD7DBC8B89669F357(joaat("hothands"))) || func_106(13, 0))
	{
		func_95();
	}
	if ((func_107(2087642905, 9) || unk_0xD7DBC8B89669F357(joaat("floater"))) || func_106(14, 0))
	{
		func_94();
	}
	if ((func_107(1257820019, 10) || unk_0xD7DBC8B89669F357(joaat("painkiller"))) || func_106(15, 0))
	{
		func_93();
	}
	if ((func_107(1540206179, 7) || unk_0xD7DBC8B89669F357(joaat("slowmo"))) || func_106(16, 0))
	{
		func_92();
	}
	if ((func_107(115565392, 16) || unk_0xD7DBC8B89669F357(joaat("skyfall"))) || func_106(17, 0))
	{
		func_91();
	}
	if ((func_107(-1276513277, 8) || unk_0xD7DBC8B89669F357(joaat("liquor"))) || func_106(18, 0))
	{
		func_90();
	}
	if ((func_107(2040433593, 9) || unk_0xD7DBC8B89669F357(joaat("deadeye"))) || func_106(19, 0))
	{
		func_89();
	}
}

void func_89()
{
	if (func_28())
	{
		func_21("CHEAT_MISSION_DENIED");
		return;
	}
	if (func_70())
	{
		func_21("CHEAT_PHONE_DENIED");
		return;
	}
	if ((func_27(23) || func_27(21)) || func_27(16))
	{
		func_21("CHEAT_NOT_NOW");
		return;
	}
	if (iLocal_63 != 1)
	{
		func_21("CHEAT_NOT_NOW");
	}
	else
	{
		iLocal_66 = 4;
	}
}

void func_90()
{
	if (func_28())
	{
		func_21("CHEAT_MISSION_DENIED");
		iLocal_65 = 1;
		return;
	}
	if (func_70())
	{
		func_21("CHEAT_PHONE_DENIED");
		iLocal_65 = 1;
		return;
	}
	if ((func_27(23) || func_27(21)) || func_27(18))
	{
		func_21("CHEAT_NOT_NOW");
		iLocal_65 = 1;
		return;
	}
	if (iLocal_65 == 1)
	{
		iLocal_65 = 4;
	}
	else if (iLocal_65 == 5)
	{
		iLocal_65 = 9;
	}
}

void func_91()
{
	if (func_28())
	{
		func_21("CHEAT_MISSION_DENIED");
		return;
	}
	if (func_70())
	{
		func_21("CHEAT_PHONE_DENIED");
		return;
	}
	if (unk_0xCE28B5EADA8A0CF9())
	{
		func_21("CHEAT_NOT_HERE");
		return;
	}
	if (iLocal_64 != 1)
	{
		func_21("CHEAT_ALREADY_ACTIVE");
		return;
	}
	if (((((func_27(23) || func_27(21)) || func_27(17)) || func_66(0)) || unk_0x47DBF174A0CB9D55(unk_0x9B0761B4C3EB8BC7(), 0)) || !unk_0xC337F69A1938DDA2())
	{
		func_21("CHEAT_NOT_NOW");
		return;
	}
	if ((unk_0x5AEB5DDFFAD43CA5(unk_0x9B0761B4C3EB8BC7()) || unk_0xD5EAF42B1EAE828F(unk_0x460153A63B9477BC(), 0)) || unk_0x7B70881748D166CD(joaat("respawn_controller")) > 0)
	{
		func_21("CHEAT_NOT_NOW");
		return;
	}
	iLocal_64 = 2;
}

void func_92()
{
	if (func_28())
	{
		func_21("CHEAT_MISSION_DENIED");
		return;
	}
	if (func_70())
	{
		func_21("CHEAT_PHONE_DENIED");
		return;
	}
	if ((func_27(23) || func_27(21)) || func_27(16))
	{
		func_21("CHEAT_NOT_NOW");
		return;
	}
	if (iLocal_66 != 1)
	{
		func_21("CHEAT_NOT_NOW");
	}
	else
	{
		iLocal_63 = 4;
	}
}

void func_93()
{
	struct<3> Var0;
	
	Var0 = { func_19(unk_0x460153A63B9477BC()) };
	if (func_28())
	{
		func_21("CHEAT_MISSION_DENIED");
		return;
	}
	if (func_70())
	{
		func_21("CHEAT_PHONE_DENIED");
		return;
	}
	if (((func_27(23) || func_27(21)) || func_27(15)) || Var0.f_2 <= -170f)
	{
		func_21("CHEAT_NOT_NOW");
		return;
	}
	if (iLocal_62 == 1)
	{
		iLocal_62 = 4;
	}
	else if (iLocal_62 == 5)
	{
		iLocal_62 = 9;
	}
}

void func_94()
{
	if (func_28())
	{
		func_21("CHEAT_MISSION_DENIED");
		return;
	}
	if (func_70())
	{
		func_21("CHEAT_PHONE_DENIED");
		return;
	}
	if ((((func_27(23) || func_27(21)) || func_27(14)) || func_66(17)) || unk_0xE72C9284B5143451(unk_0x9B0761B4C3EB8BC7()))
	{
		func_21("CHEAT_NOT_NOW");
		return;
	}
	iLocal_61 = 4;
}

void func_95()
{
	if (func_28())
	{
		func_21("CHEAT_MISSION_DENIED");
		iLocal_60 = 1;
		return;
	}
	if (func_70())
	{
		func_21("CHEAT_PHONE_DENIED");
		iLocal_60 = 1;
		return;
	}
	if ((func_27(23) || func_27(21)) || func_27(13))
	{
		func_21("CHEAT_NOT_NOW");
		iLocal_60 = 1;
		return;
	}
	if (iLocal_60 == 1)
	{
		iLocal_60 = 4;
	}
	else if (iLocal_60 == 5)
	{
		iLocal_60 = 9;
	}
}

void func_96()
{
	if (func_28())
	{
		func_21("CHEAT_MISSION_DENIED");
		iLocal_59 = 1;
		return;
	}
	if (func_70())
	{
		func_21("CHEAT_PHONE_DENIED");
		iLocal_59 = 1;
		return;
	}
	if ((func_27(23) || func_27(21)) || func_27(12))
	{
		func_21("CHEAT_NOT_NOW");
		iLocal_59 = 1;
		return;
	}
	if (iLocal_59 == 1)
	{
		iLocal_59 = 4;
	}
	else if (iLocal_59 == 5)
	{
		iLocal_59 = 9;
	}
}

void func_97()
{
	if (func_28())
	{
		func_21("CHEAT_MISSION_DENIED");
		iLocal_58 = 1;
		return;
	}
	if (func_70())
	{
		func_21("CHEAT_PHONE_DENIED");
		iLocal_58 = 1;
		return;
	}
	if ((func_27(23) || func_27(21)) || func_27(11))
	{
		func_21("CHEAT_NOT_NOW");
		iLocal_58 = 1;
		return;
	}
	if (iLocal_58 == 1)
	{
		iLocal_58 = 4;
	}
	else if (iLocal_58 == 5)
	{
		iLocal_58 = 9;
	}
}

void func_98()
{
	if ((((func_27(23) || func_27(22)) || func_27(3)) || func_15(9)) || func_15(10))
	{
		func_21("CHEAT_NOT_NOW");
		return;
	}
	if (func_70())
	{
		func_21("CHEAT_PHONE_DENIED");
		return;
	}
	if (iLocal_50 == 1)
	{
		iLocal_50 = 4;
	}
	else if (iLocal_50 == 5)
	{
		iLocal_50 = 9;
	}
}

void func_99()
{
	if ((((func_27(23) || func_27(22)) || func_27(2)) || func_15(9)) || func_15(10))
	{
		func_21("CHEAT_NOT_NOW");
		return;
	}
	if (func_70())
	{
		func_21("CHEAT_PHONE_DENIED");
		return;
	}
	if (iLocal_49 == 1)
	{
		iLocal_49 = 4;
	}
	else if (iLocal_49 == 5)
	{
		iLocal_49 = 9;
	}
}

void func_100()
{
	if ((func_27(23) || func_27(22)) || func_27(1))
	{
		func_21("CHEAT_NOT_NOW");
		return;
	}
	if (func_70())
	{
		func_21("CHEAT_PHONE_DENIED");
		return;
	}
	if (iLocal_48 == 1)
	{
		iLocal_48 = 4;
	}
	else if (iLocal_48 == 5)
	{
		iLocal_48 = 9;
	}
}

void func_101()
{
	if (((func_27(23) || func_27(22)) || func_27(0)) || unk_0xCE28B5EADA8A0CF9())
	{
		func_21("CHEAT_NOT_NOW");
		return;
	}
	if (func_70())
	{
		func_21("CHEAT_PHONE_DENIED");
		return;
	}
	if (iLocal_47 == 1)
	{
		iLocal_47 = 4;
	}
	else if (iLocal_47 == 5)
	{
		iLocal_47 = 9;
	}
}

int func_102()
{
	int iVar0;
	
	if (unk_0x011A67D2B195B6EB())
	{
		if (unk_0xB6E5F77B7062D58A())
		{
			if (unk_0xE06C56C6444527A6())
			{
				unk_0xD2F202166691EDB2(joaat("SP_UNLOCK_EXCLUS_CONTENT"), &iVar0, -1);
				unk_0xBE20AB8238688965(&iVar0, 2);
				unk_0xBE20AB8238688965(&iVar0, 4);
				unk_0xBE20AB8238688965(&iVar0, 6);
				unk_0xBE20AB8238688965(&Global_25, 2);
				unk_0xBE20AB8238688965(&Global_25, 4);
				unk_0xBE20AB8238688965(&Global_25, 6);
				unk_0x6000E4684CB4330B(joaat("SP_UNLOCK_EXCLUS_CONTENT"), iVar0, 1);
				if (unk_0x3D1E37C2BD9F339F())
				{
					iVar0 = unk_0xFCBF95335DD16537(866);
					unk_0xBE20AB8238688965(&iVar0, 0);
					unk_0xB2B72C9FCE371E70(iVar0);
				}
				return 1;
			}
		}
	}
	if (Global_150693 == 2)
	{
		return 1;
	}
	else if (Global_150693 == 3)
	{
		return 0;
	}
	if (unk_0x3D1E37C2BD9F339F())
	{
		if (unk_0xCE990E643CD9D0E5(unk_0xFCBF95335DD16537(866), 0))
		{
			return 1;
		}
	}
	return 0;
}

void func_103(int iParam0, char* sParam1)
{
	if (iLocal_46 == 1)
	{
		if (((((func_15(9) || unk_0x7B70881748D166CD(joaat("barry1")) > 0) || unk_0x7B70881748D166CD(joaat("tennis")) > 0) || func_27(23)) || func_27(22)) || func_27(20))
		{
			func_21("CHEAT_NOT_NOW");
			return;
		}
		if (func_70())
		{
			func_21("CHEAT_PHONE_DENIED");
			return;
		}
		if (!func_104(iParam0))
		{
			func_21("CHEAT_VEHICLE_LOCKED_DENIED");
			return;
		}
		iLocal_67 = iParam0;
		iLocal_70 = sParam1;
		iLocal_46 = 2;
	}
}

int func_104(int iParam0)
{
	switch (iParam0)
	{
		case joaat("dodo"):
			if (func_105(66, 0) == 0)
			{
				return 0;
			}
			break;
		
		case joaat("dukes2"):
			if (func_105(64, 0) == 0)
			{
				return 0;
			}
			break;
		
		case joaat("submersible2"):
			if (func_105(63, 0) == 0)
			{
				return 0;
			}
			break;
	}
	return 1;
}

bool func_105(int iParam0, int iParam1)
{
	if (iParam0 == -1)
	{
		return 0;
	}
	return unk_0xCE990E643CD9D0E5(Global_111858.f_32745[iParam0], iParam1);
}

int func_106(int iParam0, int iParam1)
{
	if (unk_0xCE990E643CD9D0E5(Global_31218, iParam0))
	{
		if (iParam1 != 0)
		{
			if (iParam1 == Global_31219)
			{
				unk_0xD2459066EA58CE43(&Global_31218, iParam0);
				iLocal_83 = 1;
				return 1;
			}
			else
			{
				return 0;
			}
		}
		else
		{
			unk_0xD2459066EA58CE43(&Global_31218, iParam0);
			iLocal_83 = 1;
			return 1;
		}
	}
	return 0;
}

int func_107(int iParam0, int iParam1)
{
	if (!func_15(14))
	{
		return unk_0x282D94051551A95A(iParam0, iParam1);
	}
	return 0;
}

void func_108()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (iLocal_80[iVar0] != -1)
		{
			unk_0xB6B2734989D2EBCB(iLocal_80[iVar0]);
			iLocal_80[iVar0] = -1;
		}
		iVar0++;
	}
}

int func_109()
{
	if (((Global_98955 == 13 || Global_98955 == 10) || Global_98955 == 11) || Global_98955 == 12)
	{
		return 0;
	}
	return 1;
}

void func_110()
{
	if (func_15(14) || (!unk_0x87F0CB19476706C3() && iLocal_84 != 0))
	{
		iLocal_84 = unk_0x578C4EF320340AF7();
	}
	if (iLocal_84 != 0)
	{
		if (!func_15(14))
		{
			if ((unk_0x578C4EF320340AF7() - iLocal_84) > 1000)
			{
				iLocal_84 = 0;
			}
		}
	}
}

int func_111()
{
	if (Global_77093)
	{
		return 1;
	}
	else if (Global_61711 && !Global_61717)
	{
		return 1;
	}
	return 0;
}

void func_112()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 10)
	{
		iLocal_80[iVar0] = -1;
		iVar0++;
	}
	iLocal_82 = 0;
	iLocal_81 = 0;
}

void func_113()
{
	unk_0xC7E0BE6624EEC0C6(0);
	if (iLocal_64 == 5)
	{
		func_37();
	}
	if (iLocal_65 == 5)
	{
		func_46(1);
	}
	if (iLocal_63 == 5 || iLocal_66 == 5)
	{
		unk_0x01BFF6CEF1167310(1f);
	}
	if (!unk_0x5AEB5DDFFAD43CA5(unk_0x9B0761B4C3EB8BC7()))
	{
		if (iLocal_62 == 5)
		{
			unk_0xBF70D1B666A353F5(unk_0x460153A63B9477BC(), 0);
			unk_0x52090984B5C8A3E4(unk_0x9B0761B4C3EB8BC7(), false, false, false, false, false, 0, 0, 0);
		}
		unk_0x2C6A525B8E4EFB9F(unk_0x460153A63B9477BC(), 1f);
		unk_0x888C1AFA66384CBC(unk_0x460153A63B9477BC(), 1f);
	}
	unk_0x1E367A704B259915(0);
	Global_31216 = 0;
	Global_31215 = 0;
	Global_31217 = 0;
	Global_31218 = 0;
	Global_31220 = 0;
	Global_31219 = 0;
	unk_0xD39E529EBE5DB04F();
}

