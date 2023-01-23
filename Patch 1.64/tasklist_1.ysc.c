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
	var uLocal_18 = 3;
	var uLocal_19 = 0;
	var uLocal_20 = 0;
	var uLocal_21 = 0;
	int iLocal_22 = 0;
	var uLocal_23 = 3;
	var uLocal_24 = 0;
	var uLocal_25 = 0;
	var uLocal_26 = 0;
	int iLocal_27 = 0;
	int iLocal_28 = 0;
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

	if (unk_0x55EEDBBFDC6E810F(2))
		func_11();

	while (true)
	{
		SYSTEM::WAIT(250);
	
		switch (iLocal_27)
		{
			case 0:
				if (uLocal_18[0])
				{
					TEXT_LABEL_ASSIGN_STRING(&Global_22844[1 /*42*/], "CL_C1A" /*Killer photo*/, 16);
					TEXT_LABEL_ASSIGN_STRING(&(Global_22844[1 /*42*/].f_4), "CL_C1A_BR" /*Kill some gang members and take a photo of the corpses.*/, 16);
					Global_22844[1 /*42*/].f_8 = 0;
					Global_22844[1 /*42*/].f_9 = 2;
					TEXT_LABEL_ASSIGN_STRING(&Global_22844[1 /*42*/].f_10[1 /*4*/], "CL_C1A_J1" /*Gang members killed ~1~/~1~*/, 16);
					Global_22844[1 /*42*/].f_37[1] = false;
					Global_22844[1 /*42*/].f_32[1] = 3;
					Global_22844[1 /*42*/].f_27[1] = 0;
					TEXT_LABEL_ASSIGN_STRING(&Global_22844[1 /*42*/].f_10[2 /*4*/], "CL_C1A_J2" /*Photos taken of dead gang members ~1~/~1~*/, 16);
					Global_22844[1 /*42*/].f_37[2] = false;
					Global_22844[1 /*42*/].f_32[2] = 3;
					Global_22844[1 /*42*/].f_27[2] = 0;
				
					for (iLocal_22 = 0; iLocal_22 < Global_22844[1 /*42*/].f_32[1]; iLocal_22 = iLocal_22 + 1)
					{
						Global_32218[iLocal_22] = false;
						Global_32214[iLocal_22] = false;
					}
				
					func_4(1, 1, true, 1);
					func_3("CL_ADDED" /*Job ~a~ added to phone checklist*/, "CL_C1A" /*Killer photo*/, 3000, 1);
					iLocal_27 = 1;
				}
				break;
		
			case 1:
				for (iLocal_22 = 0; iLocal_22 < Global_22844[1 /*42*/].f_32[1]; iLocal_22 = iLocal_22 + 1)
				{
					if (!unk_0x66599E73DBA5A850(unk_0xC1A5EC5C986B98AD()))
					{
						if (unk_0x7DE17ACDD8BA2642(uLocal_23[iLocal_22]))
						{
							if (unk_0x66599E73DBA5A850(uLocal_23[iLocal_22]))
							{
								if (unk_0x7559C38E6535AB89(uLocal_23[iLocal_22], unk_0xC1A5EC5C986B98AD(), 1))
								{
									if (!Global_32214[iLocal_22])
									{
										Global_22844[1 /*42*/].f_27[1] = Global_22844[1 /*42*/].f_27[1] + 1;
										func_2("CL_C1A_J1" /*Gang members killed ~1~/~1~*/, Global_22844[1 /*42*/].f_27[1], Global_22844[1 /*42*/].f_32[1], 2000, 1);
										Global_32214[iLocal_22] = true;
									}
								
									if (unk_0x055111B11E6624FD(uLocal_23[iLocal_22], 0))
									{
										if (!Global_32218[iLocal_22])
										{
											if (unk_0xEB2F93AF244F1AFC(uLocal_23[iLocal_22]) && func_1())
											{
												Global_22844[1 /*42*/].f_27[2] = Global_22844[1 /*42*/].f_27[2] + 1;
												func_2("CL_C1A_J2" /*Photos taken of dead gang members ~1~/~1~*/, Global_22844[1 /*42*/].f_27[2], Global_22844[1 /*42*/].f_32[2], 2000, 1);
												Global_32218[iLocal_22] = true;
											}
										}
									}
								
									if (Global_22844[1 /*42*/].f_27[1] >= Global_22844[1 /*42*/].f_32[1] && Global_22844[1 /*42*/].f_27[2] >= Global_22844[1 /*42*/].f_32[2])
									{
										func_3("CL_COMPLETE" /*~a~ job complete.*/, "CL_C1A" /*Killer photo*/, 3000, 1);
										Global_22844[1 /*42*/].f_8 = 1;
										iLocal_27 = 2;
									}
								}
							}
						}
					}
				}
				break;
		
			case 2:
				break;
		}
	
		SYSTEM::WAIT(250);
	
		switch (iLocal_28)
		{
			case 0:
				if (uLocal_18[1])
				{
					TEXT_LABEL_ASSIGN_STRING(&Global_22844[2 /*42*/], "CL_C1B" /*Bike Pro*/, 16);
					TEXT_LABEL_ASSIGN_STRING(&(Global_22844[2 /*42*/].f_4), "CL_C1B_BR" /*Perform various bike stunts.*/, 16);
					Global_22844[2 /*42*/].f_8 = 0;
					Global_22844[2 /*42*/].f_9 = 3;
					TEXT_LABEL_ASSIGN_STRING(&Global_22844[2 /*42*/].f_10[1 /*4*/], "CL_C1B_J1" /*Hold a wheelie for 200m without crashing.*/, 16);
					Global_22844[2 /*42*/].f_37[1] = false;
					Global_22844[2 /*42*/].f_32[1] = -1;
					Global_22844[2 /*42*/].f_27[1] = -1;
					TEXT_LABEL_ASSIGN_STRING(&Global_22844[2 /*42*/].f_10[2 /*4*/], "CL_C1B_J2" /*Successfully perform a stoppie.*/, 16);
					Global_22844[2 /*42*/].f_37[2] = false;
					Global_22844[2 /*42*/].f_32[2] = -1;
					Global_22844[2 /*42*/].f_27[2] = -1;
					TEXT_LABEL_ASSIGN_STRING(&Global_22844[2 /*42*/].f_10[3 /*4*/], "CL_C1B_J3" /*Perform a 360 flip on a bike.*/, 16);
					Global_22844[2 /*42*/].f_37[3] = false;
					Global_22844[2 /*42*/].f_32[3] = -1;
					Global_22844[2 /*42*/].f_27[3] = -1;
					func_4(136, 2, true, 1);
					func_3("CL_ADDED" /*Job ~a~ added to phone checklist*/, "CL_C1B" /*Bike Pro*/, 3000, 1);
					iLocal_28 = 1;
				}
				break;
		
			case 1:
				!Global_22844[2 /*42*/].f_37[1];
				!Global_22844[2 /*42*/].f_37[2];
				!Global_22844[2 /*42*/].f_37[3];
			
				if (Global_22844[2 /*42*/].f_37[1] == true && Global_22844[2 /*42*/].f_37[2] == true && Global_22844[2 /*42*/].f_37[3] == true)
				{
					func_3("CL_COMPLETE" /*~a~ job complete.*/, "CL_C1B" /*Bike Pro*/, 3000, 1);
					Global_22844[2 /*42*/].f_8 = 1;
					iLocal_28 = 2;
				}
				break;
		
			case 2:
				break;
		}
	}

	return;
}

int func_1() // Position - 0x438
{
	if (Global_22761)
		return 1;

	return 0;
}

void func_2(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4) // Position - 0x44E
{
	iParam4 = iParam4;
	unk_0x7FC9F66A5DE18E09(sParam0);
	unk_0x64C50E40AA09A6B5(iParam1);
	unk_0x64C50E40AA09A6B5(iParam2);
	unk_0xAC8CD22C06543F95(iParam3, 0);
	return;
}

void func_3(char* sParam0, char* sParam1, int iParam2, int iParam3) // Position - 0x473
{
	iParam3 = iParam3;
	unk_0x7FC9F66A5DE18E09(sParam0);
	unk_0x48849374B34BB7B9(sParam1);
	unk_0xAC8CD22C06543F95(iParam2, 0);
	return;
}

int func_4(int iParam0, int iParam1, BOOL bParam2, int iParam3) // Position - 0x492
{
	if (func_10())
		return 0;

	if (func_5(iParam0, iParam1, bParam2, iParam3) == 1)
		return 1;

	return 0;
}

int func_5(int iParam0, int iParam1, BOOL bParam2, int iParam3) // Position - 0x4BD
{
	if (unk_0x24B651D85CCE5EB4(joaat("appsidetask")) > 0)
		return 0;

	if (func_8() == 0)
	{
		func_7();
		return 0;
	}

	func_6(Global_22843);
	Global_23013[Global_22843 /*9*/].f_1 = iParam1;
	Global_23013[Global_22843 /*9*/] = iParam0;

	if (iParam3 == 0)
	{
	}
	else
	{
		Global_23013[Global_22843 /*9*/].f_8 = iParam3;
	}

	bParam2;
	return 1;
}

void func_6(int iParam0) // Position - 0x521
{
	var unk;
	var unk2;
	var unk3;
	var unk4;
	int num;
	var unk5;

	unk = unk_0x731F95B6458DCF80();
	unk2 = unk_0x77BBAAED3E25322C();
	unk3 = unk_0x30DFE1FFD2CC7420();
	unk4 = unk_0x8C0F17CAC308A14B();
	num = unk_0x61117764C67882B7() + 1;
	unk5 = unk_0x367F557725B53815();
	Global_23013[iParam0 /*9*/].f_2 = unk;
	Global_23013[iParam0 /*9*/].f_2.f_1 = unk2;
	Global_23013[iParam0 /*9*/].f_2.f_2 = unk3;
	Global_23013[iParam0 /*9*/].f_2.f_3 = unk4;
	Global_23013[iParam0 /*9*/].f_2.f_4 = num;
	Global_23013[iParam0 /*9*/].f_2.f_5 = unk5;
	return;
}

void func_7() // Position - 0x59B
{
	return;
}

int func_8() // Position - 0x5A3
{
	int i;

	for (i = 0; i < 2; i = i + 1)
	{
		if (Global_23013[i /*9*/].f_8 == 0)
		{
			Global_22843 = i;
			return 1;
		}
	}

	i = 0;
	Global_22843 = 3;
	Global_23013[Global_22843 /*9*/].f_2 = -1;
	Global_23013[Global_22843 /*9*/].f_2.f_1 = 0;
	Global_23013[Global_22843 /*9*/].f_2.f_2 = 0;
	Global_23013[Global_22843 /*9*/].f_2.f_3 = 0;
	Global_23013[Global_22843 /*9*/].f_2.f_5 = 99999;

	while (i < 2)
	{
		if (Global_23013[i /*9*/].f_8 == 0 || Global_23013[i /*9*/].f_8 == 1)
			if (!func_9(Global_23013[i /*9*/].f_2, Global_23013[Global_22843 /*9*/].f_2))
				Global_22843 = i;
	
		i = i + 1;
	}

	if (Global_22843 == 3)
		return 0;

	return 1;
}

BOOL func_9(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, int iParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11) // Position - 0x67D
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

BOOL func_10() // Position - 0x768
{
	if (Global_20383.f_1 == 1 || Global_20383.f_1 == 0)
		return true;

	return false;
}

void func_11() // Position - 0x78F
{
	unk_0x675D9C12C73D3DE7();
	return;
}

