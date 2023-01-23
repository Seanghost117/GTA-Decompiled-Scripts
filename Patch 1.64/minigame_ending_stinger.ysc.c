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
#endregion

void main() // Position - 0x0
{
	int num;
	BOOL flag;

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
	num = -1;
	flag = false;

	if (unk_0x55EEDBBFDC6E810F(3))
		func_5();

	while (true)
	{
		if (!flag)
		{
			switch (_GET_PLAYER_CHARACTER_FROM_PED(unk_0xC1A5EC5C986B98AD()))
			{
				case CHAR_FRANKLIN:
					if (unk_0xF379D4FB3767B7FF("MISSION_COMPLETE_FRANKLIN_SMALL", 0))
					{
						unk_0xF3F6D34F64B84749();
						flag = true;
					}
					break;
			
				case CHAR_TREVOR:
					if (unk_0xF379D4FB3767B7FF("MISSION_COMPLETE_TREVOR_SMALL", 0))
					{
						unk_0xF3F6D34F64B84749();
						flag = true;
					}
					break;
			
				default:
					if (unk_0xF379D4FB3767B7FF("MISSION_COMPLETE_MICHAEL_SMALL", 0))
					{
						unk_0xF3F6D34F64B84749();
						flag = true;
					}
					break;
			}
		}
		else if (num == -1)
		{
			num = unk_0xA5E11AF0A2B928C1();
		}
		else if (unk_0xA5E11AF0A2B928C1() > num + 8000)
		{
			func_5();
		}
	
		SYSTEM::WAIT(0);
	}

	return;
}

eCharacter _GET_PLAYER_CHARACTER_FROM_PED(var uParam0) // Position - 0xD2
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

int _GET_CHARACTER_MODEL(eCharacter character) // Position - 0x10F
{
	if (func_4(character))
		return func_3(character);
	else
		character != _CHAR_NULL;

	return 0;
}

int func_3(eCharacter echParam0) // Position - 0x134
{
	return Global_2028[echParam0 /*29*/];
}

BOOL func_4(eCharacter echParam0) // Position - 0x143
{
	return echParam0 < CHAR_MULTIPLAYER;
}

void func_5() // Position - 0x14F
{
	unk_0x0AED5D631A4A1C97();
	unk_0x675D9C12C73D3DE7();
	return;
}

