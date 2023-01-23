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
	var uLocal_28 = 0;
	var uLocal_29 = 0;
	float fLocal_30 = 0f;
	float fLocal_31 = 0f;
	float fLocal_32 = 0f;
	var uLocal_33 = 0;
	var uLocal_34 = 0;
	var uLocal_35 = 0;
#endregion

void main() // Position - 0x0
{
	var unk;
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
	sLocal_20 = "NULL";
	fLocal_21 = 0f;
	fLocal_25 = -0.0375f;
	fLocal_26 = 0.17f;
	fLocal_30 = 80f;
	fLocal_31 = 140f;
	fLocal_32 = 180f;

	if (unk_0x55EEDBBFDC6E810F(3))
		func_20();

	unk_0xB65977CD1EC089B5(1);
	func_19(0);
	func_18();
	unk_0x40FAC93FBC68EC7E();

	while (!flag)
	{
		unk = unk_0x48C5C63730C16B76();
	
		if (unk_0x4310A0DB886F9FED(unk_0x81A767A3C2720859(unk), "heist_ctrl_finale"))
			flag = true;
	}

	unk_0x43B07F0C6524441F(unk);
	func_17();
	func_1(96.7f, -1288.1f, 28.1f, 104.5f, -1301f, 30f, 2f, 118.3f, -1309.7f, 29f, 120f, true, true, true, false, false);
	func_20();
	return;
}

void func_1(float fParam0, float fParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6, float fParam7, float fParam8, float fParam9, float fParam10, BOOL bParam11, BOOL bParam12, BOOL bParam13, BOOL bParam14, BOOL bParam15) // Position - 0xE8
{
	func_2(fParam0, fParam3, fParam6, fParam7, fParam10, 0f, 0f, 0f, bParam11, bParam12, bParam13, bParam14, bParam15);
	return;
}

void func_2(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, float fParam6, var uParam7, var uParam8, var uParam9, float fParam10, float fParam11, float fParam12, float fParam13, BOOL bParam14, BOOL bParam15, BOOL bParam16, BOOL bParam17, BOOL bParam18) // Position - 0x111
{
	var unk;
	BOOL flag;
	BOOL flag2;
	int num;
	var unk2;
	float num2;
	var unk7;
	int num3;
	var unk10;
	int num4;

	if (bParam15)
		bParam15 = false;

	flag2 = true;
	num = 0;
	unk = unk_0xE475C458F52F1781();

	if (unk_0x7DE17ACDD8BA2642(unk))
	{
		if (!unk_0x1AFE963DA61006ED(unk))
		{
			unk_0x85BAE84748AD1A23(unk, 1, 0);
			num = 1;
		}
	
		if (unk_0xFBD273FDBCF0C5BD(unk, 0))
		{
			if (bParam18)
				func_16(unk);
		
			if (unk_0x9DC9E896F189AAA5(unk, uParam0, uParam3, fParam6, 0, 1, 0))
			{
				flag = true;
			}
			else
			{
				unk7 = { unk_0x30BE8A934C020461(unk, 1) };
			
				if (unk7.f_2 > uParam0.f_2 && unk7.f_2 < uParam3.f_2 || unk7.f_2 > uParam3.f_2 && unk7.f_2 < uParam0.f_2)
					if (func_13(unk, uParam0, uParam3, fParam6))
						flag = true;
			}
		
			if (unk_0xFBD273FDBCF0C5BD(unk, 0))
			{
				if (unk_0x091E6E360116B927(unk, joaat("taxi")))
				{
					if (unk_0xA66E176E5772E965(unk, -1, 0) != unk_0xC1A5EC5C986B98AD() && unk_0xA66E176E5772E965(unk, -1, 0) != 0)
					{
						if (unk_0x2E496FE654DA4166((uParam0 + uParam3) / { 2f, 2f, 2f }, unk_0x30BE8A934C020461(unk, 1), 1) < 20f)
						{
							flag = true;
							flag2 = false;
						}
					}
				}
			}
		
			if (bParam16)
				if (func_4(unk, _GET_CURRENT_PLAYER_CHARACTER(), true))
					flag = false;
		
			if (flag)
			{
				if (!_IS_NULL_VECTOR(fParam11))
				{
					if (unk_0xFBD273FDBCF0C5BD(unk, 0))
					{
						num3 = unk_0x504B9BB48D41C264(unk);
						unk_0xCC5870E2DA147475(unk, &unk2, &num2);
					
						if (unk_0x2D92D1084D213DC4(num3))
						{
							fParam11 = fParam11 + 3f;
							fParam11.f_1 = fParam11.f_1 + 3f;
						}
					
						if (num3 == joaat("zentorno") || num3 == joaat("btype") || num3 == joaat("dubsta3") || num3 == joaat("monster"))
							fParam11 = { fParam11 * { 1.1f, 1.1f, 1.1f } };
						else if (num3 == joaat("t20") || num3 == joaat("virgo"))
							fParam11 = { fParam11 * { 1.2f, 1.2f, 1.2f } };
					
						if (num2 - unk2 > fParam11)
							flag2 = false;
						else if (num2.f_1 - unk2.f_1 > fParam11.f_1)
							flag2 = false;
						else if (num2.f_2 - unk2.f_2 > fParam11.f_2)
							flag2 = false;
					}
				}
			
				if (unk_0xFBD273FDBCF0C5BD(unk, 0))
				{
					if (flag2)
					{
						unk_0x10DFA2EC4C030EB3(uParam7, 5f, 0, 0, 0, 0, 0, 0, 0);
						unk_0x692C3FDAD7DB53CC(unk, fParam10);
						unk_0xC2E3C377D893C17A(unk, uParam7, 1, 0, 0, 1);
						unk_0xCB8DD5B44DBC2DEB(unk, 1084227584);
					
						if (bParam17)
						{
							unk_0xC8EE2E23B410B65A(unk, 0, 1, 0);
							unk_0xC8104307D08190D0(unk, 1);
						}
					}
					else
					{
						if (!unk_0x1AFE963DA61006ED(unk) || !unk_0xAE770DDB34967EC3(unk, 1))
							unk_0x85BAE84748AD1A23(unk, 1, 1);
					
						if (unk_0xE0D346789C5160EB(unk_0xC1A5EC5C986B98AD(), unk, 0))
							unk_0xC2E3C377D893C17A(unk_0xC1A5EC5C986B98AD(), unk_0x30BE8A934C020461(unk, 1), 1, 0, 0, 1);
					
						unk_0x2728CF7242F08BD5(&unk);
					}
				}
			}
		
			if (bParam14)
				unk_0x25578EAEB8729E15(uParam0, uParam3, fParam6, 0, 0, 0, 0, 0, 0, 0);
		
			if (num == 1)
				if (unk_0x7DE17ACDD8BA2642(unk))
					if (unk_0x1AFE963DA61006ED(unk))
						unk_0x0E4B6CF706BE8AA4(&unk);
		}
		else
		{
			if (!unk_0x1AFE963DA61006ED(unk))
				unk_0x85BAE84748AD1A23(unk, 1, 0);
		
			unk10 = unk_0xA66E176E5772E965(unk, -1, 0);
		
			if (unk_0x7DE17ACDD8BA2642(unk10) && !unk_0x66599E73DBA5A850(unk10))
				unk_0xC2E3C377D893C17A(unk10, unk_0x30BE8A934C020461(unk10, 1), 1, 0, 0, 1);
		
			num4 = unk_0xB47599824058F1C1(unk_0x504B9BB48D41C264(unk));
		
			if (num4 <= 2)
			{
				unk10 = unk_0xA66E176E5772E965(unk, 0, 0);
			
				if (unk_0x7DE17ACDD8BA2642(unk10) && !unk_0x66599E73DBA5A850(unk10))
					unk_0xC2E3C377D893C17A(unk10, unk_0x30BE8A934C020461(unk10, 1), 1, 0, 0, 1);
			}
		
			if (num4 <= 4)
			{
				unk10 = unk_0xA66E176E5772E965(unk, 1, 0);
			
				if (unk_0x7DE17ACDD8BA2642(unk10) && !unk_0x66599E73DBA5A850(unk10))
					unk_0xC2E3C377D893C17A(unk10, unk_0x30BE8A934C020461(unk10, 1), 1, 0, 0, 1);
			
				unk10 = unk_0xA66E176E5772E965(unk, 2, 0);
			
				if (unk_0x7DE17ACDD8BA2642(unk10) && !unk_0x66599E73DBA5A850(unk10))
					unk_0xC2E3C377D893C17A(unk10, unk_0x30BE8A934C020461(unk10, 1), 1, 0, 0, 1);
			}
		
			unk_0x2728CF7242F08BD5(&unk);
		}
	}

	return;
}

BOOL _IS_NULL_VECTOR(float fParam0, var uParam1, var uParam2) // Position - 0x507
{
	if (fParam0 == 0f && fParam0.f_1 == 0f && fParam0.f_2 == 0f)
		return true;

	return false;
}

BOOL func_4(var uParam0, eCharacter echParam1, BOOL bParam2) // Position - 0x531
{
	int i;
	var unk;
	int num;

	if (!unk_0x7DE17ACDD8BA2642(uParam0) || !unk_0xFBD273FDBCF0C5BD(uParam0, 0))
		return false;

	for (i = 0; func_5(echParam1, i, &unk, &num); i = i + 1)
	{
		if (!bParam2 || IS_BIT_SET(Global_113648.f_7231[num], 0))
			if (unk_0x7B0F3D01B676C014(&unk, uParam0))
				return true;
	}

	return false;
}

BOOL func_5(eCharacter echParam0, int iParam1, char* sParam2, var uParam3) // Position - 0x59F
{
	TEXT_LABEL_ASSIGN_STRING(sParam2, "", 32);

	switch (echParam0)
	{
		case CHAR_MICHAEL:
			if (iParam1 == 0)
			{
				TEXT_LABEL_ASSIGN_STRING(sParam2, "Michael - Beverly Hills", 32);
				*uParam3 = 0;
				return true;
			}
			else if (iParam1 == 1)
			{
				TEXT_LABEL_ASSIGN_STRING(sParam2, "Trevor - Countryside", 32);
				*uParam3 = 1;
				return true;
			}
			break;
	
		case CHAR_FRANKLIN:
			if (iParam1 == 0)
			{
				TEXT_LABEL_ASSIGN_STRING(sParam2, "Franklin - Aunt", 32);
				*uParam3 = 5;
				return true;
			}
			else if (iParam1 == 1)
			{
				TEXT_LABEL_ASSIGN_STRING(sParam2, "Franklin - Hills", 32);
				*uParam3 = 6;
				return true;
			}
			break;
	
		case CHAR_TREVOR:
			if (iParam1 == 0)
			{
				TEXT_LABEL_ASSIGN_STRING(sParam2, "Trevor - Countryside", 32);
				*uParam3 = 2;
				return true;
			}
			else if (iParam1 == 1)
			{
				TEXT_LABEL_ASSIGN_STRING(sParam2, "Trevor - City", 32);
				*uParam3 = 3;
				return true;
			}
			else if (iParam1 == 2)
			{
				TEXT_LABEL_ASSIGN_STRING(sParam2, "Trevor - Stripclub", 32);
				*uParam3 = 4;
				return true;
			}
			break;
	}

	return false;
}

eCharacter _GET_CURRENT_PLAYER_CHARACTER() // Position - 0x670
{
	func_7();
	return Global_113648.f_2365.f_539.f_4321;
}

void func_7() // Position - 0x689
{
	eCharacter character;

	if (unk_0x7DE17ACDD8BA2642(unk_0xC1A5EC5C986B98AD()))
	{
		if (_GET_CHARACTER_MODEL(Global_113648.f_2365.f_539.f_4321) != unk_0x504B9BB48D41C264(unk_0xC1A5EC5C986B98AD()))
		{
			character = _GET_PLAYER_CHARACTER_FROM_PED(unk_0xC1A5EC5C986B98AD());
		
			if (func_9(character) && !func_8(14) || Global_112599)
			{
				if (Global_113648.f_2365.f_539.f_4321 != character && func_9(Global_113648.f_2365.f_539.f_4321))
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

BOOL func_8(int iParam0) // Position - 0x786
{
	return Global_43257 == iParam0;
}

BOOL func_9(eCharacter echParam0) // Position - 0x794
{
	return echParam0 < CHAR_MULTIPLAYER;
}

eCharacter _GET_PLAYER_CHARACTER_FROM_PED(var uParam0) // Position - 0x7A0
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

int _GET_CHARACTER_MODEL(eCharacter character) // Position - 0x7DD
{
	if (func_9(character))
		return func_12(character);
	else
		character != _CHAR_NULL;

	return 0;
}

int func_12(eCharacter echParam0) // Position - 0x802
{
	return Global_2028[echParam0 /*29*/];
}

BOOL func_13(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, float fParam7) // Position - 0x811
{
	float num;
	var unk3;
	var unk6;
	var unk9;
	var unk12;
	var unk15;
	var unk18;
	var unk31;
	var unk34;

	if (unk_0xFBD273FDBCF0C5BD(uParam0, 0))
	{
		uParam1.f_2 = uParam4.f_2;
		num = { func_15(uParam1 - uParam4) };
		unk3 = { num };
		unk18 = 4;
		num = -unk3.f_1;
		num.f_1 = unk3;
		num.f_2 = 0f;
		unk6 = { uParam1 - (num * { fParam7 / 2f, fParam7 / 2f, fParam7 / 2f }) };
		unk9 = { uParam1 + (num * { fParam7 / 2f, fParam7 / 2f, fParam7 / 2f }) };
		unk12 = { uParam4 - (num * { fParam7 / 2f, fParam7 / 2f, fParam7 / 2f }) };
		unk15 = { uParam4 + (num * { fParam7 / 2f, fParam7 / 2f, fParam7 / 2f }) };
		unk_0x1C97A6E4D8DA4B2F(unk_0x504B9BB48D41C264(uParam0), &unk31, &unk34);
		unk18[0 /*3*/] = { unk_0x7394CB479CCA24AF(uParam0, unk31, unk31.f_1, 0f) };
		unk18[1 /*3*/] = { unk_0x7394CB479CCA24AF(uParam0, unk31, unk34.f_1, 0f) };
		unk18[2 /*3*/] = { unk_0x7394CB479CCA24AF(uParam0, unk34, unk31.f_1, 0f) };
		unk18[3 /*3*/] = { unk_0x7394CB479CCA24AF(uParam0, unk34, unk34.f_1, 0f) };
	
		if (func_14(unk18[0 /*3*/], unk18[1 /*3*/], unk6, unk9) || func_14(unk18[0 /*3*/], unk18[1 /*3*/], unk9, unk15) || func_14(unk18[0 /*3*/], unk18[1 /*3*/], unk12, unk15) || func_14(unk18[0 /*3*/], unk18[1 /*3*/], unk6, unk12) || func_14(unk18[1 /*3*/], unk18[3 /*3*/], unk6, unk9) || func_14(unk18[1 /*3*/], unk18[3 /*3*/], unk9, unk15) || func_14(unk18[1 /*3*/], unk18[3 /*3*/], unk12, unk15) || func_14(unk18[1 /*3*/], unk18[3 /*3*/], unk6, unk12) || func_14(unk18[3 /*3*/], unk18[2 /*3*/], unk6, unk9) || func_14(unk18[3 /*3*/], unk18[2 /*3*/], unk9, unk15) || func_14(unk18[3 /*3*/], unk18[2 /*3*/], unk12, unk15) || func_14(unk18[3 /*3*/], unk18[2 /*3*/], unk6, unk12) || func_14(unk18[2 /*3*/], unk18[0 /*3*/], unk6, unk9) || func_14(unk18[2 /*3*/], unk18[0 /*3*/], unk9, unk15) || func_14(unk18[2 /*3*/], unk18[0 /*3*/], unk12, unk15) || func_14(unk18[2 /*3*/], unk18[0 /*3*/], unk6, unk12))
			return true;
	}

	return false;
}

BOOL func_14(float fParam0, var uParam1, var uParam2, float fParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, float fParam9, var uParam10, var uParam11) // Position - 0xB07
{
	float num;
	float num2;
	float num3;
	float num4;
	var unk;
	var unk2;
	float num5;
	float num6;
	float num7;
	float num8;
	float num9;
	float num10;
	float num11;
	float num12;

	num = fParam0;
	num2 = fParam0.f_1;
	num3 = fParam3;
	num4 = fParam3.f_1;
	unk = uParam6;
	unk2 = uParam6.f_1;
	num5 = fParam9;
	num6 = fParam9.f_1;
	num7 = num3 - num;
	num8 = num4 - num2;
	num9 = num5 - unk;
	num10 = num6 - unk2;
	num11 = ((-num8 * (num - unk)) + (num7 * (num2 - unk2))) / ((-num9 * num8) + (num7 * num10));
	num12 = ((num9 * (num2 - unk2)) - (num10 * (num - unk))) / ((-num9 * num8) + (num7 * num10));

	if (num11 >= 0f && num11 <= 1f && num12 >= 0f && num12 <= 1f)
		return true;

	return false;
}

Vector3 func_15(float fParam0, var uParam1, var uParam2) // Position - 0xBBB
{
	float num;
	float num2;

	num = SYSTEM::VMAG(fParam0);

	if (num != 0f)
	{
		num2 = 1f / num;
		fParam0 = { fParam0 * { num2, num2, num2 } };
	}
	else
	{
		fParam0 = 0f;
		fParam0.f_1 = 0f;
		fParam0.f_2 = 0f;
	}

	return fParam0;
}

void func_16(var uParam0) // Position - 0xBFA
{
	if (unk_0x7DE17ACDD8BA2642(uParam0))
	{
		if (unk_0xFBD273FDBCF0C5BD(uParam0, 0))
		{
			if (unk_0x34DAE7F7DF2CC995(uParam0) <= 200f)
				unk_0xA598BD64B909AA08(uParam0, 500f);
		
			if (unk_0xF7B2B973FAF93B1B(uParam0) <= 700f)
				unk_0xA598BD64B909AA08(uParam0, 900f);
		
			if (unk_0x2935B4D6CE81318D(uParam0) < 200)
				unk_0xA598BD64B909AA08(uParam0, 500f);
		}
	}

	return;
}

void func_17() // Position - 0xC5F
{
	Global_112672 = 1;
	return;
}

void func_18() // Position - 0xC6C
{
	eCharacter character;

	character = _GET_CURRENT_PLAYER_CHARACTER();

	switch (character)
	{
		case CHAR_MICHAEL:
			unk_0x028B1EDDD6EC4C79("BS_2A_2B_INT", 12, 8);
			break;
	
		case CHAR_FRANKLIN:
			unk_0x028B1EDDD6EC4C79("BS_2A_2B_INT", 14, 8);
			break;
	
		case CHAR_TREVOR:
			unk_0x2A3302E8B9D69CC9("BS_2A_2B_INT", 8);
			break;
	}

	while (!unk_0x834B5C5F458D6972("BS_2A_2B_INT"))
	{
		SYSTEM::WAIT(0);
	}

	return;
}

void func_19(int iParam0) // Position - 0xCCC
{
	Global_77348.f_138 = iParam0;
	return;
}

void func_20() // Position - 0xCDC
{
	func_25(24, 1);
	func_21(true, 0);
	unk_0x675D9C12C73D3DE7();
	return;
}

void func_21(BOOL bParam0, BOOL bParam1) // Position - 0xCF5
{
	int num;
	int num2;
	int num3;

	if (!Global_63364)
		Global_63364 = bParam1;

	if (bParam0)
	{
		if (_IS_MISSION_REPEAT_ACTIVE(false) && Global_78805.f_1 == 1 && func_23(Global_78805))
		{
		}
		else
		{
			Global_63362 = true;
		}
	}

	if (Global_113648.f_9087 || _IS_MISSION_REPEAT_ACTIVE(false))
	{
		num = func_22();
		num2 = Global_91433[num /*5*/];
		num3 = Global_78828.f_109[num2 /*4*/];
	
		if (num == -1)
		{
			Global_113648.f_9087;
			return;
		}
	
		if (IS_BIT_SET(Global_91433[num /*5*/].f_1, 4))
			return;
	
		if (IS_BIT_SET(Global_91433[num /*5*/].f_1, 5))
			return;
	
		unk_0xECDAB41968FF21A8(&(Global_91433[num /*5*/].f_1), 4);
		unk_0xECDAB41968FF21A8(&Global_78807, 1);
		Global_78823 = num3;
		Global_78824 = unk_0xA5E11AF0A2B928C1();
	}

	return;
}

int func_22() // Position - 0xDC5
{
	int i;

	i = 0;

	for (i = 0; i < 7; i = i + 1)
	{
		if (IS_BIT_SET(Global_91433[i /*5*/].f_1, 2))
			return i;
	}

	return -1;
}

BOOL func_23(int iParam0) // Position - 0xDF7
{
	switch (iParam0)
	{
		case 71:
			return true;
	
		case 86:
			return true;
	
		case 91:
			return true;
	
		default:
			return false;
	}

	return false;
}

BOOL _IS_MISSION_REPEAT_ACTIVE(BOOL bExcludeBenchmark) // Position - 0xE35
{
	if (!bExcludeBenchmark && unk_0x24B651D85CCE5EB4(joaat("benchmark")) > 0)
		return true;

	return IS_BIT_SET(Global_78807, 0);
}

void func_25(int iParam0, BOOL bParam1) // Position - 0xE5D
{
	if (iParam0 == 146 || iParam0 == -1)
		return;

	if (Global_113648.f_9087.f_99.f_58[iParam0] == bParam1)
		return;

	Global_113648.f_9087.f_99.f_58[iParam0] = bParam1;
	return;
}

