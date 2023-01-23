void __EntryFunction__()
{
	unk_0xDB4E5F36ED3505EE();
	while (true)
	{
		wait(0);
		func_1();
	}
}

void func_1()
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_110510)
	{
		if (Global_110510[iVar0 /*28*/].f_21 != 0)
		{
			iVar1 = iVar0;
			if (unk_0x578C4EF320340AF7() > Global_110510[iVar0 /*28*/].f_21 && Global_110510[iVar0 /*28*/].f_21 != -1)
			{
				if (func_3(iVar0))
				{
					unk_0x411C0BFEF1468390(iVar1, 0);
				}
				func_2(iVar0);
			}
			else if (func_3(iVar0))
			{
				if (Global_110510[iVar0 /*28*/].f_21 != -1)
				{
					if (!unk_0xCE990E643CD9D0E5(Global_110510[iVar0 /*28*/].f_27, 0))
					{
						Global_110510[iVar0 /*28*/].f_21 = (Global_110510[iVar0 /*28*/].f_21 + round((unk_0x9E3DAF75EFC49F5B() * 1000f)));
						if (unk_0xEA5C06E78B11E2A4(iVar1))
						{
							unk_0xBE20AB8238688965(&(Global_110510[iVar0 /*28*/].f_27), 0);
						}
					}
				}
				if (Global_110510[iVar0 /*28*/].f_24.f_2 != 9999f)
				{
					if (Global_110510[iVar0 /*28*/].f_23 != 0)
					{
						if (!unk_0xA59F96B50B97E63C(Global_110510[iVar0 /*28*/].f_23, 0))
						{
							if (!unk_0xCE990E643CD9D0E5(Global_110510[iVar0 /*28*/].f_27, 3))
							{
								unk_0xF6C3451BC2E8AAA9(iVar1, unk_0x7EC595B99EA7C4B1(Global_110510[iVar0 /*28*/].f_23, Global_110510[iVar0 /*28*/].f_24));
							}
							else
							{
								unk_0x92D1D6E0F6C60723(iVar1, Global_110510[iVar0 /*28*/].f_23, Global_110510[iVar0 /*28*/].f_24, Global_110510[iVar0 /*28*/].f_24.f_1);
							}
						}
					}
					else if ((Global_110510[iVar0 /*28*/].f_24 != 0f || Global_110510[iVar0 /*28*/].f_24.f_1 != 0f) || Global_110510[iVar0 /*28*/].f_24.f_2 != 0f)
					{
						unk_0xF6C3451BC2E8AAA9(iVar1, Global_110510[iVar0 /*28*/].f_24);
					}
				}
				else
				{
					unk_0x8EFDBA1130E8B5F4(iVar1, Global_110510[iVar0 /*28*/].f_24, Global_110510[iVar0 /*28*/].f_24.f_1);
				}
			}
			else if ((unk_0x578C4EF320340AF7() - Global_110510[iVar0 /*28*/].f_22) > 1000)
			{
				func_2(iVar0);
			}
		}
		iVar0++;
	}
}

void func_2(int iParam0)
{
	Global_110510[iParam0 /*28*/].f_21 = 0;
	StringCopy(&(Global_110510[iParam0 /*28*/]), "", 16);
	StringCopy(&(Global_110510[iParam0 /*28*/].f_4), "", 64);
	Global_110510[iParam0 /*28*/].f_23 = 0;
	Global_110510[iParam0 /*28*/].f_24 = { 0f, 0f, 0f };
	Global_110510[iParam0 /*28*/].f_27 = 0;
	Global_110510[iParam0 /*28*/].f_20 = 0;
	Global_110510[iParam0 /*28*/].f_22 = 0;
}

int func_3(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (!unk_0xF005CCA4263DF67F(&(Global_110510[iParam0 /*28*/]), "") && !unk_0x211E6DB3335430B4(&(Global_110510[iParam0 /*28*/])))
	{
		if (unk_0xCE990E643CD9D0E5(Global_110510[iParam0 /*28*/].f_27, 1))
		{
			if (unk_0xCE990E643CD9D0E5(Global_110510[iParam0 /*28*/].f_27, 2))
			{
				return func_7(iVar0, &(Global_110510[iParam0 /*28*/]), &(Global_110510[iParam0 /*28*/].f_4), Global_110510[iParam0 /*28*/].f_20);
			}
			else
			{
				return func_6(iVar0, &(Global_110510[iParam0 /*28*/]), &(Global_110510[iParam0 /*28*/].f_4));
			}
		}
		else if (unk_0xCE990E643CD9D0E5(Global_110510[iParam0 /*28*/].f_27, 2))
		{
			return func_5(iVar0, &(Global_110510[iParam0 /*28*/]), Global_110510[iParam0 /*28*/].f_20);
		}
		else
		{
			return func_4(iVar0, &(Global_110510[iParam0 /*28*/]));
		}
	}
	return 0;
}

bool func_4(int iParam0, char* sParam1)
{
	unk_0x69476B1CA6A9FF80(sParam1);
	return unk_0x1A3A9FFE5CA6F64B((1 + iParam0));
}

bool func_5(int iParam0, char* sParam1, int iParam2)
{
	unk_0x69476B1CA6A9FF80(sParam1);
	unk_0x42710E9E08FA375A(iParam2);
	return unk_0x1A3A9FFE5CA6F64B((1 + iParam0));
}

bool func_6(int iParam0, char* sParam1, int iParam2)
{
	unk_0x69476B1CA6A9FF80(sParam1);
	unk_0x6A826E35A3096ED0(iParam2);
	return unk_0x1A3A9FFE5CA6F64B((1 + iParam0));
}

bool func_7(int iParam0, char* sParam1, int iParam2, int iParam3)
{
	unk_0x69476B1CA6A9FF80(sParam1);
	unk_0x6A826E35A3096ED0(iParam2);
	unk_0x42710E9E08FA375A(iParam3);
	return unk_0x1A3A9FFE5CA6F64B((1 + iParam0));
}

