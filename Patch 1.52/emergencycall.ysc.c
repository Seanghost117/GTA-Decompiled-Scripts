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
	int iLocal_43 = 0;
	int iLocal_44 = 0;
	struct<3> Local_45 = { 0, 0, 0 } ;
	int iLocal_46 = 0;
	var uLocal_47 = 0;
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
	iLocal_28 = 3;
	fLocal_31 = 80f;
	fLocal_32 = 140f;
	fLocal_33 = 180f;
	iLocal_39 = 1;
	iLocal_40 = 65;
	iLocal_41 = 49;
	iLocal_42 = 64;
	if (unk_0xED06FD5709A59F02(11))
	{
		iLocal_43 = 5;
	}
	while (true)
	{
		wait(0);
		if (unk_0x5A228A6A51E757C8(unk_0x460153A63B9477BC()))
		{
			switch (iLocal_43)
			{
				case 0:
					func_9();
					break;
				
				case 1:
					break;
				
				case 2:
					func_8();
					if (unk_0x25DDB354A40FFCDB())
					{
						if (unk_0x0322544DA3EE9C90(7, unk_0x9B0761B4C3EB8BC7(), 2, 3f, &uLocal_47, 0, 0))
						{
							iLocal_46 = unk_0x578C4EF320340AF7();
							iLocal_43 = 5;
						}
					}
					else if (unk_0x74F9877F714E4BC1(7, Local_45, 2, 3f, &uLocal_47, 0, 0))
					{
						iLocal_46 = unk_0x578C4EF320340AF7();
						iLocal_43 = 5;
					}
					break;
				
				case 3:
					func_8();
					if (unk_0x25DDB354A40FFCDB())
					{
						if ((func_7(unk_0x460153A63B9477BC(), 0) && func_4(unk_0x460153A63B9477BC()) == 5) && Global_1694945)
						{
							if (Global_1694946 == 0)
							{
								Global_1694946 = 1;
							}
							iLocal_43 = 5;
						}
						else if (unk_0x0322544DA3EE9C90(5, unk_0x9B0761B4C3EB8BC7(), 2, 3f, &uLocal_47, 0, 0))
						{
							iLocal_46 = unk_0x578C4EF320340AF7();
							iLocal_43 = 5;
						}
					}
					else if (unk_0x74F9877F714E4BC1(5, Local_45, 2, 3f, &uLocal_47, 0, 0))
					{
						iLocal_46 = unk_0x578C4EF320340AF7();
						iLocal_43 = 5;
					}
					break;
				
				case 4:
					func_8();
					if (unk_0x25DDB354A40FFCDB())
					{
						if (unk_0x0322544DA3EE9C90(3, unk_0x9B0761B4C3EB8BC7(), 4, 3f, &uLocal_47, 0, 0))
						{
							iLocal_46 = unk_0x578C4EF320340AF7();
							iLocal_43 = 5;
						}
					}
					else if (unk_0x74F9877F714E4BC1(3, Local_45, 4, 3f, &uLocal_47, 0, 0))
					{
						if (Global_95452.f_358 == unk_0x856D5567211886A2("AGENCY_PREP_1") || (unk_0x7B70881748D166CD(unk_0x856D5567211886A2("agency_prep1")) > 0 && func_3(0)))
						{
							Global_95452.f_358 = unk_0x856D5567211886A2("AHP1_TRUCKCALLED");
						}
						else if (func_2(67) && !func_2(68))
						{
							Global_95382 = 1;
						}
						iLocal_46 = unk_0x578C4EF320340AF7();
						iLocal_43 = 5;
					}
					break;
				
				case 5:
					if (unk_0x578C4EF320340AF7() > (iLocal_46 + 60000) || !unk_0x94A1F58756C76D86(uLocal_47))
					{
						func_1();
					}
					else if (unk_0x5A228A6A51E757C8(unk_0x460153A63B9477BC()))
					{
						if (!unk_0x4DC4117F94CD5B84(unk_0x460153A63B9477BC()))
						{
							if (unk_0x94A1F58756C76D86(uLocal_47))
							{
								unk_0x39D5904FA3FE13C3(uLocal_47);
							}
						}
					}
					break;
				}
		}
	}
}

void func_1()
{
	iLocal_43 = 0;
	iLocal_44 = 0;
	unk_0xD39E529EBE5DB04F();
}

int func_2(int iParam0)
{
	if (iParam0 == 94 || iParam0 == -1)
	{
		return 0;
	}
	return Global_111858.f_9081.f_330[iParam0 /*6*/];
}

bool func_3(bool bParam0)
{
	if (!bParam0 && unk_0x7B70881748D166CD(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return unk_0xCE990E643CD9D0E5(Global_77081, 0);
}

int func_4(int iParam0)
{
	if (func_6(iParam0) == 233)
	{
		return func_5(iParam0);
	}
	return -1;
}

int func_5(int iParam0)
{
	if (func_7(iParam0, 0))
	{
		return Global_1630317[iParam0 /*595*/].f_11.f_181;
	}
	return -1;
}

int func_6(int iParam0)
{
	if (func_7(iParam0, 0))
	{
		return Global_1630317[iParam0 /*595*/].f_11.f_33;
	}
	return -1;
}

int func_7(int iParam0, int iParam1)
{
	if (Global_1630317[iParam0 /*595*/].f_11.f_33 != -1 || (iParam1 && Global_1630317[iParam0 /*595*/].f_11.f_32 != -1))
	{
		return 1;
	}
	return 0;
}

void func_8()
{
	if (unk_0x578C4EF320340AF7() > iLocal_46 + 30000)
	{
		iLocal_43 = 5;
	}
}

void func_9()
{
	var uVar0;
	
	switch (iLocal_44)
	{
		case 0:
			iLocal_44 = 1;
			iLocal_46 = unk_0x578C4EF320340AF7();
			break;
		
		case 1:
			while (!func_19())
			{
				wait(0);
				if (func_18() == 3)
				{
					iLocal_43 = 3;
				}
				if (func_18() == 4)
				{
					iLocal_43 = 4;
				}
				if (func_18() == 5)
				{
					iLocal_43 = 2;
				}
				if (unk_0x578C4EF320340AF7() > iLocal_46 + 30000)
				{
					iLocal_46 = unk_0x578C4EF320340AF7();
					func_12(0);
				}
			}
			if (iLocal_43 == 0)
			{
				iLocal_43 = 5;
			}
			if (!unk_0x5AEB5DDFFAD43CA5(unk_0x9B0761B4C3EB8BC7()))
			{
				func_10(unk_0x9B0761B4C3EB8BC7(), &Local_45, &uVar0);
			}
			iLocal_46 = unk_0x578C4EF320340AF7();
			break;
	}
}

void func_10(int iParam0, var uParam1, var uParam2)
{
	int iVar0;
	int iVar1;
	var uVar2;
	var uVar3;
	var uVar4;
	var uVar5;
	struct<3> Var6;
	float fVar7;
	float fVar8;
	float fVar9;
	float fVar10;
	float fVar11;
	float fVar12;
	int iVar13;
	int iVar14;
	int iVar15;
	var uVar16;
	struct<3> Var17;
	var uVar18;
	
	fVar12 = 5f;
	iVar0 = 1;
	iVar13 = 0;
	while (iVar13 < 2)
	{
		switch (iVar13)
		{
			case 0:
				unk_0x1485BFBB1EC6FE22(unk_0x3E4D3CCC220BDFB1(unk_0x9B0761B4C3EB8BC7(), true), iVar0, uParam1, &fVar10, &iVar1, 5, 3f, 0f);
				unk_0x7F270824E67C2031(*uParam1, 1f, 1, &uVar4, &uVar5, &uVar2, &uVar3, &fVar7, 0);
				if (unk_0x272784C60C397DB6(unk_0x3E4D3CCC220BDFB1(unk_0x9B0761B4C3EB8BC7(), false), -3044.66f, 596.43f, 6.58f, true) < 25f)
				{
					*uParam1 = { -3031.38f, 605.32f, 6.86f };
				}
				Var6 = { unk_0x3E4D3CCC220BDFB1(unk_0x9B0761B4C3EB8BC7(), true) - unk_0x3E4D3CCC220BDFB1(iParam0, true) };
				fVar8 = unk_0x9075769DD4F148B7(Var6.x, Var6.f_1);
				fVar9 = (fVar10 + 180f);
				if (fVar9 > 360f)
				{
					fVar9 = (fVar9 - 360f);
				}
				if (func_11(fVar8, fVar10, 90f))
				{
					*uParam2 = fVar10;
				}
				else
				{
					*uParam2 = fVar9;
				}
				if (fVar7 < 0f)
				{
					fVar11 = 0f;
				}
				else if (unk_0xEF445D270DD603D8(unk_0xBD67304F930F21E4(*uParam1, 1, 1, 1077936128, 0)))
				{
					fVar11 = 0f;
				}
				else
				{
					fVar11 = (fVar12 * to_float((iVar1 / 2)));
					if (fVar11 == 0f)
					{
						fVar11 = (fVar11 + fVar12);
					}
					if (iVar1 == 5)
					{
						fVar11 = (fVar11 + fVar12);
					}
					if (unk_0x272784C60C397DB6(unk_0x3E4D3CCC220BDFB1(unk_0x9B0761B4C3EB8BC7(), false), 294f, -895f, 28f, true) < 25f || unk_0x272784C60C397DB6(unk_0x3E4D3CCC220BDFB1(unk_0x9B0761B4C3EB8BC7(), false), -713.01f, -819.64f, 22.63f, true) < 25f)
					{
						fVar11 = (fVar11 + 5f);
					}
					else
					{
						fVar11 = (fVar11 + 3.75f);
					}
					fVar11 = (fVar11 + (fVar7 / 2f));
				}
				if (vdist(unk_0x1BAE5C94E38E44FE(*uParam1, *uParam2, fVar11, 0f, 0f), unk_0x3E4D3CCC220BDFB1(unk_0x9B0761B4C3EB8BC7(), true)) > vdist(unk_0x1BAE5C94E38E44FE(*uParam1, *uParam2, -fVar11, 0f, 0f), unk_0x3E4D3CCC220BDFB1(unk_0x9B0761B4C3EB8BC7(), true)))
				{
					fVar11 = -fVar11;
				}
				*uParam1 = { unk_0x1BAE5C94E38E44FE(*uParam1, *uParam2, fVar11, 0f, 0f) };
				iVar14 = unk_0x8C487ECF9D628D82(*uParam1 + FtoV((uParam1->f_2 + 4.5f)), *uParam1 + Vector(4.5f, 0.5f, 0.5f), 2.5f, 1, 0, 4);
				iVar13++;
				break;
			
			case 1:
				if (iVar0 <= 2)
				{
					if (unk_0x0F0E6A09A9C90474(iVar14, &iVar15, &Var17, &uVar16, &uVar18) == 2)
					{
						if (iVar15 != 0)
						{
							if (Var17.f_2 > (uParam1->f_2 + 8.5f))
							{
								iVar13++;
							}
							else
							{
								iVar0++;
								iVar13 = 0;
							}
						}
						else
						{
							iVar13++;
						}
					}
				}
				else
				{
					iVar13++;
				}
				break;
			
			case 2:
				break;
		}
	}
}

int func_11(float fParam0, float fParam1, float fParam2)
{
	float fVar0;
	float fVar1;
	
	fVar1 = (fParam1 - fParam2);
	if (fVar1 < 0f)
	{
		fVar1 = (fVar1 + 360f);
	}
	fVar0 = (fParam1 + fParam2);
	if (fVar0 >= 360f)
	{
		fVar0 = (fVar0 - 360f);
	}
	if (fVar0 > fVar1)
	{
		if (fParam0 < fVar0 && fParam0 > fVar1)
		{
			return 1;
		}
	}
	else if (fParam0 < fVar0 || fParam0 > fVar1)
	{
		return 1;
	}
	return 0;
}

void func_12(int iParam0)
{
	if (func_17())
	{
		return;
	}
	if (Global_19864)
	{
		if (func_16())
		{
			func_14(1, 1);
		}
		else
		{
			func_14(0, 0);
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
	if (!func_13())
	{
		Global_19681.f_1 = 3;
	}
}

int func_13()
{
	if (Global_19681.f_1 == 1 || Global_19681.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

void func_14(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		if (func_15(0))
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

int func_15(int iParam0)
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

bool func_16()
{
	return unk_0xCE990E643CD9D0E5(Global_1689730, 5);
}

bool func_17()
{
	return unk_0xCE990E643CD9D0E5(Global_1689730, 19);
}

int func_18()
{
	return Global_22022;
}

int func_19()
{
	if (Global_21005 == 0)
	{
		return 1;
	}
	return 0;
}

