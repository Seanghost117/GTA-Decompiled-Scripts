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
	var uLocal_18 = 20;
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
	var uLocal_34 = 0;
	var uLocal_35 = 0;
	var uLocal_36 = 0;
	var uLocal_37 = 0;
	var uLocal_38 = 0;
	int iLocal_39 = 0;
	int iLocal_40 = 0;
	var uLocal_41 = 0;
	var uLocal_42 = 0;
	int iLocal_43 = 0;
	int iLocal_44 = 0;
	int iLocal_45 = 0;
	int iLocal_46 = 0;
	int iLocal_47 = 0;
	int iLocal_48 = 0;
	int iLocal_49 = 0;
	BOOL bLocal_50 = 0;
	BOOL bLocal_51 = 0;
	BOOL bLocal_52 = 0;
	BOOL bLocal_53 = 0;
	int iLocal_54 = 0;
	var uLocal_55 = 0;
	BOOL bLocal_56 = 0;
	BOOL bLocal_57 = 0;
	float fLocal_58 = 0f;
	float fLocal_59 = 0f;
	float fLocal_60 = 0f;
	float fLocal_61 = 0f;
	BOOL bLocal_62 = 0;
	float fLocal_63 = 0f;
	float fLocal_64 = 0f;
	int iLocal_65 = 0;
	int iLocal_66 = 0;
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
	fLocal_58 = 0.82f;
	fLocal_59 = 0.42f;
	fLocal_60 = 0f;
	fLocal_61 = 0f;
	unk_0x389D5B1C24A046B5();
	func_46(Global_20364, "SET_DATA_SLOT_EMPTY", 13f, -1082130432, -1082130432, -1082130432, -1082130432);
	_UPDATE_CURRENT_PLAYER_CHARACTER();

	if (Global_20328 == 0)
	{
		fLocal_63 = 0.75f;
		fLocal_64 = 0.8f;
	}
	else
	{
		fLocal_63 = 0.65f;
		fLocal_64 = 0.77f;
	}

	Global_9058[Global_20383 /*2811*/][2 /*281*/].f_259 = Global_113648.f_14053[Global_20383 /*20*/].f_6;
	Global_9058[Global_20383 /*2811*/][4 /*281*/].f_259 = Global_113648.f_14053[Global_20383 /*20*/].f_9;

	for (i = 0; i < 9; i = i + 1)
	{
		if (Global_78558)
		{
			Global_9058[Global_20383 /*2811*/][1 /*281*/].f_259 = _MPCHAR_STAT_GET_INT(MP_STAT_FM_CELLPHONE_RINGTONE, -1, 0);
			Global_9058[Global_20383 /*2811*/][2 /*281*/].f_259 = _MPCHAR_STAT_GET_INT(MP_STAT_FM_CELLPHONE_THEME, -1, 0);
			Global_9058[Global_20383 /*2811*/][4 /*281*/].f_259 = _MPCHAR_STAT_GET_INT(MP_STAT_FM_CELLPHONE_BACKGROUND, -1, 0);
		}
		else if (unk_0x4310A0DB886F9FED(&(Global_113648.f_14053[Global_20383 /*20*/].f_11), &Global_9058[Global_20383 /*2811*/][1 /*281*/].f_144[i /*6*/]))
		{
			Global_9058[Global_20383 /*2811*/][1 /*281*/].f_259 = i;
		}
	}

	if (Global_78558)
		Global_113648.f_14053[3 /*20*/].f_10 = _MPCHAR_STAT_GET_INT(MP_STAT_FM_CELLPHONE_VIBRATE, -1, 0);

	Global_9058[Global_20383 /*2811*/][3 /*281*/].f_259 = Global_113648.f_14053[Global_20383 /*20*/].f_10;
	func_43();

	if (Global_78558)
	{
		Global_9058[3 /*2811*/][0 /*281*/] = 190;
		Global_9058[3 /*2811*/][0 /*281*/].f_1 = 190;
		TEXT_LABEL_ASSIGN_STRING(&(Global_9058[3 /*2811*/][0 /*281*/].f_2), "CELL_701" /*Snapmatic*/, 16);
		Global_9058[3 /*2811*/][0 /*281*/].f_6 = 19;
		Global_9058[3 /*2811*/][0 /*281*/].f_280 = 1;
		TEXT_LABEL_ASSIGN_STRING(&Global_9058[3 /*2811*/][0 /*281*/].f_7[0 /*4*/], "CELL_704" /*Quick launch Off*/, 16);
		Global_9058[3 /*2811*/][0 /*281*/].f_124[0] = 1;
		Global_9058[3 /*2811*/][0 /*281*/].f_84[0] = 170;
		Global_9058[3 /*2811*/][0 /*281*/].f_104[0] = 19;
		TEXT_LABEL_ASSIGN_STRING(&Global_9058[3 /*2811*/][0 /*281*/].f_7[1 /*4*/], "CELL_703" /*Quick launch On*/, 16);
		Global_9058[3 /*2811*/][0 /*281*/].f_124[1] = 1;
		Global_9058[3 /*2811*/][0 /*281*/].f_84[1] = 175;
		Global_9058[3 /*2811*/][0 /*281*/].f_104[1] = 19;
		TEXT_LABEL_ASSIGN_STRING(&Global_9058[3 /*2811*/][0 /*281*/].f_7[2 /*4*/], "CELL_801" /*Sleep Mode*/, 16);
		Global_9058[3 /*2811*/][0 /*281*/].f_124[2] = 0;
		Global_9058[3 /*2811*/][0 /*281*/].f_84[2] = 190;
		Global_9058[3 /*2811*/][0 /*281*/].f_104[2] = 26;
	
		if (_MPCHAR_STAT_GET_INT(MP_STAT_FM_CELLPHONE_QUICKLAUNCH, -1, 0) == 0)
			Global_9058[3 /*2811*/][0 /*281*/].f_259 = 0;
		else
			Global_9058[3 /*2811*/][0 /*281*/].f_259 = 1;
	}

	func_33();

	while (true)
	{
		SYSTEM::WAIT(0);
	
		if (bLocal_50)
		{
			if (SYSTEM::TIMERB() > 3500)
			{
				if (!unk_0x055111B11E6624FD(unk_0xC1A5EC5C986B98AD(), 0))
					unk_0x666C647292ADF486(unk_0xC1A5EC5C986B98AD());
			
				bLocal_50 = false;
			}
		}
	
		if (Global_20383.f_1 != 9)
		{
			switch (Global_20383.f_1)
			{
				case 7:
					func_28();
					func_26();
					break;
			
				case 8:
					if (bLocal_56 || bLocal_57)
					{
						if (bLocal_56)
						{
							bLocal_56 = false;
							SYSTEM::SETTIMERB(0);
							Global_113648.f_14053.f_82 = 1;
							bLocal_57 = true;
						}
						else if (SYSTEM::TIMERB() > 7500)
						{
							bLocal_57 = false;
							unk_0xCD3C8E1022864F65(1);
						}
					}
					else
					{
						func_28();
						func_12();
					
						if (bLocal_53)
							func_11();
					
						if (func_10(2, Global_20351, 0))
						{
							if (!unk_0x055111B11E6624FD(unk_0xC1A5EC5C986B98AD(), 0))
								unk_0x666C647292ADF486(unk_0xC1A5EC5C986B98AD());
						
							bLocal_53 = false;
							func_9();
							Global_20361 = true;
							func_46(Global_20364, "SET_DATA_SLOT_EMPTY", 13f, -1082130432, -1082130432, -1082130432, -1082130432);
							func_33();
						
							if (Global_20383.f_1 > 3)
								Global_20383.f_1 = 7;
						}
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

BOOL func_1() // Position - 0x44E
{
	if (Global_20383.f_1 == 1 || Global_20383.f_1 == 3 || Global_20383.f_1 == 0 || Global_20327 == 1)
	{
		Global_20370 = 1;
		return true;
	}

	return false;
}

void func_2() // Position - 0x491
{
	func_7();

	if (func_4(0))
		func_3();

	if (!unk_0x055111B11E6624FD(unk_0xC1A5EC5C986B98AD(), 0))
		unk_0x666C647292ADF486(unk_0xC1A5EC5C986B98AD());

	if (bLocal_56)
		unk_0xCD3C8E1022864F65(1);

	if (Global_113648.f_14053.f_83 == 0 || Global_113648.f_14053.f_82 == 0)
		func_3();

	unk_0x577AE0048ADA90C8(0);
	unk_0x675D9C12C73D3DE7();
	return;
}

void func_3() // Position - 0x4F4
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

BOOL func_4(int iParam0) // Position - 0x571
{
	if (Global_43257 == 15)
		return false;

	if (_CAN_ENTER_FREEROAM_STATE(iParam0))
		return false;

	return true;
}

BOOL _CAN_ENTER_FREEROAM_STATE(int iParam0) // Position - 0x593
{
	return func_6(iParam0, Global_43257);
}

BOOL func_6(int iParam0, int iParam1) // Position - 0x5A4
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

void func_7() // Position - 0x785
{
	_UPDATE_CURRENT_PLAYER_CHARACTER();
	Global_9058[Global_20383 /*2811*/][0 /*281*/].f_124[2] = 1;
	return;
}

BOOL func_8() // Position - 0x7A4
{
	if (Global_8859 == 1 || Global_20383.f_1 < 7)
	{
		Global_20370 = 1;
		return true;
	}

	return false;
}

void func_9() // Position - 0x7CD
{
	if (!unk_0x055111B11E6624FD(unk_0xC1A5EC5C986B98AD(), 0))
		unk_0x531D638530A8DB97(-1, "Menu_Back", &Global_20372, 1);

	return;
}

BOOL func_10(int iParam0, int iParam1, int iParam2) // Position - 0x7EE
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

void func_11() // Position - 0x860
{
	int num;

	iLocal_54 = unk_0xA5E11AF0A2B928C1();
	num = iLocal_54 - uLocal_55;

	if (num % 600 <= 300 && num < 3000)
		unk_0xCA9F34C06A0529CE(0, 100, 100);

	return;
}

void func_12() // Position - 0x895
{
	int num;
	var unk;
	var unk17;
	int num2;

	if (iLocal_43 == 1)
	{
		if (bLocal_52)
		{
			iLocal_54 = unk_0xA5E11AF0A2B928C1();
		
			if (iLocal_54 - uLocal_55 > 1000)
			{
				bLocal_51 = true;
				bLocal_52 = false;
			}
		}
	
		if (unk_0x42AAFCB5B7854AA9(2))
		{
			if (unk_0x87644B1F984197FE(2, 180))
			{
				iLocal_65 = 1;
				iLocal_66 = 0;
			}
		
			if (unk_0x87644B1F984197FE(2, 181))
			{
				iLocal_65 = 0;
				iLocal_66 = 1;
			}
		}
	
		if (func_10(2, Global_20359, 0) || func_10(2, Global_20360, 0) || bLocal_51 || iLocal_65 == 1 || iLocal_66 == 1)
		{
			iLocal_65 = 0;
			iLocal_66 = 0;
			bLocal_51 = false;
			bLocal_52 = false;
			SYSTEM::SETTIMERB(0);
			bLocal_50 = true;
			unk_0x9FD96C5DE6EDFC15(Global_20364, "GET_CURRENT_SELECTION");
			uLocal_41 = unk_0x08320883763BEFA3();
		
			while (!unk_0x4F815B9C87A967FD(uLocal_41))
			{
				SYSTEM::WAIT(0);
			}
		
			iLocal_47 = uLocal_18[unk_0x67FFE44BB8589F1E(uLocal_41)];
		
			if (!unk_0x055111B11E6624FD(unk_0xC1A5EC5C986B98AD(), 0))
			{
				unk_0x666C647292ADF486(unk_0xC1A5EC5C986B98AD());
				SYSTEM::WAIT(100);
			
				if (!unk_0x055111B11E6624FD(unk_0xC1A5EC5C986B98AD(), 0))
				{
					if (!unk_0x576365AC5302CB44(unk_0xC1A5EC5C986B98AD()))
					{
						if (unk_0x4310A0DB886F9FED(&Global_9058[Global_20383 /*2811*/][1 /*281*/].f_144[iLocal_47 /*6*/], "Silent Ringtone Dummy"))
						{
						}
						else
						{
							unk_0xE3220B926FC33B0A(&Global_9058[Global_20383 /*2811*/][1 /*281*/].f_144[iLocal_47 /*6*/], unk_0xC1A5EC5C986B98AD(), 1);
						}
					}
				}
			}
		}
	}

	if (Global_20361 == false)
	{
		if (func_10(2, Global_20352, 0))
		{
			func_23();
			Global_20361 = true;
			unk_0x9FD96C5DE6EDFC15(Global_20364, "GET_CURRENT_SELECTION");
			uLocal_41 = unk_0x08320883763BEFA3();
		
			while (!unk_0x4F815B9C87A967FD(uLocal_41))
			{
				SYSTEM::WAIT(0);
			}
		
			iLocal_46 = unk_0x67FFE44BB8589F1E(uLocal_41);
		
			if (iLocal_46 < 0)
				iLocal_46 = 0;
		
			Global_9058[Global_20383 /*2811*/][iLocal_43 /*281*/].f_259 = uLocal_18[iLocal_46];
		
			if (iLocal_43 == 2)
			{
				num = Global_9058[Global_20383 /*2811*/][iLocal_43 /*281*/].f_259;
				Global_113648.f_14053[Global_20383 /*20*/].f_6 = Global_9058[Global_20383 /*2811*/][2 /*281*/].f_260[num];
				func_46(Global_20364, "SET_THEME", SYSTEM::TO_FLOAT(Global_113648.f_14053[Global_20383 /*20*/].f_6), -1082130432, -1082130432, -1082130432, -1082130432);
			
				if (Global_78558)
				{
					Global_4542573 = Global_9058[3 /*2811*/][2 /*281*/].f_259;
					_MPCHAR_STAT_SET_INT(MP_STAT_FM_CELLPHONE_THEME, Global_9058[3 /*2811*/][2 /*281*/].f_259, -1, 1, false);
					func_46(Global_20364, "SET_THEME", SYSTEM::TO_FLOAT(Global_4542573), -1082130432, -1082130432, -1082130432, -1082130432);
				}
				else
				{
					func_46(Global_20364, "SET_THEME", SYSTEM::TO_FLOAT(Global_113648.f_14053[Global_20383 /*20*/].f_6), -1082130432, -1082130432, -1082130432, -1082130432);
				}
			
				func_19();
				func_18(Global_20364, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(22), SYSTEM::TO_FLOAT(iLocal_45), SYSTEM::TO_FLOAT(23), -1f, -1f, &Global_9058[Global_20383 /*2811*/][iLocal_43 /*281*/].f_7[uLocal_18[iLocal_45] /*4*/], 0, 0, 0, 0);
				func_18(Global_20364, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(22), SYSTEM::TO_FLOAT(iLocal_46), SYSTEM::TO_FLOAT(48), -1f, -1f, &Global_9058[Global_20383 /*2811*/][iLocal_43 /*281*/].f_7[uLocal_18[iLocal_46] /*4*/], 0, 0, 0, 0);
				iLocal_45 = iLocal_46;
				func_46(Global_20364, "DISPLAY_VIEW", 22f, SYSTEM::TO_FLOAT(iLocal_46), -1082130432, -1082130432, -1082130432);
			}
		
			if (iLocal_43 == 4)
			{
				Global_113648.f_14053[Global_20383 /*20*/].f_9 = Global_9058[Global_20383 /*2811*/][iLocal_43 /*281*/].f_259;
			
				if (Global_78558)
				{
					Global_4542574 = Global_9058[3 /*2811*/][4 /*281*/].f_259;
					_MPCHAR_STAT_SET_INT(MP_STAT_FM_CELLPHONE_BACKGROUND, Global_9058[3 /*2811*/][4 /*281*/].f_259, -1, 1, false);
				
					if (Global_4542574 == 0)
					{
						unk17 = { func_17(unk_0x93E99A2DBCBA9CFA()) };
						num2 = 0;
						unk_0x5EEE0DA7B180E4F7(0) == 0;
					
						if (unk_0x7DD2CE58D33238D9(&unk17) && unk_0x5EEE0DA7B180E4F7(0) && Global_4542577 == 0)
						{
							SYSTEM::SETTIMERA(0);
						
							while (!unk_0x5513B5F4E17C7720(&unk17, &unk) && SYSTEM::TIMERA() < 3000)
							{
								SYSTEM::WAIT(0);
							
								if (SYSTEM::TIMERA() > 2999)
									num2 = 1;
							}
						
							if (num2 == 0)
							{
								unk_0x9FD96C5DE6EDFC15(Global_20364, "SET_BACKGROUND_CREW_IMAGE");
								unk_0x2AF11E92DE43CDE3("CELL_2000" /*~a~*/);
								unk_0x76B34CBB6F5FA1BB(&unk);
								unk_0xF8FCA9E7130CE1C8();
								unk_0xAE3413B0654A0035();
							}
						}
						else
						{
							func_46(Global_20364, "SET_BACKGROUND_IMAGE", SYSTEM::TO_FLOAT(0), -1082130432, -1082130432, -1082130432, -1082130432);
						}
					}
					else
					{
						func_46(Global_20364, "SET_BACKGROUND_IMAGE", SYSTEM::TO_FLOAT(Global_4542574), -1082130432, -1082130432, -1082130432, -1082130432);
					}
				}
				else
				{
					func_46(Global_20364, "SET_BACKGROUND_IMAGE", SYSTEM::TO_FLOAT(Global_113648.f_14053[Global_20383 /*20*/].f_9), -1082130432, -1082130432, -1082130432, -1082130432);
				}
			
				func_18(Global_20364, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(22), SYSTEM::TO_FLOAT(iLocal_45), SYSTEM::TO_FLOAT(23), -1f, -1f, &Global_9058[Global_20383 /*2811*/][iLocal_43 /*281*/].f_7[uLocal_18[iLocal_45] /*4*/], 0, 0, 0, 0);
				func_18(Global_20364, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(22), SYSTEM::TO_FLOAT(iLocal_46), SYSTEM::TO_FLOAT(48), -1f, -1f, &Global_9058[Global_20383 /*2811*/][iLocal_43 /*281*/].f_7[uLocal_18[iLocal_46] /*4*/], 0, 0, 0, 0);
				iLocal_45 = iLocal_46;
				func_46(Global_20364, "DISPLAY_VIEW", 22f, SYSTEM::TO_FLOAT(iLocal_46), -1082130432, -1082130432, -1082130432);
			}
		
			if (iLocal_43 == 1)
			{
				Global_113648.f_14053[Global_20383 /*20*/].f_11 = { Global_9058[Global_20383 /*2811*/][1 /*281*/].f_144[Global_9058[Global_20383 /*2811*/][1 /*281*/].f_259 /*6*/] };
			
				if (Global_78558)
					_MPCHAR_STAT_SET_INT(MP_STAT_FM_CELLPHONE_RINGTONE, Global_9058[3 /*2811*/][1 /*281*/].f_259, -1, 1, false);
			
				func_18(Global_20364, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(22), SYSTEM::TO_FLOAT(iLocal_45), SYSTEM::TO_FLOAT(18), -1f, -1f, &Global_9058[Global_20383 /*2811*/][iLocal_43 /*281*/].f_7[uLocal_18[iLocal_45] /*4*/], 0, 0, 0, 0);
				func_18(Global_20364, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(22), SYSTEM::TO_FLOAT(iLocal_46), SYSTEM::TO_FLOAT(48), -1f, -1f, &Global_9058[Global_20383 /*2811*/][iLocal_43 /*281*/].f_7[uLocal_18[iLocal_46] /*4*/], 0, 0, 0, 0);
				iLocal_45 = iLocal_46;
				func_46(Global_20364, "DISPLAY_VIEW", 22f, SYSTEM::TO_FLOAT(iLocal_46), -1082130432, -1082130432, -1082130432);
			}
		
			if (iLocal_43 == 3)
			{
				Global_113648.f_14053[Global_20383 /*20*/].f_10 = Global_9058[Global_20383 /*2811*/][iLocal_43 /*281*/].f_259;
			
				if (Global_78558)
					_MPCHAR_STAT_SET_INT(MP_STAT_FM_CELLPHONE_VIBRATE, Global_113648.f_14053[3 /*20*/].f_10, -1, 1, false);
			
				if (Global_113648.f_14053[Global_20383 /*20*/].f_10 == 1)
				{
					bLocal_53 = true;
					uLocal_55 = unk_0xA5E11AF0A2B928C1();
				}
				else
				{
					bLocal_53 = false;
				}
			}
		
			if (iLocal_43 == 0)
			{
				if (Global_78558 == true)
				{
					Global_9058[3 /*2811*/][iLocal_43 /*281*/].f_259 = uLocal_18[iLocal_46];
					func_18(Global_20364, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(22), SYSTEM::TO_FLOAT(iLocal_45), SYSTEM::TO_FLOAT(19), -1f, -1f, &Global_9058[Global_20383 /*2811*/][iLocal_43 /*281*/].f_7[uLocal_18[iLocal_45] /*4*/], 0, 0, 0, 0);
					func_18(Global_20364, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(22), SYSTEM::TO_FLOAT(iLocal_46), SYSTEM::TO_FLOAT(48), -1f, -1f, &Global_9058[Global_20383 /*2811*/][iLocal_43 /*281*/].f_7[uLocal_18[iLocal_46] /*4*/], 0, 0, 0, 0);
					iLocal_45 = iLocal_46;
					func_46(Global_20364, "DISPLAY_VIEW", 22f, SYSTEM::TO_FLOAT(iLocal_46), -1082130432, -1082130432, -1082130432);
					_MPCHAR_STAT_SET_INT(MP_STAT_FM_CELLPHONE_QUICKLAUNCH, Global_9058[3 /*2811*/][iLocal_43 /*281*/].f_259, -1, 1, false);
				}
				else
				{
					Global_9058[0 /*2811*/][iLocal_43 /*281*/].f_259 = uLocal_18[iLocal_46];
					Global_9058[1 /*2811*/][iLocal_43 /*281*/].f_259 = uLocal_18[iLocal_46];
					Global_9058[2 /*2811*/][iLocal_43 /*281*/].f_259 = uLocal_18[iLocal_46];
				
					if (Global_9058[Global_20383 /*2811*/][0 /*281*/].f_259 == 2)
					{
						if (Global_43257 == 15)
						{
							if (Global_113648.f_14053.f_82 == 0)
							{
								unk_0xCD3C8E1022864F65(1);
								func_16("CELL_7050" /*If you select Sleep Mode you will not receive incoming calls. This can pause game story progression. ~n~Select Normal Mode from this menu or trigger an existing mission to leave Sleep Mode.*/);
								fLocal_63 == fLocal_64;
								bLocal_56 = true;
							}
							else
							{
								func_46(Global_20364, "SET_SLEEP_MODE", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
								unk_0xECDAB41968FF21A8(&Global_8253, 25);
								unk_0xECDAB41968FF21A8(&Global_8254, 11);
							
								if (Global_113648.f_14053.f_83 == 0)
								{
									unk_0xCD3C8E1022864F65(1);
									_DISPLAY_HELP_TEXT("CELL_7051" /*When Sleep Mode is active, the Sleep symbol will be displayed near the Radar.*/, -1);
									Global_113648.f_14053.f_83 = 1;
								}
							}
						}
					}
					else
					{
						func_46(Global_20364, "SET_SLEEP_MODE", 0f, -1082130432, -1082130432, -1082130432, -1082130432);
						unk_0x061B1200C95204CB(&Global_8253, 25);
						unk_0xECDAB41968FF21A8(&Global_8254, 11);
					}
				}
			}
		
			func_13(Global_20364, "SET_HEADER", &Global_9058[Global_20383 /*2811*/][iLocal_43 /*281*/].f_7[Global_9058[Global_20383 /*2811*/][iLocal_43 /*281*/].f_259 /*4*/], 0, 0, 0, 0);
		
			if (func_4(0))
				func_3();
		}
	}

	return;
}

void func_13(int iParam0, char* sParam1, char* sParam2, char* sParam3, char* sParam4, char* sParam5, char* sParam6) // Position - 0x1152
{
	unk_0x9FD96C5DE6EDFC15(iParam0, sParam1);
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

void func_14(char* sParam0) // Position - 0x11AD
{
	unk_0x2AF11E92DE43CDE3(sParam0);
	unk_0xF8FCA9E7130CE1C8();
	return;
}

void _DISPLAY_HELP_TEXT(char* text, int iParam1) // Position - 0x11BF
{
	unk_0x476CC3711883B966(text);
	unk_0xBC8969B539DCA239(0, 0, 1, iParam1);
	return;
}

void func_16(char* sParam0) // Position - 0x11D6
{
	unk_0x476CC3711883B966(sParam0);
	unk_0xBC8969B539DCA239(0, 1, 1, -1);
	return;
}

struct<13> func_17(var uParam0) // Position - 0x11EC
{
	var unk;

	unk_0x23BD70608BA4F8D9(uParam0, &unk, 13);
	return unk;
}

void func_18(int iParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6, char* sParam7, char* sParam8, char* sParam9, char* sParam10, char* sParam11) // Position - 0x1203
{
	unk_0x9FD96C5DE6EDFC15(iParam0, sParam1);
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

	if (!unk_0x2AC37494BBF1DB16(sParam8))
		func_14(sParam8);

	if (!unk_0x2AC37494BBF1DB16(sParam9))
		func_14(sParam9);

	if (!unk_0x2AC37494BBF1DB16(sParam10))
		func_14(sParam10);

	if (!unk_0x2AC37494BBF1DB16(sParam11))
		func_14(sParam11);

	unk_0xAE3413B0654A0035();
	return;
}

void func_19() // Position - 0x12B6
{
	if (!unk_0x055111B11E6624FD(unk_0xC1A5EC5C986B98AD(), 0))
	{
		if (Global_20383 == CHAR_MICHAEL)
		{
			switch (Global_113648.f_14053[Global_20383 /*20*/].f_6)
			{
				case 1:
					unk_0xE41C8C5C1EACC561(unk_0x93E99A2DBCBA9CFA(), 0);
					break;
			
				case 2:
					unk_0xE41C8C5C1EACC561(unk_0x93E99A2DBCBA9CFA(), 1);
					break;
			
				case 3:
					unk_0xE41C8C5C1EACC561(unk_0x93E99A2DBCBA9CFA(), 2);
					break;
			
				case 4:
					unk_0xE41C8C5C1EACC561(unk_0x93E99A2DBCBA9CFA(), 3);
					break;
			
				case 5:
					unk_0xE41C8C5C1EACC561(unk_0x93E99A2DBCBA9CFA(), 4);
					break;
			
				case 6:
					unk_0xE41C8C5C1EACC561(unk_0x93E99A2DBCBA9CFA(), 5);
					break;
			
				case 7:
					unk_0xE41C8C5C1EACC561(unk_0x93E99A2DBCBA9CFA(), 6);
					break;
			
				default:
					break;
			}
		}
	
		if (Global_20383 == CHAR_FRANKLIN)
		{
			switch (Global_113648.f_14053[Global_20383 /*20*/].f_6)
			{
				case 1:
					unk_0xE41C8C5C1EACC561(unk_0x93E99A2DBCBA9CFA(), 6);
					break;
			
				case 2:
					unk_0xE41C8C5C1EACC561(unk_0x93E99A2DBCBA9CFA(), 0);
					break;
			
				case 3:
					unk_0xE41C8C5C1EACC561(unk_0x93E99A2DBCBA9CFA(), 1);
					break;
			
				case 4:
					unk_0xE41C8C5C1EACC561(unk_0x93E99A2DBCBA9CFA(), 2);
					break;
			
				case 5:
					unk_0xE41C8C5C1EACC561(unk_0x93E99A2DBCBA9CFA(), 3);
					break;
			
				case 6:
					unk_0xE41C8C5C1EACC561(unk_0x93E99A2DBCBA9CFA(), 4);
					break;
			
				case 7:
					unk_0xE41C8C5C1EACC561(unk_0x93E99A2DBCBA9CFA(), 5);
					break;
			
				default:
					break;
			}
		}
	
		if (Global_20383 == CHAR_TREVOR)
		{
			switch (Global_113648.f_14053[Global_20383 /*20*/].f_6)
			{
				case 1:
					unk_0xE41C8C5C1EACC561(unk_0x93E99A2DBCBA9CFA(), 5);
					break;
			
				case 2:
					unk_0xE41C8C5C1EACC561(unk_0x93E99A2DBCBA9CFA(), 6);
					break;
			
				case 3:
					unk_0xE41C8C5C1EACC561(unk_0x93E99A2DBCBA9CFA(), 1);
					break;
			
				case 4:
					unk_0xE41C8C5C1EACC561(unk_0x93E99A2DBCBA9CFA(), 0);
					break;
			
				case 5:
					unk_0xE41C8C5C1EACC561(unk_0x93E99A2DBCBA9CFA(), 2);
					break;
			
				case 6:
					unk_0xE41C8C5C1EACC561(unk_0x93E99A2DBCBA9CFA(), 3);
					break;
			
				case 7:
					unk_0xE41C8C5C1EACC561(unk_0x93E99A2DBCBA9CFA(), 4);
					break;
			
				default:
					break;
			}
		}
	
		if (Global_20383 == CHAR_MULTIPLAYER)
		{
			switch (Global_4542573)
			{
				case 1:
					unk_0xE41C8C5C1EACC561(unk_0x93E99A2DBCBA9CFA(), 0);
					break;
			
				case 2:
					unk_0xE41C8C5C1EACC561(unk_0x93E99A2DBCBA9CFA(), 1);
					break;
			
				case 3:
					unk_0xE41C8C5C1EACC561(unk_0x93E99A2DBCBA9CFA(), 2);
					break;
			
				case 4:
					unk_0xE41C8C5C1EACC561(unk_0x93E99A2DBCBA9CFA(), 3);
					break;
			
				case 5:
					unk_0xE41C8C5C1EACC561(unk_0x93E99A2DBCBA9CFA(), 4);
					break;
			
				case 6:
					unk_0xE41C8C5C1EACC561(unk_0x93E99A2DBCBA9CFA(), 5);
					break;
			
				case 7:
					unk_0xE41C8C5C1EACC561(unk_0x93E99A2DBCBA9CFA(), 6);
					break;
			
				default:
					break;
			}
		}
	}

	return;
}

void _MPCHAR_STAT_SET_INT(eMPStat empsParam0, int iParam1, int iParam2, int iParam3, BOOL bParam4) // Position - 0x152D
{
	int num;

	bParam4;
	num = Global_2805027[empsParam0 /*3*/][func_21(iParam2)];

	if (num != 0)
		unk_0x3CC35ACFFC9C730E(num, iParam1, iParam3);

	return;
}

int func_21(int iParam0) // Position - 0x155D
{
	int num;
	int num2;

	num = iParam0;

	if (num == -1)
	{
		num2 = func_22();
	
		if (num2 > -1)
		{
			Global_2804739 = 0;
			num = num2;
		}
		else
		{
			num = 0;
			Global_2804739 = 1;
		}
	}

	return num;
}

int func_22() // Position - 0x1591
{
	return Global_1574918;
}

void func_23() // Position - 0x159D
{
	if (!unk_0x055111B11E6624FD(unk_0xC1A5EC5C986B98AD(), 0))
	{
		unk_0x531D638530A8DB97(-1, "Menu_Accept", &Global_20372, 1);
		func_24();
	}

	return;
}

void func_24() // Position - 0x15C2
{
	if (func_25())
		unk_0x8C27BB4299B24A0D(5);

	return;
}

BOOL func_25() // Position - 0x15D6
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

void func_26() // Position - 0x161D
{
	if (Global_20361 == false)
	{
		if (func_10(2, Global_20352, 0))
		{
			func_23();
			Global_20361 = true;
			unk_0x9FD96C5DE6EDFC15(Global_20364, "GET_CURRENT_SELECTION");
			uLocal_41 = unk_0x08320883763BEFA3();
		
			while (!unk_0x4F815B9C87A967FD(uLocal_41))
			{
				SYSTEM::WAIT(0);
			}
		
			iLocal_44 = unk_0x67FFE44BB8589F1E(uLocal_41);
			iLocal_43 = uLocal_18[iLocal_44];
		
			switch (iLocal_43)
			{
				case 0:
					if (Global_78558 == false)
					{
						if (Global_43257 == 15)
						{
							if (Global_113648.f_14053.f_82 == 0)
							{
								unk_0xCD3C8E1022864F65(1);
								func_16("CELL_7050" /*If you select Sleep Mode you will not receive incoming calls. This can pause game story progression. ~n~Select Normal Mode from this menu or trigger an existing mission to leave Sleep Mode.*/);
								fLocal_63 == fLocal_64;
								bLocal_56 = true;
							}
						}
					}
					break;
			
				case 1:
					break;
			
				case 2:
					break;
			
				case 3:
					break;
			}
		
			if (Global_20383.f_1 > 3)
				Global_20383.f_1 = 8;
		
			func_27();
			bLocal_52 = true;
			uLocal_55 = unk_0xA5E11AF0A2B928C1();
		}
	}

	return;
}

void func_27() // Position - 0x16EF
{
	var unk;
	int value;
	var unk21;
	int num;
	int num2;

	func_46(Global_20364, "SET_DATA_SLOT_EMPTY", 22f, -1082130432, -1082130432, -1082130432, -1082130432);
	iLocal_39 = 0;
	unk = 19;
	value = 0;

	if (Global_78558)
	{
		TEXT_LABEL_ASSIGN_STRING(&Global_9058[3 /*2811*/][4 /*281*/].f_7[0 /*4*/], "CELL_CREWEMB" /*Crew Emblem*/, 16);
		unk21 = { func_17(unk_0x93E99A2DBCBA9CFA()) };
	
		if (!unk_0x7DD2CE58D33238D9(&unk21))
			TEXT_LABEL_ASSIGN_STRING(&Global_9058[3 /*2811*/][4 /*281*/].f_7[0 /*4*/], "CELL_840" /*Default*/, 16);
	}

	while (value < 19)
	{
		num = 0;
		num2 = 18;
		Global_9058[Global_20383 /*2811*/][iLocal_43 /*281*/].f_84[num2] = 5000;
	
		while (num < 19)
		{
			if (Global_9058[Global_20383 /*2811*/][iLocal_43 /*281*/].f_124[num] == 1)
			{
				if (unk[num] == 0)
				{
					if (Global_9058[Global_20383 /*2811*/][iLocal_43 /*281*/].f_84[num] < Global_9058[Global_20383 /*2811*/][iLocal_43 /*281*/].f_84[num2])
					{
						num2 = num;
						func_18(Global_20364, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(22), SYSTEM::TO_FLOAT(value), SYSTEM::TO_FLOAT(Global_9058[Global_20383 /*2811*/][iLocal_43 /*281*/].f_104[num2]), -1f, -1f, &Global_9058[Global_20383 /*2811*/][iLocal_43 /*281*/].f_7[num2 /*4*/], 0, 0, 0, 0);
					}
				}
			}
		
			num = num + 1;
		}
	
		uLocal_18[value] = num2;
		unk[num2] = 1;
	
		if (unk_0x4310A0DB886F9FED(&Global_9058[Global_20383 /*2811*/][iLocal_43 /*281*/].f_7[Global_9058[Global_20383 /*2811*/][iLocal_43 /*281*/].f_259 /*4*/], &Global_9058[Global_20383 /*2811*/][iLocal_43 /*281*/].f_7[num2 /*4*/]))
		{
			iLocal_48 = value;
		
			if (iLocal_48 < 0)
				iLocal_48 = 0;
		
			if (iLocal_43 == 1 || iLocal_43 == 4 || iLocal_43 == 2)
			{
				func_18(Global_20364, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(22), SYSTEM::TO_FLOAT(value), SYSTEM::TO_FLOAT(48), -1f, -1f, &Global_9058[Global_20383 /*2811*/][iLocal_43 /*281*/].f_7[num2 /*4*/], 0, 0, 0, 0);
				iLocal_45 = value;
			}
		
			if (iLocal_43 == 0 && Global_78558 == true)
			{
				func_18(Global_20364, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(22), SYSTEM::TO_FLOAT(value), SYSTEM::TO_FLOAT(48), -1f, -1f, &Global_9058[Global_20383 /*2811*/][iLocal_43 /*281*/].f_7[num2 /*4*/], 0, 0, 0, 0);
				iLocal_45 = value;
			}
		}
	
		if (Global_9058[Global_20383 /*2811*/][iLocal_43 /*281*/].f_124[value] == 1)
			iLocal_39 = iLocal_39 + 1;
	
		value = value + 1;
	}

	func_46(Global_20364, "DISPLAY_VIEW", 22f, -1082130432, -1082130432, -1082130432, -1082130432);
	func_13(Global_20364, "SET_HEADER", &Global_9058[Global_20383 /*2811*/][iLocal_43 /*281*/].f_7[Global_9058[Global_20383 /*2811*/][iLocal_43 /*281*/].f_259 /*4*/], 0, 0, 0, 0);

	if (Global_20371)
	{
		func_18(Global_20364, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, "CELL_205" /*SELECT*/, 0, 0, 0, 0);
		func_18(Global_20364, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, "CELL_206" /*BACK*/, 0, 0, 0, 0);
	}
	else
	{
		func_18(Global_20364, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, 0, 0, 0, 0, 0);
		func_18(Global_20364, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, 0, 0, 0, 0, 0);
	}

	func_18(Global_20364, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
	unk_0x061B1200C95204CB(&Global_8253, 17);
	return;
}

void func_28() // Position - 0x1A34
{
	if (bLocal_62)
		if (SYSTEM::TIMERA() > 50)
			bLocal_62 = false;

	if (unk_0x42AAFCB5B7854AA9(2))
	{
		if (func_10(2, 181, 0))
		{
			if (iLocal_40 > 0)
				iLocal_40 = iLocal_40 - 1;
		
			func_31();
		}
	
		if (func_10(2, 180, 0))
		{
			iLocal_40 = iLocal_40 + 1;
		
			if (iLocal_40 == iLocal_39)
				iLocal_40 = 0;
		
			func_29();
		}
	}

	if (bLocal_62 == false)
	{
		if (func_10(2, Global_20359, 0))
		{
			if (iLocal_40 > 0)
				iLocal_40 = iLocal_40 - 1;
		
			func_31();
			bLocal_62 = true;
			SYSTEM::SETTIMERA(0);
		}
	
		if (func_10(2, Global_20360, 0))
		{
			iLocal_40 = iLocal_40 + 1;
		
			if (iLocal_40 == iLocal_39)
				iLocal_40 = 0;
		
			func_29();
			bLocal_62 = true;
			SYSTEM::SETTIMERA(0);
		}
	}

	return;
}

void func_29() // Position - 0x1AE1
{
	func_46(Global_20364, "SET_INPUT_EVENT", SYSTEM::TO_FLOAT(3), -1082130432, -1082130432, -1082130432, -1082130432);
	unk_0x531D638530A8DB97(-1, "Menu_Navigate", &Global_20372, 1);
	func_30();
	return;
}

void func_30() // Position - 0x1B1E
{
	if (func_25())
		if (Global_20589 == 0)
			unk_0x8C27BB4299B24A0D(2);
		else
			unk_0x8C27BB4299B24A0D(1);

	return;
}

void func_31() // Position - 0x1B41
{
	func_46(Global_20364, "SET_INPUT_EVENT", SYSTEM::TO_FLOAT(1), -1082130432, -1082130432, -1082130432, -1082130432);
	unk_0x531D638530A8DB97(-1, "Menu_Navigate", &Global_20372, 1);
	func_32();
	return;
}

void func_32() // Position - 0x1B7E
{
	if (func_25())
		if (Global_20589 == 0)
			unk_0x8C27BB4299B24A0D(1);
		else
			unk_0x8C27BB4299B24A0D(2);

	return;
}

void func_33() // Position - 0x1BA1
{
	var unk;
	int i;
	int num;
	int num2;

	iLocal_39 = 0;
	unk = 20;

	for (i = 0; i < 9; i = i + 1)
	{
		num = 0;
		num2 = 9;
		Global_9058[Global_20383 /*2811*/][num2 /*281*/] = 5000;
	
		if (unk_0x516080EA609481E1(2) == 0)
			Global_9058[Global_20383 /*2811*/][3 /*281*/].f_280 = 0;
		else
			Global_9058[Global_20383 /*2811*/][3 /*281*/].f_280 = 1;
	
		while (num < 9)
		{
			if (Global_9058[Global_20383 /*2811*/][num /*281*/].f_280 == 1)
			{
				if (unk[num] == 0)
				{
					if (Global_9058[Global_20383 /*2811*/][num /*281*/] < Global_9058[Global_20383 /*2811*/][num2 /*281*/])
					{
						if (Global_78558)
						{
							if (num == 0)
							{
								num2 = num;
								func_42(num, num2);
								func_18(Global_20364, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(13), SYSTEM::TO_FLOAT(i), SYSTEM::TO_FLOAT(iLocal_49), -1f, -1f, &(Global_9058[Global_20383 /*2811*/][num2 /*281*/].f_2), 0, 0, 0, 0);
							}
							else
							{
								num2 = num;
								func_42(num, num2);
								func_18(Global_20364, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(13), SYSTEM::TO_FLOAT(i), SYSTEM::TO_FLOAT(iLocal_49), -1f, -1f, &(Global_9058[Global_20383 /*2811*/][num2 /*281*/].f_2), 0, 0, 0, 0);
							}
						}
						else if (func_34() == 2)
						{
							if (num == 4 || num == 5)
							{
							}
							else
							{
								num2 = num;
								func_42(num, num2);
								func_18(Global_20364, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(13), SYSTEM::TO_FLOAT(i), SYSTEM::TO_FLOAT(iLocal_49), -1f, -1f, &(Global_9058[Global_20383 /*2811*/][num2 /*281*/].f_2), 0, 0, 0, 0);
							}
						}
						else if (num == 5)
						{
						}
						else
						{
							num2 = num;
							func_42(num, num2);
							func_18(Global_20364, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(13), SYSTEM::TO_FLOAT(i), SYSTEM::TO_FLOAT(iLocal_49), -1f, -1f, &(Global_9058[Global_20383 /*2811*/][num2 /*281*/].f_2), 0, 0, 0, 0);
						}
					}
				}
			}
		
			num = num + 1;
		}
	
		uLocal_18[i] = num2;
		unk[num2] = 1;
	
		if (Global_9058[Global_20383 /*2811*/][i /*281*/].f_280 == 1)
			iLocal_39 = iLocal_39 + 1;
	}

	func_46(Global_20364, "DISPLAY_VIEW", 13f, SYSTEM::TO_FLOAT(iLocal_44), -1082130432, -1082130432, -1082130432);
	func_13(Global_20364, "SET_HEADER", "CELL_16" /*Settings*/, 0, 0, 0, 0);

	if (Global_20371)
	{
		func_18(Global_20364, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, "CELL_205" /*SELECT*/, 0, 0, 0, 0);
		func_18(Global_20364, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, "CELL_206" /*BACK*/, 0, 0, 0, 0);
	}
	else
	{
		func_18(Global_20364, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, 0, 0, 0, 0, 0);
		func_18(Global_20364, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, 0, 0, 0, 0, 0);
	}

	func_18(Global_20364, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
	unk_0x061B1200C95204CB(&Global_8253, 17);
	return;
}

int func_34() // Position - 0x1E6D
{
	if (Global_78558)
		Global_20383 = CHAR_MULTIPLAYER;
	else
		Global_20383 = _GET_CURRENT_PLAYER_CHARACTER();

	if (Global_20383 > CHAR_MULTIPLAYER)
		Global_20383 = CHAR_MULTIPLAYER;

	return Global_113648.f_14053[Global_20383 /*20*/].f_7;
}

eCharacter _GET_CURRENT_PLAYER_CHARACTER() // Position - 0x1EA3
{
	func_36();
	return Global_113648.f_2365.f_539.f_4321;
}

void func_36() // Position - 0x1EBC
{
	eCharacter character;

	if (unk_0x7DE17ACDD8BA2642(unk_0xC1A5EC5C986B98AD()))
	{
		if (_GET_CHARACTER_MODEL(Global_113648.f_2365.f_539.f_4321) != unk_0x504B9BB48D41C264(unk_0xC1A5EC5C986B98AD()))
		{
			character = _GET_PLAYER_CHARACTER_FROM_PED(unk_0xC1A5EC5C986B98AD());
		
			if (func_38(character) && !func_37(14) || Global_112599)
			{
				if (Global_113648.f_2365.f_539.f_4321 != character && func_38(Global_113648.f_2365.f_539.f_4321))
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

BOOL func_37(int iParam0) // Position - 0x1FB9
{
	return Global_43257 == iParam0;
}

BOOL func_38(eCharacter echParam0) // Position - 0x1FC7
{
	return echParam0 < CHAR_MULTIPLAYER;
}

eCharacter _GET_PLAYER_CHARACTER_FROM_PED(var uParam0) // Position - 0x1FD3
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

int _GET_CHARACTER_MODEL(eCharacter character) // Position - 0x2010
{
	if (func_38(character))
		return func_41(character);
	else
		character != _CHAR_NULL;

	return 0;
}

int func_41(eCharacter echParam0) // Position - 0x2035
{
	return Global_2028[echParam0 /*29*/];
}

void func_42(int iParam0, int iParam1) // Position - 0x2044
{
	switch (iParam0)
	{
		case 0:
			if (Global_78558)
				iLocal_49 = 19;
			else if (Global_9058[Global_20383 /*2811*/][0 /*281*/].f_259 == 2)
				iLocal_49 = 26;
			else
				iLocal_49 = 25;
			break;
	
		case 3:
			if (Global_9058[Global_20383 /*2811*/][3 /*281*/].f_259 == 1)
				iLocal_49 = 20;
			else
				iLocal_49 = 21;
			break;
	
		default:
			iLocal_49 = Global_9058[Global_20383 /*2811*/][iParam1 /*281*/].f_6;
			break;
	}

	return;
}

void func_43() // Position - 0x20C6
{
	if (Global_43257 != 15)
	{
		_UPDATE_CURRENT_PLAYER_CHARACTER();
		Global_9058[Global_20383 /*2811*/][0 /*281*/].f_124[2] = 0;
	}

	return;
}

int _MPCHAR_STAT_GET_INT(eMPStat empsParam0, int iParam1, int iParam2) // Position - 0x20ED
{
	int num;
	int num2;

	if (empsParam0 != 14192)
	{
		iParam2 == 0;
		num = Global_2805027[empsParam0 /*3*/][func_21(iParam1)];
	
		if (unk_0xDD7756E2742E0F6D(num, &num2, -1))
			return num2;
	}

	return 0;
}

void _UPDATE_CURRENT_PLAYER_CHARACTER() // Position - 0x212A
{
	if (func_37(14))
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

void func_46(int iParam0, char* sParam1, float fParam2, int iParam3, int iParam4, int iParam5, int iParam6) // Position - 0x21CC
{
	unk_0x9FD96C5DE6EDFC15(iParam0, sParam1);
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

