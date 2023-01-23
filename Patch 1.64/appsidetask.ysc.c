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
	var uLocal_18 = 4;
	var uLocal_19 = 0;
	var uLocal_20 = 0;
	var uLocal_21 = 0;
	var uLocal_22 = 0;
	int iLocal_23 = 0;
	int iLocal_24 = 0;
	int iLocal_25 = 0;
	int iLocal_26 = 0;
	float fLocal_27 = 0f;
	float fLocal_28 = 0f;
	float fLocal_29 = 0f;
	float fLocal_30 = 0f;
	BOOL bLocal_31 = 0;
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
	fLocal_27 = 0.72f;
	fLocal_28 = 0.42f;
	fLocal_29 = 0f;
	fLocal_30 = 0f;
	unk_0x389D5B1C24A046B5();
	Global_22791 = 0;
	Global_20583 = 0;
	func_18();
	Global_20383.f_1 = 7;
	func_17(Global_20364, "DISPLAY_VIEW", 14f, -1082130432, -1082130432, -1082130432, -1082130432);
	func_16(Global_20364, "SET_HEADER", "CELL_4" /*Sidetasks*/, 0, 0, 0, 0);

	while (true)
	{
		SYSTEM::WAIT(0);
	
		if (Global_20383.f_1 != 9)
		{
			switch (Global_20383.f_1)
			{
				case 7:
					if (Global_22791 == 0)
					{
						func_15();
						func_14();
						func_11();
					}
					break;
			
				case 8:
					if (Global_22791 == 1)
						func_5();
					break;
			
				case 3:
					unk_0x675D9C12C73D3DE7();
					break;
			
				default:
					break;
			}
		
			if (Global_22791 == 0)
			{
				if (func_4())
					func_3();
			}
			else if (func_2(2, Global_20351, 0))
			{
				Global_20361 = true;
				Global_22791 = 0;
				Global_20383.f_1 = 7;
				func_18();
				func_17(Global_20364, "DISPLAY_VIEW", 14f, -1082130432, -1082130432, -1082130432, -1082130432);
				func_16(Global_20364, "SET_HEADER", "CELL_4" /*Sidetasks*/, 0, 0, 0, 0);
			}
		}
	
		if (func_1())
			func_3();
	}

	return;
}

BOOL func_1() // Position - 0x163
{
	if (Global_20383.f_1 == 1 || Global_20383.f_1 == 3 || Global_20383.f_1 == 0 || Global_20327 == 1)
	{
		Global_20370 = 1;
		return true;
	}

	return false;
}

BOOL func_2(int iParam0, int iParam1, int iParam2) // Position - 0x1A6
{
	if (unk_0x87644B1F984197FE(iParam0, iParam1) || iParam2 == 1 && unk_0xE665ABCFC5784C35(iParam0, iParam1))
	{
		if (unk_0xCC17806DB0C41C19())
			if (unk_0x6C75193377D3CE17() == 0 || unk_0xEBDA168F3804CE1F() && unk_0x42AAFCB5B7854AA9(2))
				return false;
	
		if (unk_0xFEE065E56A9BEF3F() || unk_0x47F8B78DC1737D5C())
			return false;
		else
			return true;
	}

	return false;
}

void func_3() // Position - 0x218
{
	unk_0x675D9C12C73D3DE7();
	return;
}

BOOL func_4() // Position - 0x224
{
	if (Global_8859 == 1 || Global_20383.f_1 < 7)
	{
		Global_20370 = 1;
		return true;
	}

	return false;
}

void func_5() // Position - 0x24D
{
	unk_0xD88E9AF5626B0121(0.824f, 0.5f, 0.253f, 0.313f, 0, 0, 0, 155, 0);
	func_6();
	return;
}

void func_6() // Position - 0x277
{
	int i;

	fLocal_29 = fLocal_27;
	fLocal_30 = fLocal_28;
	func_10(255, 255, 255, 205);
	func_9();
	func_8(fLocal_29, fLocal_30, &(Global_2028[Global_23013[iLocal_25 /*9*/] /*29*/].f_3), 0);
	fLocal_29 = fLocal_29 + 0.07f;
	func_10(255, 255, 255, 205);

	if (Global_23013[iLocal_25 /*9*/].f_2.f_1 < 10)
		func_7(fLocal_29, fLocal_30, "CELL_506" /*~1~:0~1~*/, Global_23013[iLocal_25 /*9*/].f_2.f_2, Global_23013[iLocal_25 /*9*/].f_2.f_1);
	else
		func_7(fLocal_29, fLocal_30, "CELL_503" /*~1~:~1~*/, Global_23013[iLocal_25 /*9*/].f_2.f_2, Global_23013[iLocal_25 /*9*/].f_2.f_1);

	fLocal_29 = fLocal_29 + 0.07f;
	func_10(255, 255, 255, 205);
	func_7(fLocal_29, fLocal_30, "CELL_505" /*~1~/~1~*/, Global_23013[iLocal_25 /*9*/].f_2.f_3, Global_23013[iLocal_25 /*9*/].f_2.f_4);
	fLocal_29 = fLocal_27;
	func_10(255, 255, 255, 205);
	fLocal_30 = fLocal_30 + 0.02f;

	if (Global_22844[Global_23013[iLocal_25 /*9*/].f_1 /*42*/].f_8 == 0)
		func_9();

	unk_0xD2087B0A3696F221(0f, 0.93f);
	func_8(fLocal_29, fLocal_30, &(Global_22844[Global_23013[iLocal_25 /*9*/].f_1 /*42*/].f_4), 0);
	fLocal_30 = fLocal_30 + 0.07f;

	for (i = 1; i <= Global_22844[Global_23013[iLocal_25 /*9*/].f_1 /*42*/].f_9; i = i + 1)
	{
		func_10(255, 255, 255, 255);
		fLocal_30 = fLocal_30 + 0.04f;
	
		if (Global_22844[Global_23013[iLocal_25 /*9*/].f_1 /*42*/].f_32[i] == -1)
			func_8(fLocal_29, fLocal_30, &Global_22844[Global_23013[iLocal_25 /*9*/].f_1 /*42*/].f_10[i /*4*/], 0);
		else
			func_7(fLocal_29, fLocal_30, &Global_22844[Global_23013[iLocal_25 /*9*/].f_1 /*42*/].f_10[i /*4*/], Global_22844[Global_23013[iLocal_25 /*9*/].f_1 /*42*/].f_27[i], Global_22844[Global_23013[iLocal_25 /*9*/].f_1 /*42*/].f_32[i]);
	}

	return;
}

void func_7(float fParam0, float fParam1, char* sParam2, var uParam3, int iParam4) // Position - 0x458
{
	unk_0x1AFC19685A6AF4A9(sParam2);
	unk_0x64C50E40AA09A6B5(uParam3);
	unk_0x64C50E40AA09A6B5(iParam4);
	unk_0x8E03B3A2F624EF8B(fParam0, fParam1, 0);
	return;
}

void func_8(float fParam0, float fParam1, char* sParam2, int iParam3) // Position - 0x47B
{
	unk_0x1AFC19685A6AF4A9(sParam2);
	unk_0x8E03B3A2F624EF8B(fParam0, fParam1, iParam3);
	return;
}

void func_9() // Position - 0x493
{
	unk_0xF4621DEB617A5113(0.4f, 0.4f);
	unk_0x4EC989440A6E11DD(255, 128, 0, 255);
	unk_0xD03168FF6874527E(1, 0, 78, 255, 255);
	return;
}

void func_10(int iParam0, int iParam1, int iParam2, int iParam3) // Position - 0x4BD
{
	unk_0xF4621DEB617A5113(0.3f, 0.3f);
	unk_0xD03168FF6874527E(0, 0, 0, 0, 0);
	unk_0x7CC33148FD727621(1, 0, 0, 0, 205);
	unk_0x64A5F6639CD1645D(1);
	unk_0x3EACBAAEB55B5131(0);
	unk_0x4EC989440A6E11DD(iParam0, iParam1, iParam2, iParam3);
	return;
}

void func_11() // Position - 0x4FC
{
	if (func_2(2, Global_20352, 0))
	{
		iLocal_25 = uLocal_18[iLocal_24];
		Global_22791 = 1;
		func_12(Global_20364, "SET_DATA_SLOT", 15f, 0f, -1f, -1f, -1f, "CELL_287" /*Send Photo(s)*/, "CELL_280" /*Take Photo*/, "CELL_285" /*Move*/, "CELL_284" /*Zoom*/, 0);
		func_17(Global_20364, "DISPLAY_VIEW", 15f, -1082130432, -1082130432, -1082130432, -1082130432);
		func_16(Global_20364, "SET_HEADER", "CELL_4" /*Sidetasks*/, 0, 0, 0, 0);
		Global_20383.f_1 = 8;
		Global_22791 = 1;
	}

	return;
}

void func_12(int iParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6, char* sParam7, char* sParam8, char* sParam9, char* sParam10, char* sParam11) // Position - 0x57A
{
	unk_0x9FD96C5DE6EDFC15(iParam0, sParam1);
	unk_0xC6A3EF6C4A3412C1(SYSTEM::ROUND(fParam2));

	if (fParam3 != -1f)
		unk_0xC6A3EF6C4A3412C1(SYSTEM::ROUND(fParam3));

	if (fParam4 != -1f)
		unk_0xC6A3EF6C4A3412C1(SYSTEM::ROUND(fParam4));

	if (fParam5 != -1f)
		unk_0xC6A3EF6C4A3412C1(SYSTEM::ROUND(fParam5));

	if (fParam6 != -1f)
		unk_0xC6A3EF6C4A3412C1(SYSTEM::ROUND(fParam6));

	if (!unk_0x2AC37494BBF1DB16(sParam7))
		func_13(sParam7);

	if (!unk_0x2AC37494BBF1DB16(sParam8))
		func_13(sParam8);

	if (!unk_0x2AC37494BBF1DB16(sParam9))
		func_13(sParam9);

	if (!unk_0x2AC37494BBF1DB16(sParam10))
		func_13(sParam10);

	if (!unk_0x2AC37494BBF1DB16(sParam11))
		func_13(sParam11);

	unk_0xAE3413B0654A0035();
	return;
}

void func_13(char* sParam0) // Position - 0x62D
{
	unk_0x2AF11E92DE43CDE3(sParam0);
	unk_0xF8FCA9E7130CE1C8();
	return;
}

void func_14() // Position - 0x63F
{
	if (bLocal_31)
		if (SYSTEM::TIMERA() > 50)
			bLocal_31 = false;

	if (unk_0x42AAFCB5B7854AA9(2))
	{
		if (func_2(2, 181, 0))
			if (iLocal_24 > 0)
				iLocal_24 = iLocal_24 - 1;
	
		if (func_2(2, 180, 0))
		{
			iLocal_24 = iLocal_24 + 1;
		
			if (iLocal_24 == iLocal_23)
				iLocal_24 = 0;
		}
	}

	if (bLocal_31 == false)
	{
		if (func_2(2, Global_20359, 0))
		{
			if (iLocal_24 > 0)
				iLocal_24 = iLocal_24 - 1;
		
			bLocal_31 = true;
			SYSTEM::SETTIMERA(0);
		}
	
		if (func_2(2, Global_20360, 0))
		{
			iLocal_24 = iLocal_24 + 1;
		
			if (iLocal_24 == iLocal_23)
				iLocal_24 = 0;
		
			bLocal_31 = true;
			SYSTEM::SETTIMERA(0);
		}
	}

	return;
}

void func_15() // Position - 0x6DC
{
	int num;

	num = 0;
	fLocal_29 = fLocal_27;
	fLocal_30 = fLocal_28;
	iLocal_26 = iLocal_23;

	while (num < iLocal_26)
	{
		func_10(255, 255, 255, 205);
	
		if (num == iLocal_24)
			func_9();
	
		func_8(fLocal_29, fLocal_30, &(Global_2028[Global_23013[uLocal_18[num] /*9*/] /*29*/].f_3), 0);
		fLocal_29 = fLocal_29 + 0.07f;
		func_10(255, 255, 255, 205);
	
		if (Global_23013[uLocal_18[num] /*9*/].f_2.f_1 < 10)
			func_7(fLocal_29, fLocal_30, "CELL_506" /*~1~:0~1~*/, Global_23013[uLocal_18[num] /*9*/].f_2.f_2, Global_23013[uLocal_18[num] /*9*/].f_2.f_1);
		else
			func_7(fLocal_29, fLocal_30, "CELL_503" /*~1~:~1~*/, Global_23013[uLocal_18[num] /*9*/].f_2.f_2, Global_23013[uLocal_18[num] /*9*/].f_2.f_1);
	
		fLocal_29 = fLocal_29 + 0.07f;
		func_10(255, 255, 255, 205);
		func_7(fLocal_29, fLocal_30, "CELL_505" /*~1~/~1~*/, Global_23013[uLocal_18[num] /*9*/].f_2.f_3, Global_23013[uLocal_18[num] /*9*/].f_2.f_4);
		fLocal_29 = fLocal_27;
		func_10(255, 255, 255, 205);
	
		if (num == iLocal_24)
			func_9();
	
		fLocal_30 = fLocal_30 + 0.02f;
		unk_0xD2087B0A3696F221(0f, 0.93f);
		func_8(fLocal_29, fLocal_30, &Global_22844[Global_23013[uLocal_18[num] /*9*/].f_1 /*42*/], 0);
		fLocal_30 = fLocal_30 + 0.05f;
		num = num + 1;
	}

	return;
}

void func_16(int iParam0, char* sParam1, char* sParam2, char* sParam3, char* sParam4, char* sParam5, char* sParam6) // Position - 0x83F
{
	unk_0x9FD96C5DE6EDFC15(iParam0, sParam1);
	func_13(sParam2);

	if (!unk_0x2AC37494BBF1DB16(sParam3))
		func_13(sParam3);

	if (!unk_0x2AC37494BBF1DB16(sParam4))
		func_13(sParam4);

	if (!unk_0x2AC37494BBF1DB16(sParam5))
		func_13(sParam5);

	if (!unk_0x2AC37494BBF1DB16(sParam6))
		func_13(sParam6);

	unk_0xAE3413B0654A0035();
	return;
}

void func_17(int iParam0, char* sParam1, float fParam2, int iParam3, int iParam4, int iParam5, int iParam6) // Position - 0x89A
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

void func_18() // Position - 0x8FD
{
	var unk;
	int i;
	int num;
	int num2;

	iLocal_23 = 0;
	unk = 4;

	for (i = 0; i < 4; i = i + 1)
	{
		num = 0;
		num2 = 3;
		Global_23013[num2 /*9*/].f_2 = -1;
		Global_23013[num2 /*9*/].f_2.f_1 = 0;
		Global_23013[num2 /*9*/].f_2.f_2 = 0;
		Global_23013[num2 /*9*/].f_2.f_3 = 0;
		Global_23013[num2 /*9*/].f_2.f_5 = 0;
	
		while (num < 4)
		{
			if (unk[num] == 0)
				if (Global_23013[num /*9*/].f_8 != 0)
					if (func_19(Global_23013[num /*9*/].f_2, Global_23013[num2 /*9*/].f_2))
						num2 = num;
		
			num = num + 1;
		}
	
		uLocal_18[i] = num2;
		unk[num2] = 1;
	
		if (Global_23013[i /*9*/].f_8 != 0)
			iLocal_23 = iLocal_23 + 1;
	}

	func_12(Global_20364, "SET_DATA_SLOT", 14f, 0f, 25f, -1f, -1f, "CELL_287" /*Send Photo(s)*/, "CELL_280" /*Take Photo*/, 0, 0, 0);
	return;
}

BOOL func_19(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, int iParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11) // Position - 0x9E8
{
	int num;
	int num2;
	int num3;
	int num4;

	if (iParam0.f_5 < iParam6.f_5)
		return false;

	if (iParam0.f_5 > iParam6.f_5)
		return true;

	if (iParam0.f_5 == iParam6.f_5)
	{
		if (iParam0.f_4 < iParam6.f_4)
			return false;
	
		if (iParam0.f_4 > iParam6.f_4)
			return true;
	
		if (iParam0.f_4 == iParam6.f_4)
		{
			num = iParam0;
			num.f_1 = iParam0.f_1 * 60;
			num.f_2 = iParam0.f_2 * 3600;
			num.f_3 = iParam0.f_3 * 86400;
			num3 = num + num.f_1 + num.f_2 + num.f_3;
			num2 = iParam6;
			num2.f_1 = iParam6.f_1 * 60;
			num2.f_2 = iParam6.f_2 * 3600;
			num2.f_3 = iParam6.f_3 * 86400;
			num4 = num2 + num2.f_1 + num2.f_2 + num2.f_3;
		
			if (num3 > num4 || num3 == num4)
				return true;
			else
				return false;
		}
	}

	return false;
}

