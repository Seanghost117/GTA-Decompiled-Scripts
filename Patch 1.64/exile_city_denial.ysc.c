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
	BOOL bLocal_29 = 0;
	BOOL bLocal_30 = 0;
	BOOL bLocal_31 = 0;
	BOOL bLocal_32 = 0;
	var uLocal_33 = 0;
#endregion

void main() // Position - 0x0
{
	int num;
	int num2;
	var unk;
	BOOL flag;
	BOOL flag2;
	BOOL flag3;
	BOOL flag4;
	var unk4;

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
	iLocal_28 = -1;
	bLocal_32 = true;

	if (unk_0x24B651D85CCE5EB4(joaat("exile_city_denial")) > 1)
	{
		Global_43222 = 0;
		unk_0x675D9C12C73D3DE7();
	}

	func_42(18);
	func_41();
	SYSTEM::SETTIMERA(0);
	SYSTEM::SETTIMERB(0);
	num = 2;
	num2 = 0;

	while (!bLocal_31)
	{
		bLocal_31 = true;
	
		if (unk_0x55EEDBBFDC6E810F(83))
		{
			Global_43222 = 0;
		
			if (!func_40(130))
			{
				func_39(18);
				func_38();
			}
			else if (func_40(131))
			{
				func_39(18);
				func_38();
			}
		
			switch (unk_0xC62B624C267237C2())
			{
				case 16:
					func_39(18);
					func_38();
					break;
			
				case 2:
					func_38();
					break;
			
				case 1:
					func_25(1628462442);
					func_25(1791324372);
					func_25(-240877892);
					func_25(1806999335);
					func_25(2054503592);
					func_25(-2009081795);
					bLocal_29 = 0;
				
					while (!unk_0x48DC6A21D1CAD89C(unk_0x93E99A2DBCBA9CFA()))
					{
						SYSTEM::WAIT(1000);
					}
				
					bLocal_31 = false;
					break;
			}
		}
	}

	while (true)
	{
		if (num2 > 0)
		{
			num2 = num2 - SYSTEM::TIMERA();
			SYSTEM::SETTIMERA(0);
		
			if (num2 < 0)
				num2 = 0;
		}
	
		unk = { unk_0x30BE8A934C020461(unk_0xC1A5EC5C986B98AD(), 0) };
		bLocal_29 = func_24(unk, &bLocal_32);
	
		if (Global_78828 || Global_78828.f_1)
			bLocal_29 = 0;
	
		flag = false;
		flag2 = false;
	
		if (func_40(131))
			flag = true;
	
		if (!func_40(130))
			flag = true;
	
		if (flag)
		{
			Global_43222 = 0;
			func_39(18);
			func_38();
		}
	
		if (_GET_CURRENT_PLAYER_CHARACTER() == CHAR_FRANKLIN)
			flag2 = true;
	
		Global_43222 = bLocal_29;
	
		if (!unk_0x66599E73DBA5A850(unk_0xC1A5EC5C986B98AD()))
			if (unk_0x2AE2D64A5E125BF2(unk_0xC1A5EC5C986B98AD()) || unk_0x6DFDDBD2D0067A98(unk_0xC1A5EC5C986B98AD()))
				if (unk_0xDA70CA6A0D1738D3(unk_0x95DC39736F6748E3(unk_0xC1A5EC5C986B98AD(), 0)))
					bLocal_29 = 0;
	
		if (bLocal_30 != bLocal_29)
		{
			if (!bLocal_29)
				func_20();
		
			if (bLocal_29 && !flag2)
			{
				flag3 = false;
				flag4 = true;
			
				while (flag4)
				{
					switch (func_18(&iLocal_28, 6, 12, false, 0))
					{
						case 0:
							flag4 = false;
							flag3 = false;
							break;
					
						case 1:
							flag4 = false;
							flag3 = true;
							break;
					
						default:
							SYSTEM::WAIT(0);
							break;
					}
				
					if (Global_78558)
						unk_0x675D9C12C73D3DE7();
				}
			
				if (flag3)
				{
					unk_0x66599E73DBA5A850(unk_0xC1A5EC5C986B98AD());
				
					if (unk_0x7DE17ACDD8BA2642(unk_0xC1A5EC5C986B98AD()))
					{
						unk4 = unk_0x41AD4BF315E01D41(unk_0xC1A5EC5C986B98AD());
					
						while (unk_0x4D3D95146FD3490D(unk4))
						{
							SYSTEM::WAIT(5000);
							unk_0x66599E73DBA5A850(unk_0xC1A5EC5C986B98AD());
						
							if (unk_0x7DE17ACDD8BA2642(unk_0xC1A5EC5C986B98AD()))
								unk4 = unk_0x41AD4BF315E01D41(unk_0xC1A5EC5C986B98AD());
						}
					}
				
					if (_GET_PLAYER_CHARACTER_FROM_PED(unk_0xC1A5EC5C986B98AD()) == CHAR_MICHAEL)
						if (!IS_BIT_SET(Global_113648.f_7690.f_923, 0))
							func_10(1628462442, 7, 1, 31, 3, 10000, 20000, -1, -1, 150, -1, 1024);
						else if (!IS_BIT_SET(Global_113648.f_7690.f_923, 1))
							func_10(1791324372, 7, 1, 31, 3, 10000, 20000, -1, -1, 150, -1, 1024);
						else if (!IS_BIT_SET(Global_113648.f_7690.f_923, 2))
							func_10(-240877892, 7, 1, 31, 3, 10000, 20000, -1, -1, 150, -1, 1024);
					else if (_GET_PLAYER_CHARACTER_FROM_PED(unk_0xC1A5EC5C986B98AD()) == CHAR_TREVOR)
						if (!IS_BIT_SET(Global_113648.f_7690.f_923, 3))
							func_10(1806999335, 7, 4, 31, 3, 10000, 20000, -1, -1, 151, -1, 1024);
						else if (!IS_BIT_SET(Global_113648.f_7690.f_923, 4))
							func_10(2054503592, 7, 4, 31, 3, 10000, 20000, -1, -1, 151, -1, 1024);
						else if (!IS_BIT_SET(Global_113648.f_7690.f_923, 4))
							func_10(-2009081795, 7, 4, 31, 3, 10000, 20000, -1, -1, 151, -1, 1024);
				
					if (num2 == 0 && !flag2)
					{
						if (!func_9(0) && !func_9(4) && !func_9(3))
						{
							if (unk_0xE777A59AAA1C96A0(11) < 256)
								if (unk_0x7DE17ACDD8BA2642(unk_0xC1A5EC5C986B98AD()))
									if (!unk_0x66599E73DBA5A850(unk_0xC1A5EC5C986B98AD()))
										unk_0x7AD51726D7DA42BD(11, unk_0xC1A5EC5C986B98AD(), num, 0f, &uLocal_33, 0, 0);
						
							if (unk_0x35DF833D93BCC488())
							{
								if (bLocal_32)
									_DISPLAY_HELP_TEXT("CITDENAL" /*Michael and Trevor have been exiled from the city. If they enter the city, Martin's henchmen will track them down.*/, -1);
								else
									_DISPLAY_HELP_TEXT("CITDENAL_R" /*Michael and Trevor have been exiled by Martin. Approaching his ranch will cause his henchmen to attack.*/, -1);
							
								num2 = 120000;
							}
						}
					}
				}
				else
				{
					bLocal_29 = false;
				}
			}
			else
			{
				func_20();
			}
		}
	
		if (bLocal_29)
			if (!unk_0xC1B5FB06637242C9(uLocal_33))
				if (unk_0xE777A59AAA1C96A0(11) < 256)
					if (unk_0x7DE17ACDD8BA2642(unk_0xC1A5EC5C986B98AD()))
						if (!unk_0x66599E73DBA5A850(unk_0xC1A5EC5C986B98AD()))
							unk_0x7AD51726D7DA42BD(11, unk_0xC1A5EC5C986B98AD(), num, 0f, &uLocal_33, 0, 0);
	
		if (bLocal_29 && SYSTEM::TIMERB() > 60000)
		{
			SYSTEM::SETTIMERB(0);
			num = num + unk_0x15A88CFAAFFC6C4B(1, 2);
		
			if (num < 8)
				if (unk_0xC1B5FB06637242C9(uLocal_33))
					unk_0x5AA72AB80F855136(uLocal_33, 11, num);
				else if (unk_0xE777A59AAA1C96A0(11) < 256)
					if (unk_0x7DE17ACDD8BA2642(unk_0xC1A5EC5C986B98AD()))
						if (!unk_0x66599E73DBA5A850(unk_0xC1A5EC5C986B98AD()))
							unk_0x7AD51726D7DA42BD(11, unk_0xC1A5EC5C986B98AD(), num, 0f, &uLocal_33, 0, 0);
			else
				num = 8;
		}
	
		bLocal_30 = bLocal_29;
	
		if (flag2)
		{
			Global_43222 = 0;
		
			if (bLocal_29)
				func_20();
		
			func_4();
		
			while (_GET_CURRENT_PLAYER_CHARACTER() == CHAR_FRANKLIN)
			{
				SYSTEM::WAIT(2000);
			}
		
			func_41();
			flag2 = false;
		}
	
		if (bLocal_29)
			SYSTEM::WAIT(0);
		else
			SYSTEM::WAIT(10000);
	
		if (func_1(12) && !func_9(12))
		{
			if (bLocal_29)
				func_20();
		
			while (func_9(0) || func_9(4))
			{
				SYSTEM::WAIT(8000);
			}
		}
	}

	func_4();
	return;
}

BOOL func_1(int iParam0) // Position - 0x5EE
{
	if (Global_43257 == 15)
		return false;

	if (_CAN_ENTER_FREEROAM_STATE(iParam0))
		return false;

	return true;
}

BOOL _CAN_ENTER_FREEROAM_STATE(int iParam0) // Position - 0x610
{
	return func_3(iParam0, Global_43257);
}

BOOL func_3(int iParam0, int iParam1) // Position - 0x621
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

void func_4() // Position - 0x802
{
	func_7(0, true);
	func_7(2, true);
	func_7(1, true);
	func_5(0, true);
	func_5(1, true);
	func_5(3, true);
	func_5(2, true);
	return;
}

void func_5(int iParam0, BOOL bParam1) // Position - 0x834
{
	if (iParam0 == 7)
		return;

	if (bParam1)
		unk_0xECDAB41968FF21A8(&Global_113648.f_7231.f_17[iParam0], 0);
	else
		unk_0x061B1200C95204CB(&Global_113648.f_7231.f_17[iParam0], 0);

	unk_0xCBBBFA6447641D6C(Global_95820[iParam0 /*9*/].f_8, !bParam1);
	func_6(Global_95820[iParam0 /*9*/].f_7, false, false);
	return;
}

void func_6(int iParam0, BOOL bParam1, BOOL bParam2) // Position - 0x892
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

void func_7(int iParam0, BOOL bParam1) // Position - 0x992
{
	if (iParam0 == 5)
		return;

	if (bParam1)
		unk_0xECDAB41968FF21A8(&Global_113648.f_7231.f_11[iParam0], 0);
	else
		unk_0x061B1200C95204CB(&Global_113648.f_7231.f_11[iParam0], 0);

	unk_0xA0C48EA4ECBEC58E(Global_95884[iParam0 /*9*/].f_8, !bParam1);
	func_6(Global_95884[iParam0 /*9*/].f_7, 0, false);
	return;
}

void _DISPLAY_HELP_TEXT(char* text, int iParam1) // Position - 0x9F0
{
	unk_0x476CC3711883B966(text);
	unk_0xBC8969B539DCA239(0, 0, 1, iParam1);
	return;
}

BOOL func_9(int iParam0) // Position - 0xA07
{
	return Global_43257 == iParam0;
}

int func_10(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11) // Position - 0xA15
{
	int num;
	eCharacter i;

	if (_IS_MISSION_REPEAT_ACTIVE(false))
		return 0;

	if (iParam5 < 0)
		return 0;

	if (iParam6 < 0)
		return 0;

	if (iParam8 == 76)
		return 0;

	if (iParam9 == 235)
		return 0;

	if (iParam3 < 3)
		if (IS_BIT_SET(iParam2, iParam3))
			return 0;

	if (iParam4 < 3)
		if (iParam4 != iParam3)
			return 0;

	if (iParam2 < 1 || iParam2 > 7)
		return 0;

	if (Global_113648.f_7690.f_136 < CHAR_MIKE_TREV_CONF)
	{
		num = iParam0;
	
		if (Global_113648.f_7690.f_911 == num)
			Global_113648.f_7690.f_911 = -1;
	
		num.f_3 = func_13(iParam1);
		num.f_1 = iParam11;
		num.f_2 = iParam2;
		num.f_4 = unk_0xA5E11AF0A2B928C1() + iParam5;
		num.f_5 = iParam6;
		num.f_6 = iParam3;
		num.f_14 = iParam4;
		num.f_10 = iParam7;
		num.f_11 = -1;
		num.f_7 = iParam8;
		num.f_8 = iParam9;
		num.f_9 = iParam10;
		unk_0x061B1200C95204CB(&(num.f_1), 1);
		unk_0x061B1200C95204CB(&(num.f_1), 0);
	
		if (iParam7 != -1)
			unk_0xECDAB41968FF21A8(&(num.f_1), 11);
		else if (iParam1 == 0)
			unk_0xECDAB41968FF21A8(&(num.f_1), 10);
	
		Global_113648.f_7690[Global_113648.f_7690.f_136 /*15*/] = { num };
		Global_113648.f_7690.f_136 = Global_113648.f_7690.f_136 + 1;
	
		for (i = CHAR_MICHAEL; i < CHAR_MULTIPLAYER; i = i + 1)
		{
			if (IS_BIT_SET(iParam2, i))
				func_11(i);
		}
	
		return 1;
	}

	return 0;
}

void func_11(eCharacter echParam0) // Position - 0xB8F
{
	eCharacter i;
	int num;
	eCharacter j;

	num = 0;

	if (!func_12(echParam0))
		return;

	for (i = CHAR_MICHAEL; i < Global_113648.f_7690.f_136; i = i + 1)
	{
		if (IS_BIT_SET(Global_113648.f_7690[i /*15*/].f_2, echParam0))
			if (Global_113648.f_7690[i /*15*/].f_3 > num)
				num = Global_113648.f_7690[i /*15*/].f_3;
	}

	for (j = CHAR_MICHAEL; j < Global_113648.f_7690.f_764; j = j + 1)
	{
		if (IS_BIT_SET(Global_113648.f_7690.f_651[j /*14*/].f_2, echParam0))
			if (Global_113648.f_7690.f_651[j /*14*/].f_3 == 5)
				num = 5;
	}

	Global_113648.f_7690.f_919[echParam0] = num;
	return;
}

BOOL func_12(eCharacter echParam0) // Position - 0xC4D
{
	return echParam0 < CHAR_MULTIPLAYER;
}

int func_13(int iParam0) // Position - 0xC59
{
	switch (iParam0)
	{
		case 0:
		case 4:
			return 5;
	
		case 7:
			return 4;
	
		case 2:
			return 3;
	
		case 1:
			return 2;
	
		case 3:
			return 1;
	
		case 5:
		case 6:
			return 0;
	}

	return 7;
}

BOOL _IS_MISSION_REPEAT_ACTIVE(BOOL bExcludeBenchmark) // Position - 0xCC3
{
	if (!bExcludeBenchmark && unk_0x24B651D85CCE5EB4(joaat("benchmark")) > 0)
		return true;

	return IS_BIT_SET(Global_78807, 0);
}

eCharacter _GET_PLAYER_CHARACTER_FROM_PED(var uParam0) // Position - 0xCEB
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

int _GET_CHARACTER_MODEL(eCharacter character) // Position - 0xD28
{
	if (func_12(character))
		return func_17(character);
	else
		character != _CHAR_NULL;

	return 0;
}

int func_17(eCharacter echParam0) // Position - 0xD4D
{
	return Global_2028[echParam0 /*29*/];
}

int func_18(var uParam0, int iParam1, int iParam2, BOOL bParam3, int iParam4) // Position - 0xD5C
{
	int i;

	if (iParam1 == 7)
		return 0;

	if (!bParam3)
		if (Global_98159.f_44 == 1)
			return 2;

	if (iParam1 == 0)
	{
		if (func_1(0))
			return 0;
	
		Global_43221 = Global_43221 + 1;
		*uParam0 = Global_43221;
		unk_0xA7225B88CE344621(unk_0x5DC3DCA82C806319(), 0);
		Global_23131.f_5 = 0;
	
		if (iParam2 != 5)
			unk_0xDAD6345C5D317E79(8);
	
		Global_43257 = iParam2;
		Global_43219 = *uParam0;
		Global_43220 = iParam4;
		Global_43218 = 0;
		return 1;
	}

	if (*uParam0 != -1)
	{
		if (Global_43218 > 0)
		{
			i = 0;
		
			for (i = 0; i < Global_43218; i = i + 1)
			{
				if (Global_43224[i /*4*/] == *uParam0)
					return 2;
			}
		}
		else if (Global_43219 == *uParam0)
		{
			return 1;
		}
	
		*uParam0 = -1;
	}

	if (*uParam0 == -1)
	{
		if (!_CAN_ENTER_FREEROAM_STATE(iParam2))
			return 0;
	
		if (Global_43218 == 8)
			return 0;
	
		Global_43221 = Global_43221 + 1;
		*uParam0 = Global_43221;
		Global_43224[Global_43218 /*4*/] = Global_43221;
		Global_43224[Global_43218 /*4*/].f_1 = iParam1;
		Global_43224[Global_43218 /*4*/].f_2 = iParam2;
		Global_43224[Global_43218 /*4*/].f_3 = 0;
		Global_43218 = Global_43218 + 1;
	
		if (iParam4 != 0)
			func_19(uParam0, iParam4);
	}

	return 2;
}

void func_19(var uParam0, int iParam1) // Position - 0xE93
{
	int i;

	if (Global_43218 == 0)
		return;

	if (*uParam0 == -1)
		return;

	i = 0;

	for (i = 0; i < Global_43218; i = i + 1)
	{
		if (Global_43224[i /*4*/] == *uParam0)
			Global_43224[i /*4*/].f_3 = iParam1;
	}

	*uParam0 = -1;
	return;
}

void func_20() // Position - 0xEE2
{
	if (iLocal_28 != -1)
		func_21(&iLocal_28);

	func_25(1628462442);
	func_25(1791324372);
	func_25(-240877892);
	func_25(1806999335);
	func_25(2054503592);
	func_25(-2009081795);
	bLocal_29 = 0;
	bLocal_30 = false;
	Global_43222 = 0;
	unk_0xCBFA60E5BB3B03C4(uLocal_33);
	return;
}

void func_21(var uParam0) // Position - 0xF42
{
	if (*uParam0 == -1)
		return;

	if (!*uParam0 == Global_43219)
	{
		*uParam0 = -1;
		return;
	}

	*uParam0 = -1;
	Global_43218 = 0;
	Global_43220 = 0;
	Global_43257 = 15;
	Global_63359 = false;
	Global_63360 = 0;
	return;
}

eCharacter _GET_CURRENT_PLAYER_CHARACTER() // Position - 0xF7F
{
	func_23();
	return Global_113648.f_2365.f_539.f_4321;
}

void func_23() // Position - 0xF98
{
	eCharacter character;

	if (unk_0x7DE17ACDD8BA2642(unk_0xC1A5EC5C986B98AD()))
	{
		if (_GET_CHARACTER_MODEL(Global_113648.f_2365.f_539.f_4321) != unk_0x504B9BB48D41C264(unk_0xC1A5EC5C986B98AD()))
		{
			character = _GET_PLAYER_CHARACTER_FROM_PED(unk_0xC1A5EC5C986B98AD());
		
			if (func_12(character) && !func_9(14) || Global_112599)
			{
				if (Global_113648.f_2365.f_539.f_4321 != character && func_12(Global_113648.f_2365.f_539.f_4321))
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

int func_24(float fParam0, var uParam1, var uParam2, var uParam3) // Position - 0x1095
{
	if (!(unk_0x35DF833D93BCC488() || unk_0x6C9BA681FB2251B6()))
		return 0;

	if (fParam0.f_1 < 400f)
	{
		if (fParam0 < 1400f)
		{
			if (fParam0 > -1900f)
			{
				if (fParam0.f_1 > -3500f)
				{
					*uParam3 = 1;
					return 1;
				}
			}
		}
	}

	if (fParam0 < 1536.35f)
	{
		if (fParam0.f_1 > 1016.18f)
		{
			if (fParam0.f_1 < 1213.53f)
			{
				if (fParam0 > 1278.08f)
				{
					*uParam3 = 0;
					return 1;
				}
			}
		}
	}

	return 0;
}

int func_25(int iParam0) // Position - 0x1124
{
	eCharacter i;
	int num;

	num = 0;

	for (i = CHAR_MICHAEL; i < Global_113648.f_7690.f_136; i = i + 1)
	{
		if (Global_113648.f_7690[i /*15*/] == iParam0)
		{
			if (Global_43804 != i)
			{
				func_37(i);
				func_29(iParam0);
				num = 1;
			}
		}
	}

	for (i = CHAR_MICHAEL; i < Global_113648.f_7690.f_198; i = i + 1)
	{
		if (Global_113648.f_7690.f_137[i /*15*/] == iParam0)
		{
			func_29(iParam0);
			num = 1;
		}
	}

	for (i = CHAR_MICHAEL; i < Global_113648.f_7690.f_650; i = i + 1)
	{
		if (Global_113648.f_7690.f_199[i /*15*/] == iParam0)
		{
			func_28(iParam0);
			num = 1;
		}
	}

	for (i = CHAR_MICHAEL; i < Global_113648.f_7690.f_764; i = i + 1)
	{
		if (Global_113648.f_7690.f_651[i /*14*/] == iParam0)
		{
			func_27(i);
			num = 1;
		}
	}

	for (i = CHAR_MICHAEL; i < Global_113648.f_7690.f_866; i = i + 1)
	{
		if (Global_113648.f_7690.f_765[i /*10*/] == iParam0)
		{
			func_26(i);
			num = 1;
		}
	}

	return num;
}

void func_26(eCharacter echParam0) // Position - 0x124B
{
	eCharacter i;
	var unk;

	if (echParam0 < CHAR_MICHAEL || echParam0 >= Global_113648.f_7690.f_866)
		return;

	if (Global_113648.f_7690.f_866 > CHAR_FRANKLIN)
	{
		for (i = echParam0; i <= Global_113648.f_7690.f_866 - 2; i = i + 1)
		{
			Global_113648.f_7690.f_765[i /*10*/] = { Global_113648.f_7690.f_765[i + 1 /*10*/] };
		}
	}

	if (Global_113648.f_7690.f_866 > CHAR_MICHAEL)
	{
		Global_113648.f_7690.f_765[Global_113648.f_7690.f_866 - 1 /*10*/] = { unk };
		Global_113648.f_7690.f_866 = Global_113648.f_7690.f_866 - 1;
	}

	return;
}

void func_27(eCharacter echParam0) // Position - 0x1304
{
	eCharacter i;
	var unk;

	if (echParam0 < CHAR_MICHAEL || echParam0 >= Global_113648.f_7690.f_764)
		return;

	if (Global_113648.f_7690.f_764 > CHAR_FRANKLIN)
	{
		for (i = echParam0; i <= Global_113648.f_7690.f_764 - 2; i = i + 1)
		{
			Global_113648.f_7690.f_651[i /*14*/] = { Global_113648.f_7690.f_651[i + 1 /*14*/] };
		}
	}

	if (Global_113648.f_7690.f_764 > CHAR_MICHAEL)
	{
		Global_113648.f_7690.f_651[Global_113648.f_7690.f_764 - 1 /*14*/] = { unk };
		Global_113648.f_7690.f_764 = Global_113648.f_7690.f_764 - 1;
	}

	func_11(CHAR_MICHAEL);
	func_11(CHAR_FRANKLIN);
	func_11(CHAR_TREVOR);
	return;
}

void func_28(int iParam0) // Position - 0x13CC
{
	var unk;
	eCharacter i;
	eCharacter j;

	for (i = CHAR_MICHAEL; i < Global_113648.f_7690.f_650; i = i + 1)
	{
		if (Global_113648.f_7690.f_199[i /*15*/] == iParam0)
		{
			for (j = i; j <= Global_113648.f_7690.f_650 - 2; j = j + 1)
			{
				Global_113648.f_7690.f_199[j /*15*/] = { Global_113648.f_7690.f_199[j + 1 /*15*/] };
			}
		
			Global_113648.f_7690.f_199[Global_113648.f_7690.f_650 - 1 /*15*/] = { unk };
			Global_113648.f_7690.f_650 = Global_113648.f_7690.f_650 - 1;
			return;
		}
	}

	return;
}

void func_29(int iParam0) // Position - 0x1479
{
	var unk;
	eCharacter i;
	eCharacter j;

	for (i = CHAR_MICHAEL; i < Global_113648.f_7690.f_198; i = i + 1)
	{
		if (Global_113648.f_7690.f_137[i /*15*/] == iParam0)
		{
			func_30(Global_113648.f_7690.f_137[i /*15*/].f_6);
		
			for (j = i; j <= Global_113648.f_7690.f_198 - 2; j = j + 1)
			{
				Global_113648.f_7690.f_137[j /*15*/] = { Global_113648.f_7690.f_137[j + 1 /*15*/] };
			}
		
			Global_113648.f_7690.f_137[Global_113648.f_7690.f_198 - 1 /*15*/] = { unk };
			Global_113648.f_7690.f_198 = Global_113648.f_7690.f_198 - 1;
			return;
		}
	}

	return;
}

int func_30(eCharacter echParam0) // Position - 0x1535
{
	eCharacter character;

	if (Global_117[echParam0 /*10*/].f_8 != 169)
	{
		if (func_36(echParam0, Global_20383) == 1)
		{
			func_35(echParam0, Global_20383, 0);
		
			if (func_34(echParam0, Global_20383) == 0)
			{
				character = Global_20383;
				func_31(echParam0, character);
			}
		
			return 1;
		}
		else
		{
			return 0;
		}
	}

	return 0;
}

void func_31(eCharacter echParam0, eCharacter echParam1) // Position - 0x158B
{
	eCharacter character;

	if (Global_117[echParam0 /*10*/].f_8 != 169)
	{
		if (echParam1 > CHAR_MULTIPLAYER)
		{
		}
		else
		{
			character = echParam1;
			func_33(echParam0, character, 0);
			func_32(echParam0, character, 0);
		}
	}

	return;
}

void func_32(eCharacter echParam0, eCharacter echParam1, int iParam2) // Position - 0x15C0
{
	if (echParam1 < CHAR_MICHAEL || echParam1 > CHAR_ALL_PLAYERS_CONF)
		return;

	Global_2028[echParam0 /*29*/].f_24[echParam1] = iParam2;

	if (echParam0 < _CHAR_UNUSED)
		Global_113648.f_28052[echParam0 /*29*/].f_24[echParam1] = iParam2;

	return;
}

void func_33(eCharacter echParam0, eCharacter echParam1, int iParam2) // Position - 0x1605
{
	if (echParam1 < CHAR_MICHAEL || echParam1 > CHAR_ALL_PLAYERS_CONF)
		return;

	Global_2028[echParam0 /*29*/].f_12[echParam1] = iParam2;

	if (echParam0 < _CHAR_UNUSED)
		Global_113648.f_28052[echParam0 /*29*/].f_12[echParam1] = iParam2;

	return;
}

int func_34(eCharacter echParam0, eCharacter echParam1) // Position - 0x164A
{
	if (echParam1 < CHAR_MICHAEL || echParam1 > CHAR_ALL_PLAYERS_CONF)
		return 0;

	return Global_2028[echParam0 /*29*/].f_24[echParam1];
}

void func_35(eCharacter echParam0, eCharacter echParam1, int iParam2) // Position - 0x1674
{
	Global_2028[echParam0 /*29*/].f_19[echParam1] = iParam2;

	if (echParam0 < _CHAR_UNUSED)
		Global_113648.f_28052[echParam0 /*29*/].f_19[echParam1] = iParam2;

	return;
}

int func_36(eCharacter echParam0, eCharacter echParam1) // Position - 0x16A5
{
	if (echParam1 < CHAR_MICHAEL || echParam1 > CHAR_ALL_PLAYERS_CONF)
		return 0;

	return Global_2028[echParam0 /*29*/].f_19[echParam1];
}

void func_37(eCharacter echParam0) // Position - 0x16CF
{
	eCharacter i;
	int num;
	var unk;

	if (echParam0 < CHAR_MICHAEL || echParam0 >= Global_113648.f_7690.f_136)
		return;

	num = Global_113648.f_7690[echParam0 /*15*/].f_2;

	if (Global_113648.f_7690.f_136 > CHAR_FRANKLIN)
	{
		for (i = echParam0; i <= Global_113648.f_7690.f_136 - 2; i = i + 1)
		{
			Global_113648.f_7690[i /*15*/] = { Global_113648.f_7690[i + 1 /*15*/] };
		}
	}

	if (Global_113648.f_7690.f_136 > CHAR_MICHAEL)
	{
		Global_113648.f_7690[Global_113648.f_7690.f_136 - 1 /*15*/] = { unk };
		Global_113648.f_7690.f_136 = Global_113648.f_7690.f_136 - 1;
	}

	for (i = CHAR_MICHAEL; i < CHAR_MULTIPLAYER; i = i + 1)
	{
		if (IS_BIT_SET(num, i))
			func_11(i);
	}

	return;
}

void func_38() // Position - 0x17A7
{
	func_20();
	func_4();
	unk_0x675D9C12C73D3DE7();
	return;
}

int func_39(int iParam0) // Position - 0x17BB
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
	{
		unk_0x061B1200C95204CB(&Global_113648.f_9087.f_99.f_219[num], num2);
		return 1;
	}

	return 0;
}

BOOL func_40(int iParam0) // Position - 0x1812
{
	if (iParam0 == 146 || iParam0 == -1)
		return false;

	return Global_113648.f_9087.f_99.f_58[iParam0];
}

void func_41() // Position - 0x183F
{
	func_7(0, false);
	func_7(2, false);
	func_7(1, false);
	func_5(0, false);
	func_5(1, false);
	func_5(3, false);
	func_5(2, false);
	return;
}

int func_42(int iParam0) // Position - 0x1871
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

