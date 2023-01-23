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
	int iLocal_21 = 0;
	BOOL bLocal_22 = 0;
	BOOL bLocal_23 = 0;
	int iLocal_24 = 0;
	BOOL bLocal_25 = 0;
	var uLocal_26 = 0;
	var uLocal_27 = 0;
	var uLocal_28 = 0;
	int iLocal_29 = 0;
	float fLocal_30 = 0f;
	var uLocal_31 = 0;
	var uLocal_32 = 0;
	var uLocal_33 = 0;
	var uLocal_34 = 0;
	int iLocal_35 = 0;
	BOOL bLocal_36 = 0;
	int iLocal_37 = 0;
	var uLocal_38 = 0;
	int iLocal_39 = 0;
	var uLocal_40 = 0;
	var uLocal_41 = 0;
	int iLocal_42 = 0;
	int iLocal_43 = 0;
	int iLocal_44 = 0;
	int iLocal_45 = 0;
	var uLocal_46 = 0;
	var uLocal_47 = 0;
	var uLocal_48 = 0;
	var uLocal_49 = 0;
	var uLocal_50 = 0;
	var uLocal_51 = 0;
	var uLocal_52 = 0;
	var uLocal_53 = 0;
	var uLocal_54 = 0;
	var uLocal_55 = 0;
	var uLocal_56 = 0;
	var uLocal_57 = 0;
	var uLocal_58 = 0;
	var uLocal_59 = 0;
	var uLocal_60 = 0;
	var uLocal_61 = 0;
	var uLocal_62 = 0;
	var uLocal_63 = 0;
	var uLocal_64 = 0;
	var uLocal_65 = 0;
	var uLocal_66 = 0;
	var uLocal_67 = 0;
	var uLocal_68 = 0;
	var uLocal_69 = 0;
	var uLocal_70 = 0;
	var uLocal_71 = 0;
	var uLocal_72 = 0;
	var uLocal_73 = 0;
	var uLocal_74 = 0;
	var uLocal_75 = 0;
	var uLocal_76 = 0;
	var uLocal_77 = 0;
	var uLocal_78 = 0;
	var uLocal_79 = 0;
	var uLocal_80 = 0;
	var uLocal_81 = 0;
	var uLocal_82 = 0;
	var uLocal_83 = 0;
	var uLocal_84 = 0;
	BOOL bLocal_85 = 0;
	int iLocal_86 = 0;
	int iLocal_87 = 0;
	var uLocal_88 = 0;
	var uLocal_89 = 0;
	var uLocal_90 = 0;
	var uScriptParam_0 = 0;
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
	sLocal_18 = "NULL";
	iLocal_21 = 3;
	bLocal_25 = true;
	iLocal_35 = -1;
	iLocal_42 = -1;
	iLocal_43 = -1;
	iLocal_44 = -1;
	TEXT_LABEL_ASSIGN_STRING(&uLocal_46, "NULL", 64);
	TEXT_LABEL_ASSIGN_STRING(&uLocal_62, "NULL", 64);

	if (unk_0x55EEDBBFDC6E810F(2))
		func_68();

	if (unk_0x7DE17ACDD8BA2642(uScriptParam_0))
	{
		iLocal_37 = uScriptParam_0;
		uLocal_40 = uScriptParam_0;
	}

	while (true)
	{
		SYSTEM::WAIT(0);
		func_67();
	
		if (unk_0x7DE17ACDD8BA2642(uScriptParam_0))
		{
			if (iLocal_43 != -1 && func_66() && !func_65() && !func_64(iLocal_43))
				func_68();
		
			if (unk_0xB53553DC4AAC7D8A() && unk_0x728FB8B438DDCAB6() != 3 && unk_0x19B3485E7C9D734D() == 3)
				func_68();
		
			if (func_63(13) || func_63(14))
				func_68();
		
			if (unk_0x34A8666A2B64A52B(uScriptParam_0, 0))
				func_68();
		
			if (unk_0x4B85D97500605AE9(uScriptParam_0))
			{
				if (unk_0x48DC6A21D1CAD89C(unk_0x93E99A2DBCBA9CFA()))
				{
					func_62();
				
					if (unk_0x2935B4D6CE81318D(uScriptParam_0) < 950)
						func_68();
				
					switch (iLocal_29)
					{
						case 0:
							func_59();
						
							if (iLocal_43 == 5)
							{
								if (func_58(18) == true && func_58(20) == false)
								{
									uLocal_41 = unk_0x4496D5F4C11FDDCD(-809.962f, 170.919f, 75.7407f, 3f, "des_tvsmash");
								
									if (unk_0x473E24C55772A171(uLocal_41))
										unk_0x0E1082F1307FC31A(uLocal_41, 9);
								
									unk_0x675D9C12C73D3DE7();
								}
							}
						
							if (iLocal_43 == -1)
							{
								func_68();
							}
							else
							{
								func_57();
								unk_0x32D2010F2D300EB7("SAFEHOUSE_MICHAEL_SIT_SOFA", 0, -1);
								unk_0xD3EC2BD7C1DEA1A7(0);
								Global_32224[iLocal_43 /*11*/].f_2 = 0;
								Global_32224[iLocal_43 /*11*/].f_6 = 1;
								Global_32224[iLocal_43 /*11*/] = unk_0x15A88CFAAFFC6C4B(0, 2);
								Global_32224[iLocal_43 /*11*/].f_1 = 0;
								Global_32224[iLocal_43 /*11*/].f_4 = 0;
								Global_32224[iLocal_43 /*11*/].f_7 = 0;
								Global_32224[iLocal_43 /*11*/].f_8 = 0;
								Global_32224[iLocal_43 /*11*/].f_10 = 0;
								fLocal_30 = -4f;
								func_55(&uLocal_26);
								func_53();
								func_52();
								SYSTEM::WAIT(0);
								iLocal_29 = 1;
							}
							break;
					
						case 1:
							if (unk_0xF356C80F3E8D2812(unk_0x93E99A2DBCBA9CFA(), 0))
								SYSTEM::WAIT(0);
							else if (unk_0x4CCE9D7982F2B863(iLocal_37) && unk_0x090CA4E691925FE1(iLocal_37, 1119092736))
								if (func_44() || Global_32224[iLocal_43 /*11*/].f_5)
									iLocal_29 = 2;
							else
								_CONTEXT_REMOVE_HELP_TEXT(&iLocal_42);
							break;
					
						case 2:
							func_53();
						
							if (!func_64(iLocal_43))
							{
								_CONTEXT_REMOVE_HELP_TEXT(&iLocal_42);
							
								if (_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED("TV_HLP1" /*Press ~INPUT_CONTEXT~ to turn on the TV.*/))
									unk_0xCD3C8E1022864F65(1);
							}
						
							if (unk_0x7DE17ACDD8BA2642(iLocal_37))
								if (!unk_0x51DF6895C236B231(iLocal_37))
									unk_0x724FFAED1C56CE2B(iLocal_37, 1, 0);
						
							if (unk_0x7DE17ACDD8BA2642(iLocal_39))
								if (!unk_0x51DF6895C236B231(iLocal_39))
									unk_0x724FFAED1C56CE2B(iLocal_39, 1, 0);
						
							if (unk_0x7DE17ACDD8BA2642(uLocal_38))
								if (unk_0x51DF6895C236B231(uLocal_38))
									unk_0x724FFAED1C56CE2B(uLocal_38, 0, 0);
						
							if (!unk_0x4310A0DB886F9FED(&uLocal_46, "NULL"))
								unk_0x72B586B6D6948F3C(&uLocal_46, 0);
						
							unk_0xBDF13F30A780064C(0);
							SYSTEM::WAIT(0);
						
							if (unk_0x7DE17ACDD8BA2642(uLocal_40))
								unk_0x94DAE427B76B6998(uLocal_40);
						
							if (!func_64(iLocal_43))
							{
								if (Global_32224[iLocal_43 /*11*/] == 3 || Global_32224[iLocal_43 /*11*/] == 2 || Global_32224[iLocal_43 /*11*/] == -1)
									Global_32224[iLocal_43 /*11*/] = unk_0x15A88CFAAFFC6C4B(0, 2);
							
								unk_0xE4B142962C3AB494(Global_32224[iLocal_43 /*11*/]);
								unk_0x1197F4E92A69982B(fLocal_30);
							}
							else
							{
								iLocal_44 = Global_32224[iLocal_43 /*11*/];
								iLocal_45 = Global_32224[iLocal_43 /*11*/].f_1;
								unk_0x32387FC452149DAB(iLocal_44, func_41(iLocal_45), Global_32224[iLocal_43 /*11*/].f_9);
								unk_0xE4B142962C3AB494(iLocal_44);
							
								if (Global_32224[iLocal_43 /*11*/].f_7)
								{
									Global_32224[iLocal_43 /*11*/].f_5 = 0;
									Global_32224[iLocal_43 /*11*/].f_7 = 0;
								}
							}
						
							Global_32224[iLocal_43 /*11*/].f_2 = 1;
							func_40(133, 1);
							func_40(131, 1);
							func_40(132, 1);
							iLocal_29 = 3;
							break;
					
						case 3:
							if (Global_32224[iLocal_43 /*11*/].f_4)
								iLocal_29 = 6;
						
							if (Global_32224[iLocal_43 /*11*/].f_7 && func_64(iLocal_43))
							{
								Global_32224[iLocal_43 /*11*/].f_7 = 0;
								iLocal_29 = 6;
							}
						
							if (!func_38(iLocal_43))
							{
								func_37();
								iLocal_29 = 5;
							}
							else
							{
								func_35();
							
								if (unk_0xF0BB4D5C6A65330B() == -1)
									unk_0xE4B142962C3AB494(Global_32224[iLocal_43 /*11*/]);
							
								if (func_15())
									iLocal_29 = 6;
							}
							break;
					
						case 5:
							if (func_38(iLocal_43))
								iLocal_29 = 2;
						
							if (Global_32224[iLocal_43 /*11*/].f_4)
								iLocal_29 = 6;
							break;
					
						case 6:
							func_1();
						
							if (iLocal_42 != -1)
								_CONTEXT_REMOVE_HELP_TEXT(&iLocal_42);
						
							Global_32224[iLocal_43 /*11*/].f_5 = 0;
							Global_32224[iLocal_43 /*11*/].f_4 = 0;
							Global_32224[iLocal_43 /*11*/].f_1 = 0;
							Global_32224[iLocal_43 /*11*/].f_2 = 0;
							Global_32224[iLocal_43 /*11*/].f_7 = 0;
							Global_32224[iLocal_43 /*11*/].f_8 = 0;
							Global_32224[iLocal_43 /*11*/].f_10 = 0;
							iLocal_29 = 1;
							break;
					}
				}
			}
		}
		else
		{
			func_68();
			unk_0x675D9C12C73D3DE7();
		}
	}

	func_68();
	unk_0x675D9C12C73D3DE7();
	return;
}

void func_1() // Position - 0x4E6
{
	if (iLocal_43 != -1)
		Global_32224[iLocal_43 /*11*/] = unk_0xF0BB4D5C6A65330B();

	fLocal_30 = unk_0x5FBAEEAE9F688AA1();
	unk_0xE4B142962C3AB494(-1);
	func_4();

	if (unk_0x24B651D85CCE5EB4(joaat("family5")) == 0)
		if (!unk_0x4310A0DB886F9FED(&uLocal_46, "NULL"))
			unk_0x72B586B6D6948F3C(&uLocal_46, 1);

	if (_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED("TV_HLP1" /*Press ~INPUT_CONTEXT~ to turn on the TV.*/) || _IS_THIS_HELP_MESSAGE_BEING_DISPLAYED("TV_HLP2" /*Use ~INPUT_SCRIPT_LEFT_AXIS_X~ to change the channel.~n~Use ~INPUT_SCRIPT_LEFT_AXIS_Y~ to change the volume.~n~Press ~INPUT_NEXT_CAMERA~ to change view.~n~Press ~INPUT_CONTEXT~ to stop watching.~n~*/) || _IS_THIS_HELP_MESSAGE_BEING_DISPLAYED("TV_HLP5" /*Press ~INPUT_SCRIPT_RUP~ to use the TV controls.~n~Press ~INPUT_CONTEXT~ to turn off the TV.~n~*/) || _IS_THIS_HELP_MESSAGE_BEING_DISPLAYED("TV_HLP6" /*Press ~INPUT_SCRIPT_RUP~ to stop using the TV controls.~n~Use ~INPUT_SCRIPT_LEFT_AXIS_X~ to change the channel.~n~Use ~INPUT_SCRIPT_LEFT_AXIS_Y~ to change the volume.~n~Press ~INPUT_CONTEXT~ to turn off the TV.~n~*/))
		unk_0xCD3C8E1022864F65(1);

	func_3();
	func_52();

	if (unk_0x7DE17ACDD8BA2642(uLocal_38))
		if (!unk_0x51DF6895C236B231(uLocal_38))
			unk_0x724FFAED1C56CE2B(uLocal_38, 1, 0);

	unk_0xF1BC1CA5D03DCCEC(0);
	func_2();
	return;
}

void func_2() // Position - 0x590
{
	if (unk_0xCC17806DB0C41C19())
	{
		if (iLocal_87 == 1)
		{
			unk_0x6FCC012A63184153();
			iLocal_87 = 0;
		}
	}

	return;
}

void func_3() // Position - 0x5AC
{
	if (!iLocal_35 == -1)
	{
		unk_0x70546D13E82214E2(iLocal_35);
	
		if (unk_0x7DE17ACDD8BA2642(iLocal_37))
		{
			if (unk_0x504B9BB48D41C264(iLocal_37) == joaat("v_ilev_mm_screen2") || unk_0x504B9BB48D41C264(iLocal_37) == joaat("v_ilev_mm_scre_off"))
			{
				unk_0x724FFAED1C56CE2B(iLocal_37, 0, 0);
			
				if (unk_0x504B9BB48D41C264(iLocal_37) == joaat("v_ilev_mm_scre_off"))
					unk_0xD88E9AF5626B0121(0.5f, 0.5f, 1f, 1f, 255, 255, 255, 255, 0);
			}
			else
			{
				unk_0xD88E9AF5626B0121(0.5f, 0.5f, 1f, 1f, 0, 0, 0, 255, 0);
			}
		}
	}

	if (unk_0x7DE17ACDD8BA2642(iLocal_39))
		unk_0x724FFAED1C56CE2B(iLocal_39, 0, 0);

	return;
}

void func_4() // Position - 0x643
{
	if (bLocal_85)
	{
		unk_0x9E2404A25985615A(0, 0, 3000, 1, 0, 0);
	
		if (unk_0x2DDFF72E939527F8(uLocal_78))
			unk_0xEEF11E0DB5769366(uLocal_78, 0);
	
		unk_0x42B9FA814615C4F9(uLocal_78, 0);
		unk_0xAABD7B0753C5C286(0);
	
		if (!unk_0x66599E73DBA5A850(unk_0xC1A5EC5C986B98AD()))
		{
			unk_0x2718E9CC165A99F6(unk_0xC1A5EC5C986B98AD(), 0);
			unk_0x909F139DC199D8E0(unk_0xC1A5EC5C986B98AD());
			unk_0x952D2B8A054C4FF8(unk_0xC1A5EC5C986B98AD(), uLocal_31, 1, 0, 2);
		
			if (!unk_0x1B82EF141CC65934(unk_0x93E99A2DBCBA9CFA()))
			{
				if (bLocal_36 == true)
				{
					bLocal_36 = false;
					unk_0xE333240A90F2FF3C(unk_0x93E99A2DBCBA9CFA(), 1, 0);
				}
			}
		
			unk_0x724FFAED1C56CE2B(unk_0xC1A5EC5C986B98AD(), 1, 0);
		}
	
		if (!unk_0x4310A0DB886F9FED(&uLocal_62, "NULL"))
			if (unk_0xD19C2C73F4D74992(&uLocal_62))
				unk_0x3FA8C73B5856A3E4(&uLocal_62);
	
		if (unk_0x7DE17ACDD8BA2642(iLocal_39))
			unk_0x724FFAED1C56CE2B(iLocal_39, 1, 0);
	
		func_5(false, true, false, 0, false, false, false);
		unk_0xF1BC1CA5D03DCCEC(0);
		bLocal_85 = false;
	}

	return;
}

void func_5(BOOL bParam0, BOOL bParam1, BOOL bParam2, int iParam3, BOOL bParam4, BOOL bParam5, BOOL bParam6) // Position - 0x70F
{
	if (bParam0)
	{
		unk_0x8ECAA315E07E3A17(unk_0x93E99A2DBCBA9CFA(), 0);
		unk_0x24E4702792B3DA06(unk_0x93E99A2DBCBA9CFA(), 1);
		unk_0xD9CC3BD0E86A83F2(unk_0x93E99A2DBCBA9CFA(), 1);
		func_14(1);
		unk_0x2A7FF4CA1CC371B5();
		unk_0x3096CB6635EB839E();
	
		if (Global_20383.f_1 > 3 && !bParam6)
		{
			if (unk_0xE444FD7526C8BB46())
				unk_0xD6625E11483B2324(0);
		
			if (!func_13())
				Global_20383.f_1 = 3;
		
			Global_21725 = 5;
		}
	
		func_12(1, iParam3, bParam2, 0);
		Global_63368 = true;
		Global_75696 = true;
		Global_78556 = true;
	}
	else
	{
		func_14(0);
		unk_0x5862CC4FD19EB752();
		Global_63368 = false;
	
		if (bParam1)
			unk_0xDB4D82037BD5A339();
	
		unk_0x24E4702792B3DA06(unk_0x93E99A2DBCBA9CFA(), 0);
		unk_0xD9CC3BD0E86A83F2(unk_0x93E99A2DBCBA9CFA(), 0);
		func_12(0, iParam3, bParam2, 0);
	
		if (unk_0xA26A9A07F761D8F8())
			if (!unk_0x66599E73DBA5A850(unk_0xC1A5EC5C986B98AD()) && !func_10(unk_0x93E99A2DBCBA9CFA()) && !_NETWORK_IS_PLAYER_IN_SCTV(unk_0x93E99A2DBCBA9CFA(), 0) && !func_6() && !bParam4 && !bParam5 && !unk_0x8253CEEA17ED481B())
				unk_0x226C3A30511D5DC4(unk_0xC1A5EC5C986B98AD(), 0);
		else if (!unk_0x66599E73DBA5A850(unk_0xC1A5EC5C986B98AD()) && !func_10(unk_0x93E99A2DBCBA9CFA()) && !bParam4 && !bParam5)
			unk_0x226C3A30511D5DC4(unk_0xC1A5EC5C986B98AD(), 0);
	
		Global_78556 = false;
	}

	return;
}

BOOL func_6() // Position - 0x85C
{
	return IS_BIT_SET(Global_1853910[unk_0x93E99A2DBCBA9CFA() /*862*/].f_36.f_18, 14);
}

BOOL _NETWORK_IS_PLAYER_IN_SCTV(int player, int bCheckTeam) // Position - 0x876
{
	BOOL flag;

	if (player == unk_0x93E99A2DBCBA9CFA())
		flag = func_8(-1, false) == CHAR_MIKE_FRANK_CONF;
	else
		flag = Global_1853910[player /*862*/].f_205 == 8;

	if (bCheckTeam == 1)
		if (unk_0xE6DEE82DB0922DF0(player))
			flag = unk_0x4292F1DE8BA2D22E(player) == 8;

	return flag;
}

eCharacter func_8(Hash hParam0, BOOL bParam1) // Position - 0x8C1
{
	eCharacter character;
	Hash hash;

	hash = hParam0;

	if (hash == -1)
		hash = func_9();

	if (Global_1575040[hash] == true)
	{
		bParam1;
		character = CHAR_MIKE_FRANK_CONF;
	}
	else
	{
		character = Global_1574912[hash];
		bParam1;
	}

	return character;
}

Hash func_9() // Position - 0x902
{
	return Global_1574918;
}

BOOL func_10(int iParam0) // Position - 0x90E
{
	if (_NETWORK_IS_PLAYER_IN_SCTV(iParam0, 0))
		return true;

	if (func_11())
		if (iParam0 == unk_0x93E99A2DBCBA9CFA())
			return true;

	if (IS_BIT_SET(Global_2657589[iParam0 /*466*/].f_199, 2))
		return true;

	return false;
}

BOOL func_11() // Position - 0x94D
{
	return IS_BIT_SET(Global_2621446, 3);
}

int func_12(int iParam0, int iParam1, BOOL bParam2, int iParam3) // Position - 0x95B
{
	int num;

	num = 0;

	if (unk_0xCC17806DB0C41C19())
	{
		if (unk_0x39D9A0A5E812BD25() != iParam0 && bParam2)
		{
			unk_0xA740EFFFBB4FED55(iParam0, iParam1, 1, iParam3);
			num = 1;
		}
	}

	return num;
}

BOOL func_13() // Position - 0x98E
{
	if (Global_20383.f_1 == 1 || Global_20383.f_1 == 0)
		return true;

	return false;
}

void func_14(int iParam0) // Position - 0x9B5
{
	if (iParam0 == 1)
		unk_0xECDAB41968FF21A8(&Global_8253, 13);
	else
		unk_0x061B1200C95204CB(&Global_8253, 13);

	return;
}

BOOL func_15() // Position - 0x9D8
{
	if (!func_64(iLocal_43))
	{
		if (func_31(&uLocal_26) >= 1f && unk_0x1C4E4DC1EFE24DF1(unk_0xC1A5EC5C986B98AD(), uLocal_88, 1f, 1f, 1.5f, 0, 1, 0) && unk_0x41AD4BF315E01D41(iLocal_37) == unk_0x41AD4BF315E01D41(unk_0xC1A5EC5C986B98AD()) && !func_30(8, -1) && !unk_0x3C3D6D026CF7F51B(unk_0xC1A5EC5C986B98AD(), 0) && unk_0x55EDDA33F4D8BBE2(unk_0xC1A5EC5C986B98AD(), uLocal_31, 90f) && !unk_0x48A4D45B3B4CEFFD(unk_0xC1A5EC5C986B98AD()) && !unk_0xB53553DC4AAC7D8A())
		{
			if (iLocal_42 == -1)
			{
				func_29();
				_CONTEXT_ADD_HELP_TEXT(&iLocal_42, 3, "TV_HLP5" /*Press ~INPUT_SCRIPT_RUP~ to use the TV controls.~n~Press ~INPUT_CONTEXT~ to turn off the TV.~n~*/, 0, 0, 0, 0);
			}
			else if (func_26(iLocal_42, true))
			{
				_CONTEXT_REMOVE_HELP_TEXT(&iLocal_42);
				func_55(&uLocal_26);
				Global_32224[iLocal_43 /*11*/].f_7 = 0;
			
				if (unk_0x89A66B65ABE0F206("SAFEHOUSE_MICHAEL_SIT_SOFA", 0, -1))
					unk_0x531D638530A8DB97(-1, "MICHAEL_SOFA_TV_ON_MASTER", 0, 1);
			
				return true;
			}
		
			func_16();
		}
		else
		{
			if (_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED("TV_HLP5" /*Press ~INPUT_SCRIPT_RUP~ to use the TV controls.~n~Press ~INPUT_CONTEXT~ to turn off the TV.~n~*/))
				unk_0xCD3C8E1022864F65(1);
		
			func_2();
			_CONTEXT_REMOVE_HELP_TEXT(&iLocal_42);
		}
	}

	return false;
}

void func_16() // Position - 0xAE4
{
	if (bLocal_85 == false)
	{
		unk_0x4150CF46B891FFF5(2, 222);
	
		if (unk_0x87644B1F984197FE(2, 222))
		{
			_CONTEXT_REMOVE_HELP_TEXT(&iLocal_42);
			_CONTEXT_ADD_HELP_TEXT(&iLocal_42, 3, "TV_HLP6" /*Press ~INPUT_SCRIPT_RUP~ to stop using the TV controls.~n~Use ~INPUT_SCRIPT_LEFT_AXIS_X~ to change the channel.~n~Use ~INPUT_SCRIPT_LEFT_AXIS_Y~ to change the volume.~n~Press ~INPUT_CONTEXT~ to turn off the TV.~n~*/, 0, 0, 0, 0);
			func_25();
		}
	}
	else
	{
		unk_0x8B438725D591ED78(2, 200, 1);
	
		if (unk_0x51DF6895C236B231(unk_0xC1A5EC5C986B98AD()))
			unk_0x724FFAED1C56CE2B(unk_0xC1A5EC5C986B98AD(), 0, 0);
	
		if (bLocal_36)
			if (unk_0x1B82EF141CC65934(unk_0x93E99A2DBCBA9CFA()))
				unk_0xE333240A90F2FF3C(unk_0x93E99A2DBCBA9CFA(), 0, 0);
	
		unk_0xE288789FFB1A0C2F();
		unk_0x158E738BD8DFDCB9(unk_0xC1A5EC5C986B98AD());
		func_23(true, true);
		unk_0x4150CF46B891FFF5(2, 222);
		func_17(0);
	
		if (unk_0x87644B1F984197FE(2, 222) || unk_0x42AAFCB5B7854AA9(2) && unk_0xA2C9DE6085F5645B(2, 200))
		{
			_CONTEXT_REMOVE_HELP_TEXT(&iLocal_42);
			func_4();
		}
	}

	return;
}

void func_17(int iParam0) // Position - 0xB9E
{
	if (func_22())
		return;

	if (!Global_20383.f_1 == 1)
	{
		if (func_21(0))
			func_18(iParam0);
	
		unk_0xECDAB41968FF21A8(&Global_8254, 2);
	}

	return;
}

void func_18(int iParam0) // Position - 0xBD1
{
	if (func_22())
		return;

	if (Global_20584)
		if (func_20())
			func_19(true, true);
		else
			func_19(false, false);

	if (Global_20383.f_1 == 10 || Global_20383.f_1 == 9)
		unk_0xECDAB41968FF21A8(&Global_8254, 16);

	if (unk_0xE444FD7526C8BB46())
		unk_0xD6625E11483B2324(0);

	Global_21725 = 5;

	if (iParam0 == 1)
		unk_0xECDAB41968FF21A8(&Global_8253, 30);
	else
		unk_0x061B1200C95204CB(&Global_8253, 30);

	if (!func_13())
		Global_20383.f_1 = 3;

	return;
}

void func_19(BOOL bParam0, BOOL bParam1) // Position - 0xC5B
{
	if (bParam0)
	{
		if (func_21(0))
		{
			Global_20584 = true;
		
			if (bParam1)
				unk_0xF756EDB27C588BED(&Global_20320);
		
			Global_20311 = { Global_20329[Global_20328 /*3*/] };
			unk_0x6B2D55EA37C443D5(Global_20311);
		}
	}
	else if (Global_20584 == true)
	{
		Global_20584 = false;
		Global_20311 = { Global_20336[Global_20328 /*3*/] };
	
		if (bParam1)
			unk_0x6B2D55EA37C443D5(Global_20320);
		else
			unk_0x6B2D55EA37C443D5(Global_20311);
	}

	return;
}

BOOL func_20() // Position - 0xCCF
{
	return IS_BIT_SET(Global_1962996, 5);
}

BOOL func_21(int iParam0) // Position - 0xCDD
{
	if (iParam0 == 1)
		if (Global_20383.f_1 > 3)
			if (IS_BIT_SET(Global_8253, 14))
				return true;
			else
				return false;
		else
			return false;

	if (unk_0x24B651D85CCE5EB4(joaat("cellphone_flashhand")) > 0)
		return true;

	if (Global_20383.f_1 > 3)
		return true;

	return false;
}

BOOL func_22() // Position - 0xD34
{
	return IS_BIT_SET(Global_1962996, 19);
}

void func_23(BOOL bParam0, BOOL bParam1) // Position - 0xD43
{
	int num;
	int num2;
	float num3;

	num = 64;

	if (bParam0)
	{
		if (func_24(false))
		{
			if (!bLocal_22)
			{
				if (unk_0x89A66B65ABE0F206("SAFEHOUSE_MICHAEL_SIT_SOFA", 0, -1))
					unk_0x531D638530A8DB97(-1, "MICHAEL_SOFA_TV_CHANGE_CHANNEL_MASTER", 0, 1);
			
				if (unk_0xF0BB4D5C6A65330B() == 0)
					unk_0xE4B142962C3AB494(1);
				else
					unk_0xE4B142962C3AB494(0);
			
				bLocal_22 = true;
			}
		}
		else if (bLocal_22)
		{
			bLocal_22 = false;
		}
	}

	if (bParam1)
	{
		num2 = unk_0xAABBB04856172783(2, 219) - 127;
	
		if (!bLocal_23)
		{
			if (num2 > 0 + num)
			{
				num3 = unk_0x5FBAEEAE9F688AA1();
				num3 = num3 - 0.5f;
			
				if (num3 < -36f)
					num3 = -36f;
			
				unk_0x1197F4E92A69982B(num3);
				iLocal_24 = unk_0xA5E11AF0A2B928C1();
				bLocal_23 = true;
			}
		
			if (num2 < 0 - num)
			{
				num3 = unk_0x5FBAEEAE9F688AA1();
				num3 = num3 + 0.5f;
			
				if (num3 > 0f)
					num3 = 0f;
			
				unk_0x1197F4E92A69982B(num3);
				iLocal_24 = unk_0xA5E11AF0A2B928C1();
				bLocal_23 = true;
			}
		
			if (num2 < 0 + num && num2 > 0 - num)
			{
				bLocal_25 = true;
			}
			else if (bLocal_25)
			{
				if (unk_0x89A66B65ABE0F206("SAFEHOUSE_MICHAEL_SIT_SOFA", 0, -1))
				{
					if (num3 != -36f && num3 != 0f)
						unk_0x531D638530A8DB97(-1, "MICHAEL_SOFA_REMOTE_CLICK_VOLUME_MASTER", 0, 1);
				
					bLocal_25 = false;
				}
			}
		}
	
		if (bLocal_23)
			if (num2 == 0 || unk_0xA5E11AF0A2B928C1() > iLocal_24 + 24)
				bLocal_23 = false;
	}

	return;
}

BOOL func_24(BOOL bParam0) // Position - 0xE8A
{
	int num;
	int num2;

	num = 64;
	num2 = unk_0xAABBB04856172783(2, 218) - 127;

	if (bParam0 || SYSTEM::TIMERA() > 300)
	{
		if (num2 > 0 + num || num2 < 0 - num)
		{
			SYSTEM::SETTIMERA(0);
			return true;
		}
	}

	return false;
}

void func_25() // Position - 0xED6
{
	float num;

	num = 50f;

	if (bLocal_85 == false)
	{
		uLocal_78 = unk_0x61A083AB40BC7D3F("DEFAULT_SCRIPTED_CAMERA", uLocal_79, uLocal_82, num, 0, 2);
		unk_0x340E065534525A8A(uLocal_78, 100f);
		unk_0xEEF11E0DB5769366(uLocal_78, 1);
		unk_0x9E2404A25985615A(1, 0, 3000, 1, 0, 0);
	
		if (unk_0x7DE17ACDD8BA2642(iLocal_39))
			unk_0x724FFAED1C56CE2B(iLocal_39, 0, 0);
	
		if (!unk_0x66599E73DBA5A850(unk_0xC1A5EC5C986B98AD()))
		{
			unk_0x2718E9CC165A99F6(unk_0xC1A5EC5C986B98AD(), 1);
			unk_0x909F139DC199D8E0(unk_0xC1A5EC5C986B98AD());
		
			if (unk_0x1B82EF141CC65934(unk_0x93E99A2DBCBA9CFA()))
			{
				unk_0xE333240A90F2FF3C(unk_0x93E99A2DBCBA9CFA(), 0, 0);
				bLocal_36 = true;
			}
		
			unk_0x952D2B8A054C4FF8(unk_0xC1A5EC5C986B98AD(), uLocal_31, -1, 0, 2);
			unk_0x724FFAED1C56CE2B(unk_0xC1A5EC5C986B98AD(), 0, 0);
		}
	
		if (!unk_0x4310A0DB886F9FED(&uLocal_62, "NULL"))
			if (!unk_0xD19C2C73F4D74992(&uLocal_62))
				unk_0xAEA29937C5240DA0(&uLocal_62);
	
		func_5(true, true, false, 0, false, false, false);
		unk_0xF1BC1CA5D03DCCEC(1);
		bLocal_85 = true;
	}

	return;
}

BOOL func_26(int iParam0, BOOL bParam1) // Position - 0xFAD
{
	int num;

	num = func_27(iParam0);

	if (num == -1)
		return false;

	if (!unk_0x48DC6A21D1CAD89C(unk_0x5DC3DCA82C806319()))
		return false;

	if (func_21(0))
		return false;

	if (unk_0x2FECE8D166B3056B())
		return false;

	if (num > -1 && num < 6)
	{
		if (Global_44000[num /*32*/] == true && Global_44000[num /*32*/].f_4 == true)
		{
			if (bParam1)
				if (Global_44000[num /*32*/].f_29)
					return false;
		
			Global_44000[num /*32*/].f_5 = 1;
			Global_44000[num /*32*/].f_29 = 1;
			return true;
		}
		else
		{
			Global_44000[num /*32*/] == false;
			Global_44000[num /*32*/].f_7;
		}
	}

	return false;
}

int func_27(int iParam0) // Position - 0x1065
{
	int i;

	if (iParam0 < 0)
		return -1;

	i = 0;

	for (i = 0; i < 6; i = i + 1)
	{
		if (Global_44000[i /*32*/].f_1 == iParam0)
			return i;
	}

	return -1;
}

void _CONTEXT_ADD_HELP_TEXT(var uParam0, int iParam1, char* sParam2, int iParam3, char* sParam4, int iParam5, int iParam6) // Position - 0x10A0
{
	int i;

	unk_0x24B651D85CCE5EB4(joaat("context_controller")) < 1;

	if (unk_0xB53553DC4AAC7D8A())
	{
		if (!*uParam0 == -1)
			_CONTEXT_REMOVE_HELP_TEXT(uParam0);
	
		return;
	}

	if (!*uParam0 == -1)
		return;

	i = 0;

	for (i = 0; i < 6; i = i + 1)
	{
		if (!Global_44000[i /*32*/])
		{
			Global_44000[i /*32*/] = true;
			Global_44000[i /*32*/].f_1 = Global_44201;
			Global_44201 = Global_44201 + 1;
			Global_44000[i /*32*/].f_4 = 0;
			Global_44000[i /*32*/].f_29 = 0;
			Global_44000[i /*32*/].f_5 = 0;
			Global_44000[i /*32*/].f_2 = iParam1;
			TEXT_LABEL_ASSIGN_STRING(&(Global_44000[i /*32*/].f_8), sParam2, 16);
			Global_44000[i /*32*/].f_6 = iParam3;
			Global_44000[i /*32*/].f_31 = unk_0xAF908D5E2416DA93();
			Global_44000[i /*32*/].f_7 = 0;
			Global_44000[i /*32*/].f_3 = iParam5;
		
			if (!unk_0x2AC37494BBF1DB16(sParam4))
			{
				Global_44000[i /*32*/].f_12 = 1;
				TEXT_LABEL_ASSIGN_STRING(&(Global_44000[i /*32*/].f_13), sParam4, 64);
				Global_44000[i /*32*/].f_30 = iParam6;
			}
			else
			{
				Global_44000[i /*32*/].f_12 = 0;
				Global_44000[i /*32*/].f_30 = 0;
			}
		
			*uParam0 = Global_44000[i /*32*/].f_1;
			return;
		}
	}

	return;
}

void func_29() // Position - 0x11CB
{
	if (unk_0xCC17806DB0C41C19())
	{
		if (iLocal_87 == 0)
		{
			unk_0x176EB4F2EF6454CB("TV_Controls");
			iLocal_87 = 1;
		}
	}

	return;
}

BOOL func_30(int iParam0, int iParam1) // Position - 0x11EB
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

float func_31(var uParam0) // Position - 0x1223
{
	if (func_34(uParam0))
		if (func_33(uParam0))
			return uParam0->f_2;
		else
			return func_32(IS_BIT_SET(*uParam0, 4)) - uParam0->f_1;

	return uParam0->f_1;
}

float func_32(BOOL bParam0) // Position - 0x125F
{
	float num;
	float num2;
	int value;
	float num3;
	float num4;

	if (bParam0)
	{
		num = SYSTEM::TO_FLOAT(unk_0xA5E11AF0A2B928C1());
		num2 = num / 1000f;
		return num2;
	}

	if (unk_0xA26A9A07F761D8F8())
	{
		value = unk_0x0DB7F8294D73598B();
		num3 = SYSTEM::TO_FLOAT(value);
		num4 = num3 / 1000f;
		return num4;
	}

	return SYSTEM::TO_FLOAT(unk_0xA5E11AF0A2B928C1()) / 1000f;
}

BOOL func_33(var uParam0) // Position - 0x12B7
{
	return IS_BIT_SET(*uParam0, 2);
}

BOOL func_34(var uParam0) // Position - 0x12C4
{
	return IS_BIT_SET(*uParam0, 1);
}

void func_35() // Position - 0x12D1
{
	float num;

	num = 1f;
	func_36(&num);
	unk_0x70546D13E82214E2(iLocal_35);
	unk_0xCA0440712A8201E9(4);
	unk_0x23D55A1597EDF500(1);
	unk_0x39BBB5BA8ED18015(0.5f, 0.5f, num, 1f, 0f, 255, 255, 255, 255);
	unk_0x70546D13E82214E2(unk_0x4C756857F50C3BFF());
	return;
}

void func_36(var uParam0) // Position - 0x1312
{
	float num;
	float num2;
	float num3;

	num = unk_0xE5A34D583EE533B7(0);

	if (num <= 16f / 9f)
	{
		num2 = num / 16f / 9f;
		num3 = *uParam0;
		*uParam0 = num3 * num2;
	}

	return;
}

void func_37() // Position - 0x134F
{
	Global_32224[iLocal_43 /*11*/].f_7 = 0;
	Global_32224[iLocal_43 /*11*/] = unk_0xF0BB4D5C6A65330B();
	fLocal_30 = unk_0x5FBAEEAE9F688AA1();

	if (unk_0xD19C2C73F4D74992(&uLocal_62))
		unk_0x3FA8C73B5856A3E4(&uLocal_62);

	if (_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED("TV_HLP1" /*Press ~INPUT_CONTEXT~ to turn on the TV.*/) || _IS_THIS_HELP_MESSAGE_BEING_DISPLAYED("TV_HLP2" /*Use ~INPUT_SCRIPT_LEFT_AXIS_X~ to change the channel.~n~Use ~INPUT_SCRIPT_LEFT_AXIS_Y~ to change the volume.~n~Press ~INPUT_NEXT_CAMERA~ to change view.~n~Press ~INPUT_CONTEXT~ to stop watching.~n~*/) || _IS_THIS_HELP_MESSAGE_BEING_DISPLAYED("TV_HLP5" /*Press ~INPUT_SCRIPT_RUP~ to use the TV controls.~n~Press ~INPUT_CONTEXT~ to turn off the TV.~n~*/) || _IS_THIS_HELP_MESSAGE_BEING_DISPLAYED("TV_HLP6" /*Press ~INPUT_SCRIPT_RUP~ to stop using the TV controls.~n~Use ~INPUT_SCRIPT_LEFT_AXIS_X~ to change the channel.~n~Use ~INPUT_SCRIPT_LEFT_AXIS_Y~ to change the volume.~n~Press ~INPUT_CONTEXT~ to turn off the TV.~n~*/))
		unk_0xCD3C8E1022864F65(1);

	_CONTEXT_REMOVE_HELP_TEXT(&iLocal_42);
	unk_0xE4B142962C3AB494(-1);
	SYSTEM::WAIT(0);
	func_3();
	func_52();
	return;
}

BOOL func_38(int iParam0) // Position - 0x13CF
{
	var unk;

	unk = { _GET_PLAYER_COORDS(unk_0x93E99A2DBCBA9CFA()) };

	switch (iParam0)
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 6:
			return true;
	
		case 4:
			if (unk.f_2 < 74f)
				return true;
			break;
	
		case 5:
			if (unk.f_2 > 75f)
				return true;
			break;
	}

	return false;
}

Vector3 _GET_PLAYER_COORDS(var uParam0) // Position - 0x1444
{
	return unk_0x30BE8A934C020461(unk_0xF2CFBB1105511E1A(uParam0), 0);
}

void func_40(int iParam0, int iParam1) // Position - 0x1457
{
	int num;

	if (iParam1 < 1)
		return;

	if (Global_59104[iParam0 /*7*/].f_2)
		return;

	if (unk_0xA26A9A07F761D8F8())
		return;

	if (Global_59104[iParam0 /*7*/])
	{
		unk_0xDD7756E2742E0F6D(Global_59104[iParam0 /*7*/].f_1, &num, -1);
		num = num + iParam1;
		unk_0x3CC35ACFFC9C730E(Global_59104[iParam0 /*7*/].f_1, num, 1);
	}

	return;
}

char* func_41(int iParam0) // Position - 0x14B4
{
	char* str;

	switch (iParam0)
	{
		case 1:
			str = "PL_STD_CNT";
			break;
	
		case 2:
			str = "PL_STD_WZL";
			break;
	
		case 3:
			str = "PL_LO_CNT";
			break;
	
		case 4:
			str = "PL_LO_WZL";
			break;
	
		case 7:
			str = "PL_SP_WORKOUT";
			break;
	
		case 8:
			str = "PL_SP_INV";
			break;
	
		case 9:
			str = "PL_SP_INV_EXP";
			break;
	
		case 5:
			str = "PL_LO_RS";
			break;
	
		case 6:
			str = "PL_LO_RS_CUTSCENE";
			break;
	
		case 10:
			str = "PL_SP_PLSH1_INTRO";
			break;
	
		case 11:
			str = "PL_LES1_FAME_OR_SHAME";
			break;
	
		case 12:
			str = "PL_STD_WZL_FOS_EP2";
			break;
	
		case 13:
			str = "PL_MP_WEAZEL";
			break;
	
		case 14:
			str = "PL_MP_CCTV";
			break;
	}

	return str;
}

BOOL _IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(char* message) // Position - 0x1593
{
	unk_0x56C9BC27C0FF68D7(message);
	return unk_0x6A92D111B5409879(0);
}

void _CONTEXT_REMOVE_HELP_TEXT(var uParam0) // Position - 0x15A6
{
	int num;

	if (*uParam0 == -1)
		return;

	num = func_27(*uParam0);

	if (num == -1)
	{
		*uParam0 = -1;
		return;
	}

	if (num > -1 && num < 6)
	{
		if (Global_44000[num /*32*/])
		{
			Global_44000[num /*32*/].f_7 = 1;
			*uParam0 = -1;
			return;
		}
	}

	*uParam0 = -1;
	return;
}

BOOL func_44() // Position - 0x15FD
{
	if (func_31(&uLocal_26) < 1f)
	{
		_CONTEXT_REMOVE_HELP_TEXT(&iLocal_42);
		return false;
	}

	if (!unk_0x1C4E4DC1EFE24DF1(unk_0xC1A5EC5C986B98AD(), uLocal_88, 1f, 1f, 1.5f, 0, 1, 0) || !unk_0x55EDDA33F4D8BBE2(unk_0xC1A5EC5C986B98AD(), uLocal_31, 90f) || unk_0x48A4D45B3B4CEFFD(unk_0xC1A5EC5C986B98AD()))
	{
		_CONTEXT_REMOVE_HELP_TEXT(&iLocal_42);
		return false;
	}

	if (unk_0x41AD4BF315E01D41(iLocal_37) != unk_0x41AD4BF315E01D41(unk_0xC1A5EC5C986B98AD()))
	{
		_CONTEXT_REMOVE_HELP_TEXT(&iLocal_42);
		return false;
	}

	if (func_30(8, -1))
	{
		_CONTEXT_REMOVE_HELP_TEXT(&iLocal_42);
		return false;
	}

	if (unk_0x3C3D6D026CF7F51B(unk_0xC1A5EC5C986B98AD(), 0))
	{
		_CONTEXT_REMOVE_HELP_TEXT(&iLocal_42);
		return false;
	}

	if (Global_97609)
	{
		_CONTEXT_REMOVE_HELP_TEXT(&iLocal_42);
		return false;
	}

	if (Global_32224[iLocal_43 /*11*/].f_8)
	{
		_CONTEXT_REMOVE_HELP_TEXT(&iLocal_42);
		return false;
	}

	if (iLocal_42 == -1)
	{
		_CONTEXT_ADD_HELP_TEXT(&iLocal_42, 3, "TV_HLP1" /*Press ~INPUT_CONTEXT~ to turn on the TV.*/, 0, 0, 0, 0);
		return false;
	}

	if (func_26(iLocal_42, true))
	{
		_CONTEXT_REMOVE_HELP_TEXT(&iLocal_42);
		func_55(&uLocal_26);
		Global_32224[iLocal_43 /*11*/].f_7 = 1;
	
		if (unk_0x89A66B65ABE0F206("SAFEHOUSE_MICHAEL_SIT_SOFA", 0, -1))
			unk_0x531D638530A8DB97(-1, "MICHAEL_SOFA_TV_ON_MASTER", 0, 1);
	
		func_45(309, 0, 0);
		return true;
	}

	return false;
}

void func_45(int iParam0, int iParam1, int iParam2) // Position - 0x172C
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
		func_46();

	return;
}

void func_46() // Position - 0x1812
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
		func_50(13, SYSTEM::FLOOR(Global_113648.f_10196.f_3853));

	if (!unk_0xBAB6476CDD8C4AA6())
	{
		if (!Global_78558)
		{
			if (func_49() == 2 == false && !unk_0xA26A9A07F761D8F8())
			{
				if (unk_0x3FFDF8D1413D95DE())
					Global_113382 = false;
			
				if (!Global_63362)
					func_47();
			}
		}
	}

	return;
}

int func_47() // Position - 0x1CD0
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

BOOL _IS_MISSION_REPEAT_ACTIVE(BOOL bExcludeBenchmark) // Position - 0x1D1B
{
	if (!bExcludeBenchmark && unk_0x24B651D85CCE5EB4(joaat("benchmark")) > 0)
		return true;

	return IS_BIT_SET(Global_78807, 0);
}

int func_49() // Position - 0x1D43
{
	return Global_32163;
}

int func_50(int iParam0, int iParam1) // Position - 0x1D4E
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

void _STAT_SET_PACKED_BOOL(int iParam0, int iParam1, Hash hParam2) // Position - 0x1D9F
{
	if (hParam2 == -1)
		hParam2 = func_9();

	unk_0x0111091C0EE35B9C(iParam0, iParam1, hParam2);
	return;
}

void func_52() // Position - 0x1DBD
{
	SYSTEM::WAIT(0);

	if (unk_0xD0D0D5AD7BA7BF17("tvscreen"))
	{
		unk_0xC7D051779948C4E8("tvscreen");
		iLocal_35 = -1;
		unk_0x70546D13E82214E2(unk_0x4C756857F50C3BFF());
	}

	return;
}

void func_53() // Position - 0x1DE9
{
	var unk;

	if (iLocal_43 == 4)
		func_54();

	if (unk_0xD0D0D5AD7BA7BF17("tvscreen"))
		unk_0xC7D051779948C4E8("tvscreen");

	SYSTEM::WAIT(0);

	if (!unk_0x7DE17ACDD8BA2642(iLocal_37))
		func_68();

	unk = unk_0x504B9BB48D41C264(iLocal_37);
	unk_0xDCE8F0B2F7A57CC3("tvscreen", 0);
	unk_0x9D6C4434640FAB90(unk);
	SYSTEM::WAIT(0);

	if (iLocal_43 != 4)
	{
		while (!unk_0x732EDB15717F2504(unk))
		{
			if (!unk_0x7DE17ACDD8BA2642(iLocal_37))
				func_68();
		
			if (!unk_0x4B85D97500605AE9(iLocal_37))
				func_68();
		
			if (!unk_0xD0D0D5AD7BA7BF17("tvscreen"))
				unk_0xDCE8F0B2F7A57CC3("tvscreen", 0);
		
			if (!unk_0x732EDB15717F2504(unk))
				unk_0x9D6C4434640FAB90(unk);
		
			SYSTEM::WAIT(0);
		}
	}

	iLocal_35 = unk_0xFEAECD5283AE299E("tvscreen");
	func_3();
	return;
}

void func_54() // Position - 0x1EA7
{
	if (unk_0x7DE17ACDD8BA2642(iLocal_37))
		if (unk_0x504B9BB48D41C264(iLocal_37) == joaat("v_ilev_mm_screen2"))
			return;

	iLocal_37 = 0;
	iLocal_37 = unk_0xC3541ED6B6D42728(joaat("v_ilev_mm_screen2"), uLocal_31, 1, 1, 0);
	unk_0x692C3FDAD7DB53CC(iLocal_37, uLocal_34);
	unk_0x2718E9CC165A99F6(iLocal_37, 1);
	unk_0x724FFAED1C56CE2B(iLocal_37, 0, 0);
	iLocal_39 = 0;
	iLocal_39 = unk_0xC3541ED6B6D42728(joaat("v_ilev_mm_screen2_vl"), uLocal_31, 1, 1, 0);
	unk_0x692C3FDAD7DB53CC(iLocal_39, uLocal_34);
	unk_0x2718E9CC165A99F6(iLocal_39, 1);
	unk_0x724FFAED1C56CE2B(iLocal_39, 0, 0);
	return;
}

void func_55(var uParam0) // Position - 0x1F24
{
	func_56(uParam0, 0f);
	return;
}

void func_56(var uParam0, float fParam1) // Position - 0x1F33
{
	uParam0->f_1 = func_32(IS_BIT_SET(*uParam0, 4)) - fParam1;
	unk_0xECDAB41968FF21A8(uParam0, 1);
	unk_0x061B1200C95204CB(uParam0, 2);
	uParam0->f_2 = 0f;
	return;
}

void func_57() // Position - 0x1F5E
{
	return;
}

BOOL func_58(int iParam0) // Position - 0x1F66
{
	if (iParam0 == 94 || iParam0 == -1)
		return false;

	return Global_113648.f_9087.f_330[iParam0 /*6*/];
}

void func_59() // Position - 0x1F92
{
	uLocal_31 = { unk_0x30BE8A934C020461(iLocal_37, 1) };
	uLocal_34 = unk_0xD850DD08D5434072(iLocal_37);
	func_61();

	if (unk_0x504B9BB48D41C264(iLocal_37) == joaat("prop_tv_03"))
	{
		if (SYSTEM::VDIST(uLocal_31, -9.541955f, -1440.9166f, 31.346916f) < 3f)
		{
			iLocal_43 = 0;
			uLocal_79 = { -9.8135f, -1440.9128f, 31.3654f };
			uLocal_82 = { 0f, 0f, -134.3211f };
			uLocal_88 = { -9.3078f, -1440.931f, 30.1015f };
			TEXT_LABEL_ASSIGN_STRING(&uLocal_46, "SE_FRANKLIN_AUNT_HOUSE_RADIO_01", 64);
			TEXT_LABEL_ASSIGN_STRING(&uLocal_62, "TV_FRANKLINS_HOUSE_SOCEN", 64);
		}
	}
	else if (unk_0x504B9BB48D41C264(iLocal_37) == joaat("prop_trev_tv_01"))
	{
		if (SYSTEM::VDIST(uLocal_31, 1978.425f, 3819.6572f, 34.26763f) < 3f)
		{
			iLocal_43 = 2;
			uLocal_79 = { 1978.2303f, 3819.6504f, 34.2724f };
			uLocal_82 = { 0f, 0f, -105.15f };
			uLocal_88 = { 1978.3303f, 3819.717f, 32.4501f };
			func_60();
			TEXT_LABEL_ASSIGN_STRING(&uLocal_46, "SE_TREVOR_TRAILER_RADIO_01", 64);
			TEXT_LABEL_ASSIGN_STRING(&uLocal_62, "TV_TREVORS_TRAILER", 64);
		}
	}
	else if (unk_0x504B9BB48D41C264(iLocal_37) == joaat("prop_tv_flat_01"))
	{
		if (SYSTEM::VDIST(uLocal_31, 3.6654f, 529.8486f, 173.6281f) < 3f)
		{
			iLocal_43 = 1;
			uLocal_79 = { 2.5724f, 527.9989f, 176.1619f };
			uLocal_82 = { 0f, 0f, -29.9488f };
			uLocal_88 = { 3.6654f, 529.8486f, 173.6281f };
			TEXT_LABEL_ASSIGN_STRING(&uLocal_46, "SE_FRANKLIN_HILLS_HOUSE_RADIO_01", 64);
			TEXT_LABEL_ASSIGN_STRING(&uLocal_62, "TV_FRANKLINS_HOUSE_VINEWOOD", 64);
		}
	}
	else if (unk_0x504B9BB48D41C264(iLocal_37) == joaat("prop_tv_flat_02"))
	{
		if (SYSTEM::VDIST(uLocal_31, -1160.6947f, -1520.7448f, 10.49168f) < 3f)
		{
			iLocal_43 = 3;
			uLocal_79 = { -1160.5024f, -1520.7598f, 10.7393f };
			uLocal_82 = { 0f, 0f, 60.061f };
			uLocal_88 = { -1160.143f, -1520.4946f, 9.6555f };
			TEXT_LABEL_ASSIGN_STRING(&uLocal_46, "TREVOR_APARTMENT_RADIO", 64);
			TEXT_LABEL_ASSIGN_STRING(&uLocal_62, "TV_FLOYDS_APARTMENT", 64);
		}
	}
	else if (unk_0x504B9BB48D41C264(iLocal_37) == joaat("v_ilev_mm_screen2") || unk_0x504B9BB48D41C264(iLocal_37) == joaat("v_ilev_mm_scre_off"))
	{
		if (SYSTEM::VDIST(uLocal_31, -802.25275f, 173.03743f, 74.35708f) < 3f)
		{
			iLocal_43 = 4;
			uLocal_79 = { -802.8972f, 172.537f, 74.5801f };
			uLocal_82 = { 0f, 0f, -69.0273f };
			uLocal_88 = { -800.7292f, 173.2194f, 71.8348f };
			TEXT_LABEL_ASSIGN_STRING(&uLocal_46, "SE_MICHAELS_HOUSE_RADIO", 64);
			TEXT_LABEL_ASSIGN_STRING(&uLocal_62, "TV_MICHAELS_HOUSE", 64);
		}
	}
	else if (unk_0x504B9BB48D41C264(iLocal_37) == joaat("des_tvsmash_start"))
	{
		if (SYSTEM::VDIST(uLocal_31, -809.962f, 170.919f, 75.7407f) < 3f)
		{
			iLocal_43 = 5;
			uLocal_79 = { -808.3051f, 171.2623f, 77.2822f };
			uLocal_82 = { 1.8886f, 0f, 110.9232f };
			uLocal_88 = { -809.962f, 170.919f, 75.7407f };
			TEXT_LABEL_ASSIGN_STRING(&uLocal_46, "SE_MICHAELS_HOUSE_RADIO", 64);
			TEXT_LABEL_ASSIGN_STRING(&uLocal_62, "TV_MICHAELS_HOUSE", 64);
		}
	}

	return;
}

void func_60() // Position - 0x2281
{
	uLocal_38 = unk_0xC3541ED6B6D42728(joaat("prop_tt_screenstatic"), uLocal_31, 1, 1, 0);
	unk_0x692C3FDAD7DB53CC(uLocal_38, uLocal_34);
	unk_0x724FFAED1C56CE2B(uLocal_38, 1, 0);
	unk_0x2718E9CC165A99F6(uLocal_38, 1);
	return;
}

void func_61() // Position - 0x22B2
{
	unk_0x32387FC452149DAB(0, func_41(1), 0);

	if (func_58(22))
		unk_0x32387FC452149DAB(1, func_41(12), 0);
	else
		unk_0x32387FC452149DAB(1, func_41(2), 0);

	return;
}

void func_62() // Position - 0x22E8
{
	if (iLocal_43 == -1)
		return;

	if (Global_32224[iLocal_43 /*11*/].f_10 == 0)
	{
		if (iLocal_86 == 1)
		{
			if (unk_0x7DE17ACDD8BA2642(uLocal_40))
				unk_0x226C3A30511D5DC4(uLocal_40, 0);
		
			if (unk_0x7DE17ACDD8BA2642(iLocal_37))
				unk_0x226C3A30511D5DC4(iLocal_37, 0);
		
			if (unk_0x7DE17ACDD8BA2642(iLocal_39))
				unk_0x226C3A30511D5DC4(iLocal_39, 0);
		
			if (unk_0x7DE17ACDD8BA2642(uLocal_38))
				unk_0x226C3A30511D5DC4(uLocal_38, 0);
		
			iLocal_86 = 0;
		}
	}
	else if (iLocal_86 == 0)
	{
		if (unk_0x7DE17ACDD8BA2642(uLocal_40))
			unk_0x226C3A30511D5DC4(uLocal_40, 1);
	
		if (unk_0x7DE17ACDD8BA2642(iLocal_37))
			unk_0x226C3A30511D5DC4(iLocal_37, 1);
	
		if (unk_0x7DE17ACDD8BA2642(iLocal_39))
			unk_0x226C3A30511D5DC4(iLocal_39, 1);
	
		if (unk_0x7DE17ACDD8BA2642(uLocal_38))
			unk_0x226C3A30511D5DC4(uLocal_38, 1);
	
		iLocal_86 = 1;
	}

	return;
}

BOOL func_63(int iParam0) // Position - 0x239B
{
	return Global_43257 == iParam0;
}

BOOL func_64(int iParam0) // Position - 0x23A9
{
	if (iParam0 != -1)
		if (Global_32224[iParam0 /*11*/].f_5)
			return true;

	return false;
}

BOOL func_65() // Position - 0x23C8
{
	if (unk_0xCC17806DB0C41C19())
		if (unk_0x27654E358E874F45() == 1f)
			return true;

	return false;
}

BOOL func_66() // Position - 0x23E5
{
	if (Global_97603 != -1)
		return IS_BIT_SET(Global_91469[Global_97603 /*34*/].f_15, 20);

	return false;
}

void func_67() // Position - 0x2408
{
	return;
}

void func_68() // Position - 0x2410
{
	if (iLocal_43 == -1)
		unk_0x675D9C12C73D3DE7();

	_CONTEXT_REMOVE_HELP_TEXT(&iLocal_42);

	if (iLocal_43 != -1)
	{
		func_1();
		Global_32224[iLocal_43 /*11*/].f_6 = 0;
		Global_32224[iLocal_43 /*11*/].f_7 = 0;
		Global_32224[iLocal_43 /*11*/].f_8 = 0;
		Global_32224[iLocal_43 /*11*/].f_4 = 0;
		Global_32224[iLocal_43 /*11*/].f_5 = 0;
		Global_32224[iLocal_43 /*11*/].f_2 = 0;
		Global_32224[iLocal_43 /*11*/] = -1;
		Global_32224[iLocal_43 /*11*/].f_1 = 0;
		Global_32224[iLocal_43 /*11*/].f_10 = 0;
	}

	if (_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED("TV_HLP1" /*Press ~INPUT_CONTEXT~ to turn on the TV.*/) || _IS_THIS_HELP_MESSAGE_BEING_DISPLAYED("TV_HLP5" /*Press ~INPUT_SCRIPT_RUP~ to use the TV controls.~n~Press ~INPUT_CONTEXT~ to turn off the TV.~n~*/) || _IS_THIS_HELP_MESSAGE_BEING_DISPLAYED("TV_HLP6" /*Press ~INPUT_SCRIPT_RUP~ to stop using the TV controls.~n~Use ~INPUT_SCRIPT_LEFT_AXIS_X~ to change the channel.~n~Use ~INPUT_SCRIPT_LEFT_AXIS_Y~ to change the volume.~n~Press ~INPUT_CONTEXT~ to turn off the TV.~n~*/))
		unk_0xCD3C8E1022864F65(1);

	SYSTEM::WAIT(0);
	func_69();

	if (unk_0xD19C2C73F4D74992(&uLocal_62))
		unk_0x3FA8C73B5856A3E4(&uLocal_62);

	unk_0xAC9AB2480D86BBAD();
	func_2();
	unk_0x675D9C12C73D3DE7();
	return;
}

void func_69() // Position - 0x24D7
{
	func_52();

	if (unk_0x7DE17ACDD8BA2642(iLocal_37))
	{
		if (unk_0x504B9BB48D41C264(iLocal_37) == joaat("v_ilev_mm_screen2"))
		{
			unk_0xEF078F1FEE785D3E(&iLocal_37);
			unk_0xE0A291F406691F03(joaat("v_ilev_mm_screen2"));
		}
	}

	if (unk_0x7DE17ACDD8BA2642(iLocal_39))
	{
		unk_0xEF078F1FEE785D3E(&iLocal_39);
		unk_0xE0A291F406691F03(joaat("v_ilev_mm_screen2_vl"));
	}

	if (unk_0x7DE17ACDD8BA2642(uLocal_38))
	{
		unk_0xEF078F1FEE785D3E(&uLocal_38);
		unk_0xE0A291F406691F03(joaat("prop_tt_screenstatic"));
	}

	return;
}

