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
	var uLocal_43 = 0;
	var uLocal_44 = 0;
	int iLocal_45 = 0;
	int iLocal_46 = 0;
	int iLocal_47 = 0;
	var uLocal_48 = 0;
	var uLocal_49 = 0;
	struct<68> ScriptParam_0 = { 0, 0, 1132396544, 1132396544, 1132396544, 0, -1082130432, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 1092616192 } ;
#endregion

void __EntryFunction__()
{
	int iVar0;
	
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
	if (unk_0xED06FD5709A59F02(3))
	{
		func_19();
	}
	while (true)
	{
		switch (iLocal_45)
		{
			case 0:
				iLocal_46 = unk_0x5DEA4192B46CB99B("mission_complete");
				iLocal_45 = 1;
				break;
			
			case 1:
				if (unk_0x95EF219D38B20CFF(iLocal_46))
				{
					iLocal_45 = 2;
				}
				break;
			
			case 2:
				unk_0x929F5F17530DE8A0(iLocal_46, "SET_MISSION_TITLE", ScriptParam_50, ScriptParam_50.f_1, 0, 0, 0);
				unk_0xC90636D3CB7D4CEF(iLocal_46, "SET_MISSION_TITLE_COLOUR", ScriptParam_50.f_2, ScriptParam_50.f_2, ScriptParam_50.f_2, -1082130432, -1082130432);
				if (ScriptParam_50.f_5.f_1 != -1f && !unk_0x211E6DB3335430B4(ScriptParam_50.f_5.f_2))
				{
					unk_0x3897B5364C6A9B4B(iLocal_46, "SET_TOTAL", to_float(ScriptParam_50.f_5), ScriptParam_50.f_5.f_1, -1f, -1f, -1f, ScriptParam_50.f_5.f_2, 0, 0, 0, 0);
				}
				unk_0xC90636D3CB7D4CEF(iLocal_46, "SET_MEDAL", to_float(ScriptParam_50.f_5), -1082130432, -1082130432, -1082130432, -1082130432);
				unk_0xC90636D3CB7D4CEF(iLocal_46, "SET_SOCIAL_CLUB_INFO", 0f, -1082130432, -1082130432, -1082130432, -1082130432);
				iVar0 = 0;
				while (iVar0 < ScriptParam_50.f_66 + 1)
				{
					unk_0x830F007E19C63E14(iLocal_46, "SET_DATA_SLOT");
					unk_0xAD291B8F75D737AD(ScriptParam_50.f_9[iVar0 /*7*/]);
					unk_0xAD291B8F75D737AD(ScriptParam_50.f_9[iVar0 /*7*/].f_1);
					if (ScriptParam_50.f_9[iVar0 /*7*/].f_2 == 4)
					{
						unk_0xAD291B8F75D737AD(2);
						unk_0xAD291B8F75D737AD(0);
						unk_0xAD291B8F75D737AD(0);
						unk_0xB23270F3D5E62FDE("STRING");
						unk_0x7899A951E85F4B28(floor((ScriptParam_50.f_9[iVar0 /*7*/].f_3 * 1000f)), 6);
						unk_0x2042E9CA4306F725();
						if (!unk_0x211E6DB3335430B4(ScriptParam_50.f_9[iVar0 /*7*/].f_5))
						{
							func_18(ScriptParam_50.f_9[iVar0 /*7*/].f_5);
						}
					}
					else if (ScriptParam_50.f_9[iVar0 /*7*/].f_2 == 8)
					{
						if (!unk_0x211E6DB3335430B4(ScriptParam_50.f_9[iVar0 /*7*/].f_5) && !unk_0x211E6DB3335430B4(ScriptParam_50.f_9[iVar0 /*7*/].f_6))
						{
							unk_0xB23270F3D5E62FDE(ScriptParam_50.f_9[iVar0 /*7*/].f_6);
							unk_0x9EFD301E3BE8324E(ScriptParam_50.f_9[iVar0 /*7*/].f_5);
							unk_0x2042E9CA4306F725();
						}
					}
					else
					{
						unk_0xAD291B8F75D737AD(ScriptParam_50.f_9[iVar0 /*7*/].f_2);
						if ((ScriptParam_50.f_9[iVar0 /*7*/].f_3 % 1f) == 0f)
						{
							unk_0x49B9B8101B158AEE(ScriptParam_50.f_9[iVar0 /*7*/].f_3);
						}
						else
						{
							unk_0xB23270F3D5E62FDE("NUMBER");
							unk_0x5BC8B357341A4FEE(ScriptParam_50.f_9[iVar0 /*7*/].f_3, 2);
							unk_0x2042E9CA4306F725();
						}
						if ((ScriptParam_50.f_9[iVar0 /*7*/].f_4 % 1f) == 0f)
						{
							unk_0x49B9B8101B158AEE(ScriptParam_50.f_9[iVar0 /*7*/].f_4);
						}
						else
						{
							unk_0xB23270F3D5E62FDE("NUMBER");
							unk_0x5BC8B357341A4FEE(ScriptParam_50.f_9[iVar0 /*7*/].f_4, 2);
							unk_0x2042E9CA4306F725();
						}
						if (!unk_0x211E6DB3335430B4(ScriptParam_50.f_9[iVar0 /*7*/].f_5))
						{
							func_18(ScriptParam_50.f_9[iVar0 /*7*/].f_5);
						}
						if (!unk_0x211E6DB3335430B4(ScriptParam_50.f_9[iVar0 /*7*/].f_6))
						{
							func_18(ScriptParam_50.f_9[iVar0 /*7*/].f_6);
						}
					}
					unk_0xE1FDD153F5858534();
					iVar0++;
				}
				if (ScriptParam_50.f_5 != 0 && !unk_0x211E6DB3335430B4(ScriptParam_50.f_5.f_2))
				{
					unk_0x830F007E19C63E14(iLocal_46, "SET_TOTAL");
					unk_0xAD291B8F75D737AD(ScriptParam_50.f_5);
					if (!unk_0x211E6DB3335430B4(ScriptParam_50.f_5.f_3))
					{
						func_18(ScriptParam_50.f_5.f_3);
					}
					else
					{
						unk_0x49B9B8101B158AEE(ScriptParam_50.f_5.f_1);
					}
					func_18(ScriptParam_50.f_5.f_2);
					unk_0xE1FDD153F5858534();
				}
				unk_0x830F007E19C63E14(iLocal_46, "DRAW_MENU_LIST");
				unk_0xE1FDD153F5858534();
				func_12(1);
				func_9(&iLocal_47);
				if (!func_8(Global_111858.f_19093, 4096))
				{
					func_6(&(Global_111858.f_19093), 4096);
				}
				iLocal_45 = 3;
				break;
			
			case 3:
				if (((func_2(&iLocal_47) > ScriptParam_50.f_67 && ScriptParam_50.f_67 != -1f) || unk_0x03DB5C6AABF8DA46()) || Global_31112)
				{
					func_19();
				}
				else
				{
					func_1(1);
					unk_0xE6A03BA84586E67B(iLocal_46, 0.1495f, 0.3159f, 0.2021f, 0.5111f, 255, 255, 255, 0, 0);
					if (unk_0xD91913FA3B12A5C4(10))
					{
						unk_0x4CB4237D8858ADA6(10);
					}
				}
				break;
		}
		wait(0);
	}
	func_19();
}

void func_1(int iParam0)
{
	Global_77093 = iParam0;
	Global_77094 = iParam0;
}

float func_2(int iParam0)
{
	if (func_5(iParam0))
	{
		if (func_4(iParam0))
		{
			return iParam0->f_2;
		}
		else
		{
			return (func_3(unk_0xCE990E643CD9D0E5(*iParam0, 4)) - iParam0->f_1);
		}
	}
	return iParam0->f_1;
}

float func_3(bool bParam0)
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

bool func_4(var uParam0)
{
	return unk_0xCE990E643CD9D0E5(*uParam0, 2);
}

bool func_5(var uParam0)
{
	return unk_0xCE990E643CD9D0E5(*uParam0, 1);
}

void func_6(var uParam0, int iParam1)
{
	func_7(uParam0, iParam1);
}

void func_7(var uParam0, var uParam1)
{
	*uParam0 = (*uParam0 || uParam1);
}

bool func_8(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

void func_9(int iParam0)
{
	if (!func_5(iParam0))
	{
		func_10(iParam0);
	}
}

void func_10(int iParam0)
{
	func_11(iParam0, 0f);
}

void func_11(int iParam0, float fParam1)
{
	iParam0->f_1 = (func_3(unk_0xCE990E643CD9D0E5(*iParam0, 4)) - fParam1);
	unk_0xBE20AB8238688965(iParam0, 1);
	unk_0xD2459066EA58CE43(iParam0, 2);
	iParam0->f_2 = 0f;
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

void func_18(char* sParam0)
{
	unk_0xB23270F3D5E62FDE(sParam0);
	unk_0x2042E9CA4306F725();
}

void func_19()
{
	unk_0x2E352DDBBF674246(&iLocal_46);
	Global_31112 = 0;
	func_1(0);
	unk_0xD39E529EBE5DB04F();
}

