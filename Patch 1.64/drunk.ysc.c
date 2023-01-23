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
	var uLocal_43 = 0;
	var uLocal_44 = 0;
	var uLocal_45 = 0;
	var uLocal_46 = 0;
	var uLocal_47 = 0;
	int iLocal_48 = 0;
	int iLocal_49 = 0;
	BOOL bLocal_50 = 0;
	BOOL bLocal_51 = 0;
	float fLocal_52 = 0f;
	float fLocal_53 = 0f;
	char* sLocal_54 = 0;
	int iLocal_55 = 0;
	var uLocal_56 = 0;
	var uLocal_57 = 0;
	var uLocal_58 = 0;
	var uLocal_59 = 0;
	int iLocal_60 = 0;
	var uLocal_61 = 0;
	var uLocal_62 = 0;
	int iLocal_63 = 0;
	int iLocal_64 = 0;
	BOOL bLocal_65 = 0;
	var uScriptParam_0 = 0;
	var uScriptParam_1 = 0;
	var uScriptParam_2 = 0;
	var uScriptParam_3 = 0;
	var uScriptParam_4 = 0;
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
	iLocal_48 = -1;
	iLocal_49 = -1;
	fLocal_52 = 1.7f;
	fLocal_53 = 0f;
	sLocal_54 = "";
	iLocal_63 = -1;

	if (unk_0x55EEDBBFDC6E810F(2))
		func_178();

	uLocal_43 = { uScriptParam_0 };
	func_177();
	func_176();
	func_171(iLocal_48, 0, 0);
	SYSTEM::SETTIMERA(0);
	func_170();
	func_166();

	while (true)
	{
		SYSTEM::WAIT(0);
		func_165(iLocal_48);
		func_164();
		func_162();
		func_155();
		func_171(iLocal_48, 0, 0);
		func_177();
		func_9();
	
		if (unk_0xA26A9A07F761D8F8() && !unk_0x1758F8A8511510AB() && !func_8())
			func_1();
	}

	return;
}

void func_1() // Position - 0x106
{
	if (func_7() || func_6())
	{
		func_5();
		func_2();
	}

	return;
}

void func_2() // Position - 0x127
{
	if (!_IS_FMMC_ACTIVE() && !func_3() && Global_2684798)
		Global_4718592.f_113724 = 0;

	return;
}

BOOL func_3() // Position - 0x155
{
	return Global_2683862.f_691;
}

BOOL _IS_FMMC_ACTIVE() // Position - 0x164
{
	return Global_1853910[unk_0x93E99A2DBCBA9CFA() /*862*/].f_192 != 0;
}

void func_5() // Position - 0x17B
{
	Global_2683862.f_756 = 1;
	return;
}

BOOL func_6() // Position - 0x18B
{
	return Global_2683862.f_735;
}

BOOL func_7() // Position - 0x19A
{
	return IS_BIT_SET(Global_2683862.f_2, 11);
}

BOOL func_8() // Position - 0x1AB
{
	return IS_BIT_SET(Global_2684799.f_1.f_2810, 3);
}

void func_9() // Position - 0x1BE
{
	BOOL flag;

	if (unk_0x055111B11E6624FD(uLocal_43.f_1, 0))
		func_178();

	if (bLocal_50)
		if (!unk_0x48DC6A21D1CAD89C(unk_0x93E99A2DBCBA9CFA()))
			func_178();

	func_154();
	flag = true;

	switch (iLocal_60)
	{
		case 4:
			func_153();
			return;
	
		case 5:
			func_150();
			return;
	
		case 6:
			func_148();
			return;
	
		case 7:
			func_147();
			return;
	
		case 8:
			func_146();
			return;
	
		case 9:
			func_144();
			return;
	
		case 10:
			func_143();
			func_140();
			func_139();
			return;
	
		case 11:
			func_138();
			return;
	
		case 12:
			break;
	
		default:
			flag = false;
			break;
	}

	if (!flag)
		return;

	if (!iLocal_60 == 12)
		return;

	switch (iLocal_60.f_1)
	{
		case 1:
			if (!func_137())
			{
				func_121();
				func_140();
			}
			break;
	
		case 2:
			func_119();
			break;
	
		case 12:
			func_106();
			break;
	
		case 3:
			func_10();
			break;
	
		default:
			break;
	}

	return;
}

void func_10() // Position - 0x2D9
{
	var unk;
	char* str;
	char* str2;
	int num;

	if (!IS_BIT_SET(Global_1950108.f_3, 27))
		unk_0x7E70B702E8033847(uLocal_43.f_1, 3000, 3500, 0, 1, 1, 0);

	Global_1944403 = true;

	if (!unk_0x72474BA05A104E1E())
	{
		unk_0x6D5ACBBD4CE34249(2500);
	
		while (unk_0x984CA71F26DF483C())
		{
			SYSTEM::WAIT(0);
		}
	}

	if (unk_0xA26A9A07F761D8F8())
	{
		_STOPWATCH_INITIALIZE(&unk, false, false);
	
		if (unk_0x7DE17ACDD8BA2642(unk_0xC1A5EC5C986B98AD()) && !unk_0x055111B11E6624FD(unk_0xC1A5EC5C986B98AD(), 0))
			unk_0x3298713EEACD1622(unk_0xC1A5EC5C986B98AD(), 0, 1);
	
		while (unk_0x7DE17ACDD8BA2642(unk_0xC1A5EC5C986B98AD()) && !unk_0x055111B11E6624FD(unk_0xC1A5EC5C986B98AD(), 0) && unk_0xC59A2EB21A3834E2(unk_0xC1A5EC5C986B98AD()) && unk_0xDD0946416C869FA2(unk_0xC1A5EC5C986B98AD()))
		{
			SYSTEM::WAIT(0);
		}
	
		if (!unk_0xC59A2EB21A3834E2(unk_0xC1A5EC5C986B98AD()))
			func_178();
	
		unk_0x061B1200C95204CB(&(Global_1950108.f_3), 27);
		_SET_PLAYER_CONTROL_EX(unk_0x93E99A2DBCBA9CFA(), false, 57344, 0);
		Global_2635559.f_2681 = 1;
	
		if (IS_BIT_SET(Global_1950108, 15))
			unk_0x061B1200C95204CB(&Global_1950108, 15);
	
		if (IS_BIT_SET(Global_1950108.f_2, 6))
			unk_0x061B1200C95204CB(&(Global_1950108.f_2), 6);
	
		if (unk_0xF356C80F3E8D2812(unk_0x93E99A2DBCBA9CFA(), 0))
			Global_2635559.f_2682 = 1;
		else
			Global_2635559.f_2682 = 0;
	
		if (unk_0xC0A15A60BC0C570E())
			unk_0x282AA8C5BDD0836B(0);
	
		if (func_87(true))
			func_75(0);
	
		func_73(true);
		func_178();
	}

	if (bLocal_65)
		func_178();

	str = "";
	str2.f_3 = 1064514355;
	str2.f_30 = 1148829696;
	str2.f_31 = 1148829696;
	str2.f_52 = 1148829696;
	num = 7;

	switch (_GET_CURRENT_PLAYER_CHARACTER())
	{
		case CHAR_MICHAEL:
			if (func_65() != 2)
				num = 0;
			else
				num = 1;
			break;
	
		case CHAR_FRANKLIN:
			if (!func_64(126))
				num = 2;
			else
				num = 3;
			break;
	
		case CHAR_TREVOR:
			if (!func_63(4))
			{
				if (func_64(58))
					num = 4;
			
				if (func_64(59))
					num = 5;
			
				if (num == 7)
					if (!_GET_RANDOM_BOOL())
						num = 4;
					else
						num = 5;
			}
			else
			{
				num = 6;
			}
			break;
	}

	switch (num)
	{
		case 0:
			str = "DWC_MICHAEL_mansion";
			str2 = "SAVEM_Default@";
			str2.f_1 = "M_GetOut_R";
			str2.f_2 = "M_GetOut_R_CAM";
			str2.f_5 = { -814.181f, 181.1f, 75.74f };
			str2.f_8 = { 0f, 0f, 21.1994f };
			str2.f_4 = joaat("MotionState_Idle");
			break;
	
		case 1:
			str = "DWC_MICHAEL_trailer";
			str2 = "SAVECountryside@";
			str2.f_1 = "M_GetOut_countryside";
			str2.f_2 = "M_GetOut_countryside_CAM";
			str2.f_5 = { 1968.14f, 3816.79f, 32.4287f };
			str2.f_8 = { 0f, 0f, 29.7938f };
			str2.f_4 = joaat("MotionState_Idle");
			break;
	
		case 2:
			str = "DWC_FRANKLIN_city";
			str2 = "SWITCH@FRANKLIN@BED";
			str2.f_1 = "Sleep_GetUp_RubEyes";
			str2.f_2 = "Sleep_GetUp_RubEyes_CAM";
			str2.f_5 = { -17.2168f, -1441.224f, 30.1015f };
			str2.f_8 = { 0f, 0f, -179.653f };
			str2.f_4 = joaat("MotionState_Idle");
			break;
	
		case 3:
			str = "DWC_FRANKLIN_hills";
			str2 = "SAVEBighouse@";
			str2.f_1 = "F_GetOut_r_bighouse";
			str2.f_2 = "F_GetOut_r_bighouse_CAM";
			str2.f_5 = { -1.049f, 524.283f, 170.064f };
			str2.f_8 = { 0f, 0f, 24f };
			str2.f_4 = joaat("MotionState_Idle");
			break;
	
		case 4:
			str = "DWC_TREVOR_trailer";
			str2 = "SAVECountryside@";
			str2.f_1 = "T_GetOut_countryside";
			str2.f_2 = "T_GetOut_countryside_CAM";
			str2.f_5 = { 1968.14f, 3816.79f, 32.4287f };
			str2.f_8 = { 0f, 0f, 29.7938f };
			str2.f_4 = joaat("MotionState_Idle");
			break;
	
		case 5:
			str = "DWC_TREVOR_beach";
			str2 = "SAVEVeniceB@";
			str2.f_1 = "T_GetOut_r_veniceB";
			str2.f_2 = "T_GetOut_r_veniceB_CAM";
			str2.f_5 = { -1148.438f, -1512.246f, 9.689f };
			str2.f_8 = { 0f, 0f, 36.25f };
			str2.f_4 = joaat("MotionState_Idle");
			break;
	
		case 6:
			str = "DWC_TREVOR_stripclub";
			str2 = "SAVECouch@";
			str2.f_1 = "T_GetOut_couch";
			str2.f_2 = "T_GetOut_couch_CAM";
			str2.f_5 = { 94.53f, -1289.86f, 28.27f };
			str2.f_8 = { 0f, 0f, 29.7938f };
			str2.f_4 = joaat("MotionState_Idle");
			break;
	}

	if (!unk_0x055111B11E6624FD(uLocal_43.f_1, 0))
		unk_0xC2E3C377D893C17A(uLocal_43.f_1, str2.f_5, 1, 0, 0, 1);

	SYSTEM::WAIT(500);
	TEXT_LABEL_ASSIGN_STRING(&(str2.f_11), "", 16);
	str2.f_15 = -1f;
	func_12(str, &str2, "");
	func_11(126, 1);
	func_178();
	return;
}

void func_11(int iParam0, int iParam1) // Position - 0x760
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

void func_12(char* sParam0, var uParam1, char* sParam2) // Position - 0x7BD
{
	float num;
	int num2;
	BOOL flag;
	var unk;
	int num3;
	var unk2;
	int num4;
	BOOL flag2;
	BOOL flag3;
	var unk3;
	eCharacter character;
	int num5;
	char* str;
	char* str2;
	char* str3;
	int num6;
	float num7;
	float num8;
	int num9;
	int num10;
	int num11;
	float num12;
	var unk168;
	var unk171;
	float num13;
	var unk174;
	var unk175;
	var unk176;
	var unk179;
	float num14;
	var unk180;
	var unk181;
	var unk184;
	float num15;
	int num16;
	var unk187;
	var unk188;
	var unk189;
	var unk192;
	float num17;
	var unk193;
	var unk194;
	var unk197;
	float num18;
	int num19;
	BOOL flag4;
	BOOL flag5;
	int num20;

	num = 0f;
	unk_0xE333240A90F2FF3C(unk_0x93E99A2DBCBA9CFA(), 0, 0);

	if (!unk_0x055111B11E6624FD(unk_0xC1A5EC5C986B98AD(), 0))
		unk_0x226C3A30511D5DC4(unk_0xC1A5EC5C986B98AD(), 1);

	unk_0xA172C350F431483A(uParam1->f_5, 4500f);
	unk_0x3056199EEBDE8CBB(uParam1->f_5, 4500f);
	unk_0xF82BC5193AF62796(uParam1->f_5, 5f, 1, 0, 0, 0);
	unk_0xC2E3C377D893C17A(unk_0xC1A5EC5C986B98AD(), uParam1->f_5, 1, 0, 0, 1);
	unk_0x2718E9CC165A99F6(unk_0xC1A5EC5C986B98AD(), 1);
	SYSTEM::WAIT(0);
	unk_0x577AE0048ADA90C8(1);
	unk_0x28818732C8F0F80E(*uParam1);

	if (unk_0x2AC37494BBF1DB16(uParam1->f_16))
	{
	}
	else
	{
		unk_0x28818732C8F0F80E(uParam1->f_16);
	}

	if (!unk_0x72474BA05A104E1E())
		unk_0x6D5ACBBD4CE34249(0);

	func_57(uParam1->f_5, uParam1->f_8.f_2, 0, 1);

	if (!unk_0x72474BA05A104E1E())
		unk_0x6D5ACBBD4CE34249(0);

	num2 = unk_0xA5E11AF0A2B928C1() + 20000;
	flag = false;
	uParam1->f_33 = 0;

	while (!flag && num2 > unk_0xA5E11AF0A2B928C1())
	{
		flag = true;
		unk_0x28818732C8F0F80E(*uParam1);
	
		if (!unk_0x2BBF749E555360DC(*uParam1))
			flag = false;
	
		if (!unk_0x2AC37494BBF1DB16(uParam1->f_16))
		{
			unk_0x28818732C8F0F80E(uParam1->f_16);
		
			if (!unk_0x2BBF749E555360DC(uParam1->f_16))
				flag = false;
		}
	
		if (!unk_0x72474BA05A104E1E())
			unk_0x6D5ACBBD4CE34249(0);
	
		SYSTEM::WAIT(0);
	}

	func_54();

	if (!func_53(uParam1->f_22, 0f, 0f, 0f, false))
	{
		unk_0xB7C5BDA2BA69CE7F((uParam1->f_5 + uParam1->f_19) - uParam1->f_22, uParam1->f_5 + uParam1->f_19 + uParam1->f_22, 0, 1);
		unk_0x10DFA2EC4C030EB3(uParam1->f_5 + uParam1->f_19, SYSTEM::VMAG(uParam1->f_22) + 25f, 0, 0, 0, 0, 0, 0, 0);
		unk_0xF82BC5193AF62796(uParam1->f_5 + uParam1->f_19, SYSTEM::VMAG(uParam1->f_22) + 25f, 1, 0, 0, 0);
	}

	if (!unk_0x055111B11E6624FD(unk_0xC1A5EC5C986B98AD(), 0))
	{
		unk_0xE90EAC9EC6471EB9(unk_0x93E99A2DBCBA9CFA());
		unk_0x8CC688927B10006C(unk_0xC1A5EC5C986B98AD(), joaat("WEAPON_UNARMED"), 1);
		unk_0x35DD50D05C962B6A(unk_0xC1A5EC5C986B98AD());
	}

	unk_0x2718E9CC165A99F6(unk_0xC1A5EC5C986B98AD(), 0);
	unk_0x577AE0048ADA90C8(0);
	unk_0xF82BC5193AF62796(uParam1->f_5, 15f, 1, 0, 0, 0);
	unk_0x1CC025DD90CB1D9C();
	unk_0xF55B077AE7451D3C();
	func_51();

	while (func_50())
	{
		SYSTEM::WAIT(0);
	}

	if (!unk_0x35DF833D93BCC488() && !unk_0x6C9BA681FB2251B6())
		unk_0x78DD793477D04C42(250);

	unk_0x0135E51BAD56ED58(1);

	if (!unk_0x055111B11E6624FD(unk_0xC1A5EC5C986B98AD(), 0))
	{
		num3 = unk_0x191673E3F99212B2(uParam1->f_5, uParam1->f_8, 2);
		unk_0x5F243F8265BB664F(num3, 0);
		unk_0xE4E4F775E5660E56(num3, 0);
		unk2 = unk_0xDEE46CEB08617ECA("DEFAULT_ANIMATED_CAMERA", 1);
		num4 = 4;
	
		if (uParam1->f_4 != joaat("MotionState_Idle"))
			num4 = num4 | 2;
	
		func_48(unk_0xC1A5EC5C986B98AD(), uParam1->f_18);
		unk_0x468D976993BF7FE1(unk_0xC1A5EC5C986B98AD(), num3, *uParam1, uParam1->f_1, 1000f, -1.5f, num4, 0, 1148846080, 0);
		unk_0x0E667B18EBA21EC1(unk_0xC1A5EC5C986B98AD(), 1);
		unk_0x9AB15E4C594CE98B(unk_0x93E99A2DBCBA9CFA(), 1);
		unk = unk_0xCF41CEFD254F0F1C(unk_0xC1A5EC5C986B98AD(), 77);
		unk_0x992BB708B4B7A005(unk_0xC1A5EC5C986B98AD(), 77, 1);
		unk_0x5950D902D5442CB4(unk2, num3, uParam1->f_2, *uParam1);
		unk_0x9E2404A25985615A(1, 0, 3000, 1, 0, 0);
	
		if (!unk_0x2AC37494BBF1DB16(uParam1->f_16) && !unk_0x2AC37494BBF1DB16(uParam1->f_17))
			unk_0x3EE48ADC8C7F5CC4(unk_0xC1A5EC5C986B98AD(), uParam1->f_16, uParam1->f_17, 1000f, -1.5f, 10000, 33, 0, 0, 0, 0);
	}
	else
	{
		num3 = -1;
	}

	if (!uParam1->f_25)
	{
		if (!unk_0x2AC37494BBF1DB16(sParam2))
		{
			_DISPLAY_HELP_TEXT(sParam2, -1);
			uParam1->f_25 = 1;
		}
	}

	flag2 = false;
	flag3 = false;
	unk3 = 16;

	if (!unk_0x2AC37494BBF1DB16(&(uParam1->f_11)))
	{
		character = _GET_CURRENT_PLAYER_CHARACTER();
		num5 = -1;
		str = "";
	
		switch (character)
		{
			case CHAR_MICHAEL:
				num5 = 0;
				str = "MICHAEL";
				break;
		
			case CHAR_FRANKLIN:
				num5 = 1;
				str = "FRANKLIN";
				break;
		
			case CHAR_TREVOR:
				num5 = 2;
				str = "TREVOR";
				break;
		
			default:
				break;
		}
	
		_CONVERSATION_INITIALIZE_ACTOR(&unk3, num5, unk_0xC1A5EC5C986B98AD(), str, 0, 1);
	}

	if (unk_0x411B750250543BD0(num3))
	{
		str2 = "WalkInterruptible";
		str3 = "ForceBlendout";
	
		while (unk_0x411B750250543BD0(num3) && !unk_0x055111B11E6624FD(unk_0xC1A5EC5C986B98AD(), 0))
		{
			if (!flag3)
			{
				if (!unk_0x72474BA05A104E1E())
				{
					if (!unk_0x2AC37494BBF1DB16(uParam1->f_26))
					{
						unk_0x451128B7D435FBF2(uParam1->f_26, 0, 0);
						flag3 = true;
					}
				
					if (!unk_0x2AC37494BBF1DB16(uParam1->f_27))
					{
						if (!unk_0x2AC37494BBF1DB16(uParam1->f_28))
						{
							unk_0x531D638530A8DB97(-1, uParam1->f_28, uParam1->f_27, 0);
							flag3 = true;
						}
					
						if (!unk_0x2AC37494BBF1DB16(uParam1->f_29))
						{
							unk_0x531D638530A8DB97(-1, uParam1->f_29, uParam1->f_27, 0);
							flag3 = true;
						}
					}
				}
			}
		
			unk_0xE288789FFB1A0C2F();
			unk_0xEDECDDE17C1E41F5(18);
			unk_0x1E408541295E76E9();
			func_40(0);
			num6 = unk_0xA5E11AF0A2B928C1();
		
			if (num6 >= Global_43808 - 500)
				func_39(4000);
		
			num7 = -1f;
			num8 = -1f;
			num = unk_0xABF98B1999FE64CA(num3);
		
			if (!unk_0x2AC37494BBF1DB16(&(uParam1->f_11)))
				if (!flag2)
					if (num >= uParam1->f_15)
						if (_CONVERSATION_ADD_LINE(&unk3, "PRSAUD", &(uParam1->f_11), 3, 0, 0, 0))
							flag2 = true;
		
			num9 = 0;
		
			if (unk_0x18D781E5FEB0E5E3(unk_0xC1A5EC5C986B98AD(), unk_0x14580F20CBCE4FA9(str2)))
			{
				num10 = unk_0xAABBB04856172783(2, 195) - 128;
				num11 = unk_0xAABBB04856172783(2, 196) - 128;
			
				if (num10 < 64 && num10 > -64 && num11 < 64 && num11 > -64)
				{
				}
				else
				{
					num9 = 1;
				}
			}
			else
			{
				num7 = -1f;
				num8 = -1f;
				num9 = 0;
				uParam1->f_3 = uParam1->f_3;
				num7 = num7;
				num8 = num8;
			}
		
			if (unk_0x673F52632EDC33B7() == 4 && uParam1->f_52 > 0f)
			{
				if (num >= uParam1->f_52)
				{
					if (!uParam1->f_32)
					{
						num12 = 1.5f;
						unk168 = { unk_0x7D4F36E9E86B0A11() };
						unk171 = { unk_0x985D9D5ED4D5145A(unk_0xC1A5EC5C986B98AD(), 31086, 0f, 0f, 0f) };
						num13 = unk_0x2E496FE654DA4166(unk168, unk171, 1);
						num12 = func_21(num12, 0.001f, num13 - 0.75f);
					
						if (num12 < 0f)
							num12 = 0.001f;
					
						func_20(&(uParam1->f_34), unk_0xC1A5EC5C986B98AD(), _GET_CURRENT_PLAYER_CHARACTER(), 1E-06f, 300, 300, 0, 0, 1045220557);
						func_19(&(uParam1->f_34), uParam1->f_53);
					
						if (!uParam1->f_33)
						{
							uParam1->f_34 = 1;
							uParam1->f_34.f_7 = unk_0xA5E11AF0A2B928C1();
							uParam1->f_34.f_8 = 0;
							uParam1->f_33 = 1;
						}
					
						if (uParam1->f_57 == 999f)
							uParam1->f_56 = 0f;
					
						if (uParam1->f_57 == 999f)
						{
							unk176 = { unk_0x929C32C999805F0A(2) };
							unk179 = unk_0xD850DD08D5434072(unk_0xC1A5EC5C986B98AD());
							num14 = unk176.f_2;
							unk180 = unk179;
							uParam1->f_57 = num14 - unk180;
						
							if (uParam1->f_57 < 360f)
								uParam1->f_57 = uParam1->f_57 + 360f;
						
							if (uParam1->f_57 > 360f)
								uParam1->f_57 = uParam1->f_57 - 360f;
						}
					
						unk174 = uParam1->f_56;
						unk175 = uParam1->f_57;
						unk_0xEAB390443C680F72(unk174, 1065353216);
						unk_0xAABD7B0753C5C286(unk175);
						unk_0x0C558E3FC6655AE1(unk174);
						unk_0xED3101A36C29077E(unk175);
						unk181 = { unk_0x7D4F36E9E86B0A11() };
						unk184 = { unk_0xAB9327AF433C2E46() };
						num15 = unk_0x2E496FE654DA4166(unk181, unk184, 1);
						num16 = SYSTEM::ROUND(num15 * 1000f);
						uParam1->f_32 = 1;
					}
				
					if (uParam1->f_32)
					{
						unk_0x17062EAFB894161D();
						func_16(&(uParam1->f_34), true, true, true, false, false, 0);
					}
				}
			}
		
			if (unk_0x18D781E5FEB0E5E3(unk_0xC1A5EC5C986B98AD(), unk_0x14580F20CBCE4FA9(str3)) || num9)
			{
				if (!unk_0x055111B11E6624FD(unk_0xC1A5EC5C986B98AD(), 0))
				{
					unk_0x909F139DC199D8E0(unk_0xC1A5EC5C986B98AD());
				
					switch (uParam1->f_4)
					{
						case joaat("MotionState_Idle"):
							unk_0xC5F9EF8F410596F9(unk_0xC1A5EC5C986B98AD(), joaat("MotionState_Idle"), 1, 0, 0);
							unk_0x4A954DC99388FAC2(0, 0, 3, 0);
							break;
					
						case joaat("MotionState_Walk"):
							unk_0xC5F9EF8F410596F9(unk_0xC1A5EC5C986B98AD(), joaat("MotionState_Walk"), 1, 0, 0);
							unk_0x6C7E85F31A43117F(unk_0x93E99A2DBCBA9CFA(), 1f, 500, 0, 1, 0);
						
							if (unk_0x673F52632EDC33B7() != 4)
							{
								if (uParam1->f_31 == 999f)
									uParam1->f_30 = 0f;
							
								if (uParam1->f_31 == 999f)
								{
									unk189 = { unk_0x929C32C999805F0A(2) };
									unk192 = unk_0xD850DD08D5434072(unk_0xC1A5EC5C986B98AD());
									num17 = unk189.f_2;
									unk193 = unk192;
									uParam1->f_31 = num17 - unk193;
								
									if (uParam1->f_31 < 360f)
										uParam1->f_31 = uParam1->f_31 + 360f;
								
									if (uParam1->f_31 > 360f)
										uParam1->f_31 = uParam1->f_31 - 360f;
								}
							
								unk187 = uParam1->f_30;
								unk188 = uParam1->f_31;
								unk_0xEAB390443C680F72(unk187, 1065353216);
								unk_0xAABD7B0753C5C286(unk188);
								unk194 = { unk_0x7D4F36E9E86B0A11() };
								unk197 = { unk_0xAB9327AF433C2E46() };
								num18 = unk_0x2E496FE654DA4166(unk194, unk197, 1);
								num19 = SYSTEM::ROUND(num18 * 1000f);
								unk_0x9E2404A25985615A(0, 1, num19, 0, 0, 0);
							}
							break;
					
						default:
							break;
					}
				
					if (unk_0x411B750250543BD0(num3))
					{
						unk_0x3866645EE42F5E80(num3);
						num3 = -1;
					}
				}
			}
		
			SYSTEM::WAIT(0);
		}
	}

	if (!func_53(uParam1->f_22, 0f, 0f, 0f, false))
		unk_0x5F130139CEA77D3E((uParam1->f_5 + uParam1->f_19) - uParam1->f_22, uParam1->f_5 + uParam1->f_19 + uParam1->f_22, 1);

	unk_0xE333240A90F2FF3C(unk_0x93E99A2DBCBA9CFA(), 1, 0);

	if (!unk_0x055111B11E6624FD(unk_0xC1A5EC5C986B98AD(), 0))
		unk_0x909F139DC199D8E0(unk_0xC1A5EC5C986B98AD());

	flag4 = unk_0x00F8BF2CF065CEF2();
	flag5 = 0;

	if (uParam1->f_32)
	{
		unk_0x17062EAFB894161D();
	
		if (!func_16(&(uParam1->f_34), true, true, true, false, true, 0))
			flag5 = 1;
	}

	if (flag4 || flag5)
	{
		while (flag4 || flag5 && !unk_0xB53553DC4AAC7D8A())
		{
			flag4;
			flag5;
			num20 = 2;
			func_15(1, 26, &num20);
			func_15(1, 79, &num20);
			func_15(1, 1, &num20);
			func_15(1, 2, &num20);
			func_15(0, 22, &num20);
			func_15(0, 36, &num20);
			func_15(0, 142, &num20);
			func_15(0, 141, &num20);
			func_15(0, 140, &num20);
			func_15(0, 263, &num20);
			func_15(0, 264, &num20);
			SYSTEM::WAIT(0);
			flag4 = unk_0x00F8BF2CF065CEF2();
			flag5 = false;
		
			if (uParam1->f_32)
			{
				unk_0x17062EAFB894161D();
			
				if (!func_16(&(uParam1->f_34), true, true, true, false, true, 0))
					flag5 = true;
			}
		}
	}

	if (!unk_0x2AC37494BBF1DB16(uParam1->f_16))
		unk_0x0B34FA69ECCE3927(uParam1->f_16);

	unk_0x0B34FA69ECCE3927(*uParam1);
	unk_0x42B9FA814615C4F9(unk2, 0);
	func_13(&(uParam1->f_34));

	if (!unk_0x055111B11E6624FD(unk_0xC1A5EC5C986B98AD(), 0))
	{
		unk_0x992BB708B4B7A005(unk_0xC1A5EC5C986B98AD(), 77, unk);
		unk_0x226C3A30511D5DC4(unk_0xC1A5EC5C986B98AD(), 0);
	}

	sParam0 = sParam0;
	return;
}

void func_13(var uParam0) // Position - 0x11F9
{
	func_14(uParam0);
	*uParam0 = 0;
	uParam0->f_9 = { 0f, 0f, 0f };
	return;
}

void func_14(var uParam0) // Position - 0x1214
{
	if (unk_0xF57C1326FD40C8A7(uParam0->f_1))
		unk_0x42B9FA814615C4F9(uParam0->f_1, 0);

	if (unk_0xF57C1326FD40C8A7(uParam0->f_2))
		unk_0x42B9FA814615C4F9(uParam0->f_2, 0);

	if (unk_0xF57C1326FD40C8A7(uParam0->f_3))
		unk_0x42B9FA814615C4F9(uParam0->f_3, 0);

	if (unk_0xF57C1326FD40C8A7(uParam0->f_4))
		unk_0x42B9FA814615C4F9(uParam0->f_4, 0);

	return;
}

void func_15(int iParam0, int iParam1, var uParam2) // Position - 0x126C
{
	unk_0x8B438725D591ED78(iParam0, iParam1, 1);
	*uParam2 = *uParam2 + 1;
	return;
}

BOOL func_16(var uParam0, BOOL bParam1, BOOL bParam2, BOOL bParam3, BOOL bParam4, BOOL bParam5, int iParam6) // Position - 0x1285
{
	var unk;
	var unk4;
	var unk7;
	float value;
	float value2;
	var unk14;
	var unk17;
	var unk20;

	switch (*uParam0)
	{
		case 0:
			func_17();
		
			if (!unk_0x055111B11E6624FD(uParam0->f_5, 0))
			{
				func_14(uParam0);
				unk = { unk_0x7D4F36E9E86B0A11() };
			
				if (bParam1)
					unk = { unk + (unk_0x7A2C98D06C9C1956(uParam0->f_5) * F2V(unk_0x290D4E218346D595())) };
			
				unk4 = { unk_0x5DC36ABEC3A264E9(uParam0->f_5, unk) };
				unk7 = { unk_0x929C32C999805F0A(2) };
				value = { unk7 + uParam0->f_9 };
				value2 = { value - unk_0x000D018EA42688BA(uParam0->f_5, 2) };
				unk14 = { -SYSTEM::SIN(value.f_2) * SYSTEM::COS(value), SYSTEM::COS(value.f_2) * SYSTEM::COS(value), SYSTEM::SIN(value) };
				unk17 = { -SYSTEM::SIN(value2.f_2) * SYSTEM::COS(value2), SYSTEM::COS(value2.f_2) * SYSTEM::COS(value2), SYSTEM::SIN(value2) };
				unk20 = unk_0x6F6AA2FCE9B0E8C2();
			
				if (uParam0->f_17 > 0 || iParam6 != 0)
					uParam0->f_3 = unk_0x002AF75213D62F6C(joaat("TIMED_SPLINE_CAMERA"), 0);
			
				uParam0->f_1 = unk_0x002AF75213D62F6C(joaat("DEFAULT_SCRIPTED_CAMERA"), 1);
			
				if (bParam1)
					unk_0xB109E9D7B544BA66(uParam0->f_1, uParam0->f_5, unk4, 1);
				else
					unk_0x5BF3CF5BAF6ABBBB(uParam0->f_1, unk);
			
				unk_0xB346B70AE8C42AD8(uParam0->f_1, unk7, 2);
				unk_0xE3BD36CCB5EB72F2(uParam0->f_1, unk20);
				uParam0->f_2 = unk_0x002AF75213D62F6C(joaat("DEFAULT_SCRIPTED_CAMERA"), 1);
			
				if (bParam1 && !bParam4)
					unk_0xB109E9D7B544BA66(uParam0->f_2, uParam0->f_5, unk4 + (unk17 * { uParam0->f_12, uParam0->f_12, uParam0->f_12 }), 1);
				else
					unk_0x5BF3CF5BAF6ABBBB(uParam0->f_2, unk + (unk14 * { uParam0->f_12, uParam0->f_12, uParam0->f_12 }));
			
				unk_0xB346B70AE8C42AD8(uParam0->f_2, unk7, 2);
				unk_0xE3BD36CCB5EB72F2(uParam0->f_2, unk20);
			
				if (uParam0->f_17 > 0 && iParam6 == 0)
				{
					uParam0->f_4 = unk_0x002AF75213D62F6C(joaat("DEFAULT_SCRIPTED_CAMERA"), 1);
				
					if (bParam1 && !bParam4)
						unk_0xB109E9D7B544BA66(uParam0->f_4, uParam0->f_5, unk4 + (unk17 * { uParam0->f_12, uParam0->f_12, uParam0->f_12 } * { uParam0->f_13, uParam0->f_13, uParam0->f_13 }), 1);
					else
						unk_0x5BF3CF5BAF6ABBBB(uParam0->f_4, unk + (unk14 * { uParam0->f_12, uParam0->f_12, uParam0->f_12 } * { uParam0->f_13, uParam0->f_13, uParam0->f_13 }));
				
					unk_0xB346B70AE8C42AD8(uParam0->f_4, unk7, 2);
					unk_0xE3BD36CCB5EB72F2(uParam0->f_4, unk20);
				}
			
				if (uParam0->f_17 > 0 || iParam6 != 0)
				{
					unk_0xB4746583AF2DB3C1(uParam0->f_3, uParam0->f_1, 0, 2);
				
					if (iParam6 == 0)
						unk_0xB4746583AF2DB3C1(uParam0->f_3, uParam0->f_4, uParam0->f_17, 2);
				
					unk_0xB4746583AF2DB3C1(uParam0->f_3, uParam0->f_2, uParam0->f_14 - uParam0->f_17, 2);
					unk_0x27B9640830290FE3(uParam0->f_3, iParam6);
					unk_0xEEF11E0DB5769366(uParam0->f_3, 1);
				}
				else
				{
					unk_0x6FF2543994335DB3(uParam0->f_2, uParam0->f_1, uParam0->f_14, 2, 2);
				}
			
				unk_0x9E2404A25985615A(1, 0, 3000, 1, 0, 0);
				uParam0->f_7 = unk_0xA5E11AF0A2B928C1();
				uParam0->f_8 = 0;
				*uParam0 = 1;
			}
			else
			{
				return true;
			}
			break;
	
		case 1:
			func_17();
		
			if (bParam3)
			{
				if (!uParam0->f_8)
				{
					if (unk_0xA5E11AF0A2B928C1() >= uParam0->f_7 + uParam0->f_16)
					{
						if (bParam5)
						{
							switch (uParam0->f_6)
							{
								case 1:
									unk_0x451128B7D435FBF2("CamPushInFranklin", 0, 0);
									break;
							
								case 0:
									unk_0x451128B7D435FBF2("CamPushInMichael", 0, 0);
									break;
							
								case 2:
									unk_0x451128B7D435FBF2("CamPushInTrevor", 0, 0);
									break;
							}
						}
						else
						{
							unk_0x451128B7D435FBF2("CamPushInNeutral", 0, 0);
						}
					
						unk_0x531D638530A8DB97(-1, "1st_Person_Transition", "PLAYER_SWITCH_CUSTOM_SOUNDSET", 1);
						uParam0->f_8 = 1;
					}
				}
			}
		
			if (unk_0xA5E11AF0A2B928C1() >= uParam0->f_7 + uParam0->f_15)
			{
				if (bParam2)
				{
					func_14(uParam0);
					unk_0x9E2404A25985615A(0, 0, 3000, 1, 0, 0);
				}
			
				return true;
			}
			break;
	
		case 2:
			return true;
	}

	return false;
}

void func_17() // Position - 0x1628
{
	unk_0x063E0F2515867ED4();
	func_18();
	return;
}

void func_18() // Position - 0x1638
{
	Global_23131.f_134 = 1;
	return;
}

void func_19(var uParam0, var uParam1, var uParam2, var uParam3) // Position - 0x1646
{
	uParam0->f_9 = { uParam1 };
	return;
}

void func_20(var uParam0, var uParam1, eCharacter echParam2, float fParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8) // Position - 0x1658
{
	uParam0->f_5 = uParam1;
	uParam0->f_6 = echParam2;
	uParam0->f_12 = fParam3;
	uParam0->f_14 = iParam4;
	uParam0->f_15 = iParam5;
	uParam0->f_16 = iParam6;
	uParam0->f_17 = iParam7;
	uParam0->f_13 = iParam8;
	return;
}

float func_21(float fParam0, float fParam1, float fParam2) // Position - 0x1690
{
	if (fParam0 > fParam2)
		return fParam2;
	else if (fParam0 < fParam1)
		return fParam1;

	return fParam0;
}

BOOL _CONVERSATION_ADD_LINE(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6) // Position - 0x16B7
{
	func_38(uParam0, 145, sParam1, iParam4, iParam5, iParam6);

	if (iParam3 > 7)
		if (iParam3 < 12)
			iParam3 = 7;

	Global_21732 = false;
	Global_21734 = false;
	Global_21739 = false;
	Global_22716 = 0;
	Global_22718 = false;
	Global_22722 = 0;
	Global_2883585 = 0;
	return func_23(sParam2, iParam3, false);
}

BOOL func_23(char* sParam0, int iParam1, BOOL bParam2) // Position - 0x1705
{
	Global_21726 = 0;

	if (Global_21725 == 0 || Global_21727 == 2)
	{
		if (Global_21725 != 0)
		{
			if (iParam1 > Global_21727)
			{
				if (Global_21732 == false)
				{
					unk_0xD6625E11483B2324(0);
					Global_20383.f_1 = 3;
					Global_21725 = 0;
					Global_21726 = 1;
					Global_21778 = false;
					Global_21721 = 0;
					Global_21722 = 0;
					Global_21736 = false;
					Global_21735 = false;
					Global_20382 = 0;
				}
				else
				{
					func_37();
					return 0;
				}
			}
			else
			{
				return 0;
			}
		}
	
		if (unk_0x0DCB385165FDE763())
			return 0;
	
		if (func_36(8, -1))
			return 0;
	
		Global_21801 = { Global_21795 };
		func_35();
		Global_21014 = { Global_21179 };
		Global_21731 = Global_21732;
		Global_21738 = Global_21739;
		Global_2883586 = Global_2883585;
		Global_21740 = { Global_21756 };
		Global_21733 = Global_21734;
		Global_22715 = Global_22716;
		Global_22723 = { Global_22729 };
		Global_22717 = Global_22718;
		Global_22719 = Global_22720;
		Global_22721 = Global_22722;
		Global_21344.f_370 = Global_22714;
		Global_21344.f_368 = Global_22712;
		Global_21344.f_369 = Global_22713;
		Global_21721 = Global_21722;
	
		if (Global_21731)
		{
			unk_0x061B1200C95204CB(&Global_8253, 20);
			unk_0x061B1200C95204CB(&Global_8254, 17);
			unk_0x061B1200C95204CB(&Global_8255, 0);
		
			if (bParam2)
			{
				_UPDATE_CURRENT_PLAYER_CHARACTER();
			
				if (Global_9058[Global_20383 /*2811*/][0 /*281*/].f_259 == 2)
				{
					if (iParam1 == 13)
					{
					}
					else
					{
						return 0;
					}
				}
			
				if (Global_20383.f_1 > 3)
					return 0;
			}
		
			if (Global_20349 == 1)
				return 0;
		
			if (unk_0x48DC6A21D1CAD89C(unk_0x93E99A2DBCBA9CFA()))
			{
				if (unk_0xE3A9F9074FB79A61(unk_0xC1A5EC5C986B98AD()))
					return 0;
			
				if (func_32())
					return 0;
			
				if (unk_0xFC42DF91E1950588(unk_0xC1A5EC5C986B98AD()))
					return 0;
			
				if (unk_0x48A4D45B3B4CEFFD(unk_0xC1A5EC5C986B98AD()))
					return 0;
			
				if (unk_0xA92CED053FDC0D06(unk_0xC1A5EC5C986B98AD()))
					return 0;
			
				if (unk_0x87B83AFF6D0F83FD(unk_0xC1A5EC5C986B98AD(), joaat("GADGET_PARACHUTE")))
					return 0;
			
				if (!Global_78558)
				{
					if (unk_0x1589BC95A4C50F21(unk_0xC1A5EC5C986B98AD()))
						return 0;
				
					if (unk_0x5150E13C3DAAE892(unk_0x93E99A2DBCBA9CFA()))
						return 0;
				
					if (unk_0x197DD015F81B0D16(unk_0xC1A5EC5C986B98AD()))
						return 0;
				
					if (unk_0xF56A91A191EDA1FC(unk_0x93E99A2DBCBA9CFA(), 0))
						return 0;
				}
			}
		
			if (func_31())
			{
				return 0;
			}
			else
			{
				switch (Global_20383.f_1)
				{
					case 7:
						return 0;
				
					case 8:
						return 0;
				
					case 9:
						break;
				
					case 10:
						break;
				
					default:
						break;
				}
			
				if (IS_BIT_SET(Global_8253, 9))
					return 0;
			}
		
			func_30();
			Global_21735 = bParam2;
		}
	
		Global_21727 = iParam1;
		TEXT_LABEL_ASSIGN_STRING(&Global_21344, sParam0, 24);
		Global_20591 = 0;
		func_29();
		func_24();
		return 1;
	}

	if (Global_21725 == 5)
		return 0;

	if (iParam1 < Global_21727 || iParam1 == Global_21727)
		return 0;

	if (iParam1 == 2)
	{
	}
	else
	{
		func_37();
	}

	return 0;
}

void func_24() // Position - 0x19D3
{
	if (!func_25())
		return;

	if (Global_21731)
	{
		TEXT_LABEL_COPY(&(Global_1977511.f_1), { Global_21344 }, 4);
		Global_1977511 = Global_7568;
		Global_1977511.f_6 = Global_21735;
	}

	return;
}

BOOL func_25() // Position - 0x1A0A
{
	if (!Global_262145.f_28878)
		return false;

	if (!Global_78558)
		return false;

	if (unk_0x93E99A2DBCBA9CFA() == _INVALID_PLAYER_INDEX())
		return false;

	if (func_26(unk_0x93E99A2DBCBA9CFA()))
		return false;

	if (IS_BIT_SET(Global_1894573[unk_0x93E99A2DBCBA9CFA() /*608*/].f_1, 7))
		return false;

	if (unk_0x1758F8A8511510AB())
		return false;

	return true;
}

BOOL func_26(int iParam0) // Position - 0x1A6D
{
	return func_27(iParam0, 20);
}

BOOL func_27(int iParam0, int iParam1) // Position - 0x1A7D
{
	return IS_BIT_SET(Global_1894573[iParam0 /*608*/].f_10.f_4, iParam1);
}

Player _INVALID_PLAYER_INDEX() // Position - 0x1A95
{
	return -1;
}

void func_29() // Position - 0x1A9E
{
	int i;

	for (i = 0; i <= 69; i = i + 1)
	{
		TEXT_LABEL_ASSIGN_STRING(&Global_20593[i /*6*/], "", 24);
	}

	unk_0xD6625E11483B2324(0);
	Global_21725 = 1;
	return;
}

void func_30() // Position - 0x1ACE
{
	Global_21778 = Global_21777;
	Global_21772 = Global_21773;
	Global_21819 = { Global_21807 };
	Global_21825 = { Global_21813 };
	Global_21780 = Global_21779;
	Global_21849 = { Global_21831 };
	Global_21855 = { Global_21837 };
	Global_21861 = { Global_21843 };
	Global_21867 = { Global_21873 };
	Global_7568 = Global_7569;
	Global_7570 = Global_7571;
	Global_21736 = Global_21737;
	Global_21738 = Global_21739;
	Global_21740 = { Global_21756 };
	Global_21729 = Global_21730;
	Global_22741 = false;
	Global_21774 = 0;
	Global_21775 = false;
	unk_0x061B1200C95204CB(&Global_8254, 16);
	return;
}

BOOL func_31() // Position - 0x1B63
{
	if (Global_20383.f_1 == 1 || Global_20383.f_1 == 0)
		return true;

	return false;
}

BOOL func_32() // Position - 0x1B8A
{
	int num;
	int num2;

	if (Global_78558)
	{
		num = 0;
		unk_0xEBC16D60E30C9AE1(unk_0xC1A5EC5C986B98AD(), &num2, 1);
	
		if (unk_0x48DC6A21D1CAD89C(unk_0x93E99A2DBCBA9CFA()))
			if (num2 == joaat("WEAPON_SNIPERRIFLE") || num2 == joaat("WEAPON_HEAVYSNIPER") || num2 == joaat("WEAPON_REMOTESNIPER"))
				num = 1;
	
		if (unk_0xC67B4044F323AEB2() && num == 1)
			return true;
		else
			return false;
	}

	if (unk_0x48DC6A21D1CAD89C(unk_0x93E99A2DBCBA9CFA()))
		if (unk_0x97247A0CAE4CEFB6(unk_0xC1A5EC5C986B98AD(), 78, 1))
			return true;
		else
			return false;

	return true;
}

void _UPDATE_CURRENT_PLAYER_CHARACTER() // Position - 0x1C23
{
	if (func_34(14))
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

BOOL func_34(int iParam0) // Position - 0x1CC5
{
	return Global_43257 == iParam0;
}

void func_35() // Position - 0x1CD3
{
	int i;

	for (i = 0; i <= 15; i = i + 1)
	{
		Global_21014[i /*10*/] = 0;
		TEXT_LABEL_ASSIGN_STRING(&(Global_21014[i /*10*/].f_1), "", 24);
		Global_21014[i /*10*/].f_7 = 0;
		Global_21014[i /*10*/].f_8 = 0;
	}

	Global_21014.f_161 = -99;
	Global_21014.f_162 = { 0f, 0f, 0f };
	return;
}

BOOL func_36(int iParam0, int iParam1) // Position - 0x1D29
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

void func_37() // Position - 0x1D61
{
	unk_0x782234C275AFBA24();
	Global_22736 = 0;

	if (unk_0xE444FD7526C8BB46() || Global_20383.f_1 == 9 || Global_20382 == 1)
	{
		unk_0xD6625E11483B2324(0);
		Global_21725 = 6;
		Global_20383.f_1 = 3;
		return;
	}

	if (unk_0x0DCB385165FDE763())
	{
		unk_0xD6625E11483B2324(1);
		Global_21725 = 6;
		return;
	}

	return;
}

void func_38(var uParam0, eCharacter echParam1, char* sParam2, int iParam3, int iParam4, int iParam5) // Position - 0x1DB8
{
	Global_21179 = { *uParam0 };
	Global_7569 = echParam1;
	TEXT_LABEL_ASSIGN_STRING(&Global_21795, sParam2, 24);
	Global_22714 = iParam5;

	if (iParam3 == 0)
	{
		Global_22712 = 1;
		Global_22710 = 0;
	}
	else
	{
		Global_22712 = 0;
		Global_22710 = 1;
	}

	if (iParam4 == 0)
	{
		Global_22713 = 1;
		Global_22711 = 0;
	}
	else
	{
		Global_22713 = 0;
		Global_22711 = 1;
	}

	return;
}

void func_39(int iParam0) // Position - 0x1E0E
{
	Global_43808 = unk_0xA5E11AF0A2B928C1() + iParam0;
	return;
}

void func_40(int iParam0) // Position - 0x1E20
{
	if (func_45())
		return;

	if (!Global_20383.f_1 == 1)
	{
		if (func_44(0))
			func_41(iParam0);
	
		unk_0xECDAB41968FF21A8(&Global_8254, 2);
	}

	return;
}

void func_41(int iParam0) // Position - 0x1E53
{
	if (func_45())
		return;

	if (Global_20584)
		if (func_43())
			func_42(true, true);
		else
			func_42(false, false);

	if (Global_20383.f_1 == 10 || Global_20383.f_1 == 9)
		unk_0xECDAB41968FF21A8(&Global_8254, 16);

	if (unk_0xE444FD7526C8BB46())
		unk_0xD6625E11483B2324(0);

	Global_21725 = 5;

	if (iParam0 == 1)
		unk_0xECDAB41968FF21A8(&Global_8253, 30);
	else
		unk_0x061B1200C95204CB(&Global_8253, 30);

	if (!func_31())
		Global_20383.f_1 = 3;

	return;
}

void func_42(BOOL bParam0, BOOL bParam1) // Position - 0x1EDD
{
	if (bParam0)
	{
		if (func_44(0))
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

BOOL func_43() // Position - 0x1F51
{
	return IS_BIT_SET(Global_1962996, 5);
}

BOOL func_44(int iParam0) // Position - 0x1F5F
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

BOOL func_45() // Position - 0x1FB6
{
	return IS_BIT_SET(Global_1962996, 19);
}

void _CONVERSATION_INITIALIZE_ACTOR(var uParam0, int iParam1, var uParam2, char* sParam3, int iParam4, int iParam5) // Position - 0x1FC5
{
	uParam0->[iParam1 /*10*/].f_7 == 1;
	uParam0->[iParam1 /*10*/] = uParam2;
	TEXT_LABEL_ASSIGN_STRING(&(uParam0->[iParam1 /*10*/].f_1), sParam3, 24);
	uParam0->[iParam1 /*10*/].f_7 = 1;
	uParam0->[iParam1 /*10*/].f_8 = iParam4;
	uParam0->[iParam1 /*10*/].f_9 = iParam5;

	if (!Global_78558)
	{
		if (!unk_0x66599E73DBA5A850(uParam2))
			if (uParam0->[iParam1 /*10*/].f_8 == 0)
				unk_0xAD4CEC14FE6404F6(uParam2, 0);
			else
				unk_0xAD4CEC14FE6404F6(uParam2, 1);
	
		if (!unk_0x66599E73DBA5A850(uParam2))
			if (uParam0->[iParam1 /*10*/].f_9 == 0)
				unk_0x59B8D6E436F5B21C(uParam2, 0);
			else
				unk_0x59B8D6E436F5B21C(uParam2, 1);
	}

	return;
}

void _DISPLAY_HELP_TEXT(char* text, int iParam1) // Position - 0x2060
{
	unk_0x476CC3711883B966(text);
	unk_0xBC8969B539DCA239(0, 0, 1, iParam1);
	return;
}

void func_48(var uParam0, int iParam1) // Position - 0x2077
{
	if (func_49(iParam1, 1))
		unk_0xF7E0E1B75B1BE2B6(uParam0, "HOSPITAL_0", 0f, 1f);

	if (func_49(iParam1, 2))
		unk_0xF7E0E1B75B1BE2B6(uParam0, "HOSPITAL_1", 0f, 1f);

	if (func_49(iParam1, 4))
		unk_0xF7E0E1B75B1BE2B6(uParam0, "HOSPITAL_2", 0f, 1f);

	if (func_49(iParam1, 8))
		unk_0xF7E0E1B75B1BE2B6(uParam0, "HOSPITAL_3", 0f, 1f);

	if (func_49(iParam1, 16))
		unk_0xF7E0E1B75B1BE2B6(uParam0, "HOSPITAL_4", 0f, 1f);

	if (func_49(iParam1, 32))
		unk_0xF7E0E1B75B1BE2B6(uParam0, "HOSPITAL_5", 0f, 1f);

	if (func_49(iParam1, 64))
		unk_0xF7E0E1B75B1BE2B6(uParam0, "HOSPITAL_6", 0f, 1f);

	if (func_49(iParam1, 128))
		unk_0xF7E0E1B75B1BE2B6(uParam0, "HOSPITAL_7", 0f, 1f);

	if (func_49(iParam1, 256))
		unk_0xF7E0E1B75B1BE2B6(uParam0, "HOSPITAL_8", 0f, 1f);

	if (func_49(iParam1, 512))
		unk_0xF7E0E1B75B1BE2B6(uParam0, "HOSPITAL_9", 0f, 1f);

	func_49(iParam1, 0);
	return;
}

BOOL func_49(int iParam0, int iParam1) // Position - 0x216E
{
	return iParam0 && iParam1 != false;
}

BOOL func_50() // Position - 0x217D
{
	if (Global_100681 == 13 || Global_100681 == 10 || Global_100681 == 11 || Global_100681 == 12)
		return false;

	return true;
}

void func_51() // Position - 0x21BB
{
	int i;

	for (i = 0; i < 8; i = i + 1)
	{
		if (Global_97614[i /*17*/] && !Global_97614[i /*17*/].f_1)
			if (Global_97614[i /*17*/].f_3 == 0)
				if (Global_97614[i /*17*/].f_5 != 88 && Global_97614[i /*17*/].f_5 != 89 && Global_97614[i /*17*/].f_5 != 92)
					func_52(Global_97614[i /*17*/].f_5, true);
	}

	return;
}

void func_52(int iParam0, BOOL bParam1) // Position - 0x2242
{
	if (bParam1)
		if (iParam0 != 88 && iParam0 != 89 && iParam0 != 92)
			Global_94666[iParam0 /*2*/] = true;
	else
		Global_94666[iParam0 /*2*/] = false;

	return;
}

BOOL func_53(float fParam0, var uParam1, var uParam2, float fParam3, float fParam4, float fParam5, BOOL bParam6) // Position - 0x2280
{
	if (bParam6)
		return fParam0 == fParam3 && fParam0.f_1 == fParam3.f_1;

	return fParam0 == fParam3 && fParam0.f_1 == fParam3.f_1 && fParam0.f_2 == fParam3.f_2;
}

void func_54() // Position - 0x22C7
{
	func_55();
	func_73(true);
	return;
}

void func_55() // Position - 0x22D8
{
	int i;
	int num;
	int j;

	i = 0;
	num = 0;

	for (i = 0; i < 16; i = i + 1)
	{
		num = Global_44232[i /*5*/];
	
		if (!num == -1)
			func_171(1, num, 1);
	}

	j = 0;

	for (j = 0; j < 5; j = j + 1)
	{
		if (Global_44206[j /*5*/] == 0)
			func_56(j);
	}

	return;
}

void func_56(int iParam0) // Position - 0x2338
{
	if (iParam0 < 0 || iParam0 >= 5)
		return;

	if (!Global_44206[iParam0 /*5*/].f_1 == 0)
		if (Global_44206[iParam0 /*5*/].f_1 == unk_0xC1A5EC5C986B98AD())
			Global_44444 = 0;

	Global_44206[iParam0 /*5*/] = 13;
	Global_44206[iParam0 /*5*/].f_1 = 0;
	Global_44206[iParam0 /*5*/].f_2 = 0;
	Global_44206[iParam0 /*5*/].f_3 = 0;
	Global_44206[iParam0 /*5*/].f_4 = 0;
	Global_44204 = Global_44204 - 1;

	if (Global_44204 < 0)
		Global_44204 = 0;

	return;
}

int func_57(var uParam0, var uParam1, var uParam2, var uParam3, int iParam4, int iParam5) // Position - 0x23BB
{
	if (unk_0x48DC6A21D1CAD89C(unk_0x93E99A2DBCBA9CFA()))
	{
		func_61(0);
		unk_0xF82BC5193AF62796(uParam0, 5f, 1, 0, 0, 0);
	
		if (unk_0x7DE17ACDD8BA2642(unk_0xC1A5EC5C986B98AD()))
		{
			if (!unk_0x66599E73DBA5A850(unk_0xC1A5EC5C986B98AD()))
			{
				unk_0xC2E3C377D893C17A(unk_0xC1A5EC5C986B98AD(), uParam0, 1, 0, 0, 1);
				unk_0x692C3FDAD7DB53CC(unk_0xC1A5EC5C986B98AD(), uParam3);
				unk_0xEAB390443C680F72(0f, 1065353216);
				unk_0xAABD7B0753C5C286(0f);
			}
		}
	
		unk_0x46D9CC780489C728(uParam0, 4500f, 0);
		SYSTEM::WAIT(0);
		unk_0xF82BC5193AF62796(uParam0, 5000f, 1, 0, 0, 0);
		unk_0x2117C3CCFF2D957A(uParam0, 5000f, 0);
		unk_0xA172C350F431483A(uParam0, 5000f);
		unk_0x3056199EEBDE8CBB(uParam0, 5000f);
		func_60();
		func_59();
		SYSTEM::SETTIMERA(0);
		func_61(1);
	
		if (!unk_0x58A962BEF2DDE1DF())
		{
			while (!unk_0x46D9CC780489C728(uParam0, 4500f, 0))
			{
				SYSTEM::WAIT(0);
			
				if (SYSTEM::TIMERA() > 2000)
				{
					unk_0x577AE0048ADA90C8(0);
					return 0;
				}
			}
		}
	
		SYSTEM::SETTIMERA(0);
	
		while (!unk_0x16760C7780F48003())
		{
			SYSTEM::WAIT(0);
		
			if (SYSTEM::TIMERA() > 20000)
			{
				unk_0x577AE0048ADA90C8(0);
			
				if (unk_0x58A962BEF2DDE1DF())
					unk_0xB942AB5E12BF630A();
			
				return 0;
			}
		}
	
		if (unk_0x7DE17ACDD8BA2642(unk_0xC1A5EC5C986B98AD()))
		{
			if (!unk_0x66599E73DBA5A850(unk_0xC1A5EC5C986B98AD()))
			{
				if (unk_0x58A962BEF2DDE1DF())
					unk_0xB942AB5E12BF630A();
			
				unk_0x577AE0048ADA90C8(0);
				SYSTEM::SETTIMERA(0);
				unk_0x1CC025DD90CB1D9C();
			
				if (iParam5 == 1)
					unk_0xF55B077AE7451D3C();
				else
					SYSTEM::SETTIMERA(5000);
			
				unk_0xC1AE78F8D627C659();
			}
		}
	
		while (!unk_0x4CD3268F93CFCDC3() && !func_58() && SYSTEM::TIMERA() < 1500)
		{
			SYSTEM::WAIT(0);
		}
	
		if (SYSTEM::TIMERA() > 1500)
		{
			if (iParam5 == 1)
			{
			}
		}
	
		if (iParam4 == 1)
		{
			unk_0xDE209AFE421606C6(uParam0, &(uParam0.f_2), 0, 0);
			unk_0xF82BC5193AF62796(uParam0, 5f, 1, 0, 0, 0);
		
			if (unk_0x7DE17ACDD8BA2642(unk_0xC1A5EC5C986B98AD()))
			{
				if (!unk_0x66599E73DBA5A850(unk_0xC1A5EC5C986B98AD()))
				{
					unk_0xC2E3C377D893C17A(unk_0xC1A5EC5C986B98AD(), uParam0, 1, 0, 0, 1);
					unk_0x692C3FDAD7DB53CC(unk_0xC1A5EC5C986B98AD(), uParam3);
				}
			}
		}
	
		unk_0xEAB390443C680F72(0f, 1065353216);
		unk_0xAABD7B0753C5C286(0f);
		func_61(0);
		return 1;
	}

	func_61(0);
	return 0;
}

BOOL func_58() // Position - 0x25DA
{
	return !Global_77348.f_553;
}

void func_59() // Position - 0x25EA
{
	Global_77348.f_553 = 1;
	Global_77348.f_554 = 0;
	return;
}

void func_60() // Position - 0x2602
{
	int i;

	for (i = 0; i < 68; i = i + 1)
	{
		Global_77348[i] = 0;
	}

	return;
}

void func_61(int iParam0) // Position - 0x2626
{
	int num;

	num = 0;

	if (num == 0)
	{
		if (iParam0 == 1)
		{
			if (!IS_BIT_SET(Global_100681.f_20, 2))
			{
				unk_0x577AE0048ADA90C8(1);
				unk_0xECDAB41968FF21A8(&(Global_100681.f_20), 2);
			}
		}
		else if (IS_BIT_SET(Global_100681.f_20, 2))
		{
			unk_0x577AE0048ADA90C8(0);
			unk_0x061B1200C95204CB(&(Global_100681.f_20), 2);
		}
	}

	return;
}

BOOL _GET_RANDOM_BOOL() // Position - 0x2677
{
	if (IS_BIT_SET(unk_0x15A88CFAAFFC6C4B(0, 65535), 0))
		return true;

	return false;
}

BOOL func_63(int iParam0) // Position - 0x2695
{
	return IS_BIT_SET(Global_113648.f_7231[iParam0], 0);
}

BOOL func_64(int iParam0) // Position - 0x26AA
{
	if (iParam0 == 146 || iParam0 == -1)
		return false;

	return Global_113648.f_9087.f_99.f_58[iParam0];
}

int func_65() // Position - 0x26D7
{
	if (Global_40195[11] == 1)
		return 4;

	if (!func_66(21))
		return 0;

	if (!func_64(130))
		return 1;

	if (!func_64(131))
		return 2;

	if (!func_66(22))
		return 1;

	if (!func_66(49))
		return 3;

	if (!func_66(28))
		return 1;

	return 3;
}

BOOL func_66(int iParam0) // Position - 0x2755
{
	if (iParam0 == 94 || iParam0 == -1)
		return false;

	return Global_113648.f_9087.f_330[iParam0 /*6*/];
}

eCharacter _GET_CURRENT_PLAYER_CHARACTER() // Position - 0x2781
{
	func_68();
	return Global_113648.f_2365.f_539.f_4321;
}

void func_68() // Position - 0x279A
{
	eCharacter character;

	if (unk_0x7DE17ACDD8BA2642(unk_0xC1A5EC5C986B98AD()))
	{
		if (_GET_CHARACTER_MODEL(Global_113648.f_2365.f_539.f_4321) != unk_0x504B9BB48D41C264(unk_0xC1A5EC5C986B98AD()))
		{
			character = _GET_PLAYER_CHARACTER_FROM_PED(unk_0xC1A5EC5C986B98AD());
		
			if (func_69(character) && !func_34(14) || Global_112599)
			{
				if (Global_113648.f_2365.f_539.f_4321 != character && func_69(Global_113648.f_2365.f_539.f_4321))
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

BOOL func_69(eCharacter echParam0) // Position - 0x2897
{
	return echParam0 < CHAR_MULTIPLAYER;
}

eCharacter _GET_PLAYER_CHARACTER_FROM_PED(var uParam0) // Position - 0x28A3
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

int _GET_CHARACTER_MODEL(eCharacter character) // Position - 0x28E0
{
	if (func_69(character))
		return func_72(character);
	else
		character != _CHAR_NULL;

	return 0;
}

int func_72(eCharacter echParam0) // Position - 0x2905
{
	return Global_2028[echParam0 /*29*/];
}

void func_73(BOOL bParam0) // Position - 0x2914
{
	unk_0x8660199B2F4898FA(0f);
	unk_0x7BCAFEC02B563C0E(0f);
	unk_0x349662FEA4ECE81F(0f);
	unk_0x7EC07327DEB05AC6(1);
	unk_0xE4752D69CC8F9119(0f);
	unk_0x1936275185C4A0E5(1);
	unk_0xBF6A4C0559E4BF39(0);

	if (unk_0xD19C2C73F4D74992("SAFEHOUSE_STONED_MICHAEL"))
		unk_0x3FA8C73B5856A3E4("SAFEHOUSE_STONED_MICHAEL");

	if (!unk_0x2AC37494BBF1DB16(&Global_44424))
		if (unk_0xD19C2C73F4D74992(&Global_44424))
			unk_0x3FA8C73B5856A3E4(&Global_44424);

	if (unk_0xF57C1326FD40C8A7(Global_44412))
	{
		if (unk_0x75F9043412E1F207(Global_44412))
		{
			unk_0xC7B060434432D1C9(Global_44412, 0f);
			unk_0x0969F28D2C570575(Global_44412, 1);
		}
	}

	if (unk_0xC0A15A60BC0C570E())
		unk_0x282AA8C5BDD0836B(0);

	if (bParam0)
		if (unk_0x4F873840FC0FA8FE() != -1 || unk_0xB31050BAEF14E6F4() != -1)
			unk_0xA2EC5ACB2B5D92A4();
		else if (unk_0xB53553DC4AAC7D8A())
			unk_0xA2EC5ACB2B5D92A4();

	Global_44419 = 0f;
	TEXT_LABEL_ASSIGN_STRING(&Global_44420, "", 16);
	TEXT_LABEL_ASSIGN_STRING(&Global_44424, "", 64);
	TEXT_LABEL_ASSIGN_STRING(&Global_44440, "", 16);
	func_74();
	return;
}

void func_74() // Position - 0x29ED
{
	Global_44411 = false;
	Global_44412 = 0;
	Global_44413 = 0;
	Global_44414 = 30000;
	Global_44415 = 0f;
	Global_44417 = 0f;
	Global_44416 = 0f;
	Global_44418 = 1f;
	Global_44419 = 0f;
	TEXT_LABEL_ASSIGN_STRING(&Global_44420, "", 16);
	return;
}

void func_75(int iParam0) // Position - 0x2A22
{
	int num;

	switch (iParam0)
	{
		case 0:
			num = Global_262145.f_18161;
			break;
	
		case 1:
			num = Global_262145.f_18151;
			break;
	
		case 2:
			num = Global_262145.f_18162;
			break;
	
		case 3:
			num = Global_262145.f_18154;
			break;
	
		case 4:
			num = Global_262145.f_18150;
			break;
	
		case 6:
			num = 3;
			break;
	
		case 7:
			num = Global_262145.f_18165;
			break;
	
		case 8:
			num = Global_262145.f_18166;
			break;
	
		case 9:
			num = Global_262145.f_18169;
			break;
	
		case 22:
			num = Global_262145.f_18170;
			break;
	
		case 23:
			num = Global_262145.f_18163;
			break;
	
		case 25:
			num = Global_262145.f_19055;
			break;
	
		case 26:
			num = Global_262145.f_19054;
			break;
	}

	if (num != 0)
		unk_0x6F68FC40163BBC7C(func_85(func_86()), func_84(func_86()), func_83(), func_82(), iParam0, num);

	func_81(num);
	func_76(num);
	return;
}

void func_76(int iParam0) // Position - 0x2B47
{
	int num;

	num = _MPCHAR_STAT_GET_INT(MP_STAT_MC_CONTRIBUTION_POINTS, -1, 0);
	num = num + iParam0;

	if (num < 0)
		num = 0;

	if (num > 9999)
		num = 9999;

	Global_1894573[unk_0x93E99A2DBCBA9CFA() /*608*/].f_10.f_468 = num;
	_MPCHAR_STAT_SET_INT(MP_STAT_MC_CONTRIBUTION_POINTS, num, -1, 1, false);
	return;
}

void _MPCHAR_STAT_SET_INT(eMPStat empsParam0, int iParam1, int iParam2, int iParam3, BOOL bParam4) // Position - 0x2B95
{
	int num;

	bParam4;
	num = Global_2805027[empsParam0 /*3*/][func_78(iParam2)];

	if (num != 0)
		unk_0x3CC35ACFFC9C730E(num, iParam1, iParam3);

	return;
}

int func_78(int iParam0) // Position - 0x2BC5
{
	int num;
	int num2;

	num = iParam0;

	if (num == -1)
	{
		num2 = func_79();
	
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

int func_79() // Position - 0x2BF9
{
	return Global_1574918;
}

int _MPCHAR_STAT_GET_INT(eMPStat empsParam0, int iParam1, int iParam2) // Position - 0x2C05
{
	int num;
	int num2;

	if (empsParam0 != 14192)
	{
		iParam2 == 0;
		num = Global_2805027[empsParam0 /*3*/][func_78(iParam1)];
	
		if (unk_0xDD7756E2742E0F6D(num, &num2, -1))
			return num2;
	}

	return 0;
}

void func_81(int iParam0) // Position - 0x2C42
{
	int num;

	num = unk_0x93E99A2DBCBA9CFA();
	Global_1894573[num /*608*/].f_10.f_467 = Global_1894573[num /*608*/].f_10.f_467 + iParam0;

	if (Global_1894573[num /*608*/].f_10.f_467 < -9999)
		Global_1894573[num /*608*/].f_10.f_467 = 9999;
	else if (Global_1894573[num /*608*/].f_10.f_467 > 9999)
		Global_1894573[num /*608*/].f_10.f_467 = 9999;

	return;
}

int func_82() // Position - 0x2CBC
{
	if (Global_1947733.f_3 != 0)
		return Global_1947733.f_3;

	return -1;
}

int func_83() // Position - 0x2CD8
{
	if (Global_1947733.f_2 != 0)
		return Global_1947733.f_2;

	return -1;
}

int func_84(Player plParam0) // Position - 0x2CF4
{
	if (plParam0 == _INVALID_PLAYER_INDEX())
		return -1;

	return Global_1894573[plParam0 /*608*/].f_10.f_8[1];
}

int func_85(Player plParam0) // Position - 0x2D19
{
	if (plParam0 == _INVALID_PLAYER_INDEX())
		return -1;

	return Global_1894573[plParam0 /*608*/].f_10.f_8[0];
}

Player func_86() // Position - 0x2D3E
{
	return Global_1894573[unk_0x93E99A2DBCBA9CFA() /*608*/].f_10;
}

BOOL func_87(BOOL bParam0) // Position - 0x2D53
{
	return func_88(unk_0x93E99A2DBCBA9CFA(), bParam0);
}

BOOL func_88(Player plParam0, BOOL bParam1) // Position - 0x2D65
{
	return func_89(plParam0, bParam1, 1);
}

int func_89(Player plParam0, BOOL bParam1, int iParam2) // Position - 0x2D76
{
	Player player;

	if (plParam0 == _INVALID_PLAYER_INDEX())
		return 0;

	if (!bParam1)
		if (func_90(plParam0, iParam2))
			return 0;

	player = Global_1894573[plParam0 /*608*/].f_10;

	if (player != _INVALID_PLAYER_INDEX() && Global_1894573[player /*608*/].f_10.f_428 == iParam2)
		return 1;

	return 0;
}

BOOL func_90(Player plParam0, int iParam1) // Position - 0x2DD2
{
	if (plParam0 != _INVALID_PLAYER_INDEX())
		if (Global_1894573[plParam0 /*608*/].f_10 != _INVALID_PLAYER_INDEX())
			if (Global_1894573[plParam0 /*608*/].f_10 == plParam0 && Global_1894573[plParam0 /*608*/].f_10.f_428 == iParam1)
				return true;

	return false;
}

void _SET_PLAYER_CONTROL_EX(Player plParam0, BOOL bParam1, eSetPlayerControlFlags espcfParam2, int iParam3) // Position - 0x2E21
{
	eSetPlayerControlFlags controlBs;
	BOOL flag;
	BOOL flag2;
	BOOL flag3;
	BOOL flag4;
	BOOL flag5;
	BOOL flag6;
	BOOL flag7;
	BOOL flag8;
	BOOL flag9;
	BOOL flag10;
	BOOL flag11;
	BOOL flag12;
	BOOL flag13;
	BOOL flag14;
	BOOL flag15;
	BOOL flag16;
	BOOL flag17;
	BOOL flag18;
	BOOL flag19;
	BOOL flag20;
	BOOL flag21;
	BOOL flag22;
	BOOL flag23;
	BOOL flag24;
	BOOL flag25;
	BOOL flag26;
	var unk;
	int num;

	if (bParam1)
		if (unk_0x9AA69AA7F99F66A2())
			unk_0xD111D6644D1D5BD5(0);

	if (func_104())
		if (bParam1)
			return;
		else
			iParam3 = 1;

	if (!unk_0xA26A9A07F761D8F8())
	{
		controlBs = espcfParam2;
		unk_0xE333240A90F2FF3C(plParam0, bParam1, controlBs);
	}
	else
	{
		flag = true;
		flag2 = espcfParam2 & SPC_AMBIENT_SCRIPT != 0;
		flag3 = espcfParam2 & SPC_CLEAR_TASKS != 0;
		flag4 = espcfParam2 & SPC_REMOVE_FIRES != 0;
		flag5 = espcfParam2 & SPC_REMOVE_EXPLOSIONS != 0;
		flag6 = espcfParam2 & SPC_REMOVE_PROJECTILES != 0;
		flag7 = espcfParam2 & SPC_DEACTIVATE_GADGETS != 0;
		flag8 = espcfParam2 & SPC_REENABLE_CONTROL_ON_DEATH != 0;
		flag9 = espcfParam2 & SPC_LEAVE_CAMERA_CONTROL_ON != 0;
		flag10 = espcfParam2 & SPC_ALLOW_PLAYER_DAMAGE != 0;
		flag11 = espcfParam2 & SPC_DONT_STOP_OTHER_CARS_AROUND_PLAYER != 0;
		flag12 = espcfParam2 & SPC_PREVENT_EVERYBODY_BACKOFF != 0;
		flag13 = espcfParam2 & SPC_ALLOW_PAD_SHAKE != 0;
		flag14 = espcfParam2 & 8192 != 0;
		flag15 = espcfParam2 & 16384 != 0;
		flag16 = espcfParam2 & 32768 != 0;
		flag17 = espcfParam2 & 65536 != 0;
		flag18 = espcfParam2 & 131072 != 0;
		flag19 = espcfParam2 & 262144 != 0;
		flag20 = espcfParam2 & 524288 != 0;
		flag21 = espcfParam2 & 1048576 != 0;
		flag22 = espcfParam2 & 2097152 != 0;
		flag23 = espcfParam2 & 4194304 != 0;
		flag24 = espcfParam2 & 8388608 != 0;
		flag25 = espcfParam2 & 16777216 != 0;
	
		if (espcfParam2 & 33554432 != 0 || unk_0x1758F8A8511510AB())
			flag = false;
	
		if (!func_102())
		{
			flag26 = false;
		
			if (bParam1 == true)
				flag26 = true;
		
			if (flag16 == false && !flag21)
				flag26 = true;
		
			if (flag10 == true)
				flag26 = true;
		
			if (flag26)
				return;
		}
	
		flag18;
	
		if (unk_0xE6DEE82DB0922DF0(plParam0) && unk_0x48DC6A21D1CAD89C(plParam0) || iParam3 == 1)
		{
			if (iParam3 && unk_0x055111B11E6624FD(unk_0xF2CFBB1105511E1A(plParam0), 0))
				return;
		
			unk = unk_0xF2CFBB1105511E1A(plParam0);
		
			if (!flag20)
			{
				if (flag19 && bParam1 == false && unk_0xA26A9A07F761D8F8())
					unk_0x0D78C94B1B789F7C(1);
				else if (flag14 || !_NETWORK_IS_PLAYER_IN_SCTV(unk_0x93E99A2DBCBA9CFA(), 0) && !func_99())
					unk_0x724FFAED1C56CE2B(unk, !flag14, 0);
			
				if (!flag14)
				{
					if (unk_0xA26A9A07F761D8F8() && !flag19)
						unk_0x0D78C94B1B789F7C(0);
				
					Global_2657589[plParam0 /*466*/].f_254 = 0;
				}
			}
		
			if (bParam1)
			{
				if (flag)
				{
					func_96(0, 0, 0);
				
					if (flag25)
						unk_0x3EF548873C55CA64();
				}
			
				if (!func_95(unk) && !unk_0x24405041A9F1A910(unk))
					if (!flag22)
						unk_0xDDE449983CE7572E(unk, 1, 0);
			
				if (!unk_0xDC116D955A63BDBE(unk))
				{
					if (!flag21)
						unk_0x2718E9CC165A99F6(unk, 0);
				
					unk_0xAD02BD8A749B79F9(unk, 1);
				}
				else if (!flag21)
				{
					unk_0x2718E9CC165A99F6(unk, 0);
				}
			
				unk_0xD14067404D35AAE7(unk, 1);
				unk_0xA7225B88CE344621(plParam0, 0);
				unk_0xD99DA01241D40C5D(plParam0, 0);
			
				if (unk_0x1951CE8AED052DA4(unk) && unk_0x655790C883F82CEB(unk))
					unk_0xC7A494C74ED33C50(unk);
			
				unk_0xAC2C285C82A9244C(unk, 1);
			
				if (unk_0x1B82EF141CC65934(unk_0x93E99A2DBCBA9CFA()) == 0)
				{
					func_94();
					func_93();
				}
			
				if (unk_0xCB964814D9915DE0())
					!flag23;
			
				unk_0x58A962BEF2DDE1DF();
				Global_2657589[plParam0 /*466*/].f_255 = 0;
			
				if (!flag24)
					flag3 = true;
			
				if (Global_2635559.f_2681)
					Global_2635559.f_2681 = 0;
			}
			else
			{
				if (!func_95(unk) && !unk_0x24405041A9F1A910(unk))
				{
					if (!flag22)
						unk_0xDDE449983CE7572E(unk, !flag15, 0);
				
					if (!unk_0xDC116D955A63BDBE(unk))
					{
						if (!flag21)
							unk_0x2718E9CC165A99F6(unk, flag16);
					
						if (!flag16)
							unk_0xAD02BD8A749B79F9(unk, 1);
					}
				
					if (func_92(*Global_4718592.f_166301))
						unk_0x2718E9CC165A99F6(unk, 1);
				}
			
				if (Global_1575035)
					flag10 = false;
			
				if (flag10)
					unk_0xA7225B88CE344621(plParam0, 0);
				else
					unk_0xA7225B88CE344621(plParam0, 1);
			
				unk_0xD14067404D35AAE7(unk, flag17);
			
				if (flag3)
					if (!unk_0x53E0F2012E168A73(unk) && !unk_0x3C3D6D026CF7F51B(unk, 0))
						unk_0x35DD50D05C962B6A(unk);
			}
		
			num = 0;
		
			if (flag2)
				num = num | 2;
		
			if (flag3)
				num = num | 4;
		
			if (flag4)
				num = num | 8;
		
			if (flag5)
				num = num | 16;
		
			if (flag6)
				num = num | 32;
		
			if (flag7)
				num = num | 64;
		
			if (flag8)
				num = num | 128;
		
			if (flag9)
				num = num | 256;
		
			if (flag10)
				num = num | 512;
		
			if (flag11)
				num = num | 1024;
		
			if (flag12)
				num = num | 2048;
		
			if (flag13)
				num = num | 4096;
		
			unk_0xE333240A90F2FF3C(plParam0, bParam1, num);
		}
	}

	return;
}

BOOL func_92(int iParam0) // Position - 0x32AF
{
	return iParam0 == 17;
}

void func_93() // Position - 0x32BC
{
	var unk;

	Global_2672505.f_1023 = 0;
	Global_2672505.f_1024 = 0;
	Global_2672505.f_1025 = { 9999.9f, 9999.9f, 9999.9f };
	Global_2672505.f_1030 = -1;
	Global_2672505.f_1031 = 0;
	Global_2635559.f_2692 = { unk };
	return;
}

void func_94() // Position - 0x3309
{
	Global_2635559.f_702 = 0;
	Global_2635559.f_2735 = 0;
	Global_2635559.f_515 = 0;
	Global_2635559.f_606 = 0;
	Global_2657589[unk_0x93E99A2DBCBA9CFA() /*466*/].f_217 = 0;
	Global_2635559.f_2690 = 0;
	return;
}

BOOL func_95(var uParam0) // Position - 0x3347
{
	int num;

	if (unk_0x3C3D6D026CF7F51B(uParam0, 1))
	{
		return true;
	}
	else
	{
		num = unk_0xF5F493B789EA063E(uParam0, joaat("SCRIPT_TASK_ENTER_VEHICLE"));
	
		if (num == 0)
			return true;
	}

	return false;
}

void func_96(int iParam0, int iParam1, int iParam2) // Position - 0x3378
{
	int num;
	int i;

	unk_0x055111B11E6624FD(iParam1, 0);

	if (iParam0 == 1)
		if (unk_0x7DE17ACDD8BA2642(iParam1))
			if (unk_0x60A06DE259634304(iParam1))
				if (!unk_0x44C1C56CBB49373F(unk_0x93E99A2DBCBA9CFA(), unk_0xB850F932D03EF34D(iParam1)))
					num = 1;

	if (num == 0)
	{
		if (iParam2 == 1)
		{
			if (iParam0 == 1)
			{
				func_98();
			}
			else if (!IS_BIT_SET(Global_2621446.f_67, 1))
			{
				if (IS_BIT_SET(Global_2621446.f_67, 2))
				{
					for (i = 0; i < 8; i = i + 1)
					{
						unk_0x84365510DF670D46(i, Global_2621446.f_58[i]);
					}
				}
			
				unk_0xECDAB41968FF21A8(&(Global_2621446.f_67), 1);
			}
		}
	
		if (_NETWORK_IS_PLAYER_IN_SCTV(unk_0x93E99A2DBCBA9CFA(), 0))
			unk_0xBD35A36DC2D7FB43(iParam0, iParam1, 1);
		else
			unk_0x7C5666BA9400B9BF(iParam0, iParam1);
	
		unk_0xC05C32F03C89FD59(iParam0, iParam1);
		func_97(joaat("MPPLY_IS_CHAR_SPECTATING"), iParam0);
	}

	return;
}

void func_97(int iParam0, int iParam1) // Position - 0x3448
{
	int num;

	num = iParam0;

	if (num != 0)
		unk_0xD19BD90E0B76FB05(num, iParam1, 1);

	return;
}

void func_98() // Position - 0x3464
{
	int i;

	if (!unk_0x8253CEEA17ED481B())
	{
		if (!IS_BIT_SET(Global_2621446.f_67, 2))
		{
			for (i = 0; i < 8; i = i + 1)
			{
				Global_2621446.f_58[i] = unk_0x80A3F4E694565F6A(i);
			}
		
			unk_0xECDAB41968FF21A8(&(Global_2621446.f_67), 2);
			unk_0xECDAB41968FF21A8(&(Global_2621446.f_67), 0);
		}
	}

	return;
}

BOOL func_99() // Position - 0x34BC
{
	return IS_BIT_SET(Global_2621446, 3);
}

BOOL _NETWORK_IS_PLAYER_IN_SCTV(int player, int bCheckTeam) // Position - 0x34CA
{
	BOOL flag;

	if (player == unk_0x93E99A2DBCBA9CFA())
		flag = func_101(-1, false) == 8;
	else
		flag = Global_1853910[player /*862*/].f_205 == 8;

	if (bCheckTeam == 1)
		if (unk_0xE6DEE82DB0922DF0(player))
			flag = unk_0x4292F1DE8BA2D22E(player) == 8;

	return flag;
}

int func_101(int iParam0, BOOL bParam1) // Position - 0x3515
{
	int num;
	int num2;

	num2 = iParam0;

	if (num2 == -1)
		num2 = func_79();

	if (Global_1575040[num2] == 1)
	{
		bParam1;
		num = 8;
	}
	else
	{
		num = Global_1574912[num2];
		bParam1;
	}

	return num;
}

BOOL func_102() // Position - 0x3556
{
	if (func_103() == 0)
		return true;

	return false;
}

int func_103() // Position - 0x356B
{
	return Global_1574632.f_18;
}

BOOL func_104() // Position - 0x3579
{
	if (IS_BIT_SET(Global_1853910[unk_0x93E99A2DBCBA9CFA() /*862*/].f_861, 2) && !Global_2684799.f_2846.f_216 == -1)
		return true;

	return false;
}

void _STOPWATCH_INITIALIZE(var pStopwatch, BOOL useLocalTimer, BOOL useAccurateTime) // Position - 0x35AA
{
	if (pStopwatch->f_1 == 0)
	{
		if (unk_0xA26A9A07F761D8F8() && !useLocalTimer)
			if (!useAccurateTime)
				*pStopwatch = unk_0x0DB7F8294D73598B();
			else
				*pStopwatch = unk_0xB78F034955403399();
		else
			*pStopwatch = unk_0xA5E11AF0A2B928C1();
	
		pStopwatch->f_1 = 1;
	}

	return;
}

void func_106() // Position - 0x35EF
{
	var unk;

	if (bLocal_50)
		return;

	uLocal_43.f_4 = 0;

	if (!func_107(Global_44232[iLocal_64 /*5*/].f_2))
		return;

	unk = unk_0x15A88CFAAFFC6C4B(500, 3000);
	iLocal_60 = 5;
	iLocal_55.f_2 = SYSTEM::TIMERA() + unk;
	return;
}

BOOL func_107(int iParam0) // Position - 0x3632
{
	int num;
	char* str;
	char* str2;
	char* str3;
	char* str4;

	num = func_118();

	if (num == -2)
		return false;

	if (unk_0x66599E73DBA5A850(uLocal_43.f_1))
	{
		if (unk_0x3C3D6D026CF7F51B(uLocal_43.f_1, 0) || unk_0x5CD470B5BDDAC029(uLocal_43.f_1))
			return false;
	
		if (unk_0xBB5584150EDF3AE1(uLocal_43.f_1))
			return false;
	
		if (func_114(uLocal_43.f_1))
			return false;
	}

	if (Global_44232[iLocal_64 /*5*/].f_3 < 3 && Global_44232[iLocal_64 /*5*/].f_3 != 0 && Global_44232[iLocal_64 /*5*/].f_3 > Global_44232[iLocal_64 /*5*/].f_4)
		return false;

	if (Global_44232[iLocal_64 /*5*/].f_4 < 9 && Global_44232[iLocal_64 /*5*/].f_4 != 0 && Global_44232[iLocal_64 /*5*/].f_4 > Global_44232[iLocal_64 /*5*/].f_3)
		return false;

	str = func_113(iParam0);

	if (unk_0x2AC37494BBF1DB16(str))
		return false;

	if (func_114(uLocal_43.f_1))
		return false;

	unk_0x14004648CB41E983(str);

	if (func_110(uLocal_43.f_1))
	{
		str2 = "MOVE_M@DRUNK@TRANSITIONS";
		str3 = "";
	
		switch (iParam0)
		{
			case 0:
				str3 = "";
				break;
		
			case 2:
				str3 = "VERY_TO_MODERATE";
				break;
		
			case 1:
				str3 = "MODERATE_TO_SLIGHTLY";
				break;
		
			default:
				break;
		}
	
		if (!unk_0x2AC37494BBF1DB16(str2) && !unk_0x2AC37494BBF1DB16(str3))
		{
			unk_0x28818732C8F0F80E(str2);
		
			while (!unk_0x2BBF749E555360DC(str2))
			{
				SYSTEM::WAIT(0);
			}
		
			if (!unk_0x66599E73DBA5A850(uLocal_43.f_1))
			{
				unk_0x3EE48ADC8C7F5CC4(uLocal_43.f_1, str2, str3, 1.5f, -1.5f, -1, 48, 0, 0, 0, 0);
				sLocal_54 = str3;
			}
		}
	}

	if (!unk_0xA6FA26A80B445074(str))
		return false;

	if (unk_0x66599E73DBA5A850(uLocal_43.f_1))
		return false;

	unk_0xFE06D34CC973CDD2(uLocal_43.f_1, str, 0.75f);

	if (unk_0x673F52632EDC33B7() == 4)
		unk_0xAC814BCCEC68B1CE(uLocal_43.f_1, "move_ped_strafing_firstperson@drunk");

	unk_0x8E7BD4C76DD02BEF(uLocal_43.f_1, 0, str, "idle", 2f, 1);
	iLocal_60.f_2 = str;
	bLocal_51 = true;
	str4 = 0;

	switch (_GET_PLAYER_CHARACTER_FROM_PED(uLocal_43.f_1))
	{
		case CHAR_MICHAEL:
			str4 = "FACIALS@P_M_ZERO@BASE";
			break;
	
		case CHAR_FRANKLIN:
			str4 = "FACIALS@P_M_ONE@BASE";
			break;
	
		case CHAR_TREVOR:
			str4 = "FACIALS@P_M_TWO@BASE";
			break;
	
		default:
			if (unk_0x60A06DE259634304(uLocal_43.f_1))
				if (!func_108())
					str4 = "FACIALS@GEN_MALE@BASE";
				else
					str4 = "FACIALS@GEN_FEMALE@BASE";
			else if (unk_0xE07B92C7EA4970AA(uLocal_43.f_1))
				str4 = "FACIALS@GEN_MALE@BASE";
			else
				str4 = "FACIALS@GEN_FEMALE@BASE";
			break;
	}

	unk_0x69B06069E38FB537(uLocal_43.f_1, "mood_drunk_1", str4);
	unk_0x992BB708B4B7A005(uLocal_43.f_1, 200, 1);
	unk_0x992BB708B4B7A005(uLocal_43.f_1, 46, 1);
	unk_0xAD4CEC14FE6404F6(uLocal_43.f_1, 0);
	unk_0x474AA9EF29305EA8(uLocal_43.f_1, 262144, 1);
	unk_0x1D429CF057E0E30E(uLocal_43.f_1, 1);
	return true;
}

BOOL func_108() // Position - 0x38F4
{
	return func_109(unk_0x93E99A2DBCBA9CFA());
}

BOOL func_109(var uParam0) // Position - 0x3904
{
	if (unk_0x504B9BB48D41C264(unk_0xF2CFBB1105511E1A(uParam0)) == joaat("MP_F_Freemode_01"))
		return 1;

	return 0;
}

BOOL func_110(var uParam0) // Position - 0x3923
{
	Vector3 vector;

	if (unk_0x3C3D6D026CF7F51B(uParam0, 1) || unk_0x5CD470B5BDDAC029(uParam0))
		return false;

	if (unk_0xF5F493B789EA063E(uParam0, joaat("SCRIPT_TASK_PLAY_ANIM")) != 7)
		return false;

	if (unk_0xF5F493B789EA063E(uParam0, joaat("SCRIPT_TASK_SYNCHRONIZED_SCENE")) != 7)
		return false;

	if (unk_0x110D030CCD4E83A6(uParam0))
		return false;

	if (unk_0xDA70CA6A0D1738D3(uParam0))
		return false;

	if (unk_0x48A4D45B3B4CEFFD(uParam0))
		return false;

	if (unk_0xFCDF03F2B12F4DDA(uParam0))
		return false;

	if (Global_75693)
		return false;

	if (func_112())
		return false;

	if (uParam0 == unk_0xC1A5EC5C986B98AD())
	{
		if (!unk_0x4654C2D37A6129D7(unk_0x93E99A2DBCBA9CFA()))
			return false;
	
		if (!unk_0x1B82EF141CC65934(unk_0x93E99A2DBCBA9CFA()))
			return false;
	
		if (unk_0x5C3926F501DBBD3A(unk_0x93E99A2DBCBA9CFA()) || unk_0xB5297226BE0AD444(unk_0x93E99A2DBCBA9CFA()))
			return false;
	
		if (func_111())
			return false;
	}

	vector = { unk_0x7A2C98D06C9C1956(uParam0) };

	if (SYSTEM::VMAG2(vector) >= 1f * 1f)
		return false;

	return true;
}

BOOL func_111() // Position - 0x3A24
{
	return Global_100733.f_388 > 0;
}

BOOL func_112() // Position - 0x3A35
{
	return unk_0xA5E11AF0A2B928C1() <= Global_23270.f_6321 + 100;
}

char* func_113(int iParam0) // Position - 0x3A4A
{
	switch (iParam0)
	{
		case 0:
			return "move_m@drunk@verydrunk";
	
		case 1:
			return "move_m@drunk@slightlydrunk";
	
		case 2:
			return "move_m@drunk@moderatedrunk";
	}

	return "";
}

BOOL func_114(int iParam0) // Position - 0x3A8B
{
	int num;
	char* str;

	num = func_115(iParam0);
	str = func_113(num);

	if (unk_0x2AC37494BBF1DB16(iLocal_60.f_2))
		if (unk_0x2AC37494BBF1DB16(str))
			return true;
		else
			return false;

	return unk_0x4310A0DB886F9FED(iLocal_60.f_2, str);
}

int func_115(int iParam0) // Position - 0x3ACC
{
	int num;
	int num2;

	if (iParam0 == 0)
		return -1;

	if (!unk_0x7DE17ACDD8BA2642(iParam0))
		return -1;

	num = func_117(iParam0);
	num2 = func_116(num);

	if (num2 == -1)
		return -1;

	return Global_44232[num2 /*5*/].f_2;
}

int func_116(int iParam0) // Position - 0x3B0F
{
	int i;

	i = 0;

	for (i = 0; i < 16; i = i + 1)
	{
		if (Global_44232[i /*5*/] == iParam0)
			return i;
	}

	return -1;
}

int func_117(int iParam0) // Position - 0x3B3F
{
	int i;

	if (iParam0 == 0)
		return -1;

	i = 0;

	for (i = 0; i < 16; i = i + 1)
	{
		if (iParam0 == Global_44232[i /*5*/].f_1)
			return Global_44232[i /*5*/];
	}

	return -1;
}

int func_118() // Position - 0x3B80
{
	int num;

	if (iLocal_55 == -2)
		return -2;

	if (iLocal_55 == -1)
		return -1;

	num = iLocal_55 - SYSTEM::TIMERA();

	if (num < 0)
		return -2;

	if (num > 65534)
		num = 65534;

	return num;
}

void func_119() // Position - 0x3BC6
{
	if (bLocal_50)
		return;

	if (!func_120())
	{
		iLocal_60 = 5;
		iLocal_55.f_2 = SYSTEM::TIMERA() + 5000;
		return;
	}

	iLocal_60 = 6;
	return;
}

BOOL func_120() // Position - 0x3BF2
{
	var unk;
	var unk4;
	float num;

	if (uLocal_43.f_4 == 0)
		return false;

	if (unk_0x055111B11E6624FD(uLocal_43.f_4, 0))
		return false;

	unk = { unk_0x30BE8A934C020461(uLocal_43.f_1, 1) };
	unk4 = { unk_0x30BE8A934C020461(uLocal_43.f_4, 1) };
	num = unk_0x2E496FE654DA4166(unk, unk4, 1);
	return num < 7f;
}

void func_121() // Position - 0x3C43
{
	int num;
	char* str;

	if (uLocal_43.f_1 == unk_0xC1A5EC5C986B98AD())
	{
		unk_0x8B438725D591ED78(0, 36, 1);
	
		if (unk_0xC29B1DE5CA9282CB(uLocal_43.f_1))
			if (Global_44232[iLocal_64 /*5*/].f_2 == 0 || Global_44232[iLocal_64 /*5*/].f_2 == 2)
				unk_0x0002182D625AEFEA(uLocal_43.f_1, 0, 0);
	
		if (unk_0xCC82082FAFB01DDF(uLocal_43.f_1))
			unk_0x5F2E69E984F09163(uLocal_43.f_1, 0);
	}

	if (iLocal_55 != -2)
	{
		if (iLocal_55 == -1)
		{
			if (Global_44232[iLocal_64 /*5*/].f_2 != 0)
				Global_44232[iLocal_64 /*5*/].f_2 = 0;
		}
		else
		{
			num = iLocal_55 - SYSTEM::TIMERA();
		
			if (num <= 0)
				num = 0;
		
			num = (num / 1000) + 1;
		
			if (Global_44232[iLocal_64 /*5*/].f_2 == 0)
			{
				if (num < 30)
				{
					Global_44232[iLocal_64 /*5*/].f_2 = 2;
				
					if (!func_107(2))
					{
						Global_44232[iLocal_64 /*5*/].f_2 = 0;
						return;
					}
				}
			}
		
			if (Global_44232[iLocal_64 /*5*/].f_2 == 2)
			{
				if (num < 10)
				{
					Global_44232[iLocal_64 /*5*/].f_2 = 1;
				
					if (!func_107(2))
					{
						Global_44232[iLocal_64 /*5*/].f_2 = 2;
						return;
					}
				}
			}
		
			Global_44232[iLocal_64 /*5*/].f_2 == 1;
		}
	}
	else
	{
		return;
	}

	if (!unk_0x2AC37494BBF1DB16(sLocal_54))
	{
		if (!func_110(uLocal_43.f_1))
		{
			str = "MOVE_M@DRUNK@TRANSITIONS";
		
			if (unk_0x7BB3D8F4F6310EB8(uLocal_43.f_1, str, sLocal_54, 3))
				unk_0x82F27DF65F4D68B5(uLocal_43.f_1, str, sLocal_54, -4f);
		
			sLocal_54 = "";
			return;
		}
	}

	if (Global_44232[iLocal_64 /*5*/].f_3 >= 10 || Global_44232[iLocal_64 /*5*/].f_4 >= 15 || IS_BIT_SET(Global_44449, 9))
	{
		if (unk_0xF5F493B789EA063E(uLocal_43.f_1, joaat("SCRIPT_TASK_SYNCHRONIZED_SCENE")) == 1 && !IS_BIT_SET(Global_1950108.f_3, 27))
			return;
	
		if (unk_0x70ACD9400516DB25(uLocal_43.f_1))
			return;
	
		if (unk_0x3C3D6D026CF7F51B(uLocal_43.f_1, 1))
		{
			if (Global_44232[iLocal_64 /*5*/].f_3 >= 10)
				Global_44232[iLocal_64 /*5*/].f_3 = 9;
		
			if (Global_44232[iLocal_64 /*5*/].f_4 >= 15)
				Global_44232[iLocal_64 /*5*/].f_4 = 14;
		
			return;
		}
	
		if (unk_0xA26A9A07F761D8F8() && uLocal_43.f_1 == unk_0xC1A5EC5C986B98AD() && func_136(unk_0x93E99A2DBCBA9CFA()) && Global_262145.f_24351)
		{
			if (Global_44232[iLocal_64 /*5*/].f_3 >= 10)
				Global_44232[iLocal_64 /*5*/].f_3 = 9;
		
			if (Global_44232[iLocal_64 /*5*/].f_4 >= 15)
				Global_44232[iLocal_64 /*5*/].f_4 = 14;
		
			return;
		}
	
		if (unk_0xA26A9A07F761D8F8() && uLocal_43.f_1 == unk_0xC1A5EC5C986B98AD() && func_135())
		{
			if (Global_44232[iLocal_64 /*5*/].f_3 >= 10)
				Global_44232[iLocal_64 /*5*/].f_3 = 9;
		
			if (Global_44232[iLocal_64 /*5*/].f_4 >= 15)
				Global_44232[iLocal_64 /*5*/].f_4 = 14;
		
			return;
		}
	
		if (unk_0xA26A9A07F761D8F8() && unk_0x1758F8A8511510AB() && func_134())
		{
			if (Global_44232[iLocal_64 /*5*/].f_3 >= 10)
				Global_44232[iLocal_64 /*5*/].f_3 = 9;
		
			if (Global_44232[iLocal_64 /*5*/].f_4 >= 15)
				Global_44232[iLocal_64 /*5*/].f_4 = 14;
		
			return;
		}
	
		if (unk_0xA26A9A07F761D8F8() && unk_0x1758F8A8511510AB() && func_133())
		{
			if (Global_44232[iLocal_64 /*5*/].f_3 >= 10)
				Global_44232[iLocal_64 /*5*/].f_3 = 9;
		
			if (Global_44232[iLocal_64 /*5*/].f_4 >= 15)
				Global_44232[iLocal_64 /*5*/].f_4 = 14;
		
			return;
		}
	
		if (func_130(unk_0x93E99A2DBCBA9CFA()))
		{
			if (Global_44232[iLocal_64 /*5*/].f_3 >= 10)
				Global_44232[iLocal_64 /*5*/].f_3 = 9;
		
			if (Global_44232[iLocal_64 /*5*/].f_4 >= 15)
				Global_44232[iLocal_64 /*5*/].f_4 = 14;
		
			return;
		}
	
		if (unk_0xA26A9A07F761D8F8() && uLocal_43.f_1 == unk_0xC1A5EC5C986B98AD() && func_129(unk_0x93E99A2DBCBA9CFA()) && Global_262145.f_27034)
		{
			if (Global_44232[iLocal_64 /*5*/].f_3 >= 10)
				Global_44232[iLocal_64 /*5*/].f_3 = 9;
		
			if (Global_44232[iLocal_64 /*5*/].f_4 >= 15)
				Global_44232[iLocal_64 /*5*/].f_4 = 14;
		
			return;
		}
	
		if (unk_0xA26A9A07F761D8F8() && uLocal_43.f_1 == unk_0xC1A5EC5C986B98AD() && func_126(unk_0x93E99A2DBCBA9CFA()) && Global_262145.f_27067)
		{
			if (Global_44232[iLocal_64 /*5*/].f_3 >= 10)
				Global_44232[iLocal_64 /*5*/].f_3 = 9;
		
			if (Global_44232[iLocal_64 /*5*/].f_4 >= 15)
				Global_44232[iLocal_64 /*5*/].f_4 = 14;
		
			return;
		}
	
		if (unk_0xA26A9A07F761D8F8() && uLocal_43.f_1 == unk_0xC1A5EC5C986B98AD() && func_122(unk_0x93E99A2DBCBA9CFA()) == 15)
		{
			if (Global_44232[iLocal_64 /*5*/].f_3 >= 10)
				Global_44232[iLocal_64 /*5*/].f_3 = 9;
		
			if (Global_44232[iLocal_64 /*5*/].f_4 >= 15)
				Global_44232[iLocal_64 /*5*/].f_4 = 14;
		
			return;
		}
	
		if (unk_0xA26A9A07F761D8F8() && uLocal_43.f_1 == unk_0xC1A5EC5C986B98AD() && Global_75693 && !Global_44205)
		{
			if (Global_44232[iLocal_64 /*5*/].f_3 >= 10)
				Global_44232[iLocal_64 /*5*/].f_3 = 9;
		
			if (Global_44232[iLocal_64 /*5*/].f_4 >= 15)
				Global_44232[iLocal_64 /*5*/].f_4 = 14;
		
			return;
		}
	
		iLocal_60.f_1 = 3;
		return;
	}

	if (!bLocal_51)
		return;

	if (!func_114(uLocal_43.f_1))
		return;

	return;
}

int func_122(int iParam0) // Position - 0x417C
{
	if (func_125(iParam0) == 243)
		return func_123(iParam0);

	return -1;
}

int func_123(int iParam0) // Position - 0x4199
{
	if (func_124(iParam0, false))
		return Global_1894573[iParam0 /*608*/].f_10.f_182;

	return -1;
}

BOOL func_124(int iParam0, BOOL bParam1) // Position - 0x41BC
{
	if (Global_1894573[iParam0 /*608*/].f_10.f_33 != -1 || bParam1 && Global_1894573[iParam0 /*608*/].f_10.f_32 != -1)
		return true;

	return false;
}

int func_125(int iParam0) // Position - 0x41F7
{
	if (func_124(iParam0, false))
		return Global_1894573[iParam0 /*608*/].f_10.f_33;

	return -1;
}

BOOL func_126(Player plParam0) // Position - 0x421A
{
	if (plParam0 != _INVALID_PLAYER_INDEX())
		if (_NETWORK_IS_PLAYER_VALID(plParam0, true, true))
			if (Global_2657589[plParam0 /*466*/].f_321.f_7 != -1)
				return func_127(Global_2657589[plParam0 /*466*/].f_321.f_7) == 15;

	return false;
}

int func_127(int iParam0) // Position - 0x4261
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
			return 0;
	
		case 60:
		case 61:
		case 62:
		case 63:
		case 64:
		case 65:
		case 66:
		case 67:
		case 68:
		case 69:
			return 1;
	
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
			return 2;
	
		case 43:
		case 42:
		case 44:
		case 45:
		case 46:
		case 47:
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
		case 59:
		case 98:
		case 99:
		case 100:
		case 112:
		case 113:
		case 114:
		case 115:
		case 119:
		case 116:
		case 118:
		case 120:
		case 121:
		case 126:
		case 127:
		case 134:
		case 135:
		case 136:
		case 137:
		case 138:
		case 139:
		case 140:
		case 141:
		case 142:
		case 143:
		case 144:
			return 3;
	
		case 70:
		case 71:
		case 72:
		case 73:
		case 74:
		case 75:
		case 76:
		case 77:
		case 78:
		case 79:
		case 80:
			return 4;
	
		case 81:
			return 5;
	
		case 82:
			return 6;
	
		case 83:
		case 84:
		case 85:
		case 86:
		case 87:
			return 7;
	
		case 88:
			return 8;
	
		case 89:
		case 90:
		case 91:
		case 92:
		case 93:
		case 94:
		case 95:
		case 96:
		case 97:
			return 9;
	
		case 101:
			return 10;
	
		case 102:
		case 103:
		case 104:
		case 105:
		case 106:
		case 107:
		case 108:
		case 109:
		case 110:
		case 111:
			return 11;
	
		case 117:
			return 12;
	
		case 122:
			return 13;
	
		case 123:
			return 14;
	
		case 124:
			return 15;
	
		case 125:
			return 16;
	
		case 128:
		case 129:
		case 130:
		case 131:
		case 132:
		case 133:
			return 17;
	
		case 145:
			return 18;
	
		case 146:
			return 19;
	
		case 147:
			return 20;
	
		case 148:
			return 21;
	
		case 149:
		case 151:
		case 153:
		case 152:
		case 150:
			return 22;
	
		case 154:
			return 23;
	
		case 155:
		case 156:
		case 157:
		case 158:
			return 24;
	
		case 159:
			return 25;
	
		case 160:
			return 26;
	
		case 161:
			return 27;
	}

	return -1;
}

BOOL _NETWORK_IS_PLAYER_VALID(Player player, BOOL bIsPlaying, BOOL bUnk) // Position - 0x4715
{
	Player player;

	player = player;

	if (player != -1)
	{
		if (unk_0xE6DEE82DB0922DF0(player))
		{
			if (bIsPlaying)
				if (!unk_0x48DC6A21D1CAD89C(player))
					return false;
		
			if (bUnk)
				if (player == Global_2672505.f_3)
					return Global_2672505.f_2;
				else if (Global_2657589[player /*466*/] != 4)
					return false;
		
			return true;
		}
	}

	return false;
}

BOOL func_129(Player plParam0) // Position - 0x4775
{
	if (plParam0 != _INVALID_PLAYER_INDEX())
		if (_NETWORK_IS_PLAYER_VALID(plParam0, true, true))
			if (Global_2657589[plParam0 /*466*/].f_321.f_7 != -1)
				return func_127(Global_2657589[plParam0 /*466*/].f_321.f_7) == 14;

	return false;
}

BOOL func_130(int iParam0) // Position - 0x47BC
{
	return func_131(func_132(iParam0));
}

BOOL func_131(int iParam0) // Position - 0x47CE
{
	switch (iParam0)
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
			return 1;
	
		default:
		
	}

	return 0;
}

int func_132(int iParam0) // Position - 0x4800
{
	if (func_125(iParam0) == 256)
		return func_123(iParam0);

	return -1;
}

BOOL func_133() // Position - 0x481E
{
	return Global_2683862.f_24;
}

BOOL func_134() // Position - 0x482C
{
	return Global_2683862.f_21;
}

BOOL func_135() // Position - 0x483A
{
	return Global_2764615;
}

BOOL func_136(Player plParam0) // Position - 0x4846
{
	if (plParam0 != _INVALID_PLAYER_INDEX())
		if (_NETWORK_IS_PLAYER_VALID(plParam0, true, true))
			if (Global_2657589[plParam0 /*466*/].f_321.f_7 != -1)
				return func_127(Global_2657589[plParam0 /*466*/].f_321.f_7) == 11;

	return false;
}

BOOL func_137() // Position - 0x488D
{
	int num;

	if (!unk_0xACD39355028D39EF(uLocal_43.f_1))
		return false;

	num = 0;
	num = unk_0x95DC39736F6748E3(uLocal_43.f_1, 0);

	if (!unk_0xFBD273FDBCF0C5BD(num, 0))
		return false;

	if (!unk_0xA66E176E5772E965(num, -1, 0) == uLocal_43.f_1)
		return false;

	uLocal_43.f_4 = num;
	iLocal_60 = 7;
	return true;
}

void func_138() // Position - 0x48E1
{
	if (!unk_0x3C3D6D026CF7F51B(uLocal_43.f_1, 0))
	{
		iLocal_60 = 4;
		return;
	}

	return;
}

void func_139() // Position - 0x48FC
{
	var unk;
	float num;
	var unk2;
	var unk5;
	var unk8;

	if (!bLocal_50)
		return;

	if (!unk_0x48DC6A21D1CAD89C(unk_0x93E99A2DBCBA9CFA()))
		return;

	if (!unk_0xACD39355028D39EF(unk_0xC1A5EC5C986B98AD()))
		return;

	if (unk_0xF356C80F3E8D2812(unk_0x93E99A2DBCBA9CFA(), 0))
		return;

	unk = unk_0x95DC39736F6748E3(unk_0xC1A5EC5C986B98AD(), 0);
	num = unk_0xDC58AE028CB223BA(unk);

	if (num < 5f)
		return;

	unk2 = { unk_0x30BE8A934C020461(unk_0xC1A5EC5C986B98AD(), 1) };
	unk5 = { unk2 - { 3f, 30f, 30f } };
	unk8 = { unk2 + { 3f, 30f, 30f } };

	if (!unk_0x7419F07EFCC23990(unk5, unk8) && !unk_0x06EADAF3FF0C6092(unk5, unk8))
		return;

	unk_0xE2C528FAB670225B(unk_0x93E99A2DBCBA9CFA(), 1, 0);
	unk_0x6CDFCA6843DA90FF(unk_0x93E99A2DBCBA9CFA(), 0);
	func_11(73, 1);
	return;
}

void func_140() // Position - 0x49CB
{
	var unk;
	var unk2;
	var unk3;
	float num;
	int num2;

	unk = uLocal_43.f_1;

	if (unk_0x3C3D6D026CF7F51B(uLocal_43.f_1, 0))
	{
		unk2 = unk_0x95DC39736F6748E3(uLocal_43.f_1, 0);
		unk3 = unk_0xA66E176E5772E965(unk2, -1, 0);
	
		if (!unk3 == uLocal_43.f_1)
			return;
	
		if (unk_0xA26A9A07F761D8F8() && !unk_0xB6B927AA8C3DAD36(unk2))
			return;
	
		unk = unk2;
	}
	else if (!unk_0xC1A5EC5C986B98AD() == uLocal_43.f_1)
	{
		return;
	}
	else if (!unk_0x673F52632EDC33B7() == 4)
	{
		fLocal_53 = 0f;
		func_142(unk, 0f);
		return;
	}

	if (SYSTEM::TIMERA() < iLocal_55.f_4)
	{
		func_142(unk, fLocal_53);
		return;
	}

	if (unk_0x71904BD37B848CAF(unk))
		iLocal_55.f_4 = SYSTEM::TIMERA() + 2000;
	else
		iLocal_55.f_4 = SYSTEM::TIMERA() + 1000;

	num = unk_0xDC58AE028CB223BA(unk);

	if (num < 0.04f)
	{
		fLocal_53 = 0f;
		func_142(unk, 0f);
		return;
	}

	if (iLocal_55.f_1 == -1)
	{
		fLocal_53 = func_141(unk, 0.13f, 0.06f);
	}
	else
	{
		num2 = iLocal_55.f_1 - SYSTEM::TIMERA();
	
		if (num2 < 5000)
			fLocal_53 = 0f;
		else if (num2 < 15000)
			fLocal_53 = func_141(unk, 0.05f, 0.02f);
		else if (num2 < 30000)
			fLocal_53 = func_141(unk, 0.07f, 0.03f);
		else if (num2 < 45000)
			fLocal_53 = func_141(unk, 0.09f, 0.04f);
		else if (num2 < 600000)
			fLocal_53 = func_141(unk, 0.1f, 0.05f);
		else
			fLocal_53 = func_141(unk, 0.13f, 0.06f);
	}

	func_142(unk, fLocal_53);
	return;
}

float func_141(var uParam0, float fParam1, float fParam2) // Position - 0x4B6D
{
	float num;
	var unk;
	var unk2;

	num = unk_0xD88C7A93096DA0F7(-fParam1, fParam1);
	unk = unk_0xD88C7A93096DA0F7(0f, fParam2);

	if (num < 0f)
		num = num - unk;
	else
		num = num + unk;

	if (unk_0x71904BD37B848CAF(uParam0))
	{
		if (unk_0xFC42DF91E1950588(unk_0x9C8D7679C15E75FF(uParam0)))
			num = num * 4.5f;
		else
			num = num * 3f;
	}
	else
	{
		unk2 = unk_0x504B9BB48D41C264(uParam0);
	
		if (unk_0x6CEF99E452573979(unk2))
			num = num * 1.5f;
		else
			num = num * 0.5f;
	}

	num = func_21(num, -1f, 1f);
	return num;
}

void func_142(var uParam0, float fParam1) // Position - 0x4C01
{
	if (unk_0xA26A9A07F761D8F8() && !unk_0xB6B927AA8C3DAD36(uParam0))
		return;

	if (unk_0x71904BD37B848CAF(uParam0))
		unk_0x3C564B00E806A230(unk_0x9C8D7679C15E75FF(uParam0), fParam1);
	else if (unk_0xA6B591D40DE982B5(uParam0))
		unk_0x372FFB8B2ADD7C61(unk_0x4DFB7A1A6909D574(uParam0), fParam1);

	return;
}

void func_143() // Position - 0x4C4C
{
	var unk;

	if (!unk_0x3C3D6D026CF7F51B(uLocal_43.f_1, 0))
	{
		iLocal_60 = 4;
		return;
	}

	if (unk_0xA26A9A07F761D8F8())
	{
		if (Global_44232[iLocal_64 /*5*/].f_3 >= 10 || Global_44232[iLocal_64 /*5*/].f_4 >= 15)
		{
			if (Global_44232[iLocal_64 /*5*/].f_3 >= 10)
				Global_44232[iLocal_64 /*5*/].f_3 = 9;
		
			if (Global_44232[iLocal_64 /*5*/].f_4 >= 15)
				Global_44232[iLocal_64 /*5*/].f_4 = 14;
		}
	}

	if (bLocal_50)
		return;

	unk = unk_0x95DC39736F6748E3(uLocal_43.f_1, 0);

	if (!unk_0xFBD273FDBCF0C5BD(unk, 0))
	{
		unk_0x6FE9A0C01D25F413(uLocal_43.f_1, 0, 0);
		iLocal_60 = 11;
		return;
	}

	return;
}

void func_144() // Position - 0x4CF0
{
	int num;
	var unk;
	var unk2;

	if (SYSTEM::TIMERA() <= iLocal_55.f_3)
		return;

	num = unk_0xF5F493B789EA063E(unk_0xC1A5EC5C986B98AD(), joaat("SCRIPT_TASK_SHUFFLE_TO_NEXT_VEHICLE_SEAT"));

	if (!num == 7)
	{
		iLocal_55.f_3 = SYSTEM::TIMERA() + 1000;
		return;
	}

	if (!unk_0x3C3D6D026CF7F51B(uLocal_43.f_1, 0))
	{
		iLocal_60 = 4;
		iLocal_55.f_3 = -2;
		return;
	}

	unk = unk_0x95DC39736F6748E3(uLocal_43.f_1, 0);
	unk2 = unk_0xA66E176E5772E965(unk, -1, 0);

	if (unk2 == uLocal_43.f_1)
	{
		func_145();
		iLocal_55.f_3 = -2;
		return;
	}

	unk_0xC6E2FE1DC7DDC0AD(uLocal_43.f_1, unk, 0);
	iLocal_60 = 9;
	iLocal_55.f_3 = SYSTEM::TIMERA() + 1000;
	return;
}

void func_145() // Position - 0x4D8B
{
	if (iLocal_60 == 10)
		return;

	iLocal_60 = 10;

	if (iLocal_48 == -1)
		return;

	func_171(iLocal_48, 2, 5);
	iLocal_55.f_4 = SYSTEM::TIMERA();
	fLocal_53 = 0f;
	return;
}

void func_146() // Position - 0x4DBD
{
	if (unk_0xACD39355028D39EF(uLocal_43.f_1))
	{
		iLocal_60 = 10;
		return;
	}

	if (SYSTEM::TIMERA() < iLocal_55.f_3)
		return;

	iLocal_60 = 4;
	iLocal_55.f_3 = -2;
	return;
}

void func_147() // Position - 0x4DEF
{
	int num;
	BOOL flag;
	var unk;
	int num2;

	!bLocal_50;
	num = 0;
	flag = false;

	if (flag || unk_0xACD39355028D39EF(uLocal_43.f_1))
	{
		!bLocal_50;
		num = unk_0x95DC39736F6748E3(uLocal_43.f_1, 0);
	
		if (!num == uLocal_43.f_4)
		{
			!bLocal_50;
		
			if (!bLocal_50)
			{
				!bLocal_50;
				unk_0x6FE9A0C01D25F413(uLocal_43.f_1, 0, 0);
				iLocal_60 = 11;
				return;
			}
		
			uLocal_43.f_4 = num;
		}
	
		if (flag)
		{
			!bLocal_50;
			func_145();
			return;
		}
	
		if (!bLocal_50)
		{
			!bLocal_50;
			func_145();
			return;
		}
	
		!bLocal_50;
		unk = unk_0xA66E176E5772E965(uLocal_43.f_4, -1, 0);
	
		if (unk == uLocal_43.f_1)
		{
			func_145();
			return;
		}
	
		unk_0xC6E2FE1DC7DDC0AD(uLocal_43.f_1, num, 0);
		iLocal_60 = 9;
		iLocal_55.f_3 = SYSTEM::TIMERA() + 1000;
		return;
	}

	if (!func_120())
	{
		unk_0x909F139DC199D8E0(uLocal_43.f_1);
		iLocal_60 = 4;
		return;
	}

	if (!bLocal_50)
	{
		num2 = unk_0xF5F493B789EA063E(uLocal_43.f_1, joaat("SCRIPT_TASK_ENTER_VEHICLE"));
	
		if (num2 == 7)
		{
			if (!unk_0x3C3D6D026CF7F51B(uLocal_43.f_1, 0))
			{
				unk_0x909F139DC199D8E0(uLocal_43.f_1);
				iLocal_60 = 4;
				return;
			}
		}
	}

	return;
}

void func_148() // Position - 0x4F0B
{
	var unk;
	var unk4;
	float num;
	int num2;
	int num3;
	BOOL flag;

	if (bLocal_50)
		return;

	if (uLocal_43.f_4 == 0)
	{
		iLocal_60 = 4;
		return;
	}

	if (!unk_0xFBD273FDBCF0C5BD(uLocal_43.f_4, 0))
	{
		uLocal_43.f_4 = 0;
		iLocal_60 = 4;
		return;
	}

	unk = { unk_0x30BE8A934C020461(uLocal_43.f_1, 1) };
	unk4 = { unk_0x30BE8A934C020461(uLocal_43.f_4, 1) };
	num = unk_0x2E496FE654DA4166(unk, unk4, 1);

	if (num > 3f)
	{
		if (!func_107(Global_44232[iLocal_64 /*5*/].f_2))
		{
			iLocal_60 = 12;
			return;
		}
	
		iLocal_60 = 5;
		iLocal_55.f_2 = SYSTEM::TIMERA() + 2000;
		return;
	}

	num2 = unk_0x2E240694D642679A(uLocal_43.f_4);
	num3 = 0;
	flag = true;
	num3 = 1;

	while (flag)
	{
		if (num3 < num2)
		{
			if (unk_0x9CFCDD9C62B56708(uLocal_43.f_4, num3, 0))
				flag = false;
			else
				num3 = num3 + 1;
		}
		else
		{
			flag = false;
			num3 = -1;
		}
	}

	if (num3 == -1)
	{
		if (num3 == -1)
		{
			iLocal_60 = 4;
			return;
		}
	}

	func_149();
	unk_0xD30E9CAE1FEA1C7E(uLocal_43.f_1, uLocal_43.f_4, -1, num3, 1073741824, 1, 0);
	iLocal_60 = 7;
	return;
}

void func_149() // Position - 0x500E
{
	if (!unk_0x7DE17ACDD8BA2642(uLocal_43.f_1))
		return;

	if (!unk_0x66599E73DBA5A850(uLocal_43.f_1))
	{
		unk_0xEF514FB2706C4C1B(uLocal_43.f_1, 1048576000);
		unk_0x99E9766D143206BD(uLocal_43.f_1);
		unk_0x18E7B69412356E49(uLocal_43.f_1, 0, -1056964608);
		iLocal_60.f_2 = "";
		unk_0x0F2FEB47E011668F(uLocal_43.f_1);
		unk_0x992BB708B4B7A005(uLocal_43.f_1, 200, 0);
		unk_0x992BB708B4B7A005(uLocal_43.f_1, 46, 0);
		unk_0xAD4CEC14FE6404F6(uLocal_43.f_1, 1);
		unk_0x474AA9EF29305EA8(uLocal_43.f_1, 262144, 0);
		unk_0x1D429CF057E0E30E(uLocal_43.f_1, 0);
	}

	if (!bLocal_51)
		return;

	bLocal_51 = false;
	return;
}

void func_150() // Position - 0x50A3
{
	if (SYSTEM::TIMERA() < iLocal_55.f_2)
	{
		func_121();
		return;
	}

	func_151();
	iLocal_55.f_2 = -2;
	iLocal_60 = 12;
	return;
}

int func_151() // Position - 0x50CD
{
	if (!func_114(uLocal_43.f_1))
		return 0;

	if (!bLocal_51)
		return 0;

	func_152(uLocal_43.f_1);
	iLocal_60.f_2 = "";
	Global_2793044.f_4637 = 1;
	return 1;
}

void func_152(var uParam0) // Position - 0x5106
{
	unk_0xEF514FB2706C4C1B(uParam0, 1048576000);
	unk_0x18E7B69412356E49(uParam0, 0, -1056964608);
	unk_0x992BB708B4B7A005(uParam0, 200, 0);
	unk_0xAD4CEC14FE6404F6(uParam0, 1);
	unk_0x474AA9EF29305EA8(uParam0, 262144, 0);
	unk_0x1D429CF057E0E30E(uParam0, 0);
	return;
}

void func_153() // Position - 0x5147
{
	int num;

	if (iLocal_55 == -1)
	{
		Global_44232[iLocal_64 /*5*/].f_2 = 0;
	}
	else if (Global_44232[iLocal_64 /*5*/].f_3 < 3 && Global_44232[iLocal_64 /*5*/].f_3 != 0)
	{
		Global_44232[iLocal_64 /*5*/].f_2 = -1;
	}
	else
	{
		num = iLocal_55 - SYSTEM::TIMERA();
	
		if (num <= 0)
			num = 0;
	
		num = (num / 1000) + 1;
		Global_44232[iLocal_64 /*5*/].f_2 = 0;
	
		if (num < 30)
			Global_44232[iLocal_64 /*5*/].f_2 = 2;
	
		if (num < 10)
			Global_44232[iLocal_64 /*5*/].f_2 = 1;
	}

	if (unk_0x3C3D6D026CF7F51B(uLocal_43.f_1, 0))
	{
		iLocal_60 = 10;
		return;
	}

	if (func_114(uLocal_43.f_1))
	{
		iLocal_60 = 12;
		return;
	}

	if (iLocal_55 == -2)
		return;

	if (!func_107(Global_44232[iLocal_64 /*5*/].f_2))
		return;

	iLocal_60 = 12;
	return;
}

void func_154() // Position - 0x521D
{
	return;
}

void func_155() // Position - 0x5225
{
	int num;
	int i;

	num = 6;
	i = 0;

	for (i = 0; i < 16; i = i + 1)
	{
		num = Global_44313[i /*6*/].f_2;
	
		if (!num == 6)
		{
			if (Global_44313[i /*6*/].f_1 == iLocal_48)
			{
				func_157(i);
				func_156(i);
			}
			else if (Global_44313[i /*6*/].f_1 == 2)
			{
				if (!iLocal_49 == -1)
					if (iLocal_49 == Global_44313[i /*6*/])
						func_157(i);
			}
		}
	}

	return;
}

void func_156(int iParam0) // Position - 0x529D
{
	if (iParam0 < 0 || iParam0 >= 16)
		return;

	Global_44313[iParam0 /*6*/] = -1;
	Global_44313[iParam0 /*6*/].f_1 = -1;
	Global_44313[iParam0 /*6*/].f_2 = 6;
	Global_44313[iParam0 /*6*/].f_3 = 0;
	Global_44313[iParam0 /*6*/].f_4 = 0;
	return;
}

void func_157(int iParam0) // Position - 0x52EA
{
	int num;

	num = Global_44313[iParam0 /*6*/].f_2;

	switch (num)
	{
		case 1:
			func_178();
			break;
	
		case 2:
			func_161(Global_44313[iParam0 /*6*/].f_4);
			break;
	
		case 3:
			func_160(Global_44313[iParam0 /*6*/].f_5);
			break;
	
		case 4:
			func_159();
			break;
	
		case 5:
			func_158();
			break;
	
		case 0:
			break;
	
		case 6:
			break;
	
		default:
			break;
	}

	return;
}

void func_158() // Position - 0x536C
{
	iLocal_60.f_1 = 2;
	return;
}

void func_159() // Position - 0x5379
{
	int num;

	Global_44232[iLocal_64 /*5*/].f_4 = Global_44232[iLocal_64 /*5*/].f_4 + 1;

	if (iLocal_55 == -1)
	{
		Global_44232[iLocal_64 /*5*/].f_2 = 0;
	}
	else if (Global_44232[iLocal_64 /*5*/].f_4 < 9 && Global_44232[iLocal_64 /*5*/].f_4 != 0)
	{
		Global_44232[iLocal_64 /*5*/].f_2 = -1;
	}
	else
	{
		num = iLocal_55 - SYSTEM::TIMERA();
	
		if (num <= 0)
			num = 0;
	
		num = (num / 1000) + 1;
		Global_44232[iLocal_64 /*5*/].f_2 = 0;
	
		if (num < 30)
			Global_44232[iLocal_64 /*5*/].f_2 = 2;
	
		if (num < 10)
			Global_44232[iLocal_64 /*5*/].f_2 = 1;
	
		if (!func_114(uLocal_43.f_1))
			func_107(Global_44232[iLocal_64 /*5*/].f_2);
	}

	return;
}

void func_160(var uParam0) // Position - 0x5439
{
	int num;

	Global_44232[iLocal_64 /*5*/].f_3 = Global_44232[iLocal_64 /*5*/].f_3 + uParam0;

	if (iLocal_55 == -1)
	{
		Global_44232[iLocal_64 /*5*/].f_2 = 0;
	}
	else if (Global_44232[iLocal_64 /*5*/].f_3 < 3 && Global_44232[iLocal_64 /*5*/].f_3 != 0)
	{
		Global_44232[iLocal_64 /*5*/].f_2 = -1;
	}
	else
	{
		num = iLocal_55 - SYSTEM::TIMERA();
	
		if (num <= 0)
			num = 0;
	
		num = (num / 1000) + 1;
		Global_44232[iLocal_64 /*5*/].f_2 = 0;
	
		if (num < 30)
			Global_44232[iLocal_64 /*5*/].f_2 = 2;
	
		if (num < 10)
			Global_44232[iLocal_64 /*5*/].f_2 = 1;
	
		if (!func_114(uLocal_43.f_1))
			func_107(Global_44232[iLocal_64 /*5*/].f_2);
	}

	return;
}

void func_161(var uParam0) // Position - 0x54F9
{
	uLocal_43.f_3 = uLocal_43.f_3 + uParam0;
	uLocal_43.f_2 = uLocal_43.f_2 + uParam0;
	iLocal_55.f_1 = iLocal_55.f_1 + uParam0;
	iLocal_55 = iLocal_55 + uParam0;
	return;
}

void func_162() // Position - 0x5529
{
	int num;

	if (!bLocal_50)
	{
		iLocal_63 = -1;
		return;
	}

	if (iLocal_63 < 0)
	{
		iLocal_63 = unk_0x83C5A442AAD15BAF(unk_0x93E99A2DBCBA9CFA());
		return;
	}

	num = unk_0x83C5A442AAD15BAF(unk_0x93E99A2DBCBA9CFA());

	if (num != iLocal_63)
	{
		if (num > iLocal_63)
			func_163();
	
		iLocal_63 = num;
		return;
	}

	return;
}

void func_163() // Position - 0x5573
{
	return;
}

void func_164() // Position - 0x557B
{
	if (!iLocal_55 == -1)
	{
		if (!iLocal_55 == -2)
		{
			if (SYSTEM::TIMERA() >= iLocal_55)
			{
				func_149();
				iLocal_55 = -2;
				iLocal_60 = 12;
			}
		}
	
		if (SYSTEM::TIMERA() > iLocal_55.f_1)
			func_178();
	}

	return;
}

void func_165(int iParam0) // Position - 0x55BA
{
	int i;

	i = 0;

	for (i = 0; i < 16; i = i + 1)
	{
		if (iParam0 == Global_44313[i /*6*/])
			func_156(i);
	}

	return;
}

void func_166() // Position - 0x55EA
{
	int num;
	int num2;
	int num3;
	int num4;
	int num5;
	int num6;
	int num7;
	int num8;

	iLocal_60 = 4;

	if (!unk_0x055111B11E6624FD(uLocal_43.f_1, 0))
		if (unk_0xACD39355028D39EF(uLocal_43.f_1))
			iLocal_60 = 10;

	if (bLocal_50)
	{
		func_169();
		func_11(71, 1);
	
		if (unk_0xA26A9A07F761D8F8())
		{
			num = _MPCHAR_STAT_GET_INT(MP_STAT_NUM_TIMES_DRUNK, -1, 0);
			num2 = ((num / 10) + 1) * 10;
		
			if (num + 1 >= num2)
				func_167(num2);
		
			_MPCHAR_STAT_SET_INT(MP_STAT_NUM_TIMES_DRUNK, num + 1, -1, 1, false);
			bLocal_65 = true;
		}
		else
		{
			num3 = 0;
			num4 = 0;
			num5 = 0;
			unk_0xDD7756E2742E0F6D(joaat("SP0_SP_NUM_TIMES_DRUNK"), &num3, -1);
			unk_0xDD7756E2742E0F6D(joaat("SP1_SP_NUM_TIMES_DRUNK"), &num4, -1);
			unk_0xDD7756E2742E0F6D(joaat("SP2_SP_NUM_TIMES_DRUNK"), &num5, -1);
			num6 = num3 + num4 + num5;
			num7 = ((num6 / 10) + 1) * 10;
		
			if (num6 + 1 >= num7)
				func_167(num7);
		
			switch (_GET_CURRENT_PLAYER_CHARACTER())
			{
				case CHAR_MICHAEL:
					unk_0x3CC35ACFFC9C730E(joaat("SP0_SP_NUM_TIMES_DRUNK"), num3 + 1, 1);
					break;
			
				case CHAR_FRANKLIN:
					unk_0x3CC35ACFFC9C730E(joaat("SP1_SP_NUM_TIMES_DRUNK"), num4 + 1, 1);
					break;
			
				case CHAR_TREVOR:
					unk_0x3CC35ACFFC9C730E(joaat("SP2_SP_NUM_TIMES_DRUNK"), num5 + 1, 1);
					break;
			}
		}
	
		iLocal_60.f_1 = 1;
		return;
	}

	iLocal_60.f_1 = 12;

	if (iLocal_55 == -1)
	{
		Global_44232[iLocal_64 /*5*/].f_2 = 0;
	}
	else if (Global_44232[iLocal_64 /*5*/].f_3 < 3 && Global_44232[iLocal_64 /*5*/].f_3 != 0)
	{
		Global_44232[iLocal_64 /*5*/].f_2 = -1;
	}
	else
	{
		num8 = iLocal_55 - SYSTEM::TIMERA();
	
		if (num8 <= 0)
			num8 = 0;
	
		num8 = (num8 / 1000) + 1;
		Global_44232[iLocal_64 /*5*/].f_2 = 0;
	
		if (num8 < 30)
			Global_44232[iLocal_64 /*5*/].f_2 = 2;
	
		if (num8 < 10)
			Global_44232[iLocal_64 /*5*/].f_2 = 1;
	}

	return;
}

void func_167(int iParam0) // Position - 0x579A
{
	int num;

	num = func_168(81);
	Global_2645068[num /*83*/] = 81;
	Global_2645068[num /*83*/].f_17 = iParam0;
	TEXT_LABEL_ASSIGN_STRING(&Global_2645068[num /*83*/].f_18[0 /*16*/], "", 64);
	return;
}

int func_168(int iParam0) // Position - 0x57D1
{
	int num;
	int i;

	num = 19;

	for (i = 0; i <= 19; i = i + 1)
	{
		if (Global_2645068[i /*83*/] == iParam0)
		{
			num = i;
			i = 20;
		}
		else if (Global_2645068[i /*83*/] == 0)
		{
			num = i;
			i = 20;
		}
	}

	return num;
}

void func_169() // Position - 0x581E
{
	return;
}

void func_170() // Position - 0x5826
{
	iLocal_55 = uLocal_43.f_2;
	iLocal_55.f_1 = uLocal_43.f_3;
	iLocal_55.f_2 = -2;
	iLocal_55.f_3 = -2;
	return;
}

void func_171(int iParam0, int iParam1, int iParam2) // Position - 0x584A
{
	func_172(iParam0, iParam1, iParam2, 0, 0, 1);
	return;
}

void func_172(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5) // Position - 0x585F
{
	int num;

	if (iParam0 == -1)
		return;

	if (iParam1 == -1)
		return;

	if (iParam2 == 6)
		return;

	if (func_174(iParam0, iParam1, iParam2))
		return;

	num = func_173();

	if (num == -1)
		return;

	Global_44313[num /*6*/] = iParam0;
	Global_44313[num /*6*/].f_1 = iParam1;
	Global_44313[num /*6*/].f_2 = iParam2;
	Global_44313[num /*6*/].f_3 = iParam3;
	Global_44313[num /*6*/].f_4 = iParam4;
	Global_44313[num /*6*/].f_5 = iParam5;
	return;
}

int func_173() // Position - 0x58E1
{
	int i;

	i = 0;

	for (i = 0; i < 16; i = i + 1)
	{
		if (Global_44313[i /*6*/].f_2 == 6)
			return i;
	}

	return -1;
}

BOOL func_174(int iParam0, int iParam1, int iParam2) // Position - 0x5912
{
	if (func_175(iParam0, iParam1, iParam2) == -1)
		return false;

	return true;
}

int func_175(int iParam0, int iParam1, int iParam2) // Position - 0x592D
{
	int i;

	i = 0;

	for (i = 0; i < 16; i = i + 1)
	{
		if (iParam2 == Global_44313[i /*6*/].f_2)
			if (iParam0 == Global_44313[i /*6*/])
				if (iParam1 == Global_44313[i /*6*/].f_1)
					return i;
	}

	return -1;
}

void func_176() // Position - 0x5979
{
	eCharacter character;

	bLocal_50 = false;

	if (uLocal_43.f_1 == unk_0xC1A5EC5C986B98AD())
	{
		bLocal_50 = true;
		Global_44445 = 1;
		Global_44447 = Global_44447 + 1;
	}

	if (!unk_0x055111B11E6624FD(uLocal_43.f_1, 0))
	{
		character = _GET_PLAYER_CHARACTER_FROM_PED(uLocal_43.f_1);
	
		switch (character)
		{
			case CHAR_AMANDA:
				unk_0xEE72EF85581D1171(uLocal_43.f_1, "AMANDA_DRUNK");
				break;
		
			case CHAR_LAMAR:
				unk_0xEE72EF85581D1171(uLocal_43.f_1, "LAMAR_DRUNK");
				break;
		}
	}

	return;
}

void func_177() // Position - 0x59E6
{
	if (!iLocal_48 == -1)
		return;

	iLocal_48 = func_117(uLocal_43.f_1);

	if (iLocal_48 == -1)
		return;

	iLocal_64 = func_116(iLocal_48);
	return;
}

void func_178() // Position - 0x5A14
{
	eCharacter character;

	if (!func_34(0) && !func_34(3))
	{
		if (!unk_0x055111B11E6624FD(uLocal_43.f_1, 0))
		{
			character = _GET_PLAYER_CHARACTER_FROM_PED(uLocal_43.f_1);
		
			if (Global_44232[iLocal_64 /*5*/].f_4 > 0)
			{
				switch (character)
				{
					case CHAR_MICHAEL:
						func_180(uLocal_43.f_1, "POST_STONED", 24);
						break;
				
					case CHAR_FRANKLIN:
						func_180(uLocal_43.f_1, "POST_STONED", 24);
						break;
				
					case CHAR_TREVOR:
						func_180(uLocal_43.f_1, "POST_STONED", 24);
						break;
				}
			}
		
			switch (character)
			{
				case CHAR_AMANDA:
					unk_0xEE72EF85581D1171(uLocal_43.f_1, "AMANDA_NORMAL");
					break;
			
				case CHAR_LAMAR:
					unk_0xEE72EF85581D1171(uLocal_43.f_1, "LAMAR_NORMAL");
					break;
			}
		}
	}

	func_149();

	if (bLocal_50)
		Global_44445 = 0;

	func_179();
	unk_0x0B34FA69ECCE3927(func_113(0));
	unk_0x0B34FA69ECCE3927(func_113(2));
	unk_0x0B34FA69ECCE3927(func_113(1));
	Global_1944403 = false;

	if (unk_0x24B651D85CCE5EB4(joaat("appemail")) > 0)
		func_41(0);

	unk_0x675D9C12C73D3DE7();
	return;
}

void func_179() // Position - 0x5B18
{
	var unk;
	var unk2;
	var unk3;

	if (unk_0x055111B11E6624FD(uLocal_43.f_1, 0))
		return;

	unk = uLocal_43.f_1;

	if (unk_0x3C3D6D026CF7F51B(uLocal_43.f_1, 0))
	{
		unk2 = unk_0x95DC39736F6748E3(uLocal_43.f_1, 0);
		unk3 = unk_0xA66E176E5772E965(unk2, -1, 0);
	
		if (!uLocal_43.f_1 == unk3)
			return;
	
		unk = unk2;
	}
	else if (!unk_0x673F52632EDC33B7() == 4 || !unk_0xC1A5EC5C986B98AD() == uLocal_43.f_1)
	{
		return;
	}

	fLocal_53 = 0f;
	func_142(unk, 0f);
	return;
}

void func_180(var uParam0, char* sParam1, int iParam2) // Position - 0x5B92
{
	unk_0x824D23CC0FE1835A(uParam0, sParam1, AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM(iParam2), 1);
	return;
}

char* AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM(int iParam0) // Position - 0x5BA9
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

