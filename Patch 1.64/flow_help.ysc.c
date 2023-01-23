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
	var uLocal_20 = 0;
	var uLocal_21 = 0;
	var uLocal_22 = 0;
	var uLocal_23 = 0;
	var uLocal_24 = 0;
	var uLocal_25 = 0;
	var uLocal_26 = 0;
	var uLocal_27 = 0;
	var uLocal_28 = 0;
	var uLocal_29 = 0;
	var uLocal_30 = 0;
	var uLocal_31 = 0;
	var uLocal_32 = 0;
	var uLocal_33 = 0;
	var uLocal_34 = 0;
	var uLocal_35 = 0;
	var uLocal_36 = 0;
	int iLocal_37 = 0;
#endregion

void main() // Position - 0x0
{
	int i;
	int num;
	int j;

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

	if (unk_0x55EEDBBFDC6E810F(50))
		func_23();

	while (true)
	{
		if (Global_113648.f_20412.f_145 > 0 || Global_112288)
		{
			if (!Global_112288)
			{
				if (Global_43257 != 6 && Global_43257 != 15 && !Global_96688)
					func_23();
			
				if (!Global_112287)
				{
					if (Global_113648.f_20412.f_145 > 0)
					{
						if (func_20(&Global_113648.f_20412[iLocal_37 /*16*/]))
						{
							if (func_18(_GET_CURRENT_PLAYER_CHARACTER_0()))
							{
								if (IS_BIT_SET(Global_113648.f_20412[iLocal_37 /*16*/].f_11, _GET_CURRENT_PLAYER_CHARACTER()))
								{
									if (Global_113648.f_20412[iLocal_37 /*16*/].f_12 == Global_113648.f_20412.f_146[_GET_CURRENT_PLAYER_CHARACTER()])
									{
										if (unk_0xA5E11AF0A2B928C1() > Global_112290)
										{
											if (unk_0xA5E11AF0A2B928C1() > Global_113648.f_20412[iLocal_37 /*16*/].f_8)
											{
												if (unk_0x4310A0DB886F9FED(&(Global_113648.f_20412[iLocal_37 /*16*/].f_4), ""))
												{
													unk_0x6C45B4AA0D637138(1);
													func_11(&Global_113648.f_20412[iLocal_37 /*16*/]);
												}
												else
												{
													unk_0x6C45B4AA0D637138(1);
													func_10(&Global_113648.f_20412[iLocal_37 /*16*/], &(Global_113648.f_20412[iLocal_37 /*16*/].f_4));
												}
											
												if (Global_113648.f_20412[iLocal_37 /*16*/].f_13 != 0)
													func_9(Global_113648.f_20412[iLocal_37 /*16*/].f_13, 0);
											
												uLocal_20 = { Global_113648.f_20412[iLocal_37 /*16*/] };
												uLocal_20.f_4 = { Global_113648.f_20412[iLocal_37 /*16*/].f_4 };
												uLocal_20.f_8 = Global_113648.f_20412[iLocal_37 /*16*/].f_8;
												uLocal_20.f_10 = Global_113648.f_20412[iLocal_37 /*16*/].f_10;
												uLocal_20.f_9 = Global_113648.f_20412[iLocal_37 /*16*/].f_9;
												uLocal_20.f_11 = Global_113648.f_20412[iLocal_37 /*16*/].f_11;
												uLocal_20.f_12 = Global_113648.f_20412[iLocal_37 /*16*/].f_12;
												uLocal_20.f_13 = Global_113648.f_20412[iLocal_37 /*16*/].f_13;
												uLocal_20.f_14 = Global_113648.f_20412[iLocal_37 /*16*/].f_14;
												uLocal_20.f_15 = Global_113648.f_20412[iLocal_37 /*16*/].f_15;
												uLocal_20.f_16 = 0;
												Global_112291 = { Global_113648.f_20412[iLocal_37 /*16*/] };
												Global_112289 = unk_0xA5E11AF0A2B928C1();
											
												for (i = iLocal_37; i <= Global_113648.f_20412.f_145 - 2; i = i + 1)
												{
													func_8(i, i + 1);
												}
											
												func_7(Global_113648.f_20412.f_145 - 1);
												Global_113648.f_20412.f_145 = Global_113648.f_20412.f_145 - 1;
												func_6();
												Global_112288 = true;
											}
										}
									}
								}
							}
						}
					}
				}
			}
			else if (!func_4())
			{
				if (unk_0x4310A0DB886F9FED(&(uLocal_20.f_4), ""))
					if (_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(&uLocal_20))
						unk_0xCD3C8E1022864F65(0);
				else if (func_2(&uLocal_20, &(uLocal_20.f_4)))
					unk_0xCD3C8E1022864F65(0);
			
				if (unk_0xA5E11AF0A2B928C1() - Global_112289 > 4000 || uLocal_20.f_16)
				{
					if (uLocal_20.f_14 != 0)
						func_9(uLocal_20.f_14, 0);
				
					Global_112290 = unk_0xA5E11AF0A2B928C1() + 250;
				}
				else
				{
					if (uLocal_20.f_10 != -1)
						num = 20000;
					else
						num = -1;
				
					func_1(&uLocal_20, &(uLocal_20.f_4), uLocal_20.f_12, 1000, num, uLocal_20.f_9, uLocal_20.f_11, uLocal_20.f_13, uLocal_20.f_14, uLocal_20.f_15);
				}
			
				TEXT_LABEL_ASSIGN_STRING(&uLocal_20, "", 16);
				TEXT_LABEL_ASSIGN_STRING(&(uLocal_20.f_4), "", 16);
				uLocal_20.f_8 = 0;
				uLocal_20.f_9 = 0;
				uLocal_20.f_10 = -1;
				uLocal_20.f_11 = 0;
				uLocal_20.f_12 = 0;
				uLocal_20.f_13 = 0;
				uLocal_20.f_14 = 0;
				uLocal_20.f_15 = 0;
				uLocal_20.f_16 = 0;
				Global_112289 = 0;
				Global_112288 = false;
			}
		
			if (!unk_0x4310A0DB886F9FED(&Global_113648.f_20412[iLocal_37 /*16*/], &uLocal_20) && !unk_0x4310A0DB886F9FED(&Global_113648.f_20412[iLocal_37 /*16*/], ""))
			{
				if (Global_113648.f_20412[iLocal_37 /*16*/].f_10 != -1)
				{
					if (unk_0xA5E11AF0A2B928C1() > Global_113648.f_20412[iLocal_37 /*16*/].f_10)
					{
						for (j = iLocal_37; j <= Global_113648.f_20412.f_145 - 2; j = j + 1)
						{
							func_8(j, j + 1);
						}
					
						func_7(Global_113648.f_20412.f_145 - 1);
						Global_113648.f_20412.f_145 = Global_113648.f_20412.f_145 - 1;
						func_6();
					}
				}
			}
		
			iLocal_37 = iLocal_37 + 1;
		
			if (iLocal_37 >= Global_113648.f_20412.f_145)
				iLocal_37 = 0;
		}
		else if (Global_43257 != 6 && Global_43257 != 15 && !Global_96688)
		{
			func_23();
		}
	
		SYSTEM::WAIT(0);
	}

	return;
}

void func_1(char* sParam0, char* sParam1, var uParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, var uParam9) // Position - 0x472
{
	int i;

	if (unk_0x4310A0DB886F9FED(sParam0, ""))
		return;

	if (iParam3 < 0)
		return;

	if (iParam5 < 500 && iParam5 != -1)
		return;

	if (iParam4 < 0 && iParam4 != -1)
		return;

	if (iParam6 < 1 || iParam6 > 7)
		return;

	if (iParam7 == 235)
		return;

	if (iParam8 == 235)
		return;

	for (i = 0; i < Global_113648.f_20412.f_145; i = i + 1)
	{
		if (unk_0x4310A0DB886F9FED(&Global_113648.f_20412[i /*16*/], sParam0))
			return;
	}

	if (Global_113648.f_20412.f_145 < 9)
	{
		TEXT_LABEL_ASSIGN_STRING(&Global_113648.f_20412[Global_113648.f_20412.f_145 /*16*/], sParam0, 16);
		TEXT_LABEL_ASSIGN_STRING(&(Global_113648.f_20412[Global_113648.f_20412.f_145 /*16*/].f_4), sParam1, 16);
		Global_113648.f_20412[Global_113648.f_20412.f_145 /*16*/].f_8 = unk_0xA5E11AF0A2B928C1() + iParam3;
		Global_113648.f_20412[Global_113648.f_20412.f_145 /*16*/].f_9 = iParam5;
		Global_113648.f_20412[Global_113648.f_20412.f_145 /*16*/].f_11 = iParam6;
		Global_113648.f_20412[Global_113648.f_20412.f_145 /*16*/].f_12 = uParam2;
		Global_113648.f_20412[Global_113648.f_20412.f_145 /*16*/].f_13 = iParam7;
		Global_113648.f_20412[Global_113648.f_20412.f_145 /*16*/].f_14 = iParam8;
		Global_113648.f_20412[Global_113648.f_20412.f_145 /*16*/].f_15 = uParam9;
	
		if (iParam4 != -1)
			Global_113648.f_20412[Global_113648.f_20412.f_145 /*16*/].f_10 = unk_0xA5E11AF0A2B928C1() + iParam3 + iParam4;
		else
			Global_113648.f_20412[Global_113648.f_20412.f_145 /*16*/].f_10 = -1;
	
		Global_113648.f_20412.f_145 = Global_113648.f_20412.f_145 + 1;
		func_6();
	}

	return;
}

BOOL func_2(var uParam0, var uParam1) // Position - 0x644
{
	unk_0x56C9BC27C0FF68D7(uParam0);
	unk_0x48849374B34BB7B9(uParam1);
	return unk_0x6A92D111B5409879(0);
}

BOOL _IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(var message) // Position - 0x65D
{
	unk_0x56C9BC27C0FF68D7(message);
	return unk_0x6A92D111B5409879(0);
}

BOOL func_4() // Position - 0x670
{
	if (unk_0x2FECE8D166B3056B())
		return false;

	if (func_5())
		return false;

	if (uLocal_20.f_9 != -1 && unk_0xA5E11AF0A2B928C1() - Global_112289 > uLocal_20.f_9)
		return false;

	if (Global_112287)
		return false;

	if (unk_0x2FECE8D166B3056B())
		return false;

	if (unk_0x4310A0DB886F9FED(&(uLocal_20.f_4), ""))
	{
		if (!_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(&uLocal_20))
		{
			uLocal_20.f_16 = 1;
			return false;
		}
	}
	else if (!func_2(&uLocal_20, &(uLocal_20.f_4)))
	{
		uLocal_20.f_16 = 1;
		return false;
	}

	return true;
}

BOOL func_5() // Position - 0x6FF
{
	if (unk_0x24B651D85CCE5EB4(joaat("player_timetable_scene")) > 0)
		return true;

	return false;
}

void func_6() // Position - 0x719
{
	int i;

	for (i = 0; i < 3; i = i + 1)
	{
		Global_113648.f_20412.f_146[i] = 0;
	}

	for (i = 0; i < Global_113648.f_20412.f_145; i = i + 1)
	{
		if (IS_BIT_SET(Global_113648.f_20412[i /*16*/].f_11, 0))
			if (Global_113648.f_20412[i /*16*/].f_12 > Global_113648.f_20412.f_146[0])
				Global_113648.f_20412.f_146[0] = Global_113648.f_20412[i /*16*/].f_12;
	
		if (IS_BIT_SET(Global_113648.f_20412[i /*16*/].f_11, 1))
			if (Global_113648.f_20412[i /*16*/].f_12 > Global_113648.f_20412.f_146[1])
				Global_113648.f_20412.f_146[1] = Global_113648.f_20412[i /*16*/].f_12;
	
		if (IS_BIT_SET(Global_113648.f_20412[i /*16*/].f_11, 2))
			if (Global_113648.f_20412[i /*16*/].f_12 > Global_113648.f_20412.f_146[2])
				Global_113648.f_20412.f_146[2] = Global_113648.f_20412[i /*16*/].f_12;
	}

	return;
}

void func_7(int iParam0) // Position - 0x830
{
	TEXT_LABEL_ASSIGN_STRING(&Global_113648.f_20412[iParam0 /*16*/], "", 16);
	TEXT_LABEL_ASSIGN_STRING(&(Global_113648.f_20412[iParam0 /*16*/].f_4), "", 16);
	Global_113648.f_20412[iParam0 /*16*/].f_8 = 0;
	Global_113648.f_20412[iParam0 /*16*/].f_9 = 0;
	Global_113648.f_20412[iParam0 /*16*/].f_11 = 0;
	Global_113648.f_20412[iParam0 /*16*/].f_10 = -1;
	Global_113648.f_20412[iParam0 /*16*/].f_12 = 0;
	Global_113648.f_20412[iParam0 /*16*/].f_13 = 0;
	Global_113648.f_20412[iParam0 /*16*/].f_14 = 0;
	Global_113648.f_20412[iParam0 /*16*/].f_15 = 0;
	return;
}

void func_8(int iParam0, int iParam1) // Position - 0x8C8
{
	Global_113648.f_20412[iParam0 /*16*/] = { Global_113648.f_20412[iParam1 /*16*/] };
	Global_113648.f_20412[iParam0 /*16*/].f_4 = { Global_113648.f_20412[iParam1 /*16*/].f_4 };
	Global_113648.f_20412[iParam0 /*16*/].f_8 = Global_113648.f_20412[iParam1 /*16*/].f_8;
	Global_113648.f_20412[iParam0 /*16*/].f_10 = Global_113648.f_20412[iParam1 /*16*/].f_10;
	Global_113648.f_20412[iParam0 /*16*/].f_9 = Global_113648.f_20412[iParam1 /*16*/].f_9;
	Global_113648.f_20412[iParam0 /*16*/].f_11 = Global_113648.f_20412[iParam1 /*16*/].f_11;
	Global_113648.f_20412[iParam0 /*16*/].f_12 = Global_113648.f_20412[iParam1 /*16*/].f_12;
	Global_113648.f_20412[iParam0 /*16*/].f_13 = Global_113648.f_20412[iParam1 /*16*/].f_13;
	Global_113648.f_20412[iParam0 /*16*/].f_14 = Global_113648.f_20412[iParam1 /*16*/].f_14;
	Global_113648.f_20412[iParam0 /*16*/].f_15 = Global_113648.f_20412[iParam1 /*16*/].f_15;
	return;
}

void func_9(int iParam0, int iParam1) // Position - 0x9D8
{
	if (iParam0 == 235 || iParam0 == 0)
		return;

	Global_113648.f_8615[iParam0] = true;
	Global_113648.f_8615.f_236[iParam0] = unk_0xA5E11AF0A2B928C1() + iParam1;
	return;
}

void func_10(char* sParam0, char* sParam1) // Position - 0xA15
{
	unk_0x476CC3711883B966(sParam0);
	unk_0x48849374B34BB7B9(sParam1);
	unk_0xBC8969B539DCA239(0, 1, 1, -1);
	return;
}

void func_11(char* sParam0) // Position - 0xA31
{
	unk_0x476CC3711883B966(sParam0);
	unk_0xBC8969B539DCA239(0, 1, 1, -1);
	return;
}

eCharacter _GET_CURRENT_PLAYER_CHARACTER() // Position - 0xA47
{
	func_13();
	return Global_113648.f_2365.f_539.f_4321;
}

void func_13() // Position - 0xA60
{
	eCharacter character;

	if (unk_0x7DE17ACDD8BA2642(unk_0xC1A5EC5C986B98AD()))
	{
		if (_GET_CHARACTER_MODEL(Global_113648.f_2365.f_539.f_4321) != unk_0x504B9BB48D41C264(unk_0xC1A5EC5C986B98AD()))
		{
			character = _GET_PLAYER_CHARACTER_FROM_PED(unk_0xC1A5EC5C986B98AD());
		
			if (func_18(character) && !func_14(14) || Global_112599)
			{
				if (Global_113648.f_2365.f_539.f_4321 != character && func_18(Global_113648.f_2365.f_539.f_4321))
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

BOOL func_14(int iParam0) // Position - 0xB5D
{
	return Global_43257 == iParam0;
}

eCharacter _GET_PLAYER_CHARACTER_FROM_PED(var uParam0) // Position - 0xB6B
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

int _GET_CHARACTER_MODEL(eCharacter character) // Position - 0xBA8
{
	if (func_18(character))
		return func_17(character);
	else
		character != _CHAR_NULL;

	return 0;
}

int func_17(eCharacter echParam0) // Position - 0xBCD
{
	return Global_2028[echParam0 /*29*/];
}

BOOL func_18(eCharacter echParam0) // Position - 0xBDC
{
	return echParam0 < CHAR_MULTIPLAYER;
}

eCharacter _GET_CURRENT_PLAYER_CHARACTER_0() // Position - 0xBE8
{
	func_13();
	return Global_113648.f_2365.f_539.f_4321;
}

BOOL func_20(char* sParam0) // Position - 0xC01
{
	if (unk_0xF0E4B64AC0B5660E())
		return false;

	if (unk_0x2FECE8D166B3056B())
		return false;

	if (!unk_0x35DF833D93BCC488())
		return false;

	if (unk_0x47F8B78DC1737D5C())
		return false;

	if (func_22())
		return false;

	if (func_5())
		return false;

	if (sParam0->f_12 < 3)
	{
		if (func_21())
			return false;
	
		if (Global_78556)
			return false;
	
		if (Global_97601)
			return false;
	
		if (!IS_BIT_SET(sParam0->f_15, 1))
			if (Global_97609)
				return false;
	}

	return true;
}

BOOL func_21() // Position - 0xC8B
{
	if (Global_78819)
		return true;
	else if (Global_63356 && !Global_63362)
		return true;

	return false;
}

BOOL func_22() // Position - 0xCB5
{
	if (!unk_0xA26A9A07F761D8F8())
		return Global_98159.f_44 == 1;

	return false;
}

void func_23() // Position - 0xCD1
{
	if (Global_112288)
		if (unk_0x4310A0DB886F9FED(&(uLocal_20.f_4), ""))
			if (_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(&uLocal_20))
				unk_0xCD3C8E1022864F65(1);
		else if (func_2(&uLocal_20, &(uLocal_20.f_4)))
			unk_0xCD3C8E1022864F65(1);

	Global_112289 = 0;
	Global_112288 = false;
	unk_0x675D9C12C73D3DE7();
	return;
}

