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
	var uLocal_21 = 0;
	var uLocal_22 = 0;
	float fLocal_23 = 0f;
	float fLocal_24 = 0f;
	float fLocal_25 = 0f;
	var uLocal_26 = 0;
	var uLocal_27 = 0;
	int iLocal_28 = 0;
	int iLocal_29 = 0;
	var uLocal_30 = 0;
	var uLocal_31 = 0;
	var uLocal_32 = 0;
	int iLocal_33 = 0;
	int iLocal_34 = 0;
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
	fLocal_23 = 80f;
	fLocal_24 = 140f;
	fLocal_25 = 180f;
	iLocal_29 = -1;
	uLocal_30 = { 0f, 0f, 0f };

	if (unk_0x55EEDBBFDC6E810F(2))
		unk_0x675D9C12C73D3DE7();

	while (true)
	{
		SYSTEM::WAIT(0);
	
		if (!unk_0xA26A9A07F761D8F8())
			unk_0x675D9C12C73D3DE7();
	
		if (func_23(unk_0x93E99A2DBCBA9CFA()) && unk_0x7DE17ACDD8BA2642(func_22()))
			iLocal_33 = func_22();
		else
			iLocal_33 = unk_0xC1A5EC5C986B98AD();
	
		unk_0x055111B11E6624FD(iLocal_33, 0);
		func_1();
	}

	return;
}

void func_1() // Position - 0xB1
{
	Vector3 vector;
	Vector3 vector2;
	BOOL flag;
	int i;

	func_21();

	if (iLocal_29 != -1 && func_20(iLocal_29))
	{
		vector = { unk_0x30BE8A934C020461(iLocal_33, 0) };
		vector2 = { func_19(iLocal_29) };
	
		if (SYSTEM::VDIST2(vector2, vector) < (float)func_18(iLocal_29))
		{
			flag = false;
			i = 0;
		
			for (i = 0; i < func_17(iLocal_29); i = i + 1)
			{
				if (!flag)
					if (unk_0x9DC9E896F189AAA5(iLocal_33, func_16(iLocal_29, i), func_15(iLocal_29, i), func_14(iLocal_29, i), 0, 1, 0))
						flag = true;
			}
		
			if (flag)
			{
				unk_0x6F02C1D10DD36CE1(unk_0x14580F20CBCE4FA9(func_13(iLocal_29)), vector2, vector2.f_1, func_12(iLocal_29), func_11(iLocal_29));
				func_10(iLocal_29);
			}
		}
	}

	if (unk_0xA26A9A07F761D8F8())
	{
		if (func_2())
		{
			if (IS_BIT_SET(iLocal_34, 1))
				unk_0x061B1200C95204CB(&iLocal_34, 1);
		
			if (unk_0xFEE065E56A9BEF3F())
			{
				if (!IS_BIT_SET(iLocal_34, 0))
				{
					unk_0xADD75225565711C1(15, 1, -1);
					unk_0xECDAB41968FF21A8(&iLocal_34, 0);
				}
			}
			else if (IS_BIT_SET(iLocal_34, 0))
			{
				unk_0xADD75225565711C1(15, 0, -1);
				unk_0x061B1200C95204CB(&iLocal_34, 0);
			}
		}
		else if (!IS_BIT_SET(iLocal_34, 1))
		{
			unk_0xADD75225565711C1(15, 0, -1);
			unk_0x061B1200C95204CB(&iLocal_34, 0);
			unk_0xECDAB41968FF21A8(&iLocal_34, 1);
		}
	}

	return;
}

BOOL func_2() // Position - 0x1E7
{
	Player player;

	if (func_7(unk_0x93E99A2DBCBA9CFA()))
		return true;

	if (_IS_PLAYER_IN_AN_ORGANIZATION(unk_0x93E99A2DBCBA9CFA(), true))
	{
		player = func_4();
	
		if (player != _INVALID_PLAYER_INDEX())
			if (func_7(player))
				return true;
	}

	return false;
}

Player _INVALID_PLAYER_INDEX() // Position - 0x227
{
	return -1;
}

Player func_4() // Position - 0x230
{
	return Global_1894573[unk_0x93E99A2DBCBA9CFA() /*608*/].f_10;
}

BOOL _IS_PLAYER_IN_AN_ORGANIZATION(Player plParam0, BOOL bCanBeBoss) // Position - 0x245
{
	if (!bCanBeBoss)
		if (_IS_PLAYER_BOSS_OF_ORGANIZATION(plParam0))
			return false;

	return Global_1894573[plParam0 /*608*/].f_10 != _INVALID_PLAYER_INDEX();
}

BOOL _IS_PLAYER_BOSS_OF_ORGANIZATION(Player plParam0) // Position - 0x270
{
	if (plParam0 != _INVALID_PLAYER_INDEX())
		if (Global_1894573[plParam0 /*608*/].f_10 != _INVALID_PLAYER_INDEX())
			return Global_1894573[plParam0 /*608*/].f_10 == plParam0;

	return false;
}

BOOL func_7(Player plParam0) // Position - 0x2A5
{
	int num;

	if (func_9(plParam0))
	{
		num = func_8(plParam0);
	
		if (num == 3 || num == 4 || num == 5)
			return true;
	}

	return false;
}

int func_8(Player plParam0) // Position - 0x2DE
{
	if (plParam0 != _INVALID_PLAYER_INDEX())
		return Global_1853910[plParam0 /*862*/].f_267.f_293;

	return 0;
}

BOOL func_9(Player plParam0) // Position - 0x302
{
	if (plParam0 != _INVALID_PLAYER_INDEX())
		return Global_1853910[plParam0 /*862*/].f_267.f_293 != 0;

	return false;
}

void func_10(int iParam0) // Position - 0x328
{
	var unk;

	unk = { unk_0x30BE8A934C020461(iLocal_33, 0) };
	unk_0x8F78EA97D41803A8(unk, unk.f_1);

	switch (iParam0)
	{
		case 0:
			break;
	
		case 1:
			break;
	
		case 2:
			unk = { unk_0x30BE8A934C020461(iLocal_33, 0) };
			unk_0x8F78EA97D41803A8(unk, unk.f_1);
			break;
	
		case 3:
			unk_0x36932F704509CA4F();
			break;
	
		case 4:
			unk_0x36932F704509CA4F();
			break;
	}

	return;
}

int func_11(int iParam0) // Position - 0x396
{
	var unk;

	switch (iParam0)
	{
		case 0:
			return 0;
	
		case 1:
			unk = { unk_0x30BE8A934C020461(iLocal_33, 0) };
		
			if (unk.f_2 < 9.7796f)
				return 0;
			else if (unk.f_2 > 9.7796f && unk.f_2 < 16f)
				return 1;
			else
				return 2;
			break;
	
		case 2:
			unk = { unk_0x30BE8A934C020461(iLocal_33, 0) };
		
			if (unk.f_2 < 178.9f)
				return 0;
			else if (unk.f_2 > 178.9f && unk.f_2 < 188.7f)
				return 1;
			else
				return 2;
			break;
	
		case 3:
			return 0;
	
		case 4:
			return 0;
	}

	return 0;
}

int func_12(int iParam0) // Position - 0x46B
{
	switch (iParam0)
	{
		case 0:
			return 0;
	
		case 1:
			return 0;
	
		case 2:
			return 0;
	
		case 3:
			return 0;
	
		case 4:
			return 0;
	}

	return 0;
}

char* func_13(int iParam0) // Position - 0x4BC
{
	switch (iParam0)
	{
		case 0:
			return "V_FakeBoatPO1SH2A";
	
		case 1:
			return "V_FakeWarehousePO103";
	
		case 2:
			return "V_FakeKortzCenter";
	
		case 3:
			return "V_FakePrison";
	
		case 4:
			return "V_FakeMilitaryBase";
	}

	return "";
}

float func_14(int iParam0, int iParam1) // Position - 0x518
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					return 28.125f;
			}
			break;
	
		case 1:
			switch (iParam1)
			{
				case 0:
					return 32.6875f;
			
				case 1:
					return 13.1875f;
			
				case 2:
					return 16.25f;
			
				case 3:
					return 21.75f;
			}
			break;
	
		case 2:
			switch (iParam1)
			{
				case 0:
					return 95f;
			
				case 1:
					return 78.75f;
			
				case 2:
					return 70.6875f;
			
				case 3:
					return 64.4375f;
			
				case 4:
					return 32.375f;
			
				case 5:
					return 19f;
			
				case 6:
					return 19f;
			
				case 7:
					return 19.78125f;
			
				case 8:
					return 32.0625f;
			
				case 9:
					return 35.8125f;
			
				case 10:
					return 30.5f;
			}
			break;
	
		case 3:
			switch (iParam1)
			{
				case 0:
					return 3000f;
			}
			break;
	
		case 4:
			switch (iParam1)
			{
				case 0:
					return 1500f;
			}
			break;
	}

	return 0f;
}

Vector3 func_15(int iParam0, int iParam1) // Position - 0x6AA
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					return 1240.5371f, -3057.2888f, 40.75164f;
			}
			break;
	
		case 1:
			switch (iParam1)
			{
				case 0:
					return 34.278374f, -2654.2437f, 20.942299f;
			
				case 1:
					return 13.931628f, -2654.5605f, 14.44239f;
			
				case 2:
					return 55.595722f, -2667.4985f, 10.822453f;
			
				case 3:
					return 34.586597f, -2746.3875f, 10.950064f;
			}
			break;
	
		case 2:
			switch (iParam1)
			{
				case 0:
					return -2169.1704f, 256.7264f, 203.40813f;
			
				case 1:
					return -2216.3938f, 329.4761f, 201.36168f;
			
				case 2:
					return -2345.3528f, 350.78818f, 189.65222f;
			
				case 3:
					return -2288.0972f, 388.99094f, 200.9045f;
			
				case 4:
					return -2310.2632f, 406.638f, 200.90408f;
			
				case 5:
					return -2169.2214f, 260.5679f, 202.42944f;
			
				case 6:
					return -2258.7776f, 166.9506f, 202.83177f;
			
				case 7:
					return -2236.9731f, 285.59576f, 203.03947f;
			
				case 8:
					return -2211.3618f, 303.67413f, 214.93228f;
			
				case 9:
					return -2282.0981f, 383.09036f, 201.0395f;
			
				case 10:
					return -2277.9302f, 356.44424f, 201.10155f;
			}
			break;
	
		case 3:
			switch (iParam1)
			{
				case 0:
					return 200f, 2600f, -5f;
			}
			break;
	
		case 4:
			switch (iParam1)
			{
				case 0:
					return -1451.2051f, 2689.4402f, -37.62654f;
			}
			break;
	}

	return uLocal_30;
}

Vector3 func_16(int iParam0, int iParam1) // Position - 0x8F3
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					return 1240.5345f, -2880.354f, -19.964888f;
			}
			break;
	
		case 1:
			switch (iParam1)
			{
				case 0:
					return 34.15308f, -2747.0674f, 1.137565f;
			
				case 1:
					return 13.957768f, -2700.626f, 5.046232f;
			
				case 2:
					return 55.61185f, -2687.6814f, 5.005801f;
			
				case 3:
					return 34.56926f, -2759.479f, -0.030933f;
			}
			break;
	
		case 2:
			switch (iParam1)
			{
				case 0:
					return -2317.3801f, 191.63188f, 165.40373f;
			
				case 1:
					return -2357.9949f, 264.02972f, 162.79884f;
			
				case 2:
					return -2261.4329f, 387.3963f, 154.35222f;
			
				case 3:
					return -2326.399f, 408.3378f, 140.31822f;
			
				case 4:
					return -2304.6167f, 460.21268f, 140.21474f;
			
				case 5:
					return -2150.825f, 216.41681f, 162.80118f;
			
				case 6:
					return -2172.7651f, 203.5957f, 167.41351f;
			
				case 7:
					return -2191.0364f, 305.96097f, 159.62502f;
			
				case 8:
					return -2227.613f, 340.05872f, 165.13574f;
			
				case 9:
					return -2244.4097f, 399.57635f, 137.5101f;
			
				case 10:
					return -2243.2615f, 371.4072f, 137.2722f;
			}
			break;
	
		case 3:
			switch (iParam1)
			{
				case 0:
					return 3200f, 2600f, 3000f;
			}
			break;
	
		case 4:
			switch (iParam1)
			{
				case 0:
					return -2841.1074f, 3506.837f, 1000.47363f;
			}
			break;
	}

	return uLocal_30;
}

int func_17(int iParam0) // Position - 0xB3C
{
	switch (iParam0)
	{
		case 0:
			return 1;
	
		case 1:
			return 4;
	
		case 2:
			return 11;
	
		case 3:
			return 1;
	
		case 4:
			return 1;
	}

	return 0;
}

int func_18(int iParam0) // Position - 0xB8E
{
	switch (iParam0)
	{
		case 0:
			return 10000;
	
		case 1:
			return 10000;
	
		case 2:
			return 250000;
	
		case 3:
			return 9000000;
	
		case 4:
			return 2250000;
	}

	return 0;
}

Vector3 func_19(int iParam0) // Position - 0xBEC
{
	switch (iParam0)
	{
		case 0:
			return 1240f, -2970f, 12.2f;
	
		case 1:
			return 40f, -2720f, 12f;
	
		case 2:
			return -2250f, 300f, 182.2f;
	
		case 3:
			return 1700f, 2580f, 80f;
	
		case 4:
			return -2250f, 3100f, 80f;
	}

	return uLocal_30;
}

BOOL func_20(int iParam0) // Position - 0xC86
{
	switch (iParam0)
	{
		case 0:
			break;
	
		case 1:
			break;
	
		case 2:
			break;
	
		case 3:
			break;
	
		case 4:
			break;
	}

	return true;
}

void func_21() // Position - 0xCC3
{
	Vector3 vector;

	iLocal_28 = iLocal_28 + 1;

	if (iLocal_28 > 4)
		iLocal_28 = 0;

	if (iLocal_28 != iLocal_29)
	{
		if (iLocal_29 == -1)
		{
			iLocal_29 = iLocal_28;
		}
		else
		{
			vector = { unk_0x30BE8A934C020461(iLocal_33, 0) };
		
			if (SYSTEM::VDIST2(func_19(iLocal_28), vector) < SYSTEM::VDIST2(func_19(iLocal_29), vector))
				iLocal_29 = iLocal_28;
		}
	}

	return;
}

int func_22() // Position - 0xD1D
{
	return Global_2621446.f_2;
}

int func_23(int iParam0) // Position - 0xD2B
{
	if (_NETWORK_IS_PLAYER_IN_SCTV(iParam0, 0))
		return 1;

	if (func_24())
		if (iParam0 == unk_0x93E99A2DBCBA9CFA())
			return 1;

	if (IS_BIT_SET(Global_2657589[iParam0 /*466*/].f_199, 2))
		return 1;

	return 0;
}

BOOL func_24() // Position - 0xD6A
{
	return IS_BIT_SET(Global_2621446, 3);
}

BOOL _NETWORK_IS_PLAYER_IN_SCTV(int player, int bCheckTeam) // Position - 0xD78
{
	BOOL flag;

	if (player == unk_0x93E99A2DBCBA9CFA())
		flag = func_26(-1, false) == 8;
	else
		flag = Global_1853910[player /*862*/].f_205 == 8;

	if (bCheckTeam == 1)
		if (unk_0xE6DEE82DB0922DF0(player))
			flag = unk_0x4292F1DE8BA2D22E(player) == 8;

	return flag;
}

int func_26(int iParam0, BOOL bParam1) // Position - 0xDC3
{
	int num;
	int num2;

	num2 = iParam0;

	if (num2 == -1)
		num2 = func_27();

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

int func_27() // Position - 0xE04
{
	return Global_1574918;
}

