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
	var uLocal_28 = 0;
	var uLocal_29 = 0;
	float fLocal_30 = 0f;
	float fLocal_31 = 0f;
	float fLocal_32 = 0f;
	var uLocal_33 = 0;
	var uLocal_34 = 0;
	int iLocal_35 = 0;
	var uLocal_36 = 0;
	var uLocal_37 = 10;
	var uLocal_38 = 0;
	var uLocal_39 = 0;
	var uLocal_40 = 0;
	var uLocal_41 = 0;
	var uLocal_42 = 0;
	var uLocal_43 = 0;
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
	var uLocal_62 = 0;
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
	int iLocal_79 = 4;
	var uLocal_80 = 0;
	var uLocal_81 = 0;
	var uLocal_82 = 0;
	var uLocal_83 = 0;
	var uLocal_84 = 3;
	var uLocal_85 = 0;
	var uLocal_86 = 0;
	var uLocal_87 = 0;
	struct<3> Local_88[5];
	struct<8> Local_89[5];
	int iLocal_90 = 0;
	struct<9> Local_91 = { 4, 0, 0, 0, 0, 3, 0, 0, 0 } ;
#endregion

void __EntryFunction__()
{
	struct<3> Var0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
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
	fLocal_30 = 80f;
	fLocal_31 = 140f;
	fLocal_32 = 180f;
	iLocal_35 = 3;
	iLocal_79 = { ScriptParam_91 };
	if (unk_0xED06FD5709A59F02(19))
	{
		func_20();
	}
	if (!unk_0x5AEB5DDFFAD43CA5(unk_0x9B0761B4C3EB8BC7()))
	{
		func_19();
	}
	iVar1 = 0;
	iVar2 = 0;
	iVar3 = 200;
	iVar4 = unk_0x578C4EF320340AF7();
	while (true)
	{
		if (!func_9())
		{
			func_20();
		}
		if ((unk_0x578C4EF320340AF7() - iVar4) > 100)
		{
			if (!unk_0x5AEB5DDFFAD43CA5(unk_0x9B0761B4C3EB8BC7()))
			{
				Var0 = { unk_0x3E4D3CCC220BDFB1(unk_0x9B0761B4C3EB8BC7(), false) };
				if (func_8(iLocal_79[iVar1]))
				{
					if (vdist2(Var0, unk_0x3E4D3CCC220BDFB1(iLocal_79[iVar1], false)) >= IntToFloat((iVar3 * iVar3)) && unk_0x1D88F87079AF2FA7(iLocal_79[iVar1]))
					{
						func_7(&(Local_89[iVar1 /*8*/]));
						func_6(&(iLocal_79[iVar1]), 1, 0, 1);
					}
					else
					{
						func_5(iLocal_79[iVar1], &(Local_89[iVar1 /*8*/]), -1, 0, 0, 0, -1082130432, 0, -1, -1, 1);
					}
				}
				else if (unk_0xAE06B9E39EBDE049(iLocal_79[iVar1]))
				{
					func_6(&(iLocal_79[iVar1]), 1, 0, 1);
				}
				if (func_3(iLocal_79.f_5[iVar2]))
				{
					if (vdist2(Var0, Local_88[iVar2 /*3*/]) >= IntToFloat((iVar3 * iVar3)))
					{
						if (unk_0x1D88F87079AF2FA7(iLocal_79.f_5[iVar2]) || unk_0xE0B3BC41DDA88DF0(unk_0x9B0761B4C3EB8BC7(), iLocal_79.f_5[iVar2], false))
						{
							func_2(&(iLocal_79.f_5[iVar2]));
						}
					}
				}
				else if (unk_0xAE06B9E39EBDE049(iLocal_79.f_5[iVar2]))
				{
					func_2(&(iLocal_79.f_5[iVar2]));
				}
				iVar1++;
				if (iVar1 == iLocal_79)
				{
					iVar1 = 0;
				}
				iVar2++;
				if (iVar2 == iLocal_79.f_5)
				{
					iVar2 = 0;
				}
				if (func_1())
				{
					func_20();
				}
			}
			iVar4 = unk_0x578C4EF320340AF7();
		}
		wait(0);
	}
}

int func_1()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= (iLocal_79.f_5 - 1))
	{
		if (unk_0xAE06B9E39EBDE049(iLocal_79.f_5[iVar0]))
		{
			return 0;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= (iLocal_79 - 1))
	{
		if (unk_0xAE06B9E39EBDE049(iLocal_79[iVar0]))
		{
			return 0;
		}
		iVar0++;
	}
	return 1;
}

void func_2(int iParam0)
{
	if (unk_0xAE06B9E39EBDE049(*iParam0))
	{
		unk_0xA59F96B50B97E63C(*iParam0, 0);
		if (unk_0x1758275D343D5BA3(*iParam0) && unk_0x1D2A3118784C0272(*iParam0, 1))
		{
			unk_0xE730EAF558C97567(iParam0);
		}
	}
}

int func_3(int iParam0)
{
	if (func_4(iParam0))
	{
		if (unk_0x80FF6C016CDB0FAF(iParam0, 0))
		{
			if (!unk_0x0922C2E075A5F18C(iParam0))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_4(int iParam0)
{
	if (unk_0xAE06B9E39EBDE049(iParam0))
	{
		if (!unk_0xA59F96B50B97E63C(iParam0, 0))
		{
			return 1;
		}
	}
	return 0;
}

int func_5(int iParam0, var uParam1, int iParam2, int iParam3, bool bParam4, int iParam5, float fParam6, char* sParam7, int iParam8, int iParam9, bool bParam10)
{
	if (iParam3 == 0)
	{
		iParam3 = unk_0x2639A2323BEA8CC6();
	}
	if (fParam6 < 0f)
	{
		fParam6 = 100f;
	}
	if (!unk_0x5AEB5DDFFAD43CA5(iParam0))
	{
		if (!unk_0xD2160441D64A7913(iParam0))
		{
			if (iParam8 == -1)
			{
				unk_0x40144464F4EFCB95(iParam0, 1);
			}
			else
			{
				unk_0xA38FAE649193A9D3(iParam0, 1, iParam8);
			}
			uParam1->f_7 = iParam0;
			unk_0x8C9D58FFAD1E5F5D(iParam0, iParam2);
			unk_0x952C4BC7DD66CA43(iParam0, fParam6);
			if (unk_0x8F678487EEBD8CE4(*uParam1))
			{
				unk_0xE346A71235BB8065(*uParam1, 7);
			}
		}
		if (!iParam9 == -1)
		{
			unk_0x9E980DBD91D84D38(iParam0, iParam9);
		}
		unk_0xF3AD674A9CA93CB7(iParam0, bParam4);
		unk_0xB9FCCCD8AB1F5190(iParam0, iParam5);
		*uParam1 = unk_0xD5903D08ABF95646(iParam0);
		if (!iParam9 == -1)
		{
			if (unk_0x8F678487EEBD8CE4(*uParam1))
			{
				if (!iParam8 == -1)
				{
					unk_0xECC9A00CF1181EC2(*uParam1, iParam8);
				}
				if (!unk_0x7BCC91F3C1CF24E8(sParam7))
				{
					unk_0xE595D9125F918A6F("STRING");
					if (bParam10)
					{
						unk_0x9EFD301E3BE8324E(sParam7);
					}
					else
					{
						unk_0x6A826E35A3096ED0(sParam7);
					}
					unk_0x70103B2A126717C6(*uParam1);
				}
				unk_0xE346A71235BB8065(*uParam1, 7);
			}
		}
		if (!unk_0xCE990E643CD9D0E5(uParam1->f_6, 2))
		{
			if (unk_0x8F678487EEBD8CE4(*uParam1))
			{
				unk_0xBE20AB8238688965(&(uParam1->f_6), 2);
			}
		}
		if (unk_0x47DBF174A0CB9D55(iParam0, false))
		{
			uParam1->f_1 = unk_0x9E0AACA1FCE0CBEC(iParam0);
			if (!unk_0xCE990E643CD9D0E5(uParam1->f_6, 3))
			{
				if (unk_0x8F678487EEBD8CE4(uParam1->f_1))
				{
					if (!iParam8 == -1)
					{
						unk_0xECC9A00CF1181EC2(uParam1->f_1, iParam8);
					}
					if (!unk_0x7BCC91F3C1CF24E8(sParam7))
					{
						unk_0xE595D9125F918A6F("STRING");
						if (bParam10)
						{
							unk_0x9EFD301E3BE8324E(sParam7);
						}
						else
						{
							unk_0x6A826E35A3096ED0(sParam7);
						}
						unk_0x70103B2A126717C6(uParam1->f_1);
					}
					unk_0xE346A71235BB8065(uParam1->f_1, 7);
					unk_0xBE20AB8238688965(&(uParam1->f_6), 3);
				}
			}
			else if (!unk_0x8F678487EEBD8CE4(uParam1->f_1))
			{
				uParam1->f_1 = 0;
				unk_0xD2459066EA58CE43(&(uParam1->f_6), 3);
			}
		}
		else if (unk_0x8F678487EEBD8CE4(uParam1->f_1))
		{
			uParam1->f_1 = 0;
			unk_0xD2459066EA58CE43(&(uParam1->f_6), 3);
		}
	}
	else
	{
		return 1;
	}
	return 0;
}

void func_6(int iParam0, bool bParam1, int iParam2, int iParam3)
{
	if (unk_0xAE06B9E39EBDE049(*iParam0))
	{
		if (!unk_0x5AEB5DDFFAD43CA5(*iParam0))
		{
			unk_0xA5EAD2ACE2C8BBB2(*iParam0, false, 1);
			if (iParam3 == 0)
			{
				unk_0x0C095242BA4786C7(*iParam0);
			}
			unk_0xCBA6B2B569DCAFD8(*iParam0, bParam1);
			if (iParam2 == 1)
			{
				unk_0x4E65320BC9AD521C(*iParam0, false);
			}
		}
		unk_0x2481907DEE6B85EA(iParam0);
	}
}

void func_7(int iParam0)
{
	bool bVar0;
	struct<8> Var1;
	
	if (unk_0x8F678487EEBD8CE4(*iParam0))
	{
		unk_0x93370FA10F15BE44(iParam0);
		bVar0 = true;
	}
	if (unk_0x8F678487EEBD8CE4(iParam0->f_1))
	{
		unk_0x93370FA10F15BE44(&(iParam0->f_1));
		bVar0 = true;
	}
	if (unk_0xAE06B9E39EBDE049(iParam0->f_7))
	{
		if (!unk_0xA59F96B50B97E63C(iParam0->f_7, 0))
		{
			if (unk_0xD2160441D64A7913(iParam0->f_7))
			{
				unk_0x40144464F4EFCB95(iParam0->f_7, 0);
			}
		}
		bVar0 = true;
	}
	if (bVar0)
	{
		*iParam0 = { Var1 };
	}
}

int func_8(int iParam0)
{
	if (func_4(iParam0))
	{
		if (!unk_0x5AEB5DDFFAD43CA5(iParam0))
		{
			return 1;
		}
	}
	return 0;
}

int func_9()
{
	if (unk_0x7B70881748D166CD(joaat("bailbond2")) == 0)
	{
		if (!func_17(4))
		{
			return 0;
		}
	}
	if (Global_95875 == 1)
	{
		return 0;
	}
	if (unk_0x3EBB66F936A3436E())
	{
		return 0;
	}
	if (Global_30970)
	{
		return 0;
	}
	if (func_10() != 2)
	{
		return 0;
	}
	return 1;
}

int func_10()
{
	func_11();
	return Global_111858.f_2359.f_539.f_4321;
}

void func_11()
{
	int iVar0;
	
	if (unk_0xAE06B9E39EBDE049(unk_0x9B0761B4C3EB8BC7()))
	{
		if (func_15(Global_111858.f_2359.f_539.f_4321) != unk_0x36FE6D3220816ADA(unk_0x9B0761B4C3EB8BC7()))
		{
			iVar0 = func_14(unk_0x9B0761B4C3EB8BC7());
			if (func_13(iVar0) && (!func_12(14) || Global_110809))
			{
				if (Global_111858.f_2359.f_539.f_4321 != iVar0 && func_13(Global_111858.f_2359.f_539.f_4321))
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

bool func_12(int iParam0)
{
	return Global_41631 == iParam0;
}

bool func_13(int iParam0)
{
	return iParam0 < 3;
}

int func_14(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0xAE06B9E39EBDE049(iParam0))
	{
		iVar1 = unk_0x36FE6D3220816ADA(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_15(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_15(int iParam0)
{
	if (func_13(iParam0))
	{
		return func_16(iParam0);
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

var func_16(int iParam0)
{
	return Global_1848[iParam0 /*29*/];
}

bool func_17(int iParam0)
{
	return func_18(iParam0, Global_41631);
}

int func_18(int iParam0, int iParam1)
{
	if (iParam1 == 15)
	{
		return 1;
	}
	if (iParam0 == 15)
	{
		return 0;
	}
	switch (iParam0)
	{
		case 16:
			switch (iParam1)
			{
				case 9:
				case 10:
				case 7:
				case 13:
				case 14:
					return 0;
					break;
			}
			return 1;
			break;
		
		case 0:
			switch (iParam1)
			{
				case 5:
				case 17:
					return 1;
					break;
			}
			break;
		
		case 2:
		case 3:
			switch (iParam1)
			{
				case 5:
				case 6:
				case 8:
				case 17:
					return 1;
					break;
			}
			break;
		
		case 4:
			if (iParam1 == 17)
			{
				return 1;
			}
			break;
		
		case 5:
			break;
		
		case 6:
		case 8:
			if (iParam1 == 5)
			{
				return 1;
			}
			break;
		
		case 7:
			if (iParam1 == 6)
			{
				return 1;
			}
			break;
		
		case 9:
			if (iParam1 == 5)
			{
				return 1;
			}
			break;
		
		case 10:
			switch (iParam1)
			{
				case 5:
				case 6:
				case 17:
					return 1;
					break;
			}
			break;
		
		case 11:
			if (iParam1 == 5)
			{
				return 1;
			}
			break;
		
		case 17:
			switch (iParam1)
			{
				case 17:
				case 12:
				case 5:
					return 1;
					break;
			}
			break;
		
		case 18:
		case 12:
			switch (iParam1)
			{
				case 5:
				case 6:
				case 8:
					return 1;
					break;
			}
			break;
		
		case 13:
			switch (iParam1)
			{
				case 5:
					return 1;
					break;
			}
			break;
		
		case 14:
			switch (iParam1)
			{
				case 5:
					return 1;
					break;
			}
			break;
	}
	return 0;
}

void func_19()
{
	int iVar0;
	
	unk_0xDE8F8016287F771F("ENEMIES", &iLocal_90);
	unk_0xEFBCE8F8316F89EA(5, 1862763509, iLocal_90);
	unk_0xEFBCE8F8316F89EA(5, iLocal_90, 1862763509);
	iVar0 = 0;
	while (iVar0 <= (iLocal_79.f_5 - 1))
	{
		if (func_3(iLocal_79.f_5[iVar0]))
		{
			unk_0x4F3C4F457D44BB0F(iLocal_79.f_5[iVar0], true, 1);
			Local_88[iVar0 /*3*/] = { unk_0x3E4D3CCC220BDFB1(iLocal_79.f_5[iVar0], false) };
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= (iLocal_79 - 1))
	{
		if (func_8(iLocal_79[iVar0]))
		{
			unk_0x4F3C4F457D44BB0F(iLocal_79[iVar0], true, 1);
			unk_0xD3D9D7C84656DAE5(iLocal_79[iVar0], iLocal_90);
			func_5(iLocal_79[iVar0], &(Local_89[iVar0 /*8*/]), -1, 0, 0, 0, -1082130432, 0, -1, -1, 1);
		}
		iVar0++;
	}
}

void func_20()
{
	int iVar0;
	
	unk_0xF62C19B1689A771C(5, 1862763509, iLocal_90);
	unk_0xF62C19B1689A771C(5, iLocal_90, 1862763509);
	iVar0 = 0;
	while (iVar0 <= (iLocal_79 - 1))
	{
		func_7(&(Local_89[iVar0 /*8*/]));
		func_6(&(iLocal_79[iVar0]), 1, 0, 1);
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= (iLocal_79.f_5 - 1))
	{
		func_2(&(iLocal_79.f_5[iVar0]));
		iVar0++;
	}
	unk_0xD39E529EBE5DB04F();
}

