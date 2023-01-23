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
	struct<3> Local_20 = { 0, 0, 0 } ;
	float fLocal_21 = 0f;
	float fLocal_22 = 0f;
	float fLocal_23 = 0f;
	float fLocal_24 = 0f;
	float fLocal_25 = 0f;
	float fLocal_26 = 0f;
	float fLocal_27 = 0f;
	float fLocal_28 = 0f;
	int iLocal_29 = 0;
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
	fLocal_25 = 9.99f;
	fLocal_26 = 0f;
	fLocal_27 = 0f;
	fLocal_28 = 0f;
	unk_0xDB4E5F36ED3505EE();
	func_10();
	func_7();
	settimera(0);
	settimerb(0);
	while (true)
	{
		wait(0);
		if (Global_19681.f_1 != 9)
		{
			switch (Global_19681.f_1)
			{
				case 7:
					if (timera() > 125)
					{
						func_10();
						settimera(0);
					}
					if (timerb() > floor(fLocal_27) * 30 && timerb() > 150)
					{
						unk_0x830F007E19C63E14(Global_19662, "APP_FUNCTION");
						unk_0xAD291B8F75D737AD(1);
						unk_0xE1FDD153F5858534();
						settimerb(0);
					}
					if (timerb() > 2000)
					{
						unk_0x830F007E19C63E14(Global_19662, "APP_FUNCTION");
						unk_0xAD291B8F75D737AD(1);
						unk_0xE1FDD153F5858534();
						settimerb(0);
					}
					break;
				
				case 8:
					if (func_6(2, Global_19649, 0))
					{
						func_5();
						Global_19659 = 1;
						func_10();
						func_7();
						if (Global_19681.f_1 > 3)
						{
							Global_19681.f_1 = 7;
						}
					}
					break;
				
				default:
					break;
			}
			if (func_4())
			{
				func_2();
			}
		}
		else
		{
			Global_19683 = 6;
			func_2();
		}
		if (func_1())
		{
			func_2();
		}
	}
}

int func_1()
{
	if (((Global_19681.f_1 == 1 || Global_19681.f_1 == 3) || Global_19681.f_1 == 0) || Global_19625 == 1)
	{
		Global_19668 = 1;
		return 1;
	}
	return 0;
}

void func_2()
{
	func_3(0, 0);
	func_3(1, 0);
	func_3(2, 0);
	func_3(3, 0);
	func_3(4, 0);
	unk_0xD2459066EA58CE43(&Global_7552, 22);
	unk_0xD39E529EBE5DB04F();
}

void func_3(int iParam0, int iParam1)
{
	Global_4271277[iParam0] = iParam1;
}

int func_4()
{
	if (Global_8157 == 1 || Global_19681.f_1 < 7)
	{
		Global_19668 = 1;
		return 1;
	}
	return 0;
}

void func_5()
{
	if (!unk_0xA59F96B50B97E63C(unk_0x9B0761B4C3EB8BC7(), 0))
	{
		unk_0xC4CC25B68A91D144(-1, "Menu_Back", &Global_19670, 1);
	}
}

int func_6(int iParam0, int iParam1, int iParam2)
{
	if (unk_0x1BD7199394D7F19A(iParam0, iParam1) || (iParam2 == 1 && unk_0x79800E51B3B6D197(iParam0, iParam1)))
	{
		if (unk_0xF8EDFF98A9C94C74())
		{
			if (unk_0x913D69ADE739309E() == 0 || (unk_0xDFAB5E5CBE16E8B1() && unk_0xC1F43F8D0D5EB664(2)))
			{
				return 0;
			}
		}
		if (unk_0xF0C12886E5C1B20E() || unk_0x06EBE4F22EC30D45())
		{
			return 0;
		}
		else
		{
			return 1;
		}
	}
	return 0;
}

void func_7()
{
	if (Global_19669)
	{
		func_8(Global_19662, "SET_SOFT_KEYS", 2f, 0f, 13f, -1f, -1f, "CELL_201", 0, 0, 0, 0);
		func_8(Global_19662, "SET_SOFT_KEYS", 3f, 1f, 14f, -1f, -1f, "CELL_213", 0, 0, 0, 0);
	}
	else
	{
		func_8(Global_19662, "SET_SOFT_KEYS", 2f, 0f, 13f, -1f, -1f, 0, 0, 0, 0, 0);
		func_8(Global_19662, "SET_SOFT_KEYS", 3f, 1f, 14f, -1f, -1f, 0, 0, 0, 0, 0);
	}
	func_8(Global_19662, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
	unk_0xD2459066EA58CE43(&Global_7551, 17);
}

void func_8(int iParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6, char* sParam7, char* sParam8, char* sParam9, char* sParam10, char* sParam11)
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
		func_9(sParam7);
	}
	if (!unk_0x7BCC91F3C1CF24E8(sParam8))
	{
		func_9(sParam8);
	}
	if (!unk_0x7BCC91F3C1CF24E8(sParam9))
	{
		func_9(sParam9);
	}
	if (!unk_0x7BCC91F3C1CF24E8(sParam10))
	{
		func_9(sParam10);
	}
	if (!unk_0x7BCC91F3C1CF24E8(sParam11))
	{
		func_9(sParam11);
	}
	unk_0xE1FDD153F5858534();
}

void func_9(char* sParam0)
{
	unk_0xB23270F3D5E62FDE(sParam0);
	unk_0x2042E9CA4306F725();
}

void func_10()
{
	int iVar0;
	bool bVar1;
	
	if (func_18() == 0)
	{
		if (!unk_0xA59F96B50B97E63C(unk_0x9B0761B4C3EB8BC7(), 0))
		{
			Local_20 = { unk_0x3E4D3CCC220BDFB1(unk_0x9B0761B4C3EB8BC7(), 1) };
			fLocal_21 = unk_0xEF7858F25585F853(unk_0x9B0761B4C3EB8BC7());
			func_17();
			func_16();
			func_15();
			fLocal_22 = (360f - fLocal_21);
			fLocal_25 = (fLocal_25 - fLocal_22);
			if (fLocal_25 < 0f)
			{
				fLocal_25 = (fLocal_25 + 360f);
			}
			if (iLocal_29 == 0)
			{
				unk_0x830F007E19C63E14(Global_19662, "SET_DATA_SLOT");
				unk_0xAD291B8F75D737AD(23);
				unk_0xAD291B8F75D737AD(0);
				if (unk_0xCE990E643CD9D0E5(Global_7552, 30))
				{
					unk_0xAD291B8F75D737AD(-99);
					unk_0xAD291B8F75D737AD(0);
				}
				else
				{
					unk_0xAD291B8F75D737AD(floor(fLocal_25));
					unk_0xAD291B8F75D737AD(floor(fLocal_26));
				}
				unk_0xAD291B8F75D737AD(100);
				if (unk_0xCE990E643CD9D0E5(Global_7552, 22))
				{
					unk_0xAD291B8F75D737AD(1);
				}
				else
				{
					unk_0xAD291B8F75D737AD(0);
				}
				if (unk_0xCE990E643CD9D0E5(Global_7552, 29))
				{
					unk_0xF1B28F753235CE2A(false);
				}
				else
				{
					unk_0xF1B28F753235CE2A(true);
				}
				if (unk_0xCE990E643CD9D0E5(Global_7553, 1))
				{
					unk_0x49B9B8101B158AEE(fLocal_28);
				}
				unk_0xE1FDD153F5858534();
			}
			if (fLocal_21 == fLocal_21)
			{
			}
			func_14(Global_19662, "DISPLAY_VIEW", 23f, to_float(1), -1082130432, -1082130432, -1082130432);
		}
	}
	else if (!unk_0xA59F96B50B97E63C(unk_0x9B0761B4C3EB8BC7(), 0))
	{
		Local_20 = { unk_0x3E4D3CCC220BDFB1(unk_0x9B0761B4C3EB8BC7(), 1) };
		fLocal_21 = unk_0xEF7858F25585F853(unk_0x9B0761B4C3EB8BC7());
		if (Global_4271299 > 21)
		{
		}
		iVar0 = 0;
		while (iVar0 < Global_4271299)
		{
			func_13(iVar0);
			func_12(iVar0);
			func_11(iVar0);
			fLocal_22 = (360f - fLocal_21);
			fLocal_25 = (fLocal_25 - fLocal_22);
			if (fLocal_25 < 0f)
			{
				fLocal_25 = (fLocal_25 + 360f);
			}
			if (iLocal_29 == 0)
			{
				unk_0x830F007E19C63E14(Global_19662, "SET_DATA_SLOT");
				unk_0xAD291B8F75D737AD(23);
				unk_0xAD291B8F75D737AD(iVar0);
				bVar1 = false;
				switch (iVar0)
				{
					case 0:
						if (unk_0xCE990E643CD9D0E5(Global_4271024, 5))
						{
							bVar1 = true;
						}
						break;
					
					case 1:
						if (unk_0xCE990E643CD9D0E5(Global_4271024, 6))
						{
							bVar1 = true;
						}
						break;
					
					case 2:
						if (unk_0xCE990E643CD9D0E5(Global_4271024, 7))
						{
							bVar1 = true;
						}
						break;
					
					case 3:
						if (unk_0xCE990E643CD9D0E5(Global_4271024, 8))
						{
							bVar1 = true;
						}
						break;
				}
				if (bVar1)
				{
					unk_0xAD291B8F75D737AD(-99);
					unk_0xAD291B8F75D737AD(0);
				}
				else
				{
					unk_0xAD291B8F75D737AD(floor(fLocal_25));
					unk_0xAD291B8F75D737AD(floor(fLocal_26));
				}
				unk_0xAD291B8F75D737AD(100);
				if (unk_0xCE990E643CD9D0E5(Global_7552, 22))
				{
					unk_0xF1B28F753235CE2A(true);
				}
				else
				{
					unk_0xF1B28F753235CE2A(true);
				}
				if (unk_0xCE990E643CD9D0E5(Global_7552, 29))
				{
					unk_0xF1B28F753235CE2A(false);
				}
				else
				{
					unk_0xF1B28F753235CE2A(true);
				}
				unk_0x49B9B8101B158AEE(fLocal_28);
				unk_0xAD291B8F75D737AD(Global_4271277[iVar0]);
				unk_0xE1FDD153F5858534();
			}
			if (fLocal_21 == fLocal_21)
			{
			}
			func_14(Global_19662, "DISPLAY_VIEW", 23f, to_float(1), -1082130432, -1082130432, -1082130432);
			iVar0++;
		}
	}
}

float func_11(int iParam0)
{
	fLocal_23 = (Global_4271213[iParam0 /*3*/] - Local_20.x);
	fLocal_24 = (cos(((3.14159f / 180f) * Local_20.x)) * (Global_4271213[iParam0 /*3*/].f_1 - Local_20.f_1));
	fLocal_25 = unk_0x8C91FF3D82E6FB27(fLocal_23, fLocal_24);
	if (fLocal_25 < 0f)
	{
		fLocal_25 = (fLocal_25 + 360f);
	}
	return fLocal_25;
}

float func_12(int iParam0)
{
	fLocal_27 = sqrt(vdist2(Global_4271213[iParam0 /*3*/], Local_20));
	fLocal_28 = (Global_4271213[iParam0 /*3*/].f_2 - Local_20.f_2);
	return fLocal_27;
}

float func_13(int iParam0)
{
	fLocal_26 = sqrt((((Global_4271213[iParam0 /*3*/] - Local_20.x) * (Global_4271213[iParam0 /*3*/] - Local_20.x)) + ((Global_4271213[iParam0 /*3*/].f_1 - Local_20.f_1) * (Global_4271213[iParam0 /*3*/].f_1 - Local_20.f_1))));
	return fLocal_26;
}

void func_14(int iParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6)
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

float func_15()
{
	fLocal_23 = (Global_22111 - Local_20.x);
	fLocal_24 = (cos(((3.14159f / 180f) * Local_20.x)) * (Global_22111.f_1 - Local_20.f_1));
	fLocal_25 = unk_0x8C91FF3D82E6FB27(fLocal_23, fLocal_24);
	if (fLocal_25 < 0f)
	{
		fLocal_25 = (fLocal_25 + 360f);
	}
	return fLocal_25;
}

float func_16()
{
	fLocal_27 = sqrt(vdist2(Global_22111, Local_20));
	fLocal_28 = (Global_22111.f_2 - Local_20.f_2);
	return fLocal_27;
}

float func_17()
{
	fLocal_26 = sqrt((((Global_22111 - Local_20.x) * (Global_22111 - Local_20.x)) + ((Global_22111.f_1 - Local_20.f_1) * (Global_22111.f_1 - Local_20.f_1))));
	return fLocal_26;
}

int func_18()
{
	if (Global_76833 == 1)
	{
		return 1;
	}
	return 0;
}

