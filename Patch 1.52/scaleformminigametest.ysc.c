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
	int iLocal_21 = 0;
	int iLocal_22 = 0;
	bool bLocal_23 = 0;
	bool bLocal_24 = 0;
	float fLocal_25 = 0f;
	bool bLocal_26 = 0;
	bool bLocal_27 = 0;
	float fLocal_28 = 0f;
	bool bLocal_29 = 0;
	bool bLocal_30 = 0;
	float fLocal_31 = 0f;
	bool bLocal_32 = 0;
	bool bLocal_33 = 0;
	float fLocal_34 = 0f;
	bool bLocal_35 = 0;
	bool bLocal_36 = 0;
	float fLocal_37 = 0f;
	bool bLocal_38 = 0;
	bool bLocal_39 = 0;
	float fLocal_40 = 0f;
	bool bLocal_41 = 0;
	bool bLocal_42 = 0;
	float fLocal_43 = 0f;
	bool bLocal_44 = 0;
	bool bLocal_45 = 0;
	float fLocal_46 = 0f;
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
	iLocal_20 = unk_0x6820C712C1DD618A(100f, 100f, 30f);
	iLocal_22 = 1;
	fLocal_25 = 0f;
	fLocal_28 = 0f;
	fLocal_31 = 0f;
	fLocal_34 = 0f;
	fLocal_37 = 0f;
	fLocal_40 = 0f;
	fLocal_43 = 0f;
	fLocal_46 = 0f;
	if (unk_0x03DB5C6AABF8DA46())
	{
		unk_0xFD45D90342D2A0CD(500);
	}
	if (unk_0xED06FD5709A59F02(3))
	{
		func_2();
	}
	iLocal_18 = unk_0x5DEA4192B46CB99B("p_bubblegum");
	while (!unk_0x95EF219D38B20CFF(iLocal_18))
	{
		wait(0);
	}
	while (true)
	{
		if (iLocal_21 == 1)
		{
		}
		if (iLocal_22 == 1)
		{
			iLocal_22 = 0;
			iLocal_19 = unk_0x68C2E3309DCAD71E("DEFAULT_SCRIPTED_CAMERA", true);
			if (unk_0x40397A9A17EEC1C5(iLocal_19))
			{
				unk_0x3FD8029C7A771A0E(iLocal_19, -160.6632f, -1072.144f, -1615.471f, -89.4999f, -0.2863f, 58.1189f, 45f, 0, 1, 1, 2);
				unk_0x8FFDD70F5142C6E0(iLocal_19, 0.01f);
				unk_0x4A5E99F2490D786A(iLocal_19, 0.02f);
				unk_0x3ED9330214992278(true, false, 3000, true, 0, 0);
			}
			unk_0xE7B8403ABCA0391D(iLocal_20, 66);
		}
		iLocal_21 = 1;
		unk_0xE6A03BA84586E67B(iLocal_18, 0.5f, 0.5f, 1f, 1f, 255, 255, 255, 0, 0);
		func_1(iLocal_18);
		wait(0);
	}
}

void func_1(int iParam0)
{
	if (Global_19660 == 0)
	{
		if (unk_0x22D6FB6153F774D3(2, 189) || unk_0x22D6FB6153F774D3(2, 190))
		{
			Global_19660 = 1;
			settimera(0);
		}
	}
	else if (timera() > 50)
	{
		Global_19660 = 0;
	}
	if (Global_19660 == 0)
	{
		if (unk_0x1BD7199394D7F19A(2, 189))
		{
			bLocal_23 = true;
			fLocal_25 = 1f;
		}
		if (unk_0x22D6FB6153F774D3(2, 189))
		{
			bLocal_23 = true;
			fLocal_25 = 1f;
		}
		if (!unk_0x22D6FB6153F774D3(2, 189))
		{
			bLocal_23 = false;
			fLocal_25 = 0f;
		}
		if (!bLocal_23 == bLocal_24)
		{
			bLocal_24 = bLocal_23;
			unk_0x830F007E19C63E14(iParam0, "SET_INPUT_EVENT");
			unk_0xAD291B8F75D737AD(10);
			unk_0x49B9B8101B158AEE(fLocal_25);
			unk_0xE1FDD153F5858534();
		}
		if (unk_0x1BD7199394D7F19A(2, 190))
		{
			bLocal_26 = true;
			fLocal_28 = 1f;
		}
		if (unk_0x22D6FB6153F774D3(2, 190))
		{
			bLocal_26 = true;
			fLocal_28 = 1f;
		}
		if (!unk_0x22D6FB6153F774D3(2, 190))
		{
			bLocal_26 = false;
			fLocal_28 = 0f;
		}
		if (!bLocal_26 == bLocal_27)
		{
			bLocal_27 = bLocal_26;
			unk_0x830F007E19C63E14(iParam0, "SET_INPUT_EVENT");
			unk_0xAD291B8F75D737AD(11);
			unk_0x49B9B8101B158AEE(fLocal_28);
			unk_0xE1FDD153F5858534();
		}
		if (unk_0x1BD7199394D7F19A(2, 188))
		{
			bLocal_29 = true;
			fLocal_31 = 1f;
		}
		if (unk_0x22D6FB6153F774D3(2, 188))
		{
			bLocal_29 = true;
			fLocal_31 = 1f;
		}
		if (!unk_0x22D6FB6153F774D3(2, 188))
		{
			bLocal_29 = false;
			fLocal_31 = 0f;
		}
		if (!bLocal_29 == bLocal_30)
		{
			bLocal_30 = bLocal_29;
			unk_0x830F007E19C63E14(iParam0, "SET_INPUT_EVENT");
			unk_0xAD291B8F75D737AD(8);
			unk_0x49B9B8101B158AEE(fLocal_31);
			unk_0xE1FDD153F5858534();
		}
		if (unk_0x1BD7199394D7F19A(2, 187))
		{
			bLocal_32 = true;
			fLocal_34 = 1f;
		}
		if (unk_0x22D6FB6153F774D3(2, 187))
		{
			bLocal_32 = true;
			fLocal_34 = 1f;
		}
		if (!unk_0x22D6FB6153F774D3(2, 187))
		{
			bLocal_32 = false;
			fLocal_34 = 0f;
		}
		if (!bLocal_32 == bLocal_33)
		{
			bLocal_33 = bLocal_32;
			unk_0x830F007E19C63E14(iParam0, "SET_INPUT_EVENT");
			unk_0xAD291B8F75D737AD(9);
			unk_0x49B9B8101B158AEE(fLocal_34);
			unk_0xE1FDD153F5858534();
		}
		if (unk_0x1BD7199394D7F19A(2, 202))
		{
			bLocal_35 = true;
			fLocal_37 = 1f;
		}
		if (unk_0x22D6FB6153F774D3(2, 202))
		{
			bLocal_35 = true;
			fLocal_37 = 1f;
		}
		if (!unk_0x22D6FB6153F774D3(2, 202))
		{
			bLocal_35 = false;
			fLocal_37 = 0f;
		}
		if (!bLocal_35 == bLocal_36)
		{
			bLocal_36 = bLocal_35;
			unk_0x830F007E19C63E14(iParam0, "SET_INPUT_EVENT");
			unk_0xAD291B8F75D737AD(17);
			unk_0x49B9B8101B158AEE(fLocal_37);
			unk_0xE1FDD153F5858534();
		}
		if (unk_0x1BD7199394D7F19A(2, 204))
		{
			bLocal_38 = true;
			fLocal_40 = 1f;
		}
		if (unk_0x22D6FB6153F774D3(2, 204))
		{
			bLocal_38 = true;
			fLocal_40 = 1f;
		}
		if (!unk_0x22D6FB6153F774D3(2, 204))
		{
			bLocal_38 = false;
			fLocal_40 = 0f;
		}
		if (!bLocal_38 == bLocal_39)
		{
			bLocal_39 = bLocal_38;
			unk_0x830F007E19C63E14(iParam0, "SET_INPUT_EVENT");
			unk_0xAD291B8F75D737AD(15);
			unk_0x49B9B8101B158AEE(fLocal_40);
			unk_0xE1FDD153F5858534();
		}
		if (unk_0x1BD7199394D7F19A(2, 201))
		{
			bLocal_41 = true;
			fLocal_43 = 1f;
		}
		if (unk_0x22D6FB6153F774D3(2, 201))
		{
			bLocal_41 = true;
			fLocal_43 = 1f;
		}
		if (!unk_0x22D6FB6153F774D3(2, 201))
		{
			bLocal_41 = false;
			fLocal_43 = 0f;
		}
		if (!bLocal_41 == bLocal_42)
		{
			bLocal_42 = bLocal_41;
			unk_0x830F007E19C63E14(iParam0, "SET_INPUT_EVENT");
			unk_0xAD291B8F75D737AD(16);
			unk_0x49B9B8101B158AEE(fLocal_43);
			unk_0xE1FDD153F5858534();
		}
		if (unk_0x1BD7199394D7F19A(2, 203))
		{
			bLocal_44 = true;
			fLocal_46 = 1f;
		}
		if (unk_0x22D6FB6153F774D3(2, 203))
		{
			bLocal_44 = true;
			fLocal_46 = 1f;
		}
		if (!unk_0x22D6FB6153F774D3(2, 203))
		{
			bLocal_44 = false;
			fLocal_46 = 0f;
		}
		if (!bLocal_44 == bLocal_45)
		{
			bLocal_45 = bLocal_44;
			unk_0x830F007E19C63E14(iParam0, "SET_INPUT_EVENT");
			unk_0xAD291B8F75D737AD(14);
			unk_0x49B9B8101B158AEE(fLocal_46);
			unk_0xE1FDD153F5858534();
		}
	}
}

void func_2()
{
	if (unk_0x40397A9A17EEC1C5(iLocal_19))
	{
		unk_0xB8B0F7C8C1548C5B(iLocal_19, 0);
	}
	unk_0x3ED9330214992278(false, false, 3000, true, 0, 0);
	func_3(0);
	unk_0x73D73FA241EA4AB7(0);
	unk_0xD289B55B6AADBA10(1);
	unk_0x2E352DDBBF674246(&iLocal_18);
	unk_0xD39E529EBE5DB04F();
}

void func_3(bool bParam0)
{
	if (bParam0)
	{
		func_10();
		if (Global_19681.f_1 == 10 || Global_19681.f_1 == 9)
		{
			unk_0xBE20AB8238688965(&Global_7552, 16);
		}
		Global_19681.f_1 = 1;
		if (func_9(0))
		{
			func_4(0);
		}
	}
	else if (Global_19681.f_1 == 1)
	{
		if (!Global_19681.f_1 == 0)
		{
			Global_19681.f_1 = 3;
		}
	}
}

void func_4(int iParam0)
{
	if (func_8())
	{
		return;
	}
	if (Global_19864)
	{
		if (func_7())
		{
			func_6(1, 1);
		}
		else
		{
			func_6(0, 0);
		}
	}
	if (Global_19681.f_1 == 10 || Global_19681.f_1 == 9)
	{
		unk_0xBE20AB8238688965(&Global_7552, 16);
	}
	if (unk_0x6B12213471F330A3())
	{
		unk_0xBE4122AC23440E7D(false);
	}
	Global_21005 = 5;
	if (iParam0 == 1)
	{
		unk_0xBE20AB8238688965(&Global_7551, 30);
	}
	else
	{
		unk_0xD2459066EA58CE43(&Global_7551, 30);
	}
	if (!func_5())
	{
		Global_19681.f_1 = 3;
	}
}

int func_5()
{
	if (Global_19681.f_1 == 1 || Global_19681.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

void func_6(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		if (func_9(0))
		{
			Global_19864 = 1;
			if (bParam1)
			{
				unk_0x1F1B1269BB6217F7(&Global_19618);
			}
			Global_19609 = { Global_19627[Global_19626 /*3*/] };
			unk_0x241AFEE3D5B4FF70(Global_19609);
		}
	}
	else if (Global_19864 == 1)
	{
		Global_19864 = 0;
		Global_19609 = { Global_19634[Global_19626 /*3*/] };
		if (bParam1)
		{
			unk_0x241AFEE3D5B4FF70(Global_19618);
		}
		else
		{
			unk_0x241AFEE3D5B4FF70(Global_19609);
		}
	}
}

bool func_7()
{
	return unk_0xCE990E643CD9D0E5(Global_1689730, 5);
}

bool func_8()
{
	return unk_0xCE990E643CD9D0E5(Global_1689730, 19);
}

int func_9(int iParam0)
{
	if (iParam0 == 1)
	{
		if (Global_19681.f_1 > 3)
		{
			if (unk_0xCE990E643CD9D0E5(Global_7551, 14))
			{
				return 1;
			}
			else
			{
				return 0;
			}
		}
		else
		{
			return 0;
		}
	}
	if (unk_0x7B70881748D166CD(joaat("cellphone_flashhand")) > 0)
	{
		return 1;
	}
	if (Global_19681.f_1 > 3)
	{
		return 1;
	}
	return 0;
}

void func_10()
{
	if (Global_19681.f_1 == 9 || Global_19681.f_1 == 10)
	{
		Global_21058 = 0;
		Global_21054 = 1;
	}
}

