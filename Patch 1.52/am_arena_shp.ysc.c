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
	int iLocal_14 = 0;
	float fLocal_15 = 0f;
	var uLocal_16 = 0;
	var uLocal_17 = 0;
	char* sLocal_18 = NULL;
	var uLocal_19 = 0;
	var uLocal_20 = 0;
	int iLocal_21 = 0;
	struct<67> Local_22 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2147483647 } ;
	var uLocal_23 = 0;
	var uLocal_24 = 0;
	var uLocal_25 = 0;
	var uLocal_26 = 0;
	var uLocal_27 = 0;
	var uLocal_28 = 0;
	var uLocal_29 = 0;
	var uLocal_30 = 0;
	var uLocal_31 = 0;
	var uLocal_32 = 0;
	var uLocal_33 = 0;
	var uLocal_34 = 0;
	var uLocal_35 = 0;
	var uLocal_36 = 0;
	var uLocal_37 = 0;
	var uLocal_38 = 0;
	var uLocal_39 = 0;
	var uLocal_40 = 0;
	struct<2> Local_41 = { 0, 0 } ;
	var uLocal_42 = 0;
	var uLocal_43 = 0;
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
	var uLocal_62 = 0;
	var uLocal_63 = 0;
	var uLocal_64 = 0;
	var uLocal_65 = 0;
	var uLocal_66 = 0;
	var uLocal_67 = 0;
	var uLocal_68 = 0;
	var uLocal_69 = 0;
	var uLocal_70 = 0;
	var uLocal_71 = 0;
	var uLocal_72 = 0;
	var uLocal_73 = 0;
	var uLocal_74 = 0;
	var uLocal_75 = 0;
	var uLocal_76 = 0;
	var uLocal_77 = 0;
	var uLocal_78 = 0;
	var uLocal_79 = 0;
	var uLocal_80 = 0;
	var uLocal_81 = 1;
	var uLocal_82 = 0;
	var uLocal_83 = 0;
	var uLocal_84 = 0;
	var uLocal_85 = 0;
	int iLocal_86 = 0;
	struct<34> Local_87 = { 2147483647, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
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
	iLocal_14 = -1;
	fLocal_15 = 0.001f;
	sLocal_18 = "NULL";
	if (unk_0x25DDB354A40FFCDB())
	{
		func_53(ScriptParam_87);
	}
	else
	{
		func_51();
	}
	while (true)
	{
		func_50();
		if (Global_262145.f_23581)
		{
			func_51();
		}
		if (func_39())
		{
			func_51();
		}
		func_1();
	}
}

void func_1()
{
	bool bVar0;
	int iVar1;
	int iVar2;
	
	bVar0 = false;
	if (Global_4265537)
	{
		if (Global_4269486[iLocal_21 /*12*/].f_11)
		{
			func_36(iLocal_21);
			Global_4269486[iLocal_21 /*12*/].f_11 = 0;
		}
	}
	if (Local_22.f_66.f_8)
	{
		func_17(Local_22.f_66);
	}
	if ((Local_22.f_66.f_2 == 1 && Global_4265538) && func_16(&Local_22))
	{
		bVar0 = true;
	}
	if (Global_4264051[iLocal_21 /*85*/].f_66 == 2147483647 && Local_22.f_66.f_12)
	{
		if (bVar0)
		{
			func_15(0);
		}
		func_51();
	}
	if (Local_22.f_66.f_18 > 0 && !func_14())
	{
		iVar2 = (1000 / round((unk_0x9E3DAF75EFC49F5B() * 1000f)));
		if ((unk_0xD3137A576BE9EC5C() - Local_22.f_66.f_18) > iVar2 * 10)
		{
			Local_22.f_66.f_18 = -1;
		}
	}
	if (((func_13() && Local_22.f_66.f_2 == 1) && Local_22.f_66.f_13) && !Local_22.f_66.f_12)
	{
		if (unk_0xD3137A576BE9EC5C() - Local_22.f_66.f_14) >= func_12(Local_22.f_66.f_5)
		{
			iVar1 = 0;
			if (!unk_0x5053392075AA583C(func_11()) || unk_0x701B05C16EF4F48E())
			{
				iVar1 = 1;
			}
			else if (Local_22.f_66.f_2 != 1)
			{
				iVar1 = 2;
			}
			else if (Local_22.f_66.f_5 != 1 && !unk_0x734A68E809CC23F0(&(Local_22.f_66), Local_22.f_66.f_6, Local_22.f_66.f_4, Local_22.f_66.f_7, Local_22.f_66.f_1, Local_22.f_66.f_10))
			{
				iVar1 = 3;
			}
			else if (!unk_0x9F5556ED9A739FBC(Local_22.f_66))
			{
				iVar1 = 4;
			}
			else
			{
				Local_22.f_66.f_12 = 1;
				Global_4264051[iLocal_21 /*85*/].f_66.f_12 = 1;
				Global_4264051[iLocal_21 /*85*/].f_66 = Local_22.f_66;
			}
			if (iVar1 != 0)
			{
				func_7(iLocal_21);
				func_51();
			}
		}
	}
	if (!iLocal_86)
	{
		if (bVar0)
		{
			func_5(&Local_41, 0);
			iLocal_86 = 1;
		}
	}
	else if (bVar0)
	{
		StringCopy(&(Local_41.f_1), "HUD_TRANSP", 64);
		func_2(&Local_41, func_4(&Local_41));
	}
	else
	{
		iLocal_86 = 0;
		func_15(0);
	}
}

void func_2(var uParam0, int iParam1)
{
	if (iParam1 == 1)
	{
		*uParam0 = 0;
		func_3(uParam0);
	}
	if (*uParam0 == 0)
	{
		if (uParam0->f_36)
		{
			unk_0x1F096ADCD1F99FB1(&(uParam0->f_1));
			unk_0x42710E9E08FA375A(uParam0->f_33);
			unk_0x42710E9E08FA375A(uParam0->f_34);
			unk_0xA7C9EA826799BF5D(uParam0->f_41);
		}
		else if (uParam0->f_37)
		{
			unk_0x1F096ADCD1F99FB1(&(uParam0->f_1));
			unk_0x42710E9E08FA375A(uParam0->f_33);
			unk_0xA7C9EA826799BF5D(uParam0->f_41);
		}
		else if (uParam0->f_39)
		{
			unk_0x1F096ADCD1F99FB1(&(uParam0->f_1));
			unk_0x9EFD301E3BE8324E(&(uParam0->f_17));
			unk_0x42710E9E08FA375A(uParam0->f_33);
			unk_0x42710E9E08FA375A(uParam0->f_34);
			unk_0xA7C9EA826799BF5D(uParam0->f_41);
		}
		else if (uParam0->f_38)
		{
			unk_0x1F096ADCD1F99FB1(&(uParam0->f_1));
			unk_0x9EFD301E3BE8324E(&(uParam0->f_17));
			unk_0xA7C9EA826799BF5D(uParam0->f_41);
		}
		else if (uParam0->f_40)
		{
			unk_0x1F096ADCD1F99FB1(&(uParam0->f_1));
			unk_0x7899A951E85F4B28(uParam0->f_33, 70);
			unk_0xA7C9EA826799BF5D(uParam0->f_41);
		}
		else
		{
			unk_0x1F096ADCD1F99FB1(&(uParam0->f_1));
			unk_0xA7C9EA826799BF5D(uParam0->f_41);
		}
		*uParam0 = 1;
	}
	if (*uParam0 == 1)
	{
	}
}

void func_3(var uParam0)
{
	uParam0->f_35 = 0;
}

int func_4(var uParam0)
{
	return uParam0->f_35;
}

void func_5(var uParam0, bool bParam1)
{
	func_6(uParam0);
	if (bParam1)
	{
		func_15(0);
	}
	uParam0->f_35 = 1;
}

void func_6(var uParam0)
{
	struct<46> Var0;
	
	Var0.f_41 = 1;
	*uParam0 = { Var0 };
}

void func_7(int iParam0)
{
	bool bVar0;
	
	bVar0 = false;
	if (!func_13())
	{
		bVar0 = true;
	}
	if (iParam0 != -1)
	{
		if (func_10(iParam0))
		{
			if (!bVar0)
			{
				unk_0x2ABDF07188759AF4();
			}
		}
		else if (!bVar0)
		{
			unk_0x7365588A145923CE(Global_4264051[iParam0 /*85*/].f_66);
		}
		func_8(&(Global_4264051[iParam0 /*85*/]));
	}
}

void func_8(var uParam0)
{
	uParam0->f_66 = 0;
	uParam0->f_66 = 2147483647;
	uParam0->f_66.f_1 = 0;
	uParam0->f_66.f_2 = 0;
	uParam0->f_66.f_3 = -1593119440;
	uParam0->f_66.f_4 = -2085313189;
	uParam0->f_66.f_5 = 0;
	uParam0->f_66.f_6 = 1227573907;
	uParam0->f_66.f_7 = -1161833819;
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_13 = 0;
	uParam0->f_2 = 0;
	func_9(&(uParam0->f_14));
	func_9(&(uParam0->f_14.f_13));
	StringCopy(&(uParam0->f_14.f_26), "", 32);
	StringCopy(&(uParam0->f_14.f_34), "", 24);
	StringCopy(&(uParam0->f_14.f_40), "", 16);
	StringCopy(&(uParam0->f_14.f_44), "", 32);
	uParam0->f_3 = 0;
	uParam0->f_4 = 0;
	uParam0->f_5 = 0;
	uParam0->f_6 = 0;
	uParam0->f_7 = 0;
	uParam0->f_8 = 0;
	uParam0->f_66.f_8 = 0;
	uParam0->f_66.f_9 = 0;
	uParam0->f_66.f_10 = 0;
	uParam0->f_66.f_11 = 0;
	uParam0->f_66.f_13 = 0;
	uParam0->f_66.f_12 = 0;
	uParam0->f_66.f_14 = 0;
	uParam0->f_66.f_15 = 0;
	uParam0->f_66.f_16 = 0;
	uParam0->f_66.f_18 = 0;
}

void func_9(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
	uParam0->f_4 = 0;
	uParam0->f_5 = 0;
	uParam0->f_6 = 0;
	uParam0->f_7 = 0;
	uParam0->f_8 = 0;
	uParam0->f_9 = 0;
	uParam0->f_10 = 0;
	uParam0->f_11 = 0;
	uParam0->f_12 = 0;
}

int func_10(int iParam0)
{
	if (iParam0 >= 0 && iParam0 < 15)
	{
		return Global_4264051[iParam0 /*85*/].f_66.f_5 == 1;
	}
	return 0;
}

var func_11()
{
	return Global_1312763;
}

int func_12(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return Global_4265540;
			break;
		
		case 1:
			return Global_4265539;
			break;
	}
	return 0;
}

int func_13()
{
	if (unk_0xF8EDFF98A9C94C74())
	{
		return unk_0xC5AA3415F982DC6C();
	}
	return 0;
}

bool func_14()
{
	return Global_99007.f_352 > 0;
}

void func_15(bool bParam0)
{
	unk_0xEE377857147BD117();
	if (bParam0)
	{
		unk_0xC28BE5B4E43DE25D();
	}
}

int func_16(var uParam0)
{
	if (uParam0->f_66.f_4 == 2043854386)
	{
		return 0;
	}
	return 1;
}

void func_17(int iParam0)
{
	struct<7> Var0;
	int iVar1;
	bool bVar2;
	int iVar3;
	struct<67> Var4;
	bool bVar5;
	var uVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	
	iVar1 = 0;
	bVar2 = false;
	if (!func_13())
	{
		iVar1 = 1;
		Var0 = iParam0;
		Var0.f_2 = 0;
	}
	if (iVar1 || unk_0x477FAFFE21935947(1, iParam0, &Var0, 7))
	{
		Var4.f_66 = 2147483647;
		iVar3 = func_35(Var0, &Var4);
		if (iVar3 != -1)
		{
			Global_4264051[iVar3 /*85*/].f_66.f_8 = 0;
			if (Global_4264051[iVar3 /*85*/].f_66.f_18 == 0)
			{
				Global_4264051[iVar3 /*85*/].f_66.f_18 = unk_0xD3137A576BE9EC5C();
			}
		}
		bVar5 = true;
		if (iVar3 != -1)
		{
			Global_4264051[iVar3 /*85*/].f_66.f_17 = Var0.f_2;
		}
		else
		{
			Global_4265525.f_4 = Var0.f_2;
			Global_4265525.f_6 = Var0.f_3;
			Global_4265525.f_7 = Var0.f_4;
			Global_4265525.f_8 = Var0.f_5;
			Global_4265525.f_9 = Var0.f_6;
			if (Global_4265525.f_10 == 0)
			{
				Global_4265525.f_10 = unk_0xD3137A576BE9EC5C();
			}
		}
		switch (Var0.f_2)
		{
			case 0:
				if (iVar3 != -1)
				{
					Global_4269486[iVar3 /*12*/] = Global_4264051[iVar3 /*85*/].f_66.f_3;
					Global_4269486[iVar3 /*12*/].f_1 = Global_4264051[iVar3 /*85*/].f_66.f_7;
					Global_4269486[iVar3 /*12*/].f_2 = Global_4264051[iVar3 /*85*/].f_66.f_4;
					Global_4269486[iVar3 /*12*/].f_3 = Global_4264051[iVar3 /*85*/].f_66.f_1;
					Global_4269486[iVar3 /*12*/].f_5 = Var0.f_1;
					Global_4269486[iVar3 /*12*/].f_6 = Var0.f_3;
					Global_4269486[iVar3 /*12*/].f_7 = Var0.f_4;
					Global_4269486[iVar3 /*12*/].f_8 = Var0.f_5;
					Global_4269486[iVar3 /*12*/].f_9 = Var0.f_6;
					Global_4269486[iVar3 /*12*/].f_11 = 1;
					Global_4264051[iVar3 /*85*/].f_66.f_2 = 2;
					if (Global_4264051[iVar3 /*85*/].f_66.f_11 & 4 != 0)
					{
						func_32(iVar3, bVar5);
					}
					else if (func_13())
					{
						if (bVar5)
						{
							unk_0xDF70A7B550623C58(Global_4264051[iVar3 /*85*/].f_66, &uVar6);
						}
					}
				}
				break;
			
			default:
				if (iVar3 != -1)
				{
					Global_4264051[iVar3 /*85*/].f_66.f_2 = 3;
					if ((Global_4264051[iVar3 /*85*/].f_66.f_11 & 1 != 0 && Global_4264051[iVar3 /*85*/].f_66.f_9 < 2) && func_31(Var0.f_2))
					{
						if (func_10(iVar3))
						{
							if (func_24())
							{
								Global_4264051[iVar3 /*85*/].f_66.f_2 = 1;
								Global_4264051[iVar3 /*85*/].f_66.f_9++;
							}
							else if (Global_4264051[iVar3 /*85*/].f_66.f_11 & 2 != 0)
							{
								Global_4265555 = Global_4264051[iVar3 /*85*/].f_66.f_4;
								Global_4265557 = Global_4264051[iVar3 /*85*/].f_66.f_6;
								Global_4265558 = Var0.f_2;
								Global_4265556 = Global_4264051[iVar3 /*85*/].f_66.f_1;
								if (func_23(Global_4265555) && func_13())
								{
									if (!func_22(Global_4264051[iVar3 /*85*/].f_66))
									{
										iVar7 = func_21();
										Global_4265412[iVar7 /*7*/] = Global_4264051[iVar3 /*85*/].f_66;
										Global_4265412[iVar7 /*7*/].f_2 = Global_4265555;
										Global_4265412[iVar7 /*7*/].f_3 = Global_4265557;
										Global_4265412[iVar7 /*7*/].f_1 = Global_4265556;
										Global_4265412[iVar7 /*7*/].f_4 = unk_0x6CAAB7E78B5D978A();
									}
								}
								else
								{
									Global_4265552 = 1;
								}
							}
						}
						else if (func_20(&iVar3))
						{
							Global_4264051[iVar3 /*85*/].f_66.f_2 = 1;
							Global_4264051[iVar3 /*85*/].f_66.f_9++;
						}
						else if (Global_4264051[iVar3 /*85*/].f_66.f_11 & 2 != 0)
						{
							Global_4265555 = Global_4264051[iVar3 /*85*/].f_66.f_4;
							Global_4265557 = Global_4264051[iVar3 /*85*/].f_66.f_6;
							Global_4265558 = Var0.f_2;
							Global_4265556 = Global_4264051[iVar3 /*85*/].f_66.f_1;
							if (func_23(Global_4265555) && func_13())
							{
								if (!func_22(Global_4264051[iVar3 /*85*/].f_66))
								{
									iVar8 = func_21();
									Global_4265412[iVar8 /*7*/] = Global_4264051[iVar3 /*85*/].f_66;
									Global_4265412[iVar8 /*7*/].f_2 = Global_4265555;
									Global_4265412[iVar8 /*7*/].f_3 = Global_4265557;
									Global_4265412[iVar8 /*7*/].f_1 = Global_4265556;
									Global_4265412[iVar8 /*7*/].f_4 = unk_0x6CAAB7E78B5D978A();
								}
							}
							else
							{
								Global_4265552 = 1;
							}
						}
					}
					else if (Global_4264051[iVar3 /*85*/].f_66.f_11 & 2 != 0)
					{
						Global_4265555 = Global_4264051[iVar3 /*85*/].f_66.f_4;
						Global_4265557 = Global_4264051[iVar3 /*85*/].f_66.f_6;
						Global_4265558 = Var0.f_2;
						Global_4265556 = Global_4264051[iVar3 /*85*/].f_66.f_1;
						if ((func_23(Global_4265555) && func_13()) && func_31(Var0.f_2))
						{
							if (!func_22(Global_4264051[iVar3 /*85*/].f_66))
							{
								iVar9 = func_21();
								Global_4265412[iVar9 /*7*/] = Global_4264051[iVar3 /*85*/].f_66;
								Global_4265412[iVar9 /*7*/].f_2 = Global_4265555;
								Global_4265412[iVar9 /*7*/].f_3 = Global_4265557;
								Global_4265412[iVar9 /*7*/].f_1 = Global_4265556;
								Global_4265412[iVar9 /*7*/].f_4 = unk_0x6CAAB7E78B5D978A();
							}
						}
						else
						{
							Global_4265552 = 1;
						}
					}
					if (Global_4264051[iVar3 /*85*/].f_66.f_2 == 3)
					{
						if (bVar2)
						{
							func_19(1, Global_4264051[iVar3 /*85*/].f_66.f_4);
							Global_4265552 = 0;
						}
						if (Global_4264051[iVar3 /*85*/].f_66.f_11 & 4 != 0)
						{
							func_18(iVar3, Global_4264051[iVar3 /*85*/].f_66.f_4, Global_4264051[iVar3 /*85*/].f_66.f_10, Global_4264051[iVar3 /*85*/].f_66.f_1, Var0.f_2);
						}
					}
				}
				break;
			}
	}
}

void func_18(int iParam0, int iParam1, var uParam2, var uParam3, var uParam4)
{
	switch (iParam1)
	{
		case 1704445500:
			unk_0xBE20AB8238688965(&(Global_2425869[unk_0x460153A63B9477BC() /*443*/].f_126.f_71), 0);
			break;
	}
	if (iParam0 != -1)
	{
		func_7(iParam0);
	}
}

void func_19(int iParam0, var uParam1)
{
	Global_2464590 = uParam1;
	Global_2464589 = iParam0;
}

int func_20(int iParam0)
{
	bool bVar0;
	int iVar1;
	
	bVar0 = false;
	if (!func_13())
	{
		bVar0 = true;
	}
	iVar1 = 1;
	if (*iParam0 == -1 || func_10(*iParam0))
	{
		return 0;
	}
	if (!bVar0)
	{
		if (!unk_0x5053392075AA583C(func_11()) || unk_0x701B05C16EF4F48E())
		{
			Global_4265553 = 1;
			return 0;
		}
		if (Global_2463410)
		{
			if (Global_4264051[*iParam0 /*85*/].f_66.f_6 == 1067618600 || Global_4264051[*iParam0 /*85*/].f_66.f_6 == -1303831698)
			{
				Global_4265554 = 1;
				return 0;
			}
		}
	}
	if ((bVar0 || iVar1) || unk_0x9F5556ED9A739FBC(Global_4264051[*iParam0 /*85*/].f_66))
	{
		if (iVar1 && !bVar0)
		{
		}
		Global_4264051[*iParam0 /*85*/].f_66.f_13 = 1;
		Global_4264051[*iParam0 /*85*/].f_66.f_12 = 0;
		Global_4264051[*iParam0 /*85*/].f_66.f_14 = unk_0xD3137A576BE9EC5C();
		if (bVar0)
		{
			if (*iParam0 != -1)
			{
				Global_4264051[*iParam0 /*85*/].f_66.f_8 = 1;
				Global_4264051[*iParam0 /*85*/].f_66.f_12 = 1;
			}
		}
		Global_4264051[*iParam0 /*85*/].f_66.f_18 = 0;
		return 1;
	}
	return 0;
}

int func_21()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar2 = Global_4265412;
	iVar0 = 0;
	while (iVar0 <= (iVar2 - 1))
	{
		if (Global_4265412[iVar0 /*7*/] != 0 && Global_4265412[iVar0 /*7*/] != 2147483647)
		{
			iVar1++;
		}
		iVar0++;
	}
	if (iVar1 >= iVar2)
	{
		return 0;
	}
	return iVar1;
}

int func_22(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar1 = Global_4265412;
	if (iParam0 == 2147483647 || iParam0 == 0)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 <= (iVar1 - 1))
	{
		if (Global_4265412[iVar0 /*7*/] == iParam0)
		{
			return 1;
		}
		if (Global_4265412[iVar0 /*7*/].f_6 == iParam0)
		{
			Global_4265412[iVar0 /*7*/].f_4 = unk_0x6CAAB7E78B5D978A();
			Global_4265412[iVar0 /*7*/].f_6 = 2147483647;
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_23(int iParam0)
{
	if ((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((iParam0 == 1780666425 || iParam0 == -2043695058) || iParam0 == -1586170317) || iParam0 == 393059668) || iParam0 == -1027218631) || iParam0 == 1048226110) || iParam0 == 569170531) || iParam0 == -856006867) || iParam0 == 848090538) || iParam0 == -293060240) || iParam0 == -47546905) || iParam0 == 463142405) || iParam0 == 1550217370) || iParam0 == -101307780) || iParam0 == 1052472386) || iParam0 == -2130199671) || iParam0 == -1227654538) || iParam0 == -876012764) || iParam0 == -722894325) || iParam0 == 1407278493) || iParam0 == -1579394494) || iParam0 == 1179783540) || iParam0 == 923419301) || iParam0 == -308826175) || iParam0 == 603298940) || iParam0 == -12619854) || iParam0 == -311112675) || iParam0 == 870439158) || iParam0 == -974288740) || iParam0 == -4138654) || iParam0 == -1180954122) || iParam0 == -1918051016) || iParam0 == 844330594) || iParam0 == 1934825517) || iParam0 == 1852024236) || iParam0 == 2099238988) || iParam0 == 1952643559) || iParam0 == -1172900789) || iParam0 == -2015399333) || iParam0 == -1574795641) || iParam0 == -961034881) || iParam0 == 1135468152) || iParam0 == 1265272476) || iParam0 == -634726636) || iParam0 == 696556762) || iParam0 == 443347049) || iParam0 == 403506509) || iParam0 == -883876414) || iParam0 == -1064150715) || iParam0 == -1387253055) || iParam0 == -716963152) || iParam0 == 1138089938) || iParam0 == -561012053) || iParam0 == 1240683675) || iParam0 == 1241904665) || iParam0 == -494565059) || iParam0 == 827308208) || iParam0 == -1857685192) || iParam0 == 1698417709) || iParam0 == -2017925037) || iParam0 == 1057653594) || iParam0 == 1810506918) || iParam0 == 451427308) || iParam0 == 824622151) || iParam0 == 1253978276) || iParam0 == -1576080766) || iParam0 == 1508411869) || iParam0 == 1428501742) || iParam0 == -1918967151) || iParam0 == 1261538664) || iParam0 == 1180397655) || iParam0 == 1414674366) || iParam0 == 261460130) || iParam0 == -2027658376) || iParam0 == 1668610896) || iParam0 == -2032529561) || iParam0 == -1224479447) || iParam0 == -319306689) || iParam0 == -466527264) || iParam0 == 1925965142) || iParam0 == 592152676) || iParam0 == 2035612943) || iParam0 == 1568659720) || iParam0 == 1220095570) || iParam0 == 2050320631) || iParam0 == 592672421) || iParam0 == 1775876058) || iParam0 == -842062976) || iParam0 == -518651910) || iParam0 == 14658715) || iParam0 == -604793592) || iParam0 == -823426392) || iParam0 == -1401862980) || iParam0 == -173354274) || iParam0 == 409533976) || iParam0 == -1472522337) || iParam0 == 542574408) || iParam0 == -1261799063) || iParam0 == 784631574) || iParam0 == -2027479156) || iParam0 == -837690641)
	{
		return 1;
	}
	return 0;
}

int func_24()
{
	bool bVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	bVar0 = false;
	if (!func_13())
	{
		bVar0 = true;
	}
	iVar1 = 1;
	iVar2 = func_30();
	if (iVar2 == -1)
	{
		return 0;
	}
	if (!bVar0)
	{
		if (!unk_0x5053392075AA583C(func_11()) || unk_0x701B05C16EF4F48E())
		{
			if (func_29(Global_4264051[iVar2 /*85*/].f_66.f_6, Global_4264051[iVar2 /*85*/].f_66.f_4, Global_4264051[iVar2 /*85*/].f_66.f_1) == 1)
			{
				Global_4265553 = 1;
			}
			return 0;
		}
		if (Global_2463410)
		{
			if (Global_4264051[iVar2 /*85*/].f_66.f_6 == 1067618600 || Global_4264051[iVar2 /*85*/].f_66.f_6 == -1303831698)
			{
				Global_4265554 = 1;
				return 0;
			}
		}
	}
	iVar3 = func_28(iVar2);
	if (iVar3 != 2147483647)
	{
		if ((bVar0 || iVar1) || unk_0x9F5556ED9A739FBC(iVar3))
		{
			Global_4264051[iVar2 /*85*/].f_66.f_13 = 1;
			Global_4264051[iVar2 /*85*/].f_66.f_12 = 0;
			Global_4264051[iVar2 /*85*/].f_66.f_14 = unk_0xD3137A576BE9EC5C();
			if (bVar0)
			{
				Global_4264051[iVar2 /*85*/].f_66.f_8 = 1;
				Global_4264051[iVar2 /*85*/].f_66.f_12 = 1;
			}
			Global_4264051[iVar2 /*85*/].f_66.f_18 = 0;
			if (bVar0 || iVar1)
			{
				func_25(Global_4264051[iVar2 /*85*/], iVar2);
			}
			Global_4265538 = 1;
			return 1;
		}
	}
	return 0;
}

void func_25(struct<67> Param0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, int iParam19)
{
	struct<3> Var0;
	int iVar1;
	
	if (iParam19 < 0)
	{
		return;
	}
	Var0.f_2 = 2147483647;
	Var0.x = 1191422458;
	Var0.f_1 = unk_0x460153A63B9477BC();
	Var0.f_2 = { Param0.f_66 };
	Var0.f_2.f_33 = iParam19;
	iVar1 = func_27(Var0.f_1);
	if ((Global_262145.f_23581 && !Global_262145.f_23582) && !Global_262145.f_23583)
	{
		return;
	}
	if (!iVar1 == 0)
	{
		func_26();
		unk_0xB802750B43D4047C(1, &Var0, 36, iVar1);
	}
}

void func_26()
{
	unk_0xBE9B3870B1B370E3("AM_ARENA_SHP");
}

var func_27(int iParam0)
{
	var uVar0;
	
	if (iParam0 != -1)
	{
		unk_0xBE20AB8238688965(&uVar0, iParam0);
	}
	return uVar0;
}

int func_28(int iParam0)
{
	if (iParam0 >= 0 && iParam0 < 15)
	{
		return Global_4264051[iParam0 /*85*/].f_66;
	}
	return -1;
}

int func_29(int iParam0, int iParam1, int iParam2)
{
	if (iParam0 == -433440095 || iParam0 == 1474183246)
	{
		switch (iParam1)
		{
			case 1940862352:
				if (iParam2 >= 10000)
				{
					return 1;
				}
				else
				{
					return 0;
				}
				break;
			
			case -31156877:
			case -327918414:
			case 550898518:
			case 835976347:
			case 1347433368:
			case -1100963799:
				if (iParam2 >= 1000)
				{
					return 1;
				}
				else
				{
					return 2;
				}
				break;
			
			case 1982688246:
				return 0;
				break;
			
			case 1718438689:
			case -1027218631:
			case -1398318418:
			case 1652884147:
			case -57868256:
			case -1216489292:
			case -46622315:
			case -352356931:
			case -990286235:
			case 563463121:
			case 1734805203:
			case 941287179:
			case -1186079845:
			case -1985150258:
			case -1127021384:
			case -109201286:
			case 312105838:
			case -661030418:
			case 1301046174:
			case -1586170317:
			case 393059668:
			case 23796958:
			case -1077156170:
			case 1780666425:
			case -2043695058:
			case -1922554349:
			case 1287308202:
			case 691372038:
			case 1480707108:
			case 1512499951:
			case 562283735:
			case -154732333:
			case -1362660491:
			case 645708827:
			case 767907967:
			case -1970151306:
			case 718859568:
			case -1955564771:
			case 892388724:
			case -1426920838:
			case 1349151477:
			case 1620609399:
			case 1961641934:
			case 210955503:
			case -59668082:
			case 1736933716:
			case -1468524125:
			case 111573502:
			case 1525644423:
			case 968073639:
			case 1577781788:
			case -934465332:
			case -1194253122:
			case -212607085:
			case -815546555:
			case 1048226110:
			case 569170531:
			case -856006867:
			case 848090538:
			case -47546905:
			case -293060240:
			case 463142405:
			case 1550217370:
			case -664597565:
			case 599804707:
			case 1052472386:
			case -2130199671:
			case -1227654538:
			case 1864522104:
			case 215608230:
			case -876012764:
			case -722894325:
			case 1407278493:
			case -1579394494:
			case -27443911:
			case 1179783540:
			case 923419301:
			case -308826175:
			case 603298940:
			case -12619854:
			case -311112675:
			case 870439158:
			case -974288740:
			case -4138654:
			case -1180954122:
			case -1918051016:
			case 844330594:
			case 1934825517:
			case 1852024236:
			case 2099238988:
			case 1952643559:
			case -1172900789:
			case -2015399333:
			case -1574795641:
			case -961034881:
			case 1135468152:
			case 1265272476:
			case -634726636:
			case 696556762:
			case 443347049:
			case 403506509:
			case -883876414:
			case -1064150715:
			case -1387253055:
			case -716963152:
			case 1138089938:
			case -561012053:
			case 1240683675:
			case 1241904665:
			case -494565059:
			case 827308208:
			case -1857685192:
			case 1698417709:
			case -2017925037:
			case 1057653594:
			case 1810506918:
			case 451427308:
			case 824622151:
			case 1253978276:
			case -1576080766:
			case 1508411869:
			case 1428501742:
			case -1918967151:
			case 1261538664:
			case 1180397655:
			case 1414674366:
			case 261460130:
			case -2027658376:
			case 1668610896:
			case -2032529561:
				return 1;
				break;
			
			case 1515774909:
			case 1173654533:
			case -899802304:
			case -663944335:
			case 1208553146:
			case -613221010:
			case -671062876:
			case 291576838:
			case -1276678868:
			case 711665950:
			case -407201236:
			case -754024203:
			case -1885444887:
			case 1931729587:
			case 1064954035:
			case -180141073:
			case 2131324797:
			case 283351220:
			case 1108628223:
			case -876847842:
			case 68030260:
				return 2;
				break;
			
			default:
				return 0;
				break;
		}
		switch (iParam1)
		{
			case -319306689:
			case -466527264:
			case 1925965142:
			case 592152676:
			case 2035612943:
			case 1568659720:
			case -1224479447:
			case 1220095570:
			case 2050320631:
			case 592672421:
			case -842062976:
			case 14658715:
			case -604793592:
			case -823426392:
			case -1401862980:
			case -173354274:
			case 409533976:
			case -1472522337:
			case 542574408:
			case -1261799063:
			case 784631574:
			case -2027479156:
			case -837690641:
				return 1;
				break;
			
			case 1775876058:
			case -518651910:
				return 2;
				break;
		}
	}
	else if ((iParam0 == -1134853190 || iParam0 == 925407197) || iParam0 == -1589378882)
	{
		return 0;
	}
	return 1;
}

int func_30()
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 15)
	{
		if (func_28(iVar0) != 2147483647)
		{
			if (func_10(iVar0))
			{
				return iVar0;
			}
		}
		iVar0++;
	}
	return -1;
}

int func_31(int iParam0)
{
	if ((iParam0 >= 500 && iParam0 <= 599) || iParam0 == 408)
	{
		return 1;
	}
	return 0;
}

void func_32(int iParam0, bool bParam1)
{
	int iVar0;
	bool bVar1;
	var uVar2;
	struct<10> Var3;
	var uVar4;
	
	if (iParam0 == -1)
	{
		return;
	}
	unk_0xA6292C176D37A114(func_28(iParam0));
	if (Global_4264051[iParam0 /*85*/].f_66.f_10 == 1)
	{
	}
	else if (Global_4264051[iParam0 /*85*/].f_66.f_10 == 4)
	{
		iVar0 = 1;
	}
	else if (Global_4264051[iParam0 /*85*/].f_66.f_10 == 2)
	{
		bVar1 = true;
	}
	Var3 = -1;
	Var3.f_1 = -1;
	Var3.f_2 = -1;
	Var3.f_3 = -1;
	Var3.f_4 = -1;
	Var3.f_5 = -1;
	Var3.f_6 = -1;
	Var3.f_7 = -1;
	Var3.f_8 = -1;
	Var3.f_9 = -1;
	func_34(&Var3);
	switch (Global_4264051[iParam0 /*85*/].f_66.f_4)
	{
		case 631654431:
			unk_0x0E416FA4BA813CC2(Global_4264051[iParam0 /*85*/].f_66.f_1, bVar1, iVar0);
			break;
		
		case -180141073:
			unk_0xF066230DB6C9040B(Global_4264051[iParam0 /*85*/].f_66.f_1, &(Global_4264051[iParam0 /*85*/].f_14), bVar1, iVar0);
			break;
		
		case 68030260:
			unk_0x0204D7F7675557B4(Global_4264051[iParam0 /*85*/].f_66.f_1, Global_4264051[iParam0 /*85*/], &(Global_4264051[iParam0 /*85*/].f_14), bVar1, iVar0);
			break;
		
		case -982394051:
			unk_0xDA5C0CFF654B7342(Global_4264051[iParam0 /*85*/].f_66.f_1, Global_4264051[iParam0 /*85*/].f_1, bVar1, iVar0);
			break;
		
		case 454359403:
			unk_0xC7544FC031C4A7EF(Global_4264051[iParam0 /*85*/].f_66.f_1, bVar1, Global_4264051[iParam0 /*85*/].f_2, iVar0);
			break;
		
		case -1586170317:
			unk_0xBB56BBFE01CE30AA(Global_4264051[iParam0 /*85*/].f_66.f_1, &(Global_4264051[iParam0 /*85*/].f_14.f_26), &(Global_4264051[iParam0 /*85*/].f_14.f_34));
			break;
		
		case 650665123:
			unk_0x3A215CF5ED416A27(Global_4264051[iParam0 /*85*/].f_66.f_1, bVar1, iVar0);
			break;
		
		case 1654961868:
			unk_0x18F7B9FB5A63DACF(Global_4264051[iParam0 /*85*/].f_66.f_1, &(Global_4264051[iParam0 /*85*/].f_14), bVar1, iVar0);
			break;
		
		case 1182673174:
			unk_0xF2FCC4A5CC93A0A0(Global_4264051[iParam0 /*85*/].f_66.f_1, Global_4264051[iParam0 /*85*/], Global_4264051[iParam0 /*85*/].f_1, bVar1, iVar0);
			break;
		
		case 563463121:
			unk_0x39FB105E58850FDF(Global_4264051[iParam0 /*85*/].f_66.f_1);
			break;
		
		case 1940862352:
			unk_0x3DFC7C139661FF52(Global_4264051[iParam0 /*85*/].f_66.f_1, &(Global_4264051[iParam0 /*85*/].f_14.f_26), bVar1, iVar0);
			break;
		
		case -1389227906:
			unk_0x3DFC7C139661FF52(Global_4264051[iParam0 /*85*/].f_66.f_1, &(Global_4264051[iParam0 /*85*/].f_14.f_26), bVar1, iVar0);
			break;
		
		case -516219046:
			unk_0x898F54E8CD0210CC(Global_4264051[iParam0 /*85*/].f_66.f_1, bVar1, iVar0);
			break;
		
		case -1398318418:
			unk_0x6B8BF5583E7FFF0F(Global_4264051[iParam0 /*85*/].f_66.f_1, &(Global_4264051[iParam0 /*85*/].f_14.f_34));
			break;
		
		case 2043854386:
			unk_0x848EA9B2D5BAE3BC(Global_4264051[iParam0 /*85*/].f_66.f_1, bVar1, iVar0);
			break;
		
		case 277665518:
			unk_0xEB161FC08CD320B1(Global_4264051[iParam0 /*85*/].f_66.f_1, bVar1, iVar0);
			break;
		
		case -1077156170:
			unk_0x1065ED61C249726E(Global_4264051[iParam0 /*85*/].f_66.f_1, &(Global_4264051[iParam0 /*85*/].f_14.f_34), -1);
			break;
		
		case -96593501:
			unk_0x0F3CD3A5EC108BE4(Global_4264051[iParam0 /*85*/].f_66.f_1, bVar1, iVar0);
			break;
		
		case 742499889:
			unk_0x0D55B13BED63AD2D(Global_4264051[iParam0 /*85*/].f_6, Global_4264051[iParam0 /*85*/].f_7, Global_4264051[iParam0 /*85*/].f_66.f_1);
			break;
		
		case 2050093329:
			unk_0xC6019C333E248C21(Global_4264051[iParam0 /*85*/].f_6, Global_4264051[iParam0 /*85*/].f_7, Global_4264051[iParam0 /*85*/].f_66.f_1);
			break;
		
		case -1752488069:
			unk_0x041E14DF89A3EE91(Global_4264051[iParam0 /*85*/].f_6, Global_4264051[iParam0 /*85*/].f_7, Global_4264051[iParam0 /*85*/].f_66.f_1);
			break;
		
		case 634375935:
			unk_0x443A7491EAD577D9(Global_4264051[iParam0 /*85*/].f_66.f_1, bVar1, iVar0);
			break;
		
		case -1027218631:
			unk_0x52EDD6D6C789FBFF(Global_4264051[iParam0 /*85*/].f_66.f_1, &(Global_4264051[iParam0 /*85*/].f_14.f_26));
			break;
		
		case -47546905:
			unk_0x1F978ECD4F05ECDD(Global_4264051[iParam0 /*85*/].f_66.f_1, &(Global_4264051[iParam0 /*85*/].f_14.f_26));
			break;
		
		case 291576838:
			unk_0xB0EB7E9A05164E40(Global_4264051[iParam0 /*85*/].f_66.f_1, Global_4264051[iParam0 /*85*/], 14, 1, bVar1, &(Global_4264051[iParam0 /*85*/].f_14.f_26), 0, 0, 0, iVar0);
			break;
		
		case 1612072658:
			unk_0xB8B2EC8313B37B3F(Global_4264051[iParam0 /*85*/].f_66.f_1, bVar1, iVar0);
			break;
		
		case -990286235:
			unk_0x77A43AE79CC23DEA(Global_4264051[iParam0 /*85*/].f_66.f_1, &(Global_4264051[iParam0 /*85*/].f_14), &(Global_4264051[iParam0 /*85*/].f_14.f_13), 1);
			break;
		
		case 1349151477:
			unk_0xCE1DC13ABCE2DE61(Global_4264051[iParam0 /*85*/].f_66.f_1);
			break;
		
		case -31156877:
		case -327918414:
		case 550898518:
		case 835976347:
			unk_0x1B1F33478C809F90(Global_4264051[iParam0 /*85*/].f_66.f_1);
			break;
		
		case -1186079845:
			unk_0x25997BD601A8FB59(Global_4264051[iParam0 /*85*/].f_66.f_1);
			break;
		
		case 1734805203:
			unk_0x9C70720F382685A0(Global_4264051[iParam0 /*85*/].f_66.f_1);
			break;
		
		case -1645229221:
			unk_0x917B9C081D56FB7E(Global_4264051[iParam0 /*85*/].f_66.f_1, bVar1, iVar0);
			break;
		
		case -585718395:
			unk_0x9905590B7A60D613(Global_4264051[iParam0 /*85*/].f_66.f_1, bVar1, iVar0);
			break;
		
		case 763367758:
			unk_0xD8D628D697600E4A(Global_4264051[iParam0 /*85*/].f_66.f_1, bVar1, iVar0);
			break;
		
		case 1850983186:
			unk_0x917B9C081D56FB7E(Global_4264051[iParam0 /*85*/].f_66.f_1, bVar1, iVar0);
			break;
		
		case -2129781826:
			unk_0x9120E1E01898B36E(Global_4264051[iParam0 /*85*/].f_66.f_1, Global_4264051[iParam0 /*85*/], bVar1, iVar0);
			break;
		
		case 1941570214:
			unk_0xFE71E79523BFBCDC(Global_4264051[iParam0 /*85*/].f_66.f_1, Global_4264051[iParam0 /*85*/], bVar1, iVar0);
			break;
		
		case 1869490922:
			unk_0x42783CA2EEE2A530(Global_4264051[iParam0 /*85*/].f_66.f_1, Global_4264051[iParam0 /*85*/], Global_4264051[iParam0 /*85*/].f_1, bVar1, iVar0);
			break;
		
		case -336803850:
			unk_0x42783CA2EEE2A530(Global_4264051[iParam0 /*85*/].f_66.f_1, Global_4264051[iParam0 /*85*/], Global_4264051[iParam0 /*85*/].f_1, bVar1, iVar0);
			break;
		
		case -1412692765:
			unk_0x42783CA2EEE2A530(Global_4264051[iParam0 /*85*/].f_66.f_1, Global_4264051[iParam0 /*85*/], Global_4264051[iParam0 /*85*/].f_1, bVar1, iVar0);
			break;
		
		case 618167454:
			unk_0x42783CA2EEE2A530(Global_4264051[iParam0 /*85*/].f_66.f_1, Global_4264051[iParam0 /*85*/], Global_4264051[iParam0 /*85*/].f_1, bVar1, iVar0);
			break;
		
		case 980623936:
			unk_0x42783CA2EEE2A530(Global_4264051[iParam0 /*85*/].f_66.f_1, Global_4264051[iParam0 /*85*/], Global_4264051[iParam0 /*85*/].f_1, bVar1, iVar0);
			break;
		
		case 1287308202:
		case 691372038:
		case 1480707108:
		case 1512499951:
		case 562283735:
		case -154732333:
		case -1362660491:
		case 645708827:
		case 767907967:
		case -1970151306:
		case 718859568:
		case -1955564771:
		case 892388724:
		case -1426920838:
		case -664597565:
		case -1100963799:
			unk_0x0ED66FFB5DB04BC5(Global_4264051[iParam0 /*85*/].f_66.f_1, &(Global_4264051[iParam0 /*85*/].f_14.f_40), &(Global_4264051[iParam0 /*85*/].f_14.f_44), bVar1);
			break;
		
		case 312105838:
			unk_0x43C6FBAB0F6B187E(Global_4264051[iParam0 /*85*/].f_66.f_1);
			break;
		
		case -1922554349:
			unk_0x41E465DD667BCD29(Global_4264051[iParam0 /*85*/].f_66.f_1, "AM_DESTROY_VEH", &uVar2);
			break;
		
		case -2043695058:
			unk_0x41E465DD667BCD29(Global_4264051[iParam0 /*85*/].f_66.f_1, "AM_DISTRACT_COPS", &uVar2);
			break;
		
		case 1780666425:
			unk_0x41E465DD667BCD29(Global_4264051[iParam0 /*85*/].f_66.f_1, "AM_PLANE_TAKEDOWN", &uVar2);
			break;
		
		case 1643659499:
			unk_0xB82FA39D51CAD30C(Global_4264051[iParam0 /*85*/].f_66.f_1, Global_4264051[iParam0 /*85*/].f_1, bVar1, iVar0);
			break;
		
		case 1839532116:
			unk_0x29AF35913B985986(Global_4264051[iParam0 /*85*/].f_66.f_1, 0, 0);
			break;
		
		case 941287179:
			unk_0x10B4DBC11C869D1D(Global_4264051[iParam0 /*85*/].f_66.f_1, Global_4264051[iParam0 /*85*/].f_3);
			break;
		
		case -352356931:
			unk_0x29BBEB8759446A22(Global_4264051[iParam0 /*85*/].f_66.f_1, Global_4264051[iParam0 /*85*/]);
			break;
		
		case 1948102096:
			unk_0x49818D3C68C176FC(Global_4264051[iParam0 /*85*/].f_66.f_1, bVar1, iVar0);
			break;
		
		case -1834046564:
			unk_0xD1F2F0E6D0DADAF6(Global_4264051[iParam0 /*85*/].f_66.f_1, bVar1, iVar0);
			break;
		
		case 393059668:
			unk_0xFF64E8D93CA80279(Global_4264051[iParam0 /*85*/].f_66.f_1, &(Global_4264051[iParam0 /*85*/].f_14.f_26));
			break;
		
		case -57868256:
			unk_0x3178BA6F40EEC6E2(Global_4264051[iParam0 /*85*/].f_66.f_1, &(Global_4264051[iParam0 /*85*/].f_14.f_34), Global_4264051[iParam0 /*85*/].f_4);
			break;
		
		case -1127021384:
			unk_0x403E198FF1E0B80A(Global_4264051[iParam0 /*85*/].f_66.f_1);
			break;
		
		case 1564537328:
			unk_0x3DFC7C139661FF52(Global_4264051[iParam0 /*85*/].f_66.f_1, "RaceToPoint", false, 0);
			break;
		
		case -1359375127:
			unk_0xA4501C03DC8F9AF5(Global_4264051[iParam0 /*85*/].f_66.f_1, 0, 0);
			break;
		
		case 283351220:
			unk_0xB0EB7E9A05164E40(Global_4264051[iParam0 /*85*/].f_66.f_1, Global_4264051[iParam0 /*85*/], Global_4264051[iParam0 /*85*/].f_5, 1, bVar1, &(Global_4264051[iParam0 /*85*/].f_14.f_40), 0, 0, 0, iVar0);
			break;
		
		case -2085313189:
			switch (Global_4264051[iParam0 /*85*/].f_66.f_6)
			{
				case 1067618600:
					unk_0xB0EB7E9A05164E40(Global_4264051[iParam0 /*85*/].f_66.f_1, Global_4264051[iParam0 /*85*/], Global_4264051[iParam0 /*85*/].f_5, 1, bVar1, &(Global_4264051[iParam0 /*85*/].f_14.f_40), 0, 0, 0, iVar0);
					break;
			}
			break;
		
		case 1704445500:
			unk_0x66B6A6EEEC129283(Global_4264051[iParam0 /*85*/].f_66.f_1, 0, &(Global_4264051[iParam0 /*85*/].f_14.f_34), 0, 0);
			break;
		
		case 1620609399:
			unk_0x41E465DD667BCD29(Global_4264051[iParam0 /*85*/].f_66.f_1, "AM_HOT_TARGET_DELIVER", &uVar2);
			break;
		
		case 1961641934:
			unk_0x41E465DD667BCD29(Global_4264051[iParam0 /*85*/].f_66.f_1, "AM_HOT_TARGET_KILL", &uVar2);
			break;
		
		case 210955503:
			unk_0x41E465DD667BCD29(Global_4264051[iParam0 /*85*/].f_66.f_1, "AM_KILL_LIST", &uVar2);
			break;
		
		case -59668082:
			unk_0x41E465DD667BCD29(Global_4264051[iParam0 /*85*/].f_66.f_1, "AM_CP_COLLECTION", &uVar2);
			break;
		
		case 1736933716:
			unk_0x41E465DD667BCD29(Global_4264051[iParam0 /*85*/].f_66.f_1, "AM_TIME_TRIAL", &uVar2);
			break;
		
		case -1468524125:
			unk_0x41E465DD667BCD29(Global_4264051[iParam0 /*85*/].f_66.f_1, "AM_CHALLENGES", &uVar2);
			break;
		
		case 111573502:
			unk_0x41E465DD667BCD29(Global_4264051[iParam0 /*85*/].f_66.f_1, "AM_HOT_TARGET_HELI", &uVar2);
			break;
		
		case 1525644423:
			unk_0x41E465DD667BCD29(Global_4264051[iParam0 /*85*/].f_66.f_1, "AM_DEAD_DROP", &uVar2);
			break;
		
		case 968073639:
			unk_0x41E465DD667BCD29(Global_4264051[iParam0 /*85*/].f_66.f_1, "AM_PENNED_IN", &uVar2);
			break;
		
		case 1577781788:
			unk_0x41E465DD667BCD29(Global_4264051[iParam0 /*85*/].f_66.f_1, "AM_PASS_THE_PARCEL", &uVar2);
			break;
		
		case -934465332:
			unk_0x41E465DD667BCD29(Global_4264051[iParam0 /*85*/].f_66.f_1, "AM_CRIMINAL_DAMAGE", &uVar2);
			break;
		
		case -1194253122:
			unk_0x41E465DD667BCD29(Global_4264051[iParam0 /*85*/].f_66.f_1, "AM_HOT_PROPERTY", &uVar2);
			break;
		
		case -212607085:
			unk_0x41E465DD667BCD29(Global_4264051[iParam0 /*85*/].f_66.f_1, "AM_KING_OF_THE_HILL", &uVar2);
			break;
		
		case -815546555:
			unk_0x41E465DD667BCD29(Global_4264051[iParam0 /*85*/].f_66.f_1, "AM_HUNT_THE_BEAST", &uVar2);
			break;
		
		case 1048226110:
			unk_0x96C06C1BEFDB0CD2(Global_4264051[iParam0 /*85*/].f_6, Global_4264051[iParam0 /*85*/].f_7, Global_4264051[iParam0 /*85*/].f_66.f_1);
			break;
		
		case 569170531:
			unk_0xBF4038A2369548C2(Global_4264051[iParam0 /*85*/].f_6, Global_4264051[iParam0 /*85*/].f_7, Global_4264051[iParam0 /*85*/].f_66.f_1);
			break;
		
		case -856006867:
			unk_0x88199F47F6269E70(Global_4264051[iParam0 /*85*/].f_6, Global_4264051[iParam0 /*85*/].f_7, Global_4264051[iParam0 /*85*/].f_66.f_1, Global_4264051[iParam0 /*85*/].f_8);
			break;
		
		case 208223429:
			unk_0x475095B9C4F7F732(Global_4264051[iParam0 /*85*/].f_66.f_1, Global_4264051[iParam0 /*85*/].f_9);
			break;
		
		case 848090538:
			unk_0x40851EB9FBCB7FFB(Global_4264051[iParam0 /*85*/].f_66.f_1);
			break;
		
		case 665109499:
			unk_0xB1C823C5C5849674(Global_4264051[iParam0 /*85*/].f_66.f_1, Global_4264051[iParam0 /*85*/], 0, 1);
			break;
		
		case -1330755006:
			unk_0x55BEA38A3AA36974(Global_4264051[iParam0 /*85*/].f_66.f_1, Global_4264051[iParam0 /*85*/], 0, 1);
			break;
		
		case 1976384368:
			unk_0x02282973BA229BF2(Global_4264051[iParam0 /*85*/].f_66.f_1, Global_4264051[iParam0 /*85*/], 0, 0);
			break;
		
		case 268924934:
			unk_0x9746B77A8E33DF3D(Global_4264051[iParam0 /*85*/].f_66.f_1, Global_4264051[iParam0 /*85*/], Global_4264051[iParam0 /*85*/].f_1, Global_4264051[iParam0 /*85*/].f_9);
			break;
		
		case -293060240:
			unk_0xFE4BD0E8B1ED6EE0(Global_4264051[iParam0 /*85*/].f_66.f_1, Global_4264051[iParam0 /*85*/].f_6, Global_4264051[iParam0 /*85*/].f_7);
			break;
		
		case 437291904:
			unk_0x0A30EC00876C1F87(Global_4264051[iParam0 /*85*/].f_66.f_1, 0, 1, Global_4264051[iParam0 /*85*/].f_6, Global_4264051[iParam0 /*85*/].f_7, Global_4264051[iParam0 /*85*/].f_1, Global_4264051[iParam0 /*85*/], Global_4264051[iParam0 /*85*/].f_10, Global_4264051[iParam0 /*85*/].f_11, Global_4264051[iParam0 /*85*/].f_12);
			break;
		
		case -135813048:
			unk_0xBEDC524FF91B8708(Global_4264051[iParam0 /*85*/].f_66.f_1, 0, 1);
			break;
		
		case 463142405:
			unk_0xE4C8AA120E162283(Global_4264051[iParam0 /*85*/].f_6, Global_4264051[iParam0 /*85*/].f_7, Global_4264051[iParam0 /*85*/].f_66.f_1, Global_4264051[iParam0 /*85*/].f_8);
			break;
		
		case 1550217370:
			unk_0x801C88C79807679E(Global_4264051[iParam0 /*85*/].f_66.f_1);
			break;
		
		case -101307780:
			unk_0x18295D1BFE7A5A8D(Global_4264051[iParam0 /*85*/].f_66.f_1);
			break;
		
		case 599804707:
			unk_0x41E465DD667BCD29(Global_4264051[iParam0 /*85*/].f_66.f_1, "GB_SALVAGE", &uVar2);
			break;
		
		case 1347433368:
			unk_0x3088EB1AAC7A79CB(Global_4264051[iParam0 /*85*/].f_66.f_1);
			break;
		
		case 1052472386:
			unk_0xDE1CC9744B66C8B6(Global_4264051[iParam0 /*85*/].f_66.f_1, &(Global_4264051[iParam0 /*85*/].f_14.f_26), &(Global_4264051[iParam0 /*85*/].f_14.f_34));
			break;
		
		case -2130199671:
			unk_0x74935B021A629631(Global_4264051[iParam0 /*85*/].f_66.f_1, &(Global_4264051[iParam0 /*85*/].f_14.f_26), &(Global_4264051[iParam0 /*85*/].f_14.f_34));
			break;
		
		case -1227654538:
			unk_0x098838D83036E25D(Global_4264051[iParam0 /*85*/].f_66.f_1, &(Global_4264051[iParam0 /*85*/].f_14.f_26), &(Global_4264051[iParam0 /*85*/].f_14.f_34));
			break;
		
		case -930104477:
			unk_0xDEB63512FAE3E29C(Global_4264051[iParam0 /*85*/].f_66.f_1, 0, 1, Global_4264051[iParam0 /*85*/]);
			break;
		
		case 1864522104:
			unk_0xDD52D7BD8A6EA7B8(Global_4264051[iParam0 /*85*/].f_66.f_1, 0);
			break;
		
		case 215608230:
			unk_0xDD52D7BD8A6EA7B8(Global_4264051[iParam0 /*85*/].f_66.f_1, 1);
			break;
		
		case -876012764:
			unk_0xB34EB870270696B9(Global_4264051[iParam0 /*85*/].f_66.f_1, Global_4264051[iParam0 /*85*/]);
			break;
		
		case -722894325:
			unk_0xACD4A959E00AFAF4(Global_4264051[iParam0 /*85*/].f_66.f_1, Global_4264051[iParam0 /*85*/]);
			break;
		
		case 1407278493:
			unk_0xEC03AD87CC7E1447(Global_4264051[iParam0 /*85*/].f_66.f_1);
			break;
		
		case -1579394494:
		case -27443911:
			unk_0xCACEC066CD7355B0(Global_4264051[iParam0 /*85*/].f_66.f_1, &(Global_4264051[iParam0 /*85*/].f_14.f_26));
			break;
		
		case 1179783540:
			unk_0x5783E24FE1D42181(Global_4264051[iParam0 /*85*/].f_66.f_1, &(Global_4264051[iParam0 /*85*/].f_14.f_26));
			break;
		
		case 923419301:
			unk_0x8A8732E4CD07C8B4(Global_4264051[iParam0 /*85*/].f_66.f_1, &(Global_4264051[iParam0 /*85*/].f_14.f_26), 0);
			break;
		
		case -308826175:
			unk_0x8A8732E4CD07C8B4(Global_4264051[iParam0 /*85*/].f_66.f_1, &(Global_4264051[iParam0 /*85*/].f_14.f_26), 1);
			break;
		
		case 603298940:
			unk_0x8A8732E4CD07C8B4(Global_4264051[iParam0 /*85*/].f_66.f_1, &(Global_4264051[iParam0 /*85*/].f_14.f_26), 2);
			break;
		
		case -12619854:
			unk_0x8A8732E4CD07C8B4(Global_4264051[iParam0 /*85*/].f_66.f_1, &(Global_4264051[iParam0 /*85*/].f_14.f_26), 3);
			break;
		
		case -311112675:
			unk_0x8A8732E4CD07C8B4(Global_4264051[iParam0 /*85*/].f_66.f_1, &(Global_4264051[iParam0 /*85*/].f_14.f_26), 4);
			break;
		
		case 870439158:
			unk_0x8A8732E4CD07C8B4(Global_4264051[iParam0 /*85*/].f_66.f_1, &(Global_4264051[iParam0 /*85*/].f_14.f_26), 5);
			break;
		
		case -974288740:
			unk_0x8A8732E4CD07C8B4(Global_4264051[iParam0 /*85*/].f_66.f_1, &(Global_4264051[iParam0 /*85*/].f_14.f_26), 6);
			break;
		
		case -4138654:
			unk_0x8A8732E4CD07C8B4(Global_4264051[iParam0 /*85*/].f_66.f_1, &(Global_4264051[iParam0 /*85*/].f_14.f_26), 7);
			break;
		
		case -1180954122:
			unk_0x8A8732E4CD07C8B4(Global_4264051[iParam0 /*85*/].f_66.f_1, &(Global_4264051[iParam0 /*85*/].f_14.f_26), 8);
			break;
		
		case -1918051016:
			unk_0x8A8732E4CD07C8B4(Global_4264051[iParam0 /*85*/].f_66.f_1, &(Global_4264051[iParam0 /*85*/].f_14.f_26), 9);
			break;
		
		case 844330594:
			unk_0x8A8732E4CD07C8B4(Global_4264051[iParam0 /*85*/].f_66.f_1, &(Global_4264051[iParam0 /*85*/].f_14.f_26), 10);
			break;
		
		case 1934825517:
			unk_0x44C7E31925E5ED50(Global_4264051[iParam0 /*85*/].f_66.f_1, &(Global_4264051[iParam0 /*85*/].f_14.f_26), 0);
			break;
		
		case 1852024236:
			unk_0x44C7E31925E5ED50(Global_4264051[iParam0 /*85*/].f_66.f_1, &(Global_4264051[iParam0 /*85*/].f_14.f_26), 1);
			break;
		
		case 2099238988:
			unk_0x44C7E31925E5ED50(Global_4264051[iParam0 /*85*/].f_66.f_1, &(Global_4264051[iParam0 /*85*/].f_14.f_26), 2);
			break;
		
		case 1952643559:
			break;
		
		case 2039302543:
			break;
		
		case -1172900789:
			unk_0xD8601CE7AAAF3028(Global_4264051[iParam0 /*85*/].f_66.f_1, Global_4264051[iParam0 /*85*/].f_9);
			break;
		
		case -1733398043:
			unk_0x0C4C51EB1B3EC242(Global_4264051[iParam0 /*85*/].f_9, Global_4264051[iParam0 /*85*/].f_66.f_1, 0, 1);
			break;
		
		case -1892760262:
			unk_0x6C07F3FE567B0CB9(Global_4264051[iParam0 /*85*/].f_9, Global_4264051[iParam0 /*85*/].f_66.f_1, 0, 1);
			break;
		
		case -2015399333:
			unk_0x7D18826FCA3BCC90(Global_4264051[iParam0 /*85*/].f_66.f_1);
			break;
		
		case 402505853:
			if (func_33(unk_0xF1110FE23C67293A(Global_4264051[iParam0 /*85*/]), 0, 0))
			{
				unk_0xB94CF2AAC0E37C5B(unk_0xF1110FE23C67293A(Global_4264051[iParam0 /*85*/]), Global_4264051[iParam0 /*85*/].f_1, Global_4264051[iParam0 /*85*/].f_66.f_1, 0, 1);
			}
			break;
		
		case 1678112166:
			unk_0xCB881ABD1FF58875(Global_4264051[iParam0 /*85*/].f_66.f_1, Global_4264051[iParam0 /*85*/], 0, 1);
			break;
		
		case -1143510182:
			unk_0xB9F6ED11E8C53613(Global_4264051[iParam0 /*85*/], Global_4264051[iParam0 /*85*/].f_66.f_1, 0, 1);
			break;
		
		case -1574795641:
			unk_0x36399B2B84C06F15(Global_4264051[iParam0 /*85*/].f_66.f_1);
			break;
		
		case -961034881:
			unk_0xA85DAA0267EF6B8D(Global_4264051[iParam0 /*85*/].f_66.f_1);
			break;
		
		case 1135468152:
			unk_0x92A7449E57F4C0C3(Global_4264051[iParam0 /*85*/].f_66.f_1);
			break;
		
		case 1265272476:
			unk_0x052D79AA393A7E68(Global_4264051[iParam0 /*85*/].f_66.f_1, Global_4264051[iParam0 /*85*/].f_1, Global_4264051[iParam0 /*85*/].f_9);
			break;
		
		case -634726636:
			unk_0xC2561B6B17B28E67(Global_4264051[iParam0 /*85*/].f_66.f_1);
			break;
		
		case 696556762:
			unk_0x5937E34D1D30E2F9(Global_4264051[iParam0 /*85*/].f_66.f_1);
			break;
		
		case 837955913:
			unk_0xD942EC020DD2AB5A(Global_4264051[iParam0 /*85*/].f_66.f_1, Global_4264051[iParam0 /*85*/].f_66.f_15, 0, 1);
			break;
		
		case 403506509:
			unk_0xDA90688DD2A2DD6E(Global_4264051[iParam0 /*85*/].f_66.f_1);
			break;
		
		case -883876414:
			unk_0xCFD12E1FAEAD8EC9(Global_4264051[iParam0 /*85*/].f_66.f_1, Global_4264051[iParam0 /*85*/].f_66.f_15);
			break;
		
		case -1064150715:
		case -1387253055:
		case -716963152:
		case 1138089938:
			unk_0x6D209D45BE851426(Global_4264051[iParam0 /*85*/].f_66.f_1, Global_4264051[iParam0 /*85*/].f_66.f_15);
			break;
		
		case -1532467144:
			unk_0xBCF42E6168D490E2(Global_4264051[iParam0 /*85*/].f_66.f_1, Global_4264051[iParam0 /*85*/], 0, 1);
			break;
		
		case 1815541181:
			unk_0x15F4A0FA58D6F5C6(Global_4264051[iParam0 /*85*/].f_66.f_1, 0, 0);
			break;
		
		case -561012053:
			unk_0x08B37EE5E36AA6B1(Global_4264051[iParam0 /*85*/].f_66.f_1);
			break;
		
		case -1342064661:
			unk_0xC5EDF84FFFDCF829(Global_4264051[iParam0 /*85*/].f_66.f_1, 0, 1);
			break;
		
		case 1240683675:
			unk_0x88597D0E566FFD8B(Global_4264051[iParam0 /*85*/].f_66.f_1);
			break;
		
		case 1241904665:
			unk_0x4698BBCF6E3BF684(Global_4264051[iParam0 /*85*/].f_66.f_1, Global_4264051[iParam0 /*85*/], Global_4264051[iParam0 /*85*/].f_66.f_16, Global_4264051[iParam0 /*85*/].f_1);
			break;
		
		case -494565059:
			unk_0x5F34E1C03BCC0871(Global_4264051[iParam0 /*85*/].f_66.f_1);
			break;
		
		case 827308208:
			unk_0x1082F568E9D0FDC4(Global_4264051[iParam0 /*85*/].f_66.f_1);
			break;
		
		case -1857685192:
			unk_0xFC78BD6838578CAB(Global_4264051[iParam0 /*85*/].f_66.f_1);
			break;
		
		case 1698417709:
			unk_0x8092F21D0B94C61E(Global_4264051[iParam0 /*85*/].f_66.f_1);
			break;
		
		case -2017925037:
			unk_0x8E3E8886062CB776(Global_4264051[iParam0 /*85*/].f_66.f_1);
			break;
		
		case 1057653594:
		case 1810506918:
		case 451427308:
		case 824622151:
		case 1253978276:
		case -1576080766:
		case 1508411869:
		case 1428501742:
		case -1918967151:
		case 1261538664:
		case 1180397655:
		case 1414674366:
		case 261460130:
		case -2027658376:
			unk_0xF4F719FA8B441AAA(Global_4264051[iParam0 /*85*/].f_66.f_1, Global_4264051[iParam0 /*85*/]);
			break;
		
		case -1693570755:
			unk_0xA52EFF6213E99DBD(Global_4264051[iParam0 /*85*/].f_66.f_1, 0, 1, &(Global_4264051[iParam0 /*85*/].f_14.f_26), Global_4264051[iParam0 /*85*/]);
			break;
		
		case 1868043300:
			unk_0x5C95BC4983E40787(Global_4264051[iParam0 /*85*/].f_66.f_1, 0, 1, Global_4264051[iParam0 /*85*/], Global_4264051[iParam0 /*85*/].f_66.f_1);
			break;
		
		case -697248883:
			unk_0x2F868413AD66C660(Global_4264051[iParam0 /*85*/].f_66.f_1, 0, 1, Global_4264051[iParam0 /*85*/], Global_4264051[iParam0 /*85*/].f_66.f_1);
			break;
		
		case -1295545795:
			unk_0x028944378AC816A9(Global_4264051[iParam0 /*85*/].f_9, Global_4264051[iParam0 /*85*/].f_66.f_1, 0, 1);
			break;
		
		case 914079366:
			unk_0x171DB82E3FFD657F(Global_4264051[iParam0 /*85*/].f_66.f_1, 0, 1, 1, Global_4264051[iParam0 /*85*/].f_66.f_1, 0, 0, 0, 0, 0, 0);
			break;
		
		case 395122350:
			unk_0x171DB82E3FFD657F(Global_4264051[iParam0 /*85*/].f_66.f_1, 0, 1, 0, 0, 1, Global_4264051[iParam0 /*85*/].f_66.f_1, 0, 0, 0, 0);
			break;
		
		case -331981076:
			unk_0x171DB82E3FFD657F(Global_4264051[iParam0 /*85*/].f_66.f_1, 0, 1, 0, 0, 0, 0, 1, Global_4264051[iParam0 /*85*/].f_66.f_1, 0, 0);
			break;
		
		case 1671535231:
			unk_0x171DB82E3FFD657F(Global_4264051[iParam0 /*85*/].f_66.f_1, 0, 1, 0, 0, 0, 0, 0, 0, 1, Global_4264051[iParam0 /*85*/].f_66.f_1);
			break;
		
		case 1982688246:
			break;
	}
	switch (Global_4264051[iParam0 /*85*/].f_66.f_4)
	{
		case 1668610896:
			unk_0xFD7A82D67D455BFC(Global_4264051[iParam0 /*85*/].f_66.f_1, 0, 0, 1, Global_4264051[iParam0 /*85*/].f_66.f_1, 0, 0);
			break;
		
		case -2032529561:
			unk_0xFD7A82D67D455BFC(Global_4264051[iParam0 /*85*/].f_66.f_1, 1, Global_4264051[iParam0 /*85*/].f_66.f_1, 0, 0, 0, 0);
			break;
		
		case -1224479447:
			unk_0xFD7A82D67D455BFC(Global_4264051[iParam0 /*85*/].f_66.f_1, 0, 0, 0, 0, 1, Global_4264051[iParam0 /*85*/].f_66.f_1);
			break;
		
		case -319306689:
		case -466527264:
		case 1925965142:
		case 592152676:
		case 2035612943:
		case 1568659720:
			unk_0x57A03005593E8495(Global_4264051[iParam0 /*85*/].f_66.f_1, Global_4264051[iParam0 /*85*/], Global_4264051[iParam0 /*85*/].f_66.f_1, 0, 0);
			break;
		
		case 1220095570:
		case 2050320631:
		case 592672421:
			unk_0x57A03005593E8495(Global_4264051[iParam0 /*85*/].f_66.f_1, 0, 0, Global_4264051[iParam0 /*85*/], Global_4264051[iParam0 /*85*/].f_66.f_1);
			break;
		
		case 1775876058:
			unk_0xE9DCE62981455B13(Global_4264051[iParam0 /*85*/].f_66.f_1, Global_4264051[iParam0 /*85*/]);
			break;
		
		case -842062976:
			unk_0x3ED90646ED1B5EA7(Global_4264051[iParam0 /*85*/].f_66.f_1, Global_4264051[iParam0 /*85*/]);
			break;
		
		case -1896606724:
			Var3 = Global_4264051[iParam0 /*85*/].f_66.f_1;
			unk_0xE86689E5F82DE429(Global_4264051[iParam0 /*85*/].f_66.f_1, 0, 1, &Var3);
			break;
		
		case -1291433573:
			Var3.f_1 = Global_4264051[iParam0 /*85*/].f_66.f_1;
			unk_0xE86689E5F82DE429(Global_4264051[iParam0 /*85*/].f_66.f_1, 0, 1, &Var3);
			break;
		
		case 538631715:
			Var3.f_2 = Global_4264051[iParam0 /*85*/].f_66.f_1;
			unk_0xE86689E5F82DE429(Global_4264051[iParam0 /*85*/].f_66.f_1, 0, 1, &Var3);
			break;
		
		case 133782822:
			Var3.f_3 = Global_4264051[iParam0 /*85*/].f_66.f_1;
			unk_0xE86689E5F82DE429(Global_4264051[iParam0 /*85*/].f_66.f_1, 0, 1, &Var3);
			break;
		
		case 2081885153:
			Var3.f_4 = Global_4264051[iParam0 /*85*/].f_66.f_1;
			unk_0xE86689E5F82DE429(Global_4264051[iParam0 /*85*/].f_66.f_1, 0, 1, &Var3);
			break;
		
		case -1314365345:
			Var3.f_5 = Global_4264051[iParam0 /*85*/].f_66.f_1;
			unk_0xE86689E5F82DE429(Global_4264051[iParam0 /*85*/].f_66.f_1, 0, 1, &Var3);
			break;
		
		case 1322977732:
			Var3.f_6 = Global_4264051[iParam0 /*85*/].f_66.f_1;
			unk_0xE86689E5F82DE429(Global_4264051[iParam0 /*85*/].f_66.f_1, 0, 1, &Var3);
			break;
		
		case 396623013:
			Var3.f_7 = Global_4264051[iParam0 /*85*/].f_66.f_1;
			unk_0xE86689E5F82DE429(Global_4264051[iParam0 /*85*/].f_66.f_1, 0, 1, &Var3);
			break;
		
		case 1981664462:
			unk_0x54ABA22FA6371249(Global_4264051[iParam0 /*85*/]);
			break;
		
		case -518651910:
		case 14658715:
			unk_0x8F4E80CB48EEAE55(Global_4264051[iParam0 /*85*/].f_66.f_1);
			break;
		
		case -604793592:
		case -823426392:
		case -1401862980:
		case -173354274:
		case 409533976:
		case -1472522337:
		case 542574408:
		case -1261799063:
		case 784631574:
		case -2027479156:
			unk_0xD21D111C46BA9F15(Global_4264051[iParam0 /*85*/].f_66.f_1, Global_4264051[iParam0 /*85*/].f_66.f_15, Global_4264051[iParam0 /*85*/].f_66.f_16, Global_4264051[iParam0 /*85*/], 0, 0);
			break;
		
		case -837690641:
			unk_0xD21D111C46BA9F15(Global_4264051[iParam0 /*85*/].f_66.f_1, 0, 0, 0, Global_4264051[iParam0 /*85*/].f_66.f_15, Global_4264051[iParam0 /*85*/].f_66.f_16);
			break;
		
		case -1921250821:
			unk_0x6C8BC1488527AAAB(Global_4264051[iParam0 /*85*/].f_66.f_1, 0, 1, Global_4264051[iParam0 /*85*/].f_66.f_1, 0, 0);
			break;
		
		case -1370731547:
			unk_0x6C8BC1488527AAAB(Global_4264051[iParam0 /*85*/].f_66.f_1, 0, 1, 0, Global_4264051[iParam0 /*85*/].f_66.f_1, 0);
			break;
		
		case 1683798242:
			unk_0x6C8BC1488527AAAB(Global_4264051[iParam0 /*85*/].f_66.f_1, 0, 1, 0, 0, Global_4264051[iParam0 /*85*/].f_66.f_1);
			break;
		
		case -910968288:
			unk_0xC991C255AA6D90B2(Global_4264051[iParam0 /*85*/].f_66.f_1, 0, 1, Global_4264051[iParam0 /*85*/], Global_4264051[iParam0 /*85*/].f_10, Global_4264051[iParam0 /*85*/].f_11, Global_4264051[iParam0 /*85*/].f_12, Global_4264051[iParam0 /*85*/].f_6, Global_4264051[iParam0 /*85*/].f_7);
			break;
	}
	if (func_13())
	{
		if (bParam1)
		{
			unk_0xDF70A7B550623C58(Global_4264051[iParam0 /*85*/].f_66, &uVar4);
		}
	}
	func_7(iParam0);
}

int func_33(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		if (unk_0x166E920FB00B2DBB(iParam0))
		{
			if (bParam1)
			{
				if (!unk_0x5A228A6A51E757C8(iParam0))
				{
					return 0;
				}
			}
			if (bParam2)
			{
				if (!Global_2440049.f_3[iVar0])
				{
					return 0;
				}
			}
			return 1;
		}
	}
	return 0;
}

void func_34(var uParam0)
{
	*uParam0 = -1;
	uParam0->f_1 = -1;
	uParam0->f_2 = -1;
	uParam0->f_3 = -1;
	uParam0->f_4 = -1;
	uParam0->f_5 = -1;
	uParam0->f_6 = -1;
	uParam0->f_7 = -1;
	uParam0->f_8 = -1;
	uParam0->f_9 = -1;
}

int func_35(int iParam0, var uParam1)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 15)
	{
		if (Global_4264051[iVar0 /*85*/].f_66 == iParam0)
		{
			*uParam1 = { Global_4264051[iVar0 /*85*/] };
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_36(int iParam0)
{
	int iVar0;
	var uVar1;
	char* sVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	if (Global_4269486[iParam0 /*12*/].f_1 == Global_4269486[iParam0 /*12*/].f_6)
	{
		if (Global_4269486[iParam0 /*12*/].f_1 != 1445302971 && Global_4269486[iParam0 /*12*/].f_1 != -1316591359)
		{
			return;
		}
	}
	iVar0 = 0;
	sVar2 = "Wardrobe";
	iVar0 = unk_0x856D5567211886A2(sVar2);
	iVar0 = (iVar0 || func_38());
	iVar0 = (iVar0 + Global_4267435);
	func_37(&uVar1);
	iVar0 = (iVar0 || uVar1);
	unk_0xD2459066EA58CE43(&iVar0, 28);
	unk_0xD2459066EA58CE43(&iVar0, 29);
	unk_0xD2459066EA58CE43(&iVar0, 26);
	iVar3 = (Global_4269486[iParam0 /*12*/].f_9 && iVar0);
	iVar4 = (Global_4269486[iParam0 /*12*/].f_8 && iVar0);
	iVar5 = Global_4269486[iParam0 /*12*/].f_7;
	if (iVar5 == 0)
	{
		iVar5 = -2085313189;
	}
	if (((Global_4269486[iParam0 /*12*/] != Global_4269486[iParam0 /*12*/].f_5 || Global_4269486[iParam0 /*12*/].f_1 != Global_4269486[iParam0 /*12*/].f_6) || Global_4269486[iParam0 /*12*/].f_2 != iVar5) || Global_4269486[iParam0 /*12*/].f_3 != (iVar4 + iVar3))
	{
		Global_108560 = 1;
	}
}

int func_37(var uParam0)
{
	*uParam0 = shift_left(1, 2);
	return 5410420;
}

int func_38()
{
	return shift_left(1, 25);
}

int func_39()
{
	var uVar0;
	
	func_47(&uVar0);
	if (Global_1312872 == 0)
	{
		if (!unk_0x25DDB354A40FFCDB())
		{
			return 1;
		}
	}
	if (func_46())
	{
		return 1;
	}
	if (Global_2464493)
	{
		return 1;
	}
	if (func_45())
	{
		return 1;
	}
	if (func_44(159))
	{
		if (!func_43())
		{
			return 1;
		}
	}
	if (func_44(157))
	{
		return 1;
	}
	if (!unk_0x0EB6C63A09FD9DF1())
	{
		return 1;
	}
	if (func_40() != 0)
	{
		if (unk_0x7B70881748D166CD(func_40()) == 0)
		{
			return 1;
		}
	}
	return 0;
}

int func_40()
{
	switch (func_42())
	{
		case 0:
			return func_41();
			break;
		
		case 2:
			return joaat("creator");
			break;
	}
	return 0;
}

int func_41()
{
	switch (Global_2464595)
	{
		case 0:
			return joaat("freemode");
		
		default:
	}
	return joaat("freemode");
}

int func_42()
{
	return Global_30968;
}

bool func_43()
{
	return Global_2451787.f_696;
}

int func_44(int iParam0)
{
	if (unk_0x16F1FCCC54559709(1, iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_45()
{
	return Global_2462250;
}

bool func_46()
{
	return Global_2451787.f_691;
}

void func_47(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<3> Var3;
	
	iVar0 = 0;
	while (iVar0 < unk_0x2AC1C68C7CCA90E5(1))
	{
		iVar1 = unk_0x39BE1B4CEB4DAEC8(1, iVar0);
		if (iVar1 == 174)
		{
			unk_0x477FAFFE21935947(1, iVar0, &iVar2, 2);
			switch (iVar2)
			{
				case 1035596089:
					func_48(iVar0);
					break;
				
				case 1120313136:
					unk_0x477FAFFE21935947(1, iVar0, &Var3, 4);
					if (Var3.f_2 == 397890833)
					{
						*uParam0 = 1;
					}
					break;
				}
		}
		iVar0++;
	}
}

void func_48(int iParam0)
{
	struct<3> Var0;
	int iVar1;
	int iVar2;
	bool bVar3;
	
	if (unk_0x477FAFFE21935947(1, iParam0, &Var0, 3))
	{
		if (func_33(Var0.f_1, 1, 1))
		{
			iVar1 = unk_0x1FA7B77001D60F9D(Var0.f_1);
			if (unk_0xAE06B9E39EBDE049(iVar1))
			{
				if (unk_0x47DBF174A0CB9D55(iVar1, 0))
				{
					iVar2 = unk_0xA5D5B1042E8F47BD(iVar1, 0);
					if (unk_0x292280AF1BBBD6AC(iVar2, Var0.f_2) && unk_0x82CC259B7B4F4AD9())
					{
						if (func_49(iVar2, &bVar3))
						{
							unk_0xADCDA8AF77C0D19D(iVar2, Var0.f_2);
						}
						if (bVar3)
						{
							unk_0xE730EAF558C97567(&iVar2);
						}
					}
				}
			}
		}
	}
}

int func_49(int iParam0, var uParam1)
{
	if (unk_0xAE06B9E39EBDE049(iParam0))
	{
		if (!unk_0x1758275D343D5BA3(iParam0))
		{
			if (unk_0x38CC98C4A0688263(iParam0))
			{
				if (!unk_0xCA6AF782C906AC86(unk_0x36FE6D3220816ADA(iParam0)))
				{
					unk_0x4F3C4F457D44BB0F(iParam0, 0, 1);
					*uParam1 = 1;
				}
			}
		}
		if (unk_0x1D2A3118784C0272(iParam0, 0))
		{
			if (unk_0xAA5B806352173DEA(iParam0))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_50()
{
	wait(0);
}

void func_51()
{
	func_52();
}

void func_52()
{
	unk_0xD39E529EBE5DB04F();
}

void func_53(struct<34> Param0)
{
	if (Global_262145.f_23581)
	{
		func_51();
	}
	Local_22.f_66 = { Param0 };
	Local_22 = { Param0.f_19 };
	Local_22.f_14 = { Global_4264051[Param0.f_33 /*85*/].f_14 };
	iLocal_21 = Param0.f_33;
	if (Param0.f_33 < 0)
	{
		func_51();
	}
	if (!func_54(Param0, Param0.f_33))
	{
		func_7(Param0.f_33);
		func_51();
	}
	if (Local_22.f_66.f_2 != 0)
	{
		Local_22.f_66.f_2 = 1;
	}
}

int func_54(struct<18> Param0, var uParam1, int iParam2)
{
	if (Global_4264051[iParam2 /*85*/].f_66.f_1 != Param0.f_1)
	{
		return 0;
	}
	if (Global_4264051[iParam2 /*85*/].f_66.f_3 != Param0.f_3)
	{
		return 0;
	}
	if (Global_4264051[iParam2 /*85*/].f_66.f_4 != Param0.f_4)
	{
		return 0;
	}
	if (Global_4264051[iParam2 /*85*/].f_66.f_5 != Param0.f_5)
	{
		return 0;
	}
	if (Global_4264051[iParam2 /*85*/].f_66.f_6 != Param0.f_6)
	{
		return 0;
	}
	if (Global_4264051[iParam2 /*85*/].f_66.f_7 != Param0.f_7)
	{
		return 0;
	}
	if (Global_4264051[iParam2 /*85*/].f_66.f_14 != Param0.f_14)
	{
		return 0;
	}
	if (Global_4264051[iParam2 /*85*/].f_66.f_17 != Param0.f_17)
	{
		return 0;
	}
	return 1;
}

