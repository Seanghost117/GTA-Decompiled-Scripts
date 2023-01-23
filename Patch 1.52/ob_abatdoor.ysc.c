#region Local Var
	var uLocal_0 = 0;
	var uLocal_1 = 0;
	int iLocal_2 = 0;
	int iLocal_3 = 0;
	struct<3> Local_4 = { 0, 0, 0 } ;
	struct<3> Local_5 = { 0, 0, 0 } ;
	int iLocal_6 = 0;
#endregion

void __EntryFunction__()
{
	struct<3> Var0;
	struct<3> Var1;
	struct<3> Var2;
	float fVar3;
	
	if (unk_0xED06FD5709A59F02(2))
	{
		func_4();
	}
	if (unk_0xAE06B9E39EBDE049(iScriptParam_6))
	{
		unk_0x6A8F948698B360B4(iScriptParam_6, true);
		Local_4 = { unk_0x3E4D3CCC220BDFB1(iScriptParam_6, true) };
		Local_5 = { unk_0x090239DEAF625B17(iScriptParam_6, 2) };
	}
	while (true)
	{
		wait(0);
		if (unk_0xAE06B9E39EBDE049(iScriptParam_6))
		{
			if (unk_0xED07D558B3EDDF8A(iScriptParam_6))
			{
				switch (iLocal_2)
				{
					case 0:
						if (unk_0xEE37CF67E6E839EA(iScriptParam_6))
						{
							unk_0x78FCB2E22C41B9D5(joaat("p_abat_roller_1_col"));
							if (unk_0x7D167B9A0CCDA347(joaat("p_abat_roller_1_col")))
							{
								if (!func_3(Local_4, 0f, 0f, 0f, 0))
								{
									iLocal_3 = unk_0x79CC07752E7432A1(joaat("p_abat_roller_1_col"), Local_4, true, true, false);
									unk_0xC82085403E46A869(iLocal_3, Local_5, 2, 1);
									iLocal_2 = 1;
								}
							}
						}
						break;
					
					case 1:
						if (unk_0xEE37CF67E6E839EA(iScriptParam_6))
						{
							if (unk_0x7B70881748D166CD(joaat("michael2")) > 0)
							{
								unk_0x131ED02492676000("map_objects");
								if (unk_0xC614DDE265D18415("map_objects"))
								{
									iLocal_2 = 2;
								}
							}
						}
						break;
					
					case 2:
						if (unk_0xEE37CF67E6E839EA(iScriptParam_6))
						{
							if (unk_0x7B70881748D166CD(joaat("michael2")) > 0)
							{
								if (Global_95386)
								{
									if (unk_0xC614DDE265D18415("map_objects"))
									{
										unk_0x97B8FF2D794A65A7(iScriptParam_6, "P_Abat_roller_1_open", "map_objects", 1f, false, true, 0, 0f, 0);
										iLocal_2 = 3;
									}
								}
							}
						}
						break;
					
					case 3:
						fVar3 = 0.35f;
						Var0 = { Local_4 + Vector(3.45f, 0f, 0f) };
						if (unk_0xAE06B9E39EBDE049(iLocal_3))
						{
							Var1 = { unk_0x3E4D3CCC220BDFB1(iLocal_3, true) };
							if (!func_2(Var1, Var0, 0.1f, 0))
							{
								Var2 = { Var0 - Var1 };
								unk_0x03D382CB0B44E2FC(iLocal_3, Var1 + func_1(Var2) * FtoV(unk_0x9E3DAF75EFC49F5B()) * Vector(fVar3, fVar3, fVar3), 1, false, 0, 1);
							}
							else
							{
								Global_95387 = 1;
								iLocal_2 = 4;
							}
						}
						break;
					
					case 4:
						break;
				}
			}
			else
			{
				func_4();
			}
		}
		else
		{
			func_4();
		}
	}
}

Vector3 func_1(struct<3> Param0)
{
	float fVar0;
	float fVar1;
	
	fVar0 = vmag(Param0);
	if (fVar0 != 0f)
	{
		fVar1 = (1f / fVar0);
		Param0 = { Param0 * Vector(fVar1, fVar1, fVar1) };
	}
	else
	{
		Param0.x = 0f;
		Param0.f_1 = 0f;
		Param0.f_2 = 0f;
	}
	return Param0;
}

int func_2(struct<3> Param0, struct<3> Param1, float fParam2, bool bParam3)
{
	if (fParam2 < 0f)
	{
		fParam2 = 0f;
	}
	if (!bParam3)
	{
		if (unk_0x0D77CDCF403AEBD2((Param0.x - Param1.x)) <= fParam2)
		{
			if (unk_0x0D77CDCF403AEBD2((Param0.f_1 - Param1.f_1)) <= fParam2)
			{
				if (unk_0x0D77CDCF403AEBD2((Param0.f_2 - Param1.f_2)) <= fParam2)
				{
					return 1;
				}
			}
		}
	}
	else if (unk_0x0D77CDCF403AEBD2((Param0.x - Param1.x)) <= fParam2)
	{
		if (unk_0x0D77CDCF403AEBD2((Param0.f_1 - Param1.f_1)) <= fParam2)
		{
			return 1;
		}
	}
	return 0;
}

bool func_3(struct<3> Param0, struct<3> Param1, bool bParam2)
{
	if (bParam2)
	{
		return (Param0.x == Param1.x && Param0.f_1 == Param1.f_1);
	}
	return ((Param0.x == Param1.x && Param0.f_1 == Param1.f_1) && Param0.f_2 == Param1.f_2);
}

void func_4()
{
	if (unk_0xAE06B9E39EBDE049(iLocal_3))
	{
		unk_0x315F7D8C33F0AB37(&iLocal_3);
	}
	unk_0x74528AC0906CBABE(joaat("p_abat_roller_1_col"));
	func_5("ob_abatdoor Terminated >>>>>>>>>>>>>>>>>\n");
	unk_0xD39E529EBE5DB04F();
}

void func_5(char* sParam0)
{
	func_6(sParam0);
}

void func_6(char* sParam0)
{
	if (unk_0xF005CCA4263DF67F(sParam0, sParam0))
	{
	}
}

