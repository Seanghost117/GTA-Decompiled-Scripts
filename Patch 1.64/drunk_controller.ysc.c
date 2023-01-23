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
	BOOL bLocal_12 = 0;
	int iLocal_13 = 0;
	int iLocal_14 = 0;
	int iLocal_15 = 0;
	float fLocal_16 = 0f;
	int iLocal_17 = 8;
	var uLocal_18 = 0;
	var uLocal_19 = 0;
	var uLocal_20 = 0;
	var uLocal_21 = 0;
	var uLocal_22 = 0;
	var uLocal_23 = 0;
	var uLocal_24 = 0;
	var uLocal_25 = 0;
	float fLocal_26 = 0f;
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
	fLocal_16 = -99f;
	fLocal_26 = -1f;
	unk_0x389D5B1C24A046B5();

	if (unk_0x55EEDBBFDC6E810F(32))
		func_32();

	while (true)
	{
		SYSTEM::WAIT(0);
		func_31(0);
		func_30();
		func_23();
		func_20();
		func_15();
		func_2();
		iLocal_13 = iLocal_13 + 1;
	
		if (iLocal_13 >= 16)
			iLocal_13 = 0;
	
		iLocal_14 = iLocal_14 + 1;
	
		if (iLocal_14 >= 16)
			iLocal_14 = 0;
	
		iLocal_15 = iLocal_15 + 1;
	
		if (iLocal_15 >= 5)
			iLocal_15 = 0;
	
		if (!func_1())
			func_32();
	}

	return;
}

BOOL func_1() // Position - 0xA6
{
	if (Global_44411)
		return true;

	if (unk_0xF57C1326FD40C8A7(Global_44412))
		return true;

	if (unk_0x24B651D85CCE5EB4(joaat("drunk")) > 0)
		return true;

	if (Global_44204 > 0)
		return true;

	return false;
}

void func_2() // Position - 0xE3
{
	int i;
	int num;
	float num2;
	float num3;
	int num4;
	float num5;
	float num6;
	int num7;
	BOOL flag;

	if (!Global_44411)
		return;

	num = unk_0xA5E11AF0A2B928C1();

	if (Global_44413 > num || Global_44413 == -1)
	{
		if (unk_0xB53553DC4AAC7D8A())
			return;
	
		num2 = func_14();
	
		for (i = iLocal_17 - 1; i >= 1; i = i + -1)
		{
			iLocal_17[i] = iLocal_17[i - 1];
		}
	
		iLocal_17[0] = num2;
		num4 = 0;
	
		for (i = 0; i < iLocal_17; i = i + 1)
		{
			num3 = num3 + iLocal_17[i];
			num4 = num4 + 1;
		}
	
		num3 = num3 / (float)num4;
		num5 = func_9();
	
		if (Global_44416 != Global_44417)
		{
			num6 = Global_44417 - Global_44416;
			Global_44416 = Global_44416 + (num6 * 0.1f);
		
			if (unk_0x2655A8EC638E4FD1(Global_44416 - Global_44417) < 0.01f)
				Global_44416 = Global_44417;
		}
	
		if (!unk_0x5943EF839F5E017B() && !func_8(unk_0x93E99A2DBCBA9CFA()))
			unk_0x7FE424904239EBA6("DRUNK_SHAKE", Global_44416 * num3 * num5);
	
		if (unk_0xA5E11AF0A2B928C1() % 100 == 0)
		{
			if (Global_44413 == -1)
			{
			}
			else
			{
				if (fLocal_26 == -1f)
					fLocal_26 = num3;
			
				unk_0x349662FEA4ECE81F(Global_44416 * num3 * num5);
				unk_0x8660199B2F4898FA(Global_44415 * num3 * num5);
				fLocal_26 = num3;
			}
		}
	
		if (Global_44415 * num3 * num5 < 1f)
			unk_0x7BCAFEC02B563C0E(Global_44415 * num3 * num5);
		else
			unk_0x7BCAFEC02B563C0E(1f);
	
		if (!unk_0xF4B77997BE81F7D9())
			unk_0xAE4F0A81118E0B44("DRUNK_SHAKE", Global_44416 * Global_44410 * num3 * num5);
	
		unk_0xE4752D69CC8F9119(Global_44416 * Global_44410 * num3 * num5);
	
		if (unk_0xF57C1326FD40C8A7(Global_44412))
			if (unk_0x75F9043412E1F207(Global_44412))
				unk_0xC7B060434432D1C9(Global_44412, Global_44416 * num3 * num5);
	
		if (!unk_0x2AC37494BBF1DB16(&Global_44440) && !unk_0x2AC37494BBF1DB16(&Global_44424))
		{
			unk_0xAEA29937C5240DA0(&Global_44424);
			TEXT_LABEL_ASSIGN_STRING(&Global_44440, "", 16);
		}
	
		unk_0x9F55C97959F56295();
	
		if (Global_44419 > 0f)
		{
			if (fLocal_16 != Global_44419)
			{
				if (unk_0xB31050BAEF14E6F4() != -1)
				{
				}
				else if (!unk_0xE90D4680D447065A())
				{
					unk_0x86CC3402B0F6BB13(&Global_44420, 15f);
					fLocal_16 = Global_44419;
				
					if (Global_44418 != 1f)
						unk_0x9A3E74048B14EBC9(Global_44418);
				}
			}
			else
			{
				if (unk_0xB31050BAEF14E6F4() != -1 && unk_0x4F873840FC0FA8FE() != -1)
					fLocal_16 = -99f;
			
				unk_0xBF6A4C0559E4BF39(2);
				num7 = Global_44413 - num;
			
				if (num7 <= Global_44414 / 2 && Global_44413 != -1)
				{
					flag = false;
				
					if (unk_0x48DC6A21D1CAD89C(unk_0x93E99A2DBCBA9CFA()))
						if (unk_0x70ACD9400516DB25(unk_0xC1A5EC5C986B98AD()))
							flag = true;
				
					if (func_6(unk_0xC1A5EC5C986B98AD()))
					{
						Global_44413 = Global_44413 + 1000;
					}
					else if (flag)
					{
						Global_44413 = Global_44413 + 1000;
					}
					else if (unk_0xB31050BAEF14E6F4() != -1)
					{
						Global_44413 = Global_44413 + 1000;
					}
					else if (func_5())
					{
						Global_44413 = Global_44413 + 1000;
					}
					else
					{
						if (unk_0x4F873840FC0FA8FE() != -1)
							unk_0xDEE79DD80BE13DE8(SYSTEM::TO_FLOAT(Global_44414 / 2) / 1000f);
					
						fLocal_16 = -99f;
						Global_44419 = 0f;
						TEXT_LABEL_ASSIGN_STRING(&Global_44420, "", 16);
					}
				}
			}
		}
	
		return;
	}

	for (i = 0; i < iLocal_17; i = i + 1)
	{
		iLocal_17[i] = 0f;
	}

	fLocal_26 = -1f;
	fLocal_16 = -99f;
	func_3(true);
	bLocal_12 = true;
	return;
}

void func_3(BOOL bParam0) // Position - 0x408
{
	unk_0x8660199B2F4898FA(0f);
	unk_0x7BCAFEC02B563C0E(0f);
	unk_0x349662FEA4ECE81F(0f);
	unk_0x7EC07327DEB05AC6(1);
	unk_0xE4752D69CC8F9119(0f);
	unk_0x1936275185C4A0E5(1);
	unk_0xBF6A4C0559E4BF39(0);

	if (unk_0xD19C2C73F4D74992("SAFEHOUSE_STONED_MICHAEL"))
		unk_0x3FA8C73B5856A3E4("SAFEHOUSE_STONED_MICHAEL");

	if (!unk_0x2AC37494BBF1DB16(&Global_44424))
		if (unk_0xD19C2C73F4D74992(&Global_44424))
			unk_0x3FA8C73B5856A3E4(&Global_44424);

	if (unk_0xF57C1326FD40C8A7(Global_44412))
	{
		if (unk_0x75F9043412E1F207(Global_44412))
		{
			unk_0xC7B060434432D1C9(Global_44412, 0f);
			unk_0x0969F28D2C570575(Global_44412, 1);
		}
	}

	if (unk_0xC0A15A60BC0C570E())
		unk_0x282AA8C5BDD0836B(0);

	if (bParam0)
		if (unk_0x4F873840FC0FA8FE() != -1 || unk_0xB31050BAEF14E6F4() != -1)
			unk_0xA2EC5ACB2B5D92A4();
		else if (unk_0xB53553DC4AAC7D8A())
			unk_0xA2EC5ACB2B5D92A4();

	Global_44419 = 0f;
	TEXT_LABEL_ASSIGN_STRING(&Global_44420, "", 16);
	TEXT_LABEL_ASSIGN_STRING(&Global_44424, "", 64);
	TEXT_LABEL_ASSIGN_STRING(&Global_44440, "", 16);
	func_4();
	return;
}

void func_4() // Position - 0x4E2
{
	Global_44411 = false;
	Global_44412 = 0;
	Global_44413 = 0;
	Global_44414 = 30000;
	Global_44415 = 0f;
	Global_44417 = 0f;
	Global_44416 = 0f;
	Global_44418 = 1f;
	Global_44419 = 0f;
	TEXT_LABEL_ASSIGN_STRING(&Global_44420, "", 16);
	return;
}

BOOL func_5() // Position - 0x518
{
	return Global_2766478;
}

BOOL func_6(int iParam0) // Position - 0x524
{
	if (iParam0 == 0)
		return false;

	if (func_7(iParam0) == -1)
		return false;

	return true;
}

int func_7(int iParam0) // Position - 0x545
{
	int i;

	if (iParam0 == 0)
		return -1;

	i = 0;

	for (i = 0; i < 16; i = i + 1)
	{
		if (!Global_44232[i /*5*/] == -1)
			if (iParam0 == Global_44232[i /*5*/].f_1)
				return i;
	}

	return -1;
}

BOOL func_8(int iParam0) // Position - 0x58E
{
	return IS_BIT_SET(Global_2657589[iParam0 /*466*/].f_321.f_3, 13);
}

float func_9() // Position - 0x5A7
{
	float num;
	int value;
	int value2;

	num = 0.1f;
	value = func_13(unk_0xC1A5EC5C986B98AD());
	value2 = func_10(unk_0xC1A5EC5C986B98AD());

	if (value2 == 0)
	{
		if (value == 0)
		{
			num = 0.1f;
		}
		else
		{
			num = SYSTEM::TO_FLOAT(value) / SYSTEM::TO_FLOAT(10);
		
			if (num > 1f)
				num = 1f;
		}
	}
	else if (value2 == 0)
	{
		num = 0.1f;
	}
	else
	{
		num = SYSTEM::TO_FLOAT(value2) / SYSTEM::TO_FLOAT(5);
	
		if (num > 1f)
			num = 1f;
	}

	return num;
}

int func_10(int iParam0) // Position - 0x626
{
	int num;
	int num2;

	if (iParam0 == 0)
		return 0;

	if (!unk_0x7DE17ACDD8BA2642(iParam0))
		return 0;

	num = func_12(iParam0);
	num2 = func_11(num);

	if (num2 == -1)
		return -1;

	return Global_44232[num2 /*5*/].f_4;
}

int func_11(int iParam0) // Position - 0x669
{
	int i;

	i = 0;

	for (i = 0; i < 16; i = i + 1)
	{
		if (Global_44232[i /*5*/] == iParam0)
			return i;
	}

	return -1;
}

int func_12(int iParam0) // Position - 0x699
{
	int i;

	if (iParam0 == 0)
		return -1;

	i = 0;

	for (i = 0; i < 16; i = i + 1)
	{
		if (iParam0 == Global_44232[i /*5*/].f_1)
			return Global_44232[i /*5*/];
	}

	return -1;
}

int func_13(int iParam0) // Position - 0x6DA
{
	int num;
	int num2;

	if (iParam0 == 0)
		return 0;

	if (!unk_0x7DE17ACDD8BA2642(iParam0))
		return 0;

	num = func_12(iParam0);
	num2 = func_11(num);

	if (num2 == -1)
		return -1;

	return Global_44232[num2 /*5*/].f_3;
}

float func_14() // Position - 0x71D
{
	var unk;
	float num;
	int value;

	unk = unk_0xA5E11AF0A2B928C1();
	num = 1f;
	value = Global_44413 - unk;

	if (value <= Global_44414)
		if (Global_44413 != -1)
			num = SYSTEM::TO_FLOAT(value) / SYSTEM::TO_FLOAT(Global_44414);

	return num;
}

void func_15() // Position - 0x757
{
	if (Global_44206[iLocal_15 /*5*/] == 0)
		func_16(iLocal_15);

	return;
}

void func_16(int iParam0) // Position - 0x770
{
	int num;
	struct<5> args;

	if (iParam0 < 0 || iParam0 >= 5)
		return;

	if (unk_0x055111B11E6624FD(Global_44206[iParam0 /*5*/].f_1, 0))
	{
		func_19(iParam0);
		return;
	}

	if (func_6(Global_44206[iParam0 /*5*/].f_1))
	{
		func_19(iParam0);
		return;
	}

	if (!unk_0x6CAF14BE58B4BFF8("drunk"))
	{
		unk_0x3EC562D93709C894("drunk");
		return;
	}

	num = func_18();

	if (num == -1)
	{
		func_19(iParam0);
		return;
	}

	Global_44232[num /*5*/] = func_17();
	Global_44232[num /*5*/].f_1 = Global_44206[iParam0 /*5*/].f_1;
	Global_44232[num /*5*/].f_2 = 0;
	args = { Global_44206[iParam0 /*5*/] };
	SYSTEM::START_NEW_SCRIPT_WITH_ARGS("drunk", &args, 5, DEFAULT);
	unk_0x037A80676B8FF0F5("drunk");
	func_19(iParam0);
	return;
}

int func_17() // Position - 0x838
{
	int num;

	num = Global_44203;
	Global_44203 = Global_44203 + 1;
	return num;
}

int func_18() // Position - 0x84F
{
	int i;

	i = 0;

	for (i = 0; i < 16; i = i + 1)
	{
		if (Global_44232[i /*5*/] == -1)
			return i;
	}

	return -1;
}

void func_19(int iParam0) // Position - 0x87E
{
	if (iParam0 < 0 || iParam0 >= 5)
		return;

	if (!Global_44206[iParam0 /*5*/].f_1 == 0)
		if (Global_44206[iParam0 /*5*/].f_1 == unk_0xC1A5EC5C986B98AD())
			Global_44444 = 0;

	Global_44206[iParam0 /*5*/] = 13;
	Global_44206[iParam0 /*5*/].f_1 = 0;
	Global_44206[iParam0 /*5*/].f_2 = 0;
	Global_44206[iParam0 /*5*/].f_3 = 0;
	Global_44206[iParam0 /*5*/].f_4 = 0;
	Global_44204 = Global_44204 - 1;

	if (Global_44204 < 0)
		Global_44204 = 0;

	return;
}

void func_20() // Position - 0x901
{
	if (!Global_44313[iLocal_13 /*6*/].f_2 == 6)
	{
		if (Global_44313[iLocal_13 /*6*/].f_1 == 0)
		{
			func_22(iLocal_13);
			func_21(iLocal_13);
		}
	}

	return;
}

void func_21(int iParam0) // Position - 0x931
{
	if (iParam0 < 0 || iParam0 >= 16)
		return;

	Global_44313[iParam0 /*6*/] = -1;
	Global_44313[iParam0 /*6*/].f_1 = -1;
	Global_44313[iParam0 /*6*/].f_2 = 6;
	Global_44313[iParam0 /*6*/].f_3 = 0;
	Global_44313[iParam0 /*6*/].f_4 = 0;
	return;
}

void func_22(int iParam0) // Position - 0x97E
{
	int num;

	num = Global_44313[iParam0 /*6*/].f_2;

	switch (num)
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
		case 5:
		case 6:
			break;
	
		default:
			break;
	}

	return;
}

void func_23() // Position - 0x9C8
{
	int num;

	num = -1;

	if (!Global_44232[iLocal_14 /*5*/] == -1)
	{
		num = func_29(Global_44232[iLocal_14 /*5*/], 0);
	
		if (num == -1)
			func_24(Global_44232[iLocal_14 /*5*/]);
		else
			func_21(num);
	}

	return;
}

void func_24(int iParam0) // Position - 0xA08
{
	int num;

	func_27(iParam0);
	num = func_26(iParam0);

	if (num == -1)
		return;

	func_25(num);
	return;
}

void func_25(int iParam0) // Position - 0xA2D
{
	if (iParam0 < 0 || iParam0 >= 16)
		return;

	Global_44232[iParam0 /*5*/] = -1;
	Global_44232[iParam0 /*5*/].f_1 = 0;
	Global_44232[iParam0 /*5*/].f_2 = -1;
	Global_44232[iParam0 /*5*/].f_3 = 0;
	Global_44232[iParam0 /*5*/].f_4 = 0;
	return;
}

int func_26(int iParam0) // Position - 0xA7A
{
	int i;

	i = 0;

	for (i = 0; i < 16; i = i + 1)
	{
		if (Global_44232[i /*5*/] == iParam0)
			return i;
	}

	return -1;
}

void func_27(int iParam0) // Position - 0xAAA
{
	func_31(iParam0);
	func_28(iParam0);
	return;
}

void func_28(int iParam0) // Position - 0xABE
{
	int i;

	i = 0;

	for (i = 0; i < 16; i = i + 1)
	{
		if (iParam0 == Global_44313[i /*6*/].f_1)
			func_21(i);
	}

	return;
}

int func_29(int iParam0, int iParam1) // Position - 0xAF0
{
	int i;

	i = 0;

	for (i = 0; i < 16; i = i + 1)
	{
		if (iParam1 == Global_44313[i /*6*/].f_2)
			if (iParam0 == Global_44313[i /*6*/])
				return i;
	}

	return -1;
}

void func_30() // Position - 0xB2E
{
	if (Global_44313[iLocal_13 /*6*/] == 1)
		Global_44313[iLocal_13 /*6*/] = 0;

	return;
}

void func_31(int iParam0) // Position - 0xB49
{
	int i;

	i = 0;

	for (i = 0; i < 16; i = i + 1)
	{
		if (iParam0 == Global_44313[i /*6*/])
			func_21(i);
	}

	return;
}

void func_32() // Position - 0xB79
{
	func_33();

	if (!bLocal_12)
		func_3(true);

	unk_0x675D9C12C73D3DE7();
	return;
}

void func_33() // Position - 0xB94
{
	func_36();
	func_35();
	func_34();
	func_4();
	Global_44445 = 0;
	Global_44444 = 0;
	Global_44204 = 0;
	unk_0x031879EF9A711F74("drunk");
	return;
}

void func_34() // Position - 0xBBF
{
	int i;

	i = 0;

	for (i = 0; i < 16; i = i + 1)
	{
		func_21(i);
	}

	return;
}

void func_35() // Position - 0xBE3
{
	int i;

	i = 0;

	for (i = 0; i < 16; i = i + 1)
	{
		func_25(i);
	}

	return;
}

void func_36() // Position - 0xC07
{
	int i;

	i = 0;

	for (i = 0; i < 5; i = i + 1)
	{
		func_19(i);
	}

	return;
}

