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
	int iLocal_45 = 0;
	int iLocal_46 = 0;
	var uLocal_47 = 0;
	var uLocal_48 = 0;
	var uLocal_49 = 0;
	var uLocal_50 = 0;
	var uLocal_51 = 0;
	var uLocal_52 = 0;
	var uLocal_53 = 0;
	var uLocal_54 = 0;
	var uLocal_55 = 0;
	int iLocal_56 = 0;
	var uLocal_57 = 0;
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
	uLocal_47 = { uScriptParam_0.f_1[0 /*3*/] };
	iLocal_44 = unk_0x15A88CFAAFFC6C4B(0, 2);
	func_28();

	if (unk_0x55EEDBBFDC6E810F(11))
		func_28();

	while (true)
	{
		SYSTEM::WAIT(0);
	
		if (unk_0xCBE2EC2868A6C438())
		{
			if (func_8(3))
			{
				switch (iLocal_43)
				{
					case 0:
						if (iLocal_45 == 1)
							iLocal_43 = 1;
						else
							func_7();
						break;
				
					case 1:
						if (!unk_0x055111B11E6624FD(uLocal_54, 0))
							if (iLocal_46 == 0)
								if (func_2(uLocal_54, 0, 1056964608, 0, 0, false))
									iLocal_46 = 1;
					
						if (iLocal_56 == 0)
							func_1();
						break;
				}
			}
			else
			{
				func_28();
			}
		}
		else
		{
			func_28();
		}
	}

	return;
}

void func_1() // Position - 0x119
{
	if (SYSTEM::TIMERB() > 10000)
	{
		if (unk_0x1C4E4DC1EFE24DF1(unk_0xC1A5EC5C986B98AD(), uLocal_47, 10f, 10f, 10f, 0, 1, 0) && !unk_0x3C3D6D026CF7F51B(unk_0xC1A5EC5C986B98AD(), 0))
		{
			SYSTEM::SETTIMERB(0);
		
			if (!unk_0x055111B11E6624FD(uLocal_54, 0))
			{
				if (iLocal_44 == 0)
				{
					iLocal_46 == 0;
					unk_0xDBC7406226B5540E(&uLocal_57);
					unk_0x06A2A5F6A6959BE7(0, unk_0xC1A5EC5C986B98AD(), 0);
					unk_0x3EE48ADC8C7F5CC4(0, "amb@drug_dealer", "beckon_03", 8f, -8f, -1, 0, 0, 0, 0, 0);
					unk_0xF2CFC6EC8C85FA78(uLocal_57);
					unk_0x3D7110D966B0CEA2(uLocal_54, uLocal_57);
					unk_0x63EF69C6969A3D26(&uLocal_57);
				}
				else if (!unk_0x055111B11E6624FD(uLocal_55, 0))
				{
					unk_0x06A2A5F6A6959BE7(uLocal_54, uLocal_55, 0);
					iLocal_46 == 0;
					unk_0x984708151807AC6D(uLocal_55, 1193033728, 0);
					iLocal_44 = 0;
				}
			}
		}
	}

	return;
}

BOOL func_2(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, BOOL bParam5) // Position - 0x1E1
{
	float num;

	if (iParam4 == 2)
		num = 150f;
	else if (iParam4 == 1)
		num = 100f;
	else if (iParam4 == 0)
		num = 40f;

	switch (iParam3)
	{
		case 2:
			if (func_3(uParam0, func_6(iParam1, 2, iParam2), num, iParam2, bParam5))
				return true;
		
			if (func_3(uParam0, func_6(iParam1, 3, iParam2), num, iParam2, bParam5))
				return true;
		
			if (func_3(uParam0, func_6(iParam1, 5, iParam2), num, iParam2, bParam5))
				return true;
		
			if (func_3(uParam0, func_6(iParam1, 6, iParam2), num, iParam2, bParam5))
				return true;
		
			if (func_3(uParam0, func_6(iParam1, 7, iParam2), num, iParam2, bParam5))
				return true;
		
			if (func_3(uParam0, func_6(iParam1, 8, iParam2), num, iParam2, bParam5))
				return true;
		
			[[fallthrough]];
	
		case 1:
			if (func_3(uParam0, func_6(iParam1, 1, iParam2), num, iParam2, bParam5))
				return true;
		
			[[fallthrough]];
	
		case 0:
			if (func_3(uParam0, func_6(iParam1, 0, iParam2), num, iParam2, bParam5))
				return true;
			break;
	}

	return false;
}

BOOL func_3(var uParam0, var uParam1, var uParam2, var uParam3, float fParam4, int iParam5, BOOL bParam6) // Position - 0x314
{
	float num;
	var unk;

	if (iParam5 < 1f)
		num = 1f + 0.5f;
	else
		num = iParam5 + 0.5f;

	unk = { iParam5 + 0.2f, iParam5 + 0.2f, num };

	if (!unk_0x66599E73DBA5A850(uParam0))
	{
		if (unk_0x1C4E4DC1EFE24DF1(unk_0xC1A5EC5C986B98AD(), unk_0x7394CB479CCA24AF(uParam0, uParam1), unk, 0, 1, 0) && unk_0x55EDDA33F4D8BBE2(unk_0xC1A5EC5C986B98AD(), unk_0x30BE8A934C020461(uParam0, 1), fParam4) && func_5(bParam6) && !unk_0x48A4D45B3B4CEFFD(uParam0) && !unk_0xBACC143C07E3925E(uParam0))
		{
			func_4(uParam0, true);
			return true;
		}
		else
		{
			func_4(uParam0, false);
		}
	}

	return false;
}

void func_4(var uParam0, BOOL bParam1) // Position - 0x3C7
{
	bParam1;
	!unk_0x055111B11E6624FD(uParam0, 0);
	return;
}

BOOL func_5(BOOL bParam0) // Position - 0x3DF
{
	if (unk_0x1B82EF141CC65934(unk_0x93E99A2DBCBA9CFA()))
		if (bParam0)
			if (unk_0xB3C2812E280A588D(unk_0xC1A5EC5C986B98AD()) == 1f || unk_0xB3C2812E280A588D(unk_0xC1A5EC5C986B98AD()) == 0f)
				return true;
		else if (unk_0xB3C2812E280A588D(unk_0xC1A5EC5C986B98AD()) == 1f)
			return true;

	return false;
}

Vector3 func_6(int iParam0, int iParam1, int iParam2) // Position - 0x42D
{
	var unk;

	switch (iParam1)
	{
		case 0:
			if (iParam0 == 0)
				unk = { 0f, iParam2, 0f };
			else if (iParam0 == 1)
				unk = { iParam2, 0f, 0f };
			else if (iParam0 == 3)
				unk = { 0f, -iParam2, 0f };
			else if (iParam0 == 2)
				unk = { -iParam2, 0f, 0f };
			break;
	
		case 1:
			if (iParam0 == 3)
				unk = { 0f, iParam2, 0f };
			else if (iParam0 == 2)
				unk = { iParam2, 0f, 0f };
			else if (iParam0 == 0)
				unk = { 0f, -iParam2, 0f };
			else if (iParam0 == 1)
				unk = { -iParam2, 0f, 0f };
			break;
	
		case 2:
			if (iParam0 == 2)
				unk = { 0f, iParam2, 0f };
			else if (iParam0 == 3)
				unk = { iParam2, 0f, 0f };
			else if (iParam0 == 1)
				unk = { 0f, -iParam2, 0f };
			else if (iParam0 == 0)
				unk = { -iParam2, 0f, 0f };
			break;
	
		case 3:
			if (iParam0 == 1)
				unk = { 0f, iParam2, 0f };
			else if (iParam0 == 0)
				unk = { iParam2, 0f, 0f };
			else if (iParam0 == 2)
				unk = { 0f, -iParam2, 0f };
			else if (iParam0 == 3)
				unk = { -iParam2, 0f, 0f };
			break;
	
		case 5:
			if (iParam0 == 1)
				unk = { iParam2, iParam2, 0f };
			else if (iParam0 == 0)
				unk = { -iParam2, iParam2, 0f };
			else if (iParam0 == 3)
				unk = { iParam2, -iParam2, 0f };
			else if (iParam0 == 2)
				unk = { -iParam2, -iParam2, 0f };
			break;
	
		case 6:
			if (iParam0 == 0)
				unk = { iParam2, iParam2, 0f };
			else if (iParam0 == 2)
				unk = { -iParam2, iParam2, 0f };
			else if (iParam0 == 1)
				unk = { iParam2, -iParam2, 0f };
			else if (iParam0 == 3)
				unk = { -iParam2, -iParam2, 0f };
			break;
	
		case 7:
			if (iParam0 == 3)
				unk = { iParam2, iParam2, 0f };
			else if (iParam0 == 1)
				unk = { -iParam2, iParam2, 0f };
			else if (iParam0 == 2)
				unk = { iParam2, -iParam2, 0f };
			else if (iParam0 == 0)
				unk = { -iParam2, -iParam2, 0f };
			break;
	
		case 8:
			if (iParam0 == 2)
				unk = { iParam2, iParam2, 0f };
			else if (iParam0 == 3)
				unk = { -iParam2, iParam2, 0f };
			else if (iParam0 == 0)
				unk = { iParam2, -iParam2, 0f };
			else if (iParam0 == 1)
				unk = { -iParam2, -iParam2, 0f };
			break;
	}

	if (iParam2 < 0f)
		iParam2 = iParam2 * -1f;

	return unk;
}

void func_7() // Position - 0x6C5
{
	if (unk_0x1C4E4DC1EFE24DF1(unk_0xC1A5EC5C986B98AD(), uLocal_47, 50f, 50f, 50f, 0, 1, 0))
	{
		unk_0x852EC2A7DE66202D(joaat("A_M_O_Tramp_01"));
		unk_0x852EC2A7DE66202D(joaat("G_M_Y_StrPunk_01"));
		unk_0x28818732C8F0F80E("amb@drug_dealer");
	
		while (!unk_0x0CBB7C273DED26E7(joaat("A_M_O_Tramp_01")) || !unk_0x0CBB7C273DED26E7(joaat("G_M_Y_StrPunk_01")) || !unk_0x2BBF749E555360DC("amb@drug_dealer"))
		{
			SYSTEM::WAIT(0);
		}
	
		unk_0xDA95D0C19E737224("homeless", &uLocal_53);
		uLocal_50.f_2 = uLocal_47.f_2 - 1f;
		uLocal_54 = unk_0x69FDD9508259E5B5(19, joaat("A_M_O_Tramp_01"), uLocal_47, uLocal_47.f_1, uLocal_50.f_2, 0f, 1, 1);
		unk_0x8386356641D0DED1(uLocal_54, uLocal_53);
	
		if (iLocal_44 == 1)
		{
			uLocal_50 = { unk_0x7394CB479CCA24AF(uLocal_54, 0.8f, 0.8f, -1f) };
			uLocal_55 = unk_0x69FDD9508259E5B5(5, joaat("G_M_Y_StrPunk_01"), uLocal_50, 0f, 1, 1);
			unk_0xDA95D0C19E737224("homeless", &uLocal_53);
			unk_0x8386356641D0DED1(uLocal_55, uLocal_53);
		
			if (!unk_0x055111B11E6624FD(uLocal_54, 0))
			{
				unk_0xDBC7406226B5540E(&uLocal_57);
				unk_0x195020A03AE6C628(0, uLocal_50, 0);
				unk_0x3EE48ADC8C7F5CC4(0, "amb@drug_dealer", "beckon_01", 8f, -8f, -1, 0, 0, 0, 0, 0);
				unk_0xF2CFC6EC8C85FA78(uLocal_57);
				unk_0x3D7110D966B0CEA2(uLocal_54, uLocal_57);
				unk_0x63EF69C6969A3D26(&uLocal_57);
			}
		
			if (!unk_0x055111B11E6624FD(uLocal_55, 0))
			{
				unk_0xDBC7406226B5540E(&uLocal_57);
				unk_0x195020A03AE6C628(0, uLocal_47, 0);
				unk_0x3EE48ADC8C7F5CC4(0, "amb@drug_dealer", "beckon_02", 8f, -8f, -1, 0, 0, 0, 0, 0);
				unk_0xF2CFC6EC8C85FA78(uLocal_57);
				unk_0x3D7110D966B0CEA2(uLocal_55, uLocal_57);
				unk_0x63EF69C6969A3D26(&uLocal_57);
			}
		}
	
		iLocal_45 = 1;
	}

	return;
}

BOOL func_8(int iParam0) // Position - 0x843
{
	switch (iParam0)
	{
		case 0:
			return true;
	
		case 1:
			if (func_27(6) || func_27(7))
				return true;
			else
				return func_8(3);
			break;
	
		case 2:
			return true;
	
		case 3:
			if (_CAN_ENTER_FREEROAM_STATE(5))
				if (func_9(4))
					return true;
			break;
	}

	return false;
}

BOOL func_9(int iParam0) // Position - 0x8B5
{
	eCharacter character;

	if (unk_0x48DC6A21D1CAD89C(unk_0x93E99A2DBCBA9CFA()))
	{
		if (unk_0x7DE17ACDD8BA2642(unk_0xC1A5EC5C986B98AD()))
		{
			if (!unk_0x66599E73DBA5A850(unk_0xC1A5EC5C986B98AD()))
			{
				character = _GET_CURRENT_PLAYER_CHARACTER();
			
				if (!func_19(character))
					return false;
			
				switch (iParam0)
				{
					case 9:
					case 0:
						if (!unk_0xE2A83DCD3E79D8D3(unk_0x93E99A2DBCBA9CFA()) || unk_0xDA70CA6A0D1738D3(unk_0xC1A5EC5C986B98AD()) || unk_0x5CD470B5BDDAC029(unk_0xC1A5EC5C986B98AD()) || unk_0x48A4D45B3B4CEFFD(unk_0xC1A5EC5C986B98AD()) || unk_0x854821B2A72B2E98(unk_0xC1A5EC5C986B98AD()) || unk_0xF41A4983A3778F18(unk_0x93E99A2DBCBA9CFA(), 1) || unk_0x5150E13C3DAAE892(unk_0x93E99A2DBCBA9CFA()) || unk_0xB8C39D031C377E33(unk_0xC1A5EC5C986B98AD(), 0) || func_18() || Global_112695 || Global_32166 || func_17() || func_16(8, -1) || func_15() || func_14() || func_13() || func_12() || Global_113648.f_7690.f_919[character] == 5)
							return false;
						break;
				
					case 1:
						if (unk_0xF41A4983A3778F18(unk_0x93E99A2DBCBA9CFA(), 1) || func_18() || Global_32166 || func_17() || func_16(8, -1) || func_13() || func_15() || func_14() || func_12() || Global_113648.f_7690.f_919[character] == 5)
							return false;
						break;
				
					case 2:
						if (!unk_0xE2A83DCD3E79D8D3(unk_0x93E99A2DBCBA9CFA()) || unk_0xDA70CA6A0D1738D3(unk_0xC1A5EC5C986B98AD()) || unk_0x5CD470B5BDDAC029(unk_0xC1A5EC5C986B98AD()) || unk_0x48A4D45B3B4CEFFD(unk_0xC1A5EC5C986B98AD()) || unk_0x854821B2A72B2E98(unk_0xC1A5EC5C986B98AD()) || unk_0xF41A4983A3778F18(unk_0x93E99A2DBCBA9CFA(), 1) || unk_0x5150E13C3DAAE892(unk_0x93E99A2DBCBA9CFA()) || unk_0xB8C39D031C377E33(unk_0xC1A5EC5C986B98AD(), 0) || func_18() || Global_112695 || Global_32166 || func_17() || func_16(8, -1) || func_13() || func_15() || func_14() || func_12() || Global_113648.f_7690.f_919[character] == 5 || Global_43804 != -1)
							return false;
						break;
				
					case 3:
						if (unk_0x48A4D45B3B4CEFFD(unk_0xC1A5EC5C986B98AD()) || unk_0x854821B2A72B2E98(unk_0xC1A5EC5C986B98AD()) || unk_0xF41A4983A3778F18(unk_0x93E99A2DBCBA9CFA(), 1) || unk_0xB8C39D031C377E33(unk_0xC1A5EC5C986B98AD(), 0) || func_18() || Global_112695 || Global_32166 || func_17() || func_16(8, -1) || func_15() || func_14() || func_12() || Global_113648.f_7690.f_919[character] == 5)
							return false;
						break;
				
					case 4:
						if (func_18() || unk_0x83C5A442AAD15BAF(unk_0x93E99A2DBCBA9CFA()) > 0 || func_16(8, -1) || func_12() || func_11() || Global_113648.f_7690.f_919[character] == 5)
							return false;
						break;
				
					case 5:
						if (func_16(8, -1) || func_15() || func_14() || func_11() || func_10())
							return false;
					
						if (unk_0xB53553DC4AAC7D8A() && unk_0x728FB8B438DDCAB6() != 3 && unk_0x19B3485E7C9D734D() < 8)
							return false;
						break;
				
					case 6:
						if (unk_0x7DE17ACDD8BA2642(unk_0xC1A5EC5C986B98AD()))
							if (unk_0xB8C39D031C377E33(unk_0xC1A5EC5C986B98AD(), 0) || unk_0x83C5A442AAD15BAF(unk_0x93E99A2DBCBA9CFA()) > 0 || unk_0xDA70CA6A0D1738D3(unk_0xC1A5EC5C986B98AD()) || unk_0x48A4D45B3B4CEFFD(unk_0xC1A5EC5C986B98AD()) || unk_0x854821B2A72B2E98(unk_0xC1A5EC5C986B98AD()) || unk_0xF41A4983A3778F18(unk_0x93E99A2DBCBA9CFA(), 1) || unk_0x5150E13C3DAAE892(unk_0x93E99A2DBCBA9CFA()) || func_18() || Global_32166 || func_17() || func_16(8, -1) || func_14() || func_13() || func_12() || Global_113648.f_7690.f_919[character] == 5)
								return false;
						break;
				
					case 7:
						if (unk_0xB8C39D031C377E33(unk_0xC1A5EC5C986B98AD(), 0) || !unk_0x1B82EF141CC65934(unk_0x93E99A2DBCBA9CFA()) || !unk_0xE2A83DCD3E79D8D3(unk_0x93E99A2DBCBA9CFA()) || !unk_0x35DF833D93BCC488() || unk_0xDA70CA6A0D1738D3(unk_0xC1A5EC5C986B98AD()) || unk_0x48A4D45B3B4CEFFD(unk_0xC1A5EC5C986B98AD()) || unk_0x854821B2A72B2E98(unk_0xC1A5EC5C986B98AD()) || unk_0xF41A4983A3778F18(unk_0x93E99A2DBCBA9CFA(), 1) || func_18() || func_14() || Global_112695 || Global_32166 || func_17() || Global_44446 || func_16(8, -1) || func_13() || func_11() || func_12() || Global_113648.f_7690.f_919[character] == 5)
							return false;
						break;
				
					case 8:
						if (unk_0xB8C39D031C377E33(unk_0xC1A5EC5C986B98AD(), 0) || !unk_0x1B82EF141CC65934(unk_0x93E99A2DBCBA9CFA()) || !unk_0xE2A83DCD3E79D8D3(unk_0x93E99A2DBCBA9CFA()) || !unk_0x35DF833D93BCC488() || unk_0xF356C80F3E8D2812(unk_0x93E99A2DBCBA9CFA(), 0) || unk_0xDA70CA6A0D1738D3(unk_0xC1A5EC5C986B98AD()) || unk_0x3C3D6D026CF7F51B(unk_0xC1A5EC5C986B98AD(), 1) || unk_0x48A4D45B3B4CEFFD(unk_0xC1A5EC5C986B98AD()) || unk_0x854821B2A72B2E98(unk_0xC1A5EC5C986B98AD()) || unk_0x279D0BCF8F708D74(unk_0xC1A5EC5C986B98AD()) || unk_0xF41A4983A3778F18(unk_0x93E99A2DBCBA9CFA(), 1) || unk_0x5150E13C3DAAE892(unk_0x93E99A2DBCBA9CFA()) || func_18() || Global_112695 || Global_32166 || func_17() || func_16(8, -1) || func_13() || func_11() || func_15() || func_14() || func_12())
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

BOOL func_10() // Position - 0xFD2
{
	return Global_100720.f_1;
}

BOOL func_11() // Position - 0xFE0
{
	if (Global_97603 != -1)
		return IS_BIT_SET(Global_91469[Global_97603 /*34*/].f_15, 13);

	return false;
}

BOOL func_12() // Position - 0x1003
{
	if (unk_0x24B651D85CCE5EB4(joaat("player_timetable_scene")) > 0)
		return true;

	return false;
}

BOOL func_13() // Position - 0x101D
{
	if (Global_78819)
		return true;
	else if (Global_63356 && !Global_63362)
		return true;

	return false;
}

BOOL func_14() // Position - 0x1047
{
	return Global_100733.f_388 > 0;
}

BOOL func_15() // Position - 0x1058
{
	return Global_100733.f_387 > 0;
}

BOOL func_16(int iParam0, int iParam1) // Position - 0x1069
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

BOOL func_17() // Position - 0x10A1
{
	return Global_1575060;
}

BOOL func_18() // Position - 0x10AD
{
	if (!unk_0xA26A9A07F761D8F8())
		return Global_98159.f_44 == 1;

	return false;
}

BOOL func_19(eCharacter echParam0) // Position - 0x10C9
{
	return echParam0 < CHAR_MULTIPLAYER;
}

eCharacter _GET_CURRENT_PLAYER_CHARACTER() // Position - 0x10D5
{
	func_21();
	return Global_113648.f_2365.f_539.f_4321;
}

void func_21() // Position - 0x10EE
{
	eCharacter character;

	if (unk_0x7DE17ACDD8BA2642(unk_0xC1A5EC5C986B98AD()))
	{
		if (_GET_CHARACTER_MODEL(Global_113648.f_2365.f_539.f_4321) != unk_0x504B9BB48D41C264(unk_0xC1A5EC5C986B98AD()))
		{
			character = _GET_PLAYER_CHARACTER_FROM_PED(unk_0xC1A5EC5C986B98AD());
		
			if (func_19(character) && !func_27(14) || Global_112599)
			{
				if (Global_113648.f_2365.f_539.f_4321 != character && func_19(Global_113648.f_2365.f_539.f_4321))
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

eCharacter _GET_PLAYER_CHARACTER_FROM_PED(var uParam0) // Position - 0x11EB
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

int _GET_CHARACTER_MODEL(eCharacter character) // Position - 0x1228
{
	if (func_19(character))
		return func_24(character);
	else
		character != _CHAR_NULL;

	return 0;
}

int func_24(eCharacter echParam0) // Position - 0x124D
{
	return Global_2028[echParam0 /*29*/];
}

BOOL _CAN_ENTER_FREEROAM_STATE(int iParam0) // Position - 0x125C
{
	return func_26(iParam0, Global_43257);
}

BOOL func_26(int iParam0, int iParam1) // Position - 0x126D
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

BOOL func_27(int iParam0) // Position - 0x144E
{
	return Global_43257 == iParam0;
}

void func_28() // Position - 0x145C
{
	unk_0x675D9C12C73D3DE7();
	return;
}

