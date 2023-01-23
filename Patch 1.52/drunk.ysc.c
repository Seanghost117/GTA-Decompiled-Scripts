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
	struct<5> Local_43 = { 0, 0, 0, 0, 0 } ;
	int iLocal_44 = 0;
	int iLocal_45 = 0;
	bool bLocal_46 = 0;
	bool bLocal_47 = 0;
	float fLocal_48 = 0f;
	float fLocal_49 = 0f;
	char* sLocal_50 = NULL;
	struct<5> Local_51 = { 0, 0, 0, 0, 0 } ;
	struct<3> Local_52 = { 0, 0, 0 } ;
	int iLocal_53 = 0;
	int iLocal_54 = 0;
	struct<5> Local_55 = { 0, 0, 0, 0, 0 } ;
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
	iLocal_28 = 3;
	fLocal_31 = 80f;
	fLocal_32 = 140f;
	fLocal_33 = 180f;
	iLocal_39 = 1;
	iLocal_40 = 65;
	iLocal_41 = 49;
	iLocal_42 = 64;
	iLocal_44 = -1;
	iLocal_45 = -1;
	fLocal_48 = 1.7f;
	fLocal_49 = 0f;
	sLocal_50 = "";
	iLocal_53 = -1;
	if (unk_0xED06FD5709A59F02(2))
	{
		func_178();
	}
	Local_43 = { ScriptParam_55 };
	func_177();
	func_176();
	func_171(iLocal_44, 0, 0);
	settimera(0);
	func_170();
	func_166();
	while (true)
	{
		wait(0);
		func_165(iLocal_44);
		func_164();
		func_162();
		func_155();
		func_171(iLocal_44, 0, 0);
		func_177();
		func_9();
		if ((unk_0x25DDB354A40FFCDB() && !unk_0xFC559366953F62B3()) && !func_8())
		{
			func_1();
		}
	}
}

void func_1()
{
	if (func_7() || func_6())
	{
		func_5();
		func_2();
	}
}

void func_2()
{
	if ((!func_4() && !func_3()) && Global_2452678)
	{
		Global_4456448.f_82708 = 0;
	}
}

bool func_3()
{
	return Global_2451787.f_689;
}

bool func_4()
{
	return Global_1590682[unk_0x460153A63B9477BC() /*883*/].f_196 != 0;
}

void func_5()
{
	Global_2451787.f_754 = 1;
}

var func_6()
{
	return Global_2451787.f_733;
}

bool func_7()
{
	return unk_0xCE990E643CD9D0E5(Global_2451787.f_2, 11);
}

bool func_8()
{
	return unk_0xCE990E643CD9D0E5(Global_2452679.f_1.f_2810, 3);
}

void func_9()
{
	bool bVar0;
	
	if (unk_0xA59F96B50B97E63C(Local_43.f_1, 0))
	{
		func_178();
	}
	if (bLocal_46)
	{
		if (!unk_0x5A228A6A51E757C8(unk_0x460153A63B9477BC()))
		{
			func_178();
		}
	}
	func_154();
	bVar0 = true;
	switch (Local_52.x)
	{
		case 4:
			func_153();
			return;
		
		case 5:
			func_150();
			return;
		
		case 6:
			func_148();
			return;
		
		case 7:
			func_147();
			return;
		
		case 8:
			func_146();
			return;
		
		case 9:
			func_144();
			return;
		
		case 10:
			func_143();
			func_140();
			func_139();
			return;
		
		case 11:
			func_138();
			return;
		
		case 12:
			break;
		
		default:
			bVar0 = false;
			break;
	}
	if (!bVar0)
	{
		return;
	}
	if (!Local_52.x == 12)
	{
		return;
	}
	switch (Local_52.f_1)
	{
		case 1:
			if (!func_137())
			{
				func_121();
				func_140();
			}
			break;
		
		case 2:
			func_119();
			break;
		
		case 12:
			func_106();
			break;
		
		case 3:
			func_10();
			break;
		
		default:
			break;
	}
}

void func_10()
{
	var uVar0;
	char* sVar1;
	struct<53> Var2;
	int iVar3;
	
	if (!unk_0xCE990E643CD9D0E5(Global_1678288.f_3, 27))
	{
		unk_0xF3FE01181D2D2479(Local_43.f_1, 3000, 3500, 0, 1, 1, 0);
	}
	Global_1672953 = 1;
	if (!unk_0x03DB5C6AABF8DA46())
	{
		unk_0x1D40553EDD51A1B8(2500);
		while (unk_0x5DA78AD6801A0523())
		{
			wait(0);
		}
	}
	if (unk_0x25DDB354A40FFCDB())
	{
		func_105(&uVar0, 0, 0);
		if (unk_0xAE06B9E39EBDE049(unk_0x9B0761B4C3EB8BC7()) && !unk_0xA59F96B50B97E63C(unk_0x9B0761B4C3EB8BC7(), 0))
		{
			unk_0x4FDCAC08CF0A08AE(unk_0x9B0761B4C3EB8BC7(), 0, 1);
		}
		while ((unk_0xAE06B9E39EBDE049(unk_0x9B0761B4C3EB8BC7()) && !unk_0xA59F96B50B97E63C(unk_0x9B0761B4C3EB8BC7(), 0)) && unk_0x7A6B7F5F1B1F3520(unk_0x9B0761B4C3EB8BC7()))
		{
			wait(0);
		}
		unk_0xD2459066EA58CE43(&(Global_1678288.f_3), 27);
		func_91(unk_0x460153A63B9477BC(), 0, 57344, 0);
		Global_2405074.f_2674 = 1;
		if (unk_0xCE990E643CD9D0E5(Global_1678288, 15))
		{
			unk_0xD2459066EA58CE43(&Global_1678288, 15);
		}
		if (unk_0xCE990E643CD9D0E5(Global_1678288.f_2, 6))
		{
			unk_0xD2459066EA58CE43(&(Global_1678288.f_2), 6);
		}
		if (unk_0x0F1E960B06B93848(unk_0x460153A63B9477BC(), 0))
		{
			Global_2405074.f_2675 = 1;
		}
		else
		{
			Global_2405074.f_2675 = 0;
		}
		if (unk_0x8520BA0B467C93DA())
		{
			unk_0xAE57C4C2D11A9FFF(0);
		}
		if (func_87(1))
		{
			func_75(0);
		}
		func_73(1);
		func_178();
	}
	sVar1 = "";
	Var2.f_3 = 1064514355;
	Var2.f_30 = 1148829696;
	Var2.f_31 = 1148829696;
	Var2.f_52 = 1148829696;
	iVar3 = 7;
	switch (func_67())
	{
		case 0:
			if (func_65() != 2)
			{
				iVar3 = 0;
			}
			else
			{
				iVar3 = 1;
			}
			break;
		
		case 1:
			if (!func_64(126))
			{
				iVar3 = 2;
			}
			else
			{
				iVar3 = 3;
			}
			break;
		
		case 2:
			if (!func_63(4))
			{
				if (func_64(58))
				{
					iVar3 = 4;
				}
				if (func_64(59))
				{
					iVar3 = 5;
				}
				if (iVar3 == 7)
				{
					if (!func_62())
					{
						iVar3 = 4;
					}
					else
					{
						iVar3 = 5;
					}
				}
			}
			else
			{
				iVar3 = 6;
			}
			break;
	}
	switch (iVar3)
	{
		case 0:
			sVar1 = "DWC_MICHAEL_mansion";
			Var2 = "SAVEM_Default@";
			Var2.f_1 = "M_GetOut_R";
			Var2.f_2 = "M_GetOut_R_CAM";
			Var2.f_5 = { -814.181f, 181.1f, 75.74f };
			Var2.f_8 = { 0f, 0f, 21.1994f };
			Var2.f_4 = -1871534317;
			break;
		
		case 1:
			sVar1 = "DWC_MICHAEL_trailer";
			Var2 = "SAVECountryside@";
			Var2.f_1 = "M_GetOut_countryside";
			Var2.f_2 = "M_GetOut_countryside_CAM";
			Var2.f_5 = { 1968.14f, 3816.79f, 32.4287f };
			Var2.f_8 = { 0f, 0f, 29.7938f };
			Var2.f_4 = -1871534317;
			break;
		
		case 2:
			sVar1 = "DWC_FRANKLIN_city";
			Var2 = "SWITCH@FRANKLIN@BED";
			Var2.f_1 = "Sleep_GetUp_RubEyes";
			Var2.f_2 = "Sleep_GetUp_RubEyes_CAM";
			Var2.f_5 = { -17.2168f, -1441.224f, 30.1015f };
			Var2.f_8 = { 0f, 0f, -179.653f };
			Var2.f_4 = -1871534317;
			break;
		
		case 3:
			sVar1 = "DWC_FRANKLIN_hills";
			Var2 = "SAVEBighouse@";
			Var2.f_1 = "F_GetOut_r_bighouse";
			Var2.f_2 = "F_GetOut_r_bighouse_CAM";
			Var2.f_5 = { -1.049f, 524.283f, 170.064f };
			Var2.f_8 = { 0f, 0f, 24f };
			Var2.f_4 = -1871534317;
			break;
		
		case 4:
			sVar1 = "DWC_TREVOR_trailer";
			Var2 = "SAVECountryside@";
			Var2.f_1 = "T_GetOut_countryside";
			Var2.f_2 = "T_GetOut_countryside_CAM";
			Var2.f_5 = { 1968.14f, 3816.79f, 32.4287f };
			Var2.f_8 = { 0f, 0f, 29.7938f };
			Var2.f_4 = -1871534317;
			break;
		
		case 5:
			sVar1 = "DWC_TREVOR_beach";
			Var2 = "SAVEVeniceB@";
			Var2.f_1 = "T_GetOut_r_veniceB";
			Var2.f_2 = "T_GetOut_r_veniceB_CAM";
			Var2.f_5 = { -1148.438f, -1512.246f, 9.689f };
			Var2.f_8 = { 0f, 0f, 36.25f };
			Var2.f_4 = -1871534317;
			break;
		
		case 6:
			sVar1 = "DWC_TREVOR_stripclub";
			Var2 = "SAVECouch@";
			Var2.f_1 = "T_GetOut_couch";
			Var2.f_2 = "T_GetOut_couch_CAM";
			Var2.f_5 = { 94.53f, -1289.86f, 28.27f };
			Var2.f_8 = { 0f, 0f, 29.7938f };
			Var2.f_4 = -1871534317;
			break;
	}
	if (!unk_0xA59F96B50B97E63C(Local_43.f_1, 0))
	{
		unk_0x03D382CB0B44E2FC(Local_43.f_1, Var2.f_5, 1, 0, 0, 1);
	}
	wait(500);
	StringCopy(&(Var2.f_11), "", 16);
	Var2.f_15 = -1f;
	func_12(sVar1, &Var2, "");
	func_11(126, 1);
	func_178();
}

void func_11(int iParam0, int iParam1)
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

void func_12(char* sParam0, var uParam1, char* sParam2)
{
	float fVar0;
	int iVar1;
	bool bVar2;
	bool bVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	bool bVar7;
	bool bVar8;
	var uVar9;
	int iVar10;
	int iVar11;
	char* sVar12;
	char* sVar13;
	char* sVar14;
	int iVar15;
	float fVar16;
	float fVar17;
	int iVar18;
	int iVar19;
	int iVar20;
	float fVar21;
	struct<3> Var22;
	struct<3> Var23;
	float fVar24;
	float fVar25;
	float fVar26;
	struct<3> Var27;
	float fVar28;
	float fVar29;
	float fVar30;
	struct<3> Var31;
	struct<3> Var32;
	float fVar33;
	int iVar34;
	float fVar35;
	float fVar36;
	struct<3> Var37;
	float fVar38;
	float fVar39;
	float fVar40;
	struct<3> Var41;
	struct<3> Var42;
	float fVar43;
	int iVar44;
	bool bVar45;
	bool bVar46;
	int iVar47;
	
	fVar0 = 0f;
	unk_0xDDEDC06C88DA4E04(unk_0x460153A63B9477BC(), false, 0);
	if (!unk_0xA59F96B50B97E63C(unk_0x9B0761B4C3EB8BC7(), 0))
	{
		unk_0x0312E5501F93E5AB(unk_0x9B0761B4C3EB8BC7(), true);
	}
	unk_0x6D5673CA7E01D619(uParam1->f_5, 4500f);
	unk_0x57B4EC087C9D7478(uParam1->f_5, 4500f);
	unk_0x555EE41D7C7078E6(uParam1->f_5, 5f, 1, 0, 0, false);
	unk_0x03D382CB0B44E2FC(unk_0x9B0761B4C3EB8BC7(), uParam1->f_5, 1, 0, 0, 1);
	unk_0x6A8F948698B360B4(unk_0x9B0761B4C3EB8BC7(), true);
	wait(0);
	unk_0x73D73FA241EA4AB7(1);
	unk_0x131ED02492676000(*uParam1);
	if (unk_0x7BCC91F3C1CF24E8(uParam1->f_16))
	{
	}
	else
	{
		unk_0x131ED02492676000(uParam1->f_16);
	}
	if (!unk_0x03DB5C6AABF8DA46())
	{
		unk_0x1D40553EDD51A1B8(0);
	}
	func_57(uParam1->f_5, uParam1->f_8.f_2, 0, 1);
	if (!unk_0x03DB5C6AABF8DA46())
	{
		unk_0x1D40553EDD51A1B8(0);
	}
	iVar1 = unk_0x578C4EF320340AF7() + 20000;
	bVar2 = false;
	uParam1->f_33 = 0;
	while (!bVar2 && iVar1 > unk_0x578C4EF320340AF7())
	{
		bVar2 = true;
		unk_0x131ED02492676000(*uParam1);
		if (!unk_0xC614DDE265D18415(*uParam1))
		{
			bVar2 = false;
		}
		if (!unk_0x7BCC91F3C1CF24E8(uParam1->f_16))
		{
			unk_0x131ED02492676000(uParam1->f_16);
			if (!unk_0xC614DDE265D18415(uParam1->f_16))
			{
				bVar2 = false;
			}
		}
		if (!unk_0x03DB5C6AABF8DA46())
		{
			unk_0x1D40553EDD51A1B8(0);
		}
		wait(0);
	}
	func_54();
	if (!func_53(uParam1->f_22, 0f, 0f, 0f, 0))
	{
		unk_0x27E543EDE9AEA8F2(uParam1->f_5 + uParam1->f_19 - uParam1->f_22, uParam1->f_5 + uParam1->f_19 + uParam1->f_22, false, 1);
		unk_0xF27E737981AFB47D(uParam1->f_5 + uParam1->f_19, (vmag(uParam1->f_22) + 25f), 0, 0, 0, 0, false, 0);
		unk_0x555EE41D7C7078E6(uParam1->f_5 + uParam1->f_19, (vmag(uParam1->f_22) + 25f), 1, 0, 0, false);
	}
	if (!unk_0xA59F96B50B97E63C(unk_0x9B0761B4C3EB8BC7(), 0))
	{
		unk_0x601B713E8CE5673A(unk_0x460153A63B9477BC());
		unk_0x69C71C91F56D82B9(unk_0x9B0761B4C3EB8BC7(), joaat("weapon_unarmed"), true);
		unk_0x2BB0EF9DE445EA13(unk_0x9B0761B4C3EB8BC7());
	}
	unk_0x6A8F948698B360B4(unk_0x9B0761B4C3EB8BC7(), false);
	unk_0x73D73FA241EA4AB7(0);
	unk_0x555EE41D7C7078E6(uParam1->f_5, 15f, 1, 0, 0, false);
	unk_0x5800807F2B551FCA();
	unk_0x4EDACCA1B614E2BA();
	func_51();
	while (func_50())
	{
		wait(0);
	}
	if (!unk_0x87F0CB19476706C3() && !unk_0x5B772EFCB84373BE())
	{
		unk_0xFD45D90342D2A0CD(250);
	}
	unk_0x0B5FDCC374F46B9E(1);
	if (!unk_0xA59F96B50B97E63C(unk_0x9B0761B4C3EB8BC7(), 0))
	{
		iVar4 = unk_0xF341A134A5B8D4F6(uParam1->f_5, uParam1->f_8, 2);
		unk_0x81493F39713559B1(iVar4, 0);
		unk_0x882281B10B0A5932(iVar4, 0);
		iVar5 = unk_0x68C2E3309DCAD71E("DEFAULT_ANIMATED_CAMERA", 1);
		iVar6 = 4;
		if (uParam1->f_4 != -1871534317)
		{
			iVar6 |= 2;
		}
		func_48(unk_0x9B0761B4C3EB8BC7(), uParam1->f_18);
		unk_0xDFDB9C533700BC17(unk_0x9B0761B4C3EB8BC7(), iVar4, *uParam1, uParam1->f_1, 1000f, -1.5f, iVar6, 0, 1148846080, 0);
		unk_0x08457F6C909C2001(unk_0x9B0761B4C3EB8BC7(), 1);
		unk_0xFD3A1DC001613BFE(unk_0x460153A63B9477BC(), 1);
		bVar3 = unk_0x018979C457E7B3A2(unk_0x9B0761B4C3EB8BC7(), 77);
		unk_0x8342E6CB98CD545C(unk_0x9B0761B4C3EB8BC7(), 77, true);
		unk_0x00736EE41CC355ED(iVar5, iVar4, uParam1->f_2, *uParam1);
		unk_0x3ED9330214992278(true, false, 3000, 1, 0, 0);
		if (!unk_0x7BCC91F3C1CF24E8(uParam1->f_16) && !unk_0x7BCC91F3C1CF24E8(uParam1->f_17))
		{
			unk_0x756D74A3EF0AB788(unk_0x9B0761B4C3EB8BC7(), uParam1->f_16, uParam1->f_17, 1000f, -1.5f, 10000, 33, 0, 0, 0, 0);
		}
	}
	else
	{
		iVar4 = -1;
	}
	if (!uParam1->f_25)
	{
		if (!unk_0x7BCC91F3C1CF24E8(sParam2))
		{
			func_47(sParam2, -1);
			uParam1->f_25 = 1;
		}
	}
	bVar7 = false;
	bVar8 = false;
	uVar9 = 16;
	if (!unk_0x7BCC91F3C1CF24E8(&(uParam1->f_11)))
	{
		iVar10 = func_67();
		iVar11 = -1;
		sVar12 = "";
		switch (iVar10)
		{
			case 0:
				iVar11 = 0;
				sVar12 = "MICHAEL";
				break;
			
			case 1:
				iVar11 = 1;
				sVar12 = "FRANKLIN";
				break;
			
			case 2:
				iVar11 = 2;
				sVar12 = "TREVOR";
				break;
			
			default:
				break;
		}
		func_46(&uVar9, iVar11, unk_0x9B0761B4C3EB8BC7(), sVar12, 0, 1);
	}
	if (unk_0xFC5D6FB6EECB392F(iVar4))
	{
		sVar13 = "WalkInterruptible";
		sVar14 = "ForceBlendout";
		while (unk_0xFC5D6FB6EECB392F(iVar4) && !unk_0xA59F96B50B97E63C(unk_0x9B0761B4C3EB8BC7(), 0))
		{
			if (!bVar8)
			{
				if (!unk_0x03DB5C6AABF8DA46())
				{
					if (!unk_0x7BCC91F3C1CF24E8(uParam1->f_26))
					{
						unk_0x0A794A8277A63161(uParam1->f_26, 0, 0);
						bVar8 = true;
					}
					if (!unk_0x7BCC91F3C1CF24E8(uParam1->f_27))
					{
						if (!unk_0x7BCC91F3C1CF24E8(uParam1->f_28))
						{
							unk_0xC4CC25B68A91D144(-1, uParam1->f_28, uParam1->f_27, 0);
							bVar8 = true;
						}
						if (!unk_0x7BCC91F3C1CF24E8(uParam1->f_29))
						{
							unk_0xC4CC25B68A91D144(-1, uParam1->f_29, uParam1->f_27, 0);
							bVar8 = true;
						}
					}
				}
			}
			unk_0xA86915034F55A3BF();
			unk_0x4CB4237D8858ADA6(18);
			unk_0x9A4CFC4DC9164DEB();
			func_40(0);
			iVar15 = unk_0x578C4EF320340AF7();
			if (iVar15 >= (Global_42182 - 500))
			{
				func_39(4000);
			}
			fVar16 = -1f;
			fVar17 = -1f;
			fVar0 = unk_0x369E69441C066912(iVar4);
			if (!unk_0x7BCC91F3C1CF24E8(&(uParam1->f_11)))
			{
				if (!bVar7)
				{
					if (fVar0 >= uParam1->f_15)
					{
						if (func_22(&uVar9, "PRSAUD", &(uParam1->f_11), 3, 0, 0, 0))
						{
							bVar7 = true;
						}
					}
				}
			}
			iVar18 = 0;
			if (unk_0x39CABCD7925B9200(unk_0x9B0761B4C3EB8BC7(), unk_0x856D5567211886A2(sVar13)))
			{
				iVar19 = (unk_0x0EEB12E4AD6BD29B(2, 195) - 128);
				iVar20 = (unk_0x0EEB12E4AD6BD29B(2, 196) - 128);
				if (((iVar19 < 64 && iVar19 > -64) && iVar20 < 64) && iVar20 > -64)
				{
				}
				else
				{
					iVar18 = 1;
				}
			}
			else
			{
				fVar16 = -1f;
				fVar17 = -1f;
				iVar18 = 0;
				uParam1->f_3 = uParam1->f_3;
				fVar16 = fVar16;
				fVar17 = fVar17;
			}
			if (unk_0xA860C15A1C027CBB() == 4 && uParam1->f_52 > 0f)
			{
				if (fVar0 >= uParam1->f_52)
				{
					if (!uParam1->f_32)
					{
						fVar21 = 1.5f;
						Var22 = { unk_0xA28D6B5DB2149368() };
						Var23 = { unk_0x1D5C49FCA9BC5B02(unk_0x9B0761B4C3EB8BC7(), 31086, 0f, 0f, 0f) };
						fVar24 = unk_0x272784C60C397DB6(Var22, Var23, true);
						fVar21 = func_21(fVar21, 0.001f, (fVar24 - 0.75f));
						if (fVar21 < 0f)
						{
							fVar21 = 0.001f;
						}
						func_20(&(uParam1->f_34), unk_0x9B0761B4C3EB8BC7(), func_67(), 1E-06f, 300, 300, 0, 0, 1045220557);
						func_19(&(uParam1->f_34), uParam1->f_53);
						if (!uParam1->f_33)
						{
							uParam1->f_34 = 1;
							uParam1->f_34.f_7 = unk_0x578C4EF320340AF7();
							uParam1->f_34.f_8 = 0;
							uParam1->f_33 = 1;
						}
						if (uParam1->f_57 == 999f)
						{
							uParam1->f_56 = 0f;
						}
						if (uParam1->f_57 == 999f)
						{
							Var27 = { unk_0x528A2AFB21867CAE(2) };
							fVar28 = unk_0xEF7858F25585F853(unk_0x9B0761B4C3EB8BC7());
							fVar29 = Var27.f_2;
							fVar30 = fVar28;
							uParam1->f_57 = (fVar29 - fVar30);
							if (uParam1->f_57 < 360f)
							{
								uParam1->f_57 = (uParam1->f_57 + 360f);
							}
							if (uParam1->f_57 > 360f)
							{
								uParam1->f_57 = (uParam1->f_57 - 360f);
							}
						}
						fVar25 = uParam1->f_56;
						fVar26 = uParam1->f_57;
						unk_0x7965943E39128B42(fVar25, 1065353216);
						unk_0x4C4FC7841A5FB983(fVar26);
						unk_0xE90785C31090163D(fVar25);
						unk_0xAA18856781185220(fVar26);
						Var31 = { unk_0xA28D6B5DB2149368() };
						Var32 = { unk_0x0F1DDC797C100E7F() };
						fVar33 = unk_0x272784C60C397DB6(Var31, Var32, true);
						iVar34 = round((fVar33 * 1000f));
						uParam1->f_32 = 1;
					}
					if (uParam1->f_32)
					{
						unk_0x6D91C6D7296DC544();
						if (func_16(&(uParam1->f_34), 1, 1, 1, 0, 0, 0))
						{
						}
					}
				}
			}
			if (unk_0x39CABCD7925B9200(unk_0x9B0761B4C3EB8BC7(), unk_0x856D5567211886A2(sVar14)) || iVar18)
			{
				if (!unk_0xA59F96B50B97E63C(unk_0x9B0761B4C3EB8BC7(), 0))
				{
					unk_0x9B94F6169B0DAEFD(unk_0x9B0761B4C3EB8BC7());
					switch (uParam1->f_4)
					{
						case -1871534317:
							unk_0x854FB153F2EA838B(unk_0x9B0761B4C3EB8BC7(), -1871534317, 1, 0, 0);
							unk_0x47012CDD5C524D7B(0, 0, 3, 0);
							break;
						
						case -668482597:
							unk_0x854FB153F2EA838B(unk_0x9B0761B4C3EB8BC7(), -668482597, 1, 0, 0);
							unk_0xF0C2AEEDB4BDCF16(unk_0x460153A63B9477BC(), 1f, 500, 0, 1, 0);
							if (unk_0xA860C15A1C027CBB() != 4)
							{
								if (uParam1->f_31 == 999f)
								{
									uParam1->f_30 = 0f;
								}
								if (uParam1->f_31 == 999f)
								{
									Var37 = { unk_0x528A2AFB21867CAE(2) };
									fVar38 = unk_0xEF7858F25585F853(unk_0x9B0761B4C3EB8BC7());
									fVar39 = Var37.f_2;
									fVar40 = fVar38;
									uParam1->f_31 = (fVar39 - fVar40);
									if (uParam1->f_31 < 360f)
									{
										uParam1->f_31 = (uParam1->f_31 + 360f);
									}
									if (uParam1->f_31 > 360f)
									{
										uParam1->f_31 = (uParam1->f_31 - 360f);
									}
								}
								fVar35 = uParam1->f_30;
								fVar36 = uParam1->f_31;
								unk_0x7965943E39128B42(fVar35, 1065353216);
								unk_0x4C4FC7841A5FB983(fVar36);
								Var41 = { unk_0xA28D6B5DB2149368() };
								Var42 = { unk_0x0F1DDC797C100E7F() };
								fVar43 = unk_0x272784C60C397DB6(Var41, Var42, true);
								iVar44 = round((fVar43 * 1000f));
								unk_0x3ED9330214992278(false, true, iVar44, 0, 0, 0);
							}
							break;
						
						default:
							break;
					}
					if (unk_0xFC5D6FB6EECB392F(iVar4))
					{
						unk_0x14C2D70A19403A5F(iVar4);
						iVar4 = -1;
					}
				}
			}
			wait(0);
		}
	}
	if (!func_53(uParam1->f_22, 0f, 0f, 0f, 0))
	{
		unk_0xC336C6497DDA81B4(uParam1->f_5 + uParam1->f_19 - uParam1->f_22, uParam1->f_5 + uParam1->f_19 + uParam1->f_22, 1);
	}
	unk_0xDDEDC06C88DA4E04(unk_0x460153A63B9477BC(), true, 0);
	if (!unk_0xA59F96B50B97E63C(unk_0x9B0761B4C3EB8BC7(), 0))
	{
		unk_0x9B94F6169B0DAEFD(unk_0x9B0761B4C3EB8BC7());
	}
	bVar45 = unk_0xC2A4865306DFB909();
	bVar46 = false;
	if (uParam1->f_32)
	{
		unk_0x6D91C6D7296DC544();
		if (!func_16(&(uParam1->f_34), 1, 1, 1, 0, 1, 0))
		{
			bVar46 = true;
		}
	}
	if (bVar45 || bVar46)
	{
		while ((bVar45 || bVar46) && !unk_0x9CC4D06F5338CA6B())
		{
			if (bVar45)
			{
			}
			if (bVar46)
			{
			}
			iVar47 = 2;
			func_15(1, 26, &iVar47);
			func_15(1, 79, &iVar47);
			func_15(1, 1, &iVar47);
			func_15(1, 2, &iVar47);
			func_15(0, 22, &iVar47);
			func_15(0, 36, &iVar47);
			func_15(0, 142, &iVar47);
			func_15(0, 141, &iVar47);
			func_15(0, 140, &iVar47);
			func_15(0, 263, &iVar47);
			func_15(0, 264, &iVar47);
			wait(0);
			bVar45 = unk_0xC2A4865306DFB909();
			bVar46 = false;
			if (uParam1->f_32)
			{
				unk_0x6D91C6D7296DC544();
				if (!func_16(&(uParam1->f_34), 1, 1, 1, 0, 1, 0))
				{
					bVar46 = true;
				}
			}
		}
	}
	if (!unk_0x7BCC91F3C1CF24E8(uParam1->f_16))
	{
		unk_0x1082C25039B168F8(uParam1->f_16);
	}
	unk_0x1082C25039B168F8(*uParam1);
	unk_0xB8B0F7C8C1548C5B(iVar5, 0);
	func_13(&(uParam1->f_34));
	if (!unk_0xA59F96B50B97E63C(unk_0x9B0761B4C3EB8BC7(), 0))
	{
		unk_0x8342E6CB98CD545C(unk_0x9B0761B4C3EB8BC7(), 77, bVar3);
		unk_0x0312E5501F93E5AB(unk_0x9B0761B4C3EB8BC7(), false);
	}
	sParam0 = sParam0;
}

void func_13(var uParam0)
{
	func_14(uParam0);
	*uParam0 = 0;
	uParam0->f_9 = { 0f, 0f, 0f };
}

void func_14(var uParam0)
{
	if (unk_0x40397A9A17EEC1C5(uParam0->f_1))
	{
		unk_0xB8B0F7C8C1548C5B(uParam0->f_1, 0);
	}
	if (unk_0x40397A9A17EEC1C5(uParam0->f_2))
	{
		unk_0xB8B0F7C8C1548C5B(uParam0->f_2, 0);
	}
	if (unk_0x40397A9A17EEC1C5(uParam0->f_3))
	{
		unk_0xB8B0F7C8C1548C5B(uParam0->f_3, 0);
	}
	if (unk_0x40397A9A17EEC1C5(uParam0->f_4))
	{
		unk_0xB8B0F7C8C1548C5B(uParam0->f_4, 0);
	}
}

void func_15(int iParam0, int iParam1, int iParam2)
{
	unk_0x779660A9E5364C4D(iParam0, iParam1, 1);
	*iParam2++;
}

int func_16(var uParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, int iParam6)
{
	struct<3> Var0;
	struct<3> Var1;
	struct<3> Var2;
	struct<3> Var3;
	struct<3> Var4;
	struct<3> Var5;
	struct<3> Var6;
	float fVar7;
	
	switch (*uParam0)
	{
		case 0:
			func_17();
			if (!unk_0xA59F96B50B97E63C(uParam0->f_5, 0))
			{
				func_14(uParam0);
				Var0 = { unk_0xA28D6B5DB2149368() };
				if (bParam1)
				{
					Var0 = { Var0 + unk_0x97C0B1E5FCD8E08A(uParam0->f_5) * FtoV(unk_0x9E3DAF75EFC49F5B()) };
				}
				Var1 = { unk_0x71C23069714A27B9(uParam0->f_5, Var0) };
				Var2 = { unk_0x528A2AFB21867CAE(2) };
				Var3 = { Var2 + uParam0->f_9 };
				Var4 = { Var3 - unk_0x090239DEAF625B17(uParam0->f_5, 2) };
				Var5 = { (-sin(Var3.f_2) * cos(Var3.x)), (cos(Var3.f_2) * cos(Var3.x)), sin(Var3.x) };
				Var6 = { (-sin(Var4.f_2) * cos(Var4.x)), (cos(Var4.f_2) * cos(Var4.x)), sin(Var4.x) };
				fVar7 = unk_0xE5D3BD8BA3386277();
				if (uParam0->f_17 > 0 || iParam6 != 0)
				{
					uParam0->f_3 = unk_0x7CD2F129A4A837A8(1775630800, 0);
				}
				uParam0->f_1 = unk_0x7CD2F129A4A837A8(26379945, 1);
				if (bParam1)
				{
					unk_0x3B1D5D044BC72834(uParam0->f_1, uParam0->f_5, Var1, 1);
				}
				else
				{
					unk_0x8A3898631CCEC253(uParam0->f_1, Var0);
				}
				unk_0xBF92D2A60C7C686E(uParam0->f_1, Var2, 2);
				unk_0xD64C2E5B5BA2D347(uParam0->f_1, fVar7);
				uParam0->f_2 = unk_0x7CD2F129A4A837A8(26379945, 1);
				if (bParam1 && !bParam4)
				{
					unk_0x3B1D5D044BC72834(uParam0->f_2, uParam0->f_5, Var1 + Var6 * Vector(uParam0->f_12, uParam0->f_12, uParam0->f_12), 1);
				}
				else
				{
					unk_0x8A3898631CCEC253(uParam0->f_2, Var0 + Var5 * Vector(uParam0->f_12, uParam0->f_12, uParam0->f_12));
				}
				unk_0xBF92D2A60C7C686E(uParam0->f_2, Var2, 2);
				unk_0xD64C2E5B5BA2D347(uParam0->f_2, fVar7);
				if (uParam0->f_17 > 0 && iParam6 == 0)
				{
					uParam0->f_4 = unk_0x7CD2F129A4A837A8(26379945, 1);
					if (bParam1 && !bParam4)
					{
						unk_0x3B1D5D044BC72834(uParam0->f_4, uParam0->f_5, Var1 + Var6 * Vector(uParam0->f_12, uParam0->f_12, uParam0->f_12) * Vector(uParam0->f_13, uParam0->f_13, uParam0->f_13), 1);
					}
					else
					{
						unk_0x8A3898631CCEC253(uParam0->f_4, Var0 + Var5 * Vector(uParam0->f_12, uParam0->f_12, uParam0->f_12) * Vector(uParam0->f_13, uParam0->f_13, uParam0->f_13));
					}
					unk_0xBF92D2A60C7C686E(uParam0->f_4, Var2, 2);
					unk_0xD64C2E5B5BA2D347(uParam0->f_4, fVar7);
				}
				if (uParam0->f_17 > 0 || iParam6 != 0)
				{
					unk_0x4DABF0E9D2E225E6(uParam0->f_3, uParam0->f_1, 0, 2);
					if (iParam6 == 0)
					{
						unk_0x4DABF0E9D2E225E6(uParam0->f_3, uParam0->f_4, uParam0->f_17, 2);
					}
					unk_0x4DABF0E9D2E225E6(uParam0->f_3, uParam0->f_2, (uParam0->f_14 - uParam0->f_17), 2);
					unk_0xC4CE0C19E774153E(uParam0->f_3, iParam6);
					unk_0x856549C07003344B(uParam0->f_3, true);
				}
				else
				{
					unk_0xF674D9B2033F5F86(uParam0->f_2, uParam0->f_1, uParam0->f_14, 2, 2);
				}
				unk_0x3ED9330214992278(true, false, 3000, 1, 0, 0);
				uParam0->f_7 = unk_0x578C4EF320340AF7();
				uParam0->f_8 = 0;
				*uParam0 = 1;
			}
			else
			{
				return 1;
			}
			break;
		
		case 1:
			func_17();
			if (bParam3)
			{
				if (!uParam0->f_8)
				{
					if (unk_0x578C4EF320340AF7() >= (uParam0->f_7 + uParam0->f_16))
					{
						if (bParam5)
						{
							switch (uParam0->f_6)
							{
								case 1:
									unk_0x0A794A8277A63161("CamPushInFranklin", 0, 0);
									break;
								
								case 0:
									unk_0x0A794A8277A63161("CamPushInMichael", 0, 0);
									break;
								
								case 2:
									unk_0x0A794A8277A63161("CamPushInTrevor", 0, 0);
									break;
							}
						}
						else
						{
							unk_0x0A794A8277A63161("CamPushInNeutral", 0, 0);
						}
						unk_0xC4CC25B68A91D144(-1, "1st_Person_Transition", "PLAYER_SWITCH_CUSTOM_SOUNDSET", 1);
						uParam0->f_8 = 1;
					}
				}
			}
			if (unk_0x578C4EF320340AF7() >= (uParam0->f_7 + uParam0->f_15))
			{
				if (bParam2)
				{
					func_14(uParam0);
					unk_0x3ED9330214992278(false, false, 3000, 1, 0, 0);
				}
				return 1;
			}
			break;
		
		case 2:
			return 1;
			break;
	}
	return 0;
}

void func_17()
{
	unk_0x0037AEC7A79CCCB4();
	func_18();
}

void func_18()
{
	Global_22411.f_134 = 1;
}

void func_19(var uParam0, struct<3> Param1)
{
	uParam0->f_9 = { Param1 };
}

void func_20(var uParam0, int iParam1, int iParam2, float fParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)
{
	uParam0->f_5 = iParam1;
	uParam0->f_6 = iParam2;
	uParam0->f_12 = fParam3;
	uParam0->f_14 = iParam4;
	uParam0->f_15 = iParam5;
	uParam0->f_16 = iParam6;
	uParam0->f_17 = iParam7;
	uParam0->f_13 = iParam8;
}

float func_21(float fParam0, float fParam1, float fParam2)
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

bool func_22(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_38(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
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
	return func_23(sParam2, iParam3, 0);
}

int func_23(char* sParam0, int iParam1, bool bParam2)
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
					func_37();
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
		if (func_36(8, -1))
		{
			return 0;
		}
		Global_21081 = { Global_21075 };
		func_35();
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
				func_33();
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
				if (func_32())
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
			if (func_31())
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
			func_30();
			Global_21015 = bParam2;
		}
		Global_21007 = iParam1;
		StringCopy(&Global_20624, sParam0, 24);
		Global_19871 = 0;
		func_29();
		func_24();
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
		func_37();
	}
	return 0;
}

void func_24()
{
	if (!func_25())
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

int func_25()
{
	if (!Global_262145.f_28160)
	{
		return 0;
	}
	if (!Global_76833)
	{
		return 0;
	}
	if (unk_0x460153A63B9477BC() == func_28())
	{
		return 0;
	}
	if (func_26(unk_0x460153A63B9477BC()))
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

bool func_26(int iParam0)
{
	return func_27(iParam0, 20);
}

bool func_27(int iParam0, int iParam1)
{
	return unk_0xCE990E643CD9D0E5(Global_1630317[iParam0 /*595*/].f_11.f_4, iParam1);
}

int func_28()
{
	return -1;
}

void func_29()
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

void func_30()
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

int func_31()
{
	if (Global_19681.f_1 == 1 || Global_19681.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

int func_32()
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

void func_33()
{
	if (func_34(14))
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
		Global_19681 = func_67();
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

bool func_34(int iParam0)
{
	return Global_41631 == iParam0;
}

void func_35()
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

bool func_36(int iParam0, int iParam1)
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

void func_37()
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

void func_38(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, var uParam5)
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

void func_39(int iParam0)
{
	Global_42182 = (unk_0x578C4EF320340AF7() + iParam0);
}

void func_40(int iParam0)
{
	if (func_45())
	{
		return;
	}
	if (!Global_19681.f_1 == 1)
	{
		if (func_44(0))
		{
			func_41(iParam0);
		}
		unk_0xBE20AB8238688965(&Global_7552, 2);
	}
}

void func_41(int iParam0)
{
	if (func_45())
	{
		return;
	}
	if (Global_19864)
	{
		if (func_43())
		{
			func_42(1, 1);
		}
		else
		{
			func_42(0, 0);
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
	if (!func_31())
	{
		Global_19681.f_1 = 3;
	}
}

void func_42(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		if (func_44(0))
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

bool func_43()
{
	return unk_0xCE990E643CD9D0E5(Global_1689730, 5);
}

int func_44(int iParam0)
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

bool func_45()
{
	return unk_0xCE990E643CD9D0E5(Global_1689730, 19);
}

void func_46(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5)
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

void func_47(char* sParam0, int iParam1)
{
	unk_0x17751E107423AFE9(sParam0);
	unk_0x1A169149B3D18FCB(0, 0, true, iParam1);
}

void func_48(int iParam0, var uParam1)
{
	if (func_49(uParam1, 1))
	{
		unk_0x4BC720C42B38CB77(iParam0, "HOSPITAL_0", 0f, 1f);
	}
	if (func_49(uParam1, 2))
	{
		unk_0x4BC720C42B38CB77(iParam0, "HOSPITAL_1", 0f, 1f);
	}
	if (func_49(uParam1, 4))
	{
		unk_0x4BC720C42B38CB77(iParam0, "HOSPITAL_2", 0f, 1f);
	}
	if (func_49(uParam1, 8))
	{
		unk_0x4BC720C42B38CB77(iParam0, "HOSPITAL_3", 0f, 1f);
	}
	if (func_49(uParam1, 16))
	{
		unk_0x4BC720C42B38CB77(iParam0, "HOSPITAL_4", 0f, 1f);
	}
	if (func_49(uParam1, 32))
	{
		unk_0x4BC720C42B38CB77(iParam0, "HOSPITAL_5", 0f, 1f);
	}
	if (func_49(uParam1, 64))
	{
		unk_0x4BC720C42B38CB77(iParam0, "HOSPITAL_6", 0f, 1f);
	}
	if (func_49(uParam1, 128))
	{
		unk_0x4BC720C42B38CB77(iParam0, "HOSPITAL_7", 0f, 1f);
	}
	if (func_49(uParam1, 256))
	{
		unk_0x4BC720C42B38CB77(iParam0, "HOSPITAL_8", 0f, 1f);
	}
	if (func_49(uParam1, 512))
	{
		unk_0x4BC720C42B38CB77(iParam0, "HOSPITAL_9", 0f, 1f);
	}
	if (func_49(uParam1, 0))
	{
	}
}

bool func_49(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

int func_50()
{
	if (((Global_98955 == 13 || Global_98955 == 10) || Global_98955 == 11) || Global_98955 == 12)
	{
		return 0;
	}
	return 1;
}

void func_51()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 8)
	{
		if (Global_95888[iVar0 /*17*/] && !Global_95888[iVar0 /*17*/].f_1)
		{
			if (Global_95888[iVar0 /*17*/].f_3 == 0)
			{
				if ((Global_95888[iVar0 /*17*/].f_5 != 88 && Global_95888[iVar0 /*17*/].f_5 != 89) && Global_95888[iVar0 /*17*/].f_5 != 92)
				{
					func_52(Global_95888[iVar0 /*17*/].f_5, 1);
				}
			}
		}
		iVar0++;
	}
}

void func_52(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		if ((iParam0 != 88 && iParam0 != 89) && iParam0 != 92)
		{
			Global_92940[iParam0 /*2*/] = 1;
		}
	}
	else
	{
		Global_92940[iParam0 /*2*/] = 0;
	}
}

bool func_53(struct<3> Param0, struct<3> Param1, bool bParam2)
{
	if (bParam2)
	{
		return (Param0.x == Param1.x && Param0.f_1 == Param1.f_1);
	}
	return ((Param0.x == Param1.x && Param0.f_1 == Param1.f_1) && Param0.f_2 == Param1.f_2);
}

void func_54()
{
	func_55();
	func_73(1);
}

void func_55()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0;
	iVar1 = 0;
	iVar0 = 0;
	while (iVar0 < 16)
	{
		iVar1 = Global_42588[iVar0 /*5*/];
		if (!iVar1 == -1)
		{
			func_171(1, iVar1, 1);
		}
		iVar0++;
	}
	iVar2 = 0;
	iVar2 = 0;
	while (iVar2 < 5)
	{
		if (Global_42562[iVar2 /*5*/] == 0)
		{
			func_56(iVar2);
		}
		iVar2++;
	}
}

void func_56(int iParam0)
{
	if (iParam0 < 0 || iParam0 >= 5)
	{
		return;
	}
	if (!Global_42562[iParam0 /*5*/].f_1 == 0)
	{
		if (Global_42562[iParam0 /*5*/].f_1 == unk_0x9B0761B4C3EB8BC7())
		{
			Global_42799 = 0;
		}
	}
	Global_42562[iParam0 /*5*/] = 13;
	Global_42562[iParam0 /*5*/].f_1 = 0;
	Global_42562[iParam0 /*5*/].f_2 = 0;
	Global_42562[iParam0 /*5*/].f_3 = 0;
	Global_42562[iParam0 /*5*/].f_4 = 0;
	Global_42560 = (Global_42560 - 1);
	if (Global_42560 < 0)
	{
		Global_42560 = 0;
	}
}

int func_57(struct<3> Param0, float fParam1, int iParam2, int iParam3)
{
	if (unk_0x5A228A6A51E757C8(unk_0x460153A63B9477BC()))
	{
		func_61(0);
		unk_0x555EE41D7C7078E6(Param0, 5f, 1, 0, 0, false);
		if (unk_0xAE06B9E39EBDE049(unk_0x9B0761B4C3EB8BC7()))
		{
			if (!unk_0x5AEB5DDFFAD43CA5(unk_0x9B0761B4C3EB8BC7()))
			{
				unk_0x03D382CB0B44E2FC(unk_0x9B0761B4C3EB8BC7(), Param0, 1, 0, 0, 1);
				unk_0xE922BAA80E8F9324(unk_0x9B0761B4C3EB8BC7(), fParam1);
				unk_0x7965943E39128B42(0f, 1065353216);
				unk_0x4C4FC7841A5FB983(0f);
			}
		}
		unk_0xF16CDD1D05F4411A(Param0, 4500f, 0);
		wait(0);
		unk_0x555EE41D7C7078E6(Param0, 5000f, 1, 0, 0, false);
		unk_0x4BAC0F0B99F7DCF9(Param0, 5000f, 0);
		unk_0x6D5673CA7E01D619(Param0, 5000f);
		unk_0x57B4EC087C9D7478(Param0, 5000f);
		func_60();
		func_59();
		settimera(0);
		func_61(1);
		if (!unk_0xE9159DB182CF0841())
		{
			while (!unk_0xF16CDD1D05F4411A(Param0, 4500f, 0))
			{
				wait(0);
				if (timera() > 2000)
				{
					unk_0x73D73FA241EA4AB7(0);
					return 0;
				}
			}
		}
		settimera(0);
		while (!unk_0x0C7F95EB5CFEFB8B())
		{
			wait(0);
			if (timera() > 20000)
			{
				unk_0x73D73FA241EA4AB7(0);
				if (unk_0xE9159DB182CF0841())
				{
					unk_0xF990EDED7D25FB88();
				}
				return 0;
			}
		}
		if (unk_0xAE06B9E39EBDE049(unk_0x9B0761B4C3EB8BC7()))
		{
			if (!unk_0x5AEB5DDFFAD43CA5(unk_0x9B0761B4C3EB8BC7()))
			{
				if (unk_0xE9159DB182CF0841())
				{
					unk_0xF990EDED7D25FB88();
				}
				unk_0x73D73FA241EA4AB7(0);
				settimera(0);
				unk_0x5800807F2B551FCA();
				if (iParam3 == 1)
				{
					unk_0x4EDACCA1B614E2BA();
				}
				else
				{
					settimera(5000);
				}
				unk_0xB8866F4BAE5E8ABA();
			}
		}
		while ((!unk_0x8A83B64FAAF9045D() && !func_58()) && timera() < 1500)
		{
			wait(0);
		}
		if (timera() > 1500)
		{
			if (iParam3 == 1)
			{
			}
		}
		if (iParam2 == 1)
		{
			unk_0xE5CC8E2D904E42CE(Param0, &(Param0.f_2), 0, 0);
			unk_0x555EE41D7C7078E6(Param0, 5f, 1, 0, 0, false);
			if (unk_0xAE06B9E39EBDE049(unk_0x9B0761B4C3EB8BC7()))
			{
				if (!unk_0x5AEB5DDFFAD43CA5(unk_0x9B0761B4C3EB8BC7()))
				{
					unk_0x03D382CB0B44E2FC(unk_0x9B0761B4C3EB8BC7(), Param0, 1, 0, 0, 1);
					unk_0xE922BAA80E8F9324(unk_0x9B0761B4C3EB8BC7(), fParam1);
				}
			}
		}
		unk_0x7965943E39128B42(0f, 1065353216);
		unk_0x4C4FC7841A5FB983(0f);
		func_61(0);
		return 1;
	}
	func_61(0);
	return 0;
}

bool func_58()
{
	return !Global_75654.f_553;
}

void func_59()
{
	Global_75654.f_553 = 1;
	Global_75654.f_554 = 0;
}

void func_60()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 68)
	{
		Global_75654[iVar0] = 0;
		iVar0++;
	}
}

void func_61(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	if (iVar0 == 0)
	{
		if (iParam0 == 1)
		{
			if (!unk_0xCE990E643CD9D0E5(Global_98955.f_20, 2))
			{
				unk_0x73D73FA241EA4AB7(1);
				unk_0xBE20AB8238688965(&(Global_98955.f_20), 2);
			}
		}
		else if (unk_0xCE990E643CD9D0E5(Global_98955.f_20, 2))
		{
			unk_0x73D73FA241EA4AB7(0);
			unk_0xD2459066EA58CE43(&(Global_98955.f_20), 2);
		}
	}
}

int func_62()
{
	if (unk_0xCE990E643CD9D0E5(unk_0x344C570D6F8700DF(0, 65535), 0))
	{
		return 1;
	}
	return 0;
}

bool func_63(int iParam0)
{
	return unk_0xCE990E643CD9D0E5(Global_111858.f_7225[iParam0], 0);
}

int func_64(int iParam0)
{
	if (iParam0 == 146 || iParam0 == -1)
	{
		return 0;
	}
	return Global_111858.f_9081.f_99.f_58[iParam0];
}

int func_65()
{
	if (Global_38996[11] == 1)
	{
		return 4;
	}
	if (!func_66(21))
	{
		return 0;
	}
	if (!func_64(130))
	{
		return 1;
	}
	if (!func_64(131))
	{
		return 2;
	}
	if (!func_66(22))
	{
		return 1;
	}
	if (!func_66(49))
	{
		return 3;
	}
	if (!func_66(28))
	{
		return 1;
	}
	return 3;
}

int func_66(int iParam0)
{
	if (iParam0 == 94 || iParam0 == -1)
	{
		return 0;
	}
	return Global_111858.f_9081.f_330[iParam0 /*6*/];
}

int func_67()
{
	func_68();
	return Global_111858.f_2359.f_539.f_4321;
}

void func_68()
{
	int iVar0;
	
	if (unk_0xAE06B9E39EBDE049(unk_0x9B0761B4C3EB8BC7()))
	{
		if (func_71(Global_111858.f_2359.f_539.f_4321) != unk_0x36FE6D3220816ADA(unk_0x9B0761B4C3EB8BC7()))
		{
			iVar0 = func_70(unk_0x9B0761B4C3EB8BC7());
			if (func_69(iVar0) && (!func_34(14) || Global_110809))
			{
				if (Global_111858.f_2359.f_539.f_4321 != iVar0 && func_69(Global_111858.f_2359.f_539.f_4321))
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

bool func_69(int iParam0)
{
	return iParam0 < 3;
}

int func_70(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0xAE06B9E39EBDE049(iParam0))
	{
		iVar1 = unk_0x36FE6D3220816ADA(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_71(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_71(int iParam0)
{
	if (func_69(iParam0))
	{
		return func_72(iParam0);
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

var func_72(int iParam0)
{
	return Global_1848[iParam0 /*29*/];
}

void func_73(bool bParam0)
{
	unk_0x4BBB9B3A0DA8C277(0f);
	unk_0x4DC5556A84F500ED(0f);
	unk_0x582443322A476671(0f);
	unk_0x99E4391EBF519614(1);
	unk_0x79395D98B1E002B5(0f);
	unk_0xDEF12101C8B41A5E(1);
	unk_0x7847DF998CE21D7D(0);
	if (unk_0x306BF588BD8151E8("SAFEHOUSE_STONED_MICHAEL"))
	{
		unk_0xFA07F8BEBDAAFBA8("SAFEHOUSE_STONED_MICHAEL");
	}
	if (!unk_0x7BCC91F3C1CF24E8(&Global_42779))
	{
		if (unk_0x306BF588BD8151E8(&Global_42779))
		{
			unk_0xFA07F8BEBDAAFBA8(&Global_42779);
		}
	}
	if (unk_0x40397A9A17EEC1C5(Global_42768))
	{
		if (unk_0xD78C6D4D8984DD52(Global_42768))
		{
			unk_0xE5BEF932CBA74554(Global_42768, 0f);
			unk_0x67E7C2B137175486(Global_42768, 1);
		}
	}
	if (unk_0x8520BA0B467C93DA())
	{
		unk_0xAE57C4C2D11A9FFF(0);
	}
	if (bParam0)
	{
		if (unk_0x927B553F2D633AA5() != -1 || unk_0x7E1FC5070D7D65B1() != -1)
		{
			unk_0x8F2EB8BCB5CCE8D8();
		}
		else if (unk_0x9CC4D06F5338CA6B())
		{
			unk_0x8F2EB8BCB5CCE8D8();
		}
	}
	Global_42774 = 0f;
	StringCopy(&Global_42775, "", 16);
	StringCopy(&Global_42779, "", 64);
	StringCopy(&Global_42795, "", 16);
	func_74();
}

void func_74()
{
	Global_42767 = 0;
	Global_42768 = 0;
	Global_42769 = 0;
	Global_42770 = 30000;
	Global_42771 = 0f;
	Global_42773 = 0f;
	Global_42772 = 0f;
	Global_42774 = 0f;
	StringCopy(&Global_42775, "", 16);
}

void func_75(int iParam0)
{
	int iVar0;
	
	switch (iParam0)
	{
		case 0:
			iVar0 = Global_262145.f_17700;
			break;
		
		case 1:
			iVar0 = Global_262145.f_17690;
			break;
		
		case 2:
			iVar0 = Global_262145.f_17701;
			break;
		
		case 3:
			iVar0 = Global_262145.f_17693;
			break;
		
		case 4:
			iVar0 = Global_262145.f_17689;
			break;
		
		case 6:
			iVar0 = 3;
			break;
		
		case 7:
			iVar0 = Global_262145.f_17704;
			break;
		
		case 8:
			iVar0 = Global_262145.f_17705;
			break;
		
		case 9:
			iVar0 = Global_262145.f_17708;
			break;
		
		case 22:
			iVar0 = Global_262145.f_17709;
			break;
		
		case 23:
			iVar0 = Global_262145.f_17702;
			break;
		
		case 25:
			iVar0 = Global_262145.f_18591;
			break;
		
		case 26:
			iVar0 = Global_262145.f_18590;
			break;
	}
	if (iVar0 != 0)
	{
		unk_0xE192193881225A93(func_85(func_86()), func_84(func_86()), func_83(), func_82(), iParam0, iVar0);
	}
	func_81(iVar0);
	func_76(iVar0);
}

void func_76(int iParam0)
{
	int iVar0;
	
	iVar0 = func_80(3969, -1, 0);
	iVar0 = (iVar0 + iParam0);
	if (iVar0 < 0)
	{
		iVar0 = 0;
	}
	if (iVar0 > 9999)
	{
		iVar0 = 9999;
	}
	Global_1630317[unk_0x460153A63B9477BC() /*595*/].f_11.f_463 = iVar0;
	func_77(3969, iVar0, -1, 1, 0);
}

void func_77(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	int iVar0;
	
	if (bParam4)
	{
	}
	iVar0 = Global_2551832[iParam0 /*3*/][func_78(iParam2)];
	if (iVar0 != 0)
	{
		unk_0x6000E4684CB4330B(iVar0, iParam1, iParam3);
	}
}

int func_78(var uParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = uParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_79();
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

int func_79()
{
	return Global_1312763;
}

int func_80(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	var uVar1;
	
	if (iParam0 != 11771)
	{
		if (iParam2 == 0)
		{
		}
		iVar0 = Global_2551832[iParam0 /*3*/][func_78(iParam1)];
		if (unk_0xD2F202166691EDB2(iVar0, &uVar1, -1))
		{
			return uVar1;
		}
	}
	return 0;
}

void func_81(int iParam0)
{
	int iVar0;
	
	iVar0 = unk_0x460153A63B9477BC();
	Global_1630317[iVar0 /*595*/].f_11.f_462 = (Global_1630317[iVar0 /*595*/].f_11.f_462 + iParam0);
	if (Global_1630317[iVar0 /*595*/].f_11.f_462 < -9999)
	{
		Global_1630317[iVar0 /*595*/].f_11.f_462 = 9999;
	}
	else if (Global_1630317[iVar0 /*595*/].f_11.f_462 > 9999)
	{
		Global_1630317[iVar0 /*595*/].f_11.f_462 = 9999;
	}
}

int func_82()
{
	if (Global_1676128.f_3 != 0)
	{
		return Global_1676128.f_3;
	}
	return -1;
}

int func_83()
{
	if (Global_1676128.f_2 != 0)
	{
		return Global_1676128.f_2;
	}
	return -1;
}

int func_84(int iParam0)
{
	if (iParam0 == func_28())
	{
		return -1;
	}
	return Global_1630317[iParam0 /*595*/].f_11.f_8[1];
}

int func_85(int iParam0)
{
	if (iParam0 == func_28())
	{
		return -1;
	}
	return Global_1630317[iParam0 /*595*/].f_11.f_8[0];
}

int func_86()
{
	return Global_1630317[unk_0x460153A63B9477BC() /*595*/].f_11;
}

bool func_87(bool bParam0)
{
	return func_88(unk_0x460153A63B9477BC(), bParam0);
}

int func_88(int iParam0, bool bParam1)
{
	return func_89(iParam0, bParam1, 1);
}

int func_89(int iParam0, bool bParam1, int iParam2)
{
	int iVar0;
	
	if (iParam0 == func_28())
	{
		return 0;
	}
	if (!bParam1)
	{
		if (func_90(iParam0, iParam2))
		{
			return 0;
		}
	}
	iVar0 = Global_1630317[iParam0 /*595*/].f_11;
	if (iVar0 != func_28() && Global_1630317[iVar0 /*595*/].f_11.f_423 == iParam2)
	{
		return 1;
	}
	return 0;
}

int func_90(int iParam0, int iParam1)
{
	if (iParam0 != func_28())
	{
		if (Global_1630317[iParam0 /*595*/].f_11 != func_28())
		{
			if (Global_1630317[iParam0 /*595*/].f_11 == iParam0 && Global_1630317[iParam0 /*595*/].f_11.f_423 == iParam1)
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_91(int iParam0, bool bParam1, int iParam2, int iParam3)
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	bool bVar5;
	bool bVar6;
	bool bVar7;
	bool bVar8;
	bool bVar9;
	bool bVar10;
	bool bVar11;
	bool bVar12;
	bool bVar13;
	bool bVar14;
	bool bVar15;
	bool bVar16;
	bool bVar17;
	bool bVar18;
	bool bVar19;
	bool bVar20;
	bool bVar21;
	bool bVar22;
	bool bVar23;
	bool bVar24;
	bool bVar25;
	bool bVar26;
	int iVar27;
	int iVar28;
	
	if (bParam1)
	{
		if (unk_0x4F315B95B1461ED4())
		{
			unk_0xFF8E7A064055ECA6(false);
		}
	}
	if (func_104())
	{
		if (bParam1)
		{
			return;
		}
		else
		{
			iParam3 = 1;
		}
	}
	if (!unk_0x25DDB354A40FFCDB())
	{
		iVar0 = iParam2;
		unk_0xDDEDC06C88DA4E04(iParam0, bParam1, iVar0);
	}
	else
	{
		bVar1 = true;
		bVar2 = iParam2 & 2 != false;
		bVar3 = iParam2 & 4 != false;
		bVar4 = iParam2 & 8 != false;
		bVar5 = iParam2 & 16 != false;
		bVar6 = iParam2 & 32 != false;
		bVar7 = iParam2 & 64 != false;
		bVar8 = iParam2 & 128 != false;
		bVar9 = iParam2 & 256 != false;
		bVar10 = iParam2 & 512 != false;
		bVar11 = iParam2 & 1024 != false;
		bVar12 = iParam2 & 2048 != false;
		bVar13 = iParam2 & 4096 != false;
		bVar14 = iParam2 & 8192 != false;
		bVar15 = iParam2 & 16384 != false;
		bVar16 = iParam2 & 32768 != false;
		bVar17 = iParam2 & 65536 != false;
		bVar18 = iParam2 & 131072 != false;
		bVar19 = iParam2 & 262144 != false;
		bVar20 = iParam2 & 524288 != false;
		bVar21 = iParam2 & 1048576 != false;
		bVar22 = iParam2 & 2097152 != false;
		bVar23 = iParam2 & 4194304 != false;
		bVar24 = iParam2 & 8388608 != false;
		bVar25 = iParam2 & 16777216 != false;
		if (iParam2 & 33554432 != 0 || unk_0xFC559366953F62B3())
		{
			bVar1 = false;
		}
		if (!func_102())
		{
			bVar26 = false;
			if (bParam1 == 1)
			{
				bVar26 = true;
			}
			if (bVar16 == 0 && !bVar21)
			{
				bVar26 = true;
			}
			if (bVar10 == 1)
			{
				bVar26 = true;
			}
			if (bVar26)
			{
				return;
			}
		}
		if (bVar18)
		{
		}
		if (unk_0x166E920FB00B2DBB(iParam0) && (unk_0x5A228A6A51E757C8(iParam0) || iParam3 == 1))
		{
			if (iParam3 && unk_0xA59F96B50B97E63C(unk_0x1FA7B77001D60F9D(iParam0), 0))
			{
				return;
			}
			iVar27 = unk_0x1FA7B77001D60F9D(iParam0);
			if (!bVar20)
			{
				if ((bVar19 && bParam1 == 0) && unk_0x25DDB354A40FFCDB())
				{
					unk_0x9675999D57D9F953(1);
				}
				else if (bVar14 || (!func_100(unk_0x460153A63B9477BC(), 0) && !func_99()))
				{
					unk_0x80250B8368A4E611(iVar27, !bVar14, 0);
				}
				if (!bVar14)
				{
					if (unk_0x25DDB354A40FFCDB() && !bVar19)
					{
						unk_0x9675999D57D9F953(0);
					}
					Global_2425869[iParam0 /*443*/].f_248 = 0;
				}
			}
			if (bParam1)
			{
				if (bVar1)
				{
					func_96(0, 0, 0);
					if (bVar25)
					{
						unk_0x701364DD9F501826();
					}
				}
				if (!func_95(iVar27) && !unk_0xEB1D872D96DDA8E2(iVar27))
				{
					if (!bVar22)
					{
						unk_0x58ADF88C51AAFDC5(iVar27, true, 0);
					}
				}
				if (!unk_0xB77B1396EAA80D8F(iVar27))
				{
					if (!bVar21)
					{
						unk_0x6A8F948698B360B4(iVar27, false);
					}
					unk_0x7C47E49129337557(iVar27, 1);
				}
				else if (!bVar21)
				{
					unk_0x6A8F948698B360B4(iVar27, false);
				}
				unk_0x0DC39BE87E4C5599(iVar27, true);
				unk_0xBF70D1B666A353F5(iParam0, 0);
				unk_0x330ACDACFF26728A(iParam0, 0);
				if (unk_0x36E2FC4B39D3018D(iVar27) && unk_0x51E339346E2220A4(iVar27))
				{
					unk_0x46468389F464E317(iVar27);
				}
				unk_0x4478D8ED4673EF14(iVar27, 1);
				if (unk_0x4DC4117F94CD5B84(unk_0x460153A63B9477BC()) == 0)
				{
					func_94();
					func_93();
				}
				if (unk_0x5C6122477A723551())
				{
					if (!bVar23)
					{
					}
				}
				if (unk_0xE9159DB182CF0841())
				{
				}
				Global_2425869[iParam0 /*443*/].f_249 = 0;
				if (!bVar24)
				{
					bVar3 = true;
				}
				if (Global_2405074.f_2674)
				{
					Global_2405074.f_2674 = 0;
				}
			}
			else
			{
				if (!func_95(iVar27) && !unk_0xEB1D872D96DDA8E2(iVar27))
				{
					if (!bVar22)
					{
						unk_0x58ADF88C51AAFDC5(iVar27, !bVar15, 0);
					}
					if (!unk_0xB77B1396EAA80D8F(iVar27))
					{
						if (!bVar21)
						{
							unk_0x6A8F948698B360B4(iVar27, bVar16);
						}
						if (!bVar16)
						{
							unk_0x7C47E49129337557(iVar27, 1);
						}
					}
					if (func_92(Global_4456448.f_129348))
					{
						unk_0x6A8F948698B360B4(iVar27, true);
					}
				}
				if (Global_1312872)
				{
					bVar10 = false;
				}
				if (bVar10)
				{
					unk_0xBF70D1B666A353F5(iParam0, 0);
				}
				else
				{
					unk_0xBF70D1B666A353F5(iParam0, 1);
				}
				unk_0x0DC39BE87E4C5599(iVar27, bVar17);
				if (bVar3)
				{
					if (!unk_0x5A898C4DF17FB664(iVar27) && !unk_0x47DBF174A0CB9D55(iVar27, 0))
					{
						unk_0x2BB0EF9DE445EA13(iVar27);
					}
				}
			}
			iVar28 = 0;
			if (bVar2)
			{
				iVar28 |= 2;
			}
			if (bVar3)
			{
				iVar28 |= 4;
			}
			if (bVar4)
			{
				iVar28 |= 8;
			}
			if (bVar5)
			{
				iVar28 |= 16;
			}
			if (bVar6)
			{
				iVar28 |= 32;
			}
			if (bVar7)
			{
				iVar28 |= 64;
			}
			if (bVar8)
			{
				iVar28 |= 128;
			}
			if (bVar9)
			{
				iVar28 |= 256;
			}
			if (bVar10)
			{
				iVar28 |= 512;
			}
			if (bVar11)
			{
				iVar28 |= 1024;
			}
			if (bVar12)
			{
				iVar28 |= 2048;
			}
			if (bVar13)
			{
				iVar28 |= 4096;
			}
			unk_0xDDEDC06C88DA4E04(iParam0, bParam1, iVar28);
		}
	}
}

bool func_92(int iParam0)
{
	return iParam0 == 17;
}

void func_93()
{
	struct<3> Var0;
	
	Global_2440049.f_1344 = 0;
	Global_2440049.f_1345 = 0;
	Global_2440049.f_1346 = { 9999.9f, 9999.9f, 9999.9f };
	Global_2440049.f_1351 = -1;
	Global_2440049.f_1352 = 0;
	Global_2405074.f_2685 = { Var0 };
}

void func_94()
{
	Global_2405074.f_696 = 0;
	Global_2405074.f_2728 = 0;
	Global_2405074.f_512 = 0;
	Global_2405074.f_601 = 0;
	Global_2425869[unk_0x460153A63B9477BC() /*443*/].f_211 = 0;
	Global_2405074.f_2683 = 0;
}

int func_95(int iParam0)
{
	int iVar0;
	
	if (unk_0x47DBF174A0CB9D55(iParam0, 1))
	{
		return 1;
	}
	else
	{
		iVar0 = unk_0x16BC17A8EDC701A2(iParam0, -1794415470);
		if (iVar0 == 0)
		{
			return 1;
		}
	}
	return 0;
}

void func_96(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	
	if (unk_0xA59F96B50B97E63C(iParam1, 0))
	{
	}
	if (iParam0 == 1)
	{
		if (unk_0xAE06B9E39EBDE049(iParam1))
		{
			if (unk_0xD0390A93AF3907B8(iParam1))
			{
				if (!unk_0x56B60AE958412839(unk_0x460153A63B9477BC(), unk_0xE4400E48E081F17A(iParam1)))
				{
					iVar0 = 1;
				}
			}
		}
	}
	if (iVar0 == 0)
	{
		if (iParam2 == 1)
		{
			if (iParam0 == 1)
			{
				func_98();
			}
			else if (!unk_0xCE990E643CD9D0E5(Global_2359302.f_67, 1))
			{
				if (unk_0xCE990E643CD9D0E5(Global_2359302.f_67, 2))
				{
					iVar1 = 0;
					while (iVar1 < 8)
					{
						unk_0x80610B7EA03DE232(iVar1, Global_2359302.f_58[iVar1]);
						iVar1++;
					}
				}
				unk_0xBE20AB8238688965(&(Global_2359302.f_67), 1);
			}
		}
		if (func_100(unk_0x460153A63B9477BC(), 0))
		{
			unk_0x80B3C69DE260B92D(iParam0, iParam1, 1);
		}
		else
		{
			unk_0xE86692F29AFB9043(iParam0, iParam1);
		}
		unk_0x0F9CBC63296852FD(iParam0, iParam1);
		func_97(joaat("MPPLY_IS_CHAR_SPECTATING"), iParam0);
	}
}

void func_97(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != 0)
	{
		unk_0xBD9D9E72ABB288E4(iVar0, iParam1, 1);
	}
}

void func_98()
{
	int iVar0;
	
	if (!unk_0x509C03DADAEE0A94())
	{
		if (!unk_0xCE990E643CD9D0E5(Global_2359302.f_67, 2))
		{
			iVar0 = 0;
			while (iVar0 < 8)
			{
				Global_2359302.f_58[iVar0] = unk_0xF7B3A1430308F92B(iVar0);
				iVar0++;
			}
			unk_0xBE20AB8238688965(&(Global_2359302.f_67), 2);
			unk_0xBE20AB8238688965(&(Global_2359302.f_67), 0);
		}
	}
}

bool func_99()
{
	return unk_0xCE990E643CD9D0E5(Global_2359302, 3);
}

bool func_100(int iParam0, int iParam1)
{
	bool bVar0;
	
	if (iParam0 == unk_0x460153A63B9477BC())
	{
		bVar0 = func_101(-1, 0) == 8;
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

int func_101(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_79();
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

int func_102()
{
	if (func_103() == 0)
	{
		return 1;
	}
	return 0;
}

int func_103()
{
	return Global_1312485.f_18;
}

int func_104()
{
	if (Global_1590682[unk_0x460153A63B9477BC() /*883*/].f_35 && !Global_2452679.f_2846.f_215 == -1)
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

void func_106()
{
	int iVar0;
	
	if (bLocal_46)
	{
		return;
	}
	Local_43.f_4 = 0;
	if (!func_107(Global_42588[iLocal_54 /*5*/].f_2))
	{
		return;
	}
	iVar0 = unk_0x344C570D6F8700DF(500, 3000);
	Local_52.x = 5;
	Local_51.f_2 = (timera() + iVar0);
}

int func_107(int iParam0)
{
	int iVar0;
	char* sVar1;
	char* sVar2;
	char* sVar3;
	int iVar4;
	
	iVar0 = func_118();
	if (iVar0 == -2)
	{
		return 0;
	}
	if (unk_0x5AEB5DDFFAD43CA5(Local_43.f_1))
	{
		if (unk_0x47DBF174A0CB9D55(Local_43.f_1, 0) || unk_0x11B7C25143EE2F29(Local_43.f_1))
		{
			return 0;
		}
		if (unk_0xD69E1B4895023052(Local_43.f_1))
		{
			return 0;
		}
		if (func_114(Local_43.f_1))
		{
			return 0;
		}
	}
	if ((Global_42588[iLocal_54 /*5*/].f_3 < 3 && Global_42588[iLocal_54 /*5*/].f_3 != 0) && Global_42588[iLocal_54 /*5*/].f_3 > Global_42588[iLocal_54 /*5*/].f_4)
	{
		return 0;
	}
	if ((Global_42588[iLocal_54 /*5*/].f_4 < 9 && Global_42588[iLocal_54 /*5*/].f_4 != 0) && Global_42588[iLocal_54 /*5*/].f_4 > Global_42588[iLocal_54 /*5*/].f_3)
	{
		return 0;
	}
	sVar1 = func_113(iParam0);
	if (unk_0x7BCC91F3C1CF24E8(sVar1))
	{
		return 0;
	}
	if (func_114(Local_43.f_1))
	{
		return 0;
	}
	unk_0x08E33007524DAD35(sVar1);
	if (func_110(Local_43.f_1))
	{
		sVar2 = "MOVE_M@DRUNK@TRANSITIONS";
		sVar3 = "";
		switch (iParam0)
		{
			case 0:
				sVar3 = "";
				break;
			
			case 2:
				sVar3 = "VERY_TO_MODERATE";
				break;
			
			case 1:
				sVar3 = "MODERATE_TO_SLIGHTLY";
				break;
			
			default:
				break;
		}
		if (!unk_0x7BCC91F3C1CF24E8(sVar2) && !unk_0x7BCC91F3C1CF24E8(sVar3))
		{
			unk_0x131ED02492676000(sVar2);
			while (!unk_0xC614DDE265D18415(sVar2))
			{
				wait(0);
			}
			if (!unk_0x5AEB5DDFFAD43CA5(Local_43.f_1))
			{
				unk_0x756D74A3EF0AB788(Local_43.f_1, sVar2, sVar3, 1.5f, -1.5f, -1, 48, 0, 0, 0, 0);
				sLocal_50 = sVar3;
			}
		}
	}
	if (!unk_0x8FBC2B79465DEB9E(sVar1))
	{
		return 0;
	}
	if (unk_0x5AEB5DDFFAD43CA5(Local_43.f_1))
	{
		return 0;
	}
	unk_0xA3AB9D48A7E8EA48(Local_43.f_1, sVar1, 0.75f);
	if (unk_0xA860C15A1C027CBB() == 4)
	{
		unk_0x3C9318CA0A4E1D58(Local_43.f_1, "move_ped_strafing_firstperson@drunk");
	}
	unk_0xC2229B9DD448D1E5(Local_43.f_1, 0, sVar1, "idle", 2f, 1);
	Local_52.f_2 = sVar1;
	bLocal_47 = true;
	iVar4 = 0;
	switch (func_70(Local_43.f_1))
	{
		case 0:
			iVar4 = "FACIALS@P_M_ZERO@BASE";
			break;
		
		case 1:
			iVar4 = "FACIALS@P_M_ONE@BASE";
			break;
		
		case 2:
			iVar4 = "FACIALS@P_M_TWO@BASE";
			break;
		
		default:
			if (unk_0xD0390A93AF3907B8(Local_43.f_1))
			{
				if (!func_108())
				{
					iVar4 = "FACIALS@GEN_MALE@BASE";
				}
				else
				{
					iVar4 = "FACIALS@GEN_FEMALE@BASE";
				}
			}
			else if (unk_0xE080FA9EB010F041(Local_43.f_1))
			{
				iVar4 = "FACIALS@GEN_MALE@BASE";
			}
			else
			{
				iVar4 = "FACIALS@GEN_FEMALE@BASE";
			}
			break;
	}
	unk_0x68A762F748822351(Local_43.f_1, "mood_drunk_1", iVar4);
	unk_0x8342E6CB98CD545C(Local_43.f_1, 200, true);
	unk_0x8342E6CB98CD545C(Local_43.f_1, 46, true);
	unk_0x83BBFE5E96C64FBA(Local_43.f_1, 0);
	unk_0x6AC7395A8E313A46(Local_43.f_1, 262144, true);
	unk_0x9275E03B786C9A31(Local_43.f_1, 1);
	return 1;
}

bool func_108()
{
	return func_109(unk_0x460153A63B9477BC());
}

int func_109(int iParam0)
{
	if (unk_0x36FE6D3220816ADA(unk_0x1FA7B77001D60F9D(iParam0)) == joaat("mp_f_freemode_01"))
	{
		return 1;
	}
	return 0;
}

int func_110(int iParam0)
{
	struct<3> Var0;
	
	if (unk_0x47DBF174A0CB9D55(iParam0, 1) || unk_0x11B7C25143EE2F29(iParam0))
	{
		return 0;
	}
	if (unk_0x16BC17A8EDC701A2(iParam0, -2017877118) != 7)
	{
		return 0;
	}
	if (unk_0x16BC17A8EDC701A2(iParam0, 1785177548) != 7)
	{
		return 0;
	}
	if (unk_0x7922FF28ED63354A(iParam0))
	{
		return 0;
	}
	if (unk_0xA16974805191D19C(iParam0))
	{
		return 0;
	}
	if (unk_0xCED6B5226244381C(iParam0))
	{
		return 0;
	}
	if (unk_0xDB9E558E914A4D5C(iParam0))
	{
		return 0;
	}
	if (Global_74030)
	{
		return 0;
	}
	if (func_112())
	{
		return 0;
	}
	if (iParam0 == unk_0x9B0761B4C3EB8BC7())
	{
		if (!unk_0xA575D5F4B48D3440(unk_0x460153A63B9477BC()))
		{
			return 0;
		}
		if (!unk_0x4DC4117F94CD5B84(unk_0x460153A63B9477BC()))
		{
			return 0;
		}
		if (unk_0xF283063436CFEA72(unk_0x460153A63B9477BC()) || unk_0x8B1FF66E0C62B7AE(unk_0x460153A63B9477BC()))
		{
			return 0;
		}
		if (func_111())
		{
			return 0;
		}
	}
	Var0 = { unk_0x97C0B1E5FCD8E08A(iParam0) };
	if (vmag2(Var0) >= (1f * 1f))
	{
		return 0;
	}
	return 1;
}

bool func_111()
{
	return Global_99007.f_352 > 0;
}

bool func_112()
{
	return unk_0x578C4EF320340AF7() <= Global_22550.f_5878 + 100;
}

char* func_113(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "move_m@drunk@verydrunk";
			break;
		
		case 1:
			return "move_m@drunk@slightlydrunk";
			break;
		
		case 2:
			return "move_m@drunk@moderatedrunk";
			break;
	}
	return "";
}

bool func_114(int iParam0)
{
	int iVar0;
	char* sVar1;
	
	iVar0 = func_115(iParam0);
	sVar1 = func_113(iVar0);
	if (unk_0x7BCC91F3C1CF24E8(Local_52.f_2))
	{
		if (unk_0x7BCC91F3C1CF24E8(sVar1))
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	return unk_0xF005CCA4263DF67F(Local_52.f_2, sVar1);
}

int func_115(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (iParam0 == 0)
	{
		return -1;
	}
	if (!unk_0xAE06B9E39EBDE049(iParam0))
	{
		return -1;
	}
	iVar0 = func_117(iParam0);
	iVar1 = func_116(iVar0);
	if (iVar1 == -1)
	{
		return -1;
	}
	return Global_42588[iVar1 /*5*/].f_2;
}

int func_116(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 16)
	{
		if (Global_42588[iVar0 /*5*/] == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_117(int iParam0)
{
	int iVar0;
	
	if (iParam0 == 0)
	{
		return -1;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 16)
	{
		if (iParam0 == Global_42588[iVar0 /*5*/].f_1)
		{
			return Global_42588[iVar0 /*5*/];
		}
		iVar0++;
	}
	return -1;
}

int func_118()
{
	int iVar0;
	
	if (Local_51 == -2)
	{
		return -2;
	}
	if (Local_51 == -1)
	{
		return -1;
	}
	iVar0 = (Local_51 - timera());
	if (iVar0 < 0)
	{
		return -2;
	}
	if (iVar0 > 65534)
	{
		iVar0 = 65534;
	}
	return iVar0;
}

void func_119()
{
	if (bLocal_46)
	{
		return;
	}
	if (!func_120())
	{
		Local_52.x = 5;
		Local_51.f_2 = timera() + 5000;
		return;
	}
	Local_52.x = 6;
}

bool func_120()
{
	struct<3> Var0;
	struct<3> Var1;
	float fVar2;
	
	if (Local_43.f_4 == 0)
	{
		return 0;
	}
	if (unk_0xA59F96B50B97E63C(Local_43.f_4, 0))
	{
		return 0;
	}
	Var0 = { unk_0x3E4D3CCC220BDFB1(Local_43.f_1, true) };
	Var1 = { unk_0x3E4D3CCC220BDFB1(Local_43.f_4, true) };
	fVar2 = unk_0x272784C60C397DB6(Var0, Var1, true);
	return fVar2 < 7f;
}

void func_121()
{
	int iVar0;
	char* sVar1;
	
	if (Local_43.f_1 == unk_0x9B0761B4C3EB8BC7())
	{
		unk_0x779660A9E5364C4D(0, 36, 1);
		if (unk_0x48238AD298F1A5F0(Local_43.f_1))
		{
			if (Global_42588[iLocal_54 /*5*/].f_2 == 0 || Global_42588[iLocal_54 /*5*/].f_2 == 2)
			{
				unk_0x912105796D275F9C(Local_43.f_1, 0, 0);
			}
		}
		if (unk_0xAEA644806CF6AB5C(Local_43.f_1))
		{
			unk_0x40F7948F0B79E359(Local_43.f_1, 0);
		}
	}
	if (Local_51 != -2)
	{
		if (Local_51 == -1)
		{
			if (Global_42588[iLocal_54 /*5*/].f_2 != 0)
			{
				Global_42588[iLocal_54 /*5*/].f_2 = 0;
			}
		}
		else
		{
			iVar0 = (Local_51 - timera());
			if (iVar0 <= 0)
			{
				iVar0 = 0;
			}
			iVar0 = (iVar0 / 1000) + 1;
			if (Global_42588[iLocal_54 /*5*/].f_2 == 0)
			{
				if (iVar0 < 30)
				{
					Global_42588[iLocal_54 /*5*/].f_2 = 2;
					if (!func_107(2))
					{
						Global_42588[iLocal_54 /*5*/].f_2 = 0;
						return;
					}
				}
			}
			if (Global_42588[iLocal_54 /*5*/].f_2 == 2)
			{
				if (iVar0 < 10)
				{
					Global_42588[iLocal_54 /*5*/].f_2 = 1;
					if (!func_107(2))
					{
						Global_42588[iLocal_54 /*5*/].f_2 = 2;
						return;
					}
				}
			}
			if (Global_42588[iLocal_54 /*5*/].f_2 == 1)
			{
			}
		}
	}
	else
	{
		return;
	}
	if (!unk_0x7BCC91F3C1CF24E8(sLocal_50))
	{
		if (!func_110(Local_43.f_1))
		{
			sVar1 = "MOVE_M@DRUNK@TRANSITIONS";
			if (unk_0x9934470AA0A08B57(Local_43.f_1, sVar1, sLocal_50, 3))
			{
				unk_0x0975D13A9BB6D616(Local_43.f_1, sVar1, sLocal_50, -4f);
			}
			sLocal_50 = "";
			return;
		}
	}
	if ((Global_42588[iLocal_54 /*5*/].f_3 >= 10 || Global_42588[iLocal_54 /*5*/].f_4 >= 15) || unk_0xCE990E643CD9D0E5(Global_42804, 9))
	{
		if (unk_0x16BC17A8EDC701A2(Local_43.f_1, 1785177548) == 1 && !unk_0xCE990E643CD9D0E5(Global_1678288.f_3, 27))
		{
			return;
		}
		if (unk_0xF282AA6FECA1EF23(Local_43.f_1))
		{
			return;
		}
		if (unk_0x47DBF174A0CB9D55(Local_43.f_1, 1))
		{
			if (Global_42588[iLocal_54 /*5*/].f_3 >= 10)
			{
				Global_42588[iLocal_54 /*5*/].f_3 = 9;
			}
			if (Global_42588[iLocal_54 /*5*/].f_4 >= 15)
			{
				Global_42588[iLocal_54 /*5*/].f_4 = 14;
			}
			return;
		}
		if (((unk_0x25DDB354A40FFCDB() && Local_43.f_1 == unk_0x9B0761B4C3EB8BC7()) && func_136(unk_0x460153A63B9477BC())) && Global_262145.f_23856)
		{
			if (Global_42588[iLocal_54 /*5*/].f_3 >= 10)
			{
				Global_42588[iLocal_54 /*5*/].f_3 = 9;
			}
			if (Global_42588[iLocal_54 /*5*/].f_4 >= 15)
			{
				Global_42588[iLocal_54 /*5*/].f_4 = 14;
			}
			return;
		}
		if ((unk_0x25DDB354A40FFCDB() && Local_43.f_1 == unk_0x9B0761B4C3EB8BC7()) && func_135())
		{
			if (Global_42588[iLocal_54 /*5*/].f_3 >= 10)
			{
				Global_42588[iLocal_54 /*5*/].f_3 = 9;
			}
			if (Global_42588[iLocal_54 /*5*/].f_4 >= 15)
			{
				Global_42588[iLocal_54 /*5*/].f_4 = 14;
			}
			return;
		}
		if ((unk_0x25DDB354A40FFCDB() && unk_0xFC559366953F62B3()) && func_134())
		{
			if (Global_42588[iLocal_54 /*5*/].f_3 >= 10)
			{
				Global_42588[iLocal_54 /*5*/].f_3 = 9;
			}
			if (Global_42588[iLocal_54 /*5*/].f_4 >= 15)
			{
				Global_42588[iLocal_54 /*5*/].f_4 = 14;
			}
			return;
		}
		if ((unk_0x25DDB354A40FFCDB() && unk_0xFC559366953F62B3()) && func_133())
		{
			if (Global_42588[iLocal_54 /*5*/].f_3 >= 10)
			{
				Global_42588[iLocal_54 /*5*/].f_3 = 9;
			}
			if (Global_42588[iLocal_54 /*5*/].f_4 >= 15)
			{
				Global_42588[iLocal_54 /*5*/].f_4 = 14;
			}
			return;
		}
		if (func_130(unk_0x460153A63B9477BC()))
		{
			if (Global_42588[iLocal_54 /*5*/].f_3 >= 10)
			{
				Global_42588[iLocal_54 /*5*/].f_3 = 9;
			}
			if (Global_42588[iLocal_54 /*5*/].f_4 >= 15)
			{
				Global_42588[iLocal_54 /*5*/].f_4 = 14;
			}
			return;
		}
		if (((unk_0x25DDB354A40FFCDB() && Local_43.f_1 == unk_0x9B0761B4C3EB8BC7()) && func_129(unk_0x460153A63B9477BC())) && Global_262145.f_26316)
		{
			if (Global_42588[iLocal_54 /*5*/].f_3 >= 10)
			{
				Global_42588[iLocal_54 /*5*/].f_3 = 9;
			}
			if (Global_42588[iLocal_54 /*5*/].f_4 >= 15)
			{
				Global_42588[iLocal_54 /*5*/].f_4 = 14;
			}
			return;
		}
		if (((unk_0x25DDB354A40FFCDB() && Local_43.f_1 == unk_0x9B0761B4C3EB8BC7()) && func_126(unk_0x460153A63B9477BC())) && Global_262145.f_26349)
		{
			if (Global_42588[iLocal_54 /*5*/].f_3 >= 10)
			{
				Global_42588[iLocal_54 /*5*/].f_3 = 9;
			}
			if (Global_42588[iLocal_54 /*5*/].f_4 >= 15)
			{
				Global_42588[iLocal_54 /*5*/].f_4 = 14;
			}
			return;
		}
		if ((unk_0x25DDB354A40FFCDB() && Local_43.f_1 == unk_0x9B0761B4C3EB8BC7()) && func_122(unk_0x460153A63B9477BC()) == 15)
		{
			if (Global_42588[iLocal_54 /*5*/].f_3 >= 10)
			{
				Global_42588[iLocal_54 /*5*/].f_3 = 9;
			}
			if (Global_42588[iLocal_54 /*5*/].f_4 >= 15)
			{
				Global_42588[iLocal_54 /*5*/].f_4 = 14;
			}
			return;
		}
		if (((unk_0x25DDB354A40FFCDB() && Local_43.f_1 == unk_0x9B0761B4C3EB8BC7()) && Global_74030) && !Global_42561)
		{
			if (Global_42588[iLocal_54 /*5*/].f_3 >= 10)
			{
				Global_42588[iLocal_54 /*5*/].f_3 = 9;
			}
			if (Global_42588[iLocal_54 /*5*/].f_4 >= 15)
			{
				Global_42588[iLocal_54 /*5*/].f_4 = 14;
			}
			return;
		}
		Local_52.f_1 = 3;
		return;
	}
	if (!bLocal_47)
	{
		return;
	}
	if (!func_114(Local_43.f_1))
	{
		return;
	}
}

int func_122(int iParam0)
{
	if (func_125(iParam0) == 243)
	{
		return func_123(iParam0);
	}
	return -1;
}

int func_123(int iParam0)
{
	if (func_124(iParam0, 0))
	{
		return Global_1630317[iParam0 /*595*/].f_11.f_181;
	}
	return -1;
}

int func_124(int iParam0, int iParam1)
{
	if (Global_1630317[iParam0 /*595*/].f_11.f_33 != -1 || (iParam1 && Global_1630317[iParam0 /*595*/].f_11.f_32 != -1))
	{
		return 1;
	}
	return 0;
}

int func_125(int iParam0)
{
	if (func_124(iParam0, 0))
	{
		return Global_1630317[iParam0 /*595*/].f_11.f_33;
	}
	return -1;
}

int func_126(int iParam0)
{
	if (iParam0 != func_28())
	{
		if (func_128(iParam0, 1, 1))
		{
			if (Global_2425869[iParam0 /*443*/].f_314.f_6 != -1)
			{
				return func_127(Global_2425869[iParam0 /*443*/].f_314.f_6) == 15;
			}
		}
	}
	return 0;
}

int func_127(int iParam0)
{
	switch (iParam0)
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
		case 5:
		case 6:
		case 7:
		case 8:
		case 9:
		case 10:
		case 11:
		case 12:
		case 13:
		case 14:
		case 15:
		case 16:
		case 17:
		case 18:
		case 19:
		case 20:
		case 21:
			return 0;
			break;
		
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
			break;
		
		case 22:
		case 23:
		case 24:
		case 25:
		case 26:
		case 27:
		case 28:
		case 29:
		case 30:
		case 31:
		case 32:
		case 33:
		case 34:
		case 35:
		case 36:
		case 37:
		case 38:
		case 39:
		case 40:
		case 41:
			return 2;
			break;
		
		case 43:
		case 42:
		case 44:
		case 45:
		case 46:
		case 47:
		case 48:
		case 49:
		case 50:
		case 51:
		case 52:
		case 53:
		case 54:
		case 55:
		case 56:
		case 57:
		case 58:
		case 59:
		case 98:
		case 99:
		case 100:
		case 112:
		case 113:
		case 114:
		case 115:
		case 119:
		case 116:
		case 118:
		case 120:
		case 121:
		case 126:
		case 127:
		case 134:
		case 135:
		case 136:
		case 137:
		case 138:
		case 139:
		case 140:
		case 141:
		case 142:
		case 143:
		case 144:
			return 3;
			break;
		
		case 70:
		case 71:
		case 72:
		case 73:
		case 74:
		case 75:
		case 76:
		case 77:
		case 78:
		case joaat("MPSV_LP0_31"):
		case 80:
			return 4;
			break;
		
		case 81:
			return 5;
			break;
		
		case 82:
			return 6;
			break;
		
		case 83:
		case 84:
		case 85:
		case 86:
		case 87:
			return 7;
			break;
		
		case 88:
			return 8;
			break;
		
		case 89:
		case 90:
		case 91:
		case 92:
		case 93:
		case 94:
		case 95:
		case 96:
		case 97:
			return 9;
			break;
		
		case 101:
			return 10;
			break;
		
		case 102:
		case 103:
		case 104:
		case 105:
		case 106:
		case 107:
		case 108:
		case 109:
		case 110:
		case 111:
			return 11;
			break;
		
		case 117:
			return 12;
			break;
		
		case 122:
			return 13;
			break;
		
		case 123:
			return 14;
			break;
		
		case 124:
			return 15;
			break;
		
		case 125:
			return 16;
			break;
		
		case 128:
		case 129:
		case 130:
		case 131:
		case 132:
		case 133:
			return 17;
			break;
		
		case 145:
			return 18;
			break;
		
		case 146:
			return 19;
			break;
		
		case 147:
			return 20;
			break;
	}
	return -1;
}

int func_128(int iParam0, bool bParam1, bool bParam2)
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

int func_129(int iParam0)
{
	if (iParam0 != func_28())
	{
		if (func_128(iParam0, 1, 1))
		{
			if (Global_2425869[iParam0 /*443*/].f_314.f_6 != -1)
			{
				return func_127(Global_2425869[iParam0 /*443*/].f_314.f_6) == 14;
			}
		}
	}
	return 0;
}

bool func_130(int iParam0)
{
	return func_131(func_132(iParam0));
}

int func_131(int iParam0)
{
	switch (iParam0)
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
			return 1;
		
		default:
	}
	return 0;
}

int func_132(int iParam0)
{
	if (func_125(iParam0) == 256)
	{
		return func_123(iParam0);
	}
	return -1;
}

var func_133()
{
	return Global_2451787.f_23;
}

var func_134()
{
	return Global_2451787.f_20;
}

var func_135()
{
	return Global_2515566;
}

int func_136(int iParam0)
{
	if (iParam0 != func_28())
	{
		if (func_128(iParam0, 1, 1))
		{
			if (Global_2425869[iParam0 /*443*/].f_314.f_6 != -1)
			{
				return func_127(Global_2425869[iParam0 /*443*/].f_314.f_6) == 11;
			}
		}
	}
	return 0;
}

int func_137()
{
	int iVar0;
	
	if (!unk_0x6E0C5E7AAF8B6214(Local_43.f_1))
	{
		return 0;
	}
	iVar0 = 0;
	iVar0 = unk_0xA5D5B1042E8F47BD(Local_43.f_1, 0);
	if (!unk_0x80FF6C016CDB0FAF(iVar0, 0))
	{
		return 0;
	}
	if (!unk_0x10D3F7E169A49C44(iVar0, -1, 0) == Local_43.f_1)
	{
		return 0;
	}
	Local_43.f_4 = iVar0;
	Local_52.x = 7;
	return 1;
}

void func_138()
{
	if (!unk_0x47DBF174A0CB9D55(Local_43.f_1, 0))
	{
		Local_52.x = 4;
		return;
	}
}

void func_139()
{
	int iVar0;
	float fVar1;
	struct<3> Var2;
	struct<3> Var3;
	struct<3> Var4;
	
	if (!bLocal_46)
	{
		return;
	}
	if (!unk_0x5A228A6A51E757C8(unk_0x460153A63B9477BC()))
	{
		return;
	}
	if (!unk_0x6E0C5E7AAF8B6214(unk_0x9B0761B4C3EB8BC7()))
	{
		return;
	}
	if (unk_0x0F1E960B06B93848(unk_0x460153A63B9477BC(), 0))
	{
		return;
	}
	iVar0 = unk_0xA5D5B1042E8F47BD(unk_0x9B0761B4C3EB8BC7(), 0);
	fVar1 = unk_0xF3A639BEE7AADF55(iVar0);
	if (fVar1 < 5f)
	{
		return;
	}
	Var2 = { unk_0x3E4D3CCC220BDFB1(unk_0x9B0761B4C3EB8BC7(), true) };
	Var3 = { Var2 - Vector(3f, 30f, 30f) };
	Var4 = { Var2 + Vector(3f, 30f, 30f) };
	if (!unk_0x597467025C9DE24C(Var3, Var4) && !unk_0x2975580CCA617F3B(Var3, Var4))
	{
		return;
	}
	unk_0x26152FD46A297C2F(unk_0x460153A63B9477BC(), 1, 0);
	unk_0x4B86C627B5EABFBF(unk_0x460153A63B9477BC(), 0);
	func_11(73, 1);
}

void func_140()
{
	int iVar0;
	int iVar1;
	int iVar2;
	float fVar3;
	int iVar4;
	
	iVar0 = Local_43.f_1;
	if (unk_0x47DBF174A0CB9D55(Local_43.f_1, 0))
	{
		iVar1 = unk_0xA5D5B1042E8F47BD(Local_43.f_1, 0);
		iVar2 = unk_0x10D3F7E169A49C44(iVar1, -1, 0);
		if (!iVar2 == Local_43.f_1)
		{
			return;
		}
		if (unk_0x25DDB354A40FFCDB() && !unk_0xAA5B806352173DEA(iVar1))
		{
			return;
		}
		iVar0 = iVar1;
	}
	else if (!unk_0x9B0761B4C3EB8BC7() == Local_43.f_1)
	{
		return;
	}
	else if (!unk_0xA860C15A1C027CBB() == 4)
	{
		fLocal_49 = 0f;
		func_142(iVar0, 0f);
		return;
	}
	if (timera() < Local_51.f_4)
	{
		func_142(iVar0, fLocal_49);
		return;
	}
	if (unk_0xA1914E72A0EB31D0(iVar0))
	{
		Local_51.f_4 = timera() + 2000;
	}
	else
	{
		Local_51.f_4 = timera() + 1000;
	}
	fVar3 = unk_0xF3A639BEE7AADF55(iVar0);
	if (fVar3 < 0.04f)
	{
		fLocal_49 = 0f;
		func_142(iVar0, 0f);
		return;
	}
	if (Local_51.f_1 == -1)
	{
		fLocal_49 = func_141(iVar0, 0.13f, 0.06f);
	}
	else
	{
		iVar4 = (Local_51.f_1 - timera());
		if (iVar4 < 5000)
		{
			fLocal_49 = 0f;
		}
		else if (iVar4 < 15000)
		{
			fLocal_49 = func_141(iVar0, 0.05f, 0.02f);
		}
		else if (iVar4 < 30000)
		{
			fLocal_49 = func_141(iVar0, 0.07f, 0.03f);
		}
		else if (iVar4 < 45000)
		{
			fLocal_49 = func_141(iVar0, 0.09f, 0.04f);
		}
		else if (iVar4 < 600000)
		{
			fLocal_49 = func_141(iVar0, 0.1f, 0.05f);
		}
		else
		{
			fLocal_49 = func_141(iVar0, 0.13f, 0.06f);
		}
	}
	func_142(iVar0, fLocal_49);
}

float func_141(int iParam0, float fParam1, float fParam2)
{
	float fVar0;
	float fVar1;
	int iVar2;
	
	fVar0 = unk_0x658086F2B3C5E4E4(-fParam1, fParam1);
	fVar1 = unk_0x658086F2B3C5E4E4(0f, fParam2);
	if (fVar0 < 0f)
	{
		fVar0 = (fVar0 - fVar1);
	}
	else
	{
		fVar0 = (fVar0 + fVar1);
	}
	if (unk_0xA1914E72A0EB31D0(iParam0))
	{
		if (unk_0x7587087519CF4F83(unk_0x9048E8838E822F21(iParam0)))
		{
			fVar0 = (fVar0 * 4.5f);
		}
		else
		{
			fVar0 = (fVar0 * 3f);
		}
	}
	else
	{
		iVar2 = unk_0x36FE6D3220816ADA(iParam0);
		if (unk_0x97AFEF6099069369(iVar2))
		{
			fVar0 = (fVar0 * 1.5f);
		}
		else
		{
			fVar0 = (fVar0 * 0.5f);
		}
	}
	fVar0 = func_21(fVar0, -1f, 1f);
	return fVar0;
}

void func_142(int iParam0, float fParam1)
{
	if (unk_0x25DDB354A40FFCDB() && !unk_0xAA5B806352173DEA(iParam0))
	{
		return;
	}
	if (unk_0xA1914E72A0EB31D0(iParam0))
	{
		unk_0x0B053BDA62037778(unk_0x9048E8838E822F21(iParam0), fParam1);
	}
	else if (unk_0x20F7576FDB52E2B0(iParam0))
	{
		unk_0x309A543E543A049B(unk_0xEA90A5DC55A2F652(iParam0), fParam1);
	}
}

void func_143()
{
	int iVar0;
	
	if (!unk_0x47DBF174A0CB9D55(Local_43.f_1, 0))
	{
		Local_52.x = 4;
		return;
	}
	if (unk_0x25DDB354A40FFCDB())
	{
		if (Global_42588[iLocal_54 /*5*/].f_3 >= 10 || Global_42588[iLocal_54 /*5*/].f_4 >= 15)
		{
			if (Global_42588[iLocal_54 /*5*/].f_3 >= 10)
			{
				Global_42588[iLocal_54 /*5*/].f_3 = 9;
			}
			if (Global_42588[iLocal_54 /*5*/].f_4 >= 15)
			{
				Global_42588[iLocal_54 /*5*/].f_4 = 14;
			}
		}
	}
	if (bLocal_46)
	{
		return;
	}
	iVar0 = unk_0xA5D5B1042E8F47BD(Local_43.f_1, 0);
	if (!unk_0x80FF6C016CDB0FAF(iVar0, 0))
	{
		unk_0x0AB756271BADC8DF(Local_43.f_1, 0, 0);
		Local_52.x = 11;
		return;
	}
}

void func_144()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (timera() <= Local_51.f_3)
	{
		return;
	}
	iVar0 = unk_0x16BC17A8EDC701A2(unk_0x9B0761B4C3EB8BC7(), 355471868);
	if (!iVar0 == 7)
	{
		Local_51.f_3 = timera() + 1000;
		return;
	}
	if (!unk_0x47DBF174A0CB9D55(Local_43.f_1, 0))
	{
		Local_52.x = 4;
		Local_51.f_3 = -2;
		return;
	}
	iVar1 = unk_0xA5D5B1042E8F47BD(Local_43.f_1, 0);
	iVar2 = unk_0x10D3F7E169A49C44(iVar1, -1, 0);
	if (iVar2 == Local_43.f_1)
	{
		func_145();
		Local_51.f_3 = -2;
		return;
	}
	unk_0xD544FE5B026DBAA6(Local_43.f_1, iVar1, 0);
	Local_52.x = 9;
	Local_51.f_3 = timera() + 1000;
}

void func_145()
{
	if (Local_52.x == 10)
	{
		return;
	}
	Local_52.x = 10;
	if (iLocal_44 == -1)
	{
		return;
	}
	func_171(iLocal_44, 2, 5);
	Local_51.f_4 = timera();
	fLocal_49 = 0f;
}

void func_146()
{
	if (unk_0x6E0C5E7AAF8B6214(Local_43.f_1))
	{
		Local_52.x = 10;
		return;
	}
	if (timera() < Local_51.f_3)
	{
		return;
	}
	Local_52.x = 4;
	Local_51.f_3 = -2;
}

void func_147()
{
	int iVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	
	if (!bLocal_46)
	{
	}
	iVar0 = 0;
	bVar1 = false;
	if (bVar1 || unk_0x6E0C5E7AAF8B6214(Local_43.f_1))
	{
		if (!bLocal_46)
		{
		}
		iVar0 = unk_0xA5D5B1042E8F47BD(Local_43.f_1, 0);
		if (!iVar0 == Local_43.f_4)
		{
			if (!bLocal_46)
			{
			}
			if (!bLocal_46)
			{
				if (!bLocal_46)
				{
				}
				unk_0x0AB756271BADC8DF(Local_43.f_1, 0, 0);
				Local_52.x = 11;
				return;
			}
			Local_43.f_4 = iVar0;
		}
		if (bVar1)
		{
			if (!bLocal_46)
			{
			}
			func_145();
			return;
		}
		if (!bLocal_46)
		{
			if (!bLocal_46)
			{
			}
			func_145();
			return;
		}
		if (!bLocal_46)
		{
		}
		iVar2 = unk_0x10D3F7E169A49C44(Local_43.f_4, -1, 0);
		if (iVar2 == Local_43.f_1)
		{
			func_145();
			return;
		}
		unk_0xD544FE5B026DBAA6(Local_43.f_1, iVar0, 0);
		Local_52.x = 9;
		Local_51.f_3 = timera() + 1000;
		return;
	}
	if (!func_120())
	{
		unk_0x9B94F6169B0DAEFD(Local_43.f_1);
		Local_52.x = 4;
		return;
	}
	if (!bLocal_46)
	{
		iVar3 = unk_0x16BC17A8EDC701A2(Local_43.f_1, -1794415470);
		if (iVar3 == 7)
		{
			if (!unk_0x47DBF174A0CB9D55(Local_43.f_1, 0))
			{
				unk_0x9B94F6169B0DAEFD(Local_43.f_1);
				Local_52.x = 4;
				return;
			}
		}
	}
}

void func_148()
{
	struct<3> Var0;
	struct<3> Var1;
	float fVar2;
	int iVar3;
	int iVar4;
	bool bVar5;
	
	if (bLocal_46)
	{
		return;
	}
	if (Local_43.f_4 == 0)
	{
		Local_52.x = 4;
		return;
	}
	if (!unk_0x80FF6C016CDB0FAF(Local_43.f_4, 0))
	{
		Local_43.f_4 = 0;
		Local_52.x = 4;
		return;
	}
	Var0 = { unk_0x3E4D3CCC220BDFB1(Local_43.f_1, true) };
	Var1 = { unk_0x3E4D3CCC220BDFB1(Local_43.f_4, true) };
	fVar2 = unk_0x272784C60C397DB6(Var0, Var1, true);
	if (fVar2 > 3f)
	{
		if (!func_107(Global_42588[iLocal_54 /*5*/].f_2))
		{
			Local_52.x = 12;
			return;
		}
		Local_52.x = 5;
		Local_51.f_2 = timera() + 2000;
		return;
	}
	iVar3 = unk_0x99E61B3887CC8E71(Local_43.f_4);
	iVar4 = 0;
	bVar5 = true;
	iVar4 = 1;
	while (bVar5)
	{
		if (iVar4 < iVar3)
		{
			if (unk_0xB064AF9925F5537B(Local_43.f_4, iVar4, 0))
			{
				bVar5 = false;
			}
			else
			{
				iVar4++;
			}
		}
		else
		{
			bVar5 = false;
			iVar4 = -1;
		}
	}
	if (iVar4 == -1)
	{
		if (iVar4 == -1)
		{
			Local_52.x = 4;
			return;
		}
	}
	func_149();
	unk_0xC584E49FC3559A86(Local_43.f_1, Local_43.f_4, -1, iVar4, 2f, 1, 0);
	Local_52.x = 7;
}

void func_149()
{
	if (!unk_0xAE06B9E39EBDE049(Local_43.f_1))
	{
		return;
	}
	if (!unk_0x5AEB5DDFFAD43CA5(Local_43.f_1))
	{
		unk_0xE18B77DC016551AA(Local_43.f_1, 1048576000);
		unk_0x454D8C60F4F899AB(Local_43.f_1);
		unk_0x08873F531E33D7A7(Local_43.f_1, 0, -8f);
		Local_52.f_2 = "";
		unk_0x37ACBA9BE0A0EC05(Local_43.f_1);
		unk_0x8342E6CB98CD545C(Local_43.f_1, 200, false);
		unk_0x8342E6CB98CD545C(Local_43.f_1, 46, false);
		unk_0x83BBFE5E96C64FBA(Local_43.f_1, 1);
		unk_0x6AC7395A8E313A46(Local_43.f_1, 262144, false);
		unk_0x9275E03B786C9A31(Local_43.f_1, 0);
	}
	if (!bLocal_47)
	{
		return;
	}
	bLocal_47 = false;
}

void func_150()
{
	if (timera() < Local_51.f_2)
	{
		func_121();
		return;
	}
	func_151();
	Local_51.f_2 = -2;
	Local_52.x = 12;
}

int func_151()
{
	if (!func_114(Local_43.f_1))
	{
		return 0;
	}
	if (!bLocal_47)
	{
		return 0;
	}
	func_152(Local_43.f_1);
	Local_52.f_2 = "";
	Global_2540384.f_4603 = 1;
	return 1;
}

void func_152(int iParam0)
{
	unk_0xE18B77DC016551AA(iParam0, 1048576000);
	unk_0x08873F531E33D7A7(iParam0, 0, -8f);
	unk_0x8342E6CB98CD545C(iParam0, 200, false);
	unk_0x83BBFE5E96C64FBA(iParam0, 1);
	unk_0x6AC7395A8E313A46(iParam0, 262144, false);
	unk_0x9275E03B786C9A31(iParam0, 0);
}

void func_153()
{
	int iVar0;
	
	if (Local_51 == -1)
	{
		Global_42588[iLocal_54 /*5*/].f_2 = 0;
	}
	else if (Global_42588[iLocal_54 /*5*/].f_3 < 3 && Global_42588[iLocal_54 /*5*/].f_3 != 0)
	{
		Global_42588[iLocal_54 /*5*/].f_2 = -1;
	}
	else
	{
		iVar0 = (Local_51 - timera());
		if (iVar0 <= 0)
		{
			iVar0 = 0;
		}
		iVar0 = (iVar0 / 1000) + 1;
		Global_42588[iLocal_54 /*5*/].f_2 = 0;
		if (iVar0 < 30)
		{
			Global_42588[iLocal_54 /*5*/].f_2 = 2;
		}
		if (iVar0 < 10)
		{
			Global_42588[iLocal_54 /*5*/].f_2 = 1;
		}
	}
	if (unk_0x47DBF174A0CB9D55(Local_43.f_1, 0))
	{
		Local_52.x = 10;
		return;
	}
	if (func_114(Local_43.f_1))
	{
		Local_52.x = 12;
		return;
	}
	if (Local_51 == -2)
	{
		return;
	}
	if (!func_107(Global_42588[iLocal_54 /*5*/].f_2))
	{
		return;
	}
	Local_52.x = 12;
}

void func_154()
{
}

void func_155()
{
	int iVar0;
	int iVar1;
	
	iVar0 = 6;
	iVar1 = 0;
	iVar1 = 0;
	while (iVar1 < 16)
	{
		iVar0 = Global_42669[iVar1 /*6*/].f_2;
		if (!iVar0 == 6)
		{
			if (Global_42669[iVar1 /*6*/].f_1 == iLocal_44)
			{
				func_157(iVar1);
				func_156(iVar1);
			}
			else if (Global_42669[iVar1 /*6*/].f_1 == 2)
			{
				if (!iLocal_45 == -1)
				{
					if (iLocal_45 == Global_42669[iVar1 /*6*/])
					{
						func_157(iVar1);
					}
				}
			}
		}
		iVar1++;
	}
}

void func_156(int iParam0)
{
	if (iParam0 < 0 || iParam0 >= 16)
	{
		return;
	}
	Global_42669[iParam0 /*6*/] = -1;
	Global_42669[iParam0 /*6*/].f_1 = -1;
	Global_42669[iParam0 /*6*/].f_2 = 6;
	Global_42669[iParam0 /*6*/].f_3 = 0;
	Global_42669[iParam0 /*6*/].f_4 = 0;
}

void func_157(int iParam0)
{
	int iVar0;
	
	iVar0 = Global_42669[iParam0 /*6*/].f_2;
	switch (iVar0)
	{
		case 1:
			func_178();
			break;
		
		case 2:
			func_161(Global_42669[iParam0 /*6*/].f_4);
			break;
		
		case 3:
			func_160(Global_42669[iParam0 /*6*/].f_5);
			break;
		
		case 4:
			func_159();
			break;
		
		case 5:
			func_158();
			break;
		
		case 0:
			break;
		
		case 6:
			break;
		
		default:
			break;
	}
}

void func_158()
{
	Local_52.f_1 = 2;
}

void func_159()
{
	int iVar0;
	
	Global_42588[iLocal_54 /*5*/].f_4++;
	if (Local_51 == -1)
	{
		Global_42588[iLocal_54 /*5*/].f_2 = 0;
	}
	else if (Global_42588[iLocal_54 /*5*/].f_4 < 9 && Global_42588[iLocal_54 /*5*/].f_4 != 0)
	{
		Global_42588[iLocal_54 /*5*/].f_2 = -1;
	}
	else
	{
		iVar0 = (Local_51 - timera());
		if (iVar0 <= 0)
		{
			iVar0 = 0;
		}
		iVar0 = (iVar0 / 1000) + 1;
		Global_42588[iLocal_54 /*5*/].f_2 = 0;
		if (iVar0 < 30)
		{
			Global_42588[iLocal_54 /*5*/].f_2 = 2;
		}
		if (iVar0 < 10)
		{
			Global_42588[iLocal_54 /*5*/].f_2 = 1;
		}
		if (!func_114(Local_43.f_1))
		{
			func_107(Global_42588[iLocal_54 /*5*/].f_2);
		}
	}
}

void func_160(int iParam0)
{
	int iVar0;
	
	Global_42588[iLocal_54 /*5*/].f_3 = (Global_42588[iLocal_54 /*5*/].f_3 + iParam0);
	if (Local_51 == -1)
	{
		Global_42588[iLocal_54 /*5*/].f_2 = 0;
	}
	else if (Global_42588[iLocal_54 /*5*/].f_3 < 3 && Global_42588[iLocal_54 /*5*/].f_3 != 0)
	{
		Global_42588[iLocal_54 /*5*/].f_2 = -1;
	}
	else
	{
		iVar0 = (Local_51 - timera());
		if (iVar0 <= 0)
		{
			iVar0 = 0;
		}
		iVar0 = (iVar0 / 1000) + 1;
		Global_42588[iLocal_54 /*5*/].f_2 = 0;
		if (iVar0 < 30)
		{
			Global_42588[iLocal_54 /*5*/].f_2 = 2;
		}
		if (iVar0 < 10)
		{
			Global_42588[iLocal_54 /*5*/].f_2 = 1;
		}
		if (!func_114(Local_43.f_1))
		{
			func_107(Global_42588[iLocal_54 /*5*/].f_2);
		}
	}
}

void func_161(int iParam0)
{
	Local_43.f_3 = (Local_43.f_3 + iParam0);
	Local_43.f_2 = (Local_43.f_2 + iParam0);
	Local_51.f_1 = (Local_51.f_1 + iParam0);
	Local_51 = (Local_51 + iParam0);
}

void func_162()
{
	int iVar0;
	
	if (!bLocal_46)
	{
		iLocal_53 = -1;
		return;
	}
	if (iLocal_53 < 0)
	{
		iLocal_53 = unk_0x1A3D0DF92BF7D8C4(unk_0x460153A63B9477BC());
		return;
	}
	iVar0 = unk_0x1A3D0DF92BF7D8C4(unk_0x460153A63B9477BC());
	if (iVar0 != iLocal_53)
	{
		if (iVar0 > iLocal_53)
		{
			func_163();
		}
		iLocal_53 = iVar0;
		return;
	}
}

void func_163()
{
}

void func_164()
{
	if (!Local_51 == -1)
	{
		if (!Local_51 == -2)
		{
			if (timera() >= Local_51)
			{
				func_149();
				Local_51 = -2;
				Local_52.x = 12;
			}
		}
		if (timera() > Local_51.f_1)
		{
			func_178();
		}
	}
}

void func_165(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 16)
	{
		if (iParam0 == Global_42669[iVar0 /*6*/])
		{
			func_156(iVar0);
		}
		iVar0++;
	}
}

void func_166()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	Local_52.x = 4;
	if (!unk_0xA59F96B50B97E63C(Local_43.f_1, 0))
	{
		if (unk_0x6E0C5E7AAF8B6214(Local_43.f_1))
		{
			Local_52.x = 10;
		}
	}
	if (bLocal_46)
	{
		func_169();
		func_11(71, 1);
		if (unk_0x25DDB354A40FFCDB())
		{
			iVar0 = func_80(2058, -1, 0);
			iVar1 = (iVar0 / 10) + 1 * 10;
			if (iVar0 + 1 >= iVar1)
			{
				func_167(iVar1);
			}
			func_77(2058, iVar0 + 1, -1, 1, 0);
		}
		else
		{
			iVar2 = 0;
			iVar3 = 0;
			iVar4 = 0;
			unk_0xD2F202166691EDB2(joaat("SP0_SP_NUM_TIMES_DRUNK"), &iVar2, -1);
			unk_0xD2F202166691EDB2(joaat("SP1_SP_NUM_TIMES_DRUNK"), &iVar3, -1);
			unk_0xD2F202166691EDB2(joaat("SP2_SP_NUM_TIMES_DRUNK"), &iVar4, -1);
			iVar5 = ((iVar2 + iVar3) + iVar4);
			iVar6 = (iVar5 / 10) + 1 * 10;
			if (iVar5 + 1 >= iVar6)
			{
				func_167(iVar6);
			}
			switch (func_67())
			{
				case 0:
					unk_0x6000E4684CB4330B(joaat("SP0_SP_NUM_TIMES_DRUNK"), iVar2 + 1, 1);
					break;
				
				case 1:
					unk_0x6000E4684CB4330B(joaat("SP1_SP_NUM_TIMES_DRUNK"), iVar3 + 1, 1);
					break;
				
				case 2:
					unk_0x6000E4684CB4330B(joaat("SP2_SP_NUM_TIMES_DRUNK"), iVar4 + 1, 1);
					break;
				}
		}
		Local_52.f_1 = 1;
		return;
	}
	Local_52.f_1 = 12;
	if (Local_51 == -1)
	{
		Global_42588[iLocal_54 /*5*/].f_2 = 0;
	}
	else if (Global_42588[iLocal_54 /*5*/].f_3 < 3 && Global_42588[iLocal_54 /*5*/].f_3 != 0)
	{
		Global_42588[iLocal_54 /*5*/].f_2 = -1;
	}
	else
	{
		iVar7 = (Local_51 - timera());
		if (iVar7 <= 0)
		{
			iVar7 = 0;
		}
		iVar7 = (iVar7 / 1000) + 1;
		Global_42588[iLocal_54 /*5*/].f_2 = 0;
		if (iVar7 < 30)
		{
			Global_42588[iLocal_54 /*5*/].f_2 = 2;
		}
		if (iVar7 < 10)
		{
			Global_42588[iLocal_54 /*5*/].f_2 = 1;
		}
	}
}

void func_167(int iParam0)
{
	int iVar0;
	
	iVar0 = func_168(81);
	Global_2414424[iVar0 /*83*/] = 81;
	Global_2414424[iVar0 /*83*/].f_17 = iParam0;
	StringCopy(&(Global_2414424[iVar0 /*83*/].f_18[0 /*16*/]), "", 64);
}

int func_168(int iParam0)
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

void func_169()
{
}

void func_170()
{
	Local_51 = Local_43.f_2;
	Local_51.f_1 = Local_43.f_3;
	Local_51.f_2 = -2;
	Local_51.f_3 = -2;
}

void func_171(int iParam0, int iParam1, int iParam2)
{
	func_172(iParam0, iParam1, iParam2, 0, 0, 1);
}

void func_172(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)
{
	int iVar0;
	
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam1 == -1)
	{
		return;
	}
	if (iParam2 == 6)
	{
		return;
	}
	if (func_174(iParam0, iParam1, iParam2))
	{
		return;
	}
	iVar0 = func_173();
	if (iVar0 == -1)
	{
		return;
	}
	Global_42669[iVar0 /*6*/] = iParam0;
	Global_42669[iVar0 /*6*/].f_1 = iParam1;
	Global_42669[iVar0 /*6*/].f_2 = iParam2;
	Global_42669[iVar0 /*6*/].f_3 = iParam3;
	Global_42669[iVar0 /*6*/].f_4 = iParam4;
	Global_42669[iVar0 /*6*/].f_5 = iParam5;
}

int func_173()
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 16)
	{
		if (Global_42669[iVar0 /*6*/].f_2 == 6)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_174(int iParam0, int iParam1, int iParam2)
{
	if (func_175(iParam0, iParam1, iParam2) == -1)
	{
		return 0;
	}
	return 1;
}

int func_175(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 16)
	{
		if (iParam2 == Global_42669[iVar0 /*6*/].f_2)
		{
			if (iParam0 == Global_42669[iVar0 /*6*/])
			{
				if (iParam1 == Global_42669[iVar0 /*6*/].f_1)
				{
					return iVar0;
				}
			}
		}
		iVar0++;
	}
	return -1;
}

void func_176()
{
	int iVar0;
	
	bLocal_46 = false;
	if (Local_43.f_1 == unk_0x9B0761B4C3EB8BC7())
	{
		bLocal_46 = true;
		Global_42800 = 1;
		Global_42802++;
	}
	if (!unk_0xA59F96B50B97E63C(Local_43.f_1, 0))
	{
		iVar0 = func_70(Local_43.f_1);
		switch (iVar0)
		{
			case 17:
				unk_0x3A2AAE59B4681DAF(Local_43.f_1, "AMANDA_DRUNK");
				break;
			
			case 19:
				unk_0x3A2AAE59B4681DAF(Local_43.f_1, "LAMAR_DRUNK");
				break;
			}
	}
}

void func_177()
{
	if (!iLocal_44 == -1)
	{
		return;
	}
	iLocal_44 = func_117(Local_43.f_1);
	if (iLocal_44 == -1)
	{
		return;
	}
	iLocal_54 = func_116(iLocal_44);
}

void func_178()
{
	int iVar0;
	
	if (!func_34(0) && !func_34(3))
	{
		if (!unk_0xA59F96B50B97E63C(Local_43.f_1, 0))
		{
			iVar0 = func_70(Local_43.f_1);
			if (Global_42588[iLocal_54 /*5*/].f_4 > 0)
			{
				switch (iVar0)
				{
					case 0:
						func_180(Local_43.f_1, "POST_STONED", 24);
						break;
					
					case 1:
						func_180(Local_43.f_1, "POST_STONED", 24);
						break;
					
					case 2:
						func_180(Local_43.f_1, "POST_STONED", 24);
						break;
					}
			}
			switch (iVar0)
			{
				case 17:
					unk_0x3A2AAE59B4681DAF(Local_43.f_1, "AMANDA_NORMAL");
					break;
				
				case 19:
					unk_0x3A2AAE59B4681DAF(Local_43.f_1, "LAMAR_NORMAL");
					break;
				}
			}
	}
	func_149();
	if (bLocal_46)
	{
		Global_42800 = 0;
	}
	func_179();
	unk_0x1082C25039B168F8(func_113(0));
	unk_0x1082C25039B168F8(func_113(2));
	unk_0x1082C25039B168F8(func_113(1));
	Global_1672953 = 0;
	if (unk_0x7B70881748D166CD(joaat("appemail")) > 0)
	{
		func_41(0);
	}
	unk_0xD39E529EBE5DB04F();
}

void func_179()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (unk_0xA59F96B50B97E63C(Local_43.f_1, 0))
	{
		return;
	}
	iVar0 = Local_43.f_1;
	if (unk_0x47DBF174A0CB9D55(Local_43.f_1, 0))
	{
		iVar1 = unk_0xA5D5B1042E8F47BD(Local_43.f_1, 0);
		iVar2 = unk_0x10D3F7E169A49C44(iVar1, -1, 0);
		if (!Local_43.f_1 == iVar2)
		{
			return;
		}
		iVar0 = iVar1;
	}
	else if (!unk_0xA860C15A1C027CBB() == 4 || !unk_0x9B0761B4C3EB8BC7() == Local_43.f_1)
	{
		return;
	}
	fLocal_49 = 0f;
	func_142(iVar0, 0f);
}

void func_180(int iParam0, char* sParam1, int iParam2)
{
	unk_0xFDCFA91E51EDB61F(iParam0, sParam1, func_181(iParam2), 1);
}

int func_181(int iParam0)
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

