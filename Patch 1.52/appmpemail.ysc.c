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
	int iLocal_19[12] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_20 = 0;
	int iLocal_21 = 0;
	int iLocal_22 = 0;
	int iLocal_23 = 0;
	int iLocal_24 = 0;
	int iLocal_25 = 0;
	int iLocal_26 = 0;
	int iLocal_27 = 0;
	int iLocal_28 = 0;
	int iLocal_29 = 0;
	int iLocal_30 = 0;
	int iLocal_31 = 0;
	int iLocal_32 = 0;
	int iLocal_33 = 0;
	struct<16> Local_34 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	struct<6> Local_35[59];
	struct<16> Local_36[59];
	int iLocal_37 = 0;
	struct<3> Local_38 = { 0, 0, 0 } ;
	struct<3> Local_39 = { 0, 0, 0 } ;
	int iLocal_40 = 0;
	int iLocal_41 = 0;
	bool bLocal_42 = 0;
	int iLocal_43 = 0;
	int iLocal_44 = 0;
	struct<314> Local_45 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 16, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
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
	unk_0xDB4E5F36ED3505EE();
	if (unk_0x7B70881748D166CD(joaat("cellphone_flashhand")) == 0)
	{
		func_61();
	}
	func_60();
	Global_22071 = 0;
	Global_111858.f_14047[Global_19681 /*20*/].f_18 = 0;
	Global_19863 = 0;
	func_59();
	func_58(Global_19662, "SET_DATA_SLOT_EMPTY", 8f, -1082130432, -1082130432, -1082130432, -1082130432);
	func_53();
	func_51();
	if (Global_19681.f_1 > 3)
	{
		Global_19681.f_1 = 7;
	}
	iLocal_31 = unk_0x578C4EF320340AF7();
	Global_19685 = 0;
	unk_0x1F1B1269BB6217F7(&Local_39);
	Local_38 = { Local_39 };
	Local_38.x = (Local_38.x - 10f);
	Local_38.f_1 = (Local_38.f_1 + 20f);
	Global_22038 = 0;
	Global_22039 = 1;
	while (true)
	{
		wait(0);
		if (Global_22039 == 0 && Global_22038 == 1)
		{
			func_50();
		}
		if (Global_22039 == 1 && Global_22038 == 0)
		{
			func_45();
		}
		if (iLocal_30 == 0)
		{
			iLocal_32 = unk_0x578C4EF320340AF7();
			if ((iLocal_32 - iLocal_31) > 500)
			{
				iLocal_30 = 1;
			}
		}
		if ((Global_19681.f_1 != 9 && Global_22039 == 0) && Global_22038 == 0)
		{
			switch (Global_19681.f_1)
			{
				case 7:
					if (Global_22071 == 0)
					{
						if (Global_2550457 == 0)
						{
							func_44();
							func_37();
						}
					}
					break;
				
				case 8:
					if (Global_22071 == 1)
					{
						func_11();
						func_5();
					}
					break;
				
				default:
					break;
			}
			if (Global_22071 == 0)
			{
				if (func_4())
				{
					Global_22038 = 1;
				}
			}
			else if (func_3(2, Global_19649, 0) || unk_0xCE990E643CD9D0E5(Global_7552, 12))
			{
				if (unk_0xF005CCA4263DF67F(&(Global_4269759[iLocal_24 /*104*/]), "CELL_FINV"))
				{
				}
				else
				{
					wait(0);
					unk_0xD2459066EA58CE43(&Global_7552, 12);
					func_2();
					Global_19659 = 1;
					Global_22071 = 0;
					if (Global_19681.f_1 > 3)
					{
						Global_19681.f_1 = 7;
					}
					if (unk_0x7B70881748D166CD(joaat("cellphone_flashhand")) == 0)
					{
						func_61();
					}
					func_58(Global_19662, "SET_DATA_SLOT_EMPTY", 8f, -1082130432, -1082130432, -1082130432, -1082130432);
					func_53();
					func_51();
					if (Global_4269759[iLocal_24 /*104*/].f_29 > 0)
					{
						if (Global_4269759[iLocal_24 /*104*/].f_31 == 1)
						{
							Global_4269759[iLocal_24 /*104*/].f_29 = 4;
							Global_4269759[iLocal_24 /*104*/].f_24 = 1;
						}
						else
						{
							Global_4269759[iLocal_24 /*104*/].f_24 = 1;
						}
					}
				}
			}
		}
		if (unk_0x7B70881748D166CD(joaat("cellphone_flashhand")) == 0)
		{
			func_61();
		}
		if (func_1())
		{
			func_61();
		}
	}
}

int func_1()
{
	if (((Global_19681.f_1 == 1 || Global_19681.f_1 == 3) || Global_19681.f_1 == 0) || Global_19625 == 1)
	{
		Global_19668 = 1;
		return 1;
	}
	return 0;
}

void func_2()
{
	if (!unk_0xA59F96B50B97E63C(unk_0x9B0761B4C3EB8BC7(), 0))
	{
		unk_0xC4CC25B68A91D144(-1, "Menu_Back", &Global_19670, 1);
	}
}

int func_3(int iParam0, int iParam1, int iParam2)
{
	if (unk_0x1BD7199394D7F19A(iParam0, iParam1) || (iParam2 == 1 && unk_0x79800E51B3B6D197(iParam0, iParam1)))
	{
		if (unk_0xF8EDFF98A9C94C74())
		{
			if (unk_0x913D69ADE739309E() == 0 || (unk_0xDFAB5E5CBE16E8B1() && unk_0xC1F43F8D0D5EB664(2)))
			{
				return 0;
			}
		}
		if (unk_0xF0C12886E5C1B20E() || unk_0x06EBE4F22EC30D45())
		{
			return 0;
		}
		else
		{
			return 1;
		}
	}
	return 0;
}

int func_4()
{
	if (Global_8157 == 1 || Global_19681.f_1 < 7)
	{
		Global_19668 = 1;
		return 1;
	}
	return 0;
}

void func_5()
{
	if (iLocal_27)
	{
		if (timera() > 50)
		{
			iLocal_27 = 0;
		}
	}
	if (unk_0xC1F43F8D0D5EB664(2))
	{
		if (func_3(2, 181, 0))
		{
			func_9();
		}
		if (func_3(2, 180, 0))
		{
			func_6();
		}
	}
	if (iLocal_27 == 0)
	{
		if (func_3(2, Global_19657, 0))
		{
			func_9();
			iLocal_27 = 1;
			settimera(0);
		}
		if (func_3(2, Global_19658, 0))
		{
			func_6();
			iLocal_27 = 1;
			settimera(0);
		}
	}
}

void func_6()
{
	func_58(Global_19662, "SET_INPUT_EVENT", to_float(3), -1082130432, -1082130432, -1082130432, -1082130432);
	unk_0xC4CC25B68A91D144(-1, "Menu_Navigate", &Global_19670, 1);
	func_7();
}

void func_7()
{
	if (func_8())
	{
		if (Global_19869 == 0)
		{
			unk_0x12C8655E426FEBB8(2);
		}
		else
		{
			unk_0x12C8655E426FEBB8(1);
		}
	}
}

int func_8()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (Global_76833)
	{
		return 0;
	}
	iVar2 = 0;
	iVar0 = unk_0xFA3A11B011BBD7F6();
	iVar1 = unk_0xF7B3A1430308F92B(iVar0);
	if (iVar1 == 4)
	{
		iVar2 = 1;
	}
	if (Global_4271302 || iVar2)
	{
		return 1;
	}
	return 1;
}

void func_9()
{
	func_58(Global_19662, "SET_INPUT_EVENT", to_float(1), -1082130432, -1082130432, -1082130432, -1082130432);
	unk_0xC4CC25B68A91D144(-1, "Menu_Navigate", &Global_19670, 1);
	func_10();
}

void func_10()
{
	if (func_8())
	{
		if (Global_19869 == 0)
		{
			unk_0x12C8655E426FEBB8(1);
		}
		else
		{
			unk_0x12C8655E426FEBB8(2);
		}
	}
}

void func_11()
{
	func_12();
}

void func_12()
{
	if (Global_4269759[iLocal_24 /*104*/].f_24 == 1)
	{
		if (Global_19659 == 0)
		{
			if (unk_0x22D6FB6153F774D3(2, Global_19652))
			{
				func_2();
				Global_19659 = 1;
				func_30();
				if (Global_4269759[iLocal_24 /*104*/].f_27 == 1)
				{
					Global_4269759[iLocal_24 /*104*/].f_99[0] = 0;
					Global_4269759[iLocal_24 /*104*/].f_99[1] = 0;
					Global_4269759[iLocal_24 /*104*/].f_99[2] = 0;
				}
				else
				{
					Global_4269759[iLocal_24 /*104*/].f_99[Global_19681] = 0;
				}
				if (func_29(iLocal_24))
				{
				}
				else
				{
					Global_4269759[iLocal_24 /*104*/].f_24 = 0;
					Global_4269759[iLocal_24 /*104*/].f_28 = 0;
				}
				unk_0xB6B2734989D2EBCB(Global_4269759[iLocal_24 /*104*/].f_16);
				func_58(Global_19662, "SET_DATA_SLOT_EMPTY", 8f, -1082130432, -1082130432, -1082130432, -1082130432);
				func_53();
				if (iLocal_22 > 0)
				{
					iLocal_22 = (iLocal_22 - 1);
				}
				func_51();
				if (Global_19681.f_1 > 3)
				{
					Global_19681.f_1 = 7;
					Global_22071 = 0;
				}
			}
		}
	}
	else if (Global_19659 == 0)
	{
		if (unk_0x22D6FB6153F774D3(2, Global_19653))
		{
			if (iLocal_26 == 1)
			{
				if (Global_19681.f_1 > 3)
				{
					StringCopy(&Global_74014, unk_0x7C774D8CB8DC6FE3(&Global_22046), 64);
					if (unk_0xF005CCA4263DF67F(&Global_74014, "HARDCODED_4207156"))
					{
						Global_19681.f_1 = 3;
						Global_1695006 = 1;
					}
					else
					{
						Global_74143 = 7;
						unk_0xBE20AB8238688965(&Global_7552, 10);
						Global_19681.f_1 = 6;
					}
				}
				func_61();
			}
		}
	}
	if (Global_4269759[iLocal_24 /*104*/].f_31 == 1)
	{
		if (Global_19659 == 0)
		{
			if (func_3(2, Global_19653, 0))
			{
				func_27();
				Global_19659 = 1;
				Global_4269759[iLocal_24 /*104*/].f_29 = 2;
				Global_4269759[iLocal_24 /*104*/].f_24 = 1;
				Global_4269759[iLocal_24 /*104*/].f_31 = 0;
				unk_0xD2459066EA58CE43(&Global_7551, 17);
				Global_22071 = 0;
				if (Global_19681.f_1 > 3)
				{
					Global_19681.f_1 = 7;
				}
				func_58(Global_19662, "SET_DATA_SLOT_EMPTY", 8f, -1082130432, -1082130432, -1082130432, -1082130432);
				func_53();
				func_51();
			}
		}
	}
	if (Global_19659 == 0 && iLocal_30 == 1)
	{
		if (func_3(2, Global_19650, 0))
		{
			Global_19659 = 1;
			if (Global_4269759[iLocal_24 /*104*/].f_29 > 0)
			{
				func_27();
				Global_4269759[iLocal_24 /*104*/].f_29 = 3;
				Global_4269759[iLocal_24 /*104*/].f_24 = 1;
				Global_22071 = 0;
				if (Global_19681.f_1 > 3)
				{
					Global_19681.f_1 = 7;
				}
				func_58(Global_19662, "SET_DATA_SLOT_EMPTY", 8f, -1082130432, -1082130432, -1082130432, -1082130432);
				func_53();
				func_51();
			}
			else if (Global_4269759[iLocal_24 /*104*/].f_30 == 1)
			{
				func_27();
				Global_6866 = 144;
				if (Global_19681.f_1 > 3)
				{
					Global_19681.f_1 = 10;
					func_25();
				}
				func_24("appContacts");
				Global_19679 = start_new_script("appContacts", 4000);
				unk_0x5F82526B41A5EBCE("appContacts");
				Global_6866 = Global_4269759[iLocal_24 /*104*/].f_17;
				if (func_23(Global_6866, Global_19681) == 0)
				{
					func_22(Global_19662, "SET_DATA_SLOT", to_float(4), to_float(0), to_float(3), -1f, -1f, &(Global_117[Global_6866 /*10*/].f_4), "CELL_300", "CELL_211", "CELL_195", 0);
				}
				else
				{
					func_22(Global_19662, "SET_DATA_SLOT", to_float(4), to_float(0), to_float(3), -1f, -1f, &(Global_1848[Global_6866 /*29*/].f_3), &(Global_1848[Global_6866 /*29*/].f_7), "CELL_211", &(Global_1848[Global_6866 /*29*/].f_3), 0);
				}
				func_13();
				func_61();
			}
		}
	}
}

void func_13()
{
	char cVar0[24];
	
	if (Global_19664 == 1)
	{
		return;
	}
	if (Global_19681.f_1 < 4)
	{
		return;
	}
	while (!unk_0x95EF219D38B20CFF(Global_19662))
	{
		if (Global_76833)
		{
			return;
		}
		wait(0);
	}
	switch (Global_19681.f_1)
	{
		case 6:
			func_58(Global_19662, "SET_DATA_SLOT_EMPTY", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
			func_20(Global_8156);
			if (Global_8156 == 1)
			{
				func_58(Global_19662, "DISPLAY_VIEW", 1f, to_float(Global_19685), -1082130432, -1082130432, -1082130432);
				Global_19661 = Global_19685;
			}
			else
			{
				func_58(Global_19662, "DISPLAY_VIEW", 1f, to_float(Global_19686), -1082130432, -1082130432, -1082130432);
				Global_19661 = Global_19686;
			}
			if (Global_19669)
			{
				func_22(Global_19662, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, "CELL_205", 0, 0, 0, 0);
				func_22(Global_19662, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, "CELL_206", 0, 0, 0, 0);
			}
			else
			{
				func_22(Global_19662, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, 0, 0, 0, 0, 0);
				func_22(Global_19662, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			if (Global_19866 == 0)
			{
				func_22(Global_19662, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
				unk_0xD2459066EA58CE43(&Global_7551, 17);
			}
			else if (Global_76833)
			{
				func_22(Global_19662, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
				unk_0xD2459066EA58CE43(&Global_7551, 17);
			}
			else
			{
				if (Global_19865 == 1)
				{
					if (Global_19669)
					{
						func_22(Global_19662, "SET_SOFT_KEYS", 1f, 1f, 20f, -1f, -1f, "CELL_225", 0, 0, 0, 0);
					}
					else
					{
						func_22(Global_19662, "SET_SOFT_KEYS", 1f, 1f, 20f, -1f, -1f, 0, 0, 0, 0, 0);
					}
				}
				else if (Global_19669)
				{
					func_22(Global_19662, "SET_SOFT_KEYS", 1f, 1f, 3f, -1f, -1f, "CELL_225", 0, 0, 0, 0);
				}
				else
				{
					func_22(Global_19662, "SET_SOFT_KEYS", 1f, 1f, 3f, -1f, -1f, 0, 0, 0, 0, 0);
				}
				unk_0xBE20AB8238688965(&Global_7551, 17);
			}
			if (Global_76833)
			{
				func_18();
				unk_0xD2459066EA58CE43(&Global_7553, 9);
				func_58(Global_19662, "DISPLAY_VIEW", 1f, to_float(Global_19685), -1082130432, -1082130432, -1082130432);
			}
			break;
		
		case 7:
			break;
		
		case 10:
			func_58(Global_19662, "DISPLAY_VIEW", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
			func_22(Global_19662, "SET_SOFT_KEYS", 2f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			func_22(Global_19662, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			unk_0xD2459066EA58CE43(&Global_7551, 17);
			if (unk_0xCE990E643CD9D0E5(Global_7551, 20))
			{
				func_22(Global_19662, "SET_SOFT_KEYS", 3f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			else if (Global_19669)
			{
				func_22(Global_19662, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, "CELL_202", 0, 0, 0, 0);
				if (Global_19624)
				{
					func_22(Global_19662, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
				}
			}
			else
			{
				func_22(Global_19662, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			break;
		
		case 9:
			if (Global_19680 == 1)
			{
				func_17();
				func_58(Global_19662, "SET_THEME", to_float(Global_111858.f_14047[Global_19681 /*20*/].f_6), -1082130432, -1082130432, -1082130432, -1082130432);
				if (Global_21018)
				{
					unk_0x830F007E19C63E14(Global_19662, "SET_DATA_SLOT");
					unk_0xAD291B8F75D737AD(4);
					unk_0xAD291B8F75D737AD(0);
					unk_0xAD291B8F75D737AD(2);
					unk_0xB23270F3D5E62FDE("CELL_CONDFON");
					unk_0x9EFD301E3BE8324E(&Global_21020);
					unk_0x2042E9CA4306F725();
					func_16("CELL_300");
					func_16("CELL_217");
					func_16("CELL_217");
					unk_0xE1FDD153F5858534();
				}
				else if (func_23(Global_6866, Global_19681) == 0)
				{
					func_22(Global_19662, "SET_DATA_SLOT", to_float(4), to_float(0), to_float(2), -1f, -1f, &(Global_117[Global_6866 /*10*/].f_4), "CELL_300", "CELL_217", "CELL_195", 0);
				}
				else
				{
					func_22(Global_19662, "SET_DATA_SLOT", to_float(4), to_float(0), to_float(2), -1f, -1f, &(Global_1848[Global_6866 /*29*/].f_3), &(Global_1848[Global_6866 /*29*/].f_7), "CELL_217", &(Global_1848[Global_6866 /*29*/].f_3), 0);
				}
				func_58(Global_19662, "DISPLAY_VIEW", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
			}
			else if (Global_21005 == 4 || Global_21005 == 3)
			{
				func_58(Global_19662, "SET_THEME", to_float(Global_111858.f_14047[Global_19681 /*20*/].f_6), -1082130432, -1082130432, -1082130432, -1082130432);
				func_17();
				if (Global_21018)
				{
					unk_0x830F007E19C63E14(Global_19662, "SET_DATA_SLOT");
					unk_0xAD291B8F75D737AD(4);
					unk_0xAD291B8F75D737AD(0);
					unk_0xAD291B8F75D737AD(2);
					unk_0xB23270F3D5E62FDE("CELL_CONDFON");
					unk_0x9EFD301E3BE8324E(&Global_21020);
					unk_0x2042E9CA4306F725();
					func_16("CELL_300");
					func_16("CELL_219");
					func_16("CELL_219");
					unk_0xE1FDD153F5858534();
				}
				else
				{
					if (Global_21263)
					{
						StringCopy(&cVar0, "CELL_219", 24);
					}
					else
					{
						StringCopy(&cVar0, "CELL_211", 24);
					}
					if (func_23(Global_6866, Global_19681) == 0)
					{
						func_58(Global_19662, "SET_DATA_SLOT_EMPTY", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
						func_22(Global_19662, "SET_DATA_SLOT", to_float(4), to_float(0), to_float(3), -1f, -1f, &(Global_117[Global_6866 /*10*/].f_4), "CELL_300", &cVar0, "CELL_195", 0);
					}
					else
					{
						func_58(Global_19662, "SET_DATA_SLOT_EMPTY", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
						func_22(Global_19662, "SET_DATA_SLOT", to_float(4), to_float(0), to_float(3), -1f, -1f, &(Global_1848[Global_6866 /*29*/].f_3), &(Global_1848[Global_6866 /*29*/].f_7), &cVar0, &(Global_1848[Global_6866 /*29*/].f_3), 0);
					}
				}
				func_58(Global_19662, "DISPLAY_VIEW", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
			}
			func_14();
			break;
		
		default:
			break;
	}
}

void func_14()
{
	if (unk_0x95EF219D38B20CFF(Global_19662))
	{
		func_15();
		if (Global_19680 == 1)
		{
			if (Global_19669)
			{
				func_22(Global_19662, "SET_SOFT_KEYS", 2f, 1f, 5f, -1f, -1f, "CELL_203", 0, 0, 0, 0);
			}
			else
			{
				func_22(Global_19662, "SET_SOFT_KEYS", 2f, 1f, 5f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			if (Global_21052)
			{
				func_22(Global_19662, "SET_SOFT_KEYS", 3f, 0f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			else if (unk_0xCE990E643CD9D0E5(Global_7551, 20))
			{
				func_22(Global_19662, "SET_SOFT_KEYS", 3f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			else if (Global_19669)
			{
				func_22(Global_19662, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, "CELL_204", 0, 0, 0, 0);
			}
			else
			{
				func_22(Global_19662, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			func_22(Global_19662, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			unk_0xD2459066EA58CE43(&Global_7551, 17);
		}
		else
		{
			func_22(Global_19662, "SET_SOFT_KEYS", 2f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			func_22(Global_19662, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			unk_0xD2459066EA58CE43(&Global_7551, 17);
			if (unk_0xCE990E643CD9D0E5(Global_7551, 20))
			{
				func_22(Global_19662, "SET_SOFT_KEYS", 3f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			else if (Global_19669)
			{
				func_22(Global_19662, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, "CELL_202", 0, 0, 0, 0);
				if (Global_19624)
				{
					func_22(Global_19662, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
				}
			}
			else
			{
				func_22(Global_19662, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
			}
		}
	}
}

void func_15()
{
	if (Global_76833)
	{
		func_22(Global_19662, "SET_SOFT_KEYS", 1f, 0f, 9f, -1f, -1f, 0, 0, 0, 0, 0);
		unk_0xD2459066EA58CE43(&Global_7551, 17);
	}
}

void func_16(char* sParam0)
{
	unk_0xB23270F3D5E62FDE(sParam0);
	unk_0x2042E9CA4306F725();
}

void func_17()
{
	if (!unk_0xA59F96B50B97E63C(unk_0x9B0761B4C3EB8BC7(), 0))
	{
		if (Global_19681 == 0)
		{
			switch (Global_111858.f_14047[Global_19681 /*20*/].f_6)
			{
				case 1:
					unk_0xB3A0950F462F7CD2(unk_0x460153A63B9477BC(), 0);
					break;
				
				case 2:
					unk_0xB3A0950F462F7CD2(unk_0x460153A63B9477BC(), 1);
					break;
				
				case 3:
					unk_0xB3A0950F462F7CD2(unk_0x460153A63B9477BC(), 2);
					break;
				
				case 4:
					unk_0xB3A0950F462F7CD2(unk_0x460153A63B9477BC(), 3);
					break;
				
				case 5:
					unk_0xB3A0950F462F7CD2(unk_0x460153A63B9477BC(), 4);
					break;
				
				case 6:
					unk_0xB3A0950F462F7CD2(unk_0x460153A63B9477BC(), 5);
					break;
				
				case 7:
					unk_0xB3A0950F462F7CD2(unk_0x460153A63B9477BC(), 6);
					break;
				
				default:
					break;
				}
		}
		if (Global_19681 == 1)
		{
			switch (Global_111858.f_14047[Global_19681 /*20*/].f_6)
			{
				case 1:
					unk_0xB3A0950F462F7CD2(unk_0x460153A63B9477BC(), 6);
					break;
				
				case 2:
					unk_0xB3A0950F462F7CD2(unk_0x460153A63B9477BC(), 0);
					break;
				
				case 3:
					unk_0xB3A0950F462F7CD2(unk_0x460153A63B9477BC(), 1);
					break;
				
				case 4:
					unk_0xB3A0950F462F7CD2(unk_0x460153A63B9477BC(), 2);
					break;
				
				case 5:
					unk_0xB3A0950F462F7CD2(unk_0x460153A63B9477BC(), 3);
					break;
				
				case 6:
					unk_0xB3A0950F462F7CD2(unk_0x460153A63B9477BC(), 4);
					break;
				
				case 7:
					unk_0xB3A0950F462F7CD2(unk_0x460153A63B9477BC(), 5);
					break;
				
				default:
					break;
				}
		}
		if (Global_19681 == 2)
		{
			switch (Global_111858.f_14047[Global_19681 /*20*/].f_6)
			{
				case 1:
					unk_0xB3A0950F462F7CD2(unk_0x460153A63B9477BC(), 5);
					break;
				
				case 2:
					unk_0xB3A0950F462F7CD2(unk_0x460153A63B9477BC(), 6);
					break;
				
				case 3:
					unk_0xB3A0950F462F7CD2(unk_0x460153A63B9477BC(), 1);
					break;
				
				case 4:
					unk_0xB3A0950F462F7CD2(unk_0x460153A63B9477BC(), 0);
					break;
				
				case 5:
					unk_0xB3A0950F462F7CD2(unk_0x460153A63B9477BC(), 2);
					break;
				
				case 6:
					unk_0xB3A0950F462F7CD2(unk_0x460153A63B9477BC(), 3);
					break;
				
				case 7:
					unk_0xB3A0950F462F7CD2(unk_0x460153A63B9477BC(), 4);
					break;
				
				default:
					break;
				}
		}
		if (Global_19681 == 3)
		{
			switch (Global_4271300)
			{
				case 1:
					unk_0xB3A0950F462F7CD2(unk_0x460153A63B9477BC(), 0);
					break;
				
				case 2:
					unk_0xB3A0950F462F7CD2(unk_0x460153A63B9477BC(), 1);
					break;
				
				case 3:
					unk_0xB3A0950F462F7CD2(unk_0x460153A63B9477BC(), 2);
					break;
				
				case 4:
					unk_0xB3A0950F462F7CD2(unk_0x460153A63B9477BC(), 3);
					break;
				
				case 5:
					unk_0xB3A0950F462F7CD2(unk_0x460153A63B9477BC(), 4);
					break;
				
				case 6:
					unk_0xB3A0950F462F7CD2(unk_0x460153A63B9477BC(), 5);
					break;
				
				case 7:
					unk_0xB3A0950F462F7CD2(unk_0x460153A63B9477BC(), 6);
					break;
				
				default:
					break;
				}
			}
	}
}

void func_18()
{
	if (Global_76833)
	{
		if (func_19() == 0)
		{
			return;
		}
		func_22(Global_19662, "SET_SOFT_KEYS", 1f, 1f, 9f, -1f, -1f, 0, 0, 0, 0, 0);
		unk_0xBE20AB8238688965(&Global_7551, 17);
	}
}

int func_19()
{
	return 0;
}

void func_20(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	
	Global_22073 = 0;
	Global_8156 = iParam0;
	iVar0 = 0;
	while (iVar0 < 9)
	{
		Global_8120[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 9)
	{
		iVar1 = 0;
		if (func_21(14))
		{
			while (iVar1 < 34)
			{
				if (iParam0 == Global_7558[iVar1 /*15*/].f_11)
				{
					if (iVar0 == Global_7558[iVar1 /*15*/].f_4)
					{
						if (Global_8120[iVar0] == 0)
						{
							Global_8084[iVar0] = iVar1;
							if (iVar1 == 3)
							{
								if (unk_0xCE990E643CD9D0E5(Global_7552, 3))
								{
									iVar2 = 42;
									Global_19868 = 1;
								}
								else
								{
									iVar2 = 255;
									Global_19868 = 0;
								}
								unk_0x830F007E19C63E14(Global_19662, "SET_DATA_SLOT");
								unk_0xAD291B8F75D737AD(1);
								unk_0xAD291B8F75D737AD(iVar0);
								unk_0xAD291B8F75D737AD(Global_7558[iVar1 /*15*/].f_10);
								unk_0xAD291B8F75D737AD(0);
								func_16(&(Global_7558[iVar1 /*15*/]));
								unk_0xAD291B8F75D737AD(iVar2);
								unk_0xE1FDD153F5858534();
							}
							if (Global_2462245)
							{
								if (iVar1 == 14)
								{
									func_22(Global_19662, "SET_DATA_SLOT", to_float(1), to_float(iVar0), to_float(Global_7558[iVar1 /*15*/].f_10), to_float(Global_22068), -1f, &(Global_7558[iVar1 /*15*/]), 0, 0, 0, 0);
								}
							}
							Global_8120[iVar0] = 1;
						}
					}
				}
				iVar1++;
			}
		}
		else
		{
			while (iVar1 < 34)
			{
				if (iParam0 == Global_7558[iVar1 /*15*/].f_11)
				{
					if (iVar0 == Global_7558[iVar1 /*15*/].f_4)
					{
						if (Global_8120[iVar0] == 0)
						{
							Global_8084[iVar0] = iVar1;
							if (iVar1 == 1)
							{
								iVar3 = 0;
								while (iVar3 < 35)
								{
									if (Global_111858.f_14137[iVar3 /*104*/].f_24 != 0)
									{
										if (Global_111858.f_14137[iVar3 /*104*/].f_28 == 0)
										{
											if (Global_111858.f_14137[iVar3 /*104*/].f_99[Global_19681] == 1)
											{
												Global_22073++;
											}
										}
									}
									iVar3++;
								}
								func_22(Global_19662, "SET_DATA_SLOT", to_float(1), to_float(iVar0), to_float(Global_7558[iVar1 /*15*/].f_10), to_float(Global_22073), -1f, &(Global_7558[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							else if (iVar1 == 7)
							{
								if (Global_76833)
								{
									iVar4 = 0;
									iVar4 = Global_4269758;
									iVar5 = 0;
									while (iVar5 < 12)
									{
										if (Global_4269759[iVar5 /*104*/].f_24 != 0)
										{
											if (Global_4269759[iVar5 /*104*/].f_28 == 0)
											{
												if (Global_4269759[iVar5 /*104*/].f_99[Global_19681] == 1)
												{
													iVar4++;
												}
											}
										}
										iVar5++;
									}
									func_22(Global_19662, "SET_DATA_SLOT", to_float(1), to_float(iVar0), to_float(Global_7558[iVar1 /*15*/].f_10), to_float(iVar4), -1f, &(Global_7558[iVar1 /*15*/]), 0, 0, 0, 0);
								}
								else
								{
									switch (Global_19681)
									{
										case 0:
											iVar6 = Global_42812;
											break;
										
										case 1:
											iVar6 = Global_42813;
											break;
										
										case 2:
											iVar6 = Global_42814;
											break;
										
										default:
											break;
									}
									func_22(Global_19662, "SET_DATA_SLOT", to_float(1), to_float(iVar0), to_float(Global_7558[iVar1 /*15*/].f_10), to_float(iVar6), -1f, &(Global_7558[iVar1 /*15*/]), 0, 0, 0, 0);
								}
							}
							else if (iVar1 == 14)
							{
								func_22(Global_19662, "SET_DATA_SLOT", to_float(1), to_float(iVar0), to_float(Global_7558[iVar1 /*15*/].f_10), to_float(Global_22068), -1f, &(Global_7558[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							else if (iVar1 == 20)
							{
								unk_0x830F007E19C63E14(Global_19662, "SET_DATA_SLOT");
								unk_0xAD291B8F75D737AD(1);
								unk_0xAD291B8F75D737AD(iVar0);
								unk_0xAD291B8F75D737AD(Global_7558[iVar1 /*15*/].f_10);
								unk_0xAD291B8F75D737AD(0);
								func_16(&(Global_7558[iVar1 /*15*/]));
								unk_0xAD291B8F75D737AD(Global_7557);
								unk_0xE1FDD153F5858534();
							}
							else if (iVar1 == 2)
							{
								if (unk_0xCE990E643CD9D0E5(Global_7552, 6))
								{
									iVar7 = 42;
								}
								else
								{
									iVar7 = 255;
								}
								unk_0x830F007E19C63E14(Global_19662, "SET_DATA_SLOT");
								unk_0xAD291B8F75D737AD(1);
								unk_0xAD291B8F75D737AD(iVar0);
								unk_0xAD291B8F75D737AD(Global_7558[iVar1 /*15*/].f_10);
								unk_0xAD291B8F75D737AD(0);
								func_16(&(Global_7558[iVar1 /*15*/]));
								unk_0xAD291B8F75D737AD(iVar7);
								unk_0xE1FDD153F5858534();
							}
							else if (iVar1 == 3)
							{
								if (unk_0xCE990E643CD9D0E5(Global_7552, 3))
								{
									iVar8 = 42;
									Global_19868 = 1;
								}
								else
								{
									iVar8 = 255;
									Global_19868 = 0;
								}
								unk_0x830F007E19C63E14(Global_19662, "SET_DATA_SLOT");
								unk_0xAD291B8F75D737AD(1);
								unk_0xAD291B8F75D737AD(iVar0);
								unk_0xAD291B8F75D737AD(Global_7558[iVar1 /*15*/].f_10);
								unk_0xAD291B8F75D737AD(0);
								func_16(&(Global_7558[iVar1 /*15*/]));
								unk_0xAD291B8F75D737AD(iVar8);
								unk_0xE1FDD153F5858534();
							}
							else if (iVar1 == 8)
							{
								unk_0x830F007E19C63E14(Global_19662, "SET_DATA_SLOT");
								unk_0xAD291B8F75D737AD(1);
								unk_0xAD291B8F75D737AD(iVar0);
								unk_0xAD291B8F75D737AD(Global_7558[iVar1 /*15*/].f_10);
								unk_0xAD291B8F75D737AD(0);
								func_16(&(Global_7558[iVar1 /*15*/]));
								unk_0xAD291B8F75D737AD(42);
								unk_0xE1FDD153F5858534();
							}
							else if ((iVar1 == 23 && unk_0xF005CCA4263DF67F(&(Global_7558[iVar1 /*15*/]), "CELL_BENWEB")) && unk_0xCE990E643CD9D0E5(Global_7552, 6))
							{
								unk_0x830F007E19C63E14(Global_19662, "SET_DATA_SLOT");
								unk_0xAD291B8F75D737AD(1);
								unk_0xAD291B8F75D737AD(iVar0);
								unk_0xAD291B8F75D737AD(Global_7558[iVar1 /*15*/].f_10);
								unk_0xAD291B8F75D737AD(0);
								func_16(&(Global_7558[iVar1 /*15*/]));
								unk_0xAD291B8F75D737AD(42);
								unk_0xE1FDD153F5858534();
							}
							else if (Global_7558[iVar1 /*15*/].f_10 == 57 && iVar1 == 23)
							{
								iVar9 = 0;
								iVar9 = Global_1627252.f_1;
								func_22(Global_19662, "SET_DATA_SLOT", to_float(1), to_float(iVar0), to_float(Global_7558[iVar1 /*15*/].f_10), to_float(iVar9), -1f, &(Global_7558[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							else
							{
								func_22(Global_19662, "SET_DATA_SLOT", to_float(1), to_float(iVar0), to_float(Global_7558[iVar1 /*15*/].f_10), to_float(0), -1f, &(Global_7558[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							Global_8120[iVar0] = 1;
						}
					}
				}
				iVar1++;
			}
		}
		iVar0++;
	}
}

bool func_21(int iParam0)
{
	return Global_41631 == iParam0;
}

void func_22(int iParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6, char* sParam7, char* sParam8, char* sParam9, char* sParam10, char* sParam11)
{
	unk_0x830F007E19C63E14(iParam0, sParam1);
	unk_0xAD291B8F75D737AD(round(fParam2));
	if (fParam3 != -1f)
	{
		unk_0xAD291B8F75D737AD(round(fParam3));
	}
	if (fParam4 != -1f)
	{
		unk_0xAD291B8F75D737AD(round(fParam4));
	}
	if (fParam5 != -1f)
	{
		unk_0xAD291B8F75D737AD(round(fParam5));
	}
	if (fParam6 != -1f)
	{
		unk_0xAD291B8F75D737AD(round(fParam6));
	}
	if (!unk_0x7BCC91F3C1CF24E8(sParam7))
	{
		func_16(sParam7);
	}
	if (!unk_0x7BCC91F3C1CF24E8(sParam8))
	{
		func_16(sParam8);
	}
	if (!unk_0x7BCC91F3C1CF24E8(sParam9))
	{
		func_16(sParam9);
	}
	if (!unk_0x7BCC91F3C1CF24E8(sParam10))
	{
		func_16(sParam10);
	}
	if (!unk_0x7BCC91F3C1CF24E8(sParam11))
	{
		func_16(sParam11);
	}
	unk_0xE1FDD153F5858534();
}

int func_23(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 4)
	{
		return 0;
	}
	return Global_1848[iParam0 /*29*/].f_24[iParam1];
}

void func_24(char* sParam0)
{
	unk_0xBE9B3870B1B370E3(sParam0);
	while (!unk_0x8DC2EFD1CECAA468(sParam0))
	{
		wait(0);
	}
}

void func_25()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0;
	iVar1 = 0;
	if (!unk_0x5AEB5DDFFAD43CA5(unk_0x9B0761B4C3EB8BC7()))
	{
		if (func_26() && unk_0xB8DB6610D5815003(unk_0x9B0761B4C3EB8BC7(), 0))
		{
			iVar1 = 1;
		}
	}
	if (!Global_76833)
	{
		if (!unk_0x5AEB5DDFFAD43CA5(unk_0x9B0761B4C3EB8BC7()) && iVar1 == 0)
		{
			iVar2 = unk_0xA98E0435012EAF07(unk_0x9B0761B4C3EB8BC7(), 0);
			if (Global_76833)
			{
				if (((((iVar2 == 15 || iVar2 == 16) || iVar2 == 17) || iVar2 == 18) || iVar2 == 19) || unk_0x2489BECD123A725B(unk_0x9B0761B4C3EB8BC7()))
				{
					iVar0 = 1;
				}
			}
			else if (unk_0x2489BECD123A725B(unk_0x9B0761B4C3EB8BC7()))
			{
				iVar0 = 1;
			}
			if (!Global_19624)
			{
				if (Global_6866 != 128)
				{
					if (iVar0 == 0)
					{
						if (!unk_0xA59F96B50B97E63C(unk_0x9B0761B4C3EB8BC7(), 0))
						{
							if (unk_0x47DBF174A0CB9D55(unk_0x9B0761B4C3EB8BC7(), 0))
							{
							}
							else
							{
								if (Global_76833)
								{
									unk_0x694113444F21E39F(unk_0x9B0761B4C3EB8BC7(), 244, false);
									unk_0x694113444F21E39F(unk_0x9B0761B4C3EB8BC7(), 243, false);
									unk_0x694113444F21E39F(unk_0x9B0761B4C3EB8BC7(), 242, false);
								}
								unk_0xBE20AB8238688965(&Global_7551, 11);
								unk_0x48E48D5929D45C6F(unk_0x9B0761B4C3EB8BC7(), 1, 1);
							}
						}
					}
				}
			}
		}
	}
}

int func_26()
{
	int iVar0;
	int iVar1;
	
	iVar0 = unk_0xFA3A11B011BBD7F6();
	iVar1 = unk_0xF7B3A1430308F92B(iVar0);
	if (iVar1 == 4)
	{
		return 1;
	}
	return 0;
}

void func_27()
{
	if (!unk_0xA59F96B50B97E63C(unk_0x9B0761B4C3EB8BC7(), 0))
	{
		unk_0xC4CC25B68A91D144(-1, "Menu_Accept", &Global_19670, 1);
		func_28();
	}
}

void func_28()
{
	if (func_8())
	{
		unk_0x12C8655E426FEBB8(5);
	}
}

int func_29(int iParam0)
{
	if ((Global_111858.f_14137[iParam0 /*104*/].f_99[0] == 1 || Global_111858.f_14137[iParam0 /*104*/].f_99[1] == 1) || Global_111858.f_14137[iParam0 /*104*/].f_99[2] == 1)
	{
		return 1;
	}
	return 0;
}

void func_30()
{
	if (func_21(14))
	{
		if (!unk_0xA59F96B50B97E63C(unk_0x9B0761B4C3EB8BC7(), 0))
		{
			if (unk_0x36FE6D3220816ADA(unk_0x9B0761B4C3EB8BC7()) == Global_111858.f_28046[0 /*29*/])
			{
				Global_19681 = 0;
			}
			else if (unk_0x36FE6D3220816ADA(unk_0x9B0761B4C3EB8BC7()) == Global_111858.f_28046[1 /*29*/])
			{
				Global_19681 = 1;
			}
			else if (unk_0x36FE6D3220816ADA(unk_0x9B0761B4C3EB8BC7()) == Global_111858.f_28046[2 /*29*/])
			{
				Global_19681 = 2;
			}
			else
			{
				Global_19681 = 0;
			}
		}
	}
	else
	{
		Global_19681 = func_31();
		if (Global_19681 == 145)
		{
			Global_19681 = 3;
		}
		if (Global_76833)
		{
			Global_19681 = 3;
		}
		if (Global_19681 > 3)
		{
			Global_19681 = 3;
		}
	}
}

var func_31()
{
	func_32();
	return Global_111858.f_2359.f_539.f_4321;
}

void func_32()
{
	int iVar0;
	
	if (unk_0xAE06B9E39EBDE049(unk_0x9B0761B4C3EB8BC7()))
	{
		if (func_35(Global_111858.f_2359.f_539.f_4321) != unk_0x36FE6D3220816ADA(unk_0x9B0761B4C3EB8BC7()))
		{
			iVar0 = func_34(unk_0x9B0761B4C3EB8BC7());
			if (func_33(iVar0) && (!func_21(14) || Global_110809))
			{
				if (Global_111858.f_2359.f_539.f_4321 != iVar0 && func_33(Global_111858.f_2359.f_539.f_4321))
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

bool func_33(int iParam0)
{
	return iParam0 < 3;
}

int func_34(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0xAE06B9E39EBDE049(iParam0))
	{
		iVar1 = unk_0x36FE6D3220816ADA(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_35(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_35(int iParam0)
{
	if (func_33(iParam0))
	{
		return func_36(iParam0);
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

var func_36(int iParam0)
{
	return Global_1848[iParam0 /*29*/];
}

void func_37()
{
	struct<16> Var0;
	
	if (Global_19659 == 0)
	{
		if ((func_3(2, Global_19650, 0) || Global_4271009 == 1) || Global_22065 == 1)
		{
			if (Global_4271009 == 0 && Global_22065 == 0)
			{
				func_27();
			}
			Global_19659 = 1;
			iLocal_30 = 0;
			func_22(Global_19662, "SET_SOFT_KEYS", 1f, 0f, 11f, -1f, -1f, 0, 0, 0, 0, 0);
			unk_0xD2459066EA58CE43(&Global_7551, 17);
			iLocal_24 = iLocal_19[iLocal_22];
			if (iLocal_22 == iLocal_21 || iLocal_22 > iLocal_21)
			{
				if (Global_19681.f_1 > 3)
				{
					Global_19681.f_1 = 8;
					Global_22071 = 1;
					iLocal_23 = iLocal_22;
					unk_0x04844182E1F97377(iLocal_19[iLocal_22], &Local_45);
				}
				settimerb(0);
				iLocal_28 = 0;
				unk_0x830F007E19C63E14(Global_19662, "GET_CURRENT_SELECTION");
				iLocal_33 = unk_0xF4712E16A4C164FE();
				while (!unk_0x654BC7395AE9BF77(iLocal_33) && iLocal_28 == 0)
				{
					wait(0);
					if (timerb() > 2000)
					{
						iLocal_28 = 1;
					}
				}
				func_42();
				unk_0x830F007E19C63E14(Global_19662, "SET_DATA_SLOT");
				unk_0xAD291B8F75D737AD(9);
				unk_0xAD291B8F75D737AD(0);
				func_16("CELL_1");
				unk_0xB23270F3D5E62FDE("CELL_TO_FIELD");
				unk_0x9EFD301E3BE8324E(unk_0x72C1D3A1AB8CAA5B(unk_0x460153A63B9477BC()));
				unk_0x2042E9CA4306F725();
				unk_0xB23270F3D5E62FDE("CELL_FROM_FIELD");
				unk_0x9EFD301E3BE8324E(&(Local_45.f_2));
				unk_0x2042E9CA4306F725();
				unk_0xB23270F3D5E62FDE("CELL_EMAIL_BCON");
				unk_0x9EFD301E3BE8324E(&(Local_45.f_56[0 /*16*/]));
				unk_0x9EFD301E3BE8324E(&(Local_45.f_56[1 /*16*/]));
				unk_0x9EFD301E3BE8324E(&(Local_45.f_56[2 /*16*/]));
				unk_0x9EFD301E3BE8324E(&(Local_45.f_56[3 /*16*/]));
				unk_0x9EFD301E3BE8324E(&(Local_45.f_56[4 /*16*/]));
				unk_0x9EFD301E3BE8324E(&(Local_45.f_56[5 /*16*/]));
				unk_0x9EFD301E3BE8324E(&(Local_45.f_56[6 /*16*/]));
				unk_0x9EFD301E3BE8324E(&(Local_45.f_56[7 /*16*/]));
				unk_0x9EFD301E3BE8324E(&(Local_45.f_56[8 /*16*/]));
				unk_0x9EFD301E3BE8324E(&(Local_45.f_56[9 /*16*/]));
				unk_0x2042E9CA4306F725();
				unk_0xB23270F3D5E62FDE("CELL_2000");
				unk_0x9EFD301E3BE8324E(&(Local_45.f_2));
				unk_0x2042E9CA4306F725();
				switch (Local_45.f_313)
				{
					case 0:
						break;
					
					case 1:
						break;
					
					case 2:
						unk_0x4A096F645CED26D9("EmailAds_Dock_Tease");
						unk_0xF1B28F753235CE2A(true);
						break;
					
					case 3:
						unk_0x4A096F645CED26D9("EmailAds_Warstock");
						unk_0xF1B28F753235CE2A(true);
						break;
					
					case 4:
						unk_0x4A096F645CED26D9("EmailAds_Legendary_Motorsport");
						unk_0xF1B28F753235CE2A(true);
						break;
					
					case 5:
						unk_0x4A096F645CED26D9("EmailAds_LS_Customs");
						unk_0xF1B28F753235CE2A(true);
						break;
					
					case 6:
						unk_0x4A096F645CED26D9("EmailAds_Elitas_Travel");
						unk_0xF1B28F753235CE2A(true);
						break;
					
					case 7:
						unk_0x4A096F645CED26D9("EmailAds_LS_Tourist_Info");
						unk_0xF1B28F753235CE2A(true);
						break;
					
					case 8:
						unk_0x4A096F645CED26D9("emailads_dynasty8");
						unk_0xF1B28F753235CE2A(true);
						break;
					
					case 9:
						unk_0x4A096F645CED26D9("emailads_bennys");
						unk_0xF1B28F753235CE2A(true);
						break;
					
					case 10:
						unk_0x4A096F645CED26D9("emailads_ammunation");
						unk_0xF1B28F753235CE2A(true);
						break;
					
					case 11:
						unk_0x4A096F645CED26D9("emailads_SSSA");
						unk_0xF1B28F753235CE2A(true);
						break;
					
					case 12:
						unk_0x4A096F645CED26D9("emailads_maze_bank");
						unk_0xF1B28F753235CE2A(true);
						break;
					
					case 13:
						unk_0x4A096F645CED26D9("emailads_shark");
						unk_0xF1B28F753235CE2A(true);
						break;
					
					case 14:
						unk_0x4A096F645CED26D9("emailads_RP");
						unk_0xF1B28F753235CE2A(true);
						break;
				}
				unk_0xE1FDD153F5858534();
				func_22(Global_19662, "SET_SOFT_KEYS", 2f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
				func_58(Global_19662, "DISPLAY_VIEW", 9f, -1082130432, -1082130432, -1082130432, -1082130432);
				if (iLocal_22 == iLocal_21)
				{
					if (unk_0xCE990E643CD9D0E5(Global_4271024, 25))
					{
						unk_0xD2459066EA58CE43(&Global_4271024, 25);
					}
					if (Global_4269758 > 0)
					{
						func_39(10102, iLocal_40, -1, 1, 0);
						if (Global_4269758 > 0)
						{
							Global_4269758 = 0;
						}
					}
				}
				return;
			}
			if (Global_4269759[iLocal_24 /*104*/].f_24 != 0)
			{
				if (Global_19681.f_1 > 3)
				{
					Global_19681.f_1 = 8;
				}
				if (Global_4271009 == 1 || Global_22065 == 1)
				{
					iLocal_24 = iLocal_19[0];
					iLocal_23 = 0;
					if (Global_4271009 == 1)
					{
					}
					Global_22065 = 0;
				}
				else
				{
					settimerb(0);
					iLocal_28 = 0;
					unk_0x830F007E19C63E14(Global_19662, "GET_CURRENT_SELECTION");
					iLocal_33 = unk_0xF4712E16A4C164FE();
					while (!unk_0x654BC7395AE9BF77(iLocal_33) && iLocal_28 == 0)
					{
						wait(0);
						if (timerb() > 2000)
						{
							iLocal_28 = 1;
						}
					}
					if (iLocal_28 == 1)
					{
						iLocal_29 = 0;
					}
					else
					{
						iLocal_29 = unk_0x14E3913C604B1108(iLocal_33);
					}
					if (iLocal_29 < 0)
					{
						iLocal_29 = 0;
					}
					iLocal_24 = iLocal_19[iLocal_22];
					iLocal_23 = iLocal_22;
				}
				Global_4269759[iLocal_24 /*104*/].f_28 = 1;
				iLocal_26 = 0;
				StringCopy(&Global_22046, "NO_HYPERLINK", 64);
				Var0 = { Global_4269759[iLocal_24 /*104*/] };
				StringConCat(&Var0, "_LINK", 64);
				if (unk_0x3030AE9FCF1BC243(&Var0))
				{
					Global_22046 = { Var0 };
					iLocal_26 = 1;
					if (Global_19669)
					{
						func_22(Global_19662, "SET_SOFT_KEYS", 1f, 1f, 16f, -1f, -1f, "CELL_267", 0, 0, 0, 0);
					}
					else
					{
						func_22(Global_19662, "SET_SOFT_KEYS", 1f, 1f, 16f, -1f, -1f, 0, 0, 0, 0, 0);
					}
					unk_0xBE20AB8238688965(&Global_7551, 17);
					Global_4269759[iLocal_24 /*104*/].f_26 = 1;
					Global_4269759[iLocal_24 /*104*/].f_24 = 2;
				}
				if (Global_4269759[iLocal_24 /*104*/].f_26 == 0)
				{
					Global_4269759[iLocal_24 /*104*/].f_24 = 1;
				}
				func_42();
				unk_0x830F007E19C63E14(Global_19662, "SET_DATA_SLOT");
				unk_0xAD291B8F75D737AD(9);
				unk_0xAD291B8F75D737AD(0);
				func_16("CELL_1");
				unk_0xB23270F3D5E62FDE("CELL_TO_FIELD");
				unk_0x9EFD301E3BE8324E(unk_0x72C1D3A1AB8CAA5B(unk_0x460153A63B9477BC()));
				unk_0x2042E9CA4306F725();
				if (Global_4269759[iLocal_24 /*104*/].f_17 == 145)
				{
					unk_0xB23270F3D5E62FDE("CELL_FROM_FIELD");
					unk_0x9EFD301E3BE8324E(&(Global_4269759[iLocal_24 /*104*/].f_50));
					unk_0x2042E9CA4306F725();
				}
				else
				{
					unk_0xB23270F3D5E62FDE("CELL_FROM_FIELD");
					unk_0x6A826E35A3096ED0(&(Global_1848[Global_4269759[iLocal_24 /*104*/].f_17 /*29*/].f_3));
					unk_0x2042E9CA4306F725();
				}
				switch (Global_4269759[iLocal_24 /*104*/].f_32)
				{
					case 0:
						func_16(&(Global_4269759[iLocal_24 /*104*/]));
						break;
					
					case 1:
						unk_0xB23270F3D5E62FDE(&(Global_4269759[iLocal_24 /*104*/]));
						unk_0x9EFD301E3BE8324E(&(Global_4269759[iLocal_24 /*104*/].f_33));
						if (Global_4269759[iLocal_24 /*104*/].f_66 == 1 && !unk_0xF005CCA4263DF67F(&(Global_4269759[iLocal_24 /*104*/].f_67), "NULL"))
						{
							unk_0x9EFD301E3BE8324E(&(Global_4269759[iLocal_24 /*104*/].f_67));
						}
						if ((Global_4269759[iLocal_24 /*104*/].f_66 == 2 && !unk_0xF005CCA4263DF67F(&(Global_4269759[iLocal_24 /*104*/].f_67), "NULL")) && !unk_0xF005CCA4263DF67F(&(Global_4269759[iLocal_24 /*104*/].f_83), "NULL"))
						{
							if (unk_0x3030AE9FCF1BC243(&(Global_4269759[iLocal_24 /*104*/].f_67)))
							{
								unk_0x6A826E35A3096ED0(&(Global_4269759[iLocal_24 /*104*/].f_67));
							}
							else
							{
								unk_0x9EFD301E3BE8324E(&(Global_4269759[iLocal_24 /*104*/].f_67));
							}
							if (unk_0x3030AE9FCF1BC243(&(Global_4269759[iLocal_24 /*104*/].f_83)))
							{
								unk_0x6A826E35A3096ED0(&(Global_4269759[iLocal_24 /*104*/].f_83));
							}
							else
							{
								unk_0x9EFD301E3BE8324E(&(Global_4269759[iLocal_24 /*104*/].f_83));
							}
						}
						unk_0x2042E9CA4306F725();
						break;
					
					case 2:
						unk_0xB23270F3D5E62FDE(&(Global_4269759[iLocal_24 /*104*/]));
						unk_0x42710E9E08FA375A(Global_4269759[iLocal_24 /*104*/].f_49);
						unk_0x2042E9CA4306F725();
						break;
					
					case 3:
						unk_0xB23270F3D5E62FDE(&(Global_4269759[iLocal_24 /*104*/]));
						unk_0x9EFD301E3BE8324E(&(Global_4269759[iLocal_24 /*104*/].f_33));
						unk_0x42710E9E08FA375A(Global_4269759[iLocal_24 /*104*/].f_49);
						if (Global_4269759[iLocal_24 /*104*/].f_66 == 1 && !unk_0xF005CCA4263DF67F(&(Global_4269759[iLocal_24 /*104*/].f_67), "NULL"))
						{
							unk_0x9EFD301E3BE8324E(&(Global_4269759[iLocal_24 /*104*/].f_67));
						}
						if ((Global_4269759[iLocal_24 /*104*/].f_66 == 2 && !unk_0xF005CCA4263DF67F(&(Global_4269759[iLocal_24 /*104*/].f_67), "NULL")) && !unk_0xF005CCA4263DF67F(&(Global_4269759[iLocal_24 /*104*/].f_83), "NULL"))
						{
							if (unk_0x3030AE9FCF1BC243(&(Global_4269759[iLocal_24 /*104*/].f_67)))
							{
								unk_0x6A826E35A3096ED0(&(Global_4269759[iLocal_24 /*104*/].f_67));
							}
							else
							{
								unk_0x9EFD301E3BE8324E(&(Global_4269759[iLocal_24 /*104*/].f_67));
							}
							if (unk_0x3030AE9FCF1BC243(&(Global_4269759[iLocal_24 /*104*/].f_83)))
							{
								unk_0x6A826E35A3096ED0(&(Global_4269759[iLocal_24 /*104*/].f_83));
							}
							else
							{
								unk_0x9EFD301E3BE8324E(&(Global_4269759[iLocal_24 /*104*/].f_83));
							}
						}
						unk_0x2042E9CA4306F725();
						break;
					
					case 4:
						func_38(iLocal_24);
						break;
					
					case 5:
						func_38(iLocal_24);
						break;
					
					case 6:
						func_38(iLocal_24);
						break;
					
					case 7:
						func_38(iLocal_24);
						break;
					
					case 8:
						func_38(iLocal_24);
						break;
					
					case 9:
						func_38(iLocal_24);
						break;
					
					case 10:
						func_38(iLocal_24);
						break;
					
					case 11:
						func_38(iLocal_24);
						break;
				}
				if (Global_4269759[iLocal_24 /*104*/].f_17 == 145)
				{
					unk_0xB23270F3D5E62FDE("CELL_2000");
					unk_0x9EFD301E3BE8324E(&(Global_4269759[iLocal_24 /*104*/].f_50));
					unk_0x2042E9CA4306F725();
				}
				else
				{
					func_16(&(Global_1848[Global_4269759[iLocal_24 /*104*/].f_17 /*29*/].f_3));
				}
				if (Global_4269759[iLocal_24 /*104*/].f_17 == 149)
				{
					unk_0x4A096F645CED26D9("emailads_maze_bank");
					unk_0xF1B28F753235CE2A(true);
				}
				if (Global_4269759[iLocal_24 /*104*/].f_17 == 140)
				{
					unk_0x4A096F645CED26D9("EmailAds_Warstock");
					unk_0xF1B28F753235CE2A(true);
				}
				if (Global_4269759[iLocal_24 /*104*/].f_17 == 155)
				{
					unk_0x4A096F645CED26D9("emailads_arena");
					unk_0xF1B28F753235CE2A(true);
				}
				if (Global_4269759[iLocal_24 /*104*/].f_17 == 160)
				{
					unk_0x4A096F645CED26D9("emailads_diamond");
					unk_0xF1B28F753235CE2A(true);
				}
				unk_0xE1FDD153F5858534();
				Global_22071 = 1;
				func_58(Global_19662, "DISPLAY_VIEW", 9f, -1082130432, -1082130432, -1082130432, -1082130432);
				unk_0xB6B2734989D2EBCB(Global_4269759[iLocal_24 /*104*/].f_16);
				if (Global_4269759[iLocal_24 /*104*/].f_29 > 0)
				{
					if (Global_19669)
					{
						func_22(Global_19662, "SET_SOFT_KEYS", 2f, 1f, 13f, -1f, -1f, "CELL_212", 0, 0, 0, 0);
					}
					else
					{
						func_22(Global_19662, "SET_SOFT_KEYS", 2f, 1f, 13f, -1f, -1f, 0, 0, 0, 0, 0);
					}
				}
				else if (Global_4269759[iLocal_24 /*104*/].f_30 == 1)
				{
					if (Global_19669)
					{
						func_22(Global_19662, "SET_SOFT_KEYS", 2f, 1f, 5f, -1f, -1f, "CELL_201", 0, 0, 0, 0);
					}
					else
					{
						func_22(Global_19662, "SET_SOFT_KEYS", 2f, 1f, 5f, -1f, -1f, 0, 0, 0, 0, 0);
					}
				}
				else
				{
					func_22(Global_19662, "SET_SOFT_KEYS", 2f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
				}
				if (Global_4269759[iLocal_24 /*104*/].f_29 > 0)
				{
					if (unk_0xF005CCA4263DF67F(&(Global_4269759[iLocal_24 /*104*/]), "CELL_FINV"))
					{
						if (Global_19669)
						{
							func_22(Global_19662, "SET_SOFT_KEYS", 3f, 0f, 14f, -1f, -1f, "CELL_213", 0, 0, 0, 0);
						}
						else
						{
							func_22(Global_19662, "SET_SOFT_KEYS", 3f, 0f, 14f, -1f, -1f, 0, 0, 0, 0, 0);
						}
					}
					else if (Global_19669)
					{
						func_22(Global_19662, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, "CELL_206", 0, 0, 0, 0);
					}
					else
					{
						func_22(Global_19662, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, 0, 0, 0, 0, 0);
					}
				}
				else if (Global_19669)
				{
					func_22(Global_19662, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, "CELL_206", 0, 0, 0, 0);
				}
				else
				{
					func_22(Global_19662, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, 0, 0, 0, 0, 0);
				}
				if (Global_4269759[iLocal_24 /*104*/].f_24 == 2)
				{
					if (Global_4269759[iLocal_24 /*104*/].f_31 == 1)
					{
						iLocal_26 = 0;
						if (Global_19669)
						{
							func_22(Global_19662, "SET_SOFT_KEYS", 1f, 1f, 11f, -1f, -1f, "CELL_264", 0, 0, 0, 0);
						}
						else
						{
							func_22(Global_19662, "SET_SOFT_KEYS", 1f, 1f, 11f, -1f, -1f, 0, 0, 0, 0, 0);
						}
						unk_0xBE20AB8238688965(&Global_7551, 17);
					}
					else if (iLocal_26 == 0)
					{
						func_22(Global_19662, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
						unk_0xD2459066EA58CE43(&Global_7551, 17);
					}
				}
				else if (Global_19669)
				{
					func_22(Global_19662, "SET_SOFT_KEYS", 1f, 1f, 12f, -1f, -1f, "CELL_216", 0, 0, 0, 0);
					unk_0xBE20AB8238688965(&Global_7551, 17);
				}
				else
				{
					func_22(Global_19662, "SET_SOFT_KEYS", 1f, 1f, 12f, -1f, -1f, 0, 0, 0, 0, 0);
					unk_0xBE20AB8238688965(&Global_7551, 17);
				}
				Global_111858.f_14047[Global_19681 /*20*/].f_18 = 0;
				Global_4271009 = 0;
			}
			else
			{
				Global_111858.f_14047[Global_19681 /*20*/].f_18 = 0;
				Global_4271009 = 0;
			}
		}
		if (Global_2550457 == 0)
		{
			if (Global_76833)
			{
			}
		}
	}
}

void func_38(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	switch (Global_111858.f_14137[iParam0 /*104*/].f_49)
	{
		case 1:
			unk_0xB23270F3D5E62FDE("CELL_CL01");
			break;
		
		case 2:
			unk_0xB23270F3D5E62FDE("CELL_CL02");
			break;
		
		case 3:
			unk_0xB23270F3D5E62FDE("CELL_CL03");
			break;
		
		case 4:
			unk_0xB23270F3D5E62FDE("CELL_CL04");
			break;
		
		case 5:
			unk_0xB23270F3D5E62FDE("CELL_CL05");
			break;
		
		case 6:
			unk_0xB23270F3D5E62FDE("CELL_CL06");
			break;
		
		case 7:
			unk_0xB23270F3D5E62FDE("CELL_CL07");
			break;
		
		case 8:
			unk_0xB23270F3D5E62FDE("CELL_CL08");
			break;
		
		case 9:
			unk_0xB23270F3D5E62FDE("CELL_CL09");
			break;
	}
	unk_0x6A826E35A3096ED0(&(Global_111858.f_14137[iParam0 /*104*/]));
	while (iVar0 < Global_111858.f_14137[iParam0 /*104*/].f_49)
	{
		switch (Global_111858.f_14137[iParam0 /*104*/].f_32)
		{
			case 4:
				unk_0x6A826E35A3096ED0(&(Global_2540384.f_1722[iVar0 /*4*/]));
				break;
			
			case 5:
				unk_0x6A826E35A3096ED0(&(Global_1663783[iVar0 /*4*/]));
				break;
			
			case 6:
				unk_0x6A826E35A3096ED0(&(Global_1663824[iVar0 /*4*/]));
				break;
			
			case 7:
				unk_0x6A826E35A3096ED0(&(Global_1663845[iVar0 /*4*/]));
				break;
			
			case 8:
				unk_0x6A826E35A3096ED0(&(Global_1663862[iVar0 /*4*/]));
				break;
			
			case 9:
				unk_0x6A826E35A3096ED0(&(Global_1663875[iVar0 /*4*/]));
				break;
			
			case 10:
				unk_0x6A826E35A3096ED0(&(Global_1663888[iVar0 /*4*/]));
				break;
			
			case 11:
				unk_0x6A826E35A3096ED0(&(Global_1663901[iVar0 /*4*/]));
				break;
		}
		iVar0++;
	}
	unk_0x2042E9CA4306F725();
}

void func_39(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	int iVar0;
	
	if (bParam4)
	{
	}
	iVar0 = Global_2551832[iParam0 /*3*/][func_40(iParam2)];
	if (iVar0 != 0)
	{
		unk_0x6000E4684CB4330B(iVar0, iParam1, iParam3);
	}
}

int func_40(var uParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = uParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_41();
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

int func_41()
{
	return Global_1312763;
}

void func_42()
{
	int iVar0;
	
	if (iLocal_37)
	{
		unk_0x2DDA2C702A92866E(&Local_34);
	}
	iLocal_37 = 0;
	if (Global_4269759[iLocal_24 /*104*/].f_24 != 0)
	{
		iVar0 = 0;
		while (iVar0 < 59)
		{
			if (unk_0xF005CCA4263DF67F(&(Global_4269759[iLocal_24 /*104*/]), &(Local_35[iVar0 /*6*/])))
			{
				if (func_43(&(Local_35[iVar0 /*6*/])))
				{
					StringCopy(&Local_34, "BAT_CASE_", 64);
					StringIntConCat(&Local_34, Global_1694998, 64);
				}
				else
				{
					Local_34 = { Local_36[iVar0 /*16*/] };
				}
				iLocal_37 = 1;
				unk_0x494D5FF88119CDC0(&Local_34, 0);
				while (!unk_0xC7F5A2E99D75A65C(&Local_34))
				{
					wait(100);
				}
			}
			iVar0++;
		}
	}
}

int func_43(char* sParam0)
{
	switch (unk_0x856D5567211886A2(sParam0))
	{
		case 368818696:
		case -242537573:
		case 293851599:
		case 1276417163:
		case -695052470:
		case -272335065:
		case 1286719131:
		case -1417266496:
		case -469944288:
		case -687436221:
		case 1989355620:
		case 549480519:
		case 1944388503:
		case -934641488:
		case -728564821:
		case 1522380948:
		case -1256768569:
		case -320488889:
		case -539437394:
		case -1801936221:
			return 1;
		
		default:
	}
	return 0;
}

void func_44()
{
	if (iLocal_27)
	{
		if (timera() > 50)
		{
			iLocal_27 = 0;
		}
	}
	if (unk_0xC1F43F8D0D5EB664(2))
	{
		if (func_3(2, 181, 0))
		{
			if (iLocal_22 > 0)
			{
				iLocal_22 = (iLocal_22 - 1);
				func_9();
			}
		}
		if (func_3(2, 180, 0))
		{
			iLocal_22++;
			if (iLocal_22 == iLocal_20)
			{
				iLocal_22 = 0;
			}
			func_6();
		}
	}
	if (iLocal_27 == 0)
	{
		if (func_3(2, Global_19657, 0))
		{
			if (iLocal_22 > 0)
			{
				iLocal_22 = (iLocal_22 - 1);
				func_9();
			}
			iLocal_27 = 1;
			settimera(0);
		}
		if (func_3(2, Global_19658, 0))
		{
			iLocal_22++;
			if (iLocal_22 == iLocal_20)
			{
				iLocal_22 = 0;
			}
			func_6();
			iLocal_27 = 1;
			settimera(0);
		}
	}
}

void func_45()
{
	float fVar0;
	
	fVar0 = func_46(Local_39, Local_38, Global_19641, -90f, 0f, 90f, 350f, 0);
	unk_0x8AA7B53ED39C5183((500f + (75f * fVar0)));
	if (fVar0 >= 1f)
	{
		Global_22039 = 0;
		iLocal_18 = 0;
	}
}

float func_46(struct<3> Param0, struct<3> Param1, struct<3> Param2, struct<3> Param3, float fParam4, bool bParam5)
{
	struct<2> Var0;
	float fVar1;
	float fVar2;
	float fVar3;
	
	if (Global_4271303 == 0)
	{
		if (unk_0xCE990E643CD9D0E5(Global_7551, 14) && Global_19681.f_1 < 4)
		{
			unk_0x1F1B1269BB6217F7(&Var0);
			if (Global_19634[Global_19626 /*3*/].f_1 == Var0.f_1)
			{
				Global_4271303 = 1;
			}
		}
	}
	if (func_49() && Global_4271303 == 0)
	{
		return 2f;
	}
	if (iLocal_18 == 0)
	{
		iLocal_18 = unk_0x578C4EF320340AF7();
	}
	fVar1 = func_48((to_float((unk_0x578C4EF320340AF7() - iLocal_18)) / fParam4), 0f, 1f);
	if (fVar1 < 1f)
	{
		fVar2 = fVar1;
		if (bParam5)
		{
			fVar2 = (fVar2 - 1f);
			fVar3 = 0.670158f;
			fVar2 = (((fVar2 * fVar2) * (((fVar3 + 1f) * fVar2) + fVar3)) + 1f);
		}
		else
		{
			fVar2 = sin((fVar1 * 90f));
		}
		Global_19609 = { func_47(Param0, Param1, fVar2) };
		Global_19612 = { func_47(Param2, Param3, fVar2) };
	}
	else
	{
		Global_19609 = { Param1 };
		Global_19612 = { Param3 };
	}
	unk_0x241AFEE3D5B4FF70(Global_19609);
	unk_0xC6EAF6E2A0CACFED(Global_19612, 0);
	return fVar1;
}

Vector3 func_47(struct<3> Param0, struct<3> Param1, float fParam2)
{
	return Param0 + Param1 - Param0 * Vector(fParam2, fParam2, fParam2);
}

float func_48(float fParam0, float fParam1, float fParam2)
{
	if (fParam0 > fParam2)
	{
		return fParam2;
	}
	else if (fParam0 < fParam1)
	{
		return fParam1;
	}
	return fParam0;
}

int func_49()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (!unk_0xA59F96B50B97E63C(unk_0x9B0761B4C3EB8BC7(), 0))
	{
		if (Global_19681.f_1 == 10 || Global_19681.f_1 == 9)
		{
			if (Global_19624 == 0)
			{
				if (Global_6866 != 128)
				{
					if (!unk_0x47DBF174A0CB9D55(unk_0x9B0761B4C3EB8BC7(), 0))
					{
						if (Global_21005 != 2)
						{
						}
					}
				}
			}
		}
		if (func_21(14))
		{
			return 0;
		}
		if (unk_0xB8DB6610D5815003(unk_0x9B0761B4C3EB8BC7(), 0))
		{
			return 0;
		}
		if (unk_0x47DBF174A0CB9D55(unk_0x9B0761B4C3EB8BC7(), 0))
		{
			if (!unk_0xDA4C30E92D56CC0A())
			{
				if (unk_0xE72C9284B5143451(unk_0xA5D5B1042E8F47BD(unk_0x9B0761B4C3EB8BC7(), 0)))
				{
					return 0;
				}
			}
		}
		if (((unk_0x9D7D76BBBFE285E0(unk_0x9B0761B4C3EB8BC7()) || unk_0xE43E3F96A5D750CE(unk_0x9B0761B4C3EB8BC7())) || unk_0x5197F8CD4A72E68F(unk_0x460153A63B9477BC())) || (unk_0xEEFD6B1BEB00F02E(unk_0x9B0761B4C3EB8BC7()) && !(unk_0xCE990E643CD9D0E5(Global_4456448.f_37, 17) && (unk_0xFC559366953F62B3() || Global_1655232))))
		{
			return 0;
		}
		if (Global_110906)
		{
			return 0;
		}
	}
	if (Global_76833)
	{
		return 0;
	}
	iVar2 = 0;
	iVar0 = unk_0xFA3A11B011BBD7F6();
	iVar1 = unk_0xF7B3A1430308F92B(iVar0);
	if (iVar1 == 4 && (iVar0 == 0 || unk_0xDA4C30E92D56CC0A()))
	{
		iVar2 = 1;
		if (!unk_0xA59F96B50B97E63C(unk_0x9B0761B4C3EB8BC7(), 0))
		{
			if (unk_0x47DBF174A0CB9D55(unk_0x9B0761B4C3EB8BC7(), 0))
			{
				iVar3 = unk_0xA5D5B1042E8F47BD(unk_0x9B0761B4C3EB8BC7(), 0);
				if ((((((((unk_0x97AFEF6099069369(unk_0x36FE6D3220816ADA(iVar3)) || unk_0x72B9CC2155AEDF58(unk_0x36FE6D3220816ADA(iVar3))) || unk_0x0CE6C9C2E6F95026(unk_0x36FE6D3220816ADA(iVar3))) || unk_0x36FE6D3220816ADA(iVar3) == joaat("seashark")) || unk_0x36FE6D3220816ADA(iVar3) == joaat("seashark2")) || unk_0x36FE6D3220816ADA(iVar3) == joaat("rhino")) || unk_0x36FE6D3220816ADA(iVar3) == joaat("submersible")) || unk_0x36FE6D3220816ADA(iVar3) == joaat("submersible2")) || unk_0x36FE6D3220816ADA(iVar3) == joaat("toro"))
				{
					iVar2 = 0;
				}
			}
		}
	}
	if (Global_4271302 || iVar2 == 1)
	{
		if (unk_0x7B70881748D166CD(joaat("apptrackify")) > 0 || Global_111858.f_14047.f_89)
		{
			if (unk_0x7B70881748D166CD(joaat("michael2")) > 0)
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
			return 1;
		}
	}
	return 0;
}

void func_50()
{
	float fVar0;
	
	fVar0 = func_46(Local_38, Local_39, -90f, 0f, 90f, Global_19641, 350f, 0);
	unk_0x8AA7B53ED39C5183((500f + (75f * (1f - fVar0))));
	if (fVar0 >= 1f)
	{
		Global_22038 = 0;
		func_61();
		iLocal_18 = 0;
	}
}

void func_51()
{
	if (Global_4271009 == 0)
	{
		if (iLocal_23 < 0)
		{
			iLocal_23 = 0;
		}
		func_52(Global_19662, "SET_HEADER", "CELL_INBOX", 0, 0, 0, 0);
		func_58(Global_19662, "DISPLAY_VIEW", 8f, to_float(iLocal_23), -1082130432, -1082130432, -1082130432);
		if (Global_19669)
		{
			if (iLocal_20 > 0)
			{
				func_22(Global_19662, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, "CELL_214", 0, 0, 0, 0);
			}
			else
			{
				func_22(Global_19662, "SET_SOFT_KEYS", 2f, 0f, 2f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			func_22(Global_19662, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, "CELL_206", 0, 0, 0, 0);
		}
		else
		{
			if (iLocal_20 > 0)
			{
				func_22(Global_19662, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			else
			{
				func_22(Global_19662, "SET_SOFT_KEYS", 2f, 0f, 2f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			func_22(Global_19662, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, 0, 0, 0, 0, 0);
		}
		if (Global_76833)
		{
			func_22(Global_19662, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			unk_0xD2459066EA58CE43(&Global_7551, 17);
		}
		else
		{
			func_22(Global_19662, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			unk_0xD2459066EA58CE43(&Global_7551, 17);
		}
	}
	else
	{
		iLocal_23 = 0;
	}
}

void func_52(int iParam0, char* sParam1, char* sParam2, char* sParam3, char* sParam4, char* sParam5, char* sParam6)
{
	unk_0x830F007E19C63E14(iParam0, sParam1);
	func_16(sParam2);
	if (!unk_0x7BCC91F3C1CF24E8(sParam3))
	{
		func_16(sParam3);
	}
	if (!unk_0x7BCC91F3C1CF24E8(sParam4))
	{
		func_16(sParam4);
	}
	if (!unk_0x7BCC91F3C1CF24E8(sParam5))
	{
		func_16(sParam5);
	}
	if (!unk_0x7BCC91F3C1CF24E8(sParam6))
	{
		func_16(sParam6);
	}
	unk_0xE1FDD153F5858534();
}

void func_53()
{
	int iVar0[12];
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	struct<8> Var5;
	int iVar6;
	int iVar7[10];
	int iVar8;
	
	iLocal_20 = 0;
	iLocal_21 = 0;
	func_30();
	iVar1 = 0;
	iVar2 = 0;
	while (iVar1 < 11)
	{
		if (unk_0x7B70881748D166CD(joaat("cellphone_flashhand")) == 0)
		{
			func_61();
		}
		iVar3 = 0;
		iVar4 = 11;
		Global_4269759[iVar4 /*104*/].f_18 = -1;
		Global_4269759[iVar4 /*104*/].f_18.f_1 = 0;
		Global_4269759[iVar4 /*104*/].f_18.f_2 = 0;
		Global_4269759[iVar4 /*104*/].f_18.f_3 = 0;
		Global_4269759[iVar4 /*104*/].f_18.f_5 = 0;
		while (iVar3 < 12)
		{
			if (unk_0x7B70881748D166CD(joaat("cellphone_flashhand")) == 0)
			{
				func_61();
			}
			if (iVar0[iVar3] == 0)
			{
				if (Global_4269759[iVar3 /*104*/].f_24 != 0)
				{
					if (Global_4269759[iVar3 /*104*/].f_99[Global_19681] == 1)
					{
						if (func_57(Global_4269759[iVar3 /*104*/].f_18, Global_4269759[iVar4 /*104*/].f_18))
						{
							iVar4 = iVar3;
							if (Global_4269759[iVar4 /*104*/].f_28 == 0)
							{
								iLocal_25 = 0;
							}
							else
							{
								iLocal_25 = 1;
							}
						}
					}
				}
			}
			iVar3++;
		}
		iLocal_19[iVar1] = iVar4;
		iVar0[iVar4] = 1;
		if (Global_4269759[iVar4 /*104*/].f_24 != 0)
		{
			if (Global_4269759[iVar4 /*104*/].f_99[Global_19681] == 1)
			{
				unk_0x830F007E19C63E14(Global_19662, "SET_DATA_SLOT");
				unk_0xAD291B8F75D737AD(8);
				unk_0xAD291B8F75D737AD(iVar1);
				unk_0xAD291B8F75D737AD(iLocal_25);
				unk_0xF1B28F753235CE2A(false);
				if (Global_4269759[iVar4 /*104*/].f_17 == 145)
				{
					unk_0xB23270F3D5E62FDE("CELL_2000");
					unk_0x9EFD301E3BE8324E(&(Global_4269759[iVar4 /*104*/].f_50));
					unk_0x2042E9CA4306F725();
				}
				else
				{
					func_16(&(Global_1848[Global_4269759[iVar4 /*104*/].f_17 /*29*/].f_3));
				}
				Var5 = { Global_4269759[iVar4 /*104*/] };
				if (func_43(&(Global_4269759[iVar4 /*104*/])))
				{
					iVar6 = func_54(7315, -1, -1);
					switch (iVar6)
					{
						case 0:
							StringCopy(&Var5, "BONEMAIL_TXT_SUB", 64);
							break;
						
						case 1:
							StringCopy(&Var5, "BONEMAIL2_TXT_SUB", 64);
							break;
						
						case 2:
							StringCopy(&Var5, "BONEMAIL3_TXT_SUB", 64);
							break;
						
						case 3:
							StringCopy(&Var5, "BONEMAIL4_TXT_SUB", 64);
							break;
						
						case 4:
							StringCopy(&Var5, "BONEMAIL5_TXT_SUB", 64);
							break;
					}
				}
				else
				{
					StringConCat(&Var5, "_SUB", 64);
				}
				func_16(&Var5);
				unk_0xE1FDD153F5858534();
				iLocal_20++;
				iLocal_21++;
			}
		}
		iVar1++;
	}
	iVar1 = iLocal_20;
	iVar8 = 0;
	while (iVar1 < (iLocal_44 + iLocal_20))
	{
		iVar2 = 0;
		iVar8 = 0;
		while (iVar2 < iLocal_44 && iVar8 == 0)
		{
			unk_0x04844182E1F97377(iVar2, &Local_45);
			if (iVar7[iVar2] == 0)
			{
				unk_0x830F007E19C63E14(Global_19662, "SET_DATA_SLOT");
				unk_0xAD291B8F75D737AD(8);
				unk_0xAD291B8F75D737AD(iVar1);
				if (iVar1 == 0)
				{
					if (Global_4269758 == 0)
					{
						unk_0xAD291B8F75D737AD(1);
					}
					else
					{
						unk_0xAD291B8F75D737AD(0);
					}
				}
				else
				{
					unk_0xAD291B8F75D737AD(1);
				}
				unk_0xF1B28F753235CE2A(false);
				unk_0xB23270F3D5E62FDE("CELL_2000");
				unk_0x9EFD301E3BE8324E(&(Local_45.f_2));
				unk_0x2042E9CA4306F725();
				unk_0xB23270F3D5E62FDE("CELL_EMAIL_SUBJ");
				unk_0x9EFD301E3BE8324E(&(Local_45.f_23[0 /*16*/]));
				unk_0x9EFD301E3BE8324E(&(Local_45.f_23[1 /*16*/]));
				unk_0x2042E9CA4306F725();
				unk_0xE1FDD153F5858534();
				iVar7[iVar2] = 1;
				iLocal_19[iVar1] = iVar2;
				iVar8 = 1;
				iLocal_20++;
				if (iVar2 == 0)
				{
					iLocal_40 = Local_45.f_1;
				}
			}
			iVar2++;
		}
		iVar1++;
	}
}

int func_54(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (iParam1 == -1)
	{
		iParam1 = func_41();
	}
	iVar0 = 0;
	iVar1 = func_56(iParam0, iParam1);
	iVar2 = func_55(iParam0);
	if (0 != iVar1)
	{
		if (!unk_0x84F15E111A2161E1(iVar1, &iVar0, iVar2, 8, iParam2))
		{
			iVar0 = 0;
		}
	}
	return iVar0;
}

int func_55(int iParam0)
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

int func_56(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam1 == -1)
	{
		iParam1 = func_41();
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

int func_57(struct<6> Param0, struct<6> Param1)
{
	struct<4> Var0;
	struct<4> Var1;
	int iVar2;
	int iVar3;
	
	if (Param0.f_5 < Param1.f_5)
	{
		return 0;
	}
	if (Param0.f_5 > Param1.f_5)
	{
		return 1;
	}
	if (Param0.f_5 == Param1.f_5)
	{
		if (Param0.f_4 < Param1.f_4)
		{
			return 0;
		}
		if (Param0.f_4 > Param1.f_4)
		{
			return 1;
		}
		if (Param0.f_4 == Param1.f_4)
		{
			Var0 = Param0;
			Var0.f_1 = Param0.f_1 * 60;
			Var0.f_2 = Param0.f_2 * 3600;
			Var0.f_3 = (Param0.f_3 * 86400);
			iVar2 = (((Var0 + Var0.f_1) + Var0.f_2) + Var0.f_3);
			Var1 = Param1;
			Var1.f_1 = Param1.f_1 * 60;
			Var1.f_2 = Param1.f_2 * 3600;
			Var1.f_3 = (Param1.f_3 * 86400);
			iVar3 = (((Var1 + Var1.f_1) + Var1.f_2) + Var1.f_3);
			if (iVar2 > iVar3 || iVar2 == iVar3)
			{
				return 1;
			}
			else
			{
				return 0;
			}
		}
	}
	return 0;
}

void func_58(int iParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6)
{
	unk_0x830F007E19C63E14(iParam0, sParam1);
	unk_0xAD291B8F75D737AD(round(fParam2));
	if (fParam3 != -1f)
	{
		unk_0xAD291B8F75D737AD(round(fParam3));
	}
	if (fParam4 != -1f)
	{
		unk_0xAD291B8F75D737AD(round(fParam4));
	}
	if (fParam5 != -1f)
	{
		unk_0xAD291B8F75D737AD(round(fParam5));
	}
	if (fParam6 != -1f)
	{
		unk_0xAD291B8F75D737AD(round(fParam6));
	}
	unk_0xE1FDD153F5858534();
}

void func_59()
{
	switch (unk_0xA2C6E70C9BCA9C34())
	{
		case -1:
			unk_0x9BC1DC4308A414DE("gta5mkt_en");
			break;
		
		case 0:
			unk_0x9BC1DC4308A414DE("gta5mkt_en");
			break;
		
		case 1:
			unk_0x9BC1DC4308A414DE("gta5mkt_fr");
			break;
		
		case 2:
			unk_0x9BC1DC4308A414DE("gta5mkt_ge");
			break;
		
		case 3:
			unk_0x9BC1DC4308A414DE("gta5mkt_it");
			break;
		
		case 4:
			unk_0x9BC1DC4308A414DE("gta5mkt_sp");
			break;
		
		case 5:
			unk_0x9BC1DC4308A414DE("gta5mkt_pt");
			break;
		
		case 6:
			unk_0x9BC1DC4308A414DE("gta5mkt_pl");
			break;
		
		case 7:
			unk_0x9BC1DC4308A414DE("gta5mkt_ru");
			break;
		
		case 8:
			unk_0x9BC1DC4308A414DE("gta5mkt_ko");
			break;
		
		case 9:
			unk_0x9BC1DC4308A414DE("gta5mkt_ch");
			break;
		
		case 10:
			unk_0x9BC1DC4308A414DE("gta5mkt_ja");
			break;
		
		case 11:
			unk_0x9BC1DC4308A414DE("gta5mkt_me");
			break;
		
		case 12:
			unk_0x9BC1DC4308A414DE("gta5mkt_cn");
			break;
	}
	unk_0x805F21C8A8C8CCD1(0, 6);
	wait(0);
	iLocal_41 = 1;
	bLocal_42 = false;
	while (iLocal_41 && Global_19681.f_1 > 3)
	{
		wait(0);
		iLocal_43 = unk_0x244E5045E3E68BD5();
		if (func_4())
		{
			Global_19681.f_1 = 3;
			iLocal_41 = 0;
			bLocal_42 = false;
		}
		switch (iLocal_43)
		{
			case 3:
				iLocal_41 = 0;
				bLocal_42 = true;
				break;
			
			case 0:
				iLocal_41 = 0;
				bLocal_42 = true;
				break;
			
			case 1:
				break;
			
			case 4:
				iLocal_41 = 0;
				bLocal_42 = false;
				break;
			
			case 2:
				iLocal_41 = 0;
				bLocal_42 = false;
				break;
		}
	}
	if (bLocal_42)
	{
		iLocal_44 = unk_0x54A31046B8354173();
	}
	else
	{
		iLocal_44 = 0;
	}
}

void func_60()
{
	StringCopy(&(Local_35[0 /*6*/]), "SXT_JUL_1ST", 24);
	StringCopy(&(Local_36[0 /*16*/]), "05_a_sext_stripperJuliet", 64);
	StringCopy(&(Local_35[1 /*6*/]), "SXT_JUL_2ND", 24);
	StringCopy(&(Local_36[1 /*16*/]), "05_b_sext_stripperJuliet", 64);
	StringCopy(&(Local_35[2 /*6*/]), "SXT_JUL_NEED", 24);
	StringCopy(&(Local_36[2 /*16*/]), "05_c_sext_stripperJuliet", 64);
	StringCopy(&(Local_35[3 /*6*/]), "MAPEMAIL_TXT", 24);
	StringCopy(&(Local_36[3 /*16*/]), "NHP_PHOTO_19", 64);
	StringCopy(&(Local_35[4 /*6*/]), "SXT_NIK_2ND", 24);
	StringCopy(&(Local_36[4 /*16*/]), "06_b_sext_stripperNikki", 64);
	StringCopy(&(Local_35[5 /*6*/]), "SXT_NIK_NEED", 24);
	StringCopy(&(Local_36[5 /*16*/]), "06_c_sext_stripperNikki", 64);
	StringCopy(&(Local_35[6 /*6*/]), "SXT_SAP_1ST", 24);
	StringCopy(&(Local_36[6 /*16*/]), "08_a_sext_stripperSapphire", 64);
	StringCopy(&(Local_35[7 /*6*/]), "SXT_SAP_2ND", 24);
	StringCopy(&(Local_36[7 /*16*/]), "08_b_sext_stripperSapphire", 64);
	StringCopy(&(Local_35[8 /*6*/]), "SXT_SAP_NEED", 24);
	StringCopy(&(Local_36[8 /*16*/]), "08_c_sext_stripperSapphire", 64);
	StringCopy(&(Local_35[9 /*6*/]), "SXT_INF_1ST", 24);
	StringCopy(&(Local_36[9 /*16*/]), "04_a_sext_stripperInfernus", 64);
	StringCopy(&(Local_35[10 /*6*/]), "SXT_INF_2ND", 24);
	StringCopy(&(Local_36[10 /*16*/]), "04_b_sext_stripperInfernus", 64);
	StringCopy(&(Local_35[11 /*6*/]), "SXT_INF_NEED", 24);
	StringCopy(&(Local_36[11 /*16*/]), "04_c_sext_stripperInfernus", 64);
	StringCopy(&(Local_35[12 /*6*/]), "SXT_TXI_1ST", 24);
	StringCopy(&(Local_36[12 /*16*/]), "11_a_sext_taxiLiz", 64);
	StringCopy(&(Local_35[13 /*6*/]), "SXT_TXI_2ND", 24);
	StringCopy(&(Local_36[13 /*16*/]), "11_b_sext_taxiLiz", 64);
	StringCopy(&(Local_35[14 /*6*/]), "SXT_TXI_NEED", 24);
	StringCopy(&(Local_36[14 /*16*/]), "11_c_sext_taxiLiz", 64);
	StringCopy(&(Local_35[15 /*6*/]), "SXT_HCH_1ST", 24);
	StringCopy(&(Local_36[15 /*16*/]), "10_a_sext_hitcherGirl", 64);
	StringCopy(&(Local_35[16 /*6*/]), "SXT_HCH_2ND", 24);
	StringCopy(&(Local_36[16 /*16*/]), "10_b_sext_hitcherGirl", 64);
	StringCopy(&(Local_35[17 /*6*/]), "SXT_HCH_NEED", 24);
	StringCopy(&(Local_36[17 /*16*/]), "10_c_sext_hitcherGirl", 64);
	StringCopy(&(Local_35[18 /*6*/]), "SOL2_PASS", 24);
	StringCopy(&(Local_36[18 /*16*/]), "executiveproducer", 64);
	StringCopy(&(Local_35[19 /*6*/]), "MAPEMAIL_TXT1", 24);
	StringCopy(&(Local_36[19 /*16*/]), "NHP_PHOTO_18", 64);
	StringCopy(&(Local_35[20 /*6*/]), "MAPEMAIL_TXT2", 24);
	StringCopy(&(Local_36[20 /*16*/]), "NHP_PHOTO_11", 64);
	StringCopy(&(Local_35[21 /*6*/]), "MAPEMAIL_TXT3", 24);
	StringCopy(&(Local_36[21 /*16*/]), "NHP_PHOTO_13", 64);
	StringCopy(&(Local_35[22 /*6*/]), "MAPEMAIL_TXT4", 24);
	StringCopy(&(Local_36[22 /*16*/]), "NHP_PHOTO_5", 64);
	StringCopy(&(Local_35[23 /*6*/]), "MAPEMAIL_TXT5", 24);
	StringCopy(&(Local_36[23 /*16*/]), "NHP_PHOTO_12", 64);
	StringCopy(&(Local_35[24 /*6*/]), "MAPEMAIL_TXT6", 24);
	StringCopy(&(Local_36[24 /*16*/]), "NHP_PHOTO_3", 64);
	StringCopy(&(Local_35[25 /*6*/]), "MAPEMAIL_TXT7", 24);
	StringCopy(&(Local_36[25 /*16*/]), "NHP_PHOTO_1", 64);
	StringCopy(&(Local_35[26 /*6*/]), "MAPEMAIL_TXT8", 24);
	StringCopy(&(Local_36[26 /*16*/]), "NHP_PHOTO_10", 64);
	StringCopy(&(Local_35[27 /*6*/]), "MAPEMAIL_TXT9", 24);
	StringCopy(&(Local_36[27 /*16*/]), "NHP_PHOTO_6", 64);
	StringCopy(&(Local_35[28 /*6*/]), "MAPEMAIL_TXT10", 24);
	StringCopy(&(Local_36[28 /*16*/]), "NHP_PHOTO_20", 64);
	StringCopy(&(Local_35[29 /*6*/]), "MAPEMAIL_TXT11", 24);
	StringCopy(&(Local_36[29 /*16*/]), "NHP_PHOTO_7", 64);
	StringCopy(&(Local_35[30 /*6*/]), "MAPEMAIL_TXT12", 24);
	StringCopy(&(Local_36[30 /*16*/]), "NHP_PHOTO_14", 64);
	StringCopy(&(Local_35[31 /*6*/]), "MAPEMAIL_TXT13", 24);
	StringCopy(&(Local_36[31 /*16*/]), "NHP_PHOTO_4", 64);
	StringCopy(&(Local_35[32 /*6*/]), "MAPEMAIL_TXT14", 24);
	StringCopy(&(Local_36[32 /*16*/]), "NHP_PHOTO_17", 64);
	StringCopy(&(Local_35[33 /*6*/]), "MAPEMAIL_TXT15", 24);
	StringCopy(&(Local_36[33 /*16*/]), "NHP_PHOTO_2", 64);
	StringCopy(&(Local_35[34 /*6*/]), "MAPEMAIL_TXT16", 24);
	StringCopy(&(Local_36[34 /*16*/]), "NHP_PHOTO_15", 64);
	StringCopy(&(Local_35[35 /*6*/]), "MAPEMAIL_TXT17", 24);
	StringCopy(&(Local_36[35 /*16*/]), "NHP_PHOTO_8", 64);
	StringCopy(&(Local_35[36 /*6*/]), "MAPEMAIL_TXT18", 24);
	StringCopy(&(Local_36[36 /*16*/]), "NHP_PHOTO_9", 64);
	StringCopy(&(Local_35[37 /*6*/]), "MAPEMAIL_TXT19", 24);
	StringCopy(&(Local_36[37 /*16*/]), "NHP_PHOTO_16", 64);
	StringCopy(&(Local_35[38 /*6*/]), "MC_EMAIL_0", 24);
	StringCopy(&(Local_36[38 /*16*/]), "NHP_prep_mines", 64);
	StringCopy(&(Local_35[39 /*6*/]), "BONEPIC1_TXT", 24);
	StringCopy(&(Local_36[39 /*16*/]), "", 64);
	StringCopy(&(Local_35[40 /*6*/]), "BONEPIC2_TXT", 24);
	StringCopy(&(Local_36[40 /*16*/]), "", 64);
	StringCopy(&(Local_35[41 /*6*/]), "BONEPIC3_TXT", 24);
	StringCopy(&(Local_36[41 /*16*/]), "", 64);
	StringCopy(&(Local_35[42 /*6*/]), "BONEPIC4_TXT", 24);
	StringCopy(&(Local_36[42 /*16*/]), "", 64);
	StringCopy(&(Local_35[43 /*6*/]), "BONEPIC5_TXT", 24);
	StringCopy(&(Local_36[43 /*16*/]), "", 64);
	StringCopy(&(Local_35[44 /*6*/]), "BONEPIC6_TXT", 24);
	StringCopy(&(Local_36[44 /*16*/]), "", 64);
	StringCopy(&(Local_35[45 /*6*/]), "BONEPIC7_TXT", 24);
	StringCopy(&(Local_36[45 /*16*/]), "", 64);
	StringCopy(&(Local_35[46 /*6*/]), "BONEPIC8_TXT", 24);
	StringCopy(&(Local_36[46 /*16*/]), "", 64);
	StringCopy(&(Local_35[47 /*6*/]), "BONEPIC9_TXT", 24);
	StringCopy(&(Local_36[47 /*16*/]), "", 64);
	StringCopy(&(Local_35[48 /*6*/]), "BONEPIC10_TXT", 24);
	StringCopy(&(Local_36[48 /*16*/]), "", 64);
	StringCopy(&(Local_35[49 /*6*/]), "BONEPIC11_TXT", 24);
	StringCopy(&(Local_36[49 /*16*/]), "", 64);
	StringCopy(&(Local_35[50 /*6*/]), "BONEPIC12_TXT", 24);
	StringCopy(&(Local_36[50 /*16*/]), "", 64);
	StringCopy(&(Local_35[51 /*6*/]), "BONEPIC13_TXT", 24);
	StringCopy(&(Local_36[51 /*16*/]), "", 64);
	StringCopy(&(Local_35[52 /*6*/]), "BONEPIC14_TXT", 24);
	StringCopy(&(Local_36[52 /*16*/]), "", 64);
	StringCopy(&(Local_35[53 /*6*/]), "BONEPIC15_TXT", 24);
	StringCopy(&(Local_36[53 /*16*/]), "", 64);
	StringCopy(&(Local_35[54 /*6*/]), "BONEPIC16_TXT", 24);
	StringCopy(&(Local_36[54 /*16*/]), "", 64);
	StringCopy(&(Local_35[55 /*6*/]), "BONEPIC17_TXT", 24);
	StringCopy(&(Local_36[55 /*16*/]), "", 64);
	StringCopy(&(Local_35[56 /*6*/]), "BONEPIC18_TXT", 24);
	StringCopy(&(Local_36[56 /*16*/]), "", 64);
	StringCopy(&(Local_35[57 /*6*/]), "BONEPIC19_TXT", 24);
	StringCopy(&(Local_36[57 /*16*/]), "", 64);
	StringCopy(&(Local_35[58 /*6*/]), "BONEPIC20_TXT", 24);
	StringCopy(&(Local_36[58 /*16*/]), "", 64);
}

void func_61()
{
	if (func_49() == 0)
	{
		unk_0x241AFEE3D5B4FF70(Global_19634[Global_19626 /*3*/]);
	}
	if (unk_0x7B70881748D166CD(joaat("cellphone_flashhand")) == 0)
	{
		func_62(0);
	}
	if (iLocal_37)
	{
		unk_0x2DDA2C702A92866E(&Local_34);
	}
	Global_22039 = 0;
	Global_22038 = 0;
	unk_0xD39E529EBE5DB04F();
}

void func_62(int iParam0)
{
	if (func_67())
	{
		return;
	}
	if (Global_19864)
	{
		if (func_66())
		{
			func_64(1, 1);
		}
		else
		{
			func_64(0, 0);
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
	if (!func_63())
	{
		Global_19681.f_1 = 3;
	}
}

int func_63()
{
	if (Global_19681.f_1 == 1 || Global_19681.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

void func_64(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		if (func_65(0))
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

int func_65(int iParam0)
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

bool func_66()
{
	return unk_0xCE990E643CD9D0E5(Global_1689730, 5);
}

bool func_67()
{
	return unk_0xCE990E643CD9D0E5(Global_1689730, 19);
}

