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
	var uLocal_18 = 15;
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
	int iLocal_34 = 0;
	int iLocal_35 = 0;
	var uLocal_36 = 0;
	var uLocal_37 = 0;
	int iLocal_38 = 0;
	BOOL bLocal_39 = 0;
	float fLocal_40 = 0f;
	float fLocal_41 = 0f;
	float fLocal_42 = 0f;
	float fLocal_43 = 0f;
	BOOL bLocal_44 = 0;
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
	fLocal_40 = 0.82f;
	fLocal_41 = 0.42f;
	fLocal_42 = 0f;
	fLocal_43 = 0f;
	unk_0x389D5B1C24A046B5();
	_UPDATE_CURRENT_PLAYER_CHARACTER();
	bLocal_39 = true;
	func_27();
	func_26();

	while (true)
	{
		SYSTEM::WAIT(0);
	
		if (Global_20383.f_1 != 9)
		{
			switch (Global_20383.f_1)
			{
				case 7:
					func_21();
				
					if (bLocal_39)
						func_18();
					else
						func_12();
					break;
			
				case 8:
					func_21();
					func_12();
				
					if (func_11(2, Global_20351, 0))
					{
						func_10();
						Global_20361 = true;
						func_9(Global_20364, "DISPLAY_VIEW", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
						func_26();
					
						if (Global_20383.f_1 > 3)
							Global_20383.f_1 = 7;
					}
					break;
			
				default:
					break;
			}
		
			if (func_8())
				func_2();
		}
		else
		{
			Global_20385 = 6;
			func_2();
		}
	
		if (func_1())
			func_2();
	}

	return;
}

BOOL func_1() // Position - 0x113
{
	if (Global_20383.f_1 == 1 || Global_20383.f_1 == 3 || Global_20383.f_1 == 0 || Global_20327 == 1)
	{
		Global_20370 = 1;
		return true;
	}

	return false;
}

void func_2() // Position - 0x156
{
	func_7();

	if (func_4(0))
		func_3();

	unk_0x675D9C12C73D3DE7();
	return;
}

void func_3() // Position - 0x172
{
	if (Global_9058[0 /*2811*/][0 /*281*/].f_259 == 2)
		Global_9058[0 /*2811*/][0 /*281*/].f_259 = 0;

	if (Global_9058[1 /*2811*/][0 /*281*/].f_259 == 2)
		Global_9058[1 /*2811*/][0 /*281*/].f_259 = 0;

	if (Global_9058[2 /*2811*/][0 /*281*/].f_259 == 2)
		Global_9058[2 /*2811*/][0 /*281*/].f_259 = 0;

	unk_0x061B1200C95204CB(&Global_8253, 25);
	unk_0xECDAB41968FF21A8(&Global_8254, 11);
	return;
}

BOOL func_4(int iParam0) // Position - 0x1EF
{
	if (Global_43257 == 15)
		return false;

	if (_CAN_ENTER_FREEROAM_STATE(iParam0))
		return false;

	return true;
}

BOOL _CAN_ENTER_FREEROAM_STATE(int iParam0) // Position - 0x211
{
	return func_6(iParam0, Global_43257);
}

BOOL func_6(int iParam0, int iParam1) // Position - 0x222
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

void func_7() // Position - 0x403
{
	_UPDATE_CURRENT_PLAYER_CHARACTER();
	Global_9058[Global_20383 /*2811*/][0 /*281*/].f_124[2] = 1;
	return;
}

BOOL func_8() // Position - 0x422
{
	if (Global_8859 == 1 || Global_20383.f_1 < 7)
	{
		Global_20370 = 1;
		return true;
	}

	return false;
}

void func_9(var uParam0, char* sParam1, float fParam2, int iParam3, int iParam4, int iParam5, int iParam6) // Position - 0x44B
{
	unk_0x9FD96C5DE6EDFC15(uParam0, sParam1);
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

void func_10() // Position - 0x4AE
{
	if (!unk_0x055111B11E6624FD(unk_0xC1A5EC5C986B98AD(), 0))
		unk_0x531D638530A8DB97(-1, "Menu_Back", &Global_20372, 1);

	return;
}

BOOL func_11(int iParam0, int iParam1, int iParam2) // Position - 0x4CF
{
	if (unk_0x87644B1F984197FE(iParam0, iParam1) || iParam2 == 1 && unk_0xE665ABCFC5784C35(iParam0, iParam1))
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

void func_12() // Position - 0x541
{
	if (Global_20361 == false)
	{
		if (func_11(2, Global_20352, 0))
		{
			func_15();
			Global_20361 = true;
			_UPDATE_CURRENT_PLAYER_CHARACTER();
			unk_0x9FD96C5DE6EDFC15(Global_20364, "GET_CURRENT_SELECTION");
			uLocal_36 = unk_0x08320883763BEFA3();
		
			while (!unk_0x4F815B9C87A967FD(uLocal_36))
			{
				SYSTEM::WAIT(0);
			}
		
			Global_9058[Global_20383 /*2811*/][iLocal_38 /*281*/].f_259 = uLocal_18[unk_0x67FFE44BB8589F1E(uLocal_36)];
			func_13(Global_20364, "SET_HEADER", &Global_9058[Global_20383 /*2811*/][iLocal_38 /*281*/].f_7[Global_9058[Global_20383 /*2811*/][iLocal_38 /*281*/].f_259 /*4*/], 0, 0, 0, 0);
		
			if (Global_9058[Global_20383 /*2811*/][0 /*281*/].f_259 == 2)
				func_9(Global_20364, "SET_SLEEP_MODE", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
			else
				func_9(Global_20364, "SET_SLEEP_MODE", 0f, -1082130432, -1082130432, -1082130432, -1082130432);
		
			if (func_4(0))
				func_3();
		}
	}

	return;
}

void func_13(var uParam0, char* sParam1, char* sParam2, char* sParam3, char* sParam4, char* sParam5, char* sParam6) // Position - 0x638
{
	unk_0x9FD96C5DE6EDFC15(uParam0, sParam1);
	func_14(sParam2);

	if (!unk_0x2AC37494BBF1DB16(sParam3))
		func_14(sParam3);

	if (!unk_0x2AC37494BBF1DB16(sParam4))
		func_14(sParam4);

	if (!unk_0x2AC37494BBF1DB16(sParam5))
		func_14(sParam5);

	if (!unk_0x2AC37494BBF1DB16(sParam6))
		func_14(sParam6);

	unk_0xAE3413B0654A0035();
	return;
}

void func_14(char* sParam0) // Position - 0x693
{
	unk_0x2AF11E92DE43CDE3(sParam0);
	unk_0xF8FCA9E7130CE1C8();
	return;
}

void func_15() // Position - 0x6A5
{
	if (!unk_0x055111B11E6624FD(unk_0xC1A5EC5C986B98AD(), 0))
	{
		unk_0x531D638530A8DB97(-1, "Menu_Accept", &Global_20372, 1);
		func_16();
	}

	return;
}

void func_16() // Position - 0x6CA
{
	if (func_17())
		unk_0x8C27BB4299B24A0D(5);

	return;
}

BOOL func_17() // Position - 0x6DE
{
	var unk;
	int num;
	BOOL flag;

	if (Global_78558)
		return false;

	flag = 0;
	unk = unk_0x990C52ABB0EFEBA9();
	num = unk_0x80A3F4E694565F6A(unk);

	if (num == 4)
		flag = 1;

	if (Global_4542575 || flag)
		return true;

	return true;
}

void func_18() // Position - 0x725
{
	Global_20361 = true;
	iLocal_38 = 0;
	bLocal_39 = false;
	func_19();
	return;
}

void func_19() // Position - 0x73B
{
	var unk;
	int i;
	int num;
	int num2;

	func_9(Global_20364, "DISPLAY_VIEW", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
	_UPDATE_CURRENT_PLAYER_CHARACTER();
	iLocal_34 = 0;
	unk = 15;

	for (i = 0; i < 9; i = i + 1)
	{
		num = 0;
		num2 = 9;
		Global_9058[Global_20383 /*2811*/][iLocal_38 /*281*/].f_84[num2] = 5000;
	
		while (num < 9)
		{
			if (Global_9058[Global_20383 /*2811*/][iLocal_38 /*281*/].f_124[num] == 1)
			{
				if (unk[num] == 0)
				{
					if (Global_9058[Global_20383 /*2811*/][iLocal_38 /*281*/].f_84[num] < Global_9058[Global_20383 /*2811*/][iLocal_38 /*281*/].f_84[num2])
					{
						num2 = num;
						func_20(Global_20364, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(13), SYSTEM::TO_FLOAT(i), SYSTEM::TO_FLOAT(Global_9058[Global_20383 /*2811*/][iLocal_38 /*281*/].f_104[num2]), -1f, -1f, &Global_9058[Global_20383 /*2811*/][iLocal_38 /*281*/].f_7[num2 /*4*/], 0, 0, 0, 0);
					}
				}
			}
		
			num = num + 1;
		}
	
		uLocal_18[i] = num2;
		unk[num2] = 1;
	
		if (Global_9058[Global_20383 /*2811*/][iLocal_38 /*281*/].f_124[i] == 1)
			iLocal_34 = iLocal_34 + 1;
	}

	func_9(Global_20364, "DISPLAY_VIEW", 13f, -1082130432, -1082130432, -1082130432, -1082130432);
	func_13(Global_20364, "SET_HEADER", &Global_9058[Global_20383 /*2811*/][iLocal_38 /*281*/].f_7[Global_9058[Global_20383 /*2811*/][iLocal_38 /*281*/].f_259 /*4*/], 0, 0, 0, 0);

	if (Global_20371)
	{
		func_20(Global_20364, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, "CELL_205" /*SELECT*/, 0, 0, 0, 0);
		func_20(Global_20364, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, "CELL_206" /*BACK*/, 0, 0, 0, 0);
	}
	else
	{
		func_20(Global_20364, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, 0, 0, 0, 0, 0);
		func_20(Global_20364, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, 0, 0, 0, 0, 0);
	}

	func_20(Global_20364, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
	unk_0x061B1200C95204CB(&Global_8253, 17);
	return;
}

void func_20(var uParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6, char* sParam7, int iParam8, int iParam9, int iParam10, int iParam11) // Position - 0x942
{
	unk_0x9FD96C5DE6EDFC15(uParam0, sParam1);
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
		func_14(sParam7);

	if (!unk_0x2AC37494BBF1DB16(iParam8))
		func_14(iParam8);

	if (!unk_0x2AC37494BBF1DB16(iParam9))
		func_14(iParam9);

	if (!unk_0x2AC37494BBF1DB16(iParam10))
		func_14(iParam10);

	if (!unk_0x2AC37494BBF1DB16(iParam11))
		func_14(iParam11);

	unk_0xAE3413B0654A0035();
	return;
}

void func_21() // Position - 0x9F5
{
	if (bLocal_44)
		if (SYSTEM::TIMERA() > 50)
			bLocal_44 = false;

	if (unk_0x42AAFCB5B7854AA9(2))
	{
		if (func_11(2, 181, 0))
		{
			if (iLocal_35 > 0)
				iLocal_35 = iLocal_35 - 1;
		
			func_24();
		}
	
		if (func_11(2, 180, 0))
		{
			iLocal_35 = iLocal_35 + 1;
		
			if (iLocal_35 == iLocal_34)
				iLocal_35 = 0;
		
			func_22();
		}
	}

	if (bLocal_44 == false)
	{
		if (func_11(2, Global_20359, 0))
		{
			if (iLocal_35 > 0)
				iLocal_35 = iLocal_35 - 1;
		
			func_24();
			bLocal_44 = true;
			SYSTEM::SETTIMERA(0);
		}
	
		if (func_11(2, Global_20360, 0))
		{
			iLocal_35 = iLocal_35 + 1;
		
			if (iLocal_35 == iLocal_34)
				iLocal_35 = 0;
		
			func_22();
			bLocal_44 = true;
			SYSTEM::SETTIMERA(0);
		}
	}

	return;
}

void func_22() // Position - 0xAA2
{
	func_9(Global_20364, "SET_INPUT_EVENT", SYSTEM::TO_FLOAT(3), -1082130432, -1082130432, -1082130432, -1082130432);
	unk_0x531D638530A8DB97(-1, "Menu_Navigate", &Global_20372, 1);
	func_23();
	return;
}

void func_23() // Position - 0xADD
{
	if (func_17())
		if (Global_20589 == 0)
			unk_0x8C27BB4299B24A0D(2);
		else
			unk_0x8C27BB4299B24A0D(1);

	return;
}

void func_24() // Position - 0xB00
{
	func_9(Global_20364, "SET_INPUT_EVENT", SYSTEM::TO_FLOAT(1), -1082130432, -1082130432, -1082130432, -1082130432);
	unk_0x531D638530A8DB97(-1, "Menu_Navigate", &Global_20372, 1);
	func_25();
	return;
}

void func_25() // Position - 0xB3B
{
	if (func_17())
		if (Global_20589 == 0)
			unk_0x8C27BB4299B24A0D(1);
		else
			unk_0x8C27BB4299B24A0D(2);

	return;
}

void func_26() // Position - 0xB5E
{
	var unk;
	int value;
	int num;
	int num2;

	iLocal_34 = 0;
	unk = 15;
	value = 0;
	_UPDATE_CURRENT_PLAYER_CHARACTER();

	while (value < 9)
	{
		num = 0;
		num2 = 9;
		Global_9058[Global_20383 /*2811*/][num2 /*281*/] = 5000;
	
		while (num < 9)
		{
			if (Global_9058[Global_20383 /*2811*/][num /*281*/].f_280 == 1)
			{
				if (unk[num] == 0)
				{
					if (num == 0)
					{
						if (Global_9058[Global_20383 /*2811*/][num /*281*/] < Global_9058[Global_20383 /*2811*/][num2 /*281*/])
						{
							num2 = num;
							func_20(Global_20364, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(2), SYSTEM::TO_FLOAT(value), -1f, -1f, -1f, &(Global_9058[Global_20383 /*2811*/][num2 /*281*/].f_2), 0, 0, 0, 0);
						}
					}
				}
			}
		
			num = num + 1;
		}
	
		uLocal_18[value] = num2;
		unk[num2] = 1;
	
		if (Global_9058[Global_20383 /*2811*/][value /*281*/].f_280 == 1)
			iLocal_34 = iLocal_34 + 1;
	
		value = value + 1;
	}

	func_9(Global_20364, "DISPLAY_VIEW", 13f, -1082130432, -1082130432, -1082130432, -1082130432);
	func_13(Global_20364, "SET_HEADER", "CELL_16" /*Settings*/, 0, 0, 0, 0);

	if (Global_20371)
	{
		func_20(Global_20364, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, "CELL_205" /*SELECT*/, 0, 0, 0, 0);
		func_20(Global_20364, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, "CELL_206" /*BACK*/, 0, 0, 0, 0);
	}
	else
	{
		func_20(Global_20364, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, 0, 0, 0, 0, 0);
		func_20(Global_20364, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, 0, 0, 0, 0, 0);
	}

	func_20(Global_20364, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
	unk_0x061B1200C95204CB(&Global_8253, 17);
	return;
}

void func_27() // Position - 0xCF9
{
	if (Global_43257 != 15)
	{
		_UPDATE_CURRENT_PLAYER_CHARACTER();
		Global_9058[Global_20383 /*2811*/][0 /*281*/].f_124[2] = 0;
	}

	return;
}

void _UPDATE_CURRENT_PLAYER_CHARACTER() // Position - 0xD20
{
	if (func_35(14))
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

eCharacter _GET_CURRENT_PLAYER_CHARACTER() // Position - 0xDC2
{
	func_30();
	return Global_113648.f_2365.f_539.f_4321;
}

void func_30() // Position - 0xDDB
{
	eCharacter character;

	if (unk_0x7DE17ACDD8BA2642(unk_0xC1A5EC5C986B98AD()))
	{
		if (_GET_CHARACTER_MODEL(Global_113648.f_2365.f_539.f_4321) != unk_0x504B9BB48D41C264(unk_0xC1A5EC5C986B98AD()))
		{
			character = _GET_PLAYER_CHARACTER_FROM_PED(unk_0xC1A5EC5C986B98AD());
		
			if (func_31(character) && !func_35(14) || Global_112599)
			{
				if (Global_113648.f_2365.f_539.f_4321 != character && func_31(Global_113648.f_2365.f_539.f_4321))
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

BOOL func_31(eCharacter echParam0) // Position - 0xED8
{
	return echParam0 < CHAR_MULTIPLAYER;
}

eCharacter _GET_PLAYER_CHARACTER_FROM_PED(var uParam0) // Position - 0xEE4
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

int _GET_CHARACTER_MODEL(eCharacter character) // Position - 0xF21
{
	if (func_31(character))
		return func_34(character);
	else
		character != _CHAR_NULL;

	return 0;
}

int func_34(eCharacter echParam0) // Position - 0xF46
{
	return Global_2028[echParam0 /*29*/];
}

BOOL func_35(int iParam0) // Position - 0xF55
{
	return Global_43257 == iParam0;
}

