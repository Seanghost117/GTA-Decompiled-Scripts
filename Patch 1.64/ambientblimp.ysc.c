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
		func_33();

	if (func_32())
		iLocal_28 = 1;

	while (true)
	{
		switch (iLocal_28)
		{
			case 0:
				if (func_10())
					iLocal_28 = 1;
				break;
		
			case 1:
				if (func_1())
					func_33();
				break;
		}
	
		SYSTEM::WAIT(1000);
	}

	return;
}

BOOL func_1() // Position - 0x9D
{
	switch (func_8("BLIMP_UNLOCK" /*The Blimp has now been unlocked. Call the Blimp contact on your cellphone to arrange for a Blimp to be delivered to the nearest available drop-off location.*/))
	{
		case 2:
			func_5("BLIMP_UNLOCK" /*The Blimp has now been unlocked. Call the Blimp contact on your cellphone to arrange for a Blimp to be delivered to the nearest available drop-off location.*/, 1, 0, 1000, 10000, 7, 0, 0, 0);
			break;
	
		case 1:
			func_4(57);
			func_2();
			return true;
	
		case 0:
			break;
	}

	return false;
}

int func_2() // Position - 0xED
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

BOOL _IS_MISSION_REPEAT_ACTIVE(BOOL bExcludeBenchmark) // Position - 0x138
{
	if (!bExcludeBenchmark && unk_0x24B651D85CCE5EB4(joaat("benchmark")) > 0)
		return true;

	return IS_BIT_SET(Global_78807, 0);
}

void func_4(int iParam0) // Position - 0x160
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

void func_5(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8) // Position - 0x1A2
{
	func_6(sParam0, "", iParam1, iParam2, iParam3, iParam4, iParam5, iParam6, iParam7, iParam8);
	return;
}

void func_6(char* sParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9) // Position - 0x1C3
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
		func_7();
	}

	return;
}

void func_7() // Position - 0x396
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

int func_8(char* sParam0) // Position - 0x4AD
{
	if (unk_0x4310A0DB886F9FED(sParam0, &Global_112291))
		return 1;

	if (func_9(sParam0))
		return 0;

	return 2;
}

BOOL func_9(char* sParam0) // Position - 0x4D4
{
	int i;

	for (i = 0; i < Global_113648.f_20412.f_145; i = i + 1)
	{
		if (unk_0x4310A0DB886F9FED(sParam0, &Global_113648.f_20412[i /*16*/]))
			return true;
	}

	return false;
}

BOOL func_10() // Position - 0x50F
{
	if (func_31() || func_30() || func_29() || func_28() || _IS_EXCLUSIVE_CONTENT_UNLOCKED())
	{
		if (unk_0x48DC6A21D1CAD89C(unk_0x93E99A2DBCBA9CFA()) && unk_0x1B82EF141CC65934(unk_0x93E99A2DBCBA9CFA()) && !unk_0xB53553DC4AAC7D8A())
		{
			if (func_26(0))
			{
				func_11(48, 4, false);
				func_2();
				return true;
			}
		}
	}

	return false;
}

void func_11(eCharacter echParam0, eCharacter echParam1, BOOL bParam2) // Position - 0x582
{
	int num;

	Global_8939 = echParam0;

	if (Global_117[echParam0 /*10*/].f_8 != 169)
	{
		_UPDATE_CURRENT_PLAYER_CHARACTER();
	
		if (echParam1 == 4)
		{
			func_17(echParam0, 0, 1);
			func_17(echParam0, 1, 1);
			func_17(echParam0, 2, 1);
			func_16(echParam0, 0, 1);
			func_16(echParam0, 1, 1);
			func_16(echParam0, 2, 1);
		}
		else
		{
			if (func_15(echParam0, echParam1) == 1 && func_14(echParam0, echParam1) == 1)
				bParam2 = false;
		
			num = echParam1;
			func_17(echParam0, num, 1);
			func_16(echParam0, num, 1);
		
			if (echParam0 == CHAR_SESSANTA && !Global_2793044.f_6891)
				bParam2 = false;
		
			if (echParam0 == CHAR_ISLDJ4 && !Global_2793044.f_6890)
				bParam2 = false;
		
			if (echParam0 == CHAR_KDJ && !Global_2793044.f_6890)
				bParam2 = false;
		}
	
		if (bParam2)
		{
			if (!Global_78558)
			{
				if (echParam1 != 4)
				{
					if (Global_20383 != echParam1)
					{
						Global_8912[echParam1 /*4*/] = { _GET_CHARACTER_NAME(echParam0) };
						Global_8929[echParam1] = 1;
						Global_8934[echParam1] = echParam0;
					}
					else if (echParam0 == Global_20383)
					{
					}
					else
					{
						Global_8863[1 /*6*/] = { _GET_CHARACTER_NAME(echParam0) };
						Global_8863[1 /*6*/].f_5 = echParam1;
						func_12();
					}
				}
				else
				{
					Global_8863[1 /*6*/] = { _GET_CHARACTER_NAME(echParam0) };
					Global_8863[1 /*6*/].f_5 = echParam1;
					func_12();
				}
			}
			else
			{
				Global_8863[1 /*6*/] = { _GET_CHARACTER_NAME(echParam0) };
				Global_8863[1 /*6*/].f_5 = echParam1;
				func_12();
			}
		}
	}

	return;
}

void func_12() // Position - 0x6FA
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

struct<4> _GET_CHARACTER_NAME(eCharacter character) // Position - 0x773
{
	return Global_2028[character /*29*/].f_3;
}

int func_14(eCharacter echParam0, int iParam1) // Position - 0x786
{
	if (iParam1 < 0 || iParam1 > 4)
		return 0;

	return Global_2028[echParam0 /*29*/].f_24[iParam1];
}

int func_15(eCharacter echParam0, int iParam1) // Position - 0x7B0
{
	if (iParam1 < 0 || iParam1 > 4)
		return 0;

	return Global_2028[echParam0 /*29*/].f_12[iParam1];
}

void func_16(eCharacter echParam0, int iParam1, int iParam2) // Position - 0x7DA
{
	if (iParam1 < 0 || iParam1 > 4)
		return;

	Global_2028[echParam0 /*29*/].f_24[iParam1] = iParam2;

	if (echParam0 < _CHAR_UNUSED)
		Global_113648.f_28052[echParam0 /*29*/].f_24[iParam1] = iParam2;

	return;
}

void func_17(eCharacter echParam0, int iParam1, int iParam2) // Position - 0x81F
{
	if (iParam1 < 0 || iParam1 > 4)
		return;

	Global_2028[echParam0 /*29*/].f_12[iParam1] = iParam2;

	if (echParam0 < _CHAR_UNUSED)
		Global_113648.f_28052[echParam0 /*29*/].f_12[iParam1] = iParam2;

	return;
}

void _UPDATE_CURRENT_PLAYER_CHARACTER() // Position - 0x864
{
	if (func_25(14))
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

eCharacter _GET_CURRENT_PLAYER_CHARACTER() // Position - 0x906
{
	func_20();
	return Global_113648.f_2365.f_539.f_4321;
}

void func_20() // Position - 0x91F
{
	eCharacter character;

	if (unk_0x7DE17ACDD8BA2642(unk_0xC1A5EC5C986B98AD()))
	{
		if (_GET_CHARACTER_MODEL(Global_113648.f_2365.f_539.f_4321) != unk_0x504B9BB48D41C264(unk_0xC1A5EC5C986B98AD()))
		{
			character = _GET_PLAYER_CHARACTER_FROM_PED(unk_0xC1A5EC5C986B98AD());
		
			if (func_21(character) && !func_25(14) || Global_112599)
			{
				if (Global_113648.f_2365.f_539.f_4321 != character && func_21(Global_113648.f_2365.f_539.f_4321))
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

BOOL func_21(eCharacter echParam0) // Position - 0xA1C
{
	return echParam0 < CHAR_MULTIPLAYER;
}

eCharacter _GET_PLAYER_CHARACTER_FROM_PED(var uParam0) // Position - 0xA28
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

int _GET_CHARACTER_MODEL(eCharacter character) // Position - 0xA65
{
	if (func_21(character))
		return func_24(character);
	else
		character != _CHAR_NULL;

	return 0;
}

int func_24(eCharacter echParam0) // Position - 0xA8A
{
	return Global_2028[echParam0 /*29*/];
}

BOOL func_25(int iParam0) // Position - 0xA99
{
	return Global_43257 == iParam0;
}

BOOL func_26(int iParam0) // Position - 0xAA7
{
	if (iParam0 == 94 || iParam0 == -1)
		return false;

	return Global_113648.f_9087.f_330[iParam0 /*6*/];
}

BOOL _IS_EXCLUSIVE_CONTENT_UNLOCKED() // Position - 0xAD3
{
	var unk;

	if (Global_152523 == 2)
		return true;
	else if (Global_152523 == 3)
		return false;

	if (unk_0x7FFBE14C34D75E19())
	{
		if (unk_0x8BD41D5945F5762B())
		{
			if (unk_0x001B3EAD68D731CE())
			{
				unk_0xDD7756E2742E0F6D(joaat("SP_UNLOCK_EXCLUS_CONTENT"), &unk, -1);
				unk_0xECDAB41968FF21A8(&unk, 2);
				unk_0xECDAB41968FF21A8(&unk, 4);
				unk_0xECDAB41968FF21A8(&unk, 6);
				unk_0xECDAB41968FF21A8(&Global_25, 2);
				unk_0xECDAB41968FF21A8(&Global_25, 4);
				unk_0xECDAB41968FF21A8(&Global_25, 6);
				unk_0x3CC35ACFFC9C730E(joaat("SP_UNLOCK_EXCLUS_CONTENT"), unk, 1);
			
				if (unk_0x7D33DF1E1089E1D1())
				{
					unk = unk_0x516080EA609481E1(866);
					unk_0xECDAB41968FF21A8(&unk, 0);
					unk_0x705949B096008718(unk);
				}
			
				return true;
			}
		}
	}

	if (unk_0x7D33DF1E1089E1D1())
		if (IS_BIT_SET(unk_0x516080EA609481E1(866), 0))
			return true;

	return false;
}

BOOL func_28() // Position - 0xB8B
{
	return false;
}

BOOL func_29() // Position - 0xB94
{
	return true;
}

int func_30() // Position - 0xB9D
{
	return 1;
}

int func_31() // Position - 0xBA6
{
	if (unk_0x7681F180D7938DA8(-1226939934))
		return 1;

	return 0;
}

BOOL func_32() // Position - 0xBBF
{
	if (func_15(48, 0) == 1 && func_15(48, 1) == 1 && func_15(48, 2) == 1)
		if (func_31() || func_30() || func_29() || func_28() || _IS_EXCLUSIVE_CONTENT_UNLOCKED())
			return true;

	return false;
}

void func_33() // Position - 0xC23
{
	unk_0x675D9C12C73D3DE7();
	return;
}

