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
	int iLocal_37 = 10;
	var uLocal_38 = 0;
	var uLocal_39 = 0;
	var uLocal_40 = 0;
	var uLocal_41 = 0;
	var uLocal_42 = 0;
	var uLocal_43 = 0;
	var uLocal_44 = 0;
	var uLocal_45 = 0;
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
	BOOL bLocal_78 = 0;
	var uLocal_79 = 0;
	var uLocal_80 = 0;
	var uLocal_81 = 0;
	var uLocal_82 = 0;
	var uLocal_83 = 0;
	int iLocal_84 = 0;
	int iLocal_85 = 0;
	int iLocal_86 = 0;
	int iLocal_87 = 0;
	var uLocal_88 = 0;
#endregion

void main() // Position - 0x0
{
	Vector3 vector;
	Vector3 vector2;

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
	iLocal_85 = -1;
	iLocal_86 = -1;

	if (unk_0x55EEDBBFDC6E810F(19))
		func_56();

	if (!func_52())
		func_56();

	if (!func_51(uLocal_82))
	{
		func_56();
	}
	else
	{
		func_50();
		uLocal_83 = unk_0xA5E11AF0A2B928C1();
		iLocal_85 = func_49();
		iLocal_84 = 0;
		func_48(true, &uLocal_88);
	}

	while (true)
	{
		if (!unk_0x66599E73DBA5A850(unk_0xC1A5EC5C986B98AD()))
		{
			if (!func_51(uLocal_82))
				func_56();
		
			vector = { unk_0x30BE8A934C020461(unk_0xC1A5EC5C986B98AD(), 1) };
			vector2 = { unk_0x30BE8A934C020461(uLocal_82, 1) };
		
			if (SYSTEM::VDIST2(vector, vector2) >= 100f * 100f)
				func_56();
		
			switch (iLocal_87)
			{
				case 0:
					func_43(vector2, vector, 18000, 1101004800);
				
					if (func_25(&uLocal_82, false))
					{
						func_24();
						func_16(false);
						func_12(vector2, vector);
						unk_0x28818732C8F0F80E(func_11());
						iLocal_87 = 1;
					}
					break;
			
				case 1:
					if (func_5(&uLocal_82, &uLocal_79, &iLocal_86))
						iLocal_87 = 2;
					break;
			
				case 2:
					if (!func_4(uLocal_82, joaat("SCRIPT_TASK_SMART_FLEE_PED")) && !unk_0xC78375EA6037A7DB(uLocal_82))
						if (!unk_0x7BB3D8F4F6310EB8(uLocal_82, func_11(), func_3(), 3))
							func_1();
					else
						func_56();
					break;
			}
		}
	
		SYSTEM::WAIT(0);
	}

	return;
}

void func_1() // Position - 0x1B3
{
	if (func_51(uLocal_82))
	{
		func_2(&uLocal_82);
		unk_0xC6C9BF71106ABCAC(uLocal_82, unk_0xC1A5EC5C986B98AD(), 10000f, -1, 0, 0);
		unk_0x71A535529C1CA5DF(uLocal_82, 1);
	}

	return;
}

void func_2(var uParam0) // Position - 0x1E3
{
	if (func_51(*uParam0))
	{
		unk_0x474AA9EF29305EA8(*uParam0, 2, 0);
		unk_0x474AA9EF29305EA8(*uParam0, 64, 0);
		unk_0x474AA9EF29305EA8(*uParam0, 128, 0);
		unk_0x474AA9EF29305EA8(*uParam0, 8, 0);
		unk_0x474AA9EF29305EA8(*uParam0, 1, 0);
		unk_0x474AA9EF29305EA8(*uParam0, 32, 0);
		unk_0x7FE5E05BE63F6CB8(*uParam0, 5, 0);
		unk_0x7FE5E05BE63F6CB8(*uParam0, 17, 1);
		unk_0x598D91BBD045C1F3(*uParam0, 118, 1);
	}

	return;
}

char* func_3() // Position - 0x24C
{
	return "female_Flee_Table_Left_Maude";
}

BOOL func_4(var uParam0, int iParam1) // Position - 0x256
{
	if (func_51(uParam0))
		if (unk_0xF5F493B789EA063E(uParam0, iParam1) == 1 || unk_0xF5F493B789EA063E(uParam0, iParam1) == 0)
			return true;

	return false;
}

BOOL func_5(var uParam0, var uParam1, var uParam2) // Position - 0x289
{
	int num;

	if (func_51(*uParam0))
	{
		if (unk_0x7BB3D8F4F6310EB8(*uParam0, func_10(), func_9(), 3))
		{
			if (!unk_0x48A4D45B3B4CEFFD(*uParam0) || unk_0xBACC143C07E3925E(*uParam0))
			{
				unk_0x28818732C8F0F80E(func_11());
			
				if (unk_0x2BBF749E555360DC(func_11()))
				{
					*uParam2 = unk_0x191673E3F99212B2(2727.4f, 4145.56f, 43.68f, 0f, 0f, -92.17f, 2);
					unk_0x5F243F8265BB664F(*uParam2, 0);
					unk_0xE4E4F775E5660E56(*uParam2, 0);
				
					if (func_4(*uParam0, joaat("SCRIPT_TASK_SYNCHRONIZED_SCENE")))
						unk_0xFB58581C53CF4C05(*uParam0, -1000f, 1);
				
					unk_0x468D976993BF7FE1(*uParam0, *uParam2, func_11(), func_3(), 1000f, -4f, 4626, 0, 1148846080, 0);
					unk_0xBB6027D1D193CBA6(*uParam0, 0, 0);
				
					if (_DOES_ENTITY_EXIST_AND_IS_ALIVE(*uParam1))
					{
						if (unk_0x7BB3D8F4F6310EB8(*uParam1, func_10(), func_7(), 3))
							unk_0xFB58581C53CF4C05(*uParam1, -16f, 0);
					
						num = 0;
						num = num + 16;
						num = num + 64;
						num = num + 512;
						num = num + 4096;
						unk_0xA2CBB04560DD6361(*uParam1, *uParam2, func_6(), func_11(), 16f, -4f, num, 1148846080);
					}
				
					return true;
				}
			}
			else
			{
				return true;
			}
		}
		else
		{
			return true;
		}
	}

	return false;
}

char* func_6() // Position - 0x3D5
{
	return "Female_Flee_Table_Left_Maude_Chair";
}

char* func_7() // Position - 0x3E0
{
	return "base_chair";
}

BOOL _DOES_ENTITY_EXIST_AND_IS_ALIVE(int iParam0) // Position - 0x3EB
{
	if (unk_0x7DE17ACDD8BA2642(iParam0))
		if (!unk_0x055111B11E6624FD(iParam0, 0))
			return true;

	return false;
}

char* func_9() // Position - 0x40C
{
	return "base";
}

char* func_10() // Position - 0x417
{
	return "special_ped@maude@base";
}

char* func_11() // Position - 0x422
{
	return "special_ped@maude@exit_flee";
}

void func_12(Vector3 vParam0, var uParam1, var uParam2, Vector3 vParam3, var uParam4, var uParam5) // Position - 0x42D
{
	if (func_51(uLocal_82))
		if (!unk_0x967D885AAF973497(uLocal_82))
			if (SYSTEM::VDIST2(vParam3, vParam0) < 35f * 35f)
				func_13(&uLocal_82, "GENERIC_FRIGHTENED_HIGH", "MAUDE", 3);

	return;
}

void func_13(var uParam0, char* sParam1, char* sParam2, int iParam3) // Position - 0x473
{
	BOOL flag;

	if (func_51(*uParam0))
	{
		flag = unk_0x0DC2C339522725DF(*uParam0);
	
		if (flag)
			unk_0x57B1A0850EB7F1F4(*uParam0, 0);
	
		func_14(*uParam0, sParam1, sParam2, iParam3);
	
		if (flag)
			unk_0x57B1A0850EB7F1F4(*uParam0, 1);
	}

	return;
}

void func_14(var uParam0, char* sParam1, char* sParam2, int iParam3) // Position - 0x4B5
{
	unk_0xB7C28610A558761B(uParam0, sParam1, sParam2, func_15(iParam3), 0);
	return;
}

char* func_15(int iParam0) // Position - 0x4CE
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

void func_16(BOOL bParam0) // Position - 0x6BE
{
	var unk;
	char* str;

	if (_CONVERSATION_IS_DIALOGUE_IN_PROGRESS())
	{
		unk = { func_22() };
		str = func_21();
	
		if (unk_0x4310A0DB886F9FED(&unk, str))
			if (bParam0)
				func_19();
			else
				func_17();
	}

	return;
}

void func_17() // Position - 0x6F6
{
	Global_20591 = 0;
	func_18();
	return;
}

void func_18() // Position - 0x706
{
	unk_0x782234C275AFBA24();
	Global_22736 = 0;

	if (unk_0x0DCB385165FDE763())
	{
		unk_0xD6625E11483B2324(0);
		Global_21725 = 6;
	}

	return;
}

void func_19() // Position - 0x727
{
	Global_20591 = 0;
	func_20();
	return;
}

void func_20() // Position - 0x737
{
	if (unk_0x0DCB385165FDE763())
	{
		unk_0x782234C275AFBA24();
		Global_22736 = 0;
		unk_0xD6625E11483B2324(1);
		Global_21725 = 6;
		return;
	}

	return;
}

char* func_21() // Position - 0x75B
{
	if (IS_BIT_SET(Global_113648.f_24988, 3))
		return "BB4_loiter";
	else if (IS_BIT_SET(Global_113648.f_24988, 2))
		return "BB3_loiter";
	else if (IS_BIT_SET(Global_113648.f_24988, 1))
		return "BB2_loiter";
	else if (IS_BIT_SET(Global_113648.f_24988, 0))
		return "BB1_loiter";

	return "MAUDE_loiter";
}

struct<6> func_22() // Position - 0x7BC
{
	var unk;

	TEXT_LABEL_ASSIGN_STRING(&unk, "NULL", 24);

	if (Global_21725 == 4)
		return Global_21344;

	return unk;
}

BOOL _CONVERSATION_IS_DIALOGUE_IN_PROGRESS() // Position - 0x7E0
{
	if (Global_21725 != 0 || unk_0x0DCB385165FDE763())
		return true;

	return false;
}

void func_24() // Position - 0x802
{
	if (unk_0x7DE17ACDD8BA2642(uLocal_81))
		unk_0x2718E9CC165A99F6(uLocal_81, 0);

	if (unk_0x7DE17ACDD8BA2642(uLocal_80))
		unk_0x2718E9CC165A99F6(uLocal_80, 0);

	return;
}

BOOL func_25(var uParam0, BOOL bParam1) // Position - 0x82A
{
	if (func_51(*uParam0))
	{
		if (unk_0x603C398B47455767(*uParam0) || unk_0x07960491F4346AF3(*uParam0) || unk_0x02EC000DE597469F(*uParam0))
			return true;
	
		if (unk_0xACD39355028D39EF(unk_0xC1A5EC5C986B98AD()))
		{
			if (unk_0x110B96B5C67CC73B(unk_0xC1A5EC5C986B98AD(), *uParam0))
				return true;
		
			if (unk_0x7DE17ACDD8BA2642(uLocal_79))
				if (unk_0x110B96B5C67CC73B(unk_0xC1A5EC5C986B98AD(), uLocal_79))
					return true;
		
			if (unk_0x7DE17ACDD8BA2642(uLocal_80))
				if (unk_0x110B96B5C67CC73B(unk_0xC1A5EC5C986B98AD(), uLocal_80))
					return true;
		
			if (unk_0x7DE17ACDD8BA2642(uLocal_81))
				if (unk_0x110B96B5C67CC73B(unk_0xC1A5EC5C986B98AD(), uLocal_81))
					return true;
		}
	
		if (unk_0x66681C67B07D3657(*uParam0, 61))
			return true;
	
		if (unk_0x48A4D45B3B4CEFFD(*uParam0))
			if (unk_0xEAEF747543427AC5(*uParam0, unk_0xC1A5EC5C986B98AD(), 3f, 3f, 3f, 0, 1, 0))
				return true;
	
		if (unk_0x66681C67B07D3657(*uParam0, 51))
			return true;
	
		if (func_33(*uParam0, 1126825984))
			return true;
	
		if (func_26(*uParam0, true, false, false, false))
			return true;
	
		if (unk_0xD612176B6DC58EF7(-1, unk_0x30BE8A934C020461(*uParam0, 1), 15f))
			return true;
	
		if (unk_0x66681C67B07D3657(*uParam0, 73))
			return true;
	
		if (bParam1)
			if (unk_0xF356C80F3E8D2812(unk_0x93E99A2DBCBA9CFA(), 0))
				return true;
	}
	else
	{
		return true;
	}

	return false;
}

BOOL func_26(int iParam0, BOOL bParam1, BOOL bParam2, BOOL bParam3, BOOL bParam4) // Position - 0x97C
{
	float num;
	float num2;
	int num3;

	num = 8f;
	num2 = 15f;

	if (bParam1 == false)
	{
		num = 1.86f;
		num2 = 1.86f;
	}

	if (bParam2)
		num = 2f;

	if (_DOES_ENTITY_EXIST_AND_IS_ALIVE(unk_0xC1A5EC5C986B98AD()) && _DOES_ENTITY_EXIST_AND_IS_ALIVE(iParam0))
	{
		unk_0xEBC16D60E30C9AE1(unk_0xC1A5EC5C986B98AD(), &num3, 1);
	
		if (num3 == joaat("WEAPON_PETROLCAN"))
		{
			num = 3f;
			num2 = 3f;
		}
	
		if (!bParam2)
		{
			if (func_32(iParam0, bParam1, num, num2))
				return true;
		
			if (func_27(iParam0, num2, bParam3, bParam4))
				return true;
		}
		else
		{
			if (unk_0x7B783B62D5123CC7(unk_0xC1A5EC5C986B98AD()))
			{
				if (unk_0x110D030CCD4E83A6(unk_0xC1A5EC5C986B98AD()))
					if (unk_0x612907CF3208D1E3(unk_0x30BE8A934C020461(iParam0, 1), num, 1))
						return true;
			}
			else
			{
				if (bParam1)
				{
					num = 1.86f;
					num2 = 1.86f;
				}
			
				if (func_32(iParam0, bParam1, num, num2))
					return true;
			}
		
			if (func_27(iParam0, num2, bParam3, bParam4))
				return true;
		}
	}

	return false;
}

BOOL func_27(int iParam0, float fParam1, BOOL bParam2, BOOL bParam3) // Position - 0xA77
{
	float num;
	float num2;

	num = { unk_0x30BE8A934C020461(iParam0, 1) };
	num2 = { num };
	num = num - fParam1;
	num.f_1 = num.f_1 - fParam1;
	num.f_2 = num.f_2 - fParam1;
	num2 = num2 + fParam1;
	num2.f_1 = num2.f_1 + fParam1;
	num2.f_2 = num2.f_2 + fParam1;

	if (bParam2)
	{
		if (unk_0x7A7E3100F1649F5B(unk_0x30BE8A934C020461(iParam0, 1), joaat("WEAPON_GRENADE"), fParam1, 1) || unk_0x7A7E3100F1649F5B(unk_0x30BE8A934C020461(iParam0, 1), joaat("WEAPON_MOLOTOV"), fParam1, 1) || unk_0x7A7E3100F1649F5B(unk_0x30BE8A934C020461(iParam0, 1), joaat("WEAPON_SMOKEGRENADE"), fParam1, 1) || unk_0x7A7E3100F1649F5B(unk_0x30BE8A934C020461(iParam0, 1), joaat("WEAPON_STICKYBOMB"), 5f, 1))
		{
			if (bParam3)
				if (func_28(iParam0, fParam1))
					return true;
				else
					return false;
		
			return true;
		}
	}
	else
	{
		if (bParam3)
			if (func_28(iParam0, fParam1))
				return true;
			else
				return false;
	
		if (unk_0x332F7E85F9805351(num, num2, 1))
			return true;
	}

	return false;
}

BOOL func_28(int iParam0, float fParam1) // Position - 0xB83
{
	var unk;
	var unk2;

	if (unk_0x96E845EE39BF3453(iParam0, joaat("WEAPON_GRENADE"), fParam1, &unk2, &unk, 0) || unk_0x96E845EE39BF3453(iParam0, joaat("WEAPON_SMOKEGRENADE"), fParam1, &unk2, &unk, 0) || unk_0x96E845EE39BF3453(iParam0, joaat("WEAPON_BZGAS"), fParam1, &unk2, &unk, 0) || unk_0x96E845EE39BF3453(iParam0, joaat("WEAPON_STICKYBOMB"), fParam1, &unk2, &unk, 0) || unk_0x96E845EE39BF3453(iParam0, joaat("WEAPON_MOLOTOV"), fParam1, &unk2, &unk, 0))
		if (func_29(iParam0, unk2, 90f, 0))
			return true;

	return false;
}

BOOL func_29(int iParam0, var uParam1, var uParam2, var uParam3, float fParam4, int iParam5) // Position - 0xC18
{
	var unk;
	var unk4;
	float num;

	unk = { func_31(uParam1 - unk_0x30BE8A934C020461(iParam0, 1)) };

	if (fParam4 < 0.1f || fParam4 > 360f)
		return true;

	if (iParam5 == 0)
		unk4 = { unk_0x26A9C8234C71B669(iParam0) };
	else
		unk4 = { func_31(unk_0x985D9D5ED4D5145A(iParam0, 31086, 0f, 5f, 0f) - unk_0x985D9D5ED4D5145A(iParam0, 31086, 0f, 0f, 0f)) };

	num = func_30(unk4, unk);

	if (num <= SYSTEM::COS(fParam4 / 2f))
		return false;

	return true;
}

float func_30(float fParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5) // Position - 0xCA6
{
	return (fParam0 * uParam3) + (fParam0.f_1 * uParam3.f_1) + (fParam0.f_2 * uParam3.f_2);
}

Vector3 func_31(float fParam0, var uParam1, var uParam2) // Position - 0xCC7
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

BOOL func_32(int iParam0, BOOL bParam1, float fParam2, float fParam3) // Position - 0xD06
{
	if (bParam1)
		if (unk_0x110D030CCD4E83A6(unk_0xC1A5EC5C986B98AD()))
			if (unk_0xEAEF747543427AC5(unk_0xC1A5EC5C986B98AD(), iParam0, fParam3, fParam3, fParam3, 0, 1, 0))
				return true;

	if (unk_0x612907CF3208D1E3(unk_0x30BE8A934C020461(iParam0, 1), fParam2, 1))
		return true;

	return false;
}

BOOL func_33(var uParam0, int iParam1) // Position - 0xD4E
{
	float num;

	if (_DOES_ENTITY_EXIST_AND_IS_ALIVE(unk_0xC1A5EC5C986B98AD()) && _DOES_ENTITY_EXIST_AND_IS_ALIVE(uParam0))
	{
		if (func_42(uParam0) || unk_0xEE404E66D9BD6D2A(unk_0x93E99A2DBCBA9CFA(), uParam0))
		{
			if (unk_0x2D1125ABF6C8F8C4(unk_0xC1A5EC5C986B98AD(), 6))
				num = 40f;
			else
				num = 3f;
		
			if (unk_0xEAEF747543427AC5(unk_0xC1A5EC5C986B98AD(), uParam0, num, num, num, 0, 1, 0))
				if (func_34(uParam0, iParam1))
					return true;
		}
	}

	return false;
}

BOOL func_34(var uParam0, int iParam1) // Position - 0xDC4
{
	return func_35(uParam0, unk_0xC1A5EC5C986B98AD(), iParam1, 1, 250, 7);
}

BOOL func_35(var uParam0, var uParam1, int iParam2, int iParam3, int iParam4, int iParam5) // Position - 0xDDC
{
	BOOL flag;
	var unk;
	int num;

	num = func_41(uParam0, uParam1);

	if (!_DOES_ENTITY_EXIST_AND_IS_ALIVE(uParam0) || !_DOES_ENTITY_EXIST_AND_IS_ALIVE(uParam1))
	{
		if (num != -1)
			func_40(&iLocal_37[num /*4*/]);
	
		return false;
	}

	if (!func_39(uParam0, uParam1, iParam2, iParam3))
		return false;

	if (num == -1)
	{
		num = func_38();
	
		if (num == -1)
			return false;
	
		iLocal_37[num /*4*/].f_1 = uParam0;
		iLocal_37[num /*4*/].f_2 = uParam1;
	}

	unk = { unk_0x985D9D5ED4D5145A(uParam0, 31086, 0f, 0f, 0f) };
	flag = func_36(&iLocal_37[num /*4*/], unk, uParam1, &(iLocal_37[num /*4*/].f_3), uParam0, iParam5);
	return flag || unk_0xA5E11AF0A2B928C1() - iLocal_37[num /*4*/].f_3 < iParam4;
}

BOOL func_36(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, int iParam7) // Position - 0xE9D
{
	var unk;
	var unk2;
	var unk5;
	int num;
	int num2;

	num = 0;

	if (!_DOES_ENTITY_EXIST_AND_IS_ALIVE(uParam4))
	{
		*uParam0 = 0;
		return 0;
	}

	if (*uParam0 == 0)
	{
		unk2 = { func_37(uParam4, iParam7) };
		*uParam0 = unk_0xB4C9A1D39D0533BF(uParam1, unk2 + ((unk2 - uParam1) * { 0.1f, 0.1f, 0.1f }), 511, uParam6, 7);
		return 0;
	}

	num2 = unk_0x5A2817B89A8ECCD2(*uParam0, &unk, &unk2, &unk5, &num);

	if (num2 == 0)
	{
		*uParam0 = 0;
		return 0;
	}
	else if (num2 == 1)
	{
		return 0;
	}

	*uParam0 = 0;

	if (unk_0x71904BD37B848CAF(num))
	{
		_DOES_ENTITY_EXIST_AND_IS_ALIVE(num);
	
		if (unk_0x9C8D7679C15E75FF(num) == uParam4)
		{
			if (bLocal_78)
				unk_0x69151260CB07DF0E(uParam1, unk_0x30BE8A934C020461(uParam4, 1), 255, 0, 0, 255, 0, 0, 255, 255);
		
			*uParam5 = unk_0xA5E11AF0A2B928C1();
			return 1;
		}
	
		return 0;
	}

	if (unk_0xA6B591D40DE982B5(num))
	{
		_DOES_ENTITY_EXIST_AND_IS_ALIVE(num);
	
		if (unk_0x3C3D6D026CF7F51B(uParam4, 0))
		{
			if (unk_0x4DFB7A1A6909D574(num) == unk_0x95DC39736F6748E3(uParam4, 0))
			{
				if (bLocal_78)
					unk_0x69151260CB07DF0E(uParam1, unk_0x30BE8A934C020461(uParam4, 1), 255, 0, 0, 255, 0, 0, 255, 255);
			
				*uParam5 = unk_0xA5E11AF0A2B928C1();
				return 1;
			}
		}
	
		return 0;
	}

	return 0;
}

Vector3 func_37(var uParam0, int iParam1) // Position - 0xFC9
{
	int num;

	if (iParam1 == 7)
	{
		num = unk_0x15A88CFAAFFC6C4B(0, 7);
		iParam1 = num;
	}

	if (iParam1 == 0)
		return unk_0x30BE8A934C020461(uParam0, 1);
	else if (iParam1 == 1)
		return unk_0x985D9D5ED4D5145A(uParam0, 31086, 0f, 0f, 0f);
	else if (iParam1 == 2)
		return unk_0x985D9D5ED4D5145A(uParam0, 39317, 0f, 0f, 0f);
	else if (iParam1 == 3)
		return unk_0x985D9D5ED4D5145A(uParam0, 18905, 0f, 0f, 0f);
	else if (iParam1 == 4)
		return unk_0x985D9D5ED4D5145A(uParam0, 57005, 0f, 0f, 0f);
	else if (iParam1 == 5)
		return unk_0x985D9D5ED4D5145A(uParam0, 63931, 0f, 0f, 0f);
	else if (iParam1 == 6)
		return unk_0x985D9D5ED4D5145A(uParam0, 36864, 0f, 0f, 0f);

	return unk_0x30BE8A934C020461(uParam0, 1);
}

int func_38() // Position - 0x108E
{
	int i;

	for (i = 0; i < iLocal_37; i = i + 1)
	{
		if (iLocal_37[i /*4*/] == 0 && iLocal_37[i /*4*/].f_1 == 0 && iLocal_37[i /*4*/].f_2 == 0)
			return i;
	}

	return -1;
}

BOOL func_39(var uParam0, var uParam1, int iParam2, int iParam3) // Position - 0x10D8
{
	var unk;
	var unk4;
	float num;

	unk = { func_31(unk_0x30BE8A934C020461(uParam1, 1) - unk_0x30BE8A934C020461(uParam0, 1)) };

	if (iParam2 < 0.1f || iParam2 > 360f)
		return true;

	if (iParam3 == 0)
		unk4 = { unk_0x26A9C8234C71B669(uParam0) };
	else
		unk4 = { func_31(unk_0x985D9D5ED4D5145A(uParam0, 31086, 0f, 5f, 0f) - unk_0x985D9D5ED4D5145A(uParam0, 31086, 0f, 0f, 0f)) };

	num = func_30(unk4, unk);

	if (num <= SYSTEM::COS(iParam2 / 2f))
		return false;

	return true;
}

void func_40(var uParam0) // Position - 0x1169
{
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
	return;
}

int func_41(var uParam0, var uParam1) // Position - 0x1184
{
	int i;

	for (i = 0; i < iLocal_37; i = i + 1)
	{
		if (iLocal_37[i /*4*/].f_1 == uParam0 && iLocal_37[i /*4*/].f_2 == uParam1)
			return i;
	}

	return -1;
}

int func_42(var uParam0) // Position - 0x11C3
{
	if (unk_0xBAE1E5327FD0C1E3(unk_0x93E99A2DBCBA9CFA(), uParam0) && unk_0x2D1125ABF6C8F8C4(unk_0xC1A5EC5C986B98AD(), 6))
		return 1;

	return 0;
}

int func_43(Vector3 vParam0, var uParam1, var uParam2, Vector3 vParam3, var uParam4, var uParam5, int iParam6, int iParam7) // Position - 0x11EB
{
	var unk;
	char* str;
	char* str2;

	if (iLocal_84 < iLocal_85)
	{
		if (!_CONVERSATION_IS_DIALOGUE_IN_PROGRESS())
		{
			if (SYSTEM::VDIST2(vParam3, vParam0) < iParam7 * iParam7)
			{
				if (unk_0xA5E11AF0A2B928C1() - uLocal_83 > iParam6 + unk_0x15A88CFAAFFC6C4B(0, 2000))
				{
					unk = 16;
					_CONVERSATION_INITIALIZE_ACTOR(&unk, 3, uLocal_82, "MAUDE", 0, 1);
					str = func_46();
					str2 = func_21();
					_CONVERSATION_ADD_LINE_NO_SUBTITLE(&unk, str, str2, 7, 0, 0);
					uLocal_83 = unk_0xA5E11AF0A2B928C1();
					iLocal_84 = iLocal_84 + 1;
					return 1;
				}
			}
		}
		else
		{
			uLocal_83 = unk_0xA5E11AF0A2B928C1();
		}
	}

	return 0;
}

void _CONVERSATION_ADD_LINE_NO_SUBTITLE(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5) // Position - 0x1275
{
	func_45(uParam0, 145, sParam1, iParam4, iParam5, 0);

	if (iParam3 > 7)
		if (iParam3 < 12)
			iParam3 = 7;

	unk_0xECDAB41968FF21A8(&Global_20591, 0);
	Global_21728 = iParam3;
	TEXT_LABEL_ASSIGN_STRING(&Global_21715, sParam2, 24);
	return;
}

void func_45(var uParam0, eCharacter echParam1, char* sParam2, int iParam3, int iParam4, int iParam5) // Position - 0x12B0
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

char* func_46() // Position - 0x1306
{
	if (IS_BIT_SET(Global_113648.f_24988, 3))
		return "BB4AUD";
	else if (IS_BIT_SET(Global_113648.f_24988, 2))
		return "BB3AUD";
	else if (IS_BIT_SET(Global_113648.f_24988, 1))
		return "BB2AUD";
	else if (IS_BIT_SET(Global_113648.f_24988, 0))
		return "BB1AUD";

	return "MAUDEAU";
}

void _CONVERSATION_INITIALIZE_ACTOR(var uParam0, int iParam1, var uParam2, char* sParam3, int iParam4, int iParam5) // Position - 0x1367
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

void func_48(BOOL bParam0, var uParam1) // Position - 0x1402
{
	var unk;
	var unk4;

	unk = { 2711.1978f, 4134.4253f, 32.90168f };
	unk4 = { 2739.9814f, 4155.2207f, 50.28859f };

	if (bParam0)
	{
		*uParam1 = unk_0x54ECDA2DAB9CFB10(unk, unk4, 0, 1, 1, 1);
		unk_0x983B3504EDCC7AC7(unk, unk4);
		unk_0x8E09E8C52602EBB2(unk, unk4, 0, 1);
		unk_0xC6AD633F6B896D88(unk, unk4, 0);
		unk_0xB7C5BDA2BA69CE7F(2697.2224f, 4119.8936f, 42.79107f, 2746.0396f, 4162.9736f, 43.62732f, 0, 1);
		unk_0xF82BC5193AF62796(2728.3328f, 4144.778f, 43.29292f, 7.5f, 1, 0, 0, 0);
	}
	else
	{
		unk_0x17D46728E18012D3(*uParam1, 0);
		unk_0x09C86D2A7505D5FB();
		unk_0x8E09E8C52602EBB2(unk, unk4, 1, 1);
		unk_0x5F130139CEA77D3E(2697.2224f, 4119.8936f, 42.79107f, 2746.0396f, 4162.9736f, 43.62732f, 1);
	}

	return;
}

int func_49() // Position - 0x14EF
{
	if (IS_BIT_SET(Global_113648.f_24988, 3))
		return 4;
	else if (IS_BIT_SET(Global_113648.f_24988, 2))
		return 4;
	else if (IS_BIT_SET(Global_113648.f_24988, 1))
		return 4;
	else if (IS_BIT_SET(Global_113648.f_24988, 0))
		return 3;

	return 4;
}

void func_50() // Position - 0x1541
{
	var unk;

	if (func_51(uLocal_82))
	{
		if (!unk_0x1AFE963DA61006ED(uLocal_82))
			unk_0x85BAE84748AD1A23(uLocal_82, 1, 0);
	
		unk_0xC5B2830898581862(uLocal_82, 1);
		unk_0xCFFDA1550DF82B52(uLocal_82, 0);
		unk_0xD14067404D35AAE7(uLocal_82, 0);
		unk_0x8386356641D0DED1(uLocal_82, joaat("PLAYER"));
		unk_0x913D968A11C97951(uLocal_82, 0);
		unk_0x692D92ABA47CDA46(uLocal_82, 0);
		unk_0x598D91BBD045C1F3(uLocal_82, 118, 0);
		unk = { 2728.33f, 4145.6f, 43.89f };
	
		if (unk_0x17AE936FF608BF89(unk, 10f, joaat("prop_table_03b"), 0))
		{
			uLocal_80 = unk_0x0744FA5607ECEB91(unk, 10f, joaat("prop_table_03b"), 1, 0, 1);
		
			if (_DOES_ENTITY_EXIST_AND_IS_ALIVE(uLocal_80))
			{
				unk_0xC2E3C377D893C17A(uLocal_80, 2727.4f, 4145.56f, 43.68f, 1, 0, 0, 1);
				unk_0x692C3FDAD7DB53CC(uLocal_80, -92.17f);
				unk_0x2718E9CC165A99F6(uLocal_80, 1);
			}
		}
	
		if (unk_0x17AE936FF608BF89(unk, 10f, joaat("prop_laptop_01a"), 0))
		{
			uLocal_81 = unk_0x0744FA5607ECEB91(unk, 10f, joaat("prop_laptop_01a"), 0, 0, 1);
		
			if (_DOES_ENTITY_EXIST_AND_IS_ALIVE(uLocal_81))
			{
				if (!unk_0x1AFE963DA61006ED(uLocal_81))
					unk_0x85BAE84748AD1A23(uLocal_81, 1, 0);
			
				unk_0xC2E3C377D893C17A(uLocal_81, 2727.686f, 4145.715f, 44.08f, 1, 0, 0, 1);
				unk_0x692C3FDAD7DB53CC(uLocal_81, 71f);
				unk_0x2718E9CC165A99F6(uLocal_81, 1);
			}
		}
	
		if (unk_0x17AE936FF608BF89(unk, 10f, joaat("prop_table_03_chr"), 0))
		{
			uLocal_79 = unk_0x0744FA5607ECEB91(unk, 10f, joaat("prop_table_03_chr"), 0, 0, 1);
		
			if (_DOES_ENTITY_EXIST_AND_IS_ALIVE(uLocal_79))
			{
				if (!unk_0x1AFE963DA61006ED(uLocal_79))
					unk_0x85BAE84748AD1A23(uLocal_79, 1, 0);
			
				unk_0xC2E3C377D893C17A(uLocal_79, 2728.35f, 4145.59f, 43.3f, 1, 0, 0, 1);
				unk_0x692C3FDAD7DB53CC(uLocal_79, -91.28f);
			}
		}
	}

	return;
}

BOOL func_51(var uParam0) // Position - 0x16EE
{
	if (_DOES_ENTITY_EXIST_AND_IS_ALIVE(uParam0))
		if (!unk_0x66599E73DBA5A850(uParam0))
			return true;

	return false;
}

BOOL func_52() // Position - 0x170E
{
	int num;
	int i;
	var unk;

	unk = 32;

	if (!unk_0x66599E73DBA5A850(unk_0xC1A5EC5C986B98AD()))
	{
		num = unk_0xA5D17FEE5372152E(unk_0xC1A5EC5C986B98AD(), &unk, -1);
	
		for (i = 0; i < num; i = i + 1)
		{
			if (func_51(unk[i]))
			{
				if (unk_0x504B9BB48D41C264(unk[i]) == func_53(62))
				{
					uLocal_82 = unk[i];
					return true;
				}
			}
		}
	}

	return false;
}

int func_53(int iParam0) // Position - 0x1775
{
	if (!func_55(iParam0))
		return func_54(iParam0);
	else
		iParam0 != 145;

	return 0;
}

int func_54(int iParam0) // Position - 0x179B
{
	return Global_2028[iParam0 /*29*/];
}

BOOL func_55(int iParam0) // Position - 0x17AA
{
	return iParam0 < 3;
}

void func_56() // Position - 0x17B6
{
	func_48(false, &uLocal_88);

	if (_DOES_ENTITY_EXIST_AND_IS_ALIVE(uLocal_81))
		unk_0x2718E9CC165A99F6(uLocal_81, 0);

	func_58(&uLocal_81, false);

	if (_DOES_ENTITY_EXIST_AND_IS_ALIVE(uLocal_80))
		unk_0x2718E9CC165A99F6(uLocal_80, 0);

	func_58(&uLocal_80, false);

	if (_DOES_ENTITY_EXIST_AND_IS_ALIVE(uLocal_79))
	{
		unk_0x2718E9CC165A99F6(uLocal_79, 0);
	
		if (unk_0x7BB3D8F4F6310EB8(uLocal_79, "special_ped@maude@base", "base_chair", 3))
		{
			unk_0x0A255C4EB327E978(uLocal_79, "base_chair", "special_ped@maude@base", -1000f);
			unk_0xFB58581C53CF4C05(uLocal_79, -1000f, 1);
		}
		else if (unk_0x7BB3D8F4F6310EB8(uLocal_79, func_11(), "Female_Flee_Table_Left_Maude_Chair", 3))
		{
			unk_0x0A255C4EB327E978(uLocal_79, "Female_Flee_Table_Left_Maude_Chair", func_11(), -1000f);
			unk_0xFB58581C53CF4C05(uLocal_79, -1000f, 1);
		}
	}

	func_58(&uLocal_79, false);

	if (func_51(uLocal_82))
	{
		unk_0x71A535529C1CA5DF(uLocal_82, 1);
		unk_0x598D91BBD045C1F3(uLocal_82, 118, 1);
	}

	func_57(&uLocal_82, 1, 0, 1);
	unk_0x0B34FA69ECCE3927(func_11());
	unk_0x675D9C12C73D3DE7();
	return;
}

void func_57(var uParam0, int iParam1, int iParam2, int iParam3) // Position - 0x189B
{
	if (unk_0x7DE17ACDD8BA2642(*uParam0))
	{
		if (!unk_0x66599E73DBA5A850(*uParam0))
		{
			unk_0x351E6B9FD37CFF33(*uParam0, 0, 1);
		
			if (iParam3 == 0)
				unk_0xA0E06A3361300416(*uParam0);
		
			unk_0x71A535529C1CA5DF(*uParam0, iParam1);
		
			if (iParam2 == 1)
				unk_0xC5B2830898581862(*uParam0, 0);
		}
	
		unk_0x1EEF71E3CDD868D3(uParam0);
	}

	return;
}

void func_58(var uParam0, BOOL bParam1) // Position - 0x18EB
{
	if (unk_0x7DE17ACDD8BA2642(*uParam0))
	{
		if (unk_0xEFF022A75A217E08(*uParam0))
			unk_0xA81AA70A4D25E140(*uParam0, 1, 1);
	
		if (!bParam1)
			unk_0xC621CC7313639986(uParam0);
		else
			unk_0x6CB555E9F2BCE87A(*uParam0);
	}

	return;
}

