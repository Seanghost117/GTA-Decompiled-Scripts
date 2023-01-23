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
	int iLocal_29 = 0;
	int iLocal_30 = 0;
#endregion

void main() // Position - 0x0
{
	int i;

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
	iLocal_28 = 77;
	iLocal_29 = 194;
	iLocal_30 = 52;
	iLocal_28 = 77;

	if (unk_0x24B651D85CCE5EB4(joaat("rampage_controller")) > 1)
		unk_0x675D9C12C73D3DE7();

	if (unk_0x55EEDBBFDC6E810F(34))
		func_37();

	if (!func_36(108))
		func_37();

	func_35(23);

	for (i = 0; i < 5; i = i + 1)
	{
		func_27(iLocal_29 + i, 0, 0);
		unk_0xECDAB41968FF21A8(&Global_113648.f_18576[iLocal_30 + i /*6*/], 3);
	}

	func_19(1);

	while (true)
	{
		SYSTEM::WAIT(0);
	
		if (!func_18(40))
		{
			switch (func_16("RAMP_NEW_ALL" /*All rampages are now unlocked.*/))
			{
				case 2:
					func_13("RAMP_NEW_ALL" /*All rampages are now unlocked.*/, 1, 0, 2000, 10000, 4, 0, 0, 0);
					break;
			
				case 1:
					func_12(40);
					break;
			}
		}
	
		if (func_1())
		{
			func_19(0);
		
			while (func_1())
			{
				SYSTEM::WAIT(0);
			}
		
			while (unk_0x6FF497D385A9B7BF())
			{
				SYSTEM::WAIT(0);
			}
		
			func_19(1);
		}
	}

	return;
}

BOOL func_1() // Position - 0x13C
{
	return func_9(9) || Global_32166 || _GET_CURRENT_PLAYER_CHARACTER() != CHAR_TREVOR || Global_112735[56 /*10*/].f_3;
}

eCharacter _GET_CURRENT_PLAYER_CHARACTER() // Position - 0x16F
{
	func_3();
	return Global_113648.f_2365.f_539.f_4321;
}

void func_3() // Position - 0x188
{
	eCharacter character;

	if (unk_0x7DE17ACDD8BA2642(unk_0xC1A5EC5C986B98AD()))
	{
		if (_GET_CHARACTER_MODEL(Global_113648.f_2365.f_539.f_4321) != unk_0x504B9BB48D41C264(unk_0xC1A5EC5C986B98AD()))
		{
			character = _GET_PLAYER_CHARACTER_FROM_PED(unk_0xC1A5EC5C986B98AD());
		
			if (func_5(character) && !func_4(14) || Global_112599)
			{
				if (Global_113648.f_2365.f_539.f_4321 != character && func_5(Global_113648.f_2365.f_539.f_4321))
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

BOOL func_4(int iParam0) // Position - 0x285
{
	return Global_43257 == iParam0;
}

BOOL func_5(eCharacter echParam0) // Position - 0x293
{
	return echParam0 < CHAR_MULTIPLAYER;
}

eCharacter _GET_PLAYER_CHARACTER_FROM_PED(var uParam0) // Position - 0x29F
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

int _GET_CHARACTER_MODEL(eCharacter character) // Position - 0x2DC
{
	if (func_5(character))
		return func_8(character);
	else
		character != _CHAR_NULL;

	return 0;
}

int func_8(eCharacter echParam0) // Position - 0x301
{
	return Global_2028[echParam0 /*29*/];
}

BOOL func_9(int iParam0) // Position - 0x310
{
	if (Global_43257 == 15)
		return false;

	if (_CAN_ENTER_FREEROAM_STATE(iParam0))
		return false;

	return true;
}

BOOL _CAN_ENTER_FREEROAM_STATE(int iParam0) // Position - 0x332
{
	return func_11(iParam0, Global_43257);
}

BOOL func_11(int iParam0, int iParam1) // Position - 0x343
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

void func_12(int iParam0) // Position - 0x524
{
	int num;
	int i;

	num = iParam0;

	for (i = 0; num > 31; i = i + 1)
	{
		num = num - 32;
	}

	if (i < 3)
		unk_0xECDAB41968FF21A8(&Global_113648.f_20412.f_150[i], num);

	return;
}

void func_13(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8) // Position - 0x566
{
	func_14(sParam0, "", iParam1, iParam2, iParam3, iParam4, iParam5, iParam6, iParam7, iParam8);
	return;
}

void func_14(char* sParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9) // Position - 0x587
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
		Global_113648.f_20412[Global_113648.f_20412.f_145 /*16*/].f_12 = iParam2;
		Global_113648.f_20412[Global_113648.f_20412.f_145 /*16*/].f_13 = iParam7;
		Global_113648.f_20412[Global_113648.f_20412.f_145 /*16*/].f_14 = iParam8;
		Global_113648.f_20412[Global_113648.f_20412.f_145 /*16*/].f_15 = iParam9;
	
		if (iParam4 != -1)
			Global_113648.f_20412[Global_113648.f_20412.f_145 /*16*/].f_10 = unk_0xA5E11AF0A2B928C1() + iParam3 + iParam4;
		else
			Global_113648.f_20412[Global_113648.f_20412.f_145 /*16*/].f_10 = -1;
	
		Global_113648.f_20412.f_145 = Global_113648.f_20412.f_145 + 1;
		func_15();
	}

	return;
}

void func_15() // Position - 0x75A
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

int func_16(char* sParam0) // Position - 0x871
{
	if (unk_0x4310A0DB886F9FED(sParam0, &Global_112291))
		return 1;

	if (func_17(sParam0))
		return 0;

	return 2;
}

BOOL func_17(char* sParam0) // Position - 0x898
{
	int i;

	for (i = 0; i < Global_113648.f_20412.f_145; i = i + 1)
	{
		if (unk_0x4310A0DB886F9FED(sParam0, &Global_113648.f_20412[i /*16*/]))
			return true;
	}

	return false;
}

BOOL func_18(int iParam0) // Position - 0x8D3
{
	int num;
	int i;

	num = iParam0;

	for (i = 0; num > 31; i = i + 1)
	{
		num = num - 32;
	}

	if (i < 3)
		return IS_BIT_SET(Global_113648.f_20412.f_150[i], num);

	return false;
}

void func_19(int iParam0) // Position - 0x913
{
	int i;
	int num;

	for (i = 0; i < 5; i = i + 1)
	{
		num = iLocal_28 + i;
		func_26(num, iParam0, false);
		func_24(num, true, 2, false);
		func_23(num, true);
		func_22(num, 44);
	
		if (Global_113648.f_2354[i /*2*/] >= 1 || func_36(108) == true || func_21(iLocal_29 + i, 0) || IS_BIT_SET(Global_113648.f_18576[iLocal_30 + i /*6*/], 3))
			func_20(num, true);
	}

	return;
}

void func_20(int iParam0, BOOL bParam1) // Position - 0x9A0
{
	int num;

	num = iParam0;

	if (num < 0 || num >= 263 || iParam0 == 263)
		return;

	if (bParam1 == IS_BIT_SET(Global_32543[num /*23*/].f_11, 20))
		return;

	if (bParam1)
		unk_0xECDAB41968FF21A8(&(Global_32543[num /*23*/].f_11), 20);
	else
		unk_0x061B1200C95204CB(&(Global_32543[num /*23*/].f_11), 20);

	if (Global_32540 == true)
		Global_32541 = true;

	Global_32540 = true;
	unk_0xECDAB41968FF21A8(&(Global_32543[num /*23*/].f_11), 20);
	return;
}

BOOL func_21(int iParam0, int iParam1) // Position - 0xA26
{
	if (Global_113648.f_10196[iParam0 /*12*/].f_5 == true)
	{
		iParam1 == 1;
		return true;
	}

	return false;
}

void func_22(int iParam0, int iParam1) // Position - 0xA4D
{
	int num;

	num = iParam0;

	if (num < 0 || num >= 263 || iParam0 == 263)
		return;

	unk_0x48EA972265B5F6B3(&(Global_32543[num /*23*/].f_11), 21, 26, iParam1);

	if (Global_32540 == true)
		Global_32541 = true;

	Global_32540 = true;
	unk_0xECDAB41968FF21A8(&(Global_32543[num /*23*/].f_11), 18);
	return;
}

void func_23(int iParam0, BOOL bParam1) // Position - 0xAAB
{
	int num;

	num = iParam0;

	if (num < 0 || num >= 263 || iParam0 == 263)
		return;

	if (bParam1 == IS_BIT_SET(Global_32543[num /*23*/].f_11, 7))
		return;

	if (bParam1)
		unk_0xECDAB41968FF21A8(&(Global_32543[num /*23*/].f_11), 7);
	else
		unk_0x061B1200C95204CB(&(Global_32543[num /*23*/].f_11), 7);

	if (Global_32540 == true)
		Global_32541 = true;

	Global_32540 = true;
	unk_0xECDAB41968FF21A8(&(Global_32543[num /*23*/].f_11), 18);
	return;
}

void func_24(int iParam0, BOOL bParam1, int iParam2, BOOL bParam3) // Position - 0xB2E
{
	int num;

	num = iParam0;

	if (num < 0 || num >= 263 || iParam0 == 263)
		return;

	if (bParam1)
	{
		if (!bParam3)
		{
			Global_32543[num /*23*/].f_17 = iParam2;
		
			if (bParam1 != IS_BIT_SET(Global_32543[num /*23*/].f_11, 8))
				unk_0xECDAB41968FF21A8(&(Global_32543[num /*23*/].f_11), 18);
		
			unk_0xECDAB41968FF21A8(&(Global_32543[num /*23*/].f_11), 8);
		}
		else
		{
			Global_32543[num /*23*/].f_18 = iParam2;
		
			if (bParam1 != IS_BIT_SET(Global_32543[num /*23*/].f_11, 10))
				unk_0xECDAB41968FF21A8(&(Global_32543[num /*23*/].f_11), 18);
		
			unk_0xECDAB41968FF21A8(&(Global_32543[num /*23*/].f_11), 10);
		}
	
		unk_0xECDAB41968FF21A8(&(Global_32543[num /*23*/].f_11), 18);
	}
	else
	{
		func_25(iParam0);
	}

	return;
}

void func_25(int iParam0) // Position - 0xBF6
{
	int num;

	num = iParam0;

	if (num < 0 || num >= 263 || iParam0 == 263)
		return;

	if (IS_BIT_SET(Global_32543[num /*23*/].f_11, 8) || IS_BIT_SET(Global_32543[num /*23*/].f_11, 10))
		unk_0xECDAB41968FF21A8(&(Global_32543[num /*23*/].f_11), 18);

	unk_0x061B1200C95204CB(&(Global_32543[num /*23*/].f_11), 8);
	unk_0x061B1200C95204CB(&(Global_32543[num /*23*/].f_11), 10);
	unk_0xECDAB41968FF21A8(&(Global_32543[num /*23*/].f_11), 18);
	return;
}

void func_26(int iParam0, BOOL bParam1, BOOL bParam2) // Position - 0xC81
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

void func_27(int iParam0, int iParam1, int iParam2) // Position - 0xD81
{
	BOOL flag;

	iParam0 < 0;

	if (iParam0 == 321 || iParam0 > 321)
	{
	}
	else
	{
		_STAT_SET_PACKED_BOOL(891 + iParam0, 1, -1);
	}

	flag = true;

	if (Global_113648.f_10196[iParam0 /*12*/].f_5 == true)
	{
		if (Global_113648.f_10196[iParam0 /*12*/].f_6 == 11 || Global_113648.f_10196[iParam0 /*12*/].f_6 == 12)
			flag = false;
	}
	else
	{
		Global_113648.f_10196[iParam0 /*12*/].f_5 = 1;
		Global_113648.f_10196[iParam0 /*12*/].f_10 = iParam1;
		Global_113648.f_10196[iParam0 /*12*/].f_11 = iParam2;
	
		if (iParam0 == 287)
			unk_0xE571C8D0AF67E3B4(joaat("NUM_HIDDEN_PACKAGES_0"), 50, 0);
	
		if (iParam0 == 286)
			unk_0xE571C8D0AF67E3B4(joaat("NUM_HIDDEN_PACKAGES_1"), 50, 0);
	
		if (iParam0 == 299)
			unk_0xE571C8D0AF67E3B4(joaat("NUM_HIDDEN_PACKAGES_3"), 50, 0);
	}

	if (flag)
		func_28();

	return;
}

void func_28() // Position - 0xE67
{
	int num;
	float num2;
	float num3;
	float num4;
	float num5;
	float num6;
	float num7;
	float num8;
	float value;
	int num9;

	num = 0;
	Global_113384 = 0;
	Global_113385 = 0;
	Global_113386 = 0;
	Global_113387 = 0;
	Global_113388 = 0;
	Global_113389 = 0;
	Global_113390 = 0;
	num2 = 0f;
	num3 = 0f;
	num4 = 0f;
	num5 = 0f;
	num6 = 0f;
	num7 = 0f;
	num8 = 0f;
	value = Global_113648.f_10196.f_3853;
	Global_113648.f_10196.f_3853 = 0f;

	while (num < 321)
	{
		if (Global_113648.f_10196[num /*12*/].f_5 == true)
		{
			switch (Global_113648.f_10196[num /*12*/].f_6)
			{
				case 1:
					Global_113384 = Global_113384 + 1;
					num2 = num2 + Global_113648.f_10196[num /*12*/].f_4;
					break;
			
				case 3:
					Global_113385 = Global_113385 + 1;
					num3 = num3 + Global_113648.f_10196[num /*12*/].f_4;
					break;
			
				case 5:
					Global_113386 = Global_113386 + 1;
					num4 = num4 + Global_113648.f_10196[num /*12*/].f_4;
					break;
			
				case 7:
					Global_113387 = Global_113387 + 1;
					num5 = num5 + Global_113648.f_10196[num /*12*/].f_4;
					break;
			
				case 9:
					Global_113388 = Global_113388 + 1;
					num6 = num6 + (Global_113648.f_10196[num /*12*/].f_4 * 4f);
					break;
			
				case 11:
					Global_113389 = Global_113389 + 1;
					num7 = num7 + Global_113648.f_10196[num /*12*/].f_4;
					break;
			
				case 13:
					Global_113390 = Global_113390 + 1;
					num8 = num8 + Global_113648.f_10196[num /*12*/].f_4;
					break;
			
				default:
					break;
			}
		}
	
		num = num + 1;
	}

	if (Global_113367 > 0)
		if (Global_113384 == Global_113367)
			num2 = 55f;

	if (Global_113368 > 0)
		if (Global_113385 == Global_113368)
			num3 = 10f;

	if (Global_113369 > 0)
		if (Global_113386 == Global_113369)
			num4 = 0f;

	if (Global_113370 > 0)
		if (Global_113387 == Global_113370)
			num5 = 10f;

	if (Global_113371 > 0)
	{
		if (Global_113388 == Global_113371 || (Global_113371 * 10) / Global_113388 < 41 || Global_113388 > Global_113374 || Global_113388 == Global_113374)
		{
			if (!IS_BIT_SET(Global_113648.f_10196.f_3856, 14))
			{
				if (Global_113388 == Global_113371)
				{
					unk_0xE571C8D0AF67E3B4(joaat("NUM_RNDEVENTS_COMPLETED"), Global_113371, 0);
					unk_0xECDAB41968FF21A8(&(Global_113648.f_10196.f_3856), 14);
				}
			}
		
			num6 = 5f;
		}
	}

	if (Global_113372 > 0)
		if (Global_113389 == Global_113372)
			num7 = 15f;

	if (Global_113373 > 0)
		if (Global_113390 == Global_113373)
			num8 = 5f;

	Global_113648.f_10196.f_3853 = num2 + num3 + num4 + num5 + num6 + num7 + num8;

	if (Global_113388 > Global_113374 || Global_113388 == Global_113374)
		num9 = Global_113374;
	else
		num9 = Global_113388;

	unk_0x3CC35ACFFC9C730E(joaat("NUM_MISSIONS_COMPLETED"), Global_113384, 1);
	unk_0x3CC35ACFFC9C730E(joaat("NUM_MISSIONS_AVAILABLE"), Global_113367, 1);
	unk_0x3CC35ACFFC9C730E(joaat("NUM_MINIGAMES_COMPLETED"), Global_113385, 1);
	unk_0x3CC35ACFFC9C730E(joaat("NUM_MINIGAMES_AVAILABLE"), Global_113368, 1);
	unk_0x3CC35ACFFC9C730E(joaat("NUM_ODDJOBS_COMPLETED"), Global_113386, 1);
	unk_0x3CC35ACFFC9C730E(joaat("NUM_ODDJOBS_AVAILABLE"), Global_113369, 1);
	unk_0x3CC35ACFFC9C730E(joaat("NUM_RNDPEOPLE_COMPLETED"), Global_113387, 1);
	unk_0x3CC35ACFFC9C730E(joaat("NUM_RNDPEOPLE_AVAILABLE"), Global_113370, 1);
	unk_0x3CC35ACFFC9C730E(joaat("NUM_RNDEVENTS_COMPLETED"), num9, 1);
	unk_0x3CC35ACFFC9C730E(joaat("NUM_RNDEVENTS_AVAILABLE"), Global_113374, 1);
	unk_0x3CC35ACFFC9C730E(joaat("NUM_MISC_COMPLETED"), Global_113390 + Global_113389, 1);
	unk_0x3CC35ACFFC9C730E(joaat("NUM_MISC_AVAILABLE"), Global_113373 + Global_113372, 1);
	Global_113391 = (Global_113384 * 100) / Global_113367;
	Global_113393 = ((Global_113386 + Global_113385) * 100) / (Global_113369 + Global_113368);
	Global_113392 = ((Global_113387 + num9) * 100) / (Global_113370 + Global_113374);
	Global_113394 = ((Global_113389 + Global_113390) * 100) / (Global_113372 + Global_113373);
	unk_0x683F4BAF21D6EE25(joaat("TOTAL_PROGRESS_MADE"), Global_113648.f_10196.f_3853, 1);
	unk_0x3CC35ACFFC9C730E(joaat("PERCENT_STORY_MISSIONS"), Global_113391, 1);
	unk_0x3CC35ACFFC9C730E(joaat("PERCENT_AMBIENT_MISSIONS"), Global_113392, 1);
	unk_0x3CC35ACFFC9C730E(joaat("PERCENT_ODDJOBS"), Global_113393, 1);

	if (value > 0f && SYSTEM::FLOOR(value) < SYSTEM::FLOOR(Global_113648.f_10196.f_3853))
		func_32(13, SYSTEM::FLOOR(Global_113648.f_10196.f_3853));

	if (!unk_0xBAB6476CDD8C4AA6())
	{
		if (!Global_78558)
		{
			if (func_31() == 2 == false && !unk_0xA26A9A07F761D8F8())
			{
				if (unk_0x3FFDF8D1413D95DE())
					Global_113382 = false;
			
				if (!Global_63362)
					func_29();
			}
		}
	}

	return;
}

int func_29() // Position - 0x1325
{
	if (_IS_MISSION_REPEAT_ACTIVE(false))
		return 0;

	if (Global_100720.f_8)
		if (Global_100720.f_10 > 0)
			return 0;
	else if (Global_100720.f_10 > 1)
		return 0;

	Global_100720.f_10 = Global_100720.f_10 + 1;
	return 1;
}

BOOL _IS_MISSION_REPEAT_ACTIVE(BOOL bExcludeBenchmark) // Position - 0x1370
{
	if (!bExcludeBenchmark && unk_0x24B651D85CCE5EB4(joaat("benchmark")) > 0)
		return true;

	return IS_BIT_SET(Global_78807, 0);
}

int func_31() // Position - 0x1398
{
	return Global_32163;
}

int func_32(int iParam0, int iParam1) // Position - 0x13A3
{
	int num;

	if (iParam0 < 0)
		return 0;

	if (iParam0 > 78)
		return 0;

	if (iParam1 <= 0 || iParam1 > 100)
		return 0;

	num = unk_0xED220A261CE0D89C(iParam0);

	if (iParam1 > num)
		return unk_0x0B3E167D2C1443C7(iParam0, iParam1);

	return 0;
}

void _STAT_SET_PACKED_BOOL(int iParam0, int iParam1, Hash hParam2) // Position - 0x13F4
{
	if (hParam2 == -1)
		hParam2 = func_34();

	unk_0x0111091C0EE35B9C(iParam0, iParam1, hParam2);
	return;
}

Hash func_34() // Position - 0x1412
{
	return Global_1574918;
}

int func_35(int iParam0) // Position - 0x141E
{
	int num;
	int num2;

	if (iParam0 <= 31)
	{
		num = 9;
		num2 = iParam0;
	}
	else
	{
		num = 10;
		num2 = iParam0 - 32;
	}

	if (IS_BIT_SET(Global_113648.f_9087.f_99.f_219[num], num2))
		return 0;

	unk_0xECDAB41968FF21A8(&Global_113648.f_9087.f_99.f_219[num], num2);
	return 1;
}

BOOL func_36(int iParam0) // Position - 0x1475
{
	if (iParam0 == 146 || iParam0 == -1)
		return false;

	return Global_113648.f_9087.f_99.f_58[iParam0];
}

void func_37() // Position - 0x14A2
{
	func_19(0);
	unk_0x675D9C12C73D3DE7();
	return;
}

