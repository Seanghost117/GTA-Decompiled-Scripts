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
	int iLocal_18 = 0;
	eCharacter echLocal_19 = CHAR_MICHAEL;
	var uLocal_20 = 0;
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

	if (unk_0x55EEDBBFDC6E810F(2) || unk_0xE68F132454F8CEEA())
		unk_0x675D9C12C73D3DE7();

	func_1();
	return;
}

void func_1() // Position - 0x4F
{
	var unk;
	var unk4;

	while (!func_9(&uLocal_20))
	{
		SYSTEM::WAIT(0);
	}

	if (!unk_0x66599E73DBA5A850(uLocal_20))
	{
		if (!Global_97176)
		{
			unk_0x85BAE84748AD1A23(uLocal_20, 1, 1);
		
			if (unk_0xF5F493B789EA063E(uLocal_20, joaat("SCRIPT_TASK_ANY")) != 7)
				unk_0x909F139DC199D8E0(uLocal_20);
		
			unk = { unk_0x30BE8A934C020461(unk_0xC1A5EC5C986B98AD(), 0) };
			unk_0xC5B2830898581862(uLocal_20, 1);
			unk_0xDBC7406226B5540E(&unk4);
		
			if (!unk_0x3C3D6D026CF7F51B(uLocal_20, 0))
				if (!unk_0xB8C39D031C377E33(uLocal_20, 0) && !unk_0x3C3D6D026CF7F51B(uLocal_20, 0))
					unk_0x195020A03AE6C628(0, unk, 6000);
		
			unk_0x952D2B8A054C4FF8(0, unk, 6000, 0, 2);
			unk_0xF2CFC6EC8C85FA78(unk4);
			unk_0x3D7110D966B0CEA2(uLocal_20, unk4);
		}
	
		func_2(uLocal_20);
	}

	while (!unk_0x72474BA05A104E1E())
	{
		SYSTEM::WAIT(0);
	}

	if (unk_0x7DE17ACDD8BA2642(uLocal_20))
	{
		if (!unk_0x66599E73DBA5A850(uLocal_20))
			unk_0x71A535529C1CA5DF(uLocal_20, 1);
	
		unk_0x1EEF71E3CDD868D3(&uLocal_20);
	}

	Global_97176 = false;
	unk_0x675D9C12C73D3DE7();
	return;
}

void func_2(var uParam0) // Position - 0x13C
{
	int num;

	num = unk_0xA5E11AF0A2B928C1() + 1000;

	while (unk_0xA5E11AF0A2B928C1() < num && !unk_0x72474BA05A104E1E())
	{
		SYSTEM::WAIT(0);
	}

	if (!unk_0x66599E73DBA5A850(uParam0))
	{
		if (echLocal_19 == CHAR_FRANKLIN)
		{
			switch (_GET_PLAYER_CHARACTER_FROM_PED(unk_0xC1A5EC5C986B98AD()))
			{
				case CHAR_TREVOR:
					func_3(uParam0, "BUDDY_SEES_TREVOR_DEATH", "FRANKLIN_NORMAL", 3);
					break;
			
				case CHAR_MICHAEL:
					func_3(uParam0, "BUDDY_SEES_MICHAEL_DEATH", "FRANKLIN_NORMAL", 3);
					break;
			}
		}
		else if (echLocal_19 == CHAR_TREVOR)
		{
			switch (_GET_PLAYER_CHARACTER_FROM_PED(unk_0xC1A5EC5C986B98AD()))
			{
				case CHAR_FRANKLIN:
					func_3(uParam0, "BUDDY_SEES_FRANKLIN_DEATH", "TREVOR_NORMAL", 3);
					break;
			
				case CHAR_MICHAEL:
					func_3(uParam0, "BUDDY_SEES_MICHAEL_DEATH", "TREVOR_NORMAL", 3);
					break;
			}
		}
		else if (echLocal_19 == CHAR_MICHAEL)
		{
			switch (_GET_PLAYER_CHARACTER_FROM_PED(unk_0xC1A5EC5C986B98AD()))
			{
				case CHAR_TREVOR:
					func_3(uParam0, "BUDDY_SEES_TREVOR_DEATH", "MICHAEL_NORMAL", 3);
					break;
			
				case CHAR_FRANKLIN:
					func_3(uParam0, "BUDDY_SEES_FRANKLIN_DEATH", "MICHAEL_NORMAL", 3);
					break;
			}
		}
	}

	return;
}

void func_3(var uParam0, char* sParam1, char* sParam2, int iParam3) // Position - 0x234
{
	unk_0xB7C28610A558761B(uParam0, sParam1, sParam2, func_4(iParam3), 0);
	return;
}

char* func_4(int iParam0) // Position - 0x24D
{
	char* str;

	switch (iParam0)
	{
		case 0:
			return "SPEECH_PARAMS_STANDARD";
	
		case 1:
			return "SPEECH_PARAMS_ALLOW_REPEAT";
	
		case 2:
			return "SPEECH_PARAMS_BEAT";
	
		case 3:
			return "SPEECH_PARAMS_FORCE";
	
		case 4:
			return "SPEECH_PARAMS_FORCE_FRONTEND";
	
		case 5:
			return "SPEECH_PARAMS_FORCE_NO_REPEAT_FRONTEND";
	
		case 6:
			return "SPEECH_PARAMS_FORCE_NORMAL";
	
		case 7:
			return "SPEECH_PARAMS_FORCE_NORMAL_CLEAR";
	
		case 8:
			return "SPEECH_PARAMS_FORCE_NORMAL_CRITICAL";
	
		case 9:
			return "SPEECH_PARAMS_FORCE_SHOUTED";
	
		case 10:
			return "SPEECH_PARAMS_FORCE_SHOUTED_CLEAR";
	
		case 11:
			return "SPEECH_PARAMS_FORCE_SHOUTED_CRITICAL";
	
		case 12:
			return "SPEECH_PARAMS_FORCE_PRELOAD_ONLY";
	
		case 13:
			return "SPEECH_PARAMS_MEGAPHONE";
	
		case 14:
			return "SPEECH_PARAMS_HELI";
	
		case 15:
			return "SPEECH_PARAMS_FORCE_MEGAPHONE";
	
		case 16:
			return "SPEECH_PARAMS_FORCE_HELI";
	
		case 17:
			return "SPEECH_PARAMS_INTERRUPT";
	
		case 18:
			return "SPEECH_PARAMS_INTERRUPT_SHOUTED";
	
		case 19:
			return "SPEECH_PARAMS_INTERRUPT_SHOUTED_CLEAR";
	
		case 20:
			return "SPEECH_PARAMS_INTERRUPT_SHOUTED_CRITICAL";
	
		case 21:
			return "SPEECH_PARAMS_INTERRUPT_NO_FORCE";
	
		case 22:
			return "SPEECH_PARAMS_INTERRUPT_FRONTEND";
	
		case 23:
			return "SPEECH_PARAMS_INTERRUPT_NO_FORCE_FRONTEND";
	
		case 24:
			return "SPEECH_PARAMS_ADD_BLIP";
	
		case 25:
			return "SPEECH_PARAMS_ADD_BLIP_ALLOW_REPEAT";
	
		case 26:
			return "SPEECH_PARAMS_ADD_BLIP_FORCE";
	
		case 27:
			return "SPEECH_PARAMS_ADD_BLIP_SHOUTED";
	
		case 28:
			return "SPEECH_PARAMS_ADD_BLIP_SHOUTED_FORCE";
	
		case 29:
			return "SPEECH_PARAMS_ADD_BLIP_INTERRUPT";
	
		case 30:
			return "SPEECH_PARAMS_ADD_BLIP_INTERRUPT_FORCE";
	
		case 31:
			return "SPEECH_PARAMS_FORCE_PRELOAD_ONLY_SHOUTED";
	
		case 32:
			return "SPEECH_PARAMS_FORCE_PRELOAD_ONLY_SHOUTED_CLEAR";
	
		case 33:
			return "SPEECH_PARAMS_FORCE_PRELOAD_ONLY_SHOUTED_CRITICAL";
	
		case 34:
			return "SPEECH_PARAMS_SHOUTED";
	
		case 35:
			return "SPEECH_PARAMS_SHOUTED_CLEAR";
	
		case 36:
			return "SPEECH_PARAMS_SHOUTED_CRITICAL";
	
		default:
		
	}

	str = 0;
	return str;
}

eCharacter _GET_PLAYER_CHARACTER_FROM_PED(int iParam0) // Position - 0x43C
{
	eCharacter i;
	int num;

	if (unk_0x7DE17ACDD8BA2642(iParam0))
	{
		num = unk_0x504B9BB48D41C264(iParam0);
	
		for (i = CHAR_MICHAEL; i <= CHAR_TREVOR; i = i + 1)
		{
			if (_GET_CHARACTER_MODEL(i) == num)
				return i;
		}
	}

	return _CHAR_NULL;
}

int _GET_CHARACTER_MODEL(eCharacter character) // Position - 0x479
{
	if (func_8(character))
		return func_7(character);
	else
		character != _CHAR_NULL;

	return 0;
}

int func_7(eCharacter echParam0) // Position - 0x49E
{
	return Global_2028[echParam0 /*29*/];
}

BOOL func_8(eCharacter echParam0) // Position - 0x4AD
{
	return echParam0 < CHAR_MULTIPLAYER;
}

BOOL func_9(var uParam0) // Position - 0x4B9
{
	var unk;

	for (iLocal_18 = 0; iLocal_18 < 9; iLocal_18 = iLocal_18 + 1)
	{
		if (unk_0x7DE17ACDD8BA2642(Global_98050[iLocal_18]) && !unk_0x66599E73DBA5A850(Global_98050[iLocal_18]))
		{
			if (Global_98050[iLocal_18] != unk_0xC1A5EC5C986B98AD())
			{
				if (!unk_0x1AFE963DA61006ED(Global_98050[iLocal_18]))
				{
					if (unk_0x3C3D6D026CF7F51B(Global_98050[iLocal_18], 0) || !unk_0xDC116D955A63BDBE(Global_98050[iLocal_18]))
					{
						if (unk_0x2E496FE654DA4166(unk_0x30BE8A934C020461(Global_98050[iLocal_18], 1), unk_0x30BE8A934C020461(unk_0xC1A5EC5C986B98AD(), 0), 1) < 10f)
						{
							echLocal_19 = _GET_PLAYER_CHARACTER_FROM_PED(Global_98050[iLocal_18]);
						
							if (echLocal_19 == CHAR_MICHAEL || echLocal_19 == CHAR_TREVOR || echLocal_19 == CHAR_FRANKLIN)
							{
								if (echLocal_19 != _GET_CURRENT_PLAYER_CHARACTER())
								{
									if (unk_0xC832FC847E3442DA(Global_98050[iLocal_18], unk_0xC1A5EC5C986B98AD(), 17))
									{
										if (unk_0x3C3D6D026CF7F51B(Global_98050[iLocal_18], 0))
											unk = unk_0x95DC39736F6748E3(Global_98050[iLocal_18], 0);
									
										if (unk_0x7DE17ACDD8BA2642(unk) && unk_0xFBD273FDBCF0C5BD(unk, 0) || !unk_0x7DE17ACDD8BA2642(unk))
										{
											*uParam0 = Global_98050[iLocal_18];
											return true;
										}
									}
								}
							}
						}
					}
				}
			}
		}
	}

	if (unk_0x72474BA05A104E1E())
		return true;

	return false;
}

eCharacter _GET_CURRENT_PLAYER_CHARACTER() // Position - 0x5FE
{
	func_11();
	return Global_113648.f_2365.f_539.f_4321;
}

void func_11() // Position - 0x617
{
	eCharacter character;

	if (unk_0x7DE17ACDD8BA2642(unk_0xC1A5EC5C986B98AD()))
	{
		if (_GET_CHARACTER_MODEL(Global_113648.f_2365.f_539.f_4321) != unk_0x504B9BB48D41C264(unk_0xC1A5EC5C986B98AD()))
		{
			character = _GET_PLAYER_CHARACTER_FROM_PED(unk_0xC1A5EC5C986B98AD());
		
			if (func_8(character) && !func_12(14) || Global_112599)
			{
				if (Global_113648.f_2365.f_539.f_4321 != character && func_8(Global_113648.f_2365.f_539.f_4321))
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

BOOL func_12(int iParam0) // Position - 0x714
{
	return Global_43257 == iParam0;
}

