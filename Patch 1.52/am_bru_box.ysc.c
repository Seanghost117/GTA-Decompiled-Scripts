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
	struct<10> Local_60 = { 0, 0, 0, 0, 0, 0, -1, 0, 0, 0 } ;
	var uLocal_61 = 0;
	struct<3> Local_62[32];
	int iLocal_63 = 0;
	var uLocal_64 = 0;
	int iLocal_65 = 0;
	var uLocal_66 = 0;
	var uLocal_67 = 0;
	bool bLocal_68 = 0;
	struct<21> Local_69 = { 0, -1, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, -1, -1 } ;
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
	if (unk_0x25DDB354A40FFCDB())
	{
		if (!func_234(ScriptParam_69))
		{
			func_228();
		}
		if (ScriptParam_69.f_16 >= 32)
		{
			if (func_227(unk_0x460153A63B9477BC()) != 1 && !unk_0xCE990E643CD9D0E5(Global_2540384.f_897.f_7, 0))
			{
				func_228();
			}
		}
	}
	uLocal_64 = ScriptParam_69.f_19;
	while (true)
	{
		func_226();
		if (func_216())
		{
			func_228();
		}
		if (ScriptParam_69.f_16 >= 32)
		{
			if (func_227(unk_0x460153A63B9477BC()) != 1 && Global_1627097 == 0)
			{
				func_228();
			}
		}
		if (unk_0xD0E70037A973A810() != bLocal_68)
		{
			func_228();
		}
		unk_0x0005AFC51788D8A0();
		switch (func_215(unk_0x59E2AD1A8ACEDA31()))
		{
			case 0:
				if (func_214())
				{
					if (func_213() == 1)
					{
						Local_62[unk_0x59E2AD1A8ACEDA31() /*3*/] = 1;
					}
					else if (func_213() == 4)
					{
						Local_62[unk_0x59E2AD1A8ACEDA31() /*3*/] = 3;
					}
				}
				break;
			
			case 1:
				if (func_213() == 1)
				{
					func_187();
				}
				else if (func_213() == 4)
				{
					Local_62[unk_0x59E2AD1A8ACEDA31() /*3*/] = 3;
				}
				if (Local_62[unk_0x59E2AD1A8ACEDA31() /*3*/].f_2 == 0)
				{
					if ((!unk_0xC2169C00B643278B(unk_0x9B0761B4C3EB8BC7(), Local_60.f_3, 500f, 500f, 500f, 0, 1, 0) && func_227(unk_0x460153A63B9477BC()) != 1) && !unk_0xCE990E643CD9D0E5(Global_2540384.f_897.f_7, 0))
					{
						Local_62[unk_0x59E2AD1A8ACEDA31() /*3*/] = 4;
					}
				}
				break;
			
			case 3:
				func_185(&(Local_60.f_9));
				if (func_184(&(Local_60.f_9)))
				{
					Local_62[unk_0x59E2AD1A8ACEDA31() /*3*/] = 4;
				}
				break;
			
			case 2:
				Local_62[unk_0x59E2AD1A8ACEDA31() /*3*/] = 4;
			
			case 4:
				func_228();
				break;
		}
		if (unk_0xAFF96FDC3971E7EA())
		{
			switch (func_213())
			{
				case 0:
					if (func_7())
					{
						Local_60 = 1;
					}
					break;
				
				case 1:
					func_6();
					func_5();
					if (func_1())
					{
						Local_60 = 4;
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
	if (Local_60.f_7 >= 32 && func_227(unk_0x460153A63B9477BC()) == 1)
	{
		if (func_4(Global_2540384.f_897.f_1))
		{
			return 1;
		}
	}
	if (func_3(unk_0x460153A63B9477BC()))
	{
		return 1;
	}
	if (Local_60.f_8 == 2)
	{
		return 1;
	}
	return 0;
}

int func_3(int iParam0)
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

int func_4(struct<3> Param0)
{
	if ((Param0.x == 0f && Param0.f_1 == 0f) && Param0.f_2 == 0f)
	{
		return 1;
	}
	return 0;
}

void func_5()
{
	switch (Local_60.f_8)
	{
		case 0:
			if (!unk_0xF7DE07F319727299(Local_60.f_2) || Local_60.f_6 != -1)
			{
				Local_60.f_8 = 1;
			}
			break;
		
		case 1:
			Local_60.f_8 = 2;
			break;
		
		case 2:
			break;
	}
}

void func_6()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < unk_0xEFA28384DDD283E1())
	{
		if (unk_0xBD09DF93F957A0CF(unk_0x628A51AC66E80772(iVar0)))
		{
			if (Local_60.f_6 == -1)
			{
				if (unk_0xCE990E643CD9D0E5(Local_62[iVar0 /*3*/].f_1, 0))
				{
					Local_60.f_6 = iVar0;
				}
			}
			if (!unk_0xCE990E643CD9D0E5(Local_60.f_1, 7))
			{
				if (unk_0xCE990E643CD9D0E5(Local_62[iVar0 /*3*/].f_1, 1))
				{
					unk_0xBE20AB8238688965(&(Local_60.f_1), 7);
				}
			}
		}
		iVar0++;
	}
}

int func_7()
{
	struct<3> Var0;
	float fVar1;
	int iVar2;
	float fVar3;
	struct<3> Var4;
	struct<3> Var5;
	int iVar6;
	struct<35> Var7;
	
	if (!unk_0xF7DE07F319727299(Local_60.f_2))
	{
		if (func_214())
		{
			if (unk_0xF8E99C596E84AFF3(1))
			{
				fVar3 = 250f;
				Var4 = { Local_60.f_3 };
				if (unk_0xCE990E643CD9D0E5(Local_60.f_1, 8))
				{
					Var0 = { Global_2540384.f_897.f_1 };
					fVar1 = Global_2540384.f_897.f_4;
				}
				if (func_227(unk_0x460153A63B9477BC()) == 7)
				{
					iVar6 = unk_0x6CC163E30ECE0790(unk_0x460153A63B9477BC());
					if (Global_4456448.f_592[iVar6 /*16355*/].f_2153[0 /*36*/].f_23 > 0f)
					{
						Var4 = { Global_4456448.f_592[iVar6 /*16355*/].f_2153[0 /*36*/].f_16 };
						Var5 = { Global_4456448.f_592[iVar6 /*16355*/].f_2153[0 /*36*/].f_19 };
						fVar3 = Global_4456448.f_592[iVar6 /*16355*/].f_2153[0 /*36*/].f_23;
						iVar2 = 1;
					}
					else if (Global_4456448.f_592[iVar6 /*16355*/].f_2153[0 /*36*/].f_22 > 0f)
					{
						Var4 = { Global_4456448.f_592[iVar6 /*16355*/].f_2153[0 /*36*/].f_13 };
						fVar3 = Global_4456448.f_592[iVar6 /*16355*/].f_2153[0 /*36*/].f_22;
					}
				}
				Var7.f_5 = 1115815936;
				Var7.f_13 = 2;
				Var7.f_20 = 2;
				Var7.f_32 = -1082130432;
				Var7.f_34 = 1;
				Var7.f_4 = 1;
				Var7.f_5 = 30f;
				Var7.f_10 = 1;
				if (iVar2 == 0)
				{
					if (unk_0xCE990E643CD9D0E5(Local_60.f_1, 8) || func_183(Var4, fVar3, &Var0, &fVar1, &Var7))
					{
						if (Local_60.f_7 >= 32 || func_227(unk_0x460153A63B9477BC()) == 1)
						{
							Local_60.f_2 = unk_0x22CA0B37B74BB381(unk_0xDFCBAFA6018378B2(joaat("pickup_portable_package"), Var0, 1, joaat("prop_drug_package_02")));
						}
						else
						{
							Local_60.f_2 = unk_0x22CA0B37B74BB381(unk_0x7CCB49ADC5A1DAB4(joaat("pickup_portable_package"), Var0, 1, joaat("prop_drug_package_02")));
						}
						unk_0xE922BAA80E8F9324(unk_0x0EE5FAC7EF37F8A0(Local_60.f_2), fVar1);
					}
				}
				else if (unk_0xCE990E643CD9D0E5(Local_60.f_1, 8) || func_8(Var4, Var5, fVar3, &Var0, &fVar1, Var7))
				{
					if (Local_60.f_7 >= 32 || func_227(unk_0x460153A63B9477BC()) == 1)
					{
						Local_60.f_2 = unk_0x22CA0B37B74BB381(unk_0xDFCBAFA6018378B2(joaat("pickup_portable_package"), Var0, 1, joaat("prop_drug_package_02")));
					}
					else
					{
						Local_60.f_2 = unk_0x22CA0B37B74BB381(unk_0x7CCB49ADC5A1DAB4(joaat("pickup_portable_package"), Var0, 1, joaat("prop_drug_package_02")));
					}
					unk_0xE922BAA80E8F9324(unk_0x0EE5FAC7EF37F8A0(Local_60.f_2), fVar1);
				}
			}
		}
	}
	if (unk_0xF7DE07F319727299(Local_60.f_2))
	{
		return 1;
	}
	return 0;
}

int func_8(struct<3> Param0, struct<3> Param1, float fParam2, var uParam3, float fParam4, struct<8> Param5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30, var uParam31, var uParam32)
{
	struct<17> Var0;
	struct<29> Var1;
	
	if (Param5.f_5 < 20f)
	{
		Param5.f_5 = 20f;
	}
	Var0 = 5;
	Var0.f_16 = 5;
	Var0.f_22 = 5;
	Var0.f_28 = 5;
	Var1.f_16 = 1;
	Var1.f_22 = 1;
	Var1.f_23 = 1;
	Var1.f_24 = 1;
	Var1.f_28 = -1;
	Var1.f_5 = 0;
	Var1.f_6 = 1;
	Var1.f_7 = 2;
	Var1.f_8 = { Param0 };
	Var1.f_11 = { Param1 };
	Var1.f_14 = fParam2;
	Var1.f_15 = 0;
	Var1.f_16 = 1;
	Var1.f_17 = 0;
	Param5.f_7 = 0;
	if (func_9(&Var1, &Param5, &Var0))
	{
		*uParam3 = { Var0[0 /*3*/] };
		*fParam4 = Var0.f_16[0];
		return 1;
	}
	return 0;
}

int func_9(var uParam0, var uParam1, var uParam2)
{
	int iVar0;
	struct<3> Var1;
	float fVar2;
	float fVar3;
	float fVar4;
	float fVar5;
	struct<3> Var6;
	struct<3> Var7;
	struct<3> Var8;
	int iVar9;
	struct<3> Var10;
	struct<3> Var11;
	var uVar12;
	bool bVar13;
	struct<56> Var14;
	bool bVar15;
	
	bVar13 = false;
	switch (uParam0->f_7)
	{
		case 0:
			if (((!Global_2405074.f_2460 == *uParam0 || !Global_2405074.f_2460.f_1 == uParam0->f_1) || !Global_2405074.f_2460.f_2 == uParam0->f_2) || !Global_2405074.f_2463 == uParam0->f_4)
			{
				bVar13 = true;
			}
			break;
		
		case 1:
			if (((((!Global_2405074.f_2474 == uParam0->f_8 || !Global_2405074.f_2474.f_1 == uParam0->f_8.f_1) || !Global_2405074.f_2474.f_2 == uParam0->f_8.f_2) || !Global_2405074.f_2477 == uParam0->f_11) || !Global_2405074.f_2477.f_1 == uParam0->f_11.f_1) || !Global_2405074.f_2477.f_2 == uParam0->f_11.f_2)
			{
				bVar13 = true;
			}
			break;
		
		case 2:
			if ((((((!Global_2405074.f_2474 == uParam0->f_8 || !Global_2405074.f_2474.f_1 == uParam0->f_8.f_1) || !Global_2405074.f_2474.f_2 == uParam0->f_8.f_2) || !Global_2405074.f_2477 == uParam0->f_11) || !Global_2405074.f_2477.f_1 == uParam0->f_11.f_1) || !Global_2405074.f_2477.f_2 == uParam0->f_11.f_2) || !Global_2405074.f_2480 == uParam0->f_14)
			{
				bVar13 = true;
			}
			break;
	}
	if (Global_1312333)
	{
		if (!Global_2405074.f_2481 == uParam0->f_7)
		{
			bVar13 = true;
		}
		if (unk_0x7FD2BDF03806FD9D(Global_2405074.f_2467) && !Global_2405074.f_2467 == unk_0x354AD085195C5FA6())
		{
			bVar13 = true;
		}
	}
	if (bVar13)
	{
		if (Global_2405074.f_2458 == 1)
		{
			if (unk_0x7FD2BDF03806FD9D(Global_2405074.f_2467))
			{
				if (Global_2405074.f_2467 == unk_0x354AD085195C5FA6())
				{
					if (unk_0x624736CA66E14161(unk_0x6CAAB7E78B5D978A(), Global_2405074.f_2464) < func_182(0))
					{
						return 0;
					}
				}
				else if (unk_0x624736CA66E14161(unk_0x6CAAB7E78B5D978A(), Global_2405074.f_2464) < func_182(0))
				{
					return 0;
				}
			}
			unk_0xD30526FDC02B7349();
			unk_0x4A4DC4626419A059();
			func_181();
		}
		Global_2405074.f_2458 = 0;
	}
	else if (unk_0x624736CA66E14161(unk_0x6CAAB7E78B5D978A(), Global_2405074.f_2464) > func_182(0))
	{
		Global_2405074.f_2465 = unk_0x6CAAB7E78B5D978A();
		func_175();
	}
	switch (uParam0->f_7)
	{
		case 0:
			fVar2 = (*uParam0 - uParam0->f_4);
			fVar3 = (uParam0->f_1 - uParam0->f_4);
			fVar4 = (*uParam0 + uParam0->f_4);
			fVar5 = (uParam0->f_1 + uParam0->f_4);
			break;
		
		case 1:
			if (uParam0->f_8 < uParam0->f_11)
			{
				fVar2 = uParam0->f_8;
				fVar4 = uParam0->f_11;
			}
			else
			{
				fVar2 = uParam0->f_11;
				fVar4 = uParam0->f_8;
			}
			if (uParam0->f_8.f_1 < uParam0->f_11.f_1)
			{
				fVar3 = uParam0->f_8.f_1;
				fVar5 = uParam0->f_11.f_1;
			}
			else
			{
				fVar3 = uParam0->f_11.f_1;
				fVar5 = uParam0->f_8.f_1;
			}
			break;
		
		case 2:
			if (uParam0->f_8 < uParam0->f_11)
			{
				fVar2 = (uParam0->f_8 - (0.5f * uParam0->f_14));
				fVar4 = (uParam0->f_11 + (0.5f * uParam0->f_14));
			}
			else
			{
				fVar2 = (uParam0->f_11 - (0.5f * uParam0->f_14));
				fVar4 = (uParam0->f_8 + (0.5f * uParam0->f_14));
			}
			if (uParam0->f_8.f_1 < uParam0->f_11.f_1)
			{
				fVar3 = (uParam0->f_8.f_1 - (0.5f * uParam0->f_14));
				fVar5 = (uParam0->f_11.f_1 + (0.5f * uParam0->f_14));
			}
			else
			{
				fVar3 = (uParam0->f_11.f_1 - (0.5f * uParam0->f_14));
				fVar5 = (uParam0->f_8.f_1 + (0.5f * uParam0->f_14));
			}
			break;
	}
	unk_0xB65F86FFF1334E95(fVar2, fVar3, fVar4, fVar5);
	if (uParam0->f_7 == 0)
	{
		Var6 = { *uParam0 };
	}
	else
	{
		Var6 = { uParam0->f_8 + uParam0->f_11 * Vector(0.5f, 0.5f, 0.5f) };
	}
	Var7 = { Var6 + Vector(-0.1f, -0.1f, -0.1f) };
	Var8 = { Var6 + Vector(0.1f, 0.1f, 0.1f) };
	if (!Global_2405074.f_2458)
	{
		unk_0xD30526FDC02B7349();
		unk_0x4A4DC4626419A059();
		func_181();
		if (uParam1->f_7 && uParam0->f_7 == 0)
		{
			if (vmag(*uParam0) > 0f)
			{
				if (func_174(*uParam0, 6f, 1f, 1f, 5f, 1, 1, 1, 120f, 0, -1, 1, uParam1->f_5, uParam0->f_17, 0, 0, 0))
				{
					*(uParam2[0 /*3*/]) = { *uParam0 };
					uParam2->f_16[0] = uParam0->f_3;
					return 1;
				}
			}
		}
		if (!unk_0x1B1C5BD8506FCF84())
		{
			Global_2405074.f_2481 = uParam0->f_7;
			switch (uParam0->f_7)
			{
				case 0:
					Global_2405074.f_2460 = { *uParam0 };
					Global_2405074.f_2463 = uParam0->f_4;
					break;
				
				case 1:
					Global_2405074.f_2474 = { uParam0->f_8 };
					Global_2405074.f_2477 = { uParam0->f_11 };
					Global_2405074.f_2480 = 0f;
					Global_2405074.f_2460 = { uParam0->f_8 + uParam0->f_11 / Vector(2f, 2f, 2f) };
					break;
				
				case 2:
					Global_2405074.f_2474 = { uParam0->f_8 };
					Global_2405074.f_2477 = { uParam0->f_11 };
					Global_2405074.f_2480 = uParam0->f_14;
					Global_2405074.f_2460 = { uParam0->f_8 + uParam0->f_11 / Vector(2f, 2f, 2f) };
					break;
			}
			if (!uParam1->f_8 && !uParam1->f_9)
			{
				func_173(Var6.x, Var6.f_1);
			}
			Global_2405074.f_2459 = 1;
			Global_2405074.f_2458 = 1;
			Global_2405074.f_2465 = unk_0x6CAAB7E78B5D978A();
			Global_2405074.f_2464 = unk_0x6CAAB7E78B5D978A();
			Global_2405074.f_2467 = unk_0x354AD085195C5FA6();
		}
		else
		{
			return 0;
		}
	}
	if (Global_2405074.f_2458)
	{
		if (Global_2405074.f_2459 == 1)
		{
			if (unk_0x71B5E9AB554C28B8(fVar2, fVar3, fVar4, fVar5) || unk_0x624736CA66E14161(unk_0x6CAAB7E78B5D978A(), Global_2405074.f_2465) > 5000)
			{
				Global_2405074.f_2465 = unk_0x6CAAB7E78B5D978A();
				if (uParam1->f_8 || uParam1->f_9)
				{
					if (uParam0->f_21)
					{
						*(uParam2[0 /*3*/]) = { uParam0->f_18 };
					}
					else
					{
						*(uParam2[0 /*3*/]) = { Var6 };
					}
					Var14.f_6 = 1082130432;
					Var14.f_7 = 1176255488;
					Var14.f_8 = 1;
					Var14.f_10 = 1;
					Var14.f_13 = 1;
					Var14.f_15 = 1;
					Var14.f_16 = 1;
					Var14.f_31 = 1;
					Var14.f_34 = joaat("tailgater");
					Var14.f_38 = 2;
					Var14.f_45 = 2;
					Var14.f_49 = 1123024896;
					Var14.f_53 = 999;
					Var14.f_54 = 1176256410;
					Var14.f_55 = 1;
					Var14.f_56 = 1;
					Var14.f_57 = 1;
					Var14 = { *uParam1 };
					Var14.f_3 = uParam1->f_5;
					Var14.f_11 = uParam1->f_9;
					Var14.f_18 = 1;
					if (uParam1->f_32 > 0f)
					{
						Var14.f_6 = uParam1->f_32;
					}
					switch (uParam0->f_7)
					{
						case 0:
							Var14.f_19 = { *uParam0 };
							Var14.f_25 = uParam0->f_4;
							break;
						
						case 1:
							Var14.f_19 = { uParam0->f_8 };
							Var14.f_22 = { uParam0->f_11 };
							Var14.f_25 = 0f;
							break;
						
						case 2:
							Var14.f_19 = { uParam0->f_8 };
							Var14.f_22 = { uParam0->f_11 };
							Var14.f_25 = uParam0->f_14;
							break;
					}
					Var14.f_26 = uParam0->f_7;
					Var14.f_12 = uParam0->f_15;
					if (uParam0->f_21)
					{
						Var14.f_30 = 1;
						Var14.f_32 = 1;
					}
					iVar9 = 0;
					while (iVar9 < 2)
					{
						Var14.f_38[iVar9 /*3*/] = { uParam1->f_13[iVar9 /*3*/] };
						Var14.f_45[iVar9] = uParam1->f_20[iVar9];
						iVar9++;
					}
					Var14.f_51 = uParam1->f_30;
					Var14.f_55 = uParam0->f_16;
					if (uParam0->f_26)
					{
						Var14.f_10 = 0;
					}
					if (func_172(Global_4456448.f_129348))
					{
						Var14.f_9 = 1;
					}
					func_145(uParam2[0 /*3*/], &(uParam2->f_16[0]), &Var14);
					if ((uParam1->f_7 && uParam1->f_9) && uParam0->f_7 == 0)
					{
						if (!func_144(*(uParam2[0 /*3*/]), *uParam0, uParam0->f_4, 1, 1))
						{
							*(uParam2[0 /*3*/]) = { *uParam0 };
							uParam2->f_16[0] = uParam0->f_3;
						}
					}
					Global_2405074.f_2459 = 9;
				}
				else
				{
					Global_2405074.f_2459 = 2;
				}
			}
		}
		if (Global_2405074.f_2459 == 2)
		{
			if ((unk_0x4A0F5B17D75129C9(Var7, Var8) || unk_0x624736CA66E14161(unk_0x6CAAB7E78B5D978A(), Global_2405074.f_2465) > 15000) || unk_0xA7FA5002ECC3057F(Var7, Var8) == 0)
			{
				Global_2405074.f_2465 = unk_0x6CAAB7E78B5D978A();
				if (uParam0->f_5 && !func_141(unk_0x460153A63B9477BC(), 0))
				{
					Global_2405074.f_2459 = 3;
				}
				else
				{
					Global_2405074.f_2459 = 4;
				}
			}
			else if (unk_0x624736CA66E14161(unk_0x6CAAB7E78B5D978A(), Global_2405074.f_2469) > 7000)
			{
				func_140(Var6.x, Var6.f_1);
			}
		}
		if (Global_2405074.f_2459 == 3)
		{
			if (func_139() || unk_0x624736CA66E14161(unk_0x6CAAB7E78B5D978A(), Global_2405074.f_2465) > 10000)
			{
				Global_2405074.f_2465 = unk_0x6CAAB7E78B5D978A();
				Global_2405074.f_2459 = 4;
			}
		}
		if (Global_2405074.f_2459 == 4)
		{
			if (unk_0x1B1C5BD8506FCF84())
			{
				unk_0xD30526FDC02B7349();
				unk_0x4A4DC4626419A059();
			}
			else
			{
				iVar0 = 0;
				func_175();
				if (uParam0->f_5)
				{
					if (vmag(*uParam1) == 0f)
					{
						iVar0 += 2;
					}
					if (uParam1->f_3)
					{
						iVar0 += 8;
					}
					iVar0 += 16;
					iVar0 += 32;
					if (!unk_0x6CC163E30ECE0790(unk_0x460153A63B9477BC()) == -1)
					{
						iVar0 += 64;
						iVar0 += 128;
						iVar0 += 256;
					}
					iVar0 += 2048;
					iVar0 += 512;
					iVar0 += 1024;
					switch (uParam0->f_7)
					{
						case 0:
							if (unk_0x9B02A1F590CDE09E(unk_0x460153A63B9477BC(), *uParam0, uParam0->f_4, *uParam1, iVar0))
							{
								Global_2405074.f_2465 = unk_0x6CAAB7E78B5D978A();
								Global_2405074.f_2459 = 5;
							}
							break;
						
						case 1:
							func_138(uParam0->f_8, uParam0->f_11, &Var10, &Var11, &uVar12);
							if (unk_0x8A8CC6889DD09116(unk_0x460153A63B9477BC(), Var10, Var11, uVar12, *uParam1, iVar0))
							{
								Global_2405074.f_2465 = unk_0x6CAAB7E78B5D978A();
								Global_2405074.f_2459 = 5;
							}
							break;
						
						case 2:
							if (unk_0x8A8CC6889DD09116(unk_0x460153A63B9477BC(), uParam0->f_8, uParam0->f_11, uParam0->f_14, *uParam1, iVar0))
							{
								Global_2405074.f_2465 = unk_0x6CAAB7E78B5D978A();
								Global_2405074.f_2459 = 5;
							}
							break;
					}
				}
				else
				{
					if (uParam1->f_3)
					{
						iVar0++;
					}
					iVar0 += 2;
					if (uParam1->f_10)
					{
						iVar0 += 32;
					}
					Global_2405074.f_2465 = unk_0x6CAAB7E78B5D978A();
					Global_2405074.f_2459 = 5;
					switch (uParam0->f_7)
					{
						case 0:
							unk_0x3E31C04CCF06119B(*uParam0, uParam0->f_4, 5f, iVar0, 2f, 5000);
							break;
						
						case 1:
							func_138(uParam0->f_8, uParam0->f_11, &Var10, &Var11, &uVar12);
							unk_0xDFBD9C6F251026AD(Var10, Var11, uVar12, iVar0, 2f, 5000);
							break;
						
						case 2:
							unk_0xDFBD9C6F251026AD(uParam0->f_8, uParam0->f_11, uParam0->f_14, iVar0, 2f, 5000);
							break;
						}
					}
				}
		}
		if (Global_2405074.f_2459 == 5)
		{
			if (func_64(uParam2, uParam0, uParam1, 0))
			{
				if (Global_2405074.f_2485.f_5)
				{
					Global_2405074.f_2465 = unk_0x6CAAB7E78B5D978A();
					Global_2405074.f_2459 = 6;
				}
				else
				{
					Global_2405074.f_2465 = unk_0x6CAAB7E78B5D978A();
					if (!uParam0->f_5)
					{
						if (!vmag(*uParam1) == 0f)
						{
							Var1 = { *uParam1 - *(uParam2[0 /*3*/]) };
							uParam2->f_16[0] = unk_0x9075769DD4F148B7(Var1.x, Var1.f_1);
						}
					}
					Global_2405074.f_2459 = 9;
				}
			}
			else if (unk_0x624736CA66E14161(unk_0x6CAAB7E78B5D978A(), Global_2405074.f_2465) > 20000)
			{
				unk_0xD30526FDC02B7349();
				unk_0x4A4DC4626419A059();
				Global_2405074.f_2465 = unk_0x6CAAB7E78B5D978A();
				Global_2405074.f_2459 = 8;
			}
		}
		if (Global_2405074.f_2459 == 6)
		{
			iVar0 = 0;
			Global_2405074.f_2485.f_1 = 0;
			if (uParam1->f_3)
			{
				iVar0++;
			}
			else if (uParam0->f_7 == 0)
			{
				if (!func_63(uParam0->f_4))
				{
					if (unk_0x0B1B45E748AD48BA(unk_0xD5C5CDCF5230F2BA(Var6)))
					{
						iVar0++;
					}
				}
			}
			else if (!func_62(uParam0->f_8, uParam0->f_11, uParam0->f_14))
			{
				if (unk_0x0B1B45E748AD48BA(unk_0xD5C5CDCF5230F2BA(Var6)))
				{
					iVar0++;
				}
			}
			iVar0 += 2;
			if (uParam1->f_10)
			{
				iVar0 += 32;
			}
			if (uParam0->f_15)
			{
				iVar0 += 16;
			}
			Global_2405074.f_2465 = unk_0x6CAAB7E78B5D978A();
			Global_2405074.f_2459 = 7;
			switch (uParam0->f_7)
			{
				case 0:
					unk_0x3E31C04CCF06119B(*uParam0, uParam0->f_4, 5f, iVar0, 2f, 5000);
					break;
				
				case 1:
					func_138(uParam0->f_8, uParam0->f_11, &Var10, &Var11, &uVar12);
					unk_0xDFBD9C6F251026AD(Var10, Var11, uVar12, iVar0, 2f, 5000);
					break;
				
				case 2:
					unk_0xDFBD9C6F251026AD(uParam0->f_8, uParam0->f_11, uParam0->f_14, iVar0, 2f, 5000);
					break;
				}
		}
		if (Global_2405074.f_2459 == 7)
		{
			if (func_64(uParam2, uParam0, uParam1, 1))
			{
				if (vmag(*(uParam2[0 /*3*/])) == 0f)
				{
					iVar9 = 0;
					while (iVar9 < 3)
					{
						if (vmag(*(uParam2[0 /*3*/])) == 0f)
						{
							if (!vmag(Global_2405074.f_2619[iVar9 /*3*/]) == 0f)
							{
								switch (uParam0->f_7)
								{
									case 0:
										if (func_144(Global_2405074.f_2619[iVar9 /*3*/], *uParam0, uParam0->f_4, 0, 0))
										{
											*(uParam2[0 /*3*/]) = { Global_2405074.f_2619[iVar9 /*3*/] };
										}
										break;
									
									case 1:
										if (func_60(Global_2405074.f_2619[iVar9 /*3*/], uParam0->f_8, uParam0->f_11, 0, 0))
										{
											*(uParam2[0 /*3*/]) = { Global_2405074.f_2619[iVar9 /*3*/] };
										}
										break;
									
									case 2:
										if (unk_0x3BC3A4E4A1827EEE(Global_2405074.f_2619[iVar9 /*3*/], uParam0->f_8, uParam0->f_11, uParam0->f_14, 0, 1))
										{
											*(uParam2[0 /*3*/]) = { Global_2405074.f_2619[iVar9 /*3*/] };
										}
										break;
									}
								}
						}
						iVar9++;
					}
					if (vmag(*(uParam2[0 /*3*/])) == 0f)
					{
						switch (uParam0->f_7)
						{
							case 0:
								Var1 = { *uParam0 };
								break;
							
							case 1:
							case 2:
								Var1 = { uParam0->f_8 + uParam0->f_11 / Vector(2f, 2f, 2f) };
								break;
						}
						func_12(&Var1, 0, 1, 1, 0, uParam0, uParam1);
						*(uParam2[0 /*3*/]) = { Var1 };
					}
				}
				Global_2405074.f_2465 = unk_0x6CAAB7E78B5D978A();
				if (!vmag(*uParam1) == 0f)
				{
					iVar9 = 0;
					while (iVar9 < 5)
					{
						Var1 = { *uParam1 - *(uParam2[iVar9 /*3*/]) };
						uParam2->f_16[iVar9] = unk_0x9075769DD4F148B7(Var1.x, Var1.f_1);
						iVar9++;
					}
				}
				Global_2405074.f_2459 = 9;
			}
			else if (unk_0x624736CA66E14161(unk_0x6CAAB7E78B5D978A(), Global_2405074.f_2465) > 20000)
			{
				Global_2405074.f_2465 = unk_0x6CAAB7E78B5D978A();
				Global_2405074.f_2459 = 8;
			}
		}
		if (Global_2405074.f_2459 == 8)
		{
			if (uParam0->f_5)
			{
				if (func_11(Global_2405074.f_486))
				{
				}
			}
			else if (Global_2405074.f_2485.f_2)
			{
				func_10(uParam2, &(Global_2405074.f_2485.f_6));
			}
			else
			{
				if (uParam0->f_15)
				{
					bVar15 = false;
				}
				else
				{
					bVar15 = true;
				}
				*(uParam2[0 /*3*/]) = { Global_2405074.f_2460 };
				func_12(uParam2[0 /*3*/], 0, bVar15, 0, 0, uParam0, uParam1);
			}
			Global_2405074.f_2465 = unk_0x6CAAB7E78B5D978A();
			Global_2405074.f_2459 = 9;
		}
		if (Global_2405074.f_2459 == 9)
		{
			Global_2405074.f_2458 = 0;
			unk_0xD30526FDC02B7349();
			unk_0x4A4DC4626419A059();
			func_181();
			return 1;
		}
		Global_2405074.f_2464 = unk_0x6CAAB7E78B5D978A();
	}
	return 0;
}

void func_10(var uParam0, var uParam1)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 5)
	{
		*(uParam0[iVar0 /*3*/]) = { (uParam1[iVar0 /*10*/])->f_4 };
		uParam0->f_16[iVar0] = (uParam1[iVar0 /*10*/])->f_7;
		uParam0->f_22[iVar0] = (*uParam1)[iVar0 /*10*/];
		iVar0++;
	}
}

int func_11(int iParam0)
{
	if (iParam0 == 3 || iParam0 == 26)
	{
		return 1;
	}
	return 0;
}

void func_12(var uParam0, bool bParam1, bool bParam2, int iParam3, bool bParam4, var uParam5, var uParam6)
{
	struct<3> Var0;
	var uVar1;
	struct<56> Var2;
	var uVar3;
	int iVar4;
	bool bVar5;
	int iVar6;
	struct<3> Var7;
	struct<3> Var8;
	struct<3> Var9;
	float fVar10;
	
	Var2.f_6 = 1082130432;
	Var2.f_7 = 1176255488;
	Var2.f_8 = 1;
	Var2.f_10 = 1;
	Var2.f_13 = 1;
	Var2.f_15 = 1;
	Var2.f_16 = 1;
	Var2.f_31 = 1;
	Var2.f_34 = joaat("tailgater");
	Var2.f_38 = 2;
	Var2.f_45 = 2;
	Var2.f_49 = 1123024896;
	Var2.f_53 = 999;
	Var2.f_54 = 1176256410;
	Var2.f_55 = 1;
	Var2.f_56 = 1;
	Var2.f_57 = 1;
	if (bParam1)
	{
		iVar6 = 0;
	}
	else
	{
		iVar6 = 16;
	}
	if (!uParam6->f_3)
	{
		if (uParam5->f_5)
		{
			if (!uParam5->f_22)
			{
				iVar6 += 4;
			}
			else
			{
				switch (uParam5->f_7)
				{
					case 0:
						Var7 = { *uParam5 };
						if (func_63(uParam5->f_4) || !unk_0x0B1B45E748AD48BA(unk_0xD5C5CDCF5230F2BA(Var7)))
						{
							iVar6 += 4;
						}
						break;
					
					case 1:
						Var7 = { uParam5->f_8 + uParam5->f_11 * Vector(0.5f, 0.5f, 0.5f) };
						if (func_62(uParam5->f_8, uParam5->f_11, 0f) || !unk_0x0B1B45E748AD48BA(unk_0xD5C5CDCF5230F2BA(Var7)))
						{
							iVar6 += 4;
						}
						break;
					
					case 2:
						Var7 = { uParam5->f_8 + uParam5->f_11 * Vector(0.5f, 0.5f, 0.5f) };
						if (func_62(uParam5->f_8, uParam5->f_11, uParam5->f_14) || !unk_0x0B1B45E748AD48BA(unk_0xD5C5CDCF5230F2BA(Var7)))
						{
							iVar6 += 4;
						}
						break;
					}
			}
		}
		else
		{
			iVar6 += 4;
		}
	}
	if (func_28(*uParam0, &Var0, iVar6, iParam3, 1))
	{
	}
	else
	{
		bVar5 = true;
	}
	if (bVar5)
	{
		Var0 = { *uParam0 };
		Var2 = { *uParam6 };
		Var2.f_8 = 1;
		Var2.f_3 = uParam6->f_5;
		if (bParam2)
		{
			Var2.f_10 = 0;
		}
		else
		{
			Var2.f_10 = 1;
		}
		Var2.f_13 = uParam5->f_15;
		Var2.f_15 = iParam3;
		if (uParam6->f_32 > 0f)
		{
			Var2.f_6 = uParam6->f_32;
		}
		if (bParam4)
		{
			Var2.f_18 = 1;
			Var2.f_26 = uParam5->f_7;
			switch (uParam5->f_7)
			{
				case 0:
					Var2.f_19 = { *uParam5 };
					Var2.f_25 = uParam5->f_4;
					break;
				
				case 1:
					Var2.f_19 = { uParam5->f_8 };
					Var2.f_22 = { uParam5->f_11 };
					Var2.f_25 = 0f;
					break;
				
				case 2:
					Var2.f_19 = { uParam5->f_8 };
					Var2.f_22 = { uParam5->f_11 };
					Var2.f_25 = uParam5->f_14;
					break;
				}
		}
		iVar4 = 0;
		while (iVar4 < 2)
		{
			Var2.f_38[iVar4 /*3*/] = { uParam6->f_13[iVar4 /*3*/] };
			Var2.f_45[iVar4] = uParam6->f_20[iVar4];
			iVar4++;
		}
		Var2.f_51 = uParam6->f_30;
		Var2.f_55 = uParam5->f_16;
		if (func_24(unk_0x460153A63B9477BC(), 0))
		{
			Var2.f_9 = 1;
		}
		func_145(&Var0, &uVar1, &Var2);
	}
	if (bParam4)
	{
		switch (uParam5->f_7)
		{
			case 0:
				Var8 = { *uParam5 };
				fVar10 = uParam5->f_4;
				break;
			
			case 1:
				Var8 = { uParam5->f_8 };
				Var9 = { uParam5->f_11 };
				break;
			
			case 2:
				Var8 = { uParam5->f_8 };
				Var9 = { uParam5->f_11 };
				fVar10 = uParam5->f_14;
				break;
		}
		if (!func_23(Var0, uParam5->f_7, Var8, Var9, fVar10))
		{
			if (func_28(*uParam0, &Var0, iVar6, iParam3, 0))
			{
				if (!func_23(Var0, uParam5->f_7, Var8, Var9, fVar10))
				{
					if (uParam5->f_7 == 2 || uParam5->f_7 == 1)
					{
						Var0 = { Var8 + Var9 * Vector(0.5f, 0.5f, 0.5f) };
					}
					else
					{
						Var0 = { Var8 };
					}
					if (unk_0xE5CC8E2D904E42CE(Var0, &uVar3, 0, 0))
					{
						Var0.f_2 = uVar3;
					}
				}
			}
			else if (func_13(uParam0, 1, 1, 1, 1))
			{
				func_12(uParam0, bParam1, bParam2, iParam3, bParam4, uParam5, uParam6);
			}
			else
			{
				if (uParam5->f_7 == 2 || uParam5->f_7 == 1)
				{
					Var0 = { Var8 + Var9 * Vector(0.5f, 0.5f, 0.5f) };
				}
				else
				{
					Var0 = { Var8 };
				}
				if (unk_0xE5CC8E2D904E42CE(Var0, &uVar3, 0, 0))
				{
					Var0.f_2 = uVar3;
				}
			}
		}
	}
	*uParam0 = { Var0 };
	Global_2405074.f_662 = 1;
}

int func_13(var uParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4)
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
				if (func_22(*uParam0, &(Global_2409990[iVar0 /*17*/]), 1008981770, bParam4, 0))
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
							func_14(&Var1, &(Global_2409990[iVar0 /*17*/]), 1036831949, 0, bParam3);
							if (func_13(&Var1, 0, 0, 0, 1))
							{
								Var1 = { *uParam0 };
								func_14(&Var1, &(Global_2409990[iVar0 /*17*/]), 1036831949, 1, 0);
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

void func_14(var uParam0, var uParam1, float fParam2, bool bParam3, bool bParam4)
{
	if (bParam4)
	{
		switch (uParam1->f_10)
		{
			case 0:
				*uParam0 = { func_21(*uParam0, *uParam1, 0f, 0f, 0f, (uParam1->f_6 + (IntToFloat(Global_2405074.f_2728) * uParam1->f_8)), 0, fParam2, bParam3) };
				break;
			
			case 1:
				*uParam0 = { func_21(*uParam0, *uParam1, uParam1->f_3, 0f, 1, fParam2, bParam3) };
				break;
			
			case 2:
				*uParam0 = { func_21(*uParam0, *uParam1, uParam1->f_3, uParam1->f_6, 2, fParam2, bParam3) };
				break;
		}
	}
	else
	{
		switch (uParam1->f_10)
		{
			case 0:
				func_19(uParam0, *uParam1, (uParam1->f_6 + (IntToFloat(Global_2405074.f_2728) * uParam1->f_8)), fParam2, bParam3, 0);
				break;
			
			case 1:
				func_18(uParam0, *uParam1, uParam1->f_3, fParam2, bParam3);
				break;
			
			case 2:
				func_15(uParam0, *uParam1, uParam1->f_3, uParam1->f_6, fParam2, bParam3);
				break;
			}
	}
}

void func_15(var uParam0, struct<3> Param1, struct<3> Param2, float fParam3, float fParam4, bool bParam5)
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
	Var2 = { func_17(0f, 0f, 1f, Var0) };
	Var2 = { Var2 / FtoV(vmag(Var2)) };
	fVar3 = (vmag(Var1) * sin(unk_0xED4B54A984E6E361(Var0.x, Var0.f_1, Var1.x, Var1.f_1)));
	if (fVar3 < (fParam3 * 0.5f))
	{
		if (!bParam5)
		{
			if (func_16(Var2, Var1) >= 0f)
			{
				Var2 = { Var2 * FtoV((((fParam3 * 0.5f) - fVar3) + fParam4)) };
			}
			else
			{
				Var2 = { Var2 * FtoV(((((fParam3 * 0.5f) - fVar3) + fParam4) * -1f)) };
			}
		}
		else if (func_16(Var2, Var1) >= 0f)
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
		Var2 = { func_17(0f, 0f, 1f, Var0) };
		Var2 = { Var2 / FtoV(vmag(Var2)) };
		Var2 = { Var2 * FtoV((fParam3 * 0.5f)) };
		Var8 = { Var7 - Var2 };
		Var9 = { Var7 + Var2 };
		Var10 = { Var9 - Var8 };
		Var10.f_2 = 0f;
		Var11 = { *uParam0 - Var8 };
		Var11.f_2 = 0f;
		Var2 = { func_17(0f, 0f, 1f, Var10) };
		Var2 = { Var2 / FtoV(vmag(Var2)) };
		fVar3 = (vmag(Var11) * sin(unk_0xED4B54A984E6E361(Var10.x, Var10.f_1, Var11.x, Var11.f_1)));
		if (!bParam5)
		{
			if (func_16(Var2, Var11) >= 0f)
			{
				Var2 = { Var2 * FtoV((((fVar6 * 0.5f) - fVar3) + fParam4)) };
			}
			else
			{
				Var2 = { Var2 * FtoV(((((fVar6 * 0.5f) - fVar3) + fParam4) * -1f)) };
			}
		}
		else if (func_16(Var2, Var11) >= 0f)
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

float func_16(struct<3> Param0, struct<3> Param1)
{
	return (((Param0.x * Param1.x) + (Param0.f_1 * Param1.f_1)) + (Param0.f_2 * Param1.f_2));
}

Vector3 func_17(struct<3> Param0, struct<3> Param1)
{
	return ((Param0.f_1 * Param1.f_2) - (Param0.f_2 * Param1.f_1)), ((Param0.f_2 * Param1.x) - (Param0.x * Param1.f_2)), ((Param0.x * Param1.f_1) - (Param0.f_1 * Param1.x));
}

void func_18(var uParam0, struct<2> Param1, var uParam2, struct<2> Param3, var uParam4, float fParam5, bool bParam6)
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

void func_19(var uParam0, struct<3> Param1, float fParam2, float fParam3, bool bParam4, float fParam5)
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
			func_20(&Var0, 0f, 0f, unk_0x658086F2B3C5E4E4(0f, 360f));
		}
		else
		{
			func_20(&Var0, 0f, 0f, fParam5);
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

void func_20(var uParam0, struct<3> Param1)
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

Vector3 func_21(struct<3> Param0, struct<3> Param1, struct<3> Param2, float fParam3, int iParam4, float fParam5, bool bParam6)
{
	int iVar0;
	struct<3> Var1;
	
	switch (iParam4)
	{
		case 0:
			func_19(&Param0, Param1, fParam3, fParam5, bParam6, 0);
			break;
		
		case 1:
			func_18(&Param0, Param1, Param2, fParam5, bParam6);
			break;
		
		case 2:
			func_15(&Param0, Param1, Param2, fParam3, fParam5, bParam6);
			break;
	}
	iVar0 = 0;
	while (iVar0 < 40)
	{
		unk_0x204D69DA02AB1105(Param0, iVar0 * 5, &Var1, 1, 0f, 0f);
		switch (iParam4)
		{
			case 0:
				if (!func_144(Var1, Param1, fParam3, 0, 0))
				{
					return Var1;
				}
				break;
			
			case 1:
				if (!func_60(Var1, Param1, Param2, 0, 0))
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

int func_22(struct<3> Param0, var uParam1, float fParam2, bool bParam3, bool bParam4)
{
	switch (uParam1->f_10)
	{
		case 0:
			return func_144(Param0, *uParam1, ((uParam1->f_6 + fParam2) + (IntToFloat(Global_2405074.f_2728) * uParam1->f_8)), bParam3, bParam4);
			break;
		
		case 1:
			return func_60(Param0, *uParam1 + Vector((fParam2 * -1f), (fParam2 * -1f), (fParam2 * -1f)), uParam1->f_3 + Vector(fParam2, fParam2, fParam2), bParam3, bParam4);
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

int func_23(struct<3> Param0, int iParam1, struct<3> Param2, struct<3> Param3, float fParam4)
{
	switch (iParam1)
	{
		case 0:
			if (vdist(Param0, Param2) <= fParam4)
			{
				return 1;
			}
			break;
		
		case 1:
			return func_60(Param0, Param2, Param3, 0, 0);
			break;
		
		case 2:
			return unk_0x3BC3A4E4A1827EEE(Param0, Param2, Param3, fParam4, 0, 1);
			break;
	}
	return 0;
}

int func_24(int iParam0, bool bParam1)
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
	if (iParam0 != func_27())
	{
		if (func_26(iParam0, 1, 1))
		{
			if (Global_2425869[iParam0 /*443*/].f_314.f_6 != -1 && Global_2425869[iParam0 /*443*/].f_314.f_9 != func_27())
			{
				return func_25(Global_2425869[iParam0 /*443*/].f_314.f_6) == 12;
			}
		}
	}
	return 0;
}

int func_25(int iParam0)
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

int func_26(int iParam0, bool bParam1, bool bParam2)
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

int func_27()
{
	return -1;
}

int func_28(struct<3> Param0, var uParam1, int iParam2, int iParam3, bool bParam4)
{
	if (func_59(Param0, uParam1))
	{
		if (func_29(Param0, uParam1, iParam3, bParam4))
		{
			return 1;
		}
	}
	if (unk_0x6AF63A4C741270B8(Param0, 0, uParam1, iParam2))
	{
		if (func_29(Param0, uParam1, iParam3, bParam4))
		{
			return 1;
		}
	}
	return 0;
}

int func_29(struct<3> Param0, var uParam1, int iParam2, bool bParam3)
{
	float fVar0;
	var uVar1;
	var uVar2;
	
	fVar0 = vdist(Param0, *uParam1);
	if (fVar0 < 40f)
	{
		uVar1 = 2;
		uVar2 = 2;
		if ((iParam2 == 1 && !func_45(Global_2405074.f_509, uParam1, &uVar1, &uVar2, bParam3, 1)) || iParam2 == 0)
		{
			if (!func_33(*uParam1, 1056964608))
			{
				if (!func_30(uParam1, 0))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_30(var uParam0, bool bParam1)
{
	int iVar0;
	struct<3> Var1;
	int iVar2;
	
	Var1 = { *uParam0 };
	iVar2 = func_32(Var1);
	iVar0 = 0;
	while (iVar0 < Global_2411465[iVar2])
	{
		if (func_31(Var1, &(Global_2410195[iVar2 /*141*/][iVar0 /*7*/])))
		{
			if (bParam1)
			{
				func_15(&Var1, Global_2410195[iVar2 /*141*/][iVar0 /*7*/], Global_2410195[iVar2 /*141*/][iVar0 /*7*/].f_3, Global_2410195[iVar2 /*141*/][iVar0 /*7*/].f_6, 1036831949, 0);
				*uParam0 = { Var1 };
			}
			return 1;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Global_2411465[8])
	{
		if (func_31(Var1, &(Global_2410195[8 /*141*/][iVar0 /*7*/])))
		{
			if (bParam1)
			{
				func_15(&Var1, Global_2410195[8 /*141*/][iVar0 /*7*/], Global_2410195[8 /*141*/][iVar0 /*7*/].f_3, Global_2410195[8 /*141*/][iVar0 /*7*/].f_6, 1036831949, 0);
				*uParam0 = { Var1 };
			}
			return 1;
		}
		iVar0++;
	}
	return 0;
}

bool func_31(struct<3> Param0, var uParam1)
{
	return unk_0x3BC3A4E4A1827EEE(Param0, *uParam1, uParam1->f_3, uParam1->f_6, 0, 1);
}

int func_32(struct<2> Param0, var uParam1)
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

int func_33(struct<3> Param0, float fParam1)
{
	int iVar0;
	
	if (func_42(unk_0x460153A63B9477BC(), 1, 0))
	{
		if (Global_4718592.f_25199 > 0)
		{
			iVar0 = 0;
			while (iVar0 < Global_4718592.f_25199)
			{
				if (Global_4718592.f_25200[iVar0 /*110*/].f_7 != 0)
				{
					if (func_34(Param0, Global_4718592.f_25200[iVar0 /*110*/], Global_4718592.f_25200[iVar0 /*110*/].f_6, Global_4718592.f_25200[iVar0 /*110*/].f_7, fParam1))
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
					if (func_34(Param0, Global_4718592.f_4797[iVar0 /*280*/], Global_4718592.f_4797[iVar0 /*280*/].f_3, Global_4718592.f_4797[iVar0 /*280*/].f_15, 0.5f))
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
					if (func_34(Param0, Global_4718592.f_58908[iVar0 /*339*/], Global_4718592.f_58908[iVar0 /*339*/].f_3, Global_4718592.f_58908[iVar0 /*339*/].f_12, 0.5f))
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
					if (func_34(Param0, unk_0x3E4D3CCC220BDFB1(Global_969055.f_233[iVar0], 1), unk_0xEF7858F25585F853(Global_969055.f_233[iVar0]), unk_0x36FE6D3220816ADA(Global_969055.f_233[iVar0]), 0.5f))
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
					if (func_34(Param0, unk_0x3E4D3CCC220BDFB1(Global_969055.f_119[iVar0], 1), unk_0xEF7858F25585F853(Global_969055.f_119[iVar0]), unk_0x36FE6D3220816ADA(Global_969055.f_119[iVar0]), 0.5f))
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

int func_34(struct<3> Param0, struct<3> Param1, float fParam2, int iParam3, float fParam4)
{
	struct<3> Var0;
	struct<3> Var1;
	float fVar2;
	
	if (vdist(Param0, Param1) < func_41(iParam3, 1008981770))
	{
		func_35(Param1, fParam2, iParam3, &Var0, &Var1, &fVar2, fParam4);
		if (unk_0x3BC3A4E4A1827EEE(Param0, Var0, Var1, fVar2, 0, 1))
		{
			return 1;
		}
	}
	return 0;
}

void func_35(struct<3> Param0, float fParam1, int iParam2, var uParam3, var uParam4, var uParam5, float fParam6)
{
	struct<3> Var0;
	struct<3> Var1;
	struct<3> Var2;
	struct<3> Var3;
	struct<3> Var4;
	
	Var0 = { 0f, 1f, 0f };
	func_20(&Var0, 0f, 0f, fParam1);
	Var0 = { Var0 / FtoV(vmag(Var0)) };
	func_36(iParam2, &Var1, &Var2, 1086324736, 1080033280, 1077936128);
	Var3 = { Param0 + Var0 * FtoV((Var2.f_1 + fParam6)) };
	Var3.f_2 = (Var3.f_2 - ((0.5f * unk_0x0D77CDCF403AEBD2((Var2.f_2 - Var1.f_2))) + fParam6));
	Var4 = { Param0 - Var0 * FtoV(((Var1.f_1 * -1f) + fParam6)) };
	Var4.f_2 = (Var4.f_2 + ((0.5f * unk_0x0D77CDCF403AEBD2((Var2.f_2 - Var1.f_2))) + fParam6));
	*uParam3 = { Var3 };
	*uParam4 = { Var4 };
	*uParam5 = unk_0x0D77CDCF403AEBD2((Var2.x - Var1.x));
}

void func_36(int iParam0, var uParam1, var uParam2, float fParam3, float fParam4, float fParam5)
{
	int iVar0;
	
	if (unk_0x003F998A2839DD5E(iParam0))
	{
		unk_0x140662B520844E45(iParam0, uParam1, uParam2);
	}
	else
	{
		iVar0 = func_39(iParam0);
		if (iVar0 != 0)
		{
			func_37(iVar0, uParam1, uParam2, 1086324736, 1080033280, 1077936128);
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

void func_37(int iParam0, var uParam1, var uParam2, float fParam3, float fParam4, float fParam5)
{
	int iVar0;
	
	func_38(iParam0, &Global_1315831);
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

void func_38(int iParam0, var uParam1)
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

int func_39(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 4)
	{
		iVar1 = iVar0;
		if (func_40(iVar1) == iParam0)
		{
			return iVar1;
		}
		iVar0++;
	}
	return 0;
}

int func_40(int iParam0)
{
	int iVar0;
	
	iVar0 = (1000 + iParam0);
	return iVar0;
}

float func_41(int iParam0, float fParam1)
{
	struct<3> Var0;
	struct<3> Var1;
	struct<3> Var2;
	float fVar3;
	
	if (iParam0 == 0)
	{
		return 5f;
	}
	func_36(iParam0, &Var0, &Var1, 1086324736, 1080033280, 1077936128);
	Var2 = { Var1 - Var0 };
	fVar3 = (sqrt(((((Var2.x * 0.5f) * (Var2.x * 0.5f)) + ((Var2.f_1 * 0.5f) * (Var2.f_1 * 0.5f))) + ((Var2.f_2 * 0.5f) * (Var2.f_2 * 0.5f)))) + fParam1);
	return fVar3;
}

int func_42(int iParam0, bool bParam1, bool bParam2)
{
	if (bParam1)
	{
		if (func_43(iParam0))
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

bool func_43(int iParam0)
{
	return func_44(iParam0);
}

bool func_44(int iParam0)
{
	return unk_0xCE990E643CD9D0E5(Global_1590682[iParam0 /*883*/].f_13.f_1, 0);
}

int func_45(struct<3> Param0, var uParam1, var uParam2, var uParam3, bool bParam4, bool bParam5)
{
	int iVar0;
	bool bVar1;
	
	if (func_52(Param0))
	{
		if (func_13(uParam1, bParam4, 0, 1, 1))
		{
			if (bParam4)
			{
			}
			return 1;
		}
	}
	if (func_47(uParam1, bParam4, 1))
	{
		if (bParam4)
		{
		}
		return 1;
	}
	if (bParam5)
	{
		if (func_46(*uParam1, 1056964608))
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
				func_19(uParam1, *(uParam2[iVar0 /*3*/]), (*uParam3)[iVar0], 1036831949, 0, 0);
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

int func_46(struct<3> Param0, float fParam1)
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

int func_47(var uParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	var uVar1;
	struct<3> Var2;
	
	if (func_49(*uParam0, &iVar0))
	{
		if (bParam1)
		{
			Var2 = { *uParam0 };
			func_14(&Var2, &(Global_2405074.f_365[iVar0 /*12*/]), 1036831949, 0, bParam2);
			if (func_49(Var2, &uVar1) || func_48(Var2))
			{
				Var2 = { *uParam0 };
				func_14(&Var2, &(Global_2405074.f_365[iVar0 /*12*/]), 1036831949, 1, bParam2);
			}
			*uParam0 = { Var2 };
		}
		return 1;
	}
	return 0;
}

int func_48(struct<3> Param0)
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

int func_49(struct<3> Param0, var uParam1)
{
	int iVar0;
	int iVar1;
	
	if (func_51())
	{
		return 0;
	}
	iVar1 = func_50();
	iVar0 = 0;
	while (iVar0 < iVar1)
	{
		if (Global_2405074.f_365[iVar0 /*12*/].f_9 == 1)
		{
			if (func_22(Param0, &(Global_2405074.f_365[iVar0 /*12*/]), 1008981770, 0, 0))
			{
				*uParam1 = iVar0;
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_50()
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

bool func_51()
{
	return Global_1678288.f_482;
}

int func_52(struct<3> Param0)
{
	int iVar0;
	struct<3> Var1;
	
	if (!Global_2405074.f_512 && !Global_2405074.f_513)
	{
		if (!Global_2405074.f_45.f_314)
		{
			if (!func_56(unk_0x460153A63B9477BC(), 1))
			{
				return 1;
			}
			if (!func_55(Param0, 1008981770))
			{
				if (!func_13(&Param0, 0, 0, 0, 1))
				{
					return 1;
				}
				else if (func_13(&Param0, 0, 1, 0, 1))
				{
					return 1;
				}
			}
			else
			{
				iVar0 = func_54(Param0, 1008981770);
				if (iVar0 > -1)
				{
					Var1 = { func_53(&(Global_2405074.f_45[iVar0 /*12*/])) };
					if (!func_13(&Var1, 0, 0, 0, 1))
					{
						if (!func_13(&Param0, 0, 0, 0, 1))
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

Vector3 func_53(var uParam0)
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

int func_54(struct<3> Param0, float fParam1)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (Global_2405074.f_45[iVar0 /*12*/].f_9)
		{
			if (func_22(Param0, &(Global_2405074.f_45[iVar0 /*12*/]), fParam1, 0, 0))
			{
				return iVar0;
			}
		}
		iVar0++;
	}
	return -1;
}

int func_55(struct<3> Param0, float fParam1)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (Global_2405074.f_45[iVar0 /*12*/].f_9)
		{
			if (func_22(Param0, &(Global_2405074.f_45[iVar0 /*12*/]), fParam1, 0, 0))
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

bool func_56(int iParam0, bool bParam1)
{
	if (func_58() != 0)
	{
		return func_57(iParam0) != 0;
	}
	return func_42(iParam0, bParam1, 0);
}

int func_57(int iParam0)
{
	if (func_26(iParam0, 0, 1))
	{
		return Global_2425869[iParam0 /*443*/].f_1;
	}
	return 0;
}

int func_58()
{
	return Global_30968;
}

int func_59(struct<3> Param0, var uParam1)
{
	int iVar0;
	int iVar1;
	float fVar2;
	float fVar3;
	
	iVar1 = -1;
	fVar2 = 999999.9f;
	if (Global_2405074.f_2256 > 0)
	{
		iVar0 = 0;
		while (iVar0 < Global_2405074.f_2256)
		{
			fVar3 = vdist(Global_2405074.f_2257[iVar0 /*4*/], Param0);
			if (fVar3 < fVar2)
			{
				iVar1 = iVar0;
				fVar2 = fVar3;
			}
			iVar0++;
		}
		if (!iVar1 == -1)
		{
			*uParam1 = { Global_2405074.f_2257[iVar1 /*4*/] };
			return 1;
		}
	}
	return 0;
}

int func_60(struct<3> Param0, struct<3> Param1, struct<3> Param2, bool bParam3, bool bParam4)
{
	func_61(&Param1, &Param2);
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

void func_61(var uParam0, var uParam1)
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

int func_62(struct<3> Param0, struct<3> Param1, float fParam2)
{
	struct<3> Var0;
	struct<3> Var1;
	
	if (Param0.x > Param1.x)
	{
		Var1.x = Param0.x;
		Var0.x = Param1.x;
	}
	else
	{
		Var1.x = Param1.x;
		Var0.x = Param0.x;
	}
	if (Param0.f_1 > Param1.f_1)
	{
		Var1.f_1 = Param0.f_1;
		Var0.f_1 = Param1.f_1;
	}
	else
	{
		Var1.f_1 = Param1.f_1;
		Var0.f_1 = Param0.f_1;
	}
	if (Param0.f_2 > Param1.f_2)
	{
		Var1.f_2 = Param0.f_2;
		Var0.f_2 = Param1.f_2;
	}
	else
	{
		Var1.f_2 = Param1.f_2;
		Var0.f_2 = Param0.f_2;
	}
	if (vmag(Var1 - Var0) > 100f)
	{
		return 1;
	}
	if (fParam2 > 50f)
	{
		return 1;
	}
	return 0;
}

int func_63(float fParam0)
{
	if (fParam0 > 50f)
	{
		return 1;
	}
	return 0;
}

int func_64(var uParam0, var uParam1, var uParam2, bool bParam3)
{
	struct<3> Var0;
	float fVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	bool bVar6;
	
	if (Global_2405074.f_2485.f_1 == 0 && Global_2405074.f_2485 == 0)
	{
		if (uParam1->f_5 && !bParam3)
		{
			switch (unk_0x24953052618C0177(&(Global_2405074.f_2485.f_1)))
			{
				case 0:
					func_136(uParam1, uParam2);
					if (!Global_2405074.f_2485.f_2)
					{
						if (uParam2->f_7 && Global_2405074.f_552.f_7 == 0)
						{
							*(uParam0[0 /*3*/]) = { *uParam1 };
							uParam0->f_16[0] = uParam1->f_3;
							return 1;
						}
						else
						{
							if (uParam1->f_21)
							{
								*(uParam0[0 /*3*/]) = { uParam1->f_18 };
							}
							else
							{
								*(uParam0[0 /*3*/]) = { Global_2405074.f_2460 };
							}
							if (uParam1->f_5 && func_11(Global_2405074.f_486))
							{
								if (!Global_2405074.f_2485.f_5)
								{
									Global_2405074.f_2485.f_5 = 1;
								}
								else
								{
									func_12(uParam0[0 /*3*/], 1, 0, 1, 1, uParam1, uParam2);
								}
							}
							else
							{
								func_12(uParam0[0 /*3*/], 0, 0, 1, 0, uParam1, uParam2);
							}
							uParam0->f_16[0] = unk_0x658086F2B3C5E4E4(0f, 360f);
							return 1;
						}
					}
					break;
				
				case 1:
					func_136(uParam1, uParam2);
					break;
				
				case 2:
					return 0;
					break;
				
				case 3:
					return 0;
					break;
			}
		}
		else if (unk_0x1B1C5BD8506FCF84())
		{
			if (!unk_0x6D920201CB14E0AF())
			{
				if (unk_0xD786EA9B884E38E6())
				{
					func_136(uParam1, uParam2);
					Global_2405074.f_2485.f_1 = unk_0xEF64AA08472C4933();
				}
				else
				{
					return 0;
				}
			}
			else
			{
				unk_0x4A4DC4626419A059();
				func_136(uParam1, uParam2);
				if (!Global_2405074.f_2485.f_2)
				{
					Global_2405074.f_2485.f_5 = 1;
					return 1;
				}
			}
		}
		else
		{
			return 0;
		}
	}
	if (uParam1->f_5)
	{
		func_133(Global_2405074.f_552, &(Global_2405074.f_2485.f_57), &(Global_2405074.f_2485.f_90));
	}
	if (uParam2->f_7 && !Global_2405074.f_2485.f_4)
	{
		Global_2405074.f_2485.f_4 = 1;
		func_72(*uParam1, uParam1->f_3, uParam1, uParam2, 1, -1);
	}
	iVar4 = 0;
	if (uParam1->f_5)
	{
		iVar5 = 64;
	}
	else
	{
		iVar5 = 32;
	}
	if (Global_2405074.f_2485.f_1 > 0 || Global_2405074.f_2485 > 0)
	{
		if (uParam1->f_5 || unk_0x1B1C5BD8506FCF84())
		{
			iVar2 = 0;
			while (iVar2 < Global_2405074.f_2485.f_1)
			{
				if (iVar4 < iVar5)
				{
					if (iVar2 <= Global_2405074.f_2485.f_3)
					{
						iVar2 = Global_2405074.f_2485.f_3 + 1;
					}
					if (iVar2 > (Global_2405074.f_2485.f_1 - 1))
					{
						iVar2 = (Global_2405074.f_2485.f_1 - 1);
					}
					if (iVar2 < 0)
					{
						iVar2 = 0;
					}
					if (uParam1->f_5 && !bParam3)
					{
						unk_0x554745F3B60B5BE9(iVar2, &Var0, &fVar1);
						fVar1 = (fVar1 * 57.29578f);
					}
					else
					{
						unk_0xE83574976D653844(iVar2, &Var0, &(Var0.f_1), &(Var0.f_2));
					}
					if (uParam1->f_5 && !bParam3)
					{
						iVar3 = unk_0x7A065FDC4204B088(iVar2);
					}
					else
					{
						unk_0xBFADC1990AB9F737(iVar2, &iVar3);
					}
					func_72(Var0, fVar1, uParam1, uParam2, 0, iVar3);
					iVar4++;
					Global_2405074.f_2485.f_3 = iVar2;
				}
				else
				{
					return 0;
				}
				iVar2++;
			}
		}
		else
		{
			iVar2 = Global_2405074.f_2485.f_1;
		}
		if (Global_2405074.f_2485.f_1 == iVar2)
		{
			if (uParam1->f_5 && Global_2405074.f_2882)
			{
				func_66(&(Global_2405074.f_2485.f_6[0 /*10*/]), &(Global_2405074.f_2485.f_6[1 /*10*/]), &(Global_2405074.f_2485.f_6[2 /*10*/]));
			}
			if (uParam1->f_5 && func_11(Global_2405074.f_486))
			{
				if (Global_2405074.f_2485.f_2)
				{
					func_10(uParam0, &(Global_2405074.f_2485.f_6));
					func_65(*(uParam0[0 /*3*/]));
					return 1;
				}
				else
				{
					*(uParam0[0 /*3*/]) = { Global_2405074.f_2460 };
					func_12(uParam0[0 /*3*/], 0, 0, 0, 0, uParam1, uParam2);
					uParam0->f_16[0] = unk_0x658086F2B3C5E4E4(0f, 360f);
					func_65(*(uParam0[0 /*3*/]));
					return 1;
				}
			}
			else if (Global_2405074.f_2485.f_2)
			{
				func_10(uParam0, &(Global_2405074.f_2485.f_6));
				func_65(*(uParam0[0 /*3*/]));
				return 1;
			}
			else if (uParam1->f_5)
			{
				iVar2 = unk_0x344C570D6F8700DF(0, Global_2405074.f_2485.f_1);
				unk_0x554745F3B60B5BE9(iVar2, uParam0[0 /*3*/], &(uParam0->f_16[0]));
				if (!func_30(uParam0[0 /*3*/], 0))
				{
					uParam0->f_16[0] = (uParam0->f_16[0] * 57.29578f);
					func_65(*(uParam0[0 /*3*/]));
					return 1;
				}
				else
				{
					*(uParam0[0 /*3*/]) = { Global_2405074.f_2460 };
					func_12(uParam0[0 /*3*/], 1, 0, 1, 1, uParam1, uParam2);
					uParam0->f_16[0] = unk_0x658086F2B3C5E4E4(0f, 360f);
					func_65(*(uParam0[0 /*3*/]));
					return 1;
				}
			}
			else
			{
				*(uParam0[0 /*3*/]) = { Global_2405074.f_2460 };
				func_12(uParam0[0 /*3*/], 0, 0, 0, 0, uParam1, uParam2);
				uParam0->f_16[0] = unk_0x658086F2B3C5E4E4(0f, 360f);
				func_65(*(uParam0[0 /*3*/]));
				return 1;
			}
		}
	}
	else
	{
		*(uParam0[0 /*3*/]) = { Global_2405074.f_2460 };
		if (uParam1->f_5 && func_11(Global_2405074.f_486))
		{
			if (!Global_2405074.f_2485.f_5)
			{
				Global_2405074.f_2485.f_5 = 1;
			}
			else
			{
				func_12(uParam0[0 /*3*/], 1, 0, 1, 1, uParam1, uParam2);
			}
		}
		else
		{
			if (uParam1->f_15)
			{
				bVar6 = false;
			}
			else
			{
				bVar6 = true;
			}
			func_12(uParam0[0 /*3*/], 0, bVar6, 0, 0, uParam1, uParam2);
		}
		uParam0->f_16[0] = unk_0x658086F2B3C5E4E4(0f, 360f);
		func_65(*(uParam0[0 /*3*/]));
		return 1;
	}
	return 0;
}

void func_65(struct<3> Param0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 2)
	{
		if (iVar0 > 0)
		{
			Global_2405074.f_2619[(3 - iVar0) /*3*/] = { Global_2405074.f_2619[(3 - iVar0 + 1) /*3*/] };
		}
		iVar0++;
	}
	Global_2405074.f_2619[0 /*3*/] = { Param0 };
}

void func_66(var uParam0, var uParam1, var uParam2)
{
	if (func_11(Global_2405074.f_486) && func_71() < 4096)
	{
		func_70(uParam0, 0f);
		func_70(uParam1, uParam0->f_2);
		func_70(uParam2, uParam1->f_2);
	}
	else
	{
		func_69(uParam0);
		func_68(uParam2, uParam0->f_4);
		func_67(uParam1, uParam0->f_4, uParam2->f_4);
	}
}

void func_67(var uParam0, struct<3> Param1, struct<3> Param2)
{
	int iVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	struct<10> Var5;
	
	fVar1 = -1f;
	Var5.f_2 = 1176256410;
	iVar0 = 0;
	while (iVar0 < 128)
	{
		if (Global_2408010[iVar0 /*10*/] > 0)
		{
			fVar2 = vdist(Global_2408010[iVar0 /*10*/].f_4, Param1);
			fVar3 = vdist(Global_2408010[iVar0 /*10*/].f_4, Param2);
			fVar4 = (fVar2 + fVar3);
			fVar4 = (fVar4 * Global_2408010[iVar0 /*10*/].f_1);
			if (fVar4 > fVar1)
			{
				fVar1 = fVar4;
				Var5 = { Global_2408010[iVar0 /*10*/] };
			}
		}
		iVar0++;
	}
	*uParam0 = { Var5 };
}

void func_68(var uParam0, struct<3> Param1)
{
	int iVar0;
	float fVar1;
	float fVar2;
	struct<10> Var3;
	
	fVar1 = -1f;
	Var3.f_2 = 1176256410;
	iVar0 = 0;
	while (iVar0 < 128)
	{
		if (Global_2408010[iVar0 /*10*/] > 0)
		{
			fVar2 = vdist(Global_2408010[iVar0 /*10*/].f_4, Param1);
			fVar2 = (fVar2 * Global_2408010[iVar0 /*10*/].f_1);
			if (fVar2 > fVar1)
			{
				fVar1 = fVar2;
				Var3 = { Global_2408010[iVar0 /*10*/] };
			}
		}
		iVar0++;
	}
	*uParam0 = { Var3 };
}

void func_69(var uParam0)
{
	int iVar0;
	float fVar1;
	struct<10> Var2;
	
	fVar1 = -1f;
	Var2.f_2 = 1176256410;
	iVar0 = 0;
	while (iVar0 < 128)
	{
		if (Global_2408010[iVar0 /*10*/] > 0)
		{
			if (Global_2408010[iVar0 /*10*/].f_1 > fVar1)
			{
				fVar1 = Global_2408010[iVar0 /*10*/].f_1;
				Var2 = { Global_2408010[iVar0 /*10*/] };
			}
		}
		iVar0++;
	}
	*uParam0 = { Var2 };
}

void func_70(var uParam0, float fParam1)
{
	int iVar0;
	float fVar1;
	struct<10> Var2;
	
	fVar1 = 999999.9f;
	Var2.f_2 = 1176256410;
	iVar0 = 0;
	while (iVar0 < 128)
	{
		if (Global_2408010[iVar0 /*10*/] > 0)
		{
			if (Global_2408010[iVar0 /*10*/].f_2 < fVar1 && Global_2408010[iVar0 /*10*/].f_2 > fParam1)
			{
				fVar1 = Global_2408010[iVar0 /*10*/].f_2;
				Var2 = { Global_2408010[iVar0 /*10*/] };
			}
		}
		iVar0++;
	}
	*uParam0 = { Var2 };
}

int func_71()
{
	int iVar0;
	int iVar1;
	
	iVar1 = 0;
	iVar0 = 0;
	while (iVar0 < 128)
	{
		if (Global_2408010[iVar0 /*10*/] > iVar1)
		{
			iVar1 = Global_2408010[iVar0 /*10*/];
		}
		iVar0++;
	}
	return iVar1;
}

void func_72(struct<3> Param0, float fParam1, var uParam2, var uParam3, bool bParam4, int iParam5)
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	bool bVar4;
	float fVar5;
	float fVar6;
	var uVar7;
	int iVar8;
	bool bVar9;
	int iVar10;
	int iVar11;
	struct<3> Var12;
	bool bVar13;
	int iVar14;
	struct<3> Var15;
	struct<3> Var16;
	float fVar17;
	int iVar18;
	struct<10> Var19;
	bool bVar20;
	bool bVar21;
	
	iVar10 = 0;
	iVar8 = 0;
	bVar9 = false;
	if (uParam2->f_5)
	{
		if (Global_2405074.f_486 == 1)
		{
			if (unk_0x0D77CDCF403AEBD2((Global_2405074.f_509.f_2 - Param0.f_2)) < 25f)
			{
				iVar8++;
			}
		}
		else
		{
			iVar8++;
		}
	}
	else
	{
		iVar8++;
	}
	if (uParam2->f_5)
	{
		if (func_129(unk_0x460153A63B9477BC()))
		{
			if (iParam5 == -1)
			{
				bVar9 = true;
			}
			else if (!iParam5 & 1 == 0)
			{
				bVar9 = true;
			}
		}
		else if (iParam5 == -1)
		{
			iVar8 += 2;
		}
		else if (!iParam5 & 1 == 0)
		{
			iVar8 += 2;
		}
	}
	else
	{
		iVar8 += 2;
	}
	if (uParam2->f_5 && uParam2->f_6)
	{
		if (!func_128(Param0, 1084227584, 1123024896, 0))
		{
			iVar8 += 4;
		}
	}
	else
	{
		iVar8 += 4;
	}
	if (uParam2->f_5)
	{
		if (!unk_0x99471A6823E7435C(unk_0x9B0761B4C3EB8BC7(), Param0, 65f))
		{
			iVar8 += 8;
			iVar8 += 16;
		}
		else if (!unk_0x99471A6823E7435C(unk_0x9B0761B4C3EB8BC7(), Param0, 20f))
		{
			iVar8 += 8;
		}
	}
	else
	{
		iVar8 += 8;
		iVar8 += 16;
	}
	if (uParam2->f_5)
	{
		if (!func_127(Param0, uParam3->f_5, 1, 1, 1, 1, 1, 1))
		{
			iVar8 += 32;
		}
	}
	else
	{
		iVar8 += 32;
	}
	bVar13 = true;
	iVar11 = 0;
	while (iVar11 < 2)
	{
		if (vmag(uParam3->f_13[iVar11 /*3*/]) > 0f)
		{
			if (!vdist(Param0, uParam3->f_13[iVar11 /*3*/]) > uParam3->f_20[iVar11])
			{
				bVar13 = false;
			}
		}
		iVar11++;
	}
	if (bVar13)
	{
		if ((vmag(uParam3->f_23) > 0f && vmag(uParam3->f_26) > 0f) && uParam3->f_29 > 0f)
		{
			if (unk_0x3BC3A4E4A1827EEE(Param0, uParam3->f_23, uParam3->f_26, uParam3->f_29, 0, 1))
			{
				bVar13 = false;
			}
		}
	}
	if (bVar13)
	{
		iVar8 += 256;
	}
	if (uParam2->f_5)
	{
		if (func_121(Param0, fParam1, uParam2->f_15, func_126(1), uParam2->f_16, 0, 1123024896, 1101004800, 1101004800, 1084227584, 1092616192, 0, 0, 0))
		{
			iVar8 += 64;
			iVar8 += 128;
		}
		else
		{
			iVar10 = Global_2405074.f_3;
		}
	}
	else if (!func_118(Param0, 25f, unk_0x460153A63B9477BC(), 1, 1))
	{
		if (uParam2->f_15)
		{
			fVar1 = 3.5f;
		}
		else
		{
			fVar1 = 1f;
		}
		if (!func_115(Param0, fVar1, 1, 1, 120f, 0, -1, 0f, 1))
		{
			iVar8 += 128;
			iVar8 += 64;
		}
		else if (!func_115(Param0, fVar1, 1, 1, 60f, 0, -1, 0f, 1))
		{
			iVar8 += 64;
		}
	}
	if (uParam2->f_5)
	{
		if (!Global_2405074.f_695)
		{
			Var12 = { Global_2405074.f_509 };
			if (Global_2405074.f_486 == 26)
			{
				Var12 = { Global_2405074.f_552.f_18 };
			}
			if (!func_46(Param0, 0.5f))
			{
				if (func_52(Var12))
				{
					if (!func_13(&Param0, 0, 0, 0, 1) && !func_114(&Param0, 0))
					{
						iVar8 += 512;
					}
				}
				else if (!func_114(&Param0, 0))
				{
					iVar8 += 512;
				}
			}
		}
		else
		{
			iVar8 += 512;
		}
	}
	else if (!func_113(Param0, 2.5f, 3))
	{
		iVar8 += 512;
	}
	if (uParam2->f_5)
	{
		if (!(func_112(unk_0x460153A63B9477BC()) && func_110(unk_0x460153A63B9477BC())))
		{
			if (!func_109(&Param0, &(Global_2405074.f_2485.f_90), 0, 1065353216))
			{
				iVar8 += 1024;
			}
		}
		else
		{
			iVar8 += 1024;
		}
	}
	else
	{
		iVar8 += 1024;
	}
	if (uParam2->f_5)
	{
		if (!func_110(unk_0x460153A63B9477BC()))
		{
			if (!func_108(Param0, &(Global_2405074.f_2485.f_57), &(Global_2405074.f_2485.f_90), 1073741824))
			{
				iVar8 += 2048;
			}
		}
		else
		{
			iVar8 += 2048;
		}
	}
	else
	{
		iVar8 += 2048;
	}
	if (func_107(Param0))
	{
		if (uParam2->f_5)
		{
			if (func_11(Global_2405074.f_486))
			{
				if (func_55(Param0, 0.01f))
				{
					iVar8 += 4096;
				}
			}
			else
			{
				iVar8 += 4096;
			}
		}
		else
		{
			iVar8 += 4096;
		}
	}
	if (uParam2->f_5)
	{
		if (func_106(Param0))
		{
			iVar8 += 8192;
		}
	}
	else
	{
		iVar8 += 8192;
	}
	if (!Global_2405074.f_45.f_55)
	{
		iVar8 += 16384;
	}
	else if (uParam2->f_5)
	{
		if (!iParam5 & 1 == 0)
		{
			if (unk_0x0B1B45E748AD48BA(unk_0xD5C5CDCF5230F2BA(Param0)))
			{
				iVar8 += 16384;
			}
		}
	}
	else if (!iParam5 & 2 == 0)
	{
		if (unk_0x0B1B45E748AD48BA(unk_0xD5C5CDCF5230F2BA(Param0)))
		{
			iVar8 += 16384;
		}
	}
	if (uParam2->f_5)
	{
		if (!Global_2405074.f_695)
		{
			if (!func_47(&Param0, 0, 0))
			{
				iVar8 = (iVar8 + 32768);
			}
		}
		else
		{
			iVar8 = (iVar8 + 32768);
		}
	}
	else
	{
		iVar8 = (iVar8 + 32768);
	}
	if (!func_30(&Param0, 0))
	{
		iVar8 = (iVar8 + 65536);
	}
	else
	{
		iVar14 = func_54(Param0, 1008981770);
		if (iVar14 > -1)
		{
			func_105(Param0, &Var15, &Var16, &fVar17);
			if (!func_100(&(Global_2405074.f_45[iVar14 /*12*/]), Var15, Var16, fVar17))
			{
				iVar8 = -1;
			}
		}
		else
		{
			iVar8 = -1;
		}
	}
	if (func_33(Param0, 1056964608))
	{
		iVar8 = -1;
	}
	if (uParam3->f_33)
	{
		if (unk_0x11C93463B5150761(Param0.x, Param0.f_1, (Param0.f_2 + 1f), 0.3f))
		{
			iVar8 = -1;
		}
	}
	if (uParam3->f_34)
	{
		if (unk_0x160FF3CA76647557(Param0.x, Param0.f_1, (Param0.f_2 + 1f), 1f))
		{
			iVar8 = -1;
		}
	}
	if (uParam2->f_5)
	{
	}
	else if (func_99(Param0, 1, 0, uParam2->f_15, 1060320051, 1086324736, 1065353216, 1088421888))
	{
		iVar8 = 0;
	}
	Var19.f_2 = 1176256410;
	bVar20 = false;
	bVar21 = false;
	if (Global_2405074.f_2882 && uParam2->f_5)
	{
		if (iVar8 > 0)
		{
			if (bParam4)
			{
				uParam3->f_4 = 0;
				bVar4 = false;
			}
			else
			{
				bVar4 = true;
			}
			if (uParam2->f_21)
			{
				fVar0 = func_91(Param0, uParam2->f_18, uParam3->f_6, uParam3->f_4, bVar4, iVar10, &(Var19.f_8));
			}
			else
			{
				fVar0 = func_91(Param0, Global_2405074.f_2460, uParam3->f_6, uParam3->f_4, bVar4, iVar10, &(Var19.f_8));
			}
			if (bVar9)
			{
				fVar0 = (fVar0 * 3f);
			}
			if (func_11(Global_2405074.f_486) && iVar8 < 4096)
			{
				Var19.f_2 = func_89(Param0);
			}
			uVar7 = func_78(Param0, 1, 0, 0, 0, 0);
			Var19.f_4 = { Param0 };
			Var19.f_7 = fParam1;
			Var19 = iVar8;
			Var19.f_1 = fVar0;
			Var19.f_9 = uVar7;
			func_77(Var19);
			Global_2405074.f_2485.f_2 = 1;
		}
	}
	else
	{
		iVar18 = 0;
		while (iVar18 < 5)
		{
			if (iVar8 >= Global_2405074.f_2485.f_6[iVar18 /*10*/])
			{
				if (uParam2->f_5)
				{
					if (!bVar20)
					{
						if (bParam4)
						{
							uParam3->f_4 = 0;
							bVar4 = false;
						}
						else
						{
							bVar4 = true;
						}
						if (uParam2->f_21)
						{
							fVar0 = func_91(Param0, uParam2->f_18, uParam3->f_6, uParam3->f_4, bVar4, iVar10, &(Var19.f_8));
						}
						else
						{
							fVar0 = func_91(Param0, Global_2405074.f_2460, uParam3->f_6, uParam3->f_4, bVar4, iVar10, &(Var19.f_8));
						}
						if (bVar9)
						{
							fVar0 = (fVar0 * 3f);
						}
						bVar20 = true;
					}
					if ((func_11(Global_2405074.f_486) && iVar8 == Global_2405074.f_2485.f_6[iVar18 /*10*/]) && iVar8 < 4096)
					{
						if (!bVar21)
						{
							fVar2 = func_89(Param0);
							bVar21 = true;
						}
						if (fVar2 < Global_2405074.f_2485.f_6[iVar18 /*10*/].f_2)
						{
							Var19.f_4 = { Param0 };
							Var19.f_7 = fParam1;
							Var19 = iVar8;
							Var19.f_1 = fVar0;
							Var19.f_2 = fVar2;
							func_76(Var19, iVar18);
							Global_2405074.f_2485.f_2 = 1;
							return;
						}
					}
					else if (iVar8 > Global_2405074.f_2485.f_6[iVar18 /*10*/] || (iVar8 == Global_2405074.f_2485.f_6[iVar18 /*10*/] && fVar0 > Global_2405074.f_2485.f_6[iVar18 /*10*/].f_1))
					{
						Var19.f_4 = { Param0 };
						Var19.f_7 = fParam1;
						Var19 = iVar8;
						Var19.f_1 = fVar0;
						func_76(Var19, iVar18);
						Global_2405074.f_2485.f_2 = 1;
						return;
					}
				}
				else
				{
					if (!bVar20)
					{
						if (uParam2->f_15)
						{
							fVar1 = 3.5f;
						}
						else
						{
							fVar1 = 1f;
						}
						fVar5 = func_74(Param0, fVar1, 1, 1, 0, -1, 1);
						fVar6 = func_78(Param0, 1, 1, 1, 1, 0);
						if (fVar5 > 15f && fVar6 > 5f)
						{
							fVar3 = func_73(fVar5, 0f, 80f, 160f, 1f, 1.2f);
						}
						else
						{
							fVar3 = func_73(fVar6, 0f, 80f, 160f, 0f, 0.2f);
						}
						bVar20 = true;
					}
					if (iVar8 > Global_2405074.f_2485.f_6[iVar18 /*10*/] || (iVar8 == Global_2405074.f_2485.f_6[iVar18 /*10*/] && fVar3 > Global_2405074.f_2485.f_6[iVar18 /*10*/].f_3))
					{
						Var19.f_4 = { Param0 };
						Var19.f_7 = fParam1;
						Var19 = iVar8;
						Var19.f_3 = fVar3;
						func_76(Var19, iVar18);
						Global_2405074.f_2485.f_2 = 1;
						return;
					}
				}
			}
			iVar18++;
		}
	}
}

float func_73(float fParam0, float fParam1, float fParam2, float fParam3, float fParam4, float fParam5)
{
	float fVar0;
	
	if (fParam1 >= fParam3)
	{
		fParam1 = (fParam3 * 0.5f);
	}
	if (fParam0 < fParam1)
	{
		fParam0 = fParam1;
	}
	if (fParam0 > fParam3)
	{
		fParam0 = fParam3;
	}
	if (fParam2 < fParam3 && fParam2 > fParam1)
	{
		if (fParam0 < fParam2)
		{
			fVar0 = (fParam4 + ((1f - fParam4) - ((1f - fParam4) * ((fParam2 - fParam0) / (fParam2 - fParam1)))));
		}
		else
		{
			fVar0 = (fParam5 + ((1f - fParam5) - ((1f - fParam5) * ((fParam0 - fParam2) / (fParam3 - fParam2)))));
		}
	}
	else
	{
		fVar0 = (fParam4 + (((fParam0 - fParam1) / (fParam3 - fParam1)) * (fParam5 - fParam4)));
	}
	return fVar0;
}

float func_74(struct<3> Param0, float fParam1, int iParam2, int iParam3, bool bParam4, int iParam5, bool bParam6)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	float fVar3;
	float fVar4;
	
	bVar2 = false;
	fVar3 = 1E+13f;
	if (iParam2 && !bParam4)
	{
		if (func_26(unk_0x460153A63B9477BC(), 1, 1))
		{
			if (!unk_0x03DB5C6AABF8DA46())
			{
				if (unk_0x9A70B1BD2A5BA09C(Param0, fParam1))
				{
					fVar4 = vdist2(Param0, unk_0x3E4D3CCC220BDFB1(unk_0x9B0761B4C3EB8BC7(), 0));
					if (fVar4 < fVar3)
					{
						fVar3 = fVar4;
						bVar2 = true;
					}
				}
			}
		}
	}
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar1 = iVar0;
		if (func_26(iVar1, 1, 1))
		{
			if (!func_141(iVar1, 0) && unk_0x56B60AE958412839(unk_0x460153A63B9477BC(), iVar1))
			{
				if (iParam2 == 1 || (iParam2 == 0 && iVar1 != unk_0x460153A63B9477BC()))
				{
					if (func_75(iVar1) || !bParam6)
					{
						if (!bParam4)
						{
							if ((iParam3 || (iParam3 == 0 && unk_0x6CC163E30ECE0790(iVar1) != unk_0x6CC163E30ECE0790(unk_0x460153A63B9477BC()))) || unk_0x6CC163E30ECE0790(iVar1) == -1)
							{
								if (unk_0xC3BA5B8F1CF9CD22(iVar1, Param0, fParam1))
								{
									fVar4 = vdist2(Param0, unk_0x3E4D3CCC220BDFB1(unk_0x1FA7B77001D60F9D(iVar1), 0));
									if (fVar4 < fVar3)
									{
										fVar3 = fVar4;
										bVar2 = true;
									}
								}
							}
						}
						else if (unk_0x6CC163E30ECE0790(iVar1) != iParam5 || unk_0x6CC163E30ECE0790(iVar1) == -1)
						{
							if (unk_0xC3BA5B8F1CF9CD22(iVar1, Param0, fParam1))
							{
								fVar4 = vdist2(Param0, unk_0x3E4D3CCC220BDFB1(unk_0x1FA7B77001D60F9D(iVar1), 0));
								if (fVar4 < fVar3)
								{
									fVar3 = fVar4;
									bVar2 = true;
								}
							}
						}
					}
				}
			}
		}
		iVar0++;
	}
	if (bVar2)
	{
		return sqrt(fVar3);
	}
	return -1f;
}

int func_75(int iParam0)
{
	if (unk_0xEB7D4DA50142DE0A(unk_0x1FA7B77001D60F9D(iParam0)) || Global_2425869[iParam0 /*443*/].f_249)
	{
		return 1;
	}
	return 0;
}

void func_76(struct<10> Param0, int iParam1)
{
	struct<10> Var0;
	
	Var0.f_2 = 1176256410;
	Var0 = { Global_2405074.f_2485.f_6[iParam1 /*10*/] };
	Global_2405074.f_2485.f_6[iParam1 /*10*/] = { Param0 };
	if (iParam1 < 4)
	{
		func_76(Var0, iParam1 + 1);
	}
}

void func_77(struct<10> Param0)
{
	int iVar0;
	struct<10> Var1;
	int iVar2;
	float fVar3;
	int iVar4;
	
	Var1.f_2 = 1176256410;
	iVar2 = func_71();
	if (Param0 > iVar2)
	{
		iVar2 = Param0;
	}
	iVar0 = 0;
	while (iVar0 < 128)
	{
		if (Global_2408010[iVar0 /*10*/] < iVar2)
		{
			Global_2408010[iVar0 /*10*/] = { Var1 };
		}
		iVar0++;
	}
	if (Param0 < iVar2)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 128)
	{
		if (Global_2408010[iVar0 /*10*/] == 0)
		{
			Global_2408010[iVar0 /*10*/] = { Param0 };
			return;
		}
		iVar0++;
	}
	fVar3 = 9999.9f;
	iVar4 = -1;
	iVar0 = 0;
	while (iVar0 < 128)
	{
		if (Global_2408010[iVar0 /*10*/] > 0)
		{
			if (Global_2408010[iVar0 /*10*/].f_1 < fVar3)
			{
				fVar3 = Global_2408010[iVar0 /*10*/].f_1;
				iVar4 = iVar0;
			}
		}
		iVar0++;
	}
	if (iVar4 > -1)
	{
		Global_2408010[iVar4 /*10*/] = { Param0 };
	}
}

float func_78(struct<3> Param0, bool bParam1, bool bParam2, int iParam3, bool bParam4, int iParam5)
{
	int iVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	bool bVar4;
	struct<3> Var5;
	struct<3> Var6;
	int iVar7;
	
	fVar3 = 999999.9f;
	bVar4 = false;
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar7 = iVar0;
		if (func_26(iVar7, 1, 1) || (iParam5 == 1 && func_26(iVar7, 0, 0)))
		{
			if (!iVar7 == unk_0x460153A63B9477BC() || iParam3 == 1)
			{
				bVar4 = false;
				if (bParam1)
				{
					if (func_80(iVar7))
					{
						bVar4 = true;
					}
				}
				if (bParam2)
				{
					if (unk_0x6CC163E30ECE0790(iVar7) == unk_0x6CC163E30ECE0790(unk_0x460153A63B9477BC()))
					{
						if (!unk_0x6CC163E30ECE0790(iVar7) == -1 || !func_56(unk_0x460153A63B9477BC(), 1))
						{
							bVar4 = true;
						}
					}
				}
				if (bVar4)
				{
					if (unk_0x56B60AE958412839(unk_0x460153A63B9477BC(), iVar7) || !bParam4)
					{
						if (func_75(iVar7))
						{
							Var5 = { func_79(iVar7) };
							if (!iVar7 == unk_0x460153A63B9477BC())
							{
								Var6 = { unk_0x20B541C8E40D2E74(unk_0x1FA7B77001D60F9D(iVar7)) };
							}
							else
							{
								Var6 = { Var5 };
							}
							if (!bParam4)
							{
								if (Var5.f_2 < -100f)
								{
									Var5.f_2 = Param0.f_2;
								}
								if (Var6.f_2 < -100f)
								{
									Var6.f_2 = Param0.f_2;
								}
							}
							fVar1 = unk_0x272784C60C397DB6(Param0, Var5, 1);
							fVar2 = unk_0x272784C60C397DB6(Param0, Var6, 1);
							if (fVar1 < fVar3)
							{
								fVar3 = fVar1;
							}
							if (fVar2 < fVar3)
							{
								fVar3 = fVar2;
							}
						}
					}
				}
			}
		}
		iVar0++;
	}
	return fVar3;
}

Vector3 func_79(int iParam0)
{
	return unk_0x3E4D3CCC220BDFB1(unk_0x1FA7B77001D60F9D(iParam0), 0);
}

int func_80(int iParam0)
{
	if (func_26(iParam0, 0, 1))
	{
		if (!func_87(iParam0))
		{
			if (unk_0x56B60AE958412839(unk_0x460153A63B9477BC(), iParam0))
			{
				if (!unk_0x6CC163E30ECE0790(iParam0) == unk_0x6CC163E30ECE0790(unk_0x460153A63B9477BC()))
				{
					if (func_42(unk_0x460153A63B9477BC(), 1, 0))
					{
						if (!func_86(unk_0x6CC163E30ECE0790(iParam0), unk_0x6CC163E30ECE0790(unk_0x460153A63B9477BC()), 0))
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
					if (!func_42(unk_0x460153A63B9477BC(), 1, 0))
					{
						if (!func_81(iParam0))
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

int func_81(int iParam0)
{
	if (func_85(unk_0x460153A63B9477BC(), iParam0))
	{
		return 1;
	}
	Global_2515173 = { func_84(iParam0) };
	if (unk_0x78A7795C9C51946D(&Global_2515173))
	{
		return 1;
	}
	if (func_82(unk_0x460153A63B9477BC(), iParam0))
	{
		return 1;
	}
	return 0;
}

int func_82(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = func_83(iParam0);
	if (!iVar0 == func_27())
	{
		if (iVar0 == func_83(iParam1))
		{
			return 1;
		}
	}
	return 0;
}

int func_83(int iParam0)
{
	if (iParam0 != func_27())
	{
		return Global_1630317[iParam0 /*595*/].f_11;
	}
	return func_27();
}

struct<13> func_84(int iParam0)
{
	struct<13> Var0;
	
	unk_0x2BDD80E79441BD36(iParam0, &Var0, 13);
	return Var0;
}

int func_85(int iParam0, int iParam1)
{
	if (unk_0xE2FBD13450B2DA21())
	{
		Global_2515173 = { func_84(iParam0) };
		Global_2515186 = { func_84(iParam1) };
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

int func_86(int iParam0, int iParam1, int iParam2)
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

int func_87(int iParam0)
{
	if (func_141(iParam0, 0))
	{
		return 1;
	}
	if (func_88())
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

bool func_88()
{
	return unk_0xCE990E643CD9D0E5(Global_2359302, 3);
}

float func_89(struct<3> Param0)
{
	var uVar0;
	
	return func_90(Param0, &(Global_2405074.f_45), &uVar0);
}

float func_90(struct<3> Param0, var uParam1, var uParam2)
{
	int iVar0;
	float fVar1;
	float fVar2;
	int iVar3;
	
	iVar3 = -1;
	fVar2 = 1E+07f;
	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		if ((uParam1[iVar0 /*12*/])->f_9)
		{
			fVar1 = 0f;
			switch ((uParam1[iVar0 /*12*/])->f_10)
			{
				case 0:
					fVar1 = vdist(*(uParam1[iVar0 /*12*/]), Param0);
					fVar1 = (fVar1 - ((uParam1[iVar0 /*12*/])->f_6 + (IntToFloat(Global_2405074.f_2728) * (uParam1[iVar0 /*12*/])->f_8)));
					break;
				
				case 1:
				case 2:
					if (Param0.x < (*uParam1)[iVar0 /*12*/])
					{
						fVar1 = (fVar1 + ((*uParam1)[iVar0 /*12*/] - Param0.x));
					}
					else if (Param0.x > (uParam1[iVar0 /*12*/])->f_3)
					{
						fVar1 = (fVar1 + (Param0.x - (uParam1[iVar0 /*12*/])->f_3));
					}
					if (Param0.f_1 < (uParam1[iVar0 /*12*/])->f_1)
					{
						fVar1 = (fVar1 + ((uParam1[iVar0 /*12*/])->f_1 - Param0.f_1));
					}
					else if (Param0.f_1 > (uParam1[iVar0 /*12*/])->f_3.f_1)
					{
						fVar1 = (fVar1 + (Param0.f_1 - (uParam1[iVar0 /*12*/])->f_3.f_1));
					}
					if (Param0.f_2 < (uParam1[iVar0 /*12*/])->f_2)
					{
						fVar1 = (fVar1 + ((uParam1[iVar0 /*12*/])->f_2 - Param0.f_2));
					}
					else if (Param0.f_2 > (uParam1[iVar0 /*12*/])->f_3.f_2)
					{
						fVar1 = (fVar1 + (Param0.f_2 - (uParam1[iVar0 /*12*/])->f_3.f_2));
					}
					break;
			}
			if (fVar1 < fVar2)
			{
				fVar2 = fVar1;
				iVar3 = iVar0;
			}
		}
		iVar0++;
	}
	if (fVar2 < 0f)
	{
		fVar2 = 0f;
	}
	*uParam2 = iVar3;
	return fVar2;
}

float func_91(struct<3> Param0, struct<3> Param1, bool bParam2, bool bParam3, bool bParam4, int iParam5, var uParam6)
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	float fVar5;
	
	fVar1 = 1f;
	if (iParam5 > 0)
	{
		fVar1 = (to_float(iParam5) / to_float(8));
	}
	if (bParam2)
	{
		fVar0 = func_73(vdist(Param0, Param1), 0f, 0f, 200f, 1f, 0.1f);
		fVar1 = (fVar1 * (fVar0 * 0.95f));
	}
	*uParam6 = 1E+07f;
	fVar4 = func_78(Param0, 1, 0, 0, 1, 0);
	fVar0 = func_73(fVar4, 0f, func_98(), func_96(), 0f, 0.3f);
	fVar1 = (fVar1 * (fVar0 * 0.95f));
	if (fVar4 < *uParam6)
	{
		fVar4 = fVar4;
	}
	fVar4 = func_94(Param0);
	fVar0 = func_73(fVar4, 0f, 0f, 60f, 0.5f, 1f);
	fVar1 = (fVar1 * (fVar0 * 0.95f));
	if (fVar4 < *uParam6)
	{
		fVar4 = fVar4;
	}
	fVar5 = 100f;
	if (unk_0x6CC163E30ECE0790(unk_0x460153A63B9477BC()) == -1 && !func_56(unk_0x460153A63B9477BC(), 1))
	{
		fVar5 = 1f;
	}
	fVar4 = func_93(Param0, unk_0x460153A63B9477BC(), 0);
	fVar0 = func_73(fVar4, 0f, 0f, fVar5, 0f, 1f);
	fVar1 = (fVar1 * (fVar0 * 0.95f));
	if (fVar4 < *uParam6)
	{
		fVar4 = fVar4;
	}
	if (bParam3)
	{
		if (func_92(Param0, &fVar2, &fVar3))
		{
			if (fVar2 < 10f)
			{
				fVar2 = 10f;
			}
			if (fVar3 < 0.5f)
			{
				fVar3 = 0.5f;
			}
			fVar0 = func_73(fVar2, 0f, 0f, 200f, 1f, 0.1f);
			fVar0 = (fVar0 + func_73(fVar3, 0f, 0f, 6f, 1f, 0.5f));
			fVar0 = (fVar0 * 0.5f);
			fVar1 = (fVar1 * (fVar0 * 0.85f));
		}
	}
	if (bParam4)
	{
		fVar0 = func_73(vdist(Global_2405074.f_509, Param0), 0f, 100f, 200f, 0.1f, 0.1f);
		fVar1 = (fVar1 * (fVar0 * 0.9f));
	}
	return fVar1;
}

int func_92(struct<3> Param0, var uParam1, var uParam2)
{
	struct<3> Var0;
	int iVar1;
	var uVar2;
	var uVar3;
	
	iVar1 = unk_0x2B952A1C251A8004(Param0, 1, &uVar3, &uVar2, 1, 3f, 0f);
	if (unk_0xB4D59BAA683CC8ED(iVar1))
	{
		unk_0x1EFE169AA25C75A7(iVar1, &Var0);
		*uParam1 = vdist(Param0.x, Param0.f_1, 0f, Var0.x, Var0.f_1, 0f);
		*uParam2 = unk_0x0D77CDCF403AEBD2((Param0.f_2 - Var0.f_2));
		return 1;
	}
	return 0;
}

float func_93(struct<3> Param0, int iParam1, int iParam2)
{
	float fVar0;
	float fVar1;
	int iVar2;
	int iVar3;
	
	fVar0 = 999999.9f;
	if (func_26(iParam1, 0, 1))
	{
		iVar2 = 0;
		while (iVar2 < 32)
		{
			if (!iParam1 == iVar2 || iParam2 == 1)
			{
				iVar3 = iVar2;
				if (func_26(iVar3, 0, 1))
				{
					if (unk_0x6CC163E30ECE0790(iVar3) != unk_0x6CC163E30ECE0790(iParam1) || (unk_0x6CC163E30ECE0790(iVar3) == -1 && unk_0x6CC163E30ECE0790(iParam1) == -1))
					{
						if (Global_2417956.f_261[iVar2])
						{
							fVar1 = vdist(Global_2417956.f_131[iVar2 /*3*/], Param0);
							if (fVar1 < fVar0)
							{
								fVar0 = fVar1;
							}
						}
					}
				}
			}
			iVar2++;
		}
	}
	return fVar0;
}

float func_94(struct<3> Param0)
{
	float fVar0;
	float fVar1;
	int iVar2;
	struct<3> Var3;
	var uVar4[32];
	int iVar5;
	
	iVar5 = unk_0x3214CDFE45D11916(unk_0x9B0761B4C3EB8BC7(), &uVar4, 2);
	fVar0 = 1E+07f;
	iVar2 = 0;
	while (iVar2 < iVar5)
	{
		if (unk_0xAE06B9E39EBDE049(uVar4[iVar2]))
		{
			if (!unk_0xA59F96B50B97E63C(uVar4[iVar2], 0))
			{
				if (func_95(uVar4[iVar2]))
				{
					Var3 = { unk_0x3E4D3CCC220BDFB1(uVar4[iVar2], 1) };
					fVar1 = unk_0x272784C60C397DB6(Param0, Var3, 1);
					if (fVar1 < fVar0)
					{
						fVar0 = fVar1;
					}
				}
			}
		}
		iVar2++;
	}
	if (Global_2405074.f_2927)
	{
		if (Global_969055.f_267 > 0)
		{
			iVar2 = 0;
			while (iVar2 < Global_969055.f_267)
			{
				if (unk_0xAE06B9E39EBDE049(Global_969055.f_152[iVar2]))
				{
					if (!unk_0xA59F96B50B97E63C(Global_969055.f_152[iVar2], 0))
					{
						if (func_95(Global_969055.f_152[iVar2]))
						{
							Var3 = { unk_0x3E4D3CCC220BDFB1(Global_969055.f_152[iVar2], 1) };
							fVar1 = unk_0x272784C60C397DB6(Param0, Var3, 1);
							if (fVar1 < fVar0)
							{
								fVar0 = fVar1;
							}
						}
					}
				}
				iVar2++;
			}
		}
	}
	return fVar0;
}

int func_95(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = unk_0x86FB3A0D4870FE62(iParam0);
	switch (unk_0x991DEF33C181865B(iVar0, 1862763509))
	{
		case 3:
		case 5:
			return 1;
			break;
	}
	if (unk_0xD9FAB638FEAD2E31(Global_1574973[unk_0x460153A63B9477BC()]))
	{
		switch (unk_0x991DEF33C181865B(iVar0, Global_1574973[unk_0x460153A63B9477BC()]))
		{
			case 3:
			case 5:
				return 1;
				break;
			}
	}
	if (Global_1590682[unk_0x460153A63B9477BC() /*883*/] == 0)
	{
		iVar1 = unk_0x6CC163E30ECE0790(unk_0x460153A63B9477BC());
		if (iVar1 > -1 && iVar1 < 4)
		{
			if (unk_0xD9FAB638FEAD2E31(Global_1574683[iVar1]))
			{
				switch (unk_0x991DEF33C181865B(iVar0, Global_1574683[iVar1]))
				{
					case 3:
					case 5:
						return 1;
						break;
					}
				}
			}
	}
	return 0;
}

float func_96()
{
	if (func_97())
	{
		if ((unk_0xF9C3E2B9AA9E2294(Global_2405074.f_45.f_67) || unk_0x442D6659150AF4B3(Global_2405074.f_45.f_67)) || Global_2405074.f_45.f_67 == joaat("rhino"))
		{
			return 640f;
		}
		else
		{
			return 320f;
		}
	}
	return 160f;
}

int func_97()
{
	if (Global_2405074.f_45.f_65 && !Global_2405074.f_45.f_301)
	{
		if (!func_87(unk_0x460153A63B9477BC()))
		{
			return 1;
		}
	}
	return 0;
}

float func_98()
{
	if (func_97())
	{
		if ((unk_0xF9C3E2B9AA9E2294(Global_2405074.f_45.f_67) || unk_0x442D6659150AF4B3(Global_2405074.f_45.f_67)) || Global_2405074.f_45.f_67 == joaat("rhino"))
		{
			return 320f;
		}
		else
		{
			return 160f;
		}
	}
	return 80f;
}

int func_99(struct<3> Param0, int iParam1, int iParam2, bool bParam3, int iParam4, float fParam5, float fParam6, float fParam7)
{
	float fVar0;
	
	fVar0 = iParam4;
	if (bParam3)
	{
		fVar0 = fParam5;
	}
	if ((((fParam5 > 0f && unk_0x160FF3CA76647557(Param0, fParam5)) || (fVar0 > 0f && unk_0x11C93463B5150761(Param0, fVar0))) || ((iParam2 == 1 && fParam6 > 0f) && unk_0xF666C0F9CA439368(Param0, fParam6, 0))) || ((iParam1 == 1 && fParam7 > 0f) && unk_0xF666C0F9CA439368(Param0, fParam7, 1)))
	{
		return 1;
	}
	return 0;
}

int func_100(var uParam0, struct<3> Param1, struct<3> Param2, float fParam3)
{
	switch (uParam0->f_10)
	{
		case 0:
			if (func_104(*uParam0, uParam0->f_6, Param1, Param2, fParam3))
			{
				return 1;
			}
			break;
		
		case 1:
			if (func_103(*uParam0, uParam0->f_3, Param1, Param2, fParam3))
			{
				return 1;
			}
			break;
		
		case 2:
			if (func_101(*uParam0, uParam0->f_3, uParam0->f_6, Param1, Param2, fParam3))
			{
				return 1;
			}
			break;
	}
	return 0;
}

int func_101(struct<3> Param0, struct<3> Param1, float fParam2, struct<3> Param3, struct<3> Param4, float fParam5)
{
	struct<3> Var0[8];
	int iVar1;
	
	func_102(Param0, Param1, fParam2, &Var0);
	iVar1 = 0;
	while (iVar1 < 8)
	{
		if (!unk_0x3BC3A4E4A1827EEE(Var0[iVar1 /*3*/], Param3, Param4, fParam5, 0, 1))
		{
			return 0;
		}
		iVar1++;
	}
	return 1;
}

void func_102(struct<3> Param0, struct<3> Param1, float fParam2, var uParam3)
{
	struct<3> Var0;
	struct<3> Var1;
	var uVar2;
	var uVar3;
	
	if (Param0.f_2 == Param1.f_2)
	{
		Param1.f_2 = (Param1.f_2 + 0.01f);
	}
	Var0 = { Param0 - Param1 };
	Var1 = { func_17(Var0, Var0.x, Var0.f_1, 0f) };
	Var1 = { Var1 / FtoV(vmag(Var1)) };
	Var1 = { Var1 * FtoV((fParam2 * 0.5f)) };
	if (Param0.f_2 > Param1.f_2)
	{
		uVar2 = Param1.f_2;
		uVar3 = Param0.f_2;
	}
	else
	{
		uVar2 = Param0.f_2;
		uVar3 = Param1.f_2;
	}
	*(uParam3[0 /*3*/]) = { Vector(uVar2, Param0.f_1, Param0.x) + Var1 };
	*(uParam3[1 /*3*/]) = { Vector(uVar2, Param0.f_1, Param0.x) - Var1 };
	*(uParam3[2 /*3*/]) = { Vector(uVar3, Param0.f_1, Param0.x) - Var1 };
	*(uParam3[3 /*3*/]) = { Vector(uVar3, Param0.f_1, Param0.x) + Var1 };
	*(uParam3[4 /*3*/]) = { Vector(uVar2, Param1.f_1, Param1.x) + Var1 };
	*(uParam3[5 /*3*/]) = { Vector(uVar2, Param1.f_1, Param1.x) - Var1 };
	*(uParam3[6 /*3*/]) = { Vector(uVar3, Param1.f_1, Param1.x) - Var1 };
	*(uParam3[7 /*3*/]) = { Vector(uVar3, Param1.f_1, Param1.x) + Var1 };
}

int func_103(struct<3> Param0, struct<3> Param1, struct<3> Param2, struct<3> Param3, float fParam4)
{
	struct<3> Var0[8];
	int iVar1;
	
	Var0[0 /*3*/] = { Param0.x, Param0.f_1, Param0.f_2 };
	Var0[1 /*3*/] = { Param0.x, Param0.f_1, Param1.f_2 };
	Var0[2 /*3*/] = { Param0.x, Param1.f_1, Param1.f_2 };
	Var0[3 /*3*/] = { Param0.x, Param1.f_1, Param0.f_2 };
	Var0[4 /*3*/] = { Param1.x, Param0.f_1, Param0.f_2 };
	Var0[5 /*3*/] = { Param1.x, Param0.f_1, Param1.f_2 };
	Var0[6 /*3*/] = { Param1.x, Param1.f_1, Param1.f_2 };
	Var0[7 /*3*/] = { Param1.x, Param1.f_1, Param0.f_2 };
	iVar1 = 0;
	while (iVar1 < 8)
	{
		if (!unk_0x3BC3A4E4A1827EEE(Var0[iVar1 /*3*/], Param2, Param3, fParam4, 0, 1))
		{
			return 0;
		}
		iVar1++;
	}
	return 1;
}

int func_104(struct<3> Param0, float fParam1, struct<3> Param2, struct<3> Param3, float fParam4)
{
	struct<3> Var0[4];
	int iVar1;
	
	Var0[0 /*3*/] = { Param0 + Vector(0f, fParam1, 0f) };
	Var0[1 /*3*/] = { Param0 + Vector(0f, (-1f * fParam1), 0f) };
	Var0[2 /*3*/] = { Param0 + Vector(0f, 0f, fParam1) };
	Var0[3 /*3*/] = { Param0 + Vector(0f, 0f, (-1f * fParam1)) };
	iVar1 = 0;
	while (iVar1 < 4)
	{
		if (!unk_0x3BC3A4E4A1827EEE(Var0[iVar1 /*3*/], Param2, Param3, fParam4, 0, 1))
		{
			return 0;
		}
		iVar1++;
	}
	return 1;
}

void func_105(struct<3> Param0, var uParam1, var uParam2, var uParam3)
{
	int iVar0;
	struct<3> Var1;
	int iVar2;
	
	Var1 = { Param0 };
	iVar2 = func_32(Var1);
	iVar0 = 0;
	while (iVar0 < Global_2411465[iVar2])
	{
		if (func_31(Var1, &(Global_2410195[iVar2 /*141*/][iVar0 /*7*/])))
		{
			*uParam1 = { Global_2410195[iVar2 /*141*/][iVar0 /*7*/] };
			*uParam2 = { Global_2410195[iVar2 /*141*/][iVar0 /*7*/].f_3 };
			*uParam3 = Global_2410195[iVar2 /*141*/][iVar0 /*7*/].f_6;
			return;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Global_2411465[8])
	{
		if (func_31(Var1, &(Global_2410195[8 /*141*/][iVar0 /*7*/])))
		{
			*uParam1 = { Global_2410195[8 /*141*/][iVar0 /*7*/] };
			*uParam2 = { Global_2410195[8 /*141*/][iVar0 /*7*/].f_3 };
			*uParam3 = Global_2410195[8 /*141*/][iVar0 /*7*/].f_6;
			return;
		}
		iVar0++;
	}
}

int func_106(struct<3> Param0)
{
	int iVar0;
	int iVar1;
	
	if (Global_2405074.f_45.f_55)
	{
		if (unk_0x0B1B45E748AD48BA(Global_2405074.f_45.f_56))
		{
			if (!unk_0xECF201F09142F9D9(Param0))
			{
				iVar0 = unk_0xD5C5CDCF5230F2BA(Param0);
				if (unk_0x0B1B45E748AD48BA(iVar0))
				{
					iVar1 = unk_0x37F54B76CCB52554(iVar0);
					if (!iVar1 == Global_2405074.f_45.f_57)
					{
						return 0;
					}
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
	}
	return 1;
}

int func_107(struct<3> Param0)
{
	switch (Global_2405074.f_2481)
	{
		case 0:
			return func_144(Param0, Global_2405074.f_2460, Global_2405074.f_2463, 0, 0);
			break;
		
		case 1:
			return func_60(Param0, Global_2405074.f_2474, Global_2405074.f_2477, 0, 0);
			break;
		
		case 2:
			return unk_0x3BC3A4E4A1827EEE(Param0, Global_2405074.f_2474, Global_2405074.f_2477, Global_2405074.f_2480, 0, 1);
			break;
	}
	return 0;
}

int func_108(struct<3> Param0, var uParam1, var uParam2, float fParam3)
{
	float fVar0;
	int iVar1;
	struct<3> Var2;
	struct<3> Var3;
	float fVar4;
	
	fVar0 = 0f;
	iVar1 = 0;
	iVar1 = 0;
	while (iVar1 < *uParam1)
	{
		fVar0 = ((uParam1[iVar1 /*4*/])->f_3 + fParam3);
		if (vdist(*(uParam1[iVar1 /*4*/]), Param0) < fVar0)
		{
			return 1;
		}
		iVar1++;
	}
	Var2 = { 0f, 0f, 0f };
	Var3 = { 0f, 0f, 0f };
	fVar4 = 0f;
	iVar1 = 0;
	while (iVar1 < *uParam2)
	{
		Var2 = { *(uParam2[iVar1 /*10*/]) };
		Var3 = { (uParam2[iVar1 /*10*/])->f_3 };
		fVar4 = (uParam2[iVar1 /*10*/])->f_6;
		if (unk_0x3BC3A4E4A1827EEE(Param0, Var2, Var3, fVar4, 0, 1))
		{
			return 1;
		}
		iVar1++;
	}
	return 0;
}

int func_109(var uParam0, var uParam1, bool bParam2, float fParam3)
{
	int iVar0;
	struct<3> Var1;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		if (vdist((uParam1[iVar0 /*10*/])->f_7, *uParam0) < (80f * fParam3))
		{
			if (bParam2)
			{
				Var1 = { *uParam0 };
				func_19(&Var1, (uParam1[iVar0 /*10*/])->f_7, 80f, 1036831949, 0, 0);
				*uParam0 = { Var1 };
			}
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_110(int iParam0)
{
	switch (func_58())
	{
		case 0:
			if (!func_111(iParam0))
			{
				if (Global_1590682[iParam0 /*883*/] == 0)
				{
					return 1;
				}
			}
			break;
	}
	return 0;
}

bool func_111(int iParam0)
{
	return Global_1590682[iParam0 /*883*/].f_196 != 0;
}

int func_112(int iParam0)
{
	if (func_42(iParam0, 1, 0))
	{
		if (Global_1590682[iParam0 /*883*/] != 6)
		{
			return 1;
		}
	}
	return 0;
}

int func_113(struct<3> Param0, float fParam1, int iParam2)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < iParam2)
	{
		if (vdist2(Global_2405074.f_2619[iVar0 /*3*/], Param0) < (fParam1 * fParam1))
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_114(var uParam0, bool bParam1)
{
	var uVar0;
	struct<3> Var1;
	float fVar2;
	
	if (func_48(*uParam0))
	{
		if (bParam1)
		{
			Var1 = { *uParam0 };
			fVar2 = unk_0x658086F2B3C5E4E4(0.01f, 360f);
			func_19(&Var1, Global_2405074.f_588, Global_2405074.f_591, 1036831949, 0, fVar2);
			if (func_49(Var1, &uVar0) || func_48(Var1))
			{
				Var1 = { *uParam0 };
				func_19(&Var1, Global_2405074.f_588, Global_2405074.f_591, 1036831949, 1, fVar2);
			}
			*uParam0 = { Var1 };
		}
	}
	return 0;
}

int func_115(struct<3> Param0, float fParam1, int iParam2, int iParam3, float fParam4, bool bParam5, int iParam6, float fParam7, bool bParam8)
{
	int iVar0;
	int iVar1;
	float fVar2;
	
	if (iParam2 && !bParam5)
	{
		if (func_26(unk_0x460153A63B9477BC(), 1, 1))
		{
			if (!unk_0x03DB5C6AABF8DA46())
			{
				fVar2 = fParam4;
				if (fParam7 > 0f)
				{
					fVar2 = fParam7;
				}
				if (unk_0x272784C60C397DB6(func_116(unk_0x460153A63B9477BC()), Param0, 1) <= (fVar2 + fParam1))
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
		if (func_26(iVar1, 1, 1))
		{
			if (!func_141(iVar1, 0) && unk_0x56B60AE958412839(unk_0x460153A63B9477BC(), iVar1))
			{
				if (iParam2 == 1 || (iParam2 == 0 && iVar1 != unk_0x460153A63B9477BC()))
				{
					if ((func_75(iVar1) || !bParam8) && !Global_2425869[iVar1 /*443*/].f_263)
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
								if (unk_0x272784C60C397DB6(func_116(iVar1), Param0, 1) <= (fVar2 + fParam1))
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
							if (unk_0x272784C60C397DB6(func_116(iVar1), Param0, 1) <= (fVar2 + fParam1))
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

Vector3 func_116(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if ((func_117() && Global_1590682[iVar0 /*883*/].f_854) && !func_4(Global_1590682[iVar0 /*883*/].f_855))
	{
		return Global_1590682[iVar0 /*883*/].f_855;
	}
	return func_79(iParam0);
}

var func_117()
{
	return Global_2451787.f_18;
}

int func_118(struct<3> Param0, float fParam1, int iParam2, int iParam3, int iParam4)
{
	if (func_120(Param0, fParam1, iParam2, iParam3, 0) || func_119(Param0, iParam2, iParam4))
	{
		return 1;
	}
	return 0;
}

int func_119(struct<3> Param0, int iParam1, int iParam2)
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
					if (func_34(Param0, Global_2417956.f_461[iVar0 /*11*/][iVar1 /*5*/], Global_2417956.f_461[iVar0 /*11*/][iVar1 /*5*/].f_3, Global_2417956.f_461[iVar0 /*11*/][iVar1 /*5*/].f_4, 1036831949))
					{
						if (func_26(iVar2, 0, 1) && func_26(iParam1, 0, 1))
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

int func_120(struct<3> Param0, float fParam1, int iParam2, int iParam3, bool bParam4)
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
				if (func_26(iVar1, 0, 1) && func_26(iParam2, 0, 1))
				{
					if (unk_0x6CC163E30ECE0790(iVar1) == unk_0x6CC163E30ECE0790(iParam2))
					{
						bVar2 = true;
					}
				}
			}
			if (!bVar2)
			{
				if (func_26(iVar1, 0, 1) && func_26(iParam2, 0, 1))
				{
					if (Global_2417956.f_261[iVar0])
					{
						if (vdist(Global_2417956.f_131[iVar0 /*3*/], Param0) < fParam1)
						{
							return 1;
						}
					}
					else if (vdist(func_79(iVar1), Param0) < 1f)
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
				else if (func_26(iVar1, 0, 1))
				{
					if (vdist(func_79(iVar1), Param0) < 1f)
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

int func_121(struct<3> Param0, float fParam1, bool bParam2, bool bParam3, bool bParam4, int iParam5, float fParam6, float fParam7, float fParam8, float fParam9, float fParam10, float fParam11, bool bParam12, bool bParam13)
{
	Global_2405074.f_3 = 0;
	if (!func_118(Param0, 0.5f, unk_0x460153A63B9477BC(), 0, 0))
	{
		Global_2405074.f_3++;
		if (bParam3)
		{
			if (func_174(Param0, 3.65f, 0.5f, 1.5f, 1f, 0, bParam4, iParam5, fParam6, bParam13, -1, 1, 0, 0, fParam11, bParam12, 0))
			{
				Global_2405074.f_3 = (Global_2405074.f_3 + Global_2405074.f_2);
				if (!func_125(Param0, fParam10))
				{
					Global_2405074.f_3++;
					if (!func_33(Param0, 1056964608))
					{
						Global_2405074.f_3++;
						return 1;
					}
				}
			}
			else
			{
				Global_2405074.f_3 = (Global_2405074.f_3 + Global_2405074.f_2);
			}
		}
		else if (!bParam2)
		{
			if (func_174(Param0, 3.65f, 0.5f, 1.5f, 1f, 0, bParam4, iParam5, fParam6, bParam13, -1, 1, 0, 0, fParam11, bParam12, 0))
			{
				Global_2405074.f_3 = (Global_2405074.f_3 + Global_2405074.f_2);
				if (!func_125(Param0, fParam10))
				{
					Global_2405074.f_3++;
					if (!func_122(Param0, fParam1, fParam7, fParam8, 1084227584))
					{
						Global_2405074.f_3++;
						if (!func_33(Param0, 1056964608))
						{
							Global_2405074.f_3++;
							return 1;
						}
					}
				}
			}
			else
			{
				Global_2405074.f_3 = (Global_2405074.f_3 + Global_2405074.f_2);
			}
		}
		else if (func_174(Param0, 6f, 5f, 5f, 5f, 0, bParam4, iParam5, fParam6, bParam13, -1, 1, 0, 0, fParam11, bParam12, 0))
		{
			Global_2405074.f_3 = (Global_2405074.f_3 + Global_2405074.f_2);
			if (!func_125(Param0, fParam10))
			{
				Global_2405074.f_3++;
				if (!func_122(Param0, fParam1, fParam7, fParam8, fParam9))
				{
					Global_2405074.f_3++;
					if (!func_33(Param0, 1056964608))
					{
						Global_2405074.f_3++;
						return 1;
					}
				}
			}
		}
		else
		{
			Global_2405074.f_3 = (Global_2405074.f_3 + Global_2405074.f_2);
		}
	}
	return 0;
}

int func_122(struct<3> Param0, float fParam1, float fParam2, float fParam3, float fParam4)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar1 = iVar0;
		if (!unk_0x460153A63B9477BC() == iVar1)
		{
			if ((func_26(iVar1, 1, 1) && func_75(iVar1)) && unk_0x56B60AE958412839(unk_0x460153A63B9477BC(), iVar1))
			{
				if (!func_124(unk_0x460153A63B9477BC(), iVar1, -2, 0))
				{
					if (func_123(func_79(iVar1), Param0, fParam1, fParam2, fParam3, fParam4))
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

bool func_123(struct<3> Param0, struct<3> Param1, float fParam2, float fParam3, float fParam4, float fParam5)
{
	struct<3> Var0;
	struct<3> Var1;
	
	fParam2 = (fParam2 * -1f);
	fParam2 = (fParam2 + 360f);
	Var0.x = sin(fParam2);
	Var0.f_1 = cos(fParam2);
	Var0.f_2 = 0f;
	Var0 = { Var0 / FtoV(vmag(Var0)) };
	Var0 = { Var0 * Vector(fParam3, fParam3, fParam3) };
	Var1 = { Param1 + Var0 };
	Var1.f_2 = Param1.f_2;
	Var1.f_2 = (Var1.f_2 + fParam5);
	Param1.f_2 = (Param1.f_2 + fParam5);
	return unk_0x3BC3A4E4A1827EEE(Param0, Param1, Var1, fParam4, 0, 1);
}

bool func_124(int iParam0, int iParam1, int iParam2, int iParam3)
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

int func_125(struct<3> Param0, float fParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar1 = iVar0;
		if ((func_26(iVar1, 1, 1) && func_75(iVar1)) && unk_0x56B60AE958412839(unk_0x460153A63B9477BC(), iVar1))
		{
			if ((unk_0x6CC163E30ECE0790(unk_0x460153A63B9477BC()) == -1 && unk_0x6CC163E30ECE0790(iVar1) == -1) && !func_56(unk_0x460153A63B9477BC(), 1))
			{
				return 0;
			}
			else if ((unk_0x6CC163E30ECE0790(unk_0x460153A63B9477BC()) == -1 && !unk_0x460153A63B9477BC() == iVar1) || !func_124(unk_0x460153A63B9477BC(), iVar1, -2, 0))
			{
				if (vdist(Param0, func_79(iVar1)) < fParam1)
				{
					return 1;
				}
			}
		}
		iVar0++;
	}
	return 0;
}

int func_126(int iParam0)
{
	if ((Global_2405074.f_486 == 9 || Global_2405074.f_486 == 9) || (Global_2405074.f_486 == 15 && iParam0 == 1))
	{
		return 1;
	}
	return 0;
}

int func_127(struct<3> Param0, float fParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, int iParam6, int iParam7)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar1 = iVar0;
		if ((iParam6 == 1 && unk_0x460153A63B9477BC() != iVar1) || iParam6 == 0)
		{
			if (func_26(iVar1, bParam2, bParam3))
			{
				if (unk_0x56B60AE958412839(unk_0x460153A63B9477BC(), iVar1))
				{
					if (!bParam5 || (!unk_0x5AEB5DDFFAD43CA5(unk_0x1FA7B77001D60F9D(iVar1)) && func_75(iVar1)))
					{
						if ((!bParam4 || (bParam4 == 1 && unk_0x6CC163E30ECE0790(unk_0x460153A63B9477BC()) != unk_0x6CC163E30ECE0790(iVar1))) || unk_0x6CC163E30ECE0790(unk_0x460153A63B9477BC()) == -1)
						{
							if (((unk_0x6CC163E30ECE0790(unk_0x460153A63B9477BC()) == -1 && iParam7) && bParam4) && func_81(iVar1))
							{
							}
							else if (unk_0xAE06B9E39EBDE049(unk_0x1FA7B77001D60F9D(iVar1)))
							{
								if (unk_0x272784C60C397DB6(func_79(iVar1), Param0, 1) < fParam1)
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

int func_128(struct<3> Param0, float fParam1, int iParam2, float fParam3)
{
	int iVar0;
	int iVar1;
	float fVar2;
	int iVar3;
	
	iVar3 = unk_0x6CC163E30ECE0790(unk_0x460153A63B9477BC());
	if (!iVar3 == -1)
	{
		iVar0 = 0;
		while (iVar0 < 32)
		{
			iVar1 = iVar0;
			if (func_26(iVar1, 1, 1))
			{
				if ((!func_141(iVar1, 0) && unk_0x56B60AE958412839(unk_0x460153A63B9477BC(), iVar1)) && iVar1 != unk_0x460153A63B9477BC())
				{
					fVar2 = iParam2;
					if (fParam3 > 0f)
					{
						if (!unk_0x6CC163E30ECE0790(iVar1) == -1)
						{
							if (unk_0x6CC163E30ECE0790(iVar1) == unk_0x6CC163E30ECE0790(unk_0x460153A63B9477BC()))
							{
								fVar2 = fParam3;
							}
						}
					}
					if (unk_0x6CC163E30ECE0790(iVar1) == iVar3)
					{
						if (unk_0x272784C60C397DB6(func_79(iVar1), Param0, 1) <= (fVar2 + fParam1))
						{
							if (unk_0xC3BA5B8F1CF9CD22(iVar1, Param0, fParam1))
							{
								return 1;
							}
						}
					}
				}
			}
			iVar0++;
		}
	}
	return 0;
}

int func_129(int iParam0)
{
	if (((func_56(iParam0, 1) || func_132(iParam0)) || func_131(iParam0, 0)) || func_130(iParam0))
	{
		return 1;
	}
	return 0;
}

int func_130(int iParam0)
{
	if (!func_26(iParam0, 0, 1))
	{
		return 0;
	}
	return Global_1590682[iParam0 /*883*/].f_35;
}

int func_131(int iParam0, int iParam1)
{
	if (Global_1630317[iParam0 /*595*/].f_11.f_33 != -1 || (iParam1 && Global_1630317[iParam0 /*595*/].f_11.f_32 != -1))
	{
		return 1;
	}
	return 0;
}

int func_132(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return Global_1630317[iVar0 /*595*/] != -1;
	}
	return 0;
}

void func_133(struct<3> Param0, var uParam1, var uParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<4> Var3;
	struct<8> Var4;
	struct<3> Var5;
	struct<3> Var6;
	
	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		*(uParam1[iVar0 /*4*/]) = { Var3 };
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < *uParam2)
	{
		*(uParam2[iVar0 /*10*/]) = { Var4 };
		iVar0++;
	}
	iVar0 = 0;
	iVar1 = 0;
	iVar1 = 0;
	while (iVar1 < Global_1311741)
	{
		iVar0 = 0;
		while (iVar0 < *uParam1)
		{
			if (!unk_0xCE990E643CD9D0E5(Global_2359721[iVar1 /*26*/].f_12, 11))
			{
				if (vmag(*(uParam1[iVar0 /*4*/])) == 0f || vdist(Global_2359721[iVar1 /*26*/].f_3, Param0) < vdist(*(uParam1[iVar0 /*4*/]), Param0))
				{
					Var3 = { Global_2359721[iVar1 /*26*/].f_3 };
					Var3.f_3 = Global_2359721[iVar1 /*26*/].f_6.f_2;
					func_135(&Var3, uParam1, iVar0);
					iVar0 = *uParam1;
				}
			}
			iVar0++;
		}
		iVar1++;
	}
	iVar0 = 0;
	iVar1 = 0;
	iVar1 = 0;
	while (iVar1 < 15)
	{
		iVar0 = 0;
		while (iVar0 < *uParam1)
		{
			if (vmag(*(uParam1[iVar0 /*4*/])) == 0f || vdist(Global_262145.f_6000[iVar1 /*3*/], Param0) < vdist(*(uParam1[iVar0 /*4*/]), Param0))
			{
				Var3 = { Global_262145.f_6000[iVar1 /*3*/] };
				Var3.f_3 = 3f;
				func_135(&Var3, uParam1, iVar0);
				iVar0 = *uParam1;
			}
			iVar0++;
		}
		iVar1++;
	}
	iVar0 = 0;
	iVar1 = 0;
	iVar2 = 0;
	iVar1 = 0;
	while (iVar1 < 14)
	{
		iVar2 = 0;
		while (iVar2 < 6)
		{
			iVar0 = 0;
			while (iVar0 < *uParam1)
			{
				if (vmag(*(uParam1[iVar0 /*4*/])) == 0f || vdist(Global_262145.f_6046[iVar1 /*19*/][iVar2 /*3*/], Param0) < vdist(*(uParam1[iVar0 /*4*/]), Param0))
				{
					Var3 = { Global_262145.f_6046[iVar1 /*19*/][iVar2 /*3*/] };
					Var3.f_3 = 3f;
					func_135(&Var3, uParam1, iVar0);
					iVar0 = *uParam1;
				}
				iVar0++;
			}
			iVar2++;
		}
		iVar1++;
	}
	iVar0 = 0;
	iVar1 = 0;
	iVar1 = 0;
	while (iVar1 < Global_1311706)
	{
		iVar0 = 0;
		while (iVar0 < *uParam2)
		{
			Var5 = { Global_1311025[iVar1 /*8*/].f_1 + Global_1311025[iVar1 /*8*/].f_4 * Vector(0.5f, 0.5f, 0.5f) };
			Var6 = { *(uParam2[iVar0 /*10*/]) + (uParam2[iVar0 /*10*/])->f_3 * Vector(0.5f, 0.5f, 0.5f) };
			if (vmag(*(uParam2[iVar0 /*10*/])) == 0f || vdist(Var5, Param0) < vdist(Var6, Param0))
			{
				Var4 = { Global_1311025[iVar1 /*8*/].f_1 };
				Var4.f_3 = { Global_1311025[iVar1 /*8*/].f_4 };
				Var4.f_6 = Global_1311025[iVar1 /*8*/].f_7;
				Var4.f_7 = { Global_2359397[iVar1 /*3*/] };
				func_134(&Var4, uParam2, iVar0);
				iVar0 = *uParam2;
			}
			iVar0++;
		}
		iVar1++;
	}
}

void func_134(var uParam0, var uParam1, int iParam2)
{
	Global_2412470 = { *(uParam1[iParam2 /*10*/]) };
	*(uParam1[iParam2 /*10*/]) = { *uParam0 };
	if (iParam2 + 1 < *uParam1)
	{
		func_134(&Global_2412470, uParam1, iParam2 + 1);
	}
}

void func_135(var uParam0, var uParam1, int iParam2)
{
	Global_2412466 = { *(uParam1[iParam2 /*4*/]) };
	*(uParam1[iParam2 /*4*/]) = { *uParam0 };
	if (iParam2 + 1 < *uParam1)
	{
		func_135(&Global_2412466, uParam1, iParam2 + 1);
	}
}

void func_136(var uParam0, var uParam1)
{
	int iVar0;
	struct<3> Var1;
	float fVar2;
	
	if (Global_2405074.f_2256 > 0)
	{
		iVar0 = 0;
		while (iVar0 < Global_2405074.f_2256)
		{
			if (func_137(Global_2405074.f_2257[iVar0 /*4*/], uParam0))
			{
				fVar2 = Global_2405074.f_2257[iVar0 /*4*/].f_3;
				if (vmag(*uParam1) > 0.01f)
				{
					Var1 = { *uParam1 - Global_2405074.f_2257[iVar0 /*4*/] };
					fVar2 = unk_0x9075769DD4F148B7(Var1.x, Var1.f_1);
				}
				func_72(Global_2405074.f_2257[iVar0 /*4*/], fVar2, uParam0, uParam1, 0, uParam0->f_28);
				Global_2405074.f_2485++;
			}
			iVar0++;
		}
	}
	if (uParam0->f_5 && Global_2405074.f_2882)
	{
		func_66(&(Global_2405074.f_2485.f_6[0 /*10*/]), &(Global_2405074.f_2485.f_6[1 /*10*/]), &(Global_2405074.f_2485.f_6[2 /*10*/]));
	}
}

int func_137(struct<3> Param0, var uParam1)
{
	switch (uParam1->f_7)
	{
		case 0:
			return func_23(Param0, uParam1->f_7, *uParam1, 0f, 0f, 0f, uParam1->f_4);
		
		case 1:
		case 2:
			return func_23(Param0, uParam1->f_7, uParam1->f_8, uParam1->f_11, uParam1->f_14);
		
		default:
	}
	return 0;
}

void func_138(struct<3> Param0, struct<3> Param1, var uParam2, var uParam3, var uParam4)
{
	float fVar0;
	
	func_61(&Param0, &Param1);
	fVar0 = (Param1.x - Param0.x);
	*uParam2 = (Param0.x + (fVar0 * 0.5f));
	uParam2->f_1 = Param0.f_1;
	uParam2->f_2 = Param0.f_2;
	*uParam3 = *uParam2;
	uParam3->f_1 = Param1.f_1;
	uParam3->f_2 = Param1.f_2;
	*uParam4 = (fVar0 * 0.5f);
}

var func_139()
{
	return Global_1310987.f_4;
}

void func_140(var uParam0, var uParam1)
{
	func_181();
	func_173(uParam0, uParam1);
}

bool func_141(int iParam0, int iParam1)
{
	bool bVar0;
	
	if (iParam0 == unk_0x460153A63B9477BC())
	{
		bVar0 = func_142(-1, 0) == 8;
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

int func_142(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_143();
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

int func_143()
{
	return Global_1312763;
}

bool func_144(struct<3> Param0, struct<3> Param1, float fParam2, bool bParam3, bool bParam4)
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

void func_145(var uParam0, var uParam1, var uParam2)
{
	int iVar0;
	
	iVar0 = 0;
	if (Global_2405074.f_1748 > 0)
	{
		iVar0 = 0;
		while (func_167(uParam0, uParam1, uParam2) == 0 && iVar0 < 2)
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
	while (func_146(uParam0, uParam1, uParam2) == 0 && iVar0 < 6)
	{
		iVar0++;
	}
}

int func_146(var uParam0, var uParam1, var uParam2)
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
		if (func_45(uParam2->f_35, uParam0, &(uParam2->f_38), &(uParam2->f_45), 1, 1))
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
	if (func_39(uParam2->f_34) != 0)
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
					if (!func_114(&Var1, 0))
					{
						if ((uParam2->f_13 || uVar5 & 64 == 0) || uParam2->f_33 == 1)
						{
							if (uParam2->f_14 || uVar5 & 16 == 0)
							{
								if ((uVar5 & 128 == 0 && uVar5 & 256 == 0) && uVar5 & 512 == 0)
								{
									if (!func_165(Var1))
									{
										Var1 = { func_161(Var1, &fVar2, iVar7, uParam2->f_9, *uParam2, iVar8, uParam2->f_11, uParam2->f_34, &bVar9, bVar10, 1, uParam2->f_51) };
										if (vmag(Var1) > 0f)
										{
											if (!func_33(Var1, 5f))
											{
												if (Var1.f_2 >= (uParam2->f_35.f_2 - uParam2->f_7) || uParam2->f_33 >= 2)
												{
													if (Var1.f_2 <= (uParam2->f_35.f_2 + uParam2->f_6) || uParam2->f_33 >= 2)
													{
														if (func_160(Var1, uParam2))
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
																		if ((uParam2->f_12 && !func_156(Var1, fVar2, uParam2->f_34, unk_0x460153A63B9477BC(), 0, uParam2->f_56)) || !uParam2->f_12)
																		{
																			if (!uParam2->f_15 || !func_45(uParam2->f_35, &Var1, &(uParam2->f_38), &(uParam2->f_45), 0, 1))
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
																					if (!func_155(Var1, fVar2, uParam2->f_34))
																					{
																						if (uParam2->f_3 > 7f)
																						{
																							if (func_174(Var1, 6f, 1f, 1f, 5f, iVar17, bVar18, iVar19, fVar20, uParam2->f_58, -1, 1, uParam2->f_3, 0, 0, 0, 0))
																							{
																								iVar21 = 1;
																							}
																						}
																						else if (func_174(Var1, 6f, 1f, 1f, 5f, iVar17, bVar18, iVar19, fVar20, uParam2->f_58, -1, 1, 0f, 0, 0, 0, 0) && !func_153(Var1, fVar2, uParam2->f_34, 1, 1, 0, 0, 0, 0))
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
																								iVar22 = func_152(Var1, uParam2->f_54, &fVar23);
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
																													func_151(Var1, fVar2, iVar14);
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
																									if (func_160(Var1, uParam2))
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
							func_149(0, uParam2);
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
						func_148(iVar13, *uParam0, &iVar0, &Var1, &fVar2, uParam2, iVar8, iVar7, iVar3, fVar11, fVar12, bVar9);
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
						if (func_45(uParam2->f_35, &Var27, &(uParam2->f_38), &(uParam2->f_45), bVar29, 1) || func_166(&Var27, bVar29))
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
				func_147(&Global_1312061, uParam0, uParam1, *uParam0);
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

void func_147(var uParam0, var uParam1, var uParam2, struct<3> Param3)
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
			if (!func_118(*(uParam0[iVar2 /*4*/]), 5f, unk_0x460153A63B9477BC(), 0, 0))
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

void func_148(int iParam0, struct<3> Param1, int iParam2, var uParam3, float fParam4, var uParam5, int iParam6, int iParam7, int iParam8, float fParam9, float fParam10, bool bParam11)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 30)
	{
		*iParam2 = unk_0x344C570D6F8700DF((1 + iParam0), (40 + iParam0));
		unk_0x1485BFBB1EC6FE22(Param1, *iParam2, uParam3, fParam4, &iParam7, iParam8, fParam9, fParam10);
		*uParam3 = { func_161(*uParam3, fParam4, iParam7, uParam5->f_9, *uParam5, iParam6, uParam5->f_11, uParam5->f_34, &bParam11, 0, 0, uParam5->f_51) };
		if (!func_165(*uParam3))
		{
			iVar0 = 999;
			return;
		}
		iVar0++;
	}
}

void func_149(int iParam0, var uParam1)
{
	if (!func_160(Global_2412480[iParam0 /*3*/], uParam1))
	{
		Global_2412480.f_162 = (Global_2412480.f_162 - 1);
		func_150(iParam0);
		if (Global_2412480.f_162 > Global_2412480.f_163)
		{
			func_149(iParam0, uParam1);
		}
	}
	else if (iParam0 < 39)
	{
		func_149(iParam0 + 1, uParam1);
	}
}

void func_150(int iParam0)
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

void func_151(struct<3> Param0, float fParam1, int iParam2)
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
			func_151(Var0, uVar1, iParam2 + 1);
		}
	}
}

int func_152(struct<3> Param0, float fParam1, float fParam2)
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
		if (func_80(iVar3))
		{
			Var1 = { func_79(iVar3) };
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

int func_153(struct<3> Param0, float fParam1, int iParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, int iParam7, int iParam8)
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
			if (func_26(iVar1, bParam3, bParam4))
			{
				if (unk_0x56B60AE958412839(unk_0x460153A63B9477BC(), iVar1))
				{
					if (!bParam6 || (!unk_0x5AEB5DDFFAD43CA5(unk_0x1FA7B77001D60F9D(iVar1)) && func_75(iVar1)))
					{
						if ((!bParam5 || (bParam5 == 1 && unk_0x6CC163E30ECE0790(unk_0x460153A63B9477BC()) != unk_0x6CC163E30ECE0790(iVar1))) || unk_0x6CC163E30ECE0790(unk_0x460153A63B9477BC()) == -1)
						{
							if (((unk_0x6CC163E30ECE0790(unk_0x460153A63B9477BC()) == -1 && iParam8) && bParam5) && func_81(iVar1))
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
										if (func_154(Param0, fParam1, iParam2, Var5, fVar6, iVar4, 0))
										{
											return 1;
										}
									}
									else
									{
										fVar2 = 5f;
									}
								}
								if (func_34(func_79(iVar1), Param0, fParam1, iParam2, fVar2))
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

int func_154(struct<3> Param0, float fParam1, int iParam2, struct<3> Param3, float fParam4, int iParam5, bool bParam6)
{
	int iVar0;
	struct<3> Var1[4];
	struct<3> Var2;
	struct<3> Var3;
	struct<3> Var4;
	struct<3> Var5;
	struct<3> Var6;
	
	if (func_34(Param0, Param3, fParam4, iParam5, 1036831949))
	{
		return 1;
	}
	if (Global_1312332 && (iParam2 == joaat("kosatka") || iParam5 == joaat("kosatka")))
	{
		func_35(Param0, fParam1, iParam2, &Global_1707737, &(Global_1707737.f_3), &(Global_1707737.f_6), 1036831949);
		func_35(Param3, fParam4, iParam5, &(Global_1707737.f_7), &(Global_1707737.f_10), &(Global_1707737.f_13), 1036831949);
		if (unk_0xA0AD167E4B39D9A2(Global_1707737, Global_1707737.f_3, Global_1707737.f_6, Global_1707737.f_7, Global_1707737.f_10, Global_1707737.f_13))
		{
			return 1;
		}
	}
	else
	{
		func_36(iParam2, &Var2, &Var3, 1086324736, 1080033280, 1077936128);
		Var4 = { 0f, Var3.f_1, 0f };
		func_20(&Var4, 0f, 0f, fParam1);
		Var5 = { 0f, Var2.f_1, 0f };
		func_20(&Var5, 0f, 0f, fParam1);
		Var6 = { (unk_0x0D77CDCF403AEBD2((Var3.x - Var2.x)) * 0.5f), 0f, 0f };
		func_20(&Var6, 0f, 0f, fParam1);
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
			if (func_34(Var1[iVar0 /*3*/], Param3, fParam4, iParam5, 1036831949))
			{
				return 1;
			}
			iVar0++;
		}
		if (!bParam6)
		{
			if (func_154(Param3, fParam4, iParam5, Param0, fParam1, iParam2, 1))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_155(struct<3> Param0, float fParam1, int iParam2)
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
		if (func_154(Param0, fParam1, iParam2, Var3, fVar4, iVar2, 0))
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
		if (func_154(Param0, fParam1, iParam2, Var3, fVar4, iVar2, 0))
		{
			return 1;
		}
	}
	return 0;
}

int func_156(struct<3> Param0, float fParam1, int iParam2, int iParam3, int iParam4, int iParam5)
{
	if (func_159(Param0, fParam1, iParam2, iParam3, iParam4) || func_157(Param0, fParam1, iParam2, iParam3, iParam5))
	{
		return 1;
	}
	return 0;
}

int func_157(struct<3> Param0, float fParam1, int iParam2, int iParam3, int iParam4)
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
				if (func_158(Param0, iParam2, Global_2417956.f_461[iVar0 /*11*/][iVar1 /*5*/], Global_2417956.f_461[iVar0 /*11*/][iVar1 /*5*/].f_4))
				{
					if (func_154(Param0, fParam1, iParam2, Global_2417956.f_461[iVar0 /*11*/][iVar1 /*5*/], Global_2417956.f_461[iVar0 /*11*/][iVar1 /*5*/].f_3, Global_2417956.f_461[iVar0 /*11*/][iVar1 /*5*/].f_4, 0))
					{
						if (func_26(iVar2, 0, 1) && func_26(iParam3, 0, 1))
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

int func_158(struct<3> Param0, int iParam1, struct<3> Param2, int iParam3)
{
	float fVar0;
	float fVar1;
	float fVar2;
	
	fVar0 = func_41(iParam1, 1008981770);
	fVar1 = func_41(iParam3, 1008981770);
	fVar2 = vdist(Param0, Param2);
	if (fVar2 < (fVar0 + fVar1))
	{
		return 1;
	}
	return 0;
}

int func_159(struct<3> Param0, float fParam1, int iParam2, int iParam3, int iParam4)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (!iParam3 == iVar0 || iParam4 == 1)
		{
			iVar1 = iVar0;
			if (func_26(iVar1, 0, 1) && func_26(iParam3, 0, 1))
			{
				if (Global_2417956.f_261[iVar0])
				{
					if (func_34(Global_2417956.f_131[iVar0 /*3*/], Param0, fParam1, iParam2, 1036831949))
					{
						return 1;
					}
				}
				else if (func_34(func_79(iVar1), Param0, fParam1, iParam2, 1036831949))
				{
					return 1;
				}
			}
			else if (Global_2417956.f_261[iVar0])
			{
				if (func_34(Global_2417956.f_131[iVar0 /*3*/], Param0, fParam1, iParam2, 1036831949))
				{
					return 1;
				}
			}
			else if (func_26(iVar1, 0, 0))
			{
				if (unk_0xAE06B9E39EBDE049(unk_0x1FA7B77001D60F9D(iVar1)))
				{
					if (func_34(func_79(iVar1), Param0, fParam1, iParam2, 1036831949))
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

int func_160(struct<3> Param0, var uParam1)
{
	if (uParam1->f_18)
	{
		switch (uParam1->f_26)
		{
			case 0:
				if (func_144(Param0, uParam1->f_19, uParam1->f_25, 0, 0))
				{
					return 1;
				}
				break;
			
			case 1:
				if (func_60(Param0, uParam1->f_19, uParam1->f_22, 0, 0))
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

Vector3 func_161(struct<3> Param0, float fParam1, int iParam2, bool bParam3, struct<3> Param4, int iParam5, bool bParam6, int iParam7, var uParam8, int iParam9, bool bParam10, bool bParam11)
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
			if (!func_164(Param0, *fParam1, Param4))
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
			if (unk_0x442D6659150AF4B3(iParam7) && func_163(Param0))
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
					fVar10 = func_162(iParam7, 3.5f);
				}
				else
				{
					fVar10 = func_162(iParam7, 1.5f);
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
		if (!func_164(Param0, *fParam1, Param4))
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
					fVar10 = func_162(iParam7, 3.5f);
				}
				else
				{
					fVar10 = func_162(iParam7, 1.5f);
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

float func_162(int iParam0, float fParam1)
{
	float fVar0;
	float fVar1;
	float fVar2;
	
	func_36(iParam0, &fVar0, &fVar1, 1086324736, 1080033280, 1077936128);
	fVar2 = (fVar1 - fVar0);
	if (fVar2 < fParam1)
	{
		return fParam1;
	}
	return fVar2;
}

int func_163(struct<3> Param0)
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

int func_164(struct<3> Param0, float fParam1, struct<3> Param2)
{
	struct<3> Var0;
	struct<3> Var1;
	
	Var0 = { 0f, 1f, 0f };
	func_20(&Var0, 0f, 0f, fParam1);
	Var1 = { Param2 - Param0 };
	if (func_16(Var1, Var0) >= 0f)
	{
		return 1;
	}
	return 0;
}

int func_165(struct<3> Param0)
{
	int iVar0;
	int iVar1;
	
	iVar1 = func_32(Param0);
	iVar0 = 0;
	while (iVar0 < Global_2412187[iVar1])
	{
		if (func_31(Param0, &(Global_2411484[iVar1 /*78*/][iVar0 /*7*/])))
		{
			return 1;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Global_2412187[8])
	{
		if (func_31(Param0, &(Global_2411484[8 /*78*/][iVar0 /*7*/])))
		{
			return 1;
		}
		iVar0++;
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
				if (func_144(*uParam0, Global_2405074.f_26.f_10, Global_2405074.f_26.f_16, 0, 0))
				{
					bVar0 = true;
				}
				break;
			
			case 1:
				if (func_60(*uParam0, Global_2405074.f_26.f_10, Global_2405074.f_26.f_13, 0, 0))
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
				*uParam0 = { func_21(*uParam0, Global_2405074.f_26.f_10, Global_2405074.f_26.f_13, Global_2405074.f_26.f_16, Global_2405074.f_26.f_17, 1036831949, 0) };
			}
		}
	}
	return bVar0;
}

int func_167(var uParam0, var uParam1, var uParam2)
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
			if (func_45(uParam2->f_35, uParam0, &(uParam2->f_38), &(uParam2->f_45), 1, 1))
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
			func_170(*uParam0);
		}
		else if (uParam2->f_29)
		{
			func_169();
		}
		else
		{
			func_168();
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
							if ((uParam2->f_12 && !func_156(Var3, fVar4, uParam2->f_34, unk_0x460153A63B9477BC(), 0, uParam2->f_56)) || !uParam2->f_12)
							{
								if (!uParam2->f_15 || !func_45(uParam2->f_35, &Var3, &(uParam2->f_38), &(uParam2->f_45), 0, 1))
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
										if (!func_155(Var3, fVar4, uParam2->f_34))
										{
											if (uParam2->f_3 > 7f)
											{
												if (func_174(Var3, 6f, 1f, 1f, 5f, iVar6, bVar7, iVar8, fVar9, uParam2->f_58, -1, 1, uParam2->f_3, 0, 0, 0, 0))
												{
													bVar10 = true;
												}
											}
											else if (func_174(Var3, 6f, 1f, 1f, 5f, iVar6, bVar7, iVar8, fVar9, uParam2->f_58, -1, 1, 0f, 0, 0, 0, 0) && !func_153(Var3, fVar4, uParam2->f_34, 1, 1, 0, 0, uParam2->f_58, 0))
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
													iVar11 = func_152(Var3, uParam2->f_54, &fVar12);
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
																		func_151(Var3, fVar4, iVar5);
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
					func_149(0, uParam2);
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

void func_168()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < Global_2405074.f_1748)
	{
		Global_2405074.f_2154[iVar0] = iVar0;
		iVar0++;
	}
}

void func_169()
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

void func_170(struct<3> Param0)
{
	float fVar0;
	var uVar1;
	int iVar2;
	
	fVar0 = -1f;
	while (iVar2 < Global_2405074.f_1748)
	{
		uVar1 = func_171(Param0, fVar0, &fVar0);
		Global_2405074.f_2154[iVar2] = uVar1;
		iVar2++;
	}
}

int func_171(struct<3> Param0, float fParam1, float fParam2)
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

bool func_172(int iParam0)
{
	return iParam0 == 50;
}

void func_173(var uParam0, var uParam1)
{
	unk_0x752A19C36727F403(uParam0, uParam1, 0.1f);
	Global_2405074.f_2468 = unk_0x354AD085195C5FA6();
	Global_2405074.f_2466 = 1;
	Global_2405074.f_2469 = unk_0x6CAAB7E78B5D978A();
}

int func_174(struct<3> Param0, float fParam1, float fParam2, float fParam3, float fParam4, int iParam5, bool bParam6, int iParam7, float fParam8, bool bParam9, int iParam10, bool bParam11, float fParam12, bool bParam13, float fParam14, bool bParam15, int iParam16)
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
		if (func_127(Param0, fParam12, 1, 1, bParam13, bParam15, bParam9, bParam13))
		{
			return 0;
		}
	}
	Global_2405074.f_2++;
	if (bParam6)
	{
		if (fParam4 > 0f)
		{
			if (func_115(Param0, fParam4, iParam5, iParam7, fParam8, bParam9, iParam10, fParam14, bParam15))
			{
				return 0;
			}
		}
	}
	Global_2405074.f_2++;
	return 1;
}

void func_175()
{
	func_180();
	func_179();
	func_178();
	func_177();
	func_176();
}

void func_176()
{
	struct<10> Var0;
	int iVar1;
	
	Var0.f_2 = 1176256410;
	iVar1 = 0;
	while (iVar1 < 128)
	{
		Global_2408010[iVar1 /*10*/] = { Var0 };
		iVar1++;
	}
}

void func_177()
{
	struct<10> Var0;
	int iVar1;
	
	iVar1 = 0;
	while (iVar1 < 4)
	{
		Global_2405074.f_2485.f_90[iVar1 /*10*/] = { Var0 };
		iVar1++;
	}
}

void func_178()
{
	struct<4> Var0;
	int iVar1;
	
	iVar1 = 0;
	while (iVar1 < 8)
	{
		Global_2405074.f_2485.f_57[iVar1 /*4*/] = { Var0 };
		iVar1++;
	}
}

void func_179()
{
	struct<10> Var0;
	int iVar1;
	
	Var0.f_2 = 1176256410;
	iVar1 = 0;
	while (iVar1 < 5)
	{
		Global_2405074.f_2485.f_6[iVar1 /*10*/] = { Var0 };
		iVar1++;
	}
}

void func_180()
{
	struct<6> Var0;
	
	Var0.f_3 = -1;
	Global_2405074.f_2485 = { Var0 };
}

void func_181()
{
	if (Global_2405074.f_2466)
	{
		if (unk_0x354AD085195C5FA6() == Global_2405074.f_2468)
		{
			unk_0x6B83A91F1F7335F5();
		}
		else
		{
			unk_0x6B83A91F1F7335F5();
		}
		Global_2405074.f_2466 = 0;
	}
}

int func_182(bool bParam0)
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

int func_183(struct<3> Param0, float fParam1, var uParam2, var uParam3, var uParam4)
{
	struct<17> Var0;
	struct<18> Var1;
	struct<3> Var2;
	
	if (uParam4->f_5 > (fParam1 - 20f))
	{
		uParam4->f_5 = (fParam1 - 20f);
	}
	Var0 = 5;
	Var0.f_16 = 5;
	Var0.f_22 = 5;
	Var0.f_28 = 5;
	Var1.f_16 = 1;
	Var1.f_22 = 1;
	Var1.f_23 = 1;
	Var1.f_24 = 1;
	Var1.f_28 = -1;
	Var1 = { Param0 };
	Var1.f_3 = uParam4->f_11;
	Var1.f_4 = fParam1;
	Var1.f_5 = 0;
	Var1.f_6 = 1;
	Var1.f_7 = 0;
	Var1.f_15 = 0;
	Var1.f_16 = 1;
	Var1.f_17 = 0;
	if (func_9(&Var1, uParam4, &Var0))
	{
		if ((uParam4->f_12 > 0f && uParam4->f_7) && uParam4->f_8)
		{
			Var2 = { Param0 - Var0[0 /*3*/] };
			if (Var2.f_2 > uParam4->f_12)
			{
				Var0[0 /*3*/] = { Param0 };
				Var0.f_16[0] = uParam4->f_11;
			}
		}
		*uParam2 = { Var0[0 /*3*/] };
		*uParam3 = Var0.f_16[0];
		return 1;
	}
	return 0;
}

int func_184(var uParam0)
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

void func_185(var uParam0)
{
	if (!uParam0->f_1)
	{
		if (unk_0xAFF96FDC3971E7EA())
		{
			func_186(uParam0, 0, 0);
		}
	}
}

void func_186(var uParam0, bool bParam1, bool bParam2)
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

void func_187()
{
	switch (Local_62[unk_0x59E2AD1A8ACEDA31() /*3*/].f_2)
	{
		case 0:
			func_212();
			func_210();
			if (func_199())
			{
				func_191();
				func_190();
				func_188(35);
				Local_62[unk_0x59E2AD1A8ACEDA31() /*3*/].f_2 = 1;
			}
			else if (Local_60.f_8 >= 1)
			{
				func_190();
				Local_62[unk_0x59E2AD1A8ACEDA31() /*3*/].f_2 = 1;
			}
			break;
		
		case 1:
			if (Local_60.f_8 >= 2)
			{
				Local_62[unk_0x59E2AD1A8ACEDA31() /*3*/].f_2 = 2;
			}
			break;
		
		case 2:
			break;
	}
}

void func_188(int iParam0)
{
	int iVar0;
	
	if (Global_262145.f_8572)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (Global_2097152[func_189() /*10931*/].f_6175.f_4111[iVar0 /*3*/] == iParam0)
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

int func_189()
{
	int iVar0;
	
	iVar0 = 0;
	return iVar0;
}

void func_190()
{
	if (unk_0x8F678487EEBD8CE4(iLocal_65))
	{
		unk_0x93370FA10F15BE44(&iLocal_65);
	}
}

void func_191()
{
	if (!unk_0xCE990E643CD9D0E5(Global_2440049.f_4006, 0))
	{
		unk_0xBE20AB8238688965(&(Global_2440049.f_4006), 0);
		func_192();
	}
	else
	{
		unk_0xBE20AB8238688965(&(Global_2440049.f_4006), 1);
	}
}

void func_192()
{
	func_193(1188, -1);
}

void func_193(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = func_197(iParam0, func_198(iParam1), 0);
	iVar0++;
	if (!func_196(iParam0))
	{
		func_195(iParam0, iVar0, iParam1, 1, 0);
	}
	else
	{
		func_194(iParam0, iVar0, iParam1, 1);
	}
}

void func_194(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	iVar0 = Global_2551832[iParam0 /*3*/][func_198(iParam2)];
	if (iVar0 != 0)
	{
		unk_0x6000E4684CB4330B(iVar0, iParam1, iParam3);
	}
	switch (iParam0)
	{
		case 787:
			Global_1388125[func_198(iParam2)] = iParam1;
			break;
		
		case 788:
			Global_1388131[func_198(iParam2)] = iParam1;
			break;
		
		case 789:
			Global_1388137[func_198(iParam2)] = iParam1;
			break;
		
		case 790:
			Global_1388143[func_198(iParam2)] = iParam1;
			break;
		
		case 8727:
			Global_1388149[func_198(iParam2)] = iParam1;
			break;
		
		case 777:
			Global_1388095[func_198(iParam2)] = iParam1;
			break;
		
		case 778:
			Global_1388101[func_198(iParam2)] = iParam1;
			break;
		
		case 779:
			Global_1388107[func_198(iParam2)] = iParam1;
			break;
		
		case 780:
			Global_1388113[func_198(iParam2)] = iParam1;
			break;
		
		case 8729:
			Global_1388119[func_198(iParam2)] = iParam1;
			break;
		
		case 767:
			Global_1388065[func_198(iParam2)] = iParam1;
			break;
		
		case 768:
			Global_1388071[func_198(iParam2)] = iParam1;
			break;
		
		case 769:
			Global_1388077[func_198(iParam2)] = iParam1;
			break;
		
		case 770:
			Global_1388083[func_198(iParam2)] = iParam1;
			break;
		
		case 8731:
			Global_1388089[func_198(iParam2)] = iParam1;
			break;
		
		case 757:
			Global_1388155[func_198(iParam2)] = iParam1;
			break;
		
		case 758:
			Global_1388161[func_198(iParam2)] = iParam1;
			break;
		
		case 759:
			Global_1388167[func_198(iParam2)] = iParam1;
			break;
		
		case 760:
			Global_1388173[func_198(iParam2)] = iParam1;
			break;
		
		case 8733:
			Global_1388179[func_198(iParam2)] = iParam1;
			break;
		
		case 1303:
			Global_1388185[func_198(iParam2)] = iParam1;
			break;
		
		case 7234:
			Global_1388191[func_198(iParam2)] = iParam1;
			break;
		
		case 639:
			Global_1388197[func_198(iParam2)] = iParam1;
			break;
		
		case 1278:
			Global_1388203[func_198(iParam2)] = iParam1;
			break;
		
		case 1877:
			Global_2590417[0 /*3*/][func_198(iParam2)] = iParam1;
			break;
		
		case 2268:
			Global_2590417[1 /*3*/][func_198(iParam2)] = iParam1;
			break;
		
		case 2930:
			Global_2590417[2 /*3*/][func_198(iParam2)] = iParam1;
			break;
		
		case 3059:
			Global_2590417[3 /*3*/][func_198(iParam2)] = iParam1;
			break;
		
		case 10138:
			Global_2590566[func_198(iParam2)] = iParam1;
			break;
		
		case 764:
			Global_1388209[func_198(iParam2)] = iParam1;
			break;
		
		case 765:
			Global_1388215[func_198(iParam2)] = iParam1;
			break;
		
		case 766:
			Global_1388221[func_198(iParam2)] = iParam1;
			break;
		
		case 8732:
			Global_1388227[func_198(iParam2)] = iParam1;
			break;
		
		case 9534:
			Global_1388233[func_198(iParam2)] = iParam1;
			break;
		
		case 1236:
			Global_1388239[func_198(iParam2)] = iParam1;
			break;
		
		case 3054:
			Global_2590490[0 /*3*/][func_198(iParam2)] = iParam1;
			break;
		
		case 3055:
			Global_2590490[1 /*3*/][func_198(iParam2)] = iParam1;
			break;
		
		case 3056:
			Global_2590490[2 /*3*/][func_198(iParam2)] = iParam1;
			break;
		
		case 3057:
			Global_2590490[3 /*3*/][func_198(iParam2)] = iParam1;
			break;
		
		case 3058:
			Global_2590490[4 /*3*/][func_198(iParam2)] = iParam1;
			break;
		
		case 3637:
			Global_2590569[0 /*3*/][func_198(iParam2)] = iParam1;
			break;
		
		case 3638:
			Global_2590569[1 /*3*/][func_198(iParam2)] = iParam1;
			break;
		
		case 3639:
			Global_2590569[2 /*3*/][func_198(iParam2)] = iParam1;
			break;
		
		case 3640:
			Global_2590569[3 /*3*/][func_198(iParam2)] = iParam1;
			break;
		
		case 3641:
			Global_2590569[4 /*3*/][func_198(iParam2)] = iParam1;
			break;
		
		case 3642:
			Global_2590585[0 /*3*/][func_198(iParam2)] = iParam1;
			break;
		
		case 3643:
			Global_2590585[1 /*3*/][func_198(iParam2)] = iParam1;
			break;
		
		case 3644:
			Global_2590585[2 /*3*/][func_198(iParam2)] = iParam1;
			break;
		
		case 3645:
			Global_2590585[3 /*3*/][func_198(iParam2)] = iParam1;
			break;
		
		case 3646:
			Global_2590585[4 /*3*/][func_198(iParam2)] = iParam1;
			break;
		
		case 3222:
			Global_2590490[5 /*3*/][func_198(iParam2)] = iParam1;
			break;
		
		case 3228:
			Global_2590417[4 /*3*/][func_198(iParam2)] = iParam1;
			break;
		
		case 3664:
			Global_2590601[func_198(iParam2)] = iParam1;
			break;
		
		case 3665:
			Global_2590610[func_198(iParam2)] = iParam1;
			break;
		
		case 3666:
			Global_2590604[func_198(iParam2)] = iParam1;
			break;
		
		case 3667:
			Global_2590613[func_198(iParam2)] = iParam1;
			break;
		
		case 3668:
			Global_2590607[func_198(iParam2)] = iParam1;
			break;
		
		case 3669:
			Global_2590616[func_198(iParam2)] = iParam1;
			break;
		
		case 3690:
			Global_2590619[func_198(iParam2)] = iParam1;
			break;
		
		case 3230:
			Global_2590490[6 /*3*/][func_198(iParam2)] = iParam1;
			break;
		
		case 3231:
			Global_2590417[5 /*3*/][func_198(iParam2)] = iParam1;
			break;
		
		case 3235:
			Global_2590490[7 /*3*/][func_198(iParam2)] = iParam1;
			break;
		
		case 3233:
			Global_2590417[6 /*3*/][func_198(iParam2)] = iParam1;
			break;
		
		case 4020:
			Global_2590490[8 /*3*/][func_198(iParam2)] = iParam1;
			break;
		
		case 4021:
			Global_2590417[7 /*3*/][func_198(iParam2)] = iParam1;
			break;
		
		case 4023:
			Global_2590490[9 /*3*/][func_198(iParam2)] = iParam1;
			break;
		
		case 4024:
			Global_2590417[8 /*3*/][func_198(iParam2)] = iParam1;
			break;
		
		case 4026:
			Global_2590490[10 /*3*/][func_198(iParam2)] = iParam1;
			break;
		
		case 4027:
			Global_2590417[9 /*3*/][func_198(iParam2)] = iParam1;
			break;
		
		case 4029:
			Global_2590490[11 /*3*/][func_198(iParam2)] = iParam1;
			break;
		
		case 4030:
			Global_2590417[10 /*3*/][func_198(iParam2)] = iParam1;
			break;
		
		case 6110:
			Global_2590490[12 /*3*/][func_198(iParam2)] = iParam1;
			break;
		
		case 6111:
			Global_2590417[11 /*3*/][func_198(iParam2)] = iParam1;
			break;
		
		case 6168:
			Global_2590490[13 /*3*/][func_198(iParam2)] = iParam1;
			break;
		
		case 6169:
			Global_2590417[12 /*3*/][func_198(iParam2)] = iParam1;
			break;
		
		case 6546:
			Global_2590490[14 /*3*/][func_198(iParam2)] = iParam1;
			break;
		
		case 6547:
			Global_2590417[13 /*3*/][func_198(iParam2)] = iParam1;
			break;
		
		case 6559:
			Global_2590490[15 /*3*/][func_198(iParam2)] = iParam1;
			break;
		
		case 6560:
			Global_2590417[14 /*3*/][func_198(iParam2)] = iParam1;
			break;
		
		case 6562:
			Global_2590490[16 /*3*/][func_198(iParam2)] = iParam1;
			break;
		
		case 6563:
			Global_2590417[15 /*3*/][func_198(iParam2)] = iParam1;
			break;
		
		case 6565:
			Global_2590490[17 /*3*/][func_198(iParam2)] = iParam1;
			break;
		
		case 6566:
			Global_2590417[16 /*3*/][func_198(iParam2)] = iParam1;
			break;
		
		case 7284:
			Global_2590417[17 /*3*/][func_198(iParam2)] = iParam1;
			break;
		
		case 7286:
			Global_2590417[18 /*3*/][func_198(iParam2)] = iParam1;
			break;
		
		case 7288:
			Global_2590417[19 /*3*/][func_198(iParam2)] = iParam1;
			break;
		
		case 8011:
			Global_2590417[20 /*3*/][func_198(iParam2)] = iParam1;
			break;
		
		case 8283:
			Global_2590622[func_198(iParam2)] = iParam1;
			break;
		
		case 8284:
			Global_2590625[func_198(iParam2)] = iParam1;
			break;
		
		case 8285:
			Global_2590628[func_198(iParam2)] = iParam1;
			break;
		
		case 8286:
			Global_2590631[func_198(iParam2)] = iParam1;
			break;
		
		case 8287:
			Global_2590634[func_198(iParam2)] = iParam1;
			break;
		
		case 8288:
			Global_2590637[func_198(iParam2)] = iParam1;
			break;
		
		case 8289:
			Global_2590640[func_198(iParam2)] = iParam1;
			break;
		
		case 8290:
			Global_2590643[func_198(iParam2)] = iParam1;
			break;
		
		case 8291:
			Global_2590646[func_198(iParam2)] = iParam1;
			break;
		
		case 8292:
			Global_2590649[func_198(iParam2)] = iParam1;
			break;
		
		case 8293:
			Global_2590652[func_198(iParam2)] = iParam1;
			break;
		
		case 8294:
			Global_2590655[func_198(iParam2)] = iParam1;
			break;
		
		case 8295:
			Global_2590658[func_198(iParam2)] = iParam1;
			break;
		
		case 8901:
			Global_2590661[func_198(iParam2)] = iParam1;
			break;
		
		case 8535:
			Global_2590417[21 /*3*/][func_198(iParam2)] = iParam1;
			break;
		
		case 8978:
			Global_2590490[23 /*3*/][func_198(iParam2)] = iParam1;
			break;
		
		case 8976:
			Global_2590417[22 /*3*/][func_198(iParam2)] = iParam1;
			break;
		
		case 8981:
			Global_2590490[24 /*3*/][func_198(iParam2)] = iParam1;
			break;
		
		case 8979:
			Global_2590417[23 /*3*/][func_198(iParam2)] = iParam1;
			break;
		
		default:
			break;
	}
}

void func_195(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	int iVar0;
	
	if (bParam4)
	{
	}
	iVar0 = Global_2551832[iParam0 /*3*/][func_198(iParam2)];
	if (iVar0 != 0)
	{
		unk_0x6000E4684CB4330B(iVar0, iParam1, iParam3);
	}
}

int func_196(int iParam0)
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

int func_197(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	var uVar1;
	
	if (iParam0 != 11771)
	{
		if (iParam2 == 0)
		{
		}
		iVar0 = Global_2551832[iParam0 /*3*/][func_198(iParam1)];
		if (unk_0xD2F202166691EDB2(iVar0, &uVar1, -1))
		{
			return uVar1;
		}
	}
	return 0;
}

int func_198(var uParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = uParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_143();
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

int func_199()
{
	struct<14> Var0;
	
	if (unk_0xF7DE07F319727299(Local_60.f_2))
	{
		if (unk_0x3D70CCF2C9B362CD(Local_60.f_2))
		{
			if (unk_0x0A43129B43E05B32(unk_0x0EE5FAC7EF37F8A0(Local_60.f_2), unk_0x9B0761B4C3EB8BC7()) && func_209(Local_60.f_2))
			{
				func_208(&(Local_60.f_2));
				if (unk_0x8F678487EEBD8CE4(iLocal_65))
				{
					unk_0x93370FA10F15BE44(&iLocal_65);
				}
				if (!func_207(1))
				{
					func_202("ABB_BOXCT");
				}
				Var0.f_2 = 154008137;
				Var0.f_10 = unk_0x460153A63B9477BC();
				Var0.f_3 = uLocal_64;
				func_200(Var0, func_201(1));
				unk_0xBE20AB8238688965(&(Local_62[unk_0x59E2AD1A8ACEDA31() /*3*/].f_1), 0);
				return 1;
			}
		}
	}
	return 0;
}

void func_200(struct<2> Param0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, int iParam13)
{
	Param0 = -1949011582;
	Param0.f_1 = unk_0x460153A63B9477BC();
	if (!iParam13 == 0)
	{
		unk_0xB802750B43D4047C(1, &Param0, 14, iParam13);
	}
}

int func_201(int iParam0)
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
			if (func_26(iVar2, 0, 0))
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

int func_202(char* sParam0)
{
	int iVar0;
	
	iVar0 = -1;
	unk_0x5B8DD855EAFD33B5(sParam0);
	iVar0 = unk_0xD60C2975A14D763D(0, 1);
	func_203(0, sParam0, 1, 0, 0, 0, 0, 0, 1, 0, 0, 0);
	return iVar0;
}

void func_203(int iParam0, char* sParam1, int iParam2, char* sParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, char* sParam9, char* sParam10, char* sParam11)
{
	int iVar0;
	
	if ((!func_206() || !unk_0xFC559366953F62B3()) || !func_141(unk_0x460153A63B9477BC(), 0))
	{
		return;
	}
	iVar0 = func_204(iParam2);
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

int func_204(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= (Global_1672611 - 1))
	{
		if (iParam0 > Global_1672611.f_5[iVar0 /*53*/].f_1)
		{
			func_205(iVar0);
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

void func_205(int iParam0)
{
	int iVar0;
	
	iVar0 = 4;
	while (iVar0 >= iParam0 + 1)
	{
		Global_1672611.f_5[iVar0 /*53*/] = { Global_1672611.f_5[(iVar0 - 1) /*53*/] };
		iVar0 = (iVar0 + -1);
	}
}

bool func_206()
{
	return unk_0x95C5B896CB42B20E(-1762644250);
}

int func_207(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return Global_1627097 > 0;
		
		case 2:
			return Global_1627097.f_1 > 0;
		
		case 3:
			return Global_1627097.f_2 > 0;
		
		case 4:
			return Global_1627097.f_4 > 0;
		
		case 5:
			return Global_1627097.f_3 > 0;
		
		default:
	}
	return 0;
}

void func_208(var uParam0)
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

int func_209(var uParam0)
{
	if (unk_0xF7DE07F319727299(uParam0))
	{
		unk_0x5F00FA3094B612F5(uParam0);
		return unk_0xF05B7723022657B3(uParam0);
	}
	return 0;
}

void func_210()
{
	if (!unk_0x8F678487EEBD8CE4(iLocal_65))
	{
		if (unk_0xF7DE07F319727299(Local_60.f_2))
		{
			iLocal_65 = unk_0x2BE000892D65EA2A(unk_0x0EE5FAC7EF37F8A0(Local_60.f_2));
			if (func_211())
			{
				unk_0xFA81E0FBD7F5ACA0(iLocal_65, 0.85f);
			}
			else
			{
				unk_0xFA81E0FBD7F5ACA0(iLocal_65, 1.2f);
			}
			unk_0xE7B8403ABCA0391D(iLocal_65, 403);
			unk_0xECC9A00CF1181EC2(iLocal_65, 2);
			unk_0xB023F5C66F5716C7(iLocal_65, "ABB_BLIPN");
		}
	}
}

bool func_211()
{
	if (unk_0xFC559366953F62B3())
	{
		return unk_0xCE990E643CD9D0E5(Global_4456448.f_133494, 0);
	}
	return ((unk_0xCE990E643CD9D0E5(Global_4456448.f_133494, 0) || Global_1655243) && unk_0x7B70881748D166CD(joaat("fm_deathmatch_creator")) > 0);
}

void func_212()
{
	int iVar0;
	
	if (!unk_0xDABD547F0DF2906C())
	{
		iVar0 = func_197(1190, -1, 0);
		if (!unk_0xCE990E643CD9D0E5(iVar0, 14))
		{
			unk_0xBE20AB8238688965(&iVar0, 14);
			func_195(1190, iVar0, -1, 1, 0);
		}
	}
}

int func_213()
{
	return Local_60;
}

int func_214()
{
	unk_0x78FCB2E22C41B9D5(joaat("prop_drug_package_02"));
	if (unk_0x7D167B9A0CCDA347(joaat("prop_drug_package_02")))
	{
		return 1;
	}
	return 0;
}

int func_215(int iParam0)
{
	return Local_62[iParam0 /*3*/];
}

int func_216()
{
	var uVar0;
	
	func_223(&uVar0);
	if (Global_1312872 == 0)
	{
		if (!unk_0x25DDB354A40FFCDB())
		{
			return 1;
		}
	}
	if (func_222())
	{
		return 1;
	}
	if (Global_2464493)
	{
		return 1;
	}
	if (func_221())
	{
		return 1;
	}
	if (func_220(159))
	{
		if (!func_219())
		{
			return 1;
		}
	}
	if (func_220(157))
	{
		return 1;
	}
	if (!unk_0x0EB6C63A09FD9DF1())
	{
		return 1;
	}
	if (func_217() != 0)
	{
		if (unk_0x7B70881748D166CD(func_217()) == 0)
		{
			return 1;
		}
	}
	return 0;
}

int func_217()
{
	switch (func_58())
	{
		case 0:
			return func_218();
			break;
		
		case 2:
			return joaat("creator");
			break;
	}
	return 0;
}

int func_218()
{
	switch (Global_2464595)
	{
		case 0:
			return joaat("freemode");
		
		default:
	}
	return joaat("freemode");
}

bool func_219()
{
	return Global_2451787.f_696;
}

int func_220(int iParam0)
{
	if (unk_0x16F1FCCC54559709(1, iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_221()
{
	return Global_2462250;
}

bool func_222()
{
	return Global_2451787.f_691;
}

void func_223(var uParam0)
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
					func_224(iVar0);
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

void func_224(int iParam0)
{
	struct<3> Var0;
	int iVar1;
	int iVar2;
	bool bVar3;
	
	if (unk_0x477FAFFE21935947(1, iParam0, &Var0, 3))
	{
		if (func_26(Var0.f_1, 1, 1))
		{
			iVar1 = unk_0x1FA7B77001D60F9D(Var0.f_1);
			if (unk_0xAE06B9E39EBDE049(iVar1))
			{
				if (unk_0x47DBF174A0CB9D55(iVar1, 0))
				{
					iVar2 = unk_0xA5D5B1042E8F47BD(iVar1, 0);
					if (unk_0x292280AF1BBBD6AC(iVar2, Var0.f_2) && unk_0x82CC259B7B4F4AD9())
					{
						if (func_225(iVar2, &bVar3))
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

int func_225(int iParam0, var uParam1)
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

void func_226()
{
	wait(0);
}

int func_227(int iParam0)
{
	return Global_1590682[iParam0 /*883*/];
}

void func_228()
{
	Global_1388305 = -1;
	if (unk_0x8F678487EEBD8CE4(iLocal_65))
	{
		unk_0x93370FA10F15BE44(&iLocal_65);
	}
	func_231();
	if (unk_0x25DDB354A40FFCDB())
	{
		if (unk_0xAFF96FDC3971E7EA())
		{
			if (unk_0xF7DE07F319727299(Local_60.f_2) && unk_0xF05B7723022657B3(Local_60.f_2))
			{
				func_208(&(Local_60.f_2));
			}
			Local_60 = 4;
		}
	}
	if (unk_0xCE990E643CD9D0E5(Local_60.f_1, 8))
	{
		func_230();
	}
	func_229();
}

void func_229()
{
	unk_0xD39E529EBE5DB04F();
}

void func_230()
{
	Global_2540384.f_897 = 0;
	Global_2540384.f_897.f_1 = { 0f, 0f, 0f };
	Global_2540384.f_897.f_4 = 0f;
	Global_2540384.f_897.f_8 = 0;
	unk_0xD2459066EA58CE43(&(Global_2540384.f_897.f_7), 0);
}

void func_231()
{
	if (unk_0xCE990E643CD9D0E5(iLocal_63, 4))
	{
		unk_0x39B3FA55B5C6CFFE(unk_0x460153A63B9477BC(), 0.72f);
		unk_0x5D3F0C0523D3F11D(unk_0x460153A63B9477BC(), 1f, 1);
		unk_0xE7D74FCE32F704E7(unk_0x460153A63B9477BC(), 1f);
		unk_0x69CF6356D3CA1533(unk_0x460153A63B9477BC(), 1f);
		func_232(1);
		unk_0xD2459066EA58CE43(&iLocal_63, 5);
		unk_0xD2459066EA58CE43(&iLocal_63, 7);
		unk_0xD2459066EA58CE43(&iLocal_63, 4);
	}
}

void func_232(int iParam0)
{
	char* sVar0;
	
	sVar0 = func_233(iParam0, 0);
	unk_0x50E637E6CAC936B2(sVar0);
}

char* func_233(int iParam0, bool bParam1)
{
	switch (iParam0)
	{
		case 1:
			if (bParam1)
			{
				return "MP_Bull_tost_Out";
			}
			else
			{
				return "MP_Bull_tost";
			}
			break;
		
		case 2:
			if (bParam1)
			{
				return "MP_Powerplay_Out";
			}
			else
			{
				return "MP_Powerplay";
			}
			break;
		
		case 3:
			if (bParam1)
			{
				return "MP_Killstreak_Out";
			}
			else
			{
				return "MP_Killstreak";
			}
			break;
		
		case 4:
			if (bParam1)
			{
				return "MP_Loser_Streak_Out";
			}
			else
			{
				return "MP_Loser_Streak";
			}
			break;
		
		case 6:
			if (bParam1)
			{
				return "BikerFilterOut";
			}
			else
			{
				return "BikerFilter";
			}
			break;
	}
	return "";
}

int func_234(struct<21> Param0)
{
	func_238(func_239(Param0), Param0);
	unk_0xDF803FB4BC52CAF6(1);
	func_236(0, -1, 0);
	unk_0x97D2F2E2C92FD519(&Local_60, 11);
	unk_0xBB96A3ECD45D0317(&Local_62, 97);
	if (!func_235())
	{
		return 0;
	}
	unk_0x3A396632EB359434(0);
	if (unk_0xAFF96FDC3971E7EA())
	{
		Local_60.f_7 = Param0.f_16;
		Global_1388305 = Local_60.f_7;
		Local_60.f_3 = { unk_0x3E4D3CCC220BDFB1(unk_0x9B0761B4C3EB8BC7(), 0) };
		if (!func_4(Global_2540384.f_897.f_1))
		{
			unk_0xBE20AB8238688965(&(Local_60.f_1), 8);
		}
	}
	bLocal_68 = unk_0xD0E70037A973A810();
	Local_62[unk_0x59E2AD1A8ACEDA31() /*3*/] = 0;
	return 1;
}

int func_235()
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
		if (func_222())
		{
			return 0;
		}
		if (func_220(157))
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

int func_236(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = unk_0x361B374A50D875B4();
	while (iVar0 != 2)
	{
		if (((iVar0 == 3 || iVar0 == 4) || iVar0 == 5) || iVar0 == 6)
		{
			if (!bParam2)
			{
				func_229();
			}
			else
			{
				return 0;
			}
		}
		if (!func_237())
		{
			if (iParam0 == 0)
			{
				if (!unk_0x25DDB354A40FFCDB())
				{
					if (!bParam2)
					{
						func_229();
					}
					else
					{
						return 0;
					}
				}
				if (func_222())
				{
					if (!bParam2)
					{
						func_229();
					}
					else
					{
						return 0;
					}
				}
				if (func_220(157))
				{
					if (!bParam2)
					{
						func_229();
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
					func_229();
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
				func_229();
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
			func_229();
		}
		else
		{
			return 0;
		}
	}
	return 1;
}

bool func_237()
{
	return Global_1312872;
}

void func_238(int iParam0, struct<17> Param1, var uParam2, var uParam3, var uParam4, var uParam5)
{
	if (!unk_0x25DDB354A40FFCDB())
	{
		func_229();
	}
	unk_0xA88557896B79E30D(iParam0, 0, Param1.f_16);
}

int func_239(int iParam0)
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

