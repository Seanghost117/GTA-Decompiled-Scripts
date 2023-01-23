#region Local Var
	int iLocal_0 = 0;
	int iLocal_1 = 0;
	BOOL bLocal_2 = 0;
#endregion

void main() // Position - 0x0
{
	if (unk_0x55EEDBBFDC6E810F(83))
		func_10();

	unk_0xBD933493403CCF9D(0);
	unk_0x061B1200C95204CB(&(Global_113648.f_10018.f_25), 1);
	func_7();
	unk_0xD111D6644D1D5BD5(1);

	if (!unk_0x72474BA05A104E1E())
		unk_0x6D5ACBBD4CE34249(0);

	iLocal_0 = unk_0x2B4645565204EA06("OPENING_CREDITS");

	while (!unk_0x5FAF55B1F052A2E6(iLocal_0))
	{
		func_7();
		SYSTEM::WAIT(0);
	}

	while (!unk_0x72474BA05A104E1E())
	{
		func_7();
		SYSTEM::WAIT(0);
	}

	func_6("TITLE", 0f, 1f, 1.5f, 1f, 0f, 1.5f, 15f);
	iLocal_1 = unk_0xA5E11AF0A2B928C1() + 8000 + SYSTEM::ROUND(2f * 1000f);

	while (!unk_0x2FECE8D166B3056B())
	{
		func_7();
	
		if (!IS_BIT_SET(Global_113648.f_10018.f_25, 1))
		{
			unk_0x55CCA1B8F633F628(iLocal_0, 255, 255, 255, 255, 0);
		
			if (!bLocal_2)
			{
				if (unk_0xA5E11AF0A2B928C1() > iLocal_1)
				{
					func_5("TITLE");
					bLocal_2 = true;
					iLocal_1 = unk_0xA5E11AF0A2B928C1() + SYSTEM::ROUND(2f * 1000f);
				}
			}
			else if (unk_0xA5E11AF0A2B928C1() > iLocal_1)
			{
				unk_0xECDAB41968FF21A8(&(Global_113648.f_10018.f_25), 1);
			
				if (unk_0xAC9206863F7EE1BB() || unk_0xCC17806DB0C41C19())
				{
					func_4(1, 1);
					func_2();
				}
				else
				{
					func_1();
				}
			}
		}
	
		SYSTEM::WAIT(0);
	}

	func_10();
	return;
}

void func_1() // Position - 0x13B
{
	Global_100720 = true;
	return;
}

int func_2() // Position - 0x148
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

BOOL _IS_MISSION_REPEAT_ACTIVE(BOOL bExcludeBenchmark) // Position - 0x193
{
	if (!bExcludeBenchmark && unk_0x24B651D85CCE5EB4(joaat("benchmark")) > 0)
		return true;

	return IS_BIT_SET(Global_78807, 0);
}

void func_4(int iParam0, int iParam1) // Position - 0x1BB
{
	Global_100720.f_7 = iParam0;
	Global_100720.f_8 = iParam1;
	return;
}

void func_5(char* sParam0) // Position - 0x1D3
{
	unk_0x9FD96C5DE6EDFC15(iLocal_0, "HIDE_LOGO");
	unk_0x2AF11E92DE43CDE3("STRING");
	unk_0x76B34CBB6F5FA1BB(sParam0);
	unk_0xF8FCA9E7130CE1C8();
	unk_0xAE3413B0654A0035();
	return;
}

void func_6(char* sParam0, float fParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6, float fParam7) // Position - 0x1FA
{
	unk_0x9FD96C5DE6EDFC15(iLocal_0, "SHOW_LOGO");
	unk_0x2AF11E92DE43CDE3("STRING");
	unk_0x76B34CBB6F5FA1BB(sParam0);
	unk_0xF8FCA9E7130CE1C8();
	unk_0xC49D258FBF3BF214(fParam1);
	unk_0xC49D258FBF3BF214(fParam2);
	unk_0xC49D258FBF3BF214(fParam3);
	unk_0xC49D258FBF3BF214(fParam4);
	unk_0xC49D258FBF3BF214(fParam5);
	unk_0xC49D258FBF3BF214(fParam6);
	unk_0xC49D258FBF3BF214(fParam7);
	unk_0xAE3413B0654A0035();
	return;
}

void func_7() // Position - 0x24B
{
	unk_0xAD8D6CE83138FEB5();
	unk_0x8B438725D591ED78(2, 199, 1);
	unk_0xCA0440712A8201E9(7);
	func_8();
	return;
}

void func_8() // Position - 0x268
{
	unk_0x063E0F2515867ED4();
	func_9();
	return;
}

void func_9() // Position - 0x278
{
	Global_23131.f_134 = 1;
	return;
}

void func_10() // Position - 0x286
{
	unk_0xECDAB41968FF21A8(&(Global_113648.f_10018.f_25), 1);

	if (iLocal_0 != 0)
		unk_0xD0AE101DBAA43C98(&iLocal_0);

	unk_0xCA0440712A8201E9(4);
	unk_0xD111D6644D1D5BD5(0);
	unk_0xBD933493403CCF9D(1);
	unk_0x675D9C12C73D3DE7();
	return;
}

