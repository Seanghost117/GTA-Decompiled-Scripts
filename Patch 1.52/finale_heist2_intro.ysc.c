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
#endregion

void __EntryFunction__()
{
	var uVar0;
	bool bVar1;
	
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
	if (unk_0xED06FD5709A59F02(3))
	{
		func_20();
	}
	unk_0x227BB9ED71ECB6E8(1);
	func_19(0);
	func_18();
	unk_0x7B6787E06BA57F7B();
	while (!bVar1)
	{
		uVar0 = unk_0x90E310459C77DBD4();
		if (unk_0xF005CCA4263DF67F(unk_0x1CFC5FD684594C4C(uVar0), "heist_ctrl_finale"))
		{
			bVar1 = true;
		}
	}
	unk_0x069C9C3DFF8867FE(uVar0);
	func_17();
	func_1(96.7f, -1288.1f, 28.1f, 104.5f, -1301f, 30f, 2f, 118.3f, -1309.7f, 29f, 120f, 1, 1, 1, 0, 0);
	func_20();
}

void func_1(struct<3> Param0, struct<3> Param1, float fParam2, struct<3> Param3, float fParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9)
{
	func_2(Param0, Param1, fParam2, Param3, fParam4, 0f, 0f, 0f, bParam5, bParam6, bParam7, bParam8, bParam9);
}

void func_2(struct<3> Param0, struct<3> Param1, float fParam2, struct<3> Param3, float fParam4, struct<3> Param5, bool bParam6, bool bParam7, bool bParam8, bool bParam9, bool bParam10)
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	int iVar3;
	struct<3> Var4;
	struct<3> Var5;
	struct<3> Var6;
	int iVar7;
	int iVar8;
	int iVar9;
	
	if (bParam7)
	{
		bParam7 = false;
	}
	bVar2 = true;
	iVar3 = 0;
	iVar0 = unk_0xA5D3CD332CD10EE9();
	if (unk_0xAE06B9E39EBDE049(iVar0))
	{
		if (!unk_0x1758275D343D5BA3(iVar0))
		{
			unk_0x4F3C4F457D44BB0F(iVar0, true, 0);
			iVar3 = 1;
		}
		if (unk_0x80FF6C016CDB0FAF(iVar0, 0))
		{
			if (bParam10)
			{
				func_16(iVar0);
			}
			if (unk_0x1037B9D45CE6B788(iVar0, Param0, Param1, fParam2, 0, true, 0))
			{
				bVar1 = true;
			}
			else
			{
				Var6 = { unk_0x3E4D3CCC220BDFB1(iVar0, true) };
				if ((Var6.f_2 > Param0.f_2 && Var6.f_2 < Param1.f_2) || (Var6.f_2 > Param1.f_2 && Var6.f_2 < Param0.f_2))
				{
					if (func_13(iVar0, Param0, Param1, fParam2))
					{
						bVar1 = true;
					}
				}
			}
			if (unk_0x80FF6C016CDB0FAF(iVar0, 0))
			{
				if (unk_0x68AEFA37A65085FD(iVar0, joaat("taxi")))
				{
					if (unk_0x10D3F7E169A49C44(iVar0, -1, 0) != unk_0x9B0761B4C3EB8BC7() && unk_0x10D3F7E169A49C44(iVar0, -1, 0) != 0)
					{
						if (unk_0x272784C60C397DB6(Param0 + Param1 / Vector(2f, 2f, 2f), unk_0x3E4D3CCC220BDFB1(iVar0, true), true) < 20f)
						{
							bVar1 = true;
							bVar2 = false;
						}
					}
				}
			}
			if (bParam8)
			{
				if (func_4(iVar0, func_6(), 1))
				{
					bVar1 = false;
				}
			}
			if (bVar1)
			{
				if (!func_3(Param5))
				{
					if (unk_0x80FF6C016CDB0FAF(iVar0, 0))
					{
						iVar7 = unk_0x36FE6D3220816ADA(iVar0);
						unk_0x0CB04CEF35E9B77D(iVar0, &Var4, &Var5);
						if (unk_0x442D6659150AF4B3(iVar7))
						{
							Param5.x = (Param5.x + 3f);
							Param5.f_1 = (Param5.f_1 + 3f);
						}
						if (((iVar7 == joaat("zentorno") || iVar7 == joaat("btype")) || iVar7 == joaat("dubsta3")) || iVar7 == joaat("monster"))
						{
							Param5 = { Param5 * Vector(1.1f, 1.1f, 1.1f) };
						}
						else if (iVar7 == joaat("t20") || iVar7 == joaat("virgo"))
						{
							Param5 = { Param5 * Vector(1.2f, 1.2f, 1.2f) };
						}
						if ((Var5.x - Var4.x) > Param5.x)
						{
							bVar2 = false;
						}
						else if ((Var5.f_1 - Var4.f_1) > Param5.f_1)
						{
							bVar2 = false;
						}
						else if ((Var5.f_2 - Var4.f_2) > Param5.f_2)
						{
							bVar2 = false;
						}
					}
				}
				if (unk_0x80FF6C016CDB0FAF(iVar0, 0))
				{
					if (bVar2)
					{
						unk_0xF27E737981AFB47D(Param3, 5f, 0, 0, 0, 0, false, 0);
						unk_0xE922BAA80E8F9324(iVar0, fParam4);
						unk_0x03D382CB0B44E2FC(iVar0, Param3, 1, false, 0, 1);
						unk_0xB11D151E210D4FAC(iVar0, 1084227584);
						if (bParam9)
						{
							unk_0xC160551F55D6365A(iVar0, false, 1, 0);
							unk_0xFC34FFD7661206B7(iVar0, 1);
						}
					}
					else
					{
						if (!unk_0x1758275D343D5BA3(iVar0) || !unk_0x1D2A3118784C0272(iVar0, 1))
						{
							unk_0x4F3C4F457D44BB0F(iVar0, true, 1);
						}
						if (unk_0xE0B3BC41DDA88DF0(unk_0x9B0761B4C3EB8BC7(), iVar0, 0))
						{
							unk_0x03D382CB0B44E2FC(unk_0x9B0761B4C3EB8BC7(), unk_0x3E4D3CCC220BDFB1(iVar0, true), 1, false, 0, 1);
						}
						unk_0x03A2522C845CFAC6(&iVar0);
					}
				}
			}
			if (bParam6)
			{
				unk_0xEDEA748B8197B28A(Param0, Param1, fParam2, 0, 0, 0, 0, 0, 0);
			}
			if (iVar3 == 1)
			{
				if (unk_0xAE06B9E39EBDE049(iVar0))
				{
					if (unk_0x1758275D343D5BA3(iVar0))
					{
						unk_0xE730EAF558C97567(&iVar0);
					}
				}
			}
		}
		else
		{
			if (!unk_0x1758275D343D5BA3(iVar0))
			{
				unk_0x4F3C4F457D44BB0F(iVar0, true, 0);
			}
			iVar8 = unk_0x10D3F7E169A49C44(iVar0, -1, 0);
			if (unk_0xAE06B9E39EBDE049(iVar8) && !unk_0x5AEB5DDFFAD43CA5(iVar8))
			{
				unk_0x03D382CB0B44E2FC(iVar8, unk_0x3E4D3CCC220BDFB1(iVar8, true), 1, false, 0, 1);
			}
			iVar9 = unk_0x112A81273D7187A5(unk_0x36FE6D3220816ADA(iVar0));
			if (iVar9 <= 2)
			{
				iVar8 = unk_0x10D3F7E169A49C44(iVar0, 0, 0);
				if (unk_0xAE06B9E39EBDE049(iVar8) && !unk_0x5AEB5DDFFAD43CA5(iVar8))
				{
					unk_0x03D382CB0B44E2FC(iVar8, unk_0x3E4D3CCC220BDFB1(iVar8, true), 1, false, 0, 1);
				}
			}
			if (iVar9 <= 4)
			{
				iVar8 = unk_0x10D3F7E169A49C44(iVar0, 1, 0);
				if (unk_0xAE06B9E39EBDE049(iVar8) && !unk_0x5AEB5DDFFAD43CA5(iVar8))
				{
					unk_0x03D382CB0B44E2FC(iVar8, unk_0x3E4D3CCC220BDFB1(iVar8, true), 1, false, 0, 1);
				}
				iVar8 = unk_0x10D3F7E169A49C44(iVar0, 2, 0);
				if (unk_0xAE06B9E39EBDE049(iVar8) && !unk_0x5AEB5DDFFAD43CA5(iVar8))
				{
					unk_0x03D382CB0B44E2FC(iVar8, unk_0x3E4D3CCC220BDFB1(iVar8, true), 1, false, 0, 1);
				}
			}
			unk_0x03A2522C845CFAC6(&iVar0);
		}
	}
}

int func_3(struct<3> Param0)
{
	if ((Param0.x == 0f && Param0.f_1 == 0f) && Param0.f_2 == 0f)
	{
		return 1;
	}
	return 0;
}

int func_4(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	char* sVar1;
	int iVar2;
	
	if (!unk_0xAE06B9E39EBDE049(iParam0) || !unk_0x80FF6C016CDB0FAF(iParam0, 0))
	{
		return 0;
	}
	iVar0 = 0;
	while (func_5(iParam1, iVar0, &sVar1, &iVar2))
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

int func_5(int iParam0, int iParam1, char* sParam2, var uParam3)
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

int func_6()
{
	func_7();
	return Global_111858.f_2359.f_539.f_4321;
}

void func_7()
{
	int iVar0;
	
	if (unk_0xAE06B9E39EBDE049(unk_0x9B0761B4C3EB8BC7()))
	{
		if (func_11(Global_111858.f_2359.f_539.f_4321) != unk_0x36FE6D3220816ADA(unk_0x9B0761B4C3EB8BC7()))
		{
			iVar0 = func_10(unk_0x9B0761B4C3EB8BC7());
			if (func_9(iVar0) && (!func_8(14) || Global_110809))
			{
				if (Global_111858.f_2359.f_539.f_4321 != iVar0 && func_9(Global_111858.f_2359.f_539.f_4321))
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

bool func_8(int iParam0)
{
	return Global_41631 == iParam0;
}

bool func_9(int iParam0)
{
	return iParam0 < 3;
}

int func_10(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0xAE06B9E39EBDE049(iParam0))
	{
		iVar1 = unk_0x36FE6D3220816ADA(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_11(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_11(int iParam0)
{
	if (func_9(iParam0))
	{
		return func_12(iParam0);
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

var func_12(int iParam0)
{
	return Global_1848[iParam0 /*29*/];
}

int func_13(int iParam0, struct<3> Param1, struct<3> Param2, float fParam3)
{
	struct<3> Var0;
	struct<3> Var1;
	struct<3> Var2;
	struct<3> Var3;
	struct<3> Var4;
	struct<3> Var5;
	struct<3> Var6[4];
	struct<2> Var7;
	struct<2> Var8;
	
	if (unk_0x80FF6C016CDB0FAF(iParam0, 0))
	{
		Param1.f_2 = Param2.f_2;
		Var0 = { func_15(Param1 - Param2) };
		Var1 = { Var0 };
		Var0.x = -Var1.f_1;
		Var0.f_1 = Var1.x;
		Var0.f_2 = 0f;
		Var2 = { Param1 - Var0 * FtoV((fParam3 / 2f)) };
		Var3 = { Param1 + Var0 * FtoV((fParam3 / 2f)) };
		Var4 = { Param2 - Var0 * FtoV((fParam3 / 2f)) };
		Var5 = { Param2 + Var0 * FtoV((fParam3 / 2f)) };
		unk_0x140662B520844E45(unk_0x36FE6D3220816ADA(iParam0), &Var7, &Var8);
		Var6[0 /*3*/] = { unk_0x7EC595B99EA7C4B1(iParam0, Var7, Var7.f_1, 0f) };
		Var6[1 /*3*/] = { unk_0x7EC595B99EA7C4B1(iParam0, Var7, Var8.f_1, 0f) };
		Var6[2 /*3*/] = { unk_0x7EC595B99EA7C4B1(iParam0, Var8, Var7.f_1, 0f) };
		Var6[3 /*3*/] = { unk_0x7EC595B99EA7C4B1(iParam0, Var8, Var8.f_1, 0f) };
		if (((((((((((((((func_14(Var6[0 /*3*/], Var6[1 /*3*/], Var2, Var3) || func_14(Var6[0 /*3*/], Var6[1 /*3*/], Var3, Var5)) || func_14(Var6[0 /*3*/], Var6[1 /*3*/], Var4, Var5)) || func_14(Var6[0 /*3*/], Var6[1 /*3*/], Var2, Var4)) || func_14(Var6[1 /*3*/], Var6[3 /*3*/], Var2, Var3)) || func_14(Var6[1 /*3*/], Var6[3 /*3*/], Var3, Var5)) || func_14(Var6[1 /*3*/], Var6[3 /*3*/], Var4, Var5)) || func_14(Var6[1 /*3*/], Var6[3 /*3*/], Var2, Var4)) || func_14(Var6[3 /*3*/], Var6[2 /*3*/], Var2, Var3)) || func_14(Var6[3 /*3*/], Var6[2 /*3*/], Var3, Var5)) || func_14(Var6[3 /*3*/], Var6[2 /*3*/], Var4, Var5)) || func_14(Var6[3 /*3*/], Var6[2 /*3*/], Var2, Var4)) || func_14(Var6[2 /*3*/], Var6[0 /*3*/], Var2, Var3)) || func_14(Var6[2 /*3*/], Var6[0 /*3*/], Var3, Var5)) || func_14(Var6[2 /*3*/], Var6[0 /*3*/], Var4, Var5)) || func_14(Var6[2 /*3*/], Var6[0 /*3*/], Var2, Var4))
		{
			return 1;
		}
	}
	return 0;
}

int func_14(struct<2> Param0, var uParam1, struct<2> Param2, var uParam3, struct<2> Param4, var uParam5, struct<2> Param6, var uParam7)
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	float fVar7;
	float fVar8;
	float fVar9;
	float fVar10;
	float fVar11;
	float fVar12;
	float fVar13;
	
	fVar0 = Param0;
	fVar1 = Param0.f_1;
	fVar2 = Param2;
	fVar3 = Param2.f_1;
	fVar4 = Param4;
	fVar5 = Param4.f_1;
	fVar6 = Param6;
	fVar7 = Param6.f_1;
	fVar8 = (fVar2 - fVar0);
	fVar9 = (fVar3 - fVar1);
	fVar10 = (fVar6 - fVar4);
	fVar11 = (fVar7 - fVar5);
	fVar12 = (((-fVar9 * (fVar0 - fVar4)) + (fVar8 * (fVar1 - fVar5))) / ((-fVar10 * fVar9) + (fVar8 * fVar11)));
	fVar13 = (((fVar10 * (fVar1 - fVar5)) - (fVar11 * (fVar0 - fVar4))) / ((-fVar10 * fVar9) + (fVar8 * fVar11)));
	if (((fVar12 >= 0f && fVar12 <= 1f) && fVar13 >= 0f) && fVar13 <= 1f)
	{
		return 1;
	}
	return 0;
}

Vector3 func_15(struct<3> Param0)
{
	float fVar0;
	float fVar1;
	
	fVar0 = vmag(Param0);
	if (fVar0 != 0f)
	{
		fVar1 = (1f / fVar0);
		Param0 = { Param0 * Vector(fVar1, fVar1, fVar1) };
	}
	else
	{
		Param0.x = 0f;
		Param0.f_1 = 0f;
		Param0.f_2 = 0f;
	}
	return Param0;
}

void func_16(int iParam0)
{
	if (unk_0xAE06B9E39EBDE049(iParam0))
	{
		if (unk_0x80FF6C016CDB0FAF(iParam0, 0))
		{
			if (unk_0xDAD5E5518E960CD1(iParam0) <= 200f)
			{
				unk_0x0FC504FAF5EB94FB(iParam0, 500f);
			}
			if (unk_0x6167DCEE85C18365(iParam0) <= 700f)
			{
				unk_0x0FC504FAF5EB94FB(iParam0, 900f);
			}
			if (unk_0x4F5F2FB7AE0EB7AB(iParam0) < 200)
			{
				unk_0x0FC504FAF5EB94FB(iParam0, 500f);
			}
		}
	}
}

void func_17()
{
	Global_110882 = 1;
}

void func_18()
{
	int iVar0;
	
	iVar0 = func_6();
	switch (iVar0)
	{
		case 0:
			unk_0xDDBEE500B2E6E7FA("BS_2A_2B_INT", 12, 8);
			break;
		
		case 1:
			unk_0xDDBEE500B2E6E7FA("BS_2A_2B_INT", 14, 8);
			break;
		
		case 2:
			unk_0x85D9FC15836825C1("BS_2A_2B_INT", 8);
			break;
	}
	while (!unk_0x7F18D7F6ED5D2492("BS_2A_2B_INT"))
	{
		wait(0);
	}
}

void func_19(int iParam0)
{
	Global_75654.f_138 = iParam0;
}

void func_20()
{
	func_25(24, 1);
	func_21(1, 0);
	unk_0xD39E529EBE5DB04F();
}

void func_21(bool bParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	var uVar2;
	
	if (!Global_61719)
	{
		Global_61719 = iParam1;
	}
	if (bParam0)
	{
		if ((func_24(0) && Global_77079.f_1 == 1) && func_23(Global_77079))
		{
		}
		else
		{
			Global_61717 = 1;
		}
	}
	if (Global_111858.f_9081 || func_24(0))
	{
		iVar0 = func_22();
		iVar1 = Global_89707[iVar0 /*5*/];
		uVar2 = Global_77102.f_109[iVar1 /*4*/];
		if (iVar0 == -1)
		{
			if (Global_111858.f_9081)
			{
			}
			return;
		}
		if (unk_0xCE990E643CD9D0E5(Global_89707[iVar0 /*5*/].f_1, 4))
		{
			return;
		}
		if (unk_0xCE990E643CD9D0E5(Global_89707[iVar0 /*5*/].f_1, 5))
		{
			return;
		}
		unk_0xBE20AB8238688965(&(Global_89707[iVar0 /*5*/].f_1), 4);
		unk_0xBE20AB8238688965(&Global_77081, 1);
		Global_77097 = uVar2;
		Global_77098 = unk_0x578C4EF320340AF7();
	}
}

int func_22()
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 7)
	{
		if (unk_0xCE990E643CD9D0E5(Global_89707[iVar0 /*5*/].f_1, 2))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_23(int iParam0)
{
	switch (iParam0)
	{
		case 71:
			return 1;
			break;
		
		case 86:
			return 1;
			break;
		
		case 91:
			return 1;
			break;
		
		default:
			return 0;
			break;
	}
	return 0;
}

bool func_24(bool bParam0)
{
	if (!bParam0 && unk_0x7B70881748D166CD(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return unk_0xCE990E643CD9D0E5(Global_77081, 0);
}

void func_25(int iParam0, int iParam1)
{
	if (iParam0 == 146 || iParam0 == -1)
	{
		return;
	}
	if (Global_111858.f_9081.f_99.f_58[iParam0] == iParam1)
	{
		return;
	}
	Global_111858.f_9081.f_99.f_58[iParam0] = iParam1;
}

