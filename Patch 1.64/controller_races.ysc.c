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
	var uLocal_27 = 0;
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
	sLocal_20 = "NULL";
	fLocal_21 = 0f;
	fLocal_25 = -0.0375f;
	fLocal_26 = 0.17f;

	if (unk_0x55EEDBBFDC6E810F(82))
		func_31();

	if (unk_0x24B651D85CCE5EB4(joaat("controller_races")) > 1)
		unk_0x675D9C12C73D3DE7();

	while (unk_0x24B651D85CCE5EB4(joaat("initial")) > 0)
	{
		SYSTEM::WAIT(0);
	}

	func_30();

	while (true)
	{
		if (func_27(9) || Global_97601)
			func_31();
	
		if (unk_0x48DC6A21D1CAD89C(unk_0x93E99A2DBCBA9CFA()))
		{
			if (func_25())
			{
				func_23();
				func_19();
			
				if (_GET_CURRENT_PLAYER_CHARACTER() == CHAR_FRANKLIN)
				{
					switch (iLocal_28)
					{
						case 1:
							break;
					
						case 2:
							func_1();
							break;
					}
				}
			}
		}
	
		SYSTEM::WAIT(1000);
	}

	return;
}

void func_1() // Position - 0xE5
{
	int i;
	int num;
	float num2;

	if (func_11(8))
	{
		for (i = 0; i <= 5 - 1; i = i + 1)
		{
			num = func_10(i);
		
			if (IS_BIT_SET(Global_113648.f_24981.f_1, i))
			{
				if (IS_BIT_SET(Global_113648.f_24981.f_3, i))
				{
					num2 = SYSTEM::VDIST2(_GET_PLAYER_COORDS(unk_0x93E99A2DBCBA9CFA()), func_8(num, 0));
				
					if (num2 > 43681f)
					{
						if (!func_7(num))
						{
							if (!Global_113622[i])
							{
								func_3(num);
								func_2(num, true, true);
								unk_0x061B1200C95204CB(&(Global_113648.f_24981.f_3), i);
							}
							else if (unk_0xA5E11AF0A2B928C1() - Global_113628[i] > 60000)
							{
								Global_113622[i] = false;
								Global_113628[i] = unk_0xA5E11AF0A2B928C1();
								func_3(num);
								func_2(num, true, true);
								unk_0x061B1200C95204CB(&(Global_113648.f_24981.f_3), i);
							}
						}
						else
						{
							unk_0x061B1200C95204CB(&(Global_113648.f_24981.f_3), i);
						}
					}
					else if (func_7(num))
					{
						func_2(num, false, true);
					}
				}
				else if (!func_7(num))
				{
					if (!Global_113622[i])
					{
						func_3(num);
						func_2(num, true, true);
					}
					else if (unk_0xA5E11AF0A2B928C1() - Global_113628[i] > 60000)
					{
						Global_113622[i] = false;
						Global_113628[i] = unk_0xA5E11AF0A2B928C1();
						func_3(num);
						func_2(num, true, true);
					}
				}
			}
		}
	}

	return;
}

void func_2(int iParam0, BOOL bParam1, BOOL bParam2) // Position - 0x253
{
	int num;
	BOOL flag;

	num = iParam0;

	if (num < 0 || num >= 263 || iParam0 == 263)
		return;

	if (!bParam2)
	{
		flag = IS_BIT_SET(Global_32543[num /*23*/].f_11, 15);
	
		if (flag == bParam1)
			return;
	}

	if (bParam1 != IS_BIT_SET(Global_32543[num /*23*/].f_11, 0))
	{
		unk_0xECDAB41968FF21A8(&(Global_32543[num /*23*/].f_11), 18);
	
		if (Global_32540 == true)
			Global_32541 = true;
	
		Global_32540 = true;
	}

	if (bParam1)
	{
		unk_0xECDAB41968FF21A8(&(Global_32543[num /*23*/].f_11), 0);
		unk_0xECDAB41968FF21A8(&(Global_32543[num /*23*/].f_11), 15);
		unk_0xECDAB41968FF21A8(&(Global_32543[num /*23*/].f_11), 3);
	}
	else
	{
		unk_0x061B1200C95204CB(&(Global_32543[num /*23*/].f_11), 0);
		unk_0x061B1200C95204CB(&(Global_32543[num /*23*/].f_11), 15);
	}

	if (!IS_BIT_SET(Global_32543[num /*23*/].f_11, 0))
	{
		if (unk_0xCE4AAA035282336C(Global_32543[num /*23*/].f_19))
		{
			unk_0xC9BB10E64C4DE9F9(1);
			unk_0x45533C09A6C9B409(&(Global_32543[num /*23*/].f_19));
			unk_0xC9BB10E64C4DE9F9(0);
		}
	}

	return;
}

void func_3(int iParam0) // Position - 0x353
{
	func_6(iParam0, false, false);
	func_5(iParam0, true);
	func_4(iParam0, true);
	return;
}

void func_4(int iParam0, BOOL bParam1) // Position - 0x371
{
	int num;

	num = iParam0;

	if (num < 0 || num >= 263 || iParam0 == 263)
		return;

	if (bParam1 == IS_BIT_SET(Global_32543[num /*23*/].f_11, 4))
		return;

	if (bParam1)
		unk_0xECDAB41968FF21A8(&(Global_32543[num /*23*/].f_11), 4);
	else
		unk_0x061B1200C95204CB(&(Global_32543[num /*23*/].f_11), 4);

	if (Global_32540 == true)
		Global_32541 = true;

	Global_32540 = true;
	unk_0xECDAB41968FF21A8(&(Global_32543[num /*23*/].f_11), 18);
	return;
}

void func_5(int iParam0, BOOL bParam1) // Position - 0x3F4
{
	int num;

	num = iParam0;

	if (num < 0 || num >= 263 || iParam0 == 263)
		return;

	if (bParam1 == IS_BIT_SET(Global_32543[num /*23*/].f_11, 5))
		return;

	if (bParam1)
		unk_0xECDAB41968FF21A8(&(Global_32543[num /*23*/].f_11), 5);
	else
		unk_0x061B1200C95204CB(&(Global_32543[num /*23*/].f_11), 5);

	if (Global_32540 == true)
		Global_32541 = true;

	Global_32540 = true;
	unk_0xECDAB41968FF21A8(&(Global_32543[num /*23*/].f_11), 18);
	return;
}

void func_6(int iParam0, BOOL bParam1, BOOL bParam2) // Position - 0x477
{
	int num;

	num = iParam0;

	if (num < 0 || num >= 263 || iParam0 == 263)
		return;

	if (bParam1 == IS_BIT_SET(Global_32543[num /*23*/].f_11, 6))
		return;

	if (bParam1)
		unk_0xECDAB41968FF21A8(&(Global_32543[num /*23*/].f_11), 6);
	else
		unk_0x061B1200C95204CB(&(Global_32543[num /*23*/].f_11), 6);

	if (bParam2)
		unk_0xECDAB41968FF21A8(&(Global_32543[num /*23*/].f_11), 11);
	else
		unk_0x061B1200C95204CB(&(Global_32543[num /*23*/].f_11), 11);

	if (Global_32540 == true)
		Global_32541 = true;

	Global_32540 = true;
	unk_0xECDAB41968FF21A8(&(Global_32543[num /*23*/].f_11), 18);
	return;
}

BOOL func_7(int iParam0) // Position - 0x520
{
	int num;

	num = iParam0;

	if (num < 0 || num >= 263 || iParam0 == 263)
		return false;

	return unk_0xCE4AAA035282336C(Global_32543[num /*23*/].f_19);
}

Vector3 func_8(int iParam0, int iParam1) // Position - 0x55C
{
	int num;

	num = iParam0;

	if (num < 0 || num >= 263 || iParam0 == 263)
		return 0f, 0f, 0f;

	return Global_32543[num /*23*/][iParam1 /*3*/];
}

Vector3 _GET_PLAYER_COORDS(var uParam0) // Position - 0x59A
{
	return unk_0x30BE8A934C020461(unk_0xF2CFBB1105511E1A(uParam0), 0);
}

int func_10(int iParam0) // Position - 0x5AD
{
	switch (iParam0)
	{
		case 0:
			return 86;
	
		case 1:
			return 87;
	
		case 2:
			return 88;
	
		case 3:
			return 89;
	
		case 4:
			return 90;
	}

	return 86;
}

BOOL func_11(int iParam0) // Position - 0x604
{
	return IS_BIT_SET(Global_113648.f_9087.f_99.f_219[0], iParam0);
}

eCharacter _GET_CURRENT_PLAYER_CHARACTER() // Position - 0x61D
{
	func_13();
	return Global_113648.f_2365.f_539.f_4321;
}

void func_13() // Position - 0x636
{
	eCharacter character;

	if (unk_0x7DE17ACDD8BA2642(unk_0xC1A5EC5C986B98AD()))
	{
		if (_GET_CHARACTER_MODEL(Global_113648.f_2365.f_539.f_4321) != unk_0x504B9BB48D41C264(unk_0xC1A5EC5C986B98AD()))
		{
			character = _GET_PLAYER_CHARACTER_FROM_PED(unk_0xC1A5EC5C986B98AD());
		
			if (func_15(character) && !func_14(14) || Global_112599)
			{
				if (Global_113648.f_2365.f_539.f_4321 != character && func_15(Global_113648.f_2365.f_539.f_4321))
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

BOOL func_14(int iParam0) // Position - 0x733
{
	return Global_43257 == iParam0;
}

BOOL func_15(eCharacter echParam0) // Position - 0x741
{
	return echParam0 < CHAR_MULTIPLAYER;
}

eCharacter _GET_PLAYER_CHARACTER_FROM_PED(var uParam0) // Position - 0x74D
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

int _GET_CHARACTER_MODEL(eCharacter character) // Position - 0x78A
{
	if (func_15(character))
		return func_18(character);
	else
		character != _CHAR_NULL;

	return 0;
}

int func_18(eCharacter echParam0) // Position - 0x7AF
{
	return Global_2028[echParam0 /*29*/];
}

void func_19() // Position - 0x7BE
{
	int i;
	int num;
	float num2;

	if (func_11(7))
	{
		for (i = 0; i <= 4 - 1; i = i + 1)
		{
			num = func_22(i);
		
			if (IS_BIT_SET(Global_113648.f_24978.f_2, i))
			{
				num2 = SYSTEM::VDIST2(_GET_PLAYER_COORDS(unk_0x93E99A2DBCBA9CFA()), func_8(num, 0));
			
				if (num2 > 43681f)
				{
					if (!func_7(num))
					{
						if (!Global_113612[i])
						{
							func_3(num);
							func_2(num, true, true);
							unk_0x061B1200C95204CB(&(Global_113648.f_24978.f_2), i);
						}
						else if (unk_0xA5E11AF0A2B928C1() - Global_113617[i] > 60000)
						{
							Global_113612[i] = false;
							Global_113617[i] = unk_0xA5E11AF0A2B928C1();
							func_3(num);
							func_2(num, true, true);
							unk_0x061B1200C95204CB(&(Global_113648.f_24978.f_2), i);
						}
					}
				}
				else if (func_7(num))
				{
					func_2(num, false, true);
				}
			}
			else if (!func_7(num))
			{
				if (!Global_113612[i])
				{
					func_3(num);
					func_2(num, true, true);
				}
				else if (unk_0xA5E11AF0A2B928C1() - Global_113617[i] > 60000)
				{
					Global_113612[i] = false;
					Global_113617[i] = unk_0xA5E11AF0A2B928C1();
					func_3(num);
					func_2(num, true, true);
				}
			}
			else if (!Global_113648.f_24978)
			{
				if (num == 82)
				{
					func_21(82);
					func_20(65, 1000);
					Global_113648.f_24978 = 1;
				}
			}
		}
	}

	return;
}

void func_20(int iParam0, int iParam1) // Position - 0x936
{
	if (iParam0 == 235 || iParam0 == 0)
		return;

	Global_113648.f_8615[iParam0] = true;
	Global_113648.f_8615.f_236[iParam0] = unk_0xA5E11AF0A2B928C1() + iParam1;
	return;
}

void func_21(int iParam0) // Position - 0x973
{
	func_6(iParam0, true, false);
	func_5(iParam0, true);
	func_4(iParam0, true);
	return;
}

int func_22(int iParam0) // Position - 0x991
{
	switch (iParam0)
	{
		case 0:
			return 82;
	
		case 1:
			return 83;
	
		case 2:
			return 84;
	
		case 3:
			return 85;
	}

	return 82;
}

void func_23() // Position - 0x9DA
{
	switch (iLocal_28)
	{
		case 0:
			if (unk_0x30DFE1FFD2CC7420() < 20 && unk_0x30DFE1FFD2CC7420() >= 5)
			{
				func_24();
				iLocal_28 = 1;
			}
			else
			{
				iLocal_28 = 2;
			}
			break;
	
		case 1:
			if (unk_0x30DFE1FFD2CC7420() >= 20 || unk_0x30DFE1FFD2CC7420() < 5)
				iLocal_28 = 2;
			break;
	
		case 2:
			if (unk_0x30DFE1FFD2CC7420() < 20 && unk_0x30DFE1FFD2CC7420() >= 5)
			{
				func_24();
				iLocal_28 = 1;
			}
			break;
	}

	return;
}

void func_24() // Position - 0xA5B
{
	int i;

	for (i = 0; i <= 5 - 1; i = i + 1)
	{
		func_2(func_10(i), 0, false);
	}

	return;
}

BOOL func_25() // Position - 0xA83
{
	if (func_27(9))
		return false;

	if (func_26())
		return false;

	if (unk_0x83C5A442AAD15BAF(unk_0x93E99A2DBCBA9CFA()) > 0)
		return false;

	if (unk_0xB53553DC4AAC7D8A())
		return false;

	return true;
}

BOOL func_26() // Position - 0xABF
{
	if (unk_0x24B651D85CCE5EB4(joaat("player_timetable_scene")) > 0)
		return true;

	return false;
}

BOOL func_27(int iParam0) // Position - 0xAD9
{
	if (Global_43257 == 15)
		return false;

	if (_CAN_ENTER_FREEROAM_STATE(iParam0))
		return false;

	return true;
}

BOOL _CAN_ENTER_FREEROAM_STATE(int iParam0) // Position - 0xAFB
{
	return func_29(iParam0, Global_43257);
}

BOOL func_29(int iParam0, int iParam1) // Position - 0xB0C
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

void func_30() // Position - 0xCED
{
	int i;

	for (i = 0; i <= 4 - 1; i = i + 1)
	{
		Global_113612[i] = false;
		Global_113617[i] = unk_0xA5E11AF0A2B928C1();
	}

	for (i = 0; i <= 5 - 1; i = i + 1)
	{
		Global_113622[i] = false;
	}

	return;
}

void func_31() // Position - 0xD3B
{
	unk_0x675D9C12C73D3DE7();
	return;
}

