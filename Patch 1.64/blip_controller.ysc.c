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
	char* sLocal_21 = 0;
	char* sLocal_22 = 0;
	char* sLocal_23 = 0;
	var uLocal_24 = 0;
	var uLocal_25 = 0;
	var uLocal_26 = 0;
	var uLocal_27 = 0;
	var uLocal_28 = 0;
	var uLocal_29 = 0;
	int iLocal_30 = 0;
	float fLocal_31 = 0f;
	var uLocal_32 = 0;
	var uLocal_33 = 0;
	var uLocal_34 = 0;
	float fLocal_35 = 0f;
	float fLocal_36 = 0f;
	var uLocal_37 = 0;
	var uLocal_38 = 0;
	float fLocal_39 = 0f;
	float fLocal_40 = 0f;
	float fLocal_41 = 0f;
	var uLocal_42 = 0;
	var uLocal_43 = 0;
	var uLocal_44 = 0;
	BOOL bLocal_45 = 0;
	BOOL bLocal_46 = 0;
	BOOL bLocal_47 = 0;
	var uLocal_48 = 0;
	var uLocal_49 = 0;
	BOOL bLocal_50 = 0;
	int iLocal_51 = 0;
	BOOL bLocal_52 = 0;
	int iLocal_53 = 0;
	int iLocal_54 = 0;
	var uLocal_55 = 7;
	var uLocal_56 = 0;
	var uLocal_57 = 0;
	var uLocal_58 = 0;
	var uLocal_59 = 0;
	var uLocal_60 = 0;
	var uLocal_61 = 0;
	var uLocal_62 = 0;
	eCharacter echLocal_63 = CHAR_MICHAEL;
	eCharacter echLocal_64 = CHAR_MICHAEL;
	BOOL bLocal_65 = 0;
	BOOL bLocal_66 = 0;
	BOOL bLocal_67 = 0;
	BOOL bLocal_68 = 0;
	BOOL bLocal_69 = 0;
	BOOL bLocal_70 = 0;
	BOOL bLocal_71 = 0;
	BOOL bLocal_72 = 0;
	BOOL bLocal_73 = 0;
#endregion

void main() // Position - 0x0
{
	int i;
	int num;
	int j;
	BOOL flag;
	int num2;
	int num3;
	int num4;
	BOOL flag2;
	int num5;
	int num6;
	BOOL flag3;
	int num7;

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
	sLocal_21 = "CHECKPOINT_NORMAL";
	sLocal_22 = "CHECKPOINT_MISSED";
	sLocal_23 = "CHECKPOINT_PERFECT";
	uLocal_24 = { 1694.7395f, 3276.5024f, 41.2796f };
	uLocal_27 = { 8.79494f, 0.59893f, 154.8464f };
	iLocal_30 = 3;
	fLocal_31 = 0f;
	fLocal_35 = -0.0375f;
	fLocal_36 = 0.17f;
	fLocal_39 = 80f;
	fLocal_40 = 140f;
	fLocal_41 = 180f;
	bLocal_50 = true;
	iLocal_53 = -1;

	if (unk_0x55EEDBBFDC6E810F(2))
		func_52();

	for (i = 0; i <= 59; i = i + 1)
	{
		if (func_51(i))
		{
			num = func_50(i);
			func_47(num, func_48(i));
		}
	}

	func_46(91, true);
	func_46(92, true);
	Global_32540 = true;

	while (Global_32542)
	{
		unk_0xA5E11AF0A2B928C1() % 250 == 0;
		SYSTEM::WAIT(0);
	}

	j = 0;

	for (j = 0; j < 7; j = j + 1)
	{
		uLocal_55[j] = -1;
	}

	unk_0xECDAB41968FF21A8(&(Global_32543[j /*23*/].f_11), 18);
	j = 0;

	for (j = 0; j < 263; j = j + 1)
	{
		unk_0xECDAB41968FF21A8(&(Global_32543[j /*23*/].f_11), 18);
	}

	bLocal_71 = Global_38594;
	flag = false;
	func_45();
	func_43();

	while (true)
	{
		if (!flag)
			func_42();
	
		flag = func_35();
	
		if (flag)
			Global_32540 = true;
	
		num2 = 0;
		num3 = 0;
		j = 0;
	
		if (Global_32540)
		{
			func_45();
			func_43();
			num4 = 0;
		
			for (j = 0; j < 263; j = j + 1)
			{
				flag2 = IS_BIT_SET(Global_32543[j /*23*/].f_11, 18);
			
				if (!flag2)
				{
					if (func_34(j))
					{
						num3 = num3 + 1;
						flag2 = true;
					}
				}
			
				num2 = num2 + 1;
			
				if (flag2)
				{
					num5 = 0;
					num6 = 0;
				
					if (Global_38594)
					{
						num5 = num5 + 1;
						num6 = num6 + 1;
					}
					else
					{
						if (IS_BIT_SET(Global_32543[j /*23*/].f_11, 13))
						{
							if (func_33())
								num5 = num5 + 1;
						
							num6 = num6 + 1;
						}
					
						if (IS_BIT_SET(Global_32543[j /*23*/].f_11, 1))
						{
							if (!bLocal_50)
								num5 = num5 + 1;
						
							num6 = num6 + 1;
						}
					
						if (IS_BIT_SET(Global_32543[j /*23*/].f_11, 2))
						{
							if (bLocal_50)
								num5 = num5 + 1;
						
							num6 = num6 + 1;
						}
					
						if (IS_BIT_SET(Global_32543[j /*23*/].f_11, 7))
						{
							if (!func_32(15))
								num5 = num5 + 1;
						
							num6 = num6 + 1;
						}
					
						if (IS_BIT_SET(Global_32543[j /*23*/].f_11, 16))
						{
							if (!_CAN_ENTER_FREEROAM_STATE(Global_32543[j /*23*/].f_22))
								num5 = num5 + 1;
						
							num6 = num6 + 1;
						}
					
						if (IS_BIT_SET(Global_32543[j /*23*/].f_11, 14))
						{
							if (func_32(5))
								num5 = num5 + 1;
						
							num6 = num6 + 1;
						}
					
						if (IS_BIT_SET(Global_32543[j /*23*/].f_11, 8))
						{
							if (Global_32543[j /*23*/].f_16 != 4 && Global_32543[j /*23*/].f_16 != 8)
							{
								if (!func_29(j))
									num5 = num5 + 1;
							
								num6 = num6 + 1;
							}
						}
					
						if (IS_BIT_SET(Global_32543[j /*23*/].f_11, 19))
						{
							switch (echLocal_64)
							{
								case CHAR_FRANKLIN:
								case CHAR_MICHAEL:
								case CHAR_TREVOR:
									break;
							
								default:
									num5 = num5 + 1;
									break;
							}
						
							num6 = num6 + 1;
						}
					
						if (IS_BIT_SET(Global_32543[j /*23*/].f_11, 27))
						{
							if (bLocal_45)
								num5 = num5 + 1;
						
							num6 = num6 + 1;
						}
					
						if (Global_32543[j /*23*/].f_16 == 1)
							func_23();
					}
				
					if (num6 > 0)
						if (num5 > 0)
							unk_0x061B1200C95204CB(&(Global_32543[j /*23*/].f_11), 0);
						else if (IS_BIT_SET(Global_32543[j /*23*/].f_11, 15))
							unk_0xECDAB41968FF21A8(&(Global_32543[j /*23*/].f_11), 0);
					else if (IS_BIT_SET(Global_32543[j /*23*/].f_11, 15))
						unk_0xECDAB41968FF21A8(&(Global_32543[j /*23*/].f_11), 0);
				
					if (IS_BIT_SET(Global_32543[j /*23*/].f_11, 0) && IS_BIT_SET(Global_32543[j /*23*/].f_11, 3))
					{
						flag3 = false;
					
						if (!unk_0xCE4AAA035282336C(Global_32543[j /*23*/].f_19))
						{
							while (!unk_0xC290661FB44F56F1() < 150)
							{
								SYSTEM::WAIT(2000);
							}
						
							if (IS_BIT_SET(Global_32543[j /*23*/].f_11, 19))
							{
								switch (echLocal_64)
								{
									case CHAR_FRANKLIN:
									case CHAR_MICHAEL:
									case CHAR_TREVOR:
										if (IS_BIT_SET(Global_32543[j /*23*/].f_11, 28))
										{
											Global_32543[j /*23*/].f_19 = unk_0xF63CADB0077DA829(Global_32543[j /*23*/][0 /*3*/], Global_32543[j /*23*/].f_10);
											unk_0x5E3A54CF3E9DF9FC(Global_32543[j /*23*/].f_19, 128);
											unk_0xA4B6A532E7DDE178(Global_32543[j /*23*/].f_19, 0);
										}
										else
										{
											Global_32543[j /*23*/].f_19 = unk_0x7F0C74F83813841D(Global_32543[j /*23*/][echLocal_64 /*3*/]);
											unk_0xEA4639F4444B7003(Global_32543[j /*23*/].f_19, Global_32543[j /*23*/].f_12[echLocal_64]);
										}
										break;
								
									default:
										Global_32543[j /*23*/].f_19 = unk_0x7F0C74F83813841D(1f, 2f, 3f);
										break;
								}
							}
							else if (IS_BIT_SET(Global_32543[j /*23*/].f_11, 28))
							{
								Global_32543[j /*23*/].f_19 = unk_0xF63CADB0077DA829(Global_32543[j /*23*/][0 /*3*/], Global_32543[j /*23*/].f_10);
								unk_0x5E3A54CF3E9DF9FC(Global_32543[j /*23*/].f_19, 128);
								unk_0xA4B6A532E7DDE178(Global_32543[j /*23*/].f_19, 0);
							}
							else
							{
								Global_32543[j /*23*/].f_19 = unk_0x7F0C74F83813841D(Global_32543[j /*23*/][0 /*3*/]);
								unk_0xEA4639F4444B7003(Global_32543[j /*23*/].f_19, Global_32543[j /*23*/].f_12[0]);
							}
						
							if (Global_32543[j /*23*/].f_16 == 1)
								flag3 = true;
						}
						else
						{
							if (IS_BIT_SET(Global_32543[j /*23*/].f_11, 19))
							{
								switch (echLocal_64)
								{
									case CHAR_FRANKLIN:
									case CHAR_MICHAEL:
									case CHAR_TREVOR:
										unk_0x385CFFE850A96C08(Global_32543[j /*23*/].f_19, Global_32543[j /*23*/][echLocal_64 /*3*/]);
										break;
								
									default:
										break;
								}
							}
							else
							{
								unk_0x385CFFE850A96C08(Global_32543[j /*23*/].f_19, Global_32543[j /*23*/][0 /*3*/]);
							}
						
							if (IS_BIT_SET(Global_32543[j /*23*/].f_11, 9))
							{
								if (bLocal_47)
								{
									unk_0x37B37B8045788E6A(Global_32543[j /*23*/].f_19, 1);
									bLocal_47 = false;
								}
								else
								{
									unk_0xD953A349527E09EA(Global_32543[j /*23*/].f_19, 1);
									bLocal_47 = true;
								}
							
								unk_0xD48486CAAB189227(Global_32543[j /*23*/].f_19, 10000);
								unk_0x061B1200C95204CB(&(Global_32543[j /*23*/].f_11), 9);
							}
							else
							{
								unk_0x37B37B8045788E6A(Global_32543[j /*23*/].f_19, 0);
							}
						}
					
						func_20(Global_32543[j /*23*/].f_19, j);
					
						if (flag3)
							func_19(j);
					
						num3 = num3 + 1;
					}
					else
					{
						if (unk_0xCE4AAA035282336C(Global_32543[j /*23*/].f_19))
						{
							unk_0x45533C09A6C9B409(&(Global_32543[j /*23*/].f_19));
							num3 = num3 + 1;
						
							if (Global_32543[j /*23*/].f_16 == 1)
								func_18(j);
						}
					
						Global_32543[j /*23*/].f_19 = 0;
					}
				}
			
				unk_0x061B1200C95204CB(&(Global_32543[j /*23*/].f_11), 18);
				num7 = 30;
			
				if (unk_0x72474BA05A104E1E())
					num7 = 250;
			
				if (num3 > num7)
				{
					SYSTEM::WAIT(0);
					num3 = 0;
				}
			
				if (num2 / 20 > num4)
				{
					num4 = num2 / 20;
					SYSTEM::WAIT(0);
				}
			}
		}
	
		Global_32540 = Global_32541;
		Global_32541 = false;
	
		if (num2 == 0)
		{
			func_11();
			func_7();
			SYSTEM::WAIT(500);
			echLocal_64 = _GET_CURRENT_PLAYER_CHARACTER();
		}
	}

	return;
}

eCharacter _GET_CURRENT_PLAYER_CHARACTER() // Position - 0x716
{
	func_2();
	return Global_113648.f_2365.f_539.f_4321;
}

void func_2() // Position - 0x72F
{
	eCharacter character;

	if (unk_0x7DE17ACDD8BA2642(unk_0xC1A5EC5C986B98AD()))
	{
		if (_GET_CHARACTER_MODEL(Global_113648.f_2365.f_539.f_4321) != unk_0x504B9BB48D41C264(unk_0xC1A5EC5C986B98AD()))
		{
			character = _GET_PLAYER_CHARACTER_FROM_PED(unk_0xC1A5EC5C986B98AD());
		
			if (func_3(character) && !func_32(14) || Global_112599)
			{
				if (Global_113648.f_2365.f_539.f_4321 != character && func_3(Global_113648.f_2365.f_539.f_4321))
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

BOOL func_3(eCharacter echParam0) // Position - 0x82C
{
	return echParam0 < CHAR_MULTIPLAYER;
}

eCharacter _GET_PLAYER_CHARACTER_FROM_PED(var uParam0) // Position - 0x838
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

int _GET_CHARACTER_MODEL(eCharacter character) // Position - 0x875
{
	if (func_3(character))
		return func_6(character);
	else
		character != _CHAR_NULL;

	return 0;
}

int func_6(eCharacter echParam0) // Position - 0x89A
{
	return Global_2028[echParam0 /*29*/];
}

void func_7() // Position - 0x8A9
{
	if (_GET_CURRENT_PLAYER_CHARACTER() == CHAR_FRANKLIN)
	{
		if (func_10(63))
		{
			if (unk_0x48DC6A21D1CAD89C(unk_0x93E99A2DBCBA9CFA()))
			{
				if (func_10(126))
				{
					if (func_9(138))
						func_8(138, false, false);
				
					if (!func_9(139))
						if (unk_0x24B651D85CCE5EB4(joaat("chop")) == 0)
							if (unk_0x2E496FE654DA4166(unk_0x30BE8A934C020461(unk_0xC1A5EC5C986B98AD(), 1), 19.3f, 528.24f, 169.63f, 1) > 50f)
								func_8(139, true, false);
				}
				else
				{
					if (func_9(139))
						func_8(139, false, false);
				
					if (!func_9(138))
						if (unk_0x24B651D85CCE5EB4(joaat("chop")) == 0)
							if (unk_0x2E496FE654DA4166(unk_0x30BE8A934C020461(unk_0xC1A5EC5C986B98AD(), 1), -11.15f, -1425.56f, 29.67f, 1) > 50f)
								func_8(138, true, false);
				}
			}
		}
	}

	return;
}

void func_8(int iParam0, BOOL bParam1, BOOL bParam2) // Position - 0x985
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
			Global_32541 = 1;
	
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

BOOL func_9(int iParam0) // Position - 0xA85
{
	int num;

	num = iParam0;

	if (num < 0 || num >= 263 || iParam0 == 263)
		return false;

	return unk_0xCE4AAA035282336C(Global_32543[num /*23*/].f_19);
}

BOOL func_10(int iParam0) // Position - 0xAC1
{
	if (iParam0 == 146 || iParam0 == -1)
		return false;

	return Global_113648.f_9087.f_99.f_58[iParam0];
}

void func_11() // Position - 0xAEE
{
	var unk;
	int num;
	float num2;
	int i;
	float num3;

	if (unk_0x8C1810CF0182E949(unk_0x5DC3DCA82C806319()))
		return;

	unk = { _GET_PLAYER_COORDS(unk_0x5DC3DCA82C806319()) };
	num = -1;
	num2 = 1000000f;
	i = 0;

	for (i = 0; i < 7; i = i + 1)
	{
		if (uLocal_55[i] != -1)
		{
			if (unk_0xCE4AAA035282336C(Global_32543[uLocal_55[i] /*23*/].f_19))
			{
				num3 = unk_0x2E496FE654DA4166(unk, unk_0x8D16B409D1BC42CD(Global_32543[uLocal_55[i] /*23*/].f_19), 1);
			
				if (num3 < num2)
				{
					num2 = num3;
					num = i;
				}
			}
		}
	}

	if (iLocal_53 == num)
		return;

	iLocal_53 = num;

	if (num == -1)
		return;

	for (i = 0; i < 7; i = i + 1)
	{
		if (uLocal_55[i] != -1)
			if (i == num)
				if (unk_0xCE4AAA035282336C(Global_32543[uLocal_55[i] /*23*/].f_19))
					func_16(uLocal_55[i]);
			else if (unk_0xCE4AAA035282336C(Global_32543[uLocal_55[i] /*23*/].f_19))
				func_12(uLocal_55[i]);
	}

	return;
}

void func_12(int iParam0) // Position - 0xBF2
{
	func_15(iParam0, false, false);
	func_14(iParam0, true);
	func_13(iParam0, true);
	return;
}

void func_13(int iParam0, BOOL bParam1) // Position - 0xC10
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
		Global_32541 = 1;

	Global_32540 = true;
	unk_0xECDAB41968FF21A8(&(Global_32543[num /*23*/].f_11), 18);
	return;
}

void func_14(int iParam0, BOOL bParam1) // Position - 0xC93
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
		Global_32541 = 1;

	Global_32540 = true;
	unk_0xECDAB41968FF21A8(&(Global_32543[num /*23*/].f_11), 18);
	return;
}

void func_15(int iParam0, BOOL bParam1, BOOL bParam2) // Position - 0xD16
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
		Global_32541 = 1;

	Global_32540 = true;
	unk_0xECDAB41968FF21A8(&(Global_32543[num /*23*/].f_11), 18);
	return;
}

void func_16(int iParam0) // Position - 0xDBF
{
	func_15(iParam0, true, false);
	func_14(iParam0, true);
	func_13(iParam0, true);
	return;
}

Vector3 _GET_PLAYER_COORDS(var uParam0) // Position - 0xDDD
{
	return unk_0x30BE8A934C020461(unk_0xF2CFBB1105511E1A(uParam0), 0);
}

void func_18(int iParam0) // Position - 0xDF0
{
	int i;

	if (iLocal_54 < 1)
		return;

	i = 0;

	for (i = 0; i < 7; i = i + 1)
	{
		if (uLocal_55[i] == iParam0)
		{
			iLocal_54 = iLocal_54 - 1;
			uLocal_55[i] = -1;
		
			if (iParam0 == iLocal_53)
				iLocal_53 = -1;
		
			return;
		}
	}

	return;
}

void func_19(int iParam0) // Position - 0xE3B
{
	int i;
	int num;

	if (iLocal_54 == 7)
		return;

	i = 0;
	num = -1;

	for (i = 0; i < iLocal_54; i = i + 1)
	{
		if (uLocal_55[i] == iParam0)
			return;
	}

	for (i = 0; i < 7; i = i + 1)
	{
		if (uLocal_55[i] == -1)
		{
			num = i;
			i = 7;
		}
	}

	uLocal_55[num] = iParam0;
	iLocal_54 = iLocal_54 + 1;
	return;
}

void func_20(var uParam0, int iParam1) // Position - 0xEA4
{
	eCharacter character;
	BOOL flag;
	BOOL flag2;
	BOOL flag3;
	BOOL flag4;

	character = _GET_CURRENT_PLAYER_CHARACTER();
	unk_0xCF3E14F89A1F7829(uParam0, 1);
	unk_0xC2E0B90856D55E49(uParam0, 2);
	unk_0x1886753DA39F38F8(uParam0, func_22(iParam1));

	if (Global_32543[iParam1 /*23*/].f_16 == 4 || Global_32543[iParam1 /*23*/].f_16 == 8)
	{
		switch (character)
		{
			case CHAR_MICHAEL:
				unk_0x1886753DA39F38F8(uParam0, 42);
				break;
		
			case CHAR_FRANKLIN:
				unk_0x1886753DA39F38F8(uParam0, 43);
				break;
		
			case CHAR_TREVOR:
				unk_0x1886753DA39F38F8(uParam0, 44);
				break;
		}
	}

	if (!IS_BIT_SET(Global_32543[iParam1 /*23*/].f_11, 28))
		unk_0x225EB85DBC38E707(uParam0, 1f);

	if (!unk_0x2AC37494BBF1DB16(&(Global_32543[iParam1 /*23*/].f_20)))
		if (unk_0x42FA33BDEDF21186(&(Global_32543[iParam1 /*23*/].f_20)))
			unk_0x4049FDC177C92D4B(uParam0, &(Global_32543[iParam1 /*23*/].f_20));

	flag = IS_BIT_SET(Global_32543[iParam1 /*23*/].f_11, 4);
	flag2 = IS_BIT_SET(Global_32543[iParam1 /*23*/].f_11, 5);
	flag3 = IS_BIT_SET(Global_32543[iParam1 /*23*/].f_11, 6);
	flag4 = false;

	if (func_21(0))
		flag4 = IS_BIT_SET(Global_32543[iParam1 /*23*/].f_11, 11);

	if (flag3 && !flag4)
		unk_0xDFA9D2A64046A409(uParam0, 0);
	else
		unk_0xDFA9D2A64046A409(uParam0, 1);

	if (flag2 && flag)
	{
		unk_0x3C1C0549FDA2CF24(uParam0, 4);
	}
	else
	{
		if (flag2)
			unk_0x3C1C0549FDA2CF24(uParam0, 5);
	
		if (flag)
			unk_0x3C1C0549FDA2CF24(uParam0, 3);
	}

	switch (Global_32543[iParam1 /*23*/].f_16)
	{
		case 7:
			unk_0xC2E0B90856D55E49(uParam0, 2);
			unk_0xD522B8C7C7C89629(uParam0, 0);
			break;
	
		case 6:
		case 5:
			unk_0xC2E0B90856D55E49(uParam0, 2);
			unk_0xD522B8C7C7C89629(uParam0, 0);
			break;
	
		case 1:
			unk_0xC2E0B90856D55E49(uParam0, 3);
			unk_0xD522B8C7C7C89629(uParam0, 1);
			break;
	
		case 9:
			unk_0xC2E0B90856D55E49(uParam0, 1);
			unk_0xF5B7BFB8552DB074(uParam0, 10);
			unk_0xD522B8C7C7C89629(uParam0, 0);
			break;
	
		case 4:
		case 8:
			unk_0xD522B8C7C7C89629(uParam0, 1);
		
			if (Global_32543[iParam1 /*23*/].f_16 == 4)
				unk_0xC2E0B90856D55E49(uParam0, 7);
			else
				unk_0xC2E0B90856D55E49(uParam0, 5);
		
			if (IS_BIT_SET(Global_32543[iParam1 /*23*/].f_11, 8))
			{
				if (!func_29(iParam1))
				{
					if (IS_BIT_SET(Global_32543[iParam1 /*23*/].f_11, 28))
					{
						unk_0x5E3A54CF3E9DF9FC(uParam0, 0);
					}
					else
					{
						if (Global_32543[iParam1 /*23*/].f_17 == CHAR_MICHAEL)
							unk_0x1886753DA39F38F8(uParam0, 42);
					
						if (Global_32543[iParam1 /*23*/].f_17 == CHAR_FRANKLIN)
							unk_0x1886753DA39F38F8(uParam0, 43);
					
						if (Global_32543[iParam1 /*23*/].f_17 == CHAR_TREVOR)
							unk_0x1886753DA39F38F8(uParam0, 44);
					
						if (Global_32543[iParam1 /*23*/].f_16 == 8)
						{
							unk_0xDFA9D2A64046A409(uParam0, IS_BIT_SET(Global_32543[iParam1 /*23*/].f_11, 5));
							unk_0xC2E0B90856D55E49(uParam0, 3);
							unk_0xDFA9D2A64046A409(uParam0, 1);
							unk_0xDE9F0903D46A94EF(uParam0, 1);
							unk_0x225EB85DBC38E707(uParam0, 0.77f);
						}
						else
						{
							unk_0x225EB85DBC38E707(uParam0, 0.72f);
						}
					}
				}
				else
				{
					if (IS_BIT_SET(Global_32543[iParam1 /*23*/].f_11, 28))
						unk_0x5E3A54CF3E9DF9FC(uParam0, 128);
				
					if (Global_32543[iParam1 /*23*/].f_16 == 8)
						unk_0xDE9F0903D46A94EF(uParam0, 0);
				}
			}
			break;
	
		default:
			unk_0xC2E0B90856D55E49(uParam0, 5);
			break;
	}

	switch (iParam1)
	{
		case 48:
		case 49:
		case 50:
		case 51:
		case 52:
		case 53:
		case 54:
		case 55:
		case 56:
		case 57:
		case 58:
			unk_0xD522B8C7C7C89629(uParam0, 1);
			break;
	}

	if (IS_BIT_SET(Global_32543[iParam1 /*23*/].f_11, 19))
	{
		switch (character)
		{
			case CHAR_FRANKLIN:
			case CHAR_MICHAEL:
			case CHAR_TREVOR:
				unk_0x385CFFE850A96C08(Global_32543[iParam1 /*23*/].f_19, Global_32543[iParam1 /*23*/][character /*3*/]);
				break;
		}
	}

	if (IS_BIT_SET(Global_32543[iParam1 /*23*/].f_11, 17))
		unk_0x09C78F553DA1AC9D(uParam0, 1);
	else
		unk_0x09C78F553DA1AC9D(uParam0, 0);

	if (IS_BIT_SET(Global_32543[iParam1 /*23*/].f_11, 20))
		unk_0x36013A432586DEC5(uParam0, 1);
	else
		unk_0x36013A432586DEC5(uParam0, 0);

	if (IS_BIT_SET(Global_32543[iParam1 /*23*/].f_11, 29))
		unk_0x1886753DA39F38F8(uParam0, 39);

	return;
}

BOOL func_21(int iParam0) // Position - 0x128B
{
	if (Global_43257 == 15)
		return 0;

	if (_CAN_ENTER_FREEROAM_STATE(iParam0))
		return 0;

	return 1;
}

int func_22(int iParam0) // Position - 0x12AD
{
	int num;
	int num2;

	num = iParam0;

	if (num < 0 || num >= 263 || iParam0 == 263)
		return 0;

	num2 = unk_0x4186606EC622CA48(Global_32543[num /*23*/].f_11, 21, 26);
	return num2;
}

void func_23() // Position - 0x12F0
{
	int i;

	for (i = 0; i < 7; i = i + 1)
	{
		func_24(i);
	}

	return;
}

void func_24(int iParam0) // Position - 0x1310
{
	BOOL flag;

	if (iParam0 == 10)
		return;

	if (Global_95719[iParam0 /*10*/].f_7 == 263)
		return;

	flag = false;

	if (IS_BIT_SET(Global_113648.f_7231[iParam0], 0))
		if (Global_95719[iParam0 /*10*/].f_9 != _GET_CURRENT_PLAYER_CHARACTER_0())
			flag = true;
		else if (!func_26(iParam0))
			flag = true;

	if (iParam0 == 5)
		if (func_25(6))
			flag = false;

	if (func_21(14))
		flag = false;

	func_8(Global_95719[iParam0 /*10*/].f_7, flag, false);
	return;
}

BOOL func_25(int iParam0) // Position - 0x139A
{
	return IS_BIT_SET(Global_113648.f_7231[iParam0], 0);
}

BOOL func_26(int iParam0) // Position - 0x13AF
{
	int i;
	var unk;
	int num;

	if (Global_100733.f_385 == 0)
		return false;

	if (iParam0 == 10)
	{
		for (i = 0; i < 10; i = i + 1)
		{
			if (func_26(i))
				return true;
		}
	}
	else if (!unk_0x66599E73DBA5A850(unk_0xC1A5EC5C986B98AD()))
	{
		func_27(iParam0, &unk);
		num = unk_0xAF0CB15312D8B8E3(Global_95719[iParam0 /*10*/].f_3, &unk);
	
		if (num != 0 && Global_100733.f_385 == num)
			return true;
	}

	return false;
}

BOOL func_27(int iParam0, char* sParam1) // Position - 0x1434
{
	TEXT_LABEL_ASSIGN_STRING(sParam1, "", 32);

	switch (iParam0)
	{
		case 0:
			TEXT_LABEL_ASSIGN_STRING(sParam1, "v_michael", 32);
			break;
	
		case 5:
			TEXT_LABEL_ASSIGN_STRING(sParam1, "v_franklins", 32);
			break;
	
		case 6:
			TEXT_LABEL_ASSIGN_STRING(sParam1, "v_franklinshouse", 32);
			break;
	
		case 2:
		case 1:
			if (unk_0x3BF907958F785E30("TrevorsTrailer"))
				TEXT_LABEL_ASSIGN_STRING(sParam1, "v_trailer", 32);
			else if (unk_0x3BF907958F785E30("TrevorsTrailerTidy"))
				TEXT_LABEL_ASSIGN_STRING(sParam1, "V_TrailerTIDY", 32);
			else if (unk_0x3BF907958F785E30("TrevorsTrailerTrash"))
				TEXT_LABEL_ASSIGN_STRING(sParam1, "V_TrailerTRASH", 32);
			break;
	
		case 3:
			TEXT_LABEL_ASSIGN_STRING(sParam1, "v_trevors", 32);
			break;
	
		case 4:
			TEXT_LABEL_ASSIGN_STRING(sParam1, "v_strip3", 32);
			break;
	
		case 8:
		case 7:
		case 9:
			TEXT_LABEL_ASSIGN_STRING(sParam1, "v_psycheoffice", 32);
			break;
	}

	return !unk_0x4310A0DB886F9FED(sParam1, "");
}

eCharacter _GET_CURRENT_PLAYER_CHARACTER_0() // Position - 0x1508
{
	func_2();
	return Global_113648.f_2365.f_539.f_4321;
}

BOOL func_29(int iParam0) // Position - 0x1521
{
	int num;

	num = iParam0;

	if (num < 0 || num >= 263 || iParam0 == 263)
		return false;

	if (!IS_BIT_SET(Global_32543[num /*23*/].f_11, 8))
		return false;

	if (Global_32543[num /*23*/].f_17 == _GET_CURRENT_PLAYER_CHARACTER())
		return true;

	if (!IS_BIT_SET(Global_32543[num /*23*/].f_11, 10))
		return false;

	if (Global_32543[num /*23*/].f_18 == _GET_CURRENT_PLAYER_CHARACTER())
		return true;

	return false;
}

BOOL _CAN_ENTER_FREEROAM_STATE(int iParam0) // Position - 0x15A1
{
	return func_31(iParam0, Global_43257);
}

BOOL func_31(int iParam0, int iParam1) // Position - 0x15B2
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

BOOL func_32(int iParam0) // Position - 0x1793
{
	return Global_43257 == iParam0;
}

BOOL func_33() // Position - 0x17A1
{
	if (unk_0x83C5A442AAD15BAF(unk_0x5DC3DCA82C806319()) != 0)
		return true;

	return false;
}

BOOL func_34(int iParam0) // Position - 0x17BA
{
	if (bLocal_68 && IS_BIT_SET(Global_32543[iParam0 /*23*/].f_11, 13))
	{
		unk_0xECDAB41968FF21A8(&(Global_32543[iParam0 /*23*/].f_11), 18);
		return true;
	}

	if (bLocal_69 && IS_BIT_SET(Global_32543[iParam0 /*23*/].f_11, 7) || IS_BIT_SET(Global_32543[iParam0 /*23*/].f_11, 11) || IS_BIT_SET(Global_32543[iParam0 /*23*/].f_11, 16))
	{
		unk_0xECDAB41968FF21A8(&(Global_32543[iParam0 /*23*/].f_11), 18);
		return true;
	}

	if (bLocal_70 && IS_BIT_SET(Global_32543[iParam0 /*23*/].f_11, 14))
	{
		unk_0xECDAB41968FF21A8(&(Global_32543[iParam0 /*23*/].f_11), 18);
		return true;
	}

	if (bLocal_65 && IS_BIT_SET(Global_32543[iParam0 /*23*/].f_11, 10) || IS_BIT_SET(Global_32543[iParam0 /*23*/].f_11, 8) || IS_BIT_SET(Global_32543[iParam0 /*23*/].f_11, 19))
	{
		unk_0xECDAB41968FF21A8(&(Global_32543[iParam0 /*23*/].f_11), 18);
		return true;
	}

	if (bLocal_66)
	{
		unk_0xECDAB41968FF21A8(&(Global_32543[iParam0 /*23*/].f_11), 18);
		return true;
	}

	if (bLocal_72 && IS_BIT_SET(Global_32543[iParam0 /*23*/].f_11, 27))
	{
		unk_0xECDAB41968FF21A8(&(Global_32543[iParam0 /*23*/].f_11), 18);
		return true;
	}

	if (bLocal_73 && IS_BIT_SET(Global_32543[iParam0 /*23*/].f_11, 1) || IS_BIT_SET(Global_32543[iParam0 /*23*/].f_11, 2) || Global_32543[iParam0 /*23*/].f_16 == 1)
	{
		unk_0xECDAB41968FF21A8(&(Global_32543[iParam0 /*23*/].f_11), 18);
		return true;
	}

	return false;
}

BOOL func_35() // Position - 0x1939
{
	int num;

	num = 0;

	if (func_41())
	{
		if (!bLocal_67)
		{
			bLocal_67 = true;
			num = 1;
		}
	}

	if (func_40())
	{
		if (!bLocal_68)
		{
			bLocal_68 = true;
			num = 1;
		}
	}

	if (func_39())
	{
		if (!bLocal_69)
		{
			bLocal_69 = true;
			num = 1;
		}
	}

	if (func_38())
	{
		if (!bLocal_70)
		{
			bLocal_70 = true;
			num = 1;
		}
	}

	bLocal_66 = false;

	if (Global_38594 != bLocal_71)
	{
		bLocal_71 = Global_38594;
	
		if (!bLocal_66)
		{
			bLocal_66 = true;
			num = 1;
		}
	}

	if (func_36())
	{
		if (!bLocal_73)
		{
			bLocal_73 = true;
			num = 1;
		}
	}

	echLocal_64 = _GET_CURRENT_PLAYER_CHARACTER();

	if (echLocal_64 != echLocal_63)
	{
		echLocal_63 = echLocal_64;
		bLocal_65 = true;
		num = 1;
	}

	bLocal_46 = bLocal_45;

	if (func_10(130))
		bLocal_45 = true;

	if (func_10(131))
		bLocal_45 = false;

	if (bLocal_45 != bLocal_46)
	{
		if (!bLocal_72)
			num = 1;
	
		bLocal_72 = true;
	}

	return num;
}

BOOL func_36() // Position - 0x1A07
{
	int num;

	if (unk_0x055111B11E6624FD(unk_0xF2CFBB1105511E1A(unk_0x5DC3DCA82C806319()), 0))
		return false;

	num = unk_0x41AD4BF315E01D41(unk_0xF2CFBB1105511E1A(unk_0x5DC3DCA82C806319()));

	if (iLocal_51 != num)
	{
		iLocal_51 = num;
	
		if (num == 0 || func_37(num))
			bLocal_50 = true;
		else
			bLocal_50 = false;
	
		return true;
	}

	return false;
}

BOOL func_37(int iParam0) // Position - 0x1A5D
{
	int i;

	i = 0;

	for (i = 0; i <= 60; i = i + 1)
	{
		if (Global_30[i] == iParam0)
			return true;
	}

	return false;
}

BOOL func_38() // Position - 0x1A8C
{
	if (bLocal_52 != func_21(0))
	{
		bLocal_52 = func_21(0);
		return true;
	}

	return false;
}

BOOL func_39() // Position - 0x1AAA
{
	BOOL flag;

	flag = Global_38595;
	Global_38595 = false;
	flag;
	return flag;
}

BOOL func_40() // Position - 0x1AC2
{
	if (unk_0x83C5A442AAD15BAF(unk_0x5DC3DCA82C806319()) != uLocal_49)
	{
		uLocal_49 = unk_0x83C5A442AAD15BAF(unk_0x5DC3DCA82C806319());
		return true;
	}

	return false;
}

BOOL func_41() // Position - 0x1AE6
{
	if (Global_43257 != 15)
		return false;

	if (unk_0x30DFE1FFD2CC7420() != uLocal_48)
	{
		uLocal_48 = unk_0x30DFE1FFD2CC7420();
		return true;
	}

	return false;
}

void func_42() // Position - 0x1B0E
{
	bLocal_65 = false;
	bLocal_66 = false;
	bLocal_67 = false;
	bLocal_68 = false;
	bLocal_69 = false;
	bLocal_70 = false;
	bLocal_71 = false;
	bLocal_72 = false;
	bLocal_73 = false;
	return;
}

void func_43() // Position - 0x1B31
{
	if (func_44(0) == true && !func_32(6))
	{
		func_8(112, true, false);
		func_8(113, true, false);
		func_8(114, true, false);
	}

	return;
}

BOOL func_44(int iParam0) // Position - 0x1B66
{
	if (iParam0 == 94 || iParam0 == -1)
		return false;

	return Global_113648.f_9087.f_330[iParam0 /*6*/];
}

void func_45() // Position - 0x1B92
{
	if (func_44(0) == true && !func_32(6))
	{
		func_8(156, 1, false);
		func_8(157, true, false);
		func_8(161, true, false);
		func_8(160, true, false);
		func_8(158, true, false);
		func_12(158);
		func_8(159, true, false);
		func_12(159);
	}

	return;
}

void func_46(int iParam0, BOOL bParam1) // Position - 0x1BEB
{
	int num;

	num = iParam0;

	if (num < 0 || num >= 263 || iParam0 == 263)
		return;

	if (bParam1 == IS_BIT_SET(Global_32543[num /*23*/].f_11, 2))
		return;

	if (bParam1)
		unk_0xECDAB41968FF21A8(&(Global_32543[num /*23*/].f_11), 2);
	else
		unk_0x061B1200C95204CB(&(Global_32543[num /*23*/].f_11), 2);

	if (Global_32540 == true)
		Global_32541 = 1;

	Global_32540 = true;
	unk_0xECDAB41968FF21A8(&(Global_32543[num /*23*/].f_11), 18);
	return;
}

void func_47(int iParam0, char* sParam1) // Position - 0x1C6E
{
	int num;

	num = iParam0;

	if (num < 0 || num >= 263 || iParam0 == 263)
		return;

	TEXT_LABEL_ASSIGN_STRING(&(Global_32543[num /*23*/].f_20), sParam1, 8);

	if (unk_0xCE4AAA035282336C(Global_32543[num /*23*/].f_19))
		unk_0x4049FDC177C92D4B(Global_32543[num /*23*/].f_19, sParam1);

	return;
}

char* func_48(int iParam0) // Position - 0x1CC8
{
	switch (iParam0)
	{
		case 0:
			return "SB_SAL" /*Barber Shop*/;
	
		case 1:
			return "SB_BAR" /*Barber Shop*/;
	
		case 2:
			return "SB_BAR" /*Barber Shop*/;
	
		case 3:
			return "SB_BAR" /*Barber Shop*/;
	
		case 4:
			return "SB_BAR" /*Barber Shop*/;
	
		case 5:
			return "SB_BAR" /*Barber Shop*/;
	
		case 6:
			return "SB_BAR" /*Barber Shop*/;
	
		case 7:
			return func_49(iParam0, 0, false);
	
		case 8:
			return func_49(iParam0, 0, false);
	
		case 9:
			return func_49(iParam0, 0, false);
	
		case 10:
			return func_49(iParam0, 0, false);
	
		case 11:
			return func_49(iParam0, 0, false);
	
		case 12:
			return func_49(iParam0, 0, false);
	
		case 13:
			return func_49(iParam0, 0, false);
	
		case 14:
			return func_49(iParam0, 0, false);
	
		case 15:
			return func_49(iParam0, 0, false);
	
		case 16:
			return func_49(iParam0, 0, false);
	
		case 17:
			return func_49(iParam0, 0, false);
	
		case 18:
			return func_49(iParam0, 0, false);
	
		case 19:
			return func_49(iParam0, 0, false);
	
		case 20:
			return func_49(iParam0, 0, false);
	
		case 21:
			return func_49(iParam0, 0, false);
	
		case 22:
			return "SB_TAT" /*Tattoo Parlor*/;
	
		case 23:
			return "SB_TAT" /*Tattoo Parlor*/;
	
		case 24:
			return "SB_TAT" /*Tattoo Parlor*/;
	
		case 25:
			return "SB_TAT" /*Tattoo Parlor*/;
	
		case 26:
			return "SB_TAT" /*Tattoo Parlor*/;
	
		case 27:
			return "SB_TAT" /*Tattoo Parlor*/;
	
		case 28:
			return "SB_AMU2" /*Ammu-Nation with Range*/;
	
		case 29:
			return "SB_AMU" /*Ammu-Nation*/;
	
		case 30:
			return "SB_AMU" /*Ammu-Nation*/;
	
		case 31:
			return "SB_AMU" /*Ammu-Nation*/;
	
		case 32:
			return "SB_AMU" /*Ammu-Nation*/;
	
		case 33:
			return "SB_AMU" /*Ammu-Nation*/;
	
		case 34:
			return "SB_AMU" /*Ammu-Nation*/;
	
		case 35:
			return "SB_AMU" /*Ammu-Nation*/;
	
		case 36:
			return "SB_AMU" /*Ammu-Nation*/;
	
		case 37:
			return "SB_AMU" /*Ammu-Nation*/;
	
		case 38:
			return "SB_AMU2" /*Ammu-Nation with Range*/;
	
		case 39:
			return func_49(iParam0, 0, false);
	
		case 40:
			return func_49(iParam0, 0, false);
	
		case 41:
			return func_49(iParam0, 0, false);
	
		case 42:
			return func_49(iParam0, 0, false);
	
		case 43:
			return func_49(iParam0, 0, false);
	
		case 44:
			return func_49(iParam0, 0, false);
	
		case 45:
			return func_49(iParam0, 0, false);
	
		case 46:
			return "SB_AMU" /*Ammu-Nation*/;
	
		case 47:
			return "SB_AMU" /*Ammu-Nation*/;
	
		case 48:
			return "SB_AMU" /*Ammu-Nation*/;
	
		case 49:
			return "SB_AMU" /*Ammu-Nation*/;
	
		case 52:
			return "SB_AMU" /*Ammu-Nation*/;
	
		case 50:
			return "SB_BAR" /*Barber Shop*/;
	
		case 51:
			return "S_CL_BL" /*Casino Store*/;
	
		case 53:
			return "SB_AMU" /*Ammu-Nation*/;
	
		case 54:
			return "SB_TAT" /*Tattoo Parlor*/;
	
		case 55:
			return func_49(iParam0, 0, false);
	
		case 56:
			return "SB_AMU" /*Ammu-Nation*/;
	
		case 57:
			return func_49(iParam0, 0, false);
	
		case 58:
			return func_49(iParam0, 0, false);
	
		case 59:
			return "SB_AMU" /*Ammu-Nation*/;
	}

	return "SHOP_BLIP_INV";
}

char* func_49(int iParam0, int iParam1, BOOL bParam2) // Position - 0x20EE
{
	switch (iParam0)
	{
		case -1:
			return "S_N_EM" /*Empty Shop*/;
	
		case 0:
			return "S_H_01" /*Bob Mulét Hair & Beauty*/;
	
		case 1:
			return "S_H_02" /*Herr Kutz Barber*/;
	
		case 2:
			return "S_H_03" /*Beachcombover Barbers*/;
	
		case 3:
			return "S_H_04" /*O'Sheas Barbers*/;
	
		case 4:
			return "S_H_05" /*Herr Kutz Barber*/;
	
		case 5:
			return "S_H_06" /*Hair On Hawick Barbers*/;
	
		case 6:
			return "S_H_07" /*Herr Kutz Barber*/;
	
		case 7:
			return "S_CL_01" /*Discount Store*/;
	
		case 8:
			return "S_CL_02" /*Discount Store*/;
	
		case 9:
			return "S_CL_03" /*Binco Clothing*/;
	
		case 10:
			return "S_CL_04" /*Discount Store*/;
	
		case 11:
			return "S_CL_05" /*Discount Store*/;
	
		case 12:
			return "S_CL_06" /*Binco Clothing*/;
	
		case 13:
			return "S_CL_07" /*Discount Store*/;
	
		case 14:
			return "S_CM_01" /*Suburban*/;
	
		case 15:
			return "S_CM_03" /*Suburban*/;
	
		case 16:
			return "S_CM_04" /*Suburban*/;
	
		case 17:
			return "S_CM_05" /*Suburban*/;
	
		case 18:
			return "S_CH_01" /*Ponsonbys*/;
	
		case 19:
			return "S_CH_02" /*Ponsonbys*/;
	
		case 20:
			return "S_CH_03" /*Ponsonbys*/;
	
		case 21:
			return "S_CA_01" /*Vespucci Movie Masks*/;
	
		case 22:
			return "S_T_01" /*Blazing Tattoo*/;
	
		case 23:
			return "S_T_02" /*Alamo Tattoo Studio*/;
	
		case 24:
			return "S_T_03" /*Paleto Tattoo Studio*/;
	
		case 25:
			return "S_T_04" /*The Pit*/;
	
		case 26:
			return "S_T_05" /*Los Santos Tattoos*/;
	
		case 27:
			return "S_T_06" /*Ink Inc Tattoos*/;
	
		case 28:
			return "S_G_01" /*Ammu-Nation*/;
	
		case 29:
			return "S_G_02" /*Ammu-Nation*/;
	
		case 30:
			return "S_G_03" /*Ammu-Nation*/;
	
		case 31:
			return "S_G_04" /*Ammu-Nation*/;
	
		case 32:
			return "S_G_05" /*Ammu-Nation*/;
	
		case 33:
			return "S_G_06" /*Ammu-Nation*/;
	
		case 34:
			return "S_G_07" /*Ammu-Nation*/;
	
		case 35:
			return "S_G_08" /*Ammu-Nation*/;
	
		case 36:
			return "S_G_09" /*Ammu-Nation*/;
	
		case 37:
			return "S_G_10" /*Ammu-Nation*/;
	
		case 38:
			return "S_G_11" /*Ammu-Nation*/;
	
		case 39:
			return "S_MO_01" /*Los Santos Customs*/;
	
		case 40:
			return "S_MO_05" /*Los Santos Customs*/;
	
		case 41:
			return "S_MO_06" /*Los Santos Customs*/;
	
		case 42:
			return "S_MO_07" /*Beeker's Garage*/;
	
		case 43:
			return "S_MO_08" /*Los Santos Customs*/;
	
		case 44:
			return "S_MO_09" /*Benny's Original Motor Works*/;
	
		case 45:
			switch (iParam1)
			{
				case 4:
					if (bParam2)
						return "PERSONAL_CAR_MOD_VARIATION_BIKER_ONE";
					else
						return "S_MO_10" /*Custom Mod Shop*/;
					break;
			
				case 5:
					if (bParam2)
						return "PERSONAL_CAR_MOD_VARIATION_BIKER_TWO";
					else
						return "S_MO_10" /*Custom Mod Shop*/;
					break;
			
				case 11:
					if (bParam2)
						return "PERSONAL_CAR_MOD_VARIATION_BUNKER";
					else
						return "S_MO_B" /*Bunker Vehicle Workshop*/;
					break;
			
				case 10:
					if (bParam2)
						return "PERSONAL_CAR_MOD_VARIATION_TRUCK";
					else
						return "S_MO_T" /*Weapon & Vehicle Workshop*/;
					break;
			
				case 12:
					if (bParam2)
						return "PERSONAL_CAR_MOD_VARIATION_HANGAR";
					else
						return "S_MO_HA" /*Hangar Aircraft Workshop*/;
					break;
			
				case 13:
					if (bParam2)
						return "PERSONAL_CAR_MOD_VARIATION_AOC";
					else
						return "S_MO_AOC" /*Vehicle Workshop*/;
					break;
			
				case 14:
					if (bParam2)
						return "PERSONAL_CAR_MOD_VARIATION_BASE";
					else
						return "S_MO_AOC" /*Vehicle Workshop*/;
					break;
			
				case 15:
					if (bParam2)
						return "PERSONAL_CAR_MOD_VARIATION_BUSINESS_HUB";
					else
						return "S_MO_AOC" /*Vehicle Workshop*/;
					break;
			
				case 16:
					if (bParam2)
						return "PERSONAL_CAR_MOD_VARIATION_HACKER_TRUCK";
					else
						return "S_MO_AOC" /*Vehicle Workshop*/;
					break;
			
				case 17:
					if (bParam2)
						return "PERSONAL_CAR_MOD_VARIATION_ARENA_WARS";
					else
						return "S_MO_AOC" /*Vehicle Workshop*/;
					break;
			
				case 18:
					if (bParam2)
						return "PERSONAL_CAR_MOD_VARIATION_CAR_MEET";
					else
						return "S_MO_AOC" /*Vehicle Workshop*/;
					break;
			
				case 19:
					if (bParam2)
						return "PERSONAL_CAR_MOD_VARIATION_TUNER_AUTO_SHOP";
					else
						return "S_MO_AOC" /*Vehicle Workshop*/;
					break;
			
				case 20:
					if (bParam2)
						return "PERSONAL_CAR_MOD_VARIATION_FIXER_HQ";
					else
						return "S_MO_AOC" /*Vehicle Workshop*/;
					break;
			
				case 21:
					if (bParam2)
						return "PERSONAL_CAR_MOD_VARIATION_JUGGALO_HIDEOUT";
					else
						return "S_MO_AOC" /*Vehicle Workshop*/;
					break;
			}
		
			return "S_MO_11" /*Custom Auto Shop*/;
	
		case 46:
			return "S_G_12" /*MOC Armory*/;
	
		case 47:
			return "S_G_13" /*Avenger Armory*/;
	
		case 48:
			return "S_G_14" /*Terrorbyte Armory*/;
	
		case 49:
			return "S_G_15" /*Arena Armory*/;
	
		case 52:
			return "S_G_16" /*Arcade Armory*/;
	
		case 53:
			return "S_G_17" /*Kosatka Armory*/;
	
		case 50:
			return "S_H_08" /*Penthouse Barber*/;
	
		case 51:
			return "S_CL_09" /*Casino Store*/;
	
		case 54:
			return "S_T_07" /*LS Car Meet Tattoos*/;
	
		case 55:
			return "S_CL_10" /*Merch Shop*/;
	
		case 56:
			return "S_G_18" /*Fixer Armory*/;
	
		case 57:
			return "S_CL_11" /*Record A Studios*/;
	
		case 58:
			return "S_G_19";
	
		case 59:
			return "S_G_20";
	}

	return "SHOP_NAME_EMPTY";
}

int func_50(int iParam0) // Position - 0x268A
{
	switch (iParam0)
	{
		case -1:
			return 263;
	
		case 0:
			return 19;
	
		case 1:
			return 20;
	
		case 2:
			return 21;
	
		case 3:
			return 22;
	
		case 4:
			return 23;
	
		case 5:
			return 24;
	
		case 6:
			return 25;
	
		case 7:
			return 26;
	
		case 8:
			return 27;
	
		case 9:
			return 28;
	
		case 10:
			return 29;
	
		case 11:
			return 30;
	
		case 12:
			return 31;
	
		case 13:
			return 32;
	
		case 14:
			return 33;
	
		case 15:
			return 35;
	
		case 16:
			return 36;
	
		case 17:
			return 37;
	
		case 18:
			return 38;
	
		case 19:
			return 39;
	
		case 20:
			return 40;
	
		case 21:
			return 41;
	
		case 22:
			return 42;
	
		case 23:
			return 43;
	
		case 24:
			return 44;
	
		case 25:
			return 45;
	
		case 26:
			return 46;
	
		case 27:
			return 47;
	
		case 28:
			return 48;
	
		case 29:
			return 49;
	
		case 30:
			return 50;
	
		case 31:
			return 51;
	
		case 32:
			return 52;
	
		case 33:
			return 53;
	
		case 34:
			return 54;
	
		case 35:
			return 55;
	
		case 36:
			return 56;
	
		case 37:
			return 57;
	
		case 38:
			return 58;
	
		case 39:
			return 59;
	
		case 40:
			return 60;
	
		case 41:
			return 61;
	
		case 42:
			return 62;
	
		case 43:
			return 63;
	
		case 44:
			return 64;
	
		case 45:
			return 64;
	
		case 46:
			return 48;
	
		case 47:
			return 48;
	
		case 48:
			return 48;
	
		case 49:
			return 48;
	
		case 52:
			return 48;
	
		case 50:
			return 25;
	
		case 51:
			return 40;
	
		case 53:
			return 48;
	
		case 54:
			return 42;
	
		case 55:
			return 40;
	
		case 56:
			return 48;
	
		case 57:
			return 40;
	
		case 58:
			return 48;
	
		case 59:
			return 48;
	
		default:
			break;
	}

	return 263;
}

BOOL func_51(int iParam0) // Position - 0x29F6
{
	switch (iParam0)
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
		case 5:
		case 6:
		case 7:
		case 8:
		case 9:
		case 10:
		case 11:
		case 12:
		case 13:
		case 14:
		case 15:
		case 16:
		case 17:
		case 18:
		case 19:
		case 20:
		case 21:
		case 22:
		case 23:
		case 24:
		case 25:
		case 26:
		case 27:
		case 28:
		case 29:
		case 30:
		case 31:
		case 32:
		case 33:
		case 34:
		case 35:
		case 36:
		case 37:
		case 38:
		case 39:
		case 40:
		case 41:
		case 42:
		case 43:
			return true;
	
		case 44:
			break;
	}

	return false;
}

void func_52() // Position - 0x2B1E
{
	unk_0x675D9C12C73D3DE7();
	return;
}

