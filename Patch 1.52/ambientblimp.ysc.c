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
	if (unk_0xED06FD5709A59F02(82))
	{
		func_33();
	}
	if (func_32())
	{
		iLocal_28 = 1;
	}
	while (true)
	{
		switch (iLocal_28)
		{
			case 0:
				if (func_10())
				{
					iLocal_28 = 1;
				}
				break;
			
			case 1:
				if (func_1())
				{
					func_33();
				}
				break;
		}
		wait(1000);
	}
}

int func_1()
{
	switch (func_8("BLIMP_UNLOCK"))
	{
		case 2:
			func_5("BLIMP_UNLOCK", 1, 0, 1000, 10000, 7, 0, 0, 0);
			break;
		
		case 1:
			func_4(57);
			func_2();
			return 1;
			break;
		
		case 0:
			break;
	}
	return 0;
}

int func_2()
{
	if (func_3(0))
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

bool func_3(bool bParam0)
{
	if (!bParam0 && unk_0x7B70881748D166CD(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return unk_0xCE990E643CD9D0E5(Global_77081, 0);
}

void func_4(int iParam0)
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

void func_5(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)
{
	func_6(sParam0, "", iParam1, iParam2, iParam3, iParam4, iParam5, iParam6, iParam7, iParam8);
}

void func_6(char* sParam0, char* sParam1, var uParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, var uParam9)
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
		func_7();
	}
}

void func_7()
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

int func_8(char* sParam0)
{
	if (unk_0xF005CCA4263DF67F(sParam0, &Global_110501))
	{
		return 1;
	}
	if (func_9(sParam0))
	{
		return 0;
	}
	return 2;
}

int func_9(char* sParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < Global_111858.f_20406.f_145)
	{
		if (unk_0xF005CCA4263DF67F(sParam0, &(Global_111858.f_20406[iVar0 /*16*/])))
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_10()
{
	if ((((func_31() || func_30()) || func_29()) || func_28()) || func_27())
	{
		if ((unk_0x5A228A6A51E757C8(unk_0x460153A63B9477BC()) && unk_0x4DC4117F94CD5B84(unk_0x460153A63B9477BC())) && !unk_0x9CC4D06F5338CA6B())
		{
			if (func_26(0))
			{
				func_11(48, 4, 0);
				func_2();
				return 1;
			}
		}
	}
	return 0;
}

void func_11(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	
	Global_8237 = iParam0;
	if (Global_117[iParam0 /*10*/].f_8 != 154)
	{
		func_18();
		if (iParam1 == 4)
		{
			func_17(iParam0, 0, 1);
			func_17(iParam0, 1, 1);
			func_17(iParam0, 2, 1);
			func_16(iParam0, 0, 1);
			func_16(iParam0, 1, 1);
			func_16(iParam0, 2, 1);
		}
		else
		{
			if (func_15(iParam0, iParam1) == 1 && func_14(iParam0, iParam1) == 1)
			{
				bParam2 = false;
			}
			iVar0 = iParam1;
			func_17(iParam0, iVar0, 1);
			func_16(iParam0, iVar0, 1);
		}
		if (bParam2)
		{
			if (!Global_76833)
			{
				if (iParam1 != 4)
				{
					if (Global_19681 != iParam1)
					{
						Global_8210[iParam1 /*4*/] = { func_13(iParam0) };
						Global_8227[iParam1] = 1;
						Global_8232[iParam1] = iParam0;
					}
					else if (iParam0 == Global_19681)
					{
					}
					else
					{
						Global_8161[1 /*6*/] = { func_13(iParam0) };
						Global_8161[1 /*6*/].f_5 = iParam1;
						func_12();
					}
				}
				else
				{
					Global_8161[1 /*6*/] = { func_13(iParam0) };
					Global_8161[1 /*6*/].f_5 = iParam1;
					func_12();
				}
			}
			else
			{
				Global_8161[1 /*6*/] = { func_13(iParam0) };
				Global_8161[1 /*6*/].f_5 = iParam1;
				func_12();
			}
		}
	}
}

void func_12()
{
	char cVar0[64];
	char cVar1[64];
	char* sVar2;
	
	StringCopy(&cVar0, unk_0x7C774D8CB8DC6FE3(&(Global_1848[Global_8237 /*29*/].f_7)), 64);
	if (Global_8256 == 0)
	{
		unk_0x5B8DD855EAFD33B5("");
		StringCopy(&cVar1, unk_0x7C774D8CB8DC6FE3(&(Global_8161[1 /*6*/])), 64);
		sVar2 = unk_0x7C774D8CB8DC6FE3("CELL_253");
		unk_0x39E1440587355CC1(&cVar0, &cVar0, 0, 3, sVar2, &cVar1);
	}
	else
	{
		unk_0x5B8DD855EAFD33B5("CELL_255");
		unk_0x6A826E35A3096ED0(&(Global_8161[1 /*6*/]));
		unk_0x39E1440587355CC1(&cVar0, &cVar0, 0, 3, "", 0);
	}
	unk_0xD2459066EA58CE43(&Global_7551, 0);
}

struct<4> func_13(int iParam0)
{
	return Global_1848[iParam0 /*29*/].f_3;
}

int func_14(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 4)
	{
		return 0;
	}
	return Global_1848[iParam0 /*29*/].f_24[iParam1];
}

int func_15(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 4)
	{
		return 0;
	}
	return Global_1848[iParam0 /*29*/].f_12[iParam1];
}

void func_16(int iParam0, int iParam1, int iParam2)
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

void func_17(int iParam0, int iParam1, int iParam2)
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

void func_18()
{
	if (func_25(14))
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
		Global_19681 = func_19();
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

var func_19()
{
	func_20();
	return Global_111858.f_2359.f_539.f_4321;
}

void func_20()
{
	int iVar0;
	
	if (unk_0xAE06B9E39EBDE049(unk_0x9B0761B4C3EB8BC7()))
	{
		if (func_23(Global_111858.f_2359.f_539.f_4321) != unk_0x36FE6D3220816ADA(unk_0x9B0761B4C3EB8BC7()))
		{
			iVar0 = func_22(unk_0x9B0761B4C3EB8BC7());
			if (func_21(iVar0) && (!func_25(14) || Global_110809))
			{
				if (Global_111858.f_2359.f_539.f_4321 != iVar0 && func_21(Global_111858.f_2359.f_539.f_4321))
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

bool func_21(int iParam0)
{
	return iParam0 < 3;
}

int func_22(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0xAE06B9E39EBDE049(iParam0))
	{
		iVar1 = unk_0x36FE6D3220816ADA(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_23(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_23(int iParam0)
{
	if (func_21(iParam0))
	{
		return func_24(iParam0);
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

var func_24(int iParam0)
{
	return Global_1848[iParam0 /*29*/];
}

bool func_25(int iParam0)
{
	return Global_41631 == iParam0;
}

int func_26(int iParam0)
{
	if (iParam0 == 94 || iParam0 == -1)
	{
		return 0;
	}
	return Global_111858.f_9081.f_330[iParam0 /*6*/];
}

int func_27()
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

int func_28()
{
	return 0;
}

int func_29()
{
	return 1;
}

int func_30()
{
	return 1;
}

int func_31()
{
	if (unk_0x95C5B896CB42B20E(-1226939934))
	{
		return 1;
	}
	return 0;
}

int func_32()
{
	if ((func_15(48, 0) == 1 && func_15(48, 1) == 1) && func_15(48, 2) == 1)
	{
		if ((((func_31() || func_30()) || func_29()) || func_28()) || func_27())
		{
			return 1;
		}
	}
	return 0;
}

void func_33()
{
	unk_0xD39E529EBE5DB04F();
}

