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
	BOOL bLocal_18 = 0;
	BOOL bLocal_19 = 0;
	BOOL bLocal_20 = 0;
	BOOL bLocal_21 = 0;
	BOOL bLocal_22 = 0;
	BOOL bLocal_23 = 0;
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

	if (unk_0x55EEDBBFDC6E810F(3))
	{
		func_14();
		unk_0x675D9C12C73D3DE7();
	}

	func_8();

	while (true)
	{
		SYSTEM::WAIT(0);
	
		if (Global_20383.f_1 != 9)
		{
			if (!bLocal_18)
			{
				bLocal_18 = true;
			}
			else if (Global_20365)
			{
				if (!bLocal_19)
				{
					bLocal_19 = true;
					func_7(Global_20364, "SET_DATA_SLOT_EMPTY", 5f, -1082130432, -1082130432, -1082130432, -1082130432);
					func_4(Global_20364, true);
					func_7(Global_20364, "DISPLAY_VIEW", 5f, -1082130432, -1082130432, -1082130432, -1082130432);
				}
				else
				{
					func_3();
				}
			}
		
			if (func_2())
				func_14();
		}
	
		if (func_1())
			func_14();
	}

	return;
}

BOOL func_1() // Position - 0xDC
{
	if (Global_20383.f_1 == 1 || Global_20383.f_1 == 3 || Global_20383.f_1 == 0 || Global_20327 == 1)
	{
		Global_20370 = 1;
		return true;
	}

	return false;
}

BOOL func_2() // Position - 0x11F
{
	if (Global_8859 == 1 || Global_20383.f_1 < 7)
	{
		Global_20370 = 1;
		return true;
	}

	return false;
}

void func_3() // Position - 0x148
{
	if (!bLocal_20)
	{
		if (unk_0x51EB177CA0562B62(2, 172))
		{
			bLocal_20 = true;
			func_7(Global_20364, "SET_INPUT_EVENT", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
		}
	}
	else if (!unk_0x51EB177CA0562B62(2, 172))
	{
		bLocal_20 = false;
	}

	if (!bLocal_21)
	{
		if (unk_0x51EB177CA0562B62(2, 173))
		{
			bLocal_21 = true;
			func_7(Global_20364, "SET_INPUT_EVENT", 3f, -1082130432, -1082130432, -1082130432, -1082130432);
		}
	}
	else if (!unk_0x51EB177CA0562B62(2, 173))
	{
		bLocal_21 = false;
	}

	if (!bLocal_22)
	{
		if (unk_0x51EB177CA0562B62(2, 174))
		{
			bLocal_22 = true;
			func_7(Global_20364, "SET_INPUT_EVENT", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
		}
	}
	else if (!unk_0x51EB177CA0562B62(2, 174))
	{
		bLocal_22 = false;
	}

	if (!bLocal_23)
	{
		if (unk_0x51EB177CA0562B62(2, 175))
		{
			bLocal_23 = true;
			func_7(Global_20364, "SET_INPUT_EVENT", 2f, -1082130432, -1082130432, -1082130432, -1082130432);
		}
	}
	else if (!unk_0x51EB177CA0562B62(2, 175))
	{
		bLocal_23 = false;
	}

	return;
}

void func_4(int iParam0, BOOL bParam1) // Position - 0x25C
{
	int num;
	int num2;
	BOOL flag;
	int num3;
	int num4;
	int num5;
	char* str;

	if (Global_97768 == Global_97769)
		if (!bParam1)
			return;

	if (iParam0 == 0)
		return;

	if (!unk_0x5FAF55B1F052A2E6(iParam0))
		return;

	func_8();
	num = Global_97772;
	num2 = Global_97771;
	flag = true;
	num3 = 0;
	num4 = 0;
	num5 = 0;

	while (flag)
	{
		num4 = num3;
		num3 = Global_97773[num /*25*/][num2];
	
		if (!num3 == num4)
		{
			if (!num3 == 0)
			{
				switch (num)
				{
					case 0:
						str = "fSu" /*SUNDAY*/;
						break;
				
					case 1:
						str = "fMo" /*MONDAY*/;
						break;
				
					case 2:
						str = "fTu" /*TUESDAY*/;
						break;
				
					case 3:
						str = "fWe" /*WEDNESDAY*/;
						break;
				
					case 4:
						str = "fTh" /*THURSDAY*/;
						break;
				
					case 5:
						str = "fFr" /*FRIDAY*/;
						break;
				
					case 6:
						str = "fSa" /*SATURDAY*/;
						break;
				}
			
				unk_0x9FD96C5DE6EDFC15(iParam0, "SET_DATA_SLOT_EMPTY");
				unk_0xC6A3EF6C4A3412C1(num5);
				unk_0xAE3413B0654A0035();
				unk_0x9FD96C5DE6EDFC15(iParam0, "SET_DATA_SLOT");
				unk_0xC6A3EF6C4A3412C1(5);
				unk_0xC6A3EF6C4A3412C1(num5);
				unk_0xC6A3EF6C4A3412C1(num2);
				unk_0xC49D258FBF3BF214(0f);
				unk_0xC49D258FBF3BF214(-1f);
				func_6(str);
				func_6(func_5(num3));
				unk_0xAE3413B0654A0035();
				num5 = num5 + 1;
			}
		}
	
		num2 = num2 + 1;
	
		if (num2 > 23)
		{
			num2 = 0;
			num = num + 1;
		}
	
		if (num > 6)
			num = 0;
	
		if (num == Global_97772 && num2 == Global_97771)
			flag = false;
	}

	Global_97769 = Global_97768;
	return;
}

char* func_5(int iParam0) // Position - 0x3D0
{
	switch (iParam0)
	{
		case 0:
			return "ORG_EV_0" /*NOT SET!*/;
	
		case 1:
			return "ORG_EV_1" /*House Viewing*/;
	}

	return "ORG_EV_0" /*NOT SET!*/;
}

void func_6(char* sParam0) // Position - 0x400
{
	unk_0x2AF11E92DE43CDE3(sParam0);
	unk_0xF8FCA9E7130CE1C8();
	return;
}

void func_7(int iParam0, char* sParam1, float fParam2, int iParam3, int iParam4, int iParam5, int iParam6) // Position - 0x412
{
	unk_0x9FD96C5DE6EDFC15(iParam0, sParam1);
	unk_0xC6A3EF6C4A3412C1(SYSTEM::ROUND(fParam2));

	if (iParam3 != -1f)
		unk_0xC6A3EF6C4A3412C1(SYSTEM::ROUND(iParam3));

	if (iParam4 != -1f)
		unk_0xC6A3EF6C4A3412C1(SYSTEM::ROUND(iParam4));

	if (iParam5 != -1f)
		unk_0xC6A3EF6C4A3412C1(SYSTEM::ROUND(iParam5));

	if (iParam6 != -1f)
		unk_0xC6A3EF6C4A3412C1(SYSTEM::ROUND(iParam6));

	unk_0xAE3413B0654A0035();
	return;
}

void func_8() // Position - 0x475
{
	int num;
	int num2;
	int num3;
	int num4;
	int num5;
	int num6;
	int num7;
	int num8;
	int i;
	int j;
	int num9;
	int num10;

	if (!Global_97767)
	{
		Global_97951 = unk_0x61117764C67882B7();
		Global_97950 = unk_0x8C0F17CAC308A14B();
		Global_97949 = unk_0x30DFE1FFD2CC7420();
		Global_97767 = true;
		Global_97772 = unk_0x058EE3447262300D();
		Global_97771 = unk_0x30DFE1FFD2CC7420();
		func_12();
		return;
	}

	num = unk_0x61117764C67882B7();
	num2 = unk_0x8C0F17CAC308A14B();
	num3 = unk_0x30DFE1FFD2CC7420();
	num4 = Global_97951;
	num5 = Global_97950;
	num6 = Global_97949;
	num7 = 0;
	num8 = 0;
	i = 0;
	j = 0;
	num9 = 0;
	num10 = func_9(num5, num4, num2, num);

	if (num10 > 0)
	{
		num9 = 0;
	
		if (num10 > 7)
		{
			i = 0;
			j = 0;
		
			for (i = 0; i < 7; i = i + 1)
			{
				for (j = 0; j < 24; j = j + 1)
				{
					if (!Global_97773[num7 /*25*/][num8] == 0)
					{
						Global_97768 = Global_97768 + 1;
						Global_97770 = Global_97770 - 1;
					}
				
					Global_97773[num7 /*25*/][num8] = 0;
				}
			}
		}
		else if (num10 > 1)
		{
			num9 = num9 + ((num10 - 1) * 24);
		}
	
		num9 = num9 + (24 - num6);
		num9 = num9 + (24 - 24 - num3);
		i = 0;
		num8 = Global_97771;
		num7 = Global_97772;
	
		for (i = 0; i < num9; i = i + 1)
		{
			if (num8 > 23)
			{
				num8 = 0;
				num7 = num7 + 1;
			}
		
			if (num7 > 6)
				num7 = 0;
		
			if (!Global_97773[num7 /*25*/][num8] == 0)
			{
				Global_97768 = Global_97768 + 1;
				Global_97770 = Global_97770 - 1;
			}
		
			Global_97773[num7 /*25*/][num8] = 0;
			num8 = num8 + 1;
		}
	
		Global_97771 = num8 - 1;
		Global_97772 = num7;
	}
	else
	{
		if (num6 > num3)
		{
			Global_97951 = num;
			Global_97950 = num2;
			Global_97949 = num3;
			Global_97772 = unk_0x058EE3447262300D();
			Global_97771 = unk_0x30DFE1FFD2CC7420();
			return;
		}
	
		if (num6 == num3)
		{
			return;
		}
		else
		{
			num9 = num3 - num6;
			i = 0;
			num8 = Global_97771;
			num7 = Global_97772;
		
			for (i = 0; i < num9; i = i + 1)
			{
				if (!Global_97773[num7 /*25*/][num8] == 0)
				{
					Global_97768 = Global_97768 + 1;
					Global_97770 = Global_97770 - 1;
				}
			
				Global_97773[num7 /*25*/][num8] = 0;
				num8 = num8 + 1;
			
				if (num8 > 23)
				{
					num8 = 0;
					num7 = num7 + 1;
				}
			
				if (num7 > 6)
					num7 = 0;
			}
		
			Global_97771 = num8;
			Global_97772 = num7;
		}
	}

	Global_97768 > Global_97769;

	if (num4 == num && num6 == num3 && num5 == num2)
	{
	}
	else
	{
		Global_97951 = num;
		Global_97950 = num2;
		Global_97949 = num3;
	}

	return;
}

int func_9(int iParam0, int iParam1, int iParam2, int iParam3) // Position - 0x712
{
	int i;
	int num;
	int num2;
	int num3;
	int num4;
	int num5;
	int num6;

	i = 0;

	if (!iParam1 == iParam3)
	{
		if (iParam1 < iParam3)
		{
			num = func_10(iParam1) - func_10(iParam1) - iParam0;
			num2 = 0;
		
			if (iParam3 > iParam1 + 1)
			{
				num3 = iParam3 - iParam1;
				num4 = iParam1 + 1;
				i = 0;
			
				for (i = 0; i < num3; i = i + 1)
				{
					if (num4 > 11)
						num4 = 0;
				
					num2 = num2 + func_10(num4);
					num4 = num4 + 1;
				}
			}
		
			num5 = func_10(iParam3) - iParam2;
			num6 = num + num2 + num5;
			return num6;
		}
	}
	else
	{
		if (iParam2 < iParam0)
			return 0;
	
		if (iParam2 == iParam0)
			return 0;
	
		return iParam2 - iParam0;
	}

	return 0;
}

int func_10(int iParam0) // Position - 0x7C5
{
	return func_11(iParam0);
}

int func_11(int iParam0) // Position - 0x7D3
{
	switch (iParam0)
	{
		case 8:
			return 30;
	
		case 3:
			return 30;
	
		case 5:
			return 30;
	
		case 10:
			return 30;
	
		case 1:
			return 28;
	
		default:
		
	}

	return 31;
}

void func_12() // Position - 0x81F
{
	int i;
	int j;

	Global_97771 = 0;
	Global_97772 = 0;
	i = 0;
	j = 0;

	for (i = 0; i < 7; i = i + 1)
	{
		for (j = 0; j < 24; j = j + 1)
		{
			Global_97773[i /*25*/][j] = 0;
		}
	}

	func_13();
	return;
}

void func_13() // Position - 0x86D
{
	Global_97771 = 0;
	Global_97772 = 0;
	Global_97949 = unk_0x30DFE1FFD2CC7420();
	Global_97950 = unk_0x8C0F17CAC308A14B();
	Global_97951 = unk_0x61117764C67882B7();
	return;
}

void func_14() // Position - 0x897
{
	unk_0x675D9C12C73D3DE7();
	return;
}

