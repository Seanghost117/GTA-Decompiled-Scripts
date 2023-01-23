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
	int iLocal_19 = 0;
	int iLocal_20 = 0;
#endregion

void __EntryFunction__()
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
	if (unk_0xED06FD5709A59F02(2) || unk_0xEE02AF6BC32C9B5C())
	{
		unk_0xD39E529EBE5DB04F();
	}
	func_1();
}

void func_1()
{
	struct<3> Var0;
	var uVar1;
	
	while (!func_9(&iLocal_20))
	{
		wait(0);
	}
	if (!unk_0x5AEB5DDFFAD43CA5(iLocal_20))
	{
		if (!Global_95450)
		{
			unk_0x4F3C4F457D44BB0F(iLocal_20, true, 1);
			if (unk_0x16BC17A8EDC701A2(iLocal_20, 1435919172) != 7)
			{
				unk_0x9B94F6169B0DAEFD(iLocal_20);
			}
			Var0 = { unk_0x3E4D3CCC220BDFB1(unk_0x9B0761B4C3EB8BC7(), 0) };
			unk_0x4E65320BC9AD521C(iLocal_20, 1);
			unk_0x9DC06E2A59C5AEBB(&uVar1);
			if (!unk_0x47DBF174A0CB9D55(iLocal_20, 0))
			{
				if (!unk_0xF83D0A2EC884A4DD(iLocal_20, 0) && !unk_0x47DBF174A0CB9D55(iLocal_20, 0))
				{
					unk_0xB53E642F4F50E7C0(0, Var0, 6000);
				}
			}
			unk_0x439AF5D920F78274(0, Var0, 6000, 0, 2);
			unk_0x19F29730874AD6F1(uVar1);
			unk_0x9B6EC2CECE1010EF(iLocal_20, uVar1);
		}
		func_2(iLocal_20);
	}
	while (!unk_0x03DB5C6AABF8DA46())
	{
		wait(0);
	}
	if (unk_0xAE06B9E39EBDE049(iLocal_20))
	{
		if (!unk_0x5AEB5DDFFAD43CA5(iLocal_20))
		{
			unk_0xCBA6B2B569DCAFD8(iLocal_20, 1);
		}
		unk_0x2481907DEE6B85EA(&iLocal_20);
	}
	Global_95450 = 0;
	unk_0xD39E529EBE5DB04F();
}

void func_2(int iParam0)
{
	int iVar0;
	
	iVar0 = unk_0x578C4EF320340AF7() + 1000;
	while (unk_0x578C4EF320340AF7() < iVar0 && !unk_0x03DB5C6AABF8DA46())
	{
		wait(0);
	}
	if (!unk_0x5AEB5DDFFAD43CA5(iParam0))
	{
		if (iLocal_19 == 1)
		{
			switch (func_5(unk_0x9B0761B4C3EB8BC7()))
			{
				case 2:
					func_3(iParam0, "BUDDY_SEES_TREVOR_DEATH", "FRANKLIN_NORMAL", 3);
					break;
				
				case 0:
					func_3(iParam0, "BUDDY_SEES_MICHAEL_DEATH", "FRANKLIN_NORMAL", 3);
					break;
			}
		}
		else if (iLocal_19 == 2)
		{
			switch (func_5(unk_0x9B0761B4C3EB8BC7()))
			{
				case 1:
					func_3(iParam0, "BUDDY_SEES_FRANKLIN_DEATH", "TREVOR_NORMAL", 3);
					break;
				
				case 0:
					func_3(iParam0, "BUDDY_SEES_MICHAEL_DEATH", "TREVOR_NORMAL", 3);
					break;
			}
		}
		else if (iLocal_19 == 0)
		{
			switch (func_5(unk_0x9B0761B4C3EB8BC7()))
			{
				case 2:
					func_3(iParam0, "BUDDY_SEES_TREVOR_DEATH", "MICHAEL_NORMAL", 3);
					break;
				
				case 1:
					func_3(iParam0, "BUDDY_SEES_FRANKLIN_DEATH", "MICHAEL_NORMAL", 3);
					break;
				}
			}
	}
}

void func_3(int iParam0, char* sParam1, char* sParam2, int iParam3)
{
	unk_0x1A454EFB8BC73430(iParam0, sParam1, sParam2, func_4(iParam3), 0);
}

int func_4(int iParam0)
{
	int iVar0;
	
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
	iVar0 = 0;
	return iVar0;
}

int func_5(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0xAE06B9E39EBDE049(iParam0))
	{
		iVar1 = unk_0x36FE6D3220816ADA(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_6(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_6(int iParam0)
{
	if (func_8(iParam0))
	{
		return func_7(iParam0);
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

var func_7(int iParam0)
{
	return Global_1848[iParam0 /*29*/];
}

bool func_8(int iParam0)
{
	return iParam0 < 3;
}

int func_9(var uParam0)
{
	int iVar0;
	
	iLocal_18 = 0;
	while (iLocal_18 < 9)
	{
		if (unk_0xAE06B9E39EBDE049(Global_96324[iLocal_18]) && !unk_0x5AEB5DDFFAD43CA5(Global_96324[iLocal_18]))
		{
			if (Global_96324[iLocal_18] != unk_0x9B0761B4C3EB8BC7())
			{
				if (!unk_0x1758275D343D5BA3(Global_96324[iLocal_18]))
				{
					if (unk_0x47DBF174A0CB9D55(Global_96324[iLocal_18], 0) || !unk_0xB77B1396EAA80D8F(Global_96324[iLocal_18]))
					{
						if (unk_0x272784C60C397DB6(unk_0x3E4D3CCC220BDFB1(Global_96324[iLocal_18], 1), unk_0x3E4D3CCC220BDFB1(unk_0x9B0761B4C3EB8BC7(), 0), true) < 10f)
						{
							iLocal_19 = func_5(Global_96324[iLocal_18]);
							if ((iLocal_19 == 0 || iLocal_19 == 2) || iLocal_19 == 1)
							{
								if (iLocal_19 != func_10())
								{
									if (unk_0xD44D03437956A1ED(Global_96324[iLocal_18], unk_0x9B0761B4C3EB8BC7(), 17))
									{
										if (unk_0x47DBF174A0CB9D55(Global_96324[iLocal_18], 0))
										{
											iVar0 = unk_0xA5D5B1042E8F47BD(Global_96324[iLocal_18], 0);
										}
										if ((unk_0xAE06B9E39EBDE049(iVar0) && unk_0x80FF6C016CDB0FAF(iVar0, 0)) || !unk_0xAE06B9E39EBDE049(iVar0))
										{
											*uParam0 = Global_96324[iLocal_18];
											return 1;
										}
									}
								}
							}
						}
					}
				}
			}
		}
		iLocal_18++;
	}
	if (unk_0x03DB5C6AABF8DA46())
	{
		return 1;
	}
	return 0;
}

int func_10()
{
	func_11();
	return Global_111858.f_2359.f_539.f_4321;
}

void func_11()
{
	int iVar0;
	
	if (unk_0xAE06B9E39EBDE049(unk_0x9B0761B4C3EB8BC7()))
	{
		if (func_6(Global_111858.f_2359.f_539.f_4321) != unk_0x36FE6D3220816ADA(unk_0x9B0761B4C3EB8BC7()))
		{
			iVar0 = func_5(unk_0x9B0761B4C3EB8BC7());
			if (func_8(iVar0) && (!func_12(14) || Global_110809))
			{
				if (Global_111858.f_2359.f_539.f_4321 != iVar0 && func_8(Global_111858.f_2359.f_539.f_4321))
				{
					Global_111858.f_2359.f_539.f_4322 = Global_111858.f_2359.f_539.f_4321;
				}
				Global_111858.f_2359.f_539.f_4323 = iVar0;
				Global_111858.f_2359.f_539.f_4321 = iVar0;
				return;
			}
		}
		else
		{
			if (Global_111858.f_2359.f_539.f_4321 != 145)
			{
				Global_111858.f_2359.f_539.f_4323 = Global_111858.f_2359.f_539.f_4321;
			}
			return;
		}
	}
	Global_111858.f_2359.f_539.f_4321 = 145;
}

bool func_12(int iParam0)
{
	return Global_41631 == iParam0;
}

