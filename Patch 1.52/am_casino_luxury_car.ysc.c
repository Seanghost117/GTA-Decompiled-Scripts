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
	float fLocal_28 = 0f;
	var uLocal_29 = 0;
	var uLocal_30 = 0;
	var uLocal_31 = 0;
	float fLocal_32 = 0f;
	float fLocal_33 = 0f;
	var uLocal_34 = 0;
	var uLocal_35 = 0;
	int iLocal_36 = 0;
	var uLocal_37 = 0;
	var uLocal_38 = 0;
	var uLocal_39 = 0;
	int iLocal_40 = 0;
	int iLocal_41 = 0;
	int iLocal_42 = 0;
	int iLocal_43 = 0;
	var uLocal_44 = 0;
	var uLocal_45 = 0;
	var uLocal_46 = 0;
	var uLocal_47 = 0;
	var uLocal_48 = 0;
	var uLocal_49 = 0;
	var uLocal_50 = 0;
	var uLocal_51 = 0;
	var uLocal_52 = 0;
	var uLocal_53 = 0;
	var uLocal_54 = 0;
	var uLocal_55 = 0;
	var uLocal_56 = 0;
	var uLocal_57 = 0;
	var uLocal_58 = 0;
	var uLocal_59 = 0;
	var uLocal_60 = 0;
	var uLocal_61 = 0;
	float fLocal_62 = 0f;
	var uLocal_63 = 0;
	var uLocal_64 = 0;
	var uLocal_65 = 0;
	var uLocal_66 = 0;
	var uLocal_67 = 0;
	var uLocal_68 = 0;
	var uLocal_69 = 0;
	var uLocal_70 = 0;
	var uLocal_71 = 0;
	var uLocal_72 = 0;
	var uLocal_73 = 0;
	var uLocal_74 = 0;
	struct<7> Local_75 = { 0, 0, 1, 0, 0, 0, 0 } ;
	var uLocal_76 = 0;
	struct<4> Local_77[8];
	int iLocal_78[8] = { 0, 0, 0, 0, 0, 0, 0, 0 };
	var uLocal_79[1] = { 0 };
	var uLocal_80 = 0;
	struct<4> Local_81 = { 0, 0, 0, 0 } ;
	int iLocal_82 = 0;
	struct<21> Local_83 = { 0, -1, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, -1, -1 } ;
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
	fLocal_28 = 0f;
	fLocal_32 = -0.0375f;
	fLocal_33 = 0.17f;
	iLocal_36 = 3;
	iLocal_40 = 1;
	iLocal_41 = 65;
	iLocal_42 = 49;
	iLocal_43 = 64;
	fLocal_62 = ((0.05f + 0.275f) - 0.01f);
	if (unk_0x25DDB354A40FFCDB())
	{
		if (func_313(unk_0x460153A63B9477BC(), 0, 1))
		{
			if (!func_308(ScriptParam_83))
			{
				func_301();
			}
		}
		else
		{
			func_301();
		}
	}
	else
	{
		func_301();
	}
	while (true)
	{
		func_300();
		if (func_290())
		{
			func_301();
		}
		if (func_289(1))
		{
			func_301();
		}
		func_286();
		switch (func_285(unk_0x24F50C1BAF06D259()))
		{
			case 0:
				if (func_284() == 1 && func_282())
				{
					func_281(1);
				}
				break;
			
			case 1:
				switch (func_284())
				{
					case 1:
						func_238();
						break;
					
					case 2:
						func_281(2);
						break;
				}
				break;
			
			case 2:
				func_301();
				break;
		}
		if (unk_0xAFF96FDC3971E7EA())
		{
			switch (func_284())
			{
				case 0:
					if (func_22())
					{
						func_21(1);
					}
					break;
				
				case 1:
					func_1();
					break;
				
				case 2:
					func_301();
					break;
				}
		}
	}
}

void func_1()
{
	if (func_20() > 0)
	{
		func_13();
		func_4();
	}
	switch (func_20())
	{
		case 0:
			func_3(1);
			break;
		
		case 1:
			if (func_2() == 0)
			{
			}
			else
			{
				func_3(3);
			}
			break;
		
		case 3:
			func_21(2);
			break;
	}
}

int func_2()
{
	return Local_75.f_4;
}

void func_3(int iParam0)
{
	if (!unk_0xAFF96FDC3971E7EA())
	{
		return;
	}
	Local_75.f_1 = iParam0;
}

void func_4()
{
	if (func_2() != 0)
	{
		return;
	}
	if (func_12(1))
	{
		func_11(2);
		return;
	}
	if (func_12(5))
	{
		func_11(3);
		return;
	}
	if (!func_7())
	{
		if (func_5(unk_0x460153A63B9477BC()))
		{
			func_11(3);
		}
		else
		{
			func_11(1);
		}
		return;
	}
}

bool func_5(int iParam0)
{
	return func_6(iParam0, 18);
}

bool func_6(int iParam0, int iParam1)
{
	return unk_0xCE990E643CD9D0E5(Global_1630317[iParam0 /*595*/].f_11.f_6, iParam1);
}

bool func_7()
{
	return func_8(func_10());
}

int func_8(var uParam0)
{
	if (unk_0xF7DE07F319727299(uParam0))
	{
		return !func_9(unk_0x770D3B2B4702434A(uParam0));
	}
	return 0;
}

int func_9(int iParam0)
{
	if (unk_0xAE06B9E39EBDE049(iParam0))
	{
		if (unk_0xA59F96B50B97E63C(iParam0, 0))
		{
			return 1;
		}
		else if (!unk_0x80FF6C016CDB0FAF(iParam0, 0))
		{
			return 1;
		}
	}
	else
	{
		return 1;
	}
	return 0;
}

var func_10()
{
	return Local_75.f_6;
}

void func_11(int iParam0)
{
	if (!unk_0xAFF96FDC3971E7EA())
	{
		return;
	}
	Local_75.f_4 = iParam0;
}

bool func_12(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	return unk_0xCE990E643CD9D0E5(Local_75.f_2[iVar0], iVar1);
}

void func_13()
{
	if (func_19() > 0)
	{
		if (func_19() != 5)
		{
			if (!func_7())
			{
				func_18(5);
			}
		}
	}
	switch (func_19())
	{
		case 0:
			func_18(1);
			break;
		
		case 1:
			if (func_5(func_17()))
			{
				func_14(func_15(func_16(), 1, 0, 0), 0, 0f, 0, 0, 0, -1);
				func_18(2);
			}
			break;
		
		case 2:
			if (func_12(3))
			{
				func_18(3);
			}
			break;
		
		case 3:
			if (func_12(4))
			{
				func_18(4);
			}
			break;
		
		case 4:
			break;
		
		case 5:
			break;
	}
}

void func_14(int iParam0, int iParam1, float fParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	struct<9> Var0;
	
	Var0 = -1333236192;
	Var0.f_1 = unk_0x460153A63B9477BC();
	Var0.f_7 = iParam6;
	Var0.f_4 = iParam1;
	Var0.f_5 = iParam4;
	Var0.f_2 = fParam2;
	Var0.f_3 = iParam3;
	Var0.f_6 = iParam5;
	Var0.f_8 = unk_0xD3137A576BE9EC5C();
	if (!iParam0 == 0)
	{
		unk_0xB802750B43D4047C(1, &Var0, 9, iParam0);
	}
}

int func_15(int iParam0, int iParam1, bool bParam2, int iParam3)
{
	var uVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	iVar1 = 0;
	while (iVar1 < 32)
	{
		iVar3 = unk_0xF1110FE23C67293A(iVar1);
		if (func_313(iVar3, 1, 0))
		{
			if (unk_0x47DBF174A0CB9D55(unk_0x1FA7B77001D60F9D(iVar3), iParam3))
			{
				if (!unk_0x4577ACD7664F1CF3(iVar3))
				{
					iVar2 = unk_0xA5D5B1042E8F47BD(unk_0x1FA7B77001D60F9D(iVar3), iParam3);
					if (iVar2 == iParam0)
					{
						if (unk_0x6CC163E30ECE0790(iVar3) == unk_0x6CC163E30ECE0790(unk_0x460153A63B9477BC()) || !bParam2)
						{
							if (iVar3 != unk_0x460153A63B9477BC() || iParam1)
							{
								unk_0xBE20AB8238688965(&uVar0, iVar1);
							}
						}
					}
				}
			}
		}
		iVar1++;
	}
	return uVar0;
}

int func_16()
{
	return unk_0x770D3B2B4702434A(func_10());
}

int func_17()
{
	return Local_75.f_5;
}

void func_18(int iParam0)
{
	if (!unk_0xAFF96FDC3971E7EA())
	{
		return;
	}
	Local_75.f_6.f_1 = iParam0;
}

int func_19()
{
	return Local_75.f_6.f_1;
}

int func_20()
{
	return Local_75.f_1;
}

void func_21(int iParam0)
{
	Local_75 = iParam0;
}

int func_22()
{
	if (!func_12(0))
	{
		func_237(unk_0x460153A63B9477BC());
		func_236(0);
	}
	if (!func_23())
	{
		return 0;
	}
	return 1;
}

int func_23()
{
	int iVar0;
	struct<102> Var1;
	int iVar2;
	
	if (unk_0x3D70CCF2C9B362CD(func_10()))
	{
		return 1;
	}
	if (!func_289(0))
	{
		if (func_98(unk_0x3E4D3CCC220BDFB1(unk_0x9B0761B4C3EB8BC7(), 1), &Local_81, &(Local_81.f_3)))
		{
			func_97(0);
		}
	}
	if (func_95(func_96()) && func_289(0))
	{
		unk_0x555EE41D7C7078E6(Local_81, 5f, 1, 0, 0, false);
		if (func_92(&(Local_75.f_6), func_96(), Local_81, Local_81.f_3, 1, 1, 1, 0, 1, 1, 0, 0, 0, 0))
		{
			iVar0 = func_16();
			unk_0x463F70A7E1EF1482(iVar0, 0f);
			func_91(iVar0);
			unk_0x70736E63608BE77D(iVar0, 1);
			Var1 = { func_90() };
			func_24(iVar0, &Var1, 0, 1, 0);
			if (unk_0x6844807B17DC2DFC("MPBitset", 3))
			{
				if (unk_0x871819940BD2E434(iVar0, "MPBitset"))
				{
					iVar2 = unk_0x8C0800114C2864BE(iVar0, "MPBitset");
				}
				unk_0xBE20AB8238688965(&iVar2, 11);
				unk_0x00AF6A2AAFB41525(iVar0, "MPBitset", iVar2);
			}
			if (unk_0x6844807B17DC2DFC("Not_Allow_As_Saved_Veh", 3))
			{
				unk_0x00AF6A2AAFB41525(iVar0, "Not_Allow_As_Saved_Veh", 1);
			}
			unk_0x54907AF8D51E6B48(iVar0, 1);
			unk_0x1491D110B8361BFE(iVar0, 1);
			unk_0x74528AC0906CBABE(func_96());
			return 1;
		}
	}
	return 0;
}

void func_24(int iParam0, var uParam1, bool bParam2, bool bParam3, bool bParam4)
{
	float fVar0;
	
	if (unk_0xAE06B9E39EBDE049(iParam0) && unk_0x80FF6C016CDB0FAF(iParam0, 0))
	{
		if ((unk_0x25DDB354A40FFCDB() && unk_0xAA5B806352173DEA(iParam0)) || !unk_0x25DDB354A40FFCDB())
		{
			if (unk_0x460153A63B9477BC() != func_89())
			{
				uParam1->f_100 = unk_0x460153A63B9477BC();
			}
			if (uParam1->f_70 == 0)
			{
				uParam1->f_70 = 1;
			}
			func_76(iParam0, uParam1, bParam2, bParam3);
			if (!uParam1->f_78 == -1 && uParam1->f_9[14] == -1)
			{
				unk_0x6CDF39B92E5DBB31(iParam0, 1, uParam1->f_78);
			}
			if (!uParam1->f_79 == -1)
			{
				unk_0x49AA5F5E8138E6D0(iParam0, uParam1->f_79);
			}
			if (func_75(uParam1->f_66, &fVar0) && uParam1->f_80 != fVar0)
			{
				uParam1->f_80 = fVar0;
			}
			unk_0x80E6F5AEA0C688D0(iParam0, uParam1->f_80);
			unk_0x6F4F080592370CD6(iParam0, uParam1->f_97);
			if (uParam1->f_99 >= 0)
			{
				unk_0xA2E507034EC819AB(iParam0, uParam1->f_99);
			}
			if (func_74(iParam0))
			{
				func_68(iParam0, func_71(uParam1->f_74, uParam1->f_75, uParam1->f_76));
			}
			if (unk_0x514F6B2DEC79A836(iParam0) > 1 && uParam1->f_98 >= 0)
			{
				unk_0x083E5C89C0E9FBED(iParam0, uParam1->f_98);
			}
			if (unk_0xCE990E643CD9D0E5(uParam1->f_95, 0))
			{
				func_42(iParam0, &(uParam1->f_81));
			}
			if ((!func_33(4) && !bParam4) && !unk_0xFC559366953F62B3())
			{
				func_27(iParam0);
			}
			if (func_26(unk_0x36FE6D3220816ADA(iParam0)))
			{
				switch (uParam1->f_9[5])
				{
					case 0:
						unk_0x4C1DD6A89EF34554(iParam0, 16);
						break;
					
					case 1:
						unk_0x4C1DD6A89EF34554(iParam0, 16);
						if ((unk_0x68AEFA37A65085FD(iParam0, joaat("scarab")) || unk_0x68AEFA37A65085FD(iParam0, joaat("scarab2"))) || unk_0x68AEFA37A65085FD(iParam0, joaat("scarab3")))
						{
							unk_0x8DFB45E7317A7ED7(iParam0, 16, 0, false);
						}
						else
						{
							unk_0x8DFB45E7317A7ED7(iParam0, 16, 2, false);
						}
						break;
					
					case 2:
						unk_0x4C1DD6A89EF34554(iParam0, 16);
						if ((unk_0x68AEFA37A65085FD(iParam0, joaat("scarab")) || unk_0x68AEFA37A65085FD(iParam0, joaat("scarab2"))) || unk_0x68AEFA37A65085FD(iParam0, joaat("scarab3")))
						{
							unk_0x8DFB45E7317A7ED7(iParam0, 16, 1, false);
						}
						else
						{
							unk_0x8DFB45E7317A7ED7(iParam0, 16, 3, false);
						}
						break;
					
					case 3:
						unk_0x4C1DD6A89EF34554(iParam0, 16);
						if ((unk_0x68AEFA37A65085FD(iParam0, joaat("scarab")) || unk_0x68AEFA37A65085FD(iParam0, joaat("scarab2"))) || unk_0x68AEFA37A65085FD(iParam0, joaat("scarab3")))
						{
							unk_0x8DFB45E7317A7ED7(iParam0, 16, 2, false);
						}
						else
						{
							unk_0x8DFB45E7317A7ED7(iParam0, 16, 4, false);
						}
						break;
					
					default:
						if (uParam1->f_9[5] != -1)
						{
							unk_0x4C1DD6A89EF34554(iParam0, 16);
							if ((unk_0x68AEFA37A65085FD(iParam0, joaat("scarab")) || unk_0x68AEFA37A65085FD(iParam0, joaat("scarab2"))) || unk_0x68AEFA37A65085FD(iParam0, joaat("scarab3")))
							{
								unk_0x8DFB45E7317A7ED7(iParam0, 16, 2, false);
							}
							else
							{
								unk_0x8DFB45E7317A7ED7(iParam0, 16, 4, false);
							}
						}
						break;
					}
			}
			switch (uParam1->f_94)
			{
				case 0:
					break;
				
				case 1:
					if (unk_0xCE990E643CD9D0E5(uParam1->f_95, 1) && unk_0xCE990E643CD9D0E5(uParam1->f_95, 2))
					{
						if (unk_0xCE990E643CD9D0E5(uParam1->f_95, 3))
						{
						}
					}
					else if (unk_0x6844807B17DC2DFC("Player_Vehicle", 3))
					{
						unk_0x00AF6A2AAFB41525(iParam0, "Player_Vehicle", -1);
					}
					break;
				
				case 2:
					if (unk_0xCE990E643CD9D0E5(uParam1->f_95, 1) && unk_0xCE990E643CD9D0E5(uParam1->f_95, 2))
					{
						if (unk_0x6844807B17DC2DFC("Veh_Modded_By_Player", 3))
						{
							unk_0x00AF6A2AAFB41525(iParam0, "Veh_Modded_By_Player", unk_0x69FCAB6112C0ABA7(unk_0x460153A63B9477BC()));
						}
					}
					else if (unk_0x6844807B17DC2DFC("Veh_Modded_By_Player", 3))
					{
						if (func_25(uParam1->f_81) && unk_0x29EC5130E3AD4D5A(&(uParam1->f_81)))
						{
							unk_0x00AF6A2AAFB41525(iParam0, "Veh_Modded_By_Player", unk_0x69FCAB6112C0ABA7(unk_0xAAA938655BBB5286(&(uParam1->f_81))));
						}
						else
						{
							unk_0x00AF6A2AAFB41525(iParam0, "Veh_Modded_By_Player", -1);
						}
					}
					break;
				
				case 3:
					break;
				
				case 4:
					break;
				}
		}
	}
}

bool func_25(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12)
{
	return unk_0xF6B8932480699645(&uParam0, 13);
}

int func_26(int iParam0)
{
	switch (iParam0)
	{
		case joaat("pounder2"):
		case joaat("mule4"):
		case joaat("speedo4"):
		case joaat("imperator"):
		case joaat("deathbike"):
		case joaat("cerberus"):
		case joaat("bruiser"):
		case joaat("dominator4"):
		case joaat("zr380"):
		case joaat("issi4"):
		case joaat("imperator2"):
		case joaat("deathbike2"):
		case joaat("cerberus2"):
		case joaat("bruiser2"):
		case joaat("dominator5"):
		case joaat("zr3802"):
		case joaat("issi5"):
		case joaat("imperator3"):
		case joaat("deathbike3"):
		case joaat("cerberus3"):
		case joaat("bruiser3"):
		case joaat("dominator6"):
		case joaat("zr3803"):
		case joaat("issi6"):
		case joaat("impaler2"):
		case joaat("impaler3"):
		case joaat("impaler4"):
		case joaat("slamvan4"):
		case joaat("slamvan5"):
		case joaat("slamvan6"):
		case joaat("monster3"):
		case joaat("monster4"):
		case joaat("monster5"):
		case joaat("scarab"):
		case joaat("scarab2"):
		case joaat("scarab3"):
		case joaat("brutus"):
		case joaat("brutus2"):
		case joaat("brutus3"):
			return 1;
			break;
	}
	return 0;
}

void func_27(int iParam0)
{
	struct<3> Var0;
	
	if (Global_262145.f_19692)
	{
		if (unk_0xAE06B9E39EBDE049(iParam0))
		{
			if (unk_0x4349BF35C5B9A49B(iParam0))
			{
				Var0.x = unk_0x36FE6D3220816ADA(iParam0);
				Var0.f_1 = unk_0x856D5567211886A2(unk_0x6984AA4EC2FF9734(iParam0));
				if (unk_0x6844807B17DC2DFC("RandomID", 3))
				{
					if (!unk_0x871819940BD2E434(iParam0, "RandomID"))
					{
						Var0.f_2 = unk_0x344C570D6F8700DF(0, 65535);
						unk_0x00AF6A2AAFB41525(iParam0, "RandomID", Var0.f_2);
					}
					else
					{
						Var0.f_2 = unk_0x8C0800114C2864BE(iParam0, "RandomID");
					}
				}
				func_28(Var0);
			}
		}
	}
}

void func_28(struct<3> Param0)
{
	struct<3> Var0;
	
	Var0.x = -365271546;
	Var0.f_1 = unk_0x460153A63B9477BC();
	Var0.f_2 = Param0.x;
	Var0.f_2.f_1 = Param0.f_1;
	Var0.f_2.f_2 = Param0.f_2;
	unk_0xB802750B43D4047C(1, &Var0, 5, func_29(1, 1));
}

var func_29(int iParam0, bool bParam1)
{
	var uVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = 0;
	while (iVar1 < 32)
	{
		iVar2 = unk_0xF1110FE23C67293A(iVar1);
		if (func_313(iVar2, 0, 0))
		{
			if (iVar2 != unk_0x460153A63B9477BC() || iParam0)
			{
				if (bParam1)
				{
					unk_0xBE20AB8238688965(&uVar0, iVar1);
				}
				else if (!func_30(iVar2, 0))
				{
					unk_0xBE20AB8238688965(&uVar0, iVar1);
				}
			}
		}
		iVar1++;
	}
	return uVar0;
}

bool func_30(int iParam0, int iParam1)
{
	bool bVar0;
	
	if (iParam0 == unk_0x460153A63B9477BC())
	{
		bVar0 = func_31(-1, 0) == 8;
	}
	else
	{
		bVar0 = Global_1590682[iParam0 /*883*/].f_211 == 8;
	}
	if (iParam1 == 1)
	{
		if (unk_0x166E920FB00B2DBB(iParam0))
		{
			bVar0 = unk_0x6CC163E30ECE0790(iParam0) == 8;
		}
	}
	return bVar0;
}

int func_31(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_32();
	}
	if (Global_1312876[iVar1] == 1)
	{
		if (bParam1)
		{
		}
		iVar0 = 8;
	}
	else
	{
		iVar0 = Global_1312757[iVar1];
		if (bParam1)
		{
		}
	}
	return iVar0;
}

int func_32()
{
	return Global_1312763;
}

int func_33(int iParam0)
{
	int iVar0;
	
	if (func_41())
	{
		iVar0 = 0;
		while (iVar0 < 54)
		{
			if (func_40(iVar0) == iParam0)
			{
				if (func_34(iVar0))
				{
					return 1;
				}
			}
			iVar0++;
		}
	}
	return 0;
}

bool func_34(int iParam0)
{
	return func_35(iParam0, 6, 1);
}

int func_35(int iParam0, int iParam1, bool bParam2)
{
	if (iParam0 == -1)
	{
		return 0;
	}
	if (bParam2)
	{
		return unk_0xCE990E643CD9D0E5(Global_99007.f_1364[iParam0], iParam1);
	}
	else if (unk_0x25DDB354A40FFCDB())
	{
		if (func_39() == 0)
		{
			return unk_0xCE990E643CD9D0E5(func_36(func_38(iParam0), -1, 0), iParam1);
		}
	}
	else
	{
		return unk_0xCE990E643CD9D0E5(Global_111858.f_668[iParam0], iParam1);
	}
	return 0;
}

int func_36(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	var uVar1;
	
	if (iParam0 != 11771)
	{
		if (iParam2 == 0)
		{
		}
		iVar0 = Global_2551832[iParam0 /*3*/][func_37(iParam1)];
		if (unk_0xD2F202166691EDB2(iVar0, &uVar1, -1))
		{
			return uVar1;
		}
	}
	return 0;
}

int func_37(var uParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = uParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_32();
		if (iVar1 > -1)
		{
			Global_2551544 = 0;
			iVar0 = iVar1;
		}
		else
		{
			iVar0 = 0;
			Global_2551544 = 1;
		}
	}
	return iVar0;
}

int func_38(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 827;
			break;
		
		case 1:
			return 828;
			break;
		
		case 2:
			return 829;
			break;
		
		case 3:
			return 830;
			break;
		
		case 4:
			return 831;
			break;
		
		case 5:
			return 832;
			break;
		
		case 6:
			return 833;
			break;
		
		case 7:
			return 834;
			break;
		
		case 8:
			return 835;
			break;
		
		case 9:
			return 836;
			break;
		
		case 10:
			return 837;
			break;
		
		case 11:
			return 838;
			break;
		
		case 12:
			return 839;
			break;
		
		case 13:
			return 840;
			break;
		
		case 14:
			return 841;
			break;
		
		case 15:
			return 843;
			break;
		
		case 16:
			return 844;
			break;
		
		case 17:
			return 845;
			break;
		
		case 18:
			return 846;
			break;
		
		case 19:
			return 847;
			break;
		
		case 20:
			return 848;
			break;
		
		case 21:
			return 849;
			break;
		
		case 22:
			return 850;
			break;
		
		case 23:
			return 851;
			break;
		
		case 24:
			return 852;
			break;
		
		case 25:
			return 853;
			break;
		
		case 26:
			return 854;
			break;
		
		case 27:
			return 855;
			break;
		
		case 28:
			return 856;
			break;
		
		case 29:
			return 857;
			break;
		
		case 30:
			return 858;
			break;
		
		case 31:
			return 859;
			break;
		
		case 32:
			return 860;
			break;
		
		case 33:
			return 861;
			break;
		
		case 34:
			return 862;
			break;
		
		case 35:
			return 863;
			break;
		
		case 36:
			return 864;
			break;
		
		case 37:
			return 865;
			break;
		
		case 38:
			return 866;
			break;
		
		case 39:
			return 867;
			break;
		
		case 40:
			return 871;
			break;
		
		case 41:
			return 872;
			break;
		
		case 42:
			return 873;
			break;
		
		case 43:
			return 874;
			break;
		
		case 44:
			return 10099;
			break;
		
		case 45:
			return 3809;
			break;
		
		case 46:
			return 5384;
			break;
		
		case 47:
			return 6156;
			break;
		
		case 48:
			return 7233;
			break;
		
		case 49:
			return 7879;
			break;
		
		case 52:
			return 8913;
			break;
		
		case 50:
			return 8266;
			break;
		
		case 51:
			return 8268;
			break;
		
		case 53:
			return 9553;
			break;
		
		default:
			break;
	}
	return 11771;
}

int func_39()
{
	return Global_30968;
}

int func_40(int iParam0)
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

bool func_41()
{
	return Global_99007.f_352 > 0;
}

int func_42(int iParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	
	if (!func_52(iParam0, uParam1))
	{
		return 1;
	}
	iVar0 = 0;
	if (!unk_0xA59F96B50B97E63C(iParam0, 0))
	{
		iVar0 = unk_0xE611DE8C975C240C(iParam0, 0);
	}
	if (iVar0 == 0)
	{
		if (!func_50(iParam0))
		{
			iVar1 = unk_0xAAA938655BBB5286(uParam1);
			if (func_45(&iParam0, iVar1))
			{
			}
			else
			{
				return 1;
			}
		}
		else
		{
			return 1;
		}
	}
	else if (iVar0 >= 3)
	{
		return 1;
	}
	else if (func_43(iParam0))
	{
	}
	return 0;
}

int func_43(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	iVar0 = 0;
	if (!unk_0xA59F96B50B97E63C(iParam0, 0))
	{
		iVar0 = unk_0xE611DE8C975C240C(iParam0, 0);
	}
	if (iVar0 == 1 || iVar0 == 2)
	{
		if (iVar0 == 1)
		{
			if (unk_0x25DDB354A40FFCDB())
			{
				iVar1 = unk_0x6CAAB7E78B5D978A();
			}
			else
			{
				iVar1 = unk_0x578C4EF320340AF7();
			}
			iVar2 = unk_0x44F29CF6A0675F4F(unk_0x624736CA66E14161(iVar1, Global_1315750));
			iVar3 = 20000;
			if (Global_1574416)
			{
				iVar3 = 2000;
			}
			if (iVar2 > iVar3)
			{
				unk_0x9CD0A7C6B7459240(iParam0);
				func_44(iParam0);
				return 0;
			}
		}
		return 1;
	}
	return 0;
}

void func_44(int iParam0)
{
	int iVar0;
	
	if (unk_0x6844807B17DC2DFC("MPBitset", 3))
	{
		if (unk_0xAE06B9E39EBDE049(iParam0) && unk_0x80FF6C016CDB0FAF(iParam0, 0))
		{
			if (unk_0x871819940BD2E434(iParam0, "MPBitset"))
			{
				iVar0 = unk_0x8C0800114C2864BE(iParam0, "MPBitset");
			}
		}
	}
	if (!unk_0xCE990E643CD9D0E5(iVar0, 16))
	{
		unk_0xBE20AB8238688965(&iVar0, 16);
		unk_0x00AF6A2AAFB41525(iParam0, "MPBitset", iVar0);
	}
}

int func_45(int iParam0, int iParam1)
{
	func_49();
	if (Global_1312485.f_18 != 0 || unk_0xCEA0613B0A879C8E(*iParam0))
	{
		Global_1678175.f_11 = unk_0xE519C159A2C4FF27(*iParam0);
		if (Global_1678175.f_11 < 0f)
		{
			Global_1678175.f_11 = 0f;
		}
	}
	func_47(*iParam0, &Global_1678175, &(Global_1678175.f_1), &(Global_1678175.f_4), &(Global_1678175.f_7), &(Global_1678175.f_10));
	Global_1678175.f_1.f_2 = (Global_1678175.f_1.f_2 - Global_1678175.f_11);
	if (Global_1678175.f_4.f_2 < 0f)
	{
		Global_1678175.f_12 = 1;
	}
	Global_1678175.f_13 = 200;
	if (unk_0x36FE6D3220816ADA(*iParam0) == joaat("windsor") || unk_0x36FE6D3220816ADA(*iParam0) == joaat("comet4"))
	{
		Global_1678175.f_13 = 255;
	}
	if (Global_1678175.f_12)
	{
		if (func_46(iParam0, iParam1, Global_1678175, Global_1678175.f_1, Global_1678175.f_4, Global_1678175.f_7, Global_1678175.f_10, 0, Global_1678175.f_13))
		{
			if (unk_0x25DDB354A40FFCDB())
			{
				Global_1315750 = unk_0x6CAAB7E78B5D978A();
			}
			else
			{
				Global_1315750 = unk_0x578C4EF320340AF7();
			}
			return 1;
		}
	}
	else
	{
		Global_1678175.f_14 = { Global_1678175.f_1 };
		Global_1678175.f_14 = (Global_1678175.f_14 * -1f);
		Global_1678175.f_17 = { Global_1678175.f_4 };
		Global_1678175.f_17 = (Global_1678175.f_17 * -1f);
		Global_1678175.f_20 = { Global_1678175.f_7 };
		Global_1678175.f_20.f_1 = (Global_1678175.f_20.f_1 * -1f);
		Global_1678175.f_20.f_2 = (Global_1678175.f_20.f_2 * -1f);
		if (!unk_0x62B133F8490E0B2E(*iParam0, 0))
		{
			Global_1678175.f_23 = unk_0xE611DE8C975C240C(*iParam0, 0);
		}
		else
		{
			Global_1678175.f_23 = 3;
		}
		Global_1678175.f_24 = unk_0xE611DE8C975C240C(*iParam0, 1);
		if (!unk_0x62B133F8490E0B2E(*iParam0, 1))
		{
			Global_1678175.f_24 = unk_0xE611DE8C975C240C(*iParam0, 1);
		}
		else
		{
			Global_1678175.f_24 = 3;
		}
		if (((Global_1678175.f_23 == 0 && func_46(iParam0, iParam1, Global_1678175, Global_1678175.f_1, Global_1678175.f_4, Global_1678175.f_7, Global_1678175.f_10, 0, Global_1678175.f_13)) || Global_1678175.f_23 != 0) && ((Global_1678175.f_24 == 0 && func_46(iParam0, iParam1, Global_1678175, Global_1678175.f_14, Global_1678175.f_17, Global_1678175.f_20, Global_1678175.f_10, 1, Global_1678175.f_13)) || Global_1678175.f_24 != 0))
		{
			if (unk_0x25DDB354A40FFCDB())
			{
				Global_1315750 = unk_0x6CAAB7E78B5D978A();
			}
			else
			{
				Global_1315750 = unk_0x578C4EF320340AF7();
			}
			return 1;
		}
	}
	return 0;
}

bool func_46(var uParam0, int iParam1, var uParam2, struct<3> Param3, struct<3> Param4, struct<3> Param5, var uParam6, int iParam7, var uParam8)
{
	return unk_0x81705B6185E70EB7(*uParam0, unk_0x1FA7B77001D60F9D(iParam1), uParam2, Param3, Param4, Param5, uParam6, iParam7, uParam8);
}

int func_47(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5)
{
	if (!unk_0xAE06B9E39EBDE049(iParam0) || !unk_0x80FF6C016CDB0FAF(iParam0, 0))
	{
		return 0;
	}
	*uParam1 = unk_0x0724529FC474C803(iParam0, "chassis_dummy");
	if (((!func_48(Global_1678201, 0f, 0f, 0f, 0) && !func_48(Global_1678204, 0f, 0f, 0f, 0)) && !func_48(Global_1678207, 0f, 0f, 0f, 0)) && !Global_1678210 == 0f)
	{
		*uParam2 = { Global_1678201 };
		*uParam3 = { Global_1678204 };
		*uParam4 = { Global_1678207 };
		*uParam5 = Global_1678210;
		return 1;
	}
	switch (unk_0x36FE6D3220816ADA(iParam0))
	{
		case joaat("dominator"):
			*uParam1 = unk_0x0724529FC474C803(iParam0, "chassis_dummy");
			*uParam2 = { 0f, 1.4f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case joaat("feltzer2"):
			*uParam1 = unk_0x0724529FC474C803(iParam0, "chassis_dummy");
			*uParam2 = { 0f, 1.4f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case joaat("adder"):
			*uParam2 = { 0f, 1.54f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case joaat("akuma"):
			*uParam2 = { 0f, 0.06f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.18f;
			break;
		
		case joaat("asea"):
			*uParam2 = { 0f, 1.5f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case joaat("asterope"):
			*uParam2 = { 0f, 1.7f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case joaat("bagger"):
			*uParam2 = { -1f, 0.16f, 0.283f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.09f;
			break;
		
		case joaat("baller"):
			*uParam2 = { 0f, 1.4f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case joaat("baller2"):
			*uParam2 = { 0f, 1.55f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case joaat("banshee"):
			*uParam2 = { 0f, 0.94f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.4f;
			break;
		
		case joaat("bati"):
			*uParam2 = { 0f, 0.2f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.15f;
			break;
		
		case joaat("bati2"):
			*uParam2 = { 0f, 0.2f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.15f;
			break;
		
		case joaat("bfinjection"):
			*uParam2 = { -1f, 0.08f, 0.19f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case joaat("bison"):
			*uParam2 = { 0f, 1.99f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case joaat("bjxl"):
			*uParam2 = { 0f, 1.2f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.4f;
			break;
		
		case joaat("blista"):
			*uParam2 = { 0f, 1.49f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.29f;
			break;
		
		case joaat("bobcatxl"):
			*uParam2 = { 0f, 1.68f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.65f;
			break;
		
		case joaat("bodhi2"):
			*uParam2 = { 0f, 1.95f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case joaat("buccaneer"):
			*uParam2 = { 0f, 2.01f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.37f;
			break;
		
		case joaat("buffalo"):
			*uParam2 = { 0f, 1.6f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case joaat("buffalo2"):
			*uParam2 = { 0f, 2.24f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.2f;
			break;
		
		case joaat("bullet"):
			*uParam2 = { -1.57f, 0.07f, 0.16f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.3f;
			break;
		
		case joaat("carbonrs"):
			*uParam2 = { 0f, 0.09f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.18f;
			break;
		
		case joaat("carbonizzare"):
			*uParam2 = { 0f, 1.45f, 1f };
			*uParam3 = { 0f, -0.11f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case joaat("cavalcade"):
			*uParam2 = { 0f, 1.51f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.55f;
			break;
		
		case joaat("cavalcade2"):
			*uParam2 = { 0f, 1.59f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case joaat("cheetah"):
			*uParam2 = { -1.61f, 0.26f, 0.17f };
			*uParam3 = { 0.9f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.35f;
			break;
		
		case joaat("cogcabrio"):
			*uParam2 = { 0f, 1.42f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case joaat("comet2"):
			*uParam2 = { 0f, 1.35f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case joaat("coquette"):
			*uParam2 = { 0f, 0.96f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.22f;
			break;
		
		case joaat("daemon"):
			*uParam2 = { 0f, 0.06f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.15f;
			break;
		
		case joaat("dilettante"):
			*uParam2 = { 0f, 1.59f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case joaat("dloader"):
			*uParam2 = { 0f, 1.52f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case joaat("double"):
			*uParam2 = { 0f, 0.08f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.2f;
			break;
		
		case joaat("dubsta"):
			*uParam2 = { -1.71f, 0.31f, 0.27f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case joaat("dubsta2"):
			*uParam2 = { 0f, 1.4f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.75f;
			break;
		
		case joaat("elegy2"):
			*uParam2 = { 0f, 1.14f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.35f;
			break;
		
		case joaat("emperor"):
			*uParam2 = { 0f, 1.31f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case joaat("emperor2"):
			*uParam2 = { 0f, 1.31f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case joaat("entityxf"):
			*uParam2 = { -1.52f, 0.41f, 0.15f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.3f;
			break;
		
		case joaat("exemplar"):
			*uParam2 = { 0f, 1.32f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case joaat("f620"):
			*uParam2 = { 0f, 1.28f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.45f;
			break;
		
		case joaat("faggio2"):
			*uParam2 = { -1f, -0.48f, -0.11f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.15f;
			break;
		
		case joaat("felon"):
			*uParam2 = { 0f, 1.24f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.35f;
			break;
		
		case joaat("felon2"):
			*uParam2 = { 0f, 1.24f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.35f;
			break;
		
		case joaat("fq2"):
			*uParam2 = { 0f, 1.4f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case joaat("fugitive"):
			*uParam2 = { 0f, 1.62f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case joaat("fusilade"):
			*uParam2 = { 0f, 0.98f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.2f;
			break;
		
		case joaat("futo"):
			*uParam2 = { 0f, 1.28f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.45f;
			break;
		
		case joaat("gauntlet"):
			*uParam2 = { 0f, 1.735f, 1.05f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.33f;
			break;
		
		case joaat("granger"):
			*uParam2 = { 0f, 2.07f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case joaat("gresley"):
			*uParam2 = { 0f, 1.75f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case joaat("habanero"):
			*uParam2 = { 0f, 1.69f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case joaat("hexer"):
			*uParam2 = { 0f, -0.46f, 1f };
			*uParam3 = { 0f, 1f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.14f;
			break;
		
		case joaat("hotknife"):
			*uParam2 = { -1.43f, -0.14f, 0.18f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case joaat("infernus"):
			*uParam2 = { -1f, 0.33f, 0.08f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0.06f };
			*uParam5 = 0.25f;
			break;
		
		case joaat("ingot"):
			*uParam2 = { 0f, 1.58f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case joaat("intruder"):
			*uParam2 = { 0f, 1.623f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case joaat("issi2"):
			*uParam2 = { 0f, 1.21f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.3f;
			break;
		
		case joaat("jackal"):
			*uParam2 = { 0f, 1.36f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.4f;
			break;
		
		case joaat("jb700"):
			*uParam2 = { 0f, 1.2f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.37f;
			break;
		
		case joaat("khamelion"):
			*uParam2 = { 0f, 1.46f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.475f;
			break;
		
		case joaat("landstalker"):
			*uParam2 = { 0f, 1.83f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case joaat("manana"):
			*uParam2 = { 0f, 0.86f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.37f;
			break;
		
		case joaat("mesa"):
			*uParam2 = { 0f, 1.47f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case joaat("mesa3"):
			*uParam2 = { 0f, 1.47f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case joaat("minivan"):
			*uParam2 = { 0f, 1.95f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case joaat("monroe"):
			*uParam2 = { 0f, 1.23f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.43f;
			break;
		
		case joaat("nemesis"):
			*uParam2 = { 0f, 0.14f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.1f;
			break;
		
		case joaat("ninef"):
			*uParam2 = { 0f, 1.7f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case joaat("ninef2"):
			*uParam2 = { 0f, 1.7f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case joaat("oracle"):
			*uParam2 = { 0f, 1.6f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case joaat("oracle2"):
			*uParam2 = { 0f, 1.7f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case joaat("patriot"):
			*uParam2 = { 0f, 1.75f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case joaat("pcj"):
			*uParam2 = { 0f, 0.02f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.15f;
			break;
		
		case joaat("penumbra"):
			*uParam2 = { 0f, 1.46f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case joaat("peyote"):
			*uParam2 = { -1f, -0.36f, 0.2125f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case joaat("phoenix"):
			*uParam2 = { 0f, 1.833f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.44f;
			break;
		
		case joaat("picador"):
			*uParam2 = { 0f, 1.43f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.515f;
			break;
		
		case joaat("prairie"):
			*uParam2 = { 0f, 1.41f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.31f;
			break;
		
		case joaat("premier"):
			*uParam2 = { 0f, 1.6f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case joaat("primo"):
			*uParam2 = { 0f, 1.62f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case joaat("radi"):
			*uParam2 = { 0f, 1.74f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case joaat("rancherxl"):
			*uParam2 = { 0f, 1.54f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case joaat("rapidgt"):
			*uParam2 = { 0f, 1.263f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case joaat("rapidgt2"):
			*uParam2 = { 0f, 1.263f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case joaat("ratloader"):
			*uParam2 = { -1.78f, 0.52f, 0.52f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.45f;
			break;
		
		case joaat("rebel"):
			*uParam2 = { -1.22f, 0.6f, 0.44f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case joaat("rebel2"):
			*uParam2 = { 0f, 1.623f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case joaat("regina"):
			*uParam2 = { 0f, 1.473f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case joaat("rocoto"):
			*uParam2 = { 0f, 1.623f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case joaat("romero"):
			*uParam2 = { 0f, 1.83f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case joaat("ruffian"):
			*uParam2 = { 0f, -0.02f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.19f;
			break;
		
		case joaat("ruiner"):
			*uParam2 = { 0f, 1.34f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case joaat("sabregt"):
			*uParam2 = { -1f, 0f, 0.14f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0.015f };
			*uParam5 = 0.35f;
			break;
		
		case joaat("sadler"):
			*uParam2 = { 0f, 2.26f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case joaat("sandking"):
			*uParam2 = { 0f, 2.496f, 1.55f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case joaat("sandking2"):
			*uParam2 = { 0f, 2.286f, 1.55f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case joaat("schafter2"):
			*uParam2 = { 0f, 1.56f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.28f;
			break;
		
		case joaat("schwarzer"):
			*uParam2 = { 0f, 1.43f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.28f;
			break;
		
		case joaat("seminole"):
			*uParam2 = { 0f, 1.45f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case joaat("sentinel"):
			*uParam2 = { 0f, 1.52f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case joaat("sentinel2"):
			*uParam2 = { 0f, 1.52f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case joaat("serrano"):
			*uParam2 = { 0f, 1.68f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.49f;
			break;
		
		case joaat("stanier"):
			*uParam2 = { 0f, 1.55f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case joaat("stinger"):
			*uParam2 = { 0f, 1.3f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case joaat("stingergt"):
			*uParam2 = { -1f, -0.17f, 0.12f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.35f;
			break;
		
		case joaat("stratum"):
			*uParam2 = { 0f, 1.52f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case joaat("sultan"):
			*uParam2 = { 0f, 1.77f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.33f;
			break;
		
		case joaat("superd"):
			*uParam2 = { 0f, 1.62f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case joaat("surano"):
			*uParam2 = { 0f, 1.38f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case joaat("surfer"):
			*uParam2 = { 0f, 2.48f, 0.26f };
			*uParam3 = { 0f, -1f, -0.212f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.32f;
			break;
		
		case joaat("surfer2"):
			*uParam2 = { 0f, 2.48f, 0.26f };
			*uParam3 = { 0f, -1f, -0.212f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.32f;
			break;
		
		case joaat("surge"):
			*uParam2 = { 0f, 1.69f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case joaat("tailgater"):
			*uParam2 = { 0f, 1.783f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.4f;
			break;
		
		case joaat("tornado"):
			*uParam2 = { -1.23f, 0.11f, -0.21f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.4f;
			break;
		
		case joaat("tornado2"):
			*uParam2 = { 0f, 1.44f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case joaat("tornado3"):
			*uParam2 = { 0f, 1.44f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case joaat("vacca"):
			*uParam2 = { 0f, 1.76f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.35f;
			break;
		
		case joaat("vader"):
			*uParam2 = { 0f, 0.08f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.15f;
			break;
		
		case joaat("vigero"):
			*uParam2 = { -1f, 0.11f, -0.15f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.45f;
			break;
		
		case joaat("voltic"):
			*uParam2 = { 0f, 1.763f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.29f;
			break;
		
		case joaat("voodoo2"):
			*uParam2 = { 0f, 1.48f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case joaat("washington"):
			*uParam2 = { 0f, 1.61f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case joaat("youga"):
			*uParam2 = { 0f, 2.352f, 1.003f };
			*uParam3 = { 0f, -1f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.175f;
			break;
		
		case joaat("zion"):
			*uParam2 = { 0f, 1.48f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.45f;
			break;
		
		case joaat("zion2"):
			*uParam2 = { 0f, 1.48f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.45f;
			break;
		
		case joaat("ztype"):
			*uParam2 = { -0.96f, -0.69f, 0.35f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.4f;
			break;
		
		default:
			*uParam2 = { -1f, 0f, 0.295f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, 0f, -1f };
			*uParam5 = 0.5f;
			break;
	}
	switch (unk_0x36FE6D3220816ADA(iParam0))
	{
		case joaat("kalahari"):
			*uParam2 = { -1f, 0.18f, 0.1f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case joaat("paradise"):
			*uParam2 = { 0f, 2.23f, 1f };
			*uParam3 = { 0f, -0.22f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case joaat("alpha"):
			*uParam2 = { -1f, 0.18f, -0.05f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case joaat("huntley"):
			*uParam2 = { 0f, 1.52f, 0.99f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.4f;
			break;
		
		case joaat("zentorno"):
			*uParam2 = { -1.24f, 0.42f, -0.14f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0.035f };
			*uParam5 = 0.3f;
			break;
		
		case joaat("jester"):
			*uParam2 = { -1f, 0.17f, 0.22f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0.05f };
			*uParam5 = 0.33f;
			break;
		
		case joaat("massacro"):
			*uParam2 = { 0f, 1.37f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.33f;
			break;
		
		case joaat("turismor"):
			*uParam2 = { -1f, 0.3f, 0.27f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.35f;
			break;
		
		case joaat("thrust"):
			*uParam2 = { -1f, 0.405f, 0.4625f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.1625f;
			break;
		
		case joaat("btype"):
			*uParam2 = { 0f, 1.143f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.7125f;
			break;
		
		case joaat("rhapsody"):
			*uParam2 = { -1f, -0.47f, -0.25f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.2625f;
			break;
		
		case joaat("glendale"):
			*uParam2 = { 0f, 1.683f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.775f;
			break;
		
		case joaat("warrener"):
			*uParam2 = { 0f, 1.623f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.775f;
			break;
		
		case joaat("blade"):
			*uParam2 = { -1f, 0.445f, 0.2075f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.325f;
			break;
		
		case joaat("panto"):
			*uParam2 = { -1f, 0f, 0.335f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case joaat("dubsta3"):
			*uParam2 = { -1f, 0.34f, 0.2975f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case joaat("pigalle"):
			*uParam2 = { 0f, 1.623f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case joaat("coquette2"):
			*uParam2 = { -1f, -0.1775f, 0.195f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.35f;
			break;
		
		case joaat("innovation"):
			*uParam2 = { 0f, 0.15f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.18f;
			break;
		
		case joaat("hakuchou"):
			*uParam2 = { 0f, 0.27f, 0.845f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.16f;
			break;
		
		case joaat("furoregt"):
			*uParam2 = { -1f, 0f, 0.2075f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.45f;
			break;
		
		case joaat("ratloader2"):
			*uParam2 = { -1.78f, 0.52f, 0.52f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.45f;
			break;
		
		case joaat("slamvan"):
			*uParam2 = { -1f, 0.275f, 0.195f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case joaat("dukes2"):
			*uParam2 = { -1f, 0f, 0f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.375f;
			break;
		
		case joaat("dukes"):
			*uParam2 = { -1f, 0f, 0.0375f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.3875f;
			break;
		
		case joaat("stalion"):
			*uParam2 = { -1f, 0f, 0.0925f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.4375f;
			break;
		
		case joaat("blista2"):
			*uParam2 = { -1f, 0.5325f, 0.245f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.2875f;
			break;
		
		case joaat("casco"):
			*uParam2 = { 0f, 0.94f, 1.03f };
			*uParam3 = { 0f, -0.03f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.3f;
			break;
		
		case joaat("enduro"):
			*uParam2 = { 0f, -0.17f, 1f };
			*uParam3 = { 0f, 0.34f, -0.786f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.15f;
			break;
		
		case joaat("gburrito2"):
			*uParam2 = { 0f, 2.32f, 0.94f };
			*uParam3 = { 0f, -0.182f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.4f;
			break;
		
		case joaat("guardian"):
			*uParam2 = { -1.94f, 1.07f, 0.38f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.35f;
			break;
		
		case joaat("kuruma"):
		case joaat("kuruma2"):
			*uParam2 = { -1f, 0.2475f, -0.175f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.435f;
			break;
		
		case joaat("lectro"):
			*uParam2 = { 0f, 0.3f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.09f;
			break;
		
		case joaat("feltzer3"):
			*uParam1 = unk_0x0724529FC474C803(iParam0, "chassis_dummy");
			*uParam2 = { 0f, 1.4f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case joaat("osiris"):
			*uParam2 = { -1f, 0.27f, -0.03f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.3f;
			break;
		
		case joaat("virgo"):
			*uParam2 = { -1.05f, 0f, 0.075f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.45f;
			break;
		
		case joaat("windsor"):
			*uParam2 = { -1.2f, -0.39f, 0.12f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.55f;
			break;
		
		case joaat("brawler"):
			*uParam2 = { -1f, -0.21f, 0f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.45f;
			break;
		
		case joaat("chino"):
			*uParam2 = { -1.05f, 0f, 0.075f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.45f;
			break;
		
		case joaat("coquette3"):
			*uParam2 = { -1f, -0.1775f, 0.195f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.35f;
			break;
		
		case joaat("t20"):
			*uParam2 = { -1f, 0.4f, -0.12f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.2f;
			break;
		
		case joaat("vindicator"):
			*uParam2 = { -1f, 0.21f, 0.24f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.3f;
			break;
		
		case joaat("faction"):
			*uParam2 = { -1f, 0f, 0.15f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case joaat("faction2"):
			*uParam2 = { -1f, 0f, 0.15f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case joaat("buccaneer2"):
			*uParam2 = { 0f, 2.01f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.37f;
			break;
		
		case joaat("chino2"):
			*uParam2 = { -1.05f, 0f, 0.075f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.45f;
			break;
		
		case joaat("moonbeam"):
			*uParam2 = { 0f, 1.713f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case joaat("moonbeam2"):
			*uParam2 = { 0f, 1.713f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case joaat("primo2"):
			*uParam2 = { -1f, 0.42f, 0f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case joaat("voodoo"):
			*uParam2 = { -1.12f, 0f, 0f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case joaat("faction3"):
			*uParam2 = { -1f, 0f, 0.5f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case joaat("sabregt2"):
			*uParam2 = { -1f, 0f, 0.14f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0.015f };
			*uParam5 = 0.35f;
			break;
		
		case joaat("tornado5"):
			*uParam2 = { -1f, 0.15f, -0.09f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.45f;
			break;
		
		case joaat("virgo2"):
			*uParam2 = { -1f, 0f, 0.1225f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.375f;
			break;
		
		case joaat("virgo3"):
			*uParam2 = { -1f, 0f, 0.1225f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.375f;
			break;
		
		case joaat("minivan2"):
			*uParam2 = { 0f, 1.95f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case joaat("slamvan3"):
			*uParam2 = { -1f, 0.275f, 0.195f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case joaat("btype2"):
			*uParam2 = { -1f, -0.1f, 0.4f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case joaat("lurcher"):
			*uParam2 = { -1f, 0f, 0.3f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.45f;
			break;
		
		case joaat("baller3"):
			*uParam2 = { 0f, 1.4f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case joaat("baller4"):
			*uParam2 = { 0f, 1.4f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case joaat("baller5"):
			*uParam2 = { 0f, 1.4f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case joaat("baller6"):
			*uParam2 = { 0f, 1.4f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case joaat("cog55"):
			*uParam2 = { -1f, 0.37f, 0.13f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.45f;
			break;
		
		case joaat("cog552"):
			*uParam2 = { -1f, 0.37f, 0.13f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.45f;
			break;
		
		case joaat("cognoscenti"):
			*uParam2 = { -1f, 0.37f, 0.13f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.45f;
			break;
		
		case joaat("cognoscenti2"):
			*uParam2 = { -1f, 0.37f, 0.13f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.45f;
			break;
		
		case joaat("mamba"):
			*uParam2 = { -1f, -0.18f, 0.21f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.35f;
			break;
		
		case joaat("nightshade"):
			*uParam2 = { -1f, -0.2f, 0.17f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.45f;
			break;
		
		case joaat("schafter3"):
			*uParam2 = { 0f, 1.56f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.28f;
			break;
		
		case joaat("schafter4"):
			*uParam2 = { 0f, 1.56f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.28f;
			break;
		
		case joaat("schafter5"):
			*uParam2 = { 0f, 1.56f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.28f;
			break;
		
		case joaat("schafter6"):
			*uParam2 = { 0f, 1.56f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.28f;
			break;
		
		case joaat("verlierer2"):
			*uParam2 = { -1f, -0.21f, 0.03f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.4f;
			break;
		
		case joaat("tampa"):
			*uParam2 = { -1f, 0f, 0.12f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.45f;
			break;
		
		case joaat("banshee2"):
			*uParam2 = { -1f, -0.4f, 0.075f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.4f;
			break;
		
		case joaat("sultanrs"):
			*uParam2 = { 0f, 1.77f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.33f;
			break;
		
		case joaat("btype3"):
			*uParam2 = { -1f, -0.1f, 0.4f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case joaat("bestiagts"):
			*uParam2 = { -1f, -0.06f, 0.4f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.4f;
			break;
		
		case joaat("seven70"):
			*uParam2 = { -1f, -0.21f, 0.25f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.35f;
			break;
		
		case joaat("fmj"):
			*uParam2 = { -1f, -0.06f, 0.21f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.3f;
			break;
		
		case joaat("pfister811"):
			*uParam2 = { -1f, 0.06f, 0.25f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.45f;
			break;
		
		case joaat("prototipo"):
			*uParam2 = { -1f, 0.3f, 0.27f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.35f;
			break;
		
		case joaat("reaper"):
			*uParam2 = { -1f, 0.48f, 0f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.3f;
			break;
		
		case joaat("rumpo3"):
			*uParam2 = { 0f, 2.103f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case joaat("windsor2"):
			*uParam2 = { -1.2f, 0.03f, 0.24f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.55f;
			break;
		
		case joaat("xls"):
			*uParam2 = { -1f, 0.36f, -0.15f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.45f;
			break;
		
		case joaat("xls2"):
			*uParam2 = { -1f, 0.36f, -0.15f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.45f;
			break;
		
		case joaat("brioso"):
			*uParam2 = { -1f, -0.06f, 0.565f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.3f;
			break;
		
		case joaat("contender"):
			*uParam2 = { 0f, 2.33f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case joaat("le7b"):
			*uParam2 = { -1f, -0.12f, 0.235f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.3f;
			break;
		
		case joaat("omnis"):
			*uParam2 = { -1f, 0.03f, 0.18f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.45f;
			break;
		
		case joaat("tropos"):
			*uParam2 = { -1f, 0f, 0.24f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.35f;
			break;
		
		case joaat("avarus"):
			*uParam2 = { -1f, 0.27f, 0.25f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.1f;
			break;
		
		case joaat("daemon2"):
			*uParam2 = { -1f, 0.27f, 0.29f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.1f;
			break;
		
		case joaat("defiler"):
			*uParam2 = { -1f, 0f, 0.34f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.125f;
			break;
		
		case joaat("esskey"):
			*uParam2 = { -1f, 0.335f, 0.31f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.09f;
			break;
		
		case joaat("hakuchou2"):
			*uParam2 = { 0f, 0.27f, 0.845f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.15f;
			break;
		
		case joaat("nightblade"):
			*uParam2 = { 0f, -0.133f, 0.61f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.125f;
			break;
		
		case joaat("ratbike"):
			*uParam2 = { -1f, 0.31f, 0.24f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.1f;
			break;
		
		case joaat("shotaro"):
			*uParam2 = { -1f, 0.06f, 0.325f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.1f;
			break;
		
		case joaat("zombiea"):
			*uParam2 = { -1f, 0.3f, 0.25f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.1f;
			break;
		
		case joaat("zombieb"):
			*uParam2 = { -1f, 0.2f, 0.25f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.1f;
			break;
		
		case joaat("vortex"):
			*uParam2 = { -1f, 0.18f, 0.37f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.095f;
			break;
		
		case joaat("tornado6"):
			*uParam2 = { -1f, -0.03f, -0.24f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.3f;
			break;
		
		case joaat("youga2"):
			*uParam2 = { 0f, 2.352f, 0.253f };
			*uParam3 = { 0f, -1f, -0.256f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.175f;
			break;
		
		case joaat("wolfsbane"):
			*uParam2 = { -1f, 0.33f, 0.24f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.1f;
			break;
		
		case joaat("faggio3"):
			*uParam2 = { -1f, -0.54f, -0.11f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.15f;
			break;
		
		case joaat("faggio"):
			*uParam2 = { -0.9875f, -0.0175f, -0.01f };
			*uParam3 = { 0.8975f, -0.26f, -0.0725f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.1625f;
			break;
		
		case joaat("comet3"):
			*uParam2 = { -1f, 0f, 0.295f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.4f;
			break;
		
		case joaat("diablous"):
			*uParam2 = { -1f, 0.006f, 0.382f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.1f;
			break;
		
		case joaat("diablous2"):
			*uParam2 = { -1f, 0.225f, 0.541f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.1f;
			break;
		
		case joaat("elegy"):
			*uParam2 = { 0f, 1.14f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.35f;
			break;
		
		case joaat("fcr"):
			*uParam2 = { -1f, 0.234f, 0.376f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.1f;
			break;
		
		case joaat("fcr2"):
			*uParam2 = { -1f, 0.234f, 0.376f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.1f;
			break;
		
		case joaat("italigtb"):
			*uParam2 = { -1f, -0.024f, 0.187f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.25f;
			break;
		
		case joaat("italigtb2"):
			*uParam2 = { -1f, -0.024f, 0.187f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.25f;
			break;
		
		case joaat("nero"):
			*uParam2 = { -1f, 0.237f, 0.09f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.25f;
			break;
		
		case joaat("nero2"):
			*uParam2 = { -1f, 0.237f, 0.09f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.25f;
			break;
		
		case joaat("penetrator"):
			*uParam2 = { -1f, 0.153f, 0.295f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.35f;
			break;
		
		case joaat("ruiner2"):
			*uParam2 = { 0.363f, 1.34f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.4f;
			break;
		
		case joaat("ruiner3"):
			*uParam2 = { 0.363f, 1.34f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.4f;
			break;
		
		case joaat("specter"):
			*uParam2 = { -1f, -0.273f, -0.02f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.2f;
			break;
		
		case joaat("specter2"):
			*uParam2 = { -1f, -0.273f, 0.286f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.2f;
			break;
		
		case joaat("technical2"):
			*uParam2 = { 0f, 1.623f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case joaat("tempesta"):
			*uParam2 = { -1f, 0f, 0.253f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.25f;
			break;
		
		case joaat("voltic2"):
			*uParam2 = { 0f, 1.763f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.29f;
			break;
		
		case joaat("infernus2"):
			*uParam2 = { -1f, 0.33f, 0.06f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0.06f };
			*uParam5 = 0.2f;
			break;
		
		case joaat("ruston"):
			*uParam2 = { -1f, -0.273f, 0.084f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.15f;
			break;
		
		case joaat("turismo2"):
			*uParam2 = { -1f, 0.159f, -0.193f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.25f;
			break;
		
		case joaat("ardent"):
			*uParam2 = { -1f, 0.309f, 0.276f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.2f;
			break;
		
		case joaat("cheetah2"):
			*uParam2 = { -1f, 0.159f, -0.127f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.25f;
			break;
		
		case joaat("halftrack"):
			*uParam2 = { -1f, 0.501f, 0.531f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.35f;
			break;
		
		case joaat("nightshark"):
			*uParam2 = { -1.5f, 0.42f, 0.584f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.3f;
			break;
		
		case joaat("oppressor"):
			*uParam2 = { -1f, 0.306f, 0.355f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.08f;
			break;
		
		case joaat("tampa3"):
			*uParam2 = { 0f, 1.515f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.275f;
			break;
		
		case joaat("technical3"):
			*uParam2 = { 0f, 1.623f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.43f;
			break;
		
		case joaat("torero"):
			*uParam2 = { -1f, 0.201f, 0.114f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.3f;
			break;
		
		case joaat("vagner"):
			*uParam2 = { -1.5f, 0.906f, 0.071f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.1f;
			break;
		
		case joaat("xa21"):
			*uParam2 = { -1f, 0.441f, 0.13f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.25f;
			break;
		
		case joaat("phantom3"):
			*uParam2 = { -1.3f, 2.045f, 0.802f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.45f;
			break;
		
		case joaat("hauler2"):
			*uParam2 = { -1.627f, 2.456f, 0.745f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.45f;
			break;
		
		case joaat("cyclone"):
			*uParam2 = { -1f, 0.186f, 0.382f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.2f;
			break;
		
		case joaat("visione"):
			*uParam2 = { -1f, 0.432f, 0.031f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.15f;
			break;
		
		case joaat("vigilante"):
			*uParam2 = { -1f, 0.232f, 0.24f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.175f;
			break;
		
		case joaat("retinue"):
			*uParam2 = { -1f, -0.018f, 0.253f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.3f;
			break;
		
		case joaat("rapidgt3"):
			*uParam2 = { 0f, 1.972f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.18f;
			break;
		
		case joaat("avenger"):
			*uParam2 = { -2.02f, 6.45f, -0.716f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.35f;
			break;
		
		case joaat("deluxo"):
			*uParam2 = { -1f, -0.291f, 0.247f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.2f;
			break;
		
		case joaat("stromberg"):
			*uParam2 = { -1f, 0.23f, 0.247f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.2f;
			break;
		
		case joaat("riot2"):
			*uParam2 = { -1.891f, 2.144f, 0.657f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.35f;
			break;
		
		case joaat("chernobog"):
			*uParam2 = { -2.127f, 5.413f, 1.132f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.34f;
			break;
		
		case joaat("khanjali"):
			*uParam2 = { -0.897f, 1.391f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.4f;
			break;
		
		case joaat("barrage"):
			*uParam2 = { -1.51f, 0.71f, 0.451f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.25f;
			break;
		
		case joaat("comet4"):
			*uParam2 = { -1f, 0.298f, 0.257f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.36f;
			break;
		
		case joaat("neon"):
			*uParam2 = { -1f, 0.181f, -0.066f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.3f;
			break;
		
		case joaat("streiter"):
			*uParam2 = { -1f, 0.301f, 0.295f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.4f;
			break;
		
		case joaat("sentinel3"):
			*uParam2 = { 0f, 1.52f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case joaat("yosemite"):
			*uParam2 = { -1f, 0.252f, 0.201f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.3f;
			break;
		
		case joaat("sc1"):
			*uParam2 = { -1f, 0.616f, -0.131f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.25f;
			break;
		
		case joaat("autarch"):
			*uParam2 = { -1f, 0f, 0.116f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.25f;
			break;
		
		case joaat("gt500"):
			*uParam2 = { -1f, 0f, 0f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.25f;
			break;
		
		case joaat("hustler"):
			*uParam2 = { -1f, -0.228f, 0.321f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.4f;
			break;
		
		case joaat("revolter"):
			*uParam2 = { -1f, 0.203f, 0.126f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.45f;
			break;
		
		case joaat("pariah"):
			*uParam2 = { -1f, -0.126f, 0.208f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.35f;
			break;
		
		case joaat("raiden"):
			*uParam2 = { -1f, 0.252f, -0.095f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.35f;
			break;
		
		case joaat("savestra"):
			*uParam2 = { -1f, 0f, 0.25f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.35f;
			break;
		
		case joaat("riata"):
			*uParam2 = { -1.3f, 0.18f, 0.511f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.3f;
			break;
		
		case joaat("hermes"):
			*uParam2 = { -1f, -0.134f, 0.158f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.4f;
			break;
		
		case joaat("comet5"):
			*uParam2 = { -1f, 0.002f, 0.031f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.35f;
			break;
		
		case joaat("z190"):
			*uParam2 = { -1f, -0.175f, 0.242f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.4f;
			break;
		
		case joaat("viseris"):
			*uParam2 = { -1f, 0f, 0.244f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.275f;
			break;
		
		case joaat("kamacho"):
			*uParam2 = { 0f, 1.623f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
	}
	switch (unk_0x36FE6D3220816ADA(iParam0))
	{
		case joaat("gb200"):
			*uParam2 = { -1f, 0f, 0.407f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.225f;
			break;
		
		case joaat("fagaloa"):
			*uParam2 = { -1f, 0f, 0.225f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.4f;
			break;
		
		case joaat("ellie"):
			*uParam2 = { -1f, 0.441f, -0.128f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.35f;
			break;
		
		case joaat("issi3"):
			*uParam2 = { -1f, 0.195f, 0.246f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.4f;
			break;
		
		case joaat("michelli"):
			*uParam2 = { -1f, 0f, 0.0805f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.35f;
			break;
		
		case joaat("flashgt"):
			*uParam2 = { 0f, 1.592f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.25f;
			break;
		
		case joaat("hotring"):
			*uParam2 = { -1f, 0f, 0f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case joaat("tezeract"):
			*uParam2 = { -1f, 0.679f, 0.514f };
			*uParam3 = { 1f, 0f, -0.75f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.175f;
			break;
		
		case joaat("tyrant"):
			*uParam2 = { -1.588f, 0.315f, 0.337f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.3f;
			break;
		
		case joaat("dominator3"):
			*uParam2 = { -1f, 0f, 0.221f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case joaat("taipan"):
			*uParam2 = { -1f, 0f, 0.219f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.4f;
			break;
		
		case joaat("entity2"):
			*uParam2 = { -1.52f, 0.41f, 0.15f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.3f;
			break;
		
		case joaat("jester3"):
			*uParam2 = { -1f, 0f, 0.297f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.4f;
			break;
		
		case joaat("cheburek"):
			*uParam2 = { -1f, 0.393f, 0.162f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.375f;
			break;
		
		case joaat("caracara"):
			*uParam2 = { -1f, 1.266f, 0.4115f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.4f;
			break;
		
		case joaat("speedo4"):
			*uParam2 = { -1.5f, 0.833f, 0.391f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.2f;
			break;
		
		case joaat("mule4"):
			*uParam2 = { -1.125f, 2.691f, 0.318f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.35f;
			break;
		
		case joaat("pounder2"):
			*uParam2 = { -1.5f, 1.853f, 0.779f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.38f;
			break;
		
		case joaat("swinger"):
			*uParam2 = { -1f, 0.195f, 0.105f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.35f;
			break;
		
		case joaat("menacer"):
			*uParam2 = { -1.73f, 0.159f, 0.61f };
			*uParam3 = { 1f, 0.12f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.4f;
			break;
		
		case joaat("scramjet"):
			*uParam2 = { -1f, -0.188f, 0f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.25f;
			break;
		
		case joaat("patriot2"):
			*uParam2 = { -1.213f, 1.546f, 0.511f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.3f;
			break;
		
		case joaat("stafford"):
			*uParam2 = { -1f, 0.036f, 0.096f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.4f;
			break;
		
		case joaat("freecrawler"):
			*uParam2 = { -1f, 0.249f, 0.511f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.4f;
			break;
		
		case joaat("oppressor2"):
			*uParam2 = { -1f, 0.306f, 0.355f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.08f;
			break;
		
		case joaat("terbyte"):
			*uParam2 = { -1.73f, 3.397f, 0.724f };
			*uParam3 = { 1f, 0.12f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.25f;
			break;
		
		case joaat("bruiser"):
			*uParam2 = { 0f, 2.12f, 1.241f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0.084f };
			*uParam5 = 0.775f;
			break;
		
		case joaat("bruiser2"):
			*uParam2 = { 0f, 2.12f, 1.241f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0.084f };
			*uParam5 = 0.775f;
			break;
		
		case joaat("bruiser3"):
			*uParam2 = { 0f, 2.12f, 1.241f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0.084f };
			*uParam5 = 0.775f;
			break;
		
		case joaat("brutus"):
			*uParam2 = { -1f, 0.446f, 0.247f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.4f;
			break;
		
		case joaat("brutus2"):
			*uParam2 = { -1f, 0.446f, 0.247f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.4f;
			break;
		
		case joaat("brutus3"):
			*uParam2 = { -1f, 0.446f, 0.247f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.4f;
			break;
		
		case joaat("cerberus"):
			*uParam2 = { -1.432f, 1.443f, 1.292f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case joaat("cerberus2"):
			*uParam2 = { -1.432f, 1.443f, 1.292f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case joaat("cerberus3"):
			*uParam2 = { -1.432f, 1.443f, 1.292f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case joaat("clique"):
			*uParam2 = { -1f, 0.167f, 0.159f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.4f;
			break;
		
		case joaat("deveste"):
			*uParam2 = { -1.5f, 1.066f, 0.13f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.15f;
			break;
		
		case joaat("deviant"):
			*uParam2 = { -1f, 0.111f, 0.123f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.45f;
			break;
		
		case joaat("dominator4"):
			*uParam2 = { -1f, 0f, 0.417f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.4f;
			break;
		
		case joaat("dominator5"):
			*uParam2 = { -1f, 0f, 0.417f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.4f;
			break;
		
		case joaat("dominator6"):
			*uParam2 = { -1f, 0f, 0.417f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.4f;
			break;
		
		case joaat("impaler"):
			*uParam2 = { -1f, 0f, 0.137f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.35f;
			break;
		
		case joaat("impaler2"):
			*uParam2 = { -1f, 0f, 0.137f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.35f;
			break;
		
		case joaat("impaler3"):
			*uParam2 = { -1f, 0f, 0.137f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.35f;
			break;
		
		case joaat("impaler4"):
			*uParam2 = { -1f, 0f, 0.137f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.35f;
			break;
		
		case joaat("imperator"):
			*uParam2 = { -1f, 0f, 0.295f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.4f;
			break;
		
		case joaat("imperator2"):
			*uParam2 = { -1f, 0f, 0.295f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.4f;
			break;
		
		case joaat("imperator3"):
			*uParam2 = { -1f, 0f, 0.295f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.4f;
			break;
		
		case joaat("issi4"):
			*uParam2 = { -1f, 0.195f, 0.246f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.4f;
			break;
		
		case joaat("issi5"):
			*uParam2 = { -1f, 0.195f, 0.246f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.4f;
			break;
		
		case joaat("issi6"):
			*uParam2 = { -1f, 0.195f, 0.246f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.4f;
			break;
		
		case joaat("italigto"):
			*uParam2 = { -1f, -0.091f, 0.207f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.25f;
			break;
		
		case joaat("monster3"):
			*uParam2 = { -1.78f, 0.445f, 0.81f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.45f;
			break;
		
		case joaat("monster4"):
			*uParam2 = { -1.78f, 0.445f, 0.81f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.45f;
			break;
		
		case joaat("monster5"):
			*uParam2 = { -1.78f, 0.445f, 0.81f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.45f;
			break;
		
		case joaat("schlagen"):
			*uParam2 = { -1f, -0.105f, 0.262f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.4f;
			break;
		
		case joaat("slamvan4"):
			*uParam2 = { -1f, 0.152f, 0.537f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case joaat("slamvan5"):
			*uParam2 = { -1f, 0.152f, 0.537f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case joaat("slamvan6"):
			*uParam2 = { -1f, 0.152f, 0.537f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case joaat("toros"):
			*uParam2 = { -1f, 0.415f, 0.394f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.4f;
			break;
		
		case joaat("tulip"):
			*uParam2 = { -1f, 0.171f, 0.223f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.35f;
			break;
		
		case joaat("vamos"):
			*uParam2 = { -1f, 0f, 0.163f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.4f;
			break;
		
		case joaat("zr380"):
			*uParam2 = { -1f, 0f, 0.286f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.45f;
			break;
		
		case joaat("zr3802"):
			*uParam2 = { -1f, 0f, 0.286f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.45f;
			break;
		
		case joaat("zr3803"):
			*uParam2 = { -1f, 0f, 0.286f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.45f;
			break;
		
		case joaat("caracara2"):
			*uParam2 = { -1f, 0.687f, 0.4115f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.4f;
			break;
		
		case joaat("drafter"):
			*uParam2 = { -1.045f, 0.15f, 0.09f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.4f;
			break;
		
		case joaat("dynasty"):
			*uParam2 = { -1f, 0.12f, 0.334f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.35f;
			break;
		
		case joaat("emerus"):
			*uParam2 = { -1f, 0.372f, 0.439f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.1f;
			break;
		
		case joaat("gauntlet3"):
			*uParam2 = { -1f, 0f, 0.222f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.33f;
			break;
		
		case joaat("gauntlet4"):
			*uParam2 = { -1f, 0f, 0.222f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.33f;
			break;
		
		case joaat("hellion"):
			*uParam2 = { -1f, 0.27f, 0.246f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.35f;
			break;
		
		case joaat("issi7"):
			*uParam2 = { -1f, 0.195f, -0.063f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.4f;
			break;
		
		case joaat("jugular"):
			*uParam2 = { -1f, 0.213f, 0.213f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.45f;
			break;
		
		case joaat("krieger"):
			*uParam2 = { -1f, 0.576f, -0.123f };
			*uParam3 = { 0.997f, -0.105f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.25f;
			break;
		
		case joaat("locust"):
			*uParam2 = { -1f, -0.207f, 0.042f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.2f;
			break;
		
		case joaat("nebula"):
			*uParam2 = { -1f, 0.012f, 0.147f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.35f;
			break;
		
		case joaat("neo"):
			*uParam2 = { -1f, 0.216f, 0.216f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.3f;
			break;
		
		case joaat("novak"):
			*uParam2 = { -1f, 0.24f, 0.255f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.35f;
			break;
		
		case joaat("paragon"):
			*uParam2 = { -1f, 0f, 0.156f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.45f;
			break;
		
		case joaat("paragon2"):
			*uParam2 = { -1f, 0f, 0.156f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.45f;
			break;
		
		case joaat("peyote2"):
			*uParam2 = { -1f, -0.36f, 0.2125f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case joaat("s80"):
			*uParam2 = { -1f, 0.357f, 0.256f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.2f;
			break;
		
		case joaat("thrax"):
			*uParam2 = { -1f, 0.426f, 0.339f };
			*uParam3 = { 1f, 0.06f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.3f;
			break;
		
		case joaat("zion3"):
			*uParam2 = { -1f, 0.108f, 0.234f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.25f;
			break;
		
		case joaat("zorrusso"):
			*uParam2 = { -1f, 0.273f, -0.06f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.25f;
			break;
		
		case joaat("slamvan2"):
			*uParam2 = { -1f, 0.35f, 0.456f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.25f;
			break;
		
		case joaat("rebla"):
			*uParam2 = { 0f, 1.9002f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.3f;
			break;
		
		case joaat("asbo"):
			*uParam2 = { -1f, 0.104f, 0.339f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.3f;
			break;
		
		case joaat("sugoi"):
			*uParam2 = { -1f, 0.104f, 0.223f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.4f;
			break;
		
		case joaat("komoda"):
			*uParam2 = { -1f, 0.104f, 0.155f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.4f;
			break;
		
		case joaat("vstr"):
			*uParam2 = { -1f, 0.104f, 0.155f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.4f;
			break;
		
		case joaat("sultan2"):
			*uParam2 = { -1f, 0.313f, 0.16f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.35f;
			break;
		
		case joaat("kanjo"):
			*uParam2 = { -1f, 0.313f, 0.16f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.35f;
			break;
		
		case joaat("jb7002"):
			*uParam2 = { 0f, 1.2f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.37f;
			break;
		
		case joaat("yosemite2"):
			*uParam2 = { -1f, 0.252f, 0.201f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.3f;
			break;
		
		case joaat("retinue2"):
			*uParam2 = { -1f, -0.018f, 0.253f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.3f;
			break;
		
		case joaat("furia"):
			*uParam2 = { -1f, 0.0965f, 0.149f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case joaat("everon"):
			*uParam2 = { 0f, 2.019f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case joaat("imorgon"):
			*uParam2 = { -1.5f, 0.42f, -0.2f };
			*uParam3 = { 1f, -0.0997f, 0.0415f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.45f;
			break;
		
		case joaat("zhaba"):
			*uParam2 = { -1.202f, 0.034f, 0.6635f };
			*uParam3 = { 1f, -0.002f, 0f };
			*uParam4 = { 0f, -0.7398f, 0f };
			*uParam5 = 0.4f;
			break;
		
		case joaat("gauntlet5"):
			*uParam2 = { -1.5f, 0.379f, 0.297f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.24f;
			break;
		
		case joaat("dukes3"):
			*uParam2 = { -1f, 0f, 0f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.375f;
			break;
		
		case joaat("manana2"):
			*uParam2 = { -1.76f, 0.105f, 0.009f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.22f;
			break;
		
		case joaat("club"):
			*uParam2 = { 0f, 1.252f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.31f;
			break;
		
		case joaat("glendale2"):
			*uParam2 = { 0f, 2.135f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.205f;
			break;
		
		case joaat("youga3"):
			*uParam2 = { 0f, 2.352f, 0.3f };
			*uParam3 = { 0f, -1f, -0.256f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.135f;
			break;
		
		case joaat("yosemite3"):
			*uParam2 = { -1f, 0.252f, 0.203f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.21f;
			break;
		
		case joaat("seminole2"):
			*uParam2 = { 0f, 1.654f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.25f;
			break;
		
		case joaat("penumbra2"):
			*uParam2 = { -1.08f, 0.28f, -0.093f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.4f;
			break;
		
		case joaat("landstalker2"):
			*uParam2 = { -1.64f, 0.7f, 0f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.35f;
			break;
		
		case joaat("coquette4"):
			*uParam2 = { -1f, -0.021f, 0.273f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.25f;
			break;
		
		case joaat("tigon"):
			*uParam2 = { -1f, 0.156f, 0.099f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.3f;
			break;
		
		case joaat("peyote3"):
			*uParam2 = { -1.5f, -0.36f, 0.2125f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.35f;
			break;
		
		case joaat("brioso2"):
			*uParam2 = { -1f, 0.275f, 0.215f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.3f;
			break;
		
		case joaat("slamtruck"):
			*uParam2 = { -1f, 1.454f, 0.485f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.3f;
			break;
		
		case joaat("italirsx"):
			*uParam2 = { -1f, 0.109f, 0.129f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.3f;
			break;
		
		case joaat("toreador"):
			*uParam2 = { -1f, 0.194f, 0.342f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.15f;
			break;
		
		case joaat("weevil"):
			*uParam2 = { -1f, 0.111f, 0.168f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.3f;
			break;
	}
	return 1;
}

bool func_48(struct<3> Param0, struct<3> Param1, bool bParam2)
{
	if (bParam2)
	{
		return (Param0.x == Param1.x && Param0.f_1 == Param1.f_1);
	}
	return ((Param0.x == Param1.x && Param0.f_1 == Param1.f_1) && Param0.f_2 == Param1.f_2);
}

void func_49()
{
	Global_1678175 = 0;
	Global_1678175.f_1 = { 0f, 0f, 0f };
	Global_1678175.f_4 = { 0f, 0f, 0f };
	Global_1678175.f_7 = { 0f, 0f, 0f };
	Global_1678175.f_10 = 0f;
	Global_1678175.f_11 = 0f;
	Global_1678175.f_12 = 0;
	Global_1678175.f_13 = 0;
	Global_1678175.f_14 = { 0f, 0f, 0f };
	Global_1678175.f_17 = { 0f, 0f, 0f };
	Global_1678175.f_20 = { 0f, 0f, 0f };
	Global_1678175.f_23 = 0;
	Global_1678175.f_24 = 0;
}

int func_50(int iParam0)
{
	if (unk_0xAE06B9E39EBDE049(iParam0) && unk_0x80FF6C016CDB0FAF(iParam0, 0))
	{
		if (unk_0x62B133F8490E0B2E(iParam0, 0) || func_51(iParam0))
		{
			return 1;
		}
	}
	return 0;
}

int func_51(int iParam0)
{
	int iVar0;
	
	if (unk_0x6844807B17DC2DFC("MPBitset", 3))
	{
		if (unk_0xAE06B9E39EBDE049(iParam0) && unk_0x80FF6C016CDB0FAF(iParam0, 0))
		{
			if (unk_0x871819940BD2E434(iParam0, "MPBitset"))
			{
				iVar0 = unk_0x8C0800114C2864BE(iParam0, "MPBitset");
				return unk_0xCE990E643CD9D0E5(iVar0, 16);
			}
		}
	}
	return 0;
}

int func_52(int iParam0, var uParam1)
{
	int iVar0;
	bool bVar1;
	
	if (unk_0xF6B8932480699645(uParam1, 13) && unk_0x29EC5130E3AD4D5A(uParam1))
	{
		iVar0 = unk_0xAAA938655BBB5286(uParam1);
	}
	else
	{
		iVar0 = func_89();
	}
	bVar1 = false;
	if (iVar0 == unk_0x460153A63B9477BC())
	{
		if (func_63(15, 0))
		{
			bVar1 = true;
		}
		else if (func_59(1))
		{
			bVar1 = true;
		}
	}
	else
	{
		bVar1 = true;
	}
	if (((((((!(unk_0xAE06B9E39EBDE049(iParam0) && !unk_0xA59F96B50B97E63C(iParam0, 0)) || !unk_0xAA5B806352173DEA(iParam0)) || !unk_0xB454B9D1010ED3BA(0, -1, 1)) || !((unk_0xF6B8932480699645(uParam1, 13) && unk_0xE2FBD13450B2DA21()) && unk_0xBF9EC1ED7E386622(uParam1))) || iVar0 == func_89()) || !func_313(iVar0, 0, 0)) || !bVar1) || func_53(iParam0))
	{
		return 0;
	}
	return 1;
}

int func_53(int iParam0)
{
	if (!unk_0x25DDB354A40FFCDB())
	{
		return 1;
	}
	if (func_55(unk_0x460153A63B9477BC()) == 3)
	{
		if (func_54(iParam0) != -1)
		{
			return 1;
		}
	}
	if (Global_1678200)
	{
		return 1;
	}
	switch (unk_0x36FE6D3220816ADA(iParam0))
	{
		case joaat("sanchez"):
		case joaat("sanchez2"):
		case joaat("blazer"):
		case joaat("blazer3"):
		case joaat("surfer"):
		case joaat("surfer2"):
		case joaat("bifta"):
		case joaat("sovereign"):
		case joaat("hexer"):
		case joaat("dune"):
		case joaat("dune2"):
		case joaat("dune4"):
		case joaat("dune5"):
		case joaat("insurgent"):
		case joaat("insurgent2"):
		case joaat("blista3"):
		case joaat("stalion2"):
		case joaat("gauntlet2"):
		case joaat("dominator2"):
		case joaat("buffalo3"):
		case joaat("massacro2"):
		case joaat("jester2"):
		case joaat("omnis"):
		case joaat("bf400"):
		case joaat("tropos"):
		case joaat("brioso"):
		case joaat("trophytruck"):
		case joaat("trophytruck2"):
		case joaat("cliffhanger"):
		case joaat("tampa2"):
		case joaat("gargoyle"):
		case joaat("deathbike"):
		case joaat("deathbike2"):
		case joaat("deathbike3"):
		case joaat("le7b"):
		case joaat("tyrus"):
		case joaat("lynx"):
		case joaat("sheava"):
		case joaat("chimera"):
		case joaat("sanctus"):
		case joaat("blazer4"):
		case joaat("manchez"):
		case joaat("raptor"):
		case joaat("blazer5"):
		case joaat("stryder"):
		case joaat("formula"):
		case joaat("formula2"):
		case joaat("minitank"):
		case joaat("outlaw"):
		case joaat("vagrant"):
		case joaat("openwheel1"):
		case joaat("openwheel2"):
		case joaat("manchez2"):
		case joaat("squaddie"):
		case joaat("winky"):
		case joaat("veto"):
		case joaat("veto2"):
		case joaat("verus"):
			return 1;
			break;
		
		case joaat("youga"):
		case joaat("youga2"):
			if (unk_0x7F8B14CBFB9813E5(iParam0, 7) != -1)
			{
				return 1;
			}
			break;
		
		case joaat("surano"):
			if (unk_0x7F8B14CBFB9813E5(iParam0, 5) == 1)
			{
				return 1;
			}
			break;
		
		case joaat("gp1"):
			return 1;
			break;
		
		case joaat("apc"):
		case joaat("dune3"):
		case joaat("insurgent3"):
		case joaat("trailerlarge"):
		case joaat("trailersmall2"):
		case joaat("phantom3"):
		case joaat("hauler2"):
			return 1;
			break;
		
		case joaat("thruster"):
			return 1;
			break;
		
		case joaat("terbyte"):
			return 1;
			break;
		
		case joaat("rcbandito"):
		case joaat("scarab"):
		case joaat("scarab2"):
		case joaat("scarab3"):
		case joaat("rrocket"):
		case joaat("blazer2"):
		case joaat("burrito2"):
			return 1;
			break;
		
		case joaat("club"):
			if ((unk_0x7F8B14CBFB9813E5(iParam0, 7) == 0 || unk_0x7F8B14CBFB9813E5(iParam0, 7) == 1) || unk_0x7F8B14CBFB9813E5(iParam0, 7) == 7)
			{
				return 1;
			}
			break;
		
		case joaat("yosemite3"):
			if ((unk_0x7F8B14CBFB9813E5(iParam0, 45) == 4 || unk_0x7F8B14CBFB9813E5(iParam0, 45) == 5) || unk_0x7F8B14CBFB9813E5(iParam0, 45) == 6)
			{
				return 1;
			}
			break;
	}
	return 0;
}

int func_54(int iParam0)
{
	if (unk_0x6844807B17DC2DFC("FMDeliverableID", 3))
	{
		if (unk_0x871819940BD2E434(iParam0, "FMDeliverableID"))
		{
			return unk_0x8C0800114C2864BE(iParam0, "FMDeliverableID");
		}
	}
	return -1;
}

int func_55(int iParam0)
{
	if (func_58(iParam0) == 233)
	{
		return func_56(iParam0);
	}
	return -1;
}

int func_56(int iParam0)
{
	if (func_57(iParam0, 0))
	{
		return Global_1630317[iParam0 /*595*/].f_11.f_181;
	}
	return -1;
}

int func_57(int iParam0, int iParam1)
{
	if (Global_1630317[iParam0 /*595*/].f_11.f_33 != -1 || (iParam1 && Global_1630317[iParam0 /*595*/].f_11.f_32 != -1))
	{
		return 1;
	}
	return 0;
}

int func_58(int iParam0)
{
	if (func_57(iParam0, 0))
	{
		return Global_1630317[iParam0 /*595*/].f_11.f_33;
	}
	return -1;
}

bool func_59(bool bParam0)
{
	return func_60(unk_0x460153A63B9477BC(), bParam0);
}

int func_60(int iParam0, bool bParam1)
{
	return func_61(iParam0, bParam1, 1);
}

int func_61(int iParam0, bool bParam1, int iParam2)
{
	int iVar0;
	
	if (iParam0 == func_89())
	{
		return 0;
	}
	if (!bParam1)
	{
		if (func_62(iParam0, iParam2))
		{
			return 0;
		}
	}
	iVar0 = Global_1630317[iParam0 /*595*/].f_11;
	if (iVar0 != func_89() && Global_1630317[iVar0 /*595*/].f_11.f_423 == iParam2)
	{
		return 1;
	}
	return 0;
}

int func_62(int iParam0, int iParam1)
{
	if (iParam0 != func_89())
	{
		if (Global_1630317[iParam0 /*595*/].f_11 != func_89())
		{
			if (Global_1630317[iParam0 /*595*/].f_11 == iParam0 && Global_1630317[iParam0 /*595*/].f_11.f_423 == iParam1)
			{
				return 1;
			}
		}
	}
	return 0;
}

bool func_63(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	if (bParam1)
	{
		if (iParam0 == 15)
		{
			return 1;
		}
	}
	iVar0 = func_65(iParam0);
	iVar1 = iParam0;
	return unk_0xCE990E643CD9D0E5(iVar0, func_64(iVar1));
}

int func_64(int iParam0)
{
	return (iParam0 % 32);
}

var func_65(int iParam0)
{
	var uVar0;
	
	uVar0 = func_36(func_66(iParam0), -1, 0);
	return uVar0;
}

int func_66(var uParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = uParam0;
	iVar1 = func_67(iVar0);
	switch (iVar1)
	{
		case 0:
			return 1290;
			break;
	}
	return 1290;
}

int func_67(int iParam0)
{
	return (iParam0 / 32);
}

void func_68(int iParam0, int iParam1)
{
	var uVar0;
	int iVar1;
	
	iVar1 = func_70(iParam1);
	func_69(iVar1, &uVar0);
	unk_0xA2E507034EC819AB(iParam0, uVar0);
}

bool func_69(int iParam0, var uParam1)
{
	*uParam1 = -1;
	switch (iParam0)
	{
		case 0:
			*uParam1 = 4;
			break;
		
		case 1:
			*uParam1 = 5;
			break;
		
		case 2:
			*uParam1 = 6;
			break;
		
		case 3:
			*uParam1 = 7;
			break;
		
		case 4:
			*uParam1 = 111;
			break;
		
		case 5:
			*uParam1 = 112;
			break;
		
		case 6:
			*uParam1 = 107;
			break;
		
		case 7:
			*uParam1 = 104;
			break;
		
		case 8:
			*uParam1 = 98;
			break;
		
		case 9:
			*uParam1 = 100;
			break;
		
		case 10:
			*uParam1 = 102;
			break;
		
		case 11:
			*uParam1 = 99;
			break;
		
		case 12:
			*uParam1 = 105;
			break;
		
		case 13:
			*uParam1 = 106;
			break;
		
		case 14:
			*uParam1 = 37;
			break;
		
		case 15:
			*uParam1 = 90;
			break;
		
		case 16:
			*uParam1 = 88;
			break;
		
		case 17:
			*uParam1 = 89;
			break;
		
		case 18:
			*uParam1 = 91;
			break;
		
		case 19:
			*uParam1 = 38;
			break;
		
		case 20:
			*uParam1 = 138;
			break;
		
		case 21:
			*uParam1 = 36;
			break;
		
		case 22:
			*uParam1 = 27;
			break;
		
		case 23:
			*uParam1 = 28;
			break;
		
		case 24:
			*uParam1 = 29;
			break;
		
		case 25:
			*uParam1 = 150;
			break;
		
		case 26:
			*uParam1 = 30;
			break;
		
		case 27:
			*uParam1 = 31;
			break;
		
		case 28:
			*uParam1 = 32;
			break;
		
		case 29:
			*uParam1 = 35;
			break;
		
		case 30:
			*uParam1 = 135;
			break;
		
		case 31:
			*uParam1 = 137;
			break;
		
		case 32:
			*uParam1 = 136;
			break;
		
		case 33:
			*uParam1 = 71;
			break;
		
		case 34:
			*uParam1 = 145;
			break;
		
		case 35:
			*uParam1 = 63;
			break;
		
		case 36:
			*uParam1 = 64;
			break;
		
		case 37:
			*uParam1 = 65;
			break;
		
		case 38:
			*uParam1 = 66;
			break;
		
		case 39:
			*uParam1 = 67;
			break;
		
		case 40:
			*uParam1 = 68;
			break;
		
		case 41:
			*uParam1 = 69;
			break;
		
		case 42:
			*uParam1 = 73;
			break;
		
		case 43:
			*uParam1 = 70;
			break;
		
		case 44:
			*uParam1 = 74;
			break;
		
		case 45:
			*uParam1 = 51;
			break;
		
		case 46:
			*uParam1 = 53;
			break;
		
		case 47:
			*uParam1 = 54;
			break;
		
		case 48:
			*uParam1 = 92;
			break;
	}
	return *uParam1 != -1;
}

int func_70(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 1;
		
		case 1:
			return 36;
		
		case 2:
			return 35;
		
		case 3:
			return 46;
		
		case 4:
			return 48;
		
		case 5:
			return 16;
		
		case 6:
			return 14;
		
		case 7:
			return 19;
		
		case 8:
			return 22;
		
		case 9:
			return 31;
		
		case 10:
			return 30;
		
		case 11:
			return 33;
		
		case 12:
			return 34;
		
		default:
	}
	return 0;
}

int func_71(int iParam0, int iParam1, int iParam2)
{
	if ((iParam0 == 222 && iParam1 == 222) && iParam2 == 255)
	{
		return 0;
	}
	if ((iParam0 == 2 && iParam1 == 21) && iParam2 == 255)
	{
		return 1;
	}
	if ((iParam0 == 3 && iParam1 == 83) && iParam2 == 255)
	{
		return 2;
	}
	if ((iParam0 == 0 && iParam1 == 255) && iParam2 == 140)
	{
		return 3;
	}
	if ((iParam0 == 94 && iParam1 == 255) && iParam2 == 1)
	{
		return 4;
	}
	if ((iParam0 == 255 && iParam1 == 255) && iParam2 == 0)
	{
		return 5;
	}
	if ((iParam0 == 255 && iParam1 == 150) && iParam2 == 5)
	{
		return 6;
	}
	if ((iParam0 == 255 && iParam1 == 62) && iParam2 == 0)
	{
		return 7;
	}
	if ((iParam0 == 255 && iParam1 == 1) && iParam2 == 1)
	{
		return 8;
	}
	if ((iParam0 == 255 && iParam1 == 50) && iParam2 == 100)
	{
		return 9;
	}
	if ((iParam0 == 255 && iParam1 == 5) && iParam2 == 190)
	{
		return 10;
	}
	if ((iParam0 == 35 && iParam1 == 1) && iParam2 == 255)
	{
		return 11;
	}
	if ((iParam0 == 15 && iParam1 == 3) && iParam2 == 255)
	{
		return 12;
	}
	if ((unk_0x25DDB354A40FFCDB() && func_72()) && Global_1314052)
	{
		if ((iParam0 == Global_1314053 && iParam1 == Global_1314054) && iParam2 == Global_1314055)
		{
			return 13;
		}
	}
	return 0;
}

int func_72()
{
	struct<13> Var0;
	
	if (unk_0xDCA94C1EA9942FBD())
	{
		if ((unk_0x0EB6C63A09FD9DF1() && unk_0x011A67D2B195B6EB()) && unk_0x2A4512DFA7EDB2F9())
		{
			Var0 = { func_73() };
			if (unk_0xE2FBD13450B2DA21() && unk_0xBF9EC1ED7E386622(&Var0))
			{
				return 1;
			}
		}
	}
	return 0;
}

struct<13> func_73()
{
	struct<13> Var0;
	
	unk_0xA5CA392E24C51EB1(&Var0, 13);
	return Var0;
}

int func_74(int iParam0)
{
	switch (unk_0x36FE6D3220816ADA(iParam0))
	{
		case joaat("deathbike2"):
			return 1;
			break;
	}
	return 0;
}

bool func_75(int iParam0, var uParam1)
{
	*uParam1 = -1f;
	switch (iParam0)
	{
		case joaat("dune5"):
			*uParam1 = 1f;
			break;
		
		case joaat("boxville5"):
			*uParam1 = 1f;
			break;
		
		case joaat("wastelander"):
			*uParam1 = 1f;
			break;
		
		case joaat("alphaz1"):
			*uParam1 = 0.2f;
			break;
		
		case joaat("bombushka"):
			*uParam1 = 0.15f;
			break;
		
		case joaat("howard"):
			*uParam1 = 0.3f;
			break;
		
		case joaat("hunter"):
			*uParam1 = 0.5f;
			break;
		
		case joaat("microlight"):
			*uParam1 = 0.3f;
			break;
		
		case joaat("mogul"):
			*uParam1 = 0.4f;
			break;
		
		case joaat("molotok"):
			*uParam1 = 0.3f;
			break;
		
		case joaat("nokota"):
			*uParam1 = 0.4f;
			break;
		
		case joaat("pyro"):
			*uParam1 = 0.4f;
			break;
		
		case joaat("rogue"):
			*uParam1 = 0.4f;
			break;
		
		case joaat("seabreeze"):
			*uParam1 = 0.3f;
			break;
		
		case joaat("starling"):
			*uParam1 = 0.5f;
			break;
		
		case joaat("tula"):
			*uParam1 = 0.15f;
			break;
		
		case joaat("khanjali"):
			*uParam1 = 0.6f;
			break;
		
		case joaat("bruiser"):
			*uParam1 = 1f;
			break;
		
		case joaat("bruiser2"):
			*uParam1 = 1f;
			break;
		
		case joaat("bruiser3"):
			*uParam1 = 1f;
			break;
		
		case joaat("brutus"):
			*uParam1 = 1f;
			break;
		
		case joaat("brutus2"):
			*uParam1 = 1f;
			break;
		
		case joaat("brutus3"):
			*uParam1 = 1f;
			break;
		
		case joaat("cerberus"):
			*uParam1 = 1f;
			break;
		
		case joaat("cerberus2"):
			*uParam1 = 1f;
			break;
		
		case joaat("cerberus3"):
			*uParam1 = 1f;
			break;
		
		case joaat("deathbike"):
			*uParam1 = 1f;
			break;
		
		case joaat("deathbike2"):
			*uParam1 = 1f;
			break;
		
		case joaat("deathbike3"):
			*uParam1 = 1f;
			break;
		
		case joaat("dominator4"):
			*uParam1 = 1f;
			break;
		
		case joaat("dominator5"):
			*uParam1 = 1f;
			break;
		
		case joaat("dominator6"):
			*uParam1 = 1f;
			break;
		
		case joaat("impaler2"):
			*uParam1 = 1f;
			break;
		
		case joaat("impaler3"):
			*uParam1 = 1f;
			break;
		
		case joaat("impaler4"):
			*uParam1 = 1f;
			break;
		
		case joaat("imperator"):
			*uParam1 = 1f;
			break;
		
		case joaat("imperator2"):
			*uParam1 = 1f;
			break;
		
		case joaat("imperator3"):
			*uParam1 = 1f;
			break;
		
		case joaat("issi4"):
			*uParam1 = 1f;
			break;
		
		case joaat("issi5"):
			*uParam1 = 1f;
			break;
		
		case joaat("issi6"):
			*uParam1 = 1f;
			break;
		
		case joaat("monster3"):
			*uParam1 = 1f;
			break;
		
		case joaat("monster4"):
			*uParam1 = 1f;
			break;
		
		case joaat("monster5"):
			*uParam1 = 1f;
			break;
		
		case joaat("scarab"):
			*uParam1 = 1f;
			break;
		
		case joaat("scarab2"):
			*uParam1 = 1f;
			break;
		
		case joaat("scarab3"):
			*uParam1 = 1f;
			break;
		
		case joaat("slamvan4"):
			*uParam1 = 1f;
			break;
		
		case joaat("slamvan5"):
			*uParam1 = 1f;
			break;
		
		case joaat("slamvan6"):
			*uParam1 = 1f;
			break;
		
		case joaat("zr380"):
			*uParam1 = 1f;
			break;
		
		case joaat("zr3802"):
			*uParam1 = 1f;
			break;
		
		case joaat("zr3803"):
			*uParam1 = 1f;
			break;
	}
	return *uParam1 != -1f;
}

void func_76(int iParam0, var uParam1, bool bParam2, bool bParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	if (unk_0x80FF6C016CDB0FAF(iParam0, 0))
	{
		if (!func_87(iParam0))
		{
			if (unk_0x856D5567211886A2(&(uParam1->f_1)) != 0)
			{
				unk_0xC29A9E1088D83B1B(iParam0, &(uParam1->f_1));
			}
			if (*uParam1 >= 0 && *uParam1 < unk_0x2C8D182979CFA409())
			{
				unk_0xE704D9F37B4C2203(iParam0, *uParam1);
			}
		}
		if (uParam1->f_66 == joaat("sovereign"))
		{
			uParam1->f_5 = 111;
			uParam1->f_6 = 111;
			uParam1->f_7 = 111;
		}
		else if (uParam1->f_66 == joaat("casco"))
		{
			iVar0 = 1;
			if (unk_0xCE990E643CD9D0E5(uParam1->f_77, func_86(iVar0 + 1)))
			{
			}
			else
			{
				unk_0xBE20AB8238688965(&(uParam1->f_77), func_86(iVar0 + 1));
			}
		}
		else if (uParam1->f_66 == joaat("sandking") || uParam1->f_66 == joaat("sandking2"))
		{
			iVar1 = 1;
			if (unk_0xCE990E643CD9D0E5(uParam1->f_77, func_86(iVar1 + 1)))
			{
			}
			else
			{
				unk_0xBE20AB8238688965(&(uParam1->f_77), func_86(iVar1 + 1));
			}
		}
		else if (uParam1->f_66 == joaat("formula") || uParam1->f_66 == joaat("formula2"))
		{
			iVar2 = 1;
			while (iVar2 <= 9)
			{
				if (unk_0xCE990E643CD9D0E5(uParam1->f_77, func_86(iVar2)))
				{
				}
				else
				{
					unk_0xBE20AB8238688965(&(uParam1->f_77), func_86(iVar2));
				}
				iVar2++;
			}
		}
		else if (uParam1->f_66 == joaat("openwheel1"))
		{
			iVar3 = 1;
			while (iVar3 <= 6)
			{
				if (unk_0xCE990E643CD9D0E5(uParam1->f_77, func_86(iVar3)))
				{
				}
				else
				{
					unk_0xBE20AB8238688965(&(uParam1->f_77), func_86(iVar3));
				}
				iVar3++;
			}
		}
		else if (uParam1->f_66 == joaat("openwheel2"))
		{
			iVar4 = 1;
			while (iVar4 <= 11)
			{
				if (iVar4 != 9 && iVar4 != 10)
				{
					if (unk_0xCE990E643CD9D0E5(uParam1->f_77, func_86(iVar4)))
					{
					}
					else
					{
						unk_0xBE20AB8238688965(&(uParam1->f_77), func_86(iVar4));
					}
				}
				iVar4++;
			}
		}
		else if (uParam1->f_66 == joaat("dinghy5"))
		{
			if (unk_0xCE990E643CD9D0E5(uParam1->f_77, func_86(4)))
			{
			}
			else
			{
				unk_0xBE20AB8238688965(&(uParam1->f_77), func_86(4));
			}
		}
		else if (uParam1->f_66 == joaat("coquette4"))
		{
			if (unk_0x7F8B14CBFB9813E5(iParam0, 10) != 0)
			{
				unk_0xBE20AB8238688965(&(uParam1->f_77), 0);
			}
		}
		if (uParam1->f_66 == joaat("nightshark"))
		{
			unk_0xE3FF4A5CC7C44EF4(iParam0, 0);
			if (unk_0x7F8B14CBFB9813E5(iParam0, 5) != -1)
			{
				unk_0xE3FF4A5CC7C44EF4(iParam0, 1);
			}
		}
		if (unk_0xCE990E643CD9D0E5(uParam1->f_77, 13))
		{
			unk_0xE77150AD7B3A75D0(iParam0, uParam1->f_71, uParam1->f_72, uParam1->f_73);
		}
		else
		{
			unk_0x91BD4FF2323B189E(iParam0);
		}
		if (unk_0xCE990E643CD9D0E5(uParam1->f_77, 12))
		{
			unk_0xE492EED87CB95A5E(iParam0, uParam1->f_71, uParam1->f_72, uParam1->f_73);
		}
		else
		{
			unk_0xDA7C54DAC349948E(iParam0);
		}
		if (uParam1->f_5 != -1 && uParam1->f_6 != -1)
		{
			unk_0x38633C69DE516059(iParam0, uParam1->f_5, uParam1->f_6);
		}
		if (uParam1->f_7 < 0)
		{
			uParam1->f_7 = 0;
		}
		if (uParam1->f_8 < 0)
		{
			uParam1->f_8 = 0;
		}
		unk_0x88FCE2696F59472E(iParam0, uParam1->f_7, uParam1->f_8);
		if (((unk_0xCE990E643CD9D0E5(uParam1->f_77, 15) || func_85(iParam0)) || (((uParam1->f_62 == 0 && uParam1->f_63 == 0) && uParam1->f_64 == 0) && uParam1->f_9[20] > 0)) && func_84())
		{
			uParam1->f_62 = 0;
			uParam1->f_63 = 0;
			uParam1->f_64 = 0;
		}
		else if ((uParam1->f_62 == 0 && uParam1->f_63 == 0) && uParam1->f_64 == 0)
		{
			uParam1->f_62 = 255;
			uParam1->f_63 = 255;
			uParam1->f_64 = 255;
		}
		unk_0x80AB5AFB575FF63B(iParam0, uParam1->f_62, uParam1->f_63, uParam1->f_64);
		if (uParam1->f_65 == -1 && !func_83(uParam1->f_66))
		{
			unk_0x7E69FCE3F08F853A(iParam0, 0);
		}
		else
		{
			unk_0x7E69FCE3F08F853A(iParam0, 0);
			unk_0x7E69FCE3F08F853A(iParam0, uParam1->f_65);
		}
		unk_0x0E765FE8467F7839(iParam0, !unk_0xCE990E643CD9D0E5(uParam1->f_77, 9));
		if (bParam2)
		{
			unk_0x5DC21979EC6C531F(iParam0, uParam1->f_70);
		}
		unk_0x1EC0ADF14D3A546D(iParam0, uParam1->f_74, uParam1->f_75, uParam1->f_76);
		unk_0xC87500F291715C64(iParam0, 2, unk_0xCE990E643CD9D0E5(uParam1->f_77, 28));
		unk_0xC87500F291715C64(iParam0, 3, unk_0xCE990E643CD9D0E5(uParam1->f_77, 29));
		unk_0xC87500F291715C64(iParam0, 0, unk_0xCE990E643CD9D0E5(uParam1->f_77, 30));
		unk_0xC87500F291715C64(iParam0, 1, unk_0xCE990E643CD9D0E5(uParam1->f_77, 31));
		unk_0xDBDEDE7005EE04EF(iParam0, unk_0xCE990E643CD9D0E5(uParam1->f_77, 10));
		if (unk_0x1D3BB414B1AF67E6(iParam0) > 1 && uParam1->f_67 >= 0)
		{
			unk_0xA6595E9B6170C788(iParam0, uParam1->f_67);
		}
		if (uParam1->f_69 > -1 && uParam1->f_69 < 255)
		{
			if (!unk_0x72B9CC2155AEDF58(unk_0x36FE6D3220816ADA(iParam0)))
			{
				if (unk_0x97AFEF6099069369(unk_0x36FE6D3220816ADA(iParam0)))
				{
					if (uParam1->f_69 == 6)
					{
						func_82(iParam0, uParam1->f_69);
					}
				}
				else
				{
					func_82(iParam0, uParam1->f_69);
				}
			}
		}
		if (unk_0xD501F7099396F726(iParam0, 0))
		{
			if ((uParam1->f_68 == 0 || uParam1->f_68 == 3) || uParam1->f_68 == 5)
			{
				unk_0x8E02133B2800E7EB(iParam0, 1);
			}
			else
			{
				unk_0xD7ABCA2B7FE975F3(iParam0, 1);
			}
		}
		if (bParam3)
		{
			func_77(&iParam0, &(uParam1->f_9), &(uParam1->f_59));
		}
		if (!unk_0x442D6659150AF4B3(uParam1->f_66) && !unk_0x5874D60325749F00(uParam1->f_66))
		{
			iVar5 = 0;
			while (iVar5 <= 11)
			{
				if (unk_0xCE990E643CD9D0E5(uParam1->f_77, func_86(iVar5 + 1)))
				{
					if (!unk_0xAACD889100BCBCFA(iParam0, iVar5 + 1))
					{
						unk_0xF242CEB863060ABC(iParam0, iVar5 + 1, false);
					}
				}
				else if (unk_0xAACD889100BCBCFA(iParam0, iVar5 + 1))
				{
					unk_0xF242CEB863060ABC(iParam0, iVar5 + 1, true);
				}
				iVar5++;
			}
		}
		if ((unk_0x36FE6D3220816ADA(iParam0) == joaat("sheava") || unk_0x36FE6D3220816ADA(iParam0) == joaat("omnis")) || unk_0x36FE6D3220816ADA(iParam0) == joaat("le7b"))
		{
			if (unk_0x7F8B14CBFB9813E5(iParam0, 0) == -1)
			{
				unk_0xF242CEB863060ABC(iParam0, 1, false);
			}
		}
		if (((unk_0xF9C3E2B9AA9E2294(uParam1->f_66) && unk_0x3E082C70B59E7522(iParam0)) && !unk_0x68AEFA37A65085FD(iParam0, joaat("avenger"))) && !((((Global_4456448.f_74284 == 6 || Global_4456448.f_74284 == 7) || Global_4456448.f_74284 == 18) || Global_4456448.f_74284 == 19) && Global_4456448.f_2 == 20))
		{
			if (!unk_0xCE990E643CD9D0E5(uParam1->f_77, 23))
			{
				if (unk_0xCE990E643CD9D0E5(uParam1->f_77, 22))
				{
					unk_0xEE6FDB1E2B95E783(iParam0, 2);
				}
				else
				{
					unk_0xEE6FDB1E2B95E783(iParam0, 3);
				}
			}
			else
			{
				unk_0xEE6FDB1E2B95E783(iParam0, 4);
			}
		}
		if (unk_0xCE990E643CD9D0E5(uParam1->f_77, 27))
		{
			unk_0x6AAFCA9C4D72022D(iParam0, "IgnoredByQuickSave", 1);
		}
		else
		{
			unk_0x6AAFCA9C4D72022D(iParam0, "IgnoredByQuickSave", 0);
		}
	}
}

int func_77(int iParam0, var uParam1, var uParam2)
{
	int iVar0;
	int iVar1;
	
	if (!unk_0x80FF6C016CDB0FAF(*iParam0, 0))
	{
		return 0;
	}
	if (unk_0xC71761E30ACCF098(*iParam0) == 0)
	{
		return 0;
	}
	unk_0x249EEEE65626B20C(*iParam0, 0);
	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		iVar1 = iVar0;
		if ((((iVar1 == 17 || iVar1 == 18) || iVar1 == 19) || iVar1 == 20) || iVar1 == 21)
		{
			unk_0x136FC3422AADC5DD(*iParam0, iVar1, (*uParam1)[iVar0] > 0);
		}
		else if (iVar1 == 22)
		{
			if ((*uParam1)[iVar0] > 0)
			{
				unk_0x136FC3422AADC5DD(*iParam0, iVar1, true);
				if ((*uParam1)[iVar0] == 1)
				{
					unk_0xEA1AFD77A8446630(*iParam0, 255);
				}
				else
				{
					unk_0xEA1AFD77A8446630(*iParam0, ((*uParam1)[iVar0] - 2));
				}
			}
			else
			{
				unk_0x136FC3422AADC5DD(*iParam0, iVar1, false);
			}
		}
		else if (unk_0x7F8B14CBFB9813E5(*iParam0, iVar1) != ((*uParam1)[iVar0] - 1))
		{
			unk_0x4C1DD6A89EF34554(*iParam0, iVar1);
			if ((*uParam1)[iVar0] > 0)
			{
				if (iVar0 == 23)
				{
					unk_0x8DFB45E7317A7ED7(*iParam0, iVar1, ((*uParam1)[iVar0] - 1), (*uParam2)[0] > 0);
				}
				else if (iVar0 == 24)
				{
					unk_0x8DFB45E7317A7ED7(*iParam0, iVar1, ((*uParam1)[iVar0] - 1), (*uParam2)[1] > 0);
				}
				else
				{
					unk_0x8DFB45E7317A7ED7(*iParam0, iVar1, ((*uParam1)[iVar0] - 1), false);
				}
			}
		}
		iVar0++;
	}
	if (func_81(unk_0x36FE6D3220816ADA(*iParam0), 1) && unk_0x7F8B14CBFB9813E5(*iParam0, 24) != func_80(*iParam0, ((*uParam1)[38] - 1)))
	{
		unk_0x8DFB45E7317A7ED7(*iParam0, 24, func_80(*iParam0, ((*uParam1)[38] - 1)), false);
	}
	func_79(iParam0);
	if (func_78(*iParam0))
	{
		unk_0xAEBB7D261688301C(*iParam0, 1);
		unk_0x494ACC4552B7881B(*iParam0, 1);
	}
	return 1;
}

int func_78(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	char cVar3[32];
	
	if ((unk_0xAE06B9E39EBDE049(iParam0) && unk_0x80FF6C016CDB0FAF(iParam0, 0)) && unk_0xC71761E30ACCF098(iParam0) > 0)
	{
		unk_0x249EEEE65626B20C(iParam0, 0);
		iVar0 = 0;
		while (iVar0 < 49)
		{
			iVar1 = iVar0;
			if (((((iVar1 == 17 || iVar1 == 18) || iVar1 == 19) || iVar1 == 20) || iVar1 == 21) || iVar1 == 22)
			{
			}
			else if (unk_0x7F8B14CBFB9813E5(iParam0, iVar1) != -1)
			{
				StringCopy(&cVar3, unk_0x214B1F24249CD428(iParam0, iVar1, unk_0x7F8B14CBFB9813E5(iParam0, iVar1)), 32);
				iVar2 = unk_0x856D5567211886A2(&cVar3);
				if (iVar2 != 0)
				{
					if (iVar2 == unk_0x856D5567211886A2("MNU_CAGE") || iVar2 == unk_0x856D5567211886A2("SABRE_CAG"))
					{
						return 1;
					}
				}
			}
			iVar0++;
		}
	}
	return 0;
}

void func_79(var uParam0)
{
	switch (unk_0x36FE6D3220816ADA(*uParam0))
	{
		case joaat("starling"):
			if (unk_0x7F8B14CBFB9813E5(*uParam0, 4) == 0)
			{
				unk_0x8DFB45E7317A7ED7(*uParam0, 13, 0, false);
			}
			else
			{
				unk_0x4C1DD6A89EF34554(*uParam0, 13);
			}
			break;
	}
}

int func_80(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	float fVar2;
	int iVar3;
	
	if (unk_0xAE06B9E39EBDE049(iParam0) && unk_0x80FF6C016CDB0FAF(iParam0, 0))
	{
		switch (unk_0x36FE6D3220816ADA(iParam0))
		{
			case joaat("tornado5"):
				switch (iParam1)
				{
					case 0:
						return 0;
						break;
					
					case 1:
						return 1;
						break;
					
					case 2:
						return 2;
						break;
					
					case 3:
						return 3;
						break;
					
					case 4:
						return 4;
						break;
					
					case 5:
						return 4;
						break;
				}
				break;
			
			case joaat("faction3"):
				return 3;
				break;
		}
		iVar0 = unk_0xAB92DA7B6007DAAA(iParam0, 38);
		iVar1 = unk_0xAB92DA7B6007DAAA(iParam0, 24);
		fVar2 = (to_float(iParam1 + 1) / to_float(iVar0));
		iVar3 = (floor((to_float(iVar1) * fVar2)) - 1);
		if (iVar3 < 0)
		{
			iVar3 = 0;
		}
		if (iVar3 >= iVar0)
		{
			iVar3 = (iVar0 - 1);
		}
		return iVar3;
	}
	return 0;
}

int func_81(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case joaat("faction2"):
		case joaat("buccaneer2"):
		case joaat("chino2"):
		case joaat("moonbeam2"):
		case joaat("primo2"):
		case joaat("voodoo"):
			return 1;
			break;
		
		case joaat("sabregt2"):
			if (!Global_262145.f_14227)
			{
				return 0;
			}
			else
			{
				return 1;
			}
			break;
		
		case joaat("tornado5"):
			if (!Global_262145.f_14228)
			{
				return 0;
			}
			else
			{
				return 1;
			}
			break;
		
		case joaat("virgo2"):
			if (!Global_262145.f_14226)
			{
				return 0;
			}
			else
			{
				return 1;
			}
			break;
		
		case joaat("minivan2"):
			if (!Global_262145.f_14229)
			{
				return 0;
			}
			else
			{
				return 1;
			}
			break;
		
		case joaat("slamvan3"):
			if (!Global_262145.f_14231)
			{
				return 0;
			}
			else
			{
				return 1;
			}
			break;
		
		case joaat("faction3"):
			if (!Global_262145.f_14230)
			{
				return 0;
			}
			else
			{
				return 1;
			}
			break;
		
		case joaat("sultanrs"):
		case joaat("banshee2"):
			if (iParam1 & 1 != 0)
			{
				return 0;
			}
			return 1;
			break;
		
		case joaat("comet3"):
			if (Global_262145.f_18677)
			{
				if (iParam1 & 1 != 0)
				{
					return 0;
				}
				return 1;
			}
			return 0;
			break;
		
		case joaat("diablous2"):
			if (Global_262145.f_18679)
			{
				if (iParam1 & 1 != 0)
				{
					return 0;
				}
				return 1;
			}
			return 0;
			break;
		
		case joaat("fcr2"):
			if (Global_262145.f_18683)
			{
				if (iParam1 & 1 != 0)
				{
					return 0;
				}
				return 1;
			}
			return 0;
			break;
		
		case joaat("elegy"):
			if (Global_262145.f_18680)
			{
				if (iParam1 & 1 != 0)
				{
					return 0;
				}
				return 1;
			}
			return 0;
			break;
		
		case joaat("nero2"):
			if (Global_262145.f_18687)
			{
				if (iParam1 & 1 != 0)
				{
					return 0;
				}
				return 1;
			}
			return 0;
			break;
		
		case joaat("italigtb2"):
			if (Global_262145.f_18685)
			{
				if (iParam1 & 1 != 0)
				{
					return 0;
				}
				return 1;
			}
			return 0;
			break;
		
		case joaat("specter2"):
			if (Global_262145.f_18690)
			{
				if (iParam1 & 1 != 0)
				{
					return 0;
				}
				return 1;
			}
			return 0;
			break;
		
		case joaat("technical3"):
			if (Global_262145.f_20635)
			{
				if (iParam1 & 1 != 0)
				{
					return 0;
				}
				return 1;
			}
			return 0;
			break;
		
		case joaat("insurgent3"):
			if (Global_262145.f_20636)
			{
				if (iParam1 & 1 != 0)
				{
					return 0;
				}
				return 1;
			}
			return 0;
			break;
		
		case joaat("slamvan4"):
		case joaat("slamvan5"):
		case joaat("slamvan6"):
			if (iParam1 & 1 != 0)
			{
				return 0;
			}
			return 1;
			break;
		
		case joaat("issi4"):
		case joaat("issi5"):
		case joaat("issi6"):
			if (iParam1 & 1 != 0)
			{
				return 0;
			}
			return 1;
			break;
		
		case joaat("impaler2"):
		case joaat("impaler3"):
		case joaat("impaler4"):
			if (iParam1 & 1 != 0)
			{
				return 0;
			}
			return 1;
			break;
		
		case joaat("deathbike"):
		case joaat("deathbike2"):
		case joaat("deathbike3"):
			if (iParam1 & 1 != 0)
			{
				return 0;
			}
			return 1;
			break;
		
		case joaat("monster3"):
		case joaat("monster4"):
		case joaat("monster5"):
			if (iParam1 & 1 != 0)
			{
				return 0;
			}
			return 1;
			break;
		
		case joaat("dominator4"):
		case joaat("dominator5"):
		case joaat("dominator6"):
			if (iParam1 & 1 != 0)
			{
				return 0;
			}
			return 1;
			break;
		
		case joaat("bruiser"):
		case joaat("bruiser2"):
		case joaat("bruiser3"):
			if (iParam1 & 1 != 0)
			{
				return 0;
			}
			return 1;
			break;
		
		case joaat("youga3"):
		case joaat("gauntlet5"):
		case joaat("yosemite3"):
			if (iParam1 & 1 != 0)
			{
				return 0;
			}
			return 1;
			break;
		
		case joaat("manana2"):
		case joaat("peyote3"):
		case joaat("glendale2"):
			return 1;
			break;
	}
	return 0;
}

void func_82(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	if (unk_0xC71761E30ACCF098(iParam0) > 0)
	{
		unk_0x249EEEE65626B20C(iParam0, 0);
		iVar0 = unk_0x7F8B14CBFB9813E5(iParam0, 24);
		iVar1 = unk_0x9CE7070F0EBF111F(iParam0, 24);
		unk_0x499726ABB88D627B(iParam0, iParam1);
		if (unk_0x36FE6D3220816ADA(iParam0) == joaat("tornado6") || unk_0x36FE6D3220816ADA(iParam0) == joaat("peyote2"))
		{
			return;
		}
		if (iVar0 == -1)
		{
			unk_0x4C1DD6A89EF34554(iParam0, 24);
		}
		else
		{
			unk_0x8DFB45E7317A7ED7(iParam0, 24, iVar0, iVar1 == 1);
		}
	}
}

int func_83(int iParam0)
{
	switch (iParam0)
	{
		case joaat("granger"):
		case joaat("visione"):
			return 1;
		
		default:
	}
	return 0;
}

bool func_84()
{
	return unk_0x95C5B896CB42B20E(-1691188696);
}

int func_85(int iParam0)
{
	int iVar0;
	
	if (unk_0xAE06B9E39EBDE049(iParam0))
	{
		if (unk_0x80FF6C016CDB0FAF(iParam0, 0))
		{
			if (unk_0x6844807B17DC2DFC("MPBitset", 3))
			{
				if (unk_0x871819940BD2E434(iParam0, "MPBitset"))
				{
					iVar0 = unk_0x8C0800114C2864BE(iParam0, "MPBitset");
				}
				return unk_0xCE990E643CD9D0E5(iVar0, 4);
			}
		}
	}
	return 0;
}

int func_86(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return 0;
			break;
		
		case 2:
			return 1;
			break;
		
		case 3:
			return 2;
			break;
		
		case 4:
			return 3;
			break;
		
		case 5:
			return 4;
			break;
		
		case 6:
			return 5;
			break;
		
		case 7:
			return 6;
			break;
		
		case 8:
			return 7;
			break;
		
		case 9:
			return 8;
			break;
		
		case 10:
			return 24;
			break;
		
		case 11:
			return 25;
			break;
		
		case 12:
			return 26;
			break;
	}
	return 0;
}

int func_87(int iParam0)
{
	if (unk_0x47DBF174A0CB9D55(unk_0x9B0761B4C3EB8BC7(), 0))
	{
		if (!func_88(unk_0x460153A63B9477BC(), -1))
		{
			iParam0 = unk_0xA5D5B1042E8F47BD(unk_0x9B0761B4C3EB8BC7(), 0);
		}
	}
	if (!unk_0xAE06B9E39EBDE049(iParam0))
	{
		return 0;
	}
	if (unk_0xA59F96B50B97E63C(iParam0, 0))
	{
		return 0;
	}
	if (!unk_0x80FF6C016CDB0FAF(iParam0, 0))
	{
		return 0;
	}
	if (func_55(unk_0x460153A63B9477BC()) == 3)
	{
		if (unk_0xAE06B9E39EBDE049(iParam0) && unk_0x80FF6C016CDB0FAF(iParam0, 0))
		{
			if (func_54(iParam0) != -1)
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_88(int iParam0, int iParam1)
{
	int iVar0;
	
	if (func_313(iParam0, 1, 1))
	{
		if (unk_0x47DBF174A0CB9D55(unk_0x1FA7B77001D60F9D(iParam0), 0))
		{
			iVar0 = unk_0xA5D5B1042E8F47BD(unk_0x1FA7B77001D60F9D(iParam0), 0);
			if (unk_0x80FF6C016CDB0FAF(iVar0, 0))
			{
				if (unk_0x9B0761B4C3EB8BC7() == unk_0x10D3F7E169A49C44(iVar0, iParam1, 0))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_89()
{
	return -1;
}

struct<102> func_90()
{
	struct<102> Var0;
	
	Var0.f_9 = 49;
	Var0.f_59 = 2;
	Var0.f_78 = -1;
	Var0.f_79 = -1;
	Var0.f_96 = -1;
	Var0.f_97 = 1;
	Var0.f_99 = 132;
	Var0.f_100 = -1;
	Var0.f_66 = func_96();
	switch (Var0.f_66)
	{
		case joaat("cogcabrio"):
			Var0.f_5 = 141;
			Var0.f_6 = 1;
			Var0.f_7 = 70;
			Var0.f_8 = 82;
			Var0.f_97 = 1;
			Var0.f_99 = 132;
			Var0.f_98 = 0;
			Var0.f_65 = 1;
			Var0.f_69 = 7;
			Var0.f_62 = 255;
			Var0.f_63 = 255;
			Var0.f_64 = 255;
			Var0.f_74 = 255;
			Var0.f_76 = 255;
			Var0.f_67 = 0;
			unk_0xBE20AB8238688965(&(Var0.f_77), 9);
			Var0.f_9[15] = 4;
			Var0.f_9[23] = 3;
			break;
		
		case joaat("windsor"):
			Var0.f_5 = 9;
			Var0.f_6 = 5;
			Var0.f_7 = 7;
			Var0.f_8 = 156;
			Var0.f_97 = 1;
			Var0.f_99 = 132;
			Var0.f_98 = 0;
			Var0.f_65 = 2;
			Var0.f_69 = 3;
			Var0.f_62 = 255;
			Var0.f_63 = 255;
			Var0.f_64 = 255;
			Var0.f_74 = 255;
			Var0.f_76 = 255;
			Var0.f_67 = 0;
			unk_0xBE20AB8238688965(&(Var0.f_77), 9);
			Var0.f_9[23] = 32;
			break;
		
		case joaat("fugitive"):
			Var0.f_5 = 147;
			Var0.f_7 = 4;
			Var0.f_8 = 156;
			Var0.f_97 = 1;
			Var0.f_99 = 132;
			Var0.f_98 = 0;
			Var0.f_65 = 1;
			Var0.f_62 = 255;
			Var0.f_63 = 255;
			Var0.f_64 = 255;
			Var0.f_74 = 255;
			Var0.f_76 = 255;
			Var0.f_67 = 0;
			unk_0xBE20AB8238688965(&(Var0.f_77), 26);
			unk_0xBE20AB8238688965(&(Var0.f_77), 9);
			Var0.f_9[23] = 41;
			break;
		
		case joaat("superd"):
			Var0.f_5 = 62;
			Var0.f_6 = 1;
			Var0.f_7 = 70;
			Var0.f_8 = 156;
			Var0.f_97 = 1;
			Var0.f_99 = 132;
			Var0.f_98 = 0;
			Var0.f_65 = 3;
			Var0.f_62 = 255;
			Var0.f_63 = 255;
			Var0.f_64 = 255;
			Var0.f_74 = 255;
			Var0.f_76 = 255;
			Var0.f_67 = 0;
			unk_0xBE20AB8238688965(&(Var0.f_77), 9);
			Var0.f_9[23] = 24;
			break;
		
		case joaat("dubsta2"):
			Var0.f_5 = 13;
			Var0.f_6 = 12;
			Var0.f_8 = 156;
			Var0.f_97 = 1;
			Var0.f_99 = 132;
			Var0.f_98 = 0;
			Var0.f_65 = 1;
			Var0.f_69 = 3;
			Var0.f_62 = 255;
			Var0.f_63 = 255;
			Var0.f_64 = 255;
			Var0.f_74 = 255;
			Var0.f_76 = 255;
			Var0.f_67 = 0;
			unk_0xBE20AB8238688965(&(Var0.f_77), 9);
			Var0.f_9[10] = 2;
			Var0.f_9[15] = 4;
			Var0.f_9[22] = 1;
			break;
		
		case joaat("feltzer2"):
			Var0.f_5 = 50;
			Var0.f_6 = 28;
			Var0.f_7 = 92;
			Var0.f_8 = 156;
			Var0.f_97 = 1;
			Var0.f_99 = 132;
			Var0.f_98 = 0;
			Var0.f_65 = 3;
			Var0.f_69 = 7;
			Var0.f_62 = 255;
			Var0.f_63 = 255;
			Var0.f_64 = 255;
			Var0.f_74 = 255;
			Var0.f_76 = 255;
			Var0.f_67 = 0;
			unk_0xBE20AB8238688965(&(Var0.f_77), 9);
			Var0.f_9[0] = 1;
			Var0.f_9[15] = 4;
			Var0.f_9[23] = 20;
			break;
	}
	return Var0;
}

void func_91(int iParam0)
{
	if (!Global_262145.f_4684)
	{
		unk_0x131A211B8EEF6BF0(iParam0, 0);
	}
}

int func_92(var uParam0, int iParam1, struct<3> Param2, float fParam3, int iParam4, int iParam5, bool bParam6, bool bParam7, int iParam8, bool bParam9, bool bParam10, bool bParam11, int iParam12, bool bParam13)
{
	float fVar0;
	int iVar1;
	
	if (!unk_0x003F998A2839DD5E(iParam1))
	{
		return 0;
	}
	if (!unk_0xCAF3836E98C401B1(1))
	{
		return 0;
	}
	fVar0 = 1.5f;
	if (iParam1 == joaat("bombushka"))
	{
		fVar0 = 20f;
	}
	if (bParam9)
	{
		unk_0xF27E737981AFB47D(Param2, fVar0, 0, 0, 0, 0, false, 0);
	}
	iVar1 = unk_0xCE4780E24AFDFBF9(iParam1, Param2, fParam3, iParam5, iParam4, iParam12);
	if (unk_0xAE06B9E39EBDE049(iVar1))
	{
		*uParam0 = unk_0x50ACD47FCBAD9F89(iVar1);
		Global_2540384.f_6583 = iVar1;
		if (unk_0xF7DE07F319727299(*uParam0))
		{
			if (bParam13)
			{
				unk_0xFA6E875B9DF13F14(iVar1, 1);
			}
			unk_0x7C47E49129337557(iVar1, iParam8);
			if (unk_0x4349BF35C5B9A49B(iVar1))
			{
				if (bParam6)
				{
					unk_0x342AB3CE1C296A56(*uParam0, 1);
				}
				else
				{
					unk_0x342AB3CE1C296A56(*uParam0, 0);
				}
				if (bParam11)
				{
					unk_0xDB600F30FAA757F3(*uParam0, unk_0x460153A63B9477BC(), 1);
				}
			}
			unk_0xDBDEDE7005EE04EF(iVar1, bParam7);
			unk_0x6B75B3B5FAC90C06(iVar1, 1);
			if (bParam10)
			{
				unk_0x9DFE5167DB83E411(iVar1);
				unk_0x7C3ECA5C7ACE0DDB(iVar1, 5, 5, 1f);
			}
			func_93(Param2, fParam3, iParam1, iVar1);
			return 1;
		}
	}
	return 0;
}

void func_93(struct<3> Param0, float fParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	if (func_94(unk_0x460153A63B9477BC(), Param0, iParam2) > -1)
	{
		if ((Global_2405074.f_2914[1 /*6*/].f_5 == iParam3 && Global_2405074.f_2914[1 /*6*/].f_4 == iParam2) && vdist(Global_2405074.f_2914[1 /*6*/], Param0) < 0.5f)
		{
			return;
		}
		iVar0 = 0;
		while (iVar0 < 2)
		{
			if (iVar0 < 1)
			{
				Global_2405074.f_2914[iVar0 /*6*/] = { Global_2405074.f_2914[iVar0 + 1 /*6*/] };
			}
			iVar0++;
		}
		Global_2405074.f_2914[1 /*6*/] = { Param0 };
		Global_2405074.f_2914[1 /*6*/].f_3 = fParam1;
		Global_2405074.f_2914[1 /*6*/].f_4 = iParam2;
		Global_2405074.f_2914[1 /*6*/].f_5 = iParam3;
	}
}

int func_94(int iParam0, struct<3> Param1, int iParam2)
{
	int iVar0;
	int iVar1;
	struct<3> Var2;
	
	iVar0 = iParam0;
	if (iVar0 > -1)
	{
		iVar1 = 0;
		while (iVar1 < 2)
		{
			if (Global_2417956.f_461[iVar0 /*11*/][iVar1 /*5*/].f_4 == iParam2)
			{
				Var2 = { Param1 };
				if (unk_0x0D77CDCF403AEBD2((Global_2417956.f_461[iVar0 /*11*/][iVar1 /*5*/].f_2 - Var2.f_2)) < 2f)
				{
					Var2.f_2 = Global_2417956.f_461[iVar0 /*11*/][iVar1 /*5*/].f_2;
				}
				if (vdist(Global_2417956.f_461[iVar0 /*11*/][iVar1 /*5*/], Var2) < 0.5f)
				{
					return iVar1;
				}
			}
			iVar1++;
		}
	}
	return -1;
}

bool func_95(int iParam0)
{
	if (iParam0 == 0)
	{
		return 1;
	}
	unk_0x78FCB2E22C41B9D5(iParam0);
	return unk_0x7D167B9A0CCDA347(iParam0);
}

int func_96()
{
	return Global_1630317[func_17() /*595*/].f_11.f_301;
}

void func_97(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	unk_0xBE20AB8238688965(&(uLocal_79[iVar0]), iVar1);
}

int func_98(struct<3> Param0, var uParam1, var uParam2)
{
	struct<31> Var0;
	
	Var0.f_4 = 1125515264;
	Var0.f_5 = 1;
	Var0.f_6 = 1;
	Var0.f_8 = 1082130432;
	Var0.f_9 = 1176255488;
	Var0.f_10 = 1;
	Var0.f_13 = 1;
	Var0.f_15 = 2;
	Var0.f_22 = 2;
	Var0.f_25 = 1;
	Var0.f_26 = 1;
	Var0.f_29 = 1123024896;
	Var0.f_30 = 1;
	Var0 = func_235();
	Var0.f_4 = 1000f;
	Var0.f_27 = 1;
	if (func_99(Param0, 0f, 0f, 0f, func_96(), 1, uParam1, uParam2, &Var0))
	{
		return 1;
	}
	return 0;
}

int func_99(struct<3> Param0, struct<3> Param1, int iParam2, int iParam3, var uParam4, var uParam5, var uParam6)
{
	bool bVar0;
	int iVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	struct<60> Var5;
	struct<60> Var6;
	
	bVar0 = false;
	if (uParam6->f_14)
	{
		if (uParam6->f_25)
		{
			uParam6->f_25 = 0;
		}
	}
	if (unk_0x9CC4D06F5338CA6B())
	{
		if (!unk_0x69222D599BA78994() > 7 && !unk_0x69222D599BA78994() == 5)
		{
			return 0;
		}
	}
	if (Global_2405074.f_514)
	{
		Global_2405074.f_514 = 0;
		return 0;
	}
	if (!func_234(unk_0x460153A63B9477BC()))
	{
		return 0;
	}
	if (!Global_2405074.f_601 == 0 && unk_0x624736CA66E14161(unk_0x6CAAB7E78B5D978A(), Global_2405074.f_606) < func_233(0))
	{
		if (!Global_2405074.f_671 == 0)
		{
			Global_2405074.f_671 = 0;
			func_232();
			func_231();
		}
		return 0;
	}
	if (!unk_0x354AD085195C5FA6() == Global_2405074.f_670)
	{
		if (!Global_2405074.f_671 == 0)
		{
			if (unk_0x624736CA66E14161(unk_0x6CAAB7E78B5D978A(), Global_2405074.f_674) < func_233(0))
			{
				return 0;
			}
			else
			{
				Global_2405074.f_671 = 0;
			}
		}
	}
	else
	{
		if (unk_0x624736CA66E14161(unk_0x6CAAB7E78B5D978A(), Global_2405074.f_672) > 30000)
		{
			Global_2405074.f_671 = 0;
		}
		if (!Global_2405074.f_671 == 0)
		{
			if (unk_0x624736CA66E14161(unk_0x6CAAB7E78B5D978A(), Global_2405074.f_674) > func_233(1))
			{
				Global_2405074.f_671 = 0;
			}
		}
	}
	if (uParam6->f_6)
	{
		if (func_225(Param0))
		{
			if (func_224(&Param0, 1))
			{
			}
		}
	}
	if (!Global_2405074.f_671 == 0)
	{
		if (vdist(Global_2405074.f_689, Param0) > 50f)
		{
			return 0;
		}
		if (Global_2405074.f_692 != iParam2)
		{
			return 0;
		}
	}
	unk_0xB65F86FFF1334E95((Param0.x - 100f), (Param0.f_1 - 100f), (Param0.x + 100f), (Param0.f_1 + 100f));
	if (Global_2405074.f_671 == 0)
	{
		Global_2405074.f_676 = 0;
		Global_2405074.f_672 = unk_0x29B9AF1CB5B8175D();
		Global_2405074.f_670 = unk_0x354AD085195C5FA6();
		Global_2405074.f_674 = unk_0x29B9AF1CB5B8175D();
		Global_2405074.f_689 = { Param0 };
		Global_2405074.f_692 = iParam2;
		Global_2405074.f_675 = unk_0x29B9AF1CB5B8175D();
		func_223();
		func_232();
		if (!uParam6->f_27 || (((((((func_222(Param0, 1, 1133903872) && !uParam6->f_28) && !Global_2540384.f_921) && !Global_2540384.f_910) && !Global_2540384.f_918) && !Global_2540384.f_922) && !Global_2540384.f_930) && !Global_2540384.f_942))
		{
			func_203(Param0, iParam2);
		}
		if (func_188(Param0))
		{
			func_203(Param0, iParam2);
		}
		Global_2405074.f_671 = 2;
	}
	switch (Global_2405074.f_671)
	{
		case 2:
			if (unk_0x71B5E9AB554C28B8((Param0.x - 100f), (Param0.f_1 - 100f), (Param0.x + 100f), (Param0.f_1 + 100f)))
			{
				Global_2405074.f_677 = { Param0 };
				Global_2405074.f_680 = 0f;
				if (Global_2540384.f_921)
				{
					fVar2 = 10f;
					fVar3 = 5f;
					fVar4 = 5f;
				}
				else
				{
					fVar2 = 4f;
					fVar3 = 1f;
					fVar4 = 1f;
				}
				if (((uParam6->f_3 && func_182(Param0, fVar2, fVar3, fVar4, 1f, 0, 0, 0, 1123024896, 0, -1, 1, 0, 0, 0, 0, 0)) && !uParam6->f_7) && !func_180(Param0, *uParam5, iParam2, unk_0x460153A63B9477BC(), 0))
				{
					Global_2405074.f_677 = { Param0 };
					Global_2405074.f_680 = *uParam5;
				}
				else
				{
					Var5.f_6 = 1082130432;
					Var5.f_7 = 1176255488;
					Var5.f_8 = 1;
					Var5.f_10 = 1;
					Var5.f_13 = 1;
					Var5.f_15 = 1;
					Var5.f_16 = 1;
					Var5.f_31 = 1;
					Var5.f_34 = joaat("tailgater");
					Var5.f_38 = 2;
					Var5.f_45 = 2;
					Var5.f_49 = 1123024896;
					Var5.f_53 = 999;
					Var5.f_54 = 1176256410;
					Var5.f_55 = 1;
					Var5.f_56 = 1;
					Var5.f_57 = 1;
					Var5.f_9 = iParam3;
					Var5.f_3 = 7f;
					Var5.f_10 = uParam6->f_5;
					Var5.f_4 = *uParam6;
					Var5.f_13 = uParam6->f_1;
					Var5.f_14 = uParam6->f_2;
					Var5.f_5 = uParam6->f_4;
					Var5.f_15 = uParam6->f_6;
					Var5.f_11 = uParam6->f_7;
					Var5.f_6 = uParam6->f_8;
					Var5.f_7 = uParam6->f_9;
					Var5.f_16 = uParam6->f_10;
					Var5.f_17 = uParam6->f_11;
					Var5 = { Param1 };
					Var5.f_12 = 1;
					Var5.f_34 = iParam2;
					Var5.f_31 = uParam6->f_13;
					if (uParam6->f_32 && Global_2405074.f_676 > 0)
					{
						Var5.f_30 = 0;
						Var5.f_29 = 1;
					}
					else
					{
						Var5.f_30 = uParam6->f_30;
						Var5.f_29 = uParam6->f_31;
					}
					Var5.f_48 = uParam6->f_14;
					Var5.f_56 = uParam6->f_25;
					Var5.f_57 = uParam6->f_26;
					Var5.f_49 = uParam6->f_29;
					Var5.f_59 = uParam6->f_33;
					iVar1 = 0;
					while (iVar1 < 2)
					{
						Var5.f_38[iVar1 /*3*/] = { uParam6->f_15[iVar1 /*3*/] };
						Var5.f_45[iVar1] = uParam6->f_22[iVar1];
						iVar1++;
					}
					func_126(&(Global_2405074.f_677), &(Global_2405074.f_680), &Var5);
				}
				func_124(Global_2405074.f_677, Global_2405074.f_680, iParam2, &(Global_2405074.f_668));
				Global_2405074.f_666 = 0;
				Global_2405074.f_667 = 0;
				Global_2405074.f_676++;
				Global_2405074.f_673 = unk_0x29B9AF1CB5B8175D();
				Global_2405074.f_672 = unk_0x29B9AF1CB5B8175D();
				Global_2405074.f_671 = 3;
			}
			break;
		
		case 3:
			if (Global_2405074.f_666)
			{
				if (Global_2405074.f_668 == Global_2405074.f_669)
				{
					if (Global_2405074.f_667)
					{
						if (uParam6->f_12 && !uParam6->f_11)
						{
							if (func_123(Global_2405074.f_677, Global_2405074.f_680, iParam2, 1, 1036831949))
							{
								Global_2405074.f_671 = 4;
								Global_2405074.f_694 = unk_0x29B9AF1CB5B8175D();
							}
							else
							{
								bVar0 = true;
							}
						}
						else
						{
							bVar0 = true;
						}
					}
					else
					{
						func_121(Global_2405074.f_677, 0);
						func_120(-1);
					}
				}
				else
				{
					Global_2405074.f_666 = 0;
					Global_2405074.f_667 = 0;
				}
			}
			else if (unk_0x624736CA66E14161(unk_0x6CAAB7E78B5D978A(), Global_2405074.f_673) > 3000)
			{
				func_120(-1);
			}
			break;
		
		case 4:
			if (uParam6->f_12 && !uParam6->f_11)
			{
				if (unk_0x624736CA66E14161(unk_0x6CAAB7E78B5D978A(), Global_2405074.f_694) < 10000)
				{
					if (unk_0xFE7504CE3CC54D0B(Global_2405074.f_693))
					{
						if (unk_0xA1D9AC941D5284D3(Global_2405074.f_693))
						{
							if (!unk_0xA798AC9046F8467B(Global_2405074.f_693))
							{
								if (func_119(Global_2405074.f_677, Global_2405074.f_680, iParam2, unk_0x460153A63B9477BC(), 0) || func_101(Global_2405074.f_677, Global_2405074.f_680, iParam2, 1, 0, 0, 0, 1, 0))
								{
									func_121(Global_2405074.f_677, 0);
									func_120(-1);
								}
								else
								{
									bVar0 = true;
								}
							}
							else
							{
								func_121(Global_2405074.f_677, 0);
								func_120(-1);
							}
						}
					}
					else
					{
						func_120(-1);
					}
				}
				else
				{
					func_120(1);
				}
			}
			else
			{
				bVar0 = true;
			}
			break;
		
		case 5:
			Global_2405074.f_677 = { Param0 };
			Global_2405074.f_680 = 0f;
			Var6.f_6 = 1082130432;
			Var6.f_7 = 1176255488;
			Var6.f_8 = 1;
			Var6.f_10 = 1;
			Var6.f_13 = 1;
			Var6.f_15 = 1;
			Var6.f_16 = 1;
			Var6.f_31 = 1;
			Var6.f_34 = joaat("tailgater");
			Var6.f_38 = 2;
			Var6.f_45 = 2;
			Var6.f_49 = 1123024896;
			Var6.f_53 = 999;
			Var6.f_54 = 1176256410;
			Var6.f_55 = 1;
			Var6.f_56 = 1;
			Var6.f_57 = 1;
			Var6.f_9 = iParam3;
			Var6.f_3 = 3.5f;
			Var6.f_10 = uParam6->f_5;
			Var6.f_4 = *uParam6;
			Var6.f_12 = 1;
			Var6.f_13 = 0;
			Var6.f_15 = uParam6->f_6;
			Var6.f_11 = uParam6->f_7;
			Var6.f_6 = uParam6->f_8;
			Var6.f_7 = uParam6->f_9;
			Var6 = { Param1 };
			Var6.f_34 = iParam2;
			Var6.f_31 = uParam6->f_13;
			Var6.f_30 = 1;
			Var6.f_48 = uParam6->f_14;
			Var6.f_56 = uParam6->f_25;
			Var6.f_57 = uParam6->f_26;
			Var6.f_30 = uParam6->f_30;
			Var6.f_29 = uParam6->f_31;
			Var6.f_59 = uParam6->f_33;
			iVar1 = 0;
			while (iVar1 < 2)
			{
				Var6.f_38[iVar1 /*3*/] = { uParam6->f_15[iVar1 /*3*/] };
				Var6.f_45[iVar1] = uParam6->f_22[iVar1];
				iVar1++;
			}
			Var6.f_49 = uParam6->f_29;
			func_126(&(Global_2405074.f_677), &(Global_2405074.f_680), &Var6);
			Global_2405074.f_671 = 6;
			break;
		
		case 6:
			bVar0 = true;
			break;
	}
	Global_2405074.f_689 = { Param0 };
	Global_2405074.f_692 = iParam2;
	Global_2405074.f_674 = unk_0x29B9AF1CB5B8175D();
	if (bVar0)
	{
		Global_2405074.f_513 = 0;
		*uParam4 = { Global_2405074.f_677 };
		*uParam5 = Global_2405074.f_680;
		func_100(1);
		return 1;
	}
	return 0;
}

void func_100(bool bParam0)
{
	Global_2405074.f_671 = 0;
	func_223();
	func_232();
	if (bParam0)
	{
		func_231();
	}
}

int func_101(struct<3> Param0, float fParam1, int iParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, int iParam7, int iParam8)
{
	int iVar0;
	int iVar1;
	float fVar2;
	int iVar3;
	int iVar4;
	struct<3> Var5;
	float fVar6;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar1 = iVar0;
		if ((iParam7 == 1 && unk_0x460153A63B9477BC() != iVar1) || iParam7 == 0)
		{
			if (func_313(iVar1, bParam3, bParam4))
			{
				if (unk_0x56B60AE958412839(unk_0x460153A63B9477BC(), iVar1))
				{
					if (!bParam6 || (!unk_0x5AEB5DDFFAD43CA5(unk_0x1FA7B77001D60F9D(iVar1)) && func_118(iVar1)))
					{
						if ((!bParam5 || (bParam5 == 1 && unk_0x6CC163E30ECE0790(unk_0x460153A63B9477BC()) != unk_0x6CC163E30ECE0790(iVar1))) || unk_0x6CC163E30ECE0790(unk_0x460153A63B9477BC()) == -1)
						{
							if (((unk_0x6CC163E30ECE0790(unk_0x460153A63B9477BC()) == -1 && iParam8) && bParam5) && func_113(iVar1))
							{
							}
							else if (unk_0xAE06B9E39EBDE049(unk_0x1FA7B77001D60F9D(iVar1)))
							{
								fVar2 = 0.1f;
								if (unk_0x47DBF174A0CB9D55(unk_0x1FA7B77001D60F9D(iVar1), 0))
								{
									iVar3 = unk_0xA5D5B1042E8F47BD(unk_0x1FA7B77001D60F9D(iVar1), 0);
									if (unk_0xAE06B9E39EBDE049(iVar3) && !unk_0xA59F96B50B97E63C(iVar3, 0))
									{
										iVar4 = unk_0x36FE6D3220816ADA(iVar3);
										Var5 = { unk_0x3E4D3CCC220BDFB1(iVar3, 0) };
										fVar6 = unk_0xEF7858F25585F853(iVar3);
										if (func_112(Param0, fParam1, iParam2, Var5, fVar6, iVar4, 0))
										{
											return 1;
										}
									}
									else
									{
										fVar2 = 5f;
									}
								}
								if (func_102(func_111(iVar1), Param0, fParam1, iParam2, fVar2))
								{
									return 1;
								}
							}
						}
					}
				}
			}
		}
		iVar0++;
	}
	return 0;
}

int func_102(struct<3> Param0, struct<3> Param1, float fParam2, int iParam3, float fParam4)
{
	struct<3> Var0;
	struct<3> Var1;
	float fVar2;
	
	if (vdist(Param0, Param1) < func_110(iParam3, 1008981770))
	{
		func_103(Param1, fParam2, iParam3, &Var0, &Var1, &fVar2, fParam4);
		if (unk_0x3BC3A4E4A1827EEE(Param0, Var0, Var1, fVar2, 0, 1))
		{
			return 1;
		}
	}
	return 0;
}

void func_103(struct<3> Param0, float fParam1, int iParam2, var uParam3, var uParam4, var uParam5, float fParam6)
{
	struct<3> Var0;
	struct<3> Var1;
	struct<3> Var2;
	struct<3> Var3;
	struct<3> Var4;
	
	Var0 = { 0f, 1f, 0f };
	func_109(&Var0, 0f, 0f, fParam1);
	Var0 = { Var0 / FtoV(vmag(Var0)) };
	func_104(iParam2, &Var1, &Var2, 1086324736, 1080033280, 1077936128);
	Var3 = { Param0 + Var0 * FtoV((Var2.f_1 + fParam6)) };
	Var3.f_2 = (Var3.f_2 - ((0.5f * unk_0x0D77CDCF403AEBD2((Var2.f_2 - Var1.f_2))) + fParam6));
	Var4 = { Param0 - Var0 * FtoV(((Var1.f_1 * -1f) + fParam6)) };
	Var4.f_2 = (Var4.f_2 + ((0.5f * unk_0x0D77CDCF403AEBD2((Var2.f_2 - Var1.f_2))) + fParam6));
	*uParam3 = { Var3 };
	*uParam4 = { Var4 };
	*uParam5 = unk_0x0D77CDCF403AEBD2((Var2.x - Var1.x));
}

void func_104(int iParam0, var uParam1, var uParam2, float fParam3, float fParam4, float fParam5)
{
	int iVar0;
	
	if (unk_0x003F998A2839DD5E(iParam0))
	{
		unk_0x140662B520844E45(iParam0, uParam1, uParam2);
	}
	else
	{
		iVar0 = func_107(iParam0);
		if (iVar0 != 0)
		{
			func_105(iVar0, uParam1, uParam2, 1086324736, 1080033280, 1077936128);
			return;
		}
	}
	if (vmag(*uParam1) <= 0.01f || vmag(*uParam2) <= 0.01f)
	{
		if (iParam0 == joaat("kosatka"))
		{
			if (fParam4 < 20.7f)
			{
				fParam4 = 20.7f;
			}
			if (fParam3 < 137.2f)
			{
				fParam3 = 137.2f;
			}
			if (fParam5 < 21.1f)
			{
				fParam5 = 21.1f;
			}
		}
		*uParam1 = (0f - (fParam4 * 0.5f));
		*uParam2 = (0f + (fParam4 * 0.5f));
		uParam1->f_1 = (0f - (fParam3 * 0.5f));
		uParam2->f_1 = (0f + (fParam3 * 0.5f));
		uParam1->f_2 = (0f - (fParam5 * 0.5f));
		uParam2->f_2 = (0f + (fParam5 * 0.5f));
	}
}

void func_105(int iParam0, var uParam1, var uParam2, float fParam3, float fParam4, float fParam5)
{
	int iVar0;
	
	func_106(iParam0, &Global_1315831);
	iVar0 = 0;
	while (iVar0 < 2)
	{
		if (unk_0x003F998A2839DD5E(Global_1315831[iVar0]))
		{
			unk_0x140662B520844E45(Global_1315831[iVar0], &(Global_1315835[iVar0 /*3*/]), &(Global_1315842[iVar0 /*3*/]));
		}
		if (vmag(Global_1315835[iVar0 /*3*/]) <= 0.01f || vmag(Global_1315842[iVar0 /*3*/]) <= 0.01f)
		{
			Global_1315835[iVar0 /*3*/] = (0f - (fParam4 * 0.5f));
			Global_1315842[iVar0 /*3*/] = (0f + (fParam4 * 0.5f));
			Global_1315835[iVar0 /*3*/].f_1 = (0f - (fParam3 * 0.5f));
			Global_1315842[iVar0 /*3*/].f_1 = (0f + (fParam3 * 0.5f));
			Global_1315835[iVar0 /*3*/].f_2 = (0f - (fParam5 * 0.5f));
			Global_1315842[iVar0 /*3*/].f_2 = (0f + (fParam5 * 0.5f));
		}
		Global_1315849[iVar0] = (Global_1315842[iVar0 /*3*/] - Global_1315835[iVar0 /*3*/]);
		Global_1315852[iVar0] = (Global_1315842[iVar0 /*3*/].f_1 - Global_1315835[iVar0 /*3*/].f_1);
		Global_1315855[iVar0] = (Global_1315842[iVar0 /*3*/].f_2 - Global_1315835[iVar0 /*3*/].f_2);
		if (Global_1315849[iVar0] > Global_1315858)
		{
			Global_1315858 = Global_1315849[iVar0];
		}
		if (Global_1315855[iVar0] > Global_1315859)
		{
			Global_1315859 = Global_1315855[iVar0];
		}
		iVar0++;
	}
	Global_1315860 = (Global_1315858 * -0.5f);
	Global_1315863 = (Global_1315858 * 0.5f);
	Global_1315860.f_1 = ((((0.5f * Global_1315852[0]) + Global_1315852[1]) + Global_1315831.f_3) * -1f);
	Global_1315863.f_1 = (0.5f * Global_1315852[0]);
	Global_1315860.f_2 = (Global_1315855[0] * -0.5f);
	Global_1315863.f_2 = (Global_1315855[0] * 0.5f);
	*uParam1 = { Global_1315860 };
	*uParam2 = { Global_1315863 };
}

void func_106(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case 1:
			(*uParam1)[0] = joaat("hauler2");
			(*uParam1)[1] = joaat("trailerlarge");
			uParam1->f_3 = -2.6f;
			break;
		
		case 2:
			(*uParam1)[0] = joaat("phantom3");
			(*uParam1)[1] = joaat("trailerlarge");
			uParam1->f_3 = -2.6f;
			break;
		
		case 3:
			(*uParam1)[0] = joaat("nightshark");
			(*uParam1)[1] = joaat("trailersmall2");
			uParam1->f_3 = 0.5f;
			break;
	}
}

int func_107(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 4)
	{
		iVar1 = iVar0;
		if (func_108(iVar1) == iParam0)
		{
			return iVar1;
		}
		iVar0++;
	}
	return 0;
}

int func_108(int iParam0)
{
	int iVar0;
	
	iVar0 = (1000 + iParam0);
	return iVar0;
}

void func_109(var uParam0, struct<3> Param1)
{
	float fVar0;
	float fVar1;
	struct<3> Var2;
	
	fVar0 = cos(Param1.x);
	fVar1 = sin(Param1.x);
	Var2.x = *uParam0;
	Var2.f_1 = ((fVar0 * uParam0->f_1) - (fVar1 * uParam0->f_2));
	Var2.f_2 = ((fVar1 * uParam0->f_1) + (fVar0 * uParam0->f_2));
	*uParam0 = { Var2 };
	fVar0 = cos(Param1.f_1);
	fVar1 = sin(Param1.f_1);
	Var2.x = ((fVar0 * *uParam0) + (fVar1 * uParam0->f_2));
	Var2.f_1 = uParam0->f_1;
	Var2.f_2 = ((fVar0 * uParam0->f_2) - (fVar1 * *uParam0));
	*uParam0 = { Var2 };
	fVar0 = cos(Param1.f_2);
	fVar1 = sin(Param1.f_2);
	Var2.x = ((fVar0 * *uParam0) - (fVar1 * uParam0->f_1));
	Var2.f_1 = ((fVar1 * *uParam0) + (fVar0 * uParam0->f_1));
	Var2.f_2 = uParam0->f_2;
	*uParam0 = { Var2 };
}

float func_110(int iParam0, float fParam1)
{
	struct<3> Var0;
	struct<3> Var1;
	struct<3> Var2;
	float fVar3;
	
	if (iParam0 == 0)
	{
		return 5f;
	}
	func_104(iParam0, &Var0, &Var1, 1086324736, 1080033280, 1077936128);
	Var2 = { Var1 - Var0 };
	fVar3 = (sqrt(((((Var2.x * 0.5f) * (Var2.x * 0.5f)) + ((Var2.f_1 * 0.5f) * (Var2.f_1 * 0.5f))) + ((Var2.f_2 * 0.5f) * (Var2.f_2 * 0.5f)))) + fParam1);
	return fVar3;
}

Vector3 func_111(int iParam0)
{
	return unk_0x3E4D3CCC220BDFB1(unk_0x1FA7B77001D60F9D(iParam0), 0);
}

int func_112(struct<3> Param0, float fParam1, int iParam2, struct<3> Param3, float fParam4, int iParam5, bool bParam6)
{
	int iVar0;
	struct<3> Var1[4];
	struct<3> Var2;
	struct<3> Var3;
	struct<3> Var4;
	struct<3> Var5;
	struct<3> Var6;
	
	if (func_102(Param0, Param3, fParam4, iParam5, 1036831949))
	{
		return 1;
	}
	if (Global_1312332 && (iParam2 == joaat("kosatka") || iParam5 == joaat("kosatka")))
	{
		func_103(Param0, fParam1, iParam2, &Global_1707737, &(Global_1707737.f_3), &(Global_1707737.f_6), 1036831949);
		func_103(Param3, fParam4, iParam5, &(Global_1707737.f_7), &(Global_1707737.f_10), &(Global_1707737.f_13), 1036831949);
		if (unk_0xA0AD167E4B39D9A2(Global_1707737, Global_1707737.f_3, Global_1707737.f_6, Global_1707737.f_7, Global_1707737.f_10, Global_1707737.f_13))
		{
			return 1;
		}
	}
	else
	{
		func_104(iParam2, &Var2, &Var3, 1086324736, 1080033280, 1077936128);
		Var4 = { 0f, Var3.f_1, 0f };
		func_109(&Var4, 0f, 0f, fParam1);
		Var5 = { 0f, Var2.f_1, 0f };
		func_109(&Var5, 0f, 0f, fParam1);
		Var6 = { (unk_0x0D77CDCF403AEBD2((Var3.x - Var2.x)) * 0.5f), 0f, 0f };
		func_109(&Var6, 0f, 0f, fParam1);
		Var1[0 /*3*/] = { Param0 + Var4 + Var6 };
		Var1[0 /*3*/].f_2 = (Var1[0 /*3*/].f_2 + (0.5f * unk_0x0D77CDCF403AEBD2((Var3.f_2 - Var2.f_2))));
		Var1[1 /*3*/] = { Param0 + Var4 - Var6 };
		Var1[1 /*3*/].f_2 = (Var1[1 /*3*/].f_2 + (0.5f * unk_0x0D77CDCF403AEBD2((Var3.f_2 - Var2.f_2))));
		Var1[2 /*3*/] = { Param0 + Var5 + Var6 };
		Var1[2 /*3*/].f_2 = (Var1[2 /*3*/].f_2 + (0.5f * unk_0x0D77CDCF403AEBD2((Var3.f_2 - Var2.f_2))));
		Var1[3 /*3*/] = { Param0 + Var5 - Var6 };
		Var1[3 /*3*/].f_2 = (Var1[3 /*3*/].f_2 + (0.5f * unk_0x0D77CDCF403AEBD2((Var3.f_2 - Var2.f_2))));
		iVar0 = 0;
		while (iVar0 < 4)
		{
			if (func_102(Var1[iVar0 /*3*/], Param3, fParam4, iParam5, 1036831949))
			{
				return 1;
			}
			iVar0++;
		}
		if (!bParam6)
		{
			if (func_112(Param3, fParam4, iParam5, Param0, fParam1, iParam2, 1))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_113(int iParam0)
{
	if (func_117(unk_0x460153A63B9477BC(), iParam0))
	{
		return 1;
	}
	Global_2515173 = { func_116(iParam0) };
	if (unk_0x78A7795C9C51946D(&Global_2515173))
	{
		return 1;
	}
	if (func_114(unk_0x460153A63B9477BC(), iParam0))
	{
		return 1;
	}
	return 0;
}

int func_114(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = func_115(iParam0);
	if (!iVar0 == func_89())
	{
		if (iVar0 == func_115(iParam1))
		{
			return 1;
		}
	}
	return 0;
}

int func_115(int iParam0)
{
	if (iParam0 != func_89())
	{
		return Global_1630317[iParam0 /*595*/].f_11;
	}
	return func_89();
}

struct<13> func_116(int iParam0)
{
	struct<13> Var0;
	
	unk_0x2BDD80E79441BD36(iParam0, &Var0, 13);
	return Var0;
}

int func_117(int iParam0, int iParam1)
{
	if (unk_0xE2FBD13450B2DA21())
	{
		Global_2515173 = { func_116(iParam0) };
		Global_2515186 = { func_116(iParam1) };
		if (unk_0xBF9EC1ED7E386622(&Global_2515173))
		{
			if (unk_0xBF9EC1ED7E386622(&Global_2515186))
			{
				unk_0x192BD21E18525C69(&Global_2515103, 35, &Global_2515173);
				unk_0x192BD21E18525C69(&Global_2515138, 35, &Global_2515186);
				if (Global_2515103 == Global_2515138)
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_118(int iParam0)
{
	if (unk_0xEB7D4DA50142DE0A(unk_0x1FA7B77001D60F9D(iParam0)) || Global_2425869[iParam0 /*443*/].f_249)
	{
		return 1;
	}
	return 0;
}

int func_119(struct<3> Param0, float fParam1, int iParam2, int iParam3, int iParam4)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (!iParam3 == iVar0 || iParam4 == 1)
		{
			iVar1 = iVar0;
			if (func_313(iVar1, 0, 1) && func_313(iParam3, 0, 1))
			{
				if (Global_2417956.f_261[iVar0])
				{
					if (func_102(Global_2417956.f_131[iVar0 /*3*/], Param0, fParam1, iParam2, 1036831949))
					{
						return 1;
					}
				}
				else if (func_102(func_111(iVar1), Param0, fParam1, iParam2, 1036831949))
				{
					return 1;
				}
			}
			else if (Global_2417956.f_261[iVar0])
			{
				if (func_102(Global_2417956.f_131[iVar0 /*3*/], Param0, fParam1, iParam2, 1036831949))
				{
					return 1;
				}
			}
			else if (func_313(iVar1, 0, 0))
			{
				if (unk_0xAE06B9E39EBDE049(unk_0x1FA7B77001D60F9D(iVar1)))
				{
					if (func_102(func_111(iVar1), Param0, fParam1, iParam2, 1036831949))
					{
						return 1;
					}
				}
			}
		}
		iVar0++;
	}
	return 0;
}

void func_120(int iParam0)
{
	if (Global_2405074.f_676 < 20 && unk_0x624736CA66E14161(unk_0x6CAAB7E78B5D978A(), Global_2405074.f_675) < 30000)
	{
		if (iParam0 == -1 || (iParam0 > -1 && Global_2405074.f_676 < iParam0))
		{
			Global_2405074.f_671 = 2;
		}
		else
		{
			Global_2405074.f_671 = 5;
		}
	}
	else
	{
		Global_2405074.f_671 = 5;
	}
}

void func_121(struct<3> Param0, int iParam1)
{
	struct<3> Var0;
	
	if (iParam1 == 0 && func_122(Param0, 0.01f))
	{
		return;
	}
	if (iParam1 < 30 && vmag(Param0) > 0f)
	{
		Var0 = { Global_2405074.f_2730[iParam1 /*3*/] };
		Global_2405074.f_2730[iParam1 /*3*/] = { Param0 };
		func_121(Var0, iParam1 + 1);
	}
}

int func_122(struct<3> Param0, float fParam1)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 30)
	{
		if (vdist(Param0, Global_2405074.f_2730[iVar0 /*3*/]) < fParam1)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_123(struct<3> Param0, float fParam1, int iParam2, bool bParam3, float fParam4)
{
	struct<3> Var0;
	struct<3> Var1;
	var uVar2;
	int iVar3;
	float fVar4;
	
	if (!unk_0xAFF96FDC3971E7EA())
	{
		return 0;
	}
	else
	{
		func_232();
		iVar3 = 0;
		while (iVar3 < 3)
		{
			if (Global_2405074.f_681[iVar3] == -1 && unk_0xAFF96FDC3971E7EA())
			{
				func_103(Param0, fParam1, iParam2, &Var0, &Var1, &uVar2, fParam4);
				if (bParam3)
				{
					fVar4 = unk_0x0D77CDCF403AEBD2((Var0.f_2 - Var1.f_2));
					Var0.f_2 = (Var0.f_2 + ((fVar4 * 0.5f) - 2f));
					Var1.f_2 = (Var1.f_2 + (fVar4 * 0.5f));
				}
				Global_2405074.f_681[iVar3] = unk_0xBAEBD0599D45397C(Var0, Var1, fParam4);
				Global_2405074.f_685[iVar3] = unk_0x354AD085195C5FA6();
				Global_2405074.f_693 = Global_2405074.f_681[iVar3];
				return 1;
			}
			iVar3++;
		}
	}
	return 0;
}

void func_124(struct<3> Param0, var uParam1, int iParam2, var uParam3)
{
	struct<8> Var0;
	
	*uParam3 = func_125(&Param0, &uParam1, &iParam2);
	Var0 = -1730227041;
	Var0.f_1 = unk_0x460153A63B9477BC();
	Var0.f_2 = { Param0 };
	Var0.f_5 = uParam1;
	Var0.f_6 = iParam2;
	Var0.f_7 = *uParam3;
	unk_0xB802750B43D4047C(1, &Var0, 8, func_29(1, 1));
}

int func_125(var uParam0, var uParam1, var uParam2)
{
	char cVar0[64];
	int iVar1;
	
	StringCopy(&cVar0, "", 64);
	StringIntConCat(&cVar0, round(*uParam0), 64);
	StringIntConCat(&cVar0, round(uParam0->f_1), 64);
	StringIntConCat(&cVar0, round(uParam0->f_2), 64);
	StringIntConCat(&cVar0, round(*uParam1), 64);
	StringIntConCat(&cVar0, *uParam2, 64);
	iVar1 = unk_0x856D5567211886A2(&cVar0);
	return iVar1;
}

void func_126(var uParam0, var uParam1, var uParam2)
{
	int iVar0;
	
	iVar0 = 0;
	if (Global_2405074.f_1748 > 0)
	{
		iVar0 = 0;
		while (func_175(uParam0, uParam1, uParam2) == 0 && iVar0 < 2)
		{
			iVar0++;
		}
		if (iVar0 == 2)
		{
			uParam2->f_33 = 0;
		}
		else
		{
			return;
		}
	}
	iVar0 = 0;
	while (func_127(uParam0, uParam1, uParam2) == 0 && iVar0 < 6)
	{
		iVar0++;
	}
}

int func_127(var uParam0, var uParam1, var uParam2)
{
	int iVar0;
	struct<3> Var1;
	float fVar2;
	int iVar3;
	var uVar4;
	var uVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	bool bVar9;
	bool bVar10;
	float fVar11;
	float fVar12;
	int iVar13;
	int iVar14;
	int iVar15;
	bool bVar16;
	int iVar17;
	bool bVar18;
	int iVar19;
	float fVar20;
	int iVar21;
	int iVar22;
	float fVar23;
	int iVar24;
	struct<3> Var25;
	var uVar26;
	struct<3> Var27;
	float fVar28;
	bool bVar29;
	
	iVar0 = 0;
	if (!vmag(uParam2->f_35) > 0f)
	{
		uParam2->f_35 = { *uParam0 };
	}
	if (uParam2->f_15)
	{
		if (func_171(uParam2->f_35, uParam0, &(uParam2->f_38), &(uParam2->f_45), 1, 1))
		{
			uParam2->f_6 = 9999.9f;
			uParam2->f_7 = 9999.9f;
		}
	}
	if (uParam2->f_51)
	{
		uParam2->f_6 = 9999.9f;
	}
	if (uParam2->f_48)
	{
		if (func_166(uParam0, 1))
		{
		}
	}
	if (uParam0->f_2 < -80f)
	{
		uParam2->f_6 = 9999.9f;
		uParam2->f_7 = 9999.9f;
	}
	iVar3 = 0;
	iVar8 = 1;
	if (uParam2->f_11)
	{
		iVar3 += 2;
		iVar3++;
		iVar8 = 0;
	}
	else if (uParam2->f_10 == 0 || (uParam2->f_33 > 0 && uParam2->f_16))
	{
		iVar3++;
		iVar8 = 0;
	}
	iVar3 += 4;
	fVar11 = 3f;
	fVar12 = 5f;
	switch (uParam2->f_33)
	{
		case 0:
			fVar11 = 3f;
			fVar12 = 5f;
			break;
		
		case 1:
			fVar11 = 2.75f;
			fVar12 = 7.5f;
			break;
		
		default:
			fVar11 = 2.5f;
			fVar12 = 10f;
			break;
	}
	iVar13 = 0;
	Global_2412480.f_162 = 0;
	Global_2412480.f_163 = 0;
	Global_2412480.f_164 = -99;
	Global_2412480.f_165 = { 0f, 0f, 0f };
	iVar14 = 0;
	while (iVar14 < 40)
	{
		Global_2412480[iVar14 /*3*/] = { 0f, 0f, 0f };
		Global_2412480.f_121[iVar14] = 0f;
		iVar14++;
	}
	iVar15 = 1;
	if (func_107(uParam2->f_34) != 0)
	{
		iVar15 = 3;
		uParam2->f_6 = 9999.9f;
		uParam2->f_7 = 9999.9f;
		uParam2->f_18 = 0;
	}
	while (true)
	{
		iVar6 = unk_0x2B952A1C251A8004(*uParam0, (iVar0 * iVar15), &fVar2, &iVar7, iVar3, fVar11, fVar12);
		if (unk_0xB4D59BAA683CC8ED(iVar6))
		{
			unk_0x1EFE169AA25C75A7(iVar6, &Var1);
			bVar10 = false;
			if (Global_2412480.f_164 == iVar6)
			{
				bVar10 = true;
			}
			Global_2412480.f_165 = { Var1 };
			if (((uParam2->f_10 || uParam2->f_33 > 0) || !unk_0xEF445D270DD603D8(iVar6)) || unk_0x061CA1649D051C95(iVar6))
			{
				unk_0x4645311C71338838(Var1, &uVar4, &uVar5);
				if (vdist(Var1, uParam2->f_35) > uParam2->f_4)
				{
					if (!func_159(&Var1, 0))
					{
						if ((uParam2->f_13 || uVar5 & 64 == 0) || uParam2->f_33 == 1)
						{
							if (uParam2->f_14 || uVar5 & 16 == 0)
							{
								if ((uVar5 & 128 == 0 && uVar5 & 256 == 0) && uVar5 & 512 == 0)
								{
									if (!func_156(Var1))
									{
										Var1 = { func_151(Var1, &fVar2, iVar7, uParam2->f_9, *uParam2, iVar8, uParam2->f_11, uParam2->f_34, &bVar9, bVar10, 1, uParam2->f_51) };
										if (vmag(Var1) > 0f)
										{
											if (!func_150(Var1, 5f))
											{
												if (Var1.f_2 >= (uParam2->f_35.f_2 - uParam2->f_7) || uParam2->f_33 >= 2)
												{
													if (Var1.f_2 <= (uParam2->f_35.f_2 + uParam2->f_6) || uParam2->f_33 >= 2)
													{
														if (func_146(Var1, uParam2))
														{
															if ((uParam2->f_48 && !func_166(&Var1, 0)) || uParam2->f_48 == 0)
															{
																bVar16 = true;
																if (!bVar10)
																{
																	if (bVar9)
																	{
																		iVar0 = (iVar0 + -1);
																		bVar16 = false;
																	}
																}
																if (vmag(Var1) > 0f)
																{
																	if (((uParam2->f_5 > 0f && vdist(Var1.x, Var1.f_1, 0f, uParam2->f_35, uParam2->f_35.f_1, 0f) < uParam2->f_5) || uParam2->f_5 <= 0f) || uParam2->f_33 >= 2)
																	{
																		if ((uParam2->f_12 && !func_145(Var1, fVar2, uParam2->f_34, unk_0x460153A63B9477BC(), 0, uParam2->f_56)) || !uParam2->f_12)
																		{
																			if (!uParam2->f_15 || !func_171(uParam2->f_35, &Var1, &(uParam2->f_38), &(uParam2->f_45), 0, 1))
																			{
																				if (uParam2->f_8)
																				{
																					iVar17 = uParam2->f_31;
																					bVar18 = true;
																					iVar19 = 1;
																					fVar20 = uParam2->f_49;
																					if (!uParam2->f_55)
																					{
																						iVar17 = 0;
																						bVar18 = false;
																						iVar19 = 0;
																						fVar20 = 1f;
																					}
																					else if (uParam2->f_17)
																					{
																						iVar17 = 0;
																						bVar18 = false;
																						iVar19 = 0;
																						if (uParam2->f_33 == 1)
																						{
																							fVar20 = (fVar20 * 0.375f);
																						}
																					}
																					else
																					{
																						bVar18 = true;
																						iVar19 = 1;
																						if (uParam2->f_28)
																						{
																							if (uParam2->f_33 == 1)
																							{
																								fVar20 = (fVar20 * 0.375f);
																							}
																						}
																					}
																					iVar21 = 0;
																					if (!func_144(Var1, fVar2, uParam2->f_34))
																					{
																						if (uParam2->f_3 > 7f)
																						{
																							if (func_182(Var1, 6f, 1f, 1f, 5f, iVar17, bVar18, iVar19, fVar20, uParam2->f_58, -1, 1, uParam2->f_3, 0, 0, 0, 0))
																							{
																								iVar21 = 1;
																							}
																						}
																						else if (func_182(Var1, 6f, 1f, 1f, 5f, iVar17, bVar18, iVar19, fVar20, uParam2->f_58, -1, 1, 0f, 0, 0, 0, 0) && !func_101(Var1, fVar2, uParam2->f_34, 1, 1, 0, 0, 0, 0))
																						{
																							iVar21 = 1;
																						}
																					}
																					if (iVar21 || uParam2->f_33 >= 2)
																					{
																						if (((uParam2->f_29 || uParam2->f_30) || uParam2->f_52) || uParam2->f_33 >= 2)
																						{
																							fVar23 = 0f;
																							if (uParam2->f_52)
																							{
																								iVar22 = func_136(Var1, uParam2->f_54, &fVar23);
																							}
																							if (!uParam2->f_52 || (uParam2->f_52 && iVar22 <= uParam2->f_53))
																							{
																								if (uParam2->f_52)
																								{
																									if (iVar22 < uParam2->f_53)
																									{
																										iVar14 = 0;
																										while (iVar14 < Global_2412480.f_162)
																										{
																											Global_2412480[iVar14 /*3*/] = { 0f, 0f, 0f };
																											Global_2412480.f_121[iVar14] = 0f;
																											iVar14++;
																										}
																										Global_2412480.f_162 = 0;
																										uParam2->f_53 = iVar22;
																									}
																								}
																								if (uParam2->f_30)
																								{
																									if (Global_2412480.f_162 == 0)
																									{
																										Global_2412480[0 /*3*/] = { Var1 };
																										Global_2412480.f_121[0] = fVar2;
																									}
																									else
																									{
																										iVar14 = 0;
																										while (iVar14 < Global_2412480.f_162 + 1)
																										{
																											if (iVar14 < 40)
																											{
																												if (vdist2(Var1, uParam2->f_35) < vdist2(Global_2412480[iVar14 /*3*/], uParam2->f_35))
																												{
																													func_135(Var1, fVar2, iVar14);
																													iVar14 = Global_2412480.f_162 + 1;
																												}
																											}
																											iVar14++;
																										}
																									}
																									Global_2412480.f_162++;
																									if (Global_2412480.f_162 >= 5)
																									{
																										if ((uParam2->f_52 && uParam2->f_53 == 0) || uParam2->f_52 == 0)
																										{
																											iVar0 = 100;
																										}
																										else if (Global_2412480.f_162 == 40)
																										{
																											iVar0 = 100;
																										}
																									}
																								}
																								else
																								{
																									Global_2412480[Global_2412480.f_162 /*3*/] = { Var1 };
																									Global_2412480.f_121[Global_2412480.f_162] = fVar2;
																									Global_2412480.f_162++;
																									if (func_146(Var1, uParam2))
																									{
																										Global_2412480.f_163++;
																									}
																									if (Global_2412480.f_162 >= 10)
																									{
																										if ((uParam2->f_52 && uParam2->f_53 == 0) || uParam2->f_52 == 0)
																										{
																											iVar0 = 100;
																										}
																										else if (Global_2412480.f_162 == 40)
																										{
																											iVar0 = 100;
																										}
																									}
																								}
																							}
																						}
																						else
																						{
																							*uParam0 = { Var1 };
																							*uParam1 = fVar2;
																							return 1;
																						}
																					}
																					else if (bVar16)
																					{
																						iVar0++;
																					}
																				}
																				else
																				{
																					*uParam0 = { Var1 };
																					*uParam1 = fVar2;
																					return 1;
																				}
																			}
																		}
																		else
																		{
																			iVar13++;
																		}
																	}
																	else
																	{
																		iVar0 = 100;
																	}
																}
															}
															else
															{
																iVar0++;
															}
														}
														else if (!uParam2->f_32)
														{
															iVar0 = 100;
														}
													}
													else
													{
														iVar0++;
													}
												}
												else
												{
													iVar0++;
												}
											}
										}
									}
									else
									{
										iVar0++;
									}
								}
							}
							else
							{
								iVar0++;
							}
						}
						else
						{
							iVar0++;
						}
					}
					else
					{
						iVar13++;
					}
				}
				else
				{
					iVar13++;
				}
			}
			iVar0++;
			if (iVar0 >= (40 + iVar13) || iVar0 >= 100)
			{
				if (Global_2412480.f_162 > 0 && ((uParam2->f_29 || uParam2->f_30) || uParam2->f_33 >= 2))
				{
					if (uParam2->f_30)
					{
						*uParam0 = { Global_2412480[0 /*3*/] };
						*uParam1 = Global_2412480.f_121[0];
						return 1;
					}
					else
					{
						if (Global_2412480.f_163 > 0 && !Global_2412480.f_163 == Global_2412480.f_162)
						{
							func_133(0, uParam2);
						}
						iVar24 = unk_0x344C570D6F8700DF(0, Global_2412480.f_162);
						if (uParam2->f_18 && uParam2->f_30)
						{
							iVar24 = 0;
						}
						Var25 = { Global_2412480[0 /*3*/] };
						uVar26 = Global_2412480.f_121[0];
						Global_2412480[0 /*3*/] = { Global_2412480[iVar24 /*3*/] };
						Global_2412480.f_121[0] = Global_2412480.f_121[iVar24];
						Global_2412480[iVar24 /*3*/] = { Var25 };
						Global_2412480.f_121[iVar24] = uVar26;
						*uParam0 = { Global_2412480[0 /*3*/] };
						*uParam1 = Global_2412480.f_121[0];
						return 1;
					}
				}
				else
				{
					uParam2->f_33++;
					if (uParam2->f_33 < 3)
					{
						return 0;
					}
					else
					{
						func_132(iVar13, *uParam0, &iVar0, &Var1, &fVar2, uParam2, iVar8, iVar7, iVar3, fVar11, fVar12, bVar9);
						Var27 = { Var1 };
						fVar28 = fVar2;
						if (!uParam2->f_50)
						{
							bVar29 = true;
						}
						else
						{
							bVar29 = false;
						}
						if (func_171(uParam2->f_35, &Var27, &(uParam2->f_38), &(uParam2->f_45), bVar29, 1) || func_166(&Var27, bVar29))
						{
							if (!uParam2->f_50)
							{
								uParam2->f_33 = 0;
								uParam2->f_50 = 1;
								*uParam0 = { Var27 };
								*uParam1 = fVar28;
								uParam2->f_6 = 9999.9f;
								uParam2->f_7 = 9999.9f;
								return 0;
							}
							else
							{
								*uParam0 = { Var27 };
								*uParam1 = fVar28;
								return 1;
							}
						}
						else
						{
							*uParam0 = { Var27 };
							*uParam1 = fVar28;
							return 1;
						}
					}
				}
			}
		}
		else
		{
			uParam2->f_33++;
			if (uParam2->f_33 < 3)
			{
				return 0;
			}
			else
			{
				func_128(&Global_1312061, uParam0, uParam1, *uParam0);
				if (uParam2->f_11)
				{
					uParam2->f_27 = 1;
				}
				return 1;
			}
		}
		Global_2412480.f_164 = iVar6;
	}
	return 0;
}

void func_128(var uParam0, var uParam1, var uParam2, struct<3> Param3)
{
	float fVar0;
	float fVar1;
	int iVar2;
	int iVar3;
	
	fVar0 = 1E+09f;
	iVar3 = -1;
	iVar2 = 0;
	while (iVar2 < *uParam0)
	{
		fVar1 = vdist(*(uParam0[iVar2 /*4*/]), Param3);
		if (fVar1 < fVar0)
		{
			if (!func_129(*(uParam0[iVar2 /*4*/]), 5f, unk_0x460153A63B9477BC(), 0, 0))
			{
				fVar0 = fVar1;
				iVar3 = iVar2;
			}
		}
		iVar2++;
	}
	if (!iVar3 == -1)
	{
		*uParam1 = { *(uParam0[iVar3 /*4*/]) };
		*uParam2 = (uParam0[iVar3 /*4*/])->f_3;
	}
}

int func_129(struct<3> Param0, float fParam1, int iParam2, int iParam3, int iParam4)
{
	if (func_131(Param0, fParam1, iParam2, iParam3, 0) || func_130(Param0, iParam2, iParam4))
	{
		return 1;
	}
	return 0;
}

int func_130(struct<3> Param0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (!iParam1 == iVar0 || iParam2 == 1)
		{
			iVar2 = iVar0;
			iVar1 = 0;
			while (iVar1 < 2)
			{
				if (!Global_2417956.f_461[iVar0 /*11*/][iVar1 /*5*/].f_4 == 0)
				{
					if (func_102(Param0, Global_2417956.f_461[iVar0 /*11*/][iVar1 /*5*/], Global_2417956.f_461[iVar0 /*11*/][iVar1 /*5*/].f_3, Global_2417956.f_461[iVar0 /*11*/][iVar1 /*5*/].f_4, 1036831949))
					{
						if (func_313(iVar2, 0, 1) && func_313(iParam1, 0, 1))
						{
							return 1;
						}
						else
						{
							return 1;
						}
					}
				}
				iVar1++;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_131(struct<3> Param0, float fParam1, int iParam2, int iParam3, bool bParam4)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (!iParam2 == iVar0 || iParam3 == 1)
		{
			iVar1 = iVar0;
			bVar2 = false;
			if (bParam4)
			{
				if (func_313(iVar1, 0, 1) && func_313(iParam2, 0, 1))
				{
					if (unk_0x6CC163E30ECE0790(iVar1) == unk_0x6CC163E30ECE0790(iParam2))
					{
						bVar2 = true;
					}
				}
			}
			if (!bVar2)
			{
				if (func_313(iVar1, 0, 1) && func_313(iParam2, 0, 1))
				{
					if (Global_2417956.f_261[iVar0])
					{
						if (vdist(Global_2417956.f_131[iVar0 /*3*/], Param0) < fParam1)
						{
							return 1;
						}
					}
					else if (vdist(func_111(iVar1), Param0) < 1f)
					{
						return 1;
					}
				}
				else if (Global_2417956.f_261[iVar0])
				{
					if (vdist(Global_2417956.f_131[iVar0 /*3*/], Param0) < fParam1)
					{
						return 1;
					}
				}
				else if (func_313(iVar1, 0, 1))
				{
					if (vdist(func_111(iVar1), Param0) < 1f)
					{
						return 1;
					}
				}
			}
		}
		iVar0++;
	}
	return 0;
}

void func_132(int iParam0, struct<3> Param1, int iParam2, var uParam3, float fParam4, var uParam5, int iParam6, int iParam7, int iParam8, float fParam9, float fParam10, bool bParam11)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 30)
	{
		*iParam2 = unk_0x344C570D6F8700DF((1 + iParam0), (40 + iParam0));
		unk_0x1485BFBB1EC6FE22(Param1, *iParam2, uParam3, fParam4, &iParam7, iParam8, fParam9, fParam10);
		*uParam3 = { func_151(*uParam3, fParam4, iParam7, uParam5->f_9, *uParam5, iParam6, uParam5->f_11, uParam5->f_34, &bParam11, 0, 0, uParam5->f_51) };
		if (!func_156(*uParam3))
		{
			iVar0 = 999;
			return;
		}
		iVar0++;
	}
}

void func_133(int iParam0, var uParam1)
{
	if (!func_146(Global_2412480[iParam0 /*3*/], uParam1))
	{
		Global_2412480.f_162 = (Global_2412480.f_162 - 1);
		func_134(iParam0);
		if (Global_2412480.f_162 > Global_2412480.f_163)
		{
			func_133(iParam0, uParam1);
		}
	}
	else if (iParam0 < 39)
	{
		func_133(iParam0 + 1, uParam1);
	}
}

void func_134(int iParam0)
{
	while (iParam0 < 39)
	{
		if (iParam0 < 39)
		{
			Global_2412480[iParam0 /*3*/] = { Global_2412480[iParam0 + 1 /*3*/] };
			Global_2412480.f_121[iParam0] = Global_2412480.f_121[iParam0 + 1];
		}
		iParam0++;
	}
}

void func_135(struct<3> Param0, float fParam1, int iParam2)
{
	struct<3> Var0;
	var uVar1;
	
	Var0 = { Global_2412480[iParam2 /*3*/] };
	uVar1 = Global_2412480.f_121[iParam2];
	Global_2412480[iParam2 /*3*/] = { Param0 };
	Global_2412480.f_121[iParam2] = fParam1;
	if (iParam2 <= Global_2412480.f_162 && iParam2 < 39)
	{
		if (vmag(Var0) > 0f)
		{
			func_135(Var0, uVar1, iParam2 + 1);
		}
	}
}

int func_136(struct<3> Param0, float fParam1, float fParam2)
{
	int iVar0;
	struct<3> Var1;
	int iVar2;
	int iVar3;
	float fVar4;
	float fVar5;
	
	fVar4 = 99999.9f;
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar3 = iVar0;
		if (func_137(iVar3))
		{
			Var1 = { func_111(iVar3) };
			fVar5 = vdist(Param0, Var1);
			if (fVar5 < fParam1)
			{
				if (fVar5 < fVar4)
				{
					fVar4 = fVar5;
				}
				iVar2++;
			}
		}
		iVar0++;
	}
	*fParam2 = fVar4;
	return iVar2;
}

int func_137(int iParam0)
{
	if (func_313(iParam0, 0, 1))
	{
		if (!func_142(iParam0))
		{
			if (unk_0x56B60AE958412839(unk_0x460153A63B9477BC(), iParam0))
			{
				if (!unk_0x6CC163E30ECE0790(iParam0) == unk_0x6CC163E30ECE0790(unk_0x460153A63B9477BC()))
				{
					if (func_139(unk_0x460153A63B9477BC(), 1, 0))
					{
						if (!func_138(unk_0x6CC163E30ECE0790(iParam0), unk_0x6CC163E30ECE0790(unk_0x460153A63B9477BC()), 0))
						{
							return 1;
						}
					}
					else
					{
						return 1;
					}
				}
				else if (unk_0x6CC163E30ECE0790(iParam0) == -1 && unk_0x6CC163E30ECE0790(unk_0x460153A63B9477BC()) == -1)
				{
					if (!func_139(unk_0x460153A63B9477BC(), 1, 0))
					{
						if (!func_113(iParam0))
						{
							return 1;
						}
					}
					else
					{
						return 1;
					}
				}
			}
		}
	}
	return 0;
}

int func_138(int iParam0, int iParam1, int iParam2)
{
	if (iParam2 == 1)
	{
		if (iParam0 == iParam1)
		{
			return 1;
		}
		return 0;
	}
	if ((iParam0 > -1 && iParam1 > -1) && iParam0 == iParam1)
	{
		return 1;
	}
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					return unk_0xCE990E643CD9D0E5(Global_4456448.f_541, 0);
				
				case 1:
					return unk_0xCE990E643CD9D0E5(Global_4456448.f_541, 1);
				
				case 2:
					return unk_0xCE990E643CD9D0E5(Global_4456448.f_541, 2);
				
				case 3:
					return unk_0xCE990E643CD9D0E5(Global_4456448.f_541, 3);
				
				default:
			}
			break;
		
		case 1:
			switch (iParam1)
			{
				case 0:
					return unk_0xCE990E643CD9D0E5(Global_4456448.f_541, 4);
				
				case 1:
					return unk_0xCE990E643CD9D0E5(Global_4456448.f_541, 5);
				
				case 2:
					return unk_0xCE990E643CD9D0E5(Global_4456448.f_541, 6);
				
				case 3:
					return unk_0xCE990E643CD9D0E5(Global_4456448.f_541, 7);
				
				default:
			}
			break;
		
		case 2:
			switch (iParam1)
			{
				case 0:
					return unk_0xCE990E643CD9D0E5(Global_4456448.f_541, 8);
				
				case 1:
					return unk_0xCE990E643CD9D0E5(Global_4456448.f_541, 9);
				
				case 2:
					return unk_0xCE990E643CD9D0E5(Global_4456448.f_541, 10);
				
				case 3:
					return unk_0xCE990E643CD9D0E5(Global_4456448.f_541, 11);
				
				default:
			}
			break;
		
		case 3:
			switch (iParam1)
			{
				case 0:
					return unk_0xCE990E643CD9D0E5(Global_4456448.f_541, 12);
				
				case 1:
					return unk_0xCE990E643CD9D0E5(Global_4456448.f_541, 13);
				
				case 2:
					return unk_0xCE990E643CD9D0E5(Global_4456448.f_541, 14);
				
				case 3:
					return unk_0xCE990E643CD9D0E5(Global_4456448.f_541, 15);
				
				default:
			}
			break;
	}
	return 0;
}

int func_139(int iParam0, bool bParam1, bool bParam2)
{
	if (bParam1)
	{
		if (func_140(iParam0))
		{
			return 1;
		}
	}
	if (!bParam2)
	{
	}
	if (Global_1590682[iParam0 /*883*/] == -1)
	{
		return 0;
	}
	return 1;
}

bool func_140(int iParam0)
{
	return func_141(iParam0);
}

bool func_141(int iParam0)
{
	return unk_0xCE990E643CD9D0E5(Global_1590682[iParam0 /*883*/].f_13.f_1, 0);
}

int func_142(int iParam0)
{
	if (func_30(iParam0, 0))
	{
		return 1;
	}
	if (func_143())
	{
		if (iParam0 == unk_0x460153A63B9477BC())
		{
			return 1;
		}
	}
	if (unk_0xCE990E643CD9D0E5(Global_2425869[iParam0 /*443*/].f_199, 2))
	{
		return 1;
	}
	return 0;
}

bool func_143()
{
	return unk_0xCE990E643CD9D0E5(Global_2359302, 3);
}

int func_144(struct<3> Param0, float fParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<3> Var3;
	float fVar4;
	
	iVar0 = 1;
	iVar0 += 2;
	iVar0 += 4;
	iVar0 += 8;
	iVar0 += 16;
	iVar0 += 32;
	iVar0 += 64;
	iVar0 = (iVar0 + 131076);
	iVar1 = unk_0xC2E2CC6CF95AF8A3(Param0, 30f, 0, iVar0);
	if (unk_0xAE06B9E39EBDE049(iVar1) && !unk_0xA59F96B50B97E63C(iVar1, 0))
	{
		iVar2 = unk_0x36FE6D3220816ADA(iVar1);
		Var3 = { unk_0x3E4D3CCC220BDFB1(iVar1, 0) };
		fVar4 = unk_0xEF7858F25585F853(iVar1);
		if (func_112(Param0, fParam1, iParam2, Var3, fVar4, iVar2, 0))
		{
			return 1;
		}
	}
	iVar0 += 4096;
	iVar0 += 8192;
	iVar0 += 16384;
	iVar1 = unk_0xC2E2CC6CF95AF8A3(Param0, 30f, 0, iVar0);
	if (unk_0xAE06B9E39EBDE049(iVar1) && !unk_0xA59F96B50B97E63C(iVar1, 0))
	{
		iVar2 = unk_0x36FE6D3220816ADA(iVar1);
		Var3 = { unk_0x3E4D3CCC220BDFB1(iVar1, 0) };
		fVar4 = unk_0xEF7858F25585F853(iVar1);
		if (func_112(Param0, fParam1, iParam2, Var3, fVar4, iVar2, 0))
		{
			return 1;
		}
	}
	return 0;
}

int func_145(struct<3> Param0, float fParam1, int iParam2, int iParam3, int iParam4, int iParam5)
{
	if (func_119(Param0, fParam1, iParam2, iParam3, iParam4) || func_180(Param0, fParam1, iParam2, iParam3, iParam5))
	{
		return 1;
	}
	return 0;
}

int func_146(struct<3> Param0, var uParam1)
{
	if (uParam1->f_18)
	{
		switch (uParam1->f_26)
		{
			case 0:
				if (func_149(Param0, uParam1->f_19, uParam1->f_25, 0, 0))
				{
					return 1;
				}
				break;
			
			case 1:
				if (func_147(Param0, uParam1->f_19, uParam1->f_22, 0, 0))
				{
					return 1;
				}
				break;
			
			case 2:
				if (unk_0x3BC3A4E4A1827EEE(Param0, uParam1->f_19, uParam1->f_22, uParam1->f_25, 0, 1))
				{
					return 1;
				}
				break;
		}
		return 0;
	}
	return 1;
}

int func_147(struct<3> Param0, struct<3> Param1, struct<3> Param2, bool bParam3, bool bParam4)
{
	func_148(&Param1, &Param2);
	if (((!Param0.x >= Param1.x || !Param0.f_1 >= Param1.f_1) || !Param0.x <= Param2.x) || !Param0.f_1 <= Param2.f_1)
	{
		return 0;
	}
	if (bParam3 && bParam4)
	{
		return 1;
	}
	else if (bParam3)
	{
		if (Param0.f_2 >= Param1.f_2)
		{
			return 1;
		}
	}
	else if (bParam4)
	{
		if (Param0.f_2 <= Param2.f_2)
		{
			return 1;
		}
	}
	else if (Param0.f_2 >= Param1.f_2 && Param0.f_2 <= Param2.f_2)
	{
		return 1;
	}
	return 0;
}

void func_148(var uParam0, var uParam1)
{
	var uVar0;
	
	if (*uParam0 > *uParam1)
	{
		uVar0 = *uParam1;
		*uParam1 = *uParam0;
		*uParam0 = uVar0;
	}
	if (uParam0->f_1 > uParam1->f_1)
	{
		uVar0 = uParam1->f_1;
		uParam1->f_1 = uParam0->f_1;
		uParam0->f_1 = uVar0;
	}
	if (uParam0->f_2 > uParam1->f_2)
	{
		uVar0 = uParam1->f_2;
		uParam1->f_2 = uParam0->f_2;
		uParam0->f_2 = uVar0;
	}
}

bool func_149(struct<3> Param0, struct<3> Param1, float fParam2, bool bParam3, bool bParam4)
{
	if (bParam3 && bParam4)
	{
		Param0.f_2 = 0f;
		Param1.f_2 = 0f;
		return vdist(Param0, Param1) < (fParam2 + 0.01f);
	}
	else if (bParam3)
	{
		if (Param0.f_2 > Param1.f_2)
		{
			Param0.f_2 = Param1.f_2;
		}
		return vdist(Param0, Param1) < (fParam2 + 0.01f);
	}
	else if (bParam4)
	{
		if (Param0.f_2 < Param1.f_2)
		{
			Param0.f_2 = Param1.f_2;
		}
		return vdist(Param0, Param1) < (fParam2 + 0.01f);
	}
	return vdist(Param0, Param1) < (fParam2 + 0.01f);
}

int func_150(struct<3> Param0, float fParam1)
{
	int iVar0;
	
	if (func_139(unk_0x460153A63B9477BC(), 1, 0))
	{
		if (Global_4718592.f_25199 > 0)
		{
			iVar0 = 0;
			while (iVar0 < Global_4718592.f_25199)
			{
				if (Global_4718592.f_25200[iVar0 /*110*/].f_7 != 0)
				{
					if (func_102(Param0, Global_4718592.f_25200[iVar0 /*110*/], Global_4718592.f_25200[iVar0 /*110*/].f_6, Global_4718592.f_25200[iVar0 /*110*/].f_7, fParam1))
					{
						return 1;
					}
				}
				iVar0++;
			}
		}
		if (Global_4718592.f_4794 > 0)
		{
			iVar0 = 0;
			while (iVar0 < Global_4718592.f_4794)
			{
				if (Global_4718592.f_4797[iVar0 /*280*/].f_15 != 0)
				{
					if (func_102(Param0, Global_4718592.f_4797[iVar0 /*280*/], Global_4718592.f_4797[iVar0 /*280*/].f_3, Global_4718592.f_4797[iVar0 /*280*/].f_15, 0.5f))
					{
						return 1;
					}
				}
				iVar0++;
			}
		}
		if (Global_4718592.f_58904 > 0)
		{
			iVar0 = 0;
			while (iVar0 < Global_4718592.f_58904)
			{
				if (Global_4718592.f_58908[iVar0 /*339*/].f_12 != 0)
				{
					if (func_102(Param0, Global_4718592.f_58908[iVar0 /*339*/], Global_4718592.f_58908[iVar0 /*339*/].f_3, Global_4718592.f_58908[iVar0 /*339*/].f_12, 0.5f))
					{
						return 1;
					}
				}
				iVar0++;
			}
		}
		if (Global_969055.f_268 > 0)
		{
			iVar0 = 0;
			while (iVar0 < Global_969055.f_268)
			{
				if (unk_0xAE06B9E39EBDE049(Global_969055.f_233[iVar0]) && !unk_0xA59F96B50B97E63C(Global_969055.f_233[iVar0], 0))
				{
					if (func_102(Param0, unk_0x3E4D3CCC220BDFB1(Global_969055.f_233[iVar0], 1), unk_0xEF7858F25585F853(Global_969055.f_233[iVar0]), unk_0x36FE6D3220816ADA(Global_969055.f_233[iVar0]), 0.5f))
					{
						return 1;
					}
				}
				iVar0++;
			}
		}
		if (Global_969055.f_266 > 0)
		{
			iVar0 = 0;
			while (iVar0 < Global_969055.f_266)
			{
				if (unk_0xAE06B9E39EBDE049(Global_969055.f_119[iVar0]) && !unk_0xA59F96B50B97E63C(Global_969055.f_119[iVar0], 0))
				{
					if (func_102(Param0, unk_0x3E4D3CCC220BDFB1(Global_969055.f_119[iVar0], 1), unk_0xEF7858F25585F853(Global_969055.f_119[iVar0]), unk_0x36FE6D3220816ADA(Global_969055.f_119[iVar0]), 0.5f))
					{
						return 1;
					}
				}
				iVar0++;
			}
		}
	}
	return 0;
}

Vector3 func_151(struct<3> Param0, float fParam1, int iParam2, bool bParam3, struct<3> Param4, int iParam5, bool bParam6, int iParam7, var uParam8, int iParam9, bool bParam10, bool bParam11)
{
	struct<3> Var0;
	var uVar1;
	var uVar2;
	var uVar3;
	int iVar4;
	int iVar5;
	float fVar6;
	float fVar7;
	bool bVar8;
	bool bVar9;
	float fVar10;
	struct<3> Var11;
	struct<3> Var12;
	struct<3> Var13;
	
	if (bParam11)
	{
		if (vmag(Param4) > 0f)
		{
			if (!func_154(Param0, *fParam1, Param4))
			{
				*fParam1 = (*fParam1 + 180f);
			}
		}
		return Param0;
	}
	unk_0x4645311C71338838(Param0, &uVar1, &uVar2);
	if (uVar2 & 1024 == 0 && !bParam6)
	{
		unk_0x7F270824E67C2031(Param0, 1f, 1, &uVar3, &uVar3, &iVar4, &iVar5, &fVar6, iParam5);
		if (iVar4 == iVar5)
		{
			*uParam8 = 1;
		}
		if (bParam10)
		{
			if (!uVar2 & 128 == 0)
			{
				return 0f, 0f, 0f;
			}
			if (!uVar2 & 256 == 0)
			{
				return 0f, 0f, 0f;
			}
			if (!uVar2 & 512 == 0)
			{
				return 0f, 0f, 0f;
			}
			if ((iVar4 + iVar5) != iParam2)
			{
				return 0f, 0f, 0f;
			}
			if (unk_0x442D6659150AF4B3(iParam7) && func_153(Param0))
			{
				return 0f, 0f, 0f;
			}
		}
		if (iParam9 && *uParam8)
		{
			*fParam1 = (*fParam1 + 180f);
			if (*fParam1 > 360f)
			{
				*fParam1 = (*fParam1 + -360f);
			}
		}
		if (*fParam1 <= 90f || *fParam1 > 270f)
		{
			bVar8 = true;
		}
		else
		{
			bVar8 = false;
		}
		bVar9 = false;
		if (bVar8)
		{
			if (iVar4 == 0)
			{
				if (bParam10)
				{
					return 0f, 0f, 0f;
				}
			}
			else if (iParam2 == iVar4)
			{
				bVar9 = true;
			}
		}
		else if (iVar5 == 0)
		{
			if (bParam10)
			{
				return 0f, 0f, 0f;
			}
		}
		else if (iParam2 == iVar5)
		{
			bVar9 = true;
		}
		if (fVar6 < 0f)
		{
			fVar7 = 0f;
		}
		else
		{
			if (bVar8)
			{
				if (bVar9)
				{
					fVar7 = (4.2f * (to_float(iVar4) * 0.5f));
				}
				else
				{
					fVar7 = (4.2f * to_float(iVar4));
				}
				if (bVar9)
				{
					if (iVar4 > 2)
					{
						fVar7 = (fVar7 + (IntToFloat((iVar4 - 2)) * 1f));
					}
				}
				else if (iVar4 > 1)
				{
					fVar7 = (fVar7 + (IntToFloat((iVar4 - 1)) * 1f));
				}
			}
			else
			{
				if (bVar9)
				{
					fVar7 = (4.2f * (to_float(iVar5) * 0.5f));
				}
				else
				{
					fVar7 = (4.2f * to_float(iVar5));
				}
				if (bVar9)
				{
					if (iVar5 > 2)
					{
						fVar7 = (fVar7 + (IntToFloat((iVar5 - 2)) * 1f));
					}
				}
				else if (iVar5 > 1)
				{
					fVar7 = (fVar7 + (IntToFloat((iVar5 - 1)) * 1f));
				}
			}
			if (!uVar2 & 64 == 0)
			{
				fVar7 = (fVar7 + (0.95f * fVar6));
			}
			if (!uVar2 & 4 == 0 || !uVar2 & 8 == 0)
			{
				fVar7 = (fVar7 + -0.5f);
			}
			if ((!uVar2 & 32 == 0 && uVar2 & 4 == 0) && uVar2 & 8 == 0)
			{
				fVar7 = (fVar7 + -1f);
			}
			if (!bParam3 || !uVar2 & 8 == 0)
			{
				fVar7 = (fVar7 + (4.2f * -0.5f));
			}
			if (!iParam7 == 0)
			{
				if (uVar2 & 8 != 0)
				{
					fVar10 = func_152(iParam7, 3.5f);
				}
				else
				{
					fVar10 = func_152(iParam7, 1.5f);
				}
				if (fVar10 > 1.8f)
				{
					fVar7 = (fVar7 + ((fVar10 - 1.8f) * -0.5f));
				}
			}
		}
	}
	if (vmag(Param4) > 0f)
	{
		if (!func_154(Param0, *fParam1, Param4))
		{
			if (bParam3 || ((uVar2 & 1024 != 0 || Param0.f_2 == 0f) && bParam6))
			{
				*fParam1 = (*fParam1 + 180f);
			}
			else if (bParam10)
			{
				return 0f, 0f, 0f;
			}
		}
	}
	if (fVar7 < 0f)
	{
		fVar7 = 0f;
	}
	Var0 = { unk_0x1BAE5C94E38E44FE(Param0, *fParam1, fVar7, 0f, 0f) };
	if (bParam3)
	{
		if (unk_0xE7E6F3B6B48E7F23(Param0, *fParam1, &Var11))
		{
			Var12 = { Var11 - Param0 };
			if (!iParam7 == 0)
			{
				Var13 = { Var12 / FtoV(vmag(Var12)) };
				if (uVar2 & 8 != 0)
				{
					fVar10 = func_152(iParam7, 3.5f);
				}
				else
				{
					fVar10 = func_152(iParam7, 1.5f);
				}
				Var13 = { Var13 * FtoV((fVar10 * 0.5f)) };
				Var12 = { Var12 - Var13 };
				Var11 = { Param0 + Var12 };
			}
			Var13 = { Var0 - Var11 };
			Var0 = { Var11 };
		}
	}
	return Var0;
}

float func_152(int iParam0, float fParam1)
{
	float fVar0;
	float fVar1;
	float fVar2;
	
	func_104(iParam0, &fVar0, &fVar1, 1086324736, 1080033280, 1077936128);
	fVar2 = (fVar1 - fVar0);
	if (fVar2 < fParam1)
	{
		return fParam1;
	}
	return fVar2;
}

int func_153(struct<3> Param0)
{
	float fVar0;
	
	if (unk_0xE5CC8E2D904E42CE(Param0.x, Param0.f_1, (Param0.f_2 + 500f), &fVar0, 0, 0))
	{
		fVar0 = (fVar0 - Param0.f_2);
		if (fVar0 > 6f)
		{
			return 1;
		}
	}
	return 0;
}

int func_154(struct<3> Param0, float fParam1, struct<3> Param2)
{
	struct<3> Var0;
	struct<3> Var1;
	
	Var0 = { 0f, 1f, 0f };
	func_109(&Var0, 0f, 0f, fParam1);
	Var1 = { Param2 - Param0 };
	if (func_155(Var1, Var0) >= 0f)
	{
		return 1;
	}
	return 0;
}

float func_155(struct<3> Param0, struct<3> Param1)
{
	return (((Param0.x * Param1.x) + (Param0.f_1 * Param1.f_1)) + (Param0.f_2 * Param1.f_2));
}

int func_156(struct<3> Param0)
{
	int iVar0;
	int iVar1;
	
	iVar1 = func_158(Param0);
	iVar0 = 0;
	while (iVar0 < Global_2412187[iVar1])
	{
		if (func_157(Param0, &(Global_2411484[iVar1 /*78*/][iVar0 /*7*/])))
		{
			return 1;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Global_2412187[8])
	{
		if (func_157(Param0, &(Global_2411484[8 /*78*/][iVar0 /*7*/])))
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

bool func_157(struct<3> Param0, var uParam1)
{
	return unk_0x3BC3A4E4A1827EEE(Param0, *uParam1, uParam1->f_3, uParam1->f_6, 0, 1);
}

int func_158(struct<2> Param0, var uParam1)
{
	if (Param0.f_1 > Global_2411475[0])
	{
		return 0;
	}
	if (Param0.f_1 > Global_2411475[1])
	{
		if (Param0 < Global_2411479[0])
		{
			return 1;
		}
		else
		{
			return 2;
		}
	}
	if (Param0.f_1 > Global_2411475[2])
	{
		if (Param0 < Global_2411479[1])
		{
			return 3;
		}
		else if (Param0 < Global_2411479[2])
		{
			return 4;
		}
		else if (Param0 < Global_2411479[3])
		{
			return 5;
		}
		else
		{
			return 6;
		}
	}
	return 7;
}

int func_159(var uParam0, bool bParam1)
{
	var uVar0;
	struct<3> Var1;
	float fVar2;
	
	if (func_165(*uParam0))
	{
		if (bParam1)
		{
			Var1 = { *uParam0 };
			fVar2 = unk_0x658086F2B3C5E4E4(0.01f, 360f);
			func_164(&Var1, Global_2405074.f_588, Global_2405074.f_591, 1036831949, 0, fVar2);
			if (func_160(Var1, &uVar0) || func_165(Var1))
			{
				Var1 = { *uParam0 };
				func_164(&Var1, Global_2405074.f_588, Global_2405074.f_591, 1036831949, 1, fVar2);
			}
			*uParam0 = { Var1 };
		}
	}
	return 0;
}

int func_160(struct<3> Param0, var uParam1)
{
	int iVar0;
	int iVar1;
	
	if (func_163())
	{
		return 0;
	}
	iVar1 = func_162();
	iVar0 = 0;
	while (iVar0 < iVar1)
	{
		if (Global_2405074.f_365[iVar0 /*12*/].f_9 == 1)
		{
			if (func_161(Param0, &(Global_2405074.f_365[iVar0 /*12*/]), 1008981770, 0, 0))
			{
				*uParam1 = iVar0;
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_161(struct<3> Param0, var uParam1, float fParam2, bool bParam3, bool bParam4)
{
	switch (uParam1->f_10)
	{
		case 0:
			return func_149(Param0, *uParam1, ((uParam1->f_6 + fParam2) + (IntToFloat(Global_2405074.f_2728) * uParam1->f_8)), bParam3, bParam4);
			break;
		
		case 1:
			return func_147(Param0, *uParam1 + Vector((fParam2 * -1f), (fParam2 * -1f), (fParam2 * -1f)), uParam1->f_3 + Vector(fParam2, fParam2, fParam2), bParam3, bParam4);
			break;
		
		case 2:
			if (bParam3 && bParam4)
			{
				return unk_0x3BC3A4E4A1827EEE(Param0, *uParam1, uParam1->f_3, uParam1->f_6, 0, 0);
			}
			else if (bParam3)
			{
				if (unk_0x3BC3A4E4A1827EEE(Param0, *uParam1, uParam1->f_3, uParam1->f_6, 0, 0) && !(Param0.f_2 < uParam1->f_2 && Param0.f_2 < uParam1->f_3.f_2))
				{
					return 1;
				}
				else
				{
					return 0;
				}
			}
			else if (bParam4)
			{
				if (unk_0x3BC3A4E4A1827EEE(Param0, *uParam1, uParam1->f_3, uParam1->f_6, 0, 0) && !(Param0.f_2 > uParam1->f_2 && Param0.f_2 > uParam1->f_3.f_2))
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
				return unk_0x3BC3A4E4A1827EEE(Param0, *uParam1, uParam1->f_3, uParam1->f_6, 0, 1);
			}
			break;
	}
	return 0;
}

int func_162()
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (Global_2405074.f_365[iVar0 /*12*/].f_9)
		{
			iVar1++;
		}
		iVar0++;
	}
	return iVar1;
}

bool func_163()
{
	return Global_1678288.f_482;
}

void func_164(var uParam0, struct<3> Param1, float fParam2, float fParam3, bool bParam4, float fParam5)
{
	struct<3> Var0;
	struct<3> Var1;
	
	Var0 = { *uParam0 - Param1 };
	Var0.f_2 = 0f;
	if (vmag(Var0) > 0f)
	{
		Var0 = { Var0 / FtoV(vmag(Var0)) };
	}
	else
	{
		Var0 = { 0f, 1f, 0f };
		if (fParam5 == 0f)
		{
			func_109(&Var0, 0f, 0f, unk_0x658086F2B3C5E4E4(0f, 360f));
		}
		else
		{
			func_109(&Var0, 0f, 0f, fParam5);
		}
	}
	Var0 = { Var0 * FtoV((fParam2 + fParam3)) };
	if (!bParam4)
	{
		Var1 = { Param1 + Var0 };
	}
	else
	{
		Var1 = { Param1 - Var0 };
	}
	*uParam0 = Var1.x;
	uParam0->f_1 = Var1.f_1;
}

int func_165(struct<3> Param0)
{
	float fVar0;
	
	if (Global_2405074.f_591 > 0f)
	{
		fVar0 = vdist(Param0, Global_2405074.f_588);
		if (fVar0 < Global_2405074.f_591)
		{
			return 1;
		}
	}
	return 0;
}

bool func_166(var uParam0, bool bParam1)
{
	bool bVar0;
	
	bVar0 = false;
	if (Global_2405074.f_26.f_18)
	{
		switch (Global_2405074.f_26.f_17)
		{
			case 0:
				if (func_149(*uParam0, Global_2405074.f_26.f_10, Global_2405074.f_26.f_16, 0, 0))
				{
					bVar0 = true;
				}
				break;
			
			case 1:
				if (func_147(*uParam0, Global_2405074.f_26.f_10, Global_2405074.f_26.f_13, 0, 0))
				{
					bVar0 = true;
				}
				break;
			
			case 2:
				if (unk_0x3BC3A4E4A1827EEE(*uParam0, Global_2405074.f_26.f_10, Global_2405074.f_26.f_13, Global_2405074.f_26.f_16, 0, 1))
				{
					bVar0 = true;
				}
				break;
		}
		if (bVar0)
		{
			if (bParam1)
			{
				*uParam0 = { func_167(*uParam0, Global_2405074.f_26.f_10, Global_2405074.f_26.f_13, Global_2405074.f_26.f_16, Global_2405074.f_26.f_17, 1036831949, 0) };
			}
		}
	}
	return bVar0;
}

Vector3 func_167(struct<3> Param0, struct<3> Param1, struct<3> Param2, float fParam3, int iParam4, float fParam5, bool bParam6)
{
	int iVar0;
	struct<3> Var1;
	
	switch (iParam4)
	{
		case 0:
			func_164(&Param0, Param1, fParam3, fParam5, bParam6, 0);
			break;
		
		case 1:
			func_170(&Param0, Param1, Param2, fParam5, bParam6);
			break;
		
		case 2:
			func_168(&Param0, Param1, Param2, fParam3, fParam5, bParam6);
			break;
	}
	iVar0 = 0;
	while (iVar0 < 40)
	{
		unk_0x204D69DA02AB1105(Param0, iVar0 * 5, &Var1, 1, 0f, 0f);
		switch (iParam4)
		{
			case 0:
				if (!func_149(Var1, Param1, fParam3, 0, 0))
				{
					return Var1;
				}
				break;
			
			case 1:
				if (!func_147(Var1, Param1, Param2, 0, 0))
				{
					return Var1;
				}
				break;
			
			case 2:
				if (!unk_0x3BC3A4E4A1827EEE(Var1, Param1, Param2, fParam3, 0, 1))
				{
					return Var1;
				}
				break;
		}
		iVar0++;
	}
	return Param0;
}

void func_168(var uParam0, struct<3> Param1, struct<3> Param2, float fParam3, float fParam4, bool bParam5)
{
	struct<3> Var0;
	struct<3> Var1;
	struct<3> Var2;
	float fVar3;
	struct<3> Var4;
	struct<3> Var5;
	float fVar6;
	struct<3> Var7;
	struct<3> Var8;
	struct<3> Var9;
	struct<3> Var10;
	struct<3> Var11;
	
	Var0 = { Param2 - Param1 };
	Var0.f_2 = 0f;
	Var1 = { *uParam0 - Param1 };
	Var1.f_2 = 0f;
	Var2 = { func_169(0f, 0f, 1f, Var0) };
	Var2 = { Var2 / FtoV(vmag(Var2)) };
	fVar3 = (vmag(Var1) * sin(unk_0xED4B54A984E6E361(Var0.x, Var0.f_1, Var1.x, Var1.f_1)));
	if (fVar3 < (fParam3 * 0.5f))
	{
		if (!bParam5)
		{
			if (func_155(Var2, Var1) >= 0f)
			{
				Var2 = { Var2 * FtoV((((fParam3 * 0.5f) - fVar3) + fParam4)) };
			}
			else
			{
				Var2 = { Var2 * FtoV(((((fParam3 * 0.5f) - fVar3) + fParam4) * -1f)) };
			}
		}
		else if (func_155(Var2, Var1) >= 0f)
		{
			Var2 = { Var2 * FtoV(((((fParam3 * 0.5f) + fVar3) + fParam4) * -1f)) };
		}
		else
		{
			Var2 = { Var2 * FtoV((((fParam3 * 0.5f) + fVar3) + fParam4)) };
		}
		Var4 = { *uParam0 + Var2 };
		fVar6 = vdist(Param1.x, Param1.f_1, 0f, Param2.x, Param2.f_1, 0f);
		Var7 = { Param1 + Param2 / Vector(2f, 2f, 2f) };
		Var7.f_2 = 0f;
		Var2 = { func_169(0f, 0f, 1f, Var0) };
		Var2 = { Var2 / FtoV(vmag(Var2)) };
		Var2 = { Var2 * FtoV((fParam3 * 0.5f)) };
		Var8 = { Var7 - Var2 };
		Var9 = { Var7 + Var2 };
		Var10 = { Var9 - Var8 };
		Var10.f_2 = 0f;
		Var11 = { *uParam0 - Var8 };
		Var11.f_2 = 0f;
		Var2 = { func_169(0f, 0f, 1f, Var10) };
		Var2 = { Var2 / FtoV(vmag(Var2)) };
		fVar3 = (vmag(Var11) * sin(unk_0xED4B54A984E6E361(Var10.x, Var10.f_1, Var11.x, Var11.f_1)));
		if (!bParam5)
		{
			if (func_155(Var2, Var11) >= 0f)
			{
				Var2 = { Var2 * FtoV((((fVar6 * 0.5f) - fVar3) + fParam4)) };
			}
			else
			{
				Var2 = { Var2 * FtoV(((((fVar6 * 0.5f) - fVar3) + fParam4) * -1f)) };
			}
		}
		else if (func_155(Var2, Var11) >= 0f)
		{
			Var2 = { Var2 * FtoV(((((fVar6 * 0.5f) + fVar3) + fParam4) * -1f)) };
		}
		else
		{
			Var2 = { Var2 * FtoV((((fVar6 * 0.5f) + fVar3) + fParam4)) };
		}
		Var5 = { *uParam0 + Var2 };
		if (vdist(Var4, *uParam0, uParam0->f_1, 0f) < vdist(Var5, *uParam0, uParam0->f_1, 0f))
		{
			*uParam0 = { Var4 };
		}
		else
		{
			*uParam0 = { Var5 };
		}
	}
}

Vector3 func_169(struct<3> Param0, struct<3> Param1)
{
	return ((Param0.f_1 * Param1.f_2) - (Param0.f_2 * Param1.f_1)), ((Param0.f_2 * Param1.x) - (Param0.x * Param1.f_2)), ((Param0.x * Param1.f_1) - (Param0.f_1 * Param1.x));
}

void func_170(var uParam0, struct<2> Param1, var uParam2, struct<2> Param3, var uParam4, float fParam5, bool bParam6)
{
	struct<3> Var0;
	float fVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	
	Var0 = { *uParam0 };
	fVar1 = (*uParam0 - Param1);
	fVar2 = (*uParam0 - Param3);
	if (fVar1 < fVar2)
	{
		fVar3 = fVar1;
	}
	else
	{
		fVar3 = fVar2;
	}
	fVar4 = (uParam0->f_1 - Param1.f_1);
	fVar5 = (uParam0->f_1 - Param3.f_1);
	if (fVar4 < fVar5)
	{
		fVar6 = fVar4;
	}
	else
	{
		fVar6 = fVar5;
	}
	Var0 = { *uParam0 };
	if (!bParam6)
	{
		if (fVar3 < fVar6)
		{
			if (fVar1 < fVar2)
			{
				Var0.x = (Param1 - fParam5);
			}
			else
			{
				Var0.x = (Param3 + fParam5);
			}
		}
		else if (fVar4 < fVar5)
		{
			Var0.f_1 = (Param1.f_1 - fParam5);
		}
		else
		{
			Var0.f_1 = (Param3.f_1 + fParam5);
		}
	}
	else if (fVar3 < fVar6)
	{
		if (fVar1 < fVar2)
		{
			Var0.x = (Param3 + fParam5);
		}
		else
		{
			Var0.x = (Param1 - fParam5);
		}
	}
	else if (fVar4 < fVar5)
	{
		Var0.f_1 = (Param3.f_1 + fParam5);
	}
	else
	{
		Var0.f_1 = (Param1.f_1 - fParam5);
	}
	*uParam0 = { Var0 };
}

int func_171(struct<3> Param0, var uParam1, var uParam2, var uParam3, bool bParam4, bool bParam5)
{
	int iVar0;
	bool bVar1;
	
	if (func_225(Param0))
	{
		if (func_174(uParam1, bParam4, 0, 1, 1))
		{
			if (bParam4)
			{
			}
			return 1;
		}
	}
	if (func_172(uParam1, bParam4, 1))
	{
		if (bParam4)
		{
		}
		return 1;
	}
	if (bParam5)
	{
		if (func_122(*uParam1, 1056964608))
		{
			return 1;
		}
	}
	bVar1 = false;
	iVar0 = 0;
	while (iVar0 < *uParam2)
	{
		if (vdist(*uParam1, *(uParam2[iVar0 /*3*/])) < (*uParam3)[iVar0])
		{
			if (bParam4)
			{
				func_164(uParam1, *(uParam2[iVar0 /*3*/]), (*uParam3)[iVar0], 1036831949, 0, 0);
			}
			bVar1 = true;
		}
		iVar0++;
	}
	if (bVar1)
	{
		return 1;
	}
	return 0;
}

int func_172(var uParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	var uVar1;
	struct<3> Var2;
	
	if (func_160(*uParam0, &iVar0))
	{
		if (bParam1)
		{
			Var2 = { *uParam0 };
			func_173(&Var2, &(Global_2405074.f_365[iVar0 /*12*/]), 1036831949, 0, bParam2);
			if (func_160(Var2, &uVar1) || func_165(Var2))
			{
				Var2 = { *uParam0 };
				func_173(&Var2, &(Global_2405074.f_365[iVar0 /*12*/]), 1036831949, 1, bParam2);
			}
			*uParam0 = { Var2 };
		}
		return 1;
	}
	return 0;
}

void func_173(var uParam0, var uParam1, float fParam2, bool bParam3, bool bParam4)
{
	if (bParam4)
	{
		switch (uParam1->f_10)
		{
			case 0:
				*uParam0 = { func_167(*uParam0, *uParam1, 0f, 0f, 0f, (uParam1->f_6 + (IntToFloat(Global_2405074.f_2728) * uParam1->f_8)), 0, fParam2, bParam3) };
				break;
			
			case 1:
				*uParam0 = { func_167(*uParam0, *uParam1, uParam1->f_3, 0f, 1, fParam2, bParam3) };
				break;
			
			case 2:
				*uParam0 = { func_167(*uParam0, *uParam1, uParam1->f_3, uParam1->f_6, 2, fParam2, bParam3) };
				break;
		}
	}
	else
	{
		switch (uParam1->f_10)
		{
			case 0:
				func_164(uParam0, *uParam1, (uParam1->f_6 + (IntToFloat(Global_2405074.f_2728) * uParam1->f_8)), fParam2, bParam3, 0);
				break;
			
			case 1:
				func_170(uParam0, *uParam1, uParam1->f_3, fParam2, bParam3);
				break;
			
			case 2:
				func_168(uParam0, *uParam1, uParam1->f_3, uParam1->f_6, fParam2, bParam3);
				break;
			}
	}
}

int func_174(var uParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	struct<3> Var1;
	
	iVar0 = 0;
	while (iVar0 < 12)
	{
		if (Global_2409990[iVar0 /*17*/].f_9 == 1)
		{
			if (!bParam2 || (bParam2 && Global_2409990[iVar0 /*17*/].f_16))
			{
				if (func_161(*uParam0, &(Global_2409990[iVar0 /*17*/]), 1008981770, bParam4, 0))
				{
					if (bParam1)
					{
						if (Global_2409990[iVar0 /*17*/].f_12)
						{
							*uParam0 = { Global_2409990[iVar0 /*17*/].f_13 };
						}
						else
						{
							Var1 = { *uParam0 };
							func_173(&Var1, &(Global_2409990[iVar0 /*17*/]), 1036831949, 0, bParam3);
							if (func_174(&Var1, 0, 0, 0, 1))
							{
								Var1 = { *uParam0 };
								func_173(&Var1, &(Global_2409990[iVar0 /*17*/]), 1036831949, 1, 0);
							}
							*uParam0 = { Var1 };
						}
					}
					return 1;
				}
			}
		}
		iVar0++;
	}
	return 0;
}

int func_175(var uParam0, var uParam1, var uParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<3> Var3;
	float fVar4;
	int iVar5;
	int iVar6;
	bool bVar7;
	int iVar8;
	float fVar9;
	bool bVar10;
	int iVar11;
	float fVar12;
	struct<3> Var13;
	var uVar14;
	
	if (Global_2405074.f_1748 > 0)
	{
		iVar1 = 0;
		iVar2 = 0;
		if (!vmag(uParam2->f_35) > 0f)
		{
			uParam2->f_35 = { *uParam0 };
		}
		if (uParam2->f_15)
		{
			if (func_171(uParam2->f_35, uParam0, &(uParam2->f_38), &(uParam2->f_45), 1, 1))
			{
				uParam2->f_6 = 9999.9f;
				uParam2->f_7 = 9999.9f;
			}
		}
		if (uParam2->f_48)
		{
			if (func_166(uParam0, 1))
			{
				uParam2->f_6 = 9999.9f;
				uParam2->f_7 = 9999.9f;
			}
		}
		if (uParam0->f_2 < -80f)
		{
			uParam2->f_6 = 9999.9f;
			uParam2->f_7 = 9999.9f;
		}
		Global_2412480.f_162 = 0;
		Global_2412480.f_163 = 0;
		iVar5 = 0;
		while (iVar5 < 40)
		{
			Global_2412480[iVar5 /*3*/] = { 0f, 0f, 0f };
			Global_2412480.f_121[iVar5] = 0f;
			iVar5++;
		}
		if (uParam2->f_30)
		{
			func_178(*uParam0);
		}
		else if (uParam2->f_29)
		{
			func_177();
		}
		else
		{
			func_176();
		}
		iVar1 = 0;
		while (iVar1 < Global_2405074.f_1748)
		{
			iVar2 = Global_2405074.f_2154[iVar1];
			if (iVar2 > -1 && iVar2 < 101)
			{
				Var3 = { Global_2405074.f_1749[iVar2 /*4*/] };
				fVar4 = Global_2405074.f_1749[iVar2 /*4*/].f_3;
				if (vmag(Var3) > 0f)
				{
					if ((uParam2->f_57 && vdist(Var3, uParam2->f_35) > uParam2->f_4) || uParam2->f_57 == 0)
					{
						if ((uParam2->f_5 > 0f && vdist(Var3.x, Var3.f_1, 0f, uParam2->f_35, uParam2->f_35.f_1, 0f) < uParam2->f_5) || uParam2->f_5 <= 0f)
						{
							if ((uParam2->f_12 && !func_145(Var3, fVar4, uParam2->f_34, unk_0x460153A63B9477BC(), 0, uParam2->f_56)) || !uParam2->f_12)
							{
								if (!uParam2->f_15 || !func_171(uParam2->f_35, &Var3, &(uParam2->f_38), &(uParam2->f_45), 0, 1))
								{
									if (uParam2->f_8)
									{
										iVar6 = uParam2->f_31;
										bVar7 = true;
										iVar8 = 1;
										fVar9 = uParam2->f_49;
										if (!uParam2->f_55)
										{
											iVar6 = 0;
											bVar7 = false;
											iVar8 = 0;
											fVar9 = 1f;
										}
										else if (uParam2->f_17)
										{
											iVar6 = 0;
											bVar7 = false;
											iVar8 = 0;
											if (uParam2->f_33 == 1)
											{
												fVar9 = (fVar9 * 0.375f);
											}
										}
										else
										{
											bVar7 = true;
											iVar8 = 1;
											if (uParam2->f_28)
											{
												if (uParam2->f_33 == 1)
												{
													fVar9 = (fVar9 * 0.375f);
												}
											}
										}
										bVar10 = false;
										if (!func_144(Var3, fVar4, uParam2->f_34))
										{
											if (uParam2->f_3 > 7f)
											{
												if (func_182(Var3, 6f, 1f, 1f, 5f, iVar6, bVar7, iVar8, fVar9, uParam2->f_58, -1, 1, uParam2->f_3, 0, 0, 0, 0))
												{
													bVar10 = true;
												}
											}
											else if (func_182(Var3, 6f, 1f, 1f, 5f, iVar6, bVar7, iVar8, fVar9, uParam2->f_58, -1, 1, 0f, 0, 0, 0, 0) && !func_101(Var3, fVar4, uParam2->f_34, 1, 1, 0, 0, uParam2->f_58, 0))
											{
												bVar10 = true;
											}
										}
										if (bVar10)
										{
											if ((uParam2->f_29 || uParam2->f_30) || uParam2->f_52)
											{
												fVar12 = 0f;
												if (uParam2->f_52)
												{
													iVar11 = func_136(Var3, uParam2->f_54, &fVar12);
												}
												if (!uParam2->f_52 || (uParam2->f_52 && iVar11 <= uParam2->f_53))
												{
													if (uParam2->f_52)
													{
														if (iVar11 < uParam2->f_53)
														{
															iVar5 = 0;
															while (iVar5 < Global_2412480.f_162)
															{
																Global_2412480[iVar5 /*3*/] = { 0f, 0f, 0f };
																Global_2412480.f_121[iVar5] = 0f;
																iVar5++;
															}
															Global_2412480.f_162 = 0;
															uParam2->f_53 = iVar11;
														}
													}
													if (uParam2->f_30)
													{
														if (Global_2412480.f_162 == 0)
														{
															Global_2412480[0 /*3*/] = { Var3 };
															Global_2412480.f_121[0] = fVar4;
														}
														else
														{
															iVar5 = 0;
															while (iVar5 < Global_2412480.f_162 + 1)
															{
																if (iVar5 < 40)
																{
																	if (vdist2(Var3, uParam2->f_35) < vdist2(Global_2412480[iVar5 /*3*/], uParam2->f_35))
																	{
																		func_135(Var3, fVar4, iVar5);
																		iVar5 = Global_2412480.f_162 + 1;
																	}
																}
																iVar5++;
															}
														}
														Global_2412480.f_162++;
														if (Global_2412480.f_162 >= 5)
														{
															if ((uParam2->f_52 && uParam2->f_53 == 0) || uParam2->f_52 == 0)
															{
																iVar1 = Global_2405074.f_1748;
															}
															else if (Global_2412480.f_162 == 40)
															{
																iVar1 = Global_2405074.f_1748;
															}
														}
													}
													else
													{
														Global_2412480[Global_2412480.f_162 /*3*/] = { Var3 };
														Global_2412480.f_121[Global_2412480.f_162] = fVar4;
														Global_2412480.f_162++;
														if (Global_2412480.f_162 >= 10)
														{
															if ((uParam2->f_52 && uParam2->f_53 == 0) || uParam2->f_52 == 0)
															{
																iVar1 = Global_2405074.f_1748;
															}
															else if (Global_2412480.f_162 == 40)
															{
																iVar1 = Global_2405074.f_1748;
															}
														}
													}
												}
											}
											else
											{
												*uParam0 = { Var3 };
												*uParam1 = fVar4;
												return 1;
											}
										}
									}
									else
									{
										*uParam0 = { Var3 };
										*uParam1 = fVar4;
										return 1;
									}
								}
							}
						}
					}
				}
			}
			iVar1++;
		}
		if (Global_2412480.f_162 > 0)
		{
			if (uParam2->f_30)
			{
				*uParam0 = { Global_2412480[0 /*3*/] };
				*uParam1 = Global_2412480.f_121[0];
				return 1;
			}
			else
			{
				if (Global_2412480.f_163 > 0 && !Global_2412480.f_163 == Global_2412480.f_162)
				{
					func_133(0, uParam2);
				}
				iVar0 = unk_0x344C570D6F8700DF(0, Global_2412480.f_162);
				Var13 = { Global_2412480[0 /*3*/] };
				uVar14 = Global_2412480.f_121[0];
				Global_2412480[0 /*3*/] = { Global_2412480[iVar0 /*3*/] };
				Global_2412480.f_121[0] = Global_2412480.f_121[iVar0];
				Global_2412480[iVar0 /*3*/] = { Var13 };
				Global_2412480.f_121[iVar0] = uVar14;
				*uParam0 = { Global_2412480[0 /*3*/] };
				*uParam1 = Global_2412480.f_121[0];
				return 1;
			}
		}
		else
		{
			uParam2->f_33++;
			if (uParam2->f_33 < 2)
			{
				return 0;
			}
			else if (uParam2->f_59 && Global_2405074.f_1748 > 0)
			{
				iVar0 = unk_0x344C570D6F8700DF(0, Global_2405074.f_1748);
				*uParam0 = { Global_2405074.f_1749[iVar0 /*4*/] };
				*uParam1 = Global_2405074.f_1749[iVar0 /*4*/].f_3;
				return 1;
			}
			else
			{
				return 0;
			}
		}
	}
	return 0;
}

void func_176()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < Global_2405074.f_1748)
	{
		Global_2405074.f_2154[iVar0] = iVar0;
		iVar0++;
	}
}

void func_177()
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	
	iVar0 = 0;
	while (iVar0 < Global_2405074.f_1748)
	{
		Global_2405074.f_2154[iVar0] = iVar0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Global_2405074.f_1748)
	{
		iVar1 = unk_0x344C570D6F8700DF(0, Global_2405074.f_1748);
		iVar2 = unk_0x344C570D6F8700DF(0, Global_2405074.f_1748);
		uVar3 = Global_2405074.f_2154[iVar1];
		Global_2405074.f_2154[iVar1] = Global_2405074.f_2154[iVar2];
		Global_2405074.f_2154[iVar2] = uVar3;
		iVar0++;
	}
}

void func_178(struct<3> Param0)
{
	float fVar0;
	var uVar1;
	int iVar2;
	
	fVar0 = -1f;
	while (iVar2 < Global_2405074.f_1748)
	{
		uVar1 = func_179(Param0, fVar0, &fVar0);
		Global_2405074.f_2154[iVar2] = uVar1;
		iVar2++;
	}
}

int func_179(struct<3> Param0, float fParam1, float fParam2)
{
	int iVar0;
	float fVar1;
	float fVar2;
	int iVar3;
	
	iVar0 = -1;
	fVar1 = 1E+08f;
	iVar3 = 0;
	while (iVar3 < Global_2405074.f_1748)
	{
		fVar2 = vdist2(Param0, Global_2405074.f_1749[iVar3 /*4*/]);
		if (fVar2 < fVar1 && fVar2 > fParam1)
		{
			iVar0 = iVar3;
			fVar1 = fVar2;
		}
		iVar3++;
	}
	*fParam2 = fVar1;
	return iVar0;
}

int func_180(struct<3> Param0, float fParam1, int iParam2, int iParam3, int iParam4)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (!iParam3 == iVar0 || iParam4 == 1)
		{
			iVar2 = iVar0;
			iVar1 = 0;
			while (iVar1 < 2)
			{
				if (func_181(Param0, iParam2, Global_2417956.f_461[iVar0 /*11*/][iVar1 /*5*/], Global_2417956.f_461[iVar0 /*11*/][iVar1 /*5*/].f_4))
				{
					if (func_112(Param0, fParam1, iParam2, Global_2417956.f_461[iVar0 /*11*/][iVar1 /*5*/], Global_2417956.f_461[iVar0 /*11*/][iVar1 /*5*/].f_3, Global_2417956.f_461[iVar0 /*11*/][iVar1 /*5*/].f_4, 0))
					{
						if (func_313(iVar2, 0, 1) && func_313(iParam3, 0, 1))
						{
							return 1;
						}
						else
						{
							return 1;
						}
					}
				}
				iVar1++;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_181(struct<3> Param0, int iParam1, struct<3> Param2, int iParam3)
{
	float fVar0;
	float fVar1;
	float fVar2;
	
	fVar0 = func_110(iParam1, 1008981770);
	fVar1 = func_110(iParam3, 1008981770);
	fVar2 = vdist(Param0, Param2);
	if (fVar2 < (fVar0 + fVar1))
	{
		return 1;
	}
	return 0;
}

int func_182(struct<3> Param0, float fParam1, float fParam2, float fParam3, float fParam4, int iParam5, bool bParam6, int iParam7, float fParam8, bool bParam9, int iParam10, bool bParam11, float fParam12, bool bParam13, float fParam14, bool bParam15, int iParam16)
{
	Global_2405074.f_2 = 0;
	if (fParam1 > 0f)
	{
		if (unk_0x160FF3CA76647557(Param0, fParam1))
		{
			return 0;
		}
	}
	if (fParam2 > 0f)
	{
		if (unk_0x11C93463B5150761(Param0.x, Param0.f_1, (Param0.f_2 + 1f), fParam2) || unk_0x11C93463B5150761(Param0, fParam2))
		{
			return 0;
		}
	}
	if (fParam3 > 0f)
	{
		if (unk_0xF666C0F9CA439368(Param0, fParam3, iParam16))
		{
			return 0;
		}
	}
	Global_2405074.f_2++;
	if (bParam11)
	{
		if (unk_0x7B4B68137DA4DF12(Param0, 2.5f) > 0)
		{
			return 0;
		}
	}
	Global_2405074.f_2++;
	if (fParam12 > 0f)
	{
		if (func_187(Param0, fParam12, 1, 1, bParam13, bParam15, bParam9, bParam13))
		{
			return 0;
		}
	}
	Global_2405074.f_2++;
	if (bParam6)
	{
		if (fParam4 > 0f)
		{
			if (func_183(Param0, fParam4, iParam5, iParam7, fParam8, bParam9, iParam10, fParam14, bParam15))
			{
				return 0;
			}
		}
	}
	Global_2405074.f_2++;
	return 1;
}

int func_183(struct<3> Param0, float fParam1, int iParam2, int iParam3, float fParam4, bool bParam5, int iParam6, float fParam7, bool bParam8)
{
	int iVar0;
	int iVar1;
	float fVar2;
	
	if (iParam2 && !bParam5)
	{
		if (func_313(unk_0x460153A63B9477BC(), 1, 1))
		{
			if (!unk_0x03DB5C6AABF8DA46())
			{
				fVar2 = fParam4;
				if (fParam7 > 0f)
				{
					fVar2 = fParam7;
				}
				if (unk_0x272784C60C397DB6(func_184(unk_0x460153A63B9477BC()), Param0, 1) <= (fVar2 + fParam1))
				{
					if (unk_0x9A70B1BD2A5BA09C(Param0, fParam1))
					{
						return 1;
					}
				}
			}
		}
	}
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar1 = iVar0;
		if (func_313(iVar1, 1, 1))
		{
			if (!func_30(iVar1, 0) && unk_0x56B60AE958412839(unk_0x460153A63B9477BC(), iVar1))
			{
				if (iParam2 == 1 || (iParam2 == 0 && iVar1 != unk_0x460153A63B9477BC()))
				{
					if ((func_118(iVar1) || !bParam8) && !Global_2425869[iVar1 /*443*/].f_263)
					{
						fVar2 = fParam4;
						if (fParam7 > 0f)
						{
							if (!unk_0x6CC163E30ECE0790(iVar1) == -1)
							{
								if (unk_0x6CC163E30ECE0790(iVar1) == unk_0x6CC163E30ECE0790(unk_0x460153A63B9477BC()))
								{
									fVar2 = fParam7;
								}
							}
						}
						if (!bParam5)
						{
							if ((iParam3 || (iParam3 == 0 && unk_0x6CC163E30ECE0790(iVar1) != unk_0x6CC163E30ECE0790(unk_0x460153A63B9477BC()))) || unk_0x6CC163E30ECE0790(iVar1) == -1)
							{
								if (unk_0x272784C60C397DB6(func_184(iVar1), Param0, 1) <= (fVar2 + fParam1))
								{
									if (unk_0xC3BA5B8F1CF9CD22(iVar1, Param0, fParam1))
									{
										return 1;
									}
								}
							}
						}
						else if (unk_0x6CC163E30ECE0790(iVar1) != iParam6 || unk_0x6CC163E30ECE0790(iVar1) == -1)
						{
							if (unk_0x272784C60C397DB6(func_184(iVar1), Param0, 1) <= (fVar2 + fParam1))
							{
								if (unk_0xC3BA5B8F1CF9CD22(iVar1, Param0, fParam1))
								{
									return 1;
								}
							}
						}
					}
				}
			}
		}
		iVar0++;
	}
	return 0;
}

Vector3 func_184(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if ((func_186() && Global_1590682[iVar0 /*883*/].f_854) && !func_185(Global_1590682[iVar0 /*883*/].f_855))
	{
		return Global_1590682[iVar0 /*883*/].f_855;
	}
	return func_111(iParam0);
}

int func_185(struct<3> Param0)
{
	if ((Param0.x == 0f && Param0.f_1 == 0f) && Param0.f_2 == 0f)
	{
		return 1;
	}
	return 0;
}

var func_186()
{
	return Global_2451787.f_18;
}

int func_187(struct<3> Param0, float fParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, int iParam6, var uParam7)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar1 = iVar0;
		if ((iParam6 == 1 && unk_0x460153A63B9477BC() != iVar1) || iParam6 == 0)
		{
			if (func_313(iVar1, bParam2, bParam3))
			{
				if (unk_0x56B60AE958412839(unk_0x460153A63B9477BC(), iVar1))
				{
					if (!bParam5 || (!unk_0x5AEB5DDFFAD43CA5(unk_0x1FA7B77001D60F9D(iVar1)) && func_118(iVar1)))
					{
						if ((!bParam4 || (bParam4 == 1 && unk_0x6CC163E30ECE0790(unk_0x460153A63B9477BC()) != unk_0x6CC163E30ECE0790(iVar1))) || unk_0x6CC163E30ECE0790(unk_0x460153A63B9477BC()) == -1)
						{
							if (((unk_0x6CC163E30ECE0790(unk_0x460153A63B9477BC()) == -1 && uParam7) && bParam4) && func_113(iVar1))
							{
							}
							else if (unk_0xAE06B9E39EBDE049(unk_0x1FA7B77001D60F9D(iVar1)))
							{
								if (unk_0x272784C60C397DB6(func_111(iVar1), Param0, 1) < fParam1)
								{
									return 1;
								}
							}
						}
					}
				}
			}
		}
		iVar0++;
	}
	return 0;
}

int func_188(struct<3> Param0)
{
	var uVar0;
	
	if (Global_2540384.f_921 && func_189(Param0, &uVar0))
	{
		return 1;
	}
	return 0;
}

int func_189(struct<3> Param0, var uParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	*uParam1 = -1;
	iVar2 = func_202(Param0, 0);
	if (!iVar2 == -1)
	{
		iVar0 = 83;
		while (iVar0 <= 87)
		{
			iVar1 = iVar0;
			if (func_190(iVar1))
			{
				if (func_202(Global_1678288.f_496[iVar0 /*3*/], 0) == iVar2)
				{
					*uParam1 = iVar0 + 1000;
					return 1;
				}
			}
			iVar0++;
		}
	}
	return 0;
}

int func_190(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_201(iParam0);
	if (Global_1590682[unk_0x460153A63B9477BC() /*883*/].f_274.f_264 == iVar0)
	{
		return 1;
	}
	iVar1 = Global_1630317[unk_0x460153A63B9477BC() /*595*/].f_11;
	if (iVar1 != func_89())
	{
		if (Global_1590682[iVar1 /*883*/].f_274.f_264 == iVar0)
		{
			return 1;
		}
	}
	if (Global_2425869[unk_0x460153A63B9477BC() /*443*/].f_314.f_6 == iParam0)
	{
		return 1;
	}
	if (func_200(unk_0x460153A63B9477BC(), 0) || (func_197(unk_0x460153A63B9477BC()) && func_195(func_196(unk_0x460153A63B9477BC())) == 12))
	{
		return 1;
	}
	if (func_194(unk_0x460153A63B9477BC()) || (func_197(unk_0x460153A63B9477BC()) && func_195(func_196(unk_0x460153A63B9477BC())) == 8))
	{
		return 1;
	}
	if (func_193(unk_0x460153A63B9477BC()) || (func_197(unk_0x460153A63B9477BC()) && func_195(func_196(unk_0x460153A63B9477BC())) == 5))
	{
		return 1;
	}
	if (func_192(unk_0x460153A63B9477BC()) || (func_197(unk_0x460153A63B9477BC()) && func_195(func_196(unk_0x460153A63B9477BC())) == 10))
	{
		return 1;
	}
	if (func_191(unk_0x460153A63B9477BC()) || (func_197(unk_0x460153A63B9477BC()) && func_195(func_196(unk_0x460153A63B9477BC())) == 6))
	{
		return 1;
	}
	return 0;
}

int func_191(int iParam0)
{
	if (iParam0 != func_89())
	{
		if (func_313(iParam0, 1, 1))
		{
			if (Global_2425869[iParam0 /*443*/].f_314.f_6 != -1)
			{
				return func_195(Global_2425869[iParam0 /*443*/].f_314.f_6) == 6;
			}
		}
	}
	return 0;
}

int func_192(int iParam0)
{
	if (iParam0 != func_89())
	{
		if (func_313(iParam0, 1, 1))
		{
			if (Global_2425869[iParam0 /*443*/].f_314.f_6 != -1)
			{
				return func_195(Global_2425869[iParam0 /*443*/].f_314.f_6) == 10;
			}
		}
	}
	return 0;
}

int func_193(int iParam0)
{
	if (iParam0 != func_89())
	{
		if (func_313(iParam0, 1, 1))
		{
			if (Global_2425869[iParam0 /*443*/].f_314.f_6 != -1 && Global_2425869[iParam0 /*443*/].f_314.f_9 != func_89())
			{
				return func_195(Global_2425869[iParam0 /*443*/].f_314.f_6) == 5;
			}
		}
	}
	return 0;
}

int func_194(int iParam0)
{
	if (iParam0 != func_89())
	{
		if (func_313(iParam0, 1, 1))
		{
			if (Global_2425869[iParam0 /*443*/].f_314.f_6 != -1 && Global_2425869[iParam0 /*443*/].f_314.f_9 != func_89())
			{
				return func_195(Global_2425869[iParam0 /*443*/].f_314.f_6) == 8;
			}
		}
	}
	return 0;
}

int func_195(int iParam0)
{
	switch (iParam0)
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
		case 5:
		case 6:
		case 7:
		case 8:
		case 9:
		case 10:
		case 11:
		case 12:
		case 13:
		case 14:
		case 15:
		case 16:
		case 17:
		case 18:
		case 19:
		case 20:
		case 21:
			return 0;
			break;
		
		case 60:
		case 61:
		case 62:
		case 63:
		case 64:
		case 65:
		case 66:
		case 67:
		case 68:
		case 69:
			return 1;
			break;
		
		case 22:
		case 23:
		case 24:
		case 25:
		case 26:
		case 27:
		case 28:
		case 29:
		case 30:
		case 31:
		case 32:
		case 33:
		case 34:
		case 35:
		case 36:
		case 37:
		case 38:
		case 39:
		case 40:
		case 41:
			return 2;
			break;
		
		case 43:
		case 42:
		case 44:
		case 45:
		case 46:
		case 47:
		case 48:
		case 49:
		case 50:
		case 51:
		case 52:
		case 53:
		case 54:
		case 55:
		case 56:
		case 57:
		case 58:
		case 59:
		case 98:
		case 99:
		case 100:
		case 112:
		case 113:
		case 114:
		case 115:
		case 119:
		case 116:
		case 118:
		case 120:
		case 121:
		case 126:
		case 127:
		case 134:
		case 135:
		case 136:
		case 137:
		case 138:
		case 139:
		case 140:
		case 141:
		case 142:
		case 143:
		case 144:
			return 3;
			break;
		
		case 70:
		case 71:
		case 72:
		case 73:
		case 74:
		case 75:
		case 76:
		case 77:
		case 78:
		case joaat("MPSV_LP0_31"):
		case 80:
			return 4;
			break;
		
		case 81:
			return 5;
			break;
		
		case 82:
			return 6;
			break;
		
		case 83:
		case 84:
		case 85:
		case 86:
		case 87:
			return 7;
			break;
		
		case 88:
			return 8;
			break;
		
		case 89:
		case 90:
		case 91:
		case 92:
		case 93:
		case 94:
		case 95:
		case 96:
		case 97:
			return 9;
			break;
		
		case 101:
			return 10;
			break;
		
		case 102:
		case 103:
		case 104:
		case 105:
		case 106:
		case 107:
		case 108:
		case 109:
		case 110:
		case 111:
			return 11;
			break;
		
		case 117:
			return 12;
			break;
		
		case 122:
			return 13;
			break;
		
		case 123:
			return 14;
			break;
		
		case 124:
			return 15;
			break;
		
		case 125:
			return 16;
			break;
		
		case 128:
		case 129:
		case 130:
		case 131:
		case 132:
		case 133:
			return 17;
			break;
		
		case 145:
			return 18;
			break;
		
		case 146:
			return 19;
			break;
		
		case 147:
			return 20;
			break;
	}
	return -1;
}

int func_196(int iParam0)
{
	if (iParam0 != func_89() && func_313(iParam0, 1, 1))
	{
		return Global_2425869[iParam0 /*443*/].f_314.f_15;
	}
	return -1;
}

int func_197(int iParam0)
{
	if (iParam0 != func_89() && func_313(iParam0, 1, 1))
	{
		if (func_199(iParam0) && !func_198(iParam0))
		{
			return 1;
		}
	}
	return 0;
}

int func_198(int iParam0)
{
	if (iParam0 != func_89() && func_313(iParam0, 1, 1))
	{
		return unk_0xCE990E643CD9D0E5(Global_2425869[iParam0 /*443*/].f_314, 4);
	}
	return 0;
}

int func_199(int iParam0)
{
	if (iParam0 != func_89() && func_313(iParam0, 1, 1))
	{
		return unk_0xCE990E643CD9D0E5(Global_2425869[iParam0 /*443*/].f_314, 3);
	}
	return 0;
}

int func_200(int iParam0, bool bParam1)
{
	int iVar0;
	
	if (bParam1)
	{
		if (unk_0x47DBF174A0CB9D55(unk_0x9B0761B4C3EB8BC7(), 0))
		{
			iVar0 = unk_0xA5D5B1042E8F47BD(unk_0x9B0761B4C3EB8BC7(), 0);
			if (unk_0x36FE6D3220816ADA(iVar0) == joaat("terbyte"))
			{
				return 1;
			}
		}
	}
	if (iParam0 != func_89())
	{
		if (func_313(iParam0, 1, 1))
		{
			if (Global_2425869[iParam0 /*443*/].f_314.f_6 != -1 && Global_2425869[iParam0 /*443*/].f_314.f_9 != func_89())
			{
				return func_195(Global_2425869[iParam0 /*443*/].f_314.f_6) == 12;
			}
		}
	}
	return 0;
}

int func_201(int iParam0)
{
	switch (iParam0)
	{
		case 83:
			return 1;
			break;
		
		case 84:
			return 2;
			break;
		
		case 85:
			return 3;
			break;
		
		case 86:
			return 4;
			break;
		
		case 87:
			return 5;
			break;
	}
	return 0;
}

int func_202(struct<3> Param0, int iParam1)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 12)
	{
		if (Global_2409990[iVar0 /*17*/].f_9 == 1 || iParam1 == 0)
		{
			if (func_161(Param0, &(Global_2409990[iVar0 /*17*/]), 0.1f, 0, 0))
			{
				return iVar0;
			}
		}
		iVar0++;
	}
	return -1;
}

void func_203(struct<3> Param0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2[3];
	int iVar3[3];
	
	if (Global_2405074.f_45.f_316)
	{
		return;
	}
	if (!func_221())
	{
		if (iParam1 == 0)
		{
		}
		iVar1 = func_220(Param0);
		if (iVar1 > -1)
		{
			func_231();
			switch (iVar1)
			{
				case 0:
					func_219(-1139.678f, -2694.165f, 12.949f, 283.4298f);
					func_219(-1137.455f, -2690.167f, 12.9448f, 283.0835f);
					func_219(-1135.02f, -2685.912f, 12.9412f, 283.8219f);
					func_219(-1099.898f, -2688.611f, 12.9473f, 295.3925f);
					func_219(-1110.51f, -2693.236f, 12.9595f, 298.84f);
					func_219(-1081.807f, -2690.015f, 12.7567f, 219.1729f);
					func_219(-1075.586f, -2697.09f, 12.7567f, 224.8977f);
					func_219(-1095.133f, -2659.995f, 12.7567f, 190.9326f);
					func_219(-1096.511f, -2649.483f, 12.6066f, 182.7913f);
					break;
				
				case 1:
					func_219(-1411.731f, -533.6462f, 30.2703f, 215.116f);
					func_219(-1416.407f, -527.0309f, 30.6453f, 215.2683f);
					func_219(-1432.146f, -580.9922f, 29.5263f, 118.3858f);
					func_219(-1438.8f, -584.4678f, 29.595f, 118.1207f);
					break;
				
				case 2:
					func_219(-780.5905f, 292.8159f, 84.673f, 97.2697f);
					func_219(-788.6147f, 291.8073f, 84.72f, 97.7348f);
					func_219(-765.572f, 294.4459f, 84.5182f, 93.9327f);
					func_219(-756.9962f, 294.8176f, 84.4061f, 93.9545f);
					break;
				
				case 3:
					func_219(-647.9388f, 40.9257f, 38.9494f, 356.4108f);
					func_219(-647.239f, 49.2068f, 40.7135f, 355.9723f);
					func_219(-620.1517f, 3.6633f, 40.5904f, 98.3813f);
					func_219(-610.5603f, 5.1258f, 41.2404f, 98.696f);
					break;
				
				case 4:
					func_219(-943.2437f, -487.8443f, 35.7504f, 208.6441f);
					func_219(-949.2938f, -476.3759f, 36.0878f, 208.1432f);
					func_219(-955.3208f, -465.3984f, 36.3328f, 206.9198f);
					func_219(-959.5925f, -457.0372f, 36.5226f, 207.7534f);
					break;
				
				case 5:
					func_219(-966.1365f, -401.5364f, 36.6824f, 27.6587f);
					func_219(-934.9108f, -413.4091f, 36.5161f, 118.0149f);
					func_219(-920.2501f, -405.6656f, 36.5869f, 117.2407f);
					func_219(-971.7031f, -390.5213f, 36.7118f, 26.8016f);
					break;
				
				case 6:
					func_219(-58.1347f, -573.486f, 36.5789f, 341.8442f);
					func_219(-64.227f, -590.2214f, 35.1654f, 338.972f);
					func_219(-67.0332f, -599.2827f, 35.1787f, 341.5854f);
					func_219(-71.8651f, -612.8891f, 35.1574f, 339.8537f);
					break;
				
				case 7:
					func_219(-232.1917f, -978.1431f, 28.166f, 160.2115f);
					func_219(-229.6225f, -970.9731f, 28.1636f, 160.2397f);
					func_219(-251.993f, -998.3963f, 28.3747f, 249.3297f);
					func_219(-262.222f, -994.5226f, 29.23f, 249.4673f);
					break;
				
				case 8:
					func_219(151.624f, -1309.343f, 28.2023f, 243.201f);
					func_219(152.7886f, -1305.608f, 28.2023f, 243.9973f);
					func_219(145.8017f, -1287.19f, 28.312f, 120.6275f);
					func_219(142.8935f, -1282.286f, 28.3156f, 120.3024f);
					break;
				
				case 9:
					func_219(-2333.575f, 272.6518f, 168.4671f, 23.0287f);
					func_219(-2322.187f, 277.638f, 168.4671f, 23.4249f);
					func_219(-2316.222f, 279.9105f, 168.4671f, 23.0175f);
					func_219(-2314.396f, 290.9f, 168.4671f, 114.3983f);
					func_219(-2316.81f, 296.424f, 168.4671f, 113.6228f);
					func_219(-2318.572f, 299.2423f, 168.4671f, 293.83f);
					func_219(-2327.902f, 291.6653f, 168.4671f, 294.1158f);
					func_219(-2330.711f, 274.0757f, 168.4671f, 205.2184f);
					func_219(-2345.082f, 277.3852f, 168.4671f, 113.4219f);
					func_219(-2347.777f, 282.6038f, 168.4671f, 292.7772f);
					func_219(-2339.33f, 293.4399f, 168.4671f, 114.2739f);
					func_219(-2352.681f, 294.4205f, 168.4671f, 115.5597f);
					break;
				
				case 10:
					func_217(78);
					break;
				
				case 11:
					func_217(79);
					break;
				
				case 12:
					func_217(82);
					break;
				
				case 13:
					func_217(81);
					break;
				
				case 14:
					func_217(73);
					break;
				
				case 15:
					func_219(382.9244f, 443.8122f, 142.9934f, 78.3408f);
					func_219(391.2023f, 442.4812f, 142.5089f, 82.2125f);
					func_219(400.1477f, 441.0816f, 142.0776f, 83.4259f);
					func_219(414.2964f, 439.2628f, 141.5056f, 80.8689f);
					break;
				
				case 16:
					func_217(75);
					break;
				
				case 17:
					func_217(76);
					break;
				
				case 18:
					func_217(77);
					break;
				
				case 19:
					func_219(-921.9734f, 704.0754f, 150.8142f, 96.5139f);
					func_219(-904.7881f, 708.9782f, 149.8261f, 108.2109f);
					func_219(-931.6637f, 703.693f, 151.369f, 87.7447f);
					func_219(-943.8763f, 704.2332f, 152.0993f, 87.6764f);
					break;
				
				case 20:
					func_217(80);
					break;
				
				case 21:
				case 25:
					func_217(87);
					break;
				
				case 22:
				case 26:
					func_217(88);
					break;
				
				case 23:
				case 27:
					func_217(89);
					break;
				
				case 24:
				case 28:
					func_217(90);
					break;
				
				case 29:
				case 30:
					if (func_216(iParam1))
					{
						func_217(Global_1590682[unk_0x460153A63B9477BC() /*883*/].f_274.f_28);
					}
					break;
				
				case 31:
					func_219(-352.53f, -1836.742f, 21.924f, 274.8f);
					func_219(-336.412f, -1837.341f, 22.497f, 264.6f);
					func_219(-320.707f, -1840.342f, 23.195f, 257.4f);
					func_219(-304.646f, -1843.295f, 24.219f, 261.599f);
					func_219(-288.991f, -1844.123f, 25.228f, 269.599f);
					func_219(-273.031f, -1842.69f, 26.27f, 278.199f);
					func_219(-361.271f, -1814.526f, 21.63f, 96.399f);
					func_219(-343.939f, -1813.331f, 22.368f, 87.999f);
					func_219(-326.881f, -1814.914f, 23.106f, 78.799f);
					func_219(-310.941f, -1818.223f, 23.957f, 78.799f);
					func_219(-294.16f, -1820.207f, 25.092f, 89.199f);
					func_219(-277.392f, -1819.237f, 26.283f, 100.199f);
					func_219(-257.213f, -1838.977f, 27.318f, 285.799f);
					func_219(-261.286f, -1815.615f, 27.439f, 110.399f);
					func_219(-246.086f, -1808.691f, 28.576f, 117.398f);
					func_219(-231.901f, -1800.767f, 28.619f, 119.398f);
					func_219(-199.77f, -1989.34f, 26.62f, 180.997f);
					func_219(-201.159f, -1971.41f, 26.62f, 190.798f);
					func_219(-205.571f, -1954.537f, 26.62f, 199.998f);
					func_219(-197.879f, -1940.822f, 26.62f, 114.998f);
					func_219(-141.311f, -1967.41f, 21.805f, 91.997f);
					func_219(-141.145f, -1977.861f, 21.813f, 91.997f);
					func_219(-140.565f, -1988.289f, 21.815f, 91.997f);
					func_219(-145.045f, -2032.168f, 21.956f, 73.597f);
					func_219(-147.923f, -2041.781f, 21.956f, 73.597f);
					func_219(-185.791f, -1948.005f, 26.62f, 18.596f);
					func_219(-181.155f, -1965.422f, 26.62f, 8.196f);
					func_219(-179.172f, -1984.332f, 26.62f, 1.396f);
					func_219(-225.88f, -1824.637f, 28.897f, 299.596f);
					func_219(-211.722f, -1816.401f, 28.859f, 300.796f);
					func_219(-217.99f, -1792.624f, 28.649f, 119.196f);
					func_219(-203.828f, -1784.264f, 28.678f, 119.996f);
					func_219(-194.254f, -2018.756f, 26.62f, 75f);
					func_219(-186.956f, -2031.369f, 26.62f, 338f);
					func_219(-194.916f, -2047.94f, 26.62f, 329.8f);
					func_219(-205.565f, -2064.553f, 26.62f, 320.2f);
					func_219(-218.606f, -2077.97f, 26.62f, 311.2f);
					func_219(-233.372f, -2089.601f, 26.62f, 304f);
					func_219(-207.822f, -2002.11f, 26.62f, 173.799f);
					func_219(-207.567f, -2027.579f, 26.62f, 158.599f);
					func_219(-215.235f, -2042.272f, 26.62f, 148.999f);
					func_219(-227.643f, -2058.498f, 26.62f, 138.799f);
					func_219(-242.977f, -2071.452f, 26.62f, 125.798f);
					func_219(-256.624f, -2087.982f, 26.62f, 204.198f);
					func_219(-249.549f, -2098.767f, 26.62f, 294.198f);
					func_219(-228.998f, -2048.889f, 26.62f, 141.198f);
					func_219(-176.963f, -2009.239f, 24.519f, 261.597f);
					func_219(-195.128f, -1806.447f, 28.814f, 299.997f);
					func_219(-180.02f, -1797.414f, 28.797f, 299.997f);
					func_219(-165.796f, -1787.672f, 28.788f, 304.597f);
					func_219(-188.124f, -1774.765f, 28.711f, 123.197f);
					func_219(-417.428f, -1836.374f, 19.238f, 121.797f);
					func_219(-430.967f, -1844.844f, 18.468f, 121.797f);
					func_219(-444.94f, -1853.739f, 17.786f, 121.797f);
					break;
			}
		}
		else if (func_213(Param0, &iVar2, &iVar3) || (func_189(Param0, &(iVar2[0])) && (unk_0xF9C3E2B9AA9E2294(iParam1) || unk_0x442D6659150AF4B3(iParam1))))
		{
			func_231();
			iVar0 = 0;
			while (iVar0 < iVar2)
			{
				if (iVar2[iVar0] > 1000)
				{
					iVar2[iVar0] = (iVar2[iVar0] - 1000);
					iVar3[iVar0] = 1;
				}
				if (iVar2[iVar0] >= 83 && iVar2[iVar0] <= 87)
				{
					Global_2405074.f_513 = 1;
				}
				if (!iVar3[iVar0] && func_212(iVar2[iVar0], -1))
				{
					if (func_216(iParam1))
					{
						func_217(iVar2[iVar0]);
					}
				}
				else if (iVar3[iVar0])
				{
					if (((func_211(unk_0x9B0761B4C3EB8BC7()) || func_210(unk_0x9B0761B4C3EB8BC7())) && unk_0xF9C3E2B9AA9E2294(iParam1)) || unk_0x442D6659150AF4B3(iParam1))
					{
						if (func_209(iParam1))
						{
							func_208(iVar2[iVar0]);
						}
						else if (func_207(iParam1))
						{
							func_206(iVar2[iVar0]);
							func_208(iVar2[iVar0]);
						}
						else
						{
							func_206(iVar2[iVar0]);
							func_208(iVar2[iVar0]);
						}
					}
					else
					{
						func_204(iVar2[iVar0], iParam1);
					}
				}
				else
				{
					func_217(iVar2[iVar0]);
				}
				iVar0++;
			}
		}
	}
}

void func_204(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 23:
			func_219(434.1898f, 6535.824f, 27.0084f, 66.9998f);
			func_219(434.9146f, 6539.661f, 26.9691f, 66.9998f);
			func_219(435.1928f, 6543.298f, 26.889f, 66.9998f);
			func_219(429.8495f, 6506.581f, 27.1807f, 59.7997f);
			func_219(429.8463f, 6511.11f, 27.0717f, 60.9997f);
			func_219(434.2748f, 6581.816f, 26.1303f, 85.1993f);
			func_219(443.1016f, 6580.717f, 26.0739f, 85.1993f);
			func_219(451.9748f, 6579.937f, 26.0319f, 85.1993f);
			break;
		
		case 26:
			func_219(-148.9694f, 6325.552f, 30.4564f, 224.1983f);
			func_219(-154.9585f, 6331.287f, 30.5809f, 225.7983f);
			func_219(-136.8806f, 6347.622f, 30.4906f, 43.9982f);
			func_219(-142.1459f, 6342.532f, 30.49f, 44.7982f);
			func_219(-136.6504f, 6357.062f, 30.4907f, 43.9982f);
			func_219(-151.1909f, 6358.461f, 30.4907f, 223.398f);
			func_219(-141.4154f, 6365.831f, 30.4907f, 43.3979f);
			func_219(-147.8279f, 6378.042f, 30.5012f, 312.7973f);
			break;
		
		case 24:
			func_219(60.7522f, 6465.807f, 30.3941f, 213.3973f);
			func_219(57.4131f, 6462.55f, 30.3663f, 213.3973f);
			func_219(48.0438f, 6452.668f, 30.3245f, 213.3973f);
			func_219(40.6765f, 6445.235f, 30.3475f, 213.3973f);
			func_219(37.8298f, 6442.521f, 30.3489f, 213.3973f);
			func_219(35.0212f, 6439.866f, 30.3332f, 213.3973f);
			func_219(32.1837f, 6437.21f, 30.2991f, 213.3973f);
			func_219(29.4732f, 6434.526f, 30.3702f, 213.3973f);
			break;
		
		case 25:
			func_219(-377.1927f, 6142.805f, 30.3409f, 315.3965f);
			func_219(-383.3481f, 6136.154f, 30.3752f, 315.3965f);
			func_219(-395.8286f, 6123.635f, 30.2987f, 46.3965f);
			func_219(-389.1636f, 6117.241f, 30.3641f, 46.3965f);
			func_219(-370.6174f, 6129.779f, 30.4414f, 45.7965f);
			func_219(-360.983f, 6130.575f, 30.4401f, 45.7965f);
			func_219(-416.8689f, 6103.411f, 30.3852f, 325.7964f);
			func_219(-420.9229f, 6095.657f, 30.3155f, 334.7964f);
			break;
		
		case 22:
			func_219(45.2181f, 6341.107f, 30.2296f, 14.3964f);
			func_219(41.6057f, 6339.476f, 30.2306f, 14.3964f);
			func_219(39.2508f, 6359.469f, 30.2398f, 207.3965f);
			func_219(36.3203f, 6356.893f, 30.2398f, 207.3965f);
			func_219(51.6043f, 6365.022f, 30.2399f, 33.5965f);
			func_219(65.6465f, 6380.626f, 30.2398f, 212.9964f);
			func_219(24.8587f, 6366.36f, 30.2286f, 32.7965f);
			func_219(19.6254f, 6360.736f, 30.2305f, 32.7965f);
			break;
		
		case 28:
			func_219(94.0245f, 181.2181f, 103.5566f, 160.3953f);
			func_219(91.0039f, 182.2811f, 103.6179f, 160.3953f);
			func_219(68.365f, 148.2105f, 103.5812f, 339.9951f);
			func_219(62.2104f, 150.5185f, 103.6101f, 339.9951f);
			func_219(69.5198f, 186.4278f, 103.9415f, 69.7949f);
			func_219(62.59f, 189.0833f, 103.9981f, 69.7949f);
			func_219(55.6095f, 191.8089f, 104.2827f, 69.7949f);
			func_219(154.7309f, 182.1333f, 104.6903f, 160.1945f);
			break;
		
		case 31:
			func_219(322.4916f, -714.5293f, 28.1574f, 158.5941f);
			func_219(329.5591f, -694.4284f, 28.1656f, 158.5941f);
			func_219(324.565f, -684.3934f, 28.3133f, 247.194f);
			func_219(326.4054f, -679.9403f, 28.3192f, 247.194f);
			func_219(297.1177f, -804.3891f, 28.4859f, 160.594f);
			func_219(288.5461f, -814.6994f, 28.1563f, 163.194f);
			func_219(286.0127f, -821.7357f, 28.3093f, 163.194f);
			func_219(283.6725f, -828.9533f, 28.1247f, 158.994f);
			break;
		
		case 29:
			func_219(-1448.551f, -355.0512f, 43.3715f, 313.3925f);
			func_219(-1454.819f, -359.998f, 42.7885f, 311.3925f);
			func_219(-1462.675f, -360.1352f, 42.9255f, 223.392f);
			func_219(-1447.965f, -368.3028f, 42.5412f, 5.9918f);
			func_219(-1468.678f, -353.4619f, 43.2024f, 217.7916f);
			func_219(-1473.219f, -346.7773f, 43.5318f, 213.9913f);
			func_219(-1490.742f, -420.1957f, 35.9291f, 229.1911f);
			func_219(-1496.003f, -395.7657f, 38.1394f, 45.7909f);
			break;
		
		case 30:
			func_219(-1174.491f, -1381.01f, 3.9253f, 116.5903f);
			func_219(-1183.148f, -1392.559f, 3.6319f, 304.9901f);
			func_219(-1160.964f, -1417.759f, 3.7043f, 65.7899f);
			func_219(-1151.611f, -1411.377f, 3.9411f, 63.5895f);
			func_219(-1167.187f, -1424.07f, 3.4884f, 123.5897f);
			func_219(-1148.22f, -1409.164f, 4.0217f, 63.5895f);
			func_219(-1137.11f, -1372.818f, 3.8993f, 27.5895f);
			func_219(-1140.608f, -1365.747f, 4.0573f, 27.5895f);
			break;
		
		case 27:
			func_219(1414.237f, -1656.344f, 60.2449f, 332.7893f);
			func_219(1416.668f, -1659.933f, 60.6982f, 332.7893f);
			func_219(1419.327f, -1663.972f, 61.2382f, 332.7893f);
			func_219(1421.557f, -1667.367f, 61.7479f, 332.7893f);
			func_219(1423.744f, -1670.853f, 62.3125f, 332.7893f);
			func_219(1412.157f, -1652.746f, 59.9105f, 332.7893f);
			func_219(1426.201f, -1673.598f, 62.7133f, 330.1893f);
			func_219(1435.804f, -1694.73f, 65.0743f, 352.5892f);
			break;
		
		case 33:
			func_219(2810.787f, 4435.92f, 47.5295f, 20.7996f);
			func_219(2808.413f, 4443.922f, 47.3732f, 14.7995f);
			func_219(2806.298f, 4451.786f, 47.1865f, 15.3995f);
			func_219(2803.925f, 4459.858f, 46.9823f, 15.3995f);
			func_219(2801.756f, 4467.755f, 46.8147f, 15.3995f);
			func_219(2893.563f, 4430.258f, 47.338f, 105.9994f);
			func_219(2903.725f, 4425.854f, 47.3523f, 23.1992f);
			func_219(2907.076f, 4418.059f, 47.6301f, 23.1992f);
			break;
		
		case 36:
			func_219(1680.448f, 4821.131f, 41.0599f, 186.399f);
			func_219(1679.76f, 4829.447f, 40.9167f, 186.399f);
			func_219(1678.668f, 4838.03f, 41.0221f, 187.7989f);
			func_219(1677.612f, 4846.028f, 41.0452f, 187.7989f);
			func_219(1675.851f, 4860.434f, 41.0901f, 187.7989f);
			func_219(1674.843f, 4868.343f, 41.0684f, 187.7989f);
			func_219(1673.543f, 4875.752f, 41.0684f, 186.7986f);
			func_219(1672.525f, 4884.972f, 41.0478f, 186.7986f);
			break;
		
		case 34:
			func_219(422.863f, 3583.901f, 32.2386f, 313.5986f);
			func_219(426.6211f, 3583.208f, 32.2386f, 313.5986f);
			func_219(430.466f, 3582.042f, 32.2386f, 313.5986f);
			func_219(434.2751f, 3580.881f, 32.2386f, 313.5986f);
			func_219(438.1525f, 3579.911f, 32.2386f, 313.5986f);
			func_219(442.0173f, 3578.948f, 32.2386f, 313.5986f);
			func_219(420.2694f, 3572.995f, 32.2385f, 353.7984f);
			func_219(424.4825f, 3572.1f, 32.2386f, 348.1984f);
			break;
		
		case 35:
			func_219(627.005f, 2726.019f, 40.7692f, 4.3984f);
			func_219(620.9771f, 2725.759f, 40.7897f, 4.3984f);
			func_219(614.8536f, 2725.355f, 40.8321f, 4.3984f);
			func_219(611.1158f, 2737.387f, 40.9734f, 185.3984f);
			func_219(598.9713f, 2736.261f, 41.0602f, 186.5986f);
			func_219(592.6151f, 2735.886f, 41.0602f, 186.5986f);
			func_219(586.0421f, 2735.9f, 41.0535f, 186.5986f);
			func_219(627.4468f, 2742.742f, 40.8963f, 183.5979f);
			break;
		
		case 32:
			func_219(214.3318f, 2492.26f, 53.9736f, 312.7978f);
			func_219(213.9953f, 2496.666f, 53.8128f, 312.7978f);
			func_219(213.7524f, 2501.251f, 53.5958f, 312.7978f);
			func_219(213.6645f, 2505.908f, 53.3477f, 312.7978f);
			func_219(213.4478f, 2510.734f, 53.1055f, 312.7978f);
			func_219(212.9148f, 2515.268f, 52.9376f, 312.7978f);
			func_219(211.5983f, 2519.216f, 52.6753f, 312.7978f);
			func_219(210.1288f, 2523.187f, 52.3493f, 312.7978f);
			break;
		
		case 38:
			func_219(153.6785f, -2476.192f, 4.9877f, 178.4004f);
			func_219(150.9209f, -2516.979f, 4.9909f, 179.9999f);
			func_219(150.9499f, -2524.965f, 4.9905f, 179.9999f);
			func_219(153.866f, -2467.242f, 4.9877f, 178.4004f);
			func_219(150.8115f, -2533.139f, 4.9895f, 180.0004f);
			func_219(153.8647f, -2433.386f, 5.2336f, 170.2002f);
			func_219(142.7427f, -2536.147f, 5f, 205.0002f);
			func_219(138.8267f, -2535.865f, 5f, 205.0002f);
			break;
		
		case 41:
			func_219(-341.4255f, -2734.451f, 5.0413f, 314.8f);
			func_219(-334.0134f, -2741.43f, 5.0269f, 314.8f);
			func_219(-329.7832f, -2745.604f, 5.0196f, 314.8f);
			func_219(-336.4781f, -2716.139f, 5.0028f, 134.1994f);
			func_219(-334.2752f, -2718.888f, 5.0048f, 135.1992f);
			func_219(-327.6603f, -2725.645f, 5.0103f, 135.1992f);
			func_219(-323.1619f, -2730.345f, 5.0099f, 135.1992f);
			func_219(-316.3481f, -2737.087f, 5.0033f, 135.1992f);
			break;
		
		case 39:
			func_219(1143.73f, -3105.091f, 4.8989f, 146.1979f);
			func_219(1140.009f, -3104.954f, 4.8985f, 146.1979f);
			func_219(1136.267f, -3104.69f, 4.8969f, 146.1979f);
			func_219(1132.732f, -3104.277f, 4.8944f, 146.1979f);
			func_219(1128.724f, -3104.54f, 4.896f, 146.1979f);
			func_219(1125.106f, -3104.057f, 4.8942f, 146.1979f);
			func_219(1117.8f, -3103.674f, 4.8922f, 146.1979f);
			func_219(1114.015f, -3103.448f, 4.8931f, 146.1979f);
			break;
		
		case 40:
			func_219(653.1188f, -2700.255f, 5.2101f, 24.7971f);
			func_219(656.1305f, -2707.245f, 5.214f, 24.7971f);
			func_219(659.3307f, -2714.378f, 5.2188f, 22.7968f);
			func_219(662.2627f, -2722.228f, 5.2188f, 19.1968f);
			func_219(649.2115f, -2728.359f, 5.1124f, 20.5967f);
			func_219(646.2606f, -2720.833f, 5.1103f, 21.3967f);
			func_219(643.4582f, -2713.846f, 5.1099f, 21.3967f);
			func_219(640.3513f, -2706.571f, 5.108f, 21.3967f);
			break;
		
		case 37:
			func_219(-260.5913f, -2615.255f, 5.0502f, 274.5953f);
			func_219(-253.2161f, -2614.896f, 5.0502f, 271.5953f);
			func_219(-245.6569f, -2614.862f, 5.0502f, 271.5953f);
			func_219(-238.214f, -2614.847f, 5.0502f, 271.5953f);
			func_219(-238.013f, -2630.961f, 5.0331f, 271.3949f);
			func_219(-260.9724f, -2631.418f, 5.0355f, 276.9951f);
			func_219(-253.401f, -2631.108f, 5.0319f, 272.195f);
			func_219(-245.5563f, -2631.06f, 5.0323f, 272.195f);
			break;
		
		case 83:
			func_219(-1190.795f, -3371.393f, 12.945f, 348.399f);
			func_219(-1185.634f, -3373.893f, 12.945f, 348.399f);
			func_219(-1114.818f, -3414.185f, 12.945f, 314.199f);
			func_219(-1110.976f, -3416.37f, 12.945f, 314.199f);
			func_219(-1098.621f, -3460.792f, 12.9453f, 329.799f);
			func_219(-1093.31f, -3463.464f, 12.9453f, 329.799f);
			func_219(-1089.433f, -3443.234f, 12.945f, 329.799f);
			func_219(-1084.271f, -3446.31f, 12.945f, 329.799f);
			func_219(-1093.808f, -3452.407f, 12.9451f, 329.799f);
			func_219(-1088.383f, -3455.466f, 12.9451f, 329.799f);
			func_219(-1118.474f, -3411.385f, 12.9451f, 313.199f);
			func_219(-1181.003f, -3375.658f, 12.945f, 346.799f);
			func_219(-1212.071f, -3382.283f, 12.9451f, 328.999f);
			func_219(-1217.708f, -3378.623f, 12.9451f, 328.999f);
			func_219(-1216.986f, -3390.396f, 12.9452f, 328.999f);
			func_219(-1222.566f, -3386.707f, 12.9452f, 328.999f);
			func_219(-1222.06f, -3398.882f, 12.9452f, 328.999f);
			func_219(-1227.698f, -3394.946f, 12.9451f, 328.999f);
			func_219(-1097.517f, -3472.086f, 12.9453f, 328.999f);
			func_219(-1102.951f, -3468.619f, 12.9452f, 328.999f);
			func_219(-1227.253f, -3407.38f, 12.9452f, 328.999f);
			func_219(-1232.836f, -3403.572f, 12.9452f, 328.999f);
			break;
		
		case 84:
			func_219(-1364.879f, -3285.201f, 12.945f, 330.2f);
			func_219(-1359.229f, -3288.52f, 12.945f, 330.2f);
			func_219(-1369.636f, -3293.617f, 12.945f, 330.2f);
			func_219(-1363.881f, -3296.796f, 12.945f, 330.2f);
			func_219(-1432.898f, -3247.702f, 12.945f, 330.2f);
			func_219(-1437.282f, -3255.429f, 12.945f, 330.2f);
			func_219(-1441.623f, -3262.969f, 12.945f, 330.2f);
			func_219(-1443.954f, -3251.006f, 12.945f, 330.2f);
			func_219(-1374.159f, -3301.61f, 12.945f, 330.2f);
			func_219(-1368.508f, -3304.924f, 12.945f, 330.2f);
			func_219(-1359.905f, -3276.118f, 12.9448f, 330.4f);
			func_219(-1354.228f, -3279.63f, 12.9448f, 330.4f);
			func_219(-1406.493f, -3246.223f, 12.9449f, 344.5997f);
			func_219(-1411.058f, -3243.62f, 12.9449f, 344.5997f);
			func_219(-1415.326f, -3241.014f, 12.9449f, 344.5997f);
			func_219(-1419.899f, -3238.116f, 12.9449f, 344.5997f);
			func_219(-1370.986f, -3268.945f, 12.9449f, 322.3996f);
			func_219(-1365.735f, -3272.363f, 12.9449f, 322.3996f);
			func_219(-1373.341f, -3313.206f, 12.9448f, 329.5996f);
			func_219(-1379.091f, -3310.004f, 12.9448f, 330.7996f);
			func_219(-1436.989f, -3228.515f, 12.9449f, 343.9996f);
			func_219(-1444.064f, -3273.751f, 12.945f, 330.7996f);
			break;
		
		case 85:
			func_219(-2060.105f, 3186.159f, 31.81f, 329.599f);
			func_219(-2065.521f, 3189.007f, 31.81f, 150.199f);
			func_219(-2055.006f, 3194.989f, 31.81f, 329.599f);
			func_219(-2060.471f, 3197.816f, 31.81f, 150.199f);
			func_219(-2049.611f, 3204.032f, 31.81f, 329.599f);
			func_219(-2055.048f, 3206.958f, 31.81f, 150.199f);
			func_219(-2049.627f, 3216.253f, 31.81f, 150.199f);
			func_219(-2039.024f, 3222.121f, 31.81f, 329.599f);
			func_219(-2044.17f, 3213.208f, 31.81f, 329.599f);
			func_219(-2044.672f, 3224.638f, 31.81f, 150.199f);
			func_219(-2060.486f, 3165.928f, 31.8103f, 133.9988f);
			func_219(-2055.707f, 3163.053f, 31.8103f, 133.9988f);
			func_219(-2050.911f, 3160.092f, 31.8103f, 133.9988f);
			func_219(-1974.635f, 3137.847f, 31.8103f, 149.5986f);
			func_219(-1970.354f, 3145.22f, 31.8103f, 149.5986f);
			func_219(-1965.709f, 3153.221f, 31.8103f, 149.5986f);
			func_219(-1960.991f, 3161.346f, 31.8103f, 149.5986f);
			func_219(-1983.17f, 3131.33f, 31.8103f, 149.5986f);
			func_219(-1976.614f, 3127.627f, 31.8103f, 149.5986f);
			func_219(-1991.582f, 3127.264f, 31.8103f, 167.7985f);
			func_219(-1995.584f, 3129.369f, 31.8103f, 167.7985f);
			func_219(-1999.335f, 3131.182f, 31.8103f, 167.7985f);
			break;
		
		case 86:
			func_219(-1843.828f, 3085.094f, 31.81f, 165.8f);
			func_219(-1828.571f, 3084.114f, 31.841f, 329.2f);
			func_219(-1823.414f, 3092.762f, 31.843f, 330f);
			func_219(-1819.045f, 3100.435f, 31.845f, 330f);
			func_219(-1833.313f, 3075.722f, 31.838f, 330f);
			func_219(-1847.648f, 3076.8f, 31.835f, 165.8f);
			func_219(-1838.479f, 3078.576f, 31.863f, 150.599f);
			func_219(-1833.605f, 3086.784f, 31.863f, 150.599f);
			func_219(-1828.424f, 3095.617f, 31.863f, 150.599f);
			func_219(-1823.95f, 3102.821f, 31.862f, 150.599f);
			func_219(-1819.284f, 3110.67f, 31.8615f, 150.2f);
			func_219(-1814.545f, 3108.229f, 31.8476f, 330.6f);
			func_219(-1853.939f, 3076.271f, 31.8105f, 176.7996f);
			func_219(-1857.726f, 3078.668f, 31.8105f, 176.7996f);
			func_219(-1861.626f, 3080.777f, 31.8105f, 176.7996f);
			func_219(-1865.584f, 3083.136f, 31.8103f, 176.7996f);
			func_219(-1869.255f, 3085.565f, 31.8103f, 176.7996f);
			func_219(-1913.263f, 3125.342f, 31.8103f, 150.7988f);
			func_219(-1917.546f, 3127.678f, 31.8103f, 150.7988f);
			func_219(-1922.74f, 3130.555f, 31.8103f, 150.7988f);
			func_219(-1927.676f, 3133.413f, 31.8103f, 150.7988f);
			func_219(-1932.418f, 3136.273f, 31.8103f, 150.7988f);
			break;
		
		case 87:
			func_219(-2538.561f, 3303.172f, 31.814f, 296.999f);
			func_219(-2530.309f, 3307.445f, 31.816f, 296.999f);
			func_219(-2521.733f, 3311.833f, 31.817f, 296.999f);
			func_219(-2512.881f, 3316.428f, 31.819f, 296.999f);
			func_219(-2502.952f, 3321.518f, 31.821f, 296.999f);
			func_219(-2542.613f, 3310.728f, 31.814f, 296.999f);
			func_219(-2534.195f, 3314.753f, 31.815f, 296.999f);
			func_219(-2525.635f, 3318.97f, 31.817f, 296.999f);
			func_219(-2516.674f, 3323.545f, 31.819f, 296.999f);
			func_219(-2507.153f, 3328.454f, 31.82f, 296.999f);
			func_219(-2547.689f, 3298.791f, 31.812f, 296.999f);
			func_219(-2551.261f, 3306.304f, 31.8123f, 296.999f);
			func_219(-2497.446f, 3333.296f, 31.821f, 296.999f);
			func_219(-2494.089f, 3326.065f, 31.8218f, 296.999f);
			func_219(-2453.405f, 3255.388f, 31.8276f, 167.1986f);
			func_219(-2449.37f, 3253.417f, 31.8276f, 167.1986f);
			func_219(-2445.49f, 3251.138f, 31.8276f, 167.1986f);
			func_219(-2441.575f, 3248.888f, 31.8276f, 167.1986f);
			func_219(-2437.319f, 3246.554f, 31.8277f, 167.1986f);
			func_219(-2432.723f, 3244.232f, 31.8277f, 167.1986f);
			func_219(-2485.273f, 3330.891f, 31.8239f, 298.1979f);
			func_219(-2488.82f, 3338.365f, 31.8226f, 298.1979f);
			break;
		
		case 89:
			if (Global_1630317[unk_0x460153A63B9477BC() /*595*/].f_11.f_58 == 0)
			{
				func_219(1284.416f, 2890.299f, 45.0276f, 336.3999f);
				func_219(1273.248f, 2901.428f, 45.0426f, 338.3999f);
				func_219(1262.945f, 2911.535f, 43.2959f, 341.9999f);
				func_219(1272.094f, 2873.387f, 45.3443f, 328.5991f);
				func_219(1259.785f, 2892.217f, 45.1126f, 339.9999f);
				func_219(1231.279f, 2910.881f, 43.3085f, 12f);
				func_219(1306.515f, 2839.475f, 46.8947f, 132.3996f);
				func_219(1307.453f, 2825.276f, 45.1566f, 127.1998f);
				func_219(1257.029f, 2872.157f, 45.9766f, 338.5992f);
				func_219(1225.764f, 2930.095f, 41.6173f, 14.7999f);
			}
			else
			{
				func_219(1265.123f, 2836.949f, 47.1021f, 119.9996f);
				func_219(1258.145f, 2831.643f, 46.4503f, 135.7993f);
				func_219(1240.847f, 2828.721f, 46.4388f, 39.5992f);
				func_219(1236.877f, 2835.49f, 46.3491f, 22.9991f);
				func_219(1235.697f, 2843.403f, 46.0231f, 2.7991f);
				func_219(1237.686f, 2850.607f, 45.5261f, 335.5991f);
				func_219(1241.126f, 2858.816f, 45.0176f, 339.7991f);
				func_219(1249.715f, 2810.588f, 47.2648f, 255.1992f);
				func_219(1257.696f, 2808.609f, 47.014f, 266.1992f);
				func_219(1265.577f, 2808.353f, 46.7598f, 277.199f);
				func_219(1273.808f, 2808.484f, 46.3872f, 263.999f);
				func_219(1282.535f, 2807.134f, 45.9705f, 250.7989f);
				func_219(1290.168f, 2803.745f, 45.8005f, 238.7988f);
				func_219(1296.445f, 2798.777f, 46.0903f, 228.9988f);
				func_219(1302.041f, 2792.33f, 45.957f, 221.7987f);
				func_219(1251.389f, 2825.818f, 45.9856f, 119.1982f);
				func_219(1285.48f, 2819.238f, 45.044f, 228.3993f);
				func_219(1293.023f, 2814.164f, 44.8859f, 233.399f);
				func_219(1242.18f, 2814.153f, 47.7108f, 227.3991f);
				func_219(1236.362f, 2819.623f, 47.6845f, 224.399f);
				func_219(1231.532f, 2825.855f, 47.4649f, 210.5992f);
				func_219(1228.177f, 2833.423f, 47.3171f, 197.5993f);
				func_219(1243.095f, 2866.749f, 44.6219f, 353.7992f);
				func_219(1307.346f, 2785.787f, 46.1136f, 219.9997f);
				func_219(1300.752f, 2808.224f, 44.5688f, 228.9997f);
				func_219(1306.571f, 2802.468f, 44.6275f, 224.1992f);
				func_219(1244.465f, 2875.697f, 44.5839f, 353.7992f);
				func_219(1312.441f, 2795.427f, 45.2701f, 218.5991f);
			}
			break;
		
		case 90:
			if (Global_1630317[unk_0x460153A63B9477BC() /*595*/].f_11.f_58 == 0)
			{
				func_219(14.4916f, 2660.726f, 79.0178f, 310.1999f);
				func_219(3.855f, 2672.388f, 78.437f, 319.2f);
				func_219(-7.057f, 2682.247f, 77.472f, 319.2f);
				func_219(-14.041f, 2663.43f, 77.4221f, 319.2f);
				func_219(41.8086f, 2597.059f, 81.3524f, 301.9997f);
				func_219(60.2273f, 2609.745f, 79.5672f, 305.9998f);
				func_219(34.0188f, 2659.723f, 78.9894f, 314.2f);
				func_219(29.4879f, 2675.34f, 76.0202f, 314.2f);
				func_219(19.0088f, 2686.16f, 75.6897f, 314.2f);
				func_219(7.6101f, 2697.113f, 76.2923f, 314.2f);
			}
			else
			{
				func_219(50.6405f, 2633.902f, 79.4503f, 305.1998f);
				func_219(46.2894f, 2639.951f, 79.9122f, 305.1998f);
				func_219(55.3668f, 2627.773f, 79.6363f, 305.1998f);
				func_219(59.9522f, 2620.408f, 80.0499f, 305.1998f);
				func_219(42.1486f, 2646.073f, 80.108f, 305.1998f);
				func_219(68.1481f, 2630.07f, 77.0725f, 305.1998f);
				func_219(62.6048f, 2637.014f, 76.1722f, 305.1998f);
				func_219(57.3543f, 2643.56f, 75.5301f, 305.1998f);
				func_219(52.611f, 2649.698f, 76.1354f, 305.1998f);
				func_219(74.5845f, 2640.475f, 72.602f, 305.1998f);
				func_219(68.5462f, 2646.784f, 71.6298f, 305.1998f);
				func_219(62.426f, 2652.977f, 71.7029f, 305.1998f);
				func_219(79.5597f, 2650.835f, 68.668f, 305.1998f);
				func_219(72.6035f, 2656.857f, 67.3294f, 305.1998f);
				func_219(83.4156f, 2660.237f, 64.3198f, 305.1998f);
				func_219(102.851f, 2688.009f, 51.732f, 224f);
				func_219(109.815f, 2681.012f, 51.112f, 224f);
				func_219(116.355f, 2674.26f, 50.529f, 224f);
				func_219(125.138f, 2665.98f, 49.8f, 224f);
				func_219(132.228f, 2659.865f, 49.26f, 228.4f);
				func_219(139.354f, 2653.536f, 48.737f, 228.4f);
				func_219(88.512f, 2702.995f, 53.042f, 224.199f);
				func_219(81.565f, 2710.357f, 53.67f, 224.199f);
				func_219(75.156f, 2716.981f, 54.223f, 224.199f);
				func_219(68.442f, 2723.806f, 54.775f, 226.199f);
				func_219(61.449f, 2730.606f, 55.308f, 226.199f);
				func_219(53.702f, 2738.167f, 55.855f, 226.199f);
				func_219(91.2443f, 2667.262f, 59.9931f, 314.599f);
			}
			break;
		
		case 91:
			if (Global_1630317[unk_0x460153A63B9477BC() /*595*/].f_11.f_58 == 0)
			{
				func_219(2772.011f, 3889.062f, 42.94f, 145.4f);
				func_219(2785.592f, 3880.409f, 43.695f, 146.199f);
				func_219(2788.387f, 3898.107f, 45.364f, 140.999f);
				func_219(2801.558f, 3912.485f, 44.931f, 131.999f);
				func_219(2805.531f, 3892.253f, 47.01f, 106.399f);
				func_219(2824.791f, 3894.787f, 47.4293f, 105.3989f);
				func_219(2761.739f, 3945.948f, 44.59f, 135.398f);
				func_219(2814.589f, 3930.404f, 44.816f, 134.9978f);
				func_219(2747.627f, 3930.92f, 43.8497f, 138.3978f);
				func_219(2796.312f, 3928.316f, 42.6106f, 134.5979f);
			}
			else
			{
				func_219(2730.174f, 3890.294f, 42.435f, 54.6f);
				func_219(2714.633f, 3918.283f, 42.938f, 16f);
				func_219(2716.533f, 3910.15f, 42.699f, 19.6f);
				func_219(2757.499f, 3874.045f, 42.724f, 64.8f);
				func_219(2747.99f, 3878.676f, 42.561f, 62.8f);
				func_219(2738.337f, 3884.314f, 42.614f, 57.2f);
				func_219(2711.836f, 3926.255f, 42.931f, 21.6f);
				func_219(2707.586f, 3934.558f, 42.984f, 27.6f);
				func_219(2702.361f, 3943.039f, 42.951f, 30.6f);
				func_219(2696.696f, 3951.317f, 43.012f, 34.8f);
				func_219(2766.778f, 3868.911f, 42.822f, 59.8f);
				func_219(2775.397f, 3863.697f, 43.204f, 54.2f);
				func_219(2738.841f, 3869.927f, 42.492f, 242.799f);
				func_219(2746.49f, 3865.861f, 42.808f, 239.599f);
				func_219(2754.829f, 3861.039f, 42.906f, 240.799f);
				func_219(2762.616f, 3856.316f, 42.895f, 240.799f);
				func_219(2770.463f, 3851.383f, 43.216f, 233.199f);
				func_219(2778.129f, 3844.914f, 43.26f, 229.199f);
				func_219(2785.341f, 3837.918f, 43.141f, 224.999f);
				func_219(2730.65f, 3875.186f, 42.437f, 231.999f);
				func_219(2724.14f, 3880.885f, 42.469f, 224.599f);
				func_219(2718.541f, 3887.508f, 42.614f, 217.399f);
				func_219(2783.246f, 3857.409f, 43.175f, 45.199f);
				func_219(2790.716f, 3850.631f, 43.125f, 45.199f);
				func_219(2690.655f, 3959.246f, 43.255f, 40.199f);
				func_219(2797.912f, 3842.523f, 43.166f, 40.199f);
				func_219(2791.836f, 3830.845f, 43.14f, 221.999f);
				func_219(2712.952f, 3894.566f, 42.484f, 14.799f);
			}
			break;
		
		case 92:
			if (Global_1630317[unk_0x460153A63B9477BC() /*595*/].f_11.f_58 == 0)
			{
				func_219(3374.661f, 5559.709f, 12.3726f, 138.7999f);
				func_219(3366.365f, 5569.449f, 13.9704f, 112.8f);
				func_219(3358.493f, 5581.463f, 16.1783f, 112.8f);
				func_219(3356.705f, 5595.363f, 15.4029f, 112.8f);
				func_219(3336.662f, 5552.357f, 19.491f, 249.6f);
				func_219(3336.791f, 5567.825f, 20.432f, 249.6f);
				func_219(3335.259f, 5599.046f, 22.4606f, 249.6f);
				func_219(3336.811f, 5613.029f, 22.2159f, 249.6f);
				func_219(3354.696f, 5609.699f, 15.9453f, 111.3999f);
				func_219(3354.006f, 5624.206f, 16.018f, 111.3999f);
			}
			else
			{
				func_219(3372.053f, 5506.134f, 20.8174f, 99.5999f);
				func_219(3374.923f, 5520.177f, 20.3207f, 86f);
				func_219(3350.643f, 5490.432f, 18.8423f, 139.9997f);
				func_219(3364.189f, 5502.98f, 19.648f, 125.7999f);
				func_219(3354.101f, 5484.773f, 19.619f, 116.399f);
				func_219(3365.919f, 5519.949f, 18.8008f, 102.9988f);
				func_219(3341.889f, 5506.809f, 19.584f, 161.199f);
				func_219(3338.581f, 5497.709f, 19.376f, 161.199f);
				func_219(3335.674f, 5489.348f, 19.542f, 161.199f);
				func_219(3332.019f, 5479.563f, 19.738f, 150.998f);
				func_219(3327.404f, 5470.857f, 19.302f, 159.398f);
				func_219(3323.903f, 5461.49f, 18.492f, 156.398f);
				func_219(3320.016f, 5452.957f, 17.834f, 153.198f);
				func_219(3315.782f, 5444.61f, 17.115f, 150.798f);
				func_219(3335.451f, 5455.723f, 18.2323f, 162.1979f);
				func_219(3338.788f, 5464.803f, 18.8631f, 163.7977f);
				func_219(3362.476f, 5488.211f, 20.4432f, 108.5979f);
				func_219(3371.259f, 5491.274f, 21.5286f, 104.9989f);
				func_219(3342.201f, 5517.014f, 19.642f, 170.199f);
				func_219(3343.267f, 5526.085f, 18.902f, 175.598f);
				func_219(3343.531f, 5536.075f, 18.217f, 178.598f);
				func_219(3357.257f, 5496.71f, 18.9729f, 132.5977f);
				func_219(3342.346f, 5473.345f, 19.1235f, 159.3987f);
				func_219(3347.236f, 5480.447f, 19.4672f, 131.199f);
				func_219(3357.623f, 5516.9f, 16.9016f, 118.7991f);
				func_219(3361.366f, 5545.886f, 15.5532f, 118.7991f);
				func_219(3352.612f, 5541.013f, 16.3238f, 131.999f);
				func_219(3343.349f, 5546.494f, 17.8738f, 173.9988f);
			}
			break;
		
		case 93:
			if (Global_1630317[unk_0x460153A63B9477BC() /*595*/].f_11.f_58 == 0)
			{
				func_219(43.848f, 6845.657f, 13.379f, 247.2f);
				func_219(50.379f, 6861.146f, 15.105f, 247.2f);
				func_219(32.501f, 6871.777f, 13.3283f, 247.2f);
				func_219(38.437f, 6885.796f, 13.3627f, 247.2f);
				func_219(55.806f, 6875.081f, 14.824f, 247.2f);
				func_219(11.616f, 6877.079f, 11.466f, 247.2f);
				func_219(18.954f, 6891.633f, 11.37f, 247.2f);
				func_219(26.68f, 6907.587f, 11.869f, 247.2f);
				func_219(7.479f, 6907.895f, 12.024f, 247.2f);
				func_219(44.9981f, 6901.352f, 11.9426f, 247.2f);
			}
			else
			{
				func_219(35.591f, 6836.608f, 13.288f, 274.4f);
				func_219(36.028f, 6830.135f, 13.801f, 270.8f);
				func_219(35.114f, 6823.884f, 14.527f, 260.8f);
				func_219(48.779f, 6838.693f, 14.337f, 273.6f);
				func_219(56.738f, 6821.8f, 15.244f, 244.8f);
				func_219(48.377f, 6825.895f, 14.656f, 249.8f);
				func_219(49.11f, 6831.439f, 13.991f, 274.8f);
				func_219(53.544f, 6818.275f, 16.342f, 243f);
				func_219(46.162f, 6821.945f, 15.483f, 249.8f);
				func_219(60.129f, 6836.8f, 15.605f, 269.6f);
				func_219(40.88f, 6802.952f, 20.113f, 242.6f);
				func_219(48.203f, 6799.134f, 20.897f, 244.4f);
				func_219(70.449f, 6809.271f, 16.846f, 243f);
				func_219(61.436f, 6814.266f, 16.71f, 244.2f);
				func_219(56.142f, 6793.458f, 19.806f, 242.6f);
				func_219(65.759f, 6791.12f, 18.433f, 276.4f);
				func_219(77.305f, 6805.391f, 18.558f, 245.6f);
				func_219(85.893f, 6800.243f, 18.535f, 249.8f);
				func_219(56.85f, 6780.582f, 18.822f, 297.999f);
				func_219(65.636f, 6784.669f, 18.789f, 293.799f);
				func_219(74.121f, 6788.498f, 18.739f, 293.799f);
				func_219(97.779f, 6796.32f, 19.02f, 276.799f);
				func_219(106.76f, 6796.983f, 18.914f, 272.599f);
				func_219(112.387f, 6802.858f, 18.994f, 210.599f);
				func_219(117.58f, 6802.644f, 18.663f, 209.399f);
				func_219(122.481f, 6802.693f, 18.468f, 209.399f);
				func_219(127.182f, 6802.686f, 18.218f, 209.399f);
				func_219(132.429f, 6801.882f, 17.949f, 209.399f);
			}
			break;
		
		case 94:
			if (Global_1630317[unk_0x460153A63B9477BC() /*595*/].f_11.f_58 == 0)
			{
				func_219(-2213.552f, 2283.726f, 31.7464f, 293.7993f);
				func_219(-2196.71f, 2290.824f, 32.0819f, 293.7993f);
				func_219(-2232.397f, 2274.252f, 31.602f, 296.7993f);
				func_219(-2180.471f, 2296.206f, 32.9612f, 287.5992f);
				func_219(-2180.87f, 2419.649f, 0.2324f, 147.7987f);
				func_219(-2180.166f, 2436.91f, 0.2325f, 144.5987f);
				func_219(-2185.271f, 2457.022f, 0.2062f, 160.1985f);
				func_219(-2329.465f, 2393.603f, 2.5699f, 289.7982f);
				func_219(-2328.978f, 2380.406f, 2.7911f, 289.7982f);
				func_219(-2333.665f, 2366.641f, 3.4939f, 289.7982f);
			}
			else
			{
				func_219(-2239.671f, 2390.292f, 10.756f, 189.2002f);
				func_219(-2217.413f, 2392.471f, 12.2202f, 189.2002f);
				func_219(-2238.863f, 2381.56f, 13.1388f, 185.2003f);
				func_219(-2215.695f, 2383.035f, 14.9809f, 189.4004f);
				func_219(-2238.044f, 2372.67f, 15.07f, 187.4004f);
				func_219(-2215.96f, 2374.251f, 17.0939f, 187.4004f);
				func_219(-2237.494f, 2364.467f, 15.3155f, 186.2004f);
				func_219(-2216.857f, 2365.651f, 18.9029f, 173.0005f);
				func_219(-2218.526f, 2357.065f, 20.7893f, 179.0004f);
				func_219(-2237.625f, 2348.108f, 20.9097f, 179.0004f);
				func_219(-2218.447f, 2348.733f, 22.9621f, 179.0004f);
				func_219(-2238.18f, 2339.141f, 22.5602f, 174.8003f);
				func_219(-2218.771f, 2340.131f, 25.5237f, 177.2002f);
				func_219(-2238.998f, 2330.958f, 25.7263f, 175.8005f);
				func_219(-2219.221f, 2331.934f, 28.5604f, 177.8006f);
				func_219(-2219.077f, 2324.066f, 30.9043f, 198.8006f);
				func_219(-2239.413f, 2322.913f, 28.0647f, 177.8008f);
				func_219(-2240.014f, 2313.951f, 29.5314f, 170.6008f);
				func_219(-2241.543f, 2305.819f, 30.7136f, 163.4006f);
				func_219(-2244.904f, 2298.388f, 31.4166f, 148.2005f);
				func_219(-2249.31f, 2290.892f, 31.5742f, 139.2004f);
				func_219(-2211.896f, 2319.581f, 31.7538f, 259.4002f);
				func_219(-2203.961f, 2320.016f, 31.9895f, 271.4001f);
				func_219(-2255.106f, 2285.415f, 31.617f, 130.3999f);
				func_219(-2196.17f, 2320.341f, 32.2704f, 270.6003f);
				func_219(-2261.335f, 2280.203f, 31.6562f, 130.0002f);
				func_219(-2268.447f, 2275.528f, 31.7095f, 124.4001f);
				func_219(-2188.258f, 2319.985f, 32.5649f, 267.3998f);
			}
			break;
		
		case 95:
			if (Global_1630317[unk_0x460153A63B9477BC() /*595*/].f_11.f_58 == 0)
			{
				func_219(4.0332f, 3378.618f, 41.0822f, 247.1989f);
				func_219(38.819f, 3321.2f, 37.0283f, 203.999f);
				func_219(26.877f, 3309.062f, 37.93f, 191.9991f);
				func_219(15.6727f, 3297.846f, 39.0535f, 191.9991f);
				func_219(-24.2865f, 3367.527f, 41.4783f, 264.399f);
				func_219(-23.1279f, 3352.254f, 40.52f, 280.399f);
				func_219(-25.5802f, 3337.243f, 40.7142f, 320.1988f);
				func_219(97.4844f, 3335.385f, 34.6164f, 7.9981f);
				func_219(20.409f, 3370.839f, 38.8393f, 235.799f);
				func_219(48.457f, 3336.586f, 35.8912f, 270.3979f);
			}
			else
			{
				func_219(25.9869f, 3349.706f, 36.0366f, 273.9994f);
				func_219(25.0176f, 3356.915f, 36.4258f, 276.9998f);
				func_219(36.2443f, 3351.358f, 36.2386f, 272.5997f);
				func_219(35.9352f, 3358.816f, 37.0033f, 276.7998f);
				func_219(25.9651f, 3342.673f, 36.2157f, 270.7997f);
				func_219(30.027f, 3292.351f, 38.604f, 140.199f);
				func_219(49.1614f, 3358.589f, 35.9759f, 263.5988f);
				func_219(48.288f, 3352.494f, 35.5841f, 261.1988f);
				func_219(23.897f, 3283.152f, 39.381f, 145.399f);
				func_219(60.9182f, 3356.21f, 35.8814f, 255.3988f);
				func_219(18.723f, 3274.025f, 40.054f, 155.799f);
				func_219(59.0177f, 3350.004f, 35.3204f, 255.7989f);
				func_219(36.958f, 3298.847f, 38.001f, 127.799f);
				func_219(54.165f, 3311.582f, 36.517f, 303.799f);
				func_219(61.607f, 3317.105f, 35.916f, 306.999f);
				func_219(68.994f, 3323.129f, 35.364f, 308.199f);
				func_219(76.266f, 3329.467f, 34.805f, 311.399f);
				func_219(82.757f, 3335.915f, 34.344f, 316.598f);
				func_219(46.5977f, 3306.196f, 37.1628f, 304.9976f);
				func_219(14.664f, 3263.688f, 40.931f, 160.398f);
				func_219(50.8234f, 3324.118f, 36.2129f, 305.1976f);
				func_219(11.7852f, 3256.101f, 41.7031f, 159.198f);
				func_219(89.575f, 3343.311f, 33.932f, 318.398f);
				func_219(58.4154f, 3329.423f, 35.6197f, 305.5979f);
				func_219(65.3201f, 3334.253f, 35.1903f, 306.5977f);
				func_219(72.1063f, 3339.793f, 34.8449f, 308.5977f);
				func_219(95.6614f, 3349.917f, 33.696f, 316.1977f);
				func_219(85.4387f, 3353.183f, 33.8047f, 317.9978f);
			}
			break;
		
		case 96:
			if (Global_1630317[unk_0x460153A63B9477BC() /*595*/].f_11.f_58 == 0)
			{
				func_219(2135.708f, 1757.503f, 102.073f, 40.999f);
				func_219(2148.674f, 1764.557f, 102.75f, 40.999f);
				func_219(2160.511f, 1771.173f, 104.149f, 40.999f);
				func_219(2172.842f, 1777.391f, 105.369f, 40.999f);
				func_219(2127.938f, 1736.353f, 100.835f, 222.199f);
				func_219(2141.682f, 1739.865f, 99.833f, 222.199f);
				func_219(2152.786f, 1747.776f, 99.785f, 222.199f);
				func_219(2166.356f, 1754.682f, 100.07f, 220.399f);
				func_219(2090.66f, 1701.805f, 101.681f, 243.199f);
				func_219(2066.149f, 1716.735f, 102.112f, 228.2f);
			}
			else
			{
				func_219(2073.044f, 1725.935f, 102.5096f, 225.2f);
				func_219(2077.24f, 1730.299f, 102.5247f, 225.2f);
				func_219(2081.68f, 1734.742f, 102.5588f, 225.2f);
				func_219(2086.052f, 1739.045f, 102.6618f, 225.2f);
				func_219(2090.55f, 1743.53f, 102.6058f, 225.2f);
				func_219(2095.295f, 1748.274f, 102.3022f, 225.2f);
				func_219(2101.779f, 1721.807f, 101.927f, 225.2f);
				func_219(2107.08f, 1727.001f, 101.932f, 225.2f);
				func_219(2095.867f, 1716.475f, 101.925f, 225.2f);
				func_219(2112.387f, 1732.492f, 101.849f, 225.2f);
				func_219(2089.718f, 1710.779f, 101.978f, 225.2f);
				func_219(2111.639f, 1717.132f, 100.855f, 225.2f);
				func_219(2117.297f, 1722.655f, 100.704f, 225.2f);
				func_219(2105.821f, 1711.672f, 101.065f, 225.2f);
				func_219(2098.759f, 1704.866f, 101.209f, 225.2f);
				func_219(2121.208f, 1713.145f, 99.65f, 225.2f);
				func_219(2115.34f, 1707.542f, 99.829f, 225.2f);
				func_219(2109.211f, 1702.247f, 100.079f, 225.2f);
				func_219(2124.167f, 1704.036f, 98.584f, 225.2f);
				func_219(2118.181f, 1698.253f, 98.645f, 225.2f);
				func_219(2127.253f, 1694.878f, 97.078f, 225.2f);
				func_219(2117.786f, 1738.219f, 101.839f, 225.2f);
				func_219(2122.34f, 1728.011f, 100.627f, 225.2f);
				func_219(2126.288f, 1718.542f, 99.501f, 225.2f);
				func_219(2129.762f, 1709.847f, 98.352f, 225.2f);
				func_219(2132.765f, 1700.777f, 96.999f, 225.2f);
				func_219(2120.399f, 1689.165f, 97.388f, 225.2f);
				func_219(2098.994f, 1747.929f, 102.2403f, 225.2f);
			}
			break;
		
		case 97:
			if (Global_1630317[unk_0x460153A63B9477BC() /*595*/].f_11.f_58 == 0)
			{
				func_219(1871.691f, 358.5369f, 162.1067f, 153.1979f);
				func_219(1858.966f, 351.2935f, 161.7614f, 166.598f);
				func_219(1873.611f, 342.6637f, 161.6936f, 142.998f);
				func_219(1887.645f, 343.1557f, 162.1659f, 138.5979f);
				func_219(1888.644f, 328.0839f, 161.7489f, 139.398f);
				func_219(1898.596f, 315.2232f, 161.4418f, 173.7979f);
				func_219(1896.729f, 266.5388f, 161.1619f, 113.5978f);
				func_219(1900.167f, 281.3884f, 161.7807f, 115.197f);
				func_219(1856.286f, 294.624f, 161.442f, 167.9966f);
				func_219(1868.622f, 309.7907f, 162.6084f, 155.1968f);
			}
			else
			{
				func_219(1856.378f, 255.9146f, 162.7158f, 147.6202f);
				func_219(1837.279f, 227.3696f, 165.2592f, 164.3995f);
				func_219(1835.192f, 219.3931f, 167.5468f, 169.9994f);
				func_219(1833.557f, 211.859f, 169.864f, 169.9994f);
				func_219(1839.534f, 194.4053f, 171.3841f, 172.9989f);
				func_219(1838.289f, 185.8157f, 171.2585f, 174.1989f);
				func_219(1837.478f, 177.0607f, 170.7063f, 174.1989f);
				func_219(1840.463f, 202.6959f, 170.8702f, 174.1989f);
				func_219(1836.296f, 168.7307f, 170.5786f, 174.1989f);
				func_219(1835.412f, 159.3162f, 170.4163f, 171.1989f);
				func_219(1826.91f, 214.9648f, 172.2502f, 18.7986f);
				func_219(1823.805f, 223.0288f, 172.0794f, 21.7986f);
				func_219(1820.599f, 231.144f, 172.2987f, 21.7986f);
				func_219(1817.245f, 239.1232f, 172.0878f, 21.7986f);
				func_219(1814.089f, 247.0423f, 171.7386f, 24.9986f);
				func_219(1810.879f, 255.6553f, 171.7517f, 19.3986f);
				func_219(1807.729f, 265.4899f, 172.2307f, 15.1986f);
				func_219(1823.147f, 197.3122f, 172.235f, 192.3984f);
				func_219(1824.641f, 184.4241f, 171.5948f, 183.3985f);
				func_219(1825.019f, 171.2314f, 170.5843f, 183.3985f);
				func_219(1824.748f, 162.8998f, 170.4961f, 173.1985f);
				func_219(1817.345f, 214.6964f, 172.5223f, 203.9982f);
				func_219(1813.466f, 222.3717f, 172.3316f, 200.9982f);
				func_219(1809.114f, 230.8225f, 172.346f, 205.1983f);
				func_219(1805.594f, 239.3896f, 172.0033f, 197.9984f);
				func_219(1802.515f, 247.4269f, 171.8964f, 197.9984f);
				func_219(1833.982f, 150.4025f, 170.411f, 163.7985f);
				func_219(1823.079f, 154.5105f, 170.8194f, 163.7985f);
			}
			break;
		
		case 123:
		case 124:
		case 125:
			func_205(896.357f, -3.23695f, 77.7645f, 147.3987f, iParam1, 0);
			func_205(899.759f, -5.54885f, 77.7645f, 147.3987f, iParam1, 0);
			func_205(903.021f, -7.62495f, 77.7645f, 147.3987f, iParam1, 0);
			func_205(906.474f, -9.70314f, 77.7645f, 147.3987f, iParam1, 0);
			func_205(909.884f, -11.888f, 77.7645f, 147.3987f, iParam1, 0);
			func_205(913.209f, -14.0965f, 77.7645f, 147.3987f, iParam1, 0);
			func_205(879.578f, 7.26725f, 77.7646f, 147.3987f, iParam1, 0);
			func_205(876.642f, 9.05555f, 77.7646f, 147.3987f, iParam1, 0);
			func_205(873.534f, 10.8622f, 77.7646f, 147.3987f, iParam1, 0);
			func_205(869.685f, -7.55887f, 77.7646f, 237.3985f, iParam1, 0);
			func_205(867.866f, -10.464f, 77.7646f, 237.3985f, iParam1, 0);
			func_205(866.077f, -13.4579f, 77.7646f, 237.3985f, iParam1, 0);
			func_205(864.322f, -16.4335f, 77.7646f, 237.3985f, iParam1, 0);
			func_205(862.534f, -19.2652f, 77.7644f, 237.3985f, iParam1, 0);
			func_205(887.524f, -18.7251f, 77.7647f, 237.3985f, iParam1, 0);
			func_205(885.594f, -21.7041f, 77.7647f, 237.3985f, iParam1, 0);
			func_205(883.691f, -24.7685f, 77.7647f, 237.3985f, iParam1, 0);
			func_205(881.827f, -27.7084f, 77.7644f, 237.3985f, iParam1, 0);
			func_205(880.013f, -30.5612f, 77.7644f, 237.3985f, iParam1, 0);
			func_205(884.931f, -17.2169f, 77.7646f, 57.5983f, iParam1, 0);
			func_205(883.043f, -20.1063f, 77.7646f, 57.5983f, iParam1, 0);
			func_205(881.118f, -22.9962f, 77.7644f, 57.5983f, iParam1, 0);
			func_205(879.345f, -25.9389f, 77.7644f, 57.5983f, iParam1, 0);
			func_205(877.631f, -28.8543f, 77.7644f, 57.5983f, iParam1, 0);
			func_205(903.231f, -28.6965f, 77.7647f, 57.5983f, iParam1, 0);
			func_205(901.368f, -31.6316f, 77.7647f, 57.5983f, iParam1, 0);
			func_205(899.552f, -34.4844f, 77.7647f, 57.5983f, iParam1, 0);
			func_205(897.669f, -37.4419f, 77.7647f, 57.5983f, iParam1, 0);
			func_205(895.831f, -40.3309f, 77.7647f, 57.5983f, iParam1, 0);
			func_205(932.842f, -25.6631f, 77.7647f, 147.798f, iParam1, 0);
			func_205(935.693f, -27.516f, 77.7647f, 147.798f, iParam1, 0);
			func_205(938.593f, -29.5809f, 77.7647f, 147.798f, iParam1, 0);
			break;
		
		default:
			break;
	}
}

void func_205(struct<3> Param0, float fParam1, int iParam2, bool bParam3)
{
	struct<2> Var0;
	struct<2> Var1;
	float fVar2;
	struct<3> Var3;
	struct<3> Var4;
	
	if (!iParam2 == 0)
	{
		func_104(iParam2, &Var0, &Var1, 1086324736, 1080033280, 1077936128);
		fVar2 = (Var1.f_1 - Var0.f_1);
		if (bParam3)
		{
			fVar2 = (fVar2 * -1f);
		}
		fVar2 = (fVar2 * 0.5f);
		Var3 = { 0f, fVar2, 0f };
		Var4 = { unk_0x1BAE5C94E38E44FE(Param0, fParam1, Var3) };
		func_219(Var4, fParam1);
	}
	else
	{
		func_219(Param0, fParam1);
	}
}

void func_206(int iParam0)
{
	switch (iParam0)
	{
		case 83:
			func_219(-1133.454f, -3371.672f, 12.945f, 329.799f);
			func_219(-1119.748f, -3379.991f, 12.945f, 329.799f);
			func_219(-1147.602f, -3363.505f, 12.945f, 329.799f);
			func_219(-1161.988f, -3354.852f, 12.945f, 329.799f);
			func_219(-1116.563f, -3358.99f, 12.945f, 329.799f);
			func_219(-1131.23f, -3350.104f, 12.945f, 329.799f);
			func_219(-1145.252f, -3341.608f, 12.945f, 329.799f);
			func_219(-1115.202f, -3339.265f, 12.945f, 329.799f);
			func_219(-1129.559f, -3330.697f, 12.945f, 329.799f);
			func_219(-1114.664f, -3320.954f, 12.945f, 329.799f);
			func_219(-1199.923f, -3369.502f, 12.945f, 350.399f);
			func_219(-1212.069f, -3363.568f, 12.945f, 350.399f);
			func_219(-1223.637f, -3356.694f, 12.945f, 350.399f);
			func_219(-1102.284f, -3420.613f, 12.945f, 354.599f);
			func_219(-1091.131f, -3427.396f, 12.945f, 354.599f);
			func_219(-1079.372f, -3434.306f, 12.945f, 354.599f);
			func_219(-1067.498f, -3441.878f, 13.114f, 354.599f);
			func_219(-1055.714f, -3448.819f, 12.977f, 354.599f);
			func_219(-1043.37f, -3455.796f, 13.146f, 354.599f);
			func_219(-1017.023f, -3382.777f, 12.8401f, 330.6f);
			func_219(-1010.608f, -3386.103f, 12.8401f, 330.6f);
			func_219(-1004.658f, -3389.823f, 12.8401f, 330.6f);
			func_219(-998.3798f, -3393.644f, 12.8401f, 330.6f);
			func_219(-991.5242f, -3397.297f, 12.8401f, 330.6f);
			func_219(-985.0826f, -3401.247f, 12.8401f, 330.6f);
			func_219(-978.2733f, -3405.031f, 12.8401f, 330.6f);
			func_219(-971.724f, -3409.109f, 12.8401f, 330.6f);
			func_219(-964.4719f, -3413.202f, 13.1463f, 330.6f);
			func_219(-1022.94f, -3392.372f, 12.8401f, 330.6f);
			func_219(-1016.219f, -3395.82f, 12.8401f, 330.6f);
			func_219(-1009.873f, -3399.143f, 12.8401f, 330.6f);
			func_219(-1003.436f, -3402.982f, 12.8401f, 330.6f);
			func_219(-997.0872f, -3406.928f, 12.8401f, 330.6f);
			func_219(-990.2305f, -3410.548f, 12.8401f, 330.6f);
			func_219(-983.4429f, -3414.093f, 12.8401f, 330.6f);
			func_219(-976.8809f, -3417.846f, 12.8401f, 330.6f);
			func_219(-969.4039f, -3421.727f, 13.1463f, 330.6f);
			func_219(-1028.251f, -3401.834f, 12.8401f, 330.6f);
			func_219(-1021.631f, -3405.433f, 12.8401f, 330.6f);
			func_219(-1015.209f, -3408.563f, 12.8401f, 330.6f);
			func_219(-1008.81f, -3412.484f, 12.8401f, 330.6f);
			func_219(-1002.277f, -3415.987f, 12.8401f, 330.6f);
			func_219(-995.7023f, -3419.97f, 12.8401f, 330.6f);
			func_219(-989.1453f, -3423.988f, 12.8401f, 330.6f);
			func_219(-982.6298f, -3427.981f, 12.8401f, 330.6f);
			func_219(-974.9305f, -3431.833f, 13.1463f, 330.6f);
			break;
		
		case 84:
			func_219(-1356.991f, -3242.228f, 12.945f, 330f);
			func_219(-1369.313f, -3234.758f, 12.945f, 330f);
			func_219(-1381.751f, -3227.408f, 12.945f, 330f);
			func_219(-1394.302f, -3220.021f, 12.945f, 330f);
			func_219(-1354.339f, -3223.129f, 12.945f, 330f);
			func_219(-1366.302f, -3215.809f, 12.945f, 330f);
			func_219(-1378.492f, -3208.645f, 12.945f, 330f);
			func_219(-1350.322f, -3203.405f, 12.945f, 330f);
			func_219(-1362.684f, -3196.451f, 12.945f, 330f);
			func_219(-1347.089f, -3182.69f, 12.945f, 330f);
			func_219(-1452.642f, -3222.367f, 12.945f, 347.799f);
			func_219(-1464.229f, -3215.108f, 12.945f, 347.799f);
			func_219(-1476.133f, -3207.652f, 12.945f, 347.799f);
			func_219(-1488.295f, -3200.033f, 12.945f, 347.799f);
			func_219(-1336.877f, -3272.344f, 12.945f, 8.199f);
			func_219(-1323.381f, -3279.614f, 12.945f, 8.199f);
			func_219(-1309.671f, -3287.749f, 12.945f, 8.199f);
			func_219(-1296.963f, -3294.511f, 12.945f, 8.199f);
			func_219(-1501.978f, -3193.849f, 12.945f, 350.599f);
			func_219(-1344.716f, -3288.333f, 12.9445f, 331.2f);
			func_219(-1338.141f, -3290.335f, 12.9445f, 331.2f);
			func_219(-1331.473f, -3294.178f, 12.9445f, 331.2f);
			func_219(-1324.921f, -3297.998f, 12.9445f, 331.2f);
			func_219(-1318.129f, -3301.957f, 12.9445f, 331.2f);
			func_219(-1350.466f, -3294.226f, 12.9445f, 331.2f);
			func_219(-1343.482f, -3297.576f, 12.9445f, 331.2f);
			func_219(-1336.398f, -3302.456f, 12.9445f, 331.2f);
			func_219(-1329.82f, -3306.82f, 12.945f, 331.2f);
			func_219(-1322.761f, -3310.353f, 12.945f, 331.2f);
			func_219(-1316.587f, -3314.556f, 12.945f, 331.2f);
			func_219(-1326.538f, -3318.499f, 12.945f, 331.2f);
			func_219(-1335.74f, -3313.678f, 12.945f, 331.2f);
			func_219(-1350.848f, -3302.619f, 12.9446f, 331.2f);
			func_219(-1357.961f, -3306.886f, 12.945f, 331.2f);
			func_219(-1335.202f, -3322.428f, 12.9452f, 331.2f);
			func_219(-1351.401f, -3311.566f, 12.9452f, 331.2f);
			func_219(-1344.255f, -3305.965f, 12.9451f, 331.2f);
			func_219(-1299.832f, -3305.573f, 12.945f, 331.2f);
			func_219(-1293.414f, -3309.413f, 12.945f, 331.2f);
			func_219(-1286.835f, -3313.157f, 12.945f, 331.2f);
			func_219(-1303.988f, -3313.1f, 12.945f, 331.2f);
			func_219(-1297.402f, -3316.699f, 12.945f, 331.2f);
			func_219(-1290.969f, -3320.519f, 12.945f, 331.2f);
			func_219(-1308.27f, -3320.612f, 12.945f, 331.2f);
			func_219(-1301.968f, -3324.714f, 12.945f, 331.2f);
			func_219(-1295.483f, -3328.422f, 12.945f, 331.2f);
			break;
		
		case 85:
			func_219(-2039.992f, 3132.191f, 31.81f, 149.399f);
			func_219(-2025.075f, 3128.63f, 31.81f, 197.599f);
			func_219(-2049.589f, 3142.464f, 31.81f, 109.199f);
			func_219(-2088.648f, 3081.327f, 31.81f, 150.599f);
			func_219(-2070.669f, 3111.575f, 31.81f, 123.399f);
			func_219(-2053.385f, 3109.703f, 31.81f, 150.599f);
			func_219(-2044.448f, 3094.012f, 31.81f, 181.799f);
			func_219(-2071.825f, 3093.477f, 31.81f, 150.599f);
			func_219(-2060.579f, 3085.924f, 31.81f, 150.599f);
			func_219(-2062.712f, 3066.073f, 31.81f, 150.599f);
			func_219(-2094.385f, 3190.445f, 31.81f, 117.799f);
			func_219(-2083.056f, 3182.885f, 31.81f, 117.799f);
			func_219(-2071.578f, 3175.554f, 31.81f, 117.799f);
			func_219(-2120.249f, 3173.97f, 31.81f, 25.199f);
			func_219(-2067.547f, 3146.325f, 31.81f, 14.998f);
			func_219(-2080.506f, 3154.591f, 31.81f, 15.798f);
			func_219(-2093.278f, 3159.793f, 31.81f, 14.798f);
			func_219(-2106.614f, 3167.605f, 31.81f, 21.198f);
			func_219(-2106.347f, 3196.902f, 31.81f, 117.799f);
			func_219(-2024.425f, 3102.707f, 31.8103f, 150.7997f);
			func_219(-2018.074f, 3099.056f, 31.8103f, 150.7997f);
			func_219(-2009.032f, 3094.171f, 31.8103f, 150.7997f);
			func_219(-2002.923f, 3090.669f, 31.8103f, 150.7997f);
			func_219(-1996.542f, 3087.201f, 31.8103f, 150.7997f);
			func_219(-1990.232f, 3083.534f, 31.8103f, 150.7997f);
			func_219(-1983.518f, 3080.033f, 31.8103f, 150.7997f);
			func_219(-2029.16f, 3094.357f, 31.8103f, 150.7997f);
			func_219(-2022.431f, 3090.703f, 31.8103f, 150.7997f);
			func_219(-2013.702f, 3086.015f, 31.8103f, 150.7997f);
			func_219(-2007.67f, 3082.42f, 31.8103f, 150.7997f);
			func_219(-2001.211f, 3078.569f, 31.8103f, 150.7997f);
			func_219(-1994.644f, 3074.654f, 31.8103f, 150.7997f);
			func_219(-1987.934f, 3070.654f, 31.8103f, 150.7997f);
			func_219(-2033.776f, 3086.031f, 31.8103f, 150.7997f);
			func_219(-2026.929f, 3082.094f, 31.8103f, 150.7997f);
			func_219(-2018.663f, 3077.341f, 31.8103f, 150.7997f);
			func_219(-2012.345f, 3073.707f, 31.8103f, 150.7997f);
			func_219(-2006.052f, 3070.089f, 31.8103f, 150.7997f);
			func_219(-1999.169f, 3066.132f, 31.8103f, 150.7997f);
			func_219(-1992.542f, 3062.257f, 31.8103f, 150.7997f);
			func_219(-2038.545f, 3077.344f, 31.8103f, 150.7997f);
			func_219(-2031.587f, 3073.344f, 31.8103f, 150.7997f);
			func_219(-2021.909f, 3067.715f, 31.8103f, 150.7997f);
			func_219(-2012.886f, 3063.219f, 31.8103f, 150.7997f);
			func_219(-2003.481f, 3057.141f, 31.8103f, 150.7997f);
			func_219(-1996.618f, 3053.195f, 31.8103f, 150.7997f);
			break;
		
		case 86:
			func_219(-1885.187f, 3095.344f, 31.81f, 150.2f);
			func_219(-1898.637f, 3072.816f, 31.811f, 150.2f);
			func_219(-1886.469f, 3065.78f, 31.811f, 150.2f);
			func_219(-1874.621f, 3058.437f, 31.81f, 150.2f);
			func_219(-1862.818f, 3051.244f, 31.81f, 150.2f);
			func_219(-1915.317f, 3041.652f, 31.811f, 150.2f);
			func_219(-1896.724f, 2997.848f, 31.81f, 150.2f);
			func_219(-1932.975f, 3011.781f, 31.81f, 150.2f);
			func_219(-1875.668f, 3034.438f, 31.811f, 150.2f);
			func_219(-1886.144f, 3016.285f, 31.81f, 150.2f);
			func_219(-1913.706f, 3104.196f, 31.81f, 118.599f);
			func_219(-1925.44f, 3112.236f, 31.81f, 118.599f);
			func_219(-1938.08f, 3119.383f, 31.81f, 118.599f);
			func_219(-1927.822f, 3072.679f, 31.81f, 13.399f);
			func_219(-1940.575f, 3079.031f, 31.81f, 13.399f);
			func_219(-1953.344f, 3084.888f, 31.81f, 13.399f);
			func_219(-1965.91f, 3091.929f, 31.81f, 13.399f);
			func_219(-1978.86f, 3100.029f, 31.81f, 13.399f);
			func_219(-1950.928f, 3126.457f, 31.81f, 118.999f);
			func_219(-1975.282f, 3083.046f, 31.8103f, 150.1997f);
			func_219(-1969.362f, 3079.909f, 31.8103f, 150.1997f);
			func_219(-1963.673f, 3076.887f, 31.8103f, 150.1997f);
			func_219(-1958.524f, 3073.899f, 31.8103f, 150.1997f);
			func_219(-1979.828f, 3074.704f, 31.8103f, 150.1997f);
			func_219(-1973.901f, 3071.418f, 31.8103f, 150.1997f);
			func_219(-1967.917f, 3068.089f, 31.8103f, 150.1997f);
			func_219(-1949.916f, 3068.72f, 31.8103f, 150.1997f);
			func_219(-1961.934f, 3064.6f, 31.8103f, 150.1997f);
			func_219(-1984.332f, 3067.03f, 31.8103f, 150.1997f);
			func_219(-1978.182f, 3063.286f, 31.8103f, 150.1997f);
			func_219(-1972.061f, 3060.191f, 31.8103f, 150.1997f);
			func_219(-1952.61f, 3059.551f, 31.8103f, 150.1997f);
			func_219(-1956.958f, 3051.589f, 31.8103f, 150.1997f);
			func_219(-1988.778f, 3059.135f, 31.8103f, 150.1997f);
			func_219(-1982.174f, 3055.591f, 31.8103f, 150.1997f);
			func_219(-1975.579f, 3051.898f, 31.8103f, 150.1997f);
			func_219(-1969.139f, 3048.28f, 31.8103f, 150.1997f);
			func_219(-1962.25f, 3044.256f, 31.8103f, 150.1997f);
			func_219(-1989.48f, 3050.467f, 31.8103f, 150.1997f);
			func_219(-1977.325f, 3043.786f, 31.8103f, 150.1997f);
			func_219(-1971.07f, 3040.306f, 31.8103f, 150.1997f);
			func_219(-1964.409f, 3037.118f, 31.8103f, 150.1997f);
			func_219(-1998.375f, 3042.349f, 31.8103f, 150.1997f);
			func_219(-1991.769f, 3038.47f, 31.8103f, 150.1997f);
			func_219(-1978.718f, 3035.164f, 31.8103f, 150.1997f);
			func_219(-1971.483f, 3031.316f, 31.8103f, 150.1997f);
			break;
		
		case 87:
			func_219(-2484.323f, 3249.294f, 31.828f, 151f);
			func_219(-2495.313f, 3255.746f, 31.828f, 151f);
			func_219(-2472.644f, 3242.684f, 31.828f, 151f);
			func_219(-2506.313f, 3262.27f, 31.823f, 151f);
			func_219(-2461.494f, 3235.93f, 31.828f, 151f);
			func_219(-2505.602f, 3238.049f, 31.828f, 151f);
			func_219(-2481.937f, 3224.8f, 31.828f, 151f);
			func_219(-2516.813f, 3244.266f, 31.823f, 151f);
			func_219(-2470.03f, 3217.899f, 31.828f, 151f);
			func_219(-2493.933f, 3231.308f, 31.828f, 151f);
			func_219(-2443.467f, 3227.753f, 31.828f, 175.8f);
			func_219(-2431.365f, 3220.9f, 31.828f, 175.8f);
			func_219(-2419.883f, 3214.708f, 31.828f, 175.8f);
			func_219(-2501.903f, 3272.865f, 31.822f, 123.999f);
			func_219(-2513.555f, 3280.176f, 31.817f, 123.999f);
			func_219(-2524.776f, 3287.276f, 31.973f, 123.999f);
			func_219(-2407.718f, 3208.055f, 31.827f, 176.199f);
			func_219(-2395.689f, 3201.125f, 31.827f, 176.199f);
			func_219(-2383.498f, 3194.211f, 31.833f, 176.199f);
			func_219(-2426.219f, 3238.211f, 31.8616f, 150.5996f);
			func_219(-2419.052f, 3233.866f, 31.8726f, 150.5996f);
			func_219(-2412.069f, 3229.854f, 31.8859f, 150.5996f);
			func_219(-2405.282f, 3225.809f, 31.8841f, 150.5996f);
			func_219(-2398.624f, 3222.135f, 31.9249f, 150.5996f);
			func_219(-2391.729f, 3218.229f, 31.9354f, 150.5996f);
			func_219(-2384.727f, 3214.524f, 31.9585f, 150.5996f);
			func_219(-2377.55f, 3210.461f, 31.9192f, 150.5996f);
			func_219(-2369.96f, 3205.835f, 31.8267f, 150.5996f);
			func_219(-2404.498f, 3235.728f, 31.8959f, 150.5996f);
			func_219(-2397.481f, 3232.375f, 31.9879f, 150.5996f);
			func_219(-2390.524f, 3228.125f, 31.9758f, 150.5996f);
			func_219(-2383.986f, 3223.995f, 31.986f, 150.5996f);
			func_219(-2377.176f, 3219.695f, 31.9615f, 150.5996f);
			func_219(-2370.524f, 3215.946f, 32.002f, 150.5996f);
			func_219(-2400.23f, 3243.846f, 31.8311f, 150.5996f);
			func_219(-2393.28f, 3240.281f, 32.0164f, 150.5996f);
			func_219(-2386.355f, 3236.819f, 32.0616f, 150.5996f);
			func_219(-2379.382f, 3232.74f, 32.0318f, 150.5996f);
			func_219(-2372.314f, 3229.196f, 32.0177f, 150.5996f);
			func_219(-2365.153f, 3225.732f, 32.0145f, 150.5996f);
			func_219(-2395.04f, 3252.644f, 31.8557f, 150.5996f);
			func_219(-2388.684f, 3249.092f, 32.0198f, 150.5996f);
			func_219(-2382.127f, 3245.045f, 32.0086f, 150.5996f);
			func_219(-2374.905f, 3240.938f, 32.0085f, 150.5996f);
			func_219(-2368.14f, 3237.328f, 32.0177f, 150.5996f);
			func_219(-2361.068f, 3233.396f, 31.9573f, 150.5996f);
			break;
		
		default:
			break;
	}
}

int func_207(int iParam0)
{
	switch (iParam0)
	{
		case joaat("microlight"):
		case joaat("havok"):
		case joaat("seabreeze"):
		case joaat("rogue"):
		case joaat("pyro"):
		case joaat("buzzard"):
		case joaat("frogger"):
		case joaat("maverick"):
		case joaat("supervolito"):
		case joaat("supervolito2"):
		case joaat("volatus"):
		case joaat("cuban800"):
		case joaat("besra"):
		case joaat("duster"):
		case joaat("stunt"):
		case joaat("velum"):
		case joaat("velum2"):
		case joaat("vestra"):
		case joaat("lazer"):
		case joaat("alphaz1"):
		case joaat("howard"):
		case joaat("molotok"):
		case joaat("nokota"):
		case joaat("starling"):
			return 1;
		
		default:
	}
	return 0;
}

void func_208(int iParam0)
{
	switch (iParam0)
	{
		case 83:
		case 84:
			func_219(-947.712f, -3367.704f, 12.944f, 60f);
			func_219(-904.692f, -3293.072f, 12.944f, 60f);
			func_219(-863.71f, -3221.978f, 12.944f, 60f);
			func_219(-966.418f, -3162.773f, 12.944f, 60f);
			func_219(-1007.435f, -3233.93f, 12.944f, 60f);
			func_219(-1050.455f, -3308.559f, 12.944f, 60f);
			func_219(-1145.673f, -3253.456f, 12.944f, 60f);
			func_219(-1098.386f, -3181.428f, 12.944f, 60f);
			func_219(-1060.474f, -3108.903f, 12.944f, 60f);
			func_219(-1155.391f, -3053.632f, 12.944f, 60f);
			func_219(-1196.114f, -3125.146f, 12.948f, 60f);
			func_219(-1235.552f, -3201.86f, 12.944f, 60f);
			func_219(-1344.446f, -3139.177f, 12.944f, 60f);
			func_219(-1301.308f, -3064.341f, 12.944f, 60f);
			func_219(-1260.135f, -2992.912f, 12.944f, 60f);
			func_219(-1364.244f, -2932.9f, 12.98f, 60f);
			func_219(-1405.284f, -3004.108f, 12.96f, 60f);
			func_219(-1448.29f, -3078.72f, 12.95f, 60f);
			func_219(-1535.732f, -3028.318f, 12.945f, 60f);
			func_219(-1492.639f, -2953.558f, 12.945f, 60f);
			func_219(-1451.506f, -2882.2f, 12.944f, 60f);
			func_219(-1553.927f, -2823.12f, 13.002f, 60f);
			func_219(-1595.097f, -2894.571f, 12.944f, 60f);
			func_219(-1637.836f, -2968.714f, 12.945f, 60f);
			func_219(-1740.971f, -2911.484f, 12.944f, 330f);
			func_219(-1696.293f, -2833.978f, 12.944f, 330f);
			func_219(-1651.502f, -2756.273f, 12.945f, 330f);
			func_219(-1588.258f, -2647.575f, 12.944f, 330f);
			func_219(-1536.862f, -2681.378f, 12.945f, 330f);
			func_219(-1529.025f, -2544.485f, 12.944f, 330f);
			break;
		
		case 85:
		case 86:
		case 87:
			func_219(-1970.422f, 2825.696f, 31.81f, 60.4f);
			func_219(-2033.307f, 2855.526f, 31.83f, 60.4f);
			func_219(-2091.018f, 2888.691f, 31.81f, 60.4f);
			func_219(-2206.717f, 2955.363f, 31.81f, 60.4f);
			func_219(-2268.817f, 2990.846f, 31.81f, 60.4f);
			func_219(-2324.039f, 3023.154f, 31.811f, 60.4f);
			func_219(-2435.806f, 3087.705f, 31.824f, 60.4f);
			func_219(-2543.753f, 3149.909f, 31.821f, 60.4f);
			func_219(-1944.848f, 2898.798f, 31.81f, 125.398f);
			func_219(-1978.705f, 2924.367f, 31.846f, 151.999f);
			func_219(-2064.849f, 2955.153f, 31.867f, 151.199f);
			func_219(-2106.165f, 2980.687f, 31.81f, 104.599f);
			func_219(-2302.367f, 3088.676f, 31.814f, 150.598f);
			func_219(-2152.113f, 2924.162f, 31.81f, 60.198f);
			func_219(-2488.232f, 3118.146f, 31.822f, 59.798f);
			func_219(-2277.922f, 3133.756f, 31.811f, 120.598f);
			func_219(-2604.776f, 3185.186f, 31.812f, 59.998f);
			func_219(-2608.107f, 3305.049f, 31.812f, 60.198f);
			func_219(-2718.936f, 3323.203f, 31.81f, 201.198f);
			func_219(-2658.718f, 3216.499f, 31.812f, 59.998f);
			func_219(-2380.372f, 3055.341f, 31.826f, 60.4f);
			func_219(-2790.616f, 3286.24f, 31.812f, 240.397f);
			func_219(-2770.946f, 3322.605f, 31.812f, 240.397f);
			func_219(-2678.805f, 3339.186f, 31.812f, 199.597f);
			func_219(-2743.882f, 3224.094f, 31.81f, 303.397f);
			func_219(-2701.354f, 3203.092f, 31.994f, 328.397f);
			func_219(-2249.816f, 2944.609f, 31.937f, 330.196f);
			func_219(-2586.579f, 3137.286f, 31.935f, 330.196f);
			func_219(-2134.76f, 2878.728f, 31.81f, 330.196f);
			func_219(-1949.075f, 2861.21f, 31.811f, 58.798f);
			break;
		
		default:
			break;
	}
}

int func_209(int iParam0)
{
	switch (iParam0)
	{
		case joaat("hydra"):
		case joaat("dodo"):
		case joaat("mammatus"):
		case joaat("annihilator"):
		case joaat("tula"):
		case joaat("hunter"):
		case joaat("mogul"):
		case joaat("cargobob"):
		case joaat("cargobob2"):
		case joaat("shamal"):
		case joaat("savage"):
		case joaat("luxor"):
		case joaat("luxor2"):
		case joaat("nimbus"):
		case joaat("swift"):
		case joaat("swift2"):
		case joaat("valkyrie"):
		case joaat("titan"):
		case joaat("skylift"):
		case joaat("miljet"):
		case joaat("bombushka"):
		case joaat("volatol"):
		case joaat("alkonost"):
			return 1;
		
		default:
	}
	return 0;
}

int func_210(int iParam0)
{
	if (!unk_0xAE06B9E39EBDE049(iParam0))
	{
		return 0;
	}
	if (vdist(unk_0x3E4D3CCC220BDFB1(iParam0, 1), -1308.118f, -2934.27f, 13.7545f) < 1000f)
	{
		return 1;
	}
	return 0;
}

int func_211(int iParam0)
{
	if (!unk_0xAE06B9E39EBDE049(iParam0))
	{
		return 0;
	}
	if (vdist(unk_0x3E4D3CCC220BDFB1(iParam0, 1), -2270.245f, 3127.913f, 31.8118f) < 1000f)
	{
		return 1;
	}
	return 0;
}

int func_212(int iParam0, int iParam1)
{
	if (iParam1 == -1)
	{
		switch (iParam0)
		{
			case 91:
			case 92:
			case 93:
			case 94:
			case 95:
			case 96:
			case 97:
			case 98:
			case 99:
			case 100:
			case 101:
			case 102:
				return 1;
				break;
		}
	}
	else if (iParam1 == 91)
	{
		switch (iParam0)
		{
			case 91:
			case 92:
			case 93:
			case 94:
			case 95:
			case 96:
				return 1;
				break;
		}
	}
	else if (iParam1 == 97)
	{
		switch (iParam0)
		{
			case 97:
			case 98:
			case 99:
			case 100:
			case 101:
			case 102:
				return 1;
				break;
			}
	}
	return 0;
}

int func_213(struct<2> Param0, var uParam1, var uParam2, var uParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	float fVar3;
	float fVar4;
	
	iVar2 = 0;
	fVar3 = 50f;
	iVar0 = 1;
	while (iVar0 <= 126)
	{
		if (iVar2 < *uParam2)
		{
			iVar1 = 0;
			iVar1 = 0;
			while (iVar1 < 2)
			{
				if (vdist(Param0, Param0.f_1, 0f, Global_1049924[iVar0 /*1951*/].f_3[iVar1 /*3*/], Global_1049924[iVar0 /*1951*/].f_3[iVar1 /*3*/].f_1, 0f) < fVar3)
				{
					(*uParam2)[iVar2] = iVar0;
					(*uParam3)[iVar2] = 0;
					iVar2++;
					iVar1 = 99;
				}
				iVar1++;
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 148)
	{
		fVar3 = 50f;
		if (iVar0 >= 83 && iVar0 <= 87)
		{
			if (func_190(iVar0))
			{
				fVar3 = 300f;
			}
			else
			{
				fVar3 = 0f;
			}
		}
		if (iVar0 >= 89 && iVar0 <= 97)
		{
			if (func_214(iVar0))
			{
				fVar3 = 75f;
			}
			else
			{
				fVar3 = 0f;
			}
		}
		if (iVar0 >= 123 && iVar0 <= 125)
		{
			fVar3 = 150f;
		}
		if (iVar2 < *uParam2)
		{
			fVar4 = vdist(Param0, Param0.f_1, 0f, Global_1678288.f_496[iVar0 /*3*/], Global_1678288.f_496[iVar0 /*3*/].f_1, 0f);
			if (fVar4 < fVar3)
			{
				(*uParam2)[iVar2] = iVar0;
				(*uParam3)[iVar2] = 1;
				iVar2++;
			}
		}
		iVar0++;
	}
	if (iVar2 > 0)
	{
		return 1;
	}
	return 0;
}

int func_214(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_215(iParam0);
	if (Global_1590682[unk_0x460153A63B9477BC() /*883*/].f_274.f_271 == iVar0)
	{
		return 1;
	}
	iVar1 = Global_1630317[unk_0x460153A63B9477BC() /*595*/].f_11;
	if (iVar1 != func_89())
	{
		if (Global_1590682[iVar1 /*883*/].f_274.f_271 == iVar0)
		{
			return 1;
		}
	}
	if (Global_2425869[unk_0x460153A63B9477BC() /*443*/].f_314.f_6 == iParam0)
	{
		return 1;
	}
	return 0;
}

int func_215(int iParam0)
{
	switch (iParam0)
	{
		case 89:
			return 1;
			break;
		
		case 90:
			return 2;
			break;
		
		case 91:
			return 3;
			break;
		
		case 92:
			return 4;
			break;
		
		case 93:
			return 5;
			break;
		
		case 94:
			return 6;
			break;
		
		case 95:
			return 7;
			break;
		
		case 96:
			return 8;
			break;
		
		case 97:
			return 9;
			break;
	}
	return 0;
}

int func_216(int iParam0)
{
	if ((unk_0x97AFEF6099069369(iParam0) || unk_0x0CE6C9C2E6F95026(iParam0)) || unk_0x72B9CC2155AEDF58(iParam0))
	{
		return 1;
	}
	return 0;
}

void func_217(int iParam0)
{
	switch (iParam0)
	{
		case 78:
			func_219(-602.6942f, 690.0488f, 148.1567f, 75.0245f);
			func_219(-612.8933f, 692.116f, 148.7577f, 79.1005f);
			func_219(-626.1633f, 694.6517f, 149.6835f, 75.1121f);
			func_219(-639.3558f, 696.9992f, 150.5134f, 77.481f);
			break;
		
		case joaat("MPSV_LP0_31"):
			func_219(-763.4828f, 668.4921f, 142.8936f, 236.9954f);
			func_219(-759.3964f, 690.4262f, 143.0253f, 214.9099f);
			func_219(-671.5947f, 646.5754f, 148.3114f, 49.9935f);
			func_219(-668.575f, 668.7567f, 149.4004f, 69.8844f);
			break;
		
		case 82:
			func_219(382.9244f, 443.8122f, 142.9934f, 78.3408f);
			func_219(391.2023f, 442.4812f, 142.5089f, 82.2125f);
			func_219(400.1477f, 441.0816f, 142.0776f, 83.4259f);
			func_219(414.2964f, 439.2628f, 141.5056f, 80.8689f);
			break;
		
		case 81:
			func_219(-1294.64f, 468.1975f, 96.4245f, 141.8551f);
			func_219(-1300.508f, 468.0167f, 96.8298f, 139.6287f);
			func_219(-1283.894f, 467.2136f, 95.4036f, 95.058f);
			func_219(-1273.584f, 454.4406f, 94.2269f, 30.8724f);
			break;
		
		case 73:
			func_219(-209.2598f, 509.0326f, 130.7979f, 97.2043f);
			func_219(-221.7214f, 507.2553f, 128.5651f, 92.2773f);
			func_219(-237.2848f, 506.8763f, 125.8112f, 85.9315f);
			func_219(-255.5678f, 507.9559f, 122.3364f, 85.1752f);
			break;
		
		case 75:
			func_219(-763.4828f, 668.4921f, 142.8936f, 236.9954f);
			func_219(-759.3964f, 690.4262f, 143.0253f, 214.9099f);
			func_219(-671.5947f, 646.5754f, 148.3114f, 49.9935f);
			func_219(-668.575f, 668.7567f, 149.4004f, 69.8844f);
			break;
		
		case 76:
			func_219(-668.575f, 668.7567f, 149.4004f, 69.8844f);
			func_219(-671.5947f, 646.5754f, 148.3114f, 49.9935f);
			func_219(-759.3964f, 690.4262f, 143.0253f, 214.9099f);
			func_219(-763.4828f, 668.4921f, 142.8936f, 236.9954f);
			break;
		
		case 77:
			func_219(128.4334f, 578.7522f, 182.2934f, 106.5458f);
			func_219(97.7791f, 576.8907f, 181.5599f, 91.3539f);
			func_219(83.5896f, 576.4791f, 181.0832f, 89.7262f);
			func_219(69.9599f, 575.9902f, 180.5019f, 91.4926f);
			break;
		
		case 80:
			func_219(-872.1293f, 698.7591f, 148.5084f, 339.673f);
			func_219(-916.5449f, 695.5253f, 150.5625f, 272.7097f);
			func_219(-907.3458f, 695.8158f, 150.396f, 270.6491f);
			func_219(-923.6974f, 691.4489f, 150.9506f, 357.4356f);
			break;
		
		case 87:
			if (func_218())
			{
				func_219(-1608.297f, -556.875f, 33.406f, 310f);
				func_219(-1616.095f, -563.402f, 33.049f, 309.4f);
				func_219(-1560.29f, -531.69f, 34.576f, 35.3994f);
				func_219(-1555.303f, -538.781f, 34.044f, 35.3994f);
			}
			else
			{
				func_219(-1605.148f, -552.5016f, 33.4606f, 309.4211f);
				func_219(-1616.306f, -561.6959f, 32.9867f, 309.4369f);
				func_219(-1582.681f, -534.1682f, 34.4171f, 307.8589f);
				func_219(-1619.657f, -531.5862f, 33.4254f, 128.9132f);
				func_219(-1560.257f, -532.3268f, 34.5436f, 216.0882f);
				func_219(-1553.698f, -541.3412f, 33.8662f, 215.8465f);
				func_219(-1611.769f, -601.588f, 31.2908f, 50.7362f);
				func_219(-1600.63f, -610.1141f, 30.5087f, 51.7297f);
			}
			break;
		
		case 88:
			if (func_218())
			{
				func_219(-1402.362f, -511.396f, 30.888f, 35.4f);
				func_219(-1356.617f, -531.0343f, 29.7588f, 124.9982f);
				func_219(-1407.634f, -503.839f, 31.35f, 35.4f);
				func_219(-1346.007f, -523.3546f, 30.6339f, 125.9976f);
			}
			else
			{
				func_219(-1390.604f, -528.6405f, 29.8387f, 35.4572f);
				func_219(-1357.085f, -531.4611f, 29.7218f, 125.0906f);
				func_219(-1346.236f, -523.9114f, 30.6f, 124.7302f);
				func_219(-1337.852f, -518.1096f, 31.2329f, 124.6998f);
				func_219(-1336.39f, -556.0637f, 29.7514f, 33.8088f);
				func_219(-1340.214f, -508.9828f, 31.4089f, 98.7714f);
				func_219(-1348.607f, -510.3536f, 30.9263f, 99.2425f);
				func_219(-1380.764f, -536.3867f, 29.3128f, 63.6203f);
			}
			break;
		
		case 89:
			if (func_218())
			{
				func_219(-102.737f, -597.379f, 35.053f, 160.999f);
				func_219(-97.793f, -589.568f, 35.082f, 134.799f);
				func_219(-110.357f, -619.402f, 35.055f, 160.599f);
				func_219(-112.561f, -627.723f, 35.046f, 165.399f);
			}
			else
			{
				func_219(-108.2604f, -613.6386f, 35.055f, 160.8063f);
				func_219(-103.0375f, -598.4797f, 35.0538f, 161.1968f);
				func_219(-112.84f, -629.6357f, 35.0662f, 174.9843f);
				func_219(-98.7403f, -590.3209f, 35.075f, 139.7632f);
				func_219(-98.3748f, -612.642f, 35.137f, 161.1124f);
				func_219(-92.595f, -595.4065f, 35.1888f, 161.3083f);
				func_219(-104.4742f, -630.1472f, 35.1396f, 161.184f);
				func_219(-74.1068f, -619.9417f, 35.1488f, 340.9123f);
			}
			break;
		
		case 90:
			if (func_218())
			{
				func_219(-59.349f, -779.238f, 43.134f, 228.398f);
				func_219(-41.6311f, -789.1425f, 43.1323f, 255.5993f);
				func_219(-65.212f, -772.66f, 43.151f, 219.398f);
				func_219(-33.0648f, -789.3544f, 43.1287f, 279.5989f);
			}
			else
			{
				func_219(-59.684f, -779.4568f, 43.114f, 228.7591f);
				func_219(-52.7425f, -784.7151f, 43.1134f, 237.7756f);
				func_219(-45.2736f, -788.4313f, 43.1133f, 250.2438f);
				func_219(-35.9308f, -789.8549f, 43.1167f, 271.1923f);
				func_219(-64.6911f, -762.4548f, 43.1316f, 35.6897f);
				func_219(-24.9853f, -786.8022f, 43.1163f, 297.8276f);
				func_219(-86.2083f, -739.3044f, 43.0546f, 204.9405f);
				func_219(-9.239f, -773.0505f, 43.0788f, 318.0367f);
			}
			break;
		
		case 91:
			func_219(246.5035f, -1798.749f, 26.1131f, 212.5996f);
			func_219(247.8968f, -1797.017f, 26.1131f, 212.5996f);
			func_219(249.3848f, -1795.374f, 26.1131f, 212.5996f);
			func_219(250.8498f, -1793.695f, 26.1131f, 212.5996f);
			func_219(262.9285f, -1784.205f, 26.1131f, 164.5991f);
			func_219(266.8129f, -1787.476f, 26.1131f, 164.5991f);
			func_219(264.814f, -1785.801f, 26.1131f, 164.5991f);
			func_219(269.0069f, -1789.16f, 26.1131f, 164.5991f);
			break;
		
		case 92:
			func_219(-1464.5f, -927.9f, 9f, 296.7991f);
			func_219(-1466f, -926.1f, 9f, 296.7991f);
			func_219(-1467.9f, -924.7f, 9f, 296.7991f);
			func_219(-1469.7f, -923.7f, 9f, 296.7991f);
			func_219(-1462.481f, -931.2933f, 9.1294f, 296.5982f);
			func_219(-1460.639f, -932.9284f, 9.1315f, 296.5982f);
			func_219(-1454.923f, -931.1019f, 9.0872f, 237.1973f);
			func_219(-1450.848f, -934.5874f, 8.4514f, 237.1973f);
			break;
		
		case 93:
			func_219(30.0784f, -1024.16f, 28.4469f, 234.5994f);
			func_219(29.1695f, -1026.719f, 28.4453f, 234.5994f);
			func_219(28.2538f, -1029.296f, 28.4421f, 234.5994f);
			func_219(27.3737f, -1031.767f, 28.3937f, 234.5994f);
			func_219(32.6932f, -1017.063f, 28.4531f, 234.5994f);
			func_219(33.672f, -1014.399f, 28.4552f, 234.5994f);
			func_219(37.488f, -1014.344f, 28.4781f, 175.5986f);
			func_219(39.4909f, -1015.097f, 28.484f, 175.5986f);
			break;
		
		case 94:
			func_219(45.0033f, 2784.392f, 56.8782f, 103.5999f);
			func_219(43.316f, 2785.903f, 56.8782f, 103.5999f);
			func_219(41.6126f, 2787.36f, 56.8782f, 103.5999f);
			func_219(39.9584f, 2788.773f, 56.8782f, 103.5999f);
			func_219(35.2347f, 2792.135f, 56.8781f, 208.7997f);
			func_219(33.7771f, 2790.379f, 56.8781f, 208.7997f);
			func_219(30.7578f, 2786.8f, 56.8781f, 208.7997f);
			func_219(29.3121f, 2785.045f, 56.8745f, 208.7997f);
			break;
		
		case 95:
			func_219(-332.5679f, 6069.145f, 30.2175f, 152.9999f);
			func_219(-334.2811f, 6070.787f, 30.2212f, 152.9999f);
			func_219(-335.9948f, 6072.454f, 30.2455f, 152.9999f);
			func_219(-337.675f, 6074.252f, 30.2727f, 152.9999f);
			func_219(-339.3682f, 6075.904f, 30.3074f, 152.9999f);
			func_219(-341.0913f, 6077.729f, 30.3114f, 152.9999f);
			func_219(-342.9239f, 6079.522f, 30.3122f, 152.9999f);
			func_219(-344.6985f, 6081.302f, 30.3097f, 152.9999f);
			break;
		
		case 96:
			func_219(1738.422f, 3716.779f, 33.0787f, 6.9999f);
			func_219(1736.207f, 3715.989f, 33.094f, 6.9999f);
			func_219(1748.442f, 3714.17f, 33.0889f, 39.399f);
			func_219(1750.475f, 3715.007f, 33.1067f, 39.399f);
			func_219(1747.18f, 3721.102f, 33.007f, 95.199f);
			func_219(1746.413f, 3723.255f, 32.9738f, 95.199f);
			func_219(1740.67f, 3717.613f, 33.0616f, 8.199f);
			func_219(1733.937f, 3715.08f, 33.1236f, 8.199f);
			break;
		
		case 97:
			func_219(947.9371f, -1452.737f, 30.143f, 331.5991f);
			func_219(950.2141f, -1452.826f, 30.1364f, 331.5991f);
			func_219(952.4588f, -1452.882f, 30.129f, 331.5991f);
			func_219(954.6608f, -1452.869f, 30.1303f, 331.5991f);
			func_219(935.1006f, -1452.701f, 30.1907f, 316.999f);
			func_219(932.5459f, -1452.579f, 30.2194f, 316.999f);
			func_219(929.9319f, -1452.567f, 30.2647f, 316.999f);
			func_219(927.4857f, -1452.446f, 30.3167f, 316.999f);
			break;
		
		case 98:
			func_219(186.6051f, 306.8702f, 104.389f, 162.3999f);
			func_219(184.3881f, 306.7666f, 104.3845f, 162.3999f);
			func_219(182.1681f, 306.6823f, 104.375f, 162.3999f);
			func_219(183.3219f, 296.2871f, 104.3707f, 350.7995f);
			func_219(180.9933f, 296.3411f, 104.3704f, 350.7995f);
			func_219(178.6569f, 296.4709f, 104.3701f, 350.7995f);
			func_219(195.1475f, 304.4284f, 104.4644f, 77.3989f);
			func_219(195.0814f, 301.8218f, 104.5287f, 77.3989f);
			break;
		
		case 99:
			func_219(-31.2801f, -200.3394f, 51.3551f, 5.3995f);
			func_219(-33.3895f, -199.7716f, 51.355f, 5.3995f);
			func_219(-35.4307f, -199.1125f, 51.3549f, 5.3995f);
			func_219(-37.5545f, -198.5244f, 51.3549f, 5.3995f);
			func_219(-17.9628f, -206.2525f, 51.3702f, 29.399f);
			func_219(-14.8043f, -207.5648f, 51.4707f, 29.399f);
			func_219(-11.8482f, -208.6405f, 51.5633f, 29.399f);
			func_219(-9.1304f, -209.4894f, 51.6472f, 29.399f);
			break;
		
		case 100:
			func_219(2478.52f, 4082.137f, 36.8208f, 227.5999f);
			func_219(2477.557f, 4079.946f, 36.8014f, 227.5999f);
			func_219(2465.123f, 4081.35f, 37.0655f, 167.4f);
			func_219(2463.017f, 4082.271f, 37.0653f, 167.4f);
			func_219(2467.7f, 4080.332f, 37.0649f, 167.4f);
			func_219(2469.587f, 4079.538f, 37.061f, 167.4f);
			func_219(2481.354f, 4088.553f, 36.9131f, 209.4f);
			func_219(2482.442f, 4091.023f, 36.9472f, 209.4f);
			break;
		
		case 101:
			func_219(-32.1085f, 6407.398f, 30.4903f, 291.1999f);
			func_219(-29.4917f, 6404.578f, 30.4903f, 291.1999f);
			func_219(-26.4319f, 6401.523f, 30.4903f, 291.1999f);
			func_219(-23.3427f, 6398.638f, 30.4903f, 291.1999f);
			func_219(-20.7035f, 6395.76f, 30.4885f, 291.1999f);
			func_219(-23.7283f, 6412.838f, 30.4904f, 176.5999f);
			func_219(-20.5405f, 6409.805f, 30.4905f, 176.5999f);
			func_219(-17.3045f, 6406.66f, 30.4904f, 176.5999f);
			break;
		
		case 102:
			func_219(-1138.057f, -1572.18f, 3.4157f, 125.9996f);
			func_219(-1142.03f, -1574.983f, 3.4133f, 125.9996f);
			func_219(-1145.05f, -1592.81f, 3.3855f, 306.5991f);
			func_219(-1139.933f, -1589.211f, 3.3978f, 306.5991f);
			func_219(-1124.295f, -1578.776f, 3.3854f, 306.5991f);
			func_219(-1119.954f, -1575.551f, 3.3852f, 306.5991f);
			func_219(-1124.942f, -1562.985f, 3.2916f, 168.9988f);
			func_219(-1127.039f, -1564.395f, 3.292f, 168.9988f);
			break;
		
		default:
			break;
	}
}

bool func_218()
{
	return Global_2451787.f_16;
}

void func_219(struct<3> Param0, float fParam1)
{
	if (Global_2405074.f_1748 < 101)
	{
		if (vmag(Param0) <= 0.01f)
		{
			return;
		}
		Global_2405074.f_1749[Global_2405074.f_1748 /*4*/] = { Param0 };
		Global_2405074.f_1749[Global_2405074.f_1748 /*4*/].f_3 = fParam1;
		Global_2405074.f_1748++;
	}
}

int func_220(struct<3> Param0)
{
	int iVar0;
	
	if (vdist(Global_2405074.f_2897, Param0) < Global_2405074.f_2905)
	{
		return Global_2405074.f_2900;
	}
	Global_2405074.f_2897 = { Param0 };
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (Param0.f_2 <= 0f)
		{
			Param0.f_2 = ((Global_2412241[iVar0 /*7*/].f_2 + Global_2412241[iVar0 /*7*/].f_3.f_2) * 0.5f);
		}
		if (func_157(Param0, &(Global_2412241[iVar0 /*7*/])))
		{
			Global_2405074.f_2900 = iVar0;
			return iVar0;
		}
		iVar0++;
	}
	Global_2405074.f_2900 = -1;
	return -1;
}

int func_221()
{
	if (unk_0xCE990E643CD9D0E5(Global_4456448.f_13, 0) && !Global_2452679.f_6329)
	{
		return 0;
	}
	return 0;
}

int func_222(struct<2> Param0, var uParam1, bool bParam2, float fParam3)
{
	int iVar0;
	float fVar1;
	float fVar2;
	int iVar3;
	
	iVar3 = 0;
	iVar0 = 83;
	while (iVar0 <= 84 + 1)
	{
		if (bParam2)
		{
			if (func_190(iVar0))
			{
				fVar1 = fParam3;
			}
			else
			{
				fVar1 = 0f;
			}
		}
		else
		{
			fVar1 = fParam3;
		}
		fVar2 = vdist(Param0, Param0.f_1, 0f, Global_1678288.f_496[iVar0 /*3*/], Global_1678288.f_496[iVar0 /*3*/].f_1, 0f);
		if (fVar2 < fVar1)
		{
			iVar3++;
		}
		iVar0++;
	}
	if (iVar3 > 0)
	{
		return 1;
	}
	return 0;
}

void func_223()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 30)
	{
		Global_2405074.f_2730[iVar0 /*3*/] = { 0f, 0f, 0f };
		iVar0++;
	}
}

int func_224(var uParam0, bool bParam1)
{
	int iVar0;
	struct<3> Var1;
	
	Var1 = { *uParam0 };
	iVar0 = 0;
	while (iVar0 < 2)
	{
		if (Var1.f_2 <= 0f)
		{
			Var1.f_2 = ((Global_2412197[iVar0 /*7*/].f_2 + Global_2412197[iVar0 /*7*/].f_3.f_2) * 0.5f);
		}
		if (func_157(Var1, &(Global_2412197[iVar0 /*7*/])))
		{
			if (bParam1)
			{
				func_168(&Var1, Global_2412197[iVar0 /*7*/], Global_2412197[iVar0 /*7*/].f_3, Global_2412197[iVar0 /*7*/].f_6, 1036831949, 0);
				*uParam0 = { Var1 };
			}
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_225(struct<3> Param0)
{
	int iVar0;
	struct<3> Var1;
	
	if (!Global_2405074.f_512 && !Global_2405074.f_513)
	{
		if (!Global_2405074.f_45.f_314)
		{
			if (!func_229(unk_0x460153A63B9477BC(), 1))
			{
				return 1;
			}
			if (!func_228(Param0, 1008981770))
			{
				if (!func_174(&Param0, 0, 0, 0, 1))
				{
					return 1;
				}
				else if (func_174(&Param0, 0, 1, 0, 1))
				{
					return 1;
				}
			}
			else
			{
				iVar0 = func_227(Param0, 1008981770);
				if (iVar0 > -1)
				{
					Var1 = { func_226(&(Global_2405074.f_45[iVar0 /*12*/])) };
					if (!func_174(&Var1, 0, 0, 0, 1))
					{
						if (!func_174(&Param0, 0, 0, 0, 1))
						{
							return 1;
						}
					}
				}
			}
		}
	}
	return 0;
}

Vector3 func_226(var uParam0)
{
	switch (uParam0->f_10)
	{
		case 0:
			return *uParam0;
			break;
		
		case 1:
		case 2:
			return *uParam0 + uParam0->f_3 * Vector(0.5f, 0.5f, 0.5f);
			break;
	}
	return *uParam0;
}

int func_227(struct<3> Param0, float fParam1)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (Global_2405074.f_45[iVar0 /*12*/].f_9)
		{
			if (func_161(Param0, &(Global_2405074.f_45[iVar0 /*12*/]), fParam1, 0, 0))
			{
				return iVar0;
			}
		}
		iVar0++;
	}
	return -1;
}

int func_228(struct<3> Param0, float fParam1)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (Global_2405074.f_45[iVar0 /*12*/].f_9)
		{
			if (func_161(Param0, &(Global_2405074.f_45[iVar0 /*12*/]), fParam1, 0, 0))
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

bool func_229(int iParam0, bool bParam1)
{
	if (func_39() != 0)
	{
		return func_230(iParam0) != 0;
	}
	return func_139(iParam0, bParam1, 0);
}

int func_230(int iParam0)
{
	if (func_313(iParam0, 0, 1))
	{
		return Global_2425869[iParam0 /*443*/].f_1;
	}
	return 0;
}

void func_231()
{
	int iVar0;
	struct<4> Var1;
	
	iVar0 = 0;
	while (iVar0 < 101)
	{
		Global_2405074.f_1749[iVar0 /*4*/] = { Var1 };
		iVar0++;
	}
	Global_2405074.f_1748 = 0;
}

void func_232()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (unk_0x7FD2BDF03806FD9D(Global_2405074.f_685[iVar0]))
		{
			if (unk_0x354AD085195C5FA6() == Global_2405074.f_685[iVar0])
			{
				if (!Global_2405074.f_681[iVar0] == -1)
				{
					if (unk_0xFE7504CE3CC54D0B(Global_2405074.f_681[iVar0]))
					{
						unk_0xDF61EC05AF188A01(Global_2405074.f_681[iVar0]);
						Global_2405074.f_681[iVar0] = -1;
					}
					else
					{
						Global_2405074.f_681[iVar0] = -1;
					}
				}
			}
		}
		else if (!Global_2405074.f_681[iVar0] == -1)
		{
			Global_2405074.f_681[iVar0] = -1;
		}
		iVar0++;
	}
}

int func_233(bool bParam0)
{
	if (unk_0x03DB5C6AABF8DA46())
	{
		return 10000;
	}
	if (bParam0)
	{
		return 5000;
	}
	return 1000;
}

int func_234(int iParam0)
{
	if (iParam0 == -1)
	{
		return 0;
	}
	else
	{
		return unk_0xCE990E643CD9D0E5(Global_2440049.f_1, iParam0);
	}
	return 1;
}

float func_235()
{
	return 10f;
}

void func_236(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (!unk_0xAFF96FDC3971E7EA())
	{
		return;
	}
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	unk_0xBE20AB8238688965(&(Local_75.f_2[iVar0]), iVar1);
}

void func_237(int iParam0)
{
	if (!unk_0xAFF96FDC3971E7EA())
	{
		return;
	}
	Local_75.f_5 = iParam0;
}

void func_238()
{
	if (func_20() > 0)
	{
		func_269();
		func_262();
		func_254();
		func_241();
	}
	if (func_240(unk_0x24F50C1BAF06D259()) != 3 && func_20() == 3)
	{
		func_239(3);
	}
	switch (func_240(unk_0x24F50C1BAF06D259()))
	{
		case 0:
			if (func_20() > 0)
			{
				func_239(2);
			}
			break;
		
		case 2:
			break;
		
		case 3:
			break;
	}
}

void func_239(int iParam0)
{
	Local_77[unk_0x59E2AD1A8ACEDA31() /*4*/].f_1 = iParam0;
}

int func_240(int iParam0)
{
	return Local_77[iParam0 /*4*/].f_1;
}

void func_241()
{
	if (!func_251())
	{
		return;
	}
	if (func_247())
	{
		if (!func_246(unk_0x460153A63B9477BC()))
		{
			func_244();
		}
	}
	else if (func_246(unk_0x460153A63B9477BC()))
	{
		func_242();
	}
}

void func_242()
{
	func_243(17);
}

void func_243(int iParam0)
{
	unk_0xD2459066EA58CE43(&(Global_1630317[unk_0x460153A63B9477BC() /*595*/].f_11.f_6), iParam0);
}

void func_244()
{
	func_245(17);
}

void func_245(int iParam0)
{
	unk_0xBE20AB8238688965(&(Global_1630317[unk_0x460153A63B9477BC() /*595*/].f_11.f_6), iParam0);
}

bool func_246(int iParam0)
{
	return func_6(iParam0, 17);
}

int func_247()
{
	if (func_5(unk_0x460153A63B9477BC()))
	{
		return 0;
	}
	if (!func_7())
	{
		return 0;
	}
	if (func_250() != 0)
	{
		func_249(0);
	}
	if (func_248(unk_0x24F50C1BAF06D259(), 1))
	{
		if (func_250() == 0)
		{
			func_249(1);
		}
		return 0;
	}
	if (func_12(2))
	{
		return 0;
	}
	return 1;
}

bool func_248(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam1 / 32);
	iVar1 = (iParam1 % 32);
	return unk_0xCE990E643CD9D0E5(Local_77[iParam0 /*4*/].f_2[iVar0], iVar1);
}

void func_249(int iParam0)
{
	Global_1630317[unk_0x460153A63B9477BC() /*595*/].f_11.f_300 = iParam0;
}

int func_250()
{
	return Global_1630317[unk_0x460153A63B9477BC() /*595*/].f_11.f_300;
}

int func_251()
{
	if (!func_252())
	{
		return 0;
	}
	return 1;
}

bool func_252()
{
	return func_253(unk_0x460153A63B9477BC());
}

bool func_253(int iParam0)
{
	return func_6(iParam0, 15);
}

void func_254()
{
	if (!func_261())
	{
		return;
	}
	if (func_260(unk_0x9B0761B4C3EB8BC7(), func_16(), 120f, 1))
	{
		if (!func_248(unk_0x24F50C1BAF06D259(), 1))
		{
			func_259(1);
		}
	}
	else if (func_248(unk_0x24F50C1BAF06D259(), 1))
	{
		func_258(1);
	}
	if (!func_248(unk_0x24F50C1BAF06D259(), 0) && func_255())
	{
		func_259(0);
	}
}

int func_255()
{
	if (func_252())
	{
		if (!func_260(unk_0x9B0761B4C3EB8BC7(), func_16(), 1000f, 1))
		{
			return 1;
		}
		if (func_257(unk_0x460153A63B9477BC(), 1, 1))
		{
			return 1;
		}
		if (func_256(unk_0x460153A63B9477BC()))
		{
			return 1;
		}
		if (func_199(unk_0x460153A63B9477BC()))
		{
			return 1;
		}
	}
	else if (!unk_0xFA298F06F67BBD4A(func_17()))
	{
		return 1;
	}
	return 0;
}

int func_256(int iParam0)
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

int func_257(int iParam0, bool bParam1, bool bParam2)
{
	if (iParam0 == func_89())
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

void func_258(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	unk_0xD2459066EA58CE43(&(Local_77[unk_0x59E2AD1A8ACEDA31() /*4*/].f_2[iVar0]), iVar1);
}

void func_259(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	unk_0xBE20AB8238688965(&(Local_77[unk_0x59E2AD1A8ACEDA31() /*4*/].f_2[iVar0]), iVar1);
}

bool func_260(int iParam0, int iParam1, float fParam2, int iParam3)
{
	return vdist2(unk_0x3E4D3CCC220BDFB1(iParam0, iParam3), unk_0x3E4D3CCC220BDFB1(iParam1, iParam3)) <= (fParam2 * fParam2);
}

int func_261()
{
	if (func_7())
	{
		return 1;
	}
	return 0;
}

void func_262()
{
	int iVar0;
	
	if (func_267(0))
	{
		if (func_265())
		{
			iVar0 = 1;
		}
		else
		{
			iVar0 = 2;
		}
	}
	else
	{
		iVar0 = 0;
	}
	if (iVar0 != func_264())
	{
		switch (func_264())
		{
			case 2:
				if (!func_289(1) && iVar0 == 0)
				{
					func_97(1);
				}
				break;
			
			case 0:
				if ((func_252() && !func_248(unk_0x24F50C1BAF06D259(), 0)) && iVar0 == 2)
				{
					func_259(0);
				}
				break;
		}
		func_263(iVar0);
	}
}

void func_263(int iParam0)
{
	uLocal_80 = iParam0;
}

int func_264()
{
	return uLocal_80;
}

bool func_265()
{
	return func_266(unk_0x460153A63B9477BC());
}

int func_266(int iParam0)
{
	if (iParam0 != func_89())
	{
		if (Global_1630317[iParam0 /*595*/].f_11 != func_89())
		{
			return Global_1630317[iParam0 /*595*/].f_11 == iParam0;
		}
	}
	return 0;
}

bool func_267(bool bParam0)
{
	return func_268(unk_0x460153A63B9477BC(), bParam0);
}

bool func_268(int iParam0, bool bParam1)
{
	if (!bParam1)
	{
		if (func_266(iParam0))
		{
			return 0;
		}
	}
	return Global_1630317[iParam0 /*595*/].f_11 != func_89();
}

void func_269()
{
	var uVar0;
	
	if (func_19() > 0)
	{
		func_274();
	}
	switch (func_19())
	{
		case 0:
			break;
		
		case 1:
			break;
		
		case 2:
			if (((((!func_12(3) && !func_248(unk_0x24F50C1BAF06D259(), 2)) && func_7()) && !unk_0x7A6B7F5F1B1F3520(func_16())) && func_272(func_10())) && func_271(func_16()) == 0)
			{
				unk_0x69B8739B0B73352F(func_16(), 1);
				unk_0x4FDCAC08CF0A08AE(func_16(), 0, 1);
				func_259(2);
			}
			break;
		
		case 3:
			if (((!func_12(4) && !func_248(unk_0x24F50C1BAF06D259(), 3)) && func_7()) && !unk_0xDC79F755CB11603C(func_16()))
			{
				func_259(3);
			}
			break;
		
		case 4:
			if (((!func_12(5) && !func_248(unk_0x24F50C1BAF06D259(), 4)) && func_7()) && func_272(func_10()))
			{
				uVar0 = func_10();
				func_270(&uVar0);
				func_259(4);
			}
			break;
		
		case 5:
			break;
	}
}

void func_270(var uParam0)
{
	var uVar0;
	
	if (unk_0xF7DE07F319727299(*uParam0))
	{
		if (!unk_0xF05B7723022657B3(*uParam0))
		{
		}
	}
	if (unk_0x3D70CCF2C9B362CD(*uParam0))
	{
		uVar0 = unk_0x62D2FF718BC7717D(*uParam0);
		unk_0x5896A99BC0571F36(&uVar0);
	}
}

int func_271(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!unk_0xA59F96B50B97E63C(iParam0, 0))
	{
		iVar1 = unk_0x99E61B3887CC8E71(iParam0) + 1;
		iVar0 = 0;
		while (iVar0 < iVar1)
		{
			if (!unk_0xB064AF9925F5537B(iParam0, (iVar0 - 1), 0))
			{
				iVar2++;
			}
			iVar0++;
		}
	}
	return iVar2;
}

int func_272(var uParam0)
{
	if (unk_0xF05B7723022657B3(uParam0) || (!unk_0x663F84E7375B82E6(uParam0) && unk_0xAFF96FDC3971E7EA()))
	{
		if (func_273(uParam0))
		{
			return 1;
		}
	}
	return 0;
}

int func_273(var uParam0)
{
	if (unk_0xF7DE07F319727299(uParam0))
	{
		unk_0x5F00FA3094B612F5(uParam0);
		return unk_0xF05B7723022657B3(uParam0);
	}
	return 0;
}

void func_274()
{
	if (func_280())
	{
		if (!unk_0x8F678487EEBD8CE4(iLocal_82))
		{
			iLocal_82 = unk_0x2BE000892D65EA2A(func_16());
			unk_0xE7B8403ABCA0391D(iLocal_82, func_279());
			func_276(&iLocal_82, func_278());
			unk_0xB023F5C66F5716C7(iLocal_82, func_275());
		}
	}
	else if (unk_0x8F678487EEBD8CE4(iLocal_82))
	{
		unk_0x93370FA10F15BE44(&iLocal_82);
	}
}

char* func_275()
{
	return "CASINO_VD";
}

void func_276(int iParam0, int iParam1)
{
	int iVar0;
	
	if (unk_0x8F678487EEBD8CE4(*iParam0))
	{
		iVar0 = func_277(iParam1);
		unk_0xECC9A00CF1181EC2(*iParam0, iVar0);
	}
}

int func_277(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	switch (iParam0)
	{
		case 1:
			return 4;
		
		case 0:
			return 4;
		
		case 6:
			return 59;
		
		case 18:
			return 2;
		
		case 13:
			return 5;
		
		case 116:
			return 38;
		
		case 28:
			return 6;
		
		case 29:
			return 7;
		
		case 30:
			return 8;
		
		case 31:
			return 9;
		
		case 32:
			return 10;
		
		case 33:
			return 11;
		
		case 34:
			return 12;
		
		case 35:
			return 13;
		
		case 36:
			return 14;
		
		case 37:
			return 15;
		
		case 38:
			return 16;
		
		case 39:
			return 17;
		
		case 40:
			return 18;
		
		case 41:
			return 19;
		
		case 42:
			return 20;
		
		case 43:
			return 21;
		
		case 44:
			return 22;
		
		case 45:
			return 23;
		
		case 46:
			return 24;
		
		case 47:
			return 25;
		
		case 48:
			return 26;
		
		case 49:
			return 27;
		
		case 50:
			return 28;
		
		case 51:
			return 29;
		
		case 52:
			return 30;
		
		case 53:
			return 31;
		
		case 54:
			return 32;
		
		case 55:
			return 33;
		
		case 56:
			return 34;
		
		case 57:
			return 35;
		
		case 58:
			return 36;
		
		case 59:
			return 37;
		
		case 9:
			return 57;
		
		case 10:
			return 53;
		
		case 118:
			return 57;
		
		case 14:
			return 56;
		
		case 3:
			return 55;
		
		case 21:
			return 50;
		
		case 15:
			return 51;
		
		case 20:
			return 52;
		
		case 11:
			return 54;
		
		case 23:
			return 58;
		
		case 12:
			return 60;
		
		case 24:
			return 61;
		
		case 4:
			return 62;
		
		default:
	}
	unk_0x28DD484BAEAF8437(iParam0, &iVar0, &iVar1, &iVar2, &iVar3);
	return ((((iVar0 * 16777216) + (iVar1 * 65536)) + iVar2 * 256) + iVar3);
	return 0;
}

int func_278()
{
	return 12;
}

int func_279()
{
	return 225;
}

int func_280()
{
	if (!unk_0x3D70CCF2C9B362CD(func_10()))
	{
		return 0;
	}
	if (func_19() != 1)
	{
		return 0;
	}
	if (unk_0xE0B3BC41DDA88DF0(unk_0x9B0761B4C3EB8BC7(), func_16(), 0))
	{
		return 0;
	}
	if (!func_7())
	{
		return 0;
	}
	return 1;
}

void func_281(int iParam0)
{
	Local_77[unk_0x59E2AD1A8ACEDA31() /*4*/] = iParam0;
}

int func_282()
{
	func_283();
	return 1;
}

void func_283()
{
	func_245(16);
}

int func_284()
{
	return Local_75;
}

int func_285(int iParam0)
{
	return Local_77[iParam0 /*4*/];
}

void func_286()
{
	int iVar0;
	int iVar1;
	bool bVar2;
	
	iVar0 = 0;
	while (iVar0 < unk_0xEFA28384DDD283E1())
	{
		iLocal_78[iVar0] = func_288();
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < unk_0xEFA28384DDD283E1())
	{
		if (unk_0xBD09DF93F957A0CF(iVar0))
		{
			iLocal_78[iVar0] = iVar0;
			iVar1 = unk_0x9019589211A13B02(iLocal_78[iVar0]);
			if (func_313(iVar1, 0, 1))
			{
				if (unk_0xAFF96FDC3971E7EA())
				{
					if (!bVar2)
					{
						if (func_248(iLocal_78[iVar0], 1))
						{
							bVar2 = true;
						}
					}
					if (!func_12(1))
					{
						if (func_248(iLocal_78[iVar0], 0))
						{
							func_236(1);
						}
					}
					if (!func_12(3))
					{
						if (func_248(iLocal_78[iVar0], 2))
						{
							func_236(3);
						}
					}
					if (!func_12(4))
					{
						if (func_248(iLocal_78[iVar0], 3))
						{
							func_236(4);
						}
					}
					if (!func_12(5))
					{
						if (func_248(iLocal_78[iVar0], 4))
						{
							func_236(5);
						}
					}
				}
			}
		}
		iVar0++;
	}
	if (unk_0xAFF96FDC3971E7EA())
	{
		if (bVar2)
		{
			if (!func_12(2))
			{
				func_236(2);
			}
		}
		else if (func_12(2))
		{
			func_287(2);
		}
	}
}

void func_287(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (!unk_0xAFF96FDC3971E7EA())
	{
		return;
	}
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	unk_0xD2459066EA58CE43(&(Local_75.f_2[iVar0]), iVar1);
}

int func_288()
{
	return -1;
}

bool func_289(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	return unk_0xCE990E643CD9D0E5(uLocal_79[iVar0], iVar1);
}

int func_290()
{
	var uVar0;
	
	func_297(&uVar0);
	if (Global_1312872 == 0)
	{
		if (!unk_0x25DDB354A40FFCDB())
		{
			return 1;
		}
	}
	if (func_296())
	{
		return 1;
	}
	if (Global_2464493)
	{
		return 1;
	}
	if (func_295())
	{
		return 1;
	}
	if (func_294(159))
	{
		if (!func_293())
		{
			return 1;
		}
	}
	if (func_294(157))
	{
		return 1;
	}
	if (!unk_0x0EB6C63A09FD9DF1())
	{
		return 1;
	}
	if (func_291() != 0)
	{
		if (unk_0x7B70881748D166CD(func_291()) == 0)
		{
			return 1;
		}
	}
	return 0;
}

int func_291()
{
	switch (func_39())
	{
		case 0:
			return func_292();
			break;
		
		case 2:
			return joaat("creator");
			break;
	}
	return 0;
}

int func_292()
{
	switch (Global_2464595)
	{
		case 0:
			return joaat("freemode");
		
		default:
	}
	return joaat("freemode");
}

bool func_293()
{
	return Global_2451787.f_696;
}

int func_294(int iParam0)
{
	if (unk_0x16F1FCCC54559709(1, iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_295()
{
	return Global_2462250;
}

bool func_296()
{
	return Global_2451787.f_691;
}

void func_297(var uParam0)
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
					func_298(iVar0);
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

void func_298(int iParam0)
{
	struct<3> Var0;
	int iVar1;
	int iVar2;
	bool bVar3;
	
	if (unk_0x477FAFFE21935947(1, iParam0, &Var0, 3))
	{
		if (func_313(Var0.f_1, 1, 1))
		{
			iVar1 = unk_0x1FA7B77001D60F9D(Var0.f_1);
			if (unk_0xAE06B9E39EBDE049(iVar1))
			{
				if (unk_0x47DBF174A0CB9D55(iVar1, 0))
				{
					iVar2 = unk_0xA5D5B1042E8F47BD(iVar1, 0);
					if (unk_0x292280AF1BBBD6AC(iVar2, Var0.f_2) && unk_0x82CC259B7B4F4AD9())
					{
						if (func_299(iVar2, &bVar3))
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

int func_299(int iParam0, var uParam1)
{
	if (unk_0xAE06B9E39EBDE049(iParam0))
	{
		if (!unk_0x1758275D343D5BA3(iParam0))
		{
			if (unk_0x38CC98C4A0688263(iParam0))
			{
				if (!unk_0xCA6AF782C906AC86(unk_0x36FE6D3220816ADA(iParam0)))
				{
					unk_0x4F3C4F457D44BB0F(iParam0, 0, 1);
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

void func_300()
{
	wait(0);
}

void func_301()
{
	if (func_252() && func_2() != 3)
	{
		func_307();
	}
	if (func_306(unk_0x460153A63B9477BC()))
	{
		func_305();
	}
	if (func_246(unk_0x460153A63B9477BC()))
	{
		func_242();
	}
	if (func_5(unk_0x460153A63B9477BC()))
	{
		func_304();
	}
	if (func_250() != 0)
	{
		func_249(0);
	}
	if (func_2() != 0)
	{
		func_302();
	}
	unk_0xD39E529EBE5DB04F();
}

void func_302()
{
	var uVar0;
	
	uVar0 = func_10();
	if (unk_0x3D70CCF2C9B362CD(uVar0))
	{
		func_303(&uVar0);
	}
}

void func_303(var uParam0)
{
	var uVar0;
	
	if (unk_0x3D70CCF2C9B362CD(*uParam0))
	{
		uVar0 = unk_0x62D2FF718BC7717D(*uParam0);
		unk_0x95047B5978C3543C(&uVar0);
	}
}

void func_304()
{
	func_243(18);
}

void func_305()
{
	func_243(16);
}

bool func_306(int iParam0)
{
	return func_6(iParam0, 16);
}

void func_307()
{
	func_243(15);
	Global_1630317[unk_0x460153A63B9477BC() /*595*/].f_11.f_301 = 0;
}

int func_308(struct<21> Param0)
{
	func_312(8, Param0);
	unk_0x628BF6B677C62F7E(1);
	func_309(0, -1, 0);
	unk_0x97D2F2E2C92FD519(&Local_75, 8);
	unk_0xBB96A3ECD45D0317(&Local_77, 33);
	unk_0x3A396632EB359434(0);
	return 1;
}

int func_309(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = unk_0x361B374A50D875B4();
	while (iVar0 != 2)
	{
		if (((iVar0 == 3 || iVar0 == 4) || iVar0 == 5) || iVar0 == 6)
		{
			if (!bParam2)
			{
				func_311();
			}
			else
			{
				return 0;
			}
		}
		if (!func_310())
		{
			if (iParam0 == 0)
			{
				if (!unk_0x25DDB354A40FFCDB())
				{
					if (!bParam2)
					{
						func_311();
					}
					else
					{
						return 0;
					}
				}
				if (func_296())
				{
					if (!bParam2)
					{
						func_311();
					}
					else
					{
						return 0;
					}
				}
				if (func_294(157))
				{
					if (!bParam2)
					{
						func_311();
					}
					else
					{
						return 0;
					}
				}
			}
			else if (!unk_0x3BF0BB5923982C0D())
			{
				if (!bParam2)
				{
					func_311();
				}
				else
				{
					return 0;
				}
			}
		}
		wait(0);
		iVar0 = unk_0x361B374A50D875B4();
	}
	if (iParam1 > -1)
	{
		Global_1312519 = iVar0;
	}
	if (iParam0 == 0)
	{
		if (!unk_0x25DDB354A40FFCDB())
		{
			if (!bParam2)
			{
				func_311();
			}
			else
			{
				return 0;
			}
		}
	}
	else if (!unk_0x3BF0BB5923982C0D())
	{
		if (!bParam2)
		{
			func_311();
		}
		else
		{
			return 0;
		}
	}
	return 1;
}

bool func_310()
{
	return Global_1312872;
}

void func_311()
{
	unk_0xD39E529EBE5DB04F();
}

void func_312(int iParam0, struct<17> Param1, var uParam2, var uParam3, var uParam4, var uParam5)
{
	if (!unk_0x25DDB354A40FFCDB())
	{
		func_311();
	}
	unk_0xA88557896B79E30D(iParam0, 0, Param1.f_16);
}

int func_313(int iParam0, bool bParam1, bool bParam2)
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

