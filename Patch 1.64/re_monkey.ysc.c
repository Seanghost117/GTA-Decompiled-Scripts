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
	var uLocal_28 = 0;
	var uLocal_29 = 0;
	float fLocal_30 = 0f;
	float fLocal_31 = 0f;
	float fLocal_32 = 0f;
	var uLocal_33 = 0;
	var uLocal_34 = 0;
	int iLocal_35 = 0;
	var uLocal_36 = 0;
	var uLocal_37 = 0;
	var uLocal_38 = 0;
	var uLocal_39 = 0;
	int iLocal_40 = 0;
	int iLocal_41 = 0;
	int iLocal_42 = 0;
	int iLocal_43 = 0;
	var uLocal_44 = 0;
	var uLocal_45 = 0;
	var uLocal_46 = 0;
	int iLocal_47 = 0;
	int iLocal_48 = 0;
	int iLocal_49 = 0;
	var uLocal_50 = 0;
	var uLocal_51 = 0;
	var uLocal_52 = 0;
	var uLocal_53 = 0;
	float fLocal_54 = 0f;
	int iLocal_55 = 0;
	BOOL bLocal_56 = 0;
	int iLocal_57 = 0;
	float fLocal_58 = 0f;
	int iLocal_59 = 0;
	int iLocal_60 = 0;
	var uLocal_61 = 0;
	var uLocal_62 = 0;
	var uLocal_63 = 0;
	var uLocal_64 = 4;
	var uLocal_65 = 0;
	var uLocal_66 = 0;
	var uLocal_67 = 0;
	var uLocal_68 = 0;
	var uLocal_69 = 0;
	var uLocal_70 = 0;
	var uLocal_71 = 0;
	int iLocal_72 = 0;
	char* sLocal_73 = 0;
	char* sLocal_74 = 0;
	char* sLocal_75 = 0;
	char* sLocal_76 = 0;
	char* sLocal_77 = 0;
	var uLocal_78 = 0;
	var uLocal_79 = 0;
	var uLocal_80 = 0;
	var uLocal_81 = 0;
	var uLocal_82 = 0;
	int iLocal_83 = 0;
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
	sLocal_18 = "NULL";
	fLocal_21 = 0f;
	fLocal_25 = -0.0375f;
	fLocal_26 = 0.17f;
	fLocal_30 = 80f;
	fLocal_31 = 140f;
	fLocal_32 = 180f;
	iLocal_35 = 3;
	iLocal_40 = 1;
	iLocal_41 = 65;
	iLocal_42 = 49;
	iLocal_43 = 64;
	uLocal_51 = { -336.61462f, -93.668076f, 46.0005f };
	fLocal_54 = 256.1257f;
	fLocal_58 = 0f;
	uLocal_69 = { -334.8087f, -85.713f, 47.4504f };
	sLocal_73 = "scr_lamgraff_paint_spray";
	sLocal_74 = "switch@franklin@lamar_tagging_wall";
	sLocal_75 = "lamar_tagging_wall_loop_lamar";
	sLocal_76 = "lamar_tagging_wall_exit_lamar";
	sLocal_77 = "lamar_tagging_exit_loop_lamar";
	uLocal_78 = { 0f, 0f, 0f };

	if (unk_0x55EEDBBFDC6E810F(11))
		func_150();

	func_85(uScriptParam_0.f_1[0 /*3*/]);

	while (true)
	{
		func_71();
	
		switch (iLocal_47)
		{
			case 0:
				if (func_55())
					func_52();
				break;
		
			case 1:
				if (func_1())
					func_52();
				break;
		}
	
		SYSTEM::WAIT(0);
	}

	return;
}

BOOL func_1() // Position - 0x119
{
	if (iLocal_48 == 0)
	{
		return true;
	}
	else if (iLocal_48 == 1)
	{
		func_51();
	
		if (_DOES_ENTITY_EXIST_AND_IS_ALIVE(unk_0xC1A5EC5C986B98AD()))
			func_49(unk_0xC1A5EC5C986B98AD(), -347.4067f, -93.5801f, 44.6639f, 306.0178f);
	
		unk_0xAABD7B0753C5C286(0);
		unk_0xEAB390443C680F72(0, 1065353216);
		unk_0x78DD793477D04C42(250);
		return true;
	}
	else if (iLocal_48 == 2)
	{
		switch (iLocal_49)
		{
			case 0:
				func_36(-899711929);
				func_31();
				func_5(-1, 0);
				func_2();
				func_150();
				break;
		}
	}

	return false;
}

void func_2() // Position - 0x1AE
{
	func_3();
	return;
}

int func_3() // Position - 0x1BB
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

BOOL _IS_MISSION_REPEAT_ACTIVE(BOOL bExcludeBenchmark) // Position - 0x206
{
	if (!bExcludeBenchmark && unk_0x24B651D85CCE5EB4(joaat("benchmark")) > 0)
		return true;

	return IS_BIT_SET(Global_78807, 0);
}

void func_5(int iParam0, int iParam1) // Position - 0x22E
{
	if (iParam0 == -1)
		iParam0 = func_29();

	if (iParam0 == -1)
		return;

	if (iParam1 <= func_28(iParam0))
	{
		func_27(iParam0, iParam1);
	
		if (!func_26(51))
		{
			func_16("RE_REWARD" /*Some Random Events will reward the player with stat boosts or money.*/, 1, 0, 4000, 10000, func_19(), 0, 138, 0);
			func_15(51);
		}
	
		if (func_14(iParam0))
			Global_113648.f_24997.f_2 = 3;
	
		if (func_13(iParam0, iParam1) != 322)
			func_7(func_13(iParam0, iParam1), uLocal_44, uLocal_44.f_1);
	
		Global_113636 = iParam1;
	
		if (Global_113634 == 0)
			if (Global_113637 == 1 || Global_113637 == 5 || Global_113637 == 11 || Global_113637 == 25)
				func_6(2);
			else if (Global_113637 == 26 || Global_113637 == 8 || Global_113637 == 17)
				func_6(7);
			else
				func_6(1);
	}

	return;
}

void func_6(int iParam0) // Position - 0x331
{
	Global_113634 = iParam0;
	return;
}

void func_7(int iParam0, var uParam1, var uParam2) // Position - 0x33F
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
		Global_113648.f_10196[iParam0 /*12*/].f_10 = uParam1;
		Global_113648.f_10196[iParam0 /*12*/].f_11 = uParam2;
	
		if (iParam0 == 287)
			unk_0xE571C8D0AF67E3B4(joaat("NUM_HIDDEN_PACKAGES_0"), 50, 0);
	
		if (iParam0 == 286)
			unk_0xE571C8D0AF67E3B4(joaat("NUM_HIDDEN_PACKAGES_1"), 50, 0);
	
		if (iParam0 == 299)
			unk_0xE571C8D0AF67E3B4(joaat("NUM_HIDDEN_PACKAGES_3"), 50, 0);
	}

	if (flag)
		func_8();

	return;
}

void func_8() // Position - 0x425
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
		func_10(13, SYSTEM::FLOOR(Global_113648.f_10196.f_3853));

	if (!unk_0xBAB6476CDD8C4AA6())
	{
		if (!Global_78558)
		{
			if (func_9() == 2 == false && !unk_0xA26A9A07F761D8F8())
			{
				if (unk_0x3FFDF8D1413D95DE())
					Global_113382 = false;
			
				if (!Global_63362)
					func_3();
			}
		}
	}

	return;
}

int func_9() // Position - 0x8E3
{
	return Global_32163;
}

int func_10(int iParam0, int iParam1) // Position - 0x8EE
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

void _STAT_SET_PACKED_BOOL(int iParam0, int iParam1, Hash hParam2) // Position - 0x93F
{
	if (hParam2 == -1)
		hParam2 = func_12();

	unk_0x0111091C0EE35B9C(iParam0, iParam1, hParam2);
	return;
}

Hash func_12() // Position - 0x95D
{
	return Global_1574918;
}

int func_13(int iParam0, int iParam1) // Position - 0x969
{
	switch (iParam0)
	{
		case 0:
			return 250;
	
		case 1:
			return 226;
	
		case 2:
			return 243;
	
		case 3:
			return 256;
	
		case 4:
			return 259;
	
		case 5:
			if (iParam1 == 1)
				return 281;
		
			if (iParam1 == 2)
				return 282;
			break;
	
		case 6:
			return 265;
	
		case 7:
			return 218;
	
		case 9:
			if (iParam1 == 1)
				return 271;
		
			if (iParam1 == 2)
				return 272;
		
			if (iParam1 == 3)
				return 273;
		
			if (iParam1 == 4)
				return 274;
		
			if (iParam1 == 5)
				return 275;
		
			if (iParam1 == 6)
				return 276;
		
			if (iParam1 == 7)
				return 277;
		
			if (iParam1 == 8)
				return 278;
		
			if (iParam1 == 9)
				return 279;
		
			if (iParam1 == 10)
				return 280;
			break;
	
		case 10:
			return 219;
	
		case 11:
			if (iParam1 == 1)
				return 246;
		
			if (iParam1 == 2)
				return 247;
		
			if (iParam1 == 3)
				return 248;
		
			if (iParam1 == 4)
				return 249;
			break;
	
		case 12:
			return 254;
	
		case 13:
			if (iParam1 == 1)
				return 260;
		
			if (iParam1 == 2)
				return 261;
		
			if (iParam1 == 3)
				return 262;
		
			if (iParam1 == 4)
				return 264;
			break;
	
		case 14:
			return 283;
	
		case 15:
			if (iParam1 == 1)
				return 224;
		
			if (iParam1 == 2)
				return 225;
			break;
	
		case 16:
			return 252;
	
		case 17:
			if (iParam1 == 1)
				return 244;
		
			if (iParam1 == 2)
				return 245;
			break;
	
		case 18:
			return 253;
	
		case 19:
			return 215;
	
		case 20:
			return 216;
	
		case 21:
			return 251;
	
		case 22:
			if (iParam1 == 1)
				return 221;
		
			if (iParam1 == 2)
				return 222;
			break;
	
		case 23:
			if (iParam1 == 1)
				return 213;
		
			if (iParam1 == 2)
				return 214;
			break;
	
		case 24:
			return 242;
	
		case 25:
			if (iParam1 == 1)
				return 267;
		
			if (iParam1 == 2)
				return 268;
		
			if (iParam1 == 3)
				return 269;
			break;
	
		case 8:
			return 255;
	
		case 26:
			if (iParam1 == 1)
				return 227;
		
			if (iParam1 == 2)
				return 228;
			break;
	
		case 27:
			if (iParam1 == 1)
				return 257;
		
			if (iParam1 == 2)
				return 258;
			break;
	
		case 28:
			return 217;
	
		case 29:
			if (iParam1 == 1)
				return 229;
		
			if (iParam1 == 2)
				return 230;
		
			if (iParam1 == 3)
				return 231;
			break;
	
		case 30:
			return 285;
	
		case 31:
			return 318;
	
		case 32:
			return 319;
	
		case 33:
			return 320;
	}

	return 322;
}

BOOL func_14(int iParam0) // Position - 0xCDD
{
	switch (iParam0)
	{
		case 29:
		case 30:
		case 2:
		case 18:
			return false;
	}

	return true;
}

void func_15(int iParam0) // Position - 0xD0C
{
	int num;
	int i;

	num = iParam0;

	for (i = 0; num > 31; i = i + 1)
	{
		num = num - 32;
	}

	if (i < 3)
		unk_0xECDAB41968FF21A8(&Global_113648.f_20412.f_150[i], num);

	return;
}

void func_16(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8) // Position - 0xD4E
{
	func_17(sParam0, "", iParam1, iParam2, iParam3, iParam4, iParam5, iParam6, iParam7, iParam8);
	return;
}

void func_17(char* sParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9) // Position - 0xD6F
{
	int i;

	if (unk_0x4310A0DB886F9FED(sParam0, ""))
		return;

	if (iParam3 < 0)
		return;

	if (iParam5 < 500 && iParam5 != -1)
		return;

	if (iParam4 < 0 && iParam4 != -1)
		return;

	if (iParam6 < 1 || iParam6 > 7)
		return;

	if (iParam7 == 235)
		return;

	if (iParam8 == 235)
		return;

	for (i = 0; i < Global_113648.f_20412.f_145; i = i + 1)
	{
		if (unk_0x4310A0DB886F9FED(&Global_113648.f_20412[i /*16*/], sParam0))
			return;
	}

	if (Global_113648.f_20412.f_145 < 9)
	{
		TEXT_LABEL_ASSIGN_STRING(&Global_113648.f_20412[Global_113648.f_20412.f_145 /*16*/], sParam0, 16);
		TEXT_LABEL_ASSIGN_STRING(&(Global_113648.f_20412[Global_113648.f_20412.f_145 /*16*/].f_4), sParam1, 16);
		Global_113648.f_20412[Global_113648.f_20412.f_145 /*16*/].f_8 = unk_0xA5E11AF0A2B928C1() + iParam3;
		Global_113648.f_20412[Global_113648.f_20412.f_145 /*16*/].f_9 = iParam5;
		Global_113648.f_20412[Global_113648.f_20412.f_145 /*16*/].f_11 = iParam6;
		Global_113648.f_20412[Global_113648.f_20412.f_145 /*16*/].f_12 = iParam2;
		Global_113648.f_20412[Global_113648.f_20412.f_145 /*16*/].f_13 = iParam7;
		Global_113648.f_20412[Global_113648.f_20412.f_145 /*16*/].f_14 = iParam8;
		Global_113648.f_20412[Global_113648.f_20412.f_145 /*16*/].f_15 = iParam9;
	
		if (iParam4 != -1)
			Global_113648.f_20412[Global_113648.f_20412.f_145 /*16*/].f_10 = unk_0xA5E11AF0A2B928C1() + iParam3 + iParam4;
		else
			Global_113648.f_20412[Global_113648.f_20412.f_145 /*16*/].f_10 = -1;
	
		Global_113648.f_20412.f_145 = Global_113648.f_20412.f_145 + 1;
		func_18();
	}

	return;
}

void func_18() // Position - 0xF42
{
	int i;

	for (i = 0; i < 3; i = i + 1)
	{
		Global_113648.f_20412.f_146[i] = 0;
	}

	for (i = 0; i < Global_113648.f_20412.f_145; i = i + 1)
	{
		if (IS_BIT_SET(Global_113648.f_20412[i /*16*/].f_11, 0))
			if (Global_113648.f_20412[i /*16*/].f_12 > Global_113648.f_20412.f_146[0])
				Global_113648.f_20412.f_146[0] = Global_113648.f_20412[i /*16*/].f_12;
	
		if (IS_BIT_SET(Global_113648.f_20412[i /*16*/].f_11, 1))
			if (Global_113648.f_20412[i /*16*/].f_12 > Global_113648.f_20412.f_146[1])
				Global_113648.f_20412.f_146[1] = Global_113648.f_20412[i /*16*/].f_12;
	
		if (IS_BIT_SET(Global_113648.f_20412[i /*16*/].f_11, 2))
			if (Global_113648.f_20412[i /*16*/].f_12 > Global_113648.f_20412.f_146[2])
				Global_113648.f_20412.f_146[2] = Global_113648.f_20412[i /*16*/].f_12;
	}

	return;
}

int func_19() // Position - 0x1059
{
	func_20();

	switch (Global_113648.f_2365.f_539.f_4321)
	{
		case CHAR_MICHAEL:
			return 1;
	
		case CHAR_FRANKLIN:
			return 2;
	
		case CHAR_TREVOR:
			return 4;
	}

	return 0;
}

void func_20() // Position - 0x109F
{
	eCharacter character;

	if (unk_0x7DE17ACDD8BA2642(unk_0xC1A5EC5C986B98AD()))
	{
		if (_GET_CHARACTER_MODEL(Global_113648.f_2365.f_539.f_4321) != unk_0x504B9BB48D41C264(unk_0xC1A5EC5C986B98AD()))
		{
			character = _GET_PLAYER_CHARACTER_FROM_PED(unk_0xC1A5EC5C986B98AD());
		
			if (func_22(character) && !func_21(14) || Global_112599)
			{
				if (Global_113648.f_2365.f_539.f_4321 != character && func_22(Global_113648.f_2365.f_539.f_4321))
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

BOOL func_21(int iParam0) // Position - 0x119C
{
	return Global_43257 == iParam0;
}

BOOL func_22(eCharacter echParam0) // Position - 0x11AA
{
	return echParam0 < CHAR_MULTIPLAYER;
}

eCharacter _GET_PLAYER_CHARACTER_FROM_PED(var uParam0) // Position - 0x11B6
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

int _GET_CHARACTER_MODEL(eCharacter character) // Position - 0x11F3
{
	if (func_22(character))
		return func_25(character);
	else
		character != _CHAR_NULL;

	return 0;
}

int func_25(eCharacter echParam0) // Position - 0x1218
{
	return Global_2028[echParam0 /*29*/];
}

BOOL func_26(int iParam0) // Position - 0x1227
{
	int num;
	int i;

	num = iParam0;

	for (i = 0; num > 31; i = i + 1)
	{
		num = num - 32;
	}

	if (i < 3)
		return IS_BIT_SET(Global_113648.f_20412.f_150[i], num);

	return false;
}

void func_27(int iParam0, int iParam1) // Position - 0x1267
{
	unk_0xECDAB41968FF21A8(&Global_113648.f_24997.f_8[iParam0], iParam1);
	return;
}

int func_28(int iParam0) // Position - 0x1282
{
	int num;

	num = 1;

	switch (iParam0)
	{
		case 1:
			num = 5;
			break;
	
		case 5:
			num = 2;
			break;
	
		case 9:
			num = 10;
			break;
	
		case 11:
			num = 4;
			break;
	
		case 13:
			num = 4;
			break;
	
		case 15:
			num = 2;
			break;
	
		case 17:
			num = 2;
			break;
	
		case 22:
			num = 2;
			break;
	
		case 23:
			num = 2;
			break;
	
		case 25:
			num = 3;
			break;
	
		case 26:
			num = 2;
			break;
	
		case 27:
			num = 2;
			break;
	
		case 29:
			num = 3;
			break;
	}

	return num;
}

int func_29() // Position - 0x1333
{
	var unk;
	int num;

	TEXT_LABEL_ASSIGN_STRING(&unk, unk_0x688846D56810779A(), 64);
	num = func_30(unk);
	return num;
}

int func_30(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15) // Position - 0x1350
{
	switch (unk_0x14580F20CBCE4FA9(&uParam0))
	{
		case joaat("re_abandonedcar"):
			return 23;
	
		case joaat("re_accident"):
			return 0;
	
		case joaat("re_arrests"):
			return 15;
	
		case joaat("re_atmrobbery"):
			return 1;
	
		case joaat("re_bikethief"):
			return 26;
	
		case joaat("re_border"):
			return 29;
	
		case joaat("re_burials"):
			return 24;
	
		case joaat("re_bus_tours"):
			return 2;
	
		case joaat("re_cartheft"):
			return 17;
	
		case joaat("re_chasethieves"):
			return 11;
	
		case joaat("re_crashrescue"):
			return 16;
	
		case joaat("re_cultshootout"):
			return 18;
	
		case joaat("re_dealgonewrong"):
			return 12;
	
		case joaat("re_domestic"):
			return 3;
	
		case joaat("re_drunkdriver"):
			return 27;
	
		case joaat("re_gang_intimidation"):
			return 20;
	
		case joaat("re_gangfight"):
			return 19;
	
		case joaat("re_getaway_driver"):
			return 4;
	
		case joaat("re_hitch_lift"):
			return 13;
	
		case joaat("re_homeland_security"):
			return 28;
	
		case joaat("re_lured"):
			return 7;
	
		case joaat("re_muggings"):
			return 25;
	
		case joaat("re_paparazzi"):
			return 10;
	
		case joaat("re_prisonerlift"):
			return 22;
	
		case joaat("re_prisonvanbreak"):
			return 21;
	
		case joaat("re_securityvan"):
			return 9;
	
		case joaat("re_shoprobbery"):
			return 5;
	
		case joaat("re_snatched"):
			return 6;
	
		case joaat("re_stag_do"):
			return 14;
	
		case joaat("re_yetarian"):
			return 30;
	
		case joaat("re_duel"):
			return 31;
	
		case joaat("re_seaplane"):
			return 32;
	
		case joaat("re_monkey"):
			return 33;
	}

	return -1;
}

void func_31() // Position - 0x152A
{
	func_32(1751306471, 6, func_35(), 133, 30000, 10000, -1, 0, -1, 0, 0);
	return;
}

int func_32(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10) // Position - 0x154E
{
	int num;

	if (_IS_MISSION_REPEAT_ACTIVE(false))
		return 0;

	if (iParam4 < 0)
		return 0;

	if (iParam5 < 0)
		return 0;

	if (iParam6 == 76)
		return 0;

	if (iParam7 == 235)
		return 0;

	if (iParam3 < 3)
		if (IS_BIT_SET(iParam2, iParam3))
			return 0;

	if (iParam2 < 1 || iParam2 > 7)
		return 0;

	if (Global_113648.f_7690.f_764 < CHAR_MIKE_FRANK_CONF)
	{
		num = iParam0;
		num.f_3 = func_34(iParam1);
		num.f_4 = unk_0xA5E11AF0A2B928C1() + iParam4;
		num.f_5 = iParam5;
		num.f_1 = iParam9;
		num.f_2 = iParam2;
		num.f_6 = iParam3;
		num.f_7 = iParam6;
		num.f_8 = iParam7;
		num.f_9 = iParam8;
		num.f_10 = -1;
		num.f_11 = -1;
		num.f_13 = iParam10;
		unk_0x061B1200C95204CB(&(num.f_1), 0);
		Global_113648.f_7690.f_651[Global_113648.f_7690.f_764 /*14*/] = { num };
		Global_113648.f_7690.f_764 = Global_113648.f_7690.f_764 + 1;
		func_33(CHAR_MICHAEL);
		func_33(CHAR_FRANKLIN);
		func_33(CHAR_TREVOR);
		return 1;
	}

	return 0;
}

void func_33(eCharacter echParam0) // Position - 0x1666
{
	eCharacter i;
	int num;
	eCharacter j;

	num = 0;

	if (!func_22(echParam0))
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

int func_34(int iParam0) // Position - 0x1724
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

int func_35() // Position - 0x178E
{
	int num;

	num = unk_0x504B9BB48D41C264(unk_0xC1A5EC5C986B98AD());

	switch (num)
	{
		case joaat("Player_Zero"):
			return 1;
	
		case joaat("Player_One"):
			return 2;
	
		case joaat("Player_Two"):
			return 4;
	
		default:
		
	}

	return -1;
}

int func_36(int iParam0) // Position - 0x17C6
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
				func_48(i);
				func_40(iParam0);
				num = 1;
			}
		}
	}

	for (i = CHAR_MICHAEL; i < Global_113648.f_7690.f_198; i = i + 1)
	{
		if (Global_113648.f_7690.f_137[i /*15*/] == iParam0)
		{
			func_40(iParam0);
			num = 1;
		}
	}

	for (i = CHAR_MICHAEL; i < Global_113648.f_7690.f_650; i = i + 1)
	{
		if (Global_113648.f_7690.f_199[i /*15*/] == iParam0)
		{
			func_39(iParam0);
			num = 1;
		}
	}

	for (i = CHAR_MICHAEL; i < Global_113648.f_7690.f_764; i = i + 1)
	{
		if (Global_113648.f_7690.f_651[i /*14*/] == iParam0)
		{
			func_38(i);
			num = 1;
		}
	}

	for (i = CHAR_MICHAEL; i < Global_113648.f_7690.f_866; i = i + 1)
	{
		if (Global_113648.f_7690.f_765[i /*10*/] == iParam0)
		{
			func_37(i);
			num = 1;
		}
	}

	return num;
}

void func_37(eCharacter echParam0) // Position - 0x18ED
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

void func_38(eCharacter echParam0) // Position - 0x19A6
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

	func_33(CHAR_MICHAEL);
	func_33(CHAR_FRANKLIN);
	func_33(CHAR_TREVOR);
	return;
}

void func_39(int iParam0) // Position - 0x1A6E
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

void func_40(int iParam0) // Position - 0x1B1B
{
	var unk;
	eCharacter i;
	eCharacter j;

	for (i = CHAR_MICHAEL; i < Global_113648.f_7690.f_198; i = i + 1)
	{
		if (Global_113648.f_7690.f_137[i /*15*/] == iParam0)
		{
			func_41(Global_113648.f_7690.f_137[i /*15*/].f_6);
		
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

int func_41(eCharacter echParam0) // Position - 0x1BD7
{
	eCharacter character;

	if (Global_117[echParam0 /*10*/].f_8 != 169)
	{
		if (func_47(echParam0, Global_20383) == 1)
		{
			func_46(echParam0, Global_20383, 0);
		
			if (func_45(echParam0, Global_20383) == 0)
			{
				character = Global_20383;
				func_42(echParam0, character);
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

void func_42(eCharacter echParam0, eCharacter echParam1) // Position - 0x1C2D
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
			func_44(echParam0, character, 0);
			func_43(echParam0, character, 0);
		}
	}

	return;
}

void func_43(eCharacter echParam0, eCharacter echParam1, int iParam2) // Position - 0x1C62
{
	if (echParam1 < CHAR_MICHAEL || echParam1 > CHAR_ALL_PLAYERS_CONF)
		return;

	Global_2028[echParam0 /*29*/].f_24[echParam1] = iParam2;

	if (echParam0 < _CHAR_UNUSED)
		Global_113648.f_28052[echParam0 /*29*/].f_24[echParam1] = iParam2;

	return;
}

void func_44(eCharacter echParam0, eCharacter echParam1, int iParam2) // Position - 0x1CA7
{
	if (echParam1 < CHAR_MICHAEL || echParam1 > CHAR_ALL_PLAYERS_CONF)
		return;

	Global_2028[echParam0 /*29*/].f_12[echParam1] = iParam2;

	if (echParam0 < _CHAR_UNUSED)
		Global_113648.f_28052[echParam0 /*29*/].f_12[echParam1] = iParam2;

	return;
}

int func_45(eCharacter echParam0, eCharacter echParam1) // Position - 0x1CEC
{
	if (echParam1 < CHAR_MICHAEL || echParam1 > CHAR_ALL_PLAYERS_CONF)
		return 0;

	return Global_2028[echParam0 /*29*/].f_24[echParam1];
}

void func_46(eCharacter echParam0, eCharacter echParam1, int iParam2) // Position - 0x1D16
{
	Global_2028[echParam0 /*29*/].f_19[echParam1] = iParam2;

	if (echParam0 < _CHAR_UNUSED)
		Global_113648.f_28052[echParam0 /*29*/].f_19[echParam1] = iParam2;

	return;
}

int func_47(eCharacter echParam0, eCharacter echParam1) // Position - 0x1D47
{
	if (echParam1 < CHAR_MICHAEL || echParam1 > CHAR_ALL_PLAYERS_CONF)
		return 0;

	return Global_2028[echParam0 /*29*/].f_19[echParam1];
}

void func_48(eCharacter echParam0) // Position - 0x1D71
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
			func_33(i);
	}

	return;
}

void func_49(var uParam0, float fParam1, float fParam2, float fParam3, float fParam4) // Position - 0x1E49
{
	unk_0xC2E3C377D893C17A(uParam0, fParam1, 1, 0, 0, 1);
	unk_0x692C3FDAD7DB53CC(uParam0, fParam4);
	return;
}

BOOL _DOES_ENTITY_EXIST_AND_IS_ALIVE(var uParam0) // Position - 0x1E67
{
	if (unk_0x7DE17ACDD8BA2642(uParam0))
		if (!unk_0x055111B11E6624FD(uParam0, 0))
			return true;

	return false;
}

void func_51() // Position - 0x1E88
{
	int i;
	int num;

	for (i = 0; i < 4; i = i + 1)
	{
		num = i;
	
		switch (num)
		{
			case 0:
				break;
		
			case 1:
				uLocal_64[num] = unk_0xF19D6C0E8B56BE23(joaat("prop_paints_can02"), -335.66f, -95.24f, 46.16f, 1, 1, 0);
				unk_0x2EDDA32F6EF3C8B7(uLocal_64[num], -335.66f, -95.24f, 46.16f, 0, 0, 1);
				unk_0x464B5B0F22497FC5(uLocal_64[num], -2.32f, 0.66f, -0.8f, 2, 1);
				break;
		
			case 2:
				uLocal_64[num] = unk_0xF19D6C0E8B56BE23(joaat("prop_paint_brush05"), -336.04f, -94.9f, 46.02f, 1, 1, 0);
				unk_0x2EDDA32F6EF3C8B7(uLocal_64[num], -336.04f, -94.9f, 46.02f, 0, 0, 1);
				unk_0x464B5B0F22497FC5(uLocal_64[num], 0.01f, 3.85f, 2.72f, 2, 1);
				break;
		
			case 3:
				uLocal_64[num] = unk_0xF19D6C0E8B56BE23(joaat("prop_paint_spray01b"), -336.34f, -95.66f, 46.02f, 1, 1, 0);
				unk_0x2EDDA32F6EF3C8B7(uLocal_64[num], -336.34f, -95.66f, 46.02f, 0, 0, 1);
				unk_0x464B5B0F22497FC5(uLocal_64[num], -2.86f, 0.76f, 28.89f, 2, 1);
				break;
		}
	}

	return;
}

void func_52() // Position - 0x1FD9
{
	if (iLocal_48 == 2)
	{
		func_54();
		iLocal_49 = 0;
	}

	func_53();
	return;
}

void func_53() // Position - 0x1FF2
{
	switch (iLocal_48)
	{
		case 0:
			iLocal_48 = 2;
			break;
	
		case 1:
			iLocal_48 = 2;
			break;
	
		case 2:
			iLocal_48 = 0;
			break;
	}

	return;
}

void func_54() // Position - 0x2025
{
	int num;

	num = iLocal_47 + 1;

	if (num >= 0 && num < 2)
		iLocal_47 = num;

	return;
}

BOOL func_55() // Position - 0x2047
{
	if (iLocal_48 == 0)
	{
		return true;
	}
	else if (iLocal_48 == 1)
	{
		if (_DOES_ENTITY_EXIST_AND_IS_ALIVE(unk_0xC1A5EC5C986B98AD()))
			func_49(unk_0xC1A5EC5C986B98AD(), -366.6139f, -79.7531f, 44.6616f, 230.7299f);
	
		unk_0xAABD7B0753C5C286(0);
		unk_0xEAB390443C680F72(0, 1065353216);
		unk_0x78DD793477D04C42(250);
		return true;
	}
	else if (iLocal_48 == 2)
	{
		if (unk_0x7DE17ACDD8BA2642(uLocal_50))
			if (unk_0xE678B2045145CE41(uLocal_50, 1))
				func_150();
		else if (iLocal_49 > 0)
			if (bLocal_56)
				return true;
			else
				func_150();
	
		switch (iLocal_49)
		{
			case 0:
				if (func_57())
				{
					func_51();
					iLocal_49 = iLocal_49 + 1;
				}
				break;
		
			case 1:
				if (func_56())
				{
					if (_DOES_ENTITY_EXIST_AND_IS_ALIVE(uLocal_50))
					{
						if (unk_0x839EB47DC8D56EE4(1106247680, 31086, 1061997773, 1060320051, 1048576000, 1090519040, 1051361018, 31086, 24818) == uLocal_50)
						{
							iLocal_83 = unk_0xA5E11AF0A2B928C1() + 2000;
							iLocal_49 = iLocal_49 + 1;
						}
					}
				}
				break;
		
			case 2:
				if (iLocal_83 < unk_0xA5E11AF0A2B928C1())
				{
					bLocal_56 = true;
					iLocal_49 = iLocal_49 + 1;
				}
				break;
		}
	}

	return false;
}

BOOL func_56() // Position - 0x2170
{
	if (Global_22761)
		return true;

	return false;
}

BOOL func_57() // Position - 0x2186
{
	if (unk_0x7DE17ACDD8BA2642(uLocal_50))
	{
		return true;
	}
	else
	{
		unk_0x852EC2A7DE66202D(joaat("U_M_M_StreetArt_01"));
	
		if (unk_0x0CBB7C273DED26E7(joaat("U_M_M_StreetArt_01")))
		{
			uLocal_50 = unk_0x69FDD9508259E5B5(26, joaat("U_M_M_StreetArt_01"), uLocal_51, fLocal_54, 1, 1);
			unk_0xE0A291F406691F03(joaat("U_M_M_StreetArt_01"));
			uLocal_64[0] = unk_0xF19D6C0E8B56BE23(joaat("prop_cs_spray_can"), uLocal_69, 1, 1, 0);
			unk_0xBD02C9D4D7076ECC(uLocal_64[0], uLocal_50, unk_0xCF99BEF1317B66DA(uLocal_50, 28422), 0f, -0.01f, -0.02f, uLocal_78, 1, 1, 0, 0, 2, 1, 0);
			unk_0x71A535529C1CA5DF(uLocal_50, 1);
			unk_0x598D91BBD045C1F3(uLocal_50, 42, 1);
			iLocal_57 = func_68(uLocal_50, false, 145);
			func_58(true);
			unk_0x8386356641D0DED1(uLocal_50, joaat("PLAYER"));
			unk_0x4D59607617EE1F59(uLocal_50, 2.5f);
		}
	}

	return false;
}

int func_58(BOOL bParam0) // Position - 0x2248
{
	if (func_62())
	{
		Global_113638 = true;
		Global_113635 = unk_0xA5E11AF0A2B928C1();
	
		if (func_14(Global_113637))
			func_59(0);
	
		unk_0x97DBA2AA6C70AFC7(1, "RE_TITLE" /*Random Event*/);
	
		if (bParam0 && func_14(Global_113637))
			unk_0x01680CFD15C1C85D();
	
		return 1;
	}

	return 0;
}

void func_59(int iParam0) // Position - 0x229A
{
	switch (iParam0)
	{
		case 0:
			if (Global_113648.f_24997.f_2 < 3)
			{
				if (!unk_0x5835DDABA96BB199())
				{
					_DISPLAY_HELP_TEXT(func_61(iParam0), -1);
					Global_113648.f_24997.f_2 = Global_113648.f_24997.f_2 + 1;
					unk_0xECDAB41968FF21A8(&Global_113644, 0);
				}
			}
			break;
	
		case 1:
			if (!IS_BIT_SET(Global_113644, 1))
			{
				if (!unk_0x5835DDABA96BB199())
				{
					_DISPLAY_HELP_TEXT(func_61(iParam0), -1);
					Global_113648.f_24997.f_3 = Global_113648.f_24997.f_3 + 1;
					unk_0xECDAB41968FF21A8(&Global_113644, 1);
				}
			}
			break;
	
		case 2:
			if (!IS_BIT_SET(Global_113644, 2))
			{
				if (!unk_0x5835DDABA96BB199())
				{
					_DISPLAY_HELP_TEXT(func_61(iParam0), -1);
					Global_113648.f_24997.f_4 = Global_113648.f_24997.f_4 + 1;
					unk_0xECDAB41968FF21A8(&Global_113644, 2);
				}
			}
			break;
	}

	return;
}

void _DISPLAY_HELP_TEXT(char* text, int iParam1) // Position - 0x2375
{
	unk_0x476CC3711883B966(text);
	unk_0xBC8969B539DCA239(0, 0, 1, iParam1);
	return;
}

char* func_61(int iParam0) // Position - 0x238C
{
	char* str;

	str = "";

	switch (iParam0)
	{
		case 0:
			str = "AM_H_REFS" /*Various events unfold across San Andreas daily. These events will become blipped on the Radar when nearby.*/;
			break;
	
		case 1:
			str = "RE_FLASHBLIP" /*Flashing blue and red blips indicate situations around San Andreas that you can choose to help with.*/;
			break;
	
		case 2:
			str = "RE_HANDOVER" /*If you retrieve a stolen item, you can choose to keep it or return it for a reward.*/;
			break;
	}

	return str;
}

BOOL func_62() // Position - 0x23CC
{
	switch (func_63(&Global_32223, 0, 5, false, unk_0xAF908D5E2416DA93()))
	{
		case 1:
			return true;
	
		case 0:
			return true;
	}

	return false;
}

int func_63(var uParam0, int iParam1, int iParam2, BOOL bParam3, int iParam4) // Position - 0x2402
{
	int i;

	if (iParam1 == 7)
		return 0;

	if (!bParam3)
		if (Global_98159.f_44 == 1)
			return 2;

	if (iParam1 == 0)
	{
		if (func_67(0))
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
			func_64(uParam0, iParam4);
	}

	return 2;
}

void func_64(var uParam0, int iParam1) // Position - 0x2539
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

BOOL _CAN_ENTER_FREEROAM_STATE(int iParam0) // Position - 0x2588
{
	return func_66(iParam0, Global_43257);
}

BOOL func_66(int iParam0, int iParam1) // Position - 0x2599
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

BOOL func_67(int iParam0) // Position - 0x277A
{
	if (Global_43257 == 15)
		return false;

	if (_CAN_ENTER_FREEROAM_STATE(iParam0))
		return false;

	return true;
}

int func_68(var uParam0, BOOL bParam1, int iParam2) // Position - 0x279C
{
	int num;

	num = func_69(uParam0, !bParam1, false);

	if (iParam2 != 145 && unk_0xCE4AAA035282336C(num) && unk_0x42FA33BDEDF21186(&(Global_2028[iParam2 /*29*/].f_3)))
		unk_0x4049FDC177C92D4B(num, &(Global_2028[iParam2 /*29*/].f_3));

	return num;
}

int func_69(var uParam0, BOOL bParam1, BOOL bParam2) // Position - 0x27E6
{
	int num;

	if (!unk_0x7DE17ACDD8BA2642(uParam0))
		return 0;

	num = unk_0x53B496178AE44636(uParam0);

	if (unk_0xA6B591D40DE982B5(uParam0))
	{
		unk_0x225EB85DBC38E707(num, unk_0xA26A9A07F761D8F8() ? 1f : 1f);
	
		if (!bParam2)
			unk_0x3BCF1F6A3573A1DF(num, bParam1);
		else
			unk_0x1886753DA39F38F8(num, 2);
	}
	else if (unk_0x71904BD37B848CAF(uParam0))
	{
		unk_0x225EB85DBC38E707(num, unk_0xA26A9A07F761D8F8() ? 0.7f : 0.7f);
		unk_0x3BCF1F6A3573A1DF(num, bParam1);
	}
	else if (unk_0x4E7A9806173C3AD1(uParam0))
	{
		unk_0x225EB85DBC38E707(num, unk_0xA26A9A07F761D8F8() ? 0.7f : 0.7f);
	}

	return num;
}

var func_70(BOOL bParam0, var uParam1, var uParam2) // Position - 0x288A
{
	if (bParam0)
		return uParam1;

	return uParam2;
}

void func_71() // Position - 0x28A1
{
	func_72();

	if (!unk_0xCBE2EC2868A6C438() && iLocal_55 < 3)
		func_150();

	return;
}

void func_72() // Position - 0x28C2
{
	BOOL flag;
	BOOL flag2;
	Vector3 vector;
	var unk3;
	float num;
	var unk6;
	BOOL flag3;
	BOOL flag4;
	float num2;
	int num3;
	var unk9;
	var unk12;
	var unk15;
	int num4;

	if (_DOES_ENTITY_EXIST_AND_IS_ALIVE(uLocal_50))
	{
		flag = _DOES_ENTITY_EXIST_AND_IS_ALIVE(uLocal_50);
		flag2 = _DOES_ENTITY_EXIST_AND_IS_ALIVE(unk_0xC1A5EC5C986B98AD());
		vector = { unk_0x30BE8A934C020461(uLocal_50, 0) };
		num = 7.5f;
		unk6 = { num, num, num };
	
		if (flag2)
		{
			unk3 = { unk_0x30BE8A934C020461(unk_0xC1A5EC5C986B98AD(), 0) };
			flag3 = unk_0x3C3D6D026CF7F51B(unk_0xC1A5EC5C986B98AD(), 0);
			flag4 = unk_0x6DFDDBD2D0067A98(unk_0xC1A5EC5C986B98AD());
		}
	
		if (iLocal_55 < 3)
			if (unk_0x612907CF3208D1E3(vector, num, 0) || unk_0x332F7E85F9805351(vector - unk6, vector + unk6, 0))
				iLocal_55 = 3;
	
		switch (iLocal_55)
		{
			case 0:
				unk_0x28818732C8F0F80E(sLocal_74);
			
				if (unk_0x2BBF749E555360DC(sLocal_74))
				{
					unk_0xC5B2830898581862(uLocal_50, 1);
					unk_0x3EE48ADC8C7F5CC4(uLocal_50, sLocal_74, sLocal_75, 1000f, -8f, -1, 8193, 0, 0, 0, 0);
					iLocal_55 = iLocal_55 + 1;
				}
				break;
		
			case 1:
				if (func_83(joaat("SCRIPT_TASK_PLAY_ANIM")))
					iLocal_55 = 5;
			
				if (func_82(unk_0xC1A5EC5C986B98AD(), uLocal_50, 35f))
				{
					unk_0xDBC7406226B5540E(&uLocal_82);
					unk_0x3EE48ADC8C7F5CC4(0, sLocal_74, sLocal_76, 8f, -8f, -1, 8192, 0, 0, 0, 0);
					unk_0x3EE48ADC8C7F5CC4(0, sLocal_74, sLocal_77, 8f, -2f, -1, 8193, 0, 0, 0, 0);
					unk_0xF2CFC6EC8C85FA78(uLocal_82);
					unk_0x3D7110D966B0CEA2(uLocal_50, uLocal_82);
					unk_0x63EF69C6969A3D26(&uLocal_82);
					unk_0x0B34FA69ECCE3927(sLocal_74);
					iLocal_55 = iLocal_55 + 1;
				}
				break;
		
			case 2:
				if (func_83(joaat("SCRIPT_TASK_PERFORM_SEQUENCE")))
					iLocal_55 = 5;
			
				if (flag4)
					num2 = 30f;
				else if (flag3)
					num2 = 17.5f;
				else
					num2 = 5f;
			
				if (flag && flag2 && func_82(unk_0xC1A5EC5C986B98AD(), uLocal_50, num2))
					iLocal_55 = 3;
			
				if (bLocal_56)
					iLocal_55 = 3;
			
				if (func_81())
					iLocal_55 = 3;
			
				if (flag2 && func_80(unk3, vector))
					iLocal_55 = 3;
			
				func_78();
				break;
		
			case 3:
				if (func_73())
					iLocal_55 = iLocal_55 + 1;
				break;
		
			case 4:
				unk_0x474AA9EF29305EA8(uLocal_50, 8, 1);
				unk_0x474AA9EF29305EA8(uLocal_50, 32, 1);
				unk_0xDBC7406226B5540E(&uLocal_82);
				unk_0x06A2A5F6A6959BE7(0, unk_0xC1A5EC5C986B98AD(), 800);
				unk_0xC6C9BF71106ABCAC(0, unk_0xC1A5EC5C986B98AD(), 9999f, -1, 1, 0);
				unk_0xF2CFC6EC8C85FA78(uLocal_82);
				unk_0x3D7110D966B0CEA2(uLocal_50, uLocal_82);
				unk_0x63EF69C6969A3D26(&uLocal_82);
				iLocal_55 = iLocal_55 + 1;
				break;
		
			case 5:
				if (func_83(joaat("SCRIPT_TASK_PERFORM_SEQUENCE")))
					iLocal_55 = 5;
			
				if (!unk_0x865259F0333CAA4B(uLocal_50) && SYSTEM::VDIST2(vector, unk_0x30BE8A934C020461(unk_0xC1A5EC5C986B98AD(), 0)) > 2500f)
				{
					uLocal_81 = unk_0xB4C9A1D39D0533BF(unk3, vector, 1, 0, 7);
					iLocal_55 = iLocal_55 + 1;
				}
				break;
		
			case 6:
				if (func_83(joaat("SCRIPT_TASK_PERFORM_SEQUENCE")))
					iLocal_55 = 5;
			
				num4 = unk_0x5A2817B89A8ECCD2(uLocal_81, &num3, &unk9, &unk12, &unk15);
			
				if (num4 == 2)
					if (num3 == 1)
						iLocal_55 = iLocal_55 + 1;
					else
						iLocal_55 = iLocal_55 - 1;
				else if (num4 == 0)
					iLocal_55 = iLocal_55 + 1;
				break;
		
			case 7:
				unk_0xE9C250FA35A936C8(&uLocal_50);
				break;
		}
	}
	else if (unk_0x7DE17ACDD8BA2642(uLocal_50))
	{
		unk_0x2718E9CC165A99F6(uLocal_50, 0);
	}

	return;
}

BOOL func_73() // Position - 0x2BE9
{
	var unk;
	var unk4;
	float num;
	int value;
	float num2;
	float num3;
	float num4;
	var unk7;

	unk = { -335.71f, -93.39f, 46f };
	unk4 = { -336.7188f, -93.5128f, 46f };

	switch (iLocal_60)
	{
		case 0:
			if (unk_0x7BB3D8F4F6310EB8(uLocal_50, sLocal_74, sLocal_77, 3))
			{
				fLocal_58 = 0.349f;
				iLocal_59 = 900;
				uLocal_61 = { unk };
				iLocal_60 = 1;
			}
			else if (unk_0x7BB3D8F4F6310EB8(uLocal_50, sLocal_74, sLocal_76, 3))
			{
				fLocal_58 = unk_0x92377426879E21FF(uLocal_50, sLocal_74, sLocal_76);
				fLocal_58 = func_77(fLocal_58, 0.2f, 0.349f);
			
				if (fLocal_58 != 0.2f)
				{
					num = (1f / (0.349f - 0.161f)) * SYSTEM::TO_FLOAT(900);
					iLocal_59 = SYSTEM::ROUND((fLocal_58 - 0.161f) * num);
					uLocal_61 = { unk_0x30BE8A934C020461(uLocal_50, 0) - { 1f, 0f, 0f } };
					iLocal_60 = 1;
				}
				else
				{
					iLocal_60 = 3;
				}
			}
			else
			{
				iLocal_60 = 3;
			}
			break;
	
		case 1:
			unk_0x2718E9CC165A99F6(uLocal_50, 1);
			unk_0x3EE48ADC8C7F5CC4(uLocal_50, sLocal_74, sLocal_76, 4f, -8f, -1, 0, fLocal_58, 1, 0, 0);
			iLocal_83 = unk_0xA5E11AF0A2B928C1();
			func_76(&iLocal_57);
			func_75();
		
			if (unk_0x7DE17ACDD8BA2642(uLocal_64[0]))
				unk_0xA81AA70A4D25E140(uLocal_64[0], 1, 1);
		
			iLocal_60 = iLocal_60 + 1;
			break;
	
		case 2:
			if (unk_0x7BB3D8F4F6310EB8(uLocal_50, sLocal_74, sLocal_76, 3))
			{
				value = unk_0xA5E11AF0A2B928C1() - iLocal_83;
				num2 = SYSTEM::TO_FLOAT(value) / SYSTEM::TO_FLOAT(iLocal_59);
				num3 = fLocal_58 - ((fLocal_58 - 0.161f) * num2);
				num3 = func_77(num3, 0.161f, fLocal_58);
				unk_0x52B9699AA37A4001(uLocal_50, sLocal_74, sLocal_76, num3);
				num4 = num2 - 0.12f;
				num4 = func_77(num4, 0f, 0.8f);
				unk7 = { func_74(uLocal_61, unk4, num4) };
				unk_0xC2E3C377D893C17A(uLocal_50, unk7, 0, 1, 0, 1);
			
				if (num3 == 0.161f)
				{
					unk_0x2718E9CC165A99F6(uLocal_50, 0);
					return true;
				}
			}
			break;
	
		case 3:
			func_76(&iLocal_57);
			func_75();
		
			if (unk_0x7DE17ACDD8BA2642(uLocal_64[0]))
				unk_0xA81AA70A4D25E140(uLocal_64[0], 1, 1);
		
			return true;
	}

	return false;
}

Vector3 func_74(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, float fParam6) // Position - 0x2DF7
{
	return ({ 1f - fParam6, 1f - fParam6, 1f - fParam6 } * uParam0) + ({ fParam6, fParam6, fParam6 } * uParam3);
}

void func_75() // Position - 0x2E12
{
	if (iLocal_72 != 0)
	{
		unk_0x5F0A993576888020(iLocal_72, 0);
		iLocal_72 = 0;
	}

	return;
}

void func_76(var uParam0) // Position - 0x2E2A
{
	if (unk_0xCE4AAA035282336C(*uParam0))
	{
		unk_0xBD91E7D4B770F97E(*uParam0, 0);
		unk_0x45533C09A6C9B409(uParam0);
	}

	return;
}

float func_77(float fParam0, float fParam1, float fParam2) // Position - 0x2E4A
{
	if (fParam0 > fParam2)
		return fParam2;
	else if (fParam0 < fParam1)
		return fParam1;

	return fParam0;
}

void func_78() // Position - 0x2E71
{
	float num;

	if (unk_0x7BB3D8F4F6310EB8(uLocal_50, sLocal_74, sLocal_76, 3))
	{
		num = unk_0x92377426879E21FF(uLocal_50, sLocal_74, sLocal_76);
	
		if (num < 0.383793f)
			func_75();
		else if (num < 0.612112f)
			func_79();
		else if (num < 1f)
			func_75();
	}
	else if (unk_0x7BB3D8F4F6310EB8(uLocal_50, sLocal_74, sLocal_77, 3))
	{
		num = unk_0x92377426879E21FF(uLocal_50, sLocal_74, sLocal_77);
	
		if (num < 0.1124f)
			func_75();
		else if (num < 0.5566f)
			func_79();
		else if (num < 0.7546f)
			func_75();
		else if (num < 0.9f)
			func_79();
		else if (num < 1f)
			func_75();
	}

	return;
}

void func_79() // Position - 0x2F32
{
	if (iLocal_72 == 0)
	{
		iLocal_72 = unk_0x785A44AA698F0E32(sLocal_73, uLocal_64[0], uLocal_78, uLocal_78, 1065353216, 0, 0, 0);
		unk_0x4B4638B68AA8A8EC(iLocal_72, 1f, 1f, 1f, 0);
		unk_0x5FA904CEF49601A7(iLocal_72, 0.2f);
	}

	return;
}

BOOL func_80(Vector3 vParam0, var uParam1, var uParam2, Vector3 vParam3, var uParam4, var uParam5) // Position - 0x2F72
{
	float num;
	float num2;
	float num3;
	float num4;
	float num5;

	num = unk_0xCE7425AF7D2A7207(unk_0x93E99A2DBCBA9CFA());
	num2 = func_77(num / 14f, 0f, 1f);
	num3 = SYSTEM::VDIST(vParam0, vParam3);
	num4 = func_77(30f - num3, 0f, 30f) / 30f;
	num5 = num2 * num4;
	return num5 > 0.25f;
}

BOOL func_81() // Position - 0x2FCB
{
	return unk_0x9DC9E896F189AAA5(unk_0xC1A5EC5C986B98AD(), -334.46515f, -93.421715f, 48.573284f, -332.2641f, -82.78552f, 45.810303f, 3f, 0, 1, 0) && !unk_0x9DC9E896F189AAA5(unk_0xC1A5EC5C986B98AD(), -329.1134f, -83.87273f, 45.79989f, -331.09372f, -88.05348f, 48.718784f, 3f, 0, 1, 0);
}

BOOL func_82(var uParam0, var uParam1, float fParam2) // Position - 0x302D
{
	float num;

	if (unk_0x7DE17ACDD8BA2642(uParam0) && unk_0x7DE17ACDD8BA2642(uParam1))
	{
		num = fParam2 * fParam2;
		return SYSTEM::VDIST2(unk_0x30BE8A934C020461(uParam0, 0), unk_0x30BE8A934C020461(uParam1, 0)) <= num;
	}

	return false;
}

BOOL func_83(int iParam0) // Position - 0x3069
{
	if (!func_84(uLocal_50, iParam0) && !func_84(uLocal_50, joaat("SCRIPT_TASK_SMART_FLEE_PED")))
	{
		func_76(&iLocal_57);
		unk_0xC6C9BF71106ABCAC(uLocal_50, unk_0xC1A5EC5C986B98AD(), 9999f, -1, 1, 0);
		return true;
	}

	return false;
}

BOOL func_84(var uParam0, int iParam1) // Position - 0x30AB
{
	int num;

	num = unk_0xF5F493B789EA063E(uParam0, iParam1);
	return num == 1 || num == 0;
}

void func_85(var uParam0, var uParam1, var uParam2) // Position - 0x30CB
{
	if (func_89(uParam0))
		func_86(33);
	else
		func_150();

	unk_0x10FC49B73AEEBE87();
	return;
}

void func_86(int iParam0) // Position - 0x30EF
{
	if (iParam0 == -1)
		iParam0 = func_29();

	if (iParam0 == -1)
		return;

	func_88(iParam0);
	unk_0x1A59C174B4130991(0);
	unk_0xB1BC77E1EAD07BAE(1);
	Global_113634 = 0;
	func_87();
	return;
}

void func_87() // Position - 0x3125
{
	if (!unk_0x66599E73DBA5A850(unk_0xC1A5EC5C986B98AD()))
	{
		if (unk_0x3C3D6D026CF7F51B(unk_0xC1A5EC5C986B98AD(), 0))
			unk_0x9C56520AE72AFDBF(unk_0x504B9BB48D41C264(unk_0x95DC39736F6748E3(unk_0xC1A5EC5C986B98AD(), 0)), 1);
	
		unk_0x598D91BBD045C1F3(unk_0xC1A5EC5C986B98AD(), 32, 0);
	}

	return;
}

void func_88(int iParam0) // Position - 0x3162
{
	Global_113637 = iParam0;
	return;
}

BOOL func_89(var uParam0, var uParam1, var uParam2) // Position - 0x3170
{
	if (func_95(uParam0, 33, 0, false, false))
		if (func_94(58))
			if (func_91())
				if (_IS_EXCLUSIVE_CONTENT_UNLOCKED())
					return true;

	return false;
}

BOOL _IS_EXCLUSIVE_CONTENT_UNLOCKED() // Position - 0x31A4
{
	var unk;

	if (Global_152523 == 2)
		return true;
	else if (Global_152523 == 3)
		return false;

	if (unk_0x7FFBE14C34D75E19())
	{
		if (unk_0x8BD41D5945F5762B())
		{
			if (unk_0x001B3EAD68D731CE())
			{
				unk_0xDD7756E2742E0F6D(joaat("SP_UNLOCK_EXCLUS_CONTENT"), &unk, -1);
				unk_0xECDAB41968FF21A8(&unk, 2);
				unk_0xECDAB41968FF21A8(&unk, 4);
				unk_0xECDAB41968FF21A8(&unk, 6);
				unk_0xECDAB41968FF21A8(&Global_25, 2);
				unk_0xECDAB41968FF21A8(&Global_25, 4);
				unk_0xECDAB41968FF21A8(&Global_25, 6);
				unk_0x3CC35ACFFC9C730E(joaat("SP_UNLOCK_EXCLUS_CONTENT"), unk, 1);
			
				if (unk_0x7D33DF1E1089E1D1())
				{
					unk = unk_0x516080EA609481E1(866);
					unk_0xECDAB41968FF21A8(&unk, 0);
					unk_0x705949B096008718(unk);
				}
			
				return true;
			}
		}
	}

	if (unk_0x7D33DF1E1089E1D1())
		if (IS_BIT_SET(unk_0x516080EA609481E1(866), 0))
			return true;

	return false;
}

BOOL func_91() // Position - 0x325C
{
	return func_92(func_93(), 5);
}

BOOL func_92(int iParam0, int iParam1) // Position - 0x326D
{
	if (iParam0 == -1)
		return false;

	return IS_BIT_SET(Global_113648.f_32751[iParam0], iParam1);
}

int func_93() // Position - 0x328D
{
	int num;

	num = unk_0x504B9BB48D41C264(unk_0xC1A5EC5C986B98AD());

	switch (num)
	{
		case joaat("Player_Zero"):
			return 21;
	
		case joaat("Player_One"):
			return 22;
	
		case joaat("Player_Two"):
			return 23;
	
		default:
		
	}

	return -1;
}

BOOL func_94(int iParam0) // Position - 0x32C8
{
	if (iParam0 == 63 || iParam0 == -1)
		return false;

	return IS_BIT_SET(Global_113648.f_18576[iParam0 /*6*/], 3);
}

BOOL func_95(var uParam0, var uParam1, var uParam2, int iParam3, int iParam4, BOOL bParam5, BOOL bParam6) // Position - 0x32F3
{
	BOOL flag;
	Vector3 vector;
	eCharacter i;
	Vector3 vector2;
	int num;

	if (!Global_152234)
		return false;

	if (iParam3 == -1)
		iParam3 = func_29();

	if (iParam3 == -1)
		return false;

	if (iParam3 == 31 || iParam3 == 32)
		if (!_IS_EXCLUSIVE_CONTENT_UNLOCKED())
			return false;

	uLocal_44 = { uParam0 };
	flag = false;

	if (!flag)
	{
		if (unk_0x48DC6A21D1CAD89C(unk_0x93E99A2DBCBA9CFA()) && !unk_0x66599E73DBA5A850(unk_0xC1A5EC5C986B98AD()))
		{
			vector = { unk_0x30BE8A934C020461(unk_0xC1A5EC5C986B98AD(), 1) };
		
			if (SYSTEM::VMAG2(unk_0x7A2C98D06C9C1956(unk_0xC1A5EC5C986B98AD())) > 1369f && !func_149())
				return false;
		}
	
		if (!Global_113648.f_9087)
			return false;
	
		if (_IS_MISSION_REPEAT_ACTIVE(false))
			return false;
	
		if (func_145())
			return false;
	
		if (func_144())
			return false;
	
		if (Global_113637 != -1)
			return false;
	
		if (func_22(_GET_CURRENT_PLAYER_CHARACTER()))
			if (func_137(100f, true) != -1)
				return false;
	
		if (unk_0x48DC6A21D1CAD89C(unk_0x93E99A2DBCBA9CFA()) && !bParam6)
			if (vector.f_2 - uLocal_44.f_2 > 50f)
				return false;
	
		if (!func_136(iParam3))
			return false;
	
		if (func_22(_GET_CURRENT_PLAYER_CHARACTER()))
			if (func_135(_GET_CURRENT_PLAYER_CHARACTER()) == 4 || func_135(_GET_CURRENT_PLAYER_CHARACTER()) == 5)
				return false;
	
		if (func_22(_GET_CURRENT_PLAYER_CHARACTER()))
			if (!func_134(iParam3, iParam4, 145))
				return false;
	
		if (!func_133(Global_113648.f_24997.f_43[iParam3]))
			return false;
	
		if (unk_0xA5E11AF0A2B928C1() - Global_113639 < 150000)
			if (iParam3 != 30)
				return false;
	
		if (func_131())
			return false;
	
		if (unk_0x5ABCFD3441B37CA6())
			return false;
	
		if (unk_0xA847A0F368810680())
			return false;
	
		if (!func_121(4))
			return false;
	
		if (!_CAN_ENTER_FREEROAM_STATE(5))
			return false;
	
		if (func_120(iParam3, iParam4) && !bParam5)
			return false;
	
		if (Global_3 && iParam3 != 10)
			return false;
	
		if (unk_0x4D3D95146FD3490D(unk_0x41AD4BF315E01D41(unk_0xC1A5EC5C986B98AD())))
			if (unk_0x41AD4BF315E01D41(unk_0xC1A5EC5C986B98AD()) == unk_0x9CE0235348AE4A4D(377.153f, -717.567f, 10.0536f) || unk_0x41AD4BF315E01D41(unk_0xC1A5EC5C986B98AD()) == unk_0x9CE0235348AE4A4D(320.9934f, 265.2515f, 82.1221f) || unk_0x41AD4BF315E01D41(unk_0xC1A5EC5C986B98AD()) == unk_0x9CE0235348AE4A4D(-1425.5645f, -244.3f, 15.8053f))
				return false;
	
		if (iParam3 == 9 && iParam4 == 2 || iParam4 == 5 && !func_120(0, 0))
			return false;
	
		if (Global_32310)
			return false;
	
		if (func_136(30) && !func_120(30, 0))
			if (iParam3 != 30)
				if (SYSTEM::VDIST2(vector, -61.2745f, -1100.4675f, 25.3752f) < 176400f)
					return false;
	
		if (func_22(_GET_CURRENT_PLAYER_CHARACTER()))
		{
			for (i = CHAR_MICHAEL; i < CHAR_MULTIPLAYER; i = i + 1)
			{
				vector2 = { Global_113648.f_2365.f_539.f_2300[i /*3*/] };
				num = Global_113648.f_2365.f_539.f_2296[i];
			
				if (func_119(num))
					if (func_97(i))
						if (!func_96(vector2, 0f, 0f, 0f, false))
							if (SYSTEM::VDIST2(unk_0x30BE8A934C020461(unk_0xC1A5EC5C986B98AD(), 0), vector2) < 210f * 210f)
								if (_GET_CURRENT_PLAYER_CHARACTER() != i)
									return false;
			}
		}
	}

	return true;
}

BOOL func_96(float fParam0, var uParam1, var uParam2, float fParam3, float fParam4, float fParam5, BOOL bParam6) // Position - 0x368D
{
	if (bParam6)
		return fParam0 == fParam3 && fParam0.f_1 == fParam3.f_1;

	return fParam0 == fParam3 && fParam0.f_1 == fParam3.f_1 && fParam0.f_2 == fParam3.f_2;
}

BOOL func_97(eCharacter echParam0) // Position - 0x36D4
{
	int num;

	num = Global_113648.f_2365.f_539.f_2296[echParam0];
	return func_98(num);
}

BOOL func_98(int iParam0) // Position - 0x36F5
{
	return func_99(iParam0, 1);
}

int func_99(int iParam0, int iParam1) // Position - 0x3704
{
	var unk;
	var unk2;
	int num;
	int num2;
	int num3;
	int num4;

	if (!func_119(iParam0))
		return 0;

	func_100(iParam0, &unk, &unk2, &num, &num2, &num3, &num4);

	if (num4 > 0 || num3 > 0 || num2 > 0 || num >= iParam1)
		return 1;

	return 0;
}

void func_100(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6) // Position - 0x3757
{
	func_101(func_112(), iParam0, uParam1, uParam2, uParam3, uParam4, uParam5, uParam6);
	return;
}

void func_101(int iParam0, int iParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7) // Position - 0x3775
{
	int num;
	int num2;
	int num3;
	int num4;
	int num5;
	int num6;
	int num7;
	int num8;

	if (func_111(iParam0, iParam1))
	{
		num = func_110(iParam1);
		num2 = func_108(iParam0);
		num3 = func_108(iParam0) - func_108(iParam1);
		num4 = func_110(iParam0) - func_110(iParam1);
		num5 = func_107(iParam0) - func_107(iParam1);
		num6 = func_106(iParam0) - func_106(iParam1);
		num7 = func_105(iParam0) - func_105(iParam1);
		num8 = func_104(iParam0) - func_104(iParam1);
	}
	else
	{
		num = func_110(iParam0);
		num2 = func_108(iParam1);
		num3 = func_108(iParam1) - func_108(iParam0);
		num4 = func_110(iParam1) - func_110(iParam0);
		num5 = func_107(iParam1) - func_107(iParam0);
		num6 = func_106(iParam1) - func_106(iParam0);
		num7 = func_105(iParam1) - func_105(iParam0);
		num8 = func_104(iParam1) - func_104(iParam0);
	}

	while (num8 < 0)
	{
		num8 = num8 + 60;
		num7 = num7 - 1;
	}

	while (num8 > 59)
	{
		num8 = num8 - 60;
		num7 = num7 + 1;
	}

	while (num7 < 0)
	{
		num7 = num7 + 60;
		num6 = num6 - 1;
	}

	while (num7 > 59)
	{
		num7 = num7 - 60;
		num6 = num6 + 1;
	}

	while (num6 < 0)
	{
		num6 = num6 + 24;
		num5 = num5 - 1;
	}

	while (num6 > 23)
	{
		num6 = num6 - 24;
		num5 = num5 + 1;
	}

	while (num5 < 0)
	{
		while (num4 < 0)
		{
			num4 = num4 + 12;
			num3 = num3 - 1;
		}
	
		num5 = num5 + func_103(num, num2);
		num4 = num4 - 1;
		num = SYSTEM::ROUND(func_102(SYSTEM::TO_FLOAT(num + 1), 0f, 12f));
	}

	while (num4 < 0)
	{
		num4 = num4 + 12;
		num3 = num3 - 1;
	}

	while (num4 > 12)
	{
		num4 = num4 - 12;
		num3 = num3 + 1;
	}

	*uParam2 = num8;
	*uParam3 = num7;
	*uParam4 = num6;
	*uParam5 = num5;
	*uParam6 = num4;
	*uParam7 = num3;
	return;
}

float func_102(float fParam0, float fParam1, float fParam2) // Position - 0x3976
{
	float num;

	if (fParam1 == fParam2)
		return fParam1;

	num = fParam2 - fParam1;
	fParam0 = fParam0 - ((float)SYSTEM::ROUND((fParam0 - fParam1) / num) * num);

	if (fParam0 < fParam1)
		fParam0 = fParam0 + num;

	return fParam0;
}

int func_103(int iParam0, int iParam1) // Position - 0x39B8
{
	if (iParam1 < 0)
		iParam1 = 0;

	switch (iParam0)
	{
		case 0:
		case 2:
		case 4:
		case 6:
		case 7:
		case 9:
		case 11:
			return 31;
	
		case 3:
		case 5:
		case 8:
		case 10:
			return 30;
	
		case 1:
			if (iParam1 % 4 == 0)
				if (iParam1 % 100 != 0)
					return 29;
				else if (iParam1 % 400 == 0)
					return 29;
		
			return 28;
	}

	return 30;
}

int func_104(int iParam0) // Position - 0x3A5A
{
	return SYSTEM::SHIFT_RIGHT(iParam0, 20) & 63;
}

int func_105(int iParam0) // Position - 0x3A6D
{
	return SYSTEM::SHIFT_RIGHT(iParam0, 14) & 63;
}

int func_106(int iParam0) // Position - 0x3A80
{
	return SYSTEM::SHIFT_RIGHT(iParam0, 9) & 31;
}

int func_107(int iParam0) // Position - 0x3A93
{
	return SYSTEM::SHIFT_RIGHT(iParam0, 4) & 31;
}

int func_108(int iParam0) // Position - 0x3AA5
{
	return (SYSTEM::SHIFT_RIGHT(iParam0, 26) & 31 * IS_BIT_SET(iParam0, 31) ? -1 : 1) + 2011;
}

var func_109(BOOL bParam0, var uParam1, var uParam2) // Position - 0x3AC7
{
	if (bParam0)
		return uParam1;

	return uParam2;
}

int func_110(int iParam0) // Position - 0x3ADE
{
	return iParam0 & 15;
}

BOOL func_111(int iParam0, int iParam1) // Position - 0x3AEB
{
	int num;
	int num2;

	if (!func_119(iParam1) || !func_119(iParam0))
		return 1;

	num = func_108(iParam0);
	num2 = func_108(iParam1);

	if (num > num2)
		return 1;
	else if (num < num2)
		return 0;

	num = func_110(iParam0);
	num2 = func_110(iParam1);

	if (num > num2)
		return 1;
	else if (num < num2)
		return 0;

	num = func_107(iParam0);
	num2 = func_107(iParam1);

	if (num > num2)
		return 1;
	else if (num < num2)
		return 0;

	num = func_106(iParam0);
	num2 = func_106(iParam1);

	if (num > num2)
		return 1;
	else if (num < num2)
		return 0;

	num = func_105(iParam0);
	num2 = func_105(iParam1);

	if (num > num2)
		return 1;
	else if (num < num2)
		return 0;

	num = func_104(iParam0);
	num2 = func_104(iParam1);

	if (num > num2)
		return 1;

	return 0;
}

int func_112() // Position - 0x3BF7
{
	var unk;

	func_118(&unk, unk_0x731F95B6458DCF80());
	func_117(&unk, unk_0x77BBAAED3E25322C());
	func_116(&unk, unk_0x30DFE1FFD2CC7420());
	func_115(&unk, unk_0x8C0F17CAC308A14B());
	func_114(&unk, unk_0x61117764C67882B7());
	func_113(&unk, unk_0x367F557725B53815());
	return unk;
}

void func_113(var uParam0, int iParam1) // Position - 0x3C3D
{
	if (iParam1 <= 0)
		return;

	if (iParam1 > 2043 || iParam1 < 1979)
		return;

	*uParam0 = *uParam0 - *uParam0 & 2080374784;

	if (iParam1 < 2011)
	{
		*uParam0 = *uParam0 || SYSTEM::SHIFT_LEFT(2011 - iParam1, 26);
		*uParam0 = *uParam0 | -2147483648;
	}
	else
	{
		*uParam0 = *uParam0 || SYSTEM::SHIFT_LEFT(iParam1 - 2011, 26);
		*uParam0 = *uParam0 - *uParam0 & -2147483648;
	}

	return;
}

void func_114(var uParam0, int iParam1) // Position - 0x3CC3
{
	if (iParam1 < 0 || iParam1 > 11)
		return;

	*uParam0 = *uParam0 - *uParam0 & 15;
	*uParam0 = *uParam0 || iParam1;
	return;
}

void func_115(var uParam0, int iParam1) // Position - 0x3CF6
{
	int num;
	int num2;

	num = func_110(*uParam0);
	num2 = func_108(*uParam0);

	if (iParam1 < 1 || iParam1 > func_103(num, num2))
		return;

	*uParam0 = *uParam0 - *uParam0 & 496;
	*uParam0 = *uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 4);
	return;
}

void func_116(var uParam0, int iParam1) // Position - 0x3D47
{
	if (iParam1 < 0 || iParam1 > 24)
		return;

	*uParam0 = *uParam0 - *uParam0 & 15872;
	*uParam0 = *uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 9);
	return;
}

void func_117(var uParam0, int iParam1) // Position - 0x3D81
{
	if (iParam1 < 0 || iParam1 >= 60)
		return;

	*uParam0 = *uParam0 - *uParam0 & 1032192;
	*uParam0 = *uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 14);
	return;
}

void func_118(var uParam0, int iParam1) // Position - 0x3DBC
{
	if (iParam1 < 0 || iParam1 >= 60)
		return;

	*uParam0 = *uParam0 - *uParam0 & 66060288;
	*uParam0 = *uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 20);
	return;
}

BOOL func_119(int iParam0) // Position - 0x3DF8
{
	int num;
	int num2;
	int num3;
	int num4;
	int num5;
	int num6;

	if (iParam0 == -15)
		return false;

	num = func_104(iParam0);

	if (num < 0 || num >= 60)
		return false;

	num2 = func_105(iParam0);

	if (num2 < 0 || num2 >= 60)
		return false;

	num3 = func_106(iParam0);

	if (num3 < 0 || num3 > 23)
		return false;

	num4 = func_108(iParam0);

	if (num4 <= 0 || num4 > 2043 || num4 < 1979)
		return false;

	num5 = func_110(iParam0);

	if (num5 < 0 || num5 > 11)
		return false;

	num6 = func_107(iParam0);

	if (num6 < 1 || num6 > func_103(num5, num4))
		return false;

	return true;
}

BOOL func_120(int iParam0, int iParam1) // Position - 0x3ED4
{
	if (IS_BIT_SET(Global_113648.f_24997.f_8[iParam0], iParam1))
		return true;

	return false;
}

BOOL func_121(int iParam0) // Position - 0x3EF4
{
	eCharacter character;

	if (unk_0x48DC6A21D1CAD89C(unk_0x93E99A2DBCBA9CFA()))
	{
		if (unk_0x7DE17ACDD8BA2642(unk_0xC1A5EC5C986B98AD()))
		{
			if (!unk_0x66599E73DBA5A850(unk_0xC1A5EC5C986B98AD()))
			{
				character = _GET_CURRENT_PLAYER_CHARACTER();
			
				if (!func_22(character))
					return false;
			
				switch (iParam0)
				{
					case 9:
					case 0:
						if (!unk_0xE2A83DCD3E79D8D3(unk_0x93E99A2DBCBA9CFA()) || unk_0xDA70CA6A0D1738D3(unk_0xC1A5EC5C986B98AD()) || unk_0x5CD470B5BDDAC029(unk_0xC1A5EC5C986B98AD()) || unk_0x48A4D45B3B4CEFFD(unk_0xC1A5EC5C986B98AD()) || unk_0x854821B2A72B2E98(unk_0xC1A5EC5C986B98AD()) || unk_0xF41A4983A3778F18(unk_0x93E99A2DBCBA9CFA(), 1) || unk_0x5150E13C3DAAE892(unk_0x93E99A2DBCBA9CFA()) || unk_0xB8C39D031C377E33(unk_0xC1A5EC5C986B98AD(), 0) || func_130() || Global_112695 || Global_32166 || func_129() || func_128(8, -1) || func_127() || func_126() || func_125() || func_124() || Global_113648.f_7690.f_919[character] == 5)
							return false;
						break;
				
					case 1:
						if (unk_0xF41A4983A3778F18(unk_0x93E99A2DBCBA9CFA(), 1) || func_130() || Global_32166 || func_129() || func_128(8, -1) || func_125() || func_127() || func_126() || func_124() || Global_113648.f_7690.f_919[character] == 5)
							return false;
						break;
				
					case 2:
						if (!unk_0xE2A83DCD3E79D8D3(unk_0x93E99A2DBCBA9CFA()) || unk_0xDA70CA6A0D1738D3(unk_0xC1A5EC5C986B98AD()) || unk_0x5CD470B5BDDAC029(unk_0xC1A5EC5C986B98AD()) || unk_0x48A4D45B3B4CEFFD(unk_0xC1A5EC5C986B98AD()) || unk_0x854821B2A72B2E98(unk_0xC1A5EC5C986B98AD()) || unk_0xF41A4983A3778F18(unk_0x93E99A2DBCBA9CFA(), 1) || unk_0x5150E13C3DAAE892(unk_0x93E99A2DBCBA9CFA()) || unk_0xB8C39D031C377E33(unk_0xC1A5EC5C986B98AD(), 0) || func_130() || Global_112695 || Global_32166 || func_129() || func_128(8, -1) || func_125() || func_127() || func_126() || func_124() || Global_113648.f_7690.f_919[character] == 5 || Global_43804 != -1)
							return false;
						break;
				
					case 3:
						if (unk_0x48A4D45B3B4CEFFD(unk_0xC1A5EC5C986B98AD()) || unk_0x854821B2A72B2E98(unk_0xC1A5EC5C986B98AD()) || unk_0xF41A4983A3778F18(unk_0x93E99A2DBCBA9CFA(), 1) || unk_0xB8C39D031C377E33(unk_0xC1A5EC5C986B98AD(), 0) || func_130() || Global_112695 || Global_32166 || func_129() || func_128(8, -1) || func_127() || func_126() || func_124() || Global_113648.f_7690.f_919[character] == 5)
							return false;
						break;
				
					case 4:
						if (func_130() || unk_0x83C5A442AAD15BAF(unk_0x93E99A2DBCBA9CFA()) > 0 || func_128(8, -1) || func_124() || func_123() || Global_113648.f_7690.f_919[character] == 5)
							return false;
						break;
				
					case 5:
						if (func_128(8, -1) || func_127() || func_126() || func_123() || func_122())
							return false;
					
						if (unk_0xB53553DC4AAC7D8A() && unk_0x728FB8B438DDCAB6() != 3 && unk_0x19B3485E7C9D734D() < 8)
							return false;
						break;
				
					case 6:
						if (unk_0x7DE17ACDD8BA2642(unk_0xC1A5EC5C986B98AD()))
							if (unk_0xB8C39D031C377E33(unk_0xC1A5EC5C986B98AD(), 0) || unk_0x83C5A442AAD15BAF(unk_0x93E99A2DBCBA9CFA()) > 0 || unk_0xDA70CA6A0D1738D3(unk_0xC1A5EC5C986B98AD()) || unk_0x48A4D45B3B4CEFFD(unk_0xC1A5EC5C986B98AD()) || unk_0x854821B2A72B2E98(unk_0xC1A5EC5C986B98AD()) || unk_0xF41A4983A3778F18(unk_0x93E99A2DBCBA9CFA(), 1) || unk_0x5150E13C3DAAE892(unk_0x93E99A2DBCBA9CFA()) || func_130() || Global_32166 || func_129() || func_128(8, -1) || func_126() || func_125() || func_124() || Global_113648.f_7690.f_919[character] == 5)
								return false;
						break;
				
					case 7:
						if (unk_0xB8C39D031C377E33(unk_0xC1A5EC5C986B98AD(), 0) || !unk_0x1B82EF141CC65934(unk_0x93E99A2DBCBA9CFA()) || !unk_0xE2A83DCD3E79D8D3(unk_0x93E99A2DBCBA9CFA()) || !unk_0x35DF833D93BCC488() || unk_0xDA70CA6A0D1738D3(unk_0xC1A5EC5C986B98AD()) || unk_0x48A4D45B3B4CEFFD(unk_0xC1A5EC5C986B98AD()) || unk_0x854821B2A72B2E98(unk_0xC1A5EC5C986B98AD()) || unk_0xF41A4983A3778F18(unk_0x93E99A2DBCBA9CFA(), 1) || func_130() || func_126() || Global_112695 || Global_32166 || func_129() || Global_44446 || func_128(8, -1) || func_125() || func_123() || func_124() || Global_113648.f_7690.f_919[character] == 5)
							return false;
						break;
				
					case 8:
						if (unk_0xB8C39D031C377E33(unk_0xC1A5EC5C986B98AD(), 0) || !unk_0x1B82EF141CC65934(unk_0x93E99A2DBCBA9CFA()) || !unk_0xE2A83DCD3E79D8D3(unk_0x93E99A2DBCBA9CFA()) || !unk_0x35DF833D93BCC488() || unk_0xF356C80F3E8D2812(unk_0x93E99A2DBCBA9CFA(), 0) || unk_0xDA70CA6A0D1738D3(unk_0xC1A5EC5C986B98AD()) || unk_0x3C3D6D026CF7F51B(unk_0xC1A5EC5C986B98AD(), 1) || unk_0x48A4D45B3B4CEFFD(unk_0xC1A5EC5C986B98AD()) || unk_0x854821B2A72B2E98(unk_0xC1A5EC5C986B98AD()) || unk_0x279D0BCF8F708D74(unk_0xC1A5EC5C986B98AD()) || unk_0xF41A4983A3778F18(unk_0x93E99A2DBCBA9CFA(), 1) || unk_0x5150E13C3DAAE892(unk_0x93E99A2DBCBA9CFA()) || func_130() || Global_112695 || Global_32166 || func_129() || func_128(8, -1) || func_125() || func_123() || func_127() || func_126() || func_124())
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

BOOL func_122() // Position - 0x4613
{
	return Global_100720.f_1;
}

BOOL func_123() // Position - 0x4621
{
	if (Global_97603 != -1)
		return IS_BIT_SET(Global_91469[Global_97603 /*34*/].f_15, 13);

	return false;
}

BOOL func_124() // Position - 0x4644
{
	if (unk_0x24B651D85CCE5EB4(joaat("player_timetable_scene")) > 0)
		return true;

	return false;
}

BOOL func_125() // Position - 0x465E
{
	if (Global_78819)
		return true;
	else if (Global_63356 && !Global_63362)
		return true;

	return false;
}

BOOL func_126() // Position - 0x4688
{
	return Global_100733.f_388 > 0;
}

BOOL func_127() // Position - 0x4699
{
	return Global_100733.f_387 > 0;
}

BOOL func_128(int iParam0, int iParam1) // Position - 0x46AA
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

BOOL func_129() // Position - 0x46E2
{
	return Global_1575060;
}

BOOL func_130() // Position - 0x46EE
{
	if (!unk_0xA26A9A07F761D8F8())
		return Global_98159.f_44 == 1;

	return false;
}

BOOL func_131() // Position - 0x470A
{
	_UPDATE_CURRENT_PLAYER_CHARACTER();

	if (Global_9058[Global_20383 /*2811*/][0 /*281*/].f_259 == 2)
		return true;

	return false;
}

void _UPDATE_CURRENT_PLAYER_CHARACTER() // Position - 0x4732
{
	if (func_21(14))
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

BOOL func_133(int iParam0) // Position - 0x47D4
{
	return func_111(func_112(), iParam0);
}

BOOL func_134(int iParam0, int iParam1, eCharacter echParam2) // Position - 0x47E6
{
	BOOL num;
	eCharacter character;

	num = 0;
	character = _GET_CURRENT_PLAYER_CHARACTER();

	if (echParam2 != 145 && echParam2 == 0 || echParam2 == 1 || echParam2 == 2)
		character = echParam2;

	switch (iParam0)
	{
		case 18:
			if (character == CHAR_TREVOR)
				num = 1;
			break;
	
		case 19:
			if (character != CHAR_TREVOR)
				num = 1;
			break;
	
		case 20:
			if (character != CHAR_FRANKLIN)
				num = 1;
			break;
	
		case 28:
			if (character != CHAR_TREVOR)
				num = 1;
			break;
	
		case 13:
			if (character == CHAR_MICHAEL)
				if (iParam1 == 2)
					num = 0;
				else
					num = 1;
			else
				num = 1;
			break;
	
		case 22:
			if (iParam1 == 2 || character != CHAR_TREVOR)
				num = 1;
			break;
	
		case 30:
			if (character != CHAR_TREVOR)
				num = 1;
			break;
	
		default:
			num = 1;
			break;
	}

	return num;
}

int func_135(eCharacter echParam0) // Position - 0x48CA
{
	if (!func_22(echParam0))
		return 7;

	return Global_113648.f_7690.f_919[echParam0];
}

BOOL func_136(int iParam0) // Position - 0x48EE
{
	int num;
	BOOL flag;

	if (iParam0 == 31 || iParam0 == 32)
		if (!_IS_EXCLUSIVE_CONTENT_UNLOCKED())
			return false;

	num = iParam0;

	if (num < 31)
	{
		flag = IS_BIT_SET(Global_113648.f_24997, num);
	}
	else
	{
		num = num - 31;
		flag = IS_BIT_SET(Global_113648.f_24997.f_1, num);
	}

	return flag;
}

int func_137(float fParam0, BOOL bParam1) // Position - 0x4946
{
	var unk;
	int num;
	int num2;
	float num3;
	float num4;
	int num5;
	int i;
	BOOL flag;

	num2 = -1;
	num3 = fParam0;

	if (unk_0x48DC6A21D1CAD89C(unk_0x93E99A2DBCBA9CFA()))
	{
		if (func_22(_GET_CURRENT_PLAYER_CHARACTER()))
		{
			num5 = func_19();
			i = 0;
		
			for (i = 0; i < 63; i = i + 1)
			{
				num = i;
			
				if (IS_BIT_SET(Global_113648.f_18576[num /*6*/], 2) && !IS_BIT_SET(Global_113648.f_18576[num /*6*/], 3))
				{
					func_138(num, &unk);
					num4 = unk_0x2E496FE654DA4166(unk_0x30BE8A934C020461(unk_0xC1A5EC5C986B98AD(), 0), unk.f_6, 1);
				
					if (num4 < num3)
					{
						flag = true;
					
						if (bParam1)
							if (num5 != unk.f_26)
								flag = false;
					
						if (flag)
						{
							num2 = num;
							num3 = num4;
						}
					}
				}
			}
		}
	}

	return num2;
}

void func_138(int iParam0, var uParam1) // Position - 0x49F7
{
	switch (iParam0)
	{
		case 0:
			func_139(uParam1, "Abigail1", func_141(iParam0), 0, 0, 4, -1604.668f, 5239.1f, 3.01f, 66, "", 109, 0, "ambient_Diving", 0, 0, 1, 4, 1, 0, 2359, func_140(iParam0), 1, 0);
			break;
	
		case 1:
			func_139(uParam1, "Abigail2", func_141(iParam0), 0, 0, 4, -1592.84f, 5214.04f, 3.01f, 400, "", 110, 0, "", 0, 0, -1, 4, 1, 0, 2359, func_140(iParam0), 1, 0);
			break;
	
		case 2:
			func_139(uParam1, "Barry1", func_141(iParam0), 0, 1, 4, 190.26f, -956.35f, 29.63f, 381, "", 74, 0, "", 0, 1, -1, 4, 1, 0, 2359, func_140(iParam0), 1, 0);
			break;
	
		case 3:
			func_139(uParam1, "Barry2", func_141(iParam0), 0, 1, 4, 190.26f, -956.35f, 29.63f, 381, "", -1, 0, "", 0, 1, -1, 4, 4, 0, 2359, func_140(iParam0), 1, 1);
			break;
	
		case 4:
			func_139(uParam1, "Barry3", func_141(iParam0), 0, 1, 4, 414f, -761f, 29f, 381, "", -1, 0, "", 164, 1, -1, 0, 2, 0, 2359, func_140(iParam0), 0, 0);
			break;
	
		case 5:
			func_139(uParam1, "Barry3A", func_141(iParam0), 1, 1, 0, 1199.27f, -1255.63f, 34.23f, 381, "BARSTASH" /*Areas where you can find vehicles with a hidden stash have been marked on the map. Collect these vehicles for Barry.*/, 84, 0, "", 166, 0, 7, 4, 2, 0, 2359, func_140(iParam0), 0, 1);
			break;
	
		case 6:
			func_139(uParam1, "Barry3C", func_141(iParam0), 3, 1, 0, -468.9f, -1713.06f, 18.21f, 381, "", 84, 0, "", 166, 0, 7, 4, 2, 0, 2359, func_140(iParam0), 0, 1);
			break;
	
		case 7:
			func_139(uParam1, "Barry4", func_141(iParam0), 0, 1, 4, 237.65f, -385.41f, 44.4f, 381, "", 85, 0, "postRC_Barry4", 0, 0, -1, 4, 2, 800, 2000, func_140(iParam0), 0, 0);
			break;
	
		case 8:
			func_139(uParam1, "Dreyfuss1", func_141(iParam0), 0, 2, 4, -1458.97f, 485.99f, 115.38f, 66, "LETTERS_HINT" /*The killer's identity and location have been revealed.*/, 106, 0, "", 0, 0, -1, 4, 2, 0, 2359, func_140(iParam0), 0, 0);
			break;
	
		case 9:
			func_139(uParam1, "Epsilon1", func_141(iParam0), 0, 3, 4, -1622.89f, 4204.87f, 83.3f, 66, "", 86, 0, "", 0, 1, 10, 4, 1, 0, 2359, func_140(iParam0), 0, 0);
			break;
	
		case 10:
			func_139(uParam1, "Epsilon2", func_141(iParam0), 0, 3, 4, 242.7f, 362.7f, 104.74f, 206, "", 87, 16, "", 0, 0, 11, 4, 1, 0, 2359, func_140(iParam0), 1, 0);
			break;
	
		case 11:
			func_139(uParam1, "Epsilon3", func_141(iParam0), 0, 3, 4, 1835.53f, 4705.86f, 38.1f, 206, "", 88, 16, "epsCars", 0, 0, 12, 4, 1, 0, 2359, func_140(iParam0), 0, 0);
			break;
	
		case 12:
			func_139(uParam1, "Epsilon4", func_141(iParam0), 0, 3, 4, 1826.13f, 4698.88f, 38.92f, 206, "", 90, 16, "postRC_Epsilon4", 0, 0, 13, 4, 1, 0, 2359, func_140(iParam0), 0, 0);
			break;
	
		case 13:
			func_139(uParam1, "Epsilon5", func_141(iParam0), 0, 3, 4, 637.02f, 119.7093f, 89.5f, 206, "", 89, 16, "epsRobes", 0, 0, 14, 4, 1, 0, 2359, func_140(iParam0), 1, 0);
			break;
	
		case 14:
			func_139(uParam1, "Epsilon6", func_141(iParam0), 0, 3, 4, -2892.93f, 3192.37f, 11.66f, 206, "", 93, 0, "", 0, 0, 15, 4, 1, 0, 2359, func_140(iParam0), 0, 1);
			break;
	
		case 15:
			func_139(uParam1, "Epsilon7", func_141(iParam0), 0, 3, 4, 524.43f, 3079.82f, 39.48f, 206, "", -1, 16, "epsDesert", 0, 0, 16, 4, 1, 0, 2359, func_140(iParam0), 0, 0);
			break;
	
		case 16:
			func_139(uParam1, "Epsilon8", func_141(iParam0), 0, 3, 4, -697.75f, 45.38f, 43.03f, 206, "", 94, 16, "epsilonTract", 0, 0, -1, 4, 1, 0, 2359, func_140(iParam0), 1, 0);
			break;
	
		case 17:
			func_139(uParam1, "Extreme1", func_141(iParam0), 0, 4, 4, -188.22f, 1296.1f, 302.86f, 66, "", -1, 0, "", 4, 1, 18, 4, 2, 0, 2359, func_140(iParam0), 0, 1);
			break;
	
		case 18:
			func_139(uParam1, "Extreme2", func_141(iParam0), 0, 4, 4, -954.19f, -2760.05f, 14.64f, 382, "", 96, 0, "", 171, 0, 19, 4, 2, 0, 2359, func_140(iParam0), 0, 1);
			break;
	
		case 19:
			func_139(uParam1, "Extreme3", func_141(iParam0), 0, 4, 4, -63.8f, -809.5f, 321.8f, 382, "", 97, 0, "", 0, 0, 20, 4, 2, 0, 2359, func_140(iParam0), 0, 1);
			break;
	
		case 20:
			func_139(uParam1, "Extreme4", func_141(iParam0), 0, 4, 4, 1731.41f, 96.96f, 170.39f, 382, "", 98, 16, "", 0, 0, -1, 4, 2, 0, 2359, func_140(iParam0), 0, 0);
			break;
	
		case 21:
			func_139(uParam1, "Fanatic1", func_141(iParam0), 0, 5, 4, -1877.82f, -440.649f, 45.05f, 405, "", 74, 0, "", 0, 1, -1, 4, 1, 700, 2000, func_140(iParam0), 1, 0);
			break;
	
		case 22:
			func_139(uParam1, "Fanatic2", func_141(iParam0), 0, 5, 4, 809.66f, 1279.76f, 360.49f, 405, "", -1, 0, "", 0, 1, -1, 4, 4, 700, 2000, func_140(iParam0), 1, 0);
			break;
	
		case 23:
			func_139(uParam1, "Fanatic3", func_141(iParam0), 0, 5, 4, -915.6f, 6139.2f, 5.5f, 405, "", -1, 0, "", 0, 1, -1, 4, 2, 700, 2000, func_140(iParam0), 0, 1);
			break;
	
		case 24:
			func_139(uParam1, "Hao1", func_141(iParam0), 0, 6, 4, -72.29f, -1260.63f, 28.14f, 66, "", -1, 0, "controller_Races", 13, 1, -1, 4, 2, 2000, 500, func_140(iParam0), 0, 1);
			break;
	
		case 25:
			func_139(uParam1, "Hunting1", func_141(iParam0), 0, 7, 4, 1804.32f, 3931.33f, 32.82f, 66, "", -1, 0, "", 174, 1, 26, 4, 4, 0, 2359, func_140(iParam0), 0, 1);
			break;
	
		case 26:
			func_139(uParam1, "Hunting2", func_141(iParam0), 0, 7, 4, -684.17f, 5839.16f, 16.09f, 384, "", 99, 0, "", 7, 0, -1, 4, 4, 0, 2359, func_140(iParam0), 0, 1);
			break;
	
		case 27:
			func_139(uParam1, "Josh1", func_141(iParam0), 0, 8, 4, -1104.93f, 291.25f, 64.3f, 66, "", -1, 0, "forSaleSigns", 0, 1, 28, 4, 4, 0, 2359, func_140(iParam0), 1, 0);
			break;
	
		case 28:
			func_139(uParam1, "Josh2", func_141(iParam0), 0, 8, 4, 565.39f, -1772.88f, 29.77f, 385, "", 105, 0, "", 0, 0, 29, 4, 4, 0, 2359, func_140(iParam0), 1, 1);
			break;
	
		case 29:
			func_139(uParam1, "Josh3", func_141(iParam0), 0, 8, 4, 565.39f, -1772.88f, 29.77f, 385, "", -1, 16, "", 0, 0, 30, 4, 4, 0, 2359, func_140(iParam0), 1, 1);
			break;
	
		case 30:
			func_139(uParam1, "Josh4", func_141(iParam0), 0, 8, 4, -1104.93f, 291.25f, 64.3f, 385, "", -1, 36, "", 0, 0, -1, 4, 4, 0, 2359, func_140(iParam0), 1, 0);
			break;
	
		case 31:
			func_139(uParam1, "Maude1", func_141(iParam0), 0, 9, 4, 2726.1f, 4145f, 44.3f, 66, "", -1, 0, "BailBond_Launcher", 0, 1, -1, 4, 4, 0, 2359, func_140(iParam0), 0, 1);
			break;
	
		case 32:
			func_139(uParam1, "Minute1", func_141(iParam0), 0, 10, 4, 327.85f, 3405.7f, 35.73f, 66, "", -1, 0, "", 0, 1, 33, 4, 4, 0, 2359, func_140(iParam0), 0, 1);
			break;
	
		case 33:
			func_139(uParam1, "Minute2", func_141(iParam0), 0, 10, 4, 18f, 4527f, 105f, 386, "", -1, 10, "", 0, 0, 34, 4, 4, 0, 2359, func_140(iParam0), 0, 1);
			break;
	
		case 34:
			func_139(uParam1, "Minute3", func_141(iParam0), 0, 10, 4, -303.82f, 6211.29f, 31.05f, 386, "", -1, 10, "", 0, 0, -1, 4, 4, 0, 2359, func_140(iParam0), 0, 1);
			break;
	
		case 35:
			func_139(uParam1, "MrsPhilips1", func_141(iParam0), 0, 11, 4, 1972.59f, 3816.43f, 32.42f, 66, "", -1, 0, "ambient_MrsPhilips", 0, 1, -1, 4, 4, 0, 2359, func_140(iParam0), 0, 0);
			break;
	
		case 36:
			func_139(uParam1, "MrsPhilips2", func_141(iParam0), 0, 11, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 0, 1, -1, 4, 4, 0, 2359, func_140(iParam0), 0, 0);
			break;
	
		case 37:
			func_139(uParam1, "Nigel1", func_141(iParam0), 0, 12, 4, -1097.16f, 790.01f, 164.52f, 66, "", -1, 0, "", 177, 1, -1, 1, 4, 0, 2359, func_140(iParam0), 1, 0);
			break;
	
		case 38:
			func_139(uParam1, "Nigel1A", func_141(iParam0), 0, 12, 1, -558.65f, 284.49f, 90.86f, 149, "NIGITEMS" /*Areas where you can find celebrity items have been marked on the map. Steal these items for Nigel and Mrs. Thornhill.*/, 100, 0, "", 0, 0, 42, 4, 4, 0, 2359, func_140(iParam0), 1, 1);
			break;
	
		case 39:
			func_139(uParam1, "Nigel1B", func_141(iParam0), 0, 12, 1, -1034.15f, 366.08f, 80.11f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_140(iParam0), 1, 1);
			break;
	
		case 40:
			func_139(uParam1, "Nigel1C", func_141(iParam0), 0, 12, 1, -623.91f, -266.17f, 37.76f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_140(iParam0), 1, 1);
			break;
	
		case 41:
			func_139(uParam1, "Nigel1D", func_141(iParam0), 0, 12, 1, -1096.85f, 67.68f, 52.95f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_140(iParam0), 1, 1);
			break;
	
		case 42:
			func_139(uParam1, "Nigel2", func_141(iParam0), 0, 12, 4, -1310.7f, -640.22f, 26.54f, 149, "", -1, 8, "", 0, 0, 43, 4, 4, 0, 2359, func_140(iParam0), 1, 1);
			break;
	
		case 43:
			func_139(uParam1, "Nigel3", func_141(iParam0), 0, 12, 4, -44.75f, -1288.67f, 28.21f, 149, "", -1, 16, "postRC_Nigel3", 0, 0, -1, 4, 4, 0, 2359, func_140(iParam0), 1, 1);
			break;
	
		case 44:
			func_139(uParam1, "Omega1", func_141(iParam0), 0, 13, 4, 2468.51f, 3437.39f, 49.9f, 66, "", -1, 0, "spaceshipParts", 0, 1, 45, 4, 2, 0, 2359, func_140(iParam0), 0, 0);
			break;
	
		case 45:
			func_139(uParam1, "Omega2", func_141(iParam0), 0, 13, 4, 2319.44f, 2583.58f, 46.76f, 387, "", 107, 0, "", 0, 0, -1, 4, 2, 0, 2359, func_140(iParam0), 0, 0);
			break;
	
		case 46:
			func_139(uParam1, "Paparazzo1", func_141(iParam0), 0, 14, 4, -149.75f, 285.81f, 93.67f, 66, "", -1, 0, "", 0, 1, 47, 4, 2, 0, 2359, func_140(iParam0), 0, 1);
			break;
	
		case 47:
			func_139(uParam1, "Paparazzo2", func_141(iParam0), 0, 14, 4, -70.71f, 301.43f, 106.79f, 389, "", -1, 8, "", 0, 0, 48, 4, 2, 0, 2359, func_140(iParam0), 0, 1);
			break;
	
		case 48:
			func_139(uParam1, "Paparazzo3", func_141(iParam0), 0, 14, 4, -257.22f, 292.85f, 90.63f, 389, "", -1, 8, "", 183, 1, -1, 2, 2, 0, 2359, func_140(iParam0), 0, 0);
			break;
	
		case 49:
			func_139(uParam1, "Paparazzo3A", func_141(iParam0), 0, 14, 2, 305.52f, 157.19f, 102.94f, 389, "PAPPHOTO" /*Areas where you can find celebrity photo opportunities have been marked on the map. Track down and photograph these celebrities for Beverly.*/, 102, 0, "", 0, 0, 51, 4, 2, 0, 2359, func_140(iParam0), 0, 1);
			break;
	
		case 50:
			func_139(uParam1, "Paparazzo3B", func_141(iParam0), 0, 14, 2, 1040.96f, -534.42f, 60.17f, 389, "", 102, 0, "", 0, 0, 51, 4, 2, 0, 2359, func_140(iParam0), 0, 1);
			break;
	
		case 51:
			func_139(uParam1, "Paparazzo4", func_141(iParam0), 0, 14, 4, -484.2f, 229.68f, 82.21f, 389, "", -1, 8, "", 0, 1, -1, 4, 2, 0, 2359, func_140(iParam0), 0, 0);
			break;
	
		case 52:
			func_139(uParam1, "Rampage1", func_141(iParam0), 0, 15, 4, 908f, 3643.7f, 32.2f, 66, "", -1, 0, "", 0, 1, 54, 4, 4, 0, 2359, func_140(iParam0), 0, 0);
			break;
	
		case 54:
			func_139(uParam1, "Rampage3", func_141(iParam0), 0, 15, 4, 465.1f, -1849.3f, 27.8f, 84, "", -1, 0, "", 0, 1, 55, 4, 4, 0, 2359, func_140(iParam0), 1, 0);
			break;
	
		case 55:
			func_139(uParam1, "Rampage4", func_141(iParam0), 0, 15, 4, -161f, -1669.7f, 33f, 84, "", -1, 0, "", 0, 0, 56, 4, 4, 0, 2359, func_140(iParam0), 1, 0);
			break;
	
		case 56:
			func_139(uParam1, "Rampage5", func_141(iParam0), 0, 15, 4, -1298.2f, 2504.14f, 21.09f, 84, "", -1, 0, "", 0, 0, 53, 4, 4, 0, 2359, func_140(iParam0), 0, 0);
			break;
	
		case 53:
			func_139(uParam1, "Rampage2", func_141(iParam0), 0, 15, 4, 1181.5f, -400.1f, 67.5f, 84, "", -1, 0, "rampage_controller", 0, 0, -1, 4, 4, 0, 2359, func_140(iParam0), 1, 0);
			break;
	
		case 57:
			func_139(uParam1, "TheLastOne", func_141(iParam0), 0, 16, 4, -1298.98f, 4640.16f, 105.67f, 66, "", 133, 1, "", 0, 1, -1, 4, 2, 0, 2359, func_140(iParam0), 0, 1);
			break;
	
		case 58:
			func_139(uParam1, "Tonya1", func_141(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 66, "AM_H_RCFS" /*Strangers and Freaks can be found throughout San Andreas at ~HUD_COLOUR_FRANKLIN~~BLIP_RANDOM_CHARACTER~~s~*/, -1, 0, "ambient_TonyaCall", 24, 1, 59, 4, 2, 0, 2359, func_140(iParam0), 0, 1);
			break;
	
		case 59:
			func_139(uParam1, "Tonya2", func_141(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 388, "", -1, 48, "ambient_Tonya", 185, 0, 60, 4, 2, 0, 2359, func_140(iParam0), 0, 1);
			break;
	
		case 60:
			func_139(uParam1, "Tonya3", func_141(iParam0), 0, 17, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 187, 0, 61, 4, 2, 0, 2359, func_140(iParam0), 0, 1);
			break;
	
		case 61:
			func_139(uParam1, "Tonya4", func_141(iParam0), 0, 17, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 0, 0, 62, 4, 2, 0, 2359, func_140(iParam0), 0, 1);
			break;
	
		case 62:
			func_139(uParam1, "Tonya5", func_141(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 388, "", -1, 48, "", 0, 0, -1, 4, 2, 0, 2359, func_140(iParam0), 0, 1);
			break;
	
		default:
			break;
	}

	return;
}

void func_139(var uParam0, char* sParam1, var uParam2, var uParam3, int iParam4, int iParam5, int iParam6, float fParam7, float fParam8, float fParam9, int iParam10, char* sParam11, int iParam12, int iParam13, char* sParam14, int iParam15, int iParam16, int iParam17, int iParam18, int iParam19, int iParam20, int iParam21, int iParam22, int iParam23, int iParam24) // Position - 0x5BA7
{
	uParam0->f_4 = iParam5;
	*uParam0 = sParam1;
	uParam0->f_1 = { uParam2 };
	uParam0->f_3 = iParam4;
	uParam0->f_5 = iParam6;
	uParam0->f_6 = { fParam7 };
	uParam0->f_9 = iParam10;
	TEXT_LABEL_ASSIGN_STRING(&(uParam0->f_10), sParam11, 16);
	uParam0->f_14 = iParam12;
	uParam0->f_15 = iParam13;
	TEXT_LABEL_ASSIGN_STRING(&(uParam0->f_16), sParam14, 24);
	uParam0->f_22 = iParam15;
	uParam0->f_23 = iParam16;
	uParam0->f_24 = iParam17;
	uParam0->f_25 = iParam18;
	uParam0->f_26 = iParam19;
	uParam0->f_27 = iParam20;
	uParam0->f_28 = iParam21;
	uParam0->f_29 = iParam22;
	uParam0->f_30 = iParam23;
	uParam0->f_31 = iParam24;
	return;
}

int func_140(int iParam0) // Position - 0x5C38
{
	switch (iParam0)
	{
		case 0:
			return 0;
	
		case 1:
			return 0;
	
		case 2:
			return 1;
	
		case 3:
			return 1;
	
		case 4:
			return 0;
	
		case 5:
			return 1;
	
		case 6:
			return 1;
	
		case 7:
			return 0;
	
		case 8:
			return 1;
	
		case 9:
			return 0;
	
		case 10:
			return 0;
	
		case 11:
			return 0;
	
		case 12:
			return 1;
	
		case 13:
			return 0;
	
		case 14:
			return 1;
	
		case 15:
			return 0;
	
		case 16:
			return 1;
	
		case 17:
			return 1;
	
		case 18:
			return 1;
	
		case 19:
			return 1;
	
		case 20:
			return 1;
	
		case 21:
			return 1;
	
		case 22:
			return 1;
	
		case 23:
			return 1;
	
		case 24:
			return 1;
	
		case 25:
			return 1;
	
		case 26:
			return 1;
	
		case 27:
			return 0;
	
		case 28:
			return 1;
	
		case 29:
			return 1;
	
		case 30:
			return 1;
	
		case 31:
			return 0;
	
		case 32:
			return 1;
	
		case 33:
			return 1;
	
		case 34:
			return 1;
	
		case 35:
			return 0;
	
		case 36:
			return 0;
	
		case 37:
			return 0;
	
		case 38:
			return 1;
	
		case 39:
			return 1;
	
		case 40:
			return 1;
	
		case 41:
			return 1;
	
		case 42:
			return 1;
	
		case 43:
			return 1;
	
		case 44:
			return 0;
	
		case 45:
			return 0;
	
		case 46:
			return 1;
	
		case 47:
			return 1;
	
		case 48:
			return 0;
	
		case 49:
			return 1;
	
		case 50:
			return 1;
	
		case 51:
			return 1;
	
		case 52:
			return 1;
	
		case 54:
			return 1;
	
		case 55:
			return 1;
	
		case 56:
			return 1;
	
		case 53:
			return 1;
	
		case 57:
			return 1;
	
		case 58:
			return 1;
	
		case 59:
			return 1;
	
		case 60:
			return 1;
	
		case 61:
			return 1;
	
		case 62:
			return 1;
	
		default:
			break;
	}

	return 0;
}

struct<2> func_141(int iParam0) // Position - 0x5F7E
{
	var unk;
	var unk3;

	TEXT_LABEL_ASSIGN_STRING(&unk, "", 8);
	unk3 = { func_142(iParam0) };

	if (unk_0x2AC37494BBF1DB16(&unk3))
	{
	}
	else
	{
		TEXT_LABEL_ASSIGN_STRING(&unk, "RC_", 8);
		TEXT_LABEL_APPEND_STRING(&unk, &unk3, 8);
	}

	return unk;
}

struct<2> func_142(int iParam0) // Position - 0x5FB5
{
	var unk;

	TEXT_LABEL_ASSIGN_STRING(&unk, "", 8);

	switch (iParam0)
	{
		case 0:
			TEXT_LABEL_ASSIGN_STRING(&unk, "ABI1", 8);
			break;
	
		case 1:
			TEXT_LABEL_ASSIGN_STRING(&unk, "ABI2", 8);
			break;
	
		case 2:
			TEXT_LABEL_ASSIGN_STRING(&unk, "BA1", 8);
			break;
	
		case 3:
			TEXT_LABEL_ASSIGN_STRING(&unk, "BA2", 8);
			break;
	
		case 4:
			TEXT_LABEL_ASSIGN_STRING(&unk, "BA3", 8);
			break;
	
		case 5:
			TEXT_LABEL_ASSIGN_STRING(&unk, "BA3A", 8);
			break;
	
		case 6:
			TEXT_LABEL_ASSIGN_STRING(&unk, "BA3C", 8);
			break;
	
		case 7:
			TEXT_LABEL_ASSIGN_STRING(&unk, "BA4", 8);
			break;
	
		case 8:
			TEXT_LABEL_ASSIGN_STRING(&unk, "DRE1", 8);
			break;
	
		case 9:
			TEXT_LABEL_ASSIGN_STRING(&unk, "EPS1", 8);
			break;
	
		case 10:
			TEXT_LABEL_ASSIGN_STRING(&unk, "EPS2", 8);
			break;
	
		case 11:
			TEXT_LABEL_ASSIGN_STRING(&unk, "EPS3", 8);
			break;
	
		case 12:
			TEXT_LABEL_ASSIGN_STRING(&unk, "EPS4", 8);
			break;
	
		case 13:
			TEXT_LABEL_ASSIGN_STRING(&unk, "EPS5", 8);
			break;
	
		case 14:
			TEXT_LABEL_ASSIGN_STRING(&unk, "EPS6", 8);
			break;
	
		case 15:
			TEXT_LABEL_ASSIGN_STRING(&unk, "EPS7", 8);
			break;
	
		case 16:
			TEXT_LABEL_ASSIGN_STRING(&unk, "EPS8", 8);
			break;
	
		case 17:
			TEXT_LABEL_ASSIGN_STRING(&unk, "EXT1", 8);
			break;
	
		case 18:
			TEXT_LABEL_ASSIGN_STRING(&unk, "EXT2", 8);
			break;
	
		case 19:
			TEXT_LABEL_ASSIGN_STRING(&unk, "EXT3", 8);
			break;
	
		case 20:
			TEXT_LABEL_ASSIGN_STRING(&unk, "EXT4", 8);
			break;
	
		case 21:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FAN1", 8);
			break;
	
		case 22:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FAN2", 8);
			break;
	
		case 23:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FAN3", 8);
			break;
	
		case 24:
			TEXT_LABEL_ASSIGN_STRING(&unk, "HAO1", 8);
			break;
	
		case 25:
			TEXT_LABEL_ASSIGN_STRING(&unk, "HUN1", 8);
			break;
	
		case 26:
			TEXT_LABEL_ASSIGN_STRING(&unk, "HUN2", 8);
			break;
	
		case 27:
			TEXT_LABEL_ASSIGN_STRING(&unk, "JOS1", 8);
			break;
	
		case 28:
			TEXT_LABEL_ASSIGN_STRING(&unk, "JOS2", 8);
			break;
	
		case 29:
			TEXT_LABEL_ASSIGN_STRING(&unk, "JOS3", 8);
			break;
	
		case 30:
			TEXT_LABEL_ASSIGN_STRING(&unk, "JOS4", 8);
			break;
	
		case 31:
			TEXT_LABEL_ASSIGN_STRING(&unk, "MAU1", 8);
			break;
	
		case 32:
			TEXT_LABEL_ASSIGN_STRING(&unk, "MIN1", 8);
			break;
	
		case 33:
			TEXT_LABEL_ASSIGN_STRING(&unk, "MIN2", 8);
			break;
	
		case 34:
			TEXT_LABEL_ASSIGN_STRING(&unk, "MIN3", 8);
			break;
	
		case 35:
			TEXT_LABEL_ASSIGN_STRING(&unk, "MRS1", 8);
			break;
	
		case 36:
			TEXT_LABEL_ASSIGN_STRING(&unk, "MRS2", 8);
			break;
	
		case 37:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NI1", 8);
			break;
	
		case 38:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NI1A", 8);
			break;
	
		case 39:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NI1B", 8);
			break;
	
		case 40:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NI1C", 8);
			break;
	
		case 41:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NI1D", 8);
			break;
	
		case 42:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NI2", 8);
			break;
	
		case 43:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NI3", 8);
			break;
	
		case 44:
			TEXT_LABEL_ASSIGN_STRING(&unk, "OME1", 8);
			break;
	
		case 45:
			TEXT_LABEL_ASSIGN_STRING(&unk, "OME2", 8);
			break;
	
		case 46:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PA1", 8);
			break;
	
		case 47:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PA2", 8);
			break;
	
		case 48:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PA3", 8);
			break;
	
		case 49:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PA3A", 8);
			break;
	
		case 50:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PA3B", 8);
			break;
	
		case 51:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PA4", 8);
			break;
	
		case 52:
			TEXT_LABEL_ASSIGN_STRING(&unk, "RAM1", 8);
			break;
	
		case 53:
			TEXT_LABEL_ASSIGN_STRING(&unk, "RAM2", 8);
			break;
	
		case 54:
			TEXT_LABEL_ASSIGN_STRING(&unk, "RAM3", 8);
			break;
	
		case 55:
			TEXT_LABEL_ASSIGN_STRING(&unk, "RAM4", 8);
			break;
	
		case 56:
			TEXT_LABEL_ASSIGN_STRING(&unk, "RAM5", 8);
			break;
	
		case 57:
			TEXT_LABEL_ASSIGN_STRING(&unk, "SAS1", 8);
			break;
	
		case 58:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TON1", 8);
			break;
	
		case 59:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TON2", 8);
			break;
	
		case 60:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TON3", 8);
			break;
	
		case 61:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TON4", 8);
			break;
	
		case 62:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TON5", 8);
			break;
	
		default:
			break;
	}

	return unk;
}

eCharacter _GET_CURRENT_PLAYER_CHARACTER() // Position - 0x6401
{
	func_20();
	return Global_113648.f_2365.f_539.f_4321;
}

BOOL func_144() // Position - 0x641A
{
	var unk;

	if (Global_32315)
	{
		if (unk_0x3C3D6D026CF7F51B(unk_0xC1A5EC5C986B98AD(), 0))
		{
			unk = unk_0x95DC39736F6748E3(unk_0xC1A5EC5C986B98AD(), 0);
		
			if (unk_0xFBD273FDBCF0C5BD(unk, 0))
				if (!unk_0x66599E73DBA5A850(unk_0xA66E176E5772E965(unk, 0, 0)))
					return true;
		}
	}

	return false;
}

BOOL func_145() // Position - 0x645E
{
	if (func_148() && !func_149())
		return true;

	if (func_147() && func_146())
		return true;

	return false;
}

BOOL func_146() // Position - 0x6490
{
	return Global_113366 > 0;
}

BOOL func_147() // Position - 0x649E
{
	if (Global_97603 != -1)
		return true;

	return false;
}

BOOL func_148() // Position - 0x64B3
{
	if (Global_97603 != -1)
		return IS_BIT_SET(Global_91469[Global_97603 /*34*/].f_15, 20);

	return false;
}

BOOL func_149() // Position - 0x64D6
{
	if (unk_0xCC17806DB0C41C19())
		if (unk_0x27654E358E874F45() == 1f)
			return true;

	return false;
}

void func_150() // Position - 0x64F3
{
	unk_0x42665493F0D75951();
	func_76(&iLocal_57);
	func_151(-1);
	unk_0x675D9C12C73D3DE7();
	return;
}

void func_151(int iParam0) // Position - 0x650E
{
	var unk;

	if (iParam0 == -1)
		iParam0 = func_29();

	if (iParam0 == -1)
		return;

	if (func_162())
	{
		func_155(iParam0);
		unk_0x97DBA2AA6C70AFC7(0, 0);
		Global_113639 = unk_0xA5E11AF0A2B928C1();
		func_154(30000);
		TEXT_LABEL_ASSIGN_STRING(&unk, func_153(Global_113637, true), 64);
	
		if (func_28(Global_113637) > 0)
		{
			TEXT_LABEL_APPEND_STRING(&unk, " Variation ", 64);
			TEXT_LABEL_APPEND_INT(&unk, Global_113636, 64);
		}
	
		unk_0x36DDD3AC77856423(&unk, Global_113634, unk_0xA5E11AF0A2B928C1() - Global_113635, 0);
	}
	else if (IS_BIT_SET(Global_113644, 0) && Global_113648.f_24997.f_2 < 3)
	{
		unk_0x061B1200C95204CB(&Global_113644, 0);
	}

	func_152(&Global_32223);
	Global_113638 = false;
	func_88(-1);
	return;
}

void func_152(var uParam0) // Position - 0x65C0
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

char* func_153(int iParam0, BOOL bParam1) // Position - 0x65FD
{
	switch (iParam0)
	{
		case 0:
			return "RE_ACCIDENT";
	
		case 1:
			return "RE_ATMROBBERY";
	
		case 2:
			return "RE_BUSTOUR";
	
		case 3:
			return "RE_DOMESTIC";
	
		case 4:
			return "RE_GETAWAYDRIVER";
	
		case 5:
			return "RE_SHOPROBBERY";
	
		case 6:
			return "RE_SNATCHED";
	
		case 7:
			return "RE_LURED";
	
		case 8:
			return "RE_BIKETHIEFSTAMP";
	
		case 9:
			return "RE_SECURITYVAN";
	
		case 10:
			return "RE_PAPARAZZI";
	
		case 11:
			return "RE_CHASETHIEVES";
	
		case 12:
			return "RE_DEALGONEWRONG";
	
		case 13:
			return "RE_HITCHLIFT";
	
		case 14:
			return "RE_STAG";
	
		case 15:
			return "RE_ARREST";
	
		case 16:
			return "RE_CRASHRESCUE";
	
		case 17:
			return "RE_CARTHEFT";
	
		case 18:
			return "RE_CULTSHOOTOUT";
	
		case 19:
			return "RE_GANGFIGHT";
	
		case 20:
			return "RE_GANGINTIMIDATION";
	
		case 21:
			return "RE_PRISONVANBREAK";
	
		case 22:
			return "RE_PRISONERLIFT";
	
		case 23:
			return "RE_ABANDONEDCAR";
	
		case 24:
			return "RE_BURIAL";
	
		case 25:
			return "RE_MUGGING";
	
		case 26:
			return "RE_BIKETHIEF";
	
		case 27:
			return "RE_DRUNKDRIVER";
	
		case 28:
			return "RE_HOMELANDSECURITY";
	
		case 29:
			return "RE_BORDERPATROL";
	
		case 30:
			return "RE_SIMEONYETARIAN";
	
		case 31:
			return "RE_DUEL";
	
		case 32:
			return "RE_SEAPLANE";
	
		case 33:
			return "RE_MONKEYPHOTO";
	
		case -1:
			return "RE_NONE";
	}

	!bParam1;
	return "UNKNOWN";
}

void func_154(int iParam0) // Position - 0x6846
{
	Global_43808 = unk_0xA5E11AF0A2B928C1() + iParam0;
	return;
}

void func_155(int iParam0) // Position - 0x6858
{
	func_156(iParam0, 0, func_161(iParam0));
	return;
}

void func_156(int iParam0, int iParam1, int iParam2) // Position - 0x686D
{
	int unk;
	var unk2;

	unk = func_112();
	func_159(&unk, 0, 0, iParam2, iParam1, 0, 0);
	func_158(iParam0, &unk);
	unk2 = { func_157(&unk) };
	return;
}

struct<16> func_157(var uParam0) // Position - 0x689C
{
	var unk;
	int num;

	TEXT_LABEL_ASSIGN_STRING(&unk, "", 64);
	num = func_106(*uParam0);

	if (num < 10)
		TEXT_LABEL_APPEND_INT(&unk, 0, 64);

	TEXT_LABEL_APPEND_INT(&unk, num, 64);
	TEXT_LABEL_APPEND_STRING(&unk, ":", 64);
	num = func_105(*uParam0);

	if (num < 10)
		TEXT_LABEL_APPEND_INT(&unk, 0, 64);

	TEXT_LABEL_APPEND_INT(&unk, num, 64);
	TEXT_LABEL_APPEND_STRING(&unk, ":", 64);
	num = func_104(*uParam0);

	if (num < 10)
		TEXT_LABEL_APPEND_INT(&unk, 0, 64);

	TEXT_LABEL_APPEND_INT(&unk, num, 64);
	TEXT_LABEL_APPEND_STRING(&unk, "  ", 64);
	num = func_107(*uParam0);

	if (num < 10)
		TEXT_LABEL_APPEND_INT(&unk, 0, 64);

	TEXT_LABEL_APPEND_INT(&unk, num, 64);
	TEXT_LABEL_APPEND_STRING(&unk, "/", 64);
	num = func_110(*uParam0);

	if (num < 9)
		TEXT_LABEL_APPEND_INT(&unk, 0, 64);

	TEXT_LABEL_APPEND_INT(&unk, num + 1, 64);
	TEXT_LABEL_APPEND_STRING(&unk, "/", 64);
	TEXT_LABEL_APPEND_INT(&unk, func_108(*uParam0), 64);
	return unk;
}

void func_158(int iParam0, var uParam1) // Position - 0x696C
{
	Global_113648.f_24997.f_43[iParam0] = *uParam1;
	return;
}

void func_159(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6) // Position - 0x6984
{
	int num;
	int i;
	int num2;
	int j;
	int k;
	int l;
	int m;

	num = func_108(*uParam0);
	i = func_110(*uParam0);
	num2 = func_107(*uParam0);
	j = func_106(*uParam0);
	k = func_105(*uParam0);
	l = func_104(*uParam0);

	if (iParam6 == 0 && iParam5 == 0 && iParam4 == 0 && iParam3 == 0 && iParam2 == 0 && iParam1 == 0)
		return;

	if (iParam1 < 0)
		return;

	if (iParam2 < 0)
		return;

	if (iParam3 < 0)
		return;

	if (iParam4 < 0)
		return;

	if (iParam5 < 0)
		return;

	if (iParam6 < 0)
		return;

	for (l = l + iParam1; l >= 60; l = l - 60)
	{
		iParam2 = iParam2 + 1;
	}

	for (k = k + iParam2; k >= 60; k = k - 60)
	{
		iParam3 = iParam3 + 1;
	}

	for (j = j + iParam3; j >= 24; j = j - 24)
	{
		iParam4 = iParam4 + 1;
	}

	num2 = num2 + iParam4;

	for (m = func_103(i, num); num2 > m; m = func_103(i, num))
	{
		i = i + 1;
		num2 = num2 - m;
	
		if (i > 11)
		{
			num = num + 1;
			i = i - 12;
		}
	}

	for (i = i + iParam5; i > 11; i = i - 12)
	{
		iParam6 = iParam6 + 1;
	}

	num = num + iParam6;
	func_160(uParam0, l, k, j, num2, i, num);
	return;
}

void func_160(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6) // Position - 0x6B06
{
	func_118(uParam0, iParam1);
	func_117(uParam0, iParam2);
	func_116(uParam0, iParam3);
	func_114(uParam0, iParam5);
	func_115(uParam0, iParam4);
	func_113(uParam0, iParam6);
	return;
}

int func_161(int iParam0) // Position - 0x6B3E
{
	int num;

	switch (iParam0)
	{
		case 23:
			num = 30;
			break;
	
		case 0:
			num = 30;
			break;
	
		case 15:
			num = 30;
			break;
	
		case 1:
			num = 200;
			break;
	
		case 26:
			num = 30;
			break;
	
		case 8:
			num = 30;
			break;
	
		case 29:
			num = 30;
			break;
	
		case 24:
			num = 30;
			break;
	
		case 2:
			num = 0;
			break;
	
		case 17:
			num = 30;
			break;
	
		case 11:
			num = 30;
			break;
	
		case 16:
			num = 30;
			break;
	
		case 18:
			num = 30;
			break;
	
		case 12:
			num = 120;
			break;
	
		case 3:
			num = 60;
			break;
	
		case 27:
			num = 60;
			break;
	
		case 19:
			num = 30;
			break;
	
		case 20:
			num = 30;
			break;
	
		case 4:
			num = 60;
			break;
	
		case 28:
			num = 30;
			break;
	
		case 13:
			num = 35;
			break;
	
		case 7:
			num = 30;
			break;
	
		case 25:
			num = 40;
			break;
	
		case 10:
			num = 30;
			break;
	
		case 22:
			num = 30;
			break;
	
		case 21:
			num = 30;
			break;
	
		case 5:
			num = 30;
			break;
	
		case 30:
			num = 60;
			break;
	
		case 9:
			num = 60;
			break;
	
		case 6:
			num = 40;
			break;
	
		case 14:
			num = 40;
			break;
	}

	return num;
}

BOOL func_162() // Position - 0x6CE1
{
	if (Global_113637 == func_29() && unk_0xA847A0F368810680() && Global_113638)
		return true;

	return false;
}

