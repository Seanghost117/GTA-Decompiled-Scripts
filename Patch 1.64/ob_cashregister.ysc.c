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
	int iLocal_18 = 0;
	var uLocal_19 = 0;
	var uLocal_20 = 0;
	var uLocal_21 = 0;
	int iLocal_22 = 0;
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

	if (unk_0xA26A9A07F761D8F8())
	{
		if (IS_BIT_SET(Global_1666891, 1))
		{
			func_25();
		}
		else
		{
			unk_0xCF50389093DECE87(32, 0, -1);
			_NETWORK_ENSURE_SCRIPT_IS_NETWORKED(0, -1, false);
			unk_0xF1440897111F3111(0);
			iLocal_22 = 1;
		}
	}
	else if (unk_0x55EEDBBFDC6E810F(2))
	{
		func_25();
	}

	while (true)
	{
		SYSTEM::WAIT(0);
	
		if (iLocal_22 == 1)
			if (_SHOULD_NETWORK_SCRIPT_TERMINATE())
				func_25();
	
		if (unk_0x7DE17ACDD8BA2642(uScriptParam_0))
		{
			if (unk_0x4B85D97500605AE9(uScriptParam_0))
			{
				switch (iLocal_18)
				{
					case 0:
						if (unk_0x28B891F3A70F9A2A(uScriptParam_0))
						{
							uLocal_19 = { unk_0x30BE8A934C020461(uScriptParam_0, 1) };
							iLocal_18 = 1;
						}
						break;
				
					case 1:
						if (unk_0x34A8666A2B64A52B(uScriptParam_0, 0) && unk_0x51DF6895C236B231(uScriptParam_0) && !unk_0x1AFE963DA61006ED(uScriptParam_0))
						{
							func_1();
							iLocal_18 = 2;
						}
						break;
				
					case 2:
						break;
				}
			}
			else
			{
				func_25();
			}
		}
		else
		{
			func_25();
		}
	}

	return;
}

void func_1() // Position - 0x111
{
	int num;
	int num2;
	var unk;
	int num3;

	num = joaat("prop_money_bag_01");
	num2 = joaat("PICKUP_MONEY_MED_BAG");
	num3 = unk_0x15A88CFAAFFC6C4B(70, 121);

	if (unk_0xA26A9A07F761D8F8())
	{
		num = joaat("prop_cash_pile_01");
		num3 = unk_0x15A88CFAAFFC6C4B(50, 101);
		num3 = func_13(num3, 1);
	}

	unk_0xECDAB41968FF21A8(&unk, 3);
	unk_0xECDAB41968FF21A8(&unk, 4);
	unk_0x852EC2A7DE66202D(num);

	while (!unk_0x0CBB7C273DED26E7(num))
	{
		SYSTEM::WAIT(0);
	}

	if (unk_0xA26A9A07F761D8F8())
		func_2(num2, unk_0x223044F9F739377D(uLocal_19, 1067030938, 1069547520), unk, num3, num, false, 0);
	else
		unk_0x8D2015F36A52256C(num2, unk_0x223044F9F739377D(uLocal_19, 1067030938, 1069547520), unk, num3, 0, num);

	return;
}

struct<5> func_2(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, int iParam5, int iParam6, BOOL bParam7, int iParam8) // Position - 0x1C5
{
	var unk;

	unk = 123;

	if (func_12() && func_11(iParam0))
		unk = { func_3(iParam0, uParam1, uParam4, iParam5, iParam6, bParam7) };
	else
		unk.f_4 = unk_0x16526865BBC2DF87(iParam0, uParam1, uParam4, iParam5, iParam6, bParam7, iParam8);

	return unk;
}

struct<5> func_3(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, int iParam5, int iParam6, BOOL bParam7) // Position - 0x21C
{
	var unk;
	int num;
	int num2;
	int num3;

	unk = 123;

	if (func_10() == -1)
		return unk;

	num = func_9(-1);

	if (num == -1)
		return unk;

	num2 = 123;
	num2 = iParam0;
	num2.f_1 = { uParam1 };

	if (func_4(&num2) != -1)
		return unk;

	unk_0xECDAB41968FF21A8(&uParam4, 5);
	num2.f_4 = unk_0x03EFEB142988DB87(iParam0, uParam1, uParam4, iParam5, iParam6, bParam7, 0);
	num3 = unk_0xD056B8CB0E6A5169();

	if (bParam7)
	{
		Global_1914091[num3 /*297*/].f_98.f_21[num /*14*/].f_12 = unk_0x63C7B2D430A46FC3();
		Global_1914091[num3 /*297*/].f_98.f_21[num /*14*/].f_13 = unk_0xCF6C13BA964C2E66();
	
		if (Global_1914091[num3 /*297*/].f_98.f_21[num /*14*/].f_13 == 0)
		{
			Global_1914091[num3 /*297*/].f_98.f_21[num /*14*/].f_13 = unk_0x3B01E4A065DEF5C7();
			Global_1914091[num3 /*297*/].f_98.f_21[num /*14*/].f_11 = 1;
		}
		else
		{
			Global_1914091[num3 /*297*/].f_98.f_21[num /*14*/].f_11 = 2;
		}
	}

	Global_1914091[num3 /*297*/].f_98.f_21[num /*14*/] = { num2 };
	Global_1914091[num3 /*297*/].f_98.f_21[num /*14*/].f_5 = { uParam1 };
	Global_1914091[num3 /*297*/].f_98.f_21[num /*14*/].f_8 = uParam4;
	Global_1914091[num3 /*297*/].f_98.f_21[num /*14*/].f_9 = iParam5;
	Global_1914091[num3 /*297*/].f_98.f_21[num /*14*/].f_10 = iParam6;
	return num2;
}

int func_4(var uParam0) // Position - 0x399
{
	int i;

	if (!func_7(uParam0))
		return -1;

	for (i = 0; i < 10; i = i + 1)
	{
		if (func_5(uParam0, &Global_2652258.f_2452[i /*16*/]))
			return i;
	}

	return -1;
}

BOOL func_5(var uParam0, var uParam1) // Position - 0x3DC
{
	if (*uParam0 == *uParam1 && func_6(uParam0->f_1, uParam1->f_1, false) && uParam0->f_4 == uParam1->f_4)
		return true;

	return false;
}

BOOL func_6(float fParam0, var uParam1, var uParam2, float fParam3, var uParam4, var uParam5, BOOL bParam6) // Position - 0x417
{
	if (bParam6)
		return fParam0 == fParam3 && fParam0.f_1 == fParam3.f_1;

	return fParam0 == fParam3 && fParam0.f_1 == fParam3.f_1 && fParam0.f_2 == fParam3.f_2;
}

BOOL func_7(var uParam0) // Position - 0x45E
{
	if (*uParam0 == 123 || _IS_NULL_VECTOR(uParam0->f_1) || uParam0->f_4 == 0)
		return false;

	return true;
}

BOOL _IS_NULL_VECTOR(float fParam0, var uParam1, var uParam2) // Position - 0x490
{
	if (fParam0 == 0f && fParam0.f_1 == 0f && fParam0.f_2 == 0f)
		return true;

	return false;
}

int func_9(int iParam0) // Position - 0x4BA
{
	int num;
	int i;

	if (iParam0 == -1)
		iParam0 = unk_0xD056B8CB0E6A5169();

	num = -1;

	for (i = 0; i < 10; i = i + 1)
	{
		if (!func_7(&Global_1914091[iParam0 /*297*/].f_98.f_21[i /*14*/]))
		{
			num = i;
			break;
		}
	}

	return num;
}

int func_10() // Position - 0x506
{
	int num;
	int i;

	num = -1;

	for (i = 0; i < 10; i = i + 1)
	{
		if (!func_7(&Global_2652258.f_2452[i /*16*/]))
		{
			num = i;
			break;
		}
	}

	return num;
}

BOOL func_11(int iParam0) // Position - 0x540
{
	switch (iParam0)
	{
		case joaat("PICKUP_MONEY_VARIABLE"):
		case joaat("PICKUP_MONEY_CASE"):
		case joaat("PICKUP_MONEY_WALLET"):
		case joaat("PICKUP_MONEY_PURSE"):
		case joaat("PICKUP_MONEY_DEP_BAG"):
		case joaat("PICKUP_MONEY_MED_BAG"):
		case joaat("PICKUP_MONEY_PAPER_BAG"):
		case joaat("PICKUP_MONEY_SECURITY_CASE"):
		case joaat("PICKUP_GANG_ATTACK_MONEY"):
			return 1;
	
		default:
		
	}

	return 0;
}

BOOL func_12() // Position - 0x58A
{
	return Global_262145.f_30937;
}

int func_13(int iParam0, int iParam1) // Position - 0x599
{
	float value;

	switch (iParam1)
	{
		case 0:
			break;
	
		case 1:
			if (iParam0 > 0)
			{
				value = SYSTEM::TO_FLOAT(iParam0) * Global_262145;
				iParam0 = SYSTEM::ROUND(value);
			}
			break;
	
		default:
			break;
	}

	return iParam0;
}

BOOL _SHOULD_NETWORK_SCRIPT_TERMINATE() // Position - 0x5DA
{
	if (Global_1575035 == false)
		if (!unk_0xA26A9A07F761D8F8())
			return true;

	if (func_21())
		return true;

	if (Global_2696915)
		return true;

	if (func_20())
		return true;

	if (_DOES_EVENT_OF_TYPE_EXIST(159))
		if (!func_18())
			return true;

	if (_DOES_EVENT_OF_TYPE_EXIST(157))
		return true;

	if (!unk_0x67EBFCF2F78761B9())
		return true;

	if (_GET_CURRENT_SESSION_TYPE_SCRIPT_HASH() != 0)
		if (unk_0x24B651D85CCE5EB4(_GET_CURRENT_SESSION_TYPE_SCRIPT_HASH()) == 0)
			return true;

	return false;
}

int _GET_CURRENT_SESSION_TYPE_SCRIPT_HASH() // Position - 0x65E
{
	switch (func_17())
	{
		case 0:
			return func_16();
	
		case 2:
			return joaat("creator");
	}

	return 0;
}

int func_16() // Position - 0x691
{
	switch (Global_2697019)
	{
		case 0:
			return joaat("freemode");
	
		default:
		
	}

	return joaat("freemode");
}

int func_17() // Position - 0x6B5
{
	return Global_32163;
}

BOOL func_18() // Position - 0x6C0
{
	return Global_2683862.f_698;
}

BOOL _DOES_EVENT_OF_TYPE_EXIST(int iParam0) // Position - 0x6CF
{
	if (unk_0x36D3321E138A43F0(1, iParam0))
		return true;

	return false;
}

BOOL func_20() // Position - 0x6E6
{
	return Global_2694524;
}

BOOL func_21() // Position - 0x6F2
{
	return Global_2683862.f_693;
}

int _NETWORK_ENSURE_SCRIPT_IS_NETWORKED(int iParam0, int iParam1, BOOL bNoTerminate) // Position - 0x701
{
	int i;

	for (i = unk_0xA1089192E8AE61F4(); i != 2; i = unk_0xA1089192E8AE61F4())
	{
		if (i == 3 || i == 4 || i == 5 || i == 6)
			if (!bNoTerminate)
				func_24();
			else
				return 0;
	
		if (!func_23(false))
		{
			if (iParam0 == 0)
			{
				if (!unk_0xA26A9A07F761D8F8())
					if (!bNoTerminate)
						func_24();
					else
						return 0;
			
				if (func_21())
					if (!bNoTerminate)
						func_24();
					else
						return 0;
			
				if (_DOES_EVENT_OF_TYPE_EXIST(157))
					if (!bNoTerminate)
						func_24();
					else
						return 0;
			}
			else if (!unk_0xE3C3FF8D5649A77D())
			{
				if (!bNoTerminate)
					func_24();
				else
					return 0;
			}
		}
	
		SYSTEM::WAIT(0);
	}

	if (iParam1 > -1)
		Global_1574666 = i;

	if (iParam0 == 0)
		if (!unk_0xA26A9A07F761D8F8())
			if (!bNoTerminate)
				func_24();
			else
				return 0;
	else if (!unk_0xE3C3FF8D5649A77D())
		if (!bNoTerminate)
			func_24();
		else
			return 0;

	return 1;
}

BOOL func_23(BOOL bParam0) // Position - 0x817
{
	bParam0;
	return Global_1575035;
}

void func_24() // Position - 0x828
{
	unk_0x675D9C12C73D3DE7();
	return;
}

void func_25() // Position - 0x834
{
	unk_0x675D9C12C73D3DE7();
	return;
}

