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
	var uLocal_20 = 0;
	char* sLocal_21 = NULL;
	var uLocal_22 = 0;
	var uLocal_23 = 0;
	float fLocal_24 = 0f;
	var uLocal_25 = 0;
	var uLocal_26 = 0;
	var uLocal_27 = 0;
	float fLocal_28 = 0f;
	float fLocal_29 = 0f;
	var uLocal_30 = 0;
	var uLocal_31 = 0;
	var uLocal_32 = 0;
	float fLocal_33 = 0f;
	float fLocal_34 = 0f;
	float fLocal_35 = 0f;
	var uLocal_36 = 0;
	var uLocal_37 = 0;
	int iLocal_38 = 0;
	var uLocal_39 = 0;
	int iLocal_40 = 0;
	int iLocal_41 = 0;
	int iLocal_42 = 0;
	int iLocal_43 = 0;
	char* sLocal_44 = NULL;
	char* sLocal_45 = NULL;
	int iLocal_46 = 0;
	int iLocal_47 = 0;
	int iLocal_48 = 0;
	struct<3> Local_49 = { 0, 0, 0 } ;
	struct<3> Local_50 = { 0, 0, 0 } ;
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
	fLocal_24 = 0f;
	fLocal_28 = -0.0375f;
	fLocal_29 = 0.17f;
	fLocal_33 = 80f;
	fLocal_34 = 140f;
	fLocal_35 = 180f;
	iLocal_38 = 3;
	sLocal_44 = "RCMBarryLeadInOut";
	sLocal_45 = "idle";
	Local_49 = { 189.5964f, -956.0344f, 29.5771f };
	Local_50 = { 190.2424f, -956.379f, 28.63f };
	unk_0x779660A9E5364C4D(0, 26, 1);
	if (func_25(unk_0x9B0761B4C3EB8BC7()))
	{
		if (unk_0x1A3D0DF92BF7D8C4(unk_0x460153A63B9477BC()) != 0)
		{
			unk_0xCAD5C18968E57C30(unk_0x460153A63B9477BC(), 0, 0);
		}
	}
	if (unk_0xED06FD5709A59F02(83))
	{
		func_22(0);
	}
	unk_0x131ED02492676000(sLocal_44);
	unk_0xBAA4D421B8B8A744("BARY1", 7);
	while (!unk_0xC614DDE265D18415(sLocal_44) || !unk_0xF5EE205091CE6DB2(7))
	{
		unk_0x779660A9E5364C4D(0, 26, 1);
		wait(0);
	}
	unk_0x779660A9E5364C4D(0, 26, 1);
	func_25(unk_0x9B0761B4C3EB8BC7());
	iLocal_46 = unk_0x578C4EF320340AF7() + 13000;
	iLocal_47 = unk_0x344C570D6F8700DF(0, 5);
	func_19();
	while (!func_13(&iLocal_43, 49, Local_50, func_18(1.12f), 0))
	{
		unk_0x779660A9E5364C4D(0, 26, 1);
		wait(0);
	}
	unk_0x779660A9E5364C4D(0, 26, 1);
	func_12();
	iLocal_48 = unk_0x578C4EF320340AF7() + 1000;
	unk_0x779660A9E5364C4D(0, 26, 1);
	while (true)
	{
		func_25(unk_0x9B0761B4C3EB8BC7());
		if (unk_0x578C4EF320340AF7() < iLocal_48)
		{
			unk_0x779660A9E5364C4D(0, 26, 1);
		}
		func_11();
		if (!func_25(iLocal_43))
		{
			func_22(0);
		}
		if (func_3())
		{
		}
		if (func_2(unk_0x9B0761B4C3EB8BC7(), Local_50, 1) > 70f)
		{
			func_1(&iLocal_40, 0);
			func_1(&iLocal_41, 0);
			func_1(&iLocal_42, 0);
			func_22(0);
		}
		wait(0);
	}
}

void func_1(int iParam0, bool bParam1)
{
	if (unk_0xAE06B9E39EBDE049(*iParam0))
	{
		if (unk_0x8E805E09B82CCE5F(*iParam0))
		{
			unk_0x1F8106DB8796859F(*iParam0, 1, true);
		}
		if (!bParam1)
		{
			unk_0x95178967C65CAD85(iParam0);
		}
		else
		{
			unk_0x274BB62CC228E22A(*iParam0);
		}
	}
}

float func_2(int iParam0, struct<3> Param1, bool bParam2)
{
	struct<3> Var0;
	
	if (!unk_0xA59F96B50B97E63C(iParam0, 0))
	{
		Var0 = { unk_0x3E4D3CCC220BDFB1(iParam0, true) };
	}
	else
	{
		Var0 = { unk_0x3E4D3CCC220BDFB1(iParam0, false) };
	}
	return unk_0x272784C60C397DB6(Var0, Param1, bParam2);
}

int func_3()
{
	var uVar0;
	
	if (((((func_10(unk_0x9B0761B4C3EB8BC7()) && func_10(iLocal_43)) && !func_9()) && unk_0x578C4EF320340AF7() > iLocal_46) && func_8(unk_0x9B0761B4C3EB8BC7(), iLocal_43, 1) < 20f) && !unk_0x963B7BFFD2743281())
	{
		uVar0 = 16;
		func_7(&uVar0, 0, iLocal_43, "BARRY", 0, 1);
		func_4(&uVar0, "BARY1AU", func_6(), 7, 0, 0);
		iLocal_46 = (unk_0x578C4EF320340AF7() + unk_0x344C570D6F8700DF(12000, 18000));
		return 1;
	}
	return 0;
}

void func_4(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5)
{
	func_5(uParam0, 145, sParam1, iParam4, iParam5, 0);
	if (iParam3 > 7)
	{
		if (iParam3 < 12)
		{
			iParam3 = 7;
		}
	}
	unk_0xBE20AB8238688965(&Global_19871, 0);
	Global_21008 = iParam3;
	StringCopy(&Global_20995, sParam2, 24);
}

void func_5(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5)
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

char* func_6()
{
	char* sVar0;
	
	switch (iLocal_47)
	{
		case 0:
			sVar0 = "BARY1_RCMLI1";
			break;
		
		case 1:
			sVar0 = "BARY1_RCMLI2";
			break;
		
		case 2:
			sVar0 = "BARY1_RCMLI3";
			break;
		
		case 3:
			sVar0 = "BARY1_RCMLI4";
			break;
		
		case 4:
			sVar0 = "BARY1_RCMLI5";
			break;
	}
	iLocal_47++;
	if (iLocal_47 > 4)
	{
		iLocal_47 = 0;
	}
	return sVar0;
}

void func_7(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5)
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

float func_8(int iParam0, int iParam1, bool bParam2)
{
	struct<3> Var0;
	struct<3> Var1;
	
	if (!unk_0xA59F96B50B97E63C(iParam0, 0))
	{
		Var0 = { unk_0x3E4D3CCC220BDFB1(iParam0, true) };
	}
	else
	{
		Var0 = { unk_0x3E4D3CCC220BDFB1(iParam0, false) };
	}
	if (!unk_0xA59F96B50B97E63C(iParam1, 0))
	{
		Var1 = { unk_0x3E4D3CCC220BDFB1(iParam1, true) };
	}
	else
	{
		Var1 = { unk_0x3E4D3CCC220BDFB1(iParam1, false) };
	}
	return unk_0x272784C60C397DB6(Var0, Var1, bParam2);
}

int func_9()
{
	if (Global_21005 != 0 || unk_0x6A5CC4A2C9D9ED8D())
	{
		return 1;
	}
	return 0;
}

int func_10(int iParam0)
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

void func_11()
{
	if (unk_0x3628D28B8671F14F(-1, Local_50, 5f))
	{
		if (func_10(iLocal_43))
		{
			unk_0x6A8F948698B360B4(iLocal_43, false);
			unk_0xB6A979DBF557908B(iLocal_43, 1000, 1, 0);
		}
		if (func_10(iLocal_41))
		{
			unk_0x6A8F948698B360B4(iLocal_41, false);
		}
		if (func_10(iLocal_40))
		{
			unk_0x6A8F948698B360B4(iLocal_40, false);
		}
	}
}

void func_12()
{
	if (func_10(iLocal_43))
	{
		if (!unk_0x1758275D343D5BA3(iLocal_43))
		{
			unk_0x4F3C4F457D44BB0F(iLocal_43, true, 0);
		}
		unk_0x78024EFD31A7FAD4(iLocal_43, 1, 0, 0, false);
		unk_0x4E65320BC9AD521C(iLocal_43, true);
		unk_0x055A73D4AFD214F1(iLocal_43, 0);
		unk_0x0DC39BE87E4C5599(iLocal_43, false);
		unk_0x14EFF93E9B692DAD(iLocal_43, "POSTBARRY");
		unk_0xD3D9D7C84656DAE5(iLocal_43, 1862763509);
		unk_0x58ADF88C51AAFDC5(iLocal_43, false, 0);
		unk_0x6A8F948698B360B4(iLocal_43, true);
		unk_0x03D382CB0B44E2FC(iLocal_43, Local_50, 1, false, 0, 1);
		unk_0xE922BAA80E8F9324(iLocal_43, func_18(1.12f));
		unk_0x6A8F948698B360B4(iLocal_43, true);
		unk_0x756D74A3EF0AB788(iLocal_43, sLocal_44, sLocal_45, 8f, -8f, -1, 9, 0, 0, 0, 0);
		unk_0xA785552633ED203B(iLocal_43, unk_0x9B0761B4C3EB8BC7(), -1, 0, 2);
	}
}

int func_13(int iParam0, int iParam1, struct<3> Param2, float fParam3, bool bParam4)
{
	int iVar0;
	
	if (!func_17(iParam1))
	{
		iVar0 = func_15(iParam1);
		unk_0x78FCB2E22C41B9D5(iVar0);
		if (unk_0x7D167B9A0CCDA347(iVar0))
		{
			if (unk_0xAE06B9E39EBDE049(*iParam0))
			{
				unk_0x586DDC617E714637(iParam0);
			}
			*iParam0 = unk_0xB3116B49FE00E2F1(26, iVar0, Param2, fParam3, 0, false);
			unk_0x6D2F52D05ED0E1F6(*iParam0);
			if (iVar0 == joaat("ig_lamardavis"))
			{
				if (unk_0x3FB4D40A857CEA77(*iParam0, 3) == 0)
				{
					unk_0x45F588C0DD767737(*iParam0, 5, 2, 0, 0);
				}
			}
			func_14(*iParam0, iParam1);
			if (bParam4)
			{
				unk_0x74528AC0906CBABE(iVar0);
			}
			return 1;
		}
	}
	return 0;
}

int func_14(var uParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = 7;
	if (iParam1 == 19)
	{
		iVar0 = 3;
	}
	else if (iParam1 == 14)
	{
		iVar0 = 4;
	}
	else if (iParam1 == 17)
	{
		iVar0 = 5;
	}
	else
	{
		iVar0 = 7;
		return 0;
	}
	Global_94789[(iVar0 - 3)] = uParam0;
	return 1;
}

int func_15(int iParam0)
{
	if (!func_17(iParam0))
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
	return iParam0 < 3;
}

float func_18(float fParam0)
{
	return (fParam0 * 57.29578f);
}

void func_19()
{
	if (unk_0x8865B8E834909D76(190.56f, -956.4f, 28.63f, 20f, joaat("prop_protest_table_01"), 0))
	{
		iLocal_41 = unk_0x5BBA0055476D633A(190.56f, -956.4f, 28.63f, 20f, joaat("prop_protest_table_01"), 0, 0, 1);
		if (func_25(iLocal_41))
		{
			if (!unk_0x1758275D343D5BA3(iLocal_41))
			{
				unk_0x4F3C4F457D44BB0F(iLocal_41, true, 0);
			}
			Local_49 = { 189.5964f, -956.0344f, 29.54f };
			unk_0x03D382CB0B44E2FC(iLocal_41, Local_49, 1, false, 0, 1);
			unk_0xE922BAA80E8F9324(iLocal_41, func_18(-2.01f));
			unk_0x6A8F948698B360B4(iLocal_41, true);
		}
	}
	if (unk_0x8865B8E834909D76(190.56f, -956.4f, 28.63f, 20f, joaat("prop_chair_08"), 0))
	{
		iLocal_40 = unk_0x5BBA0055476D633A(190.56f, -956.4f, 28.63f, 20f, joaat("prop_chair_08"), 0, 0, 1);
		if (func_25(iLocal_40))
		{
			if (!unk_0x1758275D343D5BA3(iLocal_40))
			{
				unk_0x4F3C4F457D44BB0F(iLocal_40, true, 0);
			}
			Local_49 = { 190.2574f, -956.3513f, 29.621f };
			unk_0x03D382CB0B44E2FC(iLocal_40, Local_49, 1, false, 0, 1);
			unk_0xE922BAA80E8F9324(iLocal_40, func_18(-1.68f));
			unk_0x6A8F948698B360B4(iLocal_40, true);
		}
	}
	else
	{
		Local_49 = { 190.2574f, -956.3513f, 29.621f };
		func_20(&iLocal_40, joaat("prop_chair_08"), Local_49, func_18(-1.68f));
		unk_0x03D382CB0B44E2FC(iLocal_40, Local_49, 1, false, 0, 1);
		unk_0xE922BAA80E8F9324(iLocal_40, func_18(-1.68f));
		unk_0x6A8F948698B360B4(iLocal_40, true);
	}
	Local_49 = { 192.4462f, -953.5946f, 29.0919f };
	if (unk_0x8865B8E834909D76(Local_49, 25f, joaat("prop_protest_sign_01"), 0))
	{
		iLocal_42 = unk_0x5BBA0055476D633A(Local_49, 25f, joaat("prop_protest_sign_01"), 0, 0, 1);
		if (func_25(iLocal_42))
		{
			if (!unk_0x1758275D343D5BA3(iLocal_42))
			{
				unk_0x4F3C4F457D44BB0F(iLocal_42, true, 0);
			}
			Local_49.f_2 = 29.603f;
			unk_0x03D382CB0B44E2FC(iLocal_42, Local_49, 1, false, 0, 1);
			unk_0xE922BAA80E8F9324(iLocal_42, 23.45f);
		}
	}
	else
	{
		func_20(&iLocal_42, joaat("prop_protest_sign_01"), Local_49, 23.45f);
		unk_0x03D382CB0B44E2FC(iLocal_42, Local_49, 1, false, 0, 1);
		unk_0xE922BAA80E8F9324(iLocal_42, 23.45f);
	}
}

void func_20(int iParam0, int iParam1, struct<3> Param2, float fParam3)
{
	func_21(iParam0);
	*iParam0 = unk_0x79CC07752E7432A1(iParam1, Param2, true, true, false);
	unk_0xE922BAA80E8F9324(*iParam0, fParam3);
}

void func_21(int iParam0)
{
	if (unk_0xAE06B9E39EBDE049(*iParam0))
	{
		if (unk_0x8E805E09B82CCE5F(*iParam0))
		{
			unk_0x1F8106DB8796859F(*iParam0, 1, true);
		}
		unk_0x315F7D8C33F0AB37(iParam0);
	}
}

void func_22(bool bParam0)
{
	if (bParam0)
	{
		func_24(&iLocal_43);
	}
	else
	{
		func_23(&iLocal_43, 1, 0, 1);
	}
	if (func_10(iLocal_41))
	{
		unk_0x6A8F948698B360B4(iLocal_41, false);
	}
	if (func_10(iLocal_40))
	{
		unk_0x6A8F948698B360B4(iLocal_40, false);
	}
	if (bParam0)
	{
		func_21(&iLocal_40);
		func_21(&iLocal_41);
		func_21(&iLocal_42);
	}
	else
	{
		func_1(&iLocal_40, 0);
		func_1(&iLocal_41, 0);
		func_1(&iLocal_42, 0);
	}
	unk_0x1082C25039B168F8(sLocal_44);
	unk_0x5D52AA94798846BB(7, false);
	unk_0xD39E529EBE5DB04F();
}

void func_23(int iParam0, bool bParam1, int iParam2, int iParam3)
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

void func_24(int iParam0)
{
	if (unk_0xAE06B9E39EBDE049(*iParam0))
	{
		if (!unk_0xA59F96B50B97E63C(*iParam0, 0))
		{
			unk_0xA5EAD2ACE2C8BBB2(*iParam0, false, 1);
		}
		if (!unk_0x1758275D343D5BA3(*iParam0))
		{
			unk_0x4F3C4F457D44BB0F(*iParam0, true, 0);
		}
		unk_0x586DDC617E714637(iParam0);
	}
}

bool func_25(int iParam0)
{
	if (!unk_0xAE06B9E39EBDE049(iParam0))
	{
		return 0;
	}
	return !unk_0xA59F96B50B97E63C(iParam0, 0);
}

