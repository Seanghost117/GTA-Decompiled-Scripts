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
	var uLocal_37 = 0;
	var uLocal_38 = 0;
	var uLocal_39 = 0;
	bool bLocal_40 = 0;
	bool bLocal_41 = 0;
	struct<8> Local_42 = { 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_43 = 0;
	var uLocal_44 = 0;
	var uLocal_45 = 0;
	var uLocal_46 = 0;
	var uLocal_47 = 0;
	struct<11> Local_48[30];
	int iLocal_49 = 0;
	int iLocal_50 = 0;
	int iLocal_51 = 0;
	int iLocal_52 = 0;
	int iLocal_53 = 0;
	int iLocal_54 = 0;
	int iLocal_55 = 0;
	int iLocal_56 = 0;
	var uLocal_57 = 0;
	int iLocal_58[30] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
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
	fLocal_30 = 80f;
	fLocal_31 = 140f;
	fLocal_32 = 180f;
	iLocal_35 = 3;
	bLocal_40 = true;
	bLocal_41 = true;
	iLocal_54 = -1;
	iLocal_55 = 5;
	if (unk_0xED06FD5709A59F02(210))
	{
		func_127();
	}
	if (unk_0x7B70881748D166CD(joaat("ambient_sonar")) > 1)
	{
		unk_0xD39E529EBE5DB04F();
	}
	func_126(13);
	func_125(0);
	while (true)
	{
		wait(0);
		func_124(unk_0x9B0761B4C3EB8BC7());
		switch (iLocal_51)
		{
			case 0:
				func_118();
				break;
			
			case 1:
				func_110();
				break;
			
			case 2:
				func_1();
				break;
			
			case 3:
				func_127();
				break;
		}
	}
}

void func_1()
{
	iLocal_52 = 0;
	if (func_109(unk_0x9B0761B4C3EB8BC7()))
	{
		if (unk_0x5A228A6A51E757C8(unk_0x460153A63B9477BC()))
		{
			if (func_76(&Local_42, &Local_48))
			{
				func_30();
			}
			else if (unk_0xF1263D4D1D8024EF(unk_0x9B0761B4C3EB8BC7()))
			{
				iLocal_49 = unk_0xA5D5B1042E8F47BD(unk_0x9B0761B4C3EB8BC7(), 0);
				func_125(1);
				func_13(0);
				if (func_109(unk_0x9B0761B4C3EB8BC7()))
				{
					if (func_11(&Local_42, &Local_48, unk_0x3E4D3CCC220BDFB1(unk_0x9B0761B4C3EB8BC7(), 1), &iLocal_54))
					{
						func_8();
					}
				}
				unk_0x53797676AD34A9AA(0);
				func_7();
				func_6(1);
			}
			else if (func_109(iLocal_49))
			{
				if (vdist2(unk_0x3E4D3CCC220BDFB1(unk_0x9B0761B4C3EB8BC7(), 1), unk_0x3E4D3CCC220BDFB1(iLocal_49, 1)) > 62500f)
				{
					func_5();
				}
				else if (!unk_0x8F678487EEBD8CE4(iLocal_50))
				{
					iLocal_50 = func_2(iLocal_49, 0, 0);
					unk_0xE7B8403ABCA0391D(iLocal_50, 308);
				}
			}
			else
			{
				func_7();
			}
		}
	}
}

int func_2(int iParam0, bool bParam1, bool bParam2)
{
	return func_3(iParam0, !bParam1, bParam2);
}

int func_3(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	
	if (!unk_0xAE06B9E39EBDE049(iParam0))
	{
		return 0;
	}
	iVar0 = unk_0x2BE000892D65EA2A(iParam0);
	if (unk_0x20F7576FDB52E2B0(iParam0))
	{
		unk_0xFA81E0FBD7F5ACA0(iVar0, func_4(unk_0x25DDB354A40FFCDB(), 1f, 1f));
		if (!bParam2)
		{
			unk_0x3060C53EAE54BBE7(iVar0, bParam1);
		}
		else
		{
			unk_0xECC9A00CF1181EC2(iVar0, 2);
		}
	}
	else if (unk_0xA1914E72A0EB31D0(iParam0))
	{
		unk_0xFA81E0FBD7F5ACA0(iVar0, func_4(unk_0x25DDB354A40FFCDB(), 0.7f, 0.7f));
		unk_0x3060C53EAE54BBE7(iVar0, bParam1);
	}
	else if (unk_0x49116E591C7E1412(iParam0))
	{
		unk_0xFA81E0FBD7F5ACA0(iVar0, func_4(unk_0x25DDB354A40FFCDB(), 0.7f, 0.7f));
	}
	return iVar0;
}

float func_4(bool bParam0, float fParam1, float fParam2)
{
	if (bParam0)
	{
		return fParam1;
	}
	return fParam2;
}

void func_5()
{
	func_7();
	if (unk_0xAE06B9E39EBDE049(iLocal_49))
	{
		unk_0xE730EAF558C97567(&iLocal_49);
	}
}

void func_6(int iParam0)
{
	iLocal_51 = iParam0;
}

void func_7()
{
	if (unk_0x8F678487EEBD8CE4(iLocal_50))
	{
		unk_0x93370FA10F15BE44(&iLocal_50);
	}
}

void func_8()
{
	func_9(func_10(iLocal_54), 1, 1);
	iLocal_53 = 1;
}

void func_9(struct<3> Param0, bool bParam1, bool bParam2)
{
	Global_22111 = { Param0 };
	unk_0xD2459066EA58CE43(&Global_7552, 30);
	if (bParam1)
	{
		unk_0xBE20AB8238688965(&Global_7552, 29);
	}
	else
	{
		unk_0xD2459066EA58CE43(&Global_7552, 29);
	}
	if (bParam2)
	{
		unk_0xBE20AB8238688965(&Global_7553, 1);
	}
	else
	{
		unk_0xD2459066EA58CE43(&Global_7553, 1);
	}
}

Vector3 func_10(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return -1435.61f, 5781.12f, -29.87f;
			break;
		
		case 1:
			return -1956.54f, -1125.07f, -37.21f;
			break;
		
		case 2:
			return 2752.88f, -1212.78f, -22.41f;
			break;
		
		case 3:
			return 3188.04f, -1668.19f, -146.88f;
			break;
		
		case 4:
			return 2555.04f, -2372.47f, -112.01f;
			break;
		
		case 5:
			return 2945.9f, 6537.41f, -27.36f;
			break;
		
		case 6:
			return -1266.69f, 6261.75f, -34.17f;
			break;
		
		case 7:
			return 3034.72f, 6550.42f, -35.2f;
			break;
		
		case 8:
			return 1694.53f, 6991.69f, -137.62f;
			break;
		
		case 9:
			return 1233.43f, 7081.15f, -141.72f;
			break;
		
		case 10:
			return -3413.73f, 830.23f, -12.95f;
			break;
		
		case 11:
			return 1422.5f, 6854.67f, -38.2f;
			break;
		
		case 12:
			return -3345.1f, 3547.8f, -59.1f;
			break;
		
		case 13:
			return -3437.93f, 3069.57f, -54.85f;
			break;
		
		case 14:
			return -2909.28f, 4204.32f, -111.62f;
			break;
		
		case 15:
			return -3179.12f, 2151.28f, -31.86f;
			break;
		
		case 16:
			return 4146.09f, 3825.86f, -40.96f;
			break;
		
		case 17:
			return 2716.61f, 6956.91f, -157.17f;
			break;
		
		case 18:
			return 2487.5f, 7001.69f, -143.56f;
			break;
		
		case 19:
			return -3043.23f, -212.16f, -23.48f;
			break;
		
		case 20:
			return -2871.1f, 4268.19f, -152.47f;
			break;
		
		case 21:
			return -777.21f, 6726.71f, -30.89f;
			break;
		
		case 22:
			return -3008.33f, 2877.73f, -27.76f;
			break;
		
		case 23:
			return -1843.12f, -1260.67f, -22.17f;
			break;
		
		case 24:
			return -2591.62f, -470.34f, -30.4f;
			break;
		
		case 25:
			return 3824.99f, 3729.17f, -16.17f;
			break;
		
		case 26:
			return 3885.44f, 3797.19f, -24.26f;
			break;
		
		case 27:
			return 2153.9f, -2826.37f, -50.76f;
			break;
		
		case 28:
			return 1873.5f, -3012.6f, -47f;
			break;
		
		case 29:
			return -2325.06f, -1046.7f, -70.67f;
			break;
	}
	return 0f, 0f, 0f;
}

bool func_11(var uParam0, int iParam1, struct<3> Param2, int iParam3)
{
	int iVar0;
	float fVar1;
	float fVar2;
	
	iVar0 = 0;
	fVar1 = 0f;
	fVar2 = -1f;
	iVar0 = 0;
	while (iVar0 < *iParam1)
	{
		if (!func_12(&(uParam0->f_1), iVar0))
		{
			fVar1 = vdist2(Param2, (iParam1[iVar0 /*11*/])->f_3);
			if (fVar2 == -1f || fVar1 < fVar2)
			{
				*iParam3 = iVar0;
				fVar2 = fVar1;
			}
		}
		iVar0++;
	}
	return *iParam3 != -1;
}

bool func_12(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 64)
	{
		return 0;
	}
	if (iParam1 <= 31)
	{
		return unk_0xCE990E643CD9D0E5(*uParam0, iParam1);
	}
	return unk_0xCE990E643CD9D0E5(uParam0->f_1, (iParam1 - 32));
}

int func_13(int iParam0)
{
	if (func_14(17, 0, 1, 0))
	{
		if (iParam0 == 1)
		{
			unk_0xBE20AB8238688965(&Global_7552, 22);
		}
		else
		{
			unk_0xD2459066EA58CE43(&Global_7552, 22);
		}
		return 1;
	}
	return 0;
}

int func_14(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	if (Global_76833)
	{
		if (((iParam0 != 17 && iParam0 != 3) && iParam0 != 23) && iParam0 != 1)
		{
			return 0;
		}
		if (!unk_0xCE990E643CD9D0E5(Global_4271024, 14))
		{
			if (iParam0 == 17)
			{
				unk_0xBE20AB8238688965(&Global_4271024, 14);
				unk_0xBE20AB8238688965(&Global_4271024, 16);
			}
			if (iParam0 == 3)
			{
				unk_0xBE20AB8238688965(&Global_4271024, 14);
				unk_0xBE20AB8238688965(&Global_4271024, 15);
			}
			if (iParam0 == 23)
			{
				unk_0xBE20AB8238688965(&Global_4271024, 14);
				unk_0xBE20AB8238688965(&Global_4271024, 27);
			}
			if (iParam0 == 1)
			{
				unk_0xBE20AB8238688965(&Global_4271024, 14);
				unk_0xBE20AB8238688965(&Global_4271024, 29);
			}
		}
		if (Global_7558[iParam0 /*15*/].f_9 == 0)
		{
			func_27();
		}
		if (unk_0x7B70881748D166CD(Global_7558[iParam0 /*15*/].f_9) > 0)
		{
			unk_0xD2459066EA58CE43(&Global_4271024, 14);
			unk_0xD2459066EA58CE43(&Global_4271024, 16);
			unk_0xD2459066EA58CE43(&Global_4271024, 15);
			unk_0xD2459066EA58CE43(&Global_4271024, 27);
			unk_0xD2459066EA58CE43(&Global_4271024, 29);
			return 1;
		}
		else
		{
			return 0;
		}
	}
	func_20();
	if (Global_19681.f_1 == 9)
	{
		return 0;
	}
	if (iParam2 == 0)
	{
		if (func_19(0) == 1)
		{
			return 0;
		}
	}
	if (Global_19647 == 1)
	{
		return 0;
	}
	if (Global_19681.f_1 == 7)
	{
		return 0;
	}
	if (iParam1 == 1)
	{
	}
	if (!unk_0x7FD2BDF03806FD9D(Global_19678))
	{
		if (unk_0x7B70881748D166CD(joaat("cellphone_flashhand")) == 0)
		{
			if (Global_19681.f_1 < 4)
			{
				func_18("cellphone_flashhand");
				if (unk_0x7B70881748D166CD(joaat("cellphone_flashhand")) == 0)
				{
					Global_19678 = start_new_script("cellphone_flashhand", 1424);
				}
				unk_0x5F82526B41A5EBCE("cellphone_flashhand");
			}
		}
	}
	while (!Global_19663)
	{
		wait(0);
	}
	func_27();
	func_15();
	if (unk_0x7B70881748D166CD(Global_7558[iParam0 /*15*/].f_9) == 0)
	{
		Global_8157 = 0;
		Global_19681.f_1 = 7;
		func_18(&(Global_7558[iParam0 /*15*/].f_5));
		if (bParam3)
		{
			if (unk_0x7B70881748D166CD(Global_7558[iParam0 /*15*/].f_9) == 0)
			{
				Global_19679 = start_new_script(&(Global_7558[iParam0 /*15*/].f_5), 4000);
			}
		}
		else if (unk_0x7B70881748D166CD(Global_7558[iParam0 /*15*/].f_9) == 0)
		{
			Global_19679 = start_new_script(&(Global_7558[iParam0 /*15*/].f_5), 2552);
		}
		unk_0x5F82526B41A5EBCE(&(Global_7558[iParam0 /*15*/].f_5));
		return 1;
	}
	return 1;
}

void func_15()
{
	if (Global_76833 == 0)
	{
		Global_7558[14 /*15*/].f_4 = -99;
		Global_7558[4 /*15*/].f_4 = -99;
		if (Global_2462245)
		{
			if (func_17(14))
			{
				func_16(2, "CELL_2", 2, "appInternet", 6, 1, 1, 0, 0);
				func_16(14, "CELL_29", 7, "appMPJobListNEW", 12, 1, 1, 0, 0);
			}
			else
			{
				func_16(14, "CELL_29", 2, "appMPJobListNEW", 12, 1, 1, 0, 0);
			}
		}
		else
		{
			func_16(4, "CELL_23", 2, "appChecklist", 39, 1, 1, 0, 0);
		}
	}
}

void func_16(int iParam0, char* sParam1, int iParam2, char* sParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)
{
	StringCopy(&(Global_7558[iParam0 /*15*/]), sParam1, 16);
	Global_7558[iParam0 /*15*/].f_4 = iParam2;
	StringCopy(&(Global_7558[iParam0 /*15*/].f_5), sParam3, 16);
	Global_7558[iParam0 /*15*/].f_9 = unk_0x856D5567211886A2(sParam3);
	Global_7558[iParam0 /*15*/].f_10 = iParam4;
	Global_7558[iParam0 /*15*/].f_11 = iParam5;
	Global_7558[iParam0 /*15*/].f_12 = iParam6;
	Global_7558[iParam0 /*15*/].f_13 = iParam7;
	Global_7558[iParam0 /*15*/].f_14 = iParam8;
	if (Global_7558[iParam0 /*15*/].f_12 == 0)
	{
		Global_7558[iParam0 /*15*/].f_12 = 0;
	}
	if (Global_7558[iParam0 /*15*/].f_13 == 0)
	{
		Global_7558[iParam0 /*15*/].f_13 = 0;
	}
	if (Global_7558[iParam0 /*15*/].f_14 == 0)
	{
		Global_7558[iParam0 /*15*/].f_14 = 0;
	}
}

bool func_17(int iParam0)
{
	return Global_41631 == iParam0;
}

void func_18(char* sParam0)
{
	unk_0xBE9B3870B1B370E3(sParam0);
	while (!unk_0x8DC2EFD1CECAA468(sParam0))
	{
		wait(0);
	}
}

int func_19(int iParam0)
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

void func_20()
{
	if (func_17(14))
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
		Global_19681 = func_21();
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

var func_21()
{
	func_22();
	return Global_111858.f_2359.f_539.f_4321;
}

void func_22()
{
	int iVar0;
	
	if (unk_0xAE06B9E39EBDE049(unk_0x9B0761B4C3EB8BC7()))
	{
		if (func_25(Global_111858.f_2359.f_539.f_4321) != unk_0x36FE6D3220816ADA(unk_0x9B0761B4C3EB8BC7()))
		{
			iVar0 = func_24(unk_0x9B0761B4C3EB8BC7());
			if (func_23(iVar0) && (!func_17(14) || Global_110809))
			{
				if (Global_111858.f_2359.f_539.f_4321 != iVar0 && func_23(Global_111858.f_2359.f_539.f_4321))
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

bool func_23(int iParam0)
{
	return iParam0 < 3;
}

int func_24(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0xAE06B9E39EBDE049(iParam0))
	{
		iVar1 = unk_0x36FE6D3220816ADA(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_25(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_25(int iParam0)
{
	if (func_23(iParam0))
	{
		return func_26(iParam0);
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

var func_26(int iParam0)
{
	return Global_1848[iParam0 /*29*/];
}

void func_27()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0;
	while (iVar0 < 34)
	{
		Global_7558[iVar0 /*15*/].f_4 = -99;
		iVar0++;
	}
	if (Global_76833 == 0)
	{
		iVar1 = 0;
		while (iVar2 < 161)
		{
			if (func_29(iVar2, Global_19681) == 1)
			{
				iVar1 = 1;
			}
			iVar2++;
		}
		func_16(7, "CELL_5", 0, "appEmail", 4, 1, 1, 0, 0);
		func_16(1, "CELL_1", 1, "appTextMessage", 2, 1, 1, 0, 0);
		func_16(4, "CELL_23", 2, "appChecklist", 39, 1, 1, 0, 0);
		if ((Global_41631 == 15 && func_28(0) == 0) && Global_7556 == 0)
		{
			func_16(20, "CELL_32", 3, "appSettings", 43, 1, 1, 0, 0);
			Global_19867 = 0;
			Global_7557 = 255;
		}
		else
		{
			func_16(20, "CELL_32", 3, "appSettings", 43, 1, 1, 0, 0);
			Global_19867 = 1;
			Global_7557 = 42;
		}
		if (iVar1 == 1)
		{
			func_16(0, "CELL_0", 4, "appContacts", 27, 1, 1, 0, 0);
		}
		else
		{
			func_16(0, "CELL_0", 4, "appContacts", 5, 1, 1, 0, 0);
		}
		func_16(10, "CELL_16", 5, "appSettings", 24, 1, 1, 0, 0);
		func_16(3, "CELL_7", 6, "appCamera", 1, 1, 1, 0, 0);
		func_16(2, "CELL_2", 7, "appInternet", 6, 1, 1, 0, 0);
		if (Global_111858.f_14047.f_89 == 1)
		{
			func_16(17, "CELL_28", 8, "appTrackify", 42, 1, 1, 0, 0);
		}
		if (Global_111858.f_14047.f_88 == 1)
		{
			func_16(16, "CELL_25", 0, "appContacts", 40, 2, 1, 0, 0);
		}
		func_16(25, "CELL_14", -99, "appContacts", 17, 2, 1, 0, 0);
		func_16(9, "CELL_13", -99, "appContacts", 13, 2, 1, 0, 0);
		func_16(11, "CELL_14", -99, "appContacts", 8, 2, 1, 0, 0);
		func_16(27, "CELL_15", -99, "appContacts", 17, 2, 1, 0, 0);
		func_16(28, "CELL_15", -99, "appContacts", 17, 2, 1, 0, 0);
		func_16(29, "CELL_15", -99, "appSettings", 17, 2, 1, 0, 0);
		func_16(30, "CELL_15", -99, "appContacts", 17, 2, 1, 0, 0);
		func_16(31, "CELL_15", -99, "appContacts", 17, 2, 1, 0, 0);
		func_16(32, "CELL_15", -99, "appSettings", 17, 2, 1, 0, 0);
	}
	else
	{
		func_16(7, "CELL_5", 0, "appMPEmail", 4, 1, 1, 0, 0);
		func_16(10, "CELL_16", 5, "appSettings", 24, 1, 1, 0, 0);
		func_16(1, "CELL_1", 1, "appTextMessage", 2, 1, 1, 0, 0);
		func_16(3, "CELL_7", 6, "appCamera", 1, 1, 1, 0, 0);
		func_16(2, "CELL_2", 7, "appInternet", 6, 1, 1, 0, 0);
		func_16(14, "CELL_29", 4, "appMPJobListNEW", 12, 1, 1, 0, 0);
		func_16(0, "CELL_0", 2, "appContacts", 5, 1, 1, 0, 0);
		func_16(21, "JIPMP_QJ", 3, "AppJIPMP", 14, 1, 1, 0, 0);
		if (unk_0xCE990E643CD9D0E5(Global_4271024, 4) == 1)
		{
			func_16(17, "CELL_28", 8, "appTrackify", 42, 1, 1, 0, 0);
		}
		func_16(13, "CELL_35", -99, "appMPCopBackup", 39, 1, 1, 0, 0);
		func_16(13, "CELL_20", -99, "appMPCopBackup", 16, 1, 1, 0, 0);
		func_16(15, "CELL_18", -99, "appContacts", 8, 1, 1, 0, 0);
		func_16(9, "CELL_13", -99, "appContacts", 13, 2, 1, 0, 0);
		func_16(5, "CELL_4", -99, "appContacts", 12, 2, 1, 0, 0);
		func_16(23, "CELL_15", 0, "appContacts", 17, 2, 1, 0, 0);
		func_16(24, "CELL_15", 1, "appContacts", 17, 2, 1, 0, 0);
		func_16(25, "CELL_15", 2, "appContacts", 17, 2, 1, 0, 0);
		func_16(26, "CELL_15", 3, "appContacts", 17, 2, 1, 0, 0);
		func_16(27, "CELL_15", 4, "appContacts", 17, 2, 1, 0, 0);
		func_16(28, "CELL_15", 5, "appContacts", 17, 2, 1, 0, 0);
		func_16(29, "CELL_15", 6, "appContacts", 17, 2, 1, 0, 0);
		func_16(30, "CELL_15", 7, "appContacts", 17, 2, 1, 0, 0);
		func_16(31, "CELL_15", 8, "appContacts", 17, 2, 1, 0, 0);
		func_16(32, "CELL_15", 9, "appContacts", 17, 2, 1, 0, 0);
		func_16(33, "CELL_15", 10, "appContacts", 17, 2, 1, 0, 0);
		if (!unk_0xCE990E643CD9D0E5(Global_4271024, 4) == 1)
		{
			if (Global_1573931)
			{
				func_16(23, "CELL_CIRCBREAK", 8, "AppVLSI", 54, 1, 1, 0, 0);
			}
			else if (unk_0xCE990E643CD9D0E5(Global_4271024, 20) == 1)
			{
				func_16(23, "CELL_SIGHTS", 8, "AppSettings", 59, 1, 1, 0, 0);
			}
			else if (unk_0xCE990E643CD9D0E5(Global_4271024, 22) == 1)
			{
				func_16(23, "CELL_EXTRACT", 8, "AppExtraction", 58, 1, 1, 0, 0);
			}
			else if (unk_0xCE990E643CD9D0E5(Global_4271024, 26) == 1)
			{
				func_16(23, "CELL_SECHACK", 8, "AppSecuroHack", 57, 1, 1, 0, 0);
			}
		}
		if ((((unk_0xCE990E643CD9D0E5(Global_4271024, 4) == 0 && Global_1573931 == 0) && unk_0xCE990E643CD9D0E5(Global_4271024, 20) == 0) && unk_0xCE990E643CD9D0E5(Global_4271024, 22) == 0) && unk_0xCE990E643CD9D0E5(Global_4271024, 26) == 0)
		{
			func_16(23, "CELL_BOSSAGE", 8, "appMPBossAgency", 57, 1, 1, 0, 0);
		}
	}
}

bool func_28(bool bParam0)
{
	if (!bParam0 && unk_0x7B70881748D166CD(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return unk_0xCE990E643CD9D0E5(Global_77081, 0);
}

int func_29(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 4)
	{
		return 0;
	}
	return Global_1848[iParam0 /*29*/].f_19[iParam1];
}

void func_30()
{
	func_53(3, 250000);
	func_46(299, 0, 0);
	func_33(20, 1);
	func_31();
	func_6(3);
}

void func_31()
{
	int iVar0;
	
	iVar0 = func_32(65);
	Global_2414424[iVar0 /*83*/] = 65;
	StringCopy(&(Global_2414424[iVar0 /*83*/].f_18[0 /*16*/]), "", 64);
}

int func_32(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 19;
	iVar1 = 0;
	while (iVar1 <= 19)
	{
		if (Global_2414424[iVar1 /*83*/] == iParam0)
		{
			iVar0 = iVar1;
			iVar1 = 20;
		}
		else if (Global_2414424[iVar1 /*83*/] == 0)
		{
			iVar0 = iVar1;
			iVar1 = 20;
		}
		iVar1++;
	}
	return iVar0;
}

int func_33(int iParam0, int iParam1)
{
	if (iParam0 >= 78)
	{
		return 0;
	}
	return func_34(iParam0, iParam1);
}

int func_34(int iParam0, int iParam1)
{
	if (func_17(14) && !func_45(iParam0))
	{
		return 0;
	}
	if (unk_0x027BA2E902FAC118(iParam0) && iParam1 == 1)
	{
		return 0;
	}
	if (Global_31217 != 0 && !Global_76833)
	{
		return 0;
	}
	if (func_44(&Global_4271324))
	{
		if (func_42(&Global_4271324, iParam0))
		{
			return 0;
		}
		if (func_35(&Global_4271324, iParam0))
		{
			return 1;
		}
	}
	else
	{
		if (!unk_0x1C382E0E92F57545(iParam0))
		{
			return 0;
		}
		if (unk_0x027BA2E902FAC118(iParam0))
		{
			return 1;
		}
		return 0;
	}
	return 0;
}

int func_35(var uParam0, int iParam1)
{
	int iVar0;
	var uVar1[78];
	
	if (unk_0x027BA2E902FAC118(iParam1))
	{
		return 0;
	}
	if (func_17(14) && !func_45(iParam1))
	{
		return 0;
	}
	if (func_42(uParam0, iParam1))
	{
		return 0;
	}
	if (func_41(uParam0) < 0f)
	{
		func_40(uParam0, 0);
	}
	func_38(&uVar1);
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < (*uParam0 - 1))
	{
		uVar1[iVar0 + 1] = (*uParam0)[iVar0];
		iVar0++;
	}
	func_36(&uVar1, iParam1);
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		(*uParam0)[iVar0] = uVar1[iVar0];
		iVar0++;
	}
	return 1;
}

int func_36(var uParam0, int iParam1)
{
	int iVar0;
	
	if (unk_0x027BA2E902FAC118(iParam1))
	{
		return 0;
	}
	if (func_17(14) && !func_45(iParam1))
	{
		return 0;
	}
	if (func_42(uParam0, iParam1))
	{
		return 0;
	}
	if (func_41(uParam0) < 0f)
	{
		func_40(uParam0, 0);
	}
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (func_37(uParam0, iVar0))
		{
			(*uParam0)[iVar0] = iParam1;
			return 1;
		}
		iVar0++;
	}
	return 0;
}

bool func_37(var uParam0, int iParam1)
{
	return (*uParam0)[iParam1] == 78;
}

void func_38(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		func_39(uParam0, iVar0);
		iVar0++;
	}
	func_40(uParam0, (Global_4271323 - 0.5f));
}

void func_39(var uParam0, int iParam1)
{
	(*uParam0)[iParam1] = 78;
}

void func_40(var uParam0, float fParam1)
{
	if (fParam1 == 0f)
	{
		uParam0->f_80 = 0f;
	}
	else
	{
		uParam0->f_80 = fParam1;
	}
}

float func_41(var uParam0)
{
	return uParam0->f_80;
}

bool func_42(var uParam0, int iParam1)
{
	return func_43(uParam0, iParam1) != -1;
}

int func_43(var uParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if ((*uParam0)[iVar0] == iParam1)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

bool func_44(var uParam0)
{
	return uParam0->f_79 == 1;
}

int func_45(int iParam0)
{
	switch (iParam0)
	{
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
		
		default:
	}
	return 0;
}

void func_46(int iParam0, int iParam1, int iParam2)
{
	bool bVar0;
	
	if (iParam0 < 0)
	{
	}
	if (iParam0 == 321 || iParam0 > 321)
	{
	}
	else
	{
		func_51((891 + iParam0), 1, -1, 1);
	}
	bVar0 = true;
	if (Global_111858.f_10190[iParam0 /*12*/].f_5 == 1)
	{
		if (Global_111858.f_10190[iParam0 /*12*/].f_6 == 11 || Global_111858.f_10190[iParam0 /*12*/].f_6 == 12)
		{
			bVar0 = false;
		}
	}
	else
	{
		Global_111858.f_10190[iParam0 /*12*/].f_5 = 1;
		Global_111858.f_10190[iParam0 /*12*/].f_10 = iParam1;
		Global_111858.f_10190[iParam0 /*12*/].f_11 = iParam2;
		if (iParam0 == 287)
		{
			unk_0xFB6CC2C6970D6917(joaat("NUM_HIDDEN_PACKAGES_0"), 50, 0);
		}
		if (iParam0 == 286)
		{
			unk_0xFB6CC2C6970D6917(joaat("NUM_HIDDEN_PACKAGES_1"), 50, 0);
		}
		if (iParam0 == 299)
		{
			unk_0xFB6CC2C6970D6917(joaat("NUM_HIDDEN_PACKAGES_3"), 50, 0);
		}
	}
	if (bVar0)
	{
		func_47();
	}
}

void func_47()
{
	int iVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	float fVar7;
	float fVar8;
	int iVar9;
	
	iVar0 = 0;
	Global_111594 = 0;
	Global_111595 = 0;
	Global_111596 = 0;
	Global_111597 = 0;
	Global_111598 = 0;
	Global_111599 = 0;
	Global_111600 = 0;
	fVar1 = 0f;
	fVar2 = 0f;
	fVar3 = 0f;
	fVar4 = 0f;
	fVar5 = 0f;
	fVar6 = 0f;
	fVar7 = 0f;
	fVar8 = Global_111858.f_10190.f_3853;
	Global_111858.f_10190.f_3853 = 0f;
	while (iVar0 < 321)
	{
		if (Global_111858.f_10190[iVar0 /*12*/].f_5 == 1)
		{
			switch (Global_111858.f_10190[iVar0 /*12*/].f_6)
			{
				case 1:
					Global_111594++;
					fVar1 = (fVar1 + Global_111858.f_10190[iVar0 /*12*/].f_4);
					break;
				
				case 3:
					Global_111595++;
					fVar2 = (fVar2 + Global_111858.f_10190[iVar0 /*12*/].f_4);
					break;
				
				case 5:
					Global_111596++;
					fVar3 = (fVar3 + Global_111858.f_10190[iVar0 /*12*/].f_4);
					break;
				
				case 7:
					Global_111597++;
					fVar4 = (fVar4 + Global_111858.f_10190[iVar0 /*12*/].f_4);
					break;
				
				case 9:
					Global_111598++;
					fVar5 = (fVar5 + (Global_111858.f_10190[iVar0 /*12*/].f_4 * 4f));
					break;
				
				case 11:
					Global_111599++;
					fVar6 = (fVar6 + Global_111858.f_10190[iVar0 /*12*/].f_4);
					break;
				
				case 13:
					Global_111600++;
					fVar7 = (fVar7 + Global_111858.f_10190[iVar0 /*12*/].f_4);
					break;
				
				default:
					break;
				}
		}
		iVar0++;
	}
	if (Global_111577 > 0)
	{
		if (Global_111594 == Global_111577)
		{
			fVar1 = 55f;
		}
	}
	if (Global_111578 > 0)
	{
		if (Global_111595 == Global_111578)
		{
			fVar2 = 10f;
		}
	}
	if (Global_111579 > 0)
	{
		if (Global_111596 == Global_111579)
		{
			fVar3 = 0f;
		}
	}
	if (Global_111580 > 0)
	{
		if (Global_111597 == Global_111580)
		{
			fVar4 = 10f;
		}
	}
	if (Global_111581 > 0)
	{
		if (((Global_111598 == Global_111581 || (Global_111581 * 10 / Global_111598) < 41) || Global_111598 > Global_111584) || Global_111598 == Global_111584)
		{
			if (!unk_0xCE990E643CD9D0E5(Global_111858.f_10190.f_3856, 14))
			{
				if (Global_111598 == Global_111581)
				{
					unk_0xFB6CC2C6970D6917(joaat("NUM_RNDEVENTS_COMPLETED"), Global_111581, 0);
					unk_0xBE20AB8238688965(&(Global_111858.f_10190.f_3856), 14);
				}
			}
			fVar5 = 5f;
		}
	}
	if (Global_111582 > 0)
	{
		if (Global_111599 == Global_111582)
		{
			fVar6 = 15f;
		}
	}
	if (Global_111583 > 0)
	{
		if (Global_111600 == Global_111583)
		{
			fVar7 = 5f;
		}
	}
	Global_111858.f_10190.f_3853 = ((((((fVar1 + fVar2) + fVar3) + fVar4) + fVar5) + fVar6) + fVar7);
	if (Global_111598 > Global_111584 || Global_111598 == Global_111584)
	{
		iVar9 = Global_111584;
	}
	else
	{
		iVar9 = Global_111598;
	}
	unk_0x6000E4684CB4330B(joaat("NUM_MISSIONS_COMPLETED"), Global_111594, 1);
	unk_0x6000E4684CB4330B(joaat("NUM_MISSIONS_AVAILABLE"), Global_111577, 1);
	unk_0x6000E4684CB4330B(joaat("NUM_MINIGAMES_COMPLETED"), Global_111595, 1);
	unk_0x6000E4684CB4330B(joaat("NUM_MINIGAMES_AVAILABLE"), Global_111578, 1);
	unk_0x6000E4684CB4330B(joaat("NUM_ODDJOBS_COMPLETED"), Global_111596, 1);
	unk_0x6000E4684CB4330B(joaat("NUM_ODDJOBS_AVAILABLE"), Global_111579, 1);
	unk_0x6000E4684CB4330B(joaat("NUM_RNDPEOPLE_COMPLETED"), Global_111597, 1);
	unk_0x6000E4684CB4330B(joaat("NUM_RNDPEOPLE_AVAILABLE"), Global_111580, 1);
	unk_0x6000E4684CB4330B(joaat("NUM_RNDEVENTS_COMPLETED"), iVar9, 1);
	unk_0x6000E4684CB4330B(joaat("NUM_RNDEVENTS_AVAILABLE"), Global_111584, 1);
	unk_0x6000E4684CB4330B(joaat("NUM_MISC_COMPLETED"), (Global_111600 + Global_111599), 1);
	unk_0x6000E4684CB4330B(joaat("NUM_MISC_AVAILABLE"), (Global_111583 + Global_111582), 1);
	Global_111601 = (Global_111594 * 100 / Global_111577);
	Global_111603 = ((Global_111596 + Global_111595) * 100 / (Global_111579 + Global_111578));
	Global_111602 = ((Global_111597 + iVar9) * 100 / (Global_111580 + Global_111584));
	Global_111604 = ((Global_111599 + Global_111600) * 100 / (Global_111582 + Global_111583));
	unk_0x3C2CA88D6219BB12(joaat("TOTAL_PROGRESS_MADE"), Global_111858.f_10190.f_3853, 1);
	unk_0x6000E4684CB4330B(joaat("PERCENT_STORY_MISSIONS"), Global_111601, 1);
	unk_0x6000E4684CB4330B(joaat("PERCENT_AMBIENT_MISSIONS"), Global_111602, 1);
	unk_0x6000E4684CB4330B(joaat("PERCENT_ODDJOBS"), Global_111603, 1);
	if (fVar8 > 0f && floor(fVar8) < floor(Global_111858.f_10190.f_3853))
	{
		func_50(13, floor(Global_111858.f_10190.f_3853));
	}
	if (!unk_0xC4A02490EB1F450B())
	{
		if (!Global_76833)
		{
			if (func_49() == 2 == 0 && !unk_0x25DDB354A40FFCDB())
			{
				if (unk_0x70E5C9630A26FB40())
				{
					Global_111592 = 0;
				}
				if (!Global_61717)
				{
					func_48();
				}
			}
		}
	}
}

int func_48()
{
	if (func_28(0))
	{
		return 0;
	}
	if (Global_98994.f_8)
	{
		if (Global_98994.f_10 > 0)
		{
			return 0;
		}
	}
	else if (Global_98994.f_10 > 1)
	{
		return 0;
	}
	Global_98994.f_10++;
	return 1;
}

int func_49()
{
	return Global_30968;
}

int func_50(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam0 < 0)
	{
		return 0;
	}
	if (iParam0 > 78)
	{
		return 0;
	}
	if (iParam1 <= 0 || iParam1 > 100)
	{
		return 0;
	}
	iVar0 = unk_0x76B47D2BF8F31200(iParam0);
	if (iParam1 > iVar0)
	{
		return unk_0xD4563E24351CCDF9(iParam0, iParam1);
	}
	return 0;
}

int func_51(int iParam0, int iParam1, int iParam2, int iParam3)
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
		iParam2 = func_52();
	}
	iVar0 = 0;
	if (iParam0 >= 0 && iParam0 < 192)
	{
		iVar2 = unk_0x43BE40E27DB6DC2E((iParam0 - 0), 0, 1, iParam2);
		iVar1 = ((iParam0 - 0) - unk_0x12730A13C85FC896((iParam0 - 0)) * 64);
		iVar0 = unk_0xC06DB57B81E2C02B(iVar2, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 192 && iParam0 < 384)
	{
		iVar3 = unk_0x43BE40E27DB6DC2E((iParam0 - 192), 1, 1, iParam2);
		iVar1 = ((iParam0 - 192) - unk_0x12730A13C85FC896((iParam0 - 192)) * 64);
		iVar0 = unk_0xC06DB57B81E2C02B(iVar3, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 513 && iParam0 < 705)
	{
		iVar4 = unk_0x43BE40E27DB6DC2E((iParam0 - 513), 0, 0, 0);
		iVar1 = ((iParam0 - 513) - unk_0x12730A13C85FC896((iParam0 - 513)) * 64);
		iVar0 = unk_0xC06DB57B81E2C02B(iVar4, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 705 && iParam0 < 1281)
	{
		iVar5 = unk_0x43BE40E27DB6DC2E((iParam0 - 705), 1, 0, 0);
		iVar1 = ((iParam0 - 705) - unk_0x12730A13C85FC896((iParam0 - 705)) * 64);
		iVar0 = unk_0xC06DB57B81E2C02B(iVar5, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 3111 && iParam0 < 3879)
	{
		iVar6 = unk_0x840F9A9E6D216561((iParam0 - 3111), 0, 1, iParam2);
		iVar1 = ((iParam0 - 3111) - unk_0x12730A13C85FC896((iParam0 - 3111)) * 64);
		iVar0 = unk_0xC06DB57B81E2C02B(iVar6, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 2919 && iParam0 < 3111)
	{
		iVar7 = unk_0x840F9A9E6D216561((iParam0 - 2919), 0, 0, 0);
		iVar1 = ((iParam0 - 2919) - unk_0x12730A13C85FC896((iParam0 - 2919)) * 64);
		iVar0 = unk_0xC06DB57B81E2C02B(iVar7, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 4207 && iParam0 < 4335)
	{
		iVar8 = unk_0x4B2E4855CB2B4FAA((iParam0 - 4207), 0, 1, iParam2, "_NGPSTAT_BOOL");
		iVar1 = ((iParam0 - 4207) - unk_0x12730A13C85FC896((iParam0 - 4207)) * 64);
		iVar0 = unk_0xC06DB57B81E2C02B(iVar8, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 4335 && iParam0 < 4399)
	{
		iVar9 = unk_0x4B2E4855CB2B4FAA((iParam0 - 4335), 0, 0, 0, "_NGPSTAT_BOOL");
		iVar1 = ((iParam0 - 4335) - unk_0x12730A13C85FC896((iParam0 - 4335)) * 64);
		iVar0 = unk_0xC06DB57B81E2C02B(iVar9, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 6029 && iParam0 < 6413)
	{
		iVar10 = unk_0x4B2E4855CB2B4FAA((iParam0 - 6029), 0, 1, iParam2, "_NGTATPSTAT_BOOL");
		iVar1 = ((iParam0 - 6029) - unk_0x12730A13C85FC896((iParam0 - 6029)) * 64);
		iVar0 = unk_0xC06DB57B81E2C02B(iVar10, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 7385 && iParam0 < 7641)
	{
		iVar11 = unk_0x4B2E4855CB2B4FAA((iParam0 - 7385), 0, 1, iParam2, "_NGDLCPSTAT_BOOL");
		iVar1 = ((iParam0 - 7385) - unk_0x12730A13C85FC896((iParam0 - 7385)) * 64);
		iVar0 = unk_0xC06DB57B81E2C02B(iVar11, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 7321 && iParam0 < 7385)
	{
		iVar12 = unk_0x4B2E4855CB2B4FAA((iParam0 - 7321), 0, 0, 0, "_NGDLCPSTAT_BOOL");
		iVar1 = ((iParam0 - 7321) - unk_0x12730A13C85FC896((iParam0 - 7321)) * 64);
		iVar0 = unk_0xC06DB57B81E2C02B(iVar12, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 9361 && iParam0 < 9553)
	{
		iVar13 = unk_0x4B2E4855CB2B4FAA((iParam0 - 9361), 0, 1, iParam2, "_DLCBIKEPSTAT_BOOL");
		iVar1 = ((iParam0 - 9361) - unk_0x12730A13C85FC896((iParam0 - 9361)) * 64);
		iVar0 = unk_0xC06DB57B81E2C02B(iVar13, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 15369 && iParam0 < 15561)
	{
		iVar14 = unk_0x4B2E4855CB2B4FAA((iParam0 - 15369), 0, 1, iParam2, "_DLCGUNPSTAT_BOOL");
		iVar1 = ((iParam0 - 15369) - unk_0x12730A13C85FC896((iParam0 - 15369)) * 64);
		iVar0 = unk_0xC06DB57B81E2C02B(iVar14, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 15562 && iParam0 < 15946)
	{
		iVar15 = unk_0x4B2E4855CB2B4FAA((iParam0 - 15562), 0, 1, iParam2, "_GUNTATPSTAT_BOOL");
		iVar1 = ((iParam0 - 15562) - unk_0x12730A13C85FC896((iParam0 - 15562)) * 64);
		iVar0 = unk_0xC06DB57B81E2C02B(iVar15, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 15946 && iParam0 < 16010)
	{
		iVar16 = unk_0x4B2E4855CB2B4FAA((iParam0 - 15946), 0, 1, iParam2, "_DLCSMUGCHARPSTAT_BOOL");
		iVar1 = ((iParam0 - 15946) - unk_0x12730A13C85FC896((iParam0 - 15946)) * 64);
		iVar0 = unk_0xC06DB57B81E2C02B(iVar16, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 18098 && iParam0 < 18162)
	{
		iVar17 = unk_0x4B2E4855CB2B4FAA((iParam0 - 18098), 0, 1, iParam2, "_GANGOPSPSTAT_BOOL");
		iVar1 = ((iParam0 - 18098) - unk_0x12730A13C85FC896((iParam0 - 18098)) * 64);
		iVar0 = unk_0xC06DB57B81E2C02B(iVar17, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 22066 && iParam0 < 22194)
	{
		iVar18 = unk_0x4B2E4855CB2B4FAA((iParam0 - 22066), 0, 1, iParam2, "_BUSINESSBATPSTAT_BOOL");
		iVar1 = ((iParam0 - 22066) - unk_0x12730A13C85FC896((iParam0 - 22066)) * 64);
		iVar0 = unk_0xC06DB57B81E2C02B(iVar18, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 24962 && iParam0 < 25538)
	{
		iVar19 = unk_0x4B2E4855CB2B4FAA((iParam0 - 24962), 0, 1, iParam2, "_ARENAWARSPSTAT_BOOL");
		iVar1 = ((iParam0 - 24962) - unk_0x12730A13C85FC896((iParam0 - 24962)) * 64);
		iVar0 = unk_0xC06DB57B81E2C02B(iVar19, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 26810 && iParam0 < 27258)
	{
		iVar20 = unk_0x4B2E4855CB2B4FAA((iParam0 - 26810), 0, 1, iParam2, "_CASINOPSTAT_BOOL");
		iVar1 = ((iParam0 - 26810) - unk_0x12730A13C85FC896((iParam0 - 26810)) * 64);
		iVar0 = unk_0xC06DB57B81E2C02B(iVar20, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 28098 && iParam0 < 28354)
	{
		iVar21 = unk_0x4B2E4855CB2B4FAA((iParam0 - 28098), 0, 1, iParam2, "_CASINOHSTPSTAT_BOOL");
		iVar1 = ((iParam0 - 28098) - unk_0x12730A13C85FC896((iParam0 - 28098)) * 64);
		iVar0 = unk_0xC06DB57B81E2C02B(iVar21, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 28355 && iParam0 < 28483)
	{
		iVar22 = unk_0x4B2E4855CB2B4FAA((iParam0 - 28355), 0, 1, iParam2, "_HEIST3TATTOOSTAT_BOOL");
		iVar1 = ((iParam0 - 28355) - unk_0x12730A13C85FC896((iParam0 - 28355)) * 64);
		iVar0 = unk_0xC06DB57B81E2C02B(iVar22, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 30227 && iParam0 < 30355)
	{
		iVar23 = unk_0x4B2E4855CB2B4FAA((iParam0 - 30227), 0, 1, iParam2, "_SU20PSTAT_BOOL");
		iVar1 = ((iParam0 - 30227) - unk_0x12730A13C85FC896((iParam0 - 30227)) * 64);
		iVar0 = unk_0xC06DB57B81E2C02B(iVar23, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 30355 && iParam0 < 30483)
	{
		iVar24 = unk_0x4B2E4855CB2B4FAA((iParam0 - 30355), 0, 1, iParam2, "_SU20TATTOOSTAT_BOOL");
		iVar1 = ((iParam0 - 30355) - unk_0x12730A13C85FC896((iParam0 - 30355)) * 64);
		iVar0 = unk_0xC06DB57B81E2C02B(iVar24, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 30515 && iParam0 < 30707)
	{
		iVar25 = unk_0x4B2E4855CB2B4FAA((iParam0 - 30515), 0, 1, iParam2, "_HISLANDPSTAT_BOOL");
		iVar1 = ((iParam0 - 30515) - unk_0x12730A13C85FC896((iParam0 - 30515)) * 64);
		iVar0 = unk_0xC06DB57B81E2C02B(iVar25, iParam1, iVar1, iParam3);
	}
	return iVar0;
}

int func_52()
{
	return Global_1312763;
}

void func_53(int iParam0, int iParam1)
{
	int iVar0;
	
	func_55(Global_111858.f_24900[iParam0 /*4*/], func_75(iParam0), iParam1, 0, 0);
	switch (iParam0)
	{
		case 3:
			Global_111858.f_24900.f_69 = (Global_111858.f_24900.f_69 + iParam1);
			break;
		
		case 2:
			Global_111858.f_24900.f_70 = (Global_111858.f_24900.f_70 + iParam1);
			break;
		
		case 0:
			Global_111858.f_24900.f_71 = (Global_111858.f_24900.f_71 + iParam1);
			break;
	}
	unk_0xD2F202166691EDB2(func_54(iParam0, 1), &iVar0, -1);
	iVar0 = (iVar0 + iParam1);
	unk_0x6000E4684CB4330B(func_54(iParam0, 1), iVar0, 1);
}

int func_54(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					return joaat("PROP_BOUGHT_TOWI");
					break;
				
				case 1:
					return joaat("PROP_EARNED_TOWI");
					break;
			}
			break;
		
		case 1:
			switch (iParam1)
			{
				case 0:
					return joaat("PROP_BOUGHT_TAXI");
					break;
				
				case 1:
					return joaat("PROP_EARNED_TAXI");
					break;
				
				case 2:
					return joaat("PROP_MISSIONS_TAXI");
					break;
			}
			break;
		
		case 2:
			switch (iParam1)
			{
				case 0:
					return joaat("PROP_BOUGHT_TRAF");
					break;
				
				case 1:
					return joaat("PROP_EARNED_TRAF");
					break;
			}
			break;
		
		case 3:
			switch (iParam1)
			{
				case 0:
					return joaat("PROP_BOUGHT_SOCO");
					break;
				
				case 1:
					return joaat("PROP_EARNED_SOCO");
					break;
			}
			break;
		
		case 4:
			switch (iParam1)
			{
				case 0:
					return joaat("PROP_BOUGHT_CMSH");
					break;
				
				case 1:
					return joaat("PROP_EARNED_CMSH");
					break;
			}
			break;
		
		case 5:
			switch (iParam1)
			{
				case 0:
					return joaat("PROP_BOUGHT_CINV");
					break;
				
				case 1:
					return joaat("PROP_EARNED_CINV");
					break;
				
				case 2:
					return joaat("PROP_MISSIONS_CINV");
					break;
			}
			break;
		
		case 6:
			switch (iParam1)
			{
				case 0:
					return joaat("PROP_BOUGHT_CIND");
					break;
				
				case 1:
					return joaat("PROP_EARNED_CIND");
					break;
				
				case 2:
					return joaat("PROP_MISSIONS_CIND");
					break;
			}
			break;
		
		case 7:
			switch (iParam1)
			{
				case 0:
					return joaat("PROP_BOUGHT_CINM");
					break;
				
				case 1:
					return joaat("PROP_EARNED_CINM");
					break;
				
				case 2:
					return joaat("PROP_MISSIONS_CINM");
					break;
			}
			break;
		
		case 8:
			switch (iParam1)
			{
				case 0:
					return joaat("PROP_BOUGHT_GOLF");
					break;
				
				case 1:
					return joaat("PROP_EARNED_GOLF");
					break;
			}
			break;
		
		case 9:
			switch (iParam1)
			{
				case 0:
					return joaat("PROP_BOUGHT_CSCR");
					break;
				
				case 1:
					return joaat("PROP_EARNED_CSCR");
					break;
				
				case 2:
					return joaat("PROP_MISSIONS_CSCR");
					break;
			}
			break;
		
		case 10:
			switch (iParam1)
			{
				case 0:
					return joaat("PROP_BOUGHT_WEED");
					break;
				
				case 1:
					return joaat("PROP_EARNED_WEED");
					break;
				
				case 2:
					return joaat("PROP_MISSIONS_WEED");
					break;
			}
			break;
		
		case 11:
			switch (iParam1)
			{
				case 0:
					return joaat("PROP_BOUGHT_BARTE");
					break;
				
				case 1:
					return joaat("PROP_EARNED_BARTE");
					break;
				
				case 2:
					return joaat("PROP_MISSIONS_BARTE");
					break;
			}
			break;
		
		case 12:
			switch (iParam1)
			{
				case 0:
					return joaat("PROP_BOUGHT_BARPI");
					break;
				
				case 1:
					return joaat("PROP_EARNED_BARPI");
					break;
				
				case 2:
					return joaat("PROP_MISSIONS_BARPI");
					break;
			}
			break;
		
		case 13:
			switch (iParam1)
			{
				case 0:
					return joaat("PROP_BOUGHT_BARHE");
					break;
				
				case 1:
					return joaat("PROP_EARNED_BARHE");
					break;
				
				case 2:
					return joaat("PROP_MISSIONS_BARHE");
					break;
			}
			break;
		
		case 14:
			switch (iParam1)
			{
				case 0:
					return joaat("PROP_BOUGHT_BARHO");
					break;
				
				case 1:
					return joaat("PROP_EARNED_BARHO");
					break;
				
				case 2:
					return joaat("PROP_MISSIONS_BARHO");
					break;
			}
			break;
		
		case 15:
			switch (iParam1)
			{
				case 0:
					return joaat("PROP_BOUGHT_STRIP");
					break;
				
				case 1:
					return joaat("PROP_EARNED_STRIP");
					break;
			}
			break;
	}
	return joaat("PROP_BOUGHT_TOWI");
}

void func_55(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	int iVar1;
	
	if (func_74(iParam0) == 3)
	{
		return;
	}
	if (func_74(iParam0) == 4)
	{
		return;
	}
	func_56(func_74(iParam0), 1, iParam1, iParam2, 0);
	if (bParam3)
	{
		iVar0 = 0;
		if (bParam4)
		{
			switch (iParam0)
			{
				case 0:
					iVar1 = joaat("SP0_MONEY_MADE_FROM_RANDOM_PEDS");
					break;
				
				case 1:
					iVar1 = joaat("SP1_MONEY_MADE_FROM_RANDOM_PEDS");
					break;
				
				case 2:
					iVar1 = joaat("SP2_MONEY_MADE_FROM_RANDOM_PEDS");
					break;
				
				default:
					return;
			}
		}
		else
		{
			switch (iParam0)
			{
				case 0:
					iVar1 = joaat("SP0_MONEY_MADE_FROM_MISSIONS");
					break;
				
				case 1:
					iVar1 = joaat("SP1_MONEY_MADE_FROM_MISSIONS");
					break;
				
				case 2:
					iVar1 = joaat("SP2_MONEY_MADE_FROM_MISSIONS");
					break;
				
				default:
					return;
				}
		}
		unk_0xD2F202166691EDB2(iVar1, &iVar0, -1);
		iVar0 = (iVar0 + iParam2);
		unk_0x6000E4684CB4330B(iVar1, iVar0, 1);
	}
}

int func_56(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	float fVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	func_73();
	if (iParam3 < 1)
	{
		return 0;
	}
	fVar0 = 1f;
	switch (iParam1)
	{
		case 0:
			switch (iParam0)
			{
				case 0:
					func_72(99, 1);
					func_71(joaat("SP0_MONEY_TOTAL_SPENT"), iParam3);
					break;
				
				case 1:
					func_71(joaat("SP1_MONEY_TOTAL_SPENT"), iParam3);
					break;
				
				case 2:
					func_71(joaat("SP2_MONEY_TOTAL_SPENT"), iParam3);
					break;
			}
			func_70(0);
			switch (iParam2)
			{
				case 127:
				case 129:
				case 125:
				case 126:
				case 128:
					if (func_65(5))
					{
						fVar0 = 0.9f;
						iVar1 = 5;
					}
					break;
				
				case 63:
				case 64:
				case 65:
				case 66:
				case 67:
				case 68:
					switch (iParam0)
					{
						case 0:
							func_71(joaat("SP0_MONEY_SPENT_ON_TATTOOS"), iParam3);
							break;
						
						case 1:
							func_71(joaat("SP1_MONEY_SPENT_ON_TATTOOS"), iParam3);
							break;
						
						case 2:
							func_71(joaat("SP2_MONEY_SPENT_ON_TATTOOS"), iParam3);
							break;
					}
					if (func_65(1))
					{
						fVar0 = 0f;
						iVar1 = 1;
					}
					break;
				
				case 21:
					switch (iParam0)
					{
						case 0:
							func_71(joaat("SP0_MONEY_SPENT_ON_TAXIS"), iParam3);
							break;
						
						case 1:
							func_71(joaat("SP1_MONEY_SPENT_ON_TAXIS"), iParam3);
							break;
						
						case 2:
							func_71(joaat("SP2_MONEY_SPENT_ON_TAXIS"), iParam3);
							break;
					}
					break;
				
				case 25:
					switch (iParam0)
					{
						case 0:
							func_71(joaat("SP0_MONEY_SPENT_IN_STRIP_CLUBS"), iParam3);
							break;
						
						case 1:
							func_71(joaat("SP1_MONEY_SPENT_IN_STRIP_CLUBS"), iParam3);
							break;
						
						case 2:
							func_71(joaat("SP2_MONEY_SPENT_IN_STRIP_CLUBS"), iParam3);
							break;
					}
					break;
				
				case 99:
				case 100:
				case 101:
				case 102:
				case 104:
				case 105:
				case 106:
				case 107:
				case 108:
				case 109:
				case 110:
				case 111:
				case 112:
				case 113:
					switch (iParam0)
					{
						case 0:
							func_71(joaat("SP0_MONEY_SPENT_PROPERTY"), iParam3);
							break;
						
						case 1:
							func_71(joaat("SP1_MONEY_SPENT_PROPERTY"), iParam3);
							break;
						
						case 2:
							func_71(joaat("SP2_MONEY_SPENT_PROPERTY"), iParam3);
							break;
					}
					break;
				
				default:
					switch (unk_0x02406178CDC27728())
					{
						case joaat("clothes_shop_sp"):
							switch (iParam0)
							{
								case 0:
									func_71(joaat("SP0_MONEY_SPENT_IN_CLOTHES"), iParam3);
									break;
								
								case 1:
									func_71(joaat("SP1_MONEY_SPENT_IN_CLOTHES"), iParam3);
									break;
								
								case 2:
									func_71(joaat("SP2_MONEY_SPENT_IN_CLOTHES"), iParam3);
									break;
							}
							break;
						
						case joaat("hairdo_shop_sp"):
							switch (iParam0)
							{
								case 0:
									func_71(joaat("SP0_MONEY_SPENT_ON_HAIRDOS"), iParam3);
									break;
								
								case 1:
									func_71(joaat("SP1_MONEY_SPENT_ON_HAIRDOS"), iParam3);
									break;
								
								case 2:
									func_71(joaat("SP2_MONEY_SPENT_ON_HAIRDOS"), iParam3);
									break;
							}
							if (func_65(0))
							{
								fVar0 = 0f;
								iVar1 = 0;
							}
							break;
						
						case joaat("gunclub_shop"):
							switch (iParam0)
							{
								case 0:
									func_71(joaat("SP0_MONEY_SPENT_IN_BUYING_GUNS"), iParam3);
									break;
								
								case 1:
									func_71(joaat("SP1_MONEY_SPENT_IN_BUYING_GUNS"), iParam3);
									break;
								
								case 2:
									func_71(joaat("SP2_MONEY_SPENT_IN_BUYING_GUNS"), iParam3);
									break;
							}
							break;
						
						case joaat("carmod_shop"):
							switch (iParam0)
							{
								case 0:
									func_71(joaat("SP0_MONEY_SPENT_CAR_MODS"), iParam3);
									break;
								
								case 1:
									func_71(joaat("SP1_MONEY_SPENT_CAR_MODS"), iParam3);
									break;
								
								case 2:
									func_71(joaat("SP2_MONEY_SPENT_CAR_MODS"), iParam3);
									break;
							}
							func_64(iParam3);
							break;
					}
					break;
			}
			break;
		
		case 1:
			switch (iParam0)
			{
				case 0:
					func_72(95, iParam3);
					break;
				
				case 1:
					func_72(97, iParam3);
					break;
				
				case 2:
					func_72(96, iParam3);
					break;
			}
			func_72(98, iParam3);
			break;
	}
	iVar2 = iParam0;
	iParam3 = floor((fVar0 * to_float(iParam3)));
	iVar3 = 0;
	iVar4 = iParam3;
	if (fVar0 == 0f)
	{
		func_59(iVar1);
		return 1;
	}
	else if (fVar0 != 1f)
	{
		func_59(iVar1);
	}
	iVar5 = (Global_58891[iVar2] + iParam3);
	switch (iParam1)
	{
		case 1:
			if (Global_58891[iVar2] >= 0 && iParam3 > 0)
			{
				if (iVar5 <= 0)
				{
					Global_58891[iVar2] = 2147483647;
				}
				else
				{
					Global_58891[iVar2] = (Global_58891[iVar2] + iParam3);
				}
			}
			switch (iParam0)
			{
				case 0:
					func_71(joaat("SP0_TOTAL_CASH_EARNED"), iParam3);
					break;
				
				case 1:
					func_71(joaat("SP1_TOTAL_CASH_EARNED"), iParam3);
					break;
				
				case 2:
					func_71(joaat("SP2_TOTAL_CASH_EARNED"), iParam3);
					break;
			}
			break;
		
		case 0:
			if (!bParam4)
			{
				if ((Global_58891[iVar2] - iParam3) < 0)
				{
					return 0;
				}
			}
			iVar3 = Global_58891[iVar2];
			Global_58891[iVar2] = (Global_58891[iVar2] - iParam3);
			if (bParam4)
			{
				iVar4 = iVar3;
			}
			break;
	}
	if (iParam2 == 1)
	{
		if (iVar4 > 20)
		{
		}
	}
	else
	{
		Global_111858.f_20560.f_233[iVar2 /*69*/].f_2[Global_111858.f_20560.f_233[iVar2 /*69*/].f_1 /*6*/] = iParam1;
		Global_111858.f_20560.f_233[iVar2 /*69*/].f_2[Global_111858.f_20560.f_233[iVar2 /*69*/].f_1 /*6*/].f_1 = iParam2;
		Global_111858.f_20560.f_233[iVar2 /*69*/].f_2[Global_111858.f_20560.f_233[iVar2 /*69*/].f_1 /*6*/].f_2 = iParam3;
		Global_111858.f_20560.f_233[iVar2 /*69*/]++;
		Global_111858.f_20560.f_233[iVar2 /*69*/].f_1++;
		if (Global_111858.f_20560.f_233[iVar2 /*69*/].f_1 > 10)
		{
			Global_111858.f_20560.f_233[iVar2 /*69*/].f_1 = 0;
		}
	}
	func_58(iParam0);
	if (Global_41631 == 15)
	{
		func_57(0);
	}
	return 1;
}

void func_57(bool bParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	iVar1 = 0;
	iVar0 = 0;
	while (iVar0 < 3)
	{
		iVar1 = 0;
		while (iVar1 < 11)
		{
			Global_111858.f_20560.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_3 = Global_111858.f_20560.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/];
			Global_111858.f_20560.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_4 = Global_111858.f_20560.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_1;
			Global_111858.f_20560.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_5 = Global_111858.f_20560.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_2;
			iVar1++;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 10)
	{
		Global_58899[iVar0 /*3*/][0] = Global_111858.f_20560[iVar0];
		Global_58899.f_31[iVar0 /*3*/][0] = Global_111858.f_20560.f_11[iVar0];
		Global_58899.f_62[iVar0 /*3*/][0] = Global_111858.f_20560.f_22[iVar0];
		Global_58899.f_93[iVar0 /*3*/][0] = Global_111858.f_20560.f_33[iVar0];
		Global_58899.f_124[iVar0 /*3*/][0] = Global_111858.f_20560.f_44[iVar0];
		Global_58899.f_155[iVar0 /*3*/][0] = Global_111858.f_20560.f_55[iVar0];
		Global_58899.f_186[iVar0 /*3*/][0] = Global_111858.f_20560.f_66[iVar0];
		Global_58899.f_217[iVar0 /*3*/][0] = Global_111858.f_20560.f_77[iVar0];
		Global_58899.f_248[iVar0 /*3*/][0] = Global_111858.f_20560.f_88[iVar0];
		if (!bParam0)
		{
			Global_58899[iVar0 /*3*/][1] = Global_111858.f_20560[iVar0];
			Global_58899.f_31[iVar0 /*3*/][1] = Global_111858.f_20560.f_11[iVar0];
			Global_58899.f_62[iVar0 /*3*/][1] = Global_111858.f_20560.f_22[iVar0];
			Global_58899.f_93[iVar0 /*3*/][1] = Global_111858.f_20560.f_33[iVar0];
			Global_58899.f_124[iVar0 /*3*/][1] = Global_111858.f_20560.f_44[iVar0];
			Global_58899.f_155[iVar0 /*3*/][1] = Global_111858.f_20560.f_55[iVar0];
			Global_58899.f_186[iVar0 /*3*/][1] = Global_111858.f_20560.f_66[iVar0];
			Global_58899.f_217[iVar0 /*3*/][1] = Global_111858.f_20560.f_77[iVar0];
			Global_58899.f_248[iVar0 /*3*/][1] = Global_111858.f_20560.f_88[iVar0];
		}
		iVar0++;
	}
}

void func_58(int iParam0)
{
	int iVar0;
	
	iVar0 = Global_58891[iParam0];
	switch (iParam0)
	{
		case 0:
			unk_0x6000E4684CB4330B(joaat("SP0_TOTAL_CASH"), iVar0, 1);
			break;
		
		case 1:
			unk_0x6000E4684CB4330B(joaat("SP1_TOTAL_CASH"), iVar0, 1);
			break;
		
		case 2:
			unk_0x6000E4684CB4330B(joaat("SP2_TOTAL_CASH"), iVar0, 1);
			break;
	}
}

void func_59(int iParam0)
{
	bool bVar0;
	char cVar1[64];
	
	if (iParam0 == 8)
	{
		func_51(129, 0, -1, 1);
		return;
	}
	if (iParam0 == 9)
	{
		func_51(135, 0, -1, 1);
		return;
	}
	if (iParam0 == 10)
	{
		func_51(136, 0, -1, 1);
		return;
	}
	if (iParam0 == 11)
	{
		func_51(137, 0, -1, 1);
		return;
	}
	if (iParam0 == 12)
	{
		func_62(8270, 0, -1, 1, 0);
		return;
	}
	if (iParam0 == 13)
	{
		func_62(8271, 0, -1, 1, 0);
		return;
	}
	if (iParam0 == 14)
	{
		func_62(8272, 0, -1, 1, 0);
		return;
	}
	if (iParam0 == 15)
	{
		func_62(8273, 0, -1, 1, 0);
		return;
	}
	if (iParam0 == 16)
	{
		func_62(8274, 0, -1, 1, 0);
		return;
	}
	if (iParam0 == 17)
	{
		func_62(8275, 0, -1, 1, 0);
		return;
	}
	bVar0 = false;
	if (!unk_0x25DDB354A40FFCDB())
	{
		if (unk_0xCE990E643CD9D0E5(Global_111858.f_20560.f_471, iParam0))
		{
			bVar0 = true;
			unk_0xD2459066EA58CE43(&(Global_111858.f_20560.f_471), iParam0);
		}
	}
	else if (unk_0xCE990E643CD9D0E5(Global_111858.f_20560.f_471, iParam0) || unk_0xCE990E643CD9D0E5(Global_2097152[func_61() /*10931*/].f_6175.f_10, iParam0))
	{
		bVar0 = true;
		unk_0xD2459066EA58CE43(&(Global_111858.f_20560.f_471), iParam0);
		unk_0xD2459066EA58CE43(&(Global_2097152[func_61() /*10931*/].f_6175.f_10), iParam0);
	}
	if (bVar0)
	{
		StringCopy(&cVar1, "CHAR_LIFEINVADER", 64);
		unk_0x5B8DD855EAFD33B5("COUP_RED");
		unk_0x6A826E35A3096ED0(func_60(iParam0));
		unk_0x39E1440587355CC1(&cVar1, &cVar1, 1, 0, "", 0);
	}
}

char* func_60(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "COUP_HAIRC";
		
		case 1:
			return "COUP_TATTOO";
		
		case 2:
			return "COUP_WARSTOCK";
		
		case 3:
			return "COUP_MOSPORT";
		
		case 4:
			return "COUP_ELITAS";
		
		case 5:
			return "COUP_MEDSPENS";
		
		case 6:
			return "COUP_SPRUNK";
		
		case 7:
			return "COUP_RESPRAY";
		
		case 8:
			return "COUP_XMAS2017";
		
		case 9:
			return "COUP_CAR_XMAS2018";
		
		case 10:
			return "COUP_HELI_XMAS2018";
		
		case 11:
			return "COUP_CAR2_XMAS2018";
		
		case 12:
			return "COUP_CAS_ELITAS";
		
		case 13:
			return "COUP_CAS_DOCKTEASE";
		
		case 14:
			return "COUP_CAS_MOSPORT";
		
		case 15:
			return "COUP_CAS_SSASA";
		
		case 16:
			return "COUP_CAS_WARSTOCK";
		
		case 17:
			return "COUP_CAS_PANDM";
		
		default:
	}
	return "";
}

int func_61()
{
	int iVar0;
	
	iVar0 = 0;
	return iVar0;
}

void func_62(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	int iVar0;
	
	if (bParam4)
	{
	}
	iVar0 = Global_2551832[iParam0 /*3*/][func_63(iParam2)];
	if (iVar0 != 0)
	{
		unk_0x6000E4684CB4330B(iVar0, iParam1, iParam3);
	}
}

int func_63(var uParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = uParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_52();
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

void func_64(int iParam0)
{
	func_72(93, iParam0);
	func_72(29, iParam0);
	func_72(30, iParam0);
}

bool func_65(int iParam0)
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
	
	if (iParam0 == 8)
	{
		return func_67(129, -1, -1);
	}
	if (iParam0 == 9)
	{
		return func_67(135, -1, -1);
	}
	if (iParam0 == 10)
	{
		return func_67(136, -1, -1);
	}
	if (iParam0 == 11)
	{
		return func_67(137, -1, -1);
	}
	if (iParam0 == 12)
	{
		iVar0 = unk_0x5A002C4821A13338();
		iVar1 = func_66(8270, -1, 0);
		if (iVar1 == 0 || iVar0 >= iVar1)
		{
			return 0;
		}
		return 1;
	}
	if (iParam0 == 13)
	{
		iVar2 = unk_0x5A002C4821A13338();
		iVar3 = func_66(8271, -1, 0);
		if (iVar3 == 0 || iVar2 >= iVar3)
		{
			return 0;
		}
		return 1;
	}
	if (iParam0 == 14)
	{
		iVar4 = unk_0x5A002C4821A13338();
		iVar5 = func_66(8272, -1, 0);
		if (iVar5 == 0 || iVar4 >= iVar5)
		{
			return 0;
		}
		return 1;
	}
	if (iParam0 == 15)
	{
		iVar6 = unk_0x5A002C4821A13338();
		iVar7 = func_66(8273, -1, 0);
		if (iVar7 == 0 || iVar6 >= iVar7)
		{
			return 0;
		}
		return 1;
	}
	if (iParam0 == 16)
	{
		iVar8 = unk_0x5A002C4821A13338();
		iVar9 = func_66(8274, -1, 0);
		if (iVar9 == 0 || iVar8 >= iVar9)
		{
			return 0;
		}
		return 1;
	}
	if (iParam0 == 17)
	{
		iVar10 = unk_0x5A002C4821A13338();
		iVar11 = func_66(8275, -1, 0);
		if (iVar11 == 0 || iVar10 >= iVar11)
		{
			return 0;
		}
		return 1;
	}
	if (!unk_0x25DDB354A40FFCDB())
	{
		return unk_0xCE990E643CD9D0E5(Global_111858.f_20560.f_471, iParam0);
	}
	return unk_0xCE990E643CD9D0E5(Global_2097152[func_61() /*10931*/].f_6175.f_10, iParam0);
}

int func_66(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	var uVar1;
	
	if (iParam0 != 11771)
	{
		if (iParam2 == 0)
		{
		}
		iVar0 = Global_2551832[iParam0 /*3*/][func_63(iParam1)];
		if (unk_0xD2F202166691EDB2(iVar0, &uVar1, -1))
		{
			return uVar1;
		}
	}
	return 0;
}

int func_67(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	var uVar2;
	
	iVar0 = 0;
	if (iParam1 == -1)
	{
		iParam1 = func_52();
	}
	iVar1 = func_69(iParam0, iParam1);
	uVar2 = func_68(iParam0);
	if (0 != iVar1)
	{
		iVar0 = unk_0x9FD0AD883E4A7C1E(iVar1, uVar2, iParam2);
	}
	return iVar0;
}

int func_68(int iParam0)
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

int func_69(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam1 == -1)
	{
		iParam1 = func_52();
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

int func_70(bool bParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = 0;
	if (unk_0x027BA2E902FAC118(27))
	{
		return 0;
	}
	if (unk_0xD2F202166691EDB2(joaat("SP0_MONEY_TOTAL_SPENT"), &iVar0, -1))
	{
		iVar1 = (iVar1 + iVar0);
	}
	if (unk_0xD2F202166691EDB2(joaat("SP1_MONEY_TOTAL_SPENT"), &iVar0, -1))
	{
		iVar1 = (iVar1 + iVar0);
	}
	if (unk_0xD2F202166691EDB2(joaat("SP2_MONEY_TOTAL_SPENT"), &iVar0, -1))
	{
		iVar1 = (iVar1 + iVar0);
	}
	if (bParam0)
	{
	}
	iVar2 = 0;
	unk_0xD2F202166691EDB2(joaat("NUM_CASH_SPENT"), &iVar2, -1);
	if (iVar1 > 0 && (iVar2 / 2000000) != (iVar1 / 2000000))
	{
		unk_0x6000E4684CB4330B(joaat("NUM_CASH_SPENT"), iVar1, 1);
		func_50(27, iVar1);
	}
	if (iVar1 < 200000000)
	{
		return 0;
	}
	func_33(27, 1);
	return 1;
}

void func_71(int iParam0, int iParam1)
{
	int iVar0;
	
	unk_0xD2F202166691EDB2(iParam0, &iVar0, -1);
	iVar0 = (iVar0 + iParam1);
	unk_0x6000E4684CB4330B(iParam0, iVar0, 1);
}

void func_72(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam1 < 1)
	{
		return;
	}
	if (Global_57459[iParam0 /*7*/].f_2)
	{
		return;
	}
	if (unk_0x25DDB354A40FFCDB())
	{
		return;
	}
	if (Global_57459[iParam0 /*7*/])
	{
		unk_0xD2F202166691EDB2(Global_57459[iParam0 /*7*/].f_1, &iVar0, -1);
		iVar0 = (iVar0 + iParam1);
		unk_0x6000E4684CB4330B(Global_57459[iParam0 /*7*/].f_1, iVar0, 1);
	}
}

void func_73()
{
	int iVar0;
	
	if (unk_0x011A67D2B195B6EB())
	{
		unk_0xD2F202166691EDB2(joaat("SP0_TOTAL_CASH"), &iVar0, -1);
		if (!Global_58891[0] == iVar0)
		{
			Global_58891[0] = iVar0;
		}
		unk_0xD2F202166691EDB2(joaat("SP1_TOTAL_CASH"), &iVar0, -1);
		if (!Global_58891[1] == iVar0)
		{
			Global_58891[1] = iVar0;
		}
		unk_0xD2F202166691EDB2(joaat("SP2_TOTAL_CASH"), &iVar0, -1);
		if (!Global_58891[2] == iVar0)
		{
			Global_58891[2] = iVar0;
		}
	}
}

int func_74(int iParam0)
{
	return Global_1848[iParam0 /*29*/].f_17;
}

int func_75(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 99;
			break;
		
		case 1:
			return 100;
			break;
		
		case 2:
			return 101;
			break;
		
		case 3:
			return 102;
			break;
		
		case 4:
			return 103;
			break;
		
		case 5:
			return 104;
			break;
		
		case 6:
			return 105;
			break;
		
		case 7:
			return 106;
			break;
		
		case 8:
			return 107;
			break;
		
		case 9:
			return 108;
			break;
		
		case 10:
			return 109;
			break;
		
		case 11:
			return 110;
			break;
		
		case 12:
			return 111;
			break;
		
		case 13:
			return 112;
			break;
		
		case 14:
			return 113;
			break;
		
		case 15:
			return 25;
			break;
	}
	return 0;
}

int func_76(var uParam0, int iParam1)
{
	int iVar0;
	struct<3> Var1;
	bool bVar2;
	
	unk_0x5AEB5DDFFAD43CA5(unk_0x9B0761B4C3EB8BC7());
	Var1 = { unk_0x3E4D3CCC220BDFB1(unk_0x9B0761B4C3EB8BC7(), 1) };
	iVar0 = 0;
	while (iVar0 < iLocal_55)
	{
		bVar2 = func_12(&(uParam0->f_1), uParam0->f_10);
		if (!(iParam1[uParam0->f_10 /*11*/])->f_10)
		{
			if (!bVar2)
			{
				if (!func_108((iParam1[uParam0->f_10 /*11*/])->f_6, 0f, 0f, 0f, 0))
				{
					func_106(iParam1[uParam0->f_10 /*11*/], uParam0->f_7, joaat("pickup_custom_script"), 0, 1, 0);
				}
				else
				{
					func_106(iParam1[uParam0->f_10 /*11*/], uParam0->f_7, joaat("pickup_custom_script"), 0, 0, 2);
				}
			}
		}
		else if (!bVar2)
		{
			if (func_93(uParam0, iParam1, Var1))
			{
				if (func_11(uParam0, iParam1, Var1, &iLocal_54))
				{
					func_53(3, 23000);
					func_8();
				}
			}
		}
		func_90(uParam0->f_10, bVar2);
		uParam0->f_10++;
		if (uParam0->f_10 >= *iParam1)
		{
			uParam0->f_10 = 0;
		}
		iVar0++;
	}
	if (!Global_77093)
	{
		func_83(&(uParam0->f_11), &(uParam0->f_12), &(uParam0->f_9), 3, &iLocal_56, &uLocal_57, "SUBM_TITLE", "SUBM_COLLECT");
	}
	if (uParam0->f_1.f_4 >= uParam0->f_1.f_3)
	{
		func_82();
		func_125(0);
		func_77(0);
	}
	if (!uParam0->f_12 && !uParam0->f_11)
	{
		return uParam0->f_1.f_4 >= uParam0->f_1.f_3;
	}
	return 0;
}

void func_77(int iParam0)
{
	if (func_81())
	{
		return;
	}
	if (Global_19864)
	{
		if (func_80())
		{
			func_79(1, 1);
		}
		else
		{
			func_79(0, 0);
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
	if (!func_78())
	{
		Global_19681.f_1 = 3;
	}
}

int func_78()
{
	if (Global_19681.f_1 == 1 || Global_19681.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

void func_79(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		if (func_19(0))
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

bool func_80()
{
	return unk_0xCE990E643CD9D0E5(Global_1689730, 5);
}

bool func_81()
{
	return unk_0xCE990E643CD9D0E5(Global_1689730, 19);
}

void func_82()
{
	unk_0xBE20AB8238688965(&Global_7552, 30);
}

void func_83(var uParam0, var uParam1, var uParam2, int iParam3, int iParam4, var uParam5, char* sParam6, char* sParam7)
{
	int iVar0;
	
	func_89(0);
	if (*uParam0)
	{
		switch (*iParam4)
		{
			case 0:
				*uParam5 = unk_0x5DEA4192B46CB99B("MIDSIZED_MESSAGE");
				if (unk_0x95EF219D38B20CFF(*uParam5))
				{
					iVar0 = unk_0x5E54B0823F46079E();
					if (iParam3 == 6)
					{
						unk_0xC4CC25B68A91D144(iVar0, "PEYOTE_COMPLETED", "HUD_AWARDS", 1);
					}
					else
					{
						unk_0xC4CC25B68A91D144(iVar0, "COLLECTED", "HUD_AWARDS", 1);
					}
					*iParam4++;
				}
				break;
			
			case 1:
				unk_0x830F007E19C63E14(*uParam5, "SHOW_SHARD_MIDSIZED_MESSAGE");
				unk_0xB23270F3D5E62FDE(sParam6);
				unk_0x2042E9CA4306F725();
				unk_0xB23270F3D5E62FDE(sParam7);
				unk_0x42710E9E08FA375A(func_85(iParam3));
				unk_0x2042E9CA4306F725();
				unk_0xE1FDD153F5858534();
				*uParam2 = unk_0x578C4EF320340AF7();
				*iParam4++;
				break;
			
			case 2:
				if ((unk_0x578C4EF320340AF7() - *uParam2) > 7000)
				{
					unk_0x830F007E19C63E14(*uParam5, "SHARD_ANIM_OUT");
					unk_0xAD291B8F75D737AD(1);
					unk_0x49B9B8101B158AEE(0.33f);
					unk_0xE1FDD153F5858534();
					*iParam4++;
				}
				else if (!func_84())
				{
					if (unk_0x95EF219D38B20CFF(*uParam5))
					{
						func_89(1);
						unk_0x37FC7E88C7659D33(*uParam5, 100, 100, 100, 255, 0);
					}
				}
				break;
			
			case 3:
				if ((unk_0x578C4EF320340AF7() - *uParam2) > 7500)
				{
					*iParam4++;
				}
				else if (!func_84())
				{
					if (unk_0x95EF219D38B20CFF(*uParam5))
					{
						func_89(1);
						unk_0x37FC7E88C7659D33(*uParam5, 100, 100, 100, 255, 0);
					}
				}
				break;
			
			case 4:
				if (unk_0x95EF219D38B20CFF(*uParam5))
				{
					unk_0x2E352DDBBF674246(uParam5);
				}
				func_89(0);
				*uParam1 = 0;
				*uParam0 = 0;
				*iParam4 = 0;
				break;
			}
	}
}

int func_84()
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

int func_85(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0;
	iVar1 = 0;
	if (iParam0 == 2)
	{
		iVar1 = 0;
		while (iVar1 < func_88(iParam0))
		{
			if (unk_0xCE990E643CD9D0E5(Global_111858.f_10045.f_108, func_87(func_88(iParam0), iVar1)))
			{
				iVar0++;
			}
			iVar1++;
		}
	}
	else if (iParam0 == 6)
	{
		unk_0xD2F202166691EDB2(joaat("NUM_HIDDEN_PACKAGES_5"), &iVar0, -1);
	}
	else if (iParam0 == 7)
	{
		unk_0xD2F202166691EDB2(joaat("NUM_HIDDEN_PACKAGES_7"), &iVar0, -1);
	}
	else if (iParam0 == 8)
	{
		unk_0xD2F202166691EDB2(joaat("NUM_HIDDEN_PACKAGES_6"), &iVar0, -1);
	}
	else
	{
		iVar1 = 0;
		while (iVar1 < func_88(iParam0))
		{
			iVar2 = (func_86(iParam0) + iVar1);
			if (func_67(iVar2, -1, -1))
			{
				iVar0++;
			}
			iVar1++;
		}
	}
	return iVar0;
}

int func_86(int iParam0)
{
	if (iParam0 == 3)
	{
		return 815;
	}
	if (iParam0 == 5)
	{
		return 845;
	}
	if (iParam0 == 1)
	{
		return 705;
	}
	if (iParam0 == 0)
	{
		return 755;
	}
	return 805;
}

int func_87(int iParam0, int iParam1)
{
	if (iParam1 < 32)
	{
		return iParam1;
	}
	return (iParam0 - iParam1);
}

int func_88(int iParam0)
{
	if (iParam0 == 3)
	{
		return 30;
	}
	if (iParam0 == 1)
	{
		return 50;
	}
	if (iParam0 == 0)
	{
		return 50;
	}
	if (iParam0 == 4)
	{
		return 10;
	}
	if (iParam0 == 5)
	{
		return 30;
	}
	return 15;
}

void func_89(int iParam0)
{
	if (Global_77100 != iParam0)
	{
		Global_77100 = iParam0;
	}
}

void func_90(int iParam0, bool bParam1)
{
	int iVar0;
	
	if (func_92(iParam0) == 0)
	{
		return;
	}
	if (iLocal_58[iParam0] == -1)
	{
		if (!bParam1 && !unk_0xA59F96B50B97E63C(unk_0x9B0761B4C3EB8BC7(), 0))
		{
			if (vdist2(unk_0x3E4D3CCC220BDFB1(unk_0x9B0761B4C3EB8BC7(), 1), Local_48[iParam0 /*11*/].f_3) < (100f * 100f))
			{
				if (func_91(&iVar0))
				{
					unk_0x334E3E61486580EE(iVar0, Local_48[iParam0 /*11*/].f_3, 8f);
					iLocal_58[iParam0] = iVar0;
				}
			}
		}
	}
	else if (!unk_0xA59F96B50B97E63C(unk_0x9B0761B4C3EB8BC7(), 0))
	{
		if (vdist2(unk_0x3E4D3CCC220BDFB1(unk_0x9B0761B4C3EB8BC7(), 1), Local_48[iParam0 /*11*/].f_3) > (105f * 105f))
		{
			if (iLocal_58[iParam0] >= 0 && iLocal_58[iParam0] < 8)
			{
				unk_0xBD00984087545CEF(iLocal_58[iParam0]);
				iLocal_58[iParam0] = -1;
			}
		}
	}
}

int func_91(var uParam0)
{
	*uParam0 = 0;
	*uParam0 = 0;
	while (*uParam0 < 8)
	{
		if (!unk_0xB299D8FD2EAA81FF(*uParam0))
		{
			return 1;
		}
		*uParam0++;
	}
	*uParam0 = -1;
	return 0;
}

int func_92(int iParam0)
{
	if (iParam0 == 23)
	{
		return 0;
	}
	return 1;
}

int func_93(var uParam0, var uParam1, struct<3> Param2)
{
	int iVar0;
	
	iVar0 = uParam0->f_10;
	if ((uParam1[iVar0 /*11*/])->f_10)
	{
		if ((uParam1[iVar0 /*11*/])->f_1 != 0)
		{
			if (unk_0x73DBD7E437DA0553((uParam1[iVar0 /*11*/])->f_1) || func_105((uParam1[iVar0 /*11*/])->f_1))
			{
				func_95(uParam0, uParam1, iVar0);
				return 1;
			}
		}
	}
	if (unk_0xF10E878C0879E7E9((uParam1[iVar0 /*11*/])->f_1))
	{
		if ((vdist2(Param2, unk_0xC8C0D624848783ED((uParam1[iVar0 /*11*/])->f_1)) > (60f * 60f) || func_17(13)) || func_17(14))
		{
			func_94(&((uParam1[iVar0 /*11*/])->f_1));
			(uParam1[iVar0 /*11*/])->f_1 = 0;
			(uParam1[iVar0 /*11*/])->f_10 = 0;
		}
	}
	return 0;
}

void func_94(var uParam0)
{
	if (unk_0xF10E878C0879E7E9(*uParam0))
	{
		unk_0x73A2C4B5D6915500(*uParam0);
	}
}

void func_95(var uParam0, var uParam1, int iParam2)
{
	int iVar0;
	
	iVar0 = (func_86(*uParam0) + iParam2);
	func_94(&((uParam1[iParam2 /*11*/])->f_1));
	func_104(&((uParam1[iParam2 /*11*/])->f_2));
	(uParam1[iParam2 /*11*/])->f_1 = 0;
	(uParam1[iParam2 /*11*/])->f_10 = 0;
	func_103(&(uParam0->f_1), iParam2, 1);
	if (*uParam0 == 1 || *uParam0 == 0)
	{
		func_102(*uParam0, iParam2, 1);
	}
	unk_0x3E6F6B3156C4F772(0, 200, 250);
	unk_0x1C7D71D8BB1A7035(uParam0->f_6, 1f);
	if (bLocal_41)
	{
		func_101(&(uParam0->f_1), iParam2);
	}
	else
	{
		func_99(&(uParam0->f_1));
	}
	func_97();
	unk_0x0E6D8B54D0DF1A11(iVar0);
	func_96(1, 0);
	func_48();
	uParam0->f_11 = 1;
}

void func_96(int iParam0, int iParam1)
{
	Global_98994.f_7 = iParam0;
	Global_98994.f_8 = iParam1;
}

void func_97()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	iVar3 = 0;
	unk_0xD2F202166691EDB2(func_98(0), &iVar0, -1);
	iVar1 = (iVar1 + iVar0);
	if (iVar0 > 0)
	{
		func_50(18, iVar0);
	}
	unk_0xD2F202166691EDB2(func_98(1), &iVar0, -1);
	iVar1 = (iVar1 + iVar0);
	if (iVar0 > 0)
	{
		func_50(19, iVar0);
	}
	unk_0xD2F202166691EDB2(func_98(3), &iVar0, -1);
	iVar1 = (iVar1 + iVar0);
	if (iVar0 > 0)
	{
		func_50(20, iVar0);
	}
	iVar2 = ((func_88(0) + func_88(1)) + func_88(3));
	if (iVar2 > 0)
	{
		iVar3 = (iVar1 * 100 / iVar2);
	}
	unk_0x6000E4684CB4330B(joaat("PERCENT_HIDDEN_PACKAGES"), iVar3, 1);
}

int func_98(int iParam0)
{
	if (iParam0 == 3)
	{
		return joaat("NUM_HIDDEN_PACKAGES_3");
	}
	if (iParam0 == 1)
	{
		return joaat("NUM_HIDDEN_PACKAGES_0");
	}
	if (iParam0 == 0)
	{
		return joaat("NUM_HIDDEN_PACKAGES_1");
	}
	if (iParam0 == 5)
	{
		return joaat("NUM_HIDDEN_PACKAGES_4");
	}
	return joaat("NUM_HIDDEN_PACKAGES_2");
}

void func_99(var uParam0)
{
	int iVar0;
	int iVar1;
	
	iVar1 = 0;
	if (uParam0->f_3 <= 0)
	{
	}
	if (uParam0->f_2 <= 0)
	{
	}
	if (bLocal_40)
	{
	}
	iVar0 = 0;
	while (iVar0 < uParam0->f_3)
	{
		if (func_12(uParam0, iVar0))
		{
			iVar1++;
			func_51((uParam0->f_2 + iVar0), 1, -1, 1);
			if (bLocal_40)
			{
			}
		}
		iVar0++;
	}
	uParam0->f_4 = iVar1;
	if (bLocal_40)
	{
	}
	if (iVar1 == uParam0->f_3 && uParam0->f_2 == 705)
	{
		func_100(168, 0);
	}
}

void func_100(int iParam0, int iParam1)
{
	if (iParam0 == 235 || iParam0 == 0)
	{
		return;
	}
	Global_111858.f_8609[iParam0] = 1;
	Global_111858.f_8609.f_236[iParam0] = (unk_0x578C4EF320340AF7() + iParam1);
}

void func_101(var uParam0, int iParam1)
{
	if (uParam0->f_3 <= 0)
	{
	}
	if (uParam0->f_2 <= 0)
	{
	}
	if (bLocal_40)
	{
	}
	if (iParam1 >= uParam0->f_3)
	{
	}
	if (func_12(uParam0, iParam1))
	{
		uParam0->f_4++;
		func_51((uParam0->f_2 + iParam1), 1, -1, 1);
		if (bLocal_40)
		{
		}
	}
	if (bLocal_40)
	{
	}
	if (uParam0->f_4 == uParam0->f_3 && uParam0->f_2 == 705)
	{
		func_100(168, 0);
	}
}

void func_102(int iParam0, int iParam1, bool bParam2)
{
	if (iParam1 < 0 || iParam1 >= 64)
	{
		return;
	}
	if (iParam0 == 1)
	{
		if (iParam1 <= 31)
		{
			if (bParam2)
			{
				unk_0xBE20AB8238688965(&(Global_111858.f_10045.f_122), iParam1);
			}
			else
			{
				unk_0xD2459066EA58CE43(&(Global_111858.f_10045.f_122), iParam1);
			}
			return;
		}
		if (bParam2)
		{
			unk_0xBE20AB8238688965(&(Global_111858.f_10045.f_122.f_1), (iParam1 - 32));
		}
		else
		{
			unk_0xD2459066EA58CE43(&(Global_111858.f_10045.f_122.f_1), (iParam1 - 32));
		}
	}
	else if (iParam0 == 0)
	{
		if (iParam1 <= 31)
		{
			if (bParam2)
			{
				unk_0xBE20AB8238688965(&(Global_111858.f_10045.f_125), iParam1);
			}
			else
			{
				unk_0xD2459066EA58CE43(&(Global_111858.f_10045.f_125), iParam1);
			}
			return;
		}
		if (bParam2)
		{
			unk_0xBE20AB8238688965(&(Global_111858.f_10045.f_125.f_1), (iParam1 - 32));
		}
		else
		{
			unk_0xD2459066EA58CE43(&(Global_111858.f_10045.f_125.f_1), (iParam1 - 32));
		}
	}
}

void func_103(int iParam0, int iParam1, bool bParam2)
{
	if (iParam1 < 0 || iParam1 >= 64)
	{
		return;
	}
	if (iParam1 <= 31)
	{
		if (bParam2)
		{
			unk_0xBE20AB8238688965(iParam0, iParam1);
		}
		else
		{
			unk_0xD2459066EA58CE43(iParam0, iParam1);
		}
		return;
	}
	if (bParam2)
	{
		unk_0xBE20AB8238688965(&(iParam0->f_1), (iParam1 - 32));
	}
	else
	{
		unk_0xD2459066EA58CE43(&(iParam0->f_1), (iParam1 - 32));
	}
}

void func_104(int iParam0)
{
	if (unk_0x8F678487EEBD8CE4(*iParam0))
	{
		unk_0x72BEFB9451782F60(*iParam0, 0);
		unk_0x93370FA10F15BE44(iParam0);
	}
}

int func_105(var uParam0)
{
	int iVar0;
	int iVar1;
	
	if (!unk_0xF10E878C0879E7E9(uParam0))
	{
		return 0;
	}
	if (func_109(unk_0x9B0761B4C3EB8BC7()))
	{
		if (unk_0x47DBF174A0CB9D55(unk_0x9B0761B4C3EB8BC7(), 0))
		{
			iVar0 = unk_0xA5D5B1042E8F47BD(unk_0x9B0761B4C3EB8BC7(), 0);
			iVar1 = unk_0x36FE6D3220816ADA(iVar0);
			if (iVar1 == joaat("submersible") || iVar1 == joaat("submersible2"))
			{
				if (vdist2(unk_0x3E4D3CCC220BDFB1(unk_0x9B0761B4C3EB8BC7(), 1), unk_0xC8C0D624848783ED(uParam0)) < (5f * 5f) || unk_0xA65352E7FEA59881(unk_0x9B0761B4C3EB8BC7(), unk_0x61450D7D6816FE60(uParam0)))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

void func_106(var uParam0, int iParam1, int iParam2, bool bParam3, bool bParam4, int iParam5)
{
	int iVar0;
	
	if (!uParam0->f_10)
	{
		if (!unk_0x5AEB5DDFFAD43CA5(unk_0x9B0761B4C3EB8BC7()))
		{
			if (!func_17(13) && !func_17(14))
			{
				if (!unk_0xF10E878C0879E7E9(uParam0->f_1))
				{
					if (vdist2(unk_0x3E4D3CCC220BDFB1(unk_0x9B0761B4C3EB8BC7(), 1), uParam0->f_3) <= (50f * 50f))
					{
						unk_0x78FCB2E22C41B9D5(iParam1);
						while (!unk_0x7D167B9A0CCDA347(iParam1))
						{
							unk_0x78FCB2E22C41B9D5(iParam1);
							wait(0);
						}
						if (bParam3)
						{
							func_107(uParam0->f_3);
						}
						unk_0x555EE41D7C7078E6(uParam0->f_3, 2.5f, 0, 0, 0, false);
						if (bParam4)
						{
							unk_0xBE20AB8238688965(&iVar0, 1);
							uParam0->f_1 = unk_0xB1C0B7CD03D4467D(joaat("pickup_custom_script"), uParam0->f_3, uParam0->f_6, iVar0, -1, iParam5, 1, iParam1);
						}
						else
						{
							unk_0xBE20AB8238688965(&iVar0, 3);
							unk_0xBE20AB8238688965(&iVar0, 4);
							unk_0xBE20AB8238688965(&iVar0, 8);
							unk_0xBE20AB8238688965(&iVar0, 1);
							uParam0->f_1 = unk_0x745986B99A8C6D46(iParam2, uParam0->f_3, iVar0, -1, 1, iParam1);
						}
						unk_0x74528AC0906CBABE(iParam1);
					}
				}
			}
			if (unk_0xF10E878C0879E7E9(uParam0->f_1))
			{
				uParam0->f_10 = 1;
			}
		}
	}
}

void func_107(struct<3> Param0)
{
	int iVar0;
	
	iVar0 = unk_0xD5C5CDCF5230F2BA(Param0);
	if (unk_0x0B1B45E748AD48BA(iVar0))
	{
		unk_0x05549C0F30BB285D(iVar0);
		while (!unk_0xEF928B5F0219FDF7(iVar0))
		{
			wait(0);
		}
		wait(0);
		unk_0x1F083D57FD823427(iVar0);
	}
}

bool func_108(struct<3> Param0, struct<3> Param1, bool bParam2)
{
	if (bParam2)
	{
		return (Param0.x == Param1.x && Param0.f_1 == Param1.f_1);
	}
	return ((Param0.x == Param1.x && Param0.f_1 == Param1.f_1) && Param0.f_2 == Param1.f_2);
}

int func_109(int iParam0)
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

void func_110()
{
	if (func_109(unk_0x9B0761B4C3EB8BC7()))
	{
		if (!unk_0xF1263D4D1D8024EF(unk_0x9B0761B4C3EB8BC7()))
		{
			func_125(0);
			func_77(0);
			unk_0x53797676AD34A9AA(5);
			func_6(2);
		}
		else
		{
			if (!func_117(15))
			{
				func_114("SUBM_HELP1", 1, 0, -1, 10000, 7, 0, 0, 0);
				func_113(15);
			}
			if (!func_112())
			{
				func_125(1);
				if (!iLocal_52 && !Local_42.f_1.f_4 >= Local_42.f_1.f_3)
				{
					func_114("SUBM_TRKHELP", 1, 0, -1, 10000, 7, 0, 0, 0);
					iLocal_52 = 1;
				}
			}
			func_111();
			if (func_76(&Local_42, &Local_48))
			{
				func_30();
			}
		}
	}
}

void func_111()
{
	iLocal_53++;
	if ((iLocal_53 % 30) == 0 || iLocal_54 == -1)
	{
		if (func_11(&Local_42, &Local_48, unk_0x3E4D3CCC220BDFB1(unk_0x9B0761B4C3EB8BC7(), 1), &iLocal_54))
		{
			func_8();
		}
	}
}

int func_112()
{
	if (unk_0x7B70881748D166CD(joaat("apptrackify")) > 0)
	{
		return 1;
	}
	return 0;
}

void func_113(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = iParam0;
	iVar1 = 0;
	while (iVar0 > 31)
	{
		iVar0 = (iVar0 - 32);
		iVar1++;
	}
	if (iVar1 < 3)
	{
		unk_0xBE20AB8238688965(&(Global_111858.f_20406.f_150[iVar1]), iVar0);
	}
}

void func_114(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)
{
	func_115(sParam0, "", iParam1, iParam2, iParam3, iParam4, iParam5, iParam6, iParam7, iParam8);
}

void func_115(char* sParam0, char* sParam1, var uParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, var uParam9)
{
	int iVar0;
	
	if (unk_0xF005CCA4263DF67F(sParam0, ""))
	{
		return;
	}
	if (iParam3 < 0)
	{
		return;
	}
	if (iParam5 < 500 && iParam5 != -1)
	{
		return;
	}
	if (iParam4 < 0 && iParam4 != -1)
	{
		return;
	}
	if (iParam6 < 1 || iParam6 > 7)
	{
		return;
	}
	if (iParam7 == 235)
	{
		return;
	}
	if (iParam8 == 235)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < Global_111858.f_20406.f_145)
	{
		if (unk_0xF005CCA4263DF67F(&(Global_111858.f_20406[iVar0 /*16*/]), sParam0))
		{
			return;
		}
		iVar0++;
	}
	if (Global_111858.f_20406.f_145 < 9)
	{
		StringCopy(&(Global_111858.f_20406[Global_111858.f_20406.f_145 /*16*/]), sParam0, 16);
		StringCopy(&(Global_111858.f_20406[Global_111858.f_20406.f_145 /*16*/].f_4), sParam1, 16);
		Global_111858.f_20406[Global_111858.f_20406.f_145 /*16*/].f_8 = (unk_0x578C4EF320340AF7() + iParam3);
		Global_111858.f_20406[Global_111858.f_20406.f_145 /*16*/].f_9 = iParam5;
		Global_111858.f_20406[Global_111858.f_20406.f_145 /*16*/].f_11 = iParam6;
		Global_111858.f_20406[Global_111858.f_20406.f_145 /*16*/].f_12 = uParam2;
		Global_111858.f_20406[Global_111858.f_20406.f_145 /*16*/].f_13 = iParam7;
		Global_111858.f_20406[Global_111858.f_20406.f_145 /*16*/].f_14 = iParam8;
		Global_111858.f_20406[Global_111858.f_20406.f_145 /*16*/].f_15 = uParam9;
		if (iParam4 != -1)
		{
			Global_111858.f_20406[Global_111858.f_20406.f_145 /*16*/].f_10 = ((unk_0x578C4EF320340AF7() + iParam3) + iParam4);
		}
		else
		{
			Global_111858.f_20406[Global_111858.f_20406.f_145 /*16*/].f_10 = -1;
		}
		Global_111858.f_20406.f_145++;
		func_116();
	}
}

void func_116()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 3)
	{
		Global_111858.f_20406.f_146[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Global_111858.f_20406.f_145)
	{
		if (unk_0xCE990E643CD9D0E5(Global_111858.f_20406[iVar0 /*16*/].f_11, 0))
		{
			if (Global_111858.f_20406[iVar0 /*16*/].f_12 > Global_111858.f_20406.f_146[0])
			{
				Global_111858.f_20406.f_146[0] = Global_111858.f_20406[iVar0 /*16*/].f_12;
			}
		}
		if (unk_0xCE990E643CD9D0E5(Global_111858.f_20406[iVar0 /*16*/].f_11, 1))
		{
			if (Global_111858.f_20406[iVar0 /*16*/].f_12 > Global_111858.f_20406.f_146[1])
			{
				Global_111858.f_20406.f_146[1] = Global_111858.f_20406[iVar0 /*16*/].f_12;
			}
		}
		if (unk_0xCE990E643CD9D0E5(Global_111858.f_20406[iVar0 /*16*/].f_11, 2))
		{
			if (Global_111858.f_20406[iVar0 /*16*/].f_12 > Global_111858.f_20406.f_146[2])
			{
				Global_111858.f_20406.f_146[2] = Global_111858.f_20406[iVar0 /*16*/].f_12;
			}
		}
		iVar0++;
	}
}

int func_117(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = iParam0;
	iVar1 = 0;
	while (iVar0 > 31)
	{
		iVar0 = (iVar0 - 32);
		iVar1++;
	}
	if (iVar1 < 3)
	{
		return unk_0xCE990E643CD9D0E5(Global_111858.f_20406.f_150[iVar1], iVar0);
	}
	return 0;
}

void func_118()
{
	iLocal_56 = 0;
	func_122();
	func_121(&Local_42, 3, joaat("prop_rad_waste_barrel_01"), "SUBM_COLLECT");
	func_119(&Local_42, joaat("NUM_HIDDEN_PACKAGES_3"), 815, 30);
	if (func_109(unk_0x9B0761B4C3EB8BC7()))
	{
		if (unk_0xF1263D4D1D8024EF(unk_0x9B0761B4C3EB8BC7()))
		{
			unk_0x53797676AD34A9AA(0);
			func_6(1);
		}
		else
		{
			unk_0x53797676AD34A9AA(5);
			func_6(2);
		}
	}
}

void func_119(var uParam0, int iParam1, int iParam2, int iParam3)
{
	uParam0->f_6 = iParam1;
	func_120(&(uParam0->f_1), iParam2, iParam3);
}

void func_120(int iParam0, var uParam1, var uParam2)
{
	int iVar0;
	int iVar1;
	
	iVar1 = 0;
	*iParam0 = 0;
	iParam0->f_1 = 0;
	iParam0->f_2 = uParam1;
	iParam0->f_3 = uParam2;
	if (bLocal_40)
	{
	}
	iVar0 = 0;
	while (iVar0 < iParam0->f_3)
	{
		if (func_67((iParam0->f_2 + iVar0), -1, -1))
		{
			iVar1++;
			func_103(iParam0, iVar0, 1);
			if (bLocal_40)
			{
			}
		}
		iVar0++;
	}
	iParam0->f_4 = iVar1;
	if (bLocal_40)
	{
	}
}

void func_121(var uParam0, int iParam1, int iParam2, char* sParam3)
{
	*uParam0 = iParam1;
	uParam0->f_7 = iParam2;
	uParam0->f_8 = sParam3;
	uParam0->f_10 = 0;
}

void func_122()
{
	int iVar0;
	
	Local_48[0 /*11*/].f_3 = { func_10(0) };
	Local_48[0 /*11*/].f_9 = 179.47f;
	Local_48[1 /*11*/].f_3 = { func_10(1) };
	Local_48[1 /*11*/].f_9 = 104f;
	Local_48[2 /*11*/].f_3 = { func_10(2) };
	Local_48[2 /*11*/].f_9 = 321.5f;
	Local_48[3 /*11*/].f_3 = { func_10(3) };
	Local_48[3 /*11*/].f_9 = -29.79f;
	Local_48[4 /*11*/].f_3 = { func_10(4) };
	Local_48[4 /*11*/].f_9 = -165.6f;
	Local_48[5 /*11*/].f_3 = { func_10(5) };
	Local_48[5 /*11*/].f_9 = 116f;
	Local_48[6 /*11*/].f_3 = { func_10(6) };
	Local_48[6 /*11*/].f_9 = -68.65f;
	Local_48[7 /*11*/].f_3 = { func_10(7) };
	Local_48[7 /*11*/].f_9 = 40f;
	Local_48[8 /*11*/].f_3 = { func_10(8) };
	Local_48[8 /*11*/].f_9 = 40f;
	Local_48[9 /*11*/].f_3 = { func_10(9) };
	Local_48[9 /*11*/].f_9 = 40f;
	Local_48[10 /*11*/].f_3 = { func_10(10) };
	Local_48[10 /*11*/].f_9 = 40f;
	Local_48[11 /*11*/].f_3 = { func_10(11) };
	Local_48[11 /*11*/].f_9 = 27.04f;
	Local_48[12 /*11*/].f_3 = { func_10(12) };
	Local_48[12 /*11*/].f_9 = 40f;
	Local_48[13 /*11*/].f_3 = { func_10(13) };
	Local_48[13 /*11*/].f_9 = 40f;
	Local_48[14 /*11*/].f_3 = { func_10(14) };
	Local_48[14 /*11*/].f_9 = 40f;
	Local_48[15 /*11*/].f_3 = { func_10(15) };
	Local_48[15 /*11*/].f_9 = 40f;
	Local_48[16 /*11*/].f_3 = { func_10(16) };
	Local_48[16 /*11*/].f_6 = { 89.94f, 61.93f, 90.94f };
	Local_48[17 /*11*/].f_3 = { func_10(17) };
	Local_48[17 /*11*/].f_9 = 40f;
	Local_48[18 /*11*/].f_3 = { func_10(18) };
	Local_48[18 /*11*/].f_9 = 40f;
	Local_48[19 /*11*/].f_3 = { func_10(19) };
	Local_48[19 /*11*/].f_9 = 40f;
	Local_48[20 /*11*/].f_3 = { func_10(20) };
	Local_48[20 /*11*/].f_9 = 40f;
	Local_48[21 /*11*/].f_3 = { func_10(21) };
	Local_48[21 /*11*/].f_9 = 40f;
	Local_48[22 /*11*/].f_3 = { func_10(22) };
	Local_48[22 /*11*/].f_9 = 40f;
	Local_48[23 /*11*/].f_3 = { func_10(23) };
	Local_48[23 /*11*/].f_9 = 40f;
	Local_48[24 /*11*/].f_3 = { func_10(24) };
	Local_48[24 /*11*/].f_9 = 40f;
	Local_48[25 /*11*/].f_3 = { func_10(25) };
	Local_48[25 /*11*/].f_9 = 198f;
	Local_48[26 /*11*/].f_3 = { func_10(26) };
	Local_48[26 /*11*/].f_9 = 198f;
	Local_48[27 /*11*/].f_3 = { func_10(27) };
	Local_48[27 /*11*/].f_9 = 198f;
	Local_48[28 /*11*/].f_3 = { func_10(28) };
	Local_48[28 /*11*/].f_9 = 198f;
	Local_48[29 /*11*/].f_3 = { func_10(29) };
	Local_48[29 /*11*/].f_9 = -109.43f;
	func_123(&Local_48);
	iVar0 = 0;
	while (iVar0 < 30)
	{
		iLocal_58[iVar0] = -1;
		iVar0++;
	}
}

void func_123(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < *iParam0)
	{
		(iParam0[iVar0 /*11*/])->f_10 = 0;
		iVar0++;
	}
}

bool func_124(int iParam0)
{
	if (!unk_0xAE06B9E39EBDE049(iParam0))
	{
		return 0;
	}
	return !unk_0xA59F96B50B97E63C(iParam0, 0);
}

void func_125(bool bParam0)
{
	if (bParam0)
	{
		Global_111858.f_14047.f_89 = 1;
	}
	else
	{
		Global_111858.f_14047.f_89 = 0;
	}
}

int func_126(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (iParam0 <= 31)
	{
		iVar0 = 9;
		iVar1 = iParam0;
	}
	else
	{
		iVar0 = 10;
		iVar1 = (iParam0 - 32);
	}
	if (unk_0xCE990E643CD9D0E5(Global_111858.f_9081.f_99.f_219[iVar0], iVar1))
	{
		return 0;
	}
	unk_0xBE20AB8238688965(&(Global_111858.f_9081.f_99.f_219[iVar0]), iVar1);
	return 1;
}

void func_127()
{
	int iVar0;
	
	unk_0x53797676AD34A9AA(5);
	func_5();
	iVar0 = 0;
	while (iVar0 < Local_48)
	{
		func_104(&(Local_48[iVar0 /*11*/].f_2));
		func_94(&(Local_48[iVar0 /*11*/].f_1));
		if (iLocal_58[iVar0] >= 0 && iLocal_58[iVar0] < 8)
		{
			unk_0xBD00984087545CEF(iLocal_58[iVar0]);
		}
		iVar0++;
	}
	if (func_129(&(Local_42.f_1)))
	{
		func_128(13);
	}
	func_82();
	func_125(0);
	func_77(0);
	unk_0x74528AC0906CBABE(Local_42.f_7);
	unk_0xD39E529EBE5DB04F();
}

int func_128(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (iParam0 <= 31)
	{
		iVar0 = 9;
		iVar1 = iParam0;
	}
	else
	{
		iVar0 = 10;
		iVar1 = (iParam0 - 32);
	}
	if (unk_0xCE990E643CD9D0E5(Global_111858.f_9081.f_99.f_219[iVar0], iVar1))
	{
		unk_0xD2459066EA58CE43(&(Global_111858.f_9081.f_99.f_219[iVar0]), iVar1);
		return 1;
	}
	return 0;
}

bool func_129(var uParam0)
{
	if (uParam0->f_3 <= 0)
	{
	}
	return uParam0->f_4 >= uParam0->f_3;
}

