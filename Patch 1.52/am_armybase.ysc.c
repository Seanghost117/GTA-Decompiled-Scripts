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
	var uLocal_61 = 0;
	var uLocal_62 = 0;
	var uLocal_63 = 0;
	float fLocal_64 = 0f;
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
	var uLocal_79 = 0;
	var uLocal_80 = 0;
	var uLocal_81 = 0;
	var uLocal_82 = 0;
	var uLocal_83 = 0;
	struct<3> Local_84 = { 0, 0, 0 } ;
	struct<4> Local_85 = { 2, 0, 0, 3 } ;
	var uLocal_86 = 0;
	var uLocal_87 = 0;
	var uLocal_88 = 0;
	var uLocal_89 = 0;
	var uLocal_90 = 0;
	var uLocal_91 = 0;
	var uLocal_92 = 0;
	var uLocal_93 = 0;
	var uLocal_94 = 0;
	var uLocal_95 = 0;
	var uLocal_96 = 0;
	var uLocal_97 = 0;
	var uLocal_98 = 0;
	var uLocal_99 = 0;
	var uLocal_100 = 0;
	var uLocal_101 = 0;
	var uLocal_102 = 0;
	var uLocal_103 = 2;
	var uLocal_104 = 0;
	var uLocal_105 = 0;
	var uLocal_106 = 2;
	var uLocal_107 = 0;
	var uLocal_108 = 0;
	struct<8> Local_109[32];
	struct<184> Local_110 = { 0, 0, 0, 0, 0, 0, 0, 16, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_111 = 0;
	bool bLocal_112 = 0;
	bool bLocal_113 = 0;
	bool bLocal_114 = 0;
	int iLocal_115 = 0;
	int iLocal_116 = 0;
	int iLocal_117 = 0;
	int iLocal_118 = 0;
	int iLocal_119 = 0;
	var uLocal_120 = 0;
	var uLocal_121 = 0;
	var uLocal_122 = 0;
	var uLocal_123 = 0;
	struct<21> Local_124 = { 0, -1, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, -1, -1 } ;
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
	fLocal_64 = ((0.05f + 0.275f) - 0.01f);
	Local_84 = { -2357.12f, 3250.68f, 106.04f };
	iLocal_119 = -1;
	if (unk_0x25DDB354A40FFCDB())
	{
		func_187(ScriptParam_124);
	}
	else
	{
		func_184();
	}
	while (true)
	{
		func_183();
		func_175();
		if (func_164() || unk_0xD0E70037A973A810())
		{
			func_184();
		}
		if (unk_0x25DDB354A40FFCDB())
		{
			if ((func_160() && !Global_262145.f_21480) && !unk_0xFC559366953F62B3())
			{
				func_151();
			}
			if (func_40())
			{
				func_184();
			}
			if (func_37(unk_0x460153A63B9477BC()))
			{
				if (!unk_0xCE990E643CD9D0E5(Local_110.f_182, 3))
				{
					unk_0xBE20AB8238688965(&(Local_110.f_182), 3);
				}
			}
			if ((((((((((!Global_1573985 && !func_36(2)) && !func_33(unk_0x460153A63B9477BC(), 0)) && !unk_0x9CC4D06F5338CA6B()) && unk_0x4DC4117F94CD5B84(unk_0x460153A63B9477BC())) && !func_31(unk_0x460153A63B9477BC())) && !func_29(func_30(unk_0x460153A63B9477BC()))) && !func_27(unk_0x460153A63B9477BC(), 146)) && !func_23(unk_0x460153A63B9477BC())) && !func_22(unk_0x460153A63B9477BC())) && !func_21())
			{
				if (func_20(unk_0x3E4D3CCC220BDFB1(unk_0x9B0761B4C3EB8BC7(), 0), 3, 1000, 0) || func_19(unk_0x3E4D3CCC220BDFB1(unk_0x9B0761B4C3EB8BC7(), 0), 1000))
				{
					if (!unk_0xCE990E643CD9D0E5(Global_2540384.f_4619, 0))
					{
						if (!unk_0xA59F96B50B97E63C(unk_0x9B0761B4C3EB8BC7(), 0))
						{
							if (!func_160())
							{
								func_18();
								if (unk_0xAABDC18B9F6EC79D(unk_0x9B0761B4C3EB8BC7()) || unk_0x94BF5C4EB0D40E9E(unk_0x9B0761B4C3EB8BC7()))
								{
									if (func_20(unk_0x3E4D3CCC220BDFB1(unk_0x9B0761B4C3EB8BC7(), 0), 3, 0, 0) || func_19(unk_0x3E4D3CCC220BDFB1(unk_0x9B0761B4C3EB8BC7(), 0), 0))
									{
										if (unk_0x1A3D0DF92BF7D8C4(unk_0x460153A63B9477BC()) < 4)
										{
											unk_0x3A968BA0657CAB7F(unk_0x460153A63B9477BC(), 36, (unk_0xC84BD8DB346E6619(4) - unk_0xC84BD8DB346E6619(unk_0x1A3D0DF92BF7D8C4(unk_0x460153A63B9477BC()))));
										}
										else
										{
											unk_0xF0563EC41BDCC07F(unk_0x460153A63B9477BC());
										}
									}
									else if (!func_17(&(Local_110.f_3)))
									{
										func_14(&(Local_110.f_3));
									}
									else if (func_11(&(Local_110.f_3)) > 20f || Local_110.f_177)
									{
										if (unk_0x1A3D0DF92BF7D8C4(unk_0x460153A63B9477BC()) < 4)
										{
											unk_0x3A968BA0657CAB7F(unk_0x460153A63B9477BC(), 36, (unk_0xC84BD8DB346E6619(4) - unk_0xC84BD8DB346E6619(unk_0x1A3D0DF92BF7D8C4(unk_0x460153A63B9477BC()))));
										}
										else
										{
											unk_0xF0563EC41BDCC07F(unk_0x460153A63B9477BC());
										}
									}
								}
								else if (unk_0x1A3D0DF92BF7D8C4(unk_0x460153A63B9477BC()) < 4)
								{
									unk_0x3A968BA0657CAB7F(unk_0x460153A63B9477BC(), 36, (unk_0xC84BD8DB346E6619(4) - unk_0xC84BD8DB346E6619(unk_0x1A3D0DF92BF7D8C4(unk_0x460153A63B9477BC()))));
								}
								else
								{
									unk_0xF0563EC41BDCC07F(unk_0x460153A63B9477BC());
								}
							}
							else
							{
								if (Global_2540384.f_6635)
								{
									bLocal_112 = false;
									Global_2540384.f_6635 = 0;
								}
								if (unk_0x1A3D0DF92BF7D8C4(unk_0x460153A63B9477BC()) == 0 && !iLocal_116)
								{
									iLocal_116 = 1;
								}
								if (Global_262145.f_21469 && !func_9(unk_0x460153A63B9477BC()))
								{
									if ((!bLocal_112 && unk_0x1A3D0DF92BF7D8C4(unk_0x460153A63B9477BC()) != 0) && iLocal_116)
									{
										unk_0x601B713E8CE5673A(unk_0x460153A63B9477BC());
										unk_0x53797676AD34A9AA(0);
										iLocal_115 = 1;
									}
									if (func_2() && !bLocal_112)
									{
										bLocal_112 = true;
										unk_0x53797676AD34A9AA(5);
									}
								}
								if (func_2() && !bLocal_112)
								{
									bLocal_112 = true;
								}
								if (bLocal_112)
								{
									if (bLocal_113)
									{
										if (unk_0x1A3D0DF92BF7D8C4(unk_0x460153A63B9477BC()) < 2)
										{
											unk_0x3A968BA0657CAB7F(unk_0x460153A63B9477BC(), 36, (unk_0xC84BD8DB346E6619(2) - unk_0xC84BD8DB346E6619(unk_0x1A3D0DF92BF7D8C4(unk_0x460153A63B9477BC()))));
										}
										else
										{
											unk_0xF0563EC41BDCC07F(unk_0x460153A63B9477BC());
										}
									}
									else if (bLocal_114)
									{
										if (unk_0x1A3D0DF92BF7D8C4(unk_0x460153A63B9477BC()) < 3)
										{
											unk_0x3A968BA0657CAB7F(unk_0x460153A63B9477BC(), 36, (unk_0xC84BD8DB346E6619(3) - unk_0xC84BD8DB346E6619(unk_0x1A3D0DF92BF7D8C4(unk_0x460153A63B9477BC()))));
										}
										else
										{
											unk_0xF0563EC41BDCC07F(unk_0x460153A63B9477BC());
										}
									}
									else if (unk_0x1A3D0DF92BF7D8C4(unk_0x460153A63B9477BC()) < Global_262145.f_21406)
									{
										unk_0x3A968BA0657CAB7F(unk_0x460153A63B9477BC(), 36, (unk_0xC84BD8DB346E6619(Global_262145.f_21406) - unk_0xC84BD8DB346E6619(unk_0x1A3D0DF92BF7D8C4(unk_0x460153A63B9477BC()))));
									}
									else
									{
										unk_0xF0563EC41BDCC07F(unk_0x460153A63B9477BC());
									}
								}
							}
						}
						else
						{
							if (func_17(&(Local_110.f_3)))
							{
								func_1(&(Local_110.f_3));
							}
							if (Local_110.f_177)
							{
								Local_110.f_177 = 0;
							}
							func_18();
						}
					}
					else
					{
						if (!Local_110.f_177)
						{
							Local_110.f_177 = 1;
						}
						func_18();
					}
				}
				else
				{
					if (Local_110.f_177)
					{
						Local_110.f_177 = 0;
					}
					func_18();
				}
			}
			else
			{
				func_18();
			}
		}
		else
		{
			func_184();
		}
	}
}

void func_1(var uParam0)
{
	uParam0->f_1 = 0f;
	uParam0->f_2 = 0f;
	*uParam0 = 0;
}

int func_2()
{
	int iVar0;
	
	if (((func_20(unk_0x3E4D3CCC220BDFB1(unk_0x9B0761B4C3EB8BC7(), 0), 3, 1000, 0) || func_19(unk_0x3E4D3CCC220BDFB1(unk_0x9B0761B4C3EB8BC7(), 0), 1000)) && !func_8()) && !func_22(unk_0x460153A63B9477BC()))
	{
		if (Global_262145.f_21400)
		{
			return 0;
		}
		if (((unk_0x1037B9D45CE6B788(unk_0x9B0761B4C3EB8BC7(), -2346.975f, 3259.757f, 31.81074f, -2349.507f, 3261.232f, 33.81074f, 9.5625f, 0, 1, 0) || unk_0x1037B9D45CE6B788(unk_0x9B0761B4C3EB8BC7(), -2054.865f, 3240.977f, 30.51001f, -2056.552f, 3237.846f, 32.50156f, 4.0625f, 0, 1, 0)) || unk_0x1037B9D45CE6B788(unk_0x9B0761B4C3EB8BC7(), -1792.908f, 3091.104f, 31.81257f, -1812.707f, 3102.736f, 39.46682f, 18.187f, 0, 1, 0)) || func_7(unk_0x460153A63B9477BC()))
		{
			bLocal_113 = false;
			bLocal_114 = false;
			return 1;
		}
		if (Global_262145.f_21407)
		{
			if (unk_0x47DBF174A0CB9D55(unk_0x9B0761B4C3EB8BC7(), 0))
			{
				iVar0 = unk_0xA5D5B1042E8F47BD(unk_0x9B0761B4C3EB8BC7(), 0);
				if (unk_0x93846124A64E7DEC(iVar0))
				{
					if (func_6(iVar0))
					{
						if ((!func_5(iVar0, 1) && !func_4(iVar0)) && !func_3(iVar0))
						{
							bLocal_113 = true;
							bLocal_114 = false;
							return 1;
						}
					}
				}
			}
		}
		else if (unk_0x47DBF174A0CB9D55(unk_0x9B0761B4C3EB8BC7(), 0))
		{
			if (unk_0x93846124A64E7DEC(unk_0xA5D5B1042E8F47BD(unk_0x9B0761B4C3EB8BC7(), 0)))
			{
				if ((!func_5(unk_0xA5D5B1042E8F47BD(unk_0x9B0761B4C3EB8BC7(), 0), 1) && !func_4(unk_0xA5D5B1042E8F47BD(unk_0x9B0761B4C3EB8BC7(), 0))) && !func_3(unk_0xA5D5B1042E8F47BD(unk_0x9B0761B4C3EB8BC7(), 0)))
				{
					bLocal_113 = true;
					bLocal_114 = false;
					return 1;
				}
			}
		}
		if (Global_2540384.f_6633 || Global_2540384.f_6634)
		{
			if (Global_2540384.f_6634)
			{
				bLocal_113 = false;
				bLocal_114 = true;
			}
			else
			{
				bLocal_113 = true;
				bLocal_114 = false;
			}
			Global_2540384.f_6633 = 0;
			Global_2540384.f_6634 = 0;
			return 1;
		}
	}
	return 0;
}

int func_3(int iParam0)
{
	int iVar0;
	
	if (unk_0x80FF6C016CDB0FAF(iParam0, 0))
	{
		if (unk_0x6844807B17DC2DFC("MPBitset", 3) && unk_0x871819940BD2E434(iParam0, "MPBitset"))
		{
			iVar0 = unk_0x8C0800114C2864BE(iParam0, "MPBitset");
			if (unk_0xCE990E643CD9D0E5(iVar0, 17))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_4(int iParam0)
{
	if ((unk_0x6844807B17DC2DFC("CreatedByPegasus", 2) && unk_0x871819940BD2E434(iParam0, "CreatedByPegasus")) && unk_0x84E72BB19D4FDE12(iParam0, "CreatedByPegasus"))
	{
		return 1;
	}
	return 0;
}

int func_5(int iParam0, bool bParam1)
{
	if (Global_76833)
	{
		if (unk_0xAE06B9E39EBDE049(iParam0) && (!bParam1 || unk_0x80FF6C016CDB0FAF(iParam0, 0)))
		{
			if (unk_0x871819940BD2E434(iParam0, "Player_Vehicle"))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_6(int iParam0)
{
	int iVar0;
	
	iVar0 = unk_0x36FE6D3220816ADA(iParam0);
	switch (iVar0)
	{
		case joaat("barracks"):
		case joaat("barracks2"):
		case joaat("barracks3"):
		case joaat("besra"):
		case joaat("buzzard"):
		case joaat("buzzard2"):
		case joaat("cargobob"):
		case joaat("crusader"):
		case joaat("firetruk"):
		case joaat("lazer"):
		case joaat("rhino"):
		case joaat("titan"):
			return 1;
		
		default:
	}
	return 0;
}

int func_7(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = unk_0x518D695E2DBA9DB8(unk_0x1FA7B77001D60F9D(iParam0));
	iVar1 = unk_0xC519B5898C2310B1(-2346.975f, 3259.757f, 31.81074f, "v_tower");
	if (unk_0x0B1B45E748AD48BA(iVar0) && unk_0x0B1B45E748AD48BA(iVar1))
	{
		if ((iVar0 == iVar1 && !unk_0x1037B9D45CE6B788(unk_0x1FA7B77001D60F9D(iParam0), -2345.4f, 3270.1f, 31.81f, -2347.9f, 3265.8f, 34.811f, 8.25f, 0, 1, 0)) && !unk_0x1037B9D45CE6B788(unk_0x1FA7B77001D60F9D(iParam0), -2349.3f, 3266.7f, 31.81f, -2350f, 3265.5f, 34.811f, 5.15f, 0, 1, 0))
		{
			return 1;
		}
	}
	return 0;
}

bool func_8()
{
	return Global_4456448 == 3;
}

int func_9(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return func_10(iParam0, 9);
	}
	return 0;
}

bool func_10(int iParam0, int iParam1)
{
	return unk_0xCE990E643CD9D0E5(Global_1630317[iParam0 /*595*/].f_11.f_4, iParam1);
}

float func_11(int iParam0)
{
	if (func_17(iParam0))
	{
		if (func_13(iParam0))
		{
			return iParam0->f_2;
		}
		else
		{
			return (func_12(unk_0xCE990E643CD9D0E5(*iParam0, 4)) - iParam0->f_1);
		}
	}
	return iParam0->f_1;
}

float func_12(bool bParam0)
{
	float fVar0;
	float fVar1;
	int iVar2;
	float fVar3;
	float fVar4;
	
	if (bParam0)
	{
		fVar0 = to_float(unk_0x578C4EF320340AF7());
		fVar1 = (fVar0 / 1000f);
		return fVar1;
	}
	if (unk_0x25DDB354A40FFCDB())
	{
		iVar2 = unk_0x6CAAB7E78B5D978A();
		fVar3 = to_float(iVar2);
		fVar4 = (fVar3 / 1000f);
		return fVar4;
	}
	return (to_float(unk_0x578C4EF320340AF7()) / 1000f);
}

bool func_13(var uParam0)
{
	return unk_0xCE990E643CD9D0E5(*uParam0, 2);
}

void func_14(int iParam0)
{
	if (!func_17(iParam0))
	{
		func_15(iParam0);
	}
}

void func_15(int iParam0)
{
	func_16(iParam0, 0f);
}

void func_16(int iParam0, float fParam1)
{
	iParam0->f_1 = (func_12(unk_0xCE990E643CD9D0E5(*iParam0, 4)) - fParam1);
	unk_0xBE20AB8238688965(iParam0, 1);
	unk_0xD2459066EA58CE43(iParam0, 2);
	iParam0->f_2 = 0f;
}

bool func_17(var uParam0)
{
	return unk_0xCE990E643CD9D0E5(*uParam0, 1);
}

void func_18()
{
	if (iLocal_115)
	{
		unk_0x53797676AD34A9AA(5);
	}
	Global_2540384.f_6633 = 0;
	Global_2540384.f_6634 = 0;
	iLocal_115 = 0;
	bLocal_112 = false;
	bLocal_113 = false;
	iLocal_116 = 0;
}

int func_19(struct<3> Param0, int iParam1)
{
	struct<3> Var0[15];
	struct<3> Var1[15];
	float fVar2[15];
	int iVar3;
	int iVar4;
	int iVar5;
	
	iVar5 = 0;
	Var0[0 /*3*/] = { -1877.436f, 2783.151f, 31.80618f };
	Var1[0 /*3*/] = { -1797.873f, 2924.37f, (307.1106f + IntToFloat(iParam1)) };
	fVar2[0] = 88f;
	Var0[1 /*3*/] = { -1761.116f, 2834.651f, 31.80622f };
	Var1[1 /*3*/] = { -1720.887f, 2906.419f, (281.8062f + IntToFloat(iParam1)) };
	fVar2[1] = 88f;
	Var0[2 /*3*/] = { -1761.493f, 2817.68f, 32.37125f };
	Var1[2 /*3*/] = { -1769.704f, 2913.734f, (281.8066f + IntToFloat(iParam1)) };
	fVar2[2] = 88f;
	Var0[3 /*3*/] = { -1879.297f, 2772.653f, 29.57795f };
	Var1[3 /*3*/] = { -1864.521f, 2825.472f, (281.8062f + IntToFloat(iParam1)) };
	fVar2[3] = 88f;
	Var0[4 /*3*/] = { -2676.74f, 3366.988f, 29.92394f };
	Var1[4 /*3*/] = { -2744.79f, 3340.347f, (37.80379f + IntToFloat(iParam1)) };
	fVar2[4] = 9f;
	Var0[5 /*3*/] = { -2676.74f, 3366.988f, 29.92394f };
	Var1[5 /*3*/] = { -2744.79f, 3340.347f, (37.80379f + IntToFloat(iParam1)) };
	fVar2[5] = 9.5f;
	Var0[6 /*3*/] = { -2807.397f, 3264.226f, 29.92764f };
	Var1[6 /*3*/] = { -2879.805f, 3309.01f, (37.57864f + IntToFloat(iParam1)) };
	fVar2[6] = 9.5f;
	Var0[7 /*3*/] = { -2808.236f, 3264.634f, 29.92764f };
	Var1[7 /*3*/] = { -2747.55f, 3187.8f, (37.45682f + IntToFloat(iParam1)) };
	fVar2[7] = 9.5f;
	Var0[8 /*3*/] = { -2530.996f, 3064.151f, 29.71081f };
	Var1[8 /*3*/] = { -2748.557f, 3189.939f, (37.45682f + IntToFloat(iParam1)) };
	fVar2[8] = 9.5f;
	Var0[9 /*3*/] = { -2533.902f, 3062.491f, 29.70715f };
	Var1[9 /*3*/] = { -2520.674f, 2996.817f, (37.45715f + IntToFloat(iParam1)) };
	fVar2[9] = 9.5f;
	Var0[10 /*3*/] = { -2500.716f, 2927.103f, 29.45663f };
	Var1[10 /*3*/] = { -2445.696f, 2896.657f, (37.68009f + IntToFloat(iParam1)) };
	fVar2[10] = 9.5f;
	Var0[11 /*3*/] = { -2020.543f, 2810.747f, 29.45658f };
	Var1[11 /*3*/] = { -1927.949f, 2785.779f, (37.67057f + IntToFloat(iParam1)) };
	fVar2[11] = 9.5f;
	Var0[12 /*3*/] = { -2261.899f, 3376.549f, 29.77859f };
	Var1[12 /*3*/] = { -2141.067f, 3376.773f, (37.90019f + IntToFloat(iParam1)) };
	fVar2[12] = 9.5f;
	iVar3 = 13;
	iVar4 = 0;
	while (iVar4 < iVar3)
	{
		if (unk_0x3BC3A4E4A1827EEE(Param0, Var0[iVar4 /*3*/], Var1[iVar4 /*3*/], fVar2[iVar4], iVar5, 1))
		{
			return 1;
		}
		iVar4++;
	}
	return 0;
}

int func_20(struct<3> Param0, int iParam1, int iParam2, bool bParam3)
{
	struct<3> Var0[15];
	struct<3> Var1[15];
	float fVar2[15];
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	
	iVar5 = 0;
	switch (iParam1)
	{
		case 1:
			Var0[0 /*3*/] = { -1332.211f, 100.4608f, 40.38437f };
			Var1[0 /*3*/] = { -1094.238f, 148.4274f, 73f };
			fVar2[0] = 171.25f;
			Var0[1 /*3*/] = { -999.7344f, -110.2231f, 25.25706f };
			Var1[1 /*3*/] = { -1149.494f, 109.2558f, 73f };
			fVar2[1] = 132f;
			Var0[2 /*3*/] = { -1035.113f, -84.95885f, 28.2746f };
			Var1[2 /*3*/] = { -1261.103f, 50.08148f, 73f };
			fVar2[2] = 132f;
			iVar3 = 3;
			break;
		
		case 2:
			Var0[0 /*3*/] = { -804.3439f, -3346.5f, 10f };
			Var1[0 /*3*/] = { -1816.954f, -2768.893f, IntToFloat((250 + iParam2)) };
			fVar2[0] = 247f;
			Var0[1 /*3*/] = { -1911.488f, -2934.197f, 10f };
			Var1[1 /*3*/] = { -968.6236f, -3477.748f, IntToFloat((250 + iParam2)) };
			fVar2[1] = 149f;
			Var0[2 /*3*/] = { -844.9433f, -2802.785f, 10f };
			Var1[2 /*3*/] = { -1011.081f, -3086.904f, IntToFloat((250 + iParam2)) };
			fVar2[2] = 185.5f;
			Var0[3 /*3*/] = { -1021.086f, -2952.277f, 10f };
			Var1[3 /*3*/] = { -1599.008f, -2616.271f, IntToFloat((250 + iParam2)) };
			fVar2[3] = 250f;
			Var0[4 /*3*/] = { -1027.136f, -2436.457f, 10f };
			Var1[4 /*3*/] = { -1392.61f, -2226.763f, IntToFloat((250 + iParam2)) };
			fVar2[4] = 193.5f;
			Var0[5 /*3*/] = { -1497.549f, -2408.712f, 10f };
			Var1[5 /*3*/] = { -1136.917f, -2617.955f, IntToFloat((250 + iParam2)) };
			fVar2[5] = 234.5f;
			Var0[6 /*3*/] = { -982.7924f, -2831.709f, 12.93313f };
			Var1[6 /*3*/] = { -966.4677f, -2803.458f, 16.68313f };
			fVar2[6] = 16f;
			Var0[7 /*3*/] = { -1110.083f, -3496.806f, 12f };
			Var1[7 /*3*/] = { -1955.298f, -3010.431f, IntToFloat((250 + iParam2)) };
			fVar2[7] = 80f;
			Var0[8 /*3*/] = { -1886.899f, -3193.024f, 12f };
			Var1[8 /*3*/] = { -1836.143f, -3105.268f, IntToFloat((250 + iParam2)) };
			fVar2[8] = 142f;
			Var0[9 /*3*/] = { -1134.337f, -3535.648f, 12f };
			Var1[9 /*3*/] = { -1259.649f, -3463.486f, IntToFloat((250 + iParam2)) };
			fVar2[9] = 30.75f;
			Var0[10 /*3*/] = { -969.1279f, -3463.899f, 12f };
			Var1[10 /*3*/] = { -896.3734f, -3505.715f, IntToFloat((250 + iParam2)) };
			fVar2[10] = 150f;
			Var0[11 /*3*/] = { -1369.491f, -2173.579f, 10f };
			Var1[11 /*3*/] = { -1685.626f, -2720.364f, IntToFloat((250 + iParam2)) };
			fVar2[11] = 29.25f;
			Var0[12 /*3*/] = { -1010.926f, -3550.943f, 10f };
			Var1[12 /*3*/] = { -1110.198f, -3493.617f, IntToFloat((250 + iParam2)) };
			fVar2[12] = 43f;
			iVar3 = 13;
			break;
		
		case 3:
			Var0[0 /*3*/] = { -1773.944f, 3287.334f, 30f };
			Var1[0 /*3*/] = { -2029.776f, 2845.083f, IntToFloat((250 + iParam2)) };
			fVar2[0] = 255f;
			Var0[1 /*3*/] = { -2725.889f, 3291.099f, 30f };
			Var1[1 /*3*/] = { -2009.182f, 2879.835f, IntToFloat((250 + iParam2)) };
			fVar2[1] = 180f;
			Var0[2 /*3*/] = { -2442.026f, 3326.699f, 30f };
			Var1[2 /*3*/] = { -2033.928f, 3089.049f, IntToFloat((250 + iParam2)) };
			fVar2[2] = 205f;
			Var0[3 /*3*/] = { -1917.165f, 3374.209f, 30f };
			Var1[3 /*3*/] = { -2016.791f, 3195.058f, IntToFloat((250 + iParam2)) };
			fVar2[3] = 86.25f;
			Var0[4 /*3*/] = { -2192.753f, 3373.278f, 30f };
			Var1[4 /*3*/] = { -2191.544f, 3150.417f, IntToFloat((250 + iParam2)) };
			fVar2[4] = 150.5f;
			Var0[5 /*3*/] = { -2077.663f, 3344.514f, 30f };
			Var1[5 /*3*/] = { -2191.544f, 3150.417f, IntToFloat((250 + iParam2)) };
			fVar2[5] = 140.5f;
			Var0[6 /*3*/] = { -2861.755f, 3352.661f, 30f };
			Var1[6 /*3*/] = { -2715.871f, 3269.916f, IntToFloat((250 + iParam2)) };
			fVar2[6] = 90f;
			Var0[7 /*3*/] = { -2005.574f, 3364.533f, 30f };
			Var1[7 /*3*/] = { -1977.569f, 3330.888f, IntToFloat((250 + iParam2)) };
			fVar2[7] = 100f;
			Var0[8 /*3*/] = { -1682.235f, 3004.285f, 30f };
			Var1[8 /*3*/] = { -1942.747f, 2947.441f, IntToFloat((250 + iParam2)) };
			fVar2[8] = 248.75f;
			Var0[9 /*3*/] = { -2393.295f, 2936.406f, 31.6801f };
			Var1[9 /*3*/] = { -2453.037f, 3006.863f, 52.31003f };
			fVar2[9] = 128f;
			Var0[10 /*3*/] = { -2347.185f, 3023.83f, 31.56573f };
			Var1[10 /*3*/] = { -2517.33f, 2989.063f, 49.95644f };
			fVar2[10] = 140f;
			Var0[11 /*3*/] = { -2259.922f, 3358.04f, 29.99972f };
			Var1[11 /*3*/] = { -2299.772f, 3385.79f, 38.06014f };
			fVar2[11] = 16f;
			Var0[12 /*3*/] = { -2476.309f, 3363.914f, 31.67933f };
			Var1[12 /*3*/] = { -2431.981f, 3287.669f, 39.97826f };
			fVar2[12] = 214.25f;
			Var0[13 /*3*/] = { -2103.081f, 2797.783f, 29.37864f };
			Var1[13 /*3*/] = { -2096.821f, 2874.423f, 57.80989f };
			fVar2[13] = 65.75f;
			if (bParam3)
			{
				iVar6 = iParam2;
			}
			else
			{
				iVar6 = 0;
			}
			Var1[9 /*3*/].f_2 = (Var1[9 /*3*/].f_2 + IntToFloat(iVar6));
			Var1[10 /*3*/].f_2 = (Var1[10 /*3*/].f_2 + IntToFloat(iVar6));
			Var1[11 /*3*/].f_2 = (Var1[11 /*3*/].f_2 + IntToFloat(iVar6));
			Var1[12 /*3*/].f_2 = (Var1[12 /*3*/].f_2 + IntToFloat(iVar6));
			Var1[13 /*3*/].f_2 = (Var1[13 /*3*/].f_2 + IntToFloat(iVar6));
			iVar3 = 14;
			break;
		
		case 4:
			Var0[0 /*3*/] = { 1541.607f, 2527.555f, 40f };
			Var1[0 /*3*/] = { 1815.575f, 2535.06f, IntToFloat((150 + iParam2)) };
			fVar2[0] = 114f;
			Var0[1 /*3*/] = { 1788.879f, 2445.727f, 40f };
			Var1[1 /*3*/] = { 1716.96f, 2502.957f, IntToFloat((150 + iParam2)) };
			fVar2[1] = 88.5f;
			Var0[2 /*3*/] = { 1601.157f, 2436.244f, 40f };
			Var1[2 /*3*/] = { 1650.078f, 2515.923f, IntToFloat((150 + iParam2)) };
			fVar2[2] = 133.25f;
			Var0[3 /*3*/] = { 1706.331f, 2407.597f, 40f };
			Var1[3 /*3*/] = { 1698.555f, 2460.208f, IntToFloat((150 + iParam2)) };
			fVar2[3] = 104.5f;
			Var0[4 /*3*/] = { 1712.452f, 2756.218f, 40f };
			Var1[4 /*3*/] = { 1718.848f, 2589.162f, IntToFloat((150 + iParam2)) };
			fVar2[4] = 121.75f;
			Var0[5 /*3*/] = { 1830.228f, 2661.24f, 40f };
			Var1[5 /*3*/] = { 1774.812f, 2679.419f, IntToFloat((150 + iParam2)) };
			fVar2[5] = 84.5f;
			Var0[6 /*3*/] = { 1559.05f, 2632.22f, 40f };
			Var1[6 /*3*/] = { 1657.208f, 2595.484f, IntToFloat((150 + iParam2)) };
			fVar2[6] = 103.75f;
			Var0[7 /*3*/] = { 1612.021f, 2716.869f, 40f };
			Var1[7 /*3*/] = { 1657.165f, 2669.721f, IntToFloat((150 + iParam2)) };
			fVar2[7] = 104.25f;
			Var0[8 /*3*/] = { 1809.872f, 2729.827f, 40f };
			Var1[8 /*3*/] = { 1789.855f, 2705.037f, IntToFloat((150 + iParam2)) };
			fVar2[8] = 91f;
			Var0[9 /*3*/] = { 1818.789f, 2605.948f, 40f };
			Var1[9 /*3*/] = { 1783.114f, 2606.783f, IntToFloat((150 + iParam2)) };
			fVar2[9] = 51.25f;
			iVar3 = 10;
			break;
		
		case 5:
			Var0[0 /*3*/] = { 3411.002f, 3663.185f, 20f };
			Var1[0 /*3*/] = { 3615.583f, 3626.194f, IntToFloat((40 + iParam2)) };
			fVar2[0] = 45.75f;
			Var0[1 /*3*/] = { 3426.66f, 3733.078f, 20f };
			Var1[1 /*3*/] = { 3643.801f, 3694.362f, IntToFloat((40 + iParam2)) };
			fVar2[1] = 99f;
			Var0[2 /*3*/] = { 3446.036f, 3795.688f, 20f };
			Var1[2 /*3*/] = { 3650.914f, 3766.152f, IntToFloat((40 + iParam2)) };
			fVar2[2] = 81.5f;
			iVar3 = 3;
			break;
		
		case 6:
			Var0[0 /*3*/] = { 526.053f, -3391.497f, -10f };
			Var1[0 /*3*/] = { 523.2289f, -3118.678f, IntToFloat((10 + iParam2)) };
			fVar2[0] = 120f;
			Var0[1 /*3*/] = { 459.4397f, -3199.99f, 4.819676f };
			Var1[1 /*3*/] = { 593.8928f, -3199.998f, 30.06926f };
			fVar2[1] = 170f;
			Var0[2 /*3*/] = { 552.8467f, -3111.054f, 4.819394f };
			Var1[2 /*3*/] = { 585.3137f, -3111.844f, 17.56923f };
			fVar2[2] = 12.5f;
			Var0[3 /*3*/] = { 598.4666f, -3140.147f, 4.819257f };
			Var1[3 /*3*/] = { 597.4973f, -3117.063f, 17.31926f };
			fVar2[3] = 9.75f;
			iVar3 = 4;
			break;
		
		case 7:
			Var0[0 /*3*/] = { -1108.55f, -570.8798f, 20f };
			Var1[0 /*3*/] = { -1187.811f, -477.5037f, IntToFloat((50 + iParam2)) };
			fVar2[0] = 162f;
			Var0[1 /*3*/] = { -1201.378f, -485.9673f, 20f };
			Var1[1 /*3*/] = { -1215.796f, -464.8281f, IntToFloat((50 + iParam2)) };
			fVar2[1] = 124f;
			Var0[2 /*3*/] = { -985.6311f, -525.4233f, 20f };
			Var1[2 /*3*/] = { -1013.393f, -475.2057f, IntToFloat((50 + iParam2)) };
			fVar2[2] = 55f;
			Var0[3 /*3*/] = { -1055.849f, -477.8226f, 20f };
			Var1[3 /*3*/] = { -1073.333f, -498.717f, IntToFloat((50 + iParam2)) };
			fVar2[3] = 142f;
			iVar3 = 4;
			break;
		
		case 8:
			Var0[0 /*3*/] = { 461.5684f, -984.572f, 29.43951f };
			Var1[0 /*3*/] = { 471.17f, -984.4292f, 40.14212f };
			fVar2[0] = 7.75f;
			Var0[1 /*3*/] = { 457.3404f, -984.756f, 34.43951f };
			Var1[1 /*3*/] = { 457.2084f, -993.7189f, 29.38958f };
			fVar2[1] = 14.75f;
			Var0[2 /*3*/] = { 477.6227f, -986.6f, 40.00819f };
			Var1[2 /*3*/] = { 424.8687f, -986.3279f, 48.71241f };
			fVar2[2] = 31.5f;
			Var0[3 /*3*/] = { 474.3889f, -974.4613f, 39.55761f };
			Var1[3 /*3*/] = { 474.0358f, -1021.972f, 49.10033f };
			fVar2[3] = 30.5f;
			Var0[4 /*3*/] = { 442.1768f, -974.1888f, 29.68951f };
			Var1[4 /*3*/] = { 442.1855f, -979.8635f, 33.43951f };
			fVar2[4] = 6.75f;
			iVar3 = 5;
			break;
	}
	iVar4 = 0;
	while (iVar4 < iVar3)
	{
		if (unk_0x3BC3A4E4A1827EEE(Param0, Var0[iVar4 /*3*/], Var1[iVar4 /*3*/], fVar2[iVar4], iVar5, 1))
		{
			return 1;
		}
		iVar4++;
	}
	return 0;
}

bool func_21()
{
	return Global_2540384.f_6636;
}

int func_22(int iParam0)
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

bool func_23(int iParam0)
{
	return func_24(func_25(iParam0));
}

int func_24(int iParam0)
{
	switch (iParam0)
	{
		case 167:
		case 169:
		case 168:
			return 1;
		
		default:
	}
	return 0;
}

int func_25(int iParam0)
{
	if (func_26(iParam0, 0))
	{
		return Global_1630317[iParam0 /*595*/].f_11.f_33;
	}
	return -1;
}

int func_26(int iParam0, int iParam1)
{
	if (Global_1630317[iParam0 /*595*/].f_11.f_33 != -1 || (iParam1 && Global_1630317[iParam0 /*595*/].f_11.f_32 != -1))
	{
		return 1;
	}
	return 0;
}

int func_27(int iParam0, int iParam1)
{
	if (Global_1630317[iParam0 /*595*/] == iParam1)
	{
		return func_28(iParam0);
	}
	return 0;
}

int func_28(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return unk_0xCE990E643CD9D0E5(Global_1630317[iVar0 /*595*/].f_1, 0);
	}
	return 0;
}

int func_29(int iParam0)
{
	switch (iParam0)
	{
		case 136:
		case 144:
		case 129:
			return 1;
		
		case 141:
			if (func_28(unk_0x460153A63B9477BC()))
			{
				return 1;
			}
			break;
	}
	return 0;
}

int func_30(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return Global_1630317[iVar0 /*595*/];
	}
	return -1;
}

int func_31(int iParam0)
{
	if (func_33(iParam0, 0))
	{
		return 1;
	}
	if (func_32())
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

bool func_32()
{
	return unk_0xCE990E643CD9D0E5(Global_2359302, 3);
}

bool func_33(int iParam0, int iParam1)
{
	bool bVar0;
	
	if (iParam0 == unk_0x460153A63B9477BC())
	{
		bVar0 = func_34(-1, 0) == 8;
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

int func_34(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_35();
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

int func_35()
{
	return Global_1312763;
}

bool func_36(int iParam0)
{
	return unk_0xCE990E643CD9D0E5(Global_1573984, iParam0);
}

int func_37(int iParam0)
{
	if (iParam0 != func_39() && func_38(iParam0, 1, 1))
	{
		return unk_0xCE990E643CD9D0E5(Global_2425869[iParam0 /*443*/].f_314, 3);
	}
	return 0;
}

int func_38(int iParam0, bool bParam1, bool bParam2)
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

int func_39()
{
	return -1;
}

int func_40()
{
	int iVar0;
	
	iVar0 = 0;
	if (unk_0xAFF96FDC3971E7EA())
	{
		if (func_128())
		{
			iVar0 = 1;
		}
	}
	if (func_41())
	{
		iVar0 = 1;
	}
	return iVar0;
}

int func_41()
{
	int iVar0;
	
	switch (Local_110.f_6)
	{
		case 0:
			func_127();
			if ((((((((func_124(unk_0x460153A63B9477BC(), 1, 0) && func_123()) || func_25(unk_0x460153A63B9477BC()) == 159) || func_25(unk_0x460153A63B9477BC()) == 225) || func_25(unk_0x460153A63B9477BC()) == 233) || func_122(unk_0x460153A63B9477BC())) || func_21()) || Global_1574416) || (unk_0xFC559366953F62B3() && func_8()))
			{
				unk_0x410A1E7AD7D5C774(joaat("rhino"), 1);
			}
			func_120(&(Local_109[unk_0x59E2AD1A8ACEDA31() /*8*/]), 1);
			Local_110.f_176 = 1;
			Local_110.f_6 = 1;
			break;
		
		case 1:
			if (func_119())
			{
				func_120(&(Local_109[unk_0x59E2AD1A8ACEDA31() /*8*/]), 2);
				Local_110.f_6 = 2;
			}
			break;
		
		case 2:
			if (func_118(Local_85.f_20, 1))
			{
				Local_110.f_6 = 3;
			}
			break;
		
		case 3:
			if ((!func_124(unk_0x460153A63B9477BC(), 1, 0) && !func_123()) && !func_160())
			{
				iVar0 = 0;
				while (iVar0 < 2)
				{
					func_112(iVar0);
					iVar0++;
				}
			}
			if (unk_0x25DDB354A40FFCDB())
			{
				if ((((func_110() && !func_124(unk_0x460153A63B9477BC(), 1, 0)) && !func_123()) && !unk_0xFC559366953F62B3()) && func_108(unk_0x460153A63B9477BC()) != 6)
				{
					func_49();
				}
			}
			iVar0 = 0;
			while (iVar0 < 3)
			{
				func_42(iVar0);
				iVar0++;
			}
			if (((((func_25(unk_0x460153A63B9477BC()) == 225 || func_25(unk_0x460153A63B9477BC()) == 233) || func_122(unk_0x460153A63B9477BC())) || Global_1574416) || func_21()) || (unk_0xFC559366953F62B3() && func_8()))
			{
				unk_0x410A1E7AD7D5C774(joaat("rhino"), 1);
			}
			if (vdist2(unk_0x3E4D3CCC220BDFB1(unk_0x9B0761B4C3EB8BC7(), 0), -2076.374f, 3112.294f, 33.13584f) >= 1030225f)
			{
				Local_110.f_6 = 4;
			}
			break;
		
		case 4:
			if ((((((((func_124(unk_0x460153A63B9477BC(), 1, 0) && func_123()) || func_25(unk_0x460153A63B9477BC()) == 159) || func_25(unk_0x460153A63B9477BC()) == 225) || func_25(unk_0x460153A63B9477BC()) == 233) || func_122(unk_0x460153A63B9477BC())) || Global_1574416) || func_21()) || (unk_0xFC559366953F62B3() && func_8()))
			{
				unk_0x410A1E7AD7D5C774(joaat("rhino"), 0);
			}
			return 1;
			break;
	}
	return 0;
}

void func_42(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	var uVar4;
	var uVar5;
	
	if (Local_85.f_3[iParam0 /*5*/].f_2 > 2 && unk_0x3D70CCF2C9B362CD(Local_85.f_3[iParam0 /*5*/]))
	{
		if (unk_0xA59F96B50B97E63C(unk_0x770D3B2B4702434A(Local_85.f_3[iParam0 /*5*/]), 0))
		{
			if (unk_0x8F678487EEBD8CE4(Local_110.f_172[iParam0]))
			{
				unk_0x93370FA10F15BE44(&(Local_110.f_172[iParam0]));
			}
		}
		else if (!unk_0x8F678487EEBD8CE4(Local_110.f_172[iParam0]) && unk_0x1A3D0DF92BF7D8C4(unk_0x460153A63B9477BC()) >= 2)
		{
			Local_110.f_172[iParam0] = unk_0x2BE000892D65EA2A(unk_0x62D2FF718BC7717D(Local_85.f_3[iParam0 /*5*/]));
			unk_0xECC9A00CF1181EC2(Local_110.f_172[iParam0], 1);
		}
	}
	else if (unk_0x8F678487EEBD8CE4(Local_110.f_172[iParam0]))
	{
		unk_0x93370FA10F15BE44(&(Local_110.f_172[iParam0]));
	}
	switch (Local_85.f_3[iParam0 /*5*/].f_2)
	{
		case 0:
			if (!func_48(Local_109[unk_0x59E2AD1A8ACEDA31() /*8*/].f_4[iParam0], 16))
			{
				Local_109[unk_0x59E2AD1A8ACEDA31() /*8*/].f_4[iParam0] = 0;
				func_47(&(Local_109[unk_0x59E2AD1A8ACEDA31() /*8*/].f_4[iParam0]), 16);
			}
			break;
		
		case 1:
			if (!func_48(Local_109[unk_0x59E2AD1A8ACEDA31() /*8*/].f_4[iParam0], 1))
			{
				if (!unk_0xA59F96B50B97E63C(unk_0x9B0761B4C3EB8BC7(), 0))
				{
					if (unk_0xAABDC18B9F6EC79D(unk_0x9B0761B4C3EB8BC7()) || unk_0x94BF5C4EB0D40E9E(unk_0x9B0761B4C3EB8BC7()))
					{
						if (unk_0x1A3D0DF92BF7D8C4(unk_0x460153A63B9477BC()) >= 4)
						{
							if (func_20(unk_0x3E4D3CCC220BDFB1(unk_0x9B0761B4C3EB8BC7(), 0), 3, 500, 0))
							{
								func_47(&(Local_109[unk_0x59E2AD1A8ACEDA31() /*8*/].f_4[iParam0]), 1);
							}
						}
					}
				}
			}
			break;
		
		case 2:
			break;
		
		case 3:
			if (!func_48(Local_109[unk_0x59E2AD1A8ACEDA31() /*8*/].f_4[iParam0], 2))
			{
				if (func_46(iParam0))
				{
					iVar2 = unk_0x1FA7B77001D60F9D(Local_85.f_3[iParam0 /*5*/].f_4);
					iVar0 = unk_0x3C6C6327BA564AEE(Local_85.f_3[iParam0 /*5*/].f_1);
					iVar1 = unk_0x770D3B2B4702434A(Local_85.f_3[iParam0 /*5*/]);
					if (!unk_0xA59F96B50B97E63C(iVar2, 0))
					{
						if (unk_0xAABDC18B9F6EC79D(iVar2))
						{
							iVar3 = unk_0xA5D5B1042E8F47BD(iVar2, 0);
							if ((!unk_0xA59F96B50B97E63C(iVar0, 0) && !unk_0xA59F96B50B97E63C(iVar1, 0)) && !unk_0xA59F96B50B97E63C(iVar3, 0))
							{
								unk_0x95B4DF5308CFD8F9(iVar0, iVar1, iVar3, iVar2, unk_0x3E4D3CCC220BDFB1(iVar2, 1), 6, 70f, -1f, 30f, 500, 50, 1);
								unk_0x72A1E21C9AEEFB27(iVar0, joaat("vehicle_weapon_space_rocket"));
								unk_0xBF0DD7DAFAF15103(iVar0, false);
							}
						}
					}
				}
				if (func_45(iParam0))
				{
					iVar0 = unk_0x3C6C6327BA564AEE(Local_85.f_3[iParam0 /*5*/].f_1);
					iVar2 = unk_0x1FA7B77001D60F9D(Local_85.f_3[iParam0 /*5*/].f_4);
					if (!unk_0xA59F96B50B97E63C(iVar2, 0))
					{
						if (unk_0xAABDC18B9F6EC79D(iVar2))
						{
							unk_0xA65F0BE5E99619BB(iVar0, iVar2, unk_0x3E4D3CCC220BDFB1(iVar2, 1));
						}
					}
				}
				if (func_44(iParam0, 6))
				{
					func_47(&(Local_109[unk_0x59E2AD1A8ACEDA31() /*8*/].f_4[iParam0]), 2);
				}
			}
			break;
		
		case 4:
			break;
		
		case 5:
			if (!func_48(Local_109[unk_0x59E2AD1A8ACEDA31() /*8*/].f_4[iParam0], 8))
			{
				if (func_46(iParam0))
				{
					iVar0 = unk_0x3C6C6327BA564AEE(Local_85.f_3[iParam0 /*5*/].f_1);
					iVar1 = unk_0x770D3B2B4702434A(Local_85.f_3[iParam0 /*5*/]);
					if (!unk_0xA59F96B50B97E63C(iVar0, 0) && !unk_0xA59F96B50B97E63C(iVar1, 0))
					{
						unk_0x95B4DF5308CFD8F9(iVar0, iVar1, 0, 0, -2076.374f, 3112.294f, 33.13584f, 9, 70f, -1f, 30f, 500, 50, 1);
					}
				}
				if (func_44(iParam0, 9))
				{
					func_47(&(Local_109[unk_0x59E2AD1A8ACEDA31() /*8*/].f_4[iParam0]), 8);
				}
			}
			break;
		
		case 6:
			if (unk_0xF7DE07F319727299(Local_85.f_3[iParam0 /*5*/]) || unk_0xF7DE07F319727299(Local_85.f_3[iParam0 /*5*/].f_1))
			{
				if (!unk_0x9A70B1BD2A5BA09C(unk_0x3E4D3CCC220BDFB1(unk_0x62D2FF718BC7717D(Local_85.f_3[iParam0 /*5*/]), 0), 10f) && !unk_0x8FDBEAE18013EA75(unk_0x3E4D3CCC220BDFB1(unk_0x62D2FF718BC7717D(Local_85.f_3[iParam0 /*5*/]), 0), 10f))
				{
					if (unk_0x3D70CCF2C9B362CD(Local_85.f_3[iParam0 /*5*/].f_1) && unk_0xF05B7723022657B3(Local_85.f_3[iParam0 /*5*/].f_1))
					{
						uVar4 = unk_0x62D2FF718BC7717D(Local_85.f_3[iParam0 /*5*/].f_1);
						unk_0x5896A99BC0571F36(&uVar4);
					}
					if (unk_0x3D70CCF2C9B362CD(Local_85.f_3[iParam0 /*5*/]) && unk_0xF05B7723022657B3(Local_85.f_3[iParam0 /*5*/]))
					{
						uVar5 = unk_0x62D2FF718BC7717D(Local_85.f_3[iParam0 /*5*/]);
						unk_0x5896A99BC0571F36(&uVar5);
					}
				}
			}
			else if (func_48(Local_109[unk_0x59E2AD1A8ACEDA31() /*8*/].f_4[iParam0], 16))
			{
				func_43(&(Local_109[unk_0x59E2AD1A8ACEDA31() /*8*/].f_4[iParam0]), 16);
			}
			break;
	}
}

void func_43(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

int func_44(int iParam0, int iParam1)
{
	int iVar0;
	
	if (!unk_0x3D70CCF2C9B362CD(Local_85.f_3[iParam0 /*5*/]))
	{
		return 1;
	}
	iVar0 = unk_0x770D3B2B4702434A(Local_85.f_3[iParam0 /*5*/]);
	if (unk_0xA59F96B50B97E63C(iVar0, 0))
	{
		return 1;
	}
	if (unk_0xC69084A99BE1708B(iVar0) != iParam1)
	{
		return 0;
	}
	return 1;
}

int func_45(int iParam0)
{
	int iVar0;
	
	if (!unk_0x3D70CCF2C9B362CD(Local_85.f_3[iParam0 /*5*/].f_1))
	{
		return 0;
	}
	iVar0 = unk_0x3C6C6327BA564AEE(Local_85.f_3[iParam0 /*5*/].f_1);
	if (unk_0xA59F96B50B97E63C(iVar0, 0))
	{
		return 0;
	}
	if (!unk_0xAA5B806352173DEA(iVar0))
	{
		return 0;
	}
	return 1;
}

int func_46(int iParam0)
{
	int iVar0;
	
	if (!unk_0x3D70CCF2C9B362CD(Local_85.f_3[iParam0 /*5*/]))
	{
		return 0;
	}
	iVar0 = unk_0x770D3B2B4702434A(Local_85.f_3[iParam0 /*5*/]);
	if (unk_0xA59F96B50B97E63C(iVar0, 0))
	{
		return 0;
	}
	if (!unk_0xAA5B806352173DEA(iVar0))
	{
		return 0;
	}
	return 1;
}

void func_47(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

bool func_48(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

void func_49()
{
	bool bVar0;
	bool bVar1;
	struct<3> Var2;
	struct<6> Var3;
	
	func_107();
	func_102();
	Var2 = { Local_84 };
	if (((func_20(unk_0x3E4D3CCC220BDFB1(unk_0x9B0761B4C3EB8BC7(), 0), 3, 1000, 0) || func_19(unk_0x3E4D3CCC220BDFB1(unk_0x9B0761B4C3EB8BC7(), 0), 1000)) || func_100(unk_0x9B0761B4C3EB8BC7())) && func_99(unk_0x9B0761B4C3EB8BC7()))
	{
		bVar0 = true;
	}
	else
	{
		Local_110.f_178 = 0;
	}
	if (unk_0x1037B9D45CE6B788(unk_0x9B0761B4C3EB8BC7(), -1588.977f, 2793.941f, 14.98289f, -1575.664f, 2779.558f, 26.11536f, 29.75f, 0, 1, 0) || unk_0x1037B9D45CE6B788(unk_0x9B0761B4C3EB8BC7(), -2306.916f, 3390.545f, 29.17826f, -2322.245f, 3401.719f, 35.63131f, 36f, 0, 1, 0))
	{
		bVar1 = true;
	}
	else
	{
		Local_110.f_179 = 0;
	}
	if (unk_0x1037B9D45CE6B788(unk_0x9B0761B4C3EB8BC7(), -1588.977f, 2793.941f, 14.98289f, -1575.664f, 2779.558f, 26.11536f, 29.75f, 0, 1, 0))
	{
		Var2 = { -1592.1f, 2797.2f, 17.1f };
		Local_110.f_181 = 1;
	}
	else if (unk_0x1037B9D45CE6B788(unk_0x9B0761B4C3EB8BC7(), -2306.916f, 3390.545f, 29.17826f, -2322.245f, 3401.719f, 35.63131f, 36f, 0, 1, 0))
	{
		Var2 = { -2303.9f, 3388f, 31.3f };
		Local_110.f_181 = 2;
	}
	if (func_97(bVar0, bVar1))
	{
		func_95();
		if (!func_94())
		{
			Global_1573348 = 1;
			func_93(&(Local_110.f_7), 2);
			func_92(&(Local_110.f_7), 2);
			func_91(&(Local_110.f_7), 2, 0, "AIRMECH", 0, 1);
			func_90(&(Local_110.f_7), 2, Var2);
			Global_20294.f_162 = { Var2 };
			Var3 = { func_89() };
			if (!unk_0x7BCC91F3C1CF24E8(&Var3))
			{
				if (func_68(&(Local_110.f_7), "SMGFZAU", &Var3, 7, 0, 0, 0))
				{
					func_50(bVar0, bVar1);
				}
			}
		}
	}
	else if (!func_94())
	{
		if (!unk_0xCE990E643CD9D0E5(Local_110.f_182, 2))
		{
			Global_1573348 = 0;
			func_93(&(Local_110.f_7), 2);
			func_92(&(Local_110.f_7), 2);
			unk_0xBE20AB8238688965(&(Local_110.f_182), 2);
		}
	}
}

void func_50(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		if (!func_65(16000, -1, -1))
		{
			func_64(16000, 1, -1, 1);
			if (Global_2540384.f_6641)
			{
				if (func_58())
				{
					func_56("AB_ENTRY_HT");
					Local_110.f_180 = 1;
				}
			}
			else if (func_58())
			{
				func_55("AB_ENTRY_HT", -1);
			}
		}
		else if (!func_65(16001, -1, -1))
		{
			func_64(16001, 1, -1, 1);
			if (Global_2540384.f_6641)
			{
				if (func_58())
				{
					func_56("AB_ENTRY_HT");
					Local_110.f_180 = 1;
				}
			}
			else if (func_58())
			{
				func_55("AB_ENTRY_HT", -1);
			}
		}
		Local_110.f_178 = 1;
	}
	else if (bParam1)
	{
		if (!func_65(15999, -1, -1))
		{
			func_64(15999, 1, -1, 1);
			if (Global_2540384.f_6641)
			{
				if (func_58())
				{
					func_56("AB_ENTRY_HT");
					Local_110.f_180 = 1;
				}
			}
			else if (func_58())
			{
				func_55("AB_ENTRY_HT", -1);
			}
		}
		else if (Local_110.f_181 == 1)
		{
			if (!func_65(16002, -1, -1))
			{
				func_64(16002, 1, -1, 1);
				if (Global_2540384.f_6641)
				{
					if (func_58())
					{
						func_56("AB_ENTRY_HT");
						Local_110.f_180 = 1;
					}
				}
				else if (func_58())
				{
					func_55("AB_ENTRY_HT", -1);
				}
			}
		}
		else if (Local_110.f_181 == 2)
		{
			if (func_52(18097, -1, -1) == 0)
			{
				func_51(18097, 1, -1, 1);
				if (Global_2540384.f_6641)
				{
					if (func_58())
					{
						func_56("AB_ENTRY_HT");
						Local_110.f_180 = 1;
					}
				}
				else if (func_58())
				{
					func_55("AB_ENTRY_HT", -1);
				}
			}
		}
		Local_110.f_179 = 1;
		Local_110.f_181 = 0;
	}
	if (unk_0xCE990E643CD9D0E5(Local_110.f_182, 2))
	{
		unk_0xD2459066EA58CE43(&(Local_110.f_182), 2);
	}
}

var func_51(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	var uVar2;
	
	if (iParam2 == -1)
	{
		iParam2 = func_35();
	}
	if (iParam1 < 0)
	{
		iParam1 = 255;
	}
	iVar0 = 0;
	iVar1 = 0;
	if (iParam0 >= 384 && iParam0 < 457)
	{
		iVar0 = unk_0x169039D5869899DA((iParam0 - 384), 0, 1, iParam2);
		iVar1 = ((iParam0 - 384) - unk_0xCCD6EB3D51BA0D9E((iParam0 - 384)) * 8) * 8;
	}
	else if (iParam0 >= 457 && iParam0 < 513)
	{
		iVar0 = unk_0x169039D5869899DA((iParam0 - 457), 1, 1, iParam2);
		iVar1 = ((iParam0 - 457) - unk_0xCCD6EB3D51BA0D9E((iParam0 - 457)) * 8) * 8;
	}
	else if (iParam0 >= 1281 && iParam0 < 1305)
	{
		iVar0 = unk_0x169039D5869899DA((iParam0 - 1281), 0, 0, 0);
		iVar1 = ((iParam0 - 1281) - unk_0xCCD6EB3D51BA0D9E((iParam0 - 1281)) * 8) * 8;
	}
	else if (iParam0 >= 1305 && iParam0 < 1361)
	{
		iVar0 = unk_0x169039D5869899DA((iParam0 - 1305), 1, 0, 0);
		iVar1 = ((iParam0 - 1305) - unk_0xCCD6EB3D51BA0D9E((iParam0 - 1305)) * 8) * 8;
	}
	else if (iParam0 >= 1393 && iParam0 < 2919)
	{
		iVar0 = unk_0x33259517529FA9DD((iParam0 - 1393), 0, 1, iParam2);
		iVar1 = ((iParam0 - 1393) - unk_0xCCD6EB3D51BA0D9E((iParam0 - 1393)) * 8) * 8;
	}
	else if (iParam0 >= 1361 && iParam0 < 1393)
	{
		iVar0 = unk_0x33259517529FA9DD((iParam0 - 1361), 0, 0, 0);
		iVar1 = ((iParam0 - 1361) - unk_0xCCD6EB3D51BA0D9E((iParam0 - 1361)) * 8) * 8;
	}
	else if (iParam0 >= 3879 && iParam0 < 4143)
	{
		iVar0 = unk_0x7F2F9520C57D9D66((iParam0 - 3879), 0, 1, iParam2, "_NGPSTAT_INT");
		iVar1 = ((iParam0 - 3879) - unk_0xCCD6EB3D51BA0D9E((iParam0 - 3879)) * 8) * 8;
	}
	else if (iParam0 >= 4143 && iParam0 < 4207)
	{
		iVar0 = unk_0x7F2F9520C57D9D66((iParam0 - 4143), 0, 0, 0, "_NGPSTAT_INT");
		iVar1 = ((iParam0 - 4143) - unk_0xCCD6EB3D51BA0D9E((iParam0 - 4143)) * 8) * 8;
	}
	else if (iParam0 >= 4399 && iParam0 < 6028)
	{
		iVar0 = unk_0x7F2F9520C57D9D66((iParam0 - 4399), 0, 1, iParam2, "_LRPSTAT_INT");
		iVar1 = ((iParam0 - 4399) - unk_0xCCD6EB3D51BA0D9E((iParam0 - 4399)) * 8) * 8;
	}
	else if (iParam0 >= 6413 && iParam0 < 7262)
	{
		iVar0 = unk_0x7F2F9520C57D9D66((iParam0 - 6413), 0, 1, iParam2, "_APAPSTAT_INT");
		iVar1 = ((iParam0 - 6413) - unk_0xCCD6EB3D51BA0D9E((iParam0 - 6413)) * 8) * 8;
	}
	else if (iParam0 >= 7262 && iParam0 < 7313)
	{
		iVar0 = unk_0x7F2F9520C57D9D66((iParam0 - 7262), 0, 1, iParam2, "_LR2PSTAT_INT");
		iVar1 = ((iParam0 - 7262) - unk_0xCCD6EB3D51BA0D9E((iParam0 - 7262)) * 8) * 8;
	}
	else if (iParam0 >= 7681 && iParam0 < 9361)
	{
		iVar0 = unk_0x7F2F9520C57D9D66((iParam0 - 7681), 0, 1, iParam2, "_BIKEPSTAT_INT");
		iVar1 = ((iParam0 - 7681) - unk_0xCCD6EB3D51BA0D9E((iParam0 - 7681)) * 8) * 8;
	}
	else if (iParam0 >= 9553 && iParam0 < 15265)
	{
		iVar0 = unk_0x7F2F9520C57D9D66((iParam0 - 9553), 0, 1, iParam2, "_IMPEXPPSTAT_INT");
		iVar1 = ((iParam0 - 9553) - unk_0xCCD6EB3D51BA0D9E((iParam0 - 9553)) * 8) * 8;
	}
	else if (iParam0 >= 15265 && iParam0 < 15369)
	{
		iVar0 = unk_0x7F2F9520C57D9D66((iParam0 - 15265), 0, 1, iParam2, "_GUNRPSTAT_INT");
		iVar1 = ((iParam0 - 15265) - unk_0xCCD6EB3D51BA0D9E((iParam0 - 15265)) * 8) * 8;
	}
	else if (iParam0 >= 16010 && iParam0 < 18098)
	{
		iVar0 = unk_0x7F2F9520C57D9D66((iParam0 - 16010), 0, 1, iParam2, "_DLCSMUGCHARPSTAT_INT");
		iVar1 = ((iParam0 - 16010) - unk_0xCCD6EB3D51BA0D9E((iParam0 - 16010)) * 8) * 8;
	}
	else if (iParam0 >= 18162 && iParam0 < 19018)
	{
		iVar0 = unk_0x7F2F9520C57D9D66((iParam0 - 18162), 0, 1, iParam2, "_GANGOPSPSTAT_INT");
		iVar1 = ((iParam0 - 18162) - unk_0xCCD6EB3D51BA0D9E((iParam0 - 18162)) * 8) * 8;
	}
	else if (iParam0 >= 19018 && iParam0 < 22066)
	{
		iVar0 = unk_0x7F2F9520C57D9D66((iParam0 - 19018), 0, 1, iParam2, "_BUSINESSBATPSTAT_INT");
		iVar1 = ((iParam0 - 19018) - unk_0xCCD6EB3D51BA0D9E((iParam0 - 19018)) * 8) * 8;
	}
	else if (iParam0 >= 22194 && iParam0 < 24962)
	{
		iVar0 = unk_0x7F2F9520C57D9D66((iParam0 - 22194), 0, 1, iParam2, "_ARENAWARSPSTAT_INT");
		iVar1 = ((iParam0 - 22194) - unk_0xCCD6EB3D51BA0D9E((iParam0 - 22194)) * 8) * 8;
	}
	else if (iParam0 >= 25538 && iParam0 < 26810)
	{
		iVar0 = unk_0x7F2F9520C57D9D66((iParam0 - 25538), 0, 1, iParam2, "_CASINOPSTAT_INT");
		iVar1 = ((iParam0 - 25538) - unk_0xCCD6EB3D51BA0D9E((iParam0 - 25538)) * 8) * 8;
	}
	else if (iParam0 >= 27258 && iParam0 < 28098)
	{
		iVar0 = unk_0x7F2F9520C57D9D66((iParam0 - 27258), 0, 1, iParam2, "_CASINOHSTPSTAT_INT");
		iVar1 = ((iParam0 - 27258) - unk_0xCCD6EB3D51BA0D9E((iParam0 - 27258)) * 8) * 8;
	}
	else if (iParam0 >= 28483 && iParam0 < 30227)
	{
		iVar0 = unk_0x7F2F9520C57D9D66((iParam0 - 28483), 0, 1, iParam2, "_SU20PSTAT_INT");
		iVar1 = ((iParam0 - 28483) - unk_0xCCD6EB3D51BA0D9E((iParam0 - 28483)) * 8) * 8;
	}
	else if (iParam0 >= 30483 && iParam0 < 30515)
	{
		iVar0 = unk_0x7F2F9520C57D9D66((iParam0 - 30483), 0, 1, iParam2, "_HISLANDPSTAT_INT");
		iVar1 = ((iParam0 - 30483) - unk_0xCCD6EB3D51BA0D9E((iParam0 - 30483)) * 8) * 8;
	}
	else if (iParam0 >= 7641 && iParam0 < 7681)
	{
		iVar0 = unk_0x7F2F9520C57D9D66((iParam0 - 7641), 0, 1, iParam2, "_NGDLCPSTAT_INT");
		iVar1 = ((iParam0 - 7641) - unk_0xCCD6EB3D51BA0D9E((iParam0 - 7641)) * 8) * 8;
	}
	else if (iParam0 >= 7313 && iParam0 < 7321)
	{
		iVar0 = unk_0x7F2F9520C57D9D66((iParam0 - 7313), 0, 0, 0, "_NGDLCPSTAT_INT");
		iVar1 = ((iParam0 - 7313) - unk_0xCCD6EB3D51BA0D9E((iParam0 - 7313)) * 8) * 8;
	}
	uVar2 = unk_0x9972E0F3B8651981(iVar0, iParam1, iVar1, 8, iParam3);
	return uVar2;
}

int func_52(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	var uVar2;
	
	if (iParam1 == -1)
	{
		iParam1 = func_35();
	}
	iVar0 = 0;
	iVar1 = func_54(iParam0, iParam1);
	uVar2 = func_53(iParam0);
	if (0 != iVar1)
	{
		if (!unk_0x84F15E111A2161E1(iVar1, &iVar0, uVar2, 8, iParam2))
		{
			iVar0 = 0;
		}
	}
	return iVar0;
}

int func_53(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	if (iParam0 >= 384 && iParam0 < 457)
	{
		iVar0 = ((iParam0 - 384) - unk_0xCCD6EB3D51BA0D9E((iParam0 - 384)) * 8) * 8;
	}
	else if (iParam0 >= 457 && iParam0 < 513)
	{
		iVar0 = ((iParam0 - 457) - unk_0xCCD6EB3D51BA0D9E((iParam0 - 457)) * 8) * 8;
	}
	else if (iParam0 >= 1281 && iParam0 < 1305)
	{
		iVar0 = ((iParam0 - 1281) - unk_0xCCD6EB3D51BA0D9E((iParam0 - 1281)) * 8) * 8;
	}
	else if (iParam0 >= 1305 && iParam0 < 1361)
	{
		iVar0 = ((iParam0 - 1305) - unk_0xCCD6EB3D51BA0D9E((iParam0 - 1305)) * 8) * 8;
	}
	else if (iParam0 >= 1361 && iParam0 < 1393)
	{
		iVar0 = ((iParam0 - 1361) - unk_0xCCD6EB3D51BA0D9E((iParam0 - 1361)) * 8) * 8;
	}
	else if (iParam0 >= 1393 && iParam0 < 2919)
	{
		iVar0 = ((iParam0 - 1393) - unk_0xCCD6EB3D51BA0D9E((iParam0 - 1393)) * 8) * 8;
	}
	else if (iParam0 >= 4143 && iParam0 < 4207)
	{
		iVar0 = ((iParam0 - 4143) - unk_0xCCD6EB3D51BA0D9E((iParam0 - 4143)) * 8) * 8;
	}
	else if (iParam0 >= 3879 && iParam0 < 4143)
	{
		iVar0 = ((iParam0 - 3879) - unk_0xCCD6EB3D51BA0D9E((iParam0 - 3879)) * 8) * 8;
	}
	else if (iParam0 >= 4399 && iParam0 < 6028)
	{
		iVar0 = ((iParam0 - 4399) - unk_0xCCD6EB3D51BA0D9E((iParam0 - 4399)) * 8) * 8;
	}
	else if (iParam0 >= 6413 && iParam0 < 7262)
	{
		iVar0 = ((iParam0 - 6413) - unk_0xCCD6EB3D51BA0D9E((iParam0 - 6413)) * 8) * 8;
	}
	else if (iParam0 >= 7262 && iParam0 < 7313)
	{
		iVar0 = ((iParam0 - 7262) - unk_0xCCD6EB3D51BA0D9E((iParam0 - 7262)) * 8) * 8;
	}
	else if (iParam0 >= 7681 && iParam0 < 9361)
	{
		iVar0 = ((iParam0 - 7681) - unk_0xCCD6EB3D51BA0D9E((iParam0 - 7681)) * 8) * 8;
	}
	else if (iParam0 >= 9553 && iParam0 < 15265)
	{
		iVar0 = ((iParam0 - 9553) - unk_0xCCD6EB3D51BA0D9E((iParam0 - 9553)) * 8) * 8;
	}
	else if (iParam0 >= 15265 && iParam0 < 15369)
	{
		iVar0 = ((iParam0 - 15265) - unk_0xCCD6EB3D51BA0D9E((iParam0 - 15265)) * 8) * 8;
	}
	else if (iParam0 >= 7313 && iParam0 < 7321)
	{
		iVar0 = ((iParam0 - 7313) - unk_0xCCD6EB3D51BA0D9E((iParam0 - 7313)) * 8) * 8;
	}
	else if (iParam0 >= 7641 && iParam0 < 7681)
	{
		iVar0 = ((iParam0 - 7641) - unk_0xCCD6EB3D51BA0D9E((iParam0 - 7641)) * 8) * 8;
	}
	else if (iParam0 >= 16010 && iParam0 < 18098)
	{
		iVar0 = ((iParam0 - 16010) - unk_0xCCD6EB3D51BA0D9E((iParam0 - 16010)) * 8) * 8;
	}
	else if (iParam0 >= 18162 && iParam0 < 19018)
	{
		iVar0 = ((iParam0 - 18162) - unk_0xCCD6EB3D51BA0D9E((iParam0 - 18162)) * 8) * 8;
	}
	else if (iParam0 >= 19018 && iParam0 < 22066)
	{
		iVar0 = ((iParam0 - 19018) - unk_0xCCD6EB3D51BA0D9E((iParam0 - 19018)) * 8) * 8;
	}
	else if (iParam0 >= 22194 && iParam0 < 24962)
	{
		iVar0 = ((iParam0 - 22194) - unk_0xCCD6EB3D51BA0D9E((iParam0 - 22194)) * 8) * 8;
	}
	else if (iParam0 >= 25538 && iParam0 < 26810)
	{
		iVar0 = ((iParam0 - 25538) - unk_0xCCD6EB3D51BA0D9E((iParam0 - 25538)) * 8) * 8;
	}
	else if (iParam0 >= 27258 && iParam0 < 28098)
	{
		iVar0 = ((iParam0 - 27258) - unk_0xCCD6EB3D51BA0D9E((iParam0 - 27258)) * 8) * 8;
	}
	else if (iParam0 >= 28483 && iParam0 < 30227)
	{
		iVar0 = ((iParam0 - 28483) - unk_0xCCD6EB3D51BA0D9E((iParam0 - 28483)) * 8) * 8;
	}
	else if (iParam0 >= 30483 && iParam0 < 30515)
	{
		iVar0 = ((iParam0 - 30483) - unk_0xCCD6EB3D51BA0D9E((iParam0 - 30483)) * 8) * 8;
	}
	return iVar0;
}

int func_54(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam1 == -1)
	{
		iParam1 = func_35();
	}
	iVar0 = 0;
	if (iParam0 >= 384 && iParam0 < 457)
	{
		iVar0 = unk_0x169039D5869899DA((iParam0 - 384), 0, 1, iParam1);
	}
	else if (iParam0 >= 457 && iParam0 < 513)
	{
		iVar0 = unk_0x169039D5869899DA((iParam0 - 457), 1, 1, iParam1);
	}
	else if (iParam0 >= 1281 && iParam0 < 1305)
	{
		iVar0 = unk_0x169039D5869899DA((iParam0 - 1281), 0, 0, 0);
	}
	else if (iParam0 >= 1305 && iParam0 < 1361)
	{
		iVar0 = unk_0x169039D5869899DA((iParam0 - 1305), 1, 0, 0);
	}
	else if (iParam0 >= 1361 && iParam0 < 1393)
	{
		iVar0 = unk_0x33259517529FA9DD((iParam0 - 1361), 0, 0, 0);
	}
	else if (iParam0 >= 1393 && iParam0 < 2919)
	{
		iVar0 = unk_0x33259517529FA9DD((iParam0 - 1393), 0, 1, iParam1);
	}
	else if (iParam0 >= 4143 && iParam0 < 4207)
	{
		iVar0 = unk_0x7F2F9520C57D9D66((iParam0 - 4143), 0, 0, 0, "_NGPSTAT_INT");
	}
	else if (iParam0 >= 3879 && iParam0 < 4143)
	{
		iVar0 = unk_0x7F2F9520C57D9D66((iParam0 - 3879), 0, 1, iParam1, "_NGPSTAT_INT");
	}
	else if (iParam0 >= 4399 && iParam0 < 6028)
	{
		iVar0 = unk_0x7F2F9520C57D9D66((iParam0 - 4399), 0, 1, iParam1, "_LRPSTAT_INT");
	}
	else if (iParam0 >= 6413 && iParam0 < 7262)
	{
		iVar0 = unk_0x7F2F9520C57D9D66((iParam0 - 6413), 0, 1, iParam1, "_APAPSTAT_INT");
	}
	else if (iParam0 >= 7262 && iParam0 < 7313)
	{
		iVar0 = unk_0x7F2F9520C57D9D66((iParam0 - 7262), 0, 1, iParam1, "_LR2PSTAT_INT");
	}
	else if (iParam0 >= 7681 && iParam0 < 9361)
	{
		iVar0 = unk_0x7F2F9520C57D9D66((iParam0 - 7681), 0, 1, iParam1, "_BIKEPSTAT_INT");
	}
	else if (iParam0 >= 9553 && iParam0 < 15265)
	{
		iVar0 = unk_0x7F2F9520C57D9D66((iParam0 - 9553), 0, 1, iParam1, "_IMPEXPPSTAT_INT");
	}
	else if (iParam0 >= 15265 && iParam0 < 15369)
	{
		iVar0 = unk_0x7F2F9520C57D9D66((iParam0 - 15265), 0, 1, iParam1, "_GUNRPSTAT_INT");
	}
	else if (iParam0 >= 7313 && iParam0 < 7321)
	{
		iVar0 = unk_0x7F2F9520C57D9D66((iParam0 - 7313), 0, 0, 0, "_NGDLCPSTAT_INT");
	}
	else if (iParam0 >= 7641 && iParam0 < 7681)
	{
		iVar0 = unk_0x7F2F9520C57D9D66((iParam0 - 7641), 0, 1, iParam1, "_NGDLCPSTAT_INT");
	}
	else if (iParam0 >= 16010 && iParam0 < 18098)
	{
		iVar0 = unk_0x7F2F9520C57D9D66((iParam0 - 16010), 0, 1, iParam1, "_DLCSMUGCHARPSTAT_INT");
	}
	else if (iParam0 >= 18162 && iParam0 < 19018)
	{
		iVar0 = unk_0x7F2F9520C57D9D66((iParam0 - 18162), 0, 1, iParam1, "_GANGOPSPSTAT_INT");
	}
	else if (iParam0 >= 19018 && iParam0 < 22066)
	{
		iVar0 = unk_0x7F2F9520C57D9D66((iParam0 - 19018), 0, 1, iParam1, "_BUSINESSBATPSTAT_INT");
	}
	else if (iParam0 >= 22194 && iParam0 < 24962)
	{
		iVar0 = unk_0x7F2F9520C57D9D66((iParam0 - 22194), 0, 1, iParam1, "_ARENAWARSPSTAT_INT");
	}
	else if (iParam0 >= 25538 && iParam0 < 26810)
	{
		iVar0 = unk_0x7F2F9520C57D9D66((iParam0 - 25538), 0, 1, iParam1, "_CASINOPSTAT_INT");
	}
	else if (iParam0 >= 27258 && iParam0 < 28098)
	{
		iVar0 = unk_0x7F2F9520C57D9D66((iParam0 - 27258), 0, 1, iParam1, "_CASINOHSTPSTAT_INT");
	}
	else if (iParam0 >= 28483 && iParam0 < 30227)
	{
		iVar0 = unk_0x7F2F9520C57D9D66((iParam0 - 28483), 0, 1, iParam1, "_SU20PSTAT_INT");
	}
	else if (iParam0 >= 30483 && iParam0 < 30515)
	{
		iVar0 = unk_0x7F2F9520C57D9D66((iParam0 - 30483), 0, 1, iParam1, "_HISLANDPSTAT_INT");
	}
	return iVar0;
}

void func_55(char* sParam0, int iParam1)
{
	unk_0x17751E107423AFE9(sParam0);
	unk_0x1A169149B3D18FCB(0, 0, 1, iParam1);
}

void func_56(char* sParam0)
{
	if (unk_0xDABD547F0DF2906C())
	{
		unk_0xD289B55B6AADBA10(1);
	}
	if (!func_57(sParam0))
	{
		func_55(sParam0, -1);
	}
}

bool func_57(char* sParam0)
{
	unk_0x69476B1CA6A9FF80(sParam0);
	return unk_0x1A3A9FFE5CA6F64B(0);
}

int func_58()
{
	if (func_61(unk_0x460153A63B9477BC()) && !func_59(unk_0x460153A63B9477BC(), 0))
	{
		return 1;
	}
	return 0;
}

bool func_59(int iParam0, bool bParam1)
{
	if (!bParam1)
	{
		if (func_60(iParam0))
		{
			return 0;
		}
	}
	return Global_1630317[iParam0 /*595*/].f_11 != func_39();
}

int func_60(int iParam0)
{
	if (iParam0 != func_39())
	{
		if (Global_1630317[iParam0 /*595*/].f_11 != func_39())
		{
			return Global_1630317[iParam0 /*595*/].f_11 == iParam0;
		}
	}
	return 0;
}

int func_61(int iParam0)
{
	int iVar0;
	
	if (func_63(iParam0))
	{
		iVar0 = func_62(iParam0);
		if ((iVar0 == 3 || iVar0 == 4) || iVar0 == 5)
		{
			return 1;
		}
	}
	return 0;
}

int func_62(int iParam0)
{
	if (iParam0 != func_39())
	{
		return Global_1590682[iParam0 /*883*/].f_274.f_264;
	}
	return 0;
}

int func_63(int iParam0)
{
	if (iParam0 != func_39())
	{
		return Global_1590682[iParam0 /*883*/].f_274.f_264 != 0;
	}
	return 0;
}

int func_64(int iParam0, int iParam1, int iParam2, int iParam3)
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
		iParam2 = func_35();
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

int func_65(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	var uVar2;
	
	iVar0 = 0;
	if (iParam1 == -1)
	{
		iParam1 = func_35();
	}
	iVar1 = func_67(iParam0, iParam1);
	uVar2 = func_66(iParam0);
	if (0 != iVar1)
	{
		iVar0 = unk_0x9FD0AD883E4A7C1E(iVar1, uVar2, iParam2);
	}
	return iVar0;
}

int func_66(int iParam0)
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

int func_67(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam1 == -1)
	{
		iParam1 = func_35();
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

bool func_68(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_88(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
	if (iParam3 > 7)
	{
		if (iParam3 < 12)
		{
			iParam3 = 7;
		}
	}
	Global_21012 = 0;
	Global_21014 = 0;
	Global_21019 = 0;
	Global_21996 = 0;
	Global_21998 = 0;
	Global_22002 = 0;
	Global_2621441 = 0;
	return func_69(sParam2, iParam3, 0);
}

int func_69(char* sParam0, int iParam1, bool bParam2)
{
	Global_21006 = 0;
	if (Global_21005 == 0 || Global_21007 == 2)
	{
		if (Global_21005 != 0)
		{
			if (iParam1 > Global_21007)
			{
				if (Global_21012 == 0)
				{
					unk_0xBE4122AC23440E7D(false);
					Global_19681.f_1 = 3;
					Global_21005 = 0;
					Global_21006 = 1;
					Global_21058 = 0;
					Global_21001 = 0;
					Global_21002 = 0;
					Global_21016 = 0;
					Global_21015 = 0;
					Global_19680 = 0;
				}
				else
				{
					func_87();
					return 0;
				}
			}
			else
			{
				return 0;
			}
		}
		if (unk_0x6A5CC4A2C9D9ED8D())
		{
			return 0;
		}
		if (func_86(8, -1))
		{
			return 0;
		}
		Global_21081 = { Global_21075 };
		func_85();
		Global_20294 = { Global_20459 };
		Global_21011 = Global_21012;
		Global_21018 = Global_21019;
		Global_2621442 = Global_2621441;
		Global_21020 = { Global_21036 };
		Global_21013 = Global_21014;
		Global_21995 = Global_21996;
		Global_22003 = { Global_22009 };
		Global_21997 = Global_21998;
		Global_21999 = Global_22000;
		Global_22001 = Global_22002;
		Global_20624.f_370 = Global_21994;
		Global_20624.f_368 = Global_21992;
		Global_20624.f_369 = Global_21993;
		Global_21001 = Global_21002;
		if (Global_21011)
		{
			unk_0xD2459066EA58CE43(&Global_7551, 20);
			unk_0xD2459066EA58CE43(&Global_7552, 17);
			unk_0xD2459066EA58CE43(&Global_7553, 0);
			if (bParam2)
			{
				func_77();
				if (Global_8356[Global_19681 /*2811*/][0 /*281*/].f_259 == 2)
				{
					if (iParam1 == 13)
					{
					}
					else
					{
						return 0;
					}
				}
				if (Global_19681.f_1 > 3)
				{
					return 0;
				}
			}
			if (Global_19647 == 1)
			{
				return 0;
			}
			if (unk_0x5A228A6A51E757C8(unk_0x460153A63B9477BC()))
			{
				if (unk_0x42A04E707DE50816(unk_0x9B0761B4C3EB8BC7()))
				{
					return 0;
				}
				if (func_76())
				{
					return 0;
				}
				if (unk_0x7587087519CF4F83(unk_0x9B0761B4C3EB8BC7()))
				{
					return 0;
				}
				if (unk_0xCED6B5226244381C(unk_0x9B0761B4C3EB8BC7()))
				{
					return 0;
				}
				if (unk_0xAACBFCE60AF94F2D(unk_0x9B0761B4C3EB8BC7()))
				{
					return 0;
				}
				if (unk_0x02D1369035663875(unk_0x9B0761B4C3EB8BC7(), joaat("gadget_parachute")))
				{
					return 0;
				}
				if (!Global_76833)
				{
					if (unk_0xE72C9284B5143451(unk_0x9B0761B4C3EB8BC7()))
					{
						return 0;
					}
					if (unk_0x5197F8CD4A72E68F(unk_0x460153A63B9477BC()))
					{
						return 0;
					}
					if (unk_0x887D491E579FA61E(unk_0x9B0761B4C3EB8BC7()))
					{
						return 0;
					}
					if (unk_0x4C9EC9A10C274889(unk_0x460153A63B9477BC(), 0))
					{
						return 0;
					}
				}
			}
			if (func_75())
			{
				return 0;
			}
			else
			{
				switch (Global_19681.f_1)
				{
					case 7:
						return 0;
						break;
					
					case 8:
						return 0;
						break;
					
					case 9:
						break;
					
					case 10:
						break;
					
					default:
						break;
				}
				if (unk_0xCE990E643CD9D0E5(Global_7551, 9))
				{
					return 0;
				}
			}
			func_74();
			Global_21015 = bParam2;
		}
		Global_21007 = iParam1;
		StringCopy(&Global_20624, sParam0, 24);
		Global_19871 = 0;
		func_73();
		func_70();
		return 1;
	}
	if (Global_21005 == 5)
	{
		return 0;
	}
	if (iParam1 < Global_21007 || iParam1 == Global_21007)
	{
		return 0;
	}
	if (iParam1 == 2)
	{
	}
	else
	{
		func_87();
	}
	return 0;
}

void func_70()
{
	if (!func_71())
	{
		return;
	}
	if (Global_21011)
	{
		MemCopy(&(Global_1703978.f_1), {Global_20624}, 4);
		Global_1703978 = Global_6866;
		Global_1703978.f_6 = Global_21015;
	}
}

int func_71()
{
	if (!Global_262145.f_28160)
	{
		return 0;
	}
	if (!Global_76833)
	{
		return 0;
	}
	if (unk_0x460153A63B9477BC() == func_39())
	{
		return 0;
	}
	if (func_72(unk_0x460153A63B9477BC()))
	{
		return 0;
	}
	if (unk_0xCE990E643CD9D0E5(Global_1630317[unk_0x460153A63B9477BC() /*595*/].f_1, 7))
	{
		return 0;
	}
	if (unk_0xFC559366953F62B3())
	{
		return 0;
	}
	return 1;
}

bool func_72(int iParam0)
{
	return func_10(iParam0, 20);
}

void func_73()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 69)
	{
		StringCopy(&(Global_19873[iVar0 /*6*/]), "", 24);
		iVar0++;
	}
	unk_0xBE4122AC23440E7D(false);
	Global_21005 = 1;
}

void func_74()
{
	Global_21058 = Global_21057;
	Global_21052 = Global_21053;
	Global_21099 = { Global_21087 };
	Global_21105 = { Global_21093 };
	Global_21060 = Global_21059;
	Global_21129 = { Global_21111 };
	Global_21135 = { Global_21117 };
	Global_21141 = { Global_21123 };
	Global_21147 = { Global_21153 };
	Global_6866 = Global_6867;
	Global_6868 = Global_6869;
	Global_21016 = Global_21017;
	Global_21018 = Global_21019;
	Global_21020 = { Global_21036 };
	Global_21009 = Global_21010;
	Global_22021 = 0;
	Global_21054 = 0;
	Global_21055 = 0;
	unk_0xD2459066EA58CE43(&Global_7552, 16);
}

int func_75()
{
	if (Global_19681.f_1 == 1 || Global_19681.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

int func_76()
{
	int iVar0;
	int iVar1;
	
	if (Global_76833)
	{
		iVar0 = 0;
		unk_0x1386E5E658CE3032(unk_0x9B0761B4C3EB8BC7(), &iVar1, 1);
		if (unk_0x5A228A6A51E757C8(unk_0x460153A63B9477BC()))
		{
			if ((iVar1 == joaat("weapon_sniperrifle") || iVar1 == joaat("weapon_heavysniper")) || iVar1 == joaat("weapon_remotesniper"))
			{
				iVar0 = 1;
			}
		}
		if (unk_0x5BFE1F305D18843B() && iVar0 == 1)
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	if (unk_0x5A228A6A51E757C8(unk_0x460153A63B9477BC()))
	{
		if (unk_0xD15202C6B03220B8(unk_0x9B0761B4C3EB8BC7(), 78, 1))
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	return 1;
}

void func_77()
{
	if (func_84(14))
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
		Global_19681 = func_78();
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

var func_78()
{
	func_79();
	return Global_111858.f_2359.f_539.f_4321;
}

void func_79()
{
	int iVar0;
	
	if (unk_0xAE06B9E39EBDE049(unk_0x9B0761B4C3EB8BC7()))
	{
		if (func_82(Global_111858.f_2359.f_539.f_4321) != unk_0x36FE6D3220816ADA(unk_0x9B0761B4C3EB8BC7()))
		{
			iVar0 = func_81(unk_0x9B0761B4C3EB8BC7());
			if (func_80(iVar0) && (!func_84(14) || Global_110809))
			{
				if (Global_111858.f_2359.f_539.f_4321 != iVar0 && func_80(Global_111858.f_2359.f_539.f_4321))
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

bool func_80(int iParam0)
{
	return iParam0 < 3;
}

int func_81(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0xAE06B9E39EBDE049(iParam0))
	{
		iVar1 = unk_0x36FE6D3220816ADA(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_82(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_82(int iParam0)
{
	if (func_80(iParam0))
	{
		return func_83(iParam0);
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

var func_83(int iParam0)
{
	return Global_1848[iParam0 /*29*/];
}

bool func_84(int iParam0)
{
	return Global_41631 == iParam0;
}

void func_85()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 15)
	{
		Global_20294[iVar0 /*10*/] = 0;
		StringCopy(&(Global_20294[iVar0 /*10*/].f_1), "", 24);
		Global_20294[iVar0 /*10*/].f_7 = 0;
		Global_20294[iVar0 /*10*/].f_8 = 0;
		iVar0++;
	}
	Global_20294.f_161 = -99;
	Global_20294.f_162 = { 0f, 0f, 0f };
}

bool func_86(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 5:
			if (iParam1 > -1)
			{
				return Global_1377236.f_203[iParam1];
			}
			break;
	}
	return unk_0xCE990E643CD9D0E5(Global_1377236.f_1048, iParam0);
}

void func_87()
{
	unk_0x62B2C9892E3E142D();
	Global_22016 = 0;
	if ((unk_0x6B12213471F330A3() || Global_19681.f_1 == 9) || Global_19680 == 1)
	{
		unk_0xBE4122AC23440E7D(false);
		Global_21005 = 6;
		Global_19681.f_1 = 3;
		return;
	}
	if (unk_0x6A5CC4A2C9D9ED8D())
	{
		unk_0xBE4122AC23440E7D(true);
		Global_21005 = 6;
		return;
	}
}

void func_88(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, var uParam5)
{
	Global_20459 = { *uParam0 };
	Global_6867 = iParam1;
	StringCopy(&Global_21075, sParam2, 24);
	Global_21994 = uParam5;
	if (iParam3 == 0)
	{
		Global_21992 = 1;
		Global_21990 = 0;
	}
	else
	{
		Global_21992 = 0;
		Global_21990 = 1;
	}
	if (iParam4 == 0)
	{
		Global_21993 = 1;
		Global_21991 = 0;
	}
	else
	{
		Global_21993 = 0;
		Global_21991 = 1;
	}
}

struct<6> func_89()
{
	struct<6> Var0;
	
	StringCopy(&Var0, "", 24);
	if (unk_0x1037B9D45CE6B788(unk_0x9B0761B4C3EB8BC7(), -1588.977f, 2793.941f, 14.98289f, -1575.664f, 2779.558f, 26.11536f, 29.75f, 0, 1, 0) || unk_0x1037B9D45CE6B788(unk_0x9B0761B4C3EB8BC7(), -2306.916f, 3390.545f, 29.17826f, -2322.245f, 3401.719f, 35.63131f, 36f, 0, 1, 0))
	{
		if (!func_65(15999, -1, -1))
		{
			StringCopy(&Var0, "SMGFZ_WLK1ST", 24);
		}
		else if (!func_65(16002, -1, -1) || func_52(18097, -1, -1) == 0)
		{
			StringCopy(&Var0, "SMGFZ_WLKENT", 24);
		}
	}
	else if (((func_20(unk_0x3E4D3CCC220BDFB1(unk_0x9B0761B4C3EB8BC7(), 0), 3, 1000, 0) || func_19(unk_0x3E4D3CCC220BDFB1(unk_0x9B0761B4C3EB8BC7(), 0), 1000)) || func_100(unk_0x9B0761B4C3EB8BC7())) && func_99(unk_0x9B0761B4C3EB8BC7()))
	{
		if (!func_65(16000, -1, -1))
		{
			StringCopy(&Var0, "SMGFZ_FLY1ST", 24);
		}
		else if (!func_65(16001, -1, -1))
		{
			StringCopy(&Var0, "SMGFZ_FLYENT", 24);
		}
	}
	return Var0;
}

void func_90(var uParam0, int iParam1, struct<3> Param2)
{
	uParam0->f_161 = iParam1;
	uParam0->f_162 = { Param2 };
}

void func_91(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5)
{
	if ((uParam0[iParam1 /*10*/])->f_7 == 1)
	{
	}
	(*uParam0)[iParam1 /*10*/] = iParam2;
	StringCopy(&((uParam0[iParam1 /*10*/])->f_1), sParam3, 24);
	(uParam0[iParam1 /*10*/])->f_7 = 1;
	(uParam0[iParam1 /*10*/])->f_8 = iParam4;
	(uParam0[iParam1 /*10*/])->f_9 = iParam5;
	if (!Global_76833)
	{
		if (!unk_0x5AEB5DDFFAD43CA5(iParam2))
		{
			if ((uParam0[iParam1 /*10*/])->f_8 == 0)
			{
				unk_0x83BBFE5E96C64FBA(iParam2, 0);
			}
			else
			{
				unk_0x83BBFE5E96C64FBA(iParam2, 1);
			}
		}
		if (!unk_0x5AEB5DDFFAD43CA5(iParam2))
		{
			if ((uParam0[iParam1 /*10*/])->f_9 == 0)
			{
				unk_0xE61672E3FEF081AC(iParam2, 0);
			}
			else
			{
				unk_0xE61672E3FEF081AC(iParam2, 1);
			}
		}
	}
}

void func_92(var uParam0, int iParam1)
{
	uParam0->f_161 = -99;
	uParam0->f_162 = { 0f, 0f, 0f };
	if (iParam1 < 0)
	{
	}
}

void func_93(var uParam0, int iParam1)
{
	if ((uParam0[iParam1 /*10*/])->f_7 == 1)
	{
		(uParam0[iParam1 /*10*/])->f_7 = 0;
	}
}

int func_94()
{
	if (Global_21005 != 0 || unk_0x6A5CC4A2C9D9ED8D())
	{
		return 1;
	}
	return 0;
}

void func_95()
{
	Global_19871 = 0;
	func_96();
}

void func_96()
{
	if (unk_0x6A5CC4A2C9D9ED8D())
	{
		unk_0x62B2C9892E3E142D();
		Global_22016 = 0;
		unk_0xBE4122AC23440E7D(true);
		Global_21005 = 6;
		return;
	}
}

int func_97(bool bParam0, bool bParam1)
{
	if (func_22(unk_0x460153A63B9477BC()))
	{
		return 0;
	}
	if (bParam0)
	{
		if (!Local_110.f_178)
		{
			if (unk_0xCE990E643CD9D0E5(Local_110.f_182, 1))
			{
				if (unk_0x4DC4117F94CD5B84(unk_0x460153A63B9477BC()))
				{
					if (!func_65(16000, -1, -1) || !func_65(16001, -1, -1))
					{
						return 1;
					}
				}
			}
		}
	}
	else if (bParam1)
	{
		if (!Local_110.f_179)
		{
			if (unk_0x4DC4117F94CD5B84(unk_0x460153A63B9477BC()) && unk_0x1A3D0DF92BF7D8C4(unk_0x460153A63B9477BC()) == 0)
			{
				if (!unk_0x47DBF174A0CB9D55(unk_0x9B0761B4C3EB8BC7(), 0) || func_98())
				{
					if (unk_0x1037B9D45CE6B788(unk_0x9B0761B4C3EB8BC7(), -1588.977f, 2793.941f, 14.98289f, -1575.664f, 2779.558f, 26.11536f, 29.75f, 0, 1, 0))
					{
						if (!func_65(15999, -1, -1) || !func_65(16002, -1, -1))
						{
							if (unk_0xEF7858F25585F853(unk_0x9B0761B4C3EB8BC7()) >= -25f && unk_0xEF7858F25585F853(unk_0x9B0761B4C3EB8BC7()) <= 125f)
							{
								return 1;
							}
						}
					}
					else if (unk_0x1037B9D45CE6B788(unk_0x9B0761B4C3EB8BC7(), -2306.916f, 3390.545f, 29.17826f, -2322.245f, 3401.719f, 35.63131f, 36f, 0, 1, 0))
					{
						if (!func_65(15999, -1, -1) || func_52(18097, -1, -1) == 0)
						{
							if (unk_0xEF7858F25585F853(unk_0x9B0761B4C3EB8BC7()) >= 160f && unk_0xEF7858F25585F853(unk_0x9B0761B4C3EB8BC7()) <= 290f)
							{
								return 1;
							}
						}
					}
				}
			}
		}
	}
	return 0;
}

int func_98()
{
	int iVar0;
	
	if (unk_0x47DBF174A0CB9D55(unk_0x9B0761B4C3EB8BC7(), 0))
	{
		iVar0 = unk_0xA5D5B1042E8F47BD(unk_0x9B0761B4C3EB8BC7(), 0);
		if (unk_0x93846124A64E7DEC(iVar0))
		{
			if (func_6(iVar0))
			{
				if (!func_5(iVar0, 1) && !func_4(iVar0))
				{
					return 0;
				}
			}
		}
	}
	return 1;
}

int func_99(int iParam0)
{
	if (unk_0xAABDC18B9F6EC79D(iParam0) || unk_0x94BF5C4EB0D40E9E(iParam0))
	{
		return 1;
	}
	return 0;
}

int func_100(int iParam0)
{
	if (unk_0xAE06B9E39EBDE049(iParam0) && func_101(iParam0))
	{
		if ((unk_0x1037B9D45CE6B788(iParam0, -2013.3f, 2878.6f, 1000f, -2864.6f, 3357.6f, 31f, 400f, 0, 1, 0) || unk_0x1037B9D45CE6B788(iParam0, -1700f, 3150f, 1000f, -2039f, 3342f, 30f, 175f, 0, 1, 0)) || unk_0x1037B9D45CE6B788(iParam0, -1950f, 2786f, 1000f, -1856f, 3141f, 31f, 270f, 0, 1, 0))
		{
			return 1;
		}
	}
	return 0;
}

int func_101(int iParam0)
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

void func_102()
{
	if (Local_110.f_180)
	{
		if (!func_106(&(Local_110.f_183)))
		{
			func_105(&(Local_110.f_183), 0, 0);
		}
		else if (!func_104(&(Local_110.f_183), 17000, 0))
		{
			if (!func_57("AB_ENTRY_HT"))
			{
				func_55("AB_ENTRY_HT", -1);
			}
		}
		else if (func_104(&(Local_110.f_183), 17000, 0))
		{
			if (func_57("AB_ENTRY_HT"))
			{
				unk_0xD289B55B6AADBA10(1);
			}
			func_103(&(Local_110.f_183));
			Local_110.f_180 = 0;
		}
	}
}

void func_103(var uParam0)
{
	uParam0->f_1 = 0;
}

int func_104(var uParam0, int iParam1, bool bParam2)
{
	if (iParam1 == -1)
	{
		return 1;
	}
	func_105(uParam0, bParam2, 0);
	if (unk_0x25DDB354A40FFCDB() && !bParam2)
	{
		if (unk_0x44F29CF6A0675F4F(unk_0x624736CA66E14161(unk_0x6CAAB7E78B5D978A(), *uParam0)) >= iParam1)
		{
			return 1;
		}
	}
	else if (unk_0x44F29CF6A0675F4F(unk_0x624736CA66E14161(unk_0x578C4EF320340AF7(), *uParam0)) >= iParam1)
	{
		return 1;
	}
	return 0;
}

void func_105(var uParam0, bool bParam1, bool bParam2)
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

bool func_106(var uParam0)
{
	return uParam0->f_1;
}

void func_107()
{
	if (unk_0x4DC4117F94CD5B84(unk_0x460153A63B9477BC()))
	{
		if ((func_20(unk_0x3E4D3CCC220BDFB1(unk_0x9B0761B4C3EB8BC7(), 0), 3, 1000, 0) || func_19(unk_0x3E4D3CCC220BDFB1(unk_0x9B0761B4C3EB8BC7(), 0), 1000)) || func_100(unk_0x9B0761B4C3EB8BC7()))
		{
			if (!unk_0xCE990E643CD9D0E5(Local_110.f_182, 0))
			{
				if ((((func_99(unk_0x9B0761B4C3EB8BC7()) && unk_0xA16974805191D19C(unk_0xA5D5B1042E8F47BD(unk_0x9B0761B4C3EB8BC7(), 0))) && unk_0x1A3D0DF92BF7D8C4(unk_0x460153A63B9477BC()) == 0) && func_98()) && !Global_1689648)
				{
					if (!unk_0xCE990E643CD9D0E5(Local_110.f_182, 1) && !unk_0xCE990E643CD9D0E5(Local_110.f_182, 3))
					{
						unk_0xBE20AB8238688965(&(Local_110.f_182), 1);
					}
				}
				unk_0xBE20AB8238688965(&(Local_110.f_182), 0);
			}
		}
		else
		{
			if (unk_0xCE990E643CD9D0E5(Local_110.f_182, 0))
			{
				unk_0xD2459066EA58CE43(&(Local_110.f_182), 0);
			}
			if (unk_0xCE990E643CD9D0E5(Local_110.f_182, 1))
			{
				unk_0xD2459066EA58CE43(&(Local_110.f_182), 1);
			}
			if (unk_0xCE990E643CD9D0E5(Local_110.f_182, 3))
			{
				unk_0xD2459066EA58CE43(&(Local_110.f_182), 3);
			}
			if (Global_1689648)
			{
				Global_1689648 = 0;
			}
		}
	}
}

int func_108(int iParam0)
{
	if (func_25(iParam0) == 233)
	{
		return func_109(iParam0);
	}
	return -1;
}

int func_109(int iParam0)
{
	if (func_26(iParam0, 0))
	{
		return Global_1630317[iParam0 /*595*/].f_11.f_181;
	}
	return -1;
}

int func_110()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (func_61(unk_0x460153A63B9477BC()))
	{
		return 1;
	}
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar1 = unk_0xF1110FE23C67293A(iVar0);
		if (func_38(iVar1, 0, 1))
		{
			if (iVar1 != unk_0x460153A63B9477BC())
			{
				if (func_111(unk_0x1FA7B77001D60F9D(unk_0x460153A63B9477BC()), unk_0x1FA7B77001D60F9D(iVar1)))
				{
					iVar2 = unk_0xA5D5B1042E8F47BD(unk_0x1FA7B77001D60F9D(iVar1), 0);
					if (unk_0x10D3F7E169A49C44(iVar2, -1, 0) == unk_0x1FA7B77001D60F9D(iVar1))
					{
						if (func_61(iVar1))
						{
							return 1;
						}
					}
				}
			}
		}
		iVar0++;
	}
	return 0;
}

bool func_111(int iParam0, int iParam1)
{
	if (iParam0 == iParam1)
	{
		return 1;
	}
	if (!unk_0x47DBF174A0CB9D55(iParam0, 0) || !unk_0x47DBF174A0CB9D55(iParam1, 0))
	{
		return 0;
	}
	return unk_0xA5D5B1042E8F47BD(iParam0, 0) == unk_0xA5D5B1042E8F47BD(iParam1, 0);
}

void func_112(int iParam0)
{
	int iVar0;
	
	if (!unk_0x3D70CCF2C9B362CD(Local_85[iParam0]))
	{
		return;
	}
	iVar0 = unk_0x3C6C6327BA564AEE(Local_85[iParam0]);
	if (unk_0xA59F96B50B97E63C(iVar0, 0))
	{
		return;
	}
	switch (Local_85.f_21[iParam0])
	{
		case 0:
			if (!func_48(Local_109[unk_0x59E2AD1A8ACEDA31() /*8*/].f_1[iParam0], 64))
			{
				Local_109[unk_0x59E2AD1A8ACEDA31() /*8*/].f_1[iParam0] = 0;
				func_47(&(Local_109[unk_0x59E2AD1A8ACEDA31() /*8*/].f_1[iParam0]), 64);
			}
			break;
		
		case 1:
			if (!func_48(Local_109[unk_0x59E2AD1A8ACEDA31() /*8*/].f_1[iParam0], 1))
			{
				if (!unk_0xA59F96B50B97E63C(unk_0x9B0761B4C3EB8BC7(), 0))
				{
					if (vdist2(unk_0x3E4D3CCC220BDFB1(unk_0x9B0761B4C3EB8BC7(), 1), unk_0x3E4D3CCC220BDFB1(iVar0, 1)) <= 900f)
					{
						func_47(&(Local_109[unk_0x59E2AD1A8ACEDA31() /*8*/].f_1[iParam0]), 1);
					}
				}
			}
			break;
		
		case 2:
			if ((!func_48(Local_109[unk_0x59E2AD1A8ACEDA31() /*8*/].f_1[iParam0], 2) && vdist2(unk_0x3E4D3CCC220BDFB1(unk_0x9B0761B4C3EB8BC7(), 1), unk_0x3E4D3CCC220BDFB1(iVar0, 1)) <= 900f) && !func_22(unk_0x460153A63B9477BC()))
			{
				func_91(&(Local_110.f_7), 4, iVar0, "ARMY_Guard01", 0, 1);
				func_117(&(Local_110.f_7), "ARMYAUD", "ARMY_WRN1", 12, 0, 0, 0);
				func_47(&(Local_109[unk_0x59E2AD1A8ACEDA31() /*8*/].f_1[iParam0]), 2);
			}
			break;
		
		case 3:
			if (!func_48(Local_109[unk_0x59E2AD1A8ACEDA31() /*8*/].f_1[iParam0], 4))
			{
				if (func_116(iParam0))
				{
					unk_0xDEA135D03FA041A8(iVar0, func_115(iParam0), -1, 0);
				}
				if (func_114(iParam0, 1630799643))
				{
					func_47(&(Local_109[unk_0x59E2AD1A8ACEDA31() /*8*/].f_1[iParam0]), 4);
				}
			}
			break;
		
		case 4:
			if ((!func_48(Local_109[unk_0x59E2AD1A8ACEDA31() /*8*/].f_1[iParam0], 8) && vdist2(unk_0x3E4D3CCC220BDFB1(unk_0x9B0761B4C3EB8BC7(), 0), unk_0x3E4D3CCC220BDFB1(iVar0, 1)) <= 900f) && unk_0x1A3D0DF92BF7D8C4(unk_0x460153A63B9477BC()) < 1)
			{
				if (!func_17(&Local_110))
				{
					func_14(&Local_110);
				}
				if (func_11(&Local_110) >= 7f && !func_22(unk_0x460153A63B9477BC()))
				{
					func_47(&(Local_109[unk_0x59E2AD1A8ACEDA31() /*8*/].f_1[iParam0]), 8);
					func_117(&(Local_110.f_7), "ARMYAUD", "ARMY_WRN1a", 12, 0, 0, 0);
				}
			}
			else if (func_17(&Local_110))
			{
				func_1(&Local_110);
			}
			if (!func_48(Local_109[unk_0x59E2AD1A8ACEDA31() /*8*/].f_1[iParam0], 16))
			{
				if (func_113(iParam0) && vdist2(unk_0x3E4D3CCC220BDFB1(unk_0x9B0761B4C3EB8BC7(), 0), unk_0x3E4D3CCC220BDFB1(iVar0, 1)) <= 900f)
				{
					func_47(&(Local_109[unk_0x59E2AD1A8ACEDA31() /*8*/].f_1[iParam0]), 16);
					if (!func_160())
					{
						unk_0x3A968BA0657CAB7F(unk_0x460153A63B9477BC(), 36, unk_0xC84BD8DB346E6619(4));
					}
					else
					{
						unk_0x3A968BA0657CAB7F(unk_0x460153A63B9477BC(), 36, unk_0xC84BD8DB346E6619(Global_262145.f_21406));
					}
				}
			}
			if (func_48(Local_109[unk_0x59E2AD1A8ACEDA31() /*8*/].f_1[iParam0], 1))
			{
				if (!unk_0xA59F96B50B97E63C(unk_0x9B0761B4C3EB8BC7(), 0))
				{
					if (vdist2(unk_0x3E4D3CCC220BDFB1(unk_0x9B0761B4C3EB8BC7(), 1), unk_0x3E4D3CCC220BDFB1(iVar0, 1)) > 900f)
					{
						func_43(&(Local_109[unk_0x59E2AD1A8ACEDA31() /*8*/].f_1[iParam0]), 1);
					}
				}
			}
			break;
		
		case 5:
			if (!func_48(Local_109[unk_0x59E2AD1A8ACEDA31() /*8*/].f_1[iParam0], 16))
			{
				if (func_113(iParam0) && vdist2(unk_0x3E4D3CCC220BDFB1(unk_0x9B0761B4C3EB8BC7(), 0), unk_0x3E4D3CCC220BDFB1(iVar0, 1)) <= 900f)
				{
					func_47(&(Local_109[unk_0x59E2AD1A8ACEDA31() /*8*/].f_1[iParam0]), 16);
					if (!func_160())
					{
						unk_0x3A968BA0657CAB7F(unk_0x460153A63B9477BC(), 36, (unk_0xC84BD8DB346E6619(4) - unk_0xC84BD8DB346E6619(unk_0x1A3D0DF92BF7D8C4(unk_0x460153A63B9477BC()))));
					}
					else
					{
						unk_0x3A968BA0657CAB7F(unk_0x460153A63B9477BC(), 36, (unk_0xC84BD8DB346E6619(Global_262145.f_21406) - unk_0xC84BD8DB346E6619(unk_0x1A3D0DF92BF7D8C4(unk_0x460153A63B9477BC()))));
					}
				}
			}
			if (func_48(Local_109[unk_0x59E2AD1A8ACEDA31() /*8*/].f_1[iParam0], 1))
			{
				if (!unk_0xA59F96B50B97E63C(unk_0x9B0761B4C3EB8BC7(), 0))
				{
					if (vdist2(unk_0x3E4D3CCC220BDFB1(unk_0x9B0761B4C3EB8BC7(), 1), unk_0x3E4D3CCC220BDFB1(iVar0, 1)) > 900f)
					{
						func_43(&(Local_109[unk_0x59E2AD1A8ACEDA31() /*8*/].f_1[iParam0]), 1);
					}
				}
			}
			if (!func_114(iParam0, 1630799643))
			{
				if (func_116(iParam0))
				{
					unk_0xDEA135D03FA041A8(iVar0, func_115(iParam0), -1, 0);
				}
			}
			break;
		
		case 6:
			break;
		
		case 7:
			if (func_48(Local_109[unk_0x59E2AD1A8ACEDA31() /*8*/].f_1[iParam0], 4))
			{
				if (func_116(iParam0))
				{
					unk_0x9B94F6169B0DAEFD(iVar0);
				}
				if (!func_114(iParam0, 1435919172))
				{
					func_43(&(Local_109[unk_0x59E2AD1A8ACEDA31() /*8*/].f_1[iParam0]), 4);
					func_43(&(Local_109[unk_0x59E2AD1A8ACEDA31() /*8*/].f_1[iParam0]), 64);
				}
			}
			break;
	}
}

int func_113(int iParam0)
{
	int iVar0;
	
	if (!unk_0x3D70CCF2C9B362CD(Local_85[iParam0]))
	{
		return 0;
	}
	iVar0 = unk_0x3C6C6327BA564AEE(Local_85[iParam0]);
	if (unk_0xA59F96B50B97E63C(iVar0, 0))
	{
		return 0;
	}
	if (unk_0xA59F96B50B97E63C(unk_0x9B0761B4C3EB8BC7(), 0))
	{
		return 0;
	}
	if (unk_0x7922FF28ED63354A(unk_0x9B0761B4C3EB8BC7()))
	{
		return 1;
	}
	if (unk_0x2311EB213A0CB707(unk_0x460153A63B9477BC(), iVar0))
	{
		return 1;
	}
	if (unk_0x5E5402F6D3B26AFB(unk_0x460153A63B9477BC(), iVar0))
	{
		return 1;
	}
	if (vdist2(unk_0x3E4D3CCC220BDFB1(unk_0x9B0761B4C3EB8BC7(), 1), unk_0x3E4D3CCC220BDFB1(iVar0, 1)) <= 64f)
	{
		return 1;
	}
	return 0;
}

int func_114(int iParam0, int iParam1)
{
	int iVar0;
	
	if (!unk_0x3D70CCF2C9B362CD(Local_85[iParam0]))
	{
		return 1;
	}
	iVar0 = unk_0x3C6C6327BA564AEE(Local_85[iParam0]);
	if (unk_0xA59F96B50B97E63C(iVar0, 0))
	{
		return 1;
	}
	if (unk_0x16BC17A8EDC701A2(iVar0, iParam1) != 1 && unk_0x16BC17A8EDC701A2(iVar0, iParam1) != 0)
	{
		return 0;
	}
	return 1;
}

int func_115(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	float fVar3;
	float fVar4;
	
	fVar3 = 1E+11f;
	iVar0 = 0;
	while (iVar0 < unk_0xEFA28384DDD283E1())
	{
		if (unk_0xBD09DF93F957A0CF(unk_0x628A51AC66E80772(iVar0)))
		{
			iVar2 = unk_0x1FA7B77001D60F9D(unk_0x9019589211A13B02(unk_0x628A51AC66E80772(iVar0)));
			if (!unk_0xA59F96B50B97E63C(iVar2, 0))
			{
				fVar4 = vdist2(unk_0x3E4D3CCC220BDFB1(iVar2, 1), unk_0x3E4D3CCC220BDFB1(unk_0x62D2FF718BC7717D(Local_85[iParam0]), 1));
				if (fVar4 < fVar3)
				{
					iVar1 = iVar2;
					fVar3 = fVar4;
				}
			}
		}
		iVar0++;
	}
	return iVar1;
}

int func_116(int iParam0)
{
	int iVar0;
	
	if (!unk_0x3D70CCF2C9B362CD(Local_85[iParam0]))
	{
		return 0;
	}
	iVar0 = unk_0x3C6C6327BA564AEE(Local_85[iParam0]);
	if (unk_0xA59F96B50B97E63C(iVar0, 0))
	{
		return 0;
	}
	if (!unk_0xAA5B806352173DEA(iVar0))
	{
		return 0;
	}
	return 1;
}

int func_117(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_88(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
	if (iParam3 > 7)
	{
		if (iParam3 < 12)
		{
			iParam3 = 7;
		}
	}
	Global_21012 = 0;
	Global_21014 = 0;
	Global_21019 = 0;
	Global_21996 = 0;
	Global_21998 = 0;
	Global_22002 = 0;
	Global_2621441 = 1;
	return func_69(sParam2, iParam3, 0);
}

bool func_118(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

int func_119()
{
	if (!unk_0x7D167B9A0CCDA347(joaat("s_m_y_marine_01")))
	{
		return 0;
	}
	if (!unk_0x7D167B9A0CCDA347(joaat("lazer")))
	{
		return 0;
	}
	if (!unk_0x7D167B9A0CCDA347(joaat("s_m_y_pilot_01")))
	{
		return 0;
	}
	return 1;
}

void func_120(var uParam0, int iParam1)
{
	func_121(uParam0, iParam1);
}

void func_121(var uParam0, var uParam1)
{
	*uParam0 = (*uParam0 || uParam1);
}

int func_122(int iParam0)
{
	if (func_30(iParam0) == 236 || func_30(iParam0) == 150)
	{
		return 1;
	}
	return 0;
}

bool func_123()
{
	return unk_0xCE990E643CD9D0E5(Global_1590682[unk_0x460153A63B9477BC() /*883*/].f_39.f_18, 0);
}

int func_124(int iParam0, bool bParam1, bool bParam2)
{
	if (bParam1)
	{
		if (func_125(iParam0))
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

bool func_125(int iParam0)
{
	return func_126(iParam0);
}

bool func_126(int iParam0)
{
	return unk_0xCE990E643CD9D0E5(Global_1590682[iParam0 /*883*/].f_13.f_1, 0);
}

void func_127()
{
	unk_0x78FCB2E22C41B9D5(joaat("s_m_y_marine_01"));
	unk_0x78FCB2E22C41B9D5(joaat("lazer"));
	unk_0x78FCB2E22C41B9D5(joaat("s_m_y_pilot_01"));
}

int func_128()
{
	int iVar0;
	
	switch (Local_85.f_19)
	{
		case 0:
			if (func_150())
			{
				Local_85.f_19 = 1;
			}
			break;
		
		case 1:
			if (func_149())
			{
				Local_85.f_19 = 2;
			}
			break;
		
		case 2:
			if (((((((func_124(unk_0x460153A63B9477BC(), 1, 0) || func_123()) || func_25(unk_0x460153A63B9477BC()) == 225) || func_25(unk_0x460153A63B9477BC()) == 233) || func_122(unk_0x460153A63B9477BC())) || func_21()) || Global_1574416) || (unk_0xFC559366953F62B3() && func_8()))
			{
				func_120(&(Local_85.f_20), 1);
				Local_85.f_19 = 3;
			}
			else if (func_147())
			{
				func_120(&(Local_85.f_20), 1);
				Local_85.f_19 = 3;
			}
			break;
		
		case 3:
			if (!func_124(unk_0x460153A63B9477BC(), 1, 0) && !func_123())
			{
				iVar0 = 0;
				while (iVar0 < 2)
				{
					func_144(iVar0);
					iVar0++;
				}
				iVar0 = 0;
				while (iVar0 < 3)
				{
					func_131(iVar0);
					iVar0++;
				}
			}
			if (((((func_25(unk_0x460153A63B9477BC()) == 225 || func_25(unk_0x460153A63B9477BC()) == 233) || func_122(unk_0x460153A63B9477BC())) || Global_1574416) || func_21()) || (unk_0xFC559366953F62B3() && func_8()))
			{
				func_130();
			}
			if (func_129())
			{
				Local_85.f_19 = 4;
			}
			break;
		
		case 4:
			func_130();
			return 1;
			break;
	}
	return 0;
}

int func_129()
{
	if (unk_0xB9E6DF0411C3488E() > 1)
	{
		return 0;
	}
	if (vdist2(unk_0x3E4D3CCC220BDFB1(unk_0x9B0761B4C3EB8BC7(), 0), -2076.374f, 3112.294f, 33.13584f) >= 1030225f)
	{
		return 1;
	}
	return 0;
}

void func_130()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0;
	while (iVar0 < 2)
	{
		if (unk_0x3D70CCF2C9B362CD(Local_85[iVar0]))
		{
			iVar1 = unk_0x3C6C6327BA564AEE(Local_85[iVar0]);
			if (!unk_0xA59F96B50B97E63C(iVar1, 0))
			{
				unk_0x2481907DEE6B85EA(&iVar1);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (unk_0x3D70CCF2C9B362CD(Local_85.f_3[iVar0 /*5*/].f_1))
		{
			iVar1 = unk_0x3C6C6327BA564AEE(Local_85.f_3[iVar0 /*5*/].f_1);
			if (!unk_0xA59F96B50B97E63C(iVar1, 0))
			{
				unk_0x2481907DEE6B85EA(&iVar1);
			}
		}
		if (unk_0x3D70CCF2C9B362CD(Local_85.f_3[iVar0 /*5*/]))
		{
			iVar2 = unk_0x770D3B2B4702434A(Local_85.f_3[iVar0 /*5*/]);
			if (!unk_0xA59F96B50B97E63C(iVar2, 0))
			{
				unk_0xE730EAF558C97567(&iVar2);
			}
		}
		iVar0++;
	}
}

void func_131(int iParam0)
{
	int iVar0;
	struct<3> Var1;
	int iVar2;
	struct<3> Var3;
	int iVar4;
	
	if (Local_85.f_3[iParam0 /*5*/].f_2 > 2)
	{
		if (unk_0x3D70CCF2C9B362CD(Local_85.f_3[iParam0 /*5*/].f_1))
		{
			if (!unk_0xA59F96B50B97E63C(unk_0x3C6C6327BA564AEE(Local_85.f_3[iParam0 /*5*/].f_1), 0))
			{
				iVar0 = unk_0x3C6C6327BA564AEE(Local_85.f_3[iParam0 /*5*/].f_1);
				Var1 = { unk_0x3E4D3CCC220BDFB1(iVar0, 1) };
				if (Var1.f_2 <= -150f)
				{
					unk_0x2481907DEE6B85EA(&iVar0);
					if (unk_0x3D70CCF2C9B362CD(Local_85.f_3[iParam0 /*5*/]))
					{
						if (!unk_0xA59F96B50B97E63C(unk_0x770D3B2B4702434A(Local_85.f_3[iParam0 /*5*/]), 0))
						{
							iVar2 = unk_0x770D3B2B4702434A(Local_85.f_3[iParam0 /*5*/]);
							unk_0xE730EAF558C97567(&iVar2);
						}
					}
				}
			}
		}
	}
	switch (Local_85.f_3[iParam0 /*5*/].f_2)
	{
		case 0:
			if (func_143(iParam0, 16))
			{
				Local_85.f_3[iParam0 /*5*/].f_4 = -1;
				Local_85.f_3[iParam0 /*5*/].f_2 = 1;
			}
			break;
		
		case 1:
			if (func_141(iParam0))
			{
				Local_85.f_3[iParam0 /*5*/].f_2 = 2;
			}
			break;
		
		case 2:
			Var3 = { func_140(iParam0) };
			if (!func_139(Var3))
			{
				if (!unk_0x8FDBEAE18013EA75(Var3, 20f) && !unk_0x9A70B1BD2A5BA09C(Var3, 20f))
				{
					if (func_134(Var3, unk_0xEF7858F25585F853(unk_0x1FA7B77001D60F9D(Local_85.f_3[iParam0 /*5*/].f_4)), iParam0))
					{
						Local_85.f_3[iParam0 /*5*/].f_2 = 3;
					}
				}
			}
			break;
		
		case 3:
			if (func_143(iParam0, 2))
			{
				Local_85.f_3[iParam0 /*5*/].f_2 = 4;
			}
			break;
		
		case 4:
			iVar4 = unk_0x1FA7B77001D60F9D(Local_85.f_3[iParam0 /*5*/].f_4);
			if (!unk_0xAE06B9E39EBDE049(iVar4))
			{
				Local_85.f_3[iParam0 /*5*/].f_2 = 5;
			}
			else if (unk_0xA59F96B50B97E63C(iVar4, 0))
			{
				Local_85.f_3[iParam0 /*5*/].f_2 = 5;
			}
			else if (unk_0xAABDC18B9F6EC79D(iVar4) || unk_0x94BF5C4EB0D40E9E(iVar4))
			{
				if (func_133(unk_0xA5D5B1042E8F47BD(iVar4, 0)))
				{
					Local_85.f_3[iParam0 /*5*/].f_2 = 5;
				}
			}
			break;
		
		case 5:
			if (func_143(iParam0, 8))
			{
				Local_85.f_3[iParam0 /*5*/].f_2 = 6;
				Local_85.f_3[iParam0 /*5*/].f_4 = -1;
			}
			break;
		
		case 6:
			if (!func_132(iParam0, 16))
			{
				Local_85.f_3[iParam0 /*5*/].f_2 = 0;
			}
			if (func_141(iParam0))
			{
				Local_85.f_3[iParam0 /*5*/].f_2 = 3;
			}
			break;
	}
}

int func_132(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < unk_0xEFA28384DDD283E1())
	{
		if (unk_0xBD09DF93F957A0CF(unk_0x628A51AC66E80772(iVar0)))
		{
			if (func_48(Local_109[iVar0 /*8*/].f_4[iParam0], iParam1))
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_133(int iParam0)
{
	if (unk_0xAE06B9E39EBDE049(iParam0))
	{
		if (unk_0xA59F96B50B97E63C(iParam0, 0))
		{
			return 1;
		}
		else if (!unk_0x80FF6C016CDB0FAF(iParam0, 0))
		{
			if (!unk_0x0922C2E075A5F18C(iParam0))
			{
				return 1;
			}
		}
	}
	else
	{
		return 1;
	}
	return 0;
}

int func_134(struct<3> Param0, float fParam1, int iParam2)
{
	int iVar0;
	
	if (!unk_0xAFF96FDC3971E7EA())
	{
		return 1;
	}
	iVar0 = 1;
	if (!unk_0x3D70CCF2C9B362CD(Local_85.f_3[iParam2 /*5*/]))
	{
		if (!func_136(&(Local_85.f_3[iParam2 /*5*/]), joaat("lazer"), Param0, fParam1, 1, 1, 1, 0, 1, 1, 0, 0, 0, 0))
		{
			iVar0 = 0;
		}
		else
		{
			unk_0xEE6FDB1E2B95E783(unk_0x770D3B2B4702434A(Local_85.f_3[iParam2 /*5*/]), 3);
		}
	}
	if (unk_0x3D70CCF2C9B362CD(Local_85.f_3[iParam2 /*5*/]))
	{
		if (!unk_0x3D70CCF2C9B362CD(Local_85.f_3[iParam2 /*5*/].f_1))
		{
			if (!func_135(&(Local_85.f_3[iParam2 /*5*/].f_1), Local_85.f_3[iParam2 /*5*/], 29, joaat("s_m_y_pilot_01"), -1, 1, 1, 1))
			{
				iVar0 = 0;
			}
			else
			{
				unk_0x72A1E21C9AEEFB27(unk_0x3C6C6327BA564AEE(Local_85.f_3[iParam2 /*5*/].f_1), joaat("vehicle_weapon_space_rocket"));
				unk_0xBF0DD7DAFAF15103(unk_0x3C6C6327BA564AEE(Local_85.f_3[iParam2 /*5*/].f_1), false);
			}
		}
	}
	else
	{
		iVar0 = 0;
	}
	return iVar0;
}

int func_135(var uParam0, var uParam1, int iParam2, int iParam3, int iParam4, bool bParam5, int iParam6, int iParam7)
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

int func_136(var uParam0, int iParam1, struct<3> Param2, float fParam3, int iParam4, int iParam5, bool bParam6, bool bParam7, int iParam8, bool bParam9, bool bParam10, bool bParam11, int iParam12, bool bParam13)
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
			func_137(Param2, fParam3, iParam1, iVar1);
			return 1;
		}
	}
	return 0;
}

void func_137(struct<3> Param0, float fParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	if (func_138(unk_0x460153A63B9477BC(), Param0, iParam2) > -1)
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

int func_138(int iParam0, struct<3> Param1, int iParam2)
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

int func_139(struct<3> Param0)
{
	if ((Param0.x == 0f && Param0.f_1 == 0f) && Param0.f_2 == 0f)
	{
		return 1;
	}
	return 0;
}

Vector3 func_140(int iParam0)
{
	int iVar0;
	struct<3> Var1;
	
	iVar0 = unk_0x1FA7B77001D60F9D(Local_85.f_3[iParam0 /*5*/].f_4);
	if (unk_0xA59F96B50B97E63C(iVar0, 0))
	{
		return 0f, 0f, 0f;
	}
	Var1 = { unk_0x1BAE5C94E38E44FE(unk_0x3E4D3CCC220BDFB1(iVar0, 1), unk_0xEF7858F25585F853(iVar0), 0f, -250f, (40f * to_float(iParam0))) };
	if (Var1.f_2 < 100f)
	{
		Var1.f_2 = 100f;
	}
	return Var1;
}

int func_141(int iParam0)
{
	int iVar0;
	int iVar1;
	struct<3> Var2;
	
	iVar0 = 0;
	while (iVar0 < unk_0xEFA28384DDD283E1())
	{
		if (unk_0xBD09DF93F957A0CF(unk_0x628A51AC66E80772(iVar0)))
		{
			iVar1 = unk_0x1FA7B77001D60F9D(unk_0x9019589211A13B02(unk_0x628A51AC66E80772(iVar0)));
			if (!func_142(unk_0x9019589211A13B02(unk_0x628A51AC66E80772(iVar0))))
			{
				if (unk_0xAABDC18B9F6EC79D(iVar1) || unk_0x94BF5C4EB0D40E9E(iVar1))
				{
					if (unk_0x1A3D0DF92BF7D8C4(unk_0x9019589211A13B02(unk_0x628A51AC66E80772(iVar0))) >= 4)
					{
						Var2 = { unk_0x3E4D3CCC220BDFB1(iVar1, 0) };
						if (func_20(Var2, 3, 1000, 0) && Var2.f_2 > 90f)
						{
							Local_85.f_3[iParam0 /*5*/].f_4 = unk_0x9019589211A13B02(unk_0x628A51AC66E80772(iVar0));
							return 1;
						}
					}
				}
			}
		}
		iVar0++;
	}
	return 0;
}

int func_142(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = unk_0x1FA7B77001D60F9D(iParam0);
	if (!unk_0xAE06B9E39EBDE049(iVar0))
	{
		return 1;
	}
	if (unk_0xA59F96B50B97E63C(iVar0, 0))
	{
		return 1;
	}
	iVar1 = 0;
	while (iVar1 < 3)
	{
		iVar2 = unk_0x1FA7B77001D60F9D(Local_85.f_3[iVar1 /*5*/].f_4);
		if (unk_0xAE06B9E39EBDE049(iVar2))
		{
			if (iParam0 == Local_85.f_3[iVar1 /*5*/].f_4)
			{
				return 1;
			}
		}
		iVar1++;
	}
	return 0;
}

int func_143(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < unk_0xEFA28384DDD283E1())
	{
		if (unk_0xBD09DF93F957A0CF(unk_0x628A51AC66E80772(iVar0)))
		{
			if (!func_48(Local_109[iVar0 /*8*/].f_4[iParam0], iParam1))
			{
				return 0;
			}
		}
		iVar0++;
	}
	return 1;
}

void func_144(int iParam0)
{
	switch (Local_85.f_21[iParam0])
	{
		case 0:
			if (func_146(iParam0, 64))
			{
				Local_85.f_21[iParam0] = 1;
			}
			break;
		
		case 1:
			if (func_145(iParam0, 1))
			{
				Local_85.f_21[iParam0] = 2;
			}
			break;
		
		case 2:
			if (func_145(iParam0, 2))
			{
				Local_85.f_21[iParam0] = 3;
			}
			break;
		
		case 3:
			if (func_146(iParam0, 4))
			{
				Local_85.f_21[iParam0] = 4;
			}
			break;
		
		case 4:
			if (func_145(iParam0, 8))
			{
				Local_85.f_21[iParam0] = 5;
			}
			if (!func_145(iParam0, 1))
			{
				Local_85.f_21[iParam0] = 7;
			}
			if (func_145(iParam0, 16))
			{
				Local_85.f_21[iParam0] = 6;
			}
			break;
		
		case 5:
			if (func_145(iParam0, 16))
			{
				Local_85.f_21[iParam0] = 6;
			}
			if (!func_145(iParam0, 1))
			{
				Local_85.f_21[iParam0] = 7;
			}
			break;
		
		case 6:
			break;
		
		case 7:
			if (!func_145(iParam0, 4))
			{
				Local_85.f_21[iParam0] = 0;
			}
			break;
	}
}

int func_145(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < unk_0xEFA28384DDD283E1())
	{
		if (unk_0xBD09DF93F957A0CF(unk_0x628A51AC66E80772(iVar0)))
		{
			if (func_48(Local_109[iVar0 /*8*/].f_1[iParam0], iParam1))
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_146(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < unk_0xEFA28384DDD283E1())
	{
		if (unk_0xBD09DF93F957A0CF(unk_0x628A51AC66E80772(iVar0)))
		{
			if (!func_48(Local_109[iVar0 /*8*/].f_1[iParam0], iParam1))
			{
				return 0;
			}
		}
		iVar0++;
	}
	return 1;
}

int func_147()
{
	int iVar0;
	
	if (!unk_0xAFF96FDC3971E7EA())
	{
		return 1;
	}
	iVar0 = 1;
	if (!func_148(&(Local_85[0]), 29, joaat("s_m_y_marine_01"), -2308.4f, 3391f, 30.0601f, 55.8214f, 1, 1, 1))
	{
		iVar0 = 0;
	}
	else if (unk_0x3D70CCF2C9B362CD(Local_85[0]))
	{
		unk_0x92BD213E6A0E666B(unk_0x3C6C6327BA564AEE(Local_85[0]), joaat("weapon_assaultrifle"), 200, true, true);
	}
	if (!func_148(&(Local_85[1]), 29, joaat("s_m_y_marine_01"), -1588.9f, 2792.9f, 16.1385f, 229.437f, 1, 1, 1))
	{
		iVar0 = 0;
	}
	else if (unk_0x3D70CCF2C9B362CD(Local_85[1]))
	{
		unk_0x92BD213E6A0E666B(unk_0x3C6C6327BA564AEE(Local_85[1]), joaat("weapon_assaultrifle"), 200, true, true);
	}
	return iVar0;
}

int func_148(var uParam0, int iParam1, int iParam2, struct<3> Param3, float fParam4, bool bParam5, int iParam6, int iParam7)
{
	int iVar0;
	
	if (!unk_0xCFED0F4D63A92A70(1))
	{
		return 0;
	}
	iVar0 = unk_0xB3116B49FE00E2F1(iParam1, iParam2, Param3, fParam4, iParam6, bParam5);
	*uParam0 = unk_0x28207B405DA4E61E(iVar0);
	if (unk_0xF7DE07F319727299(*uParam0))
	{
		unk_0x7C47E49129337557(iVar0, iParam7);
		if (unk_0x4349BF35C5B9A49B(iVar0))
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

int func_149()
{
	int iVar0;
	int iVar1;
	
	iVar0 = 1;
	iVar1 = 0;
	while (iVar1 < unk_0xEFA28384DDD283E1())
	{
		if (unk_0xBD09DF93F957A0CF(unk_0x628A51AC66E80772(iVar1)))
		{
			if (!func_118(Local_109[iVar1 /*8*/], 2))
			{
				iVar0 = 0;
			}
		}
		iVar1++;
	}
	return iVar0;
}

int func_150()
{
	int iVar0;
	int iVar1;
	
	iVar0 = 1;
	iVar1 = 0;
	while (iVar1 < unk_0xEFA28384DDD283E1())
	{
		if (unk_0xBD09DF93F957A0CF(unk_0x628A51AC66E80772(iVar1)))
		{
			if (!func_118(Local_109[iVar1 /*8*/], 1))
			{
				iVar0 = 0;
			}
		}
		iVar1++;
	}
	return iVar0;
}

void func_151()
{
	if (!func_156())
	{
		return;
	}
	if (func_106(&uLocal_122) && func_104(&uLocal_122, Global_262145.f_21481, 0))
	{
		func_103(&uLocal_122);
	}
	if (func_106(&uLocal_120) && func_104(&uLocal_120, Global_262145.f_21482, 0))
	{
		func_103(&uLocal_120);
		iLocal_117 = 0;
	}
	if (unk_0x1A3D0DF92BF7D8C4(unk_0x460153A63B9477BC()) <= 0)
	{
		if (func_152())
		{
			if (!Global_2540384.f_6642)
			{
				Global_2540384.f_6642 = 1;
				func_55("BASE_EXP_WARN", -1);
			}
			if (!iLocal_117)
			{
				iLocal_117 = 1;
				func_105(&uLocal_122, 0, 0);
				func_105(&uLocal_120, 0, 0);
			}
			else if (!func_106(&uLocal_122))
			{
				unk_0x53797676AD34A9AA(5);
				bLocal_112 = true;
				bLocal_113 = true;
				iLocal_117 = 0;
				func_103(&uLocal_122);
				func_103(&uLocal_120);
			}
		}
	}
}

int func_152()
{
	int iVar0;
	int iVar1;
	
	iVar1 = 0;
	while (iVar1 < 26)
	{
		func_155(&iLocal_118, iVar1);
		iLocal_119 = func_154();
		if (iLocal_119 >= 0)
		{
			iVar0 = func_153(iLocal_119);
			if (unk_0xAE06B9E39EBDE049(iVar0) && unk_0xA1914E72A0EB31D0(iVar0))
			{
				if (unk_0x9048E8838E822F21(iVar0) == unk_0x9B0761B4C3EB8BC7())
				{
					return 1;
				}
			}
		}
		iVar1++;
	}
	return 0;
}

var func_153(int iParam0)
{
	var uVar0;
	
	switch (iParam0)
	{
		case 0:
			uVar0 = unk_0x6A1B6FEB65C6C300(iLocal_118, -1773.944f, 3287.334f, 30f, -2029.776f, 2845.083f, 1250f, 255f);
			break;
		
		case 1:
			uVar0 = unk_0x6A1B6FEB65C6C300(iLocal_118, -2725.889f, 3291.099f, 30f, -2009.182f, 2879.835f, 1250f, 180f);
			break;
		
		case 2:
			uVar0 = unk_0x6A1B6FEB65C6C300(iLocal_118, -2442.026f, 3326.699f, 30f, -2033.928f, 3089.049f, 1250f, 205f);
			break;
		
		case 3:
			uVar0 = unk_0x6A1B6FEB65C6C300(iLocal_118, -1917.165f, 3374.209f, 30f, -2016.791f, 3195.058f, 1250f, 86.25f);
			break;
		
		case 4:
			uVar0 = unk_0x6A1B6FEB65C6C300(iLocal_118, -2192.753f, 3373.278f, 30f, -2191.544f, 3150.417f, 1250f, 150f);
			break;
		
		case 5:
			uVar0 = unk_0x6A1B6FEB65C6C300(iLocal_118, -2077.663f, 3344.514f, 30f, -2191.544f, 3150.417f, 1250f, 140.5f);
			break;
		
		case 6:
			uVar0 = unk_0x6A1B6FEB65C6C300(iLocal_118, -2861.755f, 3352.661f, 30f, -2715.871f, 3269.916f, 1250f, 90f);
			break;
		
		case 7:
			uVar0 = unk_0x6A1B6FEB65C6C300(iLocal_118, -2005.574f, 3364.533f, 30f, -1977.569f, 3330.888f, 1250f, 100f);
			break;
		
		case 8:
			uVar0 = unk_0x6A1B6FEB65C6C300(iLocal_118, -1682.235f, 3004.285f, 30f, -1942.747f, 2947.441f, 1250f, 248.75f);
			break;
		
		case 9:
			uVar0 = unk_0x6A1B6FEB65C6C300(iLocal_118, -2393.295f, 2936.406f, 31.6801f, -2453.037f, 3006.863f, 52.31003f, 128f);
			break;
		
		case 10:
			uVar0 = unk_0x6A1B6FEB65C6C300(iLocal_118, -2347.185f, 3023.83f, 31.56573f, -2517.33f, 2989.063f, 49.95644f, 127.25f);
			break;
		
		case 11:
			uVar0 = unk_0x6A1B6FEB65C6C300(iLocal_118, -2259.922f, 3358.04f, 29.99972f, -2299.772f, 3385.79f, 38.06014f, 16f);
			break;
		
		case 12:
			uVar0 = unk_0x6A1B6FEB65C6C300(iLocal_118, -2476.309f, 3363.914f, 31.67933f, -2431.981f, 3287.669f, 39.97826f, 214.25f);
			break;
		
		case 13:
			uVar0 = unk_0x6A1B6FEB65C6C300(iLocal_118, -2103.081f, 2797.783f, 29.37864f, -2096.821f, 2874.423f, 57.80989f, 65.75f);
			break;
		
		case 14:
			uVar0 = unk_0x6A1B6FEB65C6C300(iLocal_118, -1877.436f, 2783.151f, 31.80618f, -1797.873f, 2924.37f, 1307.111f, 88f);
			break;
		
		case 15:
			uVar0 = unk_0x6A1B6FEB65C6C300(iLocal_118, -1761.116f, 2834.651f, 31.80622f, -1720.887f, 2906.419f, 1281.806f, 88f);
			break;
		
		case 16:
			uVar0 = unk_0x6A1B6FEB65C6C300(iLocal_118, -1761.493f, 2817.68f, 32.37125f, -1769.704f, 2913.734f, 1281.807f, 88f);
			break;
		
		case 17:
			uVar0 = unk_0x6A1B6FEB65C6C300(iLocal_118, -1879.297f, 2772.653f, 29.57795f, -1864.521f, 2825.472f, 1281.806f, 88f);
			break;
		
		case 18:
			uVar0 = unk_0x6A1B6FEB65C6C300(iLocal_118, -2676.74f, 3366.988f, 29.92394f, -2744.79f, 3340.347f, 1037.804f, 9f);
			break;
		
		case 19:
			uVar0 = unk_0x6A1B6FEB65C6C300(iLocal_118, -2676.74f, 3366.988f, 29.92394f, -2744.79f, 3340.347f, 1037.804f, 9.5f);
			break;
		
		case 20:
			uVar0 = unk_0x6A1B6FEB65C6C300(iLocal_118, -2807.397f, 3264.226f, 29.92764f, -2744.79f, 3340.347f, 1037.804f, 9.5f);
			break;
		
		case 21:
			uVar0 = unk_0x6A1B6FEB65C6C300(iLocal_118, -2808.236f, 3264.634f, 29.92764f, -2747.55f, 3187.8f, 1037.457f, 9.5f);
			break;
		
		case 22:
			uVar0 = unk_0x6A1B6FEB65C6C300(iLocal_118, -2530.996f, 3064.151f, 29.71081f, -2748.557f, 3189.939f, 1037.457f, 9.5f);
			break;
		
		case 23:
			uVar0 = unk_0x6A1B6FEB65C6C300(iLocal_118, -2533.902f, 3062.491f, 29.70715f, -2520.674f, 2996.817f, 1037.457f, 9.5f);
			break;
		
		case 24:
			uVar0 = unk_0x6A1B6FEB65C6C300(iLocal_118, -2500.716f, 2927.103f, 29.45663f, -2445.696f, 2896.657f, 1037.68f, 9.5f);
			break;
		
		case 25:
			uVar0 = unk_0x6A1B6FEB65C6C300(iLocal_118, -2020.543f, 2810.747f, 29.45658f, -1927.949f, 2785.779f, 1037.671f, 9.5f);
			break;
		
		case 26:
			uVar0 = unk_0x6A1B6FEB65C6C300(iLocal_118, -2261.899f, 3376.549f, 29.77859f, -2141.067f, 3376.773f, 1037.9f, 9.5f);
			break;
	}
	return uVar0;
}

int func_154()
{
	if (unk_0x2FABF7C63A9F9FE5(iLocal_118, -1773.944f, 3287.334f, 30f, -2029.776f, 2845.083f, 1250f, 255f))
	{
		return 0;
	}
	else if (unk_0x2FABF7C63A9F9FE5(iLocal_118, -2725.889f, 3291.099f, 30f, -2009.182f, 2879.835f, 1250f, 180f))
	{
		return 1;
	}
	else if (unk_0x2FABF7C63A9F9FE5(iLocal_118, -2442.026f, 3326.699f, 30f, -2033.928f, 3089.049f, 1250f, 205f))
	{
		return 2;
	}
	else if (unk_0x2FABF7C63A9F9FE5(iLocal_118, -1917.165f, 3374.209f, 30f, -2016.791f, 3195.058f, 1250f, 86.25f))
	{
		return 3;
	}
	else if (unk_0x2FABF7C63A9F9FE5(iLocal_118, -2192.753f, 3373.278f, 30f, -2191.544f, 3150.417f, 1250f, 150f))
	{
		return 4;
	}
	else if (unk_0x2FABF7C63A9F9FE5(iLocal_118, -2077.663f, 3344.514f, 30f, -2191.544f, 3150.417f, 1250f, 140.5f))
	{
		return 5;
	}
	else if (unk_0x2FABF7C63A9F9FE5(iLocal_118, -2861.755f, 3352.661f, 30f, -2715.871f, 3269.916f, 1250f, 90f))
	{
		return 6;
	}
	else if (unk_0x2FABF7C63A9F9FE5(iLocal_118, -2005.574f, 3364.533f, 30f, -1977.569f, 3330.888f, 1250f, 100f))
	{
		return 7;
	}
	else if (unk_0x2FABF7C63A9F9FE5(iLocal_118, -1682.235f, 3004.285f, 30f, -1942.747f, 2947.441f, 1250f, 248.75f))
	{
		return 8;
	}
	else if (unk_0x2FABF7C63A9F9FE5(iLocal_118, -2393.295f, 2936.406f, 31.6801f, -2453.037f, 3006.863f, 52.31003f, 128f))
	{
		return 9;
	}
	else if (unk_0x2FABF7C63A9F9FE5(iLocal_118, -2347.185f, 3023.83f, 31.56573f, -2517.33f, 2989.063f, 49.95644f, 127.25f))
	{
		return 10;
	}
	else if (unk_0x2FABF7C63A9F9FE5(iLocal_118, -2259.922f, 3358.04f, 29.99972f, -2299.772f, 3385.79f, 38.06014f, 16f))
	{
		return 11;
	}
	else if (unk_0x2FABF7C63A9F9FE5(iLocal_118, -2476.309f, 3363.914f, 31.67933f, -2431.981f, 3287.669f, 39.97826f, 214.25f))
	{
		return 12;
	}
	else if (unk_0x2FABF7C63A9F9FE5(iLocal_118, -2103.081f, 2797.783f, 29.37864f, -2096.821f, 2874.423f, 57.80989f, 65.75f))
	{
		return 13;
	}
	else if (unk_0x2FABF7C63A9F9FE5(iLocal_118, -1877.436f, 2783.151f, 31.80618f, -1797.873f, 2924.37f, 1307.111f, 88f))
	{
		return 14;
	}
	else if (unk_0x2FABF7C63A9F9FE5(iLocal_118, -1761.116f, 2834.651f, 31.80622f, -1720.887f, 2906.419f, 1281.806f, 88f))
	{
		return 15;
	}
	else if (unk_0x2FABF7C63A9F9FE5(iLocal_118, -1761.493f, 2817.68f, 32.37125f, -1769.704f, 2913.734f, 1281.807f, 88f))
	{
		return 16;
	}
	else if (unk_0x2FABF7C63A9F9FE5(iLocal_118, -1879.297f, 2772.653f, 29.57795f, -1864.521f, 2825.472f, 1281.806f, 88f))
	{
		return 17;
	}
	else if (unk_0x2FABF7C63A9F9FE5(iLocal_118, -2676.74f, 3366.988f, 29.92394f, -2744.79f, 3340.347f, 1037.804f, 9f))
	{
		return 18;
	}
	else if (unk_0x2FABF7C63A9F9FE5(iLocal_118, -2676.74f, 3366.988f, 29.92394f, -2744.79f, 3340.347f, 1037.804f, 9.5f))
	{
		return 19;
	}
	else if (unk_0x2FABF7C63A9F9FE5(iLocal_118, -2807.397f, 3264.226f, 29.92764f, -2744.79f, 3340.347f, 1037.804f, 9.5f))
	{
		return 20;
	}
	else if (unk_0x2FABF7C63A9F9FE5(iLocal_118, -2808.236f, 3264.634f, 29.92764f, -2747.55f, 3187.8f, 1037.457f, 9.5f))
	{
		return 21;
	}
	else if (unk_0x2FABF7C63A9F9FE5(iLocal_118, -2530.996f, 3064.151f, 29.71081f, -2748.557f, 3189.939f, 1037.457f, 9.5f))
	{
		return 22;
	}
	else if (unk_0x2FABF7C63A9F9FE5(iLocal_118, -2533.902f, 3062.491f, 29.70715f, -2520.674f, 2996.817f, 1037.457f, 9.5f))
	{
		return 23;
	}
	else if (unk_0x2FABF7C63A9F9FE5(iLocal_118, -2500.716f, 2927.103f, 29.45663f, -2445.696f, 2896.657f, 1037.68f, 9.5f))
	{
		return 24;
	}
	else if (unk_0x2FABF7C63A9F9FE5(iLocal_118, -2020.543f, 2810.747f, 29.45658f, -1927.949f, 2785.779f, 1037.671f, 9.5f))
	{
		return 25;
	}
	else if (unk_0x2FABF7C63A9F9FE5(iLocal_118, -2261.899f, 3376.549f, 29.77859f, -2141.067f, 3376.773f, 1037.9f, 9.5f))
	{
		return 26;
	}
	return -1;
}

void func_155(var uParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
			*uParam0 = 0;
			break;
		
		case 1:
			*uParam0 = 1;
			break;
		
		case 2:
			*uParam0 = 2;
			break;
		
		case 3:
			*uParam0 = 3;
			break;
		
		case 4:
			*uParam0 = 4;
			break;
		
		case 5:
			*uParam0 = 5;
			break;
		
		case 6:
			*uParam0 = 19;
			break;
		
		case 7:
			*uParam0 = 20;
			break;
		
		case 8:
			*uParam0 = 21;
			break;
		
		case 9:
			*uParam0 = 32;
			break;
		
		case 10:
			*uParam0 = 36;
			break;
		
		case 11:
			*uParam0 = 40;
			break;
		
		case 12:
			*uParam0 = 41;
			break;
		
		case 13:
			*uParam0 = 43;
			break;
		
		case 14:
			*uParam0 = 44;
			break;
		
		case 15:
			*uParam0 = 45;
			break;
		
		case 16:
			*uParam0 = 46;
			break;
		
		case 17:
			*uParam0 = 47;
			break;
		
		case 18:
			*uParam0 = 48;
			break;
		
		case 19:
			*uParam0 = 49;
			break;
		
		case 20:
			*uParam0 = 50;
			break;
		
		case 21:
			*uParam0 = 53;
			break;
		
		case 22:
			*uParam0 = 54;
			break;
		
		case 23:
			*uParam0 = 55;
			break;
		
		case 24:
			*uParam0 = 56;
			break;
		
		case 25:
			*uParam0 = 57;
			break;
	}
}

int func_156()
{
	int iVar0;
	
	if (func_159(unk_0x460153A63B9477BC(), 150) == 2)
	{
		return 0;
	}
	if (func_61(unk_0x460153A63B9477BC()))
	{
		return 1;
	}
	if (func_158(1))
	{
		iVar0 = func_157();
		if (iVar0 != func_39())
		{
			if (func_61(iVar0))
			{
				return 1;
			}
		}
	}
	return 0;
}

var func_157()
{
	return Global_1630317[unk_0x460153A63B9477BC() /*595*/].f_11;
}

bool func_158(bool bParam0)
{
	return func_59(unk_0x460153A63B9477BC(), bParam0);
}

int func_159(int iParam0, int iParam1)
{
	if (func_30(iParam0) == iParam1)
	{
		return Global_1630317[iParam0 /*595*/].f_11.f_469;
	}
	return -1;
}

int func_160()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (func_159(unk_0x460153A63B9477BC(), 150) == 2)
	{
		return 1;
	}
	if (func_61(unk_0x460153A63B9477BC()))
	{
		return 1;
	}
	if (func_158(1))
	{
		iVar0 = func_157();
		if (iVar0 != func_39())
		{
			if (func_61(iVar0))
			{
				return 1;
			}
		}
	}
	iVar1 = 0;
	while (iVar1 < 32)
	{
		iVar2 = unk_0xF1110FE23C67293A(iVar1);
		if (func_38(iVar2, 0, 1))
		{
			if (iVar2 != unk_0x460153A63B9477BC())
			{
				if (func_158(1))
				{
					if (func_162(unk_0x460153A63B9477BC(), iVar2))
					{
						if (func_61(iVar2))
						{
							return 1;
						}
					}
				}
				if (func_161(unk_0x1FA7B77001D60F9D(unk_0x460153A63B9477BC()), unk_0x1FA7B77001D60F9D(iVar2)))
				{
					iVar3 = unk_0xA5D5B1042E8F47BD(unk_0x1FA7B77001D60F9D(iVar2), 0);
					if (unk_0x10D3F7E169A49C44(iVar3, -1, 0) == unk_0x1FA7B77001D60F9D(iVar2))
					{
						if (func_61(iVar2))
						{
							return 1;
						}
					}
				}
			}
		}
		iVar1++;
	}
	return 0;
}

int func_161(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	if (unk_0xAE06B9E39EBDE049(iParam0) && unk_0xAE06B9E39EBDE049(iParam1))
	{
		if (!unk_0xA59F96B50B97E63C(iParam0, 0) && !unk_0xA59F96B50B97E63C(iParam1, 0))
		{
			if (unk_0x47DBF174A0CB9D55(iParam0, 0) && unk_0x47DBF174A0CB9D55(iParam1, 0))
			{
				iVar0 = unk_0xA5D5B1042E8F47BD(iParam0, 0);
				iVar1 = unk_0xA5D5B1042E8F47BD(iParam1, 0);
				if (unk_0xAE06B9E39EBDE049(iVar0) && unk_0xAE06B9E39EBDE049(iVar1))
				{
					if (iVar0 == iVar1)
					{
						return 1;
					}
				}
			}
		}
	}
	return 0;
}

int func_162(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = func_163(iParam0);
	if (!iVar0 == func_39())
	{
		if (iVar0 == func_163(iParam1))
		{
			return 1;
		}
	}
	return 0;
}

int func_163(int iParam0)
{
	if (iParam0 != func_39())
	{
		return Global_1630317[iParam0 /*595*/].f_11;
	}
	return func_39();
}

int func_164()
{
	var uVar0;
	
	func_172(&uVar0);
	if (Global_1312872 == 0)
	{
		if (!unk_0x25DDB354A40FFCDB())
		{
			return 1;
		}
	}
	if (func_171())
	{
		return 1;
	}
	if (Global_2464493)
	{
		return 1;
	}
	if (func_170())
	{
		return 1;
	}
	if (func_169(159))
	{
		if (!func_168())
		{
			return 1;
		}
	}
	if (func_169(157))
	{
		return 1;
	}
	if (!unk_0x0EB6C63A09FD9DF1())
	{
		return 1;
	}
	if (func_165() != 0)
	{
		if (unk_0x7B70881748D166CD(func_165()) == 0)
		{
			return 1;
		}
	}
	return 0;
}

int func_165()
{
	switch (func_167())
	{
		case 0:
			return func_166();
			break;
		
		case 2:
			return joaat("creator");
			break;
	}
	return 0;
}

int func_166()
{
	switch (Global_2464595)
	{
		case 0:
			return joaat("freemode");
		
		default:
	}
	return joaat("freemode");
}

int func_167()
{
	return Global_30968;
}

bool func_168()
{
	return Global_2451787.f_696;
}

int func_169(int iParam0)
{
	if (unk_0x16F1FCCC54559709(1, iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_170()
{
	return Global_2462250;
}

bool func_171()
{
	return Global_2451787.f_691;
}

void func_172(var uParam0)
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
					func_173(iVar0);
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

void func_173(int iParam0)
{
	struct<3> Var0;
	int iVar1;
	int iVar2;
	bool bVar3;
	
	if (unk_0x477FAFFE21935947(1, iParam0, &Var0, 3))
	{
		if (func_38(Var0.f_1, 1, 1))
		{
			iVar1 = unk_0x1FA7B77001D60F9D(Var0.f_1);
			if (unk_0xAE06B9E39EBDE049(iVar1))
			{
				if (unk_0x47DBF174A0CB9D55(iVar1, 0))
				{
					iVar2 = unk_0xA5D5B1042E8F47BD(iVar1, 0);
					if (unk_0x292280AF1BBBD6AC(iVar2, Var0.f_2) && unk_0x82CC259B7B4F4AD9())
					{
						if (func_174(iVar2, &bVar3))
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

int func_174(int iParam0, var uParam1)
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

void func_175()
{
	if (unk_0x199928B287E7CD6A(false, 0) != 5)
	{
		if (func_182(5, 0, 1))
		{
			if (unk_0x96A99F3A4198A1B3(0) <= 5)
			{
				unk_0x9CAB3AADEB4C2F8D(5);
			}
		}
	}
	if (unk_0xCC859AC9B82FF38A(false, 0) != 3)
	{
		if (func_176(3, 0, 1))
		{
			if (unk_0x2047FC6F008829BE(0) <= 3)
			{
				unk_0x628BF6B677C62F7E(3);
			}
		}
	}
}

bool func_176(int iParam0, bool bParam1, bool bParam2)
{
	return func_177(1, iParam0, 1, bParam1, bParam2);
}

int func_177(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	int iVar1;
	
	if (!unk_0xCE990E643CD9D0E5(Global_1389439, 0))
	{
		return 0;
	}
	if ((bParam2 && !bParam3) && iParam1 <= (func_181(iParam0) - func_180(iParam0, 0)))
	{
		return 1;
	}
	else
	{
		if (bParam3)
		{
			if (bParam2)
			{
				iVar0 = (iParam1 - func_180(iParam0, 0));
			}
			else
			{
				iVar0 = iParam1;
			}
			iVar1 = (func_181(iParam0) - func_179(iParam0));
		}
		else
		{
			if (bParam2)
			{
				iVar0 = (iParam1 - func_180(iParam0, 0));
			}
			else
			{
				iVar0 = iParam1;
			}
			iVar1 = (func_181(iParam0) - func_180(iParam0, 1));
		}
		if (!bParam4 && Global_1590682[unk_0x460153A63B9477BC() /*883*/] != 3)
		{
			iVar1 = (iVar1 - func_178(iParam0));
		}
		if (iVar0 < iVar1)
		{
			return 1;
		}
	}
	return 0;
}

int func_178(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 10;
			break;
		
		case 1:
			return 10;
			break;
		
		case 2:
			return 10;
			break;
	}
	return 0;
}

int func_179(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return Global_1389439.f_1;
			break;
		
		case 1:
			return Global_1389439.f_2;
			break;
		
		case 2:
			return Global_1389439.f_3;
			break;
	}
	return 0;
}

int func_180(int iParam0, bool bParam1)
{
	int iVar0;
	
	iVar0 = unk_0x460153A63B9477BC();
	switch (iParam0)
	{
		case 0:
			if (!unk_0x82CC259B7B4F4AD9())
			{
				return Global_2425869[iVar0 /*443*/].f_213;
			}
			else
			{
				return unk_0x199928B287E7CD6A(!bParam1, 0);
			}
			break;
		
		case 1:
			if (!unk_0x82CC259B7B4F4AD9())
			{
				return Global_2425869[iVar0 /*443*/].f_214;
			}
			else
			{
				return unk_0xCC859AC9B82FF38A(!bParam1, 0);
			}
			break;
		
		case 2:
			if (!unk_0x82CC259B7B4F4AD9())
			{
				return Global_2425869[iVar0 /*443*/].f_215;
			}
			else
			{
				return unk_0x95F0A437EC066E83(!bParam1, 0);
			}
			break;
	}
	return 0;
}

int func_181(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return Global_1389447;
			break;
		
		case 1:
			return Global_1389448;
			break;
		
		case 2:
			return Global_1389449;
			break;
	}
	return 0;
}

bool func_182(int iParam0, bool bParam1, bool bParam2)
{
	return func_177(0, iParam0, 1, bParam1, bParam2);
}

void func_183()
{
	wait(0);
}

void func_184()
{
	int iVar0;
	
	if (unk_0x25DDB354A40FFCDB())
	{
		if (unk_0xAFF96FDC3971E7EA())
		{
			if (func_129())
			{
				func_130();
			}
		}
	}
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (unk_0x8F678487EEBD8CE4(Local_110.f_172[iVar0]))
		{
			unk_0x93370FA10F15BE44(&(Local_110.f_172[iVar0]));
		}
		iVar0++;
	}
	if (iLocal_115)
	{
		unk_0x53797676AD34A9AA(5);
		iLocal_115 = 0;
	}
	Global_1689648 = 0;
	func_186();
	func_185();
}

void func_185()
{
	unk_0xD39E529EBE5DB04F();
}

void func_186()
{
	if (!Local_110.f_176)
	{
		return;
	}
	if (unk_0x7D167B9A0CCDA347(joaat("s_m_y_marine_01")))
	{
		unk_0x74528AC0906CBABE(joaat("s_m_y_marine_01"));
	}
	if (unk_0x7D167B9A0CCDA347(joaat("lazer")))
	{
		unk_0x74528AC0906CBABE(joaat("lazer"));
	}
	if (unk_0x7D167B9A0CCDA347(joaat("s_m_y_pilot_01")))
	{
		unk_0x74528AC0906CBABE(joaat("s_m_y_pilot_01"));
	}
}

void func_187(struct<21> Param0)
{
	func_191(func_192(Param0), Param0);
	func_189(0, -1, 0);
	unk_0x9CAB3AADEB4C2F8D(5);
	unk_0x628BF6B677C62F7E(3);
	unk_0x97D2F2E2C92FD519(&Local_85, 27);
	unk_0xBB96A3ECD45D0317(&Local_109, 257);
	unk_0x3A396632EB359434(0);
	if (!func_188())
	{
		func_184();
	}
	if (unk_0xED06FD5709A59F02(3))
	{
		func_184();
	}
	Global_2540384.f_6635 = 0;
}

int func_188()
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
		if (func_171())
		{
			return 0;
		}
		if (func_169(157))
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

int func_189(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = unk_0x361B374A50D875B4();
	while (iVar0 != 2)
	{
		if (((iVar0 == 3 || iVar0 == 4) || iVar0 == 5) || iVar0 == 6)
		{
			if (!bParam2)
			{
				func_185();
			}
			else
			{
				return 0;
			}
		}
		if (!func_190())
		{
			if (iParam0 == 0)
			{
				if (!unk_0x25DDB354A40FFCDB())
				{
					if (!bParam2)
					{
						func_185();
					}
					else
					{
						return 0;
					}
				}
				if (func_171())
				{
					if (!bParam2)
					{
						func_185();
					}
					else
					{
						return 0;
					}
				}
				if (func_169(157))
				{
					if (!bParam2)
					{
						func_185();
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
					func_185();
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
				func_185();
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
			func_185();
		}
		else
		{
			return 0;
		}
	}
	return 1;
}

bool func_190()
{
	return Global_1312872;
}

void func_191(int iParam0, struct<17> Param1, var uParam2, var uParam3, var uParam4, var uParam5)
{
	if (!unk_0x25DDB354A40FFCDB())
	{
		func_185();
	}
	unk_0xA88557896B79E30D(iParam0, 0, Param1.f_16);
}

int func_192(int iParam0)
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

