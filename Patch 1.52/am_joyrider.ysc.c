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
	struct<11> Local_61 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_62 = 0;
	struct<3> Local_63[32];
	int iLocal_64 = 0;
	var uLocal_65 = 0;
	var uLocal_66 = 0;
	var uLocal_67 = 0;
	int iLocal_68 = 0;
	int iLocal_69 = 0;
	int iLocal_70 = 0;
	int iLocal_71 = 0;
	int iLocal_72 = 0;
	struct<21> Local_73 = { 0, -1, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, -1, -1 } ;
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
	iLocal_69 = 20;
	if (unk_0x25DDB354A40FFCDB() && func_71(unk_0x460153A63B9477BC(), 0, 1))
	{
		func_64(ScriptParam_73);
	}
	else
	{
		func_60();
	}
	while (true)
	{
		func_59();
		if (func_48() || func_44(9))
		{
			func_60();
		}
		if (unk_0xD0E70037A973A810())
		{
			func_60();
		}
		switch (func_43(unk_0x59E2AD1A8ACEDA31()))
		{
			case 0:
				if (func_42() == 1)
				{
					func_41();
					Local_63[unk_0x59E2AD1A8ACEDA31() /*3*/] = 1;
				}
				else if (func_42() == 4)
				{
					Local_63[unk_0x59E2AD1A8ACEDA31() /*3*/] = 3;
				}
				break;
			
			case 1:
				if (func_42() == 1)
				{
					func_39();
				}
				else if (func_42() == 4)
				{
					Local_63[unk_0x59E2AD1A8ACEDA31() /*3*/] = 3;
				}
				break;
			
			case 3:
				func_37(&(Local_61.f_10));
				if (func_36(&(Local_61.f_10)))
				{
					Local_63[unk_0x59E2AD1A8ACEDA31() /*3*/] = 4;
				}
				break;
			
			case 2:
				Local_63[unk_0x59E2AD1A8ACEDA31() /*3*/] = 4;
			
			case 4:
				func_60();
				break;
		}
		if (unk_0xAFF96FDC3971E7EA())
		{
			switch (func_42())
			{
				case 0:
					if (func_35())
					{
						if (func_8())
						{
							Local_61 = 1;
						}
					}
					break;
				
				case 1:
					func_7();
					func_6();
					if (func_1())
					{
						Local_61 = 4;
					}
					break;
				
				case 4:
					break;
				}
		}
	}
}

int func_1()
{
	if (func_2())
	{
		return 1;
	}
	return 0;
}

int func_2()
{
	if (Local_61.f_9 == 0)
	{
		if (!func_4(Local_61.f_2))
		{
			return 1;
		}
		else if (func_3(Local_61.f_3))
		{
			return 1;
		}
		else
		{
			if (iLocal_72 == 1)
			{
				if (unk_0xCE990E643CD9D0E5(Local_61.f_1, 0))
				{
					return 1;
				}
			}
			if (!unk_0xE0B3BC41DDA88DF0(unk_0x3C6C6327BA564AEE(Local_61.f_3), unk_0x770D3B2B4702434A(Local_61.f_2), 0))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_3(var uParam0)
{
	if (unk_0xF7DE07F319727299(uParam0))
	{
		return unk_0x5AEB5DDFFAD43CA5(unk_0x3C6C6327BA564AEE(uParam0));
	}
	return 1;
}

int func_4(var uParam0)
{
	if (unk_0xF7DE07F319727299(uParam0))
	{
		return !func_5(unk_0x770D3B2B4702434A(uParam0));
	}
	return 0;
}

int func_5(int iParam0)
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

void func_6()
{
	switch (Local_61.f_9)
	{
		case 0:
			break;
		
		case 1:
			break;
	}
}

void func_7()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (iLocal_71 == 0)
	{
		iLocal_72 = 0;
		unk_0xBE20AB8238688965(&(Local_61.f_1), 0);
	}
	if (func_4(Local_61.f_2))
	{
		iVar0 = 1;
	}
	if (unk_0xBD09DF93F957A0CF(unk_0x628A51AC66E80772(iLocal_71)))
	{
		iVar1 = unk_0x9019589211A13B02(unk_0x628A51AC66E80772(iLocal_71));
		iVar2 = unk_0x1FA7B77001D60F9D(iVar1);
		if (func_71(iVar1, 1, 1))
		{
			if (unk_0xCE990E643CD9D0E5(Local_61.f_1, 0))
			{
				if (iVar0 == 1)
				{
					if (unk_0x910DFF8E55ABB8EC(iVar2, unk_0x770D3B2B4702434A(Local_61.f_2), 250f, 250f, 250f, 0, 1, 0))
					{
						unk_0xD2459066EA58CE43(&(Local_61.f_1), 0);
					}
				}
				else
				{
					unk_0xD2459066EA58CE43(&(Local_61.f_1), 0);
				}
			}
		}
	}
	iLocal_71++;
	if (iLocal_71 == unk_0xEFA28384DDD283E1())
	{
		iLocal_71 = 0;
		iLocal_72 = 1;
	}
}

int func_8()
{
	if (unk_0xB597185B810C7743(1, 1, 0, 0))
	{
		if (func_34(Local_61.f_4) && func_34(Local_61.f_5))
		{
			if (func_12() && func_9())
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_9()
{
	int iVar0;
	
	if ((!unk_0xF7DE07F319727299(Local_61.f_3) && func_34(Local_61.f_5)) && unk_0xF7DE07F319727299(Local_61.f_2))
	{
		if (func_4(Local_61.f_2))
		{
			if (func_11(&(Local_61.f_3), Local_61.f_2, 22, Local_61.f_5, -1, 1, 1, 1))
			{
				unk_0xD93D982926D0D8B3(unk_0x3C6C6327BA564AEE(Local_61.f_3), 0);
				if (func_10())
				{
					unk_0xD3D9D7C84656DAE5(unk_0x3C6C6327BA564AEE(Local_61.f_3), Global_1575008);
				}
				else
				{
					unk_0xD3D9D7C84656DAE5(unk_0x3C6C6327BA564AEE(Local_61.f_3), Global_1575011);
				}
				unk_0xCBA6B2B569DCAFD8(unk_0x3C6C6327BA564AEE(Local_61.f_3), 1);
				if (func_10())
				{
					iVar0 = unk_0x344C570D6F8700DF(0, 10);
					if (iVar0 < 5)
					{
						unk_0xEB879F62C8DFA9E2(unk_0x3C6C6327BA564AEE(Local_61.f_3), joaat("weapon_pistol"), 25000, func_10());
					}
					else if (iVar0 > 6)
					{
						unk_0xEB879F62C8DFA9E2(unk_0x3C6C6327BA564AEE(Local_61.f_3), joaat("weapon_microsmg"), 25000, func_10());
					}
					else
					{
						unk_0xEB879F62C8DFA9E2(unk_0x3C6C6327BA564AEE(Local_61.f_3), joaat("weapon_pumpshotgun"), 25000, func_10());
					}
				}
				iVar0 = unk_0x344C570D6F8700DF(0, 10);
				if (iVar0 == 0 || iVar0 == 1)
				{
					unk_0x3EA9EB775DF15E76(unk_0x3C6C6327BA564AEE(Local_61.f_3), 0);
				}
				else if ((iVar0 == 2 || iVar0 == 3) || iVar0 == 4)
				{
					unk_0x3EA9EB775DF15E76(unk_0x3C6C6327BA564AEE(Local_61.f_3), 2);
				}
				else
				{
					unk_0x3EA9EB775DF15E76(unk_0x3C6C6327BA564AEE(Local_61.f_3), 1);
				}
				iVar0 = unk_0x344C570D6F8700DF(0, 4);
				if (iVar0 == 0)
				{
					unk_0x6673CC701BC8E9C1(unk_0x3C6C6327BA564AEE(Local_61.f_3), 5, 1);
				}
				else if (iVar0 == 1)
				{
					unk_0x6673CC701BC8E9C1(unk_0x3C6C6327BA564AEE(Local_61.f_3), 17, 1);
				}
				else if (iVar0 == 2)
				{
					unk_0x6673CC701BC8E9C1(unk_0x3C6C6327BA564AEE(Local_61.f_3), 13, 1);
				}
				if (func_10())
				{
					unk_0x6673CC701BC8E9C1(unk_0x3C6C6327BA564AEE(Local_61.f_3), 20, 1);
				}
				if (func_10())
				{
					unk_0x6673CC701BC8E9C1(unk_0x3C6C6327BA564AEE(Local_61.f_3), 2, 1);
				}
				iVar0 = unk_0x344C570D6F8700DF(0, 4);
				if (iVar0 == 0)
				{
					unk_0x73745F8F1D07995D(unk_0x3C6C6327BA564AEE(Local_61.f_3), 2);
				}
				else if (iVar0 == 1)
				{
					unk_0x73745F8F1D07995D(unk_0x3C6C6327BA564AEE(Local_61.f_3), 1);
				}
				else if (iVar0 == 2)
				{
					unk_0x73745F8F1D07995D(unk_0x3C6C6327BA564AEE(Local_61.f_3), 3);
				}
				unk_0x5F333BF03CF279D9(unk_0x3C6C6327BA564AEE(Local_61.f_3), 1);
				unk_0xB281D47677468287(unk_0x3C6C6327BA564AEE(Local_61.f_3), 1);
				unk_0x694113444F21E39F(unk_0x3C6C6327BA564AEE(Local_61.f_3), 29, true);
				unk_0x911BA6A7B46C75BA(unk_0x3C6C6327BA564AEE(Local_61.f_3), 3);
				unk_0x697DA7132EE43ABC(unk_0x3C6C6327BA564AEE(Local_61.f_3), round((200f * Global_262145.f_154)), 0);
				unk_0xC4DB45F7A0864686(unk_0x770D3B2B4702434A(Local_61.f_2), 1);
				unk_0x756046956300306A(unk_0x770D3B2B4702434A(Local_61.f_2), 1);
				func_41();
				unk_0x9B6EC2CECE1010EF(unk_0x3C6C6327BA564AEE(Local_61.f_3), uLocal_65);
				unk_0x74528AC0906CBABE(Local_61.f_5);
			}
		}
	}
	if (!unk_0xF7DE07F319727299(Local_61.f_3))
	{
		return 0;
	}
	return 1;
}

int func_10()
{
	if (unk_0xCE990E643CD9D0E5(unk_0x344C570D6F8700DF(0, 65535), 0))
	{
		return 1;
	}
	return 0;
}

int func_11(var uParam0, var uParam1, int iParam2, int iParam3, int iParam4, bool bParam5, int iParam6, int iParam7)
{
	if (!unk_0xCFED0F4D63A92A70(1))
	{
		return 0;
	}
	if (!unk_0xF7DE07F319727299(uParam1))
	{
		return 0;
	}
	if (!unk_0x80FF6C016CDB0FAF(unk_0x770D3B2B4702434A(uParam1), 0))
	{
		return 0;
	}
	*uParam0 = unk_0x28207B405DA4E61E(unk_0x6A7A2C83BD302BA4(unk_0x770D3B2B4702434A(uParam1), iParam2, iParam3, iParam4, iParam6, bParam5));
	if (unk_0xF7DE07F319727299(*uParam0))
	{
		unk_0x7C47E49129337557(unk_0x3C6C6327BA564AEE(*uParam0), iParam7);
		if (unk_0x4349BF35C5B9A49B(unk_0x3C6C6327BA564AEE(*uParam0)))
		{
			if (bParam5)
			{
				unk_0x342AB3CE1C296A56(*uParam0, 1);
			}
		}
		return 1;
	}
	return 0;
}

int func_12()
{
	struct<3> Var0;
	float fVar1;
	
	if (!unk_0xF7DE07F319727299(Local_61.f_2))
	{
		if (func_34(Local_61.f_4))
		{
			if (func_16(&Var0, &fVar1))
			{
				if (func_13(&(Local_61.f_2), Local_61.f_4, Var0, fVar1, 1, 1, 1, 0, 1, 1, 0, 0, 0, 0))
				{
					unk_0xC160551F55D6365A(unk_0x770D3B2B4702434A(Local_61.f_2), true, 1, 0);
					unk_0xDF8B40B1A780A3CB(unk_0x770D3B2B4702434A(Local_61.f_2), 1);
					unk_0xDBDEDE7005EE04EF(unk_0x770D3B2B4702434A(Local_61.f_2), true);
					unk_0xD0C464B4E09878D6(unk_0x770D3B2B4702434A(Local_61.f_2), "JOYRIDER_GROUP", 0f);
					unk_0x74528AC0906CBABE(Local_61.f_4);
				}
			}
		}
	}
	if (!unk_0xF7DE07F319727299(Local_61.f_2))
	{
		return 0;
	}
	return 1;
}

int func_13(var uParam0, int iParam1, struct<3> Param2, float fParam3, int iParam4, int iParam5, bool bParam6, bool bParam7, int iParam8, bool bParam9, bool bParam10, bool bParam11, int iParam12, bool bParam13)
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
			func_14(Param2, fParam3, iParam1, iVar1);
			return 1;
		}
	}
	return 0;
}

void func_14(struct<3> Param0, float fParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	if (func_15(unk_0x460153A63B9477BC(), Param0, iParam2) > -1)
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

int func_15(int iParam0, struct<3> Param1, int iParam2)
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

bool func_16(var uParam0, float fParam1)
{
	bool bVar0;
	int iVar1;
	var uVar2;
	
	if (!bVar0)
	{
		if (unk_0xB4A07AE91EF58820(&(Local_61.f_6), uParam0, &uVar2, 0f, 180f, 40f, 0, 1, 1))
		{
			unk_0x1485BFBB1EC6FE22(*uParam0, 1, uParam0, fParam1, &iVar1, 4, 3f, 0f);
			if (iVar1 >= 1 || unk_0x3E0F5858774E3D97(*uParam0) == -289320599)
			{
				if (unk_0x272784C60C397DB6(-1367.557f, -3220.598f, 12.9448f, Local_61.f_6, 1) >= 600f && unk_0x272784C60C397DB6(750f, -3200f, 6f, Local_61.f_6, 1) >= 700f)
				{
					if (unk_0x272784C60C397DB6(func_33(unk_0x460153A63B9477BC()), *uParam0, 1) <= (250f - 50f))
					{
						if (iLocal_70 <= 5)
						{
							if (func_17(*uParam0, 1086324736, 1065353216, 1065353216, 1084227584, 1, 1, 1, 1123024896, 0, -1, 1, 0, 0, 0, 0, 0))
							{
								bVar0 = true;
							}
						}
						else
						{
							Local_61 = 4;
						}
					}
				}
			}
		}
	}
	if (!bVar0)
	{
		iLocal_69 += 4;
		if (iLocal_69 >= 80)
		{
			iLocal_69 = 20;
			iLocal_70++;
		}
	}
	return bVar0;
}

int func_17(struct<3> Param0, float fParam1, float fParam2, float fParam3, float fParam4, int iParam5, bool bParam6, int iParam7, float fParam8, bool bParam9, int iParam10, bool bParam11, float fParam12, bool bParam13, float fParam14, bool bParam15, int iParam16)
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
		if (func_26(Param0, fParam12, 1, 1, bParam13, bParam15, bParam9, bParam13))
		{
			return 0;
		}
	}
	Global_2405074.f_2++;
	if (bParam6)
	{
		if (fParam4 > 0f)
		{
			if (func_18(Param0, fParam4, iParam5, iParam7, fParam8, bParam9, iParam10, fParam14, bParam15))
			{
				return 0;
			}
		}
	}
	Global_2405074.f_2++;
	return 1;
}

int func_18(struct<3> Param0, float fParam1, int iParam2, int iParam3, float fParam4, bool bParam5, int iParam6, float fParam7, bool bParam8)
{
	int iVar0;
	int iVar1;
	float fVar2;
	
	if (iParam2 && !bParam5)
	{
		if (func_71(unk_0x460153A63B9477BC(), 1, 1))
		{
			if (!unk_0x03DB5C6AABF8DA46())
			{
				fVar2 = fParam4;
				if (fParam7 > 0f)
				{
					fVar2 = fParam7;
				}
				if (unk_0x272784C60C397DB6(func_23(unk_0x460153A63B9477BC()), Param0, 1) <= (fVar2 + fParam1))
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
		if (func_71(iVar1, 1, 1))
		{
			if (!func_20(iVar1, 0) && unk_0x56B60AE958412839(unk_0x460153A63B9477BC(), iVar1))
			{
				if (iParam2 == 1 || (iParam2 == 0 && iVar1 != unk_0x460153A63B9477BC()))
				{
					if ((func_19(iVar1) || !bParam8) && !Global_2425869[iVar1 /*443*/].f_263)
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
								if (unk_0x272784C60C397DB6(func_23(iVar1), Param0, 1) <= (fVar2 + fParam1))
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
							if (unk_0x272784C60C397DB6(func_23(iVar1), Param0, 1) <= (fVar2 + fParam1))
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

int func_19(int iParam0)
{
	if (unk_0xEB7D4DA50142DE0A(unk_0x1FA7B77001D60F9D(iParam0)) || Global_2425869[iParam0 /*443*/].f_249)
	{
		return 1;
	}
	return 0;
}

bool func_20(int iParam0, int iParam1)
{
	bool bVar0;
	
	if (iParam0 == unk_0x460153A63B9477BC())
	{
		bVar0 = func_21(-1, 0) == 8;
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

int func_21(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_22();
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

int func_22()
{
	return Global_1312763;
}

Vector3 func_23(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if ((func_25() && Global_1590682[iVar0 /*883*/].f_854) && !func_24(Global_1590682[iVar0 /*883*/].f_855))
	{
		return Global_1590682[iVar0 /*883*/].f_855;
	}
	return func_33(iParam0);
}

int func_24(struct<3> Param0)
{
	if ((Param0.x == 0f && Param0.f_1 == 0f) && Param0.f_2 == 0f)
	{
		return 1;
	}
	return 0;
}

var func_25()
{
	return Global_2451787.f_18;
}

int func_26(struct<3> Param0, float fParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, int iParam6, var uParam7)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar1 = iVar0;
		if ((iParam6 == 1 && unk_0x460153A63B9477BC() != iVar1) || iParam6 == 0)
		{
			if (func_71(iVar1, bParam2, bParam3))
			{
				if (unk_0x56B60AE958412839(unk_0x460153A63B9477BC(), iVar1))
				{
					if (!bParam5 || (!unk_0x5AEB5DDFFAD43CA5(unk_0x1FA7B77001D60F9D(iVar1)) && func_19(iVar1)))
					{
						if ((!bParam4 || (bParam4 == 1 && unk_0x6CC163E30ECE0790(unk_0x460153A63B9477BC()) != unk_0x6CC163E30ECE0790(iVar1))) || unk_0x6CC163E30ECE0790(unk_0x460153A63B9477BC()) == -1)
						{
							if (((unk_0x6CC163E30ECE0790(unk_0x460153A63B9477BC()) == -1 && uParam7) && bParam4) && func_27(iVar1))
							{
							}
							else if (unk_0xAE06B9E39EBDE049(unk_0x1FA7B77001D60F9D(iVar1)))
							{
								if (unk_0x272784C60C397DB6(func_33(iVar1), Param0, 1) < fParam1)
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

int func_27(int iParam0)
{
	if (func_32(unk_0x460153A63B9477BC(), iParam0))
	{
		return 1;
	}
	Global_2515173 = { func_31(iParam0) };
	if (unk_0x78A7795C9C51946D(&Global_2515173))
	{
		return 1;
	}
	if (func_28(unk_0x460153A63B9477BC(), iParam0))
	{
		return 1;
	}
	return 0;
}

int func_28(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = func_30(iParam0);
	if (!iVar0 == func_29())
	{
		if (iVar0 == func_30(iParam1))
		{
			return 1;
		}
	}
	return 0;
}

int func_29()
{
	return -1;
}

int func_30(int iParam0)
{
	if (iParam0 != func_29())
	{
		return Global_1630317[iParam0 /*595*/].f_11;
	}
	return func_29();
}

struct<13> func_31(int iParam0)
{
	struct<13> Var0;
	
	unk_0x2BDD80E79441BD36(iParam0, &Var0, 13);
	return Var0;
}

int func_32(int iParam0, int iParam1)
{
	if (unk_0xE2FBD13450B2DA21())
	{
		Global_2515173 = { func_31(iParam0) };
		Global_2515186 = { func_31(iParam1) };
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

Vector3 func_33(int iParam0)
{
	return unk_0x3E4D3CCC220BDFB1(unk_0x1FA7B77001D60F9D(iParam0), 0);
}

bool func_34(int iParam0)
{
	if (iParam0 == 0)
	{
		return 1;
	}
	unk_0x78FCB2E22C41B9D5(iParam0);
	return unk_0x7D167B9A0CCDA347(iParam0);
}

bool func_35()
{
	if (!unk_0xCE990E643CD9D0E5(iLocal_64, 1))
	{
		if (unk_0x204D69DA02AB1105(func_33(unk_0x460153A63B9477BC()), iLocal_68, &(Local_61.f_6), 4, 3f, 0f))
		{
			unk_0xBE20AB8238688965(&iLocal_64, 1);
		}
		else
		{
			iLocal_68++;
		}
	}
	return unk_0xCE990E643CD9D0E5(iLocal_64, 1);
}

int func_36(var uParam0)
{
	if (uParam0->f_1)
	{
		if (unk_0x44F29CF6A0675F4F(unk_0x624736CA66E14161(unk_0x6CAAB7E78B5D978A(), *uParam0)) >= 1000)
		{
			return 1;
		}
	}
	return 0;
}

void func_37(var uParam0)
{
	if (!uParam0->f_1)
	{
		if (unk_0xAFF96FDC3971E7EA())
		{
			func_38(uParam0, 0, 0);
		}
	}
}

void func_38(var uParam0, bool bParam1, bool bParam2)
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

void func_39()
{
	switch (Local_63[unk_0x59E2AD1A8ACEDA31() /*3*/].f_2)
	{
		case 0:
			func_41();
			func_40();
			if (Local_61.f_9 > 0)
			{
				Local_63[unk_0x59E2AD1A8ACEDA31() /*3*/].f_2 = 1;
			}
			break;
		
		case 1:
			func_60();
			break;
	}
}

void func_40()
{
	int iVar0;
	float fVar1;
	
	if (!unk_0xCE990E643CD9D0E5(Local_63[unk_0x59E2AD1A8ACEDA31() /*3*/].f_1, 0))
	{
		if (func_4(Local_61.f_2) && !func_3(Local_61.f_3))
		{
			iVar0 = unk_0x4F5F2FB7AE0EB7AB(unk_0x770D3B2B4702434A(Local_61.f_2));
			fVar1 = unk_0xF3A639BEE7AADF55(unk_0x770D3B2B4702434A(Local_61.f_2));
			if (iVar0 < 200)
			{
				func_41();
				unk_0x9B6EC2CECE1010EF(unk_0x3C6C6327BA564AEE(Local_61.f_3), uLocal_67);
				unk_0xBE20AB8238688965(&(Local_63[unk_0x59E2AD1A8ACEDA31() /*3*/].f_1), 0);
			}
			else if (fVar1 < 3f)
			{
				if ((((unk_0x50F857464DE13ED2(unk_0x770D3B2B4702434A(Local_61.f_2)) || unk_0xBCB2BD5C2E502335(unk_0x770D3B2B4702434A(Local_61.f_2), 3, 10000)) || unk_0xBCB2BD5C2E502335(unk_0x770D3B2B4702434A(Local_61.f_2), 1, 10000)) || unk_0xBCB2BD5C2E502335(unk_0x770D3B2B4702434A(Local_61.f_2), 0, 10000)) || unk_0xBCB2BD5C2E502335(unk_0x770D3B2B4702434A(Local_61.f_2), 2, 10000))
				{
					func_41();
					unk_0x9B6EC2CECE1010EF(unk_0x3C6C6327BA564AEE(Local_61.f_3), uLocal_66);
					unk_0xBE20AB8238688965(&(Local_63[unk_0x59E2AD1A8ACEDA31() /*3*/].f_1), 0);
				}
			}
		}
	}
}

void func_41()
{
	if (!unk_0xCE990E643CD9D0E5(iLocal_64, 0))
	{
		if (func_4(Local_61.f_2))
		{
			unk_0x9DC06E2A59C5AEBB(&uLocal_65);
			unk_0x47107451B20C1093(0, unk_0x770D3B2B4702434A(Local_61.f_2), Local_61.f_6, 14, 30f, 786468, 15f, 1f, 0);
			unk_0xD8C1C38EE8BC2AC6(0, unk_0x770D3B2B4702434A(Local_61.f_2), 30f, 786468);
			unk_0x19F29730874AD6F1(uLocal_65);
			unk_0x9DC06E2A59C5AEBB(&uLocal_66);
			unk_0x0AB756271BADC8DF(0, 0, 1);
			unk_0x19F29730874AD6F1(uLocal_66);
			unk_0x9DC06E2A59C5AEBB(&uLocal_67);
			unk_0x47107451B20C1093(0, unk_0x770D3B2B4702434A(Local_61.f_2), Local_61.f_6, 5, 30f, 786468, 99999f, 1f, 0);
			unk_0x0AB756271BADC8DF(0, 0, 1);
			unk_0x19F29730874AD6F1(uLocal_67);
			unk_0xBE20AB8238688965(&iLocal_64, 0);
		}
	}
}

int func_42()
{
	return Local_61;
}

int func_43(int iParam0)
{
	return Local_63[iParam0 /*3*/];
}

bool func_44(int iParam0)
{
	return !func_45(iParam0);
}

int func_45(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			break;
		
		case 1:
			break;
		
		case 2:
			break;
		
		case 3:
			break;
		
		case 4:
			if (Global_262145.f_6661)
			{
				return 0;
			}
			if (func_47(unk_0x460153A63B9477BC(), 7))
			{
				return 0;
			}
			if (unk_0xCE990E643CD9D0E5(Global_1590682[unk_0x460153A63B9477BC() /*883*/].f_274.f_26, 0) || unk_0xCE990E643CD9D0E5(Global_1590682[unk_0x460153A63B9477BC() /*883*/].f_274.f_26, 1))
			{
				return 0;
			}
			break;
		
		case 5:
			if (Global_262145.f_6662)
			{
				return 0;
			}
			if (func_47(unk_0x460153A63B9477BC(), 7))
			{
				return 0;
			}
			if (unk_0xCE990E643CD9D0E5(Global_1590682[unk_0x460153A63B9477BC() /*883*/].f_274.f_26, 0) || unk_0xCE990E643CD9D0E5(Global_1590682[unk_0x460153A63B9477BC() /*883*/].f_274.f_26, 1))
			{
				return 0;
			}
			break;
		
		case 6:
			if (Global_262145.f_6663)
			{
				return 0;
			}
			break;
		
		case 7:
			break;
		
		case 8:
			break;
		
		case 9:
			if (Global_262145.f_6664)
			{
				return 0;
			}
			if (func_47(unk_0x460153A63B9477BC(), 7))
			{
				return 0;
			}
			if (unk_0xCE990E643CD9D0E5(Global_1590682[unk_0x460153A63B9477BC() /*883*/].f_274.f_26, 0) || unk_0xCE990E643CD9D0E5(Global_1590682[unk_0x460153A63B9477BC() /*883*/].f_274.f_26, 1))
			{
				return 0;
			}
			break;
		
		case 15:
			if (func_46(4))
			{
				return 0;
			}
			if (func_47(unk_0x460153A63B9477BC(), 7))
			{
				return 0;
			}
			if (unk_0xCE990E643CD9D0E5(Global_1590682[unk_0x460153A63B9477BC() /*883*/].f_274.f_26, 0) || unk_0xCE990E643CD9D0E5(Global_1590682[unk_0x460153A63B9477BC() /*883*/].f_274.f_26, 1))
			{
				return 0;
			}
			break;
		
		case 17:
			if (func_46(4))
			{
				return 0;
			}
			if (func_47(unk_0x460153A63B9477BC(), 7))
			{
				return 0;
			}
			if (unk_0xCE990E643CD9D0E5(Global_1590682[unk_0x460153A63B9477BC() /*883*/].f_274.f_26, 0) || unk_0xCE990E643CD9D0E5(Global_1590682[unk_0x460153A63B9477BC() /*883*/].f_274.f_26, 1))
			{
				return 0;
			}
			break;
		
		case 16:
			if (func_46(4))
			{
				return 0;
			}
			if (func_47(unk_0x460153A63B9477BC(), 7))
			{
				return 0;
			}
			if (unk_0xCE990E643CD9D0E5(Global_1590682[unk_0x460153A63B9477BC() /*883*/].f_274.f_26, 0) || unk_0xCE990E643CD9D0E5(Global_1590682[unk_0x460153A63B9477BC() /*883*/].f_274.f_26, 1))
			{
				return 0;
			}
			break;
		
		case 18:
		case 21:
		case 22:
		case 23:
			if (func_46(4))
			{
				return 0;
			}
			if (func_47(unk_0x460153A63B9477BC(), 7))
			{
				return 0;
			}
			if (unk_0xCE990E643CD9D0E5(Global_1590682[unk_0x460153A63B9477BC() /*883*/].f_274.f_26, 0) || unk_0xCE990E643CD9D0E5(Global_1590682[unk_0x460153A63B9477BC() /*883*/].f_274.f_26, 1))
			{
				return 0;
			}
			break;
		
		case 19:
			if (func_46(4))
			{
				return 0;
			}
			if (func_47(unk_0x460153A63B9477BC(), 7))
			{
				return 0;
			}
			break;
		
		case 20:
			if (func_46(4))
			{
				return 0;
			}
			if (func_47(unk_0x460153A63B9477BC(), 7))
			{
				return 0;
			}
			break;
		
		case 10:
			break;
		
		case 11:
			break;
		
		case 12:
			break;
	}
	return 1;
}

int func_46(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (func_71(unk_0xF1110FE23C67293A(iVar0), 0, 1))
		{
			if (unk_0xCE990E643CD9D0E5(Global_2425869[iVar0 /*443*/].f_212, iParam0))
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

bool func_47(int iParam0, int iParam1)
{
	return unk_0xCE990E643CD9D0E5(Global_2425869[iParam0 /*443*/].f_212, iParam1);
}

int func_48()
{
	var uVar0;
	
	func_56(&uVar0);
	if (Global_1312872 == 0)
	{
		if (!unk_0x25DDB354A40FFCDB())
		{
			return 1;
		}
	}
	if (func_55())
	{
		return 1;
	}
	if (Global_2464493)
	{
		return 1;
	}
	if (func_54())
	{
		return 1;
	}
	if (func_53(159))
	{
		if (!func_52())
		{
			return 1;
		}
	}
	if (func_53(157))
	{
		return 1;
	}
	if (!unk_0x0EB6C63A09FD9DF1())
	{
		return 1;
	}
	if (func_49() != 0)
	{
		if (unk_0x7B70881748D166CD(func_49()) == 0)
		{
			return 1;
		}
	}
	return 0;
}

int func_49()
{
	switch (func_51())
	{
		case 0:
			return func_50();
			break;
		
		case 2:
			return joaat("creator");
			break;
	}
	return 0;
}

int func_50()
{
	switch (Global_2464595)
	{
		case 0:
			return joaat("freemode");
		
		default:
	}
	return joaat("freemode");
}

int func_51()
{
	return Global_30968;
}

bool func_52()
{
	return Global_2451787.f_696;
}

int func_53(int iParam0)
{
	if (unk_0x16F1FCCC54559709(1, iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_54()
{
	return Global_2462250;
}

bool func_55()
{
	return Global_2451787.f_691;
}

void func_56(var uParam0)
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
					func_57(iVar0);
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

void func_57(int iParam0)
{
	struct<3> Var0;
	int iVar1;
	int iVar2;
	bool bVar3;
	
	if (unk_0x477FAFFE21935947(1, iParam0, &Var0, 3))
	{
		if (func_71(Var0.f_1, 1, 1))
		{
			iVar1 = unk_0x1FA7B77001D60F9D(Var0.f_1);
			if (unk_0xAE06B9E39EBDE049(iVar1))
			{
				if (unk_0x47DBF174A0CB9D55(iVar1, 0))
				{
					iVar2 = unk_0xA5D5B1042E8F47BD(iVar1, 0);
					if (unk_0x292280AF1BBBD6AC(iVar2, Var0.f_2) && unk_0x82CC259B7B4F4AD9())
					{
						if (func_58(iVar2, &bVar3))
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

int func_58(int iParam0, var uParam1)
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

void func_59()
{
	wait(0);
}

void func_60()
{
	func_63();
	if (func_42() == 4 && Local_61.f_4 != 0)
	{
		unk_0x410A1E7AD7D5C774(Local_61.f_4, 0);
	}
	if (func_4(Local_61.f_2))
	{
		unk_0xA880FA9C4E5BCA17(unk_0x770D3B2B4702434A(Local_61.f_2), 0f);
	}
	unk_0xFA07F8BEBDAAFBA8("JOYRIDER_RADIO_SCENE");
	func_62(9, 0);
	func_61();
}

void func_61()
{
	unk_0xD39E529EBE5DB04F();
}

void func_62(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		if (!unk_0xCE990E643CD9D0E5(Global_2425869[unk_0x460153A63B9477BC() /*443*/].f_212, iParam0))
		{
			unk_0xBE20AB8238688965(&(Global_2425869[unk_0x460153A63B9477BC() /*443*/].f_212), iParam0);
		}
	}
	else if (unk_0xCE990E643CD9D0E5(Global_2425869[unk_0x460153A63B9477BC() /*443*/].f_212, iParam0))
	{
		unk_0xD2459066EA58CE43(&(Global_2425869[unk_0x460153A63B9477BC() /*443*/].f_212), iParam0);
	}
}

void func_63()
{
	unk_0x4F83FEE4454169D4(&uLocal_65);
}

void func_64(struct<21> Param0)
{
	int iVar0;
	
	func_69(func_70(Param0), Param0);
	unk_0x9CAB3AADEB4C2F8D(1);
	unk_0x628BF6B677C62F7E(1);
	func_67(0, -1, 0);
	unk_0x97D2F2E2C92FD519(&Local_61, 12);
	unk_0xBB96A3ECD45D0317(&Local_63, 97);
	if (!func_66())
	{
		func_60();
	}
	if (unk_0x25DDB354A40FFCDB())
	{
		unk_0x3A396632EB359434(0);
		if (unk_0xAFF96FDC3971E7EA())
		{
			if (Global_2540384.f_4447 == 0)
			{
				iVar0 = unk_0x344C570D6F8700DF(0, 7);
				switch (iVar0)
				{
					case 0:
						Local_61.f_4 = joaat("stingergt");
						break;
					
					case 1:
						Local_61.f_4 = joaat("entityxf");
						break;
					
					case 2:
						Local_61.f_4 = joaat("feltzer2");
						break;
					
					case 3:
						Local_61.f_4 = joaat("monroe");
						break;
					
					case 4:
						Local_61.f_4 = joaat("cogcabrio");
						break;
					
					case 5:
						Local_61.f_4 = joaat("superd");
						break;
					
					case 6:
						Local_61.f_4 = joaat("infernus");
						break;
				}
			}
			else
			{
				Local_61.f_4 = Global_2540384.f_4447;
				Global_2540384.f_4447 = 0;
			}
			unk_0x410A1E7AD7D5C774(Local_61.f_4, 1);
			Local_61.f_5 = func_65(1);
		}
		func_62(9, 1);
		unk_0x17E478571720218F("JOYRIDER_RADIO_SCENE");
		Local_63[unk_0x59E2AD1A8ACEDA31() /*3*/] = 0;
	}
	else
	{
		func_60();
	}
}

int func_65(bool bParam0)
{
	int iVar0;
	
	iVar0 = unk_0x344C570D6F8700DF(0, 32);
	if (bParam0)
	{
		switch (iVar0)
		{
			case 0:
				return joaat("a_m_m_eastsa_01");
			
			case 1:
				return joaat("a_m_m_bevhills_01");
			
			case 2:
				return joaat("a_m_m_bevhills_02");
			
			case 3:
				return joaat("a_m_m_business_01");
			
			case 4:
				return joaat("a_m_m_malibu_01");
			
			case 5:
				return joaat("a_m_m_eastsa_02");
			
			case 6:
				return joaat("a_m_m_hillbilly_01");
			
			case 7:
				return joaat("a_m_m_hillbilly_02");
			
			case 8:
				return joaat("a_m_m_og_boss_01");
			
			case 9:
				return joaat("a_m_m_stlat_02");
			
			case 10:
				return joaat("a_m_y_beachvesp_01");
			
			case 11:
				return joaat("a_m_y_epsilon_01");
			
			case 12:
				return joaat("a_m_m_prolhost_01");
			
			case 13:
				return joaat("a_m_m_salton_01");
			
			case 14:
				return joaat("a_m_m_skater_01");
			
			case 15:
				return joaat("a_m_y_skater_02");
			
			case 16:
				return joaat("a_m_y_methhead_01");
			
			case 17:
				return joaat("a_m_m_skidrow_01");
			
			case 18:
				return joaat("a_m_m_soucent_01");
			
			case 19:
				return joaat("a_m_m_soucent_02");
			
			case 20:
				return joaat("a_m_m_soucent_03");
			
			case 21:
				return joaat("a_m_y_genstreet_02");
			
			case 22:
				return joaat("a_m_y_roadcyc_01");
			
			case 23:
				return joaat("a_m_m_afriamer_01");
			
			case 24:
				return joaat("a_m_m_beach_01");
			
			case 25:
				return joaat("a_m_m_farmer_01");
			
			case 26:
				return joaat("a_m_m_fatlatin_01");
			
			case 27:
				return joaat("a_m_m_genfat_01");
			
			case 28:
				return joaat("a_m_m_indian_01");
			
			case 29:
				return joaat("a_m_m_ktown_01");
			
			case 30:
				return joaat("a_m_m_socenlat_01");
			
			case 31:
				return joaat("a_m_m_mexlabor_01");
			
			default:
		}
	}
	else
	{
		switch (iVar0)
		{
			case 0:
				return joaat("a_f_m_bevhills_01");
			
			case 1:
				return joaat("a_f_m_bevhills_02");
			
			case 2:
				return joaat("a_f_m_beach_01");
			
			case 3:
				return joaat("a_f_m_ktown_02");
			
			case 4:
				return joaat("a_f_m_prolhost_01");
			
			case 5:
				return joaat("a_f_m_bodybuild_01");
			
			case 6:
				return joaat("a_f_m_business_02");
			
			case 7:
				return joaat("a_f_m_downtown_01");
			
			case 8:
				return joaat("a_f_m_eastsa_01");
			
			case 9:
				return joaat("a_f_m_eastsa_02");
			
			case 10:
				return joaat("a_f_m_fatwhite_01");
			
			case 11:
				return joaat("a_f_m_ktown_01");
			
			case 12:
				return joaat("a_f_m_ktown_02");
			
			case 13:
				return joaat("a_f_m_salton_01");
			
			case 14:
				return joaat("a_f_m_skidrow_01");
			
			case 15:
				return joaat("a_f_m_soucent_01");
			
			case 16:
				return joaat("a_f_m_soucent_02");
			
			case 17:
				return joaat("a_f_m_soucentmc_01");
			
			case 18:
				return joaat("a_f_m_tramp_01");
			
			case 19:
				return joaat("a_f_m_trampbeac_01");
			
			case 20:
				return joaat("a_f_y_yoga_01");
			
			case 21:
				return joaat("a_f_y_vinewood_02");
			
			case 22:
				return joaat("a_f_y_vinewood_03");
			
			case 23:
				return joaat("a_f_y_vinewood_04");
			
			case 24:
				return joaat("a_f_y_tennis_01");
			
			case 25:
				return joaat("a_f_y_tourist_01");
			
			case 26:
				return joaat("a_f_y_hipster_01");
			
			case 27:
				return joaat("a_f_y_golfer_01");
			
			case 28:
				return joaat("a_f_y_fitness_01");
			
			case 29:
				return joaat("a_f_y_scdressy_01");
			
			case 30:
				return joaat("a_f_y_epsilon_01");
			
			case 31:
				return joaat("a_f_y_hiker_01");
			
			default:
		}
	}
	return joaat("a_f_m_bevhills_01");
}

int func_66()
{
	int iVar0;
	
	iVar0 = 0;
	while (true)
	{
		iVar0++;
		if (!unk_0x25DDB354A40FFCDB())
		{
			return 0;
		}
		if (unk_0x331F7CFA5515B989())
		{
			return 1;
		}
		if (func_55())
		{
			return 0;
		}
		if (func_53(157))
		{
			return 0;
		}
		if (iVar0 >= 3600)
		{
			return 0;
		}
		wait(0);
	}
	return 0;
}

int func_67(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = unk_0x361B374A50D875B4();
	while (iVar0 != 2)
	{
		if (((iVar0 == 3 || iVar0 == 4) || iVar0 == 5) || iVar0 == 6)
		{
			if (!bParam2)
			{
				func_61();
			}
			else
			{
				return 0;
			}
		}
		if (!func_68())
		{
			if (iParam0 == 0)
			{
				if (!unk_0x25DDB354A40FFCDB())
				{
					if (!bParam2)
					{
						func_61();
					}
					else
					{
						return 0;
					}
				}
				if (func_55())
				{
					if (!bParam2)
					{
						func_61();
					}
					else
					{
						return 0;
					}
				}
				if (func_53(157))
				{
					if (!bParam2)
					{
						func_61();
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
					func_61();
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
				func_61();
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
			func_61();
		}
		else
		{
			return 0;
		}
	}
	return 1;
}

bool func_68()
{
	return Global_1312872;
}

void func_69(int iParam0, struct<17> Param1, var uParam2, var uParam3, var uParam4, var uParam5)
{
	if (!unk_0x25DDB354A40FFCDB())
	{
		func_61();
	}
	unk_0xA88557896B79E30D(iParam0, 0, Param1.f_16);
}

int func_70(int iParam0)
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

int func_71(int iParam0, bool bParam1, bool bParam2)
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

