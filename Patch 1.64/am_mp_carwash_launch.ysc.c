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
	var uLocal_20 = 0;
	var uLocal_21 = 0;
	var uLocal_22 = 0;
	char* sLocal_23 = 0;
	var uLocal_24 = 0;
	var uLocal_25 = 0;
	float fLocal_26 = 0f;
	float fLocal_27 = 0f;
	float fLocal_28 = 0f;
	var uLocal_29 = 0;
	var uLocal_30 = 0;
	float fLocal_31 = 0f;
	var uLocal_32 = 0;
	var uLocal_33 = 0;
	var uLocal_34 = 0;
	float fLocal_35 = 0f;
	float fLocal_36 = 0f;
	var uLocal_37 = 0;
	var uLocal_38 = 0;
	int iLocal_39 = 0;
	var uLocal_40 = 0;
	var uLocal_41 = 0;
	var uLocal_42 = 0;
	int iLocal_43 = 0;
	int iLocal_44 = 0;
	int iLocal_45 = 0;
	int iLocal_46 = 0;
	var uLocal_47 = 0;
	var uLocal_48 = 0;
	var uLocal_49 = 0;
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
	int num;
	int num2;
	char* scriptName;
	Vector3 vector;
	int num3;

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
	sLocal_23 = "NULL";
	fLocal_26 = 80f;
	fLocal_27 = 140f;
	fLocal_28 = 180f;
	fLocal_31 = 0f;
	fLocal_35 = -0.0375f;
	fLocal_36 = 0.17f;
	iLocal_39 = 3;
	iLocal_43 = 1;
	iLocal_44 = 65;
	iLocal_45 = 49;
	iLocal_46 = 64;
	num2 = joaat("carwash1");
	scriptName = "carwash1";
	vector = { uScriptParam_0.f_1[0 /*3*/] };

	if (unk_0x24B651D85CCE5EB4(joaat("am_mp_carwash_launch")) > 1)
		unk_0x675D9C12C73D3DE7();

	if (unk_0xA26A9A07F761D8F8())
	{
		unk_0x389D5B1C24A046B5();
		unk_0xF1440897111F3111(0);
	}
	else
	{
		unk_0x675D9C12C73D3DE7();
	}

	if (Global_2883694)
	{
		if (unk_0x24B651D85CCE5EB4(131838674) == 0)
		{
			unk_0xD9C38C2E8E7C8C13(131838674);
		
			while (!unk_0xAF83A305E6D700D3(131838674))
			{
				SYSTEM::WAIT(0);
			}
		
			SYSTEM::START_NEW_SCRIPT_WITH_NAME_HASH_AND_ARGS(131838674, &uScriptParam_0, 23, DEFAULT);
		}
	
		unk_0x675D9C12C73D3DE7();
	}

	func_12(unk_0xC1A5EC5C986B98AD());
	num3 = 0;

	while (num3 == 0)
	{
		if (func_9(unk_0x93E99A2DBCBA9CFA(), true, false) || func_8() || !func_7(unk_0x93E99A2DBCBA9CFA()) || func_6() || func_5(unk_0x93E99A2DBCBA9CFA()) || func_4(unk_0x93E99A2DBCBA9CFA()) || func_2(unk_0x93E99A2DBCBA9CFA()))
			num3 = 0;
		else
			num3 = 1;
	
		SYSTEM::WAIT(0);
	}

	if (SYSTEM::VDIST2(vector, func_1(157)) < SYSTEM::VDIST2(vector, func_1(156)))
		scriptName = "carwash2";

	num = unk_0xA5E11AF0A2B928C1();
	num2 = unk_0x14580F20CBCE4FA9(scriptName);

	if (unk_0x24B651D85CCE5EB4(num2) == 0)
	{
		unk_0x3EC562D93709C894(scriptName);
	
		while (!unk_0x6CAF14BE58B4BFF8(scriptName))
		{
			unk_0x3EC562D93709C894(scriptName);
			SYSTEM::WAIT(0);
		
			if (unk_0xA5E11AF0A2B928C1() > num + 20000)
				unk_0x675D9C12C73D3DE7();
		}
	
		if (unk_0x6CAF14BE58B4BFF8(scriptName))
		{
			SYSTEM::START_NEW_SCRIPT(scriptName, DEFAULT);
			unk_0x037A80676B8FF0F5(scriptName);
		}
	}

	unk_0x675D9C12C73D3DE7();
	return;
}

Vector3 func_1(int iParam0) // Position - 0x1FF
{
	int num;

	num = iParam0;
	return Global_32543[num /*23*/][0 /*3*/];
}

BOOL func_2(Player plParam0) // Position - 0x217
{
	if (plParam0 != _INVALID_PLAYER_INDEX())
		return IS_BIT_SET(Global_2657589[plParam0 /*466*/].f_321.f_5, 4);

	return false;
}

Player _INVALID_PLAYER_INDEX() // Position - 0x23C
{
	return -1;
}

BOOL func_4(Player plParam0) // Position - 0x245
{
	if (plParam0 != _INVALID_PLAYER_INDEX())
		return IS_BIT_SET(Global_1853910[plParam0 /*862*/].f_267.f_428.f_2, 16);

	return false;
}

BOOL func_5(Player plParam0) // Position - 0x26E
{
	if (plParam0 != _INVALID_PLAYER_INDEX())
		return IS_BIT_SET(Global_1853910[plParam0 /*862*/].f_267.f_365, 29);

	return false;
}

BOOL func_6() // Position - 0x295
{
	return IS_BIT_SET(Global_1853910[unk_0x93E99A2DBCBA9CFA() /*862*/].f_36.f_18, 0);
}

BOOL func_7(int iParam0) // Position - 0x2AE
{
	return IS_BIT_SET(Global_1853910[iParam0 /*862*/].f_139, 6);
}

int func_8() // Position - 0x2C3
{
	Player player;

	player = Global_2672505;

	if (IS_BIT_SET(Global_1890444[player /*129*/].f_14, 0) && Global_1890444[player /*129*/].f_23 == 2)
		return 1;

	return 0;
}

int func_9(int iParam0, BOOL bParam1, BOOL bParam2) // Position - 0x2F6
{
	if (bParam1)
		if (func_10(iParam0))
			return 1;

	!bParam2;

	if (Global_1853910[iParam0 /*862*/] == -1)
		return 0;

	return 1;
}

BOOL func_10(int iParam0) // Position - 0x328
{
	return func_11(iParam0);
}

BOOL func_11(int iParam0) // Position - 0x336
{
	return IS_BIT_SET(Global_1853910[iParam0 /*862*/].f_11.f_1, 0);
}

BOOL func_12(var uParam0) // Position - 0x34D
{
	if (!unk_0x7DE17ACDD8BA2642(uParam0))
		return false;

	return !unk_0x055111B11E6624FD(uParam0, 0);
}

