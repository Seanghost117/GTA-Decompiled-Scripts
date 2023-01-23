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
	char* sLocal_18 = 0;
	var uLocal_19 = 0;
	var uLocal_20 = 0;
	var uLocal_21 = 0;
	var uLocal_22 = 0;
	float fLocal_23 = 0f;
	float fLocal_24 = 0f;
	float fLocal_25 = 0f;
	var uLocal_26 = 0;
	var uLocal_27 = 0;
	float fLocal_28 = 0f;
	var uLocal_29 = 0;
	var uLocal_30 = 0;
	var uLocal_31 = 0;
	float fLocal_32 = 0f;
	float fLocal_33 = 0f;
	var uLocal_34 = 0;
	var uLocal_35 = 0;
	int iLocal_36 = 0;
	var uLocal_37 = 0;
	var uLocal_38 = 0;
	var uLocal_39 = 0;
	int iLocal_40 = 0;
	int iLocal_41 = 0;
	int iLocal_42 = 0;
	int iLocal_43 = 0;
	var uLocal_44 = 0;
	var uLocal_45 = 0;
	var uLocal_46 = 0;
	var uLocal_47 = 0;
	var uLocal_48 = 0;
	var uLocal_49 = 0;
	var uLocal_50 = 0;
	var uLocal_51 = 0;
	var uLocal_52 = 0;
	var uLocal_53 = 0;
	var uLocal_54 = 0;
	var uLocal_55 = 0;
	var uLocal_56 = 0;
	var uLocal_57 = 0;
	var uLocal_58 = 0;
	var uLocal_59 = 0;
	var uLocal_60 = 0;
	var uLocal_61 = 0;
	float fLocal_62 = 0f;
	var uLocal_63 = 0;
	var uLocal_64 = 0;
	var uLocal_65 = 0;
	var uLocal_66 = 0;
	var uLocal_67 = 0;
	var uLocal_68 = 0;
	var uLocal_69 = 0;
	var uLocal_70 = 0;
	var uLocal_71 = 0;
	var uLocal_72 = 0;
	var uLocal_73 = 0;
	var uLocal_74 = 0;
	var uLocal_75 = 0;
	var uLocal_76 = 0;
	var uLocal_77 = 0;
	var uLocal_78 = 0;
	var uLocal_79 = 0;
	var uLocal_80 = 0;
	var uLocal_81 = 0;
	var uLocal_82 = 0;
	var uLocal_83 = 0;
	var uLocal_84 = 0;
	var uLocal_85 = 0;
	var uLocal_86 = 0;
	var uLocal_87 = 0;
	var uLocal_88 = 0;
	var uLocal_89 = 0;
	var uLocal_90 = 0;
	var uLocal_91 = 0;
	var uLocal_92 = 0;
	BOOL bLocal_93 = 0;
	BOOL bLocal_94 = 0;
	BOOL bLocal_95 = 0;
	var uLocal_96 = 0;
	var uLocal_97 = 0;
	var uLocal_98 = 0;
	var uLocal_99 = 0;
	var uLocal_100 = 0;
	var uLocal_101 = 0;
	var uLocal_102 = 0;
	var uLocal_103 = 0;
	var uLocal_104 = 0;
	var uLocal_105 = 0;
	var uLocal_106 = 0;
	var uLocal_107 = 0;
	var uLocal_108 = 0;
	var uLocal_109 = 0;
	var uLocal_110 = 0;
	var uLocal_111 = 0;
	var uLocal_112 = 0;
	var uLocal_113 = 0;
	var uLocal_114 = 0;
	var uLocal_115 = 0;
	int iLocal_116 = 0;
	BOOL bLocal_117 = 0;
	int iLocal_118 = 0;
	int iLocal_119 = 0;
#endregion

void main() // Position - 0x0
{
	int num;
	int num2;
	int num3;
	int num4;
	BOOL flag;
	BOOL flag2;
	BOOL flag3;
	int num5;
	BOOL flag4;

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
	sLocal_18 = "NULL";
	fLocal_23 = 80f;
	fLocal_24 = 140f;
	fLocal_25 = 180f;
	fLocal_28 = 0f;
	fLocal_32 = -0.0375f;
	fLocal_33 = 0.17f;
	iLocal_36 = 3;
	iLocal_40 = 1;
	iLocal_41 = 65;
	iLocal_42 = 49;
	iLocal_43 = 64;
	fLocal_62 = (0.05f + 0.275f) - 0.01f;
	iLocal_119 = -1;

	if (unk_0x24B651D85CCE5EB4(joaat("context_controller")) > 1)
		unk_0x675D9C12C73D3DE7();

	unk_0x389D5B1C24A046B5();
	num = 0;
	num2 = num;
	SYSTEM::SETTIMERA(0);
	Global_44194 = false;
	func_41();
	TEXT_LABEL_ASSIGN_STRING(&Global_44195, "CC_SUBSTR" /*~INPUT_CONTEXT~*/, 16);
	num3 = -1;
	num4 = -1;
	flag = false;
	flag2 = false;
	flag3 = false;
	num5 = -1;
	flag4 = Global_78558;

	while (true)
	{
		if (Global_78558)
			func_35();
		else
			func_33();
	
		func_26();
	
		if (Global_78558 != flag4)
		{
			func_25();
			func_41();
			num3 = -1;
			flag4 = Global_78558;
		
			while (unk_0xB53553DC4AAC7D8A())
			{
				SYSTEM::WAIT(2000);
			}
		}
	
		if (Global_44200)
			if (Global_44202 > -1)
				if (!Global_44000[Global_44202 /*32*/].f_6)
					if (!_CONTEXT_IS_HELP_TEXT_BEING_DISPLAYED(Global_44202, 1))
						Global_44202 = -1;
	
		if (func_19())
		{
			num3 = -1;
			func_25();
		}
	
		if (num3 > -1)
		{
			if (!Global_44200)
			{
				if (Global_44202 != num3)
				{
					if (func_18(Global_44202))
					{
						func_25();
					
						if (!Global_44000[num3 /*32*/].f_5 && Global_44000[num3 /*32*/])
						{
							if (!func_19())
							{
								if (!Global_44000[num3 /*32*/].f_7)
								{
									if (!Global_44000[num3 /*32*/].f_6)
									{
										if (!Global_44000[num3 /*32*/].f_12)
											func_17(Global_44000[num3 /*32*/].f_8, Global_44000[num3 /*32*/].f_3);
										else
											func_16(Global_44000[num3 /*32*/].f_8, Global_44000[num3 /*32*/].f_13, Global_44000[num3 /*32*/].f_3, Global_44000[num3 /*32*/].f_30);
									
										Global_44202 = num3;
									}
								}
							}
						}
					}
				}
			}
			else
			{
				func_25();
			}
		}
		else
		{
			func_25();
		}
	
		switch (num)
		{
			case 0:
				num3 = func_15();
			
				if (unk_0x330E28807DE713E2(2, 51))
					flag3 = true;
			
				if (!func_19())
				{
					if (num3 > -1 && flag3)
					{
						if (unk_0x87644B1F984197FE(2, 51))
						{
							Global_44000[num3 /*32*/].f_4 = 1;
							Global_44000[num3 /*32*/].f_29 = 0;
							num5 = Global_44000[num3 /*32*/].f_1;
							num = 1;
							Global_44193 = false;
						}
					}
				}
				else
				{
					num3 = -1;
				}
			
				if (num4 != num3)
				{
					if (num3 != -1)
					{
						if (!unk_0xE678B2045145CE41(unk_0xF2CFBB1105511E1A(unk_0x5DC3DCA82C806319()), 1))
						{
							if (unk_0x3C3D6D026CF7F51B(unk_0xF2CFBB1105511E1A(unk_0x5DC3DCA82C806319()), 0))
							{
								if (unk_0xB378DD9B62D26EF3(0, 101))
								{
									flag2 = true;
									unk_0x8B438725D591ED78(0, 101, 1);
								}
							
								if (unk_0xB378DD9B62D26EF3(0, 74))
								{
									flag = true;
									unk_0x8B438725D591ED78(0, 74, 1);
								}
							}
						}
					}
					else
					{
						if (flag2)
						{
							unk_0x3210A569BAF257BB(0, 101, 1);
							flag2 = false;
						}
					
						if (flag)
						{
							unk_0x3210A569BAF257BB(0, 74, 1);
							flag = false;
						}
					}
				
					num4 = num3;
				}
				break;
		
			case 1:
				if (num3 < 0 || func_14() == 0)
				{
					num = 0;
				}
				else
				{
					if (SYSTEM::TIMERA() > 5000)
					{
						Global_44000[num3 /*32*/].f_7 = 1;
						num = 0;
					}
					else if (func_13(num3))
					{
						num = 2;
					}
				
					if (!num5 == Global_44000[num3 /*32*/].f_1)
						num = 0;
				
					if (Global_44000[num3 /*32*/].f_7 || Global_44000[num3 /*32*/] == false)
						num = 0;
				}
				break;
		
			case 2:
				if (Global_44193)
					func_25();
			
				if (unk_0x87644B1F984197FE(2, 51))
					if (num3 > -1)
						Global_44000[num3 /*32*/].f_29 = 0;
			
				if (Global_44194)
				{
					Global_44194 = false;
					num = 0;
				}
				else if (num3 > -1)
				{
					if (!(Global_44000[num3 /*32*/].f_4 || Global_44000[num3 /*32*/].f_7))
					{
						Global_44194 = false;
						num3 = -1;
					}
				}
			
				if (num3 > -1)
					if (Global_44000[num3 /*32*/].f_7 || Global_44000[num3 /*32*/] == false)
						num3 = -1;
			
				if (num3 == -1)
				{
					num = 0;
					flag3 = false;
				}
				break;
		}
	
		if (num3 > -1)
		{
			unk_0x8B438725D591ED78(0, 46, 1);
			unk_0x8B438725D591ED78(0, 54, 1);
		}
	
		if (num != num2)
		{
			num2 = num;
			SYSTEM::SETTIMERA(0);
			flag3 = false;
		}
	
		func_12();
		func_10(&num3);
		Global_44199 = false;
		Global_44200 = false;
		func_1();
		SYSTEM::WAIT(0);
	}

	return;
}

void func_1() // Position - 0x457
{
	int num;

	if (!bLocal_93)
		return;

	num = 1;

	if (iLocal_116 == 1)
		num = 0;

	if (bLocal_94)
	{
		if (bLocal_95)
			unk_0x6C45B4AA0D637138(0);
	
		unk_0x476CC3711883B966(&uLocal_96);
	
		if (bLocal_95)
		{
			unk_0x76B34CBB6F5FA1BB(&uLocal_100);
		}
		else
		{
			unk_0x48849374B34BB7B9(&Global_44195);
			unk_0x48849374B34BB7B9(&uLocal_100);
		}
	
		unk_0xBC8969B539DCA239(0, 0, num, 50);
	}
	else
	{
		unk_0x476CC3711883B966(&uLocal_96);
		unk_0x48849374B34BB7B9(&Global_44195);
		unk_0xBC8969B539DCA239(0, 0, num, 50);
	}

	switch (iLocal_116)
	{
		case 0:
			break;
	
		case 1:
			func_9(false);
			break;
	
		case 2:
			func_2(false);
			break;
	}

	return;
}

void func_2(BOOL bParam0) // Position - 0x4F4
{
	char* str;

	str = "GTAO_Boss_Goons_FM_Soundset";

	if (func_4(true))
		str = "GTAO_Biker_FM_Soundset";

	if (bParam0 && !func_3())
		unk_0x531D638530A8DB97(-1, "Boss_Message_Orange", str, 0);

	return;
}

BOOL func_3() // Position - 0x528
{
	return Global_2672505.f_2513[0 /*80*/].f_1 != 0;
}

BOOL func_4(BOOL bParam0) // Position - 0x53E
{
	return func_5(unk_0x93E99A2DBCBA9CFA(), bParam0);
}

BOOL func_5(Player plParam0, BOOL bParam1) // Position - 0x550
{
	return func_6(plParam0, bParam1, 1);
}

int func_6(Player plParam0, BOOL bParam1, int iParam2) // Position - 0x561
{
	Player player;

	if (plParam0 == _INVALID_PLAYER_INDEX())
		return 0;

	if (!bParam1)
		if (func_7(plParam0, iParam2))
			return 0;

	player = Global_1894573[plParam0 /*608*/].f_10;

	if (player != _INVALID_PLAYER_INDEX() && Global_1894573[player /*608*/].f_10.f_428 == iParam2)
		return 1;

	return 0;
}

BOOL func_7(Player plParam0, int iParam1) // Position - 0x5BD
{
	if (plParam0 != _INVALID_PLAYER_INDEX())
		if (Global_1894573[plParam0 /*608*/].f_10 != _INVALID_PLAYER_INDEX())
			if (Global_1894573[plParam0 /*608*/].f_10 == plParam0 && Global_1894573[plParam0 /*608*/].f_10.f_428 == iParam1)
				return true;

	return false;
}

Player _INVALID_PLAYER_INDEX() // Position - 0x60C
{
	return -1;
}

void func_9(BOOL bParam0) // Position - 0x615
{
	unk_0x9D7DD9F2D270206C(3, 21, 200, 0, 0);

	if (bParam0 && !func_3())
		unk_0x531D638530A8DB97(-1, "Event_Message_Purple", "GTAO_FM_Events_Soundset", 0);

	return;
}

void func_10(var uParam0) // Position - 0x642
{
	int i;

	i = 0;

	for (i = 0; i < 6; i = i + 1)
	{
		if (Global_44000[i /*32*/] && Global_44000[i /*32*/].f_4)
		{
			if (Global_44000[i /*32*/].f_31 != 0)
			{
				if (!unk_0xB8CEC43FB7EF2D92(Global_44000[i /*32*/].f_31))
				{
					if (*uParam0 > -1)
						func_11();
				
					Global_44000[i /*32*/] = false;
					Global_44000[i /*32*/].f_31 = 0;
					Global_44000[i /*32*/] = false;
					Global_44000[i /*32*/].f_4 = 0;
					Global_44000[i /*32*/].f_5 = 0;
					Global_44000[i /*32*/].f_2 = 0;
					Global_44000[i /*32*/].f_7 = 0;
					Global_44000[i /*32*/].f_6 = 0;
					Global_44000[i /*32*/].f_3 = 0;
					*uParam0 = -1;
				}
			}
		}
	}

	return;
}

void func_11() // Position - 0x6FA
{
	if (Global_44202 != -1 || bLocal_93)
	{
		bLocal_93 = false;
		Global_44202 = -1;
	}

	return;
}

void func_12() // Position - 0x719
{
	int i;

	i = 0;

	for (i = 0; i < 6; i = i + 1)
	{
		if (Global_44000[i /*32*/].f_7)
		{
			if (i == Global_44202)
				func_25();
		
			Global_44000[i /*32*/].f_31 = 0;
			Global_44000[i /*32*/] = false;
			Global_44000[i /*32*/].f_4 = 0;
			Global_44000[i /*32*/].f_5 = 0;
			Global_44000[i /*32*/].f_2 = 0;
			Global_44000[i /*32*/].f_7 = 0;
			Global_44000[i /*32*/].f_6 = 0;
			Global_44000[i /*32*/].f_1 = -1;
			Global_44000[i /*32*/].f_3 = 0;
		}
	}

	return;
}

BOOL func_13(int iParam0) // Position - 0x7A6
{
	if (iParam0 < 0)
		return false;

	if (Global_44000[iParam0 /*32*/].f_5)
		return true;

	return false;
}

int func_14() // Position - 0x7C9
{
	int i;
	int num;

	i = 0;
	num = 0;

	for (i = 0; i < 6; i = i + 1)
	{
		if (Global_44000[i /*32*/] == true)
			if (Global_44000[i /*32*/].f_4 == false)
				num = num + 1;
	}

	if (num == 0)
		func_25();

	return num;
}

int func_15() // Position - 0x813
{
	int i;
	int num;
	int num2;

	i = 0;
	num = -1;
	num2 = -1;

	for (i = 0; i < 6; i = i + 1)
	{
		if (Global_44000[i /*32*/])
		{
			if (Global_44000[i /*32*/].f_2 > num)
			{
				num2 = i;
				num = Global_44000[i /*32*/].f_2;
			}
		}
	}

	return num2;
}

void func_16(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, int iParam20, BOOL bParam21) // Position - 0x85F
{
	uLocal_96 = { uParam0 };
	uLocal_100 = { uParam4 };
	bLocal_93 = true;
	bLocal_94 = true;
	iLocal_116 = iParam20;
	bLocal_95 = bParam21;
	return;
}

void func_17(var uParam0, var uParam1, var uParam2, var uParam3, int iParam4) // Position - 0x887
{
	uLocal_96 = { uParam0 };
	bLocal_93 = true;
	bLocal_94 = false;
	iLocal_116 = iParam4;
	return;
}

BOOL func_18(int iParam0) // Position - 0x8A1
{
	int i;

	if (Global_97610 && Global_97609)
		return false;

	if (iParam0 > 0)
		if (_CONTEXT_IS_HELP_TEXT_BEING_DISPLAYED(iParam0, 1) || bLocal_93)
			return true;

	if (unk_0xF0E4B64AC0B5660E() && !unk_0x6460A65B237F74F2())
	{
		for (i = 0; i < 6; i = i + 1)
		{
			if (_CONTEXT_IS_HELP_TEXT_BEING_DISPLAYED(i, 1))
				return true;
		}
	
		return false;
	}

	return true;
}

BOOL func_19() // Position - 0x90F
{
	if (Global_75693)
		return true;

	if (!unk_0x48DC6A21D1CAD89C(unk_0x5DC3DCA82C806319()))
		return true;

	if (func_22(0))
		return true;

	if (unk_0x2FECE8D166B3056B())
		return true;

	if (Global_44199)
		return true;

	if (unk_0x32540FC8CD86BBDC(19))
		return true;

	if (func_21(true))
		return true;

	if (unk_0xB53553DC4AAC7D8A())
		return true;

	if (func_20(8, -1))
		return true;

	return false;
}

BOOL func_20(int iParam0, int iParam1) // Position - 0x986
{
	switch (iParam0)
	{
		case 5:
			if (iParam1 > -1)
				return Global_1653913.f_203[iParam1];
			break;
	}

	return IS_BIT_SET(Global_1653913.f_1048, iParam0);
}

BOOL func_21(BOOL bParam0) // Position - 0x9BE
{
	if (bParam0)
		return Global_23131.f_4 && Global_23131.f_104 == 4;

	return Global_23131.f_4;
}

BOOL func_22(int iParam0) // Position - 0x9E7
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

BOOL _CONTEXT_IS_HELP_TEXT_BEING_DISPLAYED(int iParam0, int iParam1) // Position - 0xA3E
{
	int num;
	BOOL num2;

	num = func_24(iParam0);

	if (iParam1 == 0)
		if (num == -1)
			return false;
	else
		num = iParam0;

	if (num < 0)
		return false;

	if (Global_44000[num /*32*/].f_6)
		return false;

	num2 = 0;

	if (!Global_44000[num /*32*/].f_12)
	{
		unk_0x56C9BC27C0FF68D7(&(Global_44000[num /*32*/].f_8));
		unk_0x48849374B34BB7B9(&Global_44195);
		num2 = unk_0x6A92D111B5409879(0);
	}
	else
	{
		unk_0x56C9BC27C0FF68D7(&(Global_44000[num /*32*/].f_8));
		unk_0x48849374B34BB7B9(&Global_44195);
	
		if (Global_44000[num /*32*/].f_30)
			unk_0x76B34CBB6F5FA1BB(&(Global_44000[num /*32*/].f_13));
		else
			unk_0x48849374B34BB7B9(&(Global_44000[num /*32*/].f_13));
	
		num2 = unk_0x6A92D111B5409879(0);
	}

	return num2;
}

int func_24(int iParam0) // Position - 0xAF3
{
	int i;

	if (iParam0 < 0)
		return -1;

	i = 0;

	for (i = 0; i < 6; i = i + 1)
	{
		if (Global_44000[i /*32*/].f_1 == iParam0)
			return i;
	}

	return -1;
}

void func_25() // Position - 0xB2E
{
	func_11();
	Global_44202 = -1;
	return;
}

void func_26() // Position - 0xB3E
{
	if (!unk_0xB53553DC4AAC7D8A() && !func_32())
	{
		if (func_31(false))
		{
			if (!unk_0x2AC37494BBF1DB16(&(Global_2683862.f_785.f_12)))
			{
				func_30();
				func_27(6, false, 0);
			}
		}
	}

	return;
}

int func_27(int iParam0, BOOL bParam1, int iParam2) // Position - 0xB7D
{
	BOOL flag;
	BOOL flag2;
	BOOL flag3;

	Global_75806 = iParam0;
	flag = iParam2 == 1;
	flag2 = iParam2 == 2;
	flag3 = iParam2 == 3;

	switch (Global_75806)
	{
		case 3:
			Global_75804 = 0;
			break;
	
		case 4:
			Global_75804 = 3;
			break;
	}

	if (unk_0x24B651D85CCE5EB4(joaat("appsecuroserv")) > 0)
	{
		if (flag)
		{
		}
	
		return 0;
	}

	if (unk_0x24B651D85CCE5EB4(joaat("appbikerbusiness")) > 0)
	{
		if (flag2)
		{
		}
	
		return 0;
	}

	if (unk_0x24B651D85CCE5EB4(joaat("appimportexport")) > 0)
	{
		if (flag3)
		{
		}
	
		return 0;
	}

	if (unk_0x24B651D85CCE5EB4(joaat("appinternet")) > 0)
	{
		if (flag || flag2 || flag3)
		{
		}
	
		return 0;
	}

	if (Global_78558 && func_29())
		return 0;

	if (!Global_78558 && func_28())
		return 0;

	if (flag)
	{
		if (!unk_0x6CAF14BE58B4BFF8("appSecuroServ"))
		{
			unk_0x3EC562D93709C894("appSecuroServ");
		
			if (bParam1)
				return 0;
		}
	
		while (!unk_0x6CAF14BE58B4BFF8("appSecuroServ"))
		{
			SYSTEM::WAIT(0);
		}
	
		SYSTEM::START_NEW_SCRIPT("appSecuroServ", APP_INTERNET);
		unk_0x037A80676B8FF0F5("appSecuroServ");
		return 1;
	}

	if (flag2)
	{
		if (!unk_0x6CAF14BE58B4BFF8("appBikerBusiness"))
		{
			unk_0x3EC562D93709C894("appBikerBusiness");
		
			if (bParam1)
				return 0;
		}
	
		while (!unk_0x6CAF14BE58B4BFF8("appBikerBusiness"))
		{
			SYSTEM::WAIT(0);
		}
	
		SYSTEM::START_NEW_SCRIPT("appBikerBusiness", APP_INTERNET);
		unk_0x037A80676B8FF0F5("appBikerBusiness");
		return 1;
	}

	if (flag3)
	{
		if (!unk_0x6CAF14BE58B4BFF8("appImportExport"))
		{
			unk_0x3EC562D93709C894("appImportExport");
		
			if (bParam1)
				return 0;
		}
	
		while (!unk_0x6CAF14BE58B4BFF8("appImportExport"))
		{
			SYSTEM::WAIT(0);
		}
	
		SYSTEM::START_NEW_SCRIPT("appImportExport", APP_INTERNET);
		unk_0x037A80676B8FF0F5("appImportExport");
		return 1;
	}

	if (!unk_0x6CAF14BE58B4BFF8("appInternet"))
	{
		unk_0x3EC562D93709C894("appInternet");
	
		if (bParam1)
			return 0;
	}

	while (!unk_0x6CAF14BE58B4BFF8("appInternet"))
	{
		SYSTEM::WAIT(0);
	}

	SYSTEM::START_NEW_SCRIPT("appInternet", APP_INTERNET);
	unk_0x037A80676B8FF0F5("appInternet");
	return 1;
}

BOOL func_28() // Position - 0xD84
{
	return Global_75694;
}

BOOL func_29() // Position - 0xD90
{
	return Global_1935689;
}

void func_30() // Position - 0xD9C
{
	Global_2683862.f_785.f_28 = 0;
	return;
}

BOOL func_31(BOOL bParam0) // Position - 0xDAE
{
	if (bParam0)
		return Global_2683862.f_785.f_28 && unk_0x14580F20CBCE4FA9(unk_0x688846D56810779A()) == Global_2683862.f_785.f_31;

	return Global_2683862.f_785.f_28;
}

BOOL func_32() // Position - 0xDEA
{
	return Global_75693;
}

void func_33() // Position - 0xDF6
{
	BOOL flag;
	int i;

	flag = false;
	i = 0;

	for (i = 0; i < 3; i = i + 1)
	{
		if (Global_60536[i] < 0)
		{
			Global_60536[i] = 0;
			flag = true;
		}
	}

	if (flag)
	{
		func_34(0);
		func_34(1);
		func_34(2);
	}

	return;
}

void func_34(int iParam0) // Position - 0xE40
{
	int num;

	num = Global_60536[iParam0];

	switch (iParam0)
	{
		case 0:
			unk_0x3CC35ACFFC9C730E(joaat("SP0_TOTAL_CASH"), num, 1);
			break;
	
		case 1:
			unk_0x3CC35ACFFC9C730E(joaat("SP1_TOTAL_CASH"), num, 1);
			break;
	
		case 2:
			unk_0x3CC35ACFFC9C730E(joaat("SP2_TOTAL_CASH"), num, 1);
			break;
	}

	return;
}

void func_35() // Position - 0xE9A
{
	var unk;
	var unk15;
	int num;

	if (Global_1835457 != -1)
	{
		unk = 1;
		unk[0 /*13*/] = Global_1835458[0];
		unk[0 /*13*/].f_1 = Global_1835458[1];
		unk[0 /*13*/].f_2 = Global_1835458[2];
		unk[0 /*13*/].f_3 = Global_1835458[3];
		unk[0 /*13*/].f_4 = Global_1835458[4];
		unk[0 /*13*/].f_5 = Global_1835458[5];
		unk[0 /*13*/].f_6 = Global_1835458[6];
		unk[0 /*13*/].f_7 = Global_1835458[7];
		unk[0 /*13*/].f_8 = Global_1835458[8];
		unk[0 /*13*/].f_9 = Global_1835458[9];
		unk[0 /*13*/].f_10 = Global_1835458[10];
		unk[0 /*13*/].f_11 = Global_1835458[11];
		unk[0 /*13*/].f_12 = Global_1835458[12];
	
		if (unk_0xCCE9BCDAB8B7FAED() || func_40())
		{
			if (!bLocal_117)
				if (unk_0xFD3D22CC2DCA16CD(&unk[0 /*13*/]))
					bLocal_117 = true;
		
			if (bLocal_117)
			{
				if (unk_0x19286027B59307C4())
				{
				}
				else
				{
					if (unk_0xD49277143D604526())
						TEXT_LABEL_ASSIGN_STRING(&Global_2359296[func_39() /*5568*/].f_5391.f_18[Global_1835457 /*6*/], unk_0x035CE87BB6CCBF5E(&unk[0 /*13*/]), 24);
				
					func_38();
				}
			}
		}
		else if (unk_0x674D69D3896862C7() || func_37())
		{
			if (IS_GAMER_HANDLE_VALID(unk[0 /*13*/]))
			{
				unk15 = 1;
			
				switch (iLocal_118)
				{
					case 0:
						iLocal_119 = unk_0xDAC1363CD05D8904(&unk, 1);
					
						if (iLocal_119 >= 0)
							iLocal_118 = iLocal_118 + 1;
						break;
				
					case 1:
						num = unk_0xCBAFCB22881A78EE(iLocal_119, &unk15, 1);
					
						switch (num)
						{
							case -1:
								func_38();
								break;
						
							case 0:
								TEXT_LABEL_COPY(&Global_2359296[func_39() /*5568*/].f_5391.f_18[Global_1835457 /*6*/], { unk15[0 /*16*/] }, 6);
								func_38();
								break;
						
							case 1:
								break;
						}
						break;
				}
			}
			else
			{
				func_38();
			}
		}
		else
		{
			if (IS_GAMER_HANDLE_VALID(unk[0 /*13*/]))
				TEXT_LABEL_ASSIGN_STRING(&Global_2359296[func_39() /*5568*/].f_5391.f_18[Global_1835457 /*6*/], unk_0x90C516AC4D68271F(&unk[0 /*13*/]), 24);
		
			func_38();
		}
	}

	return;
}

BOOL IS_GAMER_HANDLE_VALID(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12) // Position - 0x10B4
{
	return unk_0x73EC603A60C832F3(&uParam0, 13);
}

BOOL func_37() // Position - 0x10C4
{
	return unk_0x01689609224A6C92() || unk_0xEE17703CF2C2875A();
}

void func_38() // Position - 0x10DA
{
	Global_1835457 = -1;
	bLocal_117 = false;
	iLocal_119 = -1;
	iLocal_118 = 0;
	return;
}

int func_39() // Position - 0x10F0
{
	int num;

	num = 0;
	return num;
}

BOOL func_40() // Position - 0x10FD
{
	return unk_0x8CCF8DC8E92BDA94() || unk_0x14F62099DEBAEA33();
}

void func_41() // Position - 0x1113
{
	int i;

	Global_44193 = false;
	Global_44199 = false;
	Global_44200 = false;
	Global_44201 = 1;
	Global_44202 = -1;
	i = 0;

	for (i = 0; i < 6; i = i + 1)
	{
		Global_44000[i /*32*/] = false;
	}

	return;
}

