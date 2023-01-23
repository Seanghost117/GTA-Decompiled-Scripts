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
	int iLocal_20 = 0;
	int iLocal_21 = 0;
	BOOL bLocal_22 = 0;
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

	if (unk_0x55EEDBBFDC6E810F(83))
		func_6();

	if (!Global_1 && !unk_0xCC17806DB0C41C19() && unk_0xAC9206863F7EE1BB())
	{
		unk_0xD111D6644D1D5BD5(1);
	
		if (!unk_0x72474BA05A104E1E())
			if (!unk_0x984CA71F26DF483C())
				unk_0x6D5ACBBD4CE34249(800);
	
		iLocal_20 = unk_0x2B4645565204EA06("MP_BIG_MESSAGE_FREEMODE");
		iLocal_21 = unk_0x2B4645565204EA06("INSTRUCTIONAL_BUTTONS");
	
		while (!unk_0x5FAF55B1F052A2E6(iLocal_20) || !unk_0x5FAF55B1F052A2E6(iLocal_21))
		{
			SYSTEM::WAIT(0);
		}
	
		unk_0x9FD96C5DE6EDFC15(iLocal_20, "SHOW_CENTERED_MP_MESSAGE");
		func_5("INSTALL_COMP" /*Install Complete*/);
		unk_0xAE3413B0654A0035();
		unk_0x9FD96C5DE6EDFC15(iLocal_21, "SET_DATA_SLOT_EMPTY");
		unk_0xAE3413B0654A0035();
		unk_0x9FD96C5DE6EDFC15(iLocal_21, "SET_DATA_SLOT");
		unk_0xC6A3EF6C4A3412C1(0);
		func_4(unk_0x28AEB293270C3DDA(2, 201, 1));
		func_5("HUD_CONTINUE" /*Continue*/);
		unk_0xAE3413B0654A0035();
		unk_0x9FD96C5DE6EDFC15(iLocal_21, "DRAW_INSTRUCTIONAL_BUTTONS");
		unk_0xD546F85F5AF0F231(0);
		unk_0xAE3413B0654A0035();
	
		while (!unk_0x72474BA05A104E1E())
		{
			SYSTEM::WAIT(0);
		}
	
		unk_0x5DE2A87A78E92CA1();
	
		while (!bLocal_22)
		{
			unk_0xAD8D6CE83138FEB5();
			unk_0xCA0440712A8201E9(7);
			unk_0x55CCA1B8F633F628(iLocal_20, 255, 255, 255, 0, 0);
			unk_0x55CCA1B8F633F628(iLocal_21, 255, 255, 255, 0, 0);
		
			if (unk_0x51EB177CA0562B62(2, 201))
				bLocal_22 = true;
		
			SYSTEM::WAIT(0);
		}
	
		unk_0xD111D6644D1D5BD5(0);
		func_3(1, 1);
		func_1();
	}

	Global_78828.f_1 = 0;
	unk_0xECDAB41968FF21A8(&(Global_113648.f_10018.f_25), 0);
	func_6();
	return;
}

int func_1() // Position - 0x17D
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

BOOL _IS_MISSION_REPEAT_ACTIVE(BOOL bExcludeBenchmark) // Position - 0x1C8
{
	if (!bExcludeBenchmark && unk_0x24B651D85CCE5EB4(joaat("benchmark")) > 0)
		return true;

	return IS_BIT_SET(Global_78807, 0);
}

void func_3(int iParam0, int iParam1) // Position - 0x1F0
{
	Global_100720.f_7 = iParam0;
	Global_100720.f_8 = iParam1;
	return;
}

void func_4(var uParam0) // Position - 0x208
{
	unk_0x7DDE71A42D80E8FA(uParam0);
	return;
}

void func_5(char* sParam0) // Position - 0x216
{
	unk_0x2AF11E92DE43CDE3(sParam0);
	unk_0xF8FCA9E7130CE1C8();
	return;
}

void func_6() // Position - 0x228
{
	if (iLocal_20 != 0)
		unk_0xD0AE101DBAA43C98(&iLocal_20);

	if (iLocal_21 != 0)
		unk_0xD0AE101DBAA43C98(&iLocal_21);

	unk_0xCA0440712A8201E9(4);
	unk_0xD111D6644D1D5BD5(0);
	unk_0x675D9C12C73D3DE7();
	return;
}

