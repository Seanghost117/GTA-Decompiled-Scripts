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
	char* sLocal_18 = NULL;
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
	float fLocal_29 = 0f;
	var uLocal_30 = 0;
	var uLocal_31 = 0;
	var uLocal_32 = 0;
	float fLocal_33 = 0f;
	float fLocal_34 = 0f;
	var uLocal_35 = 0;
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
	float fLocal_62 = 0f;
	var uLocal_63 = 0;
	int iLocal_64 = 0;
	int iLocal_65 = 0;
	int iLocal_66[59] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	var uLocal_67 = 0;
	var uLocal_68 = 0;
	int iLocal_69 = 0;
	var uLocal_70 = 0;
	var uLocal_71 = 0;
	var uLocal_72 = 0;
#endregion

void __EntryFunction__()
{
	int iVar0;
	var uVar1;
	int iVar2;
	var uVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	
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
	iLocal_28 = 3;
	fLocal_29 = 0f;
	fLocal_33 = -0.0375f;
	fLocal_34 = 0.17f;
	iLocal_40 = 1;
	iLocal_41 = 65;
	iLocal_42 = 49;
	iLocal_43 = 64;
	fLocal_62 = ((0.05f + 0.275f) - 0.01f);
	iLocal_64 = 4;
	iLocal_65 = 12;
	if (func_160() == 2)
	{
		while (true)
		{
			wait(0);
		}
	}
	unk_0xB871DE2AC0AD82A1(1);
	unk_0xDB4E5F36ED3505EE();
	Global_1312454 = 1;
	iVar0 = 0;
	Global_1375708.f_281 = 1;
	Global_1373272.f_1 = 0;
	Global_1373272.f_3 = 0;
	Global_1373272.f_5 = 0;
	func_158(&Global_1375708);
	func_157(&Global_1375708);
	func_156(&Global_1375708);
	func_152();
	func_151(0, &Global_1375708);
	unk_0x9D15035C6653D1B1(7);
	unk_0x16611E08D2E0FBE9(337714004);
	unk_0x16611E08D2E0FBE9(-1884422346);
	unk_0x1E83D0921A9670F9(0);
	func_150();
	iVar5 = 1;
	switch (iScriptParam_69)
	{
		case 3:
			while (iVar0 == 0)
			{
				wait(0);
				if (iVar5 == 1)
				{
					if (iVar6 == 0)
					{
						if (unk_0x3EADA0F6AB053C1D())
						{
							unk_0x0FBF24E8CF8A7591();
							iVar6 = 1;
						}
					}
				}
				if (func_149(201))
				{
					if (iVar5 == 0)
					{
						unk_0xC4CC25B68A91D144(-1, "SELECT", "HUD_FRONTEND_DEFAULT_SOUNDSET", true);
						Global_1373272.f_1 = 0;
						Global_1373272.f_3 = 0;
						iVar5 = 1;
						func_151(0, &Global_1375708);
						func_157(&Global_1375708);
						func_156(&Global_1375708);
						func_148(&Global_1375708, &Global_1373272);
						unk_0x9ED3958F25B8EB59("MENU_SHIFT_DEPTH");
						unk_0xAD291B8F75D737AD(1);
						unk_0xE1FDD153F5858534();
					}
				}
				if (iVar5 == 0)
				{
					if (func_149(189) || func_149(190))
					{
						iVar0 = 1;
					}
				}
				if (func_149(202))
				{
					func_146();
					if (iVar5 == 1)
					{
						unk_0x9ED3958F25B8EB59("MENU_SHIFT_DEPTH");
						unk_0xAD291B8F75D737AD(-1);
						unk_0xE1FDD153F5858534();
						unk_0xC4CC25B68A91D144(-1, "BACK", "HUD_FRONTEND_DEFAULT_SOUNDSET", true);
						unk_0x9182C03E20E1D981(337714004);
						unk_0x1E83D0921A9670F9(0);
						func_157(&Global_1375708);
						func_156(&Global_1375708);
						func_151(-1, &Global_1375708);
						iVar5 = 0;
					}
					else
					{
						unk_0xC4CC25B68A91D144(-1, "BACK", "HUD_FRONTEND_DEFAULT_SOUNDSET", true);
						iVar0 = 1;
						unk_0xDD18BF99F1703152();
					}
				}
				if (unk_0x6ABE45A3C5D7F397())
				{
					unk_0x029E96051773F353(&iVar2, &uVar3);
				}
				if (unk_0xFF27C3A57F55E9F0())
				{
					unk_0x93B7A49D3402A3D8(&uVar1, &iVar2, &uVar3);
					iVar4 = iVar2 + 1000;
					if (iVar4 >= 0)
					{
						if (iVar4 >= 9)
						{
							iVar4 = 8;
						}
						Global_1373272.f_1 = (iVar4 % 3);
						Global_1373272.f_3 = (iVar4 / 3);
						func_151(iVar4, &Global_1375708);
						func_156(&Global_1375708);
					}
				}
				unk_0x494D5FF88119CDC0("MPWeaponsCommon", false);
				unk_0x494D5FF88119CDC0("MPWeaponsGang0", false);
				unk_0x494D5FF88119CDC0("MPWeaponsGang1", false);
				func_9(&Global_1375708, &Global_1373272);
				if (iVar5 == 1)
				{
					func_1(&Global_1375708, &Global_1373272, &uLocal_67);
				}
			}
			break;
		
		case 0:
			break;
		
		case 1:
			break;
		
		case 2:
			break;
	}
	unk_0xDD18BF99F1703152();
	unk_0xB871DE2AC0AD82A1(0);
	Global_1312454 = 0;
	unk_0x9D15035C6653D1B1(4);
	while (true)
	{
		wait(0);
	}
}

void func_1(var uParam0, var uParam1, var uParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!func_8(uParam2) || (func_8(uParam2) && func_7(uParam2, 250, 0)))
	{
		iVar0 = 1;
	}
	if ((unk_0x22D6FB6153F774D3(2, 187) || func_6(187, &(Global_1377236.f_1060), 1)) && iVar0)
	{
		func_5(uParam2);
		func_4(uParam2, 0, 0);
		unk_0xBE20AB8238688965(&(uParam0->f_285), 0);
	}
	if ((unk_0x22D6FB6153F774D3(2, 188) || func_6(188, &(Global_1377236.f_1060), 1)) && iVar0)
	{
		func_5(uParam2);
		func_4(uParam2, 0, 0);
		unk_0xBE20AB8238688965(&(uParam0->f_285), 1);
	}
	if (((unk_0x22D6FB6153F774D3(2, 189) || unk_0x22D6FB6153F774D3(2, 241)) || func_6(189, &(Global_1377236.f_1060), 1)) && iVar0)
	{
		func_5(uParam2);
		func_4(uParam2, 0, 0);
		unk_0xBE20AB8238688965(&(uParam0->f_285), 2);
	}
	if (((unk_0x22D6FB6153F774D3(2, 190) || unk_0x22D6FB6153F774D3(2, 242)) || func_6(190, &(Global_1377236.f_1060), 1)) && iVar0)
	{
		unk_0xBE20AB8238688965(&(uParam0->f_285), 3);
		func_5(uParam2);
		func_4(uParam2, 0, 0);
	}
	if (unk_0xCE990E643CD9D0E5(uParam0->f_285, 1))
	{
		unk_0xD2459066EA58CE43(&(uParam0->f_285), 1);
		unk_0xC4CC25B68A91D144(-1, "NAV_LEFT_RIGHT", "HUD_FRONTEND_DEFAULT_SOUNDSET", true);
		uParam1->f_3 = (uParam1->f_3 - 1);
		if (uParam1->f_3 < 0)
		{
			uParam1->f_3 = 2;
		}
		func_151(func_3(&(uParam1->f_1), &(uParam1->f_3), uParam1->f_5, 188), uParam0);
		func_157(uParam0);
		func_156(uParam0);
		func_148(uParam0, uParam1);
	}
	if (unk_0xCE990E643CD9D0E5(uParam0->f_285, 0))
	{
		unk_0xD2459066EA58CE43(&(uParam0->f_285), 0);
		unk_0xC4CC25B68A91D144(-1, "NAV_LEFT_RIGHT", "HUD_FRONTEND_DEFAULT_SOUNDSET", true);
		uParam1->f_3++;
		if (uParam1->f_3 > 2)
		{
			uParam1->f_3 = 0;
		}
		func_151(func_3(&(uParam1->f_1), &(uParam1->f_3), uParam1->f_5, 187), uParam0);
		func_157(uParam0);
		func_156(uParam0);
		func_148(uParam0, uParam1);
	}
	if (unk_0xCE990E643CD9D0E5(uParam0->f_285, 2))
	{
		unk_0xD2459066EA58CE43(&(uParam0->f_285), 2);
		uParam1->f_1 = (uParam1->f_1 - 1);
		if (uParam1->f_1 < 0)
		{
			if (iLocal_64 > 1)
			{
				func_158(uParam0);
				*uParam0 = 0;
				func_2(uParam0);
			}
			if (uParam1->f_5 > 0)
			{
				uParam1->f_5 = (uParam1->f_5 - 1);
				uParam1->f_1 = 2;
			}
			else
			{
				uParam1->f_5 = iLocal_64;
				uParam1->f_1 = 2;
				iVar1 = (uParam1->f_1 + uParam1->f_3 * 3);
				if (iVar1 >= iLocal_65)
				{
					uParam1->f_1 = ((iLocal_65 - 1) % 3);
					uParam1->f_3 = ((iLocal_65 - 1) / 3);
				}
			}
		}
		unk_0xC4CC25B68A91D144(-1, "NAV_LEFT_RIGHT", "HUD_FRONTEND_DEFAULT_SOUNDSET", true);
		func_151(func_3(&(uParam1->f_1), &(uParam1->f_3), uParam1->f_5, 189), uParam0);
		func_157(uParam0);
		func_156(uParam0);
		func_148(uParam0, uParam1);
	}
	if (unk_0xCE990E643CD9D0E5(uParam0->f_285, 3))
	{
		unk_0xD2459066EA58CE43(&(uParam0->f_285), 3);
		uParam1->f_1++;
		iVar2 = (uParam1->f_1 + uParam1->f_3 * 3);
		if (uParam1->f_1 > 2 || (uParam1->f_5 == iLocal_64 && iVar2 >= iLocal_65))
		{
			if (iLocal_64 > 1)
			{
				func_158(uParam0);
				*uParam0 = 0;
				func_2(uParam0);
			}
			uParam1->f_1 = 0;
			uParam1->f_5++;
			if (uParam1->f_5 > iLocal_64)
			{
				uParam1->f_5 = 0;
			}
		}
		unk_0xC4CC25B68A91D144(-1, "NAV_LEFT_RIGHT", "HUD_FRONTEND_DEFAULT_SOUNDSET", true);
		func_151(func_3(&(uParam1->f_1), &(uParam1->f_3), uParam1->f_5, 190), uParam0);
		func_157(uParam0);
		func_156(uParam0);
		func_148(uParam0, uParam1);
	}
}

void func_2(var uParam0)
{
	uParam0->f_281 = 0;
}

int func_3(var uParam0, var uParam1, int iParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	
	iVar0 = (*uParam0 + *uParam1 * 3);
	switch (iParam3)
	{
		case 188:
			if (iParam2 == iLocal_64)
			{
				if (iVar0 > (iLocal_65 - 1))
				{
					*uParam1 = 0;
					iVar0 = (*uParam0 + *uParam1 * 3);
				}
			}
			break;
		
		case 187:
			if (iParam2 == iLocal_64)
			{
				if (iVar0 > (iLocal_65 - 1))
				{
					if (*uParam1 > 0)
					{
						*uParam1 = (*uParam1 - 1);
					}
					else
					{
						*uParam1 = 0;
					}
					iVar0 = (*uParam0 + *uParam1 * 3);
				}
			}
			break;
		
		case 189:
			break;
		
		case 190:
			if (iParam2 == iLocal_64)
			{
				if (*uParam0 == 0)
				{
					iVar1 = 0;
					while (iVar1 <= 3)
					{
						if (iVar0 > (iLocal_65 - 1))
						{
							*uParam1 = (*uParam1 - 1);
							iVar0 = (*uParam0 + *uParam1 * 3);
						}
						else
						{
							iVar1 = 3;
						}
						iVar1++;
					}
				}
				else if (iVar0 > (iLocal_65 - 1))
				{
					if (*uParam0 > 0)
					{
						*uParam0 = (*uParam0 - 1);
					}
					else
					{
						*uParam0 = 0;
					}
					iVar0 = (*uParam0 + *uParam1 * 3);
				}
			}
			break;
	}
	return iVar0;
}

void func_4(var uParam0, bool bParam1, bool bParam2)
{
	if (uParam0->f_1 == 0)
	{
		if (unk_0x25DDB354A40FFCDB() && !bParam1)
		{
			if (!bParam2)
			{
				*uParam0 = unk_0x6CAAB7E78B5D978A();
			}
			else
			{
				*uParam0 = unk_0x29B9AF1CB5B8175D();
			}
		}
		else
		{
			*uParam0 = unk_0x578C4EF320340AF7();
		}
		uParam0->f_1 = 1;
	}
}

void func_5(var uParam0)
{
	uParam0->f_1 = 0;
}

int func_6(int iParam0, var uParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = (unk_0x0EEB12E4AD6BD29B(2, 195) - 127);
	iVar1 = (unk_0x0EEB12E4AD6BD29B(2, 196) - 127);
	iVar2 = (unk_0x0EEB12E4AD6BD29B(2, 197) - 127);
	switch (iParam0)
	{
		case 189:
			if (iVar0 < -30)
			{
				if (*uParam1 < unk_0x578C4EF320340AF7() || iParam2 == 0)
				{
					*uParam1 = unk_0x578C4EF320340AF7() + 250;
					return 1;
				}
			}
			break;
		
		case 190:
			if (iVar0 > 30)
			{
				if (*uParam1 < unk_0x578C4EF320340AF7() || iParam2 == 0)
				{
					*uParam1 = unk_0x578C4EF320340AF7() + 250;
					return 1;
				}
			}
			break;
		
		case 188:
			if (iVar1 < -30)
			{
				if (*uParam1 < unk_0x578C4EF320340AF7() || iParam2 == 0)
				{
					*uParam1 = unk_0x578C4EF320340AF7() + 250;
					return 1;
				}
			}
			break;
		
		case 187:
			if (iVar1 > 30)
			{
				if (*uParam1 < unk_0x578C4EF320340AF7() || iParam2 == 0)
				{
					*uParam1 = unk_0x578C4EF320340AF7() + 250;
					return 1;
				}
			}
			break;
		
		case 194:
			if (iVar2 > 30)
			{
				if (*uParam1 < unk_0x578C4EF320340AF7() || iParam2 == 0)
				{
					*uParam1 = unk_0x578C4EF320340AF7() + 250;
					return 1;
				}
			}
			break;
		
		case 193:
			if (iVar2 < -30)
			{
				if (*uParam1 < unk_0x578C4EF320340AF7() || iParam2 == 0)
				{
					*uParam1 = unk_0x578C4EF320340AF7() + 250;
					return 1;
				}
			}
			break;
	}
	return 0;
}

int func_7(var uParam0, int iParam1, bool bParam2)
{
	if (iParam1 == -1)
	{
		return 1;
	}
	func_4(uParam0, bParam2, 0);
	if (unk_0x25DDB354A40FFCDB() && !bParam2)
	{
		if (unk_0x44F29CF6A0675F4F(unk_0x624736CA66E14161(unk_0x6CAAB7E78B5D978A(), *uParam0)) >= iParam1)
		{
			return 1;
		}
	}
	else if (unk_0x44F29CF6A0675F4F(unk_0x624736CA66E14161(unk_0x578C4EF320340AF7(), *uParam0)) >= iParam1)
	{
		return 1;
	}
	return 0;
}

bool func_8(var uParam0)
{
	return uParam0->f_1;
}

void func_9(var uParam0, var uParam1)
{
	if ((unk_0xC7F5A2E99D75A65C("MPWeaponsCommon") && unk_0xC7F5A2E99D75A65C("MPWeaponsGang0")) && unk_0xC7F5A2E99D75A65C("MPWeaponsGang1"))
	{
		if (func_145(8, -1) == 0)
		{
			*uParam1 = func_144();
		}
		func_150();
		switch (uParam1->f_5)
		{
			case 0:
				if (!uParam0->f_1[0])
				{
					func_108(joaat("weapon_pistol"), uParam0, *uParam1, 0);
					func_108(joaat("weapon_combatpistol"), uParam0, *uParam1, 0);
					func_108(joaat("weapon_appistol"), uParam0, *uParam1, 0);
					func_108(joaat("weapon_microsmg"), uParam0, *uParam1, 0);
					func_108(joaat("weapon_smg"), uParam0, *uParam1, 0);
					func_108(joaat("weapon_assaultrifle"), uParam0, *uParam1, 0);
					func_108(joaat("weapon_carbinerifle"), uParam0, *uParam1, 0);
					func_108(joaat("weapon_advancedrifle"), uParam0, *uParam1, 0);
					func_108(joaat("weapon_mg"), uParam0, *uParam1, 0);
				}
				break;
			
			case 1:
				if (!uParam0->f_1[0])
				{
					func_108(joaat("weapon_combatmg"), uParam0, *uParam1, 0);
					func_108(joaat("weapon_assaultsmg"), uParam0, *uParam1, 0);
					func_108(joaat("weapon_pumpshotgun"), uParam0, *uParam1, 0);
					func_108(joaat("weapon_assaultshotgun"), uParam0, *uParam1, 0);
					func_108(joaat("weapon_sniperrifle"), uParam0, *uParam1, 0);
					func_108(joaat("weapon_heavysniper"), uParam0, *uParam1, 0);
					func_108(joaat("weapon_grenadelauncher"), uParam0, *uParam1, 0);
					func_108(joaat("weapon_minigun"), uParam0, *uParam1, 0);
					func_108(joaat("weapon_rpg"), uParam0, *uParam1, 0);
				}
				break;
			
			case 2:
				if (!uParam0->f_1[0])
				{
					func_108(joaat("weapon_knife"), uParam0, *uParam1, 0);
					func_108(joaat("weapon_nightstick"), uParam0, *uParam1, 0);
					func_108(joaat("weapon_bat"), uParam0, *uParam1, 0);
					func_108(joaat("weapon_crowbar"), uParam0, *uParam1, 0);
					func_108(joaat("weapon_golfclub"), uParam0, *uParam1, 0);
					func_108(joaat("weapon_molotov"), uParam0, *uParam1, 0);
					func_108(joaat("weapon_grenade"), uParam0, *uParam1, 0);
					func_108(joaat("weapon_smokegrenade"), uParam0, *uParam1, 0);
					func_108(joaat("weapon_stickybomb"), uParam0, *uParam1, 0);
				}
				break;
			
			default:
				if (!uParam0->f_1[0])
				{
					func_98(uParam0, uParam1);
				}
				break;
		}
		func_10(uParam0, func_97(uParam0));
	}
}

void func_10(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	bool bVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	
	if (iParam1 == 1)
	{
		*uParam0 = 0;
		func_2(uParam0);
	}
	if (*uParam0 == 0)
	{
		iVar0 = 0;
		while (iVar0 <= 8)
		{
			iVar5 = 0;
			iVar6 = 0;
			iVar7 = 0;
			if (uParam0->f_1[iVar0] == 1)
			{
				if (uParam0->f_85[iVar0] != 0)
				{
					if (func_96(uParam0->f_85[iVar0]))
					{
						if (func_94(1623028892, func_95(uParam0->f_85[iVar0]), -1))
						{
							bVar2 = true;
						}
						else
						{
							bVar2 = false;
						}
					}
					else if (func_90(uParam0->f_85[iVar0], uParam0->f_276, 0))
					{
						bVar2 = true;
					}
					else
					{
						bVar2 = false;
					}
				}
				bVar3 = func_87(uParam0->f_85[iVar0], uParam0->f_276, 0);
				iVar1 = 0;
				while (iVar1 <= 35)
				{
					iVar4 = func_85(uParam0->f_85[iVar0], iVar1);
					if (!bVar3)
					{
						func_69(iVar4, uParam0->f_85[iVar0], 0, 0, 0);
						func_65(iVar4, uParam0->f_85[iVar0], 0);
						func_59(iVar4, uParam0->f_85[iVar0], 0);
					}
					if (unk_0xF005CCA4263DF67F(func_58(iVar4, uParam0->f_85[iVar0]), "WCT_CLIP1"))
					{
						func_69(iVar4, uParam0->f_85[iVar0], 1, 0, 0);
						if (!bVar3)
						{
							func_65(iVar4, uParam0->f_85[iVar0], 1);
							func_59(iVar4, uParam0->f_85[iVar0], 1);
						}
					}
					if (unk_0xF005CCA4263DF67F(func_58(iVar4, uParam0->f_85[iVar0]), "WCT_SCOPE_LRG"))
					{
						func_69(iVar4, uParam0->f_85[iVar0], 1, 0, 0);
						if (!bVar3)
						{
							func_65(iVar4, uParam0->f_85[iVar0], 1);
							func_59(iVar4, uParam0->f_85[iVar0], 1);
						}
					}
					if ((uParam0->f_85[iVar0] == joaat("weapon_bullpupshotgun") || uParam0->f_85[iVar0] == joaat("weapon_pistol50")) || uParam0->f_85[iVar0] == joaat("weapon_snspistol"))
					{
						func_69(iVar4, uParam0->f_85[iVar0], 1, 0, 0);
						func_65(iVar4, uParam0->f_85[iVar0], 1);
						func_59(iVar4, uParam0->f_85[iVar0], 1);
					}
					if (bVar3 && func_53(iVar4, uParam0->f_85[iVar0], uParam0->f_276))
					{
						if (bVar2 && func_94(iVar4, uParam0->f_85[iVar0], uParam0->f_276))
						{
							iVar5 = (iVar5 + func_51(iVar4, uParam0->f_85[iVar0], 8));
							iVar6 = (iVar6 + func_49(iVar4, uParam0->f_85[iVar0], 8));
							iVar7 = (iVar7 + func_47(iVar4, uParam0->f_85[iVar0], 8));
						}
					}
					else if (iVar4 != 0)
					{
						iVar5 = (iVar5 + func_51(iVar4, uParam0->f_85[iVar0], 4));
						iVar6 = (iVar6 + func_49(iVar4, uParam0->f_85[iVar0], 4));
						iVar7 = (iVar7 + func_47(iVar4, uParam0->f_85[iVar0], 4));
					}
					iVar1++;
				}
			}
			iVar8 = 0;
			if (uParam0->f_85[iVar0] != 0)
			{
				if (bVar3)
				{
					if (func_96(uParam0->f_85[iVar0]))
					{
						if (func_94(1623028892, func_95(uParam0->f_85[iVar0]), -1))
						{
							bVar2 = true;
						}
						else
						{
							bVar2 = false;
						}
					}
					else if (func_90(uParam0->f_85[iVar0], uParam0->f_276, 0))
					{
						bVar2 = true;
					}
					else
					{
						bVar2 = false;
					}
					if (((bVar2 || (uParam0->f_85[iVar0] == joaat("weapon_pistol") && unk_0x15D88F65956DC2F6(unk_0x9B0761B4C3EB8BC7(), joaat("weapon_pistol"), 0))) || func_45(uParam0->f_85[iVar0])) || func_29(uParam0->f_85[iVar0], uParam0->f_276))
					{
						if (func_96(uParam0->f_85[iVar0]))
						{
							if (bVar2)
							{
								iVar8++;
							}
							else
							{
								iVar8 += 2;
							}
						}
						else
						{
							iVar8++;
						}
					}
					else
					{
						iVar8 += 2;
					}
				}
				else
				{
					iVar8 += 4;
				}
			}
			if (uParam0->f_1[iVar0] == 0 || unk_0xF005CCA4263DF67F(func_26(uParam0->f_85[iVar0], 0), func_26(0, 0)))
			{
				iVar8 = 0;
			}
			unk_0x9ED3958F25B8EB59("SET_DATA_SLOT");
			unk_0xAD291B8F75D737AD(0);
			unk_0xAD291B8F75D737AD(iVar0);
			unk_0xAD291B8F75D737AD(iVar0);
			unk_0xAD291B8F75D737AD(0);
			unk_0xAD291B8F75D737AD(uParam0->f_85[iVar0]);
			unk_0xAD291B8F75D737AD(iVar5);
			unk_0xAD291B8F75D737AD(iVar8);
			unk_0xAD291B8F75D737AD(iVar6);
			unk_0xAD291B8F75D737AD(iVar7);
			unk_0xE1FDD153F5858534();
			iVar0++;
		}
		unk_0x9ED3958F25B8EB59("DISPLAY_DATA_SLOT");
		unk_0xAD291B8F75D737AD(0);
		unk_0xE1FDD153F5858534();
		*uParam0 = 1;
	}
	func_23(uParam0, func_25(uParam0));
	func_14(uParam0, func_22(uParam0));
	func_11(uParam0, func_13(uParam0));
}

void func_11(var uParam0, int iParam1)
{
	if (iParam1 == 1)
	{
		uParam0->f_279 = 0;
		func_12(uParam0);
	}
	if (uParam0->f_279 == 0)
	{
		unk_0x9ED3958F25B8EB59("SET_COLUMN_HIGHLIGHT");
		unk_0xAD291B8F75D737AD(0);
		unk_0xAD291B8F75D737AD(uParam0->f_277);
		unk_0xF1B28F753235CE2A(false);
		unk_0xF1B28F753235CE2A(true);
		unk_0xF1B28F753235CE2A(true);
		unk_0xE1FDD153F5858534();
		uParam0->f_279 = 1;
	}
}

void func_12(var uParam0)
{
	uParam0->f_283 = 0;
}

int func_13(var uParam0)
{
	return uParam0->f_283;
}

void func_14(var uParam0, int iParam1)
{
	struct<2> Var0;
	int iVar1;
	
	StringCopy(&Var0, " ", 16);
	if (iParam1 == 1)
	{
		uParam0->f_280 = 0;
		func_21(uParam0);
	}
	if (uParam0->f_280 == 0)
	{
		if (uParam0->f_277 > -1)
		{
			unk_0x9ED3958F25B8EB59("SET_DESCRIPTION");
			iVar1 = (uParam0->f_215[uParam0->f_277] - uParam0->f_165[uParam0->f_277]);
			if (iVar1 < 0)
			{
				iVar1 = 0;
			}
			unk_0xAD291B8F75D737AD(0);
			func_20(&(uParam0->f_11[uParam0->f_277 /*4*/]));
			func_20(&(uParam0->f_48[uParam0->f_277 /*4*/]));
			unk_0xAD291B8F75D737AD(uParam0->f_95[uParam0->f_277]);
			unk_0xAD291B8F75D737AD(uParam0->f_105[uParam0->f_277]);
			unk_0x49B9B8101B158AEE(uParam0->f_135[uParam0->f_277]);
			unk_0x49B9B8101B158AEE(uParam0->f_115[uParam0->f_277]);
			unk_0xAD291B8F75D737AD(uParam0->f_145[uParam0->f_277]);
			unk_0xAD291B8F75D737AD(uParam0->f_155[uParam0->f_277]);
			unk_0xAD291B8F75D737AD(uParam0->f_165[uParam0->f_277]);
			unk_0xAD291B8F75D737AD(uParam0->f_185[uParam0->f_277]);
			unk_0xAD291B8F75D737AD(uParam0->f_195[uParam0->f_277]);
			unk_0xAD291B8F75D737AD(uParam0->f_205[uParam0->f_277]);
			unk_0xAD291B8F75D737AD(uParam0->f_225[uParam0->f_277]);
			unk_0xAD291B8F75D737AD(iVar1);
			unk_0xAD291B8F75D737AD(uParam0->f_125[uParam0->f_277]);
			unk_0xAD291B8F75D737AD(uParam0->f_175[uParam0->f_277]);
			unk_0xAD291B8F75D737AD(uParam0->f_235[uParam0->f_277]);
			unk_0xAD291B8F75D737AD(func_16(uParam0->f_85[uParam0->f_277]));
			unk_0xE1FDD153F5858534();
			if (func_15(uParam0->f_85[uParam0->f_277]))
			{
				unk_0x9ED3958F25B8EB59("SET_COLUMN_TITLE");
				unk_0xAD291B8F75D737AD(0);
				func_20(&Var0);
				unk_0xAD291B8F75D737AD(2);
				unk_0xE1FDD153F5858534();
				unk_0x9ED3958F25B8EB59("SET_COLUMN_TITLE");
				unk_0xAD291B8F75D737AD(0);
				func_20(&Var0);
				unk_0xAD291B8F75D737AD(3);
				unk_0xE1FDD153F5858534();
				unk_0x9ED3958F25B8EB59("SET_COLUMN_TITLE");
				unk_0xAD291B8F75D737AD(0);
				func_20(&Var0);
				unk_0xAD291B8F75D737AD(4);
				unk_0xE1FDD153F5858534();
				unk_0x9ED3958F25B8EB59("SET_COLUMN_TITLE");
				unk_0xAD291B8F75D737AD(0);
				func_20(&Var0);
				unk_0xAD291B8F75D737AD(8);
				unk_0xE1FDD153F5858534();
				unk_0x9ED3958F25B8EB59("SET_COLUMN_TITLE");
				unk_0xAD291B8F75D737AD(0);
				func_20(&Var0);
				unk_0xAD291B8F75D737AD(9);
				unk_0xE1FDD153F5858534();
			}
			else
			{
				unk_0x9ED3958F25B8EB59("SET_COLUMN_TITLE");
				unk_0xAD291B8F75D737AD(0);
				func_20("PM_ACCURACY");
				unk_0xAD291B8F75D737AD(2);
				unk_0xE1FDD153F5858534();
				unk_0x9ED3958F25B8EB59("SET_COLUMN_TITLE");
				unk_0xAD291B8F75D737AD(0);
				func_20("PM_RANGE");
				unk_0xAD291B8F75D737AD(3);
				unk_0xE1FDD153F5858534();
				unk_0x9ED3958F25B8EB59("SET_COLUMN_TITLE");
				unk_0xAD291B8F75D737AD(0);
				func_20("PM_CLIPSIZE");
				unk_0xAD291B8F75D737AD(4);
				unk_0xE1FDD153F5858534();
				unk_0x9ED3958F25B8EB59("SET_COLUMN_TITLE");
				unk_0xAD291B8F75D737AD(0);
				func_20("PM_KD_RATIO");
				unk_0xAD291B8F75D737AD(7);
				unk_0xE1FDD153F5858534();
				unk_0x9ED3958F25B8EB59("SET_COLUMN_TITLE");
				unk_0xAD291B8F75D737AD(0);
				func_20("PM_HEADSHOTS");
				unk_0xAD291B8F75D737AD(8);
				unk_0xE1FDD153F5858534();
				unk_0x9ED3958F25B8EB59("SET_COLUMN_TITLE");
				unk_0xAD291B8F75D737AD(0);
				func_20("PM_MY_ACCURACY");
				unk_0xAD291B8F75D737AD(9);
				unk_0xE1FDD153F5858534();
			}
		}
		uParam0->f_280 = 1;
	}
}

int func_15(int iParam0)
{
	switch (iParam0)
	{
		case joaat("weapon_knife"):
		case joaat("weapon_nightstick"):
		case joaat("weapon_hammer"):
		case joaat("weapon_bat"):
		case joaat("weapon_crowbar"):
		case joaat("weapon_golfclub"):
		case joaat("weapon_grenade"):
		case joaat("weapon_smokegrenade"):
		case joaat("weapon_stickybomb"):
		case joaat("weapon_molotov"):
		case joaat("weapon_bottle"):
		case joaat("weapon_dagger"):
		case joaat("weapon_proxmine"):
		case joaat("weapon_knuckle"):
		case joaat("weapon_machete"):
		case joaat("weapon_flashlight"):
		case joaat("weapon_switchblade"):
		case joaat("WEAPON_BATTLEAXE"):
		case joaat("WEAPON_PIPEBOMB"):
		case joaat("WEAPON_POOLCUE"):
		case joaat("WEAPON_WRENCH"):
		case joaat("WEAPON_STONE_HATCHET"):
			return 1;
			break;
	}
	return 0;
}

int func_16(int iParam0)
{
	switch (iParam0)
	{
		case joaat("weapon_pistol"):
			return 0;
			break;
		
		case joaat("weapon_knife"):
			return 0;
			break;
		
		case joaat("weapon_microsmg"):
			return 5;
			break;
		
		case joaat("weapon_assaultsmg"):
			return 29;
			break;
		
		case joaat("weapon_nightstick"):
			return 3;
			break;
		
		case joaat("weapon_combatpistol"):
			return 9;
			break;
		
		case joaat("weapon_smg"):
			return 11;
			break;
		
		case joaat("weapon_assaultrifle"):
			return 24;
			break;
		
		case joaat("weapon_sniperrifle"):
			return 21;
			break;
		
		case joaat("weapon_stickybomb"):
			return 19;
			break;
		
		case joaat("weapon_petrolcan"):
			return 20;
			break;
		
		case joaat("weapon_pumpshotgun"):
			return 17;
			break;
		
		case joaat("weapon_appistol"):
			return 33;
			break;
		
		case joaat("weapon_smokegrenade"):
			return 13;
			break;
		
		case joaat("weapon_grenade"):
			return 15;
			break;
		
		case joaat("weapon_carbinerifle"):
			if (func_17(3741, -1, -1))
			{
				return 0;
			}
			else
			{
				return 42;
			}
			break;
		
		case joaat("weapon_assaultshotgun"):
			return 37;
			break;
		
		case joaat("weapon_molotov"):
			if (func_17(3741, -1, -1))
			{
				return 0;
			}
			else
			{
				return 31;
			}
			break;
		
		case joaat("weapon_mg"):
			return 50;
			break;
		
		case joaat("weapon_advancedrifle"):
			return 70;
			break;
		
		case joaat("weapon_combatmg"):
			return 80;
			break;
		
		case joaat("weapon_grenadelauncher"):
			return 60;
			break;
		
		case joaat("weapon_heavysniper"):
			return 90;
			break;
		
		case joaat("weapon_rpg"):
			return 100;
			break;
		
		case joaat("weapon_minigun"):
			return 120;
			break;
		
		case joaat("weapon_sawnoffshotgun"):
			return 0;
			break;
		
		case joaat("weapon_golfclub"):
			return 0;
			break;
		
		case joaat("weapon_crowbar"):
			return 0;
			break;
		
		case joaat("weapon_bat"):
			return 0;
			break;
	}
	return 0;
}

int func_17(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	var uVar2;
	
	iVar0 = 0;
	if (iParam1 == -1)
	{
		iParam1 = func_144();
	}
	iVar1 = func_19(iParam0, iParam1);
	uVar2 = func_18(iParam0);
	if (0 != iVar1)
	{
		iVar0 = unk_0x9FD0AD883E4A7C1E(iVar1, uVar2, iParam2);
	}
	return iVar0;
}

int func_18(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	if (iParam0 >= 0 && iParam0 < 192)
	{
		iVar0 = ((iParam0 - 0) - unk_0x12730A13C85FC896((iParam0 - 0)) * 64);
	}
	else if (iParam0 >= 192 && iParam0 < 384)
	{
		iVar0 = ((iParam0 - 192) - unk_0x12730A13C85FC896((iParam0 - 192)) * 64);
	}
	else if (iParam0 >= 513 && iParam0 < 705)
	{
		iVar0 = ((iParam0 - 513) - unk_0x12730A13C85FC896((iParam0 - 513)) * 64);
	}
	else if (iParam0 >= 705 && iParam0 < 1281)
	{
		iVar0 = ((iParam0 - 705) - unk_0x12730A13C85FC896((iParam0 - 705)) * 64);
	}
	else if (iParam0 >= 2919 && iParam0 < 3111)
	{
		iVar0 = ((iParam0 - 2919) - unk_0x12730A13C85FC896((iParam0 - 2919)) * 64);
	}
	else if (iParam0 >= 3111 && iParam0 < 3879)
	{
		iVar0 = ((iParam0 - 3111) - unk_0x12730A13C85FC896((iParam0 - 3111)) * 64);
	}
	else if (iParam0 >= 4335 && iParam0 < 4399)
	{
		iVar0 = ((iParam0 - 4335) - unk_0x12730A13C85FC896((iParam0 - 4335)) * 64);
	}
	else if (iParam0 >= 4207 && iParam0 < 4335)
	{
		iVar0 = ((iParam0 - 4207) - unk_0x12730A13C85FC896((iParam0 - 4207)) * 64);
	}
	else if (iParam0 >= 6029 && iParam0 < 6413)
	{
		iVar0 = ((iParam0 - 6029) - unk_0x12730A13C85FC896((iParam0 - 6029)) * 64);
	}
	else if (iParam0 >= 7385 && iParam0 < 7641)
	{
		iVar0 = ((iParam0 - 7385) - unk_0x12730A13C85FC896((iParam0 - 7385)) * 64);
	}
	else if (iParam0 >= 7321 && iParam0 < 7385)
	{
		iVar0 = ((iParam0 - 7321) - unk_0x12730A13C85FC896((iParam0 - 7321)) * 64);
	}
	else if (iParam0 >= 9361 && iParam0 < 9553)
	{
		iVar0 = ((iParam0 - 9361) - unk_0x12730A13C85FC896((iParam0 - 9361)) * 64);
	}
	else if (iParam0 >= 15369 && iParam0 < 15561)
	{
		iVar0 = ((iParam0 - 15369) - unk_0x12730A13C85FC896((iParam0 - 15369)) * 64);
	}
	else if (iParam0 >= 15562 && iParam0 < 15946)
	{
		iVar0 = ((iParam0 - 15562) - unk_0x12730A13C85FC896((iParam0 - 15562)) * 64);
	}
	else if (iParam0 >= 15946 && iParam0 < 16010)
	{
		iVar0 = ((iParam0 - 15946) - unk_0x12730A13C85FC896((iParam0 - 15946)) * 64);
	}
	else if (iParam0 >= 18098 && iParam0 < 18162)
	{
		iVar0 = ((iParam0 - 18098) - unk_0x12730A13C85FC896((iParam0 - 18098)) * 64);
	}
	else if (iParam0 >= 22066 && iParam0 < 22194)
	{
		iVar0 = ((iParam0 - 22066) - unk_0x12730A13C85FC896((iParam0 - 22066)) * 64);
	}
	else if (iParam0 >= 24962 && iParam0 < 25538)
	{
		iVar0 = ((iParam0 - 24962) - unk_0x12730A13C85FC896((iParam0 - 24962)) * 64);
	}
	else if (iParam0 >= 26810 && iParam0 < 27258)
	{
		iVar0 = ((iParam0 - 26810) - unk_0x12730A13C85FC896((iParam0 - 26810)) * 64);
	}
	else if (iParam0 >= 28098 && iParam0 < 28354)
	{
		iVar0 = ((iParam0 - 28098) - unk_0x12730A13C85FC896((iParam0 - 28098)) * 64);
	}
	else if (iParam0 >= 28355 && iParam0 < 28483)
	{
		iVar0 = ((iParam0 - 28355) - unk_0x12730A13C85FC896((iParam0 - 28355)) * 64);
	}
	else if (iParam0 >= 30227 && iParam0 < 30355)
	{
		iVar0 = ((iParam0 - 30227) - unk_0x12730A13C85FC896((iParam0 - 30227)) * 64);
	}
	else if (iParam0 >= 30355 && iParam0 < 30483)
	{
		iVar0 = ((iParam0 - 30355) - unk_0x12730A13C85FC896((iParam0 - 30355)) * 64);
	}
	else if (iParam0 >= 30515 && iParam0 < 30707)
	{
		iVar0 = ((iParam0 - 30515) - unk_0x12730A13C85FC896((iParam0 - 30515)) * 64);
	}
	return iVar0;
}

int func_19(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam1 == -1)
	{
		iParam1 = func_144();
	}
	iVar0 = 0;
	if (iParam0 >= 0 && iParam0 < 192)
	{
		iVar0 = unk_0x43BE40E27DB6DC2E((iParam0 - 0), 0, 1, iParam1);
	}
	else if (iParam0 >= 192 && iParam0 < 384)
	{
		iVar0 = unk_0x43BE40E27DB6DC2E((iParam0 - 192), 1, 1, iParam1);
	}
	else if (iParam0 >= 513 && iParam0 < 705)
	{
		iVar0 = unk_0x43BE40E27DB6DC2E((iParam0 - 513), 0, 0, 0);
	}
	else if (iParam0 >= 705 && iParam0 < 1281)
	{
		iVar0 = unk_0x43BE40E27DB6DC2E((iParam0 - 705), 1, 0, 0);
	}
	else if (iParam0 >= 2919 && iParam0 < 3111)
	{
		iVar0 = unk_0x840F9A9E6D216561((iParam0 - 2919), 0, 0, 0);
	}
	else if (iParam0 >= 3111 && iParam0 < 3879)
	{
		iVar0 = unk_0x840F9A9E6D216561((iParam0 - 3111), 0, 1, iParam1);
	}
	else if (iParam0 >= 4335 && iParam0 < 4399)
	{
		iVar0 = unk_0x4B2E4855CB2B4FAA((iParam0 - 4335), 0, 0, 0, "_NGPSTAT_BOOL");
	}
	else if (iParam0 >= 4207 && iParam0 < 4335)
	{
		iVar0 = unk_0x4B2E4855CB2B4FAA((iParam0 - 4207), 0, 1, iParam1, "_NGPSTAT_BOOL");
	}
	else if (iParam0 >= 6029 && iParam0 < 6413)
	{
		iVar0 = unk_0x4B2E4855CB2B4FAA((iParam0 - 6029), 0, 1, iParam1, "_NGTATPSTAT_BOOL");
	}
	else if (iParam0 >= 7321 && iParam0 < 7385)
	{
		iVar0 = unk_0x4B2E4855CB2B4FAA((iParam0 - 7321), 0, 0, 0, "_NGDLCPSTAT_BOOL");
	}
	else if (iParam0 >= 7385 && iParam0 < 7641)
	{
		iVar0 = unk_0x4B2E4855CB2B4FAA((iParam0 - 7385), 0, 1, iParam1, "_NGDLCPSTAT_BOOL");
	}
	else if (iParam0 >= 9361 && iParam0 < 9553)
	{
		iVar0 = unk_0x4B2E4855CB2B4FAA((iParam0 - 9361), 0, 1, iParam1, "_DLCBIKEPSTAT_BOOL");
	}
	else if (iParam0 >= 15369 && iParam0 < 15561)
	{
		iVar0 = unk_0x4B2E4855CB2B4FAA((iParam0 - 15369), 0, 1, iParam1, "_DLCGUNPSTAT_BOOL");
	}
	else if (iParam0 >= 15562 && iParam0 < 15946)
	{
		iVar0 = unk_0x4B2E4855CB2B4FAA((iParam0 - 15562), 0, 1, iParam1, "_GUNTATPSTAT_BOOL");
	}
	else if (iParam0 >= 15946 && iParam0 < 16010)
	{
		iVar0 = unk_0x4B2E4855CB2B4FAA((iParam0 - 15946), 0, 1, iParam1, "_DLCSMUGCHARPSTAT_BOOL");
	}
	else if (iParam0 >= 18098 && iParam0 < 18162)
	{
		iVar0 = unk_0x4B2E4855CB2B4FAA((iParam0 - 18098), 0, 1, iParam1, "_GANGOPSPSTAT_BOOL");
	}
	else if (iParam0 >= 22066 && iParam0 < 22194)
	{
		iVar0 = unk_0x4B2E4855CB2B4FAA((iParam0 - 22066), 0, 1, iParam1, "_BUSINESSBATPSTAT_BOOL");
	}
	else if (iParam0 >= 24962 && iParam0 < 25538)
	{
		iVar0 = unk_0x4B2E4855CB2B4FAA((iParam0 - 24962), 0, 1, iParam1, "_ARENAWARSPSTAT_BOOL");
	}
	else if (iParam0 >= 26810 && iParam0 < 27258)
	{
		iVar0 = unk_0x4B2E4855CB2B4FAA((iParam0 - 26810), 0, 1, iParam1, "_CASINOPSTAT_BOOL");
	}
	else if (iParam0 >= 28098 && iParam0 < 28354)
	{
		iVar0 = unk_0x4B2E4855CB2B4FAA((iParam0 - 28098), 0, 1, iParam1, "_CASINOHSTPSTAT_BOOL");
	}
	else if (iParam0 >= 28355 && iParam0 < 28483)
	{
		iVar0 = unk_0x4B2E4855CB2B4FAA((iParam0 - 28355), 0, 1, iParam1, "_HEIST3TATTOOSTAT_BOOL");
	}
	else if (iParam0 >= 30227 && iParam0 < 30355)
	{
		iVar0 = unk_0x4B2E4855CB2B4FAA((iParam0 - 30227), 0, 1, iParam1, "_SU20PSTAT_BOOL");
	}
	else if (iParam0 >= 30355 && iParam0 < 30483)
	{
		iVar0 = unk_0x4B2E4855CB2B4FAA((iParam0 - 30355), 0, 1, iParam1, "_SU20TATTOOSTAT_BOOL");
	}
	else if (iParam0 >= 30515 && iParam0 < 30707)
	{
		iVar0 = unk_0x4B2E4855CB2B4FAA((iParam0 - 30515), 0, 1, iParam1, "_HISLANDPSTAT_BOOL");
	}
	return iVar0;
}

void func_20(char* sParam0)
{
	unk_0xB23270F3D5E62FDE(sParam0);
	unk_0x2042E9CA4306F725();
}

void func_21(var uParam0)
{
	uParam0->f_284 = 0;
}

int func_22(var uParam0)
{
	return uParam0->f_284;
}

void func_23(var uParam0, int iParam1)
{
	if (iParam1 == 1)
	{
		uParam0->f_278 = 0;
		func_24(uParam0);
	}
	if (uParam0->f_278 == 0)
	{
		if (uParam0->f_275 != 9999)
		{
			unk_0x9ED3958F25B8EB59("SET_INPUT_EVENT");
			unk_0xAD291B8F75D737AD(uParam0->f_275);
			unk_0xE1FDD153F5858534();
			uParam0->f_275 = 9999;
			uParam0->f_278 = 1;
		}
	}
}

void func_24(var uParam0)
{
	uParam0->f_282 = 0;
}

int func_25(var uParam0)
{
	return uParam0->f_282;
}

char* func_26(int iParam0, bool bParam1)
{
	struct<32> Var0;
	
	switch (iParam0)
	{
		case 0:
			if (bParam1)
			{
				return "WTU_INVALID";
			}
			else
			{
				return "WT_INVALID";
			}
			break;
		
		case joaat("weapon_unarmed"):
			if (bParam1)
			{
				return "WTU_UNARMED";
			}
			else
			{
				return "WT_UNARMED";
			}
			break;
		
		case joaat("weapon_pistol"):
			if (bParam1)
			{
				return "WTU_PIST";
			}
			else
			{
				return "WT_PIST";
			}
			break;
		
		case joaat("weapon_combatpistol"):
			if (bParam1)
			{
				return "WTU_PIST_CBT";
			}
			else
			{
				return "WT_PIST_CBT";
			}
			break;
		
		case joaat("weapon_appistol"):
			if (bParam1)
			{
				return "WTU_PIST_AP";
			}
			else
			{
				return "WT_PIST_AP";
			}
			break;
		
		case joaat("weapon_smg"):
			if (bParam1)
			{
				return "WTU_SMG";
			}
			else
			{
				return "WT_SMG";
			}
			break;
		
		case joaat("weapon_microsmg"):
			if (bParam1)
			{
				return "WTU_SMG_MCR";
			}
			else
			{
				return "WT_SMG_MCR";
			}
			break;
		
		case joaat("weapon_assaultrifle"):
			if (bParam1)
			{
				return "WTU_RIFLE_ASL";
			}
			else
			{
				return "WT_RIFLE_ASL";
			}
			break;
		
		case joaat("weapon_carbinerifle"):
			if (bParam1)
			{
				return "WTU_RIFLE_CBN";
			}
			else
			{
				return "WT_RIFLE_CBN";
			}
			break;
		
		case joaat("weapon_advancedrifle"):
			if (bParam1)
			{
				return "WTU_RIFLE_ADV";
			}
			else
			{
				return "WT_RIFLE_ADV";
			}
			break;
		
		case joaat("weapon_mg"):
			if (bParam1)
			{
				return "WTU_MG";
			}
			else
			{
				return "WT_MG";
			}
			break;
		
		case joaat("weapon_combatmg"):
			if (bParam1)
			{
				return "WTU_MG_CBT";
			}
			else
			{
				return "WT_MG_CBT";
			}
			break;
		
		case joaat("weapon_pumpshotgun"):
			if (bParam1)
			{
				return "WTU_SG_PMP";
			}
			else
			{
				return "WT_SG_PMP";
			}
			break;
		
		case joaat("weapon_sawnoffshotgun"):
			if (bParam1)
			{
				return "WTU_SG_SOF";
			}
			else
			{
				return "WT_SG_SOF";
			}
			break;
		
		case joaat("weapon_assaultshotgun"):
			if (bParam1)
			{
				return "WTU_SG_ASL";
			}
			else
			{
				return "WT_SG_ASL";
			}
			break;
		
		case joaat("weapon_heavysniper"):
			if (bParam1)
			{
				return "WTU_SNIP_HVY";
			}
			else
			{
				return "WT_SNIP_HVY";
			}
			break;
		
		case joaat("weapon_remotesniper"):
			if (bParam1)
			{
				return "WTU_SNIP_RMT";
			}
			else
			{
				return "WT_SNIP_RMT";
			}
			break;
		
		case joaat("weapon_sniperrifle"):
			if (bParam1)
			{
				return "WTU_SNIP_RIF";
			}
			else
			{
				return "WT_SNIP_RIF";
			}
			break;
		
		case joaat("weapon_grenadelauncher"):
			if (bParam1)
			{
				return "WTU_GL";
			}
			else
			{
				return "WT_GL";
			}
			break;
		
		case joaat("weapon_rpg"):
			if (bParam1)
			{
				return "WTU_RPG";
			}
			else
			{
				return "WT_RPG";
			}
			break;
		
		case joaat("weapon_minigun"):
			if (bParam1)
			{
				return "WTU_MINIGUN";
			}
			else
			{
				return "WT_MINIGUN";
			}
			break;
		
		case joaat("weapon_grenade"):
			if (bParam1)
			{
				return "WTU_GNADE";
			}
			else
			{
				return "WT_GNADE";
			}
			break;
		
		case joaat("weapon_smokegrenade"):
			if (bParam1)
			{
				return "WTU_GNADE_SMK";
			}
			else
			{
				return "WT_GNADE_SMK";
			}
			break;
		
		case joaat("weapon_stickybomb"):
			if (bParam1)
			{
				return "WTU_GNADE_STK";
			}
			else
			{
				return "WT_GNADE_STK";
			}
			break;
		
		case joaat("weapon_molotov"):
			if (bParam1)
			{
				return "WTU_MOLOTOV";
			}
			else
			{
				return "WT_MOLOTOV";
			}
			break;
		
		case joaat("weapon_stungun"):
			if (bParam1)
			{
				return "WTU_STUN";
			}
			else
			{
				return "WT_STUN";
			}
			break;
		
		case joaat("weapon_petrolcan"):
			if (bParam1)
			{
				return "WTU_PETROL";
			}
			else
			{
				return "WT_PETROL";
			}
			break;
		
		case joaat("weapon_electric_fence"):
			if (bParam1)
			{
				return "WTU_ELCFEN";
			}
			else
			{
				return "WT_ELCFEN";
			}
			break;
		
		case joaat("vehicle_weapon_tank"):
			if (bParam1)
			{
				return "WTU_V_TANK";
			}
			else
			{
				return "WT_V_TANK";
			}
			break;
		
		case joaat("vehicle_weapon_space_rocket"):
			if (bParam1)
			{
				return "WTU_V_SPACERKT";
			}
			else
			{
				return "WT_V_SPACERKT";
			}
			break;
		
		case joaat("vehicle_weapon_player_laser"):
			if (bParam1)
			{
				return "WTU_V_PLRLSR";
			}
			else
			{
				return "WT_V_PLRLSR";
			}
			break;
		
		case joaat("object"):
			if (bParam1)
			{
				return "WTU_OBJECT";
			}
			else
			{
				return "WT_OBJECT";
			}
			break;
		
		case joaat("gadget_parachute"):
			if (bParam1)
			{
				return "WTU_PARA";
			}
			else
			{
				return "WT_PARA";
			}
			break;
		
		case joaat("AMMO_RPG"):
			if (bParam1)
			{
				return "WTU_A_RPG";
			}
			else
			{
				return "WT_A_RPG";
			}
			break;
		
		case joaat("AMMO_TANK"):
			if (bParam1)
			{
				return "WTU_A_TANK";
			}
			else
			{
				return "WT_A_TANK";
			}
			break;
		
		case joaat("AMMO_SPACE_ROCKET"):
			if (bParam1)
			{
				return "WTU_A_SPACERKT";
			}
			else
			{
				return "WT_A_SPACERKT";
			}
			break;
		
		case joaat("AMMO_PLAYER_LASER"):
			if (bParam1)
			{
				return "WTU_A_PLRLSR";
			}
			else
			{
				return "WT_A_PLRLSR";
			}
			break;
		
		case joaat("AMMO_ENEMY_LASER"):
			if (bParam1)
			{
				return "WTU_A_ENMYLSR";
			}
			else
			{
				return "WT_A_ENMYLSR";
			}
			break;
		
		case joaat("weapon_knife"):
			if (bParam1)
			{
				return "WTU_KNIFE";
			}
			else
			{
				return "WT_KNIFE";
			}
			break;
		
		case joaat("weapon_nightstick"):
			if (bParam1)
			{
				return "WTU_NGTSTK";
			}
			else
			{
				return "WT_NGTSTK";
			}
			break;
		
		case joaat("weapon_hammer"):
			if (bParam1)
			{
				return "WTU_HAMMER";
			}
			else
			{
				return "WT_HAMMER";
			}
			break;
		
		case joaat("weapon_bat"):
			if (bParam1)
			{
				return "WTU_BAT";
			}
			else
			{
				return "WT_BAT";
			}
			break;
		
		case joaat("weapon_crowbar"):
			if (bParam1)
			{
				return "WTU_CROWBAR";
			}
			else
			{
				return "WT_CROWBAR";
			}
			break;
		
		case joaat("weapon_golfclub"):
			if (bParam1)
			{
				return "WTU_GOLFCLUB";
			}
			else
			{
				return "WT_GOLFCLUB";
			}
			break;
		
		case joaat("weapon_rammed_by_car"):
			if (bParam1)
			{
				return "WTU_PIST";
			}
			else
			{
				return "WT_PIST";
			}
			break;
		
		case joaat("weapon_run_over_by_car"):
			if (bParam1)
			{
				return "WTU_PIST";
			}
			else
			{
				return "WT_PIST";
			}
			break;
		
		case joaat("weapon_assaultsmg"):
			if (bParam1)
			{
				return "WTU_SMG_ASL";
			}
			else
			{
				return "WT_SMG_ASL";
			}
			break;
		
		case joaat("weapon_bullpupshotgun"):
			if (bParam1)
			{
				return "WTU_SG_BLP";
			}
			else
			{
				return "WT_SG_BLP";
			}
			break;
		
		case joaat("weapon_pistol50"):
			if (bParam1)
			{
				return "WTU_PIST_50";
			}
			else
			{
				return "WT_PIST_50";
			}
			break;
		
		case joaat("weapon_bottle"):
			if (bParam1)
			{
				return "WTU_BOTTLE";
			}
			else
			{
				return "WT_BOTTLE";
			}
			break;
		
		case joaat("weapon_gusenberg"):
			if (bParam1)
			{
				return "WTU_GUSENBERG";
			}
			else
			{
				return "WT_GUSENBERG";
			}
			break;
		
		case joaat("weapon_snspistol"):
			if (bParam1)
			{
				return "WTU_SNSPISTOL";
			}
			else
			{
				return "WT_SNSPISTOL";
			}
			break;
		
		case joaat("weapon_vintagepistol"):
			if (bParam1)
			{
				return "WTU_VPISTOL";
			}
			else
			{
				return "WT_VPISTOL";
			}
			break;
		
		case joaat("weapon_dagger"):
			if (bParam1)
			{
				return "WTU_DAGGER";
			}
			else
			{
				return "WT_DAGGER";
			}
			break;
		
		case joaat("weapon_flaregun"):
			if (bParam1)
			{
				return "WTU_FLAREGUN";
			}
			else
			{
				return "WT_FLAREGUN";
			}
			break;
		
		case joaat("weapon_heavypistol"):
			if (bParam1)
			{
				return "WTU_HEAVYPSTL";
			}
			else
			{
				return "WT_HEAVYPSTL";
			}
			break;
		
		case joaat("weapon_specialcarbine"):
			if (bParam1)
			{
				return "WTU_RIFLE_SCBN";
			}
			else
			{
				return "WT_RIFLE_SCBN";
			}
			break;
		
		case joaat("weapon_musket"):
			if (bParam1)
			{
				return "WTU_MUSKET";
			}
			else
			{
				return "WT_MUSKET";
			}
			break;
		
		case joaat("weapon_firework"):
			if (bParam1)
			{
				return "WTU_FWRKLNCHR";
			}
			else
			{
				return "WT_FWRKLNCHR";
			}
			break;
		
		case joaat("weapon_marksmanrifle"):
			if (bParam1)
			{
				return "WTU_MKRIFLE";
			}
			else
			{
				return "WT_MKRIFLE";
			}
			break;
		
		case joaat("weapon_heavyshotgun"):
			if (bParam1)
			{
				return "WTU_HVYSHOT";
			}
			else
			{
				return "WT_HVYSHOT";
			}
			break;
		
		case joaat("weapon_proxmine"):
			if (bParam1)
			{
				return "WTU_PRXMINE";
			}
			else
			{
				return "WT_PRXMINE";
			}
			break;
		
		case joaat("weapon_hominglauncher"):
			if (bParam1)
			{
				return "WTU_HOMLNCH";
			}
			else
			{
				return "WT_HOMLNCH";
			}
			break;
		
		case joaat("weapon_hatchet"):
			if (bParam1)
			{
				return "WTU_HATCHET";
			}
			else
			{
				return "WT_HATCHET";
			}
			break;
		
		case joaat("weapon_railgun"):
			if (bParam1)
			{
				return "WTU_RAILGUN";
			}
			else
			{
				return "WT_RAILGUN";
			}
			break;
		
		case joaat("weapon_combatpdw"):
			if (bParam1)
			{
				return "WTU_COMBATPDW";
			}
			else
			{
				return "WT_COMBATPDW";
			}
			break;
		
		case joaat("weapon_knuckle"):
			if (bParam1)
			{
				return "WTU_KNUCKLE";
			}
			else
			{
				return "WT_KNUCKLE";
			}
			break;
		
		case joaat("weapon_marksmanpistol"):
			if (bParam1)
			{
				return "WTU_MKPISTOL";
			}
			else
			{
				return "WT_MKPISTOL";
			}
			break;
		
		case joaat("weapon_bullpuprifle"):
			if (bParam1)
			{
				return "WTU_BULLRIFLE";
			}
			else
			{
				return "WT_BULLRIFLE";
			}
			break;
		
		case joaat("weapon_machete"):
			if (bParam1)
			{
				return "WTU_MACHETE";
			}
			else
			{
				return "WT_MACHETE";
			}
			break;
		
		case joaat("weapon_machinepistol"):
			if (bParam1)
			{
				return "WTU_MCHPIST";
			}
			else
			{
				return "WT_MCHPIST";
			}
			break;
		
		case joaat("weapon_flashlight"):
			if (bParam1)
			{
				return "WTU_FLASHLIGHT";
			}
			else
			{
				return "WT_FLASHLIGHT";
			}
			break;
		
		case joaat("weapon_dbshotgun"):
			if (bParam1)
			{
				return "WTU_DBSHGN";
			}
			else
			{
				return "WT_DBSHGN";
			}
			break;
		
		case joaat("weapon_compactrifle"):
			if (bParam1)
			{
				return "WTU_CMPRIFLE";
			}
			else
			{
				return "WT_CMPRIFLE";
			}
			break;
		
		case joaat("weapon_switchblade"):
			if (bParam1)
			{
				return "WTU_SWBLADE";
			}
			else
			{
				return "WT_SWBLADE";
			}
			break;
		
		case joaat("weapon_revolver"):
			if (bParam1)
			{
				return "WTU_REVOLVER";
			}
			else
			{
				return "WT_REVOLVER";
			}
			break;
		
		case joaat("WEAPON_AUTOSHOTGUN"):
			if (bParam1)
			{
				return "WTU_AUTOSHGN";
			}
			else
			{
				return "WT_AUTOSHGN";
			}
			break;
		
		case joaat("WEAPON_BATTLEAXE"):
			if (bParam1)
			{
				return "WTU_BATTLEAXE";
			}
			else
			{
				return "WT_BATTLEAXE";
			}
			break;
		
		case joaat("WEAPON_COMPACTLAUNCHER"):
			if (bParam1)
			{
				return "WTU_CMPGL";
			}
			else
			{
				return "WT_CMPGL";
			}
			break;
		
		case joaat("WEAPON_MINISMG"):
			if (bParam1)
			{
				return "WTU_MINISMG";
			}
			else
			{
				return "WT_MINISMG";
			}
			break;
		
		case joaat("WEAPON_PIPEBOMB"):
			if (bParam1)
			{
				return "WTU_PIPEBOMB";
			}
			else
			{
				return "WT_PIPEBOMB";
			}
			break;
		
		case joaat("WEAPON_POOLCUE"):
			if (bParam1)
			{
				return "WTU_POOLCUE";
			}
			else
			{
				return "WT_POOLCUE";
			}
			break;
		
		case joaat("WEAPON_WRENCH"):
			if (bParam1)
			{
				return "WTU_WRENCH";
			}
			else
			{
				return "WT_WRENCH";
			}
			break;
		
		case joaat("weapon_cougar"):
			return "WT_RAGE";
			break;
		
		case -159960575:
			return "WT_VEH_WEP";
			break;
		
		case joaat("WEAPON_PISTOL_MK2"):
			if (bParam1)
			{
				return "WTU_PIST2";
			}
			else
			{
				return "WT_PIST2";
			}
			break;
		
		case joaat("WEAPON_SMG_MK2"):
			if (bParam1)
			{
				return "WTU_SMG2";
			}
			else
			{
				return "WT_SMG2";
			}
			break;
		
		case joaat("WEAPON_HEAVYSNIPER_MK2"):
			if (bParam1)
			{
				return "WTU_SNIP_HVY2";
			}
			else
			{
				return "WT_SNIP_HVY2";
			}
			break;
		
		case joaat("WEAPON_COMBATMG_MK2"):
			if (bParam1)
			{
				return "WTU_MG_CBT2";
			}
			else
			{
				return "WT_MG_CBT2";
			}
			break;
		
		case joaat("WEAPON_ASSAULTRIFLE_MK2"):
			if (bParam1)
			{
				return "WTU_RIFLE_ASL2";
			}
			else
			{
				return "WT_RIFLE_ASL2";
			}
			break;
		
		case joaat("WEAPON_CARBINERIFLE_MK2"):
			if (bParam1)
			{
				return "WTU_RIFLE_CBN2";
			}
			else
			{
				return "WT_RIFLE_CBN2";
			}
			break;
		
		case joaat("WEAPON_PUMPSHOTGUN_MK2"):
			if (bParam1)
			{
				return "WTU_SG_PMP2";
			}
			else
			{
				return "WT_SG_PMP2";
			}
			break;
		
		case joaat("WEAPON_SPECIALCARBINE_MK2"):
			if (bParam1)
			{
				return "WTU_SPCARBINE2";
			}
			else
			{
				return "WT_SPCARBINE2";
			}
			break;
		
		case joaat("WEAPON_SNSPISTOL_MK2"):
			if (bParam1)
			{
				return "WTU_SNSPISTOL2";
			}
			else
			{
				return "WT_SNSPISTOL2";
			}
			break;
		
		case joaat("WEAPON_MARKSMANRIFLE_MK2"):
			if (bParam1)
			{
				return "WTU_MKRIFLE2";
			}
			else
			{
				return "WT_MKRIFLE2";
			}
			break;
		
		case joaat("WEAPON_REVOLVER_MK2"):
			if (bParam1)
			{
				return "WTU_REVOLVER2";
			}
			else
			{
				return "WT_REVOLVER2";
			}
			break;
		
		case joaat("WEAPON_BULLPUPRIFLE_MK2"):
			if (bParam1)
			{
				return "WTU_BULLRIFLE2";
			}
			else
			{
				return "WT_BULLRIFLE2";
			}
			break;
		
		case joaat("WEAPON_DOUBLEACTION"):
			if (bParam1)
			{
				return "WTU_REV_DA";
			}
			else
			{
				return "WT_REV_DA";
			}
			break;
		
		case joaat("WEAPON_STONE_HATCHET"):
			if (bParam1)
			{
				return "WTU_SHATCHET";
			}
			else
			{
				return "WT_SHATCHET";
			}
			break;
		
		case joaat("WEAPON_RAYPISTOL"):
			if (bParam1)
			{
				return "WTU_RAYPISTOL";
			}
			else
			{
				return "WT_RAYPISTOL";
			}
			break;
		
		case joaat("WEAPON_RAYCARBINE"):
			if (bParam1)
			{
				return "WTU_RAYCARBINE";
			}
			else
			{
				return "WT_RAYCARBINE";
			}
			break;
		
		case joaat("WEAPON_RAYMINIGUN"):
			if (bParam1)
			{
				return "WTU_RAYMINIGUN";
			}
			else
			{
				return "WT_RAYMINIGUN";
			}
			break;
		
		case joaat("WEAPON_NAVYREVOLVER"):
			if (bParam1)
			{
				return "WTU_REV_NV";
			}
			else
			{
				return "WT_REV_NV";
			}
			break;
		
		case joaat("WEAPON_CERAMICPISTOL"):
			if (bParam1)
			{
				return "WTU_CERPST";
			}
			else
			{
				return "WT_CERPST";
			}
			break;
		
		case 1470379660:
			if (bParam1)
			{
				return "WTU_GDGTPST";
			}
			else
			{
				return "WT_GDGTPST";
			}
			break;
		
		case -1658906650:
			if (bParam1)
			{
				return "WTU_MLTRYRFL";
			}
			else
			{
				return "WT_MLTRYRFL";
			}
			break;
		
		case 94989220:
			if (bParam1)
			{
				return "WTU_CMBSHGN";
			}
			else
			{
				return "WT_CMBSHGN";
			}
			break;
		
		default:
			if (func_28(iParam0, &Var0) != -1)
			{
				if (bParam1)
				{
					return func_27(&(Var0.f_31));
				}
				else
				{
					return func_27(&(Var0.f_7));
				}
			}
			break;
	}
	return "WT_INVALID";
}

var func_27(var uParam0)
{
	return uParam0;
}

int func_28(int iParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = unk_0x5D2674C71F97E2ED();
	iVar0 = 0;
	while (iVar0 < iVar1)
	{
		if (unk_0x53C7411361231D87(iVar0, uParam1))
		{
			if (uParam1->f_1 == iParam0)
			{
				return iVar0;
			}
		}
		iVar0++;
	}
	return -1;
}

bool func_29(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (func_42() == 0)
	{
		return 0;
	}
	if (func_41())
	{
		return 0;
	}
	iVar0 = func_40(iParam0);
	if (iVar0 != 439 && func_39(iVar0, -1))
	{
		return 1;
	}
	else
	{
		return 0;
	}
	iVar1 = func_33(iParam0, iParam1);
	iVar2 = func_31(iParam0);
	return unk_0xCE990E643CD9D0E5(iVar1, func_30(iVar2));
}

int func_30(int iParam0)
{
	return (iParam0 % 32);
}

int func_31(int iParam0)
{
	return func_32(iParam0);
}

int func_32(int iParam0)
{
	switch (iParam0)
	{
		case joaat("weapon_unarmed"):
			return 0;
			break;
		
		case joaat("weapon_pistol"):
			return 1;
			break;
		
		case joaat("weapon_combatpistol"):
			return 2;
			break;
		
		case joaat("weapon_appistol"):
			return 3;
			break;
		
		case joaat("weapon_pistol50"):
			return 4;
			break;
		
		case joaat("weapon_smg"):
			return 5;
			break;
		
		case joaat("weapon_assaultsmg"):
			return 6;
			break;
		
		case joaat("weapon_microsmg"):
			return 7;
			break;
		
		case joaat("weapon_assaultrifle"):
			return 8;
			break;
		
		case joaat("weapon_carbinerifle"):
			return 9;
			break;
		
		case -947031628:
			return 10;
			break;
		
		case joaat("weapon_advancedrifle"):
			return 11;
			break;
		
		case joaat("weapon_mg"):
			return 12;
			break;
		
		case joaat("weapon_combatmg"):
			return 13;
			break;
		
		case -572349828:
			return 14;
			break;
		
		case joaat("weapon_stickybomb"):
			return 15;
			break;
		
		case joaat("weapon_grenade"):
			return 16;
			break;
		
		case joaat("weapon_smokegrenade"):
			return 17;
			break;
		
		case joaat("weapon_remotesniper"):
			return 18;
			break;
		
		case 392730790:
			return 19;
			break;
		
		case joaat("weapon_sniperrifle"):
			return 20;
			break;
		
		case joaat("weapon_heavysniper"):
			return 21;
			break;
		
		case joaat("weapon_pumpshotgun"):
			return 22;
			break;
		
		case joaat("weapon_bullpupshotgun"):
			return 23;
			break;
		
		case joaat("weapon_assaultshotgun"):
			return 24;
			break;
		
		case joaat("weapon_sawnoffshotgun"):
			return 25;
			break;
		
		case joaat("weapon_grenadelauncher"):
			return 26;
			break;
		
		case joaat("weapon_rpg"):
			return 27;
			break;
		
		case joaat("weapon_minigun"):
			return 28;
			break;
		
		case -344484024:
			return 29;
			break;
		
		case -1887867191:
			return 30;
			break;
		
		case joaat("weapon_stungun"):
			return 31;
			break;
		
		case -837150131:
			return 32;
			break;
		
		case joaat("gadget_parachute"):
			return 33;
			break;
		
		case joaat("weapon_knife"):
			return 34;
			break;
		
		case joaat("weapon_nightstick"):
			return 35;
			break;
		
		case joaat("weapon_hammer"):
			return 36;
			break;
		
		case joaat("weapon_bat"):
			return 37;
			break;
		
		case joaat("weapon_crowbar"):
			return 38;
			break;
		
		case joaat("weapon_golfclub"):
			return 39;
			break;
		
		case joaat("weapon_grenadelauncher_smoke"):
			return 40;
			break;
		
		case joaat("weapon_molotov"):
			return 41;
			break;
		
		case joaat("weapon_fireextinguisher"):
			return 42;
			break;
		
		case joaat("weapon_petrolcan"):
			return 43;
			break;
		
		case joaat("weapon_digiscanner"):
			return 44;
			break;
		
		case joaat("weapon_bottle"):
			return 45;
			break;
		
		case joaat("weapon_specialcarbine"):
			return 46;
			break;
		
		case joaat("weapon_snspistol"):
			return 47;
			break;
		
		case joaat("weapon_heavypistol"):
			return 49;
			break;
		
		case joaat("weapon_bullpuprifle"):
			return 48;
			break;
		
		case joaat("weapon_gusenberg"):
			return 50;
			break;
		
		case joaat("weapon_dagger"):
			return 51;
			break;
		
		case joaat("weapon_vintagepistol"):
			return 52;
			break;
		
		case joaat("weapon_flaregun"):
			return 57;
			break;
		
		case joaat("weapon_musket"):
			return 53;
			break;
		
		case joaat("weapon_firework"):
			return 54;
			break;
		
		case joaat("weapon_marksmanrifle"):
			return 56;
			break;
		
		case joaat("weapon_heavyshotgun"):
			return 55;
			break;
		
		case joaat("weapon_proxmine"):
			return 60;
			break;
		
		case joaat("weapon_hominglauncher"):
			return 61;
			break;
		
		case joaat("weapon_hatchet"):
			return 58;
			break;
		
		case joaat("weapon_railgun"):
			return 59;
			break;
		
		case joaat("weapon_combatpdw"):
			return 64;
			break;
		
		case joaat("weapon_knuckle"):
			return 62;
			break;
		
		case joaat("weapon_marksmanpistol"):
			return 63;
			break;
		
		case joaat("weapon_machete"):
			return 65;
			break;
		
		case joaat("weapon_machinepistol"):
			return 68;
			break;
		
		case joaat("weapon_dbshotgun"):
			return 66;
			break;
		
		case joaat("weapon_compactrifle"):
			return 67;
			break;
		
		case joaat("weapon_flashlight"):
			return 69;
			break;
		
		case joaat("weapon_revolver"):
			return 70;
			break;
		
		case joaat("weapon_switchblade"):
			return 71;
			break;
		
		case joaat("WEAPON_AUTOSHOTGUN"):
			return 72;
			break;
		
		case joaat("WEAPON_MINISMG"):
			return 73;
			break;
		
		case joaat("WEAPON_COMPACTLAUNCHER"):
			return 74;
			break;
		
		case joaat("WEAPON_BATTLEAXE"):
			return 75;
			break;
		
		case joaat("WEAPON_PIPEBOMB"):
			return 76;
			break;
		
		case joaat("WEAPON_POOLCUE"):
			return 77;
			break;
		
		case joaat("WEAPON_WRENCH"):
			return 78;
			break;
		
		case joaat("WEAPON_ASSAULTRIFLE_MK2"):
			return 8;
			break;
		
		case joaat("WEAPON_CARBINERIFLE_MK2"):
			return 9;
			break;
		
		case joaat("WEAPON_COMBATMG_MK2"):
			return 13;
			break;
		
		case joaat("WEAPON_HEAVYSNIPER_MK2"):
			return 21;
			break;
		
		case joaat("WEAPON_PISTOL_MK2"):
			return 1;
			break;
		
		case joaat("WEAPON_SMG_MK2"):
			return 5;
			break;
		
		case joaat("WEAPON_PUMPSHOTGUN_MK2"):
			return 22;
			break;
		
		case joaat("WEAPON_SPECIALCARBINE_MK2"):
			return 46;
			break;
		
		case joaat("WEAPON_SNSPISTOL_MK2"):
			return 47;
			break;
		
		case joaat("WEAPON_MARKSMANRIFLE_MK2"):
			return 56;
			break;
		
		case joaat("WEAPON_REVOLVER_MK2"):
			return 70;
			break;
		
		case joaat("WEAPON_BULLPUPRIFLE_MK2"):
			return 48;
			break;
		
		case joaat("WEAPON_DOUBLEACTION"):
			return 79;
			break;
		
		case joaat("WEAPON_STONE_HATCHET"):
			return 80;
			break;
		
		case joaat("WEAPON_RAYPISTOL"):
			return 81;
			break;
		
		case joaat("WEAPON_RAYCARBINE"):
			return 82;
			break;
		
		case joaat("WEAPON_RAYMINIGUN"):
			return 83;
			break;
		
		case joaat("WEAPON_NAVYREVOLVER"):
			return 84;
			break;
		
		case joaat("WEAPON_CERAMICPISTOL"):
			return 85;
			break;
		
		case 94989220:
			return 86;
			break;
		
		case -1658906650:
			return 88;
			break;
		
		case 1470379660:
			return 87;
			break;
	}
	return 0;
}

int func_33(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = func_34(func_36(iParam0), iParam1, 0);
	return iVar0;
}

int func_34(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	var uVar1;
	
	if (iParam0 != 11771)
	{
		if (iParam2 == 0)
		{
		}
		iVar0 = Global_2551832[iParam0 /*3*/][func_35(iParam1)];
		if (unk_0xD2F202166691EDB2(iVar0, &uVar1, -1))
		{
			return uVar1;
		}
	}
	return 0;
}

int func_35(var uParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = uParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_144();
		if (iVar1 > -1)
		{
			Global_2551544 = 0;
			iVar0 = iVar1;
		}
		else
		{
			iVar0 = 0;
			Global_2551544 = 1;
		}
	}
	return iVar0;
}

int func_36(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_31(iParam0);
	iVar1 = func_38(iVar0);
	if ((func_160() == 0 || func_37() == 0) || (func_160() == 999 && func_37() == 999))
	{
		switch (iVar1)
		{
			case 0:
				return 685;
				break;
			
			case 1:
				return 686;
				break;
			
			case 2:
				return 2420;
				break;
		}
	}
	return 11771;
}

int func_37()
{
	return Global_30969;
}

int func_38(int iParam0)
{
	return (iParam0 / 32);
}

int func_39(int iParam0, int iParam1)
{
	var uVar0;
	var uVar1;
	
	uVar0 = Global_2587834[iParam0 /*3*/][func_35(iParam1)];
	if (unk_0xB9112C701DE2A810(uVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

int func_40(int iParam0)
{
	switch (iParam0)
	{
		case joaat("weapon_pistol"):
			return 17;
			break;
		
		case joaat("weapon_combatpistol"):
			return 19;
			break;
		
		case joaat("weapon_appistol"):
			return 23;
			break;
		
		case joaat("weapon_pistol50"):
			return 21;
			break;
		
		case joaat("weapon_smg"):
			return 27;
			break;
		
		case joaat("weapon_microsmg"):
			return 25;
			break;
		
		case joaat("weapon_assaultrifle"):
			return 31;
			break;
		
		case joaat("weapon_carbinerifle"):
			return 33;
			break;
		
		case joaat("weapon_advancedrifle"):
			return 35;
			break;
		
		case joaat("weapon_mg"):
			return 37;
			break;
		
		case joaat("weapon_combatmg"):
			return 39;
			break;
		
		case joaat("weapon_pumpshotgun"):
			return 43;
			break;
		
		case joaat("weapon_sawnoffshotgun"):
			return 45;
			break;
		
		case joaat("weapon_assaultshotgun"):
			return 49;
			break;
		
		case joaat("weapon_heavysniper"):
			return 55;
			break;
		
		case joaat("weapon_sniperrifle"):
			return 53;
			break;
		
		case joaat("weapon_grenadelauncher"):
			return 59;
			break;
		
		case joaat("weapon_rpg"):
			return 61;
			break;
		
		case joaat("weapon_minigun"):
			return 63;
			break;
		
		case joaat("weapon_grenade"):
			return 65;
			break;
		
		case joaat("weapon_smokegrenade"):
			return 67;
			break;
		
		case joaat("weapon_stickybomb"):
			return 69;
			break;
		
		case joaat("weapon_molotov"):
			return 71;
			break;
		
		case joaat("weapon_petrolcan"):
			return 74;
			break;
		
		case joaat("gadget_parachute"):
			return 73;
			break;
		
		case joaat("weapon_knife"):
			return 1;
			break;
		
		case joaat("weapon_nightstick"):
			return 3;
			break;
		
		case joaat("weapon_hammer"):
			return 11;
			break;
		
		case joaat("weapon_bat"):
			return 13;
			break;
		
		case joaat("weapon_crowbar"):
			return 5;
			break;
		
		case joaat("weapon_golfclub"):
			return 15;
			break;
		
		case -572349828:
			return 41;
			break;
		
		case joaat("weapon_assaultsmg"):
			return 29;
			break;
		
		case 392730790:
			return 57;
			break;
		
		case joaat("weapon_bullpupshotgun"):
			return 47;
			break;
		
		case joaat("weapon_bottle"):
			return 142;
			break;
		
		case joaat("weapon_specialcarbine"):
			return 301;
			break;
		
		case joaat("weapon_snspistol"):
			return 144;
			break;
		
		case joaat("weapon_heavypistol"):
			return 299;
			break;
		
		case joaat("weapon_bullpuprifle"):
			return 303;
			break;
		
		case joaat("weapon_gusenberg"):
			return 305;
			break;
		
		case joaat("weapon_vintagepistol"):
			return 328;
			break;
		
		case joaat("weapon_dagger"):
			return 326;
			break;
		
		case joaat("weapon_musket"):
			return 332;
			break;
		
		case joaat("weapon_firework"):
			return 330;
			break;
		
		case joaat("weapon_flaregun"):
			return 320;
			break;
		
		case joaat("weapon_heavyshotgun"):
			return 344;
			break;
		
		case joaat("weapon_marksmanrifle"):
			return 346;
			break;
		
		case joaat("weapon_proxmine"):
			return 350;
			break;
		
		case joaat("weapon_hominglauncher"):
			return 352;
			break;
		
		case joaat("weapon_hatchet"):
			return 348;
			break;
		
		case joaat("weapon_combatpdw"):
			return 354;
			break;
		
		case joaat("weapon_knuckle"):
			return 356;
			break;
		
		case joaat("weapon_marksmanpistol"):
			return 358;
			break;
		
		case joaat("weapon_machete"):
			return 360;
			break;
		
		case joaat("weapon_machinepistol"):
			return 362;
			break;
		
		case joaat("weapon_dbshotgun"):
			return 367;
			break;
		
		case joaat("weapon_compactrifle"):
			return 365;
			break;
		
		case joaat("weapon_flashlight"):
			return 369;
			break;
		
		case joaat("weapon_revolver"):
			return 372;
			break;
		
		case joaat("weapon_switchblade"):
			return 374;
			break;
		
		case joaat("WEAPON_AUTOSHOTGUN"):
			return 379;
			break;
		
		case joaat("WEAPON_MINISMG"):
			return 385;
			break;
		
		case joaat("WEAPON_COMPACTLAUNCHER"):
			return 383;
			break;
		
		case joaat("WEAPON_BATTLEAXE"):
			return 381;
			break;
		
		case joaat("WEAPON_PIPEBOMB"):
			return 387;
			break;
		
		case joaat("WEAPON_POOLCUE"):
			return 389;
			break;
		
		case joaat("WEAPON_WRENCH"):
			return 9;
			break;
		
		case joaat("WEAPON_ASSAULTRIFLE_MK2"):
			return 31;
			break;
		
		case joaat("WEAPON_CARBINERIFLE_MK2"):
			return 33;
			break;
		
		case joaat("WEAPON_COMBATMG_MK2"):
			return 39;
			break;
		
		case joaat("WEAPON_HEAVYSNIPER_MK2"):
			return 55;
			break;
		
		case joaat("WEAPON_PISTOL_MK2"):
			return 17;
			break;
		
		case joaat("WEAPON_SMG_MK2"):
			return 27;
			break;
		
		case joaat("WEAPON_BULLPUPRIFLE_MK2"):
			return 47;
			break;
		
		case joaat("WEAPON_MARKSMANRIFLE_MK2"):
			return 346;
			break;
		
		case joaat("WEAPON_PUMPSHOTGUN_MK2"):
			return 43;
			break;
		
		case joaat("WEAPON_REVOLVER_MK2"):
			return 372;
			break;
		
		case joaat("WEAPON_SNSPISTOL_MK2"):
			return 144;
			break;
		
		case joaat("WEAPON_SPECIALCARBINE_MK2"):
			return 301;
			break;
		
		case joaat("WEAPON_DOUBLEACTION"):
			return 413;
			break;
		
		case joaat("WEAPON_RAYPISTOL"):
			return 421;
			break;
		
		case joaat("WEAPON_RAYCARBINE"):
			return 423;
			break;
		
		case joaat("WEAPON_RAYMINIGUN"):
			return 425;
			break;
		
		case joaat("WEAPON_STONE_HATCHET"):
			return 419;
			break;
		
		case joaat("WEAPON_NAVYREVOLVER"):
			return 429;
			break;
		
		case joaat("WEAPON_CERAMICPISTOL"):
			return 427;
			break;
		
		case 1470379660:
			return 435;
			break;
		
		case -1658906650:
			return 437;
			break;
		
		case 94989220:
			return 433;
			break;
	}
	return 439;
}

bool func_41()
{
	return Global_1312875;
}

int func_42()
{
	if (func_44() && func_43(0))
	{
		return 1;
	}
	return 0;
}

var func_43(int iParam0)
{
	return Global_1312392[iParam0];
}

var func_44()
{
	return func_43(func_144() + 1);
}

int func_45(int iParam0)
{
	bool bVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	switch (iParam0)
	{
		case joaat("weapon_molotov"):
			bVar0 = true;
			iVar3 = 493;
			break;
		
		case joaat("weapon_golfclub"):
			bVar0 = true;
			iVar3 = 247;
			break;
		
		case joaat("weapon_bat"):
			bVar0 = true;
			iVar3 = 240;
			break;
		
		case joaat("weapon_crowbar"):
			bVar0 = true;
			iVar3 = 212;
			break;
	}
	if (bVar0)
	{
		iVar1 = func_46(unk_0x460153A63B9477BC());
		iVar2 = func_16(iParam0);
		if (iVar1 >= iVar2)
		{
			if (func_34(iVar3, -1, 0) > 0)
			{
				return 1;
			}
		}
	}
	return 0;
}

var func_46(int iParam0)
{
	return Global_1590682[iParam0 /*883*/].f_211.f_6;
}

int func_47(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	iVar0 = func_48(iParam0, iParam1);
	switch (iVar0)
	{
		case 1:
			switch (iParam2)
			{
				case 4:
					return 2;
					break;
				
				case 1:
					return 1;
					break;
				
				case 8:
					return 4;
					break;
			}
			break;
		
		case 2:
			switch (iParam2)
			{
				case 4:
					return 2;
					break;
				
				case 1:
					return 1;
					break;
				
				case 8:
					return 4;
					break;
			}
			break;
		
		case 4:
			switch (iParam2)
			{
				case 4:
					return 16;
					break;
				
				case 1:
					return 8;
					break;
				
				case 8:
					return 32;
					break;
			}
			break;
		
		case 8:
			switch (iParam2)
			{
				case 4:
					return 128;
					break;
				
				case 1:
					return 64;
					break;
				
				case 8:
					return 256;
					break;
			}
			break;
	}
	return 0;
}

int func_48(int iParam0, int iParam1)
{
	switch (iParam1)
	{
		case joaat("WEAPON_SMG_MK2"):
			switch (iParam0)
			{
				case joaat("COMPONENT_AT_SCOPE_MACRO_02_SMG_MK2"):
					return 1;
					break;
				
				case joaat("COMPONENT_AT_SCOPE_SMALL_SMG_MK2"):
					return 2;
					break;
				
				case joaat("COMPONENT_AT_SB_BARREL_01"):
					return 4;
					break;
				
				case joaat("COMPONENT_AT_SB_BARREL_02"):
					return 8;
					break;
			}
			break;
		
		case joaat("WEAPON_HEAVYSNIPER_MK2"):
			switch (iParam0)
			{
				case joaat("COMPONENT_AT_SCOPE_LARGE_MK2"):
					return 2;
					break;
				
				case joaat("COMPONENT_AT_SR_BARREL_01"):
					return 4;
					break;
				
				case joaat("COMPONENT_AT_SR_BARREL_02"):
					return 8;
					break;
			}
			break;
		
		case joaat("WEAPON_COMBATMG_MK2"):
			switch (iParam0)
			{
				case joaat("COMPONENT_AT_SCOPE_SMALL_MK2"):
					return 1;
					break;
				
				case joaat("COMPONENT_AT_SCOPE_MEDIUM_MK2"):
					return 2;
					break;
				
				case joaat("COMPONENT_AT_MG_BARREL_01"):
					return 4;
					break;
				
				case joaat("COMPONENT_AT_MG_BARREL_02"):
					return 8;
					break;
			}
			break;
		
		case joaat("WEAPON_ASSAULTRIFLE_MK2"):
			switch (iParam0)
			{
				case joaat("COMPONENT_AT_SCOPE_MACRO_MK2"):
					return 1;
					break;
				
				case joaat("COMPONENT_AT_SCOPE_MEDIUM_MK2"):
					return 2;
					break;
				
				case joaat("COMPONENT_AT_AR_BARREL_01"):
					return 4;
					break;
				
				case joaat("COMPONENT_AT_AR_BARREL_02"):
					return 8;
					break;
			}
			break;
		
		case joaat("WEAPON_CARBINERIFLE_MK2"):
			switch (iParam0)
			{
				case joaat("COMPONENT_AT_SCOPE_MACRO_MK2"):
					return 1;
					break;
				
				case joaat("COMPONENT_AT_SCOPE_MEDIUM_MK2"):
					return 2;
					break;
				
				case joaat("COMPONENT_AT_CR_BARREL_01"):
					return 4;
					break;
				
				case joaat("COMPONENT_AT_CR_BARREL_02"):
					return 8;
					break;
			}
			break;
	}
	return 0;
}

int func_49(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	iVar0 = func_50(iParam0, iParam1);
	switch (iVar0)
	{
		case 1:
			switch (iParam2)
			{
				case 4:
					return 2;
					break;
				
				case 1:
					return 1;
					break;
				
				case 8:
					return 4;
					break;
			}
			break;
		
		case 2:
			switch (iParam2)
			{
				case 4:
					return 16;
					break;
				
				case 1:
					return 8;
					break;
				
				case 8:
					return 32;
					break;
			}
			break;
		
		case 4:
			switch (iParam2)
			{
				case 4:
					return 128;
					break;
				
				case 1:
					return 64;
					break;
				
				case 8:
					return 256;
					break;
			}
			break;
		
		case 7:
			switch (iParam2)
			{
				case 4:
					return 1024;
					break;
				
				case 1:
					return 512;
					break;
				
				case 8:
					return 2048;
					break;
			}
			break;
		
		case 16:
			switch (iParam2)
			{
				case 4:
					return 8192;
					break;
				
				case 1:
					return 4096;
					break;
				
				case 8:
					return 16384;
					break;
			}
			break;
		
		case 32:
			switch (iParam2)
			{
				case 4:
					return 65536;
					break;
				
				case 1:
					return 1;
					break;
				
				case 8:
					return 131072;
					break;
			}
			break;
		
		case 64:
			switch (iParam2)
			{
				case 4:
					return 2;
					break;
				
				case 1:
					return 1;
					break;
				
				case 8:
					return 1048576;
					break;
			}
			break;
	}
	return 0;
}

int func_50(int iParam0, int iParam1)
{
	switch (iParam1)
	{
		case joaat("WEAPON_SMG_MK2"):
		case joaat("WEAPON_HEAVYSNIPER_MK2"):
		case joaat("WEAPON_CARBINERIFLE_MK2"):
		case joaat("WEAPON_ASSAULTRIFLE_MK2"):
		case joaat("WEAPON_COMBATMG_MK2"):
			switch (iParam0)
			{
				case joaat("COMPONENT_AT_MUZZLE_01"):
					return 1;
					break;
				
				case joaat("COMPONENT_AT_MUZZLE_02"):
					return 2;
					break;
				
				case joaat("COMPONENT_AT_MUZZLE_03"):
					return 4;
					break;
				
				case joaat("COMPONENT_AT_MUZZLE_04"):
					return 7;
					break;
				
				case joaat("COMPONENT_AT_MUZZLE_05"):
					return 16;
					break;
				
				case joaat("COMPONENT_AT_MUZZLE_06"):
					return 32;
					break;
				
				case joaat("COMPONENT_AT_MUZZLE_07"):
					return 64;
					break;
				
				case joaat("COMPONENT_AT_MUZZLE_08"):
					return 1;
					break;
				
				case joaat("COMPONENT_AT_MUZZLE_09"):
					return 2;
					break;
			}
			break;
	}
	return 0;
}

int func_51(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	iVar0 = func_52(iParam0, iParam1);
	switch (iVar0)
	{
		case 1:
			switch (iParam2)
			{
				case 4:
					return 2;
					break;
				
				case 1:
					return 1;
					break;
				
				case 8:
					return 4;
					break;
			}
			break;
		
		case 2:
			switch (iParam2)
			{
				case 4:
					return 16;
					break;
				
				case 1:
					return 8;
					break;
				
				case 8:
					return 32;
					break;
			}
			break;
		
		case 4:
			switch (iParam2)
			{
				case 4:
					return 128;
					break;
				
				case 1:
					return 64;
					break;
				
				case 8:
					return 256;
					break;
			}
			break;
		
		case 8:
			switch (iParam2)
			{
				case 4:
					return 1024;
					break;
				
				case 1:
					return 512;
					break;
				
				case 8:
					return 2048;
					break;
			}
			break;
		
		case 16:
			switch (iParam2)
			{
				case 4:
					return 8192;
					break;
				
				case 1:
					return 4096;
					break;
				
				case 8:
					return 16384;
					break;
			}
			break;
		
		case 32:
			switch (iParam2)
			{
				case 4:
					return 65536;
					break;
				
				case 1:
					return 32768;
					break;
				
				case 8:
					return 131072;
					break;
			}
			break;
		
		case 256:
			switch (iParam2)
			{
				case 4:
					return 33554432;
					break;
				
				case 1:
					return 16777216;
					break;
				
				case 8:
					return 67108864;
					break;
			}
			break;
		
		case 64:
			switch (iParam2)
			{
				case 4:
					return 524288;
					break;
				
				case 1:
					return 262144;
					break;
				
				case 8:
					return 1048576;
					break;
			}
			break;
		
		case 128:
			switch (iParam2)
			{
				case 4:
					return 4194304;
					break;
				
				case 1:
					return 2097152;
					break;
				
				case 8:
					return 8388608;
					break;
			}
			break;
	}
	return 0;
}

int func_52(int iParam0, int iParam1)
{
	switch (iParam1)
	{
		case joaat("weapon_pistol"):
			switch (iParam0)
			{
				case joaat("component_pistol_clip_01"):
					return 16;
				
				case joaat("component_pistol_clip_02"):
					return 32;
				
				case joaat("component_at_pi_flsh"):
					return 2;
				
				case joaat("component_at_pi_supp_02"):
					return 1;
					break;
			}
			break;
		
		case joaat("weapon_pistol50"):
			switch (iParam0)
			{
				case joaat("component_pistol50_clip_01"):
					return 16;
				
				case joaat("component_pistol50_clip_02"):
					return 32;
				
				case joaat("component_at_pi_flsh"):
					return 2;
				
				case joaat("component_at_ar_supp_02"):
					return 1;
					break;
			}
			break;
		
		case joaat("weapon_combatpistol"):
			switch (iParam0)
			{
				case joaat("component_combatpistol_clip_01"):
					return 16;
				
				case joaat("component_combatpistol_clip_02"):
					return 32;
				
				case joaat("component_at_pi_flsh"):
					return 2;
				
				case joaat("component_at_pi_supp"):
					return 1;
					break;
			}
			break;
		
		case joaat("weapon_appistol"):
			switch (iParam0)
			{
				case joaat("component_appistol_clip_01"):
					return 16;
				
				case joaat("component_appistol_clip_02"):
					return 32;
				
				case joaat("component_at_pi_flsh"):
					return 2;
				
				case joaat("component_at_pi_supp"):
					return 1;
					break;
			}
			break;
		
		case joaat("weapon_microsmg"):
			switch (iParam0)
			{
				case joaat("component_microsmg_clip_01"):
					return 16;
				
				case joaat("component_microsmg_clip_02"):
					return 32;
				
				case joaat("component_at_pi_flsh"):
					return 2;
				
				case joaat("component_at_scope_macro"):
					return 64;
				
				case joaat("component_at_ar_supp_02"):
					return 1;
					break;
			}
			break;
		
		case joaat("weapon_assaultsmg"):
			switch (iParam0)
			{
				case joaat("component_assaultsmg_clip_01"):
					return 16;
				
				case joaat("component_assaultsmg_clip_02"):
					return 32;
				
				case joaat("component_at_ar_flsh"):
					return 2;
				
				case joaat("component_at_ar_supp_02"):
					return 1;
				
				case joaat("component_at_scope_macro"):
					return 64;
					break;
			}
			break;
		
		case joaat("weapon_smg"):
			switch (iParam0)
			{
				case joaat("component_smg_clip_01"):
					return 16;
				
				case joaat("component_smg_clip_02"):
					return 32;
				
				case joaat("component_at_ar_flsh"):
					return 2;
				
				case joaat("component_at_pi_supp"):
					return 1;
				
				case joaat("component_at_scope_macro_02"):
					return 64;
				
				case joaat("component_smg_clip_03"):
					return 256;
					break;
			}
			break;
		
		case joaat("weapon_assaultrifle"):
			switch (iParam0)
			{
				case joaat("component_assaultrifle_clip_01"):
					return 16;
				
				case joaat("component_assaultrifle_clip_02"):
					return 32;
				
				case joaat("component_at_ar_afgrip"):
					return 128;
				
				case joaat("component_at_ar_flsh"):
					return 2;
				
				case joaat("component_at_scope_macro"):
					return 64;
				
				case joaat("component_at_ar_supp_02"):
					return 1;
				
				case joaat("component_assaultrifle_clip_03"):
					return 256;
					break;
			}
			break;
		
		case joaat("weapon_carbinerifle"):
			switch (iParam0)
			{
				case joaat("component_carbinerifle_clip_01"):
					return 16;
				
				case joaat("component_carbinerifle_clip_02"):
					return 32;
				
				case joaat("component_at_ar_afgrip"):
					return 128;
				
				case joaat("component_at_ar_flsh"):
					return 2;
				
				case joaat("component_at_scope_medium"):
					return 64;
				
				case joaat("component_at_ar_supp"):
					return 1;
				
				case joaat("component_carbinerifle_clip_03"):
					return 256;
					break;
			}
			break;
		
		case joaat("weapon_specialcarbine"):
			switch (iParam0)
			{
				case joaat("component_specialcarbine_clip_01"):
					return 16;
				
				case joaat("component_specialcarbine_clip_02"):
					return 32;
				
				case joaat("component_at_ar_afgrip"):
					return 128;
				
				case joaat("component_at_ar_flsh"):
					return 2;
				
				case joaat("component_at_scope_medium"):
					return 64;
				
				case joaat("component_at_ar_supp_02"):
					return 1;
				
				case joaat("component_specialcarbine_clip_03"):
					return 256;
				
				default:
			}
			break;
		
		case joaat("weapon_bullpuprifle"):
			switch (iParam0)
			{
				case joaat("component_bullpuprifle_clip_01"):
					return 16;
				
				case joaat("component_bullpuprifle_clip_02"):
					return 32;
				
				case joaat("component_at_ar_afgrip"):
					return 128;
				
				case joaat("component_at_ar_flsh"):
					return 2;
				
				case joaat("component_at_scope_small"):
					return 64;
				
				case joaat("component_at_ar_supp"):
					return 1;
				
				default:
			}
			break;
		
		case joaat("weapon_heavypistol"):
			switch (iParam0)
			{
				case joaat("component_heavypistol_clip_01"):
					return 16;
				
				case joaat("component_heavypistol_clip_02"):
					return 32;
				
				case joaat("component_at_pi_flsh"):
					return 2;
				
				case joaat("component_at_pi_supp"):
					return 1;
				
				default:
			}
			break;
		
		case joaat("weapon_snspistol"):
			switch (iParam0)
			{
				case joaat("component_snspistol_clip_01"):
					return 16;
				
				case joaat("component_snspistol_clip_02"):
					return 32;
				
				default:
			}
			break;
		
		case joaat("weapon_advancedrifle"):
			switch (iParam0)
			{
				case joaat("component_advancedrifle_clip_01"):
					return 16;
				
				case joaat("component_advancedrifle_clip_02"):
					return 32;
				
				case joaat("component_at_ar_flsh"):
					return 2;
				
				case joaat("component_at_scope_small"):
					return 64;
				
				case joaat("component_at_ar_supp"):
					return 1;
					break;
			}
			break;
		
		case joaat("weapon_mg"):
			switch (iParam0)
			{
				case joaat("component_mg_clip_01"):
					return 16;
				
				case joaat("component_mg_clip_02"):
					return 32;
				
				case joaat("component_at_scope_small_02"):
					return 64;
					break;
			}
			break;
		
		case joaat("weapon_combatmg"):
			switch (iParam0)
			{
				case joaat("component_combatmg_clip_01"):
					return 16;
				
				case joaat("component_combatmg_clip_02"):
					return 32;
				
				case joaat("component_at_ar_afgrip"):
					return 128;
				
				case joaat("component_at_scope_medium"):
					return 64;
					break;
			}
			break;
		
		case joaat("weapon_pumpshotgun"):
			switch (iParam0)
			{
				case joaat("component_at_sr_supp"):
					return 1;
				
				case joaat("component_at_ar_flsh"):
					return 2;
					break;
			}
			break;
		
		case joaat("weapon_assaultshotgun"):
			switch (iParam0)
			{
				case joaat("component_assaultshotgun_clip_01"):
					return 16;
				
				case joaat("component_assaultshotgun_clip_02"):
					return 32;
				
				case joaat("component_at_ar_afgrip"):
					return 128;
				
				case joaat("component_at_ar_flsh"):
					return 2;
				
				case joaat("component_at_ar_supp"):
					return 1;
					break;
			}
			break;
		
		case joaat("weapon_bullpupshotgun"):
			switch (iParam0)
			{
				case joaat("component_at_ar_afgrip"):
					return 128;
				
				case joaat("component_at_ar_flsh"):
					return 2;
				
				case joaat("component_at_ar_supp_02"):
					return 1;
					break;
			}
			break;
		
		case joaat("weapon_sniperrifle"):
			switch (iParam0)
			{
				case joaat("component_at_scope_max"):
					return 4;
				
				case joaat("component_at_scope_large"):
					return 64;
				
				case joaat("component_at_ar_supp_02"):
					return 1;
					break;
			}
			break;
		
		case joaat("weapon_heavysniper"):
			switch (iParam0)
			{
				case joaat("component_at_scope_max"):
					return 4;
				
				case joaat("component_at_scope_large"):
					return 64;
					break;
			}
			break;
		
		case joaat("weapon_grenadelauncher"):
			switch (iParam0)
			{
				case joaat("component_at_ar_afgrip"):
					return 128;
				
				case joaat("component_at_ar_flsh"):
					return 2;
				
				case joaat("component_at_scope_small"):
					return 64;
					break;
			}
			break;
		
		case joaat("weapon_vintagepistol"):
			switch (iParam0)
			{
				case joaat("component_vintagepistol_clip_01"):
					return 16;
				
				case joaat("component_vintagepistol_clip_02"):
					return 32;
				
				case joaat("component_at_pi_supp"):
					return 1;
					break;
			}
			break;
		
		case joaat("weapon_gusenberg"):
			switch (iParam0)
			{
				case joaat("component_gusenberg_clip_01"):
					return 16;
				
				case joaat("component_gusenberg_clip_02"):
					return 32;
					break;
			}
			break;
		
		case joaat("weapon_heavyshotgun"):
			switch (iParam0)
			{
				case joaat("component_heavyshotgun_clip_01"):
					return 16;
				
				case joaat("component_heavyshotgun_clip_02"):
					return 32;
				
				case joaat("component_at_ar_flsh"):
					return 2;
				
				case joaat("component_at_ar_supp_02"):
					return 1;
				
				case joaat("component_at_ar_afgrip"):
					return 128;
				
				case joaat("component_heavyshotgun_clip_03"):
					return 256;
					break;
			}
			break;
		
		case joaat("weapon_marksmanrifle"):
			switch (iParam0)
			{
				case joaat("component_marksmanrifle_clip_01"):
					return 16;
				
				case joaat("component_marksmanrifle_clip_02"):
					return 32;
				
				case joaat("component_at_scope_large_fixed_zoom"):
					return 64;
				
				case joaat("component_at_ar_flsh"):
					return 2;
				
				case joaat("component_at_ar_supp"):
					return 1;
				
				case joaat("component_at_ar_afgrip"):
					return 128;
					break;
			}
			break;
		
		case joaat("weapon_marksmanpistol"):
			switch (iParam0)
			{
				case joaat("component_marksmanpistol_clip_01"):
					return 16;
					break;
			}
			break;
		
		case joaat("weapon_combatpdw"):
			switch (iParam0)
			{
				case joaat("component_combatpdw_clip_01"):
					return 16;
				
				case joaat("component_combatpdw_clip_02"):
					return 32;
				
				case joaat("component_at_scope_small"):
					return 64;
				
				case joaat("component_at_ar_flsh"):
					return 2;
				
				case joaat("component_at_ar_afgrip"):
					return 128;
				
				case joaat("component_combatpdw_clip_03"):
					return 256;
					break;
			}
			break;
		
		case joaat("weapon_machinepistol"):
			switch (iParam0)
			{
				case joaat("component_machinepistol_clip_01"):
					return 16;
				
				case joaat("component_machinepistol_clip_02"):
					return 32;
				
				case joaat("component_at_pi_supp"):
					return 1;
				
				case joaat("component_machinepistol_clip_03"):
					return 256;
					break;
			}
			break;
		
		case joaat("weapon_compactrifle"):
			switch (iParam0)
			{
				case joaat("component_compactrifle_clip_01"):
					return 16;
				
				case joaat("component_compactrifle_clip_02"):
					return 32;
				
				case joaat("component_compactrifle_clip_03"):
					return 256;
					break;
			}
			break;
		
		case joaat("WEAPON_MINISMG"):
			switch (iParam0)
			{
				case joaat("COMPONENT_MINISMG_CLIP_01"):
					return 16;
				
				case joaat("COMPONENT_MINISMG_CLIP_02"):
					return 32;
					break;
			}
			break;
		
		case joaat("WEAPON_PISTOL_MK2"):
			switch (iParam0)
			{
				case joaat("COMPONENT_PISTOL_MK2_CLIP_01"):
					return 16;
					break;
				
				case joaat("COMPONENT_PISTOL_MK2_CLIP_02"):
					return 32;
					break;
				
				case joaat("COMPONENT_PISTOL_MK2_CLIP_FMJ"):
					return 256;
					break;
				
				case joaat("COMPONENT_PISTOL_MK2_CLIP_HOLLOWPOINT"):
					return 256;
					break;
				
				case joaat("COMPONENT_PISTOL_MK2_CLIP_INCENDIARY"):
					return 256;
					break;
				
				case joaat("COMPONENT_PISTOL_MK2_CLIP_TRACER"):
					return 256;
					break;
				
				case joaat("COMPONENT_AT_PI_FLSH_02"):
					return 2;
					break;
				
				case joaat("COMPONENT_AT_PI_RAIL"):
					return 128;
					break;
				
				case joaat("component_at_pi_supp_02"):
					return 1;
					break;
				
				case joaat("COMPONENT_AT_PI_COMP"):
					return 128;
					break;
			}
			break;
		
		case joaat("WEAPON_SMG_MK2"):
			switch (iParam0)
			{
				case joaat("COMPONENT_SMG_MK2_CLIP_01"):
					return 16;
					break;
				
				case joaat("COMPONENT_SMG_MK2_CLIP_02"):
					return 32;
					break;
				
				case joaat("COMPONENT_SMG_MK2_CLIP_FMJ"):
					return 256;
					break;
				
				case joaat("COMPONENT_SMG_MK2_CLIP_HOLLOWPOINT"):
					return 256;
					break;
				
				case joaat("COMPONENT_SMG_MK2_CLIP_INCENDIARY"):
					return 256;
					break;
				
				case joaat("COMPONENT_SMG_MK2_CLIP_TRACER"):
					return 256;
					break;
				
				case joaat("component_at_ar_flsh"):
					return 2;
					break;
				
				case joaat("COMPONENT_AT_SIGHTS_SMG"):
					return 64;
					break;
				
				case joaat("COMPONENT_AT_SCOPE_MACRO_02_SMG_MK2"):
					return 4;
					break;
				
				case joaat("COMPONENT_AT_SCOPE_SMALL_SMG_MK2"):
					return 64;
					break;
				
				case joaat("component_at_pi_supp"):
					return 8;
					break;
			}
			break;
		
		case joaat("WEAPON_HEAVYSNIPER_MK2"):
			switch (iParam0)
			{
				case joaat("COMPONENT_HEAVYSNIPER_MK2_CLIP_01"):
					return 16;
					break;
				
				case joaat("COMPONENT_HEAVYSNIPER_MK2_CLIP_02"):
					return 32;
					break;
				
				case joaat("COMPONENT_HEAVYSNIPER_MK2_CLIP_ARMORPIERCING"):
					return 256;
					break;
				
				case joaat("COMPONENT_HEAVYSNIPER_MK2_CLIP_EXPLOSIVE"):
					return 256;
					break;
				
				case joaat("COMPONENT_HEAVYSNIPER_MK2_CLIP_FMJ"):
					return 256;
					break;
				
				case joaat("COMPONENT_HEAVYSNIPER_MK2_CLIP_INCENDIARY"):
					return 256;
					break;
				
				case joaat("component_at_scope_large"):
					return 4;
					break;
				
				case joaat("component_at_scope_max"):
					return 64;
					break;
				
				case joaat("COMPONENT_AT_SCOPE_NV"):
					return 8;
					break;
				
				case joaat("COMPONENT_AT_SCOPE_THERMAL"):
					return 8;
					break;
			}
			break;
		
		case joaat("WEAPON_COMBATMG_MK2"):
			switch (iParam0)
			{
				case joaat("COMPONENT_COMBATMG_MK2_CLIP_01"):
					return 16;
					break;
				
				case joaat("COMPONENT_COMBATMG_MK2_CLIP_02"):
					return 32;
					break;
				
				case joaat("COMPONENT_COMBATMG_MK2_CLIP_ARMORPIERCING"):
					return 256;
					break;
				
				case joaat("COMPONENT_COMBATMG_MK2_CLIP_FMJ"):
					return 256;
					break;
				
				case joaat("COMPONENT_COMBATMG_MK2_CLIP_INCENDIARY"):
					return 256;
					break;
				
				case joaat("COMPONENT_COMBATMG_MK2_CLIP_TRACER"):
					return 256;
					break;
				
				case joaat("COMPONENT_AT_AR_AFGRIP_02"):
					return 128;
					break;
				
				case joaat("COMPONENT_AT_SIGHTS"):
					return 64;
					break;
			}
			break;
		
		case joaat("WEAPON_ASSAULTRIFLE_MK2"):
			switch (iParam0)
			{
				case joaat("COMPONENT_ASSAULTRIFLE_MK2_CLIP_01"):
					return 16;
					break;
				
				case joaat("COMPONENT_ASSAULTRIFLE_MK2_CLIP_02"):
					return 32;
					break;
				
				case joaat("COMPONENT_ASSAULTRIFLE_MK2_CLIP_ARMORPIERCING"):
					return 256;
					break;
				
				case joaat("COMPONENT_ASSAULTRIFLE_MK2_CLIP_FMJ"):
					return 256;
					break;
				
				case joaat("COMPONENT_ASSAULTRIFLE_MK2_CLIP_INCENDIARY"):
					return 256;
					break;
				
				case joaat("COMPONENT_ASSAULTRIFLE_MK2_CLIP_TRACER"):
					return 256;
					break;
				
				case joaat("COMPONENT_AT_AR_AFGRIP_02"):
					return 128;
					break;
				
				case joaat("component_at_ar_flsh"):
					return 2;
					break;
				
				case joaat("COMPONENT_AT_SIGHTS"):
					return 64;
					break;
				
				case joaat("COMPONENT_AT_SCOPE_MACRO_MK2"):
					return 4;
					break;
				
				case joaat("COMPONENT_AT_SCOPE_MEDIUM_MK2"):
					return 8;
					break;
				
				case joaat("component_at_ar_supp_02"):
					return 1;
					break;
			}
			break;
		
		case joaat("WEAPON_CARBINERIFLE_MK2"):
			switch (iParam0)
			{
				case joaat("COMPONENT_CARBINERIFLE_MK2_CLIP_01"):
					return 16;
					break;
				
				case joaat("COMPONENT_CARBINERIFLE_MK2_CLIP_02"):
					return 32;
					break;
				
				case joaat("COMPONENT_CARBINERIFLE_MK2_CLIP_ARMORPIERCING"):
					return 256;
					break;
				
				case joaat("COMPONENT_CARBINERIFLE_MK2_CLIP_FMJ"):
					return 256;
					break;
				
				case joaat("COMPONENT_CARBINERIFLE_MK2_CLIP_INCENDIARY"):
					return 256;
					break;
				
				case joaat("COMPONENT_CARBINERIFLE_MK2_CLIP_TRACER"):
					return 256;
					break;
				
				case joaat("COMPONENT_AT_AR_AFGRIP_02"):
					return 128;
					break;
				
				case joaat("component_at_ar_flsh"):
					return 2;
					break;
				
				case joaat("COMPONENT_AT_SIGHTS"):
					return 64;
					break;
				
				case joaat("COMPONENT_AT_SCOPE_MACRO_MK2"):
					return 4;
					break;
				
				case joaat("COMPONENT_AT_SCOPE_MEDIUM_MK2"):
					return 8;
					break;
				
				case joaat("component_at_ar_supp"):
					return 1;
					break;
			}
			break;
	}
	return 0;
}

bool func_53(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	
	if (func_41())
	{
		return 0;
	}
	iVar0 = func_56(iParam0, iParam1, iParam2);
	iVar1 = func_54(iParam0, iParam1);
	return unk_0xCE990E643CD9D0E5(iVar0, func_30(iVar1));
}

int func_54(int iParam0, int iParam1)
{
	return func_55(iParam0, iParam1);
}

int func_55(int iParam0, int iParam1)
{
	switch (iParam1)
	{
		case joaat("weapon_pistol"):
			switch (iParam0)
			{
				case joaat("component_pistol_clip_01"):
					return 1;
					break;
				
				case joaat("component_pistol_clip_02"):
					return 2;
					break;
				
				case joaat("component_at_pi_flsh"):
					return 3;
					break;
				
				case joaat("component_at_pi_supp_02"):
					return 4;
					break;
				
				case joaat("component_pistol_varmod_luxe"):
					return 175;
					break;
				
				case 1623028892:
					return 211;
					break;
			}
			break;
		
		case joaat("weapon_combatpistol"):
			switch (iParam0)
			{
				case joaat("component_combatpistol_clip_01"):
					return 5;
					break;
				
				case joaat("component_combatpistol_clip_02"):
					return 6;
					break;
				
				case joaat("component_at_pi_flsh"):
					return 7;
					break;
				
				case joaat("component_at_pi_supp"):
					return 8;
					break;
				
				case joaat("component_combatpistol_varmod_lowrider"):
					return 186;
					break;
			}
			break;
		
		case joaat("weapon_appistol"):
			switch (iParam0)
			{
				case joaat("component_appistol_clip_01"):
					return 11;
					break;
				
				case joaat("component_appistol_clip_02"):
					return 12;
					break;
				
				case joaat("component_at_pi_flsh"):
					return 13;
					break;
				
				case joaat("component_at_pi_supp"):
					return 14;
					break;
				
				case joaat("component_appistol_varmod_luxe"):
					return 164;
					break;
			}
			break;
		
		case joaat("weapon_microsmg"):
			switch (iParam0)
			{
				case joaat("component_microsmg_clip_01"):
					return 15;
					break;
				
				case joaat("component_microsmg_clip_02"):
					return 16;
					break;
				
				case joaat("component_at_pi_flsh"):
					return 17;
					break;
				
				case joaat("component_at_scope_macro"):
					return 18;
					break;
				
				case joaat("component_at_ar_supp_02"):
					return 19;
					break;
				
				case joaat("component_microsmg_varmod_luxe"):
					return 174;
					break;
			}
			break;
		
		case joaat("weapon_smg"):
			switch (iParam0)
			{
				case joaat("component_smg_clip_01"):
					return 22;
					break;
				
				case joaat("component_smg_clip_02"):
					return 23;
					break;
				
				case joaat("component_smg_clip_03"):
					return 207;
					break;
				
				case joaat("component_at_ar_flsh"):
					return 24;
					break;
				
				case joaat("component_at_scope_macro_02"):
					return 25;
					break;
				
				case joaat("component_at_pi_supp"):
					return 26;
					break;
				
				case joaat("component_smg_varmod_luxe"):
					return 179;
					break;
				
				case 1623028892:
					return 212;
					break;
			}
			break;
		
		case joaat("weapon_assaultrifle"):
			switch (iParam0)
			{
				case joaat("component_assaultrifle_clip_01"):
					return 27;
					break;
				
				case joaat("component_assaultrifle_clip_02"):
					return 28;
					break;
				
				case joaat("component_assaultrifle_clip_03"):
					return 201;
					break;
				
				case joaat("component_at_ar_afgrip"):
					return 29;
					break;
				
				case joaat("component_at_ar_flsh"):
					return 30;
					break;
				
				case joaat("component_at_scope_macro"):
					return 31;
					break;
				
				case joaat("component_at_ar_supp_02"):
					return 32;
					break;
				
				case joaat("component_assaultrifle_varmod_luxe"):
					return 165;
					break;
				
				case 1623028892:
					return 213;
					break;
			}
			break;
		
		case joaat("weapon_carbinerifle"):
			switch (iParam0)
			{
				case joaat("component_carbinerifle_clip_01"):
					return 33;
					break;
				
				case joaat("component_carbinerifle_clip_02"):
					return 34;
					break;
				
				case joaat("component_carbinerifle_clip_03"):
					return 202;
					break;
				
				case joaat("component_at_railcover_01"):
					return 35;
					break;
				
				case joaat("component_at_ar_afgrip"):
					return 36;
					break;
				
				case joaat("component_at_ar_flsh"):
					return 37;
					break;
				
				case joaat("component_at_scope_medium"):
					return 38;
					break;
				
				case joaat("component_at_ar_supp"):
					return 39;
					break;
				
				case joaat("component_carbinerifle_varmod_luxe"):
					return 168;
					break;
				
				case 1623028892:
					return 214;
					break;
			}
			break;
		
		case joaat("weapon_advancedrifle"):
			switch (iParam0)
			{
				case joaat("component_advancedrifle_clip_01"):
					return 44;
					break;
				
				case joaat("component_advancedrifle_clip_02"):
					return 45;
					break;
				
				case joaat("component_at_ar_flsh"):
					return 47;
					break;
				
				case joaat("component_at_scope_small"):
					return 48;
					break;
				
				case joaat("component_at_ar_supp"):
					return 49;
					break;
				
				case joaat("component_advancedrifle_varmod_luxe"):
					return 163;
					break;
			}
			break;
		
		case joaat("weapon_mg"):
			switch (iParam0)
			{
				case joaat("component_mg_clip_01"):
					return 50;
					break;
				
				case joaat("component_mg_clip_02"):
					return 51;
					break;
				
				case joaat("component_at_scope_small_02"):
					return 52;
					break;
				
				case joaat("component_mg_varmod_lowrider"):
					return 187;
					break;
			}
			break;
		
		case joaat("weapon_combatmg"):
			switch (iParam0)
			{
				case joaat("component_combatmg_clip_01"):
					return 53;
					break;
				
				case joaat("component_combatmg_clip_02"):
					return 54;
					break;
				
				case joaat("component_at_ar_afgrip"):
					return 55;
					break;
				
				case joaat("component_at_scope_medium"):
					return 56;
					break;
				
				case joaat("component_combatmg_varmod_lowrider"):
					return 188;
					break;
				
				case 1623028892:
					return 215;
					break;
			}
			break;
		
		case joaat("weapon_pumpshotgun"):
			switch (iParam0)
			{
				case joaat("component_at_sr_supp"):
					return 59;
					break;
				
				case joaat("component_at_ar_flsh"):
					return 60;
					break;
				
				case joaat("component_pumpshotgun_varmod_lowrider"):
					return 193;
					break;
				
				case 1623028892:
					return 389;
					break;
			}
			break;
		
		case joaat("weapon_assaultshotgun"):
			switch (iParam0)
			{
				case joaat("component_assaultshotgun_clip_01"):
					return 64;
					break;
				
				case joaat("component_assaultshotgun_clip_02"):
					return 65;
					break;
				
				case joaat("component_at_ar_afgrip"):
					return 66;
					break;
				
				case joaat("component_at_ar_flsh"):
					return 67;
					break;
				
				case joaat("component_at_ar_supp"):
					return 68;
					break;
			}
			break;
		
		case joaat("weapon_sniperrifle"):
			switch (iParam0)
			{
				case joaat("component_sniperrifle_clip_01"):
					return 69;
					break;
				
				case joaat("component_at_scope_large"):
					return 70;
					break;
				
				case joaat("component_at_scope_max"):
					return 71;
					break;
				
				case joaat("component_at_ar_supp_02"):
					return 72;
					break;
				
				case joaat("component_sniperrifle_varmod_luxe"):
					return 180;
					break;
			}
			break;
		
		case joaat("weapon_heavysniper"):
			switch (iParam0)
			{
				case joaat("component_heavysniper_clip_01"):
					return 76;
					break;
				
				case joaat("component_at_scope_max"):
					return 77;
					break;
				
				case joaat("component_at_scope_large"):
					return 82;
					break;
				
				case 1623028892:
					return 216;
					break;
			}
			break;
		
		case joaat("weapon_grenadelauncher"):
			switch (iParam0)
			{
				case joaat("component_at_ar_afgrip"):
					return 78;
					break;
				
				case joaat("component_at_ar_flsh"):
					return 79;
					break;
				
				case joaat("component_at_scope_small"):
					return 80;
					break;
			}
			break;
		
		case joaat("weapon_minigun"):
			switch (iParam0)
			{
				case joaat("component_minigun_clip_01"):
					return 81;
					break;
			}
			break;
		
		case joaat("weapon_assaultsmg"):
			switch (iParam0)
			{
				case joaat("component_assaultsmg_clip_01"):
					return 83;
					break;
				
				case joaat("component_assaultsmg_clip_02"):
					return 84;
					break;
				
				case joaat("component_at_ar_flsh"):
					return 85;
					break;
				
				case joaat("component_at_scope_macro"):
					return 86;
					break;
				
				case joaat("component_at_ar_supp_02"):
					return 87;
					break;
				
				case joaat("component_assaultsmg_varmod_lowrider"):
					return 189;
					break;
			}
			break;
		
		case joaat("weapon_bullpupshotgun"):
			switch (iParam0)
			{
				case joaat("component_at_ar_afgrip"):
					return 88;
					break;
				
				case joaat("component_at_ar_flsh"):
					return 89;
					break;
				
				case joaat("component_at_ar_supp_02"):
					return 90;
					break;
			}
			break;
		
		case joaat("weapon_pistol50"):
			switch (iParam0)
			{
				case joaat("component_pistol50_clip_01"):
					return 91;
					break;
				
				case joaat("component_pistol50_clip_02"):
					return 92;
					break;
				
				case joaat("component_at_pi_flsh"):
					return 93;
					break;
				
				case joaat("component_at_ar_supp_02"):
					return 94;
					break;
				
				case joaat("component_pistol50_varmod_luxe"):
					return 176;
					break;
			}
			break;
		
		case 392730790:
			switch (iParam0)
			{
				case 195735895:
					return 95;
					break;
				
				case joaat("component_at_scope_large"):
					return 96;
					break;
				
				case joaat("component_at_scope_max"):
					return 97;
					break;
				
				case joaat("component_at_ar_supp"):
					return 98;
					break;
			}
			break;
		
		case -947031628:
			switch (iParam0)
			{
				case 1525977990:
					return 99;
					break;
				
				case 1824470811:
					return 100;
					break;
				
				case joaat("component_at_ar_afgrip"):
					return 101;
					break;
				
				case joaat("component_at_ar_flsh"):
					return 102;
					break;
				
				case joaat("component_at_scope_medium"):
					return 103;
					break;
				
				case joaat("component_at_ar_supp"):
					return 104;
					break;
			}
			break;
		
		case -572349828:
			switch (iParam0)
			{
				case -890514874:
					return 105;
					break;
				
				case -507117574:
					return 106;
					break;
				
				case joaat("component_at_ar_afgrip"):
					return 107;
					break;
				
				case joaat("component_at_scope_medium"):
					return 108;
					break;
			}
			break;
		
		case -1887867191:
			switch (iParam0)
			{
				case -124428919:
					return 109;
					break;
				
				case 1048471894:
					return 110;
					break;
			}
			break;
		
		case joaat("weapon_specialcarbine"):
			switch (iParam0)
			{
				case joaat("component_specialcarbine_clip_01"):
					return 111;
					break;
				
				case joaat("component_specialcarbine_clip_02"):
					return 112;
					break;
				
				case joaat("component_specialcarbine_clip_03"):
					return 208;
					break;
				
				case joaat("component_at_ar_afgrip"):
					return 113;
					break;
				
				case joaat("component_at_ar_flsh"):
					return 114;
					break;
				
				case joaat("component_at_scope_medium"):
					return 115;
					break;
				
				case joaat("component_at_ar_supp_02"):
					return 116;
					break;
				
				case joaat("component_specialcarbine_varmod_lowrider"):
					return 190;
					break;
				
				case 1623028892:
					return 390;
					break;
			}
			break;
		
		case joaat("weapon_snspistol"):
			switch (iParam0)
			{
				case joaat("component_snspistol_clip_01"):
					return 117;
					break;
				
				case joaat("component_snspistol_clip_02"):
					return 118;
					break;
				
				case joaat("component_at_pi_flsh"):
					return 119;
					break;
				
				case joaat("component_at_pi_supp"):
					return 120;
					break;
				
				case joaat("component_snspistol_varmod_lowrider"):
					return 191;
					break;
				
				case 1623028892:
					return 391;
					break;
			}
			break;
		
		case joaat("weapon_heavypistol"):
			switch (iParam0)
			{
				case joaat("component_heavypistol_clip_01"):
					return 121;
					break;
				
				case joaat("component_heavypistol_clip_02"):
					return 122;
					break;
				
				case joaat("component_at_pi_flsh"):
					return 123;
					break;
				
				case joaat("component_at_pi_supp"):
					return 124;
					break;
				
				case joaat("component_heavypistol_varmod_luxe"):
					return 171;
					break;
			}
			break;
		
		case joaat("weapon_bullpuprifle"):
			switch (iParam0)
			{
				case joaat("component_bullpuprifle_clip_01"):
					return 131;
					break;
				
				case joaat("component_bullpuprifle_clip_02"):
					return 132;
					break;
				
				case joaat("component_at_ar_flsh"):
					return 127;
					break;
				
				case joaat("component_at_ar_supp"):
					return 128;
					break;
				
				case joaat("component_at_scope_small"):
					return 129;
					break;
				
				case joaat("component_at_ar_afgrip"):
					return 130;
					break;
				
				case joaat("component_bullpuprifle_varmod_low"):
					return 192;
					break;
				
				case 1623028892:
					return 394;
					break;
			}
			break;
		
		case joaat("weapon_gusenberg"):
			switch (iParam0)
			{
				case joaat("component_gusenberg_clip_01"):
					return 125;
					break;
				
				case joaat("component_gusenberg_clip_02"):
					return 126;
					break;
			}
			break;
		
		case joaat("weapon_vintagepistol"):
			switch (iParam0)
			{
				case joaat("component_vintagepistol_clip_01"):
					return 133;
					break;
				
				case joaat("component_vintagepistol_clip_02"):
					return 134;
					break;
				
				case joaat("component_at_pi_supp"):
					return 136;
					break;
			}
			break;
		
		case joaat("weapon_heavyshotgun"):
			switch (iParam0)
			{
				case joaat("component_heavyshotgun_clip_01"):
					return 137;
					break;
				
				case joaat("component_heavyshotgun_clip_02"):
					return 140;
					break;
				
				case joaat("component_heavyshotgun_clip_03"):
					return 205;
					break;
				
				case joaat("component_at_ar_flsh"):
					return 145;
					break;
				
				case joaat("component_at_ar_supp_02"):
					return 146;
					break;
				
				case joaat("component_at_ar_afgrip"):
					return 147;
					break;
			}
			break;
		
		case joaat("weapon_marksmanrifle"):
			switch (iParam0)
			{
				case joaat("component_marksmanrifle_clip_01"):
					return 138;
					break;
				
				case joaat("component_marksmanrifle_clip_02"):
					return 139;
					break;
				
				case joaat("component_at_scope_large_fixed_zoom"):
					return 141;
					break;
				
				case joaat("component_at_ar_flsh"):
					return 142;
					break;
				
				case joaat("component_at_ar_supp"):
					return 143;
					break;
				
				case joaat("component_at_ar_afgrip"):
					return 144;
					break;
				
				case joaat("component_marksmanrifle_varmod_luxe"):
					return 172;
					break;
				
				case 1623028892:
					return 392;
					break;
			}
			break;
		
		case joaat("weapon_combatpdw"):
			switch (iParam0)
			{
				case joaat("component_combatpdw_clip_01"):
					return 149;
					break;
				
				case joaat("component_combatpdw_clip_02"):
					return 150;
					break;
				
				case joaat("component_combatpdw_clip_03"):
					return 203;
					break;
				
				case joaat("component_at_ar_flsh"):
					return 151;
					break;
				
				case joaat("component_at_scope_small"):
					return 152;
					break;
				
				case joaat("component_at_ar_afgrip"):
					return 153;
					break;
			}
			break;
		
		case joaat("weapon_sawnoffshotgun"):
			switch (iParam0)
			{
				case joaat("component_sawnoffshotgun_varmod_luxe"):
					return 178;
					break;
			}
			break;
		
		case joaat("weapon_marksmanpistol"):
			switch (iParam0)
			{
				case joaat("component_marksmanpistol_clip_01"):
					return 148;
					break;
			}
			break;
		
		case joaat("weapon_knuckle"):
			switch (iParam0)
			{
				case joaat("component_knuckle_varmod_pimp"):
					return 154;
					break;
				
				case joaat("component_knuckle_varmod_ballas"):
					return 155;
					break;
				
				case joaat("component_knuckle_varmod_dollar"):
					return 156;
					break;
				
				case joaat("component_knuckle_varmod_diamond"):
					return 157;
					break;
				
				case joaat("component_knuckle_varmod_hate"):
					return 158;
					break;
				
				case joaat("component_knuckle_varmod_love"):
					return 159;
					break;
				
				case joaat("component_knuckle_varmod_player"):
					return 160;
					break;
				
				case joaat("component_knuckle_varmod_king"):
					return 161;
					break;
				
				case joaat("component_knuckle_varmod_vagos"):
					return 162;
					break;
			}
			break;
		
		case joaat("weapon_machinepistol"):
			switch (iParam0)
			{
				case joaat("component_machinepistol_clip_01"):
					return 184;
					break;
				
				case joaat("component_machinepistol_clip_02"):
					return 185;
					break;
				
				case joaat("component_machinepistol_clip_03"):
					return 206;
					break;
				
				case joaat("component_at_pi_supp"):
					return 183;
					break;
			}
			break;
		
		case joaat("weapon_switchblade"):
			switch (iParam0)
			{
				case joaat("component_switchblade_varmod_var1"):
					return 194;
					break;
				
				case joaat("component_switchblade_varmod_var2"):
					return 195;
					break;
			}
			break;
		
		case joaat("weapon_revolver"):
			switch (iParam0)
			{
				case joaat("component_revolver_clip_01"):
					return 196;
					break;
				
				case joaat("component_revolver_varmod_boss"):
					return 197;
					break;
				
				case joaat("component_revolver_varmod_goon"):
					return 198;
					break;
				
				case 1623028892:
					return 393;
					break;
			}
			break;
		
		case joaat("weapon_compactrifle"):
			switch (iParam0)
			{
				case joaat("component_compactrifle_clip_01"):
					return 199;
					break;
				
				case joaat("component_compactrifle_clip_02"):
					return 200;
					break;
				
				case joaat("component_compactrifle_clip_03"):
					return 204;
					break;
			}
			break;
		
		case joaat("WEAPON_MINISMG"):
			switch (iParam0)
			{
				case joaat("COMPONENT_MINISMG_CLIP_01"):
					return 209;
					break;
				
				case joaat("COMPONENT_MINISMG_CLIP_02"):
					return 210;
					break;
			}
			break;
		
		case joaat("WEAPON_PISTOL_MK2"):
			switch (iParam0)
			{
				case joaat("COMPONENT_PISTOL_MK2_CLIP_01"):
					return 217;
					break;
				
				case joaat("COMPONENT_PISTOL_MK2_CLIP_02"):
					return 218;
					break;
				
				case joaat("COMPONENT_PISTOL_MK2_CLIP_FMJ"):
					return 219;
					break;
				
				case joaat("COMPONENT_PISTOL_MK2_CLIP_HOLLOWPOINT"):
					return 220;
					break;
				
				case joaat("COMPONENT_PISTOL_MK2_CLIP_INCENDIARY"):
					return 221;
					break;
				
				case joaat("COMPONENT_PISTOL_MK2_CLIP_TRACER"):
					return 222;
					break;
				
				case joaat("COMPONENT_AT_PI_FLSH_02"):
					return 223;
					break;
				
				case joaat("COMPONENT_AT_PI_RAIL"):
					return 224;
					break;
				
				case joaat("component_at_pi_supp_02"):
					return 225;
					break;
				
				case joaat("COMPONENT_AT_PI_COMP"):
					return 226;
					break;
				
				case joaat("COMPONENT_PISTOL_MK2_CAMO"):
					return 367;
					break;
				
				case joaat("COMPONENT_PISTOL_MK2_CAMO_02"):
					return 368;
					break;
				
				case joaat("COMPONENT_PISTOL_MK2_CAMO_03"):
					return 369;
					break;
				
				case joaat("COMPONENT_PISTOL_MK2_CAMO_04"):
					return 370;
					break;
				
				case joaat("COMPONENT_PISTOL_MK2_CAMO_05"):
					return 371;
					break;
				
				case joaat("COMPONENT_PISTOL_MK2_CAMO_06"):
					return 372;
					break;
				
				case joaat("COMPONENT_PISTOL_MK2_CAMO_07"):
					return 373;
					break;
				
				case joaat("COMPONENT_PISTOL_MK2_CAMO_08"):
					return 374;
					break;
				
				case joaat("COMPONENT_PISTOL_MK2_CAMO_09"):
					return 375;
					break;
				
				case joaat("COMPONENT_PISTOL_MK2_CAMO_10"):
					return 376;
					break;
				
				case joaat("COMPONENT_PISTOL_MK2_CAMO_IND_01"):
					return 377;
					break;
			}
			break;
		
		case joaat("WEAPON_SMG_MK2"):
			switch (iParam0)
			{
				case joaat("COMPONENT_SMG_MK2_CLIP_01"):
					return 227;
					break;
				
				case joaat("COMPONENT_SMG_MK2_CLIP_02"):
					return 228;
					break;
				
				case joaat("COMPONENT_SMG_MK2_CLIP_FMJ"):
					return 229;
					break;
				
				case joaat("COMPONENT_SMG_MK2_CLIP_HOLLOWPOINT"):
					return 230;
					break;
				
				case joaat("COMPONENT_SMG_MK2_CLIP_INCENDIARY"):
					return 231;
					break;
				
				case joaat("COMPONENT_SMG_MK2_CLIP_TRACER"):
					return 232;
					break;
				
				case joaat("component_at_ar_flsh"):
					return 233;
					break;
				
				case joaat("COMPONENT_AT_SIGHTS_SMG"):
					return 234;
					break;
				
				case joaat("COMPONENT_AT_SCOPE_MACRO_02_SMG_MK2"):
					return 235;
					break;
				
				case joaat("COMPONENT_AT_SCOPE_SMALL_SMG_MK2"):
					return 236;
					break;
				
				case joaat("component_at_pi_supp"):
					return 237;
					break;
				
				case joaat("COMPONENT_AT_MUZZLE_01"):
					return 238;
					break;
				
				case joaat("COMPONENT_AT_MUZZLE_02"):
					return 239;
					break;
				
				case joaat("COMPONENT_AT_MUZZLE_03"):
					return 240;
					break;
				
				case joaat("COMPONENT_AT_MUZZLE_04"):
					return 241;
					break;
				
				case joaat("COMPONENT_AT_MUZZLE_05"):
					return 242;
					break;
				
				case joaat("COMPONENT_AT_MUZZLE_06"):
					return 243;
					break;
				
				case joaat("COMPONENT_AT_MUZZLE_07"):
					return 244;
					break;
				
				case joaat("COMPONENT_AT_SB_BARREL_01"):
					return 245;
					break;
				
				case joaat("COMPONENT_AT_SB_BARREL_02"):
					return 246;
					break;
				
				case joaat("COMPONENT_SMG_MK2_CAMO"):
					return 378;
					break;
				
				case joaat("COMPONENT_SMG_MK2_CAMO_02"):
					return 379;
					break;
				
				case joaat("COMPONENT_SMG_MK2_CAMO_03"):
					return 380;
					break;
				
				case joaat("COMPONENT_SMG_MK2_CAMO_04"):
					return 381;
					break;
				
				case joaat("COMPONENT_SMG_MK2_CAMO_05"):
					return 382;
					break;
				
				case joaat("COMPONENT_SMG_MK2_CAMO_06"):
					return 383;
					break;
				
				case joaat("COMPONENT_SMG_MK2_CAMO_07"):
					return 384;
					break;
				
				case joaat("COMPONENT_SMG_MK2_CAMO_08"):
					return 385;
					break;
				
				case joaat("COMPONENT_SMG_MK2_CAMO_09"):
					return 386;
					break;
				
				case joaat("COMPONENT_SMG_MK2_CAMO_10"):
					return 387;
					break;
				
				case joaat("COMPONENT_SMG_MK2_CAMO_IND_01"):
					return 388;
					break;
			}
			break;
		
		case joaat("WEAPON_HEAVYSNIPER_MK2"):
			switch (iParam0)
			{
				case joaat("COMPONENT_HEAVYSNIPER_MK2_CLIP_01"):
					return 247;
					break;
				
				case joaat("COMPONENT_HEAVYSNIPER_MK2_CLIP_02"):
					return 248;
					break;
				
				case joaat("COMPONENT_HEAVYSNIPER_MK2_CLIP_ARMORPIERCING"):
					return 249;
					break;
				
				case joaat("COMPONENT_HEAVYSNIPER_MK2_CLIP_EXPLOSIVE"):
					return 250;
					break;
				
				case joaat("COMPONENT_HEAVYSNIPER_MK2_CLIP_FMJ"):
					return 251;
					break;
				
				case joaat("COMPONENT_HEAVYSNIPER_MK2_CLIP_INCENDIARY"):
					return 252;
					break;
				
				case joaat("COMPONENT_AT_SCOPE_LARGE_MK2"):
					return 253;
					break;
				
				case joaat("component_at_scope_max"):
					return 254;
					break;
				
				case joaat("COMPONENT_AT_SCOPE_NV"):
					return 255;
					break;
				
				case joaat("COMPONENT_AT_SCOPE_THERMAL"):
					return 256;
					break;
				
				case joaat("COMPONENT_AT_SR_SUPP_03"):
					return 257;
					break;
				
				case joaat("COMPONENT_AT_MUZZLE_08"):
					return 258;
					break;
				
				case joaat("COMPONENT_AT_MUZZLE_09"):
					return 259;
					break;
				
				case joaat("COMPONENT_AT_SR_BARREL_01"):
					return 260;
					break;
				
				case joaat("COMPONENT_AT_SR_BARREL_02"):
					return 261;
					break;
				
				case joaat("COMPONENT_HEAVYSNIPER_MK2_CAMO"):
					return 356;
					break;
				
				case joaat("COMPONENT_HEAVYSNIPER_MK2_CAMO_02"):
					return 357;
					break;
				
				case joaat("COMPONENT_HEAVYSNIPER_MK2_CAMO_03"):
					return 358;
					break;
				
				case joaat("COMPONENT_HEAVYSNIPER_MK2_CAMO_04"):
					return 359;
					break;
				
				case joaat("COMPONENT_HEAVYSNIPER_MK2_CAMO_05"):
					return 360;
					break;
				
				case joaat("COMPONENT_HEAVYSNIPER_MK2_CAMO_06"):
					return 361;
					break;
				
				case joaat("COMPONENT_HEAVYSNIPER_MK2_CAMO_07"):
					return 362;
					break;
				
				case joaat("COMPONENT_HEAVYSNIPER_MK2_CAMO_08"):
					return 363;
					break;
				
				case joaat("COMPONENT_HEAVYSNIPER_MK2_CAMO_09"):
					return 364;
					break;
				
				case joaat("COMPONENT_HEAVYSNIPER_MK2_CAMO_10"):
					return 365;
					break;
				
				case joaat("COMPONENT_HEAVYSNIPER_MK2_CAMO_IND_01"):
					return 366;
					break;
			}
			break;
		
		case joaat("WEAPON_COMBATMG_MK2"):
			switch (iParam0)
			{
				case joaat("COMPONENT_COMBATMG_MK2_CLIP_01"):
					return 262;
					break;
				
				case joaat("COMPONENT_COMBATMG_MK2_CLIP_02"):
					return 263;
					break;
				
				case joaat("COMPONENT_COMBATMG_MK2_CLIP_ARMORPIERCING"):
					return 264;
					break;
				
				case joaat("COMPONENT_COMBATMG_MK2_CLIP_FMJ"):
					return 265;
					break;
				
				case joaat("COMPONENT_COMBATMG_MK2_CLIP_INCENDIARY"):
					return 266;
					break;
				
				case joaat("COMPONENT_COMBATMG_MK2_CLIP_TRACER"):
					return 267;
					break;
				
				case joaat("COMPONENT_AT_AR_AFGRIP_02"):
					return 268;
					break;
				
				case joaat("COMPONENT_AT_SIGHTS"):
					return 269;
					break;
				
				case joaat("COMPONENT_AT_SCOPE_SMALL_MK2"):
					return 270;
					break;
				
				case joaat("COMPONENT_AT_SCOPE_MEDIUM_MK2"):
					return 271;
					break;
				
				case joaat("COMPONENT_AT_MUZZLE_01"):
					return 272;
					break;
				
				case joaat("COMPONENT_AT_MUZZLE_02"):
					return 273;
					break;
				
				case joaat("COMPONENT_AT_MUZZLE_03"):
					return 274;
					break;
				
				case joaat("COMPONENT_AT_MUZZLE_04"):
					return 275;
					break;
				
				case joaat("COMPONENT_AT_MUZZLE_05"):
					return 276;
					break;
				
				case joaat("COMPONENT_AT_MUZZLE_06"):
					return 277;
					break;
				
				case joaat("COMPONENT_AT_MUZZLE_07"):
					return 278;
					break;
				
				case joaat("COMPONENT_AT_MG_BARREL_01"):
					return 279;
					break;
				
				case joaat("COMPONENT_AT_MG_BARREL_02"):
					return 280;
					break;
				
				case joaat("COMPONENT_COMBATMG_MK2_CAMO"):
					return 345;
					break;
				
				case joaat("COMPONENT_COMBATMG_MK2_CAMO_02"):
					return 346;
					break;
				
				case joaat("COMPONENT_COMBATMG_MK2_CAMO_03"):
					return 347;
					break;
				
				case joaat("COMPONENT_COMBATMG_MK2_CAMO_04"):
					return 348;
					break;
				
				case joaat("COMPONENT_COMBATMG_MK2_CAMO_05"):
					return 349;
					break;
				
				case joaat("COMPONENT_COMBATMG_MK2_CAMO_06"):
					return 350;
					break;
				
				case joaat("COMPONENT_COMBATMG_MK2_CAMO_07"):
					return 351;
					break;
				
				case joaat("COMPONENT_COMBATMG_MK2_CAMO_08"):
					return 352;
					break;
				
				case joaat("COMPONENT_COMBATMG_MK2_CAMO_09"):
					return 353;
					break;
				
				case joaat("COMPONENT_COMBATMG_MK2_CAMO_10"):
					return 354;
					break;
				
				case joaat("COMPONENT_COMBATMG_MK2_CAMO_IND_01"):
					return 355;
					break;
			}
			break;
		
		case joaat("WEAPON_ASSAULTRIFLE_MK2"):
			switch (iParam0)
			{
				case joaat("COMPONENT_ASSAULTRIFLE_MK2_CLIP_01"):
					return 281;
					break;
				
				case joaat("COMPONENT_ASSAULTRIFLE_MK2_CLIP_02"):
					return 282;
					break;
				
				case joaat("COMPONENT_ASSAULTRIFLE_MK2_CLIP_ARMORPIERCING"):
					return 283;
					break;
				
				case joaat("COMPONENT_ASSAULTRIFLE_MK2_CLIP_FMJ"):
					return 284;
					break;
				
				case joaat("COMPONENT_ASSAULTRIFLE_MK2_CLIP_INCENDIARY"):
					return 285;
					break;
				
				case joaat("COMPONENT_ASSAULTRIFLE_MK2_CLIP_TRACER"):
					return 286;
					break;
				
				case joaat("COMPONENT_AT_AR_AFGRIP_02"):
					return 287;
					break;
				
				case joaat("component_at_ar_flsh"):
					return 288;
					break;
				
				case joaat("COMPONENT_AT_SIGHTS"):
					return 289;
					break;
				
				case joaat("COMPONENT_AT_SCOPE_MACRO_MK2"):
					return 290;
					break;
				
				case joaat("COMPONENT_AT_SCOPE_MEDIUM_MK2"):
					return 291;
					break;
				
				case joaat("component_at_ar_supp_02"):
					return 292;
					break;
				
				case joaat("COMPONENT_AT_MUZZLE_01"):
					return 293;
					break;
				
				case joaat("COMPONENT_AT_MUZZLE_02"):
					return 294;
					break;
				
				case joaat("COMPONENT_AT_MUZZLE_03"):
					return 295;
					break;
				
				case joaat("COMPONENT_AT_MUZZLE_04"):
					return 296;
					break;
				
				case joaat("COMPONENT_AT_MUZZLE_05"):
					return 297;
					break;
				
				case joaat("COMPONENT_AT_MUZZLE_06"):
					return 298;
					break;
				
				case joaat("COMPONENT_AT_MUZZLE_07"):
					return 299;
					break;
				
				case joaat("COMPONENT_AT_AR_BARREL_01"):
					return 300;
					break;
				
				case joaat("COMPONENT_AT_AR_BARREL_02"):
					return 301;
					break;
				
				case joaat("COMPONENT_ASSAULTRIFLE_MK2_CAMO"):
					return 323;
					break;
				
				case joaat("COMPONENT_ASSAULTRIFLE_MK2_CAMO_02"):
					return 324;
					break;
				
				case joaat("COMPONENT_ASSAULTRIFLE_MK2_CAMO_03"):
					return 325;
					break;
				
				case joaat("COMPONENT_ASSAULTRIFLE_MK2_CAMO_04"):
					return 326;
					break;
				
				case joaat("COMPONENT_ASSAULTRIFLE_MK2_CAMO_05"):
					return 327;
					break;
				
				case joaat("COMPONENT_ASSAULTRIFLE_MK2_CAMO_06"):
					return 328;
					break;
				
				case joaat("COMPONENT_ASSAULTRIFLE_MK2_CAMO_07"):
					return 329;
					break;
				
				case joaat("COMPONENT_ASSAULTRIFLE_MK2_CAMO_08"):
					return 330;
					break;
				
				case joaat("COMPONENT_ASSAULTRIFLE_MK2_CAMO_09"):
					return 331;
					break;
				
				case joaat("COMPONENT_ASSAULTRIFLE_MK2_CAMO_10"):
					return 332;
					break;
				
				case joaat("COMPONENT_ASSAULTRIFLE_MK2_CAMO_IND_01"):
					return 333;
					break;
			}
			break;
		
		case joaat("WEAPON_CARBINERIFLE_MK2"):
			switch (iParam0)
			{
				case joaat("COMPONENT_CARBINERIFLE_MK2_CLIP_01"):
					return 302;
					break;
				
				case joaat("COMPONENT_CARBINERIFLE_MK2_CLIP_02"):
					return 303;
					break;
				
				case joaat("COMPONENT_CARBINERIFLE_MK2_CLIP_ARMORPIERCING"):
					return 304;
					break;
				
				case joaat("COMPONENT_CARBINERIFLE_MK2_CLIP_FMJ"):
					return 305;
					break;
				
				case joaat("COMPONENT_CARBINERIFLE_MK2_CLIP_INCENDIARY"):
					return 306;
					break;
				
				case joaat("COMPONENT_CARBINERIFLE_MK2_CLIP_TRACER"):
					return 307;
					break;
				
				case joaat("COMPONENT_AT_AR_AFGRIP_02"):
					return 308;
					break;
				
				case joaat("component_at_ar_flsh"):
					return 309;
					break;
				
				case joaat("COMPONENT_AT_SIGHTS"):
					return 310;
					break;
				
				case joaat("COMPONENT_AT_SCOPE_MACRO_MK2"):
					return 311;
					break;
				
				case joaat("COMPONENT_AT_SCOPE_MEDIUM_MK2"):
					return 312;
					break;
				
				case joaat("component_at_ar_supp"):
					return 313;
					break;
				
				case joaat("COMPONENT_AT_MUZZLE_01"):
					return 314;
					break;
				
				case joaat("COMPONENT_AT_MUZZLE_02"):
					return 315;
					break;
				
				case joaat("COMPONENT_AT_MUZZLE_03"):
					return 316;
					break;
				
				case joaat("COMPONENT_AT_MUZZLE_04"):
					return 317;
					break;
				
				case joaat("COMPONENT_AT_MUZZLE_05"):
					return 318;
					break;
				
				case joaat("COMPONENT_AT_MUZZLE_06"):
					return 319;
					break;
				
				case joaat("COMPONENT_AT_MUZZLE_07"):
					return 320;
					break;
				
				case joaat("COMPONENT_AT_CR_BARREL_01"):
					return 321;
					break;
				
				case joaat("COMPONENT_AT_CR_BARREL_02"):
					return 322;
					break;
				
				case joaat("COMPONENT_CARBINERIFLE_MK2_CAMO"):
					return 334;
					break;
				
				case joaat("COMPONENT_CARBINERIFLE_MK2_CAMO_02"):
					return 335;
					break;
				
				case joaat("COMPONENT_CARBINERIFLE_MK2_CAMO_03"):
					return 336;
					break;
				
				case joaat("COMPONENT_CARBINERIFLE_MK2_CAMO_04"):
					return 337;
					break;
				
				case joaat("COMPONENT_CARBINERIFLE_MK2_CAMO_05"):
					return 338;
					break;
				
				case joaat("COMPONENT_CARBINERIFLE_MK2_CAMO_06"):
					return 339;
					break;
				
				case joaat("COMPONENT_CARBINERIFLE_MK2_CAMO_07"):
					return 340;
					break;
				
				case joaat("COMPONENT_CARBINERIFLE_MK2_CAMO_08"):
					return 341;
					break;
				
				case joaat("COMPONENT_CARBINERIFLE_MK2_CAMO_09"):
					return 342;
					break;
				
				case joaat("COMPONENT_CARBINERIFLE_MK2_CAMO_10"):
					return 343;
					break;
				
				case joaat("COMPONENT_CARBINERIFLE_MK2_CAMO_IND_01"):
					return 344;
					break;
			}
			break;
		
		case joaat("WEAPON_PUMPSHOTGUN_MK2"):
			switch (iParam0)
			{
				case joaat("COMPONENT_PUMPSHOTGUN_MK2_CLIP_01"):
					return 395;
					break;
				
				case joaat("COMPONENT_PUMPSHOTGUN_MK2_CLIP_ARMORPIERCING"):
					return 396;
					break;
				
				case joaat("COMPONENT_PUMPSHOTGUN_MK2_CLIP_EXPLOSIVE"):
					return 397;
					break;
				
				case joaat("COMPONENT_PUMPSHOTGUN_MK2_CLIP_HOLLOWPOINT"):
					return 398;
					break;
				
				case joaat("COMPONENT_PUMPSHOTGUN_MK2_CLIP_INCENDIARY"):
					return 399;
					break;
				
				case joaat("component_at_ar_flsh"):
					return 400;
					break;
				
				case joaat("COMPONENT_AT_SIGHTS"):
					return 401;
					break;
				
				case joaat("COMPONENT_AT_SCOPE_MACRO_MK2"):
					return 402;
					break;
				
				case joaat("COMPONENT_AT_SCOPE_SMALL_MK2"):
					return 403;
					break;
				
				case joaat("COMPONENT_AT_SR_SUPP_03"):
					return 404;
					break;
				
				case joaat("COMPONENT_AT_MUZZLE_08"):
					return 405;
					break;
				
				case joaat("COMPONENT_PUMPSHOTGUN_MK2_CAMO"):
					return 488;
					break;
				
				case joaat("COMPONENT_PUMPSHOTGUN_MK2_CAMO_02"):
					return 489;
					break;
				
				case joaat("COMPONENT_PUMPSHOTGUN_MK2_CAMO_03"):
					return 490;
					break;
				
				case joaat("COMPONENT_PUMPSHOTGUN_MK2_CAMO_04"):
					return 491;
					break;
				
				case joaat("COMPONENT_PUMPSHOTGUN_MK2_CAMO_05"):
					return 492;
					break;
				
				case joaat("COMPONENT_PUMPSHOTGUN_MK2_CAMO_06"):
					return 493;
					break;
				
				case joaat("COMPONENT_PUMPSHOTGUN_MK2_CAMO_07"):
					return 494;
					break;
				
				case joaat("COMPONENT_PUMPSHOTGUN_MK2_CAMO_08"):
					return 495;
					break;
				
				case joaat("COMPONENT_PUMPSHOTGUN_MK2_CAMO_09"):
					return 496;
					break;
				
				case joaat("COMPONENT_PUMPSHOTGUN_MK2_CAMO_10"):
					return 497;
					break;
				
				case joaat("COMPONENT_PUMPSHOTGUN_MK2_CAMO_IND_01"):
					return 498;
					break;
			}
			break;
		
		case joaat("WEAPON_SPECIALCARBINE_MK2"):
			switch (iParam0)
			{
				case joaat("COMPONENT_SPECIALCARBINE_MK2_CLIP_01"):
					return 406;
					break;
				
				case joaat("COMPONENT_SPECIALCARBINE_MK2_CLIP_02"):
					return 407;
					break;
				
				case joaat("COMPONENT_SPECIALCARBINE_MK2_CLIP_ARMORPIERCING"):
					return 408;
					break;
				
				case joaat("COMPONENT_SPECIALCARBINE_MK2_CLIP_FMJ"):
					return 409;
					break;
				
				case joaat("COMPONENT_SPECIALCARBINE_MK2_CLIP_INCENDIARY"):
					return 410;
					break;
				
				case joaat("COMPONENT_SPECIALCARBINE_MK2_CLIP_TRACER"):
					return 411;
					break;
				
				case joaat("component_at_ar_flsh"):
					return 412;
					break;
				
				case joaat("COMPONENT_AT_SIGHTS"):
					return 413;
					break;
				
				case joaat("COMPONENT_AT_SCOPE_MACRO_MK2"):
					return 414;
					break;
				
				case joaat("COMPONENT_AT_SCOPE_MEDIUM_MK2"):
					return 415;
					break;
				
				case joaat("component_at_ar_supp_02"):
					return 416;
					break;
				
				case joaat("COMPONENT_AT_MUZZLE_01"):
					return 417;
					break;
				
				case joaat("COMPONENT_AT_MUZZLE_02"):
					return 418;
					break;
				
				case joaat("COMPONENT_AT_MUZZLE_03"):
					return 419;
					break;
				
				case joaat("COMPONENT_AT_MUZZLE_04"):
					return 420;
					break;
				
				case joaat("COMPONENT_AT_MUZZLE_05"):
					return 421;
					break;
				
				case joaat("COMPONENT_AT_MUZZLE_06"):
					return 422;
					break;
				
				case joaat("COMPONENT_AT_MUZZLE_07"):
					return 423;
					break;
				
				case joaat("COMPONENT_AT_AR_AFGRIP_02"):
					return 424;
					break;
				
				case joaat("COMPONENT_AT_SC_BARREL_01"):
					return 425;
					break;
				
				case joaat("COMPONENT_AT_SC_BARREL_02"):
					return 426;
					break;
				
				case joaat("COMPONENT_SPECIALCARBINE_MK2_CAMO"):
					return 532;
					break;
				
				case joaat("COMPONENT_SPECIALCARBINE_MK2_CAMO_02"):
					return 533;
					break;
				
				case joaat("COMPONENT_SPECIALCARBINE_MK2_CAMO_03"):
					return 534;
					break;
				
				case joaat("COMPONENT_SPECIALCARBINE_MK2_CAMO_04"):
					return 535;
					break;
				
				case joaat("COMPONENT_SPECIALCARBINE_MK2_CAMO_05"):
					return 536;
					break;
				
				case joaat("COMPONENT_SPECIALCARBINE_MK2_CAMO_06"):
					return 537;
					break;
				
				case joaat("COMPONENT_SPECIALCARBINE_MK2_CAMO_07"):
					return 538;
					break;
				
				case joaat("COMPONENT_SPECIALCARBINE_MK2_CAMO_08"):
					return 539;
					break;
				
				case joaat("COMPONENT_SPECIALCARBINE_MK2_CAMO_09"):
					return 540;
					break;
				
				case joaat("COMPONENT_SPECIALCARBINE_MK2_CAMO_10"):
					return 541;
					break;
				
				case joaat("COMPONENT_SPECIALCARBINE_MK2_CAMO_IND_01"):
					return 542;
					break;
			}
			break;
		
		case joaat("WEAPON_SNSPISTOL_MK2"):
			switch (iParam0)
			{
				case joaat("COMPONENT_SNSPISTOL_MK2_CLIP_01"):
					return 427;
					break;
				
				case joaat("COMPONENT_SNSPISTOL_MK2_CLIP_02"):
					return 428;
					break;
				
				case joaat("COMPONENT_SNSPISTOL_MK2_CLIP_FMJ"):
					return 429;
					break;
				
				case joaat("COMPONENT_SNSPISTOL_MK2_CLIP_HOLLOWPOINT"):
					return 430;
					break;
				
				case joaat("COMPONENT_SNSPISTOL_MK2_CLIP_INCENDIARY"):
					return 431;
					break;
				
				case joaat("COMPONENT_SNSPISTOL_MK2_CLIP_TRACER"):
					return 432;
					break;
				
				case joaat("COMPONENT_AT_PI_FLSH_03"):
					return 433;
					break;
				
				case joaat("COMPONENT_AT_PI_RAIL_02"):
					return 434;
					break;
				
				case joaat("component_at_pi_supp_02"):
					return 435;
					break;
				
				case joaat("COMPONENT_AT_PI_COMP_02"):
					return 436;
					break;
				
				case joaat("COMPONENT_SNSPISTOL_MK2_CAMO"):
					return 510;
					break;
				
				case joaat("COMPONENT_SNSPISTOL_MK2_CAMO_02"):
					return 511;
					break;
				
				case joaat("COMPONENT_SNSPISTOL_MK2_CAMO_03"):
					return 512;
					break;
				
				case joaat("COMPONENT_SNSPISTOL_MK2_CAMO_04"):
					return 513;
					break;
				
				case joaat("COMPONENT_SNSPISTOL_MK2_CAMO_05"):
					return 514;
					break;
				
				case joaat("COMPONENT_SNSPISTOL_MK2_CAMO_06"):
					return 515;
					break;
				
				case joaat("COMPONENT_SNSPISTOL_MK2_CAMO_07"):
					return 516;
					break;
				
				case joaat("COMPONENT_SNSPISTOL_MK2_CAMO_08"):
					return 517;
					break;
				
				case joaat("COMPONENT_SNSPISTOL_MK2_CAMO_09"):
					return 518;
					break;
				
				case joaat("COMPONENT_SNSPISTOL_MK2_CAMO_10"):
					return 519;
					break;
				
				case joaat("COMPONENT_SNSPISTOL_MK2_CAMO_IND_01"):
					return 520;
					break;
			}
			break;
		
		case joaat("WEAPON_MARKSMANRIFLE_MK2"):
			switch (iParam0)
			{
				case joaat("COMPONENT_MARKSMANRIFLE_MK2_CLIP_01"):
					return 437;
					break;
				
				case joaat("COMPONENT_MARKSMANRIFLE_MK2_CLIP_02"):
					return 438;
					break;
				
				case joaat("COMPONENT_MARKSMANRIFLE_MK2_CLIP_ARMORPIERCING"):
					return 439;
					break;
				
				case joaat("COMPONENT_MARKSMANRIFLE_MK2_CLIP_FMJ"):
					return 440;
					break;
				
				case joaat("COMPONENT_MARKSMANRIFLE_MK2_CLIP_INCENDIARY"):
					return 441;
					break;
				
				case joaat("COMPONENT_MARKSMANRIFLE_MK2_CLIP_TRACER"):
					return 442;
					break;
				
				case joaat("component_at_ar_flsh"):
					return 443;
					break;
				
				case joaat("COMPONENT_AT_SIGHTS"):
					return 444;
					break;
				
				case joaat("COMPONENT_AT_SCOPE_MEDIUM_MK2"):
					return 445;
					break;
				
				case joaat("COMPONENT_AT_SCOPE_LARGE_FIXED_ZOOM_MK2"):
					return 446;
					break;
				
				case joaat("component_at_ar_supp"):
					return 447;
					break;
				
				case joaat("COMPONENT_AT_MUZZLE_01"):
					return 448;
					break;
				
				case joaat("COMPONENT_AT_MUZZLE_02"):
					return 449;
					break;
				
				case joaat("COMPONENT_AT_MUZZLE_03"):
					return 450;
					break;
				
				case joaat("COMPONENT_AT_MUZZLE_04"):
					return 451;
					break;
				
				case joaat("COMPONENT_AT_MUZZLE_05"):
					return 452;
					break;
				
				case joaat("COMPONENT_AT_MUZZLE_06"):
					return 453;
					break;
				
				case joaat("COMPONENT_AT_MUZZLE_07"):
					return 454;
					break;
				
				case joaat("COMPONENT_AT_AR_AFGRIP_02"):
					return 455;
					break;
				
				case joaat("COMPONENT_AT_MRFL_BARREL_01"):
					return 456;
					break;
				
				case joaat("COMPONENT_AT_MRFL_BARREL_02"):
					return 457;
					break;
				
				case joaat("COMPONENT_MARKSMANRIFLE_MK2_CAMO"):
					return 521;
					break;
				
				case joaat("COMPONENT_MARKSMANRIFLE_MK2_CAMO_02"):
					return 522;
					break;
				
				case joaat("COMPONENT_MARKSMANRIFLE_MK2_CAMO_03"):
					return 523;
					break;
				
				case joaat("COMPONENT_MARKSMANRIFLE_MK2_CAMO_04"):
					return 524;
					break;
				
				case joaat("COMPONENT_MARKSMANRIFLE_MK2_CAMO_05"):
					return 525;
					break;
				
				case joaat("COMPONENT_MARKSMANRIFLE_MK2_CAMO_06"):
					return 526;
					break;
				
				case joaat("COMPONENT_MARKSMANRIFLE_MK2_CAMO_07"):
					return 527;
					break;
				
				case joaat("COMPONENT_MARKSMANRIFLE_MK2_CAMO_08"):
					return 528;
					break;
				
				case joaat("COMPONENT_MARKSMANRIFLE_MK2_CAMO_09"):
					return 529;
					break;
				
				case joaat("COMPONENT_MARKSMANRIFLE_MK2_CAMO_10"):
					return 530;
					break;
				
				case joaat("COMPONENT_MARKSMANRIFLE_MK2_CAMO_IND_01"):
					return 531;
					break;
			}
			break;
		
		case joaat("WEAPON_REVOLVER_MK2"):
			switch (iParam0)
			{
				case joaat("COMPONENT_REVOLVER_MK2_CLIP_01"):
					return 458;
					break;
				
				case joaat("COMPONENT_REVOLVER_MK2_CLIP_FMJ"):
					return 459;
					break;
				
				case joaat("COMPONENT_REVOLVER_MK2_CLIP_HOLLOWPOINT"):
					return 460;
					break;
				
				case joaat("COMPONENT_REVOLVER_MK2_CLIP_INCENDIARY"):
					return 461;
					break;
				
				case joaat("COMPONENT_REVOLVER_MK2_CLIP_TRACER"):
					return 462;
					break;
				
				case joaat("COMPONENT_AT_SIGHTS"):
					return 463;
					break;
				
				case joaat("COMPONENT_AT_SCOPE_MACRO_MK2"):
					return 464;
					break;
				
				case joaat("component_at_pi_flsh"):
					return 465;
					break;
				
				case joaat("COMPONENT_AT_PI_COMP_03"):
					return 466;
					break;
				
				case joaat("COMPONENT_REVOLVER_MK2_CAMO"):
					return 499;
					break;
				
				case joaat("COMPONENT_REVOLVER_MK2_CAMO_02"):
					return 500;
					break;
				
				case joaat("COMPONENT_REVOLVER_MK2_CAMO_03"):
					return 501;
					break;
				
				case joaat("COMPONENT_REVOLVER_MK2_CAMO_04"):
					return 502;
					break;
				
				case joaat("COMPONENT_REVOLVER_MK2_CAMO_05"):
					return 503;
					break;
				
				case joaat("COMPONENT_REVOLVER_MK2_CAMO_06"):
					return 504;
					break;
				
				case joaat("COMPONENT_REVOLVER_MK2_CAMO_07"):
					return 505;
					break;
				
				case joaat("COMPONENT_REVOLVER_MK2_CAMO_08"):
					return 506;
					break;
				
				case joaat("COMPONENT_REVOLVER_MK2_CAMO_09"):
					return 507;
					break;
				
				case joaat("COMPONENT_REVOLVER_MK2_CAMO_10"):
					return 508;
					break;
				
				case joaat("COMPONENT_REVOLVER_MK2_CAMO_IND_01"):
					return 509;
					break;
			}
			break;
		
		case joaat("WEAPON_BULLPUPRIFLE_MK2"):
			switch (iParam0)
			{
				case joaat("COMPONENT_BULLPUPRIFLE_MK2_CLIP_01"):
					return 467;
					break;
				
				case joaat("COMPONENT_BULLPUPRIFLE_MK2_CLIP_02"):
					return 468;
					break;
				
				case joaat("COMPONENT_BULLPUPRIFLE_MK2_CLIP_ARMORPIERCING"):
					return 469;
					break;
				
				case joaat("COMPONENT_BULLPUPRIFLE_MK2_CLIP_FMJ"):
					return 470;
					break;
				
				case joaat("COMPONENT_BULLPUPRIFLE_MK2_CLIP_INCENDIARY"):
					return 471;
					break;
				
				case joaat("COMPONENT_BULLPUPRIFLE_MK2_CLIP_TRACER"):
					return 472;
					break;
				
				case joaat("component_at_ar_flsh"):
					return 473;
					break;
				
				case joaat("COMPONENT_AT_SIGHTS"):
					return 474;
					break;
				
				case joaat("COMPONENT_AT_SCOPE_MACRO_02_MK2"):
					return 475;
					break;
				
				case joaat("COMPONENT_AT_SCOPE_SMALL_MK2"):
					return 476;
					break;
				
				case joaat("COMPONENT_AT_BP_BARREL_01"):
					return 477;
					break;
				
				case joaat("COMPONENT_AT_BP_BARREL_02"):
					return 478;
					break;
				
				case joaat("component_at_ar_supp"):
					return 479;
					break;
				
				case joaat("COMPONENT_AT_MUZZLE_01"):
					return 480;
					break;
				
				case joaat("COMPONENT_AT_MUZZLE_02"):
					return 481;
					break;
				
				case joaat("COMPONENT_AT_MUZZLE_03"):
					return 482;
					break;
				
				case joaat("COMPONENT_AT_MUZZLE_04"):
					return 483;
					break;
				
				case joaat("COMPONENT_AT_MUZZLE_05"):
					return 484;
					break;
				
				case joaat("COMPONENT_AT_MUZZLE_06"):
					return 485;
					break;
				
				case joaat("COMPONENT_AT_MUZZLE_07"):
					return 486;
					break;
				
				case joaat("COMPONENT_AT_AR_AFGRIP_02"):
					return 487;
					break;
				
				case joaat("COMPONENT_BULLPUPRIFLE_MK2_CAMO"):
					return 543;
					break;
				
				case joaat("COMPONENT_BULLPUPRIFLE_MK2_CAMO_02"):
					return 544;
					break;
				
				case joaat("COMPONENT_BULLPUPRIFLE_MK2_CAMO_03"):
					return 545;
					break;
				
				case joaat("COMPONENT_BULLPUPRIFLE_MK2_CAMO_04"):
					return 546;
					break;
				
				case joaat("COMPONENT_BULLPUPRIFLE_MK2_CAMO_05"):
					return 547;
					break;
				
				case joaat("COMPONENT_BULLPUPRIFLE_MK2_CAMO_06"):
					return 548;
					break;
				
				case joaat("COMPONENT_BULLPUPRIFLE_MK2_CAMO_07"):
					return 549;
					break;
				
				case joaat("COMPONENT_BULLPUPRIFLE_MK2_CAMO_08"):
					return 550;
					break;
				
				case joaat("COMPONENT_BULLPUPRIFLE_MK2_CAMO_09"):
					return 551;
					break;
				
				case joaat("COMPONENT_BULLPUPRIFLE_MK2_CAMO_10"):
					return 552;
					break;
				
				case joaat("COMPONENT_BULLPUPRIFLE_MK2_CAMO_IND_01"):
					return 553;
					break;
			}
			break;
		
		case joaat("WEAPON_RAYPISTOL"):
			switch (iParam0)
			{
				case joaat("COMPONENT_RAYPISTOL_VARMOD_XMAS18"):
					return 554;
					break;
			}
			break;
		
		case joaat("WEAPON_CERAMICPISTOL"):
			switch (iParam0)
			{
				case 1423184737:
					return 555;
					break;
				
				case -2122814295:
					return 556;
					break;
				
				case -1828202758:
					return 557;
					break;
			}
			break;
		
		case 94989220:
			switch (iParam0)
			{
				case -971688363:
					return 559;
				
				case joaat("component_at_ar_flsh"):
					return 560;
					break;
				
				case joaat("component_at_ar_supp"):
					return 561;
					break;
			}
			break;
		
		case -1658906650:
			switch (iParam0)
			{
				case 759617595:
					return 562;
					break;
				
				case 1749732930:
					return 563;
					break;
				
				case 1803744149:
					return 564;
					break;
				
				case joaat("component_at_scope_small"):
					return 565;
					break;
				
				case joaat("component_at_ar_flsh"):
					return 566;
					break;
				
				case joaat("component_at_ar_supp"):
					return 567;
					break;
			}
			break;
		
		case 1470379660:
			switch (iParam0)
			{
				case -1423479223:
					return 558;
					break;
			}
			break;
	}
	return 0;
}

var func_56(int iParam0, int iParam1, int iParam2)
{
	var uVar0;
	
	uVar0 = func_34(func_57(iParam0, iParam1), iParam2, 0);
	return uVar0;
}

int func_57(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_54(iParam0, iParam1);
	iVar1 = func_38(iVar0);
	if ((func_160() == 0 || func_37() == 0) || (func_160() == 999 && func_37() == 999))
	{
		switch (iVar1)
		{
			case 0:
				return 681;
				break;
			
			case 1:
				return 682;
				break;
			
			case 2:
				return 683;
				break;
			
			case 3:
				return 684;
				break;
			
			case 4:
				return 1751;
				break;
			
			case 5:
				return 2433;
				break;
			
			case 6:
				return 2825;
				break;
			
			case 7:
				return 5499;
				break;
			
			case 8:
				return 5503;
				break;
			
			case 9:
				return 5507;
			
			case 10:
				return 5620;
			
			case 11:
				return 5624;
				break;
			
			case 12:
				return 5628;
				break;
			
			case 13:
				return 5632;
				break;
			
			case 14:
				return 6371;
				break;
			
			case 15:
				return 6494;
				break;
			
			case 16:
				return 6514;
				break;
			
			case 17:
				return 6520;
				break;
		}
	}
	return 1751;
}

char* func_58(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	var uVar2;
	struct<7> Var3;
	
	if (iParam1 == joaat("weapon_knuckle"))
	{
		switch (iParam0)
		{
			case joaat("component_knuckle_varmod_base"):
				return "WT_KNUCKLE";
				break;
			
			case joaat("component_knuckle_varmod_pimp"):
				return "WCT_KNUCK_02";
				break;
			
			case joaat("component_knuckle_varmod_ballas"):
				return "WCT_KNUCK_BG";
				break;
			
			case joaat("component_knuckle_varmod_dollar"):
				return "WCT_KNUCK_DLR";
				break;
			
			case joaat("component_knuckle_varmod_diamond"):
				return "WCT_KNUCK_DMD";
				break;
			
			case joaat("component_knuckle_varmod_hate"):
				return "WCT_KNUCK_HT";
				break;
			
			case joaat("component_knuckle_varmod_love"):
				return "WCT_KNUCK_LV";
				break;
			
			case joaat("component_knuckle_varmod_player"):
				return "WCT_KNUCK_PC";
				break;
			
			case joaat("component_knuckle_varmod_king"):
				return "WCT_KNUCK_SLG";
				break;
			
			case joaat("component_knuckle_varmod_vagos"):
				return "WCT_KNUCK_VG";
				break;
			}
	}
	switch (iParam0)
	{
		case 0:
			return "WCT_NONE";
			break;
		
		case joaat("component_at_railcover_01"):
			return "WCT_RAIL";
			break;
		
		case joaat("component_at_ar_afgrip"):
			return "WCT_GRIP";
			break;
		
		case joaat("component_at_pi_flsh"):
			return "WCT_FLASH";
			break;
		
		case joaat("component_at_ar_flsh"):
			return "WCT_FLASH";
			break;
		
		case joaat("component_at_scope_macro"):
			return "WCT_SCOPE_MAC";
			break;
		
		case joaat("component_at_scope_macro_02"):
			return "WCT_SCOPE_MAC";
			break;
		
		case joaat("component_at_scope_small"):
			return "WCT_SCOPE_SML";
			break;
		
		case joaat("component_at_scope_small_02"):
			return "WCT_SCOPE_SML";
			break;
		
		case joaat("component_at_scope_medium"):
			return "WCT_SCOPE_MED";
			break;
		
		case joaat("component_at_scope_large"):
			return "WCT_SCOPE_LRG";
			break;
		
		case joaat("component_at_scope_max"):
			return "WCT_SCOPE_MAX";
			break;
		
		case joaat("component_at_pi_supp"):
			return "WCT_SUPP";
			break;
		
		case joaat("component_at_ar_supp"):
			return "WCT_SUPP";
			break;
		
		case joaat("component_at_ar_supp_02"):
			return "WCT_SUPP";
			break;
		
		case joaat("component_at_sr_supp"):
			return "WCT_SUPP";
			break;
		
		case joaat("component_pistol_clip_01"):
			return "WCT_CLIP1";
			break;
		
		case joaat("component_pistol_clip_02"):
			return "WCT_CLIP2";
			break;
		
		case joaat("component_combatpistol_clip_01"):
			return "WCT_CLIP1";
			break;
		
		case joaat("component_combatpistol_clip_02"):
			return "WCT_CLIP2";
			break;
		
		case joaat("component_appistol_clip_01"):
			return "WCT_CLIP1";
			break;
		
		case joaat("component_appistol_clip_02"):
			return "WCT_CLIP2";
			break;
		
		case joaat("component_microsmg_clip_01"):
			return "WCT_CLIP1";
			break;
		
		case joaat("component_microsmg_clip_02"):
			return "WCT_CLIP2";
			break;
		
		case joaat("component_smg_clip_01"):
			return "WCT_CLIP1";
			break;
		
		case joaat("component_smg_clip_02"):
			return "WCT_CLIP2";
			break;
		
		case joaat("component_assaultrifle_clip_01"):
			return "WCT_CLIP1";
			break;
		
		case joaat("component_assaultrifle_clip_02"):
			return "WCT_CLIP2";
			break;
		
		case joaat("component_carbinerifle_clip_01"):
			return "WCT_CLIP1";
			break;
		
		case joaat("component_carbinerifle_clip_02"):
			return "WCT_CLIP2";
			break;
		
		case joaat("component_advancedrifle_clip_01"):
			return "WCT_CLIP1";
			break;
		
		case joaat("component_advancedrifle_clip_02"):
			return "WCT_CLIP2";
			break;
		
		case joaat("component_mg_clip_01"):
			return "WCT_CLIP1";
			break;
		
		case joaat("component_mg_clip_02"):
			return "WCT_CLIP2";
			break;
		
		case joaat("component_combatmg_clip_01"):
			return "WCT_CLIP1";
			break;
		
		case joaat("component_combatmg_clip_02"):
			return "WCT_CLIP2";
			break;
		
		case joaat("component_assaultshotgun_clip_01"):
			return "WCT_CLIP1";
			break;
		
		case joaat("component_assaultshotgun_clip_02"):
			return "WCT_CLIP2";
			break;
		
		case joaat("component_sniperrifle_clip_01"):
			return "WCT_CLIP1";
			break;
		
		case joaat("component_heavysniper_clip_01"):
			return "WCT_CLIP1";
			break;
		
		case joaat("component_minigun_clip_01"):
			return "WCT_CLIP2";
			break;
		
		case joaat("component_assaultsmg_clip_01"):
			return "WCT_CLIP1";
			break;
		
		case joaat("component_assaultsmg_clip_02"):
			return "WCT_CLIP2";
			break;
		
		case joaat("component_pistol50_clip_01"):
			return "WCT_CLIP1";
			break;
		
		case joaat("component_pistol50_clip_02"):
			return "WCT_CLIP2";
			break;
		
		case 195735895:
			return "WCT_CLIP1";
			break;
		
		case 1525977990:
			return "WCT_CLIP1";
			break;
		
		case 1824470811:
			return "WCT_CLIP2";
			break;
		
		case -890514874:
			return "WCT_CLIP1";
			break;
		
		case -507117574:
			return "WCT_CLIP2";
			break;
		
		case -124428919:
			return "WCT_CLIP1";
			break;
		
		case 1048471894:
			return "WCT_CLIP2";
			break;
		
		case joaat("component_snspistol_clip_01"):
			return "WCT_CLIP1";
			break;
		
		case joaat("component_snspistol_clip_02"):
			return "WCT_CLIP2";
			break;
		
		case joaat("component_vintagepistol_clip_01"):
			return "WCT_CLIP1";
			break;
		
		case joaat("component_vintagepistol_clip_02"):
			return "WCT_CLIP2";
			break;
		
		case joaat("component_heavyshotgun_clip_01"):
			return "WCT_CLIP1";
			break;
		
		case joaat("component_marksmanrifle_clip_01"):
			return "WCT_CLIP1";
			break;
		
		case joaat("component_heavyshotgun_clip_02"):
			return "WCT_CLIP2";
			break;
		
		case joaat("component_marksmanrifle_clip_02"):
			return "WCT_CLIP2";
			break;
		
		case joaat("component_at_scope_large_fixed_zoom"):
			return "WCT_SCOPE_LRG";
			break;
		
		case joaat("component_at_pi_supp_02"):
			return "WCT_SUPP";
			break;
		
		case joaat("component_combatpdw_clip_01"):
			return "WCT_CLIP1";
			break;
		
		case joaat("component_combatpdw_clip_02"):
			return "WCT_CLIP2";
			break;
		
		case joaat("component_marksmanpistol_clip_01"):
			return "WCT_CLIP1";
			break;
		
		case joaat("component_machinepistol_clip_01"):
			return "WCT_CLIP1";
			break;
		
		case joaat("component_machinepistol_clip_02"):
			return "WCT_CLIP2";
			break;
		
		case joaat("component_assaultrifle_varmod_luxe"):
			return "WCT_VAR_GOLD";
			break;
		
		case joaat("component_advancedrifle_varmod_luxe"):
			return "WCT_VAR_METAL";
			break;
		
		case joaat("component_carbinerifle_varmod_luxe"):
			return "WCT_VAR_GOLD";
			break;
		
		case joaat("component_appistol_varmod_luxe"):
			return "WCT_VAR_METAL";
			break;
		
		case joaat("component_pistol_varmod_luxe"):
			return "WCT_VAR_GOLD";
			break;
		
		case joaat("component_pistol50_varmod_luxe"):
			return "WCT_VAR_SIL";
			break;
		
		case joaat("component_heavypistol_varmod_luxe"):
			return "WCT_VAR_WOOD";
			break;
		
		case joaat("component_smg_varmod_luxe"):
			return "WCT_VAR_GOLD";
			break;
		
		case joaat("component_microsmg_varmod_luxe"):
			return "WCT_VAR_GOLD";
			break;
		
		case joaat("component_sawnoffshotgun_varmod_luxe"):
			return "WCT_VAR_METAL";
			break;
		
		case joaat("component_sniperrifle_varmod_luxe"):
			return "WCT_VAR_WOOD";
			break;
		
		case joaat("component_marksmanrifle_varmod_luxe"):
			return "WCT_VAR_GOLD";
			break;
		
		case joaat("component_assaultsmg_varmod_lowrider"):
			return "WCT_VAR_GOLD";
			break;
		
		case joaat("component_bullpuprifle_varmod_low"):
			return "WCT_VAR_METAL";
			break;
		
		case joaat("component_combatmg_varmod_lowrider"):
			return "WCT_VAR_ETCHM";
			break;
		
		case joaat("component_combatpistol_varmod_lowrider"):
			return "WCT_VAR_GOLD";
			break;
		
		case joaat("component_mg_varmod_lowrider"):
			return "WCT_VAR_GOLD";
			break;
		
		case joaat("component_pumpshotgun_varmod_lowrider"):
			return "WCT_VAR_GOLD";
			break;
		
		case joaat("component_snspistol_varmod_lowrider"):
			return "WCT_VAR_WOOD";
			break;
		
		case joaat("component_specialcarbine_varmod_lowrider"):
			return "WCT_VAR_ETCHM";
			break;
		
		case joaat("component_switchblade_varmod_base"):
			return "WCT_SB_BASE";
			break;
		
		case joaat("component_switchblade_varmod_var1"):
			return "WCT_SB_VAR1";
			break;
		
		case joaat("component_switchblade_varmod_var2"):
			return "WCT_SB_VAR2";
			break;
		
		case joaat("component_revolver_clip_01"):
			return "WCT_CLIP1";
			break;
		
		case joaat("component_revolver_varmod_boss"):
			return "WCT_REV_VARB";
			break;
		
		case joaat("component_revolver_varmod_goon"):
			return "WCT_REV_VARG";
			break;
		
		case joaat("component_smg_clip_03"):
			return "WCT_CLIP_DRM";
			break;
		
		case joaat("component_carbinerifle_clip_03"):
			return "WCT_CLIP_BOX";
			break;
		
		case joaat("component_assaultrifle_clip_03"):
			return "WCT_CLIP_DRM";
			break;
		
		case joaat("component_heavyshotgun_clip_03"):
			return "WCT_CLIP_DRM";
			break;
		
		case 1623028892:
			return "WCT_VAR_GUN";
			break;
		
		case joaat("COMPONENT_MARKSMANRIFLE_MK2_CAMO_IND_01"):
			return "WCT_CAMO_IND";
			break;
		
		case joaat("COMPONENT_SNSPISTOL_MK2_CAMO_IND_01"):
			return "WCT_CAMO_IND";
			break;
		
		case joaat("COMPONENT_SNSPISTOL_MK2_CLIP_02"):
			return "WCT_CLIP2";
			break;
		
		case joaat("COMPONENT_AT_SCOPE_MACRO_02_MK2"):
			return "WCT_SCOPE_MAC2";
			break;
		
		case joaat("COMPONENT_AT_SCOPE_SMALL_MK2"):
			return "WCT_SCOPE_SML2";
			break;
		
		case joaat("COMPONENT_RAYPISTOL_VARMOD_XMAS18"):
			return "WCT_VAR_RAY18";
			break;
		
		case 1423184737:
			return "WCT_CLIP1";
			break;
		
		case -2122814295:
			return "WCT_CLIP2";
			break;
		
		case -1828202758:
			return "WCT_SUPP";
			break;
		
		default:
			if (iParam1 != 0)
			{
				iVar0 = func_28(iParam1, &uVar2);
				if (iVar0 != -1)
				{
					iVar1 = 0;
					while (iVar1 < unk_0x4C70B0C3D1E97438(iVar0))
					{
						if (unk_0xF4545E3991F419DA(iVar0, iVar1, &Var3))
						{
							if (Var3.f_3 == iParam0)
							{
								return func_27(&(Var3.f_6));
							}
						}
						iVar1++;
					}
				}
			}
			break;
	}
	return "WCT_INVALID";
}

void func_59(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		if (!func_64(iParam0, iParam1, -1))
		{
			func_60(iParam0, iParam1, 1);
		}
	}
	else if (func_64(iParam0, iParam1, -1))
	{
		func_60(iParam0, iParam1, 0);
	}
}

void func_60(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_63(iParam0, iParam1, -1);
	iVar1 = func_54(iParam0, iParam1);
	if (iVar1 > -1)
	{
		if (bParam2)
		{
			unk_0xBE20AB8238688965(&iVar0, func_30(iVar1));
		}
		else
		{
			unk_0xD2459066EA58CE43(&iVar0, func_30(iVar1));
		}
		func_61(func_62(iParam0, iParam1), iVar0, -1, 1, 0);
	}
}

void func_61(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	int iVar0;
	
	if (bParam4)
	{
	}
	iVar0 = Global_2551832[iParam0 /*3*/][func_35(iParam2)];
	if (iVar0 != 0)
	{
		unk_0x6000E4684CB4330B(iVar0, iParam1, iParam3);
	}
}

int func_62(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_54(iParam0, iParam1);
	iVar1 = func_38(iVar0);
	if ((func_160() == 0 || func_37() == 0) || (func_160() == 999 && func_37() == 999))
	{
		switch (iVar1)
		{
			case 0:
				return 687;
				break;
			
			case 1:
				return 688;
				break;
			
			case 2:
				return 689;
				break;
			
			case 3:
				return 690;
				break;
			
			case 4:
				return 1754;
				break;
			
			case 5:
				return 2436;
				break;
			
			case 6:
				return 2828;
				break;
			
			case 7:
				return 5502;
				break;
			
			case 8:
				return 5506;
				break;
			
			case 9:
				return 5510;
				break;
			
			case 10:
				return 5623;
				break;
			
			case 11:
				return 5627;
				break;
			
			case 12:
				return 5631;
				break;
			
			case 13:
				return 5635;
				break;
			
			case 14:
				return 6374;
				break;
			
			case 15:
				return 6497;
				break;
			
			case 16:
				return 6517;
				break;
			
			case 17:
				return 6523;
				break;
		}
	}
	return 1754;
}

var func_63(int iParam0, int iParam1, int iParam2)
{
	var uVar0;
	
	uVar0 = func_34(func_62(iParam0, iParam1), iParam2, 0);
	return uVar0;
}

bool func_64(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	
	if (func_41())
	{
		return 0;
	}
	iVar0 = func_63(iParam0, iParam1, iParam2);
	iVar1 = func_54(iParam0, iParam1);
	return unk_0xCE990E643CD9D0E5(iVar0, func_30(iVar1));
}

void func_65(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		if (!func_94(iParam0, iParam1, -1))
		{
			func_66(iParam0, iParam1, 1);
		}
	}
	else if (func_94(iParam0, iParam1, -1))
	{
		func_66(iParam0, iParam1, 0);
	}
}

void func_66(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_68(iParam0, iParam1, -1);
	iVar1 = func_54(iParam0, iParam1);
	if (iVar1 > -1)
	{
		if (bParam2)
		{
			unk_0xBE20AB8238688965(&iVar0, func_30(iVar1));
		}
		else
		{
			unk_0xD2459066EA58CE43(&iVar0, func_30(iVar1));
		}
		func_61(func_67(iParam0, iParam1), iVar0, -1, 1, 0);
	}
}

int func_67(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_54(iParam0, iParam1);
	iVar1 = func_38(iVar0);
	if ((func_160() == 0 || func_37() == 0) || (func_160() == 999 && func_37() == 999))
	{
		switch (iVar1)
		{
			case 0:
				return 810;
				break;
			
			case 1:
				return 811;
				break;
			
			case 2:
				return 812;
				break;
			
			case 3:
				return 813;
				break;
			
			case 4:
				return 1752;
				break;
			
			case 5:
				return 2434;
				break;
			
			case 6:
				return 2826;
				break;
			
			case 7:
				return 5500;
				break;
			
			case 8:
				return 5504;
				break;
			
			case 9:
				return 5508;
				break;
			
			case 10:
				return 5621;
				break;
			
			case 11:
				return 5625;
				break;
			
			case 12:
				return 5629;
				break;
			
			case 13:
				return 5633;
				break;
			
			case 14:
				return 6372;
				break;
			
			case 15:
				return 6495;
				break;
			
			case 16:
				return 6515;
				break;
			
			case 17:
				return 6521;
				break;
			}
	}
	return 11771;
}

var func_68(int iParam0, int iParam1, int iParam2)
{
	var uVar0;
	
	uVar0 = func_34(func_67(iParam0, iParam1), iParam2, 0);
	return uVar0;
}

void func_69(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	if (bParam2)
	{
		if (!func_53(iParam0, iParam1, -1))
		{
			func_84(iParam0, iParam1, 1);
		}
		if (bParam3)
		{
			if (func_82(iParam0, iParam1) == 0)
			{
				func_77(16, func_58(iParam0, 0), func_81(iParam0, 0), func_80(iParam1), func_79(iParam1), -1, 0, 0, 0, -1, 0);
				func_75(iParam0, iParam1, 1);
			}
		}
		if (bParam4)
		{
			func_70(iParam0, iParam1, 1);
		}
	}
	else if (func_53(iParam0, iParam1, -1))
	{
		func_84(iParam0, iParam1, 0);
	}
}

void func_70(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		if (!func_74(iParam0, iParam1, -1))
		{
			func_71(iParam0, iParam1, 1);
		}
	}
	else if (func_74(iParam0, iParam1, -1))
	{
		func_71(iParam0, iParam1, 0);
	}
}

void func_71(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_73(iParam0, iParam1, -1);
	iVar1 = func_54(iParam0, iParam1);
	if (iVar1 > -1)
	{
		if (bParam2)
		{
			unk_0xBE20AB8238688965(&iVar0, func_30(iVar1));
		}
		else
		{
			unk_0xD2459066EA58CE43(&iVar0, func_30(iVar1));
		}
		func_61(func_72(iParam0, iParam1), iVar0, -1, 1, 0);
	}
}

int func_72(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_54(iParam0, iParam1);
	iVar1 = func_38(iVar0);
	if ((func_160() == 0 || func_37() == 0) || (func_160() == 999 && func_37() == 999))
	{
		switch (iVar1)
		{
			case 0:
				return 654;
				break;
			
			case 1:
				return 655;
				break;
			
			case 2:
				return 656;
				break;
			
			case 3:
				return 657;
				break;
			
			case 4:
				return 1753;
				break;
			
			case 5:
				return 2435;
				break;
			
			case 6:
				return 2827;
				break;
			
			case 7:
				return 5501;
				break;
			
			case 8:
				return 5505;
				break;
			
			case 9:
				return 5509;
				break;
			
			case 10:
				return 5622;
				break;
			
			case 11:
				return 5626;
				break;
			
			case 12:
				return 5630;
				break;
			
			case 13:
				return 5634;
				break;
			
			case 14:
				return 6373;
				break;
			
			case 15:
				return 6496;
				break;
			
			case 16:
				return 6516;
				break;
			
			case 17:
				return 6522;
				break;
		}
	}
	return 11771;
}

var func_73(int iParam0, int iParam1, int iParam2)
{
	var uVar0;
	
	uVar0 = func_34(func_72(iParam0, iParam1), iParam2, 0);
	return uVar0;
}

bool func_74(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	
	if (func_41())
	{
		return 0;
	}
	iVar0 = func_73(iParam0, iParam1, iParam2);
	iVar1 = func_54(iParam0, iParam1);
	return unk_0xCE990E643CD9D0E5(iVar0, func_30(iVar1));
}

void func_75(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = func_54(iParam0, iParam1);
	if (iVar0 > -1)
	{
		if (bParam2)
		{
			unk_0xBE20AB8238688965(&(Global_2550458.f_991[func_76(iParam0, iParam1)]), func_30(iVar0));
		}
		else
		{
			unk_0xD2459066EA58CE43(&(Global_2550458.f_991[func_76(iParam0, iParam1)]), func_30(iVar0));
		}
	}
}

int func_76(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = func_54(iParam0, iParam1);
	switch (func_38(iVar0))
	{
		case 0:
			return 0;
			break;
		
		case 1:
			return 1;
			break;
		
		case 2:
			return 2;
			break;
		
		case 3:
			return 3;
		
		case 4:
			return 4;
		
		case 5:
			return 5;
		
		case 6:
			return 6;
		
		case 7:
			return 7;
			break;
		
		case 8:
			return 8;
			break;
		
		case 9:
			return 9;
		
		case 10:
			return 10;
		
		case 11:
			return 11;
			break;
		
		case 12:
			return 12;
			break;
		
		case 13:
			return 13;
			break;
		
		case 14:
			return 14;
			break;
	}
	return 0;
}

void func_77(int iParam0, char* sParam1, char* sParam2, char* sParam3, char* sParam4, int iParam5, int iParam6, int iParam7, char* sParam8, int iParam9, int iParam10)
{
	int iVar0;
	
	iVar0 = func_78(&Global_1385106);
	Global_1385106[iVar0 /*106*/] = iParam0;
	StringCopy(&(Global_1385106[iVar0 /*106*/].f_17), sParam3, 64);
	StringCopy(&(Global_1385106[iVar0 /*106*/].f_1), sParam4, 64);
	StringCopy(&(Global_1385106[iVar0 /*106*/].f_33), sParam1, 64);
	StringCopy(&(Global_1385106[iVar0 /*106*/].f_49), sParam2, 64);
	Global_1385106[iVar0 /*106*/].f_97 = iParam5;
	Global_1385106[iVar0 /*106*/].f_104 = iParam9;
	Global_1385106[iVar0 /*106*/].f_105 = iParam10;
	if (iParam6 != 0)
	{
	}
	if (iParam7 != 0)
	{
	}
	if (!unk_0x7BCC91F3C1CF24E8(sParam8))
	{
		StringCopy(&(Global_1385106[iVar0 /*106*/].f_98), sParam8, 24);
	}
}

int func_78(var uParam0)
{
	int iVar0;
	int iVar1;
	
	iVar1 = 0;
	while (iVar1 <= 9)
	{
		if ((*uParam0)[iVar1 /*106*/] == 0)
		{
			iVar0 = iVar1;
			iVar1 = 10;
		}
		iVar1++;
	}
	return iVar0;
}

char* func_79(int iParam0)
{
	switch (iParam0)
	{
		case joaat("weapon_knife"):
			return "MPWeaponsUnusedForNow";
			break;
		
		case joaat("weapon_stungun"):
			return "MPWeaponsGang0_small";
			break;
		
		case joaat("weapon_pistol"):
			return "MPWeaponsGang1_small";
			break;
		
		case joaat("weapon_appistol"):
			return "MPWeaponsGang1_small";
			break;
		
		case joaat("gadget_parachute"):
			return "MPWeaponsGang1_small";
			break;
		
		case joaat("weapon_smg"):
			return "MPWeaponsGang0_small";
			break;
		
		case joaat("weapon_sniperrifle"):
			return "MPWeaponsGang0_small";
			break;
		
		case joaat("weapon_carbinerifle"):
			return "MPWeaponsGang0_small";
			break;
		
		case joaat("weapon_specialcarbine"):
			return "MPWeaponsCommon_small";
			break;
		
		case joaat("weapon_snspistol"):
			return "MPWeaponsCommon_small";
			break;
		
		case joaat("weapon_pumpshotgun"):
			return "MPWeaponsCommon_small";
			break;
		
		case joaat("weapon_grenade"):
			return "MPWeaponsGang0_small";
			break;
		
		case joaat("weapon_stickybomb"):
			return "MPWeaponsCommon_small";
			break;
		
		case joaat("weapon_grenadelauncher"):
			return "MPWeaponsCommon_small";
			break;
		
		case joaat("weapon_combatmg"):
			return "MPWeaponsGang0_small";
			break;
		
		case joaat("weapon_assaultshotgun"):
			return "MPWeaponsCommon_small";
			break;
		
		case joaat("weapon_rpg"):
			return "MPWeaponsCommon_small";
			break;
		
		case joaat("weapon_heavysniper"):
			return "MPWeaponsGang0_small";
			break;
		
		case joaat("weapon_advancedrifle"):
			return "MPWeaponsGang0_small";
			break;
		
		case joaat("weapon_microsmg"):
			return "MPWeaponsCommon_small";
			break;
		
		case joaat("weapon_assaultrifle"):
			return "MPWeaponsGang1_small";
			break;
		
		case joaat("weapon_mg"):
			return "MPWeaponsGang1_small";
			break;
		
		case joaat("weapon_sawnoffshotgun"):
			return "MPWeaponsGang1_small";
			break;
		
		case joaat("weapon_minigun"):
			return "MPWeaponsGang1_small";
			break;
		
		case joaat("weapon_combatpistol"):
			return "MPWeaponsCommon_small";
			break;
		
		case joaat("weapon_smokegrenade"):
			return "MPWeaponsCommon_small";
			break;
		
		case joaat("AMMO_SPACE_ROCKET"):
			return "MPWeaponsCommon_small";
			break;
		
		case joaat("vehicle_weapon_space_rocket"):
			return "MPWeaponsCommon_small";
			break;
		
		case joaat("weapon_molotov"):
			return "MPWeaponsUnusedForNow";
			break;
		
		case joaat("weapon_petrolcan"):
			return "MPWeaponsUnusedForNow";
			break;
	}
	return "";
}

char* func_80(int iParam0)
{
	switch (iParam0)
	{
		case joaat("weapon_knife"):
			return "W_ME_KNIFE_01";
			break;
		
		case joaat("weapon_stungun"):
			return "W_PI_Stungun";
			break;
		
		case joaat("weapon_pistol"):
			return "W_PI_Pistol";
			break;
		
		case joaat("gadget_parachute"):
			return "Parachute_Main";
			break;
		
		case joaat("weapon_smg"):
			return "W_SB_SMG";
			break;
		
		case joaat("weapon_sniperrifle"):
			return "W_SR_SniperRifle";
			break;
		
		case joaat("weapon_carbinerifle"):
			return "W_AR_CarbineRifle";
			break;
		
		case joaat("weapon_specialcarbine"):
			return "W_AR_DLC_SpecialCarbine";
			break;
		
		case joaat("weapon_snspistol"):
			return "W_AR_DLC_SNSPISTOL";
			break;
		
		case joaat("weapon_pumpshotgun"):
			return "W_SG_PumpShotgun";
			break;
		
		case joaat("weapon_grenade"):
			return "W_Ex_GrenadeFrag";
			break;
		
		case joaat("weapon_stickybomb"):
			return "W_Ex_PE";
			break;
		
		case joaat("weapon_grenadelauncher"):
			return "W_R_GrenadeLauncher";
			break;
		
		case joaat("weapon_combatmg"):
			return "W_MG_CombatMG";
			break;
		
		case joaat("weapon_assaultshotgun"):
			return "W_SG_AssaultShotgun";
			break;
		
		case joaat("weapon_appistol"):
			return "W_PI_AppPistol";
			break;
		
		case joaat("weapon_rpg"):
			return "W_LR_RPG";
			break;
		
		case joaat("weapon_heavysniper"):
			return "W_SR_HeavySniper";
			break;
		
		case joaat("weapon_advancedrifle"):
			return "W_AR_AdvancedRifle";
			break;
		
		case joaat("weapon_microsmg"):
			return "W_SB_MicroSMG";
			break;
		
		case joaat("weapon_assaultrifle"):
			return "W_AR_AssaultRifle";
			break;
		
		case joaat("weapon_mg"):
			return "W_MG_MG";
			break;
		
		case joaat("weapon_sawnoffshotgun"):
			return "W_SG_SAWNOFF";
			break;
		
		case joaat("weapon_minigun"):
			return "W_MG_Minigun";
			break;
		
		case joaat("weapon_combatpistol"):
			return "W_PI_CombatPistol";
			break;
		
		case joaat("weapon_smokegrenade"):
			return "W_Ex_GrenadeSmoke";
			break;
		
		case joaat("weapon_petrolcan"):
			return "W_AM_Jerrycan";
			break;
		
		case joaat("weapon_molotov"):
			return "W_EX_Molotov";
			break;
		
		case joaat("AMMO_SPACE_ROCKET"):
			return "rocket";
			break;
		
		case joaat("vehicle_weapon_space_rocket"):
			return "rocket";
			break;
	}
	return "";
}

char* func_81(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	var uVar2;
	struct<15> Var3;
	
	switch (iParam0)
	{
		case 0:
			return "WCD_NONE";
			break;
		
		case joaat("component_at_railcover_01"):
			return "WCD_AT_RAIL";
			break;
		
		case joaat("component_at_ar_afgrip"):
			return "WCD_GRIP";
			break;
		
		case joaat("component_at_pi_flsh"):
			return "WCD_FLASH";
			break;
		
		case joaat("component_at_ar_flsh"):
			return "WCD_FLASH";
			break;
		
		case joaat("component_at_scope_macro"):
			return "WCD_SCOPE_MAC";
			break;
		
		case joaat("component_at_scope_macro_02"):
			return "WCD_SCOPE_MAC";
			break;
		
		case joaat("component_at_scope_small"):
			return "WCD_SCOPE_SML";
			break;
		
		case joaat("component_at_scope_small_02"):
			return "WCD_SCOPE_SML";
			break;
		
		case joaat("component_at_scope_medium"):
			return "WCD_SCOPE_MED";
			break;
		
		case joaat("component_at_scope_large"):
			return "WCD_SCOPE_LRG";
			break;
		
		case joaat("component_at_scope_max"):
			return "WCD_SCOPE_MAX";
			break;
		
		case joaat("component_at_pi_supp"):
			return "WCD_PI_SUPP";
			break;
		
		case joaat("component_at_pi_supp_02"):
			return "WCD_PI_SUPP";
			break;
		
		case joaat("component_at_ar_supp"):
			return "WCD_AR_SUPP";
			break;
		
		case joaat("component_at_ar_supp_02"):
			return "WCD_AR_SUPP2";
			break;
		
		case joaat("component_at_sr_supp"):
			return "WCD_SR_SUPP";
			break;
		
		case joaat("component_pistol_clip_01"):
			return "WCD_P_CLIP1";
			break;
		
		case joaat("component_pistol_clip_02"):
			return "WCD_P_CLIP2";
			break;
		
		case joaat("component_combatpistol_clip_01"):
			return "WCD_CP_CLIP1";
			break;
		
		case joaat("component_combatpistol_clip_02"):
			return "WCD_CP_CLIP2";
			break;
		
		case joaat("component_appistol_clip_01"):
			return "WCD_AP_CLIP1";
			break;
		
		case joaat("component_appistol_clip_02"):
			return "WCD_AP_CLIP2";
			break;
		
		case joaat("component_microsmg_clip_01"):
			return "WCDMSMG_CLIP1";
			break;
		
		case joaat("component_microsmg_clip_02"):
			return "WCDMSMG_CLIP2";
			break;
		
		case joaat("component_smg_clip_01"):
			return "WCD_SMG_CLIP1";
			break;
		
		case joaat("component_smg_clip_02"):
			return "WCD_SMG_CLIP2";
			break;
		
		case joaat("component_assaultrifle_clip_01"):
			return "WCD_AR_CLIP1";
			break;
		
		case joaat("component_assaultrifle_clip_02"):
			return "WCD_AR_CLIP2";
			break;
		
		case joaat("component_carbinerifle_clip_01"):
			return "WCD_CR_CLIP1";
			break;
		
		case joaat("component_carbinerifle_clip_02"):
			return "WCD_CR_CLIP2";
			break;
		
		case joaat("component_advancedrifle_clip_01"):
			return "WCD_ADR_CLIP1";
			break;
		
		case joaat("component_advancedrifle_clip_02"):
			return "WCD_ADR_CLIP2";
			break;
		
		case joaat("component_mg_clip_01"):
			return "WCD_MG_CLIP1";
			break;
		
		case joaat("component_mg_clip_02"):
			return "WCD_MG_CLIP2";
			break;
		
		case joaat("component_combatmg_clip_01"):
			return "WCDCMG_CLIP1";
			break;
		
		case joaat("component_combatmg_clip_02"):
			return "WCDCMG_CLIP2";
			break;
		
		case joaat("component_assaultshotgun_clip_01"):
			return "WCD_AS_CLIP1";
			break;
		
		case joaat("component_assaultshotgun_clip_02"):
			return "WCD_AS_CLIP2";
			break;
		
		case joaat("component_sniperrifle_clip_01"):
			return "WCD_SR_CLIP1";
			break;
		
		case joaat("component_heavysniper_clip_01"):
			return "WCD_HS_CLIP1";
			break;
		
		case joaat("component_minigun_clip_01"):
			return "WCD_MIG_CLIP2";
			break;
		
		case joaat("component_assaultsmg_clip_01"):
			return "WCD_ASMG_CLIP1";
			break;
		
		case joaat("component_assaultsmg_clip_02"):
			return "WCD_ASMG_CLIP2";
			break;
		
		case joaat("component_pistol50_clip_01"):
			return "WCD_P50_CLIP1";
			break;
		
		case joaat("component_pistol50_clip_02"):
			return "WCD_P50_CLIP2";
			break;
		
		case joaat("component_assaultrifle_varmod_luxe"):
			return "WCD_VAR_AR";
			break;
		
		case joaat("component_advancedrifle_varmod_luxe"):
			return "WCD_VAR_ADR";
			break;
		
		case joaat("component_carbinerifle_varmod_luxe"):
			return "WCD_VAR_CR";
			break;
		
		case joaat("component_appistol_varmod_luxe"):
			return "WCD_VAR_AP";
			break;
		
		case joaat("component_pistol_varmod_luxe"):
			return "WCD_VAR_P";
			break;
		
		case joaat("component_pistol50_varmod_luxe"):
			return "WCD_VAR_P50";
			break;
		
		case joaat("component_heavypistol_varmod_luxe"):
			return "WCD_VAR_HPST";
			break;
		
		case joaat("component_smg_varmod_luxe"):
			return "WCD_VAR_SMG";
			break;
		
		case joaat("component_microsmg_varmod_luxe"):
			return "WCD_VAR_MSMG";
			break;
		
		case joaat("component_sawnoffshotgun_varmod_luxe"):
			return "WCD_VAR_SOF";
			break;
		
		case joaat("component_sniperrifle_varmod_luxe"):
			return "WCD_VAR_SNP";
			break;
		
		case joaat("component_marksmanrifle_varmod_luxe"):
			return "WCD_VAR_MKRF";
			break;
		
		case joaat("component_knuckle_varmod_pimp"):
			return "WCD_VAR_DESC";
			break;
		
		case joaat("component_knuckle_varmod_ballas"):
			return "WCD_VAR_DESC";
			break;
		
		case joaat("component_knuckle_varmod_dollar"):
			return "WCD_VAR_DESC";
			break;
		
		case joaat("component_knuckle_varmod_diamond"):
			return "WCD_VAR_DESC";
			break;
		
		case joaat("component_knuckle_varmod_hate"):
			return "WCD_VAR_DESC";
			break;
		
		case joaat("component_knuckle_varmod_love"):
			return "WCD_VAR_DESC";
			break;
		
		case joaat("component_knuckle_varmod_player"):
			return "WCD_VAR_DESC";
			break;
		
		case joaat("component_knuckle_varmod_king"):
			return "WCD_VAR_DESC";
			break;
		
		case joaat("component_knuckle_varmod_vagos"):
			return "WCD_VAR_DESC";
			break;
		
		case joaat("component_assaultsmg_varmod_lowrider"):
			return "WCD_VAR_ASMG";
			break;
		
		case joaat("component_bullpuprifle_varmod_low"):
			return "WCD_VAR_BPR";
			break;
		
		case joaat("component_combatmg_varmod_lowrider"):
			return "WCD_VAR_CBMG";
			break;
		
		case joaat("component_combatpistol_varmod_lowrider"):
			return "WCD_VAR_CBP";
			break;
		
		case joaat("component_mg_varmod_lowrider"):
			return "WCD_VAR_MG";
			break;
		
		case joaat("component_pumpshotgun_varmod_lowrider"):
			return "WCD_VAR_PSHT";
			break;
		
		case joaat("component_snspistol_varmod_lowrider"):
			return "WCD_VAR_SNS";
			break;
		
		case joaat("component_specialcarbine_varmod_lowrider"):
			return "WCD_VAR_SCAR";
			break;
		
		case joaat("component_switchblade_varmod_var1"):
			return "WCD_VAR_DESC";
			break;
		
		case joaat("component_switchblade_varmod_var2"):
			return "WCD_VAR_DESC";
			break;
		
		case joaat("component_revolver_clip_01"):
			return "WCD_P_CLIP1";
			break;
		
		case joaat("component_revolver_varmod_boss"):
			return "WCD_REV_VARB";
			break;
		
		case joaat("component_revolver_varmod_goon"):
			return "WCD_REV_VARG";
			break;
		
		case joaat("component_smg_clip_03"):
			return "WCD_CLIP3";
			break;
		
		case joaat("component_carbinerifle_clip_03"):
			return "WCD_CLIP3";
			break;
		
		case joaat("component_assaultrifle_clip_03"):
			return "WCD_CLIP3";
			break;
		
		case 1623028892:
			return "WCD_VAR_GUN";
			break;
		
		case joaat("COMPONENT_SNSPISTOL_MK2_CLIP_02"):
			return "WCD_CLIP2";
			break;
		
		case joaat("COMPONENT_AT_SCOPE_MACRO_02_MK2"):
			return "WCD_SCOPE_MAC";
			break;
		
		case joaat("COMPONENT_AT_SCOPE_SMALL_MK2"):
			return "WCD_SCOPE_SML";
			break;
		
		case joaat("COMPONENT_RAYPISTOL_VARMOD_XMAS18"):
			return "WCD_VAR_RAY18";
			break;
		
		case -2122814295:
			return "WCD_CLIP2";
			break;
		
		case -1828202758:
			return "WCD_PI_SUPP";
			break;
		
		default:
			if (iParam1 != 0)
			{
				iVar0 = func_28(iParam1, &uVar2);
				if (iVar0 != -1)
				{
					iVar1 = 0;
					while (iVar1 < unk_0x4C70B0C3D1E97438(iVar0))
					{
						if (unk_0xF4545E3991F419DA(iVar0, iVar1, &Var3))
						{
							if (Var3.f_3 == iParam0)
							{
								return func_27(&(Var3.f_14));
							}
						}
						iVar1++;
					}
				}
			}
			break;
	}
	return "WCD_INVALID";
}

bool func_82(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_83(iParam0, iParam1);
	iVar1 = func_54(iParam0, iParam1);
	return unk_0xCE990E643CD9D0E5(iVar0, func_30(iVar1));
}

var func_83(int iParam0, int iParam1)
{
	var uVar0;
	
	uVar0 = Global_2550458.f_991[func_76(iParam0, iParam1)];
	return uVar0;
}

void func_84(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_56(iParam0, iParam1, -1);
	iVar1 = func_54(iParam0, iParam1);
	if (iVar1 > -1)
	{
		if (bParam2)
		{
			unk_0xBE20AB8238688965(&iVar0, func_30(iVar1));
		}
		else
		{
			unk_0xD2459066EA58CE43(&iVar0, func_30(iVar1));
		}
		func_61(func_57(iParam0, iParam1), iVar0, -1, 1, 0);
	}
}

int func_85(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	var uVar4;
	struct<4> Var5;
	
	iVar0 = 0;
	switch (iParam0)
	{
		case joaat("weapon_pistol"):
			switch (iParam1)
			{
				case 0:
					iVar0 = 1623028892;
					break;
				
				case 1:
					iVar0 = joaat("component_pistol_clip_01");
					break;
				
				case 2:
					iVar0 = joaat("component_pistol_clip_02");
					break;
				
				case 3:
					iVar0 = joaat("component_at_pi_flsh");
					break;
				
				case 4:
					iVar0 = joaat("component_at_pi_supp_02");
					break;
				
				case 5:
					iVar0 = joaat("component_pistol_varmod_luxe");
					break;
			}
			break;
		
		case joaat("weapon_combatpistol"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_combatpistol_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_combatpistol_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_at_pi_flsh");
					break;
				
				case 3:
					iVar0 = joaat("component_at_pi_supp");
					break;
				
				case 4:
					iVar0 = joaat("component_combatpistol_varmod_lowrider");
					break;
			}
			break;
		
		case joaat("weapon_appistol"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_appistol_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_appistol_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_at_pi_flsh");
					break;
				
				case 3:
					iVar0 = joaat("component_at_pi_supp");
					break;
				
				case 4:
					iVar0 = joaat("component_appistol_varmod_luxe");
					break;
			}
			break;
		
		case joaat("weapon_microsmg"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_microsmg_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_microsmg_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_at_pi_flsh");
					break;
				
				case 3:
					iVar0 = joaat("component_at_scope_macro");
					break;
				
				case 4:
					iVar0 = joaat("component_at_ar_supp_02");
					break;
				
				case 5:
					iVar0 = joaat("component_microsmg_varmod_luxe");
					break;
			}
			break;
		
		case joaat("weapon_smg"):
			switch (iParam1)
			{
				case 0:
					iVar0 = 1623028892;
					break;
				
				case 1:
					iVar0 = joaat("component_smg_clip_01");
					break;
				
				case 2:
					iVar0 = joaat("component_smg_clip_02");
					break;
				
				case 3:
					iVar0 = joaat("component_smg_clip_03");
					break;
				
				case 4:
					iVar0 = joaat("component_at_ar_flsh");
					break;
				
				case 5:
					iVar0 = joaat("component_at_pi_supp");
					break;
				
				case 6:
					iVar0 = joaat("component_at_scope_macro_02");
					break;
				
				case 7:
					iVar0 = joaat("component_at_ar_afgrip");
					break;
				
				case 8:
					iVar0 = joaat("component_smg_varmod_luxe");
					break;
			}
			break;
		
		case joaat("weapon_assaultrifle"):
			switch (iParam1)
			{
				case 0:
					iVar0 = 1623028892;
					break;
				
				case 1:
					iVar0 = joaat("component_assaultrifle_clip_01");
					break;
				
				case 2:
					iVar0 = joaat("component_assaultrifle_clip_02");
					break;
				
				case 3:
					iVar0 = joaat("component_assaultrifle_clip_03");
					break;
				
				case 4:
					iVar0 = joaat("component_at_ar_afgrip");
					break;
				
				case 5:
					iVar0 = joaat("component_at_ar_flsh");
					break;
				
				case 6:
					iVar0 = joaat("component_at_scope_macro");
					break;
				
				case 7:
					iVar0 = joaat("component_at_ar_supp_02");
					break;
				
				case 8:
					iVar0 = joaat("component_assaultrifle_varmod_luxe");
					break;
			}
			break;
		
		case joaat("weapon_carbinerifle"):
			switch (iParam1)
			{
				case 0:
					iVar0 = 1623028892;
					break;
				
				case 1:
					iVar0 = joaat("component_carbinerifle_clip_01");
					break;
				
				case 2:
					iVar0 = joaat("component_carbinerifle_clip_02");
					break;
				
				case 3:
					iVar0 = joaat("component_carbinerifle_clip_03");
					break;
				
				case 4:
					iVar0 = joaat("component_at_railcover_01");
					break;
				
				case 5:
					iVar0 = joaat("component_at_ar_afgrip");
					break;
				
				case 6:
					iVar0 = joaat("component_at_ar_flsh");
					break;
				
				case 7:
					iVar0 = joaat("component_at_scope_medium");
					break;
				
				case 8:
					iVar0 = joaat("component_at_ar_supp");
					break;
				
				case 9:
					iVar0 = joaat("component_carbinerifle_varmod_luxe");
					break;
			}
			break;
		
		case joaat("weapon_advancedrifle"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_advancedrifle_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_advancedrifle_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_at_ar_flsh");
					break;
				
				case 3:
					iVar0 = joaat("component_at_scope_small");
					break;
				
				case 4:
					iVar0 = joaat("component_at_ar_supp");
					break;
				
				case 5:
					iVar0 = joaat("component_advancedrifle_varmod_luxe");
					break;
			}
			break;
		
		case joaat("weapon_mg"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_mg_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_mg_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_at_scope_small_02");
					break;
				
				case 3:
					iVar0 = joaat("component_at_ar_afgrip");
					break;
				
				case 4:
					iVar0 = joaat("component_mg_varmod_lowrider");
					break;
			}
			break;
		
		case joaat("weapon_combatmg"):
			switch (iParam1)
			{
				case 0:
					iVar0 = 1623028892;
					break;
				
				case 1:
					iVar0 = joaat("component_combatmg_clip_01");
					break;
				
				case 2:
					iVar0 = joaat("component_combatmg_clip_02");
					break;
				
				case 3:
					iVar0 = joaat("component_at_ar_afgrip");
					break;
				
				case 4:
					iVar0 = joaat("component_at_scope_medium");
					break;
				
				case 5:
					iVar0 = joaat("component_combatmg_varmod_lowrider");
					break;
			}
			break;
		
		case joaat("weapon_pumpshotgun"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_at_sr_supp");
					break;
				
				case 1:
					iVar0 = joaat("component_at_ar_flsh");
					break;
				
				case 2:
					iVar0 = joaat("component_pumpshotgun_varmod_lowrider");
					break;
			}
			break;
		
		case joaat("weapon_assaultshotgun"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_assaultshotgun_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_assaultshotgun_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_at_ar_afgrip");
					break;
				
				case 3:
					iVar0 = joaat("component_at_ar_flsh");
					break;
				
				case 4:
					iVar0 = joaat("component_at_ar_supp");
					break;
			}
			break;
		
		case joaat("weapon_sniperrifle"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_sniperrifle_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_at_scope_large");
					break;
				
				case 2:
					iVar0 = joaat("component_at_scope_max");
					break;
				
				case 3:
					iVar0 = joaat("component_at_ar_supp_02");
					break;
				
				case 4:
					iVar0 = joaat("component_sniperrifle_varmod_luxe");
					break;
			}
			break;
		
		case joaat("weapon_heavysniper"):
			switch (iParam1)
			{
				case 0:
					iVar0 = 1623028892;
					break;
				
				case 1:
					iVar0 = joaat("component_heavysniper_clip_01");
					break;
				
				case 2:
					iVar0 = joaat("component_at_scope_large");
					break;
				
				case 3:
					iVar0 = joaat("component_at_scope_max");
					break;
			}
			break;
		
		case joaat("weapon_grenadelauncher"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_at_ar_afgrip");
					break;
				
				case 1:
					iVar0 = joaat("component_at_ar_flsh");
					break;
				
				case 2:
					iVar0 = joaat("component_at_scope_small");
					break;
			}
			break;
		
		case joaat("weapon_minigun"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_minigun_clip_01");
					break;
			}
			break;
		
		case joaat("weapon_assaultsmg"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_assaultsmg_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_assaultsmg_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_at_ar_flsh");
					break;
				
				case 3:
					iVar0 = joaat("component_at_scope_macro");
					break;
				
				case 4:
					iVar0 = joaat("component_at_ar_supp_02");
					break;
				
				case 5:
					iVar0 = joaat("component_assaultsmg_varmod_lowrider");
					break;
			}
			break;
		
		case joaat("weapon_bullpupshotgun"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_at_ar_afgrip");
					break;
				
				case 1:
					iVar0 = joaat("component_at_ar_flsh");
					break;
				
				case 2:
					iVar0 = joaat("component_at_ar_supp_02");
					break;
			}
			break;
		
		case joaat("weapon_pistol50"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_pistol50_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_pistol50_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_at_pi_flsh");
					break;
				
				case 3:
					iVar0 = joaat("component_at_ar_supp_02");
					break;
				
				case 4:
					iVar0 = joaat("component_pistol50_varmod_luxe");
					break;
			}
			break;
		
		case joaat("weapon_combatpdw"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_combatpdw_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_combatpdw_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_combatpdw_clip_03");
					break;
				
				case 3:
					iVar0 = joaat("component_at_ar_flsh");
					break;
				
				case 4:
					iVar0 = joaat("component_at_scope_small");
					break;
				
				case 5:
					iVar0 = joaat("component_at_ar_afgrip");
					break;
			}
			break;
		
		case joaat("weapon_sawnoffshotgun"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_sawnoffshotgun_varmod_luxe");
					break;
			}
			break;
		
		case joaat("weapon_bullpuprifle"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_bullpuprifle_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_bullpuprifle_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_at_ar_flsh");
					break;
				
				case 3:
					iVar0 = joaat("component_at_scope_small");
					break;
				
				case 4:
					iVar0 = joaat("component_at_ar_supp");
					break;
				
				case 5:
					iVar0 = joaat("component_at_ar_afgrip");
					break;
				
				case 6:
					iVar0 = joaat("component_bullpuprifle_varmod_low");
					break;
			}
			break;
		
		case joaat("weapon_snspistol"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_snspistol_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_snspistol_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_snspistol_varmod_lowrider");
					break;
			}
			break;
		
		case joaat("weapon_specialcarbine"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_specialcarbine_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_specialcarbine_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_specialcarbine_clip_03");
					break;
				
				case 3:
					iVar0 = joaat("component_at_ar_flsh");
					break;
				
				case 4:
					iVar0 = joaat("component_at_scope_medium");
					break;
				
				case 5:
					iVar0 = joaat("component_at_ar_supp_02");
					break;
				
				case 6:
					iVar0 = joaat("component_at_ar_afgrip");
					break;
				
				case 7:
					iVar0 = joaat("component_specialcarbine_varmod_lowrider");
					break;
			}
			break;
		
		case joaat("weapon_knuckle"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_knuckle_varmod_pimp");
					break;
				
				case 1:
					iVar0 = joaat("component_knuckle_varmod_ballas");
					break;
				
				case 2:
					iVar0 = joaat("component_knuckle_varmod_dollar");
					break;
				
				case 3:
					iVar0 = joaat("component_knuckle_varmod_diamond");
					break;
				
				case 4:
					iVar0 = joaat("component_knuckle_varmod_hate");
					break;
				
				case 5:
					iVar0 = joaat("component_knuckle_varmod_love");
					break;
				
				case 6:
					iVar0 = joaat("component_knuckle_varmod_player");
					break;
				
				case 7:
					iVar0 = joaat("component_knuckle_varmod_king");
					break;
				
				case 8:
					iVar0 = joaat("component_knuckle_varmod_vagos");
					break;
			}
			break;
		
		case joaat("weapon_machinepistol"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_machinepistol_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_machinepistol_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_machinepistol_clip_03");
					break;
				
				case 3:
					iVar0 = joaat("component_at_pi_supp");
					break;
			}
			break;
		
		case joaat("weapon_switchblade"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_switchblade_varmod_var1");
					break;
				
				case 1:
					iVar0 = joaat("component_switchblade_varmod_var2");
					break;
			}
			break;
		
		case joaat("weapon_revolver"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_revolver_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_revolver_varmod_boss");
					break;
				
				case 2:
					iVar0 = joaat("component_revolver_varmod_goon");
					break;
			}
			break;
		
		case joaat("WEAPON_MINISMG"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("COMPONENT_MINISMG_CLIP_01");
					break;
				
				case 1:
					iVar0 = joaat("COMPONENT_MINISMG_CLIP_02");
					break;
			}
			break;
		
		default:
			if (iParam0 != 0)
			{
				iVar1 = func_28(iParam0, &uVar4);
				if (iVar1 != -1)
				{
					iVar2 = 0;
					while (iVar2 < unk_0x4C70B0C3D1E97438(iVar1))
					{
						if (unk_0xF4545E3991F419DA(iVar1, iVar2, &Var5))
						{
							if (!func_86(Var5.f_3))
							{
								if (iVar3 == iParam1)
								{
									return Var5.f_3;
								}
								iVar3++;
							}
						}
						iVar2++;
					}
				}
			}
			break;
	}
	return iVar0;
}

int func_86(int iParam0)
{
	switch (iParam0)
	{
		case joaat("COMPONENT_PISTOL_MK2_CAMO_SLIDE"):
		case joaat("COMPONENT_PISTOL_MK2_CAMO_02_SLIDE"):
		case joaat("COMPONENT_PISTOL_MK2_CAMO_03_SLIDE"):
		case joaat("COMPONENT_PISTOL_MK2_CAMO_04_SLIDE"):
		case joaat("COMPONENT_PISTOL_MK2_CAMO_05_SLIDE"):
		case joaat("COMPONENT_PISTOL_MK2_CAMO_06_SLIDE"):
		case joaat("COMPONENT_PISTOL_MK2_CAMO_07_SLIDE"):
		case joaat("COMPONENT_PISTOL_MK2_CAMO_08_SLIDE"):
		case joaat("COMPONENT_PISTOL_MK2_CAMO_09_SLIDE"):
		case joaat("COMPONENT_PISTOL_MK2_CAMO_10_SLIDE"):
		case joaat("COMPONENT_PISTOL_MK2_CAMO_IND_01_SLIDE"):
		case joaat("COMPONENT_SNSPISTOL_MK2_CAMO_SLIDE"):
		case joaat("COMPONENT_SNSPISTOL_MK2_CAMO_02_SLIDE"):
		case joaat("COMPONENT_SNSPISTOL_MK2_CAMO_03_SLIDE"):
		case joaat("COMPONENT_SNSPISTOL_MK2_CAMO_04_SLIDE"):
		case joaat("COMPONENT_SNSPISTOL_MK2_CAMO_05_SLIDE"):
		case joaat("COMPONENT_SNSPISTOL_MK2_CAMO_06_SLIDE"):
		case joaat("COMPONENT_SNSPISTOL_MK2_CAMO_07_SLIDE"):
		case joaat("COMPONENT_SNSPISTOL_MK2_CAMO_08_SLIDE"):
		case joaat("COMPONENT_SNSPISTOL_MK2_CAMO_09_SLIDE"):
		case joaat("COMPONENT_SNSPISTOL_MK2_CAMO_10_SLIDE"):
		case joaat("COMPONENT_SNSPISTOL_MK2_CAMO_IND_01_SLIDE"):
			return 1;
			break;
	}
	return 0;
}

bool func_87(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	
	if (iParam2 == 0)
	{
	}
	if (func_41())
	{
		return 0;
	}
	iVar0 = func_88(iParam0, iParam1);
	iVar1 = func_31(iParam0);
	return unk_0xCE990E643CD9D0E5(iVar0, func_30(iVar1));
}

var func_88(int iParam0, int iParam1)
{
	var uVar0;
	
	uVar0 = func_34(func_89(iParam0), iParam1, 0);
	return uVar0;
}

int func_89(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_31(iParam0);
	iVar1 = func_38(iVar0);
	if ((func_160() == 0 || func_37() == 0) || (func_160() == 999 && func_37() == 999))
	{
		switch (iVar1)
		{
			case 0:
				return 679;
				break;
			
			case 1:
				return 680;
				break;
			
			case 2:
				return 2428;
				break;
		}
	}
	return 11771;
}

bool func_90(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	
	if (iParam2 == 0)
	{
	}
	if (func_41())
	{
		return 0;
	}
	if (func_42() == 0)
	{
		return 0;
	}
	if (iParam0 != joaat("gadget_parachute") && iParam0 != joaat("weapon_railgun"))
	{
		if (func_39(func_93(iParam0), -1))
		{
			return 0;
		}
	}
	iVar0 = func_91(iParam0, iParam1);
	iVar1 = func_31(iParam0);
	return unk_0xCE990E643CD9D0E5(iVar0, func_30(iVar1));
}

var func_91(int iParam0, var uParam1)
{
	var uVar0;
	
	uVar0 = func_34(func_92(iParam0), uParam1, 0);
	return uVar0;
}

int func_92(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_31(iParam0);
	iVar1 = func_38(iVar0);
	if ((func_160() == 0 || func_37() == 0) || (func_160() == 999 && func_37() == 999))
	{
		switch (iVar1)
		{
			case 0:
				return 799;
				break;
			
			case 1:
				return 800;
				break;
			
			case 2:
				return 2419;
				break;
			}
	}
	return 11771;
}

int func_93(int iParam0)
{
	switch (iParam0)
	{
		case joaat("weapon_unarmed"):
			return 18;
			break;
		
		case joaat("weapon_grenade"):
			return 66;
			break;
		
		case joaat("weapon_smokegrenade"):
			return 68;
			break;
		
		case joaat("weapon_stickybomb"):
			return 70;
			break;
		
		case joaat("weapon_molotov"):
			return 72;
			break;
		
		case joaat("weapon_pistol"):
			return 18;
			break;
		
		case joaat("weapon_combatpistol"):
			return 40;
			break;
		
		case joaat("weapon_pistol50"):
			return 22;
			break;
		
		case joaat("weapon_appistol"):
			return 24;
			break;
		
		case joaat("weapon_microsmg"):
			return 26;
			break;
		
		case joaat("weapon_smg"):
			return 28;
			break;
		
		case joaat("weapon_assaultsmg"):
			return 30;
			break;
		
		case joaat("weapon_assaultrifle"):
			return 32;
			break;
		
		case joaat("weapon_carbinerifle"):
			return 34;
			break;
		
		case joaat("weapon_advancedrifle"):
			return 36;
			break;
		
		case joaat("weapon_mg"):
			return 38;
			break;
		
		case -572349828:
			return 42;
			break;
		
		case joaat("weapon_pumpshotgun"):
			return 44;
			break;
		
		case joaat("weapon_sawnoffshotgun"):
			return 46;
			break;
		
		case joaat("weapon_bullpupshotgun"):
			return 48;
			break;
		
		case joaat("weapon_assaultshotgun"):
			return 50;
			break;
		
		case joaat("weapon_sniperrifle"):
			return 54;
			break;
		
		case joaat("weapon_heavysniper"):
			return 56;
			break;
		
		case joaat("weapon_grenadelauncher"):
			return 60;
			break;
		
		case joaat("weapon_rpg"):
			return 62;
			break;
		
		case joaat("weapon_minigun"):
			return 64;
			break;
		
		case joaat("weapon_stungun"):
			return 52;
			break;
		
		case joaat("weapon_petrolcan"):
			return 75;
			break;
		
		case joaat("weapon_knife"):
			return 2;
			break;
		
		case joaat("weapon_nightstick"):
			return 4;
			break;
		
		case joaat("weapon_hammer"):
			return 12;
			break;
		
		case joaat("weapon_bat"):
			return 14;
			break;
		
		case joaat("weapon_crowbar"):
			return 6;
			break;
		
		case joaat("weapon_golfclub"):
			return 16;
			break;
		
		case 392730790:
			return 58;
			break;
		
		case joaat("weapon_combatmg"):
			return 40;
			break;
		
		case joaat("weapon_bottle"):
			return 143;
			break;
		
		case joaat("weapon_specialcarbine"):
			return 302;
			break;
		
		case joaat("weapon_snspistol"):
			return 145;
			break;
		
		case joaat("weapon_heavypistol"):
			return 300;
			break;
		
		case joaat("weapon_bullpuprifle"):
			return 304;
			break;
		
		case joaat("weapon_gusenberg"):
			return 306;
			break;
		
		case joaat("weapon_dagger"):
			return 327;
			break;
		
		case joaat("weapon_vintagepistol"):
			return 329;
			break;
		
		case joaat("weapon_firework"):
			return 331;
			break;
		
		case joaat("weapon_musket"):
			return 333;
			break;
		
		case joaat("weapon_heavyshotgun"):
			return 345;
			break;
		
		case joaat("weapon_marksmanrifle"):
			return 347;
			break;
		
		case joaat("weapon_proxmine"):
			return 351;
			break;
		
		case joaat("weapon_hominglauncher"):
			return 353;
			break;
		
		case joaat("weapon_combatpdw"):
			return 355;
			break;
		
		case joaat("weapon_knuckle"):
			return 357;
			break;
		
		case joaat("weapon_marksmanpistol"):
			return 359;
			break;
		
		case joaat("weapon_hatchet"):
			return 349;
			break;
		
		case joaat("weapon_machete"):
			return 361;
			break;
		
		case joaat("weapon_machinepistol"):
			return 363;
			break;
		
		case joaat("weapon_compactrifle"):
			return 366;
			break;
		
		case joaat("weapon_dbshotgun"):
			return 368;
			break;
		
		case joaat("weapon_flashlight"):
			return 370;
			break;
		
		case joaat("weapon_revolver"):
			return 373;
			break;
		
		case joaat("weapon_switchblade"):
			return 375;
			break;
		
		case joaat("WEAPON_AUTOSHOTGUN"):
			return 380;
			break;
		
		case joaat("WEAPON_MINISMG"):
			return 386;
			break;
		
		case joaat("WEAPON_COMPACTLAUNCHER"):
			return 384;
			break;
		
		case joaat("WEAPON_BATTLEAXE"):
			return 382;
			break;
		
		case joaat("WEAPON_PIPEBOMB"):
			return 388;
			break;
		
		case joaat("WEAPON_POOLCUE"):
			return 390;
			break;
		
		case joaat("WEAPON_WRENCH"):
			return 10;
			break;
		
		case joaat("WEAPON_ASSAULTRIFLE_MK2"):
			return 32;
			break;
		
		case joaat("WEAPON_CARBINERIFLE_MK2"):
			return 34;
			break;
		
		case joaat("WEAPON_COMBATMG_MK2"):
			return 40;
			break;
		
		case joaat("WEAPON_HEAVYSNIPER_MK2"):
			return 56;
			break;
		
		case joaat("WEAPON_PISTOL_MK2"):
			return 18;
			break;
		
		case joaat("WEAPON_SMG_MK2"):
			return 28;
			break;
		
		case joaat("WEAPON_BULLPUPRIFLE_MK2"):
			return 48;
			break;
		
		case joaat("WEAPON_MARKSMANRIFLE_MK2"):
			return 347;
			break;
		
		case joaat("WEAPON_PUMPSHOTGUN_MK2"):
			return 44;
			break;
		
		case joaat("WEAPON_REVOLVER_MK2"):
			return 373;
			break;
		
		case joaat("WEAPON_SNSPISTOL_MK2"):
			return 145;
			break;
		
		case joaat("WEAPON_SPECIALCARBINE_MK2"):
			return 302;
			break;
		
		case joaat("WEAPON_DOUBLEACTION"):
			return 414;
			break;
		
		case joaat("WEAPON_STONE_HATCHET"):
			return 420;
			break;
		
		case joaat("WEAPON_RAYPISTOL"):
			return 422;
			break;
		
		case joaat("WEAPON_RAYCARBINE"):
			return 422;
			break;
		
		case joaat("WEAPON_RAYMINIGUN"):
			return 422;
			break;
		
		case joaat("WEAPON_NAVYREVOLVER"):
			return 430;
			break;
		
		case joaat("WEAPON_CERAMICPISTOL"):
			return 428;
			break;
		
		case joaat("WEAPON_HAZARDCAN"):
			return 432;
			break;
		
		case 1470379660:
			return 436;
			break;
		
		case -1658906650:
			return 438;
			break;
		
		case 94989220:
			return 434;
			break;
	}
	return 2;
}

bool func_94(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	
	if (func_41())
	{
		return 0;
	}
	iVar0 = func_68(iParam0, iParam1, iParam2);
	iVar1 = func_54(iParam0, iParam1);
	return unk_0xCE990E643CD9D0E5(iVar0, func_30(iVar1));
}

int func_95(int iParam0)
{
	switch (iParam0)
	{
		case joaat("WEAPON_PISTOL_MK2"):
			return joaat("weapon_pistol");
		
		case joaat("WEAPON_SMG_MK2"):
			return joaat("weapon_smg");
		
		case joaat("WEAPON_ASSAULTRIFLE_MK2"):
			return joaat("weapon_assaultrifle");
		
		case joaat("WEAPON_CARBINERIFLE_MK2"):
			return joaat("weapon_carbinerifle");
		
		case joaat("WEAPON_COMBATMG_MK2"):
			return joaat("weapon_combatmg");
		
		case joaat("WEAPON_HEAVYSNIPER_MK2"):
			return joaat("weapon_heavysniper");
		
		case joaat("WEAPON_BULLPUPRIFLE_MK2"):
			return joaat("weapon_bullpuprifle");
		
		case joaat("WEAPON_MARKSMANRIFLE_MK2"):
			return joaat("weapon_marksmanrifle");
		
		case joaat("WEAPON_PUMPSHOTGUN_MK2"):
			return joaat("weapon_pumpshotgun");
		
		case joaat("WEAPON_REVOLVER_MK2"):
			return joaat("weapon_revolver");
		
		case joaat("WEAPON_SNSPISTOL_MK2"):
			return joaat("weapon_snspistol");
		
		case joaat("WEAPON_SPECIALCARBINE_MK2"):
			return joaat("weapon_specialcarbine");
		
		default:
	}
	return 0;
}

int func_96(int iParam0)
{
	switch (iParam0)
	{
		case joaat("WEAPON_PISTOL_MK2"):
		case joaat("WEAPON_SMG_MK2"):
		case joaat("WEAPON_HEAVYSNIPER_MK2"):
		case joaat("WEAPON_COMBATMG_MK2"):
		case joaat("WEAPON_ASSAULTRIFLE_MK2"):
		case joaat("WEAPON_CARBINERIFLE_MK2"):
		case joaat("WEAPON_SNSPISTOL_MK2"):
		case joaat("WEAPON_REVOLVER_MK2"):
		case joaat("WEAPON_BULLPUPRIFLE_MK2"):
		case joaat("WEAPON_SPECIALCARBINE_MK2"):
		case joaat("WEAPON_PUMPSHOTGUN_MK2"):
		case joaat("WEAPON_MARKSMANRIFLE_MK2"):
			return 1;
			break;
	}
	return 0;
}

int func_97(var uParam0)
{
	return uParam0->f_281;
}

void func_98(var uParam0, var uParam1)
{
	if (unk_0xC655D10BB6E32EF1(joaat("weapon_hammer")) && iLocal_66[10] == uParam1->f_5)
	{
		func_108(joaat("weapon_hammer"), uParam0, *uParam1, 0);
	}
	if (unk_0xC655D10BB6E32EF1(joaat("weapon_pistol50")) && iLocal_66[0] == uParam1->f_5)
	{
		func_108(joaat("weapon_pistol50"), uParam0, *uParam1, 0);
	}
	if (unk_0xC655D10BB6E32EF1(joaat("weapon_bullpupshotgun")) && iLocal_66[1] == uParam1->f_5)
	{
		func_108(joaat("weapon_bullpupshotgun"), uParam0, *uParam1, 0);
	}
	if (func_107(1, 0))
	{
		if (unk_0xC655D10BB6E32EF1(joaat("weapon_sawnoffshotgun")) && iLocal_66[2] == uParam1->f_5)
		{
			func_108(joaat("weapon_sawnoffshotgun"), uParam0, *uParam1, 0);
		}
	}
	if (unk_0xC655D10BB6E32EF1(joaat("weapon_bottle")) && iLocal_66[3] == uParam1->f_5)
	{
		func_108(joaat("weapon_bottle"), uParam0, *uParam1, 0);
	}
	if (unk_0xC655D10BB6E32EF1(joaat("weapon_snspistol")) && iLocal_66[4] == uParam1->f_5)
	{
		func_108(joaat("weapon_snspistol"), uParam0, *uParam1, 0);
	}
	if (unk_0xC655D10BB6E32EF1(joaat("weapon_gusenberg")) && iLocal_66[11] == uParam1->f_5)
	{
		func_108(joaat("weapon_gusenberg"), uParam0, *uParam1, 0);
	}
	if (unk_0xC655D10BB6E32EF1(joaat("weapon_heavypistol")) && iLocal_66[7] == uParam1->f_5)
	{
		func_108(joaat("weapon_heavypistol"), uParam0, *uParam1, 0);
	}
	if (unk_0xC655D10BB6E32EF1(joaat("weapon_specialcarbine")) && iLocal_66[5] == uParam1->f_5)
	{
		func_108(joaat("weapon_specialcarbine"), uParam0, *uParam1, 0);
	}
	if (unk_0xC655D10BB6E32EF1(joaat("weapon_bullpuprifle")) && iLocal_66[6] == uParam1->f_5)
	{
		func_108(joaat("weapon_bullpuprifle"), uParam0, *uParam1, 0);
	}
	if (unk_0xC655D10BB6E32EF1(joaat("weapon_dagger")) && iLocal_66[8] == uParam1->f_5)
	{
		func_108(joaat("weapon_dagger"), uParam0, *uParam1, 0);
	}
	if (unk_0xC655D10BB6E32EF1(joaat("weapon_vintagepistol")) && iLocal_66[9] == uParam1->f_5)
	{
		func_108(joaat("weapon_vintagepistol"), uParam0, *uParam1, 0);
	}
	if (unk_0xC655D10BB6E32EF1(joaat("weapon_firework")) && iLocal_66[14] == uParam1->f_5)
	{
		func_108(joaat("weapon_firework"), uParam0, *uParam1, 0);
	}
	if (unk_0xC655D10BB6E32EF1(joaat("weapon_musket")) && iLocal_66[13] == uParam1->f_5)
	{
		func_108(joaat("weapon_musket"), uParam0, *uParam1, 0);
	}
	if (unk_0xC655D10BB6E32EF1(joaat("weapon_flaregun")) && iLocal_66[12] == uParam1->f_5)
	{
		func_108(joaat("weapon_flaregun"), uParam0, *uParam1, 0);
	}
	if (unk_0xC655D10BB6E32EF1(joaat("weapon_heavyshotgun")) && iLocal_66[15] == uParam1->f_5)
	{
		func_108(joaat("weapon_heavyshotgun"), uParam0, *uParam1, 0);
	}
	if (unk_0xC655D10BB6E32EF1(joaat("weapon_marksmanrifle")) && iLocal_66[16] == uParam1->f_5)
	{
		func_108(joaat("weapon_marksmanrifle"), uParam0, *uParam1, 0);
	}
	if (func_106() || Global_262145.f_19760)
	{
		if (unk_0xC655D10BB6E32EF1(joaat("weapon_hatchet")) && iLocal_66[22] == uParam1->f_5)
		{
			func_108(joaat("weapon_hatchet"), uParam0, *uParam1, 0);
		}
	}
	if (unk_0xC655D10BB6E32EF1(joaat("weapon_proxmine")) && iLocal_66[17] == uParam1->f_5)
	{
		func_108(joaat("weapon_proxmine"), uParam0, *uParam1, 0);
	}
	if (unk_0xC655D10BB6E32EF1(joaat("weapon_hominglauncher")) && iLocal_66[18] == uParam1->f_5)
	{
		func_108(joaat("weapon_hominglauncher"), uParam0, *uParam1, 0);
	}
	if (unk_0xC655D10BB6E32EF1(joaat("weapon_combatpdw")) && iLocal_66[19] == uParam1->f_5)
	{
		func_108(joaat("weapon_combatpdw"), uParam0, *uParam1, 0);
	}
	if (unk_0xC655D10BB6E32EF1(joaat("weapon_marksmanpistol")) && iLocal_66[20] == uParam1->f_5)
	{
		func_108(joaat("weapon_marksmanpistol"), uParam0, *uParam1, 0);
	}
	if (unk_0xC655D10BB6E32EF1(joaat("weapon_knuckle")) && iLocal_66[21] == uParam1->f_5)
	{
		func_108(joaat("weapon_knuckle"), uParam0, *uParam1, 0);
	}
	if (unk_0xC655D10BB6E32EF1(joaat("weapon_machete")) && iLocal_66[23] == uParam1->f_5)
	{
		func_108(joaat("weapon_machete"), uParam0, *uParam1, 0);
	}
	if (unk_0xC655D10BB6E32EF1(joaat("weapon_machinepistol")) && iLocal_66[24] == uParam1->f_5)
	{
		func_108(joaat("weapon_machinepistol"), uParam0, *uParam1, 0);
	}
	if ((Global_262145.f_11585 && unk_0xC655D10BB6E32EF1(joaat("weapon_flashlight"))) && iLocal_66[25] == uParam1->f_5)
	{
		func_108(joaat("weapon_flashlight"), uParam0, *uParam1, 0);
	}
	if (unk_0xC655D10BB6E32EF1(joaat("weapon_revolver")) && iLocal_66[26] == uParam1->f_5)
	{
		func_108(joaat("weapon_revolver"), uParam0, *uParam1, 0);
	}
	if (unk_0xC655D10BB6E32EF1(joaat("weapon_switchblade")) && iLocal_66[27] == uParam1->f_5)
	{
		func_108(joaat("weapon_switchblade"), uParam0, *uParam1, 0);
	}
	if (unk_0xC655D10BB6E32EF1(joaat("weapon_dbshotgun")) && iLocal_66[28] == uParam1->f_5)
	{
		func_108(joaat("weapon_dbshotgun"), uParam0, *uParam1, 0);
	}
	if (unk_0xC655D10BB6E32EF1(joaat("weapon_compactrifle")) && iLocal_66[29] == uParam1->f_5)
	{
		func_108(joaat("weapon_compactrifle"), uParam0, *uParam1, 0);
	}
	if (unk_0xC655D10BB6E32EF1(joaat("WEAPON_AUTOSHOTGUN")) && iLocal_66[30] == uParam1->f_5)
	{
		func_108(joaat("WEAPON_AUTOSHOTGUN"), uParam0, *uParam1, 0);
	}
	if (unk_0xC655D10BB6E32EF1(joaat("WEAPON_BATTLEAXE")) && iLocal_66[31] == uParam1->f_5)
	{
		func_108(joaat("WEAPON_BATTLEAXE"), uParam0, *uParam1, 0);
	}
	if (unk_0xC655D10BB6E32EF1(joaat("WEAPON_COMPACTLAUNCHER")) && iLocal_66[32] == uParam1->f_5)
	{
		func_108(joaat("WEAPON_COMPACTLAUNCHER"), uParam0, *uParam1, 0);
	}
	if (unk_0xC655D10BB6E32EF1(joaat("WEAPON_MINISMG")) && iLocal_66[33] == uParam1->f_5)
	{
		func_108(joaat("WEAPON_MINISMG"), uParam0, *uParam1, 0);
	}
	if (unk_0xC655D10BB6E32EF1(joaat("WEAPON_PIPEBOMB")) && iLocal_66[34] == uParam1->f_5)
	{
		func_108(joaat("WEAPON_PIPEBOMB"), uParam0, *uParam1, 0);
	}
	if (unk_0xC655D10BB6E32EF1(joaat("WEAPON_POOLCUE")) && iLocal_66[35] == uParam1->f_5)
	{
		func_108(joaat("WEAPON_POOLCUE"), uParam0, *uParam1, 0);
	}
	if (unk_0xC655D10BB6E32EF1(joaat("WEAPON_WRENCH")) && iLocal_66[36] == uParam1->f_5)
	{
		func_108(joaat("WEAPON_WRENCH"), uParam0, *uParam1, 0);
	}
	if (unk_0xC655D10BB6E32EF1(joaat("WEAPON_ASSAULTRIFLE_MK2")) && iLocal_66[37] == uParam1->f_5)
	{
		func_108(joaat("WEAPON_ASSAULTRIFLE_MK2"), uParam0, *uParam1, 0);
	}
	if (unk_0xC655D10BB6E32EF1(joaat("WEAPON_CARBINERIFLE_MK2")) && iLocal_66[38] == uParam1->f_5)
	{
		func_108(joaat("WEAPON_CARBINERIFLE_MK2"), uParam0, *uParam1, 0);
	}
	if (unk_0xC655D10BB6E32EF1(joaat("WEAPON_COMBATMG_MK2")) && iLocal_66[39] == uParam1->f_5)
	{
		func_108(joaat("WEAPON_COMBATMG_MK2"), uParam0, *uParam1, 0);
	}
	if (unk_0xC655D10BB6E32EF1(joaat("WEAPON_HEAVYSNIPER_MK2")) && iLocal_66[40] == uParam1->f_5)
	{
		func_108(joaat("WEAPON_HEAVYSNIPER_MK2"), uParam0, *uParam1, 0);
	}
	if (unk_0xC655D10BB6E32EF1(joaat("WEAPON_PISTOL_MK2")) && iLocal_66[41] == uParam1->f_5)
	{
		func_108(joaat("WEAPON_PISTOL_MK2"), uParam0, *uParam1, 0);
	}
	if (unk_0xC655D10BB6E32EF1(joaat("WEAPON_SMG_MK2")) && iLocal_66[42] == uParam1->f_5)
	{
		func_108(joaat("WEAPON_SMG_MK2"), uParam0, *uParam1, 0);
	}
	if (unk_0xC655D10BB6E32EF1(joaat("WEAPON_BULLPUPRIFLE_MK2")) && iLocal_66[43] == uParam1->f_5)
	{
		func_108(joaat("WEAPON_BULLPUPRIFLE_MK2"), uParam0, *uParam1, 0);
	}
	if (unk_0xC655D10BB6E32EF1(joaat("WEAPON_MARKSMANRIFLE_MK2")) && iLocal_66[44] == uParam1->f_5)
	{
		func_108(joaat("WEAPON_MARKSMANRIFLE_MK2"), uParam0, *uParam1, 0);
	}
	if (unk_0xC655D10BB6E32EF1(joaat("WEAPON_PUMPSHOTGUN_MK2")) && iLocal_66[45] == uParam1->f_5)
	{
		func_108(joaat("WEAPON_PUMPSHOTGUN_MK2"), uParam0, *uParam1, 0);
	}
	if (unk_0xC655D10BB6E32EF1(joaat("WEAPON_REVOLVER_MK2")) && iLocal_66[46] == uParam1->f_5)
	{
		func_108(joaat("WEAPON_REVOLVER_MK2"), uParam0, *uParam1, 0);
	}
	if (unk_0xC655D10BB6E32EF1(joaat("WEAPON_SNSPISTOL_MK2")) && iLocal_66[47] == uParam1->f_5)
	{
		func_108(joaat("WEAPON_SNSPISTOL_MK2"), uParam0, *uParam1, 0);
	}
	if (unk_0xC655D10BB6E32EF1(joaat("WEAPON_SPECIALCARBINE_MK2")) && iLocal_66[48] == uParam1->f_5)
	{
		func_108(joaat("WEAPON_SPECIALCARBINE_MK2"), uParam0, *uParam1, 0);
	}
	if (unk_0xC655D10BB6E32EF1(joaat("WEAPON_DOUBLEACTION")) && iLocal_66[49] == uParam1->f_5)
	{
		if (Global_262145.f_22949 && (func_105() || Global_1694984))
		{
			func_108(joaat("WEAPON_DOUBLEACTION"), uParam0, *uParam1, 0);
		}
	}
	if (unk_0xC655D10BB6E32EF1(joaat("WEAPON_STONE_HATCHET")) && iLocal_66[50] == uParam1->f_5)
	{
		if (Global_262145.f_23648 && func_101())
		{
			func_108(joaat("WEAPON_STONE_HATCHET"), uParam0, *uParam1, 0);
		}
	}
	if ((unk_0xC655D10BB6E32EF1(joaat("WEAPON_RAYCARBINE")) && iLocal_66[51] == uParam1->f_5) && Global_262145.f_26043)
	{
		func_108(joaat("WEAPON_RAYCARBINE"), uParam0, *uParam1, 0);
	}
	if ((unk_0xC655D10BB6E32EF1(joaat("WEAPON_RAYMINIGUN")) && iLocal_66[52] == uParam1->f_5) && Global_262145.f_26042)
	{
		func_108(joaat("WEAPON_RAYMINIGUN"), uParam0, *uParam1, 0);
	}
	if ((unk_0xC655D10BB6E32EF1(joaat("WEAPON_RAYPISTOL")) && (((func_17(25007, -1, -1) || func_17(25002, -1, -1)) || func_90(joaat("WEAPON_RAYPISTOL"), -1, 0)) || Global_262145.f_25051)) && iLocal_66[53] == uParam1->f_5)
	{
		func_108(joaat("WEAPON_RAYPISTOL"), uParam0, *uParam1, 0);
	}
	if (unk_0xC655D10BB6E32EF1(joaat("WEAPON_CERAMICPISTOL")) && iLocal_66[54] == uParam1->f_5)
	{
		func_108(joaat("WEAPON_CERAMICPISTOL"), uParam0, *uParam1, 0);
	}
	if (unk_0xC655D10BB6E32EF1(joaat("WEAPON_NAVYREVOLVER")) && iLocal_66[55] == uParam1->f_5)
	{
		if (Global_262145.f_27666 && (func_100() || Global_1694990))
		{
			func_108(joaat("WEAPON_NAVYREVOLVER"), uParam0, *uParam1, 0);
		}
	}
	if (unk_0xC655D10BB6E32EF1(-1658906650) && iLocal_66[56] == uParam1->f_5)
	{
		func_108(-1658906650, uParam0, *uParam1, 0);
	}
	if (unk_0xC655D10BB6E32EF1(94989220) && iLocal_66[57] == uParam1->f_5)
	{
		if (func_17(30632, -1, -1))
		{
			func_108(94989220, uParam0, *uParam1, 0);
		}
	}
	if (unk_0xC655D10BB6E32EF1(1470379660) && iLocal_66[58] == uParam1->f_5)
	{
		if (func_99(106, -1))
		{
			func_108(1470379660, uParam0, *uParam1, 0);
		}
	}
}

int func_99(int iParam0, int iParam1)
{
	var uVar0;
	var uVar1;
	
	uVar0 = Global_2589927[iParam0 /*3*/][func_35(iParam1)];
	if (unk_0xB9112C701DE2A810(uVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

int func_100()
{
	if (func_17(28158, -1, -1))
	{
		return 1;
	}
	return 0;
}

int func_101()
{
	if (func_102(7315, -1, -1) >= 6)
	{
		return 1;
	}
	return 0;
}

int func_102(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (iParam1 == -1)
	{
		iParam1 = func_144();
	}
	iVar0 = 0;
	iVar1 = func_104(iParam0, iParam1);
	iVar2 = func_103(iParam0);
	if (0 != iVar1)
	{
		if (!unk_0x84F15E111A2161E1(iVar1, &iVar0, iVar2, 8, iParam2))
		{
			iVar0 = 0;
		}
	}
	return iVar0;
}

int func_103(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	if (iParam0 >= 384 && iParam0 < 457)
	{
		iVar0 = ((iParam0 - 384) - unk_0xCCD6EB3D51BA0D9E((iParam0 - 384)) * 8) * 8;
	}
	else if (iParam0 >= 457 && iParam0 < 513)
	{
		iVar0 = ((iParam0 - 457) - unk_0xCCD6EB3D51BA0D9E((iParam0 - 457)) * 8) * 8;
	}
	else if (iParam0 >= 1281 && iParam0 < 1305)
	{
		iVar0 = ((iParam0 - 1281) - unk_0xCCD6EB3D51BA0D9E((iParam0 - 1281)) * 8) * 8;
	}
	else if (iParam0 >= 1305 && iParam0 < 1361)
	{
		iVar0 = ((iParam0 - 1305) - unk_0xCCD6EB3D51BA0D9E((iParam0 - 1305)) * 8) * 8;
	}
	else if (iParam0 >= 1361 && iParam0 < 1393)
	{
		iVar0 = ((iParam0 - 1361) - unk_0xCCD6EB3D51BA0D9E((iParam0 - 1361)) * 8) * 8;
	}
	else if (iParam0 >= 1393 && iParam0 < 2919)
	{
		iVar0 = ((iParam0 - 1393) - unk_0xCCD6EB3D51BA0D9E((iParam0 - 1393)) * 8) * 8;
	}
	else if (iParam0 >= 4143 && iParam0 < 4207)
	{
		iVar0 = ((iParam0 - 4143) - unk_0xCCD6EB3D51BA0D9E((iParam0 - 4143)) * 8) * 8;
	}
	else if (iParam0 >= 3879 && iParam0 < 4143)
	{
		iVar0 = ((iParam0 - 3879) - unk_0xCCD6EB3D51BA0D9E((iParam0 - 3879)) * 8) * 8;
	}
	else if (iParam0 >= 4399 && iParam0 < 6028)
	{
		iVar0 = ((iParam0 - 4399) - unk_0xCCD6EB3D51BA0D9E((iParam0 - 4399)) * 8) * 8;
	}
	else if (iParam0 >= 6413 && iParam0 < 7262)
	{
		iVar0 = ((iParam0 - 6413) - unk_0xCCD6EB3D51BA0D9E((iParam0 - 6413)) * 8) * 8;
	}
	else if (iParam0 >= 7262 && iParam0 < 7313)
	{
		iVar0 = ((iParam0 - 7262) - unk_0xCCD6EB3D51BA0D9E((iParam0 - 7262)) * 8) * 8;
	}
	else if (iParam0 >= 7681 && iParam0 < 9361)
	{
		iVar0 = ((iParam0 - 7681) - unk_0xCCD6EB3D51BA0D9E((iParam0 - 7681)) * 8) * 8;
	}
	else if (iParam0 >= 9553 && iParam0 < 15265)
	{
		iVar0 = ((iParam0 - 9553) - unk_0xCCD6EB3D51BA0D9E((iParam0 - 9553)) * 8) * 8;
	}
	else if (iParam0 >= 15265 && iParam0 < 15369)
	{
		iVar0 = ((iParam0 - 15265) - unk_0xCCD6EB3D51BA0D9E((iParam0 - 15265)) * 8) * 8;
	}
	else if (iParam0 >= 7313 && iParam0 < 7321)
	{
		iVar0 = ((iParam0 - 7313) - unk_0xCCD6EB3D51BA0D9E((iParam0 - 7313)) * 8) * 8;
	}
	else if (iParam0 >= 7641 && iParam0 < 7681)
	{
		iVar0 = ((iParam0 - 7641) - unk_0xCCD6EB3D51BA0D9E((iParam0 - 7641)) * 8) * 8;
	}
	else if (iParam0 >= 16010 && iParam0 < 18098)
	{
		iVar0 = ((iParam0 - 16010) - unk_0xCCD6EB3D51BA0D9E((iParam0 - 16010)) * 8) * 8;
	}
	else if (iParam0 >= 18162 && iParam0 < 19018)
	{
		iVar0 = ((iParam0 - 18162) - unk_0xCCD6EB3D51BA0D9E((iParam0 - 18162)) * 8) * 8;
	}
	else if (iParam0 >= 19018 && iParam0 < 22066)
	{
		iVar0 = ((iParam0 - 19018) - unk_0xCCD6EB3D51BA0D9E((iParam0 - 19018)) * 8) * 8;
	}
	else if (iParam0 >= 22194 && iParam0 < 24962)
	{
		iVar0 = ((iParam0 - 22194) - unk_0xCCD6EB3D51BA0D9E((iParam0 - 22194)) * 8) * 8;
	}
	else if (iParam0 >= 25538 && iParam0 < 26810)
	{
		iVar0 = ((iParam0 - 25538) - unk_0xCCD6EB3D51BA0D9E((iParam0 - 25538)) * 8) * 8;
	}
	else if (iParam0 >= 27258 && iParam0 < 28098)
	{
		iVar0 = ((iParam0 - 27258) - unk_0xCCD6EB3D51BA0D9E((iParam0 - 27258)) * 8) * 8;
	}
	else if (iParam0 >= 28483 && iParam0 < 30227)
	{
		iVar0 = ((iParam0 - 28483) - unk_0xCCD6EB3D51BA0D9E((iParam0 - 28483)) * 8) * 8;
	}
	else if (iParam0 >= 30483 && iParam0 < 30515)
	{
		iVar0 = ((iParam0 - 30483) - unk_0xCCD6EB3D51BA0D9E((iParam0 - 30483)) * 8) * 8;
	}
	return iVar0;
}

int func_104(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam1 == -1)
	{
		iParam1 = func_144();
	}
	iVar0 = 0;
	if (iParam0 >= 384 && iParam0 < 457)
	{
		iVar0 = unk_0x169039D5869899DA((iParam0 - 384), 0, 1, iParam1);
	}
	else if (iParam0 >= 457 && iParam0 < 513)
	{
		iVar0 = unk_0x169039D5869899DA((iParam0 - 457), 1, 1, iParam1);
	}
	else if (iParam0 >= 1281 && iParam0 < 1305)
	{
		iVar0 = unk_0x169039D5869899DA((iParam0 - 1281), 0, 0, 0);
	}
	else if (iParam0 >= 1305 && iParam0 < 1361)
	{
		iVar0 = unk_0x169039D5869899DA((iParam0 - 1305), 1, 0, 0);
	}
	else if (iParam0 >= 1361 && iParam0 < 1393)
	{
		iVar0 = unk_0x33259517529FA9DD((iParam0 - 1361), 0, 0, 0);
	}
	else if (iParam0 >= 1393 && iParam0 < 2919)
	{
		iVar0 = unk_0x33259517529FA9DD((iParam0 - 1393), 0, 1, iParam1);
	}
	else if (iParam0 >= 4143 && iParam0 < 4207)
	{
		iVar0 = unk_0x7F2F9520C57D9D66((iParam0 - 4143), 0, 0, 0, "_NGPSTAT_INT");
	}
	else if (iParam0 >= 3879 && iParam0 < 4143)
	{
		iVar0 = unk_0x7F2F9520C57D9D66((iParam0 - 3879), 0, 1, iParam1, "_NGPSTAT_INT");
	}
	else if (iParam0 >= 4399 && iParam0 < 6028)
	{
		iVar0 = unk_0x7F2F9520C57D9D66((iParam0 - 4399), 0, 1, iParam1, "_LRPSTAT_INT");
	}
	else if (iParam0 >= 6413 && iParam0 < 7262)
	{
		iVar0 = unk_0x7F2F9520C57D9D66((iParam0 - 6413), 0, 1, iParam1, "_APAPSTAT_INT");
	}
	else if (iParam0 >= 7262 && iParam0 < 7313)
	{
		iVar0 = unk_0x7F2F9520C57D9D66((iParam0 - 7262), 0, 1, iParam1, "_LR2PSTAT_INT");
	}
	else if (iParam0 >= 7681 && iParam0 < 9361)
	{
		iVar0 = unk_0x7F2F9520C57D9D66((iParam0 - 7681), 0, 1, iParam1, "_BIKEPSTAT_INT");
	}
	else if (iParam0 >= 9553 && iParam0 < 15265)
	{
		iVar0 = unk_0x7F2F9520C57D9D66((iParam0 - 9553), 0, 1, iParam1, "_IMPEXPPSTAT_INT");
	}
	else if (iParam0 >= 15265 && iParam0 < 15369)
	{
		iVar0 = unk_0x7F2F9520C57D9D66((iParam0 - 15265), 0, 1, iParam1, "_GUNRPSTAT_INT");
	}
	else if (iParam0 >= 7313 && iParam0 < 7321)
	{
		iVar0 = unk_0x7F2F9520C57D9D66((iParam0 - 7313), 0, 0, 0, "_NGDLCPSTAT_INT");
	}
	else if (iParam0 >= 7641 && iParam0 < 7681)
	{
		iVar0 = unk_0x7F2F9520C57D9D66((iParam0 - 7641), 0, 1, iParam1, "_NGDLCPSTAT_INT");
	}
	else if (iParam0 >= 16010 && iParam0 < 18098)
	{
		iVar0 = unk_0x7F2F9520C57D9D66((iParam0 - 16010), 0, 1, iParam1, "_DLCSMUGCHARPSTAT_INT");
	}
	else if (iParam0 >= 18162 && iParam0 < 19018)
	{
		iVar0 = unk_0x7F2F9520C57D9D66((iParam0 - 18162), 0, 1, iParam1, "_GANGOPSPSTAT_INT");
	}
	else if (iParam0 >= 19018 && iParam0 < 22066)
	{
		iVar0 = unk_0x7F2F9520C57D9D66((iParam0 - 19018), 0, 1, iParam1, "_BUSINESSBATPSTAT_INT");
	}
	else if (iParam0 >= 22194 && iParam0 < 24962)
	{
		iVar0 = unk_0x7F2F9520C57D9D66((iParam0 - 22194), 0, 1, iParam1, "_ARENAWARSPSTAT_INT");
	}
	else if (iParam0 >= 25538 && iParam0 < 26810)
	{
		iVar0 = unk_0x7F2F9520C57D9D66((iParam0 - 25538), 0, 1, iParam1, "_CASINOPSTAT_INT");
	}
	else if (iParam0 >= 27258 && iParam0 < 28098)
	{
		iVar0 = unk_0x7F2F9520C57D9D66((iParam0 - 27258), 0, 1, iParam1, "_CASINOHSTPSTAT_INT");
	}
	else if (iParam0 >= 28483 && iParam0 < 30227)
	{
		iVar0 = unk_0x7F2F9520C57D9D66((iParam0 - 28483), 0, 1, iParam1, "_SU20PSTAT_INT");
	}
	else if (iParam0 >= 30483 && iParam0 < 30515)
	{
		iVar0 = unk_0x7F2F9520C57D9D66((iParam0 - 30483), 0, 1, iParam1, "_HISLANDPSTAT_INT");
	}
	return iVar0;
}

int func_105()
{
	if (func_102(18981, -1, -1) >= 4)
	{
		return 1;
	}
	return 0;
}

int func_106()
{
	int iVar0;
	
	if (unk_0x011A67D2B195B6EB())
	{
		if (unk_0xB6E5F77B7062D58A())
		{
			if (unk_0xE06C56C6444527A6())
			{
				unk_0xD2F202166691EDB2(joaat("SP_UNLOCK_EXCLUS_CONTENT"), &iVar0, -1);
				unk_0xBE20AB8238688965(&iVar0, 2);
				unk_0xBE20AB8238688965(&iVar0, 4);
				unk_0xBE20AB8238688965(&iVar0, 6);
				unk_0xBE20AB8238688965(&Global_25, 2);
				unk_0xBE20AB8238688965(&Global_25, 4);
				unk_0xBE20AB8238688965(&Global_25, 6);
				unk_0x6000E4684CB4330B(joaat("SP_UNLOCK_EXCLUS_CONTENT"), iVar0, 1);
				if (unk_0x3D1E37C2BD9F339F())
				{
					iVar0 = unk_0xFCBF95335DD16537(866);
					unk_0xBE20AB8238688965(&iVar0, 0);
					unk_0xB2B72C9FCE371E70(iVar0);
				}
				return 1;
			}
		}
	}
	if (Global_150693 == 2)
	{
		return 1;
	}
	else if (Global_150693 == 3)
	{
		return 0;
	}
	if (unk_0x3D1E37C2BD9F339F())
	{
		if (unk_0xCE990E643CD9D0E5(unk_0xFCBF95335DD16537(866), 0))
		{
			return 1;
		}
	}
	return 0;
}

int func_107(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		if (unk_0xCE990E643CD9D0E5(Global_111858.f_668.f_1313, 2))
		{
			return 1;
		}
	}
	if (unk_0x2A4512DFA7EDB2F9())
	{
		if (!bParam1 || unk_0x0EB6C63A09FD9DF1())
		{
			if (!unk_0x59ED414969A48197() && !unk_0xDCA0815D900F27F8())
			{
				return 1;
			}
		}
	}
	if (bParam1)
	{
		if (unk_0xAC9BDC8868BA314A())
		{
			return 0;
		}
	}
	if (unk_0x2A4512DFA7EDB2F9())
	{
		return 1;
	}
	return 0;
}

void func_108(int iParam0, var uParam1, int iParam2, int iParam3)
{
	struct<2> Var0;
	char cVar1[16];
	float fVar2;
	var uVar3;
	var uVar4;
	int iVar5;
	var uVar6;
	struct<5> Var7;
	struct<5> Var8;
	struct<5> Var9;
	int iVar10;
	int iVar11;
	int iVar12;
	bool bVar13;
	
	iParam3 = iParam3;
	StringCopy(&Var0, func_26(iParam0, 0), 16);
	if (((iParam0 == joaat("WEAPON_DOUBLEACTION") || iParam0 == joaat("weapon_compactrifle")) || iParam0 == joaat("WEAPON_COMPACTLAUNCHER")) || iParam0 == joaat("weapon_marksmanrifle"))
	{
		StringCopy(&cVar1, func_138(iParam0, 1), 16);
	}
	else
	{
		StringCopy(&cVar1, func_138(iParam0, 0), 16);
	}
	fVar2 = func_135(iParam0);
	uVar3 = func_134(iParam0, iParam2);
	uVar4 = func_133(iParam0, iParam2);
	iVar5 = func_132(iParam0, iParam2);
	uVar6 = func_131(iParam0, iParam2);
	unk_0x9CC9B76600FC1D05(iParam0, &Var7);
	Var7.f_2 = unk_0x9CA73249BF1EBC1D(iParam0);
	bVar13 = false;
	iVar12 = 0;
	while (iVar12 <= 8)
	{
		if (uParam1->f_1[iVar12] == 0 && unk_0xC655D10BB6E32EF1(iParam0))
		{
			if (func_96(iParam0))
			{
				if (func_94(1623028892, func_95(iParam0), -1))
				{
					bVar13 = true;
				}
				else
				{
					bVar13 = false;
				}
			}
			else if (func_90(iParam0, iParam2, 0))
			{
				bVar13 = true;
				if (bVar13)
				{
				}
			}
			else
			{
				bVar13 = false;
			}
			iVar11 = 0;
			while (iVar11 <= 35)
			{
				iVar10 = func_85(iParam0, iVar11);
				if (iVar10 != 0)
				{
					if (func_53(iVar10, iParam0, iParam2) && bVar13)
					{
						if (unk_0xF3C6D5A430C2B2BA(iVar10, &Var8))
						{
							Var9 = (Var9 + Var8);
							Var9.f_1 = (Var9.f_1 + Var8.f_1);
							Var9.f_3 = (Var9.f_3 + Var8.f_3);
							Var9.f_4 = (Var9.f_4 + Var8.f_4);
						}
					}
					if (func_64(iVar10, iParam0, iParam2))
					{
						if (func_130(iVar10))
						{
							Var9.f_2 = func_129(iParam0);
						}
						else if (func_128(iVar10))
						{
							Var9.f_2 = func_127(iParam0);
						}
					}
					if (func_94(iVar10, iParam0, iParam2))
					{
					}
				}
				iVar11++;
			}
			if (Var9.f_2 == 0)
			{
				Var9.f_2 = Var7.f_2;
			}
			func_126(iVar12, &Var0, &cVar1, uParam1);
			func_125(iVar12, Var7, uParam1);
			func_124(iVar12, Var9, uParam1);
			if (func_15(iParam0))
			{
				func_123(iVar12, -1, uParam1);
				func_122(iVar12, Var9.f_3, uParam1);
				func_121(iVar12, -1, uParam1);
				func_120(iVar12, Var9.f_4, uParam1);
				func_119(iVar12, -1, uParam1);
				func_118(iVar12, Var9.f_2, uParam1);
			}
			else
			{
				func_123(iVar12, Var7.f_3, uParam1);
				func_122(iVar12, Var9.f_3, uParam1);
				func_121(iVar12, Var7.f_4, uParam1);
				func_120(iVar12, Var9.f_4, uParam1);
				func_119(iVar12, Var7.f_2, uParam1);
				func_118(iVar12, Var9.f_2, uParam1);
			}
			func_117(iVar12, uVar4, uParam1);
			func_116(iVar12, uVar3, uParam1);
			if (func_15(iParam0))
			{
				func_115(iVar12, -1f, uParam1);
				func_114(iVar12, -1, uParam1);
			}
			else
			{
				func_115(iVar12, fVar2, uParam1);
				func_114(iVar12, iVar5, uParam1);
			}
			func_113(iVar12, uVar6, uParam1);
			func_112(iVar12, Var7.f_1, uParam1);
			func_111(iVar12, Var9.f_1, uParam1);
			func_110(iVar12, iParam0, uParam1);
			func_109(iParam2, uParam1);
			uParam1->f_1[iVar12] = 1;
			iVar12 = 9;
		}
		iVar12++;
	}
}

void func_109(int iParam0, var uParam1)
{
	uParam1->f_276 = iParam0;
}

void func_110(int iParam0, int iParam1, var uParam2)
{
	uParam2->f_85[iParam0] = iParam1;
}

void func_111(int iParam0, var uParam1, var uParam2)
{
	uParam2->f_205[iParam0] = uParam1;
}

void func_112(int iParam0, var uParam1, var uParam2)
{
	uParam2->f_155[iParam0] = uParam1;
}

void func_113(int iParam0, var uParam1, var uParam2)
{
	uParam2->f_135[iParam0] = uParam1;
}

void func_114(int iParam0, int iParam1, var uParam2)
{
	uParam2->f_125[iParam0] = iParam1;
}

void func_115(int iParam0, float fParam1, var uParam2)
{
	uParam2->f_115[iParam0] = fParam1;
}

void func_116(int iParam0, var uParam1, var uParam2)
{
	uParam2->f_95[iParam0] = uParam1;
}

void func_117(int iParam0, var uParam1, var uParam2)
{
	uParam2->f_105[iParam0] = uParam1;
}

void func_118(int iParam0, var uParam1, var uParam2)
{
	uParam2->f_215[iParam0] = uParam1;
}

void func_119(int iParam0, int iParam1, var uParam2)
{
	uParam2->f_165[iParam0] = iParam1;
}

void func_120(int iParam0, var uParam1, var uParam2)
{
	uParam2->f_235[iParam0] = uParam1;
}

void func_121(int iParam0, int iParam1, var uParam2)
{
	uParam2->f_175[iParam0] = iParam1;
}

void func_122(int iParam0, var uParam1, var uParam2)
{
	uParam2->f_225[iParam0] = uParam1;
}

void func_123(int iParam0, int iParam1, var uParam2)
{
	uParam2->f_185[iParam0] = iParam1;
}

void func_124(int iParam0, var uParam1, var uParam2)
{
	uParam2->f_195[iParam0] = uParam1;
}

void func_125(int iParam0, var uParam1, var uParam2)
{
	uParam2->f_145[iParam0] = uParam1;
}

void func_126(int iParam0, char* sParam1, char* sParam2, var uParam3)
{
	StringCopy(&(uParam3->f_11[iParam0 /*4*/]), sParam1, 16);
	StringCopy(&(uParam3->f_48[iParam0 /*4*/]), sParam2, 16);
}

int func_127(int iParam0)
{
	switch (iParam0)
	{
		case joaat("weapon_pistol"):
			return 16;
		
		case joaat("weapon_combatpistol"):
			return 16;
		
		case joaat("weapon_appistol"):
			return 36;
		
		case joaat("WEAPON_PISTOL_MK2"):
			return 16;
		
		case joaat("weapon_microsmg"):
			return 30;
		
		case joaat("weapon_smg"):
			return 60;
		
		case joaat("WEAPON_SMG_MK2"):
			return 60;
		
		case joaat("weapon_assaultrifle"):
			return 60;
		
		case joaat("weapon_carbinerifle"):
			return 60;
		
		case joaat("weapon_advancedrifle"):
			return 60;
		
		case joaat("WEAPON_ASSAULTRIFLE_MK2"):
			return 60;
		
		case joaat("WEAPON_CARBINERIFLE_MK2"):
			return 60;
		
		case joaat("weapon_mg"):
			return 100;
		
		case joaat("weapon_combatmg"):
			return 200;
		
		case joaat("WEAPON_COMBATMG_MK2"):
			return 200;
		
		case joaat("weapon_assaultshotgun"):
			return 32;
		
		case joaat("weapon_pistol50"):
			return 12;
		
		case joaat("weapon_assaultsmg"):
			return 60;
		
		case joaat("weapon_snspistol"):
			return 12;
		
		case joaat("weapon_specialcarbine"):
			return 60;
		
		case joaat("weapon_bullpuprifle"):
			return 60;
		
		case joaat("weapon_heavypistol"):
			return 36;
		
		case joaat("weapon_vintagepistol"):
			return 14;
		
		case joaat("weapon_gusenberg"):
			return 50;
		
		case joaat("weapon_marksmanrifle"):
			return 16;
		
		case joaat("weapon_heavyshotgun"):
			return 12;
		
		case joaat("weapon_combatpdw"):
			return 60;
		
		case joaat("weapon_compactrifle"):
			return 60;
		
		case joaat("weapon_machinepistol"):
			return 20;
		
		case joaat("WEAPON_MINISMG"):
			return 30;
		
		default:
	}
	return 0;
	return 0;
}

int func_128(int iParam0)
{
	switch (iParam0)
	{
		case joaat("component_pistol_clip_02"):
			return 1;
			break;
		
		case joaat("component_combatpistol_clip_02"):
			return 1;
			break;
		
		case joaat("component_appistol_clip_02"):
			return 1;
			break;
		
		case joaat("component_microsmg_clip_02"):
			return 1;
			break;
		
		case joaat("component_smg_clip_02"):
			return 1;
			break;
		
		case joaat("component_assaultrifle_clip_02"):
			return 1;
			break;
		
		case joaat("component_carbinerifle_clip_02"):
			return 1;
			break;
		
		case joaat("component_advancedrifle_clip_02"):
			return 1;
			break;
		
		case joaat("component_mg_clip_02"):
			return 1;
			break;
		
		case joaat("component_combatmg_clip_02"):
			return 1;
			break;
		
		case joaat("component_assaultshotgun_clip_02"):
			return 1;
			break;
		
		case joaat("component_assaultsmg_clip_02"):
			return 1;
			break;
		
		case joaat("component_pistol50_clip_02"):
			return 1;
			break;
		
		case -507117574:
			return 1;
			break;
		
		case 1048471894:
			return 1;
			break;
		
		case 1824470811:
			return 1;
			break;
		
		case joaat("component_specialcarbine_clip_02"):
			return 1;
			break;
		
		case joaat("component_bullpuprifle_clip_02"):
			return 1;
			break;
		
		case joaat("component_heavypistol_clip_02"):
			return 1;
			break;
		
		case joaat("component_snspistol_clip_02"):
			return 1;
			break;
		
		case joaat("component_vintagepistol_clip_02"):
			return 1;
			break;
		
		case joaat("component_gusenberg_clip_02"):
			return 1;
			break;
		
		case joaat("component_heavyshotgun_clip_02"):
			return 1;
			break;
		
		case joaat("component_marksmanrifle_clip_02"):
			return 1;
			break;
		
		case joaat("component_combatpdw_clip_02"):
			return 1;
			break;
		
		case joaat("component_compactrifle_clip_02"):
			return 1;
			break;
		
		case joaat("component_machinepistol_clip_02"):
			return 1;
			break;
		
		case joaat("COMPONENT_ASSAULTRIFLE_MK2_CLIP_02"):
			return 1;
			break;
		
		case joaat("COMPONENT_CARBINERIFLE_MK2_CLIP_02"):
			return 1;
			break;
		
		case joaat("COMPONENT_COMBATMG_MK2_CLIP_02"):
			return 1;
			break;
		
		case joaat("COMPONENT_HEAVYSNIPER_MK2_CLIP_02"):
			return 1;
			break;
		
		case joaat("COMPONENT_PISTOL_MK2_CLIP_02"):
			return 1;
			break;
		
		case joaat("COMPONENT_SMG_MK2_CLIP_02"):
			return 1;
			break;
		
		case joaat("COMPONENT_MINISMG_CLIP_02"):
			return 1;
			break;
	}
	return 0;
}

int func_129(int iParam0)
{
	switch (iParam0)
	{
		case joaat("weapon_smg"):
			return 100;
		
		case joaat("weapon_assaultrifle"):
			return 100;
		
		case joaat("weapon_carbinerifle"):
			return 100;
		
		case joaat("WEAPON_SMG_MK2"):
			return 100;
		
		case joaat("WEAPON_ASSAULTRIFLE_MK2"):
			return 100;
		
		case joaat("WEAPON_CARBINERIFLE_MK2"):
			return 100;
		
		case joaat("weapon_specialcarbine"):
			return 100;
		
		case joaat("weapon_heavyshotgun"):
			return 30;
		
		case joaat("weapon_combatpdw"):
			return 100;
		
		case joaat("weapon_compactrifle"):
			return 100;
		
		case joaat("weapon_machinepistol"):
			return 30;
		
		default:
	}
	return 0;
	return 0;
}

int func_130(int iParam0)
{
	switch (iParam0)
	{
		case joaat("component_assaultrifle_clip_03"):
			return 1;
			break;
		
		case joaat("component_carbinerifle_clip_03"):
			return 1;
			break;
		
		case joaat("component_combatpdw_clip_03"):
			return 1;
			break;
		
		case joaat("component_compactrifle_clip_03"):
			return 1;
			break;
		
		case joaat("component_heavyshotgun_clip_03"):
			return 1;
			break;
		
		case joaat("component_machinepistol_clip_03"):
			return 1;
			break;
		
		case joaat("component_smg_clip_03"):
			return 1;
			break;
		
		case joaat("component_specialcarbine_clip_03"):
			return 1;
			break;
	}
	return 0;
}

float func_131(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case joaat("weapon_pistol"):
		case joaat("WEAPON_PISTOL_MK2"):
			return (to_float(func_34(250, iParam1, 0)) / to_float(func_34(251, iParam1, 0)));
		
		case joaat("weapon_combatpistol"):
			return (to_float(func_34(260, iParam1, 0)) / to_float(func_34(261, iParam1, 0)));
		
		case joaat("weapon_appistol"):
			return (to_float(func_34(280, iParam1, 0)) / to_float(func_34(281, iParam1, 0)));
		
		case joaat("weapon_microsmg"):
			return (to_float(func_34(290, iParam1, 0)) / to_float(func_34(291, iParam1, 0)));
		
		case joaat("weapon_smg"):
		case joaat("WEAPON_SMG_MK2"):
			return (to_float(func_34(300, iParam1, 0)) / to_float(func_34(301, iParam1, 0)));
		
		case joaat("weapon_assaultrifle"):
		case joaat("WEAPON_ASSAULTRIFLE_MK2"):
			return (to_float(func_34(320, iParam1, 0)) / to_float(func_34(321, iParam1, 0)));
		
		case joaat("weapon_carbinerifle"):
		case joaat("WEAPON_CARBINERIFLE_MK2"):
			return (to_float(func_34(329, iParam1, 0)) / to_float(func_34(330, iParam1, 0)));
		
		case joaat("weapon_advancedrifle"):
			return (to_float(func_34(338, iParam1, 0)) / to_float(func_34(339, iParam1, 0)));
		
		case joaat("weapon_mg"):
			return (to_float(func_34(347, iParam1, 0)) / to_float(func_34(348, iParam1, 0)));
		
		case joaat("weapon_combatmg"):
		case joaat("WEAPON_COMBATMG_MK2"):
			return (to_float(func_34(356, iParam1, 0)) / to_float(func_34(357, iParam1, 0)));
		
		case joaat("weapon_pumpshotgun"):
			return (to_float(func_34(374, iParam1, 0)) / to_float(func_34(375, iParam1, 0)));
		
		case joaat("weapon_sawnoffshotgun"):
			return (to_float(func_34(383, iParam1, 0)) / to_float(func_34(384, iParam1, 0)));
		
		case joaat("weapon_assaultshotgun"):
			return (to_float(func_34(402, iParam1, 0)) / to_float(func_34(403, iParam1, 0)));
		
		case joaat("weapon_sniperrifle"):
		case joaat("WEAPON_HEAVYSNIPER_MK2"):
			return (to_float(func_34(421, iParam1, 0)) / to_float(func_34(422, iParam1, 0)));
		
		case joaat("weapon_heavysniper"):
			return (to_float(func_34(430, iParam1, 0)) / to_float(func_34(431, iParam1, 0)));
		
		case joaat("weapon_grenadelauncher"):
			return (to_float(func_34(441, iParam1, 0)) / to_float(func_34(442, iParam1, 0)));
		
		case joaat("weapon_rpg"):
			return (to_float(func_34(448, iParam1, 0)) / to_float(func_34(449, iParam1, 0)));
		
		case joaat("weapon_minigun"):
			return (to_float(func_34(455, iParam1, 0)) / to_float(func_34(456, iParam1, 0)));
		
		case joaat("weapon_grenade"):
			return (to_float(func_34(464, iParam1, 0)) / to_float(func_34(465, iParam1, 0)));
		
		case joaat("weapon_smokegrenade"):
			return (to_float(func_34(472, iParam1, 0)) / to_float(func_34(473, iParam1, 0)));
		
		case joaat("weapon_stickybomb"):
			return (to_float(func_34(481, iParam1, 0)) / to_float(func_34(482, iParam1, 0)));
		
		case joaat("weapon_molotov"):
			return (to_float(func_34(489, iParam1, 0)) / to_float(func_34(490, iParam1, 0)));
		
		case joaat("weapon_stungun"):
			return (to_float(func_34(411, iParam1, 0)) / to_float(func_34(412, iParam1, 0)));
		
		case joaat("weapon_knife"):
			return (to_float(func_34(193, iParam1, 0)) / to_float(func_34(195, iParam1, 0)));
		
		case joaat("weapon_nightstick"):
			return (to_float(func_34(201, iParam1, 0)) / to_float(func_34(203, iParam1, 0)));
		
		case joaat("weapon_hammer"):
			return (to_float(func_34(229, iParam1, 0)) / to_float(func_34(231, iParam1, 0)));
		
		case joaat("weapon_bat"):
			return (to_float(func_34(236, iParam1, 0)) / to_float(func_34(238, iParam1, 0)));
		
		case joaat("weapon_crowbar"):
			return (to_float(func_34(208, iParam1, 0)) / to_float(func_34(210, iParam1, 0)));
		
		case joaat("weapon_golfclub"):
			return (to_float(func_34(243, iParam1, 0)) / to_float(func_34(245, iParam1, 0)));
		
		case joaat("weapon_pistol50"):
			return (to_float(func_34(270, iParam1, 0)) / to_float(func_34(271, iParam1, 0)));
		
		case joaat("weapon_assaultsmg"):
			return (to_float(func_34(310, iParam1, 0)) / to_float(func_34(311, iParam1, 0)));
		
		case joaat("weapon_bullpupshotgun"):
			return (to_float(func_34(393, iParam1, 0)) / to_float(func_34(394, iParam1, 0)));
		
		case -572349828:
			return (to_float(func_34(365, iParam1, 0)) / to_float(func_34(366, iParam1, 0)));
		
		case 392730790:
			return (to_float(func_34(320, iParam1, 0)) / to_float(func_34(321, iParam1, 0)));
		
		case -947031628:
			return (to_float(func_34(430, iParam1, 0)) / to_float(func_34(431, iParam1, 0)));
		
		case -1887867191:
			return (to_float(func_34(320, iParam1, 0)) / to_float(func_34(321, iParam1, 0)));
		
		case joaat("weapon_bottle"):
			return (to_float(func_34(1730, iParam1, 0)) / to_float(func_34(1731, iParam1, 0)));
		
		case joaat("weapon_snspistol"):
			return (to_float(func_34(1740, iParam1, 0)) / to_float(func_34(1741, iParam1, 0)));
		
		case joaat("weapon_specialcarbine"):
			return (to_float(func_34(9609, iParam1, 0)) / to_float(func_34(9610, iParam1, 0)));
		
		case joaat("weapon_bullpuprifle"):
			return (to_float(func_34(9619, iParam1, 0)) / to_float(func_34(9620, iParam1, 0)));
		
		case joaat("weapon_heavypistol"):
			return (to_float(func_34(9599, iParam1, 0)) / to_float(func_34(9600, iParam1, 0)));
		
		case joaat("weapon_dagger"):
			return (to_float(func_34(9902, iParam1, 0)) / to_float(func_34(9903, iParam1, 0)));
		
		case joaat("weapon_vintagepistol"):
			return (to_float(func_34(9912, iParam1, 0)) / to_float(func_34(9913, iParam1, 0)));
		
		case joaat("weapon_gusenberg"):
			return (to_float(func_34(9629, iParam1, 0)) / to_float(func_34(9630, iParam1, 0)));
		
		case joaat("weapon_musket"):
			return (to_float(func_34(9932, iParam1, 0)) / to_float(func_34(9933, iParam1, 0)));
		
		case joaat("weapon_firework"):
			return (to_float(func_34(9922, iParam1, 0)) / to_float(func_34(9923, iParam1, 0)));
		
		case joaat("weapon_heavyshotgun"):
			return (to_float(func_34(10010, iParam1, 0)) / to_float(func_34(10011, iParam1, 0)));
		
		case joaat("weapon_marksmanrifle"):
			return (to_float(func_34(10020, iParam1, 0)) / to_float(func_34(10021, iParam1, 0)));
		
		case joaat("weapon_hominglauncher"):
			return (to_float(func_34(10046, iParam1, 0)) / to_float(func_34(10047, iParam1, 0)));
		
		case joaat("weapon_proxmine"):
			return (to_float(func_34(10038, iParam1, 0)) / to_float(func_34(10039, iParam1, 0)));
		
		case joaat("weapon_combatpdw"):
			return (to_float(func_34(10054, iParam1, 0)) / to_float(func_34(10055, iParam1, 0)));
		
		case joaat("weapon_marksmanpistol"):
			return (to_float(func_34(10071, iParam1, 0)) / to_float(func_34(10072, iParam1, 0)));
		
		case joaat("weapon_knuckle"):
			return (to_float(func_34(10064, iParam1, 0)) / to_float(func_34(10065, iParam1, 0)));
		
		case joaat("weapon_machete"):
			return (to_float(func_34(10081, iParam1, 0)) / to_float(func_34(10082, iParam1, 0)));
		
		case joaat("weapon_machinepistol"):
			return (to_float(func_34(10089, iParam1, 0)) / to_float(func_34(10090, iParam1, 0)));
		
		case joaat("weapon_flashlight"):
			return (to_float(func_34(10127, iParam1, 0)) / to_float(func_34(10128, iParam1, 0)));
		
		case joaat("weapon_switchblade"):
			return (to_float(func_34(10155, iParam1, 0)) / to_float(func_34(10156, iParam1, 0)));
		
		case joaat("weapon_revolver"):
			return (to_float(func_34(10145, iParam1, 0)) / to_float(func_34(10146, iParam1, 0)));
		
		case joaat("weapon_dbshotgun"):
			return (to_float(func_34(10117, iParam1, 0)) / to_float(func_34(10118, iParam1, 0)));
		
		case joaat("weapon_compactrifle"):
			return (to_float(func_34(10107, iParam1, 0)) / to_float(func_34(10108, iParam1, 0)));
		
		case joaat("weapon_hatchet"):
			return (to_float(func_34(10030, iParam1, 0)) / to_float(func_34(10031, iParam1, 0)));
		
		case joaat("WEAPON_AUTOSHOTGUN"):
			return (to_float(func_34(10196, iParam1, 0)) / to_float(func_34(10197, iParam1, 0)));
		
		case joaat("WEAPON_BATTLEAXE"):
			return (to_float(func_34(10206, iParam1, 0)) / to_float(func_34(10207, iParam1, 0)));
		
		case joaat("WEAPON_COMPACTLAUNCHER"):
			return (to_float(func_34(10212, iParam1, 0)) / to_float(func_34(10213, iParam1, 0)));
		
		case joaat("WEAPON_MINISMG"):
			return (to_float(func_34(10222, iParam1, 0)) / to_float(func_34(10223, iParam1, 0)));
		
		case joaat("WEAPON_PIPEBOMB"):
			return (to_float(func_34(10232, iParam1, 0)) / to_float(func_34(10233, iParam1, 0)));
		
		case joaat("WEAPON_POOLCUE"):
			return (to_float(func_34(10240, iParam1, 0)) / to_float(func_34(10241, iParam1, 0)));
		
		case joaat("WEAPON_WRENCH"):
			return (to_float(func_34(222, iParam1, 0)) / to_float(func_34(224, iParam1, 0)));
		
		case joaat("WEAPON_BULLPUPRIFLE_MK2"):
			return (to_float(func_34(10704, iParam1, 0)) / to_float(func_34(10705, iParam1, 0)));
		
		case joaat("WEAPON_MARKSMANRIFLE_MK2"):
			return (to_float(func_34(10724, iParam1, 0)) / to_float(func_34(10725, iParam1, 0)));
		
		case joaat("WEAPON_PUMPSHOTGUN_MK2"):
			return (to_float(func_34(10714, iParam1, 0)) / to_float(func_34(10715, iParam1, 0)));
		
		case joaat("WEAPON_REVOLVER_MK2"):
			return (to_float(func_34(10734, iParam1, 0)) / to_float(func_34(10735, iParam1, 0)));
		
		case joaat("WEAPON_SNSPISTOL_MK2"):
			return (to_float(func_34(10754, iParam1, 0)) / to_float(func_34(10755, iParam1, 0)));
		
		case joaat("WEAPON_SPECIALCARBINE_MK2"):
			return (to_float(func_34(10764, iParam1, 0)) / to_float(func_34(10765, iParam1, 0)));
		
		case joaat("WEAPON_DOUBLEACTION"):
			return (to_float(func_34(10744, iParam1, 0)) / to_float(func_34(10745, iParam1, 0)));
		
		case joaat("WEAPON_STONE_HATCHET"):
			return (to_float(func_34(10967, iParam1, 0)) / to_float(func_34(10968, iParam1, 0)));
		
		case joaat("WEAPON_RAYPISTOL"):
			return (to_float(func_34(11124, iParam1, 0)) / to_float(func_34(11125, iParam1, 0)));
		
		case joaat("WEAPON_RAYCARBINE"):
			return (to_float(func_34(11134, iParam1, 0)) / to_float(func_34(11135, iParam1, 0)));
		
		case joaat("WEAPON_RAYMINIGUN"):
			return (to_float(func_34(11144, iParam1, 0)) / to_float(func_34(11145, iParam1, 0)));
		
		case joaat("WEAPON_NAVYREVOLVER"):
			return (to_float(func_34(11575, iParam1, 0)) / to_float(func_34(11576, iParam1, 0)));
		
		case joaat("WEAPON_CERAMICPISTOL"):
			return (to_float(func_34(11565, iParam1, 0)) / to_float(func_34(11566, iParam1, 0)));
		
		case -1658906650:
			return (to_float(func_34(11735, iParam1, 0)) / to_float(func_34(11736, iParam1, 0)));
		
		case 94989220:
			return (to_float(func_34(11715, iParam1, 0)) / to_float(func_34(11716, iParam1, 0)));
		
		case 1470379660:
			return (to_float(func_34(11725, iParam1, 0)) / to_float(func_34(11726, iParam1, 0)));
		
		default:
	}
	return 0f;
}

int func_132(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case joaat("weapon_pistol"):
			return func_34(254, iParam1, 0);
		
		case joaat("weapon_combatpistol"):
			return func_34(264, iParam1, 0);
		
		case joaat("weapon_appistol"):
			return func_34(284, iParam1, 0);
		
		case joaat("weapon_microsmg"):
			return func_34(294, iParam1, 0);
		
		case joaat("weapon_smg"):
			return func_34(304, iParam1, 0);
		
		case joaat("weapon_assaultrifle"):
			return func_34(324, iParam1, 0);
		
		case joaat("weapon_carbinerifle"):
			return func_34(333, iParam1, 0);
		
		case joaat("weapon_advancedrifle"):
			return func_34(342, iParam1, 0);
		
		case joaat("weapon_mg"):
			return func_34(351, iParam1, 0);
		
		case joaat("weapon_combatmg"):
			return func_34(360, iParam1, 0);
		
		case joaat("weapon_pumpshotgun"):
			return func_34(378, iParam1, 0);
		
		case joaat("weapon_sawnoffshotgun"):
			return func_34(387, iParam1, 0);
		
		case joaat("weapon_assaultshotgun"):
			return func_34(406, iParam1, 0);
		
		case joaat("weapon_sniperrifle"):
			return func_34(425, iParam1, 0);
		
		case joaat("weapon_heavysniper"):
			return func_34(434, iParam1, 0);
		
		case joaat("weapon_minigun"):
			return func_34(459, iParam1, 0);
		
		case joaat("weapon_pistol50"):
			return func_34(274, iParam1, 0);
		
		case joaat("weapon_assaultsmg"):
			return func_34(314, iParam1, 0);
		
		case -947031628:
			return func_34(434, iParam1, 0);
		
		case joaat("weapon_bullpupshotgun"):
			return func_34(397, iParam1, 0);
		
		case -572349828:
			return func_34(369, iParam1, 0);
		
		case 392730790:
			return func_34(324, iParam1, 0);
		
		case -1887867191:
			return func_34(324, iParam1, 0);
		
		case -837150131:
			return func_34(324, iParam1, 0);
		
		case joaat("weapon_snspistol"):
			return func_34(1744, iParam1, 0);
		
		case joaat("weapon_specialcarbine"):
			return func_34(9613, iParam1, 0);
		
		case joaat("weapon_bullpuprifle"):
			return func_34(9623, iParam1, 0);
		
		case joaat("weapon_heavypistol"):
			return func_34(9603, iParam1, 0);
		
		case joaat("weapon_vintagepistol"):
			return func_34(9916, iParam1, 0);
		
		case joaat("weapon_gusenberg"):
			return func_34(9633, iParam1, 0);
		
		case joaat("weapon_musket"):
			return func_34(9936, iParam1, 0);
		
		case joaat("weapon_firework"):
			return func_34(9926, iParam1, 0);
		
		case joaat("weapon_heavyshotgun"):
			return func_34(10014, iParam1, 0);
		
		case joaat("weapon_marksmanrifle"):
			return func_34(10024, iParam1, 0);
		
		case joaat("weapon_combatpdw"):
			return func_34(10058, iParam1, 0);
		
		case joaat("weapon_marksmanpistol"):
			return func_34(10075, iParam1, 0);
		
		case joaat("weapon_machinepistol"):
			return func_34(10093, iParam1, 0);
		
		case joaat("weapon_revolver"):
			return func_34(10149, iParam1, 0);
		
		case joaat("weapon_dbshotgun"):
			return func_34(10121, iParam1, 0);
		
		case joaat("weapon_compactrifle"):
			return func_34(10111, iParam1, 0);
		
		case joaat("WEAPON_AUTOSHOTGUN"):
			return func_34(10200, iParam1, 0);
		
		case joaat("WEAPON_MINISMG"):
			return func_34(10226, iParam1, 0);
		
		case joaat("WEAPON_PISTOL_MK2"):
			return func_34(254, iParam1, 0);
		
		case joaat("WEAPON_SMG_MK2"):
			return func_34(304, iParam1, 0);
		
		case joaat("WEAPON_HEAVYSNIPER_MK2"):
			return func_34(434, iParam1, 0);
		
		case joaat("WEAPON_COMBATMG_MK2"):
			return func_34(360, iParam1, 0);
		
		case joaat("WEAPON_ASSAULTRIFLE_MK2"):
			return func_34(324, iParam1, 0);
		
		case joaat("WEAPON_CARBINERIFLE_MK2"):
			return func_34(333, iParam1, 0);
		
		case joaat("WEAPON_BULLPUPRIFLE_MK2"):
			return func_34(10708, iParam1, 0);
		
		case joaat("WEAPON_MARKSMANRIFLE_MK2"):
			return func_34(10728, iParam1, 0);
		
		case joaat("WEAPON_PUMPSHOTGUN_MK2"):
			return func_34(10718, iParam1, 0);
		
		case joaat("WEAPON_REVOLVER_MK2"):
			return func_34(10738, iParam1, 0);
		
		case joaat("WEAPON_SNSPISTOL_MK2"):
			return func_34(10758, iParam1, 0);
		
		case joaat("WEAPON_SPECIALCARBINE_MK2"):
			return func_34(10768, iParam1, 0);
		
		case joaat("WEAPON_DOUBLEACTION"):
			return func_34(10748, iParam1, 0);
		
		case joaat("WEAPON_RAYPISTOL"):
			return func_34(11128, iParam1, 0);
		
		case joaat("WEAPON_RAYCARBINE"):
			return func_34(11138, iParam1, 0);
		
		case joaat("WEAPON_RAYMINIGUN"):
			return func_34(11148, iParam1, 0);
		
		case -1658906650:
			return func_34(11739, iParam1, 0);
		
		case 94989220:
			return func_34(11719, iParam1, 0);
		
		case 1470379660:
			return func_34(11729, iParam1, 0);
		
		default:
	}
	return 0;
}

int func_133(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case joaat("weapon_pistol"):
			return func_34(251, iParam1, 0);
		
		case joaat("weapon_combatpistol"):
			return func_34(261, iParam1, 0);
		
		case joaat("weapon_appistol"):
			return func_34(281, iParam1, 0);
		
		case joaat("weapon_microsmg"):
			return func_34(291, iParam1, 0);
		
		case joaat("weapon_smg"):
			return func_34(301, iParam1, 0);
		
		case joaat("weapon_assaultrifle"):
			return func_34(321, iParam1, 0);
		
		case joaat("weapon_carbinerifle"):
			return func_34(330, iParam1, 0);
		
		case joaat("weapon_advancedrifle"):
			return func_34(339, iParam1, 0);
		
		case joaat("weapon_mg"):
			return func_34(348, iParam1, 0);
		
		case joaat("weapon_combatmg"):
			return func_34(357, iParam1, 0);
		
		case joaat("weapon_pumpshotgun"):
			return func_34(375, iParam1, 0);
		
		case joaat("weapon_sawnoffshotgun"):
			return func_34(384, iParam1, 0);
		
		case joaat("weapon_assaultshotgun"):
			return func_34(403, iParam1, 0);
		
		case joaat("weapon_sniperrifle"):
			return func_34(422, iParam1, 0);
		
		case joaat("weapon_heavysniper"):
			return func_34(431, iParam1, 0);
		
		case joaat("weapon_grenadelauncher"):
			return func_34(442, iParam1, 0);
		
		case joaat("weapon_rpg"):
			return func_34(449, iParam1, 0);
		
		case joaat("weapon_minigun"):
			return func_34(456, iParam1, 0);
		
		case joaat("weapon_grenade"):
			return func_34(465, iParam1, 0);
		
		case joaat("weapon_smokegrenade"):
			return func_34(473, iParam1, 0);
		
		case joaat("weapon_stickybomb"):
			return func_34(482, iParam1, 0);
		
		case joaat("weapon_molotov"):
			return func_34(490, iParam1, 0);
		
		case joaat("weapon_stungun"):
			return func_34(412, iParam1, 0);
		
		case joaat("weapon_knife"):
			return func_34(195, iParam1, 0);
		
		case joaat("weapon_nightstick"):
			return func_34(203, iParam1, 0);
		
		case joaat("weapon_hammer"):
			return func_34(231, iParam1, 0);
		
		case joaat("weapon_bat"):
			return func_34(238, iParam1, 0);
		
		case joaat("weapon_crowbar"):
			return func_34(210, iParam1, 0);
		
		case joaat("weapon_golfclub"):
			return func_34(245, iParam1, 0);
		
		case joaat("weapon_pistol50"):
			return func_34(271, iParam1, 0);
		
		case joaat("weapon_assaultsmg"):
			return func_34(311, iParam1, 0);
		
		case -947031628:
			return func_34(431, iParam1, 0);
		
		case joaat("weapon_bullpupshotgun"):
			return func_34(394, iParam1, 0);
		
		case -572349828:
			return func_34(366, iParam1, 0);
		
		case 392730790:
			return func_34(321, iParam1, 0);
		
		case -1887867191:
			return func_34(321, iParam1, 0);
		
		case -837150131:
			return func_34(321, iParam1, 0);
		
		case joaat("weapon_bottle"):
			return func_34(1731, iParam1, 0);
		
		case joaat("weapon_snspistol"):
			return func_34(1741, iParam1, 0);
		
		case joaat("weapon_specialcarbine"):
			return func_34(9610, iParam1, 0);
		
		case joaat("weapon_bullpuprifle"):
			return func_34(9620, iParam1, 0);
		
		case joaat("weapon_heavypistol"):
			return func_34(9600, iParam1, 0);
		
		case joaat("weapon_dagger"):
			return func_34(9903, iParam1, 0);
		
		case joaat("weapon_vintagepistol"):
			return func_34(9913, iParam1, 0);
		
		case joaat("weapon_gusenberg"):
			return func_34(9630, iParam1, 0);
		
		case joaat("weapon_musket"):
			return func_34(9933, iParam1, 0);
		
		case joaat("weapon_firework"):
			return func_34(9923, iParam1, 0);
		
		case joaat("weapon_heavyshotgun"):
			return func_34(10011, iParam1, 0);
		
		case joaat("weapon_marksmanrifle"):
			return func_34(10021, iParam1, 0);
		
		case joaat("weapon_proxmine"):
			return func_34(10039, iParam1, 0);
		
		case joaat("weapon_hominglauncher"):
			return func_34(10047, iParam1, 0);
		
		case joaat("weapon_combatpdw"):
			return func_34(10055, iParam1, 0);
		
		case joaat("weapon_marksmanpistol"):
			return func_34(10072, iParam1, 0);
		
		case joaat("weapon_knuckle"):
			return func_34(10065, iParam1, 0);
		
		case joaat("weapon_machete"):
			return func_34(10082, iParam1, 0);
		
		case joaat("weapon_machinepistol"):
			return func_34(10090, iParam1, 0);
		
		case joaat("weapon_flashlight"):
			return func_34(10128, iParam1, 0);
		
		case joaat("weapon_switchblade"):
			return func_34(10156, iParam1, 0);
		
		case joaat("weapon_revolver"):
			return func_34(10146, iParam1, 0);
		
		case joaat("weapon_dbshotgun"):
			return func_34(10118, iParam1, 0);
		
		case joaat("weapon_compactrifle"):
			return func_34(10108, iParam1, 0);
		
		case joaat("weapon_hatchet"):
			return func_34(10031, iParam1, 0);
		
		case joaat("WEAPON_AUTOSHOTGUN"):
			return func_34(10197, iParam1, 0);
		
		case joaat("WEAPON_BATTLEAXE"):
			return func_34(10207, iParam1, 0);
		
		case joaat("WEAPON_COMPACTLAUNCHER"):
			return func_34(10213, iParam1, 0);
		
		case joaat("WEAPON_MINISMG"):
			return func_34(10223, iParam1, 0);
		
		case joaat("WEAPON_PIPEBOMB"):
			return func_34(10233, iParam1, 0);
		
		case joaat("WEAPON_POOLCUE"):
			return func_34(10241, iParam1, 0);
		
		case joaat("WEAPON_WRENCH"):
			return func_34(224, iParam1, 0);
		
		case joaat("WEAPON_PISTOL_MK2"):
			return func_34(251, iParam1, 0);
		
		case joaat("WEAPON_SMG_MK2"):
			return func_34(301, iParam1, 0);
		
		case joaat("WEAPON_HEAVYSNIPER_MK2"):
			return func_34(431, iParam1, 0);
		
		case joaat("WEAPON_COMBATMG_MK2"):
			return func_34(357, iParam1, 0);
		
		case joaat("WEAPON_ASSAULTRIFLE_MK2"):
			return func_34(321, iParam1, 0);
		
		case joaat("WEAPON_CARBINERIFLE_MK2"):
			return func_34(330, iParam1, 0);
		
		case joaat("WEAPON_BULLPUPRIFLE_MK2"):
			return func_34(10705, iParam1, 0);
		
		case joaat("WEAPON_MARKSMANRIFLE_MK2"):
			return func_34(10725, iParam1, 0);
		
		case joaat("WEAPON_PUMPSHOTGUN_MK2"):
			return func_34(10715, iParam1, 0);
		
		case joaat("WEAPON_REVOLVER_MK2"):
			return func_34(10735, iParam1, 0);
		
		case joaat("WEAPON_SNSPISTOL_MK2"):
			return func_34(10755, iParam1, 0);
		
		case joaat("WEAPON_SPECIALCARBINE_MK2"):
			return func_34(10765, iParam1, 0);
		
		case joaat("WEAPON_DOUBLEACTION"):
			return func_34(10745, iParam1, 0);
		
		case joaat("WEAPON_STONE_HATCHET"):
			return func_34(10968, iParam1, 0);
		
		case joaat("WEAPON_RAYPISTOL"):
			return func_34(11125, iParam1, 0);
		
		case joaat("WEAPON_RAYCARBINE"):
			return func_34(11135, iParam1, 0);
		
		case joaat("WEAPON_RAYMINIGUN"):
			return func_34(11145, iParam1, 0);
		
		case joaat("WEAPON_NAVYREVOLVER"):
			return func_34(11576, iParam1, 0);
		
		case joaat("WEAPON_CERAMICPISTOL"):
			return func_34(11566, iParam1, 0);
		
		case 1470379660:
			return func_34(11726, iParam1, 0);
		
		case -1658906650:
			return func_34(11736, iParam1, 0);
		
		case 94989220:
			return func_34(11716, iParam1, 0);
		
		default:
	}
	return 0;
}

int func_134(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case joaat("weapon_pistol"):
			return func_34(250, iParam1, 0);
		
		case joaat("weapon_combatpistol"):
			return func_34(260, iParam1, 0);
		
		case joaat("weapon_appistol"):
			return func_34(280, iParam1, 0);
		
		case joaat("weapon_microsmg"):
			return func_34(290, iParam1, 0);
		
		case joaat("weapon_smg"):
			return func_34(300, iParam1, 0);
		
		case joaat("weapon_assaultrifle"):
			return func_34(320, iParam1, 0);
		
		case joaat("weapon_carbinerifle"):
			return func_34(329, iParam1, 0);
		
		case joaat("weapon_advancedrifle"):
			return func_34(338, iParam1, 0);
		
		case joaat("weapon_mg"):
			return func_34(347, iParam1, 0);
		
		case joaat("weapon_combatmg"):
			return func_34(356, iParam1, 0);
		
		case joaat("weapon_pumpshotgun"):
			return func_34(374, iParam1, 0);
		
		case joaat("weapon_sawnoffshotgun"):
			return func_34(383, iParam1, 0);
		
		case joaat("weapon_assaultshotgun"):
			return func_34(402, iParam1, 0);
		
		case joaat("weapon_sniperrifle"):
			return func_34(421, iParam1, 0);
		
		case joaat("weapon_heavysniper"):
			return func_34(430, iParam1, 0);
		
		case joaat("weapon_grenadelauncher"):
			return func_34(441, iParam1, 0);
		
		case joaat("weapon_rpg"):
			return func_34(448, iParam1, 0);
		
		case joaat("weapon_minigun"):
			return func_34(455, iParam1, 0);
		
		case joaat("weapon_grenade"):
			return func_34(464, iParam1, 0);
		
		case joaat("weapon_smokegrenade"):
			return func_34(472, iParam1, 0);
		
		case joaat("weapon_stickybomb"):
			return func_34(481, iParam1, 0);
		
		case joaat("weapon_molotov"):
			return func_34(489, iParam1, 0);
		
		case joaat("weapon_stungun"):
			return func_34(411, iParam1, 0);
		
		case joaat("weapon_knife"):
			return func_34(193, iParam1, 0);
		
		case joaat("weapon_nightstick"):
			return func_34(201, iParam1, 0);
		
		case joaat("weapon_hammer"):
			return func_34(229, iParam1, 0);
		
		case joaat("weapon_bat"):
			return func_34(236, iParam1, 0);
		
		case joaat("weapon_crowbar"):
			return func_34(208, iParam1, 0);
		
		case joaat("weapon_golfclub"):
			return func_34(243, iParam1, 0);
		
		case joaat("weapon_pistol50"):
			return func_34(270, iParam1, 0);
		
		case joaat("weapon_assaultsmg"):
			return func_34(310, iParam1, 0);
		
		case -947031628:
			return func_34(430, iParam1, 0);
		
		case joaat("weapon_bullpupshotgun"):
			return func_34(393, iParam1, 0);
		
		case -572349828:
			return func_34(365, iParam1, 0);
		
		case 392730790:
			return func_34(320, iParam1, 0);
		
		case -1887867191:
			return func_34(320, iParam1, 0);
		
		case -837150131:
			return func_34(320, iParam1, 0);
		
		case joaat("weapon_bottle"):
			return func_34(1730, iParam1, 0);
		
		case joaat("weapon_snspistol"):
			return func_34(1740, iParam1, 0);
		
		case joaat("weapon_specialcarbine"):
			return func_34(9609, iParam1, 0);
		
		case joaat("weapon_bullpuprifle"):
			return func_34(9619, iParam1, 0);
		
		case joaat("weapon_heavypistol"):
			return func_34(9599, iParam1, 0);
		
		case joaat("weapon_dagger"):
			return func_34(9902, iParam1, 0);
		
		case joaat("weapon_vintagepistol"):
			return func_34(9912, iParam1, 0);
		
		case joaat("weapon_gusenberg"):
			return func_34(9629, iParam1, 0);
		
		case joaat("weapon_musket"):
			return func_34(9932, iParam1, 0);
		
		case joaat("weapon_firework"):
			return func_34(9922, iParam1, 0);
		
		case joaat("weapon_heavyshotgun"):
			return func_34(10010, iParam1, 0);
		
		case joaat("weapon_marksmanrifle"):
			return func_34(10020, iParam1, 0);
		
		case joaat("weapon_proxmine"):
			return func_34(10038, iParam1, 0);
		
		case joaat("weapon_hominglauncher"):
			return func_34(10046, iParam1, 0);
		
		case joaat("weapon_combatpdw"):
			return func_34(10054, iParam1, 0);
		
		case joaat("weapon_marksmanpistol"):
			return func_34(10071, iParam1, 0);
		
		case joaat("weapon_knuckle"):
			return func_34(10064, iParam1, 0);
		
		case joaat("weapon_machete"):
			return func_34(10081, iParam1, 0);
		
		case joaat("weapon_machinepistol"):
			return func_34(10089, iParam1, 0);
		
		case joaat("weapon_flashlight"):
			return func_34(10127, iParam1, 0);
		
		case joaat("weapon_switchblade"):
			return func_34(10155, iParam1, 0);
		
		case joaat("weapon_revolver"):
			return func_34(10145, iParam1, 0);
		
		case joaat("weapon_dbshotgun"):
			return func_34(10117, iParam1, 0);
		
		case joaat("weapon_compactrifle"):
			return func_34(10107, iParam1, 0);
		
		case joaat("weapon_hatchet"):
			return func_34(10030, iParam1, 0);
		
		case joaat("WEAPON_AUTOSHOTGUN"):
			return func_34(10196, iParam1, 0);
		
		case joaat("WEAPON_BATTLEAXE"):
			return func_34(10206, iParam1, 0);
		
		case joaat("WEAPON_COMPACTLAUNCHER"):
			return func_34(10212, iParam1, 0);
		
		case joaat("WEAPON_MINISMG"):
			return func_34(10222, iParam1, 0);
		
		case joaat("WEAPON_PIPEBOMB"):
			return func_34(10232, iParam1, 0);
		
		case joaat("WEAPON_POOLCUE"):
			return func_34(10240, iParam1, 0);
		
		case joaat("WEAPON_WRENCH"):
			return func_34(222, iParam1, 0);
		
		case joaat("WEAPON_PISTOL_MK2"):
			return func_34(250, iParam1, 0);
		
		case joaat("WEAPON_SMG_MK2"):
			return func_34(300, iParam1, 0);
		
		case joaat("WEAPON_HEAVYSNIPER_MK2"):
			return func_34(430, iParam1, 0);
		
		case joaat("WEAPON_COMBATMG_MK2"):
			return func_34(356, iParam1, 0);
		
		case joaat("WEAPON_ASSAULTRIFLE_MK2"):
			return func_34(320, iParam1, 0);
		
		case joaat("WEAPON_CARBINERIFLE_MK2"):
			return func_34(329, iParam1, 0);
		
		case joaat("WEAPON_BULLPUPRIFLE_MK2"):
			return func_34(10704, iParam1, 0);
		
		case joaat("WEAPON_MARKSMANRIFLE_MK2"):
			return func_34(10724, iParam1, 0);
		
		case joaat("WEAPON_PUMPSHOTGUN_MK2"):
			return func_34(10714, iParam1, 0);
		
		case joaat("WEAPON_REVOLVER_MK2"):
			return func_34(10734, iParam1, 0);
		
		case joaat("WEAPON_SNSPISTOL_MK2"):
			return func_34(10754, iParam1, 0);
		
		case joaat("WEAPON_SPECIALCARBINE_MK2"):
			return func_34(10764, iParam1, 0);
		
		case joaat("WEAPON_DOUBLEACTION"):
			return func_34(10744, iParam1, 0);
		
		case joaat("WEAPON_STONE_HATCHET"):
			return func_34(10967, iParam1, 0);
		
		case joaat("WEAPON_RAYPISTOL"):
			return func_34(11124, iParam1, 0);
		
		case joaat("WEAPON_RAYCARBINE"):
			return func_34(11134, iParam1, 0);
		
		case joaat("WEAPON_RAYMINIGUN"):
			return func_34(11144, iParam1, 0);
		
		case joaat("WEAPON_NAVYREVOLVER"):
			return func_34(11575, iParam1, 0);
		
		case joaat("WEAPON_CERAMICPISTOL"):
			return func_34(11565, iParam1, 0);
		
		case 1470379660:
			return func_34(11725, iParam1, 0);
		
		case -1658906650:
			return func_34(11735, iParam1, 0);
		
		case 94989220:
			return func_34(11715, iParam1, 0);
		
		default:
	}
	return 0;
}

float func_135(int iParam0)
{
	int iVar0;
	int iVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	int iVar5;
	
	switch (iParam0)
	{
		case joaat("weapon_pistol"):
			iVar0 = 252;
			iVar1 = 253;
			break;
		
		case joaat("WEAPON_PISTOL_MK2"):
			iVar0 = 252;
			iVar1 = 253;
			break;
		
		case joaat("weapon_combatpistol"):
			iVar0 = 262;
			iVar1 = 263;
			break;
		
		case joaat("weapon_appistol"):
			iVar0 = 282;
			iVar1 = 283;
			break;
		
		case joaat("weapon_microsmg"):
			iVar0 = 292;
			iVar1 = 293;
			break;
		
		case joaat("weapon_smg"):
			iVar0 = 302;
			iVar1 = 303;
			break;
		
		case joaat("WEAPON_SMG_MK2"):
			iVar0 = 302;
			iVar1 = 303;
			break;
		
		case joaat("weapon_assaultrifle"):
		case joaat("WEAPON_ASSAULTRIFLE_MK2"):
			iVar0 = 322;
			iVar1 = 323;
			break;
		
		case joaat("weapon_carbinerifle"):
		case joaat("WEAPON_CARBINERIFLE_MK2"):
			iVar0 = 331;
			iVar1 = 332;
			break;
		
		case joaat("weapon_specialcarbine"):
			iVar0 = 9611;
			iVar1 = 9612;
			break;
		
		case joaat("weapon_snspistol"):
			iVar0 = 1742;
			iVar1 = 1743;
			break;
		
		case joaat("weapon_advancedrifle"):
			iVar0 = 340;
			iVar1 = 341;
			break;
		
		case joaat("weapon_mg"):
			iVar0 = 349;
			iVar1 = 350;
			break;
		
		case joaat("weapon_combatmg"):
		case joaat("WEAPON_COMBATMG_MK2"):
			iVar0 = 358;
			iVar1 = 359;
			break;
		
		case joaat("weapon_sawnoffshotgun"):
			iVar0 = 385;
			iVar1 = 386;
			break;
		
		case joaat("weapon_pumpshotgun"):
			iVar0 = 376;
			iVar1 = 377;
			break;
		
		case joaat("weapon_assaultshotgun"):
			iVar0 = 404;
			iVar1 = 405;
			break;
		
		case joaat("weapon_sniperrifle"):
			iVar0 = 423;
			iVar1 = 424;
			break;
		
		case joaat("weapon_heavysniper"):
		case joaat("WEAPON_HEAVYSNIPER_MK2"):
			iVar0 = 432;
			iVar1 = 433;
			break;
		
		case joaat("weapon_grenadelauncher"):
			iVar0 = 443;
			iVar1 = 441;
			break;
		
		case joaat("weapon_minigun"):
			iVar0 = 457;
			iVar1 = 458;
			break;
		
		case joaat("weapon_rpg"):
			iVar0 = 450;
			iVar1 = 448;
			break;
		
		case joaat("weapon_bullpupshotgun"):
			iVar0 = 395;
			iVar1 = 396;
			break;
		
		case joaat("weapon_assaultsmg"):
			iVar0 = 312;
			iVar1 = 313;
			break;
		
		case joaat("weapon_pistol50"):
			iVar0 = 272;
			iVar1 = 273;
			break;
		
		case joaat("weapon_heavypistol"):
			iVar0 = 9601;
			iVar1 = 9602;
			break;
		
		case joaat("weapon_bullpuprifle"):
			iVar0 = 9621;
			iVar1 = 9622;
			break;
		
		case joaat("weapon_gusenberg"):
			iVar0 = 9631;
			iVar1 = 9632;
			break;
		
		case joaat("weapon_vintagepistol"):
			iVar0 = 9914;
			iVar1 = 9915;
			break;
		
		case joaat("weapon_musket"):
			iVar0 = 9934;
			iVar1 = 9935;
			break;
		
		case joaat("weapon_firework"):
			iVar0 = 9924;
			iVar1 = 9925;
			break;
		
		case joaat("weapon_flaregun"):
			iVar0 = 9667;
			iVar1 = 9668;
			break;
		
		case joaat("weapon_heavyshotgun"):
			iVar0 = 10012;
			iVar1 = 10013;
			break;
		
		case joaat("weapon_marksmanrifle"):
			iVar0 = 10022;
			iVar1 = 10023;
			break;
		
		case joaat("weapon_hominglauncher"):
			iVar0 = 10048;
			iVar1 = 10046;
			break;
		
		case joaat("weapon_proxmine"):
			iVar0 = 10040;
			iVar1 = 10038;
			break;
		
		case joaat("weapon_combatpdw"):
			iVar0 = 10056;
			iVar1 = 10057;
			break;
		
		case joaat("weapon_marksmanpistol"):
			iVar0 = 10073;
			iVar1 = 10074;
			break;
		
		case joaat("weapon_machinepistol"):
			iVar0 = 10091;
			iVar1 = 10092;
			break;
		
		case joaat("weapon_compactrifle"):
			iVar0 = 10109;
			iVar1 = 10110;
			break;
		
		case joaat("weapon_dbshotgun"):
			iVar0 = 10119;
			iVar1 = 10120;
			break;
		
		case joaat("weapon_revolver"):
			iVar0 = 10147;
			iVar1 = 10148;
			break;
		
		case joaat("WEAPON_AUTOSHOTGUN"):
			iVar0 = 10198;
			iVar1 = 10199;
			break;
		
		case joaat("WEAPON_MINISMG"):
			iVar0 = 10224;
			iVar1 = 10225;
			break;
		
		case joaat("WEAPON_COMPACTLAUNCHER"):
			iVar0 = 10214;
			iVar1 = 10212;
			break;
		
		case joaat("WEAPON_DOUBLEACTION"):
			iVar0 = 10746;
			iVar1 = 10747;
			break;
		
		case joaat("WEAPON_BULLPUPRIFLE_MK2"):
			iVar1 = 10704;
			iVar0 = 10706;
			break;
		
		case joaat("WEAPON_MARKSMANRIFLE_MK2"):
			iVar1 = 10724;
			iVar0 = 10726;
			break;
		
		case joaat("WEAPON_PUMPSHOTGUN_MK2"):
			iVar1 = 10714;
			iVar0 = 10716;
			break;
		
		case joaat("WEAPON_REVOLVER_MK2"):
			iVar1 = 10734;
			iVar0 = 10736;
			break;
		
		case joaat("WEAPON_SNSPISTOL_MK2"):
			iVar1 = 10754;
			iVar0 = 10756;
			break;
		
		case joaat("WEAPON_SPECIALCARBINE_MK2"):
			iVar1 = 10764;
			iVar0 = 10766;
			break;
		
		case joaat("WEAPON_RAYCARBINE"):
			iVar0 = 11136;
			iVar1 = 11137;
			break;
		
		case joaat("WEAPON_RAYMINIGUN"):
			iVar0 = 11146;
			iVar1 = 11147;
			break;
		
		case joaat("WEAPON_RAYPISTOL"):
			iVar0 = 11126;
			iVar1 = 11127;
			break;
		
		case joaat("WEAPON_NAVYREVOLVER"):
			iVar0 = 11577;
			iVar1 = 11578;
			break;
		
		case joaat("WEAPON_CERAMICPISTOL"):
			iVar0 = 11567;
			iVar1 = 11568;
			break;
		
		case 94989220:
			iVar0 = 11717;
			iVar1 = 11718;
			break;
		
		case 1470379660:
			iVar0 = 11727;
			iVar1 = 11728;
			break;
		
		case -1658906650:
			iVar0 = 11737;
			iVar1 = 11738;
			break;
	}
	if ((func_137(iParam0) || iParam0 == joaat("weapon_flashlight")) || func_136(iParam0))
	{
	}
	else
	{
		fVar2 = to_float(func_34(iVar0, -1, 0));
		fVar3 = to_float(func_34(iVar1, -1, 0));
		if (fVar2 > 0f)
		{
			fVar4 = (fVar3 / fVar2);
			if (fVar4 > 1f)
			{
				fVar4 = 1f;
			}
			fVar4 = (fVar4 * 100f);
			iVar5 = round(fVar4);
			fVar4 = to_float(iVar5);
			return fVar4;
		}
	}
	return 0f;
}

int func_136(int iParam0)
{
	switch (iParam0)
	{
		case joaat("weapon_molotov"):
		case joaat("weapon_smokegrenade"):
		case joaat("weapon_grenade"):
		case joaat("weapon_stickybomb"):
		case joaat("weapon_proxmine"):
			return 1;
			break;
		
		case joaat("WEAPON_PIPEBOMB"):
			return 1;
			break;
	}
	return 0;
}

int func_137(int iParam0)
{
	switch (iParam0)
	{
		case joaat("weapon_knife"):
		case joaat("weapon_bat"):
		case joaat("weapon_nightstick"):
		case joaat("weapon_hammer"):
		case joaat("weapon_golfclub"):
		case joaat("weapon_crowbar"):
		case joaat("weapon_bottle"):
		case joaat("weapon_dagger"):
		case joaat("weapon_knuckle"):
		case joaat("weapon_hatchet"):
		case joaat("weapon_machete"):
		case joaat("weapon_switchblade"):
		case joaat("WEAPON_BATTLEAXE"):
		case joaat("WEAPON_POOLCUE"):
		case joaat("WEAPON_WRENCH"):
		case joaat("WEAPON_STONE_HATCHET"):
			return 1;
		
		default:
	}
	return 0;
}

char* func_138(int iParam0, bool bParam1)
{
	struct<16> Var0;
	struct<16> Var1;
	struct<16> Var2;
	struct<16> Var3;
	
	if (func_140(iParam0) && !bParam1)
	{
		switch (iParam0)
		{
			case joaat("weapon_marksmanrifle"):
				if (unk_0x25DDB354A40FFCDB())
				{
					if (unk_0x15D88F65956DC2F6(unk_0x9B0761B4C3EB8BC7(), joaat("WEAPON_MARKSMANRIFLE_MK2"), 0))
					{
						return "WCD_MK1_LOCK";
					}
				}
				return "WTDE2_MKRIFLE";
				break;
			
			case joaat("weapon_compactrifle"):
				return "WTDE2_CMPRIFLE";
				break;
			
			case joaat("WEAPON_COMPACTLAUNCHER"):
				return "WTDE2_CMPGL";
				break;
			
			default:
				break;
			}
	}
	switch (iParam0)
	{
		case 0:
			return "";
			break;
		
		case joaat("weapon_unarmed"):
			return "";
			break;
		
		case joaat("weapon_pistol"):
			return "WT_PIST_DESC";
			break;
		
		case joaat("weapon_combatpistol"):
			return "WTD_PIST_CBT";
			break;
		
		case joaat("weapon_appistol"):
			return "WTD_PIST_AP";
			break;
		
		case joaat("weapon_smg"):
			return "WTD_SMG";
			break;
		
		case joaat("weapon_microsmg"):
			return "WTD_SMG_MCR";
			break;
		
		case joaat("weapon_assaultrifle"):
			return "WTD_RIFLE_ASL";
			break;
		
		case joaat("weapon_carbinerifle"):
			return "WTD_RIFLE_CBN";
			break;
		
		case joaat("weapon_advancedrifle"):
			return "WTD_RIFLE_ADV";
			break;
		
		case joaat("weapon_mg"):
			return "WTD_MG";
			break;
		
		case joaat("weapon_combatmg"):
			return "WTD_MG_CBT";
			break;
		
		case joaat("weapon_pumpshotgun"):
			return "WTD_SG_PMP";
			break;
		
		case joaat("weapon_sawnoffshotgun"):
			return "WTD_SG_SOF";
			break;
		
		case joaat("weapon_assaultshotgun"):
			return "WTD_SG_ASL";
			break;
		
		case joaat("weapon_heavysniper"):
			return "WTD_SNIP_HVY";
			break;
		
		case joaat("weapon_remotesniper"):
			return "WTD_SNIP_RMT";
			break;
		
		case joaat("weapon_sniperrifle"):
			return "WTD_SNIP_RIF";
			break;
		
		case joaat("weapon_grenadelauncher"):
			return "WTD_GL";
			break;
		
		case joaat("weapon_rpg"):
			return "WTD_RPG";
			break;
		
		case joaat("weapon_minigun"):
			return "WTD_MINIGUN";
			break;
		
		case joaat("weapon_grenade"):
			return "WTD_GNADE";
			break;
		
		case joaat("weapon_smokegrenade"):
			return "WTD_GNADE_SMK";
			break;
		
		case joaat("weapon_stickybomb"):
			return "WTD_GNADE_STK";
			break;
		
		case joaat("weapon_molotov"):
			return "WTD_MOLOTOV";
			break;
		
		case joaat("weapon_stungun"):
			return "WTD_STUN";
			break;
		
		case joaat("weapon_petrolcan"):
			return "WTD_PETROL";
			break;
		
		case joaat("weapon_digiscanner"):
			return "WTD_DIGI";
			break;
		
		case joaat("weapon_electric_fence"):
			return "WTD_ELCFEN";
			break;
		
		case joaat("vehicle_weapon_tank"):
			return "";
			break;
		
		case joaat("vehicle_weapon_space_rocket"):
			return "";
			break;
		
		case joaat("vehicle_weapon_player_laser"):
			return "";
			break;
		
		case joaat("object"):
			return "";
			break;
		
		case joaat("gadget_parachute"):
			return "WTD_PARA";
			break;
		
		case joaat("AMMO_RPG"):
			return "";
			break;
		
		case joaat("AMMO_TANK"):
			return "";
			break;
		
		case joaat("AMMO_SPACE_ROCKET"):
			return "";
			break;
		
		case joaat("AMMO_PLAYER_LASER"):
			return "";
			break;
		
		case joaat("AMMO_ENEMY_LASER"):
			return "";
			break;
		
		case joaat("weapon_knife"):
			return "WTD_KNIFE";
			break;
		
		case joaat("weapon_nightstick"):
			return "WTD_NGTSTK";
			break;
		
		case joaat("weapon_hammer"):
			return "WTD_HAMMER";
			break;
		
		case joaat("weapon_bat"):
			return "WTD_BAT";
			break;
		
		case joaat("weapon_crowbar"):
			return "WTD_CROWBAR";
			break;
		
		case joaat("weapon_golfclub"):
			return "WTD_GOLFCLUB";
			break;
		
		case joaat("weapon_hatchet"):
			return "WTD_DLC_HATCHET";
			break;
		
		case joaat("weapon_rammed_by_car"):
			return "";
			break;
		
		case joaat("weapon_run_over_by_car"):
			return "";
			break;
		
		case joaat("weapon_assaultsmg"):
			return "WTD_SMG_ASL";
			break;
		
		case joaat("weapon_bullpupshotgun"):
			return "WTD_SG_BLP";
			break;
		
		case joaat("weapon_pistol50"):
			return "WTD_PIST_50";
			break;
		
		case joaat("weapon_vintagepistol"):
			return "WTD_VPISTOL";
			break;
		
		case joaat("weapon_dagger"):
			return "WTD_DAGGER";
			break;
		
		case joaat("weapon_proxmine"):
			return "WTD_PRXMINE";
			break;
		
		case joaat("weapon_hominglauncher"):
			return "WTD_HOMLNCH";
			break;
		
		case joaat("weapon_machete"):
			return "WTD_MACHETE";
			break;
		
		case joaat("weapon_machinepistol"):
			return "WTD_MCHPIST";
			break;
		
		case joaat("weapon_flashlight"):
			return "WTD_FLASHLIGHT";
			break;
		
		case joaat("weapon_dbshotgun"):
			return "WTD_DBSHGN";
			break;
		
		case joaat("weapon_compactrifle"):
			return "WTD_CMPRIFLE";
			break;
		
		case joaat("weapon_switchblade"):
			return "WTD_SWBLADE";
			break;
		
		case joaat("weapon_revolver"):
			return "WTD_REVOLVER";
			break;
		
		case joaat("WEAPON_DOUBLEACTION"):
			if (func_139(joaat("MPPLY_HEADSHOTCHLENGECOMPLETED")) || bParam1)
			{
				return "WTD_REV_DA";
			}
			else if (unk_0x2A4512DFA7EDB2F9())
			{
				return "WTD_REV_DA_2";
			}
			else
			{
				return "WTD_REV_DA_3";
			}
			break;
		
		case joaat("weapon_specialcarbine"):
			if (unk_0x25DDB354A40FFCDB())
			{
				if (unk_0x15D88F65956DC2F6(unk_0x9B0761B4C3EB8BC7(), joaat("WEAPON_SPECIALCARBINE_MK2"), 0))
				{
					return "WCD_MK1_LOCK";
				}
			}
			if (func_28(iParam0, &Var0) != -1)
			{
				return func_27(&(Var0.f_15));
			}
			break;
		
		case joaat("weapon_marksmanrifle"):
			if (unk_0x25DDB354A40FFCDB())
			{
				if (unk_0x15D88F65956DC2F6(unk_0x9B0761B4C3EB8BC7(), joaat("WEAPON_MARKSMANRIFLE_MK2"), 0))
				{
					return "WCD_MK1_LOCK";
				}
			}
			if (func_28(iParam0, &Var1) != -1)
			{
				return func_27(&(Var1.f_15));
			}
			break;
		
		case joaat("weapon_bullpuprifle"):
			if (unk_0x25DDB354A40FFCDB())
			{
				if (unk_0x15D88F65956DC2F6(unk_0x9B0761B4C3EB8BC7(), joaat("WEAPON_BULLPUPRIFLE_MK2"), 0))
				{
					return "WCD_MK1_LOCK";
				}
			}
			if (func_28(iParam0, &Var2) != -1)
			{
				return func_27(&(Var2.f_15));
			}
			break;
		
		case joaat("WEAPON_RAYPISTOL"):
			return "WTD_RAYPISTOL";
			break;
		
		case joaat("WEAPON_RAYCARBINE"):
			return "WTD_RAYCARBINE";
			break;
		
		case joaat("WEAPON_RAYMINIGUN"):
			return "WTD_RAYMINIGUN";
			break;
		
		case joaat("WEAPON_NAVYREVOLVER"):
			return "WTD_REV_NV";
			break;
		
		case joaat("WEAPON_CERAMICPISTOL"):
			return "WTD_CERPST";
			break;
		
		case -1658906650:
			return "WTD_MLTRYRFL";
			break;
		
		case 1470379660:
			return "WTD_GDGTPST";
			break;
		
		case 94989220:
			return "WTD_CMBSHGN";
			break;
		
		default:
			if (func_28(iParam0, &Var3) != -1)
			{
				return func_27(&(Var3.f_15));
			}
			break;
	}
	return "WT_INVALID";
}

int func_139(int iParam0)
{
	var uVar0;
	var uVar1;
	
	uVar0 = iParam0;
	if (unk_0xB9112C701DE2A810(uVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

int func_140(int iParam0)
{
	if (unk_0x25DDB354A40FFCDB())
	{
		if (func_141())
		{
			if ((iParam0 == joaat("weapon_marksmanrifle") || iParam0 == joaat("weapon_compactrifle")) || iParam0 == joaat("WEAPON_COMPACTLAUNCHER"))
			{
				return 1;
			}
		}
	}
	return 0;
}

bool func_141()
{
	return (func_143() || func_142());
}

int func_142()
{
	switch (unk_0x32E2F0703576733E())
	{
		case 1:
		case 2:
		case 3:
		case 4:
			return 1;
		
		default:
	}
	return 0;
}

int func_143()
{
	switch (unk_0xD139172C5EB46ADD())
	{
		case 1:
		case 2:
		case 3:
		case 4:
			return 1;
		
		default:
	}
	return 0;
}

int func_144()
{
	return Global_1312763;
}

bool func_145(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 5:
			if (iParam1 > -1)
			{
				return Global_1377236.f_203[iParam1];
			}
			break;
	}
	return unk_0xCE990E643CD9D0E5(Global_1377236.f_1048, iParam0);
}

void func_146()
{
	func_147(0, -1, -1, 0, 0);
}

void func_147(int iParam0, int iParam1, int iParam2, char* sParam3, bool bParam4)
{
	unk_0x9ED3958F25B8EB59("SET_COLUMN_SCROLL");
	unk_0xAD291B8F75D737AD(iParam0);
	unk_0xAD291B8F75D737AD(iParam1);
	unk_0xAD291B8F75D737AD(iParam2);
	unk_0xAD291B8F75D737AD(-1);
	if (!unk_0x7BCC91F3C1CF24E8(sParam3))
	{
		unk_0xB23270F3D5E62FDE(sParam3);
		unk_0x42710E9E08FA375A(iParam1);
		unk_0x42710E9E08FA375A(iParam2);
		unk_0x2042E9CA4306F725();
	}
	else
	{
		func_20("");
	}
	unk_0xF1B28F753235CE2A(bParam4);
	unk_0xE1FDD153F5858534();
}

void func_148(var uParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	func_150();
	iVar0 = 9;
	iVar1 = uParam0->f_277;
	if (uParam1->f_5 < iLocal_64)
	{
		iVar1 = (iVar1 + (iVar0 * uParam1->f_5));
	}
	else
	{
		iVar1 = (iVar1 + (iVar0 * uParam1->f_5));
	}
	iVar2 = uParam1->f_5 + 1;
	iVar3 = iLocal_64 + 1;
	func_147(0, iVar2, iVar3, "HUD_PAGE", 0);
}

int func_149(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = iParam0;
	iVar1 = func_38(iVar0);
	iVar2 = func_30(iVar0);
	if ((unk_0xC27AEE8B64EE0F8D(2, iParam0) || unk_0x275A6259432E6B3C(2, iParam0)) || func_6(iParam0, &(Global_1377236.f_1060), 1))
	{
		if (!unk_0xCE990E643CD9D0E5(Global_1377236.f_1049[iVar1], iVar2))
		{
			unk_0xBE20AB8238688965(&(Global_1377236.f_1049[iVar1]), iVar2);
			return 1;
		}
	}
	else if (unk_0xCE990E643CD9D0E5(Global_1377236.f_1049[iVar1], iVar2))
	{
		unk_0xD2459066EA58CE43(&(Global_1377236.f_1049[iVar1]), iVar2);
	}
	return 0;
}

void func_150()
{
	iLocal_65 = 0;
	iLocal_64 = 3;
	if (unk_0xC655D10BB6E32EF1(joaat("weapon_hammer")))
	{
		iLocal_66[10] = ((iLocal_65 / 9) + iLocal_64);
		iLocal_65++;
	}
	else
	{
		iLocal_66[10] = -1;
	}
	if (unk_0xC655D10BB6E32EF1(joaat("weapon_pistol50")))
	{
		iLocal_66[0] = ((iLocal_65 / 9) + iLocal_64);
		iLocal_65++;
	}
	else
	{
		iLocal_66[0] = -1;
	}
	if (unk_0xC655D10BB6E32EF1(joaat("weapon_bullpupshotgun")))
	{
		iLocal_66[1] = ((iLocal_65 / 9) + iLocal_64);
		iLocal_65++;
	}
	else
	{
		iLocal_66[1] = -1;
	}
	if (func_107(1, 0))
	{
		if (unk_0xC655D10BB6E32EF1(joaat("weapon_sawnoffshotgun")))
		{
			iLocal_66[2] = ((iLocal_65 / 9) + iLocal_64);
			iLocal_65++;
		}
		else
		{
			iLocal_66[2] = -1;
		}
	}
	if (unk_0xC655D10BB6E32EF1(joaat("weapon_bottle")))
	{
		iLocal_66[3] = ((iLocal_65 / 9) + iLocal_64);
		iLocal_65++;
	}
	else
	{
		iLocal_66[3] = -1;
	}
	if (unk_0xC655D10BB6E32EF1(joaat("weapon_snspistol")))
	{
		iLocal_66[4] = ((iLocal_65 / 9) + iLocal_64);
		iLocal_65++;
	}
	else
	{
		iLocal_66[4] = -1;
	}
	if (unk_0xC655D10BB6E32EF1(joaat("weapon_gusenberg")))
	{
		iLocal_66[11] = ((iLocal_65 / 9) + iLocal_64);
		iLocal_65++;
	}
	else
	{
		iLocal_66[11] = -1;
	}
	if (unk_0xC655D10BB6E32EF1(joaat("weapon_heavypistol")))
	{
		iLocal_66[7] = ((iLocal_65 / 9) + iLocal_64);
		iLocal_65++;
	}
	else
	{
		iLocal_66[7] = -1;
	}
	if (unk_0xC655D10BB6E32EF1(joaat("weapon_specialcarbine")))
	{
		iLocal_66[5] = ((iLocal_65 / 9) + iLocal_64);
		iLocal_65++;
	}
	else
	{
		iLocal_66[5] = -1;
	}
	if (unk_0xC655D10BB6E32EF1(joaat("weapon_bullpuprifle")))
	{
		iLocal_66[6] = ((iLocal_65 / 9) + iLocal_64);
		iLocal_65++;
	}
	else
	{
		iLocal_66[6] = -1;
	}
	if (unk_0xC655D10BB6E32EF1(joaat("weapon_dagger")))
	{
		iLocal_66[8] = ((iLocal_65 / 9) + iLocal_64);
		iLocal_65++;
	}
	else
	{
		iLocal_66[8] = -1;
	}
	if (unk_0xC655D10BB6E32EF1(joaat("weapon_vintagepistol")))
	{
		iLocal_66[9] = ((iLocal_65 / 9) + iLocal_64);
		iLocal_65++;
	}
	else
	{
		iLocal_66[9] = -1;
	}
	if (unk_0xC655D10BB6E32EF1(joaat("weapon_firework")))
	{
		iLocal_66[14] = ((iLocal_65 / 9) + iLocal_64);
		iLocal_65++;
	}
	else
	{
		iLocal_66[14] = -1;
	}
	if (unk_0xC655D10BB6E32EF1(joaat("weapon_musket")))
	{
		iLocal_66[13] = ((iLocal_65 / 9) + iLocal_64);
		iLocal_65++;
	}
	else
	{
		iLocal_66[13] = -1;
	}
	if (unk_0xC655D10BB6E32EF1(joaat("weapon_heavyshotgun")))
	{
		iLocal_66[15] = ((iLocal_65 / 9) + iLocal_64);
		iLocal_65++;
	}
	else
	{
		iLocal_66[15] = -1;
	}
	if (unk_0xC655D10BB6E32EF1(joaat("weapon_marksmanrifle")))
	{
		iLocal_66[16] = ((iLocal_65 / 9) + iLocal_64);
		iLocal_65++;
	}
	else
	{
		iLocal_66[16] = -1;
	}
	if (func_106() || Global_262145.f_19760)
	{
		if (unk_0xC655D10BB6E32EF1(joaat("weapon_hatchet")))
		{
			iLocal_66[22] = ((iLocal_65 / 9) + iLocal_64);
			iLocal_65++;
		}
		else
		{
			iLocal_66[22] = -1;
		}
	}
	if (unk_0xC655D10BB6E32EF1(joaat("weapon_hominglauncher")))
	{
		iLocal_66[18] = ((iLocal_65 / 9) + iLocal_64);
		iLocal_65++;
	}
	else
	{
		iLocal_66[18] = -1;
	}
	if (unk_0xC655D10BB6E32EF1(joaat("weapon_proxmine")))
	{
		iLocal_66[17] = ((iLocal_65 / 9) + iLocal_64);
		iLocal_65++;
	}
	else
	{
		iLocal_66[17] = -1;
	}
	if (unk_0xC655D10BB6E32EF1(joaat("weapon_flaregun")))
	{
		iLocal_66[12] = ((iLocal_65 / 9) + iLocal_64);
		iLocal_65++;
	}
	else
	{
		iLocal_66[12] = -1;
	}
	if (unk_0xC655D10BB6E32EF1(joaat("weapon_combatpdw")))
	{
		iLocal_66[19] = ((iLocal_65 / 9) + iLocal_64);
		iLocal_65++;
	}
	else
	{
		iLocal_66[19] = -1;
	}
	if (unk_0xC655D10BB6E32EF1(joaat("weapon_marksmanpistol")))
	{
		iLocal_66[20] = ((iLocal_65 / 9) + iLocal_64);
		iLocal_65++;
	}
	else
	{
		iLocal_66[20] = -1;
	}
	if (unk_0xC655D10BB6E32EF1(joaat("weapon_knuckle")))
	{
		iLocal_66[21] = ((iLocal_65 / 9) + iLocal_64);
		iLocal_65++;
	}
	else
	{
		iLocal_66[21] = -1;
	}
	if (unk_0xC655D10BB6E32EF1(joaat("weapon_machete")))
	{
		iLocal_66[23] = ((iLocal_65 / 9) + iLocal_64);
		iLocal_65++;
	}
	else
	{
		iLocal_66[23] = -1;
	}
	if (unk_0xC655D10BB6E32EF1(joaat("weapon_machinepistol")))
	{
		iLocal_66[24] = ((iLocal_65 / 9) + iLocal_64);
		iLocal_65++;
	}
	else
	{
		iLocal_66[24] = -1;
	}
	if (Global_262145.f_11585 && unk_0xC655D10BB6E32EF1(joaat("weapon_flashlight")))
	{
		iLocal_66[25] = ((iLocal_65 / 9) + iLocal_64);
		iLocal_65++;
	}
	else
	{
		iLocal_66[25] = -1;
	}
	if (unk_0xC655D10BB6E32EF1(joaat("weapon_revolver")))
	{
		iLocal_66[26] = ((iLocal_65 / 9) + iLocal_64);
		iLocal_65++;
	}
	else
	{
		iLocal_66[26] = -1;
	}
	if (unk_0xC655D10BB6E32EF1(joaat("weapon_switchblade")))
	{
		iLocal_66[27] = ((iLocal_65 / 9) + iLocal_64);
		iLocal_65++;
	}
	else
	{
		iLocal_66[27] = -1;
	}
	if (unk_0xC655D10BB6E32EF1(joaat("weapon_dbshotgun")))
	{
		iLocal_66[28] = ((iLocal_65 / 9) + iLocal_64);
		iLocal_65++;
	}
	else
	{
		iLocal_66[28] = -1;
	}
	if (unk_0xC655D10BB6E32EF1(joaat("weapon_compactrifle")))
	{
		iLocal_66[29] = ((iLocal_65 / 9) + iLocal_64);
		iLocal_65++;
	}
	else
	{
		iLocal_66[29] = -1;
	}
	if (unk_0xC655D10BB6E32EF1(joaat("WEAPON_AUTOSHOTGUN")))
	{
		iLocal_66[30] = ((iLocal_65 / 9) + iLocal_64);
		iLocal_65++;
	}
	else
	{
		iLocal_66[30] = -1;
	}
	if (unk_0xC655D10BB6E32EF1(joaat("WEAPON_BATTLEAXE")))
	{
		iLocal_66[31] = ((iLocal_65 / 9) + iLocal_64);
		iLocal_65++;
	}
	else
	{
		iLocal_66[31] = -1;
	}
	if (unk_0xC655D10BB6E32EF1(joaat("WEAPON_COMPACTLAUNCHER")))
	{
		iLocal_66[32] = ((iLocal_65 / 9) + iLocal_64);
		iLocal_65++;
	}
	else
	{
		iLocal_66[32] = -1;
	}
	if (unk_0xC655D10BB6E32EF1(joaat("WEAPON_MINISMG")))
	{
		iLocal_66[33] = ((iLocal_65 / 9) + iLocal_64);
		iLocal_65++;
	}
	else
	{
		iLocal_66[33] = -1;
	}
	if (unk_0xC655D10BB6E32EF1(joaat("WEAPON_PIPEBOMB")))
	{
		iLocal_66[34] = ((iLocal_65 / 9) + iLocal_64);
		iLocal_65++;
	}
	else
	{
		iLocal_66[34] = -1;
	}
	if (unk_0xC655D10BB6E32EF1(joaat("WEAPON_POOLCUE")))
	{
		iLocal_66[35] = ((iLocal_65 / 9) + iLocal_64);
		iLocal_65++;
	}
	else
	{
		iLocal_66[35] = -1;
	}
	if (unk_0xC655D10BB6E32EF1(joaat("WEAPON_WRENCH")))
	{
		iLocal_66[36] = ((iLocal_65 / 9) + iLocal_64);
		iLocal_65++;
	}
	else
	{
		iLocal_66[36] = -1;
	}
	if (unk_0xC655D10BB6E32EF1(joaat("WEAPON_ASSAULTRIFLE_MK2")))
	{
		iLocal_66[37] = ((iLocal_65 / 9) + iLocal_64);
		iLocal_65++;
	}
	else
	{
		iLocal_66[37] = -1;
	}
	if (unk_0xC655D10BB6E32EF1(joaat("WEAPON_CARBINERIFLE_MK2")))
	{
		iLocal_66[38] = ((iLocal_65 / 9) + iLocal_64);
		iLocal_65++;
	}
	else
	{
		iLocal_66[38] = -1;
	}
	if (unk_0xC655D10BB6E32EF1(joaat("WEAPON_COMBATMG_MK2")))
	{
		iLocal_66[39] = ((iLocal_65 / 9) + iLocal_64);
		iLocal_65++;
	}
	else
	{
		iLocal_66[39] = -1;
	}
	if (unk_0xC655D10BB6E32EF1(joaat("WEAPON_HEAVYSNIPER_MK2")))
	{
		iLocal_66[40] = ((iLocal_65 / 9) + iLocal_64);
		iLocal_65++;
	}
	else
	{
		iLocal_66[40] = -1;
	}
	if (unk_0xC655D10BB6E32EF1(joaat("WEAPON_PISTOL_MK2")))
	{
		iLocal_66[41] = ((iLocal_65 / 9) + iLocal_64);
		iLocal_65++;
	}
	else
	{
		iLocal_66[41] = -1;
	}
	if (unk_0xC655D10BB6E32EF1(joaat("WEAPON_SMG_MK2")))
	{
		iLocal_66[42] = ((iLocal_65 / 9) + iLocal_64);
		iLocal_65++;
	}
	else
	{
		iLocal_66[42] = -1;
	}
	if (unk_0xC655D10BB6E32EF1(joaat("WEAPON_BULLPUPRIFLE_MK2")))
	{
		iLocal_66[43] = ((iLocal_65 / 9) + iLocal_64);
		iLocal_65++;
	}
	else
	{
		iLocal_66[43] = -1;
	}
	if (unk_0xC655D10BB6E32EF1(joaat("WEAPON_MARKSMANRIFLE_MK2")))
	{
		iLocal_66[44] = ((iLocal_65 / 9) + iLocal_64);
		iLocal_65++;
	}
	else
	{
		iLocal_66[44] = -1;
	}
	if (unk_0xC655D10BB6E32EF1(joaat("WEAPON_PUMPSHOTGUN_MK2")))
	{
		iLocal_66[45] = ((iLocal_65 / 9) + iLocal_64);
		iLocal_65++;
	}
	else
	{
		iLocal_66[45] = -1;
	}
	if (unk_0xC655D10BB6E32EF1(joaat("WEAPON_REVOLVER_MK2")))
	{
		iLocal_66[46] = ((iLocal_65 / 9) + iLocal_64);
		iLocal_65++;
	}
	else
	{
		iLocal_66[46] = -1;
	}
	if (unk_0xC655D10BB6E32EF1(joaat("WEAPON_SNSPISTOL_MK2")))
	{
		iLocal_66[47] = ((iLocal_65 / 9) + iLocal_64);
		iLocal_65++;
	}
	else
	{
		iLocal_66[47] = -1;
	}
	if (unk_0xC655D10BB6E32EF1(joaat("WEAPON_SPECIALCARBINE_MK2")))
	{
		iLocal_66[48] = ((iLocal_65 / 9) + iLocal_64);
		iLocal_65++;
	}
	else
	{
		iLocal_66[48] = -1;
	}
	if ((Global_262145.f_22949 && unk_0xC655D10BB6E32EF1(joaat("WEAPON_DOUBLEACTION"))) && (func_105() || Global_1694984))
	{
		iLocal_66[49] = ((iLocal_65 / 9) + iLocal_64);
		iLocal_65++;
	}
	else
	{
		iLocal_66[49] = -1;
	}
	if ((Global_262145.f_23648 && unk_0xC655D10BB6E32EF1(joaat("WEAPON_STONE_HATCHET"))) && func_101())
	{
		iLocal_66[50] = ((iLocal_65 / 9) + iLocal_64);
		iLocal_65++;
	}
	else
	{
		iLocal_66[50] = -1;
	}
	if (unk_0xC655D10BB6E32EF1(joaat("WEAPON_RAYCARBINE")) && Global_262145.f_26043)
	{
		iLocal_66[51] = ((iLocal_65 / 9) + iLocal_64);
		iLocal_65++;
	}
	else
	{
		iLocal_66[51] = -1;
	}
	if (unk_0xC655D10BB6E32EF1(joaat("WEAPON_RAYMINIGUN")) && Global_262145.f_26042)
	{
		iLocal_66[52] = ((iLocal_65 / 9) + iLocal_64);
		iLocal_65++;
	}
	else
	{
		iLocal_66[52] = -1;
	}
	if (unk_0xC655D10BB6E32EF1(joaat("WEAPON_RAYPISTOL")) && (((func_17(25007, -1, -1) || func_17(25002, -1, -1)) || func_90(joaat("WEAPON_RAYPISTOL"), -1, 0)) || Global_262145.f_25051))
	{
		iLocal_66[53] = ((iLocal_65 / 9) + iLocal_64);
		iLocal_65++;
	}
	else
	{
		iLocal_66[53] = -1;
	}
	if (unk_0xC655D10BB6E32EF1(joaat("WEAPON_CERAMICPISTOL")))
	{
		iLocal_66[54] = ((iLocal_65 / 9) + iLocal_64);
		iLocal_65++;
	}
	else
	{
		iLocal_66[54] = -1;
	}
	if ((Global_262145.f_27666 && unk_0xC655D10BB6E32EF1(joaat("WEAPON_NAVYREVOLVER"))) && (func_100() || Global_1694990))
	{
		iLocal_66[55] = ((iLocal_65 / 9) + iLocal_64);
		iLocal_65++;
	}
	else
	{
		iLocal_66[55] = -1;
	}
	if (unk_0xC655D10BB6E32EF1(-1658906650))
	{
		iLocal_66[56] = ((iLocal_65 / 9) + iLocal_64);
		iLocal_65++;
	}
	else
	{
		iLocal_66[56] = -1;
	}
	if (unk_0xC655D10BB6E32EF1(94989220) && func_17(30632, -1, -1))
	{
		iLocal_66[57] = ((iLocal_65 / 9) + iLocal_64);
		iLocal_65++;
	}
	else
	{
		iLocal_66[57] = -1;
	}
	if (unk_0xC655D10BB6E32EF1(1470379660) && func_99(106, -1))
	{
		iLocal_66[58] = ((iLocal_65 / 9) + iLocal_64);
		iLocal_65++;
	}
	else
	{
		iLocal_66[58] = -1;
	}
	if ((Global_262145.f_27666 && unk_0xC655D10BB6E32EF1(joaat("WEAPON_NAVYREVOLVER"))) && (func_100() || Global_1694990))
	{
		iLocal_66[55] = ((iLocal_65 / 9) + iLocal_64);
		iLocal_65++;
	}
	else
	{
		iLocal_66[55] = -1;
	}
	if (iLocal_65 == 0)
	{
		iLocal_64 = 2;
		iLocal_65 = 9;
	}
	else
	{
		iLocal_64 = (iLocal_64 + (iLocal_65 / 9));
		iLocal_65 = (iLocal_65 - (9 * (iLocal_65 / 9)));
		if (iLocal_65 == 0)
		{
			iLocal_64 = (iLocal_64 - 1);
			iLocal_65 = 9;
		}
	}
}

void func_151(int iParam0, var uParam1)
{
	uParam1->f_277 = iParam0;
}

void func_152()
{
	func_150();
	func_153();
	func_147(0, 1, iLocal_64 + 1, "HUD_PAGE", 0);
}

void func_153()
{
	func_154(1);
}

void func_154(bool bParam0)
{
	if (bParam0)
	{
		func_155(0, 3, 0, 2, 0, 0);
	}
	else
	{
		func_155(0, 2, 0, 2, 1, 0);
	}
}

void func_155(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, bool bParam5)
{
	unk_0x9ED3958F25B8EB59("INIT_COLUMN_SCROLL");
	unk_0xAD291B8F75D737AD(iParam0);
	unk_0xF1B28F753235CE2A(false);
	unk_0xAD291B8F75D737AD(iParam1);
	unk_0xAD291B8F75D737AD(iParam2);
	unk_0xAD291B8F75D737AD(iParam3);
	unk_0xF1B28F753235CE2A(true);
	unk_0xAD291B8F75D737AD(iParam4);
	unk_0xF1B28F753235CE2A(bParam5);
	unk_0xE1FDD153F5858534();
}

void func_156(var uParam0)
{
	uParam0->f_284 = 1;
}

void func_157(var uParam0)
{
	uParam0->f_283 = 1;
}

void func_158(var uParam0)
{
	func_159(uParam0);
	uParam0->f_281 = 1;
}

void func_159(var uParam0)
{
	*uParam0 = { Global_1375422 };
}

int func_160()
{
	return Global_30968;
}

