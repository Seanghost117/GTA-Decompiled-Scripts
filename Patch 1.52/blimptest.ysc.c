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
	int iLocal_40 = 0;
	int iLocal_41 = 0;
	int iLocal_42 = 0;
	int iLocal_43 = 0;
	int iLocal_44 = 0;
	int iLocal_45 = 0;
	int iLocal_46 = 0;
	int iLocal_47 = 0;
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
	iLocal_41 = joaat("blimp");
	iLocal_44 = joaat("s_m_m_pilot_02");
	iLocal_46 = joaat("buzzard");
	if (unk_0x03DB5C6AABF8DA46())
	{
		unk_0xFD45D90342D2A0CD(500);
	}
	if (unk_0xED06FD5709A59F02(18))
	{
		func_18();
	}
	unk_0x53797676AD34A9AA(0);
	func_17();
	func_16();
	func_14();
	func_11();
	while (true)
	{
		unk_0xA11D279671F2289C(255, 255, 255, 255);
		unk_0x151E2F6EE4A34CFE(0.75f, 0.9f);
		unk_0x86520D0C56F68D3F(0f, 1f);
		func_10(0.05f, 0.63f, "PLCHLD_MISS", 0);
		unk_0xA11D279671F2289C(255, 255, 255, 255);
		unk_0x151E2F6EE4A34CFE(0.4f, 0.45f);
		unk_0x86520D0C56F68D3F(0f, 1f);
		func_10(0.05f, 0.7f, "PLCHLD_PASS", 0);
		func_1();
		wait(0);
	}
}

void func_1()
{
	struct<3> Var0;
	
	if (unk_0xAE06B9E39EBDE049(iLocal_40))
	{
		if ((unk_0xA59F96B50B97E63C(iLocal_40, 0) || unk_0x4F5F2FB7AE0EB7AB(iLocal_40) <= 0) || unk_0xDAD5E5518E960CD1(iLocal_40) <= 0f)
		{
			func_9(&iLocal_42);
			if (unk_0x3AF46A926C830E50(iLocal_40))
			{
				unk_0xD90A910C8C028796(iLocal_40);
			}
			if (iLocal_47 == 1)
			{
				Var0 = { unk_0x3E4D3CCC220BDFB1(iLocal_40, 0) };
				func_8(Var0);
			}
			if (iLocal_47 == 1)
			{
				func_7(&iLocal_43);
				func_4(&iLocal_40);
			}
			else
			{
				func_3(&iLocal_43, 1, 0, 1);
				func_2(&iLocal_40);
			}
		}
		else if (unk_0x3AF46A926C830E50(iLocal_40))
		{
			unk_0xD4164F1A893F6339(iLocal_40, 0.25f);
		}
	}
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

void func_3(int iParam0, int iParam1, int iParam2, int iParam3)
{
	if (unk_0xAE06B9E39EBDE049(*iParam0))
	{
		if (!unk_0x5AEB5DDFFAD43CA5(*iParam0))
		{
			unk_0xA5EAD2ACE2C8BBB2(*iParam0, 0, 1);
			if (iParam3 == 0)
			{
				unk_0x0C095242BA4786C7(*iParam0);
			}
			unk_0xCBA6B2B569DCAFD8(*iParam0, iParam1);
			if (iParam2 == 1)
			{
				unk_0x4E65320BC9AD521C(*iParam0, 0);
			}
		}
		unk_0x2481907DEE6B85EA(iParam0);
	}
}

void func_4(int iParam0)
{
	if (unk_0xAE06B9E39EBDE049(*iParam0))
	{
		if (!unk_0x1758275D343D5BA3(*iParam0))
		{
			unk_0x4F3C4F457D44BB0F(*iParam0, true, 0);
		}
		if (func_6(*iParam0))
		{
			if (unk_0x1758275D343D5BA3(*iParam0) && unk_0x1D2A3118784C0272(*iParam0, 1))
			{
				if (func_5(unk_0x9B0761B4C3EB8BC7()))
				{
					if (unk_0xE0B3BC41DDA88DF0(unk_0x9B0761B4C3EB8BC7(), *iParam0, 0))
					{
						unk_0xE730EAF558C97567(iParam0);
						return;
					}
				}
				unk_0x03A2522C845CFAC6(iParam0);
			}
		}
		else
		{
			if (func_5(unk_0x9B0761B4C3EB8BC7()))
			{
				if (unk_0xE0B3BC41DDA88DF0(unk_0x9B0761B4C3EB8BC7(), *iParam0, 0))
				{
					unk_0xE730EAF558C97567(iParam0);
					return;
				}
			}
			unk_0x03A2522C845CFAC6(iParam0);
		}
	}
}

int func_5(int iParam0)
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

int func_6(int iParam0)
{
	if (func_5(iParam0))
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

void func_7(int iParam0)
{
	if (unk_0xAE06B9E39EBDE049(*iParam0))
	{
		if (!unk_0xA59F96B50B97E63C(*iParam0, 0))
		{
			unk_0xA5EAD2ACE2C8BBB2(*iParam0, 0, 1);
		}
		if (!unk_0x1758275D343D5BA3(*iParam0))
		{
			unk_0x4F3C4F457D44BB0F(*iParam0, true, 0);
		}
		unk_0x586DDC617E714637(iParam0);
	}
}

void func_8(struct<3> Param0)
{
	int iVar0;
	int iVar1;
	struct<3> Var2[12];
	
	iVar1 = 12;
	Var2[0 /*3*/] = { 5f, 0f, 0f };
	Var2[1 /*3*/] = { 0f, 5f, 0f };
	Var2[2 /*3*/] = { 0f, 0f, 5f };
	Var2[3 /*3*/] = { 5f, 5f, 0f };
	Var2[4 /*3*/] = { 5f, 0f, 5f };
	Var2[5 /*3*/] = { 0f, 5f, 5f };
	Var2[6 /*3*/] = { 20f, 0f, 0f };
	Var2[7 /*3*/] = { 0f, 20f, 0f };
	Var2[8 /*3*/] = { 0f, 0f, 20f };
	Var2[9 /*3*/] = { 20f, 20f, 0f };
	Var2[10 /*3*/] = { 20f, 0f, 20f };
	Var2[11 /*3*/] = { 0f, 20f, 20f };
	unk_0x8EDA7C5787BA8E46(Param0, 8, 1f, 1, 0, 1f, 0);
	iVar0 = 0;
	while (iVar0 <= (iVar1 - 1))
	{
		unk_0x8EDA7C5787BA8E46(Param0 + Var2[iVar0 /*3*/], 8, 1f, 1, 0, 1f, 0);
		iVar0++;
	}
}

void func_9(int iParam0)
{
	if (unk_0x8F678487EEBD8CE4(*iParam0))
	{
		unk_0x72BEFB9451782F60(*iParam0, 0);
		unk_0x93370FA10F15BE44(iParam0);
	}
}

void func_10(float fParam0, float fParam1, char* sParam2, int iParam3)
{
	unk_0x40A75E32D30C605F(sParam2);
	unk_0xA434CC17B5517E4E(fParam0, fParam1, iParam3);
}

void func_11()
{
	func_2(&iLocal_45);
	unk_0x78FCB2E22C41B9D5(iLocal_46);
	while (!unk_0x7D167B9A0CCDA347(iLocal_46))
	{
		wait(0);
	}
	if (func_6(iLocal_40))
	{
		iLocal_45 = unk_0xCE4780E24AFDFBF9(iLocal_46, unk_0x7EC595B99EA7C4B1(iLocal_40, 50f, 0f, 15f), 0f, 1, 1, 0);
		unk_0xDF383F338BF25208(iLocal_45);
		func_12(iLocal_45, iLocal_40);
		if (func_5(unk_0x9B0761B4C3EB8BC7()))
		{
			unk_0x13A4BD6CC31F7B8F(unk_0x9B0761B4C3EB8BC7(), iLocal_45, -1);
			unk_0x7965943E39128B42(0f, 1065353216);
			unk_0x4C4FC7841A5FB983(0f);
			unk_0x555EE41D7C7078E6(unk_0x3E4D3CCC220BDFB1(unk_0x9B0761B4C3EB8BC7(), 1), 500f, 1, 0, 0, false);
		}
	}
	unk_0x74528AC0906CBABE(iLocal_46);
}

void func_12(int iParam0, int iParam1)
{
	float fVar0;
	
	fVar0 = func_13(unk_0x3E4D3CCC220BDFB1(iParam0, 1), unk_0x3E4D3CCC220BDFB1(iParam1, 1), 1);
	unk_0xE922BAA80E8F9324(iParam0, fVar0);
}

float func_13(struct<2> Param0, float fParam1, struct<2> Param2, float fParam3, int iParam4)
{
	float fVar0;
	float fVar1;
	float fVar2;
	
	fVar1 = (Param2 - Param0);
	fVar2 = (Param2.f_1 - Param0.f_1);
	if (fVar2 != 0f)
	{
		fVar0 = unk_0x8C91FF3D82E6FB27(fVar1, fVar2);
	}
	else if (fVar1 < 0f)
	{
		fVar0 = -90f;
	}
	else
	{
		fVar0 = 90f;
	}
	if (iParam4 == 1)
	{
		fVar0 = (fVar0 * -1f);
		if (fVar0 < 0f)
		{
			fVar0 = (fVar0 + 360f);
		}
	}
	return fVar0;
}

void func_14()
{
	func_9(&iLocal_42);
	if (func_6(iLocal_40))
	{
		iLocal_42 = func_15(iLocal_40, 1, 5);
	}
}

int func_15(int iParam0, bool bParam1, int iParam2)
{
	int iVar0;
	
	iVar0 = 0;
	if (func_5(iParam0))
	{
		iVar0 = unk_0x2BE000892D65EA2A(iParam0);
		unk_0x3060C53EAE54BBE7(iVar0, bParam1);
		unk_0xE346A71235BB8065(iVar0, iParam2);
		unk_0xFA81E0FBD7F5ACA0(iVar0, 1f);
	}
	return iVar0;
}

void func_16()
{
	unk_0x78FCB2E22C41B9D5(iLocal_44);
	while (!unk_0x7D167B9A0CCDA347(iLocal_44))
	{
		wait(0);
	}
	if (func_6(iLocal_40))
	{
		iLocal_43 = unk_0x6A7A2C83BD302BA4(iLocal_40, 26, iLocal_44, -1, 1, true);
		if (func_5(iLocal_43))
		{
			unk_0x4E65320BC9AD521C(iLocal_43, 1);
			unk_0x694113444F21E39F(iLocal_43, 118, false);
			unk_0x694113444F21E39F(iLocal_43, 29, false);
			unk_0x694113444F21E39F(iLocal_43, 116, false);
		}
	}
	if (func_6(iLocal_40))
	{
		unk_0x43EDD5EDA578C63A(iLocal_40, 1, "Blimp_City", 1);
	}
	unk_0x74528AC0906CBABE(iLocal_44);
}

void func_17()
{
	struct<3> Var0;
	
	if (func_6(iLocal_40) && unk_0x3AF46A926C830E50(iLocal_40))
	{
		unk_0xD90A910C8C028796(iLocal_40);
	}
	func_9(&iLocal_42);
	func_7(&iLocal_43);
	func_4(&iLocal_40);
	unk_0x78FCB2E22C41B9D5(iLocal_41);
	unk_0x766028370E52319B(1, "Blimp_City");
	while (!unk_0x7D167B9A0CCDA347(iLocal_41) || !unk_0x08A8988B88C144BE(1, "Blimp_City"))
	{
		wait(0);
	}
	Var0 = { unk_0xBAC3CE1F9E80D41E(unk_0xA327D4D1967417B1(1, "Blimp_City"), 0f) };
	iLocal_40 = unk_0xCE4780E24AFDFBF9(iLocal_41, unk_0x5C80F7370C0D2C2B(unk_0xA327D4D1967417B1(1, "Blimp_City"), 0f), Var0.f_2, 1, 1, 0);
	unk_0x74528AC0906CBABE(iLocal_41);
}

void func_18()
{
	if (func_6(iLocal_40) && unk_0x3AF46A926C830E50(iLocal_40))
	{
		unk_0xD90A910C8C028796(iLocal_40);
	}
	unk_0x0506FDB9D8A504E1(1, "Blimp_city");
	func_9(&iLocal_42);
	func_3(&iLocal_43, 1, 0, 1);
	func_2(&iLocal_40);
	func_2(&iLocal_45);
	unk_0x74528AC0906CBABE(iLocal_44);
	unk_0x74528AC0906CBABE(iLocal_41);
	unk_0x74528AC0906CBABE(iLocal_46);
	unk_0x53797676AD34A9AA(6);
	unk_0xD39E529EBE5DB04F();
}

