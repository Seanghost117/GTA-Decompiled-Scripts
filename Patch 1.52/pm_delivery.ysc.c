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
	int iLocal_20 = 0;
	char* sLocal_21 = NULL;
	float fLocal_22 = 0f;
	var uLocal_23 = 0;
	var uLocal_24 = 0;
	var uLocal_25 = 0;
	float fLocal_26 = 0f;
	float fLocal_27 = 0f;
	var uLocal_28 = 0;
	var uLocal_29 = 0;
	float fLocal_30 = 0f;
	float fLocal_31 = 0f;
	float fLocal_32 = 0f;
	var uLocal_33 = 0;
	var uLocal_34 = 0;
	var uLocal_35 = 0;
	int iLocal_36 = 0;
	int iLocal_37 = 0;
	int iLocal_38 = 0;
	int iLocal_39 = 0;
	var uLocal_40 = 3;
	var uLocal_41 = 0;
	var uLocal_42 = 0;
	var uLocal_43 = 0;
	var uLocal_44 = 0;
	var uLocal_45 = 0;
	var uLocal_46 = 1092616192;
	var uLocal_47 = 1101004800;
	var uLocal_48 = 0;
	var uLocal_49 = 0;
	var uLocal_50 = 0;
	var uLocal_51 = 0;
	var uLocal_52 = 0;
	var uLocal_53 = 0;
	var uLocal_54 = 0;
	var uLocal_55 = 0;
	var uLocal_56 = 3;
	var uLocal_57 = 0;
	var uLocal_58 = 0;
	var uLocal_59 = 0;
	var uLocal_60 = 0;
	var uLocal_61 = 0;
	var uLocal_62 = 0;
	var uLocal_63 = 0;
	struct<3> Local_64 = { 0, 0, 0 } ;
	struct<3> Local_65 = { 0, 0, 0 } ;
	struct<3> Local_66 = { 0, 0, 0 } ;
	float fLocal_67 = 0f;
	float fLocal_68 = 0f;
	bool bLocal_69 = 0;
	int iLocal_70 = 0;
	int iLocal_71 = 0;
	int iLocal_72 = 0;
	int iLocal_73 = 0;
	int iLocal_74 = 0;
	int iLocal_75 = 0;
	int iLocal_76 = 0;
	int iLocal_77 = 0;
	int iLocal_78 = 0;
	int iLocal_79 = 0;
	int iLocal_80 = 0;
	int iLocal_81 = 0;
	int iLocal_82 = 0;
	int iLocal_83 = 0;
	int iLocal_84[2] = { 0, 0 };
	int iLocal_85[2] = { 0, 0 };
	int iLocal_86 = 0;
	int iLocal_87 = 0;
	int iLocal_88 = 0;
	var uLocal_89[2] = { 0, 0 };
	int iLocal_90 = 0;
	char* sLocal_91 = NULL;
	char* sLocal_92 = NULL;
	char* sLocal_93 = NULL;
	var uLocal_94 = 0;
	var uLocal_95 = 0;
	var uLocal_96 = -1;
	var uLocal_97 = 0;
	var uLocal_98 = 0;
	var uLocal_99 = 0;
	var uLocal_100 = 0;
	var uLocal_101 = 0;
	var uLocal_102 = 0;
	var uLocal_103 = 1000;
	var uLocal_104 = 1000;
	var uLocal_105 = 0;
	int iLocal_106 = 0;
	int iLocal_107 = 0;
	int iLocal_108 = 0;
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
	iLocal_20 = 3;
	sLocal_21 = "NULL";
	fLocal_22 = 0f;
	fLocal_26 = -0.0375f;
	fLocal_27 = 0.17f;
	fLocal_30 = 80f;
	fLocal_31 = 140f;
	fLocal_32 = 180f;
	iLocal_79 = -1;
	sLocal_91 = "PMDL_OBJ";
	sLocal_92 = "PMDL_LOC";
	sLocal_93 = "PMDL_BCK";
	unk_0x227BB9ED71ECB6E8(1);
	if (unk_0xED06FD5709A59F02(3))
	{
		func_140(2);
		func_114();
	}
	iLocal_36 = func_112();
	while (true)
	{
		switch (iLocal_37)
		{
			case 0:
				if (!iLocal_70)
				{
					func_107();
				}
				else
				{
					func_106();
				}
				if (bLocal_69)
				{
					iLocal_71 = 1;
					iLocal_37 = 1;
				}
				break;
			
			case 1:
				if (!func_105())
				{
					switch (iLocal_38)
					{
						case 0:
							func_102();
							break;
						
						case 1:
							if (iLocal_36 == 5 || iLocal_36 == 6)
							{
								func_66();
							}
							else
							{
								func_65();
							}
							break;
						
						case 2:
							func_9();
							if (iLocal_36 < 3)
							{
								func_7();
							}
							else if (iLocal_36 > 6)
							{
								func_7();
								func_2();
							}
							break;
						
						case 3:
						case 4:
							func_1();
							break;
					}
				}
				else
				{
					func_1();
				}
				break;
		}
		wait(0);
	}
}

void func_1()
{
	func_140(2);
	func_114();
}

void func_2()
{
	int iVar0;
	int iVar1;
	
	if (unk_0xAE06B9E39EBDE049(iLocal_86))
	{
		if (unk_0x80FF6C016CDB0FAF(iLocal_86, 0))
		{
			iVar0 = 200;
			iVar1 = (unk_0x4F5F2FB7AE0EB7AB(iLocal_86) - 800);
			if (unk_0x50F857464DE13ED2(iLocal_86))
			{
				unk_0x697DA7132EE43ABC(iLocal_86, (unk_0x4F5F2FB7AE0EB7AB(iLocal_86) - 5), 0);
			}
			if (iVar1 <= 0)
			{
				iLocal_38 = 4;
			}
			else if (iVar1 < 75)
			{
				func_3(iVar1, iVar0, "PMDL_DMG", 6, 0, 1, 2);
			}
			else
			{
				func_3(iVar1, iVar0, "PMDL_DMG", 1, 0, 1, 2);
			}
		}
		else
		{
			iLocal_38 = 4;
		}
	}
	else
	{
		iLocal_38 = 4;
	}
}

void func_3(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_4(iParam0, iParam1, sParam2, iParam3, iParam4, iParam6, -1f, -1f, 0, iParam5, 0, 0, 0, 0, 0, 0, 0, 1, 0, 1, 0, 0, 1, -1, 0, -1, -1082130432, -1082130432, 0, 1, 0, 0, 1, -1, 0);
}

void func_4(var uParam0, var uParam1, char* sParam2, var uParam3, var uParam4, var uParam5, float fParam6, float fParam7, int iParam8, var uParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17, int iParam18, int iParam19, int iParam20, int iParam21, int iParam22, int iParam23, int iParam24, int iParam25, int iParam26, int iParam27, int iParam28, int iParam29, int iParam30, int iParam31, int iParam32, int iParam33, int iParam34)
{
	int iVar0;
	int iVar1;
	
	iVar0 = -1;
	iVar1 = 0;
	while (iVar1 <= 9)
	{
		if (iVar0 == -1)
		{
			if (func_6(0, iVar1) == 0)
			{
				iVar0 = iVar1;
			}
		}
		iVar1++;
	}
	if (iVar0 > -1)
	{
		Global_1378744.f_1 = 1;
		func_5(0, iVar0);
		Global_1378744.f_1135[iVar0] = uParam0;
		Global_1378744.f_1135.f_11[iVar0] = uParam1;
		StringCopy(&(Global_1378744.f_1135.f_22[iVar0 /*16*/]), sParam2, 64);
		Global_1378744.f_1135.f_194[iVar0] = uParam3;
		Global_1378744.f_1135.f_183[iVar0] = uParam4;
		Global_1378744.f_1135.f_216[iVar0] = uParam5;
		Global_1378744.f_1135.f_227[iVar0 /*3*/] = fParam6;
		Global_1378744.f_1135.f_227[iVar0 /*3*/].f_1 = fParam7;
		Global_1378744.f_1135.f_258[iVar0] = iParam8;
		Global_1378744.f_1135.f_269[iVar0] = uParam9;
		Global_1378744.f_1135.f_312[iVar0] = iParam10;
		Global_1378744.f_1135.f_323[iVar0] = iParam11;
		Global_1378744.f_1135.f_334[iVar0] = iParam12;
		Global_1378744.f_1135.f_345[iVar0] = iParam13;
		Global_1378744.f_1130 = 1;
		Global_1378744.f_1135.f_356[iVar0] = iParam14;
		Global_1378744.f_1135.f_367[iVar0] = iParam15;
		Global_1378744.f_1135.f_378[iVar0] = iParam16;
		Global_1378744.f_1135.f_389[iVar0] = iParam17;
		Global_1378744.f_1135.f_400[iVar0] = iParam18;
		Global_1378744.f_1135.f_411[iVar0] = iParam19;
		Global_1378744.f_1135.f_422[iVar0] = iParam20;
		Global_1378744.f_1135.f_433[iVar0] = iParam21;
		Global_1378744.f_1135.f_444[iVar0] = iParam22;
		Global_1378744.f_1135.f_455[iVar0] = iParam23;
		Global_1378744.f_1135.f_466[iVar0] = iParam24;
		Global_1378744.f_1135.f_205[iVar0] = iParam25;
		Global_1378744.f_1135.f_477[iVar0] = iParam26;
		Global_1378744.f_1135.f_488[iVar0] = iParam27;
		Global_1378744.f_1135.f_499[iVar0] = iParam28;
		Global_1378744.f_1135.f_510[iVar0] = iParam29;
		Global_1378744.f_1135.f_521[iVar0] = iParam30;
		Global_1378744.f_1135.f_532[iVar0] = iParam31;
		Global_1378744.f_1135.f_543[iVar0] = iParam32;
		Global_1378744.f_1135.f_554[iVar0] = iParam33;
		Global_1378744.f_1135.f_565[iVar0] = iParam34;
	}
}

void func_5(int iParam0, int iParam1)
{
	unk_0xBE20AB8238688965(&(Global_1378744.f_6304[iParam0]), iParam1);
}

bool func_6(int iParam0, int iParam1)
{
	return unk_0xCE990E643CD9D0E5(Global_1378744.f_6304[iParam0], iParam1);
}

void func_7()
{
	int iVar0;
	
	iVar0 = (iLocal_74 - unk_0x578C4EF320340AF7());
	if (iVar0 < 0)
	{
		iVar0 = 0;
	}
	if (unk_0x578C4EF320340AF7() >= iLocal_78)
	{
		func_8(iVar0, "TIMER_TIME", 0, 0, -1, 0, 2, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, -1);
	}
	else
	{
		func_8(iVar0, "TIMER_TIME", 0, 0, -1, 0, 2, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, -1);
	}
	switch (iLocal_75)
	{
		case 0:
			if (unk_0x578C4EF320340AF7() >= (iLocal_74 - 10000))
			{
				unk_0xC4CC25B68A91D144(-1, "10_SEC_WARNING", "HUD_MINI_GAME_SOUNDSET", true);
				iLocal_75++;
			}
			break;
		
		case 1:
			if (unk_0x578C4EF320340AF7() >= (iLocal_74 - 9000))
			{
				unk_0xC4CC25B68A91D144(-1, "10_SEC_WARNING", "HUD_MINI_GAME_SOUNDSET", true);
				iLocal_75++;
			}
			break;
		
		case 2:
			if (unk_0x578C4EF320340AF7() >= (iLocal_74 - 8000))
			{
				unk_0xC4CC25B68A91D144(-1, "10_SEC_WARNING", "HUD_MINI_GAME_SOUNDSET", true);
				iLocal_75++;
			}
			break;
		
		case 3:
			if (unk_0x578C4EF320340AF7() >= (iLocal_74 - 7000))
			{
				unk_0xC4CC25B68A91D144(-1, "10_SEC_WARNING", "HUD_MINI_GAME_SOUNDSET", true);
				iLocal_75++;
			}
			break;
		
		case 4:
			if (unk_0x578C4EF320340AF7() >= (iLocal_74 - 6000))
			{
				unk_0xC4CC25B68A91D144(-1, "10_SEC_WARNING", "HUD_MINI_GAME_SOUNDSET", true);
				iLocal_75++;
			}
			break;
		
		case 5:
			if (unk_0x578C4EF320340AF7() >= (iLocal_74 - 5000))
			{
				unk_0xC4CC25B68A91D144(-1, "10_SEC_WARNING", "HUD_MINI_GAME_SOUNDSET", true);
				iLocal_75++;
			}
			break;
		
		case 6:
			if (unk_0x578C4EF320340AF7() >= (iLocal_74 - 4500))
			{
				unk_0xC4CC25B68A91D144(-1, "10_SEC_WARNING", "HUD_MINI_GAME_SOUNDSET", true);
				iLocal_75++;
			}
			break;
		
		case 7:
			if (unk_0x578C4EF320340AF7() >= (iLocal_74 - 4000))
			{
				unk_0xC4CC25B68A91D144(-1, "10_SEC_WARNING", "HUD_MINI_GAME_SOUNDSET", true);
				iLocal_75++;
			}
			break;
		
		case 8:
			if (unk_0x578C4EF320340AF7() >= (iLocal_74 - 3500))
			{
				unk_0xC4CC25B68A91D144(-1, "10_SEC_WARNING", "HUD_MINI_GAME_SOUNDSET", true);
				iLocal_75++;
			}
			break;
		
		case 9:
			if (unk_0x578C4EF320340AF7() >= (iLocal_74 - 3000))
			{
				unk_0xC4CC25B68A91D144(-1, "10_SEC_WARNING", "HUD_MINI_GAME_SOUNDSET", true);
				iLocal_75++;
			}
			break;
		
		case 10:
			if (unk_0x578C4EF320340AF7() >= (iLocal_74 - 2500))
			{
				unk_0xC4CC25B68A91D144(-1, "10_SEC_WARNING", "HUD_MINI_GAME_SOUNDSET", true);
				iLocal_75++;
			}
			break;
		
		case 11:
			if (unk_0x578C4EF320340AF7() >= (iLocal_74 - 2000))
			{
				unk_0xC4CC25B68A91D144(-1, "10_SEC_WARNING", "HUD_MINI_GAME_SOUNDSET", true);
				iLocal_75++;
			}
			break;
		
		case 12:
			if (unk_0x578C4EF320340AF7() >= (iLocal_74 - 1500))
			{
				unk_0xC4CC25B68A91D144(-1, "10_SEC_WARNING", "HUD_MINI_GAME_SOUNDSET", true);
				iLocal_75++;
			}
			break;
		
		case 13:
			if (unk_0x578C4EF320340AF7() >= (iLocal_74 - 1000))
			{
				unk_0xC4CC25B68A91D144(-1, "10_SEC_WARNING", "HUD_MINI_GAME_SOUNDSET", true);
				iLocal_75++;
			}
			break;
		
		case 14:
			if (unk_0x578C4EF320340AF7() >= (iLocal_74 - 500))
			{
				unk_0xC4CC25B68A91D144(-1, "10_SEC_WARNING", "HUD_MINI_GAME_SOUNDSET", true);
				iLocal_75++;
			}
			break;
		
		case 15:
			if (unk_0x578C4EF320340AF7() >= iLocal_74)
			{
				unk_0xC4CC25B68A91D144(-1, "TIMER_STOP", "HUD_MINI_GAME_SOUNDSET", true);
				iLocal_75++;
			}
			break;
		
		case 16:
			break;
	}
	if (unk_0x578C4EF320340AF7() >= iLocal_74)
	{
		iLocal_38 = 3;
	}
}

void func_8(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17)
{
	int iVar0;
	int iVar1;
	
	iVar0 = -1;
	iVar1 = 0;
	while (iVar1 <= 9)
	{
		if (iVar0 == -1)
		{
			if (func_6(7, iVar1) == 0)
			{
				iVar0 = iVar1;
			}
		}
		iVar1++;
	}
	if (iVar0 > -1)
	{
		Global_1378744.f_1 = 1;
		func_5(7, iVar0);
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

void func_9()
{
	int iVar0;
	int iVar1;
	
	if (iLocal_36 >= 3 && iLocal_36 <= 4)
	{
		iVar0 = 0;
		while (iVar0 < iLocal_85)
		{
			if (!iLocal_72)
			{
				if (!unk_0x5AEB5DDFFAD43CA5(iLocal_85[iVar0]))
				{
					if (!unk_0xC2169C00B643278B(unk_0x9B0761B4C3EB8BC7(), Local_64, 50f, 50f, 50f, false, true, 0))
					{
						unk_0x26152FD46A297C2F(unk_0x460153A63B9477BC(), 2, 0);
						unk_0x4B86C627B5EABFBF(unk_0x460153A63B9477BC(), 0);
						unk_0x204CDAA31815E962(unk_0x460153A63B9477BC(), 0f);
						iLocal_72 = 1;
					}
				}
			}
			else if (!unk_0x0F1E960B06B93848(unk_0x460153A63B9477BC(), 0))
			{
				if (!unk_0x5AEB5DDFFAD43CA5(iLocal_85[iVar0]))
				{
					unk_0x8B18A80E8EB15510(iLocal_85[iVar0], unk_0x9B0761B4C3EB8BC7(), 1000f, -1, 0, 0);
					unk_0xCBA6B2B569DCAFD8(iLocal_85[iVar0], true);
					unk_0x2481907DEE6B85EA(&(iLocal_85[iVar0]));
				}
				if (unk_0xAE06B9E39EBDE049(iLocal_87))
				{
					unk_0xE730EAF558C97567(&iLocal_87);
				}
			}
			iVar0++;
		}
	}
	if (func_21(&iLocal_39, Local_65, Global_22, 1, iLocal_86, sLocal_92, "", sLocal_93, 1, 0, 1, -1))
	{
		func_19(iLocal_86, 10.5f, 2, 1056964608, 0, 1, 0);
		unk_0x0AB756271BADC8DF(unk_0x9B0761B4C3EB8BC7(), 2000, 0);
		unk_0xA5DA49AF5FFE9112(iLocal_86, 0);
		func_14(&iLocal_39, 1, 0);
		func_13();
	}
	iVar1 = 0;
	while (iVar1 < iLocal_84)
	{
		if (!unk_0x5AEB5DDFFAD43CA5(iLocal_84[iVar1]))
		{
			if (!unk_0x8F678487EEBD8CE4(uLocal_89[iVar1]))
			{
				uLocal_89[iVar1] = func_10(iLocal_84[iVar1], 1, 145);
				unk_0x9DC06E2A59C5AEBB(&iLocal_108);
				unk_0x0AB756271BADC8DF(0, 0, 0);
				unk_0x8FF9CE1C0F94F59A(0, unk_0x9B0761B4C3EB8BC7(), 0, 16);
				unk_0x19F29730874AD6F1(iLocal_108);
				unk_0x9B6EC2CECE1010EF(iLocal_84[iVar1], iLocal_108);
				unk_0x4F83FEE4454169D4(&iLocal_108);
				unk_0xCBA6B2B569DCAFD8(iLocal_84[iVar1], true);
			}
			if (!unk_0x910DFF8E55ABB8EC(iLocal_84[iVar1], unk_0x9B0761B4C3EB8BC7(), 100f, 100f, 100f, 0, 1, 0))
			{
				if (unk_0x8F678487EEBD8CE4(uLocal_89[iVar1]))
				{
					unk_0x93370FA10F15BE44(&(uLocal_89[iVar1]));
				}
				unk_0x8B18A80E8EB15510(iLocal_84[iVar1], unk_0x9B0761B4C3EB8BC7(), 1000f, -1, 0, 0);
				unk_0xCBA6B2B569DCAFD8(iLocal_84[iVar1], true);
				unk_0x2481907DEE6B85EA(&(iLocal_84[iVar1]));
			}
		}
		else if (unk_0x8F678487EEBD8CE4(uLocal_89[iVar1]))
		{
			unk_0x93370FA10F15BE44(&(uLocal_89[iVar1]));
		}
		iVar1++;
	}
}

int func_10(int iParam0, bool bParam1, int iParam2)
{
	int iVar0;
	
	iVar0 = func_11(iParam0, !bParam1, 0);
	if ((iParam2 != 145 && unk_0x8F678487EEBD8CE4(iVar0)) && unk_0x3030AE9FCF1BC243(&(Global_1848[iParam2 /*29*/].f_3)))
	{
		unk_0xB023F5C66F5716C7(iVar0, &(Global_1848[iParam2 /*29*/].f_3));
	}
	return iVar0;
}

int func_11(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	
	if (!unk_0xAE06B9E39EBDE049(iParam0))
	{
		return 0;
	}
	iVar0 = unk_0x2BE000892D65EA2A(iParam0);
	if (unk_0x20F7576FDB52E2B0(iParam0))
	{
		unk_0xFA81E0FBD7F5ACA0(iVar0, func_12(unk_0x25DDB354A40FFCDB(), 1f, 1f));
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
		unk_0xFA81E0FBD7F5ACA0(iVar0, func_12(unk_0x25DDB354A40FFCDB(), 0.7f, 0.7f));
		unk_0x3060C53EAE54BBE7(iVar0, bParam1);
	}
	else if (unk_0x49116E591C7E1412(iParam0))
	{
		unk_0xFA81E0FBD7F5ACA0(iVar0, func_12(unk_0x25DDB354A40FFCDB(), 0.7f, 0.7f));
	}
	return iVar0;
}

float func_12(bool bParam0, float fParam1, float fParam2)
{
	if (bParam0)
	{
		return fParam1;
	}
	return fParam2;
}

void func_13()
{
	func_140(1);
	func_114();
}

void func_14(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	
	if (unk_0xCE990E643CD9D0E5(iParam0->f_13, 30))
	{
		bParam1 = true;
	}
	func_18(iParam0);
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (unk_0x8F678487EEBD8CE4(iParam0->f_1[iVar0]))
		{
			unk_0x93370FA10F15BE44(&(iParam0->f_1[iVar0]));
		}
		func_17(iVar0, iParam0);
		func_16(iVar0, iParam0);
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 31)
	{
		if (iVar0 != 8)
		{
			unk_0xD2459066EA58CE43(&(iParam0->f_13), iVar0);
			unk_0xD2459066EA58CE43(&(iParam0->f_14), iVar0);
		}
		iVar0++;
	}
	if (unk_0x8F678487EEBD8CE4(*iParam0))
	{
		unk_0x93370FA10F15BE44(iParam0);
	}
	iParam0->f_6 = 0;
	iParam0->f_12 = 0;
	iParam0->f_15 = 0;
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (!unk_0x5AEB5DDFFAD43CA5(iParam0->f_17[iVar0]))
		{
			unk_0x83BBFE5E96C64FBA(iParam0->f_17[iVar0], 1);
			unk_0x59DF7D162BF6D02E(iParam0->f_17[iVar0], 1);
			if (bParam2)
			{
				unk_0x694113444F21E39F(iParam0->f_17[iVar0], 32, true);
				unk_0x694113444F21E39F(iParam0->f_17[iVar0], 305, false);
			}
			unk_0x694113444F21E39F(iParam0->f_17[iVar0], 268, false);
			if (bParam1)
			{
				if (unk_0xFE6F151E15A69B3A(iParam0->f_17[iVar0], func_15()) && iParam0->f_17[iVar0] != unk_0x9B0761B4C3EB8BC7())
				{
					unk_0x59478CBBF96AF7D1(iParam0->f_17[iVar0]);
				}
			}
			if (!unk_0xCE990E643CD9D0E5(iParam0->f_13, 29))
			{
				unk_0x042EA371AD4AE883(iParam0->f_17[iVar0], false, -1, 0);
			}
			iParam0->f_17[iVar0] = 0;
		}
		iVar0++;
	}
	if (unk_0x5A228A6A51E757C8(unk_0x460153A63B9477BC()))
	{
		unk_0x83BBFE5E96C64FBA(unk_0x9B0761B4C3EB8BC7(), 1);
		unk_0x59DF7D162BF6D02E(unk_0x9B0761B4C3EB8BC7(), 1);
	}
	if (unk_0x5A228A6A51E757C8(unk_0x460153A63B9477BC()))
	{
		if (bParam2)
		{
			unk_0x694113444F21E39F(unk_0x9B0761B4C3EB8BC7(), 32, true);
		}
	}
	iParam0->f_21 = 0;
}

int func_15()
{
	return unk_0x14A1FF4316FA17CB(unk_0x2639A2323BEA8CC6());
}

void func_16(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case 0:
			unk_0xD2459066EA58CE43(&(uParam1->f_13), 17);
			break;
		
		case 1:
			unk_0xD2459066EA58CE43(&(uParam1->f_13), 18);
			break;
		
		case 2:
			unk_0xD2459066EA58CE43(&(uParam1->f_13), 19);
			break;
	}
}

void func_17(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case 0:
			unk_0xD2459066EA58CE43(&(uParam1->f_13), 14);
			break;
		
		case 1:
			unk_0xD2459066EA58CE43(&(uParam1->f_13), 15);
			break;
		
		case 2:
			unk_0xD2459066EA58CE43(&(uParam1->f_13), 16);
			break;
	}
}

void func_18(var uParam0)
{
	if (unk_0x8F678487EEBD8CE4(uParam0->f_5))
	{
		unk_0x93370FA10F15BE44(&(uParam0->f_5));
	}
}

int func_19(int iParam0, float fParam1, int iParam2, float fParam3, int iParam4, bool bParam5, bool bParam6)
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
	func_20(iParam0);
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

void func_20(int iParam0)
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

bool func_21(int iParam0, struct<3> Param1, struct<3> Param2, bool bParam3, int iParam4, char* sParam5, char* sParam6, char* sParam7, bool bParam8, int iParam9, bool bParam10, int iParam11)
{
	return func_22(iParam0, Param1, Param2, func_64(), func_64(), bParam3, 5, 0, 0, 0, iParam4, sParam5, func_63(), func_63(), func_63(), func_63(), sParam6, 0, bParam8, sParam7, 0, iParam9, bParam10, iParam11, 0, 0, 0, 1, 1065353216);
}

int func_22(int iParam0, struct<3> Param1, struct<3> Param2, struct<3> Param3, struct<3> Param4, bool bParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, char* sParam11, char* sParam12, char* sParam13, char* sParam14, char* sParam15, char* sParam16, bool bParam17, bool bParam18, char* sParam19, bool bParam20, int iParam21, bool bParam22, int iParam23, int iParam24, int iParam25, int iParam26, bool bParam27, float fParam28)
{
	int iVar0;
	bool bVar1;
	int iVar2;
	struct<3> Var3;
	bool bVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	Var3 = { Param1 + Vector(1f, 0f, 0f) };
	iParam0->f_17[0] = iParam7;
	iParam0->f_17[1] = iParam8;
	iParam0->f_17[2] = iParam9;
	iParam0->f_16 = iParam7;
	func_62(iParam0);
	func_61(iParam0);
	func_60();
	if (func_44(iParam0, iParam0->f_17[0], iParam0->f_17[1], iParam0->f_17[2], sParam12, sParam13, sParam14, sParam15, iParam0->f_8, bParam17, iParam10, 0, 0, iParam24, iParam25, iParam26, iParam6, bParam18))
	{
		func_43(sParam12);
		func_43(sParam13);
		func_43(sParam14);
		func_43(sParam15);
		if (unk_0x87F0CB19476706C3())
		{
			bVar1 = false;
			if (unk_0x80FF6C016CDB0FAF(iParam10, 0))
			{
				if (unk_0xE0B3BC41DDA88DF0(unk_0x9B0761B4C3EB8BC7(), iParam10, false))
				{
					unk_0xBE20AB8238688965(&(iParam0->f_13), 3);
					if (!unk_0xCE990E643CD9D0E5(iParam0->f_13, 9))
					{
						unk_0xD2459066EA58CE43(&(iParam0->f_13), 4);
					}
					if (unk_0xCE990E643CD9D0E5(iParam0->f_13, 23))
					{
						unk_0xD2459066EA58CE43(&(iParam0->f_13), 23);
					}
					unk_0xBE20AB8238688965(&(iParam0->f_13), 9);
					bVar1 = true;
				}
			}
			else if (iParam6 == 4 || iParam6 == 5)
			{
				if (func_41(iParam0, iParam21))
				{
					unk_0xBE20AB8238688965(&(iParam0->f_13), 3);
					if (!unk_0xCE990E643CD9D0E5(iParam0->f_13, 9))
					{
						unk_0xD2459066EA58CE43(&(iParam0->f_13), 4);
					}
					unk_0xBE20AB8238688965(&(iParam0->f_13), 9);
					bVar1 = true;
				}
			}
			else
			{
				bVar1 = true;
			}
			if (bVar1)
			{
				func_43(sParam16);
				func_43(sParam19);
				func_43("MORE_SEATS");
				if (bParam18 && unk_0x0F1E960B06B93848(unk_0x460153A63B9477BC(), 0))
				{
					if (unk_0x8F678487EEBD8CE4(iParam0->f_5))
					{
						unk_0x93370FA10F15BE44(&(iParam0->f_5));
						func_43(sParam11);
					}
					if (unk_0x8F678487EEBD8CE4(*iParam0))
					{
						unk_0x93370FA10F15BE44(iParam0);
					}
					if ((!func_37(iParam0, 1) && !func_36(iParam0)) && !unk_0xCE990E643CD9D0E5(iParam0->f_13, 0))
					{
						if (bParam22)
						{
							func_34(iParam0, "LOSE_WANTED", 0);
							if (!unk_0x5AEB5DDFFAD43CA5(iParam0->f_17[0]))
							{
								func_32(iParam0->f_17[0], "VEHICLE_POLICE_PURSUIT", 3);
							}
						}
						unk_0xBE20AB8238688965(&(iParam0->f_13), 0);
						unk_0xD2459066EA58CE43(&(iParam0->f_13), 1);
					}
				}
				else
				{
					if (unk_0xCE990E643CD9D0E5(iParam0->f_13, 0))
					{
						func_43("LOSE_WANTED");
						unk_0xD2459066EA58CE43(&(iParam0->f_13), 0);
						unk_0xBE20AB8238688965(&(iParam0->f_13), 1);
					}
					if (unk_0xCE990E643CD9D0E5(iParam0->f_13, 1))
					{
						if (!func_37(iParam0, 1))
						{
							if (!unk_0x5AEB5DDFFAD43CA5(iParam0->f_17[0]))
							{
								func_32(iParam0->f_17[0], "LOSE_WANTED_LEVEL", 3);
							}
							unk_0xD2459066EA58CE43(&(iParam0->f_13), 1);
						}
					}
					if (!unk_0x8F678487EEBD8CE4(iParam0->f_5))
					{
						if (unk_0x8F678487EEBD8CE4(*iParam0))
						{
							unk_0x93370FA10F15BE44(iParam0);
						}
						iParam0->f_5 = func_31(Var3, 0);
						if (!iParam23 == -1)
						{
							unk_0xE7B8403ABCA0391D(iParam0->f_5, iParam23);
						}
						if (bParam27)
						{
							func_30(iParam0->f_5, iParam0);
						}
					}
					else if (!func_29(Var3, unk_0x41A1ED9BB4ED4772(iParam0->f_5), 0.1f, 0))
					{
						unk_0xC96DB2548BD4EDDD(iParam0->f_5, Var3);
						if (bParam27)
						{
							func_30(iParam0->f_5, iParam0);
						}
					}
					if (!func_37(iParam0, 2))
					{
						if (!unk_0xCE990E643CD9D0E5(iParam0->f_13, 2))
						{
							func_34(iParam0, sParam11, 0);
							unk_0xBE20AB8238688965(&(iParam0->f_13), 2);
						}
					}
					if (iParam6 == 4 || iParam6 == 5)
					{
						if (unk_0xCE990E643CD9D0E5(iParam0->f_13, 13))
						{
							bParam5 = false;
						}
					}
					bVar1 = false;
					bVar4 = false;
					iVar5 = 0;
					if ((iParam6 == 1 || iParam6 == 3) || iParam6 == 5)
					{
						bVar4 = true;
					}
					if (iParam6 == 2 || iParam6 == 3)
					{
						iVar5 = 1;
					}
					else if (iParam6 == 4 || iParam6 == 5)
					{
						iVar5 = 2;
					}
					if (bParam20)
					{
						unk_0xC2169C00B643278B(unk_0x9B0761B4C3EB8BC7(), Param1, Param2, bParam5, bVar4, iVar5);
						if (unk_0x1037B9D45CE6B788(unk_0x9B0761B4C3EB8BC7(), Param3, Param4, fParam28, 0, bVar4, iVar5))
						{
							bVar1 = true;
						}
					}
					else if (unk_0xC2169C00B643278B(unk_0x9B0761B4C3EB8BC7(), Param1, Param2, bParam5, bVar4, iVar5))
					{
						bVar1 = true;
					}
					if (bVar1)
					{
						bVar1 = true;
						iVar2 = 0;
						while (iVar2 < 3)
						{
							if (!unk_0x5AEB5DDFFAD43CA5(iParam0->f_17[iVar2]))
							{
								if (iParam6 == 4 || iParam6 == 5)
								{
									iVar0 = unk_0xA5D5B1042E8F47BD(unk_0x9B0761B4C3EB8BC7(), false);
									if (!unk_0xE0B3BC41DDA88DF0(iParam0->f_17[iVar2], iVar0, false))
									{
										bVar1 = false;
									}
								}
								else if (iParam10 != 0)
								{
									if (!unk_0xE0B3BC41DDA88DF0(iParam0->f_17[iVar2], iParam10, false))
									{
										bVar1 = false;
									}
								}
								else if (!unk_0xFE6F151E15A69B3A(iParam0->f_17[iVar2], func_15()) || !func_27(iParam0->f_17[iVar2], 1))
								{
									bVar1 = false;
								}
							}
							iVar2++;
						}
						if (bVar1)
						{
							if (func_24(iParam0))
							{
								func_43(sParam11);
								func_43(sParam16);
								func_43(sParam12);
								func_43(sParam13);
								func_43(sParam14);
								func_43(sParam15);
								func_43("LOSE_WANTED");
								func_43("MORE_SEATS");
								func_43(sParam19);
								func_14(iParam0, 1, 0);
								return 1;
							}
						}
					}
				}
			}
			else if (unk_0xAE06B9E39EBDE049(iParam10))
			{
				if ((bParam18 && unk_0x0F1E960B06B93848(unk_0x460153A63B9477BC(), 0)) && (!unk_0xCE990E643CD9D0E5(iParam0->f_13, 9) && !unk_0xCE990E643CD9D0E5(iParam0->f_13, 22)))
				{
					func_43(sParam16);
					func_43(sParam19);
					if (unk_0x8F678487EEBD8CE4(iParam0->f_5) || unk_0x8F678487EEBD8CE4(*iParam0))
					{
						unk_0x93370FA10F15BE44(&(iParam0->f_5));
						unk_0x93370FA10F15BE44(iParam0);
						func_43(sParam11);
					}
					if ((!func_37(iParam0, 1) && !func_36(iParam0)) && !unk_0xCE990E643CD9D0E5(iParam0->f_13, 0))
					{
						if (bParam22)
						{
							func_34(iParam0, "LOSE_WANTED", 0);
							if (!unk_0x5AEB5DDFFAD43CA5(iParam0->f_17[0]))
							{
								func_32(iParam0->f_17[0], "VEHICLE_POLICE_PURSUIT", 3);
							}
						}
						unk_0xBE20AB8238688965(&(iParam0->f_13), 0);
						unk_0xD2459066EA58CE43(&(iParam0->f_13), 1);
					}
				}
				else
				{
					if (unk_0xCE990E643CD9D0E5(iParam0->f_13, 0))
					{
						func_43("LOSE_WANTED");
						unk_0xD2459066EA58CE43(&(iParam0->f_13), 0);
						unk_0xBE20AB8238688965(&(iParam0->f_13), 1);
					}
					if (unk_0xCE990E643CD9D0E5(iParam0->f_13, 1))
					{
						if (!func_37(iParam0, 1))
						{
							if (!unk_0x5AEB5DDFFAD43CA5(iParam0->f_17[0]))
							{
								func_32(iParam0->f_17[0], "LOSE_WANTED_LEVEL", 3);
							}
							unk_0xD2459066EA58CE43(&(iParam0->f_13), 1);
						}
					}
					if (unk_0x80FF6C016CDB0FAF(iParam10, 0))
					{
						if (!unk_0x8F678487EEBD8CE4(*iParam0))
						{
							if (unk_0x8F678487EEBD8CE4(iParam0->f_5))
							{
								unk_0x93370FA10F15BE44(&(iParam0->f_5));
								func_43(sParam11);
							}
							*iParam0 = func_23(iParam10, 0, 0);
							unk_0x14C1B9C77E952C6F(*iParam0, 2);
							if (!unk_0xCE990E643CD9D0E5(iParam0->f_13, 4))
							{
								func_30(*iParam0, iParam0);
							}
						}
						if (!func_37(iParam0, 2))
						{
							if (!unk_0xCE990E643CD9D0E5(iParam0->f_13, 3))
							{
								func_34(iParam0, sParam16, 0);
								unk_0xBE20AB8238688965(&(iParam0->f_13), 3);
								unk_0xD2459066EA58CE43(&(iParam0->f_13), 4);
							}
							else if (unk_0xCE990E643CD9D0E5(iParam0->f_13, 9))
							{
								if (!unk_0x211E6DB3335430B4(sParam19))
								{
									if (!unk_0xCE990E643CD9D0E5(iParam0->f_13, 4))
									{
										func_34(iParam0, sParam19, 0);
										unk_0xBE20AB8238688965(&(iParam0->f_13), 4);
									}
								}
								else if (!unk_0xCE990E643CD9D0E5(iParam0->f_13, 4))
								{
									func_34(iParam0, sParam16, 0);
									unk_0xBE20AB8238688965(&(iParam0->f_13), 4);
								}
								if (!unk_0xCE990E643CD9D0E5(iParam0->f_13, 23))
								{
									if (!unk_0x5AEB5DDFFAD43CA5(iParam0->f_17[0]))
									{
										func_32(iParam0->f_17[0], "GET_IN_CAR", 3);
									}
									unk_0xBE20AB8238688965(&(iParam0->f_13), 23);
								}
							}
						}
					}
				}
			}
			else
			{
				if (unk_0x8F678487EEBD8CE4(iParam0->f_5))
				{
					unk_0x93370FA10F15BE44(&(iParam0->f_5));
					func_43(sParam11);
				}
				if (iParam6 == 4 || iParam6 == 5)
				{
					if (iParam21 > 0)
					{
						if (!func_37(iParam0, 2))
						{
							if (unk_0x6E0C5E7AAF8B6214(unk_0x9B0761B4C3EB8BC7()))
							{
								if (!unk_0xCE990E643CD9D0E5(iParam0->f_13, 13))
								{
									iVar6 = 0;
									iVar7 = 0;
									iVar2 = 0;
									while (iVar2 < 3)
									{
										if (!unk_0x5AEB5DDFFAD43CA5(iParam0->f_17[iVar2]))
										{
											iVar6++;
										}
										iVar2++;
									}
									iVar7 = unk_0x344C570D6F8700DF(0, iVar6);
									if (!unk_0x5AEB5DDFFAD43CA5(iParam0->f_17[iVar7]))
									{
										func_32(iParam0->f_17[iVar7], "NEED_A_BIGGER_VEHICLE", 3);
									}
									func_34(iParam0, "MORE_SEATS", 0);
									unk_0xBE20AB8238688965(&(iParam0->f_13), 13);
								}
							}
							else if (!unk_0xCE990E643CD9D0E5(iParam0->f_13, 3))
							{
								func_34(iParam0, sParam16, 0);
								unk_0xBE20AB8238688965(&(iParam0->f_13), 3);
								unk_0xD2459066EA58CE43(&(iParam0->f_13), 4);
							}
							else if (!unk_0xCE990E643CD9D0E5(iParam0->f_13, 4))
							{
								if (unk_0xCE990E643CD9D0E5(iParam0->f_13, 9))
								{
									func_34(iParam0, sParam19, 0);
									unk_0xBE20AB8238688965(&(iParam0->f_13), 4);
								}
							}
						}
					}
					else if (!func_37(iParam0, 2))
					{
						if (!unk_0xCE990E643CD9D0E5(iParam0->f_13, 3))
						{
							func_34(iParam0, sParam16, 0);
							unk_0xBE20AB8238688965(&(iParam0->f_13), 3);
							unk_0xD2459066EA58CE43(&(iParam0->f_13), 4);
						}
						else if (unk_0xCE990E643CD9D0E5(iParam0->f_13, 9))
						{
							if (!unk_0x211E6DB3335430B4(sParam19))
							{
								if (!unk_0xCE990E643CD9D0E5(iParam0->f_13, 4))
								{
									func_34(iParam0, sParam19, 0);
									unk_0xBE20AB8238688965(&(iParam0->f_13), 4);
								}
							}
							else if (!unk_0xCE990E643CD9D0E5(iParam0->f_13, 4))
							{
								func_34(iParam0, sParam16, 0);
								unk_0xBE20AB8238688965(&(iParam0->f_13), 4);
							}
						}
					}
				}
			}
		}
	}
	else
	{
		if (unk_0xCE990E643CD9D0E5(iParam0->f_13, 0))
		{
			unk_0xD2459066EA58CE43(&(iParam0->f_13), 0);
		}
		func_43(sParam11);
		func_43(sParam16);
		func_43(sParam19);
		func_43(sParam16);
		func_43("LOSE_WANTED");
		if (unk_0x8F678487EEBD8CE4(iParam0->f_5))
		{
			unk_0x93370FA10F15BE44(&(iParam0->f_5));
		}
		if (unk_0x8F678487EEBD8CE4(*iParam0))
		{
			unk_0x93370FA10F15BE44(iParam0);
		}
	}
	unk_0xD2459066EA58CE43(&(iParam0->f_13), 11);
	unk_0xD2459066EA58CE43(&(iParam0->f_13), 12);
	return 0;
}

int func_23(int iParam0, bool bParam1, bool bParam2)
{
	return func_11(iParam0, !bParam1, bParam2);
}

int func_24(int iParam0)
{
	if (unk_0xCE990E643CD9D0E5(iParam0->f_13, 12))
	{
		if (func_26(unk_0x9B0761B4C3EB8BC7()))
		{
			if (func_25(1, 0, 1) || unk_0xCE990E643CD9D0E5(iParam0->f_13, 7))
			{
				return 1;
			}
		}
	}
	else if (func_25(1, 0, 1) || unk_0xCE990E643CD9D0E5(iParam0->f_13, 7))
	{
		return 1;
	}
	return 0;
}

int func_25(bool bParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	
	if (unk_0xA5754C6C4B644ACF())
	{
		return 0;
	}
	if (bParam0)
	{
		if (unk_0xA59F96B50B97E63C(unk_0x9B0761B4C3EB8BC7(), 0))
		{
			return 0;
		}
	}
	iVar0 = 0;
	if (unk_0x47DBF174A0CB9D55(unk_0x9B0761B4C3EB8BC7(), false))
	{
		if (!unk_0x6E0C5E7AAF8B6214(unk_0x9B0761B4C3EB8BC7()))
		{
			return 0;
		}
		iVar0 = unk_0xA5D5B1042E8F47BD(unk_0x9B0761B4C3EB8BC7(), false);
		if (bParam0)
		{
			if (unk_0xA59F96B50B97E63C(iVar0, 0))
			{
				return 0;
			}
		}
		if (bParam2)
		{
			if (!unk_0xA59F96B50B97E63C(iVar0, 0))
			{
				if (unk_0x10D3F7E169A49C44(iVar0, -1, 0) != unk_0x9B0761B4C3EB8BC7())
				{
					return 0;
				}
			}
		}
		if (!unk_0xA59F96B50B97E63C(iVar0, 0))
		{
			if (unk_0x59046338C72D0346(iVar0) < 0.95f || unk_0x59046338C72D0346(iVar0) > 1.011f)
			{
				return 0;
			}
		}
	}
	else if (bParam1)
	{
		return 0;
	}
	if (!unk_0x117A56F7403FC6D2(unk_0x460153A63B9477BC()))
	{
		return 0;
	}
	if (!unk_0x0D1884E427D0E0AF(unk_0x460153A63B9477BC()))
	{
		return 0;
	}
	return 1;
}

int func_26(int iParam0)
{
	float fVar0;
	
	if (!unk_0x5AEB5DDFFAD43CA5(iParam0))
	{
		fVar0 = unk_0xF3A639BEE7AADF55(iParam0);
		if (fVar0 > -0.5f && fVar0 < 0.5f)
		{
			return 1;
		}
	}
	return 0;
}

int func_27(int iParam0, int iParam1)
{
	if (!unk_0x5AEB5DDFFAD43CA5(iParam0))
	{
		if (unk_0x6E0C5E7AAF8B6214(unk_0x9B0761B4C3EB8BC7()) && iParam1)
		{
			if (func_28(unk_0x9B0761B4C3EB8BC7(), iParam0))
			{
				unk_0x5E3D307BA1942AE3(func_15(), 50f);
				return 1;
			}
		}
		else if (unk_0xFE6F151E15A69B3A(iParam0, func_15()))
		{
			unk_0x5E3D307BA1942AE3(func_15(), 50f);
			return 1;
		}
	}
	else
	{
		return 1;
	}
	return 0;
}

int func_28(int iParam0, int iParam1)
{
	int iVar0;
	
	if (!unk_0x5AEB5DDFFAD43CA5(iParam0))
	{
		if (unk_0x6E0C5E7AAF8B6214(iParam0))
		{
			iVar0 = unk_0xA5D5B1042E8F47BD(iParam0, false);
			if (unk_0x80FF6C016CDB0FAF(iVar0, 0))
			{
				if (!unk_0x5AEB5DDFFAD43CA5(iParam1))
				{
					if (unk_0xACBCFA3095C5A434(iParam1, iVar0))
					{
						return 1;
					}
				}
			}
		}
	}
	return 0;
}

int func_29(struct<3> Param0, struct<3> Param1, float fParam2, bool bParam3)
{
	if (fParam2 < 0f)
	{
		fParam2 = 0f;
	}
	if (!bParam3)
	{
		if (unk_0x0D77CDCF403AEBD2((Param0.x - Param1.x)) <= fParam2)
		{
			if (unk_0x0D77CDCF403AEBD2((Param0.f_1 - Param1.f_1)) <= fParam2)
			{
				if (unk_0x0D77CDCF403AEBD2((Param0.f_2 - Param1.f_2)) <= fParam2)
				{
					return 1;
				}
			}
		}
	}
	else if (unk_0x0D77CDCF403AEBD2((Param0.x - Param1.x)) <= fParam2)
	{
		if (unk_0x0D77CDCF403AEBD2((Param0.f_1 - Param1.f_1)) <= fParam2)
		{
			return 1;
		}
	}
	return 0;
}

void func_30(int iParam0, int iParam1)
{
	if (unk_0x8F678487EEBD8CE4(iParam0))
	{
		if (unk_0x8F678487EEBD8CE4(iParam1->f_6))
		{
			unk_0x72BEFB9451782F60(iParam1->f_6, false);
		}
		unk_0xE103A7AB14FB3D17(0);
		unk_0xE587140E4FB377B3();
		iParam1->f_6 = iParam0;
		unk_0x72BEFB9451782F60(iParam0, true);
	}
}

int func_31(struct<3> Param0, bool bParam1)
{
	int iVar0;
	
	iVar0 = unk_0x6820C712C1DD618A(Param0);
	unk_0xFA81E0FBD7F5ACA0(iVar0, func_12(unk_0x25DDB354A40FFCDB(), 1f, 1f));
	unk_0x72BEFB9451782F60(iVar0, bParam1);
	return iVar0;
}

void func_32(int iParam0, char* sParam1, int iParam2)
{
	unk_0xFDCFA91E51EDB61F(iParam0, sParam1, func_33(iParam2), 1);
}

int func_33(int iParam0)
{
	int iVar0;
	
	switch (iParam0)
	{
		case 0:
			return "SPEECH_PARAMS_STANDARD";
		
		case 1:
			return "SPEECH_PARAMS_ALLOW_REPEAT";
		
		case 2:
			return "SPEECH_PARAMS_BEAT";
		
		case 3:
			return "SPEECH_PARAMS_FORCE";
		
		case 4:
			return "SPEECH_PARAMS_FORCE_FRONTEND";
		
		case 5:
			return "SPEECH_PARAMS_FORCE_NO_REPEAT_FRONTEND";
		
		case 6:
			return "SPEECH_PARAMS_FORCE_NORMAL";
		
		case 7:
			return "SPEECH_PARAMS_FORCE_NORMAL_CLEAR";
		
		case 8:
			return "SPEECH_PARAMS_FORCE_NORMAL_CRITICAL";
		
		case 9:
			return "SPEECH_PARAMS_FORCE_SHOUTED";
		
		case 10:
			return "SPEECH_PARAMS_FORCE_SHOUTED_CLEAR";
		
		case 11:
			return "SPEECH_PARAMS_FORCE_SHOUTED_CRITICAL";
		
		case 12:
			return "SPEECH_PARAMS_FORCE_PRELOAD_ONLY";
		
		case 13:
			return "SPEECH_PARAMS_MEGAPHONE";
		
		case 14:
			return "SPEECH_PARAMS_HELI";
		
		case 15:
			return "SPEECH_PARAMS_FORCE_MEGAPHONE";
		
		case 16:
			return "SPEECH_PARAMS_FORCE_HELI";
		
		case 17:
			return "SPEECH_PARAMS_INTERRUPT";
		
		case 18:
			return "SPEECH_PARAMS_INTERRUPT_SHOUTED";
		
		case 19:
			return "SPEECH_PARAMS_INTERRUPT_SHOUTED_CLEAR";
		
		case 20:
			return "SPEECH_PARAMS_INTERRUPT_SHOUTED_CRITICAL";
		
		case 21:
			return "SPEECH_PARAMS_INTERRUPT_NO_FORCE";
		
		case 22:
			return "SPEECH_PARAMS_INTERRUPT_FRONTEND";
		
		case 23:
			return "SPEECH_PARAMS_INTERRUPT_NO_FORCE_FRONTEND";
		
		case 24:
			return "SPEECH_PARAMS_ADD_BLIP";
		
		case 25:
			return "SPEECH_PARAMS_ADD_BLIP_ALLOW_REPEAT";
		
		case 26:
			return "SPEECH_PARAMS_ADD_BLIP_FORCE";
		
		case 27:
			return "SPEECH_PARAMS_ADD_BLIP_SHOUTED";
		
		case 28:
			return "SPEECH_PARAMS_ADD_BLIP_SHOUTED_FORCE";
		
		case 29:
			return "SPEECH_PARAMS_ADD_BLIP_INTERRUPT";
		
		case 30:
			return "SPEECH_PARAMS_ADD_BLIP_INTERRUPT_FORCE";
		
		case 31:
			return "SPEECH_PARAMS_FORCE_PRELOAD_ONLY_SHOUTED";
		
		case 32:
			return "SPEECH_PARAMS_FORCE_PRELOAD_ONLY_SHOUTED_CLEAR";
		
		case 33:
			return "SPEECH_PARAMS_FORCE_PRELOAD_ONLY_SHOUTED_CRITICAL";
		
		case 34:
			return "SPEECH_PARAMS_SHOUTED";
		
		case 35:
			return "SPEECH_PARAMS_SHOUTED_CLEAR";
		
		case 36:
			return "SPEECH_PARAMS_SHOUTED_CRITICAL";
		
		default:
	}
	iVar0 = 0;
	return iVar0;
}

void func_34(int iParam0, char* sParam1, bool bParam2)
{
	if (!bParam2)
	{
		if (!unk_0x211E6DB3335430B4(sParam1))
		{
			if (!unk_0xF005CCA4263DF67F(sParam1, ""))
			{
				func_35(sParam1, 7500, 1);
			}
		}
	}
	iParam0->f_10 = unk_0x578C4EF320340AF7();
}

void func_35(char* sParam0, int iParam1, int iParam2)
{
	iParam2 = iParam2;
	unk_0xAEFB51FB8888AE0F(sParam0);
	unk_0x823A1D66E6A4D141(iParam1, 1);
}

int func_36(int iParam0)
{
	if (!unk_0x5AEB5DDFFAD43CA5(iParam0->f_16))
	{
		if (unk_0x6F683C1C0BB1BA8D(iParam0->f_16))
		{
			return 1;
		}
	}
	return 0;
}

int func_37(int iParam0, int iParam1)
{
	if (iParam1 != 1 || unk_0x67F1A5C89249817A())
	{
		if (unk_0x2F80DB5A41D045E6())
		{
			return 1;
		}
		if (func_40(iParam0))
		{
			return 1;
		}
	}
	if (iParam1 != 2 || unk_0x67F1A5C89249817A())
	{
		if (func_39() && !func_38())
		{
			return 1;
		}
	}
	return 0;
}

int func_38()
{
	if (Global_22016 == 1)
	{
		return 1;
	}
	return 0;
}

int func_39()
{
	if (Global_21005 != 0 || unk_0x6A5CC4A2C9D9ED8D())
	{
		return 1;
	}
	return 0;
}

int func_40(var uParam0)
{
	int iVar0;
	int iVar1;
	
	iVar1 = unk_0x578C4EF320340AF7();
	iVar0 = (iVar1 - uParam0->f_10);
	if (iVar0 < 35)
	{
		return 1;
	}
	return 0;
}

int func_41(var uParam0, int iParam1)
{
	int iVar0;
	
	if (unk_0x47DBF174A0CB9D55(unk_0x9B0761B4C3EB8BC7(), false))
	{
		iVar0 = unk_0xA5D5B1042E8F47BD(unk_0x9B0761B4C3EB8BC7(), false);
		if (func_42(iVar0, uParam0, iParam1))
		{
			return 1;
		}
	}
	return 0;
}

int func_42(int iParam0, var uParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (unk_0x80FF6C016CDB0FAF(iParam0, 0))
	{
		iVar0 = 0;
		iVar2 = 0;
		while (iVar2 < 3)
		{
			if (unk_0xAE06B9E39EBDE049(uParam1->f_17[iVar2]))
			{
				iVar0++;
			}
			iVar2++;
		}
		iVar1 = unk_0x99E61B3887CC8E71(iParam0);
		if (iParam2 > 0)
		{
			if (iVar1 >= iParam2)
			{
				if (iParam2 > 1)
				{
					if (!unk_0x98E7D24BEECF7A35(iParam0, 1))
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
		else if (iVar1 >= iVar0)
		{
			if (iVar0 > 1)
			{
				if (!unk_0x98E7D24BEECF7A35(iParam0, 1))
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
	return 0;
}

void func_43(char* sParam0)
{
	if (!unk_0x211E6DB3335430B4(sParam0))
	{
		unk_0x213AAAF3AB16731C(sParam0);
	}
}

int func_44(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, char* sParam7, float fParam8, bool bParam9, int iParam10, bool bParam11, int iParam12, var uParam13, var uParam14, var uParam15, int iParam16, bool bParam17)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7[3];
	bool bVar8;
	bool bVar9;
	int iVar10;
	int iVar11;
	var uVar12[3];
	var uVar13[3];
	bool bVar14;
	int iVar15;
	int iVar16;
	int iVar17;
	int iVar18;
	struct<3> Var19;
	int iVar20;
	int iVar21;
	
	iVar4 = 0;
	uParam0->f_17[0] = uParam1;
	uParam0->f_17[1] = uParam2;
	uParam0->f_17[2] = uParam3;
	uParam0->f_16 = uParam1;
	uVar12[0] = uParam4;
	uVar12[1] = uParam5;
	uVar12[2] = uParam6;
	uVar13[0] = uParam13;
	uVar13[1] = uParam14;
	uVar13[2] = uParam15;
	iVar6 = 1;
	iVar1 = 0;
	iVar2 = 0;
	iVar3 = 0;
	iVar7[0] = 0;
	iVar7[1] = 0;
	iVar7[2] = 0;
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (!unk_0x5AEB5DDFFAD43CA5(uParam0->f_17[iVar0]))
		{
			iVar3++;
		}
		if (unk_0x0F1E960B06B93848(unk_0x460153A63B9477BC(), 0))
		{
			if (!unk_0xCE990E643CD9D0E5(uParam0->f_13, 29) && !unk_0xCE990E643CD9D0E5(uParam0->f_13, 28))
			{
				if (!unk_0x5AEB5DDFFAD43CA5(uParam0->f_17[iVar0]))
				{
					unk_0x042EA371AD4AE883(uParam0->f_17[iVar0], true, -1, 0);
				}
				if (iVar0 == 2)
				{
					unk_0xBE20AB8238688965(&(uParam0->f_13), 28);
				}
			}
		}
		else if (!unk_0xCE990E643CD9D0E5(uParam0->f_13, 29) && unk_0xCE990E643CD9D0E5(uParam0->f_13, 28))
		{
			if (!unk_0x5AEB5DDFFAD43CA5(uParam0->f_17[iVar0]))
			{
				unk_0x042EA371AD4AE883(uParam0->f_17[iVar0], false, -1, 0);
			}
			if (iVar0 == 2)
			{
				unk_0xD2459066EA58CE43(&(uParam0->f_13), 28);
			}
		}
		iVar0++;
	}
	if (iVar3 == 0)
	{
		return 1;
	}
	if (unk_0xCE990E643CD9D0E5(uParam0->f_13, 26))
	{
		bVar14 = false;
		if (!unk_0xAE06B9E39EBDE049(uParam0->f_21))
		{
			iVar16 = 64;
			iVar16 |= 65536;
			iVar16 |= 2048;
			iVar16 |= 1;
			iVar16 |= 2;
			iVar16 |= 4;
			iVar16 |= 32;
			iVar16 |= 16;
			iVar16 |= 8;
			iVar15 = unk_0xC2E2CC6CF95AF8A3(unk_0x3E4D3CCC220BDFB1(unk_0x9B0761B4C3EB8BC7(), true), 50f, 0, iVar16);
			if (unk_0x80FF6C016CDB0FAF(iVar15, 0))
			{
				uParam0->f_21 = iVar15;
			}
		}
		if (unk_0x80FF6C016CDB0FAF(uParam0->f_21, 0))
		{
			if (vdist2(unk_0x3E4D3CCC220BDFB1(unk_0x9B0761B4C3EB8BC7(), true), unk_0x3E4D3CCC220BDFB1(uParam0->f_21, true)) < 400f)
			{
				if (!unk_0x6E0C5E7AAF8B6214(unk_0x9B0761B4C3EB8BC7()))
				{
					if (!unk_0x0F1E960B06B93848(unk_0x460153A63B9477BC(), 0) || !bParam17)
					{
						if (func_42(uParam0->f_21, uParam0, iVar3))
						{
							iVar0 = 0;
							while (iVar0 < 3)
							{
								if (!unk_0x5AEB5DDFFAD43CA5(uParam0->f_17[iVar0]))
								{
									unk_0x94D1A5176CE89859(uParam0->f_17[iVar0], 1f);
									if (unk_0xFE6F151E15A69B3A(uParam0->f_17[iVar0], func_15()))
									{
										unk_0x59478CBBF96AF7D1(uParam0->f_17[iVar0]);
									}
									if (unk_0x16BC17A8EDC701A2(uParam0->f_17[iVar0], -1794415470) == 7 && !func_59(uParam0->f_17[iVar0], uParam0->f_21))
									{
										if (!unk_0xCED6B5226244381C(uParam0->f_17[iVar0]) && !unk_0x12C99794D883929B(uParam0->f_17[iVar0]))
										{
											unk_0x4E65320BC9AD521C(uParam0->f_17[iVar0], true);
											unk_0xC584E49FC3559A86(uParam0->f_17[iVar0], uParam0->f_21, 60000, iVar0, 1f, 1, 0);
											unk_0xF5230D38AD1D873D(uParam0->f_17[iVar0], iVar0);
										}
									}
								}
								iVar0++;
							}
							return 1;
						}
						else
						{
							bVar14 = true;
						}
					}
					else
					{
						bVar14 = true;
					}
				}
				else
				{
					bVar14 = true;
				}
			}
			else
			{
				bVar14 = true;
			}
		}
		else
		{
			bVar14 = true;
		}
		if (bVar14)
		{
			unk_0xD2459066EA58CE43(&(uParam0->f_13), 26);
			iVar0 = 0;
			while (iVar0 < 3)
			{
				if (!unk_0x5AEB5DDFFAD43CA5(uParam0->f_17[iVar0]))
				{
					if (!unk_0x11B7C25143EE2F29(uParam0->f_17[iVar0]) && !uParam0->f_15)
					{
						unk_0x9B94F6169B0DAEFD(uParam0->f_17[iVar0]);
					}
					if (!unk_0xFE6F151E15A69B3A(uParam0->f_17[iVar0], func_15()))
					{
						if (func_57(uParam0, uParam0->f_17[iVar0], fParam8, 1))
						{
							unk_0xE19B69814D61BBA5(uParam0->f_17[iVar0], func_15());
						}
					}
				}
				iVar0++;
			}
		}
	}
	if (!unk_0xCE990E643CD9D0E5(uParam0->f_13, 26))
	{
		if ((!func_56(uParam0) && unk_0x6E0C5E7AAF8B6214(unk_0x9B0761B4C3EB8BC7())) && !unk_0xAE06B9E39EBDE049(iParam10))
		{
			iVar10 = unk_0xA5D5B1042E8F47BD(unk_0x9B0761B4C3EB8BC7(), false);
			if (unk_0x80FF6C016CDB0FAF(iVar10, 0))
			{
				if (!unk_0xCE990E643CD9D0E5(uParam0->f_13, 13))
				{
					if (iParam16 == 4 || iParam16 == 5)
					{
					}
					if (!func_37(uParam0, 2))
					{
						iVar17 = 0;
						iVar18 = 0;
						iVar0 = 0;
						while (iVar0 < 3)
						{
							if (!unk_0x5AEB5DDFFAD43CA5(uParam0->f_17[iVar0]))
							{
								iVar17++;
							}
							iVar0++;
						}
						iVar18 = unk_0x344C570D6F8700DF(0, iVar17);
						if (!unk_0x5AEB5DDFFAD43CA5(uParam0->f_17[iVar18]))
						{
							func_32(uParam0->f_17[iVar18], "NEED_A_BIGGER_VEHICLE", 3);
						}
						func_34(uParam0, "MORE_SEATS", 0);
						unk_0xBE20AB8238688965(&(uParam0->f_13), 13);
					}
				}
				bVar9 = true;
			}
		}
		else
		{
			bVar9 = false;
			unk_0xD2459066EA58CE43(&(uParam0->f_13), 13);
			func_43("MORE_SEATS");
		}
		if (!unk_0xAE06B9E39EBDE049(iParam10))
		{
			if ((!unk_0x5AEB5DDFFAD43CA5(uParam0->f_17[0]) || !unk_0x5AEB5DDFFAD43CA5(uParam0->f_17[1])) || !unk_0x5AEB5DDFFAD43CA5(uParam0->f_17[2]))
			{
				if (!unk_0xCE990E643CD9D0E5(uParam0->f_13, 31))
				{
					if (unk_0x6E0C5E7AAF8B6214(unk_0x9B0761B4C3EB8BC7()) && !func_37(uParam0, 2))
					{
						iVar10 = unk_0xA5D5B1042E8F47BD(unk_0x9B0761B4C3EB8BC7(), false);
						if (func_55(iVar10, uParam0))
						{
							func_34(uParam0, "CMN_VEHSUIT", 0);
							unk_0xBE20AB8238688965(&(uParam0->f_13), 31);
						}
					}
				}
				else if (!unk_0x6E0C5E7AAF8B6214(unk_0x9B0761B4C3EB8BC7()))
				{
					unk_0xD2459066EA58CE43(&(uParam0->f_13), 31);
					func_43("CMN_VEHSUIT");
				}
			}
		}
		if (unk_0x80FF6C016CDB0FAF(iParam10, 0))
		{
			if (unk_0xACBCFA3095C5A434(unk_0x9B0761B4C3EB8BC7(), iParam10))
			{
				if (unk_0x1BD7199394D7F19A(0, 75))
				{
					unk_0xBE20AB8238688965(&(uParam0->f_13), 21);
				}
			}
			else if (unk_0xCE990E643CD9D0E5(uParam0->f_13, 21))
			{
				unk_0xD2459066EA58CE43(&(uParam0->f_13), 21);
			}
		}
		iVar0 = 0;
		while (iVar0 < 3)
		{
			if (unk_0xAE06B9E39EBDE049(uParam0->f_17[iVar0]))
			{
				if (!unk_0x5AEB5DDFFAD43CA5(uParam0->f_17[iVar0]))
				{
					if (!unk_0xFE6F151E15A69B3A(uParam0->f_17[iVar0], func_15()))
					{
						unk_0xB1AC1F996633F5B4(uParam0->f_17[iVar0], 1);
					}
					else
					{
						unk_0xB1AC1F996633F5B4(uParam0->f_17[iVar0], 0);
					}
					if (unk_0x6E0C5E7AAF8B6214(unk_0x9B0761B4C3EB8BC7()))
					{
						iVar10 = unk_0xA5D5B1042E8F47BD(unk_0x9B0761B4C3EB8BC7(), false);
						if (unk_0x80FF6C016CDB0FAF(iVar10, 0))
						{
							if (unk_0xFE6F151E15A69B3A(uParam0->f_17[iVar0], func_15()))
							{
								if (!func_56(uParam0) && unk_0x6E0C5E7AAF8B6214(unk_0x9B0761B4C3EB8BC7()))
								{
									if (!func_54(uParam0->f_17[iVar0]))
									{
										unk_0x59478CBBF96AF7D1(uParam0->f_17[iVar0]);
									}
								}
							}
						}
						if (iVar10 != iParam10 && !unk_0xA59F96B50B97E63C(iVar10, 0))
						{
							if (unk_0xACBCFA3095C5A434(uParam0->f_17[iVar0], iVar10))
							{
								if (unk_0xE72C9284B5143451(iVar10) && !unk_0xFEB73FC16397E7DC(iVar10))
								{
									Var19 = { unk_0x3E4D3CCC220BDFB1(iVar10, true) };
									if (Var19.f_2 < -1f)
									{
										unk_0x1FBAE3B250A7D06D(uParam0->f_17[iVar0], iVar10, 64);
									}
								}
							}
						}
					}
					bVar8 = true;
					if (!unk_0xFE6F151E15A69B3A(uParam0->f_17[iVar0], func_15()))
					{
						if (unk_0x6E0C5E7AAF8B6214(uParam0->f_17[iVar0]))
						{
							iVar10 = unk_0xA5D5B1042E8F47BD(uParam0->f_17[iVar0], false);
							if (!unk_0xA59F96B50B97E63C(iVar10, 0))
							{
								if (unk_0x80FF6C016CDB0FAF(iParam10, 0))
								{
									if (iVar10 != iParam10)
									{
										if (!unk_0xACBCFA3095C5A434(unk_0x9B0761B4C3EB8BC7(), iVar10))
										{
											if (unk_0xF3A639BEE7AADF55(iVar10) > 5f)
											{
												unk_0x1FBAE3B250A7D06D(uParam0->f_17[iVar0], iVar10, 4160);
											}
											else
											{
												unk_0x1FBAE3B250A7D06D(uParam0->f_17[iVar0], iVar10, 64);
											}
											bVar8 = false;
										}
									}
								}
								else
								{
									if (unk_0x6E0C5E7AAF8B6214(unk_0x9B0761B4C3EB8BC7()))
									{
										iVar20 = unk_0xA5D5B1042E8F47BD(unk_0x9B0761B4C3EB8BC7(), false);
									}
									if (unk_0x80FF6C016CDB0FAF(iVar20, 0))
									{
										if (iVar10 != iVar20)
										{
											if (unk_0xF3A639BEE7AADF55(iVar10) > 5f)
											{
												unk_0x1FBAE3B250A7D06D(uParam0->f_17[iVar0], iVar10, 4160);
											}
											else
											{
												unk_0x1FBAE3B250A7D06D(uParam0->f_17[iVar0], iVar10, 64);
											}
											bVar8 = false;
										}
									}
								}
							}
						}
					}
					if (unk_0xFE6F151E15A69B3A(uParam0->f_17[iVar0], func_15()))
					{
						iVar21 = unk_0xB0919F8F7C8097BD(unk_0x9B0761B4C3EB8BC7());
						if (unk_0xAE06B9E39EBDE049(iVar21))
						{
							if (func_42(iVar21, uParam0, 0))
							{
								if (func_53(iVar0, uParam0) || !unk_0xCE990E643CD9D0E5(uParam0->f_13, 27))
								{
									unk_0xF5230D38AD1D873D(uParam0->f_17[iVar0], iVar0);
									func_16(iVar0, uParam0);
									iVar4++;
									if (iVar4 >= iVar3)
									{
										unk_0xBE20AB8238688965(&(uParam0->f_13), 27);
									}
								}
							}
							else if (!func_53(iVar0, uParam0))
							{
								if (unk_0x36FE6D3220816ADA(iVar21) == joaat("sentinel2"))
								{
									unk_0xF5230D38AD1D873D(uParam0->f_17[iVar0], 4);
								}
								else
								{
									unk_0xF5230D38AD1D873D(uParam0->f_17[iVar0], 2);
								}
								func_52(iVar0, uParam0);
							}
						}
					}
					if ((!unk_0xFE6F151E15A69B3A(uParam0->f_17[iVar0], func_15()) && !func_51(uParam0->f_17[iVar0], iParam10)) && !func_50(uParam0->f_17[iVar0], iParam10))
					{
						if (func_57(uParam0, uParam0->f_17[iVar0], fParam8, bParam11))
						{
							if (!unk_0xFE6F151E15A69B3A(uParam0->f_17[iVar0], func_15()))
							{
								if (((!unk_0xCED6B5226244381C(uParam0->f_17[iVar0]) && !unk_0x12C99794D883929B(uParam0->f_17[iVar0])) && !unk_0x78CF477CE5326EB5(uParam0->f_17[iVar0])) && !unk_0x11B7C25143EE2F29(uParam0->f_17[iVar0]))
								{
									iVar11 = unk_0x16BC17A8EDC701A2(uParam0->f_17[iVar0], -1794415470);
									if (iVar11 == 7)
									{
										unk_0x9B94F6169B0DAEFD(uParam0->f_17[iVar0]);
									}
									unk_0xE19B69814D61BBA5(uParam0->f_17[iVar0], func_15());
									bVar8 = false;
								}
							}
						}
						if (bVar8)
						{
							if (!unk_0x8F678487EEBD8CE4(uParam0->f_1[iVar0]))
							{
								uParam0->f_11 = unk_0x578C4EF320340AF7();
								uParam0->f_1[iVar0] = func_23(uParam0->f_17[iVar0], 0, 0);
								unk_0x14C1B9C77E952C6F(uParam0->f_1[iVar0], 2);
								if (bParam9)
								{
									func_30(uParam0->f_1[iVar0], uParam0);
								}
							}
						}
						iVar6 = 0;
					}
					else if (unk_0x8F678487EEBD8CE4(uParam0->f_1[iVar0]))
					{
						if (((func_27(uParam0->f_17[iVar0], 1) || func_51(uParam0->f_17[iVar0], iParam10)) || iParam12) || (unk_0x80FF6C016CDB0FAF(iParam10, 0) && !unk_0xE0B3BC41DDA88DF0(unk_0x9B0761B4C3EB8BC7(), iParam10, false)))
						{
							if (unk_0x8F678487EEBD8CE4(uParam0->f_1[iVar0]))
							{
								unk_0x93370FA10F15BE44(&(uParam0->f_1[iVar0]));
								func_43(uVar12[iVar0]);
							}
						}
						else
						{
							if (bParam9)
							{
								func_30(uParam0->f_1[iVar0], uParam0);
							}
							iVar6 = 0;
						}
					}
					else if (unk_0x80FF6C016CDB0FAF(iParam10, 0))
					{
						if (!unk_0xACBCFA3095C5A434(uParam0->f_17[iVar0], iParam10))
						{
							if ((unk_0x910DFF8E55ABB8EC(uParam0->f_17[iVar0], iParam10, 20f, 20f, 5f, 0, 1, 0) && !unk_0xCE990E643CD9D0E5(uParam0->f_13, 11)) && !((bParam17 && unk_0x0F1E960B06B93848(unk_0x460153A63B9477BC(), 0)) && !unk_0xE0B3BC41DDA88DF0(unk_0x9B0761B4C3EB8BC7(), iParam10, false)))
							{
								if (unk_0x6E0C5E7AAF8B6214(uParam0->f_17[iVar0]))
								{
									if (!unk_0xE0B3BC41DDA88DF0(uParam0->f_17[iVar0], iParam10, false))
									{
										if (!func_27(uParam0->f_17[iVar0], 1))
										{
											if (func_26(uParam0->f_17[iVar0]))
											{
												iVar11 = unk_0x16BC17A8EDC701A2(uParam0->f_17[iVar0], 451360105);
												if (iVar11 == 7)
												{
													unk_0x0AB756271BADC8DF(uParam0->f_17[iVar0], 0, 0);
												}
											}
										}
									}
								}
								else
								{
									if (unk_0xFE6F151E15A69B3A(uParam0->f_17[iVar0], func_15()))
									{
										if ((((!unk_0x78CF477CE5326EB5(uParam0->f_17[iVar0]) && !unk_0xCED6B5226244381C(uParam0->f_17[iVar0])) && !unk_0x12C99794D883929B(uParam0->f_17[iVar0])) && !unk_0x11B7C25143EE2F29(uParam0->f_17[iVar0])) && !unk_0x0922C2E075A5F18C(iParam10))
										{
											unk_0x59478CBBF96AF7D1(uParam0->f_17[iVar0]);
										}
									}
									iVar11 = unk_0x16BC17A8EDC701A2(uParam0->f_17[iVar0], -1794415470);
									if (iVar11 == 7 && !func_59(uParam0->f_17[iVar0], iParam10))
									{
										if (((((!unk_0x78CF477CE5326EB5(uParam0->f_17[iVar0]) && !unk_0x78CF477CE5326EB5(unk_0x9B0761B4C3EB8BC7())) && !func_49(uParam0->f_17[iVar0], 2f)) && !unk_0xCED6B5226244381C(uParam0->f_17[iVar0])) && !unk_0x12C99794D883929B(uParam0->f_17[iVar0])) && !unk_0x0922C2E075A5F18C(iParam10))
										{
											unk_0x4E65320BC9AD521C(uParam0->f_17[iVar0], true);
											if (unk_0xCE990E643CD9D0E5(uParam0->f_13, 10))
											{
												unk_0x94D1A5176CE89859(uParam0->f_17[iVar0], 1f);
											}
											unk_0xC584E49FC3559A86(uParam0->f_17[iVar0], iParam10, 60000, iVar0, 2f, 1, 0);
											unk_0xB281D47677468287(uParam0->f_17[iVar0], 0);
										}
									}
									else if (unk_0xE0B3BC41DDA88DF0(unk_0x9B0761B4C3EB8BC7(), iParam10, false))
									{
										uParam0->f_1[iVar0] = func_23(uParam0->f_17[iVar0], 0, 0);
										unk_0x14C1B9C77E952C6F(uParam0->f_1[iVar0], 2);
										iVar6 = 0;
									}
								}
							}
							else if (!unk_0xFE6F151E15A69B3A(uParam0->f_17[iVar0], func_15()))
							{
								if (func_57(uParam0, uParam0->f_17[iVar0], fParam8, bParam11))
								{
									if (!unk_0xCED6B5226244381C(uParam0->f_17[iVar0]) && !unk_0x12C99794D883929B(uParam0->f_17[iVar0]))
									{
										iVar11 = unk_0x16BC17A8EDC701A2(uParam0->f_17[iVar0], -1794415470);
										if (iVar11 == 7)
										{
											unk_0x9B94F6169B0DAEFD(uParam0->f_17[iVar0]);
										}
										unk_0x4E65320BC9AD521C(uParam0->f_17[iVar0], false);
										unk_0xE19B69814D61BBA5(uParam0->f_17[iVar0], func_15());
									}
								}
							}
						}
						else if (unk_0xACBCFA3095C5A434(unk_0x9B0761B4C3EB8BC7(), iParam10))
						{
							if (!unk_0xFE6F151E15A69B3A(uParam0->f_17[iVar0], func_15()))
							{
								if (!unk_0xCE990E643CD9D0E5(uParam0->f_13, 21))
								{
									unk_0xE19B69814D61BBA5(uParam0->f_17[iVar0], func_15());
								}
							}
							else if (unk_0xCE990E643CD9D0E5(uParam0->f_13, 21))
							{
								unk_0x59478CBBF96AF7D1(uParam0->f_17[iVar0]);
								unk_0xBE20AB8238688965(&(uParam0->f_13), 21);
							}
						}
						else if (unk_0xFE6F151E15A69B3A(uParam0->f_17[iVar0], func_15()) && !unk_0x0922C2E075A5F18C(iParam10))
						{
							unk_0x59478CBBF96AF7D1(uParam0->f_17[iVar0]);
						}
					}
				}
				else if (unk_0x8F678487EEBD8CE4(uParam0->f_1[iVar0]))
				{
					unk_0x93370FA10F15BE44(&(uParam0->f_1[iVar0]));
					func_43(uVar12[iVar0]);
				}
			}
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 < 3)
		{
			if (unk_0x8F678487EEBD8CE4(uParam0->f_1[iVar0]))
			{
				iVar7[iVar0] = 1;
				iVar1++;
			}
			iVar0++;
		}
		if (!func_37(uParam0, 2))
		{
			if (iVar1 > 0)
			{
				iVar0 = 0;
				while (iVar0 < 3)
				{
					if (iVar7[iVar0])
					{
						if (!unk_0x5AEB5DDFFAD43CA5(uParam0->f_17[iVar0]))
						{
							if (func_54(uParam0->f_17[iVar0]) || unk_0x910DFF8E55ABB8EC(uParam0->f_17[iVar0], unk_0x9B0761B4C3EB8BC7(), uParam0->f_8, uParam0->f_8, uParam0->f_8, 0, 1, 0))
							{
								iVar1 = (iVar1 - 1);
								iVar7[iVar0] = 0;
							}
						}
					}
					else if (!unk_0x5AEB5DDFFAD43CA5(uParam0->f_17[iVar0]))
					{
						if (!unk_0x910DFF8E55ABB8EC(uParam0->f_17[iVar0], unk_0x9B0761B4C3EB8BC7(), (uParam0->f_8 * 0.85f), (uParam0->f_8 * 0.85f), uParam0->f_8, 0, 1, 0) && !func_54(uParam0->f_17[iVar0]))
						{
						}
					}
					iVar0++;
				}
			}
			iVar5 = unk_0x578C4EF320340AF7();
			if ((iVar5 - uParam0->f_11) > 1500 || iVar3 == 1)
			{
				if (iVar1 > 0)
				{
					if (uParam0->f_12 < iVar1)
					{
						if ((iVar1 == iVar3 || (iVar2 + iVar1) == iVar3) && iVar3 > 1)
						{
							if (!unk_0xCE990E643CD9D0E5(uParam0->f_13, 5))
							{
								func_34(uParam0, sParam7, 0);
								unk_0xBE20AB8238688965(&(uParam0->f_13), 5);
								uParam0->f_12 = iVar1;
							}
							else
							{
								uParam0->f_12 = iVar1;
							}
						}
						else
						{
							iVar0 = 0;
							while (iVar0 < 3)
							{
								if (iVar7[iVar0])
								{
									if (!func_48(iVar0, uParam0))
									{
										if (!unk_0x211E6DB3335430B4(uVar13[iVar0]))
										{
											if (!unk_0xF005CCA4263DF67F(uVar13[iVar0], ""))
											{
												func_46(uParam0, uVar12[iVar0], uVar13[iVar0], 0);
												func_45(iVar0, uParam0);
												uParam0->f_12 = iVar1;
											}
										}
										if (!func_48(iVar0, uParam0))
										{
											func_34(uParam0, uVar12[iVar0], 0);
											func_45(iVar0, uParam0);
											uParam0->f_12 = iVar1;
										}
									}
									else
									{
										uParam0->f_12 = iVar1;
									}
								}
								iVar0++;
							}
						}
					}
				}
				else
				{
					uParam0->f_12 = 0;
				}
			}
		}
		unk_0xD2459066EA58CE43(&(uParam0->f_13), 10);
		if (iVar6 && !bVar9)
		{
			iVar0 = 0;
			while (iVar0 < 3)
			{
				if (unk_0x8F678487EEBD8CE4(uParam0->f_1[iVar0]))
				{
					unk_0x93370FA10F15BE44(&(uParam0->f_1[iVar0]));
					func_43(uVar12[iVar0]);
				}
				iVar0++;
			}
			func_43("MORE_SEATS");
			return 1;
		}
	}
	return 0;
}

void func_45(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case 0:
			unk_0xBE20AB8238688965(&(uParam1->f_13), 14);
			break;
		
		case 1:
			unk_0xBE20AB8238688965(&(uParam1->f_13), 15);
			break;
		
		case 2:
			unk_0xBE20AB8238688965(&(uParam1->f_13), 16);
			break;
	}
}

void func_46(var uParam0, char* sParam1, int iParam2, bool bParam3)
{
	if (!bParam3)
	{
		if (!unk_0x211E6DB3335430B4(sParam1))
		{
			if (!unk_0xF005CCA4263DF67F(sParam1, ""))
			{
				func_47(sParam1, iParam2, 7500, 1);
			}
		}
	}
	uParam0->f_10 = unk_0x578C4EF320340AF7();
}

void func_47(char* sParam0, int iParam1, int iParam2, int iParam3)
{
	iParam3 = iParam3;
	unk_0xAEFB51FB8888AE0F(sParam0);
	unk_0x6A826E35A3096ED0(iParam1);
	unk_0x823A1D66E6A4D141(iParam2, 1);
}

int func_48(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case 0:
			return unk_0xCE990E643CD9D0E5(uParam1->f_13, 14);
		
		case 1:
			return unk_0xCE990E643CD9D0E5(uParam1->f_13, 15);
		
		case 2:
			return unk_0xCE990E643CD9D0E5(uParam1->f_13, 16);
		
		default:
	}
	return 0;
}

int func_49(int iParam0, float fParam1)
{
	int iVar0;
	
	if (unk_0x47DBF174A0CB9D55(iParam0, false))
	{
		iVar0 = unk_0xA5D5B1042E8F47BD(iParam0, false);
		if (!unk_0xA59F96B50B97E63C(iVar0, 0))
		{
			if (unk_0xF3A639BEE7AADF55(iVar0) > fParam1)
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_50(int iParam0, int iParam1)
{
	int iVar0;
	
	if (!unk_0x5AEB5DDFFAD43CA5(iParam0))
	{
		if (!unk_0xFE6F151E15A69B3A(iParam0, func_15()))
		{
			iVar0 = unk_0xCE078AEFF5C495DE(iParam0);
			if (unk_0x80FF6C016CDB0FAF(iParam1, 0))
			{
				if (unk_0x910DFF8E55ABB8EC(iParam0, iParam1, (20f + 10f), (20f + 10f), 10f, 0, 1, 0))
				{
					if (iVar0 == iParam1)
					{
						return 1;
					}
				}
			}
		}
	}
	return 0;
}

int func_51(int iParam0, int iParam1)
{
	if (!unk_0x5AEB5DDFFAD43CA5(iParam0))
	{
		if (unk_0xAE06B9E39EBDE049(iParam1))
		{
			if (unk_0x80FF6C016CDB0FAF(iParam1, 0))
			{
				if (unk_0xACBCFA3095C5A434(iParam0, iParam1))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

void func_52(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case 0:
			unk_0xBE20AB8238688965(&(uParam1->f_13), 17);
			break;
		
		case 1:
			unk_0xBE20AB8238688965(&(uParam1->f_13), 18);
			break;
		
		case 2:
			unk_0xBE20AB8238688965(&(uParam1->f_13), 19);
			break;
	}
}

int func_53(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case 0:
			return unk_0xCE990E643CD9D0E5(uParam1->f_13, 17);
		
		case 1:
			return unk_0xCE990E643CD9D0E5(uParam1->f_13, 18);
		
		case 2:
			return unk_0xCE990E643CD9D0E5(uParam1->f_13, 19);
		
		default:
	}
	return 0;
}

int func_54(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0x5A228A6A51E757C8(unk_0x460153A63B9477BC()))
	{
		iVar0 = unk_0xB0919F8F7C8097BD(unk_0x9B0761B4C3EB8BC7());
		if (unk_0x80FF6C016CDB0FAF(iVar0, 0))
		{
			if (!unk_0x5AEB5DDFFAD43CA5(iParam0))
			{
				iVar1 = unk_0xB0919F8F7C8097BD(iParam0);
				if (unk_0x80FF6C016CDB0FAF(iVar1, 0))
				{
					if (iVar0 == iVar1)
					{
						if (unk_0x910DFF8E55ABB8EC(unk_0x9B0761B4C3EB8BC7(), iParam0, 20f, 20f, 20f, 0, 1, 0) && unk_0x910DFF8E55ABB8EC(iParam0, iVar1, 20f, 20f, 20f, 0, 1, 0))
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

int func_55(int iParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	if (unk_0x80FF6C016CDB0FAF(iParam0, 0))
	{
		if (unk_0x36FE6D3220816ADA(iParam0) == joaat("bus") || unk_0x36FE6D3220816ADA(iParam0) == joaat("coach"))
		{
			iVar0 = 0;
			iVar1 = 0;
			iVar2 = 0;
			iVar2 = 0;
			while (iVar2 < 3)
			{
				if (!unk_0x5AEB5DDFFAD43CA5(uParam1->f_17[iVar2]))
				{
					iVar0++;
				}
				iVar2++;
			}
			iVar3 = unk_0x10D3F7E169A49C44(iParam0, 0, 0);
			if (!unk_0x5AEB5DDFFAD43CA5(iVar3))
			{
				if ((iVar3 == uParam1->f_17[0] || iVar3 == uParam1->f_17[1]) || iVar3 == uParam1->f_17[2])
				{
					iVar1++;
				}
			}
			else
			{
				iVar1++;
			}
			iVar4 = unk_0x10D3F7E169A49C44(iParam0, 1, 0);
			if (!unk_0x5AEB5DDFFAD43CA5(iVar4))
			{
				if ((iVar4 == uParam1->f_17[0] || iVar4 == uParam1->f_17[1]) || iVar4 == uParam1->f_17[2])
				{
					iVar1++;
				}
			}
			else
			{
				iVar1++;
			}
			iVar5 = unk_0x10D3F7E169A49C44(iParam0, 2, 0);
			if (!unk_0x5AEB5DDFFAD43CA5(iVar5))
			{
				if ((iVar5 == uParam1->f_17[0] || iVar5 == uParam1->f_17[1]) || iVar5 == uParam1->f_17[2])
				{
					iVar1++;
				}
			}
			else
			{
				iVar1++;
			}
			if (iVar1 < iVar0)
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_56(var uParam0)
{
	int iVar0;
	
	if (unk_0x6E0C5E7AAF8B6214(unk_0x9B0761B4C3EB8BC7()))
	{
		iVar0 = unk_0xA5D5B1042E8F47BD(unk_0x9B0761B4C3EB8BC7(), false);
		if (func_42(iVar0, uParam0, 0))
		{
			return 1;
		}
	}
	return 0;
}

int func_57(var uParam0, int iParam1, float fParam2, bool bParam3)
{
	int iVar0;
	
	if (!unk_0x5AEB5DDFFAD43CA5(iParam1))
	{
		if (unk_0x6E0C5E7AAF8B6214(iParam1))
		{
			iVar0 = unk_0xA5D5B1042E8F47BD(iParam1, false);
			if (!unk_0xA59F96B50B97E63C(iVar0, 0))
			{
				if (unk_0x80FF6C016CDB0FAF(iVar0, 0))
				{
					if (unk_0xACBCFA3095C5A434(unk_0x9B0761B4C3EB8BC7(), iVar0))
					{
						if (func_56(uParam0))
						{
							return 1;
						}
					}
					else if (bParam3)
					{
						return 1;
					}
				}
				else if (unk_0x910DFF8E55ABB8EC(unk_0x9B0761B4C3EB8BC7(), iParam1, fParam2, fParam2, 3f, 0, 1, 0))
				{
					return 1;
				}
			}
		}
		else if (unk_0x910DFF8E55ABB8EC(unk_0x9B0761B4C3EB8BC7(), iParam1, fParam2, fParam2, 3f, 0, 1, 0))
		{
			if (!bParam3)
			{
				iVar0 = unk_0xB0919F8F7C8097BD(unk_0x9B0761B4C3EB8BC7());
				if (unk_0xAE06B9E39EBDE049(iVar0))
				{
					if (func_42(iVar0, uParam0, 0))
					{
						if (unk_0x80FF6C016CDB0FAF(iVar0, 0))
						{
							if (func_58(iVar0))
							{
								return 1;
							}
						}
					}
				}
				else
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
	return 0;
}

int func_58(int iParam0)
{
	float fVar0;
	
	if (!unk_0xA59F96B50B97E63C(iParam0, 0))
	{
		fVar0 = unk_0xF3A639BEE7AADF55(iParam0);
		if (fVar0 > -0.5f && fVar0 < 0.5f)
		{
			return 1;
		}
	}
	return 0;
}

int func_59(int iParam0, int iParam1)
{
	int iVar0;
	
	if (!unk_0x5AEB5DDFFAD43CA5(iParam0))
	{
		if (unk_0x80FF6C016CDB0FAF(iParam1, 0))
		{
			iVar0 = unk_0xB0919F8F7C8097BD(iParam0);
			if (iVar0 == iParam1)
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_60()
{
	int iVar0;
	int iVar1;
	
	if (unk_0x47DBF174A0CB9D55(unk_0x9B0761B4C3EB8BC7(), true))
	{
		iVar0 = unk_0xCE078AEFF5C495DE(unk_0x9B0761B4C3EB8BC7());
		if (unk_0x80FF6C016CDB0FAF(iVar0, 0))
		{
			iVar1 = unk_0x10D3F7E169A49C44(iVar0, 0, 0);
			if (!unk_0x5AEB5DDFFAD43CA5(iVar1))
			{
				if (iVar1 != unk_0x9B0761B4C3EB8BC7())
				{
					if (unk_0x1758275D343D5BA3(iVar1))
					{
						if (!unk_0x71CFA8031A5AE4FB(iVar1, unk_0x9B0761B4C3EB8BC7()))
						{
							unk_0xA785552633ED203B(iVar1, unk_0x9B0761B4C3EB8BC7(), 2000, 2048, 2);
						}
					}
				}
			}
		}
	}
}

void func_61(var uParam0)
{
	int iVar0;
	
	if (!unk_0xCE990E643CD9D0E5(uParam0->f_13, 25))
	{
		if (unk_0x5A228A6A51E757C8(unk_0x460153A63B9477BC()))
		{
			unk_0x694113444F21E39F(unk_0x9B0761B4C3EB8BC7(), 32, false);
		}
		iVar0 = 0;
		while (iVar0 < 3)
		{
			if (unk_0xAE06B9E39EBDE049(uParam0->f_17[iVar0]))
			{
				if (!unk_0x5AEB5DDFFAD43CA5(uParam0->f_17[iVar0]))
				{
					unk_0x694113444F21E39F(uParam0->f_17[iVar0], 32, false);
					unk_0x694113444F21E39F(uParam0->f_17[iVar0], 305, true);
					unk_0x694113444F21E39F(uParam0->f_17[iVar0], 268, true);
					unk_0xB281D47677468287(uParam0->f_17[iVar0], 0);
				}
			}
			iVar0++;
		}
		unk_0xBE20AB8238688965(&(uParam0->f_13), 25);
	}
}

void func_62(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (unk_0xAE06B9E39EBDE049(uParam0->f_17[iVar0]))
		{
			if (!unk_0x5AEB5DDFFAD43CA5(uParam0->f_17[iVar0]))
			{
				if (unk_0x6E0C5E7AAF8B6214(uParam0->f_17[iVar0]))
				{
					unk_0x83BBFE5E96C64FBA(uParam0->f_17[iVar0], 0);
					unk_0x59DF7D162BF6D02E(uParam0->f_17[iVar0], 0);
				}
			}
		}
		iVar0++;
	}
	if (unk_0x5A228A6A51E757C8(unk_0x460153A63B9477BC()))
	{
		if (!unk_0x5AEB5DDFFAD43CA5(unk_0x9B0761B4C3EB8BC7()))
		{
			if (unk_0x6E0C5E7AAF8B6214(unk_0x9B0761B4C3EB8BC7()))
			{
				unk_0x83BBFE5E96C64FBA(unk_0x9B0761B4C3EB8BC7(), 0);
				unk_0x59DF7D162BF6D02E(unk_0x9B0761B4C3EB8BC7(), 0);
			}
		}
	}
}

var func_63()
{
	var uVar0;
	
	return uVar0;
}

Vector3 func_64()
{
	struct<3> Var0;
	
	return Var0;
}

void func_65()
{
	int iVar0;
	
	if (unk_0xE0B3BC41DDA88DF0(unk_0x9B0761B4C3EB8BC7(), iLocal_86, false))
	{
		if (unk_0x8F678487EEBD8CE4(iLocal_90))
		{
			unk_0x93370FA10F15BE44(&iLocal_90);
		}
		if (iLocal_36 <= 2)
		{
			iLocal_74 = (unk_0xFD4F66ED3A6F0B81() * ((60 * iLocal_76) + iLocal_77));
			iLocal_74 = (iLocal_74 + unk_0x578C4EF320340AF7());
			iLocal_78 = (iLocal_74 - unk_0xFD4F66ED3A6F0B81() * 30);
		}
		else if (iLocal_36 > 6)
		{
			iLocal_74 = (unk_0xFD4F66ED3A6F0B81() * ((60 * iLocal_76) + iLocal_77));
			iLocal_74 = (iLocal_74 + unk_0x578C4EF320340AF7());
			iLocal_78 = (iLocal_74 - unk_0xFD4F66ED3A6F0B81() * 30);
		}
		else if (iLocal_36 >= 3 && iLocal_36 <= 4)
		{
			iLocal_87 = unk_0xCE4780E24AFDFBF9(iLocal_83, Local_66, fLocal_68, true, true, false);
			iLocal_85[0] = unk_0x6A7A2C83BD302BA4(iLocal_87, 6, iLocal_81, -1, 1, true);
			iLocal_85[1] = unk_0x6A7A2C83BD302BA4(iLocal_87, 6, iLocal_81, 0, 1, true);
			unk_0xDE8F8016287F771F("rghCop", &iLocal_106);
			unk_0xEFBCE8F8316F89EA(4, iLocal_106, 1862763509);
			unk_0x6673CC701BC8E9C1(iLocal_85[0], 39, true);
			unk_0x6673CC701BC8E9C1(iLocal_85[1], 39, true);
			iVar0 = 0;
			while (iVar0 < iLocal_85)
			{
				unk_0x92BD213E6A0E666B(iLocal_85[iVar0], joaat("weapon_pistol"), -1, false, true);
				unk_0x6C08F93084C348FC(iLocal_85[iVar0], 100f);
				unk_0xD3D9D7C84656DAE5(iLocal_85[iVar0], iLocal_106);
				iVar0++;
			}
		}
		iLocal_38 = 2;
	}
}

void func_66()
{
	int iVar0;
	
	if (!unk_0xA59F96B50B97E63C(iLocal_86, 0))
	{
		if (func_101() || unk_0x5AEB5DDFFAD43CA5(iLocal_84[0]))
		{
			iVar0 = 0;
			while (iVar0 < iLocal_84)
			{
				if (!unk_0x5AEB5DDFFAD43CA5(iLocal_84[iVar0]))
				{
					if (!unk_0x8F678487EEBD8CE4(uLocal_89[iVar0]))
					{
						uLocal_89[iVar0] = func_10(iLocal_84[iVar0], 1, 145);
						unk_0x6673CC701BC8E9C1(iLocal_84[iVar0], 1, false);
						unk_0x9DC06E2A59C5AEBB(&iLocal_108);
						unk_0x0AB756271BADC8DF(0, 0, 0);
						unk_0x8FF9CE1C0F94F59A(0, unk_0x9B0761B4C3EB8BC7(), 0, 16);
						unk_0x19F29730874AD6F1(iLocal_108);
						unk_0x9B6EC2CECE1010EF(iLocal_84[iVar0], iLocal_108);
						unk_0x4F83FEE4454169D4(&iLocal_108);
					}
				}
				else if (unk_0x8F678487EEBD8CE4(uLocal_89[iVar0]))
				{
					unk_0x93370FA10F15BE44(&(uLocal_89[iVar0]));
				}
				iVar0++;
			}
		}
		else if (!iLocal_73)
		{
			if (!unk_0x5AEB5DDFFAD43CA5(iLocal_84[0]))
			{
				if (unk_0x910DFF8E55ABB8EC(unk_0x9B0761B4C3EB8BC7(), iLocal_84[0], 50f, 50f, 50f, 0, 1, 0))
				{
					unk_0xBD204892D76E6303(iLocal_84[0], iLocal_86, unk_0x9B0761B4C3EB8BC7(), 8, 25f, 786469, -1f, -1f, 1);
					iLocal_73 = 1;
				}
			}
		}
		if (unk_0xE0B3BC41DDA88DF0(unk_0x9B0761B4C3EB8BC7(), iLocal_86, false))
		{
			if (unk_0x8F678487EEBD8CE4(iLocal_90))
			{
				unk_0x93370FA10F15BE44(&iLocal_90);
			}
			func_100(&uLocal_94, 0, 0);
			iLocal_38 = 2;
		}
		else if (unk_0xB064AF9925F5537B(iLocal_86, -1, 0) || unk_0x5AEB5DDFFAD43CA5(iLocal_84[0]))
		{
			func_100(&uLocal_94, 0, 0);
		}
		else
		{
			func_67();
		}
	}
}

void func_67()
{
	if (!unk_0x5AEB5DDFFAD43CA5(iLocal_84[0]) && !unk_0xA59F96B50B97E63C(iLocal_86, 0))
	{
		if (unk_0xE0B3BC41DDA88DF0(iLocal_84[0], iLocal_86, false))
		{
			func_68(&uLocal_94, iLocal_86, 0, 0, 1, 1, 1);
		}
	}
}

void func_68(var uParam0, int iParam1, char* sParam2, int iParam3, bool bParam4, int iParam5, bool bParam6)
{
	func_69(uParam0, iParam1, 0f, 0f, 0f, sParam2, iParam3, bParam4, iParam5, bParam6);
}

void func_69(var uParam0, int iParam1, struct<3> Param2, char* sParam3, int iParam4, bool bParam5, var uParam6, bool bParam7)
{
	func_70(uParam0, iParam1, Param2, sParam3, iParam4, bParam5, uParam6, bParam7);
}

void func_70(var uParam0, int iParam1, struct<3> Param2, char* sParam3, int iParam4, bool bParam5, var uParam6, bool bParam7)
{
	if (!unk_0x47DBF174A0CB9D55(unk_0x9B0761B4C3EB8BC7(), true))
	{
		func_100(uParam0, 0, 0);
	}
	uParam0->f_6 = 2;
	func_71(uParam0, iParam1, Param2, sParam3, iParam4, bParam5, uParam6, bParam7);
}

void func_71(var uParam0, int iParam1, struct<3> Param2, char* sParam3, int iParam4, bool bParam5, var uParam6, bool bParam7)
{
	int iVar0;
	int iVar1;
	
	if (uParam0->f_1 && unk_0x28BD5A3E7899F23D())
	{
		if (unk_0x578C4EF320340AF7() >= (uParam0->f_8 + uParam0->f_9))
		{
			uParam0->f_1 = 0;
		}
	}
	iVar0 = sParam3;
	if (unk_0x211E6DB3335430B4(iVar0))
	{
		if (!unk_0x25DDB354A40FFCDB())
		{
			iVar0 = "CMN_HINT";
		}
		else
		{
			iVar0 = "FM_IHELP_HNT";
		}
	}
	if (func_99(iVar0))
	{
		func_98();
	}
	if (func_97(iParam1) && unk_0xDC79F755CB11603C(iParam1))
	{
		iVar1 = 0;
		if (unk_0xA1914E72A0EB31D0(iParam1))
		{
			unk_0x2D5FBCB5F3775D68(unk_0x9048E8838E822F21(iParam1));
			unk_0xD406B5CBBDDAAC9A(unk_0x9048E8838E822F21(iParam1), 1);
			if (unk_0x81FEEBF9E5FB5F68(unk_0x9048E8838E822F21(iParam1)))
			{
				iVar1 = 1;
			}
		}
		else if (unk_0x20F7576FDB52E2B0(iParam1))
		{
			unk_0x66E3DC03D85A1C4A(unk_0xEA90A5DC55A2F652(iParam1));
			if (unk_0xDBB6DC5D5008C6CA(unk_0xEA90A5DC55A2F652(iParam1)))
			{
				iVar1 = 1;
			}
		}
		else if (unk_0x49116E591C7E1412(iParam1))
		{
			unk_0xDE8B4334708FAB1C(unk_0x12A172E7609C3E0E(iParam1));
			if (unk_0x724265F5B01A8251(unk_0x12A172E7609C3E0E(iParam1)))
			{
				iVar1 = 1;
			}
		}
		if (!unk_0x28BD5A3E7899F23D())
		{
			if (func_92(uParam0, bParam5, bParam7, 0))
			{
				func_88(uParam0, iParam1, Param2, iParam4);
			}
			if (*uParam0)
			{
				*uParam0 = 0;
			}
			else if (uParam0->f_6 == 2)
			{
				if (func_76(iVar0))
				{
					if ((unk_0x211E6DB3335430B4(uParam0->f_3) && !unk_0x211E6DB3335430B4(iVar0)) && unk_0x47DBF174A0CB9D55(unk_0x9B0761B4C3EB8BC7(), false))
					{
						if ((iVar1 && !unk_0xDABD547F0DF2906C()) && uParam6)
						{
							if (!func_99(iVar0))
							{
								func_75(iVar0, -1);
								uParam0->f_3 = iVar0;
								if (unk_0xF005CCA4263DF67F("CMN_HINT", iVar0))
								{
									func_74(1);
								}
							}
						}
					}
				}
			}
			else if (func_76(iVar0))
			{
				if (unk_0x211E6DB3335430B4(uParam0->f_3) && !unk_0x211E6DB3335430B4(iVar0))
				{
					if (((unk_0xA38BFCB05DBE439D(iParam1) && iVar1) && !unk_0xDABD547F0DF2906C()) && uParam6)
					{
						if (!func_99(iVar0))
						{
							func_75(iVar0, -1);
							uParam0->f_3 = iVar0;
							if (unk_0xF005CCA4263DF67F("CMN_HINT", iVar0))
							{
								func_74(1);
							}
						}
					}
				}
			}
		}
		else
		{
			if (!unk_0x211E6DB3335430B4(sParam3))
			{
				if (func_99(sParam3))
				{
					unk_0xD289B55B6AADBA10(1);
				}
			}
			if (unk_0x47DBF174A0CB9D55(unk_0x9B0761B4C3EB8BC7(), true))
			{
				if (unk_0xDF1110AC39C733FE(unk_0x9B0761B4C3EB8BC7()))
				{
					if (unk_0xF7B3A1430308F92B(3) == 3 || unk_0xF7B3A1430308F92B(3) == 4)
					{
						func_100(uParam0, iVar0, 1);
					}
				}
				else if (unk_0x94BF5C4EB0D40E9E(unk_0x9B0761B4C3EB8BC7()))
				{
					if (unk_0xF7B3A1430308F92B(6) == 3 || unk_0xF7B3A1430308F92B(6) == 4)
					{
						func_100(uParam0, iVar0, 1);
					}
				}
				else if (unk_0xAABDC18B9F6EC79D(unk_0x9B0761B4C3EB8BC7()))
				{
					if (unk_0xF7B3A1430308F92B(4) == 3 || unk_0xF7B3A1430308F92B(4) == 4)
					{
						func_100(uParam0, iVar0, 1);
					}
				}
				else if (unk_0xF1263D4D1D8024EF(unk_0x9B0761B4C3EB8BC7()))
				{
					if (unk_0xF7B3A1430308F92B(5) == 3 || unk_0xF7B3A1430308F92B(5) == 4)
					{
						func_100(uParam0, iVar0, 1);
					}
				}
				else if (unk_0xE4B70EFD14220305(unk_0x9B0761B4C3EB8BC7()))
				{
					if (unk_0xF7B3A1430308F92B(2) == 3 || unk_0xF7B3A1430308F92B(2) == 4)
					{
						func_100(uParam0, iVar0, 1);
					}
				}
				else if (unk_0x1075BD5031B0682E() == 3 || unk_0x1075BD5031B0682E() == 4)
				{
					func_100(uParam0, iVar0, 1);
				}
			}
			if (!func_92(uParam0, bParam5, bParam7, 0))
			{
				if ((!*uParam0 && !uParam0->f_1) && !func_73(uParam0))
				{
					func_72(uParam0);
				}
			}
		}
	}
	else
	{
		func_100(uParam0, iVar0, 0);
	}
}

void func_72(var uParam0)
{
	if (func_97(unk_0x9B0761B4C3EB8BC7()))
	{
		unk_0xE2348E4036041923(unk_0x9B0761B4C3EB8BC7());
	}
	if (unk_0x28BD5A3E7899F23D())
	{
		unk_0x0C23023B6B6C6051(true);
		unk_0x8B4966914EE5EB9F(0);
		unk_0xFA07F8BEBDAAFBA8("HINT_CAM_SCENE");
		unk_0x50E637E6CAC936B2("FocusIn");
		if (uParam0->f_11)
		{
			unk_0x0A794A8277A63161("FocusOut", 0, 0);
			unk_0xC4CC25B68A91D144(-1, "FocusOut", "HintCamSounds", true);
			uParam0->f_11 = 0;
		}
	}
	uParam0->f_2 = -1;
	*uParam0 = 1;
}

int func_73(var uParam0)
{
	int iVar0;
	
	if (uParam0->f_2 > 0)
	{
		iVar0 = (uParam0->f_10 / 2);
		if (uParam0->f_2 + iVar0) > unk_0x578C4EF320340AF7()
		{
			return 1;
		}
	}
	return 0;
}

int func_74(bool bParam0)
{
	switch (Global_41631)
	{
		case 0:
		case 3:
			if (bParam0)
			{
				Global_111858.f_10045.f_100++;
			}
			return Global_111858.f_10045.f_100;
			break;
		
		case 4:
			if (bParam0)
			{
				Global_111858.f_10045.f_101++;
			}
			return Global_111858.f_10045.f_101;
			break;
		
		case 5:
		case 15:
			if (bParam0)
			{
				Global_111858.f_10045.f_102++;
			}
			return Global_111858.f_10045.f_102;
			break;
		
		default:
			break;
	}
	return 3;
}

void func_75(char* sParam0, int iParam1)
{
	unk_0x17751E107423AFE9(sParam0);
	unk_0x1A169149B3D18FCB(0, 0, true, iParam1);
}

int func_76(char* sParam0)
{
	if (!func_77(1, 1, 0))
	{
		if ((!unk_0x7BCC91F3C1CF24E8(sParam0) && func_99(sParam0)) || func_99("CMN_HINT"))
		{
			unk_0xD289B55B6AADBA10(1);
		}
		return 0;
	}
	switch (Global_41631)
	{
		case 0:
		case 3:
			if (func_74(0) < 3)
			{
				return 1;
			}
			break;
		
		case 4:
			if (func_74(0) < 1)
			{
				return 1;
			}
			break;
		
		case 5:
		case 15:
			if (func_74(0) < 1)
			{
				return 1;
			}
			break;
		
		default:
			break;
	}
	return 0;
}

int func_77(bool bParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	
	if (bParam0)
	{
		if (!unk_0x4DC4117F94CD5B84(unk_0x460153A63B9477BC()))
		{
			return 0;
		}
	}
	if (bParam2)
	{
		return 1;
	}
	if (unk_0x9CC4D06F5338CA6B())
	{
		return 0;
	}
	if (func_87(0))
	{
		return 0;
	}
	if (func_86())
	{
		return 0;
	}
	if (unk_0xDFAB5E5CBE16E8B1())
	{
		return 0;
	}
	if (Global_74030)
	{
		return 0;
	}
	if (unk_0x7B70881748D166CD(joaat("appinternet")) > 0)
	{
		return 0;
	}
	if (Global_58898)
	{
		return 0;
	}
	if (bParam1)
	{
		if (unk_0x47DBF174A0CB9D55(unk_0x9B0761B4C3EB8BC7(), true))
		{
			if (unk_0xDF1110AC39C733FE(unk_0x9B0761B4C3EB8BC7()))
			{
				if (unk_0xF7B3A1430308F92B(3) == 3 || unk_0xF7B3A1430308F92B(3) == 4)
				{
					return 0;
				}
			}
			else if (unk_0x94BF5C4EB0D40E9E(unk_0x9B0761B4C3EB8BC7()))
			{
				if (unk_0xF7B3A1430308F92B(6) == 3 || unk_0xF7B3A1430308F92B(6) == 4)
				{
					return 0;
				}
			}
			else if (unk_0xAABDC18B9F6EC79D(unk_0x9B0761B4C3EB8BC7()))
			{
				if (unk_0xF7B3A1430308F92B(4) == 3 || unk_0xF7B3A1430308F92B(4) == 4)
				{
					return 0;
				}
			}
			else if (unk_0xF1263D4D1D8024EF(unk_0x9B0761B4C3EB8BC7()))
			{
				if (unk_0xF7B3A1430308F92B(5) == 3 || unk_0xF7B3A1430308F92B(5) == 4)
				{
					return 0;
				}
			}
			else if (unk_0xE4B70EFD14220305(unk_0x9B0761B4C3EB8BC7()))
			{
				if (unk_0xF7B3A1430308F92B(2) == 3 || unk_0xF7B3A1430308F92B(2) == 4)
				{
					return 0;
				}
			}
			else if (unk_0x1075BD5031B0682E() == 3 || unk_0x1075BD5031B0682E() == 4)
			{
				return 0;
			}
			if (unk_0xB2E78D7FD7EFCFD1())
			{
				return 0;
			}
		}
	}
	if ((func_85() || func_84(Global_4456448.f_129348)) || func_83())
	{
		if (unk_0x47DBF174A0CB9D55(unk_0x9B0761B4C3EB8BC7(), false))
		{
			iVar0 = unk_0xA5D5B1042E8F47BD(unk_0x9B0761B4C3EB8BC7(), false);
			iVar1 = func_82(unk_0x9B0761B4C3EB8BC7(), 0);
			if (((unk_0x09F8284D2E03269D(iVar0, iVar1) || (unk_0x36FE6D3220816ADA(iVar0) == joaat("apc") && iVar1 != -1)) || (unk_0x36FE6D3220816ADA(iVar0) == joaat("akula") && iVar1 != -1)) || (((unk_0x36FE6D3220816ADA(iVar0) == joaat("riot2") && iVar1 == 0) && func_81(iVar0, 10)) && unk_0x7F8B14CBFB9813E5(iVar0, 10) != -1))
			{
				return 0;
			}
		}
	}
	if (Global_1688745)
	{
		return 0;
	}
	if (func_78(unk_0x460153A63B9477BC()))
	{
		return 0;
	}
	return 1;
}

int func_78(int iParam0)
{
	if (iParam0 != func_80())
	{
		if (func_79(iParam0, 1, 1))
		{
			return Global_2425869[iParam0 /*443*/].f_314.f_6 != -1;
		}
		else if ((Global_1312896 && iParam0 == unk_0x460153A63B9477BC()) && func_79(iParam0, 1, 0))
		{
			return Global_2425869[iParam0 /*443*/].f_314.f_6 != -1;
		}
	}
	return 0;
}

int func_79(int iParam0, bool bParam1, bool bParam2)
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

int func_80()
{
	return -1;
}

int func_81(int iParam0, int iParam1)
{
	if (unk_0x80FF6C016CDB0FAF(iParam0, 0))
	{
		if (unk_0xC71761E30ACCF098(iParam0) > 0)
		{
			switch (iParam1)
			{
				case 17:
				case 18:
				case 19:
				case 20:
				case 21:
				case 22:
					return 1;
					break;
				
				default:
					if (unk_0xAB92DA7B6007DAAA(iParam0, iParam1) > 0)
					{
						return 1;
					}
					break;
				}
			}
	}
	return 0;
}

int func_82(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (!unk_0x5AEB5DDFFAD43CA5(iParam0))
	{
		if (unk_0x47DBF174A0CB9D55(iParam0, bParam1))
		{
			iVar0 = unk_0xA5D5B1042E8F47BD(iParam0, bParam1);
			if (unk_0xAE06B9E39EBDE049(iVar0))
			{
				iVar1 = unk_0x112A81273D7187A5(unk_0x36FE6D3220816ADA(iVar0));
				if (iVar1 == 1)
				{
					iVar3 = -1;
					return iVar3;
				}
				iVar2 = 0;
				while (iVar2 < iVar1)
				{
					iVar3 = (iVar2 - 1);
					if (!unk_0xB064AF9925F5537B(iVar0, iVar3, 0))
					{
						if (unk_0x10D3F7E169A49C44(iVar0, iVar3, 0) == iParam0)
						{
							return iVar3;
						}
					}
					iVar2++;
				}
			}
		}
	}
	return iVar3;
}

var func_83()
{
	return Global_2451787.f_18;
}

bool func_84(int iParam0)
{
	return iParam0 == 51;
}

var func_85()
{
	return Global_2451787.f_17;
}

bool func_86()
{
	return unk_0x578C4EF320340AF7() <= Global_22550.f_5878 + 100;
}

int func_87(int iParam0)
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

void func_88(var uParam0, int iParam1, struct<3> Param2, int iParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	if (Global_1319178 == 1)
	{
		return;
	}
	if (unk_0xA59F96B50B97E63C(iParam1, 0))
	{
		func_100(uParam0, 0, 0);
	}
	if (func_91(Param2, 0f, 0f, 0f, 0))
	{
		if (unk_0xA1914E72A0EB31D0(iParam1))
		{
			iVar0 = unk_0x9048E8838E822F21(iParam1);
			if (!unk_0x47DBF174A0CB9D55(iVar0, false))
			{
				if (unk_0xD0390A93AF3907B8(iVar0))
				{
					if (!func_89())
					{
						Param2 = { 0f, 0f, 1f };
					}
				}
				else if (unk_0xE080FA9EB010F041(iVar0))
				{
					Param2 = { 0f, 0f, 1f };
				}
			}
		}
	}
	unk_0x0C23023B6B6C6051(false);
	iVar1 = uParam0->f_9;
	iVar2 = uParam0->f_10;
	if (iParam3 == 1726668277)
	{
		if (iVar1 < 1500)
		{
			iVar1 = 1500;
		}
		if (iVar2 < 1500)
		{
			iVar2 = 1500;
		}
	}
	unk_0xF1B800B6646C4019(iParam1, Param2, 1, -1, iVar1, iVar2, iParam3);
	iVar3 = 2048;
	iVar4 = 3;
	unk_0xA785552633ED203B(unk_0x9B0761B4C3EB8BC7(), iParam1, -1, iVar3, iVar4);
	unk_0x0A794A8277A63161("FocusIn", 0, 0);
	unk_0x17E478571720218F("HINT_CAM_SCENE");
	unk_0xC4CC25B68A91D144(-1, "FocusIn", "HintCamSounds", true);
	uParam0->f_11 = 1;
	uParam0->f_8 = unk_0x578C4EF320340AF7();
	uParam0->f_1 = 1;
	*uParam0 = 0;
}

bool func_89()
{
	return func_90(unk_0x460153A63B9477BC());
}

int func_90(int iParam0)
{
	if (unk_0x36FE6D3220816ADA(unk_0x1FA7B77001D60F9D(iParam0)) == joaat("mp_f_freemode_01"))
	{
		return 1;
	}
	return 0;
}

bool func_91(struct<3> Param0, struct<3> Param1, bool bParam2)
{
	if (bParam2)
	{
		return (Param0.x == Param1.x && Param0.f_1 == Param1.f_1);
	}
	return ((Param0.x == Param1.x && Param0.f_1 == Param1.f_1) && Param0.f_2 == Param1.f_2);
}

int func_92(var uParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (uParam0->f_1)
	{
		if (unk_0x578C4EF320340AF7() >= (uParam0->f_8 + uParam0->f_9))
		{
			uParam0->f_1 = 0;
		}
	}
	switch (uParam0->f_5)
	{
		case 0:
			uParam0->f_7 = 0;
			if (uParam0->f_6 == 0)
			{
				if (unk_0x47DBF174A0CB9D55(unk_0x9B0761B4C3EB8BC7(), true))
				{
					if (func_96(bParam1, bParam2, bParam3))
					{
						uParam0->f_4 = unk_0x578C4EF320340AF7();
						uParam0->f_5 = 1;
						uParam0->f_7 = 1;
					}
				}
				else if (func_95(bParam1, bParam2, bParam3))
				{
					uParam0->f_4 = unk_0x578C4EF320340AF7();
					uParam0->f_5 = 1;
					uParam0->f_7 = 1;
				}
			}
			else if (uParam0->f_6 == 1)
			{
				if (func_95(bParam1, bParam2, bParam3))
				{
					uParam0->f_4 = unk_0x578C4EF320340AF7();
					uParam0->f_5 = 1;
					uParam0->f_7 = 1;
				}
			}
			else if (uParam0->f_6 == 2)
			{
				if (func_96(bParam1, bParam2, bParam3))
				{
					uParam0->f_4 = unk_0x578C4EF320340AF7();
					uParam0->f_5 = 1;
					uParam0->f_7 = 1;
				}
			}
			if (func_73(uParam0))
			{
				uParam0->f_7 = 1;
				uParam0->f_5 = 4;
			}
			break;
		
		case 1:
			if ((unk_0x578C4EF320340AF7() - uParam0->f_4) <= 500)
			{
				if (uParam0->f_6 == 0)
				{
					if (unk_0x47DBF174A0CB9D55(unk_0x9B0761B4C3EB8BC7(), true))
					{
						if (!func_96(bParam1, bParam2, bParam3))
						{
							uParam0->f_4 = unk_0x578C4EF320340AF7();
							uParam0->f_5 = 3;
						}
					}
					else if (!func_95(bParam1, bParam2, bParam3))
					{
						uParam0->f_4 = unk_0x578C4EF320340AF7();
						uParam0->f_5 = 3;
					}
				}
				else if (uParam0->f_6 == 1)
				{
					if (!func_95(bParam1, bParam2, bParam3))
					{
						uParam0->f_4 = unk_0x578C4EF320340AF7();
						uParam0->f_5 = 3;
					}
				}
				else if (uParam0->f_6 == 2)
				{
					if (!func_96(bParam1, bParam2, bParam3))
					{
						uParam0->f_4 = unk_0x578C4EF320340AF7();
						uParam0->f_5 = 3;
					}
				}
			}
			else
			{
				uParam0->f_5 = 2;
			}
			break;
		
		case 2:
			if (uParam0->f_6 == 0)
			{
				if (unk_0x47DBF174A0CB9D55(unk_0x9B0761B4C3EB8BC7(), true))
				{
					if (!func_96(bParam1, bParam2, bParam3))
					{
						uParam0->f_5 = 0;
					}
				}
				else if (!func_95(bParam1, bParam2, bParam3))
				{
					uParam0->f_5 = 0;
				}
			}
			else if (uParam0->f_6 == 1)
			{
				if (!func_95(bParam1, bParam2, bParam3) || unk_0x47DBF174A0CB9D55(unk_0x9B0761B4C3EB8BC7(), true))
				{
					uParam0->f_5 = 0;
				}
			}
			else if (uParam0->f_6 == 2)
			{
				if (!unk_0x47DBF174A0CB9D55(unk_0x9B0761B4C3EB8BC7(), true) || unk_0xA4E17AE82A76F738(unk_0x9B0761B4C3EB8BC7(), 2))
				{
					uParam0->f_5 = 0;
				}
				else if (!func_96(bParam1, bParam2, bParam3))
				{
					uParam0->f_5 = 0;
				}
			}
			break;
		
		case 3:
			if ((unk_0x578C4EF320340AF7() - uParam0->f_4) > 500)
			{
				if (uParam0->f_6 == 0)
				{
					if (unk_0x47DBF174A0CB9D55(unk_0x9B0761B4C3EB8BC7(), true))
					{
						if (func_94(bParam1, bParam2, bParam3))
						{
							uParam0->f_5 = 0;
						}
					}
					else if (func_93(bParam1, bParam2, bParam3))
					{
						uParam0->f_5 = 0;
					}
				}
				else if (uParam0->f_6 == 1)
				{
					if (unk_0x47DBF174A0CB9D55(unk_0x9B0761B4C3EB8BC7(), true) || func_93(bParam1, bParam2, bParam3))
					{
						uParam0->f_5 = 0;
					}
				}
				else if (uParam0->f_6 == 2)
				{
					if (!unk_0x47DBF174A0CB9D55(unk_0x9B0761B4C3EB8BC7(), true) || unk_0xA4E17AE82A76F738(unk_0x9B0761B4C3EB8BC7(), 2))
					{
						uParam0->f_5 = 0;
					}
					else if (func_94(bParam1, bParam2, bParam3))
					{
						uParam0->f_5 = 0;
					}
				}
			}
			break;
		
		case 4:
			if (!func_73(uParam0))
			{
				uParam0->f_5 = 0;
			}
			break;
	}
	if (!func_77(bParam1, bParam2, bParam3))
	{
		uParam0->f_5 = 0;
		uParam0->f_7 = 0;
	}
	if (uParam0->f_7)
	{
		func_98();
		return 1;
	}
	else
	{
		return 0;
	}
	return 0;
}

int func_93(bool bParam0, bool bParam1, bool bParam2)
{
	if (!func_77(bParam0, bParam1, bParam2))
	{
		return 0;
	}
	if (!unk_0x47DBF174A0CB9D55(unk_0x9B0761B4C3EB8BC7(), false))
	{
		if (!unk_0x8B1FF66E0C62B7AE(unk_0x460153A63B9477BC()))
		{
			unk_0x779660A9E5364C4D(0, 140, 1);
			unk_0x779660A9E5364C4D(0, 80, 1);
			if (unk_0x275A6259432E6B3C(0, 80))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_94(bool bParam0, bool bParam1, bool bParam2)
{
	if (!func_77(bParam0, bParam1, bParam2))
	{
		return 0;
	}
	if (unk_0x47DBF174A0CB9D55(unk_0x9B0761B4C3EB8BC7(), false))
	{
		unk_0x779660A9E5364C4D(0, 80, 1);
		if (unk_0xF86D3D6D2985D768())
		{
			if (unk_0x275A6259432E6B3C(0, 80))
			{
				unk_0x0C23023B6B6C6051(false);
				return 1;
			}
		}
	}
	return 0;
}

int func_95(bool bParam0, bool bParam1, bool bParam2)
{
	if (!func_77(bParam0, bParam1, bParam2))
	{
		return 0;
	}
	if (!unk_0x47DBF174A0CB9D55(unk_0x9B0761B4C3EB8BC7(), false))
	{
		if (!unk_0x8B1FF66E0C62B7AE(unk_0x460153A63B9477BC()))
		{
			unk_0x779660A9E5364C4D(0, 140, 1);
			unk_0x779660A9E5364C4D(0, 80, 1);
			if (unk_0xB9C0D9B37277621D(0, 80) && unk_0x578C4EF320340AF7() > Global_116)
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_96(bool bParam0, bool bParam1, bool bParam2)
{
	if (!func_77(bParam0, bParam1, bParam2))
	{
		return 0;
	}
	if (unk_0x47DBF174A0CB9D55(unk_0x9B0761B4C3EB8BC7(), false))
	{
		unk_0x779660A9E5364C4D(0, 80, 1);
		if (unk_0xF86D3D6D2985D768())
		{
			if (unk_0xB9C0D9B37277621D(0, 80) && unk_0x578C4EF320340AF7() > Global_116)
			{
				unk_0x0C23023B6B6C6051(false);
				return 1;
			}
		}
	}
	return 0;
}

int func_97(int iParam0)
{
	if (unk_0xAE06B9E39EBDE049(iParam0))
	{
		if (unk_0x20F7576FDB52E2B0(iParam0))
		{
			if (unk_0x80FF6C016CDB0FAF(unk_0xEA90A5DC55A2F652(iParam0), 0))
			{
				return 1;
			}
		}
		else if (unk_0xA1914E72A0EB31D0(iParam0))
		{
			if (!unk_0x5AEB5DDFFAD43CA5(unk_0x9048E8838E822F21(iParam0)))
			{
				return 1;
			}
		}
		else if (unk_0x49116E591C7E1412(iParam0))
		{
			return 1;
		}
	}
	return 0;
}

void func_98()
{
	unk_0xBE20AB8238688965(&Global_7552, 4);
}

bool func_99(char* sParam0)
{
	unk_0x69476B1CA6A9FF80(sParam0);
	return unk_0x1A3A9FFE5CA6F64B(0);
}

void func_100(var uParam0, int iParam1, int iParam2)
{
	char* sVar0;
	
	if (unk_0x25DDB354A40FFCDB())
	{
		if (unk_0xCE990E643CD9D0E5(Global_2540384.f_4655, 26))
		{
			return;
		}
	}
	if (unk_0x28BD5A3E7899F23D())
	{
		unk_0x8B4966914EE5EB9F(iParam2);
		unk_0x50E637E6CAC936B2("FocusIn");
		unk_0xFA07F8BEBDAAFBA8("HINT_CAM_SCENE");
		if (uParam0->f_11)
		{
			unk_0x0A794A8277A63161("FocusOut", 0, 0);
			unk_0xC4CC25B68A91D144(-1, "FocusOut", "HintCamSounds", true);
			uParam0->f_11 = 0;
		}
	}
	unk_0x0C23023B6B6C6051(true);
	uParam0->f_1 = 0;
	*uParam0 = 0;
	uParam0->f_2 = -1;
	uParam0->f_8 = 0;
	uParam0->f_5 = 0;
	uParam0->f_6 = 0;
	sVar0 = iParam1;
	if (unk_0x211E6DB3335430B4(sVar0))
	{
		if (!unk_0x25DDB354A40FFCDB())
		{
			sVar0 = "CMN_HINT";
		}
		else
		{
			sVar0 = "FM_IHELP_HNT";
		}
	}
	if (!unk_0x211E6DB3335430B4(uParam0->f_3))
	{
		if (func_99(uParam0->f_3))
		{
			unk_0xD289B55B6AADBA10(1);
		}
	}
	if (!unk_0x211E6DB3335430B4(sVar0))
	{
		if (func_99(sVar0))
		{
			unk_0xD289B55B6AADBA10(1);
		}
	}
}

int func_101()
{
	if (unk_0xAE06B9E39EBDE049(iLocal_86))
	{
		if (!unk_0xA59F96B50B97E63C(iLocal_86, 0))
		{
			if ((((((unk_0x4F5F2FB7AE0EB7AB(iLocal_86) < 300 || unk_0xDAD5E5518E960CD1(iLocal_86) < 200f) || unk_0x0922C2E075A5F18C(iLocal_86)) || (unk_0x5C87AA49B5DF6712(iLocal_86, 0, 0) && unk_0x5C87AA49B5DF6712(iLocal_86, 1, 0))) || (unk_0x5C87AA49B5DF6712(iLocal_86, 4, 0) && unk_0x5C87AA49B5DF6712(iLocal_86, 5, 0))) || (unk_0x5C87AA49B5DF6712(iLocal_86, 0, 0) && unk_0x5C87AA49B5DF6712(iLocal_86, 4, 0))) || (unk_0x5C87AA49B5DF6712(iLocal_86, 1, 0) && unk_0x5C87AA49B5DF6712(iLocal_86, 5, 0)))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_102()
{
	int iVar0;
	int iVar1;
	
	iLocal_86 = func_104(0);
	if (!unk_0x80FF6C016CDB0FAF(iLocal_86, 0))
	{
		iLocal_86 = unk_0xCE4780E24AFDFBF9(iLocal_82, Local_64, fLocal_67, true, true, false);
		iVar0 = 1;
		while (iVar0 <= 8)
		{
			unk_0xF242CEB863060ABC(iLocal_86, iVar0, true);
			iVar0++;
		}
		if (iLocal_79 != -1)
		{
			unk_0xF242CEB863060ABC(iLocal_86, iLocal_79, false);
		}
	}
	unk_0xDF8B40B1A780A3CB(iLocal_86, 1);
	iLocal_90 = func_103(iLocal_86, 0, 0);
	if (iLocal_36 != 5 && iLocal_36 != 6)
	{
		if (iLocal_36 > 6)
		{
			unk_0x52090984B5C8A3E4(iLocal_86, false, false, false, false, true, false, 0, false);
			unk_0x2DB2D4C3CB88500D(-1, "BAR_DELIVER_BOOZE_RATTLE_MASTER", iLocal_86, 0, false, 0);
		}
		func_35(sLocal_91, 7500, 1);
	}
	else
	{
		iLocal_84[0] = unk_0x6A7A2C83BD302BA4(iLocal_86, 26, iLocal_80, -1, 1, true);
		iLocal_84[1] = unk_0x6A7A2C83BD302BA4(iLocal_86, 26, iLocal_80, 0, 1, true);
		unk_0xDE8F8016287F771F("rghCriminal", &iLocal_107);
		unk_0xEFBCE8F8316F89EA(5, iLocal_107, 1862763509);
		iVar1 = 0;
		while (iVar1 < iLocal_84)
		{
			unk_0x4E65320BC9AD521C(iLocal_84[iVar1], true);
			unk_0x92BD213E6A0E666B(iLocal_84[iVar1], joaat("weapon_sawnoffshotgun"), -1, false, true);
			unk_0xD3D9D7C84656DAE5(iLocal_84[iVar1], iLocal_107);
			iVar1++;
		}
		unk_0xD8C1C38EE8BC2AC6(iLocal_84[0], iLocal_86, 25f, 786599);
		func_35("PMDL_REC", 7500, 1);
	}
	if (!unk_0xA59F96B50B97E63C(unk_0xA5D3CD332CD10EE9(), 0))
	{
		iLocal_88 = unk_0xA5D3CD332CD10EE9();
	}
	iLocal_38 = 1;
}

int func_103(int iParam0, bool bParam1, bool bParam2)
{
	return func_11(iParam0, !bParam1, bParam2);
}

int func_104(int iParam0)
{
	if (unk_0x80FF6C016CDB0FAF(Global_110568.f_222[iParam0], 0))
	{
		unk_0x4F3C4F457D44BB0F(Global_110568.f_222[iParam0], true, 1);
		return Global_110568.f_222[iParam0];
	}
	return 0;
}

int func_105()
{
	if (unk_0xAE06B9E39EBDE049(iLocal_86))
	{
		if (unk_0x80FF6C016CDB0FAF(iLocal_86, 0))
		{
			if (!unk_0x910DFF8E55ABB8EC(iLocal_86, unk_0x9B0761B4C3EB8BC7(), 300f, 300f, 300f, 0, 1, 0))
			{
				return 1;
			}
		}
		else
		{
			return 1;
		}
	}
	if (unk_0x5AEB5DDFFAD43CA5(iLocal_84[0]))
	{
		if (unk_0x8F678487EEBD8CE4(uLocal_89[0]))
		{
			unk_0x93370FA10F15BE44(&(uLocal_89[0]));
		}
	}
	return 0;
}

void func_106()
{
	unk_0x78FCB2E22C41B9D5(iLocal_82);
	unk_0xBAA4D421B8B8A744("PMDL", 0);
	if (iLocal_36 >= 3 && iLocal_36 <= 4)
	{
		unk_0x78FCB2E22C41B9D5(iLocal_81);
		unk_0x78FCB2E22C41B9D5(iLocal_83);
	}
	else if (iLocal_36 == 5 || iLocal_36 == 6)
	{
		unk_0x78FCB2E22C41B9D5(iLocal_80);
	}
	unk_0x410A1E7AD7D5C774(joaat("benson"), true);
	unk_0x410A1E7AD7D5C774(joaat("pony2"), true);
	if (unk_0x7D167B9A0CCDA347(iLocal_82) && unk_0xF5EE205091CE6DB2(0))
	{
		if (iLocal_36 >= 3 && iLocal_36 <= 4)
		{
			if (unk_0x7D167B9A0CCDA347(iLocal_81) && unk_0x7D167B9A0CCDA347(iLocal_83))
			{
				bLocal_69 = true;
			}
		}
		else if (iLocal_36 == 5 || iLocal_36 == 6)
		{
			if (unk_0x7D167B9A0CCDA347(iLocal_80))
			{
				bLocal_69 = true;
			}
		}
		else if (iLocal_36 > 6)
		{
			if (unk_0x8B917081F9836EDD("Deliveries", false, -1))
			{
				bLocal_69 = true;
			}
		}
		else
		{
			bLocal_69 = true;
		}
	}
}

void func_107()
{
	float fVar0;
	
	Local_64 = { func_109(func_111(), iLocal_36) };
	fLocal_67 = func_108(func_111(), iLocal_36);
	if (iLocal_36 > 6)
	{
		sLocal_91 = "PMDL_TRUCK";
		sLocal_92 = "PMDL_BTIM";
		sLocal_93 = "PMDL_BCKT";
		iLocal_82 = joaat("benson");
		iLocal_79 = 2;
	}
	if (func_111() == 10)
	{
		Local_65 = { -1161.213f, -1567.068f, 3.4234f };
		iLocal_82 = joaat("pony2");
		if (iLocal_36 == 0)
		{
			iLocal_76 = 2;
			iLocal_77 = 15;
			sLocal_92 = "PMDL_TIM";
		}
		else if (iLocal_36 == 1)
		{
			iLocal_76 = 1;
			iLocal_77 = 30;
			sLocal_92 = "PMDL_TIM";
		}
		else if (iLocal_36 == 2)
		{
			iLocal_76 = 1;
			iLocal_77 = 30;
			sLocal_92 = "PMDL_TIM";
		}
		else if (iLocal_36 == 3)
		{
			Local_66 = { -3121.261f, 1152.92f, 19.4047f };
			fLocal_68 = 176.4887f;
			iLocal_83 = joaat("police4");
			iLocal_81 = joaat("s_m_y_cop_01");
		}
		else if (iLocal_36 == 4)
		{
			Local_66 = { 1543.145f, 2184.371f, 77.8114f };
			fLocal_68 = 45.3499f;
			iLocal_83 = joaat("police4");
			iLocal_81 = joaat("s_m_y_cop_01");
		}
		else if (iLocal_36 >= 5)
		{
			iLocal_80 = joaat("g_m_y_salvagoon_02");
		}
	}
	else if (func_111() == 14)
	{
		Local_65 = { -2169.828f, 4277.365f, 47.9568f };
		fVar0 = unk_0x272784C60C397DB6(Local_64, Local_65, true);
		iLocal_77 = round((((fVar0 / 16.5f) + 40f) / 2f));
	}
	else if (func_111() == 13)
	{
		Local_65 = { -323.356f, 6264.431f, 30.4463f };
		fVar0 = unk_0x272784C60C397DB6(Local_64, Local_65, true);
		iLocal_77 = round((((fVar0 / 16.5f) + 40f) / 2f));
	}
	else if (func_111() == 12)
	{
		Local_65 = { 198.5282f, 342.2399f, 104.9566f };
		fVar0 = unk_0x272784C60C397DB6(Local_64, Local_65, true);
		iLocal_77 = round((((fVar0 / 16.5f) + 15f) / 2f));
	}
	else if (func_111() == 11)
	{
		Local_65 = { -560.0195f, 301.1481f, 82.1436f };
		fVar0 = unk_0x272784C60C397DB6(Local_64, Local_65, true);
		iLocal_77 = round((((fVar0 / 16.5f) + 15f) / 2f));
	}
	iLocal_75 = 0;
	iLocal_70 = 1;
}

float func_108(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 10:
			switch (iParam1)
			{
				case 0:
					return 0.5801f;
					break;
				
				case 1:
					return 177.9306f;
					break;
				
				case 2:
					return 49.6978f;
					break;
				
				case 3:
					return 336.9449f;
					break;
				
				case 4:
					return 80.1639f;
					break;
				
				case 5:
					return 287.983f;
					break;
				
				case 6:
					return 46.7895f;
					break;
			}
			break;
		
		case 11:
		case 12:
		case 13:
		case 14:
			switch (iParam1)
			{
				case 7:
					return 273.1085f;
					break;
				
				case 8:
					return 256.7899f;
					break;
				
				case 9:
					return 180.9647f;
					break;
				
				case 10:
					return 126.4385f;
					break;
				
				case 11:
					return 123.4767f;
					break;
				
				case 12:
					return 226.219f;
					break;
				
				case 13:
					return 82.6097f;
					break;
			}
			break;
	}
	return 0f;
}

Vector3 func_109(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 10:
			switch (iParam1)
			{
				case 0:
					return -128.1876f, 1934.495f, 194.9075f;
					break;
				
				case 1:
					return -179.8744f, 586.4468f, 196.6278f;
					break;
				
				case 2:
					return 1390.089f, -605.923f, 73.3378f;
					break;
				
				case 3:
					return -3170.048f, 1098.809f, 19.7817f;
					break;
				
				case 4:
					return 1581.22f, 2194.629f, 78.1062f;
					break;
				
				case 5:
					return 1475.833f, -113.5801f, 141.794f;
					break;
				
				case 6:
					return 1603.071f, -1793.915f, 89.0179f;
					break;
			}
			break;
		
		case 11:
		case 12:
		case 13:
		case 14:
			switch (iParam1)
			{
				case 7:
					return 642.2169f, 2774.892f, 40.985f;
					break;
				
				case 8:
					return -1916.122f, 2060.313f, 139.7363f;
					break;
				
				case 9:
					return 824.8992f, -1064.192f, 26.9851f;
					break;
				
				case 10:
					return -669.6013f, -1198.664f, 9.6125f;
					break;
				
				case 11:
					return -1465.579f, -390.7494f, 37.5168f;
					break;
				
				case 12:
					return 797.7521f, -1793.008f, 28.3164f;
					break;
				
				case 13:
					return 806.319f, -2017.451f, 28.2215f;
					break;
			}
			break;
	}
	return func_110(iParam0);
}

Vector3 func_110(int iParam0)
{
	switch (iParam0)
	{
		case 2:
			return 2147.317f, 4795.208f, 40.08961f;
			break;
		
		case 9:
			return 1524.329f, -2108.269f, 75.7248f;
			break;
		
		case 10:
			return -1172.195f, -1577.427f, 3.38152f;
			break;
		
		case 1:
			return 898.3718f, -177.0764f, 72.68348f;
			break;
		
		case 4:
			return 1191.302f, 2672.064f, 36.73154f;
			break;
		
		case 3:
			return -1584.333f, 5193.487f, 2.95912f;
			break;
		
		case 0:
			return 408.3429f, -1623.836f, 28.29278f;
			break;
		
		case 8:
			return -1339.489f, -21.19435f, 50.34566f;
			break;
		
		case 5:
			return 336.207f, 172.4251f, 102.2055f;
			break;
		
		case 6:
			return 394.5495f, -703.3795f, 28.27281f;
			break;
		
		case 7:
			return -1413.184f, -206.0555f, 46.29474f;
			break;
		
		case 11:
			return -560.3809f, 274.5476f, 82.02014f;
			break;
		
		case 12:
			return 221.0845f, 340.7849f, 104.5883f;
			break;
		
		case 13:
			return -296.7154f, 6259.732f, 30.49339f;
			break;
		
		case 14:
			return -2201.402f, 4291f, 47.32429f;
			break;
	}
	return 10f, 10f, 10f;
}

int func_111()
{
	return Global_110568.f_20;
}

int func_112()
{
	return func_113(Global_110568.f_20, Global_110568.f_29);
}

int func_113(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 10:
			switch (iParam1)
			{
				case 0:
					return 0;
					break;
				
				case 1:
					return 1;
					break;
				
				case 2:
					return 2;
					break;
				
				case 3:
					return 3;
					break;
				
				case 4:
					return 4;
					break;
				
				case 5:
					return 5;
					break;
				
				case 6:
					return 6;
					break;
			}
			break;
		
		case 11:
		case 12:
			switch (iParam1)
			{
				case 0:
					return 9;
					break;
				
				case 1:
					return 10;
					break;
				
				case 2:
					return 11;
					break;
				
				case 3:
					return 12;
					break;
				
				case 4:
					return 13;
					break;
			}
			break;
		
		case 13:
		case 14:
			switch (iParam1)
			{
				case 0:
					return 8;
					break;
				
				case 1:
					return 7;
					break;
			}
			break;
	}
	return 0;
}

void func_114()
{
	unk_0x410A1E7AD7D5C774(joaat("benson"), false);
	unk_0x410A1E7AD7D5C774(joaat("pony2"), false);
	unk_0x08020BC2A66F5B71();
	if (iLocal_71)
	{
		if (!unk_0xA59F96B50B97E63C(iLocal_88, 0))
		{
			func_115(iLocal_88, 0, 145);
		}
		unk_0xEA1D26E78A0A9984(unk_0x460153A63B9477BC());
		func_100(&uLocal_94, 0, 0);
	}
	unk_0xD39E529EBE5DB04F();
}

int func_115(int iParam0, int iParam1, int iParam2)
{
	var uVar0;
	char* sVar1;
	
	if (iParam1 == 0)
	{
		sVar1 = unk_0x9ABE4851D274FD5D(iParam0, &uVar0);
		if (!unk_0x7BCC91F3C1CF24E8(sVar1))
		{
			if (unk_0x856D5567211886A2(sVar1) == unk_0x856D5567211886A2("vehicle_gen_controller"))
			{
				return 0;
			}
		}
	}
	func_116(iParam0, iParam2);
	return 1;
}

void func_116(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!func_122(iParam0))
	{
		return;
	}
	if ((iParam1 != 0 && iParam1 != 1) && iParam1 != 2)
	{
		iVar0 = unk_0x10D3F7E169A49C44(iParam0, -1, 0);
		if (!unk_0xAE06B9E39EBDE049(iVar0))
		{
			iVar0 = unk_0x37022B7FE1589189(iParam0, -1);
		}
		if (unk_0xAE06B9E39EBDE049(iVar0) && !unk_0x5AEB5DDFFAD43CA5(iVar0))
		{
			if (unk_0x36FE6D3220816ADA(iVar0) == joaat("player_zero"))
			{
				iParam1 = 0;
			}
			else if (unk_0x36FE6D3220816ADA(iVar0) == joaat("player_one"))
			{
				iParam1 = 1;
			}
			else if (unk_0x36FE6D3220816ADA(iVar0) == joaat("player_two"))
			{
				iParam1 = 2;
			}
		}
		if ((iParam1 != 0 && iParam1 != 1) && iParam1 != 2)
		{
			iParam1 = Global_111858.f_2359.f_539.f_4321;
		}
	}
	iVar1 = 0;
	while (iVar1 < 3)
	{
		iVar2 = 0;
		while (iVar2 < 2)
		{
			if (unk_0x36FE6D3220816ADA(iParam0) == Global_111858.f_32745.f_5038[iVar1 /*157*/][iVar2 /*78*/].f_66)
			{
				if (!unk_0x7BCC91F3C1CF24E8(&(Global_111858.f_32745.f_5038[iVar1 /*157*/][iVar2 /*78*/].f_1)))
				{
					if (unk_0xF005CCA4263DF67F(unk_0x6984AA4EC2FF9734(iParam0), &(Global_111858.f_32745.f_5038[iVar1 /*157*/][iVar2 /*78*/].f_1)))
					{
						Global_111858.f_32745.f_5038[iVar1 /*157*/][iVar2 /*78*/].f_66 = 0;
						Global_111858.f_32745.f_5592[iVar1] = iVar2;
					}
				}
			}
			iVar2++;
		}
		iVar1++;
	}
	iVar1 = 0;
	while (iVar1 < 3)
	{
		if (unk_0x36FE6D3220816ADA(iParam0) == Global_111858.f_32745.f_5600[iVar1 /*78*/].f_66)
		{
			if (!unk_0x7BCC91F3C1CF24E8(&(Global_111858.f_32745.f_5600[iVar1 /*78*/].f_1)))
			{
				if (unk_0xF005CCA4263DF67F(unk_0x6984AA4EC2FF9734(iParam0), &(Global_111858.f_32745.f_5600[iVar1 /*78*/].f_1)))
				{
					Global_111858.f_32745.f_5600[iVar1 /*78*/].f_66 = 0;
				}
			}
		}
		iVar1++;
	}
	Global_111858.f_32745.f_5590 = iParam1;
	Global_76559 = iParam0;
	Global_111858.f_32745.f_5588 = 1;
	func_117(iParam0, &(Global_111858.f_32745.f_5510));
}

void func_117(int iParam0, var uParam1)
{
	int iVar0;
	
	if (unk_0x80FF6C016CDB0FAF(iParam0, 0))
	{
		func_121(uParam1);
		uParam1->f_66 = unk_0x36FE6D3220816ADA(iParam0);
		StringCopy(&(uParam1->f_1), unk_0x6984AA4EC2FF9734(iParam0), 16);
		*uParam1 = unk_0x999BFF5D72C9701A(iParam0);
		unk_0x255499E0D27A1780(iParam0, &(uParam1->f_5), &(uParam1->f_6));
		unk_0x7E545979AF9FCA10(iParam0, &(uParam1->f_7), &(uParam1->f_8));
		unk_0xA681FAA57125DB66(iParam0, &(uParam1->f_62), &(uParam1->f_63), &(uParam1->f_64));
		uParam1->f_65 = unk_0xA3DDFC0A00C22ED3(iParam0);
		uParam1->f_67 = unk_0x16628A9DDE9875CC(iParam0);
		uParam1->f_69 = unk_0x74BE6BA308A7B62F(iParam0);
		uParam1->f_70 = unk_0xB9FAC5FDE6272EE5(iParam0);
		unk_0x7984C9503C733252(iParam0, &(uParam1->f_71), &(uParam1->f_72), &(uParam1->f_73));
		unk_0xEC53ED0C29BA8483(iParam0, &(uParam1->f_74), &(uParam1->f_75), &(uParam1->f_76));
		if (unk_0x8CC64DFDB61877EA(iParam0, 2))
		{
			unk_0xBE20AB8238688965(&(uParam1->f_77), 28);
		}
		if (unk_0x8CC64DFDB61877EA(iParam0, 3))
		{
			unk_0xBE20AB8238688965(&(uParam1->f_77), 29);
		}
		if (unk_0x8CC64DFDB61877EA(iParam0, 0))
		{
			unk_0xBE20AB8238688965(&(uParam1->f_77), 30);
		}
		if (unk_0x8CC64DFDB61877EA(iParam0, 1))
		{
			unk_0xBE20AB8238688965(&(uParam1->f_77), 31);
		}
		if (uParam1->f_65 == -1 && !func_120(uParam1->f_66))
		{
			uParam1->f_65 = 0;
		}
		if (unk_0xD501F7099396F726(iParam0, 0))
		{
			uParam1->f_68 = unk_0x4B3B9AC15296615C(iParam0);
		}
		if (unk_0xF9C3E2B9AA9E2294(uParam1->f_66))
		{
			if (unk_0xCA87E17B66918D00(iParam0))
			{
				switch (unk_0x38EAEB8EE9D858CF(iParam0))
				{
					case 3:
					case 0:
						unk_0xD2459066EA58CE43(&(uParam1->f_77), 23);
						unk_0xBE20AB8238688965(&(uParam1->f_77), 22);
						break;
					
					case 4:
					case 1:
						unk_0xD2459066EA58CE43(&(uParam1->f_77), 23);
						unk_0xD2459066EA58CE43(&(uParam1->f_77), 22);
						break;
					
					case 5:
						unk_0xBE20AB8238688965(&(uParam1->f_77), 23);
						break;
				}
			}
			else
			{
				unk_0xBE20AB8238688965(&(uParam1->f_77), 23);
			}
		}
		if (!unk_0x5EF4A66EF7630445(iParam0))
		{
			unk_0xBE20AB8238688965(&(uParam1->f_77), 9);
		}
		if (unk_0x93846124A64E7DEC(iParam0))
		{
			unk_0xBE20AB8238688965(&(uParam1->f_77), 10);
		}
		if (unk_0xB41668EFA7045047(iParam0))
		{
			unk_0xBE20AB8238688965(&(uParam1->f_77), 13);
			unk_0x2CB46B57EB6A7F5D(iParam0, &(uParam1->f_71), &(uParam1->f_72), &(uParam1->f_73));
		}
		if (unk_0x3FE1C23F43A4E29E(iParam0))
		{
			unk_0xBE20AB8238688965(&(uParam1->f_77), 12);
		}
		func_119(&iParam0, &(uParam1->f_9), &(uParam1->f_59));
		iVar0 = 0;
		while (iVar0 <= 11)
		{
			if (unk_0xAACD889100BCBCFA(iParam0, iVar0 + 1))
			{
				unk_0xBE20AB8238688965(&(uParam1->f_77), func_118(iVar0 + 1));
			}
			iVar0++;
		}
		if (unk_0x62B133F8490E0B2E(iParam0, 0))
		{
			unk_0xBE20AB8238688965(&(uParam1->f_77), 11);
		}
		else
		{
			unk_0xD2459066EA58CE43(&(uParam1->f_77), 11);
		}
		if (unk_0x871819940BD2E434(iParam0, "IgnoredByQuickSave") && unk_0x84E72BB19D4FDE12(iParam0, "IgnoredByQuickSave"))
		{
			unk_0xBE20AB8238688965(&(uParam1->f_77), 27);
		}
		else
		{
			unk_0xD2459066EA58CE43(&(uParam1->f_77), 27);
		}
	}
}

int func_118(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return 0;
			break;
		
		case 2:
			return 1;
			break;
		
		case 3:
			return 2;
			break;
		
		case 4:
			return 3;
			break;
		
		case 5:
			return 4;
			break;
		
		case 6:
			return 5;
			break;
		
		case 7:
			return 6;
			break;
		
		case 8:
			return 7;
			break;
		
		case 9:
			return 8;
			break;
		
		case 10:
			return 24;
			break;
		
		case 11:
			return 25;
			break;
		
		case 12:
			return 26;
			break;
	}
	return 0;
}

int func_119(int iParam0, var uParam1, var uParam2)
{
	int iVar0;
	int iVar1;
	
	if (!unk_0x80FF6C016CDB0FAF(*iParam0, 0))
	{
		return 0;
	}
	if (unk_0xC71761E30ACCF098(*iParam0) == 0)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		iVar1 = iVar0;
		if ((((iVar1 == 17 || iVar1 == 18) || iVar1 == 19) || iVar1 == 20) || iVar1 == 21)
		{
			(*uParam1)[iVar0] = 0;
			if (unk_0xC59714C8D4D5117D(*iParam0, iVar1))
			{
				(*uParam1)[iVar0] = 1;
			}
		}
		else if (iVar1 == 22)
		{
			if (unk_0xC59714C8D4D5117D(*iParam0, iVar1))
			{
				switch (unk_0x0523E2B914021FFF(*iParam0))
				{
					case 255:
						(*uParam1)[iVar0] = 1;
						break;
					
					case 0:
						(*uParam1)[iVar0] = 2;
						break;
					
					case 1:
						(*uParam1)[iVar0] = 3;
						break;
					
					case 2:
						(*uParam1)[iVar0] = 4;
						break;
					
					case 3:
						(*uParam1)[iVar0] = 5;
						break;
					
					case 4:
						(*uParam1)[iVar0] = 6;
						break;
					
					case 5:
						(*uParam1)[iVar0] = 7;
						break;
					
					case 6:
						(*uParam1)[iVar0] = 8;
						break;
					
					case 7:
						(*uParam1)[iVar0] = 9;
						break;
					
					case 8:
						(*uParam1)[iVar0] = 10;
						break;
					
					case 9:
						(*uParam1)[iVar0] = 11;
						break;
					
					case 10:
						(*uParam1)[iVar0] = 12;
						break;
					
					case 11:
						(*uParam1)[iVar0] = 13;
						break;
					
					case 12:
						(*uParam1)[iVar0] = 14;
						break;
					
					case 13:
						(*uParam1)[iVar0] = 15;
						break;
				}
			}
			else
			{
				(*uParam1)[iVar0] = 0;
			}
		}
		else
		{
			(*uParam1)[iVar0] = unk_0x7F8B14CBFB9813E5(*iParam0, iVar0) + 1;
			if (iVar0 == 23)
			{
				(*uParam2)[0] = unk_0x9CE7070F0EBF111F(*iParam0, iVar0);
			}
			else if (iVar0 == 24)
			{
				(*uParam2)[1] = unk_0x9CE7070F0EBF111F(*iParam0, iVar0);
			}
		}
		iVar0++;
	}
	return 1;
}

int func_120(int iParam0)
{
	switch (iParam0)
	{
		case joaat("granger"):
		case joaat("visione"):
			return 1;
		
		default:
	}
	return 0;
}

void func_121(var uParam0)
{
	int iVar0;
	
	uParam0->f_66 = 0;
	uParam0->f_77 = 0;
	uParam0->f_65 = 0;
	uParam0->f_62 = 0;
	uParam0->f_63 = 0;
	uParam0->f_64 = 0;
	uParam0->f_74 = 0;
	uParam0->f_75 = 0;
	uParam0->f_76 = 0;
	*uParam0 = 0;
	StringCopy(&(uParam0->f_1), "", 16);
	uParam0->f_5 = 0;
	uParam0->f_6 = 0;
	uParam0->f_7 = 0;
	uParam0->f_8 = 0;
	iVar0 = 0;
	while (iVar0 < 49)
	{
		uParam0->f_9[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 2)
	{
		uParam0->f_59[iVar0] = 0;
		iVar0++;
	}
	uParam0->f_67 = 0;
	uParam0->f_68 = 0;
	uParam0->f_69 = 0;
	uParam0->f_70 = 1;
	uParam0->f_71 = 0;
	uParam0->f_72 = 0;
	uParam0->f_73 = 0;
}

int func_122(int iParam0)
{
	if ((((((((((!unk_0xAE06B9E39EBDE049(iParam0) || !unk_0x80FF6C016CDB0FAF(iParam0, 0)) || func_138(iParam0, 0, 0)) || func_138(iParam0, 1, 0)) || func_138(iParam0, 2, 0)) || func_137(iParam0) != 145) || func_136(iParam0)) || func_135(iParam0)) || func_134(iParam0)) || func_133(iParam0)) || !func_123(unk_0x36FE6D3220816ADA(iParam0)))
	{
		if (func_135(iParam0))
		{
		}
		if (func_135(iParam0))
		{
		}
		if (func_138(iParam0, 0, 0))
		{
		}
		if (func_138(iParam0, 1, 0))
		{
		}
		if (func_138(iParam0, 2, 0))
		{
		}
		if (func_137(iParam0) != 145)
		{
		}
		return 0;
	}
	return 1;
}

int func_123(int iParam0)
{
	if (iParam0 == 0)
	{
		return 0;
	}
	if (!func_124(iParam0, 0))
	{
		return 0;
	}
	if (((unk_0x5874D60325749F00(iParam0) || unk_0xF9C3E2B9AA9E2294(iParam0)) || unk_0x442D6659150AF4B3(iParam0)) || unk_0xCA6AF782C906AC86(iParam0))
	{
		return 0;
	}
	switch (iParam0)
	{
		case joaat("bus"):
		case joaat("stretch"):
		case joaat("barracks"):
		case joaat("armytanker"):
		case joaat("rhino"):
		case joaat("armytrailer"):
		case joaat("barracks2"):
		case joaat("flatbed"):
		case joaat("ripley"):
		case joaat("towtruck"):
		case joaat("towtruck2"):
		case joaat("airbus"):
		case joaat("coach"):
		case joaat("rentalbus"):
		case joaat("tourbus"):
		case joaat("firetruk"):
		case joaat("pbus"):
		case joaat("trash"):
		case joaat("benson"):
		case joaat("boattrailer"):
		case joaat("biff"):
		case joaat("hauler"):
		case joaat("docktrailer"):
		case joaat("phantom"):
		case joaat("pounder"):
		case joaat("tractor2"):
		case joaat("bulldozer"):
		case joaat("handler"):
		case joaat("tiptruck"):
		case joaat("cutter"):
		case joaat("dump"):
		case joaat("mixer"):
		case joaat("mixer2"):
		case joaat("rubble"):
		case joaat("scrap"):
		case joaat("tiptruck2"):
		case joaat("camper"):
		case joaat("taco"):
		case joaat("boxville"):
		case joaat("boxville2"):
		case joaat("boxville3"):
		case joaat("journey"):
		case joaat("mule"):
		case joaat("mule2"):
		case joaat("police"):
		case joaat("police2"):
		case joaat("police3"):
		case joaat("police4"):
		case joaat("policeb"):
		case joaat("policeold1"):
		case joaat("policeold2"):
		case joaat("policet"):
		case joaat("taxi"):
		case joaat("submersible"):
		case joaat("submersible2"):
		case joaat("monster"):
			return 0;
			break;
	}
	return 1;
}

int func_124(int iParam0, bool bParam1)
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
		if (!func_132())
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
		if ((((!func_131() && !func_130()) && !func_129()) && !func_128()) && !func_132())
		{
			return 0;
		}
	}
	if ((iParam0 == joaat("hotknife") || iParam0 == joaat("carbonrs")) || iParam0 == joaat("khamelion"))
	{
		if ((unk_0xC6C08C02733D02C8() || unk_0xF8EDFF98A9C94C74()) || unk_0xDCA0815D900F27F8())
		{
		}
		else if (!func_129())
		{
			return 0;
		}
	}
	if (bParam1)
	{
		if (!func_127(iParam0))
		{
			return 0;
		}
	}
	if (!func_125(iParam0))
	{
		return 0;
	}
	return 1;
}

int func_125(int iParam0)
{
	int iVar0;
	var uVar1;
	char cVar2[64];
	
	if (!func_126())
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

int func_126()
{
	if (unk_0xF8EDFF98A9C94C74())
	{
		return unk_0xC5AA3415F982DC6C();
	}
	return 0;
}

int func_127(int iParam0)
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

int func_128()
{
	return 0;
}

int func_129()
{
	return 1;
}

int func_130()
{
	return 1;
}

int func_131()
{
	if (unk_0x95C5B896CB42B20E(-1226939934))
	{
		return 1;
	}
	return 0;
}

int func_132()
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

int func_133(int iParam0)
{
	int iVar0;
	char* sVar1;
	
	iVar0 = unk_0x36FE6D3220816ADA(iParam0);
	sVar1 = unk_0x6984AA4EC2FF9734(iParam0);
	if (iVar0 == joaat("speedo") && unk_0xF005CCA4263DF67F(sVar1, "LAMAR G "))
	{
		return 1;
	}
	if (!func_124(iVar0, 0))
	{
		return 1;
	}
	return 0;
}

int func_134(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (unk_0xAE06B9E39EBDE049(Global_96316[iVar0]))
		{
			if (Global_96316[iVar0] == iParam0)
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_135(int iParam0)
{
	int iVar0;
	
	if (unk_0xAE06B9E39EBDE049(iParam0) && unk_0x80FF6C016CDB0FAF(iParam0, 0))
	{
		iVar0 = 0;
		while (iVar0 < 9)
		{
			if (unk_0xAE06B9E39EBDE049(Global_96286[iVar0]) && unk_0x80FF6C016CDB0FAF(Global_96286[iVar0], 0))
			{
				if (Global_96286[iVar0] == iParam0 && unk_0x36FE6D3220816ADA(Global_96286[iVar0]) == unk_0x36FE6D3220816ADA(iParam0))
				{
					return 1;
				}
			}
			iVar0++;
		}
	}
	return 0;
}

int func_136(int iParam0)
{
	int iVar0;
	
	if (unk_0xAE06B9E39EBDE049(Global_75654.f_484[24]))
	{
		if (iParam0 == Global_75654.f_484[24])
		{
			return 0;
		}
	}
	iVar0 = 0;
	while (iVar0 < 68)
	{
		if (unk_0xAE06B9E39EBDE049(Global_75654.f_484[iVar0]))
		{
			if ((((((((((((iVar0 != 24 && iVar0 != 21) && iVar0 != 22) && iVar0 != 23) && iVar0 != 27) && iVar0 != 30) && iVar0 != 33) && iVar0 != 28) && iVar0 != 31) && iVar0 != 34) && iVar0 != 26) && iVar0 != 29) && iVar0 != 32)
			{
				if (iParam0 == Global_75654.f_484[iVar0])
				{
					return 1;
				}
			}
		}
		iVar0++;
	}
	return 0;
}

int func_137(int iParam0)
{
	int iVar0;
	
	if (!unk_0xAE06B9E39EBDE049(iParam0))
	{
		return 145;
	}
	if (!unk_0x80FF6C016CDB0FAF(iParam0, 0))
	{
		return 145;
	}
	iVar0 = 0;
	while (iVar0 < 9)
	{
		if (unk_0xAE06B9E39EBDE049(Global_96286[iVar0]))
		{
			if (Global_96286[iVar0] == iParam0)
			{
				return Global_96296[iVar0];
			}
		}
		iVar0++;
	}
	return 145;
}

int func_138(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	char* sVar1;
	int iVar2;
	
	if (!unk_0xAE06B9E39EBDE049(iParam0) || !unk_0x80FF6C016CDB0FAF(iParam0, 0))
	{
		return 0;
	}
	iVar0 = 0;
	while (func_139(iParam1, iVar0, &sVar1, &iVar2))
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

int func_139(int iParam0, int iParam1, char* sParam2, var uParam3)
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

void func_140(int iParam0)
{
	Global_110568.f_22 = iParam0;
}

