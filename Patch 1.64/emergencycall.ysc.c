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
	char* sLocal_20 = 0;
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
	int iLocal_43 = 0;
	int iLocal_44 = 0;
	var uLocal_45 = 0;
	var uLocal_46 = 0;
	var uLocal_47 = 0;
	int iLocal_48 = 0;
	var uLocal_49 = 0;
#endregion

void main() // Position - 0x0
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
	iLocal_28 = 3;
	fLocal_31 = 80f;
	fLocal_32 = 140f;
	fLocal_33 = 180f;
	iLocal_39 = 1;
	iLocal_40 = 65;
	iLocal_41 = 49;
	iLocal_42 = 64;

	if (unk_0x55EEDBBFDC6E810F(11))
		iLocal_43 = 5;

	while (true)
	{
		SYSTEM::WAIT(0);
	
		if (unk_0x48DC6A21D1CAD89C(unk_0x93E99A2DBCBA9CFA()))
		{
			switch (iLocal_43)
			{
				case 0:
					func_9();
					break;
			
				case 1:
					break;
			
				case 2:
					func_8();
				
					if (unk_0xA26A9A07F761D8F8())
					{
						if (unk_0x7AD51726D7DA42BD(7, unk_0xC1A5EC5C986B98AD(), 2, 3f, &uLocal_49, 0, 0))
						{
							iLocal_48 = unk_0xA5E11AF0A2B928C1();
							iLocal_43 = 5;
						}
					}
					else if (unk_0x643DAC9F67A0916D(7, uLocal_45, 2, 3f, &uLocal_49, 0, 0))
					{
						iLocal_48 = unk_0xA5E11AF0A2B928C1();
						iLocal_43 = 5;
					}
					break;
			
				case 3:
					func_8();
				
					if (unk_0xA26A9A07F761D8F8())
					{
						if (func_7(unk_0x93E99A2DBCBA9CFA(), false) && func_4(unk_0x93E99A2DBCBA9CFA()) == 5 && Global_1968277)
						{
							if (Global_1968278 == 0)
								Global_1968278 = 1;
						
							iLocal_43 = 5;
						}
						else if (unk_0x7AD51726D7DA42BD(5, unk_0xC1A5EC5C986B98AD(), 2, 3f, &uLocal_49, 0, 0))
						{
							iLocal_48 = unk_0xA5E11AF0A2B928C1();
							iLocal_43 = 5;
						}
					}
					else if (unk_0x643DAC9F67A0916D(5, uLocal_45, 2, 3f, &uLocal_49, 0, 0))
					{
						iLocal_48 = unk_0xA5E11AF0A2B928C1();
						iLocal_43 = 5;
					}
					break;
			
				case 4:
					func_8();
				
					if (unk_0xA26A9A07F761D8F8())
					{
						if (unk_0x7AD51726D7DA42BD(3, unk_0xC1A5EC5C986B98AD(), 4, 3f, &uLocal_49, 0, 0))
						{
							iLocal_48 = unk_0xA5E11AF0A2B928C1();
							iLocal_43 = 5;
						}
					}
					else if (unk_0x643DAC9F67A0916D(3, uLocal_45, 4, 3f, &uLocal_49, 0, 0))
					{
						if (Global_97178.f_358 == unk_0x14580F20CBCE4FA9("AGENCY_PREP_1") || unk_0x24B651D85CCE5EB4(unk_0x14580F20CBCE4FA9("agency_prep1")) > 0 && _IS_MISSION_REPEAT_ACTIVE(false))
							Global_97178.f_358 = unk_0x14580F20CBCE4FA9("AHP1_TRUCKCALLED");
						else if (func_2(67) && !func_2(68))
							Global_97108 = true;
					
						iLocal_48 = unk_0xA5E11AF0A2B928C1();
						iLocal_43 = 5;
					}
					break;
			
				case 5:
					if (unk_0xA5E11AF0A2B928C1() > iLocal_48 + 60000 || !unk_0xC1B5FB06637242C9(uLocal_49))
						func_1();
					else if (unk_0x48DC6A21D1CAD89C(unk_0x93E99A2DBCBA9CFA()))
						if (!unk_0x1B82EF141CC65934(unk_0x93E99A2DBCBA9CFA()))
							if (unk_0xC1B5FB06637242C9(uLocal_49))
								unk_0xCBFA60E5BB3B03C4(uLocal_49);
					break;
			}
		}
	}

	return;
}

void func_1() // Position - 0x27A
{
	iLocal_43 = 0;
	iLocal_44 = 0;
	unk_0x675D9C12C73D3DE7();
	return;
}

BOOL func_2(int iParam0) // Position - 0x28C
{
	if (iParam0 == 94 || iParam0 == -1)
		return false;

	return Global_113648.f_9087.f_330[iParam0 /*6*/];
}

BOOL _IS_MISSION_REPEAT_ACTIVE(BOOL bExcludeBenchmark) // Position - 0x2B8
{
	if (!bExcludeBenchmark && unk_0x24B651D85CCE5EB4(joaat("benchmark")) > 0)
		return true;

	return IS_BIT_SET(Global_78807, 0);
}

int func_4(int iParam0) // Position - 0x2E0
{
	if (func_6(iParam0) == 233)
		return func_5(iParam0);

	return -1;
}

int func_5(int iParam0) // Position - 0x2FD
{
	if (func_7(iParam0, false))
		return Global_1894573[iParam0 /*608*/].f_10.f_182;

	return -1;
}

int func_6(int iParam0) // Position - 0x320
{
	if (func_7(iParam0, false))
		return Global_1894573[iParam0 /*608*/].f_10.f_33;

	return -1;
}

BOOL func_7(int iParam0, BOOL bParam1) // Position - 0x343
{
	if (Global_1894573[iParam0 /*608*/].f_10.f_33 != -1 || bParam1 && Global_1894573[iParam0 /*608*/].f_10.f_32 != -1)
		return true;

	return false;
}

void func_8() // Position - 0x37E
{
	if (unk_0xA5E11AF0A2B928C1() > iLocal_48 + 30000)
		iLocal_43 = 5;

	return;
}

void func_9() // Position - 0x395
{
	var unk;

	switch (iLocal_44)
	{
		case 0:
			iLocal_44 = 1;
			iLocal_48 = unk_0xA5E11AF0A2B928C1();
			break;
	
		case 1:
			while (!func_19())
			{
				SYSTEM::WAIT(0);
			
				if (func_18() == 3)
					iLocal_43 = 3;
			
				if (func_18() == 4)
					iLocal_43 = 4;
			
				if (func_18() == 5)
					iLocal_43 = 2;
			
				if (unk_0xA5E11AF0A2B928C1() > iLocal_48 + 30000)
				{
					iLocal_48 = unk_0xA5E11AF0A2B928C1();
					func_12(0);
				}
			}
		
			if (iLocal_43 == 0)
				iLocal_43 = 5;
		
			if (!unk_0x66599E73DBA5A850(unk_0xC1A5EC5C986B98AD()))
				func_10(unk_0xC1A5EC5C986B98AD(), &uLocal_45, &unk);
		
			iLocal_48 = unk_0xA5E11AF0A2B928C1();
			break;
	}

	return;
}

void func_10(var uParam0, var uParam1, var uParam2) // Position - 0x42E
{
	int num;
	int num2;
	var unk;
	var unk2;
	var unk3;
	var unk6;
	var unk9;
	float num3;
	float num4;
	float num5;
	float num6;
	float num7;
	float num8;
	int num9;
	var unk12;
	int num10;
	var unk13;
	var unk16;
	var unk19;

	num8 = 5f;
	num = 1;
	num9 = 0;

	while (num9 < 2)
	{
		switch (num9)
		{
			case 0:
				unk_0xF205ECAF6E47803C(unk_0x30BE8A934C020461(unk_0xC1A5EC5C986B98AD(), 1), num, uParam1, &num6, &num2, 5, 1077936128, 0);
				unk_0x2826D335F2B1621B(*uParam1, 1f, 1, &unk3, &unk6, &unk, &unk2, &num3, 0);
			
				if (unk_0x2E496FE654DA4166(unk_0x30BE8A934C020461(unk_0xC1A5EC5C986B98AD(), 0), -3044.66f, 596.43f, 6.58f, 1) < 25f)
					*uParam1 = { -3031.38f, 605.32f, 6.86f };
			
				unk9 = { unk_0x30BE8A934C020461(unk_0xC1A5EC5C986B98AD(), 1) - unk_0x30BE8A934C020461(uParam0, 1) };
				num4 = unk_0x06A2A02CDC68090B(unk9, unk9.f_1);
				num5 = num6 + 180f;
			
				if (num5 > 360f)
					num5 = num5 - 360f;
			
				if (func_11(num4, num6, 90f))
					*uParam2 = num6;
				else
					*uParam2 = num5;
			
				if (num3 < 0f)
				{
					num7 = 0f;
				}
				else if (unk_0xBD0716EB92E5A53F(unk_0xCF5B31C4FCE3C0B1(*uParam1, 1, 1, 1077936128, 0)))
				{
					num7 = 0f;
				}
				else
				{
					num7 = num8 * SYSTEM::TO_FLOAT(num2 / 2);
				
					if (num7 == 0f)
						num7 = num7 + num8;
				
					if (num2 == 5)
						num7 = num7 + num8;
				
					if (unk_0x2E496FE654DA4166(unk_0x30BE8A934C020461(unk_0xC1A5EC5C986B98AD(), 0), 294f, -895f, 28f, 1) < 25f || unk_0x2E496FE654DA4166(unk_0x30BE8A934C020461(unk_0xC1A5EC5C986B98AD(), 0), -713.01f, -819.64f, 22.63f, 1) < 25f)
						num7 = num7 + 5f;
					else
						num7 = num7 + 3.75f;
				
					num7 = num7 + (num3 / 2f);
				}
			
				if (SYSTEM::VDIST(unk_0xF2A6E8EA57F9D501(*uParam1, *uParam2, num7, 0f, 0f), unk_0x30BE8A934C020461(unk_0xC1A5EC5C986B98AD(), 1)) > SYSTEM::VDIST(unk_0xF2A6E8EA57F9D501(*uParam1, *uParam2, -num7, 0f, 0f), unk_0x30BE8A934C020461(unk_0xC1A5EC5C986B98AD(), 1)))
					num7 = -num7;
			
				*uParam1 = { unk_0xF2A6E8EA57F9D501(*uParam1, *uParam2, num7, 0f, 0f) };
				unk12 = unk_0xD8D74C74516FDA20(*uParam1 + { uParam1->f_2 + 4.5f, uParam1->f_2 + 4.5f, uParam1->f_2 + 4.5f }, *uParam1 + { 4.5f, 0.5f, 0.5f }, 2.5f, 1, 0, 4);
				num9 = num9 + 1;
				break;
		
			case 1:
				if (num <= 2)
				{
					if (unk_0x5A2817B89A8ECCD2(unk12, &num10, &unk16, &unk13, &unk19) == 2)
					{
						if (num10 != 0)
						{
							if (unk16.f_2 > uParam1->f_2 + 8.5f)
							{
								num9 = num9 + 1;
							}
							else
							{
								num = num + 1;
								num9 = 0;
							}
						}
						else
						{
							num9 = num9 + 1;
						}
					}
				}
				else
				{
					num9 = num9 + 1;
				}
				break;
		
			case 2:
				break;
		}
	}

	return;
}

BOOL func_11(float fParam0, float fParam1, float fParam2) // Position - 0x6D4
{
	float num;
	float num2;

	num2 = fParam1 - fParam2;

	if (num2 < 0f)
		num2 = num2 + 360f;

	num = fParam1 + fParam2;

	if (num >= 360f)
		num = num - 360f;

	if (num > num2)
		if (fParam0 < num && fParam0 > num2)
			return true;
	else if (fParam0 < num || fParam0 > num2)
		return true;

	return false;
}

void func_12(int iParam0) // Position - 0x749
{
	if (func_17())
		return;

	if (Global_20584)
		if (func_16())
			func_14(true, true);
		else
			func_14(false, false);

	if (Global_20383.f_1 == 10 || Global_20383.f_1 == 9)
		unk_0xECDAB41968FF21A8(&Global_8254, 16);

	if (unk_0xE444FD7526C8BB46())
		unk_0xD6625E11483B2324(0);

	Global_21725 = 5;

	if (iParam0 == 1)
		unk_0xECDAB41968FF21A8(&Global_8253, 30);
	else
		unk_0x061B1200C95204CB(&Global_8253, 30);

	if (!func_13())
		Global_20383.f_1 = 3;

	return;
}

BOOL func_13() // Position - 0x7D3
{
	if (Global_20383.f_1 == 1 || Global_20383.f_1 == 0)
		return true;

	return false;
}

void func_14(BOOL bParam0, BOOL bParam1) // Position - 0x7FA
{
	if (bParam0)
	{
		if (func_15(0))
		{
			Global_20584 = true;
		
			if (bParam1)
				unk_0xF756EDB27C588BED(&Global_20320);
		
			Global_20311 = { Global_20329[Global_20328 /*3*/] };
			unk_0x6B2D55EA37C443D5(Global_20311);
		}
	}
	else if (Global_20584 == true)
	{
		Global_20584 = false;
		Global_20311 = { Global_20336[Global_20328 /*3*/] };
	
		if (bParam1)
			unk_0x6B2D55EA37C443D5(Global_20320);
		else
			unk_0x6B2D55EA37C443D5(Global_20311);
	}

	return;
}

BOOL func_15(int iParam0) // Position - 0x86E
{
	if (iParam0 == 1)
		if (Global_20383.f_1 > 3)
			if (IS_BIT_SET(Global_8253, 14))
				return true;
			else
				return false;
		else
			return false;

	if (unk_0x24B651D85CCE5EB4(joaat("cellphone_flashhand")) > 0)
		return true;

	if (Global_20383.f_1 > 3)
		return true;

	return false;
}

BOOL func_16() // Position - 0x8C5
{
	return IS_BIT_SET(Global_1962996, 5);
}

BOOL func_17() // Position - 0x8D3
{
	return IS_BIT_SET(Global_1962996, 19);
}

int func_18() // Position - 0x8E2
{
	return Global_22742;
}

BOOL func_19() // Position - 0x8ED
{
	if (Global_21725 == 0)
		return true;

	return false;
}

