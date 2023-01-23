#region Local Var
	int iLocal_0 = 0;
	int iLocal_1 = 0;
	struct<3> Local_2 = { 0, 0, 0 } ;
	float fLocal_3 = 0f;
	char* sLocal_4 = NULL;
	int iLocal_5 = 0;
	char* sLocal_6 = NULL;
	int iLocal_7 = 0;
	int iLocal_8 = 0;
#endregion

void __EntryFunction__()
{
	sLocal_4 = "Poledance_01";
	iLocal_5 = joaat("a_f_y_beach_01");
	sLocal_6 = "MISSSTRIP_CLUB";
	if (unk_0xAE06B9E39EBDE049(iScriptParam_8))
	{
		unk_0x6A8F948698B360B4(iScriptParam_8, true);
		Local_2 = { unk_0x7EC595B99EA7C4B1(iScriptParam_8, 0f, 0f, 0f) };
		fLocal_3 = unk_0xEF7858F25585F853(iScriptParam_8);
		unk_0x58ADF88C51AAFDC5(iScriptParam_8, false, 0);
	}
	while (true)
	{
		wait(0);
		if (unk_0xAE06B9E39EBDE049(iScriptParam_8))
		{
			if (unk_0xED07D558B3EDDF8A(iScriptParam_8))
			{
				switch (iLocal_0)
				{
					case 0:
						if (func_5())
						{
							func_4();
							iLocal_0 = 2;
						}
						break;
					
					case 2:
						func_3();
						if (func_2())
						{
							unk_0x58ADF88C51AAFDC5(iScriptParam_8, true, 0);
							iLocal_0 = 3;
						}
						break;
					
					case 3:
						if (!unk_0x5AEB5DDFFAD43CA5(iLocal_1))
						{
							unk_0xAEC92B0DA8075AC9(iLocal_1, -1);
							unk_0xAF3D0236D181BE08(unk_0x460153A63B9477BC(), 1);
							unk_0xCBA6B2B569DCAFD8(iLocal_1, true);
							unk_0xD39E529EBE5DB04F();
						}
						break;
				}
			}
			else
			{
				func_1();
			}
		}
		else
		{
			func_1();
		}
	}
}

void func_1()
{
	if (!unk_0xA59F96B50B97E63C(iLocal_1, 0))
	{
		if (!unk_0xA38BFCB05DBE439D(iLocal_1))
		{
			unk_0x586DDC617E714637(&iLocal_1);
		}
		else
		{
			unk_0xCBA6B2B569DCAFD8(iLocal_1, true);
		}
	}
	unk_0xD39E529EBE5DB04F();
}

int func_2()
{
	struct<3> Var0;
	
	Var0 = { 2f, 2f, 0.5f };
	if (!unk_0x5AEB5DDFFAD43CA5(unk_0x9B0761B4C3EB8BC7()))
	{
		if (!unk_0x5AEB5DDFFAD43CA5(iLocal_1))
		{
			if (unk_0x910DFF8E55ABB8EC(unk_0x9B0761B4C3EB8BC7(), iLocal_1, Var0, 0, 1, 0))
			{
				return 1;
			}
			if (unk_0xCDF860E56BBCC6B4(iLocal_1, unk_0x9B0761B4C3EB8BC7(), 1))
			{
				return 1;
			}
			if (unk_0xA65352E7FEA59881(unk_0x9B0761B4C3EB8BC7(), iLocal_1))
			{
				return 1;
			}
		}
		if (unk_0x7922FF28ED63354A(unk_0x9B0761B4C3EB8BC7()))
		{
			return 1;
		}
	}
	return 0;
}

void func_3()
{
	if (!unk_0x5AEB5DDFFAD43CA5(iLocal_1))
	{
		if (unk_0x16BC17A8EDC701A2(iLocal_1, -2017877118) == 7)
		{
			unk_0x756D74A3EF0AB788(iLocal_1, sLocal_6, sLocal_4, 8f, -8f, -1, 0, 0, 0, 0, 0);
		}
		else if (unk_0xD8E0ED6453B9EACD(iLocal_1, sLocal_6, sLocal_4, 3))
		{
			unk_0x756D74A3EF0AB788(iLocal_1, sLocal_6, sLocal_4, 8f, -8f, -1, 0, 0, 0, 0, 0);
		}
		else if (!iLocal_7)
		{
			if (unk_0x9934470AA0A08B57(iLocal_1, sLocal_6, sLocal_4, 3))
			{
				unk_0xFC4EDD7B55A807F1(iLocal_1, sLocal_6, sLocal_4, unk_0x658086F2B3C5E4E4(0f, 1f));
				iLocal_7 = 1;
			}
		}
	}
}

void func_4()
{
	if (unk_0xA59F96B50B97E63C(iLocal_1, 0))
	{
		iLocal_1 = unk_0xB3116B49FE00E2F1(5, iLocal_5, Local_2.x, Local_2.f_1, Local_2.f_2, fLocal_3, 1, true);
		unk_0xD93D982926D0D8B3(iLocal_1, 0);
		unk_0x0DC39BE87E4C5599(iLocal_1, false);
		unk_0x4E65320BC9AD521C(iLocal_1, true);
	}
}

int func_5()
{
	unk_0x78FCB2E22C41B9D5(iLocal_5);
	unk_0x131ED02492676000(sLocal_6);
	if (unk_0x7D167B9A0CCDA347(iLocal_5) && unk_0xC614DDE265D18415(sLocal_6))
	{
		return 1;
	}
	else
	{
		unk_0x78FCB2E22C41B9D5(iLocal_5);
		unk_0x131ED02492676000(sLocal_6);
	}
	return 0;
}

