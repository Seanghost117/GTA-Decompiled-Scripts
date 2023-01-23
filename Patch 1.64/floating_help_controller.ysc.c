void main() // Position - 0x0
{
	unk_0x389D5B1C24A046B5();

	while (true)
	{
		SYSTEM::WAIT(0);
		func_1();
	}

	return;
}

void func_1() // Position - 0x1C
{
	int i;
	int num;

	i = 0;

	for (i = 0; i < Global_112300; i = i + 1)
	{
		if (Global_112300[i /*28*/].f_21 != 0)
		{
			num = i;
		
			if (unk_0xA5E11AF0A2B928C1() > Global_112300[i /*28*/].f_21 && Global_112300[i /*28*/].f_21 != -1)
			{
				if (func_3(i))
					unk_0x4F6F113654DD2FF9(num, 0);
			
				func_2(i);
			}
			else if (func_3(i))
			{
				if (Global_112300[i /*28*/].f_21 != -1)
				{
					if (!IS_BIT_SET(Global_112300[i /*28*/].f_27, 0))
					{
						Global_112300[i /*28*/].f_21 = Global_112300[i /*28*/].f_21 + SYSTEM::ROUND(unk_0x290D4E218346D595() * 1000f);
					
						if (unk_0xD7D4486FB7C71841(num))
							unk_0xECDAB41968FF21A8(&(Global_112300[i /*28*/].f_27), 0);
					}
				}
			
				if (Global_112300[i /*28*/].f_24.f_2 != 9999f)
					if (Global_112300[i /*28*/].f_23 != 0)
						if (!unk_0x055111B11E6624FD(Global_112300[i /*28*/].f_23, 0))
							if (!IS_BIT_SET(Global_112300[i /*28*/].f_27, 3))
								unk_0x4AF5998734141E4B(num, unk_0x7394CB479CCA24AF(Global_112300[i /*28*/].f_23, Global_112300[i /*28*/].f_24));
							else
								unk_0xCFF918A241935CF9(num, Global_112300[i /*28*/].f_23, Global_112300[i /*28*/].f_24, Global_112300[i /*28*/].f_24.f_1);
					else if (Global_112300[i /*28*/].f_24 != 0f || Global_112300[i /*28*/].f_24.f_1 != 0f || Global_112300[i /*28*/].f_24.f_2 != 0f)
						unk_0x4AF5998734141E4B(num, Global_112300[i /*28*/].f_24);
				else
					unk_0xD71A8A9B6EA81C9A(num, Global_112300[i /*28*/].f_24, Global_112300[i /*28*/].f_24.f_1);
			}
			else if (unk_0xA5E11AF0A2B928C1() - Global_112300[i /*28*/].f_22 > 1000)
			{
				func_2(i);
			}
		}
	}

	return;
}

void func_2(int iParam0) // Position - 0x204
{
	Global_112300[iParam0 /*28*/].f_21 = 0;
	TEXT_LABEL_ASSIGN_STRING(&Global_112300[iParam0 /*28*/], "", 16);
	TEXT_LABEL_ASSIGN_STRING(&(Global_112300[iParam0 /*28*/].f_4), "", 64);
	Global_112300[iParam0 /*28*/].f_23 = 0;
	Global_112300[iParam0 /*28*/].f_24 = { 0f, 0f, 0f };
	Global_112300[iParam0 /*28*/].f_27 = 0;
	Global_112300[iParam0 /*28*/].f_20 = 0;
	Global_112300[iParam0 /*28*/].f_22 = 0;
	return;
}

BOOL func_3(int iParam0) // Position - 0x26C
{
	int num;

	num = iParam0;

	if (!unk_0x4310A0DB886F9FED(&Global_112300[iParam0 /*28*/], "") && !unk_0xB71C73D0269747D5(&Global_112300[iParam0 /*28*/]))
		if (IS_BIT_SET(Global_112300[iParam0 /*28*/].f_27, 1))
			if (IS_BIT_SET(Global_112300[iParam0 /*28*/].f_27, 2))
				return func_7(num, &Global_112300[iParam0 /*28*/], &(Global_112300[iParam0 /*28*/].f_4), Global_112300[iParam0 /*28*/].f_20);
			else
				return func_6(num, &Global_112300[iParam0 /*28*/], &(Global_112300[iParam0 /*28*/].f_4));
		else if (IS_BIT_SET(Global_112300[iParam0 /*28*/].f_27, 2))
			return func_5(num, &Global_112300[iParam0 /*28*/], Global_112300[iParam0 /*28*/].f_20);
		else
			return func_4(num, &Global_112300[iParam0 /*28*/]);

	return false;
}

BOOL func_4(int iParam0, char* sParam1) // Position - 0x33F
{
	unk_0x56C9BC27C0FF68D7(sParam1);
	return unk_0x6A92D111B5409879(1 + iParam0);
}

BOOL func_5(int iParam0, char* sParam1, var uParam2) // Position - 0x355
{
	unk_0x56C9BC27C0FF68D7(sParam1);
	unk_0x64C50E40AA09A6B5(uParam2);
	return unk_0x6A92D111B5409879(1 + iParam0);
}

BOOL func_6(int iParam0, char* sParam1, char* sParam2) // Position - 0x371
{
	unk_0x56C9BC27C0FF68D7(sParam1);
	unk_0x48849374B34BB7B9(sParam2);
	return unk_0x6A92D111B5409879(1 + iParam0);
}

BOOL func_7(int iParam0, char* sParam1, char* sParam2, var uParam3) // Position - 0x38D
{
	unk_0x56C9BC27C0FF68D7(sParam1);
	unk_0x48849374B34BB7B9(sParam2);
	unk_0x64C50E40AA09A6B5(uParam3);
	return unk_0x6A92D111B5409879(1 + iParam0);
}

