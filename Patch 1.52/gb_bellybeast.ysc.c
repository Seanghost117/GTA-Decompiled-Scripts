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
	char* sLocal_20 = NULL;
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
	var uLocal_75 = 0;
	var uLocal_76 = 0;
	var uLocal_77 = 0;
	var uLocal_78 = 0;
	var uLocal_79 = 0;
	var uLocal_80 = 0;
	var uLocal_81 = 0;
	int iLocal_82 = 0;
	int iLocal_83 = 0;
	int iLocal_84 = 0;
	int iLocal_85[4] = { 0, 0, 0, 0 };
	int iLocal_86[4] = { 0, 0, 0, 0 };
	int iLocal_87 = 0;
	struct<3> Local_88 = { 0, 0, 0 } ;
	struct<3> Local_89 = { 0, 0, 0 } ;
	var uLocal_90 = 0;
	int iLocal_91 = 0;
	var uLocal_92 = 0;
	var uLocal_93 = 0;
	var uLocal_94 = 0;
	var uLocal_95 = 0;
	var uLocal_96 = 0;
	var uLocal_97 = 0;
	var uLocal_98 = 0;
	var uLocal_99 = 0;
	var uLocal_100 = 0;
	int iLocal_101 = 0;
	struct<59> Local_102 = { 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	struct<4> Local_103[32];
	var uLocal_104[4] = { 0, 0, 0, 0 };
	struct<2> Local_105[4];
	struct<21> Local_106 = { 0, -1, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, -1, -1 } ;
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
	sLocal_20 = "NULL";
	fLocal_21 = 0f;
	fLocal_25 = -0.0375f;
	fLocal_26 = 0.17f;
	fLocal_30 = 80f;
	fLocal_31 = 140f;
	fLocal_32 = 180f;
	iLocal_36 = 3;
	iLocal_40 = 1;
	iLocal_41 = 65;
	iLocal_42 = 49;
	iLocal_43 = 64;
	fLocal_62 = ((0.05f + 0.275f) - 0.01f);
	if (unk_0x25DDB354A40FFCDB())
	{
		if (!func_932(ScriptParam_106))
		{
			func_822(0);
		}
	}
	while (true)
	{
		func_821();
		if (func_813())
		{
			func_822(1);
		}
		func_806();
		switch (func_805(unk_0x59E2AD1A8ACEDA31()))
		{
			case 0:
				if (func_804() == 1)
				{
					if (func_803())
					{
						func_802(unk_0x59E2AD1A8ACEDA31(), 1);
					}
				}
				else if (func_804() == 3)
				{
					func_802(unk_0x59E2AD1A8ACEDA31(), 3);
				}
				break;
			
			case 1:
				if (func_804() == 1)
				{
					if (!func_801())
					{
						func_114();
					}
					else
					{
						if (func_113())
						{
							func_106();
						}
						func_105();
					}
					if (func_49(1))
					{
						func_802(unk_0x59E2AD1A8ACEDA31(), 3);
					}
				}
				else if (func_804() == 3)
				{
					func_802(unk_0x59E2AD1A8ACEDA31(), 3);
				}
				break;
			
			case 3:
				func_822(0);
				break;
		}
		if (unk_0xAFF96FDC3971E7EA())
		{
			if (func_48())
			{
				func_47(3);
			}
			switch (func_804())
			{
				case 0:
					if (func_18())
					{
						func_47(1);
					}
					break;
				
				case 1:
					if (func_17() == 4)
					{
						func_47(3);
					}
					else
					{
						func_1();
					}
					break;
				
				case 3:
					func_822(0);
					break;
				}
		}
	}
}

void func_1()
{
	switch (Local_102.f_55)
	{
		case 0:
			if (func_16())
			{
				func_15(1);
			}
			func_9();
			break;
		
		case 1:
			func_9();
			func_5();
			func_2();
			break;
		
		case 2:
			func_9();
			func_5();
			func_2();
			break;
		
		case 3:
			if (unk_0xCE990E643CD9D0E5(Local_102.f_1, 23))
			{
				func_15(4);
			}
			func_9();
			break;
		
		case 4:
			break;
	}
}

void func_2()
{
	if (unk_0xCE990E643CD9D0E5(Local_102.f_1, 12) && !unk_0xCE990E643CD9D0E5(Local_102.f_1, 17))
	{
		if (func_3(&(Local_102.f_53), 600000, 0))
		{
			unk_0xBE20AB8238688965(&(Local_102.f_1), 24);
		}
	}
}

int func_3(var uParam0, int iParam1, bool bParam2)
{
	if (iParam1 == -1)
	{
		return 1;
	}
	func_4(uParam0, bParam2, 0);
	if (unk_0x25DDB354A40FFCDB() && !bParam2)
	{
		if (unk_0x44F29CF6A0675F4F(unk_0x624736CA66E14161(unk_0x6CAAB7E78B5D978A(), *uParam0)) >= iParam1)
		{
			return 1;
		}
	}
	else if (unk_0x44F29CF6A0675F4F(unk_0x624736CA66E14161(unk_0x578C4EF320340AF7(), *uParam0)) >= iParam1)
	{
		return 1;
	}
	return 0;
}

void func_4(var uParam0, bool bParam1, bool bParam2)
{
	if (uParam0->f_1 == 0)
	{
		if (unk_0x25DDB354A40FFCDB() && !bParam1)
		{
			if (!bParam2)
			{
				*uParam0 = unk_0x6CAAB7E78B5D978A();
			}
			else
			{
				*uParam0 = unk_0x29B9AF1CB5B8175D();
			}
		}
		else
		{
			*uParam0 = unk_0x578C4EF320340AF7();
		}
		uParam0->f_1 = 1;
	}
}

void func_5()
{
	if (unk_0xCE990E643CD9D0E5(Local_102.f_1, 19))
	{
		func_8(2);
		func_15(3);
	}
	if (unk_0xCE990E643CD9D0E5(Local_102.f_1, 22))
	{
		func_8(0);
		func_15(3);
	}
	if (unk_0xCE990E643CD9D0E5(Local_102.f_1, 21))
	{
		func_8(1);
		func_15(3);
	}
	if (unk_0xCE990E643CD9D0E5(Local_102.f_1, 16))
	{
		unk_0xBE20AB8238688965(&(Local_102.f_1), 22);
		func_8(3);
		func_15(3);
	}
	if (unk_0xCE990E643CD9D0E5(Local_102.f_1, 13))
	{
		func_8(0);
		func_15(3);
	}
	if (!func_6(func_7(), 0, 1))
	{
		unk_0xBE20AB8238688965(&(Local_102.f_1), 18);
		func_8(4);
		func_15(3);
	}
}

int func_6(int iParam0, bool bParam1, bool bParam2)
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

int func_7()
{
	return Global_1630317[unk_0x460153A63B9477BC() /*595*/].f_11.f_35;
}

void func_8(int iParam0)
{
	Local_102.f_56 = iParam0;
}

void func_9()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = 0;
	while (iVar1 < unk_0xEFA28384DDD283E1())
	{
		if (unk_0xBD09DF93F957A0CF(unk_0x628A51AC66E80772(iVar1)))
		{
			if (func_17() < 3)
			{
				iVar2 = 0;
				while (iVar2 < func_14())
				{
					if (unk_0xCE990E643CD9D0E5(Local_103[iVar1 /*4*/].f_1, iVar2) && !unk_0xCE990E643CD9D0E5(Local_102.f_1, iVar2))
					{
						unk_0xBE20AB8238688965(&(Local_102.f_1), iVar2);
						Local_102.f_34++;
					}
					if (unk_0xCE990E643CD9D0E5(Local_103[iVar1 /*4*/].f_1, iVar2 + 4) && !unk_0xCE990E643CD9D0E5(Local_102.f_1, iVar2 + 4))
					{
						unk_0xBE20AB8238688965(&(Local_102.f_1), iVar2 + 4);
					}
					if (unk_0xCE990E643CD9D0E5(Local_103[iVar1 /*4*/].f_1, iVar2 + 8) && !unk_0xCE990E643CD9D0E5(Local_102.f_1, iVar2 + 8))
					{
						unk_0xBE20AB8238688965(&(Local_102.f_1), iVar2 + 8);
						Local_102.f_35++;
					}
					iVar2++;
				}
				if (unk_0xCE990E643CD9D0E5(Local_103[iVar1 /*4*/].f_1, 14))
				{
					if (!unk_0xCE990E643CD9D0E5(Local_102.f_1, 17))
					{
						func_11(unk_0xF1110FE23C67293A(iVar1));
						unk_0xBE20AB8238688965(&(Local_102.f_1), 17);
					}
					iVar0++;
				}
			}
			else if (func_17() == 3)
			{
				if (unk_0xCE990E643CD9D0E5(Local_103[iVar1 /*4*/].f_1, 21))
				{
					iVar0++;
				}
			}
			if (unk_0xCE990E643CD9D0E5(Local_103[iVar1 /*4*/].f_1, 12))
			{
				unk_0xBE20AB8238688965(&(Local_102.f_1), 12);
			}
		}
		iVar1++;
	}
	if (func_17() < 3)
	{
		if (iVar0 == (func_14() - (Local_102.f_34 + Local_102.f_35)))
		{
			unk_0xBE20AB8238688965(&(Local_102.f_1), 14);
		}
		else if (iVar0 == 1 && unk_0xCE990E643CD9D0E5(Local_102.f_1, 15))
		{
			unk_0xBE20AB8238688965(&(Local_102.f_1), 14);
		}
		else if (unk_0xCE990E643CD9D0E5(Local_102.f_1, 14))
		{
			unk_0xD2459066EA58CE43(&(Local_102.f_1), 14);
		}
		if (Local_102.f_34 + Local_102.f_35) == func_14()
		{
			unk_0xBE20AB8238688965(&(Local_102.f_1), 22);
		}
		if ((func_14() - (Local_102.f_34 + Local_102.f_35)) == 1)
		{
			unk_0xBE20AB8238688965(&(Local_102.f_1), 15);
		}
		if (Local_102.f_34 == func_14())
		{
			unk_0xBE20AB8238688965(&(Local_102.f_1), 13);
		}
		if (Local_102.f_35 == func_14())
		{
			unk_0xBE20AB8238688965(&(Local_102.f_1), 21);
		}
		if (unk_0xCE990E643CD9D0E5(Local_102.f_1, 12))
		{
			if (func_3(&(Local_102.f_49), func_10(), 0))
			{
				unk_0xBE20AB8238688965(&(Local_102.f_1), 16);
			}
		}
	}
	else if (func_17() == 3)
	{
		if (iVar0 == unk_0xB9E6DF0411C3488E())
		{
			unk_0xBE20AB8238688965(&(Local_102.f_1), 20);
		}
		else if (func_3(&(Local_102.f_51), 15000, 0))
		{
			unk_0xBE20AB8238688965(&(Local_102.f_1), 23);
		}
	}
}

int func_10()
{
	return Global_262145.f_12471;
}

void func_11(int iParam0)
{
	struct<14> Var0;
	
	Var0.f_10 = iParam0;
	Var0.f_11 = func_7();
	Var0.f_2 = 644842761;
	func_12(Var0, func_13(1));
}

void func_12(struct<2> Param0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, int iParam13)
{
	Param0 = -1949011582;
	Param0.f_1 = unk_0x460153A63B9477BC();
	if (!iParam13 == 0)
	{
		unk_0xB802750B43D4047C(1, &Param0, 14, iParam13);
	}
}

int func_13(int iParam0)
{
	var uVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = 0;
	while (iVar1 < unk_0xEFA28384DDD283E1())
	{
		if (unk_0xBD09DF93F957A0CF(unk_0x628A51AC66E80772(iVar1)))
		{
			iVar2 = unk_0x9019589211A13B02(unk_0x628A51AC66E80772(iVar1));
			if (func_6(iVar2, 0, 0))
			{
				if (iVar2 != unk_0x460153A63B9477BC() || iParam0)
				{
					unk_0xBE20AB8238688965(&uVar0, iVar2);
				}
			}
		}
		iVar1++;
	}
	return uVar0;
}

int func_14()
{
	return Local_102.f_5;
}

void func_15(int iParam0)
{
	Local_102.f_55 = iParam0;
}

int func_16()
{
	return 1;
}

int func_17()
{
	return Local_102.f_55;
}

int func_18()
{
	if (func_19())
	{
		return 1;
	}
	return 0;
}

int func_19()
{
	unk_0xF73A2DAF57FFFE87(&(Local_102.f_57), &(Local_102.f_58));
	if (!iLocal_83)
	{
		iLocal_82 = unk_0x344C570D6F8700DF(0, 3);
		if (Global_2540384.f_5188.f_6 == -1)
		{
			func_47(3);
			return 0;
		}
		func_46(iLocal_82);
		func_45(Global_2540384.f_5188.f_6);
		func_31();
		iLocal_83 = 1;
	}
	if (func_20())
	{
		return 1;
	}
	return 0;
}

int func_20()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0;
	while (iVar0 < func_14())
	{
		if (func_29(func_30(iVar0)))
		{
			if (!unk_0xF7DE07F319727299(func_28(iVar0)))
			{
				if (func_23(&(Local_102.f_6[iVar0]), func_30(iVar0), func_27(iVar0), func_26(iVar0), 1, 1, 1, 1, 0, 1, 0, 0, 0, 0))
				{
					func_22(unk_0x770D3B2B4702434A(func_28(iVar0)));
					func_21(unk_0x770D3B2B4702434A(func_28(iVar0)));
					unk_0x71E303DB05A7869C(unk_0x770D3B2B4702434A(func_28(iVar0)), 1);
					unk_0x7C47E49129337557(unk_0x770D3B2B4702434A(func_28(iVar0)), true);
					unk_0x0E765FE8467F7839(unk_0x770D3B2B4702434A(func_28(iVar0)), false);
					unk_0x494ACC4552B7881B(unk_0x770D3B2B4702434A(func_28(iVar0)), true);
					unk_0xAEBB7D261688301C(unk_0x770D3B2B4702434A(func_28(iVar0)), true);
					unk_0xF7F003F7673B7CDD(unk_0x770D3B2B4702434A(func_28(iVar0)), 0);
					unk_0x3C01F7F7B5077A7D(unk_0x770D3B2B4702434A(func_28(iVar0)), false, 0);
					unk_0xFDA21C60326FD7E5(unk_0x770D3B2B4702434A(func_28(iVar0)), 0);
					unk_0x40AC0CCFE1307C5A(unk_0x770D3B2B4702434A(func_28(iVar0)), false, 0);
					unk_0x2DC108CF0FB63848(unk_0x770D3B2B4702434A(func_28(iVar0)));
					unk_0x1491D110B8361BFE(unk_0x770D3B2B4702434A(func_28(iVar0)), 1);
					unk_0x54907AF8D51E6B48(unk_0x770D3B2B4702434A(func_28(iVar0)), 1);
					unk_0x74172B5AFD503628(unk_0x770D3B2B4702434A(func_28(iVar0)), false, 0);
					unk_0x7F1F4156EF7FAD8F(unk_0x770D3B2B4702434A(func_28(iVar0)), 1);
					unk_0x0312E5501F93E5AB(unk_0x770D3B2B4702434A(func_28(iVar0)), true);
					unk_0xE8E8B0AB0DDA30F4(unk_0x770D3B2B4702434A(func_28(iVar0)), 1, 1);
					if (unk_0x6844807B17DC2DFC("Not_Allow_As_Saved_Veh", 3))
					{
						unk_0x00AF6A2AAFB41525(unk_0x770D3B2B4702434A(func_28(iVar0)), "Not_Allow_As_Saved_Veh", 1);
					}
					if (unk_0x6844807B17DC2DFC("MPBitset", 3))
					{
						if (unk_0x871819940BD2E434(unk_0x770D3B2B4702434A(func_28(iVar0)), "MPBitset"))
						{
							iVar2 = unk_0x8C0800114C2864BE(unk_0x770D3B2B4702434A(func_28(iVar0)), "MPBitset");
						}
						unk_0xBE20AB8238688965(&iVar2, 10);
						unk_0xBE20AB8238688965(&iVar2, 11);
						unk_0x00AF6A2AAFB41525(unk_0x770D3B2B4702434A(func_28(iVar0)), "MPBitset", iVar2);
					}
					unk_0x74528AC0906CBABE(func_30(iVar0));
				}
			}
			else
			{
				iVar1++;
			}
		}
		iVar0++;
	}
	if (iVar1 == func_14())
	{
		return 1;
	}
	return 0;
}

void func_21(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	iVar0 = unk_0x1D3BB414B1AF67E6(iParam0);
	iVar1 = unk_0x54CE39788A7E7C3D(iParam0);
	if (iVar0 > 0)
	{
		iVar3 = unk_0x344C570D6F8700DF(0, iVar0);
		unk_0xA6595E9B6170C788(iParam0, iVar3);
	}
	iVar2 = unk_0x344C570D6F8700DF(0, iVar1);
	unk_0x29897D845D2C290B(iParam0, iVar2);
}

void func_22(int iParam0)
{
	if (!Global_262145.f_4684)
	{
		unk_0x131A211B8EEF6BF0(iParam0, 0);
	}
}

int func_23(var uParam0, int iParam1, struct<3> Param2, float fParam3, int iParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9, bool bParam10, bool bParam11, bool bParam12, bool bParam13)
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
	iVar1 = unk_0xCE4780E24AFDFBF9(iParam1, Param2, fParam3, bParam5, iParam4, bParam12);
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
			unk_0x7C47E49129337557(iVar1, bParam8);
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
			func_24(Param2, fParam3, iParam1, iVar1);
			return 1;
		}
	}
	return 0;
}

void func_24(struct<3> Param0, float fParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	if (func_25(unk_0x460153A63B9477BC(), Param0, iParam2) > -1)
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

int func_25(int iParam0, struct<3> Param1, int iParam2)
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

float func_26(int iParam0)
{
	return Local_102.f_29[iParam0];
}

Vector3 func_27(int iParam0)
{
	return Local_102.f_16[iParam0 /*3*/];
}

var func_28(int iParam0)
{
	return Local_102.f_6[iParam0];
}

bool func_29(int iParam0)
{
	if (iParam0 == 0)
	{
		return 1;
	}
	unk_0x78FCB2E22C41B9D5(iParam0);
	return unk_0x7D167B9A0CCDA347(iParam0);
}

int func_30(int iParam0)
{
	return Local_102.f_11[iParam0];
}

void func_31()
{
	struct<3> Var0;
	struct<3> Var1;
	struct<3> Var2;
	struct<3> Var3;
	
	func_44(2);
	switch (func_43())
	{
		case 0:
			Var0 = { -1039.623f, -855.3737f, 3.8758f };
			Var1 = { -1112.362f, -855.0657f, 12.531f };
			Var2 = { 0f, 0f, 0f };
			Var3 = { 0f, 0f, 0f };
			func_42(1);
			if (func_39(func_7()) == 0)
			{
				func_44(1);
			}
			func_38(0, joaat("pigalle"));
			func_37(0, 237.632f);
			func_38(1, joaat("rhapsody"));
			func_37(1, 218.751f);
			func_33(0, func_34(0));
			func_33(1, func_34(1));
			break;
		
		case 1:
			Var0 = { 861.2779f, -1357.735f, 25.0962f };
			Var1 = { 833.7587f, -1414.288f, 25.1543f };
			Var2 = { 0f, 0f, 0f };
			Var3 = { 0f, 0f, 0f };
			func_42(1);
			if (func_39(func_7()) == 0)
			{
				func_44(1);
			}
			func_38(0, joaat("comet2"));
			func_37(0, 269.772f);
			func_38(1, joaat("banshee"));
			func_37(1, 332.369f);
			func_33(0, func_34(0));
			func_33(1, func_34(1));
			break;
		
		case 2:
			Var0 = { 471.1763f, -1024.233f, 27.1807f };
			Var1 = { 407.7268f, -993.1101f, 28.2665f };
			Var2 = { 0f, 0f, 0f };
			Var3 = { 0f, 0f, 0f };
			func_42(1);
			if (func_39(func_7()) == 0)
			{
				func_44(1);
			}
			func_38(0, joaat("dominator"));
			func_37(0, 95.7556f);
			func_38(1, joaat("gauntlet"));
			func_37(1, 231.8613f);
			func_33(0, func_34(0));
			func_33(1, func_34(1));
			break;
		
		case 3:
			Var0 = { 530.3759f, -29.6076f, 69.6295f };
			Var1 = { 628.4064f, 23.6166f, 86.6466f };
			Var2 = { 0f, 0f, 0f };
			Var3 = { 0f, 0f, 0f };
			func_42(1);
			if (func_39(func_7()) == 0)
			{
				func_44(1);
			}
			func_38(0, joaat("feltzer3"));
			func_37(0, 31.0119f);
			func_38(1, joaat("coquette3"));
			func_37(1, 71.2592f);
			func_33(0, func_34(0));
			func_33(1, func_34(1));
			break;
		
		case 4:
			Var0 = { 1854.039f, 3675.524f, 32.7389f };
			Var1 = { 1867.226f, 3694.696f, 32.6526f };
			Var2 = { 1866.02f, 3682.976f, 32.7085f };
			Var3 = { 1861.596f, 3681.005f, 32.7102f };
			func_42(0);
			func_44(func_39(func_7()) + 1);
			func_38(0, joaat("blazer"));
			func_37(0, 30.2891f);
			func_38(1, joaat("blazer"));
			func_37(1, 209.6525f);
			func_38(2, joaat("blazer"));
			func_37(1, 19.0028f);
			func_38(3, joaat("blazer"));
			func_37(1, 209.3371f);
			func_33(0, func_34(0));
			func_33(1, func_34(1));
			func_33(2, func_34(2));
			func_33(3, func_34(3));
			break;
		
		case 5:
			Var0 = { -451.4124f, 5998.274f, 30.3405f };
			Var1 = { -461.0853f, 6047.062f, 30.3405f };
			Var2 = { -438.0848f, 5980.269f, 30.4901f };
			Var3 = { -434.6339f, 5983.896f, 30.4901f };
			func_42(0);
			func_44(func_39(func_7()) + 1);
			func_38(0, joaat("lectro"));
			func_37(0, 267.2382f);
			func_38(1, joaat("lectro"));
			func_37(1, 315.4168f);
			func_38(2, joaat("lectro"));
			func_37(1, 251.2614f);
			func_38(3, joaat("lectro"));
			func_37(1, 44.8117f);
			func_33(0, func_34(0));
			func_33(1, func_34(1));
			func_33(2, func_34(2));
			func_33(3, func_34(3));
			break;
	}
	if (func_14() == 2)
	{
		func_32(0, Var0);
		func_32(1, Var1);
	}
	else
	{
		func_32(0, Var0);
		func_32(1, Var1);
		func_32(2, Var2);
		func_32(3, Var3);
	}
}

void func_32(int iParam0, struct<3> Param1)
{
	Local_102.f_16[iParam0 /*3*/] = { Param1 };
}

void func_33(int iParam0, struct<3> Param1)
{
	Local_102.f_36[iParam0 /*3*/] = { Param1 };
}

Vector3 func_34(int iParam0)
{
	if (iParam0 == 0)
	{
		switch (func_36())
		{
			case 0:
				if (func_35())
				{
					return 1685.737f, 6435.972f, 31.3601f;
				}
				return 255.4336f, -3057.406f, 4.7974f;
				break;
			
			case 1:
				if (func_35())
				{
					return -1576.524f, 5159.825f, 18.7791f;
				}
				return -965.0558f, -2072.717f, 8.4059f;
				break;
			
			case 2:
				if (func_35())
				{
					return 756.7225f, 4179.839f, 39.6685f;
				}
				return -1209.318f, -1305.557f, 3.7185f;
				break;
		}
	}
	else if (iParam0 == 1)
	{
		switch (func_36())
		{
			case 0:
				if (func_35())
				{
					return 1682.386f, 6434.001f, 31.1545f;
				}
				return 248.4273f, -3064.162f, 4.7802f;
				break;
			
			case 1:
				if (func_35())
				{
					return -1581.573f, 5159.565f, 18.5702f;
				}
				return -971.9658f, -2065.526f, 8.4059f;
				break;
			
			case 2:
				if (func_35())
				{
					return 762.5063f, 4179.577f, 39.6335f;
				}
				return -1207.275f, -1310.006f, 3.7944f;
				break;
		}
	}
	else if (iParam0 == 2)
	{
		switch (func_36())
		{
			case 0:
				return 252.0648f, -3060.967f, 4.7768f;
				break;
			
			case 1:
				return -975.444f, -2061.842f, 8.4059f;
				break;
			
			case 2:
				return -1222.124f, -1309.285f, 3.5209f;
				break;
		}
	}
	else if (iParam0 == 3)
	{
		switch (func_36())
		{
			case 0:
				return 244.6635f, -3068.048f, 4.7864f;
				break;
			
			case 1:
				return -968.5905f, -2069.149f, 8.4059f;
				break;
			
			case 2:
				return -1229.652f, -1321.23f, 3.0921f;
				break;
			}
	}
	return 1685.737f, 6435.972f, 31.3601f;
}

bool func_35()
{
	return Local_102.f_4;
}

int func_36()
{
	return Local_102.f_3;
}

void func_37(int iParam0, float fParam1)
{
	Local_102.f_29[iParam0] = fParam1;
}

void func_38(int iParam0, int iParam1)
{
	Local_102.f_11[iParam0] = iParam1;
}

int func_39(int iParam0)
{
	if (func_41(iParam0) == func_40())
	{
		return 0;
	}
	return Global_1630317[iParam0 /*595*/].f_11.f_19;
}

int func_40()
{
	return -1;
}

int func_41(int iParam0)
{
	if (iParam0 != func_40())
	{
		return Global_1630317[iParam0 /*595*/].f_11;
	}
	return func_40();
}

void func_42(int iParam0)
{
	Local_102.f_4 = iParam0;
}

int func_43()
{
	return Local_102.f_2;
}

void func_44(int iParam0)
{
	Local_102.f_5 = iParam0;
}

void func_45(var uParam0)
{
	Local_102.f_2 = uParam0;
}

void func_46(int iParam0)
{
	Local_102.f_3 = iParam0;
}

void func_47(int iParam0)
{
	Local_102 = iParam0;
}

int func_48()
{
	if (Global_2540384.f_5188.f_40)
	{
		Global_2540384.f_5188.f_40 = 0;
		return 1;
	}
	return 0;
}

int func_49(bool bParam0)
{
	if (func_59(1))
	{
		return 1;
	}
	if (Global_2540384.f_5188.f_41)
	{
		Global_2540384.f_5188.f_41 = 0;
		return 1;
	}
	if (bParam0)
	{
		if (func_7() == func_40() || !func_6(func_7(), 0, 1))
		{
			return 1;
		}
	}
	if (!func_57(unk_0x460153A63B9477BC()))
	{
		if (func_50())
		{
			return 1;
		}
	}
	return 0;
}

int func_50()
{
	if (func_56(unk_0x460153A63B9477BC()) && func_53())
	{
		return 1;
	}
	if (func_51())
	{
		return 1;
	}
	return 0;
}

bool func_51()
{
	return func_52() == 1;
}

int func_52()
{
	return Global_1704006;
}

int func_53()
{
	switch (func_54(func_55(unk_0x460153A63B9477BC())))
	{
		case 11:
		case 14:
			return 1;
		
		default:
	}
	return 0;
}

int func_54(int iParam0)
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

int func_55(int iParam0)
{
	if (iParam0 != func_40() && func_6(iParam0, 1, 1))
	{
		return Global_2425869[iParam0 /*443*/].f_314.f_15;
	}
	return -1;
}

int func_56(int iParam0)
{
	if (iParam0 != func_40() && func_6(iParam0, 1, 1))
	{
		return unk_0xCE990E643CD9D0E5(Global_2425869[iParam0 /*443*/].f_314, 4);
	}
	return 0;
}

int func_57(int iParam0)
{
	if (func_58(iParam0) != func_40())
	{
		return func_58(iParam0) == func_41(iParam0);
	}
	return 0;
}

int func_58(int iParam0)
{
	return Global_1630317[iParam0 /*595*/].f_11.f_35;
}

int func_59(bool bParam0)
{
	bool bVar0;
	
	if (!func_104(1))
	{
		bVar0 = false;
		if (Global_1630317[unk_0x460153A63B9477BC() /*595*/].f_11.f_57 != func_40())
		{
			if (func_6(Global_1630317[unk_0x460153A63B9477BC() /*595*/].f_11.f_57, 0, 1))
			{
				if ((Global_1630317[unk_0x460153A63B9477BC() /*595*/].f_11.f_24 == 4 || Global_1630317[unk_0x460153A63B9477BC() /*595*/].f_11.f_24 == 8) || Global_1630317[unk_0x460153A63B9477BC() /*595*/].f_11.f_24 == 6)
				{
					bVar0 = true;
				}
			}
		}
		else if (func_101(func_102(unk_0x460153A63B9477BC())) == 0)
		{
			bVar0 = true;
		}
		if (bVar0)
		{
			if (bParam0)
			{
				func_100(31);
				if (func_99(func_102(unk_0x460153A63B9477BC())))
				{
					func_100(81);
				}
				if (Global_1630317[unk_0x460153A63B9477BC() /*595*/].f_11.f_57 != func_40() && unk_0x166E920FB00B2DBB(Global_1630317[unk_0x460153A63B9477BC() /*595*/].f_11.f_57))
				{
					Global_1627096 = func_62(Global_1630317[unk_0x460153A63B9477BC() /*595*/].f_11.f_57, -2, 0, 0, 0);
					if (!func_60(Global_1630317[unk_0x460153A63B9477BC() /*595*/].f_11.f_57))
					{
						func_100(88);
					}
				}
				else
				{
					Global_1627096 = 1;
				}
				Global_1627080 = { Global_1630317[unk_0x460153A63B9477BC() /*595*/].f_11.f_104 };
			}
			return 1;
		}
	}
	return 0;
}

bool func_60(int iParam0)
{
	return func_61(iParam0, 1);
}

int func_61(int iParam0, int iParam1)
{
	if (iParam0 != func_40())
	{
		if (Global_1630317[iParam0 /*595*/].f_11 != func_40())
		{
			if (Global_1630317[iParam0 /*595*/].f_11 == iParam0 && Global_1630317[iParam0 /*595*/].f_11.f_423 == iParam1)
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_62(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	int iVar1;
	
	if (func_94(iParam0) && !bParam4)
	{
		if (bParam2)
		{
			return 0;
		}
		else
		{
			return 1;
		}
	}
	if (iParam1 == -2)
	{
		iVar0 = unk_0x6CC163E30ECE0790(iParam0);
		if (iVar0 > -1 && iVar0 < 4)
		{
			if (Global_4456448.f_77785[iVar0] != -1)
			{
				iParam1 = iVar0;
			}
		}
	}
	if (((func_94(unk_0x460153A63B9477BC()) || (func_93() && func_92())) && !unk_0xCE990E643CD9D0E5(Global_2540384.f_4655, 31)) && !bParam4)
	{
		iVar1 = func_91();
		if (unk_0xAE06B9E39EBDE049(iVar1))
		{
			if (unk_0xD0390A93AF3907B8(iVar1))
			{
				if (unk_0xE4400E48E081F17A(iVar1) != -1)
				{
					if (func_6(unk_0xE4400E48E081F17A(iVar1), 0, 1))
					{
						if ((iParam1 > -1 && unk_0xFC559366953F62B3()) && iParam1 < 4)
						{
							if (Global_4456448.f_77785[iParam1] != -1)
							{
								return func_89(iParam1, iParam0, 0);
							}
							else
							{
								return func_75(iParam0, unk_0xE4400E48E081F17A(iVar1), iParam1, bParam2, bParam3);
							}
						}
						else
						{
							return func_75(iParam0, unk_0xE4400E48E081F17A(iVar1), iParam1, bParam2, bParam3);
						}
					}
				}
			}
			else if ((iParam1 > -1 && unk_0xFC559366953F62B3()) && iParam1 < 4)
			{
				if (Global_4456448.f_77785[iParam1] != -1)
				{
					return func_89(iParam1, iParam0, 0);
				}
				else
				{
					return func_63(0, -1, 0);
				}
			}
			else
			{
				return func_63(0, -1, 0);
			}
		}
	}
	if ((iParam1 > -1 && unk_0xFC559366953F62B3()) && iParam1 < 4)
	{
		if (Global_4456448.f_77785[iParam1] != -1)
		{
			return func_89(iParam1, iParam0, 0);
		}
		else
		{
			return func_75(iParam0, unk_0x460153A63B9477BC(), iParam1, bParam2, bParam3);
		}
	}
	return func_75(iParam0, unk_0x460153A63B9477BC(), iParam1, bParam2, bParam3);
}

int func_63(bool bParam0, int iParam1, bool bParam2)
{
	return func_64(unk_0x460153A63B9477BC(), bParam0, iParam1, bParam2);
}

int func_64(int iParam0, bool bParam1, int iParam2, bool bParam3)
{
	int iVar0;
	
	if (!unk_0x166E920FB00B2DBB(iParam0))
	{
		return 3;
	}
	iVar0 = unk_0x6CC163E30ECE0790(iParam0);
	if ((func_74() || (func_73() && func_71())) && Global_1388252.f_1)
	{
		if (bParam1)
		{
			return func_70(iParam2, iVar0);
		}
		else
		{
			return func_70(iVar0, iVar0);
		}
	}
	if (bParam1)
	{
		if (iParam2 > -1)
		{
			if (func_69(iVar0, iParam2, 0) && !unk_0xCE990E643CD9D0E5(Global_4456448.f_15, 18))
			{
				if (iVar0 == iParam2)
				{
					return func_68(1);
				}
				else
				{
					return func_68(0);
				}
			}
			else if (bParam3)
			{
				return 28;
			}
			else if (unk_0xCE990E643CD9D0E5(Global_4456448.f_4, 20))
			{
				return func_65(iVar0, iParam2, 1, 4);
			}
			else
			{
				return func_65(iVar0, iParam2, 0, 4);
			}
		}
		return 28;
	}
	if (iVar0 == iParam2 || iParam2 == -1)
	{
		return func_68(1);
	}
	return func_68(0);
}

int func_65(int iParam0, int iParam1, bool bParam2, int iParam3)
{
	int iVar0;
	
	iVar0 = func_67(iParam0, iParam1, iParam3);
	if (func_66(Global_4456448.f_82708, 1))
	{
		if (iVar0 == 1)
		{
			iVar0 = 0;
		}
	}
	if (bParam2)
	{
		switch (iVar0)
		{
			case 0:
				return 28;
			
			case 1:
				return 29;
			
			case 2:
				return 30;
			
			case 3:
				return 31;
			
			case 4:
				return 32;
			
			case 5:
				return 33;
			
			case 6:
				return 34;
			
			case 7:
				return 35;
			
			case 8:
				return 36;
			
			case 9:
				return 37;
			
			case 10:
				return 38;
			
			case 11:
				return 39;
			
			case 12:
				return 40;
			
			case 13:
				return 41;
			
			case 14:
				return 42;
			
			case 15:
				return 43;
			
			default:
		}
	}
	else
	{
		switch (iVar0)
		{
			case 0:
				return 28;
			
			case 1:
				return 29;
			
			case 2:
				return 30;
			}
		
		default:
	}
	return 28;
}

int func_66(int iParam0, bool bParam1)
{
	int iVar0;
	
	if (bParam1)
	{
		if (Global_4456448.f_129348 == 65)
		{
			return 1;
		}
	}
	if (iParam0 == 0)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 <= 6)
	{
		if (iParam0 == Global_262145.f_9021[iVar0])
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_67(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < iParam2)
	{
		if (iVar0 == iParam1)
		{
			return iVar1;
		}
		else if (!iParam0 == iVar0)
		{
			if (!func_69(iParam0, iVar0, 0))
			{
				iVar1++;
			}
		}
		iVar0++;
	}
	return -1;
}

int func_68(bool bParam0)
{
	if (bParam0)
	{
		return 118;
	}
	return 116;
}

int func_69(int iParam0, int iParam1, int iParam2)
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

int func_70(int iParam0, int iParam1)
{
	if (iParam0 == -1)
	{
		iParam0 = func_67(iParam1, iParam0, 4);
	}
	switch (iParam0)
	{
		case 0:
			return 15;
		
		case 1:
			return 21;
		
		case 2:
			return 24;
		
		case 3:
			return 18;
		
		default:
	}
	return 28;
}

bool func_71()
{
	if (func_72())
	{
		return 1;
	}
	return unk_0xCE990E643CD9D0E5(Global_4456448.f_133494, 4);
}

bool func_72()
{
	return unk_0xCE990E643CD9D0E5(Global_4456448.f_123318, 12);
}

bool func_73()
{
	if (unk_0xFC559366953F62B3())
	{
		return unk_0xCE990E643CD9D0E5(Global_4456448.f_133494, 0);
	}
	return ((unk_0xCE990E643CD9D0E5(Global_4456448.f_133494, 0) || Global_1655243) && unk_0x7B70881748D166CD(joaat("fm_deathmatch_creator")) > 0);
}

int func_74()
{
	if (func_72() && unk_0xFC559366953F62B3())
	{
		return 1;
	}
	return 0;
}

int func_75(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	if (iParam2 == -2)
	{
		iVar0 = unk_0x6CC163E30ECE0790(iParam0);
	}
	else
	{
		iVar0 = iParam2;
	}
	if (Global_1590682[unk_0x460153A63B9477BC() /*883*/] == 148)
	{
		bVar1 = true;
	}
	iVar2 = iParam0;
	if (iVar2 > -1)
	{
		if (Global_1590682[iVar2 /*883*/] == 148)
		{
			bVar1 = true;
		}
	}
	if (!bVar1)
	{
		if (iVar0 != -1)
		{
			if (func_83())
			{
				iVar3 = func_80(iParam0);
				if (!iVar3 == -1)
				{
					return func_78(iVar3);
				}
			}
			if ((func_77(iParam1, iParam0, iVar0, 0) && !unk_0xCE990E643CD9D0E5(Global_4456448.f_15, 18)) || ((func_69(unk_0x6CC163E30ECE0790(iParam1), unk_0x6CC163E30ECE0790(iParam0), 0) && unk_0xCE990E643CD9D0E5(Global_4456448.f_15, 23)) && !unk_0xCE990E643CD9D0E5(Global_4456448.f_15, 18)))
			{
				return func_68(1);
			}
			else if (unk_0xCE990E643CD9D0E5(Global_4456448.f_15, 26))
			{
				return func_76(1);
			}
			else
			{
				return func_64(iParam1, 1, iVar0, bParam4);
			}
		}
		else if ((Global_1574416 || Global_1574407) || Global_1590682[iParam0 /*883*/] == 0)
		{
			if (iParam0 == iParam1 || (Global_1574416 == 1 && Global_1574426 == 0))
			{
				return func_68(1);
			}
			else
			{
				return func_64(iParam1, 1, iVar0, bParam4);
			}
		}
		if (Global_1574411 && Global_1573907.f_14 == iParam0)
		{
			return 28;
		}
	}
	iVar4 = func_80(iParam0);
	if (!iVar4 == -1)
	{
		return func_78(iVar4);
	}
	if (bParam3)
	{
		return 0;
	}
	return 1;
}

int func_76(bool bParam0)
{
	if (bParam0)
	{
		return 119;
	}
	return 116;
}

bool func_77(int iParam0, int iParam1, int iParam2, int iParam3)
{
	if (iParam2 == -2)
	{
		if (iParam3 == 0)
		{
			if (unk_0x6CC163E30ECE0790(iParam0) == -1 && unk_0x6CC163E30ECE0790(iParam1) == -1)
			{
				return 0;
			}
		}
		return unk_0x6CC163E30ECE0790(iParam0) == unk_0x6CC163E30ECE0790(iParam1);
	}
	else
	{
		if (iParam3 == 0)
		{
			if (unk_0x6CC163E30ECE0790(iParam0) == -1 && iParam2 == -1)
			{
				return 0;
			}
		}
		return unk_0x6CC163E30ECE0790(iParam0) == iParam2;
	}
	return unk_0x6CC163E30ECE0790(iParam0) == iParam2;
}

int func_78(int iParam0)
{
	int iVar0;
	
	if (iParam0 > -1)
	{
		iVar0 = func_79(iParam0);
		switch (iVar0)
		{
			case 0:
				return 192;
			
			case 1:
				return 193;
			
			case 2:
				return 194;
			
			case 3:
				return 195;
			
			case 4:
				return 196;
			
			case 5:
				return 197;
			
			case 6:
				return 198;
			
			case 7:
				return 199;
			
			case 8:
				return 200;
			
			case 9:
				return 201;
			
			case 10:
				return 202;
			
			case 11:
				return 203;
			
			case 12:
				return 204;
			
			case 13:
				return 205;
			
			case 14:
				return 206;
			}
		
		default:
	}
	return 1;
}

var func_79(int iParam0)
{
	return Global_2417956.f_818.f_44[iParam0 /*2*/].f_1;
}

int func_80(int iParam0)
{
	if (!iParam0 == func_40())
	{
		if (func_81(iParam0, 1))
		{
			return Global_2417956.f_818.f_11[func_41(iParam0)];
		}
	}
	return -1;
}

bool func_81(int iParam0, bool bParam1)
{
	if (!bParam1)
	{
		if (func_82(iParam0))
		{
			return 0;
		}
	}
	return Global_1630317[iParam0 /*595*/].f_11 != func_40();
}

int func_82(int iParam0)
{
	if (iParam0 != func_40())
	{
		if (Global_1630317[iParam0 /*595*/].f_11 != func_40())
		{
			return Global_1630317[iParam0 /*595*/].f_11 == iParam0;
		}
	}
	return 0;
}

int func_83()
{
	if ((((func_88() || func_87()) || func_86()) || func_85()) || func_84())
	{
		return 1;
	}
	if (unk_0xFC559366953F62B3() && unk_0xCE990E643CD9D0E5(Global_4456448.f_36, 1))
	{
		return 1;
	}
	return 0;
}

var func_84()
{
	return Global_2451787.f_23;
}

var func_85()
{
	return Global_2451787.f_20;
}

bool func_86()
{
	return Global_2451787.f_18;
}

var func_87()
{
	return Global_2451787.f_17;
}

var func_88()
{
	return Global_2451787.f_16;
}

int func_89(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = Global_969055.f_14[iParam0];
	if (func_83())
	{
		iVar2 = func_80(iParam1);
		if (!iVar2 == -1)
		{
			return func_78(iVar2);
		}
	}
	if (iVar1 > -1 && iVar1 < 17)
	{
		if (unk_0xCE990E643CD9D0E5(Global_4456448.f_592[iParam0 /*16355*/].f_7079[iVar1], 24))
		{
			return 18;
		}
	}
	if (iParam0 > -1 && iParam1 != func_40())
	{
		if (Global_4456448.f_77785[iParam0] != -1 && Global_4456448.f_77785[iParam0] <= 4)
		{
			if (Global_4456448.f_77785[iParam0] == 0)
			{
				iVar0 = 15;
			}
			else if (Global_4456448.f_77785[iParam0] == 1)
			{
				iVar0 = 18;
			}
			else if (Global_4456448.f_77785[iParam0] == 2)
			{
				iVar0 = 24;
			}
			else if (Global_4456448.f_77785[iParam0] == 4)
			{
				if (unk_0xCE990E643CD9D0E5(Global_4456448.f_15, 29))
				{
					iVar0 = 21;
				}
				else
				{
					iVar0 = 6;
				}
			}
			else
			{
				iVar0 = Global_4456448.f_77785[iParam0];
			}
		}
		else
		{
			iVar0 = func_64(iParam1, !bParam2, iParam0, 0);
		}
		if (unk_0xCE990E643CD9D0E5(Global_4456448.f_21, 13))
		{
			iVar0 = func_90(iParam0);
		}
		if (unk_0xCE990E643CD9D0E5(Global_4456448.f_24, 29))
		{
			iVar0 = 0;
		}
		if (unk_0xCE990E643CD9D0E5(Global_4456448.f_15, 26) && !func_69(iParam0, unk_0x6CC163E30ECE0790(iParam1), 0))
		{
			iVar0 = func_76(1);
		}
	}
	else
	{
		iVar0 = 1;
	}
	return iVar0;
}

int func_90(int iParam0)
{
	int iVar0;
	
	switch (iParam0)
	{
		case 0:
			iVar0 = Global_4456448.f_129476;
			break;
		
		case 1:
			iVar0 = Global_4456448.f_129477;
			break;
		
		case 2:
			iVar0 = Global_4456448.f_129478;
			break;
		
		case 3:
			iVar0 = Global_4456448.f_129479;
			break;
	}
	switch (iVar0)
	{
		case 0:
			return 15;
		
		case 1:
			return 21;
		
		case 2:
			return 24;
		
		case 3:
			return 18;
		
		case 4:
			return 6;
		
		case 5:
			return 9;
		
		case 6:
			return 3;
		
		case 7:
			return 1;
		
		case 8:
			return 12;
		
		case 9:
			return 2;
		
		default:
	}
	return 2;
}

var func_91()
{
	return Global_2359302.f_2;
}

bool func_92()
{
	return unk_0xCE990E643CD9D0E5(Global_2359302, 4);
}

bool func_93()
{
	return unk_0xCE990E643CD9D0E5(Global_1590682[unk_0x460153A63B9477BC() /*883*/].f_39.f_18, 14);
}

int func_94(int iParam0)
{
	if (func_96(iParam0, 0))
	{
		return 1;
	}
	if (func_95())
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

bool func_95()
{
	return unk_0xCE990E643CD9D0E5(Global_2359302, 3);
}

bool func_96(int iParam0, int iParam1)
{
	bool bVar0;
	
	if (iParam0 == unk_0x460153A63B9477BC())
	{
		bVar0 = func_97(-1, 0) == 8;
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

int func_97(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_98();
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

int func_98()
{
	return Global_1312763;
}

int func_99(int iParam0)
{
	switch (iParam0)
	{
		case 179:
		case 180:
		case 148:
			if (Global_1590682[unk_0x460153A63B9477BC() /*883*/] == 148 && func_61(Global_1630317[unk_0x460153A63B9477BC() /*595*/].f_11.f_35, 1))
			{
				return 1;
			}
			else
			{
				return 0;
			}
			break;
		
		case 182:
		case 183:
		case 185:
		case 186:
		case 189:
		case 190:
		case 191:
		case 192:
		case 193:
		case 194:
		case 195:
		case 197:
		case 198:
		case 199:
		case 200:
		case 201:
		case 205:
		case 207:
		case 208:
		case 209:
		case 210:
		case 211:
			return 1;
	}
	return 0;
}

void func_100(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	unk_0xBE20AB8238688965(&(Global_2540384.f_5188.f_7[iVar0]), iVar1);
}

int func_101(int iParam0)
{
	switch (iParam0)
	{
		case 153:
		case 154:
		case 155:
		case 162:
		case 160:
		case 163:
		case 167:
		case 168:
		case 169:
		case 171:
		case 172:
		case 178:
		case 190:
		case 191:
		case 192:
		case 189:
		case 193:
		case 194:
		case 199:
		case 205:
		case 210:
		case 225:
		case 226:
		case 227:
		case 229:
		case 230:
		case 233:
		case 237:
		case 238:
		case 239:
		case 240:
		case 249:
		case 250:
		case 243:
		case 158:
		case 181:
		case 256:
		case 258:
			return 0;
		
		case 152:
		case 159:
		case 142:
		case 164:
		case 157:
		case 166:
		case 170:
		case 173:
		case 180:
		case 183:
		case 185:
		case 182:
		case 186:
		case 197:
		case 200:
		case 201:
		case 198:
		case 195:
		case 207:
		case 208:
		case 209:
		case 214:
		case 215:
		case 216:
		case 217:
		case 218:
		case 219:
		case 220:
		case 221:
		case 241:
		case 242:
		case 244:
		case 248:
		case 24:
		case 26:
		case 259:
			return 1;
		
		case 148:
		case 179:
			return 2;
		
		default:
	}
	return -1;
}

int func_102(int iParam0)
{
	if (func_103(iParam0, 0))
	{
		return Global_1630317[iParam0 /*595*/].f_11.f_33;
	}
	return -1;
}

int func_103(int iParam0, int iParam1)
{
	if (Global_1630317[iParam0 /*595*/].f_11.f_33 != -1 || (iParam1 && Global_1630317[iParam0 /*595*/].f_11.f_32 != -1))
	{
		return 1;
	}
	return 0;
}

bool func_104(bool bParam0)
{
	return func_81(unk_0x460153A63B9477BC(), bParam0);
}

void func_105()
{
	int iVar0;
	
	if (unk_0x8F678487EEBD8CE4(iLocal_87))
	{
		unk_0x93370FA10F15BE44(&iLocal_87);
	}
	iVar0 = 0;
	while (iVar0 < func_14())
	{
		if (unk_0x8F678487EEBD8CE4(iLocal_86[iVar0]))
		{
			unk_0x93370FA10F15BE44(&(iLocal_86[iVar0]));
		}
		if (unk_0x8F678487EEBD8CE4(iLocal_85[iVar0]))
		{
			unk_0x93370FA10F15BE44(&(iLocal_85[iVar0]));
		}
		iVar0++;
	}
}

void func_106()
{
	if (!func_112())
	{
		return;
	}
	if (!unk_0x856D5567211886A2(unk_0x6C5C6B207AA78253()) == Global_1312603.f_9)
	{
		return;
	}
	func_107();
}

void func_107()
{
	func_109();
	func_108(0);
}

void func_108(bool bParam0)
{
	bool bVar0;
	
	bVar0 = unk_0x25DDB354A40FFCDB();
	Global_1312603 = 20;
	StringCopy(&(Global_1312603.f_1), "", 32);
	Global_1312603.f_9 = 0;
	if (bVar0)
	{
		Global_1312603.f_10 = unk_0x6CAAB7E78B5D978A();
		Global_1312603.f_11 = unk_0x6CAAB7E78B5D978A();
	}
	StringCopy(&(Global_1312603.f_12), "", 16);
	StringCopy(&(Global_1312603.f_16), "", 64);
	StringCopy(&(Global_1312603.f_32), "", 64);
	Global_1312603.f_52 = 0;
	Global_1312603.f_53 = 0;
	Global_1312603.f_54 = 0;
	Global_1312603.f_55 = -1;
	Global_1312603.f_56 = 0;
	Global_1312603.f_59 = 0;
	if (bParam0)
	{
		return;
	}
}

void func_109()
{
	if (!func_111())
	{
	}
	if (func_112())
	{
		unk_0x6BF33E036B49E0DD(&(Global_1312603.f_12));
		func_110();
		unk_0x9F579D40FBAC4233();
	}
}

void func_110()
{
	switch (Global_1312603)
	{
		case 20:
			return;
		
		case 0:
			return;
		
		case 1:
			unk_0x42710E9E08FA375A(Global_1312603.f_52);
			return;
		
		case 2:
			unk_0x42710E9E08FA375A(Global_1312603.f_52);
			unk_0x42710E9E08FA375A(Global_1312603.f_53);
			return;
		
		case 3:
			unk_0x6A826E35A3096ED0(&(Global_1312603.f_16));
			return;
		
		case 4:
			unk_0x6A826E35A3096ED0(&(Global_1312603.f_16));
			unk_0x6A826E35A3096ED0(&(Global_1312603.f_32));
			return;
		
		case 5:
			unk_0x9EFD301E3BE8324E(&(Global_1312603.f_16));
			return;
		
		case 6:
			unk_0x7006FC1051C85FCA(Global_1312603.f_56);
			unk_0x9EFD301E3BE8324E(&(Global_1312603.f_16));
			return;
		
		case 7:
			unk_0x6A826E35A3096ED0(&(Global_1312603.f_16));
			return;
		
		case 8:
			unk_0x7006FC1051C85FCA(Global_1312603.f_56);
			unk_0x6A826E35A3096ED0(&(Global_1312603.f_16));
			return;
		
		case 9:
			unk_0x05CA0125610AB2F4(&(Global_1312603.f_16));
			return;
		
		case 10:
			unk_0x9EFD301E3BE8324E(&(Global_1312603.f_16));
			unk_0x9EFD301E3BE8324E(&(Global_1312603.f_32));
			return;
		
		case 12:
			unk_0x9EFD301E3BE8324E(&(Global_1312603.f_16));
			unk_0x6A826E35A3096ED0(&(Global_1312603.f_32));
			return;
		
		case 13:
			unk_0x7006FC1051C85FCA(Global_1312603.f_56);
			unk_0x6A826E35A3096ED0(&(Global_1312603.f_16));
			unk_0x7006FC1051C85FCA(Global_1312603.f_57);
			unk_0x6A826E35A3096ED0(&(Global_1312603.f_32));
			return;
		
		case 11:
			unk_0x05CA0125610AB2F4(&(Global_1312603.f_16));
			return;
		
		case 14:
			unk_0x7006FC1051C85FCA(Global_1312603.f_56);
			unk_0x9EFD301E3BE8324E(&(Global_1312603.f_16));
			unk_0x7006FC1051C85FCA(Global_1312603.f_56);
			unk_0x6A826E35A3096ED0(&(Global_1312603.f_32));
			return;
		
		case 15:
			unk_0x7006FC1051C85FCA(Global_1312603.f_56);
			unk_0x9EFD301E3BE8324E(&(Global_1312603.f_16));
			unk_0x7006FC1051C85FCA(Global_1312603.f_57);
			unk_0x6A826E35A3096ED0(&(Global_1312603.f_32));
			return;
		
		case 17:
			unk_0x9EFD301E3BE8324E(&(Global_1312603.f_16));
			unk_0x9EFD301E3BE8324E(&(Global_1312603.f_32));
			unk_0x7006FC1051C85FCA(Global_1312603.f_56);
			unk_0x6A826E35A3096ED0(&(Global_1312603.f_48));
			return;
		
		case 16:
			unk_0x7006FC1051C85FCA(Global_1312603.f_56);
			unk_0x9EFD301E3BE8324E(&(Global_1312603.f_16));
			return;
		
		case 19:
			unk_0x7006FC1051C85FCA(Global_1312603.f_56);
			unk_0x6A826E35A3096ED0(&(Global_1312603.f_16));
			return;
		
		case 18:
			unk_0x9EFD301E3BE8324E(&(Global_1312603.f_16));
			unk_0x7006FC1051C85FCA(Global_1312603.f_56);
			unk_0x6A826E35A3096ED0(&(Global_1312603.f_48));
			unk_0x9EFD301E3BE8324E(&(Global_1312603.f_32));
			return;
		
		default:
	}
}

int func_111()
{
	if (!func_112())
	{
		return 0;
	}
	unk_0xCD7691F7F3015C57(&(Global_1312603.f_12));
	func_110();
	return unk_0x5E0AC8AED85CE7CB();
}

int func_112()
{
	if (Global_1312603 == 20)
	{
		return 0;
	}
	return 1;
}

bool func_113()
{
	return func_112();
}

void func_114()
{
	switch (func_800())
	{
		case 0:
			if (func_799(func_7(), 1))
			{
				func_784(157, 1, -1, 0);
			}
			else
			{
				func_784(157, 0, -1, 0);
			}
			func_780();
			if (func_17() > 0)
			{
				if (func_799(func_7(), 1))
				{
					func_779(1);
					func_778(1);
				}
				else
				{
					func_778(2);
				}
			}
			break;
		
		case 2:
			if (unk_0xCE990E643CD9D0E5(Local_102.f_1, 17) || unk_0xCE990E643CD9D0E5(Local_102.f_1, 24))
			{
				if (!unk_0xCE990E643CD9D0E5(iLocal_84, 3))
				{
					func_679();
				}
				func_673();
				func_662();
				func_660();
				func_656();
				func_655();
				func_652();
				func_651();
				func_608(157, Local_89, &uLocal_90, 1140457472, 1144750080, 0);
				if (func_17() > 1)
				{
					func_778(3);
				}
			}
			break;
		
		case 1:
			if (!unk_0xCE990E643CD9D0E5(iLocal_84, 3))
			{
				func_679();
			}
			func_673();
			func_662();
			func_652();
			func_607();
			func_660();
			func_656();
			func_655();
			func_606();
			func_603();
			func_589();
			func_651();
			func_608(157, Local_89, &uLocal_90, 1140457472, 1144750080, 0);
			func_472(&(Global_1366969.f_534), &Global_1366969, 28, &(Global_1366969.f_1), &(Global_1366969.f_117), -1, 0, 0);
			func_449(157);
			if (func_17() > 1)
			{
				func_778(3);
			}
			break;
		
		case 3:
			func_367();
			func_160();
			func_673();
			func_589();
			if (((unk_0xCE990E643CD9D0E5(iLocal_84, 11) && unk_0xCE990E643CD9D0E5(Local_103[unk_0x59E2AD1A8ACEDA31() /*4*/].f_1, 20)) && !func_159()) && func_115(&uLocal_94, 1, 0))
			{
				unk_0xBE20AB8238688965(&(Local_103[unk_0x59E2AD1A8ACEDA31() /*4*/].f_1), 21);
			}
			if (func_17() > 3)
			{
				func_778(4);
			}
			break;
		
		case 4:
			break;
	}
}

int func_115(var uParam0, bool bParam1, int iParam2)
{
	bool bVar0;
	
	func_158(29);
	if ((*uParam0 > 0 && !func_159()) && func_141(unk_0x460153A63B9477BC()) != 0)
	{
		if (!func_139())
		{
			func_138();
		}
	}
	switch (*uParam0)
	{
		case 0:
			if (!func_137(&(uParam0->f_3)))
			{
				func_4(&(uParam0->f_3), 0, 0);
			}
			else if (func_3(&(uParam0->f_3), 1000, 0))
			{
				unk_0xBE20AB8238688965(&(Global_1676119.f_3), 2);
				if (bParam1)
				{
					unk_0xBE20AB8238688965(&(Global_2540384.f_4652), 0);
					func_4(&(uParam0->f_5), 0, 0);
				}
				func_4(&(uParam0->f_1), 0, 0);
				func_136(uParam0, 1);
			}
			break;
		
		case 1:
			if (func_137(&(uParam0->f_5)))
			{
				if (func_3(&(uParam0->f_5), 3000, 0))
				{
					bVar0 = true;
				}
			}
			else
			{
				bVar0 = true;
			}
			if (bVar0)
			{
				func_125(iParam2);
				func_136(uParam0, 2);
			}
			break;
		
		case 2:
			func_125(0);
			if (func_3(&(uParam0->f_1), 15000, 0))
			{
				if (func_116(func_117(0)))
				{
					unk_0xD289B55B6AADBA10(1);
				}
				func_136(uParam0, 3);
			}
			break;
		
		case 3:
			if (func_3(&(uParam0->f_1), 23500, 0))
			{
				unk_0xD2459066EA58CE43(&(Global_2540384.f_4652), 1);
				unk_0xD2459066EA58CE43(&(Global_1676119.f_3), 2);
				func_136(uParam0, 4);
				return 1;
			}
			break;
		
		case 4:
			unk_0xD2459066EA58CE43(&(Global_2540384.f_4652), 1);
			unk_0xD2459066EA58CE43(&(Global_1676119.f_3), 2);
			return 1;
	}
	return 0;
}

bool func_116(char* sParam0)
{
	unk_0x69476B1CA6A9FF80(sParam0);
	return unk_0x1A3A9FFE5CA6F64B(0);
}

char* func_117(int iParam0)
{
	if (((func_124(unk_0x460153A63B9477BC()) || func_123(unk_0x460153A63B9477BC())) || func_121()) || iParam0)
	{
		if (func_123(unk_0x460153A63B9477BC()))
		{
			return "BG_LBD_HELP";
		}
		return "BG_LBD_HELPW";
	}
	if (func_118(func_120()))
	{
		return "GB_LBD_HELP";
	}
	return "GB_LBD_HELPW";
}

int func_118(int iParam0)
{
	switch (iParam0)
	{
		case 155:
		case 160:
		case 153:
		case 162:
		case 154:
		case 163:
		case 171:
		case 172:
		case 240:
		case 239:
			return 1;
		
		default:
	}
	return func_119(iParam0, 0);
	return 0;
}

int func_119(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 199:
		case 205:
		case 210:
		case 211:
			return 1;
		
		default:
	}
	if (iParam1 == 0)
	{
		switch (iParam0)
		{
			case 194:
			case 193:
			case 189:
			case 153:
				return 1;
			}
		
		default:
	}
	return 0;
}

int func_120()
{
	return Global_1652336;
}

bool func_121()
{
	return (func_122() && func_60(func_7()));
}

bool func_122()
{
	return Global_1590682[unk_0x460153A63B9477BC() /*883*/] == 148;
}

bool func_123(int iParam0)
{
	return func_119(func_102(iParam0), 0);
}

bool func_124(int iParam0)
{
	return func_99(func_102(iParam0));
}

void func_125(int iParam0)
{
	if (unk_0xCE990E643CD9D0E5(Global_2540384.f_4652, 0))
	{
		if (((((((((((!unk_0xEBB78303C505A9D7() && !unk_0xCE990E643CD9D0E5(Global_2540384.f_833, 2)) && func_6(unk_0x460153A63B9477BC(), 1, 1)) && !Global_74030) && !Global_58898) && !unk_0x03DB5C6AABF8DA46()) && !func_135(unk_0x460153A63B9477BC(), 22)) && func_141(unk_0x460153A63B9477BC()) != 0) && !func_133(func_134())) && !func_124(unk_0x460153A63B9477BC())) && !func_132(func_102(unk_0x460153A63B9477BC()))) && !func_131(func_102(unk_0x460153A63B9477BC())))
		{
			unk_0xBE20AB8238688965(&(Global_2540384.f_4652), 1);
			func_130(func_117(iParam0), -1);
			func_126(1);
			unk_0xD2459066EA58CE43(&(Global_2540384.f_4652), 0);
		}
	}
}

void func_126(int iParam0)
{
	char* sVar0;
	
	sVar0 = "GTAO_Boss_Goons_FM_Soundset";
	if (func_127(1))
	{
		sVar0 = "GTAO_Biker_FM_Soundset";
	}
	if (iParam0 && !func_159())
	{
		unk_0xC4CC25B68A91D144(-1, "Boss_Message_Orange", sVar0, false);
	}
}

bool func_127(bool bParam0)
{
	return func_128(unk_0x460153A63B9477BC(), bParam0);
}

bool func_128(int iParam0, bool bParam1)
{
	return func_129(iParam0, bParam1, 1);
}

int func_129(int iParam0, bool bParam1, int iParam2)
{
	int iVar0;
	
	if (iParam0 == func_40())
	{
		return 0;
	}
	if (!bParam1)
	{
		if (func_61(iParam0, iParam2))
		{
			return 0;
		}
	}
	iVar0 = Global_1630317[iParam0 /*595*/].f_11;
	if (iVar0 != func_40() && Global_1630317[iVar0 /*595*/].f_11.f_423 == iParam2)
	{
		return 1;
	}
	return 0;
}

void func_130(char* sParam0, int iParam1)
{
	unk_0x17751E107423AFE9(sParam0);
	unk_0x1A169149B3D18FCB(0, 0, false, iParam1);
}

int func_131(int iParam0)
{
	switch (iParam0)
	{
		case 150:
		case 236:
		case 237:
		case 238:
		case 239:
		case 240:
		case 241:
		case 242:
		case 244:
		case 248:
		case 249:
		case 250:
			return 1;
		
		default:
	}
	return 0;
}

int func_132(int iParam0)
{
	switch (iParam0)
	{
		case 214:
		case 215:
		case 216:
		case 217:
		case 218:
		case 219:
		case 220:
		case 221:
		case 188:
		case 178:
			return 1;
		
		default:
	}
	return 0;
}

int func_133(int iParam0)
{
	switch (iParam0)
	{
		case 167:
		case 169:
		case 168:
			return 1;
		
		default:
	}
	return 0;
}

int func_134()
{
	char* sVar0;
	
	sVar0 = unk_0x6C5C6B207AA78253();
	if (unk_0xF005CCA4263DF67F(sVar0, "GB_ASSAULT"))
	{
		return 159;
	}
	else if (unk_0xF005CCA4263DF67F(sVar0, "GB_BELLYBEAST"))
	{
		return 157;
	}
	else if (unk_0xF005CCA4263DF67F(sVar0, "GB_DEATHMATCH"))
	{
		return 148;
	}
	else if (unk_0xF005CCA4263DF67F(sVar0, "GB_HUNT_THE_BOSS"))
	{
		return 164;
	}
	else if (unk_0xF005CCA4263DF67F(sVar0, "GB_SIGHTSEER"))
	{
		return 142;
	}
	else if (unk_0xF005CCA4263DF67F(sVar0, "GB_YACHT_ROB"))
	{
		return 152;
	}
	else if (unk_0xF005CCA4263DF67F(sVar0, "GB_CARJACKING"))
	{
		return 163;
	}
	else if (unk_0xF005CCA4263DF67F(sVar0, "GB_COLLECT_MONEY"))
	{
		return 155;
	}
	else if (unk_0xF005CCA4263DF67F(sVar0, "GB_FINDERSKEEPERS"))
	{
		return 160;
	}
	else if (unk_0xF005CCA4263DF67F(sVar0, "GB_FIVESTAR"))
	{
		return 153;
	}
	else if (unk_0xF005CCA4263DF67F(sVar0, "GB_POINT_TO_POINT"))
	{
		return 162;
	}
	else if (unk_0xF005CCA4263DF67F(sVar0, "GB_ROB_SHOP"))
	{
		return 154;
	}
	else if (unk_0xF005CCA4263DF67F(sVar0, "GB_HEADHUNTER"))
	{
		return 166;
	}
	else if (unk_0xF005CCA4263DF67F(sVar0, "GB_CONTRABAND_BUY"))
	{
		return 167;
	}
	else if (unk_0xF005CCA4263DF67F(sVar0, "GB_CONTRABAND_SELL"))
	{
		return 168;
	}
	else if (unk_0xF005CCA4263DF67F(sVar0, "GB_CONTRABAND_DEFEND"))
	{
		return 169;
	}
	else if (unk_0xF005CCA4263DF67F(sVar0, "GB_AIRFREIGHT"))
	{
		return 170;
	}
	else if (unk_0xF005CCA4263DF67F(sVar0, "GB_CASHING_OUT"))
	{
		return 171;
	}
	else if (unk_0xF005CCA4263DF67F(sVar0, "GB_SALVAGE"))
	{
		return 172;
	}
	else if (unk_0xF005CCA4263DF67F(sVar0, "GB_FRAGILE_GOODS"))
	{
		return 173;
	}
	else if (unk_0xF005CCA4263DF67F(sVar0, "GB_VEHICLE_EXPORT"))
	{
		return 178;
	}
	else if (unk_0xF005CCA4263DF67F(sVar0, "GB_ILLICIT_GOODS_RESUPPLY"))
	{
		return 192;
	}
	else if (unk_0xF005CCA4263DF67F(sVar0, "GB_BIKER_JOUST"))
	{
		return 179;
	}
	else if (unk_0xF005CCA4263DF67F(sVar0, "GB_BIKER_UNLOAD_WEAPONS"))
	{
		return 180;
	}
	else if (unk_0xF005CCA4263DF67F(sVar0, "GB_BIKER_BAD_DEAL"))
	{
		return 182;
	}
	else if (unk_0xF005CCA4263DF67F(sVar0, "GB_BIKER_RESCUE_CONTACT"))
	{
		return 183;
	}
	else if (unk_0xF005CCA4263DF67F(sVar0, "GB_BIKER_LAST_RESPECTS"))
	{
		return 185;
	}
	else if (unk_0xF005CCA4263DF67F(sVar0, "GB_BIKER_CONTRACT_KILLING"))
	{
		return 186;
	}
	else if (unk_0xF005CCA4263DF67F(sVar0, "GB_BIKER_RACE_P2P"))
	{
		return 189;
	}
	else if (unk_0xF005CCA4263DF67F(sVar0, "GB_BIKER_CONTRABAND_SELL"))
	{
		return 190;
	}
	else if (unk_0xF005CCA4263DF67F(sVar0, "GB_BIKER_CONTRABAND_DEFEND"))
	{
		return 191;
	}
	else if (unk_0xF005CCA4263DF67F(sVar0, "GB_ILLICIT_GOODS_RESUPPLY"))
	{
		return 192;
	}
	else if (unk_0xF005CCA4263DF67F(sVar0, "GB_BIKER_DRIVEBY_ASSASSIN"))
	{
		return 193;
	}
	else if (unk_0xF005CCA4263DF67F(sVar0, "GB_BIKER_RIPPIN_IT_UP"))
	{
		return 194;
	}
	else if (unk_0xF005CCA4263DF67F(sVar0, "GB_BIKER_FREE_PRISONER"))
	{
		return 197;
	}
	else if (unk_0xF005CCA4263DF67F(sVar0, "GB_BIKER_SAFECRACKER"))
	{
		return 198;
	}
	else if (unk_0xF005CCA4263DF67F(sVar0, "GB_BIKER_STEAL_BIKES"))
	{
		return 195;
	}
	else if (unk_0xF005CCA4263DF67F(sVar0, "GB_BIKER_SEARCH_AND_DESTROY"))
	{
		return 199;
	}
	else if (unk_0xF005CCA4263DF67F(sVar0, "AM_PENNED_IN"))
	{
		return 200;
	}
	else if (unk_0xF005CCA4263DF67F(sVar0, "GB_BIKER_STAND_YOUR_GROUND"))
	{
		return 201;
	}
	else if (unk_0xF005CCA4263DF67F(sVar0, "GB_BIKER_CRIMINAL_MISCHIEF"))
	{
		return 205;
	}
	else if (unk_0xF005CCA4263DF67F(sVar0, "GB_BIKER_DESTROY_VANS"))
	{
		return 207;
	}
	else if (unk_0xF005CCA4263DF67F(sVar0, "GB_BIKER_BURN_ASSETS"))
	{
		return 208;
	}
	else if (unk_0xF005CCA4263DF67F(sVar0, "GB_BIKER_SHUTTLE"))
	{
		return 209;
	}
	else if (unk_0xF005CCA4263DF67F(sVar0, "GB_BIKER_WHEELIE_RIDER"))
	{
		return 210;
	}
	else if (unk_0xF005CCA4263DF67F(sVar0, "GB_PLOUGHED"))
	{
		return 214;
	}
	else if (unk_0xF005CCA4263DF67F(sVar0, "GB_FULLY_LOADED"))
	{
		return 215;
	}
	else if (unk_0xF005CCA4263DF67F(sVar0, "GB_AMPHIBIOUS_ASSAULT"))
	{
		return 216;
	}
	else if (unk_0xF005CCA4263DF67F(sVar0, "GB_TRANSPORTER"))
	{
		return 217;
	}
	else if (unk_0xF005CCA4263DF67F(sVar0, "GB_FORTIFIED"))
	{
		return 218;
	}
	else if (unk_0xF005CCA4263DF67F(sVar0, "GB_VELOCITY"))
	{
		return 219;
	}
	else if (unk_0xF005CCA4263DF67F(sVar0, "GB_STOCKPILING"))
	{
		return 221;
	}
	else if (unk_0xF005CCA4263DF67F(sVar0, "GB_RAMPED_UP"))
	{
		return 220;
	}
	else if (unk_0xF005CCA4263DF67F(sVar0, "GB_GUNRUNNING"))
	{
		return 225;
	}
	else if (unk_0xF005CCA4263DF67F(sVar0, "GB_GUNRUNNING_DEFEND"))
	{
		return 227;
	}
	else if (unk_0xF005CCA4263DF67F(sVar0, "GB_SMUGGLER"))
	{
		return 229;
	}
	else if (unk_0xF005CCA4263DF67F(sVar0, "GB_FM_GANGOPS"))
	{
		return 233;
	}
	return 0;
}

bool func_135(int iParam0, int iParam1)
{
	return unk_0xCE990E643CD9D0E5(Global_1630317[iParam0 /*595*/].f_11.f_4, iParam1);
}

void func_136(var uParam0, int iParam1)
{
	*uParam0 = iParam1;
}

bool func_137(var uParam0)
{
	return uParam0->f_1;
}

void func_138()
{
	Global_2463793 = 1;
}

int func_139()
{
	if (((((((func_102(unk_0x460153A63B9477BC()) == 170 || func_102(unk_0x460153A63B9477BC()) == 219) || func_102(unk_0x460153A63B9477BC()) == 221) || func_102(unk_0x460153A63B9477BC()) == 220) || func_102(unk_0x460153A63B9477BC()) == 216) || func_102(unk_0x460153A63B9477BC()) == 215) || func_102(unk_0x460153A63B9477BC()) == 214) || func_102(unk_0x460153A63B9477BC()) == 218)
	{
		return 1;
	}
	if (func_140(unk_0x460153A63B9477BC()))
	{
		return 1;
	}
	return 0;
}

int func_140(int iParam0)
{
	if (iParam0 != func_40())
	{
		if (func_6(iParam0, 1, 1))
		{
			if (Global_2425869[iParam0 /*443*/].f_314.f_6 != -1)
			{
				return func_54(Global_2425869[iParam0 /*443*/].f_314.f_6) == 2;
			}
		}
	}
	return 0;
}

int func_141(int iParam0)
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	var uVar3;
	bool bVar4;
	
	iVar0 = 2;
	bVar1 = ((func_157(iParam0) && !func_156(iParam0)) && !unk_0xCE990E643CD9D0E5(Global_1630317[iParam0 /*595*/].f_1, 8));
	bVar2 = func_155(iParam0);
	uVar3 = func_154();
	bVar4 = func_146();
	if ((bVar1 && (func_145(iParam0) || func_144(iParam0))) || bVar4)
	{
		iVar0 = 0;
	}
	else if (uVar3 || ((!bVar2 && !func_143(iParam0)) && !func_142(iParam0)))
	{
		iVar0 = 2;
	}
	else
	{
		iVar0 = 3;
	}
	if (Global_2540384.f_5188.f_217 != iVar0)
	{
		Global_2540384.f_5188.f_217 = iVar0;
	}
	return iVar0;
}

bool func_142(int iParam0)
{
	return func_135(iParam0, 19);
}

int func_143(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return func_135(iParam0, 9);
	}
	return 0;
}

int func_144(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return unk_0xCE990E643CD9D0E5(Global_1630317[iVar0 /*595*/].f_1, 0);
	}
	return 0;
}

int func_145(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return unk_0xCE990E643CD9D0E5(Global_1630317[iVar0 /*595*/].f_1, 7);
	}
	return 0;
}

int func_146()
{
	if ((func_135(unk_0x460153A63B9477BC(), 21) || func_135(unk_0x460153A63B9477BC(), 22)) || func_151())
	{
		return 1;
	}
	if (func_147())
	{
		func_158(22);
		return 1;
	}
	return 0;
}

int func_147()
{
	if (func_103(unk_0x460153A63B9477BC(), 0))
	{
		if (((func_154() && !func_150()) || func_149(unk_0x460153A63B9477BC(), 21)) || func_149(unk_0x460153A63B9477BC(), 25))
		{
			return 1;
		}
		else
		{
			func_148(27);
		}
	}
	return 0;
}

void func_148(int iParam0)
{
	unk_0xD2459066EA58CE43(&(Global_1630317[unk_0x460153A63B9477BC() /*595*/].f_11.f_4), iParam0);
}

bool func_149(int iParam0, int iParam1)
{
	return unk_0xCE990E643CD9D0E5(Global_2425869[iParam0 /*443*/].f_212, iParam1);
}

bool func_150()
{
	return Global_1312436.f_1;
}

bool func_151()
{
	return func_152(377, -1);
}

int func_152(int iParam0, int iParam1)
{
	var uVar0;
	var uVar1;
	
	uVar0 = Global_2587834[iParam0 /*3*/][func_153(iParam1)];
	if (unk_0xB9112C701DE2A810(uVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

int func_153(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = iParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_98();
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

bool func_154()
{
	return Global_1312436;
}

bool func_155(int iParam0)
{
	return func_135(iParam0, 20);
}

bool func_156(int iParam0)
{
	return unk_0xCE990E643CD9D0E5(Global_1630317[iParam0 /*595*/].f_1, 2);
}

int func_157(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return Global_1630317[iVar0 /*595*/] != -1;
	}
	return 0;
}

void func_158(int iParam0)
{
	unk_0xBE20AB8238688965(&(Global_1630317[unk_0x460153A63B9477BC() /*595*/].f_11.f_4), iParam0);
}

bool func_159()
{
	return Global_2440049.f_2834[0 /*80*/].f_1 != 0;
}

void func_160()
{
	struct<20> Var0;
	int iVar1;
	var uVar2;
	
	Var0.f_2 = 1065353216;
	Var0.f_3 = 1065353216;
	Var0.f_4 = 1;
	Var0.f_9 = -1;
	Var0.f_18 = -1;
	Var0.f_19 = -1;
	if (!unk_0xCE990E643CD9D0E5(Local_103[unk_0x59E2AD1A8ACEDA31() /*4*/].f_1, 20))
	{
		if (func_366())
		{
			unk_0xBE20AB8238688965(&(Local_103[unk_0x59E2AD1A8ACEDA31() /*4*/].f_1), 20);
			return;
		}
		if (func_146())
		{
			unk_0xBE20AB8238688965(&(Local_103[unk_0x59E2AD1A8ACEDA31() /*4*/].f_1), 20);
			return;
		}
		func_360(&Var0, &(Var0.f_1), 0, 0);
		if (func_799(func_7(), 1))
		{
			if (Local_102.f_34 > 0)
			{
				func_358(0, unk_0x460153A63B9477BC());
				func_181(157, 1, &Var0, 0);
			}
			else
			{
				func_358(0, func_40());
				func_181(157, 0, &Var0, 0);
			}
		}
		else
		{
			func_181(157, func_178(0, 0) > 0, &Var0, 0);
			if (func_177() != func_40() && func_102(func_177()) != 157)
			{
				func_360(&iVar1, &uVar2, 0, 1);
				func_161(&iVar1, 1);
			}
		}
		unk_0xBE20AB8238688965(&(Local_103[unk_0x59E2AD1A8ACEDA31() /*4*/].f_1), 20);
	}
}

void func_161(int iParam0, int iParam1)
{
	int iVar0;
	
	if (*iParam0 > 0)
	{
		if (!func_176())
		{
			if (func_104(0))
			{
				if (!func_127(0))
				{
					if (unk_0x166E920FB00B2DBB(func_177()))
					{
						if (func_175() == 100)
						{
							iVar0 = *iParam0;
							*iParam0 = 0;
						}
						else
						{
							iVar0 = ((*iParam0 / 100) * func_175());
							*iParam0 = (*iParam0 - iVar0);
						}
						func_173(&iVar0, 0);
						if (iParam1 == 1)
						{
							func_166("GB_BCUT_TICK1", func_177(), iVar0, 0, 0, 1);
						}
						func_100(20);
						func_162(func_177(), iVar0, 1);
					}
				}
			}
		}
	}
}

void func_162(int iParam0, int iParam1, int iParam2)
{
	struct<8> Var0;
	
	if (func_6(iParam0, 0, 1))
	{
		Var0 = 1596100569;
		Var0.f_1 = unk_0x460153A63B9477BC();
		Var0.f_2 = iParam1;
		Var0.f_4 = iParam2;
		Var0.f_5 = func_165(iParam0);
		func_164(&(Var0.f_6), &(Var0.f_7));
		unk_0xB802750B43D4047C(1, &Var0, 8, func_163(iParam0));
	}
}

int func_163(int iParam0)
{
	var uVar0;
	
	if (iParam0 != -1)
	{
		unk_0xBE20AB8238688965(&uVar0, iParam0);
	}
	return uVar0;
}

void func_164(var uParam0, var uParam1)
{
	*uParam0 = Global_1652336.f_9;
	*uParam1 = Global_1652336.f_10;
}

var func_165(int iParam0)
{
	return Global_1630317[iParam0 /*595*/].f_506;
}

int func_166(char* sParam0, int iParam1, int iParam2, int iParam3, bool bParam4, int iParam5)
{
	int iVar0;
	struct<8> Var1;
	
	iVar0 = -1;
	if (unk_0x56B60AE958412839(unk_0x460153A63B9477BC(), iParam1) || iParam5)
	{
		if (!bParam4)
		{
			StringCopy(&Var1, unk_0x72C1D3A1AB8CAA5B(iParam1), 64);
		}
		else
		{
			StringCopy(&Var1, unk_0x72C1D3A1AB8CAA5B(iParam1), 64);
		}
		if (unk_0x7BCC91F3C1CF24E8(&Var1))
		{
		}
		unk_0x5B8DD855EAFD33B5(sParam0);
		unk_0x7006FC1051C85FCA(func_62(iParam1, -2, 1, 0, 0));
		unk_0x9EFD301E3BE8324E(func_171(&Var1));
		if (!iParam3 == 0)
		{
			unk_0x7006FC1051C85FCA(iParam3);
		}
		unk_0x42710E9E08FA375A(iParam2);
		iVar0 = unk_0xD60C2975A14D763D(0, 1);
		func_167(27, sParam0, 1, &Var1, iParam2, 0, 0, 0, 1, 0, 0, 0);
	}
	return iVar0;
}

void func_167(int iParam0, char* sParam1, int iParam2, char* sParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, char* sParam9, char* sParam10, char* sParam11)
{
	int iVar0;
	
	if ((!func_170() || !unk_0xFC559366953F62B3()) || !func_96(unk_0x460153A63B9477BC(), 0))
	{
		return;
	}
	iVar0 = func_168(iParam2);
	if (iVar0 >= 0 && iVar0 < 5)
	{
		Global_1672611.f_5[iVar0 /*53*/] = iParam0;
		Global_1672611.f_5[iVar0 /*53*/].f_1 = iParam2;
		StringCopy(&(Global_1672611.f_5[iVar0 /*53*/].f_8), sParam1, 16);
		Global_1672611.f_5[iVar0 /*53*/].f_2[0] = iParam4;
		Global_1672611.f_5[iVar0 /*53*/].f_2[1] = iParam5;
		Global_1672611.f_5[iVar0 /*53*/].f_2[2] = iParam6;
		Global_1672611.f_5[iVar0 /*53*/].f_7 = iParam7;
		Global_1672611.f_5[iVar0 /*53*/].f_6 = iParam8;
		StringCopy(&(Global_1672611.f_5[iVar0 /*53*/].f_12), sParam3, 64);
		StringCopy(&(Global_1672611.f_5[iVar0 /*53*/].f_28[0 /*6*/]), sParam9, 24);
		StringCopy(&(Global_1672611.f_5[iVar0 /*53*/].f_28[1 /*6*/]), sParam10, 24);
		StringCopy(&(Global_1672611.f_5[iVar0 /*53*/].f_28[2 /*6*/]), sParam11, 24);
	}
}

int func_168(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= (Global_1672611 - 1))
	{
		if (iParam0 > Global_1672611.f_5[iVar0 /*53*/].f_1)
		{
			func_169(iVar0);
			return iVar0;
		}
		iVar0++;
	}
	Global_1672611++;
	if (Global_1672611 > 5)
	{
		Global_1672611 = 5;
		return Global_1672611;
	}
	return (Global_1672611 - 1);
}

void func_169(int iParam0)
{
	int iVar0;
	
	iVar0 = 4;
	while (iVar0 >= iParam0 + 1)
	{
		Global_1672611.f_5[iVar0 /*53*/] = { Global_1672611.f_5[(iVar0 - 1) /*53*/] };
		iVar0 = (iVar0 + -1);
	}
}

bool func_170()
{
	return unk_0x95C5B896CB42B20E(-1762644250);
}

var func_171(char* sParam0)
{
	char cVar0[64];
	
	StringCopy(&cVar0, "<C>", 64);
	StringConCat(&cVar0, sParam0, 64);
	StringConCat(&cVar0, "</C>~s~", 64);
	return func_172(&cVar0);
}

var func_172(char[4] cParam0)
{
	return cParam0;
}

void func_173(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	if (bParam1)
	{
		iVar1 = func_174(1);
	}
	else
	{
		iVar1 = func_174(0);
	}
	iVar0 = ((*iParam0 / 100) * iVar1);
	*iParam0 = (*iParam0 - iVar0);
}

int func_174(bool bParam0)
{
	if (bParam0)
	{
		return round((0.05f * 100f));
	}
	return Global_262145.f_12398;
}

int func_175()
{
	return Global_262145.f_12397;
}

bool func_176()
{
	return func_82(unk_0x460153A63B9477BC());
}

int func_177()
{
	return Global_1630317[unk_0x460153A63B9477BC() /*595*/].f_11;
}

int func_178(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (func_104(1) && !bParam1)
	{
		if (iParam0 || func_176())
		{
			iVar0 = 0;
			while (iVar0 < unk_0xEFA28384DDD283E1())
			{
				iVar2 = unk_0x628A51AC66E80772(iVar0);
				if (unk_0xBD09DF93F957A0CF(iVar2))
				{
					iVar3 = unk_0x9019589211A13B02(iVar2);
					if (unk_0x166E920FB00B2DBB(iVar3))
					{
						if (func_179(iVar3, func_177(), 1))
						{
							iVar1 = (iVar1 + Local_103[iVar0 /*4*/].f_2);
						}
					}
				}
				iVar0++;
			}
			return iVar1;
		}
		else
		{
			return 0;
		}
	}
	return Local_103[unk_0x59E2AD1A8ACEDA31() /*4*/].f_2;
}

int func_179(int iParam0, int iParam1, bool bParam2)
{
	if (iParam1 != func_40())
	{
		if (!bParam2)
		{
			if (func_180(iParam0, iParam1))
			{
				return 0;
			}
		}
		if (Global_1630317[iParam0 /*595*/].f_11 != func_40())
		{
			return iParam1 == Global_1630317[iParam0 /*595*/].f_11;
		}
	}
	return 0;
}

int func_180(int iParam0, int iParam1)
{
	if (iParam1 != func_40())
	{
		if (iParam0 != func_40())
		{
			if (Global_1630317[iParam0 /*595*/].f_11 != func_40())
			{
				if (Global_1630317[iParam0 /*595*/].f_11 == iParam0)
				{
					return iParam1 == iParam0;
				}
			}
		}
	}
	return 0;
}

void func_181(int iParam0, bool bParam1, var uParam2, bool bParam3)
{
	int iVar0;
	int iVar1;
	float fVar2;
	float fVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	
	func_356(iParam0, &fVar2, &fVar3);
	if (uParam2->f_6 == 0)
	{
		iVar1 = (iVar1 + uParam2->f_1);
		iVar0 = (iVar0 + *uParam2);
	}
	if (bParam1)
	{
		iVar1 = (iVar1 + func_355(iParam0, uParam2->f_13, bParam3));
		if (iParam0 == 233)
		{
			iVar6 = (uParam2->f_10 / uParam2->f_11) * 100;
			iVar1 = ((iVar1 / 100) * iVar6);
		}
		if ((iParam0 == 158 && uParam2->f_21 == 1) && !uParam2->f_22)
		{
			iVar1 = 200;
		}
		iVar1 = round((to_float(iVar1) / to_float(uParam2->f_4)));
		iVar1 = round((IntToFloat(iVar1) * fVar3));
		iVar1 = round((IntToFloat(iVar1) * uParam2->f_3));
		iVar0 = (iVar0 + func_354(iParam0, bParam3));
		iVar0 = round((to_float(iVar0) / to_float(uParam2->f_4)));
		iVar0 = round((IntToFloat(iVar0) * fVar2));
		iVar0 = round((IntToFloat(iVar0) * uParam2->f_2));
	}
	else if ((iParam0 == 185 || iParam0 == 220) || iParam0 == 221)
	{
		iVar1 = round((to_float(iVar1) / to_float(uParam2->f_4)));
		iVar1 = round((IntToFloat(iVar1) * fVar3));
		iVar1 = round((IntToFloat(iVar1) * uParam2->f_3));
		iVar0 = round((to_float(iVar0) / to_float(uParam2->f_4)));
		iVar0 = round((IntToFloat(iVar0) * fVar2));
		iVar0 = round((IntToFloat(iVar0) * uParam2->f_2));
	}
	if (uParam2->f_18 > -1)
	{
		iVar0 = (iVar0 + uParam2->f_18);
	}
	if (uParam2->f_19 > -1)
	{
		iVar1 = (iVar1 + uParam2->f_19);
	}
	if (func_352(iParam0))
	{
		if (bParam1)
		{
			if (func_351(unk_0x460153A63B9477BC()) > 0)
			{
				func_350();
			}
			else
			{
				func_349();
			}
		}
		else
		{
			func_348();
		}
	}
	func_332(iParam0, bParam1, uParam2, &iVar0, &iVar4);
	func_330(iParam0, uParam2, &iVar0, &iVar5);
	func_305(iParam0, uParam2, &iVar0, &iVar5);
	func_302(iParam0, uParam2, &iVar0, &iVar5, &iVar7);
	func_285(iParam0, uParam2, &iVar0, &iVar5);
	if (iParam0 == 168)
	{
		Global_2540384.f_5188.f_383 = iVar4;
	}
	else
	{
		Global_2540384.f_5188.f_383 = iVar5;
	}
	iVar8 = func_7();
	if (iVar8 != func_40() && iParam0 != 148)
	{
		if (func_81(unk_0x460153A63B9477BC(), 0))
		{
			if (!func_179(unk_0x460153A63B9477BC(), iVar8, 1))
			{
				func_161(&iVar0, 1);
			}
		}
	}
	func_280(iParam0, &iVar9, &iVar10);
	iVar1 = (iVar1 + iVar9);
	iVar0 = (iVar0 + iVar10);
	if (iVar1 > 0)
	{
		Global_1676128.f_10 = iVar1;
		func_279();
		func_231(0, unk_0x9B0761B4C3EB8BC7(), "", -875716015, 1626430110, iVar1, 1, -1, 0, 0, 0);
	}
	if (iVar0 > 0)
	{
		Global_1676128.f_9 = iVar0;
		func_209(iParam0, iVar0, iVar7, iVar4, iVar5, uParam2);
		func_208(iParam0, iVar0);
		if (func_207(iParam0))
		{
			if (func_206(iParam0) > -1)
			{
				func_205(func_206(iParam0), iVar0);
			}
		}
		Global_2464451 = iVar0;
		func_204(&Global_2462715, 0, 0);
	}
	if (func_143(unk_0x460153A63B9477BC()) || func_155(unk_0x460153A63B9477BC()))
	{
		func_193(iParam0);
	}
	if (func_99(iParam0))
	{
		Global_1676146.f_13 = iVar0;
		Global_1676146.f_14 = iVar1;
	}
	if (func_132(iParam0))
	{
		Global_1676200.f_13 = iVar0;
		Global_1676200.f_14 = iVar1;
	}
	if (func_192(iParam0))
	{
		Global_1676263.f_12 = iVar0;
		Global_1676263.f_13 = iVar1;
	}
	if (func_191(iParam0))
	{
		Global_1676307.f_12 = iVar0;
		Global_1676307.f_13 = iVar1;
	}
	if (func_190(iParam0))
	{
		Global_1676361.f_12 = iVar0;
		Global_1676361.f_13 = iVar1;
	}
	if (func_131(iParam0))
	{
		if (func_189(iParam0))
		{
			Global_1676443.f_12 = iVar0;
			Global_1676443.f_13 = iVar1;
		}
		else if (func_185(iParam0))
		{
			Global_1676497.f_12 = iVar0;
			Global_1676497.f_13 = iVar1;
		}
	}
	if (func_184(iParam0))
	{
		Global_1676581.f_12 = iVar0;
		Global_1676581.f_13 = iVar1;
	}
	if (func_183(iParam0))
	{
		Global_1676656.f_16 = iVar0;
		Global_1676656.f_17 = iVar1;
	}
	if (func_182(iParam0))
	{
		Global_1676743.f_16 = iVar0;
		Global_1676743.f_17 = iVar1;
	}
}

int func_182(int iParam0)
{
	switch (iParam0)
	{
		case 256:
			return 1;
		
		default:
	}
	return 0;
}

int func_183(int iParam0)
{
	switch (iParam0)
	{
		case 158:
			return 1;
		
		default:
	}
	return 0;
}

int func_184(int iParam0)
{
	switch (iParam0)
	{
		case 243:
			return 1;
		
		default:
	}
	return 0;
}

int func_185(int iParam0)
{
	if (((((((((iParam0 == 250 || iParam0 == 238) || iParam0 == 242) || iParam0 == 244) || iParam0 == 248) || iParam0 == 241) || iParam0 == 239) || iParam0 == 240) || iParam0 == 249) || (iParam0 == 237 && func_186(func_187(unk_0x460153A63B9477BC()))))
	{
		return 1;
	}
	return 0;
}

int func_186(int iParam0)
{
	switch (iParam0)
	{
		case 0:
		case 4:
		case 3:
		case 2:
		case 5:
		case 1:
			return 1;
		
		default:
	}
	return 0;
}

int func_187(int iParam0)
{
	if (func_102(iParam0) == 237 || func_102(iParam0) == 250)
	{
		return func_188(iParam0);
	}
	return -1;
}

int func_188(int iParam0)
{
	if (func_103(iParam0, 0))
	{
		return Global_1630317[iParam0 /*595*/].f_11.f_181;
	}
	return -1;
}

int func_189(int iParam0)
{
	if (iParam0 == 237)
	{
		return 1;
	}
	return 0;
}

int func_190(int iParam0)
{
	switch (iParam0)
	{
		case 233:
			return 1;
		
		default:
	}
	return 0;
}

int func_191(int iParam0)
{
	switch (iParam0)
	{
		case 229:
		case 230:
			return 1;
		
		default:
	}
	return 0;
}

int func_192(int iParam0)
{
	switch (iParam0)
	{
		case 225:
		case 226:
		case 227:
			return 1;
		
		default:
	}
	return 0;
}

void func_193(int iParam0)
{
	if (func_203(unk_0x460153A63B9477BC()) && func_202())
	{
		if (func_201(iParam0))
		{
			func_196(10268, -1);
		}
		else if (func_195(iParam0))
		{
			func_196(10270, -1);
		}
		else if (func_119(iParam0, 1))
		{
			func_196(10271, -1);
		}
		else if (func_194(iParam0))
		{
			func_196(10272, -1);
		}
	}
}

int func_194(int iParam0)
{
	switch (iParam0)
	{
		case 194:
		case 193:
		case 189:
		case 153:
			return 1;
		
		default:
	}
	return 0;
}

int func_195(int iParam0)
{
	switch (iParam0)
	{
		case 179:
		case 201:
		case 200:
		case 148:
			return 1;
		
		default:
	}
	return 0;
}

void func_196(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = func_200(iParam0, func_153(iParam1), 0);
	iVar0++;
	if (!func_199(iParam0))
	{
		func_198(iParam0, iVar0, iParam1, 1, 0);
	}
	else
	{
		func_197(iParam0, iVar0, iParam1, 1);
	}
}

void func_197(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	iVar0 = Global_2551832[iParam0 /*3*/][func_153(iParam2)];
	if (iVar0 != 0)
	{
		unk_0x6000E4684CB4330B(iVar0, iParam1, iParam3);
	}
	switch (iParam0)
	{
		case 787:
			Global_1388125[func_153(iParam2)] = iParam1;
			break;
		
		case 788:
			Global_1388131[func_153(iParam2)] = iParam1;
			break;
		
		case 789:
			Global_1388137[func_153(iParam2)] = iParam1;
			break;
		
		case 790:
			Global_1388143[func_153(iParam2)] = iParam1;
			break;
		
		case 8727:
			Global_1388149[func_153(iParam2)] = iParam1;
			break;
		
		case 777:
			Global_1388095[func_153(iParam2)] = iParam1;
			break;
		
		case 778:
			Global_1388101[func_153(iParam2)] = iParam1;
			break;
		
		case 779:
			Global_1388107[func_153(iParam2)] = iParam1;
			break;
		
		case 780:
			Global_1388113[func_153(iParam2)] = iParam1;
			break;
		
		case 8729:
			Global_1388119[func_153(iParam2)] = iParam1;
			break;
		
		case 767:
			Global_1388065[func_153(iParam2)] = iParam1;
			break;
		
		case 768:
			Global_1388071[func_153(iParam2)] = iParam1;
			break;
		
		case 769:
			Global_1388077[func_153(iParam2)] = iParam1;
			break;
		
		case 770:
			Global_1388083[func_153(iParam2)] = iParam1;
			break;
		
		case 8731:
			Global_1388089[func_153(iParam2)] = iParam1;
			break;
		
		case 757:
			Global_1388155[func_153(iParam2)] = iParam1;
			break;
		
		case 758:
			Global_1388161[func_153(iParam2)] = iParam1;
			break;
		
		case 759:
			Global_1388167[func_153(iParam2)] = iParam1;
			break;
		
		case 760:
			Global_1388173[func_153(iParam2)] = iParam1;
			break;
		
		case 8733:
			Global_1388179[func_153(iParam2)] = iParam1;
			break;
		
		case 1303:
			Global_1388185[func_153(iParam2)] = iParam1;
			break;
		
		case 7234:
			Global_1388191[func_153(iParam2)] = iParam1;
			break;
		
		case 639:
			Global_1388197[func_153(iParam2)] = iParam1;
			break;
		
		case 1278:
			Global_1388203[func_153(iParam2)] = iParam1;
			break;
		
		case 1877:
			Global_2590417[0 /*3*/][func_153(iParam2)] = iParam1;
			break;
		
		case 2268:
			Global_2590417[1 /*3*/][func_153(iParam2)] = iParam1;
			break;
		
		case 2930:
			Global_2590417[2 /*3*/][func_153(iParam2)] = iParam1;
			break;
		
		case 3059:
			Global_2590417[3 /*3*/][func_153(iParam2)] = iParam1;
			break;
		
		case 10138:
			Global_2590566[func_153(iParam2)] = iParam1;
			break;
		
		case 764:
			Global_1388209[func_153(iParam2)] = iParam1;
			break;
		
		case 765:
			Global_1388215[func_153(iParam2)] = iParam1;
			break;
		
		case 766:
			Global_1388221[func_153(iParam2)] = iParam1;
			break;
		
		case 8732:
			Global_1388227[func_153(iParam2)] = iParam1;
			break;
		
		case 9534:
			Global_1388233[func_153(iParam2)] = iParam1;
			break;
		
		case 1236:
			Global_1388239[func_153(iParam2)] = iParam1;
			break;
		
		case 3054:
			Global_2590490[0 /*3*/][func_153(iParam2)] = iParam1;
			break;
		
		case 3055:
			Global_2590490[1 /*3*/][func_153(iParam2)] = iParam1;
			break;
		
		case 3056:
			Global_2590490[2 /*3*/][func_153(iParam2)] = iParam1;
			break;
		
		case 3057:
			Global_2590490[3 /*3*/][func_153(iParam2)] = iParam1;
			break;
		
		case 3058:
			Global_2590490[4 /*3*/][func_153(iParam2)] = iParam1;
			break;
		
		case 3637:
			Global_2590569[0 /*3*/][func_153(iParam2)] = iParam1;
			break;
		
		case 3638:
			Global_2590569[1 /*3*/][func_153(iParam2)] = iParam1;
			break;
		
		case 3639:
			Global_2590569[2 /*3*/][func_153(iParam2)] = iParam1;
			break;
		
		case 3640:
			Global_2590569[3 /*3*/][func_153(iParam2)] = iParam1;
			break;
		
		case 3641:
			Global_2590569[4 /*3*/][func_153(iParam2)] = iParam1;
			break;
		
		case 3642:
			Global_2590585[0 /*3*/][func_153(iParam2)] = iParam1;
			break;
		
		case 3643:
			Global_2590585[1 /*3*/][func_153(iParam2)] = iParam1;
			break;
		
		case 3644:
			Global_2590585[2 /*3*/][func_153(iParam2)] = iParam1;
			break;
		
		case 3645:
			Global_2590585[3 /*3*/][func_153(iParam2)] = iParam1;
			break;
		
		case 3646:
			Global_2590585[4 /*3*/][func_153(iParam2)] = iParam1;
			break;
		
		case 3222:
			Global_2590490[5 /*3*/][func_153(iParam2)] = iParam1;
			break;
		
		case 3228:
			Global_2590417[4 /*3*/][func_153(iParam2)] = iParam1;
			break;
		
		case 3664:
			Global_2590601[func_153(iParam2)] = iParam1;
			break;
		
		case 3665:
			Global_2590610[func_153(iParam2)] = iParam1;
			break;
		
		case 3666:
			Global_2590604[func_153(iParam2)] = iParam1;
			break;
		
		case 3667:
			Global_2590613[func_153(iParam2)] = iParam1;
			break;
		
		case 3668:
			Global_2590607[func_153(iParam2)] = iParam1;
			break;
		
		case 3669:
			Global_2590616[func_153(iParam2)] = iParam1;
			break;
		
		case 3690:
			Global_2590619[func_153(iParam2)] = iParam1;
			break;
		
		case 3230:
			Global_2590490[6 /*3*/][func_153(iParam2)] = iParam1;
			break;
		
		case 3231:
			Global_2590417[5 /*3*/][func_153(iParam2)] = iParam1;
			break;
		
		case 3235:
			Global_2590490[7 /*3*/][func_153(iParam2)] = iParam1;
			break;
		
		case 3233:
			Global_2590417[6 /*3*/][func_153(iParam2)] = iParam1;
			break;
		
		case 4020:
			Global_2590490[8 /*3*/][func_153(iParam2)] = iParam1;
			break;
		
		case 4021:
			Global_2590417[7 /*3*/][func_153(iParam2)] = iParam1;
			break;
		
		case 4023:
			Global_2590490[9 /*3*/][func_153(iParam2)] = iParam1;
			break;
		
		case 4024:
			Global_2590417[8 /*3*/][func_153(iParam2)] = iParam1;
			break;
		
		case 4026:
			Global_2590490[10 /*3*/][func_153(iParam2)] = iParam1;
			break;
		
		case 4027:
			Global_2590417[9 /*3*/][func_153(iParam2)] = iParam1;
			break;
		
		case 4029:
			Global_2590490[11 /*3*/][func_153(iParam2)] = iParam1;
			break;
		
		case 4030:
			Global_2590417[10 /*3*/][func_153(iParam2)] = iParam1;
			break;
		
		case 6110:
			Global_2590490[12 /*3*/][func_153(iParam2)] = iParam1;
			break;
		
		case 6111:
			Global_2590417[11 /*3*/][func_153(iParam2)] = iParam1;
			break;
		
		case 6168:
			Global_2590490[13 /*3*/][func_153(iParam2)] = iParam1;
			break;
		
		case 6169:
			Global_2590417[12 /*3*/][func_153(iParam2)] = iParam1;
			break;
		
		case 6546:
			Global_2590490[14 /*3*/][func_153(iParam2)] = iParam1;
			break;
		
		case 6547:
			Global_2590417[13 /*3*/][func_153(iParam2)] = iParam1;
			break;
		
		case 6559:
			Global_2590490[15 /*3*/][func_153(iParam2)] = iParam1;
			break;
		
		case 6560:
			Global_2590417[14 /*3*/][func_153(iParam2)] = iParam1;
			break;
		
		case 6562:
			Global_2590490[16 /*3*/][func_153(iParam2)] = iParam1;
			break;
		
		case 6563:
			Global_2590417[15 /*3*/][func_153(iParam2)] = iParam1;
			break;
		
		case 6565:
			Global_2590490[17 /*3*/][func_153(iParam2)] = iParam1;
			break;
		
		case 6566:
			Global_2590417[16 /*3*/][func_153(iParam2)] = iParam1;
			break;
		
		case 7284:
			Global_2590417[17 /*3*/][func_153(iParam2)] = iParam1;
			break;
		
		case 7286:
			Global_2590417[18 /*3*/][func_153(iParam2)] = iParam1;
			break;
		
		case 7288:
			Global_2590417[19 /*3*/][func_153(iParam2)] = iParam1;
			break;
		
		case 8011:
			Global_2590417[20 /*3*/][func_153(iParam2)] = iParam1;
			break;
		
		case 8283:
			Global_2590622[func_153(iParam2)] = iParam1;
			break;
		
		case 8284:
			Global_2590625[func_153(iParam2)] = iParam1;
			break;
		
		case 8285:
			Global_2590628[func_153(iParam2)] = iParam1;
			break;
		
		case 8286:
			Global_2590631[func_153(iParam2)] = iParam1;
			break;
		
		case 8287:
			Global_2590634[func_153(iParam2)] = iParam1;
			break;
		
		case 8288:
			Global_2590637[func_153(iParam2)] = iParam1;
			break;
		
		case 8289:
			Global_2590640[func_153(iParam2)] = iParam1;
			break;
		
		case 8290:
			Global_2590643[func_153(iParam2)] = iParam1;
			break;
		
		case 8291:
			Global_2590646[func_153(iParam2)] = iParam1;
			break;
		
		case 8292:
			Global_2590649[func_153(iParam2)] = iParam1;
			break;
		
		case 8293:
			Global_2590652[func_153(iParam2)] = iParam1;
			break;
		
		case 8294:
			Global_2590655[func_153(iParam2)] = iParam1;
			break;
		
		case 8295:
			Global_2590658[func_153(iParam2)] = iParam1;
			break;
		
		case 8901:
			Global_2590661[func_153(iParam2)] = iParam1;
			break;
		
		case 8535:
			Global_2590417[21 /*3*/][func_153(iParam2)] = iParam1;
			break;
		
		case 8978:
			Global_2590490[23 /*3*/][func_153(iParam2)] = iParam1;
			break;
		
		case 8976:
			Global_2590417[22 /*3*/][func_153(iParam2)] = iParam1;
			break;
		
		case 8981:
			Global_2590490[24 /*3*/][func_153(iParam2)] = iParam1;
			break;
		
		case 8979:
			Global_2590417[23 /*3*/][func_153(iParam2)] = iParam1;
			break;
		
		default:
			break;
	}
}

void func_198(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	int iVar0;
	
	if (bParam4)
	{
	}
	iVar0 = Global_2551832[iParam0 /*3*/][func_153(iParam2)];
	if (iVar0 != 0)
	{
		unk_0x6000E4684CB4330B(iVar0, iParam1, iParam3);
	}
}

int func_199(int iParam0)
{
	if (Global_1388046)
	{
		switch (iParam0)
		{
			case 787:
			case 788:
			case 789:
			case 790:
			case 8727:
			case 777:
			case 778:
			case 779:
			case 780:
			case 8729:
			case 767:
			case 768:
			case 769:
			case 770:
			case 8731:
			case 757:
			case 758:
			case 759:
			case 760:
			case 8733:
			case 1303:
			case 7234:
			case 639:
			case 1278:
			case 764:
			case 765:
			case 766:
			case 8732:
			case 9534:
			case 1236:
			case 1877:
			case 2268:
			case 2930:
			case 3059:
			case 10138:
			case 3054:
			case 3055:
			case 3056:
			case 3057:
			case 3058:
			case 3233:
			case 3235:
			case 3637:
			case 3638:
			case 3639:
			case 3640:
			case 3641:
			case 3642:
			case 3643:
			case 3644:
			case 3645:
			case 3646:
			case 3228:
			case 3222:
			case 3664:
			case 3665:
			case 3666:
			case 3667:
			case 3668:
			case 3669:
			case 3690:
			case 3231:
			case 3230:
			case 4021:
			case 4020:
			case 4024:
			case 4023:
			case 4027:
			case 4026:
			case 4030:
			case 4029:
			case 6111:
			case 6110:
			case 6169:
			case 6168:
			case 6534:
			case 6533:
			case 6547:
			case 6546:
			case 6560:
			case 6559:
			case 6563:
			case 6562:
			case 6566:
			case 6565:
			case 7284:
			case 7286:
			case 7288:
			case 8283:
			case 8284:
			case 8285:
			case 8286:
			case 8287:
			case 8288:
			case 8289:
			case 8290:
			case 8291:
			case 8292:
			case 8293:
			case 8294:
			case 8295:
			case 8011:
			case 8535:
			case 8976:
			case 8978:
			case 8979:
			case 8981:
				return 1;
				break;
			}
	}
	return 0;
}

int func_200(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	var uVar1;
	
	if (iParam0 != 11771)
	{
		if (iParam2 == 0)
		{
		}
		iVar0 = Global_2551832[iParam0 /*3*/][func_153(iParam1)];
		if (unk_0xD2F202166691EDB2(iVar0, &uVar1, -1))
		{
			return uVar1;
		}
	}
	return 0;
}

int func_201(int iParam0)
{
	switch (iParam0)
	{
		case 180:
		case 183:
		case 185:
		case 186:
		case 182:
		case 195:
		case 197:
		case 198:
		case 207:
		case 208:
		case 209:
			return 1;
		
		default:
	}
	return 0;
}

bool func_202()
{
	return func_60(unk_0x460153A63B9477BC());
}

bool func_203(int iParam0)
{
	if (iParam0 == -1)
	{
		return 0;
	}
	return unk_0xCE990E643CD9D0E5(Global_1590682[iParam0 /*883*/].f_274.f_123, 14);
}

void func_204(var uParam0, bool bParam1, bool bParam2)
{
	if (unk_0x25DDB354A40FFCDB() && !bParam1)
	{
		if (!bParam2)
		{
			*uParam0 = unk_0x6CAAB7E78B5D978A();
		}
		else
		{
			*uParam0 = unk_0x29B9AF1CB5B8175D();
		}
	}
	else
	{
		*uParam0 = unk_0x578C4EF320340AF7();
	}
	uParam0->f_1 = 1;
}

void func_205(int iParam0, int iParam1)
{
	if (iParam1 > 0)
	{
		if (Global_262145.f_23502 == 0 || Global_262145.f_23502 == 1)
		{
			if (!unk_0xF8EDFF98A9C94C74() || Global_262145.f_23502 == 1)
			{
				Global_2540384.f_283 = iParam0;
				if (iParam1 > Global_262145.f_6585)
				{
					iParam1 = Global_262145.f_6585;
				}
				Global_2540384.f_284 = iParam1;
				Global_2540384.f_285 = 0;
			}
		}
	}
}

int func_206(int iParam0)
{
	switch (iParam0)
	{
		case 142:
			return 25;
		
		case 157:
			return 22;
		
		case 159:
			return 21;
		
		case 151:
			return 33;
		
		case 148:
			return 23;
		
		case 164:
			return 24;
		
		case 152:
			return 26;
		
		case 153:
			return 30;
		
		case 154:
			return 32;
		
		case 155:
			return 28;
		
		case 160:
			return 29;
		
		case 162:
			return 31;
		
		case 163:
			return 27;
		
		case 166:
			return 38;
		
		case 170:
			return 34;
		
		case 171:
			return 35;
		
		case 172:
			return 36;
		
		case 173:
			return 37;
		
		case 179:
			return 23;
		
		default:
	}
	return 0;
}

int func_207(int iParam0)
{
	int iVar0;
	
	iVar0 = 1;
	switch (iParam0)
	{
		case 167:
			iVar0 = 0;
			break;
		
		case 169:
			iVar0 = 0;
			break;
		
		case 168:
			iVar0 = 0;
			break;
		
		case 166:
			iVar0 = 0;
			break;
		
		case 190:
			iVar0 = 0;
			break;
		
		case 191:
			iVar0 = 0;
			break;
		
		case 192:
			iVar0 = 0;
			break;
	}
	return iVar0;
}

void func_208(int iParam0, int iParam1)
{
	if (func_203(unk_0x460153A63B9477BC()) && func_202())
	{
		if (func_201(iParam0) && iParam1 > 0)
		{
			func_198(10269, (func_200(10269, -1, 0) + iParam1), -1, 1, 0);
		}
	}
}

void func_209(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, var uParam5)
{
	var uVar0;
	var uVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	bool bVar6;
	struct<2> Var7;
	
	iVar5 = func_177();
	if (iVar5 != func_40())
	{
		func_230(iVar5, &uVar0, &uVar1);
	}
	bVar6 = !func_104(1);
	Var7.f_1 = -1;
	switch (iParam0)
	{
		case 168:
			if (!func_229())
			{
				unk_0x475095B9C4F7F732(iParam1, iParam3);
			}
			break;
		
		case 190:
			if (func_202())
			{
				if (!func_229())
				{
					Var7 = { func_228() };
					unk_0x04A60A9702B796BA(iParam1, unk_0x856D5567211886A2(func_227(Var7)), func_226(Var7), iParam4);
				}
			}
			else if (func_229())
			{
				func_215(-856006867, iParam1, &iVar4, 0, 1, 0);
				Global_4264051[iVar4 /*85*/].f_6 = uVar0;
				Global_4264051[iVar4 /*85*/].f_7 = uVar1;
				Global_4264051[iVar4 /*85*/].f_8 = bVar6;
			}
			else
			{
				unk_0x475095B9C4F7F732(iParam1, iParam4);
			}
			break;
		
		case 226:
			if (func_176())
			{
				if (!func_229())
				{
					unk_0x04A60A9702B796BA(iParam1, unk_0x856D5567211886A2(func_227(func_214(unk_0x460153A63B9477BC()))), 5, iParam4);
				}
			}
			else if (func_229())
			{
				func_215(-856006867, iParam1, &iVar4, 0, 1, 0);
				Global_4264051[iVar4 /*85*/].f_6 = uVar0;
				Global_4264051[iVar4 /*85*/].f_7 = uVar1;
				Global_4264051[iVar4 /*85*/].f_8 = bVar6;
			}
			else
			{
				unk_0x475095B9C4F7F732(iParam1, iParam4);
			}
			break;
		
		case 230:
			if (func_176())
			{
				if (!func_229())
				{
					iVar2 = func_210(uParam5->f_16, iParam4);
					iVar3 = iParam1;
					if (iVar2 > 0)
					{
						iVar3 = (iVar3 - iVar2);
					}
					if (iParam2 > 0)
					{
						iVar3 = (iVar3 - iParam2);
					}
					unk_0x0772DE890A00482D(iVar3, iParam4, iParam2, iVar2, uParam5->f_16);
				}
			}
			else if (func_229())
			{
				func_215(463142405, iParam1, &iVar4, 0, 1, 0);
				Global_4264051[iVar4 /*85*/].f_6 = uVar0;
				Global_4264051[iVar4 /*85*/].f_7 = uVar1;
				Global_4264051[iVar4 /*85*/].f_8 = bVar6;
			}
			else
			{
				unk_0xE4C8AA120E162283(uVar0, uVar1, iParam1, bVar6);
			}
			break;
		
		case 233:
			if (func_229())
			{
				func_215(1407278493, iParam1, &iVar4, 0, 1, 0);
				Global_4264051[iVar4 /*85*/].f_6 = uVar0;
				Global_4264051[iVar4 /*85*/].f_7 = uVar1;
				Global_4264051[iVar4 /*85*/].f_8 = bVar6;
			}
			else
			{
				unk_0xEC03AD87CC7E1447(iParam1);
			}
			break;
		
		case 237:
			if (func_176())
			{
				if (!func_229())
				{
					unk_0x052D79AA393A7E68(iParam1, uParam5->f_20, iParam4);
				}
			}
			else if (func_229())
			{
				func_215(-856006867, iParam1, &iVar4, 0, 1, 0);
				Global_4264051[iVar4 /*85*/].f_6 = uVar0;
				Global_4264051[iVar4 /*85*/].f_7 = uVar1;
				Global_4264051[iVar4 /*85*/].f_8 = bVar6;
			}
			else
			{
				unk_0x475095B9C4F7F732(iParam1, iParam4);
			}
			break;
		
		case 250:
			if (func_229())
			{
				func_215(-961034881, iParam1, &iVar4, 0, 1, 0);
				Global_4264051[iVar4 /*85*/].f_6 = uVar0;
				Global_4264051[iVar4 /*85*/].f_7 = uVar1;
				Global_4264051[iVar4 /*85*/].f_8 = bVar6;
			}
			else
			{
				unk_0xA85DAA0267EF6B8D(iParam1);
			}
			break;
		
		case 249:
			if (func_229())
			{
				func_215(1135468152, iParam1, &iVar4, 0, 1, 0);
				Global_4264051[iVar4 /*85*/].f_6 = uVar0;
				Global_4264051[iVar4 /*85*/].f_7 = uVar1;
				Global_4264051[iVar4 /*85*/].f_8 = bVar6;
			}
			else
			{
				unk_0x92A7449E57F4C0C3(iParam1);
			}
			break;
		
		case 242:
		case 244:
		case 248:
		case 241:
		case 239:
		case 240:
			if (func_229())
			{
				func_215(-634726636, iParam1, &iVar4, 0, 1, 0);
				Global_4264051[iVar4 /*85*/].f_6 = uVar0;
				Global_4264051[iVar4 /*85*/].f_7 = uVar1;
				Global_4264051[iVar4 /*85*/].f_8 = bVar6;
			}
			else
			{
				unk_0xC2561B6B17B28E67(iParam1);
			}
			break;
		
		case 243:
			if (func_229())
			{
				func_215(1698417709, iParam1, &iVar4, 0, 1, 0);
				Global_4264051[iVar4 /*85*/].f_6 = uVar0;
				Global_4264051[iVar4 /*85*/].f_7 = uVar1;
				Global_4264051[iVar4 /*85*/].f_8 = bVar6;
			}
			else
			{
				unk_0x8092F21D0B94C61E(iParam1);
			}
			break;
		
		case 158:
			if (uParam5->f_22)
			{
				if (func_229())
				{
					func_215(1668610896, iParam1, &iVar4, 0, 1, 0);
				}
				else
				{
					unk_0xFD7A82D67D455BFC(iParam1, 0, 0, 1, iParam1, 0, 0);
				}
			}
			else if (func_229())
			{
				func_215(-2032529561, iParam1, &iVar4, 0, 1, 0);
			}
			else
			{
				unk_0xFD7A82D67D455BFC(iParam1, 1, iParam1, 0, 0, 0, 0);
			}
			break;
		
		default:
			if (func_229())
			{
				func_215(-856006867, iParam1, &iVar4, 0, 1, 0);
				Global_4264051[iVar4 /*85*/].f_6 = uVar0;
				Global_4264051[iVar4 /*85*/].f_7 = uVar1;
				Global_4264051[iVar4 /*85*/].f_8 = bVar6;
			}
			else
			{
				unk_0x88199F47F6269E70(uVar0, uVar1, iParam1, bVar6);
			}
			break;
	}
}

int func_210(int iParam0, int iParam1)
{
	float fVar0;
	float fVar1;
	
	fVar0 = func_213(iParam0, iParam1);
	fVar1 = (to_float(func_211(iParam0, iParam1)) * fVar0);
	return round(fVar1);
}

int func_211(int iParam0, int iParam1)
{
	return (func_212(iParam0) * iParam1);
}

int func_212(int iParam0)
{
	switch (iParam0)
	{
		case 8:
			return Global_262145.f_22319;
		
		case 0:
			return Global_262145.f_22320;
		
		case 1:
			return Global_262145.f_22321;
		
		case 2:
			return Global_262145.f_22322;
		
		case 3:
			return Global_262145.f_22323;
		
		case 4:
			return Global_262145.f_22324;
		
		case 5:
			return Global_262145.f_22325;
		
		case 6:
			return Global_262145.f_22326;
		
		case 7:
			return Global_262145.f_22327;
		
		default:
	}
	return 0;
}

float func_213(int iParam0, int iParam1)
{
	float fVar0;
	float fVar1;
	int iVar2;
	
	fVar0 = 0f;
	fVar1 = to_float(Global_262145.f_22329);
	switch (iParam0)
	{
		case -1:
		case 8:
			return 0f;
		
		case 7:
			fVar0 = Global_262145.f_22331;
			fVar1 = to_float(Global_262145.f_22328);
			break;
		
		case 3:
			fVar0 = Global_262145.f_22331;
			fVar1 = to_float(Global_262145.f_22328);
			break;
		
		case 0:
			fVar0 = Global_262145.f_22332;
			break;
		
		case 1:
			fVar0 = Global_262145.f_22332;
			break;
		
		case 4:
			fVar0 = Global_262145.f_22332;
			break;
		
		case 6:
			fVar0 = Global_262145.f_22333;
			fVar1 = to_float(Global_262145.f_22330);
			break;
		
		case 2:
			fVar0 = Global_262145.f_22333;
			fVar1 = to_float(Global_262145.f_22330);
			break;
		
		case 5:
			fVar0 = Global_262145.f_22333;
			fVar1 = to_float(Global_262145.f_22330);
			break;
	}
	iVar2 = floor((to_float(iParam1) / fVar1));
	return (to_float(iVar2) * fVar0);
}

int func_214(int iParam0)
{
	if (iParam0 == func_40())
	{
		return 0;
	}
	return Global_1590682[iParam0 /*883*/].f_274.f_183[5 /*12*/];
}

void func_215(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4, bool bParam5)
{
	int iVar0;
	
	if (!func_229())
	{
		return;
	}
	iVar0 = 1;
	if (bParam4)
	{
		iVar0 = 4;
	}
	else if (bParam3)
	{
		iVar0 = 2;
	}
	else if (bParam5)
	{
		iVar0 = 8;
	}
	switch (iParam0)
	{
		case -1645229221:
		case -585718395:
		case -1359375127:
		case 454359403:
		case -982394051:
		case 1643659499:
		case -2072289654:
		case 650665123:
		case 1654961868:
		case -876847842:
		case 68030260:
		case -2122299283:
		case 366672791:
		case 283351220:
		case 291576838:
		case 1182673174:
		case -516219046:
		case 1036455748:
		case 277665518:
		case 2043854386:
		case 1839532116:
		case 1022400740:
		case 1940862352:
		case -1389227906:
		case 711665950:
		case 1704445500:
		case 1515774909:
		case 1173654533:
		case -899802304:
		case -663944335:
		case 1208553146:
		case -613221010:
		case -671062876:
		case -407201236:
		case -754024203:
		case -1885444887:
		case 1931729587:
		case 1064954035:
		case -180141073:
		case 2131324797:
		case 1612072658:
		case -517447402:
		case 1948102096:
		case 1108628223:
		case -1834046564:
		case -1239008812:
		case -222363842:
		case -1276678868:
		case 1564537328:
		case -96593501:
		case 742499889:
		case 2050093329:
		case -1752488069:
		case 634375935:
		case 1850983186:
		case 763367758:
		case 1941570214:
		case 665109499:
		case -1330755006:
		case 1976384368:
		case 268924934:
		case 1869490922:
		case -336803850:
		case -1412692765:
		case 618167454:
		case 980623936:
		case 437291904:
		case -135813048:
		case -930104477:
		case -1420909320:
		case -1733398043:
		case -1892760262:
		case -1545737048:
		case 2039302543:
		case 402505853:
		case -1143510182:
		case 1678112166:
		case 837955913:
		case -1532467144:
		case 1815541181:
			if (iParam1 > 0 || Global_262145.f_27657)
			{
				func_216(iParam2, -1135378931, 537254313, 1474183246, iParam0, iParam1, iVar0, 7);
			}
			break;
		
		case -31156877:
		case -1027218631:
		case -1398318418:
		case 1652884147:
		case -57868256:
		case -1216489292:
		case -46622315:
		case -352356931:
		case -990286235:
		case 563463121:
		case 1734805203:
		case 941287179:
		case -1186079845:
		case -1985150258:
		case -1127021384:
		case -109201286:
		case 312105838:
		case 1982688246:
		case -661030418:
		case 1301046174:
		case -1586170317:
		case 393059668:
		case 23796958:
		case -1077156170:
		case 1780666425:
		case -2043695058:
		case -1922554349:
		case 1287308202:
		case 691372038:
		case 1480707108:
		case 1512499951:
		case 562283735:
		case -154732333:
		case -1362660491:
		case 645708827:
		case 767907967:
		case -1970151306:
		case 718859568:
		case -1955564771:
		case 892388724:
		case -1426920838:
		case 1349151477:
		case 1620609399:
		case 1961641934:
		case 210955503:
		case -59668082:
		case 1736933716:
		case -1468524125:
		case 111573502:
		case 1525644423:
		case 968073639:
		case 1577781788:
		case -934465332:
		case -1194253122:
		case -212607085:
		case -815546555:
		case 1048226110:
		case 569170531:
		case -856006867:
		case 848090538:
		case -47546905:
		case -293060240:
		case 463142405:
		case 1550217370:
		case -101307780:
		case -664597565:
		case 599804707:
		case -327918414:
		case 550898518:
		case 835976347:
		case 1347433368:
		case 1052472386:
		case -2130199671:
		case -1227654538:
		case 1864522104:
		case 215608230:
		case -876012764:
		case -722894325:
		case 1407278493:
		case -1579394494:
		case -27443911:
		case 1179783540:
		case 923419301:
		case -308826175:
		case 603298940:
		case -12619854:
		case -311112675:
		case 870439158:
		case -974288740:
		case -4138654:
		case -1180954122:
		case -1918051016:
		case 844330594:
		case 1934825517:
		case 1852024236:
		case 2099238988:
		case 1952643559:
		case -1172900789:
		case -2015399333:
		case -1574795641:
		case -961034881:
		case 1135468152:
		case 1265272476:
		case -634726636:
		case 696556762:
		case 403506509:
		case -883876414:
		case -1064150715:
		case -1387253055:
		case -716963152:
		case 1138089938:
		case -561012053:
			func_216(iParam2, -1135378931, 1445302971, 1474183246, iParam0, iParam1, iVar0, 7);
			break;
	}
	switch (iParam0)
	{
		case -1342064661:
		case -1693570755:
		case 1868043300:
		case -697248883:
		case -1295545795:
		case 914079366:
		case 395122350:
		case -331981076:
		case 1671535231:
		case -1896606724:
		case -1291433573:
		case 538631715:
		case 133782822:
		case 2081885153:
		case -1314365345:
		case 1322977732:
		case 396623013:
		case 1981664462:
		case -1921250821:
		case -1370731547:
		case 1683798242:
		case -910968288:
			if (iParam1 > 0 || Global_262145.f_27657)
			{
				func_216(iParam2, -1135378931, 537254313, 1474183246, iParam0, iParam1, iVar0, 7);
			}
			break;
		
		case 1240683675:
		case 1241904665:
		case -1100963799:
		case -494565059:
		case 827308208:
		case -1857685192:
		case 1698417709:
		case 1057653594:
		case 1810506918:
		case 451427308:
		case 824622151:
		case 1253978276:
		case -1576080766:
		case 1508411869:
		case 1428501742:
		case -1918967151:
		case 1261538664:
		case 1180397655:
		case 1414674366:
		case 261460130:
		case -2027658376:
		case -2017925037:
		case 1668610896:
		case -2032529561:
		case -1224479447:
		case -319306689:
		case -466527264:
		case 1925965142:
		case 592152676:
		case 2035612943:
		case 1568659720:
		case 1220095570:
		case 2050320631:
		case 592672421:
		case 1775876058:
		case -842062976:
		case -518651910:
		case 14658715:
		case -604793592:
		case -823426392:
		case -1401862980:
		case -173354274:
		case 409533976:
		case -1472522337:
		case 542574408:
		case -1261799063:
		case 784631574:
		case -2027479156:
		case -837690641:
			func_216(iParam2, -1135378931, 1445302971, 1474183246, iParam0, iParam1, iVar0, 7);
			break;
	}
}

int func_216(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7)
{
	bool bVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	int iVar4;
	bool bVar5;
	
	bVar0 = false;
	if (!func_229())
	{
		bVar0 = true;
	}
	iVar1 = 1;
	if (!bVar0)
	{
		if (!unk_0x5053392075AA583C(func_98()) || unk_0x701B05C16EF4F48E())
		{
			Global_4265553 = 1;
			return 0;
		}
		if (Global_2463410)
		{
			if (iParam3 == 1067618600 || iParam3 == -1303831698)
			{
				Global_4265554 = 1;
				return 0;
			}
		}
	}
	bVar3 = false;
	iVar2 = 0;
	while (iVar2 < 15)
	{
		if (Global_4264051[iVar2 /*85*/].f_66.f_2 == 0)
		{
			bVar3 = true;
		}
		iVar2++;
	}
	if (!bVar3)
	{
		return 0;
	}
	*uParam0 = 15;
	iVar4 = 2147483647;
	if ((bVar0 || iVar1) || unk_0x734A68E809CC23F0(&iVar4, iParam3, iParam4, iParam2, iParam5, iParam6))
	{
		if ((bVar0 || iVar1) || unk_0x9F5556ED9A739FBC(iVar4))
		{
			*uParam0 = func_223(iVar4, iParam1, iParam4, iParam2, iParam3, iParam5, 0, iParam6, iParam7, 1, 1);
			if (iVar1 && !bVar0)
			{
			}
			if (bVar0)
			{
				if (*uParam0 != -1)
				{
					Global_4264051[*uParam0 /*85*/].f_66.f_8 = 1;
					Global_4264051[*uParam0 /*85*/].f_66.f_12 = 1;
				}
			}
			Global_4265538 = 1;
			return 1;
		}
	}
	else
	{
		if (iParam7 & 2 != 0)
		{
			Global_4265552 = 1;
			Global_4265555 = iParam4;
			Global_4265557 = iParam3;
			Global_4265558 = 1;
			Global_4265556 = iParam5;
		}
		if (iParam7 & 8 != 0)
		{
			Global_4265555 = iParam4;
			Global_4265557 = iParam3;
			Global_4265558 = 1;
			Global_4265556 = iParam5;
		}
		bVar5 = false;
		if (bVar5)
		{
			func_222(1, iParam4);
			Global_4265552 = 0;
		}
		if (iParam7 & 4 != 0)
		{
			func_217(-1, iParam4, iParam6, iParam5, -1);
		}
	}
	return 0;
}

void func_217(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	switch (iParam1)
	{
		case 1704445500:
			unk_0xBE20AB8238688965(&(Global_2425869[unk_0x460153A63B9477BC() /*443*/].f_126.f_71), 0);
			break;
	}
	if (iParam0 != -1)
	{
		func_218(iParam0);
	}
}

void func_218(int iParam0)
{
	bool bVar0;
	
	bVar0 = false;
	if (!func_229())
	{
		bVar0 = true;
	}
	if (iParam0 != -1)
	{
		if (func_221(iParam0))
		{
			if (!bVar0)
			{
				unk_0x2ABDF07188759AF4();
			}
		}
		else if (!bVar0)
		{
			unk_0x7365588A145923CE(Global_4264051[iParam0 /*85*/].f_66);
		}
		func_219(&(Global_4264051[iParam0 /*85*/]));
	}
}

void func_219(var uParam0)
{
	uParam0->f_66 = 0;
	uParam0->f_66 = 2147483647;
	uParam0->f_66.f_1 = 0;
	uParam0->f_66.f_2 = 0;
	uParam0->f_66.f_3 = -1593119440;
	uParam0->f_66.f_4 = -2085313189;
	uParam0->f_66.f_5 = 0;
	uParam0->f_66.f_6 = 1227573907;
	uParam0->f_66.f_7 = -1161833819;
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_13 = 0;
	uParam0->f_2 = 0;
	func_220(&(uParam0->f_14));
	func_220(&(uParam0->f_14.f_13));
	StringCopy(&(uParam0->f_14.f_26), "", 32);
	StringCopy(&(uParam0->f_14.f_34), "", 24);
	StringCopy(&(uParam0->f_14.f_40), "", 16);
	StringCopy(&(uParam0->f_14.f_44), "", 32);
	uParam0->f_3 = 0;
	uParam0->f_4 = 0;
	uParam0->f_5 = 0;
	uParam0->f_6 = 0;
	uParam0->f_7 = 0;
	uParam0->f_8 = 0;
	uParam0->f_66.f_8 = 0;
	uParam0->f_66.f_9 = 0;
	uParam0->f_66.f_10 = 0;
	uParam0->f_66.f_11 = 0;
	uParam0->f_66.f_13 = 0;
	uParam0->f_66.f_12 = 0;
	uParam0->f_66.f_14 = 0;
	uParam0->f_66.f_15 = 0;
	uParam0->f_66.f_16 = 0;
	uParam0->f_66.f_18 = 0;
}

void func_220(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
	uParam0->f_4 = 0;
	uParam0->f_5 = 0;
	uParam0->f_6 = 0;
	uParam0->f_7 = 0;
	uParam0->f_8 = 0;
	uParam0->f_9 = 0;
	uParam0->f_10 = 0;
	uParam0->f_11 = 0;
	uParam0->f_12 = 0;
}

int func_221(int iParam0)
{
	if (iParam0 >= 0 && iParam0 < 15)
	{
		return Global_4264051[iParam0 /*85*/].f_66.f_5 == 1;
	}
	return 0;
}

void func_222(int iParam0, int iParam1)
{
	Global_2464590 = iParam1;
	Global_2464589 = iParam0;
}

int func_223(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, bool bParam6, int iParam7, var uParam8, int iParam9, int iParam10)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 15)
	{
		if (Global_4264051[iVar0 /*85*/].f_66.f_2 == 0)
		{
			if (!func_229())
			{
				iParam0 = iVar0 + 900;
			}
			Global_4264051[iVar0 /*85*/].f_66.f_2 = 1;
			Global_4264051[iVar0 /*85*/].f_66.f_1 = iParam5;
			Global_4264051[iVar0 /*85*/].f_66.f_3 = iParam1;
			Global_4264051[iVar0 /*85*/].f_66.f_4 = iParam2;
			Global_4264051[iVar0 /*85*/].f_66.f_7 = iParam3;
			Global_4264051[iVar0 /*85*/].f_66.f_5 = 0;
			Global_4264051[iVar0 /*85*/].f_66 = iParam0;
			Global_4264051[iVar0 /*85*/].f_66.f_6 = iParam4;
			Global_4264051[iVar0 /*85*/].f_66.f_11 = uParam8;
			Global_4264051[iVar0 /*85*/].f_66.f_10 = iParam7;
			Global_4264051[iVar0 /*85*/].f_66.f_13 = iParam9;
			Global_4264051[iVar0 /*85*/].f_66.f_12 = 0;
			Global_4264051[iVar0 /*85*/].f_66.f_14 = unk_0xD3137A576BE9EC5C();
			Global_4264051[iVar0 /*85*/].f_66.f_18 = 0;
			Global_4265538 = 0;
			if (bParam6)
			{
				Global_4264051[iVar0 /*85*/].f_66.f_5 = 1;
			}
			if (iParam1 == -1135378931 && iParam10)
			{
				func_224(Global_4264051[iVar0 /*85*/], iVar0);
			}
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_224(struct<67> Param0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, int iParam19)
{
	struct<3> Var0;
	int iVar1;
	
	if (iParam19 < 0)
	{
		return;
	}
	Var0.f_2 = 2147483647;
	Var0.x = 1191422458;
	Var0.f_1 = unk_0x460153A63B9477BC();
	Var0.f_2 = { Param0.f_66 };
	Var0.f_2.f_33 = iParam19;
	iVar1 = func_163(Var0.f_1);
	if ((Global_262145.f_23581 && !Global_262145.f_23582) && !Global_262145.f_23583)
	{
		return;
	}
	if (!iVar1 == 0)
	{
		func_225();
		unk_0xB802750B43D4047C(1, &Var0, 36, iVar1);
	}
}

void func_225()
{
	unk_0xBE9B3870B1B370E3("AM_ARENA_SHP");
}

int func_226(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return 3;
		
		case 2:
			return 1;
		
		case 3:
			return 4;
		
		case 4:
			return 2;
		
		case 5:
			return 0;
		
		case 6:
			return 3;
		
		case 7:
			return 1;
		
		case 8:
			return 4;
		
		case 9:
			return 2;
		
		case 10:
			return 0;
		
		case 11:
			return 3;
		
		case 12:
			return 1;
		
		case 13:
			return 4;
		
		case 14:
			return 2;
		
		case 15:
			return 0;
		
		case 16:
			return 3;
		
		case 17:
			return 1;
		
		case 18:
			return 4;
		
		case 19:
			return 2;
		
		case 20:
			return 0;
		
		case 21:
			return 5;
		
		case 22:
			return 5;
		
		case 23:
			return 5;
		
		case 24:
			return 5;
		
		case 25:
			return 5;
		
		case 26:
			return 5;
		
		case 27:
			return 5;
		
		case 28:
			return 5;
		
		case 29:
			return 5;
		
		case 30:
			return 5;
		
		case 31:
			return 5;
		
		default:
	}
	return -1;
}

char* func_227(int iParam0)
{
	char* sVar0;
	
	switch (iParam0)
	{
		case 2:
			sVar0 = "MP_BWH_WEED_1";
			break;
		
		case 1:
			sVar0 = "MP_BWH_METH_1";
			break;
		
		case 3:
			sVar0 = "MP_BWH_CRACK_1";
			break;
		
		case 5:
			sVar0 = "MP_BWH_FAKEID_1";
			break;
		
		case 4:
			sVar0 = "MP_BWH_CASH_1";
			break;
		
		case 7:
			sVar0 = "MP_BWH_WEED_2";
			break;
		
		case 6:
			sVar0 = "MP_BWH_METH_2";
			break;
		
		case 8:
			sVar0 = "MP_BWH_CRACK_2";
			break;
		
		case 10:
			sVar0 = "MP_BWH_FAKEID_2";
			break;
		
		case 9:
			sVar0 = "MP_BWH_CASH_2";
			break;
		
		case 12:
			sVar0 = "MP_BWH_WEED_3";
			break;
		
		case 11:
			sVar0 = "MP_BWH_METH_3";
			break;
		
		case 13:
			sVar0 = "MP_BWH_CRACK_3";
			break;
		
		case 15:
			sVar0 = "MP_BWH_FAKEID_3";
			break;
		
		case 14:
			sVar0 = "MP_BWH_CASH_3";
			break;
		
		case 17:
			sVar0 = "MP_BWH_WEED_4";
			break;
		
		case 16:
			sVar0 = "MP_BWH_METH_4";
			break;
		
		case 18:
			sVar0 = "MP_BWH_CRACK_4";
			break;
		
		case 20:
			sVar0 = "MP_BWH_FAKEID_4";
			break;
		
		case 19:
			sVar0 = "MP_BWH_CASH_4";
			break;
		
		case 21:
			sVar0 = "MP_BUNKER_1";
			break;
		
		case 22:
			sVar0 = "MP_BUNKER_2";
			break;
		
		case 23:
			sVar0 = "MP_BUNKER_3";
			break;
		
		case 24:
			sVar0 = "MP_BUNKER_4";
			break;
		
		case 25:
			sVar0 = "MP_BUNKER_5";
			break;
		
		case 26:
			sVar0 = "MP_BUNKER_6";
			break;
		
		case 27:
			sVar0 = "MP_BUNKER_7";
			break;
		
		case 28:
			sVar0 = "MP_BUNKER_9";
			break;
		
		case 29:
			sVar0 = "MP_BUNKER_10";
			break;
		
		case 30:
			sVar0 = "MP_BUNKER_11";
			break;
		
		case 31:
			sVar0 = "MP_BUNKER_12";
			break;
	}
	return sVar0;
}

struct<2> func_228()
{
	return Global_1630317[unk_0x460153A63B9477BC() /*595*/].f_11.f_193;
}

int func_229()
{
	if (unk_0xF8EDFF98A9C94C74())
	{
		return unk_0xC5AA3415F982DC6C();
	}
	return 0;
}

void func_230(int iParam0, var uParam1, var uParam2)
{
	*uParam1 = Global_1630317[iParam0 /*595*/].f_11.f_8[0];
	*uParam2 = Global_1630317[iParam0 /*595*/].f_11.f_8[1];
}

int func_231(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, char* sParam8, bool bParam9, int iParam10)
{
	return func_232(iParam0, iParam1, sParam2, iParam3, iParam4, iParam5, iParam6, iParam7, sParam8, bParam9, iParam10);
}

int func_232(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, char* sParam8, bool bParam9, int iParam10)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_242(iParam0, sParam2, iParam3, iParam4, iParam5, iParam6, iParam7, bParam9);
	if (iParam4 == -592022605 || iParam4 == -1915191729)
	{
		if (unk_0xAE06B9E39EBDE049(iParam1))
		{
			if (unk_0xA1914E72A0EB31D0(iParam1))
			{
				iVar1 = unk_0x9048E8838E822F21(iParam1);
				func_238(unk_0x1D5C49FCA9BC5B02(iVar1, 31086, 0f, 0f, 0f), iVar0, 0, sParam8, iParam10);
			}
		}
	}
	else
	{
		func_233(iParam1, iVar0, sParam8, iParam10);
	}
	return iVar0;
}

void func_233(int iParam0, int iParam1, char* sParam2, int iParam3)
{
	struct<3> Var0;
	
	Var0 = { func_236(iParam0, 1) };
	if (iParam0 == func_235(unk_0x9B0761B4C3EB8BC7()))
	{
		func_234(1);
	}
	func_238(Var0, iParam1, 0, sParam2, iParam3);
}

void func_234(int iParam0)
{
	Global_2440049.f_2002 = iParam0;
}

int func_235(int iParam0)
{
	return iParam0;
}

Vector3 func_236(int iParam0, bool bParam1)
{
	struct<3> Var0;
	struct<3> Var1;
	float fVar2;
	struct<3> Var3;
	struct<3> Var4;
	float fVar5;
	
	if (unk_0xC337F69A1938DDA2())
	{
		Var1 = { unk_0x1DB2F48A1F5B2CD3(2) };
	}
	if (iParam0 == func_237(unk_0x9B0761B4C3EB8BC7()) && unk_0xF7B3A1430308F92B(unk_0xFA3A11B011BBD7F6()) == 4)
	{
		Var0 = { unk_0x7EC595B99EA7C4B1(iParam0, 0f, 8f, -0.2f) };
	}
	else
	{
		Var0 = { unk_0x3E4D3CCC220BDFB1(iParam0, false) };
	}
	fVar2 = 0f;
	if (!unk_0xA59F96B50B97E63C(iParam0, 0))
	{
		fVar2 = unk_0xEF7858F25585F853(iParam0);
		if (unk_0xF7B3A1430308F92B(unk_0xFA3A11B011BBD7F6()) == 4)
		{
			fVar2 = Var1.f_2;
		}
	}
	unk_0x140662B520844E45(unk_0x36FE6D3220816ADA(iParam0), &Var3, &Var4);
	if (bParam1)
	{
		fVar5 = (Var4.f_2 + 0.18f);
	}
	else
	{
		fVar5 = (Var3.f_2 + 0.18f);
	}
	Var0 = { unk_0x1BAE5C94E38E44FE(Var0, fVar2, 0f, 0f, fVar5) };
	return Var0;
}

int func_237(int iParam0)
{
	return iParam0;
}

void func_238(struct<3> Param0, int iParam1, int iParam2, char* sParam3, int iParam4)
{
	int iVar0;
	int iVar1;
	
	if (iParam1 != 0)
	{
		iVar1 = -1;
		iVar0 = 0;
		while (iVar0 < 20)
		{
			if (Global_2440049.f_1401[iVar0 /*30*/].f_6 == 0 || Global_2440049.f_1401[iVar0 /*30*/].f_6 == 7)
			{
				iVar1 = iVar0;
				iVar0 = 20;
			}
			iVar0++;
		}
		if (iVar1 != -1)
		{
			Global_2440049.f_1401[iVar1 /*30*/] = { Param0 };
			Global_2440049.f_1401[iVar1 /*30*/].f_6 = 1;
			Global_2440049.f_1401[iVar1 /*30*/].f_4 = func_241(Global_2440049.f_1401[iVar1 /*30*/], &Global_1312335, &Global_1312336);
			Global_2440049.f_1401[iVar1 /*30*/].f_7 = unk_0x6CAAB7E78B5D978A();
			Global_2440049.f_1401[iVar1 /*30*/].f_3 = iParam1;
			Global_2440049.f_1401[iVar1 /*30*/].f_8 = iParam2;
			Global_2440049.f_1401[iVar1 /*30*/].f_9 = func_240();
			Global_2440049.f_1401[iVar1 /*30*/].f_10 = func_239();
			StringCopy(&(Global_2440049.f_1401[iVar1 /*30*/].f_22), sParam3, 16);
			Global_2440049.f_1401[iVar1 /*30*/].f_26 = unk_0x8C358101651A3F7C(unk_0x6CAAB7E78B5D978A(), iParam4);
		}
	}
}

int func_239()
{
	if (Global_2440049.f_2002)
	{
		Global_2440049.f_2002 = 0;
		return 1;
	}
	Global_2440049.f_2002 = 0;
	return 0;
}

var func_240()
{
	var uVar0;
	
	uVar0 = Global_2440049.f_2004;
	Global_2440049.f_2004 = 1;
	return uVar0;
}

float func_241(struct<3> Param0, var uParam1, var uParam2)
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	
	fVar0 = unk_0x272784C60C397DB6(unk_0x0F1DDC797C100E7F(), Param0, true);
	if (fVar0 < 5f)
	{
		*uParam1 = 0.402f;
		*uParam2 = 0.476f;
		return 0f;
	}
	if (fVar0 > 20f)
	{
		*uParam1 = 0.212f;
		*uParam2 = 0.286f;
		return 1f;
	}
	fVar1 = (1f - ((fVar0 - 5f) / (20f - 5f)));
	fVar2 = (fVar1 * (0.402f - 0.212f));
	fVar3 = (fVar1 * (0.476f - 0.286f));
	*uParam1 = (fVar2 + 0.212f);
	*uParam2 = (fVar3 + 0.286f);
	return fVar1;
}

var func_242(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	var uVar0;
	
	uVar0 = func_243(iParam0, 0, sParam1, iParam4, iParam5, 0, iParam6, 1, iParam2, iParam3, bParam7);
	return uVar0;
}

int func_243(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, bool bParam5, int iParam6, bool bParam7, int iParam8, int iParam9, bool bParam10)
{
	float fVar0;
	int iVar1;
	int iVar2;
	float fVar3;
	
	if (func_278(unk_0x460153A63B9477BC()) || func_277(unk_0x460153A63B9477BC()))
	{
		if (Global_262145.f_9637 > 16000)
		{
			iVar2 = 16000;
		}
		else
		{
			iVar2 = Global_262145.f_9637;
		}
	}
	else if (func_275() || func_274(unk_0x460153A63B9477BC()))
	{
		if (Global_262145.f_22787 > 16000)
		{
			iVar2 = 16000;
		}
		else
		{
			iVar2 = Global_262145.f_22787;
		}
	}
	else if (Global_262145.f_6636 > 15000)
	{
		iVar2 = 15000;
	}
	else
	{
		iVar2 = Global_262145.f_6636;
	}
	if (func_273(sParam2))
	{
	}
	if (func_272())
	{
		if (iParam4 < 1)
		{
			iParam4 = 1;
		}
		iVar1 = round((IntToFloat(iParam3) * (IntToFloat(iParam4) + fVar0)));
		iVar1 = func_270(iVar1);
		fVar3 = (to_float(iVar1) * Global_262145.f_1);
		iVar1 = round(fVar3);
		if (bParam10)
		{
			iVar1 = func_269(&iVar1);
		}
		if (iParam1 == 0)
		{
			switch (iParam0)
			{
				case 2:
					func_266(0, &iVar1);
					break;
				
				case 3:
					func_266(1, &iVar1);
					break;
				
				case 1:
					func_263(&iVar1);
					break;
				}
		}
		if (iVar1 > Global_1688737)
		{
			return 0;
		}
		if (iParam1 == 0)
		{
			if (iVar1 > iVar2)
			{
				if (iParam0 == 1)
				{
					iVar1 = iVar2;
				}
				if (iParam0 == 2 || iParam0 == 3)
				{
					iVar1 = iVar2;
				}
			}
		}
		if (bParam7)
		{
			func_262(1164, iVar1, -1);
			if (iParam1 == 0)
			{
				func_254((func_261(unk_0x460153A63B9477BC()) + iVar1), iParam9, 0);
				if (iParam8 == 0)
				{
				}
				if (iParam9 == 0)
				{
				}
				unk_0xC0B1609C742F66E3(iVar1, iParam8, iParam9);
				if (Global_1590682[unk_0x460153A63B9477BC() /*883*/].f_39.f_2 != -1)
				{
					func_262(1165, iVar1, -1);
				}
				func_248(iVar1);
			}
		}
		if (bParam5)
		{
		}
		if (bParam7)
		{
			if (iParam6 == -1)
			{
				func_244((func_246(unk_0x460153A63B9477BC()) + iVar1));
			}
			else
			{
				func_244((func_246(unk_0x460153A63B9477BC()) + iParam6));
			}
		}
	}
	return iVar1;
}

void func_244(int iParam0)
{
	if (func_272())
	{
		Global_1590682[unk_0x460153A63B9477BC() /*883*/].f_211.f_5 = iParam0;
		func_245(joaat("MPPLY_GLOBALXP"), iParam0);
	}
}

void func_245(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != 0)
	{
		unk_0x6000E4684CB4330B(iVar0, iParam1, 1);
	}
}

int func_246(int iParam0)
{
	if (iParam0 > -1)
	{
		if (func_6(iParam0, 0, 1))
		{
			if (iParam0 == unk_0x460153A63B9477BC())
			{
				return func_247(joaat("MPPLY_GLOBALXP"));
			}
			else
			{
				return Global_1590682[iParam0 /*883*/].f_211.f_5;
			}
		}
		else
		{
			return func_247(joaat("MPPLY_GLOBALXP"));
		}
	}
	return 0;
}

int func_247(int iParam0)
{
	int iVar0;
	var uVar1;
	
	iVar0 = iParam0;
	if (unk_0xD2F202166691EDB2(iVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

void func_248(int iParam0)
{
	struct<13> Var0;
	int iVar1;
	
	Var0 = { func_253(unk_0x460153A63B9477BC()) };
	if (unk_0xE2FBD13450B2DA21())
	{
		if (unk_0xBF9EC1ED7E386622(&Var0))
		{
			iVar1 = func_251(func_252(&Var0));
			if (iVar1 == 0)
			{
				func_250(&Global_1388052, iParam0);
				func_249(joaat("MPPLY_CREW_LOCAL_XP_0"), Global_1388052);
			}
			else if (iVar1 == 1)
			{
				func_250(&Global_1388053, iParam0);
				func_249(joaat("MPPLY_CREW_LOCAL_XP_1"), Global_1388053);
			}
			else if (iVar1 == 2)
			{
				func_250(&Global_1388054, iParam0);
				func_249(joaat("MPPLY_CREW_LOCAL_XP_2"), Global_1388054);
			}
			else if (iVar1 == 3)
			{
				func_250(&Global_1388055, iParam0);
				func_249(joaat("MPPLY_CREW_LOCAL_XP_3"), Global_1388055);
			}
			else if (iVar1 == 4)
			{
				func_250(&Global_1388056, iParam0);
				func_249(joaat("MPPLY_CREW_LOCAL_XP_4"), Global_1388056);
			}
		}
	}
}

void func_249(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != 0)
	{
		unk_0x6000E4684CB4330B(iVar0, iParam1, 1);
	}
	switch (iParam0)
	{
		case joaat("MPPLY_CREW_0_ID"):
			Global_1388047 = iParam1;
			break;
		
		case joaat("MPPLY_CREW_1_ID"):
			Global_1388049 = iParam1;
			break;
		
		case joaat("MPPLY_CREW_2_ID"):
			Global_1388049 = iParam1;
			break;
		
		case joaat("MPPLY_CREW_3_ID"):
			Global_1388050 = iParam1;
			break;
		
		case joaat("MPPLY_CREW_4_ID"):
			Global_1388051 = iParam1;
			break;
		
		case joaat("MPPLY_CREW_LOCAL_XP_0"):
			Global_1388052 = iParam1;
			break;
		
		case joaat("MPPLY_CREW_LOCAL_XP_1"):
			Global_1388053 = iParam1;
			break;
		
		case joaat("MPPLY_CREW_LOCAL_XP_2"):
			Global_1388054 = iParam1;
			break;
		
		case joaat("MPPLY_CREW_LOCAL_XP_3"):
			Global_1388055 = iParam1;
			break;
		
		case joaat("MPPLY_CREW_LOCAL_XP_4"):
			Global_1388056 = iParam1;
			break;
		
		case joaat("MPPLY_BECAME_CHEATER_NUM"):
			Global_1388057 = iParam1;
			break;
		
		case joaat("MPPLY_FRIENDLY"):
			Global_1388058 = iParam1;
			break;
		
		case joaat("MPPLY_OFFENSIVE_LANGUAGE"):
			Global_1388059 = iParam1;
			break;
		
		case joaat("MPPLY_GRIEFING"):
			Global_1388060 = iParam1;
			break;
		
		case joaat("MPPLY_HELPFUL"):
			Global_1388061 = iParam1;
			break;
		
		case joaat("MPPLY_OFFENSIVE_TAGPLATE"):
			Global_1388062 = iParam1;
			break;
		
		case joaat("MPPLY_OFFENSIVE_UGC"):
			Global_1388063 = iParam1;
			break;
		
		default:
			break;
	}
}

void func_250(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 + iParam1);
}

int func_251(int iParam0)
{
	if (iParam0 == Global_1388047)
	{
		return 0;
	}
	else if (iParam0 == Global_1388048)
	{
		return 1;
	}
	else if (iParam0 == Global_1388049)
	{
		return 2;
	}
	else if (iParam0 == Global_1388050)
	{
		return 3;
	}
	else if (iParam0 == Global_1388051)
	{
		return 4;
	}
	else
	{
		return -1;
	}
	return -1;
}

int func_252(var uParam0)
{
	if (unk_0xE2FBD13450B2DA21())
	{
		if (unk_0xBF9EC1ED7E386622(uParam0))
		{
			return Global_2462175;
		}
	}
	return Global_2462175;
}

struct<13> func_253(int iParam0)
{
	struct<13> Var0;
	
	unk_0x2BDD80E79441BD36(iParam0, &Var0, 13);
	return Var0;
}

void func_254(int iParam0, int iParam1, int iParam2)
{
	if (func_272())
	{
		if (iParam0 >= 1787576850)
		{
			iParam0 = 1787576850;
		}
		if (Global_262145.f_9605 == 0 && iParam1 != -1076930708)
		{
			if (iParam2 == 0)
			{
				if (iParam0 < Global_1388197[func_153(-1)])
				{
					unk_0xC0B1609C742F66E3(iParam0, -523908350, iParam1);
					return;
				}
				else if (iParam0 == Global_1388197[func_153(-1)])
				{
					return;
				}
			}
		}
		if (Global_262145.f_9604 == 0)
		{
			if (iParam0 == 0)
			{
				unk_0xC0B1609C742F66E3(iParam0, -1158693853, -1345423847);
				if (iParam2 == 0)
				{
					return;
				}
			}
		}
		if (Global_262145.f_9604 == 0)
		{
			if (iParam0 < 0)
			{
				unk_0xC0B1609C742F66E3(iParam0, -1586921397, iParam1);
				return;
			}
		}
		if (func_260(unk_0x460153A63B9477BC()))
		{
			Global_1590682[unk_0x460153A63B9477BC() /*883*/].f_211.f_1 = iParam0;
			Global_1590682[unk_0x460153A63B9477BC() /*883*/].f_211.f_6 = func_258(iParam0, 1);
		}
		func_197(639, iParam0, -1, 1);
		func_198(640, func_258(iParam0, 1), -1, 1, 0);
		Global_1388197[func_153(-1)] = iParam0;
		func_255(-1109644434, 7, 0);
	}
}

void func_255(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	if (func_257(iParam1, iParam2))
	{
		iVar0 = func_256();
		Global_2462127[iVar0] = iParam1;
		Global_2462138[iVar0] = iParam0;
	}
}

int func_256()
{
	int iVar0;
	int iVar1;
	
	iVar0 = 9;
	iVar1 = 0;
	while (iVar1 <= 9)
	{
		if (Global_2462127[iVar1] == 0)
		{
			iVar0 = iVar1;
			iVar1 = 10;
		}
		iVar1++;
	}
	return iVar0;
}

int func_257(int iParam0, var uParam1)
{
	if (Global_1312884)
	{
		return 0;
	}
	if (iParam0 == 22)
	{
		return 1;
	}
	if ((((((((uParam1 || !Global_1312896) || iParam0 == 3) || iParam0 == 10) || iParam0 == 11) || iParam0 == 27) || iParam0 == 28) || iParam0 == 29) || iParam0 == 30)
	{
		return 1;
	}
	else
	{
		return 0;
	}
	return 1;
}

int func_258(int iParam0, bool bParam1)
{
	if (bParam1)
	{
	}
	return func_259(iParam0, 0);
}

int func_259(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	float fVar4;
	
	if (iParam1 == 0)
	{
	}
	iVar1 = 8000;
	iVar2 = 0;
	iVar3 = ((iVar1 - iVar2) / 2);
	iVar0 = 0;
	while (iVar0 <= 100)
	{
		if (iVar1 == iVar2)
		{
			iVar0 = 8000;
			if (iVar3 == 0)
			{
				iVar3 = 1;
			}
			return iVar3;
		}
		if (Global_292402[iVar3] == iParam0)
		{
			iVar1 = iVar3;
			iVar2 = iVar3;
		}
		else if (Global_292402[iVar3] < iParam0)
		{
			if (iVar2 == iVar3)
			{
				iVar2++;
			}
			else
			{
				iVar2 = iVar3;
			}
		}
		else if (iVar1 == iVar3)
		{
			iVar1 = (iVar1 - 1);
		}
		else
		{
			iVar1 = iVar3;
		}
		fVar4 = (((to_float(iVar1) - to_float(iVar2)) / 2f) + to_float(iVar2));
		iVar3 = round(fVar4);
		iVar0++;
	}
	return 8000;
}

int func_260(int iParam0)
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

int func_261(int iParam0)
{
	if (Global_1312485.f_9 == 0)
	{
		if (iParam0 > -1)
		{
			if (iParam0 == unk_0x460153A63B9477BC())
			{
				return Global_1388197[func_153(-1)];
			}
			else if (func_260(iParam0))
			{
				return Global_1590682[iParam0 /*883*/].f_211.f_1;
			}
		}
	}
	else
	{
		return Global_1388197[func_153(-1)];
	}
	return 0;
}

void func_262(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	iVar0 = func_200(iParam0, func_153(iParam2), 0);
	iVar0 = (iVar0 + iParam1);
	if (!func_199(iParam0))
	{
		func_198(iParam0, iVar0, iParam2, 1, 0);
	}
	else
	{
		func_197(iParam0, iVar0, iParam2, 1);
	}
}

void func_263(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	iVar1 = unk_0x6CC163E30ECE0790(unk_0x460153A63B9477BC());
	iVar0 = 0;
	while (iVar0 < unk_0xEFA28384DDD283E1())
	{
		iVar4 = unk_0x628A51AC66E80772(iVar0);
		if (unk_0xBD09DF93F957A0CF(iVar4))
		{
			iVar5 = unk_0x9019589211A13B02(iVar4);
			if (unk_0x6CC163E30ECE0790(iVar5) != -1)
			{
				if (unk_0x6CC163E30ECE0790(iVar5) == iVar1 || func_69(unk_0x6CC163E30ECE0790(iVar5), iVar1, 0))
				{
					iVar2++;
					if (iVar5 != unk_0x460153A63B9477BC())
					{
						if (func_265(unk_0x460153A63B9477BC(), iVar5))
						{
							bVar3 = true;
						}
					}
				}
			}
		}
		iVar0++;
	}
	if (bVar3)
	{
		iVar6 = round((func_264(*iParam0, 100) * (10f * Global_262145.f_4218)));
	}
	if (iVar2 > 4)
	{
		iVar2 = 4;
	}
	if (iVar2 >= 2)
	{
		iVar7 = round((func_264(*iParam0, 100) * (20f * Global_262145.f_4211)));
	}
	*iParam0 = (*iParam0 + iVar6);
	*iParam0 = (*iParam0 + iVar7);
}

float func_264(int iParam0, int iParam1)
{
	float fVar0;
	float fVar1;
	float fVar2;
	
	fVar0 = to_float(iParam0);
	fVar1 = to_float(iParam1);
	fVar2 = (fVar0 / fVar1);
	return fVar2;
}

int func_265(int iParam0, int iParam1)
{
	if (unk_0xE2FBD13450B2DA21())
	{
		Global_2515173 = { func_253(iParam0) };
		Global_2515186 = { func_253(iParam1) };
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

void func_266(bool bParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	
	if (bParam0)
	{
		iVar0 = 0;
		while (iVar0 < unk_0xEFA28384DDD283E1())
		{
			iVar3 = iVar0;
			if (unk_0xBD09DF93F957A0CF(iVar3))
			{
				iVar4 = unk_0x9019589211A13B02(iVar3);
				if (func_6(iVar4, 0, 1))
				{
					if (iVar4 != unk_0x460153A63B9477BC())
					{
						iVar1++;
						if (func_265(unk_0x460153A63B9477BC(), iVar4))
						{
							bVar2 = true;
						}
					}
				}
			}
			iVar0++;
		}
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < 32)
		{
			iVar4 = iVar0;
			if (func_6(iVar4, 1, 1))
			{
				if (iVar4 != unk_0x460153A63B9477BC())
				{
					if (func_267(unk_0x460153A63B9477BC(), iVar4) <= 20f)
					{
						iVar1++;
						if (func_265(unk_0x460153A63B9477BC(), iVar4))
						{
							bVar2 = true;
						}
					}
				}
			}
			iVar0++;
		}
	}
	if (bVar2)
	{
		iVar5 = round((func_264(*iParam1, 100) * (10f * Global_262145.f_4218)));
	}
	if (iVar1 > 4)
	{
		iVar1 = 4;
	}
	if (iVar1 >= 1)
	{
		iVar6 = round((func_264(*iParam1, 100) * (20f * Global_262145.f_4211)));
	}
	*iParam1 = (*iParam1 + iVar5);
	*iParam1 = (*iParam1 + iVar6);
}

float func_267(int iParam0, int iParam1)
{
	return vdist(func_268(iParam0), func_268(iParam1));
	return 0f;
}

Vector3 func_268(int iParam0)
{
	return unk_0x3E4D3CCC220BDFB1(unk_0x1FA7B77001D60F9D(iParam0), false);
}

int func_269(int iParam0)
{
	int iVar0;
	
	if (unk_0x2F9269FB5C4717C0() != 3)
	{
		return *iParam0;
	}
	iVar0 = round((func_264(*iParam0, 100) * 25f));
	*iParam0 = (*iParam0 + iVar0);
	return *iParam0;
}

int func_270(int iParam0)
{
	if (iParam0 < 0)
	{
		if (unk_0x44F29CF6A0675F4F(iParam0) > func_261(unk_0x460153A63B9477BC()))
		{
			iParam0 = -func_261(unk_0x460153A63B9477BC());
		}
	}
	if (func_271(8000, 0, 0) > 0)
	{
		if (func_271(8000, 0, 0) < (iParam0 + func_261(unk_0x460153A63B9477BC())))
		{
			iParam0 = (func_271(8000, 0, 0) - func_261(unk_0x460153A63B9477BC()));
		}
	}
	return iParam0;
}

int func_271(int iParam0, bool bParam1, int iParam2)
{
	if (iParam2 == 0)
	{
	}
	if (bParam1)
	{
	}
	if (iParam0 >= 8000)
	{
		iParam0 = 8000;
	}
	return Global_292402[iParam0];
}

int func_272()
{
	return 1;
}

int func_273(char* sParam0)
{
	if (unk_0x211E6DB3335430B4(sParam0))
	{
		return 1;
	}
	else if (unk_0xF005CCA4263DF67F(sParam0, "") || unk_0xF005CCA4263DF67F(sParam0, "0"))
	{
		return 1;
	}
	return 0;
}

int func_274(int iParam0)
{
	return func_190(func_102(iParam0));
}

bool func_275()
{
	if (unk_0xFC559366953F62B3())
	{
		return func_86();
	}
	return func_276(Global_4456448.f_82708);
}

int func_276(int iParam0)
{
	int iVar0;
	
	if (iParam0 == 0)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 16)
	{
		if (Global_262145.f_5009[iVar0] == iParam0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

bool func_277(int iParam0)
{
	return Global_2425869[iParam0 /*443*/].f_119 == 2;
}

bool func_278(int iParam0)
{
	return Global_2425869[iParam0 /*443*/].f_119 == 7;
}

void func_279()
{
	Global_2463792 = 1;
}

void func_280(int iParam0, var uParam1, var uParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	*uParam1 = 0;
	*uParam2 = 0;
	if (!func_284(7))
	{
		return;
	}
	iVar0 = func_283(iParam0);
	iVar1 = func_282(iParam0);
	iVar2 = unk_0x44F29CF6A0675F4F(unk_0x624736CA66E14161(Global_2540384.f_5188.f_266, unk_0x6CAAB7E78B5D978A()));
	if (func_281(iParam0) != -1)
	{
		if (iVar2 > func_281(iParam0))
		{
			iVar2 = func_281(iParam0);
		}
	}
	else if (iVar2 > Global_262145.f_12403)
	{
		iVar2 = Global_262145.f_12403;
	}
	iVar3 = floor((to_float(iVar2) / (1000f * 60f)));
	if (iVar3 < 1)
	{
		iVar3 = 1;
	}
	*uParam1 = (iVar3 * iVar1);
	*uParam2 = (iVar3 * iVar0);
}

int func_281(int iParam0)
{
	if (func_119(iParam0, 0) || func_195(iParam0))
	{
		return Global_262145.f_18495;
	}
	if (func_201(iParam0))
	{
		return Global_262145.f_18494;
	}
	switch (iParam0)
	{
		case 192:
			return Global_262145.f_18491;
		
		case 191:
			return Global_262145.f_18493;
		
		case 190:
			return Global_262145.f_18492;
		
		case 227:
			return Global_262145.f_21053;
		
		case 226:
			return Global_262145.f_21041;
		
		case 225:
			return Global_262145.f_21061;
		
		case 230:
			return Global_262145.f_22316;
		
		case 229:
			return Global_262145.f_22220;
		
		case 233:
			return Global_262145.f_22792;
		
		case 237:
			return Global_262145.f_23955;
		
		case 238:
			return Global_262145.f_24066;
		
		case 249:
			return Global_262145.f_24082;
		
		case 243:
			return Global_262145.f_26374;
		
		default:
	}
	return -1;
}

int func_282(int iParam0)
{
	switch (iParam0)
	{
		case 148:
			return Global_262145.f_12494;
		
		case 152:
			return Global_262145.f_12529;
		
		case 151:
			return 0;
		
		case 142:
			return Global_262145.f_12517;
		
		case 157:
			return Global_262145.f_12484;
		
		case 159:
			return Global_262145.f_12467;
		
		case 164:
			return Global_262145.f_12507;
		
		case 160:
			return Global_262145.f_12557;
		
		case 162:
			return Global_262145.f_12577;
		
		case 163:
			return Global_262145.f_12542;
		
		case 154:
			return Global_262145.f_12612;
		
		case 155:
			return Global_262145.f_12602;
		
		case 153:
			return Global_262145.f_12566;
		
		case 170:
			return Global_262145.f_15003;
		
		case 171:
			return Global_262145.f_15062;
		
		case 172:
			return Global_262145.f_15080;
		
		case 173:
			return Global_262145.f_15021;
		
		case 166:
			return Global_262145.f_15036;
		
		case 167:
			return Global_262145.f_15127;
		
		case 169:
			return Global_262145.f_15099;
		
		case 168:
			return Global_262145.f_15092;
		
		case 179:
			return Global_262145.f_18374;
		
		case 180:
			return Global_262145.f_18152;
		
		case 182:
			return Global_262145.f_18152;
		
		case 183:
			return Global_262145.f_18152;
		
		case 185:
			return Global_262145.f_18152;
		
		case 186:
			return Global_262145.f_18152;
		
		case 189:
			return Global_262145.f_18374;
		
		case 190:
			return Global_262145.f_18028;
		
		case 191:
			return Global_262145.f_18119;
		
		case 192:
			return Global_262145.f_17913;
		
		case 193:
			return Global_262145.f_18374;
		
		case 194:
			return Global_262145.f_18374;
		
		case 195:
			return Global_262145.f_18152;
		
		case 197:
			return Global_262145.f_18152;
		
		case 198:
			return Global_262145.f_18152;
		
		case 199:
			return Global_262145.f_18374;
		
		case 200:
			return Global_262145.f_18374;
		
		case 201:
			return Global_262145.f_18374;
		
		case 205:
			return Global_262145.f_18374;
		
		case 207:
			return Global_262145.f_18152;
		
		case 208:
			return Global_262145.f_18152;
		
		case 209:
			return Global_262145.f_18152;
		
		case 210:
			return Global_262145.f_18374;
		
		case 211:
			return Global_262145.f_18374;
		
		case 214:
			return Global_262145.f_19224;
		
		case 215:
			return Global_262145.f_19226;
		
		case 216:
			return Global_262145.f_19228;
		
		case 217:
			return Global_262145.f_19230;
		
		case 218:
			return Global_262145.f_19232;
		
		case 219:
			return Global_262145.f_19234;
		
		case 220:
			return Global_262145.f_19236;
		
		case 221:
			return Global_262145.f_19238;
		
		case 225:
			if (!func_176())
			{
				return Global_262145.f_21063;
			}
			break;
		
		case 226:
			if (!func_176())
			{
				return Global_262145.f_21043;
			}
			break;
		
		case 227:
			if (!func_176())
			{
				return Global_262145.f_21055;
			}
			break;
		
		case 229:
			if (!func_176())
			{
				return Global_262145.f_22222;
			}
			break;
		
		case 230:
			if (!func_176())
			{
				return Global_262145.f_22318;
			}
			break;
		
		case 233:
			if (!func_176())
			{
				return Global_262145.f_22791;
			}
			break;
		
		case 241:
			return 100;
		
		case 242:
			return 100;
		
		case 244:
			return 100;
		
		case 248:
			return 100;
		
		case 239:
			return 100;
		
		case 240:
			return 100;
		
		case 250:
			return 100;
		
		case 237:
			if (!func_176())
			{
				return Global_262145.f_23957;
			}
			break;
		
		case 238:
			if (!func_176())
			{
				return Global_262145.f_24068;
			}
			break;
		
		case 249:
			if (!func_176())
			{
				return Global_262145.f_24084;
			}
			break;
		
		case 243:
			if (!func_176())
			{
				return Global_262145.f_26377;
			}
			break;
		
		case 158:
			if (!func_176())
			{
				return 100;
			}
			break;
	}
	return 0;
}

int func_283(int iParam0)
{
	switch (iParam0)
	{
		case 148:
			return Global_262145.f_12493;
		
		case 152:
			return Global_262145.f_12528;
		
		case 151:
			return 0;
		
		case 142:
			return Global_262145.f_12516;
		
		case 157:
			return Global_262145.f_12483;
		
		case 159:
			return Global_262145.f_12466;
		
		case 164:
			return Global_262145.f_12506;
		
		case 160:
			return Global_262145.f_12556;
		
		case 162:
			return Global_262145.f_12576;
		
		case 163:
			return Global_262145.f_12541;
		
		case 154:
			return Global_262145.f_12611;
		
		case 155:
			return Global_262145.f_12601;
		
		case 153:
			return Global_262145.f_12565;
		
		case 170:
			return Global_262145.f_15002;
		
		case 171:
			return Global_262145.f_15061;
		
		case 172:
			return Global_262145.f_15079;
		
		case 173:
			return Global_262145.f_15020;
		
		case 166:
			return Global_262145.f_15035;
		
		case 179:
			return Global_262145.f_18373;
		
		case 180:
			return Global_262145.f_18151;
		
		case 182:
			return Global_262145.f_18151;
		
		case 183:
			return Global_262145.f_18151;
		
		case 185:
			return Global_262145.f_18151;
		
		case 186:
			return Global_262145.f_18151;
		
		case 189:
			return Global_262145.f_18373;
		
		case 193:
			return Global_262145.f_18373;
		
		case 194:
			return Global_262145.f_18373;
		
		case 195:
			return Global_262145.f_18151;
		
		case 197:
			return Global_262145.f_18151;
		
		case 198:
			return Global_262145.f_18151;
		
		case 199:
			return Global_262145.f_18373;
		
		case 200:
			return Global_262145.f_18373;
		
		case 201:
			return Global_262145.f_18373;
		
		case 205:
			return Global_262145.f_18373;
		
		case 207:
			return Global_262145.f_18151;
		
		case 208:
			return Global_262145.f_18151;
		
		case 209:
			return Global_262145.f_18151;
		
		case 210:
			return Global_262145.f_18373;
		
		case 211:
			return Global_262145.f_18373;
		
		case 190:
			if (func_127(0))
			{
				return Global_262145.f_18027;
			}
			else
			{
				return 0;
			}
			break;
		
		case 191:
			if (func_127(0))
			{
				return Global_262145.f_18118;
			}
			else
			{
				return 0;
			}
			break;
		
		case 192:
			if (func_127(0))
			{
				return Global_262145.f_17912;
			}
			else
			{
				return 0;
			}
			break;
		
		case 214:
			return Global_262145.f_19223;
		
		case 215:
			return Global_262145.f_19225;
		
		case 216:
			return Global_262145.f_19227;
		
		case 217:
			return Global_262145.f_19229;
		
		case 218:
			return Global_262145.f_19231;
		
		case 219:
			return Global_262145.f_19233;
		
		case 220:
			return Global_262145.f_19235;
		
		case 221:
			return Global_262145.f_19237;
		
		case 225:
			if (func_127(0))
			{
				return Global_262145.f_21062;
			}
			break;
		
		case 226:
			if (func_127(0))
			{
				return Global_262145.f_21042;
			}
			break;
		
		case 227:
			if (func_127(0))
			{
				return Global_262145.f_21054;
			}
			break;
		
		case 229:
			if (func_127(0))
			{
				return Global_262145.f_22221;
			}
			break;
		
		case 230:
			if (func_127(0))
			{
				return Global_262145.f_22317;
			}
			break;
		
		case 233:
			if (func_127(0))
			{
				return Global_262145.f_22793;
			}
			break;
		
		case 241:
			return 500;
		
		case 242:
			return 500;
		
		case 244:
			return 500;
		
		case 248:
			return 500;
		
		case 239:
			return 500;
		
		case 240:
			return 500;
		
		case 250:
			return 500;
		
		case 237:
			if (func_127(0))
			{
				return Global_262145.f_23956;
			}
			break;
		
		case 238:
			if (func_127(0))
			{
				return Global_262145.f_24067;
			}
			break;
		
		case 249:
			if (func_127(0))
			{
				return Global_262145.f_24083;
			}
			break;
		
		case 243:
			return Global_262145.f_26373;
		
		case 158:
			if (func_127(0))
			{
				return 500;
			}
			break;
	}
	return 0;
}

bool func_284(int iParam0)
{
	return unk_0xCE990E643CD9D0E5(Global_2540384.f_5188.f_45, iParam0);
}

void func_285(int iParam0, var uParam1, int iParam2, var uParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	var uVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	float fVar12;
	float fVar13;
	float fVar14;
	float fVar15;
	float fVar16;
	int iVar17;
	bool bVar18;
	bool bVar19;
	int iVar20;
	int iVar21;
	int iVar22;
	int iVar23;
	
	bVar18 = func_127(1);
	bVar19 = false;
	if (iParam0 == 237)
	{
		if (func_176())
		{
			iVar17 = unk_0x460153A63B9477BC();
		}
		else
		{
			iVar17 = func_177();
		}
		iVar11 = iVar17;
		if (iVar11 != -1)
		{
			iVar0 = Global_1590682[iVar11 /*883*/].f_861.f_1;
			if (uParam1->f_10 == uParam1->f_11)
			{
				iVar1 = iVar0;
				bVar19 = true;
			}
			else
			{
				fVar12 = to_float(uParam1->f_10);
				fVar13 = to_float(uParam1->f_11);
				fVar14 = ((fVar12 / fVar13) * 100f);
				fVar15 = ((IntToFloat(iVar0) / 100f) * fVar14);
				iVar1 = ceil(fVar15);
			}
			*uParam3 = iVar1;
			if (bVar19)
			{
				iVar2 = Global_1590682[iVar11 /*883*/].f_861.f_2;
			}
			else
			{
				iVar2 = func_301(Global_1590682[iVar11 /*883*/].f_861, *uParam3);
			}
			if (uParam1->f_17)
			{
				iVar20 = (iVar2 - ceil((IntToFloat(iVar2) * 0.9f)));
				if (iVar20 > 100000)
				{
					iVar20 = 100000;
				}
				iVar2 = (iVar2 - iVar20);
			}
			*iParam2 = (*iParam2 + iVar2);
			iVar10 = func_300(*iParam2);
			if (iVar10 > 0)
			{
				if (iVar17 == unk_0x460153A63B9477BC())
				{
					func_299("TICK_TCUT", iVar10);
				}
				*iParam2 = (*iParam2 - iVar10);
			}
			Global_1676443.f_49 = *uParam3;
			if (iVar17 == unk_0x460153A63B9477BC())
			{
				if (iVar2 > 0)
				{
					func_298(iVar2);
				}
				if (*uParam3 > 0)
				{
					func_296(*uParam3);
				}
				iVar6 = func_295(&uVar5);
				iVar7 = Global_262145.f_23986;
				if (iVar6 > iVar7)
				{
					iVar6 = iVar7;
				}
				iVar9 = ceil((IntToFloat(iVar6) * Global_262145.f_23985));
				iVar8 = ((*iParam2 / 100) * iVar9);
				*iParam2 = (*iParam2 + iVar8);
				if (*iParam2 > 0)
				{
					if (iVar6 > 0)
					{
						func_100(140);
					}
				}
				if (*iParam2 > 0)
				{
					if (!bVar18)
					{
						iVar21 = 0;
						while (iVar21 < unk_0xEFA28384DDD283E1())
						{
							iVar22 = iVar21;
							if (unk_0xBD09DF93F957A0CF(iVar22))
							{
								iVar23 = unk_0x9019589211A13B02(iVar22);
								if (func_294(iVar23))
								{
									func_286(iVar23, 1, 198210293);
								}
							}
							iVar21++;
						}
					}
				}
				Global_2540384.f_5188.f_382 = *iParam2;
			}
			else if (bVar18)
			{
				fVar16 = Global_262145.f_23958;
				iVar3 = ceil((IntToFloat(*iParam2) * fVar16));
				*iParam2 = iVar3;
				iVar4 = Global_262145.f_23959;
				if (*iParam2 > iVar4)
				{
					*iParam2 = iVar4;
				}
				if (*iParam2 > 0)
				{
					Global_1688746 = *iParam2;
					func_100(121);
				}
			}
			else
			{
				*iParam2 = 0;
			}
		}
	}
}

void func_286(int iParam0, int iParam1, int iParam2)
{
	var uVar0;
	
	uVar0 = func_288(iParam0);
	func_287(iParam0, uVar0, iParam1, iParam2);
}

void func_287(int iParam0, var uParam1, var uParam2, var uParam3)
{
	struct<8> Var0;
	
	Var0 = -2029779863;
	Var0.f_1 = unk_0x460153A63B9477BC();
	Var0.f_2 = uParam1;
	Var0.f_4 = uParam2;
	Var0.f_3 = uParam3;
	Var0.f_5 = func_165(iParam0);
	func_164(&(Var0.f_6), &(Var0.f_7));
	if (iParam0 != func_40())
	{
		if (unk_0x166E920FB00B2DBB(iParam0))
		{
			unk_0xB802750B43D4047C(1, &Var0, 8, func_163(iParam0));
		}
	}
}

int func_288(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_293();
	iVar0 = func_291(iParam0, iVar0);
	iVar1 = Global_1630317[func_177() /*595*/].f_11.f_422;
	iVar0 = (iVar0 + (iVar1 * Global_262145.f_14963));
	if (iVar0 < func_290())
	{
		iVar0 = func_290();
	}
	if (iVar0 > func_289())
	{
		iVar0 = func_289();
	}
	return iVar0;
}

int func_289()
{
	return Global_262145.f_14964;
}

int func_290()
{
	return Global_262145.f_16139;
}

int func_291(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = (func_351(iParam0) * func_292());
	iParam1 = (iParam1 - iVar0);
	return iParam1;
}

int func_292()
{
	return Global_262145.f_16138;
}

var func_293()
{
	return Global_262145.f_12389;
}

int func_294(int iParam0)
{
	if (unk_0x166E920FB00B2DBB(iParam0))
	{
		if (iParam0 != unk_0x460153A63B9477BC())
		{
			if (func_179(iParam0, unk_0x460153A63B9477BC(), 0))
			{
				if (!func_135(iParam0, 26))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_295(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = 0;
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (unk_0x166E920FB00B2DBB(unk_0xF1110FE23C67293A(iVar0)))
		{
			iVar2 = unk_0xF1110FE23C67293A(iVar0);
			if (!func_96(iVar2, 0) && !func_179(iVar2, unk_0x460153A63B9477BC(), 1))
			{
				iVar1++;
			}
			else if (func_96(iVar2, 0))
			{
				*uParam0++;
			}
		}
		iVar0++;
	}
	return iVar1;
}

void func_296(int iParam0)
{
	func_297(iParam0, 7237);
}

void func_297(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam0 <= 0)
	{
		return;
	}
	iVar0 = func_200(iParam1, -1, 0);
	func_198(iParam1, (iVar0 + iParam0), -1, 1, 0);
}

void func_298(int iParam0)
{
	func_297(iParam0, 7232);
}

int func_299(char* sParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = -1;
	unk_0x5B8DD855EAFD33B5(sParam0);
	unk_0x42710E9E08FA375A(iParam1);
	iVar0 = unk_0xD60C2975A14D763D(0, 1);
	func_167(3, sParam0, 1, "", iParam1, 0, 0, 0, 1, 0, 0, 0);
	return iVar0;
}

int func_300(int iParam0)
{
	float fVar0;
	float fVar1;
	
	fVar0 = to_float(iParam0);
	fVar1 = (fVar0 * Global_262145.f_23987);
	if (fVar1 > 100000f)
	{
		fVar1 = 100000f;
	}
	return round(fVar1);
}

int func_301(struct<5> Param0, int iParam1)
{
	int iVar0;
	float fVar1;
	float fVar2;
	
	if (iParam1 == Param0.f_1)
	{
		return Param0.f_2;
	}
	iVar0 = Param0.f_2;
	if ((Param0.f_4 == 1 || Param0.f_4 == 2) || Param0.f_4 == 3)
	{
		iVar0 = (iVar0 - Param0.f_3);
	}
	fVar1 = (to_float(iParam1) / to_float(Param0.f_1));
	fVar2 = to_float(iVar0);
	return floor((fVar2 * fVar1));
}

void func_302(int iParam0, var uParam1, int iParam2, var uParam3, var uParam4)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	var uVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	float fVar10;
	float fVar11;
	float fVar12;
	float fVar13;
	float fVar14;
	int iVar15;
	bool bVar16;
	bool bVar17;
	int iVar18;
	int iVar19;
	int iVar20;
	
	*uParam4 = 0;
	bVar16 = func_127(1);
	bVar17 = false;
	if (iParam0 == 229)
	{
	}
	else if (iParam0 == 230)
	{
		if (func_176())
		{
			iVar15 = unk_0x460153A63B9477BC();
		}
		else
		{
			iVar15 = func_177();
		}
		if (iVar15 != -1)
		{
			iVar0 = (uParam1->f_15 + uParam1->f_8);
			if (uParam1->f_10 == uParam1->f_11)
			{
				iVar1 = iVar0;
				bVar17 = true;
			}
			else
			{
				fVar10 = to_float(uParam1->f_10);
				fVar11 = to_float(uParam1->f_11);
				fVar12 = ((fVar10 / fVar11) * 100f);
				fVar13 = ((IntToFloat(iVar0) / 100f) * fVar12);
				iVar1 = ceil(fVar13);
			}
			*uParam3 = iVar1;
			iVar2 = func_211(uParam1->f_16, *uParam3);
			*iParam2 = (*iParam2 + iVar2);
			if (bVar17)
			{
				iVar9 = func_210(uParam1->f_16, *uParam3);
				if (iVar9 > 0)
				{
					*iParam2 = (*iParam2 + iVar9);
				}
			}
			if (func_304(*iParam2) > 0)
			{
				if (iVar15 == unk_0x460153A63B9477BC())
				{
					func_299("SMTICK_RONCUT", func_304(*iParam2));
				}
				*iParam2 = (*iParam2 - func_304(*iParam2));
			}
			if (iVar15 == unk_0x460153A63B9477BC())
			{
				func_303(iVar2, iVar9);
				iVar6 = func_295(&uVar5);
				iVar7 = Global_262145.f_22335;
				if (iVar6 > iVar7)
				{
					iVar6 = iVar7;
				}
				iVar8 = ceil((IntToFloat(iVar6) * Global_262145.f_22334));
				*uParam4 = ((*iParam2 / 100) * iVar8);
				*iParam2 = (*iParam2 + *uParam4);
				if (*iParam2 > 0)
				{
					if (iVar6 > 0)
					{
						func_100(44);
					}
				}
				if (*iParam2 > 0)
				{
					if (!bVar16)
					{
						iVar18 = 0;
						while (iVar18 < unk_0xEFA28384DDD283E1())
						{
							iVar19 = iVar18;
							if (unk_0xBD09DF93F957A0CF(iVar19))
							{
								iVar20 = unk_0x9019589211A13B02(iVar19);
								if (func_294(iVar20))
								{
									func_286(iVar20, 1, 1160415507);
								}
							}
							iVar18++;
						}
					}
				}
				Global_2540384.f_5188.f_382 = *iParam2;
			}
			else if (bVar16)
			{
				fVar14 = Global_262145.f_22268;
				iVar3 = ceil((IntToFloat(*iParam2) * fVar14));
				*iParam2 = iVar3;
				iVar4 = Global_262145.f_22269;
				if (*iParam2 > iVar4)
				{
					*iParam2 = iVar4;
				}
				if (*iParam2 > 0)
				{
					Global_1688746 = *iParam2;
					func_100(121);
				}
			}
			else
			{
				*iParam2 = 0;
			}
		}
	}
}

void func_303(int iParam0, int iParam1)
{
	if (iParam0 > 0)
	{
		func_297(iParam0, 6117);
	}
	if (iParam1 > 0)
	{
		func_297(iParam1, 6118);
	}
}

int func_304(int iParam0)
{
	float fVar0;
	float fVar1;
	
	fVar0 = to_float(iParam0);
	fVar1 = (fVar0 * Global_262145.f_22302);
	if (fVar1 > to_float(Global_262145.f_22303))
	{
		fVar1 = to_float(Global_262145.f_22303);
	}
	return round(fVar1);
}

void func_305(int iParam0, var uParam1, int iParam2, var uParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	var uVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	float fVar10;
	float fVar11;
	float fVar12;
	float fVar13;
	float fVar14;
	int iVar15;
	int iVar16;
	bool bVar17;
	int iVar18;
	int iVar19;
	int iVar20;
	
	bVar17 = func_127(1);
	if (iParam0 == 225)
	{
	}
	else if (iParam0 == 226)
	{
		if (func_176())
		{
			iVar15 = unk_0x460153A63B9477BC();
		}
		else
		{
			iVar15 = func_177();
		}
		if (iVar15 != -1)
		{
			iVar16 = func_214(iVar15);
			iVar0 = (func_329(iVar15, iVar16) + uParam1->f_8);
			if (uParam1->f_10 == uParam1->f_11)
			{
				iVar1 = iVar0;
			}
			else
			{
				fVar10 = to_float(uParam1->f_10);
				fVar11 = to_float(uParam1->f_11);
				fVar12 = ((fVar10 / fVar11) * 100f);
				fVar13 = ((IntToFloat(iVar0) / 100f) * fVar12);
				iVar1 = ceil(fVar13);
			}
			*uParam3 = iVar1;
			iVar2 = func_325(iVar15, iVar16, iVar1);
			if (uParam1->f_14 == 0)
			{
				iVar2 = ceil((IntToFloat(iVar2) * Global_262145.f_21045));
			}
			else
			{
				iVar2 = ceil((IntToFloat(iVar2) * Global_262145.f_21044));
			}
			*iParam2 = (*iParam2 + iVar2);
			if (iVar15 == unk_0x460153A63B9477BC())
			{
				func_319(iVar16, iVar2);
				if (func_315(iVar16) >= Global_262145.f_20591 || iVar2 >= Global_262145.f_20591)
				{
					func_306(5);
				}
				iVar6 = func_295(&uVar5);
				iVar7 = round(Global_262145.f_21047);
				if (iVar6 > iVar7)
				{
					iVar6 = iVar7;
				}
				iVar8 = ceil((IntToFloat(iVar6) * Global_262145.f_21046));
				iVar9 = ((*iParam2 / 100) * iVar8);
				*iParam2 = (*iParam2 + iVar9);
				if (*iParam2 > 0)
				{
					if (iVar6 > 0)
					{
						func_100(108);
					}
					else
					{
						func_100(110);
					}
				}
				if (*iParam2 > 0)
				{
					if (!bVar17)
					{
						iVar18 = 0;
						while (iVar18 < unk_0xEFA28384DDD283E1())
						{
							iVar19 = iVar18;
							if (unk_0xBD09DF93F957A0CF(iVar19))
							{
								iVar20 = unk_0x9019589211A13B02(iVar19);
								if (func_294(iVar20))
								{
									func_286(iVar20, 1, -1905128202);
								}
							}
							iVar18++;
						}
					}
				}
				Global_2540384.f_5188.f_382 = *iParam2;
			}
			else if (bVar17)
			{
				fVar14 = Global_262145.f_21048;
				iVar3 = ceil((IntToFloat(*iParam2) * fVar14));
				*iParam2 = iVar3;
				iVar4 = Global_262145.f_21049;
				if (*iParam2 > iVar4)
				{
					*iParam2 = iVar4;
				}
				if (*iParam2 > 0)
				{
					Global_1688746 = *iParam2;
					func_100(112);
				}
			}
			else
			{
				*iParam2 = 0;
			}
		}
	}
	else if (iParam0 == 227)
	{
	}
}

void func_306(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			if (Global_262145.f_20579)
			{
				if (func_308(Global_262145.f_20580))
				{
					func_307("CLOTHAWDSTRAP2", "CLOTHAWDDESC1", 0, 0, 0);
				}
			}
			break;
		
		case 1:
			if (Global_262145.f_20581)
			{
				if (func_308(Global_262145.f_20582))
				{
					func_307("CLOTHAWDSTRAP2", "CLOTHAWDDESC2", 0, 0, 0);
				}
			}
			break;
		
		case 2:
			if (Global_262145.f_20583)
			{
				if (func_308(Global_262145.f_20584))
				{
					func_307("CLOTHAWDSTRAP2", "CLOTHAWDDESC3", 0, 0, 0);
				}
			}
			break;
		
		case 3:
			if (Global_262145.f_20585)
			{
				if (func_308(Global_262145.f_20586))
				{
					func_307("CLOTHAWDSTRAP2", "CLOTHAWDDESC5", 0, 0, 0);
				}
			}
			break;
		
		case 4:
			if (Global_262145.f_20587)
			{
				if (func_308(Global_262145.f_20588))
				{
					func_307("CLOTHAWDSTRAP2", "CLOTHAWDDESC6", 0, 0, 0);
				}
			}
			break;
		
		case 5:
			if (Global_262145.f_20589)
			{
				if (func_308(Global_262145.f_20590))
				{
					func_299("CLOTHAWDSTRAP3", Global_262145.f_20591);
				}
			}
			break;
		
		case 6:
			if (Global_262145.f_20592)
			{
				if (func_308(Global_262145.f_20593))
				{
					func_299("CLOTHAWDSTRAP5", Global_262145.f_20727);
				}
			}
			break;
		
		case 7:
			if (Global_262145.f_20595)
			{
				if (func_308(Global_262145.f_20596))
				{
					func_307("CLOTHAWDSTRAP2", "CLOTHAWDDESC8", 0, 0, 0);
				}
			}
			break;
		
		case 8:
			if (Global_262145.f_20597)
			{
				if (func_308(Global_262145.f_20598))
				{
					func_307("CLOTHAWDSTRAP2", "CLOTHAWDDESC9", 0, 0, 0);
				}
			}
			break;
		
		case 9:
			if (Global_262145.f_20599)
			{
				if (func_308(Global_262145.f_20600))
				{
					func_307("CLOTHAWDSTRAP2", "CLOTHAWDDESC10", 0, 0, 0);
				}
			}
			break;
		
		case 10:
			if (Global_262145.f_20601)
			{
				if (func_308(Global_262145.f_20602))
				{
					func_307("CLOTHAWDSTRAP2", "CLOTHAWDDESC11", 0, 0, 0);
				}
			}
			break;
		
		case 11:
			if (Global_262145.f_20603)
			{
				if (func_308(Global_262145.f_20604))
				{
					func_307("CLOTHAWDSTRAP2", "CLOTHAWDDESC12", 0, 0, 0);
				}
			}
			break;
		
		case 12:
			if (Global_262145.f_20605)
			{
				if (func_308(Global_262145.f_20606))
				{
					func_307("CLOTHAWDSTRAP2", "CLOTHAWDDESC13", 0, 0, 0);
				}
			}
			break;
		
		case 13:
			if (Global_262145.f_20607)
			{
				if (func_308(Global_262145.f_20608))
				{
					func_307("CLOTHAWDSTRAP2", "CLOTHAWDDESC14", 0, 0, 0);
				}
			}
			break;
		
		case 14:
			if (Global_262145.f_20609)
			{
				if (func_308(Global_262145.f_20610))
				{
					func_307("CLOTHAWDSTRAP2", "CLOTHAWDDESC15", 0, 0, 0);
				}
			}
			break;
	}
}

int func_307(char* sParam0, char* sParam1, int iParam2, int iParam3, bool bParam4)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = -1;
	unk_0x5B8DD855EAFD33B5(sParam0);
	if (!iParam2 == 0)
	{
		unk_0x7006FC1051C85FCA(iParam2);
	}
	if (!iParam3 == 0)
	{
		unk_0x7006FC1051C85FCA(iParam3);
	}
	unk_0x6A826E35A3096ED0(sParam1);
	if (!bParam4)
	{
		iVar0 = unk_0xD60C2975A14D763D(0, 1);
	}
	else
	{
		Global_2515173 = { func_253(unk_0x460153A63B9477BC()) };
		if (unk_0x192BD21E18525C69(&Global_2515103, 35, &Global_2515173))
		{
			iVar1 = 0;
			if (unk_0xF005CCA4263DF67F(&(Global_2515103.f_22), "Leader") && Global_2515103.f_30 == 0)
			{
				iVar1 = 1;
			}
			if (Global_2515103.f_21 > 0)
			{
				iVar2 = 0;
			}
			else
			{
				iVar2 = 1;
			}
			iVar0 = unk_0x2262CFE2DD056505(iVar2, unk_0xCF44EDAC07B5D763(&Global_2515103, 35), &(Global_2515103.f_17), Global_2515103.f_30, iVar1, 0, Global_2515103, unk_0x72C1D3A1AB8CAA5B(unk_0x460153A63B9477BC()), Global_1314053, Global_1314054, Global_1314055);
		}
		else
		{
			iVar0 = unk_0xD60C2975A14D763D(0, 1);
		}
	}
	func_167(8, sParam0, 1, sParam1, 0, 0, 0, 0, 1, 0, 0, 0);
	return iVar0;
}

int func_308(int iParam0)
{
	switch (iParam0)
	{
		case joaat("DLC_MP_GR_M_JBIB_19_0"):
		case joaat("DLC_MP_GR_F_JBIB_25_0"):
		case -1191485992:
		case joaat("CLO_GRF_U_25_0"):
			if (!func_312(15417, -1, -1))
			{
				func_311(15417, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("DLC_MP_GR_M_JBIB_19_1"):
		case joaat("DLC_MP_GR_F_JBIB_25_1"):
		case -1407302654:
		case joaat("CLO_GRF_U_25_1"):
			if (!func_312(15418, -1, -1))
			{
				func_311(15418, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("DLC_MP_GR_M_JBIB_20_0"):
		case joaat("DLC_MP_GR_F_JBIB_26_0"):
		case joaat("CLO_GRM_U_20_0"):
		case -1850642937:
			if (!func_312(15425, -1, -1))
			{
				func_311(15425, 1, -1, 1);
				return 1;
			}
			break;
	}
	switch (iParam0)
	{
		case joaat("DLC_MP_GR_M_DECL_5_0"):
		case joaat("DLC_MP_GR_F_DECL_5_0"):
		case -1307315235:
		case joaat("CLO_GRF_DECL_19"):
			if (!func_312(15405, -1, -1))
			{
				func_311(15405, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("DLC_MP_GR_M_DECL_5_1"):
		case joaat("DLC_MP_GR_F_DECL_5_1"):
		case joaat("CLO_GRM_DECL_20"):
		case 1374601256:
			if (!func_312(15393, -1, -1))
			{
				func_311(15393, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("DLC_MP_GR_M_DECL_5_2"):
		case joaat("DLC_MP_GR_F_DECL_5_2"):
		case joaat("CLO_GRM_DECL_21"):
		case -660288110:
			if (!func_312(15409, -1, -1))
			{
				func_311(15409, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("DLC_MP_GR_M_DECL_5_3"):
		case joaat("DLC_MP_GR_F_DECL_5_3"):
		case -1005186539:
		case joaat("CLO_GRF_DECL_22"):
			if (!func_312(15396, -1, -1))
			{
				func_311(15396, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("DLC_MP_GR_M_DECL_5_4"):
		case joaat("DLC_MP_GR_F_DECL_5_4"):
		case joaat("CLO_GRM_DECL_23"):
		case -1132522169:
			if (!func_312(15412, -1, -1))
			{
				func_311(15412, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("DLC_MP_GR_M_DECL_5_5"):
		case joaat("DLC_MP_GR_F_DECL_5_5"):
		case 1110085176:
		case joaat("CLO_GRF_DECL_24"):
			if (!func_152(209, -1))
			{
				func_309(209, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("DLC_MP_GR_M_DECL_5_6"):
		case joaat("DLC_MP_GR_F_DECL_5_6"):
		case joaat("CLO_GRM_DECL_25"):
		case -182614393:
			if (!func_312(15403, -1, -1))
			{
				func_311(15403, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("DLC_MP_GR_M_DECL_5_7"):
		case joaat("DLC_MP_GR_F_DECL_5_7"):
		case -1496983695:
		case joaat("CLO_GRF_DECL_26"):
			if (!func_152(209, -1))
			{
				func_309(209, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("DLC_MP_GR_M_DECL_5_8"):
		case joaat("DLC_MP_GR_F_DECL_5_8"):
		case joaat("CLO_GRM_DECL_27"):
		case -646852824:
			if (!func_312(15389, -1, -1))
			{
				func_311(15389, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("DLC_MP_GR_M_DECL_5_9"):
		case joaat("DLC_MP_GR_F_DECL_5_9"):
		case 420690954:
		case joaat("CLO_GRF_DECL_28"):
			if (!func_152(209, -1))
			{
				func_309(209, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("DLC_MP_GR_M_DECL_5_10"):
		case joaat("DLC_MP_GR_F_DECL_5_10"):
		case joaat("CLO_GRM_DECL_29"):
		case 1717168382:
			if (!func_312(15398, -1, -1))
			{
				func_311(15398, 1, -1, 1);
				return 1;
			}
			break;
	}
	switch (iParam0)
	{
		case joaat("DLC_MP_GR_M_PHEAD_6_0"):
		case joaat("DLC_MP_GR_F_PHEAD_6_0"):
		case joaat("DLC_MP_GR_M_PHEAD_7_0"):
		case joaat("DLC_MP_GR_F_PHEAD_7_0"):
		case -1991379993:
		case joaat("CLO_GRF_PH_6_0"):
			if (!func_312(15400, -1, -1))
			{
				func_311(15400, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("DLC_MP_GR_M_PHEAD_6_1"):
		case joaat("DLC_MP_GR_F_PHEAD_6_1"):
		case joaat("DLC_MP_GR_M_PHEAD_7_1"):
		case joaat("DLC_MP_GR_F_PHEAD_7_1"):
		case 2065127290:
		case joaat("CLO_GRF_PH_6_1"):
			if (!func_152(209, -1))
			{
				func_309(209, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("DLC_MP_GR_M_PHEAD_6_2"):
		case joaat("DLC_MP_GR_F_PHEAD_6_2"):
		case joaat("DLC_MP_GR_M_PHEAD_7_2"):
		case joaat("DLC_MP_GR_F_PHEAD_7_2"):
		case -56403312:
		case joaat("CLO_GRF_PH_6_2"):
			if (!func_312(15408, -1, -1))
			{
				func_311(15408, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("DLC_MP_GR_M_PHEAD_6_3"):
		case joaat("DLC_MP_GR_F_PHEAD_6_3"):
		case joaat("DLC_MP_GR_M_PHEAD_7_3"):
		case joaat("DLC_MP_GR_F_PHEAD_7_3"):
		case -292700571:
		case joaat("CLO_GRF_PH_6_3"):
			if (!func_152(209, -1))
			{
				func_309(209, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("DLC_MP_GR_M_PHEAD_6_4"):
		case joaat("DLC_MP_GR_F_PHEAD_6_4"):
		case joaat("DLC_MP_GR_M_PHEAD_7_4"):
		case joaat("DLC_MP_GR_F_PHEAD_7_4"):
		case -648899601:
		case joaat("CLO_GRF_PH_6_4"):
			if (!func_312(15411, -1, -1))
			{
				func_311(15411, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("DLC_MP_GR_M_PHEAD_6_5"):
		case joaat("DLC_MP_GR_F_PHEAD_6_5"):
		case joaat("DLC_MP_GR_M_PHEAD_7_5"):
		case joaat("DLC_MP_GR_F_PHEAD_7_5"):
		case -889194678:
		case joaat("CLO_GRF_PH_6_5"):
			if (!func_312(15397, -1, -1))
			{
				func_311(15397, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("DLC_MP_GR_M_PHEAD_6_6"):
		case joaat("DLC_MP_GR_F_PHEAD_6_6"):
		case joaat("DLC_MP_GR_M_PHEAD_7_6"):
		case joaat("DLC_MP_GR_F_PHEAD_7_6"):
		case 867092646:
		case joaat("CLO_GRF_PH_6_6"):
			if (!func_312(15413, -1, -1))
			{
				func_311(15413, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("DLC_MP_GR_M_PHEAD_6_7"):
		case joaat("DLC_MP_GR_F_PHEAD_6_7"):
		case joaat("DLC_MP_GR_M_PHEAD_7_7"):
		case joaat("DLC_MP_GR_F_PHEAD_7_7"):
		case 627387411:
		case joaat("CLO_GRF_PH_6_7"):
			if (!func_312(15391, -1, -1))
			{
				func_311(15391, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("DLC_MP_GR_M_PHEAD_6_8"):
		case joaat("DLC_MP_GR_F_PHEAD_6_8"):
		case joaat("DLC_MP_GR_M_PHEAD_7_8"):
		case joaat("DLC_MP_GR_F_PHEAD_7_8"):
		case joaat("CLO_GRM_PH_6_8"):
		case 1682427144:
			if (!func_312(15388, -1, -1))
			{
				func_311(15388, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("DLC_MP_GR_M_PHEAD_6_9"):
		case joaat("DLC_MP_GR_F_PHEAD_6_9"):
		case joaat("DLC_MP_GR_M_PHEAD_7_9"):
		case joaat("DLC_MP_GR_F_PHEAD_7_9"):
		case 35480964:
		case joaat("CLO_GRF_PH_6_9"):
			if (!func_152(209, -1))
			{
				func_309(209, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("DLC_MP_GR_M_PHEAD_6_10"):
		case joaat("DLC_MP_GR_F_PHEAD_6_10"):
		case joaat("DLC_MP_GR_M_PHEAD_7_10"):
		case joaat("DLC_MP_GR_F_PHEAD_7_10"):
		case joaat("CLO_GRM_PH_6_10"):
		case 1377465778:
			if (!func_312(15401, -1, -1))
			{
				func_311(15401, 1, -1, 1);
				return 1;
			}
			break;
	}
	switch (iParam0)
	{
		case joaat("MP_Gunrunning_Award_000_M"):
		case joaat("MP_Gunrunning_Award_000_F"):
		case -1604737223:
		case joaat("CLO_GRF_DECL_0"):
			if (!func_312(15394, -1, -1))
			{
				func_311(15394, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("MP_Gunrunning_Award_001_M"):
		case joaat("MP_Gunrunning_Award_001_F"):
		case -1367129204:
		case joaat("CLO_GRF_DECL_1"):
			if (!func_152(209, -1))
			{
				func_309(209, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("MP_Gunrunning_Award_002_M"):
		case joaat("MP_Gunrunning_Award_002_F"):
		case joaat("CLO_GRM_DECL_2"):
		case -1438775324:
			if (!func_312(15406, -1, -1))
			{
				func_311(15406, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("MP_Gunrunning_Award_003_M"):
		case joaat("MP_Gunrunning_Award_003_F"):
		case -1686659723:
		case joaat("CLO_GRF_DECL_3"):
			if (!func_312(15395, -1, -1))
			{
				func_311(15395, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("MP_Gunrunning_Award_004_M"):
		case joaat("MP_Gunrunning_Award_004_F"):
		case 1992217604:
		case joaat("CLO_GRF_DECL_4"):
			if (!func_152(209, -1))
			{
				func_309(209, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("MP_Gunrunning_Award_005_M"):
		case joaat("MP_Gunrunning_Award_005_F"):
		case -1934557208:
		case joaat("CLO_GRF_DECL_5"):
			if (!func_312(15410, -1, -1))
			{
				func_311(15410, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("MP_Gunrunning_Award_006_M"):
		case joaat("MP_Gunrunning_Award_006_F"):
		case -1034032319:
		case joaat("CLO_GRF_DECL_6"):
			if (!func_312(15407, -1, -1))
			{
				func_311(15407, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("MP_Gunrunning_Award_007_M"):
		case joaat("MP_Gunrunning_Award_007_F"):
		case 1747334867:
		case joaat("CLO_GRF_DECL_7"):
			if (!func_152(209, -1))
			{
				func_309(209, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("MP_Gunrunning_Award_008_M"):
		case joaat("MP_Gunrunning_Award_008_F"):
		case 236389050:
		case joaat("CLO_GRF_DECL_8"):
			if (!func_152(209, -1))
			{
				func_309(209, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("MP_Gunrunning_Award_009_M"):
		case joaat("MP_Gunrunning_Award_009_F"):
		case joaat("CLO_GRM_DECL_9"):
		case 908992470:
			if (!func_312(15414, -1, -1))
			{
				func_311(15414, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("MP_Gunrunning_Award_010_M"):
		case joaat("MP_Gunrunning_Award_010_F"):
		case joaat("CLO_GRM_DECL_10"):
		case -1021993708:
			if (!func_312(15415, -1, -1))
			{
				func_311(15415, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("MP_Gunrunning_Award_011_M"):
		case joaat("MP_Gunrunning_Award_011_F"):
		case 479676642:
		case joaat("CLO_GRF_DECL_11"):
			if (!func_312(15399, -1, -1))
			{
				func_311(15399, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("MP_Gunrunning_Award_012_M"):
		case joaat("MP_Gunrunning_Award_012_F"):
		case 242920617:
		case joaat("CLO_GRF_DECL_12"):
			if (!func_312(15404, -1, -1))
			{
				func_311(15404, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("MP_Gunrunning_Award_013_M"):
		case joaat("MP_Gunrunning_Award_013_F"):
		case -1219723702:
		case joaat("CLO_GRF_DECL_13"):
			if (!func_152(209, -1))
			{
				func_309(209, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("MP_Gunrunning_Award_014_M"):
		case joaat("MP_Gunrunning_Award_014_F"):
		case joaat("CLO_GRM_DECL_14"):
		case 2087194554:
			if (!func_312(15392, -1, -1))
			{
				func_311(15392, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("MP_Gunrunning_Award_015_M"):
		case joaat("MP_Gunrunning_Award_015_F"):
		case joaat("CLO_GRM_DECL_15"):
		case 981732339:
			if (!func_312(15390, -1, -1))
			{
				func_311(15390, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("MP_Gunrunning_Award_016_M"):
		case joaat("MP_Gunrunning_Award_016_F"):
		case joaat("CLO_GRM_DECL_16"):
		case 1271443068:
			if (!func_312(15402, -1, -1))
			{
				func_311(15402, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("MP_Gunrunning_Award_017_M"):
		case joaat("MP_Gunrunning_Award_017_F"):
		case joaat("CLO_GRM_DECL_17"):
		case -1785118184:
			if (!func_312(15416, -1, -1))
			{
				func_311(15416, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("MP_Gunrunning_Award_018_M"):
		case joaat("MP_Gunrunning_Award_018_F"):
		case 2029126042:
		case joaat("CLO_GRF_DECL_18"):
			if (!func_152(209, -1))
			{
				func_309(209, 1, -1, 1);
				return 1;
			}
			break;
	}
	switch (iParam0)
	{
		case joaat("MP_Gunrunning_Award_019_M"):
		case joaat("MP_Gunrunning_Award_025_F"):
		case -14316613:
		case joaat("CLO_GRF_DECL_30"):
			if (!func_312(15426, -1, -1))
			{
				func_311(15426, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("MP_Gunrunning_Award_020_M"):
		case joaat("MP_Gunrunning_Award_020_F"):
		case 1281631799:
		case joaat("CLO_GRF_DECL_31"):
			if (!func_312(15422, -1, -1))
			{
				func_311(15422, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("MP_Gunrunning_Award_020_M_ALT"):
		case joaat("MP_Gunrunning_Award_020_F_ALT"):
		case 447234752:
		case joaat("CLO_GRF_DECL_32"):
			if (!func_312(15423, -1, -1))
			{
				func_311(15423, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("MP_Gunrunning_Award_021_M"):
		case joaat("MP_Gunrunning_Award_021_F"):
		case 278933172:
		case joaat("CLO_GRF_DECL_33"):
			if (!func_312(15421, -1, -1))
			{
				func_311(15421, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("MP_Gunrunning_Award_022_M"):
		case joaat("MP_Gunrunning_Award_026_F"):
		case -562607521:
		case joaat("CLO_GRF_DECL_34"):
			if (!func_312(15427, -1, -1))
			{
				func_311(15427, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("MP_Gunrunning_Award_023_M"):
		case joaat("MP_Gunrunning_Award_023_F"):
		case 755492739:
		case joaat("CLO_GRF_DECL_35"):
			if (!func_312(15419, -1, -1))
			{
				func_311(15419, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("MP_Gunrunning_Award_024_M"):
		case joaat("MP_Gunrunning_Award_024_F"):
		case -85982412:
		case joaat("CLO_GRF_DECL_36"):
			if (!func_312(15420, -1, -1))
			{
				func_311(15420, 1, -1, 1);
				return 1;
			}
			break;
	}
	return 0;
}

void func_309(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	if (func_310())
	{
		iVar0 = Global_2587834[iParam0 /*3*/][func_153(iParam2)];
		if (iVar0 != 0)
		{
			unk_0xBD9D9E72ABB288E4(iVar0, iParam1, iParam3);
		}
	}
}

int func_310()
{
	return 1;
	return 0;
}

int func_311(int iParam0, bool bParam1, int iParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	int iVar12;
	int iVar13;
	int iVar14;
	int iVar15;
	int iVar16;
	int iVar17;
	int iVar18;
	int iVar19;
	int iVar20;
	int iVar21;
	int iVar22;
	int iVar23;
	int iVar24;
	int iVar25;
	
	if (iParam2 == -1)
	{
		iParam2 = func_98();
	}
	iVar0 = 0;
	if (iParam0 >= 0 && iParam0 < 192)
	{
		iVar2 = unk_0x43BE40E27DB6DC2E((iParam0 - 0), 0, 1, iParam2);
		iVar1 = ((iParam0 - 0) - unk_0x12730A13C85FC896((iParam0 - 0)) * 64);
		iVar0 = unk_0xC06DB57B81E2C02B(iVar2, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 192 && iParam0 < 384)
	{
		iVar3 = unk_0x43BE40E27DB6DC2E((iParam0 - 192), 1, 1, iParam2);
		iVar1 = ((iParam0 - 192) - unk_0x12730A13C85FC896((iParam0 - 192)) * 64);
		iVar0 = unk_0xC06DB57B81E2C02B(iVar3, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 513 && iParam0 < 705)
	{
		iVar4 = unk_0x43BE40E27DB6DC2E((iParam0 - 513), 0, 0, 0);
		iVar1 = ((iParam0 - 513) - unk_0x12730A13C85FC896((iParam0 - 513)) * 64);
		iVar0 = unk_0xC06DB57B81E2C02B(iVar4, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 705 && iParam0 < 1281)
	{
		iVar5 = unk_0x43BE40E27DB6DC2E((iParam0 - 705), 1, 0, 0);
		iVar1 = ((iParam0 - 705) - unk_0x12730A13C85FC896((iParam0 - 705)) * 64);
		iVar0 = unk_0xC06DB57B81E2C02B(iVar5, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 3111 && iParam0 < 3879)
	{
		iVar6 = unk_0x840F9A9E6D216561((iParam0 - 3111), 0, 1, iParam2);
		iVar1 = ((iParam0 - 3111) - unk_0x12730A13C85FC896((iParam0 - 3111)) * 64);
		iVar0 = unk_0xC06DB57B81E2C02B(iVar6, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 2919 && iParam0 < 3111)
	{
		iVar7 = unk_0x840F9A9E6D216561((iParam0 - 2919), 0, 0, 0);
		iVar1 = ((iParam0 - 2919) - unk_0x12730A13C85FC896((iParam0 - 2919)) * 64);
		iVar0 = unk_0xC06DB57B81E2C02B(iVar7, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 4207 && iParam0 < 4335)
	{
		iVar8 = unk_0x4B2E4855CB2B4FAA((iParam0 - 4207), 0, 1, iParam2, "_NGPSTAT_BOOL");
		iVar1 = ((iParam0 - 4207) - unk_0x12730A13C85FC896((iParam0 - 4207)) * 64);
		iVar0 = unk_0xC06DB57B81E2C02B(iVar8, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 4335 && iParam0 < 4399)
	{
		iVar9 = unk_0x4B2E4855CB2B4FAA((iParam0 - 4335), 0, 0, 0, "_NGPSTAT_BOOL");
		iVar1 = ((iParam0 - 4335) - unk_0x12730A13C85FC896((iParam0 - 4335)) * 64);
		iVar0 = unk_0xC06DB57B81E2C02B(iVar9, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 6029 && iParam0 < 6413)
	{
		iVar10 = unk_0x4B2E4855CB2B4FAA((iParam0 - 6029), 0, 1, iParam2, "_NGTATPSTAT_BOOL");
		iVar1 = ((iParam0 - 6029) - unk_0x12730A13C85FC896((iParam0 - 6029)) * 64);
		iVar0 = unk_0xC06DB57B81E2C02B(iVar10, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 7385 && iParam0 < 7641)
	{
		iVar11 = unk_0x4B2E4855CB2B4FAA((iParam0 - 7385), 0, 1, iParam2, "_NGDLCPSTAT_BOOL");
		iVar1 = ((iParam0 - 7385) - unk_0x12730A13C85FC896((iParam0 - 7385)) * 64);
		iVar0 = unk_0xC06DB57B81E2C02B(iVar11, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 7321 && iParam0 < 7385)
	{
		iVar12 = unk_0x4B2E4855CB2B4FAA((iParam0 - 7321), 0, 0, 0, "_NGDLCPSTAT_BOOL");
		iVar1 = ((iParam0 - 7321) - unk_0x12730A13C85FC896((iParam0 - 7321)) * 64);
		iVar0 = unk_0xC06DB57B81E2C02B(iVar12, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 9361 && iParam0 < 9553)
	{
		iVar13 = unk_0x4B2E4855CB2B4FAA((iParam0 - 9361), 0, 1, iParam2, "_DLCBIKEPSTAT_BOOL");
		iVar1 = ((iParam0 - 9361) - unk_0x12730A13C85FC896((iParam0 - 9361)) * 64);
		iVar0 = unk_0xC06DB57B81E2C02B(iVar13, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 15369 && iParam0 < 15561)
	{
		iVar14 = unk_0x4B2E4855CB2B4FAA((iParam0 - 15369), 0, 1, iParam2, "_DLCGUNPSTAT_BOOL");
		iVar1 = ((iParam0 - 15369) - unk_0x12730A13C85FC896((iParam0 - 15369)) * 64);
		iVar0 = unk_0xC06DB57B81E2C02B(iVar14, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 15562 && iParam0 < 15946)
	{
		iVar15 = unk_0x4B2E4855CB2B4FAA((iParam0 - 15562), 0, 1, iParam2, "_GUNTATPSTAT_BOOL");
		iVar1 = ((iParam0 - 15562) - unk_0x12730A13C85FC896((iParam0 - 15562)) * 64);
		iVar0 = unk_0xC06DB57B81E2C02B(iVar15, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 15946 && iParam0 < 16010)
	{
		iVar16 = unk_0x4B2E4855CB2B4FAA((iParam0 - 15946), 0, 1, iParam2, "_DLCSMUGCHARPSTAT_BOOL");
		iVar1 = ((iParam0 - 15946) - unk_0x12730A13C85FC896((iParam0 - 15946)) * 64);
		iVar0 = unk_0xC06DB57B81E2C02B(iVar16, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 18098 && iParam0 < 18162)
	{
		iVar17 = unk_0x4B2E4855CB2B4FAA((iParam0 - 18098), 0, 1, iParam2, "_GANGOPSPSTAT_BOOL");
		iVar1 = ((iParam0 - 18098) - unk_0x12730A13C85FC896((iParam0 - 18098)) * 64);
		iVar0 = unk_0xC06DB57B81E2C02B(iVar17, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 22066 && iParam0 < 22194)
	{
		iVar18 = unk_0x4B2E4855CB2B4FAA((iParam0 - 22066), 0, 1, iParam2, "_BUSINESSBATPSTAT_BOOL");
		iVar1 = ((iParam0 - 22066) - unk_0x12730A13C85FC896((iParam0 - 22066)) * 64);
		iVar0 = unk_0xC06DB57B81E2C02B(iVar18, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 24962 && iParam0 < 25538)
	{
		iVar19 = unk_0x4B2E4855CB2B4FAA((iParam0 - 24962), 0, 1, iParam2, "_ARENAWARSPSTAT_BOOL");
		iVar1 = ((iParam0 - 24962) - unk_0x12730A13C85FC896((iParam0 - 24962)) * 64);
		iVar0 = unk_0xC06DB57B81E2C02B(iVar19, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 26810 && iParam0 < 27258)
	{
		iVar20 = unk_0x4B2E4855CB2B4FAA((iParam0 - 26810), 0, 1, iParam2, "_CASINOPSTAT_BOOL");
		iVar1 = ((iParam0 - 26810) - unk_0x12730A13C85FC896((iParam0 - 26810)) * 64);
		iVar0 = unk_0xC06DB57B81E2C02B(iVar20, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 28098 && iParam0 < 28354)
	{
		iVar21 = unk_0x4B2E4855CB2B4FAA((iParam0 - 28098), 0, 1, iParam2, "_CASINOHSTPSTAT_BOOL");
		iVar1 = ((iParam0 - 28098) - unk_0x12730A13C85FC896((iParam0 - 28098)) * 64);
		iVar0 = unk_0xC06DB57B81E2C02B(iVar21, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 28355 && iParam0 < 28483)
	{
		iVar22 = unk_0x4B2E4855CB2B4FAA((iParam0 - 28355), 0, 1, iParam2, "_HEIST3TATTOOSTAT_BOOL");
		iVar1 = ((iParam0 - 28355) - unk_0x12730A13C85FC896((iParam0 - 28355)) * 64);
		iVar0 = unk_0xC06DB57B81E2C02B(iVar22, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 30227 && iParam0 < 30355)
	{
		iVar23 = unk_0x4B2E4855CB2B4FAA((iParam0 - 30227), 0, 1, iParam2, "_SU20PSTAT_BOOL");
		iVar1 = ((iParam0 - 30227) - unk_0x12730A13C85FC896((iParam0 - 30227)) * 64);
		iVar0 = unk_0xC06DB57B81E2C02B(iVar23, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 30355 && iParam0 < 30483)
	{
		iVar24 = unk_0x4B2E4855CB2B4FAA((iParam0 - 30355), 0, 1, iParam2, "_SU20TATTOOSTAT_BOOL");
		iVar1 = ((iParam0 - 30355) - unk_0x12730A13C85FC896((iParam0 - 30355)) * 64);
		iVar0 = unk_0xC06DB57B81E2C02B(iVar24, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 30515 && iParam0 < 30707)
	{
		iVar25 = unk_0x4B2E4855CB2B4FAA((iParam0 - 30515), 0, 1, iParam2, "_HISLANDPSTAT_BOOL");
		iVar1 = ((iParam0 - 30515) - unk_0x12730A13C85FC896((iParam0 - 30515)) * 64);
		iVar0 = unk_0xC06DB57B81E2C02B(iVar25, bParam1, iVar1, iParam3);
	}
	return iVar0;
}

int func_312(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	var uVar2;
	
	iVar0 = 0;
	if (iParam1 == -1)
	{
		iParam1 = func_98();
	}
	iVar1 = func_314(iParam0, iParam1);
	uVar2 = func_313(iParam0);
	if (0 != iVar1)
	{
		iVar0 = unk_0x9FD0AD883E4A7C1E(iVar1, uVar2, iParam2);
	}
	return iVar0;
}

int func_313(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	if (iParam0 >= 0 && iParam0 < 192)
	{
		iVar0 = ((iParam0 - 0) - unk_0x12730A13C85FC896((iParam0 - 0)) * 64);
	}
	else if (iParam0 >= 192 && iParam0 < 384)
	{
		iVar0 = ((iParam0 - 192) - unk_0x12730A13C85FC896((iParam0 - 192)) * 64);
	}
	else if (iParam0 >= 513 && iParam0 < 705)
	{
		iVar0 = ((iParam0 - 513) - unk_0x12730A13C85FC896((iParam0 - 513)) * 64);
	}
	else if (iParam0 >= 705 && iParam0 < 1281)
	{
		iVar0 = ((iParam0 - 705) - unk_0x12730A13C85FC896((iParam0 - 705)) * 64);
	}
	else if (iParam0 >= 2919 && iParam0 < 3111)
	{
		iVar0 = ((iParam0 - 2919) - unk_0x12730A13C85FC896((iParam0 - 2919)) * 64);
	}
	else if (iParam0 >= 3111 && iParam0 < 3879)
	{
		iVar0 = ((iParam0 - 3111) - unk_0x12730A13C85FC896((iParam0 - 3111)) * 64);
	}
	else if (iParam0 >= 4335 && iParam0 < 4399)
	{
		iVar0 = ((iParam0 - 4335) - unk_0x12730A13C85FC896((iParam0 - 4335)) * 64);
	}
	else if (iParam0 >= 4207 && iParam0 < 4335)
	{
		iVar0 = ((iParam0 - 4207) - unk_0x12730A13C85FC896((iParam0 - 4207)) * 64);
	}
	else if (iParam0 >= 6029 && iParam0 < 6413)
	{
		iVar0 = ((iParam0 - 6029) - unk_0x12730A13C85FC896((iParam0 - 6029)) * 64);
	}
	else if (iParam0 >= 7385 && iParam0 < 7641)
	{
		iVar0 = ((iParam0 - 7385) - unk_0x12730A13C85FC896((iParam0 - 7385)) * 64);
	}
	else if (iParam0 >= 7321 && iParam0 < 7385)
	{
		iVar0 = ((iParam0 - 7321) - unk_0x12730A13C85FC896((iParam0 - 7321)) * 64);
	}
	else if (iParam0 >= 9361 && iParam0 < 9553)
	{
		iVar0 = ((iParam0 - 9361) - unk_0x12730A13C85FC896((iParam0 - 9361)) * 64);
	}
	else if (iParam0 >= 15369 && iParam0 < 15561)
	{
		iVar0 = ((iParam0 - 15369) - unk_0x12730A13C85FC896((iParam0 - 15369)) * 64);
	}
	else if (iParam0 >= 15562 && iParam0 < 15946)
	{
		iVar0 = ((iParam0 - 15562) - unk_0x12730A13C85FC896((iParam0 - 15562)) * 64);
	}
	else if (iParam0 >= 15946 && iParam0 < 16010)
	{
		iVar0 = ((iParam0 - 15946) - unk_0x12730A13C85FC896((iParam0 - 15946)) * 64);
	}
	else if (iParam0 >= 18098 && iParam0 < 18162)
	{
		iVar0 = ((iParam0 - 18098) - unk_0x12730A13C85FC896((iParam0 - 18098)) * 64);
	}
	else if (iParam0 >= 22066 && iParam0 < 22194)
	{
		iVar0 = ((iParam0 - 22066) - unk_0x12730A13C85FC896((iParam0 - 22066)) * 64);
	}
	else if (iParam0 >= 24962 && iParam0 < 25538)
	{
		iVar0 = ((iParam0 - 24962) - unk_0x12730A13C85FC896((iParam0 - 24962)) * 64);
	}
	else if (iParam0 >= 26810 && iParam0 < 27258)
	{
		iVar0 = ((iParam0 - 26810) - unk_0x12730A13C85FC896((iParam0 - 26810)) * 64);
	}
	else if (iParam0 >= 28098 && iParam0 < 28354)
	{
		iVar0 = ((iParam0 - 28098) - unk_0x12730A13C85FC896((iParam0 - 28098)) * 64);
	}
	else if (iParam0 >= 28355 && iParam0 < 28483)
	{
		iVar0 = ((iParam0 - 28355) - unk_0x12730A13C85FC896((iParam0 - 28355)) * 64);
	}
	else if (iParam0 >= 30227 && iParam0 < 30355)
	{
		iVar0 = ((iParam0 - 30227) - unk_0x12730A13C85FC896((iParam0 - 30227)) * 64);
	}
	else if (iParam0 >= 30355 && iParam0 < 30483)
	{
		iVar0 = ((iParam0 - 30355) - unk_0x12730A13C85FC896((iParam0 - 30355)) * 64);
	}
	else if (iParam0 >= 30515 && iParam0 < 30707)
	{
		iVar0 = ((iParam0 - 30515) - unk_0x12730A13C85FC896((iParam0 - 30515)) * 64);
	}
	return iVar0;
}

int func_314(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam1 == -1)
	{
		iParam1 = func_98();
	}
	iVar0 = 0;
	if (iParam0 >= 0 && iParam0 < 192)
	{
		iVar0 = unk_0x43BE40E27DB6DC2E((iParam0 - 0), 0, 1, iParam1);
	}
	else if (iParam0 >= 192 && iParam0 < 384)
	{
		iVar0 = unk_0x43BE40E27DB6DC2E((iParam0 - 192), 1, 1, iParam1);
	}
	else if (iParam0 >= 513 && iParam0 < 705)
	{
		iVar0 = unk_0x43BE40E27DB6DC2E((iParam0 - 513), 0, 0, 0);
	}
	else if (iParam0 >= 705 && iParam0 < 1281)
	{
		iVar0 = unk_0x43BE40E27DB6DC2E((iParam0 - 705), 1, 0, 0);
	}
	else if (iParam0 >= 2919 && iParam0 < 3111)
	{
		iVar0 = unk_0x840F9A9E6D216561((iParam0 - 2919), 0, 0, 0);
	}
	else if (iParam0 >= 3111 && iParam0 < 3879)
	{
		iVar0 = unk_0x840F9A9E6D216561((iParam0 - 3111), 0, 1, iParam1);
	}
	else if (iParam0 >= 4335 && iParam0 < 4399)
	{
		iVar0 = unk_0x4B2E4855CB2B4FAA((iParam0 - 4335), 0, 0, 0, "_NGPSTAT_BOOL");
	}
	else if (iParam0 >= 4207 && iParam0 < 4335)
	{
		iVar0 = unk_0x4B2E4855CB2B4FAA((iParam0 - 4207), 0, 1, iParam1, "_NGPSTAT_BOOL");
	}
	else if (iParam0 >= 6029 && iParam0 < 6413)
	{
		iVar0 = unk_0x4B2E4855CB2B4FAA((iParam0 - 6029), 0, 1, iParam1, "_NGTATPSTAT_BOOL");
	}
	else if (iParam0 >= 7321 && iParam0 < 7385)
	{
		iVar0 = unk_0x4B2E4855CB2B4FAA((iParam0 - 7321), 0, 0, 0, "_NGDLCPSTAT_BOOL");
	}
	else if (iParam0 >= 7385 && iParam0 < 7641)
	{
		iVar0 = unk_0x4B2E4855CB2B4FAA((iParam0 - 7385), 0, 1, iParam1, "_NGDLCPSTAT_BOOL");
	}
	else if (iParam0 >= 9361 && iParam0 < 9553)
	{
		iVar0 = unk_0x4B2E4855CB2B4FAA((iParam0 - 9361), 0, 1, iParam1, "_DLCBIKEPSTAT_BOOL");
	}
	else if (iParam0 >= 15369 && iParam0 < 15561)
	{
		iVar0 = unk_0x4B2E4855CB2B4FAA((iParam0 - 15369), 0, 1, iParam1, "_DLCGUNPSTAT_BOOL");
	}
	else if (iParam0 >= 15562 && iParam0 < 15946)
	{
		iVar0 = unk_0x4B2E4855CB2B4FAA((iParam0 - 15562), 0, 1, iParam1, "_GUNTATPSTAT_BOOL");
	}
	else if (iParam0 >= 15946 && iParam0 < 16010)
	{
		iVar0 = unk_0x4B2E4855CB2B4FAA((iParam0 - 15946), 0, 1, iParam1, "_DLCSMUGCHARPSTAT_BOOL");
	}
	else if (iParam0 >= 18098 && iParam0 < 18162)
	{
		iVar0 = unk_0x4B2E4855CB2B4FAA((iParam0 - 18098), 0, 1, iParam1, "_GANGOPSPSTAT_BOOL");
	}
	else if (iParam0 >= 22066 && iParam0 < 22194)
	{
		iVar0 = unk_0x4B2E4855CB2B4FAA((iParam0 - 22066), 0, 1, iParam1, "_BUSINESSBATPSTAT_BOOL");
	}
	else if (iParam0 >= 24962 && iParam0 < 25538)
	{
		iVar0 = unk_0x4B2E4855CB2B4FAA((iParam0 - 24962), 0, 1, iParam1, "_ARENAWARSPSTAT_BOOL");
	}
	else if (iParam0 >= 26810 && iParam0 < 27258)
	{
		iVar0 = unk_0x4B2E4855CB2B4FAA((iParam0 - 26810), 0, 1, iParam1, "_CASINOPSTAT_BOOL");
	}
	else if (iParam0 >= 28098 && iParam0 < 28354)
	{
		iVar0 = unk_0x4B2E4855CB2B4FAA((iParam0 - 28098), 0, 1, iParam1, "_CASINOHSTPSTAT_BOOL");
	}
	else if (iParam0 >= 28355 && iParam0 < 28483)
	{
		iVar0 = unk_0x4B2E4855CB2B4FAA((iParam0 - 28355), 0, 1, iParam1, "_HEIST3TATTOOSTAT_BOOL");
	}
	else if (iParam0 >= 30227 && iParam0 < 30355)
	{
		iVar0 = unk_0x4B2E4855CB2B4FAA((iParam0 - 30227), 0, 1, iParam1, "_SU20PSTAT_BOOL");
	}
	else if (iParam0 >= 30355 && iParam0 < 30483)
	{
		iVar0 = unk_0x4B2E4855CB2B4FAA((iParam0 - 30355), 0, 1, iParam1, "_SU20TATTOOSTAT_BOOL");
	}
	else if (iParam0 >= 30515 && iParam0 < 30707)
	{
		iVar0 = unk_0x4B2E4855CB2B4FAA((iParam0 - 30515), 0, 1, iParam1, "_HISLANDPSTAT_BOOL");
	}
	return iVar0;
}

int func_315(int iParam0)
{
	int iVar0;
	
	iVar0 = func_317(iParam0);
	return func_200(func_316(iVar0), -1, 0);
}

int func_316(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 3952;
		
		case 1:
			return 3953;
		
		case 2:
			return 3954;
		
		case 3:
			return 3955;
		
		case 4:
			return 3956;
		
		case 5:
			return 5457;
		
		default:
	}
	return 3952;
}

int func_317(int iParam0)
{
	int iVar0;
	
	if (func_318(iParam0))
	{
		iVar0 = 0;
		while (iVar0 <= 5)
		{
			if (Global_1590682[unk_0x460153A63B9477BC() /*883*/].f_274.f_183[iVar0 /*12*/] == iParam0)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return -1;
}

int func_318(int iParam0)
{
	if (iParam0 == 32 || iParam0 == 0)
	{
		return 0;
	}
	return 1;
}

void func_319(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	iVar0 = func_317(iParam0);
	iVar1 = func_316(iVar0);
	iVar2 = (func_200(iVar1, -1, 0) + iParam1);
	func_198(iVar1, iVar2, -1, 1, 0);
	if (iVar0 == 5)
	{
		return;
	}
	if (func_322(9357, -1, -1) < 3)
	{
		iVar3 = 0;
		iVar0 = 0;
		while (iVar0 <= 5)
		{
			if (Global_1590682[unk_0x460153A63B9477BC() /*883*/].f_274.f_183[iVar0 /*12*/] != 0)
			{
				iVar1 = func_316(iVar0);
				iVar3 = (iVar3 + func_200(iVar1, -1, 0));
			}
			iVar0++;
		}
		iVar4 = 1;
		while (iVar4 <= 3)
		{
			if (iVar3 >= func_321(iVar4))
			{
				iVar5 = iVar4;
			}
			iVar4++;
		}
		func_320(9357, iVar5, -1, 1);
	}
}

var func_320(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	var uVar2;
	
	if (iParam2 == -1)
	{
		iParam2 = func_98();
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

int func_321(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return 100000;
			break;
		
		case 2:
			return 300000;
			break;
		
		case 3:
			return 500000;
			break;
	}
	return 0;
}

int func_322(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (iParam1 == -1)
	{
		iParam1 = func_98();
	}
	iVar0 = 0;
	iVar1 = func_324(iParam0, iParam1);
	iVar2 = func_323(iParam0);
	if (0 != iVar1)
	{
		if (!unk_0x84F15E111A2161E1(iVar1, &iVar0, iVar2, 8, iParam2))
		{
			iVar0 = 0;
		}
	}
	return iVar0;
}

int func_323(int iParam0)
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

int func_324(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam1 == -1)
	{
		iParam1 = func_98();
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

int func_325(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	
	iVar1 = func_226(iParam1);
	if (func_318(iParam1))
	{
		switch (iVar1)
		{
			case 1:
				iVar0 = Global_262145.f_16968;
				if (func_326(iParam0, iParam1, 0))
				{
					iVar0 = (iVar0 + Global_262145.f_16973);
				}
				if (func_326(iParam0, iParam1, 1))
				{
					iVar0 = (iVar0 + Global_262145.f_16978);
				}
				iVar0 = (iVar0 * iParam2);
				break;
			
			case 3:
				iVar0 = Global_262145.f_16967;
				if (func_326(iParam0, iParam1, 0))
				{
					iVar0 = (iVar0 + Global_262145.f_16972);
				}
				if (func_326(iParam0, iParam1, 1))
				{
					iVar0 = (iVar0 + Global_262145.f_16977);
				}
				iVar0 = (iVar0 * iParam2);
				break;
			
			case 4:
				iVar0 = Global_262145.f_16966;
				if (func_326(iParam0, iParam1, 0))
				{
					iVar0 = (iVar0 + Global_262145.f_16971);
				}
				if (func_326(iParam0, iParam1, 1))
				{
					iVar0 = (iVar0 + Global_262145.f_16976);
				}
				iVar0 = (iVar0 * iParam2);
				break;
			
			case 0:
				iVar0 = Global_262145.f_16964;
				if (func_326(iParam0, iParam1, 0))
				{
					iVar0 = (iVar0 + Global_262145.f_16969);
				}
				if (func_326(iParam0, iParam1, 1))
				{
					iVar0 = (iVar0 + Global_262145.f_16974);
				}
				iVar0 = (iVar0 * iParam2);
				break;
			
			case 2:
				iVar0 = Global_262145.f_16965;
				if (func_326(iParam0, iParam1, 0))
				{
					iVar0 = (iVar0 + Global_262145.f_16970);
				}
				if (func_326(iParam0, iParam1, 1))
				{
					iVar0 = (iVar0 + Global_262145.f_16975);
				}
				iVar0 = (iVar0 * iParam2);
				break;
			
			case 5:
				iVar0 = Global_262145.f_21070;
				if (func_326(iParam0, iParam1, 0))
				{
					iVar0 = (iVar0 + Global_262145.f_21072);
				}
				if (func_326(iParam0, iParam1, 1))
				{
					iVar0 = (iVar0 + Global_262145.f_21071);
				}
				iVar0 = (iVar0 * iParam2);
				break;
			}
	}
	return iVar0;
}

int func_326(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	if (func_328(iParam0, iParam1))
	{
		iVar0 = func_327(iParam0, iParam1);
		return unk_0xCE990E643CD9D0E5(Global_1590682[iParam0 /*883*/].f_274.f_183[iVar0 /*12*/].f_5, iParam2);
	}
	return 0;
}

int func_327(int iParam0, int iParam1)
{
	int iVar0;
	
	if (func_318(iParam1) && iParam0 != func_40())
	{
		iVar0 = 0;
		while (iVar0 <= 5)
		{
			if (Global_1590682[iParam0 /*883*/].f_274.f_183[iVar0 /*12*/] == iParam1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return -1;
}

int func_328(int iParam0, int iParam1)
{
	int iVar0;
	
	if (func_318(iParam1) && iParam0 != func_40())
	{
		iVar0 = 0;
		while (iVar0 <= 5)
		{
			if (Global_1590682[iParam0 /*883*/].f_274.f_183[iVar0 /*12*/] == iParam1)
			{
				return 1;
			}
			iVar0++;
		}
	}
	return 0;
}

int func_329(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam0 == func_40())
	{
		return 0;
	}
	if (func_318(iParam1))
	{
		iVar0 = 0;
		while (iVar0 <= 5)
		{
			if (Global_1590682[iParam0 /*883*/].f_274.f_183[iVar0 /*12*/] == iParam1)
			{
				return Global_1590682[iParam0 /*883*/].f_274.f_183[iVar0 /*12*/].f_1;
			}
			iVar0++;
		}
	}
	return 0;
}

void func_330(int iParam0, var uParam1, int iParam2, var uParam3)
{
	struct<2> Var0;
	float fVar1;
	float fVar2;
	float fVar3;
	int iVar4;
	float fVar5;
	int iVar6;
	float fVar7;
	float fVar8;
	var uVar9;
	int iVar10;
	int iVar11;
	int iVar12;
	int iVar13;
	struct<2> Var14;
	float fVar15;
	float fVar16;
	float fVar17;
	int iVar18;
	float fVar19;
	int iVar20;
	float fVar21;
	int iVar22;
	int iVar23;
	
	if (iParam0 == 192)
	{
	}
	else if (iParam0 == 190)
	{
		if (uParam1->f_10 > 0)
		{
			if (func_202())
			{
				Var0 = { func_228() };
				if (uParam1->f_10 == uParam1->f_11)
				{
					*uParam3 = (uParam1->f_15 + uParam1->f_8);
				}
				else
				{
					fVar1 = to_float(uParam1->f_10);
					fVar2 = to_float(uParam1->f_11);
					fVar3 = ((fVar1 / fVar2) * 100f);
					iVar4 = (uParam1->f_15 + uParam1->f_8);
					fVar5 = ((IntToFloat(iVar4) / 100f) * fVar3);
					*uParam3 = ceil(fVar5);
				}
				iVar6 = func_325(unk_0x460153A63B9477BC(), Var0, *uParam3);
				if (Var0.f_1 == 1)
				{
					fVar7 = (to_float(iVar6) * Global_262145.f_18603);
					iVar6 = round(fVar7);
				}
				else
				{
					fVar8 = (to_float(iVar6) * Global_262145.f_18602);
					iVar6 = round(fVar8);
				}
				*iParam2 = (*iParam2 + iVar6);
				iVar10 = func_295(&uVar9);
				iVar11 = round(Global_262145.f_18593);
				if (iVar10 > iVar11)
				{
					iVar10 = iVar11;
				}
				iVar12 = ceil((IntToFloat(iVar10) * Global_262145.f_18592));
				iVar13 = ((*iParam2 / 100) * iVar12);
				*iParam2 = (*iParam2 + iVar13);
				if (uParam1->f_6)
				{
					*iParam2 = (*iParam2 + *uParam1);
				}
				if (uParam1->f_6)
				{
					if (uParam1->f_12 == 11)
					{
						if (*uParam1 > 0)
						{
							*iParam2 = (*iParam2 + *uParam1);
						}
					}
					else if (uParam1->f_12 == 9)
					{
						if (*uParam1 > 0)
						{
							*iParam2 = (*iParam2 + *uParam1);
						}
					}
				}
				if (iVar10 > 0)
				{
					func_100(86);
				}
				Global_2540384.f_5188.f_382 = *iParam2;
			}
			else if (func_127(0))
			{
				Var14 = { func_331(func_177()) };
				if (uParam1->f_10 == uParam1->f_11)
				{
					*uParam3 = (uParam1->f_15 + uParam1->f_8);
				}
				else
				{
					fVar15 = to_float(uParam1->f_10);
					fVar16 = to_float(uParam1->f_11);
					fVar17 = ((fVar15 / fVar16) * 100f);
					iVar18 = (uParam1->f_15 + uParam1->f_8);
					fVar19 = ((IntToFloat(iVar18) / 100f) * fVar17);
					*uParam3 = ceil(fVar19);
				}
				iVar20 = func_325(func_177(), Var14, *uParam3);
				if (Var14.f_1 == 1)
				{
					iVar20 = ceil((IntToFloat(iVar20) * Global_262145.f_18603));
				}
				else if (Var14.f_1 == 0)
				{
					iVar20 = ceil((IntToFloat(iVar20) * Global_262145.f_18602));
				}
				*iParam2 = (*iParam2 + iVar20);
				fVar21 = Global_262145.f_18642;
				iVar22 = ceil((IntToFloat(*iParam2) * fVar21));
				*iParam2 = iVar22;
				iVar23 = Global_262145.f_18643;
				if (*iParam2 > iVar23)
				{
					*iParam2 = iVar23;
				}
				if (uParam1->f_6)
				{
					if (uParam1->f_12 == 11)
					{
						if (*uParam1 > 0)
						{
							*iParam2 = (*iParam2 + *uParam1);
						}
					}
				}
			}
		}
	}
}

struct<2> func_331(int iParam0)
{
	return Global_1630317[iParam0 /*595*/].f_11.f_193;
}

void func_332(int iParam0, bool bParam1, var uParam2, int iParam3, var uParam4)
{
	int iVar0;
	int iVar1;
	var uVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	
	if (iParam0 == 167)
	{
		if (func_82(unk_0x460153A63B9477BC()))
		{
			if (bParam1)
			{
				func_347();
			}
			func_346();
		}
	}
	else if (iParam0 == 168)
	{
		if (bParam1)
		{
			if (func_82(unk_0x460153A63B9477BC()))
			{
				if (uParam2->f_5)
				{
					*iParam3 = (*iParam3 + func_338(Global_1630317[unk_0x460153A63B9477BC() /*595*/].f_11.f_182));
				}
				else
				{
					*uParam4 = uParam2->f_7;
					if (uParam2->f_8 > 0)
					{
						*uParam4 = (*uParam4 + uParam2->f_8);
					}
					iVar0 = func_337(*uParam4);
					iVar1 = (iVar0 * *uParam4);
					*iParam3 = (*iParam3 + iVar1);
					iVar3 = func_295(&uVar2);
					iVar4 = Global_262145.f_16149;
					if (iVar3 > iVar4)
					{
						iVar3 = iVar4;
					}
					iVar5 = ceil((IntToFloat(iVar3) * Global_262145.f_15358));
					iVar6 = ((*iParam3 / 100) * iVar5);
					*iParam3 = (*iParam3 + iVar6);
					if (uParam2->f_6)
					{
						*iParam3 = (*iParam3 + *uParam2);
					}
					if (iVar3 > 0 && uParam2->f_9 != 4)
					{
						func_100(44);
					}
				}
				func_335(*iParam3);
				func_334();
				Global_2540384.f_5188.f_382 = *iParam3;
				iVar7 = 0;
				while (iVar7 < unk_0xEFA28384DDD283E1())
				{
					iVar8 = iVar7;
					if (unk_0xBD09DF93F957A0CF(iVar8))
					{
						iVar9 = unk_0x9019589211A13B02(iVar8);
						if (func_294(iVar9))
						{
							func_286(iVar9, 1, -1292453789);
						}
					}
					iVar7++;
				}
			}
		}
		if (func_82(unk_0x460153A63B9477BC()))
		{
			func_333();
		}
	}
}

void func_333()
{
	int iVar0;
	
	iVar0 = Global_2590607[func_98()];
	iVar0++;
	func_197(3668, iVar0, -1, 1);
}

void func_334()
{
	int iVar0;
	
	iVar0 = Global_2590613[func_98()];
	iVar0++;
	func_197(3667, iVar0, -1, 1);
}

void func_335(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = Global_2590616[func_98()];
	iVar0 = (iVar0 + iParam0);
	func_197(3669, iVar0, -1, 1);
	if (func_322(7666, -1, -1) < 24)
	{
		iVar1 = 1;
		while (iVar1 <= 24)
		{
			if (iVar0 >= func_336(iVar1))
			{
				iVar2 = iVar1;
			}
			iVar1++;
		}
		func_320(7666, iVar2, -1, 1);
	}
}

int func_336(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return Global_262145.f_16282;
			break;
		
		case 2:
			return Global_262145.f_16283;
			break;
		
		case 3:
			return Global_262145.f_16284;
			break;
		
		case 4:
			return Global_262145.f_16285;
			break;
		
		case 5:
			return Global_262145.f_16286;
			break;
		
		case 6:
			return Global_262145.f_16287;
			break;
		
		case 7:
			return Global_262145.f_16288;
			break;
		
		case 8:
			return Global_262145.f_16289;
			break;
		
		case 9:
			return Global_262145.f_16290;
			break;
		
		case 10:
			return Global_262145.f_16291;
			break;
		
		case 11:
			return Global_262145.f_16292;
			break;
		
		case 12:
			return Global_262145.f_16293;
			break;
		
		case 13:
			return Global_262145.f_16294;
			break;
		
		case 14:
			return Global_262145.f_16295;
			break;
		
		case 15:
			return Global_262145.f_16296;
			break;
		
		case 16:
			return Global_262145.f_16297;
			break;
		
		case 17:
			return Global_262145.f_16298;
			break;
		
		case 18:
			return Global_262145.f_16299;
			break;
		
		case 19:
			return Global_262145.f_16300;
			break;
		
		case 20:
			return Global_262145.f_16301;
			break;
		
		case 21:
			return Global_262145.f_16302;
			break;
		
		case 22:
			return Global_262145.f_16303;
			break;
		
		case 23:
			return Global_262145.f_16304;
			break;
		
		case 24:
			return Global_262145.f_16305;
			break;
	}
	return 0;
}

var func_337(int iParam0)
{
	if (iParam0 >= Global_262145.f_15336)
	{
		return Global_262145.f_15357;
	}
	else if (iParam0 >= Global_262145.f_15335)
	{
		return Global_262145.f_15356;
	}
	else if (iParam0 >= Global_262145.f_15334)
	{
		return Global_262145.f_15355;
	}
	else if (iParam0 >= Global_262145.f_15333)
	{
		return Global_262145.f_15354;
	}
	else if (iParam0 >= Global_262145.f_15332)
	{
		return Global_262145.f_15353;
	}
	else if (iParam0 >= Global_262145.f_15331)
	{
		return Global_262145.f_15352;
	}
	else if (iParam0 >= Global_262145.f_15330)
	{
		return Global_262145.f_15351;
	}
	else if (iParam0 >= Global_262145.f_15329)
	{
		return Global_262145.f_15350;
	}
	else if (iParam0 >= Global_262145.f_15328)
	{
		return Global_262145.f_15349;
	}
	else if (iParam0 >= Global_262145.f_15327)
	{
		return Global_262145.f_15348;
	}
	else if (iParam0 >= Global_262145.f_15326)
	{
		return Global_262145.f_15347;
	}
	else if (iParam0 >= Global_262145.f_15325)
	{
		return Global_262145.f_15346;
	}
	else if (iParam0 >= Global_262145.f_15324)
	{
		return Global_262145.f_15345;
	}
	else if (iParam0 >= Global_262145.f_15323)
	{
		return Global_262145.f_15344;
	}
	else if (iParam0 >= Global_262145.f_15322)
	{
		return Global_262145.f_15343;
	}
	else if (iParam0 >= Global_262145.f_15321)
	{
		return Global_262145.f_15342;
	}
	else if (iParam0 >= Global_262145.f_15320)
	{
		return Global_262145.f_15341;
	}
	else if (iParam0 >= Global_262145.f_15319)
	{
		return Global_262145.f_15340;
	}
	else if (iParam0 >= Global_262145.f_15318)
	{
		return Global_262145.f_15339;
	}
	else if (iParam0 >= Global_262145.f_15317)
	{
		return Global_262145.f_15338;
	}
	return Global_262145.f_15337;
}

int func_338(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (func_345(iParam0))
	{
		iVar2 = 1;
		while (iVar2 <= 6)
		{
			iVar3 = iVar2;
			if (func_344(iParam0, iVar3))
			{
				iVar0 = (iVar0 + func_343(iVar3));
				iVar1++;
			}
			iVar2++;
		}
		if (iVar1 < func_339(iParam0))
		{
			iVar2 = 0;
			while (iVar2 <= (func_339(iParam0) - iVar1))
			{
				iVar0 = (iVar0 + func_343(unk_0x344C570D6F8700DF(1, 6)));
				iVar2++;
			}
		}
	}
	return iVar0;
}

int func_339(int iParam0)
{
	int iVar0;
	
	if (func_342(iParam0))
	{
		iVar0 = func_340(func_341(iParam0));
		return func_200(iVar0, -1, 0);
	}
	return 0;
}

int func_340(int iParam0)
{
	if (iParam0 == 0)
	{
		return 3647;
	}
	else if (iParam0 == 1)
	{
		return 3648;
	}
	else if (iParam0 == 2)
	{
		return 3649;
	}
	else if (iParam0 == 3)
	{
		return 3650;
	}
	else if (iParam0 == 4)
	{
		return 3651;
	}
	return 3647;
}

int func_341(int iParam0)
{
	int iVar0;
	
	if (func_342(iParam0))
	{
		iVar0 = 0;
		while (iVar0 <= 4)
		{
			if (Global_1590682[unk_0x460153A63B9477BC() /*883*/].f_274.f_106[iVar0 /*3*/] == iParam0)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return -1;
}

int func_342(int iParam0)
{
	if (iParam0 < 1 || iParam0 > 22)
	{
		return 0;
	}
	return 1;
}

int func_343(int iParam0)
{
	if (iParam0 == 1)
	{
		return Global_262145.f_15536;
	}
	else if (iParam0 == 2)
	{
		return Global_262145.f_15534;
	}
	else if (iParam0 == 3)
	{
		return Global_262145.f_15538;
	}
	else if (iParam0 == 4)
	{
		return Global_262145.f_15532;
	}
	else if (iParam0 == 5)
	{
		return Global_262145.f_15530;
	}
	else if (iParam0 == 6)
	{
		return Global_262145.f_15540;
	}
	return 0;
}

int func_344(int iParam0, int iParam1)
{
	int iVar0;
	
	if (func_342(iParam0))
	{
		iVar0 = 0;
		while (iVar0 < 6)
		{
			if (Global_1677993[iVar0] == iParam1 && Global_1678000[iVar0] == iParam0)
			{
				return 1;
			}
			iVar0++;
		}
	}
	return 0;
}

int func_345(int iParam0)
{
	int iVar0;
	
	if (func_342(iParam0))
	{
		iVar0 = 0;
		while (iVar0 <= 4)
		{
			if (Global_1590682[unk_0x460153A63B9477BC() /*883*/].f_274.f_106[iVar0 /*3*/] == iParam0)
			{
				return 1;
			}
			iVar0++;
		}
	}
	return 0;
}

void func_346()
{
	int iVar0;
	
	iVar0 = Global_2590604[func_98()];
	iVar0++;
	Global_2590604[func_98()] = iVar0;
	func_197(3666, iVar0, -1, 1);
}

void func_347()
{
	int iVar0;
	int iVar1;
	
	iVar0 = Global_2590601[func_98()];
	iVar1 = Global_2590610[func_98()];
	iVar0++;
	iVar1++;
	Global_2590601[func_98()] = iVar0;
	Global_2590610[func_98()] = iVar1;
	Global_1590682[unk_0x460153A63B9477BC() /*883*/].f_274.f_128 = iVar1;
	func_197(3664, iVar0, -1, 1);
	func_197(3665, iVar1, -1, 1);
}

void func_348()
{
	if (func_176())
	{
		Global_2452679.f_3074.f_134 = 0;
		Global_1630317[unk_0x460153A63B9477BC() /*595*/].f_11.f_422 = Global_2452679.f_3074.f_134;
	}
}

void func_349()
{
	if (func_176())
	{
		if (Global_2452679.f_3074.f_134 < 10)
		{
			Global_2452679.f_3074.f_134++;
			Global_1630317[unk_0x460153A63B9477BC() /*595*/].f_11.f_422 = Global_2452679.f_3074.f_134;
		}
	}
}

void func_350()
{
	if (func_176())
	{
		if (Global_2452679.f_3074.f_134 > 0)
		{
			Global_2452679.f_3074.f_134 = (Global_2452679.f_3074.f_134 - 1);
			Global_1630317[unk_0x460153A63B9477BC() /*595*/].f_11.f_422 = Global_2452679.f_3074.f_134;
		}
	}
}

int func_351(int iParam0)
{
	return Global_1630317[iParam0 /*595*/].f_11.f_28;
}

int func_352(int iParam0)
{
	switch (iParam0)
	{
		case 167:
		case 168:
		case 178:
		case 188:
			return 1;
		
		case 225:
		case 226:
		case 229:
		case 230:
		case 233:
		case 237:
		case 158:
		case 256:
		case 258:
			if (func_104(1) && !func_127(1))
			{
				if (func_353(func_177()))
				{
					return 1;
				}
			}
			break;
	}
	return 0;
}

bool func_353(int iParam0)
{
	if (iParam0 == -1)
	{
		return 0;
	}
	return unk_0xCE990E643CD9D0E5(Global_1590682[iParam0 /*883*/].f_274.f_26, 26);
}

int func_354(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		return Global_262145.f_18289;
	}
	switch (iParam0)
	{
		case 142:
			return round((IntToFloat(Global_262145.f_12514) * Global_262145.f_12519));
		
		case 157:
			return 0;
		
		case 159:
			return round((IntToFloat(Global_262145.f_12464) * Global_262145.f_12469));
		
		case 151:
			return 0;
		
		case 148:
			return round((IntToFloat(Global_262145.f_12491) * Global_262145.f_12495));
		
		case 164:
			return round((IntToFloat(Global_262145.f_12504) * Global_262145.f_12508));
		
		case 152:
			return round((IntToFloat(Global_262145.f_12526) * Global_262145.f_12531));
		
		case 153:
			return round((IntToFloat(Global_262145.f_12688) * Global_262145.f_12689));
		
		case 154:
			return round((IntToFloat(Global_262145.f_12694) * Global_262145.f_12695));
		
		case 155:
			return round((IntToFloat(Global_262145.f_12692) * Global_262145.f_12693));
		
		case 160:
			return round((IntToFloat(Global_262145.f_12686) * Global_262145.f_12687));
		
		case 162:
			return round((IntToFloat(Global_262145.f_12690) * Global_262145.f_12691));
		
		case 163:
			return round((IntToFloat(Global_262145.f_12684) * Global_262145.f_12685));
		
		case 170:
			return 0;
		
		case 171:
			return Global_262145.f_15059;
		
		case 172:
			return Global_262145.f_15075;
		
		case 173:
			return Global_262145.f_15018;
		
		case 166:
			return 0;
		
		case 179:
			return Global_262145.f_18297;
		
		case 180:
			return Global_262145.f_18172;
		
		case 182:
			return 0;
		
		case 183:
			return Global_262145.f_18180;
		
		case 185:
			return Global_262145.f_18189;
		
		case 186:
			return 0;
		
		case 189:
			return Global_262145.f_18385;
		
		case 190:
			return 0;
		
		case 191:
			return 0;
		
		case 192:
			return 0;
		
		case 193:
			return Global_262145.f_18402;
		
		case 194:
			return 0;
		
		case 195:
			return 0;
		
		case 197:
			return Global_262145.f_18249;
		
		case 198:
			return 0;
		
		case 199:
			return Global_262145.f_18433;
		
		case 200:
			return 0;
		
		case 201:
			return Global_262145.f_18311;
		
		case 205:
			return Global_262145.f_18420;
		
		case 207:
			return 0;
		
		case 208:
			return Global_262145.f_18278;
		
		case 209:
			return 0;
		
		case 210:
			return Global_262145.f_18415;
		
		case 211:
			return Global_262145.f_18379;
		
		case 214:
			return Global_262145.f_18973;
		
		case 215:
			return Global_262145.f_18983;
		
		case 216:
			return Global_262145.f_18993;
		
		case 217:
			return Global_262145.f_19002;
		
		case 218:
			return Global_262145.f_19011;
		
		case 219:
			return Global_262145.f_19027;
		
		case 241:
			return Global_262145.f_24103;
		
		case 242:
			return Global_262145.f_24099;
		
		case 248:
			return Global_262145.f_24102;
		
		case 244:
			return Global_262145.f_24100;
		
		case 239:
			return Global_262145.f_24104;
		
		case 240:
			return Global_262145.f_24105;
		
		case 243:
			return Global_262145.f_26372;
		
		default:
	}
	return 0;
}

int func_355(int iParam0, bool bParam1, bool bParam2)
{
	if (bParam2)
	{
		return Global_262145.f_18290;
	}
	switch (iParam0)
	{
		case 142:
			return round((IntToFloat(Global_262145.f_12515) * Global_262145.f_12520));
		
		case 157:
			return 0;
		
		case 159:
			return round((IntToFloat(Global_262145.f_12465) * Global_262145.f_12470));
		
		case 151:
			return 0;
		
		case 148:
			return round((IntToFloat(Global_262145.f_12492) * Global_262145.f_12496));
		
		case 164:
			return round((IntToFloat(Global_262145.f_12505) * Global_262145.f_12509));
		
		case 152:
			return round((IntToFloat(Global_262145.f_12527) * Global_262145.f_12532));
		
		case 153:
			return round((IntToFloat(Global_262145.f_12564) * Global_262145.f_12567));
		
		case 154:
			return round((IntToFloat(Global_262145.f_12610) * Global_262145.f_12613));
		
		case 155:
			return round((IntToFloat(Global_262145.f_12600) * Global_262145.f_12603));
		
		case 160:
			return round((IntToFloat(Global_262145.f_12555) * Global_262145.f_12558));
		
		case 162:
			return round((IntToFloat(Global_262145.f_12575) * Global_262145.f_12580));
		
		case 163:
			return round((IntToFloat(Global_262145.f_12540) * Global_262145.f_12543));
		
		case 170:
			return Global_262145.f_15001;
		
		case 171:
			return Global_262145.f_15060;
		
		case 172:
			return Global_262145.f_15076;
		
		case 173:
			return Global_262145.f_15019;
		
		case 166:
			return 0;
		
		case 167:
			return Global_262145.f_17098;
		
		case 168:
			return Global_262145.f_17097;
		
		case 179:
			return Global_262145.f_18298;
		
		case 180:
			return Global_262145.f_18173;
		
		case 182:
			return 0;
		
		case 183:
			return Global_262145.f_18181;
		
		case 185:
			return Global_262145.f_18190;
		
		case 186:
			return 0;
		
		case 189:
			return Global_262145.f_18386;
		
		case 190:
			return 0;
		
		case 191:
			return 0;
		
		case 192:
			return 0;
		
		case 193:
			return Global_262145.f_18403;
		
		case 194:
			return 0;
		
		case 195:
			return 0;
		
		case 197:
			return Global_262145.f_18250;
		
		case 198:
			return 0;
		
		case 199:
			return Global_262145.f_18434;
		
		case 200:
			return 0;
		
		case 201:
			return Global_262145.f_18312;
		
		case 205:
			return Global_262145.f_18421;
		
		case 207:
			return 0;
		
		case 208:
			return Global_262145.f_18279;
		
		case 209:
			return 0;
		
		case 210:
			return Global_262145.f_18416;
		
		case 211:
			return Global_262145.f_18380;
		
		case 214:
			return Global_262145.f_18974;
		
		case 215:
			return Global_262145.f_18984;
		
		case 216:
			return Global_262145.f_18994;
		
		case 217:
			return Global_262145.f_19003;
		
		case 218:
			return Global_262145.f_19012;
		
		case 219:
			return Global_262145.f_19028;
		
		case 178:
			if (func_176())
			{
				return Global_262145.f_18851;
			}
			else if (bParam1)
			{
				return Global_262145.f_18852;
			}
			break;
		
		case 188:
			if (func_176())
			{
				return Global_262145.f_18935;
			}
			else if (bParam1)
			{
				return Global_262145.f_18936;
			}
			break;
		
		case 225:
			if (func_176() && !func_202())
			{
				if (func_353(unk_0x460153A63B9477BC()))
				{
					return Global_262145.f_21058;
				}
				else
				{
					return Global_262145.f_21059;
				}
			}
			else if (func_202())
			{
				return Global_262145.f_21060;
			}
			break;
		
		case 226:
			if (func_176() && !func_202())
			{
				if (func_353(unk_0x460153A63B9477BC()))
				{
					return Global_262145.f_21038;
				}
				else
				{
					return Global_262145.f_21039;
				}
			}
			else if (func_202())
			{
				return Global_262145.f_21040;
			}
			break;
		
		case 227:
			if (func_176() && !func_202())
			{
				if (func_353(unk_0x460153A63B9477BC()))
				{
					return Global_262145.f_21050;
				}
				else
				{
					return Global_262145.f_21051;
				}
			}
			else if (func_202())
			{
				return Global_262145.f_21052;
			}
			break;
		
		case 229:
			if (func_176() && !func_202())
			{
				if (func_353(unk_0x460153A63B9477BC()))
				{
					return Global_262145.f_22217;
				}
				else
				{
					return Global_262145.f_22218;
				}
			}
			else if (func_202())
			{
				return Global_262145.f_22219;
			}
			break;
		
		case 230:
			if (func_176() && !func_202())
			{
				if (func_353(unk_0x460153A63B9477BC()))
				{
					return Global_262145.f_22313;
				}
				else
				{
					return Global_262145.f_22314;
				}
			}
			else if (func_202())
			{
				return Global_262145.f_22315;
			}
			break;
		
		case 233:
			if (func_176() && !func_202())
			{
				if (func_353(unk_0x460153A63B9477BC()))
				{
					return Global_262145.f_22789;
				}
				else
				{
					return Global_262145.f_22790;
				}
			}
			else if (func_202())
			{
				return Global_262145.f_22788;
			}
			break;
		
		case 241:
			return Global_262145.f_24110;
		
		case 242:
			return Global_262145.f_24106;
		
		case 244:
			return Global_262145.f_24107;
		
		case 248:
			return Global_262145.f_24109;
		
		case 239:
			return Global_262145.f_24111;
		
		case 240:
			return Global_262145.f_24112;
		
		case 237:
			if (func_176() && !func_202())
			{
				if (func_353(unk_0x460153A63B9477BC()))
				{
					return Global_262145.f_23952;
				}
				else
				{
					return Global_262145.f_23953;
				}
			}
			else if (func_202())
			{
				return Global_262145.f_23954;
			}
			break;
		
		case 238:
			if (func_176() && !func_202())
			{
				if (func_353(unk_0x460153A63B9477BC()))
				{
					return Global_262145.f_24063;
				}
				else
				{
					return Global_262145.f_24064;
				}
			}
			else if (func_202())
			{
				return Global_262145.f_24065;
			}
			break;
		
		case 249:
			if (func_176() && !func_202())
			{
				if (func_353(unk_0x460153A63B9477BC()))
				{
					return Global_262145.f_24079;
				}
				else
				{
					return Global_262145.f_24080;
				}
			}
			else if (func_202())
			{
				return Global_262145.f_24081;
			}
			break;
		
		case 243:
			if (func_176() && !func_202())
			{
				if (func_353(unk_0x460153A63B9477BC()))
				{
					return Global_262145.f_26375;
				}
				else
				{
					return Global_262145.f_26376;
				}
			}
			else if (func_202())
			{
				return Global_262145.f_26375;
			}
			break;
		
		case 158:
			if (func_176() && !func_202())
			{
				if (func_353(unk_0x460153A63B9477BC()))
				{
					return 1500;
				}
				else
				{
					return 1000;
				}
			}
			else if (func_202())
			{
				return 1500;
			}
			break;
	}
	return 0;
}

void func_356(int iParam0, var uParam1, var uParam2)
{
	int iVar0;
	
	if (iParam0 == 157)
	{
		*uParam1 = 1f;
		*uParam2 = 1f;
		return;
	}
	if (func_357(iParam0))
	{
		if (!func_176())
		{
			*uParam1 = 1f;
			*uParam2 = Global_262145.f_12408;
		}
		else
		{
			*uParam1 = 1f;
			*uParam2 = 1f;
		}
		return;
	}
	if (func_81(unk_0x460153A63B9477BC(), 1))
	{
		if (func_99(iParam0))
		{
			*uParam1 = (Global_262145.f_18149 / 100f);
			*uParam2 = (Global_262145.f_18149 / 100f);
		}
		else if (iParam0 == 242)
		{
			*uParam1 = Global_262145.f_24113;
			*uParam2 = Global_262145.f_24113;
		}
		else if (iParam0 == 244)
		{
			*uParam1 = Global_262145.f_24114;
			*uParam2 = Global_262145.f_24114;
		}
		else if (iParam0 == 248)
		{
			*uParam1 = Global_262145.f_24116;
			*uParam2 = Global_262145.f_24116;
		}
		else if (iParam0 == 241)
		{
			*uParam1 = Global_262145.f_24117;
			*uParam2 = Global_262145.f_24117;
		}
		else if (iParam0 == 239)
		{
			*uParam1 = Global_262145.f_24118;
			*uParam2 = Global_262145.f_24118;
		}
		else if (iParam0 == 240)
		{
			*uParam1 = Global_262145.f_24119;
			*uParam2 = Global_262145.f_24119;
		}
		else
		{
			*uParam1 = Global_262145.f_12405;
			*uParam2 = Global_262145.f_12404;
		}
	}
	else if (func_99(iParam0))
	{
		*uParam1 = (Global_262145.f_18150 / 100f);
		*uParam2 = (Global_262145.f_18150 / 100f);
	}
	else if (iParam0 == 242)
	{
		*uParam1 = Global_262145.f_24120;
		*uParam2 = Global_262145.f_24120;
	}
	else if (iParam0 == 244)
	{
		*uParam1 = Global_262145.f_24121;
		*uParam2 = Global_262145.f_24121;
	}
	else if (iParam0 == 248)
	{
		*uParam1 = Global_262145.f_24123;
		*uParam2 = Global_262145.f_24123;
	}
	else if (iParam0 == 241)
	{
		*uParam1 = Global_262145.f_24124;
		*uParam2 = Global_262145.f_24124;
	}
	else if (iParam0 == 239)
	{
		*uParam1 = Global_262145.f_24125;
		*uParam2 = Global_262145.f_24125;
	}
	else if (iParam0 == 240)
	{
		*uParam1 = Global_262145.f_24126;
		*uParam2 = Global_262145.f_24126;
	}
	else
	{
		*uParam1 = Global_262145.f_12407;
		*uParam2 = Global_262145.f_12406;
	}
	iVar0 = func_7();
	if (iVar0 != func_40())
	{
		if (func_179(unk_0x460153A63B9477BC(), iVar0, 1))
		{
			*uParam1 = 1f;
			*uParam2 = 1f;
		}
	}
}

int func_357(int iParam0)
{
	switch (iParam0)
	{
		case 160:
		case 162:
		case 153:
		case 154:
		case 155:
		case 163:
		case 171:
		case 172:
			return 1;
		
		default:
	}
	return 0;
}

void func_358(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam1 != func_40())
	{
		if (unk_0x166E920FB00B2DBB(iParam1))
		{
			if (iParam1 == unk_0x460153A63B9477BC())
			{
				iVar0 = 1;
			}
			else if (func_359(iParam1, unk_0x460153A63B9477BC()))
			{
				iVar0 = 1;
			}
		}
	}
	if (iParam0 || iVar0)
	{
		if (func_6(unk_0x460153A63B9477BC(), 1, 1))
		{
			unk_0xCAD5C18968E57C30(unk_0x460153A63B9477BC(), 0, 0);
			unk_0x4B86C627B5EABFBF(unk_0x460153A63B9477BC(), 0);
			Global_2540384.f_5188.f_384 = unk_0x5A002C4821A13338();
		}
	}
}

int func_359(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam0 != func_40() && iParam1 != func_40())
	{
		iVar0 = func_41(iParam0);
		if (iVar0 != func_40())
		{
			return iVar0 == func_41(iParam1);
		}
	}
	return 0;
}

void func_360(var uParam0, var uParam1, int iParam2, bool bParam3)
{
	float fVar0;
	float fVar1;
	float fVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	if (func_799(func_7(), 1))
	{
		if (func_35())
		{
			*uParam0 = (func_365() * Local_102.f_34);
			*uParam1 = (func_364() * Local_102.f_34);
		}
		else
		{
			*uParam0 = (func_363() * Local_102.f_34);
			*uParam1 = (func_362() * Local_102.f_34);
		}
	}
	else if (func_104(1))
	{
		if (func_176())
		{
			iVar4 = (func_178(iParam2, bParam3) - Local_103[unk_0x59E2AD1A8ACEDA31() /*4*/].f_2);
		}
		else
		{
			iVar5 = unk_0x653D75F1BBF766B3(func_177());
			if (iVar5 != -1)
			{
				iVar4 = (func_178(iParam2, bParam3) - Local_103[iVar5 /*4*/].f_2);
			}
		}
		if (func_35())
		{
			*uParam0 = (func_365() * func_178(iParam2, bParam3));
			*uParam1 = (func_364() * func_178(1, 0));
			iVar3 = (func_365() * iVar4);
			*uParam0 = (*uParam0 - iVar3);
		}
		else
		{
			*uParam0 = (func_363() * func_178(iParam2, bParam3));
			*uParam1 = (func_362() * func_178(1, 0));
			iVar3 = (func_365() * iVar4);
			*uParam0 = (*uParam0 - iVar3);
		}
		fVar0 = (to_float(*uParam0) * Global_262145.f_12405);
		fVar1 = (to_float(*uParam1) * Global_262145.f_12404);
		fVar2 = (to_float(iVar3) * Global_262145.f_12405);
		*uParam0 = round(fVar0);
		*uParam1 = round(fVar1);
		iVar3 = round(fVar2);
		if (func_361() > 0)
		{
			func_173(&iVar3, 0);
		}
		*uParam0 = (*uParam0 + iVar3);
	}
	else
	{
		if (func_35())
		{
			*uParam0 = (func_365() * func_178(0, 0));
			*uParam1 = (func_364() * func_178(0, 0));
		}
		else
		{
			*uParam0 = (func_363() * func_178(0, 0));
			*uParam1 = (func_362() * func_178(0, 0));
		}
		fVar0 = ((to_float(*uParam0) * Global_262145.f_12407) * Global_262145.f_12486);
		fVar1 = ((to_float(*uParam1) * Global_262145.f_12406) * Global_262145.f_12487);
		*uParam0 = round(fVar0);
		*uParam1 = round(fVar1);
	}
}

int func_361()
{
	if (func_177() == func_40())
	{
		return 0;
	}
	return func_39(func_177());
}

int func_362()
{
	return Global_262145.f_12481;
}

int func_363()
{
	return Global_262145.f_12479;
}

int func_364()
{
	return Global_262145.f_12482;
}

int func_365()
{
	return Global_262145.f_12480;
}

int func_366()
{
	return 0;
}

void func_367()
{
	char* sVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	int iVar4;
	int iVar5;
	var uVar6;
	
	if (func_397())
	{
		unk_0xBE20AB8238688965(&iLocal_84, 11);
	}
	if (func_113())
	{
		func_106();
	}
	if (unk_0xCE990E643CD9D0E5(iLocal_84, 11))
	{
		return;
	}
	if (func_104(1))
	{
		sVar0 = func_396();
		iVar1 = func_62(unk_0x460153A63B9477BC(), -2, 0, 0, 0);
	}
	if (func_799(func_7(), 1))
	{
		if (Local_102.f_34 != -1)
		{
			if (unk_0xCE990E643CD9D0E5(Local_102.f_1, 22))
			{
				func_360(&iVar2, &uVar3, 0, 0);
				if (Local_102.f_34 == 1)
				{
					func_394(87, "GB_WINNER", "GB_BB_SS_DEL1", sVar0, iVar1, 0, iVar2, -1, -1, 2, -1);
				}
				else if (Local_102.f_34 > 1)
				{
					func_394(87, "GB_WINNER", "GB_BB_SS_DEL", sVar0, iVar1, 0, Local_102.f_34, iVar2, -1, 2, -1);
				}
				else if (Local_102.f_34 == 0)
				{
					if (Local_102.f_35 != func_14())
					{
						if (func_14() > 1)
						{
							func_394(88, "GB_WORK_OVER", "GB_BB_SS_DELL", sVar0, iVar1, 0, -1, -1, -1, 2, -1);
						}
						else
						{
							func_394(88, "GB_WORK_OVER", "GB_BB_SS_DELL1", sVar0, iVar1, 0, -1, -1, -1, 2, -1);
						}
					}
					else if (Local_102.f_35 == func_14())
					{
						if (func_14() > 1)
						{
							func_393(88, "GB_WORK_OVER", "GB_BB_SS_DEST", 1, -1, 2, 1, 0);
						}
						else
						{
							func_393(88, "GB_WORK_OVER", "GB_BB_SS_DEST1", 1, -1, 2, 1, 0);
						}
					}
				}
			}
			unk_0xBE20AB8238688965(&iLocal_84, 11);
		}
	}
	else
	{
		if (unk_0xCE990E643CD9D0E5(Local_102.f_1, 22) || unk_0xCE990E643CD9D0E5(Local_102.f_1, 16))
		{
			iVar4 = func_178(1, 0);
			func_360(&iVar5, &uVar6, 1, 0);
			if (iVar4 == 1)
			{
				if (func_104(1))
				{
					func_394(91, "GB_WORK_OVER", "GB_BB_SS_DES1", sVar0, iVar1, 0, iVar5, -1, -1, 2, -1);
				}
				else
				{
					func_374(91, iVar5, -1, "GB_BB_SS_SDES1", 1, -1, 2, "GB_WORK_OVER", 0);
				}
			}
			else if (iVar4 > 1)
			{
				if (func_104(1))
				{
					func_394(91, "GB_WORK_OVER", "GB_BB_SS_DES", sVar0, iVar1, 0, iVar4, iVar5, -1, 2, -1);
				}
				else
				{
					func_374(91, iVar4, iVar5, "GB_BB_SS_SDES", 1, -1, 2, "GB_WORK_OVER", 0);
				}
			}
			else if (iVar4 == 0)
			{
				if (Local_102.f_35 == 0)
				{
					if (Local_102.f_34 != func_14())
					{
						if (func_104(1))
						{
							if (func_14() > 1)
							{
								func_394(91, "GB_WORK_OVER", "GB_BB_SS_DESL", sVar0, iVar1, 0, -1, -1, -1, 2, -1);
							}
							else
							{
								func_394(91, "GB_WORK_OVER", "GB_BB_SS_DESL1", sVar0, iVar1, 0, -1, -1, -1, 2, -1);
							}
						}
						else if (func_14() > 1)
						{
							func_393(88, "GB_WORK_OVER", "GB_BB_SS_SDESL", 1, -1, 2, 1, 0);
						}
						else
						{
							func_393(88, "GB_WORK_OVER", "GB_BB_SS_SDESL1", 1, -1, 2, 1, 0);
						}
					}
					else if (Local_102.f_34 == func_14())
					{
						sVar0 = func_368(func_7());
						iVar1 = func_62(func_7(), -2, 0, 0, 0);
						if (func_14() > 1)
						{
							func_394(88, "GB_WORK_OVER", "GB_BB_SS_DELIV", sVar0, iVar1, 0, -1, -1, -1, 2, -1);
						}
						else
						{
							func_394(88, "GB_WORK_OVER", "GB_BB_SS_DELIV1", sVar0, iVar1, 0, -1, -1, -1, 2, -1);
						}
					}
				}
				else if (Local_102.f_35 == func_14())
				{
					if (func_14() > 1)
					{
						func_393(88, "GB_WORK_OVER", "GB_BB_SS_DEST", 1, -1, 2, 1, 0);
					}
					else
					{
						func_393(88, "GB_WORK_OVER", "GB_BB_SS_DEST1", 1, -1, 2, 1, 0);
					}
				}
				else if (func_104(1))
				{
					if (func_14() > 1)
					{
						func_394(91, "GB_WORK_OVER", "GB_BB_SS_DESL", sVar0, iVar1, 0, -1, -1, -1, 2, -1);
					}
					else
					{
						func_394(91, "GB_WORK_OVER", "GB_BB_SS_DESL1", sVar0, iVar1, 0, -1, -1, -1, 2, -1);
					}
				}
				else if (func_14() > 1)
				{
					func_393(88, "GB_WORK_OVER", "GB_BB_SS_SDESL", 1, -1, 2, 1, 0);
				}
				else
				{
					func_393(88, "GB_WORK_OVER", "GB_BB_SS_SDESL1", 1, -1, 2, 1, 0);
				}
			}
		}
		else if (unk_0xCE990E643CD9D0E5(Local_102.f_1, 18))
		{
			func_393(88, "GB_WORK_OVER", "GB_BB_SS_FLEFT", 1, -1, 2, 1, 0);
		}
		func_105();
		unk_0xBE20AB8238688965(&iLocal_84, 11);
	}
}

char* func_368(int iParam0)
{
	char* sVar0;
	int iVar1;
	
	if (iParam0 == unk_0x460153A63B9477BC())
	{
		sVar0 = func_373(&(Global_1630317[iParam0 /*595*/].f_11.f_104));
		return sVar0;
	}
	if (Global_1630317[iParam0 /*595*/].f_11.f_120 != Global_1630317[unk_0x460153A63B9477BC() /*595*/].f_11.f_120)
	{
		sVar0 = func_371(iParam0, 0);
		return sVar0;
	}
	if (((func_135(iParam0, 28) || func_135(unk_0x460153A63B9477BC(), 28)) || func_370(iParam0)) && !func_369(iParam0))
	{
		return func_371(iParam0, 0);
	}
	iVar1 = func_41(iParam0);
	if (iVar1 != func_40())
	{
		if (iVar1 != unk_0x460153A63B9477BC())
		{
			if (!unk_0xC6C08C02733D02C8() && !unk_0xB454B9D1010ED3BA(0, -1, 1))
			{
				return func_371(iVar1, 0);
			}
		}
	}
	if (iVar1 != func_40())
	{
		sVar0 = func_373(&(Global_1630317[iVar1 /*595*/].f_11.f_104));
		if (unk_0x7BCC91F3C1CF24E8(sVar0))
		{
			return func_371(iVar1, 0);
		}
		else
		{
			return sVar0;
		}
	}
	return "";
}

int func_369(int iParam0)
{
	struct<13> Var0;
	
	Var0 = { func_253(iParam0) };
	if (unk_0xC6C08C02733D02C8())
	{
		if (unk_0xF9A94F315B890564(0))
		{
			if (unk_0xA20DDBBB15EC6235(&Var0))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_370(int iParam0)
{
	struct<13> Var0;
	
	if (iParam0 != func_40())
	{
		Var0 = { func_253(iParam0) };
		if (unk_0xDCA0815D900F27F8() || unk_0xF8EDFF98A9C94C74())
		{
			if (unk_0xF9A94F315B890564(0))
			{
				return 0;
			}
		}
		else if (unk_0xC6C08C02733D02C8())
		{
			if (unk_0xF9A94F315B890564(0))
			{
				if (unk_0xA20DDBBB15EC6235(&Var0))
				{
					return 0;
				}
			}
		}
	}
	return 1;
}

char* func_371(int iParam0, bool bParam1)
{
	if (!bParam1)
	{
		if (func_128(iParam0, 1))
		{
			return func_372();
		}
	}
	return unk_0x7C774D8CB8DC6FE3("GB_REST_ACC");
}

char* func_372()
{
	return unk_0x7C774D8CB8DC6FE3("GB_REST_ACCM");
}

var func_373(var uParam0)
{
	return uParam0;
}

int func_374(int iParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5, int iParam6, char* sParam7, char* sParam8)
{
	struct<80> Var0;
	
	Var0.f_3 = -1;
	Var0.f_4 = -1;
	Var0.f_5 = -1;
	Var0.f_6 = -1;
	Var0.f_7 = -1082130432;
	Var0.f_16 = 1;
	Var0.f_71 = 1;
	Var0.f_72 = 2;
	Var0.f_79 = -1;
	func_392(iParam0, &Var0, iParam1, sParam3, sParam7);
	Var0.f_4 = iParam2;
	Var0.f_71 = iParam4;
	Var0.f_6 = iParam5;
	Var0.f_72 = iParam6;
	StringCopy(&(Var0.f_57), sParam8, 16);
	return func_375(&Var0);
}

int func_375(var uParam0)
{
	int iVar0;
	
	if (uParam0->f_1 == 1)
	{
		if (Global_2440049.f_3156)
		{
			return 0;
		}
	}
	func_391(uParam0, uParam0->f_17);
	func_388(uParam0);
	if (func_86())
	{
		func_388(uParam0);
	}
	if (func_387(uParam0->f_1))
	{
		func_380();
		if (Global_2440049.f_2834[0 /*80*/].f_2 == 0)
		{
			Global_2440049.f_2834[0 /*80*/] = { *uParam0 };
			if (func_379(uParam0->f_69, 8192))
			{
				Global_1663777 = 1;
			}
			return 1;
		}
		if (((Global_2440049.f_2834[0 /*80*/].f_1 == 13 || Global_2440049.f_2834[0 /*80*/].f_1 == 53) || Global_2440049.f_2834[0 /*80*/].f_1 == 54) || Global_2440049.f_2834[0 /*80*/].f_1 == 58)
		{
			Global_2440049.f_2834[0 /*80*/].f_2 = 5;
		}
		iVar0 = 2;
		while (iVar0 >= 1)
		{
			Global_2440049.f_2834[iVar0 + 1 /*80*/] = { Global_2440049.f_2834[iVar0 /*80*/] };
			iVar0 = (iVar0 + -1);
		}
		Global_2440049.f_2834[1 /*80*/] = { *uParam0 };
		return 1;
	}
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (Global_2440049.f_2834[iVar0 /*80*/].f_2 == 0)
		{
			Global_2440049.f_2834[iVar0 /*80*/] = { *uParam0 };
			if (iVar0 == 0)
			{
				func_380();
			}
			return 1;
		}
		else
		{
			if (uParam0->f_1 == 1)
			{
				func_377(&(Global_2440049.f_2834[iVar0 /*80*/].f_69), 2);
				Global_2440049.f_2834[iVar0 /*80*/].f_2 = 5;
			}
			if (uParam0->f_1 == 86 && !func_379(uParam0->f_69, 128))
			{
				if (func_376(Global_2440049.f_2834[iVar0 /*80*/].f_1))
				{
					Global_2440049.f_2834[iVar0 /*80*/].f_2 = 5;
					func_377(&(Global_2440049.f_2834[iVar0 /*80*/].f_69), 1);
				}
			}
		}
		iVar0++;
	}
	return 0;
}

int func_376(int iParam0)
{
	switch (iParam0)
	{
		case 88:
		case 87:
		case 91:
		case 92:
		case 86:
		case 93:
		case 94:
		case 95:
		case 96:
		case 97:
		case 98:
		case 99:
		case 89:
		case 100:
		case 101:
		case 102:
		case 103:
		case 90:
		case 110:
			return 1;
		
		default:
	}
	return 0;
}

void func_377(var uParam0, int iParam1)
{
	func_378(uParam0, iParam1);
}

void func_378(var uParam0, var uParam1)
{
	*uParam0 = (*uParam0 || uParam1);
}

bool func_379(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

void func_380()
{
	bool bVar0;
	
	if (Global_2440049.f_3157)
	{
		return;
	}
	if (!Global_77101)
	{
		Global_77101 = 1;
		bVar0 = true;
	}
	func_381();
	if (bVar0)
	{
		Global_77101 = 0;
	}
}

void func_381()
{
	Global_2440049.f_3158 = 0;
	Global_2440049.f_3158.f_578 = 0;
	func_385(&(Global_2440049.f_3158.f_1));
	Global_2440049.f_3158.f_1.f_1 = 0;
	func_382(&(Global_2440049.f_3158.f_1), 1);
}

void func_382(var uParam0, int iParam1)
{
	if (uParam0->f_1 != 0)
	{
		unk_0x2E352DDBBF674246(&(uParam0->f_1));
		uParam0->f_1 = 0;
	}
	if ((uParam0->f_562 || iParam1) && uParam0->f_4 != 0)
	{
		if (unk_0xF8EDFF98A9C94C74())
		{
			unk_0x830F007E19C63E14(uParam0->f_4, "TOGGLE_MOUSE_BUTTONS");
			unk_0xF1B28F753235CE2A(false);
			unk_0xE1FDD153F5858534();
		}
		unk_0x2E352DDBBF674246(&(uParam0->f_4));
		uParam0->f_4 = 0;
	}
	if (uParam0->f_564)
	{
		unk_0xFF8E7A064055ECA6(false);
		uParam0->f_564 = 0;
	}
	if (!Global_77101)
	{
		if (!unk_0x252C34B7867FDDFA(unk_0x2639A2323BEA8CC6()))
		{
			if (!Global_77102)
			{
				if (unk_0x03DB5C6AABF8DA46() && !func_384(0))
				{
					unk_0xFD45D90342D2A0CD(800);
				}
			}
		}
	}
	func_383(0);
}

void func_383(int iParam0)
{
	Global_77093 = iParam0;
	Global_77094 = iParam0;
}

bool func_384(bool bParam0)
{
	if (!bParam0 && unk_0x7B70881748D166CD(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return unk_0xCE990E643CD9D0E5(Global_77081, 0);
}

void func_385(var uParam0)
{
	func_386(uParam0);
	uParam0->f_570 = 0;
	uParam0->f_31 = 0;
	uParam0->f_56 = 0;
	uParam0->f_567 = 0;
	uParam0->f_569 = 0;
}

void func_386(var uParam0)
{
	uParam0->f_547 = 1f;
	uParam0->f_546 = 0;
	uParam0->f_568 = 0f;
	uParam0->f_558 = 0;
	uParam0->f_30 = 0f;
	uParam0->f_548 = 0f;
	uParam0->f_559 = 0f;
	uParam0->f_560 = 0f;
	uParam0->f_545 = 0;
	uParam0->f_563 = 0;
	uParam0->f_572 = 0;
	uParam0->f_564 = 0;
	uParam0->f_565 = 0;
	uParam0->f_566 = 0;
	*uParam0 = 0.1125f;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
	uParam0->f_574 = 0;
	uParam0->f_575 = 0;
	uParam0->f_573 = 1f;
}

int func_387(int iParam0)
{
	if (((((((((((((((((((((((iParam0 == 3 || iParam0 == 4) || iParam0 == 5) || iParam0 == 6) || iParam0 == 11) || iParam0 == 12) || iParam0 == 28) || iParam0 == 29) || iParam0 == 30) || iParam0 == 24) || iParam0 == 32) || iParam0 == 31) || iParam0 == 26) || iParam0 == 25) || iParam0 == 56) || iParam0 == 7) || iParam0 == 8) || iParam0 == 9) || iParam0 == 10) || iParam0 == 104) || iParam0 == 100) || iParam0 == 103) || iParam0 == 105) || iParam0 == 110)
	{
		return 1;
	}
	return 0;
}

void func_388(var uParam0)
{
	if (func_390(uParam0->f_1))
	{
		uParam0->f_72 = func_389();
	}
}

int func_389()
{
	return 21;
}

int func_390(int iParam0)
{
	switch (iParam0)
	{
		case 63:
		case 64:
		case 65:
		case 66:
		case 67:
		case 68:
		case 69:
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
		case 81:
		case 82:
		case 83:
			return 1;
		
		default:
	}
	return 0;
}

void func_391(var uParam0, int iParam1)
{
	if (func_390(uParam0->f_1))
	{
		uParam0->f_73 = 1;
	}
	if (iParam1 == func_40() || !func_6(iParam1, 0, 1))
	{
		return;
	}
	if (func_376(uParam0->f_1))
	{
		if (uParam0->f_71 == 1)
		{
			uParam0->f_73 = func_62(iParam1, -2, 0, 0, 0);
		}
	}
}

void func_392(var uParam0, var uParam1, int iParam2, char* sParam3, char* sParam4)
{
	uParam1->f_17 = func_40();
	uParam1->f_18 = func_40();
	uParam1->f_19 = func_40();
	uParam1->f_20 = func_40();
	uParam1->f_1 = uParam0;
	uParam1->f_2 = 1;
	StringCopy(&(uParam1->f_21), sParam4, 16);
	StringCopy(&(uParam1->f_8), sParam3, 32);
	uParam1->f_16 = 1;
	uParam1->f_3 = iParam2;
	uParam1->f_71 = 1;
	uParam1->f_74 = 1;
	uParam1->f_75 = 1;
	uParam1->f_76 = 0;
	uParam1->f_77 = 0;
	uParam1->f_73 = 0;
	StringCopy(&(uParam1->f_25), "", 64);
	StringCopy(&(uParam1->f_41), "", 64);
}

int func_393(int iParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7)
{
	struct<80> Var0;
	
	Var0.f_3 = -1;
	Var0.f_4 = -1;
	Var0.f_5 = -1;
	Var0.f_6 = -1;
	Var0.f_7 = -1082130432;
	Var0.f_16 = 1;
	Var0.f_71 = 1;
	Var0.f_72 = 2;
	Var0.f_79 = -1;
	func_392(iParam0, &Var0, -1, sParam2, sParam1);
	Var0.f_71 = iParam3;
	Var0.f_6 = iParam4;
	Var0.f_72 = iParam5;
	Var0.f_16 = iParam6;
	if (iParam7 != 0)
	{
		func_377(&(Var0.f_69), iParam7);
	}
	return func_375(&Var0);
}

int func_394(int iParam0, char* sParam1, char* sParam2, char* sParam3, int iParam4, char* sParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = func_40();
	iVar1 = func_40();
	iVar2 = func_40();
	return func_395(iParam0, sParam1, sParam2, sParam3, iParam4, iVar0, iVar1, iVar2, sParam5, iParam6, iParam7, iParam8, iParam9, iParam10, 2);
}

int func_395(var uParam0, char* sParam1, char* sParam2, char* sParam3, var uParam4, int iParam5, int iParam6, int iParam7, char* sParam8, int iParam9, var uParam10, var uParam11, var uParam12, var uParam13, int iParam14)
{
	struct<80> Var0;
	
	Var0.f_3 = -1;
	Var0.f_4 = -1;
	Var0.f_5 = -1;
	Var0.f_6 = -1;
	Var0.f_7 = -1082130432;
	Var0.f_16 = 1;
	Var0.f_71 = 1;
	Var0.f_72 = 2;
	Var0.f_79 = -1;
	func_392(uParam0, &Var0, iParam9, sParam2, sParam1);
	Var0.f_4 = uParam10;
	Var0.f_5 = uParam11;
	Var0.f_17 = iParam5;
	Var0.f_18 = iParam6;
	Var0.f_19 = iParam7;
	StringCopy(&(Var0.f_25), sParam3, 64);
	StringCopy(&(Var0.f_57), sParam8, 16);
	Var0.f_73 = uParam4;
	Var0.f_71 = uParam4;
	Var0.f_6 = uParam13;
	Var0.f_72 = uParam12;
	if (iParam14 != 2)
	{
		Var0.f_71 = iParam14;
	}
	func_377(&(Var0.f_69), 4);
	return func_375(&Var0);
}

char* func_396()
{
	int iVar0;
	char* sVar1;
	
	iVar0 = func_41(unk_0x460153A63B9477BC());
	if (iVar0 != func_40())
	{
		if (iVar0 != unk_0x460153A63B9477BC())
		{
			if (((func_135(iVar0, 28) || func_135(unk_0x460153A63B9477BC(), 28)) || func_370(iVar0)) && !func_369(iVar0))
			{
				return func_371(iVar0, 0);
			}
			if (!unk_0xC6C08C02733D02C8() && !unk_0xB454B9D1010ED3BA(0, -1, 1))
			{
				return func_371(iVar0, 0);
			}
		}
		sVar1 = func_373(&(Global_1630317[iVar0 /*595*/].f_11.f_104));
		if (unk_0x7BCC91F3C1CF24E8(sVar1))
		{
			return func_371(iVar0, 0);
		}
		else
		{
			return sVar1;
		}
	}
	return "";
}

int func_397()
{
	if ((!func_398(1, 1, 1, 0) || func_801()) || func_141(unk_0x460153A63B9477BC()) == 0)
	{
		return 1;
	}
	return 0;
}

int func_398(bool bParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (func_448(unk_0x460153A63B9477BC(), 29))
	{
		return 0;
	}
	if (func_149(unk_0x460153A63B9477BC(), 21))
	{
		return 0;
	}
	if (func_149(unk_0x460153A63B9477BC(), 25))
	{
		return 0;
	}
	if (bParam2)
	{
		if (unk_0xD0E70037A973A810())
		{
			return 0;
		}
	}
	if (!func_447(unk_0x460153A63B9477BC()))
	{
		return 0;
	}
	if (bParam0)
	{
		if (unk_0x450A8984AFF05042())
		{
			return 0;
		}
	}
	if (func_445(unk_0x460153A63B9477BC()))
	{
		return 0;
	}
	if (func_444())
	{
		return 0;
	}
	if (func_443())
	{
		return 0;
	}
	if (func_442())
	{
		return 0;
	}
	if (func_441())
	{
		return 0;
	}
	if (unk_0xFC559366953F62B3())
	{
		return 0;
	}
	if (func_439(unk_0x460153A63B9477BC()))
	{
		return 0;
	}
	if (!func_437())
	{
		return 0;
	}
	if (func_149(unk_0x460153A63B9477BC(), 0) || func_149(unk_0x460153A63B9477BC(), 3))
	{
		return 0;
	}
	if ((func_149(unk_0x460153A63B9477BC(), 12) || func_149(unk_0x460153A63B9477BC(), 14)) || func_149(unk_0x460153A63B9477BC(), 13))
	{
		return 0;
	}
	if (func_431(unk_0x460153A63B9477BC(), 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0))
	{
		if (!func_408())
		{
			return 0;
		}
	}
	if (bParam1)
	{
		if (func_407())
		{
			return 0;
		}
	}
	if (Global_1663771)
	{
		return 0;
	}
	if (func_406(unk_0x460153A63B9477BC()))
	{
		return 0;
	}
	if (func_405())
	{
		return 0;
	}
	if (func_404(unk_0x460153A63B9477BC()))
	{
		return 0;
	}
	if ((func_403(unk_0x460153A63B9477BC()) && func_55(unk_0x460153A63B9477BC()) == 123) && !bParam3)
	{
		return 0;
	}
	if (func_402())
	{
		return 0;
	}
	if (unk_0xCE990E643CD9D0E5(Global_1590682[unk_0x460153A63B9477BC() /*883*/].f_274.f_26, 4))
	{
		return 0;
	}
	if (func_401(unk_0x460153A63B9477BC()))
	{
		return 0;
	}
	if (func_400(unk_0x460153A63B9477BC()))
	{
		return 0;
	}
	if (!func_155(unk_0x460153A63B9477BC()))
	{
		if (func_399(unk_0x460153A63B9477BC()))
		{
			return 0;
		}
	}
	if (func_51())
	{
		return 0;
	}
	return 1;
}

int func_399(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return Global_1627436[iVar0 /*90*/].f_77.f_12 != 0;
	}
	return 0;
}

int func_400(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (!unk_0x25DDB354A40FFCDB())
	{
		return 0;
	}
	if (iParam0 == unk_0x460153A63B9477BC())
	{
		return Global_2515846;
	}
	else
	{
		iVar0 = unk_0x1FA7B77001D60F9D(iParam0);
		if (unk_0xAE06B9E39EBDE049(iVar0))
		{
			iVar1 = unk_0x36FE6D3220816ADA(iVar0);
			if (iVar1 == joaat("mp_m_freemode_01") || iVar1 == joaat("mp_f_freemode_01"))
			{
				return 0;
			}
			else
			{
				return 1;
			}
		}
		else
		{
			return 0;
		}
	}
	return 0;
}

int func_401(int iParam0)
{
	if (Global_2425869[iParam0 /*443*/].f_265.f_4 != 0 || Global_2425869[iParam0 /*443*/].f_265.f_5)
	{
		return 1;
	}
	return 0;
}

bool func_402()
{
	return Global_1678288.f_4347 != -1;
}

int func_403(int iParam0)
{
	if (iParam0 != func_40() && func_6(iParam0, 1, 1))
	{
		return unk_0xCE990E643CD9D0E5(Global_2425869[iParam0 /*443*/].f_314, 3);
	}
	return 0;
}

int func_404(int iParam0)
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

int func_405()
{
	if (Global_4254512.f_943 > -1)
	{
		return 1;
	}
	return 0;
}

int func_406(int iParam0)
{
	if (!func_6(iParam0, 0, 1))
	{
		return 0;
	}
	return Global_1590682[iParam0 /*883*/].f_35;
}

bool func_407()
{
	return Global_99007.f_352 > 0;
}

int func_408()
{
	int iVar0;
	
	iVar0 = func_102(unk_0x460153A63B9477BC());
	if (((func_430(Global_1590682[unk_0x460153A63B9477BC() /*883*/].f_274.f_28) || func_429(unk_0x460153A63B9477BC())) || func_428(unk_0x460153A63B9477BC())) || func_423(unk_0x460153A63B9477BC()))
	{
		if (((iVar0 == 167 || iVar0 == 168) || iVar0 == 178) || iVar0 == 188)
		{
			return 1;
		}
	}
	if (func_421(unk_0x460153A63B9477BC()))
	{
		if (func_201(iVar0) || func_420(iVar0))
		{
			return 1;
		}
	}
	if (func_140(unk_0x460153A63B9477BC()))
	{
		if (func_420(iVar0))
		{
			return 1;
		}
	}
	if (func_419(unk_0x460153A63B9477BC()))
	{
		if (func_192(iVar0))
		{
			return 1;
		}
	}
	if (func_418(unk_0x460153A63B9477BC()))
	{
		if (func_191(iVar0))
		{
			return 1;
		}
	}
	if (func_417(unk_0x460153A63B9477BC()))
	{
		if (func_190(iVar0))
		{
			return 1;
		}
	}
	if (func_416(unk_0x460153A63B9477BC()))
	{
		if (func_415(iVar0))
		{
			return 1;
		}
	}
	if (func_414(unk_0x460153A63B9477BC(), 0))
	{
		if (func_413(iVar0))
		{
			if (func_57(unk_0x460153A63B9477BC()))
			{
				return 1;
			}
		}
	}
	if (func_412(unk_0x460153A63B9477BC()))
	{
		if (func_183(iVar0))
		{
			return 1;
		}
		if (func_182(iVar0))
		{
			return 1;
		}
		if (func_411())
		{
			return 1;
		}
	}
	if (func_410(unk_0x460153A63B9477BC()))
	{
		if (func_409())
		{
			return 1;
		}
	}
	return 0;
}

bool func_409()
{
	return Global_2540384.f_6663;
}

int func_410(int iParam0)
{
	if (iParam0 != func_40())
	{
		if (func_6(iParam0, 1, 1))
		{
			if (Global_2425869[iParam0 /*443*/].f_314.f_6 != -1)
			{
				return func_54(Global_2425869[iParam0 /*443*/].f_314.f_6) == 16;
			}
		}
	}
	return 0;
}

bool func_411()
{
	return Global_2540384.f_6662;
}

int func_412(int iParam0)
{
	if (iParam0 != func_40())
	{
		if (func_6(iParam0, 1, 1))
		{
			if (Global_2425869[iParam0 /*443*/].f_314.f_6 != -1)
			{
				return func_54(Global_2425869[iParam0 /*443*/].f_314.f_6) == 14;
			}
		}
	}
	return 0;
}

int func_413(int iParam0)
{
	switch (iParam0)
	{
		case 241:
		case 248:
		case 242:
		case 244:
		case 240:
		case 239:
			return 1;
		
		default:
	}
	return 0;
}

int func_414(int iParam0, bool bParam1)
{
	int iVar0;
	
	if (bParam1)
	{
		if (unk_0x47DBF174A0CB9D55(unk_0x9B0761B4C3EB8BC7(), false))
		{
			iVar0 = unk_0xA5D5B1042E8F47BD(unk_0x9B0761B4C3EB8BC7(), false);
			if (unk_0x36FE6D3220816ADA(iVar0) == joaat("terbyte"))
			{
				return 1;
			}
		}
	}
	if (iParam0 != func_40())
	{
		if (func_6(iParam0, 1, 1))
		{
			if (Global_2425869[iParam0 /*443*/].f_314.f_6 != -1 && Global_2425869[iParam0 /*443*/].f_314.f_9 != func_40())
			{
				return func_54(Global_2425869[iParam0 /*443*/].f_314.f_6) == 12;
			}
		}
	}
	return 0;
}

int func_415(int iParam0)
{
	switch (iParam0)
	{
		case 237:
		case 238:
		case 249:
		case 250:
			return 1;
		
		default:
	}
	return 0;
}

int func_416(int iParam0)
{
	if (iParam0 != func_40())
	{
		if (func_6(iParam0, 1, 1))
		{
			if (Global_2425869[iParam0 /*443*/].f_314.f_6 != -1)
			{
				return func_54(Global_2425869[iParam0 /*443*/].f_314.f_6) == 11;
			}
		}
	}
	return 0;
}

int func_417(int iParam0)
{
	if (iParam0 != func_40())
	{
		if (func_6(iParam0, 1, 1))
		{
			if (Global_2425869[iParam0 /*443*/].f_314.f_6 != -1)
			{
				return func_54(Global_2425869[iParam0 /*443*/].f_314.f_6) == 9;
			}
		}
	}
	return 0;
}

int func_418(int iParam0)
{
	if (iParam0 != func_40())
	{
		if (func_6(iParam0, 1, 1))
		{
			if (Global_2425869[iParam0 /*443*/].f_314.f_6 != -1)
			{
				return func_54(Global_2425869[iParam0 /*443*/].f_314.f_6) == 7;
			}
		}
	}
	return 0;
}

int func_419(int iParam0)
{
	if (iParam0 != func_40())
	{
		if (func_6(iParam0, 1, 1))
		{
			if (Global_2425869[iParam0 /*443*/].f_314.f_6 != -1)
			{
				return func_54(Global_2425869[iParam0 /*443*/].f_314.f_6) == 4;
			}
		}
	}
	return 0;
}

int func_420(int iParam0)
{
	switch (iParam0)
	{
		case 190:
		case 191:
		case 192:
			return 1;
		
		default:
	}
	return 0;
}

int func_421(int iParam0)
{
	if (func_422(Global_1590682[iParam0 /*883*/].f_274.f_28, -1))
	{
		return 1;
	}
	return 0;
}

int func_422(int iParam0, int iParam1)
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

int func_423(int iParam0)
{
	if (func_424(Global_1590682[iParam0 /*883*/].f_274.f_28, 0, 0))
	{
		return 1;
	}
	return 0;
}

int func_424(int iParam0, bool bParam1, bool bParam2)
{
	if (bParam2)
	{
		return func_425(unk_0x460153A63B9477BC(), 0);
	}
	if (bParam1)
	{
		if (func_425(unk_0x460153A63B9477BC(), 0))
		{
			return 0;
		}
		switch (iParam0)
		{
			case 103:
			case 106:
			case 109:
			case 112:
			case 104:
			case 107:
			case 110:
			case 113:
			case 105:
			case 108:
			case 111:
			case 114:
				return 1;
				break;
			}
	}
	switch (iParam0)
	{
		case 103:
		case 106:
		case 109:
		case 112:
		case 104:
		case 107:
		case 110:
		case 113:
		case 105:
		case 108:
		case 111:
		case 114:
			return 1;
			break;
	}
	return 0;
}

bool func_425(int iParam0, bool bParam1)
{
	if (Global_1590518 != func_40())
	{
		if (!func_427(Global_1590518))
		{
			return 0;
		}
		if (bParam1)
		{
			if (unk_0x460153A63B9477BC() != Global_1590518)
			{
				if (unk_0xCE990E643CD9D0E5(Global_2425869[Global_1590518 /*443*/].f_199, 24) || func_426(Global_1590518))
				{
					return 1;
				}
			}
		}
	}
	return unk_0xCE990E643CD9D0E5(Global_2425869[iParam0 /*443*/].f_199, 24);
}

int func_426(int iParam0)
{
	if (iParam0 != func_40())
	{
		return unk_0xCE990E643CD9D0E5(Global_2425869[iParam0 /*443*/].f_199, 9);
	}
	return 0;
}

int func_427(int iParam0)
{
	if (iParam0 != func_40())
	{
		return unk_0xCE990E643CD9D0E5(Global_1590682[iParam0 /*883*/].f_274.f_351, 2);
	}
	return 0;
}

int func_428(int iParam0)
{
	if (iParam0 != func_40())
	{
		if (func_6(iParam0, 1, 1))
		{
			if (Global_2425869[iParam0 /*443*/].f_314.f_6 != -1)
			{
				return func_54(Global_2425869[iParam0 /*443*/].f_314.f_6) == 1;
			}
		}
	}
	return 0;
}

int func_429(int iParam0)
{
	if (iParam0 != func_40())
	{
		if (func_6(iParam0, 1, 1))
		{
			if (Global_2425869[iParam0 /*443*/].f_314.f_6 != -1)
			{
				return func_54(Global_2425869[iParam0 /*443*/].f_314.f_6) == 0;
			}
		}
	}
	return 0;
}

int func_430(int iParam0)
{
	switch (iParam0)
	{
		case 87:
		case 88:
		case 89:
		case 90:
			return 1;
			break;
	}
	return 0;
}

int func_431(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9, bool bParam10, bool bParam11, bool bParam12, bool bParam13, bool bParam14, bool bParam15, bool bParam16)
{
	if (Global_1590682[iParam0 /*883*/].f_274.f_28 > 0)
	{
		if (bParam1)
		{
			if (unk_0xCE990E643CD9D0E5(Global_1590682[iParam0 /*883*/].f_274.f_26, 0))
			{
				return 1;
			}
		}
		else
		{
			return 1;
		}
	}
	if (!bParam2)
	{
		if (func_429(iParam0))
		{
			return 1;
		}
	}
	if (!bParam3)
	{
		if (func_140(iParam0))
		{
			return 1;
		}
	}
	if (!bParam4)
	{
		if (func_428(iParam0))
		{
			return 1;
		}
	}
	if (!bParam5)
	{
		if (func_419(iParam0))
		{
			return 1;
		}
	}
	if (!bParam6)
	{
		if (func_418(iParam0))
		{
			return 1;
		}
	}
	if (!bParam7)
	{
		if (func_417(iParam0))
		{
			return 1;
		}
	}
	if (!bParam8)
	{
		if (func_436(iParam0))
		{
			return 1;
		}
	}
	if (!bParam9)
	{
		if (func_416(iParam0))
		{
			return 1;
		}
	}
	if (!bParam10)
	{
		if (func_435(iParam0))
		{
			return 1;
		}
	}
	if (!bParam11)
	{
		if (func_414(iParam0, 0))
		{
			return 1;
		}
	}
	if (!bParam12)
	{
		if (func_434(iParam0))
		{
			return 1;
		}
	}
	if (!bParam13)
	{
		if (func_412(iParam0))
		{
			return 1;
		}
	}
	if (!bParam14)
	{
		if (func_433(iParam0))
		{
			return 1;
		}
	}
	if (!bParam15)
	{
		if (func_410(iParam0))
		{
			return 1;
		}
	}
	if (!bParam16)
	{
		if (func_432(iParam0))
		{
			return 1;
		}
	}
	return 0;
}

int func_432(int iParam0)
{
	if (iParam0 != func_40())
	{
		if (func_6(iParam0, 1, 1))
		{
			if (Global_2425869[iParam0 /*443*/].f_314.f_6 != -1)
			{
				return func_54(Global_2425869[iParam0 /*443*/].f_314.f_6) == 17;
			}
		}
	}
	return 0;
}

int func_433(int iParam0)
{
	if (iParam0 != func_40())
	{
		if (func_6(iParam0, 1, 1))
		{
			if (Global_2425869[iParam0 /*443*/].f_314.f_6 != -1)
			{
				return func_54(Global_2425869[iParam0 /*443*/].f_314.f_6) == 15;
			}
		}
	}
	return 0;
}

int func_434(int iParam0)
{
	if (iParam0 != func_40())
	{
		if (func_6(iParam0, 1, 1))
		{
			if (Global_2425869[iParam0 /*443*/].f_314.f_6 != -1)
			{
				return func_54(Global_2425869[iParam0 /*443*/].f_314.f_6) == 13;
			}
		}
	}
	return 0;
}

int func_435(int iParam0)
{
	if (iParam0 != func_40())
	{
		if (func_6(iParam0, 1, 1))
		{
			if (Global_2425869[iParam0 /*443*/].f_314.f_6 != -1)
			{
				return func_54(Global_2425869[iParam0 /*443*/].f_314.f_6) == 11;
			}
		}
	}
	return 0;
}

int func_436(int iParam0)
{
	if (iParam0 != func_40())
	{
		if (func_6(iParam0, 1, 1))
		{
			if (Global_2425869[iParam0 /*443*/].f_314.f_6 != -1 && Global_2425869[iParam0 /*443*/].f_314.f_9 != func_40())
			{
				return func_54(Global_2425869[iParam0 /*443*/].f_314.f_6) == 8;
			}
		}
	}
	return 0;
}

int func_437()
{
	if (func_438() == 0)
	{
		return 1;
	}
	return 0;
}

int func_438()
{
	return Global_1312485.f_18;
}

bool func_439(int iParam0)
{
	return func_440(iParam0);
}

bool func_440(int iParam0)
{
	return unk_0xCE990E643CD9D0E5(Global_1590682[iParam0 /*883*/].f_13.f_1, 0);
}

bool func_441()
{
	return Global_1590682[unk_0x460153A63B9477BC() /*883*/].f_196 != 0;
}

bool func_442()
{
	return Global_1312896;
}

bool func_443()
{
	return Global_1590682[unk_0x460153A63B9477BC() /*883*/] == 5;
}

bool func_444()
{
	return unk_0xCE990E643CD9D0E5(Global_1590682[unk_0x460153A63B9477BC() /*883*/].f_39.f_18, 0);
}

int func_445(int iParam0)
{
	if (func_446(iParam0, 1, 0))
	{
		if (Global_1590682[iParam0 /*883*/] != 6)
		{
			return 1;
		}
	}
	return 0;
}

int func_446(int iParam0, bool bParam1, bool bParam2)
{
	if (bParam1)
	{
		if (func_439(iParam0))
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

bool func_447(int iParam0)
{
	return unk_0xCE990E643CD9D0E5(Global_1590682[iParam0 /*883*/].f_142, 22);
}

bool func_448(int iParam0, int iParam1)
{
	return unk_0xCE990E643CD9D0E5(Global_1630317[iParam0 /*595*/].f_11.f_5, iParam1);
}

void func_449(int iParam0)
{
	if (iParam0 == iParam0)
	{
	}
	if (Global_1676114 != 0)
	{
		if (unk_0xCE990E643CD9D0E5(Global_1676114, 1))
		{
			if (func_176())
			{
				if (func_450(82, "GB_INTTXT_YA", 2, 0, 0, 0, 0, 1, 0, 1))
				{
					unk_0xD2459066EA58CE43(&Global_1676114, 1);
				}
			}
			else if (func_450(82, "GB_INTTXT_YA_2", 2, 0, 0, 0, 0, 1, 0, 1))
			{
				unk_0xD2459066EA58CE43(&Global_1676114, 1);
			}
		}
	}
}

int func_450(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7, int iParam8, int iParam9)
{
	int iVar0;
	char* sVar1;
	int iVar2;
	char* sVar3;
	int iVar4;
	char* sVar5;
	char* sVar6;
	int iVar7;
	
	unk_0xD2459066EA58CE43(&Global_7551, 10);
	iVar0 = 0;
	sVar1 = "NULL";
	iVar2 = -99;
	sVar3 = "NULL";
	iVar4 = 0;
	sVar5 = "NULL";
	sVar6 = "NULL";
	iVar7 = 3;
	if (func_452(iParam0, sParam1, iParam2, iVar0, sVar1, sVar3, iVar2, iParam3, iParam4, iParam5, bParam7, iParam8, iParam9, iVar4, sVar5, sVar6, iVar7) == 1)
	{
		if (bParam7 == 1)
		{
			Global_8258 = iParam6;
			Global_8161[3 /*6*/] = { func_451(iParam0) };
			Global_8238 = iParam0;
			unk_0xBE20AB8238688965(&Global_7551, 1);
			unk_0xBE20AB8238688965(&Global_7551, 7);
		}
		return 1;
	}
	return 0;
}

struct<4> func_451(int iParam0)
{
	return Global_1848[iParam0 /*29*/].f_3;
}

int func_452(int iParam0, char* sParam1, int iParam2, int iParam3, char* sParam4, char* sParam5, int iParam6, int iParam7, var uParam8, var uParam9, bool bParam10, var uParam11, var uParam12, int iParam13, char* sParam14, char* sParam15, int iParam16)
{
	int iVar0;
	
	if (iParam13 > 99)
	{
	}
	if (unk_0xF005CCA4263DF67F(sParam14, sParam15))
	{
	}
	func_465();
	iVar0 = 0;
	switch (iParam16)
	{
		case 0:
			if (Global_19681 == 0)
			{
				iVar0 = 0;
			}
			else
			{
				iVar0 = 1;
			}
			break;
		
		case 2:
			if (Global_19681 == 2)
			{
				iVar0 = 0;
			}
			else
			{
				iVar0 = 1;
			}
			break;
		
		case 1:
			if (Global_19681 == 1)
			{
				iVar0 = 0;
			}
			else
			{
				iVar0 = 1;
			}
			break;
		
		default:
			iVar0 = 0;
			break;
	}
	if (iVar0 == 0)
	{
		if (unk_0x5A228A6A51E757C8(unk_0x460153A63B9477BC()))
		{
			if (unk_0xE43E3F96A5D750CE(unk_0x9B0761B4C3EB8BC7()))
			{
				return 0;
			}
		}
		if (Global_111858.f_14047[Global_19681 /*20*/].f_17 == 1)
		{
			return 0;
		}
		if (unk_0x7B70881748D166CD(joaat("apptextmessage")) > 0)
		{
			return 0;
		}
		if (unk_0x7B70881748D166CD(joaat("apptextmessage")) > 0)
		{
			return 0;
		}
	}
	if (func_464() == 0)
	{
		func_462();
		return 0;
	}
	func_461(Global_22072);
	StringCopy(&(Global_111858.f_14137[Global_22072 /*104*/]), sParam1, 64);
	Global_111858.f_14137[Global_22072 /*104*/].f_17 = iParam0;
	if (iParam2 == 0)
	{
	}
	else
	{
		Global_111858.f_14137[Global_22072 /*104*/].f_24 = iParam2;
	}
	Global_111858.f_14137[Global_22072 /*104*/].f_25 = iParam7;
	Global_111858.f_14137[Global_22072 /*104*/].f_26 = uParam8;
	Global_111858.f_14137[Global_22072 /*104*/].f_29 = uParam9;
	Global_111858.f_14137[Global_22072 /*104*/].f_30 = uParam12;
	Global_111858.f_14137[Global_22072 /*104*/].f_31 = uParam11;
	Global_111858.f_14137[Global_22072 /*104*/].f_28 = 0;
	Global_111858.f_14137[Global_22072 /*104*/].f_32 = iParam3;
	StringCopy(&(Global_111858.f_14137[Global_22072 /*104*/].f_33), sParam4, 64);
	Global_111858.f_14137[Global_22072 /*104*/].f_49 = iParam6;
	StringCopy(&(Global_111858.f_14137[Global_22072 /*104*/].f_50), sParam5, 64);
	Global_111858.f_14137[Global_22072 /*104*/].f_66 = iParam13;
	StringCopy(&(Global_111858.f_14137[Global_22072 /*104*/].f_67), sParam14, 64);
	StringCopy(&(Global_111858.f_14137[Global_22072 /*104*/].f_83), sParam15, 64);
	if (unk_0xCE990E643CD9D0E5(Global_7551, 10))
	{
		Global_111858.f_14137[Global_22072 /*104*/].f_99[0] = 1;
		Global_111858.f_14137[Global_22072 /*104*/].f_99[1] = 1;
		Global_111858.f_14137[Global_22072 /*104*/].f_99[2] = 1;
		Global_8257 = 4;
		func_460(0);
		func_460(2);
		func_460(1);
	}
	else
	{
		func_465();
		switch (iParam16)
		{
			case 3:
				Global_111858.f_14137[Global_22072 /*104*/].f_99[Global_19681] = 1;
				break;
			
			case 0:
				Global_111858.f_14137[Global_22072 /*104*/].f_99[0] = 1;
				break;
			
			case 2:
				Global_111858.f_14137[Global_22072 /*104*/].f_99[2] = 1;
				break;
			
			case 1:
				Global_111858.f_14137[Global_22072 /*104*/].f_99[1] = 1;
				break;
		}
		if (iParam16 == 3)
		{
			switch (Global_19681)
			{
				case 0:
					func_460(0);
					Global_8257 = 0;
					break;
				
				case 1:
					func_460(1);
					Global_8257 = 1;
					break;
				
				case 2:
					func_460(2);
					Global_8257 = 2;
					break;
				
				case 3:
					func_460(3);
					Global_8257 = 3;
					break;
				
				default:
					Global_8257 = 4;
					break;
				}
			}
	}
	if (iParam7 == 1)
	{
		if (unk_0xCE990E643CD9D0E5(Global_7551, 10))
		{
			Global_111858.f_14047[0 /*20*/].f_17 = 1;
			Global_111858.f_14047[1 /*20*/].f_17 = 1;
			Global_111858.f_14047[2 /*20*/].f_17 = 1;
		}
		else
		{
			switch (iParam16)
			{
				case 3:
					Global_111858.f_14047[Global_19681 /*20*/].f_17 = 1;
					break;
				
				case 0:
					Global_111858.f_14047[0 /*20*/].f_17 = 1;
					break;
				
				case 2:
					Global_111858.f_14047[2 /*20*/].f_17 = 1;
					break;
				
				case 1:
					Global_111858.f_14047[1 /*20*/].f_17 = 1;
					break;
				}
			}
	}
	Global_22074[Global_22072] = 0;
	if (bParam10)
	{
		func_465();
		if (Global_19624)
		{
			StringCopy(&Global_19670, "Phone_SoundSet_Prologue", 24);
		}
		else
		{
			switch (Global_19681)
			{
				case 0:
					StringCopy(&Global_19670, "Phone_SoundSet_Michael", 24);
					break;
				
				case 2:
					StringCopy(&Global_19670, "Phone_SoundSet_Trevor", 24);
					break;
				
				case 1:
					StringCopy(&Global_19670, "Phone_SoundSet_Franklin", 24);
					break;
				
				default:
					StringCopy(&Global_19670, "Phone_SoundSet_Default", 24);
					break;
				}
		}
		if (!Global_8356[Global_19681 /*2811*/][0 /*281*/].f_259 == 1)
		{
			if (!func_442())
			{
				unk_0xC4CC25B68A91D144(-1, "Text_Arrive_Tone", &Global_19670, true);
			}
		}
	}
	if (!Global_19865)
	{
		if (Global_19681.f_1 == 6)
		{
			func_459(Global_19662, "SET_DATA_SLOT_EMPTY", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
			func_455(1);
			func_459(Global_19662, "DISPLAY_VIEW", 1f, to_float(Global_19661), -1082130432, -1082130432, -1082130432);
		}
	}
	func_453(iParam0, sParam1);
	return 1;
}

void func_453(int iParam0, char* sParam1)
{
	if (!func_454())
	{
		return;
	}
	unk_0x1A2DCF21E22955B0(iParam0, 1654525105, unk_0x856D5567211886A2(sParam1), 0);
}

int func_454()
{
	if (!Global_262145.f_28160)
	{
		return 0;
	}
	if (!Global_76833)
	{
		return 0;
	}
	if (unk_0x460153A63B9477BC() == func_40())
	{
		return 0;
	}
	if (func_155(unk_0x460153A63B9477BC()))
	{
		return 0;
	}
	if (unk_0xCE990E643CD9D0E5(Global_1630317[unk_0x460153A63B9477BC() /*595*/].f_1, 7))
	{
		return 0;
	}
	if (unk_0xFC559366953F62B3())
	{
		return 0;
	}
	return 1;
}

void func_455(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	
	Global_22073 = 0;
	Global_8156 = iParam0;
	iVar0 = 0;
	while (iVar0 < 9)
	{
		Global_8120[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 9)
	{
		iVar1 = 0;
		if (func_458(14))
		{
			while (iVar1 < 34)
			{
				if (iParam0 == Global_7558[iVar1 /*15*/].f_11)
				{
					if (iVar0 == Global_7558[iVar1 /*15*/].f_4)
					{
						if (Global_8120[iVar0] == 0)
						{
							Global_8084[iVar0] = iVar1;
							if (iVar1 == 3)
							{
								if (unk_0xCE990E643CD9D0E5(Global_7552, 3))
								{
									iVar2 = 42;
									Global_19868 = 1;
								}
								else
								{
									iVar2 = 255;
									Global_19868 = 0;
								}
								unk_0x830F007E19C63E14(Global_19662, "SET_DATA_SLOT");
								unk_0xAD291B8F75D737AD(1);
								unk_0xAD291B8F75D737AD(iVar0);
								unk_0xAD291B8F75D737AD(Global_7558[iVar1 /*15*/].f_10);
								unk_0xAD291B8F75D737AD(0);
								func_457(&(Global_7558[iVar1 /*15*/]));
								unk_0xAD291B8F75D737AD(iVar2);
								unk_0xE1FDD153F5858534();
							}
							if (Global_2462245)
							{
								if (iVar1 == 14)
								{
									func_456(Global_19662, "SET_DATA_SLOT", to_float(1), to_float(iVar0), to_float(Global_7558[iVar1 /*15*/].f_10), to_float(Global_22068), -1f, &(Global_7558[iVar1 /*15*/]), 0, 0, 0, 0);
								}
							}
							Global_8120[iVar0] = 1;
						}
					}
				}
				iVar1++;
			}
		}
		else
		{
			while (iVar1 < 34)
			{
				if (iParam0 == Global_7558[iVar1 /*15*/].f_11)
				{
					if (iVar0 == Global_7558[iVar1 /*15*/].f_4)
					{
						if (Global_8120[iVar0] == 0)
						{
							Global_8084[iVar0] = iVar1;
							if (iVar1 == 1)
							{
								iVar3 = 0;
								while (iVar3 < 35)
								{
									if (Global_111858.f_14137[iVar3 /*104*/].f_24 != 0)
									{
										if (Global_111858.f_14137[iVar3 /*104*/].f_28 == 0)
										{
											if (Global_111858.f_14137[iVar3 /*104*/].f_99[Global_19681] == 1)
											{
												Global_22073++;
											}
										}
									}
									iVar3++;
								}
								func_456(Global_19662, "SET_DATA_SLOT", to_float(1), to_float(iVar0), to_float(Global_7558[iVar1 /*15*/].f_10), to_float(Global_22073), -1f, &(Global_7558[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							else if (iVar1 == 7)
							{
								if (Global_76833)
								{
									iVar4 = 0;
									iVar4 = Global_4269758;
									iVar5 = 0;
									while (iVar5 < 12)
									{
										if (Global_4269759[iVar5 /*104*/].f_24 != 0)
										{
											if (Global_4269759[iVar5 /*104*/].f_28 == 0)
											{
												if (Global_4269759[iVar5 /*104*/].f_99[Global_19681] == 1)
												{
													iVar4++;
												}
											}
										}
										iVar5++;
									}
									func_456(Global_19662, "SET_DATA_SLOT", to_float(1), to_float(iVar0), to_float(Global_7558[iVar1 /*15*/].f_10), to_float(iVar4), -1f, &(Global_7558[iVar1 /*15*/]), 0, 0, 0, 0);
								}
								else
								{
									switch (Global_19681)
									{
										case 0:
											iVar6 = Global_42812;
											break;
										
										case 1:
											iVar6 = Global_42813;
											break;
										
										case 2:
											iVar6 = Global_42814;
											break;
										
										default:
											break;
									}
									func_456(Global_19662, "SET_DATA_SLOT", to_float(1), to_float(iVar0), to_float(Global_7558[iVar1 /*15*/].f_10), to_float(iVar6), -1f, &(Global_7558[iVar1 /*15*/]), 0, 0, 0, 0);
								}
							}
							else if (iVar1 == 14)
							{
								func_456(Global_19662, "SET_DATA_SLOT", to_float(1), to_float(iVar0), to_float(Global_7558[iVar1 /*15*/].f_10), to_float(Global_22068), -1f, &(Global_7558[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							else if (iVar1 == 20)
							{
								unk_0x830F007E19C63E14(Global_19662, "SET_DATA_SLOT");
								unk_0xAD291B8F75D737AD(1);
								unk_0xAD291B8F75D737AD(iVar0);
								unk_0xAD291B8F75D737AD(Global_7558[iVar1 /*15*/].f_10);
								unk_0xAD291B8F75D737AD(0);
								func_457(&(Global_7558[iVar1 /*15*/]));
								unk_0xAD291B8F75D737AD(Global_7557);
								unk_0xE1FDD153F5858534();
							}
							else if (iVar1 == 2)
							{
								if (unk_0xCE990E643CD9D0E5(Global_7552, 6))
								{
									iVar7 = 42;
								}
								else
								{
									iVar7 = 255;
								}
								unk_0x830F007E19C63E14(Global_19662, "SET_DATA_SLOT");
								unk_0xAD291B8F75D737AD(1);
								unk_0xAD291B8F75D737AD(iVar0);
								unk_0xAD291B8F75D737AD(Global_7558[iVar1 /*15*/].f_10);
								unk_0xAD291B8F75D737AD(0);
								func_457(&(Global_7558[iVar1 /*15*/]));
								unk_0xAD291B8F75D737AD(iVar7);
								unk_0xE1FDD153F5858534();
							}
							else if (iVar1 == 3)
							{
								if (unk_0xCE990E643CD9D0E5(Global_7552, 3))
								{
									iVar8 = 42;
									Global_19868 = 1;
								}
								else
								{
									iVar8 = 255;
									Global_19868 = 0;
								}
								unk_0x830F007E19C63E14(Global_19662, "SET_DATA_SLOT");
								unk_0xAD291B8F75D737AD(1);
								unk_0xAD291B8F75D737AD(iVar0);
								unk_0xAD291B8F75D737AD(Global_7558[iVar1 /*15*/].f_10);
								unk_0xAD291B8F75D737AD(0);
								func_457(&(Global_7558[iVar1 /*15*/]));
								unk_0xAD291B8F75D737AD(iVar8);
								unk_0xE1FDD153F5858534();
							}
							else if (iVar1 == 8)
							{
								unk_0x830F007E19C63E14(Global_19662, "SET_DATA_SLOT");
								unk_0xAD291B8F75D737AD(1);
								unk_0xAD291B8F75D737AD(iVar0);
								unk_0xAD291B8F75D737AD(Global_7558[iVar1 /*15*/].f_10);
								unk_0xAD291B8F75D737AD(0);
								func_457(&(Global_7558[iVar1 /*15*/]));
								unk_0xAD291B8F75D737AD(42);
								unk_0xE1FDD153F5858534();
							}
							else if ((iVar1 == 23 && unk_0xF005CCA4263DF67F(&(Global_7558[iVar1 /*15*/]), "CELL_BENWEB")) && unk_0xCE990E643CD9D0E5(Global_7552, 6))
							{
								unk_0x830F007E19C63E14(Global_19662, "SET_DATA_SLOT");
								unk_0xAD291B8F75D737AD(1);
								unk_0xAD291B8F75D737AD(iVar0);
								unk_0xAD291B8F75D737AD(Global_7558[iVar1 /*15*/].f_10);
								unk_0xAD291B8F75D737AD(0);
								func_457(&(Global_7558[iVar1 /*15*/]));
								unk_0xAD291B8F75D737AD(42);
								unk_0xE1FDD153F5858534();
							}
							else if (Global_7558[iVar1 /*15*/].f_10 == 57 && iVar1 == 23)
							{
								iVar9 = 0;
								iVar9 = Global_1627252.f_1;
								func_456(Global_19662, "SET_DATA_SLOT", to_float(1), to_float(iVar0), to_float(Global_7558[iVar1 /*15*/].f_10), to_float(iVar9), -1f, &(Global_7558[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							else
							{
								func_456(Global_19662, "SET_DATA_SLOT", to_float(1), to_float(iVar0), to_float(Global_7558[iVar1 /*15*/].f_10), to_float(0), -1f, &(Global_7558[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							Global_8120[iVar0] = 1;
						}
					}
				}
				iVar1++;
			}
		}
		iVar0++;
	}
}

void func_456(int iParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6, char* sParam7, char* sParam8, char* sParam9, char* sParam10, char* sParam11)
{
	unk_0x830F007E19C63E14(iParam0, sParam1);
	unk_0xAD291B8F75D737AD(round(fParam2));
	if (fParam3 != -1f)
	{
		unk_0xAD291B8F75D737AD(round(fParam3));
	}
	if (fParam4 != -1f)
	{
		unk_0xAD291B8F75D737AD(round(fParam4));
	}
	if (fParam5 != -1f)
	{
		unk_0xAD291B8F75D737AD(round(fParam5));
	}
	if (fParam6 != -1f)
	{
		unk_0xAD291B8F75D737AD(round(fParam6));
	}
	if (!unk_0x7BCC91F3C1CF24E8(sParam7))
	{
		func_457(sParam7);
	}
	if (!unk_0x7BCC91F3C1CF24E8(sParam8))
	{
		func_457(sParam8);
	}
	if (!unk_0x7BCC91F3C1CF24E8(sParam9))
	{
		func_457(sParam9);
	}
	if (!unk_0x7BCC91F3C1CF24E8(sParam10))
	{
		func_457(sParam10);
	}
	if (!unk_0x7BCC91F3C1CF24E8(sParam11))
	{
		func_457(sParam11);
	}
	unk_0xE1FDD153F5858534();
}

void func_457(char* sParam0)
{
	unk_0xB23270F3D5E62FDE(sParam0);
	unk_0x2042E9CA4306F725();
}

bool func_458(int iParam0)
{
	return Global_41631 == iParam0;
}

void func_459(int iParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6)
{
	unk_0x830F007E19C63E14(iParam0, sParam1);
	unk_0xAD291B8F75D737AD(round(fParam2));
	if (fParam3 != -1f)
	{
		unk_0xAD291B8F75D737AD(round(fParam3));
	}
	if (fParam4 != -1f)
	{
		unk_0xAD291B8F75D737AD(round(fParam4));
	}
	if (fParam5 != -1f)
	{
		unk_0xAD291B8F75D737AD(round(fParam5));
	}
	if (fParam6 != -1f)
	{
		unk_0xAD291B8F75D737AD(round(fParam6));
	}
	unk_0xE1FDD153F5858534();
}

void func_460(int iParam0)
{
	var uVar0;
	var uVar1;
	
	uVar0 = Global_111858.f_14047[iParam0 /*20*/].f_8;
	uVar0 = uVar0;
	uVar1 = uVar1;
}

void func_461(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	var uVar4;
	int iVar5;
	
	iVar0 = unk_0x1D3A3697182AD8B3();
	iVar1 = unk_0x81F2E25F8C019191();
	iVar2 = unk_0x1F596C965B00E290();
	iVar3 = unk_0x371CFD525753F70C();
	uVar4 = unk_0xF225116F449A5CC6() + 1;
	iVar5 = unk_0x2E48CFA70ABFC06A();
	Global_111858.f_14137[iParam0 /*104*/].f_18 = iVar0;
	Global_111858.f_14137[iParam0 /*104*/].f_18.f_1 = iVar1;
	Global_111858.f_14137[iParam0 /*104*/].f_18.f_2 = iVar2;
	Global_111858.f_14137[iParam0 /*104*/].f_18.f_3 = iVar3;
	Global_111858.f_14137[iParam0 /*104*/].f_18.f_4 = uVar4;
	Global_111858.f_14137[iParam0 /*104*/].f_18.f_5 = iVar5;
}

void func_462()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (Global_76833)
	{
		iVar0 = 24;
		iVar1 = 33;
	}
	else
	{
		iVar0 = 0;
		iVar1 = 20;
	}
	iVar2 = iVar0;
	Global_22072 = 34;
	Global_111858.f_14137[Global_22072 /*104*/].f_18 = -1;
	Global_111858.f_14137[Global_22072 /*104*/].f_18.f_1 = 0;
	Global_111858.f_14137[Global_22072 /*104*/].f_18.f_2 = 0;
	Global_111858.f_14137[Global_22072 /*104*/].f_18.f_3 = 0;
	Global_111858.f_14137[Global_22072 /*104*/].f_18.f_5 = 99999;
	while (iVar2 < iVar1)
	{
		if (!func_463(Global_111858.f_14137[iVar2 /*104*/].f_18, Global_111858.f_14137[Global_22072 /*104*/].f_18))
		{
			Global_22072 = iVar2;
		}
		iVar2++;
	}
	Global_111858.f_14137[Global_22072 /*104*/].f_24 = 1;
}

int func_463(struct<6> Param0, struct<6> Param1)
{
	struct<4> Var0;
	struct<4> Var1;
	int iVar2;
	int iVar3;
	
	if (Param0.f_5 < Param1.f_5)
	{
		return 0;
	}
	if (Param0.f_5 > Param1.f_5)
	{
		return 1;
	}
	if (Param0.f_5 == Param1.f_5)
	{
		if (Param0.f_4 < Param1.f_4)
		{
			return 0;
		}
		if (Param0.f_4 > Param1.f_4)
		{
			return 1;
		}
		if (Param0.f_4 == Param1.f_4)
		{
			Var0 = Param0;
			Var0.f_1 = Param0.f_1 * 60;
			Var0.f_2 = Param0.f_2 * 3600;
			Var0.f_3 = (Param0.f_3 * 86400);
			iVar2 = (((Var0 + Var0.f_1) + Var0.f_2) + Var0.f_3);
			Var1 = Param1;
			Var1.f_1 = Param1.f_1 * 60;
			Var1.f_2 = Param1.f_2 * 3600;
			Var1.f_3 = (Param1.f_3 * 86400);
			iVar3 = (((Var1 + Var1.f_1) + Var1.f_2) + Var1.f_3);
			if (iVar2 > iVar3 || iVar2 == iVar3)
			{
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

int func_464()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (Global_76833)
	{
		iVar0 = 24;
		iVar1 = 33;
	}
	else
	{
		iVar0 = 0;
		iVar1 = 20;
	}
	iVar2 = iVar0;
	while (iVar2 < iVar1)
	{
		if (Global_111858.f_14137[iVar2 /*104*/].f_24 == 0)
		{
			Global_22072 = iVar2;
			return 1;
		}
		iVar2++;
	}
	iVar2 = iVar0;
	Global_22072 = 34;
	Global_111858.f_14137[Global_22072 /*104*/].f_18 = -1;
	Global_111858.f_14137[Global_22072 /*104*/].f_18.f_1 = 0;
	Global_111858.f_14137[Global_22072 /*104*/].f_18.f_2 = 0;
	Global_111858.f_14137[Global_22072 /*104*/].f_18.f_3 = 0;
	Global_111858.f_14137[Global_22072 /*104*/].f_18.f_5 = 99999;
	while (iVar2 < iVar1)
	{
		if (Global_111858.f_14137[iVar2 /*104*/].f_24 == 0 || Global_111858.f_14137[iVar2 /*104*/].f_24 == 1)
		{
			if (!func_463(Global_111858.f_14137[iVar2 /*104*/].f_18, Global_111858.f_14137[Global_22072 /*104*/].f_18))
			{
				Global_22072 = iVar2;
			}
		}
		if (Global_111858.f_14137[iVar2 /*104*/].f_24 == 2)
		{
		}
		iVar2++;
	}
	if (Global_22072 == 34)
	{
		return 0;
	}
	Global_111858.f_14137[Global_22072 /*104*/].f_99[0] = 0;
	Global_111858.f_14137[Global_22072 /*104*/].f_99[1] = 0;
	Global_111858.f_14137[Global_22072 /*104*/].f_99[2] = 0;
	return 1;
}

void func_465()
{
	if (func_458(14))
	{
		if (!unk_0xA59F96B50B97E63C(unk_0x9B0761B4C3EB8BC7(), 0))
		{
			if (unk_0x36FE6D3220816ADA(unk_0x9B0761B4C3EB8BC7()) == Global_111858.f_28046[0 /*29*/])
			{
				Global_19681 = 0;
			}
			else if (unk_0x36FE6D3220816ADA(unk_0x9B0761B4C3EB8BC7()) == Global_111858.f_28046[1 /*29*/])
			{
				Global_19681 = 1;
			}
			else if (unk_0x36FE6D3220816ADA(unk_0x9B0761B4C3EB8BC7()) == Global_111858.f_28046[2 /*29*/])
			{
				Global_19681 = 2;
			}
			else
			{
				Global_19681 = 0;
			}
		}
	}
	else
	{
		Global_19681 = func_466();
		if (Global_19681 == 145)
		{
			Global_19681 = 3;
		}
		if (Global_76833)
		{
			Global_19681 = 3;
		}
		if (Global_19681 > 3)
		{
			Global_19681 = 3;
		}
	}
}

var func_466()
{
	func_467();
	return Global_111858.f_2359.f_539.f_4321;
}

void func_467()
{
	int iVar0;
	
	if (unk_0xAE06B9E39EBDE049(unk_0x9B0761B4C3EB8BC7()))
	{
		if (func_470(Global_111858.f_2359.f_539.f_4321) != unk_0x36FE6D3220816ADA(unk_0x9B0761B4C3EB8BC7()))
		{
			iVar0 = func_469(unk_0x9B0761B4C3EB8BC7());
			if (func_468(iVar0) && (!func_458(14) || Global_110809))
			{
				if (Global_111858.f_2359.f_539.f_4321 != iVar0 && func_468(Global_111858.f_2359.f_539.f_4321))
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

bool func_468(int iParam0)
{
	return iParam0 < 3;
}

int func_469(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0xAE06B9E39EBDE049(iParam0))
	{
		iVar1 = unk_0x36FE6D3220816ADA(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_470(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_470(int iParam0)
{
	if (func_468(iParam0))
	{
		return func_471(iParam0);
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

var func_471(int iParam0)
{
	return Global_1848[iParam0 /*29*/];
}

void func_472(var uParam0, int iParam1, int iParam2, var uParam3, var uParam4, int iParam5, bool bParam6, char* sParam7)
{
	int iVar0;
	int iVar1[32];
	bool bVar2;
	int iVar3;
	char* sVar4;
	int iVar5;
	struct<4> Var6;
	int iVar7;
	int iVar8;
	int iVar9;
	float fVar10;
	int iVar11;
	int iVar12;
	int iVar13;
	int iVar14;
	int iVar15;
	int iVar16;
	int iVar17;
	int iVar18;
	int iVar19;
	int iVar20;
	int iVar21;
	struct<2> Var22;
	
	if (func_588(iParam2))
	{
		return;
	}
	fVar10 = -1f;
	iVar11 = -1;
	iVar12 = -1;
	iVar14 = 0;
	iVar15 = 0;
	uParam3->f_36 = 0;
	if (func_586() || iParam2 == 28)
	{
		if (func_543(iParam1, iParam2, uParam3, Global_1574191, 0, func_584(), sParam7))
		{
			func_542(1);
			if ((!func_541() && !func_540()) || unk_0xCE990E643CD9D0E5(Global_2540384.f_4652, 1))
			{
				if (func_539())
				{
					func_537();
				}
				else
				{
					unk_0xFCC7EAA298CE7AC2(76, 84);
					if (uParam3->f_27 == 0)
					{
						func_536(1);
						Global_1574191 = 0;
						iVar19 = -1;
						if (Global_1574412 != 1)
						{
							func_535(iParam1, 0, 0);
							if (unk_0xCE990E643CD9D0E5(uParam3->f_33, 7))
							{
								unk_0xD2459066EA58CE43(&(uParam3->f_33), 7);
							}
						}
						if (iParam2 == 28)
						{
							iVar17 = 0;
							while (iVar17 < 32)
							{
								iVar1[iVar17] = -1;
								iVar17++;
							}
							iVar17 = 0;
							while (iVar17 < 32)
							{
								if (func_6(unk_0xF1110FE23C67293A(iVar17), 0, 1))
								{
									iVar3 = unk_0xF1110FE23C67293A(iVar17);
									if (!func_96(iVar3, 0))
									{
										if ((func_531(iVar3) || Global_2425869[iVar3 /*443*/].f_240 != -1) || func_530(iVar3))
										{
											iVar9 = iVar3;
											if (func_82(iVar3))
											{
												iVar1[iVar9] = iVar20;
												iVar20++;
												iVar0++;
												func_529(&iVar1, iVar3, &iVar20, &iVar0);
											}
										}
									}
								}
								iVar17++;
							}
						}
						if (!func_528(unk_0x460153A63B9477BC(), 0) && func_102(unk_0x460153A63B9477BC()) != 188)
						{
							bVar2 = iVar0 > 0;
						}
						iVar17 = 0;
						while (iVar17 < 32)
						{
							if (func_527())
							{
								if (func_6(unk_0xF1110FE23C67293A(iVar17), 0, 1))
								{
									iVar3 = unk_0xF1110FE23C67293A(iVar17);
								}
								else
								{
									iVar3 = func_40();
								}
							}
							else
							{
								iVar3 = (uParam0[iVar17 /*42*/])->f_1;
							}
							if ((func_526(iVar3) && func_523(iVar3, iParam2)) && func_6(iVar3, 0, 1))
							{
								iVar9 = iVar3;
								iVar7 = Global_1590682[iVar9 /*883*/].f_211.f_6;
								Var6 = { func_518(iVar3) };
								if (iVar3 == unk_0x460153A63B9477BC())
								{
									uParam3->f_35 = iVar18;
								}
								StringCopy(&(uParam3->f_1), unk_0x72C1D3A1AB8CAA5B(iVar3), 64);
								*(uParam4[iVar17 /*13*/]) = { func_253(iVar3) };
								iVar5 = func_512(iVar3);
								sVar4 = "";
								if (iVar5 != 0)
								{
									sVar4 = unk_0x3EF2973864CBE5FC(iVar5);
								}
								Global_1574191++;
								if ((uParam0[iVar17 /*42*/])->f_22 != -1f)
								{
									fVar10 = (uParam0[iVar17 /*42*/])->f_22;
								}
								if ((uParam0[iVar17 /*42*/])->f_31 != -1)
								{
									iVar11 = (uParam0[iVar17 /*42*/])->f_31;
								}
								if ((uParam0[iVar17 /*42*/])->f_41 != -1)
								{
									iVar12 = (uParam0[iVar17 /*42*/])->f_41;
								}
								iVar8 = (uParam0[iVar17 /*42*/])->f_9;
								if (((uParam0[iVar17 /*42*/])->f_9 != -1 || (uParam0[iVar17 /*42*/])->f_22 != -1f) || (uParam0[iVar17 /*42*/])->f_31 != -1)
								{
									if (!func_527())
									{
										iVar15 = 1;
									}
								}
								if (iParam5 != -1)
								{
									func_507(&iVar8, &fVar10, (uParam0[iVar17 /*42*/])->f_9, iParam5);
									StringCopy(&(uParam3->f_104), func_506(iParam5, 1, 0, 0), 16);
								}
								if (bParam6)
								{
									iVar13 = (uParam0[iVar17 /*42*/])->f_2 + 1;
									if (iVar19 != iVar13)
									{
										iVar19 = iVar13;
									}
									else
									{
										iVar13 = -2;
									}
								}
								iVar16 = func_505(iVar3, 0);
								if (bVar2)
								{
									if (func_81(iVar3, 1) && iVar1[iVar9] != -1)
									{
										iVar18 = iVar1[iVar9];
									}
									else
									{
										iVar18 = (iVar0 + iVar21);
										iVar21++;
									}
								}
								uParam3->f_38[iVar9 /*2*/].f_1 = iVar18;
								if ((uParam0[iVar17 /*42*/])->f_39 != -1)
								{
									StringCopy(&Var22, "UW_TM", 16);
									StringIntConCat(&Var22, (uParam0[iVar17 /*42*/])->f_39, 16);
								}
								if (func_504(iParam5))
								{
									func_503(iVar3, iParam1, uParam3, iVar18, Var6, sVar4, iVar7, iVar8, iVar16, iVar15, fVar10, iVar8, iVar12, &Var22, (uParam0[iVar17 /*42*/])->f_40, iVar13, bParam6);
								}
								else
								{
									func_503(iVar3, iParam1, uParam3, iVar18, Var6, sVar4, iVar7, iVar8, iVar16, iVar15, fVar10, iVar11, iVar12, &Var22, (uParam0[iVar17 /*42*/])->f_40, iVar13, bParam6);
								}
								unk_0xBE20AB8238688965(&iVar14, iVar3);
								iVar18++;
							}
							iVar17++;
						}
						iVar17 = 0;
						while (iVar17 < 32)
						{
							iVar3 = unk_0xF1110FE23C67293A(iVar17);
							if (func_6(iVar3, 0, 1) && !unk_0xCE990E643CD9D0E5(iVar14, iVar3))
							{
								iVar3 = unk_0xF1110FE23C67293A(iVar17);
							}
							else
							{
								iVar3 = func_40();
							}
							if (func_526(iVar3))
							{
								if (func_6(unk_0xF1110FE23C67293A(iVar17), 0, 1))
								{
									iVar9 = iVar3;
									iVar7 = Global_1590682[iVar9 /*883*/].f_211.f_6;
									Var6 = { func_518(iVar3) };
									*(uParam4[iVar17 /*13*/]) = { func_253(iVar3) };
									iVar5 = func_512(iVar3);
									sVar4 = "";
									if (iVar5 != 0)
									{
										sVar4 = unk_0x3EF2973864CBE5FC(iVar5);
									}
									Global_1574191++;
									iVar16 = func_505(iVar3, 1);
									if (bVar2)
									{
										if (func_81(iVar3, 1))
										{
											iVar18 = iVar1[iVar17];
										}
										else
										{
											iVar18 = (iVar0 + iVar21);
											iVar21++;
										}
									}
									uParam3->f_38[iVar9 /*2*/].f_1 = iVar18;
									func_486(iVar3, unk_0x72C1D3A1AB8CAA5B(iVar3), iParam1, uParam3, iVar18, Var6, sVar4, iVar7, iVar16, iVar15);
									iVar18++;
								}
							}
							iVar17++;
						}
						if (unk_0xCE990E643CD9D0E5(uParam3->f_33, 11))
						{
							func_483(uParam3, iParam1, iParam2);
						}
						func_482(&(uParam3->f_21));
						func_481();
						uParam3->f_27 = 2;
					}
					if (uParam3->f_27 == 2)
					{
						if (!unk_0xCE990E643CD9D0E5(uParam3->f_33, 7))
						{
							func_480(uParam3, iParam1);
							func_479(iParam1, 0, 1);
							unk_0xBE20AB8238688965(&(uParam3->f_33), 7);
						}
						func_480(uParam3, iParam1);
						if (!unk_0xCE990E643CD9D0E5(uParam3->f_33, 11))
						{
							unk_0xBE20AB8238688965(&(uParam3->f_33), 11);
						}
						if (func_475(uParam3))
						{
							Global_1574412 = 1;
						}
						func_473(uParam3);
						if (Global_1574412 == 1)
						{
							uParam3->f_27 = 0;
						}
						if (Global_1574412 == 2)
						{
							uParam3->f_27 = 0;
						}
					}
					if (unk_0x95EF219D38B20CFF(*iParam1))
					{
						unk_0x9D15035C6653D1B1(7);
						unk_0xE6A03BA84586E67B(*iParam1, 0.122f, 0.3f, 0.28f, 0.6f, 255, 255, 255, 255, 0);
						unk_0x9D15035C6653D1B1(4);
					}
				}
			}
		}
		else
		{
			uParam3->f_27 = 0;
			func_481();
			func_536(0);
			if (unk_0xCE990E643CD9D0E5(uParam3->f_33, 7))
			{
				unk_0xD2459066EA58CE43(&(uParam3->f_33), 7);
			}
			if (unk_0xCE990E643CD9D0E5(uParam3->f_33, 10))
			{
				unk_0xD2459066EA58CE43(&(uParam3->f_33), 10);
			}
		}
	}
	unk_0x5C64FD27DB62AF7A();
}

void func_473(var uParam0)
{
	if (!func_137(&(uParam0->f_21)))
	{
		func_4(&(uParam0->f_21), 0, 0);
	}
	else if (func_3(&(uParam0->f_21), 250, 0))
	{
		func_482(&(uParam0->f_21));
		func_474(0);
	}
}

void func_474(bool bParam0)
{
	if (bParam0)
	{
		if (Global_1574412 != 2)
		{
			Global_1574412 = 2;
		}
	}
	else
	{
		switch (Global_1574412)
		{
			case 0:
				Global_1574412 = 1;
				break;
			
			case 1:
				break;
			
			case 2:
				break;
			}
	}
}

int func_475(var uParam0)
{
	int iVar0;
	int iVar1;
	struct<13> Var2;
	int iVar3;
	int iVar4;
	
	iVar4 = 0;
	iVar0 = uParam0->f_37;
	iVar3 = unk_0xF1110FE23C67293A(uParam0->f_37);
	if (iVar3 != func_40() && func_6(iVar3, 0, 1))
	{
		Var2 = { func_253(iVar3) };
		iVar1 = func_478(uParam0, uParam0->f_37);
		if (func_477(Var2))
		{
			switch (iVar1)
			{
				case 0:
					if (unk_0x4B9AEC757F715980(&Var2))
					{
						if (unk_0x30EE34228B1AF045(&Var2))
						{
							iVar4 = 1;
							func_476(uParam0, iVar0, 2);
						}
					}
					else if (unk_0x7677D662EB0C9C8A(&Var2))
					{
						iVar4 = 1;
						func_476(uParam0, iVar0, 1);
					}
					break;
				
				case 2:
					if (unk_0x4B9AEC757F715980(&Var2))
					{
						if (!unk_0x30EE34228B1AF045(&Var2))
						{
							iVar4 = 1;
							func_476(uParam0, iVar0, 0);
						}
					}
					else
					{
						iVar4 = 1;
						func_476(uParam0, iVar0, 0);
					}
					break;
				
				case 1:
					if (unk_0x4B9AEC757F715980(&Var2))
					{
						if (!unk_0x7677D662EB0C9C8A(&Var2))
						{
							iVar4 = 1;
							func_476(uParam0, iVar0, 0);
						}
					}
					else if (!unk_0x7677D662EB0C9C8A(&Var2))
					{
						iVar4 = 1;
						func_476(uParam0, iVar0, 0);
					}
					break;
				}
			}
	}
	uParam0->f_37++;
	if (uParam0->f_37 >= 32)
	{
		uParam0->f_37 = 0;
	}
	return iVar4;
}

void func_476(var uParam0, int iParam1, int iParam2)
{
	uParam0->f_38[iParam1 /*2*/] = iParam2;
}

bool func_477(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12)
{
	return unk_0xF6B8932480699645(&uParam0, 13);
}

var func_478(var uParam0, int iParam1)
{
	return uParam0->f_38[iParam1 /*2*/];
}

void func_479(int iParam0, bool bParam1, int iParam2)
{
	if (unk_0x830F007E19C63E14(*iParam0, "COLLAPSE"))
	{
		unk_0xF1B28F753235CE2A(bParam1);
		unk_0xE1FDD153F5858534();
	}
	if (iParam2 == 1)
	{
		if (unk_0x830F007E19C63E14(*iParam0, "DISPLAY_VIEW"))
		{
			unk_0xE1FDD153F5858534();
		}
	}
}

void func_480(var uParam0, int iParam1)
{
	if (!unk_0xCE990E643CD9D0E5(uParam0->f_33, 10))
	{
		unk_0x830F007E19C63E14(*iParam1, "SET_HIGHLIGHT");
		unk_0xAD291B8F75D737AD(uParam0->f_35);
		unk_0xE1FDD153F5858534();
		unk_0xBE20AB8238688965(&(uParam0->f_33), 10);
	}
}

void func_481()
{
	if (Global_1574412 != 0)
	{
		Global_1574412 = 0;
	}
}

void func_482(var uParam0)
{
	uParam0->f_1 = 0;
}

void func_483(var uParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar2 = unk_0xF1110FE23C67293A(iVar0);
		if (iVar2 != func_40())
		{
			if (func_6(iVar2, 0, 1))
			{
				if (uParam0->f_38[iVar0 /*2*/].f_1 != -1)
				{
					iVar1 = func_485(uParam0->f_38[iVar0 /*2*/], 0, iParam2);
					func_484(iParam1, uParam0->f_38[iVar0 /*2*/].f_1, iVar1, Global_1590682[iVar0 /*883*/].f_211.f_6);
				}
			}
		}
		iVar0++;
	}
}

void func_484(var uParam0, int iParam1, int iParam2, int iParam3)
{
	if (unk_0x95EF219D38B20CFF(*uParam0))
	{
		if (unk_0x830F007E19C63E14(*uParam0, "SET_ICON"))
		{
			unk_0xAD291B8F75D737AD(iParam1);
			unk_0xAD291B8F75D737AD(iParam2);
			if (iParam2 == 65)
			{
				unk_0xAD291B8F75D737AD(iParam3);
			}
			unk_0xE1FDD153F5858534();
		}
	}
}

int func_485(int iParam0, bool bParam1, int iParam2)
{
	int iVar0;
	
	iVar0 = 65;
	switch (iParam2)
	{
		case 21:
			iVar0 = 0;
			break;
	}
	if (bParam1)
	{
		iVar0 = 116;
	}
	switch (iParam0)
	{
		case 2:
			return 47;
		
		case 1:
			return 49;
		
		default:
	}
	return iVar0;
}

void func_486(int iParam0, char* sParam1, int iParam2, var uParam3, int iParam4, char* sParam5, var uParam6, var uParam7, var uParam8, char* sParam9, int iParam10, int iParam11, int iParam12)
{
	int iVar0;
	char* sVar1;
	
	if (iParam4 >= func_502() && iParam4 < func_501())
	{
		iParam4 = (iParam4 % 16);
		iVar0 = iParam4 + 1;
		if (Global_1574193)
		{
			iVar0 += 16;
		}
		sVar1 = "SET_DATA_SLOT";
		if (Global_1574412 == 1)
		{
			sVar1 = "UPDATE_SLOT";
		}
		if (unk_0x830F007E19C63E14(*iParam2, sVar1))
		{
			unk_0xAD291B8F75D737AD(iParam4);
			if (unk_0xCE990E643CD9D0E5(uParam3->f_33, 8) || uParam3->f_108 == 6)
			{
				func_500("");
			}
			else
			{
				unk_0xAD291B8F75D737AD(iParam10);
			}
			func_500(sParam1);
			unk_0xAD291B8F75D737AD(iParam11);
			if (uParam3->f_108 == 6)
			{
				func_500("");
			}
			else
			{
				unk_0xAD291B8F75D737AD(65);
			}
			unk_0xAD291B8F75D737AD(-1);
			func_500("");
			if (uParam3->f_108 == 6)
			{
				func_500("");
			}
			else
			{
				func_500(&sParam5);
			}
			func_490(uParam3, iParam0);
			unk_0x4A096F645CED26D9(sParam9);
			unk_0x4A096F645CED26D9(sParam9);
			if (func_489(uParam3))
			{
				func_457("DPAD_FRIEND");
			}
			else if (func_488(uParam3))
			{
				func_457("DPAD_FRIEND");
			}
			else if (func_487(uParam3))
			{
				func_457("DPAD_CREW");
			}
			else
			{
				func_457("");
			}
			unk_0xE1FDD153F5858534();
		}
	}
}

bool func_487(var uParam0)
{
	return unk_0xCE990E643CD9D0E5(uParam0->f_33, 6);
}

bool func_488(var uParam0)
{
	return unk_0xCE990E643CD9D0E5(uParam0->f_33, 5);
}

int func_489(var uParam0)
{
	if (func_488(uParam0) && func_487(uParam0))
	{
		return 1;
	}
	return 0;
}

void func_490(var uParam0, int iParam1)
{
	if (func_499(iParam1))
	{
		unk_0xAD291B8F75D737AD(121);
	}
	else if (func_494(iParam1))
	{
		unk_0xAD291B8F75D737AD(122);
	}
	else if (((unk_0xCE990E643CD9D0E5(Global_4456448.f_27, 15) && iParam1 > -1) && iParam1 < 32) && unk_0xCE990E643CD9D0E5(Global_2425869[iParam1 /*443*/].f_420, 0))
	{
		unk_0xAD291B8F75D737AD(123);
	}
	else
	{
		if (func_491())
		{
			uParam0->f_36 = 0;
		}
		unk_0xF1B28F753235CE2A(uParam0->f_36);
	}
}

int func_491()
{
	if (unk_0xFC559366953F62B3())
	{
		if (func_492() || func_88())
		{
			return 1;
		}
	}
	return 0;
}

int func_492()
{
	if (unk_0xFC559366953F62B3())
	{
		return func_88();
	}
	return func_493(Global_4456448.f_82708);
}

int func_493(int iParam0)
{
	int iVar0;
	
	if (iParam0 == 0)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 8)
	{
		if (Global_262145.f_4991[iVar0] == iParam0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_494(int iParam0)
{
	if ((func_6(iParam0, 0, 1) && func_495()) && func_128(iParam0, 1))
	{
		return 1;
	}
	return 0;
}

int func_495()
{
	if (func_157(unk_0x460153A63B9477BC()) || func_498())
	{
		if (!func_496(unk_0x460153A63B9477BC()))
		{
			return 0;
		}
	}
	return 1;
}

int func_496(int iParam0)
{
	if (func_497(iParam0) == 236 || func_497(iParam0) == 150)
	{
		return func_145(iParam0);
	}
	return 0;
}

int func_497(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return Global_1630317[iVar0 /*595*/];
	}
	return -1;
}

int func_498()
{
	switch (func_102(unk_0x460153A63B9477BC()))
	{
		case 193:
		case 194:
		case 199:
		case 205:
		case 210:
		case 188:
			return 1;
		
		default:
	}
	return 0;
}

int func_499(int iParam0)
{
	if (func_491())
	{
		if (func_6(iParam0, 0, 1))
		{
			return func_82(iParam0);
		}
	}
	if ((func_6(iParam0, 0, 1) && func_495()) && func_61(iParam0, 0))
	{
		return 1;
	}
	return 0;
}

void func_500(char* sParam0)
{
	unk_0x54AED56A452DCB4F(sParam0);
}

int func_501()
{
	int iVar0;
	
	if (Global_1574193)
	{
		iVar0 = 32;
	}
	else
	{
		iVar0 = 16;
	}
	return iVar0;
}

int func_502()
{
	int iVar0;
	
	iVar0 = 0;
	if (Global_1574193)
	{
		iVar0 = 16;
	}
	return iVar0;
}

void func_503(int iParam0, int iParam1, var uParam2, int iParam3, char* sParam4, var uParam5, var uParam6, var uParam7, char* sParam8, int iParam9, int iParam10, int iParam11, int iParam12, float fParam13, int iParam14, int iParam15, char* sParam16, int iParam17, int iParam18, bool bParam19)
{
	int iVar0;
	char* sVar1;
	
	if (iParam3 >= func_502() && iParam3 < func_501())
	{
		iParam3 = (iParam3 % 16);
		iVar0 = iParam3 + 1;
		if (Global_1574193)
		{
			iVar0 += 16;
		}
		if (bParam19)
		{
			iVar0 = iParam18;
			if (iVar0 == -2)
			{
				iParam10 = -1;
			}
		}
		sVar1 = "SET_DATA_SLOT";
		if (Global_1574412 == 1)
		{
			sVar1 = "UPDATE_SLOT";
		}
		if (unk_0x95EF219D38B20CFF(*iParam1))
		{
			if (unk_0x830F007E19C63E14(*iParam1, sVar1))
			{
				unk_0xAD291B8F75D737AD(iParam3);
				if (unk_0xCE990E643CD9D0E5(uParam2->f_33, 8) || uParam2->f_108 == 6)
				{
					func_500("");
				}
				else
				{
					unk_0xAD291B8F75D737AD(iParam9);
				}
				if (uParam2->f_108 == 6 && !unk_0x7BCC91F3C1CF24E8(sParam16))
				{
					func_457(sParam16);
				}
				else
				{
					func_500(&(uParam2->f_1));
				}
				unk_0xAD291B8F75D737AD(iParam11);
				if (uParam2->f_108 == 6)
				{
					func_500("");
				}
				else
				{
					unk_0xAD291B8F75D737AD(65);
				}
				if (iParam12 == 1)
				{
					unk_0xAD291B8F75D737AD(iVar0);
				}
				else
				{
					unk_0xAD291B8F75D737AD(-1);
				}
				if (func_527())
				{
					func_500("");
				}
				else if (uParam2->f_108 == 6 && !unk_0x7BCC91F3C1CF24E8(sParam16))
				{
					unk_0xB23270F3D5E62FDE("FM_AE_ONE_INT");
					unk_0x6A826E35A3096ED0(sParam16);
					unk_0x42710E9E08FA375A(iParam17);
					unk_0x2042E9CA4306F725();
				}
				else if (uParam2->f_108 == 5 && !unk_0x7BCC91F3C1CF24E8(sParam16))
				{
					unk_0xB23270F3D5E62FDE("FM_AE_ONE_INT");
					unk_0x6A826E35A3096ED0(sParam16);
					unk_0x42710E9E08FA375A(iParam17);
					unk_0x2042E9CA4306F725();
				}
				else if (uParam2->f_108 == 7 && !unk_0x7BCC91F3C1CF24E8(sParam16))
				{
					unk_0xB23270F3D5E62FDE("FM_AE_TWO_INT");
					unk_0x6A826E35A3096ED0(sParam16);
					unk_0x42710E9E08FA375A(iParam17);
					unk_0x2042E9CA4306F725();
				}
				else if (uParam2->f_108 == 8 && !unk_0x7BCC91F3C1CF24E8(&(uParam2->f_104)))
				{
					unk_0xB23270F3D5E62FDE("FM_AE_UNIT");
					if (fParam13 != -1f)
					{
						unk_0x5BC8B357341A4FEE(fParam13, 1);
					}
					if (iParam10 != -1)
					{
						unk_0x42710E9E08FA375A(iParam10);
					}
					unk_0x6A826E35A3096ED0(&(uParam2->f_104));
					unk_0x2042E9CA4306F725();
				}
				else if (uParam2->f_108 == 9)
				{
					unk_0xB23270F3D5E62FDE("FM_AE_CASH");
					unk_0x5181FCFE1210A213(iParam10, 1);
					unk_0x2042E9CA4306F725();
				}
				else if (uParam2->f_108 == 10)
				{
					if (iParam10 == 0)
					{
						unk_0xB23270F3D5E62FDE("FM_AE_CASH");
						unk_0x5181FCFE1210A213(iParam10, 1);
						unk_0x2042E9CA4306F725();
					}
					else
					{
						unk_0xB23270F3D5E62FDE("FM_NG_CASH");
						unk_0x5181FCFE1210A213(iParam10, 1);
						unk_0x2042E9CA4306F725();
					}
				}
				else if (iParam15 > -1)
				{
					if (iParam15 == 0 && !unk_0x7BCC91F3C1CF24E8(&(uParam2->f_104)))
					{
						func_457(&(uParam2->f_104));
					}
					else
					{
						func_500("");
					}
				}
				else if (iParam14 != -1)
				{
					unk_0xB23270F3D5E62FDE("STRING");
					unk_0x7899A951E85F4B28(iParam14, 6);
					unk_0x2042E9CA4306F725();
				}
				else if (fParam13 != -1f)
				{
					unk_0xB23270F3D5E62FDE("NUMBER");
					unk_0x5BC8B357341A4FEE(fParam13, 1);
					unk_0x2042E9CA4306F725();
				}
				else if (iParam10 != -1)
				{
					unk_0xAD291B8F75D737AD(iParam10);
				}
				else
				{
					func_500("");
				}
				if (uParam2->f_108 == 6)
				{
					func_500("");
				}
				else
				{
					func_500(&sParam4);
				}
				func_490(uParam2, iParam0);
				if (iParam12 == 1 || unk_0x7BCC91F3C1CF24E8(sParam8))
				{
					func_500("");
					func_500("");
				}
				else
				{
					unk_0x4A096F645CED26D9(sParam8);
					unk_0x4A096F645CED26D9(sParam8);
				}
				if (func_489(uParam2))
				{
					func_457("DPAD_FRIEND");
				}
				else if (func_488(uParam2))
				{
					func_457("DPAD_FRIEND");
				}
				else if (func_487(uParam2))
				{
					func_457("DPAD_CREW");
				}
				else
				{
					func_457("");
				}
				unk_0xE1FDD153F5858534();
			}
		}
	}
}

int func_504(int iParam0)
{
	return 0;
	switch (iParam0)
	{
		case 11:
		case 12:
			return 1;
		
		default:
	}
	return 0;
}

int func_505(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 116;
	if ((!bParam1 && func_157(iParam0)) && !func_155(iParam0))
	{
		iVar0 = func_389();
	}
	iVar1 = func_80(iParam0);
	if (!iVar1 == -1)
	{
		return func_78(iVar1);
	}
	return iVar0;
}

char* func_506(int iParam0, bool bParam1, bool bParam2, int iParam3)
{
	switch (iParam0)
	{
		case 0:
		case 3:
		case 4:
		case 5:
		case 1:
		case 6:
		case 9:
		case 10:
		case 13:
		case 11:
		case 12:
			if (unk_0x1CB1AF03C74FCE70())
			{
				if (bParam1)
				{
					return "AMCH_M_LB";
				}
				else if (bParam2)
				{
					return "AMCH_M";
				}
				else
				{
					return "AMCH_METRES";
				}
			}
			else if (bParam1)
			{
				return "AMCH_FT_LB";
			}
			else if (bParam2)
			{
				return "AMCH_FT";
			}
			else
			{
				return "AMCH_FEET";
			}
			break;
		
		case 2:
			if (unk_0x1CB1AF03C74FCE70())
			{
				if (bParam1)
				{
					return "AMCH_KMH_LB";
				}
				else if (bParam2)
				{
					return "AMCH_KMHN";
				}
				else
				{
					return "AMCH_KMH";
				}
			}
			else if (bParam1)
			{
				return "AMCH_MPH_LB";
			}
			else if (bParam2)
			{
				return "AMCH_MPHN";
			}
			else
			{
				return "AMCH_MPH";
			}
			break;
		
		case 7:
			if (bParam1 || bParam2)
			{
				return "";
			}
			else
			{
				return "AMCH_VEH";
			}
			break;
		
		case 15:
		case 16:
		case 17:
		case 18:
			if (bParam1 || bParam2)
			{
				return "";
			}
			else if (iParam3 != 1)
			{
				return "AMCH_KILLS";
			}
			else
			{
				return "AMCH_KILL";
			}
			break;
	}
	if (bParam1 || bParam2)
	{
		return "";
	}
	return "AMCH_EMPTY";
}

int func_507(var uParam0, float fParam1, int iParam2, int iParam3)
{
	if (func_511(iParam3))
	{
		*fParam1 = (func_508(iParam3, iParam2) / 10f);
		return 1;
	}
	if (func_504(iParam3))
	{
		*fParam1 = (func_508(iParam3, iParam2) / 1000f);
		return 1;
	}
	*uParam0 = iParam2;
	return 0;
}

float func_508(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
		case 3:
		case 4:
		case 5:
		case 1:
		case 6:
		case 9:
		case 10:
		case 13:
		case 11:
		case 12:
			if (unk_0x1CB1AF03C74FCE70())
			{
				return to_float(iParam1);
			}
			else
			{
				return func_510(to_float(iParam1));
			}
			break;
		
		case 2:
			if (unk_0x1CB1AF03C74FCE70())
			{
				return to_float(iParam1);
			}
			else
			{
				return func_509(to_float(iParam1));
			}
			break;
	}
	return to_float(iParam1);
}

float func_509(float fParam0)
{
	return (fParam0 / 1.609344f);
}

float func_510(float fParam0)
{
	return (fParam0 / 0.3048f);
}

int func_511(int iParam0)
{
	switch (iParam0)
	{
		case 0:
		case 2:
		case 3:
		case 5:
		case 4:
		case 1:
		case 6:
		case 9:
		case 10:
		case 13:
		case 11:
		case 12:
			return 1;
		
		default:
	}
	return 0;
}

int func_512(int iParam0)
{
	int iVar0;
	
	iVar0 = func_515(iParam0);
	if (iVar0 == -1)
	{
		func_513(iParam0, 1);
		return 0;
	}
	Global_1389221[iVar0 /*5*/].f_4 = 1;
	return Global_1389221[iVar0 /*5*/].f_2;
}

void func_513(int iParam0, bool bParam1)
{
	if (!func_6(iParam0, 0, 1))
	{
		return;
	}
	if (func_515(iParam0) != -1)
	{
		return;
	}
	if (Global_1389384)
	{
		if (iParam0 == Global_1389384.f_1)
		{
			return;
		}
	}
	if (func_514(iParam0))
	{
		return;
	}
	if (Global_1389422 >= 32)
	{
		return;
	}
	Global_1389389[Global_1389422] = iParam0;
	Global_1389422++;
	if (bParam1)
	{
	}
}

int func_514(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_1389422)
	{
		if (Global_1389389[iVar0] == iParam0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_515(int iParam0)
{
	int iVar0;
	
	if (!func_6(iParam0, 0, 1))
	{
		return -1;
	}
	if (Global_1389382 == 0)
	{
		return -1;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_1389382)
	{
		if (Global_1389221[iVar0 /*5*/].f_1 == iParam0)
		{
			if (unk_0x3F2B70A051A32606(Global_1389221[iVar0 /*5*/].f_2) && unk_0xCA635244223E5D25(Global_1389221[iVar0 /*5*/].f_2))
			{
				return iVar0;
			}
			func_516(iVar0);
			return -1;
		}
		iVar0++;
	}
	return -1;
}

void func_516(int iParam0)
{
	char cVar0[64];
	char cVar1[64];
	int iVar2;
	int iVar3;
	
	if (iParam0 >= Global_1389382)
	{
		return;
	}
	if (unk_0x3F2B70A051A32606(Global_1389221[iParam0 /*5*/].f_2))
	{
		StringCopy(&cVar0, "CHAR_DEFAULT", 64);
		if (Global_1389221[iParam0 /*5*/].f_2 != 0)
		{
			StringCopy(&cVar1, unk_0x3EF2973864CBE5FC(Global_1389221[iParam0 /*5*/].f_2), 64);
			unk_0xC16699C9E79C9231(&cVar1, &cVar1, &cVar0, &cVar0);
		}
		unk_0x709B7208105825BB(Global_1389221[iParam0 /*5*/].f_2);
	}
	iVar2 = iParam0;
	iVar3 = iVar2 + 1;
	while (iVar3 < Global_1389382)
	{
		Global_1389221[iVar2 /*5*/] = { Global_1389221[iVar3 /*5*/] };
		iVar2++;
		iVar3++;
	}
	func_517(&(Global_1389221[iVar2 /*5*/]));
	Global_1389382 = (Global_1389382 - 1);
}

void func_517(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = func_40();
	uParam0->f_2 = 0;
	uParam0->f_4 = 0;
	if (unk_0x25DDB354A40FFCDB())
	{
		uParam0->f_3 = unk_0x6CAAB7E78B5D978A();
	}
}

struct<4> func_518(int iParam0)
{
	char cVar0[32];
	
	if (func_6(iParam0, 0, 1))
	{
		Global_2515173 = { func_253(iParam0) };
		if (unk_0xC6C08C02733D02C8())
		{
			if (func_477(Global_2515173))
			{
				if (!unk_0xA20DDBBB15EC6235(&Global_2515173))
				{
					return cVar0;
				}
			}
		}
		else if (!unk_0xF9A94F315B890564(0))
		{
			return cVar0;
		}
		if (func_522(&Global_2515173))
		{
			Global_2515103 = { func_520(iParam0) };
			func_519(&Global_2515103, &cVar0);
		}
	}
	return cVar0;
}

void func_519(var uParam0, char* sParam1)
{
	unk_0xA36843D7CCD081D6(uParam0, 35, sParam1);
}

struct<35> func_520(int iParam0)
{
	struct<13> Var0;
	struct<35> Var1;
	
	if (func_521(iParam0))
	{
		return Global_1312928[unk_0x460153A63B9477BC() /*35*/];
	}
	Var0 = { func_253(iParam0) };
	unk_0x192BD21E18525C69(&Var1, 35, &Var0);
	return Var1;
}

int func_521(int iParam0)
{
	if (iParam0 == unk_0x460153A63B9477BC())
	{
		return 1;
	}
	return 0;
}

int func_522(var uParam0)
{
	if (unk_0xDCA94C1EA9942FBD())
	{
		if (unk_0xE2FBD13450B2DA21() && unk_0xBF9EC1ED7E386622(uParam0))
		{
			return 1;
		}
	}
	return 0;
}

int func_523(int iParam0, int iParam1)
{
	if (iParam1 == 27)
	{
		if ((func_156(iParam0) || func_525(iParam0)) || func_524(iParam0))
		{
			return 0;
		}
	}
	if (!func_447(iParam0))
	{
		return 0;
	}
	if ((!func_531(iParam0) && Global_2425869[iParam0 /*443*/].f_240 == -1) && !func_530(iParam0))
	{
		return 0;
	}
	return 1;
}

bool func_524(int iParam0)
{
	if (func_156(iParam0))
	{
		return 1;
	}
	return unk_0xCE990E643CD9D0E5(Global_1630317[iParam0 /*595*/].f_1, 8);
}

int func_525(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return (unk_0xCE990E643CD9D0E5(Global_1630317[iParam0 /*595*/].f_1, 10) || unk_0xCE990E643CD9D0E5(Global_1630317[iParam0 /*595*/].f_1, 9));
	}
	return 0;
}

int func_526(int iParam0)
{
	int iVar0;
	
	if (iParam0 == func_40())
	{
		return 0;
	}
	if (func_96(iParam0, 0))
	{
		return 0;
	}
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		if (unk_0xCE990E643CD9D0E5(Global_1590682[iVar0 /*883*/].f_142, 2))
		{
			return 0;
		}
	}
	return 1;
}

int func_527()
{
	switch (func_102(unk_0x460153A63B9477BC()))
	{
		case 179:
		case 180:
		case 182:
		case 183:
		case 184:
		case 185:
		case 186:
		case 189:
		case 190:
		case 191:
		case 192:
		case 195:
		case 197:
		case 198:
		case 200:
		case 201:
		case 202:
		case 203:
		case 204:
		case 206:
		case 207:
		case 208:
		case 209:
		case 211:
			return 1;
		
		default:
	}
	switch (func_497(unk_0x460153A63B9477BC()))
	{
		case 131:
		case 140:
		case 138:
		case 146:
			return 1;
			break;
	}
	if (func_155(unk_0x460153A63B9477BC()))
	{
		switch (func_102(unk_0x460153A63B9477BC()))
		{
			case 148:
			case 151:
			case 152:
			case 153:
			case 157:
			case 159:
			case 162:
			case 164:
			case 142:
				return 1;
				break;
			}
	}
	if (func_496(unk_0x460153A63B9477BC()))
	{
		return 1;
	}
	return 0;
}

int func_528(int iParam0, int iParam1)
{
	if (Global_1630317[iParam0 /*595*/].f_11.f_33 != -1 && func_118(Global_1630317[iParam0 /*595*/].f_11.f_33))
	{
		return 1;
	}
	if (iParam1 && Global_1630317[iParam0 /*595*/].f_11.f_32 != -1)
	{
		if (func_118(Global_1630317[iParam0 /*595*/].f_11.f_32))
		{
			return 1;
		}
	}
	return 0;
}

void func_529(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (func_6(unk_0xF1110FE23C67293A(iVar0), 0, 1))
		{
			iVar1 = unk_0xF1110FE23C67293A(iVar0);
			if (!func_96(iVar1, 0))
			{
				if ((func_531(iVar1) || Global_2425869[iVar1 /*443*/].f_240 != -1) || func_530(iVar1))
				{
					if (func_179(iVar1, iParam1, 0))
					{
						(*iParam0)[iVar0] = *iParam2;
						*iParam2++;
						*iParam3++;
					}
				}
			}
		}
		iVar0++;
	}
}

bool func_530(int iParam0)
{
	return Global_1590682[iParam0 /*883*/].f_196 != 0;
}

int func_531(int iParam0)
{
	if (func_6(iParam0, 0, 1))
	{
		if (func_6(unk_0x460153A63B9477BC(), 0, 1))
		{
			if (unk_0x56B60AE958412839(iParam0, unk_0x460153A63B9477BC()) || (func_102(iParam0) == 233 && func_532(iParam0)))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_532(int iParam0)
{
	bool bVar0;
	bool bVar1;
	
	bVar0 = func_533(unk_0x460153A63B9477BC());
	bVar1 = func_533(iParam0);
	if ((bVar0 && !bVar1) || (!bVar0 && bVar1))
	{
		return 0;
	}
	return 1;
}

bool func_533(int iParam0)
{
	return func_534(&(Global_2425869[iParam0 /*443*/].f_429), 0);
}

bool func_534(var uParam0, int iParam1)
{
	return unk_0xCE990E643CD9D0E5(*uParam0, iParam1);
}

void func_535(int iParam0, int iParam1, int iParam2)
{
	if (unk_0x95EF219D38B20CFF(*iParam0))
	{
		unk_0x830F007E19C63E14(*iParam0, "SET_DATA_SLOT_EMPTY");
		unk_0xAD291B8F75D737AD(iParam1);
		unk_0xAD291B8F75D737AD(iParam2);
		unk_0xE1FDD153F5858534();
	}
}

void func_536(bool bParam0)
{
	if (bParam0)
	{
		if (Global_1377233.f_2 == 0)
		{
			Global_1377233.f_2 = 1;
		}
	}
	else if (Global_1377233.f_2 == 1)
	{
		Global_1377233.f_2 = 0;
	}
}

void func_537()
{
	if (unk_0xCE990E643CD9D0E5(Global_2540384.f_4652, 1))
	{
		if (func_159())
		{
			func_538();
		}
	}
}

void func_538()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		if (Global_2440049.f_2834[iVar0 /*80*/].f_2 != 0)
		{
			Global_2440049.f_2834[iVar0 /*80*/].f_2 = 5;
			func_377(&(Global_2440049.f_2834[iVar0 /*80*/].f_69), 1);
		}
		iVar0++;
	}
}

int func_539()
{
	if (unk_0xCE990E643CD9D0E5(Global_2540384.f_4652, 0) && func_159())
	{
		return 1;
	}
	if (unk_0xCE990E643CD9D0E5(Global_2540384.f_4652, 1) && func_159())
	{
		return 1;
	}
	return 0;
}

int func_540()
{
	if (func_159())
	{
		if (func_376(Global_2440049.f_2834[0 /*80*/].f_1))
		{
			return 1;
		}
	}
	return 0;
}

int func_541()
{
	if (func_159())
	{
		if (func_390(Global_2440049.f_2834[0 /*80*/].f_1))
		{
			return 1;
		}
	}
	return 0;
}

void func_542(int iParam0)
{
	if (Global_1377233.f_1 != Global_1377233)
	{
		Global_1377233.f_1 = Global_1377233;
	}
	if (Global_1377233 != iParam0)
	{
		Global_1377233 = iParam0;
	}
}

int func_543(int iParam0, int iParam1, var uParam2, var uParam3, bool bParam4, bool bParam5, char* sParam6)
{
	struct<4> Var0;
	char* sVar1;
	bool bVar2;
	bool bVar3;
	float fVar4;
	int iVar5;
	char* sVar6;
	
	StringCopy(&Var0, "", 16);
	bVar2 = iParam1 == 20;
	bVar3 = func_583(iParam1);
	fVar4 = func_582();
	iVar5 = -1;
	if (iParam1 == 27 || iParam1 == 28)
	{
		if (func_581())
		{
			if (func_580() > 0 && Global_1574193)
			{
				unk_0xD10328357EA7B9E5();
				unk_0x530DC1525CA60B00(fVar4);
				unk_0x4CB4237D8858ADA6(18);
				if (unk_0xDABD547F0DF2906C())
				{
					unk_0x64083C4199676F44();
				}
				unk_0x4CB4237D8858ADA6(10);
			}
		}
	}
	if (!bParam5)
	{
		if (!func_570())
		{
			func_569(iParam0, uParam2, 1);
			return 0;
		}
	}
	if (unk_0xCE990E643CD9D0E5(Global_2540384.f_4655, 26))
	{
		func_569(iParam0, uParam2, 1);
		return 0;
	}
	if (!func_137(&(uParam2->f_19)))
	{
		if (func_580() == 1)
		{
			func_568(bVar3, iParam0, 0);
			func_4(&(uParam2->f_19), 0, 0);
			func_569(iParam0, uParam2, 0);
			unk_0xBE20AB8238688965(&(Global_2540384.f_4656), 5);
		}
	}
	if (func_137(&(uParam2->f_19)) || bParam5)
	{
		if (unk_0xDABD547F0DF2906C())
		{
			unk_0x64083C4199676F44();
		}
		unk_0x4CB4237D8858ADA6(10);
		if (func_3(&(uParam2->f_19), 10000, 0) || (func_580() == 0 && !bParam5))
		{
			func_569(iParam0, uParam2, 1);
			return 0;
		}
		else
		{
			if (bVar2 == 0)
			{
				func_567();
				if (iParam1 == 27 || iParam1 == 28)
				{
					unk_0xD10328357EA7B9E5();
				}
				unk_0x4CB4237D8858ADA6(18);
			}
			if (!unk_0xCE990E643CD9D0E5(uParam2->f_33, 0))
			{
				if (bVar2 == 0)
				{
					func_567();
					if (iParam1 == 27 || iParam1 == 28)
					{
						unk_0xD10328357EA7B9E5();
					}
					unk_0x4CB4237D8858ADA6(18);
				}
				unk_0x530DC1525CA60B00(fVar4);
				if (func_568(bVar3, iParam0, 0))
				{
					func_535(iParam0, 0, 0);
					sVar1 = func_565(iParam1, &(Global_4456448.f_82715), bParam4);
					Var0 = { func_563(iParam1) };
					if (bParam4)
					{
						func_560(iParam0, sVar1, "", 0, -1, -1, 1);
					}
					else if (iParam1 == 27)
					{
						func_553(iParam0, func_557(uParam2), func_554(uParam2), -1);
					}
					else if (iParam1 == 28)
					{
						sVar6 = func_551(uParam2);
						if (!unk_0x7BCC91F3C1CF24E8(sParam6))
						{
							sVar6 = sParam6;
						}
						func_549(iParam0, sVar6, func_550(), -1);
					}
					else if (func_491())
					{
						uParam2->f_34 = Global_1574192;
						func_560(iParam0, sVar1, &Var0, 1, -1, Global_1574192, 1);
					}
					else if (bVar2)
					{
						iVar5 = func_544(iParam1);
						uParam2->f_34 = Global_1574192;
						func_560(iParam0, sVar1, "", 0, iVar5, Global_1574192, 1);
					}
					else
					{
						iVar5 = func_544(iParam1);
						func_560(iParam0, sVar1, &Var0, 1, iVar5, -1, 1);
					}
					unk_0xBE20AB8238688965(&(uParam2->f_33), 0);
				}
			}
			if (unk_0xCE990E643CD9D0E5(uParam2->f_33, 0))
			{
				Global_1574191 = uParam3;
				Global_1574190 = 1;
				unk_0x530DC1525CA60B00(fVar4);
				if (bVar2)
				{
					if (uParam2->f_34 != Global_1574192)
					{
						unk_0xD2459066EA58CE43(&(uParam2->f_33), 0);
					}
				}
				return 1;
			}
		}
	}
	return 0;
}

int func_544(int iParam0)
{
	int iVar0;
	
	iVar0 = -1;
	if (func_548())
	{
		iVar0 = 2;
	}
	switch (iParam0)
	{
		case 40:
			iVar0 = 22;
			break;
		
		case 0:
		case 31:
		case 30:
		case 32:
		case 33:
		case 34:
		case 35:
		case 36:
		case 37:
		case 38:
		case 39:
			iVar0 = 3;
			break;
		
		case 2:
			iVar0 = 3;
			break;
		
		case 1:
			iVar0 = 6;
			break;
		
		case 3:
			iVar0 = 5;
			break;
		
		case 26:
			iVar0 = 21;
			break;
		
		case 4:
		case 5:
		case 6:
		case 8:
		case 9:
		case 10:
		case 11:
			iVar0 = 4;
			break;
		
		case 7:
			iVar0 = 10;
			break;
		
		case 12:
		case 13:
		case 14:
		case 17:
			iVar0 = 2;
			break;
		
		case 15:
			iVar0 = 17;
			break;
		
		case 16:
			iVar0 = 18;
			break;
		
		case 18:
			if (func_547(unk_0x460153A63B9477BC()))
			{
				iVar0 = 20;
			}
			if (func_546(unk_0x460153A63B9477BC()))
			{
				iVar0 = 19;
			}
			break;
	}
	if (func_545(unk_0x460153A63B9477BC()))
	{
		iVar0 = 2;
	}
	if (func_275())
	{
		iVar0 = 20;
	}
	return iVar0;
}

bool func_545(int iParam0)
{
	return Global_2425869[iParam0 /*443*/].f_119 == 4;
}

bool func_546(int iParam0)
{
	return Global_2425869[iParam0 /*443*/].f_119 == 7;
}

bool func_547(int iParam0)
{
	return Global_2425869[iParam0 /*443*/].f_119 == 2;
}

bool func_548()
{
	return Global_4456448.f_1 == 0;
}

void func_549(int iParam0, char* sParam1, char* sParam2, int iParam3)
{
	if (unk_0x95EF219D38B20CFF(*iParam0))
	{
		unk_0x830F007E19C63E14(*iParam0, "SET_TITLE");
		if (unk_0x7BCC91F3C1CF24E8(sParam2))
		{
			func_457(sParam1);
		}
		else
		{
			unk_0xB23270F3D5E62FDE("FM_AE_BRACKT");
			unk_0x6A826E35A3096ED0(sParam1);
			unk_0x6A826E35A3096ED0(sParam2);
			unk_0x2042E9CA4306F725();
		}
		func_457("");
		if (iParam3 != -1)
		{
			unk_0xAD291B8F75D737AD(iParam3);
		}
		unk_0xE1FDD153F5858534();
	}
}

char* func_550()
{
	switch (func_102(unk_0x460153A63B9477BC()))
	{
		case 163:
			return "BD_SORT_1";
			break;
		
		case 160:
			return "BD_SORT_4";
			break;
		
		case 154:
			return "BD_SORT_3";
			break;
		
		case 155:
			return "BD_SORT_3";
			break;
	}
	return "";
}

char* func_551(var uParam0)
{
	switch (uParam0->f_112)
	{
		case 0:
			return "GR_DPD_E";
			break;
		
		case 1:
			return "GR_DPD_F";
			break;
		
		case 2:
			return "GR_DPD_S";
			break;
	}
	switch (uParam0->f_110)
	{
		case 0:
			return "GR_DPD_A";
			break;
		
		case 1:
			return "GR_DPD_B";
			break;
		
		case 2:
			return "GR_DPD_C";
			break;
		
		case 3:
			return "GR_DPD_D";
			break;
	}
	switch (func_102(unk_0x460153A63B9477BC()))
	{
		case 233:
			return "H2_DPAD_SET";
			break;
		
		case 180:
			return "GB_BIGUNLOAD_T";
			break;
		
		case 182:
			return "DEAL_DEALN";
			break;
		
		case 194:
			return "PI_BIK_13_0";
			break;
		
		case 189:
			return "PI_BIK_4_1";
			break;
		
		case 193:
			return "PI_BIK_13_1";
			break;
		
		case 205:
			return "PI_BIK_13_3";
			break;
		
		case 186:
			return "CELL_BIKER_CK";
			break;
		
		case 207:
			return "DV_SH_TITLE";
			break;
		
		case 208:
			return "BA_SH_TITLE";
			break;
		
		case 209:
			return "SHU_SH_TITLE";
			break;
		
		case 210:
			return "PI_BIK_13_4";
			break;
		
		case 183:
			return "CELL_BIKER_RESC";
			break;
		
		case 199:
			return "CELL_BIKER_SEAR";
			break;
		
		case 201:
			return "CELL_BIKER_STAN";
			break;
		
		case 142:
			return "PIM_MAGM210";
			break;
		
		case 163:
			return "PIM_MAGM608";
			break;
		
		case 160:
			return "PIM_MAGM604";
			break;
		
		case 154:
			return "PIM_MAGM602";
			break;
		
		case 155:
			return "PIM_MAGM603";
			break;
		
		case 148:
			if (func_121())
			{
				return "LBD_BKVBK";
			}
			return "PIM_MAGM201";
			break;
		
		case 151:
			if (func_127(1))
			{
				return "GB_DPAD_BMFD";
			}
			return "PIM_MAGM202";
			break;
		
		case 152:
			return "PIM_MAGM204";
			break;
		
		case 153:
			if (func_127(1))
			{
				return "PI_BIK_3_2";
			}
			return "PIM_MAGM601";
			break;
		
		case 157:
			return "PIM_MAGM207";
			break;
		
		case 159:
			return "PIM_MAGM206";
			break;
		
		case 162:
			return "PIM_MAGM607";
			break;
		
		case 164:
			return "PIM_MAGM212";
			break;
		
		case 166:
			return "GB_DPAD_HEAD";
		
		case 167:
			return "GB_DPAD_BUY";
		
		case 168:
			return "GB_DPAD_SELL";
		
		case 169:
			return "GB_DPAD_DEF";
		
		case 170:
			return "GB_DPAD_AIR";
		
		case 171:
			return "GB_DPAD_CASH";
		
		case 172:
			return "GB_DPAD_SAL";
		
		case 173:
			return "GB_DPAD_FRA";
		
		case 178:
			return "VEX_TITLEa";
		
		case 188:
			return "VEX_TITLEb";
		
		case 218:
			return "FRT_MODE";
		
		case 217:
			return "FRT_TRNS";
		
		case 214:
			return "MODE_PLW";
		
		case 215:
			return "MODE_FUL";
		
		case 216:
			return "MODE_AA";
		
		case 219:
			return "MODE_VEL";
		
		case 220:
			return "MODE_RMP";
		
		case 221:
			return "MODE_STK";
		
		case 225:
			return "GR_TITLEL";
		
		case 226:
			return "GRS_TITLEL";
		
		case 227:
			return "GRD_TITLEL";
		
		case 195:
			return "GB_STEAL_T";
		
		case 198:
			return "SC_MENU_TITLE";
		
		case 190:
			return "GB_DPAD_BSEL";
		
		case 191:
			return "GB_DPAD_BDEF";
		
		case 185:
			return "GB_DPAD_GFH";
		
		case 197:
			return "GB_DPAD_JB";
		
		case 179:
			return "CELL_JOUST";
		
		case 200:
			return "CAG_BLIP";
		
		case 192:
			if (func_552(Global_1630317[unk_0x460153A63B9477BC() /*595*/].f_11.f_181))
			{
				return "GB_DPAD_BSET";
			}
			return "GB_DPAD_BBUY";
			break;
	}
	return "";
}

int func_552(int iParam0)
{
	switch (iParam0)
	{
		case 15:
		case 16:
		case 17:
		case 18:
		case 19:
			return 1;
		
		default:
	}
	return 0;
}

void func_553(int iParam0, char* sParam1, char* sParam2, int iParam3)
{
	if (unk_0x95EF219D38B20CFF(*iParam0))
	{
		unk_0x830F007E19C63E14(*iParam0, "SET_TITLE");
		if (unk_0x7BCC91F3C1CF24E8(sParam2))
		{
			func_457(sParam1);
		}
		else if (func_497(unk_0x460153A63B9477BC()) == 133)
		{
			unk_0xB23270F3D5E62FDE("FM_AE_BRACKT_C");
			unk_0x6A826E35A3096ED0(sParam1);
			unk_0x6A826E35A3096ED0(sParam2);
			unk_0x2042E9CA4306F725();
		}
		else
		{
			unk_0xB23270F3D5E62FDE("FM_AE_BRACKT");
			unk_0x6A826E35A3096ED0(sParam1);
			unk_0x6A826E35A3096ED0(sParam2);
			unk_0x2042E9CA4306F725();
		}
		func_457("");
		if (iParam3 != -1)
		{
			unk_0xAD291B8F75D737AD(iParam3);
		}
		unk_0xE1FDD153F5858534();
	}
}

char* func_554(var uParam0)
{
	int iVar0;
	
	iVar0 = func_497(unk_0x460153A63B9477BC());
	if (func_556())
	{
		if (uParam0->f_103 != -1)
		{
			iVar0 = uParam0->f_103;
		}
	}
	switch (iVar0)
	{
		case 131:
			return "";
		
		case 132:
			return "FM_AE_SORT_5";
		
		case 133:
			switch (func_555())
			{
				case 0:
					return "FM_AE_SORT_2";
				
				case 1:
					return "FM_AE_SORT_2";
				
				case 2:
					return "FM_AE_SORT_3";
				
				case 3:
					return "FM_AE_SORT_2";
				
				case 4:
					return "FM_AE_SORT_2";
				
				case 5:
					return "FM_AE_SORT_2";
				
				case 6:
					return "FM_AE_SORT_2";
				
				case 7:
					return "FM_AE_SORT_13";
				
				case 8:
					return "FM_AE_SORT_4";
				
				case 9:
					return "FM_AE_SORT_2";
				
				case 10:
					return "FM_AE_SORT_2";
				
				case 11:
					return "FM_AE_SORT_2";
				
				case 12:
					return "FM_AE_SORT_2";
				
				case 13:
					return "FM_AE_SORT_2";
				
				case 14:
					return "FM_AE_SORT_5";
				
				case 15:
					return "FM_AE_SORT_9";
				
				case 16:
					return "FM_AE_SORT_9";
				
				case 17:
					return "FM_AE_SORT_9";
				
				case 18:
					return "FM_AE_SORT_9";
				
				default:
			}
			break;
		
		case 136:
			return "";
		
		case 138:
			return "";
		
		case 139:
			return "FM_AE_SORT_10";
		
		case 140:
			return "";
		
		case 141:
			return "FM_AE_SORT_5";
		
		case 144:
			return "FM_AE_SORT_1";
		
		case 129:
			return "FM_AE_SORT_9";
	}
	return "";
}

int func_555()
{
	if (func_497(unk_0x460153A63B9477BC()) == 133)
	{
		return Global_2540384.f_5109;
	}
	return -1;
}

bool func_556()
{
	return Global_1590555;
}

char* func_557(var uParam0)
{
	int iVar0;
	
	iVar0 = func_497(unk_0x460153A63B9477BC());
	if (func_556())
	{
		if (uParam0->f_103 != -1)
		{
			iVar0 = uParam0->f_103;
		}
	}
	switch (iVar0)
	{
		case 131:
			return "PIM_TA9";
		
		case 132:
			if (func_559() == 0)
			{
				return "CPC_TILEL";
			}
			else if (func_559() == 1)
			{
				return "CPC_TILELA";
			}
			return "PIM_TA0";
			break;
		
		case 133:
			switch (func_555())
			{
				case 0:
					return "AMCH_0SLC";
				
				case 1:
					return "AMCH_1SLC";
				
				case 2:
					return "AMCH_2SLC";
				
				case 3:
					return "AMCH_3SLC";
				
				case 4:
					return "AMCH_4SLC";
				
				case 5:
					return "AMCH_5SLC";
				
				case 6:
					return "AMCH_6SLC";
				
				case 7:
					return "AMCH_7SLC";
				
				case 8:
					return "AMCH_8SLC";
				
				case 9:
					return "AMCH_12SLC";
				
				case 10:
					return "AMCH_13SLC";
				
				case 11:
					return "AMCH_15SLC";
				
				case 12:
					return "AMCH_16SLC";
				
				case 13:
					return "AMCH_23SLC";
				
				case 14:
					return "AMCH_9SLC";
				
				case 15:
					return "AMCH_19SLC";
				
				case 16:
					return "AMCH_20SLC";
				
				case 17:
					return "AMCH_21SLC";
				
				case 18:
					return "AMCH_22SLC";
				
				default:
			}
			break;
		
		case 136:
			return "PIM_TA10";
		
		case 138:
			return "PIM_TA4";
		
		case 139:
			return "PIM_TA5";
		
		case 140:
			return "PIM_TA3";
		
		case 141:
			return "PIM_TA8";
		
		case 144:
			return "PIM_TA2";
		
		case 129:
			if (func_558() == 1)
			{
				return "FM_AE_TITL_12";
			}
			else
			{
				return "PIM_TA7";
			}
			break;
		
		case 146:
			return "PIM_TA6";
	}
	return "";
}

int func_558()
{
	return Global_2540384.f_5112;
}

int func_559()
{
	if (func_497(unk_0x460153A63B9477BC()) == 132)
	{
		return Global_2540384.f_5107;
	}
	return -1;
}

void func_560(int iParam0, char* sParam1, char* sParam2, bool bParam3, int iParam4, int iParam5, int iParam6)
{
	int iVar0;
	int iVar1;
	
	if (unk_0x95EF219D38B20CFF(*iParam0))
	{
		unk_0x830F007E19C63E14(*iParam0, "SET_TITLE");
		if (bParam3)
		{
			func_500(sParam1);
		}
		else if (iParam5 != -1)
		{
			unk_0xB23270F3D5E62FDE(sParam1);
			unk_0x42710E9E08FA375A(iParam5);
			unk_0x2042E9CA4306F725();
		}
		else
		{
			func_457(sParam1);
		}
		if (func_581() && iParam6)
		{
			if (func_562())
			{
				iVar0 = 2;
				iVar1 = 2;
			}
			else
			{
				iVar0 = 1;
				iVar1 = 2;
			}
			unk_0xB23270F3D5E62FDE("LBD_DPD_CNT");
			unk_0x42710E9E08FA375A(iVar0);
			unk_0x42710E9E08FA375A(iVar1);
			unk_0x2042E9CA4306F725();
		}
		else
		{
			func_457(sParam2);
		}
		if (iParam4 != -1)
		{
			unk_0xAD291B8F75D737AD(iParam4);
			if (func_561(unk_0x460153A63B9477BC()))
			{
				unk_0xAD291B8F75D737AD(166);
			}
			else if (func_86())
			{
				unk_0xAD291B8F75D737AD(220);
			}
		}
		unk_0xE1FDD153F5858534();
	}
}

int func_561(int iParam0)
{
	if (func_547(iParam0) || func_546(iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_562()
{
	return Global_1574193;
}

struct<4> func_563(int iParam0)
{
	struct<4> Var0;
	
	StringCopy(&Var0, "", 16);
	if (func_564(unk_0x460153A63B9477BC()) || func_545(unk_0x460153A63B9477BC()))
	{
		return Var0;
	}
	switch (iParam0)
	{
		case 12:
		case 13:
		case 14:
		case 17:
		case 15:
		case 16:
		case 18:
			StringCopy(&Var0, "LBD_DIF_", 16);
			StringIntConCat(&Var0, Global_4456448.f_525, 16);
			break;
	}
	if (func_491() && unk_0xFC559366953F62B3())
	{
		StringCopy(&Var0, "LBD_DIF_", 16);
		StringIntConCat(&Var0, Global_4456448.f_525, 16);
	}
	return Var0;
}

bool func_564(int iParam0)
{
	return Global_2425869[iParam0 /*443*/].f_119 == 5;
}

char* func_565(int iParam0, char* sParam1, bool bParam2)
{
	var uVar0;
	
	if (iParam0 == 20 && (!func_491() || unk_0x7BCC91F3C1CF24E8(sParam1)))
	{
		uVar0 = func_566();
		return uVar0;
	}
	else if (bParam2)
	{
		return "HUD_LBD_IMP";
	}
	else if (iParam0 == 25)
	{
		if (Global_1574431 == 0)
		{
			Global_1574431 = 1;
		}
		return "HUD_LBD_OVR";
	}
	else if (!unk_0x7BCC91F3C1CF24E8(sParam1))
	{
		if (Global_1574431 == 1)
		{
			Global_1574431 = 0;
		}
		return sParam1;
	}
	else
	{
		if (Global_1574431 == 0)
		{
			Global_1574431 = 1;
		}
		switch (iParam0)
		{
			case 0:
			case 31:
				return "HUD_LBD_DM";
				break;
			
			case 1:
				return "HUD_LBD_TDM";
				break;
			
			case 5:
				return "HUD_LBD_GRCE";
				break;
			
			case 4:
			case 9:
			case 10:
			case 6:
			case 26:
			case 11:
				return "HUD_LBD_RCE";
				break;
			
			case 7:
				return "HUD_LBD_BRCE";
				break;
			
			case 18:
			case 14:
			case 17:
			case 15:
			case 13:
			case 12:
			case 16:
			case 19:
				return "HUD_TITLEMC";
				break;
			
			case 3:
				return "HUD_LBD_HRD";
				break;
			
			case 22:
				return "HUD_LBD_SHOO";
				break;
			}
	}
	return sParam1;
}

char* func_566()
{
	if (unk_0x45A083C1167D5EA3())
	{
		return "HUD_LBD_FMF";
	}
	if (unk_0x8F4B4AF1CA27A518())
	{
		return "HUD_LBD_FMC";
	}
	if (unk_0xE598AA6FDE2D9C78())
	{
		return "HUD_LBD_FMS";
	}
	if (unk_0x0287AAEDDA576E74())
	{
		return "HUD_LBD_FMI";
	}
	return "HUD_LBD_FMP";
}

void func_567()
{
	Global_42556 = 1;
}

bool func_568(bool bParam0, int iParam1, bool bParam2)
{
	if (bParam0)
	{
		*iParam1 = unk_0x5DEA4192B46CB99B("mp_mm_card_freemode");
	}
	else if (bParam2)
	{
		*iParam1 = unk_0x5DEA4192B46CB99B("MP_SPECTATOR_CARD");
	}
	else
	{
		*iParam1 = unk_0x5DEA4192B46CB99B("mp_matchmaking_card");
	}
	return unk_0x95EF219D38B20CFF(*iParam1);
}

void func_569(int iParam0, var uParam1, bool bParam2)
{
	unk_0xD2459066EA58CE43(&(uParam1->f_33), 7);
	Global_1574191 = 0;
	func_481();
	Global_1574190 = 0;
	uParam1->f_27 = 0;
	if (bParam2)
	{
		if (func_137(&(uParam1->f_19)))
		{
			func_482(&(uParam1->f_19));
			unk_0xD2459066EA58CE43(&(Global_2540384.f_4656), 5);
		}
	}
	if (unk_0x95EF219D38B20CFF(*iParam0))
	{
		unk_0x2E352DDBBF674246(iParam0);
	}
	if (unk_0xCE990E643CD9D0E5(uParam1->f_33, 0))
	{
		unk_0xD2459066EA58CE43(&(uParam1->f_33), 0);
	}
	unk_0x530DC1525CA60B00(0f);
}

int func_570()
{
	if (func_579())
	{
		return 0;
	}
	if (func_443())
	{
		return 0;
	}
	if (!func_577())
	{
		return 0;
	}
	if (!func_437())
	{
		return 0;
	}
	if (func_576(8, -1))
	{
		return 0;
	}
	if (func_580() == 2)
	{
		return 0;
	}
	if (Global_2540384.f_4607)
	{
		return 0;
	}
	if (func_441())
	{
		return 0;
	}
	else if (!func_446(unk_0x460153A63B9477BC(), 1, 0) && Global_1311716[0 /*4*/] > 0)
	{
		return 0;
	}
	if (((func_575(1) || func_573(1)) || Global_22411.f_124) || Global_22411)
	{
		return 0;
	}
	if (unk_0xF0C12886E5C1B20E())
	{
		return 0;
	}
	if (func_572() && Global_1696334 == 2)
	{
		return 0;
	}
	if (func_94(unk_0x460153A63B9477BC()) && !func_572())
	{
		return 0;
	}
	if (Global_1663771)
	{
		return 0;
	}
	if (Global_1663776)
	{
		return 0;
	}
	if (func_284(0))
	{
		return 0;
	}
	if (unk_0xCE990E643CD9D0E5(Global_1590682[unk_0x460153A63B9477BC() /*883*/].f_274.f_26, 4))
	{
		return 0;
	}
	if (Global_1370294)
	{
		return 0;
	}
	if ((Global_1690739.f_718.f_5 || Global_1693565.f_718.f_5) || Global_1689767.f_718.f_5)
	{
		return 0;
	}
	if ((Global_1697303.f_724.f_5 || Global_1697303.f_744.f_724.f_5) || Global_1697303.f_1497.f_724.f_5)
	{
		return 0;
	}
	if (Global_1704127.f_726.f_5)
	{
		return 0;
	}
	if (func_571(unk_0x460153A63B9477BC()))
	{
		return 0;
	}
	if ((Global_1370330 || Global_1370331) || Global_1370332)
	{
		return 0;
	}
	return 1;
}

bool func_571(int iParam0)
{
	if (iParam0 == func_40())
	{
		return 0;
	}
	return unk_0xCE990E643CD9D0E5(Global_2425869[iParam0 /*443*/].f_314.f_4, 6);
}

bool func_572()
{
	return (unk_0xCE990E643CD9D0E5(Global_4456448.f_30, 12) && unk_0xCE990E643CD9D0E5(Global_1696335, 0));
}

int func_573(bool bParam0)
{
	if (unk_0xDE4629DF35A51BEF())
	{
		if (!unk_0x5AEB5DDFFAD43CA5(unk_0x9B0761B4C3EB8BC7()))
		{
			if (func_574(unk_0x9B0761B4C3EB8BC7()))
			{
				if (unk_0x22D6FB6153F774D3(0, 25) || unk_0x22D6FB6153F774D3(0, 68))
				{
					return 0;
				}
			}
		}
	}
	if (Global_22411.f_130)
	{
		return 0;
	}
	if (unk_0x22D6FB6153F774D3(0, 19) || (!bParam0 && unk_0xB9C0D9B37277621D(0, 19)))
	{
		return 1;
	}
	if (unk_0xF8EDFF98A9C94C74())
	{
		if (((unk_0x22D6FB6153F774D3(0, 166) || unk_0x22D6FB6153F774D3(0, 167)) || unk_0x22D6FB6153F774D3(0, 168)) || unk_0x22D6FB6153F774D3(0, 169))
		{
			return 1;
		}
		if (!bParam0)
		{
			if (((unk_0xB9C0D9B37277621D(0, 166) || unk_0xB9C0D9B37277621D(0, 167)) || unk_0xB9C0D9B37277621D(0, 168)) || unk_0xB9C0D9B37277621D(0, 169))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_574(int iParam0)
{
	int iVar0;
	
	if (unk_0xE8CD061CB2B99F32())
	{
		if (!unk_0x5AEB5DDFFAD43CA5(iParam0))
		{
			unk_0x1386E5E658CE3032(iParam0, &iVar0, 1);
			if (((iVar0 == joaat("weapon_sniperrifle") || iVar0 == joaat("weapon_heavysniper")) || iVar0 == joaat("weapon_marksmanrifle")) || iVar0 == joaat("WEAPON_HEAVYSNIPER_MK2"))
			{
				return 1;
			}
		}
	}
	return 0;
}

bool func_575(bool bParam0)
{
	if (bParam0)
	{
		return (Global_22411.f_4 && Global_22411.f_104 == 4);
	}
	return Global_22411.f_4;
}

bool func_576(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 5:
			if (iParam1 > -1)
			{
				return Global_1377236.f_203[iParam1];
			}
			break;
	}
	return unk_0xCE990E643CD9D0E5(Global_1377236.f_1048, iParam0);
}

int func_577()
{
	if (func_578())
	{
		return 1;
	}
	if (unk_0x03DB5C6AABF8DA46())
	{
		return 0;
	}
	if (unk_0x5DA78AD6801A0523() || unk_0x5B772EFCB84373BE())
	{
		return 0;
	}
	if (unk_0x463040FA7A1E5224())
	{
		return 0;
	}
	return 1;
}

bool func_578()
{
	return Global_1312458;
}

bool func_579()
{
	return unk_0x578C4EF320340AF7() <= Global_22550.f_5878 + 100;
}

int func_580()
{
	return Global_1377236.f_68;
}

int func_581()
{
	if (Global_1574192 > 16)
	{
		return 1;
	}
	return 0;
}

float func_582()
{
	float fVar0;
	float fVar1;
	float fVar2;
	
	fVar2 = 0.6347182f;
	fVar1 = (1f - (1f - unk_0x1D5FD59B82DB8734()));
	fVar0 = (1f - (fVar1 - fVar2));
	return fVar0;
}

int func_583(int iParam0)
{
	switch (iParam0)
	{
		case 20:
		case 21:
		case 27:
		case 28:
		case 40:
			return 1;
		
		default:
	}
	return 0;
}

int func_584()
{
	if (func_585(unk_0x460153A63B9477BC()))
	{
		return Global_1319161;
	}
	return 0;
}

int func_585(int iParam0)
{
	if (unk_0x25DDB354A40FFCDB())
	{
		if (func_96(iParam0, 0))
		{
			return unk_0x118E43E714532022(iParam0);
		}
	}
	return 0;
}

int func_586()
{
	if (func_584())
	{
		return 1;
	}
	if (func_524(unk_0x460153A63B9477BC()))
	{
		return 0;
	}
	if (func_556())
	{
		return 1;
	}
	if (func_157(unk_0x460153A63B9477BC()))
	{
		switch (func_497(unk_0x460153A63B9477BC()))
		{
			case 131:
			case 132:
			case 133:
			case 136:
			case 138:
			case 139:
			case 141:
			case 144:
			case 146:
				return 1;
				break;
			
			case 140:
				if (!func_587(unk_0x460153A63B9477BC()))
				{
					return 1;
				}
				break;
			
			case 129:
				if (!func_587(unk_0x460153A63B9477BC()))
				{
					return 1;
				}
				break;
			
			case 174:
				if (!func_587(unk_0x460153A63B9477BC()))
				{
					return 1;
				}
				break;
			
			case 175:
				return 1;
				break;
			}
	}
	return 0;
}

bool func_587(int iParam0)
{
	return unk_0xCE990E643CD9D0E5(Global_1630317[iParam0 /*595*/].f_1, 4);
}

int func_588(int iParam0)
{
	if (iParam0 == 28)
	{
		if ((func_157(unk_0x460153A63B9477BC()) && !func_155(unk_0x460153A63B9477BC())) && !func_496(unk_0x460153A63B9477BC()))
		{
			return 1;
		}
	}
	if (iParam0 == 27)
	{
		if (func_103(unk_0x460153A63B9477BC(), 0) && func_155(unk_0x460153A63B9477BC()))
		{
			return 1;
		}
		if (func_141(unk_0x460153A63B9477BC()) == 3)
		{
			return 1;
		}
	}
	return 0;
}

void func_589()
{
	struct<14> Var0;
	int iVar1;
	int iVar2;
	
	if (!unk_0x47DBF174A0CB9D55(unk_0x9B0761B4C3EB8BC7(), false))
	{
		unk_0xD2459066EA58CE43(&iLocal_84, 4);
		unk_0xD2459066EA58CE43(&(Local_103[unk_0x59E2AD1A8ACEDA31() /*4*/].f_1), 14);
		unk_0xD2459066EA58CE43(&(Local_103[unk_0x59E2AD1A8ACEDA31() /*4*/].f_1), 15);
	}
	iVar1 = 0;
	while (iVar1 < func_14())
	{
		if (unk_0x3D70CCF2C9B362CD(func_28(iVar1)))
		{
			if (!unk_0xCE990E643CD9D0E5(Local_102.f_1, iVar1) && !unk_0xCE990E643CD9D0E5(Local_103[unk_0x59E2AD1A8ACEDA31() /*4*/].f_1, iVar1))
			{
				if (func_17() < 3)
				{
					if (unk_0xE0B3BC41DDA88DF0(unk_0x9B0761B4C3EB8BC7(), unk_0x770D3B2B4702434A(func_28(iVar1)), false))
					{
						func_601();
						unk_0xBE20AB8238688965(&(Local_103[unk_0x59E2AD1A8ACEDA31() /*4*/].f_1), 15);
						if (unk_0x10D3F7E169A49C44(unk_0x770D3B2B4702434A(func_28(iVar1)), -1, 0) == unk_0x9B0761B4C3EB8BC7())
						{
							unk_0xBE20AB8238688965(&(Local_103[unk_0x59E2AD1A8ACEDA31() /*4*/].f_1), 14);
						}
						if (!unk_0xCE990E643CD9D0E5(iLocal_84, 4))
						{
							if (unk_0xC2169C00B643278B(unk_0x770D3B2B4702434A(func_28(iVar1)), func_27(iVar1), IntToFloat(func_600()), IntToFloat(func_600()), IntToFloat(func_600()), false, true, 0))
							{
								unk_0xD2459066EA58CE43(&iLocal_84, 8);
								unk_0xBE20AB8238688965(&iLocal_84, 4);
							}
						}
						iVar2 = 0;
						while (iVar2 < func_14())
						{
							if (!unk_0xCE990E643CD9D0E5(Local_102.f_1, iVar2 + 4))
							{
								if (unk_0xCE990E643CD9D0E5(Local_103[unk_0x59E2AD1A8ACEDA31() /*4*/].f_1, 16))
								{
									if (unk_0x1A3D0DF92BF7D8C4(unk_0x460153A63B9477BC()) == 0 && unk_0x10D3F7E169A49C44(unk_0x770D3B2B4702434A(func_28(iVar1)), -1, 0) == unk_0x9B0761B4C3EB8BC7())
									{
										if (unk_0xC2169C00B643278B(unk_0x770D3B2B4702434A(func_28(iVar1)), func_599(iVar2), 2f, 1f, 2f, true, true, 0))
										{
											func_597(unk_0x770D3B2B4702434A(func_28(iVar1)), 4f, 1, 0.5f, 0, 0, 0);
											unk_0xBE20AB8238688965(&(Local_103[unk_0x59E2AD1A8ACEDA31() /*4*/].f_1), iVar1);
											unk_0xBE20AB8238688965(&(Local_103[unk_0x59E2AD1A8ACEDA31() /*4*/].f_1), iVar2 + 4);
											unk_0xBE20AB8238688965(&(Local_103[unk_0x59E2AD1A8ACEDA31() /*4*/].f_1), 18);
											unk_0xD2459066EA58CE43(&(Local_103[unk_0x59E2AD1A8ACEDA31() /*4*/].f_1), 14);
											unk_0xD2459066EA58CE43(&iLocal_84, 4);
											unk_0xD2459066EA58CE43(&iLocal_84, 8);
											Var0.f_10 = unk_0x460153A63B9477BC();
											Var0.f_11 = func_7();
											Var0.f_2 = 490202713;
											func_12(Var0, func_13(1));
											iVar2 = func_14();
										}
									}
								}
								else if (unk_0xC2169C00B643278B(unk_0x770D3B2B4702434A(func_28(iVar1)), func_599(iVar2), IntToFloat(func_596()), IntToFloat(func_596()), IntToFloat(func_596()), false, true, 0))
								{
									unk_0x0C0DE28672975DC3("WantedMusicDisabled", 1);
									if (func_35())
									{
										unk_0xCAD5C18968E57C30(unk_0x460153A63B9477BC(), func_595(), 0);
									}
									else
									{
										unk_0xCAD5C18968E57C30(unk_0x460153A63B9477BC(), func_594(), 0);
									}
									unk_0x4B86C627B5EABFBF(unk_0x460153A63B9477BC(), 0);
									unk_0xD2459066EA58CE43(&iLocal_84, 4);
									unk_0xBE20AB8238688965(&(Local_103[unk_0x59E2AD1A8ACEDA31() /*4*/].f_1), 16);
									unk_0x0C0DE28672975DC3("WantedMusicDisabled", 0);
								}
							}
							iVar2++;
						}
					}
				}
			}
			else
			{
				func_590(unk_0x770D3B2B4702434A(func_28(iVar1)), &(uLocal_104[iVar1]), 0, 1);
			}
		}
		iVar1++;
	}
}

int func_590(int iParam0, var uParam1, bool bParam2, bool bParam3)
{
	int iVar0;
	int iVar1;
	
	if (!func_592(iParam0, 1, 1, 0, 0, 0, 1, 0, 1))
	{
		if (unk_0x44F29CF6A0675F4F(unk_0x624736CA66E14161(unk_0x6CAAB7E78B5D978A(), *uParam1)) > 1000)
		{
			iVar0 = 0;
			while (iVar0 < 32)
			{
				iVar1 = unk_0xF1110FE23C67293A(iVar0);
				if (func_6(iVar1, 0, 1))
				{
					if (unk_0xE0B3BC41DDA88DF0(unk_0x1FA7B77001D60F9D(iVar1), iParam0, false))
					{
						func_591(func_163(iVar1), 0, 0f, 0, 0, 0, -1);
					}
				}
				iVar0++;
			}
			*uParam1 = unk_0x6CAAB7E78B5D978A();
		}
	}
	else if (!unk_0xAA5B806352173DEA(iParam0))
	{
		unk_0xDE298EE8EAAC0776(iParam0);
	}
	else
	{
		if (bParam3)
		{
			unk_0x69B8739B0B73352F(iParam0, true);
		}
		unk_0x6A8F948698B360B4(iParam0, false);
		if (bParam2)
		{
			unk_0x0312E5501F93E5AB(iParam0, true);
		}
		return 1;
	}
	return 0;
}

void func_591(int iParam0, int iParam1, float fParam2, int iParam3, int iParam4, int iParam5, int iParam6)
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

int func_592(int iParam0, int iParam1, bool bParam2, int iParam3, int iParam4, bool bParam5, bool bParam6, int iParam7, int iParam8)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	iVar1 = unk_0x99E61B3887CC8E71(iParam0) + 1;
	if (iParam4 || !unk_0xA59F96B50B97E63C(iParam0, 0))
	{
		iVar0 = 0;
		while (iVar0 < iVar1)
		{
			iVar2 = func_593(iParam0, (iVar0 - 1), bParam6, iParam7);
			if (unk_0xAE06B9E39EBDE049(iVar2))
			{
				if (iParam3 && iVar2 == unk_0x9B0761B4C3EB8BC7())
				{
				}
				else if (bParam2)
				{
					if (unk_0xD0390A93AF3907B8(iVar2))
					{
						iVar3 = unk_0xE4400E48E081F17A(iVar2);
						if (((!unk_0x5AEB5DDFFAD43CA5(iVar2) && iVar3 != func_40()) && func_6(iVar3, 1, 1)) || iParam8)
						{
							if (unk_0x1A3D0DF92BF7D8C4(unk_0xE4400E48E081F17A(iVar2)) == 0)
							{
								if (!bParam5)
								{
									return 0;
								}
							}
							else
							{
								return 0;
							}
						}
					}
				}
				else if (iParam1 == 0)
				{
					return 0;
				}
				else if (!unk_0x5AEB5DDFFAD43CA5(iVar2))
				{
					return 0;
				}
			}
			iVar0++;
		}
	}
	return 1;
}

int func_593(int iParam0, int iParam1, bool bParam2, int iParam3)
{
	int iVar0;
	
	if (!unk_0xB064AF9925F5537B(iParam0, iParam1, iParam3))
	{
		iVar0 = unk_0x10D3F7E169A49C44(iParam0, iParam1, iParam3);
	}
	if (bParam2)
	{
		if (!unk_0xAE06B9E39EBDE049(iVar0) && !unk_0xA59F96B50B97E63C(iParam0, 0))
		{
			iVar0 = unk_0x37022B7FE1589189(iParam0, iParam1);
			if (!unk_0xA59F96B50B97E63C(iVar0, 0))
			{
				if (unk_0x16BC17A8EDC701A2(iVar0, 451360105) == 1 || unk_0x16BC17A8EDC701A2(iVar0, -828834893) == 1)
				{
					if (vdist(unk_0x3E4D3CCC220BDFB1(iParam0, false), unk_0x3E4D3CCC220BDFB1(iVar0, false)) < 10f)
					{
						return iVar0;
					}
				}
			}
			iVar0 = -1;
		}
	}
	return iVar0;
}

var func_594()
{
	return Global_262145.f_12475;
}

var func_595()
{
	return Global_262145.f_12476;
}

int func_596()
{
	return Global_262145.f_12477;
}

int func_597(int iParam0, float fParam1, int iParam2, float fParam3, int iParam4, bool bParam5, bool bParam6)
{
	unk_0x779660A9E5364C4D(0, 71, 1);
	unk_0x779660A9E5364C4D(0, 72, 1);
	unk_0x779660A9E5364C4D(0, 76, 1);
	unk_0x779660A9E5364C4D(0, 73, 1);
	unk_0x779660A9E5364C4D(0, 59, 1);
	unk_0x779660A9E5364C4D(0, 60, 1);
	if (bParam5)
	{
		unk_0x779660A9E5364C4D(0, 75, 1);
	}
	unk_0x779660A9E5364C4D(0, 80, 1);
	if (!bParam6)
	{
		unk_0x779660A9E5364C4D(0, 69, 1);
		unk_0x779660A9E5364C4D(0, 70, 1);
		unk_0x779660A9E5364C4D(0, 68, 1);
	}
	unk_0x779660A9E5364C4D(0, 74, 1);
	unk_0x779660A9E5364C4D(0, 86, 1);
	unk_0x779660A9E5364C4D(0, 81, 1);
	unk_0x779660A9E5364C4D(0, 82, 1);
	unk_0x779660A9E5364C4D(0, 138, 1);
	unk_0x779660A9E5364C4D(0, 136, 1);
	unk_0x779660A9E5364C4D(0, 114, 1);
	unk_0x779660A9E5364C4D(0, 107, 1);
	unk_0x779660A9E5364C4D(0, 110, 1);
	unk_0x779660A9E5364C4D(0, 89, 1);
	unk_0x779660A9E5364C4D(0, 89, 1);
	unk_0x779660A9E5364C4D(0, 87, 1);
	unk_0x779660A9E5364C4D(0, 88, 1);
	unk_0x779660A9E5364C4D(0, 113, 1);
	unk_0x779660A9E5364C4D(0, 115, 1);
	unk_0x779660A9E5364C4D(0, 116, 1);
	unk_0x779660A9E5364C4D(0, 117, 1);
	unk_0x779660A9E5364C4D(0, 118, 1);
	unk_0x779660A9E5364C4D(0, 119, 1);
	unk_0x779660A9E5364C4D(0, 352, 1);
	unk_0x779660A9E5364C4D(0, 131, 1);
	unk_0x779660A9E5364C4D(0, 132, 1);
	unk_0x779660A9E5364C4D(0, 123, 1);
	unk_0x779660A9E5364C4D(0, 126, 1);
	unk_0x779660A9E5364C4D(0, 129, 1);
	unk_0x779660A9E5364C4D(0, 130, 1);
	unk_0x779660A9E5364C4D(0, 133, 1);
	unk_0x779660A9E5364C4D(0, 134, 1);
	unk_0xB78DC40D63D4FBA3();
	func_598(iParam0);
	if ((unk_0x578C4EF320340AF7() - Global_29) > 500)
	{
		unk_0xD4C86DEC93F19FB0(iParam0, fParam1, iParam2, iParam4);
	}
	Global_29 = unk_0x578C4EF320340AF7();
	if (!unk_0xA59F96B50B97E63C(iParam0, 0))
	{
		if (unk_0x0D77CDCF403AEBD2(unk_0xF3A639BEE7AADF55(iParam0)) <= fParam3)
		{
			return 1;
		}
	}
	return 0;
}

void func_598(int iParam0)
{
	if (!unk_0xA59F96B50B97E63C(iParam0, 0))
	{
		if (unk_0xAADB7E66E4BD2B67(iParam0))
		{
			if (unk_0xC1067169688057A8(iParam0))
			{
				unk_0x348DC18FDCA78997(iParam0, 0);
			}
		}
	}
}

Vector3 func_599(int iParam0)
{
	return Local_102.f_36[iParam0 /*3*/];
}

int func_600()
{
	return Global_262145.f_12478;
}

void func_601()
{
	if (!func_602(unk_0x460153A63B9477BC()))
	{
		func_158(25);
	}
}

bool func_602(int iParam0)
{
	return func_135(iParam0, 25);
}

void func_603()
{
	int iVar0;
	
	if (!unk_0xCE990E643CD9D0E5(Local_102.f_1, 17))
	{
		return;
	}
	if (!unk_0xCE990E643CD9D0E5(Local_103[unk_0x59E2AD1A8ACEDA31() /*4*/].f_1, 16))
	{
		if (func_6(unk_0x460153A63B9477BC(), 1, 1))
		{
			if (unk_0xB9FD7D4438BECDFC() != func_605())
			{
				unk_0x53797676AD34A9AA(func_605());
			}
			if (!unk_0xCE990E643CD9D0E5(iLocal_84, 8))
			{
				if (unk_0x4DC4117F94CD5B84(unk_0x460153A63B9477BC()))
				{
					if (func_35())
					{
						unk_0xCAD5C18968E57C30(unk_0x460153A63B9477BC(), func_605(), 0);
					}
					else
					{
						unk_0xCAD5C18968E57C30(unk_0x460153A63B9477BC(), func_604(), 0);
					}
					unk_0x4B86C627B5EABFBF(unk_0x460153A63B9477BC(), 0);
					unk_0xBE20AB8238688965(&iLocal_84, 8);
				}
			}
			else
			{
				unk_0x458523DB8A789DCF(unk_0x460153A63B9477BC());
				unk_0x0916A977A3E1C47A(unk_0x460153A63B9477BC());
			}
		}
		else
		{
			unk_0xD2459066EA58CE43(&iLocal_84, 8);
		}
	}
	else if (!unk_0xCE990E643CD9D0E5(Local_103[unk_0x59E2AD1A8ACEDA31() /*4*/].f_1, 17))
	{
		if (!func_6(unk_0x460153A63B9477BC(), 1, 1))
		{
			unk_0xBE20AB8238688965(&iLocal_84, 7);
		}
		else if (unk_0xCE990E643CD9D0E5(iLocal_84, 7))
		{
			if (unk_0x4DC4117F94CD5B84(unk_0x460153A63B9477BC()))
			{
				if (iLocal_91 > 0)
				{
					unk_0xCAD5C18968E57C30(unk_0x460153A63B9477BC(), iLocal_91, 0);
					unk_0x4B86C627B5EABFBF(unk_0x460153A63B9477BC(), 0);
				}
				unk_0xD2459066EA58CE43(&iLocal_84, 7);
			}
		}
		else
		{
			iVar0 = unk_0x1A3D0DF92BF7D8C4(unk_0x460153A63B9477BC());
			if (iVar0 == 0)
			{
				unk_0xD2459066EA58CE43(&iLocal_84, 8);
				unk_0xBE20AB8238688965(&(Local_103[unk_0x59E2AD1A8ACEDA31() /*4*/].f_1), 17);
			}
			else if (iVar0 != iLocal_91)
			{
				iLocal_91 = iVar0;
			}
		}
	}
	else if (unk_0xCE990E643CD9D0E5(iLocal_84, 4) && !unk_0xCE990E643CD9D0E5(iLocal_84, 8))
	{
		if (func_35())
		{
			unk_0xCAD5C18968E57C30(unk_0x460153A63B9477BC(), func_605(), 0);
		}
		else
		{
			unk_0xCAD5C18968E57C30(unk_0x460153A63B9477BC(), func_604(), 0);
		}
		unk_0x4B86C627B5EABFBF(unk_0x460153A63B9477BC(), 0);
		unk_0xBE20AB8238688965(&iLocal_84, 8);
	}
}

var func_604()
{
	return Global_262145.f_12473;
}

int func_605()
{
	return Global_262145.f_12474;
}

void func_606()
{
	if (!unk_0xCE990E643CD9D0E5(Local_103[unk_0x59E2AD1A8ACEDA31() /*4*/].f_1, 13))
	{
		if (func_6(unk_0x460153A63B9477BC(), 1, 1))
		{
			if (unk_0xC2169C00B643278B(unk_0x9B0761B4C3EB8BC7(), func_27(0), 100f, 100f, 100f, false, true, 0))
			{
				unk_0xBE20AB8238688965(&(Local_103[unk_0x59E2AD1A8ACEDA31() /*4*/].f_1), 13);
			}
		}
		if (unk_0xCE990E643CD9D0E5(Local_103[unk_0x59E2AD1A8ACEDA31() /*4*/].f_1, 15) || unk_0xCE990E643CD9D0E5(Local_102.f_1, 14))
		{
			unk_0xBE20AB8238688965(&(Local_103[unk_0x59E2AD1A8ACEDA31() /*4*/].f_1), 13);
		}
	}
}

void func_607()
{
	struct<2> Var0;
	
	if (!unk_0xCE990E643CD9D0E5(iLocal_84, 9))
	{
		switch (func_43())
		{
			case 0:
				StringCopy(&Var0, "GB_INTTXT_BOB0", 16);
				break;
			
			case 1:
				StringCopy(&Var0, "GB_INTTXT_BOB1", 16);
				break;
			
			case 2:
				StringCopy(&Var0, "GB_INTTXT_BOB2", 16);
				break;
			
			case 3:
				StringCopy(&Var0, "GB_INTTXT_BOB3", 16);
				break;
			
			case 4:
				StringCopy(&Var0, "GB_INTTXT_BOB4", 16);
				break;
			
			case 5:
				StringCopy(&Var0, "GB_INTTXT_BOB5", 16);
				break;
		}
		if (func_14() == 1)
		{
			StringConCat(&Var0, "1", 16);
		}
		if (func_450(82, &Var0, 2, 0, 0, 0, 0, 1, 0, 1))
		{
			unk_0xBE20AB8238688965(&iLocal_84, 9);
		}
	}
}

void func_608(int iParam0, struct<3> Param1, var uParam2, float fParam3, float fParam4, int iParam5)
{
	float fVar0;
	float fVar1;
	
	if ((((func_157(unk_0x460153A63B9477BC()) && !func_156(unk_0x460153A63B9477BC())) && !unk_0xCE990E643CD9D0E5(Global_1630317[unk_0x460153A63B9477BC() /*595*/].f_1, 8)) && (func_145(unk_0x460153A63B9477BC()) || func_144(unk_0x460153A63B9477BC()))) || func_650(Param1))
	{
		return;
	}
	Global_1676119 = { Param1 };
	fVar0 = vdist(unk_0x3E4D3CCC220BDFB1(unk_0x9B0761B4C3EB8BC7(), false), Param1);
	func_648(iParam0, fVar0);
	if (unk_0xF0C12886E5C1B20E() && unk_0xCFB49FF4012D7C68() == 15)
	{
		if (func_143(unk_0x460153A63B9477BC()) || func_647(unk_0x460153A63B9477BC()))
		{
			if (!unk_0x9257D9337B908AFC(1344549371))
			{
				unk_0x16611E08D2E0FBE9(1344549371);
			}
		}
		else if (unk_0x9257D9337B908AFC(1344549371))
		{
			unk_0x9182C03E20E1D981(1344549371);
		}
	}
	if (fVar0 < fParam3)
	{
		if (!(func_149(unk_0x460153A63B9477BC(), 21) || func_149(unk_0x460153A63B9477BC(), 25)))
		{
			func_646(Param1, 1, 0);
		}
		if (!*uParam2 && func_6(unk_0x460153A63B9477BC(), 1, 1))
		{
			*uParam2 = 1;
			if (func_645(iParam0))
			{
				unk_0x34FEEAC2548C3789(func_644(iParam0));
				if (func_643(iParam0, -1))
				{
					unk_0x53797676AD34A9AA(0);
					if (unk_0x1A3D0DF92BF7D8C4(unk_0x460153A63B9477BC()) > 0)
					{
						unk_0xCAD5C18968E57C30(unk_0x460153A63B9477BC(), 0, 1);
						unk_0x4B86C627B5EABFBF(unk_0x460153A63B9477BC(), 1);
					}
					unk_0xBE20AB8238688965(&(Global_1676119.f_3), 0);
				}
			}
			if (func_642(iParam0))
			{
				fVar1 = func_641(iParam0);
				if (fVar1 != 1f)
				{
					func_637(fVar1);
					unk_0xBE20AB8238688965(&(Global_1676119.f_3), 1);
				}
			}
			if (!Global_2391045)
			{
				if (func_636(iParam0) && func_143(unk_0x460153A63B9477BC()))
				{
					func_634(1);
					func_633(2);
				}
			}
			func_158(19);
		}
	}
	else
	{
		if (fVar0 > fParam4)
		{
			if (func_135(unk_0x460153A63B9477BC(), 19))
			{
				func_148(19);
			}
		}
		if (*uParam2 && func_6(unk_0x460153A63B9477BC(), 1, 1))
		{
			*uParam2 = 0;
			if (func_645(iParam0))
			{
				if (unk_0xCE990E643CD9D0E5(Global_1676119.f_3, 0))
				{
					unk_0x34FEEAC2548C3789(1f);
					unk_0x53797676AD34A9AA(5);
					unk_0xD2459066EA58CE43(&(Global_1676119.f_3), 0);
				}
			}
			if (func_642(iParam0))
			{
				func_632();
				unk_0xD2459066EA58CE43(&(Global_1676119.f_3), 1);
			}
			if (iParam5 && !func_157(unk_0x460153A63B9477BC()))
			{
				if (func_102(unk_0x460153A63B9477BC()) != 152)
				{
					func_610();
				}
			}
			if (func_284(2))
			{
				func_634(0);
				func_609(2);
			}
		}
	}
}

void func_609(int iParam0)
{
	unk_0xD2459066EA58CE43(&(Global_2540384.f_5188.f_45), iParam0);
}

void func_610()
{
	unk_0x13AF25746D6C3CA9(&(Global_2405074.f_24), &Global_2409333, 2);
	unk_0x13AF25746D6C3CA9(&(Global_2405074.f_26), &Global_2409335, 19);
	func_630();
	func_613(1, 1, 0);
	func_611();
}

void func_611()
{
	func_612(0, 0);
}

void func_612(int iParam0, int iParam1)
{
	Global_2405074.f_22 = iParam0;
	Global_2405074.f_23 = iParam1;
}

void func_613(bool bParam0, bool bParam1, bool bParam2)
{
	if (bParam1)
	{
		unk_0x13AF25746D6C3CA9(&(Global_2405074.f_45), &Global_2409354, 320);
	}
	else
	{
		Global_2405074.f_45 = { Global_2409354 };
		Global_2405074.f_45.f_49 = { Global_2409354.f_49 };
		Global_2405074.f_45.f_52 = Global_2409354.f_52;
		Global_2405074.f_45.f_53 = Global_2409354.f_53;
	}
	if (bParam0)
	{
		func_629();
	}
	if (!bParam2)
	{
		func_616(0, 1, 0, 1060320051, 1086324736, 1065353216, 1088421888, 1084227584, 0, 1066192077, 0, 0, 1, 0, 1109393408);
	}
	func_615(0);
	func_614();
}

void func_614()
{
	struct<6> Var0;
	
	if (Global_2405074.f_487.f_1 == unk_0x354AD085195C5FA6())
	{
		Global_2405074.f_487 = { Var0 };
	}
}

void func_615(bool bParam0)
{
	if (bParam0)
	{
		Global_2405074.f_707 = 0;
	}
	else
	{
		Global_2405074.f_707 = 1;
	}
}

void func_616(bool bParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14)
{
	if (bParam0)
	{
		if (func_628())
		{
			func_627();
		}
		Global_2405074.f_708.f_518 = unk_0x354AD085195C5FA6();
		Global_2405074.f_708.f_504 = iParam1;
		Global_2405074.f_708.f_505 = iParam2;
		Global_2405074.f_708.f_506 = iParam10;
		func_625();
		func_620(8, 0, 0, 0, 0);
		Global_2405074.f_708.f_507 = iParam11;
		Global_2405074.f_708.f_512 = iParam3;
		Global_2405074.f_708.f_513 = iParam4;
		Global_2405074.f_708.f_510 = iParam5;
		Global_2405074.f_708.f_511 = iParam6;
		Global_2405074.f_708.f_514 = iParam7;
		Global_2405074.f_708.f_515 = iParam8;
		Global_2405074.f_708.f_516 = iParam9;
		Global_2405074.f_708.f_517 = iParam14;
		Global_2405074.f_708.f_508 = iParam12;
		Global_2405074.f_708.f_509 = iParam13;
		Global_2405074.f_1747 = 1;
	}
	else
	{
		func_617();
	}
}

void func_617()
{
	if (func_628() && !func_619())
	{
		func_627();
	}
	if (func_619())
	{
		func_618();
	}
	else
	{
		func_625();
		func_620(0, 0, 0, 0, 0);
		Global_2405074.f_1747 = 0;
		Global_2405074.f_1746 = 0;
	}
}

void func_618()
{
	unk_0x13AF25746D6C3CA9(&(Global_2405074.f_708), &(Global_2405074.f_1227), 519);
	Global_2405074.f_487 = { Global_2405074.f_493 };
	if (unk_0x354AD085195C5FA6() == Global_2405074.f_708.f_518)
	{
		Global_2405074.f_1746 = 0;
	}
}

int func_619()
{
	if ((Global_2405074.f_1746 && !unk_0x354AD085195C5FA6() == Global_2405074.f_1227.f_518) && unk_0x7FD2BDF03806FD9D(Global_2405074.f_1227.f_518))
	{
		return 1;
	}
	return 0;
}

void func_620(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	if (Global_2440049.f_2005.f_703.f_16 != func_40())
	{
		if (unk_0xCE990E643CD9D0E5(Global_2425869[Global_2440049.f_2005.f_703.f_16 /*443*/].f_411, 0) && func_621())
		{
			iParam0 = 23;
		}
	}
	if (iParam0 != 18 && iParam0 != 17)
	{
		Global_2412648 = 0;
	}
	Global_2405074.f_487 = iParam0;
	Global_2405074.f_487.f_1 = unk_0x354AD085195C5FA6();
	Global_2405074.f_487.f_2 = iParam1;
	Global_2405074.f_487.f_3 = iParam2;
	Global_2405074.f_487.f_4 = iParam3;
	Global_2405074.f_487.f_5 = iParam4;
}

int func_621()
{
	if ((((((func_102(unk_0x460153A63B9477BC()) == 229 || func_102(unk_0x460153A63B9477BC()) == 191) || func_624()) || func_623()) || func_400(unk_0x460153A63B9477BC())) || Global_2515847.f_227 == 1) || (Global_2405074.f_1747 && func_622(unk_0x460153A63B9477BC())))
	{
		return 0;
	}
	return 1;
}

int func_622(int iParam0)
{
	if (func_145(iParam0))
	{
		return 1;
	}
	if (func_155(iParam0))
	{
		return 1;
	}
	return 0;
}

var func_623()
{
	return Global_1574411;
}

int func_624()
{
	if (Global_4456448 == 6)
	{
		return 1;
	}
	return 0;
}

void func_625()
{
	if (func_628() && !func_619())
	{
		func_627();
	}
	func_626();
	Global_2405074.f_708 = 0;
}

void func_626()
{
	int iVar0;
	struct<5> Var1;
	
	Var1.f_4 = 1065353216;
	iVar0 = 0;
	while (iVar0 < 100)
	{
		Global_2405074.f_708.f_1[iVar0 /*5*/] = { Var1 };
		iVar0++;
	}
}

void func_627()
{
	if (func_619())
	{
		if (Global_2405074.f_708.f_518 == Global_2405074.f_1227.f_518)
		{
			return;
		}
	}
	if (!unk_0x354AD085195C5FA6() == Global_2405074.f_708.f_518)
	{
		unk_0x13AF25746D6C3CA9(&(Global_2405074.f_1227), &(Global_2405074.f_708), 519);
		Global_2405074.f_493 = { Global_2405074.f_487 };
		Global_2405074.f_1746 = 1;
	}
}

int func_628()
{
	if ((Global_2405074.f_1747 && !unk_0x354AD085195C5FA6() == Global_2405074.f_708.f_518) && unk_0x7FD2BDF03806FD9D(Global_2405074.f_708.f_518))
	{
		return 1;
	}
	return 0;
}

void func_629()
{
	unk_0x13AF25746D6C3CA9(&(Global_2405074.f_365), &Global_2409674, 121);
}

void func_630()
{
	func_631();
}

void func_631()
{
	int iVar0;
	struct<4> Var1;
	
	iVar0 = 0;
	while (iVar0 < 50)
	{
		Global_2405074.f_2257[iVar0 /*4*/] = { Var1 };
		iVar0++;
	}
	Global_2405074.f_2256 = 0;
}

void func_632()
{
	if (unk_0x7FD2BDF03806FD9D(Global_2540384.f_5184))
	{
		if (!Global_2540384.f_5184 == unk_0x354AD085195C5FA6() && Global_2540384.f_5183 < 1f)
		{
			return;
		}
	}
	Global_2540384.f_5184 = -1;
	Global_2540384.f_5183 = 1f;
}

void func_633(int iParam0)
{
	unk_0xBE20AB8238688965(&(Global_2540384.f_5188.f_45), iParam0);
}

void func_634(int iParam0)
{
	if (func_635() && iParam0)
	{
		return;
	}
	if (iParam0 == Global_2391045)
	{
		return;
	}
	Global_2391045 = iParam0;
	Global_2391047 = 0;
	Global_2391048 = 0;
}

int func_635()
{
	if ((((Global_968397 != -1 && Global_968397 != 33) && Global_968397 != 35) && Global_968397 != 37) && Global_968397 != 21)
	{
		return 1;
	}
	return 0;
}

int func_636(int iParam0)
{
	switch (iParam0)
	{
		case 142:
		case 159:
		case 148:
		case 157:
		case 166:
		case 179:
		case 189:
		case 193:
		case 198:
		case 205:
			return 1;
		
		default:
	}
	return 0;
}

void func_637(float fParam0)
{
	float fVar0;
	
	if (unk_0x856D5567211886A2(unk_0x6C5C6B207AA78253()) == func_638())
	{
		return;
	}
	fVar0 = (Global_2540384.f_5183 - fParam0);
	if (unk_0x7FD2BDF03806FD9D(Global_2540384.f_5184))
	{
		if (!Global_2540384.f_5184 == unk_0x354AD085195C5FA6() && unk_0x0D77CDCF403AEBD2(fVar0) > 0.001f)
		{
			return;
		}
	}
	Global_2540384.f_5183 = fParam0;
	Global_2540384.f_5184 = unk_0x354AD085195C5FA6();
}

int func_638()
{
	switch (func_640())
	{
		case 0:
			return func_639();
			break;
		
		case 2:
			return joaat("creator");
			break;
	}
	return 0;
}

int func_639()
{
	switch (Global_2464595)
	{
		case 0:
			return joaat("freemode");
		
		default:
	}
	return joaat("freemode");
}

int func_640()
{
	return Global_30968;
}

float func_641(int iParam0)
{
	switch (iParam0)
	{
		case 142:
		case 157:
		case 159:
		case 151:
		case 148:
		case 164:
		case 152:
		case 153:
		case 154:
		case 155:
		case 160:
		case 162:
		case 166:
		case 173:
		case 169:
		case 167:
		case 168:
		case 170:
		case 178:
		case 179:
		case 189:
		case 180:
		case 182:
		case 183:
		case 190:
		case 191:
		case 192:
		case 193:
		case 194:
		case 199:
		case 201:
		case 185:
		case 197:
		case 186:
		case 198:
		case 195:
		case 205:
		case 207:
		case 208:
		case 209:
		case 216:
		case 218:
		case 215:
		case 214:
		case 220:
		case 221:
		case 217:
		case 219:
		case 225:
		case 226:
		case 227:
		case 229:
		case 230:
		case 233:
		case 237:
		case 238:
		case 239:
		case 240:
		case 241:
		case 242:
		case 244:
		case 248:
		case 249:
		case 250:
		case 243:
		case 158:
		case 181:
		case 256:
		case 258:
			return 0f;
		
		default:
	}
	return 1f;
}

int func_642(int iParam0)
{
	switch (iParam0)
	{
		case 152:
		case 164:
		case 151:
		case 170:
		case 169:
		case 201:
		case 191:
		case 198:
		case 180:
		case 200:
		case 208:
		case 216:
		case 218:
		case 215:
		case 214:
		case 220:
		case 221:
		case 217:
		case 219:
		case 227:
		case 237:
		case 238:
		case 239:
		case 240:
		case 241:
		case 242:
		case 244:
		case 248:
		case 249:
		case 250:
			return 1;
		
		default:
	}
	return 0;
}

int func_643(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 148:
		case 164:
		case 152:
		case 153:
		case 160:
			return 1;
		
		case 168:
			if ((iParam1 != 2 && iParam1 != 10) && iParam1 != 7)
			{
				return 1;
			}
			break;
		
		case 170:
		case 166:
		case 173:
			return 1;
		
		case 179:
		case 183:
		case 181:
		case 189:
		case 191:
		case 192:
		case 193:
		case 194:
		case 186:
		case 199:
		case 185:
		case 201:
		case 198:
		case 195:
		case 180:
		case 207:
		case 208:
		case 209:
		case 210:
		case 214:
		case 217:
		case 218:
		case 215:
		case 216:
		case 219:
		case 220:
		case 221:
		case 237:
		case 238:
		case 239:
		case 240:
		case 241:
		case 242:
		case 244:
		case 248:
		case 249:
		case 250:
		case 227:
			return 1;
		
		case 190:
			if (((iParam1 != 6 && iParam1 != 9) && iParam1 != 7) && iParam1 != 1)
			{
				return 1;
			}
			break;
	}
	return 0;
}

float func_644(int iParam0)
{
	switch (iParam0)
	{
		case 131:
		case 138:
		case 140:
		case 139:
		case 141:
		case 146:
		case 216:
		case 218:
		case 215:
		case 214:
		case 220:
		case 221:
		case 217:
		case 219:
		case 237:
		case 238:
		case 239:
		case 240:
		case 241:
		case 242:
		case 244:
		case 248:
		case 249:
		case 250:
			return 0f;
		
		case 144:
			return 0f;
		
		case 185:
			return 0f;
		
		default:
	}
	return 1f;
}

int func_645(int iParam0)
{
	switch (iParam0)
	{
		case 152:
		case 142:
		case 164:
		case 151:
		case 160:
		case 166:
		case 173:
		case 183:
		case 185:
		case 197:
		case 186:
		case 201:
		case 191:
		case 198:
		case 207:
		case 208:
		case 209:
		case 200:
		case 195:
		case 180:
		case 216:
		case 218:
		case 215:
		case 214:
		case 220:
		case 221:
		case 217:
		case 219:
		case 227:
		case 237:
		case 238:
		case 239:
		case 240:
		case 241:
		case 242:
		case 244:
		case 248:
		case 249:
		case 250:
			return 1;
		
		default:
	}
	return 0;
}

void func_646(struct<3> Param0, int iParam1, int iParam2)
{
	Global_2405074.f_45.f_49 = { Param0 };
	Global_2405074.f_45.f_52 = iParam1;
	Global_2405074.f_45.f_53 = iParam2;
}

int func_647(int iParam0)
{
	if (func_82(iParam0))
	{
		if (func_143(iParam0))
		{
			return 1;
		}
	}
	return 0;
}

void func_648(int iParam0, float fParam1)
{
	int iVar0;
	
	iVar0 = func_649(iParam0);
	if (iVar0 == -1)
	{
		return;
	}
	if (fParam1 < IntToFloat(iVar0))
	{
		func_601();
	}
}

int func_649(int iParam0)
{
	switch (iParam0)
	{
		case 152:
			return Global_262145.f_12530;
		
		case 142:
			return Global_262145.f_12518;
		
		case 157:
			return Global_262145.f_12485;
		
		case 159:
			return Global_262145.f_12468;
		
		case 162:
			return Global_262145.f_12579;
		
		case 173:
			return 100;
		
		case 170:
			return 100;
		
		default:
	}
	return -1;
}

int func_650(struct<3> Param0)
{
	if ((Param0.x == 0f && Param0.f_1 == 0f) && Param0.f_2 == 0f)
	{
		return 1;
	}
	return 0;
}

void func_651()
{
	struct<3> Var0;
	int iVar1;
	
	if (func_3(&uLocal_92, 5000, 0))
	{
		iVar1 = 0;
		while (iVar1 < func_14())
		{
			if (unk_0x3D70CCF2C9B362CD(func_28(iVar1)) && !unk_0xCE990E643CD9D0E5(Local_102.f_1, iVar1))
			{
				if (unk_0xAE06B9E39EBDE049(unk_0x770D3B2B4702434A(func_28(iVar1))) && unk_0xAE06B9E39EBDE049(unk_0x9B0761B4C3EB8BC7()))
				{
					if (func_6(unk_0x460153A63B9477BC(), 1, 1))
					{
						Local_88 = { unk_0x3E4D3CCC220BDFB1(unk_0x9B0761B4C3EB8BC7(), true) };
					}
					if (!unk_0xA59F96B50B97E63C(unk_0x770D3B2B4702434A(func_28(iVar1)), 0))
					{
						if (func_650(Var0))
						{
							Var0 = { unk_0x3E4D3CCC220BDFB1(unk_0x770D3B2B4702434A(func_28(iVar1)), true) };
							Local_89 = { Var0 };
						}
						else if (vdist(Local_88, Var0) > vdist(Local_88, unk_0x3E4D3CCC220BDFB1(unk_0x770D3B2B4702434A(func_28(iVar1)), true)))
						{
							Var0 = { unk_0x3E4D3CCC220BDFB1(unk_0x770D3B2B4702434A(func_28(iVar1)), true) };
						}
					}
				}
			}
			iVar1++;
		}
		Local_89 = { Var0 };
		func_482(&uLocal_92);
	}
}

void func_652()
{
	int iVar0;
	int iVar1;
	
	if (!unk_0xCE990E643CD9D0E5(Local_103[unk_0x59E2AD1A8ACEDA31() /*4*/].f_1, 13) && func_799(func_7(), 1))
	{
		if (!unk_0x8F678487EEBD8CE4(iLocal_87))
		{
			iLocal_87 = unk_0x6820C712C1DD618A(func_27(0));
			func_654(&iLocal_87, 12);
			unk_0x72BEFB9451782F60(iLocal_87, true);
			unk_0x06B9B7C215BA4E0A(iLocal_87, func_653(12));
		}
	}
	else
	{
		if (unk_0x8F678487EEBD8CE4(iLocal_87))
		{
			unk_0x93370FA10F15BE44(&iLocal_87);
		}
		iVar1 = 0;
		while (iVar1 < func_14())
		{
			if ((((unk_0x3D70CCF2C9B362CD(func_28(iVar1)) && !unk_0xA59F96B50B97E63C(unk_0x770D3B2B4702434A(func_28(iVar1)), 0)) && !unk_0xE0B3BC41DDA88DF0(unk_0x9B0761B4C3EB8BC7(), unk_0x770D3B2B4702434A(func_28(iVar1)), false)) && !unk_0xCE990E643CD9D0E5(Local_102.f_1, iVar1)) && !func_397())
			{
				if (!unk_0x8F678487EEBD8CE4(iLocal_85[iVar1]))
				{
					iLocal_85[iVar1] = unk_0x2BE000892D65EA2A(unk_0x770D3B2B4702434A(func_28(iVar1)));
					unk_0xE7B8403ABCA0391D(iLocal_85[iVar1], 461);
					if (func_799(func_7(), 1))
					{
						func_654(&(iLocal_85[iVar1]), 9);
					}
					else
					{
						func_654(&(iLocal_85[iVar1]), 6);
					}
					unk_0x370ED67F4079FC21(iLocal_85[iVar1], 1);
					unk_0xE346A71235BB8065(iLocal_85[iVar1], 12);
					unk_0xB023F5C66F5716C7(iLocal_85[iVar1], "GB_BB_B_VEH");
					unk_0xFA81E0FBD7F5ACA0(iLocal_85[iVar1], Global_262145.f_12363);
					if (!unk_0xCE990E643CD9D0E5(iLocal_84, 5))
					{
						unk_0x009A89A6CD1E6C3E(iLocal_85[iVar1], 1);
						unk_0x9178C42B36234BF1(iLocal_85[iVar1], 7000);
						if (iVar1 == (func_14() - 1))
						{
							unk_0xBE20AB8238688965(&iLocal_84, 5);
						}
					}
				}
			}
			else if (unk_0x8F678487EEBD8CE4(iLocal_85[iVar1]))
			{
				unk_0x93370FA10F15BE44(&(iLocal_85[iVar1]));
			}
			if (func_799(func_7(), 1))
			{
				if (((unk_0xCE990E643CD9D0E5(Local_103[unk_0x59E2AD1A8ACEDA31() /*4*/].f_1, 15) || unk_0xCE990E643CD9D0E5(Local_102.f_1, 14)) && !unk_0xCE990E643CD9D0E5(Local_102.f_1, iVar1 + 4)) && !func_397())
				{
					if (!unk_0x8F678487EEBD8CE4(iLocal_86[iVar1]))
					{
						iLocal_86[iVar1] = unk_0x6820C712C1DD618A(func_599(iVar1));
						func_654(&(iLocal_86[iVar1]), 12);
					}
					iVar0 = iVar1;
				}
				else if (unk_0x8F678487EEBD8CE4(iLocal_86[iVar1]))
				{
					unk_0x93370FA10F15BE44(&(iLocal_86[iVar1]));
				}
			}
			iVar1++;
		}
		if (unk_0x8F678487EEBD8CE4(iLocal_86[iVar0]) && !unk_0x5811215F395C896E(iLocal_86[iVar0]))
		{
			unk_0x72BEFB9451782F60(iLocal_86[iVar0], true);
			unk_0x06B9B7C215BA4E0A(iLocal_86[iVar0], func_653(12));
		}
	}
}

int func_653(int iParam0)
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

void func_654(int iParam0, int iParam1)
{
	int iVar0;
	
	if (unk_0x8F678487EEBD8CE4(*iParam0))
	{
		iVar0 = func_653(iParam1);
		unk_0xECC9A00CF1181EC2(*iParam0, iVar0);
	}
}

void func_655()
{
	int iVar0;
	
	if (unk_0xCE990E643CD9D0E5(Local_102.f_1, 17) || unk_0xCE990E643CD9D0E5(Local_102.f_1, 24))
	{
		iVar0 = 0;
		while (iVar0 < func_14())
		{
			if (!unk_0xCE990E643CD9D0E5(Local_102.f_1, iVar0) && !unk_0xCE990E643CD9D0E5(Local_102.f_1, iVar0 + 8))
			{
				if (unk_0xF7DE07F319727299(func_28(iVar0)))
				{
					if (unk_0xF05B7723022657B3(func_28(iVar0)))
					{
						unk_0x0312E5501F93E5AB(unk_0x770D3B2B4702434A(func_28(iVar0)), false);
					}
				}
			}
			iVar0++;
		}
	}
}

void func_656()
{
	int iVar0;
	
	func_657();
	if (func_397() || func_141(unk_0x460153A63B9477BC()) != 3)
	{
		return;
	}
	if (!unk_0xCE990E643CD9D0E5(iLocal_84, 2))
	{
		if (unk_0xCE990E643CD9D0E5(Local_102.f_1, 17) || unk_0xCE990E643CD9D0E5(Local_102.f_1, 24))
		{
			if (func_799(func_7(), 1))
			{
				if (!unk_0xDABD547F0DF2906C())
				{
					func_130("GB_BB_ALERT", -1);
					unk_0xBE20AB8238688965(&iLocal_84, 2);
				}
			}
			else
			{
				unk_0xBE20AB8238688965(&iLocal_84, 2);
			}
		}
	}
	if (!unk_0xCE990E643CD9D0E5(iLocal_84, 12))
	{
		if (unk_0xCE990E643CD9D0E5(Local_103[unk_0x59E2AD1A8ACEDA31() /*4*/].f_1, 16))
		{
			if (!unk_0xDABD547F0DF2906C())
			{
				func_130("GB_BB_LOSE", -1);
				unk_0xBE20AB8238688965(&iLocal_84, 12);
			}
		}
	}
	if (!unk_0xCE990E643CD9D0E5(iLocal_84, 10))
	{
		if (func_14() == 1)
		{
			unk_0xBE20AB8238688965(&iLocal_84, 10);
			return;
		}
		iVar0 = 0;
		while (iVar0 < func_14())
		{
			if (unk_0xCE990E643CD9D0E5(Local_102.f_1, iVar0 + 8))
			{
				if (!unk_0xDABD547F0DF2906C())
				{
					if (func_799(func_7(), 1))
					{
						func_130("GB_BB_DES", -1);
					}
					else if (func_104(1))
					{
						if (func_176())
						{
							func_130("GB_BB_DESF", -1);
						}
						else
						{
							func_130("GB_BB_DESR", -1);
						}
					}
					else
					{
						func_130("GB_BB_DESF", -1);
					}
					func_126(1);
					unk_0xBE20AB8238688965(&iLocal_84, 10);
				}
			}
			iVar0++;
		}
	}
}

void func_657()
{
	int iVar0;
	
	if (!unk_0xCE990E643CD9D0E5(Global_2540384.f_1797, 22))
	{
		iVar0 = func_497(unk_0x460153A63B9477BC());
		if (iVar0 != -1)
		{
			if (!func_659(0) && !func_659(func_658(iVar0)))
			{
				func_100(22);
			}
		}
	}
}

int func_658(int iParam0)
{
	switch (iParam0)
	{
		case 131:
			return 10;
		
		case 132:
			return 1;
		
		case 133:
			return 2;
		
		case 136:
			return 11;
		
		case 138:
			return 5;
		
		case 139:
			return 6;
		
		case 129:
			return 8;
		
		case 140:
			return 4;
		
		case 141:
			return 9;
		
		case 144:
			return 3;
		
		case 146:
			return 7;
		
		case 236:
			return 12;
		
		case 150:
			return 12;
		
		default:
	}
	return Global_262145.f_23647;
}

bool func_659(int iParam0)
{
	int iVar0;
	
	iVar0 = func_200(2481, -1, 0);
	return unk_0xCE990E643CD9D0E5(iVar0, iParam0);
}

void func_660()
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	int iVar4;
	
	if (func_397() || func_141(unk_0x460153A63B9477BC()) != 3)
	{
		return;
	}
	iVar4 = 0;
	while (iVar4 < func_14())
	{
		if (!unk_0xCE990E643CD9D0E5(Local_102.f_1, iVar4))
		{
			if (unk_0x3D70CCF2C9B362CD(func_28(iVar4)))
			{
				if (unk_0xAE06B9E39EBDE049(unk_0x9B0761B4C3EB8BC7()) && unk_0xAE06B9E39EBDE049(unk_0x770D3B2B4702434A(func_28(iVar4))))
				{
					if (!unk_0xA59F96B50B97E63C(unk_0x9B0761B4C3EB8BC7(), 0) && !unk_0xA59F96B50B97E63C(unk_0x770D3B2B4702434A(func_28(iVar4)), 0))
					{
						if (!unk_0xE0B3BC41DDA88DF0(unk_0x9B0761B4C3EB8BC7(), unk_0x770D3B2B4702434A(func_28(iVar4)), false))
						{
							if (func_799(func_7(), 1))
							{
								unk_0x28DD484BAEAF8437(9, &iVar0, &iVar1, &iVar2, &uVar3);
							}
							else
							{
								unk_0x28DD484BAEAF8437(6, &iVar0, &iVar1, &iVar2, &uVar3);
							}
							func_661(unk_0x770D3B2B4702434A(func_28(iVar4)), iVar0, iVar1, iVar2, 0);
						}
					}
				}
			}
		}
		iVar4++;
	}
}

void func_661(int iParam0, int iParam1, int iParam2, int iParam3, float fParam4)
{
	struct<3> Var0;
	struct<3> Var1;
	float fVar2;
	float fVar3;
	float fVar4;
	
	fVar2 = 0.5f;
	unk_0x140662B520844E45(unk_0x36FE6D3220816ADA(iParam0), &Var0, &Var1);
	fVar3 = ((Var1.f_2 - Var0.f_2) / 2f);
	fVar4 = (Var1.f_2 - fVar3);
	if (fVar2 <= (fVar4 + 0.1f))
	{
		fVar2 = (fVar4 + 0.4f);
	}
	fVar2 = (fVar2 + fParam4);
	unk_0xEC88D619C9994021(2, unk_0x3E4D3CCC220BDFB1(iParam0, true) + Vector((((Var1.f_2 - Var0.f_2) / 2f) + fVar2), 0f, 0f), 0f, 0f, 0f, 180f, 0f, 0f, 0.5f, 0.5f, 0.5f, iParam1, iParam2, iParam3, 100, 1, 1, 2, 0, 0, 0, false);
}

void func_662()
{
	if (func_397() || func_141(unk_0x460153A63B9477BC()) != 3)
	{
		if (func_113())
		{
			func_106();
		}
		return;
	}
	if (func_799(func_7(), 1))
	{
		if (!unk_0xCE990E643CD9D0E5(Local_103[unk_0x59E2AD1A8ACEDA31() /*4*/].f_1, 13))
		{
			func_670("GB_BB_GT_GOTO", func_672(), 0, 0);
		}
		else if ((unk_0xCE990E643CD9D0E5(Local_103[unk_0x59E2AD1A8ACEDA31() /*4*/].f_1, 16) && unk_0xCE990E643CD9D0E5(Local_103[unk_0x59E2AD1A8ACEDA31() /*4*/].f_1, 15)) && unk_0x1A3D0DF92BF7D8C4(unk_0x460153A63B9477BC()) > 0)
		{
			func_664("GB_BB_COPS", 0);
		}
		else if (unk_0xCE990E643CD9D0E5(Local_102.f_1, 15))
		{
			if (unk_0xCE990E643CD9D0E5(Local_103[unk_0x59E2AD1A8ACEDA31() /*4*/].f_1, 15))
			{
				func_664("GB_BB_GT_UDLVR", 0);
			}
			else if (unk_0xCE990E643CD9D0E5(Local_102.f_1, 14))
			{
				func_664("GB_BB_GT_DLVR1", 0);
			}
			else
			{
				func_664("GB_BB_GT_STEAL1", 0);
			}
		}
		else if (unk_0xCE990E643CD9D0E5(Local_103[unk_0x59E2AD1A8ACEDA31() /*4*/].f_1, 15))
		{
			func_664("GB_BB_GT_UDLVR", 0);
		}
		else if (unk_0xCE990E643CD9D0E5(Local_102.f_1, 14))
		{
			func_664("GB_BB_GT_DLVR", 0);
		}
		else
		{
			func_664("GB_BB_GT_STEAL", 0);
		}
	}
	else if (func_6(func_7(), 0, 1))
	{
		if (unk_0xCE990E643CD9D0E5(Local_102.f_1, 15))
		{
			func_663("GB_BB_GT_DSTRY1", func_368(func_7()), 0, 0);
		}
		else
		{
			func_663("GB_BB_GT_DSTRY", func_368(func_7()), 0, 0);
		}
	}
}

void func_663(char* sParam0, char* sParam1, int iParam2, bool bParam3)
{
	if (func_670(sParam0, sParam1, bParam3, iParam2))
	{
		Global_1312603 = 16;
		Global_1312603.f_56 = iParam2;
	}
}

void func_664(char* sParam0, bool bParam1)
{
	if (unk_0x7BCC91F3C1CF24E8(sParam0))
	{
		return;
	}
	if (unk_0xA221A4BC051BFCCE(sParam0) > 23)
	{
		return;
	}
	if (func_668(sParam0))
	{
		return;
	}
	func_107();
	Global_1312603 = 0;
	StringCopy(&(Global_1312603.f_1), unk_0x6C5C6B207AA78253(), 32);
	Global_1312603.f_9 = unk_0x856D5567211886A2(&(Global_1312603.f_1));
	StringCopy(&(Global_1312603.f_12), sParam0, 16);
	func_667();
	func_666(bParam1);
	func_665();
}

void func_665()
{
	unk_0xBE20AB8238688965(&(Global_1312603.f_59), 1);
}

void func_666(bool bParam0)
{
	if (bParam0)
	{
		unk_0xBE20AB8238688965(&(Global_1312603.f_59), 0);
		return;
	}
	unk_0xD2459066EA58CE43(&(Global_1312603.f_59), 0);
}

void func_667()
{
	Global_1312603.f_10 = unk_0x8C358101651A3F7C(unk_0x6CAAB7E78B5D978A(), 86400000);
	Global_1312603.f_11 = unk_0x6CAAB7E78B5D978A();
}

bool func_668(char* sParam0)
{
	if (!func_112())
	{
		return 0;
	}
	if (Global_1312603 == 11)
	{
		return func_669(sParam0);
	}
	if (unk_0x7BCC91F3C1CF24E8(sParam0))
	{
		return 0;
	}
	return unk_0x856D5567211886A2(sParam0) == unk_0x856D5567211886A2(&(Global_1312603.f_12));
}

bool func_669(char* sParam0)
{
	if (!func_112())
	{
		return 0;
	}
	if (unk_0x7BCC91F3C1CF24E8(sParam0))
	{
		return 0;
	}
	return unk_0x856D5567211886A2(sParam0) == unk_0x856D5567211886A2(&(Global_1312603.f_16));
}

int func_670(char* sParam0, char* sParam1, bool bParam2, int iParam3)
{
	if (unk_0x7BCC91F3C1CF24E8(sParam0))
	{
		return 0;
	}
	if (unk_0xA221A4BC051BFCCE(sParam0) > 23)
	{
		return 0;
	}
	if (unk_0x7BCC91F3C1CF24E8(sParam1))
	{
		return 0;
	}
	if (func_671(sParam0, sParam1) && Global_1312603.f_56 == Global_1312603.f_58)
	{
		return 0;
	}
	func_107();
	Global_1312603 = 3;
	StringCopy(&(Global_1312603.f_1), unk_0x6C5C6B207AA78253(), 32);
	Global_1312603.f_9 = unk_0x856D5567211886A2(&(Global_1312603.f_1));
	StringCopy(&(Global_1312603.f_12), sParam0, 16);
	StringCopy(&(Global_1312603.f_16), sParam1, 64);
	Global_1312603.f_58 = iParam3;
	Global_1312603.f_56 = iParam3;
	func_667();
	func_666(bParam2);
	func_665();
	return 1;
}

bool func_671(char* sParam0, char* sParam1)
{
	if (!func_112())
	{
		return 0;
	}
	if (unk_0x7BCC91F3C1CF24E8(sParam0))
	{
		return 0;
	}
	if (unk_0x7BCC91F3C1CF24E8(sParam1))
	{
		return 0;
	}
	if (!unk_0x856D5567211886A2(sParam0) == unk_0x856D5567211886A2(&(Global_1312603.f_12)))
	{
		return 0;
	}
	return unk_0x856D5567211886A2(sParam1) == unk_0x856D5567211886A2(&(Global_1312603.f_16));
}

char* func_672()
{
	switch (func_43())
	{
		case 0:
			return "GB_BB_GT_PS0";
		
		case 1:
			return "GB_BB_GT_PS1";
		
		case 2:
			return "GB_BB_GT_PS2";
		
		case 3:
			return "GB_BB_GT_PS3";
		
		case 4:
			return "GB_BB_GT_PS4";
		
		case 5:
			return "GB_BB_GT_PS5";
		
		default:
	}
	return "GB_BB_GT_PS0";
}

void func_673()
{
	int iVar0;
	
	if (func_397() || func_141(unk_0x460153A63B9477BC()) != 3)
	{
		return;
	}
	if (unk_0xCE990E643CD9D0E5(Local_102.f_1, 12))
	{
		if (func_137(&(Local_102.f_49)))
		{
			if (func_17() < 3)
			{
				iLocal_101 = (func_10() - func_678(&(Local_102.f_49), 0, 0));
			}
			if (iLocal_101 > 30000)
			{
				iVar0 = 1;
			}
			else
			{
				iVar0 = 6;
			}
			iLocal_101 = func_677(iLocal_101, 0);
			if (iLocal_101 > 0)
			{
				func_674(iLocal_101, "GB_WORK_END", 0, 0, -1, 0, 3, 0, iVar0, 0, 0, 0, iVar0, 0, 0, 0, 0, -1);
			}
			else
			{
				func_674(0, "GB_WORK_END", 0, 0, -1, 0, 3, 0, iVar0, 0, 0, 0, iVar0, 0, 0, 0, 0, -1);
			}
		}
	}
}

void func_674(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17)
{
	int iVar0;
	int iVar1;
	
	iVar0 = -1;
	iVar1 = 0;
	while (iVar1 <= 9)
	{
		if (iVar0 == -1)
		{
			if (func_676(7, iVar1) == 0)
			{
				iVar0 = iVar1;
			}
		}
		iVar1++;
	}
	if (iVar0 > -1)
	{
		Global_1378744.f_1 = 1;
		func_675(7, iVar0);
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

void func_675(int iParam0, int iParam1)
{
	unk_0xBE20AB8238688965(&(Global_1378744.f_6304[iParam0]), iParam1);
}

bool func_676(int iParam0, int iParam1)
{
	return unk_0xCE990E643CD9D0E5(Global_1378744.f_6304[iParam0], iParam1);
}

int func_677(int iParam0, int iParam1)
{
	if (iParam0 > iParam1)
	{
		return iParam0;
	}
	return iParam1;
}

int func_678(var uParam0, bool bParam1, bool bParam2)
{
	if (unk_0x25DDB354A40FFCDB() && !bParam1)
	{
		if (!bParam2)
		{
			return unk_0x624736CA66E14161(unk_0x6CAAB7E78B5D978A(), *uParam0);
		}
		else
		{
			return unk_0x624736CA66E14161(unk_0x29B9AF1CB5B8175D(), *uParam0);
		}
	}
	return unk_0x624736CA66E14161(unk_0x578C4EF320340AF7(), *uParam0);
}

void func_679()
{
	if (func_397())
	{
		return;
	}
	if (unk_0xCE990E643CD9D0E5(iLocal_84, 0))
	{
		if (!func_159())
		{
			if (func_799(func_7(), 1))
			{
				if (unk_0xCE990E643CD9D0E5(iLocal_84, 1))
				{
					if (!unk_0xDABD547F0DF2906C())
					{
						if (func_14() == 1)
						{
							func_130("GB_BB_WARN1", -1);
						}
						else
						{
							func_130("GB_BB_WARN", -1);
						}
						func_126(1);
						unk_0xBE20AB8238688965(&iLocal_84, 3);
					}
				}
				else
				{
					if (unk_0x460153A63B9477BC() != func_7())
					{
						func_130("GB_BB_GSTART", -1);
					}
					else if (func_14() == 1)
					{
						func_130("GB_BB_BSTART1", -1);
					}
					else
					{
						func_130("GB_BB_BSTART", -1);
					}
					func_126(1);
					unk_0xBE20AB8238688965(&iLocal_84, 1);
				}
			}
			else
			{
				if (func_14() == 1)
				{
					func_777("GB_BB_FSTART1", func_368(func_7()), func_62(func_7(), -2, 0, 0, 0), -1);
				}
				else
				{
					func_777("GB_BB_FSTART", func_368(func_7()), func_62(func_7(), -2, 0, 0, 0), -1);
				}
				func_126(1);
				unk_0xBE20AB8238688965(&iLocal_84, 3);
			}
		}
	}
	else
	{
		if (func_799(func_7(), 1))
		{
			if (func_14() == 1)
			{
				func_393(86, "GB_BB_ST_START", "GB_BB_SS_START1", 1, -1, 2, 1, 0);
			}
			else
			{
				func_393(86, "GB_BB_ST_START", "GB_BB_SS_START", 1, -1, 2, 1, 0);
			}
		}
		else if (func_14() == 1)
		{
			func_394(86, "GB_BB_ST_START", "GB_BB_SS_DSTRY1", func_368(func_7()), func_62(func_7(), -2, 0, 0, 0), 0, -1, -1, -1, 2, -1);
		}
		else
		{
			func_394(86, "GB_BB_ST_START", "GB_BB_SS_DSTRY", func_368(func_7()), func_62(func_7(), -2, 0, 0, 0), 0, -1, -1, -1, 2, -1);
		}
		func_680(-1, 0, 0, -1, 0, 0);
		unk_0xBE20AB8238688965(&iLocal_84, 0);
		unk_0xBE20AB8238688965(&(Local_103[unk_0x59E2AD1A8ACEDA31() /*4*/].f_1), 12);
	}
}

void func_680(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4, bool bParam5)
{
	int iVar0;
	var uVar1;
	int iVar2;
	int iVar3;
	
	if (bParam5)
	{
		iVar0 = func_497(unk_0x460153A63B9477BC());
		Global_1676407 = iVar0;
		Global_1676407.f_1 = iParam0;
		if (func_177() != func_40())
		{
			Global_1676407.f_2 = func_776(func_177());
			Global_1676407.f_3 = func_775(func_177());
		}
		if (func_7() != func_40())
		{
			func_230(func_7(), &(Global_1676407.f_2), &(Global_1676407.f_3));
		}
		Global_1676407.f_7 = unk_0x5A002C4821A13338();
		Global_1676407.f_28 = func_774(unk_0x460153A63B9477BC());
		Global_1676407.f_13 = 0;
		Global_1676407.f_14 = 0;
		if (func_81(unk_0x460153A63B9477BC(), 1))
		{
			Global_1676407.f_23 = func_773(func_127(1));
		}
	}
	else
	{
		iVar0 = func_102(unk_0x460153A63B9477BC());
	}
	if (iParam2 || func_99(iVar0))
	{
		if (iParam3 != -1 && iParam2)
		{
			iVar0 = iParam3;
		}
		Global_1676146 = iVar0;
		if (func_201(iVar0))
		{
			Global_1676146.f_1 = 4;
		}
		else if (func_420(iVar0))
		{
			Global_1676146.f_1 = 5;
		}
		else if (func_119(iVar0, 0))
		{
			Global_1676146.f_1 = 2;
			if (func_194(iVar0))
			{
				Global_1676146.f_1 = 3;
			}
		}
		else
		{
			Global_1676146.f_1 = 1;
		}
		if (func_177() != func_40())
		{
			Global_1676146.f_4 = func_776(func_177());
			Global_1676146.f_5 = func_775(func_177());
		}
		if (func_7() != func_40())
		{
			func_230(func_7(), &(Global_1676146.f_6), &(Global_1676146.f_7));
		}
		Global_1676146.f_9 = unk_0x5A002C4821A13338();
		if (iVar0 == 148 || iVar0 == 179)
		{
			Global_1676146.f_27 = 1;
			Global_1676146.f_28 = 1;
		}
		if (iParam0 != -1)
		{
			Global_1676146.f_26 = iParam0;
		}
		if (iParam1 != 0)
		{
			Global_1676146.f_40 = func_226(iParam1);
			Global_1676146.f_41 = func_772();
			Global_1676146.f_42 = func_329(unk_0x460153A63B9477BC(), iParam1);
			Global_1676146.f_44 = func_771(unk_0x460153A63B9477BC(), iParam1);
		}
		if (!func_176() || iVar0 != 192)
		{
			Global_1676146.f_53 = 0;
		}
	}
	else if (func_192(iVar0))
	{
		if (iVar0 == 225 || iVar0 == 226)
		{
			Global_1676263 = iParam0 + 1;
		}
		else if (iVar0 == 227)
		{
			Global_1676263 = iParam0 + 1;
		}
		else
		{
			Global_1676263 = func_770(unk_0x460153A63B9477BC());
		}
		switch (iVar0)
		{
			case 225:
				if (func_188(unk_0x460153A63B9477BC()) == 0)
				{
					Global_1676263.f_1 = 0;
				}
				else
				{
					Global_1676263.f_1 = 1;
				}
				break;
			
			case 226:
				Global_1676263.f_1 = 2;
				break;
			
			case 227:
				Global_1676263.f_1 = 3;
				break;
		}
		Global_1676263.f_21 = 1;
		Global_1676263.f_22 = 1;
		if (func_177() != func_40())
		{
			Global_1676263.f_4 = func_776(func_177());
			Global_1676263.f_5 = func_775(func_177());
		}
		if (func_7() != func_40())
		{
			func_230(func_7(), &(Global_1676263.f_4), &(Global_1676263.f_5));
		}
		Global_1676263.f_8 = unk_0x5A002C4821A13338();
		if (iParam0 != -1)
		{
			Global_1676263.f_20 = iParam0;
		}
	}
	else if (func_132(iVar0))
	{
		if (iParam3 != -1 && iParam2)
		{
		}
		Global_1676200 = iVar0;
		Global_1676146.f_1 = 1;
		if (func_177() != func_40())
		{
			Global_1676200.f_4 = func_776(func_177());
			Global_1676200.f_5 = func_775(func_177());
		}
		if (func_7() != func_40())
		{
			func_230(func_7(), &(Global_1676200.f_6), &(Global_1676200.f_7));
		}
		Global_1676200.f_9 = unk_0x5A002C4821A13338();
		if (iParam0 != -1)
		{
			Global_1676200.f_21 = iParam0;
		}
	}
	else if (func_191(iVar0))
	{
		Global_1676307 = iVar0;
		Global_1676307.f_1 = iParam0;
		Global_1676307.f_21 = 1;
		Global_1676307.f_22 = 1;
		if (func_177() != func_40())
		{
			Global_1676307.f_4 = func_776(func_177());
			Global_1676307.f_5 = func_775(func_177());
		}
		if (func_7() != func_40())
		{
			func_230(func_7(), &(Global_1676307.f_4), &(Global_1676307.f_5));
		}
		Global_1676307.f_8 = unk_0x5A002C4821A13338();
		if (iParam0 != -1)
		{
			Global_1676307.f_20 = iParam0;
		}
		Global_1676307.f_27 = func_768(func_98(), 5);
		Global_1676307.f_28 = func_773(func_767(unk_0x460153A63B9477BC()));
		Global_1676307.f_29 = func_200(6108, -1, 0);
		Global_1676307.f_30 = func_200(6104, -1, 0);
		Global_1676307.f_31 = func_200(6105, -1, 0);
		Global_1676307.f_32 = func_200(6107, -1, 0);
		Global_1676307.f_33 = func_200(6106, -1, 0);
		Global_1676307.f_34 = func_200(6109, -1, 0);
		Global_1676307.f_7 = func_765();
		Global_1676307.f_51 = func_773(bParam4);
	}
	else if (func_190(iVar0))
	{
		Global_1676361 = iVar0;
		Global_1676361.f_1 = iParam0;
		Global_1676361.f_21 = 1;
		Global_1676361.f_22 = 1;
		if (func_177() != func_40())
		{
			Global_1676361.f_4 = func_776(func_177());
			Global_1676361.f_5 = func_775(func_177());
		}
		if (func_7() != func_40())
		{
			func_230(func_7(), &(Global_1676361.f_4), &(Global_1676361.f_5));
		}
		Global_1676361.f_8 = unk_0x5A002C4821A13338();
		if (iParam0 != -1)
		{
			Global_1676361.f_20 = iParam0;
		}
		Global_1676361.f_24 = func_200(6158, -1, 0);
		Global_1676361.f_25 = func_200(6163, -1, 0);
		Global_1676361.f_26 = func_200(6164, -1, 0);
		Global_1676361.f_27 = func_773((((func_764() || func_763()) || func_762()) || func_761(unk_0x460153A63B9477BC())));
		Global_1676361.f_28 = func_200(6165, -1, 0);
		Global_1676361.f_29 = func_773(func_760());
		Global_1676361.f_31 = 0;
		Global_1676361.f_30 = 0;
		Global_1676361.f_32 = 0;
		Global_1676361.f_33 = 0;
		Global_1676361.f_34 = 0;
		Global_1676361.f_16 = 0;
		Global_1676361.f_7 = func_765();
	}
	else if (((((((((iVar0 == 250 || iVar0 == 238) || iVar0 == 242) || iVar0 == 244) || iVar0 == 248) || iVar0 == 241) || iVar0 == 239) || iVar0 == 240) || iVar0 == 249) || (iVar0 == 237 && func_186(func_187(unk_0x460153A63B9477BC()))))
	{
		Global_1676497 = iVar0;
		Global_1676497.f_1 = iParam0;
		Global_1676497.f_21 = 1;
		Global_1676497.f_22 = 1;
		Global_1676497.f_7 = func_765();
		if (func_177() != func_40())
		{
			Global_1676497.f_4 = func_776(func_177());
			Global_1676497.f_5 = func_775(func_177());
		}
		if (func_7() != func_40())
		{
			func_230(func_7(), &(Global_1676497.f_4), &(Global_1676497.f_5));
		}
		if (func_177() != -1)
		{
			Global_1676497.f_17 = func_759(func_177());
		}
		Global_1676497.f_8 = unk_0x5A002C4821A13338();
		Global_1676497.f_28 = func_774(unk_0x460153A63B9477BC());
		Global_1676497.f_16 = 0;
		Global_1676497.f_24 = 0;
		Global_1676497.f_23 = 0;
		if (func_81(unk_0x460153A63B9477BC(), 1))
		{
			Global_1676497.f_33 = func_773(func_127(1));
		}
	}
	else if (iVar0 == 237)
	{
		Global_1676443 = iVar0;
		Global_1676443.f_1 = iParam0;
		Global_1676443.f_21 = 1;
		Global_1676443.f_22 = 1;
		Global_1676443.f_7 = func_765();
		Global_1676443.f_24 = 0;
		Global_1676443.f_23 = 0;
		Global_1676443.f_16 = 0;
		if (func_177() != func_40())
		{
			Global_1676443.f_4 = func_776(func_177());
			Global_1676443.f_5 = func_775(func_177());
		}
		Global_1676443.f_28 = func_774(unk_0x460153A63B9477BC());
		if (Global_1676443.f_28)
		{
			Global_1676443.f_29 = func_758(unk_0x460153A63B9477BC());
		}
		else
		{
			Global_1676443.f_29 = 0;
		}
		Global_1676443.f_30 = func_742(unk_0x460153A63B9477BC(), 4, -1);
		Global_1676443.f_31 = func_741(unk_0x460153A63B9477BC());
		Global_1676443.f_32 = func_773(func_740(unk_0x460153A63B9477BC()));
		Global_1676443.f_33 = func_773(func_739(unk_0x460153A63B9477BC()));
		Global_1676443.f_34 = func_773(func_738(unk_0x460153A63B9477BC()));
		Global_1676443.f_35 = func_773(func_737(unk_0x460153A63B9477BC()));
		Global_1676443.f_36 = func_736(unk_0x460153A63B9477BC());
		Global_1676443.f_37 = func_735(unk_0x460153A63B9477BC());
		Global_1676443.f_39 = func_734(unk_0x460153A63B9477BC());
		if (func_81(unk_0x460153A63B9477BC(), 1))
		{
			Global_1676443.f_41 = func_773(func_127(1));
		}
		if (func_7() != func_40())
		{
			func_230(func_7(), &(Global_1676443.f_4), &(Global_1676443.f_5));
		}
		Global_1676443.f_8 = unk_0x5A002C4821A13338();
		Global_1676443.f_28 = func_774(unk_0x460153A63B9477BC());
	}
	else if (func_184(iVar0))
	{
		Global_1676581 = iVar0;
		Global_1676581.f_1 = func_188(unk_0x460153A63B9477BC());
		Global_1676581.f_2 = func_733();
		Global_1676581.f_3 = func_732();
		Global_1676581.f_4 = func_776(func_177());
		Global_1676581.f_5 = func_775(func_177());
		Global_1676581.f_7 = func_765();
		Global_1676581.f_8 = unk_0x5A002C4821A13338();
		if (func_177() != -1)
		{
			Global_1676581.f_17 = func_759(func_177());
		}
		Global_1676581.f_21 = 1;
		Global_1676581.f_22 = 1;
		Global_1676581.f_25 = iParam0;
		Global_1676581.f_27 = func_773(func_731(unk_0x460153A63B9477BC()));
		Global_1676581.f_28 = func_728(21, -1);
	}
	else if (func_183(iVar0))
	{
		Global_1676656 = Global_786547.f_1;
		Global_1676656.f_2 = Global_786547;
		Global_1676656.f_6 = func_776(func_177());
		Global_1676656.f_7 = func_775(func_177());
		if (func_81(unk_0x460153A63B9477BC(), 1))
		{
			Global_1676656.f_8 = func_773(func_127(1));
		}
		if (func_177() != -1)
		{
			Global_1676656.f_9 = func_759(func_177());
		}
		Global_1676656.f_10 = func_765();
		Global_1676656.f_19 = 1;
		Global_1676656.f_20 = 1;
		Global_1676656.f_21 = 0;
		Global_1676656.f_22 = 0;
		Global_1676656.f_23 = 0;
		Global_1703843 = unk_0x5A002C4821A13338();
	}
	else if (func_182(iVar0))
	{
		Global_1676743 = Global_786547.f_1;
		Global_1676743.f_3 = Global_786547;
		Global_1676743.f_6 = func_776(func_177());
		Global_1676743.f_7 = func_775(func_177());
		if (func_81(unk_0x460153A63B9477BC(), 1))
		{
			Global_1676743.f_8 = func_773(func_127(1));
		}
		if (func_177() != -1)
		{
			Global_1676743.f_9 = func_759(func_177());
		}
		Global_1676743.f_10 = func_765();
		Global_1676743.f_19 = 1;
		Global_1676743.f_20 = 1;
		Global_1676743.f_21 = 0;
		Global_1676743.f_22 = 0;
		Global_1676743.f_23 = 0;
		Global_1676743.f_26 = func_711(1);
		Global_1676743.f_34 = func_711(0);
		Global_1676743.f_15 = !func_179(unk_0x460153A63B9477BC(), func_7(), 1);
	}
	else if (func_710(iVar0))
	{
		Global_1676855 = iParam0;
		Global_1676855.f_1 = iVar0;
		Global_1676855.f_3 = func_776(func_177());
		Global_1676855.f_4 = func_775(func_177());
		Global_1676855.f_5 = func_773(func_127(1));
		Global_1676855.f_6 = func_765();
		Global_1676855.f_7 = func_759(func_177());
		Global_1676855.f_8 = 0;
	}
	else
	{
		if (func_177() != func_40())
		{
			Global_1676128 = func_776(func_177());
			Global_1676128.f_1 = func_775(func_177());
		}
		Global_1676128.f_5 = unk_0x5A002C4821A13338();
		Global_1676128.f_13 = func_709();
		Global_1676128.f_15 = 0;
		if (func_104(1))
		{
			if (func_7() == func_177())
			{
				Global_1676128.f_15 = 1;
			}
		}
		if (func_708())
		{
			Global_1676263.f_28 = 1;
		}
		if (((((func_707() || func_706()) || func_705()) || func_704()) || func_703()) || func_702(unk_0x460153A63B9477BC()))
		{
			Global_1676263.f_30 = 1;
		}
		if (func_700(func_701(joaat("trailersmall2"))))
		{
			Global_1676263.f_32 = 1;
		}
		if (func_689(func_699(joaat("caddy"))))
		{
			Global_1676263.f_31 = 1;
		}
		if (func_688(unk_0x460153A63B9477BC()) || func_687(unk_0x460153A63B9477BC()))
		{
			Global_1676263.f_29 = 1;
		}
		if (func_686(unk_0x460153A63B9477BC()))
		{
			Global_1676263.f_33 = 1;
			Global_1676263.f_34 = 1;
		}
		if (func_685(unk_0x460153A63B9477BC()))
		{
			Global_1676263.f_36 = 1;
		}
		if (func_684(0, unk_0x460153A63B9477BC()) == 1)
		{
			Global_1676263.f_35 = 1;
		}
		if (func_683(unk_0x460153A63B9477BC(), 3, &uVar1))
		{
			Global_1676263.f_37 = 1;
		}
		if (func_683(unk_0x460153A63B9477BC(), 7, &uVar1))
		{
			Global_1676263.f_38 = 1;
		}
		if (func_682(unk_0x460153A63B9477BC()))
		{
			iVar2 = 0;
			while (iVar2 < 6)
			{
				iVar3 = func_681(unk_0x460153A63B9477BC(), iVar2);
				if (func_326(unk_0x460153A63B9477BC(), iVar3, 0))
				{
					Global_1676263.f_39 = 1;
				}
				if (func_326(unk_0x460153A63B9477BC(), iVar3, 2))
				{
					Global_1676263.f_40 = 1;
				}
				if (func_326(unk_0x460153A63B9477BC(), iVar3, 1))
				{
					Global_1676263.f_41 = 1;
				}
				iVar2++;
			}
		}
	}
}

int func_681(int iParam0, int iParam1)
{
	var uVar0;
	
	if (iParam0 == func_40())
	{
		return 0;
	}
	if (iParam1 < 0 || iParam1 >= 6)
	{
		return 0;
	}
	if (func_318(Global_1590682[iParam0 /*883*/].f_274.f_183[iParam1 /*12*/]))
	{
		uVar0 = Global_1590682[iParam0 /*883*/].f_274.f_183[iParam1 /*12*/];
	}
	return uVar0;
}

int func_682(int iParam0)
{
	int iVar0;
	
	if (iParam0 == func_40())
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 <= 5)
	{
		if (Global_1590682[iParam0 /*883*/].f_274.f_183[iVar0 /*12*/] != 0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_683(int iParam0, int iParam1, var uParam2)
{
	int iVar0;
	
	if (iParam0 != func_40())
	{
		iVar0 = 0;
		while (iVar0 < 3)
		{
			if (iParam1 == func_684(iVar0, iParam0))
			{
				*uParam2 = iVar0;
				return 1;
			}
			iVar0++;
		}
	}
	return 0;
}

int func_684(int iParam0, int iParam1)
{
	if (iParam1 == func_40())
	{
		return 0;
	}
	switch (iParam0)
	{
		case 0:
			if (unk_0xCE990E643CD9D0E5(Global_1590682[iParam1 /*883*/].f_274.f_259, 0))
			{
				return 3;
			}
			else if (unk_0xCE990E643CD9D0E5(Global_1590682[iParam1 /*883*/].f_274.f_259, 3))
			{
				return 2;
			}
			else if (unk_0xCE990E643CD9D0E5(Global_1590682[iParam1 /*883*/].f_274.f_259, 6))
			{
				return 4;
			}
			else if (unk_0xCE990E643CD9D0E5(Global_1590682[iParam1 /*883*/].f_274.f_259, 9))
			{
				return 1;
			}
			else if (unk_0xCE990E643CD9D0E5(Global_1590682[iParam1 /*883*/].f_274.f_259, 12))
			{
				return 7;
			}
			else if (unk_0xCE990E643CD9D0E5(Global_1590682[iParam1 /*883*/].f_274.f_259, 15))
			{
				return 5;
			}
			else if (unk_0xCE990E643CD9D0E5(Global_1590682[iParam1 /*883*/].f_274.f_259, 18))
			{
				return 6;
			}
			else if (unk_0xCE990E643CD9D0E5(Global_1590682[iParam1 /*883*/].f_274.f_259, 21))
			{
				return 0;
			}
			else if (unk_0xCE990E643CD9D0E5(Global_1590682[iParam1 /*883*/].f_274.f_259, 24))
			{
				return 8;
			}
			break;
		
		case 1:
			if (unk_0xCE990E643CD9D0E5(Global_1590682[iParam1 /*883*/].f_274.f_259, 1))
			{
				return 3;
			}
			else if (unk_0xCE990E643CD9D0E5(Global_1590682[iParam1 /*883*/].f_274.f_259, 4))
			{
				return 2;
			}
			else if (unk_0xCE990E643CD9D0E5(Global_1590682[iParam1 /*883*/].f_274.f_259, 7))
			{
				return 4;
			}
			else if (unk_0xCE990E643CD9D0E5(Global_1590682[iParam1 /*883*/].f_274.f_259, 10))
			{
				return 1;
			}
			else if (unk_0xCE990E643CD9D0E5(Global_1590682[iParam1 /*883*/].f_274.f_259, 13))
			{
				return 7;
			}
			else if (unk_0xCE990E643CD9D0E5(Global_1590682[iParam1 /*883*/].f_274.f_259, 16))
			{
				return 5;
			}
			else if (unk_0xCE990E643CD9D0E5(Global_1590682[iParam1 /*883*/].f_274.f_259, 19))
			{
				return 6;
			}
			else if (unk_0xCE990E643CD9D0E5(Global_1590682[iParam1 /*883*/].f_274.f_259, 22))
			{
				return 0;
			}
			else if (unk_0xCE990E643CD9D0E5(Global_1590682[iParam1 /*883*/].f_274.f_259, 25))
			{
				return 8;
			}
			break;
		
		case 2:
			if (unk_0xCE990E643CD9D0E5(Global_1590682[iParam1 /*883*/].f_274.f_259, 2))
			{
				return 3;
			}
			else if (unk_0xCE990E643CD9D0E5(Global_1590682[iParam1 /*883*/].f_274.f_259, 5))
			{
				return 2;
			}
			else if (unk_0xCE990E643CD9D0E5(Global_1590682[iParam1 /*883*/].f_274.f_259, 8))
			{
				return 4;
			}
			else if (unk_0xCE990E643CD9D0E5(Global_1590682[iParam1 /*883*/].f_274.f_259, 11))
			{
				return 1;
			}
			else if (unk_0xCE990E643CD9D0E5(Global_1590682[iParam1 /*883*/].f_274.f_259, 14))
			{
				return 7;
			}
			else if (unk_0xCE990E643CD9D0E5(Global_1590682[iParam1 /*883*/].f_274.f_259, 17))
			{
				return 5;
			}
			else if (unk_0xCE990E643CD9D0E5(Global_1590682[iParam1 /*883*/].f_274.f_259, 20))
			{
				return 6;
			}
			else if (unk_0xCE990E643CD9D0E5(Global_1590682[iParam1 /*883*/].f_274.f_259, 23))
			{
				return 0;
			}
			else if (unk_0xCE990E643CD9D0E5(Global_1590682[iParam1 /*883*/].f_274.f_259, 26))
			{
				return 8;
			}
			break;
	}
	return 0;
}

bool func_685(int iParam0)
{
	return unk_0xCE990E643CD9D0E5(Global_1590682[iParam0 /*883*/].f_274.f_351, 7);
}

bool func_686(int iParam0)
{
	return unk_0xCE990E643CD9D0E5(Global_1590682[iParam0 /*883*/].f_274.f_351, 8);
}

bool func_687(int iParam0)
{
	if (iParam0 == func_40())
	{
		return 0;
	}
	return unk_0xCE990E643CD9D0E5(Global_1590682[iParam0 /*883*/].f_274.f_351, 11);
}

bool func_688(int iParam0)
{
	if (iParam0 == func_40())
	{
		return 0;
	}
	return unk_0xCE990E643CD9D0E5(Global_1590682[iParam0 /*883*/].f_274.f_351, 10);
}

int func_689(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (func_728(11, -1) == 0)
	{
		return 0;
	}
	if (iParam0 != -1)
	{
		iVar0 = -1;
		iVar1 = (iParam0 + func_697(11));
		func_696(iVar1, &iVar0, 1);
		iVar2 = func_728(func_691(iVar1), -1);
		if (iVar2 > 0)
		{
		}
		else if (iVar0 >= 0)
		{
		}
		if (iVar0 >= 0)
		{
			iVar3 = func_200(func_690(4, iVar0), -1, 0);
			if (iVar2 > 0)
			{
			}
			if (iVar3 != 0)
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_690(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 1:
			switch (iParam1)
			{
				case 0:
					return 1629;
				
				case 1:
					return 1636;
				
				case 2:
					return 1643;
				
				case 3:
					return 1650;
				
				case 4:
					return 1657;
				
				case 5:
					return 1664;
				
				case 6:
					return 1671;
				
				case 7:
					return 1678;
				
				case 8:
					return 1685;
				
				case 9:
					return 1692;
				
				case 10:
					return 1699;
				
				case 11:
					return 1705;
				
				case 12:
					return 1711;
				
				case 13:
					return 1717;
				
				case 14:
					return 1796;
				
				case 15:
					return 1803;
				
				case 16:
					return 1810;
				
				case 17:
					return 1817;
				
				case 18:
					return 1824;
				
				case 19:
					return 1831;
				
				case 20:
					return 1838;
				
				case 21:
					return 1845;
				
				case 22:
					return 1852;
				
				case 23:
					return 1859;
				
				case 24:
					return 1865;
				
				case 25:
					return 1871;
				
				case 26:
					return 2166;
				
				case 27:
					return 2173;
				
				case 28:
					return 2180;
				
				case 29:
					return 2187;
				
				case 30:
					return 2194;
				
				case 31:
					return 2201;
				
				case 32:
					return 2208;
				
				case 33:
					return 2215;
				
				case 34:
					return 2222;
				
				case 35:
					return 2229;
				
				case 36:
					return 2236;
				
				case 37:
					return 2242;
				
				case 38:
					return 2248;
				
				case 39:
					return 2829;
				
				case 40:
					return 2836;
				
				case 41:
					return 2843;
				
				case 42:
					return 2850;
				
				case 43:
					return 2857;
				
				case 44:
					return 2864;
				
				case 45:
					return 2871;
				
				case 46:
					return 2878;
				
				case 47:
					return 2885;
				
				case 48:
					return 2892;
				
				case 49:
					return 2899;
				
				case 50:
					return 2905;
				
				case 51:
					return 2911;
				
				case 52:
					return 2953;
				
				case 53:
					return 2960;
				
				case 54:
					return 2967;
				
				case 55:
					return 2974;
				
				case 56:
					return 2981;
				
				case 57:
					return 2988;
				
				case 58:
					return 2995;
				
				case 59:
					return 3002;
				
				case 60:
					return 3009;
				
				case 61:
					return 3016;
				
				case 62:
					return 3023;
				
				case 63:
					return 3029;
				
				case 64:
					return 3035;
				
				case 65:
					return 3236;
				
				case 66:
					return 3244;
				
				case 67:
					return 3252;
				
				case 68:
					return 3260;
				
				case 69:
					return 3268;
				
				case 70:
					return 3276;
				
				case 71:
					return 3284;
				
				case 72:
					return 3292;
				
				case 73:
					return 3300;
				
				case 74:
					return 3308;
				
				case 75:
					return 3316;
				
				case 76:
					return 3324;
				
				case 77:
					return 3332;
				
				case 78:
					return 3340;
				
				case joaat("MPSV_LP0_31"):
					return 3348;
				
				case 80:
					return 3356;
				
				case 81:
					return 3364;
				
				case 82:
					return 3372;
				
				case 83:
					return 3380;
				
				case 84:
					return 3388;
				
				case 85:
					return 3396;
				
				case 86:
					return 3403;
				
				case 87:
					return 3410;
				
				default:
			}
			switch (iParam1)
			{
				case 88:
					return 4032;
				
				case 89:
					return 4040;
				
				case 90:
					return 4048;
				
				case 91:
					return 4056;
				
				case 92:
					return 4064;
				
				case 93:
					return 4072;
				
				case 94:
					return 4080;
				
				case 95:
					return 4088;
				
				case 96:
					return 4096;
				
				case 97:
					return 4104;
				
				case 98:
					return 4112;
				
				case 99:
					return 4120;
				
				case 100:
					return 4128;
				
				case 101:
					return 4136;
				
				case 102:
					return 4144;
				
				case 103:
					return 4152;
				
				case 104:
					return 4160;
				
				case 105:
					return 4168;
				
				case 106:
					return 4176;
				
				case 107:
					return 4184;
				
				case 108:
					return 4192;
				
				case 109:
					return 4200;
				
				case 110:
					return 4208;
				
				case 111:
					return 4216;
				
				case 112:
					return 4224;
				
				case 113:
					return 4232;
				
				case 114:
					return 4240;
				
				case 115:
					return 4248;
				
				case 116:
					return 4256;
				
				case 117:
					return 4264;
				
				case 118:
					return 4272;
				
				case 119:
					return 4280;
				
				case 120:
					return 4288;
				
				case 121:
					return 4296;
				
				case 122:
					return 4304;
				
				case 123:
					return 4312;
				
				case 124:
					return 4320;
				
				case 125:
					return 4328;
				
				case 126:
					return 4336;
				
				case 127:
					return 4344;
				
				case 128:
					return 4352;
				
				case 129:
					return 4360;
				
				case 130:
					return 4368;
				
				case 131:
					return 4376;
				
				case 132:
					return 4384;
				
				case 133:
					return 4392;
				
				case 134:
					return 4400;
				
				case 135:
					return 4408;
				
				case 136:
					return 4416;
				
				case 137:
					return 4424;
				
				case 138:
					return 4432;
				
				case 139:
					return 4440;
				
				case 140:
					return 4448;
				
				case 141:
					return 4456;
				
				case 142:
					return 4464;
				
				case 143:
					return 4472;
				
				case 144:
					return 4480;
				
				case 145:
					return 4488;
				
				case 146:
					return 4496;
				
				case 147:
					return 4504;
				
				case 148:
					return 4512;
				
				case 149:
					return 4520;
				
				case 150:
					return 4528;
				
				case 151:
					return 4536;
				
				case 152:
					return 4544;
				
				case 153:
					return 4552;
				
				case 154:
					return 4560;
				
				case 155:
					return 4568;
				
				case 156:
					return 4576;
				
				case 157:
					return 4584;
				
				case 158:
					return 5477;
				
				default:
			}
			switch (iParam1)
			{
				case 159:
					return 5926;
				
				case 160:
					return 5933;
				
				case 161:
					return 5940;
				
				case 162:
					return 5947;
				
				case 163:
					return 5954;
				
				case 164:
					return 5961;
				
				case 165:
					return 5968;
				
				case 166:
					return 5975;
				
				case 167:
					return 5982;
				
				case 168:
					return 5989;
				
				case 169:
					return 5996;
				
				case 170:
					return 6003;
				
				case 171:
					return 6010;
				
				case 172:
					return 6017;
				
				case 173:
					return 6024;
				
				case 174:
					return 6031;
				
				case 175:
					return 6038;
				
				case 176:
					return 6045;
				
				case 177:
					return 6052;
				
				case 178:
					return 6059;
				
				case 179:
					return 6066;
				
				case 180:
					return 6073;
				
				case 181:
					return 6080;
				
				case 182:
					return 6087;
				
				case 183:
					return 6094;
				
				default:
			}
			switch (iParam1)
			{
				case 184:
					return 6171;
				
				case 185:
					return 6178;
				
				case 186:
					return 6185;
				
				case 187:
					return 6192;
				
				case 188:
					return 6199;
				
				case 189:
					return 6206;
				
				case 190:
					return 6213;
				
				case 191:
					return 6220;
				
				case 192:
					return 6227;
				
				case 193:
					return 6234;
				
				default:
			}
			switch (iParam1)
			{
				case 194:
					return 6568;
				
				case 195:
					return 6575;
				
				case 196:
					return 6582;
				
				case 197:
					return 6589;
				
				case 198:
					return 6596;
				
				case 199:
					return 6603;
				
				case 200:
					return 6610;
				
				case 201:
					return 6617;
				
				case 202:
					return 6624;
				
				case 203:
					return 6631;
				
				case 204:
					return 6638;
				
				case 205:
					return 6645;
				
				case 206:
					return 6652;
				
				case 207:
					return 6659;
				
				case 208:
					return 6666;
				
				case 209:
					return 6673;
				
				case 210:
					return 6680;
				
				case 211:
					return 6687;
				
				case 212:
					return 6694;
				
				case 213:
					return 6701;
				
				case 214:
					return 6708;
				
				case 215:
					return 6715;
				
				case 216:
					return 6722;
				
				case 217:
					return 6729;
				
				case 218:
					return 6736;
				
				case 219:
					return 6743;
				
				case 220:
					return 6750;
				
				case 221:
					return 6757;
				
				case 222:
					return 6764;
				
				case 223:
					return 6771;
				
				case 224:
					return 6778;
				
				case 225:
					return 6785;
				
				case 226:
					return 6792;
				
				case 227:
					return 6799;
				
				case 228:
					return 6806;
				
				case 229:
					return 6813;
				
				case 230:
					return 6820;
				
				default:
			}
			switch (iParam1)
			{
				case 231:
					return 7290;
				
				case 232:
					return 7297;
				
				case 233:
					return 7304;
				
				case 234:
					return 7311;
				
				case 235:
					return 7318;
				
				case 236:
					return 7325;
				
				case 237:
					return 7332;
				
				case 238:
					return 7339;
				
				case 239:
					return 7346;
				
				case 240:
					return 7353;
				
				case 241:
					return 7360;
				
				case 242:
					return 7367;
				
				case 243:
					return 7374;
				
				case 244:
					return 7381;
				
				case 245:
					return 7388;
				
				case 246:
					return 7395;
				
				case 247:
					return 7402;
				
				case 248:
					return 7409;
				
				case 249:
					return 7416;
				
				case 250:
					return 7423;
				
				case 251:
					return 7430;
				
				case 252:
					return 7437;
				
				case 253:
					return 7444;
				
				case 254:
					return 7451;
				
				case 255:
					return 7458;
				
				case 256:
					return 7465;
				
				case 257:
					return 7472;
				
				case 258:
					return 7479;
				
				case 259:
					return 7486;
				
				case 260:
					return 7493;
				
				default:
			}
			switch (iParam1)
			{
				case 261:
					return 8013;
				
				case 262:
					return 8020;
				
				case 263:
					return 8027;
				
				case 264:
					return 8034;
				
				case 265:
					return 8041;
				
				case 266:
					return 8048;
				
				case 267:
					return 8055;
				
				case 268:
					return 8062;
				
				case 269:
					return 8069;
				
				case 270:
					return 8076;
				
				case 271:
					return 8537;
				
				case 272:
					return 8544;
				
				case 273:
					return 8551;
				
				case 274:
					return 8558;
				
				case 275:
					return 8565;
				
				case 276:
					return 8572;
				
				case 277:
					return 8579;
				
				case 278:
					return 8586;
				
				case 279:
					return 8593;
				
				case 280:
					return 8600;
				
				case 281:
					return 8982;
				
				case 282:
					return 8989;
				
				case 283:
					return 8996;
				
				case 284:
					return 9003;
				
				case 285:
					return 9010;
				
				case 286:
					return 9017;
				
				case 287:
					return 9024;
				
				case 288:
					return 9031;
				
				case 289:
					return 9038;
				
				case 290:
					return 9045;
				
				case 291:
					return 9052;
				
				case 292:
					return 9058;
				
				case 293:
					return 9064;
				
				case 294:
					return 9070;
				
				case 295:
					return 9077;
				
				case 296:
					return 9084;
				
				case 297:
					return 9091;
				
				case 298:
					return 9098;
				
				case 299:
					return 9105;
				
				case 300:
					return 9112;
				
				case 301:
					return 9119;
				
				case 302:
					return 9126;
				
				case 303:
					return 9133;
				
				case 304:
					return 9140;
				
				case 305:
					return 9146;
				
				case 306:
					return 9152;
				
				default:
			}
			break;
		
		case 2:
			switch (iParam1)
			{
				case 0:
					return 1630;
				
				case 1:
					return 1637;
				
				case 2:
					return 1644;
				
				case 3:
					return 1651;
				
				case 4:
					return 1658;
				
				case 5:
					return 1665;
				
				case 6:
					return 1672;
				
				case 7:
					return 1679;
				
				case 8:
					return 1686;
				
				case 9:
					return 1693;
				
				case 10:
					return 1700;
				
				case 11:
					return 1706;
				
				case 12:
					return 1712;
				
				case 13:
					return 1718;
				
				case 14:
					return 1797;
				
				case 15:
					return 1804;
				
				case 16:
					return 1811;
				
				case 17:
					return 1818;
				
				case 18:
					return 1825;
				
				case 19:
					return 1832;
				
				case 20:
					return 1839;
				
				case 21:
					return 1846;
				
				case 22:
					return 1853;
				
				case 23:
					return 1860;
				
				case 24:
					return 1866;
				
				case 25:
					return 1872;
				
				case 26:
					return 2167;
				
				case 27:
					return 2174;
				
				case 28:
					return 2181;
				
				case 29:
					return 2188;
				
				case 30:
					return 2195;
				
				case 31:
					return 2202;
				
				case 32:
					return 2209;
				
				case 33:
					return 2216;
				
				case 34:
					return 2223;
				
				case 35:
					return 2230;
				
				case 36:
					return 2237;
				
				case 37:
					return 2243;
				
				case 38:
					return 2249;
				
				case 39:
					return 2830;
				
				case 40:
					return 2837;
				
				case 41:
					return 2844;
				
				case 42:
					return 2851;
				
				case 43:
					return 2858;
				
				case 44:
					return 2865;
				
				case 45:
					return 2872;
				
				case 46:
					return 2879;
				
				case 47:
					return 2886;
				
				case 48:
					return 2893;
				
				case 49:
					return 2900;
				
				case 50:
					return 2906;
				
				case 51:
					return 2912;
				
				case 52:
					return 2954;
				
				case 53:
					return 2961;
				
				case 54:
					return 2968;
				
				case 55:
					return 2975;
				
				case 56:
					return 2982;
				
				case 57:
					return 2989;
				
				case 58:
					return 2996;
				
				case 59:
					return 3003;
				
				case 60:
					return 3010;
				
				case 61:
					return 3017;
				
				case 62:
					return 3024;
				
				case 63:
					return 3030;
				
				case 64:
					return 3036;
				
				case 65:
					return 3237;
				
				case 66:
					return 3245;
				
				case 67:
					return 3253;
				
				case 68:
					return 3261;
				
				case 69:
					return 3269;
				
				case 70:
					return 3277;
				
				case 71:
					return 3285;
				
				case 72:
					return 3293;
				
				case 73:
					return 3301;
				
				case 74:
					return 3309;
				
				case 75:
					return 3317;
				
				case 76:
					return 3325;
				
				case 77:
					return 3333;
				
				case 78:
					return 3341;
				
				case joaat("MPSV_LP0_31"):
					return 3349;
				
				case 80:
					return 3357;
				
				case 81:
					return 3365;
				
				case 82:
					return 3373;
				
				case 83:
					return 3381;
				
				case 84:
					return 3389;
				
				case 85:
					return 3397;
				
				case 86:
					return 3404;
				
				case 87:
					return 3411;
				
				default:
			}
			switch (iParam1)
			{
				case 88:
					return 4033;
				
				case 89:
					return 4041;
				
				case 90:
					return 4049;
				
				case 91:
					return 4057;
				
				case 92:
					return 4065;
				
				case 93:
					return 4073;
				
				case 94:
					return 4081;
				
				case 95:
					return 4089;
				
				case 96:
					return 4097;
				
				case 97:
					return 4105;
				
				case 98:
					return 4113;
				
				case 99:
					return 4121;
				
				case 100:
					return 4129;
				
				case 101:
					return 4137;
				
				case 102:
					return 4145;
				
				case 103:
					return 4153;
				
				case 104:
					return 4161;
				
				case 105:
					return 4169;
				
				case 106:
					return 4177;
				
				case 107:
					return 4185;
				
				case 108:
					return 4193;
				
				case 109:
					return 4201;
				
				case 110:
					return 4209;
				
				case 111:
					return 4217;
				
				case 112:
					return 4225;
				
				case 113:
					return 4233;
				
				case 114:
					return 4241;
				
				case 115:
					return 4249;
				
				case 116:
					return 4257;
				
				case 117:
					return 4265;
				
				case 118:
					return 4273;
				
				case 119:
					return 4281;
				
				case 120:
					return 4289;
				
				case 121:
					return 4297;
				
				case 122:
					return 4305;
				
				case 123:
					return 4313;
				
				case 124:
					return 4321;
				
				case 125:
					return 4329;
				
				case 126:
					return 4337;
				
				case 127:
					return 4345;
				
				case 128:
					return 4353;
				
				case 129:
					return 4361;
				
				case 130:
					return 4369;
				
				case 131:
					return 4377;
				
				case 132:
					return 4385;
				
				case 133:
					return 4393;
				
				case 134:
					return 4401;
				
				case 135:
					return 4409;
				
				case 136:
					return 4417;
				
				case 137:
					return 4425;
				
				case 138:
					return 4433;
				
				case 139:
					return 4441;
				
				case 140:
					return 4449;
				
				case 141:
					return 4457;
				
				case 142:
					return 4465;
				
				case 143:
					return 4473;
				
				case 144:
					return 4481;
				
				case 145:
					return 4489;
				
				case 146:
					return 4497;
				
				case 147:
					return 4505;
				
				case 148:
					return 4513;
				
				case 149:
					return 4521;
				
				case 150:
					return 4529;
				
				case 151:
					return 4537;
				
				case 152:
					return 4545;
				
				case 153:
					return 4553;
				
				case 154:
					return 4561;
				
				case 155:
					return 4569;
				
				case 156:
					return 4577;
				
				case 157:
					return 4585;
				
				case 158:
					return 5478;
				
				default:
			}
			switch (iParam1)
			{
				case 159:
					return 5927;
				
				case 160:
					return 5934;
				
				case 161:
					return 5941;
				
				case 162:
					return 5948;
				
				case 163:
					return 5955;
				
				case 164:
					return 5962;
				
				case 165:
					return 5969;
				
				case 166:
					return 5976;
				
				case 167:
					return 5983;
				
				case 168:
					return 5990;
				
				case 169:
					return 5997;
				
				case 170:
					return 6004;
				
				case 171:
					return 6011;
				
				case 172:
					return 6018;
				
				case 173:
					return 6025;
				
				case 174:
					return 6032;
				
				case 175:
					return 6039;
				
				case 176:
					return 6046;
				
				case 177:
					return 6053;
				
				case 178:
					return 6060;
				
				case 179:
					return 6067;
				
				case 180:
					return 6074;
				
				case 181:
					return 6081;
				
				case 182:
					return 6088;
				
				case 183:
					return 6095;
				
				default:
			}
			switch (iParam1)
			{
				case 184:
					return 6172;
				
				case 185:
					return 6179;
				
				case 186:
					return 6186;
				
				case 187:
					return 6193;
				
				case 188:
					return 6200;
				
				case 189:
					return 6207;
				
				case 190:
					return 6214;
				
				case 191:
					return 6221;
				
				case 192:
					return 6228;
				
				case 193:
					return 6235;
				
				default:
			}
			switch (iParam1)
			{
				case 194:
					return 6569;
				
				case 195:
					return 6576;
				
				case 196:
					return 6583;
				
				case 197:
					return 6590;
				
				case 198:
					return 6597;
				
				case 199:
					return 6604;
				
				case 200:
					return 6611;
				
				case 201:
					return 6618;
				
				case 202:
					return 6625;
				
				case 203:
					return 6632;
				
				case 204:
					return 6639;
				
				case 205:
					return 6646;
				
				case 206:
					return 6653;
				
				case 207:
					return 6660;
				
				case 208:
					return 6667;
				
				case 209:
					return 6674;
				
				case 210:
					return 6681;
				
				case 211:
					return 6688;
				
				case 212:
					return 6695;
				
				case 213:
					return 6702;
				
				case 214:
					return 6709;
				
				case 215:
					return 6716;
				
				case 216:
					return 6723;
				
				case 217:
					return 6730;
				
				case 218:
					return 6737;
				
				case 219:
					return 6744;
				
				case 220:
					return 6751;
				
				case 221:
					return 6758;
				
				case 222:
					return 6765;
				
				case 223:
					return 6772;
				
				case 224:
					return 6779;
				
				case 225:
					return 6786;
				
				case 226:
					return 6793;
				
				case 227:
					return 6800;
				
				case 228:
					return 6807;
				
				case 229:
					return 6814;
				
				case 230:
					return 6821;
				
				default:
			}
			switch (iParam1)
			{
				case 231:
					return 7291;
				
				case 232:
					return 7298;
				
				case 233:
					return 7305;
				
				case 234:
					return 7312;
				
				case 235:
					return 7319;
				
				case 236:
					return 7326;
				
				case 237:
					return 7333;
				
				case 238:
					return 7340;
				
				case 239:
					return 7347;
				
				case 240:
					return 7354;
				
				case 241:
					return 7361;
				
				case 242:
					return 7368;
				
				case 243:
					return 7375;
				
				case 244:
					return 7382;
				
				case 245:
					return 7389;
				
				case 246:
					return 7396;
				
				case 247:
					return 7403;
				
				case 248:
					return 7410;
				
				case 249:
					return 7417;
				
				case 250:
					return 7424;
				
				case 251:
					return 7431;
				
				case 252:
					return 7438;
				
				case 253:
					return 7445;
				
				case 254:
					return 7452;
				
				case 255:
					return 7459;
				
				case 256:
					return 7466;
				
				case 257:
					return 7473;
				
				case 258:
					return 7480;
				
				case 259:
					return 7487;
				
				case 260:
					return 7494;
				
				default:
			}
			switch (iParam1)
			{
				case 261:
					return 8014;
				
				case 262:
					return 8021;
				
				case 263:
					return 8028;
				
				case 264:
					return 8035;
				
				case 265:
					return 8042;
				
				case 266:
					return 8049;
				
				case 267:
					return 8056;
				
				case 268:
					return 8063;
				
				case 269:
					return 8070;
				
				case 270:
					return 8077;
				
				case 271:
					return 8538;
				
				case 272:
					return 8545;
				
				case 273:
					return 8552;
				
				case 274:
					return 8559;
				
				case 275:
					return 8566;
				
				case 276:
					return 8573;
				
				case 277:
					return 8580;
				
				case 278:
					return 8587;
				
				case 279:
					return 8594;
				
				case 280:
					return 8601;
				
				case 281:
					return 8983;
				
				case 282:
					return 8990;
				
				case 283:
					return 8997;
				
				case 284:
					return 9004;
				
				case 285:
					return 9011;
				
				case 286:
					return 9018;
				
				case 287:
					return 9025;
				
				case 288:
					return 9032;
				
				case 289:
					return 9039;
				
				case 290:
					return 9046;
				
				case 291:
					return 9053;
				
				case 292:
					return 9059;
				
				case 293:
					return 9065;
				
				case 294:
					return 9071;
				
				case 295:
					return 9078;
				
				case 296:
					return 9085;
				
				case 297:
					return 9092;
				
				case 298:
					return 9099;
				
				case 299:
					return 9106;
				
				case 300:
					return 9113;
				
				case 301:
					return 9120;
				
				case 302:
					return 9127;
				
				case 303:
					return 9134;
				
				case 304:
					return 9141;
				
				case 305:
					return 9147;
				
				case 306:
					return 9153;
				
				default:
			}
			break;
		
		case 3:
			switch (iParam1)
			{
				case 0:
					return 1631;
				
				case 1:
					return 1638;
				
				case 2:
					return 1645;
				
				case 3:
					return 1652;
				
				case 4:
					return 1659;
				
				case 5:
					return 1666;
				
				case 6:
					return 1673;
				
				case 7:
					return 1680;
				
				case 8:
					return 1687;
				
				case 9:
					return 1694;
				
				case 10:
					return 1701;
				
				case 11:
					return 1707;
				
				case 12:
					return 1713;
				
				case 13:
					return 1719;
				
				case 14:
					return 1798;
				
				case 15:
					return 1805;
				
				case 16:
					return 1812;
				
				case 17:
					return 1819;
				
				case 18:
					return 1826;
				
				case 19:
					return 1833;
				
				case 20:
					return 1840;
				
				case 21:
					return 1847;
				
				case 22:
					return 1854;
				
				case 23:
					return 1861;
				
				case 24:
					return 1867;
				
				case 25:
					return 1873;
				
				case 26:
					return 2168;
				
				case 27:
					return 2175;
				
				case 28:
					return 2182;
				
				case 29:
					return 2189;
				
				case 30:
					return 2196;
				
				case 31:
					return 2203;
				
				case 32:
					return 2210;
				
				case 33:
					return 2217;
				
				case 34:
					return 2224;
				
				case 35:
					return 2231;
				
				case 36:
					return 2238;
				
				case 37:
					return 2244;
				
				case 38:
					return 2250;
				
				case 39:
					return 2831;
				
				case 40:
					return 2838;
				
				case 41:
					return 2845;
				
				case 42:
					return 2852;
				
				case 43:
					return 2859;
				
				case 44:
					return 2866;
				
				case 45:
					return 2873;
				
				case 46:
					return 2880;
				
				case 47:
					return 2887;
				
				case 48:
					return 2894;
				
				case 49:
					return 2901;
				
				case 50:
					return 2907;
				
				case 51:
					return 2913;
				
				case 52:
					return 2955;
				
				case 53:
					return 2962;
				
				case 54:
					return 2969;
				
				case 55:
					return 2976;
				
				case 56:
					return 2983;
				
				case 57:
					return 2990;
				
				case 58:
					return 2997;
				
				case 59:
					return 3004;
				
				case 60:
					return 3011;
				
				case 61:
					return 3018;
				
				case 62:
					return 3025;
				
				case 63:
					return 3031;
				
				case 64:
					return 3037;
				
				case 65:
					return 3238;
				
				case 66:
					return 3246;
				
				case 67:
					return 3254;
				
				case 68:
					return 3262;
				
				case 69:
					return 3270;
				
				case 70:
					return 3278;
				
				case 71:
					return 3286;
				
				case 72:
					return 3294;
				
				case 73:
					return 3302;
				
				case 74:
					return 3310;
				
				case 75:
					return 3318;
				
				case 76:
					return 3326;
				
				case 77:
					return 3334;
				
				case 78:
					return 3342;
				
				case joaat("MPSV_LP0_31"):
					return 3350;
				
				case 80:
					return 3358;
				
				case 81:
					return 3366;
				
				case 82:
					return 3374;
				
				case 83:
					return 3382;
				
				case 84:
					return 3390;
				
				case 85:
					return 3398;
				
				case 86:
					return 3405;
				
				case 87:
					return 3412;
				
				default:
			}
			switch (iParam1)
			{
				case 88:
					return 4034;
				
				case 89:
					return 4042;
				
				case 90:
					return 4050;
				
				case 91:
					return 4058;
				
				case 92:
					return 4066;
				
				case 93:
					return 4074;
				
				case 94:
					return 4082;
				
				case 95:
					return 4090;
				
				case 96:
					return 4098;
				
				case 97:
					return 4106;
				
				case 98:
					return 4114;
				
				case 99:
					return 4122;
				
				case 100:
					return 4130;
				
				case 101:
					return 4138;
				
				case 102:
					return 4146;
				
				case 103:
					return 4154;
				
				case 104:
					return 4162;
				
				case 105:
					return 4170;
				
				case 106:
					return 4178;
				
				case 107:
					return 4186;
				
				case 108:
					return 4194;
				
				case 109:
					return 4202;
				
				case 110:
					return 4210;
				
				case 111:
					return 4218;
				
				case 112:
					return 4226;
				
				case 113:
					return 4234;
				
				case 114:
					return 4242;
				
				case 115:
					return 4250;
				
				case 116:
					return 4258;
				
				case 117:
					return 4266;
				
				case 118:
					return 4274;
				
				case 119:
					return 4282;
				
				case 120:
					return 4290;
				
				case 121:
					return 4298;
				
				case 122:
					return 4306;
				
				case 123:
					return 4314;
				
				case 124:
					return 4322;
				
				case 125:
					return 4330;
				
				case 126:
					return 4338;
				
				case 127:
					return 4346;
				
				case 128:
					return 4354;
				
				case 129:
					return 4362;
				
				case 130:
					return 4370;
				
				case 131:
					return 4378;
				
				case 132:
					return 4386;
				
				case 133:
					return 4394;
				
				case 134:
					return 4402;
				
				case 135:
					return 4410;
				
				case 136:
					return 4418;
				
				case 137:
					return 4426;
				
				case 138:
					return 4434;
				
				case 139:
					return 4442;
				
				case 140:
					return 4450;
				
				case 141:
					return 4458;
				
				case 142:
					return 4466;
				
				case 143:
					return 4474;
				
				case 144:
					return 4482;
				
				case 145:
					return 4490;
				
				case 146:
					return 4498;
				
				case 147:
					return 4506;
				
				case 148:
					return 4514;
				
				case 149:
					return 4522;
				
				case 150:
					return 4530;
				
				case 151:
					return 4538;
				
				case 152:
					return 4546;
				
				case 153:
					return 4554;
				
				case 154:
					return 4562;
				
				case 155:
					return 4570;
				
				case 156:
					return 4578;
				
				case 157:
					return 4586;
				
				case 158:
					return 5479;
				
				default:
			}
			switch (iParam1)
			{
				case 159:
					return 5928;
				
				case 160:
					return 5935;
				
				case 161:
					return 5942;
				
				case 162:
					return 5949;
				
				case 163:
					return 5956;
				
				case 164:
					return 5963;
				
				case 165:
					return 5970;
				
				case 166:
					return 5977;
				
				case 167:
					return 5984;
				
				case 168:
					return 5991;
				
				case 169:
					return 5998;
				
				case 170:
					return 6005;
				
				case 171:
					return 6012;
				
				case 172:
					return 6019;
				
				case 173:
					return 6026;
				
				case 174:
					return 6033;
				
				case 175:
					return 6040;
				
				case 176:
					return 6047;
				
				case 177:
					return 6054;
				
				case 178:
					return 6061;
				
				case 179:
					return 6068;
				
				case 180:
					return 6075;
				
				case 181:
					return 6082;
				
				case 182:
					return 6089;
				
				case 183:
					return 6096;
				
				default:
			}
			switch (iParam1)
			{
				case 184:
					return 6173;
				
				case 185:
					return 6180;
				
				case 186:
					return 6187;
				
				case 187:
					return 6194;
				
				case 188:
					return 6201;
				
				case 189:
					return 6208;
				
				case 190:
					return 6215;
				
				case 191:
					return 6222;
				
				case 192:
					return 6229;
				
				case 193:
					return 6236;
				
				default:
			}
			switch (iParam1)
			{
				case 194:
					return 6570;
				
				case 195:
					return 6577;
				
				case 196:
					return 6584;
				
				case 197:
					return 6591;
				
				case 198:
					return 6598;
				
				case 199:
					return 6605;
				
				case 200:
					return 6612;
				
				case 201:
					return 6619;
				
				case 202:
					return 6626;
				
				case 203:
					return 6633;
				
				case 204:
					return 6640;
				
				case 205:
					return 6647;
				
				case 206:
					return 6654;
				
				case 207:
					return 6661;
				
				case 208:
					return 6668;
				
				case 209:
					return 6675;
				
				case 210:
					return 6682;
				
				case 211:
					return 6689;
				
				case 212:
					return 6696;
				
				case 213:
					return 6703;
				
				case 214:
					return 6710;
				
				case 215:
					return 6717;
				
				case 216:
					return 6724;
				
				case 217:
					return 6731;
				
				case 218:
					return 6738;
				
				case 219:
					return 6745;
				
				case 220:
					return 6752;
				
				case 221:
					return 6759;
				
				case 222:
					return 6766;
				
				case 223:
					return 6773;
				
				case 224:
					return 6780;
				
				case 225:
					return 6787;
				
				case 226:
					return 6794;
				
				case 227:
					return 6801;
				
				case 228:
					return 6808;
				
				case 229:
					return 6815;
				
				case 230:
					return 6822;
				
				default:
			}
			switch (iParam1)
			{
				case 231:
					return 7292;
				
				case 232:
					return 7299;
				
				case 233:
					return 7306;
				
				case 234:
					return 7313;
				
				case 235:
					return 7320;
				
				case 236:
					return 7327;
				
				case 237:
					return 7334;
				
				case 238:
					return 7341;
				
				case 239:
					return 7348;
				
				case 240:
					return 7355;
				
				case 241:
					return 7362;
				
				case 242:
					return 7369;
				
				case 243:
					return 7376;
				
				case 244:
					return 7383;
				
				case 245:
					return 7390;
				
				case 246:
					return 7397;
				
				case 247:
					return 7404;
				
				case 248:
					return 7411;
				
				case 249:
					return 7418;
				
				case 250:
					return 7425;
				
				case 251:
					return 7432;
				
				case 252:
					return 7439;
				
				case 253:
					return 7446;
				
				case 254:
					return 7453;
				
				case 255:
					return 7460;
				
				case 256:
					return 7467;
				
				case 257:
					return 7474;
				
				case 258:
					return 7481;
				
				case 259:
					return 7488;
				
				case 260:
					return 7495;
				
				default:
			}
			switch (iParam1)
			{
				case 261:
					return 8015;
				
				case 262:
					return 8022;
				
				case 263:
					return 8029;
				
				case 264:
					return 8036;
				
				case 265:
					return 8043;
				
				case 266:
					return 8050;
				
				case 267:
					return 8057;
				
				case 268:
					return 8064;
				
				case 269:
					return 8071;
				
				case 270:
					return 8078;
				
				case 271:
					return 8539;
				
				case 272:
					return 8546;
				
				case 273:
					return 8553;
				
				case 274:
					return 8560;
				
				case 275:
					return 8567;
				
				case 276:
					return 8574;
				
				case 277:
					return 8581;
				
				case 278:
					return 8588;
				
				case 279:
					return 8595;
				
				case 280:
					return 8602;
				
				case 281:
					return 8984;
				
				case 282:
					return 8991;
				
				case 283:
					return 8998;
				
				case 284:
					return 9005;
				
				case 285:
					return 9012;
				
				case 286:
					return 9019;
				
				case 287:
					return 9026;
				
				case 288:
					return 9033;
				
				case 289:
					return 9040;
				
				case 290:
					return 9047;
				
				case 291:
					return 9054;
				
				case 292:
					return 9060;
				
				case 293:
					return 9066;
				
				case 294:
					return 9072;
				
				case 295:
					return 9079;
				
				case 296:
					return 9086;
				
				case 297:
					return 9093;
				
				case 298:
					return 9100;
				
				case 299:
					return 9107;
				
				case 300:
					return 9114;
				
				case 301:
					return 9121;
				
				case 302:
					return 9128;
				
				case 303:
					return 9135;
				
				case 304:
					return 9142;
				
				case 305:
					return 9148;
				
				case 306:
					return 9154;
				
				default:
			}
			break;
		
		case 4:
			switch (iParam1)
			{
				case 0:
					return 1632;
				
				case 1:
					return 1639;
				
				case 2:
					return 1646;
				
				case 3:
					return 1653;
				
				case 4:
					return 1660;
				
				case 5:
					return 1667;
				
				case 6:
					return 1674;
				
				case 7:
					return 1681;
				
				case 8:
					return 1688;
				
				case 9:
					return 1695;
				
				case 10:
					return 1702;
				
				case 11:
					return 1708;
				
				case 12:
					return 1714;
				
				case 13:
					return 1720;
				
				case 14:
					return 1799;
				
				case 15:
					return 1806;
				
				case 16:
					return 1813;
				
				case 17:
					return 1820;
				
				case 18:
					return 1827;
				
				case 19:
					return 1834;
				
				case 20:
					return 1841;
				
				case 21:
					return 1848;
				
				case 22:
					return 1855;
				
				case 23:
					return 1862;
				
				case 24:
					return 1868;
				
				case 25:
					return 1874;
				
				case 26:
					return 2169;
				
				case 27:
					return 2176;
				
				case 28:
					return 2183;
				
				case 29:
					return 2190;
				
				case 30:
					return 2197;
				
				case 31:
					return 2204;
				
				case 32:
					return 2211;
				
				case 33:
					return 2218;
				
				case 34:
					return 2225;
				
				case 35:
					return 2232;
				
				case 36:
					return 2239;
				
				case 37:
					return 2245;
				
				case 38:
					return 2251;
				
				case 39:
					return 2832;
				
				case 40:
					return 2839;
				
				case 41:
					return 2846;
				
				case 42:
					return 2853;
				
				case 43:
					return 2860;
				
				case 44:
					return 2867;
				
				case 45:
					return 2874;
				
				case 46:
					return 2881;
				
				case 47:
					return 2888;
				
				case 48:
					return 2895;
				
				case 49:
					return 2902;
				
				case 50:
					return 2908;
				
				case 51:
					return 2914;
				
				case 52:
					return 2956;
				
				case 53:
					return 2963;
				
				case 54:
					return 2970;
				
				case 55:
					return 2977;
				
				case 56:
					return 2984;
				
				case 57:
					return 2991;
				
				case 58:
					return 2998;
				
				case 59:
					return 3005;
				
				case 60:
					return 3012;
				
				case 61:
					return 3019;
				
				case 62:
					return 3026;
				
				case 63:
					return 3032;
				
				case 64:
					return 3038;
				
				case 65:
					return 3239;
				
				case 66:
					return 3247;
				
				case 67:
					return 3255;
				
				case 68:
					return 3263;
				
				case 69:
					return 3271;
				
				case 70:
					return 3279;
				
				case 71:
					return 3287;
				
				case 72:
					return 3295;
				
				case 73:
					return 3303;
				
				case 74:
					return 3311;
				
				case 75:
					return 3319;
				
				case 76:
					return 3327;
				
				case 77:
					return 3335;
				
				case 78:
					return 3343;
				
				case joaat("MPSV_LP0_31"):
					return 3351;
				
				case 80:
					return 3359;
				
				case 81:
					return 3367;
				
				case 82:
					return 3375;
				
				case 83:
					return 3383;
				
				case 84:
					return 3391;
				
				case 85:
					return 3399;
				
				case 86:
					return 3406;
				
				case 87:
					return 3413;
				
				default:
			}
			switch (iParam1)
			{
				case 88:
					return 4035;
				
				case 89:
					return 4043;
				
				case 90:
					return 4051;
				
				case 91:
					return 4059;
				
				case 92:
					return 4067;
				
				case 93:
					return 4075;
				
				case 94:
					return 4083;
				
				case 95:
					return 4091;
				
				case 96:
					return 4099;
				
				case 97:
					return 4107;
				
				case 98:
					return 4115;
				
				case 99:
					return 4123;
				
				case 100:
					return 4131;
				
				case 101:
					return 4139;
				
				case 102:
					return 4147;
				
				case 103:
					return 4155;
				
				case 104:
					return 4163;
				
				case 105:
					return 4171;
				
				case 106:
					return 4179;
				
				case 107:
					return 4187;
				
				case 108:
					return 4195;
				
				case 109:
					return 4203;
				
				case 110:
					return 4211;
				
				case 111:
					return 4219;
				
				case 112:
					return 4227;
				
				case 113:
					return 4235;
				
				case 114:
					return 4243;
				
				case 115:
					return 4251;
				
				case 116:
					return 4259;
				
				case 117:
					return 4267;
				
				case 118:
					return 4275;
				
				case 119:
					return 4283;
				
				case 120:
					return 4291;
				
				case 121:
					return 4299;
				
				case 122:
					return 4307;
				
				case 123:
					return 4315;
				
				case 124:
					return 4323;
				
				case 125:
					return 4331;
				
				case 126:
					return 4339;
				
				case 127:
					return 4347;
				
				case 128:
					return 4355;
				
				case 129:
					return 4363;
				
				case 130:
					return 4371;
				
				case 131:
					return 4379;
				
				case 132:
					return 4387;
				
				case 133:
					return 4395;
				
				case 134:
					return 4403;
				
				case 135:
					return 4411;
				
				case 136:
					return 4419;
				
				case 137:
					return 4427;
				
				case 138:
					return 4435;
				
				case 139:
					return 4443;
				
				case 140:
					return 4451;
				
				case 141:
					return 4459;
				
				case 142:
					return 4467;
				
				case 143:
					return 4475;
				
				case 144:
					return 4483;
				
				case 145:
					return 4491;
				
				case 146:
					return 4499;
				
				case 147:
					return 4507;
				
				case 148:
					return 4515;
				
				case 149:
					return 4523;
				
				case 150:
					return 4531;
				
				case 151:
					return 4539;
				
				case 152:
					return 4547;
				
				case 153:
					return 4555;
				
				case 154:
					return 4563;
				
				case 155:
					return 4571;
				
				case 156:
					return 4579;
				
				case 157:
					return 4587;
				
				case 158:
					return 5480;
				
				default:
			}
			switch (iParam1)
			{
				case 159:
					return 5929;
				
				case 160:
					return 5936;
				
				case 161:
					return 5943;
				
				case 162:
					return 5950;
				
				case 163:
					return 5957;
				
				case 164:
					return 5964;
				
				case 165:
					return 5971;
				
				case 166:
					return 5978;
				
				case 167:
					return 5985;
				
				case 168:
					return 5992;
				
				case 169:
					return 5999;
				
				case 170:
					return 6006;
				
				case 171:
					return 6013;
				
				case 172:
					return 6020;
				
				case 173:
					return 6027;
				
				case 174:
					return 6034;
				
				case 175:
					return 6041;
				
				case 176:
					return 6048;
				
				case 177:
					return 6055;
				
				case 178:
					return 6062;
				
				case 179:
					return 6069;
				
				case 180:
					return 6076;
				
				case 181:
					return 6083;
				
				case 182:
					return 6090;
				
				case 183:
					return 6097;
				
				default:
			}
			switch (iParam1)
			{
				case 184:
					return 6174;
				
				case 185:
					return 6181;
				
				case 186:
					return 6188;
				
				case 187:
					return 6195;
				
				case 188:
					return 6202;
				
				case 189:
					return 6209;
				
				case 190:
					return 6216;
				
				case 191:
					return 6223;
				
				case 192:
					return 6230;
				
				case 193:
					return 6237;
				
				default:
			}
			switch (iParam1)
			{
				case 194:
					return 6571;
				
				case 195:
					return 6578;
				
				case 196:
					return 6585;
				
				case 197:
					return 6592;
				
				case 198:
					return 6599;
				
				case 199:
					return 6606;
				
				case 200:
					return 6613;
				
				case 201:
					return 6620;
				
				case 202:
					return 6627;
				
				case 203:
					return 6634;
				
				case 204:
					return 6641;
				
				case 205:
					return 6648;
				
				case 206:
					return 6655;
				
				case 207:
					return 6662;
				
				case 208:
					return 6669;
				
				case 209:
					return 6676;
				
				case 210:
					return 6683;
				
				case 211:
					return 6690;
				
				case 212:
					return 6697;
				
				case 213:
					return 6704;
				
				case 214:
					return 6711;
				
				case 215:
					return 6718;
				
				case 216:
					return 6725;
				
				case 217:
					return 6732;
				
				case 218:
					return 6739;
				
				case 219:
					return 6746;
				
				case 220:
					return 6753;
				
				case 221:
					return 6760;
				
				case 222:
					return 6767;
				
				case 223:
					return 6774;
				
				case 224:
					return 6781;
				
				case 225:
					return 6788;
				
				case 226:
					return 6795;
				
				case 227:
					return 6802;
				
				case 228:
					return 6809;
				
				case 229:
					return 6816;
				
				case 230:
					return 6823;
				
				default:
			}
			switch (iParam1)
			{
				case 231:
					return 7293;
				
				case 232:
					return 7300;
				
				case 233:
					return 7307;
				
				case 234:
					return 7314;
				
				case 235:
					return 7321;
				
				case 236:
					return 7328;
				
				case 237:
					return 7335;
				
				case 238:
					return 7342;
				
				case 239:
					return 7349;
				
				case 240:
					return 7356;
				
				case 241:
					return 7363;
				
				case 242:
					return 7370;
				
				case 243:
					return 7377;
				
				case 244:
					return 7384;
				
				case 245:
					return 7391;
				
				case 246:
					return 7398;
				
				case 247:
					return 7405;
				
				case 248:
					return 7412;
				
				case 249:
					return 7419;
				
				case 250:
					return 7426;
				
				case 251:
					return 7433;
				
				case 252:
					return 7440;
				
				case 253:
					return 7447;
				
				case 254:
					return 7454;
				
				case 255:
					return 7461;
				
				case 256:
					return 7468;
				
				case 257:
					return 7475;
				
				case 258:
					return 7482;
				
				case 259:
					return 7489;
				
				case 260:
					return 7496;
				
				default:
			}
			switch (iParam1)
			{
				case 261:
					return 8016;
				
				case 262:
					return 8023;
				
				case 263:
					return 8030;
				
				case 264:
					return 8037;
				
				case 265:
					return 8044;
				
				case 266:
					return 8051;
				
				case 267:
					return 8058;
				
				case 268:
					return 8065;
				
				case 269:
					return 8072;
				
				case 270:
					return 8079;
				
				case 271:
					return 8540;
				
				case 272:
					return 8547;
				
				case 273:
					return 8554;
				
				case 274:
					return 8561;
				
				case 275:
					return 8568;
				
				case 276:
					return 8575;
				
				case 277:
					return 8582;
				
				case 278:
					return 8589;
				
				case 279:
					return 8596;
				
				case 280:
					return 8603;
				
				case 281:
					return 8985;
				
				case 282:
					return 8992;
				
				case 283:
					return 8999;
				
				case 284:
					return 9006;
				
				case 285:
					return 9013;
				
				case 286:
					return 9020;
				
				case 287:
					return 9027;
				
				case 288:
					return 9034;
				
				case 289:
					return 9041;
				
				case 290:
					return 9048;
				
				case 291:
					return 9055;
				
				case 292:
					return 9061;
				
				case 293:
					return 9067;
				
				case 294:
					return 9073;
				
				case 295:
					return 9080;
				
				case 296:
					return 9087;
				
				case 297:
					return 9094;
				
				case 298:
					return 9101;
				
				case 299:
					return 9108;
				
				case 300:
					return 9115;
				
				case 301:
					return 9122;
				
				case 302:
					return 9129;
				
				case 303:
					return 9136;
				
				case 304:
					return 9143;
				
				case 305:
					return 9149;
				
				case 306:
					return 9155;
				
				default:
			}
			break;
		
		case 5:
			switch (iParam1)
			{
				case 0:
					return 1633;
				
				case 1:
					return 1640;
				
				case 2:
					return 1647;
				
				case 3:
					return 1654;
				
				case 4:
					return 1661;
				
				case 5:
					return 1668;
				
				case 6:
					return 1675;
				
				case 7:
					return 1682;
				
				case 8:
					return 1689;
				
				case 9:
					return 1696;
				
				case 10:
					return 1703;
				
				case 11:
					return 1709;
				
				case 12:
					return 1715;
				
				case 13:
					return 1721;
				
				case 14:
					return 1800;
				
				case 15:
					return 1807;
				
				case 16:
					return 1814;
				
				case 17:
					return 1821;
				
				case 18:
					return 1828;
				
				case 19:
					return 1835;
				
				case 20:
					return 1842;
				
				case 21:
					return 1849;
				
				case 22:
					return 1856;
				
				case 23:
					return 1863;
				
				case 24:
					return 1869;
				
				case 25:
					return 1875;
				
				case 26:
					return 2170;
				
				case 27:
					return 2177;
				
				case 28:
					return 2184;
				
				case 29:
					return 2191;
				
				case 30:
					return 2198;
				
				case 31:
					return 2205;
				
				case 32:
					return 2212;
				
				case 33:
					return 2219;
				
				case 34:
					return 2226;
				
				case 35:
					return 2233;
				
				case 36:
					return 2240;
				
				case 37:
					return 2246;
				
				case 38:
					return 2252;
				
				case 39:
					return 2833;
				
				case 40:
					return 2840;
				
				case 41:
					return 2847;
				
				case 42:
					return 2854;
				
				case 43:
					return 2861;
				
				case 44:
					return 2868;
				
				case 45:
					return 2875;
				
				case 46:
					return 2882;
				
				case 47:
					return 2889;
				
				case 48:
					return 2896;
				
				case 49:
					return 2903;
				
				case 50:
					return 2909;
				
				case 51:
					return 2915;
				
				case 52:
					return 2957;
				
				case 53:
					return 2964;
				
				case 54:
					return 2971;
				
				case 55:
					return 2978;
				
				case 56:
					return 2985;
				
				case 57:
					return 2992;
				
				case 58:
					return 2999;
				
				case 59:
					return 3006;
				
				case 60:
					return 3013;
				
				case 61:
					return 3020;
				
				case 62:
					return 3027;
				
				case 63:
					return 3033;
				
				case 64:
					return 3039;
				
				case 65:
					return 3240;
				
				case 66:
					return 3248;
				
				case 67:
					return 3256;
				
				case 68:
					return 3264;
				
				case 69:
					return 3272;
				
				case 70:
					return 3280;
				
				case 71:
					return 3288;
				
				case 72:
					return 3296;
				
				case 73:
					return 3304;
				
				case 74:
					return 3312;
				
				case 75:
					return 3320;
				
				case 76:
					return 3328;
				
				case 77:
					return 3336;
				
				case 78:
					return 3344;
				
				case joaat("MPSV_LP0_31"):
					return 3352;
				
				case 80:
					return 3360;
				
				case 81:
					return 3368;
				
				case 82:
					return 3376;
				
				case 83:
					return 3384;
				
				case 84:
					return 3392;
				
				case 85:
					return 3400;
				
				case 86:
					return 3407;
				
				case 87:
					return 3414;
				
				default:
			}
			switch (iParam1)
			{
				case 88:
					return 4036;
				
				case 89:
					return 4044;
				
				case 90:
					return 4052;
				
				case 91:
					return 4060;
				
				case 92:
					return 4068;
				
				case 93:
					return 4076;
				
				case 94:
					return 4084;
				
				case 95:
					return 4092;
				
				case 96:
					return 4100;
				
				case 97:
					return 4108;
				
				case 98:
					return 4116;
				
				case 99:
					return 4124;
				
				case 100:
					return 4132;
				
				case 101:
					return 4140;
				
				case 102:
					return 4148;
				
				case 103:
					return 4156;
				
				case 104:
					return 4164;
				
				case 105:
					return 4172;
				
				case 106:
					return 4180;
				
				case 107:
					return 4188;
				
				case 108:
					return 4196;
				
				case 109:
					return 4204;
				
				case 110:
					return 4212;
				
				case 111:
					return 4220;
				
				case 112:
					return 4228;
				
				case 113:
					return 4236;
				
				case 114:
					return 4244;
				
				case 115:
					return 4252;
				
				case 116:
					return 4260;
				
				case 117:
					return 4268;
				
				case 118:
					return 4276;
				
				case 119:
					return 4284;
				
				case 120:
					return 4292;
				
				case 121:
					return 4300;
				
				case 122:
					return 4308;
				
				case 123:
					return 4316;
				
				case 124:
					return 4324;
				
				case 125:
					return 4332;
				
				case 126:
					return 4340;
				
				case 127:
					return 4348;
				
				case 128:
					return 4356;
				
				case 129:
					return 4364;
				
				case 130:
					return 4372;
				
				case 131:
					return 4380;
				
				case 132:
					return 4388;
				
				case 133:
					return 4396;
				
				case 134:
					return 4404;
				
				case 135:
					return 4412;
				
				case 136:
					return 4420;
				
				case 137:
					return 4428;
				
				case 138:
					return 4436;
				
				case 139:
					return 4444;
				
				case 140:
					return 4452;
				
				case 141:
					return 4460;
				
				case 142:
					return 4468;
				
				case 143:
					return 4476;
				
				case 144:
					return 4484;
				
				case 145:
					return 4492;
				
				case 146:
					return 4500;
				
				case 147:
					return 4508;
				
				case 148:
					return 4516;
				
				case 149:
					return 4524;
				
				case 150:
					return 4532;
				
				case 151:
					return 4540;
				
				case 152:
					return 4548;
				
				case 153:
					return 4556;
				
				case 154:
					return 4564;
				
				case 155:
					return 4572;
				
				case 156:
					return 4580;
				
				case 157:
					return 4588;
				
				case 158:
					return 5481;
				
				default:
			}
			switch (iParam1)
			{
				case 159:
					return 5930;
				
				case 160:
					return 5937;
				
				case 161:
					return 5944;
				
				case 162:
					return 5951;
				
				case 163:
					return 5958;
				
				case 164:
					return 5965;
				
				case 165:
					return 5972;
				
				case 166:
					return 5979;
				
				case 167:
					return 5986;
				
				case 168:
					return 5993;
				
				case 169:
					return 6000;
				
				case 170:
					return 6007;
				
				case 171:
					return 6014;
				
				case 172:
					return 6021;
				
				case 173:
					return 6028;
				
				case 174:
					return 6035;
				
				case 175:
					return 6042;
				
				case 176:
					return 6049;
				
				case 177:
					return 6056;
				
				case 178:
					return 6063;
				
				case 179:
					return 6070;
				
				case 180:
					return 6077;
				
				case 181:
					return 6084;
				
				case 182:
					return 6091;
				
				case 183:
					return 6098;
				
				default:
			}
			switch (iParam1)
			{
				case 184:
					return 6175;
				
				case 185:
					return 6182;
				
				case 186:
					return 6189;
				
				case 187:
					return 6196;
				
				case 188:
					return 6203;
				
				case 189:
					return 6210;
				
				case 190:
					return 6217;
				
				case 191:
					return 6224;
				
				case 192:
					return 6231;
				
				case 193:
					return 6238;
				
				default:
			}
			switch (iParam1)
			{
				case 194:
					return 6572;
				
				case 195:
					return 6579;
				
				case 196:
					return 6586;
				
				case 197:
					return 6593;
				
				case 198:
					return 6600;
				
				case 199:
					return 6607;
				
				case 200:
					return 6614;
				
				case 201:
					return 6621;
				
				case 202:
					return 6628;
				
				case 203:
					return 6635;
				
				case 204:
					return 6642;
				
				case 205:
					return 6649;
				
				case 206:
					return 6656;
				
				case 207:
					return 6663;
				
				case 208:
					return 6670;
				
				case 209:
					return 6677;
				
				case 210:
					return 6684;
				
				case 211:
					return 6691;
				
				case 212:
					return 6698;
				
				case 213:
					return 6705;
				
				case 214:
					return 6712;
				
				case 215:
					return 6719;
				
				case 216:
					return 6726;
				
				case 217:
					return 6733;
				
				case 218:
					return 6740;
				
				case 219:
					return 6747;
				
				case 220:
					return 6754;
				
				case 221:
					return 6761;
				
				case 222:
					return 6768;
				
				case 223:
					return 6775;
				
				case 224:
					return 6782;
				
				case 225:
					return 6789;
				
				case 226:
					return 6796;
				
				case 227:
					return 6803;
				
				case 228:
					return 6810;
				
				case 229:
					return 6817;
				
				case 230:
					return 6824;
				
				default:
			}
			switch (iParam1)
			{
				case 231:
					return 7294;
				
				case 232:
					return 7301;
				
				case 233:
					return 7308;
				
				case 234:
					return 7315;
				
				case 235:
					return 7322;
				
				case 236:
					return 7329;
				
				case 237:
					return 7336;
				
				case 238:
					return 7343;
				
				case 239:
					return 7350;
				
				case 240:
					return 7357;
				
				case 241:
					return 7364;
				
				case 242:
					return 7371;
				
				case 243:
					return 7378;
				
				case 244:
					return 7385;
				
				case 245:
					return 7392;
				
				case 246:
					return 7399;
				
				case 247:
					return 7406;
				
				case 248:
					return 7413;
				
				case 249:
					return 7420;
				
				case 250:
					return 7427;
				
				case 251:
					return 7434;
				
				case 252:
					return 7441;
				
				case 253:
					return 7448;
				
				case 254:
					return 7455;
				
				case 255:
					return 7462;
				
				case 256:
					return 7469;
				
				case 257:
					return 7476;
				
				case 258:
					return 7483;
				
				case 259:
					return 7490;
				
				case 260:
					return 7497;
				
				default:
			}
			switch (iParam1)
			{
				case 261:
					return 8017;
				
				case 262:
					return 8024;
				
				case 263:
					return 8031;
				
				case 264:
					return 8038;
				
				case 265:
					return 8045;
				
				case 266:
					return 8052;
				
				case 267:
					return 8059;
				
				case 268:
					return 8066;
				
				case 269:
					return 8073;
				
				case 270:
					return 8080;
				
				case 271:
					return 8541;
				
				case 272:
					return 8548;
				
				case 273:
					return 8555;
				
				case 274:
					return 8562;
				
				case 275:
					return 8569;
				
				case 276:
					return 8576;
				
				case 277:
					return 8583;
				
				case 278:
					return 8590;
				
				case 279:
					return 8597;
				
				case 280:
					return 8604;
				
				case 281:
					return 8986;
				
				case 282:
					return 8993;
				
				case 283:
					return 9000;
				
				case 284:
					return 9007;
				
				case 285:
					return 9014;
				
				case 286:
					return 9021;
				
				case 287:
					return 9028;
				
				case 288:
					return 9035;
				
				case 289:
					return 9042;
				
				case 290:
					return 9049;
				
				case 291:
					return 9056;
				
				case 292:
					return 9062;
				
				case 293:
					return 9068;
				
				case 294:
					return 9074;
				
				case 295:
					return 9081;
				
				case 296:
					return 9088;
				
				case 297:
					return 9095;
				
				case 298:
					return 9102;
				
				case 299:
					return 9109;
				
				case 300:
					return 9116;
				
				case 301:
					return 9123;
				
				case 302:
					return 9130;
				
				case 303:
					return 9137;
				
				case 304:
					return 9144;
				
				case 305:
					return 9150;
				
				case 306:
					return 9156;
				
				default:
			}
			break;
		
		case 6:
			switch (iParam1)
			{
				case 0:
					return 1635;
				
				case 1:
					return 1642;
				
				case 2:
					return 1649;
				
				case 3:
					return 1656;
				
				case 4:
					return 1663;
				
				case 5:
					return 1670;
				
				case 6:
					return 1677;
				
				case 7:
					return 1684;
				
				case 8:
					return 1691;
				
				case 9:
					return 1698;
				
				case 13:
					return 1723;
				
				case 14:
					return 1802;
				
				case 15:
					return 1809;
				
				case 16:
					return 1816;
				
				case 17:
					return 1823;
				
				case 18:
					return 1830;
				
				case 19:
					return 1837;
				
				case 20:
					return 1844;
				
				case 21:
					return 1851;
				
				case 22:
					return 1858;
				
				case 26:
					return 2172;
				
				case 27:
					return 2179;
				
				case 28:
					return 2186;
				
				case 29:
					return 2193;
				
				case 30:
					return 2200;
				
				case 31:
					return 2207;
				
				case 32:
					return 2214;
				
				case 33:
					return 2221;
				
				case 34:
					return 2228;
				
				case 35:
					return 2235;
				
				case 39:
					return 2835;
				
				case 40:
					return 2842;
				
				case 41:
					return 2849;
				
				case 42:
					return 2856;
				
				case 43:
					return 2863;
				
				case 44:
					return 2870;
				
				case 45:
					return 2877;
				
				case 46:
					return 2884;
				
				case 47:
					return 2891;
				
				case 48:
					return 2898;
				
				case 52:
					return 2959;
				
				case 53:
					return 2966;
				
				case 54:
					return 2973;
				
				case 55:
					return 2980;
				
				case 56:
					return 2987;
				
				case 57:
					return 2994;
				
				case 58:
					return 3001;
				
				case 59:
					return 3008;
				
				case 60:
					return 3015;
				
				case 61:
					return 3022;
				
				case 65:
					return 3243;
				
				case 66:
					return 3251;
				
				case 67:
					return 3259;
				
				case 68:
					return 3267;
				
				case 69:
					return 3275;
				
				case 70:
					return 3283;
				
				case 71:
					return 3291;
				
				case 72:
					return 3299;
				
				case 73:
					return 3307;
				
				case 74:
					return 3315;
				
				case 75:
					return 3323;
				
				case 76:
					return 3331;
				
				case 77:
					return 3339;
				
				case 78:
					return 3347;
				
				case joaat("MPSV_LP0_31"):
					return 3355;
				
				case 80:
					return 3363;
				
				case 81:
					return 3371;
				
				case 82:
					return 3379;
				
				case 83:
					return 3387;
				
				case 84:
					return 3395;
				
				default:
			}
			switch (iParam1)
			{
				case 88:
					return 4039;
				
				case 89:
					return 4047;
				
				case 90:
					return 4055;
				
				case 91:
					return 4063;
				
				case 92:
					return 4071;
				
				case 93:
					return 4079;
				
				case 94:
					return 4087;
				
				case 95:
					return 4095;
				
				case 96:
					return 4103;
				
				case 97:
					return 4111;
				
				case 98:
					return 4119;
				
				case 99:
					return 4127;
				
				case 100:
					return 4135;
				
				case 101:
					return 4143;
				
				case 102:
					return 4151;
				
				case 103:
					return 4159;
				
				case 104:
					return 4167;
				
				case 105:
					return 4175;
				
				case 106:
					return 4183;
				
				case 107:
					return 4191;
				
				case 108:
					return 4199;
				
				case 109:
					return 4207;
				
				case 110:
					return 4215;
				
				case 111:
					return 4223;
				
				case 112:
					return 4231;
				
				case 113:
					return 4239;
				
				case 114:
					return 4247;
				
				case 115:
					return 4255;
				
				case 116:
					return 4263;
				
				case 117:
					return 4271;
				
				case 118:
					return 4279;
				
				case 119:
					return 4287;
				
				case 120:
					return 4295;
				
				case 121:
					return 4303;
				
				case 122:
					return 4311;
				
				case 123:
					return 4319;
				
				case 124:
					return 4327;
				
				case 125:
					return 4335;
				
				case 126:
					return 4343;
				
				case 127:
					return 4351;
				
				case 128:
					return 4359;
				
				case 129:
					return 4367;
				
				case 130:
					return 4375;
				
				case 131:
					return 4383;
				
				case 132:
					return 4391;
				
				case 133:
					return 4399;
				
				case 134:
					return 4407;
				
				case 135:
					return 4415;
				
				case 136:
					return 4423;
				
				case 137:
					return 4431;
				
				case 138:
					return 4439;
				
				case 139:
					return 4447;
				
				case 140:
					return 4455;
				
				case 141:
					return 4463;
				
				case 142:
					return 4471;
				
				case 143:
					return 4479;
				
				case 144:
					return 4487;
				
				case 145:
					return 4495;
				
				case 146:
					return 4503;
				
				case 147:
					return 4511;
				
				case 148:
					return 4519;
				
				case 149:
					return 4527;
				
				case 150:
					return 4535;
				
				case 151:
					return 4543;
				
				case 152:
					return 4551;
				
				case 153:
					return 4559;
				
				case 154:
					return 4567;
				
				case 155:
					return 4575;
				
				case 156:
					return 4583;
				
				case 157:
					return 4591;
				
				case 158:
					return 5484;
				
				default:
			}
			switch (iParam1)
			{
				case 159:
					return 5932;
				
				case 160:
					return 5939;
				
				case 161:
					return 5946;
				
				case 162:
					return 5953;
				
				case 163:
					return 5960;
				
				case 164:
					return 5967;
				
				case 165:
					return 5974;
				
				case 166:
					return 5981;
				
				case 167:
					return 5988;
				
				case 168:
					return 5995;
				
				case 169:
					return 6002;
				
				case 170:
					return 6009;
				
				case 171:
					return 6016;
				
				case 172:
					return 6023;
				
				case 173:
					return 6030;
				
				case 174:
					return 6037;
				
				case 175:
					return 6044;
				
				case 176:
					return 6051;
				
				case 177:
					return 6058;
				
				case 178:
					return 6065;
				
				case 179:
					return 6072;
				
				case 180:
					return 6079;
				
				case 181:
					return 6086;
				
				case 182:
					return 6093;
				
				case 183:
					return 6100;
				
				default:
			}
			switch (iParam1)
			{
				case 184:
					return 6177;
				
				case 185:
					return 6184;
				
				case 186:
					return 6191;
				
				case 187:
					return 6198;
				
				case 188:
					return 6205;
				
				case 189:
					return 6212;
				
				case 190:
					return 6219;
				
				case 191:
					return 6226;
				
				case 192:
					return 6233;
				
				case 193:
					return 6240;
				
				default:
			}
			switch (iParam1)
			{
				case 194:
					return 6574;
				
				case 195:
					return 6581;
				
				case 196:
					return 6588;
				
				case 197:
					return 6595;
				
				case 198:
					return 6602;
				
				case 199:
					return 6609;
				
				case 200:
					return 6616;
				
				case 201:
					return 6623;
				
				case 202:
					return 6630;
				
				case 203:
					return 6637;
				
				case 204:
					return 6644;
				
				case 205:
					return 6651;
				
				case 206:
					return 6658;
				
				case 207:
					return 6665;
				
				case 208:
					return 6672;
				
				case 209:
					return 6679;
				
				case 210:
					return 6686;
				
				case 211:
					return 6693;
				
				case 212:
					return 6700;
				
				case 213:
					return 6707;
				
				case 214:
					return 6714;
				
				case 215:
					return 6721;
				
				case 216:
					return 6728;
				
				case 217:
					return 6735;
				
				case 218:
					return 6742;
				
				case 219:
					return 6749;
				
				case 220:
					return 6756;
				
				case 221:
					return 6763;
				
				case 222:
					return 6770;
				
				case 223:
					return 6777;
				
				case 224:
					return 6784;
				
				case 225:
					return 6791;
				
				case 226:
					return 6798;
				
				case 227:
					return 6805;
				
				case 228:
					return 6812;
				
				case 229:
					return 6819;
				
				case 230:
					return 6826;
				
				default:
			}
			switch (iParam1)
			{
				case 231:
					return 7296;
				
				case 232:
					return 7303;
				
				case 233:
					return 7310;
				
				case 234:
					return 7317;
				
				case 235:
					return 7324;
				
				case 236:
					return 7331;
				
				case 237:
					return 7338;
				
				case 238:
					return 7345;
				
				case 239:
					return 7352;
				
				case 240:
					return 7359;
				
				case 241:
					return 7366;
				
				case 242:
					return 7373;
				
				case 243:
					return 7380;
				
				case 244:
					return 7387;
				
				case 245:
					return 7394;
				
				case 246:
					return 7401;
				
				case 247:
					return 7408;
				
				case 248:
					return 7415;
				
				case 249:
					return 7422;
				
				case 250:
					return 7429;
				
				case 251:
					return 7436;
				
				case 252:
					return 7443;
				
				case 253:
					return 7450;
				
				case 254:
					return 7457;
				
				case 255:
					return 7464;
				
				case 256:
					return 7471;
				
				case 257:
					return 7478;
				
				case 258:
					return 7485;
				
				case 259:
					return 7492;
				
				case 260:
					return 7499;
				
				default:
			}
			switch (iParam1)
			{
				case 261:
					return 8019;
				
				case 262:
					return 8026;
				
				case 263:
					return 8033;
				
				case 264:
					return 8040;
				
				case 265:
					return 8047;
				
				case 266:
					return 8054;
				
				case 267:
					return 8061;
				
				case 268:
					return 8068;
				
				case 269:
					return 8075;
				
				case 270:
					return 8082;
				
				case 271:
					return 8543;
				
				case 272:
					return 8550;
				
				case 273:
					return 8557;
				
				case 274:
					return 8564;
				
				case 275:
					return 8571;
				
				case 276:
					return 8578;
				
				case 277:
					return 8585;
				
				case 278:
					return 8592;
				
				case 279:
					return 8599;
				
				case 280:
					return 8606;
				
				case 281:
					return 8988;
				
				case 282:
					return 8995;
				
				case 283:
					return 9002;
				
				case 284:
					return 9009;
				
				case 285:
					return 9016;
				
				case 286:
					return 9023;
				
				case 287:
					return 9030;
				
				case 288:
					return 9037;
				
				case 289:
					return 9044;
				
				case 290:
					return 9051;
				
				case 294:
					return 9076;
				
				case 295:
					return 9083;
				
				case 296:
					return 9090;
				
				case 297:
					return 9097;
				
				case 298:
					return 9104;
				
				case 299:
					return 9111;
				
				case 300:
					return 9118;
				
				case 301:
					return 9125;
				
				case 302:
					return 9132;
				
				case 303:
					return 9139;
				
				default:
			}
			break;
		
		case 7:
			switch (iParam1)
			{
				case 0:
					return 1634;
				
				case 1:
					return 1641;
				
				case 2:
					return 1648;
				
				case 3:
					return 1655;
				
				case 4:
					return 1662;
				
				case 5:
					return 1669;
				
				case 6:
					return 1676;
				
				case 7:
					return 1683;
				
				case 8:
					return 1690;
				
				case 9:
					return 1697;
				
				case 10:
					return 1704;
				
				case 11:
					return 1710;
				
				case 12:
					return 1716;
				
				case 13:
					return 1722;
				
				case 14:
					return 1801;
				
				case 15:
					return 1808;
				
				case 16:
					return 1815;
				
				case 17:
					return 1822;
				
				case 18:
					return 1829;
				
				case 19:
					return 1836;
				
				case 20:
					return 1843;
				
				case 21:
					return 1850;
				
				case 22:
					return 1857;
				
				case 23:
					return 1864;
				
				case 24:
					return 1870;
				
				case 25:
					return 1876;
				
				case 26:
					return 2171;
				
				case 27:
					return 2178;
				
				case 28:
					return 2185;
				
				case 29:
					return 2192;
				
				case 30:
					return 2199;
				
				case 31:
					return 2206;
				
				case 32:
					return 2213;
				
				case 33:
					return 2220;
				
				case 34:
					return 2227;
				
				case 35:
					return 2234;
				
				case 36:
					return 2241;
				
				case 37:
					return 2247;
				
				case 38:
					return 2253;
				
				case 39:
					return 2834;
				
				case 40:
					return 2841;
				
				case 41:
					return 2848;
				
				case 42:
					return 2855;
				
				case 43:
					return 2862;
				
				case 44:
					return 2869;
				
				case 45:
					return 2876;
				
				case 46:
					return 2883;
				
				case 47:
					return 2890;
				
				case 48:
					return 2897;
				
				case 49:
					return 2904;
				
				case 50:
					return 2910;
				
				case 51:
					return 2916;
				
				case 52:
					return 2958;
				
				case 53:
					return 2965;
				
				case 54:
					return 2972;
				
				case 55:
					return 2979;
				
				case 56:
					return 2986;
				
				case 57:
					return 2993;
				
				case 58:
					return 3000;
				
				case 59:
					return 3007;
				
				case 60:
					return 3014;
				
				case 61:
					return 3021;
				
				case 62:
					return 3028;
				
				case 63:
					return 3034;
				
				case 64:
					return 3040;
				
				case 65:
					return 3241;
				
				case 66:
					return 3249;
				
				case 67:
					return 3257;
				
				case 68:
					return 3265;
				
				case 69:
					return 3273;
				
				case 70:
					return 3281;
				
				case 71:
					return 3289;
				
				case 72:
					return 3297;
				
				case 73:
					return 3305;
				
				case 74:
					return 3313;
				
				case 75:
					return 3321;
				
				case 76:
					return 3329;
				
				case 77:
					return 3338;
				
				case 78:
					return 3346;
				
				case joaat("MPSV_LP0_31"):
					return 3353;
				
				case 80:
					return 3361;
				
				case 81:
					return 3369;
				
				case 82:
					return 3377;
				
				case 83:
					return 3385;
				
				case 84:
					return 3393;
				
				case 85:
					return 3401;
				
				case 86:
					return 3408;
				
				case 87:
					return 3415;
				
				default:
			}
			switch (iParam1)
			{
				case 88:
					return 4037;
				
				case 89:
					return 4045;
				
				case 90:
					return 4053;
				
				case 91:
					return 4061;
				
				case 92:
					return 4069;
				
				case 93:
					return 4077;
				
				case 94:
					return 4085;
				
				case 95:
					return 4093;
				
				case 96:
					return 4101;
				
				case 97:
					return 4109;
				
				case 98:
					return 4117;
				
				case 99:
					return 4125;
				
				case 100:
					return 4134;
				
				case 101:
					return 4142;
				
				case 102:
					return 4149;
				
				case 103:
					return 4157;
				
				case 104:
					return 4165;
				
				case 105:
					return 4173;
				
				case 106:
					return 4181;
				
				case 107:
					return 4189;
				
				case 108:
					return 4197;
				
				case 109:
					return 4205;
				
				case 110:
					return 4213;
				
				case 111:
					return 4221;
				
				case 112:
					return 4229;
				
				case 113:
					return 4237;
				
				case 114:
					return 4245;
				
				case 115:
					return 4253;
				
				case 116:
					return 4261;
				
				case 117:
					return 4269;
				
				case 118:
					return 4277;
				
				case 119:
					return 4285;
				
				case 120:
					return 4294;
				
				case 121:
					return 4302;
				
				case 122:
					return 4309;
				
				case 123:
					return 4317;
				
				case 124:
					return 4325;
				
				case 125:
					return 4333;
				
				case 126:
					return 4341;
				
				case 127:
					return 4349;
				
				case 128:
					return 4357;
				
				case 129:
					return 4365;
				
				case 130:
					return 4373;
				
				case 131:
					return 4381;
				
				case 132:
					return 4389;
				
				case 133:
					return 4397;
				
				case 134:
					return 4405;
				
				case 135:
					return 4413;
				
				case 136:
					return 4421;
				
				case 137:
					return 4429;
				
				case 138:
					return 4437;
				
				case 139:
					return 4445;
				
				case 140:
					return 4454;
				
				case 141:
					return 4462;
				
				case 142:
					return 4469;
				
				case 143:
					return 4477;
				
				case 144:
					return 4485;
				
				case 145:
					return 4493;
				
				case 146:
					return 4501;
				
				case 147:
					return 4509;
				
				case 148:
					return 4517;
				
				case 149:
					return 4525;
				
				case 150:
					return 4533;
				
				case 151:
					return 4541;
				
				case 152:
					return 4549;
				
				case 153:
					return 4557;
				
				case 154:
					return 4565;
				
				case 155:
					return 4573;
				
				case 156:
					return 4581;
				
				case 157:
					return 4589;
				
				case 158:
					return 5482;
				
				default:
			}
			switch (iParam1)
			{
				case 159:
					return 5931;
				
				case 160:
					return 5938;
				
				case 161:
					return 5945;
				
				case 162:
					return 5952;
				
				case 163:
					return 5959;
				
				case 164:
					return 5966;
				
				case 165:
					return 5973;
				
				case 166:
					return 5980;
				
				case 167:
					return 5987;
				
				case 168:
					return 5994;
				
				case 169:
					return 6001;
				
				case 170:
					return 6008;
				
				case 171:
					return 6015;
				
				case 172:
					return 6022;
				
				case 173:
					return 6029;
				
				case 174:
					return 6036;
				
				case 175:
					return 6043;
				
				case 176:
					return 6050;
				
				case 177:
					return 6057;
				
				case 178:
					return 6064;
				
				case 179:
					return 6071;
				
				case 180:
					return 6078;
				
				case 181:
					return 6085;
				
				case 182:
					return 6092;
				
				case 183:
					return 6099;
				
				default:
			}
			switch (iParam1)
			{
				case 184:
					return 6176;
				
				case 185:
					return 6183;
				
				case 186:
					return 6190;
				
				case 187:
					return 6197;
				
				case 188:
					return 6204;
				
				case 189:
					return 6211;
				
				case 190:
					return 6218;
				
				case 191:
					return 6225;
				
				case 192:
					return 6232;
				
				case 193:
					return 6239;
				
				default:
			}
			switch (iParam1)
			{
				case 194:
					return 6573;
				
				case 195:
					return 6580;
				
				case 196:
					return 6587;
				
				case 197:
					return 6594;
				
				case 198:
					return 6601;
				
				case 199:
					return 6608;
				
				case 200:
					return 6615;
				
				case 201:
					return 6622;
				
				case 202:
					return 6629;
				
				case 203:
					return 6636;
				
				case 204:
					return 6643;
				
				case 205:
					return 6650;
				
				case 206:
					return 6657;
				
				case 207:
					return 6664;
				
				case 208:
					return 6671;
				
				case 209:
					return 6678;
				
				case 210:
					return 6685;
				
				case 211:
					return 6692;
				
				case 212:
					return 6699;
				
				case 213:
					return 6706;
				
				case 214:
					return 6713;
				
				case 215:
					return 6720;
				
				case 216:
					return 6727;
				
				case 217:
					return 6734;
				
				case 218:
					return 6741;
				
				case 219:
					return 6748;
				
				case 220:
					return 6755;
				
				case 221:
					return 6762;
				
				case 222:
					return 6769;
				
				case 223:
					return 6776;
				
				case 224:
					return 6783;
				
				case 225:
					return 6790;
				
				case 226:
					return 6797;
				
				case 227:
					return 6804;
				
				case 228:
					return 6811;
				
				case 229:
					return 6818;
				
				case 230:
					return 6825;
				
				default:
			}
			switch (iParam1)
			{
				case 231:
					return 7295;
				
				case 232:
					return 7302;
				
				case 233:
					return 7309;
				
				case 234:
					return 7316;
				
				case 235:
					return 7323;
				
				case 236:
					return 7330;
				
				case 237:
					return 7337;
				
				case 238:
					return 7344;
				
				case 239:
					return 7351;
				
				case 240:
					return 7358;
				
				case 241:
					return 7365;
				
				case 242:
					return 7372;
				
				case 243:
					return 7379;
				
				case 244:
					return 7386;
				
				case 245:
					return 7393;
				
				case 246:
					return 7400;
				
				case 247:
					return 7407;
				
				case 248:
					return 7414;
				
				case 249:
					return 7421;
				
				case 250:
					return 7428;
				
				case 251:
					return 7435;
				
				case 252:
					return 7442;
				
				case 253:
					return 7449;
				
				case 254:
					return 7456;
				
				case 255:
					return 7463;
				
				case 256:
					return 7470;
				
				case 257:
					return 7477;
				
				case 258:
					return 7484;
				
				case 259:
					return 7491;
				
				case 260:
					return 7498;
				
				default:
			}
			switch (iParam1)
			{
				case 261:
					return 8018;
				
				case 262:
					return 8025;
				
				case 263:
					return 8032;
				
				case 264:
					return 8039;
				
				case 265:
					return 8046;
				
				case 266:
					return 8053;
				
				case 267:
					return 8060;
				
				case 268:
					return 8067;
				
				case 269:
					return 8074;
				
				case 270:
					return 8081;
				
				case 271:
					return 8542;
				
				case 272:
					return 8549;
				
				case 273:
					return 8556;
				
				case 274:
					return 8563;
				
				case 275:
					return 8570;
				
				case 276:
					return 8577;
				
				case 277:
					return 8584;
				
				case 278:
					return 8591;
				
				case 279:
					return 8598;
				
				case 280:
					return 8605;
				
				case 281:
					return 8987;
				
				case 282:
					return 8994;
				
				case 283:
					return 9001;
				
				case 284:
					return 9008;
				
				case 285:
					return 9015;
				
				case 286:
					return 9022;
				
				case 287:
					return 9029;
				
				case 288:
					return 9036;
				
				case 289:
					return 9043;
				
				case 290:
					return 9050;
				
				case 291:
					return 9057;
				
				case 292:
					return 9063;
				
				case 293:
					return 9069;
				
				case 294:
					return 9075;
				
				case 295:
					return 9082;
				
				case 296:
					return 9089;
				
				case 297:
					return 9096;
				
				case 298:
					return 9103;
				
				case 299:
					return 9110;
				
				case 300:
					return 9117;
				
				case 301:
					return 9124;
				
				case 302:
					return 9131;
				
				case 303:
					return 9138;
				
				case 304:
					return 9145;
				
				case 305:
					return 9151;
				
				case 306:
					return 9157;
				
				default:
			}
			break;
	}
	return 1629;
}

int func_691(int iParam0)
{
	int iVar0;
	
	if (iParam0 < 307)
	{
		iVar0 = 0;
		while (iVar0 < 25)
		{
			if (iParam0 >= func_697(iVar0) && iParam0 < func_692(iVar0))
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return -1;
}

int func_692(int iParam0)
{
	int iVar0;
	
	switch (iParam0)
	{
		case 8:
			return 108;
			break;
		
		case 9:
			return 128;
			break;
		
		case 10:
			return 148;
			break;
		
		case 11:
			return 156;
			break;
		
		case 6:
			return 75;
			break;
		
		case 7:
			return 88;
			break;
		
		case 5:
			return -1;
			break;
		
		case 12:
			return 179;
			break;
		
		case 13:
			return 186;
			break;
		
		case 14:
			return 192;
			break;
		
		case 15:
			return 202;
			break;
		
		case 16:
			return 212;
			break;
		
		case 17:
			return 222;
			break;
		
		case 18:
			return 236;
			break;
		
		case 19:
			return 246;
			break;
		
		case 20:
			return 256;
			break;
		
		case 21:
			return 268;
			break;
		
		case 22:
			return 278;
			break;
		
		case 23:
			return 294;
			break;
		
		case 24:
			return 307;
			break;
	}
	if (iParam0 >= 1000)
	{
		iVar0 = func_695(iParam0);
		return func_694(iVar0);
	}
	return (func_693(iParam0, -1, 1) * iParam0 + 1);
}

int func_693(int iParam0, int iParam1, bool bParam2)
{
	if (iParam0 == -1)
	{
		if (iParam1 >= 1)
		{
			if (func_424(iParam1, 0, 0))
			{
				return 20;
			}
			else if (func_430(iParam1))
			{
				return 0;
			}
			else if (func_422(iParam1, -1))
			{
				return 10;
			}
			else if (iParam1 == 115)
			{
				return 8;
			}
			else if (iParam1 == 116)
			{
				return 20;
			}
			else if (iParam1 == 117)
			{
				return 7;
			}
			else if (iParam1 == 118)
			{
				return 1;
			}
			else if ((iParam1 == 119 || iParam1 == 120) || iParam1 == 121)
			{
				return 10;
			}
			else if (iParam1 == 122)
			{
				return 9;
			}
			else if (iParam1 == 123 || iParam1 == 124)
			{
				return 10;
			}
			else if (iParam1 == 125)
			{
				return 10;
			}
			else if (iParam1 == 126)
			{
				return 10;
			}
			else if (iParam1 <= 126 && iParam1 > 0)
			{
				if (Global_1049924[iParam1 /*1951*/].f_33 == 2)
				{
					if (bParam2)
					{
						return 3;
					}
					else
					{
						return 2;
					}
				}
				else if (Global_1049924[iParam1 /*1951*/].f_33 == 6)
				{
					if (bParam2)
					{
						return 8;
					}
					else
					{
						return 6;
					}
				}
				else if (Global_1049924[iParam1 /*1951*/].f_33 == 10)
				{
					if (bParam2)
					{
						return 13;
					}
					else
					{
						return 10;
					}
				}
			}
		}
	}
	switch (iParam0)
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
		case 7:
		case 23:
		case 24:
			return 13;
			break;
		
		case 5:
			return 0;
			break;
		
		case 6:
			return 10;
			break;
		
		case 8:
		case 9:
		case 10:
			return 20;
			break;
		
		case 11:
			return 8;
			break;
		
		case 12:
			return 20;
			break;
		
		case 13:
			return 7;
			break;
		
		case 14:
			return 1;
			break;
		
		case 15:
		case 16:
		case 17:
			return 10;
			break;
		
		case 18:
		case 19:
		case 20:
			return 10;
			break;
		
		case 21:
			return 10;
			break;
		
		case 22:
			return 10;
			break;
	}
	return 0;
}

int func_694(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 157;
		
		case 2:
			return 224;
		
		case 1:
			return 227;
		
		case 3:
			return 279;
		
		default:
	}
	return -1;
}

int func_695(int iParam0)
{
	iParam0 = (iParam0 - 1000);
	if (iParam0 >= 0 && iParam0 <= 4)
	{
		return iParam0;
	}
	return -1;
}

void func_696(int iParam0, int iParam1, bool bParam2)
{
	if (Global_262145.f_10165)
	{
		*iParam1 = iParam0;
	}
	if (iParam0 >= 0)
	{
		*iParam1 = (Global_1672964[iParam0] - 1);
		if (bParam2)
		{
			if ((unk_0xD3137A576BE9EC5C() % 5) == 0)
			{
			}
		}
	}
	else
	{
		*iParam1 = -1;
	}
}

int func_697(int iParam0)
{
	int iVar0;
	
	switch (iParam0)
	{
		case 8:
			return 88;
			break;
		
		case 9:
			return 108;
			break;
		
		case 10:
			return 128;
			break;
		
		case 11:
			return 148;
			break;
		
		case 6:
			return 65;
			break;
		
		case 7:
			return 75;
			break;
		
		case 5:
			return -1;
			break;
		
		case 12:
			return 159;
			break;
		
		case 13:
			return 179;
			break;
		
		case 14:
			return 191;
			break;
		
		case 15:
			return 192;
			break;
		
		case 16:
			return 202;
			break;
		
		case 17:
			return 212;
			break;
		
		case 18:
			return 227;
			break;
		
		case 19:
			return 237;
			break;
		
		case 20:
			return 247;
			break;
		
		case 21:
			return 258;
			break;
		
		case 22:
			return 268;
			break;
		
		case 23:
			return 281;
			break;
		
		case 24:
			return 294;
			break;
	}
	if (iParam0 >= 1000)
	{
		iVar0 = func_695(iParam0);
		return func_698(iVar0);
	}
	return (func_693(iParam0, -1, 1) * iParam0);
}

int func_698(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 156;
		
		case 2:
			return 223;
		
		case 1:
			return 224;
		
		case 3:
			return 278;
		
		default:
	}
	return -1;
}

int func_699(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	switch (iVar0)
	{
		case joaat("technical2"):
			return 0;
			break;
		
		case joaat("boxville5"):
			return 1;
			break;
		
		case joaat("wastelander"):
			return 2;
			break;
		
		case joaat("phantom2"):
			return 3;
			break;
		
		case joaat("voltic2"):
			return 4;
			break;
		
		case joaat("dune4"):
			return 5;
			break;
		
		case joaat("dune5"):
			return 5;
			break;
		
		case joaat("ruiner2"):
			return 6;
			break;
		
		case joaat("blazer5"):
			return 7;
			break;
	}
	return -1;
}

int func_700(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (iParam0 != -1)
	{
		iVar0 = -1;
		iVar1 = iParam0 + 157;
		func_696(iVar1, &iVar0, 1);
		if (iVar0 >= 0)
		{
			iVar2 = func_200(func_690(4, iVar0), -1, 0);
			if (iVar2 != 0)
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_701(int iParam0)
{
	switch (iParam0)
	{
		case joaat("trailersmall2"):
			return 0;
			break;
	}
	return -1;
}

int func_702(int iParam0)
{
	if (iParam0 != func_40())
	{
		if (Global_1590682[iParam0 /*883*/].f_274.f_339 != 0)
		{
			return 1;
		}
	}
	return 0;
}

bool func_703()
{
	return func_200(6543, -1, 0) != 0;
}

bool func_704()
{
	return func_200(6164, -1, 0) != 0;
}

bool func_705()
{
	return func_200(5381, -1, 0) != 0;
}

bool func_706()
{
	return func_200(3829, -1, 0) != 0;
}

bool func_707()
{
	return func_200(3224, -1, 0) != 0;
}

bool func_708()
{
	return func_200(5380, -1, 0) != 0;
}

int func_709()
{
	int iVar0;
	
	iVar0 = func_177();
	if (iVar0 != func_40())
	{
		return Global_1630317[iVar0 /*595*/].f_11.f_98;
	}
	return 0;
}

int func_710(int iParam0)
{
	switch (iParam0)
	{
		case 258:
			return 1;
		
		default:
	}
	return 0;
}

var func_711(bool bParam0)
{
	var uVar0;
	int iVar1;
	
	iVar1 = unk_0x460153A63B9477BC();
	if (bParam0)
	{
		if (func_725(iVar1, 4, 0))
		{
			unk_0xBE20AB8238688965(&uVar0, 0);
		}
		if (func_725(iVar1, 5, 0))
		{
			unk_0xBE20AB8238688965(&uVar0, 1);
		}
		if (func_725(iVar1, 6, 1))
		{
			unk_0xBE20AB8238688965(&uVar0, 2);
		}
		if (func_725(iVar1, 1, 0))
		{
			unk_0xBE20AB8238688965(&uVar0, 3);
		}
		if (func_725(iVar1, 2, 0))
		{
			unk_0xBE20AB8238688965(&uVar0, 4);
		}
		if (func_725(iVar1, 3, 0))
		{
			unk_0xBE20AB8238688965(&uVar0, 5);
		}
		if ((((func_724(iVar1, 61) || func_724(iVar1, 62)) || func_724(iVar1, 63)) || func_724(iVar1, 64)) || func_724(iVar1, 65))
		{
			unk_0xBE20AB8238688965(&uVar0, 6);
		}
		if (func_353(iVar1))
		{
			unk_0xBE20AB8238688965(&uVar0, 7);
		}
		if (func_722(iVar1, 0))
		{
			unk_0xBE20AB8238688965(&uVar0, 8);
		}
		if (func_722(iVar1, 1))
		{
			unk_0xBE20AB8238688965(&uVar0, 9);
		}
		if (func_722(iVar1, 2))
		{
			unk_0xBE20AB8238688965(&uVar0, 10);
		}
		if (func_203(iVar1))
		{
			unk_0xBE20AB8238688965(&uVar0, 11);
		}
		if (func_718(iVar1, 3))
		{
			unk_0xBE20AB8238688965(&uVar0, 12);
		}
		if (func_718(iVar1, 4))
		{
			unk_0xBE20AB8238688965(&uVar0, 13);
		}
		if (func_718(iVar1, 2))
		{
			unk_0xBE20AB8238688965(&uVar0, 14);
		}
		if (func_718(iVar1, 6))
		{
			unk_0xBE20AB8238688965(&uVar0, 15);
		}
		if (func_718(iVar1, 5))
		{
			unk_0xBE20AB8238688965(&uVar0, 16);
		}
		if (func_716(iVar1))
		{
			unk_0xBE20AB8238688965(&uVar0, 17);
		}
		if (func_718(iVar1, 1))
		{
			unk_0xBE20AB8238688965(&uVar0, 18);
		}
		if (func_767(iVar1))
		{
			unk_0xBE20AB8238688965(&uVar0, 19);
		}
		if (func_761(iVar1))
		{
			unk_0xBE20AB8238688965(&uVar0, 20);
		}
		if (func_702(iVar1))
		{
			unk_0xBE20AB8238688965(&uVar0, 21);
		}
		if (func_774(iVar1))
		{
			unk_0xBE20AB8238688965(&uVar0, 22);
		}
		if (func_731(iVar1))
		{
			unk_0xBE20AB8238688965(&uVar0, 23);
		}
		if (func_715(iVar1))
		{
			unk_0xBE20AB8238688965(&uVar0, 24);
		}
		if (func_714(iVar1))
		{
			unk_0xBE20AB8238688965(&uVar0, 25);
		}
		if (func_685(iVar1))
		{
			unk_0xBE20AB8238688965(&uVar0, 26);
		}
		if (func_713(iVar1))
		{
			unk_0xBE20AB8238688965(&uVar0, 27);
		}
		if (func_741(iVar1))
		{
			unk_0xBE20AB8238688965(&uVar0, 28);
		}
		if (func_712(iVar1))
		{
			unk_0xBE20AB8238688965(&uVar0, 29);
		}
	}
	return uVar0;
}

bool func_712(int iParam0)
{
	if (iParam0 == func_40())
	{
		return 0;
	}
	return unk_0xCE990E643CD9D0E5(Global_1590682[iParam0 /*883*/].f_274.f_443, 0);
}

int func_713(int iParam0)
{
	if (iParam0 != func_40())
	{
		return unk_0xCE990E643CD9D0E5(Global_1590682[iParam0 /*883*/].f_274.f_270, 1);
	}
	return 0;
}

bool func_714(int iParam0)
{
	return Global_2425869[iParam0 /*443*/].f_265;
}

int func_715(int iParam0)
{
	if (iParam0 != func_40())
	{
		return Global_1590682[iParam0 /*883*/].f_274.f_393 != 0;
	}
	return 0;
}

bool func_716(int iParam0)
{
	return func_717(iParam0) != 0;
}

int func_717(int iParam0)
{
	if (iParam0 == func_40())
	{
		return 0;
	}
	return Global_1590682[iParam0 /*883*/].f_274.f_134;
}

int func_718(int iParam0, int iParam1)
{
	if (iParam0 == func_40())
	{
		return 0;
	}
	switch (iParam1)
	{
		case 1:
			return func_721(iParam0);
		
		case 2:
			return func_720(iParam0, 4);
		
		case 3:
			return func_720(iParam0, 3);
		
		case 4:
			return func_720(iParam0, 1);
		
		case 5:
			return func_720(iParam0, 0);
		
		case 6:
			return func_720(iParam0, 2);
		
		case 0:
			if (func_767(iParam0) || func_719(iParam0))
			{
				return 1;
			}
			break;
	}
	return 0;
}

int func_719(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 4)
	{
		if (Global_1590682[iParam0 /*883*/].f_274.f_106[iVar0 /*3*/] != 0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_720(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	if (iParam0 == func_40())
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 <= 5)
	{
		if (Global_1590682[iParam0 /*883*/].f_274.f_183[iVar0 /*12*/] != 0)
		{
			iVar1 = Global_1590682[iParam0 /*883*/].f_274.f_183[iVar0 /*12*/];
			if (func_226(iVar1) == iParam1)
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

bool func_721(int iParam0)
{
	return func_214(iParam0) != 0;
}

int func_722(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam0 == func_40())
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (Global_1590682[iParam0 /*883*/].f_274.f_106[iVar0 /*3*/] != 0)
		{
			if (func_723(Global_1590682[iParam0 /*883*/].f_274.f_106[iVar0 /*3*/]) == iParam1)
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_723(int iParam0)
{
	if (func_342(iParam0))
	{
		switch (iParam0)
		{
			case 1:
			case 2:
			case 3:
			case 4:
			case 5:
			case 9:
				return 0;
			
			case 10:
			case 11:
			case 12:
			case 13:
			case 14:
			case 15:
			case 21:
			case 7:
				return 1;
			
			case 16:
			case 17:
			case 18:
			case 19:
			case 20:
			case 22:
			case 6:
			case 8:
				return 2;
			}
		
		default:
	}
	return 3;
}

int func_724(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam0 != func_40() && func_6(iParam0, 0, 1))
	{
		iVar0 = 0;
		while (iVar0 < 25)
		{
			if (Global_1590682[iParam0 /*883*/].f_274[iVar0] == iParam1)
			{
				return 1;
			}
			iVar0++;
		}
	}
	return 0;
}

int func_725(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	
	if (iParam1 < 1 || iParam1 > 10)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 126)
	{
		if (func_727(iVar0) == iParam1 && (!func_726(iVar0) || !bParam2))
		{
			if (func_724(iParam0, iVar0))
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_726(int iParam0)
{
	switch (iParam0)
	{
		case 61:
		case 62:
		case 63:
		case 64:
		case 65:
			return 1;
		
		default:
	}
	return 0;
}

int func_727(int iParam0)
{
	switch (iParam0)
	{
		case 86:
			return 8;
			break;
		
		case 103:
		case 106:
		case 109:
		case 112:
		case 104:
		case 107:
		case 110:
		case 113:
		case 105:
		case 108:
		case 111:
		case 114:
			return 10;
			break;
		
		case 87:
		case 88:
		case 89:
		case 90:
			return 9;
			break;
		
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
			return 7;
			break;
		
		case 1:
		case 2:
		case 3:
		case 4:
		case 5:
		case 6:
		case 7:
		case 34:
		case 35:
		case 36:
		case 37:
		case 38:
		case 39:
		case 40:
		case 41:
		case 42:
		case 43:
		case 61:
		case 62:
		case 63:
		case 64:
		case 65:
		case 73:
		case 74:
		case 75:
		case 76:
		case 77:
		case 78:
		case joaat("MPSV_LP0_31"):
		case 80:
		case 81:
		case 82:
		case 83:
		case 84:
		case 85:
			return 6;
			break;
		
		case 8:
		case 9:
		case 10:
		case 11:
		case 12:
		case 13:
		case 14:
		case 15:
		case 16:
		case 66:
		case 67:
		case 68:
		case 69:
			return 5;
			break;
		
		case 17:
		case 18:
		case 19:
		case 20:
		case 21:
		case 22:
		case 23:
		case 70:
		case 71:
		case 72:
			return 4;
			break;
		
		case 24:
		case 26:
		case 27:
		case 54:
		case 56:
		case 57:
			return 3;
			break;
		
		case 25:
		case 28:
		case 32:
		case 33:
		case 50:
		case 52:
		case 53:
		case 55:
			return 2;
			break;
		
		case 29:
		case 30:
		case 31:
		case 44:
		case 45:
		case 46:
		case 47:
		case 48:
		case 49:
		case 51:
		case 58:
		case 59:
		case 60:
			return 1;
			break;
	}
	return 0;
}

int func_728(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = iParam1;
	if (iParam1 == -1)
	{
		iVar0 = func_98();
	}
	if (iParam0 == 7 && !Global_262145.f_16992)
	{
		return 0;
	}
	if (iParam0 >= 1000)
	{
		iVar1 = func_695(iParam0);
		if (iVar1 == 0 && func_200(5394, iParam1, 0) != 0)
		{
			return 1234;
		}
		if (func_730(-1) && iVar1 == 2)
		{
			return 1236;
		}
		if (func_774(unk_0x460153A63B9477BC()) && iVar1 == 1)
		{
			return 1237;
		}
		if (func_729(-1) && iVar1 == 3)
		{
			return 1238;
		}
	}
	if (iParam0 == 0)
	{
		return Global_1388203[iVar0];
	}
	else if (iParam0 == 99)
	{
		return Global_2590566[iVar0];
	}
	else if (iParam0 >= 1)
	{
		if (iParam0 >= 25)
		{
			return 0;
		}
		return Global_2590417[(iParam0 - 1) /*3*/][iVar0];
	}
	return 0;
}

bool func_729(int iParam0)
{
	return func_200(9513, iParam0, 0) != 0;
}

bool func_730(int iParam0)
{
	if (!Global_262145.f_23676)
	{
		return 0;
	}
	return func_200(7208, iParam0, 0) != 0;
}

int func_731(int iParam0)
{
	if (iParam0 != func_40())
	{
		return Global_1590682[iParam0 /*883*/].f_274.f_369 != 0;
	}
	return 0;
}

int func_732()
{
	if (Global_1676128.f_3 != 0)
	{
		return Global_1676128.f_3;
	}
	return -1;
}

int func_733()
{
	if (Global_1676128.f_2 != 0)
	{
		return Global_1676128.f_2;
	}
	return -1;
}

int func_734(int iParam0)
{
	if (iParam0 != func_40())
	{
		return unk_0xCE990E643CD9D0E5(Global_1590682[iParam0 /*883*/].f_274.f_334, 12);
	}
	return 0;
}

int func_735(int iParam0)
{
	if (iParam0 != func_40())
	{
		return unk_0xCE990E643CD9D0E5(Global_1590682[iParam0 /*883*/].f_274.f_334, 10);
	}
	return 0;
}

int func_736(int iParam0)
{
	if (iParam0 != func_40())
	{
		return unk_0xCE990E643CD9D0E5(Global_1590682[iParam0 /*883*/].f_274.f_334, 11);
	}
	return 0;
}

bool func_737(int iParam0)
{
	if (iParam0 == func_40())
	{
		return 0;
	}
	return unk_0xCE990E643CD9D0E5(Global_1590682[iParam0 /*883*/].f_274.f_281.f_4, 4);
}

bool func_738(int iParam0)
{
	if (iParam0 == func_40())
	{
		return 0;
	}
	return unk_0xCE990E643CD9D0E5(Global_1590682[iParam0 /*883*/].f_274.f_281.f_4, 3);
}

bool func_739(int iParam0)
{
	if (iParam0 == func_40())
	{
		return 0;
	}
	return unk_0xCE990E643CD9D0E5(Global_1590682[iParam0 /*883*/].f_274.f_281.f_4, 2);
}

bool func_740(int iParam0)
{
	if (iParam0 == func_40())
	{
		return 0;
	}
	return unk_0xCE990E643CD9D0E5(Global_1590682[iParam0 /*883*/].f_274.f_281.f_4, 1);
}

int func_741(int iParam0)
{
	if (iParam0 != -1)
	{
		return unk_0xCE990E643CD9D0E5(Global_1590682[iParam0 /*883*/].f_274.f_351, 31);
	}
	return 0;
}

int func_742(int iParam0, int iParam1, int iParam2)
{
	if (iParam0 == func_40() || !func_757(iParam1))
	{
		return 0;
	}
	switch (iParam1)
	{
		case 0:
			return func_752(iParam0, iParam2);
		
		case 1:
			return func_750(iParam0, iParam2);
		
		case 3:
			return func_749(iParam0);
		
		case 2:
			return func_744(iParam0, iParam2);
		
		case 4:
			return func_743(iParam0);
		
		default:
	}
	return 0;
}

bool func_743(int iParam0)
{
	if (iParam0 == func_40())
	{
		return 0;
	}
	return unk_0xCE990E643CD9D0E5(Global_1590682[iParam0 /*883*/].f_274.f_281.f_4, 6);
}

int func_744(int iParam0, int iParam1)
{
	switch (iParam1)
	{
		case 10:
			return func_748(iParam0);
		
		case 11:
			return func_747(iParam0);
		
		case 12:
			return func_746(iParam0);
		
		case 13:
			return func_745(iParam0);
		
		default:
	}
	return 0;
}

bool func_745(int iParam0)
{
	if (iParam0 == func_40())
	{
		return 0;
	}
	return unk_0xCE990E643CD9D0E5(Global_1590682[iParam0 /*883*/].f_274.f_281.f_4, 15);
}

bool func_746(int iParam0)
{
	if (iParam0 == func_40())
	{
		return 0;
	}
	return unk_0xCE990E643CD9D0E5(Global_1590682[iParam0 /*883*/].f_274.f_281.f_4, 14);
}

bool func_747(int iParam0)
{
	if (iParam0 == func_40())
	{
		return 0;
	}
	return unk_0xCE990E643CD9D0E5(Global_1590682[iParam0 /*883*/].f_274.f_281.f_4, 13);
}

bool func_748(int iParam0)
{
	if (iParam0 == func_40())
	{
		return 0;
	}
	return unk_0xCE990E643CD9D0E5(Global_1590682[iParam0 /*883*/].f_274.f_281.f_4, 12);
}

bool func_749(int iParam0)
{
	if (iParam0 == func_40())
	{
		return 0;
	}
	return unk_0xCE990E643CD9D0E5(Global_1590682[iParam0 /*883*/].f_274.f_281.f_4, 5);
}

int func_750(int iParam0, int iParam1)
{
	switch (iParam1)
	{
		case 5:
			return func_751(iParam0);
		
		case 6:
			return func_740(iParam0);
		
		case 7:
			return func_739(iParam0);
		
		case 8:
			return func_738(iParam0);
		
		case 9:
			return func_737(iParam0);
		
		default:
	}
	return 0;
}

bool func_751(int iParam0)
{
	if (iParam0 == func_40())
	{
		return 0;
	}
	return unk_0xCE990E643CD9D0E5(Global_1590682[iParam0 /*883*/].f_274.f_281.f_4, 0);
}

int func_752(int iParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
			return func_756(iParam0);
		
		case 1:
			return func_755(iParam0);
		
		case 2:
			return func_754(iParam0);
		
		case 3:
			return func_753(iParam0);
		
		case 4:
			return func_741(iParam0);
		
		default:
	}
	return 0;
}

bool func_753(int iParam0)
{
	if (iParam0 == func_40())
	{
		return 0;
	}
	return unk_0xCE990E643CD9D0E5(Global_1590682[iParam0 /*883*/].f_274.f_281.f_4, 10);
}

bool func_754(int iParam0)
{
	if (iParam0 == func_40())
	{
		return 0;
	}
	return unk_0xCE990E643CD9D0E5(Global_1590682[iParam0 /*883*/].f_274.f_281.f_4, 9);
}

bool func_755(int iParam0)
{
	if (iParam0 == func_40())
	{
		return 0;
	}
	return unk_0xCE990E643CD9D0E5(Global_1590682[iParam0 /*883*/].f_274.f_281.f_4, 8);
}

bool func_756(int iParam0)
{
	if (iParam0 == func_40())
	{
		return 0;
	}
	return unk_0xCE990E643CD9D0E5(Global_1590682[iParam0 /*883*/].f_274.f_281.f_4, 7);
}

bool func_757(int iParam0)
{
	return (iParam0 != -1 && iParam0 != 6);
}

int func_758(int iParam0)
{
	int iVar0;
	
	if (iParam0 == func_40())
	{
		return 0;
	}
	iVar0 = 1;
	if (func_742(iParam0, 2, 13))
	{
		iVar0 = 5;
	}
	else if (func_742(iParam0, 2, 12))
	{
		iVar0 = 4;
	}
	else if (func_742(iParam0, 2, 11))
	{
		iVar0 = 3;
	}
	else if (func_742(iParam0, 2, 10))
	{
		iVar0 = 2;
	}
	return iVar0;
}

var func_759(int iParam0)
{
	return Global_1590682[iParam0 /*883*/].f_211.f_6;
}

bool func_760()
{
	return func_200(6157, -1, 0) != 0;
}

int func_761(int iParam0)
{
	if (iParam0 != func_40())
	{
		return Global_1590682[iParam0 /*883*/].f_274.f_271 != 0;
	}
	return 0;
}

bool func_762()
{
	return func_200(6165, -1, 0) == 3;
}

bool func_763()
{
	return func_200(6165, -1, 0) == 2;
}

bool func_764()
{
	return func_200(6165, -1, 0) == 1;
}

int func_765()
{
	int iVar0;
	
	if (func_202())
	{
		return 4;
	}
	else if (func_176())
	{
		if (func_353(unk_0x460153A63B9477BC()))
		{
			return 8;
		}
		return 6;
	}
	if (func_127(1))
	{
		iVar0 = func_766(unk_0x460153A63B9477BC());
		if (iVar0 == -1)
		{
			iVar0 = 5;
		}
		return iVar0;
	}
	else if (func_104(1))
	{
		if (func_353(func_177()))
		{
			return 9;
		}
		return 7;
	}
	return -2;
}

int func_766(int iParam0)
{
	if (func_81(iParam0, 1))
	{
		return Global_1630317[iParam0 /*595*/].f_11.f_424;
	}
	return -1;
}

int func_767(int iParam0)
{
	if (iParam0 != func_40())
	{
		return Global_1590682[iParam0 /*883*/].f_274.f_264 != 0;
	}
	return 0;
}

int func_768(int iParam0, int iParam1)
{
	return func_200(func_769(iParam1), iParam0, 0);
}

int func_769(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 3899;
		
		case 1:
			return 3928;
		
		case 2:
			return 3932;
		
		case 3:
			return 3936;
		
		case 4:
			return 3940;
		
		case 5:
			return 5451;
		
		default:
	}
	return 3899;
}

int func_770(int iParam0)
{
	if (func_102(iParam0) == 225 || func_102(iParam0) == 226)
	{
		return func_188(iParam0);
	}
	return -1;
}

int func_771(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam0 == func_40())
	{
		return 0;
	}
	if (func_318(iParam1))
	{
		iVar0 = 0;
		while (iVar0 <= 5)
		{
			if (Global_1590682[iParam0 /*883*/].f_274.f_183[iVar0 /*12*/] == iParam1)
			{
				return Global_1590682[iParam0 /*883*/].f_274.f_183[iVar0 /*12*/].f_2;
			}
			iVar0++;
		}
	}
	return 0;
}

var func_772()
{
	int iVar0;
	var uVar1;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (func_328(unk_0x460153A63B9477BC(), iVar0))
		{
			unk_0xBE20AB8238688965(&uVar1, iVar0);
		}
		iVar0++;
	}
	return uVar1;
}

int func_773(bool bParam0)
{
	if (bParam0)
	{
		return 1;
	}
	return 0;
}

int func_774(int iParam0)
{
	if (iParam0 != func_40())
	{
		return Global_1590682[iParam0 /*883*/].f_274.f_322 != 0;
	}
	return 0;
}

int func_775(int iParam0)
{
	if (iParam0 == func_40())
	{
		return -1;
	}
	return Global_1630317[iParam0 /*595*/].f_11.f_8[1];
}

int func_776(int iParam0)
{
	if (iParam0 == func_40())
	{
		return -1;
	}
	return Global_1630317[iParam0 /*595*/].f_11.f_8[0];
}

void func_777(char* sParam0, char* sParam1, int iParam2, int iParam3)
{
	unk_0x17751E107423AFE9(sParam0);
	if (!iParam2 == 0)
	{
		unk_0x7006FC1051C85FCA(iParam2);
	}
	unk_0x9EFD301E3BE8324E(sParam1);
	unk_0x1A169149B3D18FCB(0, 0, false, iParam3);
}

void func_778(int iParam0)
{
	Local_103[unk_0x59E2AD1A8ACEDA31() /*4*/].f_3 = iParam0;
}

void func_779(bool bParam0)
{
	if (bParam0)
	{
		if (!func_135(unk_0x460153A63B9477BC(), 9))
		{
			if (func_141(unk_0x460153A63B9477BC()) != 0)
			{
				func_158(9);
			}
		}
	}
	else if (func_135(unk_0x460153A63B9477BC(), 9))
	{
		func_148(9);
	}
}

void func_780()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < func_14())
	{
		if (unk_0x3D70CCF2C9B362CD(func_28(iVar0)))
		{
			if (unk_0x80FF6C016CDB0FAF(unk_0x770D3B2B4702434A(func_28(iVar0)), 0))
			{
				if (unk_0xAA5B806352173DEA(unk_0x770D3B2B4702434A(func_28(iVar0))))
				{
					if (func_6(unk_0x460153A63B9477BC(), 0, 1))
					{
						func_781(unk_0x770D3B2B4702434A(func_28(iVar0)));
					}
				}
			}
		}
		iVar0++;
	}
}

void func_781(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar1 = unk_0xF1110FE23C67293A(iVar0);
		if (func_6(iVar1, 0, 1))
		{
			if (func_179(iVar1, func_7(), 1) || func_783(iVar1, func_7()))
			{
				unk_0xA33CABD77BE9CAC1(iParam0, iVar1, 0);
			}
			else
			{
				func_782(iVar1, iParam0);
				unk_0xA33CABD77BE9CAC1(iParam0, iVar1, 1);
			}
		}
		iVar0++;
	}
}

void func_782(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = unk_0x1FA7B77001D60F9D(iParam0);
	if (unk_0x80FF6C016CDB0FAF(iParam1, 0))
	{
		if (unk_0xE0B3BC41DDA88DF0(iVar0, iParam1, true))
		{
			func_591(func_163(iParam0), 0, 0f, 0, 0, 0, -1);
		}
	}
}

int func_783(int iParam0, int iParam1)
{
	if (iParam1 != func_40())
	{
		if (Global_1630317[iParam0 /*595*/].f_11.f_26 != func_40())
		{
			return iParam1 == Global_1630317[iParam0 /*595*/].f_11.f_26;
		}
	}
	return 0;
}

void func_784(int iParam0, bool bParam1, int iParam2, int iParam3)
{
	float fVar0;
	
	if (Global_1630317[unk_0x460153A63B9477BC() /*595*/].f_11.f_33 != iParam0)
	{
		func_798(-1);
		Global_1630317[unk_0x460153A63B9477BC() /*595*/].f_11.f_33 = iParam0;
		if (func_797() != -1)
		{
			func_796(-1);
		}
		if (func_795() != -1)
		{
			func_794(-1);
		}
		func_793(iParam2);
		func_791(iParam0);
		if (!func_642(iParam0))
		{
			fVar0 = func_641(iParam0);
			if (fVar0 != 1f)
			{
				func_637(fVar0);
				unk_0xBE20AB8238688965(&(Global_1676119.f_3), 1);
			}
		}
		if (!func_645(iParam0) || iParam3)
		{
			if (func_643(iParam0, iParam2) && iParam3 == 1)
			{
				unk_0x53797676AD34A9AA(0);
				if (!unk_0x5AEB5DDFFAD43CA5(unk_0x9B0761B4C3EB8BC7()))
				{
					unk_0xCAD5C18968E57C30(unk_0x460153A63B9477BC(), 0, 0);
					unk_0x4B86C627B5EABFBF(unk_0x460153A63B9477BC(), 0);
				}
				unk_0xBE20AB8238688965(&(Global_1676119.f_3), 0);
			}
			else if (unk_0xB9FD7D4438BECDFC() < 5)
			{
				unk_0x34FEEAC2548C3789(1f);
				unk_0x53797676AD34A9AA(5);
			}
		}
		if (func_154())
		{
			func_158(27);
		}
		if (bParam1)
		{
			if (!func_146())
			{
				func_634(1);
			}
		}
		if ((((((iParam0 == 159 || iParam0 == 157) || iParam0 == 153) || iParam0 == 154) || iParam0 == 164) || iParam0 == 155) || iParam0 == 171)
		{
			if ((unk_0xCE990E643CD9D0E5(Global_2540384.f_4619, 1) || unk_0xCE990E643CD9D0E5(Global_2540384.f_4619, 4)) || unk_0xCE990E643CD9D0E5(Global_2540384.f_4619, 0))
			{
				func_100(6);
			}
			func_790();
		}
		if (((iParam0 == 164 || iParam0 == 208) || iParam0 == 250) || iParam0 == 237)
		{
			unk_0x40ECEB892E6BDDDB(3, false);
			unk_0x40ECEB892E6BDDDB(5, false);
		}
		if (func_157(unk_0x460153A63B9477BC()) && func_143(unk_0x460153A63B9477BC()))
		{
			unk_0xBE20AB8238688965(&(Global_1630317[unk_0x460153A63B9477BC() /*595*/].f_1), 8);
		}
		func_786();
		if (func_785(iParam0))
		{
			unk_0x40ECEB892E6BDDDB(3, false);
			unk_0x40ECEB892E6BDDDB(5, false);
			unk_0xBE20AB8238688965(&(Global_1676119.f_3), 6);
		}
		Global_2540384.f_6650 = 0;
	}
}

int func_785(int iParam0)
{
	switch (iParam0)
	{
		case 216:
		case 218:
		case 215:
		case 120:
		case 214:
		case 220:
		case 221:
		case 217:
		case 219:
			return 1;
		
		default:
	}
	return 0;
}

void func_786()
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	
	bVar3 = func_789();
	iVar2 = func_41(unk_0x460153A63B9477BC());
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar1 = unk_0xF1110FE23C67293A(iVar0);
		if (unk_0x166E920FB00B2DBB(iVar1))
		{
			if (func_179(iVar1, iVar2, 1) || func_787(iVar1, unk_0x460153A63B9477BC()))
			{
				unk_0xA3B640F5FFBB6FBF(unk_0x460153A63B9477BC(), iVar1, bVar3);
				unk_0xA3B640F5FFBB6FBF(iVar1, unk_0x460153A63B9477BC(), bVar3);
			}
		}
		iVar0++;
	}
}

int func_787(int iParam0, int iParam1)
{
	if (func_81(iParam0, 1) && func_81(iParam1, 1))
	{
		return (func_788(iParam0) == func_41(iParam1) || func_788(iParam1) == func_41(iParam0));
	}
	return 0;
}

int func_788(int iParam0)
{
	if (func_81(iParam0, 1))
	{
		return Global_1630317[func_41(iParam0) /*595*/].f_11.f_457;
	}
	return func_40();
}

int func_789()
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_177();
	if (iVar0 != func_40())
	{
		if (func_6(iVar0, 0, 1))
		{
			iVar1 = iVar0;
			if (iVar1 != -1)
			{
				return unk_0xCE990E643CD9D0E5(Global_1630317[iVar1 /*595*/].f_1, 16);
			}
		}
	}
	return 0;
}

void func_790()
{
	if (unk_0xCE990E643CD9D0E5(Global_2540384.f_4619, 1))
	{
		unk_0xD2459066EA58CE43(&(Global_2540384.f_4619), 1);
	}
	if (unk_0xCE990E643CD9D0E5(Global_2540384.f_4619, 4))
	{
		unk_0xD2459066EA58CE43(&(Global_2540384.f_4619), 4);
	}
	if (unk_0xCE990E643CD9D0E5(Global_2540384.f_4619, 6))
	{
		unk_0xD2459066EA58CE43(&(Global_2540384.f_4619), 6);
	}
	unk_0xD2459066EA58CE43(&(Global_2540384.f_4619), 0);
	unk_0xD2459066EA58CE43(&(Global_2540384.f_4619), 2);
	Global_1590682[unk_0x460153A63B9477BC() /*883*/].f_758 = 0;
	if (Global_2540384.f_4621 > 0)
	{
		unk_0x53797676AD34A9AA(Global_2540384.f_4621);
	}
	Global_2540384.f_4620 = 0;
}

void func_791(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_200(3792, -1, 0);
	iVar1 = func_792(iParam0);
	if (iVar1 != -1)
	{
		unk_0xBE20AB8238688965(&iVar0, iVar1);
		func_198(3792, iVar0, -1, 1, 0);
	}
}

int func_792(int iParam0)
{
	switch (iParam0)
	{
		case 170:
			return 0;
		
		case 166:
			return 1;
		
		case 171:
			return 2;
		
		case 172:
			return 3;
		
		case 173:
			return 4;
		
		case 214:
			return 5;
		
		case 215:
			return 6;
		
		case 216:
			return 7;
		
		case 217:
			return 8;
		
		case 218:
			return 9;
		
		case 219:
			return 10;
		
		case 220:
			return 11;
		
		case 221:
			return 12;
		
		default:
	}
	return -1;
}

void func_793(int iParam0)
{
	int iVar0;
	
	iVar0 = unk_0x460153A63B9477BC();
	if (Global_1630317[iVar0 /*595*/].f_11.f_181 != iParam0)
	{
		Global_1630317[iVar0 /*595*/].f_11.f_181 = iParam0;
	}
}

void func_794(int iParam0)
{
	if (Global_2540384.f_5188.f_341 != iParam0)
	{
		Global_2540384.f_5188.f_341 = iParam0;
	}
}

int func_795()
{
	return Global_2540384.f_5188.f_341;
}

void func_796(int iParam0)
{
	if (Global_2540384.f_5188.f_340 != iParam0)
	{
		Global_2540384.f_5188.f_340 = iParam0;
	}
}

int func_797()
{
	return Global_2540384.f_5188.f_340;
}

void func_798(int iParam0)
{
	Global_1630317[unk_0x460153A63B9477BC() /*595*/].f_11.f_32 = iParam0;
}

bool func_799(int iParam0, bool bParam1)
{
	return func_179(unk_0x460153A63B9477BC(), iParam0, bParam1);
}

int func_800()
{
	return Local_103[unk_0x59E2AD1A8ACEDA31() /*4*/].f_3;
}

int func_801()
{
	if (func_146())
	{
		return 1;
	}
	return 0;
}

void func_802(int iParam0, int iParam1)
{
	Local_103[iParam0 /*4*/] = iParam1;
}

int func_803()
{
	return 1;
}

int func_804()
{
	return Local_102;
}

int func_805(int iParam0)
{
	return Local_103[iParam0 /*4*/];
}

void func_806()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0;
	while (iVar0 < unk_0x2AC1C68C7CCA90E5(1))
	{
		iVar1 = unk_0x39BE1B4CEB4DAEC8(1, iVar0);
		switch (iVar1)
		{
			case 185:
				func_807(iVar0);
				break;
		}
		iVar0++;
	}
	iVar2 = 0;
	while (iVar2 < func_14())
	{
		if (!unk_0xCE990E643CD9D0E5(Local_102.f_1, iVar2) && !unk_0xCE990E643CD9D0E5(Local_102.f_1, iVar2 + 8))
		{
			if (unk_0x460153A63B9477BC() == func_7())
			{
				if (unk_0xCE990E643CD9D0E5(Local_102.f_1, 12))
				{
					if (unk_0x3D70CCF2C9B362CD(func_28(iVar2)))
					{
						if (unk_0xA59F96B50B97E63C(unk_0x770D3B2B4702434A(func_28(iVar2)), 0))
						{
							if ((unk_0xE72C9284B5143451(unk_0x770D3B2B4702434A(func_28(iVar2))) && !unk_0x80FF6C016CDB0FAF(unk_0x770D3B2B4702434A(func_28(iVar2)), 0)) && unk_0xB064AF9925F5537B(unk_0x770D3B2B4702434A(func_28(iVar2)), -1, 0))
							{
								unk_0xBE20AB8238688965(&(Local_103[unk_0x59E2AD1A8ACEDA31() /*4*/].f_1), iVar2 + 8);
							}
							else if (func_3(&(Local_105[iVar2 /*2*/]), 60000, 0))
							{
								unk_0xBE20AB8238688965(&(Local_103[unk_0x59E2AD1A8ACEDA31() /*4*/].f_1), iVar2 + 8);
							}
						}
						else if (!unk_0x80FF6C016CDB0FAF(unk_0x770D3B2B4702434A(func_28(iVar2)), 0))
						{
							if (func_3(&(Local_105[iVar2 /*2*/]), 60000, 0))
							{
								unk_0xBE20AB8238688965(&(Local_103[unk_0x59E2AD1A8ACEDA31() /*4*/].f_1), iVar2 + 8);
							}
						}
					}
					else if (func_3(&(Local_105[iVar2 /*2*/]), 60000, 0))
					{
						unk_0xBE20AB8238688965(&(Local_103[unk_0x59E2AD1A8ACEDA31() /*4*/].f_1), iVar2 + 8);
					}
				}
			}
		}
		iVar2++;
	}
}

void func_807(int iParam0)
{
	struct<6> Var0;
	int iVar1;
	int iVar2;
	
	if (unk_0x477FAFFE21935947(1, iParam0, &Var0, 13))
	{
		if (unk_0xAE06B9E39EBDE049(Var0))
		{
			if (unk_0x20F7576FDB52E2B0(Var0))
			{
				iVar1 = 0;
				while (iVar1 < func_14())
				{
					if (!unk_0xCE990E643CD9D0E5(Local_102.f_1, iVar1) && !unk_0xCE990E643CD9D0E5(Local_102.f_1, iVar1 + 8))
					{
						if (unk_0xEA90A5DC55A2F652(Var0) == unk_0x770D3B2B4702434A(func_28(iVar1)))
						{
							if (unk_0x3D70CCF2C9B362CD(func_28(iVar1)) && unk_0xA59F96B50B97E63C(unk_0x770D3B2B4702434A(func_28(iVar1)), 0))
							{
								if ((unk_0xE72C9284B5143451(unk_0x770D3B2B4702434A(func_28(iVar1))) && !unk_0x80FF6C016CDB0FAF(unk_0x770D3B2B4702434A(func_28(iVar1)), 0)) && unk_0xB064AF9925F5537B(unk_0x770D3B2B4702434A(func_28(iVar1)), -1, 0))
								{
									return;
								}
							}
							if (unk_0xAE06B9E39EBDE049(Var0.f_1) && unk_0xA1914E72A0EB31D0(Var0.f_1))
							{
								if (unk_0x9048E8838E822F21(Var0.f_1) == unk_0x9B0761B4C3EB8BC7())
								{
									if (func_146())
									{
										if (Var0.f_5)
										{
											unk_0xBE20AB8238688965(&(Local_103[unk_0x59E2AD1A8ACEDA31() /*4*/].f_1), iVar1 + 8);
											func_812(func_40());
										}
									}
									else if (!func_179(unk_0x460153A63B9477BC(), func_7(), 1))
									{
										func_601();
										if (!func_135(unk_0x460153A63B9477BC(), 20))
										{
											func_808(0);
										}
										if (Var0.f_5)
										{
											Local_103[unk_0x59E2AD1A8ACEDA31() /*4*/].f_2++;
											unk_0xBE20AB8238688965(&(Local_103[unk_0x59E2AD1A8ACEDA31() /*4*/].f_1), iVar1 + 8);
											func_812(unk_0x460153A63B9477BC());
										}
									}
									else if (Var0.f_5)
									{
										unk_0xBE20AB8238688965(&(Local_103[unk_0x59E2AD1A8ACEDA31() /*4*/].f_1), iVar1 + 8);
										func_812(func_40());
									}
								}
								else if (!unk_0xD0390A93AF3907B8(unk_0x9048E8838E822F21(Var0.f_1)))
								{
									if (Var0.f_5)
									{
										unk_0xBE20AB8238688965(&(Local_103[unk_0x59E2AD1A8ACEDA31() /*4*/].f_1), iVar1 + 8);
										func_812(func_40());
									}
								}
							}
						}
					}
					iVar1++;
				}
			}
			else if ((!func_146() && unk_0xA1914E72A0EB31D0(Var0)) && unk_0xD0390A93AF3907B8(unk_0x9048E8838E822F21(Var0)))
			{
				if (!func_602(unk_0x460153A63B9477BC()) && !func_135(unk_0x460153A63B9477BC(), 20))
				{
					iVar2 = unk_0xE4400E48E081F17A(unk_0x9048E8838E822F21(Var0));
					if (func_6(iVar2, 0, 1))
					{
						if (func_179(iVar2, func_7(), 1))
						{
							if (unk_0xAE06B9E39EBDE049(Var0.f_1) && unk_0xA1914E72A0EB31D0(Var0.f_1))
							{
								if (unk_0x9048E8838E822F21(Var0.f_1) == unk_0x9B0761B4C3EB8BC7())
								{
									func_601();
									if (!func_135(unk_0x460153A63B9477BC(), 20))
									{
										func_808(0);
									}
								}
							}
						}
					}
				}
			}
		}
	}
}

void func_808(int iParam0)
{
	if (!func_155(unk_0x460153A63B9477BC()))
	{
		if (iParam0 || func_141(unk_0x460153A63B9477BC()) != 0)
		{
			func_158(20);
			func_809(func_811());
			if (func_157(unk_0x460153A63B9477BC()))
			{
				if (!unk_0xCE990E643CD9D0E5(Global_1630317[unk_0x460153A63B9477BC() /*595*/].f_1, 8))
				{
					unk_0xBE20AB8238688965(&(Global_1630317[unk_0x460153A63B9477BC() /*595*/].f_1), 8);
				}
			}
		}
	}
}

void func_809(int iParam0)
{
	int iVar0;
	
	if (Global_262145.f_8572)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (Global_2097152[func_810() /*10931*/].f_6175.f_4111[iVar0 /*3*/] == iParam0)
		{
			if (Global_1312588.f_1[iVar0] == -1)
			{
				Global_1312588.f_1[iVar0] = iParam0;
				Global_1312588 = 1;
				return;
			}
		}
		iVar0++;
	}
}

int func_810()
{
	int iVar0;
	
	iVar0 = 0;
	return iVar0;
}

int func_811()
{
	int iVar0;
	
	iVar0 = func_102(unk_0x460153A63B9477BC());
	if (func_101(iVar0) == 0)
	{
		return -1;
	}
	if (func_195(iVar0))
	{
		return 65;
	}
	if (func_201(iVar0))
	{
		return 66;
	}
	if (func_413(iVar0))
	{
		return 63;
	}
	return 64;
}

void func_812(int iParam0)
{
	struct<14> Var0;
	
	Var0.f_10 = iParam0;
	Var0.f_2 = 761141820;
	func_12(Var0, func_13(1));
}

int func_813()
{
	var uVar0;
	
	func_818(&uVar0);
	if (Global_1312872 == 0)
	{
		if (!unk_0x25DDB354A40FFCDB())
		{
			return 1;
		}
	}
	if (func_817())
	{
		return 1;
	}
	if (Global_2464493)
	{
		return 1;
	}
	if (func_816())
	{
		return 1;
	}
	if (func_815(159))
	{
		if (!func_814())
		{
			return 1;
		}
	}
	if (func_815(157))
	{
		return 1;
	}
	if (!unk_0x0EB6C63A09FD9DF1())
	{
		return 1;
	}
	if (func_638() != 0)
	{
		if (unk_0x7B70881748D166CD(func_638()) == 0)
		{
			return 1;
		}
	}
	return 0;
}

bool func_814()
{
	return Global_2451787.f_696;
}

int func_815(int iParam0)
{
	if (unk_0x16F1FCCC54559709(1, iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_816()
{
	return Global_2462250;
}

bool func_817()
{
	return Global_2451787.f_691;
}

void func_818(var uParam0)
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
					func_819(iVar0);
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

void func_819(int iParam0)
{
	struct<3> Var0;
	int iVar1;
	int iVar2;
	bool bVar3;
	
	if (unk_0x477FAFFE21935947(1, iParam0, &Var0, 3))
	{
		if (func_6(Var0.f_1, 1, 1))
		{
			iVar1 = unk_0x1FA7B77001D60F9D(Var0.f_1);
			if (unk_0xAE06B9E39EBDE049(iVar1))
			{
				if (unk_0x47DBF174A0CB9D55(iVar1, false))
				{
					iVar2 = unk_0xA5D5B1042E8F47BD(iVar1, false);
					if (unk_0x292280AF1BBBD6AC(iVar2, Var0.f_2) && unk_0x82CC259B7B4F4AD9())
					{
						if (func_820(iVar2, &bVar3))
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

int func_820(int iParam0, var uParam1)
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

void func_821()
{
	wait(0);
}

void func_822(bool bParam0)
{
	func_106();
	if (unk_0xB9FD7D4438BECDFC() < 5)
	{
		unk_0x53797676AD34A9AA(5);
	}
	func_105();
	func_871(bParam0);
	func_868();
	if (unk_0xB9E6DF0411C3488E() > 1)
	{
		func_867();
		func_824(1, 0);
		unk_0xD39E529EBE5DB04F();
	}
	else if (func_823())
	{
		func_824(1, 0);
		unk_0xD39E529EBE5DB04F();
	}
}

int func_823()
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < func_14())
	{
		if (unk_0x3D70CCF2C9B362CD(func_28(iVar0)))
		{
			iVar1 = unk_0x62D2FF718BC7717D(func_28(iVar0));
			if (!unk_0xA59F96B50B97E63C(iVar1, 0))
			{
				if (func_590(unk_0x770D3B2B4702434A(func_28(iVar0)), &(uLocal_104[iVar0]), 0, 1))
				{
					unk_0x95047B5978C3543C(&iVar1);
				}
				else
				{
					return 0;
				}
			}
		}
		iVar0++;
	}
	return 1;
}

void func_824(bool bParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	if (Global_1366969.f_1.f_108 != 0)
	{
		Global_1366969.f_1.f_108 = 0;
	}
	Global_1366969.f_1.f_109 = -1;
	Global_1366969.f_1.f_110 = -1;
	if (Global_1630317[unk_0x460153A63B9477BC() /*595*/].f_11.f_33 == 167 || Global_1630317[unk_0x460153A63B9477BC() /*595*/].f_11.f_33 == 168)
	{
		func_865();
		unk_0xD2459066EA58CE43(&(Global_1676119.f_3), 4);
	}
	if ((func_202() && iParam1 != 0) && Global_262145.f_16989)
	{
		if (Global_1630317[unk_0x460153A63B9477BC() /*595*/].f_11.f_33 == 190 || Global_1630317[unk_0x460153A63B9477BC() /*595*/].f_11.f_33 == 192)
		{
			func_847(unk_0x460153A63B9477BC(), iParam1, 1, 0);
		}
	}
	if (((Global_1630317[unk_0x460153A63B9477BC() /*595*/].f_11.f_33 == 164 || Global_1630317[unk_0x460153A63B9477BC() /*595*/].f_11.f_33 == 208) || Global_1630317[unk_0x460153A63B9477BC() /*595*/].f_11.f_33 == 250) || Global_1630317[unk_0x460153A63B9477BC() /*595*/].f_11.f_33 == 237)
	{
		unk_0x40ECEB892E6BDDDB(3, true);
		unk_0x40ECEB892E6BDDDB(5, true);
	}
	if (Global_1630317[unk_0x460153A63B9477BC() /*595*/].f_11.f_33 != -1)
	{
		Global_1630317[unk_0x460153A63B9477BC() /*595*/].f_11.f_33 = -1;
		if (!unk_0xCE990E643CD9D0E5(Global_1574656.f_1, 14) && !func_157(unk_0x460153A63B9477BC()))
		{
			func_634(0);
		}
	}
	else if (func_845(unk_0x460153A63B9477BC()) != -1)
	{
		func_798(-1);
	}
	func_844(func_40());
	if (func_284(16))
	{
		func_609(16);
	}
	func_841(0);
	func_793(-1);
	func_840();
	iVar0 = 0;
	while (iVar0 < 8)
	{
		func_837(iVar0);
		iVar0++;
	}
	if (unk_0xCE990E643CD9D0E5(Global_1676119.f_3, 0))
	{
		unk_0x34FEEAC2548C3789(1f);
		unk_0x53797676AD34A9AA(5);
		unk_0xD2459066EA58CE43(&(Global_1676119.f_3), 0);
	}
	if (unk_0xCE990E643CD9D0E5(Global_1676119.f_3, 5))
	{
		unk_0xD2459066EA58CE43(&(Global_1676119.f_3), 5);
	}
	iVar1 = func_134();
	if ((func_118(iVar1) || iVar1 == 205) || iVar1 == 210)
	{
		func_836(-1);
	}
	else if (((iVar1 == 201 || iVar1 == 200) || iVar1 == 179) || func_201(iVar1))
	{
		func_833(-1, 1);
	}
	else if (((((func_133(iVar1) || func_832(iVar1)) || func_831(iVar1)) || func_192(iVar1)) || func_191(iVar1)) || func_190(iVar1))
	{
	}
	else
	{
		func_833(-1, 1);
	}
	func_148(19);
	func_148(20);
	func_148(21);
	func_148(22);
	func_148(27);
	func_609(3);
	func_609(4);
	func_609(7);
	func_830();
	if (func_143(unk_0x460153A63B9477BC()))
	{
		func_779(0);
	}
	func_148(29);
	Global_1630317[unk_0x460153A63B9477BC() /*595*/].f_11.f_57 = func_40();
	if (Global_2540384.f_5188.f_41 != 0)
	{
		Global_2540384.f_5188.f_41 = 0;
	}
	if (bParam0)
	{
		func_610();
	}
	if (!func_157(unk_0x460153A63B9477BC()))
	{
		func_632();
		unk_0xD2459066EA58CE43(&(Global_1676119.f_3), 1);
	}
	if (unk_0xCE990E643CD9D0E5(Global_1676119.f_3, 6))
	{
		unk_0x40ECEB892E6BDDDB(3, true);
		unk_0x40ECEB892E6BDDDB(5, true);
		unk_0xD2459066EA58CE43(&(Global_1676119.f_3), 6);
	}
	if (unk_0xCE990E643CD9D0E5(Global_1676119.f_3, 7))
	{
		unk_0xD2459066EA58CE43(&(Global_1676119.f_3), 7);
	}
	if (unk_0xCE990E643CD9D0E5(Global_1676119.f_3, 8))
	{
		func_829("IMPEXP_SELFDES", 0);
		func_827("IMPEXP_SELFDES");
		unk_0xD2459066EA58CE43(&(Global_1676119.f_3), 8);
	}
	func_825(iVar1, 0);
}

void func_825(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		if (!unk_0xCE990E643CD9D0E5(Global_1676119.f_3, 9))
		{
			unk_0x17E478571720218F(func_826(iParam0));
			unk_0xBE20AB8238688965(&(Global_1676119.f_3), 9);
		}
	}
	else if (unk_0xCE990E643CD9D0E5(Global_1676119.f_3, 9))
	{
		unk_0xFA07F8BEBDAAFBA8(func_826(iParam0));
		unk_0xD2459066EA58CE43(&(Global_1676119.f_3), 9);
	}
}

char* func_826(int iParam0)
{
	switch (iParam0)
	{
		case 219:
			return "DLC_IE_VIP_Velocity_Vehicle_Scene";
		
		case 221:
			return "DLC_IE_VIP_Stockpiling_Vehicle_Scene";
		
		case 220:
			return "DLC_IE_VIP_Ramped_Up_Vehicle_Scene";
		
		case 214:
			return "DLC_IE_VIP_Plowed_Vehicle_Scene";
		
		case 217:
			return "DLC_IE_VIP_Transporter_Vehicle_Scene";
		
		case 218:
			return "DLC_IE_VIP_Fortified_Vehicle_Scene";
		
		case 215:
			return "DLC_IE_VIP_Fully_Loaded_Vehicle_Scene";
		
		case 216:
			return "DLC_IE_VIP_Amphibious_Assault_Vehicle_Scene";
		
		default:
	}
	return "";
}

void func_827(char* sParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 35)
	{
		if (!unk_0x211E6DB3335430B4(&(Global_111858.f_14137[iVar0 /*104*/])))
		{
			if (unk_0xF005CCA4263DF67F(&(Global_111858.f_14137[iVar0 /*104*/]), sParam0))
			{
				if (Global_111858.f_14137[iVar0 /*104*/].f_24 == 2)
				{
				}
				else
				{
					func_465();
					Global_111858.f_14137[iVar0 /*104*/].f_99[Global_19681] = 0;
					if (func_828(iVar0))
					{
					}
					else
					{
						Global_111858.f_14137[iVar0 /*104*/].f_24 = 0;
						Global_111858.f_14137[iVar0 /*104*/].f_28 = 0;
						Global_111858.f_14137[iVar0 /*104*/].f_29 = 0;
					}
					unk_0xB6B2734989D2EBCB(Global_111858.f_14137[iVar0 /*104*/].f_16);
				}
			}
		}
		iVar0++;
	}
}

int func_828(int iParam0)
{
	if ((Global_111858.f_14137[iParam0 /*104*/].f_99[0] == 1 || Global_111858.f_14137[iParam0 /*104*/].f_99[1] == 1) || Global_111858.f_14137[iParam0 /*104*/].f_99[2] == 1)
	{
		return 1;
	}
	return 0;
}

void func_829(char* sParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 35)
	{
		if (!unk_0x211E6DB3335430B4(&(Global_111858.f_14137[iVar0 /*104*/])))
		{
			if (unk_0xF005CCA4263DF67F(&(Global_111858.f_14137[iVar0 /*104*/]), sParam0))
			{
				if (Global_111858.f_14137[iVar0 /*104*/].f_24 == 0)
				{
				}
				Global_111858.f_14137[iVar0 /*104*/].f_24 = 1;
				if (Global_111858.f_14137[iVar0 /*104*/].f_25 == 1)
				{
					if (Global_111858.f_14137[iVar0 /*104*/].f_99[0] == 1)
					{
						Global_111858.f_14047[0 /*20*/].f_17 = 0;
					}
					if (Global_111858.f_14137[iVar0 /*104*/].f_99[1] == 1)
					{
						Global_111858.f_14047[1 /*20*/].f_17 = 0;
					}
					if (Global_111858.f_14137[iVar0 /*104*/].f_99[2] == 1)
					{
						Global_111858.f_14047[2 /*20*/].f_17 = 0;
					}
					if (Global_111858.f_14137[iVar0 /*104*/].f_99[3] == 1)
					{
						Global_111858.f_14047[3 /*20*/].f_17 = 0;
					}
					Global_111858.f_14137[iVar0 /*104*/].f_25 = 0;
					if (iParam1 == 1)
					{
						Global_111858.f_14137[iVar0 /*104*/].f_27 = 1;
					}
				}
			}
		}
		iVar0++;
	}
}

void func_830()
{
	if (func_602(unk_0x460153A63B9477BC()))
	{
		func_148(25);
	}
}

int func_831(int iParam0)
{
	switch (iParam0)
	{
		case 178:
		case 188:
			return 1;
		
		default:
	}
	return 0;
}

int func_832(int iParam0)
{
	if ((iParam0 == 191 || iParam0 == 190) || iParam0 == 192)
	{
		return 1;
	}
	return 0;
}

void func_833(int iParam0, bool bParam1)
{
	int iVar0;
	
	if (iParam0 == -1)
	{
		iParam0 = func_134();
	}
	if (iParam0 > 0)
	{
		if (func_177() != func_40())
		{
			if (func_58(unk_0x460153A63B9477BC()) == unk_0x460153A63B9477BC())
			{
				Global_2516617.f_93[func_835(iParam0)] = 1;
			}
		}
		iVar0 = func_835(159);
		if (func_834(iVar0, Global_262145.f_12614, bParam1))
		{
			func_482(&(Global_2516617[iVar0 /*2*/]));
			func_4(&(Global_2516617[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_835(157);
		if (func_834(iVar0, Global_262145.f_12614, bParam1))
		{
			func_482(&(Global_2516617[iVar0 /*2*/]));
			func_4(&(Global_2516617[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_835(148);
		if (func_834(iVar0, Global_262145.f_12614, bParam1))
		{
			func_482(&(Global_2516617[iVar0 /*2*/]));
			func_4(&(Global_2516617[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_835(164);
		if (func_834(iVar0, Global_262145.f_12614, bParam1))
		{
			func_482(&(Global_2516617[iVar0 /*2*/]));
			func_4(&(Global_2516617[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_835(142);
		if (func_834(iVar0, Global_262145.f_12614, bParam1))
		{
			func_482(&(Global_2516617[iVar0 /*2*/]));
			func_4(&(Global_2516617[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_835(152);
		if (func_834(iVar0, Global_262145.f_12614, bParam1))
		{
			func_482(&(Global_2516617[iVar0 /*2*/]));
			func_4(&(Global_2516617[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_835(166);
		if (func_834(iVar0, Global_262145.f_12614, bParam1))
		{
			func_482(&(Global_2516617[iVar0 /*2*/]));
			func_4(&(Global_2516617[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_835(170);
		if (func_834(iVar0, Global_262145.f_12614, bParam1))
		{
			func_482(&(Global_2516617[iVar0 /*2*/]));
			func_4(&(Global_2516617[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_835(173);
		if (func_834(iVar0, Global_262145.f_12614, bParam1))
		{
			func_482(&(Global_2516617[iVar0 /*2*/]));
			func_4(&(Global_2516617[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_835(179);
		if (func_834(iVar0, Global_262145.f_12614, bParam1))
		{
			func_482(&(Global_2516617[iVar0 /*2*/]));
			func_4(&(Global_2516617[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_835(200);
		if (func_834(iVar0, Global_262145.f_12614, bParam1))
		{
			func_482(&(Global_2516617[iVar0 /*2*/]));
			func_4(&(Global_2516617[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_835(201);
		if (func_834(iVar0, Global_262145.f_12614, bParam1))
		{
			func_482(&(Global_2516617[iVar0 /*2*/]));
			func_4(&(Global_2516617[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_835(182);
		if (func_834(iVar0, Global_262145.f_12615, 0))
		{
			func_482(&(Global_2516617[iVar0 /*2*/]));
			func_4(&(Global_2516617[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_835(183);
		if (func_834(iVar0, Global_262145.f_12615, 0))
		{
			func_482(&(Global_2516617[iVar0 /*2*/]));
			func_4(&(Global_2516617[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_835(185);
		if (func_834(iVar0, Global_262145.f_12615, 0))
		{
			func_482(&(Global_2516617[iVar0 /*2*/]));
			func_4(&(Global_2516617[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_835(186);
		if (func_834(iVar0, Global_262145.f_12615, 0))
		{
			func_482(&(Global_2516617[iVar0 /*2*/]));
			func_4(&(Global_2516617[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_835(180);
		if (func_834(iVar0, Global_262145.f_12615, 0))
		{
			func_482(&(Global_2516617[iVar0 /*2*/]));
			func_4(&(Global_2516617[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_835(195);
		if (func_834(iVar0, Global_262145.f_12615, 0))
		{
			func_482(&(Global_2516617[iVar0 /*2*/]));
			func_4(&(Global_2516617[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_835(197);
		if (func_834(iVar0, Global_262145.f_12615, 0))
		{
			func_482(&(Global_2516617[iVar0 /*2*/]));
			func_4(&(Global_2516617[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_835(198);
		if (func_834(iVar0, Global_262145.f_12615, 0))
		{
			func_482(&(Global_2516617[iVar0 /*2*/]));
			func_4(&(Global_2516617[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_835(207);
		if (func_834(iVar0, Global_262145.f_12615, 0))
		{
			func_482(&(Global_2516617[iVar0 /*2*/]));
			func_4(&(Global_2516617[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_835(208);
		if (func_834(iVar0, Global_262145.f_12615, 0))
		{
			func_482(&(Global_2516617[iVar0 /*2*/]));
			func_4(&(Global_2516617[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_835(209);
		if (func_834(iVar0, Global_262145.f_12615, 0))
		{
			func_482(&(Global_2516617[iVar0 /*2*/]));
			func_4(&(Global_2516617[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_835(214);
		if (func_834(iVar0, Global_262145.f_12615, 0))
		{
			func_482(&(Global_2516617[iVar0 /*2*/]));
			func_4(&(Global_2516617[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_835(215);
		if (func_834(iVar0, Global_262145.f_12615, 0))
		{
			func_482(&(Global_2516617[iVar0 /*2*/]));
			func_4(&(Global_2516617[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_835(216);
		if (func_834(iVar0, Global_262145.f_12615, 0))
		{
			func_482(&(Global_2516617[iVar0 /*2*/]));
			func_4(&(Global_2516617[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_835(217);
		if (func_834(iVar0, Global_262145.f_12615, 0))
		{
			func_482(&(Global_2516617[iVar0 /*2*/]));
			func_4(&(Global_2516617[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_835(218);
		if (func_834(iVar0, Global_262145.f_12615, 0))
		{
			func_482(&(Global_2516617[iVar0 /*2*/]));
			func_4(&(Global_2516617[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_835(219);
		if (func_834(iVar0, Global_262145.f_12615, 0))
		{
			func_482(&(Global_2516617[iVar0 /*2*/]));
			func_4(&(Global_2516617[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_835(220);
		if (func_834(iVar0, Global_262145.f_12615, 0))
		{
			func_482(&(Global_2516617[iVar0 /*2*/]));
			func_4(&(Global_2516617[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_835(221);
		if (func_834(iVar0, Global_262145.f_12615, 0))
		{
			func_482(&(Global_2516617[iVar0 /*2*/]));
			func_4(&(Global_2516617[iVar0 /*2*/]), 1, 0);
		}
	}
}

int func_834(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		if ((!func_135(unk_0x460153A63B9477BC(), 19) && !func_135(unk_0x460153A63B9477BC(), 20)) && !func_135(unk_0x460153A63B9477BC(), 9))
		{
			return 0;
		}
	}
	if (Global_2516617.f_93[iParam0] == 1 && func_137(&(Global_2516617[iParam0 /*2*/])))
	{
		if (func_678(&(Global_2516617[iParam0 /*2*/]), 1, 0) < iParam1)
		{
			Global_2516617.f_93[iParam0] = 0;
			return 1;
		}
		return 0;
	}
	return 1;
}

int func_835(int iParam0)
{
	switch (iParam0)
	{
		case 159:
			return 11;
		
		case 157:
			return 12;
		
		case 148:
			return 13;
		
		case 164:
			return 14;
		
		case 142:
			return 15;
		
		case 152:
			return 16;
		
		case 163:
			return 17;
		
		case 155:
			return 18;
		
		case 160:
			return 19;
		
		case 153:
			return 20;
		
		case 162:
			return 21;
		
		case 154:
			return 22;
		
		case 166:
			return 8;
		
		case 170:
			return 9;
		
		case 173:
			return 10;
		
		case 171:
			return 23;
		
		case 172:
			return 24;
		
		case 179:
			return 25;
		
		case 189:
			return 26;
		
		case 193:
			return 27;
		
		case 194:
			return 28;
		
		case 199:
			return 29;
		
		case 201:
			return 30;
		
		case 200:
			return 31;
		
		case 205:
			return 32;
		
		case 210:
			return 33;
		
		case 182:
			return 34;
		
		case 183:
			return 35;
		
		case 185:
			return 36;
		
		case 186:
			return 37;
		
		case 180:
			return 38;
		
		case 195:
			return 39;
		
		case 197:
			return 40;
		
		case 198:
			return 41;
		
		case 207:
			return 42;
		
		case 208:
			return 43;
		
		case 209:
			return 44;
		
		case 211:
			return 45;
		
		case 214:
			return 0;
		
		case 215:
			return 1;
		
		case 216:
			return 2;
		
		case 217:
			return 3;
		
		case 218:
			return 4;
		
		case 219:
			return 5;
		
		case 220:
			return 6;
		
		case 221:
			return 7;
		
		default:
	}
	return -1;
}

void func_836(int iParam0)
{
	int iVar0;
	
	if (iParam0 == -1)
	{
		iParam0 = func_134();
	}
	if (iParam0 > 0)
	{
		if (func_177() != func_40())
		{
			Global_2516617.f_93[func_835(iParam0)] = 1;
		}
		iVar0 = func_835(155);
		if (func_834(iVar0, Global_262145.f_12615, 0))
		{
			func_482(&(Global_2516617[iVar0 /*2*/]));
			func_4(&(Global_2516617[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_835(163);
		if (func_834(iVar0, Global_262145.f_12615, 0))
		{
			func_482(&(Global_2516617[iVar0 /*2*/]));
			func_4(&(Global_2516617[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_835(160);
		if (func_834(iVar0, Global_262145.f_12615, 0))
		{
			func_482(&(Global_2516617[iVar0 /*2*/]));
			func_4(&(Global_2516617[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_835(153);
		if (func_834(iVar0, Global_262145.f_12615, 0))
		{
			func_482(&(Global_2516617[iVar0 /*2*/]));
			func_4(&(Global_2516617[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_835(162);
		if (func_834(iVar0, Global_262145.f_12615, 0))
		{
			func_482(&(Global_2516617[iVar0 /*2*/]));
			func_4(&(Global_2516617[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_835(154);
		if (func_834(iVar0, Global_262145.f_12615, 0))
		{
			func_482(&(Global_2516617[iVar0 /*2*/]));
			func_4(&(Global_2516617[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_835(171);
		if (func_834(iVar0, Global_262145.f_12615, 0))
		{
			func_482(&(Global_2516617[iVar0 /*2*/]));
			func_4(&(Global_2516617[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_835(172);
		if (func_834(iVar0, Global_262145.f_12615, 0))
		{
			func_482(&(Global_2516617[iVar0 /*2*/]));
			func_4(&(Global_2516617[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_835(199);
		if (func_834(iVar0, Global_262145.f_12615, 0))
		{
			func_482(&(Global_2516617[iVar0 /*2*/]));
			func_4(&(Global_2516617[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_835(194);
		if (func_834(iVar0, Global_262145.f_12615, 0))
		{
			func_482(&(Global_2516617[iVar0 /*2*/]));
			func_4(&(Global_2516617[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_835(193);
		if (func_834(iVar0, Global_262145.f_12615, 0))
		{
			func_482(&(Global_2516617[iVar0 /*2*/]));
			func_4(&(Global_2516617[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_835(210);
		if (func_834(iVar0, Global_262145.f_12615, 0))
		{
			func_482(&(Global_2516617[iVar0 /*2*/]));
			func_4(&(Global_2516617[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_835(205);
		if (func_834(iVar0, Global_262145.f_12615, 0))
		{
			func_482(&(Global_2516617[iVar0 /*2*/]));
			func_4(&(Global_2516617[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_835(189);
		if (func_834(iVar0, Global_262145.f_12615, 0))
		{
			func_482(&(Global_2516617[iVar0 /*2*/]));
			func_4(&(Global_2516617[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_835(211);
		if (func_834(iVar0, Global_262145.f_12615, 0))
		{
			func_482(&(Global_2516617[iVar0 /*2*/]));
			func_4(&(Global_2516617[iVar0 /*2*/]), 1, 0);
		}
	}
}

void func_837(int iParam0)
{
	if (!func_838(Global_1630317[unk_0x460153A63B9477BC() /*595*/].f_11.f_150[iParam0 /*3*/], func_839(), 0))
	{
		Global_1630317[unk_0x460153A63B9477BC() /*595*/].f_11.f_150[iParam0 /*3*/] = { func_839() };
	}
	if (!func_838(Global_1630317[unk_0x460153A63B9477BC() /*595*/].f_11.f_125[iParam0 /*3*/], func_839(), 0))
	{
		Global_1630317[unk_0x460153A63B9477BC() /*595*/].f_11.f_125[iParam0 /*3*/] = { func_839() };
	}
}

bool func_838(struct<3> Param0, struct<3> Param1, bool bParam2)
{
	if (bParam2)
	{
		return (Param0.x == Param1.x && Param0.f_1 == Param1.f_1);
	}
	return ((Param0.x == Param1.x && Param0.f_1 == Param1.f_1) && Param0.f_2 == Param1.f_2);
}

Vector3 func_839()
{
	struct<3> Var0;
	
	return Var0;
}

void func_840()
{
	struct<20> Var0;
	
	Var0.f_2 = -1;
	Var0.f_3 = -1;
	Var0.f_4 = -1;
	Var0.f_6 = -1;
	Var0.f_7 = -1;
	Var0.f_8 = -1;
	Global_1573907 = { Var0 };
	Global_1573907.f_13 = func_40();
	if (unk_0xCE990E643CD9D0E5(Global_1573344, 3))
	{
		unk_0xD2459066EA58CE43(&Global_1573344, 3);
	}
}

void func_841(bool bParam0)
{
	if (bParam0)
	{
		if (!func_448(unk_0x460153A63B9477BC(), 14))
		{
			func_843(14);
		}
	}
	else if (func_448(unk_0x460153A63B9477BC(), 14))
	{
		func_842(14);
	}
}

void func_842(int iParam0)
{
	unk_0xD2459066EA58CE43(&(Global_1630317[unk_0x460153A63B9477BC() /*595*/].f_11.f_5), iParam0);
}

void func_843(int iParam0)
{
	unk_0xBE20AB8238688965(&(Global_1630317[unk_0x460153A63B9477BC() /*595*/].f_11.f_5), iParam0);
}

void func_844(int iParam0)
{
	if (func_82(unk_0x460153A63B9477BC()))
	{
		if (unk_0x460153A63B9477BC() != iParam0)
		{
			if (Global_1630317[unk_0x460153A63B9477BC() /*595*/].f_11.f_457 != iParam0)
			{
				Global_1630317[unk_0x460153A63B9477BC() /*595*/].f_11.f_457 = iParam0;
				if (iParam0 != func_40())
				{
				}
			}
		}
	}
}

int func_845(int iParam0)
{
	if (func_846(iParam0, 0))
	{
		return Global_1630317[iParam0 /*595*/].f_11.f_32;
	}
	return -1;
}

int func_846(int iParam0, int iParam1)
{
	if (Global_1630317[iParam0 /*595*/].f_11.f_32 != -1 || (iParam1 && Global_1630317[iParam0 /*595*/].f_11.f_33 != -1))
	{
		return 1;
	}
	return 0;
}

void func_847(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	int iVar0;
	
	if (func_328(iParam0, iParam1) && func_864(iParam0, iParam1))
	{
		iVar0 = func_327(iParam0, iParam1);
		func_851(iVar0, bParam2, bParam3);
		func_848(iVar0, 1);
	}
}

void func_848(int iParam0, bool bParam1)
{
	if (!func_850(iParam0))
	{
		return;
	}
	func_311(func_849(iParam0), bParam1, -1, 1);
	Global_1590682[unk_0x460153A63B9477BC() /*883*/].f_274.f_183[iParam0 /*12*/].f_6 = bParam1;
}

int func_849(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 7628;
		
		case 1:
			return 7629;
		
		case 2:
			return 7630;
		
		case 3:
			return 7631;
		
		case 4:
			return 7632;
		
		case 5:
			return 15373;
		
		default:
	}
	return 7628;
}

bool func_850(int iParam0)
{
	return (iParam0 >= 0 && iParam0 < 6);
}

void func_851(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	float fVar6;
	
	bVar1 = false;
	iVar2 = func_681(unk_0x460153A63B9477BC(), iParam0);
	if (!bParam1)
	{
		func_863(iParam0, 0, bParam2);
	}
	if (bParam1)
	{
		iVar0 = Global_2515430[iParam0];
		iVar0 = func_862(iParam0, bParam2);
		if (iVar0 < 0)
		{
			iVar0 = 0;
		}
		if (!bParam2)
		{
			Global_1678139 = -1;
		}
		func_861(iParam0, 0, bParam2);
	}
	else if (func_859(iParam0, bParam2))
	{
		iVar0 = func_858(iVar2, 0);
		iVar3 = func_771(unk_0x460153A63B9477BC(), iVar2);
		iVar4 = func_857(iVar2, bParam2);
		iVar5 = func_858(iVar2, bParam2);
		fVar6 = (to_float(iVar5) / to_float(iVar4));
		iVar0 = (iVar0 - round((to_float(iVar3) * fVar6)));
		if (iVar0 <= 0)
		{
			iVar0 = iVar5;
		}
		if (func_856(iVar2) && func_855(unk_0x460153A63B9477BC(), iVar2) == 2)
		{
			iVar0 = (iVar0 / 2);
			bVar1 = true;
		}
		func_863(iParam0, iVar0, bParam2);
	}
	else
	{
		if (func_854(unk_0x460153A63B9477BC(), iVar2) > 0)
		{
			func_853(iParam0, (Global_1590682[unk_0x460153A63B9477BC() /*883*/].f_274.f_183[iParam0 /*12*/].f_2 - (func_857(iVar2, bParam2) / 2)));
		}
		iVar0 = (func_858(iVar2, bParam2) / func_854(unk_0x460153A63B9477BC(), iVar2) + 1);
	}
	if (!bVar1)
	{
		if (func_856(iVar2) && func_855(unk_0x460153A63B9477BC(), iVar2) == 2)
		{
			iVar0 = (iVar0 / 2);
			bVar1 = true;
		}
	}
	func_852(unk_0x460153A63B9477BC(), iVar2, iVar0, bParam2);
}

void func_852(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	int iVar0;
	
	if (iParam0 == func_40())
	{
		return;
	}
	if (func_318(iParam1))
	{
		iVar0 = 0;
		while (iVar0 <= 5)
		{
			if (Global_1590682[iParam0 /*883*/].f_274.f_183[iVar0 /*12*/] == iParam1)
			{
				if (bParam3)
				{
					Global_1590682[iParam0 /*883*/].f_274.f_257 = iParam2;
				}
				else
				{
					Global_1590682[iParam0 /*883*/].f_274.f_183[iVar0 /*12*/].f_9 = iParam2;
				}
			}
			iVar0++;
		}
	}
}

void func_853(int iParam0, int iParam1)
{
	if (iParam0 != -1 && iParam1 != Global_1590682[unk_0x460153A63B9477BC() /*883*/].f_274.f_183[iParam0 /*12*/].f_2)
	{
		Global_1590682[unk_0x460153A63B9477BC() /*883*/].f_274.f_183[iParam0 /*12*/].f_2 = iParam1;
	}
}

int func_854(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam0 == func_40())
	{
		return 0;
	}
	if (func_318(iParam1))
	{
		iVar0 = 0;
		while (iVar0 <= 5)
		{
			if (Global_1590682[iParam0 /*883*/].f_274.f_183[iVar0 /*12*/] == iParam1)
			{
				return Global_1590682[iParam0 /*883*/].f_274.f_183[iVar0 /*12*/].f_8;
			}
			iVar0++;
		}
	}
	return 0;
}

int func_855(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam0 == func_40())
	{
		return 0;
	}
	if (func_318(iParam1) && func_856(iParam1))
	{
		iVar0 = 0;
		while (iVar0 <= 5)
		{
			if (Global_1590682[iParam0 /*883*/].f_274.f_183[iVar0 /*12*/] == iParam1)
			{
				return Global_1590682[iParam0 /*883*/].f_274.f_183[iVar0 /*12*/].f_11;
			}
			iVar0++;
		}
	}
	return 0;
}

bool func_856(int iParam0)
{
	return func_226(iParam0) == 5;
}

int func_857(int iParam0, bool bParam1)
{
	var uVar0;
	int iVar1;
	
	iVar1 = func_226(iParam0);
	switch (iVar1)
	{
		case 1:
			uVar0 = Global_262145.f_16958;
			if (func_326(unk_0x460153A63B9477BC(), iParam0, 0))
			{
				uVar0 = Global_262145.f_16963;
			}
			break;
		
		case 3:
			uVar0 = Global_262145.f_16957;
			if (func_326(unk_0x460153A63B9477BC(), iParam0, 0))
			{
				uVar0 = Global_262145.f_16962;
			}
			break;
		
		case 4:
			uVar0 = Global_262145.f_16956;
			if (func_326(unk_0x460153A63B9477BC(), iParam0, 0))
			{
				uVar0 = Global_262145.f_16961;
			}
			break;
		
		case 0:
			uVar0 = Global_262145.f_16954;
			if (func_326(unk_0x460153A63B9477BC(), iParam0, 0))
			{
				uVar0 = Global_262145.f_16959;
			}
			break;
		
		case 2:
			uVar0 = Global_262145.f_16955;
			if (func_326(unk_0x460153A63B9477BC(), iParam0, 0))
			{
				uVar0 = Global_262145.f_16960;
			}
			break;
		
		case 5:
			if (bParam1)
			{
				uVar0 = Global_262145.f_21084;
				if (func_326(unk_0x460153A63B9477BC(), iParam0, 0))
				{
					uVar0 = Global_262145.f_21085;
				}
			}
			else
			{
				uVar0 = Global_262145.f_21068;
				if (func_326(unk_0x460153A63B9477BC(), iParam0, 0))
				{
					uVar0 = Global_262145.f_21069;
				}
			}
			break;
	}
	return uVar0;
}

int func_858(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = func_226(iParam0);
	switch (iVar1)
	{
		case 1:
			iVar0 = Global_262145.f_16939;
			if (func_326(unk_0x460153A63B9477BC(), iParam0, 0))
			{
				iVar0 = (iVar0 - Global_262145.f_16948);
			}
			if (func_326(unk_0x460153A63B9477BC(), iParam0, 1))
			{
				iVar0 = (iVar0 - Global_262145.f_16953);
			}
			break;
		
		case 3:
			iVar0 = Global_262145.f_16940;
			if (func_326(unk_0x460153A63B9477BC(), iParam0, 0))
			{
				iVar0 = (iVar0 - Global_262145.f_16947);
			}
			if (func_326(unk_0x460153A63B9477BC(), iParam0, 1))
			{
				iVar0 = (iVar0 - Global_262145.f_16952);
			}
			break;
		
		case 4:
			iVar0 = Global_262145.f_16941;
			if (func_326(unk_0x460153A63B9477BC(), iParam0, 0))
			{
				iVar0 = (iVar0 - Global_262145.f_16946);
			}
			if (func_326(unk_0x460153A63B9477BC(), iParam0, 1))
			{
				iVar0 = (iVar0 - Global_262145.f_16951);
			}
			break;
		
		case 0:
			iVar0 = Global_262145.f_16942;
			if (func_326(unk_0x460153A63B9477BC(), iParam0, 0))
			{
				iVar0 = (iVar0 - Global_262145.f_16944);
			}
			if (func_326(unk_0x460153A63B9477BC(), iParam0, 1))
			{
				iVar0 = (iVar0 - Global_262145.f_16949);
			}
			break;
		
		case 2:
			iVar0 = Global_262145.f_16943;
			if (func_326(unk_0x460153A63B9477BC(), iParam0, 0))
			{
				iVar0 = (iVar0 - Global_262145.f_16945);
			}
			if (func_326(unk_0x460153A63B9477BC(), iParam0, 1))
			{
				iVar0 = (iVar0 - Global_262145.f_16950);
			}
			break;
		
		case 5:
			if (bParam1)
			{
				iVar0 = Global_262145.f_21081;
			}
			else
			{
				iVar0 = Global_262145.f_21065;
			}
			if (func_326(unk_0x460153A63B9477BC(), iParam0, 0))
			{
				if (bParam1)
				{
					iVar0 = (iVar0 - Global_262145.f_21082);
				}
				else
				{
					iVar0 = (iVar0 - Global_262145.f_21066);
				}
			}
			if (func_326(unk_0x460153A63B9477BC(), iParam0, 1))
			{
				if (bParam1)
				{
					iVar0 = (iVar0 - Global_262145.f_21083);
				}
				else
				{
					iVar0 = (iVar0 - Global_262145.f_21067);
				}
			}
			if (func_855(unk_0x460153A63B9477BC(), iParam0) == 2)
			{
				iVar0 *= 2;
			}
			break;
	}
	return iVar0;
}

bool func_859(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		return func_312(15384, -1, -1);
	}
	return func_312(func_860(iParam0), -1, -1);
}

int func_860(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 9416;
		
		case 1:
			return 9417;
		
		case 2:
			return 9418;
		
		case 3:
			return 9419;
		
		case 4:
			return 9420;
		
		case 5:
			return 15372;
		
		default:
	}
	return 9416;
}

void func_861(int iParam0, bool bParam1, bool bParam2)
{
	if (bParam2)
	{
		func_311(15384, bParam1, -1, 1);
		return;
	}
	func_311(func_860(iParam0), bParam1, -1, 1);
}

int func_862(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = Global_2515430[iParam0];
	iVar1 = func_681(unk_0x460153A63B9477BC(), iParam0);
	if (bParam1)
	{
		iVar0 = Global_2515437;
	}
	if (func_856(iVar1))
	{
		if (func_855(unk_0x460153A63B9477BC(), iVar1) == 2)
		{
			iVar0 *= 2;
		}
	}
	return iVar0;
}

void func_863(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		Global_2515437 = iParam1;
		return;
	}
	Global_2515430[iParam0] = iParam1;
}

int func_864(int iParam0, int iParam1)
{
	int iVar0;
	
	if (func_328(iParam0, iParam1))
	{
		iVar0 = func_327(iParam0, iParam1);
		if (Global_1590682[iParam0 /*883*/].f_274.f_183[iVar0 /*12*/].f_4 > 0 && Global_1590682[iParam0 /*883*/].f_274.f_183[iVar0 /*12*/].f_7)
		{
			return 1;
		}
	}
	return 0;
}

void func_865()
{
	unk_0xD2459066EA58CE43(&(Global_2540384.f_1797), 28);
	unk_0xD2459066EA58CE43(&(Global_2540384.f_1797), 29);
	func_866(24);
}

void func_866(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	unk_0xD2459066EA58CE43(&(Global_2540384.f_5188.f_7[iVar0]), iVar1);
}

void func_867()
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < func_14())
	{
		if (unk_0x3D70CCF2C9B362CD(func_28(iVar0)))
		{
			iVar1 = unk_0x770D3B2B4702434A(func_28(iVar0));
			if (!unk_0xA59F96B50B97E63C(iVar1, 0))
			{
				if (unk_0xE0B3BC41DDA88DF0(unk_0x9B0761B4C3EB8BC7(), iVar1, false))
				{
					func_591(func_163(unk_0x460153A63B9477BC()), 0, 0f, 0, 0, 0, -1);
				}
			}
		}
		iVar0++;
	}
}

void func_868()
{
	int iVar0;
	
	iVar0 = 0;
	if (!func_35())
	{
		iVar0 = 1;
	}
	Global_1676128.f_2 = Local_102.f_57;
	Global_1676128.f_3 = Local_102.f_58;
	func_869(iVar0, func_43(), func_36(), -1082130432);
}

void func_869(int iParam0, var uParam1, var uParam2, int iParam3)
{
	char* sVar0;
	struct<14> Var1;
	struct<17> Var2;
	struct<17> Var3;
	struct<16> Var4;
	struct<17> Var5;
	struct<16> Var6;
	struct<18> Var7;
	struct<18> Var8;
	struct<19> Var9;
	struct<18> Var10;
	
	sVar0 = unk_0x6C5C6B207AA78253();
	Var1 = Global_1676128;
	Var1.f_1 = Global_1676128.f_1;
	Var1.f_2 = Global_1676128.f_2;
	Var1.f_3 = Global_1676128.f_3;
	Var1.f_4 = Global_1676128.f_4;
	Var1.f_5 = Global_1676128.f_5;
	Var1.f_6 = Global_1676128.f_6;
	Var1.f_7 = Global_1676128.f_7;
	Var1.f_8 = Global_1676128.f_8;
	Var1.f_9 = Global_1676128.f_9;
	Var1.f_10 = Global_1676128.f_10;
	Var1.f_11 = Global_1676128.f_11;
	Var1.f_12 = Global_1676128.f_12;
	Var1.f_13 = Global_1676128.f_14;
	if (unk_0x25DDB354A40FFCDB())
	{
		if (unk_0xF005CCA4263DF67F(sVar0, "GB_DEATHMATCH"))
		{
			Var2 = { Var1 };
			Var2.f_14 = Global_1676128.f_15;
			Var2.f_15 = Global_1676128.f_16;
			Var2.f_16 = Global_1676128.f_17;
			unk_0x69500A977A13FD12(&Var2);
		}
		else if (unk_0xF005CCA4263DF67F(sVar0, "GB_YACHT_ROB"))
		{
			Var3 = { Var1 };
			Var3.f_14 = Global_1676128.f_15;
			Var3.f_15 = iParam0;
			Var3.f_16 = uParam1;
			unk_0xA8EF022D958E00A3(&Var3);
		}
		else if (unk_0xF005CCA4263DF67F(sVar0, "GB_HUNT_THE_BOSS"))
		{
			Var4 = { Var1 };
			Var4.f_14 = Global_1676128.f_15;
			Var4.f_15 = iParam0;
			unk_0x9A88FA9EC06CB48B(&Var4);
		}
		else if (unk_0xF005CCA4263DF67F(sVar0, "GB_SIGHTSEER"))
		{
			Var5 = { Var1 };
			Var5.f_14 = Global_1676128.f_15;
			Var5.f_15 = iParam0;
			Var5.f_16 = uParam1;
			unk_0x31A22ED50761DDCB(&Var5);
		}
		else if (unk_0xF005CCA4263DF67F(sVar0, "GB_ASSAULT"))
		{
			Var6 = { Var1 };
			Var6.f_14 = Global_1676128.f_15;
			Var6.f_15 = iParam0;
			unk_0x182335A1A947EBD1(&Var6);
		}
		else if (unk_0xF005CCA4263DF67F(sVar0, "GB_BELLYBEAST"))
		{
			Var7 = { Var1 };
			Var7.f_14 = Global_1676128.f_15;
			Var7.f_15 = iParam0;
			Var7.f_16 = uParam1;
			Var7.f_17 = uParam2;
			unk_0xB2EB4073BCD9374D(&Var7);
		}
		else if (unk_0xF005CCA4263DF67F(sVar0, "GB_HEADHUNTER"))
		{
			Var8 = { Var1 };
			Var8.f_14 = iParam0;
			Var8.f_15 = uParam1;
			Var8.f_16 = uParam2;
			Var8.f_17 = Global_1676128.f_15;
			unk_0x1465178C0C0D9DCB(&Var8);
		}
		else if (unk_0xF005CCA4263DF67F(sVar0, "GB_FRAGILE_GOODS"))
		{
			Var9 = { Var1 };
			Var9.f_15 = iParam0;
			Var9.f_16 = uParam1;
			Var9.f_17 = uParam2;
			Var9.f_14 = iParam3;
			Var9.f_18 = Global_1676128.f_15;
			unk_0x05676E24AA669360(&Var9);
		}
		else if (unk_0xF005CCA4263DF67F(sVar0, "GB_AIRFREIGHT"))
		{
			Var10 = { Var1 };
			Var10.f_14 = iParam0;
			Var10.f_15 = uParam1;
			Var10.f_16 = uParam2;
			Var10.f_17 = Global_1676128.f_15;
			unk_0xC7FEE946FDCA7772(&Var10);
		}
	}
	func_870();
}

void func_870()
{
	struct<18> Var0;
	
	Global_1676128 = { Var0 };
}

void func_871(bool bParam0)
{
	bool bVar0;
	int iVar1;
	
	iVar1 = 2;
	if (func_799(func_7(), 1))
	{
		if (Local_102.f_34 > 0)
		{
			bVar0 = true;
			iVar1 = 1;
		}
	}
	else if (func_178(1, 0) > 0)
	{
		bVar0 = true;
		iVar1 = 1;
	}
	if (unk_0xCE990E643CD9D0E5(Local_102.f_1, 18))
	{
		iVar1 = 8;
	}
	else if (unk_0xCE990E643CD9D0E5(Local_102.f_1, 16))
	{
		iVar1 = 7;
	}
	if (bParam0)
	{
		iVar1 = 4;
	}
	func_872(bVar0, iVar1, 0, 0, -1, -1, -1, -1, -1, 0);
}

void func_872(bool bParam0, int iParam1, int iParam2, bool bParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, bool bParam9)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!unk_0x25DDB354A40FFCDB())
	{
		return;
	}
	if (bParam9)
	{
		iVar0 = func_497(unk_0x460153A63B9477BC());
		Global_1676407.f_4 = func_733();
		Global_1676407.f_5 = func_732();
		if (func_144(unk_0x460153A63B9477BC()) || func_145(unk_0x460153A63B9477BC()))
		{
			Global_1676407.f_6 = 1;
		}
		else
		{
			Global_1676407.f_6 = 0;
		}
		Global_1676407.f_1 = func_926(bParam9);
		Global_1676407.f_8 = unk_0x5A002C4821A13338();
		Global_1676407.f_9 = func_773(bParam0);
		Global_1676407.f_10 = iParam1;
		Global_1676407.f_17 = Global_1676407.f_2;
		Global_1676407.f_18 = Global_1676407.f_2;
		Global_1676407.f_19 = func_765();
		Global_1676407.f_21 = (Global_1676407.f_8 - Global_1676407.f_7);
		if (func_81(unk_0x460153A63B9477BC(), 1))
		{
			Global_1676407.f_23 = func_773(func_127(1));
		}
		Global_1676407.f_24 = func_39(unk_0x460153A63B9477BC());
		Global_1676407.f_28 = func_774(unk_0x460153A63B9477BC());
		if (Global_1676407.f_24 > 2)
		{
			Global_1676407.f_24 = 2;
		}
		func_924(iVar0);
	}
	else
	{
		iVar0 = func_102(unk_0x460153A63B9477BC());
	}
	if (func_99(iVar0))
	{
		Global_1676146.f_2 = func_733();
		Global_1676146.f_3 = func_732();
		Global_1676146.f_50 = iParam4;
		Global_1676146.f_51 = iParam5;
		Global_1676146.f_10 = unk_0x5A002C4821A13338();
		Global_1676146.f_20 = (Global_1676146.f_10 - Global_1676146.f_9);
		Global_1676146.f_12 = iParam1;
		Global_1676146.f_19 = func_920(iVar0, bParam0, func_923(bParam3));
		if (bParam0)
		{
			Global_1676146.f_11 = 1;
		}
		else
		{
			Global_1676146.f_11 = 0;
		}
		if ((func_143(unk_0x460153A63B9477BC()) || func_142(unk_0x460153A63B9477BC())) || func_155(unk_0x460153A63B9477BC()))
		{
			Global_1676146.f_8 = 1;
		}
		else
		{
			Global_1676146.f_8 = 0;
		}
		if (iParam2 != 0)
		{
			Global_1676146.f_43 = 0;
			Global_1676146.f_45 = func_771(func_177(), iParam2);
			Global_1676146.f_47 = iParam7;
			Global_1676146.f_46 = iParam6;
			Global_1676146.f_52 = func_919(func_177(), iParam2);
		}
		func_917(iVar0);
	}
	else if (func_132(iVar0))
	{
		Global_1676200.f_2 = func_733();
		Global_1676200.f_3 = func_732();
		Global_1676200.f_10 = unk_0x5A002C4821A13338();
		Global_1676200.f_19 = (Global_1676200.f_10 - Global_1676200.f_9);
		Global_1676200.f_12 = iParam1;
		if (bParam0)
		{
			Global_1676200.f_11 = 1;
		}
		else
		{
			Global_1676200.f_11 = 0;
		}
		if ((func_143(unk_0x460153A63B9477BC()) || func_142(unk_0x460153A63B9477BC())) || func_155(unk_0x460153A63B9477BC()))
		{
			Global_1676200.f_8 = 1;
		}
		else
		{
			Global_1676200.f_8 = 0;
		}
		func_915(iVar0);
	}
	else if (func_192(iVar0))
	{
		Global_1676263.f_2 = func_733();
		Global_1676263.f_3 = func_732();
		Global_1676263.f_9 = unk_0x5A002C4821A13338();
		Global_1676263.f_18 = (Global_1676263.f_9 - Global_1676263.f_8);
		Global_1676263.f_11 = iParam1;
		Global_1676263.f_7 = func_765();
		Global_1676263.f_42 = func_768(func_98(), 5);
		iVar1 = unk_0x460153A63B9477BC();
		iVar2 = func_214(iVar1);
		Global_1676263.f_28 = iVar2;
		Global_1676263.f_29 = func_773((func_688(iVar1) || func_687(iVar1)));
		Global_1676263.f_30 = func_773(func_914(iVar1));
		Global_1676263.f_32 = func_773(func_685(iVar1));
		Global_1676263.f_33 = func_773(func_686(iVar1));
		Global_1676263.f_34 = func_773(func_913(iVar1));
		Global_1676263.f_35 = func_773(func_684(0, iVar1) == 1);
		Global_1676263.f_36 = func_773(func_912(iVar1));
		Global_1676263.f_37 = func_773(func_911(iVar1));
		Global_1676263.f_38 = func_773(func_910(iVar1));
		Global_1676263.f_39 = func_773(func_326(iVar1, iVar2, 0));
		Global_1676263.f_40 = func_773(func_326(iVar1, iVar2, 2));
		Global_1676263.f_41 = func_773(func_326(iVar1, iVar2, 1));
		if (func_909(iVar1))
		{
			Global_1676263.f_31 = 2;
		}
		else if (func_908(iVar1))
		{
			Global_1676263.f_31 = 1;
		}
		if (bParam0)
		{
			Global_1676263.f_10 = 1;
		}
		else
		{
			Global_1676263.f_10 = 0;
		}
		if ((func_143(unk_0x460153A63B9477BC()) || func_142(unk_0x460153A63B9477BC())) || func_155(unk_0x460153A63B9477BC()))
		{
			Global_1676263.f_6 = 1;
		}
		else
		{
			Global_1676263.f_6 = 0;
		}
		Global_1676263.f_21 = -2;
		Global_1676263.f_22 = -2;
		func_906(iVar0);
	}
	else if (func_191(iVar0))
	{
		Global_1676307.f_2 = func_733();
		Global_1676307.f_3 = func_732();
		if ((func_143(unk_0x460153A63B9477BC()) || func_142(unk_0x460153A63B9477BC())) || func_155(unk_0x460153A63B9477BC()))
		{
			Global_1676307.f_6 = 1;
		}
		else
		{
			Global_1676307.f_6 = 0;
		}
		Global_1676307.f_9 = unk_0x5A002C4821A13338();
		Global_1676307.f_10 = func_773(bParam0);
		Global_1676307.f_11 = iParam1;
		Global_1676307.f_17 = func_766(func_7());
		Global_1676307.f_18 = (Global_1676307.f_9 - Global_1676307.f_8);
		Global_1676307.f_20 = iParam8;
		Global_1676307.f_21 = -2;
		Global_1676307.f_22 = -2;
		Global_1676307.f_27 = func_905();
		Global_1676307.f_29 = func_200(6108, -1, 0);
		Global_1676307.f_30 = func_200(6104, -1, 0);
		Global_1676307.f_31 = func_200(6105, -1, 0);
		Global_1676307.f_32 = func_200(6107, -1, 0);
		Global_1676307.f_33 = func_200(6106, -1, 0);
		Global_1676307.f_34 = func_200(6109, -1, 0);
		Global_1676307.f_36 = func_773(func_127(1));
		Global_1676307.f_37 = func_903();
		func_893();
		func_891(iVar0);
	}
	else if (func_190(iVar0))
	{
		Global_1676361.f_2 = func_733();
		Global_1676361.f_3 = func_732();
		if ((func_143(unk_0x460153A63B9477BC()) || func_142(unk_0x460153A63B9477BC())) || func_155(unk_0x460153A63B9477BC()))
		{
			Global_1676361.f_6 = 1;
		}
		else
		{
			Global_1676361.f_6 = 0;
		}
		Global_1676361.f_9 = unk_0x5A002C4821A13338();
		Global_1676361.f_10 = func_773(bParam0);
		Global_1676361.f_11 = iParam1;
		Global_1676361.f_18 = (Global_1676361.f_9 - Global_1676361.f_8);
		Global_1676361.f_20 = iParam8;
		Global_1676361.f_23 = Global_786547;
		Global_1676361.f_36 = Global_786547.f_1;
		Global_1676361.f_24 = func_200(6158, -1, 0);
		Global_1676361.f_25 = func_200(6163, -1, 0);
		Global_1676361.f_26 = func_200(6164, -1, 0);
		Global_1676361.f_27 = func_773((((func_764() || func_763()) || func_762()) || func_761(unk_0x460153A63B9477BC())));
		Global_1676361.f_28 = func_200(6165, -1, 0);
		Global_1676361.f_29 = func_773(func_760());
		Global_1676361.f_35 = -1;
		Global_1676361.f_38 = -1;
		Global_1676361.f_39 = Global_1676361.f_4;
		Global_1676361.f_40 = Global_1676361.f_5;
		Global_1676361.f_41 = func_733();
		Global_1676361.f_42 = func_773(func_127(1));
		Global_1676361.f_44 = Global_1676361.f_18;
		func_889(iVar0);
	}
	else if (func_185(iVar0))
	{
		if (Global_1676497.f_2 == -1)
		{
			Global_1676497.f_2 = func_733();
		}
		if (Global_1676497.f_3 == -1)
		{
			Global_1676497.f_3 = func_732();
		}
		if ((func_143(unk_0x460153A63B9477BC()) || func_142(unk_0x460153A63B9477BC())) || func_155(unk_0x460153A63B9477BC()))
		{
			Global_1676497.f_6 = 1;
		}
		else
		{
			Global_1676497.f_6 = 0;
		}
		Global_1676497.f_1 = func_926(0);
		Global_1676497.f_7 = func_765();
		Global_1676497.f_9 = unk_0x5A002C4821A13338();
		Global_1676497.f_10 = func_773(bParam0);
		Global_1676497.f_11 = iParam1;
		if (func_177() != -1)
		{
			Global_1676497.f_17 = func_759(func_177());
		}
		Global_1676497.f_18 = (Global_1676497.f_9 - Global_1676497.f_8);
		Global_1676497.f_19 = Global_2540384.f_6650;
		Global_1676497.f_28 = func_774(unk_0x460153A63B9477BC());
		Global_1676497.f_29 = func_773(func_888(unk_0x460153A63B9477BC()));
		Global_1676497.f_30 = func_773(func_887(unk_0x460153A63B9477BC()));
		Global_1676497.f_31 = func_741(unk_0x460153A63B9477BC());
		if (func_81(unk_0x460153A63B9477BC(), 1))
		{
			Global_1676497.f_33 = func_773(func_127(1));
		}
		if (Global_1676497.f_34 > 2)
		{
			Global_1676497.f_34 = 2;
		}
		func_885(iVar0);
	}
	else if (func_189(iVar0))
	{
		Global_1676443.f_2 = func_733();
		Global_1676443.f_3 = func_732();
		if ((func_143(unk_0x460153A63B9477BC()) || func_142(unk_0x460153A63B9477BC())) || func_155(unk_0x460153A63B9477BC()))
		{
			Global_1676443.f_6 = 1;
		}
		else
		{
			Global_1676443.f_6 = 0;
		}
		Global_1676443.f_1 = func_926(0);
		Global_1676443.f_9 = unk_0x5A002C4821A13338();
		Global_1676443.f_10 = func_773(bParam0);
		Global_1676443.f_11 = iParam1;
		Global_1676443.f_18 = (Global_1676443.f_9 - Global_1676443.f_8);
		Global_1676443.f_28 = func_774(unk_0x460153A63B9477BC());
		if (Global_1676443.f_28)
		{
			Global_1676443.f_29 = func_758(unk_0x460153A63B9477BC());
		}
		else
		{
			Global_1676443.f_29 = 0;
		}
		Global_1676443.f_30 = func_742(unk_0x460153A63B9477BC(), 4, -1);
		Global_1676443.f_31 = func_741(unk_0x460153A63B9477BC());
		Global_1676443.f_32 = func_773(func_740(unk_0x460153A63B9477BC()));
		Global_1676443.f_33 = func_773(func_739(unk_0x460153A63B9477BC()));
		Global_1676443.f_34 = func_773(func_738(unk_0x460153A63B9477BC()));
		Global_1676443.f_35 = func_773(func_737(unk_0x460153A63B9477BC()));
		Global_1676443.f_36 = func_736(unk_0x460153A63B9477BC());
		Global_1676443.f_37 = func_735(unk_0x460153A63B9477BC());
		Global_1676443.f_39 = func_734(unk_0x460153A63B9477BC());
		if (func_81(unk_0x460153A63B9477BC(), 1))
		{
			Global_1676443.f_41 = func_773(func_127(1));
		}
		if (Global_1676443.f_42 > 2)
		{
			Global_1676443.f_42 = 2;
		}
		func_883(iVar0);
	}
	else if (func_184(iVar0))
	{
		Global_1676581.f_2 = func_733();
		Global_1676581.f_3 = func_732();
		Global_1676581.f_4 = func_776(func_177());
		Global_1676581.f_5 = func_775(func_177());
		if ((func_143(unk_0x460153A63B9477BC()) || func_142(unk_0x460153A63B9477BC())) || func_155(unk_0x460153A63B9477BC()))
		{
			Global_1676581.f_6 = 1;
		}
		else
		{
			Global_1676581.f_6 = 0;
		}
		Global_1676581.f_7 = func_765();
		Global_1676581.f_9 = unk_0x5A002C4821A13338();
		Global_1676581.f_10 = func_773(bParam0);
		Global_1676581.f_11 = iParam1;
		if (func_7() != -1)
		{
			Global_1676581.f_17 = func_759(func_7());
		}
		Global_1676581.f_18 = (Global_1676581.f_9 - Global_1676581.f_8);
		Global_1676581.f_21 = 1;
		Global_1676581.f_22 = 1;
		Global_1676581.f_25 = func_882(unk_0x460153A63B9477BC());
		Global_1676581.f_27 = func_773(func_731(unk_0x460153A63B9477BC()));
		Global_1676581.f_28 = func_728(21, -1);
		Global_1676581.f_29 = func_773(func_881(unk_0x460153A63B9477BC()));
		func_879(iVar0);
	}
	else if (func_183(iVar0))
	{
		if (func_177() != -1)
		{
			Global_1676656.f_6 = func_776(func_177());
			Global_1676656.f_7 = func_775(func_177());
		}
		if (func_81(unk_0x460153A63B9477BC(), 1))
		{
			Global_1676656.f_8 = func_773(func_127(1));
		}
		Global_1676656.f_10 = func_765();
		Global_1676656.f_11 = 1;
		Global_1676656.f_13 = (unk_0x5A002C4821A13338() - Global_1703843);
		Global_1676656.f_14 = iParam1;
		Global_1676656.f_19 = 1;
		Global_1676656.f_20 = 1;
		func_877(iVar0);
	}
	else if (func_182(iVar0))
	{
		Global_1676743.f_2 = func_733();
		if (func_177() != -1)
		{
			Global_1676743.f_6 = func_776(func_177());
			Global_1676743.f_7 = func_775(func_177());
		}
		Global_1676743.f_8 = func_773(func_127(1));
		if (func_177() != -1)
		{
			Global_1676743.f_9 = func_759(func_177());
		}
		Global_1676743.f_10 = func_765();
		Global_1676743.f_11 = 1;
		Global_1676743.f_14 = iParam1;
		Global_1676743.f_19 = 1;
		Global_1676743.f_20 = 1;
		func_875(iVar0);
	}
	else if (func_710(iVar0))
	{
		Global_1676855.f_2 = func_733();
		Global_1676855.f_9 = 1;
		Global_1676855.f_10 = bParam0;
		Global_1676855.f_11 = iParam1;
		func_873(iVar0);
	}
	else
	{
		Global_1676128.f_6 = unk_0x5A002C4821A13338();
		if (bParam0)
		{
			Global_1676128.f_7 = 1;
		}
		else
		{
			Global_1676128.f_7 = 0;
		}
		Global_1676128.f_8 = iParam1;
		if (Global_1676128.f_4 == 0)
		{
			if ((func_143(unk_0x460153A63B9477BC()) || func_142(unk_0x460153A63B9477BC())) || func_155(unk_0x460153A63B9477BC()))
			{
				Global_1676128.f_4 = 1;
			}
		}
	}
}

void func_873(int iParam0)
{
	unk_0xD6CA58B3B53A0F22(&Global_1676855);
	func_874();
}

void func_874()
{
	struct<21> Var0;
	
	Global_1676855 = { Var0 };
}

void func_875(int iParam0)
{
	if (iParam0 == 0)
	{
	}
	unk_0xDFCDB14317A9B361(&Global_1676743);
	func_876();
}

void func_876()
{
	struct<35> Var0;
	
	Global_1676743 = { Var0 };
	Global_1676743.f_23 = 0;
	Global_1676743.f_22 = 0;
	Global_1676743.f_21 = 0;
}

void func_877(int iParam0)
{
	if (iParam0 == 0)
	{
	}
	unk_0x40673E504A482DE7(&Global_1676656);
	func_878();
}

void func_878()
{
	struct<36> Var0;
	
	Global_1676656 = { Var0 };
	Global_1676656.f_23 = 0;
	Global_1676656.f_22 = 0;
	Global_1676656.f_21 = 0;
}

void func_879(int iParam0)
{
	if (iParam0 == 0)
	{
	}
	unk_0x6C395296347AF0FB(&Global_1676581);
	func_880();
}

void func_880()
{
	struct<31> Var0;
	
	Global_1676581 = { Var0 };
}

int func_881(int iParam0)
{
	if (iParam0 != func_40())
	{
		return unk_0xCE990E643CD9D0E5(Global_1590682[iParam0 /*883*/].f_274.f_369.f_2, 6);
	}
	return 0;
}

int func_882(int iParam0)
{
	if (func_102(iParam0) == 243)
	{
		return func_188(iParam0);
	}
	return -1;
}

void func_883(int iParam0)
{
	unk_0xCE168129160262A1(&Global_1676443);
	func_884();
}

void func_884()
{
	struct<54> Var0;
	
	Var0 = -1;
	Var0.f_1 = -1;
	Var0.f_2 = -1;
	Var0.f_3 = -1;
	Var0.f_4 = -1;
	Var0.f_5 = -1;
	Var0.f_6 = -1;
	Var0.f_7 = -1;
	Var0.f_8 = -1;
	Var0.f_9 = -1;
	Var0.f_10 = -1;
	Var0.f_11 = -1;
	Var0.f_12 = -1;
	Var0.f_13 = -1;
	Var0.f_14 = -1;
	Var0.f_15 = -1;
	Var0.f_16 = -1;
	Var0.f_17 = -1;
	Var0.f_18 = -1;
	Var0.f_19 = -1;
	Var0.f_20 = -1;
	Var0.f_21 = -1;
	Var0.f_22 = -1;
	Var0.f_23 = -1;
	Var0.f_24 = -1;
	Var0.f_25 = -1;
	Var0.f_26 = -1;
	Var0.f_27 = -1;
	Var0.f_29 = -1;
	Var0.f_32 = -1;
	Var0.f_33 = -1;
	Var0.f_34 = -1;
	Var0.f_35 = -1;
	Var0.f_40 = -1;
	Var0.f_41 = -1;
	Var0.f_42 = -1;
	Var0.f_43 = -1;
	Var0.f_44 = -1;
	Var0.f_45 = -1;
	Var0.f_46 = -1;
	Var0.f_47 = -1;
	Var0.f_48 = -1;
	Var0.f_49 = -1;
	Var0.f_50 = -1;
	Var0.f_51 = -1;
	Var0.f_52 = -1;
	Global_1676443 = { Var0 };
}

void func_885(int iParam0)
{
	unk_0x8E1F14C024665293(&Global_1676497);
	func_886();
}

void func_886()
{
	struct<39> Var0;
	
	Var0 = -1;
	Var0.f_1 = -1;
	Var0.f_2 = -1;
	Var0.f_3 = -1;
	Var0.f_4 = -1;
	Var0.f_5 = -1;
	Var0.f_6 = -1;
	Var0.f_7 = -1;
	Var0.f_8 = -1;
	Var0.f_9 = -1;
	Var0.f_10 = -1;
	Var0.f_11 = -1;
	Var0.f_12 = -1;
	Var0.f_13 = -1;
	Var0.f_14 = -1;
	Var0.f_15 = -1;
	Var0.f_16 = -1;
	Var0.f_17 = -1;
	Var0.f_18 = -1;
	Var0.f_19 = -1;
	Var0.f_20 = -1;
	Var0.f_21 = -1;
	Var0.f_22 = -1;
	Var0.f_23 = -1;
	Var0.f_24 = -1;
	Var0.f_25 = -1;
	Var0.f_26 = -1;
	Var0.f_27 = -1;
	Var0.f_29 = -1;
	Var0.f_30 = -1;
	Var0.f_32 = -1;
	Var0.f_33 = -1;
	Var0.f_34 = -1;
	Var0.f_35 = -1;
	Var0.f_36 = -1;
	Var0.f_37 = -1;
	Var0.f_38 = -1;
	Global_1676497 = { Var0 };
}

bool func_887(int iParam0)
{
	if (iParam0 == func_40())
	{
		return 0;
	}
	return unk_0xCE990E643CD9D0E5(Global_1590682[iParam0 /*883*/].f_274.f_322.f_1, 0);
}

bool func_888(int iParam0)
{
	if (iParam0 == func_40())
	{
		return 0;
	}
	return unk_0xCE990E643CD9D0E5(Global_1590682[iParam0 /*883*/].f_274.f_322.f_1, 19);
}

void func_889(int iParam0)
{
	unk_0xB96EF693735C00E9(&Global_1676361);
	func_890();
}

void func_890()
{
	struct<46> Var0;
	
	Var0.f_6 = -1;
	Var0.f_7 = -1;
	Var0.f_8 = -1;
	Var0.f_9 = -1;
	Var0.f_10 = -1;
	Var0.f_11 = -1;
	Var0.f_12 = -1;
	Var0.f_13 = -1;
	Var0.f_14 = -1;
	Var0.f_15 = -1;
	Var0.f_16 = -1;
	Var0.f_17 = -1;
	Var0.f_18 = -1;
	Var0.f_19 = -1;
	Var0.f_20 = -1;
	Var0.f_21 = -1;
	Var0.f_22 = -1;
	Var0.f_23 = -1;
	Var0.f_24 = -1;
	Var0.f_25 = -1;
	Var0.f_26 = -1;
	Var0.f_27 = -1;
	Var0.f_28 = -1;
	Var0.f_29 = -1;
	Var0.f_30 = -1;
	Var0.f_31 = -1;
	Var0.f_32 = -1;
	Var0.f_33 = -1;
	Var0.f_34 = -1;
	Var0.f_35 = -1;
	Var0.f_36 = -1;
	Var0.f_37 = -1;
	Var0.f_38 = -1;
	Var0.f_39 = -1;
	Var0.f_40 = -1;
	Var0.f_41 = -1;
	Var0.f_42 = -1;
	Var0.f_43 = -1;
	Var0.f_44 = -1;
	Var0.f_45 = -1;
	Global_1676361 = { Var0 };
	Global_1676361.f_16 = 0;
}

void func_891(int iParam0)
{
	unk_0xCE08E0D4B174A777(&Global_1676307);
	func_892();
}

void func_892()
{
	struct<54> Var0;
	
	Var0.f_6 = -1;
	Var0.f_7 = -1;
	Var0.f_8 = -1;
	Var0.f_9 = -1;
	Var0.f_10 = -1;
	Var0.f_11 = -1;
	Var0.f_12 = -1;
	Var0.f_13 = -1;
	Var0.f_14 = -1;
	Var0.f_15 = -1;
	Var0.f_16 = -1;
	Var0.f_17 = -1;
	Var0.f_18 = -1;
	Var0.f_19 = -1;
	Var0.f_20 = -1;
	Var0.f_21 = -1;
	Var0.f_22 = -1;
	Var0.f_23 = -1;
	Var0.f_24 = -1;
	Var0.f_25 = -1;
	Var0.f_26 = -1;
	Var0.f_27 = -1;
	Var0.f_28 = -1;
	Var0.f_29 = -1;
	Var0.f_30 = -1;
	Var0.f_31 = -1;
	Var0.f_32 = -1;
	Var0.f_33 = -1;
	Var0.f_34 = -1;
	Var0.f_35 = -1;
	Var0.f_36 = -1;
	Var0.f_37 = -1;
	Var0.f_38 = -1;
	Var0.f_39 = -1;
	Var0.f_40 = -1;
	Var0.f_41 = -1;
	Var0.f_42 = -1;
	Var0.f_43 = -1;
	Var0.f_44 = -1;
	Var0.f_45 = -1;
	Var0.f_46 = -1;
	Var0.f_47 = -1;
	Var0.f_48 = -1;
	Var0.f_49 = -1;
	Var0.f_50 = -1;
	Var0.f_51 = -1;
	Var0.f_52 = -1;
	Var0.f_53 = -1;
	Global_1676307 = { Var0 };
	Global_1676307.f_23 = 0;
	Global_1676307.f_24 = 0;
	Global_1676307.f_16 = 0;
}

void func_893()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	iVar0 = 0;
	iVar3 = -1;
	iVar0 = 0;
	while (iVar0 < 10)
	{
		iVar2 = (iVar0 + func_697(12));
		func_696(iVar2, &iVar1, 1);
		if (iVar1 >= 0)
		{
			if (Global_1323678[iVar1 /*141*/].f_66 != 0 && func_895(Global_1323678[iVar1 /*141*/].f_66, 1))
			{
				if (Global_2540384.f_955 != iVar1)
				{
					if (func_894(Global_1323678[iVar1 /*141*/].f_66))
					{
						if (Global_1323678[iVar1 /*141*/].f_66 != 0)
						{
							iVar3 = Global_1323678[iVar1 /*141*/].f_66;
						}
						switch (iVar0)
						{
							case 0:
								Global_1676307.f_38 = iVar3;
								break;
							
							case 1:
								Global_1676307.f_39 = iVar3;
								break;
							
							case 2:
								Global_1676307.f_40 = iVar3;
								break;
							
							case 3:
								Global_1676307.f_41 = iVar3;
								break;
							
							case 4:
								Global_1676307.f_42 = iVar3;
								break;
							
							case 5:
								Global_1676307.f_43 = iVar3;
								break;
							
							case 6:
								Global_1676307.f_44 = iVar3;
								break;
							
							case 7:
								Global_1676307.f_45 = iVar3;
								break;
							
							case 8:
								Global_1676307.f_46 = iVar3;
								break;
							
							case 9:
								Global_1676307.f_47 = iVar3;
								break;
							}
						}
					}
				}
		}
		iVar0++;
	}
}

int func_894(int iParam0)
{
	switch (iParam0)
	{
		case joaat("buzzard"):
		case joaat("savage"):
		case joaat("valkyrie"):
		case joaat("hydra"):
		case joaat("cargobob"):
		case joaat("cargobob2"):
		case joaat("havok"):
		case joaat("hunter"):
		case joaat("volatus"):
		case joaat("supervolito"):
		case joaat("supervolito2"):
		case joaat("swift"):
		case joaat("swift2"):
		case joaat("frogger"):
		case joaat("maverick"):
		case joaat("annihilator"):
		case joaat("mogul"):
		case joaat("rogue"):
		case joaat("starling"):
		case joaat("seabreeze"):
		case joaat("microlight"):
		case joaat("tula"):
		case joaat("lazer"):
		case joaat("pyro"):
		case joaat("molotok"):
		case joaat("nokota"):
		case joaat("howard"):
		case joaat("bombushka"):
		case joaat("alphaz1"):
		case joaat("nimbus"):
		case joaat("luxor2"):
		case joaat("velum2"):
		case joaat("dodo"):
		case joaat("miljet"):
		case joaat("besra"):
		case joaat("vestra"):
		case joaat("duster"):
		case joaat("shamal"):
		case joaat("cuban800"):
		case joaat("luxor"):
		case joaat("stunt"):
		case joaat("mammatus"):
		case joaat("titan"):
		case joaat("velum"):
		case joaat("akula"):
		case joaat("volatol"):
		case joaat("strikeforce"):
		case joaat("seasparrow"):
		case joaat("alkonost"):
		case joaat("annihilator2"):
			return 1;
		
		default:
	}
	return 0;
}

int func_895(int iParam0, bool bParam1)
{
	int iVar0;
	struct<2> Var1;
	
	if (iParam0 == 0)
	{
		return 0;
	}
	if (!unk_0x653AAFF7E08B7D39(iParam0))
	{
		return 0;
	}
	if (((((iParam0 == joaat("dominator2") && !unk_0x25DDB354A40FFCDB()) || (iParam0 == joaat("buffalo3") && !unk_0x25DDB354A40FFCDB())) || (iParam0 == joaat("gauntlet2") && !unk_0x25DDB354A40FFCDB())) || iParam0 == joaat("blimp2")) || (iParam0 == joaat("stalion2") && !unk_0x25DDB354A40FFCDB()))
	{
		if (!func_902())
		{
			return 0;
		}
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < unk_0x81BDFC133086F533())
		{
			if (unk_0xA2F4B5E51CE10D19(iVar0, &Var1))
			{
				if (iParam0 == Var1.f_1)
				{
					if (unk_0x14AC70FD8926649E(Var1))
					{
						return 0;
					}
				}
			}
			iVar0++;
		}
	}
	if (iParam0 == joaat("blimp"))
	{
		if ((((!func_901() && !func_900()) && !func_899()) && !func_898()) && !func_902())
		{
			return 0;
		}
	}
	if ((iParam0 == joaat("hotknife") || iParam0 == joaat("carbonrs")) || iParam0 == joaat("khamelion"))
	{
		if ((unk_0xC6C08C02733D02C8() || unk_0xF8EDFF98A9C94C74()) || unk_0xDCA0815D900F27F8())
		{
		}
		else if (!func_899())
		{
			return 0;
		}
	}
	if (bParam1)
	{
		if (!func_897(iParam0))
		{
			return 0;
		}
	}
	if (!func_896(iParam0))
	{
		return 0;
	}
	return 1;
}

int func_896(int iParam0)
{
	int iVar0;
	var uVar1;
	char cVar2[64];
	
	if (!func_229())
	{
		return 1;
	}
	unk_0x69DA2BD216554CB9(&iVar0, &uVar1);
	if (iVar0 == 4)
	{
		return 1;
	}
	switch (iParam0)
	{
		case joaat("dune4"):
			StringCopy(&cVar2, "VE_DUNE4_t0_v3", 64);
			break;
		
		case joaat("voltic2"):
			StringCopy(&cVar2, "VE_VOLTIC2_t0_v3", 64);
			break;
		
		case joaat("ruiner2"):
			StringCopy(&cVar2, "VE_RUINER2_t0_v3", 64);
			break;
		
		case joaat("phantom2"):
			StringCopy(&cVar2, "VE_PHANTOM2_t0_v3", 64);
			break;
		
		case joaat("technical2"):
			StringCopy(&cVar2, "VE_TECHNICAL2_t0_v3", 64);
			break;
		
		case joaat("boxville5"):
			StringCopy(&cVar2, "VE_BOXVILLE5_t0_v3", 64);
			break;
		
		case joaat("wastelander"):
			StringCopy(&cVar2, "VE_WASTELANDER_t0_v3", 64);
			break;
		
		case joaat("blazer5"):
			StringCopy(&cVar2, "VE_BLAZER5_t0_v3", 64);
			break;
		
		default:
			return 1;
			break;
	}
	if (!unk_0x18A09013B66E9BB4(&cVar2))
	{
		return 0;
	}
	return 1;
}

int func_897(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (Global_2515213)
	{
		return 1;
	}
	iVar0 = 1;
	iVar1 = unk_0x5A002C4821A13338();
	if (iParam0 == joaat("btype3"))
	{
		if ((!Global_262145.f_6600 && !Global_262145.f_12930) && iVar1 < Global_262145.f_12931)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("faction3"))
	{
		if (!Global_262145.f_14230 && iVar1 < Global_262145.f_14242)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("virgo3") || iParam0 == joaat("virgo2"))
	{
		if (!Global_262145.f_14226 && iVar1 < Global_262145.f_14238)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("sabregt2"))
	{
		if (!Global_262145.f_14227 && iVar1 < Global_262145.f_14239)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tornado5"))
	{
		if (!Global_262145.f_14228 && iVar1 < Global_262145.f_14240)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("minivan2"))
	{
		if (!Global_262145.f_14229 && iVar1 < Global_262145.f_14241)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("slamvan3"))
	{
		if (!Global_262145.f_14231 && iVar1 < Global_262145.f_14243)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("prototipo"))
	{
		if (!Global_262145.f_14232 && iVar1 < Global_262145.f_14235)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("seven70"))
	{
		if (!Global_262145.f_14233 && iVar1 < Global_262145.f_14236)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("pfister811"))
	{
		if (!Global_262145.f_14234 && iVar1 < Global_262145.f_14237)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("bf400"))
	{
		if (!Global_262145.f_16861 && iVar1 < Global_262145.f_16826)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("brioso"))
	{
		if (!Global_262145.f_16856 && iVar1 < Global_262145.f_16821)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("cliffhanger"))
	{
		if (!Global_262145.f_16860 && iVar1 < Global_262145.f_16825)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("contender"))
	{
		if (!Global_262145.f_16859 && iVar1 < Global_262145.f_16824)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("le7b"))
	{
		if (!Global_262145.f_16853 && iVar1 < Global_262145.f_16818)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("omnis"))
	{
		if (!Global_262145.f_16854 && iVar1 < Global_262145.f_16819)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("trophytruck"))
	{
		if (!Global_262145.f_16857 && iVar1 < Global_262145.f_16822)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("trophytruck2"))
	{
		if (!Global_262145.f_16858 && iVar1 < Global_262145.f_16823)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tropos"))
	{
		if (!Global_262145.f_16855 && iVar1 < Global_262145.f_16820)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("gargoyle"))
	{
		if (!Global_262145.f_16863 && iVar1 < Global_262145.f_16828)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("rallytruck"))
	{
		if (!Global_262145.f_16864 && iVar1 < Global_262145.f_16829)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tampa2"))
	{
		if (!Global_262145.f_16852 && iVar1 < Global_262145.f_16817)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tyrus"))
	{
		if (!Global_262145.f_16851 && iVar1 < Global_262145.f_16816)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("sheava"))
	{
		if (!Global_262145.f_16850 && iVar1 < Global_262145.f_16815)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("lynx"))
	{
		if (!Global_262145.f_16862 && iVar1 < Global_262145.f_16827)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("stalion2"))
	{
		if (!Global_262145.f_16865 && iVar1 < Global_262145.f_16830)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("gauntlet2"))
	{
		if (!Global_262145.f_16866 && iVar1 < Global_262145.f_16831)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("dominator2"))
	{
		if (!Global_262145.f_16867 && iVar1 < Global_262145.f_16832)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("buffalo3"))
	{
		if (!Global_262145.f_16868 && iVar1 < Global_262145.f_16833)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("defiler"))
	{
		if (!Global_262145.f_17015 && iVar1 < Global_262145.f_17037)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("nightblade"))
	{
		if (!Global_262145.f_17016 && iVar1 < Global_262145.f_17038)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("zombiea"))
	{
		if (!Global_262145.f_17017 && iVar1 < Global_262145.f_17039)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("esskey"))
	{
		if (!Global_262145.f_17018 && iVar1 < Global_262145.f_17040)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("avarus"))
	{
		if (!Global_262145.f_17019 && iVar1 < Global_262145.f_17041)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("zombieb"))
	{
		if (!Global_262145.f_17020 && iVar1 < Global_262145.f_17042)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("hakuchou2"))
	{
		if (!Global_262145.f_17022 && iVar1 < Global_262145.f_17043)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("vortex"))
	{
		if (!Global_262145.f_17023 && iVar1 < Global_262145.f_17044)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("shotaro"))
	{
		if (!Global_262145.f_17024 && iVar1 < Global_262145.f_17045)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("chimera"))
	{
		if (!Global_262145.f_17025 && iVar1 < Global_262145.f_17046)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("raptor"))
	{
		if (!Global_262145.f_17026 && iVar1 < Global_262145.f_17047)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("daemon2"))
	{
		if (!Global_262145.f_17027 && iVar1 < Global_262145.f_17048)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("blazer4"))
	{
		if (!Global_262145.f_17028 && iVar1 < Global_262145.f_17049)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tornado6"))
	{
		if (!Global_262145.f_17034 && iVar1 < Global_262145.f_17056)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("youga2"))
	{
		if (!Global_262145.f_17031 && iVar1 < Global_262145.f_17052)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("wolfsbane"))
	{
		if (!Global_262145.f_17032 && iVar1 < Global_262145.f_17053)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("faggio3"))
	{
		if (!Global_262145.f_17033 && iVar1 < Global_262145.f_17054)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("faggio"))
	{
		if (!Global_262145.f_17021 && iVar1 < Global_262145.f_17055)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("bagger"))
	{
		if (!Global_262145.f_17035 && iVar1 < Global_262145.f_17057)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("sanctus"))
	{
		if (!Global_262145.f_17029 && iVar1 < Global_262145.f_17050)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("manchez"))
	{
		if (!Global_262145.f_17030 && iVar1 < Global_262145.f_17051)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("ratbike"))
	{
		if (!Global_262145.f_17036 && iVar1 < Global_262145.f_17058)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("voltic2"))
	{
		if (!Global_262145.f_18667 && iVar1 < Global_262145.f_18764)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("ruiner2"))
	{
		if (!Global_262145.f_18668 && iVar1 < Global_262145.f_18765)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("dune4"))
	{
		if (!Global_262145.f_18669 && iVar1 < Global_262145.f_18766)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("dune5"))
	{
		if (!Global_262145.f_18670 && iVar1 < Global_262145.f_18767)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("phantom2"))
	{
		if (!Global_262145.f_18671 && iVar1 < Global_262145.f_18768)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("technical2"))
	{
		if (!Global_262145.f_18672 && iVar1 < Global_262145.f_18769)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("boxville5"))
	{
		if (!Global_262145.f_18673 && iVar1 < Global_262145.f_18770)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("wastelander"))
	{
		if (!Global_262145.f_18674 && iVar1 < Global_262145.f_18771)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("blazer5"))
	{
		if (!Global_262145.f_18675 && iVar1 < Global_262145.f_18772)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("comet2"))
	{
		if (!Global_262145.f_18676 && iVar1 < Global_262145.f_18773)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("comet3"))
	{
		if (!Global_262145.f_18677 && iVar1 < Global_262145.f_18774)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("diablous"))
	{
		if (!Global_262145.f_18678 && iVar1 < Global_262145.f_18775)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("diablous2"))
	{
		if (!Global_262145.f_18679 && iVar1 < Global_262145.f_18776)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("elegy"))
	{
		if (!Global_262145.f_18680 && iVar1 < Global_262145.f_18777)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("elegy2"))
	{
		if (!Global_262145.f_18681 && iVar1 < Global_262145.f_18778)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("fcr"))
	{
		if (!Global_262145.f_18682 && iVar1 < Global_262145.f_18779)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("fcr2"))
	{
		if (!Global_262145.f_18683 && iVar1 < Global_262145.f_18780)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("italigtb"))
	{
		if (!Global_262145.f_18684 && iVar1 < Global_262145.f_18781)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("italigtb2"))
	{
		if (!Global_262145.f_18685 && iVar1 < Global_262145.f_18782)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("nero"))
	{
		if (!Global_262145.f_18686 && iVar1 < Global_262145.f_18783)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("nero2"))
	{
		if (!Global_262145.f_18687 && iVar1 < Global_262145.f_18784)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("penetrator"))
	{
		if (!Global_262145.f_18688 && iVar1 < Global_262145.f_18785)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("specter"))
	{
		if (!Global_262145.f_18689 && iVar1 < Global_262145.f_18786)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("specter2"))
	{
		if (!Global_262145.f_18690 && iVar1 < Global_262145.f_18787)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tempesta"))
	{
		if (!Global_262145.f_18691 && iVar1 < Global_262145.f_18788)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("gp1"))
	{
		if (!Global_262145.f_19748 && iVar1 < Global_262145.f_19744)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("infernus2"))
	{
		if (!Global_262145.f_19749 && iVar1 < Global_262145.f_19745)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("ruston"))
	{
		if (!Global_262145.f_19750 && iVar1 < Global_262145.f_19746)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("turismo2"))
	{
		if (!Global_262145.f_19751 && iVar1 < Global_262145.f_19747)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("xa21"))
	{
		if (!Global_262145.f_20629 && iVar1 < Global_262145.f_20637)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("cheetah2"))
	{
		if (!Global_262145.f_20630 && iVar1 < Global_262145.f_20638)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("torero"))
	{
		if (!Global_262145.f_20631 && iVar1 < Global_262145.f_20639)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("vagner"))
	{
		if (!Global_262145.f_20632 && iVar1 < Global_262145.f_20640)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("ardent"))
	{
		if (!Global_262145.f_20633 && iVar1 < Global_262145.f_20641)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("nightshark"))
	{
		if (!Global_262145.f_20634 && iVar1 < Global_262145.f_20642)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("microlight"))
	{
		if (!Global_262145.f_21409 && iVar1 < Global_262145.f_21429)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("mogul"))
	{
		if (!Global_262145.f_21421 && iVar1 < Global_262145.f_21441)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("rogue"))
	{
		if (!Global_262145.f_21412 && iVar1 < Global_262145.f_21432)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("starling"))
	{
		if (!Global_262145.f_21422 && iVar1 < Global_262145.f_21442)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("seabreeze"))
	{
		if (!Global_262145.f_21410 && iVar1 < Global_262145.f_21430)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tula"))
	{
		if (!Global_262145.f_21426 && iVar1 < Global_262145.f_21446)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("pyro"))
	{
		if (!Global_262145.f_21424 && iVar1 < Global_262145.f_21444)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("molotok"))
	{
		if (!Global_262145.f_21425 && iVar1 < Global_262145.f_21445)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("nokota"))
	{
		if (!Global_262145.f_21420 && iVar1 < Global_262145.f_21440)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("bombushka"))
	{
		if (!Global_262145.f_21427 && iVar1 < Global_262145.f_21447)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("hunter"))
	{
		if (!Global_262145.f_21423 && iVar1 < Global_262145.f_21443)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("havok"))
	{
		if (!Global_262145.f_21419 && iVar1 < Global_262145.f_21439)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("howard"))
	{
		if (!Global_262145.f_21411 && iVar1 < Global_262145.f_21431)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("alphaz1"))
	{
		if (!Global_262145.f_21413 && iVar1 < Global_262145.f_21433)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("cyclone"))
	{
		if (!Global_262145.f_21414 && iVar1 < Global_262145.f_21434)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("visione"))
	{
		if (!Global_262145.f_21415 && iVar1 < Global_262145.f_21435)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("vigilante"))
	{
		if (!Global_262145.f_21416 && iVar1 < Global_262145.f_21436)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("retinue"))
	{
		if (!Global_262145.f_21417 && iVar1 < Global_262145.f_21437)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("rapidgt3"))
	{
		if (!Global_262145.f_21418 && iVar1 < Global_262145.f_21438)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("deluxo"))
	{
		if (!Global_262145.f_22370 && iVar1 < Global_262145.f_22398)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("stromberg"))
	{
		if (!Global_262145.f_22371 && iVar1 < Global_262145.f_22399)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("riot2"))
	{
		if (!Global_262145.f_22372 && iVar1 < Global_262145.f_22400)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("chernobog"))
	{
		if (!Global_262145.f_22373 && iVar1 < Global_262145.f_22401)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("khanjali"))
	{
		if (!Global_262145.f_22374 && iVar1 < Global_262145.f_22402)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("akula"))
	{
		if (!Global_262145.f_22375 && iVar1 < Global_262145.f_22403)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("thruster"))
	{
		if (!Global_262145.f_22376 && iVar1 < Global_262145.f_22404)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("barrage"))
	{
		if (!Global_262145.f_22377 && iVar1 < Global_262145.f_22405)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("volatol"))
	{
		if (!Global_262145.f_22378 && iVar1 < Global_262145.f_22406)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("comet4"))
	{
		if (!Global_262145.f_22379 && iVar1 < Global_262145.f_22407)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("neon"))
	{
		if (!Global_262145.f_22380 && iVar1 < Global_262145.f_22408)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("streiter"))
	{
		if (!Global_262145.f_22381 && iVar1 < Global_262145.f_22409)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("sentinel3"))
	{
		if (!Global_262145.f_22382 && iVar1 < Global_262145.f_22410)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("yosemite"))
	{
		if (!Global_262145.f_22383 && iVar1 < Global_262145.f_22411)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("sc1"))
	{
		if (!Global_262145.f_22384 && iVar1 < Global_262145.f_22412)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("autarch"))
	{
		if (!Global_262145.f_22385 && iVar1 < Global_262145.f_22413)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("gt500"))
	{
		if (!Global_262145.f_22386 && iVar1 < Global_262145.f_22414)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("hustler"))
	{
		if (!Global_262145.f_22387 && iVar1 < Global_262145.f_22415)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("revolter"))
	{
		if (!Global_262145.f_22388 && iVar1 < Global_262145.f_22416)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("pariah"))
	{
		if (!Global_262145.f_22389 && iVar1 < Global_262145.f_22417)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("raiden"))
	{
		if (!Global_262145.f_22390 && iVar1 < Global_262145.f_22418)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("savestra"))
	{
		if (!Global_262145.f_22391 && iVar1 < Global_262145.f_22419)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("riata"))
	{
		if (!Global_262145.f_22392 && iVar1 < Global_262145.f_22420)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("hermes"))
	{
		if (!Global_262145.f_22393 && iVar1 < Global_262145.f_22421)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("comet5"))
	{
		if (!Global_262145.f_22394 && iVar1 < Global_262145.f_22422)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("z190"))
	{
		if (!Global_262145.f_22395 && iVar1 < Global_262145.f_22423)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("viseris"))
	{
		if (!Global_262145.f_22396 && iVar1 < Global_262145.f_22424)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("kamacho"))
	{
		if (!Global_262145.f_22397 && iVar1 < Global_262145.f_22425)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("gb200"))
	{
		if (!Global_262145.f_23586 && iVar1 < Global_262145.f_23602)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("fagaloa"))
	{
		if (!Global_262145.f_23587 && iVar1 < Global_262145.f_23603)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("ellie"))
	{
		if (!Global_262145.f_23591 && iVar1 < Global_262145.f_23607)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("issi3"))
	{
		if (!Global_262145.f_23594 && iVar1 < Global_262145.f_23610)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("michelli"))
	{
		if (!Global_262145.f_23599 && iVar1 < Global_262145.f_23615)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("flashgt"))
	{
		if (!Global_262145.f_23593 && iVar1 < Global_262145.f_23609)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("hotring"))
	{
		if (!Global_262145.f_23585 && iVar1 < Global_262145.f_23601)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tezeract"))
	{
		if (!Global_262145.f_23592 && iVar1 < Global_262145.f_23608)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tyrant"))
	{
		if (!Global_262145.f_23598 && iVar1 < Global_262145.f_23614)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("dominator3"))
	{
		if (!Global_262145.f_23597 && iVar1 < Global_262145.f_23613)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("taipan"))
	{
		if (!Global_262145.f_23588 && iVar1 < Global_262145.f_23604)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("entity2"))
	{
		if (!Global_262145.f_23590 && iVar1 < Global_262145.f_23606)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("jester3"))
	{
		if (!Global_262145.f_23600 && iVar1 < Global_262145.f_23616)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("cheburek"))
	{
		if (!Global_262145.f_23596 && iVar1 < Global_262145.f_23612)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("caracara"))
	{
		if (!Global_262145.f_23589 && iVar1 < Global_262145.f_23605)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("seasparrow"))
	{
		if (!Global_262145.f_23595 && iVar1 < Global_262145.f_23611)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("terbyte"))
	{
		if (!Global_262145.f_23676 && iVar1 < Global_262145.f_23663)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("pbus2"))
	{
		if (!Global_262145.f_23677 && iVar1 < Global_262145.f_23664)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("mule4"))
	{
		if (!Global_262145.f_23682 && iVar1 < Global_262145.f_23669)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("pounder2"))
	{
		if (!Global_262145.f_23681 && iVar1 < Global_262145.f_23668)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("swinger"))
	{
		if (!Global_262145.f_23679 && iVar1 < Global_262145.f_23666)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("menacer"))
	{
		if (!Global_262145.f_23685 && iVar1 < Global_262145.f_23672)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("scramjet"))
	{
		if (!Global_262145.f_23687 && iVar1 < Global_262145.f_23674)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("strikeforce"))
	{
		if (!Global_262145.f_23688 && iVar1 < Global_262145.f_23675)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("oppressor2"))
	{
		if (!Global_262145.f_23686 && iVar1 < Global_262145.f_23673)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("patriot2"))
	{
		if (!Global_262145.f_23678 && iVar1 < Global_262145.f_23665)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("stafford"))
	{
		if (!Global_262145.f_23680 && iVar1 < Global_262145.f_23667)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("freecrawler"))
	{
		if (!Global_262145.f_23684 && iVar1 < Global_262145.f_23671)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("blimp3"))
	{
		if (!Global_262145.f_23683 && iVar1 < Global_262145.f_23670)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("monster3"))
	{
	}
	else if (iParam0 == joaat("cerberus"))
	{
	}
	else if (iParam0 == joaat("cerberus2"))
	{
	}
	else if (iParam0 == joaat("cerberus3"))
	{
	}
	else if (iParam0 == joaat("brutus"))
	{
	}
	else if (iParam0 == joaat("brutus2"))
	{
	}
	else if (iParam0 == joaat("brutus3"))
	{
	}
	else if (iParam0 == joaat("scarab"))
	{
	}
	else if (iParam0 == joaat("scarab2"))
	{
	}
	else if (iParam0 == joaat("scarab3"))
	{
	}
	else if (iParam0 == joaat("imperator"))
	{
	}
	else if (iParam0 == joaat("imperator2"))
	{
	}
	else if (iParam0 == joaat("imperator3"))
	{
	}
	else if (iParam0 == joaat("zr380"))
	{
	}
	else if (iParam0 == joaat("zr3802"))
	{
	}
	else if (iParam0 == joaat("zr3803"))
	{
	}
	else if (iParam0 == joaat("impaler"))
	{
	}
	else if (iParam0 == joaat("deveste"))
	{
		if (!Global_262145.f_26051 && iVar1 < Global_262145.f_26053)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("toros"))
	{
		if (!Global_262145.f_25064 && iVar1 < Global_262145.f_25057)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("clique"))
	{
		if (!Global_262145.f_25065 && iVar1 < Global_262145.f_25058)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("italigto"))
	{
		if (!Global_262145.f_25066 && iVar1 < Global_262145.f_25059)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("deviant"))
	{
		if (!Global_262145.f_25067 && iVar1 < Global_262145.f_25060)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("vamos"))
	{
		if (!Global_262145.f_26052 && iVar1 < Global_262145.f_26054)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tulip"))
	{
		if (!Global_262145.f_25068 && iVar1 < Global_262145.f_25061)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("schlagen"))
	{
		if (!Global_262145.f_25069 && iVar1 < Global_262145.f_25062)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("rcbandito"))
	{
		if (!Global_262145.f_25070 && iVar1 < Global_262145.f_25063)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("thrax"))
	{
		if (!Global_262145.f_25075 && iVar1 < Global_262145.f_25096)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("drafter"))
	{
		if (!Global_262145.f_25076 && iVar1 < Global_262145.f_25097)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("locust"))
	{
		if (!Global_262145.f_25077 && iVar1 < Global_262145.f_25098)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("novak"))
	{
		if (!Global_262145.f_25078 && iVar1 < Global_262145.f_25099)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("zorrusso"))
	{
		if (!Global_262145.f_25079 && iVar1 < Global_262145.f_25100)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("gauntlet3"))
	{
		if (!Global_262145.f_25080 && iVar1 < Global_262145.f_25101)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("issi7"))
	{
		if (!Global_262145.f_25081 && iVar1 < Global_262145.f_25102)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("zion3"))
	{
		if (!Global_262145.f_25082 && iVar1 < Global_262145.f_25103)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("nebula"))
	{
		if (!Global_262145.f_25083 && iVar1 < Global_262145.f_25104)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("hellion"))
	{
		if (!Global_262145.f_25084 && iVar1 < Global_262145.f_25105)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("dynasty"))
	{
		if (!Global_262145.f_25085 && iVar1 < Global_262145.f_25106)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("rrocket"))
	{
		if (!Global_262145.f_25086 && iVar1 < Global_262145.f_25107)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("peyote2"))
	{
		if (!Global_262145.f_25087 && iVar1 < Global_262145.f_25108)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("gauntlet4"))
	{
		if (!Global_262145.f_25088 && iVar1 < Global_262145.f_25109)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("caracara2"))
	{
		if (!Global_262145.f_25089 && iVar1 < Global_262145.f_25110)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("jugular"))
	{
		if (!Global_262145.f_25090 && iVar1 < Global_262145.f_25111)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("s80"))
	{
		if (!Global_262145.f_25091 && iVar1 < Global_262145.f_25112)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("krieger"))
	{
		if (!Global_262145.f_25092 && iVar1 < Global_262145.f_25113)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("emerus"))
	{
		if (!Global_262145.f_25093 && iVar1 < Global_262145.f_25114)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("neo"))
	{
		if (!Global_262145.f_25094 && iVar1 < Global_262145.f_25115)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("paragon"))
	{
		if (!Global_262145.f_25095 && iVar1 < Global_262145.f_25116)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("asbo"))
	{
		if (!Global_262145.f_27895 && iVar1 < Global_262145.f_27916)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("kanjo"))
	{
		if (!Global_262145.f_27896 && iVar1 < Global_262145.f_27917)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("everon"))
	{
		if (!Global_262145.f_27897 && iVar1 < Global_262145.f_27918)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("retinue2"))
	{
		if (!Global_262145.f_27898 && iVar1 < Global_262145.f_27919)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("yosemite2"))
	{
		if (!Global_262145.f_27899 && iVar1 < Global_262145.f_27920)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("sugoi"))
	{
		if (!Global_262145.f_27900 && iVar1 < Global_262145.f_27921)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("sultan2"))
	{
		if (!Global_262145.f_27901 && iVar1 < Global_262145.f_27922)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("outlaw"))
	{
		if (!Global_262145.f_27902 && iVar1 < Global_262145.f_27923)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("vagrant"))
	{
		if (!Global_262145.f_27903 && iVar1 < Global_262145.f_27924)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("komoda"))
	{
		if (!Global_262145.f_27904 && iVar1 < Global_262145.f_27925)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("stryder"))
	{
		if (!Global_262145.f_27905 && iVar1 < Global_262145.f_27926)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("furia"))
	{
		if (!Global_262145.f_27906 && iVar1 < Global_262145.f_27927)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("zhaba"))
	{
		if (!Global_262145.f_27907 && iVar1 < Global_262145.f_27928)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("jb7002"))
	{
		if (!Global_262145.f_27908 && iVar1 < Global_262145.f_27929)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("firetruk"))
	{
		if (!Global_262145.f_27909 && iVar1 < Global_262145.f_27930)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("burrito2"))
	{
		if (!Global_262145.f_27910 && iVar1 < Global_262145.f_27931)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("boxville"))
	{
		if (!Global_262145.f_27911 && iVar1 < Global_262145.f_27932)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("stockade"))
	{
		if (!Global_262145.f_27912 && iVar1 < Global_262145.f_27933)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("minitank"))
	{
		if (!Global_262145.f_27913 && iVar1 < Global_262145.f_27934)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("lguard"))
	{
		if (!Global_262145.f_27914 && iVar1 < Global_262145.f_27935)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("blazer2"))
	{
		if (!Global_262145.f_27915 && iVar1 < Global_262145.f_27936)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("formula"))
	{
		if ((!Global_262145.f_27938 && iVar1 < Global_262145.f_27939) && !Global_262145.f_27893)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("formula2"))
	{
		if ((!Global_262145.f_27941 && iVar1 < Global_262145.f_27942) && !Global_262145.f_27894)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("imorgon"))
	{
		if (!Global_262145.f_27946 && iVar1 < Global_262145.f_27949)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("rebla"))
	{
		if (!Global_262145.f_27947 && iVar1 < Global_262145.f_27950)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("vstr"))
	{
		if (!Global_262145.f_27948 && iVar1 < Global_262145.f_27951)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("gauntlet5"))
	{
		if (!Global_262145.f_28950 && iVar1 < Global_262145.f_28615)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("club"))
	{
		if (!Global_262145.f_28601 && iVar1 < Global_262145.f_28622)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("dukes3"))
	{
		if (!Global_262145.f_28602 && iVar1 < Global_262145.f_28608)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("yosemite3"))
	{
		if (!Global_262145.f_28948 && iVar1 < Global_262145.f_28616)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("peyote3"))
	{
		if (!Global_262145.f_28949 && iVar1 < Global_262145.f_28617)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("glendale2"))
	{
		if (!Global_262145.f_28595 && iVar1 < Global_262145.f_28614)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("penumbra2"))
	{
		if (!Global_262145.f_28596 && iVar1 < Global_262145.f_28623)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("landstalker2"))
	{
		if (!Global_262145.f_28597 && iVar1 < Global_262145.f_28613)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("seminole2"))
	{
		if (!Global_262145.f_28598 && iVar1 < Global_262145.f_28611)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tigon"))
	{
		if (!Global_262145.f_28944 && iVar1 < Global_262145.f_28618)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("openwheel1"))
	{
		if (!Global_262145.f_28945 && iVar1 < Global_262145.f_28619)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("openwheel2"))
	{
		if (!Global_262145.f_28946 && iVar1 < Global_262145.f_28620)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("coquette4"))
	{
		if (!Global_262145.f_28947 && iVar1 < Global_262145.f_28621)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("manana2"))
	{
		if (!Global_262145.f_28599 && iVar1 < Global_262145.f_28610)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("youga3"))
	{
		if (!Global_262145.f_28600 && iVar1 < Global_262145.f_28612)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("toreador"))
	{
		if (!Global_262145.f_29392 && iVar1 < Global_262145.f_29375)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("annihilator2"))
	{
		if (!Global_262145.f_29393 && iVar1 < Global_262145.f_29376)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("alkonost"))
	{
		if (!Global_262145.f_29394 && iVar1 < Global_262145.f_29377)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("patrolboat"))
	{
		if (!Global_262145.f_29395 && iVar1 < Global_262145.f_29378)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("longfin"))
	{
		if (!Global_262145.f_29396 && iVar1 < Global_262145.f_29379)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("winky"))
	{
		if (!Global_262145.f_29397 && iVar1 < Global_262145.f_29380)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("veto"))
	{
		if (!Global_262145.f_29398 && iVar1 < Global_262145.f_29381)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("veto2"))
	{
		if (!Global_262145.f_29399 && iVar1 < Global_262145.f_29382)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("italirsx"))
	{
		if (!Global_262145.f_29400 && iVar1 < Global_262145.f_29383)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("weevil"))
	{
		if (Global_262145.f_29409)
		{
		}
		else if (!Global_262145.f_29401 && iVar1 < Global_262145.f_29384)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("manchez2"))
	{
		if (!Global_262145.f_29402 && iVar1 < Global_262145.f_29385)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("slamtruck"))
	{
		if (!Global_262145.f_29403 && iVar1 < Global_262145.f_29386)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("vetir"))
	{
		if (!Global_262145.f_29404 && iVar1 < Global_262145.f_29387)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("squaddie"))
	{
		if (!Global_262145.f_29405 && iVar1 < Global_262145.f_29388)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("brioso2"))
	{
		if (Global_262145.f_29410)
		{
		}
		else if (!Global_262145.f_29406 && iVar1 < Global_262145.f_29389)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("dinghy5"))
	{
		if (!Global_262145.f_29407 && iVar1 < Global_262145.f_29390)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("verus"))
	{
		if (!Global_262145.f_29408 && iVar1 < Global_262145.f_29391)
		{
			iVar0 = 0;
		}
	}
	return iVar0;
}

int func_898()
{
	return 0;
}

int func_899()
{
	return 1;
}

int func_900()
{
	return 1;
}

int func_901()
{
	if (unk_0x95C5B896CB42B20E(-1226939934))
	{
		return 1;
	}
	return 0;
}

int func_902()
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

var func_903()
{
	var uVar0;
	
	uVar0 = func_904();
	if (!func_176())
	{
		if (func_177() != func_40())
		{
			uVar0 = func_39(func_177()) + 1;
		}
	}
	return uVar0;
}

int func_904()
{
	return func_39(unk_0x460153A63B9477BC()) + 1;
}

int func_905()
{
	return func_200(6114, -1, 0);
}

void func_906(int iParam0)
{
	if (iParam0 == 0)
	{
	}
	unk_0xCB78201804D687F2(&Global_1676263);
	func_907();
}

void func_907()
{
	struct<44> Var0;
	
	Global_1676263 = { Var0 };
	Global_1676263.f_23 = 0;
	Global_1676263.f_24 = 0;
	Global_1676263.f_16 = 0;
}

bool func_908(int iParam0)
{
	return unk_0xCE990E643CD9D0E5(Global_1590682[iParam0 /*883*/].f_274.f_351, 12);
}

bool func_909(int iParam0)
{
	return unk_0xCE990E643CD9D0E5(Global_1590682[iParam0 /*883*/].f_274.f_351, 13);
}

int func_910(int iParam0)
{
	if (iParam0 != func_40())
	{
		if ((unk_0xCE990E643CD9D0E5(Global_1590682[iParam0 /*883*/].f_274.f_259, 12) || unk_0xCE990E643CD9D0E5(Global_1590682[iParam0 /*883*/].f_274.f_259, 13)) || unk_0xCE990E643CD9D0E5(Global_1590682[iParam0 /*883*/].f_274.f_259, 14))
		{
			return 1;
		}
	}
	return 0;
}

int func_911(int iParam0)
{
	if (iParam0 != func_40())
	{
		if ((unk_0xCE990E643CD9D0E5(Global_1590682[iParam0 /*883*/].f_274.f_259, 0) || unk_0xCE990E643CD9D0E5(Global_1590682[iParam0 /*883*/].f_274.f_259, 1)) || unk_0xCE990E643CD9D0E5(Global_1590682[iParam0 /*883*/].f_274.f_259, 2))
		{
			return 1;
		}
	}
	return 0;
}

int func_912(int iParam0)
{
	if (iParam0 != func_40())
	{
		if (((((unk_0xCE990E643CD9D0E5(Global_1590682[iParam0 /*883*/].f_274.f_259, 3) || unk_0xCE990E643CD9D0E5(Global_1590682[iParam0 /*883*/].f_274.f_259, 4)) || unk_0xCE990E643CD9D0E5(Global_1590682[iParam0 /*883*/].f_274.f_259, 5)) || unk_0xCE990E643CD9D0E5(Global_1590682[iParam0 /*883*/].f_274.f_259, 0)) || unk_0xCE990E643CD9D0E5(Global_1590682[iParam0 /*883*/].f_274.f_259, 1)) || unk_0xCE990E643CD9D0E5(Global_1590682[iParam0 /*883*/].f_274.f_259, 2))
		{
			return 1;
		}
	}
	return 0;
}

int func_913(int iParam0)
{
	if (iParam0 != func_40())
	{
		if ((unk_0xCE990E643CD9D0E5(Global_1590682[iParam0 /*883*/].f_274.f_259, 6) || unk_0xCE990E643CD9D0E5(Global_1590682[iParam0 /*883*/].f_274.f_259, 7)) || unk_0xCE990E643CD9D0E5(Global_1590682[iParam0 /*883*/].f_274.f_259, 8))
		{
			return 1;
		}
	}
	return 0;
}

bool func_914(int iParam0)
{
	if (iParam0 == func_40())
	{
		return 0;
	}
	return unk_0xCE990E643CD9D0E5(Global_1590682[iParam0 /*883*/].f_274.f_351, 9);
}

void func_915(int iParam0)
{
	if (iParam0 == 0)
	{
	}
	unk_0xBFD184266AACBABA(&Global_1676200);
	func_916();
}

void func_916()
{
	struct<63> Var0;
	
	Var0.f_8 = -1;
	Var0.f_9 = -1;
	Var0.f_10 = -1;
	Var0.f_11 = -1;
	Var0.f_12 = -1;
	Var0.f_15 = -1;
	Var0.f_16 = -1;
	Var0.f_17 = -1;
	Var0.f_18 = -1;
	Var0.f_19 = -1;
	Var0.f_20 = -1;
	Var0.f_21 = -1;
	Var0.f_22 = -1;
	Var0.f_23 = -1;
	Var0.f_24 = -1;
	Var0.f_25 = -1;
	Var0.f_26 = -1;
	Var0.f_27 = -1;
	Var0.f_28 = -1;
	Var0.f_29 = -1;
	Var0.f_30 = -1;
	Var0.f_31 = -1;
	Var0.f_32 = -1;
	Var0.f_33 = -1;
	Var0.f_34 = -1;
	Var0.f_35 = -1;
	Var0.f_36 = -1;
	Var0.f_37 = -1;
	Var0.f_38 = -1;
	Var0.f_39 = -1;
	Var0.f_40 = -1;
	Var0.f_41 = -1;
	Var0.f_42 = -1;
	Var0.f_43 = -1;
	Var0.f_44 = -1;
	Var0.f_45 = -1;
	Var0.f_46 = -1;
	Var0.f_47 = -1;
	Var0.f_48 = -1;
	Var0.f_49 = -1;
	Var0.f_50 = -1;
	Var0.f_51 = -1;
	Var0.f_52 = -1;
	Var0.f_53 = -1;
	Var0.f_54 = -1;
	Var0.f_55 = -1;
	Var0.f_56 = -1;
	Var0.f_57 = -1;
	Var0.f_58 = -1;
	Var0.f_59 = -1;
	Var0.f_60 = -1;
	Var0.f_61 = -1;
	Var0.f_62 = -1;
	Global_1676200 = { Var0 };
	Global_1676200.f_24 = 0;
	Global_1676200.f_25 = 0;
	Global_1676200.f_17 = 0;
}

void func_917(int iParam0)
{
	if (iParam0 == 0)
	{
	}
	unk_0xA9913FCC3847FBA0(&Global_1676146);
	func_918();
}

void func_918()
{
	struct<54> Var0;
	
	Var0.f_8 = -1;
	Var0.f_9 = -1;
	Var0.f_10 = -1;
	Var0.f_11 = -1;
	Var0.f_12 = -1;
	Var0.f_15 = -1;
	Var0.f_16 = -1;
	Var0.f_17 = -1;
	Var0.f_18 = -1;
	Var0.f_19 = -1;
	Var0.f_20 = -1;
	Var0.f_21 = -1;
	Var0.f_22 = -1;
	Var0.f_23 = -1;
	Var0.f_24 = -1;
	Var0.f_25 = -1;
	Var0.f_26 = -1;
	Var0.f_27 = -1;
	Var0.f_28 = -1;
	Var0.f_29 = -1;
	Var0.f_30 = -1;
	Var0.f_31 = -1;
	Var0.f_32 = -1;
	Var0.f_33 = -1;
	Var0.f_34 = -1;
	Var0.f_35 = -1;
	Var0.f_36 = -1;
	Var0.f_37 = -1;
	Var0.f_38 = -1;
	Var0.f_39 = -1;
	Var0.f_40 = -1;
	Var0.f_41 = -1;
	Var0.f_42 = -1;
	Var0.f_43 = -1;
	Var0.f_44 = -1;
	Var0.f_45 = -1;
	Var0.f_46 = -1;
	Var0.f_47 = -1;
	Var0.f_48 = -1;
	Var0.f_49 = -1;
	Var0.f_50 = -1;
	Var0.f_51 = -1;
	Var0.f_52 = -1;
	Var0.f_53 = -1;
	Global_1676146 = { Var0 };
	Global_1676146.f_29 = 0;
	Global_1676146.f_30 = 0;
	Global_1676146.f_17 = 0;
}

int func_919(int iParam0, int iParam1)
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	
	bVar0 = func_326(iParam0, iParam1, 2);
	bVar1 = func_326(iParam0, iParam1, 1);
	bVar2 = func_326(iParam0, iParam1, 0);
	if ((bVar0 && bVar1) && bVar2)
	{
		return 7;
	}
	else if ((bVar1 && bVar0) && !bVar2)
	{
		return 6;
	}
	else if ((bVar2 && bVar0) && !bVar1)
	{
		return 5;
	}
	else if ((bVar2 && bVar1) && !bVar0)
	{
		return 4;
	}
	else if (bVar0)
	{
		return 3;
	}
	else if (bVar1)
	{
		return 2;
	}
	else if (bVar2)
	{
		return 1;
	}
	return 0;
}

int func_920(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	
	if (func_201(iParam0))
	{
		if (!bParam1 && bParam2)
		{
			iVar0 = Global_262145.f_17707;
		}
		else if (!bParam2)
		{
			iVar0 = Global_262145.f_17706;
		}
		else
		{
			iVar0 = Global_262145.f_17688;
		}
		iVar1 = 19;
	}
	else if (func_420(iParam0))
	{
		iVar0 = 6;
		iVar1 = 24;
	}
	else if (func_119(iParam0, 0))
	{
		if (bParam1)
		{
			iVar0 = Global_262145.f_17687;
			iVar1 = 20;
		}
	}
	else if (func_99(iParam0))
	{
		if (!bParam1 && bParam2)
		{
			iVar0 = Global_262145.f_17707;
		}
		else if (!bParam2)
		{
			iVar0 = Global_262145.f_17706;
		}
		else
		{
			iVar0 = Global_262145.f_17688;
		}
		iVar1 = 18;
	}
	if (iVar0 != 0)
	{
		unk_0xE192193881225A93(func_776(func_177()), func_775(func_177()), func_733(), func_732(), iVar1, iVar0);
	}
	func_922(iVar0);
	func_921(iVar0);
	return iVar0;
}

void func_921(int iParam0)
{
	int iVar0;
	
	iVar0 = func_200(3969, -1, 0);
	iVar0 = (iVar0 + iParam0);
	if (iVar0 < 0)
	{
		iVar0 = 0;
	}
	if (iVar0 > 9999)
	{
		iVar0 = 9999;
	}
	Global_1630317[unk_0x460153A63B9477BC() /*595*/].f_11.f_463 = iVar0;
	func_198(3969, iVar0, -1, 1, 0);
}

void func_922(int iParam0)
{
	int iVar0;
	
	iVar0 = unk_0x460153A63B9477BC();
	Global_1630317[iVar0 /*595*/].f_11.f_462 = (Global_1630317[iVar0 /*595*/].f_11.f_462 + iParam0);
	if (Global_1630317[iVar0 /*595*/].f_11.f_462 < -9999)
	{
		Global_1630317[iVar0 /*595*/].f_11.f_462 = 9999;
	}
	else if (Global_1630317[iVar0 /*595*/].f_11.f_462 > 9999)
	{
		Global_1630317[iVar0 /*595*/].f_11.f_462 = 9999;
	}
}

int func_923(bool bParam0)
{
	if (bParam0)
	{
		return 0;
	}
	if (func_143(unk_0x460153A63B9477BC()) || func_155(unk_0x460153A63B9477BC()))
	{
		return 1;
	}
	return 0;
}

void func_924(var uParam0)
{
	unk_0x07E47E394131538E(&Global_1676407);
	func_925();
}

void func_925()
{
	struct<36> Var0;
	
	Var0 = -1;
	Var0.f_1 = -1;
	Var0.f_2 = -1;
	Var0.f_3 = -1;
	Var0.f_4 = -1;
	Var0.f_5 = -1;
	Var0.f_6 = -1;
	Var0.f_7 = -1;
	Var0.f_8 = -1;
	Var0.f_9 = -1;
	Var0.f_10 = -1;
	Var0.f_11 = -1;
	Var0.f_12 = -1;
	Var0.f_13 = -1;
	Var0.f_14 = -1;
	Var0.f_15 = -1;
	Var0.f_16 = -1;
	Var0.f_17 = -1;
	Var0.f_18 = -1;
	Var0.f_19 = -1;
	Var0.f_20 = -1;
	Var0.f_21 = -1;
	Var0.f_22 = -1;
	Var0.f_23 = -1;
	Var0.f_24 = -1;
	Var0.f_25 = -1;
	Var0.f_26 = -1;
	Var0.f_27 = -1;
	Var0.f_29 = -1;
	Var0.f_30 = -1;
	Var0.f_31 = -1;
	Var0.f_32 = -1;
	Var0.f_33 = -1;
	Var0.f_34 = -1;
	Global_1676407 = { Var0 };
}

int func_926(bool bParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = -1;
	iVar1 = -1;
	if (bParam0)
	{
		iVar0 = func_497(unk_0x460153A63B9477BC());
	}
	else
	{
		iVar0 = func_102(unk_0x460153A63B9477BC());
	}
	if (iVar0 != -1)
	{
	}
	switch (iVar0)
	{
		case 236:
			iVar2 = func_931(unk_0x460153A63B9477BC());
			iVar1 = iVar2;
			break;
		
		case 150:
			iVar2 = func_929(unk_0x460153A63B9477BC());
			iVar1 = iVar2;
			break;
		
		case 237:
			iVar2 = func_928(unk_0x460153A63B9477BC());
			if (func_186(func_187(unk_0x460153A63B9477BC())))
			{
				iVar1 = 100;
			}
			else
			{
				iVar1 = 200;
			}
			iVar1 = (iVar1 + iVar2);
			break;
		
		case 250:
			iVar2 = func_928(unk_0x460153A63B9477BC());
			iVar1 = 300;
			iVar1 = (iVar1 + iVar2);
			break;
		
		case 238:
			iVar2 = func_927(unk_0x460153A63B9477BC());
			iVar1 = 400;
			iVar1 = (iVar1 + iVar2);
			break;
		
		case 249:
			iVar2 = func_927(unk_0x460153A63B9477BC());
			iVar1 = 500;
			iVar1 = (iVar1 + iVar2);
			break;
		
		case 239:
			iVar1 = 600;
			break;
		
		case 240:
			iVar1 = 700;
			break;
		
		case 241:
			iVar1 = 800;
			break;
		
		case 242:
			iVar1 = 900;
			break;
		
		case 244:
			iVar1 = 1100;
			break;
		
		case 248:
			iVar1 = 1200;
			break;
	}
	return iVar1;
}

int func_927(int iParam0)
{
	if (func_102(unk_0x460153A63B9477BC()) == 238 || func_102(unk_0x460153A63B9477BC()) == 249)
	{
		return Global_1630317[iParam0 /*595*/].f_11.f_472;
	}
	return -1;
}

int func_928(int iParam0)
{
	if (func_102(unk_0x460153A63B9477BC()) == 237 || func_102(unk_0x460153A63B9477BC()) == 250)
	{
		return Global_1630317[iParam0 /*595*/].f_11.f_471;
	}
	return -1;
}

int func_929(int iParam0)
{
	return func_930(iParam0, 150);
}

int func_930(int iParam0, int iParam1)
{
	if (func_497(iParam0) == iParam1)
	{
		return Global_1630317[iParam0 /*595*/].f_11.f_469;
	}
	return -1;
}

int func_931(int iParam0)
{
	return func_930(iParam0, 236);
}

int func_932(struct<21> Param0)
{
	func_1047(func_1048(Param0), Param0);
	unk_0xDF803FB4BC52CAF6(0);
	unk_0x628BF6B677C62F7E(func_980(157, -1, 1, -1, -1, -1));
	func_977(0, -1, 0);
	unk_0x97D2F2E2C92FD519(&Local_102, 59);
	unk_0xBB96A3ECD45D0317(&Local_103, 129);
	unk_0x3A396632EB359434(0);
	func_933(157, 0, 0);
	return 1;
}

void func_933(int iParam0, int iParam1, bool bParam2)
{
	func_976();
	if (func_57(unk_0x460153A63B9477BC()))
	{
		func_935(1);
	}
	if ((iParam0 != 0 && unk_0x166E920FB00B2DBB(iParam1)) && func_799(iParam1, 1))
	{
		switch (iParam0)
		{
			case 157:
				unk_0xBE20AB8238688965(&Global_1676114, 0);
				break;
			}
	}
	if (!func_176() && !func_81(unk_0x460153A63B9477BC(), 1))
	{
		if (func_151())
		{
			func_633(3);
		}
	}
	func_633(4);
	if (func_104(0))
	{
		Global_1630317[unk_0x460153A63B9477BC() /*595*/].f_11.f_57 = func_177();
	}
	if (func_99(iParam0))
	{
		func_918();
		Global_1676146.f_18 = func_766(func_7());
	}
	else if (func_132(func_845(unk_0x460153A63B9477BC())))
	{
		func_916();
		Global_1676200.f_18 = func_766(func_7());
	}
	if (bParam2)
	{
		if (!func_146())
		{
			func_634(1);
		}
	}
	func_934();
}

void func_934()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		Global_1366969.f_534[iVar0 /*42*/].f_1 = func_40();
		Global_1366969.f_534[iVar0 /*42*/].f_9 = 0;
		iVar0++;
	}
}

void func_935(bool bParam0)
{
	int iVar0;
	
	func_866(33);
	func_866(34);
	func_866(35);
	func_866(36);
	func_866(37);
	func_866(38);
	func_866(39);
	func_866(40);
	func_866(43);
	func_866(41);
	func_866(54);
	func_866(42);
	func_866(47);
	func_975(23);
	func_975(24);
	func_866(92);
	unk_0xD2459066EA58CE43(&(Global_2540384.f_1797), 2);
	func_974();
	func_969();
	func_964();
	func_959();
	func_948();
	func_944();
	func_940();
	func_937();
	if (bParam0)
	{
		iVar0 = 0;
		while (iVar0 < 2)
		{
			Global_2540384.f_5188.f_14[iVar0] = 0;
			iVar0++;
		}
	}
	else if (func_936(3))
	{
		func_975(3);
	}
	else if (func_936(4))
	{
		func_975(4);
	}
	else if (func_936(5))
	{
		func_975(5);
	}
	else if (func_936(6))
	{
		func_975(6);
	}
	else if (func_936(7))
	{
		func_975(7);
	}
	else if (((((((((((((((((func_936(0) || func_936(1)) || func_936(2)) || func_936(8)) || func_936(9)) || func_936(10)) || func_936(11)) || func_936(12)) || func_936(13)) || func_936(14)) || func_936(15)) || func_936(16)) || func_936(17)) || func_936(18)) || func_936(19)) || func_936(20)) || func_936(21)) || func_936(22))
	{
		func_975(8);
		func_975(0);
		func_975(1);
		func_975(2);
		func_975(9);
		func_975(10);
		func_975(11);
		func_975(12);
		func_975(13);
		func_975(14);
		func_975(15);
		func_975(16);
		func_975(17);
		func_975(18);
		func_975(19);
		func_975(20);
		func_975(21);
		func_975(22);
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < 2)
		{
			Global_2540384.f_5188.f_14[iVar0] = 0;
			iVar0++;
		}
	}
}

bool func_936(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	return unk_0xCE990E643CD9D0E5(Global_2540384.f_5188.f_14[iVar0], iVar1);
}

void func_937()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 15)
	{
		if (func_939(iVar0))
		{
			func_938(iVar0);
		}
		iVar0++;
	}
}

void func_938(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	unk_0xD2459066EA58CE43(&(Global_2540384.f_5188.f_35[iVar0]), iVar1);
}

bool func_939(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	return unk_0xCE990E643CD9D0E5(Global_2540384.f_5188.f_35[iVar0], iVar1);
}

void func_940()
{
	if (func_942())
	{
		func_941(0);
		func_941(1);
		func_941(2);
		func_941(3);
	}
}

void func_941(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	unk_0xD2459066EA58CE43(&(Global_2540384.f_5188.f_33[iVar0]), iVar1);
}

int func_942()
{
	if (((func_943(0) || func_943(1)) || func_943(2)) || func_943(3))
	{
		return 1;
	}
	return 0;
}

bool func_943(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	return unk_0xCE990E643CD9D0E5(Global_2540384.f_5188.f_33[iVar0], iVar1);
}

void func_944()
{
	if (func_946())
	{
		func_945(4);
		func_945(5);
		func_945(6);
		func_945(7);
	}
}

void func_945(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	unk_0xD2459066EA58CE43(&(Global_2540384.f_5188.f_31[iVar0]), iVar1);
}

int func_946()
{
	if (((func_947(4) || func_947(5)) || func_947(6)) || func_947(7))
	{
		return 1;
	}
	return 0;
}

bool func_947(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	return unk_0xCE990E643CD9D0E5(Global_2540384.f_5188.f_31[iVar0], iVar1);
}

void func_948()
{
	int iVar0;
	
	if (func_958())
	{
		func_957(8);
		func_957(9);
		func_957(10);
		func_957(12);
		func_957(13);
		func_957(14);
		func_957(19);
		func_957(20);
		func_957(21);
		func_957(22);
		func_957(23);
		func_957(24);
		func_957(25);
		func_957(26);
		func_957(15);
		func_957(16);
		func_957(17);
		func_957(18);
		func_957(35);
		func_957(45);
		func_957(46);
		if (func_956(11))
		{
			func_957(11);
			iVar0 = func_200(7227, -1, 0);
			unk_0xBE20AB8238688965(&iVar0, 2);
			func_198(7227, iVar0, -1, 1, 0);
		}
	}
	if (func_956(48))
	{
		if (func_954(151, 3))
		{
			func_952(151, 3);
		}
		func_957(48);
	}
	if (func_956(49))
	{
		if (func_954(152, 3))
		{
			func_952(152, 3);
		}
		func_957(49);
	}
	if (func_956(50))
	{
		if (func_954(153, 3))
		{
			func_952(153, 3);
		}
		func_957(50);
	}
	if (func_956(51))
	{
		if (func_954(func_949(), 3))
		{
			func_952(func_949(), 3);
		}
		func_957(51);
	}
}

int func_949()
{
	if (func_951())
	{
		func_950(154, Global_19681, 1);
	}
	return 154;
}

void func_950(int iParam0, int iParam1, int iParam2)
{
	if (iParam1 < 0 || iParam1 > 4)
	{
		return;
	}
	Global_1848[iParam0 /*29*/].f_24[iParam1] = iParam2;
	if (iParam0 < 162)
	{
		Global_111858.f_28046[iParam0 /*29*/].f_24[iParam1] = iParam2;
	}
}

int func_951()
{
	int iVar0;
	
	iVar0 = func_41(unk_0x460153A63B9477BC());
	if (((iVar0 != unk_0x460153A63B9477BC() && iVar0 != func_40()) && unk_0x166E920FB00B2DBB(iVar0)) && iVar0 != -1)
	{
		return 1;
	}
	return 0;
}

void func_952(int iParam0, int iParam1)
{
	int iVar0;
	
	if (Global_117[iParam0 /*10*/].f_8 != 154)
	{
		if (iParam1 > 3)
		{
		}
		else
		{
			iVar0 = iParam1;
			func_953(iParam0, iVar0, 0);
			func_950(iParam0, iVar0, 0);
		}
	}
}

void func_953(int iParam0, int iParam1, int iParam2)
{
	if (iParam1 < 0 || iParam1 > 4)
	{
		return;
	}
	Global_1848[iParam0 /*29*/].f_12[iParam1] = iParam2;
	if (iParam0 < 162)
	{
		Global_111858.f_28046[iParam0 /*29*/].f_12[iParam1] = iParam2;
	}
}

int func_954(int iParam0, int iParam1)
{
	if (func_955(iParam0, iParam1) == 1)
	{
		return 1;
	}
	return 0;
}

int func_955(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 4)
	{
		return 0;
	}
	return Global_1848[iParam0 /*29*/].f_12[iParam1];
}

bool func_956(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	return unk_0xCE990E643CD9D0E5(Global_2540384.f_5188.f_26[iVar0], iVar1);
}

void func_957(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	unk_0xD2459066EA58CE43(&(Global_2540384.f_5188.f_26[iVar0]), iVar1);
}

int func_958()
{
	if (((((((((((((((((((((func_956(8) || func_956(9)) || func_956(10)) || func_956(12)) || func_956(11)) || func_956(13)) || func_956(14)) || func_956(19)) || func_956(20)) || func_956(21)) || func_956(22)) || func_956(23)) || func_956(24)) || func_956(25)) || func_956(26)) || func_956(15)) || func_956(16)) || func_956(17)) || func_956(18)) || func_956(35)) || func_956(45)) || func_956(46))
	{
		return 1;
	}
	return 0;
}

void func_959()
{
	if (func_963())
	{
		func_962(0);
		func_962(1);
		func_962(2);
		func_962(3);
		func_962(4);
		func_962(5);
		if (func_961(32))
		{
			if (func_954(func_960(), 3))
			{
				func_952(func_960(), 3);
			}
			func_962(32);
		}
	}
}

int func_960()
{
	if (func_951())
	{
		func_950(12, Global_19681, 1);
	}
	return 12;
}

bool func_961(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	return unk_0xCE990E643CD9D0E5(Global_2540384.f_5188.f_23[iVar0], iVar1);
}

void func_962(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	unk_0xD2459066EA58CE43(&(Global_2540384.f_5188.f_23[iVar0]), iVar1);
}

int func_963()
{
	if ((((func_961(1) || func_961(0)) || func_961(2)) || func_961(4)) || func_961(5))
	{
		return 1;
	}
	return 0;
}

void func_964()
{
	if (func_968())
	{
		func_967(0);
		func_967(1);
		func_967(2);
		func_967(3);
		func_967(4);
		func_967(5);
		func_967(6);
		func_967(7);
		if (func_966(8))
		{
			func_967(8);
		}
		if (func_966(15))
		{
			if (func_954(func_965(), 3))
			{
				func_952(func_965(), 3);
			}
			func_967(15);
		}
	}
}

int func_965()
{
	if (func_951())
	{
		func_950(20, Global_19681, 1);
	}
	return 20;
}

bool func_966(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	return unk_0xCE990E643CD9D0E5(Global_2540384.f_5188.f_21[iVar0], iVar1);
}

void func_967(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	unk_0xD2459066EA58CE43(&(Global_2540384.f_5188.f_21[iVar0]), iVar1);
}

int func_968()
{
	if ((((((((func_966(0) || func_966(1)) || func_966(2)) || func_966(3)) || func_966(4)) || func_966(5)) || func_966(6)) || func_966(7)) || func_966(8))
	{
		return 1;
	}
	return 0;
}

void func_969()
{
	if (func_973())
	{
		func_972(0);
		func_972(1);
		func_972(2);
		func_972(3);
		func_972(4);
		func_972(5);
		func_972(6);
		func_972(7);
		func_972(8);
		func_972(9);
		func_972(10);
		func_972(11);
		func_972(12);
		if (func_971(13))
		{
			if (func_954(func_970(), 3))
			{
				func_952(func_970(), 3);
			}
			func_972(13);
		}
	}
}

int func_970()
{
	if (func_951())
	{
		func_950(76, Global_19681, 1);
	}
	return 76;
}

bool func_971(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	return unk_0xCE990E643CD9D0E5(Global_2540384.f_5188.f_19[iVar0], iVar1);
}

void func_972(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	unk_0xD2459066EA58CE43(&(Global_2540384.f_5188.f_19[iVar0]), iVar1);
}

int func_973()
{
	if ((((((((((((func_971(0) || func_971(1)) || func_971(2)) || func_971(3)) || func_971(4)) || func_971(5)) || func_971(6)) || func_971(7)) || func_971(8)) || func_971(9)) || func_971(10)) || func_971(11)) || func_971(12))
	{
		return 1;
	}
	return 0;
}

void func_974()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 1)
	{
		Global_2540384.f_5188.f_17[iVar0] = 0;
		iVar0++;
	}
}

void func_975(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	unk_0xD2459066EA58CE43(&(Global_2540384.f_5188.f_14[iVar0]), iVar1);
}

void func_976()
{
	struct<14> Var0;
	
	Global_1676128 = { Var0 };
	Global_1676128.f_14 = 0;
	Global_1676128.f_15 = 0;
}

int func_977(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = unk_0x361B374A50D875B4();
	while (iVar0 != 2)
	{
		if (((iVar0 == 3 || iVar0 == 4) || iVar0 == 5) || iVar0 == 6)
		{
			if (!bParam2)
			{
				func_979();
			}
			else
			{
				return 0;
			}
		}
		if (!func_978())
		{
			if (iParam0 == 0)
			{
				if (!unk_0x25DDB354A40FFCDB())
				{
					if (!bParam2)
					{
						func_979();
					}
					else
					{
						return 0;
					}
				}
				if (func_817())
				{
					if (!bParam2)
					{
						func_979();
					}
					else
					{
						return 0;
					}
				}
				if (func_815(157))
				{
					if (!bParam2)
					{
						func_979();
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
					func_979();
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
				func_979();
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
			func_979();
		}
		else
		{
			return 0;
		}
	}
	return 1;
}

bool func_978()
{
	return Global_1312872;
}

void func_979()
{
	unk_0xD39E529EBE5DB04F();
}

int func_980(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)
{
	switch (iParam0)
	{
		case 148:
		case 152:
		case 162:
		case 160:
		case 163:
			return 0;
		
		case 157:
			return 4;
		
		case 167:
			return func_1046(iParam1);
		
		case 170:
			return 2;
		
		case 171:
			return 0;
		
		case 172:
			return 5;
		
		case 173:
			return 14;
		
		case 168:
			return 8;
		
		case 178:
		case 188:
			return func_1042(iParam1, iParam3, iParam4);
		
		case 225:
		case 226:
			return func_1035(iParam1, iParam3, iParam4, 0, 0);
		
		case 227:
			return 0;
		
		case 229:
		case 230:
			return func_1020(iParam1, iParam3, iParam4, unk_0xF1110FE23C67293A(iParam5), 0, 0, 0);
		
		case 233:
			return func_1010(iParam1, iParam3, iParam4, unk_0xF1110FE23C67293A(iParam5), 0, 0, 0);
			return 6;
		
		case 190:
			return 18;
		
		case 191:
			return 0;
		
		case 192:
			return func_1005(iParam1, iParam3);
		
		case 179:
			return 0;
		
		case 183:
			return 5;
		
		case 182:
			return 14;
		
		case 185:
			return 24;
		
		case 186:
			return 13;
		
		case 180:
			return 6;
		
		case 193:
			return 6;
		
		case 194:
			return 0;
		
		case 197:
			return 4;
		
		case 199:
			return 0;
		
		case 195:
			return 20;
		
		case 201:
			return 0;
		
		case 198:
			return 8;
		
		case 205:
			return 1;
		
		case 207:
			return 8;
		
		case 208:
			return 2;
		
		case 209:
			return 6;
		
		case 210:
			return 0;
		
		case 214:
			return 5;
		
		case 215:
			return 11;
		
		case 216:
			return 8;
		
		case 217:
			return 24;
		
		case 218:
			return 23;
		
		case 219:
			return 1;
		
		case 220:
			return 4;
		
		case 221:
			return 4;
		
		case 237:
		case 250:
			return func_1003(iParam1, iParam3, iParam4);
		
		case 238:
		case 249:
			return func_1002(iParam1);
		
		case 239:
			return 4;
		
		case 240:
			return 11;
		
		case 241:
			return 3;
		
		case 242:
			return 5;
		
		case 244:
			return 4;
		
		case 248:
			return 1;
		
		case 243:
			return func_994(iParam1, iParam3, unk_0xF1110FE23C67293A(iParam5), 0, -1, 0, 0);
		
		case 158:
			return func_987(iParam1, iParam3, unk_0xF1110FE23C67293A(iParam5), 0, -1, 0, 0);
		
		case 181:
			return func_981(iParam1, iParam3, unk_0xF1110FE23C67293A(iParam5), 0, -1, 0, 0);
		
		default:
	}
	return 0;
}

int func_981(int iParam0, int iParam1, int iParam2, bool bParam3, int iParam4, bool bParam5, bool bParam6)
{
	int iVar0;
	
	switch (iParam0)
	{
		case 0:
			iVar0 = iVar0;
			break;
	}
	if (!bParam5)
	{
		iVar0 = (iVar0 + func_986(iParam0, -1));
	}
	if (!bParam6)
	{
		if (func_985(0, iParam1) != -1)
		{
			iVar0 = (iVar0 + func_984(func_39(iParam2) + 1, iParam0, iParam2));
		}
	}
	if (!bParam3)
	{
		if (func_983(iParam0, iParam1))
		{
			iVar0 = (iVar0 + func_982(iParam0, iParam1));
		}
	}
	return iVar0;
}

int func_982(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 2:
			return 2;
		
		default:
	}
	return 0;
}

bool func_983(int iParam0, int iParam1)
{
	return func_982(iParam0, iParam1) > 0;
}

int func_984(var uParam0, int iParam1, int iParam2)
{
	switch (iParam1)
	{
		case 2:
			return 3;
		
		default:
	}
	return 1;
}

int func_985(int iParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
			switch (iParam0)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				default:
			}
			break;
	}
	return -1;
}

int func_986(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 2:
			return 0;
		
		default:
	}
	return 0;
}

int func_987(int iParam0, int iParam1, int iParam2, bool bParam3, int iParam4, bool bParam5, bool bParam6)
{
	int iVar0;
	
	switch (iParam0)
	{
		case 0:
			iVar0++;
			break;
		
		case 24:
			iVar0++;
			break;
		
		case 10:
			switch (iParam1)
			{
				case 30:
					iVar0 += 4;
					break;
				
				case 31:
				case 32:
					iVar0 += 3;
					break;
			}
			break;
		
		case 33:
			switch (iParam1)
			{
				case 89:
					iVar0++;
					break;
				
				case 90:
					iVar0 += 2;
					break;
			}
			break;
		
		case 36:
			iVar0 += 2;
			break;
		
		case 37:
			iVar0 += 2;
			break;
		
		case 38:
			iVar0++;
			break;
		
		case 8:
			iVar0 += 7;
			break;
		
		case 13:
			switch (iParam1)
			{
				case 38:
					iVar0 += 3;
					break;
				
				case 39:
					iVar0 += 3;
					break;
				
				case 40:
					iVar0 += 4;
					break;
			}
			break;
		
		case 16:
			iVar0 += 12;
			break;
		
		case 35:
			iVar0 += 4;
			break;
		
		case 4:
			iVar0 += 16;
			break;
		
		case 46:
			iVar0++;
			break;
		
		case 9:
			iVar0 += 7;
			break;
		
		case 14:
			iVar0 += 7;
			break;
		
		case 17:
			iVar0 += 7;
			break;
		
		case 47:
			iVar0 += 2;
			break;
		
		case 11:
			iVar0 += 3;
			break;
		
		case 18:
			iVar0 += 4;
			break;
		
		case 6:
			iVar0 += 11;
			break;
		
		case 48:
			iVar0 += 2;
			break;
		
		case 44:
			iVar0 += 2;
			break;
		
		case 21:
			iVar0 += 8;
			break;
		
		case 22:
			iVar0 += 3;
			break;
		
		case 7:
			iVar0 += 7;
			break;
		
		case 15:
			iVar0++;
			break;
		
		case 2:
			iVar0++;
			break;
		
		case 34:
			iVar0 += 5;
			break;
		
		case 27:
			iVar0 += 9;
			break;
		
		case 26:
			iVar0 += 3;
			break;
		
		case 31:
			iVar0++;
			break;
		
		case 3:
			iVar0 += 21;
			break;
		
		case 12:
			iVar0 += 20;
			break;
		
		case 41:
			iVar0 += 11;
			break;
		
		case 49:
			iVar0 += 3;
			break;
		
		case 29:
			iVar0++;
			break;
		
		case 5:
			iVar0 += 3;
			break;
		
		case 50:
			iVar0 += 4;
			break;
		
		case 23:
			iVar0 += 4;
			break;
		
		case 20:
			iVar0 += 3;
			break;
		
		case 32:
			iVar0 = iVar0;
			break;
		
		case 51:
			iVar0 += 4;
			break;
		
		case 52:
			iVar0 += 6;
			break;
		
		case 39:
			iVar0 += 2;
			break;
		
		case 40:
			iVar0++;
			break;
		
		case 25:
			iVar0 += 3;
			break;
	}
	if (!bParam5)
	{
		iVar0 = (iVar0 + func_993(iParam0, -1));
	}
	if (!bParam6)
	{
		if (func_992(0, iParam1) != -1)
		{
			iVar0 = (iVar0 + func_990(func_39(iParam2) + 1, iParam0, iParam2));
		}
	}
	if (!bParam3)
	{
		if (func_989(iParam0, iParam1))
		{
			iVar0 = (iVar0 + func_988(iParam0, iParam1));
		}
	}
	return iVar0;
}

int func_988(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
		case 13:
		case 18:
		case 34:
		case 27:
		case 49:
		case 48:
		case 6:
		case 50:
		case 7:
		case 16:
		case 47:
		case 5:
		case 25:
		case 26:
		case 22:
		case 11:
		case 17:
		case 14:
			return 2;
		
		default:
	}
	return 0;
}

bool func_989(int iParam0, int iParam1)
{
	return func_988(iParam0, iParam1) > 0;
}

int func_990(int iParam0, int iParam1, int iParam2)
{
	struct<3> Var0;
	
	Var0 = -1;
	Var0.f_1 = -1;
	Var0.f_2 = -1;
	switch (iParam1)
	{
		case 43:
			return 3;
		
		case 17:
		case 18:
		case 15:
			return 2;
		
		case 12:
		case 13:
			if (iParam2 != func_40())
			{
				if (func_81(iParam2, 1))
				{
					Var0 = { func_991(iParam2) };
				}
			}
			else
			{
				return 4;
			}
			if (Var0.f_1 == 4)
			{
				return 4;
			}
			else
			{
				return 2;
			}
			break;
		
		case 53:
			if (iParam0 == 1)
			{
			}
			break;
	}
	return 1;
}

Vector3 func_991(int iParam0)
{
	return Global_1630317[iParam0 /*595*/].f_11.f_302;
}

int func_992(int iParam0, int iParam1)
{
	switch (iParam1)
	{
		case 96:
		case 97:
		case 98:
		case 108:
		case 109:
		case 110:
		case 118:
		case 119:
		case 120:
		case 105:
		case 106:
		case 107:
			return 0;
		
		case 66:
		case 67:
		case 68:
		case 30:
		case 31:
		case 32:
		case 121:
		case 122:
		case 123:
			return 1;
		
		case 93:
		case 94:
		case 95:
			return 3;
		
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
			return 1;
		
		case 116:
		case 117:
			return 2;
		
		case 20:
			return 9;
		
		case 21:
			return 5;
		
		case 27:
		case 28:
		case 29:
			return 7;
		
		case 114:
		case 115:
			return iParam0;
		
		case 46:
		case 47:
		case 48:
			switch (iParam0)
			{
				case 0:
					return 2;
				
				case 1:
					return 3;
				
				case 2:
					return 4;
				
				case 3:
					return 5;
				
				default:
			}
			break;
		
		case 38:
		case 39:
		case 40:
			switch (iParam0)
			{
				case 0:
					return 3;
				
				case 1:
					return 4;
				
				case 2:
					return 5;
				
				case 3:
					return 6;
				
				default:
			}
			break;
		
		case 41:
		case 42:
			switch (iParam0)
			{
				case 0:
					return 5;
				
				case 1:
					return 6;
				
				default:
			}
			break;
		
		case 49:
		case 50:
			switch (iParam0)
			{
				case 0:
					return 7;
				
				case 1:
					return 8;
				
				default:
			}
			break;
		
		case 33:
		case 34:
		case 35:
			switch (iParam0)
			{
				case 0:
				case 1:
					return 3;
				
				default:
			}
			break;
		
		case 51:
		case 52:
			switch (iParam0)
			{
				case 0:
					return 1;
				
				case 1:
					return 2;
				
				default:
			}
			break;
		
		case 43:
		case 44:
		case 45:
			switch (iParam0)
			{
				case 0:
					return 1;
				
				case 1:
					return 2;
				
				default:
			}
			break;
		
		case 36:
		case 37:
			switch (iParam0)
			{
				case 0:
					return 20;
				
				case 1:
					return 21;
				
				case 2:
					return 22;
				
				case 3:
					return 23;
				
				default:
			}
			break;
		
		case 17:
		case 18:
		case 19:
			return 3;
		
		case 131:
			return 4;
	}
	return -1;
}

int func_993(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 53:
			return 0;
		
		default:
	}
	return 0;
}

int func_994(int iParam0, int iParam1, int iParam2, bool bParam3, int iParam4, bool bParam5, bool bParam6)
{
	int iVar0;
	
	switch (iParam0)
	{
		case 13:
			iVar0 += 4;
			break;
		
		case 1:
			iVar0 += 10;
			break;
		
		case 15:
			iVar0 += 21;
			break;
		
		case 14:
			iVar0 += 2;
			break;
		
		case 11:
			switch (iParam1)
			{
				case 35:
					iVar0 += 4;
					break;
				
				case 36:
					iVar0 += 5;
					break;
				
				case 37:
					iVar0 += 5;
					break;
			}
			break;
		
		case 5:
			iVar0 += 3;
			break;
		
		case 6:
			iVar0 += 2;
			break;
		
		case 0:
			switch (iParam1)
			{
				case 0:
					iVar0 += 5;
					break;
				
				case 1:
					iVar0 += 5;
					break;
			}
			break;
		
		case 10:
			switch (iParam1)
			{
				case 31:
					iVar0 += 2;
					break;
				
				case 32:
					iVar0++;
					break;
				
				case 33:
					iVar0 += 2;
					break;
				
				case 34:
					iVar0 += 2;
					break;
			}
			break;
		
		case 12:
			iVar0 += 3;
			break;
		
		case 9:
			switch (iParam1)
			{
				case 28:
					switch (iParam4)
					{
						case 0:
							iVar0 += 3;
							break;
						
						case 1:
							iVar0 += 4;
							break;
						
						case 2:
							iVar0 += 3;
							break;
					}
					break;
				
				case 29:
					switch (iParam4)
					{
						case 0:
							iVar0 += 4;
							break;
						
						case 1:
							iVar0 += 3;
							break;
						
						case 2:
							iVar0 += 3;
							break;
					}
					break;
				
				case 30:
					switch (iParam4)
					{
						case 0:
							iVar0 += 3;
							break;
						
						case 1:
							iVar0 += 3;
							break;
						
						case 2:
							iVar0 += 3;
							break;
					}
					break;
			}
			break;
		
		case 3:
			iVar0 += 6;
			break;
		
		case 4:
			switch (iParam1)
			{
				case 12:
					iVar0 += 7;
					break;
				
				case 13:
					iVar0 += 10;
					break;
				
				case 14:
					iVar0 += 8;
					break;
			}
			break;
		
		case 2:
			iVar0 += 3;
			break;
		
		case 8:
			iVar0 = iVar0;
			break;
		
		case 7:
			iVar0++;
			break;
	}
	if (!bParam5)
	{
		if (func_1001(iParam0))
		{
			iVar0 = (iVar0 + func_1000(iParam0, iParam2));
		}
		iVar0 = (iVar0 + func_999(iParam0, -1));
	}
	if (!bParam6)
	{
		if (func_998(0, iParam1) != -1)
		{
			iVar0 = (iVar0 + func_997(func_39(iParam2) + 1, iParam0));
		}
	}
	if (!bParam3)
	{
		if (func_996(iParam0, iParam1))
		{
			iVar0 = (iVar0 + func_995(iParam0, iParam1));
		}
	}
	return iVar0;
}

int func_995(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 4:
		case 9:
		case 8:
			return 2;
		
		default:
	}
	switch (iParam1)
	{
		case 37:
			return 2;
		
		default:
	}
	return 0;
}

bool func_996(int iParam0, int iParam1)
{
	return func_995(iParam0, iParam1) > 0;
}

int func_997(int iParam0, int iParam1)
{
	switch (iParam1)
	{
		case 6:
			if (iParam0 == 1)
			{
				return 1;
			}
			else
			{
				return 2;
			}
			break;
	}
	return 1;
}

int func_998(int iParam0, int iParam1)
{
	switch (iParam1)
	{
		case 46:
		case 47:
		case 48:
			switch (iParam0)
			{
				case 0:
					return 20;
				
				default:
			}
			break;
		
		case 35:
		case 36:
		case 37:
			return 0;
		
		case 2:
		case 3:
		case 4:
		case 5:
			return 0;
		
		case 28:
		case 29:
		case 30:
			return 0;
		
		case 18:
		case 19:
		case 20:
		case 21:
			switch (iParam0)
			{
				case 0:
					return 2;
				
				case 1:
					return 3;
				
				default:
			}
			break;
		
		case 31:
		case 32:
		case 33:
		case 34:
			return 0;
		
		case 38:
		case 39:
		case 40:
			return 0;
		
		case 12:
			return 6;
		
		case 13:
			return 9;
		
		case 14:
			return 7;
		
		case 22:
		case 23:
		case 24:
			return 0;
		
		case 25:
		case 26:
		case 27:
			return 0;
	}
	return -1;
}

int func_999(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 16:
			return 0;
		
		default:
	}
	return 0;
}

int func_1000(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 14:
		case 5:
		case 0:
		case 3:
		case 2:
			return 0;
		
		case 6:
			if (func_39(iParam1) + 1 == 1)
			{
				return 1;
			}
			else
			{
				return 2;
			}
			break;
	}
	return 1;
}

int func_1001(int iParam0)
{
	return 0;
}

int func_1002(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 5;
		
		case 1:
			return 4;
		
		case 2:
			return 6;
		
		case 3:
			return 1;
		
		case 4:
			return 3;
		
		case 5:
			return 4;
		
		default:
	}
	return 0;
}

int func_1003(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	switch (iParam0)
	{
		case 12:
			switch (iParam1)
			{
				case 80:
					iVar0++;
					break;
				
				case 81:
					iVar0++;
					break;
				
				case 82:
					iVar0++;
					break;
			}
			break;
		
		case 22:
			iVar0 += 4;
			break;
		
		case 18:
			iVar0 += 4;
			break;
		
		case 9:
			switch (iParam1)
			{
				case 71:
				case 72:
				case 73:
					iVar0 += 3;
					break;
			}
			break;
		
		case 11:
			switch (iParam1)
			{
				case 77:
				case 78:
				case joaat("MPSV_LP0_31"):
					iVar0 += 2;
					break;
			}
			break;
		
		case 15:
			iVar0++;
			break;
		
		case 23:
			iVar0++;
			break;
		
		case 20:
			iVar0 += 4;
			break;
		
		case 17:
			iVar0++;
			break;
		
		case 19:
			iVar0++;
			break;
		
		case 16:
			iVar0++;
			break;
		
		case 3:
			iVar0 += 8;
			break;
		
		case 14:
			iVar0++;
			break;
		
		case 10:
			iVar0 += 8;
			break;
		
		case 4:
		case 24:
		case 2:
			iVar0++;
			break;
		
		case 1:
			iVar0 += 5;
			break;
		
		case 5:
			iVar0 += 3;
			break;
		
		case 0:
			iVar0 += 3;
			break;
	}
	if (func_1004(iParam0))
	{
		iVar0 = (iVar0 + iParam2);
	}
	return iVar0;
}

int func_1004(int iParam0)
{
	return 1;
}

int func_1005(int iParam0, int iParam1)
{
	int iVar0;
	
	switch (iParam0)
	{
		case 20:
			iVar0 = iVar0;
			break;
		
		case 0:
			switch (iParam1)
			{
				case 1:
					iVar0 += 7;
					break;
				
				case 2:
					iVar0 += 6;
					break;
				
				case 3:
					iVar0 += 4;
					break;
				
				case 4:
					iVar0 += 2;
					break;
				
				case 5:
					iVar0 += 3;
					break;
				
				case 6:
					iVar0 += 2;
					break;
			}
			break;
		
		case 1:
			switch (iParam1)
			{
				case 7:
					iVar0 += 4;
					break;
				
				case 8:
					iVar0 += 4;
					break;
				
				case 9:
					iVar0 += 2;
					break;
				
				case 10:
					iVar0 += 2;
					break;
				
				case 11:
					iVar0 += 2;
					break;
				
				case 12:
					iVar0 += 4;
					break;
			}
			break;
		
		case 2:
			switch (iParam1)
			{
				case 13:
					iVar0 += 2;
					break;
				
				case 14:
					iVar0 += 4;
					break;
				
				case 15:
					iVar0 += 6;
					break;
				
				case 16:
					iVar0 += 3;
					break;
				
				case 17:
					iVar0 += 3;
					break;
				
				case 18:
					iVar0 += 2;
					break;
			}
			break;
		
		case 4:
			switch (iParam1)
			{
				case 19:
					iVar0 += 5;
					break;
				
				case 20:
					iVar0 += 4;
					break;
				
				case 21:
					iVar0 += 6;
					break;
				
				case 22:
					iVar0 += 2;
					break;
				
				case 23:
					iVar0 += 4;
					break;
				
				case 24:
					iVar0 += 5;
					break;
			}
			break;
		
		case 6:
			switch (iParam1)
			{
				case 19:
					iVar0 += 5;
					break;
				
				case 20:
					iVar0 += 4;
					break;
				
				case 21:
					iVar0 += 6;
					break;
				
				case 22:
					iVar0 += 2;
					break;
				
				case 23:
					iVar0 += 4;
					break;
				
				case 24:
					iVar0 += 5;
					break;
			}
			break;
		
		case 5:
			switch (iParam1)
			{
				case 31:
					iVar0 += 5;
					break;
				
				case 32:
					iVar0 += 2;
					break;
				
				case 33:
					iVar0 += 3;
					break;
				
				case 34:
					iVar0 += 5;
					break;
				
				case 35:
					iVar0 += 5;
					break;
				
				case 36:
					iVar0 += 5;
					break;
			}
			break;
		
		case 9:
			switch (iParam1)
			{
				case 68:
					iVar0 = iVar0;
					break;
				
				case 69:
					iVar0 = iVar0;
					break;
				
				case 70:
					iVar0 = iVar0;
					break;
				
				case 71:
					iVar0 = iVar0;
					break;
				
				case 72:
					iVar0 = iVar0;
					break;
				
				case 73:
					iVar0 = iVar0;
					break;
			}
			break;
		
		case 3:
			switch (iParam1)
			{
				case 74:
					iVar0++;
					break;
				
				case 75:
					iVar0++;
					break;
				
				case 76:
					iVar0++;
					break;
				
				case 77:
					iVar0++;
					break;
			}
			break;
		
		case 10:
			switch (iParam1)
			{
				case 78:
					iVar0 = iVar0;
					break;
				
				case joaat("MPSV_LP0_31"):
					iVar0 = iVar0;
					break;
				
				case 80:
					iVar0 = iVar0;
					break;
				
				case 81:
					iVar0 = iVar0;
					break;
				
				case 82:
					iVar0 = iVar0;
					break;
				
				case 83:
					iVar0 = iVar0;
					break;
				
				case 84:
					iVar0 = iVar0;
					break;
			}
			break;
		
		case 7:
			iVar0 += 4;
			break;
		
		case 8:
			switch (iParam1)
			{
				case 62:
					iVar0 += 6;
					break;
				
				case 63:
					iVar0 += 6;
					break;
				
				case 64:
					iVar0 += 6;
					break;
				
				case 65:
					iVar0 += 6;
					break;
				
				case 66:
					iVar0 += 6;
					break;
				
				case 67:
					iVar0 += 6;
					break;
			}
			break;
		
		case 11:
			switch (iParam1)
			{
				case 85:
					iVar0 = iVar0;
					break;
				
				case 86:
					iVar0 = iVar0;
					break;
				
				case 87:
					iVar0 = iVar0;
					break;
				
				case 88:
					iVar0 = iVar0;
					break;
				
				case 89:
					iVar0 = iVar0;
					break;
			}
			break;
		
		case 12:
			switch (iParam1)
			{
				case 90:
					iVar0 += 2;
					break;
				
				case 91:
					iVar0 += 2;
					break;
				
				case 92:
					iVar0 += 2;
					break;
				
				case 93:
					iVar0 += 2;
					break;
				
				case 94:
					iVar0 += 2;
					break;
			}
			break;
		
		case 13:
			switch (iParam1)
			{
				case 37:
					iVar0 += 3;
					break;
			}
			break;
		
		case 14:
			switch (iParam1)
			{
				case 38:
					iVar0 += 4;
					break;
				
				case 39:
					iVar0 += 4;
					break;
				
				case 40:
					iVar0 += 4;
					break;
				
				case 41:
					iVar0 += 4;
					break;
			}
			break;
		
		case 15:
			iVar0 = iVar0;
			break;
		
		case 16:
			iVar0 = iVar0;
			break;
		
		case 17:
			iVar0 = iVar0;
			break;
		
		case 18:
			iVar0 = iVar0;
			break;
		
		case 19:
			iVar0 = iVar0;
			break;
		
		default:
			iVar0 = iVar0;
			break;
	}
	if ((func_1009(iParam0) && iParam0 != 7) || iParam0 == 12)
	{
		iVar0 = (iVar0 + func_1006(iParam0, func_361() + 1));
	}
	return iVar0;
}

int func_1006(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (func_552(iParam0))
	{
		iVar0 = 1;
	}
	else
	{
		if (iVar0 == 0)
		{
			iVar0 = iParam1;
			iVar1 = func_1008(iParam0, iParam1);
			iVar2 = func_1007(iParam0);
			if (iVar0 > iVar1)
			{
				iVar0 = iVar1;
			}
			else if (iVar0 < iVar2)
			{
				iVar0 = iVar2;
			}
		}
		if (func_1009(iParam0))
		{
			if (iVar0 > Global_262145.f_17922)
			{
				iVar0 = Global_262145.f_17922;
			}
		}
		else
		{
			if (iVar0 < Global_262145.f_17921)
			{
				iVar0 = Global_262145.f_17921;
			}
			if (iVar0 > Global_262145.f_17920)
			{
				iVar0 = Global_262145.f_17920;
			}
		}
	}
	return iVar0;
}

int func_1007(int iParam0)
{
	switch (iParam0)
	{
		case 5:
			return Global_262145.f_17959;
		
		case 10:
			return Global_262145.f_17984;
		
		default:
	}
	return 1;
}

int func_1008(int iParam0, int iParam1)
{
	if (func_1009(iParam0))
	{
		if (iParam1 >= Global_262145.f_17923)
		{
			return 2;
		}
		return 1;
	}
	switch (iParam0)
	{
		case 5:
			return Global_262145.f_17960;
		
		case 10:
			return Global_262145.f_17985;
		
		default:
	}
	return 8;
}

int func_1009(int iParam0)
{
	switch (iParam0)
	{
		case 14:
		case 32:
		case 0:
		case 2:
		case 4:
		case 18:
		case 6:
		case 5:
		case 10:
		case 12:
		case 13:
			return 0;
		
		default:
	}
	return 1;
}

int func_1010(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6)
{
	int iVar0;
	
	switch (iParam0)
	{
		case 0:
			iVar0 = iVar0;
			break;
		
		case 1:
			iVar0 += 5;
			break;
		
		case 2:
			iVar0 += 2;
			break;
		
		case 3:
			iVar0++;
			break;
		
		case 4:
			iVar0 += 3;
			break;
		
		case 5:
			iVar0 += 2;
			break;
		
		case 8:
			iVar0 += 3;
			break;
		
		case 6:
			iVar0++;
			break;
		
		case 12:
			iVar0 += 2;
			break;
		
		case 7:
			iVar0 += 6;
			break;
		
		case 9:
			iVar0 = iVar0;
			break;
		
		case 11:
			iVar0 = iVar0;
			break;
		
		case 13:
			iVar0 += 2;
			break;
		
		case 10:
			iVar0 += 4;
			break;
	}
	if (!bParam5)
	{
		if (func_1019(iParam0))
		{
			if (iParam3 != func_40())
			{
				iVar0 = (iVar0 + func_1016(iParam0, func_39(iParam3) + 1, iParam3, -1, iParam2));
			}
		}
		if (iParam3 != func_40())
		{
			iVar0 = (iVar0 + func_1015(iParam0, func_39(iParam3) + 1));
		}
	}
	if (!bParam6)
	{
		if (func_1014(0, iParam1) != -1)
		{
			if (iParam3 != func_40())
			{
				iVar0 = (iVar0 + func_1013(func_39(iParam3) + 1, iParam0));
			}
		}
	}
	if (!bParam4)
	{
		if (func_1012(iParam0))
		{
			iVar0 = (iVar0 + func_1011(iParam0));
		}
	}
	return iVar0;
}

int func_1011(int iParam0)
{
	switch (iParam0)
	{
		case 0:
		case 2:
		case 8:
		case 1:
		case 12:
		case 10:
		case 11:
		case 13:
			return 2;
		
		default:
	}
	return 0;
}

bool func_1012(int iParam0)
{
	return func_1011(iParam0) > 0;
}

int func_1013(var uParam0, int iParam1)
{
	return 2;
}

int func_1014(int iParam0, int iParam1)
{
	switch (iParam1)
	{
		case 136:
			switch (iParam0)
			{
				case 0:
					return 1;
				
				case 1:
					return 1;
				
				case 2:
					return 2;
				
				case 3:
					return 2;
				
				default:
			}
			break;
	}
	return -1;
}

int func_1015(int iParam0, int iParam1)
{
	int iVar0;
	
	switch (iParam0)
	{
		case 0:
			return 0;
		
		case 8:
			if (iParam1 > 4)
			{
				return 4;
			}
			return iParam1;
		
		case 1:
			iVar0 = func_200(5327, -1, 0);
			if (unk_0xCE990E643CD9D0E5(iVar0, 7))
			{
				if (iParam1 > 4)
				{
					return 4;
				}
				return iParam1;
			}
			else
			{
				return 0;
			}
			break;
	}
	return 0;
}

int func_1016(int iParam0, var uParam1, int iParam2, int iParam3, int iParam4)
{
	int iVar0;
	
	if (iParam4 > 0)
	{
		return iParam4;
	}
	switch (iParam0)
	{
		case 5:
		case 7:
		case 6:
		case 4:
		case 10:
			iVar0 = 1;
			break;
		
		case 8:
			iVar0 = 2;
			break;
		
		case 3:
		case 2:
			iVar0 = 4;
			break;
		
		default:
			if (func_1019(iParam0))
			{
				iVar0 = 2;
			}
			else
			{
				iVar0 = 1;
			}
			break;
	}
	if (iVar0 > func_1018(iParam0))
	{
		iVar0 = func_1018(iParam0);
	}
	else if (iVar0 < func_1017(iParam0))
	{
		iVar0 = func_1017(iParam0);
	}
	return iVar0;
}

int func_1017(int iParam0)
{
	return 1;
}

int func_1018(int iParam0)
{
	return 4;
}

int func_1019(int iParam0)
{
	switch (iParam0)
	{
		case 3:
		case 2:
		case 4:
		case 5:
		case 6:
		case 7:
		case 10:
			return 1;
		
		default:
	}
	return 0;
}

int func_1020(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6)
{
	int iVar0;
	
	switch (iParam0)
	{
		case 11:
			iVar0 += 9;
			break;
		
		case 1:
			iVar0 = iVar0;
			break;
		
		case 7:
			iVar0 += 10;
			break;
		
		case 2:
			iVar0 += 12;
			break;
		
		case 4:
			iVar0 += 10;
			break;
		
		case 8:
			iVar0++;
			break;
		
		case 5:
			iVar0 += 2;
			break;
		
		case 12:
			switch (iParam1)
			{
				case 0:
					iVar0++;
					break;
				
				case 1:
					iVar0++;
					break;
				
				case 2:
					iVar0 = iVar0;
					break;
			}
			break;
		
		case 14:
			switch (iParam1)
			{
				case 3:
					iVar0 += 4;
					break;
				
				case 4:
					iVar0 += 2;
					break;
				
				case 5:
					iVar0 += 5;
					break;
			}
			break;
		
		case 3:
			if (iParam2 >= 4)
			{
				iVar0 += 10;
			}
			else if (iParam2 == 3)
			{
				iVar0 += 8;
			}
			else if (iParam2 == 2)
			{
				iVar0 += 7;
			}
			else if (iParam2 == 1)
			{
				iVar0 += 6;
			}
			break;
		
		case 10:
			switch (iParam1)
			{
				case 34:
					iVar0++;
					break;
			}
			break;
		
		case 9:
			switch (iParam1)
			{
				case 6:
					iVar0++;
					break;
				
				case 7:
					iVar0 += 4;
					break;
				
				case 8:
					iVar0 += 2;
					break;
			}
			break;
		
		case 0:
			if (iParam2 >= 3)
			{
				iVar0 += 2;
			}
			else
			{
				iVar0++;
			}
			break;
		
		case 23:
			iVar0 = (iVar0 + iParam2);
			break;
		
		case 20:
			iVar0 += 5;
			break;
		
		case 22:
			iVar0 = (iVar0 + (5 * iParam2));
			break;
		
		case 25:
			iVar0 = (iVar0 + iParam2);
			break;
		
		case 24:
			iVar0 = (iVar0 + (3 * iParam2));
			break;
		
		case 16:
			iVar0 = (iVar0 + (5 * iParam2));
			break;
		
		case 17:
			iVar0 += 5;
			break;
		
		case 26:
			iVar0++;
			break;
	}
	if (!bParam5)
	{
		if (func_1034(iParam0))
		{
			if (iParam3 != func_40())
			{
				iVar0 = (iVar0 + func_1027(iParam0, func_39(iParam3) + 1, iParam3, -1, iParam2));
			}
		}
		if (iParam3 != func_40())
		{
			iVar0 = (iVar0 + func_1026(iParam0, func_39(iParam3) + 1));
		}
	}
	if (!bParam6)
	{
		if (func_1025(0, iParam1) != -1)
		{
			if (iParam3 != func_40())
			{
				iVar0 = (iVar0 + func_1023(func_39(iParam3) + 1, iParam0));
			}
		}
	}
	if (!bParam4)
	{
		if (func_1022(iParam0))
		{
			iVar0 = (iVar0 + func_1021(iParam0));
		}
	}
	return iVar0;
}

int func_1021(int iParam0)
{
	switch (iParam0)
	{
		case 12:
		case 11:
		case 1:
		case 2:
		case 14:
		case 4:
		case 10:
		case 7:
		case 3:
		case 8:
		case 0:
		case 5:
			return 2;
		
		case 21:
		case 16:
		case 17:
			return 2;
		
		default:
	}
	return 0;
}

bool func_1022(int iParam0)
{
	return func_1021(iParam0) > 0;
}

int func_1023(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 1:
			if (func_1024(iParam1))
			{
				return 1;
			}
			else
			{
				return 1;
			}
			break;
		
		case 2:
			if (func_1024(iParam1))
			{
				return 1;
			}
			else
			{
				return 1;
			}
			break;
		
		case 3:
			if (func_1024(iParam1))
			{
				return 2;
			}
			else
			{
				return 2;
			}
			break;
		
		case 4:
			if (func_1024(iParam1))
			{
				return 2;
			}
			else
			{
				return 2;
			}
			break;
		
		case 5:
			if (func_1024(iParam1))
			{
				return 2;
			}
			else
			{
				return 2;
			}
			break;
		
		case 6:
			if (func_1024(iParam1))
			{
				return 2;
			}
			else
			{
				return 2;
			}
			break;
		
		case 7:
			if (func_1024(iParam1))
			{
				return 2;
			}
			else
			{
				return 2;
			}
			break;
		
		case 8:
			if (func_1024(iParam1))
			{
				return 2;
			}
			else
			{
				return 2;
			}
			break;
	}
	return 1;
}

int func_1024(int iParam0)
{
	switch (iParam0)
	{
		case 12:
			return 1;
		
		default:
	}
	return 0;
}

int func_1025(int iParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
			switch (iParam0)
			{
				case 0:
					return 1;
				
				case 1:
					return 1;
				
				case 2:
					return 2;
				
				case 3:
					return 2;
				
				default:
			}
			break;
		
		case 1:
			switch (iParam0)
			{
				case 0:
					return 1;
				
				case 1:
					return 1;
				
				case 2:
					return 2;
				
				case 3:
					return 2;
				
				default:
			}
			break;
		
		case 2:
			switch (iParam0)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 1;
				
				case 3:
					return 1;
				
				default:
			}
			break;
		
		case 19:
			switch (iParam0)
			{
				case 0:
					return 12;
				
				case 1:
					return 12;
				
				case 2:
					return 13;
				
				case 3:
					return 13;
				
				default:
			}
			break;
		
		case 20:
			switch (iParam0)
			{
				case 0:
					return 12;
				
				case 1:
					return 12;
				
				case 2:
					return 13;
				
				case 3:
					return 13;
				
				default:
			}
			break;
		
		case 21:
			switch (iParam0)
			{
				case 0:
					return 12;
				
				case 1:
					return 12;
				
				case 2:
					return 13;
				
				case 3:
					return 13;
				
				default:
			}
			break;
		
		case 6:
			switch (iParam0)
			{
				case 0:
					return 1;
				
				case 1:
					return 1;
				
				case 2:
					return 2;
				
				case 3:
					return 2;
				
				default:
			}
			break;
		
		case 7:
			switch (iParam0)
			{
				case 0:
					return 4;
				
				case 1:
					return 4;
				
				case 2:
					return 5;
				
				case 3:
					return 5;
				
				default:
			}
			break;
		
		case 8:
			switch (iParam0)
			{
				case 0:
					return 2;
				
				case 1:
					return 2;
				
				case 2:
					return 3;
				
				case 3:
					return 3;
				
				default:
			}
			break;
		
		case 48:
		case 49:
		case 50:
			switch (iParam0)
			{
				case 0:
					return 2;
				
				case 1:
					return 2;
				
				case 2:
					return 3;
				
				case 3:
					return 3;
				
				default:
			}
			break;
		
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
			switch (iParam0)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 1;
				
				case 3:
					return 1;
				
				default:
			}
			break;
		
		case 28:
		case 29:
		case 30:
			switch (iParam0)
			{
				case 0:
					return 6;
				
				case 1:
					return 7;
				
				case 2:
					return 8;
				
				case 3:
					return 9;
				
				default:
			}
			break;
		
		case 43:
		case 44:
		case 45:
		case 46:
		case 47:
			switch (iParam0)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 1;
				
				case 3:
					return 1;
				
				default:
			}
			break;
		
		case 40:
		case 41:
		case 42:
			switch (iParam0)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 0;
				
				case 3:
					return 0;
				
				default:
			}
			break;
	}
	return -1;
}

int func_1026(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 1:
			if (iParam1 > 4)
			{
				return 2;
			}
			return 1;
		
		case 14:
			if (iParam1 > 3)
			{
				return 2;
			}
			return 1;
		
		case 7:
			if (iParam1 > 4)
			{
				return 4;
			}
			return iParam1;
		
		case 2:
		case 4:
		case 3:
			if (iParam1 > 4)
			{
				return 4;
			}
			return iParam1;
		
		case 10:
			if (iParam1 > 4)
			{
				return 2;
			}
			return 1;
		
		case 9:
			return 1;
		
		case 0:
			if (iParam1 > 1)
			{
				return 2;
			}
			return 1;
		
		case 8:
			if (iParam1 > 3)
			{
				return 2;
			}
			return 1;
		
		case 5:
			if (iParam1 > 2)
			{
				return 2;
			}
			return 1;
		
		case 13:
			if (iParam1 > 4)
			{
				return 4;
			}
			return iParam1;
		
		case 11:
			if (iParam1 > 2)
			{
				return 2;
			}
			return 1;
		
		default:
	}
	return ceil((IntToFloat(iParam1) / 2f));
}

int func_1027(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	int iVar0;
	int iVar1;
	
	if (iParam4 > 0)
	{
		return iParam4;
	}
	if (func_1033(iParam0))
	{
		iVar1 = func_1032(iParam3);
		switch (iParam0)
		{
			case 21:
				iVar0 = 1;
				break;
			
			case 23:
				switch (iVar1)
				{
					case 1:
						iVar0 = 1;
						break;
					
					case 2:
						iVar0 = 2;
						break;
					
					case 3:
						iVar0 = 2;
						break;
				}
				break;
			
			case 15:
				switch (iVar1)
				{
					case 1:
						iVar0 = 3;
						break;
					
					case 2:
						iVar0 = 6;
						break;
					
					case 3:
						iVar0 = 8;
						break;
				}
				break;
			
			case 20:
			case 24:
			case 22:
			case 16:
			case 17:
				switch (iVar1)
				{
					case 1:
						iVar0 = 1;
						break;
					
					case 2:
						iVar0 = 2;
						break;
					
					case 3:
						iVar0 = 3;
						break;
				}
				break;
			
			case 25:
				switch (iVar1)
				{
					case 1:
						iVar0 = 2;
						break;
					
					case 2:
						iVar0 = 3;
						break;
					
					case 3:
						iVar0 = 3;
						break;
				}
				break;
		}
		return iVar0;
	}
	else if (func_1031(iParam0))
	{
		iVar0 = 1;
		return iVar0;
	}
	else
	{
		iVar0 = iParam1;
		if (iVar0 > func_1030(iParam2))
		{
			iVar0 = func_1030(iParam2);
		}
	}
	if (iVar0 > func_1029(iParam0))
	{
		iVar0 = func_1029(iParam0);
	}
	else if (iVar0 < func_1028(iParam0))
	{
		iVar0 = func_1028(iParam0);
	}
	return iVar0;
}

int func_1028(int iParam0)
{
	switch (iParam0)
	{
		case 15:
			return 3;
		
		default:
	}
	return 1;
}

int func_1029(int iParam0)
{
	if (!func_1033(iParam0))
	{
		if (func_1034(iParam0))
		{
			if (func_1024(iParam0))
			{
				return 2;
			}
			return 3;
		}
	}
	else
	{
		switch (iParam0)
		{
			case 21:
				return 1;
			
			case 23:
				return 2;
			
			case 15:
				return 9;
			
			default:
		}
		return 3;
	}
	return 4;
}

int func_1030(int iParam0)
{
	if (iParam0 == func_40() || Global_1590682[iParam0 /*883*/].f_274.f_264 == 0)
	{
		return 50;
	}
	return (50 - Global_1590682[iParam0 /*883*/].f_274.f_264.f_3);
}

int func_1031(int iParam0)
{
	switch (iParam0)
	{
		case 26:
			return 1;
		
		default:
	}
	return 0;
}

int func_1032(int iParam0)
{
	if (iParam0 > 25)
	{
		return 3;
	}
	else if (iParam0 > 10)
	{
		return 2;
	}
	return 1;
}

int func_1033(int iParam0)
{
	switch (iParam0)
	{
		case 15:
		case 16:
		case 17:
		case 18:
		case 19:
		case 20:
		case 21:
		case 22:
		case 23:
		case 24:
		case 25:
			return 1;
		
		default:
	}
	return 0;
}

int func_1034(int iParam0)
{
	if (func_1033(iParam0) || func_1031(iParam0))
	{
		return 1;
	}
	return 0;
}

int func_1035(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	
	switch (iParam0)
	{
		case 0:
			iVar0 = iVar0;
			break;
		
		case 1:
			switch (iParam1)
			{
				case 0:
					iVar0 += 3;
					break;
				
				case 1:
					iVar0 += 3;
					break;
				
				case 2:
					iVar0 += 3;
					break;
			}
			break;
		
		case 2:
			if (iParam2 >= 4)
			{
				iVar0 = (iVar0 + iParam2 + 2);
			}
			else
			{
				iVar0 += 5;
			}
			break;
		
		case 3:
			switch (iParam1)
			{
				case 9:
					iVar0 += 3;
					break;
				
				case 10:
					iVar0 += 3;
					break;
				
				case 11:
					iVar0 += 2;
					break;
				
				case 12:
					iVar0 += 2;
					break;
			}
			break;
		
		case 4:
			switch (iParam1)
			{
				case 14:
					iVar0 += 2;
					break;
				
				case 15:
					iVar0 += 4;
					break;
				
				case 13:
					iVar0 += 2;
					break;
			}
			break;
		
		case 5:
			iVar0 += 4;
			break;
		
		case 6:
			switch (iParam1)
			{
				case 19:
					iVar0 += 5;
					break;
				
				case 20:
					iVar0 += 5;
					break;
				
				case 21:
					iVar0 += 5;
					break;
			}
			break;
		
		case 7:
			switch (iParam1)
			{
				case 22:
					iVar0 += 4;
					break;
				
				case 23:
					iVar0 += 3;
					break;
				
				case 24:
					iVar0 += 3;
					break;
			}
			if (func_1040(iParam0, func_361() + 1, -1, iParam2) == 1)
			{
				iVar0++;
			}
			break;
		
		case 8:
			switch (iParam1)
			{
				case 25:
					iVar0 += 5;
					break;
				
				case 26:
					iVar0 += 5;
					break;
			}
			break;
		
		case 9:
			switch (iParam1)
			{
				case 27:
					iVar0 += 2;
					break;
				
				case 28:
					iVar0 += 2;
					break;
			}
			break;
		
		case 10:
			switch (iParam1)
			{
				case 29:
					iVar0 += 4;
					break;
				
				case 30:
					iVar0 += 4;
					break;
				
				case 31:
					iVar0 += 4;
					break;
			}
			break;
		
		case 11:
			switch (iParam1)
			{
				case 32:
					iVar0 += 2;
					break;
				
				case 33:
					iVar0 += 2;
					break;
				
				case 34:
					iVar0 += 2;
					break;
			}
			break;
		
		case 12:
			iVar0 = iVar0;
			break;
		
		case 13:
			switch (iParam1)
			{
				case 35:
					iVar0 += 3;
					break;
				
				case 36:
					iVar0 += 3;
					break;
				
				case 37:
					iVar0 += 2;
					break;
			}
			break;
		
		case 14:
			iVar0 += 8;
			break;
		
		case 15:
			iVar0 = iVar0;
			break;
		
		case 16:
			iVar0 = iVar0;
			break;
		
		case 17:
			iVar0 = iVar0;
			break;
		
		case 19:
			iVar0 = iVar0;
			break;
		
		case 18:
			iVar0 = (iVar0 + iParam2);
			break;
		
		case 20:
			iVar0 += 5;
			break;
	}
	if (!bParam4)
	{
		if (func_1039(iParam0))
		{
			iVar0 = (iVar0 + func_1040(iParam0, func_361() + 1, -1, iParam2));
		}
		iVar0 = (iVar0 + func_1038(iParam0, func_361() + 1));
	}
	if (!bParam3)
	{
		if (func_1037(iParam0))
		{
			iVar0 = (iVar0 + func_1036(iParam0));
		}
	}
	return iVar0;
}

int func_1036(int iParam0)
{
	switch (iParam0)
	{
		case 1:
		case 2:
		case 4:
		case 5:
		case 6:
		case 7:
		case 9:
		case 10:
		case 11:
		case 12:
		case 13:
		case 15:
		case 16:
		case 17:
		case 19:
		case 8:
			return 2;
		
		default:
	}
	return 0;
}

bool func_1037(int iParam0)
{
	return func_1036(iParam0) > 0;
}

int func_1038(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 2:
			if (iParam1 == 1)
			{
				return 1;
			}
			return floor((IntToFloat(iParam1) / 1.5f));
		
		case 5:
			if (iParam1 == 1)
			{
				return 1;
			}
			return floor((IntToFloat(iParam1) / 2f));
		
		default:
	}
	return 0;
}

int func_1039(int iParam0)
{
	switch (iParam0)
	{
		case 0:
		case 3:
		case 6:
		case 7:
		case 10:
		case 11:
		case 12:
		case 14:
		case 15:
		case 16:
		case 17:
		case 19:
		case 18:
			return 1;
		
		default:
	}
	return 0;
}

int func_1040(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	if (iParam3 > 0)
	{
		return iParam3;
	}
	if (func_1041(iParam0))
	{
		if (iParam2 <= Global_262145.f_21216)
		{
			iVar0 = 1;
			if (iParam0 == 15)
			{
				iVar0 = 2;
			}
		}
		else if (iParam2 <= Global_262145.f_21217)
		{
			iVar0 = 2;
			if (iParam0 == 18)
			{
				iVar0 = 1;
			}
		}
		else
		{
			iVar0 = 3;
			if (iParam0 == 18)
			{
				iVar0 = 2;
			}
			else if (iParam0 == 19 || iParam0 == 2)
			{
				iVar0 = 4;
			}
		}
	}
	else if (iParam0 == 8)
	{
		if (iParam1 < 4)
		{
			iVar0 = 1;
		}
		else
		{
			iVar0 = 2;
		}
	}
	else if (iParam0 == 0 || iParam0 == 20)
	{
		iVar0 = 1;
	}
	else if (func_1039(iParam0))
	{
		if (iParam1 < Global_262145.f_21176)
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
		iVar0 = iParam1;
	}
	if (iVar0 == 0)
	{
		iVar0 = 1;
	}
	return iVar0;
}

int func_1041(int iParam0)
{
	switch (iParam0)
	{
		case 14:
		case 15:
		case 16:
		case 17:
		case 18:
		case 19:
			return 1;
		
		default:
	}
	return 0;
}

int func_1042(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	switch (iParam0)
	{
		case 0:
			iVar0 = iVar0;
			break;
		
		case 1:
			iVar0 = iVar0;
			break;
		
		case 7:
			iVar0 = iVar0;
			break;
		
		case 8:
			iVar0 = iVar0;
			break;
		
		case 5:
			iVar0 = iVar0;
			break;
		
		case 11:
			iVar0 += 3;
			break;
		
		case 13:
			iVar0 = iVar0;
			break;
		
		case 4:
			switch (iParam1)
			{
				case 1:
					iVar0 += 2;
					break;
				
				case 2:
					iVar0 += 2;
					break;
				
				case 3:
					iVar0 += 2;
					break;
			}
			break;
		
		case 6:
			switch (iParam1)
			{
				case 18:
					iVar0 += 2;
					break;
				
				case 19:
					iVar0 += 2;
					break;
				
				case 20:
					iVar0 += 2;
					break;
			}
			break;
		
		case 10:
			switch (iParam1)
			{
				case 21:
					iVar0 += 7;
					break;
				
				case 22:
					iVar0 += 7;
					break;
				
				case 23:
					iVar0 += 7;
					break;
			}
			break;
		
		case 9:
			switch (iParam1)
			{
				case 27:
					iVar0 = iVar0;
					break;
				
				case 28:
					iVar0 = iVar0;
					break;
				
				case 29:
					iVar0 = iVar0;
					break;
			}
			break;
		
		case 3:
			switch (iParam1)
			{
				case 30:
					iVar0 += 2;
					break;
				
				case 31:
					iVar0 += 2;
					break;
				
				case 32:
					iVar0 += 2;
					break;
			}
			break;
		
		case 14:
			switch (iParam1)
			{
				case 36:
					iVar0 += 7;
					break;
				
				case 37:
					iVar0 += 7;
					break;
				
				case 38:
					iVar0 += 7;
					break;
			}
			break;
		
		case 2:
			switch (iParam1)
			{
				case 39:
					iVar0 += 4;
					break;
				
				case 40:
					iVar0 += 4;
					break;
				
				case 41:
					iVar0 += 6;
					break;
			}
			break;
		
		case 17:
			switch (iParam1)
			{
				case 42:
					iVar0 += 2;
					break;
				
				case 43:
					iVar0 += 2;
					break;
				
				case 44:
					iVar0 += 2;
					break;
			}
			break;
		
		case 15:
			switch (iParam1)
			{
				case 45:
					iVar0 += 6;
					break;
				
				case 46:
					iVar0 += 6;
					break;
				
				case 47:
					iVar0 += 6;
					break;
			}
			break;
		
		case 16:
			switch (iParam1)
			{
				case 48:
					iVar0 += 2;
					break;
				
				case 49:
					iVar0 += 2;
					break;
				
				case 50:
					iVar0 += 2;
					break;
			}
			break;
		
		case 12:
			iVar0 += 11;
			break;
	}
	iVar0 = (iVar0 + func_1045(iParam0, func_361() + 1, iParam2));
	iVar0 = (iVar0 + func_1043(iParam0));
	return iVar0;
}

int func_1043(int iParam0)
{
	if (func_1044(iParam0))
	{
		return 2;
	}
	return 0;
}

int func_1044(int iParam0)
{
	switch (iParam0)
	{
		case 7:
		case 2:
		case 9:
		case 4:
		case 17:
		case 15:
		case 16:
		case 8:
		case 10:
			return 1;
		
		default:
	}
	return 0;
}

int func_1045(int iParam0, var uParam1, int iParam2)
{
	int iVar0;
	
	if (iVar0 == 0)
	{
		if (iParam0 == 8)
		{
			iVar0 = iParam2;
		}
		else
		{
			iVar0 = 1;
		}
	}
	if (iVar0 == 0)
	{
		iVar0 = 1;
	}
	return iVar0;
}

int func_1046(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 1;
		
		case 1:
			return 1;
		
		case 2:
			return 0;
		
		case 3:
			return 3;
		
		case 4:
			return 8;
		
		case 5:
			return 3;
		
		case 6:
			return 1;
		
		case 7:
			return 1;
		
		case 8:
			return 6;
		
		case 9:
			return 6;
		
		case 10:
			return 3;
		
		case 11:
			return 3;
		
		case 12:
			return 2;
		
		case 13:
			return 1;
		
		case 14:
			return 3;
		
		case 15:
			return 5;
		
		case 16:
			return 6;
		
		case 17:
			return 2;
		
		case 19:
			return 4;
		
		case 18:
			return 5;
		
		default:
	}
	return 2;
}

void func_1047(int iParam0, struct<17> Param1, var uParam2, var uParam3, var uParam4, var uParam5)
{
	if (!unk_0x25DDB354A40FFCDB())
	{
		func_979();
	}
	unk_0xA88557896B79E30D(iParam0, 0, Param1.f_16);
}

int func_1048(int iParam0)
{
	switch (iParam0)
	{
		case 3:
			return 2;
		
		case 1:
			return 32;
		
		case 32:
			return 32;
		
		case 33:
			return 32;
		
		case 34:
			return 32;
		
		case 35:
			return 32;
		
		case 36:
			return 32;
		
		case 37:
			return 32;
		
		case 38:
			return 32;
		
		case 39:
			return 32;
		
		case 40:
			return 32;
		
		case 41:
			return 32;
		
		case 42:
			return 32;
		
		case 43:
			return 32;
		
		case 44:
			return 32;
		
		case 45:
			return 32;
		
		case 46:
			return 32;
		
		case 47:
			return 32;
		
		case 48:
			return 32;
		
		case 49:
			return 32;
		
		case 50:
			return 4;
		
		case 51:
			return 32;
		
		case 52:
			return 32;
		
		case 53:
			return 32;
		
		case 54:
			return 32;
		
		case 55:
			return 32;
		
		case 56:
			return 32;
		
		case 57:
			return 32;
		
		case 58:
			return 32;
		
		case 59:
			return 32;
		
		case 60:
			return 32;
		
		case 61:
			return 32;
		
		case 62:
			return 32;
		
		case 63:
			return 32;
		
		case 64:
			return 4;
		
		case 65:
			return 32;
		
		case 66:
			return 4;
		
		case 67:
			return 4;
		
		case 68:
			return 32;
		
		case 69:
			return 32;
		
		case 70:
			return 4;
		
		case 71:
			return 32;
		
		case 72:
			return 32;
		
		case 73:
		case 74:
			return 4;
		
		case 75:
			return 32;
		
		case 76:
			return 32;
		
		case 77:
			return 32;
		
		case 78:
			return 32;
		
		case joaat("MPSV_LP0_31"):
			return 32;
		
		case 80:
			return 32;
		
		case 81:
			return 32;
		
		case 82:
			return 32;
		
		case 84:
			return 32;
		
		case 83:
			return 32;
		
		case 85:
			return 32;
		
		case 86:
			return 8;
		
		case 87:
			return 32;
		
		case 88:
			return 32;
		
		case 89:
			return 32;
		
		case 90:
			return 32;
		
		case 91:
			return 8;
		
		case 92:
			return 32;
		
		case 93:
			return 8;
		
		case 94:
			return 8;
		
		case 102:
			return 8;
		
		case 95:
			return 8;
		
		case 96:
			return 32;
		
		case 97:
			return 32;
		
		case 98:
			return 32;
		
		case 99:
			return 8;
		
		case 100:
			return 32;
		
		case 101:
			return 32;
		
		case 103:
			return 32;
		
		case 104:
			return 32;
		
		case 105:
			return 32;
		
		case 106:
			return 8;
		
		case 107:
			return 8;
		
		case 108:
			return 8;
		
		case 109:
			return 8;
		
		case 110:
			return 8;
		
		case 111:
			return 8;
		
		case 112:
			return 8;
		
		case 113:
			return 8;
		
		case 114:
			return 32;
		
		case 115:
			return 8;
		
		case 116:
			return 8;
		
		case 117:
			return 8;
		
		case 118:
			return 8;
		
		case 119:
			return 32;
		
		case 120:
			return 32;
		
		case 121:
			return 32;
		
		case 122:
			return 32;
		
		case 123:
			return 8;
		
		case 124:
			return 8;
		
		case 125:
			return 8;
		
		case 126:
			return 8;
		
		case 127:
			return 32;
		
		case 128:
			return 32;
		
		case 129:
			return 32;
		
		case 130:
			return 8;
		
		case 131:
			return 8;
		
		case 132:
			return 32;
		
		case 133:
			return 32;
		
		case 12:
			return 32;
		
		case 4:
			return 16;
		
		case 13:
			return 32;
		
		case 5:
			return 16;
		
		case 6:
			return 2;
		
		case 8:
			return 2;
		
		case 9:
			return 2;
		
		case 7:
			return 16;
		
		case 10:
			return 2;
		
		case 11:
			return 4;
		
		case 15:
			return 32;
		
		case 16:
			return 32;
		
		case 27:
			return 2;
		
		case 25:
			return 2;
		
		case 26:
			return 2;
		
		case 18:
			return 32;
		
		case 28:
			return 32;
		
		case 29:
			return 2;
		
		case 30:
			return 32;
		
		case 31:
			return 32;
		
		case 17:
			return 2;
		
		case 134:
			return 32;
		
		case 135:
			return 32;
		
		case 19:
			return 32;
		
		case 22:
			return 32;
		
		case 23:
			return 32;
		
		case 24:
			return 32;
		
		case 20:
			return 2;
		
		case 0:
			return 0;
		
		case 21:
			return 32;
		
		case 146:
			return 32;
		
		case 147:
			return 32;
		
		case 136:
			return 32;
		
		case 137:
			return 32;
		
		case 141:
			return 32;
		
		case 139:
			return 32;
		
		case 140:
			return 32;
		
		case 144:
			return 32;
		
		case 145:
			return 32;
		
		case 142:
			return 32;
		
		case 143:
			return 32;
		
		case 148:
			return 32;
		
		case 149:
			return 32;
		
		case 150:
			return 32;
		
		case 151:
			return 32;
		
		case 152:
			return 2;
		
		case 157:
			return 1;
		
		case 153:
			return 2;
		
		case 154:
			return 4;
		
		case 155:
			return 2;
		
		case 156:
			return 2;
		
		case 138:
			return 1;
		
		case 158:
			return 2;
		
		case 159:
		case 160:
		case 161:
		case 162:
		case 163:
		case 164:
			return 0;
		
		case 180:
			return 1;
		
		case 165:
			return 4;
		
		case 168:
			return 4;
		
		case 169:
			return 1;
		
		case 170:
			return 1;
		
		case 176:
			return 1;
		
		case 172:
			return 2;
		
		case 177:
			return 1;
		
		case 173:
			return 1;
		
		case 171:
			return 2;
		
		case 174:
			return 8;
		
		case 175:
			return 8;
		
		case 178:
			return 1;
		
		case 179:
			return 2;
		
		case 166:
			return 16;
		
		case 167:
			return 32;
		
		default:
	}
	return 0;
}

