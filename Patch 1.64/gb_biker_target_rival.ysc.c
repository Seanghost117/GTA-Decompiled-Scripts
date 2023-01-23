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
	int iLocal_35 = 0;
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
	fLocal_30 = 80f;
	fLocal_31 = 140f;
	fLocal_32 = 180f;
	func_92();

	while (true)
	{
		func_91();
	
		if (_SHOULD_NETWORK_SCRIPT_TERMINATE())
			func_85();
	
		if (Global_2793044.f_5225.f_754 == 0)
			func_85();
	
		switch (iLocal_35)
		{
			case 0:
				iLocal_35 = 1;
				break;
		
			case 1:
				if (func_11())
					iLocal_35 = 2;
				break;
		
			case 2:
				if (!func_1())
					iLocal_35 = 4;
				break;
		
			case 4:
				func_85();
				break;
		}
	}

	return;
}

BOOL func_1() // Position - 0xD3
{
	Player player;

	if (func_7(true))
	{
		player = Global_2793044.f_5225.f_753;
	
		if (player != _INVALID_PLAYER_INDEX())
		{
			if (func_4(player))
			{
				func_2(player);
				return false;
			}
		}
		else
		{
			func_2(player);
			return false;
		}
	}
	else
	{
		return false;
	}

	return true;
}

void func_2(Player plParam0) // Position - 0x120
{
	if (plParam0 != _INVALID_PLAYER_INDEX())
		func_3(plParam0);

	Global_2793044.f_5225.f_753 = _INVALID_PLAYER_INDEX();
	return;
}

void func_3(Player plParam0) // Position - 0x145
{
	Player player;

	player = plParam0;
	unk_0x061B1200C95204CB(&(Global_2646729.f_388), player);
	unk_0x061B1200C95204CB(&(Global_2646729.f_389), player);
	unk_0x061B1200C95204CB(&(Global_2646729.f_390), player);
	unk_0x061B1200C95204CB(&(Global_2646729.f_392), player);
	unk_0x061B1200C95204CB(&(Global_2646729.f_396), player);
	unk_0x061B1200C95204CB(&(Global_2646729.f_391), player);
	return;
}

BOOL func_4(Player plParam0) // Position - 0x19F
{
	if (!_NETWORK_IS_PLAYER_VALID(plParam0, false, true))
		return true;

	return false;
}

BOOL _NETWORK_IS_PLAYER_VALID(Player player, BOOL bIsPlaying, BOOL bUnk) // Position - 0x1B8
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

Player _INVALID_PLAYER_INDEX() // Position - 0x218
{
	return -1;
}

BOOL func_7(BOOL bParam0) // Position - 0x221
{
	return func_8(unk_0x93E99A2DBCBA9CFA(), bParam0);
}

BOOL func_8(Player plParam0, BOOL bParam1) // Position - 0x233
{
	return func_9(plParam0, bParam1, 1);
}

int func_9(Player plParam0, BOOL bParam1, int iParam2) // Position - 0x244
{
	Player player;

	if (plParam0 == _INVALID_PLAYER_INDEX())
		return 0;

	if (!bParam1)
		if (func_10(plParam0, iParam2))
			return 0;

	player = Global_1894573[plParam0 /*608*/].f_10;

	if (player != _INVALID_PLAYER_INDEX() && Global_1894573[player /*608*/].f_10.f_428 == iParam2)
		return 1;

	return 0;
}

BOOL func_10(Player plParam0, int iParam1) // Position - 0x2A0
{
	if (plParam0 != _INVALID_PLAYER_INDEX())
		if (Global_1894573[plParam0 /*608*/].f_10 != _INVALID_PLAYER_INDEX())
			if (Global_1894573[plParam0 /*608*/].f_10 == plParam0 && Global_1894573[plParam0 /*608*/].f_10.f_428 == iParam1)
				return true;

	return false;
}

BOOL func_11() // Position - 0x2EF
{
	Player player;

	if (func_7(true))
	{
		player = Global_2793044.f_5225.f_753;
	
		if (player != _INVALID_PLAYER_INDEX())
			if (func_12(player))
				return true;
	}

	return false;
}

BOOL func_12(Player plParam0) // Position - 0x322
{
	if (_NETWORK_IS_PLAYER_VALID(plParam0, false, true))
	{
		func_83(plParam0, 432, true, false);
	
		if (func_82(plParam0))
			func_79(plParam0, func_80(func_81(unk_0x93E99A2DBCBA9CFA())), true, false);
	
		if (func_77(plParam0))
			func_75(plParam0, true, true, false);
	
		func_69(plParam0, true, false);
		func_13(plParam0, true, 5000);
		return true;
	}

	return false;
}

void func_13(Player plParam0, BOOL bParam1, int iParam2) // Position - 0x386
{
	Player player;

	if (plParam0 == _INVALID_PLAYER_INDEX())
		return;

	if (iParam2 > 200000)
		iParam2 = 200000;

	player = plParam0;

	if (bParam1)
	{
		if (plParam0 == Global_2672505)
		{
		}
		else if (unk_0xCE4AAA035282336C(Global_2646729[player]))
		{
			unk_0xECDAB41968FF21A8(&(Global_2646729.f_370), player);
			unk_0x061B1200C95204CB(&(Global_2646729.f_375), player);
			unk_0x37B37B8045788E6A(Global_2646729[player], 1);
			unk_0xC873140113BC687D(Global_2646729[player], 250);
			func_14(plParam0);
		
			if (iParam2 < 0)
				unk_0xECDAB41968FF21A8(&(Global_2646729.f_375), player);
			else
				Global_2646729.f_201[player] = unk_0xEBF66E179FB47D4E(unk_0x0DB7F8294D73598B(), iParam2);
		}
		else
		{
			unk_0xECDAB41968FF21A8(&(Global_2646729.f_370), player);
			unk_0x061B1200C95204CB(&(Global_2646729.f_375), player);
		
			if (iParam2 < 0)
				unk_0xECDAB41968FF21A8(&(Global_2646729.f_375), player);
			else
				Global_2646729.f_201[player] = unk_0xEBF66E179FB47D4E(unk_0x0DB7F8294D73598B(), iParam2);
		}
	}

	if (!bParam1)
	{
		unk_0x061B1200C95204CB(&(Global_2646729.f_370), player);
		unk_0x061B1200C95204CB(&(Global_2646729.f_375), player);
	
		if (unk_0xCE4AAA035282336C(Global_2646729[player]))
		{
			func_14(plParam0);
			unk_0x37B37B8045788E6A(Global_2646729[player], 0);
		}
	}

	return;
}

void func_14(Player plParam0) // Position - 0x4BB
{
	Player player;

	player = plParam0;

	if (_NETWORK_IS_PLAYER_VALID(plParam0, false, true))
	{
		if (unk_0xCE4AAA035282336C(Global_2646729[player]))
		{
			Global_2646729.f_1504[player] = func_15(plParam0);
			unk_0xC2E0B90856D55E49(Global_2646729[player], Global_2646729.f_1504[player]);
		}
	}

	return;
}

int func_15(Player plParam0) // Position - 0x509
{
	Player player;
	int num;

	player = plParam0;

	if (_NETWORK_IS_PLAYER_VALID(plParam0, false, true))
	{
		if (unk_0xCE4AAA035282336C(Global_2646729[player]))
		{
			num = unk_0xDCC38379946BD34E(Global_2646729[player]);
		
			if (IS_BIT_SET(Global_2646729.f_386, player) || IS_BIT_SET(Global_2646729.f_385, player))
			{
				return 1;
			}
			else if (IS_BIT_SET(Global_2646729.f_371, player) || IS_BIT_SET(Global_2646729.f_370, player) || IS_BIT_SET(Global_2646729.f_388, player))
			{
				return func_66(10);
			}
			else
			{
				switch (num)
				{
					case 253:
					case 252:
					case 255:
						return func_66(7);
				
					case 257:
					case 258:
					case 259:
					case 260:
					case 261:
						return func_66(11);
				
					case 254:
						if (unk_0x4292F1DE8BA2D22E(plParam0) == unk_0x4292F1DE8BA2D22E(Global_2672505))
							return func_66(6);
						else
							return func_66(5);
						break;
				
					case 271:
						if (unk_0x4292F1DE8BA2D22E(plParam0) == unk_0x4292F1DE8BA2D22E(Global_2672505))
							return func_66(6);
						else
							return func_66(5);
						break;
				
					case 163:
					case 164:
						if (func_65(Global_2672505, plParam0, -2, 0))
							return func_66(6);
						else
							return func_66(5);
						break;
				
					case 303:
					case 418:
						return func_66(10);
				
					case 364:
						if (func_20(Global_2672505, plParam0, true))
							return func_66(10);
						else
							return func_66(5);
						break;
				
					case 478:
					case 501:
					case 523:
					case 556:
						return func_66(10);
				
					case 417:
						if (func_19(plParam0) || func_18(plParam0) || func_16(plParam0))
							if (func_20(Global_2672505, plParam0, true))
								return 3;
							else
								return 4;
						else if (func_20(Global_2672505, plParam0, true))
							return func_66(6);
						else
							return func_66(5);
						break;
				
					case 256:
					case 268:
					default:
						if (func_20(Global_2672505, plParam0, true))
							return func_66(6);
						else
							return func_66(5);
						break;
				}
			}
		}
	}

	return 1;
}

BOOL func_16(Player plParam0) // Position - 0x774
{
	if (plParam0 != _INVALID_PLAYER_INDEX())
		if (_NETWORK_IS_PLAYER_VALID(plParam0, true, true))
			if (Global_2657589[plParam0 /*466*/].f_321.f_7 != -1)
				return func_17(Global_2657589[plParam0 /*466*/].f_321.f_7) == 16;

	return false;
}

int func_17(Hash hParam0) // Position - 0x7BB
{
	switch (hParam0)
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

BOOL func_18(Player plParam0) // Position - 0xC6F
{
	if (plParam0 != _INVALID_PLAYER_INDEX())
		if (_NETWORK_IS_PLAYER_VALID(plParam0, true, true))
			if (Global_2657589[plParam0 /*466*/].f_321.f_7 != -1)
				return func_17(Global_2657589[plParam0 /*466*/].f_321.f_7) == 15;

	return false;
}

BOOL func_19(Player plParam0) // Position - 0xCB6
{
	if (plParam0 != _INVALID_PLAYER_INDEX())
		if (_NETWORK_IS_PLAYER_VALID(plParam0, true, true))
			if (Global_2657589[plParam0 /*466*/].f_321.f_7 != -1)
				return func_17(Global_2657589[plParam0 /*466*/].f_321.f_7) == 14;

	return false;
}

BOOL func_20(Player plParam0, Player plParam1, BOOL bParam2) // Position - 0xCFD
{
	if (func_23(plParam0, -2, false, false, false) == func_23(plParam1, -2, false, false, false))
		return true;

	if (bParam2)
		if (func_21(func_23(plParam0, -2, false, false, false)) && func_21(func_23(plParam1, -2, false, false, false)))
			return true;

	return false;
}

int func_21(BOOL bParam0) // Position - 0xD56
{
	if (bParam0 == func_22(true) || bParam0 == func_22(false))
		return 1;

	return 0;
}

BOOL func_22(BOOL bParam0) // Position - 0xD7C
{
	if (bParam0)
		return 118;

	return 116;
}

BOOL func_23(Player plParam0, int iParam1, BOOL bParam2, BOOL bParam3, BOOL bParam4) // Position - 0xD93
{
	int num;
	int num2;

	if (func_63(plParam0) && !bParam4)
		if (bParam2)
			return false;
		else
			return true;

	if (iParam1 == -2)
	{
		num = unk_0x4292F1DE8BA2D22E(plParam0);
	
		if (num > -1 && num < 4)
			if (Global_4718592.f_108449[num] != -1)
				iParam1 = num;
	}

	if (func_63(unk_0x93E99A2DBCBA9CFA()) || func_62() && func_61() && !IS_BIT_SET(Global_2793044.f_4690, 31) && !bParam4)
	{
		num2 = func_60();
	
		if (unk_0x7DE17ACDD8BA2642(num2))
			if (unk_0x60A06DE259634304(num2))
				if (unk_0xB850F932D03EF34D(num2) != -1)
					if (_NETWORK_IS_PLAYER_VALID(unk_0xB850F932D03EF34D(num2), false, true))
						if (iParam1 > -1 && unk_0x1758F8A8511510AB() && iParam1 < 4)
							if (Global_4718592.f_108449[iParam1] != -1)
								return func_58(iParam1, plParam0, false);
							else
								return func_40(plParam0, unk_0xB850F932D03EF34D(num2), iParam1, bParam2, bParam3);
						else
							return func_40(plParam0, unk_0xB850F932D03EF34D(num2), iParam1, bParam2, bParam3);
			else if (iParam1 > -1 && unk_0x1758F8A8511510AB() && iParam1 < 4)
				if (Global_4718592.f_108449[iParam1] != -1)
					return func_58(iParam1, plParam0, false);
				else
					return func_24(false, -1, false);
			else
				return func_24(false, -1, false);
	}

	if (iParam1 > -1 && unk_0x1758F8A8511510AB() && iParam1 < 4)
		if (Global_4718592.f_108449[iParam1] != -1)
			return func_58(iParam1, plParam0, false);
		else
			return func_40(plParam0, unk_0x93E99A2DBCBA9CFA(), iParam1, bParam2, bParam3);

	return func_40(plParam0, unk_0x93E99A2DBCBA9CFA(), iParam1, bParam2, bParam3);
}

BOOL func_24(BOOL bParam0, int iParam1, BOOL bParam2) // Position - 0xF70
{
	return func_25(unk_0x93E99A2DBCBA9CFA(), bParam0, iParam1, bParam2);
}

BOOL func_25(Player plParam0, BOOL bParam1, int iParam2, BOOL bParam3) // Position - 0xF86
{
	int num;

	if (!unk_0xE6DEE82DB0922DF0(plParam0))
		return 3;

	num = unk_0x4292F1DE8BA2D22E(plParam0);

	if (func_39() || func_38() && func_36() && Global_1665699.f_1)
		if (bParam1)
			return func_35(iParam2, num);
		else
			return func_35(num, num);

	if (bParam1)
	{
		if (iParam2 > -1)
			if (func_29(num, iParam2, 0, -1) && !IS_BIT_SET(Global_4718592.f_15, 18))
				if (num == iParam2)
					return func_22(true);
				else
					return func_22(false);
			else if (bParam3)
				return 28;
			else if (IS_BIT_SET(Global_4718592.f_4, 20))
				return func_26(num, iParam2, true, 4);
			else
				return func_26(num, iParam2, false, 4);
	
		return 28;
	}

	if (num == iParam2 || iParam2 == -1)
		return func_22(true);

	return func_22(false);
}

// Unhandled jump detected. Output should be considered invalid
int func_26(int iParam0, int iParam1, BOOL bParam2, int iParam3) // Position - 0x1088
{
	int num;

	num = func_28(iParam0, iParam1, iParam3);

	if (func_27(*Global_4718592.f_113724, true))
		if (num == 1)
			num = 0;

	if (bParam2)
	{
		switch (num)
		{
			case 0:
				return 28;
		
			case 1:
				return 29;
		
			case 2:
				return 30;
		
			case 3:
				return 31;
		
			case 4:
				return 32;
		
			case 5:
				return 33;
		
			case 6:
				return 34;
		
			case 7:
				return 35;
		
			case 8:
				return 36;
		
			case 9:
				return 37;
		
			case 10:
				return 38;
		
			case 11:
				return 39;
		
			case 12:
				return 40;
		
			case 13:
				return 41;
		
			case 14:
				return 42;
		
			case 15:
				return 43;
		
			default:
				goto 0x113;
		}
	}
	else
	{
		switch (num)
		{
			case 0:
				return 28;
		
			case 1:
				return 29;
		
			case 2:
				return 30;
		
			default:
			
		}
	}

	return 28;
}

BOOL func_27(int iParam0, BOOL bParam1) // Position - 0x11A0
{
	int i;

	if (bParam1)
		if (*Global_4718592.f_166301 == 65)
			return true;

	if (iParam0 == 0)
		return false;

	for (i = 0; i <= 6; i = i + 1)
	{
		if (iParam0 == Global_262145.f_9486[i])
			return true;
	}

	return false;
}

int func_28(int iParam0, int iParam1, int iParam2) // Position - 0x11F1
{
	int i;
	int num;

	for (i = 0; i < iParam2; i = i + 1)
	{
		if (i == iParam1)
			return num;
		else if (!iParam0 == i)
			if (!func_29(iParam0, i, 0, -1))
				num = num + 1;
	}

	return -1;
}

BOOL func_29(int iParam0, int iParam1, int iParam2, int iParam3) // Position - 0x1239
{
	int num;
	int num2;

	if (iParam2 == 1)
	{
		if (iParam0 == iParam1)
			return true;
	
		return false;
	}

	if (iParam0 > -1 && iParam1 > -1 && iParam0 == iParam1)
		return true;

	if (iParam0 > -1 && iParam0 < 4 && iParam1 > -1 && iParam1 < 4)
	{
		num = Global_1058070.f_14[iParam0];
	
		if (iParam3 != -1)
			num = iParam3;
	
		if (num < 17 && num > -1)
		{
			if (IS_BIT_SET(Global_4718592.f_1265[iParam0 /*23466*/].f_23341, num))
			{
				num2 = Global_1058070.f_14[iParam1];
			
				if (num2 < 17 && num2 > -1)
				{
					switch (iParam0)
					{
						case 0:
							if (!func_30(iParam0, num, iParam1, num2) || !func_30(iParam1, num2, iParam0, num))
								return IS_BIT_SET(Global_4718592.f_1265[iParam0 /*23466*/].f_23343[num], 0 + iParam1);
							break;
					
						case 1:
							if (!func_30(iParam0, num, iParam1, num2) || !func_30(iParam1, num2, iParam0, num))
								return IS_BIT_SET(Global_4718592.f_1265[iParam0 /*23466*/].f_23343[num], 4 + iParam1);
							break;
					
						case 2:
							if (!func_30(iParam0, num, iParam1, num2) || !func_30(iParam1, num2, iParam0, num))
								return IS_BIT_SET(Global_4718592.f_1265[iParam0 /*23466*/].f_23343[num], 8 + iParam1);
							break;
					
						case 3:
							if (!func_30(iParam0, num, iParam1, num2) || !func_30(iParam1, num2, iParam0, num))
								return IS_BIT_SET(Global_4718592.f_1265[iParam0 /*23466*/].f_23343[num], 12 + iParam1);
							break;
					}
				}
			}
		}
	}

	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					return IS_BIT_SET(Global_4718592.f_1214, 0);
			
				case 1:
					return IS_BIT_SET(Global_4718592.f_1214, 1);
			
				case 2:
					return IS_BIT_SET(Global_4718592.f_1214, 2);
			
				case 3:
					return IS_BIT_SET(Global_4718592.f_1214, 3);
			
				default:
					break;
			}
			break;
	
		case 1:
			switch (iParam1)
			{
				case 0:
					return IS_BIT_SET(Global_4718592.f_1214, 4);
			
				case 1:
					return IS_BIT_SET(Global_4718592.f_1214, 5);
			
				case 2:
					return IS_BIT_SET(Global_4718592.f_1214, 6);
			
				case 3:
					return IS_BIT_SET(Global_4718592.f_1214, 7);
			
				default:
					break;
			}
			break;
	
		case 2:
			switch (iParam1)
			{
				case 0:
					return IS_BIT_SET(Global_4718592.f_1214, 8);
			
				case 1:
					return IS_BIT_SET(Global_4718592.f_1214, 9);
			
				case 2:
					return IS_BIT_SET(Global_4718592.f_1214, 10);
			
				case 3:
					return IS_BIT_SET(Global_4718592.f_1214, 11);
			
				default:
					break;
			}
			break;
	
		case 3:
			switch (iParam1)
			{
				case 0:
					return IS_BIT_SET(Global_4718592.f_1214, 12);
			
				case 1:
					return IS_BIT_SET(Global_4718592.f_1214, 13);
			
				case 2:
					return IS_BIT_SET(Global_4718592.f_1214, 14);
			
				case 3:
					return IS_BIT_SET(Global_4718592.f_1214, 15);
			
				default:
					break;
			}
			break;
	}

	return false;
}

BOOL func_30(int iParam0, int iParam1, int iParam2, int iParam3) // Position - 0x1584
{
	BOOL num;
	Player player;
	var unk;
	int num2;
	int num3;
	Player i;

	if (iParam0 == iParam2)
		return true;

	if (!IS_BIT_SET(Global_4718592.f_1265[iParam0 /*23466*/].f_23342, iParam1))
		return false;

	if (!IS_BIT_SET(Global_4718592.f_1265[iParam2 /*23466*/].f_23342, iParam3))
		return false;

	num = 1;

	if (!unk_0x66599E73DBA5A850(unk_0xC1A5EC5C986B98AD()))
		num3 = unk_0x504B9BB48D41C264(unk_0xC1A5EC5C986B98AD());

	i = 0;

	for (i = 0; i <= 31; i = i + 1)
	{
		player = i;
	
		if (!_NETWORK_IS_PLAYER_VALID(player, true, true) || _NETWORK_IS_PLAYER_IN_SCTV(player, 0) || IS_BIT_SET(Global_2657589[player /*466*/].f_199, 2) || func_31(player))
		{
		}
		else if (unk_0x4292F1DE8BA2D22E(player) != iParam2)
		{
		}
		else
		{
			unk = unk_0xF2CFBB1105511E1A(player);
		
			if (unk_0x66599E73DBA5A850(unk))
			{
			}
			else
			{
				num2 = unk_0x504B9BB48D41C264(unk);
			
				if (num3 == joaat("MP_F_Freemode_01") || num3 == joaat("MP_M_Freemode_01"))
					if (num2 == joaat("MP_F_Freemode_01") || num2 == joaat("MP_M_Freemode_01"))
						return true;
					else
						return false;
				else if (num3 != num2)
					return false;
			}
		}
	}

	return num;
}

BOOL func_31(Player plParam0) // Position - 0x16B0
{
	return IS_BIT_SET(Global_1853910[plParam0 /*862*/].f_36.f_18, 14);
}

BOOL _NETWORK_IS_PLAYER_IN_SCTV(Player player, int bCheckTeam) // Position - 0x16C8
{
	BOOL flag;

	if (player == unk_0x93E99A2DBCBA9CFA())
		flag = func_33(-1, false) == 8;
	else
		flag = Global_1853910[player /*862*/].f_205 == 8;

	if (bCheckTeam == 1)
		if (unk_0xE6DEE82DB0922DF0(player))
			flag = unk_0x4292F1DE8BA2D22E(player) == 8;

	return flag;
}

Hash func_33(Hash hParam0, BOOL bParam1) // Position - 0x1713
{
	Hash hash;
	Hash hash2;

	hash2 = hParam0;

	if (hash2 == -1)
		hash2 = func_34();

	if (Global_1575040[hash2] == true)
	{
		bParam1;
		hash = 8;
	}
	else
	{
		hash = Global_1574912[hash2];
		bParam1;
	}

	return hash;
}

Hash func_34() // Position - 0x1754
{
	return Global_1574918;
}

int func_35(int iParam0, int iParam1) // Position - 0x1760
{
	if (iParam0 == -1)
		iParam0 = func_28(iParam1, iParam0, 4);

	switch (iParam0)
	{
		case 0:
			return 15;
	
		case 1:
			return 21;
	
		case 2:
			return 24;
	
		case 3:
			return 18;
	
		default:
		
	}

	return 28;
}

BOOL func_36() // Position - 0x17AE
{
	if (func_37())
		return true;

	return IS_BIT_SET(*Global_4718592.f_170488, 4);
}

BOOL func_37() // Position - 0x17CD
{
	return IS_BIT_SET(*Global_4718592.f_160050, 12);
}

BOOL func_38() // Position - 0x17E2
{
	if (unk_0x1758F8A8511510AB())
		return IS_BIT_SET(*Global_4718592.f_170488, 0);

	return IS_BIT_SET(*Global_4718592.f_170488, 0) || Global_1926644 && unk_0x24B651D85CCE5EB4(joaat("fm_deathmatch_creator")) > 0;
}

BOOL func_39() // Position - 0x1829
{
	if (func_37() && unk_0x1758F8A8511510AB())
		return true;

	return false;
}

BOOL func_40(Player plParam0, Player plParam1, int iParam2, BOOL bParam3, BOOL bParam4) // Position - 0x1846
{
	int num;
	BOOL flag;
	Player player;
	int num2;
	int num3;

	if (iParam2 == -2)
		num = unk_0x4292F1DE8BA2D22E(plParam0);
	else
		num = iParam2;

	if (Global_1853910[unk_0x93E99A2DBCBA9CFA() /*862*/] == 148)
		flag = true;

	player = plParam0;

	if (player > -1)
		if (Global_1853910[player /*862*/] == 148)
			flag = true;

	if (!flag)
	{
		if (num != -1)
		{
			if (func_48())
			{
				num2 = func_44(plParam0);
			
				if (!num2 == -1)
					return func_42(num2);
			}
		
			if (func_65(plParam1, plParam0, num, 0) && !IS_BIT_SET(Global_4718592.f_15, 18) || func_29(unk_0x4292F1DE8BA2D22E(plParam1), unk_0x4292F1DE8BA2D22E(plParam0), 0, -1) && IS_BIT_SET(Global_4718592.f_15, 23) && !IS_BIT_SET(Global_4718592.f_15, 18))
				return func_22(true);
			else if (IS_BIT_SET(Global_4718592.f_15, 26))
				return func_41(true);
			else
				return func_25(plParam1, true, num, bParam4);
		}
		else if (Global_1836597 || Global_1836587 || Global_1853910[plParam0 /*862*/] == false)
		{
			if (plParam0 == plParam1 || Global_1836597 == true && Global_1836607 == false)
				return func_22(true);
			else
				return func_25(plParam1, true, num, bParam4);
		}
	
		if (Global_1836591 && Global_1836078.f_14 == plParam0)
			return 28;
	}

	num3 = func_44(plParam0);

	if (!num3 == -1)
		return func_42(num3);

	if (bParam3)
		return false;

	return true;
}

BOOL func_41(BOOL bParam0) // Position - 0x19DE
{
	if (bParam0)
		return 119;

	return 116;
}

BOOL func_42(int iParam0) // Position - 0x19F5
{
	int num;

	if (iParam0 > -1)
	{
		num = func_43(iParam0);
	
		switch (num)
		{
			case 0:
				return 192;
		
			case 1:
				return 193;
		
			case 2:
				return 194;
		
			case 3:
				return 195;
		
			case 4:
				return 196;
		
			case 5:
				return 197;
		
			case 6:
				return 198;
		
			case 7:
				return 199;
		
			case 8:
				return 200;
		
			case 9:
				return 201;
		
			case 10:
				return 202;
		
			case 11:
				return 203;
		
			case 12:
				return 204;
		
			case 13:
				return 205;
		
			case 14:
				return 206;
		
			default:
			
		}
	}

	return 1;
}

int func_43(int iParam0) // Position - 0x1AB8
{
	return Global_2648605.f_818.f_44[iParam0 /*2*/].f_1;
}

int func_44(Player plParam0) // Position - 0x1ACF
{
	if (!plParam0 == _INVALID_PLAYER_INDEX())
		if (_IS_PLAYER_IN_AN_ORGANIZATION(plParam0, true))
			return Global_2648605.f_818.f_11[func_45(plParam0)];

	return -1;
}

Player func_45(Player plParam0) // Position - 0x1B01
{
	if (plParam0 != _INVALID_PLAYER_INDEX())
		return Global_1894573[plParam0 /*608*/].f_10;

	return _INVALID_PLAYER_INDEX();
}

BOOL _IS_PLAYER_IN_AN_ORGANIZATION(Player plParam0, BOOL bCanBeBoss) // Position - 0x1B24
{
	if (!bCanBeBoss)
		if (_IS_PLAYER_BOSS_OF_ORGANIZATION(plParam0))
			return false;

	return Global_1894573[plParam0 /*608*/].f_10 != _INVALID_PLAYER_INDEX();
}

BOOL _IS_PLAYER_BOSS_OF_ORGANIZATION(Player plParam0) // Position - 0x1B4F
{
	if (plParam0 != _INVALID_PLAYER_INDEX())
		if (Global_1894573[plParam0 /*608*/].f_10 != _INVALID_PLAYER_INDEX())
			return Global_1894573[plParam0 /*608*/].f_10 == plParam0;

	return false;
}

BOOL func_48() // Position - 0x1B84
{
	if (func_57() || func_56() || func_55() || func_54() || func_53() || func_51() || func_49())
		return true;

	if (unk_0x1758F8A8511510AB() && IS_BIT_SET(Global_4718592.f_36, 1))
		return true;

	return false;
}

BOOL func_49() // Position - 0x1BEC
{
	return func_50(*Global_4718592.f_113724);
}

BOOL func_50(int iParam0) // Position - 0x1C02
{
	int i;

	for (i = 0; i < 6; i = i + 1)
	{
		if (Global_262145.f_31715[i] == iParam0)
			return 1;
	}

	return 0;
}

BOOL func_51() // Position - 0x1C31
{
	return func_52(*Global_4718592.f_113724);
}

BOOL func_52(int iParam0) // Position - 0x1C47
{
	int i;

	if (iParam0 == 0)
		return 0;

	for (i = 0; i < 8; i = i + 1)
	{
		if (Global_262145.f_31051[i] == iParam0)
			return 1;
	}

	return 0;
}

BOOL func_53() // Position - 0x1C81
{
	return Global_2683862.f_24;
}

BOOL func_54() // Position - 0x1C8F
{
	return Global_2683862.f_21;
}

BOOL func_55() // Position - 0x1C9D
{
	return Global_2683862.f_19;
}

BOOL func_56() // Position - 0x1CAB
{
	return Global_2683862.f_18;
}

BOOL func_57() // Position - 0x1CB9
{
	return Global_2683862.f_17;
}

BOOL func_58(int iParam0, Player plParam1, BOOL bParam2) // Position - 0x1CC7
{
	BOOL flag;
	int num;
	int num2;

	num = Global_1058070.f_14[iParam0];

	if (func_48())
	{
		num2 = func_44(plParam1);
	
		if (!num2 == -1)
			return func_42(num2);
	}

	if (num > -1 && num < 17)
		if (IS_BIT_SET(Global_4718592.f_1265[iParam0 /*23466*/].f_8067[num], 24))
			return 18;

	if (iParam0 > -1 && plParam1 != _INVALID_PLAYER_INDEX())
	{
		if (Global_4718592.f_108449[iParam0] != -1 && Global_4718592.f_108449[iParam0] <= 4)
			if (Global_4718592.f_108449[iParam0] == false)
				flag = 15;
			else if (Global_4718592.f_108449[iParam0] == true)
				flag = 18;
			else if (Global_4718592.f_108449[iParam0] == 2)
				flag = 24;
			else if (Global_4718592.f_108449[iParam0] == 4)
				if (IS_BIT_SET(Global_4718592.f_15, 29))
					flag = 21;
				else
					flag = 6;
			else
				flag = Global_4718592.f_108449[iParam0];
		else
			flag = func_25(plParam1, !bParam2, iParam0, false);
	
		if (IS_BIT_SET(Global_4718592.f_21, 13))
			flag = func_59(iParam0);
	
		if (IS_BIT_SET(Global_4718592.f_24, 29))
			flag = false;
	
		if (IS_BIT_SET(Global_4718592.f_15, 26) && !func_29(iParam0, unk_0x4292F1DE8BA2D22E(plParam1), 0, -1))
			flag = func_41(true);
	}
	else
	{
		flag = true;
	}

	return flag;
}

BOOL func_59(int iParam0) // Position - 0x1E47
{
	int num;

	switch (iParam0)
	{
		case 0:
			num = *Global_4718592.f_166456;
			break;
	
		case 1:
			num = *Global_4718592.f_166457;
			break;
	
		case 2:
			num = *Global_4718592.f_166458;
			break;
	
		case 3:
			num = *Global_4718592.f_166459;
			break;
	}

	switch (num)
	{
		case 0:
			return 15;
	
		case 1:
			return 21;
	
		case 2:
			return 24;
	
		case 3:
			return 18;
	
		case 4:
			return 6;
	
		case 5:
			return 9;
	
		case 6:
			return 3;
	
		case 7:
			return 1;
	
		case 8:
			return 12;
	
		case 9:
			return 2;
	
		default:
		
	}

	return 2;
}

int func_60() // Position - 0x1F1C
{
	return Global_2621446.f_2;
}

BOOL func_61() // Position - 0x1F2A
{
	return IS_BIT_SET(Global_2621446, 4);
}

BOOL func_62() // Position - 0x1F38
{
	return IS_BIT_SET(Global_1853910[unk_0x93E99A2DBCBA9CFA() /*862*/].f_36.f_18, 14);
}

BOOL func_63(Player plParam0) // Position - 0x1F52
{
	if (_NETWORK_IS_PLAYER_IN_SCTV(plParam0, 0))
		return true;

	if (func_64())
		if (plParam0 == unk_0x93E99A2DBCBA9CFA())
			return true;

	if (IS_BIT_SET(Global_2657589[plParam0 /*466*/].f_199, 2))
		return true;

	return false;
}

BOOL func_64() // Position - 0x1F91
{
	return IS_BIT_SET(Global_2621446, 3);
}

BOOL func_65(Player plParam0, Player plParam1, int iParam2, int iParam3) // Position - 0x1F9F
{
	if (iParam2 == -2)
	{
		if (iParam3 == 0)
			if (unk_0x4292F1DE8BA2D22E(plParam0) == -1 && unk_0x4292F1DE8BA2D22E(plParam1) == -1)
				return false;
	
		return unk_0x4292F1DE8BA2D22E(plParam0) == unk_0x4292F1DE8BA2D22E(plParam1);
	}
	else
	{
		if (iParam3 == 0)
			if (unk_0x4292F1DE8BA2D22E(plParam0) == -1 && iParam2 == -1)
				return false;
	
		return unk_0x4292F1DE8BA2D22E(plParam0) == iParam2;
	}

	return unk_0x4292F1DE8BA2D22E(plParam0) == iParam2;
}

int func_66(int iParam0) // Position - 0x2017
{
	switch (iParam0)
	{
		case 5:
		case 6:
			if (func_68())
				if (iParam0 == 5)
					iParam0 = 6;
				else
					iParam0 = 5;
			break;
	}

	return func_67(iParam0);
}

int func_67(int iParam0) // Position - 0x2051
{
	switch (iParam0)
	{
		case 10:
			return 9;
	
		case 5:
			return 8;
	
		case 6:
			return 7;
	
		case 8:
			return 6;
	
		case 7:
			return 4;
	
		case 4:
		case 11:
			return 2;
	
		case 0:
		case 2:
		case 3:
		case 9:
		case 1:
			return 1;
	}

	return 1;
}

BOOL func_68() // Position - 0x20DC
{
	int num;

	num = unk_0x4292F1DE8BA2D22E(Global_2672505);

	if (num > -1 && num < 4)
		return IS_BIT_SET(Global_4718592.f_1265[num /*23466*/].f_12405, 4);

	return false;
}

void func_69(Player plParam0, BOOL bParam1, BOOL bParam2) // Position - 0x2113
{
	var unk;

	if (func_71(plParam0))
		return;

	func_70(&Global_2646729.f_723[plParam0], &Global_2646729.f_1086[plParam0], &(Global_2646729.f_393), bParam1, plParam0, bParam2, &unk);
	return;
}

BOOL func_70(int iParam0, var uParam1, int iParam2, BOOL bParam3, Player plParam4, BOOL bParam5, var uParam6) // Position - 0x2151
{
	if (bParam5)
	{
		if (!unk_0xB8CEC43FB7EF2D92(*uParam1) || *uParam1 == unk_0xAF908D5E2416DA93())
		{
			*uParam1 = unk_0xAF908D5E2416DA93();
			*iParam0 = unk_0xAF908D5E2416DA93();
		}
	}

	if (!unk_0xB8CEC43FB7EF2D92(*iParam0) || *iParam0 == unk_0xAF908D5E2416DA93())
	{
		if (bParam3)
		{
			if (!IS_BIT_SET(*iParam2, plParam4))
			{
				*uParam6 = 1;
				unk_0xECDAB41968FF21A8(iParam2, plParam4);
			}
		
			*iParam0 = unk_0xAF908D5E2416DA93();
		}
		else
		{
			if (IS_BIT_SET(*iParam2, plParam4))
			{
				*uParam6 = 1;
				unk_0x061B1200C95204CB(iParam2, plParam4);
			}
		
			if (*uParam1 == unk_0xAF908D5E2416DA93())
				*uParam1 = -1;
		
			*iParam0 = -1;
		}
	
		return true;
	}
	else if (unk_0xB8CEC43FB7EF2D92(*uParam1) && !*uParam1 == unk_0xAF908D5E2416DA93())
	{
	}

	return false;
}

BOOL func_71(Player plParam0) // Position - 0x2210
{
	if (plParam0 == _INVALID_PLAYER_INDEX())
		return true;

	if (unk_0x14580F20CBCE4FA9(unk_0x688846D56810779A()) == _GET_CURRENT_SESSION_TYPE_SCRIPT_HASH())
		return true;

	return false;
}

int _GET_CURRENT_SESSION_TYPE_SCRIPT_HASH() // Position - 0x2239
{
	switch (func_74())
	{
		case 0:
			return func_73();
	
		case 2:
			return joaat("creator");
	}

	return 0;
}

int func_73() // Position - 0x226C
{
	switch (Global_2697019)
	{
		case 0:
			return joaat("freemode");
	
		default:
		
	}

	return joaat("freemode");
}

int func_74() // Position - 0x2290
{
	return Global_32163;
}

void func_75(Player plParam0, BOOL bParam1, BOOL bParam2, BOOL bParam3) // Position - 0x229B
{
	var unk;

	if (func_71(plParam0))
		return;

	if (func_70(&Global_2646729.f_822[plParam0], &Global_2646729.f_1185[plParam0], &(Global_2646729.f_367), bParam1, plParam0, bParam3, &unk))
		func_76(plParam0, bParam2);

	return;
}

void func_76(Player plParam0, BOOL bParam1) // Position - 0x22E3
{
	if (bParam1)
		unk_0xECDAB41968FF21A8(&(Global_2646729.f_368), plParam0);
	else
		unk_0x061B1200C95204CB(&(Global_2646729.f_368), plParam0);

	if (unk_0xCE4AAA035282336C(Global_2646729[plParam0]))
		if (bParam1)
			unk_0xDFA9D2A64046A409(Global_2646729[plParam0], 0);
		else
			unk_0xDFA9D2A64046A409(Global_2646729[plParam0], 1);

	return;
}

BOOL func_77(Player plParam0) // Position - 0x233E
{
	return func_78(&Global_2646729.f_822[plParam0]);
}

BOOL func_78(int iParam0) // Position - 0x2355
{
	if (unk_0xB8CEC43FB7EF2D92(*iParam0))
		if (!*iParam0 == unk_0xAF908D5E2416DA93())
			return 0;

	return 1;
}

void func_79(Player plParam0, int iParam1, BOOL bParam2, BOOL bParam3) // Position - 0x2378
{
	var unk;

	if (func_71(plParam0))
		return;

	if (func_70(&Global_2646729.f_624[plParam0], &Global_2646729.f_987[plParam0], &(Global_2646729.f_389), bParam2, plParam0, bParam3, &unk))
		if (bParam2)
			Global_2646729.f_459[plParam0] = iParam1;

	return;
}

int func_80(int iParam0) // Position - 0x23CA
{
	int num;
	int num2;
	int num3;
	var unk;

	switch (iParam0)
	{
		case 1:
			return 4;
	
		case 0:
			return 4;
	
		case 6:
			return 59;
	
		case 18:
			return 2;
	
		case 13:
			return 5;
	
		case 116:
			return 38;
	
		case 28:
			return 6;
	
		case 29:
			return 7;
	
		case 30:
			return 8;
	
		case 31:
			return 9;
	
		case 32:
			return 10;
	
		case 33:
			return 11;
	
		case 34:
			return 12;
	
		case 35:
			return 13;
	
		case 36:
			return 14;
	
		case 37:
			return 15;
	
		case 38:
			return 16;
	
		case 39:
			return 17;
	
		case 40:
			return 18;
	
		case 41:
			return 19;
	
		case 42:
			return 20;
	
		case 43:
			return 21;
	
		case 44:
			return 22;
	
		case 45:
			return 23;
	
		case 46:
			return 24;
	
		case 47:
			return 25;
	
		case 48:
			return 26;
	
		case 49:
			return 27;
	
		case 50:
			return 28;
	
		case 51:
			return 29;
	
		case 52:
			return 30;
	
		case 53:
			return 31;
	
		case 54:
			return 32;
	
		case 55:
			return 33;
	
		case 56:
			return 34;
	
		case 57:
			return 35;
	
		case 58:
			return 36;
	
		case 59:
			return 37;
	
		case 9:
			return 57;
	
		case 10:
			return 53;
	
		case 118:
			return 57;
	
		case 14:
			return 56;
	
		case 3:
			return 55;
	
		case 21:
			return 50;
	
		case 15:
			return 51;
	
		case 20:
			return 52;
	
		case 11:
			return 54;
	
		case 23:
			return 58;
	
		case 12:
			return 60;
	
		case 24:
			return 61;
	
		case 4:
			return 62;
	
		default:
		
	}

	unk_0x2D32CB870722E022(iParam0, &num, &num2, &num3, &unk);
	return (num * 16777216) + (num2 * 65536) + (num3 * 256) + unk;
}

int func_81(Player plParam0) // Position - 0x2632
{
	int num;

	num = func_44(plParam0);

	if (num != -1)
		return func_42(num);

	return 1;
}

BOOL func_82(Player plParam0) // Position - 0x2652
{
	return func_78(&Global_2646729.f_624[plParam0]);
}

void func_83(Player plParam0, int iParam1, BOOL bParam2, BOOL bParam3) // Position - 0x2669
{
	BOOL flag;

	if (func_71(plParam0))
		return;

	if (func_70(&Global_2646729.f_591[plParam0], &Global_2646729.f_954[plParam0], &(Global_2646729.f_388), bParam2, plParam0, bParam3, &flag))
	{
		if (bParam2)
			Global_2646729.f_426[plParam0] = iParam1;
	
		if (flag)
			func_84();
	}

	return;
}

void func_84() // Position - 0x26C4
{
	Global_2646729.f_1655 = 1;
	return;
}

void func_85() // Position - 0x26D4
{
	func_2(Global_2793044.f_5225.f_753);
	unk_0x675D9C12C73D3DE7();
	return;
}

BOOL _SHOULD_NETWORK_SCRIPT_TERMINATE() // Position - 0x26EE
{
	if (Global_1575035 == false)
		if (!unk_0xA26A9A07F761D8F8())
			return true;

	if (func_90())
		return true;

	if (Global_2696915)
		return true;

	if (func_89())
		return true;

	if (_DOES_EVENT_OF_TYPE_EXIST(159))
		if (!func_87())
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

BOOL func_87() // Position - 0x2772
{
	return Global_2683862.f_698;
}

BOOL _DOES_EVENT_OF_TYPE_EXIST(int iParam0) // Position - 0x2781
{
	if (unk_0x36D3321E138A43F0(1, iParam0))
		return true;

	return false;
}

BOOL func_89() // Position - 0x2798
{
	return Global_2694524;
}

BOOL func_90() // Position - 0x27A4
{
	return Global_2683862.f_693;
}

void func_91() // Position - 0x27B3
{
	SYSTEM::WAIT(0);
	return;
}

int func_92() // Position - 0x27C0
{
	unk_0xF1440897111F3111(0);
	return 1;
}

