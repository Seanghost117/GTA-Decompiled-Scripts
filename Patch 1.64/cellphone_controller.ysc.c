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
	BOOL bLocal_27 = 0;
	var uLocal_28 = 0;
	var uLocal_29 = 0;
	var uLocal_30 = 0;
	float fLocal_31 = 0f;
	float fLocal_32 = 0f;
	float fLocal_33 = 0f;
	var uLocal_34 = 0;
	var uLocal_35 = 0;
	int iLocal_36 = 0;
	var uLocal_37 = 0;
	BOOL bLocal_38 = 0;
	float fLocal_39 = 0f;
	float fLocal_40 = 0f;
	BOOL bLocal_41 = 0;
	int iLocal_42 = 0;
	var uLocal_43 = 4;
	var uLocal_44 = 0;
	var uLocal_45 = 0;
	var uLocal_46 = 0;
	var uLocal_47 = 0;
	var uLocal_48 = 4;
	var uLocal_49 = 0;
	var uLocal_50 = 0;
	var uLocal_51 = 0;
	var uLocal_52 = 0;
	var uLocal_53 = 4;
	var uLocal_54 = 0;
	var uLocal_55 = 0;
	var uLocal_56 = 0;
	var uLocal_57 = 0;
	var uLocal_58 = 4;
	var uLocal_59 = 0;
	var uLocal_60 = 0;
	var uLocal_61 = 0;
	var uLocal_62 = 0;
	int iLocal_63 = 0;
	int iLocal_64 = 0;
	var uLocal_65 = 0;
	var uLocal_66 = 0;
	int iLocal_67 = 0;
	int iLocal_68 = 0;
	int iLocal_69 = 0;
	int iLocal_70 = 0;
	int iLocal_71 = 0;
	var uLocal_72 = 0;
	int iLocal_73 = 0;
	var uLocal_74 = 0;
	int iLocal_75 = 0;
	int iLocal_76 = 0;
	int iLocal_77 = 0;
	var uLocal_78 = 0;
	int iLocal_79 = 0;
	int iLocal_80 = 0;
	eCharacter echLocal_81 = CHAR_MICHAEL;
	BOOL bLocal_82 = 0;
	var uLocal_83 = 0;
	float fLocal_84 = 0f;
	float fLocal_85 = 0f;
	float fLocal_86 = 0f;
	float fLocal_87 = 0f;
	float fLocal_88 = 0f;
	float fLocal_89 = 0f;
	var uLocal_90 = 0;
	int iLocal_91 = 0;
	int iLocal_92 = 0;
	int iLocal_93 = 0;
	int iLocal_94 = 0;
	int iLocal_95 = 0;
	int iLocal_96 = 0;
	int iLocal_97 = 0;
#endregion

void main() // Position - 0x0
{
	var unk;
	int num;

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
	fLocal_31 = 80f;
	fLocal_32 = 140f;
	fLocal_33 = 180f;
	iLocal_36 = 3;
	fLocal_39 = 0f;
	fLocal_40 = 0f;
	fLocal_86 = 0.95f;
	fLocal_87 = 0.07f;
	fLocal_88 = 0.755f;
	iLocal_97 = 9999;
	unk_0x389D5B1C24A046B5();
	Global_113590 = unk_0xA5E11AF0A2B928C1();
	func_136();
	func_133();
	func_131();
	Global_20383.f_1 = 3;
	Global_20371 = false;
	Global_20586 = 0;
	Global_22760 = 0;
	unk.f_23 = 2;
	unk.f_56 = 16;

	while (true)
	{
		SYSTEM::WAIT(0);
	
		if (Global_20383.f_1 > 3)
		{
			unk_0x8B438725D591ED78(0, 337, 1);
			unk_0x8B438725D591ED78(0, 353, 1);
			unk_0x8B438725D591ED78(0, 354, 1);
			unk_0x8B438725D591ED78(0, 357, 1);
			unk_0x8B438725D591ED78(0, 353, 1);
		}
	
		if (iLocal_95 == 0)
		{
			if (unk_0xA26A9A07F761D8F8())
			{
				iLocal_95 = 1;
				iLocal_97 = _MPCHAR_STAT_GET_INT(MP_STAT_RAYCARBINE_DEATHS, -1, 0);
			}
		}
		else if (unk_0xA26A9A07F761D8F8())
		{
			if (iLocal_95 == 1)
			{
				switch (unk_0x1CD355F775EE640C())
				{
					case -1:
						unk_0xBFB9C30889C63CE4("gta5mkt_en");
						break;
				
					case 0:
						unk_0xBFB9C30889C63CE4("gta5mkt_en");
						break;
				
					case 1:
						unk_0xBFB9C30889C63CE4("gta5mkt_fr");
						break;
				
					case 2:
						unk_0xBFB9C30889C63CE4("gta5mkt_ge");
						break;
				
					case 3:
						unk_0xBFB9C30889C63CE4("gta5mkt_it");
						break;
				
					case 4:
						unk_0xBFB9C30889C63CE4("gta5mkt_sp");
						break;
				
					case 5:
						unk_0xBFB9C30889C63CE4("gta5mkt_pt");
						break;
				
					case 6:
						unk_0xBFB9C30889C63CE4("gta5mkt_pl");
						break;
				
					case 7:
						unk_0xBFB9C30889C63CE4("gta5mkt_ru");
						break;
				
					case 8:
						unk_0xBFB9C30889C63CE4("gta5mkt_ko");
						break;
				
					case 9:
						unk_0xBFB9C30889C63CE4("gta5mkt_ch");
						break;
				
					case 10:
						unk_0xBFB9C30889C63CE4("gta5mkt_ja");
						break;
				
					case 11:
						unk_0xBFB9C30889C63CE4("gta5mkt_me");
						break;
				
					case 12:
						unk_0xBFB9C30889C63CE4("gta5mkt_cn");
						break;
				}
			
				if (Global_2793044.f_5057)
					unk_0x9E0FA276C0BC8BDF(0, 1);
			
				iLocal_95 = 2;
			}
		
			if (iLocal_95 == 2)
			{
				iLocal_96 = unk_0xCBD9A6B946C80AC4();
			
				switch (iLocal_96)
				{
					case 3:
						break;
				
					case 0:
						if (unk_0xDC867E8F25C2B456() > 0)
						{
							unk_0x3A7643AAE17CF799(0, &unk);
						
							if (unk.f_1 != iLocal_97)
								Global_4541031 = 1;
							else
								Global_4541031 = 0;
						}
					
						iLocal_95 = 3;
						break;
				
					case 1:
						break;
				
					case 4:
						Global_4541031 = 0;
						iLocal_95 = 3;
						break;
				}
			}
		}
		else
		{
			Global_4541031 = 0;
			iLocal_95 = 0;
		}
	
		if (unk_0xCC17806DB0C41C19())
			if (unk_0xF23DF97D5FA97992())
				if (Global_20383.f_1 == 6)
					Global_20383.f_1 = 3;
	
		if (func_127(146))
		{
			if (Global_78558 == false)
			{
				num = func_95(0, false, 119);
			
				if (num != 0)
					func_93(num);
				else
					func_92();
			
				func_88(0);
			}
		}
	
		if (Global_2793044.f_4642 == true)
			if (Global_20383.f_1 > 3)
				Global_20383.f_1 = 3;
	
		if (Global_78558 == true)
		{
			if (Global_20383.f_1 == 3)
			{
				if (IS_BIT_SET(Global_4542297, 15))
				{
					unk_0xECDAB41968FF21A8(&Global_4542297, 14);
					SYSTEM::WAIT(0);
				
					while (!func_86(3, 0, 1, false))
					{
						SYSTEM::WAIT(0);
					}
				
					unk_0x061B1200C95204CB(&Global_4542297, 14);
					unk_0x061B1200C95204CB(&Global_4542297, 15);
				}
			
				if (IS_BIT_SET(Global_4542297, 16))
				{
					unk_0xECDAB41968FF21A8(&Global_4542297, 14);
					SYSTEM::WAIT(0);
				
					while (!func_86(17, 0, 1, false))
					{
						SYSTEM::WAIT(0);
					}
				
					unk_0x061B1200C95204CB(&Global_4542297, 14);
					unk_0x061B1200C95204CB(&Global_4542297, 16);
					unk_0x061B1200C95204CB(&Global_4542297, 27);
				}
			
				if (IS_BIT_SET(Global_4542297, 27))
				{
					unk_0xECDAB41968FF21A8(&Global_4542297, 14);
					SYSTEM::WAIT(0);
				
					while (!func_86(23, 0, 1, false))
					{
						SYSTEM::WAIT(0);
					}
				
					unk_0x061B1200C95204CB(&Global_4542297, 14);
					unk_0x061B1200C95204CB(&Global_4542297, 16);
					unk_0x061B1200C95204CB(&Global_4542297, 27);
				}
			
				if (IS_BIT_SET(Global_4542297, 29))
				{
					unk_0xECDAB41968FF21A8(&Global_4542297, 14);
					SYSTEM::WAIT(0);
				
					while (!func_86(1, 0, 1, false))
					{
						SYSTEM::WAIT(0);
					}
				
					unk_0x061B1200C95204CB(&Global_4542297, 14);
					unk_0x061B1200C95204CB(&Global_4542297, 29);
				}
			}
		}
	
		if (Global_78558 == false)
		{
			if (IS_BIT_SET(Global_4542297, 11))
			{
				if (Global_20383.f_1 != 10 && Global_20383.f_1 != 9 || func_85() == false)
				{
					unk_0x061B1200C95204CB(&Global_4542297, 11);
					unk_0xECDAB41968FF21A8(&Global_8254, 11);
				}
			}
			else if (Global_20383.f_1 == 10 || Global_20383.f_1 == 9)
			{
				if (func_85())
				{
					unk_0xECDAB41968FF21A8(&Global_4542297, 11);
					unk_0xECDAB41968FF21A8(&Global_8254, 11);
				}
			}
		
			if (IS_BIT_SET(Global_4542297, 12))
			{
				unk_0x061B1200C95204CB(&Global_4542297, 12);
				unk_0xECDAB41968FF21A8(&Global_8254, 11);
			}
		}
		else if (IS_BIT_SET(Global_4542297, 12))
		{
			if (Global_22788 == 0 || Global_22789 == false && !Global_22790)
			{
				unk_0x061B1200C95204CB(&Global_4542297, 12);
				unk_0xECDAB41968FF21A8(&Global_8254, 11);
			}
		}
		else if (Global_22790 || Global_22788 > 0 && Global_22789 == true)
		{
			unk_0xECDAB41968FF21A8(&Global_4542297, 12);
			unk_0xECDAB41968FF21A8(&Global_8254, 11);
		}
	
		if (unk_0xCC17806DB0C41C19())
		{
			if (unk_0xE194FD02572C7F74())
			{
				if (!IS_BIT_SET(Global_4542297, 19))
				{
					unk_0xECDAB41968FF21A8(&Global_4542297, 19);
					unk_0xECDAB41968FF21A8(&Global_8254, 11);
				}
			}
			else if (IS_BIT_SET(Global_4542297, 19))
			{
				unk_0x061B1200C95204CB(&Global_4542297, 19);
				unk_0xECDAB41968FF21A8(&Global_8254, 11);
			}
		}
	
		if (iLocal_93 == 0)
		{
			if (IS_BIT_SET(Global_8253, 25))
			{
				unk_0xDD7756E2742E0F6D(joaat("SP_CELLPHONE_SLEEP_TIME"), &iLocal_92, -1);
				uLocal_90 = unk_0xA5E11AF0A2B928C1();
				iLocal_93 = 1;
			}
		}
		else if (!IS_BIT_SET(Global_8253, 25))
		{
			unk_0xDD7756E2742E0F6D(joaat("SP_CELLPHONE_SLEEP_TIME"), &iLocal_92, -1);
			iLocal_91 = unk_0xA5E11AF0A2B928C1();
			iLocal_93 = 0;
			unk_0x3CC35ACFFC9C730E(joaat("SP_CELLPHONE_SLEEP_TIME"), iLocal_92 + (iLocal_91 - uLocal_90), 1);
		}
	
		func_84();
		func_83();
		func_82();
		func_80();
		func_62();
		func_61();
		func_60();
	
		if (IS_BIT_SET(Global_8254, 21))
			if (!unk_0x338834101DAD22F1())
				unk_0x061B1200C95204CB(&Global_8254, 21);
	
		if (IS_BIT_SET(Global_8253, 7))
		{
			func_55();
			unk_0x061B1200C95204CB(&Global_8253, 7);
		}
	
		if (IS_BIT_SET(Global_8253, 0))
			func_54();
	
		if (IS_BIT_SET(Global_4542297, 0))
			func_53();
	
		if (IS_BIT_SET(Global_8254, 11))
		{
			Global_8957 = 0;
		
			if (IS_BIT_SET(Global_8253, 25))
				Global_8957 = Global_8957 + 1;
		
			if (IS_BIT_SET(Global_4542297, 11))
				if (Global_78558 == false)
					Global_8957 = Global_8957 + 1;
		
			if (IS_BIT_SET(Global_4542297, 28))
				if (Global_78558 == true)
					Global_8957 = Global_8957 + 1;
		
			if (IS_BIT_SET(Global_4542297, 12))
				if (Global_78558 && Global_22789 || Global_22790)
					Global_8957 = Global_8957 + 1;
		
			if (IS_BIT_SET(Global_4542297, 19))
				Global_8957 = Global_8957 + 1;
		
			if (Global_8957 == 0)
			{
				unk_0x061B1200C95204CB(&Global_8254, 11);
				bLocal_41 = false;
			}
			else
			{
				bLocal_41 = true;
			}
		}
	
		if (!func_52())
		{
			if (!unk_0x47F8B78DC1737D5C())
				if (Global_20383.f_1 == 3)
					if (unk_0x48DC6A21D1CAD89C(unk_0x93E99A2DBCBA9CFA()))
						if (unk_0x1B82EF141CC65934(unk_0x93E99A2DBCBA9CFA()) || unk_0xD9402DE1F6D5B2C2())
							if (!unk_0x66599E73DBA5A850(unk_0xC1A5EC5C986B98AD()))
								if (Global_78558)
									func_37();
								else
									func_37();
		
			if (Global_20383.f_1 == 4)
				if (IS_BIT_SET(Global_8254, 21))
					func_37();
		
			func_23();
		}
		else
		{
			func_16();
		}
	
		switch (Global_22760)
		{
			case 0:
				func_15();
			
				if (Global_22762 == 1)
					func_14();
				break;
		
			case 1:
				func_13();
				break;
		
			case 2:
				func_12();
				break;
		
			case 3:
				func_11();
				break;
		
			case 4:
				func_10();
				break;
		
			case 5:
				func_9();
				break;
		
			case 14:
				func_14();
				break;
		
			case 6:
				if (Global_22762 == 1)
					func_14();
			
				if (Global_22763 == 1)
				{
					Global_22760 = 9;
					Global_22763 = 0;
				}
				break;
		
			case 8:
				func_8();
				break;
		
			case 9:
				func_5();
				break;
		
			case 10:
				func_4();
				break;
		
			case 11:
				func_3();
				break;
		
			case 12:
				func_2();
				break;
		
			case 13:
				func_1();
				break;
		}
	}

	return;
}

void func_1() // Position - 0x851
{
	iLocal_70 = unk_0x092300B16826E9C1(Global_22764);

	switch (iLocal_70)
	{
		case 0:
			Global_22760 = 4;
			break;
	
		case 1:
			break;
	
		case 2:
			unk_0xECDAB41968FF21A8(&Global_8254, 15);
			func_14();
			break;
	}

	return;
}

void func_2() // Position - 0x895
{
	if (unk_0xBF801E4269679276(Global_22764))
		Global_22760 = 13;
	else
		func_14();

	return;
}

void func_3() // Position - 0x8B3
{
	if (unk_0xA26A9A07F761D8F8())
	{
		iLocal_68 = unk_0x55DB5FC567C065D9(unk_0x0DB7F8294D73598B(), uLocal_66);
	}
	else
	{
		iLocal_67 = unk_0xA5E11AF0A2B928C1();
		iLocal_68 = iLocal_67 - uLocal_65;
	}

	if (iLocal_68 > 3000)
		unk_0x5E49B93D34BD8FC0();

	if (iLocal_68 > 3200)
		Global_22760 = 6;

	return;
}

void func_4() // Position - 0x8F6
{
	iLocal_70 = unk_0xE6DBB1A9C036C3E3();

	switch (iLocal_70)
	{
		case 0:
			if (unk_0xA26A9A07F761D8F8())
				uLocal_66 = unk_0x0DB7F8294D73598B();
			else
				uLocal_65 = unk_0xA5E11AF0A2B928C1();
		
			Global_22760 = 11;
			SYSTEM::SETTIMERB(0);
			break;
	
		case 1:
			break;
	
		case 2:
			func_14();
			break;
	}

	return;
}

void func_5() // Position - 0x94A
{
	Global_22765 = -1;

	if (Global_78558)
	{
		if (func_7())
			unk_0xFAE5684CCCBB0ED1(*Global_4718592.f_160097, Global_4718592.f_160097.f_1);
	
		if (func_6(&(Global_2657589[unk_0x93E99A2DBCBA9CFA() /*466*/].f_445), 0))
			unk_0x6363088AC0ED1663(1);
		else
			unk_0x6363088AC0ED1663(0);
	}

	if (unk_0x585ABBE2C1BF5DAF(Global_22765))
	{
		Global_22760 = 10;
		unk_0xCB4985E4432AAAC3("CELL_278" /*Saving Photo to Gallery*/);
		unk_0x287337934DFDC8C3(1);
	}
	else
	{
		func_14();
	}

	return;
}

BOOL func_6(int iParam0, int iParam1) // Position - 0x9C2
{
	return IS_BIT_SET(*iParam0, iParam1);
}

BOOL func_7() // Position - 0x9D0
{
	return IS_BIT_SET(*Global_4718592.f_160050, 12);
}

void func_8() // Position - 0x9E5
{
	iLocal_70 = unk_0x5EFC2F9A6A62E410(1);

	switch (iLocal_70)
	{
		case 0:
			Global_22760 = 9;
			break;
	
		case 1:
			break;
	
		case 2:
			func_14();
			break;
	}

	return;
}

void func_9() // Position - 0xA1F
{
	iLocal_70 = unk_0x2F84B57EA47BE92F(iLocal_71);

	switch (iLocal_70)
	{
		case 0:
			unk_0x439E1DB93055D9F3(1, 1);
			Global_22760 = 6;
			break;
	
		case 1:
			break;
	
		case 2:
			if (iLocal_71 == 3)
			{
				unk_0xECDAB41968FF21A8(&Global_8254, 14);
				unk_0x439E1DB93055D9F3(0, 0);
				unk_0xEFC5ECE28DD98538();
				unk_0xE1A45DD3AF3FD758();
				Global_22760 = 6;
			}
		
			if (Global_22760 == 5)
			{
				if (iLocal_71 == 0)
				{
					Global_22760 = 4;
					iLocal_71 = 1;
					unk_0xE1A45DD3AF3FD758();
					SYSTEM::WAIT(0);
				}
			}
		
			if (Global_22760 == 5)
			{
				if (iLocal_71 == 1)
				{
					Global_22760 = 4;
					iLocal_71 = 2;
					unk_0xE1A45DD3AF3FD758();
					SYSTEM::WAIT(0);
				}
			}
		
			if (Global_22760 == 5)
			{
				if (iLocal_71 == 2)
				{
					Global_22760 = 4;
					iLocal_71 = 3;
					unk_0xE1A45DD3AF3FD758();
					SYSTEM::WAIT(0);
				}
			}
			break;
	}

	return;
}

void func_10() // Position - 0xAD3
{
	if (unk_0x94DC00BF9BCE447C(iLocal_71))
	{
		Global_22760 = 5;
	}
	else
	{
		unk_0xECDAB41968FF21A8(&Global_8254, 15);
		func_14();
	}

	return;
}

void func_11() // Position - 0xAF8
{
	iLocal_70 = unk_0x1C00B84AB1418122();

	switch (iLocal_70)
	{
		case 0:
			Global_22760 = 4;
			iLocal_71 = 2;
			break;
	
		case 1:
			break;
	
		case 2:
			Global_20383.f_1 = 3;
			func_14();
			break;
	}

	return;
}

void func_12() // Position - 0xB39
{
	if (unk_0x47B3B6FC60486E34())
		Global_22760 = 3;

	return;
}

void func_13() // Position - 0xB4C
{
	if (SYSTEM::TIMERB() > 0)
		Global_22760 = 2;

	return;
}

void func_14() // Position - 0xB60
{
	unk_0x439E1DB93055D9F3(0, 0);
	unk_0xEFC5ECE28DD98538();
	unk_0xE1A45DD3AF3FD758();
	unk_0x5E49B93D34BD8FC0();
	Global_22761 = false;
	Global_22762 = 0;
	Global_22763 = 0;
	Global_22760 = 0;
	return;
}

void func_15() // Position - 0xB8A
{
	if (Global_22761)
	{
		Global_22760 = 1;
		unk_0x061B1200C95204CB(&Global_8254, 14);
		SYSTEM::SETTIMERB(0);
	}

	return;
}

BOOL func_16() // Position - 0xBAA
{
	var unk;

	if (func_22(2, Global_20350, 0) && !unk_0x32540FC8CD86BBDC(19) && !unk_0xF23DF97D5FA97992())
	{
		if (unk_0xCC17806DB0C41C19())
		{
			if (unk_0x2B6E67EB7FF3FD10(unk_0xC1A5EC5C986B98AD(), "Synched"))
			{
				unk = unk_0x45816CECE89B5B19("CELL_ANTIH_A" /*ALERT!*/);
				unk_0xD30970E11AD0FF0D("CELL_ANTIH" /*You haven't paid your phone bill. Phone use may be impeded.*/);
				unk_0x4BE755B3858339A1("CHAR_SOCIAL_CLUB", "CHAR_SOCIAL_CLUB", 0, 0, unk, 0);
			}
		}
	
		if (!unk_0x66599E73DBA5A850(unk_0xC1A5EC5C986B98AD()))
			if (func_21(unk_0xC1A5EC5C986B98AD()) || unk_0x3B4100B27DD06836(unk_0xC1A5EC5C986B98AD()))
				if (unk_0x51EB177CA0562B62(0, 25) || unk_0x51EB177CA0562B62(0, 68))
					return false;
	
		Global_22784 = 0;
		Global_22785 = false;
	
		if (unk_0x5047A01F24B474E7() == Global_22782 && unk_0x5047A01F24B474E7() != -1)
		{
			Global_22784 = Global_22783;
			uLocal_74 = unk_0xA5E11AF0A2B928C1();
			iLocal_76 = 0;
			iLocal_77 = 0;
		
			while (func_20(2, Global_20350) && iLocal_76 < 250 && Global_20592 == 0 && !unk_0x32540FC8CD86BBDC(19))
			{
				if (Global_8957 > 0)
					func_17();
			
				SYSTEM::WAIT(0);
				iLocal_75 = unk_0xA5E11AF0A2B928C1();
				iLocal_76 = iLocal_75 - uLocal_74;
			
				if (Global_8957 > 0)
					func_17();
			}
		
			if (func_20(2, Global_20350) && Global_20592 == 0 && !unk_0x32540FC8CD86BBDC(19))
				iLocal_77 = 1;
		
			if (Global_20592 == 0)
			{
				if (iLocal_77 == 1)
				{
					Global_22785 = true;
					Global_22784 = Global_22783;
					Global_22784 == 1;
					Global_22784 == 2;
					Global_22784 == 3;
					Global_22784 == 0;
					Global_22784 == 4;
				}
				else
				{
					Global_22784 = 0;
				}
			}
			else
			{
				Global_22784 = 0;
			}
		}
		else
		{
			Global_22784 = 0;
		}
	
		if (!unk_0x32540FC8CD86BBDC(19))
		{
			return true;
		}
		else
		{
			Global_22784 = 0;
			Global_22785 = false;
			return false;
		}
	}

	return false;
}

void func_17() // Position - 0xD63
{
	int num;

	num = 255;

	if (Global_22790)
	{
		fLocal_87 = -0.055f;
		fLocal_88 = 0.745f;
		uLocal_83 = unk_0xF227267F96ACE4F0();
		fLocal_89 = (100f * fLocal_86) - (100f * uLocal_83);
		fLocal_84 = fLocal_87 + (fLocal_89 * 0.005f);
		fLocal_85 = fLocal_88 - (fLocal_89 * 0.005f);
	
		if (!func_19())
		{
			unk_0x23D55A1597EDF500(1);
			unk_0xCA0440712A8201E9(7);
		
			if (unk_0xCC17806DB0C41C19())
				unk_0x5AADC6AED66BE51B();
		
			unk_0x20C68F87D0FDD976(uLocal_37, fLocal_84, fLocal_85, 0.27f, 0.45f, 255, 255, 255, num, 0);
			unk_0x23D55A1597EDF500(0);
			unk_0xCA0440712A8201E9(4);
		}
	}
	else
	{
		if (unk_0xCC17806DB0C41C19())
			if (Global_2646729.f_1593)
				bLocal_38 = false;
			else if (IS_BIT_SET(Global_8253, 13))
				if (IS_BIT_SET(Global_4542297, 19))
					bLocal_38 = false;
				else
					bLocal_38 = true;
			else
				bLocal_38 = false;
		else if (Global_2646729.f_1593 || IS_BIT_SET(Global_8253, 13))
			bLocal_38 = true;
		else
			bLocal_38 = false;
	
		if (func_52())
			bLocal_38 = true;
	
		if (IS_BIT_SET(Global_4542297, 28))
		{
			num = 125;
		
			if (bLocal_38 == true)
				bLocal_38 = false;
		}
	
		if (unk_0x122C2CF4BD28F994())
		{
			if (!unk_0x5BCF01EEE48B992C())
			{
				if (!bLocal_38)
				{
					if (!func_18())
					{
						if (unk_0x48DC6A21D1CAD89C(unk_0x93E99A2DBCBA9CFA()))
						{
							if (!unk_0xF41A4983A3778F18(unk_0x93E99A2DBCBA9CFA(), 1))
							{
								unk_0xCA0440712A8201E9(4);
							
								if (unk_0xCC17806DB0C41C19() && Global_2646729.f_1593)
								{
									fLocal_87 = 0.165f;
									fLocal_88 = 0.755f;
								}
								else
								{
									fLocal_87 = 0.07f;
									fLocal_88 = 0.755f;
								}
							
								uLocal_83 = unk_0xF227267F96ACE4F0();
								fLocal_89 = (100f * fLocal_86) - (100f * uLocal_83);
								fLocal_84 = fLocal_87 + (fLocal_89 * 0.005f);
								fLocal_85 = fLocal_88 - (fLocal_89 * 0.005f);
							
								if (!func_19())
								{
									if (unk_0xCC17806DB0C41C19())
										unk_0x5AADC6AED66BE51B();
								
									if (Global_2646729.f_1593)
									{
										fLocal_39 = 0.09f;
										fLocal_40 = -0.25f;
									
										if (unk_0xCC17806DB0C41C19())
										{
											if (IS_BIT_SET(Global_4542297, 28))
											{
											}
											else
											{
												unk_0x20C68F87D0FDD976(uLocal_37, fLocal_84, fLocal_85, 0.27f, 0.45f, 255, 255, 255, num, 0);
											}
										}
										else
										{
											unk_0x20C68F87D0FDD976(uLocal_37, fLocal_84 + fLocal_39, fLocal_85 + fLocal_40, 0.27f, 0.45f, 255, 255, 255, num, 0);
										}
									}
									else
									{
										unk_0x20C68F87D0FDD976(uLocal_37, fLocal_84, fLocal_85, 0.27f, 0.45f, 255, 255, 255, num, 0);
									}
								}
							}
						}
					}
				}
			}
		}
	}

	return;
}

BOOL func_18() // Position - 0xFB2
{
	if (unk_0x24B651D85CCE5EB4(joaat("appcamera")) > 0)
		return true;

	return false;
}

BOOL func_19() // Position - 0xFCF
{
	if (IS_BIT_SET(Global_8255, 3))
		return true;

	return false;
}

BOOL func_20(int iParam0, var uParam1) // Position - 0xFE7
{
	if (unk_0x51EB177CA0562B62(iParam0, uParam1))
	{
		if (unk_0xCC17806DB0C41C19())
			if (unk_0x6C75193377D3CE17() == 0)
				return false;
	
		if (unk_0xFEE065E56A9BEF3F() || unk_0x47F8B78DC1737D5C())
			return false;
		else
			return true;
	}

	return false;
}

int func_21(var uParam0) // Position - 0x102D
{
	int num;

	if (unk_0x59B303498BF93C46())
	{
		if (!unk_0x66599E73DBA5A850(uParam0))
		{
			unk_0xEBC16D60E30C9AE1(uParam0, &num, 1);
		
			if (num == joaat("WEAPON_SNIPERRIFLE") || num == joaat("WEAPON_HEAVYSNIPER") || num == joaat("WEAPON_MARKSMANRIFLE") || num == joaat("WEAPON_HEAVYSNIPER_MK2"))
				return 1;
		}
	}

	return 0;
}

BOOL func_22(int iParam0, var uParam1, int iParam2) // Position - 0x108A
{
	if (unk_0x87644B1F984197FE(iParam0, uParam1) || iParam2 == 1 && unk_0xE665ABCFC5784C35(iParam0, uParam1))
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

void func_23() // Position - 0x10FC
{
	switch (Global_20383.f_1)
	{
		case 4:
			if (IS_BIT_SET(Global_8254, 21))
			{
			}
			else
			{
				if (unk_0xB8CEC43FB7EF2D92(Global_20380))
				{
				}
				else
				{
					if (!unk_0xB8CEC43FB7EF2D92(Global_20380))
					{
						if (unk_0x24B651D85CCE5EB4(joaat("cellphone_flashhand")) == 0)
						{
							unk_0x3EC562D93709C894("cellphone_flashhand");
						
							while (!unk_0x6CAF14BE58B4BFF8("cellphone_flashhand"))
							{
								SYSTEM::WAIT(0);
							
								if (Global_8957 > 0)
									func_17();
							}
						
							if (unk_0x24B651D85CCE5EB4(joaat("cellphone_flashhand")) == 0)
								Global_20380 = SYSTEM::START_NEW_SCRIPT("cellphone_flashhand", DEFAULT);
						
							unk_0x037A80676B8FF0F5("cellphone_flashhand");
						}
					}
				
					func_36(false);
				}
			
				if (Global_21735 || Global_21736)
				{
					if (!unk_0xB8CEC43FB7EF2D92(Global_20380))
					{
						if (unk_0x24B651D85CCE5EB4(joaat("cellphone_flashhand")) == 0)
						{
							unk_0x3EC562D93709C894("cellphone_flashhand");
						
							while (!unk_0x6CAF14BE58B4BFF8("cellphone_flashhand"))
							{
								SYSTEM::WAIT(0);
							
								if (Global_8957 > 0)
									func_17();
							}
						
							if (unk_0x24B651D85CCE5EB4(joaat("cellphone_flashhand")) == 0)
								Global_20380 = SYSTEM::START_NEW_SCRIPT("cellphone_flashhand", DEFAULT);
						
							unk_0x037A80676B8FF0F5("cellphone_flashhand");
						}
					}
				
					while (!unk_0x5FAF55B1F052A2E6(Global_20364) && Global_20366 == 0)
					{
						SYSTEM::WAIT(0);
					
						if (Global_8957 > 0)
							func_17();
					}
				
					if (Global_20366 == 0)
					{
						Global_20383.f_1 = 9;
						func_24();
					}
				}
				else
				{
					bLocal_82 = false;
				
					if (Global_78558 && Global_22787 || Global_1890001.f_5)
						bLocal_82 = true;
				
					if (Global_113648.f_14053[Global_20383 /*20*/].f_18 == 1 || Global_113648.f_14053[Global_20383 /*20*/].f_17 == 1 || bLocal_82 == true || Global_22784 != 0)
					{
						while (!unk_0x5FAF55B1F052A2E6(Global_20364) && Global_20366 == 0)
						{
							SYSTEM::WAIT(0);
						
							if (Global_8957 > 0)
								func_17();
						}
					
						if (Global_20366 == 0)
						{
							if (Global_20383.f_1 > 3)
							{
								Global_20383.f_1 = 6;
							
								if (Global_22784 == 0)
								{
									if (bLocal_82)
									{
									}
									else if (Global_78558 == false)
									{
										if (Global_113648.f_14053[Global_20383 /*20*/].f_17 == 1)
											func_86(1, 0, 1, false);
									}
								}
								else
								{
									Global_22784 == 3;
									Global_22784 == 1;
									Global_22784 == 2;
									Global_22784 == 4;
								}
							}
						}
					}
					else
					{
						while (!unk_0x5FAF55B1F052A2E6(Global_20364) && Global_20366 == 0)
						{
							SYSTEM::WAIT(0);
						
							if (Global_8957 > 0)
								func_17();
						}
					
						if (Global_20366 == 0)
							if (Global_20383.f_1 > 3)
								if (Global_21735 || Global_21736)
									Global_20383.f_1 = 9;
								else
									Global_20383.f_1 = 6;
					}
				}
			}
			break;
	}

	return;
}

void func_24() // Position - 0x1385
{
	var unk;

	if (Global_20366 == 1)
		return;

	if (Global_20383.f_1 < 4)
		return;

	while (!unk_0x5FAF55B1F052A2E6(Global_20364))
	{
		if (Global_78558)
			return;
	
		SYSTEM::WAIT(0);
	}

	switch (Global_20383.f_1)
	{
		case 6:
			func_35(Global_20364, "SET_DATA_SLOT_EMPTY", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
			func_33(Global_8858);
		
			if (Global_8858 == 1)
			{
				func_35(Global_20364, "DISPLAY_VIEW", 1f, SYSTEM::TO_FLOAT(Global_20387), -1082130432, -1082130432, -1082130432);
				Global_20363 = Global_20387;
			}
			else
			{
				func_35(Global_20364, "DISPLAY_VIEW", 1f, SYSTEM::TO_FLOAT(Global_20388), -1082130432, -1082130432, -1082130432);
				Global_20363 = Global_20388;
			}
		
			if (Global_20371)
			{
				func_32(Global_20364, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, "CELL_205" /*SELECT*/, 0, 0, 0, 0);
				func_32(Global_20364, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, "CELL_206" /*BACK*/, 0, 0, 0, 0);
			}
			else
			{
				func_32(Global_20364, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, 0, 0, 0, 0, 0);
				func_32(Global_20364, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, 0, 0, 0, 0, 0);
			}
		
			if (Global_20586 == 0)
			{
				func_32(Global_20364, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
				unk_0x061B1200C95204CB(&Global_8253, 17);
			}
			else if (Global_78558)
			{
				func_32(Global_20364, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
				unk_0x061B1200C95204CB(&Global_8253, 17);
			}
			else
			{
				if (Global_20585 == true)
					if (Global_20371)
						func_32(Global_20364, "SET_SOFT_KEYS", 1f, 1f, 20f, -1f, -1f, "CELL_225" /*NEXT*/, 0, 0, 0, 0);
					else
						func_32(Global_20364, "SET_SOFT_KEYS", 1f, 1f, 20f, -1f, -1f, 0, 0, 0, 0, 0);
				else if (Global_20371)
					func_32(Global_20364, "SET_SOFT_KEYS", 1f, 1f, 3f, -1f, -1f, "CELL_225" /*NEXT*/, 0, 0, 0, 0);
				else
					func_32(Global_20364, "SET_SOFT_KEYS", 1f, 1f, 3f, -1f, -1f, 0, 0, 0, 0, 0);
			
				unk_0xECDAB41968FF21A8(&Global_8253, 17);
			}
		
			if (Global_78558)
			{
				func_30();
				unk_0x061B1200C95204CB(&Global_8255, 9);
				func_35(Global_20364, "DISPLAY_VIEW", 1f, SYSTEM::TO_FLOAT(Global_20387), -1082130432, -1082130432, -1082130432);
			}
			break;
	
		case 7:
			break;
	
		case 10:
			func_35(Global_20364, "DISPLAY_VIEW", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
			func_32(Global_20364, "SET_SOFT_KEYS", 2f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			func_32(Global_20364, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			unk_0x061B1200C95204CB(&Global_8253, 17);
		
			if (IS_BIT_SET(Global_8253, 20))
			{
				func_32(Global_20364, "SET_SOFT_KEYS", 3f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			else if (Global_20371)
			{
				func_32(Global_20364, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, "CELL_202" /*END CALL*/, 0, 0, 0, 0);
			
				if (Global_20326)
					func_32(Global_20364, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			else
			{
				func_32(Global_20364, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			break;
	
		case 9:
			if (Global_20382 == 1)
			{
				func_29();
				func_35(Global_20364, "SET_THEME", SYSTEM::TO_FLOAT(Global_113648.f_14053[Global_20383 /*20*/].f_6), -1082130432, -1082130432, -1082130432, -1082130432);
			
				if (Global_21738)
				{
					unk_0x9FD96C5DE6EDFC15(Global_20364, "SET_DATA_SLOT");
					unk_0xC6A3EF6C4A3412C1(4);
					unk_0xC6A3EF6C4A3412C1(0);
					unk_0xC6A3EF6C4A3412C1(2);
					unk_0x2AF11E92DE43CDE3("CELL_CONDFON" /*~a~*/);
					unk_0x76B34CBB6F5FA1BB(&Global_21740);
					unk_0xF8FCA9E7130CE1C8();
					func_28("CELL_300" /*CHAR_DEFAULT*/);
					func_28("CELL_217" /*INCOMING CALL*/);
					func_28("CELL_217" /*INCOMING CALL*/);
					unk_0xAE3413B0654A0035();
				}
				else if (func_27(Global_7568, Global_20383) == 0)
				{
					func_32(Global_20364, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(4), SYSTEM::TO_FLOAT(0), SYSTEM::TO_FLOAT(2), -1f, -1f, &(Global_117[Global_7568 /*10*/].f_4), "CELL_300" /*CHAR_DEFAULT*/, "CELL_217" /*INCOMING CALL*/, "CELL_195" /*Unknown*/, 0);
				}
				else
				{
					func_32(Global_20364, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(4), SYSTEM::TO_FLOAT(0), SYSTEM::TO_FLOAT(2), -1f, -1f, &(Global_2028[Global_7568 /*29*/].f_3), &(Global_2028[Global_7568 /*29*/].f_7), "CELL_217" /*INCOMING CALL*/, &(Global_2028[Global_7568 /*29*/].f_3), 0);
				}
			
				func_35(Global_20364, "DISPLAY_VIEW", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
			}
			else if (Global_21725 == 4 || Global_21725 == 3)
			{
				func_35(Global_20364, "SET_THEME", SYSTEM::TO_FLOAT(Global_113648.f_14053[Global_20383 /*20*/].f_6), -1082130432, -1082130432, -1082130432, -1082130432);
				func_29();
			
				if (Global_21738)
				{
					unk_0x9FD96C5DE6EDFC15(Global_20364, "SET_DATA_SLOT");
					unk_0xC6A3EF6C4A3412C1(4);
					unk_0xC6A3EF6C4A3412C1(0);
					unk_0xC6A3EF6C4A3412C1(2);
					unk_0x2AF11E92DE43CDE3("CELL_CONDFON" /*~a~*/);
					unk_0x76B34CBB6F5FA1BB(&Global_21740);
					unk_0xF8FCA9E7130CE1C8();
					func_28("CELL_300" /*CHAR_DEFAULT*/);
					func_28("CELL_219" /*CONNECTED*/);
					func_28("CELL_219" /*CONNECTED*/);
					unk_0xAE3413B0654A0035();
				}
				else
				{
					if (Global_21983)
						TEXT_LABEL_ASSIGN_STRING(&unk, "CELL_219" /*CONNECTED*/, 24);
					else
						TEXT_LABEL_ASSIGN_STRING(&unk, "CELL_211" /*DIALING...*/, 24);
				
					if (func_27(Global_7568, Global_20383) == 0)
					{
						func_35(Global_20364, "SET_DATA_SLOT_EMPTY", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
						func_32(Global_20364, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(4), SYSTEM::TO_FLOAT(0), SYSTEM::TO_FLOAT(3), -1f, -1f, &(Global_117[Global_7568 /*10*/].f_4), "CELL_300" /*CHAR_DEFAULT*/, &unk, "CELL_195" /*Unknown*/, 0);
					}
					else
					{
						func_35(Global_20364, "SET_DATA_SLOT_EMPTY", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
						func_32(Global_20364, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(4), SYSTEM::TO_FLOAT(0), SYSTEM::TO_FLOAT(3), -1f, -1f, &(Global_2028[Global_7568 /*29*/].f_3), &(Global_2028[Global_7568 /*29*/].f_7), &unk, &(Global_2028[Global_7568 /*29*/].f_3), 0);
					}
				}
			
				func_35(Global_20364, "DISPLAY_VIEW", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
			}
		
			func_25();
			break;
	
		default:
			break;
	}

	return;
}

void func_25() // Position - 0x196A
{
	if (unk_0x5FAF55B1F052A2E6(Global_20364))
	{
		func_26();
	
		if (Global_20382 == 1)
		{
			if (Global_20371)
				func_32(Global_20364, "SET_SOFT_KEYS", 2f, 1f, 5f, -1f, -1f, "CELL_203" /*ANSWER*/, 0, 0, 0, 0);
			else
				func_32(Global_20364, "SET_SOFT_KEYS", 2f, 1f, 5f, -1f, -1f, 0, 0, 0, 0, 0);
		
			if (Global_21772)
				func_32(Global_20364, "SET_SOFT_KEYS", 3f, 0f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
			else if (IS_BIT_SET(Global_8253, 20))
				func_32(Global_20364, "SET_SOFT_KEYS", 3f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			else if (Global_20371)
				func_32(Global_20364, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, "CELL_204" /*REJECT*/, 0, 0, 0, 0);
			else
				func_32(Global_20364, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
		
			func_32(Global_20364, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			unk_0x061B1200C95204CB(&Global_8253, 17);
		}
		else
		{
			func_32(Global_20364, "SET_SOFT_KEYS", 2f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			func_32(Global_20364, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			unk_0x061B1200C95204CB(&Global_8253, 17);
		
			if (IS_BIT_SET(Global_8253, 20))
			{
				func_32(Global_20364, "SET_SOFT_KEYS", 3f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			else if (Global_20371)
			{
				func_32(Global_20364, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, "CELL_202" /*END CALL*/, 0, 0, 0, 0);
			
				if (Global_20326)
					func_32(Global_20364, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			else
			{
				func_32(Global_20364, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
			}
		}
	}

	return;
}

void func_26() // Position - 0x1AF8
{
	if (Global_78558)
	{
		func_32(Global_20364, "SET_SOFT_KEYS", 1f, 0f, 9f, -1f, -1f, 0, 0, 0, 0, 0);
		unk_0x061B1200C95204CB(&Global_8253, 17);
	}

	return;
}

int func_27(eCharacter echParam0, eCharacter echParam1) // Position - 0x1B29
{
	if (echParam1 < CHAR_MICHAEL || echParam1 > CHAR_ALL_PLAYERS_CONF)
		return 0;

	return Global_2028[echParam0 /*29*/].f_24[echParam1];
}

void func_28(char* sParam0) // Position - 0x1B53
{
	unk_0x2AF11E92DE43CDE3(sParam0);
	unk_0xF8FCA9E7130CE1C8();
	return;
}

void func_29() // Position - 0x1B65
{
	if (!unk_0x055111B11E6624FD(unk_0xC1A5EC5C986B98AD(), 0))
	{
		if (Global_20383 == CHAR_MICHAEL)
		{
			switch (Global_113648.f_14053[Global_20383 /*20*/].f_6)
			{
				case 1:
					unk_0xE41C8C5C1EACC561(unk_0x93E99A2DBCBA9CFA(), 0);
					break;
			
				case 2:
					unk_0xE41C8C5C1EACC561(unk_0x93E99A2DBCBA9CFA(), 1);
					break;
			
				case 3:
					unk_0xE41C8C5C1EACC561(unk_0x93E99A2DBCBA9CFA(), 2);
					break;
			
				case 4:
					unk_0xE41C8C5C1EACC561(unk_0x93E99A2DBCBA9CFA(), 3);
					break;
			
				case 5:
					unk_0xE41C8C5C1EACC561(unk_0x93E99A2DBCBA9CFA(), 4);
					break;
			
				case 6:
					unk_0xE41C8C5C1EACC561(unk_0x93E99A2DBCBA9CFA(), 5);
					break;
			
				case 7:
					unk_0xE41C8C5C1EACC561(unk_0x93E99A2DBCBA9CFA(), 6);
					break;
			
				default:
					break;
			}
		}
	
		if (Global_20383 == CHAR_FRANKLIN)
		{
			switch (Global_113648.f_14053[Global_20383 /*20*/].f_6)
			{
				case 1:
					unk_0xE41C8C5C1EACC561(unk_0x93E99A2DBCBA9CFA(), 6);
					break;
			
				case 2:
					unk_0xE41C8C5C1EACC561(unk_0x93E99A2DBCBA9CFA(), 0);
					break;
			
				case 3:
					unk_0xE41C8C5C1EACC561(unk_0x93E99A2DBCBA9CFA(), 1);
					break;
			
				case 4:
					unk_0xE41C8C5C1EACC561(unk_0x93E99A2DBCBA9CFA(), 2);
					break;
			
				case 5:
					unk_0xE41C8C5C1EACC561(unk_0x93E99A2DBCBA9CFA(), 3);
					break;
			
				case 6:
					unk_0xE41C8C5C1EACC561(unk_0x93E99A2DBCBA9CFA(), 4);
					break;
			
				case 7:
					unk_0xE41C8C5C1EACC561(unk_0x93E99A2DBCBA9CFA(), 5);
					break;
			
				default:
					break;
			}
		}
	
		if (Global_20383 == CHAR_TREVOR)
		{
			switch (Global_113648.f_14053[Global_20383 /*20*/].f_6)
			{
				case 1:
					unk_0xE41C8C5C1EACC561(unk_0x93E99A2DBCBA9CFA(), 5);
					break;
			
				case 2:
					unk_0xE41C8C5C1EACC561(unk_0x93E99A2DBCBA9CFA(), 6);
					break;
			
				case 3:
					unk_0xE41C8C5C1EACC561(unk_0x93E99A2DBCBA9CFA(), 1);
					break;
			
				case 4:
					unk_0xE41C8C5C1EACC561(unk_0x93E99A2DBCBA9CFA(), 0);
					break;
			
				case 5:
					unk_0xE41C8C5C1EACC561(unk_0x93E99A2DBCBA9CFA(), 2);
					break;
			
				case 6:
					unk_0xE41C8C5C1EACC561(unk_0x93E99A2DBCBA9CFA(), 3);
					break;
			
				case 7:
					unk_0xE41C8C5C1EACC561(unk_0x93E99A2DBCBA9CFA(), 4);
					break;
			
				default:
					break;
			}
		}
	
		if (Global_20383 == CHAR_MULTIPLAYER)
		{
			switch (Global_4542573)
			{
				case 1:
					unk_0xE41C8C5C1EACC561(unk_0x93E99A2DBCBA9CFA(), 0);
					break;
			
				case 2:
					unk_0xE41C8C5C1EACC561(unk_0x93E99A2DBCBA9CFA(), 1);
					break;
			
				case 3:
					unk_0xE41C8C5C1EACC561(unk_0x93E99A2DBCBA9CFA(), 2);
					break;
			
				case 4:
					unk_0xE41C8C5C1EACC561(unk_0x93E99A2DBCBA9CFA(), 3);
					break;
			
				case 5:
					unk_0xE41C8C5C1EACC561(unk_0x93E99A2DBCBA9CFA(), 4);
					break;
			
				case 6:
					unk_0xE41C8C5C1EACC561(unk_0x93E99A2DBCBA9CFA(), 5);
					break;
			
				case 7:
					unk_0xE41C8C5C1EACC561(unk_0x93E99A2DBCBA9CFA(), 6);
					break;
			
				default:
					break;
			}
		}
	}

	return;
}

void func_30() // Position - 0x1DDC
{
	if (Global_78558)
	{
		if (func_31() == 0)
			return;
	
		func_32(Global_20364, "SET_SOFT_KEYS", 1f, 1f, 9f, -1f, -1f, 0, 0, 0, 0, 0);
		unk_0xECDAB41968FF21A8(&Global_8253, 17);
	}

	return;
}

int func_31() // Position - 0x1E18
{
	return 0;
}

void func_32(int iParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6, char* sParam7, char* sParam8, char* sParam9, char* sParam10, char* sParam11) // Position - 0x1E21
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
		func_28(sParam7);

	if (!unk_0x2AC37494BBF1DB16(sParam8))
		func_28(sParam8);

	if (!unk_0x2AC37494BBF1DB16(sParam9))
		func_28(sParam9);

	if (!unk_0x2AC37494BBF1DB16(sParam10))
		func_28(sParam10);

	if (!unk_0x2AC37494BBF1DB16(sParam11))
		func_28(sParam11);

	unk_0xAE3413B0654A0035();
	return;
}

void func_33(int iParam0) // Position - 0x1ED4
{
	int i;
	int num;
	int num2;
	int j;
	int value;
	int k;
	int value2;
	int num3;
	int num4;
	int value3;

	Global_22793 = 0;
	Global_8858 = iParam0;

	for (i = 0; i < 9; i = i + 1)
	{
		Global_8822[i] = 0;
	}

	for (i = 0; i < 9; i = i + 1)
	{
		num = 0;
	
		if (func_34(14))
		{
			while (num < 34)
			{
				if (iParam0 == Global_8260[num /*15*/].f_11)
				{
					if (i == Global_8260[num /*15*/].f_4)
					{
						if (Global_8822[i] == 0)
						{
							Global_8786[i] = num;
						
							if (num == 3)
							{
								if (IS_BIT_SET(Global_8254, 3))
								{
									num2 = 42;
									Global_20588 = 1;
								}
								else
								{
									num2 = 255;
									Global_20588 = 0;
								}
							
								unk_0x9FD96C5DE6EDFC15(Global_20364, "SET_DATA_SLOT");
								unk_0xC6A3EF6C4A3412C1(1);
								unk_0xC6A3EF6C4A3412C1(i);
								unk_0xC6A3EF6C4A3412C1(Global_8260[num /*15*/].f_10);
								unk_0xC6A3EF6C4A3412C1(0);
								func_28(&Global_8260[num /*15*/]);
								unk_0xC6A3EF6C4A3412C1(num2);
								unk_0xAE3413B0654A0035();
							}
						
							if (Global_2694519)
								if (num == 14)
									func_32(Global_20364, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(i), SYSTEM::TO_FLOAT(Global_8260[num /*15*/].f_10), SYSTEM::TO_FLOAT(Global_22788), -1f, &Global_8260[num /*15*/], 0, 0, 0, 0);
						
							Global_8822[i] = 1;
						}
					}
				}
			
				num = num + 1;
			}
		}
		else
		{
			while (num < 34)
			{
				if (iParam0 == Global_8260[num /*15*/].f_11)
				{
					if (i == Global_8260[num /*15*/].f_4)
					{
						if (Global_8822[i] == 0)
						{
							Global_8786[i] = num;
						
							if (num == 1)
							{
								for (j = 0; j < 35; j = j + 1)
								{
									if (Global_113648.f_14143[j /*104*/].f_24 != 0)
										if (Global_113648.f_14143[j /*104*/].f_28 == 0)
											if (Global_113648.f_14143[j /*104*/].f_99[Global_20383] == 1)
												Global_22793 = Global_22793 + 1;
								}
							
								func_32(Global_20364, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(i), SYSTEM::TO_FLOAT(Global_8260[num /*15*/].f_10), SYSTEM::TO_FLOAT(Global_22793), -1f, &Global_8260[num /*15*/], 0, 0, 0, 0);
							}
							else if (num == 7)
							{
								if (Global_78558)
								{
									value = 0;
									value = Global_4541031;
								
									for (k = 0; k < 12; k = k + 1)
									{
										if (Global_4541032[k /*104*/].f_24 != 0)
											if (Global_4541032[k /*104*/].f_28 == 0)
												if (Global_4541032[k /*104*/].f_99[Global_20383] == 1)
													value = value + 1;
									}
								
									func_32(Global_20364, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(i), SYSTEM::TO_FLOAT(Global_8260[num /*15*/].f_10), SYSTEM::TO_FLOAT(value), -1f, &Global_8260[num /*15*/], 0, 0, 0, 0);
								}
								else
								{
									switch (Global_20383)
									{
										case CHAR_MICHAEL:
											value2 = Global_44457;
											break;
									
										case CHAR_FRANKLIN:
											value2 = Global_44458;
											break;
									
										case CHAR_TREVOR:
											value2 = Global_44459;
											break;
									
										default:
											break;
									}
								
									func_32(Global_20364, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(i), SYSTEM::TO_FLOAT(Global_8260[num /*15*/].f_10), SYSTEM::TO_FLOAT(value2), -1f, &Global_8260[num /*15*/], 0, 0, 0, 0);
								}
							}
							else if (num == 14)
							{
								func_32(Global_20364, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(i), SYSTEM::TO_FLOAT(Global_8260[num /*15*/].f_10), SYSTEM::TO_FLOAT(Global_22788), -1f, &Global_8260[num /*15*/], 0, 0, 0, 0);
							}
							else if (num == 20)
							{
								unk_0x9FD96C5DE6EDFC15(Global_20364, "SET_DATA_SLOT");
								unk_0xC6A3EF6C4A3412C1(1);
								unk_0xC6A3EF6C4A3412C1(i);
								unk_0xC6A3EF6C4A3412C1(Global_8260[num /*15*/].f_10);
								unk_0xC6A3EF6C4A3412C1(0);
								func_28(&Global_8260[num /*15*/]);
								unk_0xC6A3EF6C4A3412C1(Global_8259);
								unk_0xAE3413B0654A0035();
							}
							else if (num == 2)
							{
								if (IS_BIT_SET(Global_8254, 6))
									num3 = 42;
								else
									num3 = 255;
							
								unk_0x9FD96C5DE6EDFC15(Global_20364, "SET_DATA_SLOT");
								unk_0xC6A3EF6C4A3412C1(1);
								unk_0xC6A3EF6C4A3412C1(i);
								unk_0xC6A3EF6C4A3412C1(Global_8260[num /*15*/].f_10);
								unk_0xC6A3EF6C4A3412C1(0);
								func_28(&Global_8260[num /*15*/]);
								unk_0xC6A3EF6C4A3412C1(num3);
								unk_0xAE3413B0654A0035();
							}
							else if (num == 3)
							{
								if (IS_BIT_SET(Global_8254, 3))
								{
									num4 = 42;
									Global_20588 = 1;
								}
								else
								{
									num4 = 255;
									Global_20588 = 0;
								}
							
								unk_0x9FD96C5DE6EDFC15(Global_20364, "SET_DATA_SLOT");
								unk_0xC6A3EF6C4A3412C1(1);
								unk_0xC6A3EF6C4A3412C1(i);
								unk_0xC6A3EF6C4A3412C1(Global_8260[num /*15*/].f_10);
								unk_0xC6A3EF6C4A3412C1(0);
								func_28(&Global_8260[num /*15*/]);
								unk_0xC6A3EF6C4A3412C1(num4);
								unk_0xAE3413B0654A0035();
							}
							else if (num == 8)
							{
								unk_0x9FD96C5DE6EDFC15(Global_20364, "SET_DATA_SLOT");
								unk_0xC6A3EF6C4A3412C1(1);
								unk_0xC6A3EF6C4A3412C1(i);
								unk_0xC6A3EF6C4A3412C1(Global_8260[num /*15*/].f_10);
								unk_0xC6A3EF6C4A3412C1(0);
								func_28(&Global_8260[num /*15*/]);
								unk_0xC6A3EF6C4A3412C1(42);
								unk_0xAE3413B0654A0035();
							}
							else if (num == 23 && unk_0x4310A0DB886F9FED(&Global_8260[num /*15*/], "CELL_BENWEB" /*Benny's*/) && IS_BIT_SET(Global_8254, 6))
							{
								unk_0x9FD96C5DE6EDFC15(Global_20364, "SET_DATA_SLOT");
								unk_0xC6A3EF6C4A3412C1(1);
								unk_0xC6A3EF6C4A3412C1(i);
								unk_0xC6A3EF6C4A3412C1(Global_8260[num /*15*/].f_10);
								unk_0xC6A3EF6C4A3412C1(0);
								func_28(&Global_8260[num /*15*/]);
								unk_0xC6A3EF6C4A3412C1(42);
								unk_0xAE3413B0654A0035();
							}
							else if (Global_8260[num /*15*/].f_10 == 57 && num == 23)
							{
								value3 = 0;
								value3 = Global_1890001.f_1;
								func_32(Global_20364, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(i), SYSTEM::TO_FLOAT(Global_8260[num /*15*/].f_10), SYSTEM::TO_FLOAT(value3), -1f, &Global_8260[num /*15*/], 0, 0, 0, 0);
							}
							else
							{
								func_32(Global_20364, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(i), SYSTEM::TO_FLOAT(Global_8260[num /*15*/].f_10), SYSTEM::TO_FLOAT(0), -1f, &Global_8260[num /*15*/], 0, 0, 0, 0);
							}
						
							Global_8822[i] = 1;
						}
					}
				}
			
				num = num + 1;
			}
		}
	}

	return;
}

BOOL func_34(int iParam0) // Position - 0x246E
{
	return Global_43257 == iParam0;
}

void func_35(int iParam0, char* sParam1, float fParam2, int iParam3, int iParam4, int iParam5, int iParam6) // Position - 0x247C
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

void func_36(BOOL bParam0) // Position - 0x24DF
{
	if (bParam0)
		if (Global_20383.f_1 == 9)
			Global_20584 = true;
	else
		Global_20584 = false;

	return;
}

void func_37() // Position - 0x2501
{
	if (func_16() || IS_BIT_SET(Global_8253, 8))
	{
		unk_0x061B1200C95204CB(&Global_8253, 8);
		_UPDATE_CURRENT_PLAYER_CHARACTER();
	
		if (!unk_0x055111B11E6624FD(unk_0xC1A5EC5C986B98AD(), 0))
		{
			if (!unk_0x1774A64AB2C276EF(unk_0xC1A5EC5C986B98AD()))
			{
				if (func_44())
				{
				}
				else if (unk_0x24B651D85CCE5EB4(joaat("cellphone_flashhand")) == 0)
				{
					if (IS_BIT_SET(Global_8254, 21))
						unk_0x061B1200C95204CB(&Global_8254, 21);
				
					if (Global_20592 == 1)
						Global_20592 = 0;
				
					switch (Global_20383.f_1)
					{
						case 3:
							Global_20383.f_1 = 4;
						
							if (iLocal_94 == 0)
							{
								func_38();
								iLocal_94 = 1;
							}
							break;
					
						default:
							break;
					}
				
					Global_20582 = 1;
				}
			}
		}
	}

	return;
}

void func_38() // Position - 0x25A3
{
	if (Global_4541031 == 1)
	{
		if (!func_43())
			return;
	
		if (func_39(unk_0x93E99A2DBCBA9CFA()))
		{
			if (unk_0x516080EA609481E1(803) == 1)
			{
				unk_0xD30970E11AD0FF0D("CELL_EMAIL_EVENT" /*You have received an Eyefind message. Check your Eyefind inbox from the GTAO Eyefind website via a laptop or your cellphone's Internet application.*/);
				unk_0xEAFC6135DF75DE92(1, 1);
			}
			else
			{
				unk_0x516080EA609481E1(803) != 1;
			}
		}
	}

	return;
}

BOOL func_39(int iParam0) // Position - 0x25F1
{
	int num;
	var unk;

	if (unk_0x63A535927A165A05() == 0)
		return false;

	num = -1;

	if (iParam0 != unk_0x93E99A2DBCBA9CFA())
	{
		num = iParam0;
	
		if (num == -1)
			return false;
	}

	if (unk_0x674D69D3896862C7() || func_42())
		if (unk_0x29F2DE8E71A61D03(0, num))
			if (unk_0x1D05BD8EFF80B3E3())
				return true;

	if (unk_0xCCE9BCDAB8B7FAED() || func_41())
	{
		if (iParam0 == unk_0x93E99A2DBCBA9CFA())
		{
			if (unk_0x48265A16004DBF89(0, -3, 1) || unk_0x29F2DE8E71A61D03(1, -1))
				return true;
		}
		else
		{
			unk = { func_40(iParam0) };
		
			if (unk_0x29F2DE8E71A61D03(0, -1) || unk_0x29F2DE8E71A61D03(1, -1) && unk_0xF27423FF2D483551(&unk))
				return true;
		}
	}

	if (unk_0xCC17806DB0C41C19())
		if (unk_0x29F2DE8E71A61D03(0, num))
			if (unk_0x1D05BD8EFF80B3E3())
				return true;

	return false;
}

struct<13> func_40(int iParam0) // Position - 0x26CA
{
	var unk;

	unk_0x23BD70608BA4F8D9(iParam0, &unk, 13);
	return unk;
}

BOOL func_41() // Position - 0x26E1
{
	return unk_0x8CCF8DC8E92BDA94() || unk_0x14F62099DEBAEA33();
}

BOOL func_42() // Position - 0x26F7
{
	return unk_0x01689609224A6C92() || unk_0xEE17703CF2C2875A();
}

BOOL func_43() // Position - 0x270D
{
	if (func_42())
		if (unk_0x2367D34D8582249E() == 0)
			return true;
	else if (func_41())
		if (unk_0x2367D34D8582249E() == 0)
			return true;
	else if (unk_0xCC17806DB0C41C19())
		if (unk_0x1D05BD8EFF80B3E3())
			return true;

	return false;
}

BOOL func_44() // Position - 0x2754
{
	if (unk_0x48DC6A21D1CAD89C(unk_0x93E99A2DBCBA9CFA()))
		if (unk_0x97247A0CAE4CEFB6(unk_0xC1A5EC5C986B98AD(), 78, 1) || unk_0x48A4D45B3B4CEFFD(unk_0xC1A5EC5C986B98AD()) || unk_0xED74DF0E946E0A76(unk_0xC1A5EC5C986B98AD(), 0) || unk_0xA92CED053FDC0D06(unk_0xC1A5EC5C986B98AD()) || unk_0x76781CF4D4ED46C9(unk_0xC1A5EC5C986B98AD()) == 1)
			return true;
		else
			return false;

	return true;
}

void _UPDATE_CURRENT_PLAYER_CHARACTER() // Position - 0x27BF
{
	if (func_34(14))
	{
		if (!unk_0x055111B11E6624FD(unk_0xC1A5EC5C986B98AD(), 0))
			if (unk_0x504B9BB48D41C264(unk_0xC1A5EC5C986B98AD()) == Global_113648.f_28052[0 /*29*/])
				Global_20383 = CHAR_MICHAEL;
			else if (unk_0x504B9BB48D41C264(unk_0xC1A5EC5C986B98AD()) == Global_113648.f_28052[1 /*29*/])
				Global_20383 = CHAR_FRANKLIN;
			else if (unk_0x504B9BB48D41C264(unk_0xC1A5EC5C986B98AD()) == Global_113648.f_28052[2 /*29*/])
				Global_20383 = CHAR_TREVOR;
			else
				Global_20383 = CHAR_MICHAEL;
	}
	else
	{
		Global_20383 = _GET_CURRENT_PLAYER_CHARACTER();
	
		if (Global_20383 == _CHAR_NULL)
			Global_20383 = CHAR_MULTIPLAYER;
	
		if (Global_78558)
			Global_20383 = CHAR_MULTIPLAYER;
	
		if (Global_20383 > CHAR_MULTIPLAYER)
			Global_20383 = CHAR_MULTIPLAYER;
	}

	return;
}

eCharacter _GET_CURRENT_PLAYER_CHARACTER() // Position - 0x2861
{
	func_47();
	return Global_113648.f_2365.f_539.f_4321;
}

void func_47() // Position - 0x287A
{
	eCharacter character;

	if (unk_0x7DE17ACDD8BA2642(unk_0xC1A5EC5C986B98AD()))
	{
		if (_GET_CHARACTER_MODEL(Global_113648.f_2365.f_539.f_4321) != unk_0x504B9BB48D41C264(unk_0xC1A5EC5C986B98AD()))
		{
			character = _GET_PLAYER_CHARACTER_FROM_PED(unk_0xC1A5EC5C986B98AD());
		
			if (func_48(character) && !func_34(14) || Global_112599)
			{
				if (Global_113648.f_2365.f_539.f_4321 != character && func_48(Global_113648.f_2365.f_539.f_4321))
					Global_113648.f_2365.f_539.f_4322 = Global_113648.f_2365.f_539.f_4321;
			
				Global_113648.f_2365.f_539.f_4323 = character;
				Global_113648.f_2365.f_539.f_4321 = character;
				return;
			}
		}
		else
		{
			if (Global_113648.f_2365.f_539.f_4321 != _CHAR_NULL)
				Global_113648.f_2365.f_539.f_4323 = Global_113648.f_2365.f_539.f_4321;
		
			return;
		}
	}

	Global_113648.f_2365.f_539.f_4321 = 145;
	return;
}

BOOL func_48(eCharacter echParam0) // Position - 0x2977
{
	return echParam0 < CHAR_MULTIPLAYER;
}

eCharacter _GET_PLAYER_CHARACTER_FROM_PED(var uParam0) // Position - 0x2983
{
	eCharacter i;
	int num;

	if (unk_0x7DE17ACDD8BA2642(uParam0))
	{
		num = unk_0x504B9BB48D41C264(uParam0);
	
		for (i = CHAR_MICHAEL; i <= CHAR_TREVOR; i = i + 1)
		{
			if (_GET_CHARACTER_MODEL(i) == num)
				return i;
		}
	}

	return _CHAR_NULL;
}

int _GET_CHARACTER_MODEL(eCharacter character) // Position - 0x29C0
{
	if (func_48(character))
		return func_51(character);
	else
		character != _CHAR_NULL;

	return 0;
}

int func_51(eCharacter echParam0) // Position - 0x29E5
{
	return Global_2028[echParam0 /*29*/];
}

BOOL func_52() // Position - 0x29F4
{
	if (Global_20383.f_1 == 1 || Global_20383.f_1 == 0)
		return true;

	return false;
}

void func_53() // Position - 0x2A1B
{
	var unk;
	int num;
	var unk17;
	var unk33;
	var unk49;
	var unk65;

	unk_0x061B1200C95204CB(&Global_4542297, 0);

	if (Global_22786 != 0)
	{
		if (unk_0xDFF9E7382B675942(Global_22786))
		{
			if (unk_0x367CC6D9413FE353(Global_22786))
			{
				TEXT_LABEL_ASSIGN_STRING(&unk, unk_0x0E2FD3D4F40014B2(Global_22786), 64);
				Global_22794[Global_22792] = Global_22786;
			}
			else
			{
				TEXT_LABEL_ASSIGN_STRING(&unk, "CHAR_DEFAULT", 64);
				Global_22794[Global_4542281] = 0;
			}
		}
		else
		{
			TEXT_LABEL_ASSIGN_STRING(&unk, "CHAR_DEFAULT", 64);
			Global_22794[Global_4542281] = 0;
		}
	}
	else
	{
		TEXT_LABEL_ASSIGN_STRING(&unk, unk_0x45816CECE89B5B19(&(Global_2028[Global_4541032[Global_4542281 /*104*/].f_17 /*29*/].f_7)), 64);
		Global_22794[Global_4542281] = 0;
	}

	if (unk_0x2AC37494BBF1DB16(&unk))
		TEXT_LABEL_ASSIGN_STRING(&unk, "CHAR_DEFAULT", 64);
	else if (unk_0x4310A0DB886F9FED(&unk, "NULL"))
		TEXT_LABEL_ASSIGN_STRING(&unk, "CHAR_DEFAULT", 64);

	if (Global_4541032[Global_4542281 /*104*/].f_32 == 4 || Global_4541032[Global_4542281 /*104*/].f_32 == 5 || Global_4541032[Global_4542281 /*104*/].f_32 == 6 || Global_4541032[Global_4542281 /*104*/].f_32 == 7 || Global_4541032[Global_4542281 /*104*/].f_32 == 8 || Global_4541032[Global_4542281 /*104*/].f_32 == 9 || Global_4541032[Global_4542281 /*104*/].f_32 == 10 || Global_4541032[Global_4542281 /*104*/].f_32 == 11)
	{
		num = 0;
	
		switch (Global_4541032[Global_4542281 /*104*/].f_49)
		{
			case 1:
				unk_0xD30970E11AD0FF0D("CELL_CL01" /*~a~ ~a~.*/);
				break;
		
			case 2:
				unk_0xD30970E11AD0FF0D("CELL_CL02" /*~a~ ~a~, ~a~.*/);
				break;
		
			case 3:
				unk_0xD30970E11AD0FF0D("CELL_CL03" /*~a~ ~a~, ~a~, ~a~.*/);
				break;
		
			case 4:
				unk_0xD30970E11AD0FF0D("CELL_CL04" /*~a~ ~a~, ~a~, ~a~, ~a~.*/);
				break;
		
			case 5:
				unk_0xD30970E11AD0FF0D("CELL_CL05" /*~a~ ~a~, ~a~, ~a~, ~a~, ~a~.*/);
				break;
		
			case 6:
				unk_0xD30970E11AD0FF0D("CELL_CL06" /*~a~ ~a~, ~a~, ~a~, ~a~, ~a~, ~a~.*/);
				break;
		
			case 7:
				unk_0xD30970E11AD0FF0D("CELL_CL07" /*~a~ ~a~, ~a~, ~a~, ~a~, ~a~, ~a~, ~a~.*/);
				break;
		
			case 8:
				unk_0xD30970E11AD0FF0D("CELL_CL08" /*~a~ ~a~, ~a~, ~a~, ~a~, ~a~, ~a~, ~a~, ~a~.*/);
				break;
		
			case 9:
				unk_0xD30970E11AD0FF0D("CELL_CL09" /*~a~ ~a~, ~a~, ~a~, ~a~, ~a~, ~a~, ~a~, ~a~, ~a~.*/);
				break;
		}
	
		unk_0x48849374B34BB7B9(&Global_4541032[Global_4542281 /*104*/]);
	
		while (num < Global_4541032[Global_4542281 /*104*/].f_49)
		{
			switch (Global_4541032[Global_4542281 /*104*/].f_32)
			{
				case 4:
					unk_0x48849374B34BB7B9(&Global_2793044.f_1755[num /*4*/]);
					break;
			
				case 5:
					unk_0x48849374B34BB7B9(&Global_1935188[num /*4*/]);
					break;
			
				case 6:
					unk_0x48849374B34BB7B9(&Global_1935229[num /*4*/]);
					break;
			
				case 7:
					unk_0x48849374B34BB7B9(&Global_1935250[num /*4*/]);
					break;
			
				case 8:
					unk_0x48849374B34BB7B9(&Global_1935267[num /*4*/]);
					break;
			
				case 9:
					unk_0x48849374B34BB7B9(&Global_1935280[num /*4*/]);
					break;
			
				case 10:
					unk_0x48849374B34BB7B9(&Global_1935293[num /*4*/]);
					break;
			
				case 11:
					unk_0x48849374B34BB7B9(&Global_1935306[num /*4*/]);
					break;
			}
		
			num = num + 1;
		}
	
		TEXT_LABEL_ASSIGN_STRING(&unk17, unk_0x45816CECE89B5B19(&(Global_2028[Global_4541032[Global_4542281 /*104*/].f_17 /*29*/].f_3)), 64);
		iLocal_64 = unk_0x4BE755B3858339A1(&unk, &unk, 0, 2, &unk17, 0);
		unk_0xECDAB41968FF21A8(&Global_4542297, 1);
		Global_22783 = 1;
		Global_22782 = iLocal_64;
		Global_22786 = 0;
	}
	else
	{
		unk_0xD30970E11AD0FF0D(&Global_4541032[Global_4542281 /*104*/]);
	
		switch (Global_4541032[Global_4542281 /*104*/].f_32)
		{
			case 0:
				break;
		
			case 1:
				unk_0x76B34CBB6F5FA1BB(&(Global_4541032[Global_4542281 /*104*/].f_33));
			
				if (Global_4541032[Global_4542281 /*104*/].f_66 == 1 && !unk_0x4310A0DB886F9FED(&(Global_4541032[Global_4542281 /*104*/].f_67), "NULL"))
					unk_0x76B34CBB6F5FA1BB(&(Global_4541032[Global_4542281 /*104*/].f_67));
			
				if (Global_4541032[Global_4542281 /*104*/].f_66 == 2 && !unk_0x4310A0DB886F9FED(&(Global_4541032[Global_4542281 /*104*/].f_67), "NULL") && !unk_0x4310A0DB886F9FED(&(Global_4541032[Global_4542281 /*104*/].f_83), "NULL"))
				{
					if (unk_0x42FA33BDEDF21186(&(Global_4541032[Global_4542281 /*104*/].f_67)))
						unk_0x48849374B34BB7B9(&(Global_4541032[Global_4542281 /*104*/].f_67));
					else
						unk_0x76B34CBB6F5FA1BB(&(Global_4541032[Global_4542281 /*104*/].f_67));
				
					if (unk_0x42FA33BDEDF21186(&(Global_4541032[Global_4542281 /*104*/].f_83)))
						unk_0x48849374B34BB7B9(&(Global_4541032[Global_4542281 /*104*/].f_83));
					else
						unk_0x76B34CBB6F5FA1BB(&(Global_4541032[Global_4542281 /*104*/].f_83));
				}
				break;
		
			case 2:
				unk_0x64C50E40AA09A6B5(Global_4541032[Global_4542281 /*104*/].f_49);
				break;
		
			case 3:
				unk_0x76B34CBB6F5FA1BB(&(Global_4541032[Global_4542281 /*104*/].f_33));
				unk_0x64C50E40AA09A6B5(Global_4541032[Global_4542281 /*104*/].f_49);
			
				if (Global_4541032[Global_4542281 /*104*/].f_66 == 1 && !unk_0x4310A0DB886F9FED(&(Global_4541032[Global_4542281 /*104*/].f_67), "NULL"))
					unk_0x76B34CBB6F5FA1BB(&(Global_4541032[Global_4542281 /*104*/].f_67));
			
				if (Global_4541032[Global_4542281 /*104*/].f_66 == 2 && !unk_0x4310A0DB886F9FED(&(Global_4541032[Global_4542281 /*104*/].f_67), "NULL") && !unk_0x4310A0DB886F9FED(&(Global_4541032[Global_4542281 /*104*/].f_83), "NULL"))
				{
					if (unk_0x42FA33BDEDF21186(&(Global_4541032[Global_4542281 /*104*/].f_67)))
						unk_0x48849374B34BB7B9(&(Global_4541032[Global_4542281 /*104*/].f_67));
					else
						unk_0x76B34CBB6F5FA1BB(&(Global_4541032[Global_4542281 /*104*/].f_67));
				
					if (unk_0x42FA33BDEDF21186(&(Global_4541032[Global_4542281 /*104*/].f_83)))
						unk_0x48849374B34BB7B9(&(Global_4541032[Global_4542281 /*104*/].f_83));
					else
						unk_0x76B34CBB6F5FA1BB(&(Global_4541032[Global_4542281 /*104*/].f_83));
				}
				break;
		}
	
		if (Global_4541032[Global_4542281 /*104*/].f_17 == _CHAR_NULL)
		{
			TEXT_LABEL_ASSIGN_STRING(&unk33, "<C>", 64);
			TEXT_LABEL_APPEND_STRING(&unk33, &Global_8941, 64);
			TEXT_LABEL_APPEND_STRING(&unk33, "</C>", 64);
			iLocal_64 = unk_0x4BE755B3858339A1(&unk, &unk, 0, 2, &unk33, 0);
			unk_0xECDAB41968FF21A8(&Global_4542297, 1);
			Global_22783 = 1;
			Global_22782 = iLocal_64;
		}
		else
		{
			TEXT_LABEL_ASSIGN_STRING(&unk49, unk_0x45816CECE89B5B19(&(Global_2028[Global_4541032[Global_4542281 /*104*/].f_17 /*29*/].f_3)), 64);
		
			if (Global_4541032[Global_4542281 /*104*/].f_17 == CHAR_SOCIAL_CLUB)
			{
				TEXT_LABEL_ASSIGN_STRING(&unk65, "~HUD_COLOUR_SOCIAL_CLUB~", 64);
				TEXT_LABEL_APPEND_STRING(&unk65, &unk49, 64);
				iLocal_64 = unk_0x4BE755B3858339A1(&unk, &unk, 0, 2, &unk65, 0);
			}
			else
			{
				iLocal_64 = unk_0x4BE755B3858339A1(&unk, &unk, 0, 2, &unk49, 0);
			}
		
			unk_0xECDAB41968FF21A8(&Global_4542297, 1);
			Global_22783 = 1;
			Global_22782 = iLocal_64;
			Global_22786 = 0;
		}
	}

	Global_4541032[Global_4542281 /*104*/].f_16 = iLocal_64;
	return;
}

void func_54() // Position - 0x3065
{
	var unk;
	var unk17;
	var unk33;

	TEXT_LABEL_ASSIGN_STRING(&unk, unk_0x45816CECE89B5B19(&(Global_2028[Global_8939 /*29*/].f_7)), 64);

	if (Global_8958 == 0)
	{
		unk_0xD30970E11AD0FF0D("");
		TEXT_LABEL_ASSIGN_STRING(&unk17, unk_0x45816CECE89B5B19(&Global_8863[1 /*6*/]), 64);
		unk33 = unk_0x45816CECE89B5B19("CELL_253" /*New Contact*/);
		unk_0x4BE755B3858339A1(&unk, &unk, 0, 3, unk33, &unk17);
	}
	else
	{
		unk_0xD30970E11AD0FF0D("CELL_255" /*New Contact: ~n~~a~*/);
		unk_0x48849374B34BB7B9(&Global_8863[1 /*6*/]);
		unk_0x4BE755B3858339A1(&unk, &unk, 0, 3, "", 0);
	}

	unk_0x061B1200C95204CB(&Global_8253, 0);
	return;
}

void func_55() // Position - 0x30E2
{
	if (IS_BIT_SET(Global_8253, 1))
	{
		func_58();
		func_56();
		Global_113648.f_14053[Global_20383 /*20*/].f_18 = 1;
	
		if (unk_0xA26A9A07F761D8F8())
		{
			uLocal_53[Global_20383] = unk_0x0DB7F8294D73598B();
			uLocal_43[Global_20383] = 1;
		}
		else if (!IS_BIT_SET(Global_8253, 10))
		{
			uLocal_48[Global_20383] = unk_0xA5E11AF0A2B928C1();
			uLocal_43[Global_20383] = 1;
		}
		else
		{
			uLocal_48[0] = unk_0xA5E11AF0A2B928C1();
			uLocal_48[2] = unk_0xA5E11AF0A2B928C1();
			uLocal_48[1] = unk_0xA5E11AF0A2B928C1();
			uLocal_43[0] = 1;
			uLocal_43[2] = 1;
			uLocal_43[1] = 1;
		}
	
		unk_0x061B1200C95204CB(&Global_8253, 1);
	}

	return;
}

void func_56() // Position - 0x317B
{
	_UPDATE_CURRENT_PLAYER_CHARACTER();

	if (Global_78558)
		Global_113648.f_14053[3 /*20*/].f_10 = _MPCHAR_STAT_GET_INT(MP_STAT_FM_CELLPHONE_VIBRATE, -1, 0);

	if (Global_113648.f_14053[Global_20383 /*20*/].f_10 == 1)
		if (!func_57(0))
			unk_0xCA9F34C06A0529CE(0, 2000, 100);

	return;
}

BOOL func_57(int iParam0) // Position - 0x31C8
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

void func_58() // Position - 0x321F
{
	var unk;
	int num;
	int num2;
	var unk17;
	var unk33;
	var unk49;
	var unk65;

	if (Global_22786 != 0)
	{
		if (unk_0xDFF9E7382B675942(Global_22786))
		{
			if (unk_0x367CC6D9413FE353(Global_22786))
			{
				TEXT_LABEL_ASSIGN_STRING(&unk, unk_0x0E2FD3D4F40014B2(Global_22786), 64);
				Global_22794[Global_22792] = Global_22786;
			}
			else
			{
				TEXT_LABEL_ASSIGN_STRING(&unk, "CHAR_DEFAULT", 64);
				Global_22794[Global_22792] = 0;
			}
		}
		else
		{
			TEXT_LABEL_ASSIGN_STRING(&unk, "CHAR_DEFAULT", 64);
			Global_22794[Global_22792] = 0;
		}
	}
	else
	{
		TEXT_LABEL_ASSIGN_STRING(&unk, unk_0x45816CECE89B5B19(&(Global_2028[Global_113648.f_14143[Global_22792 /*104*/].f_17 /*29*/].f_7)), 64);
	
		if (Global_113648.f_14143[Global_22792 /*104*/].f_17 == CHAR_COMIC_STORE)
			TEXT_LABEL_ASSIGN_STRING(&unk, unk_0x45816CECE89B5B19("CELL_COMIC_P" /*CHAR_COMIC_STORE*/), 64);
	
		Global_22794[Global_22792] = 0;
	}

	if (unk_0x2AC37494BBF1DB16(&unk))
		TEXT_LABEL_ASSIGN_STRING(&unk, "CHAR_DEFAULT", 64);
	else if (unk_0x4310A0DB886F9FED(&unk, "NULL"))
		TEXT_LABEL_ASSIGN_STRING(&unk, "CHAR_DEFAULT", 64);

	if (Global_113648.f_14143[Global_22792 /*104*/].f_32 == 4 || Global_113648.f_14143[Global_22792 /*104*/].f_32 == 5 || Global_113648.f_14143[Global_22792 /*104*/].f_32 == 6 || Global_113648.f_14143[Global_22792 /*104*/].f_32 == 7 || Global_113648.f_14143[Global_22792 /*104*/].f_32 == 8 || Global_113648.f_14143[Global_22792 /*104*/].f_32 == 9 || Global_113648.f_14143[Global_22792 /*104*/].f_32 == 10 || Global_113648.f_14143[Global_22792 /*104*/].f_32 == 11 || Global_113648.f_14143[Global_22792 /*104*/].f_32 == 12)
	{
		num = 0;
		num2 = func_59(9, Global_113648.f_14143[Global_22792 /*104*/].f_49);
	
		switch (num2)
		{
			case 1:
				unk_0xD30970E11AD0FF0D("CELL_CL01" /*~a~ ~a~.*/);
				break;
		
			case 2:
				unk_0xD30970E11AD0FF0D("CELL_CL02" /*~a~ ~a~, ~a~.*/);
				break;
		
			case 3:
				unk_0xD30970E11AD0FF0D("CELL_CL03" /*~a~ ~a~, ~a~, ~a~.*/);
				break;
		
			case 4:
				unk_0xD30970E11AD0FF0D("CELL_CL04" /*~a~ ~a~, ~a~, ~a~, ~a~.*/);
				break;
		
			case 5:
				unk_0xD30970E11AD0FF0D("CELL_CL05" /*~a~ ~a~, ~a~, ~a~, ~a~, ~a~.*/);
				break;
		
			case 6:
				unk_0xD30970E11AD0FF0D("CELL_CL06" /*~a~ ~a~, ~a~, ~a~, ~a~, ~a~, ~a~.*/);
				break;
		
			case 7:
				unk_0xD30970E11AD0FF0D("CELL_CL07" /*~a~ ~a~, ~a~, ~a~, ~a~, ~a~, ~a~, ~a~.*/);
				break;
		
			case 8:
				unk_0xD30970E11AD0FF0D("CELL_CL08" /*~a~ ~a~, ~a~, ~a~, ~a~, ~a~, ~a~, ~a~, ~a~.*/);
				break;
		
			case 9:
				unk_0xD30970E11AD0FF0D("CELL_CL09" /*~a~ ~a~, ~a~, ~a~, ~a~, ~a~, ~a~, ~a~, ~a~, ~a~.*/);
				break;
		}
	
		unk_0x48849374B34BB7B9(&Global_113648.f_14143[Global_22792 /*104*/]);
	
		while (num < num2)
		{
			switch (Global_113648.f_14143[Global_22792 /*104*/].f_32)
			{
				case 4:
					unk_0x48849374B34BB7B9(&Global_2793044.f_1755[num /*4*/]);
					break;
			
				case 5:
					unk_0x48849374B34BB7B9(&Global_1935188[num /*4*/]);
					break;
			
				case 6:
					unk_0x48849374B34BB7B9(&Global_1935229[num /*4*/]);
					break;
			
				case 7:
					unk_0x48849374B34BB7B9(&Global_1935250[num /*4*/]);
					break;
			
				case 8:
					unk_0x48849374B34BB7B9(&Global_1935267[num /*4*/]);
					break;
			
				case 9:
					unk_0x48849374B34BB7B9(&Global_1935280[num /*4*/]);
					break;
			
				case 10:
					unk_0x48849374B34BB7B9(&Global_1935293[num /*4*/]);
					break;
			
				case 11:
					unk_0x48849374B34BB7B9(&Global_1935306[num /*4*/]);
					break;
			
				case 12:
					unk_0x48849374B34BB7B9(&Global_1935319[num /*4*/]);
					break;
			}
		
			num = num + 1;
		}
	
		TEXT_LABEL_ASSIGN_STRING(&unk17, unk_0x45816CECE89B5B19(&(Global_2028[Global_113648.f_14143[Global_22792 /*104*/].f_17 /*29*/].f_3)), 64);
		iLocal_64 = unk_0x4BE755B3858339A1(&unk, &unk, 0, 1, &unk17, 0);
		Global_22783 = 3;
		Global_22782 = iLocal_64;
		Global_22786 = 0;
	}
	else
	{
		unk_0xD30970E11AD0FF0D(&Global_113648.f_14143[Global_22792 /*104*/]);
	
		switch (Global_113648.f_14143[Global_22792 /*104*/].f_32)
		{
			case 0:
				break;
		
			case 1:
				unk_0x76B34CBB6F5FA1BB(&(Global_113648.f_14143[Global_22792 /*104*/].f_33));
			
				if (Global_113648.f_14143[Global_22792 /*104*/].f_66 == 1 && !unk_0x4310A0DB886F9FED(&(Global_113648.f_14143[Global_22792 /*104*/].f_67), "NULL"))
					unk_0x76B34CBB6F5FA1BB(&(Global_113648.f_14143[Global_22792 /*104*/].f_67));
			
				if (Global_113648.f_14143[Global_22792 /*104*/].f_66 == 2 && !unk_0x4310A0DB886F9FED(&(Global_113648.f_14143[Global_22792 /*104*/].f_67), "NULL") && !unk_0x4310A0DB886F9FED(&(Global_113648.f_14143[Global_22792 /*104*/].f_83), "NULL"))
				{
					if (unk_0x42FA33BDEDF21186(&(Global_113648.f_14143[Global_22792 /*104*/].f_67)))
						unk_0x48849374B34BB7B9(&(Global_113648.f_14143[Global_22792 /*104*/].f_67));
					else
						unk_0x76B34CBB6F5FA1BB(&(Global_113648.f_14143[Global_22792 /*104*/].f_67));
				
					if (unk_0x42FA33BDEDF21186(&(Global_113648.f_14143[Global_22792 /*104*/].f_83)))
						unk_0x48849374B34BB7B9(&(Global_113648.f_14143[Global_22792 /*104*/].f_83));
					else
						unk_0x76B34CBB6F5FA1BB(&(Global_113648.f_14143[Global_22792 /*104*/].f_83));
				}
				break;
		
			case 2:
				unk_0x64C50E40AA09A6B5(Global_113648.f_14143[Global_22792 /*104*/].f_49);
				break;
		
			case 3:
				unk_0x76B34CBB6F5FA1BB(&(Global_113648.f_14143[Global_22792 /*104*/].f_33));
				unk_0x64C50E40AA09A6B5(Global_113648.f_14143[Global_22792 /*104*/].f_49);
			
				if (Global_113648.f_14143[Global_22792 /*104*/].f_66 == 1 && !unk_0x4310A0DB886F9FED(&(Global_113648.f_14143[Global_22792 /*104*/].f_67), "NULL"))
					unk_0x76B34CBB6F5FA1BB(&(Global_113648.f_14143[Global_22792 /*104*/].f_67));
			
				if (Global_113648.f_14143[Global_22792 /*104*/].f_66 == 2 && !unk_0x4310A0DB886F9FED(&(Global_113648.f_14143[Global_22792 /*104*/].f_67), "NULL") && !unk_0x4310A0DB886F9FED(&(Global_113648.f_14143[Global_22792 /*104*/].f_83), "NULL"))
				{
					if (unk_0x42FA33BDEDF21186(&(Global_113648.f_14143[Global_22792 /*104*/].f_67)))
						unk_0x48849374B34BB7B9(&(Global_113648.f_14143[Global_22792 /*104*/].f_67));
					else
						unk_0x76B34CBB6F5FA1BB(&(Global_113648.f_14143[Global_22792 /*104*/].f_67));
				
					if (unk_0x42FA33BDEDF21186(&(Global_113648.f_14143[Global_22792 /*104*/].f_83)))
						unk_0x48849374B34BB7B9(&(Global_113648.f_14143[Global_22792 /*104*/].f_83));
					else
						unk_0x76B34CBB6F5FA1BB(&(Global_113648.f_14143[Global_22792 /*104*/].f_83));
				}
				break;
		}
	
		if (Global_113648.f_14143[Global_22792 /*104*/].f_17 == _CHAR_NULL)
		{
			TEXT_LABEL_ASSIGN_STRING(&unk33, "<C>", 64);
			TEXT_LABEL_APPEND_STRING(&unk33, &Global_8941, 64);
			TEXT_LABEL_APPEND_STRING(&unk33, "</C>", 64);
			iLocal_64 = unk_0x4BE755B3858339A1(&unk, &unk, 0, 1, &unk33, 0);
			Global_22783 = 3;
			Global_22782 = iLocal_64;
		}
		else
		{
			TEXT_LABEL_ASSIGN_STRING(&unk49, unk_0x45816CECE89B5B19(&(Global_2028[Global_113648.f_14143[Global_22792 /*104*/].f_17 /*29*/].f_3)), 64);
		
			if (Global_113648.f_14143[Global_22792 /*104*/].f_17 == CHAR_SOCIAL_CLUB)
			{
				TEXT_LABEL_ASSIGN_STRING(&unk65, "~HUD_COLOUR_SOCIAL_CLUB~", 64);
				TEXT_LABEL_APPEND_STRING(&unk65, &unk49, 64);
				iLocal_64 = unk_0x4BE755B3858339A1(&unk, &unk, 0, 1, &unk65, 0);
			}
			else
			{
				iLocal_64 = unk_0x4BE755B3858339A1(&unk, &unk, 0, 1, &unk49, 0);
			}
		
			Global_22783 = 3;
			Global_22782 = iLocal_64;
			Global_22786 = 0;
		}
	}

	Global_113648.f_14143[Global_22792 /*104*/].f_16 = iLocal_64;
	return;
}

int func_59(int iParam0, int iParam1) // Position - 0x38EB
{
	if (iParam0 < iParam1)
		return iParam0;
	else if (iParam1 < iParam0)
		return iParam1;

	return iParam0;
}

void func_60() // Position - 0x3910
{
	if (IS_BIT_SET(Global_8253, 19))
	{
		unk_0x061B1200C95204CB(&Global_8253, 19);
		_UPDATE_CURRENT_PLAYER_CHARACTER();
		Global_113648.f_14053[3 /*20*/].f_18 = 0;
		Global_113648.f_14053[3 /*20*/].f_17 = 0;
	}

	return;
}

void func_61() // Position - 0x3948
{
	if (uLocal_43[Global_20383] == 1)
	{
		if (unk_0xA26A9A07F761D8F8())
		{
			iLocal_63 = unk_0x55DB5FC567C065D9(unk_0x0DB7F8294D73598B(), uLocal_53[Global_20383]);
		}
		else
		{
			uLocal_58[Global_20383] = unk_0xA5E11AF0A2B928C1();
			iLocal_63 = uLocal_58[Global_20383] - uLocal_48[Global_20383];
		}
	
		if (iLocal_63 > 300000)
		{
			Global_113648.f_14053[Global_20383 /*20*/].f_18 = 0;
			Global_113648.f_14053[Global_20383 /*20*/].f_17 = 0;
			uLocal_43[Global_20383] = 0;
		}
	}

	return;
}

void func_62() // Position - 0x39C1
{
	int num;

	_UPDATE_CURRENT_PLAYER_CHARACTER();

	if (Global_78558 == false)
	{
		if (!func_52())
		{
			if (iLocal_69 == 0)
			{
				if (Global_113648.f_14143[21 /*104*/].f_24 != 0 || Global_113648.f_14143[22 /*104*/].f_24 != 0 || Global_113648.f_14143[23 /*104*/].f_24 != 0)
				{
					switch (Global_20383)
					{
						case CHAR_MICHAEL:
							if (Global_113648.f_14143[21 /*104*/].f_24 != 0)
							{
								iLocal_42 = 21;
								iLocal_69 = 1;
								SYSTEM::SETTIMERA(0);
							}
							break;
					
						case CHAR_FRANKLIN:
							if (Global_113648.f_14143[22 /*104*/].f_24 != 0)
							{
								iLocal_42 = 22;
								iLocal_69 = 1;
								SYSTEM::SETTIMERA(0);
							}
							break;
					
						case CHAR_TREVOR:
							if (Global_113648.f_14143[23 /*104*/].f_24 != 0)
							{
								iLocal_42 = 23;
								iLocal_69 = 1;
								SYSTEM::SETTIMERA(0);
							}
							break;
					
						default:
							break;
					}
				}
			}
			else if (SYSTEM::TIMERA() > 15000)
			{
				iLocal_69 = 0;
				num = 0;
				_UPDATE_CURRENT_PLAYER_CHARACTER();
			
				if (iLocal_42 == 21 && Global_20383 != CHAR_MICHAEL)
					num = 1;
			
				if (iLocal_42 == 22 && Global_20383 != CHAR_FRANKLIN)
					num = 1;
			
				if (iLocal_42 == 23 && Global_20383 != CHAR_TREVOR)
					num = 1;
			
				if (Global_113648.f_14143[iLocal_42 /*104*/].f_24 != 0 && num == 0)
					if (!func_34(14))
						if (_SEND_TEXT_MESSAGE_FROM_CHARACTER_2(Global_113648.f_14143[iLocal_42 /*104*/].f_17, &Global_113648.f_14143[iLocal_42 /*104*/], Global_113648.f_14143[iLocal_42 /*104*/].f_24, Global_113648.f_14143[iLocal_42 /*104*/].f_25, Global_113648.f_14143[iLocal_42 /*104*/].f_26, Global_113648.f_14143[iLocal_42 /*104*/].f_29, 0, true, Global_113648.f_14143[iLocal_42 /*104*/].f_31, Global_113648.f_14143[iLocal_42 /*104*/].f_30))
							Global_113648.f_14143[iLocal_42 /*104*/].f_24 = 0;
			}
		
			if (iLocal_80 == 0)
			{
				if (Global_8929[Global_20383])
				{
					iLocal_80 = 1;
					echLocal_81 = Global_20383;
				
					if (unk_0xA26A9A07F761D8F8())
						uLocal_78 = unk_0x0DB7F8294D73598B();
					else
						uLocal_72 = unk_0xA5E11AF0A2B928C1();
				}
			}
			else
			{
				if (unk_0xA26A9A07F761D8F8())
				{
					iLocal_79 = unk_0x55DB5FC567C065D9(unk_0x0DB7F8294D73598B(), uLocal_78);
				}
				else
				{
					iLocal_73 = unk_0xA5E11AF0A2B928C1();
					iLocal_79 = iLocal_73 - uLocal_72;
				}
			
				if (iLocal_79 > 7000)
				{
					if (_CAN_ENTER_FREEROAM_STATE(0))
					{
						Global_8863[1 /*6*/] = { Global_8912[Global_20383 /*4*/] };
						Global_8939 = Global_8934[Global_20383];
						Global_8929[Global_20383] = false;
						iLocal_80 = 0;
					}
				}
			
				if (echLocal_81 != Global_20383)
					iLocal_80 = 0;
			}
		}
	}

	return;
}

BOOL _CAN_ENTER_FREEROAM_STATE(int iParam0) // Position - 0x3C2D
{
	return func_64(iParam0, Global_43257);
}

BOOL func_64(int iParam0, int iParam1) // Position - 0x3C3E
{
	if (iParam1 == 15)
		return 1;

	if (iParam0 == 15)
		return 0;

	switch (iParam0)
	{
		case 16:
			switch (iParam1)
			{
				case 9:
				case 10:
				case 7:
				case 13:
				case 14:
					return 0;
			}
		
			return 1;
	
		case 0:
			switch (iParam1)
			{
				case 5:
				case 17:
					return 1;
			}
			break;
	
		case 2:
		case 3:
			switch (iParam1)
			{
				case 5:
				case 6:
				case 8:
				case 17:
					return 1;
			}
			break;
	
		case 4:
			if (iParam1 == 17)
				return 1;
			break;
	
		case 5:
			break;
	
		case 6:
		case 8:
			if (iParam1 == 5)
				return 1;
			break;
	
		case 7:
			if (iParam1 == 6)
				return 1;
			break;
	
		case 9:
			if (iParam1 == 5)
				return 1;
			break;
	
		case 10:
			switch (iParam1)
			{
				case 5:
				case 6:
				case 17:
					return 1;
			}
			break;
	
		case 11:
			if (iParam1 == 5)
				return 1;
			break;
	
		case 17:
			switch (iParam1)
			{
				case 17:
				case 12:
				case 5:
					return 1;
			}
			break;
	
		case 18:
		case 12:
			switch (iParam1)
			{
				case 5:
				case 6:
				case 8:
					return 1;
			}
			break;
	
		case 13:
			switch (iParam1)
			{
				case 5:
					return 1;
			}
			break;
	
		case 14:
			switch (iParam1)
			{
				case 5:
					return 1;
			}
			break;
	}

	return 0;
}

BOOL _SEND_TEXT_MESSAGE_FROM_CHARACTER_2(eCharacter echParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, BOOL bParam7, int iParam8, int iParam9) // Position - 0x3E1F
{
	int num;
	char* str;
	int num2;
	char* str2;
	int num3;
	char* str3;
	char* str4;
	int num4;

	unk_0x061B1200C95204CB(&Global_8253, 10);
	num = 0;
	str = "NULL";
	num2 = -99;
	str2 = "NULL";
	num3 = 0;
	str3 = "NULL";
	str4 = "NULL";
	num4 = 3;

	if (func_67(echParam0, sParam1, iParam2, num, str, str2, num2, iParam3, iParam4, iParam5, bParam7, iParam8, iParam9, num3, str3, str4, num4) == 1)
	{
		if (bParam7 == true)
		{
			Global_8960 = iParam6;
			Global_8863[3 /*6*/] = { _GET_CHARACTER_NAME(echParam0) };
			Global_8940 = echParam0;
			unk_0xECDAB41968FF21A8(&Global_8253, 1);
			unk_0xECDAB41968FF21A8(&Global_8253, 7);
		}
	
		return true;
	}

	return false;
}

struct<4> _GET_CHARACTER_NAME(eCharacter character) // Position - 0x3EAE
{
	return Global_2028[character /*29*/].f_3;
}

int func_67(eCharacter echParam0, char* sParam1, int iParam2, int iParam3, char* sParam4, char* sParam5, int iParam6, int iParam7, int iParam8, int iParam9, BOOL bParam10, int iParam11, int iParam12, int iParam13, char* sParam14, char* sParam15, int iParam16) // Position - 0x3EC1
{
	int num;
	BOOL flag;

	iParam13 > 99;
	unk_0x4310A0DB886F9FED(sParam14, sParam15);
	_UPDATE_CURRENT_PLAYER_CHARACTER();
	num = 0;

	switch (iParam16)
	{
		case 0:
			if (Global_20383 == CHAR_MICHAEL)
				num = 0;
			else
				num = 1;
			break;
	
		case 2:
			if (Global_20383 == CHAR_TREVOR)
				num = 0;
			else
				num = 1;
			break;
	
		case 1:
			if (Global_20383 == CHAR_FRANKLIN)
				num = 0;
			else
				num = 1;
			break;
	
		default:
			num = 0;
			break;
	}

	if (num == 0)
	{
		if (unk_0x48DC6A21D1CAD89C(unk_0x93E99A2DBCBA9CFA()))
			if (unk_0x1774A64AB2C276EF(unk_0xC1A5EC5C986B98AD()))
				return 0;
	
		if (Global_113648.f_14053[Global_20383 /*20*/].f_17 == 1)
			return 0;
	
		if (unk_0x24B651D85CCE5EB4(joaat("apptextmessage")) > 0)
			return 0;
	
		if (unk_0x24B651D85CCE5EB4(joaat("apptextmessage")) > 0)
			return 0;
	}

	if (func_79() == 0)
	{
		func_77();
		return 0;
	}

	func_76(Global_22792);
	TEXT_LABEL_ASSIGN_STRING(&Global_113648.f_14143[Global_22792 /*104*/], sParam1, 64);
	Global_113648.f_14143[Global_22792 /*104*/].f_17 = echParam0;

	if (iParam2 == 0)
	{
	}
	else
	{
		Global_113648.f_14143[Global_22792 /*104*/].f_24 = iParam2;
	}

	Global_113648.f_14143[Global_22792 /*104*/].f_25 = iParam7;
	Global_113648.f_14143[Global_22792 /*104*/].f_26 = iParam8;
	Global_113648.f_14143[Global_22792 /*104*/].f_29 = iParam9;
	Global_113648.f_14143[Global_22792 /*104*/].f_30 = iParam12;
	Global_113648.f_14143[Global_22792 /*104*/].f_31 = iParam11;
	Global_113648.f_14143[Global_22792 /*104*/].f_28 = 0;
	Global_113648.f_14143[Global_22792 /*104*/].f_32 = iParam3;
	TEXT_LABEL_ASSIGN_STRING(&(Global_113648.f_14143[Global_22792 /*104*/].f_33), sParam4, 64);
	Global_113648.f_14143[Global_22792 /*104*/].f_49 = iParam6;
	TEXT_LABEL_ASSIGN_STRING(&(Global_113648.f_14143[Global_22792 /*104*/].f_50), sParam5, 64);
	Global_113648.f_14143[Global_22792 /*104*/].f_66 = iParam13;
	TEXT_LABEL_ASSIGN_STRING(&(Global_113648.f_14143[Global_22792 /*104*/].f_67), sParam14, 64);
	TEXT_LABEL_ASSIGN_STRING(&(Global_113648.f_14143[Global_22792 /*104*/].f_83), sParam15, 64);

	if (IS_BIT_SET(Global_8253, 10))
	{
		Global_113648.f_14143[Global_22792 /*104*/].f_99[0] = 1;
		Global_113648.f_14143[Global_22792 /*104*/].f_99[1] = 1;
		Global_113648.f_14143[Global_22792 /*104*/].f_99[2] = 1;
		Global_8959 = 4;
		func_75(0);
		func_75(2);
		func_75(1);
	}
	else
	{
		_UPDATE_CURRENT_PLAYER_CHARACTER();
	
		switch (iParam16)
		{
			case 3:
				Global_113648.f_14143[Global_22792 /*104*/].f_99[Global_20383] = 1;
				break;
		
			case 0:
				Global_113648.f_14143[Global_22792 /*104*/].f_99[0] = 1;
				break;
		
			case 2:
				Global_113648.f_14143[Global_22792 /*104*/].f_99[2] = 1;
				break;
		
			case 1:
				Global_113648.f_14143[Global_22792 /*104*/].f_99[1] = 1;
				break;
		}
	
		if (iParam16 == 3)
		{
			switch (Global_20383)
			{
				case CHAR_MICHAEL:
					func_75(0);
					Global_8959 = 0;
					break;
			
				case CHAR_FRANKLIN:
					func_75(1);
					Global_8959 = 1;
					break;
			
				case CHAR_TREVOR:
					func_75(2);
					Global_8959 = 2;
					break;
			
				case CHAR_MULTIPLAYER:
					func_75(3);
					Global_8959 = 3;
					break;
			
				default:
					Global_8959 = 4;
					break;
			}
		}
	}

	if (iParam7 == 1)
	{
		if (IS_BIT_SET(Global_8253, 10))
		{
			Global_113648.f_14053[0 /*20*/].f_17 = 1;
			Global_113648.f_14053[1 /*20*/].f_17 = 1;
			Global_113648.f_14053[2 /*20*/].f_17 = 1;
		}
		else
		{
			switch (iParam16)
			{
				case 3:
					Global_113648.f_14053[Global_20383 /*20*/].f_17 = 1;
					break;
			
				case 0:
					Global_113648.f_14053[0 /*20*/].f_17 = 1;
					break;
			
				case 2:
					Global_113648.f_14053[2 /*20*/].f_17 = 1;
					break;
			
				case 1:
					Global_113648.f_14053[1 /*20*/].f_17 = 1;
					break;
			}
		}
	}

	Global_22794[Global_22792] = 0;

	if (bParam10)
	{
		_UPDATE_CURRENT_PLAYER_CHARACTER();
	
		if (Global_20326)
		{
			TEXT_LABEL_ASSIGN_STRING(&Global_20372, "Phone_SoundSet_Prologue", 24);
		}
		else
		{
			switch (Global_20383)
			{
				case CHAR_MICHAEL:
					TEXT_LABEL_ASSIGN_STRING(&Global_20372, "Phone_SoundSet_Michael", 24);
					break;
			
				case CHAR_TREVOR:
					TEXT_LABEL_ASSIGN_STRING(&Global_20372, "Phone_SoundSet_Trevor", 24);
					break;
			
				case CHAR_FRANKLIN:
					TEXT_LABEL_ASSIGN_STRING(&Global_20372, "Phone_SoundSet_Franklin", 24);
					break;
			
				default:
					TEXT_LABEL_ASSIGN_STRING(&Global_20372, "Phone_SoundSet_Default", 24);
					break;
			}
		}
	
		if (!Global_9058[Global_20383 /*2811*/][0 /*281*/].f_259 == 1)
			if (!func_74())
				unk_0x531D638530A8DB97(-1, "Text_Arrive_Tone", &Global_20372, 1);
	}

	if (!Global_20585)
	{
		if (Global_20383.f_1 == 6)
		{
			func_35(Global_20364, "SET_DATA_SLOT_EMPTY", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
			func_33(1);
			func_35(Global_20364, "DISPLAY_VIEW", 1f, SYSTEM::TO_FLOAT(Global_20363), -1082130432, -1082130432, -1082130432);
		}
	}

	if (Global_1977527 != -1 && echParam0 == Global_1977527)
		flag = true;

	func_68(echParam0, sParam1, flag, func_73(unk_0x93E99A2DBCBA9CFA()));
	return 1;
}

void func_68(eCharacter echParam0, char* sParam1, BOOL bParam2, int iParam3) // Position - 0x439C
{
	if (!func_69())
		return;

	unk_0xCC71BAE72F44A029(echParam0, 1654525105, unk_0x14580F20CBCE4FA9(sParam1), 0, bParam2, iParam3, Global_1977511.f_7, Global_1977511.f_8, Global_1977511.f_9, Global_1977511.f_10, Global_1977511.f_11, Global_1977511.f_12, Global_1977511.f_13);

	if (bParam2)
		Global_1977527 = -1;

	return;
}

BOOL func_69() // Position - 0x43F9
{
	if (!Global_262145.f_28878)
		return false;

	if (!Global_78558)
		return false;

	if (unk_0x93E99A2DBCBA9CFA() == _INVALID_PLAYER_INDEX())
		return false;

	if (func_70(unk_0x93E99A2DBCBA9CFA()))
		return false;

	if (IS_BIT_SET(Global_1894573[unk_0x93E99A2DBCBA9CFA() /*608*/].f_1, 7))
		return false;

	if (unk_0x1758F8A8511510AB())
		return false;

	return true;
}

BOOL func_70(int iParam0) // Position - 0x445C
{
	return func_71(iParam0, 20);
}

BOOL func_71(int iParam0, int iParam1) // Position - 0x446C
{
	return IS_BIT_SET(Global_1894573[iParam0 /*608*/].f_10.f_4, iParam1);
}

Player _INVALID_PLAYER_INDEX() // Position - 0x4484
{
	return -1;
}

int func_73(int iParam0) // Position - 0x448D
{
	return Global_1853910[iParam0 /*862*/].f_205.f_6;
}

BOOL func_74() // Position - 0x44A2
{
	return Global_1575060;
}

void func_75(int iParam0) // Position - 0x44AE
{
	var unk;
	var unk2;

	unk = Global_113648.f_14053[iParam0 /*20*/].f_8;
	unk = unk;
	unk2 = unk2;
	return;
}

void func_76(int iParam0) // Position - 0x44CD
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
	Global_113648.f_14143[iParam0 /*104*/].f_18 = unk;
	Global_113648.f_14143[iParam0 /*104*/].f_18.f_1 = unk2;
	Global_113648.f_14143[iParam0 /*104*/].f_18.f_2 = unk3;
	Global_113648.f_14143[iParam0 /*104*/].f_18.f_3 = unk4;
	Global_113648.f_14143[iParam0 /*104*/].f_18.f_4 = num;
	Global_113648.f_14143[iParam0 /*104*/].f_18.f_5 = unk5;
	return;
}

void func_77() // Position - 0x455F
{
	int num;
	int num2;
	int num3;

	if (Global_78558)
	{
		num = 24;
		num2 = 33;
	}
	else
	{
		num = 0;
		num2 = 20;
	}

	num3 = num;
	Global_22792 = 34;
	Global_113648.f_14143[Global_22792 /*104*/].f_18 = -1;
	Global_113648.f_14143[Global_22792 /*104*/].f_18.f_1 = 0;
	Global_113648.f_14143[Global_22792 /*104*/].f_18.f_2 = 0;
	Global_113648.f_14143[Global_22792 /*104*/].f_18.f_3 = 0;
	Global_113648.f_14143[Global_22792 /*104*/].f_18.f_5 = 99999;

	while (num3 < num2)
	{
		if (!func_78(Global_113648.f_14143[num3 /*104*/].f_18, Global_113648.f_14143[Global_22792 /*104*/].f_18))
			Global_22792 = num3;
	
		num3 = num3 + 1;
	}

	Global_113648.f_14143[Global_22792 /*104*/].f_24 = 1;
	return;
}

BOOL func_78(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, int iParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11) // Position - 0x462A
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

int func_79() // Position - 0x4715
{
	int num;
	int num2;
	int i;

	if (Global_78558)
	{
		num = 24;
		num2 = 33;
	}
	else
	{
		num = 0;
		num2 = 20;
	}

	for (i = num; i < num2; i = i + 1)
	{
		if (Global_113648.f_14143[i /*104*/].f_24 == 0)
		{
			Global_22792 = i;
			return 1;
		}
	}

	i = num;
	Global_22792 = 34;
	Global_113648.f_14143[Global_22792 /*104*/].f_18 = -1;
	Global_113648.f_14143[Global_22792 /*104*/].f_18.f_1 = 0;
	Global_113648.f_14143[Global_22792 /*104*/].f_18.f_2 = 0;
	Global_113648.f_14143[Global_22792 /*104*/].f_18.f_3 = 0;
	Global_113648.f_14143[Global_22792 /*104*/].f_18.f_5 = 99999;

	while (i < num2)
	{
		if (Global_113648.f_14143[i /*104*/].f_24 == 0 || Global_113648.f_14143[i /*104*/].f_24 == 1)
			if (!func_78(Global_113648.f_14143[i /*104*/].f_18, Global_113648.f_14143[Global_22792 /*104*/].f_18))
				Global_22792 = i;
	
		Global_113648.f_14143[i /*104*/].f_24 == 2;
		i = i + 1;
	}

	if (Global_22792 == 34)
		return 0;

	Global_113648.f_14143[Global_22792 /*104*/].f_99[0] = 0;
	Global_113648.f_14143[Global_22792 /*104*/].f_99[1] = 0;
	Global_113648.f_14143[Global_22792 /*104*/].f_99[2] = 0;
	return 1;
}

void func_80() // Position - 0x487D
{
	if (IS_BIT_SET(Global_8253, 6))
	{
		if (Global_8957 > 0)
		{
			if (IS_BIT_SET(Global_8254, 11))
			{
				if (bLocal_41)
				{
					func_81(uLocal_37, "CLEAR_ALL");
				
					if (IS_BIT_SET(Global_8253, 25))
					{
						unk_0x9FD96C5DE6EDFC15(uLocal_37, "CREATE_ALERT");
						unk_0xC6A3EF6C4A3412C1(26);
						unk_0xC49D258FBF3BF214(222f);
						unk_0xC49D258FBF3BF214(222f);
						unk_0xAE3413B0654A0035();
					}
				
					if (IS_BIT_SET(Global_4542297, 11))
					{
						unk_0x9FD96C5DE6EDFC15(uLocal_37, "CREATE_ALERT");
						unk_0xC6A3EF6C4A3412C1(53);
						unk_0xC49D258FBF3BF214(222f);
						unk_0xC49D258FBF3BF214(222f);
						unk_0xAE3413B0654A0035();
					}
				
					if (Global_78558 == true)
					{
						if (IS_BIT_SET(Global_4542297, 12))
						{
							unk_0x9FD96C5DE6EDFC15(uLocal_37, "CREATE_ALERT");
							unk_0xC6A3EF6C4A3412C1(52);
							unk_0xC49D258FBF3BF214(222f);
							unk_0xC49D258FBF3BF214(222f);
							unk_0xAE3413B0654A0035();
						}
					
						if (IS_BIT_SET(Global_4542297, 28))
						{
							unk_0x9FD96C5DE6EDFC15(uLocal_37, "CREATE_ALERT");
							unk_0xC6A3EF6C4A3412C1(60);
							unk_0xC49D258FBF3BF214(222f);
							unk_0xC49D258FBF3BF214(148f);
							unk_0xAE3413B0654A0035();
						}
					}
				
					if (IS_BIT_SET(Global_4542297, 19))
					{
						unk_0x9FD96C5DE6EDFC15(uLocal_37, "CREATE_ALERT");
						unk_0xC6A3EF6C4A3412C1(55);
						unk_0xC49D258FBF3BF214(222f);
					
						if (IS_BIT_SET(Global_4542297, 12) || IS_BIT_SET(Global_4542297, 11) || IS_BIT_SET(Global_8253, 25))
							unk_0xC49D258FBF3BF214(192f);
						else
							unk_0xC49D258FBF3BF214(222f);
					
						unk_0xAE3413B0654A0035();
					}
				
					unk_0x061B1200C95204CB(&Global_8254, 11);
					bLocal_41 = false;
				}
			}
		}
	
		if (Global_8957 < 1)
		{
			unk_0xD0AE101DBAA43C98(&uLocal_37);
			unk_0x061B1200C95204CB(&Global_8253, 6);
		}
		else
		{
			func_17();
		}
	}
	else if (Global_8957 > 0)
	{
		uLocal_37 = unk_0x2B4645565204EA06("cellphone_alert_popup");
	
		while (!unk_0x5FAF55B1F052A2E6(uLocal_37))
		{
			SYSTEM::WAIT(0);
		}
	
		unk_0xCA0440712A8201E9(4);
		unk_0xECDAB41968FF21A8(&Global_8253, 6);
	}

	return;
}

void func_81(var uParam0, char* sParam1) // Position - 0x4A32
{
	unk_0x9FD96C5DE6EDFC15(uParam0, sParam1);
	unk_0xAE3413B0654A0035();
	return;
}

void func_82() // Position - 0x4A47
{
	if (IS_BIT_SET(Global_8254, 7))
	{
		unk_0xECDAB41968FF21A8(&Global_8254, 6);
		unk_0x061B1200C95204CB(&Global_8254, 7);
		return;
	}

	if (!IS_BIT_SET(Global_8254, 7))
	{
		unk_0x061B1200C95204CB(&Global_8254, 6);
		return;
	}

	return;
}

void func_83() // Position - 0x4A7E
{
	if (IS_BIT_SET(Global_8254, 4))
	{
		unk_0xECDAB41968FF21A8(&Global_8254, 3);
		unk_0x061B1200C95204CB(&Global_8254, 4);
		return;
	}

	if (!IS_BIT_SET(Global_8254, 4))
	{
		unk_0x061B1200C95204CB(&Global_8254, 3);
		return;
	}

	return;
}

void func_84() // Position - 0x4AB5
{
	if (IS_BIT_SET(Global_8254, 2))
	{
		if (!Global_20383.f_1 == 1)
			Global_20383.f_1 = 0;
	
		unk_0x061B1200C95204CB(&Global_8254, 2);
		return;
	}

	if (!IS_BIT_SET(Global_8254, 2))
	{
		if (!Global_20383.f_1 == 1)
			if (Global_20383.f_1 < 4)
				Global_20383.f_1 = 3;
	
		return;
	}

	return;
}

BOOL func_85() // Position - 0x4B07
{
	int num;
	int num2;
	int num3;
	var unk;

	if (!unk_0x055111B11E6624FD(unk_0xC1A5EC5C986B98AD(), 0))
	{
		if (Global_20383.f_1 == 10 || Global_20383.f_1 == 9)
			if (Global_20326 == false)
				if (Global_7568 != _CHAR_DETONATEBOMB_2)
					if (!unk_0x3C3D6D026CF7F51B(unk_0xC1A5EC5C986B98AD(), 0))
						Global_21725 != 2;
	
		if (func_34(14))
			return false;
	
		if (unk_0x8DEE51D44B32DE1F(unk_0xC1A5EC5C986B98AD(), 0))
			return false;
	
		if (unk_0x3C3D6D026CF7F51B(unk_0xC1A5EC5C986B98AD(), 0))
			if (!unk_0xB7D65B9FB14C2AE5())
				if (unk_0x1589BC95A4C50F21(unk_0x95DC39736F6748E3(unk_0xC1A5EC5C986B98AD(), 0)))
					return false;
	
		if (unk_0x279D0BCF8F708D74(unk_0xC1A5EC5C986B98AD()) || unk_0x1774A64AB2C276EF(unk_0xC1A5EC5C986B98AD()) || unk_0x5150E13C3DAAE892(unk_0x93E99A2DBCBA9CFA()) || unk_0x9C42F9EEAF66B131(unk_0xC1A5EC5C986B98AD()) && !(IS_BIT_SET(Global_4718592.f_37, 17) && unk_0x1758F8A8511510AB() || Global_1926632))
			return false;
	
		if (Global_112696)
			return false;
	}

	if (Global_78558)
		return false;

	num3 = 0;
	num = unk_0x990C52ABB0EFEBA9();
	num2 = unk_0x80A3F4E694565F6A(num);

	if (num2 == 4 && num == 0 || unk_0xB7D65B9FB14C2AE5())
	{
		num3 = 1;
	
		if (!unk_0x055111B11E6624FD(unk_0xC1A5EC5C986B98AD(), 0))
		{
			if (unk_0x3C3D6D026CF7F51B(unk_0xC1A5EC5C986B98AD(), 0))
			{
				unk = unk_0x95DC39736F6748E3(unk_0xC1A5EC5C986B98AD(), 0);
			
				if (unk_0x6CEF99E452573979(unk_0x504B9BB48D41C264(unk)) || unk_0x9C7BEEE2232D4F8A(unk_0x504B9BB48D41C264(unk)) || unk_0x5BCB88597C004FED(unk_0x504B9BB48D41C264(unk)) || unk_0x504B9BB48D41C264(unk) == joaat("seashark") || unk_0x504B9BB48D41C264(unk) == joaat("seashark2") || unk_0x504B9BB48D41C264(unk) == joaat("rhino") || unk_0x504B9BB48D41C264(unk) == joaat("submersible") || unk_0x504B9BB48D41C264(unk) == joaat("submersible2") || unk_0x504B9BB48D41C264(unk) == joaat("toro"))
					num3 = 0;
			}
		}
	}

	if (Global_4542575 || num3 == 1)
		if (unk_0x24B651D85CCE5EB4(joaat("apptrackify")) > 0 || Global_113648.f_14053.f_89)
			if (unk_0x24B651D85CCE5EB4(joaat("michael2")) > 0)
				return true;
			else
				return false;
		else
			return true;

	return false;
}

BOOL func_86(int iParam0, int iParam1, int iParam2, BOOL bParam3) // Position - 0x4D50
{
	_UPDATE_CURRENT_PLAYER_CHARACTER();

	if (Global_78558 == false)
	{
		if (func_34(14))
		{
			if (Global_22784 == 2 || Global_22784 == 4)
			{
			}
			else
			{
				return false;
			}
		}
	}

	if (Global_20383.f_1 == 9)
		return false;

	if (iParam2 == 0)
		if (func_57(0) == true)
			return false;

	if (Global_20349 == 1)
		return false;

	if (Global_20383.f_1 == 7)
		return false;

	iParam1 == 1;

	if (!unk_0xB8CEC43FB7EF2D92(Global_20380))
	{
		if (unk_0x24B651D85CCE5EB4(joaat("cellphone_flashhand")) == 0)
		{
			if (Global_20383.f_1 < 4)
			{
				func_87("cellphone_flashhand");
			
				if (unk_0x24B651D85CCE5EB4(joaat("cellphone_flashhand")) == 0)
					Global_20380 = SYSTEM::START_NEW_SCRIPT("cellphone_flashhand", DEFAULT);
			
				unk_0x037A80676B8FF0F5("cellphone_flashhand");
			}
		}
	}

	while (!Global_20365)
	{
		SYSTEM::WAIT(0);
	}

	func_133();
	func_131();

	if (unk_0x24B651D85CCE5EB4(Global_8260[iParam0 /*15*/].f_9) == 0)
	{
		Global_8859 = 0;
		Global_20383.f_1 = 7;
		func_87(&(Global_8260[iParam0 /*15*/].f_5));
	
		if (bParam3)
			if (unk_0x24B651D85CCE5EB4(Global_8260[iParam0 /*15*/].f_9) == 0)
				Global_20381 = SYSTEM::START_NEW_SCRIPT(&(Global_8260[iParam0 /*15*/].f_5), CONTACTS_APP);
		else if (unk_0x24B651D85CCE5EB4(Global_8260[iParam0 /*15*/].f_9) == 0)
			Global_20381 = SYSTEM::START_NEW_SCRIPT(&(Global_8260[iParam0 /*15*/].f_5), CELLPHONE);
	
		unk_0x037A80676B8FF0F5(&(Global_8260[iParam0 /*15*/].f_5));
		return true;
	}

	return true;
}

void func_87(char* sParam0) // Position - 0x4EB3
{
	unk_0x3EC562D93709C894(sParam0);

	while (!unk_0x6CAF14BE58B4BFF8(sParam0))
	{
		SYSTEM::WAIT(0);
	}

	return;
}

void func_88(int iParam0) // Position - 0x4ED3
{
	if (func_91())
		return;

	if (Global_20584)
		if (func_90())
			func_89(true, true);
		else
			func_89(false, false);

	if (Global_20383.f_1 == 10 || Global_20383.f_1 == 9)
		unk_0xECDAB41968FF21A8(&Global_8254, 16);

	if (unk_0xE444FD7526C8BB46())
		unk_0xD6625E11483B2324(0);

	Global_21725 = 5;

	if (iParam0 == 1)
		unk_0xECDAB41968FF21A8(&Global_8253, 30);
	else
		unk_0x061B1200C95204CB(&Global_8253, 30);

	if (!func_52())
		Global_20383.f_1 = 3;

	return;
}

void func_89(BOOL bParam0, BOOL bParam1) // Position - 0x4F5D
{
	if (bParam0)
	{
		if (func_57(0))
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

BOOL func_90() // Position - 0x4FD1
{
	return IS_BIT_SET(Global_1962996, 5);
}

BOOL func_91() // Position - 0x4FDF
{
	return IS_BIT_SET(Global_1962996, 19);
}

void func_92() // Position - 0x4FEE
{
	float i;

	unk_0x577AE0048ADA90C8(1);
	unk_0x4150CF46B891FFF5(2, 201);
	unk_0x4150CF46B891FFF5(2, 202);

	for (i = 0f; !unk_0x87644B1F984197FE(2, 201) && !unk_0x87644B1F984197FE(2, 202) || i < 1f; i = i + unk_0x290D4E218346D595())
	{
		HUD::SET_WARNING_MESSAGE_WITH_HEADER("VEUI_HDR_ALERT" /*ALERT*/, "VE_DIR_MODE_SURE" /*Are you sure you want to launch Director Mode?*/, 18, 0, false, -1, 0, 0, true, 0);
		SYSTEM::WAIT(0);
	}

	unk_0x577AE0048ADA90C8(0);

	if (unk_0x87644B1F984197FE(2, 201))
	{
		unk_0x6D5ACBBD4CE34249(0);
		Global_112593 = true;
	}

	return;
}

void func_93(int iParam0) // Position - 0x506D
{
	float i;
	char* str;

	unk_0x577AE0048ADA90C8(1);
	unk_0x4150CF46B891FFF5(2, 201);

	for (i = 0f; !unk_0x87644B1F984197FE(2, 201) || i < 1f; i = i + unk_0x290D4E218346D595())
	{
		str = func_94(iParam0, 119);
		HUD::SET_WARNING_MESSAGE("FBR_GENERIC" /*~a~ is not available whilst ~a~.*/, 16384, 0, false, -1, "FBR_DIR_MODE" /*Director Mode*/, str, true, 0);
		SYSTEM::WAIT(0);
	}

	unk_0x577AE0048ADA90C8(0);
	return;
}

char* func_94(int iParam0, int iParam1) // Position - 0x50CF
{
	iParam1 = iParam1;

	switch (iParam0)
	{
		case 1:
			return "FBR_BLK_CLEAN";
	
		case 2:
			return "FBR_BLK_RNNNG" /*feature is already running*/;
	
		case 13:
			return "FBR_BLK_DEAD" /*dead*/;
	
		case 3:
			return "FBR_BLK_MISS" /*playing a mission*/;
	
		case 5:
			return "FBR_BLK_SHOP" /*browsing a shop*/;
	
		case 4:
			return "FBR_BLK_CUTS" /*watching a cutscene*/;
	
		case 6:
			return "FBR_BLK_WANT" /*wanted*/;
	
		case 7:
			return "FBR_BLK_ONLI" /*playing GTA Online*/;
	
		case 8:
			return "FBR_BLK_ACT" /*performing this action*/;
	
		case 9:
			return "FBR_BLK_LOC" /*in this location*/;
	
		case 10:
			return "FBR_BLK_VEH" /*in a vehicle*/;
	
		case 11:
			return "FBR_BLK_PARA" /*skydiving*/;
	
		case 12:
			return "FBR_BLK_FALL" /*falling*/;
	
		default:
			return "ERROR";
	}

	return "ERROR";
}

int func_95(int iParam0, BOOL bParam1, int iParam2) // Position - 0x51C0
{
	int num;

	iParam2 = iParam2;

	if (unk_0x055111B11E6624FD(unk_0xC1A5EC5C986B98AD(), 0))
		return 13;

	if (bParam1)
		if (unk_0x24B651D85CCE5EB4(unk_0x63C7B2D430A46FC3()) > 1)
			return 2;

	if (func_126() && !func_34(14))
		return 3;

	if (func_125())
		return 3;

	if (func_124())
		return 8;

	if (bParam1)
		if (func_123())
			return 8;

	if (Global_97601)
		return 3;

	if (Global_32421)
		return 8;

	if (Global_32312)
		return 8;

	if (Global_2883694)
		if (unk_0x24B651D85CCE5EB4(-1516147206) > 0)
			return 3;
	else if (Global_2883693)
		if (unk_0x24B651D85CCE5EB4(2006115718) > 0)
			return 3;
	else if (unk_0x24B651D85CCE5EB4(joaat("mission_stat_watcher")) > 0)
		return 3;

	if (unk_0x24B651D85CCE5EB4(joaat("finale_choice")) > 0)
		return 3;

	if (unk_0x24B651D85CCE5EB4(joaat("creator")) > 0)
		return 3;

	if (unk_0x24B651D85CCE5EB4(joaat("respawn_controller")) > 0)
		return 13;

	if (_IS_MISSION_REPEAT_ACTIVE(bParam1))
		return 3;

	if (unk_0x854821B2A72B2E98(unk_0xC1A5EC5C986B98AD()) || unk_0x48A4D45B3B4CEFFD(unk_0xC1A5EC5C986B98AD()))
		return 12;

	if (func_121(Global_112673, 256))
		return 3;

	if (func_120() || func_119() || func_114() || func_113())
		return 5;

	if (func_113())
		return 5;

	if (func_112())
		return 5;

	if (func_111())
		return 5;

	if (func_119())
		return 5;

	if (func_110() && !Global_112598)
		return 8;

	if (func_114())
		return 5;

	if (unk_0xB53553DC4AAC7D8A() || func_109())
		return 4;

	if (func_74())
		return 4;

	if (unk_0x7DE17ACDD8BA2642(unk_0xC1A5EC5C986B98AD()))
	{
		if (!unk_0x66599E73DBA5A850(unk_0xC1A5EC5C986B98AD()))
		{
			num = func_99(60);
		
			if (num != 0)
				return num;
		
			if (unk_0xA92CED053FDC0D06(unk_0xC1A5EC5C986B98AD()) || unk_0x76781CF4D4ED46C9(unk_0xC1A5EC5C986B98AD()) != -1)
				return 11;
		
			if (unk_0x3C3D6D026CF7F51B(unk_0xC1A5EC5C986B98AD(), 1) || Global_112695)
				return 10;
		}
	}

	if (Global_32419)
		return 8;

	if (Global_78556)
		return 4;

	if (unk_0x48DC6A21D1CAD89C(unk_0x93E99A2DBCBA9CFA()))
	{
		if (unk_0x83C5A442AAD15BAF(unk_0x93E99A2DBCBA9CFA()) > 0 || unk_0xF41A4983A3778F18(unk_0x93E99A2DBCBA9CFA(), 1))
			return 6;
	
		if (unk_0x5150E13C3DAAE892(unk_0x93E99A2DBCBA9CFA()))
			return 8;
	
		if (unk_0xBACC143C07E3925E(unk_0xC1A5EC5C986B98AD()))
			return 8;
	}

	if (unk_0xA26A9A07F761D8F8())
		return 7;

	if (func_98())
		return 8;

	if (Global_32166)
		return 3;

	if (unk_0x3FACE5B6ACB3A4AA())
		return 4;

	if (unk_0x9DC9E896F189AAA5(unk_0xC1A5EC5C986B98AD(), 439.4357f, -997.4747f, 28.9584f, 428.3288f, -997.0398f, 24.8372f, 8f, 0, 1, 0))
		return 9;

	if (unk_0x1589BC95A4C50F21(unk_0xC1A5EC5C986B98AD()))
		return 9;

	if (bParam1)
		if (!func_96(false))
			return 8;

	if (unk_0xE03DB5D994E334C8(unk_0xC1A5EC5C986B98AD()))
		return 9;

	return 0;
}

BOOL func_96(BOOL bParam0) // Position - 0x54FC
{
	if (unk_0x66599E73DBA5A850(unk_0xC1A5EC5C986B98AD()))
		return false;

	if (!unk_0x1B82EF141CC65934(unk_0x93E99A2DBCBA9CFA()) || !unk_0xE2A83DCD3E79D8D3(unk_0x93E99A2DBCBA9CFA()) || unk_0x110D030CCD4E83A6(unk_0xC1A5EC5C986B98AD()) || unk_0xB8C39D031C377E33(unk_0xC1A5EC5C986B98AD(), 0) || unk_0xE3A9F9074FB79A61(unk_0xC1A5EC5C986B98AD()) || unk_0xF276A75C8A36B189(unk_0xC1A5EC5C986B98AD()) || unk_0x5CD470B5BDDAC029(unk_0xC1A5EC5C986B98AD()) || unk_0xBACC143C07E3925E(unk_0xC1A5EC5C986B98AD()) || unk_0xDA70CA6A0D1738D3(unk_0xC1A5EC5C986B98AD()) || unk_0x48A4D45B3B4CEFFD(unk_0xC1A5EC5C986B98AD()) || unk_0xF41A4983A3778F18(unk_0x93E99A2DBCBA9CFA(), 1))
		return false;

	if (func_74() || Global_23131.f_4 || func_97() || unk_0x7B052E9CA5CE2D88() || unk_0x6FF497D385A9B7BF() || func_109() || func_125())
		return false;

	if (!bParam0)
		if (unk_0x5ABCFD3441B37CA6())
			return false;

	return true;
}

BOOL func_97() // Position - 0x560C
{
	if (!unk_0xA26A9A07F761D8F8())
		return Global_98159.f_44 == 1;

	return false;
}

BOOL func_98() // Position - 0x5628
{
	return Global_60543;
}

int func_99(int iParam0) // Position - 0x5633
{
	Vector3 vector;
	int num;
	int i;

	if (unk_0x9DC9E896F189AAA5(unk_0xC1A5EC5C986B98AD(), 207.43358f, -1019.7954f, -100.47276f, 189.93378f, -1019.6235f, -95.56883f, 17.1875f, 0, 1, 0) && unk_0x3C3D6D026CF7F51B(unk_0xC1A5EC5C986B98AD(), 1))
		return 5;

	vector = { _GET_PLAYER_COORDS(unk_0x93E99A2DBCBA9CFA()) };

	if (Global_112735[10 /*10*/].f_1)
		if (SYSTEM::VDIST2(vector, 241.9889f, 360.4732f, 105.6166f) < 2f)
			return 3;

	if (func_107(2) && !func_107(17))
		if (SYSTEM::VDIST2(vector, -59.966286f, -1099.0055f, 25.520878f) < 8f)
			if (unk_0x9E76D45F14E2C578(vector, -61.266285f, -1096.5055f, 25.520878f, -58.433327f, -1101.1473f, 29.24937f, 1.25f, 0, 1))
				return 9;

	if (SYSTEM::VDIST2(vector, -740.9346f, 5599.4263f, 40.71515f) < 11f)
		if (unk_0x9E76D45F14E2C578(vector, -746.1299f, 5599.2256f, 40.475605f, -737.63196f, 5599.364f, 44.169304f, 3.375f, 0, 1))
			return 9;

	if (SYSTEM::VDIST2(vector, -740.9346f, 5590.4263f, 40.71515f) < 11f)
		if (unk_0x9E76D45F14E2C578(vector, -746.1299f, 5590.6675f, 40.4392f, -737.6585f, 5590.592f, 44.52327f, 3.375f, 0, 1))
			return 9;

	if (SYSTEM::VDIST2(vector, 446.32654f, 5566.35f, 780.21515f) < 11f)
		if (unk_0x9E76D45F14E2C578(vector, 451.16608f, 5566.451f, 780.1703f, 442.52106f, 5566.374f, 783.98193f, 3.375f, 0, 1))
			return 9;

	if (SYSTEM::VDIST2(vector, 446.32654f, 5577.35f, 780.21515f) < 11f)
		if (unk_0x9E76D45F14E2C578(vector, 451.16608f, 5577.8667f, 780.1899f, 442.5765f, 5577.579f, 783.9086f, 3.375f, 0, 1))
			return 9;

	if (SYSTEM::VDIST2(vector, 128.83f, -1297.98f, 29.3f) < 2f || SYSTEM::VDIST2(vector, 95.07f, -1284.98f, 29.3f) < 2f)
		return 9;

	if (SYSTEM::VDIST2(vector, 1081.9506f, -1976.7618f, 30.47218f) < 6f && func_106(26))
		return 9;

	if (!bLocal_27)
		func_100(iParam0);

	num = unk_0x41AD4BF315E01D41(unk_0xC1A5EC5C986B98AD());

	if (num == 0)
		return 0;
	else if (num == Global_112611 || num == Global_112612 || num == Global_112613)
		return 9;
	else if (num == Global_112602)
		return 9;
	else if (num == Global_112603)
		return 9;
	else if (num == Global_112606)
		return 9;
	else if (num == Global_112605)
		return 9;
	else if (num == Global_112607)
		return 9;
	else if (num == Global_112608)
		return 9;
	else if (num == Global_112609)
		return 9;
	else if (num == Global_112610)
		return 9;
	else if (num == Global_112614)
		return 9;
	else if (num == Global_112615)
		return 9;
	else if (num == Global_112616)
		return 9;
	else if (num == Global_112617)
		return 9;
	else if (num == Global_112618)
		return 9;
	else if (num == Global_112619 || num == Global_112620 && func_107(67))
		return 9;

	for (i = 0; i <= 19 - 1; i = i + 1)
	{
		if (num == Global_112621[i])
			return 9;
	}

	return 0;
}

void func_100(int iParam0) // Position - 0x5A5B
{
	int i;

	iParam0 = iParam0;
	func_103(24, &Global_112602);
	func_103(47, &Global_112603);
	func_103(10, &Global_112611);
	func_103(9, &Global_112612);
	func_103(8, &Global_112613);
	func_103(21, &Global_112614);
	func_103(11, &Global_112615);
	func_103(18, &Global_112619);
	func_103(19, &Global_112620);
	Global_112606 = unk_0xAF0CB15312D8B8E3(-76.6618f, 6222.1914f, 32.2412f, "V_factory1");
	Global_112605 = unk_0xAF0CB15312D8B8E3(-98.2637f, 6210.0225f, 31.924f, "V_factory2");
	Global_112607 = unk_0xAF0CB15312D8B8E3(-115.8956f, 6179.7485f, 32.4102f, "V_factory3");
	Global_112608 = unk_0xAF0CB15312D8B8E3(-149.8199f, 6144.9775f, 31.3353f, "V_factory4");
	Global_112609 = unk_0xAF0CB15312D8B8E3(16.3605f, -1100.2587f, 28.797f, "v_gun");
	Global_112610 = unk_0xAF0CB15312D8B8E3(125.1948f, -1284.1304f, 28.2847f, "v_strip3");
	Global_112616 = unk_0xAF0CB15312D8B8E3(-545.5717f, 1987.1454f, 126.0262f, "cs6_08_mine_int");
	Global_112617 = unk_0xAF0CB15312D8B8E3(2330.5984f, 2571.9353f, 45.6802f, "ch3_01_trlr_int");
	Global_112618 = unk_0xAF0CB15312D8B8E3(-54.7f, -1092.7f, 26.4f, "v_carshowroom");

	for (i = 0; i <= 19 - 1; i = i + 1)
	{
		Global_112621[i] = unk_0x9CE0235348AE4A4D(func_101(i));
	}

	bLocal_27 = true;
	return;
}

Vector3 func_101(int iParam0) // Position - 0x5BE7
{
	if (!func_102(iParam0))
		return 0f, 0f, 0f;

	switch (iParam0)
	{
		case 0:
			return -711.8212f, -915.9057f, 18.2377f;
	
		case 1:
			return -52.7185f, -1756.1747f, 28.4432f;
	
		case 2:
			return 1159.4408f, -325.6666f, 68.2272f;
	
		case 3:
			return 1699.4293f, 4928.6416f, 41.0858f;
	
		case 4:
			return -1822.9261f, 788.9531f, 137.212f;
	
		case 5:
			return 1166.4265f, 2703.5283f, 37.1574f;
	
		case 6:
			return -2973.4138f, 390.6885f, 14.0433f;
	
		case 7:
			return -1225.8604f, -903.5782f, 11.3263f;
	
		case 8:
			return 1140.659f, -981.0806f, 45.4158f;
	
		case 9:
			return -1490.2753f, -382.8514f, 39.1634f;
	
		case 10:
			return -3240.7188f, 1004.5081f, 11.8468f;
	
		case 11:
			return -3039.2488f, 589.3831f, 6.9251f;
	
		case 12:
			return 544.4275f, 2672.061f, 41.1726f;
	
		case 13:
			return 2558.7542f, 385.599f, 107.6391f;
	
		case 14:
			return 2681.5112f, 3282.7627f, 54.2573f;
	
		case 15:
			return 1731.1532f, 6411.6333f, 34.0373f;
	
		case 16:
			return 1964.9305f, 3741.207f, 31.3599f;
	
		case 17:
			return 29.0707f, -1348.7728f, 28.5101f;
	
		case 18:
			return 376.8503f, 323.9777f, 102.5825f;
	
		default:
		
	}

	return 0f, 0f, 0f;
}

BOOL func_102(int iParam0) // Position - 0x5DD1
{
	if (iParam0 >= 19)
		return false;
	else if (iParam0 <= -1)
		return false;

	return true;
}

var func_103(int iParam0, int iParam1) // Position - 0x5DF2
{
	var unk;

	unk = { func_104(iParam0) };
	*iParam1 = unk_0xAF0CB15312D8B8E3(unk, unk.f_3);
	return unk.f_4;
}

struct<5> func_104(int iParam0) // Position - 0x5E17
{
	var unk;
	var unk6;

	switch (iParam0)
	{
		case 0:
			unk = { -447.4833f, 280.3197f, 77.5215f };
			unk.f_3 = "v_comedy";
			unk.f_4 = unk.f_3;
			break;
	
		case 1:
			unk = { -1906.7858f, -573.7576f, 19.0773f };
			unk.f_3 = "v_psycheoffice";
			unk.f_4 = unk.f_3;
			break;
	
		case 2:
			unk = { 1399.973f, 1148.7559f, 113.3336f };
			unk.f_3 = "v_ranch";
			unk.f_4 = unk.f_3;
			break;
	
		case 3:
			unk = { -598.6379f, -1608.3986f, 26.0108f };
			unk.f_3 = "v_recycle";
			unk.f_4 = unk.f_3;
			break;
	
		case 4:
			unk = { -556.5089f, 286.3181f, 81.1763f };
			unk.f_3 = "v_rockclub";
			unk.f_4 = unk.f_3;
			break;
	
		case 5:
			unk = { -111.7116f, -11.912f, 69.5196f };
			unk.f_3 = "v_janitor";
			unk.f_4 = unk.f_3;
			break;
	
		case 6:
			unk = { 1274.9338f, -1714.7256f, 53.7715f };
			unk.f_3 = "v_lesters";
			unk.f_4 = unk.f_3;
			break;
	
		case 7:
			unk = { 147.433f, -2201.3704f, 3.688f };
			unk.f_3 = "v_torture";
			unk.f_4 = unk.f_3;
			break;
	
		case 8:
			unk = { 320.9934f, 265.2515f, 82.1221f };
			unk.f_3 = "v_cinema";
			unk.f_4 = "v_cinema (Vinewood)";
			break;
	
		case 9:
			unk = { -1425.5645f, -244.3f, 15.8053f };
			unk.f_3 = "v_cinema";
			unk.f_4 = "v_cinema (Morningwood)";
			break;
	
		case 10:
			unk = { 377.153f, -717.567f, 10.0536f };
			unk.f_3 = "v_cinema";
			unk.f_4 = "v_cinema (Downtown)";
			break;
	
		case 11:
			unk = { 245.1564f, 370.211f, 104.7382f };
			unk.f_3 = "v_epsilonism";
			unk.f_4 = unk.f_3;
			break;
	
		case 12:
			unk = { 173.1176f, -1003.2789f, -99.9999f };
			unk.f_3 = "v_garages";
			unk.f_4 = unk.f_3;
			break;
	
		case 13:
			unk = { 199.9715f, -999.6678f, -100f };
			unk.f_3 = "v_garagem";
			unk.f_4 = unk.f_3;
			break;
	
		case 14:
			unk = { 228.6058f, -992.0537f, -99.9999f };
			unk.f_3 = "v_garagel";
			unk.f_3 = "hei_dlc_garage_high_new";
			unk.f_4 = unk.f_3;
			break;
	
		case 15:
			unk = { 1854.2538f, 3686.7385f, 33.2671f };
			unk.f_3 = "v_sheriff";
			unk.f_4 = unk.f_3;
			break;
	
		case 16:
			unk = { -444.8907f, 6013.587f, 30.7164f };
			unk.f_3 = "v_sheriff2";
			unk.f_4 = unk.f_3;
			break;
	
		case 17:
			unk = { 3522.8452f, 3707.9653f, 19.9918f };
			unk.f_3 = "v_lab";
			unk.f_4 = unk.f_3;
			break;
	
		case 18:
			unk = { 717.2994f, -974.4271f, 23.9142f };
			unk.f_3 = "v_sweat";
			unk.f_4 = unk.f_3;
			break;
	
		case 19:
			unk = { 717.299f, -974.4271f, 23.9142f };
			unk.f_3 = "v_sweatempty";
			unk.f_4 = unk.f_3;
			break;
	
		case 20:
			unk = { 2449.7852f, 4983.8247f, 45.8106f };
			unk.f_3 = "v_farmhouse";
			unk.f_4 = unk.f_3;
			break;
	
		case 22:
			unk = { 1087.1952f, -1988.445f, 28.649f };
			unk.f_3 = "v_foundry";
			unk.f_4 = unk.f_3;
			break;
	
		case 23:
			unk = { 982.233f, -2160.3816f, 28.4761f };
			unk.f_3 = "v_abattoir";
			unk.f_4 = unk.f_3;
			break;
	
		case 21:
			unk = { 479.0568f, -1316.8253f, 28.2038f };
			unk.f_3 = "v_chopshop";
			unk.f_4 = unk.f_3;
			break;
	
		case 24:
			unk = { -1005.6632f, -478.3461f, 49.0265f };
			unk.f_3 = "v_58_sol_office";
			unk.f_4 = unk.f_3;
			break;
	
		case 25:
			unk6 = { func_105(1, false) };
			unk = { unk6 + { 1f, 0f, 0f } };
			unk.f_3 = "hei_dlc_apart_high_new";
			unk.f_4 = "hei_dlc_apart_high_new (1)";
			break;
	
		case 26:
			unk6 = { func_105(2, false) };
			unk = { unk6 + { 1f, 0f, 0f } };
			unk.f_3 = "hei_dlc_apart_high_new";
			unk.f_4 = "hei_dlc_apart_high_new (2)";
			break;
	
		case 27:
			unk6 = { func_105(3, false) };
			unk = { unk6 + { 1f, 0f, 0f } };
			unk.f_3 = "hei_dlc_apart_high_new";
			unk.f_4 = "hei_dlc_apart_high_new (3)";
			break;
	
		case 28:
			unk6 = { func_105(4, false) };
			unk = { unk6 + { 1f, 0f, 0f } };
			unk.f_3 = "hei_dlc_apart_high_new";
			unk.f_4 = "hei_dlc_apart_high_new (4)";
			break;
	
		case 29:
			unk6 = { func_105(5, false) };
			unk = { unk6 + { 1f, 0f, 0f } };
			unk.f_3 = "hei_dlc_apart_high_new";
			unk.f_4 = "hei_dlc_apart_high_new (5)";
			break;
	
		case 30:
			unk6 = { func_105(6, false) };
			unk = { unk6 + { 1f, 0f, 0f } };
			unk.f_3 = "hei_dlc_apart_high_new";
			unk.f_4 = "hei_dlc_apart_high_new (6)";
			break;
	
		case 31:
			unk6 = { func_105(7, false) };
			unk = { unk6 + { 1f, 0f, 0f } };
			unk.f_3 = "hei_dlc_apart_high_new";
			unk.f_4 = "hei_dlc_apart_high_new (7)";
			break;
	
		case 32:
			unk = { Global_1312228[34 /*1951*/].f_146.f_1517 + { 1f, 0f, 0f } };
			unk.f_3 = "hei_dlc_apart_high_new";
			unk.f_4 = "hei_dlc_apart_high_new (8)";
			break;
	
		case 33:
			unk6 = { func_105(35, false) };
			unk = { unk6 + { 1f, 0f, 0f } };
			unk.f_3 = "hei_dlc_apart_high_new";
			unk.f_4 = "hei_dlc_apart_high_new (9)";
			break;
	
		case 34:
			unk6 = { func_105(36, false) };
			unk = { unk6 + { 1f, 0f, 0f } };
			unk.f_3 = "hei_dlc_apart_high_new";
			unk.f_4 = "hei_dlc_apart_high_new (10)";
			break;
	
		case 35:
			unk6 = { func_105(37, false) };
			unk = { unk6 + { 1f, 0f, 0f } };
			unk.f_3 = "hei_dlc_apart_high_new";
			unk.f_4 = "hei_dlc_apart_high_new (11)";
			break;
	
		case 36:
			unk6 = { func_105(38, false) };
			unk = { -20.1f, -580.8f, 91.3f };
			unk.f_3 = "hei_dlc_apart_high_new";
			unk.f_4 = "hei_dlc_apart_high_new (12)";
			break;
	
		case 37:
			unk6 = { func_105(39, false) };
			unk = { unk6 + { 1f, 0f, 0f } };
			unk.f_3 = "hei_dlc_apart_high_new";
			unk.f_4 = "hei_dlc_apart_high_new (13)";
			break;
	
		case 38:
			unk6 = { func_105(40, false) };
			unk = { unk6 + { 1f, 0f, 0f } };
			unk.f_3 = "hei_dlc_apart_high_new";
			unk.f_4 = "hei_dlc_apart_high_new (14)";
			break;
	
		case 39:
			unk6 = { func_105(41, false) };
			unk = { unk6 + { 1f, 0f, 0f } };
			unk.f_3 = "hei_dlc_apart_high_new";
			unk.f_4 = "hei_dlc_apart_high_new (15)";
			break;
	
		case 40:
			unk6 = { func_105(42, false) };
			unk = { unk6 + { 1f, 0f, 0f } };
			unk.f_3 = "hei_dlc_apart_high_new";
			unk.f_4 = "hei_dlc_apart_high_new (16)";
			break;
	
		case 41:
			unk6 = { func_105(43, false) };
			unk = { unk6 + { 1f, 0f, 0f } };
			unk.f_3 = "hei_dlc_apart_high_new";
			unk.f_4 = "hei_dlc_apart_high_new (17)";
			break;
	
		case 42:
			unk = { -470.3754f, -698.5207f, 51.5276f };
			unk.f_3 = "hei_dlc_apart_high_new";
			unk.f_4 = "hei_dlc_apart_high_new (18)";
			break;
	
		case 43:
			unk = { -460.6133f, -691.5562f, 69.9067f };
			unk.f_3 = "hei_dlc_apart_high_new";
			unk.f_4 = "hei_dlc_apart_high_new (19)";
			break;
	
		case 44:
			unk = { 300.633f, -997.4288f, -99.9727f };
			unk.f_3 = "hei_dlc_apart_high_new";
			unk.f_4 = "hei_dlc_apart_high_new (20)";
			break;
	
		case 49:
			unk = { -171.3969f, 494.2671f, 134.4935f };
			unk.f_3 = "apa_v_mp_stilts_b";
			unk.f_4 = "apa_v_mp_stilts_b (1)";
			break;
	
		case 50:
			unk = { 339.4982f, 434.0887f, 146.2206f };
			unk.f_3 = "apa_v_mp_stilts_b";
			unk.f_4 = "apa_v_mp_stilts_b (2)";
			break;
	
		case 51:
			unk = { -761.3884f, 615.7333f, 140.9805f };
			unk.f_3 = "apa_v_mp_stilts_b";
			unk.f_4 = "apa_v_mp_stilts_b (3)";
			break;
	
		case 52:
			unk = { -678.1752f, 591.0076f, 142.2196f };
			unk.f_3 = "apa_v_mp_stilts_b";
			unk.f_4 = "apa_v_mp_stilts_b (4)";
			break;
	
		case 53:
			unk = { 120.0541f, 553.793f, 181.0943f };
			unk.f_3 = "apa_v_mp_stilts_a";
			unk.f_4 = "apa_v_mp_stilts_a (5)";
			break;
	
		case 54:
			unk = { -571.4039f, 655.2008f, 142.6293f };
			unk.f_3 = "apa_v_mp_stilts_a";
			unk.f_4 = "apa_v_mp_stilts_a (7)";
			break;
	
		case 55:
			unk = { -742.2565f, 587.6547f, 143.0577f };
			unk.f_3 = "apa_v_mp_stilts_a";
			unk.f_4 = "apa_v_mp_stilts_a (8)";
			break;
	
		case 56:
			unk = { -857.2222f, 685.051f, 149.6502f };
			unk.f_3 = "apa_v_mp_stilts_a";
			unk.f_4 = "apa_v_mp_stilts_a (10)";
			break;
	
		case 57:
			unk = { -1287.6498f, 443.2707f, 94.6919f };
			unk.f_3 = "apa_v_mp_stilts_a";
			unk.f_4 = "apa_v_mp_stilts_a (12)";
			break;
	
		case 58:
			unk = { 374.2012f, 416.9688f, 142.5991f };
			unk.f_3 = "apa_v_mp_stilts_a";
			unk.f_4 = "apa_v_mp_stilts_a (13)";
			break;
	
		case 45:
			unk = { -16.295849f, -684.0385f, 33.508316f };
			unk.f_3 = "dt1_03_carpark";
			unk.f_4 = "dt1_03_carpark";
			break;
	
		case 46:
			unk = { 341.1f, -1000f, -99.2f };
			unk.f_3 = "v_apart_midspaz";
			unk.f_4 = "v_apart_midspaz";
			break;
	
		case 47:
			unk = { 199.97156f, -1018.95416f, -100f };
			unk.f_3 = "v_garagem_sp";
			unk.f_4 = unk.f_3;
			break;
	
		case 48:
			unk = { -1388.0013f, -618.4197f, 30.8196f };
			unk.f_3 = "v_bahama";
			unk.f_4 = unk.f_3;
			break;
	}

	switch (iParam0)
	{
		case 59:
			unk = { -787.7805f, 334.9232f, 215.8384f };
			unk.f_3 = "apa_v_mp_h_01";
			unk.f_4 = unk.f_3;
			break;
	
		case 60:
			unk = { -787.7805f, 334.9232f, 215.8384f };
			unk.f_3 = "apa_v_mp_h_02";
			unk.f_4 = unk.f_3;
			break;
	
		case 61:
			unk = { -787.7805f, 334.9232f, 215.8384f };
			unk.f_3 = "apa_v_mp_h_03";
			unk.f_4 = unk.f_3;
			break;
	
		case 62:
			unk = { -787.7805f, 334.9232f, 215.8384f };
			unk.f_3 = "apa_v_mp_h_04";
			unk.f_4 = unk.f_3;
			break;
	
		case 63:
			unk = { -787.7805f, 334.9232f, 215.8384f };
			unk.f_3 = "apa_v_mp_h_05";
			unk.f_4 = unk.f_3;
			break;
	
		case 64:
			unk = { -787.7805f, 334.9232f, 215.8384f };
			unk.f_3 = "apa_v_mp_h_06";
			unk.f_4 = unk.f_3;
			break;
	
		case 65:
			unk = { -787.7805f, 334.9232f, 215.8384f };
			unk.f_3 = "apa_v_mp_h_07";
			unk.f_4 = unk.f_3;
			break;
	
		case 66:
			unk = { -787.7805f, 334.9232f, 215.8384f };
			unk.f_3 = "apa_v_mp_h_08";
			unk.f_4 = unk.f_3;
			break;
	
		case 67:
			unk = { -773.2258f, 322.8252f, 194.8862f };
			unk.f_3 = "apa_v_mp_h_01";
			unk.f_4 = unk.f_3;
			break;
	
		case 68:
			unk = { -773.2258f, 322.8252f, 194.8862f };
			unk.f_3 = "apa_v_mp_h_02";
			unk.f_4 = unk.f_3;
			break;
	
		case 69:
			unk = { -773.2258f, 322.8252f, 194.8862f };
			unk.f_3 = "apa_v_mp_h_03";
			unk.f_4 = unk.f_3;
			break;
	
		case 70:
			unk = { -773.2258f, 322.8252f, 194.8862f };
			unk.f_3 = "apa_v_mp_h_04";
			unk.f_4 = unk.f_3;
			break;
	
		case 71:
			unk = { -773.2258f, 322.8252f, 194.8862f };
			unk.f_3 = "apa_v_mp_h_05";
			unk.f_4 = unk.f_3;
			break;
	
		case 72:
			unk = { -773.2258f, 322.8252f, 194.8862f };
			unk.f_3 = "apa_v_mp_h_06";
			unk.f_4 = unk.f_3;
			break;
	
		case 73:
			unk = { -773.2258f, 322.8252f, 194.8862f };
			unk.f_3 = "apa_v_mp_h_07";
			unk.f_4 = unk.f_3;
			break;
	
		case 74:
			unk = { -773.2258f, 322.8252f, 194.8862f };
			unk.f_3 = "apa_v_mp_h_08";
			unk.f_4 = unk.f_3;
			break;
	
		case 75:
			unk = { -787.7805f, 334.9232f, 186.1134f };
			unk.f_3 = "apa_v_mp_h_01";
			unk.f_4 = unk.f_3;
			break;
	
		case 76:
			unk = { -787.7805f, 334.9232f, 186.1134f };
			unk.f_3 = "apa_v_mp_h_02";
			unk.f_4 = unk.f_3;
			break;
	
		case 77:
			unk = { -787.7805f, 334.9232f, 186.1134f };
			unk.f_3 = "apa_v_mp_h_03";
			unk.f_4 = unk.f_3;
			break;
	
		case 78:
			unk = { -787.7805f, 334.9232f, 186.1134f };
			unk.f_3 = "apa_v_mp_h_04";
			unk.f_4 = unk.f_3;
			break;
	
		case 79:
			unk = { -787.7805f, 334.9232f, 186.1134f };
			unk.f_3 = "apa_v_mp_h_05";
			unk.f_4 = unk.f_3;
			break;
	
		case 80:
			unk = { -787.7805f, 334.9232f, 186.1134f };
			unk.f_3 = "apa_v_mp_h_06";
			unk.f_4 = unk.f_3;
			break;
	
		case 81:
			unk = { -787.7805f, 334.9232f, 186.1134f };
			unk.f_3 = "apa_v_mp_h_07";
			unk.f_4 = unk.f_3;
			break;
	
		case 82:
			unk = { -787.7805f, 334.9232f, 186.1134f };
			unk.f_3 = "apa_v_mp_h_08";
			unk.f_4 = unk.f_3;
			break;
	
		case 83:
			unk6 = { func_105(87, false) };
			unk = { unk6 + { 1f, 0f, 0f } };
			unk.f_3 = "ex_int_office_01a_dlc";
			unk.f_4 = unk.f_3;
			break;
	
		case 84:
			unk6 = { func_105(87, false) };
			unk = { unk6 + { 1f, 0f, 0f } };
			unk.f_3 = "ex_int_office_01b_dlc";
			unk.f_4 = unk.f_3;
			break;
	
		case 85:
			unk6 = { func_105(87, false) };
			unk = { unk6 + { 1f, 0f, 0f } };
			unk.f_3 = "ex_int_office_01c_dlc";
			unk.f_4 = unk.f_3;
			break;
	
		case 86:
			unk6 = { func_105(87, false) };
			unk = { unk6 + { 1f, 0f, 0f } };
			unk.f_3 = "ex_int_office_02a_dlc";
			unk.f_4 = unk.f_3;
			break;
	
		case 87:
			unk6 = { func_105(87, false) };
			unk = { unk6 + { 1f, 0f, 0f } };
			unk.f_3 = "ex_int_office_02b_dlc";
			unk.f_4 = unk.f_3;
			break;
	
		case 88:
			unk6 = { func_105(87, false) };
			unk = { unk6 + { 1f, 0f, 0f } };
			unk.f_3 = "ex_int_office_02c_dlc";
			unk.f_4 = unk.f_3;
			break;
	
		case 89:
			unk6 = { func_105(87, false) };
			unk = { unk6 + { 1f, 0f, 0f } };
			unk.f_3 = "ex_int_office_03a_dlc";
			unk.f_4 = unk.f_3;
			break;
	
		case 90:
			unk6 = { func_105(87, false) };
			unk = { unk6 + { 1f, 0f, 0f } };
			unk.f_3 = "ex_int_office_03b_dlc";
			unk.f_4 = unk.f_3;
			break;
	
		case 91:
			unk6 = { func_105(87, false) };
			unk = { unk6 + { 1f, 0f, 0f } };
			unk.f_3 = "ex_int_office_03c_dlc";
			unk.f_4 = unk.f_3;
			break;
	
		case 92:
			unk6 = { func_105(88, false) };
			unk = { unk6 + { 1f, 0f, 0f } };
			unk.f_3 = "ex_int_office_01a_dlc";
			unk.f_4 = unk.f_3;
			break;
	
		case 93:
			unk6 = { func_105(88, false) };
			unk = { unk6 + { 1f, 0f, 0f } };
			unk.f_3 = "ex_int_office_01b_dlc";
			unk.f_4 = unk.f_3;
			break;
	
		case 94:
			unk6 = { func_105(88, false) };
			unk = { unk6 + { 1f, 0f, 0f } };
			unk.f_3 = "ex_int_office_01c_dlc";
			unk.f_4 = unk.f_3;
			break;
	
		case 95:
			unk6 = { func_105(88, false) };
			unk = { unk6 + { 1f, 0f, 0f } };
			unk.f_3 = "ex_int_office_02a_dlc";
			unk.f_4 = unk.f_3;
			break;
	
		case 96:
			unk6 = { func_105(88, false) };
			unk = { unk6 + { 1f, 0f, 0f } };
			unk.f_3 = "ex_int_office_02b_dlc";
			unk.f_4 = unk.f_3;
			break;
	
		case 97:
			unk6 = { func_105(88, false) };
			unk = { unk6 + { 1f, 0f, 0f } };
			unk.f_3 = "ex_int_office_02c_dlc";
			unk.f_4 = unk.f_3;
			break;
	
		case 98:
			unk6 = { func_105(88, false) };
			unk = { unk6 + { 1f, 0f, 0f } };
			unk.f_3 = "ex_int_office_03a_dlc";
			unk.f_4 = unk.f_3;
			break;
	
		case 99:
			unk6 = { func_105(88, false) };
			unk = { unk6 + { 1f, 0f, 0f } };
			unk.f_3 = "ex_int_office_03b_dlc";
			unk.f_4 = unk.f_3;
			break;
	
		case 100:
			unk6 = { func_105(88, false) };
			unk = { unk6 + { 1f, 0f, 0f } };
			unk.f_3 = "ex_int_office_03c_dlc";
			unk.f_4 = unk.f_3;
			break;
	
		case 101:
			unk6 = { func_105(89, false) };
			unk = { unk6 + { 1f, 0f, 0f } };
			unk.f_3 = "ex_int_office_01a_dlc";
			unk.f_4 = unk.f_3;
			break;
	
		case 102:
			unk6 = { func_105(89, false) };
			unk = { unk6 + { 1f, 0f, 0f } };
			unk.f_3 = "ex_int_office_01b_dlc";
			unk.f_4 = unk.f_3;
			break;
	
		case 103:
			unk6 = { func_105(89, false) };
			unk = { unk6 + { 1f, 0f, 0f } };
			unk.f_3 = "ex_int_office_01c_dlc";
			unk.f_4 = unk.f_3;
			break;
	
		case 104:
			unk6 = { func_105(89, false) };
			unk = { unk6 + { 1f, 0f, 0f } };
			unk.f_3 = "ex_int_office_02a_dlc";
			unk.f_4 = unk.f_3;
			break;
	
		case 105:
			unk6 = { func_105(89, false) };
			unk = { unk6 + { 1f, 0f, 0f } };
			unk.f_3 = "ex_int_office_02b_dlc";
			unk.f_4 = unk.f_3;
			break;
	
		case 106:
			unk6 = { func_105(89, false) };
			unk = { unk6 + { 1f, 0f, 0f } };
			unk.f_3 = "ex_int_office_02c_dlc";
			unk.f_4 = unk.f_3;
			break;
	
		case 107:
			unk6 = { func_105(89, false) };
			unk = { unk6 + { 1f, 0f, 0f } };
			unk.f_3 = "ex_int_office_03a_dlc";
			unk.f_4 = unk.f_3;
			break;
	
		case 108:
			unk6 = { func_105(89, false) };
			unk = { unk6 + { 1f, 0f, 0f } };
			unk.f_3 = "ex_int_office_03b_dlc";
			unk.f_4 = unk.f_3;
			break;
	
		case 109:
			unk6 = { func_105(89, false) };
			unk = { unk6 + { 1f, 0f, 0f } };
			unk.f_3 = "ex_int_office_03c_dlc";
			unk.f_4 = unk.f_3;
			break;
	
		case 110:
			unk6 = { func_105(90, false) };
			unk = { unk6 + { 1f, 0f, 0f } };
			unk.f_3 = "ex_int_office_01a_dlc";
			unk.f_4 = unk.f_3;
			break;
	
		case 111:
			unk6 = { func_105(90, false) };
			unk = { unk6 + { 1f, 0f, 0f } };
			unk.f_3 = "ex_int_office_01b_dlc";
			unk.f_4 = unk.f_3;
			break;
	
		case 112:
			unk6 = { func_105(90, false) };
			unk = { unk6 + { 1f, 0f, 0f } };
			unk.f_3 = "ex_int_office_01c_dlc";
			unk.f_4 = unk.f_3;
			break;
	
		case 113:
			unk6 = { func_105(90, false) };
			unk = { unk6 + { 1f, 0f, 0f } };
			unk.f_3 = "ex_int_office_02a_dlc";
			unk.f_4 = unk.f_3;
			break;
	
		case 114:
			unk6 = { func_105(90, false) };
			unk = { unk6 + { 1f, 0f, 0f } };
			unk.f_3 = "ex_int_office_02b_dlc";
			unk.f_4 = unk.f_3;
			break;
	
		case 115:
			unk6 = { func_105(90, false) };
			unk = { unk6 + { 1f, 0f, 0f } };
			unk.f_3 = "ex_int_office_02c_dlc";
			unk.f_4 = unk.f_3;
			break;
	
		case 116:
			unk6 = { func_105(90, false) };
			unk = { unk6 + { 1f, 0f, 0f } };
			unk.f_3 = "ex_int_office_03a_dlc";
			unk.f_4 = unk.f_3;
			break;
	
		case 117:
			unk6 = { func_105(90, false) };
			unk = { unk6 + { 1f, 0f, 0f } };
			unk.f_3 = "ex_int_office_03b_dlc";
			unk.f_4 = unk.f_3;
			break;
	
		case 118:
			unk6 = { func_105(90, false) };
			unk = { unk6 + { 1f, 0f, 0f } };
			unk.f_3 = "ex_int_office_03c_dlc";
			unk.f_4 = unk.f_3;
			break;
	
		case 119:
			unk6 = { func_105(91, false) };
			unk = { unk6 + { 1f, 0f, 0f } };
			unk.f_3 = "bkr_biker_dlc_int_01";
			unk.f_4 = unk.f_3;
			break;
	
		case 120:
			unk6 = { func_105(97, false) };
			unk = { unk6 + { 1f, 0f, 0f } };
			unk.f_3 = "bkr_biker_dlc_int_02";
			unk.f_4 = unk.f_3;
			break;
	
		case 121:
			unk6 = { func_105(103, false) };
			unk = { unk6 + { 1f, 0f, 0f } };
			unk.f_3 = "imp_impexp_int_01";
			unk.f_4 = unk.f_3;
			break;
	
		case 122:
			unk6 = { func_105(104, false) };
			unk = { unk6 + { 1f, 0f, 0f } };
			unk.f_3 = "imp_impexp_int_01";
			unk.f_4 = unk.f_3;
			break;
	
		case 123:
			unk6 = { func_105(105, false) };
			unk = { unk6 + { 1f, 0f, 0f } };
			unk.f_3 = "imp_impexp_int_01";
			unk.f_4 = unk.f_3;
			break;
	
		case 124:
			unk6 = { func_105(106, false) };
			unk = { unk6 + { 1f, 0f, 0f } };
			unk.f_3 = "imp_impexp_int_01";
			unk.f_4 = unk.f_3;
			break;
	
		case 125:
			unk6 = { func_105(107, false) };
			unk = { unk6 + { 1f, 0f, 0f } };
			unk.f_3 = "imp_impexp_int_01";
			unk.f_4 = unk.f_3;
			break;
	
		case 126:
			unk6 = { func_105(108, false) };
			unk = { unk6 + { 1f, 0f, 0f } };
			unk.f_3 = "imp_impexp_int_01";
			unk.f_4 = unk.f_3;
			break;
	
		case 127:
			unk6 = { func_105(109, false) };
			unk = { unk6 + { 1f, 0f, 0f } };
			unk.f_3 = "imp_impexp_int_01";
			unk.f_4 = unk.f_3;
			break;
	
		case 128:
			unk6 = { func_105(110, false) };
			unk = { unk6 + { 1f, 0f, 0f } };
			unk.f_3 = "imp_impexp_int_01";
			unk.f_4 = unk.f_3;
			break;
	
		case 129:
			unk6 = { func_105(111, false) };
			unk = { unk6 + { 1f, 0f, 0f } };
			unk.f_3 = "imp_impexp_int_01";
			unk.f_4 = unk.f_3;
			break;
	
		case 130:
			unk6 = { func_105(112, false) };
			unk = { unk6 + { 1f, 0f, 0f } };
			unk.f_3 = "imp_impexp_int_01";
			unk.f_4 = unk.f_3;
			break;
	
		case 131:
			unk6 = { func_105(113, false) };
			unk = { unk6 + { 1f, 0f, 0f } };
			unk.f_3 = "imp_impexp_int_01";
			unk.f_4 = unk.f_3;
			break;
	
		case 132:
			unk6 = { func_105(114, false) };
			unk = { unk6 + { 1f, 0f, 0f } };
			unk.f_3 = "imp_impexp_int_01";
			unk.f_4 = unk.f_3;
			break;
	
		case 133:
			unk6 = { func_105(103, true) };
			unk = { unk6 + { 1f, 0f, 0f } };
			unk.f_3 = "imp_imptexp_mod_int_01";
			unk.f_4 = unk.f_3;
			break;
	
		case 134:
			unk6 = { func_105(106, true) };
			unk = { unk6 + { 1f, 0f, 0f } };
			unk.f_3 = "imp_imptexp_mod_int_01";
			unk.f_4 = unk.f_3;
			break;
	
		case 135:
			unk6 = { func_105(109, true) };
			unk = { unk6 + { 1f, 0f, 0f } };
			unk.f_3 = "imp_imptexp_mod_int_01";
			unk.f_4 = unk.f_3;
			break;
	
		case 136:
			unk6 = { func_105(112, true) };
			unk = { unk6 + { 1f, 0f, 0f } };
			unk.f_3 = "imp_imptexp_mod_int_01";
			unk.f_4 = unk.f_3;
			break;
	
		case 137:
			unk = { 938.3077f, -3196.1116f, -100f };
			unk.f_3 = "gr_grdlc_int_02";
			unk.f_4 = unk.f_3;
			break;
	
		case 138:
			unk = { 512.5f, 4852f, -62.6f };
			unk.f_3 = "xm_x17dlc_int_sub";
			unk.f_4 = unk.f_3;
			break;
	
		case 139:
			unk = { 2047f, 2942f, -61.9f };
			unk.f_3 = "xm_x17dlc_int_facility";
			unk.f_4 = unk.f_3;
			break;
	
		case 140:
			unk = { -1047.5997f, -232.3503f, 38.0135f };
			unk.f_3 = "v_faceoffice";
			unk.f_4 = unk.f_3;
			break;
	
		case 22:
			unk = { 1100f, -2004f, 37f };
			unk.f_3 = "v_foundry";
			unk.f_4 = unk.f_3;
			break;
	
		case 141:
			unk = { 361f, 6306f, -159f };
			unk.f_3 = "xm_x17dlc_int_silo_01";
			unk.f_4 = unk.f_3;
			break;
	
		case 142:
			unk = { 305f, 6298f, -160f };
			unk.f_3 = "xm_x17dlc_int_silo_02";
			unk.f_4 = unk.f_3;
			break;
	
		case 143:
			unk = { 244f, 6163f, -159f };
			unk.f_3 = "xm_x17dlc_int_lab";
			unk.f_4 = unk.f_3;
			break;
	
		case 144:
			unk = { 2168f, 2920f, -84f };
			unk.f_3 = "xm_x17dlc_int_facility2";
			unk.f_4 = unk.f_3;
			break;
	
		case 145:
			unk = { 446f, 5922f, -158f };
			unk.f_3 = "xm_x17dlc_int_bse_tun";
			unk.f_4 = unk.f_3;
			break;
	
		case 146:
			unk = { 252f, 5972f, -156f };
			unk.f_3 = "xm_x17dlc_int_base_loop";
			unk.f_4 = unk.f_3;
			break;
	
		case 147:
			unk = { 682f, 5959f, -152f };
			unk.f_3 = "xm_x17dlc_int_base_ent";
			unk.f_4 = unk.f_3;
			break;
	
		case 148:
			unk = { 551f, 5939f, -158f };
			unk.f_3 = "xm_x17dlc_int_base";
			unk.f_4 = unk.f_3;
			break;
	
		case 149:
			unk = { 520.0001f, 4750f, -70f };
			unk.f_3 = "xm_x17dlc_int_01";
			unk.f_4 = unk.f_3;
			break;
	
		case 150:
			unk = { -1266.8022f, -3014.849f, -49.4903f };
			unk.f_3 = "sm_smugdlc_int_01";
			unk.f_4 = unk.f_3;
			break;
	
		case 151:
			unk = { 974.9203f, -3000.0647f, -40.647f };
			unk.f_3 = "imp_impexp_intwaremed";
			unk.f_4 = unk.f_3;
			break;
	
		case 152:
			unk = { 969.5376f, -3000.4111f, -48.647f };
			unk.f_3 = "imp_impexp_int_02";
			unk.f_4 = unk.f_3;
			break;
	
		case 153:
			unk = { 1094.9966f, -3100.0117f, -39.9999f };
			unk.f_3 = "ex_int_warehouse_s_dlc";
			unk.f_4 = unk.f_3;
			break;
	
		case 154:
			unk = { 1059.9949f, -3100f, -39.9999f };
			unk.f_3 = "ex_int_warehouse_m_dlc";
			unk.f_4 = unk.f_3;
			break;
	
		case 155:
			unk = { 1010.0083f, -3100f, -39.9999f };
			unk.f_3 = "ex_int_warehouse_l_dlc";
			unk.f_4 = unk.f_3;
			break;
	
		case 156:
			unk = { 372.6707f, 405.5235f, 144.5326f };
			unk.f_3 = "apa_v_mp_stilts_a";
			unk.f_4 = unk.f_3;
			break;
	
		case 157:
			unk = { -282.0588f, -955.17f, 85.3036f };
			unk.f_3 = "hei_dlc_apart_high_new";
			unk.f_4 = unk.f_3;
			break;
	
		case 158:
			unk = { 342.7946f, -997.4225f, -99.7444f };
			unk.f_3 = "v_apart_midspaz";
			unk.f_4 = unk.f_3;
			break;
	
		case 159:
			unk = { 260.3268f, -997.4298f, -100.0086f };
			unk.f_3 = "v_studio_lo";
			unk.f_4 = unk.f_3;
			break;
	
		case 160:
			unk = { 108.2369f, -753.5364f, 233.1523f };
			unk.f_3 = "v_fib01";
			unk.f_4 = unk.f_3;
			break;
	
		case 161:
			unk = { 135.3226f, -746.3677f, 253.1523f };
			unk.f_3 = "v_fib03";
			unk.f_4 = unk.f_3;
			break;
	
		case 162:
			unk = { 108.2572f, -753.5342f, 44.7548f };
			unk.f_3 = "v_office_lobby";
			unk.f_4 = unk.f_3;
			break;
	
		case 163:
			unk = { 228.6161f, -992.053f, -99.9999f };
			unk.f_3 = "heist_dlc_garage_high_new";
			unk.f_4 = unk.f_3;
			break;
	
		case 164:
			unk = { 575f, 4750f, -60f };
			unk.f_3 = "xm_v_apart_midspaz";
			unk.f_4 = unk.f_3;
			break;
	
		case 165:
			unk = { 600f, 4750f, -60f };
			unk.f_3 = "xm_v_studio_lo";
			unk.f_4 = unk.f_3;
			break;
	
		case 166:
			unk = { 630f, 4750f, -60f };
			unk.f_3 = "xm_v_garagem";
			unk.f_4 = unk.f_3;
			break;
	
		case 167:
			unk = { 1257f, 4796.7f, -39.1f };
			unk.f_3 = "xm_x17dlc_int_tun_entry";
			unk.f_4 = unk.f_3;
			break;
	
		case 168:
			unk = { 694.4f, 5898.9f, -152.3f };
			unk.f_3 = "xm_x17dlc_int_tun_straight";
			unk.f_4 = unk.f_3;
			break;
	
		case 169:
			unk = { 1121.8f, 5516.3f, -101.3f };
			unk.f_3 = "xm_x17dlc_int_tun_straight";
			unk.f_4 = unk.f_3;
			break;
	
		case 170:
			unk = { 1279.6f, 5233.2f, -80.3f };
			unk.f_3 = "xm_x17dlc_int_tun_straight";
			unk.f_4 = unk.f_3;
			break;
	
		case 171:
			unk = { 1158.6f, 5467.1f, -101.3f };
			unk.f_3 = "xm_x17dlc_int_tun_slope_flat";
			unk.f_4 = unk.f_3;
			break;
	
		case 172:
			unk = { 705.9f, 5838.5f, -152.3f };
			unk.f_3 = "xm_x17dlc_int_tun_slope_flat";
			unk.f_4 = unk.f_3;
			break;
	
		case 173:
			unk = { 1316.5f, 5184f, -80.3f };
			unk.f_3 = "xm_x17dlc_int_tun_slope_flat";
			unk.f_4 = unk.f_3;
			break;
	
		case 174:
			unk = { 1248f, 5276.1f, -80.3f };
			unk.f_3 = "xm_x17dlc_int_tun_flat_slope";
			unk.f_4 = unk.f_3;
			break;
	
		case 175:
			unk = { 1090.2f, 5559.2f, -101.3f };
			unk.f_3 = "xm_x17dlc_int_tun_flat_slope";
			unk.f_4 = unk.f_3;
			break;
	
		case 176:
			unk = { 1261f, 4808.6f, -39.3f };
			unk.f_3 = "xm_x17dlc_int_tun_flat_slope";
			unk.f_4 = unk.f_3;
			break;
	
		case 177:
			unk = { 721.8f, 5781.4f, -146.7f };
			unk.f_3 = "xm_x17dlc_int_tun_30d_r";
			unk.f_4 = unk.f_3;
			break;
	
		case 178:
			unk = { 780.8f, 5703.4f, -136.7f };
			unk.f_3 = "xm_x17dlc_int_tun_30d_r";
			unk.f_4 = unk.f_3;
			break;
	
		case 179:
			unk = { 868.1f, 5659.2f, -126.7f };
			unk.f_3 = "xm_x17dlc_int_tun_30d_r";
			unk.f_4 = unk.f_3;
			break;
	
		case 180:
			unk = { 1218.2f, 5321.2f, -85.7f };
			unk.f_3 = "xm_x17dlc_int_tun_30d_r";
			unk.f_4 = unk.f_3;
			break;
	
		case 181:
			unk = { 1278.5f, 4859.7f, -44.7f };
			unk.f_3 = "xm_x17dlc_int_tun_30d_r";
			unk.f_4 = unk.f_3;
			break;
	
		case 182:
			unk = { 1187.2f, 5419.8f, -96.4f };
			unk.f_3 = "xm_x17dlc_int_tun_30d_l";
			unk.f_4 = unk.f_3;
			break;
	
		case 183:
			unk = { 1344.7f, 5136.4f, -75.4f };
			unk.f_3 = "xm_x17dlc_int_tun_30d_l";
			unk.f_4 = unk.f_3;
			break;
	
		case 184:
			unk = { 1363.4f, 5039.5f, -65.4f };
			unk.f_3 = "xm_x17dlc_int_tun_30d_l";
			unk.f_4 = unk.f_3;
			break;
	
		case 185:
			unk = { 1049.3f, 5602.1f, -107.4f };
			unk.f_3 = "xm_x17dlc_int_tun_30d_l";
			unk.f_4 = unk.f_3;
			break;
	
		case 186:
			unk = { 1337.8f, 4944.3f, -55.4f };
			unk.f_3 = "xm_x17dlc_int_tun_30d_l";
			unk.f_4 = unk.f_3;
			break;
	
		case 187:
			unk = { 961.5f, 5646.9f, -117.4f };
			unk.f_3 = "xm_x17dlc_int_tun_30d_l";
			unk.f_4 = unk.f_3;
			break;
	
		case 188:
			unk = { 345.0041f, 4842.001f, -59.9997f };
			unk.f_3 = "xm_x17dlc_int_02";
			unk.f_4 = unk.f_3;
			break;
	
		case 189:
			unk = { 279.9322f, -1337.4902f, 23.7419f };
			unk.f_3 = "v_coroner";
			unk.f_4 = unk.f_3;
			break;
	
		case 190:
			unk = { -1604.6643f, -3012.5828f, -79.9999f };
			unk.f_3 = "ba_dlc_int_01_ba";
			unk.f_4 = unk.f_3;
			break;
	
		case 191:
		case 212:
			unk = { -1505.783f, -3012.5867f, -79.9999f };
			unk.f_3 = "ba_dlc_int_02_ba";
			unk.f_4 = unk.f_3;
			break;
	
		case 192:
			unk = { -630.4205f, -236.7843f, 37.057f };
			unk.f_3 = "V_JEWEL2";
			unk.f_4 = unk.f_3;
			break;
	
		case 193:
			unk = { 2800f, -3800f, 100f };
			unk.f_3 = "xs_x18_int_01";
			unk.f_4 = unk.f_3;
			break;
	
		case 194:
			unk = { 2800f, -3942f, 182.5f };
			unk.f_3 = "xs_arena_vip";
			unk.f_4 = unk.f_3;
			break;
	
		case 195:
			unk = { 1049.6f, -3196.6f, -38.5f };
			unk.f_3 = "bkr_biker_dlc_int_ware02";
			unk.f_4 = unk.f_3;
			break;
	
		case 223:
			unk = { 2920f, 4470f, -100f };
			unk.f_3 = "sf_dlc_warehouse_sec";
			unk.f_4 = unk.f_3;
			break;
	
		case 196:
			unk = { 1093.6f, -3196.6f, -38.5f };
			unk.f_3 = "bkr_biker_dlc_int_ware03";
			unk.f_4 = unk.f_3;
			break;
	
		case 197:
			unk = { 1009.5f, -3196.6f, -38.5f };
			unk.f_3 = "bkr_biker_dlc_int_ware01";
			unk.f_4 = unk.f_3;
			break;
	
		case 198:
			unk = { 1100f, 245f, -49f };
			unk.f_3 = "vw_dlc_casino_main";
			unk.f_4 = unk.f_3;
			break;
	
		case 199:
			unk = { 1380f, 200f, -50f };
			unk.f_3 = "vw_dlc_casino_carpark";
			unk.f_4 = unk.f_3;
			break;
	
		case 200:
			unk = { 976.6364f, 70.29476f, 115.16413f };
			unk.f_3 = "vw_dlc_casino_apart";
			unk.f_4 = unk.f_3;
			break;
	
		case 201:
			unk = { 1295f, 230f, -50f };
			unk.f_3 = "vw_dlc_casino_garage";
			unk.f_4 = unk.f_3;
			break;
	
		case 202:
			unk = { 2479.3f, -273.9f, -58f };
			unk.f_3 = "ch_DLC_Casino_Heist";
			unk.f_4 = unk.f_3;
			break;
	
		case 203:
			unk = { 2730f, -380f, -49f };
			unk.f_3 = "ch_DLC_Arcade";
			unk.f_4 = unk.f_3;
			break;
	
		case 204:
			unk = { 2800f, -380f, -48.5f };
			unk.f_3 = "ch_DLC_Plan";
			unk.f_4 = unk.f_3;
			break;
	
		case 205:
			unk = { 2497.7f, -312.8f, -69.9f };
			unk.f_3 = "ch_DLC_Tunnel";
			unk.f_4 = unk.f_3;
			break;
	
		case 206:
			unk = { 2523.4f, -270f, -58.7f };
			unk.f_3 = "ch_DLC_Casino_Back";
			unk.f_4 = unk.f_3;
			break;
	
		case 207:
			unk = { 2504.4f, -257.2f, -39.1f };
			unk.f_3 = "ch_DLC_Casino_Hotel";
			unk.f_4 = unk.f_3;
			break;
	
		case 208:
			unk = { 2554f, -281.4f, -64.7f };
			unk.f_3 = "ch_DLC_Casino_Loading";
			unk.f_4 = unk.f_3;
			break;
	
		case 209:
			unk = { 2488.3f, -267.4f, -70.6f };
			unk.f_3 = "ch_DLC_Casino_Vault";
			unk.f_4 = unk.f_3;
			break;
	
		case 210:
			unk = { 2519.9f, -255.3f, -24.1f };
			unk.f_3 = "ch_DLC_Casino_Utility";
			unk.f_4 = unk.f_3;
			break;
	
		case 211:
			unk = { 2572.9f, -253.4f, -64.7f };
			unk.f_3 = "ch_dlc_casino_shaft";
			unk.f_4 = unk.f_3;
			break;
	
		case 213:
			unk = { 1103.5624f, -3000f, -40f };
			unk.f_3 = "gr_grdlc_int_01";
			unk.f_4 = unk.f_3;
			break;
	
		case 214:
			unk = { 1210f, 1857f, -50f };
			unk.f_3 = "tr_Tuner_MethLab_1";
			unk.f_4 = unk.f_3;
			break;
	
		case 215:
			unk = { 1569f, -2130f, -50f };
			unk.f_3 = "tr_Tuner_MethLab_1";
			unk.f_4 = unk.f_3;
			break;
	
		case 216:
			unk = { 839f, 2176f, -50f };
			unk.f_3 = "tr_Tuner_MethLab_1";
			unk.f_4 = unk.f_3;
			break;
	
		case 217:
			unk = { 982f, -143f, -50f };
			unk.f_3 = "tr_Tuner_MethLab_1";
			unk.f_4 = unk.f_3;
			break;
	
		case 218:
			unk = { -2000f, 1113.4f, 25.7f };
			unk.f_3 = "tr_tuner_car_meet";
			unk.f_4 = unk.f_3;
			break;
	
		case 219:
			unk = { -1350f, 160f, -99.2f };
			unk.f_3 = "tr_tuner_mod_garage";
			unk.f_4 = unk.f_3;
			break;
	
		case 220:
			unk = { 1.1f, -705.6f, 16.1f };
			unk.f_3 = "finbank";
			unk.f_4 = unk.f_3;
			break;
	
		case 221:
			unk = { -1010f, -70f, -99.4f };
			unk.f_3 = "sf_dlc_studio_sec";
			unk.f_4 = unk.f_3;
			break;
	
		case 222:
			unk = { 1550f, 250f, -50f };
			unk.f_3 = "h4_dlc_int_02_h4";
			unk.f_4 = unk.f_3;
			break;
	
		case 224:
			unk = { -935.7f, -2992.2f, 13.9f };
			unk.f_3 = "v_hanger";
			unk.f_4 = unk.f_3;
			break;
	
		case 225:
			unk = { 730f, -2990f, -39f };
			unk.f_3 = "imp_imptexp_mod_int_01";
			unk.f_4 = unk.f_3;
			break;
	
		case 226:
			unk = { 152.3f, -1004.4f, -97.8f };
			unk.f_3 = "v_motel_mp";
			unk.f_4 = unk.f_3;
			break;
	
		case 227:
			unk = { 170f, 5190f, 10f };
			unk.f_3 = "xs_x18_int_mod2";
			unk.f_4 = unk.f_3;
			break;
	
		case 228:
			unk = { 850f, -3000f, -50f };
			unk.f_3 = "reh_dlc_int_04_sum2";
			unk.f_4 = unk.f_3;
			break;
	
		case 229:
			unk = { 495f, -2560f, -50f };
			unk.f_3 = "xm3_DLC_INT_04_xm3";
			unk.f_4 = unk.f_3;
			break;
	
		case 230:
			unk = { 570f, -415.1f, -69.6f };
			unk.f_3 = "xm3_DLC_INT_03_xm3";
			unk.f_4 = unk.f_3;
			break;
	
		case 231:
			unk = { 984.4f, -95.4f, 76.8f };
			unk.f_3 = "bkr_biker_dlc_int_03";
			unk.f_4 = unk.f_3;
			break;
	
		default:
			break;
	}

	return unk;
}

struct<6> func_105(int iParam0, BOOL bParam1) // Position - 0x8740
{
	var unk;

	switch (iParam0)
	{
		case -1:
			unk = { -794.9184f, 339.6266f, 200.4135f };
			unk.f_3 = { 0f, 0f, 180f };
			break;
	
		case 1:
			unk = { -794.9184f, 339.6266f, 200.4135f };
			unk.f_3 = { 0f, 0f, 180f };
			break;
	
		case 2:
			unk = { -761.0982f, 317.6259f, 169.59628f };
			unk.f_3 = { 0f, 0f, 0f };
			break;
	
		case 3:
			unk = { -761.1888f, 317.6295f, 216.0503f };
			unk.f_3 = { 0f, 0f, 0f };
			break;
	
		case 4:
			unk = { -795.3856f, 340.0188f, 152.7941f };
			unk.f_3 = { 0f, 0f, 179.99997f };
			break;
	
		case 61:
			unk = { -778.5056f, 332.3779f, 212.1968f };
			unk.f_3 = { 0f, 0f, 90f };
			break;
	
		case 5:
			unk = { -258.1807f, -950.6853f, 70.0239f };
			unk.f_3 = { 0f, 0f, 70f };
			break;
	
		case 6:
			unk = { -285.0051f, -957.6552f, 85.3035f };
			unk.f_3 = { 0f, 0f, -109.99999f };
			break;
	
		case 7:
			unk = { -1471.8821f, -530.7484f, 62.34918f };
			unk.f_3 = { 0f, 0f, -145f };
			break;
	
		case 34:
			unk = { -1471.8821f, -530.7484f, 49.72156f };
			unk.f_3 = { 0f, 0f, -145f };
			break;
	
		case 62:
			unk = { -1463.15f, -540.2369f, 74.2439f };
			unk.f_3 = { 0f, 0f, -145f };
			break;
	
		case 35:
			unk = { -885.3702f, -451.4775f, 119.327f };
			unk.f_3 = { 0f, 0f, 27.55617f };
			break;
	
		case 36:
			unk = { -913.0385f, -438.4284f, 114.39966f };
			unk.f_3 = { 0f, 0f, -153.30931f };
			break;
	
		case 37:
			unk = { -892.5499f, -430.4789f, 88.25368f };
			unk.f_3 = { 0f, 0f, 116.9193f };
			break;
	
		case 38:
			unk = { -35.0462f, -576.317f, 82.90739f };
			unk.f_3 = { 0f, 0f, 160f };
			break;
	
		case 39:
			unk = { -10.3788f, -590.7431f, 93.02542f };
			unk.f_3 = { 0f, 0f, 70f };
			break;
	
		case 65:
			unk = { -22.2487f, -589.1461f, 80.2305f };
			unk.f_3 = { 0f, 0f, 69.88f };
			break;
	
		case 40:
			unk = { -900.6311f, -376.7462f, 78.27306f };
			unk.f_3 = { 0f, 0f, 26.92611f };
			break;
	
		case 41:
			unk = { -929.483f, -374.5104f, 102.23286f };
			unk.f_3 = { 0f, 0f, -152.55307f };
			break;
	
		case 63:
			unk = { -914.4202f, -375.8189f, 114.4743f };
			unk.f_3 = { 0f, 0f, -63f };
			break;
	
		case 42:
			unk = { -617.1647f, 64.6042f, 100.8196f };
			unk.f_3 = { 0f, 0f, 180f };
			break;
	
		case 43:
			unk = { -584.2015f, 42.7133f, 86.4187f };
			unk.f_3 = { 0f, 0f, 0f };
			break;
	
		case 64:
			unk = { -609.5665f, 50.2203f, 98.3998f };
			unk.f_3 = { 0f, 0f, -90f };
			break;
	
		case 73:
			unk = { -171.3969f, 494.2671f, 134.4935f };
			unk.f_3 = { 0f, 0f, 11f };
			break;
	
		case 74:
			unk = { 339.4982f, 434.0887f, 146.2206f };
			unk.f_3 = { 0f, 0f, -63.5f };
			break;
	
		case 75:
			unk = { -761.3884f, 615.7333f, 140.9805f };
			unk.f_3 = { 0f, 0f, -71.5f };
			break;
	
		case 76:
			unk = { -678.1752f, 591.0076f, 142.2196f };
			unk.f_3 = { 0f, 0f, 40.5f };
			break;
	
		case 77:
			unk = { 120.0541f, 553.793f, 181.0943f };
			unk.f_3 = { 0f, 0f, 6f };
			break;
	
		case 78:
			unk = { -571.4039f, 655.2008f, 142.6293f };
			unk.f_3 = { 0f, 0f, -14.5f };
			break;
	
		case 79:
			unk = { -742.2565f, 587.6547f, 143.0577f };
			unk.f_3 = { 0f, 0f, -29f };
			break;
	
		case 80:
			unk = { -857.2222f, 685.051f, 149.6502f };
			unk.f_3 = { 0f, 0f, 4.5f };
			break;
	
		case 81:
			unk = { -1287.6498f, 443.2707f, 94.6919f };
			unk.f_3 = { 0f, 0f, 0f };
			break;
	
		case 82:
			unk = { 374.2012f, 416.9688f, 142.6977f };
			unk.f_3 = { 0f, 0f, -14f };
			break;
	
		case 83:
			unk = { -787.7805f, 334.9232f, 186.1134f };
			unk.f_3 = { 0f, 0f, 90f };
			break;
	
		case 84:
			unk = { -787.7805f, 334.9232f, 215.8384f };
			unk.f_3 = { 0f, 0f, 90f };
			break;
	
		case 85:
			unk = { -773.2258f, 322.8252f, 194.8862f };
			unk.f_3 = { 0f, 0f, -90f };
			break;
	
		case 86:
			unk = { -1573.0981f, -4085.806f, 9.7851f };
			unk.f_3 = { 0f, 0f, 162f };
			break;
	
		case 8:
		case 9:
		case 10:
		case 11:
		case 12:
		case 13:
		case 14:
		case 15:
		case 16:
		case 66:
		case 67:
		case 68:
		case 69:
			unk = { 342.8157f, -997.4288f, -100f };
			unk.f_3 = { 0f, 0f, 0f };
			break;
	
		case 17:
		case 18:
		case 19:
		case 20:
		case 21:
		case 22:
		case 23:
		case 70:
		case 71:
		case 72:
			unk = { 260.3297f, -997.4288f, -100f };
			unk.f_3 = { 0f, 0f, 0f };
			break;
	
		case 87:
			unk = { -1572.1869f, -570.8315f, 109.9879f };
			unk.f_3 = { 0f, 0f, -54f };
			break;
	
		case 88:
			unk = { -1383.9543f, -476.7112f, 73.507f };
			unk.f_3 = { 0f, 0f, 8f };
			break;
	
		case 89:
			unk = { -138.0029f, -629.739f, 170.2854f };
			unk.f_3 = { 0f, 0f, -84f };
			break;
	
		case 90:
			unk = { -74.8895f, -817.6883f, 244.8508f };
			unk.f_3 = { 0f, 0f, 70f };
			break;
	
		case 91:
		case 92:
		case 93:
		case 94:
		case 95:
		case 96:
			unk = { 1100.7644f, -3159.384f, -34.9342f };
			unk.f_3 = { 0f, 0f, 0f };
			break;
	
		case 97:
		case 98:
		case 99:
		case 100:
		case 101:
		case 102:
			unk = { 1005.806f, -3157.6702f, -36.0897f };
			unk.f_3 = { 0f, 0f, 0f };
			break;
	
		case 103:
			if (!bParam1)
			{
				unk = { -1576.5712f, -569.7595f, 85.5f };
				unk.f_3 = { 0f, 0f, 36.1f };
			}
			else
			{
				unk = { -1578.0225f, -576.4251f, 104.2f };
				unk.f_3 = { 0f, 0f, -144.04f };
			}
			break;
	
		case 104:
			if (!bParam1)
			{
				unk = { -1571.2538f, -566.5865f, 85.5f };
				unk.f_3 = { 0f, 0f, -53.9f };
			}
			else
			{
				unk = { -1578.0225f, -576.4251f, 104.2f };
				unk.f_3 = { 0f, 0f, -144.04f };
			}
			break;
	
		case 105:
			if (!bParam1)
			{
				unk = { -1568.0984f, -571.9171f, 85.5f };
				unk.f_3 = { 0f, 0f, -143.9f };
			}
			else
			{
				unk = { -1578.0225f, -576.4251f, 104.2f };
				unk.f_3 = { 0f, 0f, -144.04f };
			}
			break;
	
		case 106:
			if (!bParam1)
			{
				unk = { -1384.5178f, -475.8657f, 56.1f };
				unk.f_3 = { 0f, 0f, 98.7f };
			}
			else
			{
				unk = { -1391.245f, -473.9638f, 77.2f };
				unk.f_3 = { 0f, 0f, 98.86f };
			}
			break;
	
		case 107:
			if (!bParam1)
			{
				unk = { -1384.5383f, -475.8829f, 48.1f };
				unk.f_3 = { 0f, 0f, 98.7f };
			}
			else
			{
				unk = { -1391.245f, -473.9638f, 77.2f };
				unk.f_3 = { 0f, 0f, 98.86f };
			}
			break;
	
		case 108:
			if (!bParam1)
			{
				unk = { -1378.9939f, -477.2481f, 56.1f };
				unk.f_3 = { 0f, 0f, -81.1f };
			}
			else
			{
				unk = { -1391.245f, -473.9638f, 77.2f };
				unk.f_3 = { 0f, 0f, 98.86f };
			}
			break;
	
		case 109:
			if (!bParam1)
			{
				unk = { -186.5683f, -576.4624f, 135f };
				unk.f_3 = { 0f, 0f, 96.16f };
			}
			else
			{
				unk = { -146.6167f, -596.6301f, 166f };
				unk.f_3 = { 0f, 0f, -140f };
			}
			break;
	
		case 110:
			if (!bParam1)
			{
				unk = { -113.886f, -564.3862f, 135f };
				unk.f_3 = { 0f, 0f, 110.96f };
			}
			else
			{
				unk = { -146.6167f, -596.6301f, 166f };
				unk.f_3 = { 0f, 0f, -140f };
			}
			break;
	
		case 111:
			if (!bParam1)
			{
				unk = { -134.6568f, -635.1774f, 135f };
				unk.f_3 = { 0f, 0f, -9.04f };
			}
			else
			{
				unk = { -146.6167f, -596.6301f, 166f };
				unk.f_3 = { 0f, 0f, -140f };
			}
			break;
	
		case 112:
			if (!bParam1)
			{
				unk = { -79.0479f, -822.6393f, 221f };
				unk.f_3 = { 0f, 0f, 70f };
			}
			else
			{
				unk = { -73.904f, -821.6204f, 284f };
				unk.f_3 = { 0f, 0f, -110f };
			}
			break;
	
		case 113:
			if (!bParam1)
			{
				unk = { -70.3086f, -819.5784f, 221f };
				unk.f_3 = { 0f, 0f, 160f };
			}
			else
			{
				unk = { -73.904f, -821.6204f, 284f };
				unk.f_3 = { 0f, 0f, -110f };
			}
			break;
	
		case 114:
			if (!bParam1)
			{
				unk = { -79.9861f, -818.425f, 221f };
				unk.f_3 = { 0f, 0f, -20f };
			}
			else
			{
				unk = { -73.904f, -821.6204f, 284f };
				unk.f_3 = { 0f, 0f, -110f };
			}
			break;
	}

	return unk;
}

BOOL func_106(int iParam0) // Position - 0x92F6
{
	int i;

	if (iParam0 == 94 || iParam0 == -1)
		return false;

	if (Global_94666[iParam0 /*2*/])
		return true;

	for (i = 0; i < Global_91433; i = i + 1)
	{
		if (Global_91433[i /*5*/] != -1)
			if (Global_78828.f_109[Global_91433[i /*5*/] /*4*/] == iParam0)
				return true;
	}

	return false;
}

BOOL func_107(int iParam0) // Position - 0x935E
{
	if (iParam0 == 94 || iParam0 == -1)
		return false;

	return Global_113648.f_9087.f_330[iParam0 /*6*/];
}

Vector3 _GET_PLAYER_COORDS(var uParam0) // Position - 0x938A
{
	return unk_0x30BE8A934C020461(unk_0xF2CFBB1105511E1A(uParam0), 0);
}

BOOL func_109() // Position - 0x939D
{
	if (unk_0x24B651D85CCE5EB4(joaat("player_timetable_scene")) > 0)
		return true;

	return false;
}

BOOL func_110() // Position - 0x93B7
{
	return unk_0xA5E11AF0A2B928C1() <= Global_23270.f_6321 + 100;
}

BOOL func_111() // Position - 0x93CC
{
	return IS_BIT_SET(Global_78807, 9);
}

BOOL func_112() // Position - 0x93DB
{
	return IS_BIT_SET(Global_78807, 8);
}

BOOL func_113() // Position - 0x93EA
{
	if (!unk_0x055111B11E6624FD(unk_0xC1A5EC5C986B98AD(), 0) && !unk_0x66599E73DBA5A850(unk_0xC1A5EC5C986B98AD()))
		if (unk_0x7BB3D8F4F6310EB8(unk_0xC1A5EC5C986B98AD(), "misshair_shop@barbers", "player_intro", 3) || unk_0x7BB3D8F4F6310EB8(unk_0xC1A5EC5C986B98AD(), "misshair_shop@barbers", "player_base", 3) || unk_0x7BB3D8F4F6310EB8(unk_0xC1A5EC5C986B98AD(), "misshair_shop@barbers", "player_enterchair", 3) || unk_0x7BB3D8F4F6310EB8(unk_0xC1A5EC5C986B98AD(), "misshair_shop@barbers", "player_exitchair", 3) || unk_0x7BB3D8F4F6310EB8(unk_0xC1A5EC5C986B98AD(), "misshair_shop@barbers", "player_idle_a", 3) || unk_0x7BB3D8F4F6310EB8(unk_0xC1A5EC5C986B98AD(), "misshair_shop@barbers", "player_idle_b", 3) || unk_0x7BB3D8F4F6310EB8(unk_0xC1A5EC5C986B98AD(), "misshair_shop@barbers", "player_idle_c", 3) || unk_0x7BB3D8F4F6310EB8(unk_0xC1A5EC5C986B98AD(), "misshair_shop@barbers", "player_idle_d", 3) || unk_0x7BB3D8F4F6310EB8(unk_0xC1A5EC5C986B98AD(), "misshair_shop@hair_dressers", "player_intro", 3) || unk_0x7BB3D8F4F6310EB8(unk_0xC1A5EC5C986B98AD(), "misshair_shop@hair_dressers", "player_base", 3) || unk_0x7BB3D8F4F6310EB8(unk_0xC1A5EC5C986B98AD(), "misshair_shop@hair_dressers", "player_enterchair", 3) || unk_0x7BB3D8F4F6310EB8(unk_0xC1A5EC5C986B98AD(), "misshair_shop@hair_dressers", "player_exitchair", 3) || unk_0x7BB3D8F4F6310EB8(unk_0xC1A5EC5C986B98AD(), "misshair_shop@hair_dressers", "player_idle_a", 3) || unk_0x7BB3D8F4F6310EB8(unk_0xC1A5EC5C986B98AD(), "misshair_shop@hair_dressers", "player_idle_b", 3) || unk_0x7BB3D8F4F6310EB8(unk_0xC1A5EC5C986B98AD(), "misshair_shop@hair_dressers", "player_idle_c", 3) || unk_0x7BB3D8F4F6310EB8(unk_0xC1A5EC5C986B98AD(), "misshair_shop@hair_dressers", "player_idle_d", 3))
			return true;

	return false;
}

BOOL func_114() // Position - 0x957F
{
	int i;

	if (func_120())
	{
		for (i = 0; i < 60; i = i + 1)
		{
			if (func_115(i))
				return true;
		}
	}

	return false;
}

BOOL func_115(int iParam0) // Position - 0x95AF
{
	return func_116(iParam0, 20, true);
}

BOOL func_116(int iParam0, int iParam1, BOOL bParam2) // Position - 0x95C0
{
	if (iParam0 == -1)
		return false;

	if (bParam2)
		return IS_BIT_SET(Global_100733.f_1407[iParam0], iParam1);
	else if (unk_0xA26A9A07F761D8F8())
		if (func_118() == 0)
			return IS_BIT_SET(_MPCHAR_STAT_GET_INT(func_117(iParam0), -1, 0), iParam1);
	else
		return IS_BIT_SET(Global_113648.f_668[iParam0], iParam1);

	return false;
}

eMPStat func_117(int iParam0) // Position - 0x9621
{
	switch (iParam0)
	{
		case 0:
			return MP_STAT_SHOPFM_HAIRDO_01_BH;
	
		case 1:
			return MP_STAT_SHOPFM_HAIRDO_02_SC;
	
		case 2:
			return MP_STAT_SHOPFM_HAIRDO_03_V;
	
		case 3:
			return MP_STAT_SHOPFM_HAIRDO_04_SS;
	
		case 4:
			return MP_STAT_SHOPFM_HAIRDO_05_MP;
	
		case 5:
			return MP_STAT_SHOPFM_HAIRDO_06_HW;
	
		case 6:
			return MP_STAT_SHOPFM_HAIRDO_07_PB;
	
		case 7:
			return MP_STAT_SHOPFM_CLOTHES_L_01_SC;
	
		case 8:
			return MP_STAT_SHOPFM_CLOTHES_L_02_GS;
	
		case 9:
			return MP_STAT_SHOPFM_CLOTHES_L_03_DT;
	
		case 10:
			return MP_STAT_SHOPFM_CLOTHES_L_04_CS;
	
		case 11:
			return MP_STAT_SHOPFM_CLOTHES_L_05_GSD;
	
		case 12:
			return MP_STAT_SHOPFM_CLOTHES_L_06_VC;
	
		case 13:
			return MP_STAT_SHOPFM_CLOTHES_L_07_PB;
	
		case 14:
			return MP_STAT_SHOPFM_CLOTHES_M_01_SM;
	
		case 15:
			return MP_STAT_SHOPFM_CLOTHES_M_03_H;
	
		case 16:
			return MP_STAT_SHOPFM_CLOTHES_M_04_HW;
	
		case 17:
			return MP_STAT_SHOPFM_CLOTHES_M_05_GOH;
	
		case 18:
			return MP_STAT_SHOPFM_CLOTHES_H_01_BH;
	
		case 19:
			return MP_STAT_SHOPFM_CLOTHES_H_02_B;
	
		case 20:
			return MP_STAT_SHOPFM_CLOTHES_H_03_MW;
	
		case 21:
			return MP_STAT_SHOPFM_CLOTHES_A_01_VB;
	
		case 22:
			return MP_STAT_SHOPFM_TATTOO_01_HW;
	
		case 23:
			return MP_STAT_SHOPFM_TATTOO_02_SS;
	
		case 24:
			return MP_STAT_SHOPFM_TATTOO_03_PB;
	
		case 25:
			return MP_STAT_SHOPFM_TATTOO_04_VC;
	
		case 26:
			return MP_STAT_SHOPFM_TATTOO_05_ELS;
	
		case 27:
			return MP_STAT_SHOPFM_TATTOO_06_GOH;
	
		case 28:
			return MP_STAT_SHOPFM_GUN_01_DT;
	
		case 29:
			return MP_STAT_SHOPFM_GUN_02_SS;
	
		case 30:
			return MP_STAT_SHOPFM_GUN_03_HW;
	
		case 31:
			return MP_STAT_SHOPFM_GUN_04_ELS;
	
		case 32:
			return MP_STAT_SHOPFM_GUN_05_PB;
	
		case 33:
			return MP_STAT_SHOPFM_GUN_06_LS;
	
		case 34:
			return MP_STAT_SHOPFM_GUN_07_MW;
	
		case 35:
			return MP_STAT_SHOPFM_GUN_08_CS;
	
		case 36:
			return MP_STAT_SHOPFM_GUN_09_GOH;
	
		case 37:
			return MP_STAT_SHOPFM_GUN_10_VWH;
	
		case 38:
			return MP_STAT_SHOPFM_GUN_11_ID1;
	
		case 39:
			return MP_STAT_SHOPFM_CARMOD_01_AP;
	
		case 40:
			return MP_STAT_SHOPFM_CARMOD_05_ID2;
	
		case 41:
			return MP_STAT_SHOPFM_CARMOD_06_BT1;
	
		case 42:
			return MP_STAT_SHOPFM_CARMOD_07_CS1;
	
		case 43:
			return MP_STAT_SHOPFM_CARMOD_08_CS6;
	
		case 44:
			return MP_STAT_RAYPISTOL_FM_AMMO_CURRENT;
	
		case 45:
			return MP_STAT_SHOPFM_PERS_GAR;
	
		case 46:
			return MP_STAT_SHOPFM_PERS_GUN;
	
		case 47:
			return MP_STAT_SHOPFM_PERS_GUN_OSPREY;
	
		case 48:
			return MP_STAT_SHOPFM_PERS_GUN_HTRUCK;
	
		case 49:
			return MP_STAT_SHOPFM_PERS_GUN_ARENA;
	
		case 52:
			return MP_STAT_SHOPFM_PERS_GUN_ARCADE;
	
		case 50:
			return MP_STAT_SHOPFM_HAIRDO_CASINO_APT;
	
		case 51:
			return MP_STAT_SHOPFM_CLOTHES_CASINO;
	
		case 53:
			return MP_STAT_SHOPFM_PERS_GUN_SUB;
	
		case 54:
			return MP_STAT_SHOPFM_TATTOO_07_CCT;
	
		case 55:
			return MP_STAT_SHOPFM_CLOTHES_CAR_MEET;
	
		case 56:
			return MP_STAT_SHOPFM_PERS_GUN_FIXER;
	
		case 57:
			return MP_STAT_SHOPFM_CLOTHES_STUDIO;
	
		case 58:
			return MP_STAT_GBTELTIMESPLAYEDGOONPREV;
	
		case 59:
			return MP_STAT_TAMPA3_FMINI_HELDTIME;
	
		default:
			break;
	}

	return 14192;
}

int func_118() // Position - 0x99BA
{
	return Global_32163;
}

BOOL func_119() // Position - 0x99C5
{
	return Global_100733.f_388 > 0;
}

BOOL func_120() // Position - 0x99D6
{
	return Global_100733.f_387 > 0;
}

BOOL func_121(int iParam0, int iParam1) // Position - 0x99E7
{
	return iParam0 && iParam1 != false;
}

BOOL _IS_MISSION_REPEAT_ACTIVE(BOOL bExcludeBenchmark) // Position - 0x99F6
{
	if (!bExcludeBenchmark && unk_0x24B651D85CCE5EB4(joaat("benchmark")) > 0)
		return true;

	return IS_BIT_SET(Global_78807, 0);
}

BOOL func_123() // Position - 0x9A1E
{
	return Global_100720.f_1;
}

BOOL func_124() // Position - 0x9A2C
{
	return Global_78826;
}

BOOL func_125() // Position - 0x9A38
{
	if (Global_78819)
		return true;
	else if (Global_63356 && !Global_63362)
		return true;

	return false;
}

BOOL func_126() // Position - 0x9A62
{
	if (Global_43257 == 15)
		return false;

	return true;
}

BOOL func_127(eCharacter echParam0) // Position - 0x9A77
{
	if (Global_22839 || Global_22838 || Global_22840)
	{
		if (echParam0 == 130)
		{
		}
		else
		{
			return false;
		}
	}

	if (Global_117[echParam0 /*10*/].f_8 != 169)
		if (Global_20383.f_1 == 10)
			if (Global_7568 == echParam0)
				return true;
			else
				return false;
		else
			return false;

	return false;
}

int _MPCHAR_STAT_GET_INT(eMPStat empsParam0, int iParam1, int iParam2) // Position - 0x9ADB
{
	int num;
	int num2;

	if (empsParam0 != 14192)
	{
		iParam2 == 0;
		num = Global_2805027[empsParam0 /*3*/][func_129(iParam1)];
	
		if (unk_0xDD7756E2742E0F6D(num, &num2, -1))
			return num2;
	}

	return 0;
}

int func_129(int iParam0) // Position - 0x9B18
{
	int num;
	int num2;

	num = iParam0;

	if (num == -1)
	{
		num2 = func_130();
	
		if (num2 > -1)
		{
			Global_2804739 = 0;
			num = num2;
		}
		else
		{
			num = 0;
			Global_2804739 = 1;
		}
	}

	return num;
}

int func_130() // Position - 0x9B4C
{
	return Global_1574918;
}

void func_131() // Position - 0x9B58
{
	if (Global_78558 == false)
	{
		Global_8260[14 /*15*/].f_4 = -99;
		Global_8260[4 /*15*/].f_4 = -99;
	
		if (Global_2694519)
		{
			if (func_34(14))
			{
				func_132(2, "CELL_2" /*Internet*/, 2, "appInternet", 6, 1, 1, 0, 0);
				func_132(14, "CELL_29" /*Job List*/, 7, "appMPJobListNEW", 12, 1, 1, 0, 0);
			}
			else
			{
				func_132(14, "CELL_29" /*Job List*/, 2, "appMPJobListNEW", 12, 1, 1, 0, 0);
			}
		}
		else
		{
			func_132(4, "CELL_23" /*Check List*/, 2, "appChecklist", 39, 1, 1, 0, 0);
		}
	}

	return;
}

void func_132(int iParam0, char* sParam1, int iParam2, char* sParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8) // Position - 0x9BE6
{
	TEXT_LABEL_ASSIGN_STRING(&Global_8260[iParam0 /*15*/], sParam1, 16);
	Global_8260[iParam0 /*15*/].f_4 = iParam2;
	TEXT_LABEL_ASSIGN_STRING(&(Global_8260[iParam0 /*15*/].f_5), sParam3, 16);
	Global_8260[iParam0 /*15*/].f_9 = unk_0x14580F20CBCE4FA9(sParam3);
	Global_8260[iParam0 /*15*/].f_10 = iParam4;
	Global_8260[iParam0 /*15*/].f_11 = iParam5;
	Global_8260[iParam0 /*15*/].f_12 = iParam6;
	Global_8260[iParam0 /*15*/].f_13 = iParam7;
	Global_8260[iParam0 /*15*/].f_14 = iParam8;

	if (Global_8260[iParam0 /*15*/].f_12 == 0)
		Global_8260[iParam0 /*15*/].f_12 = 0;

	if (Global_8260[iParam0 /*15*/].f_13 == 0)
		Global_8260[iParam0 /*15*/].f_13 = 0;

	if (Global_8260[iParam0 /*15*/].f_14 == 0)
		Global_8260[iParam0 /*15*/].f_14 = 0;

	return;
}

void func_133() // Position - 0x9C9C
{
	int i;
	int num;
	int num2;

	for (i = 0; i < 34; i = i + 1)
	{
		Global_8260[i /*15*/].f_4 = -99;
	}

	if (Global_78558 == false)
	{
		num = 0;
	
		while (num2 < 161)
		{
			if (func_135(num2, Global_20383) == 1)
				num = 1;
		
			num2 = num2 + 1;
		}
	
		func_132(7, "CELL_5" /*Email*/, 0, "appEmail", 4, 1, 1, 0, 0);
		func_132(1, "CELL_1" /*Texts*/, 1, "appTextMessage", 2, 1, 1, 0, 0);
		func_132(4, "CELL_23" /*Check List*/, 2, "appChecklist", 39, 1, 1, 0, 0);
	
		if (Global_43257 == 15 && _IS_MISSION_REPEAT_ACTIVE(false) == false && Global_8258 == 0)
		{
			func_132(20, "CELL_32" /*Quick Save*/, 3, "appSettings", 43, 1, 1, 0, 0);
			Global_20587 = 0;
			Global_8259 = 255;
		}
		else
		{
			func_132(20, "CELL_32" /*Quick Save*/, 3, "appSettings", 43, 1, 1, 0, 0);
			Global_20587 = 1;
			Global_8259 = 42;
		}
	
		if (num == 1)
			func_132(0, "CELL_0" /*Contacts*/, 4, "appContacts", 27, 1, 1, 0, 0);
		else
			func_132(0, "CELL_0" /*Contacts*/, 4, "appContacts", 5, 1, 1, 0, 0);
	
		func_132(10, "CELL_16" /*Settings*/, 5, "appSettings", 24, 1, 1, 0, 0);
		func_132(3, "CELL_7" /*Snapmatic*/, 6, "appCamera", 1, 1, 1, 0, 0);
		func_132(2, "CELL_2" /*Internet*/, 7, "appInternet", 6, 1, 1, 0, 0);
	
		if (Global_113648.f_14053.f_89 == true)
			func_132(17, "CELL_28" /*Trackify*/, 8, "appTrackify", 42, 1, 1, 0, 0);
	
		if (Global_113648.f_14053.f_88 == 1)
			func_132(16, "CELL_25" /*Sniper*/, 0, "appContacts", 40, 2, 1, 0, 0);
	
		func_132(25, "CELL_14" /*More Apps*/, -99, "appContacts", 17, 2, 1, 0, 0);
		func_132(9, "CELL_13" /*BAWSAQ*/, -99, "appContacts", 13, 2, 1, 0, 0);
		func_132(11, "CELL_14" /*More Apps*/, -99, "appContacts", 8, 2, 1, 0, 0);
		func_132(27, "CELL_15" /*Spare*/, -99, "appContacts", 17, 2, 1, 0, 0);
		func_132(28, "CELL_15" /*Spare*/, -99, "appContacts", 17, 2, 1, 0, 0);
		func_132(29, "CELL_15" /*Spare*/, -99, "appSettings", 17, 2, 1, 0, 0);
		func_132(30, "CELL_15" /*Spare*/, -99, "appContacts", 17, 2, 1, 0, 0);
		func_132(31, "CELL_15" /*Spare*/, -99, "appContacts", 17, 2, 1, 0, 0);
		func_132(32, "CELL_15" /*Spare*/, -99, "appSettings", 17, 2, 1, 0, 0);
	}
	else
	{
		func_132(7, "CELL_5" /*Email*/, 0, "appMPEmail", 4, 1, 1, 0, 0);
		func_132(10, "CELL_16" /*Settings*/, 5, "appSettings", 24, 1, 1, 0, 0);
		func_132(1, "CELL_1" /*Texts*/, 1, "appTextMessage", 2, 1, 1, 0, 0);
		func_132(3, "CELL_7" /*Snapmatic*/, 6, "appCamera", 1, 1, 1, 0, 0);
		func_132(2, "CELL_2" /*Internet*/, 7, "appInternet", 6, 1, 1, 0, 0);
		func_132(14, "CELL_29" /*Job List*/, 4, "appMPJobListNEW", 12, 1, 1, 0, 0);
		func_132(0, "CELL_0" /*Contacts*/, 2, "appContacts", 5, 1, 1, 0, 0);
		func_132(21, "CELL_37" /*Quick Join*/, 3, "AppJIPMP", 14, 1, 1, 0, 0);
	
		if (IS_BIT_SET(Global_4542297, 4) == true)
			func_132(17, "CELL_28" /*Trackify*/, 8, "appTrackify", 42, 1, 1, 0, 0);
	
		func_132(13, "CELL_35" /*Player List*/, -99, "appMPCopBackup", 39, 1, 1, 0, 0);
		func_132(13, "CELL_20", -99, "appMPCopBackup", 16, 1, 1, 0, 0);
		func_132(15, "CELL_18" /*Map*/, -99, "appContacts", 8, 1, 1, 0, 0);
		func_132(9, "CELL_13" /*BAWSAQ*/, -99, "appContacts", 13, 2, 1, 0, 0);
		func_132(5, "CELL_4" /*Sidetasks*/, -99, "appContacts", 12, 2, 1, 0, 0);
		func_132(23, "CELL_15" /*Spare*/, 0, "appContacts", 17, 2, 1, 0, 0);
		func_132(24, "CELL_15" /*Spare*/, 1, "appContacts", 17, 2, 1, 0, 0);
		func_132(25, "CELL_15" /*Spare*/, 2, "appContacts", 17, 2, 1, 0, 0);
		func_132(26, "CELL_15" /*Spare*/, 3, "appContacts", 17, 2, 1, 0, 0);
		func_132(27, "CELL_15" /*Spare*/, 4, "appContacts", 17, 2, 1, 0, 0);
		func_132(28, "CELL_15" /*Spare*/, 5, "appContacts", 17, 2, 1, 0, 0);
		func_132(29, "CELL_15" /*Spare*/, 6, "appContacts", 17, 2, 1, 0, 0);
		func_132(30, "CELL_15" /*Spare*/, 7, "appContacts", 17, 2, 1, 0, 0);
		func_132(31, "CELL_15" /*Spare*/, 8, "appContacts", 17, 2, 1, 0, 0);
		func_132(32, "CELL_15" /*Spare*/, 9, "appContacts", 17, 2, 1, 0, 0);
		func_132(33, "CELL_15" /*Spare*/, 10, "appContacts", 17, 2, 1, 0, 0);
	
		if (!IS_BIT_SET(Global_4542297, 4) == true)
			if (Global_1836102)
				func_132(23, "CELL_CIRCBREAK" /*VLSI Unlock*/, 8, "AppVLSI", 54, 1, 1, 0, 0);
			else if (IS_BIT_SET(Global_4542297, 20) == true)
				func_132(23, "CELL_SIGHTS" /*Sightseer*/, 8, "AppSettings", 59, 1, 1, 0, 0);
			else if (IS_BIT_SET(Global_4542297, 22) == true)
				func_132(23, "CELL_EXTRACT" /*Extraction*/, 8, "AppExtraction", 58, 1, 1, 0, 0);
			else if (IS_BIT_SET(Global_4542297, 26) == true)
				if (func_134())
					func_132(23, "CELL_0" /*Contacts*/, -99, "appContacts", 5, 1, 1, 0, 0);
				else
					func_132(23, "CELL_SECHACK" /*SecuroServ Hack*/, 8, "AppSecuroHack", 57, 1, 1, 0, 0);
	
		if (IS_BIT_SET(Global_4542297, 4) == false && Global_1836102 == false && IS_BIT_SET(Global_4542297, 20) == false && IS_BIT_SET(Global_4542297, 22) == false && IS_BIT_SET(Global_4542297, 26) == false)
			if (func_134())
				func_132(23, "CELL_0" /*Contacts*/, -99, "appContacts", 5, 1, 1, 0, 0);
			else
				func_132(23, "CELL_BOSSAGE" /*SecuroServ*/, 8, "appMPBossAgency", 57, 1, 1, 0, 0);
	}

	return;
}

BOOL func_134() // Position - 0xA24C
{
	if (Global_78558)
		if (Global_1836499 || Global_1836500 == 1)
			return true;

	return false;
}

int func_135(int iParam0, eCharacter echParam1) // Position - 0xA273
{
	if (echParam1 < CHAR_MICHAEL || echParam1 > CHAR_ALL_PLAYERS_CONF)
		return 0;

	return Global_2028[iParam0 /*29*/].f_19[echParam1];
}

void func_136() // Position - 0xA29D
{
	return;
}

