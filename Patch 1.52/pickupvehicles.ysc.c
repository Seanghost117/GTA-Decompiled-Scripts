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
	char* sLocal_20 = NULL;
	float fLocal_21 = 0f;
	var uLocal_22 = 0;
	var uLocal_23 = 0;
	var uLocal_24 = 0;
	float fLocal_25 = 0f;
	float fLocal_26 = 0f;
	var uLocal_27 = 0;
	int iLocal_28 = 0;
	int iLocal_29 = 0;
	int iLocal_30 = 0;
	int iLocal_31 = 0;
	int iLocal_32 = 0;
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
	sLocal_20 = "NULL";
	fLocal_21 = 0f;
	fLocal_25 = -0.0375f;
	fLocal_26 = 0.17f;
	func_4(21);
	if (unk_0xED06FD5709A59F02(18))
	{
		if (unk_0xEC7DB118B815F890() == 16)
		{
			func_3(21);
		}
		func_2();
	}
	while (true)
	{
		wait(0);
		if (unk_0x7B70881748D166CD(joaat("docks_setup")) == 0)
		{
			if (unk_0x5A228A6A51E757C8(unk_0x460153A63B9477BC()))
			{
				if (unk_0x47DBF174A0CB9D55(unk_0x9B0761B4C3EB8BC7(), false))
				{
					iLocal_28 = unk_0xA5D5B1042E8F47BD(unk_0x9B0761B4C3EB8BC7(), false);
				}
				else
				{
					iLocal_28 = 0;
				}
			}
			if (unk_0xAE06B9E39EBDE049(iLocal_28))
			{
				if (unk_0x80FF6C016CDB0FAF(iLocal_28, 0))
				{
					if (unk_0x68AEFA37A65085FD(iLocal_28, joaat("handler")))
					{
						unk_0x26A60F42A1132477(0, 51);
						if (!unk_0x9D874ED5EF68A3BA(iLocal_28))
						{
							if (iLocal_32 == 0)
							{
								if (!unk_0xAE06B9E39EBDE049(iLocal_29) || (unk_0xAE06B9E39EBDE049(iLocal_29) && unk_0x5BBA0055476D633A(unk_0x3E4D3CCC220BDFB1(iLocal_28, true), 15f, joaat("prop_contr_03b_ld"), 1, 0, 1) != iLocal_29))
								{
									iLocal_29 = unk_0x5BBA0055476D633A(unk_0x3E4D3CCC220BDFB1(iLocal_28, true), 15f, joaat("prop_contr_03b_ld"), 1, 0, 1);
								}
								if (unk_0xAE06B9E39EBDE049(iLocal_29))
								{
									if (func_1(&iLocal_30, 1000))
									{
										if (unk_0x22838120D4A28A5E(iLocal_28, iLocal_29))
										{
											if (unk_0x1BD7199394D7F19A(0, 51))
											{
												unk_0x9F6A708D69B3286D(iLocal_28, iLocal_29);
												iLocal_31 = 1;
												iLocal_32 = 1;
											}
										}
									}
								}
							}
						}
						else
						{
							if (iLocal_31 == 1)
							{
								iLocal_30 = unk_0x578C4EF320340AF7();
								iLocal_31 = 0;
								iLocal_32 = 0;
							}
							if (unk_0x1BD7199394D7F19A(0, 51))
							{
							}
						}
					}
				}
			}
		}
	}
}

int func_1(var uParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = unk_0x578C4EF320340AF7();
	if ((iVar0 - *uParam0) > iParam1)
	{
		return 1;
	}
	return 0;
}

void func_2()
{
	unk_0xD39E529EBE5DB04F();
}

int func_3(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (iParam0 <= 31)
	{
		iVar0 = 9;
		iVar1 = iParam0;
	}
	else
	{
		iVar0 = 10;
		iVar1 = (iParam0 - 32);
	}
	if (unk_0xCE990E643CD9D0E5(Global_111858.f_9081.f_99.f_219[iVar0], iVar1))
	{
		unk_0xD2459066EA58CE43(&(Global_111858.f_9081.f_99.f_219[iVar0]), iVar1);
		return 1;
	}
	return 0;
}

int func_4(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (iParam0 <= 31)
	{
		iVar0 = 9;
		iVar1 = iParam0;
	}
	else
	{
		iVar0 = 10;
		iVar1 = (iParam0 - 32);
	}
	if (unk_0xCE990E643CD9D0E5(Global_111858.f_9081.f_99.f_219[iVar0], iVar1))
	{
		return 0;
	}
	unk_0xBE20AB8238688965(&(Global_111858.f_9081.f_99.f_219[iVar0]), iVar1);
	return 1;
}

