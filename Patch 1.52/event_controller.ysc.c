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
	float fLocal_47 = 0f;
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
	var uLocal_62 = 0;
	var uLocal_63 = 0;
	int iLocal_64 = 0;
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
	fLocal_47 = ((0.05f + 0.275f) - 0.01f);
	if (unk_0xED06FD5709A59F02(34))
	{
		unk_0xD39E529EBE5DB04F();
	}
	while (true)
	{
		wait(0);
		func_140();
		func_1();
	}
}

void func_1()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	iVar2 = 0;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = 0;
	iVar6 = 0;
	if (unk_0xDCA94C1EA9942FBD())
	{
		iVar2 = 0;
		while (iVar2 < unk_0x2AC1C68C7CCA90E5(1))
		{
			iVar7 = unk_0x39BE1B4CEB4DAEC8(1, iVar2);
			switch (iVar7)
			{
				case 192:
					func_137();
					break;
				
				case 193:
					func_136();
					break;
				
				case 194:
					func_130(iVar2);
					break;
				
				case 195:
					func_129(iVar2);
					break;
				
				case 196:
					func_118(iVar2);
					break;
				
				case 214:
					func_3(iVar2);
					break;
			}
			iVar2++;
		}
	}
	iVar2 = 0;
	while (iVar2 < unk_0x2AC1C68C7CCA90E5(0))
	{
		iVar0 = unk_0x39BE1B4CEB4DAEC8(0, iVar2);
		iLocal_64 = 1;
		switch (iVar0)
		{
			case 141:
				unk_0x477FAFFE21935947(0, iVar2, &iVar1, 1);
				if (unk_0xAE06B9E39EBDE049(iVar1))
				{
					if (unk_0x20F7576FDB52E2B0(iVar1))
					{
						if (func_2(iVar3))
						{
							Global_53968.f_1[iVar3] = iVar1;
							iVar3++;
						}
					}
					else if (unk_0xA1914E72A0EB31D0(iVar1))
					{
						if (func_2(iVar5))
						{
							Global_53968.f_25[iVar5] = iVar1;
							iVar5++;
						}
					}
				}
				break;
			
			case 142:
				unk_0x477FAFFE21935947(0, iVar2, &iVar1, 1);
				if (unk_0xAE06B9E39EBDE049(iVar1))
				{
					if (unk_0x20F7576FDB52E2B0(iVar1))
					{
						if (func_2(iVar4))
						{
							Global_53968.f_13[iVar4] = iVar1;
							iVar4++;
						}
					}
					else if (unk_0xA1914E72A0EB31D0(iVar1))
					{
						if (func_2(iVar6))
						{
							Global_53968.f_37[iVar6] = iVar1;
							iVar6++;
						}
					}
				}
				break;
		}
		iVar2++;
	}
	Global_53968 = iVar3;
	Global_53968.f_12 = iVar4;
	Global_53968.f_24 = iVar5;
	Global_53968.f_36 = iVar6;
}

bool func_2(int iParam0)
{
	return iParam0 < 10;
}

void func_3(int iParam0)
{
	struct<39> Var0;
	int iVar1;
	
	if (unk_0x477FAFFE21935947(1, iParam0, &Var0, 39))
	{
		iVar1 = unk_0xB3A8A955F956F9CB(Var0.f_38);
		if (iVar1 >= 0 && iVar1 < unk_0xE0B39E9C693A0AD3())
		{
			if (unk_0x785B70827D93382D(iVar1) || unk_0x4E7C7AFA7F1752B4(iVar1))
			{
				if (unk_0x4E7C7AFA7F1752B4(iVar1))
				{
					func_55(iVar1);
				}
				else
				{
					unk_0xA033DD33D5DB43ED(iVar1);
				}
				func_54(Var0.f_37, -1);
			}
			else if (func_47())
			{
				func_4(Var0.f_29, Var0, Var0.f_38, Var0.f_16, Var0.f_35, Var0.f_36);
			}
		}
	}
}

int func_4(struct<6> Param0, struct<16> Param1, var uParam2, struct<13> Param3, var uParam4, int iParam5)
{
	bool bVar0;
	bool bVar1;
	struct<16> Var2;
	int iVar3;
	var uVar4;
	int iVar5;
	int iVar6;
	struct<10> Var7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	struct<16> Var12;
	struct<16> Var13;
	int iVar14;
	int iVar15;
	int iVar16;
	int iVar17;
	int iVar18;
	int iVar19;
	var uVar20;
	var uVar21;
	bool bVar22;
	bool bVar23;
	bool bVar24;
	bool bVar25;
	int iVar26;
	int iVar27;
	int iVar28;
	
	bVar0 = false;
	if (iParam5 >= 1000000)
	{
		iParam5 = (iParam5 - 1000000);
		bVar0 = true;
	}
	if (unk_0x25DDB354A40FFCDB())
	{
		if (func_46())
		{
			func_45(uParam2);
			return 0;
		}
		if (func_44())
		{
			func_45(uParam2);
			return 0;
		}
	}
	if (!unk_0x25DDB354A40FFCDB())
	{
		if (bVar0)
		{
		}
		else if (!unk_0x78A7795C9C51946D(&Param3))
		{
			func_45(uParam2);
			return 0;
		}
		if (Global_19624)
		{
			func_45(uParam2);
			return 0;
		}
		bVar1 = true;
		if (!func_43())
		{
			if (!func_42(0))
			{
				if (bVar1)
				{
					func_45(uParam2);
					return 0;
				}
			}
		}
	}
	if (unk_0x25DDB354A40FFCDB())
	{
		if (!func_41(unk_0x460153A63B9477BC()))
		{
			func_45(uParam2);
			return 0;
		}
	}
	if (unk_0x7BCC91F3C1CF24E8(&Param1))
	{
		func_45(uParam2);
		return 0;
	}
	if (unk_0x7BCC91F3C1CF24E8(&Param0))
	{
		func_45(uParam2);
		return 0;
	}
	Var2 = { Param1 };
	iVar3 = func_40(Var2);
	if (iVar3 != -1)
	{
		func_37(iVar3);
	}
	uVar4 = unk_0xB3A8A955F956F9CB(uParam2);
	iVar5 = unk_0xBF40EC9DD8408D07(uVar4);
	iVar6 = 0;
	iVar6 = 0;
	while (iVar6 <= 11)
	{
		if (iVar5 == Global_2395292[iVar6 /*4*/].f_3 && unk_0x578C4EF320340AF7() < Global_2395292[iVar6 /*4*/].f_2)
		{
			Global_2395292[iVar6 /*4*/].f_2 = unk_0x578C4EF320340AF7() + 30000;
			iVar6 = 12;
			func_45(uParam2);
			return 0;
		}
		iVar6++;
	}
	Var7.f_1 = -1;
	Var7.f_2 = -1;
	Var7.f_9 = -1;
	func_36(&Var7);
	iVar8 = 0;
	iVar9 = 0;
	iVar10 = 63;
	iVar11 = 0;
	StringCopy(&Var12, "", 64);
	StringCopy(&Var13, "", 64);
	iVar14 = 0;
	iVar15 = 0;
	iVar16 = 0;
	iVar17 = 1;
	iVar18 = 0;
	iVar19 = 0;
	if (func_35(&Param0, &iVar8, &iVar11))
	{
		iVar10 = 40;
		iVar15 = 0;
		iVar11 = iVar11;
	}
	else if (func_33(&Param0, &Var7, 0))
	{
		iVar10 = Var7.f_2;
		iVar8 = func_32(iVar10, Var7.f_1);
		iVar9 = func_31(&Var7);
		Var12 = { func_30(&Var7, 0) };
		Var13 = { func_29(&Var7) };
		iVar15 = 1;
		iVar14 = func_28(&Var7, 0);
		iVar19 = func_27(&Var7);
		uVar20 = func_25(&Var7);
		uVar21 = func_24(&Var7);
		bVar22 = func_19(&Var7);
		if (!bVar22)
		{
			iVar18 = 1;
		}
	}
	else
	{
		bVar23 = false;
		if (func_17(unk_0x460153A63B9477BC(), Param3))
		{
			if (!unk_0x25DDB354A40FFCDB())
			{
				bVar23 = true;
			}
			else
			{
				func_45(uParam2);
				func_15(0);
				return 0;
			}
		}
		if (!unk_0xC6C08C02733D02C8())
		{
			if (!bVar23)
			{
				if (func_13(unk_0x460153A63B9477BC(), Param3))
				{
					func_45(uParam2);
					func_15(0);
					return 0;
				}
			}
		}
		if (!func_12())
		{
			func_45(uParam2);
			bVar24 = true;
			func_15(bVar24);
			return 0;
		}
		bVar25 = false;
		if (!bVar23)
		{
			if (func_7(Param3, &bVar25, 1))
			{
				func_45(uParam2);
				func_15(bVar25);
				return 0;
			}
		}
		iVar16 = 1;
		iVar17 = 0;
		iVar15 = 1;
	}
	iVar26 = Global_1387876;
	if (iVar26 >= 12)
	{
		iVar26 = (iVar26 - 1);
	}
	iVar27 = (iVar26 - 1);
	while (iVar27 >= 0)
	{
		Global_2392991[iVar26 /*99*/] = { Global_2392991[iVar27 /*99*/] };
		iVar26 = (iVar26 - 1);
		iVar27 = (iVar27 - 1);
	}
	Global_1387876++;
	if (Global_1387876 > 12)
	{
		Global_1387876 = 12;
	}
	iVar28 = 0;
	Global_2392991[iVar28 /*99*/] = 0;
	Global_2392991[iVar28 /*99*/].f_1 = 0;
	Global_2392991[iVar28 /*99*/].f_5 = 0;
	Global_2392991[iVar28 /*99*/].f_2 = iVar16;
	Global_2392991[iVar28 /*99*/].f_3 = 0;
	Global_2392991[iVar28 /*99*/].f_4 = iVar17;
	Global_2392991[iVar28 /*99*/].f_6 = { Param0 };
	Global_2392991[iVar28 /*99*/].f_12 = uVar20;
	Global_2392991[iVar28 /*99*/].f_13 = uVar21;
	Global_2392991[iVar28 /*99*/].f_15 = { Param1 };
	StringCopy(&(Global_2392991[iVar28 /*99*/].f_31), "", 64);
	Global_2392991[iVar28 /*99*/].f_49 = iVar10;
	Global_2392991[iVar28 /*99*/].f_50 = iVar8;
	Global_2392991[iVar28 /*99*/].f_51 = iVar9;
	Global_2392991[iVar28 /*99*/].f_91 = uParam2;
	Global_2392991[iVar28 /*99*/].f_57 = { Var12 };
	Global_2392991[iVar28 /*99*/].f_73 = { Var13 };
	Global_2392991[iVar28 /*99*/].f_52 = iVar14;
	Global_2392991[iVar28 /*99*/].f_53 = 0;
	Global_2392991[iVar28 /*99*/].f_53.f_1 = 0;
	Global_2392991[iVar28 /*99*/].f_53.f_2 = 0;
	Global_2392991[iVar28 /*99*/].f_56 = iVar15;
	Global_2392991[iVar28 /*99*/].f_90 = uParam4;
	Global_2392991[iVar28 /*99*/].f_92 = -1;
	Global_2392991[iVar28 /*99*/].f_93 = iVar18;
	Global_2392991[iVar28 /*99*/].f_94 = Global_2395344;
	Global_2392991[iVar28 /*99*/].f_95 = iVar19;
	Global_2392991[iVar28 /*99*/].f_98 = unk_0x78A7795C9C51946D(&Param3);
	if (Global_2392991[iVar28 /*99*/].f_50 == 0)
	{
		if (Global_2392991[iVar28 /*99*/].f_51 == 1)
		{
			Global_2392991[iVar28 /*99*/].f_56 = 0;
		}
	}
	Global_2392991[iVar28 /*99*/].f_96 = func_6(Param3, iVar28);
	Global_2392991[iVar28 /*99*/].f_97 = 0;
	Global_2392991[iVar28 /*99*/].f_89 = iParam5;
	Global_2395344++;
	Global_2392991[iVar28 /*99*/].f_47 = func_5(Param3);
	if (Global_2392991[iVar28 /*99*/].f_47 != -1)
	{
		Global_2392991[iVar28 /*99*/].f_48 = unk_0x578C4EF320340AF7() + 15000;
	}
	return 1;
}

int func_5(struct<13> Param0)
{
	struct<13> Var0[1];
	int iVar1;
	
	if (!unk_0xC6C08C02733D02C8())
	{
		return -1;
	}
	Var0[0 /*13*/] = { Param0 };
	iVar1 = unk_0xE7746A0D51702E3C(&Var0, 1);
	if (iVar1 < 0)
	{
		return -1;
	}
	return iVar1;
}

int func_6(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, int iParam13)
{
	if (!unk_0x78A7795C9C51946D(&uParam0))
	{
		return 0;
	}
	if (Global_2392991[iParam13 /*99*/].f_90 > 0)
	{
		return 0;
	}
	return 1;
}

int func_7(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, int iParam13, bool bParam14)
{
	struct<13> Var0;
	
	*iParam13 = 0;
	if (func_11(0))
	{
		return 0;
	}
	if (unk_0xC6C08C02733D02C8())
	{
		if (!func_10())
		{
			*iParam13 = 1;
			return 1;
		}
	}
	if (!func_9(1) && !bParam14)
	{
		return 1;
	}
	Var0 = { func_8(unk_0x460153A63B9477BC()) };
	if (!bParam14 && !unk_0xFFC66A35D4B5E605(&Var0, &uParam0))
	{
		if (!unk_0x78A7795C9C51946D(&uParam0))
		{
			return 1;
		}
	}
	return 0;
}

struct<13> func_8(int iParam0)
{
	struct<13> Var0;
	
	unk_0x2BDD80E79441BD36(iParam0, &Var0, 13);
	return Var0;
}

int func_9(int iParam0)
{
	if (unk_0x59ED414969A48197() || (unk_0xDCA0815D900F27F8() && iParam0 == 0))
	{
		if (unk_0xF9A94F315B890564(1) == 0 || unk_0x5EFFB3AB721DABB7(1, -1) == 0)
		{
			return 0;
		}
	}
	else if (unk_0xF9A94F315B890564(1) == 0)
	{
		return 0;
	}
	if (func_10() == 0)
	{
		return 0;
	}
	return 1;
}

int func_10()
{
	if (unk_0x59ED414969A48197() && unk_0x51C955B55E9F6E86())
	{
		return 1;
	}
	if (unk_0x11E5DE894D6A8A5F() && unk_0x51C955B55E9F6E86())
	{
		return 1;
	}
	if ((unk_0xDCA0815D900F27F8() && unk_0xAC9BDC8868BA314A() == 0) && unk_0x51C955B55E9F6E86())
	{
		return 1;
	}
	if (unk_0xC6C08C02733D02C8() && unk_0x51C955B55E9F6E86())
	{
		return 1;
	}
	if (unk_0xF8EDFF98A9C94C74() && unk_0x51C955B55E9F6E86())
	{
		return 1;
	}
	return 0;
}

int func_11(int iParam0)
{
	if (unk_0x59ED414969A48197() || (unk_0xDCA0815D900F27F8() && iParam0 == 0))
	{
		if (unk_0xF9A94F315B890564(0) == 0 || unk_0x5EFFB3AB721DABB7(0, -1) == 0)
		{
			return 0;
		}
	}
	else if (unk_0xF9A94F315B890564(0) == 0)
	{
		return 0;
	}
	if (func_10() == 0)
	{
		return 0;
	}
	return 1;
}

bool func_12()
{
	if (!unk_0x11E5DE894D6A8A5F())
	{
		return 1;
	}
	return unk_0x51C955B55E9F6E86();
}

int func_13(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13)
{
	if (!func_14(iParam0))
	{
		if (unk_0xC6C08C02733D02C8())
		{
			if (unk_0xA20DDBBB15EC6235(&uParam1))
			{
				return 0;
			}
		}
		if (!unk_0xF9A94F315B890564(0))
		{
			if (!unk_0xF9A94F315B890564(1))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_14(int iParam0)
{
	switch (iParam0)
	{
		case 63:
		case 62:
		case 61:
		case 40:
			return 1;
		
		default:
	}
	return 0;
}

void func_15(bool bParam0)
{
	int iVar0;
	
	if (bParam0)
	{
		if (!unk_0x11E5DE894D6A8A5F())
		{
			return;
		}
	}
	if (unk_0xC6C08C02733D02C8())
	{
		return;
	}
	iVar0 = unk_0x578C4EF320340AF7();
	if (iVar0 < Global_2395341)
	{
		return;
	}
	if (unk_0xDABD547F0DF2906C())
	{
		return;
	}
	if (bParam0)
	{
		func_16("INV_NO_XBOXLIVE", -1);
	}
	else
	{
		func_16("INV_RESTRICT", -1);
	}
	Global_2395341 = (iVar0 + 1800000);
}

void func_16(char* sParam0, int iParam1)
{
	unk_0x17751E107423AFE9(sParam0);
	unk_0x1A169149B3D18FCB(0, 0, true, iParam1);
}

int func_17(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13)
{
	if (!func_14(iParam0))
	{
		if (unk_0xC6C08C02733D02C8())
		{
			if (unk_0xA20DDBBB15EC6235(&uParam1))
			{
				return 0;
			}
		}
		if (!func_18())
		{
			return 1;
		}
	}
	return 0;
}

int func_18()
{
	if (unk_0x02AF7A48BB212AD4() == 0)
	{
		return 0;
	}
	if (unk_0x59ED414969A48197())
	{
		if (unk_0x5EFFB3AB721DABB7(1, -1))
		{
			if (unk_0x51C955B55E9F6E86())
			{
				return 1;
			}
		}
	}
	if (unk_0xDCA0815D900F27F8())
	{
		if (unk_0xF9A94F315B890564(1))
		{
			if (unk_0x51C955B55E9F6E86())
			{
				return 1;
			}
		}
	}
	if (unk_0x11E5DE894D6A8A5F() || unk_0xC6C08C02733D02C8())
	{
		if (unk_0xB454B9D1010ED3BA(0, -3, 1))
		{
			return 1;
		}
	}
	if (unk_0xF8EDFF98A9C94C74())
	{
		if (unk_0x5EFFB3AB721DABB7(0, -1))
		{
			if (unk_0x51C955B55E9F6E86())
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_19(var uParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	if (func_23(uParam0))
	{
		return unk_0xCE990E643CD9D0E5(Global_2395346.f_356[uParam0->f_9 /*75*/].f_10.f_63, 14);
	}
	if (func_22(uParam0->f_1))
	{
		if (func_21(uParam0))
		{
			return unk_0xCE990E643CD9D0E5(Global_2398103.f_1.f_63, 14);
		}
		return iVar0;
	}
	iVar1 = func_20(uParam0);
	if (iVar1 == -1)
	{
		return iVar0;
	}
	switch (uParam0->f_2)
	{
		case 63:
			return unk_0xCE990E643CD9D0E5(Global_794709.f_4[iVar1 /*88*/].f_76, 14);
		
		case 62:
			return unk_0xCE990E643CD9D0E5(Global_917806.f_604[iVar1 /*88*/].f_76, 14);
		
		case 40:
			return iVar0;
		
		default:
	}
	if (uParam0->f_2 == unk_0x460153A63B9477BC())
	{
		return iVar0;
	}
	else if (uParam0->f_2 < 32)
	{
		return iVar0;
	}
	return iVar0;
}

int func_20(var uParam0)
{
	int iVar0;
	
	if (unk_0x7BCC91F3C1CF24E8(&(uParam0->f_3)))
	{
		return -1;
	}
	if (func_22(uParam0->f_1))
	{
		if (func_21(uParam0))
		{
			return 9999;
		}
		return -1;
	}
	iVar0 = 0;
	switch (uParam0->f_2)
	{
		case 63:
			if (unk_0xCE990E643CD9D0E5(Global_794709.f_4[uParam0->f_1 /*88*/].f_76, 13))
			{
				if (unk_0xF005CCA4263DF67F(&(Global_794709.f_4[uParam0->f_1 /*88*/]), &(uParam0->f_3)))
				{
					return uParam0->f_1;
				}
			}
			if (!unk_0xCE990E643CD9D0E5(Global_794709.f_4[uParam0->f_1 /*88*/].f_76, 13))
			{
				if (Global_1310987.f_5)
				{
					return -1;
				}
			}
			iVar0 = 0;
			while (iVar0 < 1218)
			{
				if (unk_0xCE990E643CD9D0E5(Global_794709.f_4[iVar0 /*88*/].f_76, 13))
				{
					if (unk_0xF005CCA4263DF67F(&(Global_794709.f_4[iVar0 /*88*/]), &(uParam0->f_3)))
					{
						uParam0->f_1 = iVar0;
						return iVar0;
					}
				}
				iVar0++;
			}
			return -1;
		
		case 62:
			if (unk_0xCE990E643CD9D0E5(Global_917806.f_604[uParam0->f_1 /*88*/].f_76, 13))
			{
				if (unk_0xF005CCA4263DF67F(&(Global_917806.f_604[uParam0->f_1 /*88*/]), &(uParam0->f_3)))
				{
					return uParam0->f_1;
				}
			}
			if (!unk_0xCE990E643CD9D0E5(Global_917806.f_604[uParam0->f_1 /*88*/].f_76, 13))
			{
				if (Global_1310987.f_5)
				{
					return -1;
				}
			}
			iVar0 = 0;
			while (iVar0 < 100)
			{
				if (unk_0xCE990E643CD9D0E5(Global_917806.f_604[iVar0 /*88*/].f_76, 13))
				{
					if (unk_0xF005CCA4263DF67F(&(Global_917806.f_604[iVar0 /*88*/]), &(uParam0->f_3)))
					{
						uParam0->f_1 = iVar0;
						return iVar0;
					}
				}
				iVar0++;
			}
			return -1;
		
		case 40:
			return uParam0->f_1;
		
		default:
	}
	if (uParam0->f_2 == unk_0x460153A63B9477BC())
	{
		if (unk_0xCE990E643CD9D0E5(Global_939452.f_5[uParam0->f_1 /*88*/].f_76, 13))
		{
			if (unk_0xF005CCA4263DF67F(&(Global_939452.f_5[uParam0->f_1 /*88*/]), &(uParam0->f_3)))
			{
				return uParam0->f_1;
			}
		}
		if (unk_0xCE990E643CD9D0E5(Global_939452.f_5[uParam0->f_1 /*88*/].f_76, 13))
		{
			if (Global_1310987.f_5)
			{
				return -1;
			}
		}
		iVar0 = 0;
		while (iVar0 < 62)
		{
			if (unk_0xCE990E643CD9D0E5(Global_939452.f_5[iVar0 /*88*/].f_76, 13))
			{
				if (unk_0xF005CCA4263DF67F(&(Global_939452.f_5[iVar0 /*88*/]), &(uParam0->f_3)))
				{
					uParam0->f_1 = iVar0;
					return iVar0;
				}
			}
			iVar0++;
		}
		return -1;
	}
	else if (uParam0->f_2 < 32)
	{
		return -1;
	}
	return -1;
}

int func_21(var uParam0)
{
	if (Global_2398103)
	{
		if (unk_0xF005CCA4263DF67F(&(Global_2398103.f_1), &(uParam0->f_3)))
		{
			return 1;
		}
	}
	return 0;
}

bool func_22(int iParam0)
{
	return iParam0 == 9999;
}

int func_23(var uParam0)
{
	int iVar0;
	
	iVar0 = uParam0->f_9;
	if (iVar0 == -1)
	{
		return 0;
	}
	if (!Global_2395346.f_356[iVar0 /*75*/])
	{
		return 0;
	}
	if (!unk_0xF005CCA4263DF67F(&(Global_2395346.f_356[iVar0 /*75*/].f_10), &(uParam0->f_3)))
	{
		return 0;
	}
	if (!unk_0xCE990E643CD9D0E5(Global_2395346.f_356[iVar0 /*75*/].f_5, 3))
	{
		return 0;
	}
	return 1;
}

int func_24(var uParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	iVar1 = func_20(uParam0);
	if (iVar1 == -1)
	{
		return iVar0;
	}
	switch (uParam0->f_2)
	{
		case 63:
			return Global_794709.f_4[iVar1 /*88*/].f_80;
		
		case 62:
			return iVar0;
		
		default:
	}
	return iVar0;
}

int func_25(var uParam0)
{
	struct<13> Var0;
	int iVar1;
	int iVar2;
	
	Var0.f_2 = -1;
	Var0.f_5 = -1;
	Var0.f_6 = -1;
	Var0.f_12 = -1;
	iVar1 = 0;
	iVar2 = func_20(uParam0);
	if (iVar2 == -1)
	{
		return iVar1;
	}
	switch (uParam0->f_2)
	{
		case 63:
			Var0 = { func_26(uParam0) };
			return Var0.f_1;
		
		case 62:
			return iVar1;
		
		default:
	}
	return iVar1;
}

struct<13> func_26(var uParam0)
{
	struct<13> Var0;
	int iVar1;
	
	Var0.f_2 = -1;
	Var0.f_5 = -1;
	Var0.f_6 = -1;
	Var0.f_12 = -1;
	iVar1 = func_20(uParam0);
	if (iVar1 == -1)
	{
		return Var0;
	}
	switch (uParam0->f_2)
	{
		case 63:
			return Global_794709.f_107189[iVar1 /*13*/];
		
		case 62:
			return Global_917806.f_9405[iVar1 /*13*/];
		
		default:
	}
	return Var0;
}

int func_27(var uParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	if (func_23(uParam0))
	{
		return unk_0xCE990E643CD9D0E5(Global_2395346.f_356[uParam0->f_9 /*75*/].f_10.f_63, 17);
	}
	if (func_22(uParam0->f_1))
	{
		if (func_21(uParam0))
		{
			return unk_0xCE990E643CD9D0E5(Global_2398103.f_1.f_63, 17);
		}
		return iVar0;
	}
	iVar1 = func_20(uParam0);
	if (iVar1 == -1)
	{
		return iVar0;
	}
	switch (uParam0->f_2)
	{
		case 63:
			return unk_0xCE990E643CD9D0E5(Global_794709.f_4[iVar1 /*88*/].f_76, 17);
		
		case 62:
			return unk_0xCE990E643CD9D0E5(Global_917806.f_604[iVar1 /*88*/].f_76, 17);
		
		case 40:
			return iVar0;
		
		default:
	}
	if (uParam0->f_2 == unk_0x460153A63B9477BC())
	{
		return iVar0;
	}
	else if (uParam0->f_2 < 32)
	{
		return iVar0;
	}
	return iVar0;
}

int func_28(var uParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	if (!bParam1)
	{
		if (func_23(uParam0))
		{
			if (unk_0xCE990E643CD9D0E5(Global_1311772.f_1[uParam0->f_9 /*2*/], 0))
			{
				return Global_2398237.f_513[uParam0->f_9];
			}
		}
	}
	if (func_22(uParam0->f_1))
	{
		if (func_21(uParam0))
		{
			return Global_2398103.f_1.f_54;
		}
		return iVar0;
	}
	iVar1 = func_20(uParam0);
	if (iVar1 == -1)
	{
		return 0;
	}
	switch (uParam0->f_2)
	{
		case 63:
			return Global_794709.f_4[iVar1 /*88*/].f_54;
		
		case 62:
			return Global_917806.f_604[iVar1 /*88*/].f_54;
		
		case 40:
			return 0;
		
		default:
	}
	if (uParam0->f_2 == unk_0x460153A63B9477BC())
	{
		return Global_939452.f_5[iVar1 /*88*/].f_54;
	}
	else if (uParam0->f_2 < 32)
	{
		return iVar0;
	}
	return iVar0;
}

struct<16> func_29(var uParam0)
{
	struct<16> Var0;
	int iVar1;
	
	StringCopy(&Var0, "NO DESCRIPTION", 64);
	if (func_23(uParam0))
	{
		return Global_2395346.f_356[uParam0->f_9 /*75*/].f_10.f_28;
	}
	if (func_22(uParam0->f_1))
	{
		if (func_21(uParam0))
		{
			return Global_2398103.f_1.f_28;
		}
		return Var0;
	}
	iVar1 = func_20(uParam0);
	if (iVar1 == -1)
	{
		return Var0;
	}
	switch (uParam0->f_2)
	{
		case 63:
			return Global_794709.f_4[iVar1 /*88*/].f_38;
		
		case 62:
			return Global_917806.f_604[iVar1 /*88*/].f_38;
		
		case 40:
			return Var0;
		
		default:
	}
	if (uParam0->f_2 == unk_0x460153A63B9477BC())
	{
		return Global_939452.f_5[iVar1 /*88*/].f_38;
	}
	else if (uParam0->f_2 < 32)
	{
		return Var0;
	}
	return Var0;
}

struct<16> func_30(var uParam0, bool bParam1)
{
	struct<16> Var0;
	int iVar1;
	
	StringCopy(&Var0, "UNKNOWN", 64);
	if (bParam1)
	{
		StringCopy(&Var0, "", 64);
	}
	if (!bParam1)
	{
		if (func_23(uParam0))
		{
			if (unk_0xCE990E643CD9D0E5(Global_1311772.f_1[uParam0->f_9 /*2*/], 0))
			{
				return Global_2398237[uParam0->f_9 /*16*/];
			}
			return Global_2395346.f_356[uParam0->f_9 /*75*/].f_10.f_12;
		}
	}
	if (func_22(uParam0->f_1))
	{
		if (func_21(uParam0))
		{
			return Global_2398103.f_1.f_12;
		}
		return Var0;
	}
	iVar1 = func_20(uParam0);
	if (iVar1 == -1)
	{
		return Var0;
	}
	switch (uParam0->f_2)
	{
		case 63:
			return Global_794709.f_4[iVar1 /*88*/].f_22;
		
		case 62:
			return Global_917806.f_604[iVar1 /*88*/].f_22;
		
		case 40:
			return Var0;
		
		default:
	}
	if (uParam0->f_2 == unk_0x460153A63B9477BC())
	{
		return Global_939452.f_5[iVar1 /*88*/].f_22;
	}
	else if (uParam0->f_2 < 32)
	{
		return Var0;
	}
	return Var0;
}

int func_31(var uParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = -1;
	if (func_23(uParam0))
	{
		return Global_2395346.f_356[uParam0->f_9 /*75*/].f_10.f_55;
	}
	if (func_22(uParam0->f_1))
	{
		if (func_21(uParam0))
		{
			return Global_2398103.f_1.f_55;
		}
		return iVar0;
	}
	iVar1 = func_20(uParam0);
	if (iVar1 == -1)
	{
		return iVar0;
	}
	switch (uParam0->f_2)
	{
		case 63:
			return Global_794709.f_4[iVar1 /*88*/].f_68;
		
		case 62:
			return Global_917806.f_604[iVar1 /*88*/].f_68;
		
		case 40:
			return iVar0;
		
		default:
	}
	if (uParam0->f_2 == unk_0x460153A63B9477BC())
	{
		return Global_939452.f_5[iVar1 /*88*/].f_68;
	}
	else if (uParam0->f_2 < 32)
	{
		return iVar0;
	}
	return iVar0;
}

int func_32(int iParam0, int iParam1)
{
	if (func_22(iParam1))
	{
		if (Global_2398103)
		{
			return Global_2398103.f_1.f_53;
		}
		return 262;
	}
	switch (iParam0)
	{
		case 63:
			return Global_794709.f_4[iParam1 /*88*/].f_65;
		
		case 62:
			return Global_917806.f_604[iParam1 /*88*/].f_65;
		
		default:
	}
	if (iParam0 == unk_0x460153A63B9477BC())
	{
		return Global_939452.f_5[iParam1 /*88*/].f_65;
	}
	else if (iParam0 < 32)
	{
		return 262;
	}
	return 262;
}

int func_33(char* sParam0, var uParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!unk_0x25DDB354A40FFCDB())
	{
		return 0;
	}
	if (unk_0x7BCC91F3C1CF24E8(sParam0))
	{
		return 0;
	}
	iVar0 = 0;
	iVar1 = -1;
	iVar2 = 1218;
	if (!bParam2)
	{
		iVar2 = 1200;
	}
	iVar0 = 0;
	while (iVar0 < iVar2)
	{
		if (unk_0xCE990E643CD9D0E5(Global_794709.f_4[iVar0 /*88*/].f_76, 13))
		{
			if (unk_0xF005CCA4263DF67F(&(Global_794709.f_4[iVar0 /*88*/]), sParam0))
			{
				iVar1 = Global_794709.f_4[iVar0 /*88*/].f_65;
				*uParam1 = func_34(iVar1);
				uParam1->f_1 = iVar0;
				uParam1->f_2 = 63;
				uParam1->f_3 = { Global_794709.f_4[iVar0 /*88*/] };
				uParam1->f_9 = -1;
				return 1;
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 100)
	{
		if (unk_0xCE990E643CD9D0E5(Global_917806.f_604[iVar0 /*88*/].f_76, 13))
		{
			if (unk_0xF005CCA4263DF67F(&(Global_917806.f_604[iVar0 /*88*/]), sParam0))
			{
				iVar1 = Global_917806.f_604[iVar0 /*88*/].f_65;
				*uParam1 = func_34(iVar1);
				uParam1->f_1 = iVar0;
				uParam1->f_2 = 62;
				uParam1->f_3 = { *sParam0 };
				uParam1->f_9 = -1;
				return 1;
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 62)
	{
		if (unk_0xCE990E643CD9D0E5(Global_939452.f_5[iVar0 /*88*/].f_76, 13))
		{
			if (unk_0xF005CCA4263DF67F(&(Global_939452.f_5[iVar0 /*88*/]), sParam0))
			{
				iVar1 = Global_939452.f_5[iVar0 /*88*/].f_65;
				*uParam1 = func_34(iVar1);
				uParam1->f_1 = iVar0;
				uParam1->f_2 = unk_0x460153A63B9477BC();
				uParam1->f_3 = { *sParam0 };
				uParam1->f_9 = -1;
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_34(int iParam0)
{
	switch (iParam0)
	{
		case 15:
			return 152;
		
		case 14:
			return 153;
		
		case 122:
			return 157;
		
		case 11:
			return 154;
		
		case 13:
			return 155;
		
		case 12:
			return 156;
		
		case 8:
			return 159;
		
		case 1:
			return 160;
		
		case 5:
			return 158;
		
		case 6:
			return 161;
		
		case 3:
			return 164;
		
		case 0:
			return 162;
		
		case 2:
			return 163;
		
		case 148:
			return 49;
		
		case 151:
			return 52;
		
		case 152:
			return 53;
		
		case 157:
			return 54;
		
		case 153:
			return 55;
		
		case 154:
			return 56;
		
		case 155:
			return 57;
		
		case 159:
			return 58;
		
		case 162:
			return 51;
		
		case 142:
			return 60;
		
		case 160:
			return 62;
		
		case 164:
			return 63;
		
		case 163:
			return 64;
		
		case 166:
			return 65;
		
		case 167:
			return 66;
		
		case 168:
			return 67;
		
		case 169:
			return 68;
		
		case 170:
			return 69;
		
		case 171:
			return 70;
		
		case 172:
			return 71;
		
		case 173:
			return 72;
		
		case 178:
			return 73;
		
		case 188:
			return 74;
		
		case 214:
			return 75;
		
		case 215:
			return 76;
		
		case 216:
			return 77;
		
		case 217:
			return 78;
		
		case 218:
			return 79;
		
		case 219:
			return 80;
		
		case 220:
			return 81;
		
		case 221:
			return 82;
		
		case 179:
			return 84;
		
		case 189:
			return 83;
		
		case 180:
			return 85;
		
		case 182:
			return 87;
		
		case 183:
			return 88;
		
		case 185:
			return 89;
		
		case 186:
			return 90;
		
		case 190:
			return 91;
		
		case 191:
			return 92;
		
		case 192:
			return 93;
		
		case 193:
			return 94;
		
		case 205:
			return 102;
		
		case 194:
			return 95;
		
		case 197:
			return 96;
		
		case 198:
			return 97;
		
		case 195:
			return 98;
		
		case 199:
			return 99;
		
		case 200:
			return 100;
		
		case 201:
			return 101;
		
		case 207:
			return 103;
		
		case 208:
			return 104;
		
		case 209:
			return 105;
		
		case 210:
			return 106;
		
		case 225:
			return 107;
		
		case 226:
			return 108;
		
		case 227:
			return 109;
		
		case 229:
			return 110;
		
		case 230:
			return 111;
		
		case 233:
			return 113;
		
		case 237:
			return 115;
		
		case 238:
			return 116;
		
		case 249:
			return 123;
		
		case 239:
			return 117;
		
		case 240:
			return 118;
		
		case 241:
			return 119;
		
		case 242:
			return 120;
		
		case 244:
			return 121;
		
		case 248:
			return 122;
		
		case 250:
			return 124;
		
		case 243:
			return 125;
		
		case 158:
			return 126;
		
		case 181:
			return 86;
		
		case 24:
			return 128;
		
		case 26:
			return 129;
		
		case 256:
			return 130;
		
		case 258:
			return 131;
		
		case 259:
			return 133;
		
		default:
	}
	return 0;
}

int func_35(char* sParam0, int iParam1, int iParam2)
{
	int iVar0;
	char[] cVar1[8];
	char cVar2[16];
	char[] cVar3[8];
	
	if (unk_0x7BCC91F3C1CF24E8(sParam0))
	{
		return 0;
	}
	iVar0 = unk_0xA221A4BC051BFCCE(sParam0);
	if (!iVar0 > 12)
	{
		return 0;
	}
	StringCopy(&cVar1, unk_0x4DA5FF2411EDA27A(sParam0, 0, 5), 8);
	if (!unk_0xF005CCA4263DF67F(&cVar1, "FAKE_"))
	{
		return 0;
	}
	StringCopy(&cVar2, unk_0x4DA5FF2411EDA27A(sParam0, 5, 12), 16);
	if (unk_0xF005CCA4263DF67F(&cVar2, "GOLF___"))
	{
		*iParam1 = 11;
	}
	else if (unk_0xF005CCA4263DF67F(&cVar2, "TENNIS_"))
	{
		*iParam1 = 12;
	}
	else if (unk_0xF005CCA4263DF67F(&cVar2, "PILOTS_"))
	{
		*iParam1 = 122;
	}
	else if (unk_0xF005CCA4263DF67F(&cVar2, "SHOOTR_"))
	{
		*iParam1 = 13;
	}
	else if (unk_0xF005CCA4263DF67F(&cVar2, "DARTS__"))
	{
		*iParam1 = 14;
	}
	else if (unk_0xF005CCA4263DF67F(&cVar2, "ARMWRS_"))
	{
		*iParam1 = 15;
	}
	else
	{
		return 0;
	}
	StringCopy(&cVar3, unk_0x4DA5FF2411EDA27A(sParam0, 12, iVar0), 8);
	if (!unk_0xDCB0D0892AA08F3D(&cVar3, iParam2))
	{
		return 0;
	}
	return 1;
}

void func_36(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = -1;
	uParam0->f_2 = -1;
	StringCopy(&(uParam0->f_3), "", 24);
	uParam0->f_9 = -1;
}

void func_37(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (iParam0 >= Global_1387876)
	{
		return;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= 11)
	{
		if (unk_0x578C4EF320340AF7() > Global_2395292[iVar0 /*4*/].f_2 || Global_2395292[iVar0 /*4*/].f_2 == 0)
		{
			if (unk_0xE0B39E9C693A0AD3() > 0 && Global_2392991[iParam0 /*99*/].f_91 < unk_0xE0B39E9C693A0AD3())
			{
				Global_2395292[iVar0 /*4*/].f_3 = unk_0xBF40EC9DD8408D07(Global_2392991[iParam0 /*99*/].f_91);
				Global_2395292[iVar0 /*4*/].f_2 = unk_0x578C4EF320340AF7() + 30000;
				iVar0 = 12;
			}
		}
		iVar0++;
	}
	if (Global_2392991[iParam0 /*99*/].f_92 != -1)
	{
		unk_0xB6B2734989D2EBCB(Global_2392991[iParam0 /*99*/].f_92);
	}
	if (!Global_2392991[iParam0 /*99*/].f_56)
	{
		if (Global_2392991[iParam0 /*99*/].f_52 != 0)
		{
			unk_0x087D73ADFE072B7B(Global_2392991[iParam0 /*99*/].f_52);
		}
	}
	func_45(Global_2392991[iParam0 /*99*/].f_91);
	iVar1 = iParam0;
	iVar2 = iVar1 + 1;
	while (iVar2 < Global_1387876)
	{
		Global_2392991[iVar1 /*99*/] = { Global_2392991[iVar2 /*99*/] };
		iVar1++;
		iVar2++;
	}
	func_39(iVar1);
	Global_1387876 = (Global_1387876 - 1);
	if (Global_1387849)
	{
		if (Global_1387847 > 0)
		{
			func_38();
		}
	}
}

void func_38()
{
	Global_1387849 = 0;
}

void func_39(int iParam0)
{
	Global_2392991[iParam0 /*99*/] = 0;
	Global_2392991[iParam0 /*99*/].f_1 = 0;
	Global_2392991[iParam0 /*99*/].f_5 = 0;
	StringCopy(&(Global_2392991[iParam0 /*99*/].f_15), "", 64);
	StringCopy(&(Global_2392991[iParam0 /*99*/].f_31), "", 64);
	Global_2392991[iParam0 /*99*/].f_47 = -1;
	Global_2392991[iParam0 /*99*/].f_48 = unk_0x578C4EF320340AF7();
	Global_2392991[iParam0 /*99*/].f_49 = -1;
	Global_2392991[iParam0 /*99*/].f_50 = -1;
	Global_2392991[iParam0 /*99*/].f_51 = -1;
	Global_2392991[iParam0 /*99*/].f_52 = 0;
	Global_2392991[iParam0 /*99*/].f_53 = 0;
	Global_2392991[iParam0 /*99*/].f_53.f_1 = 0;
	Global_2392991[iParam0 /*99*/].f_53.f_2 = 0;
	Global_2392991[iParam0 /*99*/].f_56 = 0;
	StringCopy(&(Global_2392991[iParam0 /*99*/].f_57), "", 64);
	StringCopy(&(Global_2392991[iParam0 /*99*/].f_73), "", 64);
	Global_2392991[iParam0 /*99*/].f_89 = 0;
	Global_2392991[iParam0 /*99*/].f_90 = 0;
	Global_2392991[iParam0 /*99*/].f_91 = -1;
	Global_2392991[iParam0 /*99*/].f_92 = -1;
	Global_2392991[iParam0 /*99*/].f_93 = 0;
	Global_2392991[iParam0 /*99*/].f_94 = -1;
	Global_2392991[iParam0 /*99*/].f_95 = 0;
	Global_2392991[iParam0 /*99*/].f_96 = 0;
	Global_2392991[iParam0 /*99*/].f_97 = 0;
	Global_2392991[iParam0 /*99*/].f_98 = 0;
}

int func_40(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_1387876)
	{
		if (unk_0xF005CCA4263DF67F(&uParam0, &(Global_2392991[iVar0 /*99*/].f_15)))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

bool func_41(int iParam0)
{
	return unk_0xCE990E643CD9D0E5(Global_1590682[iParam0 /*883*/].f_142, 22);
}

bool func_42(bool bParam0)
{
	if (!bParam0 && unk_0x7B70881748D166CD(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return unk_0xCE990E643CD9D0E5(Global_77081, 0);
}

int func_43()
{
	if (Global_111858.f_9081.f_330[0 /*6*/])
	{
		return 1;
	}
	return 0;
}

bool func_44()
{
	return unk_0xCE990E643CD9D0E5(Global_1590682[unk_0x460153A63B9477BC() /*883*/].f_142, 2);
}

void func_45(var uParam0)
{
	int iVar0;
	
	iVar0 = unk_0xB3A8A955F956F9CB(uParam0);
	if (iVar0 < 0 || iVar0 >= unk_0xE0B39E9C693A0AD3())
	{
		return;
	}
	if (unk_0xCE1B50B1EFC8DB8F(iVar0))
	{
		return;
	}
}

bool func_46()
{
	return Global_1312855 == 10;
}

int func_47()
{
	if (!Global_76833)
	{
		return 1;
	}
	else if (func_48())
	{
		return 1;
	}
	return 0;
}

int func_48()
{
	if (Global_1312466)
	{
		return 1;
	}
	if (func_53())
	{
		return 1;
	}
	if (func_52())
	{
		return 1;
	}
	return func_49(120, -1);
}

int func_49(int iParam0, int iParam1)
{
	var uVar0;
	var uVar1;
	
	uVar0 = Global_2587834[iParam0 /*3*/][func_50(iParam1)];
	if (unk_0xB9112C701DE2A810(uVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

int func_50(var uParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = uParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_51();
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

int func_51()
{
	return Global_1312763;
}

bool func_52()
{
	return Global_1312884;
}

bool func_53()
{
	return Global_1312886;
}

void func_54(var uParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = iParam1;
	if (iVar0 == -1)
	{
		iVar0 = func_51();
	}
	Global_1312876[iVar0] = uParam0;
}

void func_55(int iParam0)
{
	func_111();
	if (func_110(1))
	{
		if (!func_99())
		{
			if (!func_88(1))
			{
				if (unk_0xFC559366953F62B3())
				{
					func_87();
				}
				func_58(1, 0);
				unk_0xA033DD33D5DB43ED(iParam0);
				func_57();
				func_56();
			}
		}
	}
}

void func_56()
{
	Global_1663920.f_7 = 1;
}

void func_57()
{
	Global_1663920.f_6 = 1;
}

void func_58(int iParam0, bool bParam1)
{
	if (func_110(iParam0))
	{
		Global_1663920.f_16[iParam0 /*44*/].f_5 = 1;
		func_60(iParam0, 0);
		func_59();
		if (bParam1)
		{
			Global_1663920 = 1;
		}
	}
}

void func_59()
{
	Global_1663920.f_2 = 1;
}

void func_60(int iParam0, bool bParam1)
{
	struct<6> Var0;
	
	if (!unk_0xFC559366953F62B3())
	{
		if (bParam1)
		{
			func_86();
			func_72(unk_0x460153A63B9477BC(), 0, 81920, 0);
			Global_1590682[unk_0x460153A63B9477BC() /*883*/].f_98 = 8;
			func_71();
			func_70();
		}
		func_69(iParam0);
		func_68(iParam0);
		func_66();
		func_65();
		func_59();
	}
	Var0 = { func_64(iParam0) };
	func_63(iParam0);
	func_61(&Var0);
}

void func_61(char* sParam0)
{
	StringCopy(&(Global_2451787.f_857), sParam0, 24);
	if (func_62())
	{
		StringCopy(&(Global_959568.f_42), sParam0, 24);
	}
}

bool func_62()
{
	return unk_0xCE990E643CD9D0E5(Global_2452679.f_1.f_2809, 5);
}

void func_63(int iParam0)
{
	Global_1663920.f_16[iParam0 /*44*/].f_3 = 1;
}

struct<6> func_64(int iParam0)
{
	return Global_1663920.f_16[iParam0 /*44*/].f_6;
}

void func_65()
{
	Global_2451787.f_8 = 100;
}

void func_66()
{
	unk_0xBE20AB8238688965(&Global_2451787, 5);
	func_67();
}

void func_67()
{
	unk_0xBE20AB8238688965(&Global_2451787, 8);
}

void func_68(var uParam0)
{
	Global_1663920.f_8 = uParam0;
}

void func_69(var uParam0)
{
	Global_1663920.f_9 = uParam0;
}

void func_70()
{
	Global_2460478.f_1 = 0;
}

void func_71()
{
	char* sVar0;
	
	StringCopy(&(Global_2451787.f_857), sVar0, 24);
}

void func_72(int iParam0, bool bParam1, int iParam2, int iParam3)
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	bool bVar5;
	bool bVar6;
	bool bVar7;
	bool bVar8;
	bool bVar9;
	bool bVar10;
	bool bVar11;
	bool bVar12;
	bool bVar13;
	bool bVar14;
	bool bVar15;
	bool bVar16;
	bool bVar17;
	bool bVar18;
	bool bVar19;
	bool bVar20;
	bool bVar21;
	bool bVar22;
	bool bVar23;
	bool bVar24;
	bool bVar25;
	bool bVar26;
	int iVar27;
	int iVar28;
	
	if (bParam1)
	{
		if (unk_0x4F315B95B1461ED4())
		{
			unk_0xFF8E7A064055ECA6(false);
		}
	}
	if (func_85())
	{
		if (bParam1)
		{
			return;
		}
		else
		{
			iParam3 = 1;
		}
	}
	if (!unk_0x25DDB354A40FFCDB())
	{
		iVar0 = iParam2;
		unk_0xDDEDC06C88DA4E04(iParam0, bParam1, iVar0);
	}
	else
	{
		bVar1 = true;
		bVar2 = iParam2 & 2 != false;
		bVar3 = iParam2 & 4 != false;
		bVar4 = iParam2 & 8 != false;
		bVar5 = iParam2 & 16 != false;
		bVar6 = iParam2 & 32 != false;
		bVar7 = iParam2 & 64 != false;
		bVar8 = iParam2 & 128 != false;
		bVar9 = iParam2 & 256 != false;
		bVar10 = iParam2 & 512 != false;
		bVar11 = iParam2 & 1024 != false;
		bVar12 = iParam2 & 2048 != false;
		bVar13 = iParam2 & 4096 != false;
		bVar14 = iParam2 & 8192 != false;
		bVar15 = iParam2 & 16384 != false;
		bVar16 = iParam2 & 32768 != false;
		bVar17 = iParam2 & 65536 != false;
		bVar18 = iParam2 & 131072 != false;
		bVar19 = iParam2 & 262144 != false;
		bVar20 = iParam2 & 524288 != false;
		bVar21 = iParam2 & 1048576 != false;
		bVar22 = iParam2 & 2097152 != false;
		bVar23 = iParam2 & 4194304 != false;
		bVar24 = iParam2 & 8388608 != false;
		bVar25 = iParam2 & 16777216 != false;
		if (iParam2 & 33554432 != 0 || unk_0xFC559366953F62B3())
		{
			bVar1 = false;
		}
		if (!func_83())
		{
			bVar26 = false;
			if (bParam1 == 1)
			{
				bVar26 = true;
			}
			if (bVar16 == 0 && !bVar21)
			{
				bVar26 = true;
			}
			if (bVar10 == 1)
			{
				bVar26 = true;
			}
			if (bVar26)
			{
				return;
			}
		}
		if (bVar18)
		{
		}
		if (unk_0x166E920FB00B2DBB(iParam0) && (unk_0x5A228A6A51E757C8(iParam0) || iParam3 == 1))
		{
			if (iParam3 && unk_0xA59F96B50B97E63C(unk_0x1FA7B77001D60F9D(iParam0), 0))
			{
				return;
			}
			iVar27 = unk_0x1FA7B77001D60F9D(iParam0);
			if (!bVar20)
			{
				if ((bVar19 && bParam1 == 0) && unk_0x25DDB354A40FFCDB())
				{
					unk_0x9675999D57D9F953(1);
				}
				else if (bVar14 || (!func_81(unk_0x460153A63B9477BC(), 0) && !func_80()))
				{
					unk_0x80250B8368A4E611(iVar27, !bVar14, 0);
				}
				if (!bVar14)
				{
					if (unk_0x25DDB354A40FFCDB() && !bVar19)
					{
						unk_0x9675999D57D9F953(0);
					}
					Global_2425869[iParam0 /*443*/].f_248 = 0;
				}
			}
			if (bParam1)
			{
				if (bVar1)
				{
					func_77(0, 0, 0);
					if (bVar25)
					{
						unk_0x701364DD9F501826();
					}
				}
				if (!func_76(iVar27) && !unk_0xEB1D872D96DDA8E2(iVar27))
				{
					if (!bVar22)
					{
						unk_0x58ADF88C51AAFDC5(iVar27, true, 0);
					}
				}
				if (!unk_0xB77B1396EAA80D8F(iVar27))
				{
					if (!bVar21)
					{
						unk_0x6A8F948698B360B4(iVar27, false);
					}
					unk_0x7C47E49129337557(iVar27, 1);
				}
				else if (!bVar21)
				{
					unk_0x6A8F948698B360B4(iVar27, false);
				}
				unk_0x0DC39BE87E4C5599(iVar27, true);
				unk_0xBF70D1B666A353F5(iParam0, 0);
				unk_0x330ACDACFF26728A(iParam0, 0);
				if (unk_0x36E2FC4B39D3018D(iVar27) && unk_0x51E339346E2220A4(iVar27))
				{
					unk_0x46468389F464E317(iVar27);
				}
				unk_0x4478D8ED4673EF14(iVar27, 1);
				if (unk_0x4DC4117F94CD5B84(unk_0x460153A63B9477BC()) == 0)
				{
					func_75();
					func_74();
				}
				if (unk_0x5C6122477A723551())
				{
					if (!bVar23)
					{
					}
				}
				if (unk_0xE9159DB182CF0841())
				{
				}
				Global_2425869[iParam0 /*443*/].f_249 = 0;
				if (!bVar24)
				{
					bVar3 = true;
				}
				if (Global_2405074.f_2674)
				{
					Global_2405074.f_2674 = 0;
				}
			}
			else
			{
				if (!func_76(iVar27) && !unk_0xEB1D872D96DDA8E2(iVar27))
				{
					if (!bVar22)
					{
						unk_0x58ADF88C51AAFDC5(iVar27, !bVar15, 0);
					}
					if (!unk_0xB77B1396EAA80D8F(iVar27))
					{
						if (!bVar21)
						{
							unk_0x6A8F948698B360B4(iVar27, bVar16);
						}
						if (!bVar16)
						{
							unk_0x7C47E49129337557(iVar27, 1);
						}
					}
					if (func_73(Global_4456448.f_129348))
					{
						unk_0x6A8F948698B360B4(iVar27, true);
					}
				}
				if (Global_1312872)
				{
					bVar10 = false;
				}
				if (bVar10)
				{
					unk_0xBF70D1B666A353F5(iParam0, 0);
				}
				else
				{
					unk_0xBF70D1B666A353F5(iParam0, 1);
				}
				unk_0x0DC39BE87E4C5599(iVar27, bVar17);
				if (bVar3)
				{
					if (!unk_0x5A898C4DF17FB664(iVar27) && !unk_0x47DBF174A0CB9D55(iVar27, 0))
					{
						unk_0x2BB0EF9DE445EA13(iVar27);
					}
				}
			}
			iVar28 = 0;
			if (bVar2)
			{
				iVar28 |= 2;
			}
			if (bVar3)
			{
				iVar28 |= 4;
			}
			if (bVar4)
			{
				iVar28 |= 8;
			}
			if (bVar5)
			{
				iVar28 |= 16;
			}
			if (bVar6)
			{
				iVar28 |= 32;
			}
			if (bVar7)
			{
				iVar28 |= 64;
			}
			if (bVar8)
			{
				iVar28 |= 128;
			}
			if (bVar9)
			{
				iVar28 |= 256;
			}
			if (bVar10)
			{
				iVar28 |= 512;
			}
			if (bVar11)
			{
				iVar28 |= 1024;
			}
			if (bVar12)
			{
				iVar28 |= 2048;
			}
			if (bVar13)
			{
				iVar28 |= 4096;
			}
			unk_0xDDEDC06C88DA4E04(iParam0, bParam1, iVar28);
		}
	}
}

bool func_73(int iParam0)
{
	return iParam0 == 17;
}

void func_74()
{
	struct<3> Var0;
	
	Global_2440049.f_1344 = 0;
	Global_2440049.f_1345 = 0;
	Global_2440049.f_1346 = { 9999.9f, 9999.9f, 9999.9f };
	Global_2440049.f_1351 = -1;
	Global_2440049.f_1352 = 0;
	Global_2405074.f_2685 = { Var0 };
}

void func_75()
{
	Global_2405074.f_696 = 0;
	Global_2405074.f_2728 = 0;
	Global_2405074.f_512 = 0;
	Global_2405074.f_601 = 0;
	Global_2425869[unk_0x460153A63B9477BC() /*443*/].f_211 = 0;
	Global_2405074.f_2683 = 0;
}

int func_76(int iParam0)
{
	int iVar0;
	
	if (unk_0x47DBF174A0CB9D55(iParam0, 1))
	{
		return 1;
	}
	else
	{
		iVar0 = unk_0x16BC17A8EDC701A2(iParam0, -1794415470);
		if (iVar0 == 0)
		{
			return 1;
		}
	}
	return 0;
}

void func_77(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	
	if (unk_0xA59F96B50B97E63C(iParam1, 0))
	{
	}
	if (iParam0 == 1)
	{
		if (unk_0xAE06B9E39EBDE049(iParam1))
		{
			if (unk_0xD0390A93AF3907B8(iParam1))
			{
				if (!unk_0x56B60AE958412839(unk_0x460153A63B9477BC(), unk_0xE4400E48E081F17A(iParam1)))
				{
					iVar0 = 1;
				}
			}
		}
	}
	if (iVar0 == 0)
	{
		if (iParam2 == 1)
		{
			if (iParam0 == 1)
			{
				func_79();
			}
			else if (!unk_0xCE990E643CD9D0E5(Global_2359302.f_67, 1))
			{
				if (unk_0xCE990E643CD9D0E5(Global_2359302.f_67, 2))
				{
					iVar1 = 0;
					while (iVar1 < 8)
					{
						unk_0x80610B7EA03DE232(iVar1, Global_2359302.f_58[iVar1]);
						iVar1++;
					}
				}
				unk_0xBE20AB8238688965(&(Global_2359302.f_67), 1);
			}
		}
		if (func_81(unk_0x460153A63B9477BC(), 0))
		{
			unk_0x80B3C69DE260B92D(iParam0, iParam1, 1);
		}
		else
		{
			unk_0xE86692F29AFB9043(iParam0, iParam1);
		}
		unk_0x0F9CBC63296852FD(iParam0, iParam1);
		func_78(joaat("MPPLY_IS_CHAR_SPECTATING"), iParam0);
	}
}

void func_78(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != 0)
	{
		unk_0xBD9D9E72ABB288E4(iVar0, iParam1, 1);
	}
}

void func_79()
{
	int iVar0;
	
	if (!unk_0x509C03DADAEE0A94())
	{
		if (!unk_0xCE990E643CD9D0E5(Global_2359302.f_67, 2))
		{
			iVar0 = 0;
			while (iVar0 < 8)
			{
				Global_2359302.f_58[iVar0] = unk_0xF7B3A1430308F92B(iVar0);
				iVar0++;
			}
			unk_0xBE20AB8238688965(&(Global_2359302.f_67), 2);
			unk_0xBE20AB8238688965(&(Global_2359302.f_67), 0);
		}
	}
}

bool func_80()
{
	return unk_0xCE990E643CD9D0E5(Global_2359302, 3);
}

bool func_81(int iParam0, int iParam1)
{
	bool bVar0;
	
	if (iParam0 == unk_0x460153A63B9477BC())
	{
		bVar0 = func_82(-1, 0) == 8;
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

int func_82(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_51();
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

int func_83()
{
	if (func_84() == 0)
	{
		return 1;
	}
	return 0;
}

int func_84()
{
	return Global_1312485.f_18;
}

int func_85()
{
	if (Global_1590682[unk_0x460153A63B9477BC() /*883*/].f_35 && !Global_2452679.f_2846.f_215 == -1)
	{
		return 1;
	}
	return 0;
}

void func_86()
{
	unk_0xBE20AB8238688965(&Global_2451787, 7);
}

void func_87()
{
	unk_0xBE20AB8238688965(&(Global_2451787.f_2), 15);
}

int func_88(int iParam0)
{
	if (iParam0 || func_98())
	{
		if (!func_90(1))
		{
			return 1;
		}
		if (!func_89())
		{
			return 1;
		}
		if (unk_0x8EF2E8B1E5E21C71())
		{
			return 1;
		}
	}
	return 0;
}

bool func_89()
{
	return Global_1663920.f_4;
}

int func_90(bool bParam0)
{
	if (!func_95())
	{
		return 0;
	}
	if ((func_93(func_94(-1), 0) >= 1 || func_49(123, -1)) && func_49(133, -1))
	{
		func_92();
		return 1;
	}
	else if (bParam0)
	{
		func_91();
	}
	return 0;
}

void func_91()
{
	Global_1663920.f_5 = 1;
}

void func_92()
{
	Global_1663920.f_4 = 1;
}

int func_93(int iParam0, int iParam1)
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

int func_94(int iParam0)
{
	return Global_1388197[func_50(iParam0)];
}

int func_95()
{
	if (func_97() && func_96(0))
	{
		return 1;
	}
	return 0;
}

var func_96(int iParam0)
{
	return Global_1312392[iParam0];
}

var func_97()
{
	return func_96(func_51() + 1);
}

var func_98()
{
	return Global_1663920.f_2;
}

int func_99()
{
	if (((((func_109() || !func_107(-1)) || !func_105()) || !func_102()) || !func_101()) || func_100())
	{
		return 1;
	}
	return 0;
}

var func_100()
{
	return Global_2462263;
}

int func_101()
{
	if (unk_0xFCBF95335DD16537(903) == 1)
	{
		return 1;
	}
	return 0;
}

int func_102()
{
	int iVar0;
	
	if (func_103(&iVar0) == 0)
	{
		if (iVar0 == 1)
		{
			return 0;
		}
	}
	return 1;
}

int func_103(var uParam0)
{
	if (func_104())
	{
		*uParam0 = 10;
		return 1;
	}
	return unk_0x48C1917EF82FB39C(uParam0);
}

bool func_104()
{
	return Global_31244;
}

int func_105()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 1)
	{
		if (func_106(iVar0) == 1)
		{
			iVar0 = 2;
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_106(int iParam0)
{
	if (func_49(76, iParam0) == 1)
	{
		return 1;
	}
	return 0;
}

int func_107(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_108(iParam0);
	iVar1 = unk_0xFCBF95335DD16537(iVar0);
	if (unk_0xCE990E643CD9D0E5(iVar1, 1))
	{
		return 1;
	}
	return 0;
}

int func_108(int iParam0)
{
	int iVar0;
	
	if (iParam0 == -1)
	{
		iParam0 = func_51();
	}
	switch (iParam0)
	{
		case 0:
			iVar0 = 914;
			break;
		
		case 1:
			iVar0 = 915;
			break;
		
		case 2:
			iVar0 = 916;
			break;
		
		case 3:
			iVar0 = 917;
			break;
		
		case 4:
			iVar0 = 918;
			break;
	}
	return iVar0;
}

var func_109()
{
	return Global_2451787.f_741;
}

bool func_110(int iParam0)
{
	return Global_1663920.f_16[iParam0 /*44*/].f_4;
}

void func_111()
{
	int iVar0;
	int iVar1;
	
	func_117();
	if (unk_0x7F0EF32D2767DD84() && !func_114())
	{
		iVar0 = 0;
		while (iVar0 < 5)
		{
			iVar1 = unk_0xDBA24742F77FE6F9(func_113(iVar0));
			if (iVar1 > 0)
			{
				Global_1663920.f_16[iVar0 /*44*/] = iVar1;
				func_112(iVar0, iVar1);
			}
			iVar0++;
		}
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < 5)
		{
			Global_1663920.f_16[iVar0 /*44*/].f_4 = 0;
			iVar0++;
		}
	}
}

void func_112(int iParam0, int iParam1)
{
	bool bVar0;
	struct<16> Var1;
	var uVar2;
	
	bVar0 = true;
	if (unk_0x9899EC462CCD0CC3(iParam1, "contentId", &Var1))
	{
		MemCopy(&(Global_1663920.f_16[iParam0 /*44*/].f_6), {Var1}, 6);
	}
	else
	{
		bVar0 = false;
	}
	if (unk_0x9899EC462CCD0CC3(iParam1, "playlist", &Var1))
	{
		Global_1663920.f_16[iParam0 /*44*/].f_12 = { Var1 };
	}
	else
	{
		bVar0 = false;
	}
	if (unk_0x2CD4E9906BF0834F(iParam1, &Var1))
	{
		Global_1663920.f_16[iParam0 /*44*/].f_28 = { Var1 };
	}
	else
	{
		bVar0 = false;
	}
	if (iParam0 == 1)
	{
		if (unk_0x78CD54299730698C(iParam1, "coronaCountdown", &uVar2))
		{
			Global_1663920.f_16[iParam0 /*44*/].f_1 = uVar2;
		}
		else
		{
			Global_1663920.f_16[iParam0 /*44*/].f_1 = 120000;
		}
		Global_1663920.f_16[iParam0 /*44*/].f_2 = 0;
		if (unk_0x78CD54299730698C(iParam1, "eventSubType", &uVar2))
		{
			Global_1663920.f_16[iParam0 /*44*/].f_2 = uVar2;
		}
	}
	if (bVar0)
	{
		if (iParam0 != 1)
		{
			Global_1663920.f_1 = 1;
		}
		Global_1663920.f_16[iParam0 /*44*/].f_4 = 1;
	}
	else
	{
		Global_1663920.f_16[iParam0 /*44*/].f_4 = 0;
	}
}

char* func_113(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "TournamentQualifying";
		
		case 1:
			return "Tournament";
		
		case 2:
			return "LiveStreaming";
		
		case 3:
			return "Sweepstakes";
		
		case 4:
			return "FeaturedPlaylist";
		
		default:
	}
	return "";
}

int func_114()
{
	if (!func_115())
	{
		return 1;
	}
	return 0;
}

int func_115()
{
	if (func_116())
	{
		return 0;
	}
	if (unk_0x70E5C9630A26FB40() == 0)
	{
		return 0;
	}
	return 1;
}

bool func_116()
{
	return Global_2462752;
}

void func_117()
{
	struct<281> Var0;
	
	Var0.f_8 = -1;
	Var0.f_9 = -1;
	Var0.f_16 = 6;
	Global_1663920 = { Var0 };
}

void func_118(int iParam0)
{
	var uVar0;
	
	if (Global_76833)
	{
		unk_0xC4CC25B68A91D144(-1, "Hang_Up", "Phone_SoundSet_Michael", 1);
	}
	else
	{
		unk_0xC4CC25B68A91D144(-1, "Hang_Up", &Global_19670, 1);
	}
	if (unk_0x477FAFFE21935947(1, iParam0, &uVar0, 21))
	{
		func_120();
	}
	Global_2547059.f_1 = 0;
	Global_2547059.f_33 = -1;
	Global_2547059.f_34 = -1;
	StringCopy(&(Global_2547059.f_4), "", 64);
	func_119(&(Global_2547059.f_20));
}

void func_119(var uParam0)
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

void func_120()
{
	Global_2547059.f_2 = 1;
	Global_2547059.f_38 = 1;
	if (unk_0x0EB6C63A09FD9DF1())
	{
		if (unk_0xC9DEF2E70DB36E08())
		{
			while (unk_0x0D00AF60E45BB976())
			{
				wait(0);
			}
			unk_0xEF8085B63197B63A();
			Global_2547059 = 0;
			Global_2547059.f_2 = 0;
		}
		else if (func_128(Global_2547059.f_20))
		{
			if (unk_0x78A7795C9C51946D(&(Global_2547059.f_20)))
			{
				if (!unk_0x9D0DD6E9B396012A(&(Global_2547059.f_20)))
				{
					func_127();
				}
			}
		}
		else
		{
			func_127();
		}
	}
	else
	{
		func_127();
	}
	if (Global_2547059.f_37)
	{
		func_121(0);
	}
	Global_2547059.f_37 = 0;
	Global_2547059.f_3 = 0;
}

void func_121(int iParam0)
{
	if (func_126())
	{
		return;
	}
	if (Global_19864)
	{
		if (func_125())
		{
			func_123(1, 1);
		}
		else
		{
			func_123(0, 0);
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
	if (!func_122())
	{
		Global_19681.f_1 = 3;
	}
}

int func_122()
{
	if (Global_19681.f_1 == 1 || Global_19681.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

void func_123(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		if (func_124(0))
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

int func_124(int iParam0)
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

bool func_125()
{
	return unk_0xCE990E643CD9D0E5(Global_1689730, 5);
}

bool func_126()
{
	return unk_0xCE990E643CD9D0E5(Global_1689730, 19);
}

void func_127()
{
	Global_2547059.f_1 = 0;
	Global_2547059 = 0;
	Global_2547059.f_2 = 0;
	Global_2547059.f_33 = -1;
	Global_2547059.f_34 = -1;
	StringCopy(&(Global_2547059.f_4), "", 64);
	StringCopy(&(Global_2547059.f_39[0 /*16*/]), "", 64);
	Global_2547059.f_38 = 0;
	Global_2547059.f_56 = 0;
	Global_2547059.f_57 = 0;
	Global_2547059.f_58 = -2;
	Global_2547059.f_3 = 0;
	func_119(&(Global_2547059.f_20));
}

bool func_128(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12)
{
	return unk_0xF6B8932480699645(&uParam0, 13);
}

void func_129(int iParam0)
{
	struct<2> Var0;
	
	if (unk_0x477FAFFE21935947(1, iParam0, &Var0, 15))
	{
		Global_2547059.f_33 = Var0.f_1;
		Global_2547059.f_34 = Var0;
	}
}

void func_130(int iParam0)
{
	struct<9> Var0;
	
	if (unk_0x477FAFFE21935947(1, iParam0, &Var0, 21))
	{
		if (Global_2547059.f_3 == 0)
		{
			if (!func_131(&(Var0.f_8)))
			{
				unk_0x712CB40708D6F8AD(0, 2);
			}
			else
			{
				Global_2547059.f_3 = 1;
				MemCopy(&(Global_2547059.f_4), {Var0}, 16);
				Global_2547059.f_20 = { Var0.f_8 };
				StringCopy(&(Global_2547059.f_39[0 /*16*/]), "", 64);
				Global_2547059.f_58 = -2;
				Global_2547059.f_56 = 0;
				Global_2547059.f_57 = 0;
			}
		}
		else if (!func_131(&(Var0.f_8)))
		{
			unk_0x712CB40708D6F8AD(0, 2);
		}
		else
		{
			Global_2547059.f_3 = 1;
			MemCopy(&(Global_2547059.f_4), {Var0}, 16);
			Global_2547059.f_20 = { Var0.f_8 };
			StringCopy(&(Global_2547059.f_39[0 /*16*/]), "", 64);
			Global_2547059.f_58 = -2;
			Global_2547059.f_56 = 0;
			Global_2547059.f_57 = 0;
		}
	}
}

int func_131(var uParam0)
{
	if (Global_76833)
	{
		if (func_48() == 0)
		{
			return 0;
		}
		if (func_135(unk_0x460153A63B9477BC(), 1, 1))
		{
			if (unk_0xE72C9284B5143451(unk_0x9B0761B4C3EB8BC7()))
			{
				if (unk_0x3E401BCAB0197B54(unk_0x9B0761B4C3EB8BC7()) >= 1f)
				{
					return 0;
				}
			}
		}
	}
	if (unk_0x70E5C9630A26FB40() == 0)
	{
		return 0;
	}
	if (Global_2547059.f_1)
	{
	}
	if (Global_19872 == 1)
	{
		return 0;
	}
	if (Global_1574438)
	{
		return 0;
	}
	if (Global_2547059.f_36)
	{
		return 0;
	}
	if (func_122())
	{
		return 0;
	}
	if (((Global_41631 != 6 && Global_41631 != 8) && Global_41631 != 12) && Global_41631 != 15)
	{
		return 0;
	}
	if (func_134() && !func_133(12))
	{
		return 0;
	}
	if (unk_0x6B12213471F330A3())
	{
		return 0;
	}
	if (unk_0xFFDFD8490027DBA5())
	{
		return 0;
	}
	if (!func_132(unk_0x460153A63B9477BC()))
	{
		return 0;
	}
	if (unk_0xF0C12886E5C1B20E())
	{
		return 0;
	}
	if (Global_77093)
	{
		return 0;
	}
	if (unk_0x946C223A77255D18())
	{
		if (!unk_0x1A796F8F5A500C0E(unk_0x460153A63B9477BC()))
		{
			return 0;
		}
	}
	if (!unk_0x0EB6C63A09FD9DF1())
	{
		return 0;
	}
	if (unk_0x7677D662EB0C9C8A(uParam0) || unk_0x117B6F1F94F2F72D(uParam0))
	{
		return 0;
	}
	if (unk_0x68A57EEA8076DB91(uParam0) || unk_0xE74D5962D648B2B4(uParam0))
	{
		return 0;
	}
	if (unk_0x81BD471BB1633BB9())
	{
		if (unk_0xC6C08C02733D02C8())
		{
			if (unk_0x42583C71D91B7DB6())
			{
				return 0;
			}
		}
		else if (unk_0xDCA0815D900F27F8())
		{
			return 0;
		}
	}
	return 1;
}

int func_132(int iParam0)
{
	int iVar0;
	struct<13> Var1;
	
	if (unk_0x02AF7A48BB212AD4() == 0)
	{
		return 0;
	}
	iVar0 = -1;
	if (iParam0 != unk_0x460153A63B9477BC())
	{
		iVar0 = iParam0;
		if (iVar0 == -1)
		{
			return 0;
		}
	}
	if (unk_0x59ED414969A48197() || unk_0xDCA0815D900F27F8())
	{
		if (unk_0x5EFFB3AB721DABB7(0, iVar0))
		{
			if (unk_0x51C955B55E9F6E86())
			{
				return 1;
			}
		}
	}
	if (unk_0x11E5DE894D6A8A5F() || unk_0xC6C08C02733D02C8())
	{
		if (iParam0 == unk_0x460153A63B9477BC())
		{
			if (unk_0x05C049A6E0DFB6E5(0, -3, 1) || unk_0x5EFFB3AB721DABB7(1, -1))
			{
				return 1;
			}
		}
		else
		{
			Var1 = { func_8(iParam0) };
			if (unk_0x5EFFB3AB721DABB7(0, -1) || (unk_0x5EFFB3AB721DABB7(1, -1) && unk_0x78A7795C9C51946D(&Var1)))
			{
				return 1;
			}
		}
	}
	if (unk_0xF8EDFF98A9C94C74())
	{
		if (unk_0x5EFFB3AB721DABB7(0, iVar0))
		{
			if (unk_0x51C955B55E9F6E86())
			{
				return 1;
			}
		}
	}
	return 0;
}

bool func_133(int iParam0)
{
	return Global_41631 == iParam0;
}

int func_134()
{
	if (Global_41631 == 15)
	{
		return 0;
	}
	return 1;
}

int func_135(int iParam0, bool bParam1, bool bParam2)
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

void func_136()
{
	func_127();
}

void func_137()
{
	Global_2547059.f_1 = 1;
	Global_2547059.f_33 = -1;
	Global_2547059.f_34 = -1;
	if (unk_0x95EF219D38B20CFF(Global_19662) == 1)
	{
		if (Global_19669)
		{
			func_138(Global_19662, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, "CELL_202", 0, 0, 0, 0);
			if (Global_19624)
			{
				func_138(Global_19662, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
			}
		}
		else
		{
			func_138(Global_19662, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
		}
	}
}

void func_138(int iParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6, char* sParam7, char* sParam8, char* sParam9, char* sParam10, char* sParam11)
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
		func_139(sParam7);
	}
	if (!unk_0x7BCC91F3C1CF24E8(sParam8))
	{
		func_139(sParam8);
	}
	if (!unk_0x7BCC91F3C1CF24E8(sParam9))
	{
		func_139(sParam9);
	}
	if (!unk_0x7BCC91F3C1CF24E8(sParam10))
	{
		func_139(sParam10);
	}
	if (!unk_0x7BCC91F3C1CF24E8(sParam11))
	{
		func_139(sParam11);
	}
	unk_0xE1FDD153F5858534();
}

void func_139(char* sParam0)
{
	unk_0xB23270F3D5E62FDE(sParam0);
	unk_0x2042E9CA4306F725();
}

void func_140()
{
	int iVar0;
	
	if (iLocal_64)
	{
		Global_53968 = 0;
		Global_53968.f_12 = 0;
		Global_53968.f_24 = 0;
		Global_53968.f_36 = 0;
		iVar0 = 0;
		while (iVar0 < 10)
		{
			Global_53968.f_1[iVar0] = 0;
			Global_53968.f_13[iVar0] = 0;
			Global_53968.f_25[iVar0] = 0;
			Global_53968.f_37[iVar0] = 0;
			iVar0++;
		}
		iLocal_64 = 0;
	}
}

