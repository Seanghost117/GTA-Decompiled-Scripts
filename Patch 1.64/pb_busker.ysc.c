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
	var uLocal_29 = 0;
	var uLocal_30 = 0;
	float fLocal_31 = 0f;
	float fLocal_32 = 0f;
	float fLocal_33 = 0f;
	var uLocal_34 = 0;
	var uLocal_35 = 0;
	var uLocal_36 = 0;
	var uLocal_37 = 0;
	var uLocal_38 = 0;
	int iLocal_39 = 0;
	int iLocal_40 = 0;
	int iLocal_41 = 0;
	int iLocal_42 = 0;
	int iLocal_43 = 0;
	int iLocal_44 = 0;
	var uLocal_45 = 0;
	var uLocal_46 = 0;
	var uLocal_47 = 0;
	var uLocal_48 = 0;
	var uLocal_49 = 0;
	var uLocal_50 = 0;
	int iLocal_51 = 0;
	var uLocal_52 = 0;
	var uLocal_53 = 0;
	var uLocal_54 = 0;
	var uScriptParam_0 = 0;
	var uScriptParam_1 = 5;
	var uScriptParam_2 = 0;
	var uScriptParam_3 = 0;
	var uScriptParam_4 = 0;
	var uScriptParam_5 = 0;
	var uScriptParam_6 = 0;
	var uScriptParam_7 = 0;
	var uScriptParam_8 = 0;
	var uScriptParam_9 = 0;
	var uScriptParam_10 = 0;
	var uScriptParam_11 = 0;
	var uScriptParam_12 = 0;
	var uScriptParam_13 = 0;
	var uScriptParam_14 = 0;
	var uScriptParam_15 = 0;
	var uScriptParam_16 = 0;
	var uScriptParam_17 = 5;
	var uScriptParam_18 = 0;
	var uScriptParam_19 = 0;
	var uScriptParam_20 = 0;
	var uScriptParam_21 = 0;
	var uScriptParam_22 = 0;
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
	iLocal_28 = 3;
	fLocal_31 = 80f;
	fLocal_32 = 140f;
	fLocal_33 = 180f;
	iLocal_39 = 1;
	iLocal_40 = 65;
	iLocal_41 = 49;
	iLocal_42 = 64;
	uLocal_45 = { uScriptParam_0.f_1[0 /*3*/] };
	func_23();
	unk_0x55EEDBBFDC6E810F(11);

	while (true)
	{
		SYSTEM::WAIT(0);
	
		if (unk_0xCBE2EC2868A6C438())
		{
			if (func_3(3))
			{
				switch (iLocal_43)
				{
					case 0:
						if (iLocal_44 == 1)
							iLocal_43 = 1;
						else
							func_2();
						break;
				
					case 1:
						if (iLocal_51 == 0)
							func_1();
						break;
				}
			}
			else
			{
				func_23();
			}
		}
		else
		{
			func_23();
		}
	}

	return;
}

void func_1() // Position - 0xE7
{
	if (SYSTEM::TIMERB() > 7000)
	{
		if (unk_0x1C4E4DC1EFE24DF1(unk_0xC1A5EC5C986B98AD(), uLocal_45, 10f, 10f, 10f, 0, 1, 0) && !unk_0x1C4E4DC1EFE24DF1(unk_0xC1A5EC5C986B98AD(), uLocal_45, 3f, 3f, 3f, 0, 1, 0))
		{
			SYSTEM::SETTIMERB(0);
			uLocal_48 = { unk_0x30BE8A934C020461(unk_0xC1A5EC5C986B98AD(), 1) };
			unk_0xDBC7406226B5540E(&uLocal_54);
			unk_0x195020A03AE6C628(0, uLocal_48, 0);
			unk_0x3EE48ADC8C7F5CC4(0, "amb@BUSKER", "SAX_loop_B", 8f, -8f, -1, 0, 0, 0, 0, 0);
			unk_0xF2CFC6EC8C85FA78(uLocal_54);
		
			if (!unk_0x055111B11E6624FD(uLocal_52, 0))
				unk_0x3D7110D966B0CEA2(uLocal_52, uLocal_54);
		
			unk_0x63EF69C6969A3D26(&uLocal_54);
		}
	
		if (unk_0x1C4E4DC1EFE24DF1(unk_0xC1A5EC5C986B98AD(), uLocal_45, 3f, 3f, 3f, 0, 1, 0))
		{
			uLocal_48 = { unk_0x30BE8A934C020461(unk_0xC1A5EC5C986B98AD(), 1) };
			SYSTEM::SETTIMERB(0);
			unk_0xDBC7406226B5540E(&uLocal_54);
			unk_0x195020A03AE6C628(0, uLocal_48, 0);
			unk_0x3EE48ADC8C7F5CC4(0, "amb@BUSKER", "SAX_loop_A", 8f, -8f, -1, 0, 0, 0, 0, 0);
			unk_0xF2CFC6EC8C85FA78(uLocal_54);
		
			if (!unk_0x055111B11E6624FD(uLocal_52, 0))
				unk_0x3D7110D966B0CEA2(uLocal_52, uLocal_54);
		
			unk_0x63EF69C6969A3D26(&uLocal_54);
		}
	}

	return;
}

void func_2() // Position - 0x1FD
{
	iLocal_51 = unk_0x15A88CFAAFFC6C4B(0, 2);

	if (unk_0x1C4E4DC1EFE24DF1(unk_0xC1A5EC5C986B98AD(), uLocal_45, 50f, 50f, 50f, 0, 1, 0))
	{
		unk_0x852EC2A7DE66202D(joaat("A_F_M_BevHills_02"));
		unk_0x852EC2A7DE66202D(joaat("G_M_Y_MexGoon_02"));
	
		while (!unk_0x0CBB7C273DED26E7(joaat("A_F_M_BevHills_02")) || !unk_0x0CBB7C273DED26E7(joaat("G_M_Y_MexGoon_02")))
		{
			SYSTEM::WAIT(0);
		}
	
		unk_0x28818732C8F0F80E("amb@BUSKER");
	
		while (!unk_0x2BBF749E555360DC("amb@BUSKER"))
		{
			SYSTEM::WAIT(0);
		}
	
		uLocal_48.f_2 = uLocal_45.f_2 - 1f;
		uLocal_52 = unk_0x69FDD9508259E5B5(19, joaat("G_M_Y_MexGoon_02"), uLocal_45, uLocal_45.f_1, uLocal_48.f_2, 0f, 1, 1);
	
		if (!unk_0x055111B11E6624FD(uLocal_52, 0))
		{
			unk_0xDBC7406226B5540E(&uLocal_54);
			unk_0x195020A03AE6C628(0, uLocal_48, 0);
			unk_0x3EE48ADC8C7F5CC4(0, "amb@BUSKER", "SAX_loop_A", 8f, -8f, -1, 1, 0, 0, 0, 0);
			unk_0xF2CFC6EC8C85FA78(uLocal_54);
			unk_0x3D7110D966B0CEA2(uLocal_52, uLocal_54);
			unk_0x63EF69C6969A3D26(&uLocal_54);
		}
	
		if (iLocal_51 == 1)
		{
			uLocal_48 = { unk_0x7394CB479CCA24AF(uLocal_52, 3.8f, 0.8f, 0f) };
			uLocal_53 = unk_0x69FDD9508259E5B5(5, joaat("A_F_M_BevHills_02"), uLocal_48, 0f, 1, 1);
		
			if (!unk_0x055111B11E6624FD(uLocal_53, 0))
				unk_0x195020A03AE6C628(uLocal_53, uLocal_45, 0);
		}
	
		iLocal_44 = 1;
	}

	return;
}

BOOL func_3(int iParam0) // Position - 0x331
{
	switch (iParam0)
	{
		case 0:
			return true;
	
		case 1:
			if (func_22(6) || func_22(7))
				return true;
			else
				return func_3(3);
			break;
	
		case 2:
			return true;
	
		case 3:
			if (_CAN_ENTER_FREEROAM_STATE(5))
				if (func_4(4))
					return true;
			break;
	}

	return false;
}

BOOL func_4(int iParam0) // Position - 0x3A3
{
	eCharacter character;

	if (unk_0x48DC6A21D1CAD89C(unk_0x93E99A2DBCBA9CFA()))
	{
		if (unk_0x7DE17ACDD8BA2642(unk_0xC1A5EC5C986B98AD()))
		{
			if (!unk_0x66599E73DBA5A850(unk_0xC1A5EC5C986B98AD()))
			{
				character = _GET_CURRENT_PLAYER_CHARACTER();
			
				if (!func_14(character))
					return false;
			
				switch (iParam0)
				{
					case 9:
					case 0:
						if (!unk_0xE2A83DCD3E79D8D3(unk_0x93E99A2DBCBA9CFA()) || unk_0xDA70CA6A0D1738D3(unk_0xC1A5EC5C986B98AD()) || unk_0x5CD470B5BDDAC029(unk_0xC1A5EC5C986B98AD()) || unk_0x48A4D45B3B4CEFFD(unk_0xC1A5EC5C986B98AD()) || unk_0x854821B2A72B2E98(unk_0xC1A5EC5C986B98AD()) || unk_0xF41A4983A3778F18(unk_0x93E99A2DBCBA9CFA(), 1) || unk_0x5150E13C3DAAE892(unk_0x93E99A2DBCBA9CFA()) || unk_0xB8C39D031C377E33(unk_0xC1A5EC5C986B98AD(), 0) || func_13() || Global_112695 || Global_32166 || func_12() || func_11(8, -1) || func_10() || func_9() || func_8() || func_7() || Global_113648.f_7690.f_919[character] == 5)
							return false;
						break;
				
					case 1:
						if (unk_0xF41A4983A3778F18(unk_0x93E99A2DBCBA9CFA(), 1) || func_13() || Global_32166 || func_12() || func_11(8, -1) || func_8() || func_10() || func_9() || func_7() || Global_113648.f_7690.f_919[character] == 5)
							return false;
						break;
				
					case 2:
						if (!unk_0xE2A83DCD3E79D8D3(unk_0x93E99A2DBCBA9CFA()) || unk_0xDA70CA6A0D1738D3(unk_0xC1A5EC5C986B98AD()) || unk_0x5CD470B5BDDAC029(unk_0xC1A5EC5C986B98AD()) || unk_0x48A4D45B3B4CEFFD(unk_0xC1A5EC5C986B98AD()) || unk_0x854821B2A72B2E98(unk_0xC1A5EC5C986B98AD()) || unk_0xF41A4983A3778F18(unk_0x93E99A2DBCBA9CFA(), 1) || unk_0x5150E13C3DAAE892(unk_0x93E99A2DBCBA9CFA()) || unk_0xB8C39D031C377E33(unk_0xC1A5EC5C986B98AD(), 0) || func_13() || Global_112695 || Global_32166 || func_12() || func_11(8, -1) || func_8() || func_10() || func_9() || func_7() || Global_113648.f_7690.f_919[character] == 5 || Global_43804 != -1)
							return false;
						break;
				
					case 3:
						if (unk_0x48A4D45B3B4CEFFD(unk_0xC1A5EC5C986B98AD()) || unk_0x854821B2A72B2E98(unk_0xC1A5EC5C986B98AD()) || unk_0xF41A4983A3778F18(unk_0x93E99A2DBCBA9CFA(), 1) || unk_0xB8C39D031C377E33(unk_0xC1A5EC5C986B98AD(), 0) || func_13() || Global_112695 || Global_32166 || func_12() || func_11(8, -1) || func_10() || func_9() || func_7() || Global_113648.f_7690.f_919[character] == 5)
							return false;
						break;
				
					case 4:
						if (func_13() || unk_0x83C5A442AAD15BAF(unk_0x93E99A2DBCBA9CFA()) > 0 || func_11(8, -1) || func_7() || func_6() || Global_113648.f_7690.f_919[character] == 5)
							return false;
						break;
				
					case 5:
						if (func_11(8, -1) || func_10() || func_9() || func_6() || func_5())
							return false;
					
						if (unk_0xB53553DC4AAC7D8A() && unk_0x728FB8B438DDCAB6() != 3 && unk_0x19B3485E7C9D734D() < 8)
							return false;
						break;
				
					case 6:
						if (unk_0x7DE17ACDD8BA2642(unk_0xC1A5EC5C986B98AD()))
							if (unk_0xB8C39D031C377E33(unk_0xC1A5EC5C986B98AD(), 0) || unk_0x83C5A442AAD15BAF(unk_0x93E99A2DBCBA9CFA()) > 0 || unk_0xDA70CA6A0D1738D3(unk_0xC1A5EC5C986B98AD()) || unk_0x48A4D45B3B4CEFFD(unk_0xC1A5EC5C986B98AD()) || unk_0x854821B2A72B2E98(unk_0xC1A5EC5C986B98AD()) || unk_0xF41A4983A3778F18(unk_0x93E99A2DBCBA9CFA(), 1) || unk_0x5150E13C3DAAE892(unk_0x93E99A2DBCBA9CFA()) || func_13() || Global_32166 || func_12() || func_11(8, -1) || func_9() || func_8() || func_7() || Global_113648.f_7690.f_919[character] == 5)
								return false;
						break;
				
					case 7:
						if (unk_0xB8C39D031C377E33(unk_0xC1A5EC5C986B98AD(), 0) || !unk_0x1B82EF141CC65934(unk_0x93E99A2DBCBA9CFA()) || !unk_0xE2A83DCD3E79D8D3(unk_0x93E99A2DBCBA9CFA()) || !unk_0x35DF833D93BCC488() || unk_0xDA70CA6A0D1738D3(unk_0xC1A5EC5C986B98AD()) || unk_0x48A4D45B3B4CEFFD(unk_0xC1A5EC5C986B98AD()) || unk_0x854821B2A72B2E98(unk_0xC1A5EC5C986B98AD()) || unk_0xF41A4983A3778F18(unk_0x93E99A2DBCBA9CFA(), 1) || func_13() || func_9() || Global_112695 || Global_32166 || func_12() || Global_44446 || func_11(8, -1) || func_8() || func_6() || func_7() || Global_113648.f_7690.f_919[character] == 5)
							return false;
						break;
				
					case 8:
						if (unk_0xB8C39D031C377E33(unk_0xC1A5EC5C986B98AD(), 0) || !unk_0x1B82EF141CC65934(unk_0x93E99A2DBCBA9CFA()) || !unk_0xE2A83DCD3E79D8D3(unk_0x93E99A2DBCBA9CFA()) || !unk_0x35DF833D93BCC488() || unk_0xF356C80F3E8D2812(unk_0x93E99A2DBCBA9CFA(), 0) || unk_0xDA70CA6A0D1738D3(unk_0xC1A5EC5C986B98AD()) || unk_0x3C3D6D026CF7F51B(unk_0xC1A5EC5C986B98AD(), 1) || unk_0x48A4D45B3B4CEFFD(unk_0xC1A5EC5C986B98AD()) || unk_0x854821B2A72B2E98(unk_0xC1A5EC5C986B98AD()) || unk_0x279D0BCF8F708D74(unk_0xC1A5EC5C986B98AD()) || unk_0xF41A4983A3778F18(unk_0x93E99A2DBCBA9CFA(), 1) || unk_0x5150E13C3DAAE892(unk_0x93E99A2DBCBA9CFA()) || func_13() || Global_112695 || Global_32166 || func_12() || func_11(8, -1) || func_8() || func_6() || func_10() || func_9() || func_7())
							return false;
						break;
				}
			}
			else
			{
				return false;
			}
		}
		else
		{
			return false;
		}
	}
	else
	{
		return false;
	}

	return true;
}

BOOL func_5() // Position - 0xAC0
{
	return Global_100720.f_1;
}

BOOL func_6() // Position - 0xACE
{
	if (Global_97603 != -1)
		return IS_BIT_SET(Global_91469[Global_97603 /*34*/].f_15, 13);

	return false;
}

BOOL func_7() // Position - 0xAF1
{
	if (unk_0x24B651D85CCE5EB4(joaat("player_timetable_scene")) > 0)
		return true;

	return false;
}

BOOL func_8() // Position - 0xB0B
{
	if (Global_78819)
		return true;
	else if (Global_63356 && !Global_63362)
		return true;

	return false;
}

BOOL func_9() // Position - 0xB35
{
	return Global_100733.f_388 > 0;
}

BOOL func_10() // Position - 0xB46
{
	return Global_100733.f_387 > 0;
}

BOOL func_11(int iParam0, int iParam1) // Position - 0xB57
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

BOOL func_12() // Position - 0xB8F
{
	return Global_1575060;
}

BOOL func_13() // Position - 0xB9B
{
	if (!unk_0xA26A9A07F761D8F8())
		return Global_98159.f_44 == 1;

	return false;
}

BOOL func_14(eCharacter echParam0) // Position - 0xBB7
{
	return echParam0 < CHAR_MULTIPLAYER;
}

eCharacter _GET_CURRENT_PLAYER_CHARACTER() // Position - 0xBC3
{
	func_16();
	return Global_113648.f_2365.f_539.f_4321;
}

void func_16() // Position - 0xBDC
{
	eCharacter character;

	if (unk_0x7DE17ACDD8BA2642(unk_0xC1A5EC5C986B98AD()))
	{
		if (_GET_CHARACTER_MODEL(Global_113648.f_2365.f_539.f_4321) != unk_0x504B9BB48D41C264(unk_0xC1A5EC5C986B98AD()))
		{
			character = _GET_PLAYER_CHARACTER_FROM_PED(unk_0xC1A5EC5C986B98AD());
		
			if (func_14(character) && !func_22(14) || Global_112599)
			{
				if (Global_113648.f_2365.f_539.f_4321 != character && func_14(Global_113648.f_2365.f_539.f_4321))
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

eCharacter _GET_PLAYER_CHARACTER_FROM_PED(var uParam0) // Position - 0xCD9
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

int _GET_CHARACTER_MODEL(eCharacter character) // Position - 0xD16
{
	if (func_14(character))
		return func_19(character);
	else
		character != _CHAR_NULL;

	return 0;
}

int func_19(eCharacter echParam0) // Position - 0xD3B
{
	return Global_2028[echParam0 /*29*/];
}

BOOL _CAN_ENTER_FREEROAM_STATE(int iParam0) // Position - 0xD4A
{
	return func_21(iParam0, Global_43257);
}

BOOL func_21(int iParam0, int iParam1) // Position - 0xD5B
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

BOOL func_22(int iParam0) // Position - 0xF3C
{
	return Global_43257 == iParam0;
}

void func_23() // Position - 0xF4A
{
	unk_0x675D9C12C73D3DE7();
	return;
}

