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
	int iLocal_18 = 0;
	var uLocal_19 = 0;
	var uLocal_20 = 0;
	char* sLocal_21 = NULL;
	float fLocal_22 = 0f;
	var uLocal_23 = 0;
	var uLocal_24 = 0;
	var uLocal_25 = 0;
	float fLocal_26 = 0f;
	float fLocal_27 = 0f;
	var uLocal_28 = 0;
	int iLocal_29 = 0;
	int iLocal_30 = 0;
	int iLocal_31 = 0;
	int iLocal_32 = 0;
	int iLocal_33 = 0;
	int iLocal_34 = 0;
	int iLocal_35 = 0;
	int iLocal_36 = 0;
	int iLocal_37 = 0;
	char cLocal_38[24] = "";
	var uLocal_39 = 0;
	var uLocal_40 = 0;
	var uLocal_41 = 0;
	char cLocal_42[24] = "";
	var uLocal_43 = 0;
	var uLocal_44 = 0;
	var uLocal_45 = 0;
	char cLocal_46[64] = "";
	var uLocal_47 = 0;
	var uLocal_48 = 0;
	var uLocal_49 = 0;
	var uLocal_50 = 0;
	var uLocal_51 = 0;
	var uLocal_52 = 0;
	var uLocal_53 = 0;
	var uLocal_54 = 0;
	char cLocal_55[24] = "";
	var uLocal_56 = 0;
	var uLocal_57 = 0;
	var uLocal_58 = 0;
	char* sLocal_59 = NULL;
	char cLocal_60[24] = "";
	var uLocal_61 = 0;
	var uLocal_62 = 0;
	var uLocal_63 = 0;
	char* sLocal_64 = NULL;
	char* sLocal_65 = NULL;
	char* sLocal_66 = NULL;
	var uLocal_67 = 0;
	var uLocal_68 = 0;
	var uLocal_69 = 0;
	char cLocal_70[24] = "";
	var uLocal_71 = 0;
	var uLocal_72 = 0;
	var uLocal_73 = 0;
	char* sLocal_74 = NULL;
	int iLocal_75 = 0;
	int iLocal_76 = 0;
	int iLocal_77 = 0;
	int iLocal_78 = 0;
	int iLocal_79 = 0;
	int iLocal_80 = 0;
	int iLocal_81 = 0;
	int iLocal_82 = 0;
	int iLocal_83 = 0;
	int iLocal_84 = 0;
	int iLocal_85 = 0;
	int iLocal_86 = 0;
	int iLocal_87 = 0;
	int iLocal_88 = 0;
	int iLocal_89 = 0;
	int iLocal_90 = 0;
	int iLocal_91 = 0;
	int iLocal_92 = 0;
	int iLocal_93 = 0;
	var uLocal_94[30] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	var uLocal_95[30] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	var uLocal_96[30] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	var uLocal_97[30] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_98 = 0;
	int iLocal_99 = 0;
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
	sLocal_21 = "NULL";
	fLocal_22 = 0f;
	fLocal_26 = -0.0375f;
	fLocal_27 = 0.17f;
	iLocal_34 = 5000;
	iLocal_35 = 5000;
	unk_0xDB4E5F36ED3505EE();
	while (true)
	{
		wait(0);
		if (unk_0xCE990E643CD9D0E5(Global_7552, 1))
		{
			if (!unk_0xCE990E643CD9D0E5(Global_7551, 20))
			{
				if (unk_0x6B12213471F330A3())
				{
					if (Global_19669)
					{
						func_119(Global_19662, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, "CELL_202", 0, 0, 0, 0);
						if (Global_19624)
						{
							func_119(Global_19662, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
						}
					}
					else
					{
						func_119(Global_19662, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
					}
					unk_0xD2459066EA58CE43(&Global_7552, 1);
				}
			}
		}
		if (unk_0xCE990E643CD9D0E5(Global_19871, 0))
		{
			if (!func_118())
			{
				if (!unk_0xCE990E643CD9D0E5(Global_19871, 1))
				{
					unk_0xBE20AB8238688965(&Global_19871, 1);
					if (unk_0x25DDB354A40FFCDB())
					{
						iLocal_89 = unk_0x6CAAB7E78B5D978A();
					}
					else
					{
						iLocal_85 = unk_0x578C4EF320340AF7();
					}
				}
				if (unk_0x25DDB354A40FFCDB())
				{
					iLocal_91 = unk_0x624736CA66E14161(unk_0x6CAAB7E78B5D978A(), iLocal_89);
				}
				else
				{
					iLocal_86 = unk_0x578C4EF320340AF7();
					iLocal_91 = (iLocal_86 - iLocal_85);
				}
				if (iLocal_91 < 3000)
				{
					if (func_111(&Global_20459, &Global_21075, &Global_20995, Global_21008, Global_21990, Global_21991, 0))
					{
						Global_19871 = 0;
					}
				}
				else
				{
					Global_19871 = 0;
				}
			}
		}
		if (((!unk_0x5A228A6A51E757C8(unk_0x460153A63B9477BC()) && !unk_0xCE990E643CD9D0E5(Global_4456448.f_17, 4)) && !func_110()) && unk_0x7B70881748D166CD(joaat("fm_mission_controller_2020")) == 0)
		{
			if (Global_21005 != 0)
			{
				if (unk_0x7B70881748D166CD(joaat("cellphone_flashhand")) == 0)
				{
					func_109();
				}
			}
		}
		if (iLocal_32 == 1)
		{
			func_105();
		}
		switch (Global_21005)
		{
			case 0:
				break;
			
			case 1:
				if (Global_21011)
				{
					if (Global_21001 == 0)
					{
						func_103();
					}
					else
					{
						func_102();
						func_103();
					}
				}
				else if (Global_21001 == 0)
				{
					func_92();
				}
				else
				{
					func_102();
					func_74();
				}
				break;
			
			case 2:
				func_68();
				break;
			
			case 3:
				func_64();
				break;
			
			case 4:
				if (Global_21011)
				{
					if (Global_21013)
					{
						func_63();
					}
					else
					{
						func_7();
					}
				}
				else
				{
					func_5();
				}
				break;
			
			case 5:
				func_4();
				break;
			
			case 6:
				func_1();
				break;
			
			default:
				break;
		}
	}
}

void func_1()
{
	Global_21015 = 0;
	Global_19680 = 0;
	func_2();
}

void func_2()
{
	Global_2621441 = 0;
	Global_2621442 = 0;
	Global_21016 = 0;
	Global_21017 = 0;
	Global_21018 = 0;
	Global_21019 = 0;
	Global_20294.f_161 = -99;
	Global_20294.f_162 = { 0f, 0f, 0f };
	Global_21009 = 0;
	Global_21010 = 0;
	Global_21052 = 0;
	Global_21053 = 0;
	Global_21056 = 0;
	Global_21058 = 0;
	Global_21057 = 0;
	Global_21060 = 0;
	Global_21059 = 0;
	Global_22022 = 0;
	Global_21062 = 0;
	if (Global_19681.f_1 == 10)
	{
	}
	else if (unk_0xCE990E643CD9D0E5(Global_7551, 11))
	{
		func_3();
	}
	Global_21011 = 0;
	Global_21012 = 0;
	Global_21013 = 0;
	Global_21014 = 0;
	Global_21996 = 0;
	Global_21995 = 0;
	Global_22002 = 0;
	Global_22001 = 0;
	Global_21998 = 0;
	Global_21997 = 0;
	Global_21999 = 0;
	Global_22000 = 0;
	Global_21001 = 0;
	Global_21002 = 0;
	Global_21003 = 0;
	Global_21004 = 0;
	Global_21263 = 0;
	Global_22026 = 5000;
	Global_19664 = 0;
	unk_0xD2459066EA58CE43(&Global_7551, 20);
	unk_0xD2459066EA58CE43(&Global_7551, 24);
	unk_0xD2459066EA58CE43(&Global_7552, 23);
	unk_0xD2459066EA58CE43(&Global_7553, 0);
	unk_0xD2459066EA58CE43(&Global_7552, 9);
	unk_0xD2459066EA58CE43(&Global_7552, 31);
	unk_0xD2459066EA58CE43(&Global_7552, 17);
	unk_0xD2459066EA58CE43(&Global_7553, 5);
	Global_21989 = 0;
	Global_21988 = 0;
	if (unk_0x6A5CC4A2C9D9ED8D())
	{
		Global_21005 = 4;
	}
	else
	{
		Global_21005 = 0;
		Global_22016 = 0;
		Global_22027 = unk_0x578C4EF320340AF7();
	}
}

void func_3()
{
	if (!Global_76833)
	{
		if (!unk_0x5AEB5DDFFAD43CA5(unk_0x9B0761B4C3EB8BC7()))
		{
			if (unk_0xCE990E643CD9D0E5(Global_7551, 11))
			{
				if (!Global_19624)
				{
					unk_0x48E48D5929D45C6F(unk_0x9B0761B4C3EB8BC7(), 0, 1);
				}
				if (Global_76833)
				{
					unk_0x694113444F21E39F(unk_0x9B0761B4C3EB8BC7(), 244, true);
					unk_0x694113444F21E39F(unk_0x9B0761B4C3EB8BC7(), 243, true);
					unk_0x694113444F21E39F(unk_0x9B0761B4C3EB8BC7(), 242, true);
				}
				unk_0xD2459066EA58CE43(&Global_7551, 11);
			}
		}
	}
}

void func_4()
{
	Global_21015 = 0;
	Global_19680 = 0;
	func_2();
}

void func_5()
{
	if (unk_0x5A228A6A51E757C8(unk_0x460153A63B9477BC()))
	{
		if (unk_0xE43E3F96A5D750CE(unk_0x9B0761B4C3EB8BC7()))
		{
			if (Global_21061 == 0)
			{
				func_6();
			}
		}
	}
	if (iLocal_33 == 1)
	{
		func_6();
		func_6();
	}
	if (Global_21997 == 0)
	{
		if (iLocal_31 == 0)
		{
			if (Global_22016 == 1)
			{
				unk_0xA38053A31576C07A(1);
				iLocal_31 = 1;
			}
		}
		else if (Global_22016 == 0)
		{
			unk_0x62B2C9892E3E142D();
			iLocal_31 = 0;
		}
	}
	else if (Global_21999 > 0)
	{
		iLocal_37 = unk_0x578C4EF320340AF7();
		if ((iLocal_37 - iLocal_36) > Global_21999)
		{
			unk_0xCC220544E304DF15();
			Global_21997 = 0;
		}
	}
	if (Global_22016 == 0)
	{
		if (!unk_0x6A5CC4A2C9D9ED8D())
		{
			Global_21005 = 6;
		}
	}
}

void func_6()
{
	unk_0x62B2C9892E3E142D();
	Global_22016 = 0;
	if (unk_0x6A5CC4A2C9D9ED8D())
	{
		unk_0xBE4122AC23440E7D(false);
		Global_21005 = 6;
	}
}

void func_7()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (unk_0x6B12213471F330A3())
	{
		if (!unk_0xCE990E643CD9D0E5(Global_7551, 11))
		{
			if (!unk_0xA59F96B50B97E63C(unk_0x9B0761B4C3EB8BC7(), 0))
			{
				if (!unk_0x47DBF174A0CB9D55(unk_0x9B0761B4C3EB8BC7(), 0))
				{
					if (Global_76833 == 0)
					{
						func_61();
					}
				}
			}
		}
		else if (!unk_0xA59F96B50B97E63C(unk_0x9B0761B4C3EB8BC7(), 0))
		{
			if (unk_0x6E0C5E7AAF8B6214(unk_0x9B0761B4C3EB8BC7()))
			{
				if (Global_76833 == 0)
				{
					func_3();
				}
			}
		}
	}
	if (Global_76833 == 0)
	{
		func_60();
	}
	if (iLocal_33 == 1)
	{
		func_55(0);
	}
	if (iLocal_31 == 0)
	{
		if (Global_22016 == 1)
		{
			if (Global_22017 == 1)
			{
				unk_0xA38053A31576C07A(1);
				iLocal_31 = 1;
				Global_22017 = 0;
			}
		}
	}
	else if (Global_22016 == 0)
	{
		if (Global_22017 == 1)
		{
			unk_0x62B2C9892E3E142D();
			iLocal_31 = 0;
			Global_22017 = 0;
		}
	}
	if (Global_21058 == 0)
	{
		if (!Global_21018)
		{
			if (!unk_0xCE990E643CD9D0E5(Global_7552, 31))
			{
				if (!unk_0xCE990E643CD9D0E5(Global_7552, 27))
				{
					if (func_54())
					{
						if (Global_19681.f_1 > 6)
						{
							unk_0xBE20AB8238688965(&Global_7552, 24);
							unk_0xBE20AB8238688965(&Global_7552, 27);
							unk_0xD2459066EA58CE43(&Global_7552, 26);
							unk_0xD2459066EA58CE43(&Global_7552, 25);
						}
					}
				}
			}
		}
	}
	if (unk_0x6B12213471F330A3() == 0 && Global_21018 == 0)
	{
		if (Global_21058 == 1)
		{
			unk_0xBE20AB8238688965(&Global_7552, 23);
		}
		else
		{
			unk_0xD2459066EA58CE43(&Global_7552, 23);
		}
		if (Global_21062)
		{
			if (Global_21058 == 0)
			{
				Global_20624 = { Global_21063 };
				Global_21081 = { Global_21069 };
				Global_21015 = 0;
				Global_22022 = 6;
				func_53();
				return;
			}
		}
		if (!Global_21060)
		{
			while (Global_21058 == 1)
			{
				wait(0);
				if (Global_19681.f_1 < 6)
				{
					Global_21058 = 0;
				}
				else
				{
					if (iLocal_30 == 0)
					{
						func_52();
						if (Global_21060)
						{
							iLocal_30 = 1;
							Global_22020 = 1;
							func_119(Global_19662, "SET_DATA_SLOT", to_float(4), to_float(0), to_float(4), -1f, -1f, &Global_21147, &(Global_1848[Global_6866 /*29*/].f_7), &(Global_1848[Global_6866 /*29*/].f_3), &(Global_1848[Global_6866 /*29*/].f_3), 0);
							func_51(Global_19662, "DISPLAY_VIEW", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
							if (Global_19669)
							{
								func_119(Global_19662, "SET_SOFT_KEYS", 2f, 1f, 17f, -1f, -1f, "CELL_604", 0, 0, 0, 0);
								func_119(Global_19662, "SET_SOFT_KEYS", 1f, 1f, 18f, -1f, -1f, "CELL_602", 0, 0, 0, 0);
								unk_0xBE20AB8238688965(&Global_7551, 17);
								func_119(Global_19662, "SET_SOFT_KEYS", 3f, 1f, 19f, -1f, -1f, "CELL_603", 0, 0, 0, 0);
							}
							else
							{
								func_119(Global_19662, "SET_SOFT_KEYS", 2f, 1f, 17f, -1f, -1f, 0, 0, 0, 0, 0);
								func_119(Global_19662, "SET_SOFT_KEYS", 1f, 1f, 18f, -1f, -1f, 0, 0, 0, 0, 0);
								unk_0xBE20AB8238688965(&Global_7551, 17);
								func_119(Global_19662, "SET_SOFT_KEYS", 3f, 1f, 19f, -1f, -1f, 0, 0, 0, 0, 0);
							}
						}
						else
						{
							iLocal_30 = 1;
							Global_22018 = 1;
							if (func_50(Global_6866, Global_19681) == 0)
							{
								func_119(Global_19662, "SET_DATA_SLOT", to_float(4), to_float(0), to_float(4), -1f, -1f, &Global_21147, "CELL_300", &(Global_117[Global_6866 /*10*/].f_4), "CELL_195", 0);
								func_51(Global_19662, "DISPLAY_VIEW", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
							}
							else
							{
								func_119(Global_19662, "SET_DATA_SLOT", to_float(4), to_float(0), to_float(4), -1f, -1f, &Global_21147, &(Global_1848[Global_6866 /*29*/].f_7), &(Global_1848[Global_6866 /*29*/].f_3), &(Global_1848[Global_6866 /*29*/].f_3), 0);
								func_51(Global_19662, "DISPLAY_VIEW", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
							}
							if (Global_19669)
							{
								func_119(Global_19662, "SET_SOFT_KEYS", 2f, 1f, 13f, -1f, -1f, "CELL_212", 0, 0, 0, 0);
								func_119(Global_19662, "SET_SOFT_KEYS", 3f, 1f, 14f, -1f, -1f, "CELL_213", 0, 0, 0, 0);
							}
							else
							{
								func_119(Global_19662, "SET_SOFT_KEYS", 2f, 1f, 13f, -1f, -1f, 0, 0, 0, 0, 0);
								func_119(Global_19662, "SET_SOFT_KEYS", 3f, 1f, 14f, -1f, -1f, 0, 0, 0, 0, 0);
							}
							func_119(Global_19662, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
							unk_0xD2459066EA58CE43(&Global_7551, 17);
						}
					}
					if (func_49(2, Global_19650, 0))
					{
						func_47();
						Global_19607 = 0.19f;
						Global_21058 = 0;
						func_45();
						if (Global_21060)
						{
							Global_20624 = { Global_21141 };
							Global_22022 = 5;
						}
						else if (Global_21003 > 0)
						{
							Global_21263 = 1;
							Global_21005 = 0;
							Global_22026 = 0;
							if (unk_0xCE990E643CD9D0E5(Global_7552, 9))
							{
								iVar0 = 0;
								while (iVar0 < Global_21989 + 1)
								{
									uLocal_94[iVar0] = func_44(&(Global_21264[iVar0 /*6*/]));
									uLocal_95[iVar0] = func_44(&(Global_21626[iVar0 /*6*/]));
									iVar0++;
								}
								func_43(Global_21989, &Global_20294, Global_6866, &Global_21081, &uLocal_94, &uLocal_95, 9, 0, 0, 0, 0);
							}
							else if (Global_21003 == 2)
							{
								func_25(&Global_20294, Global_6866, &Global_21081, &(Global_21159[0 /*6*/]), &(Global_21211[0 /*6*/]), &(Global_21159[1 /*6*/]), &(Global_21211[1 /*6*/]), 9, 0, 0, 0, 0);
							}
							Global_22022 = 1;
							Global_22018 = 0;
							Global_22020 = 0;
							Global_21015 = 0;
							func_23();
							return;
						}
						else
						{
							Global_20624 = { Global_21099 };
							Global_22022 = 1;
						}
						Global_22018 = 0;
						Global_22020 = 0;
						Global_21015 = 0;
						func_23();
						func_53();
						return;
					}
					if (func_49(2, Global_19651, 0) || unk_0xCE990E643CD9D0E5(Global_7551, 24))
					{
						func_47();
						Global_19607 = 0.19f;
						Global_21058 = 0;
						func_45();
						if (Global_21060)
						{
							Global_20624 = { Global_21135 };
							Global_22022 = 4;
						}
						else if (Global_21003 > 0)
						{
							Global_21263 = 1;
							Global_21005 = 0;
							Global_22026 = 0;
							if (unk_0xCE990E643CD9D0E5(Global_7552, 9))
							{
								iVar1 = 0;
								while (iVar1 < Global_21988 + 1)
								{
									uLocal_96[iVar1] = func_44(&(Global_21445[iVar1 /*6*/]));
									uLocal_97[iVar1] = func_44(&(Global_21807[iVar1 /*6*/]));
									iVar1++;
								}
								func_43(Global_21988, &Global_20294, Global_6866, &Global_21081, &uLocal_96, &uLocal_97, 9, 0, 0, 0, 0);
							}
							else if (Global_21003 == 2)
							{
								func_25(&Global_20294, Global_6866, &Global_21081, &(Global_21172[0 /*6*/]), &(Global_21224[0 /*6*/]), &(Global_21172[1 /*6*/]), &(Global_21224[1 /*6*/]), 9, 0, 0, 0, 0);
							}
							Global_22022 = 2;
							Global_22018 = 0;
							Global_22020 = 0;
							Global_21015 = 0;
							func_23();
							return;
						}
						else
						{
							Global_20624 = { Global_21105 };
							Global_22022 = 2;
						}
						Global_22018 = 0;
						Global_22020 = 0;
						Global_21015 = 0;
						func_23();
						func_53();
						return;
					}
					if (func_49(2, Global_19653, 0))
					{
						if (Global_21060)
						{
							Global_19607 = 0.19f;
							Global_21058 = 0;
							func_45();
							func_47();
							Global_20624 = { Global_21129 };
							Global_22022 = 3;
							Global_22018 = 0;
							Global_22020 = 0;
							Global_21015 = 0;
							func_23();
							func_53();
							return;
						}
					}
				}
			}
		}
		else
		{
			while (Global_21058)
			{
				wait(0);
				if (Global_19681.f_1 < 6)
				{
					Global_21058 = 0;
				}
				else
				{
					if (iLocal_30 == 0)
					{
						func_52();
						func_51(Global_19662, "SET_DATA_SLOT_EMPTY", 18f, -1082130432, -1082130432, -1082130432, -1082130432);
						func_119(Global_19662, "SET_DATA_SLOT", to_float(18), to_float(0), to_float(0), -1f, -1f, "CELL_603", 0, 0, 0, 0);
						func_119(Global_19662, "SET_DATA_SLOT", to_float(18), to_float(1), to_float(0), -1f, -1f, "CELL_602", 0, 0, 0, 0);
						func_119(Global_19662, "SET_DATA_SLOT", to_float(18), to_float(2), to_float(0), -1f, -1f, "CELL_604", 0, 0, 0, 0);
						func_51(Global_19662, "DISPLAY_VIEW", 18f, -1082130432, -1082130432, -1082130432, -1082130432);
						func_22(Global_19662, "SET_HEADER", "CELL_601", 0, 0, 0, 0);
						if (Global_19669)
						{
							func_119(Global_19662, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, "CELL_205", 0, 0, 0, 0);
						}
						else
						{
							func_119(Global_19662, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, 0, 0, 0, 0, 0);
						}
						func_119(Global_19662, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
						unk_0xD2459066EA58CE43(&Global_7551, 17);
						iLocal_98 = 0;
						iLocal_30 = 1;
					}
					func_16();
					if (func_49(2, Global_19650, 0))
					{
						func_47();
						Global_21058 = 0;
						func_45();
						unk_0x830F007E19C63E14(Global_19662, "GET_CURRENT_SELECTION");
						iLocal_99 = unk_0xF4712E16A4C164FE();
						while (!unk_0x654BC7395AE9BF77(iLocal_99))
						{
							wait(0);
						}
						iVar2 = unk_0x14E3913C604B1108(iLocal_99);
						switch (iVar2)
						{
							case 0:
								Global_20624 = { Global_21135 };
								Global_22022 = 4;
								break;
							
							case 1:
								Global_20624 = { Global_21129 };
								Global_22022 = 3;
								break;
							
							case 2:
								Global_20624 = { Global_21141 };
								Global_22022 = 5;
								break;
						}
						Global_22018 = 0;
						Global_22020 = 0;
						Global_21015 = 0;
						func_23();
						func_53();
						return;
					}
					if (func_49(2, Global_19651, 0))
					{
						Global_21058 = 0;
						func_45();
					}
				}
			}
		}
		if (Global_21006 == 0)
		{
			unk_0xBE4122AC23440E7D(false);
			settimera(0);
			while (timera() < 900 && Global_19681.f_1 == 9)
			{
				wait(0);
			}
			Global_21005 = 6;
		}
		unk_0xC4CC25B68A91D144(-1, "Hang_Up", &Global_19670, 1);
		func_15();
		Global_19681.f_1 = Global_19683;
		func_8();
	}
	else if (Global_19864 == 0)
	{
		if (func_49(2, Global_19649, 0))
		{
			if (unk_0x5A228A6A51E757C8(unk_0x460153A63B9477BC()))
			{
				if (unk_0x4DC4117F94CD5B84(unk_0x460153A63B9477BC()))
				{
					if (unk_0xCE990E643CD9D0E5(Global_7551, 20))
					{
					}
					else
					{
						Global_19659 = 1;
						func_45();
						unk_0xBE4122AC23440E7D(false);
						Global_21054 = 1;
						Global_21055 = 1;
						Global_21005 = 6;
						func_15();
						Global_19681.f_1 = Global_19683;
						func_8();
					}
				}
			}
		}
	}
}

void func_8()
{
	char cVar0[24];
	
	if (Global_19664 == 1)
	{
		return;
	}
	if (Global_19681.f_1 < 4)
	{
		return;
	}
	while (!unk_0x95EF219D38B20CFF(Global_19662))
	{
		if (Global_76833)
		{
			return;
		}
		wait(0);
	}
	switch (Global_19681.f_1)
	{
		case 6:
			func_51(Global_19662, "SET_DATA_SLOT_EMPTY", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
			func_13(Global_8156);
			if (Global_8156 == 1)
			{
				func_51(Global_19662, "DISPLAY_VIEW", 1f, to_float(Global_19685), -1082130432, -1082130432, -1082130432);
				Global_19661 = Global_19685;
			}
			else
			{
				func_51(Global_19662, "DISPLAY_VIEW", 1f, to_float(Global_19686), -1082130432, -1082130432, -1082130432);
				Global_19661 = Global_19686;
			}
			if (Global_19669)
			{
				func_119(Global_19662, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, "CELL_205", 0, 0, 0, 0);
				func_119(Global_19662, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, "CELL_206", 0, 0, 0, 0);
			}
			else
			{
				func_119(Global_19662, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, 0, 0, 0, 0, 0);
				func_119(Global_19662, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			if (Global_19866 == 0)
			{
				func_119(Global_19662, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
				unk_0xD2459066EA58CE43(&Global_7551, 17);
			}
			else if (Global_76833)
			{
				func_119(Global_19662, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
				unk_0xD2459066EA58CE43(&Global_7551, 17);
			}
			else
			{
				if (Global_19865 == 1)
				{
					if (Global_19669)
					{
						func_119(Global_19662, "SET_SOFT_KEYS", 1f, 1f, 20f, -1f, -1f, "CELL_225", 0, 0, 0, 0);
					}
					else
					{
						func_119(Global_19662, "SET_SOFT_KEYS", 1f, 1f, 20f, -1f, -1f, 0, 0, 0, 0, 0);
					}
				}
				else if (Global_19669)
				{
					func_119(Global_19662, "SET_SOFT_KEYS", 1f, 1f, 3f, -1f, -1f, "CELL_225", 0, 0, 0, 0);
				}
				else
				{
					func_119(Global_19662, "SET_SOFT_KEYS", 1f, 1f, 3f, -1f, -1f, 0, 0, 0, 0, 0);
				}
				unk_0xBE20AB8238688965(&Global_7551, 17);
			}
			if (Global_76833)
			{
				func_11();
				unk_0xD2459066EA58CE43(&Global_7553, 9);
				func_51(Global_19662, "DISPLAY_VIEW", 1f, to_float(Global_19685), -1082130432, -1082130432, -1082130432);
			}
			break;
		
		case 7:
			break;
		
		case 10:
			func_51(Global_19662, "DISPLAY_VIEW", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
			func_119(Global_19662, "SET_SOFT_KEYS", 2f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			func_119(Global_19662, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			unk_0xD2459066EA58CE43(&Global_7551, 17);
			if (unk_0xCE990E643CD9D0E5(Global_7551, 20))
			{
				func_119(Global_19662, "SET_SOFT_KEYS", 3f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			else if (Global_19669)
			{
				func_119(Global_19662, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, "CELL_202", 0, 0, 0, 0);
				if (Global_19624)
				{
					func_119(Global_19662, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
				}
			}
			else
			{
				func_119(Global_19662, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			break;
		
		case 9:
			if (Global_19680 == 1)
			{
				func_10();
				func_51(Global_19662, "SET_THEME", to_float(Global_111858.f_14047[Global_19681 /*20*/].f_6), -1082130432, -1082130432, -1082130432, -1082130432);
				if (Global_21018)
				{
					unk_0x830F007E19C63E14(Global_19662, "SET_DATA_SLOT");
					unk_0xAD291B8F75D737AD(4);
					unk_0xAD291B8F75D737AD(0);
					unk_0xAD291B8F75D737AD(2);
					unk_0xB23270F3D5E62FDE("CELL_CONDFON");
					unk_0x9EFD301E3BE8324E(&Global_21020);
					unk_0x2042E9CA4306F725();
					func_9("CELL_300");
					func_9("CELL_217");
					func_9("CELL_217");
					unk_0xE1FDD153F5858534();
				}
				else if (func_50(Global_6866, Global_19681) == 0)
				{
					func_119(Global_19662, "SET_DATA_SLOT", to_float(4), to_float(0), to_float(2), -1f, -1f, &(Global_117[Global_6866 /*10*/].f_4), "CELL_300", "CELL_217", "CELL_195", 0);
				}
				else
				{
					func_119(Global_19662, "SET_DATA_SLOT", to_float(4), to_float(0), to_float(2), -1f, -1f, &(Global_1848[Global_6866 /*29*/].f_3), &(Global_1848[Global_6866 /*29*/].f_7), "CELL_217", &(Global_1848[Global_6866 /*29*/].f_3), 0);
				}
				func_51(Global_19662, "DISPLAY_VIEW", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
			}
			else if (Global_21005 == 4 || Global_21005 == 3)
			{
				func_51(Global_19662, "SET_THEME", to_float(Global_111858.f_14047[Global_19681 /*20*/].f_6), -1082130432, -1082130432, -1082130432, -1082130432);
				func_10();
				if (Global_21018)
				{
					unk_0x830F007E19C63E14(Global_19662, "SET_DATA_SLOT");
					unk_0xAD291B8F75D737AD(4);
					unk_0xAD291B8F75D737AD(0);
					unk_0xAD291B8F75D737AD(2);
					unk_0xB23270F3D5E62FDE("CELL_CONDFON");
					unk_0x9EFD301E3BE8324E(&Global_21020);
					unk_0x2042E9CA4306F725();
					func_9("CELL_300");
					func_9("CELL_219");
					func_9("CELL_219");
					unk_0xE1FDD153F5858534();
				}
				else
				{
					if (Global_21263)
					{
						StringCopy(&cVar0, "CELL_219", 24);
					}
					else
					{
						StringCopy(&cVar0, "CELL_211", 24);
					}
					if (func_50(Global_6866, Global_19681) == 0)
					{
						func_51(Global_19662, "SET_DATA_SLOT_EMPTY", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
						func_119(Global_19662, "SET_DATA_SLOT", to_float(4), to_float(0), to_float(3), -1f, -1f, &(Global_117[Global_6866 /*10*/].f_4), "CELL_300", &cVar0, "CELL_195", 0);
					}
					else
					{
						func_51(Global_19662, "SET_DATA_SLOT_EMPTY", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
						func_119(Global_19662, "SET_DATA_SLOT", to_float(4), to_float(0), to_float(3), -1f, -1f, &(Global_1848[Global_6866 /*29*/].f_3), &(Global_1848[Global_6866 /*29*/].f_7), &cVar0, &(Global_1848[Global_6866 /*29*/].f_3), 0);
					}
				}
				func_51(Global_19662, "DISPLAY_VIEW", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
			}
			func_23();
			break;
		
		default:
			break;
	}
}

void func_9(char* sParam0)
{
	unk_0xB23270F3D5E62FDE(sParam0);
	unk_0x2042E9CA4306F725();
}

void func_10()
{
	if (!unk_0xA59F96B50B97E63C(unk_0x9B0761B4C3EB8BC7(), 0))
	{
		if (Global_19681 == 0)
		{
			switch (Global_111858.f_14047[Global_19681 /*20*/].f_6)
			{
				case 1:
					unk_0xB3A0950F462F7CD2(unk_0x460153A63B9477BC(), 0);
					break;
				
				case 2:
					unk_0xB3A0950F462F7CD2(unk_0x460153A63B9477BC(), 1);
					break;
				
				case 3:
					unk_0xB3A0950F462F7CD2(unk_0x460153A63B9477BC(), 2);
					break;
				
				case 4:
					unk_0xB3A0950F462F7CD2(unk_0x460153A63B9477BC(), 3);
					break;
				
				case 5:
					unk_0xB3A0950F462F7CD2(unk_0x460153A63B9477BC(), 4);
					break;
				
				case 6:
					unk_0xB3A0950F462F7CD2(unk_0x460153A63B9477BC(), 5);
					break;
				
				case 7:
					unk_0xB3A0950F462F7CD2(unk_0x460153A63B9477BC(), 6);
					break;
				
				default:
					break;
				}
		}
		if (Global_19681 == 1)
		{
			switch (Global_111858.f_14047[Global_19681 /*20*/].f_6)
			{
				case 1:
					unk_0xB3A0950F462F7CD2(unk_0x460153A63B9477BC(), 6);
					break;
				
				case 2:
					unk_0xB3A0950F462F7CD2(unk_0x460153A63B9477BC(), 0);
					break;
				
				case 3:
					unk_0xB3A0950F462F7CD2(unk_0x460153A63B9477BC(), 1);
					break;
				
				case 4:
					unk_0xB3A0950F462F7CD2(unk_0x460153A63B9477BC(), 2);
					break;
				
				case 5:
					unk_0xB3A0950F462F7CD2(unk_0x460153A63B9477BC(), 3);
					break;
				
				case 6:
					unk_0xB3A0950F462F7CD2(unk_0x460153A63B9477BC(), 4);
					break;
				
				case 7:
					unk_0xB3A0950F462F7CD2(unk_0x460153A63B9477BC(), 5);
					break;
				
				default:
					break;
				}
		}
		if (Global_19681 == 2)
		{
			switch (Global_111858.f_14047[Global_19681 /*20*/].f_6)
			{
				case 1:
					unk_0xB3A0950F462F7CD2(unk_0x460153A63B9477BC(), 5);
					break;
				
				case 2:
					unk_0xB3A0950F462F7CD2(unk_0x460153A63B9477BC(), 6);
					break;
				
				case 3:
					unk_0xB3A0950F462F7CD2(unk_0x460153A63B9477BC(), 1);
					break;
				
				case 4:
					unk_0xB3A0950F462F7CD2(unk_0x460153A63B9477BC(), 0);
					break;
				
				case 5:
					unk_0xB3A0950F462F7CD2(unk_0x460153A63B9477BC(), 2);
					break;
				
				case 6:
					unk_0xB3A0950F462F7CD2(unk_0x460153A63B9477BC(), 3);
					break;
				
				case 7:
					unk_0xB3A0950F462F7CD2(unk_0x460153A63B9477BC(), 4);
					break;
				
				default:
					break;
				}
		}
		if (Global_19681 == 3)
		{
			switch (Global_4271300)
			{
				case 1:
					unk_0xB3A0950F462F7CD2(unk_0x460153A63B9477BC(), 0);
					break;
				
				case 2:
					unk_0xB3A0950F462F7CD2(unk_0x460153A63B9477BC(), 1);
					break;
				
				case 3:
					unk_0xB3A0950F462F7CD2(unk_0x460153A63B9477BC(), 2);
					break;
				
				case 4:
					unk_0xB3A0950F462F7CD2(unk_0x460153A63B9477BC(), 3);
					break;
				
				case 5:
					unk_0xB3A0950F462F7CD2(unk_0x460153A63B9477BC(), 4);
					break;
				
				case 6:
					unk_0xB3A0950F462F7CD2(unk_0x460153A63B9477BC(), 5);
					break;
				
				case 7:
					unk_0xB3A0950F462F7CD2(unk_0x460153A63B9477BC(), 6);
					break;
				
				default:
					break;
				}
			}
	}
}

void func_11()
{
	if (Global_76833)
	{
		if (func_12() == 0)
		{
			return;
		}
		func_119(Global_19662, "SET_SOFT_KEYS", 1f, 1f, 9f, -1f, -1f, 0, 0, 0, 0, 0);
		unk_0xBE20AB8238688965(&Global_7551, 17);
	}
}

int func_12()
{
	return 0;
}

void func_13(int iParam0)
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
	
	Global_22073 = 0;
	Global_8156 = iParam0;
	iVar0 = 0;
	while (iVar0 < 9)
	{
		Global_8120[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 9)
	{
		iVar1 = 0;
		if (func_14(14))
		{
			while (iVar1 < 34)
			{
				if (iParam0 == Global_7558[iVar1 /*15*/].f_11)
				{
					if (iVar0 == Global_7558[iVar1 /*15*/].f_4)
					{
						if (Global_8120[iVar0] == 0)
						{
							Global_8084[iVar0] = iVar1;
							if (iVar1 == 3)
							{
								if (unk_0xCE990E643CD9D0E5(Global_7552, 3))
								{
									iVar2 = 42;
									Global_19868 = 1;
								}
								else
								{
									iVar2 = 255;
									Global_19868 = 0;
								}
								unk_0x830F007E19C63E14(Global_19662, "SET_DATA_SLOT");
								unk_0xAD291B8F75D737AD(1);
								unk_0xAD291B8F75D737AD(iVar0);
								unk_0xAD291B8F75D737AD(Global_7558[iVar1 /*15*/].f_10);
								unk_0xAD291B8F75D737AD(0);
								func_9(&(Global_7558[iVar1 /*15*/]));
								unk_0xAD291B8F75D737AD(iVar2);
								unk_0xE1FDD153F5858534();
							}
							if (Global_2462245)
							{
								if (iVar1 == 14)
								{
									func_119(Global_19662, "SET_DATA_SLOT", to_float(1), to_float(iVar0), to_float(Global_7558[iVar1 /*15*/].f_10), to_float(Global_22068), -1f, &(Global_7558[iVar1 /*15*/]), 0, 0, 0, 0);
								}
							}
							Global_8120[iVar0] = 1;
						}
					}
				}
				iVar1++;
			}
		}
		else
		{
			while (iVar1 < 34)
			{
				if (iParam0 == Global_7558[iVar1 /*15*/].f_11)
				{
					if (iVar0 == Global_7558[iVar1 /*15*/].f_4)
					{
						if (Global_8120[iVar0] == 0)
						{
							Global_8084[iVar0] = iVar1;
							if (iVar1 == 1)
							{
								iVar3 = 0;
								while (iVar3 < 35)
								{
									if (Global_111858.f_14137[iVar3 /*104*/].f_24 != 0)
									{
										if (Global_111858.f_14137[iVar3 /*104*/].f_28 == 0)
										{
											if (Global_111858.f_14137[iVar3 /*104*/].f_99[Global_19681] == 1)
											{
												Global_22073++;
											}
										}
									}
									iVar3++;
								}
								func_119(Global_19662, "SET_DATA_SLOT", to_float(1), to_float(iVar0), to_float(Global_7558[iVar1 /*15*/].f_10), to_float(Global_22073), -1f, &(Global_7558[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							else if (iVar1 == 7)
							{
								if (Global_76833)
								{
									iVar4 = 0;
									iVar4 = Global_4269758;
									iVar5 = 0;
									while (iVar5 < 12)
									{
										if (Global_4269759[iVar5 /*104*/].f_24 != 0)
										{
											if (Global_4269759[iVar5 /*104*/].f_28 == 0)
											{
												if (Global_4269759[iVar5 /*104*/].f_99[Global_19681] == 1)
												{
													iVar4++;
												}
											}
										}
										iVar5++;
									}
									func_119(Global_19662, "SET_DATA_SLOT", to_float(1), to_float(iVar0), to_float(Global_7558[iVar1 /*15*/].f_10), to_float(iVar4), -1f, &(Global_7558[iVar1 /*15*/]), 0, 0, 0, 0);
								}
								else
								{
									switch (Global_19681)
									{
										case 0:
											iVar6 = Global_42812;
											break;
										
										case 1:
											iVar6 = Global_42813;
											break;
										
										case 2:
											iVar6 = Global_42814;
											break;
										
										default:
											break;
									}
									func_119(Global_19662, "SET_DATA_SLOT", to_float(1), to_float(iVar0), to_float(Global_7558[iVar1 /*15*/].f_10), to_float(iVar6), -1f, &(Global_7558[iVar1 /*15*/]), 0, 0, 0, 0);
								}
							}
							else if (iVar1 == 14)
							{
								func_119(Global_19662, "SET_DATA_SLOT", to_float(1), to_float(iVar0), to_float(Global_7558[iVar1 /*15*/].f_10), to_float(Global_22068), -1f, &(Global_7558[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							else if (iVar1 == 20)
							{
								unk_0x830F007E19C63E14(Global_19662, "SET_DATA_SLOT");
								unk_0xAD291B8F75D737AD(1);
								unk_0xAD291B8F75D737AD(iVar0);
								unk_0xAD291B8F75D737AD(Global_7558[iVar1 /*15*/].f_10);
								unk_0xAD291B8F75D737AD(0);
								func_9(&(Global_7558[iVar1 /*15*/]));
								unk_0xAD291B8F75D737AD(Global_7557);
								unk_0xE1FDD153F5858534();
							}
							else if (iVar1 == 2)
							{
								if (unk_0xCE990E643CD9D0E5(Global_7552, 6))
								{
									iVar7 = 42;
								}
								else
								{
									iVar7 = 255;
								}
								unk_0x830F007E19C63E14(Global_19662, "SET_DATA_SLOT");
								unk_0xAD291B8F75D737AD(1);
								unk_0xAD291B8F75D737AD(iVar0);
								unk_0xAD291B8F75D737AD(Global_7558[iVar1 /*15*/].f_10);
								unk_0xAD291B8F75D737AD(0);
								func_9(&(Global_7558[iVar1 /*15*/]));
								unk_0xAD291B8F75D737AD(iVar7);
								unk_0xE1FDD153F5858534();
							}
							else if (iVar1 == 3)
							{
								if (unk_0xCE990E643CD9D0E5(Global_7552, 3))
								{
									iVar8 = 42;
									Global_19868 = 1;
								}
								else
								{
									iVar8 = 255;
									Global_19868 = 0;
								}
								unk_0x830F007E19C63E14(Global_19662, "SET_DATA_SLOT");
								unk_0xAD291B8F75D737AD(1);
								unk_0xAD291B8F75D737AD(iVar0);
								unk_0xAD291B8F75D737AD(Global_7558[iVar1 /*15*/].f_10);
								unk_0xAD291B8F75D737AD(0);
								func_9(&(Global_7558[iVar1 /*15*/]));
								unk_0xAD291B8F75D737AD(iVar8);
								unk_0xE1FDD153F5858534();
							}
							else if (iVar1 == 8)
							{
								unk_0x830F007E19C63E14(Global_19662, "SET_DATA_SLOT");
								unk_0xAD291B8F75D737AD(1);
								unk_0xAD291B8F75D737AD(iVar0);
								unk_0xAD291B8F75D737AD(Global_7558[iVar1 /*15*/].f_10);
								unk_0xAD291B8F75D737AD(0);
								func_9(&(Global_7558[iVar1 /*15*/]));
								unk_0xAD291B8F75D737AD(42);
								unk_0xE1FDD153F5858534();
							}
							else if ((iVar1 == 23 && unk_0xF005CCA4263DF67F(&(Global_7558[iVar1 /*15*/]), "CELL_BENWEB")) && unk_0xCE990E643CD9D0E5(Global_7552, 6))
							{
								unk_0x830F007E19C63E14(Global_19662, "SET_DATA_SLOT");
								unk_0xAD291B8F75D737AD(1);
								unk_0xAD291B8F75D737AD(iVar0);
								unk_0xAD291B8F75D737AD(Global_7558[iVar1 /*15*/].f_10);
								unk_0xAD291B8F75D737AD(0);
								func_9(&(Global_7558[iVar1 /*15*/]));
								unk_0xAD291B8F75D737AD(42);
								unk_0xE1FDD153F5858534();
							}
							else if (Global_7558[iVar1 /*15*/].f_10 == 57 && iVar1 == 23)
							{
								iVar9 = 0;
								iVar9 = Global_1627252.f_1;
								func_119(Global_19662, "SET_DATA_SLOT", to_float(1), to_float(iVar0), to_float(Global_7558[iVar1 /*15*/].f_10), to_float(iVar9), -1f, &(Global_7558[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							else
							{
								func_119(Global_19662, "SET_DATA_SLOT", to_float(1), to_float(iVar0), to_float(Global_7558[iVar1 /*15*/].f_10), to_float(0), -1f, &(Global_7558[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							Global_8120[iVar0] = 1;
						}
					}
				}
				iVar1++;
			}
		}
		iVar0++;
	}
}

bool func_14(int iParam0)
{
	return Global_41631 == iParam0;
}

void func_15()
{
	if (Global_19681.f_1 == 1 || Global_19681.f_1 == 0)
	{
		return;
	}
	switch (Global_19683)
	{
		case 5:
			Global_19683 = 6;
			break;
		
		case 6:
			if (unk_0xCE990E643CD9D0E5(Global_7552, 5))
			{
				Global_19683 = 6;
				unk_0xD2459066EA58CE43(&Global_7552, 5);
			}
			else
			{
				Global_19683 = 3;
			}
			break;
		
		case 7:
			Global_19683 = 3;
			break;
		
		case 3:
			if (unk_0xCE990E643CD9D0E5(Global_7552, 5))
			{
				Global_19683 = 6;
				unk_0xD2459066EA58CE43(&Global_7552, 5);
			}
			else
			{
				Global_19683 = 3;
			}
			break;
		
		default:
			Global_19683 = 3;
			break;
	}
}

void func_16()
{
	if (iLocal_98)
	{
		if (timera() > 50)
		{
			iLocal_98 = 0;
		}
	}
	if (iLocal_98 == 0)
	{
		if (func_49(2, Global_19657, 0) || unk_0x1BD7199394D7F19A(2, 181))
		{
			func_20();
			iLocal_98 = 1;
			settimera(0);
		}
		if (func_49(2, Global_19658, 0) || unk_0x1BD7199394D7F19A(2, 180))
		{
			func_17();
			iLocal_98 = 1;
			settimera(0);
		}
	}
}

void func_17()
{
	func_51(Global_19662, "SET_INPUT_EVENT", to_float(3), -1082130432, -1082130432, -1082130432, -1082130432);
	unk_0xC4CC25B68A91D144(-1, "Menu_Navigate", &Global_19670, 1);
	func_18();
}

void func_18()
{
	if (func_19())
	{
		if (Global_19869 == 0)
		{
			unk_0x12C8655E426FEBB8(2);
		}
		else
		{
			unk_0x12C8655E426FEBB8(1);
		}
	}
}

int func_19()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (Global_76833)
	{
		return 0;
	}
	iVar2 = 0;
	iVar0 = unk_0xFA3A11B011BBD7F6();
	iVar1 = unk_0xF7B3A1430308F92B(iVar0);
	if (iVar1 == 4)
	{
		iVar2 = 1;
	}
	if (Global_4271302 || iVar2)
	{
		return 1;
	}
	return 1;
}

void func_20()
{
	func_51(Global_19662, "SET_INPUT_EVENT", to_float(1), -1082130432, -1082130432, -1082130432, -1082130432);
	unk_0xC4CC25B68A91D144(-1, "Menu_Navigate", &Global_19670, 1);
	func_21();
}

void func_21()
{
	if (func_19())
	{
		if (Global_19869 == 0)
		{
			unk_0x12C8655E426FEBB8(1);
		}
		else
		{
			unk_0x12C8655E426FEBB8(2);
		}
	}
}

void func_22(int iParam0, char* sParam1, char* sParam2, char* sParam3, char* sParam4, char* sParam5, char* sParam6)
{
	unk_0x830F007E19C63E14(iParam0, sParam1);
	func_9(sParam2);
	if (!unk_0x7BCC91F3C1CF24E8(sParam3))
	{
		func_9(sParam3);
	}
	if (!unk_0x7BCC91F3C1CF24E8(sParam4))
	{
		func_9(sParam4);
	}
	if (!unk_0x7BCC91F3C1CF24E8(sParam5))
	{
		func_9(sParam5);
	}
	if (!unk_0x7BCC91F3C1CF24E8(sParam6))
	{
		func_9(sParam6);
	}
	unk_0xE1FDD153F5858534();
}

void func_23()
{
	if (unk_0x95EF219D38B20CFF(Global_19662))
	{
		func_24();
		if (Global_19680 == 1)
		{
			if (Global_19669)
			{
				func_119(Global_19662, "SET_SOFT_KEYS", 2f, 1f, 5f, -1f, -1f, "CELL_203", 0, 0, 0, 0);
			}
			else
			{
				func_119(Global_19662, "SET_SOFT_KEYS", 2f, 1f, 5f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			if (Global_21052)
			{
				func_119(Global_19662, "SET_SOFT_KEYS", 3f, 0f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			else if (unk_0xCE990E643CD9D0E5(Global_7551, 20))
			{
				func_119(Global_19662, "SET_SOFT_KEYS", 3f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			else if (Global_19669)
			{
				func_119(Global_19662, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, "CELL_204", 0, 0, 0, 0);
			}
			else
			{
				func_119(Global_19662, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			func_119(Global_19662, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			unk_0xD2459066EA58CE43(&Global_7551, 17);
		}
		else
		{
			func_119(Global_19662, "SET_SOFT_KEYS", 2f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			func_119(Global_19662, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			unk_0xD2459066EA58CE43(&Global_7551, 17);
			if (unk_0xCE990E643CD9D0E5(Global_7551, 20))
			{
				func_119(Global_19662, "SET_SOFT_KEYS", 3f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			else if (Global_19669)
			{
				func_119(Global_19662, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, "CELL_202", 0, 0, 0, 0);
				if (Global_19624)
				{
					func_119(Global_19662, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
				}
			}
			else
			{
				func_119(Global_19662, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
			}
		}
	}
}

void func_24()
{
	if (Global_76833)
	{
		func_119(Global_19662, "SET_SOFT_KEYS", 1f, 0f, 9f, -1f, -1f, 0, 0, 0, 0, 0);
		unk_0xD2459066EA58CE43(&Global_7551, 17);
	}
}

int func_25(var uParam0, int iParam1, char* sParam2, var uParam3, var uParam4, var uParam5, var uParam6, int iParam7, int iParam8, int iParam9, int iParam10, bool bParam11)
{
	var uVar0;
	var uVar1;
	
	func_42(uParam0, iParam1, sParam2, iParam9, iParam10, 0);
	func_41();
	if (iParam8 == 1)
	{
		Global_21017 = 1;
	}
	else
	{
		Global_21017 = 0;
	}
	uVar0 = 10;
	uVar1 = 10;
	func_39(2, &uVar0, &uVar1, uParam3, uParam4, uParam5, uParam6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
	return func_26(&uVar0, &uVar1, iParam7, bParam11);
}

int func_26(var uParam0, var uParam1, int iParam2, bool bParam3)
{
	int iVar0;
	
	Global_21006 = 0;
	if (Global_21005 == 0 || Global_21007 == 2)
	{
		if (Global_21005 != 0)
		{
			if (iParam2 > Global_21007)
			{
				if (bParam3 == 0)
				{
					unk_0xBE4122AC23440E7D(false);
					Global_19681.f_1 = 3;
					Global_21005 = 0;
					Global_21006 = 1;
					Global_21058 = 0;
					Global_21001 = 0;
					Global_21002 = 0;
				}
				else
				{
					func_109();
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
		if (func_38(8, -1))
		{
			return 0;
		}
		Global_21081 = { Global_21075 };
		func_37();
		Global_20294 = { Global_20459 };
		Global_21011 = Global_21012;
		Global_21018 = Global_21019;
		Global_2621442 = Global_2621441;
		Global_21020 = { Global_21036 };
		Global_21013 = Global_21014;
		Global_21995 = Global_21996;
		Global_22003 = { Global_22009 };
		Global_22001 = Global_22002;
		Global_21997 = Global_21998;
		Global_21999 = Global_22000;
		Global_20624.f_368 = Global_21992;
		Global_20624.f_369 = Global_21993;
		Global_20624.f_370 = Global_21994;
		Global_21001 = Global_21002;
		Global_21003 = Global_21004;
		if (Global_21263 == 0)
		{
			Global_21159[0 /*6*/] = { Global_21185[0 /*6*/] };
			Global_21159[1 /*6*/] = { Global_21185[1 /*6*/] };
			Global_21211[0 /*6*/] = { Global_21237[0 /*6*/] };
			Global_21211[1 /*6*/] = { Global_21237[1 /*6*/] };
			Global_21172[0 /*6*/] = { Global_21198[0 /*6*/] };
			Global_21172[1 /*6*/] = { Global_21198[1 /*6*/] };
			Global_21224[0 /*6*/] = { Global_21250[0 /*6*/] };
			Global_21224[1 /*6*/] = { Global_21250[1 /*6*/] };
		}
		if (Global_21011)
		{
			unk_0xD2459066EA58CE43(&Global_7551, 20);
			unk_0xD2459066EA58CE43(&Global_7552, 17);
			unk_0xD2459066EA58CE43(&Global_7553, 0);
			if (bParam3)
			{
				func_30();
				if (Global_8356[Global_19681 /*2811*/][0 /*281*/].f_259 == 2)
				{
					if (iParam2 == 13)
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
				if (func_29())
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
					if (Global_21263 == 0)
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
			}
			if (func_28())
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
			}
			func_27();
			Global_21015 = bParam3;
		}
		Global_21007 = iParam2;
		if (Global_21001 > 0)
		{
			iVar0 = 0;
			while (iVar0 < Global_21001)
			{
				StringCopy(&(Global_20624.f_6[iVar0 /*6*/]), (*uParam0)[iVar0], 24);
				StringCopy(&(Global_20624.f_187[iVar0 /*6*/]), (*uParam1)[iVar0], 24);
				iVar0++;
			}
		}
		Global_19871 = 0;
		func_53();
		return 1;
	}
	if (Global_21005 == 5)
	{
		return 0;
	}
	if (iParam2 < Global_21007 || iParam2 == Global_21007)
	{
		return 0;
	}
	if (iParam2 == 2)
	{
	}
	else
	{
		func_109();
	}
	return 0;
}

void func_27()
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

int func_28()
{
	if (Global_19681.f_1 == 1 || Global_19681.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

int func_29()
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

void func_30()
{
	if (func_14(14))
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
		Global_19681 = func_31();
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

var func_31()
{
	func_32();
	return Global_111858.f_2359.f_539.f_4321;
}

void func_32()
{
	int iVar0;
	
	if (unk_0xAE06B9E39EBDE049(unk_0x9B0761B4C3EB8BC7()))
	{
		if (func_35(Global_111858.f_2359.f_539.f_4321) != unk_0x36FE6D3220816ADA(unk_0x9B0761B4C3EB8BC7()))
		{
			iVar0 = func_34(unk_0x9B0761B4C3EB8BC7());
			if (func_33(iVar0) && (!func_14(14) || Global_110809))
			{
				if (Global_111858.f_2359.f_539.f_4321 != iVar0 && func_33(Global_111858.f_2359.f_539.f_4321))
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

bool func_33(int iParam0)
{
	return iParam0 < 3;
}

int func_34(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0xAE06B9E39EBDE049(iParam0))
	{
		iVar1 = unk_0x36FE6D3220816ADA(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_35(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_35(int iParam0)
{
	if (func_33(iParam0))
	{
		return func_36(iParam0);
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

var func_36(int iParam0)
{
	return Global_1848[iParam0 /*29*/];
}

void func_37()
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

bool func_38(int iParam0, int iParam1)
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

void func_39(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16)
{
	func_40(iParam0);
	(*uParam1)[0] = uParam3;
	(*uParam2)[0] = uParam4;
	(*uParam1)[1] = uParam5;
	(*uParam2)[1] = uParam6;
	(*uParam1)[2] = iParam7;
	(*uParam2)[2] = iParam8;
	(*uParam1)[3] = iParam9;
	(*uParam2)[3] = iParam10;
	(*uParam1)[4] = iParam11;
	(*uParam2)[4] = iParam12;
	(*uParam1)[5] = iParam13;
	(*uParam2)[5] = iParam14;
	(*uParam1)[6] = iParam15;
	(*uParam2)[6] = iParam16;
}

void func_40(var uParam0)
{
	Global_21002 = uParam0;
	Global_21012 = 1;
	Global_21019 = 0;
	Global_21014 = 0;
	Global_21996 = 0;
	Global_22002 = 0;
	Global_2621441 = 0;
}

void func_41()
{
	Global_21053 = 0;
	Global_21012 = 1;
	Global_21019 = 0;
	Global_21014 = 0;
	Global_21996 = 0;
	Global_21998 = 0;
	Global_21019 = 0;
	Global_22002 = 0;
	Global_21010 = 0;
	Global_21057 = 0;
	Global_21059 = 0;
	Global_2621441 = 0;
}

void func_42(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5)
{
	Global_20459 = { *uParam0 };
	Global_6867 = iParam1;
	StringCopy(&Global_21075, sParam2, 24);
	Global_21994 = iParam5;
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

int func_43(var uParam0, var uParam1, int iParam2, char* sParam3, var uParam4, var uParam5, int iParam6, int iParam7, int iParam8, int iParam9, bool bParam10)
{
	func_42(uParam1, iParam2, sParam3, iParam8, iParam9, 0);
	func_41();
	if (iParam7 == 1)
	{
		Global_21017 = 1;
	}
	else
	{
		Global_21017 = 0;
	}
	func_40(uParam0);
	return func_26(uParam4, uParam5, iParam6, bParam10);
}

var func_44(var uParam0)
{
	return uParam0;
}

void func_45()
{
	if (!unk_0xA59F96B50B97E63C(unk_0x9B0761B4C3EB8BC7(), 0))
	{
		unk_0xC4CC25B68A91D144(-1, "Menu_Accept", &Global_19670, 1);
		func_46();
	}
}

void func_46()
{
	if (func_19())
	{
		unk_0x12C8655E426FEBB8(5);
	}
}

void func_47()
{
	if (func_48())
	{
		if (!unk_0x5AEB5DDFFAD43CA5(unk_0x9B0761B4C3EB8BC7()))
		{
			if (!unk_0x47DBF174A0CB9D55(unk_0x9B0761B4C3EB8BC7(), 0))
			{
				if (!Global_19624)
				{
					if (!unk_0xCE990E643CD9D0E5(Global_7551, 11))
					{
						func_61();
					}
				}
			}
		}
	}
}

int func_48()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (!unk_0xA59F96B50B97E63C(unk_0x9B0761B4C3EB8BC7(), 0))
	{
		if (Global_19681.f_1 == 10 || Global_19681.f_1 == 9)
		{
			if (Global_19624 == 0)
			{
				if (Global_6866 != 128)
				{
					if (!unk_0x47DBF174A0CB9D55(unk_0x9B0761B4C3EB8BC7(), 0))
					{
						if (Global_21005 != 2)
						{
						}
					}
				}
			}
		}
		if (func_14(14))
		{
			return 0;
		}
		if (unk_0xB8DB6610D5815003(unk_0x9B0761B4C3EB8BC7(), 0))
		{
			return 0;
		}
		if (unk_0x47DBF174A0CB9D55(unk_0x9B0761B4C3EB8BC7(), 0))
		{
			if (!unk_0xDA4C30E92D56CC0A())
			{
				if (unk_0xE72C9284B5143451(unk_0xA5D5B1042E8F47BD(unk_0x9B0761B4C3EB8BC7(), 0)))
				{
					return 0;
				}
			}
		}
		if (((unk_0x9D7D76BBBFE285E0(unk_0x9B0761B4C3EB8BC7()) || unk_0xE43E3F96A5D750CE(unk_0x9B0761B4C3EB8BC7())) || unk_0x5197F8CD4A72E68F(unk_0x460153A63B9477BC())) || (unk_0xEEFD6B1BEB00F02E(unk_0x9B0761B4C3EB8BC7()) && !(unk_0xCE990E643CD9D0E5(Global_4456448.f_37, 17) && (unk_0xFC559366953F62B3() || Global_1655232))))
		{
			return 0;
		}
		if (Global_110906)
		{
			return 0;
		}
	}
	if (Global_76833)
	{
		return 0;
	}
	iVar2 = 0;
	iVar0 = unk_0xFA3A11B011BBD7F6();
	iVar1 = unk_0xF7B3A1430308F92B(iVar0);
	if (iVar1 == 4 && (iVar0 == 0 || unk_0xDA4C30E92D56CC0A()))
	{
		iVar2 = 1;
		if (!unk_0xA59F96B50B97E63C(unk_0x9B0761B4C3EB8BC7(), 0))
		{
			if (unk_0x47DBF174A0CB9D55(unk_0x9B0761B4C3EB8BC7(), 0))
			{
				iVar3 = unk_0xA5D5B1042E8F47BD(unk_0x9B0761B4C3EB8BC7(), 0);
				if ((((((((unk_0x97AFEF6099069369(unk_0x36FE6D3220816ADA(iVar3)) || unk_0x72B9CC2155AEDF58(unk_0x36FE6D3220816ADA(iVar3))) || unk_0x0CE6C9C2E6F95026(unk_0x36FE6D3220816ADA(iVar3))) || unk_0x36FE6D3220816ADA(iVar3) == joaat("seashark")) || unk_0x36FE6D3220816ADA(iVar3) == joaat("seashark2")) || unk_0x36FE6D3220816ADA(iVar3) == joaat("rhino")) || unk_0x36FE6D3220816ADA(iVar3) == joaat("submersible")) || unk_0x36FE6D3220816ADA(iVar3) == joaat("submersible2")) || unk_0x36FE6D3220816ADA(iVar3) == joaat("toro"))
				{
					iVar2 = 0;
				}
			}
		}
	}
	if (Global_4271302 || iVar2 == 1)
	{
		if (unk_0x7B70881748D166CD(joaat("apptrackify")) > 0 || Global_111858.f_14047.f_89)
		{
			if (unk_0x7B70881748D166CD(joaat("michael2")) > 0)
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
			return 1;
		}
	}
	return 0;
}

int func_49(int iParam0, int iParam1, int iParam2)
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

int func_50(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 4)
	{
		return 0;
	}
	return Global_1848[iParam0 /*29*/].f_24[iParam1];
}

void func_51(int iParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6)
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

void func_52()
{
	if (func_48())
	{
		if (!unk_0x5AEB5DDFFAD43CA5(unk_0x9B0761B4C3EB8BC7()))
		{
			if (!unk_0x47DBF174A0CB9D55(unk_0x9B0761B4C3EB8BC7(), 0))
			{
				if (!Global_19624)
				{
					if (unk_0xCE990E643CD9D0E5(Global_7551, 11))
					{
						func_3();
					}
				}
			}
		}
	}
}

void func_53()
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

int func_54()
{
	if (unk_0x25DDB354A40FFCDB())
	{
		iLocal_91 = unk_0x624736CA66E14161(unk_0x6CAAB7E78B5D978A(), iLocal_90);
	}
	else
	{
		iLocal_88 = unk_0x578C4EF320340AF7();
		iLocal_91 = (iLocal_88 - iLocal_87);
	}
	return 0;
}

void func_55(int iParam0)
{
	if (func_59())
	{
		return;
	}
	if (Global_19864)
	{
		if (func_58())
		{
			func_56(1, 1);
		}
		else
		{
			func_56(0, 0);
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
	if (!func_28())
	{
		Global_19681.f_1 = 3;
	}
}

void func_56(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		if (func_57(0))
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

int func_57(int iParam0)
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

bool func_58()
{
	return unk_0xCE990E643CD9D0E5(Global_1689730, 5);
}

bool func_59()
{
	return unk_0xCE990E643CD9D0E5(Global_1689730, 19);
}

void func_60()
{
	if (func_49(2, Global_19658, 0))
	{
		if (Global_22016 == 0)
		{
			if (Global_21011)
			{
				if (unk_0xCE990E643CD9D0E5(Global_7552, 17))
				{
				}
				else
				{
					unk_0xD82F941DE4FB6295();
				}
			}
		}
	}
}

void func_61()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0;
	iVar1 = 0;
	if (!unk_0x5AEB5DDFFAD43CA5(unk_0x9B0761B4C3EB8BC7()))
	{
		if (func_62() && unk_0xB8DB6610D5815003(unk_0x9B0761B4C3EB8BC7(), 0))
		{
			iVar1 = 1;
		}
	}
	if (!Global_76833)
	{
		if (!unk_0x5AEB5DDFFAD43CA5(unk_0x9B0761B4C3EB8BC7()) && iVar1 == 0)
		{
			iVar2 = unk_0xA98E0435012EAF07(unk_0x9B0761B4C3EB8BC7(), 0);
			if (Global_76833)
			{
				if (((((iVar2 == 15 || iVar2 == 16) || iVar2 == 17) || iVar2 == 18) || iVar2 == 19) || unk_0x2489BECD123A725B(unk_0x9B0761B4C3EB8BC7()))
				{
					iVar0 = 1;
				}
			}
			else if (unk_0x2489BECD123A725B(unk_0x9B0761B4C3EB8BC7()))
			{
				iVar0 = 1;
			}
			if (!Global_19624)
			{
				if (Global_6866 != 128)
				{
					if (iVar0 == 0)
					{
						if (!unk_0xA59F96B50B97E63C(unk_0x9B0761B4C3EB8BC7(), 0))
						{
							if (unk_0x47DBF174A0CB9D55(unk_0x9B0761B4C3EB8BC7(), 0))
							{
							}
							else
							{
								if (Global_76833)
								{
									unk_0x694113444F21E39F(unk_0x9B0761B4C3EB8BC7(), 244, false);
									unk_0x694113444F21E39F(unk_0x9B0761B4C3EB8BC7(), 243, false);
									unk_0x694113444F21E39F(unk_0x9B0761B4C3EB8BC7(), 242, false);
								}
								unk_0xBE20AB8238688965(&Global_7551, 11);
								unk_0x48E48D5929D45C6F(unk_0x9B0761B4C3EB8BC7(), 1, 1);
							}
						}
					}
				}
			}
		}
	}
}

int func_62()
{
	int iVar0;
	int iVar1;
	
	iVar0 = unk_0xFA3A11B011BBD7F6();
	iVar1 = unk_0xF7B3A1430308F92B(iVar0);
	if (iVar1 == 4)
	{
		return 1;
	}
	return 0;
}

void func_63()
{
	if (Global_76833 == 0)
	{
		func_60();
	}
	if (iLocal_33 == 1)
	{
		func_55(0);
	}
	if (iLocal_30 == 0)
	{
		iLocal_30 = 1;
		Global_22018 = 1;
		if (func_50(Global_6866, Global_19681) == 0)
		{
			func_119(Global_19662, "SET_DATA_SLOT", to_float(4), to_float(0), to_float(4), -1f, -1f, &Global_21147, "CELL_300", "CELL_195", "CELL_195", 0);
			func_51(Global_19662, "DISPLAY_VIEW", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
		}
		else
		{
			func_119(Global_19662, "SET_DATA_SLOT", to_float(4), to_float(0), to_float(4), -1f, -1f, &Global_21147, &(Global_1848[Global_6866 /*29*/].f_7), &(Global_1848[Global_6866 /*29*/].f_3), &(Global_1848[Global_6866 /*29*/].f_3), 0);
			func_51(Global_19662, "DISPLAY_VIEW", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
		}
		Global_19607 = 0.2f;
		if (Global_19669)
		{
			func_119(Global_19662, "SET_SOFT_KEYS", 2f, 1f, 13f, -1f, -1f, "CELL_212", 0, 0, 0, 0);
			func_119(Global_19662, "SET_SOFT_KEYS", 3f, 1f, 14f, -1f, -1f, "CELL_213", 0, 0, 0, 0);
		}
		else
		{
			func_119(Global_19662, "SET_SOFT_KEYS", 2f, 1f, 13f, -1f, -1f, 0, 0, 0, 0, 0);
			func_119(Global_19662, "SET_SOFT_KEYS", 3f, 1f, 14f, -1f, -1f, 0, 0, 0, 0, 0);
		}
		func_119(Global_19662, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
		unk_0xD2459066EA58CE43(&Global_7551, 17);
	}
	if (Global_21058 == 1)
	{
		if (Global_19681.f_1 < 6)
		{
			Global_21058 = 0;
		}
		else
		{
			if (Global_19621 == 0)
			{
				if (func_49(2, Global_19650, 0))
				{
					Global_19607 = 0.19f;
					Global_21058 = 0;
					func_45();
					Global_22023 = 1;
					iLocal_32 = 1;
				}
			}
			if (func_49(2, Global_19651, 0))
			{
				Global_19607 = 0.19f;
				Global_21058 = 0;
				func_45();
				Global_22023 = 2;
			}
		}
	}
	else if (Global_22023 == 2)
	{
		if (Global_21006 == 0)
		{
			unk_0xBE4122AC23440E7D(false);
			Global_21005 = 6;
		}
		func_15();
		Global_19681.f_1 = Global_19683;
		func_8();
	}
	else if (!unk_0x6B12213471F330A3())
	{
		iLocal_32 = 0;
		unk_0xBE4122AC23440E7D(false);
		Global_21005 = 6;
		unk_0xC4CC25B68A91D144(-1, "Hang_Up", &Global_19670, 1);
		func_15();
		Global_19681.f_1 = Global_19683;
		func_8();
	}
}

void func_64()
{
	if (Global_19872 == 1)
	{
		if (unk_0x6B12213471F330A3())
		{
			if (unk_0xBA34676748B6E39C())
			{
				Global_19872 = 0;
			}
		}
		if (!unk_0x5A228A6A51E757C8(unk_0x460153A63B9477BC()))
		{
			Global_19872 = 0;
			unk_0xBE4122AC23440E7D(false);
			Global_21005 = 6;
		}
	}
	if (timerb() > iLocal_35)
	{
		if (Global_19872 == 1)
		{
			Global_19872 = 0;
		}
	}
	if (timera() < Global_22026 || Global_19872 == 1)
	{
		if (func_49(2, Global_19649, 0))
		{
			if (unk_0x5A228A6A51E757C8(unk_0x460153A63B9477BC()))
			{
				if (unk_0x4DC4117F94CD5B84(unk_0x460153A63B9477BC()))
				{
					if (unk_0xCE990E643CD9D0E5(Global_7551, 20))
					{
					}
					else
					{
						Global_19659 = 1;
						func_45();
						unk_0xBE4122AC23440E7D(false);
						Global_21054 = 1;
						Global_21005 = 6;
						unk_0xD2459066EA58CE43(&Global_7551, 27);
						if (!Global_21016)
						{
							unk_0xBE20AB8238688965(&Global_7552, 5);
						}
						func_15();
						Global_19681.f_1 = Global_19683;
						func_8();
					}
				}
			}
		}
	}
	else
	{
		unk_0xD2459066EA58CE43(&Global_7551, 27);
		Global_21005 = 4;
		Global_21062 = 0;
		func_67();
		func_66();
		if (!Global_21018)
		{
			if (Global_22022 == 0)
			{
				if (!unk_0xCE990E643CD9D0E5(Global_7553, 5))
				{
					unk_0xCC220544E304DF15();
				}
				unk_0xD2459066EA58CE43(&Global_7553, 5);
			}
			else
			{
				unk_0xE548F87D3CA3FC96(Global_20624.f_368, Global_20624.f_369);
			}
		}
		func_65();
	}
}

void func_65()
{
	if (unk_0x25DDB354A40FFCDB())
	{
		iLocal_90 = unk_0x6CAAB7E78B5D978A();
	}
	else
	{
		iLocal_87 = unk_0x578C4EF320340AF7();
	}
}

void func_66()
{
	if (Global_21018)
	{
		if (Global_76833)
		{
			if (unk_0x95EF219D38B20CFF(Global_19662))
			{
				if (!unk_0xF8EDFF98A9C94C74())
				{
					func_119(Global_19662, "SET_SOFT_KEYS", 1f, 1f, 8f, -1f, -1f, "CELL_201", 0, 0, 0, 0);
					unk_0xBE20AB8238688965(&(Global_2540384.f_1792), 15);
				}
			}
		}
	}
}

void func_67()
{
	if (unk_0x95EF219D38B20CFF(Global_19662))
	{
		if (!Global_21013)
		{
			func_119(Global_19662, "SET_SOFT_KEYS", 2f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			func_119(Global_19662, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			unk_0xD2459066EA58CE43(&Global_7551, 17);
			if (unk_0xCE990E643CD9D0E5(Global_7551, 20))
			{
				func_119(Global_19662, "SET_SOFT_KEYS", 3f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			else if (Global_19669)
			{
				func_119(Global_19662, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, "CELL_202", 0, 0, 0, 0);
				if (Global_19624)
				{
					func_119(Global_19662, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
				}
			}
			else
			{
				func_119(Global_19662, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			if (Global_21018)
			{
				unk_0x830F007E19C63E14(Global_19662, "SET_DATA_SLOT");
				unk_0xAD291B8F75D737AD(4);
				unk_0xAD291B8F75D737AD(0);
				unk_0xAD291B8F75D737AD(2);
				unk_0xB23270F3D5E62FDE("CELL_CONDFON");
				unk_0x9EFD301E3BE8324E(&Global_21020);
				unk_0x2042E9CA4306F725();
				func_9("CELL_300");
				func_9("CELL_219");
				func_9("CELL_219");
				unk_0xE1FDD153F5858534();
			}
			else if (func_50(Global_6866, Global_19681) == 0)
			{
				func_119(Global_19662, "SET_DATA_SLOT", to_float(4), to_float(0), to_float(3), -1f, -1f, &(Global_117[Global_6866 /*10*/].f_4), "CELL_300", "CELL_219", "CELL_195", 0);
			}
			else
			{
				func_119(Global_19662, "SET_DATA_SLOT", to_float(4), to_float(0), to_float(3), -1f, -1f, &(Global_1848[Global_6866 /*29*/].f_3), &(Global_1848[Global_6866 /*29*/].f_7), "CELL_219", &(Global_1848[Global_6866 /*29*/].f_3), 0);
			}
		}
		func_51(Global_19662, "DISPLAY_VIEW", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
	}
}

void func_68()
{
	if (unk_0x25DDB354A40FFCDB())
	{
		iLocal_92 = unk_0x624736CA66E14161(unk_0x6CAAB7E78B5D978A(), iLocal_78);
		iLocal_93 = unk_0x624736CA66E14161(unk_0x6CAAB7E78B5D978A(), iLocal_81);
	}
	else
	{
		iLocal_77 = unk_0x578C4EF320340AF7();
		iLocal_92 = (iLocal_77 - iLocal_76);
		iLocal_80 = unk_0x578C4EF320340AF7();
		iLocal_93 = (iLocal_80 - iLocal_79);
	}
	if (Global_21052 == 1)
	{
		if (func_48())
		{
			if (iLocal_92 > 4000)
			{
				if (unk_0xCE990E643CD9D0E5(Global_7551, 14))
				{
					if (unk_0x95EF219D38B20CFF(Global_19662))
					{
						func_45();
						Global_19680 = 2;
						func_67();
						func_66();
					}
				}
			}
		}
		else if (iLocal_92 > 2000)
		{
			if (unk_0xCE990E643CD9D0E5(Global_7551, 14))
			{
				if (unk_0x95EF219D38B20CFF(Global_19662))
				{
					func_45();
					Global_19680 = 2;
					func_67();
					func_66();
				}
			}
		}
	}
	if (iLocal_93 > 10000)
	{
		Global_19680 = 3;
	}
	if (Global_19680 == 2)
	{
		iLocal_30 = 0;
		Global_21005 = 4;
		func_61();
		Global_21062 = 0;
		func_67();
		func_66();
		if (!Global_21018)
		{
			if (Global_22022 == 0)
			{
				unk_0xCC220544E304DF15();
			}
			else
			{
				unk_0xE548F87D3CA3FC96(Global_20624.f_368, Global_20624.f_369);
			}
		}
		func_65();
		Global_22021 = 0;
	}
	if (Global_21052 == 0)
	{
		if (Global_19680 == 3)
		{
			if (Global_21018)
			{
				func_70();
				func_55(0);
			}
			else
			{
				func_69();
				Global_22021 = 1;
				unk_0xBE4122AC23440E7D(false);
				Global_21005 = 6;
				func_15();
				Global_19681.f_1 = Global_19683;
				func_8();
			}
		}
	}
	else if (Global_19680 == 3)
	{
	}
}

void func_69()
{
}

void func_70()
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
		else if (func_73(Global_2547059.f_20))
		{
			if (unk_0x78A7795C9C51946D(&(Global_2547059.f_20)))
			{
				if (!unk_0x9D0DD6E9B396012A(&(Global_2547059.f_20)))
				{
					func_71();
				}
			}
		}
		else
		{
			func_71();
		}
	}
	else
	{
		func_71();
	}
	if (Global_2547059.f_37)
	{
		func_55(0);
	}
	Global_2547059.f_37 = 0;
	Global_2547059.f_3 = 0;
}

void func_71()
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
	func_72(&(Global_2547059.f_20));
}

void func_72(var uParam0)
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

bool func_73(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12)
{
	return unk_0xF6B8932480699645(&uParam0, 13);
}

void func_74()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	var uVar5;
	var uVar6;
	var uVar7;
	var uVar8;
	var uVar9;
	var uVar10;
	var uVar11;
	var uVar12;
	int iVar13;
	
	iLocal_75 = 0;
	iVar0 = 1;
	iVar1 = 1;
	iVar2 = 0;
	iLocal_29 = 0;
	iLocal_31 = 0;
	while (iLocal_75 < Global_21001)
	{
		func_91();
		func_90();
		func_89();
		iVar13 = 0;
		while (iVar2 < 70 && iLocal_29 == 0)
		{
			cLocal_42 = { Global_20624.f_6[iLocal_75 /*6*/] };
			StringConCat(&cLocal_42, "A", 24);
			Global_19873[iVar2 /*6*/] = { Global_20624.f_6[iLocal_75 /*6*/] };
			StringConCat(&(Global_19873[iVar2 /*6*/]), "_", 24);
			StringIntConCat(&(Global_19873[iVar2 /*6*/]), iVar1, 24);
			cLocal_38 = { Global_19873[iVar2 /*6*/] };
			StringConCat(&cLocal_38, "A", 24);
			if (unk_0x3030AE9FCF1BC243(&cLocal_38))
			{
				StringCopy(&cLocal_46, unk_0x7C774D8CB8DC6FE3(&cLocal_38), 64);
				iVar3 = func_88(iVar13);
				iVar4 = func_87(iVar13);
				uVar5 = func_85(iVar13);
				uLocal_67 = func_84();
				uLocal_68 = func_83();
				uLocal_69 = func_82();
				uVar6 = func_81(iVar13);
				uVar7 = func_80(iVar13);
				uVar8 = func_79(iVar13);
				uVar12 = func_78(iVar13);
				uVar9 = func_77(iVar13);
				uVar10 = func_76(iVar13);
				uVar11 = func_75(iVar13);
				if (unk_0x3030AE9FCF1BC243(&(Global_19873[iVar2 /*6*/])))
				{
					if (unk_0xF005CCA4263DF67F(&(Global_19873[iVar2 /*6*/]), &(Global_20624.f_187[iLocal_75 /*6*/])))
					{
						if (iVar3 > 36 || iVar4 > 36)
						{
						}
						unk_0x0F6C339FECB3D988(iVar3, &cLocal_46, &(Global_19873[iVar2 /*6*/]), iVar4, uVar5, 0, uVar6, uVar7, uVar8, uVar12, uVar9, uVar10, uVar11);
					}
				}
				iVar1 = (iVar1 + iVar0);
			}
			else if (unk_0x3030AE9FCF1BC243(&cLocal_42))
			{
				StringCopy(&cLocal_46, unk_0x7C774D8CB8DC6FE3(&cLocal_42), 64);
				iVar3 = func_88(0);
				iVar4 = func_87(0);
				uVar5 = func_85(0);
				uLocal_67 = func_84();
				uLocal_68 = func_83();
				uLocal_69 = func_82();
				uVar6 = func_81(0);
				uVar7 = func_80(0);
				uVar8 = func_79(0);
				uVar12 = func_78(0);
				uVar9 = func_77(0);
				uVar10 = func_76(0);
				uVar11 = func_75(0);
				unk_0x0F6C339FECB3D988(iVar3, &cLocal_46, &(Global_20624.f_6[iLocal_75 /*6*/]), iVar4, uVar5, 1, uVar6, uVar7, uVar8, uVar12, uVar9, uVar10, uVar11);
				StringCopy(&(Global_19873[iVar2 /*6*/]), "END", 24);
				iLocal_29 = 1;
			}
			else
			{
				StringCopy(&(Global_19873[iVar2 /*6*/]), "END", 24);
				iLocal_29 = 1;
			}
			iVar2++;
			iVar13++;
			if (iVar2 == 70)
			{
			}
		}
		iLocal_75++;
		iLocal_29 = 0;
		iVar1 = 1;
		iVar13 = 0;
		iVar2 = 0;
	}
	if (Global_21011 == 0)
	{
		unk_0x2C454D08B34FEB9C(uLocal_68);
		unk_0x3473D6217A1E39C1(uLocal_69);
		unk_0x01BCE5A1737EFC2D(Global_20624.f_368, Global_20624.f_369, Global_20624.f_370, uLocal_67);
		Global_21005 = 4;
	}
}

int func_75(int iParam0)
{
	char* sVar0;
	
	sVar0 = unk_0xFBDA18DDC065F747(unk_0x7C774D8CB8DC6FE3(&cLocal_70), iParam0 * 7 + 6, iParam0 * 7 + 7);
	if (unk_0xF005CCA4263DF67F(sVar0, "0"))
	{
		return 0;
	}
	return 1;
}

int func_76(int iParam0)
{
	char* sVar0;
	
	sVar0 = unk_0xFBDA18DDC065F747(unk_0x7C774D8CB8DC6FE3(&cLocal_70), iParam0 * 7 + 5, iParam0 * 7 + 6);
	if (unk_0xF005CCA4263DF67F(sVar0, "0"))
	{
		return 0;
	}
	return 1;
}

int func_77(int iParam0)
{
	char* sVar0;
	
	sVar0 = unk_0xFBDA18DDC065F747(unk_0x7C774D8CB8DC6FE3(&cLocal_70), iParam0 * 7 + 4, iParam0 * 7 + 5);
	if (unk_0xF005CCA4263DF67F(sVar0, "0"))
	{
		return 0;
	}
	return 1;
}

int func_78(int iParam0)
{
	char* sVar0;
	
	sVar0 = unk_0xFBDA18DDC065F747(unk_0x7C774D8CB8DC6FE3(&cLocal_70), iParam0 * 7 + 3, iParam0 * 7 + 4);
	if (unk_0xF005CCA4263DF67F(sVar0, "0"))
	{
		return 1;
	}
	if (unk_0xF005CCA4263DF67F(sVar0, "1"))
	{
		return 1;
	}
	if (unk_0xF005CCA4263DF67F(sVar0, "2"))
	{
		return 2;
	}
	if (unk_0xF005CCA4263DF67F(sVar0, "3"))
	{
		return 3;
	}
	if (unk_0xF005CCA4263DF67F(sVar0, "4"))
	{
		return 0;
	}
	return 0;
}

int func_79(int iParam0)
{
	char* sVar0;
	
	sVar0 = unk_0xFBDA18DDC065F747(unk_0x7C774D8CB8DC6FE3(&cLocal_70), iParam0 * 7 + 2, iParam0 * 7 + 3);
	if (unk_0xF005CCA4263DF67F(sVar0, "0"))
	{
		return 0;
	}
	return 1;
}

int func_80(int iParam0)
{
	char* sVar0;
	
	sVar0 = unk_0xFBDA18DDC065F747(unk_0x7C774D8CB8DC6FE3(&cLocal_70), iParam0 * 7 + 1, iParam0 * 7 + 2);
	if (unk_0xF005CCA4263DF67F(sVar0, "0"))
	{
		return 0;
	}
	return 1;
}

int func_81(int iParam0)
{
	char* sVar0;
	
	sVar0 = unk_0xFBDA18DDC065F747(unk_0x7C774D8CB8DC6FE3(&cLocal_70), iParam0 * 7, iParam0 * 7 + 1);
	if (unk_0xF005CCA4263DF67F(sVar0, "0"))
	{
		return 0;
	}
	return 1;
}

int func_82()
{
	char* sVar0;
	
	sVar0 = unk_0xFBDA18DDC065F747(unk_0x7C774D8CB8DC6FE3(&cLocal_60), 2, 3);
	if (unk_0xF005CCA4263DF67F(sVar0, "0"))
	{
		return 0;
	}
	return 1;
}

int func_83()
{
	char* sVar0;
	
	sVar0 = unk_0xFBDA18DDC065F747(unk_0x7C774D8CB8DC6FE3(&cLocal_60), 1, 2);
	if (unk_0xF005CCA4263DF67F(sVar0, "0"))
	{
		return 0;
	}
	return 1;
}

int func_84()
{
	char* sVar0;
	
	sVar0 = unk_0xFBDA18DDC065F747(unk_0x7C774D8CB8DC6FE3(&cLocal_60), 0, 1);
	if (unk_0xF005CCA4263DF67F(sVar0, "0"))
	{
		return 0;
	}
	return 1;
}

int func_85(int iParam0)
{
	char* sVar0;
	
	sVar0 = unk_0xFBDA18DDC065F747(unk_0x7C774D8CB8DC6FE3(&cLocal_55), iParam0 * 3 + 2, iParam0 * 3 + 3);
	return func_86(sVar0);
}

int func_86(char* sParam0)
{
	if (unk_0xF005CCA4263DF67F(sParam0, "0"))
	{
		return 0;
	}
	if (unk_0xF005CCA4263DF67F(sParam0, "1"))
	{
		return 1;
	}
	if (unk_0xF005CCA4263DF67F(sParam0, "2"))
	{
		return 2;
	}
	if (unk_0xF005CCA4263DF67F(sParam0, "3"))
	{
		return 3;
	}
	if (unk_0xF005CCA4263DF67F(sParam0, "4"))
	{
		return 4;
	}
	if (unk_0xF005CCA4263DF67F(sParam0, "5"))
	{
		return 5;
	}
	if (unk_0xF005CCA4263DF67F(sParam0, "6"))
	{
		return 6;
	}
	if (unk_0xF005CCA4263DF67F(sParam0, "7"))
	{
		return 7;
	}
	if (unk_0xF005CCA4263DF67F(sParam0, "8"))
	{
		return 8;
	}
	if (unk_0xF005CCA4263DF67F(sParam0, "9"))
	{
		return 9;
	}
	if (unk_0xF005CCA4263DF67F(sParam0, "A"))
	{
		return 10;
	}
	if (unk_0xF005CCA4263DF67F(sParam0, "B"))
	{
		return 11;
	}
	if (unk_0xF005CCA4263DF67F(sParam0, "C"))
	{
		return 12;
	}
	if (unk_0xF005CCA4263DF67F(sParam0, "D"))
	{
		return 13;
	}
	if (unk_0xF005CCA4263DF67F(sParam0, "E"))
	{
		return 14;
	}
	if (unk_0xF005CCA4263DF67F(sParam0, "F"))
	{
		return 15;
	}
	if (unk_0xF005CCA4263DF67F(sParam0, "G"))
	{
		return 16;
	}
	if (unk_0xF005CCA4263DF67F(sParam0, "H"))
	{
		return 17;
	}
	if (unk_0xF005CCA4263DF67F(sParam0, "I"))
	{
		return 18;
	}
	if (unk_0xF005CCA4263DF67F(sParam0, "J"))
	{
		return 19;
	}
	if (unk_0xF005CCA4263DF67F(sParam0, "K"))
	{
		return 20;
	}
	if (unk_0xF005CCA4263DF67F(sParam0, "L"))
	{
		return 21;
	}
	if (unk_0xF005CCA4263DF67F(sParam0, "M"))
	{
		return 22;
	}
	if (unk_0xF005CCA4263DF67F(sParam0, "N"))
	{
		return 23;
	}
	if (unk_0xF005CCA4263DF67F(sParam0, "O"))
	{
		return 24;
	}
	if (unk_0xF005CCA4263DF67F(sParam0, "P"))
	{
		return 25;
	}
	if (unk_0xF005CCA4263DF67F(sParam0, "Q"))
	{
		return 26;
	}
	if (unk_0xF005CCA4263DF67F(sParam0, "R"))
	{
		return 27;
	}
	if (unk_0xF005CCA4263DF67F(sParam0, "S"))
	{
		return 28;
	}
	if (unk_0xF005CCA4263DF67F(sParam0, "T"))
	{
		return 29;
	}
	if (unk_0xF005CCA4263DF67F(sParam0, "U"))
	{
		return 30;
	}
	if (unk_0xF005CCA4263DF67F(sParam0, "V"))
	{
		return 31;
	}
	if (unk_0xF005CCA4263DF67F(sParam0, "W"))
	{
		return 32;
	}
	if (unk_0xF005CCA4263DF67F(sParam0, "X"))
	{
		return 33;
	}
	if (unk_0xF005CCA4263DF67F(sParam0, "Y"))
	{
		return 34;
	}
	if (unk_0xF005CCA4263DF67F(sParam0, "Z"))
	{
		return 35;
	}
	if (unk_0xF005CCA4263DF67F(sParam0, "z"))
	{
		return -1;
	}
	return -1;
}

int func_87(int iParam0)
{
	char* sVar0;
	
	sVar0 = unk_0xFBDA18DDC065F747(unk_0x7C774D8CB8DC6FE3(&cLocal_55), iParam0 * 3 + 1, iParam0 * 3 + 2);
	return func_86(sVar0);
}

int func_88(int iParam0)
{
	char* sVar0;
	
	sVar0 = unk_0xFBDA18DDC065F747(unk_0x7C774D8CB8DC6FE3(&cLocal_55), iParam0 * 3, iParam0 * 3 + 1);
	return func_86(sVar0);
}

void func_89()
{
	cLocal_70 = { Global_20624.f_6[iLocal_75 /*6*/] };
	StringConCat(&cLocal_70, "LF", 24);
	if (unk_0x3030AE9FCF1BC243(&cLocal_70))
	{
		sLocal_74 = unk_0x7C774D8CB8DC6FE3(&cLocal_70);
		if (unk_0x211E6DB3335430B4(sLocal_74))
		{
		}
	}
}

void func_90()
{
	cLocal_60 = { Global_20624.f_6[iLocal_75 /*6*/] };
	StringConCat(&cLocal_60, "IF", 24);
	if (unk_0x3030AE9FCF1BC243(&cLocal_60))
	{
		sLocal_64 = unk_0xFBDA18DDC065F747(unk_0x7C774D8CB8DC6FE3(&cLocal_60), 0, 1);
		if (unk_0x211E6DB3335430B4(sLocal_64))
		{
		}
		sLocal_65 = unk_0xFBDA18DDC065F747(unk_0x7C774D8CB8DC6FE3(&cLocal_60), 1, 2);
		if (unk_0x211E6DB3335430B4(sLocal_65))
		{
		}
		sLocal_66 = unk_0xFBDA18DDC065F747(unk_0x7C774D8CB8DC6FE3(&cLocal_60), 2, 3);
		if (unk_0x211E6DB3335430B4(sLocal_66))
		{
		}
	}
}

void func_91()
{
	cLocal_55 = { Global_20624.f_6[iLocal_75 /*6*/] };
	StringConCat(&cLocal_55, "SL", 24);
	if (unk_0x3030AE9FCF1BC243(&cLocal_55))
	{
		sLocal_59 = unk_0x7C774D8CB8DC6FE3(&cLocal_55);
		if (unk_0x211E6DB3335430B4(sLocal_59))
		{
		}
	}
}

void func_92()
{
	func_93();
	unk_0x2C454D08B34FEB9C(uLocal_68);
	unk_0x3473D6217A1E39C1(uLocal_69);
	if (Global_21997)
	{
		unk_0x693FDE3F8A9F27EA(Global_20624.f_368, Global_20624.f_369, Global_20624.f_370, uLocal_67);
		iLocal_36 = unk_0x578C4EF320340AF7();
	}
	else
	{
		unk_0x01BCE5A1737EFC2D(Global_20624.f_368, Global_20624.f_369, Global_20624.f_370, uLocal_67);
	}
	Global_21005 = 4;
}

void func_93()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	var uVar5;
	var uVar6;
	var uVar7;
	var uVar8;
	var uVar9;
	var uVar10;
	var uVar11;
	var uVar12;
	int iVar13;
	int iVar14;
	
	iVar0 = 1;
	iVar1 = 1;
	iVar2 = 0;
	iLocal_29 = 0;
	iLocal_31 = 0;
	iLocal_33 = 0;
	if (unk_0x6DD95E3284A19712(&Global_21081))
	{
		if (unk_0xF005CCA4263DF67F(&Global_21081, "CT_AUD"))
		{
			Global_2621442 = 1;
		}
		iVar13 = 0;
		if (unk_0xDCA0815D900F27F8() || unk_0xC6C08C02733D02C8())
		{
			if (Global_1573348 == 1)
			{
				iVar13 = 1;
			}
			else
			{
				iVar13 = 2;
			}
		}
		iVar14 = 0;
		if (Global_76833 || func_101())
		{
			if (Global_1573348 == 0)
			{
				iVar14 = 1;
			}
		}
		else if (!func_99())
		{
			iVar14 = 1;
		}
		if (func_98(unk_0x856D5567211886A2(&Global_21081)))
		{
			iVar14 = 0;
			Global_2621442 = 0;
			iVar13 = 1;
		}
		if (((Global_21007 < 5 || Global_21007 == 10) || Global_21007 == 12) || Global_21007 == 13)
		{
			if ((iVar14 == 1 || Global_2621442 == 1) || iVar13 == 2)
			{
				unk_0xBAA4D421B8B8A744(&Global_21081, 7);
				while (!unk_0xF5EE205091CE6DB2(7))
				{
					wait(0);
				}
			}
			else
			{
				unk_0x1CA346492D183315(&Global_21081, 15);
				while (!unk_0xF5EE205091CE6DB2(15))
				{
					wait(0);
				}
			}
		}
		else if ((iVar14 == 1 || Global_2621442 == 1) || iVar13 == 2)
		{
			unk_0xBAA4D421B8B8A744(&Global_21081, 6);
			while (!unk_0xF5EE205091CE6DB2(6))
			{
				wait(0);
			}
		}
		else if (unk_0x7B70881748D166CD(joaat("fm_mission_controller_2020")) == 0)
		{
			unk_0x1CA346492D183315(&Global_21081, 14);
			while (!unk_0xF5EE205091CE6DB2(14))
			{
				wait(0);
			}
		}
	}
	else
	{
		iLocal_33 = 1;
		return;
	}
	unk_0xB27AEE04175A2AAF();
	func_97();
	func_96();
	func_95();
	func_94();
	Global_22015 = 0;
	while (iVar2 < 70 && iLocal_29 == 0)
	{
		cLocal_42 = { Global_20624 };
		StringConCat(&cLocal_42, "A", 24);
		Global_19873[iVar2 /*6*/] = { Global_20624 };
		StringConCat(&(Global_19873[iVar2 /*6*/]), "_", 24);
		StringIntConCat(&(Global_19873[iVar2 /*6*/]), iVar1, 24);
		cLocal_38 = { Global_19873[iVar2 /*6*/] };
		StringConCat(&cLocal_38, "A", 24);
		if (unk_0x3030AE9FCF1BC243(&cLocal_38))
		{
			StringCopy(&cLocal_46, unk_0x7C774D8CB8DC6FE3(&cLocal_38), 64);
			iVar3 = func_88(iVar2);
			if (iVar3 == 9)
			{
				if (Global_4271212 == 0)
				{
				}
			}
			iVar4 = func_87(iVar2);
			uVar5 = func_85(iVar2);
			uLocal_67 = func_84();
			uLocal_68 = func_83();
			uLocal_69 = func_82();
			uVar6 = func_81(iVar2);
			uVar7 = func_80(iVar2);
			uVar8 = func_79(iVar2);
			uVar12 = func_78(iVar2);
			uVar9 = func_77(iVar2);
			uVar10 = func_76(iVar2);
			uVar11 = func_75(iVar2);
			if (unk_0x3030AE9FCF1BC243(&(Global_19873[iVar2 /*6*/])))
			{
				if (Global_21995 == 0 && Global_22001 == 0)
				{
					if (iVar3 > 36 || iVar4 > 36)
					{
					}
					unk_0x0F6C339FECB3D988(iVar3, &cLocal_46, &(Global_19873[iVar2 /*6*/]), iVar4, uVar5, 0, uVar6, uVar7, uVar8, uVar12, uVar9, uVar10, uVar11);
				}
				else if (unk_0xF005CCA4263DF67F(&(Global_19873[iVar2 /*6*/]), &Global_22003))
				{
					if (iVar3 > 36 || iVar4 > 36)
					{
					}
					unk_0x0F6C339FECB3D988(iVar3, &cLocal_46, &(Global_19873[iVar2 /*6*/]), iVar4, uVar5, 0, uVar6, uVar7, uVar8, uVar12, uVar9, uVar10, uVar11);
					Global_22015 = iVar2;
					if (Global_22001 == 1)
					{
						Global_22001 = 0;
					}
				}
			}
			else if (Global_22001 == 0 && Global_21995 == 0)
			{
				unk_0x0F6C339FECB3D988(iVar3, &cLocal_46, &cLocal_46, iVar4, uVar5, 0, uVar6, uVar7, uVar8, uVar12, uVar9, uVar10, uVar11);
			}
			iVar1 = (iVar1 + iVar0);
		}
		else
		{
			if (unk_0x3030AE9FCF1BC243(&cLocal_42))
			{
				StringCopy(&cLocal_46, unk_0x7C774D8CB8DC6FE3(&cLocal_42), 64);
				iVar3 = func_88(iVar2);
				iVar4 = func_87(iVar2);
				uVar5 = func_85(iVar2);
				uLocal_67 = func_84();
				uLocal_68 = func_83();
				uLocal_69 = func_82();
				uVar6 = func_81(iVar2);
				uVar7 = func_80(iVar2);
				uVar8 = func_79(iVar2);
				uVar12 = func_78(iVar2);
				uVar9 = func_77(iVar2);
				uVar10 = func_76(iVar2);
				uVar11 = func_75(iVar2);
				unk_0x0F6C339FECB3D988(iVar3, &cLocal_46, &Global_20624, iVar4, uVar5, 1, uVar6, uVar7, uVar8, uVar12, uVar9, uVar10, uVar11);
			}
			iLocal_29 = 1;
		}
		iVar2++;
		if (iVar2 == 70)
		{
		}
	}
}

void func_94()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 15)
	{
		if (Global_20294[iVar0 /*10*/].f_7 == 1)
		{
			if (unk_0xAE06B9E39EBDE049(Global_20294[iVar0 /*10*/]) || Global_20294[iVar0 /*10*/] == 0)
			{
				unk_0x7507DD84B14B951A(iVar0, Global_20294[iVar0 /*10*/], &(Global_20294[iVar0 /*10*/].f_1));
			}
			if (Global_20294.f_161 == iVar0)
			{
				if ((Global_20294.f_162 != 0f && Global_20294.f_162.f_1 != 0f) && Global_20294.f_162.f_2 != 0f)
				{
					wait(0);
					unk_0xBC98C1850847994A(Global_20294.f_161, Global_20294.f_162);
				}
			}
		}
		iVar0++;
	}
	if (Global_4271212 == 1)
	{
		Global_4271212 = 0;
		iVar0 = 0;
		iVar0 = 0;
		while (iVar0 <= 19)
		{
			if (Global_4271031[iVar0 /*9*/].f_7 == 1)
			{
				if (unk_0xAE06B9E39EBDE049(Global_4271031[iVar0 /*9*/]) || Global_4271031[iVar0 /*9*/] == 0)
				{
					unk_0x7507DD84B14B951A(Global_4271031[iVar0 /*9*/].f_8, Global_4271031[iVar0 /*9*/], &(Global_4271031[iVar0 /*9*/].f_1));
				}
			}
			iVar0++;
		}
	}
}

void func_95()
{
	cLocal_70 = { Global_20624 };
	StringConCat(&cLocal_70, "LF", 24);
	if (unk_0x3030AE9FCF1BC243(&cLocal_70))
	{
		sLocal_74 = unk_0x7C774D8CB8DC6FE3(&cLocal_70);
		if (unk_0x211E6DB3335430B4(sLocal_74))
		{
		}
	}
}

void func_96()
{
	cLocal_60 = { Global_20624 };
	StringConCat(&cLocal_60, "IF", 24);
	if (unk_0x3030AE9FCF1BC243(&cLocal_60))
	{
		sLocal_64 = unk_0xFBDA18DDC065F747(unk_0x7C774D8CB8DC6FE3(&cLocal_60), 0, 1);
		if (unk_0x211E6DB3335430B4(sLocal_64))
		{
		}
		sLocal_65 = unk_0xFBDA18DDC065F747(unk_0x7C774D8CB8DC6FE3(&cLocal_60), 1, 2);
		if (unk_0x211E6DB3335430B4(sLocal_65))
		{
		}
		sLocal_66 = unk_0xFBDA18DDC065F747(unk_0x7C774D8CB8DC6FE3(&cLocal_60), 2, 3);
		if (unk_0x211E6DB3335430B4(sLocal_66))
		{
		}
	}
}

void func_97()
{
	cLocal_55 = { Global_20624 };
	StringConCat(&cLocal_55, "SL", 24);
	if (unk_0x3030AE9FCF1BC243(&cLocal_55))
	{
		sLocal_59 = unk_0x7C774D8CB8DC6FE3(&cLocal_55);
		if (unk_0x211E6DB3335430B4(sLocal_59))
		{
		}
	}
}

int func_98(int iParam0)
{
	switch (iParam0)
	{
		case -1311531715:
		case -389729032:
		case -2064440312:
		case 1151576899:
		case -360992886:
		case 677852396:
		case 1017913414:
		case 1994430427:
		case 1430620518:
		case 1883599394:
		case 1146168957:
		case 785850502:
		case 1566303118:
		case 1220013368:
		case 71115730:
		case -251854137:
		case -243052328:
		case -1417718107:
		case -351584050:
		case 1854373416:
		case -1753835094:
		case -353948811:
		case -1883622926:
		case -46742865:
		case 1260190997:
		case 1080008561:
		case 1151572586:
		case 964109535:
		case -436910453:
		case 659972380:
		case 2120484290:
		case 1439733926:
		case 26437732:
		case 303339033:
		case 2088730730:
		case -1771498136:
		case -1993049002:
		case -1370815517:
		case -1267951531:
		case 60077066:
		case 1821448936:
		case 2043251532:
		case 1314391445:
		case -1267946537:
		case 1507036282:
		case 214936528:
		case 1071832486:
		case 379745124:
		case 409276020:
		case -495085533:
		case -383711312:
		case -1809286053:
		case -229061423:
		case 1399593776:
		case -1592188591:
		case 2119072113:
		case -2005721953:
		case -439426052:
		case 101634771:
		case -7767504:
		case -1576797630:
		case -556967217:
		case 510894735:
		case -96774198:
		case 1931750438:
		case 962651001:
		case -805815803:
		case -1396474296:
		case 188331744:
		case -667145730:
		case 1027410289:
		case -190066836:
		case 5422313:
		case -591754196:
		case 1414208944:
		case -657203993:
		case 365230037:
		case -1508790734:
		case 1751613877:
		case 502358067:
		case -701873518:
		case -387856564:
		case -342942601:
		case -450026770:
		case -2121613853:
		case 1192484316:
		case -839727634:
		case 700260812:
		case -1133857112:
			return 1;
		
		default:
	}
	switch (iParam0)
	{
		case 1971768146:
		case 368696214:
		case -519616352:
		case 718322585:
		case 1295831246:
		case -12653036:
		case -768557360:
		case -31194878:
		case -1352319498:
		case -1778740544:
		case 972121350:
		case 342937602:
		case 1546600067:
			return 1;
		
		default:
	}
	return 0;
}

int func_99()
{
	if (Global_2621550)
	{
		if (func_14(0))
		{
			if (Global_3145728 || func_100(0))
			{
				return 1;
			}
		}
	}
	if (Global_2621549)
	{
		if (func_14(0))
		{
			if (Global_3670016 || func_100(0))
			{
				return 1;
			}
		}
	}
	return 0;
}

bool func_100(bool bParam0)
{
	if (!bParam0 && unk_0x7B70881748D166CD(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return unk_0xCE990E643CD9D0E5(Global_77081, 0);
}

var func_101()
{
	return Global_1312872;
}

void func_102()
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	if (unk_0xDCA0815D900F27F8() || unk_0xC6C08C02733D02C8())
	{
		if (Global_1573348 == 1)
		{
			iVar0 = 1;
		}
		else
		{
			iVar0 = 2;
		}
	}
	iVar1 = 0;
	if (Global_76833)
	{
		if (Global_1573348 == 0)
		{
			iVar1 = 1;
		}
	}
	else if (!func_99())
	{
		iVar1 = 1;
	}
	if (unk_0x6DD95E3284A19712(&Global_21081))
	{
		if (unk_0xF005CCA4263DF67F(&Global_21081, "CT_AUD"))
		{
			Global_2621442 = 1;
		}
	}
	if (func_98(unk_0x856D5567211886A2(&Global_21081)))
	{
		iVar1 = 0;
		Global_2621442 = 0;
		iVar0 = 1;
	}
	if (((Global_21007 < 5 || Global_21007 == 10) || Global_21007 == 12) || Global_21007 == 13)
	{
		if ((iVar1 == 1 || Global_2621442 == 1) || iVar0 == 2)
		{
			unk_0xBAA4D421B8B8A744(&Global_21081, 7);
			while (!unk_0xF5EE205091CE6DB2(7))
			{
				wait(0);
			}
		}
		else
		{
			unk_0x1CA346492D183315(&Global_21081, 15);
			while (!unk_0xF5EE205091CE6DB2(15))
			{
				wait(0);
			}
		}
	}
	else if ((iVar1 == 1 || Global_2621442 == 1) || iVar0 == 2)
	{
		unk_0xBAA4D421B8B8A744(&Global_21081, 6);
		while (!unk_0xF5EE205091CE6DB2(6))
		{
			wait(0);
		}
	}
	else
	{
		unk_0x1CA346492D183315(&Global_21081, 14);
		while (!unk_0xF5EE205091CE6DB2(14))
		{
			wait(0);
		}
	}
	unk_0xB27AEE04175A2AAF();
	func_94();
}

void func_103()
{
	while (Global_19664 == 1 && unk_0x7B70881748D166CD(joaat("cellphone_flashhand")) > 0)
	{
		wait(0);
	}
	Global_19664 = 0;
	if (unk_0xCE990E643CD9D0E5(Global_7551, 20))
	{
		unk_0xBE20AB8238688965(&Global_7552, 1);
	}
	else
	{
		unk_0xD2459066EA58CE43(&Global_7552, 1);
	}
	Global_19665 = 0;
	if (Global_21001 == 0)
	{
		if (!Global_21018)
		{
			func_93();
		}
	}
	else
	{
		func_74();
	}
	Global_19872 = 0;
	if (Global_21015)
	{
		if (Global_22022 == 0)
		{
			if (Global_21018 == 0)
			{
				iLocal_34 = 5000;
				unk_0xF8DCF7D5A9141887(Global_20624.f_368, Global_20624.f_369);
			}
			else
			{
				iLocal_34 = 0;
			}
		}
		else
		{
			iLocal_34 = 0;
		}
		Global_19872 = 1;
		settimerb(0);
		while ((Global_19872 == 1 && Global_21005 == 1) && timerb() < iLocal_34)
		{
			wait(0);
			if (!unk_0x5A228A6A51E757C8(unk_0x460153A63B9477BC()))
			{
				Global_19872 = 0;
				unk_0xBE4122AC23440E7D(false);
				Global_21005 = 6;
			}
			if (unk_0x6B12213471F330A3())
			{
				if (unk_0xBA34676748B6E39C())
				{
					Global_19872 = 0;
				}
			}
		}
		if (timerb() > iLocal_34)
		{
		}
		if (Global_21005 != 1)
		{
		}
		if (Global_19872 == 0)
		{
		}
	}
	Global_19872 = 0;
	if (((Global_19681.f_1 == 1 || Global_19681.f_1 == 0) || Global_21005 != 1) || Global_19647 == 1)
	{
		unk_0xBE4122AC23440E7D(false);
		Global_21005 = 6;
	}
	else
	{
		if (Global_21013)
		{
			Global_22023 = 0;
			iLocal_32 = 0;
		}
		if (Global_21015 == 0)
		{
			if (Global_21056 == 0)
			{
				Global_19683 = Global_19681.f_1;
				Global_21056 = 1;
			}
			iLocal_30 = 0;
			if (Global_22022 == 0)
			{
				unk_0xF8DCF7D5A9141887(Global_20624.f_368, Global_20624.f_369);
				wait(0);
				Global_21005 = 3;
				Global_19872 = 1;
				settimerb(0);
				unk_0xBE20AB8238688965(&Global_7551, 27);
				settimera(0);
			}
			else
			{
				Global_19872 = 0;
				Global_21005 = 4;
			}
			Global_19680 = 0;
			if (Global_21016 == 1)
			{
				if (Global_19681.f_1 == 10)
				{
				}
				if (!Global_19681.f_1 == 9)
				{
					if (Global_19681.f_1 > 4)
					{
						if (Global_19664 == 0)
						{
							Global_19681.f_1 = 9;
							func_8();
						}
					}
					else
					{
						Global_19681.f_1 = 4;
					}
				}
				else
				{
					func_8();
				}
			}
			else
			{
				while (Global_19681.f_1 == 4)
				{
					wait(0);
					if (Global_19872 == 1)
					{
						if (unk_0x6B12213471F330A3())
						{
							if (unk_0xBA34676748B6E39C())
							{
								Global_19872 = 0;
							}
						}
					}
				}
				if (Global_19681.f_1 == 6)
				{
				}
				if (Global_19681.f_1 == 10)
				{
				}
				if (Global_19681.f_1 == 3)
				{
					unk_0xBE4122AC23440E7D(false);
					Global_21005 = 6;
					Global_19665 = 1;
					return;
				}
				Global_19681.f_1 = 9;
				func_8();
			}
			if (unk_0x25DDB354A40FFCDB())
			{
				iLocal_84 = unk_0x6CAAB7E78B5D978A();
			}
			else
			{
				iLocal_82 = unk_0x578C4EF320340AF7();
			}
			while (Global_19681.f_1 != 9 && Global_19664 == 0)
			{
				wait(0);
				if (Global_19872 == 1)
				{
					if (unk_0x6B12213471F330A3())
					{
						if (unk_0xBA34676748B6E39C())
						{
							Global_19872 = 0;
						}
					}
				}
				if (unk_0x25DDB354A40FFCDB())
				{
					iLocal_91 = unk_0x624736CA66E14161(unk_0x6CAAB7E78B5D978A(), iLocal_84);
				}
				else
				{
					iLocal_83 = unk_0x578C4EF320340AF7();
					iLocal_91 = (iLocal_83 - iLocal_82);
				}
				if (unk_0x7B70881748D166CD(joaat("cellphone_flashhand")) == 0)
				{
					if (iLocal_91 > 15000)
					{
						Global_22021 = 1;
						Global_19664 = 1;
					}
				}
			}
			if (!unk_0xCE990E643CD9D0E5(Global_7551, 11))
			{
				if (func_48() == 0)
				{
					func_61();
				}
			}
			if (Global_19664 == 0)
			{
				if (!Global_22022 == 0)
				{
					Global_21062 = 0;
					func_67();
					func_66();
					if (!Global_21018)
					{
						if (Global_22022 == 0)
						{
							unk_0xCC220544E304DF15();
						}
						else
						{
							unk_0xE548F87D3CA3FC96(Global_20624.f_368, Global_20624.f_369);
						}
					}
					func_65();
				}
			}
			else
			{
				func_104();
				Global_19665 = 1;
			}
		}
		else
		{
			Global_19680 = 1;
			if (!unk_0xA59F96B50B97E63C(unk_0x9B0761B4C3EB8BC7(), 0))
			{
				if (unk_0x47DBF174A0CB9D55(unk_0x9B0761B4C3EB8BC7(), 0))
				{
					if (Global_19681.f_1 == 3)
					{
					}
				}
				else
				{
					unk_0xD2459066EA58CE43(&Global_7552, 21);
				}
			}
			if (Global_21056 == 0)
			{
				Global_19683 = Global_19681.f_1;
				Global_21056 = 1;
			}
			if (Global_19681.f_1 == 3)
			{
				Global_19681.f_1 = 4;
			}
			else
			{
				while (Global_19681.f_1 == 4)
				{
					wait(0);
				}
				if (Global_19681.f_1 == 6)
				{
				}
				Global_19681.f_1 = 9;
				func_8();
			}
			if (unk_0x25DDB354A40FFCDB())
			{
				iLocal_84 = unk_0x6CAAB7E78B5D978A();
			}
			else
			{
				iLocal_82 = unk_0x578C4EF320340AF7();
			}
			while (Global_19681.f_1 != 9 && Global_19664 == 0)
			{
				wait(0);
				if (unk_0x25DDB354A40FFCDB())
				{
					iLocal_91 = unk_0x624736CA66E14161(unk_0x6CAAB7E78B5D978A(), iLocal_84);
				}
				else
				{
					iLocal_83 = unk_0x578C4EF320340AF7();
					iLocal_91 = (iLocal_83 - iLocal_82);
				}
				if (unk_0x7B70881748D166CD(joaat("cellphone_flashhand")) == 0)
				{
					if (iLocal_91 > 20000)
					{
						Global_22021 = 1;
						Global_19664 = 1;
						unk_0xD2459066EA58CE43(&Global_7552, 21);
					}
				}
			}
			if (Global_19664 == 0)
			{
				Global_21005 = 2;
			}
			else
			{
				func_104();
				Global_19665 = 1;
			}
			if (unk_0x25DDB354A40FFCDB())
			{
				iLocal_78 = unk_0x6CAAB7E78B5D978A();
				iLocal_81 = unk_0x6CAAB7E78B5D978A();
			}
			else
			{
				iLocal_76 = unk_0x578C4EF320340AF7();
				iLocal_79 = unk_0x578C4EF320340AF7();
			}
		}
	}
}

void func_104()
{
	Global_19871 = 0;
	func_109();
}

void func_105()
{
	float fVar0;
	
	fVar0 = func_106(Global_19634[Global_19626 /*3*/], Global_19627[Global_19626 /*3*/], Global_19641, Global_19612, 350f, 0);
	if (fVar0 >= 1f)
	{
		if (Global_22019 == 0)
		{
			unk_0x8CFF639CEFF5CF16(true);
		}
		iLocal_32 = 0;
	}
}

float func_106(struct<3> Param0, struct<3> Param1, struct<3> Param2, struct<3> Param3, float fParam4, bool bParam5)
{
	struct<2> Var0;
	float fVar1;
	float fVar2;
	float fVar3;
	
	if (Global_4271303 == 0)
	{
		if (unk_0xCE990E643CD9D0E5(Global_7551, 14) && Global_19681.f_1 < 4)
		{
			unk_0x1F1B1269BB6217F7(&Var0);
			if (Global_19634[Global_19626 /*3*/].f_1 == Var0.f_1)
			{
				Global_4271303 = 1;
			}
		}
	}
	if (func_48() && Global_4271303 == 0)
	{
		return 2f;
	}
	if (iLocal_18 == 0)
	{
		iLocal_18 = unk_0x578C4EF320340AF7();
	}
	fVar1 = func_108((to_float((unk_0x578C4EF320340AF7() - iLocal_18)) / fParam4), 0f, 1f);
	if (fVar1 < 1f)
	{
		fVar2 = fVar1;
		if (bParam5)
		{
			fVar2 = (fVar2 - 1f);
			fVar3 = 0.670158f;
			fVar2 = (((fVar2 * fVar2) * (((fVar3 + 1f) * fVar2) + fVar3)) + 1f);
		}
		else
		{
			fVar2 = sin((fVar1 * 90f));
		}
		Global_19609 = { func_107(Param0, Param1, fVar2) };
		Global_19612 = { func_107(Param2, Param3, fVar2) };
	}
	else
	{
		Global_19609 = { Param1 };
		Global_19612 = { Param3 };
	}
	unk_0x241AFEE3D5B4FF70(Global_19609);
	unk_0xC6EAF6E2A0CACFED(Global_19612, 0);
	return fVar1;
}

Vector3 func_107(struct<3> Param0, struct<3> Param1, float fParam2)
{
	return Param0 + Param1 - Param0 * Vector(fParam2, fParam2, fParam2);
}

float func_108(float fParam0, float fParam1, float fParam2)
{
	if (fParam0 > fParam2)
	{
		return fParam2;
	}
	else if (fParam0 < fParam1)
	{
		return fParam1;
	}
	return fParam0;
}

void func_109()
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

bool func_110()
{
	return unk_0xCE990E643CD9D0E5(Global_4456448.f_123318, 12);
}

bool func_111(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_42(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
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
	return func_112(sParam2, iParam3, 0);
}

int func_112(char* sParam0, int iParam1, bool bParam2)
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
					func_109();
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
		if (func_38(8, -1))
		{
			return 0;
		}
		Global_21081 = { Global_21075 };
		func_37();
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
				func_30();
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
				if (func_29())
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
			if (func_28())
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
			func_27();
			Global_21015 = bParam2;
		}
		Global_21007 = iParam1;
		StringCopy(&Global_20624, sParam0, 24);
		Global_19871 = 0;
		func_53();
		func_113();
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
		func_109();
	}
	return 0;
}

void func_113()
{
	if (!func_114())
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

int func_114()
{
	if (!Global_262145.f_28160)
	{
		return 0;
	}
	if (!Global_76833)
	{
		return 0;
	}
	if (unk_0x460153A63B9477BC() == func_117())
	{
		return 0;
	}
	if (func_115(unk_0x460153A63B9477BC()))
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

bool func_115(int iParam0)
{
	return func_116(iParam0, 20);
}

bool func_116(int iParam0, int iParam1)
{
	return unk_0xCE990E643CD9D0E5(Global_1630317[iParam0 /*595*/].f_11.f_4, iParam1);
}

int func_117()
{
	return -1;
}

int func_118()
{
	if (Global_21005 != 0 || unk_0x6A5CC4A2C9D9ED8D())
	{
		return 1;
	}
	return 0;
}

void func_119(int iParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6, char* sParam7, char* sParam8, char* sParam9, char* sParam10, char* sParam11)
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

