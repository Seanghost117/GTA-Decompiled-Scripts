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
	float fLocal_28 = 0f;
	var uLocal_29 = 0;
	var uLocal_30 = 0;
	var uLocal_31 = 0;
	float fLocal_32 = 0f;
	float fLocal_33 = 0f;
	var uLocal_34 = 0;
	var uLocal_35 = 0;
	int iLocal_36 = 0;
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
	var uLocal_81 = 0;
	struct<872> Local_82 = { 0, 0, 4, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, -1, -1, 0, 10, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 10, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 5, 0, 0, 0, 0, 0, 0 } ;
	struct<14> Local_83[32];
	int iLocal_84 = 0;
	int iLocal_85 = 0;
	int iLocal_86 = 0;
	int iLocal_87 = 0;
	int iLocal_88 = 0;
	int iLocal_89 = 0;
	int iLocal_90 = 0;
	int iLocal_91 = 0;
	var uLocal_92 = 0;
	var uLocal_93 = 0;
	var uLocal_94 = 0;
	var uLocal_95 = 0;
	var uLocal_96 = 0;
	var uLocal_97 = 0;
	var uLocal_98 = 0;
	int iLocal_99[4] = { 0, 0, 0, 0 };
	struct<8> Local_100[30];
	var uLocal_101[30] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_102 = 0;
	var uLocal_103 = 0;
	int iLocal_104 = 0;
	var uLocal_105 = 0;
	var uLocal_106 = 0;
	var uLocal_107 = 0;
	var uLocal_108 = 0;
	struct<21> Local_109 = { 0, -1, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, -1, -1 } ;
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
	sLocal_18 = "NULL";
	fLocal_23 = 80f;
	fLocal_24 = 140f;
	fLocal_25 = 180f;
	fLocal_28 = 0f;
	fLocal_32 = -0.0375f;
	fLocal_33 = 0.17f;
	iLocal_36 = 3;
	iLocal_40 = 1;
	iLocal_41 = 65;
	iLocal_42 = 49;
	iLocal_43 = 64;
	fLocal_62 = ((0.05f + 0.275f) - 0.01f);
	iLocal_91 = -1;
	if (unk_0x25DDB354A40FFCDB() && func_1031(unk_0x460153A63B9477BC(), 0, 1))
	{
		func_978(ScriptParam_109);
	}
	else
	{
		func_931();
	}
	while (true)
	{
		func_930();
		if (func_922())
		{
			func_931();
		}
		Global_1676128.f_2 = Local_82.f_863;
		Global_1676128.f_3 = Local_82.f_864;
		switch (func_921(unk_0x59E2AD1A8ACEDA31()))
		{
			case 0:
				if (func_920() == 1)
				{
					if (func_919())
					{
						func_918();
						if (func_917())
						{
							func_902(166, 1, -1, 0);
							unk_0x53797676AD34A9AA(3);
							func_901(0f);
							iLocal_90 = unk_0x86FB3A0D4870FE62(unk_0x9B0761B4C3EB8BC7());
							unk_0xD3D9D7C84656DAE5(unk_0x9B0761B4C3EB8BC7(), iLocal_89);
						}
						else
						{
							func_902(166, 0, -1, 0);
						}
						func_900();
						func_899();
						func_898();
						Local_83[unk_0x59E2AD1A8ACEDA31() /*14*/] = 1;
					}
				}
				else if (func_920() == 4)
				{
					Local_83[unk_0x59E2AD1A8ACEDA31() /*14*/] = 3;
				}
				break;
			
			case 1:
				if (func_893(1))
				{
					Local_83[unk_0x59E2AD1A8ACEDA31() /*14*/] = 2;
				}
				if (func_920() == 1)
				{
					func_892();
					func_872();
					func_849();
					func_314();
					func_305();
					if (func_917() || func_303())
					{
						func_152(&(Global_1366969.f_534), &Global_1366969, 28, &(Global_1366969.f_1), &(Global_1366969.f_117), -1, 0, 0);
					}
					func_78();
				}
				else if (func_920() == 4)
				{
					Local_83[unk_0x59E2AD1A8ACEDA31() /*14*/] = 3;
					func_75();
				}
				func_74();
				break;
			
			case 3:
				func_73(&(Local_82.f_845));
				if (func_72(&(Local_82.f_845)))
				{
					Local_83[unk_0x59E2AD1A8ACEDA31() /*14*/] = 4;
				}
				break;
			
			case 2:
				Local_83[unk_0x59E2AD1A8ACEDA31() /*14*/] = 4;
			
			case 4:
				func_931();
				break;
		}
		if (unk_0xAFF96FDC3971E7EA())
		{
			switch (func_920())
			{
				case 0:
					func_70();
					func_69();
					if (func_25())
					{
						unk_0xF73A2DAF57FFFE87(&(Local_82.f_863), &(Local_82.f_864));
						Local_82 = 1;
						Local_82.f_118 = unk_0x59E2AD1A8ACEDA31();
						Local_82.f_119 = unk_0x460153A63B9477BC();
						func_902(166, 1, -1, 0);
					}
					break;
				
				case 1:
					func_21();
					func_15();
					func_11();
					func_4();
					if (func_2())
					{
						Local_82 = 4;
					}
					else if (func_1())
					{
						Local_82 = 4;
					}
					break;
				
				case 4:
					break;
				}
		}
	}
}

int func_1()
{
	if (Global_2540384.f_5188.f_40)
	{
		Global_2540384.f_5188.f_40 = 0;
		return 1;
	}
	return 0;
}

int func_2()
{
	if (func_3())
	{
		return 1;
	}
	if (unk_0xCE990E643CD9D0E5(Local_82.f_1, 2))
	{
		return 1;
	}
	return 0;
}

int func_3()
{
	return 0;
}

void func_4()
{
	switch (Local_82.f_117)
	{
		case 0:
			func_9();
			func_5();
			if (unk_0xCE990E643CD9D0E5(Local_82.f_1, 1))
			{
				Local_82.f_117 = 2;
			}
			else if (unk_0xCE990E643CD9D0E5(Local_82.f_1, 3))
			{
				Local_82.f_117 = 2;
			}
			break;
		
		case 2:
			break;
		
		case 3:
			break;
	}
}

void func_5()
{
	if (!unk_0xCE990E643CD9D0E5(Local_82.f_1, 6))
	{
		if (!func_8(&(Local_82.f_849)))
		{
			func_7(&(Local_82.f_849), 0, 0);
		}
		else if (func_6(&(Local_82.f_849), 500, 0))
		{
			unk_0xBE20AB8238688965(&(Local_82.f_1), 6);
		}
	}
}

int func_6(var uParam0, int iParam1, bool bParam2)
{
	if (iParam1 == -1)
	{
		return 1;
	}
	func_7(uParam0, bParam2, 0);
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

void func_7(var uParam0, bool bParam1, bool bParam2)
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

bool func_8(var uParam0)
{
	return uParam0->f_1;
}

void func_9()
{
	if (!func_8(&(Local_82.f_847)))
	{
		func_7(&(Local_82.f_847), 0, 0);
	}
	else if (func_6(&(Local_82.f_847), func_10(), 0))
	{
		unk_0xBE20AB8238688965(&(Local_82.f_1), 3);
	}
}

int func_10()
{
	return Global_262145.f_15022;
}

void func_11()
{
	int iVar0;
	int iVar1;
	
	if (unk_0xAFF96FDC3971E7EA())
	{
		iVar0 = 0;
		while (iVar0 < 4)
		{
			switch (Local_82.f_2[iVar0 /*26*/].f_17)
			{
				case 0:
					if (unk_0x3D70CCF2C9B362CD(Local_82.f_2[iVar0 /*26*/].f_1))
					{
						if (Local_82.f_2[iVar0 /*26*/] == 0)
						{
							if (unk_0x3D70CCF2C9B362CD(Local_82.f_2[iVar0 /*26*/].f_2))
							{
								Local_82.f_2[iVar0 /*26*/].f_17 = 1;
							}
						}
						else if (Local_82.f_2[iVar0 /*26*/] == 1)
						{
							Local_82.f_2[iVar0 /*26*/].f_17 = 5;
						}
						else
						{
							Local_82.f_2[iVar0 /*26*/].f_17 = 8;
						}
					}
					break;
				
				case 1:
					if (unk_0x3D70CCF2C9B362CD(Local_82.f_2[iVar0 /*26*/].f_1))
					{
						if (!func_14(Local_82.f_2[iVar0 /*26*/].f_1))
						{
							if (unk_0x3D70CCF2C9B362CD(Local_82.f_2[iVar0 /*26*/].f_2))
							{
								if (func_12(Local_82.f_2[iVar0 /*26*/].f_2))
								{
									if (unk_0xACBCFA3095C5A434(unk_0x3C6C6327BA564AEE(Local_82.f_2[iVar0 /*26*/].f_1), unk_0x770D3B2B4702434A(Local_82.f_2[iVar0 /*26*/].f_2)))
									{
										if (unk_0xCE990E643CD9D0E5(Local_82.f_109, iVar0))
										{
											unk_0xBE20AB8238688965(&(Local_82.f_108), iVar0);
											Local_82.f_2[iVar0 /*26*/].f_17 = 2;
										}
										else if (unk_0xCE990E643CD9D0E5(Local_82.f_110, iVar0))
										{
											unk_0xBE20AB8238688965(&(Local_82.f_108), iVar0);
											Local_82.f_2[iVar0 /*26*/].f_17 = 2;
										}
										else if (unk_0xCE990E643CD9D0E5(Local_82.f_111, iVar0))
										{
											unk_0xBE20AB8238688965(&(Local_82.f_108), iVar0);
											Local_82.f_2[iVar0 /*26*/].f_17 = 2;
										}
										else if (unk_0xCE990E643CD9D0E5(Local_82.f_112, iVar0))
										{
											Local_82.f_2[iVar0 /*26*/].f_17 = 3;
										}
									}
									else
									{
										Local_82.f_2[iVar0 /*26*/].f_17 = 4;
									}
								}
								else
								{
									Local_82.f_2[iVar0 /*26*/].f_17 = 3;
								}
							}
						}
					}
					break;
				
				case 2:
					if (unk_0x3D70CCF2C9B362CD(Local_82.f_2[iVar0 /*26*/].f_1))
					{
						if (!func_14(Local_82.f_2[iVar0 /*26*/].f_1))
						{
							if (!unk_0x6E0C5E7AAF8B6214(unk_0x3C6C6327BA564AEE(Local_82.f_2[iVar0 /*26*/].f_1)))
							{
								Local_82.f_2[iVar0 /*26*/].f_17 = 4;
							}
							else if (unk_0x3D70CCF2C9B362CD(Local_82.f_2[iVar0 /*26*/].f_2))
							{
								if (!func_12(Local_82.f_2[iVar0 /*26*/].f_2))
								{
									Local_82.f_2[iVar0 /*26*/].f_17 = 3;
								}
								else if (unk_0xCE990E643CD9D0E5(Local_82.f_112, iVar0))
								{
									Local_82.f_2[iVar0 /*26*/].f_17 = 3;
								}
							}
						}
					}
					break;
				
				case 3:
					if (unk_0x3D70CCF2C9B362CD(Local_82.f_2[iVar0 /*26*/].f_1))
					{
						if (!func_14(Local_82.f_2[iVar0 /*26*/].f_1))
						{
							if (!unk_0x47DBF174A0CB9D55(unk_0x3C6C6327BA564AEE(Local_82.f_2[iVar0 /*26*/].f_1), false))
							{
								Local_82.f_2[iVar0 /*26*/].f_17 = 4;
							}
						}
					}
					break;
				
				case 5:
					if (unk_0x3D70CCF2C9B362CD(Local_82.f_2[iVar0 /*26*/].f_1))
					{
						if (!func_14(Local_82.f_2[iVar0 /*26*/].f_1))
						{
							if (unk_0xCE990E643CD9D0E5(Local_82.f_110, iVar0))
							{
								Local_82.f_2[iVar0 /*26*/].f_17 = 4;
							}
							else if (unk_0xCE990E643CD9D0E5(Local_82.f_111, iVar0))
							{
								Local_82.f_2[iVar0 /*26*/].f_17 = 4;
							}
						}
					}
					break;
				
				case 8:
					if (unk_0x3D70CCF2C9B362CD(Local_82.f_2[iVar0 /*26*/].f_1))
					{
						if (Local_82.f_2[iVar0 /*26*/].f_24)
						{
							Local_82.f_2[iVar0 /*26*/].f_17 = 9;
						}
					}
					break;
				
				case 9:
					if (unk_0x3D70CCF2C9B362CD(Local_82.f_2[iVar0 /*26*/].f_1))
					{
						if (Local_82.f_2[iVar0 /*26*/].f_25)
						{
							Local_82.f_2[iVar0 /*26*/].f_17 = 6;
						}
					}
					break;
				
				case 4:
					break;
			}
			iVar1 = 0;
			iVar1 = 0;
			while (iVar1 < 3)
			{
				switch (Local_82.f_2[iVar0 /*26*/].f_18[iVar1])
				{
					case 0:
						if (unk_0x3D70CCF2C9B362CD(Local_82.f_2[iVar0 /*26*/].f_3[iVar1]))
						{
							if (Local_82.f_2[iVar0 /*26*/] == 0)
							{
								Local_82.f_2[iVar0 /*26*/].f_18[iVar1] = 1;
							}
							else if (Local_82.f_2[iVar0 /*26*/] == 2)
							{
								Local_82.f_2[iVar0 /*26*/].f_18[iVar1] = 8;
							}
						}
						break;
					
					case 1:
						if (unk_0x3D70CCF2C9B362CD(Local_82.f_2[iVar0 /*26*/].f_3[iVar1]))
						{
							if (Local_82.f_2[iVar0 /*26*/].f_17 == 2)
							{
								Local_82.f_2[iVar0 /*26*/].f_18[iVar1] = 7;
							}
							else if (Local_82.f_2[iVar0 /*26*/].f_17 == 3 || Local_82.f_2[iVar0 /*26*/].f_17 == 4)
							{
								Local_82.f_2[iVar0 /*26*/].f_18[iVar1] = 3;
							}
						}
						break;
					
					case 8:
						if (unk_0x3D70CCF2C9B362CD(Local_82.f_2[iVar0 /*26*/].f_3[iVar1]))
						{
							if (Local_82.f_2[iVar0 /*26*/].f_24)
							{
								Local_82.f_2[iVar0 /*26*/].f_18[iVar1] = 6;
							}
						}
						break;
					
					case 7:
						if (unk_0x3D70CCF2C9B362CD(Local_82.f_2[iVar0 /*26*/].f_3[iVar1]))
						{
							if (Local_82.f_2[iVar0 /*26*/].f_17 == 3 || Local_82.f_2[iVar0 /*26*/].f_17 == 4)
							{
								Local_82.f_2[iVar0 /*26*/].f_18[iVar1] = 3;
							}
						}
						break;
					
					case 3:
						if (unk_0x3D70CCF2C9B362CD(Local_82.f_2[iVar0 /*26*/].f_3[iVar1]))
						{
							if (!func_14(Local_82.f_2[iVar0 /*26*/].f_3[iVar1]))
							{
								if (!unk_0x47DBF174A0CB9D55(unk_0x3C6C6327BA564AEE(Local_82.f_2[iVar0 /*26*/].f_3[iVar1]), false))
								{
									Local_82.f_2[iVar0 /*26*/].f_18[iVar1] = 6;
								}
							}
						}
						break;
					
					case 6:
						break;
				}
				iVar1++;
			}
			iVar0++;
		}
	}
}

int func_12(int iParam0)
{
	if (unk_0xF7DE07F319727299(iParam0))
	{
		return !func_13(unk_0x770D3B2B4702434A(iParam0));
	}
	return 0;
}

int func_13(int iParam0)
{
	if (unk_0xAE06B9E39EBDE049(iParam0))
	{
		if (unk_0xA59F96B50B97E63C(iParam0, 0))
		{
			return 1;
		}
		else if (!unk_0x80FF6C016CDB0FAF(iParam0, 0))
		{
			return 1;
		}
	}
	else
	{
		return 1;
	}
	return 0;
}

int func_14(int iParam0)
{
	if (unk_0xF7DE07F319727299(iParam0))
	{
		return unk_0x5AEB5DDFFAD43CA5(unk_0x3C6C6327BA564AEE(iParam0));
	}
	return 1;
}

void func_15()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (unk_0x3D70CCF2C9B362CD(Local_82.f_2[iVar0 /*26*/].f_2))
		{
			if (!unk_0xCE990E643CD9D0E5(Local_82.f_116, iVar0))
			{
				if (func_20(iVar0))
				{
					if (func_12(Local_82.f_2[iVar0 /*26*/].f_2))
					{
						func_16(iVar0);
						unk_0xBE20AB8238688965(&(Local_82.f_116), iVar0);
					}
				}
			}
		}
		iVar0++;
	}
}

void func_16(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < unk_0xEFA28384DDD283E1())
	{
		if (unk_0xBD09DF93F957A0CF(unk_0x628A51AC66E80772(iVar0)))
		{
			iVar1 = unk_0x9019589211A13B02(unk_0x628A51AC66E80772(iVar0));
			if (!func_17(iVar1, 0))
			{
				unk_0xA33CABD77BE9CAC1(unk_0x770D3B2B4702434A(Local_82.f_2[iParam0 /*26*/].f_2), iVar1, 0);
			}
		}
		iVar0++;
	}
}

bool func_17(int iParam0, int iParam1)
{
	bool bVar0;
	
	if (iParam0 == unk_0x460153A63B9477BC())
	{
		bVar0 = func_18(-1, 0) == 8;
	}
	else
	{
		bVar0 = Global_1590682[iParam0 /*883*/].f_211 == 8;
	}
	if (iParam1 == 1)
	{
		if (unk_0x166E920FB00B2DBB(iParam0))
		{
			bVar0 = unk_0x6CC163E30ECE0790(iParam0) == 8;
		}
	}
	return bVar0;
}

int func_18(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_19();
	}
	if (Global_1312876[iVar1] == 1)
	{
		if (bParam1)
		{
		}
		iVar0 = 8;
	}
	else
	{
		iVar0 = Global_1312757[iVar1];
		if (bParam1)
		{
		}
	}
	return iVar0;
}

int func_19()
{
	return Global_1312763;
}

int func_20(int iParam0)
{
	int iVar0;
	
	if (!unk_0x3D70CCF2C9B362CD(Local_82.f_2[iParam0 /*26*/].f_1))
	{
		return 0;
	}
	if (!func_14(Local_82.f_2[iParam0 /*26*/].f_1))
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (unk_0x3D70CCF2C9B362CD(Local_82.f_2[iParam0 /*26*/].f_3[iVar0]))
		{
			if (!func_14(Local_82.f_2[iParam0 /*26*/].f_3[iVar0]))
			{
				return 0;
			}
		}
		iVar0++;
	}
	return 1;
}

void func_21()
{
	int iVar0;
	int iVar1;
	bool bVar2;
	int iVar3;
	
	iVar0 = 0;
	iVar1 = 0;
	bVar2 = false;
	if (Local_82 != 4)
	{
		iLocal_86 = 0;
		while (iLocal_86 < unk_0xEFA28384DDD283E1())
		{
			if (unk_0xBD09DF93F957A0CF(unk_0x628A51AC66E80772(iLocal_86)))
			{
				iVar3 = unk_0x9019589211A13B02(unk_0x628A51AC66E80772(iLocal_86));
				if (!func_17(iVar3, 0))
				{
					if (func_1031(iVar3, 1, 1))
					{
					}
					func_24(iLocal_86);
					func_23(iLocal_86);
					if (!unk_0xCE990E643CD9D0E5(Local_82.f_1, 2))
					{
						if (!bVar2)
						{
							if ((unk_0xCE990E643CD9D0E5(Local_82.f_1, 1) || unk_0xCE990E643CD9D0E5(Local_82.f_1, 3)) || unk_0xCE990E643CD9D0E5(Local_82.f_1, 5))
							{
								if (!unk_0xCE990E643CD9D0E5(Local_83[iLocal_86 /*14*/].f_1, 4))
								{
									bVar2 = true;
								}
							}
							else
							{
								bVar2 = true;
							}
						}
					}
				}
			}
			else if (!unk_0xCE990E643CD9D0E5(Local_82.f_1, 5))
			{
				if (Local_82.f_118 > -1)
				{
					if (iLocal_86 == Local_82.f_118)
					{
						unk_0xBE20AB8238688965(&(Local_82.f_1), 5);
					}
				}
			}
			iLocal_86++;
		}
		func_22();
		iVar1 = 0;
		while (iVar1 < 4)
		{
			if (unk_0xCE990E643CD9D0E5(Local_82.f_113, iVar1))
			{
				iVar0++;
			}
			iVar1++;
		}
		if (Local_82.f_115 != iVar0)
		{
			Local_82.f_115 = iVar0;
		}
		if (!unk_0xCE990E643CD9D0E5(Local_82.f_1, 1))
		{
			if (iVar0 >= 4)
			{
				unk_0xBE20AB8238688965(&(Local_82.f_1), 1);
			}
		}
		if (!unk_0xCE990E643CD9D0E5(Local_82.f_1, 2))
		{
			if (!bVar2)
			{
				unk_0xBE20AB8238688965(&(Local_82.f_1), 2);
			}
		}
	}
}

void func_22()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (unk_0x3D70CCF2C9B362CD(Local_82.f_2[iVar0 /*26*/].f_1))
		{
			if (!unk_0xCE990E643CD9D0E5(Local_82.f_113, iVar0))
			{
				if (!func_8(&(Local_82.f_853[iVar0 /*2*/])))
				{
					if (func_14(Local_82.f_2[iVar0 /*26*/].f_1))
					{
						func_7(&(Local_82.f_853[iVar0 /*2*/]), 0, 0);
					}
				}
				else if (func_6(&(Local_82.f_853[iVar0 /*2*/]), 10000, 0))
				{
					unk_0xBE20AB8238688965(&(Local_82.f_113), iVar0);
				}
			}
		}
		iVar0++;
	}
}

void func_23(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (!unk_0xCE990E643CD9D0E5(Local_82.f_109, iVar0))
		{
			if (unk_0xCE990E643CD9D0E5(Local_83[iParam0 /*14*/].f_5, iVar0))
			{
				unk_0xBE20AB8238688965(&(Local_82.f_109), iVar0);
			}
		}
		if (!unk_0xCE990E643CD9D0E5(Local_82.f_110, iVar0))
		{
			if (unk_0xCE990E643CD9D0E5(Local_83[iParam0 /*14*/].f_2, iVar0))
			{
				unk_0xBE20AB8238688965(&(Local_82.f_110), iVar0);
			}
		}
		if (!unk_0xCE990E643CD9D0E5(Local_82.f_112, iVar0))
		{
			if (unk_0xCE990E643CD9D0E5(Local_83[iParam0 /*14*/].f_3, iVar0))
			{
				unk_0xBE20AB8238688965(&(Local_82.f_112), iVar0);
			}
		}
		if (!unk_0xCE990E643CD9D0E5(Local_82.f_111, iVar0))
		{
			if (unk_0xCE990E643CD9D0E5(Local_83[iParam0 /*14*/].f_4, iVar0))
			{
				unk_0xBE20AB8238688965(&(Local_82.f_111), iVar0);
			}
		}
		if (!unk_0xCE990E643CD9D0E5(Local_82.f_113, iVar0))
		{
			if (unk_0xCE990E643CD9D0E5(Local_83[iParam0 /*14*/].f_6, iVar0))
			{
				unk_0xBE20AB8238688965(&(Local_82.f_113), iVar0);
			}
			else if (unk_0xCE990E643CD9D0E5(Local_83[iParam0 /*14*/].f_7, iVar0))
			{
				unk_0xBE20AB8238688965(&(Local_82.f_113), iVar0);
			}
		}
		if (Local_82.f_2[iVar0 /*26*/] == 2)
		{
			if (!Local_82.f_2[iVar0 /*26*/].f_24)
			{
				if (unk_0xCE990E643CD9D0E5(Local_83[iParam0 /*14*/].f_12, iVar0))
				{
					Local_82.f_2[iVar0 /*26*/].f_24 = 1;
				}
			}
			if (!Local_82.f_2[iVar0 /*26*/].f_25)
			{
				if (unk_0xCE990E643CD9D0E5(Local_83[iParam0 /*14*/].f_13, iVar0))
				{
					Local_82.f_2[iVar0 /*26*/].f_25 = 1;
				}
			}
		}
		iVar0++;
	}
}

void func_24(int iParam0)
{
	int iVar0;
	
	if (!unk_0xCE990E643CD9D0E5(Local_82.f_114, iParam0))
	{
		iVar0 = 0;
		while (iVar0 < 4)
		{
			if (unk_0x3D70CCF2C9B362CD(Local_82.f_2[iVar0 /*26*/].f_2))
			{
				if (unk_0x3D70CCF2C9B362CD(Local_82.f_2[iVar0 /*26*/].f_1))
				{
					if (!func_14(Local_82.f_2[iVar0 /*26*/].f_1))
					{
						if (func_12(Local_82.f_2[iVar0 /*26*/].f_2))
						{
							unk_0xA33CABD77BE9CAC1(unk_0x770D3B2B4702434A(Local_82.f_2[iVar0 /*26*/].f_2), unk_0x9019589211A13B02(unk_0x628A51AC66E80772(iParam0)), 1);
							unk_0xBE20AB8238688965(&(Local_82.f_114), iParam0);
						}
					}
				}
			}
			else
			{
				unk_0xBE20AB8238688965(&(Local_82.f_114), iParam0);
			}
			iVar0++;
		}
	}
}

int func_25()
{
	if (!func_46())
	{
		return 0;
	}
	if (!func_35())
	{
		return 0;
	}
	if (!func_26())
	{
		return 0;
	}
	return 1;
}

int func_26()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (func_34(iVar0))
		{
			func_29(iVar0);
		}
		iVar0++;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (func_34(iVar0))
		{
			if (!func_27(iVar0))
			{
				return 0;
			}
		}
		iVar0++;
	}
	return 1;
}

int func_27(int iParam0)
{
	int iVar0;
	int iVar1;
	struct<3> Var2;
	
	iVar0 = Local_82.f_2[iParam0 /*26*/].f_22;
	iVar1 = 0;
	while (iVar1 < 3)
	{
		Var2 = { Local_82.f_123[iVar0 /*36*/].f_18[iVar1 /*3*/] };
		if (!func_28(Var2, 0f, 0f, 0f, 0))
		{
			if (!unk_0x3D70CCF2C9B362CD(Local_82.f_2[iParam0 /*26*/].f_7[iVar1]))
			{
				return 0;
			}
		}
		iVar1++;
	}
	return 1;
}

bool func_28(struct<3> Param0, struct<3> Param1, bool bParam2)
{
	if (bParam2)
	{
		return (Param0.x == Param1.x && Param0.f_1 == Param1.f_1);
	}
	return ((Param0.x == Param1.x && Param0.f_1 == Param1.f_1) && Param0.f_2 == Param1.f_2);
}

int func_29(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<3> Var3;
	float fVar4;
	
	iVar0 = Local_82.f_2[iParam0 /*26*/].f_22;
	iVar1 = 0;
	while (iVar1 < 3)
	{
		if (!unk_0x3D70CCF2C9B362CD(Local_82.f_2[iParam0 /*26*/].f_7[iVar1]))
		{
			Var3 = { Local_82.f_123[iVar0 /*36*/].f_18[iVar1 /*3*/] };
			fVar4 = Local_82.f_123[iVar0 /*36*/].f_28[iVar1];
			if (!func_28(Var3, 0f, 0f, 0f, 0))
			{
				iVar2 = Local_82.f_123[iVar0 /*36*/].f_32[iVar1];
				if (unk_0xCAF3836E98C401B1(1))
				{
					if (func_33(iVar2))
					{
						if (!unk_0xCE990E643CD9D0E5(Local_82.f_2[iParam0 /*26*/].f_23, iVar1))
						{
							unk_0x555EE41D7C7078E6(Var3, 10f, 1, 0, 0, true);
							unk_0xBE20AB8238688965(&(Local_82.f_2[iParam0 /*26*/].f_23), iVar1);
						}
						if (func_30(&(Local_82.f_2[iParam0 /*26*/].f_7[iVar1]), iVar2, Var3, fVar4, 1, 1, 1, 0, 1, 1, 0, 0, 0, 0))
						{
							unk_0x71E303DB05A7869C(unk_0x770D3B2B4702434A(Local_82.f_2[iParam0 /*26*/].f_7[iVar1]), 1);
							unk_0x54907AF8D51E6B48(unk_0x770D3B2B4702434A(Local_82.f_2[iParam0 /*26*/].f_7[iVar1]), 1);
							unk_0x617FDF8FC3AB369D(unk_0x3C6C6327BA564AEE(Local_82.f_2[iParam0 /*26*/].f_7[iVar1]), 1, iLocal_89);
							unk_0x74172B5AFD503628(unk_0x770D3B2B4702434A(Local_82.f_2[iParam0 /*26*/].f_7[iVar1]), false, 0);
							unk_0x131A211B8EEF6BF0(unk_0x770D3B2B4702434A(Local_82.f_2[iParam0 /*26*/].f_7[iVar1]), 0);
						}
					}
				}
			}
		}
		iVar1++;
	}
	return 0;
}

int func_30(var uParam0, int iParam1, struct<3> Param2, float fParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9, bool bParam10, bool bParam11, bool bParam12, bool bParam13)
{
	float fVar0;
	int iVar1;
	
	if (!unk_0x003F998A2839DD5E(iParam1))
	{
		return 0;
	}
	if (!unk_0xCAF3836E98C401B1(1))
	{
		return 0;
	}
	fVar0 = 1.5f;
	if (iParam1 == joaat("bombushka"))
	{
		fVar0 = 20f;
	}
	if (bParam9)
	{
		unk_0xF27E737981AFB47D(Param2, fVar0, 0, 0, 0, 0, false, 0);
	}
	iVar1 = unk_0xCE4780E24AFDFBF9(iParam1, Param2, fParam3, bParam5, bParam4, bParam12);
	if (unk_0xAE06B9E39EBDE049(iVar1))
	{
		*uParam0 = unk_0x50ACD47FCBAD9F89(iVar1);
		Global_2540384.f_6583 = iVar1;
		if (unk_0xF7DE07F319727299(*uParam0))
		{
			if (bParam13)
			{
				unk_0xFA6E875B9DF13F14(iVar1, 1);
			}
			unk_0x7C47E49129337557(iVar1, bParam8);
			if (unk_0x4349BF35C5B9A49B(iVar1))
			{
				if (bParam6)
				{
					unk_0x342AB3CE1C296A56(*uParam0, 1);
				}
				else
				{
					unk_0x342AB3CE1C296A56(*uParam0, 0);
				}
				if (bParam11)
				{
					unk_0xDB600F30FAA757F3(*uParam0, unk_0x460153A63B9477BC(), 1);
				}
			}
			unk_0xDBDEDE7005EE04EF(iVar1, bParam7);
			unk_0x6B75B3B5FAC90C06(iVar1, 1);
			if (bParam10)
			{
				unk_0x9DFE5167DB83E411(iVar1);
				unk_0x7C3ECA5C7ACE0DDB(iVar1, 5, 5, 1f);
			}
			func_31(Param2, fParam3, iParam1, iVar1);
			return 1;
		}
	}
	return 0;
}

void func_31(struct<3> Param0, float fParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	if (func_32(unk_0x460153A63B9477BC(), Param0, iParam2) > -1)
	{
		if ((Global_2405074.f_2914[1 /*6*/].f_5 == iParam3 && Global_2405074.f_2914[1 /*6*/].f_4 == iParam2) && vdist(Global_2405074.f_2914[1 /*6*/], Param0) < 0.5f)
		{
			return;
		}
		iVar0 = 0;
		while (iVar0 < 2)
		{
			if (iVar0 < 1)
			{
				Global_2405074.f_2914[iVar0 /*6*/] = { Global_2405074.f_2914[iVar0 + 1 /*6*/] };
			}
			iVar0++;
		}
		Global_2405074.f_2914[1 /*6*/] = { Param0 };
		Global_2405074.f_2914[1 /*6*/].f_3 = fParam1;
		Global_2405074.f_2914[1 /*6*/].f_4 = iParam2;
		Global_2405074.f_2914[1 /*6*/].f_5 = iParam3;
	}
}

int func_32(int iParam0, struct<3> Param1, int iParam2)
{
	int iVar0;
	int iVar1;
	struct<3> Var2;
	
	iVar0 = iParam0;
	if (iVar0 > -1)
	{
		iVar1 = 0;
		while (iVar1 < 2)
		{
			if (Global_2417956.f_461[iVar0 /*11*/][iVar1 /*5*/].f_4 == iParam2)
			{
				Var2 = { Param1 };
				if (unk_0x0D77CDCF403AEBD2((Global_2417956.f_461[iVar0 /*11*/][iVar1 /*5*/].f_2 - Var2.f_2)) < 2f)
				{
					Var2.f_2 = Global_2417956.f_461[iVar0 /*11*/][iVar1 /*5*/].f_2;
				}
				if (vdist(Global_2417956.f_461[iVar0 /*11*/][iVar1 /*5*/], Var2) < 0.5f)
				{
					return iVar1;
				}
			}
			iVar1++;
		}
	}
	return -1;
}

bool func_33(int iParam0)
{
	if (iParam0 == 0)
	{
		return 1;
	}
	unk_0x78FCB2E22C41B9D5(iParam0);
	return unk_0x7D167B9A0CCDA347(iParam0);
}

bool func_34(int iParam0)
{
	int iVar0;
	
	if (Local_82.f_2[iParam0 /*26*/] != 2)
	{
		return 0;
	}
	iVar0 = Local_82.f_2[iParam0 /*26*/].f_22;
	return !func_28(Local_82.f_123[iVar0 /*36*/].f_18[0 /*3*/], 0f, 0f, 0f, 0);
}

int func_35()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (func_45(iVar0))
		{
			func_37(iVar0);
		}
		iVar0++;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (func_45(iVar0))
		{
			if (!func_36(iVar0))
			{
				return 0;
			}
		}
		iVar0++;
	}
	return 1;
}

int func_36(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<3> Var3;
	
	iVar1 = Local_82.f_2[iParam0 /*26*/];
	iVar2 = Local_82.f_2[iParam0 /*26*/].f_22;
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (!unk_0x3D70CCF2C9B362CD(Local_82.f_2[iParam0 /*26*/].f_3[iVar0]))
		{
			if (iVar1 == 0)
			{
				return 0;
			}
			else if (iVar1 == 2)
			{
				Var3 = { Local_82.f_123[iVar2 /*36*/].f_4[iVar0 /*3*/] };
				if (!func_28(Var3, 0f, 0f, 0f, 0))
				{
					return 0;
				}
			}
		}
		iVar0++;
	}
	return 1;
}

int func_37(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	struct<3> Var5;
	float fVar6;
	
	if (unk_0x3D70CCF2C9B362CD(Local_82.f_2[iParam0 /*26*/].f_1))
	{
		switch (Local_82.f_2[iParam0 /*26*/])
		{
			case 0:
				if (func_44(Local_82.f_2[iParam0 /*26*/].f_2))
				{
					if (unk_0x3D70CCF2C9B362CD(Local_82.f_2[iParam0 /*26*/].f_2))
					{
						iVar0 = func_43();
						iVar1 = 0;
						while (iVar1 < 3)
						{
							if (!unk_0x3D70CCF2C9B362CD(Local_82.f_2[iParam0 /*26*/].f_3[iVar1]))
							{
								if (unk_0xCFED0F4D63A92A70(1))
								{
									if (func_33(iVar0))
									{
										if (func_42(&(Local_82.f_2[iParam0 /*26*/].f_3[iVar1]), Local_82.f_2[iParam0 /*26*/].f_2, 22, iVar0, iVar1, 1, 1, 1))
										{
											unk_0xDAE36360F0F8C1ED(unk_0x3C6C6327BA564AEE(Local_82.f_2[iParam0 /*26*/].f_3[iVar1]), true);
											unk_0x82FF25D1808866E5(unk_0x3C6C6327BA564AEE(Local_82.f_2[iParam0 /*26*/].f_3[iVar1]), 1, 0);
											unk_0x4E65320BC9AD521C(unk_0x3C6C6327BA564AEE(Local_82.f_2[iParam0 /*26*/].f_3[iVar1]), true);
											unk_0xD3D9D7C84656DAE5(unk_0x3C6C6327BA564AEE(Local_82.f_2[iParam0 /*26*/].f_3[iVar1]), Global_1575018);
											unk_0x617FDF8FC3AB369D(unk_0x3C6C6327BA564AEE(Local_82.f_2[iParam0 /*26*/].f_3[iVar1]), 1, iLocal_89);
											unk_0x44EEDB6E2FB6904F(unk_0x3C6C6327BA564AEE(Local_82.f_2[iParam0 /*26*/].f_3[iVar1]), true);
											unk_0x92BD213E6A0E666B(unk_0x3C6C6327BA564AEE(Local_82.f_2[iParam0 /*26*/].f_3[iVar1]), joaat("weapon_microsmg"), 99999999, false, true);
											unk_0x6673CC701BC8E9C1(unk_0x3C6C6327BA564AEE(Local_82.f_2[iParam0 /*26*/].f_3[iVar1]), 3, false);
											unk_0x6673CC701BC8E9C1(unk_0x3C6C6327BA564AEE(Local_82.f_2[iParam0 /*26*/].f_3[iVar1]), 5, true);
											unk_0x6673CC701BC8E9C1(unk_0x3C6C6327BA564AEE(Local_82.f_2[iParam0 /*26*/].f_3[iVar1]), 2, true);
										}
									}
								}
							}
							iVar1++;
						}
					}
				}
				break;
			
			case 2:
				iVar0 = func_43();
				iVar1 = 0;
				while (iVar1 < 3)
				{
					if (!unk_0x3D70CCF2C9B362CD(Local_82.f_2[iParam0 /*26*/].f_3[iVar1]))
					{
						if (unk_0xCFED0F4D63A92A70(1))
						{
							if (func_33(iVar0))
							{
								iVar2 = Local_82.f_2[iParam0 /*26*/].f_22;
								Var5 = { Local_82.f_123[iVar2 /*36*/].f_4[iVar1 /*3*/] };
								fVar6 = Local_82.f_123[iVar2 /*36*/].f_14[iVar1];
								if (!func_28(Var5, 0f, 0f, 0f, 0))
								{
									if (func_41(&(Local_82.f_2[iParam0 /*26*/].f_3[iVar1]), 22, iVar0, Var5, fVar6, 1, 1, 1))
									{
										unk_0xDAE36360F0F8C1ED(unk_0x3C6C6327BA564AEE(Local_82.f_2[iParam0 /*26*/].f_3[iVar1]), true);
										unk_0x82FF25D1808866E5(unk_0x3C6C6327BA564AEE(Local_82.f_2[iParam0 /*26*/].f_3[iVar1]), 1, 0);
										unk_0x4E65320BC9AD521C(unk_0x3C6C6327BA564AEE(Local_82.f_2[iParam0 /*26*/].f_3[iVar1]), true);
										unk_0xD3D9D7C84656DAE5(unk_0x3C6C6327BA564AEE(Local_82.f_2[iParam0 /*26*/].f_3[iVar1]), Global_1575018);
										unk_0x617FDF8FC3AB369D(unk_0x3C6C6327BA564AEE(Local_82.f_2[iParam0 /*26*/].f_3[iVar1]), 1, iLocal_89);
										unk_0x92BD213E6A0E666B(unk_0x3C6C6327BA564AEE(Local_82.f_2[iParam0 /*26*/].f_3[iVar1]), joaat("weapon_carbinerifle"), 99999999, false, true);
										unk_0x73745F8F1D07995D(unk_0x3C6C6327BA564AEE(Local_82.f_2[iParam0 /*26*/].f_3[iVar1]), 1);
										unk_0x694113444F21E39F(unk_0x3C6C6327BA564AEE(Local_82.f_2[iParam0 /*26*/].f_3[iVar1]), 42, true);
										unk_0x17253AF44F6ED2DA(unk_0x3C6C6327BA564AEE(Local_82.f_2[iParam0 /*26*/].f_3[iVar1]), 1);
										unk_0x6673CC701BC8E9C1(unk_0x3C6C6327BA564AEE(Local_82.f_2[iParam0 /*26*/].f_3[iVar1]), 43, true);
										unk_0x6673CC701BC8E9C1(unk_0x3C6C6327BA564AEE(Local_82.f_2[iParam0 /*26*/].f_3[iVar1]), 44, true);
										unk_0x38CCFC7E1952A745(unk_0x3C6C6327BA564AEE(Local_82.f_2[iParam0 /*26*/].f_3[iVar1]), 1);
										unk_0x3D7F49DF8C5586D8(unk_0x3C6C6327BA564AEE(Local_82.f_2[iParam0 /*26*/].f_3[iVar1]), Var5, 7f, 0, 0);
										unk_0x694113444F21E39F(unk_0x3C6C6327BA564AEE(Local_82.f_2[iParam0 /*26*/].f_3[iVar1]), 132, true);
										iVar3 = func_40();
										unk_0x16E50383DEE2A560(unk_0x3C6C6327BA564AEE(Local_82.f_2[iParam0 /*26*/].f_3[iVar1]), iVar3);
										unk_0x697DA7132EE43ABC(unk_0x3C6C6327BA564AEE(Local_82.f_2[iParam0 /*26*/].f_3[iVar1]), iVar3, 0);
										iVar4 = func_39();
										unk_0xA1836510046FE87B(unk_0x3C6C6327BA564AEE(Local_82.f_2[iParam0 /*26*/].f_3[iVar1]), iVar4);
										unk_0xF94DFEAE3DD1EE7E(unk_0x3C6C6327BA564AEE(Local_82.f_2[iParam0 /*26*/].f_3[iVar1]), func_38());
										unk_0x389E871B0B67CCCC(unk_0x3C6C6327BA564AEE(Local_82.f_2[iParam0 /*26*/].f_3[iVar1]), 0);
										unk_0x694113444F21E39F(unk_0x3C6C6327BA564AEE(Local_82.f_2[iParam0 /*26*/].f_3[iVar1]), 281, true);
									}
								}
							}
						}
					}
					iVar1++;
				}
				break;
			}
	}
	return 0;
}

int func_38()
{
	return round(Global_262145.f_15030);
}

int func_39()
{
	return 200;
}

var func_40()
{
	return Global_262145.f_15029;
}

int func_41(var uParam0, int iParam1, int iParam2, struct<3> Param3, float fParam4, bool bParam5, int iParam6, bool bParam7)
{
	int iVar0;
	
	if (!unk_0xCFED0F4D63A92A70(1))
	{
		return 0;
	}
	iVar0 = unk_0xB3116B49FE00E2F1(iParam1, iParam2, Param3, fParam4, iParam6, bParam5);
	*uParam0 = unk_0x28207B405DA4E61E(iVar0);
	if (unk_0xF7DE07F319727299(*uParam0))
	{
		unk_0x7C47E49129337557(iVar0, bParam7);
		if (unk_0x4349BF35C5B9A49B(iVar0))
		{
			if (bParam5)
			{
				unk_0x342AB3CE1C296A56(*uParam0, 1);
			}
		}
		return 1;
	}
	return 0;
}

int func_42(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, bool bParam5, int iParam6, bool bParam7)
{
	if (!unk_0xCFED0F4D63A92A70(1))
	{
		return 0;
	}
	if (!unk_0xF7DE07F319727299(iParam1))
	{
		return 0;
	}
	if (!unk_0x80FF6C016CDB0FAF(unk_0x770D3B2B4702434A(iParam1), 0))
	{
		return 0;
	}
	*uParam0 = unk_0x28207B405DA4E61E(unk_0x6A7A2C83BD302BA4(unk_0x770D3B2B4702434A(iParam1), iParam2, iParam3, iParam4, iParam6, bParam5));
	if (unk_0xF7DE07F319727299(*uParam0))
	{
		unk_0x7C47E49129337557(unk_0x3C6C6327BA564AEE(*uParam0), bParam7);
		if (unk_0x4349BF35C5B9A49B(unk_0x3C6C6327BA564AEE(*uParam0)))
		{
			if (bParam5)
			{
				unk_0x342AB3CE1C296A56(*uParam0, 1);
			}
		}
		return 1;
	}
	return 0;
}

int func_43()
{
	return joaat("s_m_m_chemsec_01");
}

int func_44(int iParam0)
{
	if (unk_0xF7DE07F319727299(iParam0))
	{
		unk_0x5F00FA3094B612F5(iParam0);
		return unk_0xF05B7723022657B3(iParam0);
	}
	return 0;
}

bool func_45(int iParam0)
{
	return (Local_82.f_2[iParam0 /*26*/] == 0 || Local_82.f_2[iParam0 /*26*/] == 2);
}

int func_46()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 4)
	{
		func_48(iVar0);
		iVar0++;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (!func_47(iVar0))
		{
			return 0;
		}
		iVar0++;
	}
	return 1;
}

int func_47(int iParam0)
{
	switch (Local_82.f_2[iParam0 /*26*/])
	{
		case 0:
			if (unk_0x3D70CCF2C9B362CD(Local_82.f_2[iParam0 /*26*/].f_1))
			{
				if (unk_0x3D70CCF2C9B362CD(Local_82.f_2[iParam0 /*26*/].f_2))
				{
					return 1;
				}
			}
			break;
		
		case 1:
		case 2:
			if (unk_0x3D70CCF2C9B362CD(Local_82.f_2[iParam0 /*26*/].f_1))
			{
				return 1;
			}
			break;
	}
	return 0;
}

int func_48(int iParam0)
{
	int iVar0;
	int iVar1;
	struct<3> Var2;
	var uVar3;
	var uVar4;
	int iVar5;
	int iVar6;
	float fVar7;
	
	switch (Local_82.f_2[iParam0 /*26*/])
	{
		case 0:
			if (!unk_0x3D70CCF2C9B362CD(Local_82.f_2[iParam0 /*26*/].f_2))
			{
				iVar0 = Local_82.f_2[iParam0 /*26*/].f_11;
				if (unk_0xCAF3836E98C401B1(1))
				{
					if (func_33(iVar0))
					{
						if (func_28(Local_82.f_2[iParam0 /*26*/].f_13, 0f, 0f, 0f, 0))
						{
							if (func_54(iParam0, &Var2, &uVar3, &uVar4))
							{
								Local_82.f_2[iParam0 /*26*/].f_13 = { Var2 };
								Local_82.f_2[iParam0 /*26*/].f_16 = uVar3;
							}
						}
						if (!func_28(Local_82.f_2[iParam0 /*26*/].f_13, 0f, 0f, 0f, 0))
						{
							if (func_30(&(Local_82.f_2[iParam0 /*26*/].f_2), iVar0, Local_82.f_2[iParam0 /*26*/].f_13, Local_82.f_2[iParam0 /*26*/].f_16, 1, 1, 1, 0, 1, 1, 0, 0, 0, 0))
							{
								unk_0x54907AF8D51E6B48(unk_0x770D3B2B4702434A(Local_82.f_2[iParam0 /*26*/].f_2), 1);
								unk_0x71E303DB05A7869C(unk_0x770D3B2B4702434A(Local_82.f_2[iParam0 /*26*/].f_2), 1);
								unk_0xC160551F55D6365A(unk_0x770D3B2B4702434A(Local_82.f_2[iParam0 /*26*/].f_2), true, true, 0);
								unk_0x617FDF8FC3AB369D(unk_0x3C6C6327BA564AEE(Local_82.f_2[iParam0 /*26*/].f_2), 1, iLocal_89);
								unk_0x0E765FE8467F7839(unk_0x770D3B2B4702434A(Local_82.f_2[iParam0 /*26*/].f_2), false);
								unk_0x74172B5AFD503628(unk_0x770D3B2B4702434A(Local_82.f_2[iParam0 /*26*/].f_2), false, 0);
								unk_0xA5EAD2ACE2C8BBB2(unk_0x770D3B2B4702434A(Local_82.f_2[iParam0 /*26*/].f_2), true, 1);
								unk_0xAEBB7D261688301C(unk_0x770D3B2B4702434A(Local_82.f_2[iParam0 /*26*/].f_2), true);
								unk_0x6F740CE014E3C872(unk_0x770D3B2B4702434A(Local_82.f_2[iParam0 /*26*/].f_2), 1);
								unk_0x131A211B8EEF6BF0(unk_0x770D3B2B4702434A(Local_82.f_2[iParam0 /*26*/].f_2), 0);
								unk_0xF7F003F7673B7CDD(unk_0x770D3B2B4702434A(Local_82.f_2[iParam0 /*26*/].f_2), 0);
							}
						}
					}
				}
			}
			if (unk_0x3D70CCF2C9B362CD(Local_82.f_2[iParam0 /*26*/].f_2))
			{
				if (!unk_0x3D70CCF2C9B362CD(Local_82.f_2[iParam0 /*26*/].f_1))
				{
					if (unk_0xCFED0F4D63A92A70(1))
					{
						iVar1 = Local_82.f_2[iParam0 /*26*/].f_12;
						if (func_33(iVar1))
						{
							if (func_42(&(Local_82.f_2[iParam0 /*26*/].f_1), Local_82.f_2[iParam0 /*26*/].f_2, 22, iVar1, -1, 1, 1, 1))
							{
								unk_0xDAE36360F0F8C1ED(unk_0x3C6C6327BA564AEE(Local_82.f_2[iParam0 /*26*/].f_1), true);
								unk_0x82FF25D1808866E5(unk_0x3C6C6327BA564AEE(Local_82.f_2[iParam0 /*26*/].f_1), 1, 0);
								unk_0x4E65320BC9AD521C(unk_0x3C6C6327BA564AEE(Local_82.f_2[iParam0 /*26*/].f_1), true);
								unk_0xD3D9D7C84656DAE5(unk_0x3C6C6327BA564AEE(Local_82.f_2[iParam0 /*26*/].f_1), Global_1575018);
								unk_0x617FDF8FC3AB369D(unk_0x3C6C6327BA564AEE(Local_82.f_2[iParam0 /*26*/].f_1), 1, iLocal_89);
								unk_0x44EEDB6E2FB6904F(unk_0x3C6C6327BA564AEE(Local_82.f_2[iParam0 /*26*/].f_1), true);
								unk_0xBE20AB8238688965(&(Local_82.f_107), iParam0);
							}
						}
					}
				}
			}
			break;
		
		case 1:
			if (!unk_0x3D70CCF2C9B362CD(Local_82.f_2[iParam0 /*26*/].f_1))
			{
				if (unk_0xCFED0F4D63A92A70(1))
				{
					iVar1 = Local_82.f_2[iParam0 /*26*/].f_12;
					if (func_33(iVar1))
					{
						if (func_28(Local_82.f_2[iParam0 /*26*/].f_13, 0f, 0f, 0f, 0))
						{
							if (func_54(iParam0, &Var2, &uVar3, &uVar4))
							{
								Local_82.f_2[iParam0 /*26*/].f_13 = { Var2 };
								Local_82.f_2[iParam0 /*26*/].f_16 = uVar3;
							}
						}
						if (!func_28(Local_82.f_2[iParam0 /*26*/].f_13, 0f, 0f, 0f, 0))
						{
							if (func_41(&(Local_82.f_2[iParam0 /*26*/].f_1), 22, iVar1, Local_82.f_2[iParam0 /*26*/].f_13, Local_82.f_2[iParam0 /*26*/].f_16, 1, 1, 1))
							{
								unk_0xDAE36360F0F8C1ED(unk_0x3C6C6327BA564AEE(Local_82.f_2[iParam0 /*26*/].f_1), true);
								unk_0x82FF25D1808866E5(unk_0x3C6C6327BA564AEE(Local_82.f_2[iParam0 /*26*/].f_1), 1, 0);
								unk_0x4E65320BC9AD521C(unk_0x3C6C6327BA564AEE(Local_82.f_2[iParam0 /*26*/].f_1), true);
								unk_0xD3D9D7C84656DAE5(unk_0x3C6C6327BA564AEE(Local_82.f_2[iParam0 /*26*/].f_1), Global_1575018);
								unk_0x617FDF8FC3AB369D(unk_0x3C6C6327BA564AEE(Local_82.f_2[iParam0 /*26*/].f_1), 1, iLocal_89);
								unk_0x44EEDB6E2FB6904F(unk_0x3C6C6327BA564AEE(Local_82.f_2[iParam0 /*26*/].f_1), true);
								unk_0xBE20AB8238688965(&(Local_82.f_107), iParam0);
							}
						}
					}
				}
			}
			break;
		
		case 2:
			if (!unk_0x3D70CCF2C9B362CD(Local_82.f_2[iParam0 /*26*/].f_1))
			{
				if (unk_0xCFED0F4D63A92A70(1))
				{
					iVar1 = Local_82.f_2[iParam0 /*26*/].f_12;
					if (func_33(iVar1))
					{
						if (func_28(Local_82.f_2[iParam0 /*26*/].f_13, 0f, 0f, 0f, 0))
						{
							if (func_54(iParam0, &Var2, &uVar3, &uVar4))
							{
								Local_82.f_2[iParam0 /*26*/].f_13 = { Var2 };
								Local_82.f_2[iParam0 /*26*/].f_16 = uVar3;
								Local_82.f_2[iParam0 /*26*/].f_22 = uVar4;
								func_53(Var2);
							}
						}
						if (!func_28(Local_82.f_2[iParam0 /*26*/].f_13, 0f, 0f, 0f, 0))
						{
							if (func_41(&(Local_82.f_2[iParam0 /*26*/].f_1), 22, iVar1, Local_82.f_2[iParam0 /*26*/].f_13, Local_82.f_2[iParam0 /*26*/].f_16, 1, 1, 1))
							{
								unk_0xDAE36360F0F8C1ED(unk_0x3C6C6327BA564AEE(Local_82.f_2[iParam0 /*26*/].f_1), true);
								unk_0x82FF25D1808866E5(unk_0x3C6C6327BA564AEE(Local_82.f_2[iParam0 /*26*/].f_1), 1, 0);
								unk_0x4E65320BC9AD521C(unk_0x3C6C6327BA564AEE(Local_82.f_2[iParam0 /*26*/].f_1), true);
								unk_0xD3D9D7C84656DAE5(unk_0x3C6C6327BA564AEE(Local_82.f_2[iParam0 /*26*/].f_1), Global_1575018);
								unk_0x617FDF8FC3AB369D(unk_0x3C6C6327BA564AEE(Local_82.f_2[iParam0 /*26*/].f_1), 1, iLocal_89);
								unk_0x44EEDB6E2FB6904F(unk_0x3C6C6327BA564AEE(Local_82.f_2[iParam0 /*26*/].f_1), true);
								unk_0x73745F8F1D07995D(unk_0x3C6C6327BA564AEE(Local_82.f_2[iParam0 /*26*/].f_1), 1);
								unk_0x694113444F21E39F(unk_0x3C6C6327BA564AEE(Local_82.f_2[iParam0 /*26*/].f_1), 42, true);
								unk_0x17253AF44F6ED2DA(unk_0x3C6C6327BA564AEE(Local_82.f_2[iParam0 /*26*/].f_1), 1);
								unk_0x6673CC701BC8E9C1(unk_0x3C6C6327BA564AEE(Local_82.f_2[iParam0 /*26*/].f_1), 11, true);
								unk_0x6673CC701BC8E9C1(unk_0x3C6C6327BA564AEE(Local_82.f_2[iParam0 /*26*/].f_1), 44, true);
								unk_0x38CCFC7E1952A745(unk_0x3C6C6327BA564AEE(Local_82.f_2[iParam0 /*26*/].f_1), 1);
								unk_0x92BD213E6A0E666B(unk_0x3C6C6327BA564AEE(Local_82.f_2[iParam0 /*26*/].f_1), joaat("weapon_pistol"), 99999999, false, true);
								fVar7 = func_52(iParam0);
								unk_0x3D7F49DF8C5586D8(unk_0x3C6C6327BA564AEE(Local_82.f_2[iParam0 /*26*/].f_1), Local_82.f_2[iParam0 /*26*/].f_13, fVar7, 0, 0);
								unk_0x694113444F21E39F(unk_0x3C6C6327BA564AEE(Local_82.f_2[iParam0 /*26*/].f_1), 132, true);
								unk_0x694113444F21E39F(unk_0x3C6C6327BA564AEE(Local_82.f_2[iParam0 /*26*/].f_1), 281, true);
								iVar5 = func_51();
								unk_0x16E50383DEE2A560(unk_0x3C6C6327BA564AEE(Local_82.f_2[iParam0 /*26*/].f_1), iVar5);
								unk_0x697DA7132EE43ABC(unk_0x3C6C6327BA564AEE(Local_82.f_2[iParam0 /*26*/].f_1), iVar5, 0);
								iVar6 = func_50();
								unk_0xA1836510046FE87B(unk_0x3C6C6327BA564AEE(Local_82.f_2[iParam0 /*26*/].f_1), iVar6);
								unk_0xF94DFEAE3DD1EE7E(unk_0x3C6C6327BA564AEE(Local_82.f_2[iParam0 /*26*/].f_1), func_49());
								unk_0xA5EAD2ACE2C8BBB2(unk_0x3C6C6327BA564AEE(Local_82.f_2[iParam0 /*26*/].f_1), true, 1);
								unk_0xBE20AB8238688965(&(Local_82.f_107), iParam0);
							}
						}
					}
				}
			}
			break;
	}
	return 0;
}

int func_49()
{
	return round(Global_262145.f_15028);
}

int func_50()
{
	return 100;
}

var func_51()
{
	return Global_262145.f_15027;
}

float func_52(int iParam0)
{
	if (func_28(Local_82.f_2[iParam0 /*26*/].f_13, -1597.604f, 3083.673f, 31.5661f, 0))
	{
		return 10f;
	}
	return 3f;
}

void func_53(struct<3> Param0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = -1;
	iVar1 = 0;
	while (iVar1 < 5)
	{
		if (iVar0 == -1)
		{
			if (!unk_0xCE990E643CD9D0E5(Local_82.f_871, iVar1))
			{
				iVar0 = iVar1;
			}
		}
		iVar1++;
	}
	if (iVar0 < 0)
	{
		return;
	}
	if (func_28(Param0, -1596.399f, 3058.814f, 31.5661f, 0))
	{
		Local_82.f_865[iVar0] = unk_0xC08A186299DFDA0A(-1631.312f, 3027.889f, 30.8859f, -1560.55f, 3137.933f, 33.9384f, 1, 1, 1, 1);
		unk_0xBE20AB8238688965(&(Local_82.f_871), iVar0);
	}
	if (func_28(Param0, 2328.066f, 2576.558f, 45.6677f, 0))
	{
		Local_82.f_865[iVar0] = unk_0xC08A186299DFDA0A(2266.34f, 2486.074f, 54.976f, 2413.662f, 2679.982f, 43.5461f, 1, 1, 1, 1);
		unk_0xBE20AB8238688965(&(Local_82.f_871), iVar0);
	}
	if (func_28(Param0, -46.8187f, 1946.659f, 189.5608f, 0))
	{
		Local_82.f_865[iVar0] = unk_0xC08A186299DFDA0A(-65.1142f, 1905.577f, 194.9851f, -20.5564f, 2013.468f, 171.5573f, 1, 1, 1, 1);
		unk_0xBE20AB8238688965(&(Local_82.f_871), iVar0);
	}
}

int func_54(int iParam0, var uParam1, var uParam2, var uParam3)
{
	int iVar0;
	
	switch (Local_82.f_2[iParam0 /*26*/])
	{
		case 1:
			iVar0 = unk_0x344C570D6F8700DF(0, Local_82.f_122);
			if (!func_28(Local_82.f_123[iVar0 /*36*/], 0f, 0f, 0f, 0))
			{
				if (func_55(Local_82.f_123[iVar0 /*36*/], 1086324736, 1065353216, 1065353216, 1084227584, 1, 1, 1, 1123024896, 0, -1, 1, 0, 0, 0, 0, 0))
				{
					*uParam1 = { Local_82.f_123[iVar0 /*36*/] };
					*uParam2 = Local_82.f_123[iVar0 /*36*/].f_3;
					Local_82.f_123[iVar0 /*36*/] = { 0f, 0f, 0f };
					return 1;
				}
			}
			break;
		
		case 2:
			iVar0 = unk_0x344C570D6F8700DF(0, Local_82.f_122);
			if (!func_28(Local_82.f_123[iVar0 /*36*/], 0f, 0f, 0f, 0))
			{
				if (func_55(Local_82.f_123[iVar0 /*36*/], 1086324736, 1065353216, 1065353216, 1084227584, 1, 1, 1, 1123024896, 0, -1, 1, 0, 0, 0, 0, 0))
				{
					*uParam1 = { Local_82.f_123[iVar0 /*36*/] };
					*uParam2 = Local_82.f_123[iVar0 /*36*/].f_3;
					*uParam3 = iVar0;
					Local_82.f_123[iVar0 /*36*/] = { 0f, 0f, 0f };
					return 1;
				}
			}
			break;
		
		case 0:
			iVar0 = unk_0x344C570D6F8700DF(0, 10);
			if (!func_28(Local_82.f_484[iVar0 /*36*/], 0f, 0f, 0f, 0))
			{
				if (func_55(Local_82.f_484[iVar0 /*36*/], 1086324736, 1065353216, 1065353216, 1084227584, 1, 1, 1, 1123024896, 0, -1, 1, 0, 0, 0, 0, 0))
				{
					*uParam1 = { Local_82.f_484[iVar0 /*36*/] };
					*uParam2 = Local_82.f_484[iVar0 /*36*/].f_3;
					Local_82.f_484[iVar0 /*36*/] = { 0f, 0f, 0f };
					return 1;
				}
			}
			break;
	}
	return 0;
}

int func_55(struct<3> Param0, float fParam1, float fParam2, float fParam3, float fParam4, int iParam5, bool bParam6, int iParam7, float fParam8, bool bParam9, int iParam10, bool bParam11, float fParam12, bool bParam13, float fParam14, bool bParam15, int iParam16)
{
	Global_2405074.f_2 = 0;
	if (fParam1 > 0f)
	{
		if (unk_0x160FF3CA76647557(Param0, fParam1))
		{
			return 0;
		}
	}
	if (fParam2 > 0f)
	{
		if (unk_0x11C93463B5150761(Param0.x, Param0.f_1, (Param0.f_2 + 1f), fParam2) || unk_0x11C93463B5150761(Param0, fParam2))
		{
			return 0;
		}
	}
	if (fParam3 > 0f)
	{
		if (unk_0xF666C0F9CA439368(Param0, fParam3, iParam16))
		{
			return 0;
		}
	}
	Global_2405074.f_2++;
	if (bParam11)
	{
		if (unk_0x7B4B68137DA4DF12(Param0, 2.5f) > 0)
		{
			return 0;
		}
	}
	Global_2405074.f_2++;
	if (fParam12 > 0f)
	{
		if (func_62(Param0, fParam12, 1, 1, bParam13, bParam15, bParam9, bParam13))
		{
			return 0;
		}
	}
	Global_2405074.f_2++;
	if (bParam6)
	{
		if (fParam4 > 0f)
		{
			if (func_56(Param0, fParam4, iParam5, iParam7, fParam8, bParam9, iParam10, fParam14, bParam15))
			{
				return 0;
			}
		}
	}
	Global_2405074.f_2++;
	return 1;
}

int func_56(struct<3> Param0, float fParam1, int iParam2, int iParam3, float fParam4, bool bParam5, int iParam6, float fParam7, bool bParam8)
{
	int iVar0;
	int iVar1;
	float fVar2;
	
	if (iParam2 && !bParam5)
	{
		if (func_1031(unk_0x460153A63B9477BC(), 1, 1))
		{
			if (!unk_0x03DB5C6AABF8DA46())
			{
				fVar2 = fParam4;
				if (fParam7 > 0f)
				{
					fVar2 = fParam7;
				}
				if (unk_0x272784C60C397DB6(func_58(unk_0x460153A63B9477BC()), Param0, true) <= (fVar2 + fParam1))
				{
					if (unk_0x9A70B1BD2A5BA09C(Param0, fParam1))
					{
						return 1;
					}
				}
			}
		}
	}
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar1 = iVar0;
		if (func_1031(iVar1, 1, 1))
		{
			if (!func_17(iVar1, 0) && unk_0x56B60AE958412839(unk_0x460153A63B9477BC(), iVar1))
			{
				if (iParam2 == 1 || (iParam2 == 0 && iVar1 != unk_0x460153A63B9477BC()))
				{
					if ((func_57(iVar1) || !bParam8) && !Global_2425869[iVar1 /*443*/].f_263)
					{
						fVar2 = fParam4;
						if (fParam7 > 0f)
						{
							if (!unk_0x6CC163E30ECE0790(iVar1) == -1)
							{
								if (unk_0x6CC163E30ECE0790(iVar1) == unk_0x6CC163E30ECE0790(unk_0x460153A63B9477BC()))
								{
									fVar2 = fParam7;
								}
							}
						}
						if (!bParam5)
						{
							if ((iParam3 || (iParam3 == 0 && unk_0x6CC163E30ECE0790(iVar1) != unk_0x6CC163E30ECE0790(unk_0x460153A63B9477BC()))) || unk_0x6CC163E30ECE0790(iVar1) == -1)
							{
								if (unk_0x272784C60C397DB6(func_58(iVar1), Param0, true) <= (fVar2 + fParam1))
								{
									if (unk_0xC3BA5B8F1CF9CD22(iVar1, Param0, fParam1))
									{
										return 1;
									}
								}
							}
						}
						else if (unk_0x6CC163E30ECE0790(iVar1) != iParam6 || unk_0x6CC163E30ECE0790(iVar1) == -1)
						{
							if (unk_0x272784C60C397DB6(func_58(iVar1), Param0, true) <= (fVar2 + fParam1))
							{
								if (unk_0xC3BA5B8F1CF9CD22(iVar1, Param0, fParam1))
								{
									return 1;
								}
							}
						}
					}
				}
			}
		}
		iVar0++;
	}
	return 0;
}

int func_57(int iParam0)
{
	if (unk_0xEB7D4DA50142DE0A(unk_0x1FA7B77001D60F9D(iParam0)) || Global_2425869[iParam0 /*443*/].f_249)
	{
		return 1;
	}
	return 0;
}

Vector3 func_58(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if ((func_61() && Global_1590682[iVar0 /*883*/].f_854) && !func_60(Global_1590682[iVar0 /*883*/].f_855))
	{
		return Global_1590682[iVar0 /*883*/].f_855;
	}
	return func_59(iParam0);
}

Vector3 func_59(int iParam0)
{
	return unk_0x3E4D3CCC220BDFB1(unk_0x1FA7B77001D60F9D(iParam0), false);
}

int func_60(struct<3> Param0)
{
	if ((Param0.x == 0f && Param0.f_1 == 0f) && Param0.f_2 == 0f)
	{
		return 1;
	}
	return 0;
}

bool func_61()
{
	return Global_2451787.f_18;
}

int func_62(struct<3> Param0, float fParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, int iParam6, var uParam7)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar1 = iVar0;
		if ((iParam6 == 1 && unk_0x460153A63B9477BC() != iVar1) || iParam6 == 0)
		{
			if (func_1031(iVar1, bParam2, bParam3))
			{
				if (unk_0x56B60AE958412839(unk_0x460153A63B9477BC(), iVar1))
				{
					if (!bParam5 || (!unk_0x5AEB5DDFFAD43CA5(unk_0x1FA7B77001D60F9D(iVar1)) && func_57(iVar1)))
					{
						if ((!bParam4 || (bParam4 == 1 && unk_0x6CC163E30ECE0790(unk_0x460153A63B9477BC()) != unk_0x6CC163E30ECE0790(iVar1))) || unk_0x6CC163E30ECE0790(unk_0x460153A63B9477BC()) == -1)
						{
							if (((unk_0x6CC163E30ECE0790(unk_0x460153A63B9477BC()) == -1 && uParam7) && bParam4) && func_63(iVar1))
							{
							}
							else if (unk_0xAE06B9E39EBDE049(unk_0x1FA7B77001D60F9D(iVar1)))
							{
								if (unk_0x272784C60C397DB6(func_59(iVar1), Param0, true) < fParam1)
								{
									return 1;
								}
							}
						}
					}
				}
			}
		}
		iVar0++;
	}
	return 0;
}

int func_63(int iParam0)
{
	if (func_68(unk_0x460153A63B9477BC(), iParam0))
	{
		return 1;
	}
	Global_2515173 = { func_67(iParam0) };
	if (unk_0x78A7795C9C51946D(&Global_2515173))
	{
		return 1;
	}
	if (func_64(unk_0x460153A63B9477BC(), iParam0))
	{
		return 1;
	}
	return 0;
}

int func_64(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = func_66(iParam0);
	if (!iVar0 == func_65())
	{
		if (iVar0 == func_66(iParam1))
		{
			return 1;
		}
	}
	return 0;
}

int func_65()
{
	return -1;
}

int func_66(int iParam0)
{
	if (iParam0 != func_65())
	{
		return Global_1630317[iParam0 /*595*/].f_11;
	}
	return func_65();
}

struct<13> func_67(int iParam0)
{
	struct<13> Var0;
	
	unk_0x2BDD80E79441BD36(iParam0, &Var0, 13);
	return Var0;
}

int func_68(int iParam0, int iParam1)
{
	if (unk_0xE2FBD13450B2DA21())
	{
		Global_2515173 = { func_67(iParam0) };
		Global_2515186 = { func_67(iParam1) };
		if (unk_0xBF9EC1ED7E386622(&Global_2515173))
		{
			if (unk_0xBF9EC1ED7E386622(&Global_2515186))
			{
				unk_0x192BD21E18525C69(&Global_2515103, 35, &Global_2515173);
				unk_0x192BD21E18525C69(&Global_2515138, 35, &Global_2515186);
				if (Global_2515103 == Global_2515138)
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

void func_69()
{
	Local_82.f_2[0 /*26*/] = 2;
	Local_82.f_2[0 /*26*/].f_11 = joaat("baller3");
	Local_82.f_2[0 /*26*/].f_12 = joaat("a_m_y_business_03");
	Local_82.f_2[1 /*26*/] = 2;
	Local_82.f_2[1 /*26*/].f_11 = joaat("dubsta");
	Local_82.f_2[1 /*26*/].f_12 = joaat("a_m_y_business_03");
	Local_82.f_2[2 /*26*/] = 0;
	Local_82.f_2[2 /*26*/].f_11 = joaat("cog552");
	Local_82.f_2[2 /*26*/].f_12 = joaat("a_m_y_business_03");
	Local_82.f_2[3 /*26*/] = 0;
	Local_82.f_2[3 /*26*/].f_11 = joaat("baller5");
	Local_82.f_2[3 /*26*/].f_12 = joaat("a_m_y_business_03");
}

void func_70()
{
	func_71();
	if (Local_82.f_122 == 0)
	{
		if (Local_82.f_121 == 0)
		{
			Local_82.f_122 = 10;
		}
		else
		{
			Local_82.f_122 = 9;
		}
	}
	if (unk_0xCE990E643CD9D0E5(Local_82.f_1, 4))
	{
		return;
	}
	switch (Local_82.f_121)
	{
		case 0:
			Local_82.f_123[0 /*36*/] = { -106.8009f, 331.5984f, 111.7262f };
			Local_82.f_123[0 /*36*/].f_3 = 45.1956f;
			Local_82.f_123[0 /*36*/].f_4[0 /*3*/] = { -106.2522f, 353.0331f, 111.8849f };
			Local_82.f_123[0 /*36*/].f_4[1 /*3*/] = { -104.2692f, 356.5287f, 111.8858f };
			Local_82.f_123[0 /*36*/].f_4[2 /*3*/] = { -108.1528f, 347.4515f, 111.8858f };
			Local_82.f_123[1 /*36*/] = { -1193.408f, -218.8712f, 36.9448f };
			Local_82.f_123[1 /*36*/].f_3 = 136.8281f;
			Local_82.f_123[1 /*36*/].f_4[0 /*3*/] = { -1174.724f, -238.3963f, 36.9385f };
			Local_82.f_123[1 /*36*/].f_4[1 /*3*/] = { -1201.011f, -231.2006f, 36.948f };
			Local_82.f_123[1 /*36*/].f_4[2 /*3*/] = { -1162.52f, -229.3399f, 36.9564f };
			Local_82.f_123[2 /*36*/] = { -1646.583f, -1102.801f, 12.0181f };
			Local_82.f_123[2 /*36*/].f_3 = 312.8899f;
			Local_82.f_123[2 /*36*/].f_4[0 /*3*/] = { -1643.292f, -1098.154f, 12.0207f };
			Local_82.f_123[2 /*36*/].f_4[1 /*3*/] = { -1638.825f, -1093.105f, 12.0269f };
			Local_82.f_123[3 /*36*/] = { 1171.307f, -398.4046f, 70.5896f };
			Local_82.f_123[3 /*36*/].f_3 = 252.8763f;
			Local_82.f_123[3 /*36*/].f_4[0 /*3*/] = { 1180.066f, -405.9521f, 66.7792f };
			Local_82.f_123[3 /*36*/].f_4[1 /*3*/] = { 1176.999f, -397.1275f, 66.928f };
			Local_82.f_123[4 /*36*/] = { 929.1267f, -1255.108f, 24.4835f };
			Local_82.f_123[4 /*36*/].f_3 = 27.8866f;
			Local_82.f_123[4 /*36*/].f_4[0 /*3*/] = { 943.2654f, -1244.3f, 24.6881f };
			Local_82.f_123[4 /*36*/].f_4[1 /*3*/] = { 939.8859f, -1229.958f, 24.652f };
			Local_82.f_123[4 /*36*/].f_4[2 /*3*/] = { 920.2808f, -1259.097f, 24.5269f };
			Local_82.f_123[5 /*36*/] = { 883.0366f, -2166.188f, 31.2735f };
			Local_82.f_123[5 /*36*/].f_3 = 186.7157f;
			Local_82.f_123[5 /*36*/].f_4[0 /*3*/] = { 871.2222f, -2167.22f, 31.2735f };
			Local_82.f_123[5 /*36*/].f_4[1 /*3*/] = { 872.3619f, -2199.464f, 29.5194f };
			Local_82.f_123[5 /*36*/].f_4[2 /*3*/] = { 888.3759f, -2169.164f, 35.2714f };
			Local_82.f_123[6 /*36*/] = { -110.3279f, -2705.599f, 5.0099f };
			Local_82.f_123[6 /*36*/].f_3 = 0.3174f;
			Local_82.f_123[6 /*36*/].f_4[0 /*3*/] = { -133.4379f, -2700.109f, 5.0103f };
			Local_82.f_123[6 /*36*/].f_4[1 /*3*/] = { -127.772f, -2681.304f, 5.0274f };
			Local_82.f_123[6 /*36*/].f_4[2 /*3*/] = { -112.7492f, -2673.062f, 5.006f };
			Local_82.f_123[6 /*36*/].f_14[2] = 180f;
			Local_82.f_123[7 /*36*/] = { -520.2162f, 163.9754f, 70.0812f };
			Local_82.f_123[7 /*36*/].f_3 = 358.2249f;
			Local_82.f_123[7 /*36*/].f_4[0 /*3*/] = { -508.6846f, 166.9421f, 69.9316f };
			Local_82.f_123[7 /*36*/].f_4[1 /*3*/] = { -495.0937f, 169.297f, 69.9316f };
			Local_82.f_123[7 /*36*/].f_18[0 /*3*/] = { -505.5487f, 166.7718f, 69.9316f };
			Local_82.f_123[7 /*36*/].f_28[0] = 85.9643f;
			Local_82.f_123[7 /*36*/].f_32[0] = joaat("baller5");
			Local_82.f_123[7 /*36*/].f_18[1 /*3*/] = { -498.6042f, 169.8883f, 69.9316f };
			Local_82.f_123[7 /*36*/].f_28[1] = 263.6038f;
			Local_82.f_123[7 /*36*/].f_32[1] = joaat("cog552");
			Local_82.f_123[8 /*36*/] = { -591.7915f, -1765.793f, 22.1854f };
			Local_82.f_123[9 /*36*/].f_3 = 241.2612f;
			Local_82.f_123[8 /*36*/].f_4[0 /*3*/] = { -593.1422f, -1779.995f, 21.8499f };
			Local_82.f_123[8 /*36*/].f_4[1 /*3*/] = { -584.6111f, -1774.981f, 21.62f };
			Local_82.f_123[8 /*36*/].f_4[2 /*3*/] = { -580.9441f, -1769.818f, 22.1854f };
			Local_82.f_123[8 /*36*/].f_18[0 /*3*/] = { -582.6792f, -1777.695f, 21.6132f };
			Local_82.f_123[8 /*36*/].f_28[0] = 145.1394f;
			Local_82.f_123[8 /*36*/].f_32[0] = joaat("baller5");
			Local_82.f_123[9 /*36*/] = { 306.2488f, -1000.808f, 28.3108f };
			Local_82.f_123[9 /*36*/].f_3 = 63.2117f;
			Local_82.f_123[9 /*36*/].f_4[0 /*3*/] = { 314.583f, -998.1405f, 28.1613f };
			Local_82.f_123[9 /*36*/].f_4[1 /*3*/] = { 300.5795f, -997.6307f, 28.1986f };
			Local_82.f_123[9 /*36*/].f_18[0 /*3*/] = { 312.527f, -1000.571f, 28.2617f };
			Local_82.f_123[9 /*36*/].f_28[0] = 148.5301f;
			Local_82.f_123[9 /*36*/].f_32[0] = joaat("baller5");
			Local_82.f_123[9 /*36*/].f_18[1 /*3*/] = { 303.729f, -1000.568f, 28.3096f };
			Local_82.f_123[9 /*36*/].f_28[1] = 44.2995f;
			Local_82.f_123[9 /*36*/].f_32[1] = joaat("cog552");
			Local_82.f_484[0 /*36*/] = { 533.1884f, -136.2944f, 58.6519f };
			Local_82.f_484[0 /*36*/].f_3 = 179.583f;
			Local_82.f_484[1 /*36*/] = { 774.9319f, -1329.652f, 25.243f };
			Local_82.f_484[1 /*36*/].f_3 = 268.6526f;
			Local_82.f_484[2 /*36*/] = { 999.0349f, -3054.079f, 4.9011f };
			Local_82.f_484[2 /*36*/].f_3 = 90.3809f;
			Local_82.f_484[3 /*36*/] = { 329.7707f, -1750.917f, 28.2917f };
			Local_82.f_484[3 /*36*/].f_3 = 229.4149f;
			Local_82.f_484[4 /*36*/] = { -1000.175f, -2098.133f, 11.3367f };
			Local_82.f_484[4 /*36*/].f_3 = 141.0009f;
			Local_82.f_484[5 /*36*/] = { -712.6369f, -880.1467f, 22.5928f };
			Local_82.f_484[5 /*36*/].f_3 = 359.1567f;
			Local_82.f_484[6 /*36*/] = { -1482.46f, -498.4642f, 31.8069f };
			Local_82.f_484[6 /*36*/].f_3 = 212.8829f;
			Local_82.f_484[7 /*36*/] = { -1357.325f, 579.7441f, 130.483f };
			Local_82.f_484[7 /*36*/].f_3 = 257.1156f;
			Local_82.f_484[8 /*36*/] = { -555.6091f, 55.0564f, 48.3253f };
			Local_82.f_484[8 /*36*/].f_3 = 174.0491f;
			Local_82.f_484[9 /*36*/] = { -84.1599f, -1024.114f, 27.2205f };
			Local_82.f_484[9 /*36*/].f_3 = 245.895f;
			break;
		
		case 1:
			Local_82.f_123[0 /*36*/] = { 1447.271f, 3750.165f, 30.9342f };
			Local_82.f_123[0 /*36*/].f_3 = 225.1522f;
			Local_82.f_123[0 /*36*/].f_4[0 /*3*/] = { 1440.142f, 3753.75f, 30.9407f };
			Local_82.f_123[0 /*36*/].f_4[1 /*3*/] = { 1455.688f, 3760.388f, 31.0543f };
			Local_82.f_123[1 /*36*/] = { -46.8187f, 1946.659f, 189.5608f };
			Local_82.f_123[9 /*36*/].f_3 = 128.6356f;
			Local_82.f_123[1 /*36*/].f_4[0 /*3*/] = { -52.1263f, 1953.13f, 189.1861f };
			Local_82.f_123[1 /*36*/].f_4[1 /*3*/] = { -63.1502f, 1951.946f, 189.1861f };
			Local_82.f_123[1 /*36*/].f_4[2 /*3*/] = { -59.1516f, 1964.074f, 189.1861f };
			Local_82.f_123[2 /*36*/] = { 2002.527f, 4978.516f, 40.5969f };
			Local_82.f_123[2 /*36*/].f_3 = 214.3712f;
			Local_82.f_123[2 /*36*/].f_4[0 /*3*/] = { 2013.281f, 4976.885f, 40.4305f };
			Local_82.f_123[2 /*36*/].f_4[1 /*3*/] = { 2025.947f, 4978.383f, 40.1376f };
			Local_82.f_123[2 /*36*/].f_4[2 /*3*/] = { 2000.83f, 4990.36f, 40.4477f };
			Local_82.f_123[3 /*36*/] = { 2939.418f, 4623.833f, 47.7256f };
			Local_82.f_123[3 /*36*/].f_3 = 151.8443f;
			Local_82.f_123[3 /*36*/].f_4[0 /*3*/] = { 2930.615f, 4620.496f, 47.7246f };
			Local_82.f_123[3 /*36*/].f_4[1 /*3*/] = { 2946.911f, 4629.479f, 47.7251f };
			Local_82.f_123[3 /*36*/].f_4[2 /*3*/] = { 2936.956f, 4609.8f, 47.7277f };
			Local_82.f_123[4 /*36*/] = { 519.5331f, 3105.464f, 39.5241f };
			Local_82.f_123[4 /*36*/].f_3 = 186.7534f;
			Local_82.f_123[4 /*36*/].f_4[0 /*3*/] = { 518.6117f, 3090.195f, 39.4652f };
			Local_82.f_123[4 /*36*/].f_4[1 /*3*/] = { 532.1984f, 3083.56f, 39.4652f };
			Local_82.f_123[5 /*36*/] = { -1597.604f, 3083.673f, 31.5661f };
			Local_82.f_123[5 /*36*/].f_3 = 101.7629f;
			Local_82.f_123[5 /*36*/].f_4[0 /*3*/] = { -1601.259f, 3078.785f, 31.5661f };
			Local_82.f_123[5 /*36*/].f_4[1 /*3*/] = { -1609.109f, 3080.765f, 31.5661f };
			Local_82.f_123[5 /*36*/].f_4[2 /*3*/] = { -1598.4f, 3070.091f, 32.6629f };
			Local_82.f_123[6 /*36*/] = { 1470.055f, 6550.666f, 13.9091f };
			Local_82.f_123[6 /*36*/].f_3 = 352.4692f;
			Local_82.f_123[6 /*36*/].f_4[0 /*3*/] = { 1459.452f, 6546.819f, 13.6304f };
			Local_82.f_123[6 /*36*/].f_4[1 /*3*/] = { 1460.641f, 6562.202f, 12.7644f };
			Local_82.f_123[6 /*36*/].f_18[0 /*3*/] = { 1459.178f, 6544.879f, 13.713f };
			Local_82.f_123[6 /*36*/].f_28[0] = 88.1481f;
			Local_82.f_123[6 /*36*/].f_32[0] = joaat("baller5");
			Local_82.f_123[6 /*36*/].f_18[1 /*3*/] = { 1460.212f, 6560.179f, 12.9444f };
			Local_82.f_123[6 /*36*/].f_28[1] = 97.3821f;
			Local_82.f_123[6 /*36*/].f_32[1] = joaat("cog552");
			Local_82.f_123[7 /*36*/] = { 2328.066f, 2576.558f, 45.6677f };
			Local_82.f_123[7 /*36*/].f_3 = 335.1092f;
			Local_82.f_123[7 /*36*/].f_4[0 /*3*/] = { 2339.745f, 2569.616f, 46.7255f };
			Local_82.f_123[7 /*36*/].f_4[1 /*3*/] = { 2356.385f, 2593.859f, 46.1125f };
			Local_82.f_123[7 /*36*/].f_4[2 /*3*/] = { 2338.935f, 2549.453f, 45.6677f };
			Local_82.f_123[8 /*36*/] = { -1600.295f, 5204.928f, 3.3151f };
			Local_82.f_123[8 /*36*/].f_3 = 296.2108f;
			Local_82.f_123[8 /*36*/].f_4[0 /*3*/] = { -1587.408f, 5193.21f, 3.3151f };
			Local_82.f_123[8 /*36*/].f_4[1 /*3*/] = { -1576.558f, 5176.321f, 18.7159f };
			Local_82.f_123[8 /*36*/].f_4[2 /*3*/] = { -1595.553f, 5206.593f, 3.3151f };
			Local_82.f_123[8 /*36*/].f_18[0 /*3*/] = { -1575.924f, 5170.995f, 18.5541f };
			Local_82.f_123[8 /*36*/].f_28[0] = 312.3839f;
			Local_82.f_123[8 /*36*/].f_32[0] = joaat("baller5");
			Local_82.f_484[0 /*36*/] = { 1514.526f, 1730.14f, 108.9447f };
			Local_82.f_484[0 /*36*/].f_3 = 87.1735f;
			Local_82.f_484[1 /*36*/] = { 2028.331f, 3444.544f, 42.9909f };
			Local_82.f_484[1 /*36*/].f_3 = 251.7144f;
			Local_82.f_484[2 /*36*/] = { 392.7668f, 3588.585f, 32.2922f };
			Local_82.f_484[2 /*36*/].f_3 = 351.6842f;
			Local_82.f_484[3 /*36*/] = { 200.9893f, 2351.4f, 72.5299f };
			Local_82.f_484[3 /*36*/].f_3 = 297.6164f;
			Local_82.f_484[4 /*36*/] = { -2337.792f, 4041.646f, 29.414f };
			Local_82.f_484[4 /*36*/].f_3 = 346.6894f;
			Local_82.f_484[5 /*36*/] = { -742.3113f, 5537.667f, 32.4857f };
			Local_82.f_484[5 /*36*/].f_3 = 30.2635f;
			Local_82.f_484[6 /*36*/] = { 1586.277f, 6445.438f, 24.1337f };
			Local_82.f_484[6 /*36*/].f_3 = 155.2497f;
			Local_82.f_484[7 /*36*/] = { 2574.845f, 5086.147f, 43.6593f };
			Local_82.f_484[7 /*36*/].f_3 = 11.7033f;
			Local_82.f_484[8 /*36*/] = { 362.3407f, 4431.755f, 61.9071f };
			Local_82.f_484[8 /*36*/].f_3 = 290.5464f;
			Local_82.f_484[9 /*36*/] = { -1906.661f, 1773.933f, 170.3475f };
			Local_82.f_484[9 /*36*/].f_3 = 113.551f;
			break;
	}
	unk_0xBE20AB8238688965(&(Local_82.f_1), 4);
}

var func_71()
{
	if (Local_82.f_121 != -1)
	{
		return Local_82.f_121;
	}
	if (Local_82.f_121 == -1)
	{
		if (unk_0x3E0F5858774E3D97(unk_0x3E4D3CCC220BDFB1(unk_0x9B0761B4C3EB8BC7(), false)) == -289320599)
		{
			Local_82.f_121 = 0;
		}
		else
		{
			Local_82.f_121 = 1;
		}
	}
	return Local_82.f_121;
}

int func_72(var uParam0)
{
	if (uParam0->f_1)
	{
		if (unk_0x44F29CF6A0675F4F(unk_0x624736CA66E14161(unk_0x6CAAB7E78B5D978A(), *uParam0)) >= 1000)
		{
			return 1;
		}
	}
	return 0;
}

void func_73(var uParam0)
{
	if (!uParam0->f_1)
	{
		if (unk_0xAFF96FDC3971E7EA())
		{
			func_7(uParam0, 0, 0);
		}
	}
}

void func_74()
{
}

void func_75()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (Local_82.f_119 != -1)
	{
		iVar0 = unk_0xF1110FE23C67293A(Local_82.f_119);
	}
	iVar1 = 0;
	while (iVar1 < unk_0xEFA28384DDD283E1())
	{
		if (unk_0xBD09DF93F957A0CF(unk_0x628A51AC66E80772(iVar1)))
		{
			iVar2 = unk_0x9019589211A13B02(unk_0x628A51AC66E80772(iVar1));
			if (!func_17(iVar2, 0))
			{
				if (iVar0 != func_65())
				{
					if (iVar2 == iVar0 || func_76(iVar2, iVar0, 1))
					{
						unk_0xEFBCE8F8316F89EA(5, Global_1574973[iVar1], Global_1575018);
						unk_0xEFBCE8F8316F89EA(5, Global_1575018, Global_1574973[iVar1]);
					}
				}
			}
		}
		iVar1++;
	}
}

int func_76(int iParam0, int iParam1, bool bParam2)
{
	if (iParam1 != func_65())
	{
		if (!bParam2)
		{
			if (func_77(iParam0, iParam1))
			{
				return 0;
			}
		}
		if (Global_1630317[iParam0 /*595*/].f_11 != func_65())
		{
			return iParam1 == Global_1630317[iParam0 /*595*/].f_11;
		}
	}
	return 0;
}

int func_77(int iParam0, int iParam1)
{
	if (iParam1 != func_65())
	{
		if (iParam0 != func_65())
		{
			if (Global_1630317[iParam0 /*595*/].f_11 != func_65())
			{
				if (Global_1630317[iParam0 /*595*/].f_11 == iParam0)
				{
					return iParam1 == iParam0;
				}
			}
		}
	}
	return 0;
}

void func_78()
{
	struct<3> Var0;
	int iVar1;
	float fVar2;
	
	if (func_917())
	{
		return;
	}
	if (!func_303())
	{
		return;
	}
	iVar1 = -1;
	fVar2 = func_151(&iVar1, 0);
	if (fVar2 <= 1600f)
	{
		if (!func_150(unk_0x460153A63B9477BC()))
		{
			if (!func_144())
			{
				func_133(0);
				unk_0x873FC7B9D84F77F0(false);
				unk_0xBE20AB8238688965(&iLocal_84, 18);
			}
		}
	}
	if (Local_82.f_119 > -1)
	{
		if (iVar1 > -1)
		{
			Var0 = { unk_0x3E4D3CCC220BDFB1(unk_0x3C6C6327BA564AEE(Local_82.f_2[iVar1 /*26*/].f_1), false) };
		}
	}
	if (!func_28(Var0, 0f, 0f, 0f, 0))
	{
		func_79(166, Var0, &uLocal_103, 1140457472, 1144750080, 0);
	}
}

void func_79(int iParam0, struct<3> Param1, var uParam2, float fParam3, float fParam4, int iParam5)
{
	float fVar0;
	float fVar1;
	
	if ((((func_132(unk_0x460153A63B9477BC()) && !func_131(unk_0x460153A63B9477BC())) && !unk_0xCE990E643CD9D0E5(Global_1630317[unk_0x460153A63B9477BC() /*595*/].f_1, 8)) && (func_130(unk_0x460153A63B9477BC()) || func_129(unk_0x460153A63B9477BC()))) || func_60(Param1))
	{
		return;
	}
	Global_1676119 = { Param1 };
	fVar0 = vdist(unk_0x3E4D3CCC220BDFB1(unk_0x9B0761B4C3EB8BC7(), false), Param1);
	func_125(iParam0, fVar0);
	if (unk_0xF0C12886E5C1B20E() && unk_0xCFB49FF4012D7C68() == 15)
	{
		if (func_124(unk_0x460153A63B9477BC()) || func_122(unk_0x460153A63B9477BC()))
		{
			if (!unk_0x9257D9337B908AFC(1344549371))
			{
				unk_0x16611E08D2E0FBE9(1344549371);
			}
		}
		else if (unk_0x9257D9337B908AFC(1344549371))
		{
			unk_0x9182C03E20E1D981(1344549371);
		}
	}
	if (fVar0 < fParam3)
	{
		if (!(func_121(unk_0x460153A63B9477BC(), 21) || func_121(unk_0x460153A63B9477BC(), 25)))
		{
			func_120(Param1, 1, 0);
		}
		if (!*uParam2 && func_1031(unk_0x460153A63B9477BC(), 1, 1))
		{
			*uParam2 = 1;
			if (func_119(iParam0))
			{
				unk_0x34FEEAC2548C3789(func_118(iParam0));
				if (func_117(iParam0, -1))
				{
					unk_0x53797676AD34A9AA(0);
					if (unk_0x1A3D0DF92BF7D8C4(unk_0x460153A63B9477BC()) > 0)
					{
						unk_0xCAD5C18968E57C30(unk_0x460153A63B9477BC(), 0, 1);
						unk_0x4B86C627B5EABFBF(unk_0x460153A63B9477BC(), 1);
					}
					unk_0xBE20AB8238688965(&(Global_1676119.f_3), 0);
				}
			}
			if (func_116(iParam0))
			{
				fVar1 = func_115(iParam0);
				if (fVar1 != 1f)
				{
					func_901(fVar1);
					unk_0xBE20AB8238688965(&(Global_1676119.f_3), 1);
				}
			}
			if (!Global_2391045)
			{
				if (func_114(iParam0) && func_124(unk_0x460153A63B9477BC()))
				{
					func_112(1);
					func_111(2);
				}
			}
			func_110(19);
		}
	}
	else
	{
		if (fVar0 > fParam4)
		{
			if (func_109(unk_0x460153A63B9477BC(), 19))
			{
				func_108(19);
			}
		}
		if (*uParam2 && func_1031(unk_0x460153A63B9477BC(), 1, 1))
		{
			*uParam2 = 0;
			if (func_119(iParam0))
			{
				if (unk_0xCE990E643CD9D0E5(Global_1676119.f_3, 0))
				{
					unk_0x34FEEAC2548C3789(1f);
					unk_0x53797676AD34A9AA(5);
					unk_0xD2459066EA58CE43(&(Global_1676119.f_3), 0);
				}
			}
			if (func_116(iParam0))
			{
				func_107();
				unk_0xD2459066EA58CE43(&(Global_1676119.f_3), 1);
			}
			if (iParam5 && !func_132(unk_0x460153A63B9477BC()))
			{
				if (func_105(unk_0x460153A63B9477BC()) != 152)
				{
					func_82();
				}
			}
			if (func_81(2))
			{
				func_112(0);
				func_80(2);
			}
		}
	}
}

void func_80(int iParam0)
{
	unk_0xD2459066EA58CE43(&(Global_2540384.f_5188.f_45), iParam0);
}

bool func_81(int iParam0)
{
	return unk_0xCE990E643CD9D0E5(Global_2540384.f_5188.f_45, iParam0);
}

void func_82()
{
	unk_0x13AF25746D6C3CA9(&(Global_2405074.f_24), &Global_2409333, 2);
	unk_0x13AF25746D6C3CA9(&(Global_2405074.f_26), &Global_2409335, 19);
	func_103();
	func_85(1, 1, 0);
	func_83();
}

void func_83()
{
	func_84(0, 0);
}

void func_84(int iParam0, int iParam1)
{
	Global_2405074.f_22 = iParam0;
	Global_2405074.f_23 = iParam1;
}

void func_85(bool bParam0, bool bParam1, bool bParam2)
{
	if (bParam1)
	{
		unk_0x13AF25746D6C3CA9(&(Global_2405074.f_45), &Global_2409354, 320);
	}
	else
	{
		Global_2405074.f_45 = { Global_2409354 };
		Global_2405074.f_45.f_49 = { Global_2409354.f_49 };
		Global_2405074.f_45.f_52 = Global_2409354.f_52;
		Global_2405074.f_45.f_53 = Global_2409354.f_53;
	}
	if (bParam0)
	{
		func_102();
	}
	if (!bParam2)
	{
		func_88(0, 1, 0, 1060320051, 1086324736, 1065353216, 1088421888, 1084227584, 0, 1066192077, 0, 0, 1, 0, 1109393408);
	}
	func_87(0);
	func_86();
}

void func_86()
{
	struct<6> Var0;
	
	if (Global_2405074.f_487.f_1 == unk_0x354AD085195C5FA6())
	{
		Global_2405074.f_487 = { Var0 };
	}
}

void func_87(bool bParam0)
{
	if (bParam0)
	{
		Global_2405074.f_707 = 0;
	}
	else
	{
		Global_2405074.f_707 = 1;
	}
}

void func_88(bool bParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14)
{
	if (bParam0)
	{
		if (func_101())
		{
			func_100();
		}
		Global_2405074.f_708.f_518 = unk_0x354AD085195C5FA6();
		Global_2405074.f_708.f_504 = iParam1;
		Global_2405074.f_708.f_505 = iParam2;
		Global_2405074.f_708.f_506 = iParam10;
		func_98();
		func_92(8, 0, 0, 0, 0);
		Global_2405074.f_708.f_507 = iParam11;
		Global_2405074.f_708.f_512 = iParam3;
		Global_2405074.f_708.f_513 = iParam4;
		Global_2405074.f_708.f_510 = iParam5;
		Global_2405074.f_708.f_511 = iParam6;
		Global_2405074.f_708.f_514 = iParam7;
		Global_2405074.f_708.f_515 = iParam8;
		Global_2405074.f_708.f_516 = iParam9;
		Global_2405074.f_708.f_517 = iParam14;
		Global_2405074.f_708.f_508 = iParam12;
		Global_2405074.f_708.f_509 = iParam13;
		Global_2405074.f_1747 = 1;
	}
	else
	{
		func_89();
	}
}

void func_89()
{
	if (func_101() && !func_91())
	{
		func_100();
	}
	if (func_91())
	{
		func_90();
	}
	else
	{
		func_98();
		func_92(0, 0, 0, 0, 0);
		Global_2405074.f_1747 = 0;
		Global_2405074.f_1746 = 0;
	}
}

void func_90()
{
	unk_0x13AF25746D6C3CA9(&(Global_2405074.f_708), &(Global_2405074.f_1227), 519);
	Global_2405074.f_487 = { Global_2405074.f_493 };
	if (unk_0x354AD085195C5FA6() == Global_2405074.f_708.f_518)
	{
		Global_2405074.f_1746 = 0;
	}
}

int func_91()
{
	if ((Global_2405074.f_1746 && !unk_0x354AD085195C5FA6() == Global_2405074.f_1227.f_518) && unk_0x7FD2BDF03806FD9D(Global_2405074.f_1227.f_518))
	{
		return 1;
	}
	return 0;
}

void func_92(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	if (Global_2440049.f_2005.f_703.f_16 != func_65())
	{
		if (unk_0xCE990E643CD9D0E5(Global_2425869[Global_2440049.f_2005.f_703.f_16 /*443*/].f_411, 0) && func_93())
		{
			iParam0 = 23;
		}
	}
	if (iParam0 != 18 && iParam0 != 17)
	{
		Global_2412648 = 0;
	}
	Global_2405074.f_487 = iParam0;
	Global_2405074.f_487.f_1 = unk_0x354AD085195C5FA6();
	Global_2405074.f_487.f_2 = iParam1;
	Global_2405074.f_487.f_3 = iParam2;
	Global_2405074.f_487.f_4 = iParam3;
	Global_2405074.f_487.f_5 = iParam4;
}

int func_93()
{
	if ((((((func_105(unk_0x460153A63B9477BC()) == 229 || func_105(unk_0x460153A63B9477BC()) == 191) || func_97()) || func_96()) || func_95(unk_0x460153A63B9477BC())) || Global_2515847.f_227 == 1) || (Global_2405074.f_1747 && func_94(unk_0x460153A63B9477BC())))
	{
		return 0;
	}
	return 1;
}

int func_94(int iParam0)
{
	if (func_130(iParam0))
	{
		return 1;
	}
	if (func_150(iParam0))
	{
		return 1;
	}
	return 0;
}

int func_95(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (!unk_0x25DDB354A40FFCDB())
	{
		return 0;
	}
	if (iParam0 == unk_0x460153A63B9477BC())
	{
		return Global_2515846;
	}
	else
	{
		iVar0 = unk_0x1FA7B77001D60F9D(iParam0);
		if (unk_0xAE06B9E39EBDE049(iVar0))
		{
			iVar1 = unk_0x36FE6D3220816ADA(iVar0);
			if (iVar1 == joaat("mp_m_freemode_01") || iVar1 == joaat("mp_f_freemode_01"))
			{
				return 0;
			}
			else
			{
				return 1;
			}
		}
		else
		{
			return 0;
		}
	}
	return 0;
}

var func_96()
{
	return Global_1574411;
}

int func_97()
{
	if (Global_4456448 == 6)
	{
		return 1;
	}
	return 0;
}

void func_98()
{
	if (func_101() && !func_91())
	{
		func_100();
	}
	func_99();
	Global_2405074.f_708 = 0;
}

void func_99()
{
	int iVar0;
	struct<5> Var1;
	
	Var1.f_4 = 1065353216;
	iVar0 = 0;
	while (iVar0 < 100)
	{
		Global_2405074.f_708.f_1[iVar0 /*5*/] = { Var1 };
		iVar0++;
	}
}

void func_100()
{
	if (func_91())
	{
		if (Global_2405074.f_708.f_518 == Global_2405074.f_1227.f_518)
		{
			return;
		}
	}
	if (!unk_0x354AD085195C5FA6() == Global_2405074.f_708.f_518)
	{
		unk_0x13AF25746D6C3CA9(&(Global_2405074.f_1227), &(Global_2405074.f_708), 519);
		Global_2405074.f_493 = { Global_2405074.f_487 };
		Global_2405074.f_1746 = 1;
	}
}

int func_101()
{
	if ((Global_2405074.f_1747 && !unk_0x354AD085195C5FA6() == Global_2405074.f_708.f_518) && unk_0x7FD2BDF03806FD9D(Global_2405074.f_708.f_518))
	{
		return 1;
	}
	return 0;
}

void func_102()
{
	unk_0x13AF25746D6C3CA9(&(Global_2405074.f_365), &Global_2409674, 121);
}

void func_103()
{
	func_104();
}

void func_104()
{
	int iVar0;
	struct<4> Var1;
	
	iVar0 = 0;
	while (iVar0 < 50)
	{
		Global_2405074.f_2257[iVar0 /*4*/] = { Var1 };
		iVar0++;
	}
	Global_2405074.f_2256 = 0;
}

int func_105(int iParam0)
{
	if (func_106(iParam0, 0))
	{
		return Global_1630317[iParam0 /*595*/].f_11.f_33;
	}
	return -1;
}

int func_106(int iParam0, int iParam1)
{
	if (Global_1630317[iParam0 /*595*/].f_11.f_33 != -1 || (iParam1 && Global_1630317[iParam0 /*595*/].f_11.f_32 != -1))
	{
		return 1;
	}
	return 0;
}

void func_107()
{
	if (unk_0x7FD2BDF03806FD9D(Global_2540384.f_5184))
	{
		if (!Global_2540384.f_5184 == unk_0x354AD085195C5FA6() && Global_2540384.f_5183 < 1f)
		{
			return;
		}
	}
	Global_2540384.f_5184 = -1;
	Global_2540384.f_5183 = 1f;
}

void func_108(int iParam0)
{
	unk_0xD2459066EA58CE43(&(Global_1630317[unk_0x460153A63B9477BC() /*595*/].f_11.f_4), iParam0);
}

bool func_109(int iParam0, int iParam1)
{
	return unk_0xCE990E643CD9D0E5(Global_1630317[iParam0 /*595*/].f_11.f_4, iParam1);
}

void func_110(int iParam0)
{
	unk_0xBE20AB8238688965(&(Global_1630317[unk_0x460153A63B9477BC() /*595*/].f_11.f_4), iParam0);
}

void func_111(int iParam0)
{
	unk_0xBE20AB8238688965(&(Global_2540384.f_5188.f_45), iParam0);
}

void func_112(int iParam0)
{
	if (func_113() && iParam0)
	{
		return;
	}
	if (iParam0 == Global_2391045)
	{
		return;
	}
	Global_2391045 = iParam0;
	Global_2391047 = 0;
	Global_2391048 = 0;
}

int func_113()
{
	if ((((Global_968397 != -1 && Global_968397 != 33) && Global_968397 != 35) && Global_968397 != 37) && Global_968397 != 21)
	{
		return 1;
	}
	return 0;
}

int func_114(int iParam0)
{
	switch (iParam0)
	{
		case 142:
		case 159:
		case 148:
		case 157:
		case 166:
		case 179:
		case 189:
		case 193:
		case 198:
		case 205:
			return 1;
		
		default:
	}
	return 0;
}

float func_115(int iParam0)
{
	switch (iParam0)
	{
		case 142:
		case 157:
		case 159:
		case 151:
		case 148:
		case 164:
		case 152:
		case 153:
		case 154:
		case 155:
		case 160:
		case 162:
		case 166:
		case 173:
		case 169:
		case 167:
		case 168:
		case 170:
		case 178:
		case 179:
		case 189:
		case 180:
		case 182:
		case 183:
		case 190:
		case 191:
		case 192:
		case 193:
		case 194:
		case 199:
		case 201:
		case 185:
		case 197:
		case 186:
		case 198:
		case 195:
		case 205:
		case 207:
		case 208:
		case 209:
		case 216:
		case 218:
		case 215:
		case 214:
		case 220:
		case 221:
		case 217:
		case 219:
		case 225:
		case 226:
		case 227:
		case 229:
		case 230:
		case 233:
		case 237:
		case 238:
		case 239:
		case 240:
		case 241:
		case 242:
		case 244:
		case 248:
		case 249:
		case 250:
		case 243:
		case 158:
		case 181:
		case 256:
		case 258:
			return 0f;
		
		default:
	}
	return 1f;
}

int func_116(int iParam0)
{
	switch (iParam0)
	{
		case 152:
		case 164:
		case 151:
		case 170:
		case 169:
		case 201:
		case 191:
		case 198:
		case 180:
		case 200:
		case 208:
		case 216:
		case 218:
		case 215:
		case 214:
		case 220:
		case 221:
		case 217:
		case 219:
		case 227:
		case 237:
		case 238:
		case 239:
		case 240:
		case 241:
		case 242:
		case 244:
		case 248:
		case 249:
		case 250:
			return 1;
		
		default:
	}
	return 0;
}

int func_117(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 148:
		case 164:
		case 152:
		case 153:
		case 160:
			return 1;
		
		case 168:
			if ((iParam1 != 2 && iParam1 != 10) && iParam1 != 7)
			{
				return 1;
			}
			break;
		
		case 170:
		case 166:
		case 173:
			return 1;
		
		case 179:
		case 183:
		case 181:
		case 189:
		case 191:
		case 192:
		case 193:
		case 194:
		case 186:
		case 199:
		case 185:
		case 201:
		case 198:
		case 195:
		case 180:
		case 207:
		case 208:
		case 209:
		case 210:
		case 214:
		case 217:
		case 218:
		case 215:
		case 216:
		case 219:
		case 220:
		case 221:
		case 237:
		case 238:
		case 239:
		case 240:
		case 241:
		case 242:
		case 244:
		case 248:
		case 249:
		case 250:
		case 227:
			return 1;
		
		case 190:
			if (((iParam1 != 6 && iParam1 != 9) && iParam1 != 7) && iParam1 != 1)
			{
				return 1;
			}
			break;
	}
	return 0;
}

float func_118(int iParam0)
{
	switch (iParam0)
	{
		case 131:
		case 138:
		case 140:
		case 139:
		case 141:
		case 146:
		case 216:
		case 218:
		case 215:
		case 214:
		case 220:
		case 221:
		case 217:
		case 219:
		case 237:
		case 238:
		case 239:
		case 240:
		case 241:
		case 242:
		case 244:
		case 248:
		case 249:
		case 250:
			return 0f;
		
		case 144:
			return 0f;
		
		case 185:
			return 0f;
		
		default:
	}
	return 1f;
}

int func_119(int iParam0)
{
	switch (iParam0)
	{
		case 152:
		case 142:
		case 164:
		case 151:
		case 160:
		case 166:
		case 173:
		case 183:
		case 185:
		case 197:
		case 186:
		case 201:
		case 191:
		case 198:
		case 207:
		case 208:
		case 209:
		case 200:
		case 195:
		case 180:
		case 216:
		case 218:
		case 215:
		case 214:
		case 220:
		case 221:
		case 217:
		case 219:
		case 227:
		case 237:
		case 238:
		case 239:
		case 240:
		case 241:
		case 242:
		case 244:
		case 248:
		case 249:
		case 250:
			return 1;
		
		default:
	}
	return 0;
}

void func_120(struct<3> Param0, int iParam1, int iParam2)
{
	Global_2405074.f_45.f_49 = { Param0 };
	Global_2405074.f_45.f_52 = iParam1;
	Global_2405074.f_45.f_53 = iParam2;
}

bool func_121(int iParam0, int iParam1)
{
	return unk_0xCE990E643CD9D0E5(Global_2425869[iParam0 /*443*/].f_212, iParam1);
}

int func_122(int iParam0)
{
	if (func_123(iParam0))
	{
		if (func_124(iParam0))
		{
			return 1;
		}
	}
	return 0;
}

int func_123(int iParam0)
{
	if (iParam0 != func_65())
	{
		if (Global_1630317[iParam0 /*595*/].f_11 != func_65())
		{
			return Global_1630317[iParam0 /*595*/].f_11 == iParam0;
		}
	}
	return 0;
}

int func_124(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return func_109(iParam0, 9);
	}
	return 0;
}

void func_125(int iParam0, float fParam1)
{
	int iVar0;
	
	iVar0 = func_128(iParam0);
	if (iVar0 == -1)
	{
		return;
	}
	if (fParam1 < IntToFloat(iVar0))
	{
		func_126();
	}
}

void func_126()
{
	if (!func_127(unk_0x460153A63B9477BC()))
	{
		func_110(25);
	}
}

bool func_127(int iParam0)
{
	return func_109(iParam0, 25);
}

int func_128(int iParam0)
{
	switch (iParam0)
	{
		case 152:
			return Global_262145.f_12530;
		
		case 142:
			return Global_262145.f_12518;
		
		case 157:
			return Global_262145.f_12485;
		
		case 159:
			return Global_262145.f_12468;
		
		case 162:
			return Global_262145.f_12579;
		
		case 173:
			return 100;
		
		case 170:
			return 100;
		
		default:
	}
	return -1;
}

int func_129(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return unk_0xCE990E643CD9D0E5(Global_1630317[iVar0 /*595*/].f_1, 0);
	}
	return 0;
}

int func_130(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return unk_0xCE990E643CD9D0E5(Global_1630317[iVar0 /*595*/].f_1, 7);
	}
	return 0;
}

bool func_131(int iParam0)
{
	return unk_0xCE990E643CD9D0E5(Global_1630317[iParam0 /*595*/].f_1, 2);
}

int func_132(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return Global_1630317[iVar0 /*595*/] != -1;
	}
	return 0;
}

void func_133(int iParam0)
{
	if (!func_150(unk_0x460153A63B9477BC()))
	{
		if (iParam0 || func_141(unk_0x460153A63B9477BC()) != 0)
		{
			func_110(20);
			func_134(func_136());
			if (func_132(unk_0x460153A63B9477BC()))
			{
				if (!unk_0xCE990E643CD9D0E5(Global_1630317[unk_0x460153A63B9477BC() /*595*/].f_1, 8))
				{
					unk_0xBE20AB8238688965(&(Global_1630317[unk_0x460153A63B9477BC() /*595*/].f_1), 8);
				}
			}
		}
	}
}

void func_134(int iParam0)
{
	int iVar0;
	
	if (Global_262145.f_8572)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (Global_2097152[func_135() /*10931*/].f_6175.f_4111[iVar0 /*3*/] == iParam0)
		{
			if (Global_1312588.f_1[iVar0] == -1)
			{
				Global_1312588.f_1[iVar0] = iParam0;
				Global_1312588 = 1;
				return;
			}
		}
		iVar0++;
	}
}

int func_135()
{
	int iVar0;
	
	iVar0 = 0;
	return iVar0;
}

int func_136()
{
	int iVar0;
	
	iVar0 = func_105(unk_0x460153A63B9477BC());
	if (func_140(iVar0) == 0)
	{
		return -1;
	}
	if (func_139(iVar0))
	{
		return 65;
	}
	if (func_138(iVar0))
	{
		return 66;
	}
	if (func_137(iVar0))
	{
		return 63;
	}
	return 64;
}

int func_137(int iParam0)
{
	switch (iParam0)
	{
		case 241:
		case 248:
		case 242:
		case 244:
		case 240:
		case 239:
			return 1;
		
		default:
	}
	return 0;
}

int func_138(int iParam0)
{
	switch (iParam0)
	{
		case 180:
		case 183:
		case 185:
		case 186:
		case 182:
		case 195:
		case 197:
		case 198:
		case 207:
		case 208:
		case 209:
			return 1;
		
		default:
	}
	return 0;
}

int func_139(int iParam0)
{
	switch (iParam0)
	{
		case 179:
		case 201:
		case 200:
		case 148:
			return 1;
		
		default:
	}
	return 0;
}

int func_140(int iParam0)
{
	switch (iParam0)
	{
		case 153:
		case 154:
		case 155:
		case 162:
		case 160:
		case 163:
		case 167:
		case 168:
		case 169:
		case 171:
		case 172:
		case 178:
		case 190:
		case 191:
		case 192:
		case 189:
		case 193:
		case 194:
		case 199:
		case 205:
		case 210:
		case 225:
		case 226:
		case 227:
		case 229:
		case 230:
		case 233:
		case 237:
		case 238:
		case 239:
		case 240:
		case 249:
		case 250:
		case 243:
		case 158:
		case 181:
		case 256:
		case 258:
			return 0;
		
		case 152:
		case 159:
		case 142:
		case 164:
		case 157:
		case 166:
		case 170:
		case 173:
		case 180:
		case 183:
		case 185:
		case 182:
		case 186:
		case 197:
		case 200:
		case 201:
		case 198:
		case 195:
		case 207:
		case 208:
		case 209:
		case 214:
		case 215:
		case 216:
		case 217:
		case 218:
		case 219:
		case 220:
		case 221:
		case 241:
		case 242:
		case 244:
		case 248:
		case 24:
		case 26:
		case 259:
			return 1;
		
		case 148:
		case 179:
			return 2;
		
		default:
	}
	return -1;
}

int func_141(int iParam0)
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	var uVar3;
	var uVar4;
	
	iVar0 = 2;
	bVar1 = ((func_132(iParam0) && !func_131(iParam0)) && !unk_0xCE990E643CD9D0E5(Global_1630317[iParam0 /*595*/].f_1, 8));
	bVar2 = func_150(iParam0);
	uVar3 = func_143();
	uVar4 = func_144();
	if ((bVar1 && (func_130(iParam0) || func_129(iParam0))) || uVar4)
	{
		iVar0 = 0;
	}
	else if (uVar3 || ((!bVar2 && !func_124(iParam0)) && !func_142(iParam0)))
	{
		iVar0 = 2;
	}
	else
	{
		iVar0 = 3;
	}
	if (Global_2540384.f_5188.f_217 != iVar0)
	{
		Global_2540384.f_5188.f_217 = iVar0;
	}
	return iVar0;
}

bool func_142(int iParam0)
{
	return func_109(iParam0, 19);
}

bool func_143()
{
	return Global_1312436;
}

int func_144()
{
	if ((func_109(unk_0x460153A63B9477BC(), 21) || func_109(unk_0x460153A63B9477BC(), 22)) || func_147())
	{
		return 1;
	}
	if (func_145())
	{
		func_110(22);
		return 1;
	}
	return 0;
}

int func_145()
{
	if (func_106(unk_0x460153A63B9477BC(), 0))
	{
		if (((func_143() && !func_146()) || func_121(unk_0x460153A63B9477BC(), 21)) || func_121(unk_0x460153A63B9477BC(), 25))
		{
			return 1;
		}
		else
		{
			func_108(27);
		}
	}
	return 0;
}

bool func_146()
{
	return Global_1312436.f_1;
}

bool func_147()
{
	return func_148(377, -1);
}

int func_148(int iParam0, int iParam1)
{
	var uVar0;
	var uVar1;
	
	uVar0 = Global_2587834[iParam0 /*3*/][func_149(iParam1)];
	if (unk_0xB9112C701DE2A810(uVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

int func_149(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = iParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_19();
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

bool func_150(int iParam0)
{
	return func_109(iParam0, 20);
}

float func_151(int iParam0, bool bParam1)
{
	float fVar0;
	float fVar1;
	int iVar2;
	struct<3> Var3;
	struct<3> Var4;
	
	fVar0 = 1E+10f;
	fVar1 = 0f;
	Var3 = { unk_0x3E4D3CCC220BDFB1(unk_0x9B0761B4C3EB8BC7(), false) };
	iVar2 = 0;
	while (iVar2 < 4)
	{
		if (unk_0x3D70CCF2C9B362CD(Local_82.f_2[iVar2 /*26*/].f_1))
		{
			if (Local_82.f_2[iVar2 /*26*/] == 2 || !bParam1)
			{
				if (!func_14(Local_82.f_2[iVar2 /*26*/].f_1))
				{
					Var4 = { unk_0x3E4D3CCC220BDFB1(unk_0x3C6C6327BA564AEE(Local_82.f_2[iVar2 /*26*/].f_1), true) };
					fVar1 = vdist2(Var3, Var4);
					if (fVar1 < fVar0)
					{
						fVar0 = fVar1;
						*iParam0 = iVar2;
					}
				}
			}
		}
		iVar2++;
	}
	return fVar0;
}

void func_152(var uParam0, int iParam1, int iParam2, var uParam3, var uParam4, int iParam5, bool bParam6, char* sParam7)
{
	int iVar0;
	int iVar1[32];
	bool bVar2;
	int iVar3;
	char* sVar4;
	int iVar5;
	struct<4> Var6;
	int iVar7;
	int iVar8;
	int iVar9;
	float fVar10;
	int iVar11;
	int iVar12;
	int iVar13;
	int iVar14;
	int iVar15;
	int iVar16;
	int iVar17;
	int iVar18;
	int iVar19;
	int iVar20;
	int iVar21;
	struct<2> Var22;
	
	if (func_302(iParam2))
	{
		return;
	}
	fVar10 = -1f;
	iVar11 = -1;
	iVar12 = -1;
	iVar14 = 0;
	iVar15 = 0;
	uParam3->f_36 = 0;
	if (func_300() || iParam2 == 28)
	{
		if (func_241(iParam1, iParam2, uParam3, Global_1574191, 0, func_298(), sParam7))
		{
			func_240(1);
			if ((!func_238() && !func_236()) || unk_0xCE990E643CD9D0E5(Global_2540384.f_4652, 1))
			{
				if (func_235())
				{
					func_230();
				}
				else
				{
					unk_0xFCC7EAA298CE7AC2(76, 84);
					if (uParam3->f_27 == 0)
					{
						func_229(1);
						Global_1574191 = 0;
						iVar19 = -1;
						if (Global_1574412 != 1)
						{
							func_228(iParam1, 0, 0);
							if (unk_0xCE990E643CD9D0E5(uParam3->f_33, 7))
							{
								unk_0xD2459066EA58CE43(&(uParam3->f_33), 7);
							}
						}
						if (iParam2 == 28)
						{
							iVar17 = 0;
							while (iVar17 < 32)
							{
								iVar1[iVar17] = -1;
								iVar17++;
							}
							iVar17 = 0;
							while (iVar17 < 32)
							{
								if (func_1031(unk_0xF1110FE23C67293A(iVar17), 0, 1))
								{
									iVar3 = unk_0xF1110FE23C67293A(iVar17);
									if (!func_17(iVar3, 0))
									{
										if ((func_224(iVar3) || Global_2425869[iVar3 /*443*/].f_240 != -1) || func_223(iVar3))
										{
											iVar9 = iVar3;
											if (func_123(iVar3))
											{
												iVar1[iVar9] = iVar20;
												iVar20++;
												iVar0++;
												func_222(&iVar1, iVar3, &iVar20, &iVar0);
											}
										}
									}
								}
								iVar17++;
							}
						}
						if (!func_219(unk_0x460153A63B9477BC(), 0) && func_105(unk_0x460153A63B9477BC()) != 188)
						{
							bVar2 = iVar0 > 0;
						}
						iVar17 = 0;
						while (iVar17 < 32)
						{
							if (func_218())
							{
								if (func_1031(unk_0xF1110FE23C67293A(iVar17), 0, 1))
								{
									iVar3 = unk_0xF1110FE23C67293A(iVar17);
								}
								else
								{
									iVar3 = func_65();
								}
							}
							else
							{
								iVar3 = (uParam0[iVar17 /*42*/])->f_1;
							}
							if ((func_217(iVar3) && func_213(iVar3, iParam2)) && func_1031(iVar3, 0, 1))
							{
								iVar9 = iVar3;
								iVar7 = Global_1590682[iVar9 /*883*/].f_211.f_6;
								Var6 = { func_208(iVar3) };
								if (iVar3 == unk_0x460153A63B9477BC())
								{
									uParam3->f_35 = iVar18;
								}
								StringCopy(&(uParam3->f_1), unk_0x72C1D3A1AB8CAA5B(iVar3), 64);
								*(uParam4[iVar17 /*13*/]) = { func_67(iVar3) };
								iVar5 = func_202(iVar3);
								sVar4 = "";
								if (iVar5 != 0)
								{
									sVar4 = unk_0x3EF2973864CBE5FC(iVar5);
								}
								Global_1574191++;
								if ((uParam0[iVar17 /*42*/])->f_22 != -1f)
								{
									fVar10 = (uParam0[iVar17 /*42*/])->f_22;
								}
								if ((uParam0[iVar17 /*42*/])->f_31 != -1)
								{
									iVar11 = (uParam0[iVar17 /*42*/])->f_31;
								}
								if ((uParam0[iVar17 /*42*/])->f_41 != -1)
								{
									iVar12 = (uParam0[iVar17 /*42*/])->f_41;
								}
								iVar8 = (uParam0[iVar17 /*42*/])->f_9;
								if (((uParam0[iVar17 /*42*/])->f_9 != -1 || (uParam0[iVar17 /*42*/])->f_22 != -1f) || (uParam0[iVar17 /*42*/])->f_31 != -1)
								{
									if (!func_218())
									{
										iVar15 = 1;
									}
								}
								if (iParam5 != -1)
								{
									func_197(&iVar8, &fVar10, (uParam0[iVar17 /*42*/])->f_9, iParam5);
									StringCopy(&(uParam3->f_104), func_196(iParam5, 1, 0, 0), 16);
								}
								if (bParam6)
								{
									iVar13 = (uParam0[iVar17 /*42*/])->f_2 + 1;
									if (iVar19 != iVar13)
									{
										iVar19 = iVar13;
									}
									else
									{
										iVar13 = -2;
									}
								}
								iVar16 = func_191(iVar3, 0);
								if (bVar2)
								{
									if (func_190(iVar3, 1) && iVar1[iVar9] != -1)
									{
										iVar18 = iVar1[iVar9];
									}
									else
									{
										iVar18 = (iVar0 + iVar21);
										iVar21++;
									}
								}
								uParam3->f_38[iVar9 /*2*/].f_1 = iVar18;
								if ((uParam0[iVar17 /*42*/])->f_39 != -1)
								{
									StringCopy(&Var22, "UW_TM", 16);
									StringIntConCat(&Var22, (uParam0[iVar17 /*42*/])->f_39, 16);
								}
								if (func_189(iParam5))
								{
									func_188(iVar3, iParam1, uParam3, iVar18, Var6, sVar4, iVar7, iVar8, iVar16, iVar15, fVar10, iVar8, iVar12, &Var22, (uParam0[iVar17 /*42*/])->f_40, iVar13, bParam6);
								}
								else
								{
									func_188(iVar3, iParam1, uParam3, iVar18, Var6, sVar4, iVar7, iVar8, iVar16, iVar15, fVar10, iVar11, iVar12, &Var22, (uParam0[iVar17 /*42*/])->f_40, iVar13, bParam6);
								}
								unk_0xBE20AB8238688965(&iVar14, iVar3);
								iVar18++;
							}
							iVar17++;
						}
						iVar17 = 0;
						while (iVar17 < 32)
						{
							iVar3 = unk_0xF1110FE23C67293A(iVar17);
							if (func_1031(iVar3, 0, 1) && !unk_0xCE990E643CD9D0E5(iVar14, iVar3))
							{
								iVar3 = unk_0xF1110FE23C67293A(iVar17);
							}
							else
							{
								iVar3 = func_65();
							}
							if (func_217(iVar3))
							{
								if (func_1031(unk_0xF1110FE23C67293A(iVar17), 0, 1))
								{
									iVar9 = iVar3;
									iVar7 = Global_1590682[iVar9 /*883*/].f_211.f_6;
									Var6 = { func_208(iVar3) };
									*(uParam4[iVar17 /*13*/]) = { func_67(iVar3) };
									iVar5 = func_202(iVar3);
									sVar4 = "";
									if (iVar5 != 0)
									{
										sVar4 = unk_0x3EF2973864CBE5FC(iVar5);
									}
									Global_1574191++;
									iVar16 = func_191(iVar3, 1);
									if (bVar2)
									{
										if (func_190(iVar3, 1))
										{
											iVar18 = iVar1[iVar17];
										}
										else
										{
											iVar18 = (iVar0 + iVar21);
											iVar21++;
										}
									}
									uParam3->f_38[iVar9 /*2*/].f_1 = iVar18;
									func_166(iVar3, unk_0x72C1D3A1AB8CAA5B(iVar3), iParam1, uParam3, iVar18, Var6, sVar4, iVar7, iVar16, iVar15);
									iVar18++;
								}
							}
							iVar17++;
						}
						if (unk_0xCE990E643CD9D0E5(uParam3->f_33, 11))
						{
							func_163(uParam3, iParam1, iParam2);
						}
						func_162(&(uParam3->f_21));
						func_161();
						uParam3->f_27 = 2;
					}
					if (uParam3->f_27 == 2)
					{
						if (!unk_0xCE990E643CD9D0E5(uParam3->f_33, 7))
						{
							func_160(uParam3, iParam1);
							func_159(iParam1, 0, 1);
							unk_0xBE20AB8238688965(&(uParam3->f_33), 7);
						}
						func_160(uParam3, iParam1);
						if (!unk_0xCE990E643CD9D0E5(uParam3->f_33, 11))
						{
							unk_0xBE20AB8238688965(&(uParam3->f_33), 11);
						}
						if (func_155(uParam3))
						{
							Global_1574412 = 1;
						}
						func_153(uParam3);
						if (Global_1574412 == 1)
						{
							uParam3->f_27 = 0;
						}
						if (Global_1574412 == 2)
						{
							uParam3->f_27 = 0;
						}
					}
					if (unk_0x95EF219D38B20CFF(*iParam1))
					{
						unk_0x9D15035C6653D1B1(7);
						unk_0xE6A03BA84586E67B(*iParam1, 0.122f, 0.3f, 0.28f, 0.6f, 255, 255, 255, 255, 0);
						unk_0x9D15035C6653D1B1(4);
					}
				}
			}
		}
		else
		{
			uParam3->f_27 = 0;
			func_161();
			func_229(0);
			if (unk_0xCE990E643CD9D0E5(uParam3->f_33, 7))
			{
				unk_0xD2459066EA58CE43(&(uParam3->f_33), 7);
			}
			if (unk_0xCE990E643CD9D0E5(uParam3->f_33, 10))
			{
				unk_0xD2459066EA58CE43(&(uParam3->f_33), 10);
			}
		}
	}
	unk_0x5C64FD27DB62AF7A();
}

void func_153(var uParam0)
{
	if (!func_8(&(uParam0->f_21)))
	{
		func_7(&(uParam0->f_21), 0, 0);
	}
	else if (func_6(&(uParam0->f_21), 250, 0))
	{
		func_162(&(uParam0->f_21));
		func_154(0);
	}
}

void func_154(bool bParam0)
{
	if (bParam0)
	{
		if (Global_1574412 != 2)
		{
			Global_1574412 = 2;
		}
	}
	else
	{
		switch (Global_1574412)
		{
			case 0:
				Global_1574412 = 1;
				break;
			
			case 1:
				break;
			
			case 2:
				break;
			}
	}
}

int func_155(var uParam0)
{
	int iVar0;
	int iVar1;
	struct<13> Var2;
	int iVar3;
	int iVar4;
	
	iVar4 = 0;
	iVar0 = uParam0->f_37;
	iVar3 = unk_0xF1110FE23C67293A(uParam0->f_37);
	if (iVar3 != func_65() && func_1031(iVar3, 0, 1))
	{
		Var2 = { func_67(iVar3) };
		iVar1 = func_158(uParam0, uParam0->f_37);
		if (func_157(Var2))
		{
			switch (iVar1)
			{
				case 0:
					if (unk_0x4B9AEC757F715980(&Var2))
					{
						if (unk_0x30EE34228B1AF045(&Var2))
						{
							iVar4 = 1;
							func_156(uParam0, iVar0, 2);
						}
					}
					else if (unk_0x7677D662EB0C9C8A(&Var2))
					{
						iVar4 = 1;
						func_156(uParam0, iVar0, 1);
					}
					break;
				
				case 2:
					if (unk_0x4B9AEC757F715980(&Var2))
					{
						if (!unk_0x30EE34228B1AF045(&Var2))
						{
							iVar4 = 1;
							func_156(uParam0, iVar0, 0);
						}
					}
					else
					{
						iVar4 = 1;
						func_156(uParam0, iVar0, 0);
					}
					break;
				
				case 1:
					if (unk_0x4B9AEC757F715980(&Var2))
					{
						if (!unk_0x7677D662EB0C9C8A(&Var2))
						{
							iVar4 = 1;
							func_156(uParam0, iVar0, 0);
						}
					}
					else if (!unk_0x7677D662EB0C9C8A(&Var2))
					{
						iVar4 = 1;
						func_156(uParam0, iVar0, 0);
					}
					break;
				}
			}
	}
	uParam0->f_37++;
	if (uParam0->f_37 >= 32)
	{
		uParam0->f_37 = 0;
	}
	return iVar4;
}

void func_156(var uParam0, int iParam1, int iParam2)
{
	uParam0->f_38[iParam1 /*2*/] = iParam2;
}

bool func_157(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12)
{
	return unk_0xF6B8932480699645(&uParam0, 13);
}

var func_158(var uParam0, int iParam1)
{
	return uParam0->f_38[iParam1 /*2*/];
}

void func_159(int iParam0, bool bParam1, int iParam2)
{
	if (unk_0x830F007E19C63E14(*iParam0, "COLLAPSE"))
	{
		unk_0xF1B28F753235CE2A(bParam1);
		unk_0xE1FDD153F5858534();
	}
	if (iParam2 == 1)
	{
		if (unk_0x830F007E19C63E14(*iParam0, "DISPLAY_VIEW"))
		{
			unk_0xE1FDD153F5858534();
		}
	}
}

void func_160(var uParam0, int iParam1)
{
	if (!unk_0xCE990E643CD9D0E5(uParam0->f_33, 10))
	{
		unk_0x830F007E19C63E14(*iParam1, "SET_HIGHLIGHT");
		unk_0xAD291B8F75D737AD(uParam0->f_35);
		unk_0xE1FDD153F5858534();
		unk_0xBE20AB8238688965(&(uParam0->f_33), 10);
	}
}

void func_161()
{
	if (Global_1574412 != 0)
	{
		Global_1574412 = 0;
	}
}

void func_162(var uParam0)
{
	uParam0->f_1 = 0;
}

void func_163(var uParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar2 = unk_0xF1110FE23C67293A(iVar0);
		if (iVar2 != func_65())
		{
			if (func_1031(iVar2, 0, 1))
			{
				if (uParam0->f_38[iVar0 /*2*/].f_1 != -1)
				{
					iVar1 = func_165(uParam0->f_38[iVar0 /*2*/], 0, iParam2);
					func_164(iParam1, uParam0->f_38[iVar0 /*2*/].f_1, iVar1, Global_1590682[iVar0 /*883*/].f_211.f_6);
				}
			}
		}
		iVar0++;
	}
}

void func_164(var uParam0, int iParam1, int iParam2, int iParam3)
{
	if (unk_0x95EF219D38B20CFF(*uParam0))
	{
		if (unk_0x830F007E19C63E14(*uParam0, "SET_ICON"))
		{
			unk_0xAD291B8F75D737AD(iParam1);
			unk_0xAD291B8F75D737AD(iParam2);
			if (iParam2 == 65)
			{
				unk_0xAD291B8F75D737AD(iParam3);
			}
			unk_0xE1FDD153F5858534();
		}
	}
}

int func_165(int iParam0, bool bParam1, int iParam2)
{
	int iVar0;
	
	iVar0 = 65;
	switch (iParam2)
	{
		case 21:
			iVar0 = 0;
			break;
	}
	if (bParam1)
	{
		iVar0 = 116;
	}
	switch (iParam0)
	{
		case 2:
			return 47;
		
		case 1:
			return 49;
		
		default:
	}
	return iVar0;
}

void func_166(int iParam0, char* sParam1, int iParam2, var uParam3, int iParam4, char* sParam5, var uParam6, var uParam7, var uParam8, char* sParam9, int iParam10, int iParam11, int iParam12)
{
	int iVar0;
	char* sVar1;
	
	if (iParam4 >= func_187() && iParam4 < func_186())
	{
		iParam4 = (iParam4 % 16);
		iVar0 = iParam4 + 1;
		if (Global_1574193)
		{
			iVar0 += 16;
		}
		sVar1 = "SET_DATA_SLOT";
		if (Global_1574412 == 1)
		{
			sVar1 = "UPDATE_SLOT";
		}
		if (unk_0x830F007E19C63E14(*iParam2, sVar1))
		{
			unk_0xAD291B8F75D737AD(iParam4);
			if (unk_0xCE990E643CD9D0E5(uParam3->f_33, 8) || uParam3->f_108 == 6)
			{
				func_185("");
			}
			else
			{
				unk_0xAD291B8F75D737AD(iParam10);
			}
			func_185(sParam1);
			unk_0xAD291B8F75D737AD(iParam11);
			if (uParam3->f_108 == 6)
			{
				func_185("");
			}
			else
			{
				unk_0xAD291B8F75D737AD(65);
			}
			unk_0xAD291B8F75D737AD(-1);
			func_185("");
			if (uParam3->f_108 == 6)
			{
				func_185("");
			}
			else
			{
				func_185(&sParam5);
			}
			func_171(uParam3, iParam0);
			unk_0x4A096F645CED26D9(sParam9);
			unk_0x4A096F645CED26D9(sParam9);
			if (func_170(uParam3))
			{
				func_169("DPAD_FRIEND");
			}
			else if (func_168(uParam3))
			{
				func_169("DPAD_FRIEND");
			}
			else if (func_167(uParam3))
			{
				func_169("DPAD_CREW");
			}
			else
			{
				func_169("");
			}
			unk_0xE1FDD153F5858534();
		}
	}
}

bool func_167(var uParam0)
{
	return unk_0xCE990E643CD9D0E5(uParam0->f_33, 6);
}

bool func_168(var uParam0)
{
	return unk_0xCE990E643CD9D0E5(uParam0->f_33, 5);
}

void func_169(char* sParam0)
{
	unk_0xB23270F3D5E62FDE(sParam0);
	unk_0x2042E9CA4306F725();
}

int func_170(var uParam0)
{
	if (func_168(uParam0) && func_167(uParam0))
	{
		return 1;
	}
	return 0;
}

void func_171(var uParam0, int iParam1)
{
	if (func_184(iParam1))
	{
		unk_0xAD291B8F75D737AD(121);
	}
	else if (func_176(iParam1))
	{
		unk_0xAD291B8F75D737AD(122);
	}
	else if (((unk_0xCE990E643CD9D0E5(Global_4456448.f_27, 15) && iParam1 > -1) && iParam1 < 32) && unk_0xCE990E643CD9D0E5(Global_2425869[iParam1 /*443*/].f_420, 0))
	{
		unk_0xAD291B8F75D737AD(123);
	}
	else
	{
		if (func_172())
		{
			uParam0->f_36 = 0;
		}
		unk_0xF1B28F753235CE2A(uParam0->f_36);
	}
}

int func_172()
{
	if (unk_0xFC559366953F62B3())
	{
		if (func_174() || func_173())
		{
			return 1;
		}
	}
	return 0;
}

var func_173()
{
	return Global_2451787.f_16;
}

int func_174()
{
	if (unk_0xFC559366953F62B3())
	{
		return func_173();
	}
	return func_175(Global_4456448.f_82708);
}

int func_175(int iParam0)
{
	int iVar0;
	
	if (iParam0 == 0)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 8)
	{
		if (Global_262145.f_4991[iVar0] == iParam0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_176(int iParam0)
{
	if ((func_1031(iParam0, 0, 1) && func_180()) && func_177(iParam0, 1))
	{
		return 1;
	}
	return 0;
}

bool func_177(int iParam0, bool bParam1)
{
	return func_178(iParam0, bParam1, 1);
}

int func_178(int iParam0, bool bParam1, int iParam2)
{
	int iVar0;
	
	if (iParam0 == func_65())
	{
		return 0;
	}
	if (!bParam1)
	{
		if (func_179(iParam0, iParam2))
		{
			return 0;
		}
	}
	iVar0 = Global_1630317[iParam0 /*595*/].f_11;
	if (iVar0 != func_65() && Global_1630317[iVar0 /*595*/].f_11.f_423 == iParam2)
	{
		return 1;
	}
	return 0;
}

int func_179(int iParam0, int iParam1)
{
	if (iParam0 != func_65())
	{
		if (Global_1630317[iParam0 /*595*/].f_11 != func_65())
		{
			if (Global_1630317[iParam0 /*595*/].f_11 == iParam0 && Global_1630317[iParam0 /*595*/].f_11.f_423 == iParam1)
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_180()
{
	if (func_132(unk_0x460153A63B9477BC()) || func_183())
	{
		if (!func_181(unk_0x460153A63B9477BC()))
		{
			return 0;
		}
	}
	return 1;
}

int func_181(int iParam0)
{
	if (func_182(iParam0) == 236 || func_182(iParam0) == 150)
	{
		return func_130(iParam0);
	}
	return 0;
}

int func_182(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return Global_1630317[iVar0 /*595*/];
	}
	return -1;
}

int func_183()
{
	switch (func_105(unk_0x460153A63B9477BC()))
	{
		case 193:
		case 194:
		case 199:
		case 205:
		case 210:
		case 188:
			return 1;
		
		default:
	}
	return 0;
}

int func_184(int iParam0)
{
	if (func_172())
	{
		if (func_1031(iParam0, 0, 1))
		{
			return func_123(iParam0);
		}
	}
	if ((func_1031(iParam0, 0, 1) && func_180()) && func_179(iParam0, 0))
	{
		return 1;
	}
	return 0;
}

void func_185(char* sParam0)
{
	unk_0x54AED56A452DCB4F(sParam0);
}

int func_186()
{
	int iVar0;
	
	if (Global_1574193)
	{
		iVar0 = 32;
	}
	else
	{
		iVar0 = 16;
	}
	return iVar0;
}

int func_187()
{
	int iVar0;
	
	iVar0 = 0;
	if (Global_1574193)
	{
		iVar0 = 16;
	}
	return iVar0;
}

void func_188(int iParam0, int iParam1, var uParam2, int iParam3, char* sParam4, var uParam5, var uParam6, var uParam7, char* sParam8, int iParam9, int iParam10, int iParam11, int iParam12, float fParam13, int iParam14, int iParam15, char* sParam16, int iParam17, int iParam18, bool bParam19)
{
	int iVar0;
	char* sVar1;
	
	if (iParam3 >= func_187() && iParam3 < func_186())
	{
		iParam3 = (iParam3 % 16);
		iVar0 = iParam3 + 1;
		if (Global_1574193)
		{
			iVar0 += 16;
		}
		if (bParam19)
		{
			iVar0 = iParam18;
			if (iVar0 == -2)
			{
				iParam10 = -1;
			}
		}
		sVar1 = "SET_DATA_SLOT";
		if (Global_1574412 == 1)
		{
			sVar1 = "UPDATE_SLOT";
		}
		if (unk_0x95EF219D38B20CFF(*iParam1))
		{
			if (unk_0x830F007E19C63E14(*iParam1, sVar1))
			{
				unk_0xAD291B8F75D737AD(iParam3);
				if (unk_0xCE990E643CD9D0E5(uParam2->f_33, 8) || uParam2->f_108 == 6)
				{
					func_185("");
				}
				else
				{
					unk_0xAD291B8F75D737AD(iParam9);
				}
				if (uParam2->f_108 == 6 && !unk_0x7BCC91F3C1CF24E8(sParam16))
				{
					func_169(sParam16);
				}
				else
				{
					func_185(&(uParam2->f_1));
				}
				unk_0xAD291B8F75D737AD(iParam11);
				if (uParam2->f_108 == 6)
				{
					func_185("");
				}
				else
				{
					unk_0xAD291B8F75D737AD(65);
				}
				if (iParam12 == 1)
				{
					unk_0xAD291B8F75D737AD(iVar0);
				}
				else
				{
					unk_0xAD291B8F75D737AD(-1);
				}
				if (func_218())
				{
					func_185("");
				}
				else if (uParam2->f_108 == 6 && !unk_0x7BCC91F3C1CF24E8(sParam16))
				{
					unk_0xB23270F3D5E62FDE("FM_AE_ONE_INT");
					unk_0x6A826E35A3096ED0(sParam16);
					unk_0x42710E9E08FA375A(iParam17);
					unk_0x2042E9CA4306F725();
				}
				else if (uParam2->f_108 == 5 && !unk_0x7BCC91F3C1CF24E8(sParam16))
				{
					unk_0xB23270F3D5E62FDE("FM_AE_ONE_INT");
					unk_0x6A826E35A3096ED0(sParam16);
					unk_0x42710E9E08FA375A(iParam17);
					unk_0x2042E9CA4306F725();
				}
				else if (uParam2->f_108 == 7 && !unk_0x7BCC91F3C1CF24E8(sParam16))
				{
					unk_0xB23270F3D5E62FDE("FM_AE_TWO_INT");
					unk_0x6A826E35A3096ED0(sParam16);
					unk_0x42710E9E08FA375A(iParam17);
					unk_0x2042E9CA4306F725();
				}
				else if (uParam2->f_108 == 8 && !unk_0x7BCC91F3C1CF24E8(&(uParam2->f_104)))
				{
					unk_0xB23270F3D5E62FDE("FM_AE_UNIT");
					if (fParam13 != -1f)
					{
						unk_0x5BC8B357341A4FEE(fParam13, 1);
					}
					if (iParam10 != -1)
					{
						unk_0x42710E9E08FA375A(iParam10);
					}
					unk_0x6A826E35A3096ED0(&(uParam2->f_104));
					unk_0x2042E9CA4306F725();
				}
				else if (uParam2->f_108 == 9)
				{
					unk_0xB23270F3D5E62FDE("FM_AE_CASH");
					unk_0x5181FCFE1210A213(iParam10, 1);
					unk_0x2042E9CA4306F725();
				}
				else if (uParam2->f_108 == 10)
				{
					if (iParam10 == 0)
					{
						unk_0xB23270F3D5E62FDE("FM_AE_CASH");
						unk_0x5181FCFE1210A213(iParam10, 1);
						unk_0x2042E9CA4306F725();
					}
					else
					{
						unk_0xB23270F3D5E62FDE("FM_NG_CASH");
						unk_0x5181FCFE1210A213(iParam10, 1);
						unk_0x2042E9CA4306F725();
					}
				}
				else if (iParam15 > -1)
				{
					if (iParam15 == 0 && !unk_0x7BCC91F3C1CF24E8(&(uParam2->f_104)))
					{
						func_169(&(uParam2->f_104));
					}
					else
					{
						func_185("");
					}
				}
				else if (iParam14 != -1)
				{
					unk_0xB23270F3D5E62FDE("STRING");
					unk_0x7899A951E85F4B28(iParam14, 6);
					unk_0x2042E9CA4306F725();
				}
				else if (fParam13 != -1f)
				{
					unk_0xB23270F3D5E62FDE("NUMBER");
					unk_0x5BC8B357341A4FEE(fParam13, 1);
					unk_0x2042E9CA4306F725();
				}
				else if (iParam10 != -1)
				{
					unk_0xAD291B8F75D737AD(iParam10);
				}
				else
				{
					func_185("");
				}
				if (uParam2->f_108 == 6)
				{
					func_185("");
				}
				else
				{
					func_185(&sParam4);
				}
				func_171(uParam2, iParam0);
				if (iParam12 == 1 || unk_0x7BCC91F3C1CF24E8(sParam8))
				{
					func_185("");
					func_185("");
				}
				else
				{
					unk_0x4A096F645CED26D9(sParam8);
					unk_0x4A096F645CED26D9(sParam8);
				}
				if (func_170(uParam2))
				{
					func_169("DPAD_FRIEND");
				}
				else if (func_168(uParam2))
				{
					func_169("DPAD_FRIEND");
				}
				else if (func_167(uParam2))
				{
					func_169("DPAD_CREW");
				}
				else
				{
					func_169("");
				}
				unk_0xE1FDD153F5858534();
			}
		}
	}
}

int func_189(int iParam0)
{
	return 0;
	switch (iParam0)
	{
		case 11:
		case 12:
			return 1;
		
		default:
	}
	return 0;
}

bool func_190(int iParam0, bool bParam1)
{
	if (!bParam1)
	{
		if (func_123(iParam0))
		{
			return 0;
		}
	}
	return Global_1630317[iParam0 /*595*/].f_11 != func_65();
}

int func_191(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 116;
	if ((!bParam1 && func_132(iParam0)) && !func_150(iParam0))
	{
		iVar0 = func_195();
	}
	iVar1 = func_194(iParam0);
	if (!iVar1 == -1)
	{
		return func_192(iVar1);
	}
	return iVar0;
}

int func_192(int iParam0)
{
	int iVar0;
	
	if (iParam0 > -1)
	{
		iVar0 = func_193(iParam0);
		switch (iVar0)
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
			}
		
		default:
	}
	return 1;
}

var func_193(int iParam0)
{
	return Global_2417956.f_818.f_44[iParam0 /*2*/].f_1;
}

int func_194(int iParam0)
{
	if (!iParam0 == func_65())
	{
		if (func_190(iParam0, 1))
		{
			return Global_2417956.f_818.f_11[func_66(iParam0)];
		}
	}
	return -1;
}

int func_195()
{
	return 21;
}

char* func_196(int iParam0, bool bParam1, bool bParam2, int iParam3)
{
	switch (iParam0)
	{
		case 0:
		case 3:
		case 4:
		case 5:
		case 1:
		case 6:
		case 9:
		case 10:
		case 13:
		case 11:
		case 12:
			if (unk_0x1CB1AF03C74FCE70())
			{
				if (bParam1)
				{
					return "AMCH_M_LB";
				}
				else if (bParam2)
				{
					return "AMCH_M";
				}
				else
				{
					return "AMCH_METRES";
				}
			}
			else if (bParam1)
			{
				return "AMCH_FT_LB";
			}
			else if (bParam2)
			{
				return "AMCH_FT";
			}
			else
			{
				return "AMCH_FEET";
			}
			break;
		
		case 2:
			if (unk_0x1CB1AF03C74FCE70())
			{
				if (bParam1)
				{
					return "AMCH_KMH_LB";
				}
				else if (bParam2)
				{
					return "AMCH_KMHN";
				}
				else
				{
					return "AMCH_KMH";
				}
			}
			else if (bParam1)
			{
				return "AMCH_MPH_LB";
			}
			else if (bParam2)
			{
				return "AMCH_MPHN";
			}
			else
			{
				return "AMCH_MPH";
			}
			break;
		
		case 7:
			if (bParam1 || bParam2)
			{
				return "";
			}
			else
			{
				return "AMCH_VEH";
			}
			break;
		
		case 15:
		case 16:
		case 17:
		case 18:
			if (bParam1 || bParam2)
			{
				return "";
			}
			else if (iParam3 != 1)
			{
				return "AMCH_KILLS";
			}
			else
			{
				return "AMCH_KILL";
			}
			break;
	}
	if (bParam1 || bParam2)
	{
		return "";
	}
	return "AMCH_EMPTY";
}

int func_197(var uParam0, float fParam1, int iParam2, int iParam3)
{
	if (func_201(iParam3))
	{
		*fParam1 = (func_198(iParam3, iParam2) / 10f);
		return 1;
	}
	if (func_189(iParam3))
	{
		*fParam1 = (func_198(iParam3, iParam2) / 1000f);
		return 1;
	}
	*uParam0 = iParam2;
	return 0;
}

float func_198(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
		case 3:
		case 4:
		case 5:
		case 1:
		case 6:
		case 9:
		case 10:
		case 13:
		case 11:
		case 12:
			if (unk_0x1CB1AF03C74FCE70())
			{
				return to_float(iParam1);
			}
			else
			{
				return func_200(to_float(iParam1));
			}
			break;
		
		case 2:
			if (unk_0x1CB1AF03C74FCE70())
			{
				return to_float(iParam1);
			}
			else
			{
				return func_199(to_float(iParam1));
			}
			break;
	}
	return to_float(iParam1);
}

float func_199(float fParam0)
{
	return (fParam0 / 1.609344f);
}

float func_200(float fParam0)
{
	return (fParam0 / 0.3048f);
}

int func_201(int iParam0)
{
	switch (iParam0)
	{
		case 0:
		case 2:
		case 3:
		case 5:
		case 4:
		case 1:
		case 6:
		case 9:
		case 10:
		case 13:
		case 11:
		case 12:
			return 1;
		
		default:
	}
	return 0;
}

int func_202(int iParam0)
{
	int iVar0;
	
	iVar0 = func_205(iParam0);
	if (iVar0 == -1)
	{
		func_203(iParam0, 1);
		return 0;
	}
	Global_1389221[iVar0 /*5*/].f_4 = 1;
	return Global_1389221[iVar0 /*5*/].f_2;
}

void func_203(int iParam0, bool bParam1)
{
	if (!func_1031(iParam0, 0, 1))
	{
		return;
	}
	if (func_205(iParam0) != -1)
	{
		return;
	}
	if (Global_1389384)
	{
		if (iParam0 == Global_1389384.f_1)
		{
			return;
		}
	}
	if (func_204(iParam0))
	{
		return;
	}
	if (Global_1389422 >= 32)
	{
		return;
	}
	Global_1389389[Global_1389422] = iParam0;
	Global_1389422++;
	if (bParam1)
	{
	}
}

int func_204(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_1389422)
	{
		if (Global_1389389[iVar0] == iParam0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_205(int iParam0)
{
	int iVar0;
	
	if (!func_1031(iParam0, 0, 1))
	{
		return -1;
	}
	if (Global_1389382 == 0)
	{
		return -1;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_1389382)
	{
		if (Global_1389221[iVar0 /*5*/].f_1 == iParam0)
		{
			if (unk_0x3F2B70A051A32606(Global_1389221[iVar0 /*5*/].f_2) && unk_0xCA635244223E5D25(Global_1389221[iVar0 /*5*/].f_2))
			{
				return iVar0;
			}
			func_206(iVar0);
			return -1;
		}
		iVar0++;
	}
	return -1;
}

void func_206(int iParam0)
{
	char cVar0[64];
	char cVar1[64];
	int iVar2;
	int iVar3;
	
	if (iParam0 >= Global_1389382)
	{
		return;
	}
	if (unk_0x3F2B70A051A32606(Global_1389221[iParam0 /*5*/].f_2))
	{
		StringCopy(&cVar0, "CHAR_DEFAULT", 64);
		if (Global_1389221[iParam0 /*5*/].f_2 != 0)
		{
			StringCopy(&cVar1, unk_0x3EF2973864CBE5FC(Global_1389221[iParam0 /*5*/].f_2), 64);
			unk_0xC16699C9E79C9231(&cVar1, &cVar1, &cVar0, &cVar0);
		}
		unk_0x709B7208105825BB(Global_1389221[iParam0 /*5*/].f_2);
	}
	iVar2 = iParam0;
	iVar3 = iVar2 + 1;
	while (iVar3 < Global_1389382)
	{
		Global_1389221[iVar2 /*5*/] = { Global_1389221[iVar3 /*5*/] };
		iVar2++;
		iVar3++;
	}
	func_207(&(Global_1389221[iVar2 /*5*/]));
	Global_1389382 = (Global_1389382 - 1);
}

void func_207(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = func_65();
	uParam0->f_2 = 0;
	uParam0->f_4 = 0;
	if (unk_0x25DDB354A40FFCDB())
	{
		uParam0->f_3 = unk_0x6CAAB7E78B5D978A();
	}
}

struct<4> func_208(int iParam0)
{
	char cVar0[32];
	
	if (func_1031(iParam0, 0, 1))
	{
		Global_2515173 = { func_67(iParam0) };
		if (unk_0xC6C08C02733D02C8())
		{
			if (func_157(Global_2515173))
			{
				if (!unk_0xA20DDBBB15EC6235(&Global_2515173))
				{
					return cVar0;
				}
			}
		}
		else if (!unk_0xF9A94F315B890564(0))
		{
			return cVar0;
		}
		if (func_212(&Global_2515173))
		{
			Global_2515103 = { func_210(iParam0) };
			func_209(&Global_2515103, &cVar0);
		}
	}
	return cVar0;
}

void func_209(var uParam0, char* sParam1)
{
	unk_0xA36843D7CCD081D6(uParam0, 35, sParam1);
}

struct<35> func_210(int iParam0)
{
	struct<13> Var0;
	struct<35> Var1;
	
	if (func_211(iParam0))
	{
		return Global_1312928[unk_0x460153A63B9477BC() /*35*/];
	}
	Var0 = { func_67(iParam0) };
	unk_0x192BD21E18525C69(&Var1, 35, &Var0);
	return Var1;
}

int func_211(int iParam0)
{
	if (iParam0 == unk_0x460153A63B9477BC())
	{
		return 1;
	}
	return 0;
}

int func_212(var uParam0)
{
	if (unk_0xDCA94C1EA9942FBD())
	{
		if (unk_0xE2FBD13450B2DA21() && unk_0xBF9EC1ED7E386622(uParam0))
		{
			return 1;
		}
	}
	return 0;
}

int func_213(int iParam0, int iParam1)
{
	if (iParam1 == 27)
	{
		if ((func_131(iParam0) || func_216(iParam0)) || func_215(iParam0))
		{
			return 0;
		}
	}
	if (!func_214(iParam0))
	{
		return 0;
	}
	if ((!func_224(iParam0) && Global_2425869[iParam0 /*443*/].f_240 == -1) && !func_223(iParam0))
	{
		return 0;
	}
	return 1;
}

bool func_214(int iParam0)
{
	return unk_0xCE990E643CD9D0E5(Global_1590682[iParam0 /*883*/].f_142, 22);
}

bool func_215(int iParam0)
{
	if (func_131(iParam0))
	{
		return 1;
	}
	return unk_0xCE990E643CD9D0E5(Global_1630317[iParam0 /*595*/].f_1, 8);
}

int func_216(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return (unk_0xCE990E643CD9D0E5(Global_1630317[iParam0 /*595*/].f_1, 10) || unk_0xCE990E643CD9D0E5(Global_1630317[iParam0 /*595*/].f_1, 9));
	}
	return 0;
}

int func_217(int iParam0)
{
	int iVar0;
	
	if (iParam0 == func_65())
	{
		return 0;
	}
	if (func_17(iParam0, 0))
	{
		return 0;
	}
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		if (unk_0xCE990E643CD9D0E5(Global_1590682[iVar0 /*883*/].f_142, 2))
		{
			return 0;
		}
	}
	return 1;
}

int func_218()
{
	switch (func_105(unk_0x460153A63B9477BC()))
	{
		case 179:
		case 180:
		case 182:
		case 183:
		case 184:
		case 185:
		case 186:
		case 189:
		case 190:
		case 191:
		case 192:
		case 195:
		case 197:
		case 198:
		case 200:
		case 201:
		case 202:
		case 203:
		case 204:
		case 206:
		case 207:
		case 208:
		case 209:
		case 211:
			return 1;
		
		default:
	}
	switch (func_182(unk_0x460153A63B9477BC()))
	{
		case 131:
		case 140:
		case 138:
		case 146:
			return 1;
			break;
	}
	if (func_150(unk_0x460153A63B9477BC()))
	{
		switch (func_105(unk_0x460153A63B9477BC()))
		{
			case 148:
			case 151:
			case 152:
			case 153:
			case 157:
			case 159:
			case 162:
			case 164:
			case 142:
				return 1;
				break;
			}
	}
	if (func_181(unk_0x460153A63B9477BC()))
	{
		return 1;
	}
	return 0;
}

int func_219(int iParam0, int iParam1)
{
	if (Global_1630317[iParam0 /*595*/].f_11.f_33 != -1 && func_220(Global_1630317[iParam0 /*595*/].f_11.f_33))
	{
		return 1;
	}
	if (iParam1 && Global_1630317[iParam0 /*595*/].f_11.f_32 != -1)
	{
		if (func_220(Global_1630317[iParam0 /*595*/].f_11.f_32))
		{
			return 1;
		}
	}
	return 0;
}

int func_220(int iParam0)
{
	switch (iParam0)
	{
		case 155:
		case 160:
		case 153:
		case 162:
		case 154:
		case 163:
		case 171:
		case 172:
		case 240:
		case 239:
			return 1;
		
		default:
	}
	return func_221(iParam0, 0);
	return 0;
}

int func_221(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 199:
		case 205:
		case 210:
		case 211:
			return 1;
		
		default:
	}
	if (iParam1 == 0)
	{
		switch (iParam0)
		{
			case 194:
			case 193:
			case 189:
			case 153:
				return 1;
			}
		
		default:
	}
	return 0;
}

void func_222(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (func_1031(unk_0xF1110FE23C67293A(iVar0), 0, 1))
		{
			iVar1 = unk_0xF1110FE23C67293A(iVar0);
			if (!func_17(iVar1, 0))
			{
				if ((func_224(iVar1) || Global_2425869[iVar1 /*443*/].f_240 != -1) || func_223(iVar1))
				{
					if (func_76(iVar1, iParam1, 0))
					{
						(*iParam0)[iVar0] = *iParam2;
						*iParam2++;
						*iParam3++;
					}
				}
			}
		}
		iVar0++;
	}
}

bool func_223(int iParam0)
{
	return Global_1590682[iParam0 /*883*/].f_196 != 0;
}

int func_224(int iParam0)
{
	if (func_1031(iParam0, 0, 1))
	{
		if (func_1031(unk_0x460153A63B9477BC(), 0, 1))
		{
			if (unk_0x56B60AE958412839(iParam0, unk_0x460153A63B9477BC()) || (func_105(iParam0) == 233 && func_225(iParam0)))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_225(int iParam0)
{
	bool bVar0;
	bool bVar1;
	
	bVar0 = func_226(unk_0x460153A63B9477BC());
	bVar1 = func_226(iParam0);
	if ((bVar0 && !bVar1) || (!bVar0 && bVar1))
	{
		return 0;
	}
	return 1;
}

bool func_226(int iParam0)
{
	return func_227(&(Global_2425869[iParam0 /*443*/].f_429), 0);
}

bool func_227(var uParam0, int iParam1)
{
	return unk_0xCE990E643CD9D0E5(*uParam0, iParam1);
}

void func_228(int iParam0, int iParam1, int iParam2)
{
	if (unk_0x95EF219D38B20CFF(*iParam0))
	{
		unk_0x830F007E19C63E14(*iParam0, "SET_DATA_SLOT_EMPTY");
		unk_0xAD291B8F75D737AD(iParam1);
		unk_0xAD291B8F75D737AD(iParam2);
		unk_0xE1FDD153F5858534();
	}
}

void func_229(bool bParam0)
{
	if (bParam0)
	{
		if (Global_1377233.f_2 == 0)
		{
			Global_1377233.f_2 = 1;
		}
	}
	else if (Global_1377233.f_2 == 1)
	{
		Global_1377233.f_2 = 0;
	}
}

void func_230()
{
	if (unk_0xCE990E643CD9D0E5(Global_2540384.f_4652, 1))
	{
		if (func_234())
		{
			func_231();
		}
	}
}

void func_231()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		if (Global_2440049.f_2834[iVar0 /*80*/].f_2 != 0)
		{
			Global_2440049.f_2834[iVar0 /*80*/].f_2 = 5;
			func_232(&(Global_2440049.f_2834[iVar0 /*80*/].f_69), 1);
		}
		iVar0++;
	}
}

void func_232(var uParam0, int iParam1)
{
	func_233(uParam0, iParam1);
}

void func_233(var uParam0, var uParam1)
{
	*uParam0 = (*uParam0 || uParam1);
}

bool func_234()
{
	return Global_2440049.f_2834[0 /*80*/].f_1 != 0;
}

int func_235()
{
	if (unk_0xCE990E643CD9D0E5(Global_2540384.f_4652, 0) && func_234())
	{
		return 1;
	}
	if (unk_0xCE990E643CD9D0E5(Global_2540384.f_4652, 1) && func_234())
	{
		return 1;
	}
	return 0;
}

int func_236()
{
	if (func_234())
	{
		if (func_237(Global_2440049.f_2834[0 /*80*/].f_1))
		{
			return 1;
		}
	}
	return 0;
}

int func_237(int iParam0)
{
	switch (iParam0)
	{
		case 88:
		case 87:
		case 91:
		case 92:
		case 86:
		case 93:
		case 94:
		case 95:
		case 96:
		case 97:
		case 98:
		case 99:
		case 89:
		case 100:
		case 101:
		case 102:
		case 103:
		case 90:
		case 110:
			return 1;
		
		default:
	}
	return 0;
}

int func_238()
{
	if (func_234())
	{
		if (func_239(Global_2440049.f_2834[0 /*80*/].f_1))
		{
			return 1;
		}
	}
	return 0;
}

int func_239(int iParam0)
{
	switch (iParam0)
	{
		case 63:
		case 64:
		case 65:
		case 66:
		case 67:
		case 68:
		case 69:
		case 70:
		case 71:
		case 72:
		case 73:
		case 74:
		case 75:
		case 76:
		case 77:
		case 78:
		case joaat("MPSV_LP0_31"):
		case 80:
		case 81:
		case 82:
		case 83:
			return 1;
		
		default:
	}
	return 0;
}

void func_240(int iParam0)
{
	if (Global_1377233.f_1 != Global_1377233)
	{
		Global_1377233.f_1 = Global_1377233;
	}
	if (Global_1377233 != iParam0)
	{
		Global_1377233 = iParam0;
	}
}

int func_241(int iParam0, int iParam1, var uParam2, var uParam3, bool bParam4, bool bParam5, char* sParam6)
{
	struct<4> Var0;
	char* sVar1;
	bool bVar2;
	bool bVar3;
	float fVar4;
	int iVar5;
	char* sVar6;
	
	StringCopy(&Var0, "", 16);
	bVar2 = iParam1 == 20;
	bVar3 = func_297(iParam1);
	fVar4 = func_296();
	iVar5 = -1;
	if (iParam1 == 27 || iParam1 == 28)
	{
		if (func_295())
		{
			if (func_294() > 0 && Global_1574193)
			{
				unk_0xD10328357EA7B9E5();
				unk_0x530DC1525CA60B00(fVar4);
				unk_0x4CB4237D8858ADA6(18);
				if (unk_0xDABD547F0DF2906C())
				{
					unk_0x64083C4199676F44();
				}
				unk_0x4CB4237D8858ADA6(10);
			}
		}
	}
	if (!bParam5)
	{
		if (!func_275())
		{
			func_274(iParam0, uParam2, 1);
			return 0;
		}
	}
	if (unk_0xCE990E643CD9D0E5(Global_2540384.f_4655, 26))
	{
		func_274(iParam0, uParam2, 1);
		return 0;
	}
	if (!func_8(&(uParam2->f_19)))
	{
		if (func_294() == 1)
		{
			func_273(bVar3, iParam0, 0);
			func_7(&(uParam2->f_19), 0, 0);
			func_274(iParam0, uParam2, 0);
			unk_0xBE20AB8238688965(&(Global_2540384.f_4656), 5);
		}
	}
	if (func_8(&(uParam2->f_19)) || bParam5)
	{
		if (unk_0xDABD547F0DF2906C())
		{
			unk_0x64083C4199676F44();
		}
		unk_0x4CB4237D8858ADA6(10);
		if (func_6(&(uParam2->f_19), 10000, 0) || (func_294() == 0 && !bParam5))
		{
			func_274(iParam0, uParam2, 1);
			return 0;
		}
		else
		{
			if (bVar2 == 0)
			{
				func_272();
				if (iParam1 == 27 || iParam1 == 28)
				{
					unk_0xD10328357EA7B9E5();
				}
				unk_0x4CB4237D8858ADA6(18);
			}
			if (!unk_0xCE990E643CD9D0E5(uParam2->f_33, 0))
			{
				if (bVar2 == 0)
				{
					func_272();
					if (iParam1 == 27 || iParam1 == 28)
					{
						unk_0xD10328357EA7B9E5();
					}
					unk_0x4CB4237D8858ADA6(18);
				}
				unk_0x530DC1525CA60B00(fVar4);
				if (func_273(bVar3, iParam0, 0))
				{
					func_228(iParam0, 0, 0);
					sVar1 = func_270(iParam1, &(Global_4456448.f_82715), bParam4);
					Var0 = { func_268(iParam1) };
					if (bParam4)
					{
						func_265(iParam0, sVar1, "", 0, -1, -1, 1);
					}
					else if (iParam1 == 27)
					{
						func_258(iParam0, func_262(uParam2), func_259(uParam2), -1);
					}
					else if (iParam1 == 28)
					{
						sVar6 = func_251(uParam2);
						if (!unk_0x7BCC91F3C1CF24E8(sParam6))
						{
							sVar6 = sParam6;
						}
						func_249(iParam0, sVar6, func_250(), -1);
					}
					else if (func_172())
					{
						uParam2->f_34 = Global_1574192;
						func_265(iParam0, sVar1, &Var0, 1, -1, Global_1574192, 1);
					}
					else if (bVar2)
					{
						iVar5 = func_242(iParam1);
						uParam2->f_34 = Global_1574192;
						func_265(iParam0, sVar1, "", 0, iVar5, Global_1574192, 1);
					}
					else
					{
						iVar5 = func_242(iParam1);
						func_265(iParam0, sVar1, &Var0, 1, iVar5, -1, 1);
					}
					unk_0xBE20AB8238688965(&(uParam2->f_33), 0);
				}
			}
			if (unk_0xCE990E643CD9D0E5(uParam2->f_33, 0))
			{
				Global_1574191 = uParam3;
				Global_1574190 = 1;
				unk_0x530DC1525CA60B00(fVar4);
				if (bVar2)
				{
					if (uParam2->f_34 != Global_1574192)
					{
						unk_0xD2459066EA58CE43(&(uParam2->f_33), 0);
					}
				}
				return 1;
			}
		}
	}
	return 0;
}

int func_242(int iParam0)
{
	int iVar0;
	
	iVar0 = -1;
	if (func_248())
	{
		iVar0 = 2;
	}
	switch (iParam0)
	{
		case 40:
			iVar0 = 22;
			break;
		
		case 0:
		case 31:
		case 30:
		case 32:
		case 33:
		case 34:
		case 35:
		case 36:
		case 37:
		case 38:
		case 39:
			iVar0 = 3;
			break;
		
		case 2:
			iVar0 = 3;
			break;
		
		case 1:
			iVar0 = 6;
			break;
		
		case 3:
			iVar0 = 5;
			break;
		
		case 26:
			iVar0 = 21;
			break;
		
		case 4:
		case 5:
		case 6:
		case 8:
		case 9:
		case 10:
		case 11:
			iVar0 = 4;
			break;
		
		case 7:
			iVar0 = 10;
			break;
		
		case 12:
		case 13:
		case 14:
		case 17:
			iVar0 = 2;
			break;
		
		case 15:
			iVar0 = 17;
			break;
		
		case 16:
			iVar0 = 18;
			break;
		
		case 18:
			if (func_247(unk_0x460153A63B9477BC()))
			{
				iVar0 = 20;
			}
			if (func_246(unk_0x460153A63B9477BC()))
			{
				iVar0 = 19;
			}
			break;
	}
	if (func_245(unk_0x460153A63B9477BC()))
	{
		iVar0 = 2;
	}
	if (func_243())
	{
		iVar0 = 20;
	}
	return iVar0;
}

bool func_243()
{
	if (unk_0xFC559366953F62B3())
	{
		return func_61();
	}
	return func_244(Global_4456448.f_82708);
}

int func_244(int iParam0)
{
	int iVar0;
	
	if (iParam0 == 0)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 16)
	{
		if (Global_262145.f_5009[iVar0] == iParam0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

bool func_245(int iParam0)
{
	return Global_2425869[iParam0 /*443*/].f_119 == 4;
}

bool func_246(int iParam0)
{
	return Global_2425869[iParam0 /*443*/].f_119 == 7;
}

bool func_247(int iParam0)
{
	return Global_2425869[iParam0 /*443*/].f_119 == 2;
}

bool func_248()
{
	return Global_4456448.f_1 == 0;
}

void func_249(int iParam0, char* sParam1, char* sParam2, int iParam3)
{
	if (unk_0x95EF219D38B20CFF(*iParam0))
	{
		unk_0x830F007E19C63E14(*iParam0, "SET_TITLE");
		if (unk_0x7BCC91F3C1CF24E8(sParam2))
		{
			func_169(sParam1);
		}
		else
		{
			unk_0xB23270F3D5E62FDE("FM_AE_BRACKT");
			unk_0x6A826E35A3096ED0(sParam1);
			unk_0x6A826E35A3096ED0(sParam2);
			unk_0x2042E9CA4306F725();
		}
		func_169("");
		if (iParam3 != -1)
		{
			unk_0xAD291B8F75D737AD(iParam3);
		}
		unk_0xE1FDD153F5858534();
	}
}

char* func_250()
{
	switch (func_105(unk_0x460153A63B9477BC()))
	{
		case 163:
			return "BD_SORT_1";
			break;
		
		case 160:
			return "BD_SORT_4";
			break;
		
		case 154:
			return "BD_SORT_3";
			break;
		
		case 155:
			return "BD_SORT_3";
			break;
	}
	return "";
}

char* func_251(var uParam0)
{
	switch (uParam0->f_112)
	{
		case 0:
			return "GR_DPD_E";
			break;
		
		case 1:
			return "GR_DPD_F";
			break;
		
		case 2:
			return "GR_DPD_S";
			break;
	}
	switch (uParam0->f_110)
	{
		case 0:
			return "GR_DPD_A";
			break;
		
		case 1:
			return "GR_DPD_B";
			break;
		
		case 2:
			return "GR_DPD_C";
			break;
		
		case 3:
			return "GR_DPD_D";
			break;
	}
	switch (func_105(unk_0x460153A63B9477BC()))
	{
		case 233:
			return "H2_DPAD_SET";
			break;
		
		case 180:
			return "GB_BIGUNLOAD_T";
			break;
		
		case 182:
			return "DEAL_DEALN";
			break;
		
		case 194:
			return "PI_BIK_13_0";
			break;
		
		case 189:
			return "PI_BIK_4_1";
			break;
		
		case 193:
			return "PI_BIK_13_1";
			break;
		
		case 205:
			return "PI_BIK_13_3";
			break;
		
		case 186:
			return "CELL_BIKER_CK";
			break;
		
		case 207:
			return "DV_SH_TITLE";
			break;
		
		case 208:
			return "BA_SH_TITLE";
			break;
		
		case 209:
			return "SHU_SH_TITLE";
			break;
		
		case 210:
			return "PI_BIK_13_4";
			break;
		
		case 183:
			return "CELL_BIKER_RESC";
			break;
		
		case 199:
			return "CELL_BIKER_SEAR";
			break;
		
		case 201:
			return "CELL_BIKER_STAN";
			break;
		
		case 142:
			return "PIM_MAGM210";
			break;
		
		case 163:
			return "PIM_MAGM608";
			break;
		
		case 160:
			return "PIM_MAGM604";
			break;
		
		case 154:
			return "PIM_MAGM602";
			break;
		
		case 155:
			return "PIM_MAGM603";
			break;
		
		case 148:
			if (func_254())
			{
				return "LBD_BKVBK";
			}
			return "PIM_MAGM201";
			break;
		
		case 151:
			if (func_253(1))
			{
				return "GB_DPAD_BMFD";
			}
			return "PIM_MAGM202";
			break;
		
		case 152:
			return "PIM_MAGM204";
			break;
		
		case 153:
			if (func_253(1))
			{
				return "PI_BIK_3_2";
			}
			return "PIM_MAGM601";
			break;
		
		case 157:
			return "PIM_MAGM207";
			break;
		
		case 159:
			return "PIM_MAGM206";
			break;
		
		case 162:
			return "PIM_MAGM607";
			break;
		
		case 164:
			return "PIM_MAGM212";
			break;
		
		case 166:
			return "GB_DPAD_HEAD";
		
		case 167:
			return "GB_DPAD_BUY";
		
		case 168:
			return "GB_DPAD_SELL";
		
		case 169:
			return "GB_DPAD_DEF";
		
		case 170:
			return "GB_DPAD_AIR";
		
		case 171:
			return "GB_DPAD_CASH";
		
		case 172:
			return "GB_DPAD_SAL";
		
		case 173:
			return "GB_DPAD_FRA";
		
		case 178:
			return "VEX_TITLEa";
		
		case 188:
			return "VEX_TITLEb";
		
		case 218:
			return "FRT_MODE";
		
		case 217:
			return "FRT_TRNS";
		
		case 214:
			return "MODE_PLW";
		
		case 215:
			return "MODE_FUL";
		
		case 216:
			return "MODE_AA";
		
		case 219:
			return "MODE_VEL";
		
		case 220:
			return "MODE_RMP";
		
		case 221:
			return "MODE_STK";
		
		case 225:
			return "GR_TITLEL";
		
		case 226:
			return "GRS_TITLEL";
		
		case 227:
			return "GRD_TITLEL";
		
		case 195:
			return "GB_STEAL_T";
		
		case 198:
			return "SC_MENU_TITLE";
		
		case 190:
			return "GB_DPAD_BSEL";
		
		case 191:
			return "GB_DPAD_BDEF";
		
		case 185:
			return "GB_DPAD_GFH";
		
		case 197:
			return "GB_DPAD_JB";
		
		case 179:
			return "CELL_JOUST";
		
		case 200:
			return "CAG_BLIP";
		
		case 192:
			if (func_252(Global_1630317[unk_0x460153A63B9477BC() /*595*/].f_11.f_181))
			{
				return "GB_DPAD_BSET";
			}
			return "GB_DPAD_BBUY";
			break;
	}
	return "";
}

int func_252(int iParam0)
{
	switch (iParam0)
	{
		case 15:
		case 16:
		case 17:
		case 18:
		case 19:
			return 1;
		
		default:
	}
	return 0;
}

bool func_253(bool bParam0)
{
	return func_177(unk_0x460153A63B9477BC(), bParam0);
}

bool func_254()
{
	return (func_257() && func_255(func_256()));
}

bool func_255(int iParam0)
{
	return func_179(iParam0, 1);
}

int func_256()
{
	return Global_1630317[unk_0x460153A63B9477BC() /*595*/].f_11.f_35;
}

bool func_257()
{
	return Global_1590682[unk_0x460153A63B9477BC() /*883*/] == 148;
}

void func_258(int iParam0, char* sParam1, char* sParam2, int iParam3)
{
	if (unk_0x95EF219D38B20CFF(*iParam0))
	{
		unk_0x830F007E19C63E14(*iParam0, "SET_TITLE");
		if (unk_0x7BCC91F3C1CF24E8(sParam2))
		{
			func_169(sParam1);
		}
		else if (func_182(unk_0x460153A63B9477BC()) == 133)
		{
			unk_0xB23270F3D5E62FDE("FM_AE_BRACKT_C");
			unk_0x6A826E35A3096ED0(sParam1);
			unk_0x6A826E35A3096ED0(sParam2);
			unk_0x2042E9CA4306F725();
		}
		else
		{
			unk_0xB23270F3D5E62FDE("FM_AE_BRACKT");
			unk_0x6A826E35A3096ED0(sParam1);
			unk_0x6A826E35A3096ED0(sParam2);
			unk_0x2042E9CA4306F725();
		}
		func_169("");
		if (iParam3 != -1)
		{
			unk_0xAD291B8F75D737AD(iParam3);
		}
		unk_0xE1FDD153F5858534();
	}
}

char* func_259(var uParam0)
{
	int iVar0;
	
	iVar0 = func_182(unk_0x460153A63B9477BC());
	if (func_261())
	{
		if (uParam0->f_103 != -1)
		{
			iVar0 = uParam0->f_103;
		}
	}
	switch (iVar0)
	{
		case 131:
			return "";
		
		case 132:
			return "FM_AE_SORT_5";
		
		case 133:
			switch (func_260())
			{
				case 0:
					return "FM_AE_SORT_2";
				
				case 1:
					return "FM_AE_SORT_2";
				
				case 2:
					return "FM_AE_SORT_3";
				
				case 3:
					return "FM_AE_SORT_2";
				
				case 4:
					return "FM_AE_SORT_2";
				
				case 5:
					return "FM_AE_SORT_2";
				
				case 6:
					return "FM_AE_SORT_2";
				
				case 7:
					return "FM_AE_SORT_13";
				
				case 8:
					return "FM_AE_SORT_4";
				
				case 9:
					return "FM_AE_SORT_2";
				
				case 10:
					return "FM_AE_SORT_2";
				
				case 11:
					return "FM_AE_SORT_2";
				
				case 12:
					return "FM_AE_SORT_2";
				
				case 13:
					return "FM_AE_SORT_2";
				
				case 14:
					return "FM_AE_SORT_5";
				
				case 15:
					return "FM_AE_SORT_9";
				
				case 16:
					return "FM_AE_SORT_9";
				
				case 17:
					return "FM_AE_SORT_9";
				
				case 18:
					return "FM_AE_SORT_9";
				
				default:
			}
			break;
		
		case 136:
			return "";
		
		case 138:
			return "";
		
		case 139:
			return "FM_AE_SORT_10";
		
		case 140:
			return "";
		
		case 141:
			return "FM_AE_SORT_5";
		
		case 144:
			return "FM_AE_SORT_1";
		
		case 129:
			return "FM_AE_SORT_9";
	}
	return "";
}

int func_260()
{
	if (func_182(unk_0x460153A63B9477BC()) == 133)
	{
		return Global_2540384.f_5109;
	}
	return -1;
}

bool func_261()
{
	return Global_1590555;
}

char* func_262(var uParam0)
{
	int iVar0;
	
	iVar0 = func_182(unk_0x460153A63B9477BC());
	if (func_261())
	{
		if (uParam0->f_103 != -1)
		{
			iVar0 = uParam0->f_103;
		}
	}
	switch (iVar0)
	{
		case 131:
			return "PIM_TA9";
		
		case 132:
			if (func_264() == 0)
			{
				return "CPC_TILEL";
			}
			else if (func_264() == 1)
			{
				return "CPC_TILELA";
			}
			return "PIM_TA0";
			break;
		
		case 133:
			switch (func_260())
			{
				case 0:
					return "AMCH_0SLC";
				
				case 1:
					return "AMCH_1SLC";
				
				case 2:
					return "AMCH_2SLC";
				
				case 3:
					return "AMCH_3SLC";
				
				case 4:
					return "AMCH_4SLC";
				
				case 5:
					return "AMCH_5SLC";
				
				case 6:
					return "AMCH_6SLC";
				
				case 7:
					return "AMCH_7SLC";
				
				case 8:
					return "AMCH_8SLC";
				
				case 9:
					return "AMCH_12SLC";
				
				case 10:
					return "AMCH_13SLC";
				
				case 11:
					return "AMCH_15SLC";
				
				case 12:
					return "AMCH_16SLC";
				
				case 13:
					return "AMCH_23SLC";
				
				case 14:
					return "AMCH_9SLC";
				
				case 15:
					return "AMCH_19SLC";
				
				case 16:
					return "AMCH_20SLC";
				
				case 17:
					return "AMCH_21SLC";
				
				case 18:
					return "AMCH_22SLC";
				
				default:
			}
			break;
		
		case 136:
			return "PIM_TA10";
		
		case 138:
			return "PIM_TA4";
		
		case 139:
			return "PIM_TA5";
		
		case 140:
			return "PIM_TA3";
		
		case 141:
			return "PIM_TA8";
		
		case 144:
			return "PIM_TA2";
		
		case 129:
			if (func_263() == 1)
			{
				return "FM_AE_TITL_12";
			}
			else
			{
				return "PIM_TA7";
			}
			break;
		
		case 146:
			return "PIM_TA6";
	}
	return "";
}

int func_263()
{
	return Global_2540384.f_5112;
}

int func_264()
{
	if (func_182(unk_0x460153A63B9477BC()) == 132)
	{
		return Global_2540384.f_5107;
	}
	return -1;
}

void func_265(int iParam0, char* sParam1, char* sParam2, bool bParam3, int iParam4, int iParam5, int iParam6)
{
	int iVar0;
	int iVar1;
	
	if (unk_0x95EF219D38B20CFF(*iParam0))
	{
		unk_0x830F007E19C63E14(*iParam0, "SET_TITLE");
		if (bParam3)
		{
			func_185(sParam1);
		}
		else if (iParam5 != -1)
		{
			unk_0xB23270F3D5E62FDE(sParam1);
			unk_0x42710E9E08FA375A(iParam5);
			unk_0x2042E9CA4306F725();
		}
		else
		{
			func_169(sParam1);
		}
		if (func_295() && iParam6)
		{
			if (func_267())
			{
				iVar0 = 2;
				iVar1 = 2;
			}
			else
			{
				iVar0 = 1;
				iVar1 = 2;
			}
			unk_0xB23270F3D5E62FDE("LBD_DPD_CNT");
			unk_0x42710E9E08FA375A(iVar0);
			unk_0x42710E9E08FA375A(iVar1);
			unk_0x2042E9CA4306F725();
		}
		else
		{
			func_169(sParam2);
		}
		if (iParam4 != -1)
		{
			unk_0xAD291B8F75D737AD(iParam4);
			if (func_266(unk_0x460153A63B9477BC()))
			{
				unk_0xAD291B8F75D737AD(166);
			}
			else if (func_61())
			{
				unk_0xAD291B8F75D737AD(220);
			}
		}
		unk_0xE1FDD153F5858534();
	}
}

int func_266(int iParam0)
{
	if (func_247(iParam0) || func_246(iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_267()
{
	return Global_1574193;
}

struct<4> func_268(int iParam0)
{
	struct<4> Var0;
	
	StringCopy(&Var0, "", 16);
	if (func_269(unk_0x460153A63B9477BC()) || func_245(unk_0x460153A63B9477BC()))
	{
		return Var0;
	}
	switch (iParam0)
	{
		case 12:
		case 13:
		case 14:
		case 17:
		case 15:
		case 16:
		case 18:
			StringCopy(&Var0, "LBD_DIF_", 16);
			StringIntConCat(&Var0, Global_4456448.f_525, 16);
			break;
	}
	if (func_172() && unk_0xFC559366953F62B3())
	{
		StringCopy(&Var0, "LBD_DIF_", 16);
		StringIntConCat(&Var0, Global_4456448.f_525, 16);
	}
	return Var0;
}

bool func_269(int iParam0)
{
	return Global_2425869[iParam0 /*443*/].f_119 == 5;
}

char* func_270(int iParam0, char* sParam1, bool bParam2)
{
	var uVar0;
	
	if (iParam0 == 20 && (!func_172() || unk_0x7BCC91F3C1CF24E8(sParam1)))
	{
		uVar0 = func_271();
		return uVar0;
	}
	else if (bParam2)
	{
		return "HUD_LBD_IMP";
	}
	else if (iParam0 == 25)
	{
		if (Global_1574431 == 0)
		{
			Global_1574431 = 1;
		}
		return "HUD_LBD_OVR";
	}
	else if (!unk_0x7BCC91F3C1CF24E8(sParam1))
	{
		if (Global_1574431 == 1)
		{
			Global_1574431 = 0;
		}
		return sParam1;
	}
	else
	{
		if (Global_1574431 == 0)
		{
			Global_1574431 = 1;
		}
		switch (iParam0)
		{
			case 0:
			case 31:
				return "HUD_LBD_DM";
				break;
			
			case 1:
				return "HUD_LBD_TDM";
				break;
			
			case 5:
				return "HUD_LBD_GRCE";
				break;
			
			case 4:
			case 9:
			case 10:
			case 6:
			case 26:
			case 11:
				return "HUD_LBD_RCE";
				break;
			
			case 7:
				return "HUD_LBD_BRCE";
				break;
			
			case 18:
			case 14:
			case 17:
			case 15:
			case 13:
			case 12:
			case 16:
			case 19:
				return "HUD_TITLEMC";
				break;
			
			case 3:
				return "HUD_LBD_HRD";
				break;
			
			case 22:
				return "HUD_LBD_SHOO";
				break;
			}
	}
	return sParam1;
}

char* func_271()
{
	if (unk_0x45A083C1167D5EA3())
	{
		return "HUD_LBD_FMF";
	}
	if (unk_0x8F4B4AF1CA27A518())
	{
		return "HUD_LBD_FMC";
	}
	if (unk_0xE598AA6FDE2D9C78())
	{
		return "HUD_LBD_FMS";
	}
	if (unk_0x0287AAEDDA576E74())
	{
		return "HUD_LBD_FMI";
	}
	return "HUD_LBD_FMP";
}

void func_272()
{
	Global_42556 = 1;
}

bool func_273(bool bParam0, int iParam1, bool bParam2)
{
	if (bParam0)
	{
		*iParam1 = unk_0x5DEA4192B46CB99B("mp_mm_card_freemode");
	}
	else if (bParam2)
	{
		*iParam1 = unk_0x5DEA4192B46CB99B("MP_SPECTATOR_CARD");
	}
	else
	{
		*iParam1 = unk_0x5DEA4192B46CB99B("mp_matchmaking_card");
	}
	return unk_0x95EF219D38B20CFF(*iParam1);
}

void func_274(int iParam0, var uParam1, bool bParam2)
{
	unk_0xD2459066EA58CE43(&(uParam1->f_33), 7);
	Global_1574191 = 0;
	func_161();
	Global_1574190 = 0;
	uParam1->f_27 = 0;
	if (bParam2)
	{
		if (func_8(&(uParam1->f_19)))
		{
			func_162(&(uParam1->f_19));
			unk_0xD2459066EA58CE43(&(Global_2540384.f_4656), 5);
		}
	}
	if (unk_0x95EF219D38B20CFF(*iParam0))
	{
		unk_0x2E352DDBBF674246(iParam0);
	}
	if (unk_0xCE990E643CD9D0E5(uParam1->f_33, 0))
	{
		unk_0xD2459066EA58CE43(&(uParam1->f_33), 0);
	}
	unk_0x530DC1525CA60B00(0f);
}

int func_275()
{
	if (func_293())
	{
		return 0;
	}
	if (func_292())
	{
		return 0;
	}
	if (!func_290())
	{
		return 0;
	}
	if (!func_288())
	{
		return 0;
	}
	if (func_287(8, -1))
	{
		return 0;
	}
	if (func_294() == 2)
	{
		return 0;
	}
	if (Global_2540384.f_4607)
	{
		return 0;
	}
	if (func_286())
	{
		return 0;
	}
	else if (!func_283(unk_0x460153A63B9477BC(), 1, 0) && Global_1311716[0 /*4*/] > 0)
	{
		return 0;
	}
	if (((func_282(1) || func_280(1)) || Global_22411.f_124) || Global_22411)
	{
		return 0;
	}
	if (unk_0xF0C12886E5C1B20E())
	{
		return 0;
	}
	if (func_279() && Global_1696334 == 2)
	{
		return 0;
	}
	if (func_277(unk_0x460153A63B9477BC()) && !func_279())
	{
		return 0;
	}
	if (Global_1663771)
	{
		return 0;
	}
	if (Global_1663776)
	{
		return 0;
	}
	if (func_81(0))
	{
		return 0;
	}
	if (unk_0xCE990E643CD9D0E5(Global_1590682[unk_0x460153A63B9477BC() /*883*/].f_274.f_26, 4))
	{
		return 0;
	}
	if (Global_1370294)
	{
		return 0;
	}
	if ((Global_1690739.f_718.f_5 || Global_1693565.f_718.f_5) || Global_1689767.f_718.f_5)
	{
		return 0;
	}
	if ((Global_1697303.f_724.f_5 || Global_1697303.f_744.f_724.f_5) || Global_1697303.f_1497.f_724.f_5)
	{
		return 0;
	}
	if (Global_1704127.f_726.f_5)
	{
		return 0;
	}
	if (func_276(unk_0x460153A63B9477BC()))
	{
		return 0;
	}
	if ((Global_1370330 || Global_1370331) || Global_1370332)
	{
		return 0;
	}
	return 1;
}

bool func_276(int iParam0)
{
	if (iParam0 == func_65())
	{
		return 0;
	}
	return unk_0xCE990E643CD9D0E5(Global_2425869[iParam0 /*443*/].f_314.f_4, 6);
}

int func_277(int iParam0)
{
	if (func_17(iParam0, 0))
	{
		return 1;
	}
	if (func_278())
	{
		if (iParam0 == unk_0x460153A63B9477BC())
		{
			return 1;
		}
	}
	if (unk_0xCE990E643CD9D0E5(Global_2425869[iParam0 /*443*/].f_199, 2))
	{
		return 1;
	}
	return 0;
}

bool func_278()
{
	return unk_0xCE990E643CD9D0E5(Global_2359302, 3);
}

bool func_279()
{
	return (unk_0xCE990E643CD9D0E5(Global_4456448.f_30, 12) && unk_0xCE990E643CD9D0E5(Global_1696335, 0));
}

int func_280(bool bParam0)
{
	if (unk_0xDE4629DF35A51BEF())
	{
		if (!unk_0x5AEB5DDFFAD43CA5(unk_0x9B0761B4C3EB8BC7()))
		{
			if (func_281(unk_0x9B0761B4C3EB8BC7()))
			{
				if (unk_0x22D6FB6153F774D3(0, 25) || unk_0x22D6FB6153F774D3(0, 68))
				{
					return 0;
				}
			}
		}
	}
	if (Global_22411.f_130)
	{
		return 0;
	}
	if (unk_0x22D6FB6153F774D3(0, 19) || (!bParam0 && unk_0xB9C0D9B37277621D(0, 19)))
	{
		return 1;
	}
	if (unk_0xF8EDFF98A9C94C74())
	{
		if (((unk_0x22D6FB6153F774D3(0, 166) || unk_0x22D6FB6153F774D3(0, 167)) || unk_0x22D6FB6153F774D3(0, 168)) || unk_0x22D6FB6153F774D3(0, 169))
		{
			return 1;
		}
		if (!bParam0)
		{
			if (((unk_0xB9C0D9B37277621D(0, 166) || unk_0xB9C0D9B37277621D(0, 167)) || unk_0xB9C0D9B37277621D(0, 168)) || unk_0xB9C0D9B37277621D(0, 169))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_281(int iParam0)
{
	int iVar0;
	
	if (unk_0xE8CD061CB2B99F32())
	{
		if (!unk_0x5AEB5DDFFAD43CA5(iParam0))
		{
			unk_0x1386E5E658CE3032(iParam0, &iVar0, 1);
			if (((iVar0 == joaat("weapon_sniperrifle") || iVar0 == joaat("weapon_heavysniper")) || iVar0 == joaat("weapon_marksmanrifle")) || iVar0 == joaat("WEAPON_HEAVYSNIPER_MK2"))
			{
				return 1;
			}
		}
	}
	return 0;
}

bool func_282(bool bParam0)
{
	if (bParam0)
	{
		return (Global_22411.f_4 && Global_22411.f_104 == 4);
	}
	return Global_22411.f_4;
}

int func_283(int iParam0, bool bParam1, bool bParam2)
{
	if (bParam1)
	{
		if (func_284(iParam0))
		{
			return 1;
		}
	}
	if (!bParam2)
	{
	}
	if (Global_1590682[iParam0 /*883*/] == -1)
	{
		return 0;
	}
	return 1;
}

bool func_284(int iParam0)
{
	return func_285(iParam0);
}

bool func_285(int iParam0)
{
	return unk_0xCE990E643CD9D0E5(Global_1590682[iParam0 /*883*/].f_13.f_1, 0);
}

bool func_286()
{
	return Global_1590682[unk_0x460153A63B9477BC() /*883*/].f_196 != 0;
}

bool func_287(int iParam0, int iParam1)
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

int func_288()
{
	if (func_289() == 0)
	{
		return 1;
	}
	return 0;
}

int func_289()
{
	return Global_1312485.f_18;
}

int func_290()
{
	if (func_291())
	{
		return 1;
	}
	if (unk_0x03DB5C6AABF8DA46())
	{
		return 0;
	}
	if (unk_0x5DA78AD6801A0523() || unk_0x5B772EFCB84373BE())
	{
		return 0;
	}
	if (unk_0x463040FA7A1E5224())
	{
		return 0;
	}
	return 1;
}

bool func_291()
{
	return Global_1312458;
}

bool func_292()
{
	return Global_1590682[unk_0x460153A63B9477BC() /*883*/] == 5;
}

bool func_293()
{
	return unk_0x578C4EF320340AF7() <= Global_22550.f_5878 + 100;
}

int func_294()
{
	return Global_1377236.f_68;
}

int func_295()
{
	if (Global_1574192 > 16)
	{
		return 1;
	}
	return 0;
}

float func_296()
{
	float fVar0;
	float fVar1;
	float fVar2;
	
	fVar2 = 0.6347182f;
	fVar1 = (1f - (1f - unk_0x1D5FD59B82DB8734()));
	fVar0 = (1f - (fVar1 - fVar2));
	return fVar0;
}

int func_297(int iParam0)
{
	switch (iParam0)
	{
		case 20:
		case 21:
		case 27:
		case 28:
		case 40:
			return 1;
		
		default:
	}
	return 0;
}

int func_298()
{
	if (func_299(unk_0x460153A63B9477BC()))
	{
		return Global_1319161;
	}
	return 0;
}

int func_299(int iParam0)
{
	if (unk_0x25DDB354A40FFCDB())
	{
		if (func_17(iParam0, 0))
		{
			return unk_0x118E43E714532022(iParam0);
		}
	}
	return 0;
}

int func_300()
{
	if (func_298())
	{
		return 1;
	}
	if (func_215(unk_0x460153A63B9477BC()))
	{
		return 0;
	}
	if (func_261())
	{
		return 1;
	}
	if (func_132(unk_0x460153A63B9477BC()))
	{
		switch (func_182(unk_0x460153A63B9477BC()))
		{
			case 131:
			case 132:
			case 133:
			case 136:
			case 138:
			case 139:
			case 141:
			case 144:
			case 146:
				return 1;
				break;
			
			case 140:
				if (!func_301(unk_0x460153A63B9477BC()))
				{
					return 1;
				}
				break;
			
			case 129:
				if (!func_301(unk_0x460153A63B9477BC()))
				{
					return 1;
				}
				break;
			
			case 174:
				if (!func_301(unk_0x460153A63B9477BC()))
				{
					return 1;
				}
				break;
			
			case 175:
				return 1;
				break;
			}
	}
	return 0;
}

bool func_301(int iParam0)
{
	return unk_0xCE990E643CD9D0E5(Global_1630317[iParam0 /*595*/].f_1, 4);
}

int func_302(int iParam0)
{
	if (iParam0 == 28)
	{
		if ((func_132(unk_0x460153A63B9477BC()) && !func_150(unk_0x460153A63B9477BC())) && !func_181(unk_0x460153A63B9477BC()))
		{
			return 1;
		}
	}
	if (iParam0 == 27)
	{
		if (func_106(unk_0x460153A63B9477BC(), 0) && func_150(unk_0x460153A63B9477BC()))
		{
			return 1;
		}
		if (func_141(unk_0x460153A63B9477BC()) == 3)
		{
			return 1;
		}
	}
	return 0;
}

int func_303()
{
	int iVar0;
	
	iVar0 = -1;
	if (!func_17(unk_0x460153A63B9477BC(), 0))
	{
		iVar0 = unk_0x59E2AD1A8ACEDA31();
	}
	else
	{
		iVar0 = func_304();
	}
	if (iVar0 != -1)
	{
		return unk_0xCE990E643CD9D0E5(Local_83[iVar0 /*14*/].f_1, 1);
	}
	return 0;
}

int func_304()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = -1;
	iVar1 = Global_1590682[unk_0x460153A63B9477BC() /*883*/].f_747;
	if (unk_0x166E920FB00B2DBB(iVar1))
	{
		if (unk_0xFA298F06F67BBD4A(iVar1))
		{
			iVar2 = unk_0x653D75F1BBF766B3(iVar1);
			iVar0 = iVar2;
		}
	}
	return iVar0;
}

void func_305()
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < unk_0x2AC1C68C7CCA90E5(1))
	{
		iVar1 = unk_0x39BE1B4CEB4DAEC8(1, iVar0);
		switch (iVar1)
		{
			case 185:
				func_306(iVar0);
				break;
		}
		iVar0++;
	}
}

void func_306(int iParam0)
{
	struct<6> Var0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	struct<14> Var6;
	int iVar7;
	
	if (unk_0x477FAFFE21935947(1, iParam0, &Var0, 13))
	{
		iVar7 = 0;
		while (iVar7 < 4)
		{
			if (!unk_0xCE990E643CD9D0E5(Local_82.f_113, iVar7))
			{
				if (!unk_0xCE990E643CD9D0E5(Local_83[unk_0x59E2AD1A8ACEDA31() /*14*/].f_6, iVar7))
				{
					if (unk_0xAE06B9E39EBDE049(Var0))
					{
						if (unk_0x20F7576FDB52E2B0(Var0))
						{
							if (!unk_0xCE990E643CD9D0E5(Local_82.f_109, iVar7))
							{
								if (!unk_0xCE990E643CD9D0E5(Local_83[unk_0x59E2AD1A8ACEDA31() /*14*/].f_5, iVar7))
								{
									if (unk_0x3D70CCF2C9B362CD(Local_82.f_2[iVar7 /*26*/].f_2))
									{
										if (unk_0xAE06B9E39EBDE049(unk_0x770D3B2B4702434A(Local_82.f_2[iVar7 /*26*/].f_2)))
										{
											if (unk_0xEA90A5DC55A2F652(Var0) == unk_0x770D3B2B4702434A(Local_82.f_2[iVar7 /*26*/].f_2))
											{
												if (unk_0xAE06B9E39EBDE049(Var0.f_1))
												{
													if (unk_0xA1914E72A0EB31D0(Var0.f_1))
													{
														if (unk_0x9048E8838E822F21(Var0.f_1) == unk_0x9B0761B4C3EB8BC7())
														{
															if (func_918() == Local_82.f_118)
															{
																unk_0xBE20AB8238688965(&(Local_83[unk_0x59E2AD1A8ACEDA31() /*14*/].f_5), iVar7);
															}
														}
													}
												}
											}
										}
									}
								}
							}
						}
						else if (unk_0xA1914E72A0EB31D0(Var0))
						{
							iVar2 = unk_0x9048E8838E822F21(Var0);
							if (iVar2 == unk_0x3C6C6327BA564AEE(Local_82.f_2[iVar7 /*26*/].f_1))
							{
								if (unk_0xAE06B9E39EBDE049(Var0.f_1))
								{
									if (unk_0xA1914E72A0EB31D0(Var0.f_1))
									{
										iVar1 = unk_0x9048E8838E822F21(Var0.f_1);
										if (unk_0xD0390A93AF3907B8(iVar1))
										{
											iVar4 = unk_0xE4400E48E081F17A(iVar1);
											if (unk_0xFA298F06F67BBD4A(iVar4))
											{
												if (Var0.f_5)
												{
													if (iVar4 == unk_0x460153A63B9477BC())
													{
														Local_83[unk_0x59E2AD1A8ACEDA31() /*14*/].f_11++;
														unk_0xBE20AB8238688965(&(Local_83[unk_0x59E2AD1A8ACEDA31() /*14*/].f_6), iVar7);
														Var6.f_2 = 1478851655;
														Var6.f_10 = unk_0x460153A63B9477BC();
														func_312(Var6, func_313(0));
														func_307("HUNT_TCKP");
													}
												}
											}
											else if (!unk_0xCE990E643CD9D0E5(Local_83[unk_0x59E2AD1A8ACEDA31() /*14*/].f_7, iVar7))
											{
												if (Var0.f_5)
												{
													iVar4 = unk_0xE4400E48E081F17A(iVar1);
													unk_0xBE20AB8238688965(&(Local_83[unk_0x59E2AD1A8ACEDA31() /*14*/].f_7), iVar7);
												}
											}
										}
										else if (!unk_0xCE990E643CD9D0E5(Local_83[unk_0x59E2AD1A8ACEDA31() /*14*/].f_7, iVar7))
										{
											if (Var0.f_5)
											{
												unk_0xBE20AB8238688965(&(Local_83[unk_0x59E2AD1A8ACEDA31() /*14*/].f_7), iVar7);
											}
										}
									}
									else if (!unk_0xCE990E643CD9D0E5(Local_83[unk_0x59E2AD1A8ACEDA31() /*14*/].f_7, iVar7))
									{
										if (Var0.f_5)
										{
											unk_0xBE20AB8238688965(&(Local_83[unk_0x59E2AD1A8ACEDA31() /*14*/].f_7), iVar7);
										}
									}
								}
								else if (!unk_0xCE990E643CD9D0E5(Local_83[unk_0x59E2AD1A8ACEDA31() /*14*/].f_7, iVar7))
								{
									if (Var0.f_5)
									{
										unk_0xBE20AB8238688965(&(Local_83[unk_0x59E2AD1A8ACEDA31() /*14*/].f_7), iVar7);
									}
								}
							}
						}
					}
				}
			}
			iVar7++;
		}
	}
	if (func_303())
	{
		if (!func_109(unk_0x460153A63B9477BC(), 20))
		{
			if (unk_0xAE06B9E39EBDE049(Var0))
			{
				if (unk_0xA1914E72A0EB31D0(Var0))
				{
					iVar2 = unk_0x9048E8838E822F21(Var0);
					if (unk_0xD0390A93AF3907B8(iVar2))
					{
						iVar3 = unk_0xE4400E48E081F17A(iVar2);
						if (unk_0xAE06B9E39EBDE049(Var0.f_1))
						{
							if (unk_0xA1914E72A0EB31D0(Var0.f_1))
							{
								iVar1 = unk_0x9048E8838E822F21(Var0.f_1);
								if (unk_0xD0390A93AF3907B8(iVar1))
								{
									iVar4 = unk_0xE4400E48E081F17A(iVar1);
									if (iVar4 == unk_0x460153A63B9477BC())
									{
										if (unk_0xFA298F06F67BBD4A(iVar3))
										{
											if (func_190(iVar3, 1))
											{
												if (Local_82.f_118 > -1)
												{
													iVar5 = unk_0x9019589211A13B02(unk_0x628A51AC66E80772(Local_82.f_118));
													if (func_76(iVar3, iVar5, 1))
													{
														if (!func_144())
														{
															func_133(0);
															func_126();
														}
													}
												}
											}
										}
									}
								}
							}
						}
					}
				}
			}
		}
	}
}

int func_307(char* sParam0)
{
	int iVar0;
	
	iVar0 = -1;
	unk_0x5B8DD855EAFD33B5(sParam0);
	iVar0 = unk_0xD60C2975A14D763D(0, 1);
	func_308(0, sParam0, 1, 0, 0, 0, 0, 0, 1, 0, 0, 0);
	return iVar0;
}

void func_308(int iParam0, char* sParam1, int iParam2, char* sParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, char* sParam9, char* sParam10, char* sParam11)
{
	int iVar0;
	
	if ((!func_311() || !unk_0xFC559366953F62B3()) || !func_17(unk_0x460153A63B9477BC(), 0))
	{
		return;
	}
	iVar0 = func_309(iParam2);
	if (iVar0 >= 0 && iVar0 < 5)
	{
		Global_1672611.f_5[iVar0 /*53*/] = iParam0;
		Global_1672611.f_5[iVar0 /*53*/].f_1 = iParam2;
		StringCopy(&(Global_1672611.f_5[iVar0 /*53*/].f_8), sParam1, 16);
		Global_1672611.f_5[iVar0 /*53*/].f_2[0] = iParam4;
		Global_1672611.f_5[iVar0 /*53*/].f_2[1] = iParam5;
		Global_1672611.f_5[iVar0 /*53*/].f_2[2] = iParam6;
		Global_1672611.f_5[iVar0 /*53*/].f_7 = iParam7;
		Global_1672611.f_5[iVar0 /*53*/].f_6 = iParam8;
		StringCopy(&(Global_1672611.f_5[iVar0 /*53*/].f_12), sParam3, 64);
		StringCopy(&(Global_1672611.f_5[iVar0 /*53*/].f_28[0 /*6*/]), sParam9, 24);
		StringCopy(&(Global_1672611.f_5[iVar0 /*53*/].f_28[1 /*6*/]), sParam10, 24);
		StringCopy(&(Global_1672611.f_5[iVar0 /*53*/].f_28[2 /*6*/]), sParam11, 24);
	}
}

int func_309(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= (Global_1672611 - 1))
	{
		if (iParam0 > Global_1672611.f_5[iVar0 /*53*/].f_1)
		{
			func_310(iVar0);
			return iVar0;
		}
		iVar0++;
	}
	Global_1672611++;
	if (Global_1672611 > 5)
	{
		Global_1672611 = 5;
		return Global_1672611;
	}
	return (Global_1672611 - 1);
}

void func_310(int iParam0)
{
	int iVar0;
	
	iVar0 = 4;
	while (iVar0 >= iParam0 + 1)
	{
		Global_1672611.f_5[iVar0 /*53*/] = { Global_1672611.f_5[(iVar0 - 1) /*53*/] };
		iVar0 = (iVar0 + -1);
	}
}

bool func_311()
{
	return unk_0x95C5B896CB42B20E(-1762644250);
}

void func_312(struct<2> Param0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, int iParam13)
{
	Param0 = -1949011582;
	Param0.f_1 = unk_0x460153A63B9477BC();
	if (!iParam13 == 0)
	{
		unk_0xB802750B43D4047C(1, &Param0, 14, iParam13);
	}
}

int func_313(int iParam0)
{
	var uVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = 0;
	while (iVar1 < unk_0xEFA28384DDD283E1())
	{
		if (unk_0xBD09DF93F957A0CF(unk_0x628A51AC66E80772(iVar1)))
		{
			iVar2 = unk_0x9019589211A13B02(unk_0x628A51AC66E80772(iVar1));
			if (func_1031(iVar2, 0, 0))
			{
				if (iVar2 != unk_0x460153A63B9477BC() || iParam0)
				{
					unk_0xBE20AB8238688965(&uVar0, iVar2);
				}
			}
		}
		iVar1++;
	}
	return uVar0;
}

void func_314()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (!func_17(unk_0x460153A63B9477BC(), 0))
	{
		if (unk_0xCE990E643CD9D0E5(iLocal_84, 14))
		{
			unk_0xD2459066EA58CE43(&iLocal_84, 14);
		}
		return;
	}
	iVar0 = Global_1590682[unk_0x460153A63B9477BC() /*883*/].f_747;
	if (!unk_0xCE990E643CD9D0E5(iLocal_84, 14))
	{
		if (Local_83[unk_0x59E2AD1A8ACEDA31() /*14*/].f_1 != 0)
		{
			Local_83[unk_0x59E2AD1A8ACEDA31() /*14*/].f_1 = 0;
		}
		unk_0xBE20AB8238688965(&iLocal_84, 14);
	}
	if (!unk_0xCE990E643CD9D0E5(iLocal_84, 15))
	{
		unk_0xBE20AB8238688965(&iLocal_84, 15);
		func_848();
	}
	if (unk_0x166E920FB00B2DBB(iVar0))
	{
		if (unk_0xFA298F06F67BBD4A(iVar0))
		{
			iVar1 = unk_0x653D75F1BBF766B3(iVar0);
			iVar2 = iVar1;
			iVar3 = Local_83[iVar2 /*14*/].f_9;
			switch (iVar3)
			{
				case 0:
					func_785();
					func_767();
					func_752();
					break;
				
				case 2:
					func_315();
					break;
				
				case 3:
					func_931();
					break;
				}
			}
	}
}

void func_315()
{
	struct<20> Var0;
	int iVar1;
	int iVar2;
	char* sVar3;
	int iVar4;
	int iVar5;
	
	Var0.f_2 = 1065353216;
	Var0.f_3 = 1065353216;
	Var0.f_4 = 1;
	Var0.f_9 = -1;
	Var0.f_18 = -1;
	Var0.f_19 = -1;
	iVar1 = unk_0x59E2AD1A8ACEDA31();
	iVar2 = unk_0x460153A63B9477BC();
	if (func_17(unk_0x460153A63B9477BC(), 0))
	{
		iVar1 = func_304();
		iVar2 = Global_1590682[unk_0x460153A63B9477BC() /*883*/].f_747;
	}
	if (!unk_0xCE990E643CD9D0E5(Local_83[iVar1 /*14*/].f_1, 4))
	{
		if (!unk_0xCE990E643CD9D0E5(iLocal_84, 9))
		{
			if (unk_0xCE990E643CD9D0E5(Local_82.f_1, 1))
			{
				if (iVar1 == Local_82.f_118 || func_918() == Local_82.f_118)
				{
					if (func_141(iVar2) >= 2)
					{
						sVar3 = func_751(iVar2);
						iVar4 = func_750(iVar2);
						func_748(87, "GB_WINNER", "BIGM_HUNTD", sVar3, iVar4, 0, -1, -1, -1, 2, -1);
					}
					if (iVar2 == unk_0x460153A63B9477BC())
					{
						if (!unk_0xCE990E643CD9D0E5(iLocal_84, 6))
						{
							func_630(1, 1, 0, 0, -1, -1, -1, -1, -1, 0);
							unk_0xBE20AB8238688965(&iLocal_84, 6);
						}
						Var0 = func_629();
						Var0.f_1 = func_628();
						func_449(166, 1, &Var0, 0);
						unk_0x601B713E8CE5673A(iVar2);
						iLocal_104 = unk_0xB9FD7D4438BECDFC();
						unk_0x53797676AD34A9AA(0);
						unk_0xBE20AB8238688965(&iLocal_84, 17);
						func_7(&uLocal_105, 0, 0);
					}
				}
				else if (func_303())
				{
					if (func_190(iVar2, 1))
					{
						if (func_141(iVar2) >= 2)
						{
							sVar3 = func_751(unk_0xF1110FE23C67293A(Local_82.f_119));
							iVar4 = func_750(unk_0xF1110FE23C67293A(Local_82.f_119));
							func_748(88, "GB_WORK_OVER", "BIGM_HUNTD", sVar3, iVar4, 0, -1, -1, -1, 2, -1);
						}
						if (iVar2 == unk_0x460153A63B9477BC())
						{
							if (!unk_0xCE990E643CD9D0E5(iLocal_84, 6))
							{
								func_630(0, 2, 0, 0, -1, -1, -1, -1, -1, 0);
								unk_0xBE20AB8238688965(&iLocal_84, 6);
							}
							if (func_127(iVar2))
							{
								Var0 = func_448();
								Var0.f_1 = func_447();
							}
							func_449(166, 0, &Var0, 0);
						}
					}
					else
					{
						if (func_141(iVar2) >= 2)
						{
							sVar3 = func_751(unk_0xF1110FE23C67293A(Local_82.f_119));
							iVar4 = func_750(unk_0xF1110FE23C67293A(Local_82.f_119));
							func_748(88, "GB_WORK_OVER", "BIGM_HUNTD", sVar3, iVar4, 0, -1, -1, -1, 2, -1);
						}
						if (iVar2 == unk_0x460153A63B9477BC())
						{
							if (!unk_0xCE990E643CD9D0E5(iLocal_84, 6))
							{
								func_630(0, 2, 0, 0, -1, -1, -1, -1, -1, 0);
								unk_0xBE20AB8238688965(&iLocal_84, 6);
							}
							if (func_127(iVar2))
							{
								Var0 = func_448();
								Var0.f_1 = func_447();
							}
							func_449(166, 0, &Var0, 0);
						}
					}
				}
				unk_0xBE20AB8238688965(&iLocal_84, 9);
			}
			else if (unk_0xCE990E643CD9D0E5(Local_82.f_1, 3))
			{
				iVar5 = (4 - Local_82.f_115);
				if (iVar1 == Local_82.f_118 || func_918() == Local_82.f_118)
				{
					if (func_141(iVar2) >= 2)
					{
						sVar3 = func_441();
						iVar4 = func_750(iVar2);
						func_748(88, "GB_WORK_OVER", "BIGM_HUNFD", sVar3, iVar4, 0, -1, -1, -1, 2, -1);
					}
					if (iVar2 == unk_0x460153A63B9477BC())
					{
						if (!unk_0xCE990E643CD9D0E5(iLocal_84, 6))
						{
							func_630(0, 2, 0, 0, -1, -1, -1, -1, -1, 0);
							unk_0xBE20AB8238688965(&iLocal_84, 6);
						}
						Var0 = func_629();
						Var0.f_1 = func_628();
						func_449(166, 0, &Var0, 0);
					}
				}
				else
				{
					if (func_141(iVar2) >= 2)
					{
						sVar3 = func_751(unk_0xF1110FE23C67293A(Local_82.f_119));
						iVar4 = func_750(unk_0xF1110FE23C67293A(Local_82.f_119));
						if (iVar5 == 1)
						{
							func_748(87, "GB_WINNER", "BIGM_HUN1S", sVar3, iVar4, 0, iVar5, -1, -1, 2, -1);
						}
						else if (iVar5 > 1)
						{
							func_748(87, "GB_WINNER", "BIGM_HUNRS", sVar3, iVar4, 0, iVar5, -1, -1, 2, -1);
						}
					}
					if (iVar2 == unk_0x460153A63B9477BC())
					{
						if (!unk_0xCE990E643CD9D0E5(iLocal_84, 6))
						{
							func_630(1, 1, 0, 0, -1, -1, -1, -1, -1, 0);
							unk_0xBE20AB8238688965(&iLocal_84, 6);
						}
						if (func_127(iVar2))
						{
							Var0 = func_448();
							Var0.f_1 = func_447();
						}
						func_449(166, 1, &Var0, 0);
						unk_0x601B713E8CE5673A(unk_0x460153A63B9477BC());
					}
				}
				unk_0xBE20AB8238688965(&iLocal_84, 9);
			}
			else if (unk_0xCE990E643CD9D0E5(Local_82.f_1, 5))
			{
				if (func_389())
				{
					if (func_917())
					{
						if (func_141(iVar2) >= 2)
						{
						}
					}
					else if (func_141(iVar2) >= 2)
					{
						func_350(88, "GB_WORK_OVER", "BIGM_HUNTRBQ", 1, -1, 2, 1, 0);
					}
				}
				if (iVar2 == unk_0x460153A63B9477BC())
				{
					if (!unk_0xCE990E643CD9D0E5(iLocal_84, 6))
					{
						func_630(0, 8, 0, 0, -1, -1, -1, -1, -1, 0);
						unk_0xBE20AB8238688965(&iLocal_84, 6);
					}
					func_449(166, 0, &Var0, 0);
				}
				unk_0xBE20AB8238688965(&iLocal_84, 9);
			}
		}
		if (unk_0xCE990E643CD9D0E5(iLocal_84, 9))
		{
			func_848();
			if (!unk_0xCE990E643CD9D0E5(iLocal_85, 8))
			{
				func_335();
				func_75();
				unk_0xBE20AB8238688965(&iLocal_85, 8);
			}
			if (!unk_0xCE990E643CD9D0E5(iLocal_84, 10))
			{
			}
			if (func_316(&uLocal_92, 0, 0))
			{
				if (iVar1 == unk_0x59E2AD1A8ACEDA31())
				{
					unk_0xBE20AB8238688965(&(Local_83[unk_0x59E2AD1A8ACEDA31() /*14*/].f_1), 4);
				}
			}
			else if (unk_0xCE990E643CD9D0E5(iLocal_84, 17))
			{
				if (func_6(&uLocal_105, 10000, 0))
				{
					unk_0x53797676AD34A9AA(iLocal_104);
					unk_0xD2459066EA58CE43(&iLocal_84, 17);
				}
			}
		}
	}
}

int func_316(var uParam0, bool bParam1, int iParam2)
{
	bool bVar0;
	
	func_110(29);
	if ((*uParam0 > 0 && !func_234()) && func_141(unk_0x460153A63B9477BC()) != 0)
	{
		if (!func_332())
		{
			func_331();
		}
	}
	switch (*uParam0)
	{
		case 0:
			if (!func_8(&(uParam0->f_3)))
			{
				func_7(&(uParam0->f_3), 0, 0);
			}
			else if (func_6(&(uParam0->f_3), 1000, 0))
			{
				unk_0xBE20AB8238688965(&(Global_1676119.f_3), 2);
				if (bParam1)
				{
					unk_0xBE20AB8238688965(&(Global_2540384.f_4652), 0);
					func_7(&(uParam0->f_5), 0, 0);
				}
				func_7(&(uParam0->f_1), 0, 0);
				func_330(uParam0, 1);
			}
			break;
		
		case 1:
			if (func_8(&(uParam0->f_5)))
			{
				if (func_6(&(uParam0->f_5), 3000, 0))
				{
					bVar0 = true;
				}
			}
			else
			{
				bVar0 = true;
			}
			if (bVar0)
			{
				func_323(iParam2);
				func_330(uParam0, 2);
			}
			break;
		
		case 2:
			func_323(0);
			if (func_6(&(uParam0->f_1), 15000, 0))
			{
				if (func_317(func_318(0)))
				{
					unk_0xD289B55B6AADBA10(1);
				}
				func_330(uParam0, 3);
			}
			break;
		
		case 3:
			if (func_6(&(uParam0->f_1), 23500, 0))
			{
				unk_0xD2459066EA58CE43(&(Global_2540384.f_4652), 1);
				unk_0xD2459066EA58CE43(&(Global_1676119.f_3), 2);
				func_330(uParam0, 4);
				return 1;
			}
			break;
		
		case 4:
			unk_0xD2459066EA58CE43(&(Global_2540384.f_4652), 1);
			unk_0xD2459066EA58CE43(&(Global_1676119.f_3), 2);
			return 1;
	}
	return 0;
}

bool func_317(char* sParam0)
{
	unk_0x69476B1CA6A9FF80(sParam0);
	return unk_0x1A3A9FFE5CA6F64B(0);
}

char* func_318(int iParam0)
{
	if (((func_321(unk_0x460153A63B9477BC()) || func_320(unk_0x460153A63B9477BC())) || func_254()) || iParam0)
	{
		if (func_320(unk_0x460153A63B9477BC()))
		{
			return "BG_LBD_HELP";
		}
		return "BG_LBD_HELPW";
	}
	if (func_220(func_319()))
	{
		return "GB_LBD_HELP";
	}
	return "GB_LBD_HELPW";
}

int func_319()
{
	return Global_1652336;
}

bool func_320(int iParam0)
{
	return func_221(func_105(iParam0), 0);
}

bool func_321(int iParam0)
{
	return func_322(func_105(iParam0));
}

int func_322(int iParam0)
{
	switch (iParam0)
	{
		case 179:
		case 180:
		case 148:
			if (Global_1590682[unk_0x460153A63B9477BC() /*883*/] == 148 && func_179(Global_1630317[unk_0x460153A63B9477BC() /*595*/].f_11.f_35, 1))
			{
				return 1;
			}
			else
			{
				return 0;
			}
			break;
		
		case 182:
		case 183:
		case 185:
		case 186:
		case 189:
		case 190:
		case 191:
		case 192:
		case 193:
		case 194:
		case 195:
		case 197:
		case 198:
		case 199:
		case 200:
		case 201:
		case 205:
		case 207:
		case 208:
		case 209:
		case 210:
		case 211:
			return 1;
	}
	return 0;
}

void func_323(int iParam0)
{
	if (unk_0xCE990E643CD9D0E5(Global_2540384.f_4652, 0))
	{
		if (((((((((((!unk_0xEBB78303C505A9D7() && !unk_0xCE990E643CD9D0E5(Global_2540384.f_833, 2)) && func_1031(unk_0x460153A63B9477BC(), 1, 1)) && !Global_74030) && !Global_58898) && !unk_0x03DB5C6AABF8DA46()) && !func_109(unk_0x460153A63B9477BC(), 22)) && func_141(unk_0x460153A63B9477BC()) != 0) && !func_328(func_329())) && !func_321(unk_0x460153A63B9477BC())) && !func_327(func_105(unk_0x460153A63B9477BC()))) && !func_326(func_105(unk_0x460153A63B9477BC())))
		{
			unk_0xBE20AB8238688965(&(Global_2540384.f_4652), 1);
			func_325(func_318(iParam0), -1);
			func_324(1);
			unk_0xD2459066EA58CE43(&(Global_2540384.f_4652), 0);
		}
	}
}

void func_324(int iParam0)
{
	char* sVar0;
	
	sVar0 = "GTAO_Boss_Goons_FM_Soundset";
	if (func_253(1))
	{
		sVar0 = "GTAO_Biker_FM_Soundset";
	}
	if (iParam0 && !func_234())
	{
		unk_0xC4CC25B68A91D144(-1, "Boss_Message_Orange", sVar0, false);
	}
}

void func_325(char* sParam0, int iParam1)
{
	unk_0x17751E107423AFE9(sParam0);
	unk_0x1A169149B3D18FCB(0, 0, false, iParam1);
}

int func_326(int iParam0)
{
	switch (iParam0)
	{
		case 150:
		case 236:
		case 237:
		case 238:
		case 239:
		case 240:
		case 241:
		case 242:
		case 244:
		case 248:
		case 249:
		case 250:
			return 1;
		
		default:
	}
	return 0;
}

int func_327(int iParam0)
{
	switch (iParam0)
	{
		case 214:
		case 215:
		case 216:
		case 217:
		case 218:
		case 219:
		case 220:
		case 221:
		case 188:
		case 178:
			return 1;
		
		default:
	}
	return 0;
}

int func_328(int iParam0)
{
	switch (iParam0)
	{
		case 167:
		case 169:
		case 168:
			return 1;
		
		default:
	}
	return 0;
}

int func_329()
{
	char* sVar0;
	
	sVar0 = unk_0x6C5C6B207AA78253();
	if (unk_0xF005CCA4263DF67F(sVar0, "GB_ASSAULT"))
	{
		return 159;
	}
	else if (unk_0xF005CCA4263DF67F(sVar0, "GB_BELLYBEAST"))
	{
		return 157;
	}
	else if (unk_0xF005CCA4263DF67F(sVar0, "GB_DEATHMATCH"))
	{
		return 148;
	}
	else if (unk_0xF005CCA4263DF67F(sVar0, "GB_HUNT_THE_BOSS"))
	{
		return 164;
	}
	else if (unk_0xF005CCA4263DF67F(sVar0, "GB_SIGHTSEER"))
	{
		return 142;
	}
	else if (unk_0xF005CCA4263DF67F(sVar0, "GB_YACHT_ROB"))
	{
		return 152;
	}
	else if (unk_0xF005CCA4263DF67F(sVar0, "GB_CARJACKING"))
	{
		return 163;
	}
	else if (unk_0xF005CCA4263DF67F(sVar0, "GB_COLLECT_MONEY"))
	{
		return 155;
	}
	else if (unk_0xF005CCA4263DF67F(sVar0, "GB_FINDERSKEEPERS"))
	{
		return 160;
	}
	else if (unk_0xF005CCA4263DF67F(sVar0, "GB_FIVESTAR"))
	{
		return 153;
	}
	else if (unk_0xF005CCA4263DF67F(sVar0, "GB_POINT_TO_POINT"))
	{
		return 162;
	}
	else if (unk_0xF005CCA4263DF67F(sVar0, "GB_ROB_SHOP"))
	{
		return 154;
	}
	else if (unk_0xF005CCA4263DF67F(sVar0, "GB_HEADHUNTER"))
	{
		return 166;
	}
	else if (unk_0xF005CCA4263DF67F(sVar0, "GB_CONTRABAND_BUY"))
	{
		return 167;
	}
	else if (unk_0xF005CCA4263DF67F(sVar0, "GB_CONTRABAND_SELL"))
	{
		return 168;
	}
	else if (unk_0xF005CCA4263DF67F(sVar0, "GB_CONTRABAND_DEFEND"))
	{
		return 169;
	}
	else if (unk_0xF005CCA4263DF67F(sVar0, "GB_AIRFREIGHT"))
	{
		return 170;
	}
	else if (unk_0xF005CCA4263DF67F(sVar0, "GB_CASHING_OUT"))
	{
		return 171;
	}
	else if (unk_0xF005CCA4263DF67F(sVar0, "GB_SALVAGE"))
	{
		return 172;
	}
	else if (unk_0xF005CCA4263DF67F(sVar0, "GB_FRAGILE_GOODS"))
	{
		return 173;
	}
	else if (unk_0xF005CCA4263DF67F(sVar0, "GB_VEHICLE_EXPORT"))
	{
		return 178;
	}
	else if (unk_0xF005CCA4263DF67F(sVar0, "GB_ILLICIT_GOODS_RESUPPLY"))
	{
		return 192;
	}
	else if (unk_0xF005CCA4263DF67F(sVar0, "GB_BIKER_JOUST"))
	{
		return 179;
	}
	else if (unk_0xF005CCA4263DF67F(sVar0, "GB_BIKER_UNLOAD_WEAPONS"))
	{
		return 180;
	}
	else if (unk_0xF005CCA4263DF67F(sVar0, "GB_BIKER_BAD_DEAL"))
	{
		return 182;
	}
	else if (unk_0xF005CCA4263DF67F(sVar0, "GB_BIKER_RESCUE_CONTACT"))
	{
		return 183;
	}
	else if (unk_0xF005CCA4263DF67F(sVar0, "GB_BIKER_LAST_RESPECTS"))
	{
		return 185;
	}
	else if (unk_0xF005CCA4263DF67F(sVar0, "GB_BIKER_CONTRACT_KILLING"))
	{
		return 186;
	}
	else if (unk_0xF005CCA4263DF67F(sVar0, "GB_BIKER_RACE_P2P"))
	{
		return 189;
	}
	else if (unk_0xF005CCA4263DF67F(sVar0, "GB_BIKER_CONTRABAND_SELL"))
	{
		return 190;
	}
	else if (unk_0xF005CCA4263DF67F(sVar0, "GB_BIKER_CONTRABAND_DEFEND"))
	{
		return 191;
	}
	else if (unk_0xF005CCA4263DF67F(sVar0, "GB_ILLICIT_GOODS_RESUPPLY"))
	{
		return 192;
	}
	else if (unk_0xF005CCA4263DF67F(sVar0, "GB_BIKER_DRIVEBY_ASSASSIN"))
	{
		return 193;
	}
	else if (unk_0xF005CCA4263DF67F(sVar0, "GB_BIKER_RIPPIN_IT_UP"))
	{
		return 194;
	}
	else if (unk_0xF005CCA4263DF67F(sVar0, "GB_BIKER_FREE_PRISONER"))
	{
		return 197;
	}
	else if (unk_0xF005CCA4263DF67F(sVar0, "GB_BIKER_SAFECRACKER"))
	{
		return 198;
	}
	else if (unk_0xF005CCA4263DF67F(sVar0, "GB_BIKER_STEAL_BIKES"))
	{
		return 195;
	}
	else if (unk_0xF005CCA4263DF67F(sVar0, "GB_BIKER_SEARCH_AND_DESTROY"))
	{
		return 199;
	}
	else if (unk_0xF005CCA4263DF67F(sVar0, "AM_PENNED_IN"))
	{
		return 200;
	}
	else if (unk_0xF005CCA4263DF67F(sVar0, "GB_BIKER_STAND_YOUR_GROUND"))
	{
		return 201;
	}
	else if (unk_0xF005CCA4263DF67F(sVar0, "GB_BIKER_CRIMINAL_MISCHIEF"))
	{
		return 205;
	}
	else if (unk_0xF005CCA4263DF67F(sVar0, "GB_BIKER_DESTROY_VANS"))
	{
		return 207;
	}
	else if (unk_0xF005CCA4263DF67F(sVar0, "GB_BIKER_BURN_ASSETS"))
	{
		return 208;
	}
	else if (unk_0xF005CCA4263DF67F(sVar0, "GB_BIKER_SHUTTLE"))
	{
		return 209;
	}
	else if (unk_0xF005CCA4263DF67F(sVar0, "GB_BIKER_WHEELIE_RIDER"))
	{
		return 210;
	}
	else if (unk_0xF005CCA4263DF67F(sVar0, "GB_PLOUGHED"))
	{
		return 214;
	}
	else if (unk_0xF005CCA4263DF67F(sVar0, "GB_FULLY_LOADED"))
	{
		return 215;
	}
	else if (unk_0xF005CCA4263DF67F(sVar0, "GB_AMPHIBIOUS_ASSAULT"))
	{
		return 216;
	}
	else if (unk_0xF005CCA4263DF67F(sVar0, "GB_TRANSPORTER"))
	{
		return 217;
	}
	else if (unk_0xF005CCA4263DF67F(sVar0, "GB_FORTIFIED"))
	{
		return 218;
	}
	else if (unk_0xF005CCA4263DF67F(sVar0, "GB_VELOCITY"))
	{
		return 219;
	}
	else if (unk_0xF005CCA4263DF67F(sVar0, "GB_STOCKPILING"))
	{
		return 221;
	}
	else if (unk_0xF005CCA4263DF67F(sVar0, "GB_RAMPED_UP"))
	{
		return 220;
	}
	else if (unk_0xF005CCA4263DF67F(sVar0, "GB_GUNRUNNING"))
	{
		return 225;
	}
	else if (unk_0xF005CCA4263DF67F(sVar0, "GB_GUNRUNNING_DEFEND"))
	{
		return 227;
	}
	else if (unk_0xF005CCA4263DF67F(sVar0, "GB_SMUGGLER"))
	{
		return 229;
	}
	else if (unk_0xF005CCA4263DF67F(sVar0, "GB_FM_GANGOPS"))
	{
		return 233;
	}
	return 0;
}

void func_330(var uParam0, int iParam1)
{
	*uParam0 = iParam1;
}

void func_331()
{
	Global_2463793 = 1;
}

int func_332()
{
	if (((((((func_105(unk_0x460153A63B9477BC()) == 170 || func_105(unk_0x460153A63B9477BC()) == 219) || func_105(unk_0x460153A63B9477BC()) == 221) || func_105(unk_0x460153A63B9477BC()) == 220) || func_105(unk_0x460153A63B9477BC()) == 216) || func_105(unk_0x460153A63B9477BC()) == 215) || func_105(unk_0x460153A63B9477BC()) == 214) || func_105(unk_0x460153A63B9477BC()) == 218)
	{
		return 1;
	}
	if (func_333(unk_0x460153A63B9477BC()))
	{
		return 1;
	}
	return 0;
}

int func_333(int iParam0)
{
	if (iParam0 != func_65())
	{
		if (func_1031(iParam0, 1, 1))
		{
			if (Global_2425869[iParam0 /*443*/].f_314.f_6 != -1)
			{
				return func_334(Global_2425869[iParam0 /*443*/].f_314.f_6) == 2;
			}
		}
	}
	return 0;
}

int func_334(int iParam0)
{
	switch (iParam0)
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
			break;
		
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
			break;
		
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
			break;
		
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
			break;
		
		case 70:
		case 71:
		case 72:
		case 73:
		case 74:
		case 75:
		case 76:
		case 77:
		case 78:
		case joaat("MPSV_LP0_31"):
		case 80:
			return 4;
			break;
		
		case 81:
			return 5;
			break;
		
		case 82:
			return 6;
			break;
		
		case 83:
		case 84:
		case 85:
		case 86:
		case 87:
			return 7;
			break;
		
		case 88:
			return 8;
			break;
		
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
			break;
		
		case 101:
			return 10;
			break;
		
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
			break;
		
		case 117:
			return 12;
			break;
		
		case 122:
			return 13;
			break;
		
		case 123:
			return 14;
			break;
		
		case 124:
			return 15;
			break;
		
		case 125:
			return 16;
			break;
		
		case 128:
		case 129:
		case 130:
		case 131:
		case 132:
		case 133:
			return 17;
			break;
		
		case 145:
			return 18;
			break;
		
		case 146:
			return 19;
			break;
		
		case 147:
			return 20;
			break;
	}
	return -1;
}

void func_335()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (unk_0x8F678487EEBD8CE4(iLocal_99[iVar0]))
		{
			unk_0x93370FA10F15BE44(&(iLocal_99[iVar0]));
		}
		iVar0++;
	}
	if (unk_0xCE990E643CD9D0E5(iLocal_84, 18))
	{
		func_349(1);
		unk_0xD2459066EA58CE43(&iLocal_84, 18);
	}
	func_346();
	func_336();
}

void func_336()
{
	int iVar0;
	int iVar1;
	
	if (!unk_0xCE990E643CD9D0E5(iLocal_84, 7))
	{
		unk_0xBE20AB8238688965(&iLocal_84, 7);
		iVar0 = 0;
		while (iVar0 < 32)
		{
			iVar1 = unk_0xF1110FE23C67293A(iVar0);
			if (unk_0x166E920FB00B2DBB(iVar1))
			{
				if (iVar1 != unk_0x460153A63B9477BC())
				{
					if (unk_0xCE990E643CD9D0E5(Local_83[unk_0x59E2AD1A8ACEDA31() /*14*/].f_8, iVar0))
					{
						func_344(iVar1, 432, 0, 0);
						func_337(iVar1, func_343(iLocal_102), 0, 0);
					}
				}
			}
			iVar0++;
		}
	}
}

void func_337(int iParam0, var uParam1, bool bParam2, bool bParam3)
{
	var uVar0;
	
	if (func_339(iParam0))
	{
		return;
	}
	if (func_338(&(Global_2416085.f_624[iParam0]), &(Global_2416085.f_987[iParam0]), &(Global_2416085.f_389), bParam2, iParam0, bParam3, &uVar0))
	{
		if (bParam2)
		{
			Global_2416085.f_459[iParam0] = uParam1;
		}
	}
}

int func_338(var uParam0, var uParam1, int iParam2, bool bParam3, int iParam4, bool bParam5, var uParam6)
{
	if (bParam5)
	{
		if (!unk_0x7FD2BDF03806FD9D(*uParam1) || *uParam1 == unk_0x354AD085195C5FA6())
		{
			*uParam1 = unk_0x354AD085195C5FA6();
			*uParam0 = unk_0x354AD085195C5FA6();
		}
	}
	if (!unk_0x7FD2BDF03806FD9D(*uParam0) || *uParam0 == unk_0x354AD085195C5FA6())
	{
		if (bParam3)
		{
			if (!unk_0xCE990E643CD9D0E5(*iParam2, iParam4))
			{
				*uParam6 = 1;
				unk_0xBE20AB8238688965(iParam2, iParam4);
			}
			*uParam0 = unk_0x354AD085195C5FA6();
		}
		else
		{
			if (unk_0xCE990E643CD9D0E5(*iParam2, iParam4))
			{
				*uParam6 = 1;
				unk_0xD2459066EA58CE43(iParam2, iParam4);
			}
			if (*uParam1 == unk_0x354AD085195C5FA6())
			{
				*uParam1 = -1;
			}
			*uParam0 = -1;
		}
		return 1;
	}
	else if (unk_0x7FD2BDF03806FD9D(*uParam1) && !*uParam1 == unk_0x354AD085195C5FA6())
	{
	}
	return 0;
}

int func_339(int iParam0)
{
	if (iParam0 == func_65())
	{
		return 1;
	}
	if (unk_0x856D5567211886A2(unk_0x6C5C6B207AA78253()) == func_340())
	{
		return 1;
	}
	return 0;
}

int func_340()
{
	switch (func_342())
	{
		case 0:
			return func_341();
			break;
		
		case 2:
			return joaat("creator");
			break;
	}
	return 0;
}

int func_341()
{
	switch (Global_2464595)
	{
		case 0:
			return joaat("freemode");
		
		default:
	}
	return joaat("freemode");
}

int func_342()
{
	return Global_30968;
}

int func_343(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
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
	unk_0x28DD484BAEAF8437(iParam0, &iVar0, &iVar1, &iVar2, &iVar3);
	return ((((iVar0 * 16777216) + (iVar1 * 65536)) + iVar2 * 256) + iVar3);
	return 0;
}

void func_344(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	bool bVar0;
	
	if (func_339(iParam0))
	{
		return;
	}
	if (func_338(&(Global_2416085.f_591[iParam0]), &(Global_2416085.f_954[iParam0]), &(Global_2416085.f_388), bParam2, iParam0, bParam3, &bVar0))
	{
		if (bParam2)
		{
			Global_2416085.f_426[iParam0] = iParam1;
		}
		if (bVar0)
		{
			func_345();
		}
	}
}

void func_345()
{
	Global_2416085.f_1651 = 1;
}

void func_346()
{
	if (unk_0xCE990E643CD9D0E5(iLocal_84, 16))
	{
		func_86();
		func_347();
		unk_0xD2459066EA58CE43(&iLocal_84, 16);
	}
}

void func_347()
{
	if (Global_2413905.f_6 == unk_0x354AD085195C5FA6())
	{
		func_348();
	}
}

void func_348()
{
	struct<28> Var0;
	
	if (unk_0x7FD2BDF03806FD9D(Global_2413905.f_6))
	{
		if (!Global_2413905.f_6 == unk_0x354AD085195C5FA6())
		{
			return;
		}
	}
	Var0.f_7 = 1;
	Var0.f_8 = 1;
	Var0.f_21 = 1115815936;
	Var0.f_27 = -1082130432;
	Global_2413905 = { Var0 };
	Global_2413905.f_6 = -1;
}

void func_349(bool bParam0)
{
	if (unk_0x25DDB354A40FFCDB())
	{
		if (!func_143())
		{
			if (func_1031(unk_0x460153A63B9477BC(), 1, 0))
			{
				unk_0x7542EFCD7D27E5D2(unk_0x9B0761B4C3EB8BC7(), 1);
				unk_0x694113444F21E39F(unk_0x9B0761B4C3EB8BC7(), 342, false);
				unk_0x694113444F21E39F(unk_0x9B0761B4C3EB8BC7(), 122, false);
			}
			unk_0x6C017D65D396CE15(unk_0x460153A63B9477BC(), 1f);
			unk_0x74803B5FA5C6AE45(0);
			unk_0x873FC7B9D84F77F0(true);
			if (Global_1312436.f_1 == 0 || Global_1312436.f_2 == 1)
			{
				Global_1312436.f_2 = 0;
				if (bParam0)
				{
					unk_0x6543AC06C231023E(0, 0);
				}
			}
		}
		else
		{
			if (func_1031(unk_0x460153A63B9477BC(), 1, 1))
			{
				unk_0x7542EFCD7D27E5D2(unk_0x9B0761B4C3EB8BC7(), 0);
				unk_0x69C71C91F56D82B9(unk_0x9B0761B4C3EB8BC7(), joaat("weapon_unarmed"), true);
				unk_0x694113444F21E39F(unk_0x9B0761B4C3EB8BC7(), 342, true);
				unk_0x694113444F21E39F(unk_0x9B0761B4C3EB8BC7(), 122, true);
				unk_0x6C017D65D396CE15(unk_0x460153A63B9477BC(), 0.5f);
				if (Global_1312436.f_1 == 0 || Global_1312436.f_2 == 1)
				{
					unk_0x6543AC06C231023E(1, 0);
				}
			}
			unk_0x74803B5FA5C6AE45(1);
			unk_0x873FC7B9D84F77F0(false);
		}
	}
}

int func_350(int iParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7)
{
	struct<80> Var0;
	
	Var0.f_3 = -1;
	Var0.f_4 = -1;
	Var0.f_5 = -1;
	Var0.f_6 = -1;
	Var0.f_7 = -1082130432;
	Var0.f_16 = 1;
	Var0.f_71 = 1;
	Var0.f_72 = 2;
	Var0.f_79 = -1;
	func_388(iParam0, &Var0, -1, sParam2, sParam1);
	Var0.f_71 = iParam3;
	Var0.f_6 = iParam4;
	Var0.f_72 = iParam5;
	Var0.f_16 = iParam6;
	if (iParam7 != 0)
	{
		func_232(&(Var0.f_69), iParam7);
	}
	return func_351(&Var0);
}

int func_351(var uParam0)
{
	int iVar0;
	
	if (uParam0->f_1 == 1)
	{
		if (Global_2440049.f_3156)
		{
			return 0;
		}
	}
	func_362(uParam0, uParam0->f_17);
	func_361(uParam0);
	if (func_61())
	{
		func_361(uParam0);
	}
	if (func_360(uParam0->f_1))
	{
		func_353();
		if (Global_2440049.f_2834[0 /*80*/].f_2 == 0)
		{
			Global_2440049.f_2834[0 /*80*/] = { *uParam0 };
			if (func_352(uParam0->f_69, 8192))
			{
				Global_1663777 = 1;
			}
			return 1;
		}
		if (((Global_2440049.f_2834[0 /*80*/].f_1 == 13 || Global_2440049.f_2834[0 /*80*/].f_1 == 53) || Global_2440049.f_2834[0 /*80*/].f_1 == 54) || Global_2440049.f_2834[0 /*80*/].f_1 == 58)
		{
			Global_2440049.f_2834[0 /*80*/].f_2 = 5;
		}
		iVar0 = 2;
		while (iVar0 >= 1)
		{
			Global_2440049.f_2834[iVar0 + 1 /*80*/] = { Global_2440049.f_2834[iVar0 /*80*/] };
			iVar0 = (iVar0 + -1);
		}
		Global_2440049.f_2834[1 /*80*/] = { *uParam0 };
		return 1;
	}
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (Global_2440049.f_2834[iVar0 /*80*/].f_2 == 0)
		{
			Global_2440049.f_2834[iVar0 /*80*/] = { *uParam0 };
			if (iVar0 == 0)
			{
				func_353();
			}
			return 1;
		}
		else
		{
			if (uParam0->f_1 == 1)
			{
				func_232(&(Global_2440049.f_2834[iVar0 /*80*/].f_69), 2);
				Global_2440049.f_2834[iVar0 /*80*/].f_2 = 5;
			}
			if (uParam0->f_1 == 86 && !func_352(uParam0->f_69, 128))
			{
				if (func_237(Global_2440049.f_2834[iVar0 /*80*/].f_1))
				{
					Global_2440049.f_2834[iVar0 /*80*/].f_2 = 5;
					func_232(&(Global_2440049.f_2834[iVar0 /*80*/].f_69), 1);
				}
			}
		}
		iVar0++;
	}
	return 0;
}

bool func_352(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

void func_353()
{
	bool bVar0;
	
	if (Global_2440049.f_3157)
	{
		return;
	}
	if (!Global_77101)
	{
		Global_77101 = 1;
		bVar0 = true;
	}
	func_354();
	if (bVar0)
	{
		Global_77101 = 0;
	}
}

void func_354()
{
	Global_2440049.f_3158 = 0;
	Global_2440049.f_3158.f_578 = 0;
	func_358(&(Global_2440049.f_3158.f_1));
	Global_2440049.f_3158.f_1.f_1 = 0;
	func_355(&(Global_2440049.f_3158.f_1), 1);
}

void func_355(var uParam0, int iParam1)
{
	if (uParam0->f_1 != 0)
	{
		unk_0x2E352DDBBF674246(&(uParam0->f_1));
		uParam0->f_1 = 0;
	}
	if ((uParam0->f_562 || iParam1) && uParam0->f_4 != 0)
	{
		if (unk_0xF8EDFF98A9C94C74())
		{
			unk_0x830F007E19C63E14(uParam0->f_4, "TOGGLE_MOUSE_BUTTONS");
			unk_0xF1B28F753235CE2A(false);
			unk_0xE1FDD153F5858534();
		}
		unk_0x2E352DDBBF674246(&(uParam0->f_4));
		uParam0->f_4 = 0;
	}
	if (uParam0->f_564)
	{
		unk_0xFF8E7A064055ECA6(false);
		uParam0->f_564 = 0;
	}
	if (!Global_77101)
	{
		if (!unk_0x252C34B7867FDDFA(unk_0x2639A2323BEA8CC6()))
		{
			if (!Global_77102)
			{
				if (unk_0x03DB5C6AABF8DA46() && !func_357(0))
				{
					unk_0xFD45D90342D2A0CD(800);
				}
			}
		}
	}
	func_356(0);
}

void func_356(int iParam0)
{
	Global_77093 = iParam0;
	Global_77094 = iParam0;
}

bool func_357(bool bParam0)
{
	if (!bParam0 && unk_0x7B70881748D166CD(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return unk_0xCE990E643CD9D0E5(Global_77081, 0);
}

void func_358(var uParam0)
{
	func_359(uParam0);
	uParam0->f_570 = 0;
	uParam0->f_31 = 0;
	uParam0->f_56 = 0;
	uParam0->f_567 = 0;
	uParam0->f_569 = 0;
}

void func_359(var uParam0)
{
	uParam0->f_547 = 1f;
	uParam0->f_546 = 0;
	uParam0->f_568 = 0f;
	uParam0->f_558 = 0;
	uParam0->f_30 = 0f;
	uParam0->f_548 = 0f;
	uParam0->f_559 = 0f;
	uParam0->f_560 = 0f;
	uParam0->f_545 = 0;
	uParam0->f_563 = 0;
	uParam0->f_572 = 0;
	uParam0->f_564 = 0;
	uParam0->f_565 = 0;
	uParam0->f_566 = 0;
	*uParam0 = 0.1125f;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
	uParam0->f_574 = 0;
	uParam0->f_575 = 0;
	uParam0->f_573 = 1f;
}

int func_360(int iParam0)
{
	if (((((((((((((((((((((((iParam0 == 3 || iParam0 == 4) || iParam0 == 5) || iParam0 == 6) || iParam0 == 11) || iParam0 == 12) || iParam0 == 28) || iParam0 == 29) || iParam0 == 30) || iParam0 == 24) || iParam0 == 32) || iParam0 == 31) || iParam0 == 26) || iParam0 == 25) || iParam0 == 56) || iParam0 == 7) || iParam0 == 8) || iParam0 == 9) || iParam0 == 10) || iParam0 == 104) || iParam0 == 100) || iParam0 == 103) || iParam0 == 105) || iParam0 == 110)
	{
		return 1;
	}
	return 0;
}

void func_361(var uParam0)
{
	if (func_239(uParam0->f_1))
	{
		uParam0->f_72 = func_195();
	}
}

void func_362(var uParam0, int iParam1)
{
	if (func_239(uParam0->f_1))
	{
		uParam0->f_73 = 1;
	}
	if (iParam1 == func_65() || !func_1031(iParam1, 0, 1))
	{
		return;
	}
	if (func_237(uParam0->f_1))
	{
		if (uParam0->f_71 == 1)
		{
			uParam0->f_73 = func_363(iParam1, -2, 0, 0, 0);
		}
	}
}

int func_363(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	int iVar1;
	
	if (func_277(iParam0) && !bParam4)
	{
		if (bParam2)
		{
			return 0;
		}
		else
		{
			return 1;
		}
	}
	if (iParam1 == -2)
	{
		iVar0 = unk_0x6CC163E30ECE0790(iParam0);
		if (iVar0 > -1 && iVar0 < 4)
		{
			if (Global_4456448.f_77785[iVar0] != -1)
			{
				iParam1 = iVar0;
			}
		}
	}
	if (((func_277(unk_0x460153A63B9477BC()) || (func_387() && func_386())) && !unk_0xCE990E643CD9D0E5(Global_2540384.f_4655, 31)) && !bParam4)
	{
		iVar1 = func_385();
		if (unk_0xAE06B9E39EBDE049(iVar1))
		{
			if (unk_0xD0390A93AF3907B8(iVar1))
			{
				if (unk_0xE4400E48E081F17A(iVar1) != -1)
				{
					if (func_1031(unk_0xE4400E48E081F17A(iVar1), 0, 1))
					{
						if ((iParam1 > -1 && unk_0xFC559366953F62B3()) && iParam1 < 4)
						{
							if (Global_4456448.f_77785[iParam1] != -1)
							{
								return func_383(iParam1, iParam0, 0);
							}
							else
							{
								return func_376(iParam0, unk_0xE4400E48E081F17A(iVar1), iParam1, bParam2, bParam3);
							}
						}
						else
						{
							return func_376(iParam0, unk_0xE4400E48E081F17A(iVar1), iParam1, bParam2, bParam3);
						}
					}
				}
			}
			else if ((iParam1 > -1 && unk_0xFC559366953F62B3()) && iParam1 < 4)
			{
				if (Global_4456448.f_77785[iParam1] != -1)
				{
					return func_383(iParam1, iParam0, 0);
				}
				else
				{
					return func_364(0, -1, 0);
				}
			}
			else
			{
				return func_364(0, -1, 0);
			}
		}
	}
	if ((iParam1 > -1 && unk_0xFC559366953F62B3()) && iParam1 < 4)
	{
		if (Global_4456448.f_77785[iParam1] != -1)
		{
			return func_383(iParam1, iParam0, 0);
		}
		else
		{
			return func_376(iParam0, unk_0x460153A63B9477BC(), iParam1, bParam2, bParam3);
		}
	}
	return func_376(iParam0, unk_0x460153A63B9477BC(), iParam1, bParam2, bParam3);
}

int func_364(bool bParam0, int iParam1, bool bParam2)
{
	return func_365(unk_0x460153A63B9477BC(), bParam0, iParam1, bParam2);
}

int func_365(int iParam0, bool bParam1, int iParam2, bool bParam3)
{
	int iVar0;
	
	if (!unk_0x166E920FB00B2DBB(iParam0))
	{
		return 3;
	}
	iVar0 = unk_0x6CC163E30ECE0790(iParam0);
	if ((func_375() || (func_374() && func_372())) && Global_1388252.f_1)
	{
		if (bParam1)
		{
			return func_371(iParam2, iVar0);
		}
		else
		{
			return func_371(iVar0, iVar0);
		}
	}
	if (bParam1)
	{
		if (iParam2 > -1)
		{
			if (func_370(iVar0, iParam2, 0) && !unk_0xCE990E643CD9D0E5(Global_4456448.f_15, 18))
			{
				if (iVar0 == iParam2)
				{
					return func_369(1);
				}
				else
				{
					return func_369(0);
				}
			}
			else if (bParam3)
			{
				return 28;
			}
			else if (unk_0xCE990E643CD9D0E5(Global_4456448.f_4, 20))
			{
				return func_366(iVar0, iParam2, 1, 4);
			}
			else
			{
				return func_366(iVar0, iParam2, 0, 4);
			}
		}
		return 28;
	}
	if (iVar0 == iParam2 || iParam2 == -1)
	{
		return func_369(1);
	}
	return func_369(0);
}

int func_366(int iParam0, int iParam1, bool bParam2, int iParam3)
{
	int iVar0;
	
	iVar0 = func_368(iParam0, iParam1, iParam3);
	if (func_367(Global_4456448.f_82708, 1))
	{
		if (iVar0 == 1)
		{
			iVar0 = 0;
		}
	}
	if (bParam2)
	{
		switch (iVar0)
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
		}
	}
	else
	{
		switch (iVar0)
		{
			case 0:
				return 28;
			
			case 1:
				return 29;
			
			case 2:
				return 30;
			}
		
		default:
	}
	return 28;
}

int func_367(int iParam0, bool bParam1)
{
	int iVar0;
	
	if (bParam1)
	{
		if (Global_4456448.f_129348 == 65)
		{
			return 1;
		}
	}
	if (iParam0 == 0)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 <= 6)
	{
		if (iParam0 == Global_262145.f_9021[iVar0])
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_368(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < iParam2)
	{
		if (iVar0 == iParam1)
		{
			return iVar1;
		}
		else if (!iParam0 == iVar0)
		{
			if (!func_370(iParam0, iVar0, 0))
			{
				iVar1++;
			}
		}
		iVar0++;
	}
	return -1;
}

int func_369(bool bParam0)
{
	if (bParam0)
	{
		return 118;
	}
	return 116;
}

int func_370(int iParam0, int iParam1, int iParam2)
{
	if (iParam2 == 1)
	{
		if (iParam0 == iParam1)
		{
			return 1;
		}
		return 0;
	}
	if ((iParam0 > -1 && iParam1 > -1) && iParam0 == iParam1)
	{
		return 1;
	}
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					return unk_0xCE990E643CD9D0E5(Global_4456448.f_541, 0);
				
				case 1:
					return unk_0xCE990E643CD9D0E5(Global_4456448.f_541, 1);
				
				case 2:
					return unk_0xCE990E643CD9D0E5(Global_4456448.f_541, 2);
				
				case 3:
					return unk_0xCE990E643CD9D0E5(Global_4456448.f_541, 3);
				
				default:
			}
			break;
		
		case 1:
			switch (iParam1)
			{
				case 0:
					return unk_0xCE990E643CD9D0E5(Global_4456448.f_541, 4);
				
				case 1:
					return unk_0xCE990E643CD9D0E5(Global_4456448.f_541, 5);
				
				case 2:
					return unk_0xCE990E643CD9D0E5(Global_4456448.f_541, 6);
				
				case 3:
					return unk_0xCE990E643CD9D0E5(Global_4456448.f_541, 7);
				
				default:
			}
			break;
		
		case 2:
			switch (iParam1)
			{
				case 0:
					return unk_0xCE990E643CD9D0E5(Global_4456448.f_541, 8);
				
				case 1:
					return unk_0xCE990E643CD9D0E5(Global_4456448.f_541, 9);
				
				case 2:
					return unk_0xCE990E643CD9D0E5(Global_4456448.f_541, 10);
				
				case 3:
					return unk_0xCE990E643CD9D0E5(Global_4456448.f_541, 11);
				
				default:
			}
			break;
		
		case 3:
			switch (iParam1)
			{
				case 0:
					return unk_0xCE990E643CD9D0E5(Global_4456448.f_541, 12);
				
				case 1:
					return unk_0xCE990E643CD9D0E5(Global_4456448.f_541, 13);
				
				case 2:
					return unk_0xCE990E643CD9D0E5(Global_4456448.f_541, 14);
				
				case 3:
					return unk_0xCE990E643CD9D0E5(Global_4456448.f_541, 15);
				
				default:
			}
			break;
	}
	return 0;
}

int func_371(int iParam0, int iParam1)
{
	if (iParam0 == -1)
	{
		iParam0 = func_368(iParam1, iParam0, 4);
	}
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

bool func_372()
{
	if (func_373())
	{
		return 1;
	}
	return unk_0xCE990E643CD9D0E5(Global_4456448.f_133494, 4);
}

bool func_373()
{
	return unk_0xCE990E643CD9D0E5(Global_4456448.f_123318, 12);
}

bool func_374()
{
	if (unk_0xFC559366953F62B3())
	{
		return unk_0xCE990E643CD9D0E5(Global_4456448.f_133494, 0);
	}
	return ((unk_0xCE990E643CD9D0E5(Global_4456448.f_133494, 0) || Global_1655243) && unk_0x7B70881748D166CD(joaat("fm_deathmatch_creator")) > 0);
}

int func_375()
{
	if (func_373() && unk_0xFC559366953F62B3())
	{
		return 1;
	}
	return 0;
}

int func_376(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	if (iParam2 == -2)
	{
		iVar0 = unk_0x6CC163E30ECE0790(iParam0);
	}
	else
	{
		iVar0 = iParam2;
	}
	if (Global_1590682[unk_0x460153A63B9477BC() /*883*/] == 148)
	{
		bVar1 = true;
	}
	iVar2 = iParam0;
	if (iVar2 > -1)
	{
		if (Global_1590682[iVar2 /*883*/] == 148)
		{
			bVar1 = true;
		}
	}
	if (!bVar1)
	{
		if (iVar0 != -1)
		{
			if (func_379())
			{
				iVar3 = func_194(iParam0);
				if (!iVar3 == -1)
				{
					return func_192(iVar3);
				}
			}
			if ((func_378(iParam1, iParam0, iVar0, 0) && !unk_0xCE990E643CD9D0E5(Global_4456448.f_15, 18)) || ((func_370(unk_0x6CC163E30ECE0790(iParam1), unk_0x6CC163E30ECE0790(iParam0), 0) && unk_0xCE990E643CD9D0E5(Global_4456448.f_15, 23)) && !unk_0xCE990E643CD9D0E5(Global_4456448.f_15, 18)))
			{
				return func_369(1);
			}
			else if (unk_0xCE990E643CD9D0E5(Global_4456448.f_15, 26))
			{
				return func_377(1);
			}
			else
			{
				return func_365(iParam1, 1, iVar0, bParam4);
			}
		}
		else if ((Global_1574416 || Global_1574407) || Global_1590682[iParam0 /*883*/] == 0)
		{
			if (iParam0 == iParam1 || (Global_1574416 == 1 && Global_1574426 == 0))
			{
				return func_369(1);
			}
			else
			{
				return func_365(iParam1, 1, iVar0, bParam4);
			}
		}
		if (Global_1574411 && Global_1573907.f_14 == iParam0)
		{
			return 28;
		}
	}
	iVar4 = func_194(iParam0);
	if (!iVar4 == -1)
	{
		return func_192(iVar4);
	}
	if (bParam3)
	{
		return 0;
	}
	return 1;
}

int func_377(bool bParam0)
{
	if (bParam0)
	{
		return 119;
	}
	return 116;
}

bool func_378(int iParam0, int iParam1, int iParam2, int iParam3)
{
	if (iParam2 == -2)
	{
		if (iParam3 == 0)
		{
			if (unk_0x6CC163E30ECE0790(iParam0) == -1 && unk_0x6CC163E30ECE0790(iParam1) == -1)
			{
				return 0;
			}
		}
		return unk_0x6CC163E30ECE0790(iParam0) == unk_0x6CC163E30ECE0790(iParam1);
	}
	else
	{
		if (iParam3 == 0)
		{
			if (unk_0x6CC163E30ECE0790(iParam0) == -1 && iParam2 == -1)
			{
				return 0;
			}
		}
		return unk_0x6CC163E30ECE0790(iParam0) == iParam2;
	}
	return unk_0x6CC163E30ECE0790(iParam0) == iParam2;
}

int func_379()
{
	if ((((func_173() || func_382()) || func_61()) || func_381()) || func_380())
	{
		return 1;
	}
	if (unk_0xFC559366953F62B3() && unk_0xCE990E643CD9D0E5(Global_4456448.f_36, 1))
	{
		return 1;
	}
	return 0;
}

var func_380()
{
	return Global_2451787.f_23;
}

var func_381()
{
	return Global_2451787.f_20;
}

var func_382()
{
	return Global_2451787.f_17;
}

int func_383(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = Global_969055.f_14[iParam0];
	if (func_379())
	{
		iVar2 = func_194(iParam1);
		if (!iVar2 == -1)
		{
			return func_192(iVar2);
		}
	}
	if (iVar1 > -1 && iVar1 < 17)
	{
		if (unk_0xCE990E643CD9D0E5(Global_4456448.f_592[iParam0 /*16355*/].f_7079[iVar1], 24))
		{
			return 18;
		}
	}
	if (iParam0 > -1 && iParam1 != func_65())
	{
		if (Global_4456448.f_77785[iParam0] != -1 && Global_4456448.f_77785[iParam0] <= 4)
		{
			if (Global_4456448.f_77785[iParam0] == 0)
			{
				iVar0 = 15;
			}
			else if (Global_4456448.f_77785[iParam0] == 1)
			{
				iVar0 = 18;
			}
			else if (Global_4456448.f_77785[iParam0] == 2)
			{
				iVar0 = 24;
			}
			else if (Global_4456448.f_77785[iParam0] == 4)
			{
				if (unk_0xCE990E643CD9D0E5(Global_4456448.f_15, 29))
				{
					iVar0 = 21;
				}
				else
				{
					iVar0 = 6;
				}
			}
			else
			{
				iVar0 = Global_4456448.f_77785[iParam0];
			}
		}
		else
		{
			iVar0 = func_365(iParam1, !bParam2, iParam0, 0);
		}
		if (unk_0xCE990E643CD9D0E5(Global_4456448.f_21, 13))
		{
			iVar0 = func_384(iParam0);
		}
		if (unk_0xCE990E643CD9D0E5(Global_4456448.f_24, 29))
		{
			iVar0 = 0;
		}
		if (unk_0xCE990E643CD9D0E5(Global_4456448.f_15, 26) && !func_370(iParam0, unk_0x6CC163E30ECE0790(iParam1), 0))
		{
			iVar0 = func_377(1);
		}
	}
	else
	{
		iVar0 = 1;
	}
	return iVar0;
}

int func_384(int iParam0)
{
	int iVar0;
	
	switch (iParam0)
	{
		case 0:
			iVar0 = Global_4456448.f_129476;
			break;
		
		case 1:
			iVar0 = Global_4456448.f_129477;
			break;
		
		case 2:
			iVar0 = Global_4456448.f_129478;
			break;
		
		case 3:
			iVar0 = Global_4456448.f_129479;
			break;
	}
	switch (iVar0)
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

var func_385()
{
	return Global_2359302.f_2;
}

bool func_386()
{
	return unk_0xCE990E643CD9D0E5(Global_2359302, 4);
}

bool func_387()
{
	return unk_0xCE990E643CD9D0E5(Global_1590682[unk_0x460153A63B9477BC() /*883*/].f_39.f_18, 14);
}

void func_388(var uParam0, var uParam1, int iParam2, char* sParam3, char* sParam4)
{
	uParam1->f_17 = func_65();
	uParam1->f_18 = func_65();
	uParam1->f_19 = func_65();
	uParam1->f_20 = func_65();
	uParam1->f_1 = uParam0;
	uParam1->f_2 = 1;
	StringCopy(&(uParam1->f_21), sParam4, 16);
	StringCopy(&(uParam1->f_8), sParam3, 32);
	uParam1->f_16 = 1;
	uParam1->f_3 = iParam2;
	uParam1->f_71 = 1;
	uParam1->f_74 = 1;
	uParam1->f_75 = 1;
	uParam1->f_76 = 0;
	uParam1->f_77 = 0;
	uParam1->f_73 = 0;
	StringCopy(&(uParam1->f_25), "", 64);
	StringCopy(&(uParam1->f_41), "", 64);
}

int func_389()
{
	int iVar0;
	
	if (!func_17(unk_0x460153A63B9477BC(), 0))
	{
		if (!func_390(1, 1, 1, 0))
		{
			if (unk_0xCE990E643CD9D0E5(Local_83[unk_0x59E2AD1A8ACEDA31() /*14*/].f_1, 6))
			{
				unk_0xD2459066EA58CE43(&(Local_83[unk_0x59E2AD1A8ACEDA31() /*14*/].f_1), 6);
			}
			return 0;
		}
		if (func_144())
		{
			if (unk_0xCE990E643CD9D0E5(Local_83[unk_0x59E2AD1A8ACEDA31() /*14*/].f_1, 6))
			{
				unk_0xD2459066EA58CE43(&(Local_83[unk_0x59E2AD1A8ACEDA31() /*14*/].f_1), 6);
			}
			return 0;
		}
		if (!unk_0xCE990E643CD9D0E5(Local_83[unk_0x59E2AD1A8ACEDA31() /*14*/].f_1, 6))
		{
			unk_0xBE20AB8238688965(&(Local_83[unk_0x59E2AD1A8ACEDA31() /*14*/].f_1), 6);
		}
	}
	else
	{
		iVar0 = func_304();
		if (iVar0 == -1)
		{
			return 0;
		}
		if (!unk_0xCE990E643CD9D0E5(Local_83[iVar0 /*14*/].f_1, 6))
		{
			return 0;
		}
	}
	return 1;
}

int func_390(bool bParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (func_440(unk_0x460153A63B9477BC(), 29))
	{
		return 0;
	}
	if (func_121(unk_0x460153A63B9477BC(), 21))
	{
		return 0;
	}
	if (func_121(unk_0x460153A63B9477BC(), 25))
	{
		return 0;
	}
	if (bParam2)
	{
		if (unk_0xD0E70037A973A810())
		{
			return 0;
		}
	}
	if (!func_214(unk_0x460153A63B9477BC()))
	{
		return 0;
	}
	if (bParam0)
	{
		if (unk_0x450A8984AFF05042())
		{
			return 0;
		}
	}
	if (func_439(unk_0x460153A63B9477BC()))
	{
		return 0;
	}
	if (func_438())
	{
		return 0;
	}
	if (func_292())
	{
		return 0;
	}
	if (func_437())
	{
		return 0;
	}
	if (func_286())
	{
		return 0;
	}
	if (unk_0xFC559366953F62B3())
	{
		return 0;
	}
	if (func_284(unk_0x460153A63B9477BC()))
	{
		return 0;
	}
	if (!func_288())
	{
		return 0;
	}
	if (func_121(unk_0x460153A63B9477BC(), 0) || func_121(unk_0x460153A63B9477BC(), 3))
	{
		return 0;
	}
	if ((func_121(unk_0x460153A63B9477BC(), 12) || func_121(unk_0x460153A63B9477BC(), 14)) || func_121(unk_0x460153A63B9477BC(), 13))
	{
		return 0;
	}
	if (func_431(unk_0x460153A63B9477BC(), 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0))
	{
		if (!func_402())
		{
			return 0;
		}
	}
	if (bParam1)
	{
		if (func_401())
		{
			return 0;
		}
	}
	if (Global_1663771)
	{
		return 0;
	}
	if (func_400(unk_0x460153A63B9477BC()))
	{
		return 0;
	}
	if (func_399())
	{
		return 0;
	}
	if (func_398(unk_0x460153A63B9477BC()))
	{
		return 0;
	}
	if ((func_397(unk_0x460153A63B9477BC()) && func_396(unk_0x460153A63B9477BC()) == 123) && !bParam3)
	{
		return 0;
	}
	if (func_395())
	{
		return 0;
	}
	if (unk_0xCE990E643CD9D0E5(Global_1590682[unk_0x460153A63B9477BC() /*883*/].f_274.f_26, 4))
	{
		return 0;
	}
	if (func_394(unk_0x460153A63B9477BC()))
	{
		return 0;
	}
	if (func_95(unk_0x460153A63B9477BC()))
	{
		return 0;
	}
	if (!func_150(unk_0x460153A63B9477BC()))
	{
		if (func_393(unk_0x460153A63B9477BC()))
		{
			return 0;
		}
	}
	if (func_391())
	{
		return 0;
	}
	return 1;
}

bool func_391()
{
	return func_392() == 1;
}

int func_392()
{
	return Global_1704006;
}

int func_393(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return Global_1627436[iVar0 /*90*/].f_77.f_12 != 0;
	}
	return 0;
}

int func_394(int iParam0)
{
	if (Global_2425869[iParam0 /*443*/].f_265.f_4 != 0 || Global_2425869[iParam0 /*443*/].f_265.f_5)
	{
		return 1;
	}
	return 0;
}

bool func_395()
{
	return Global_1678288.f_4347 != -1;
}

int func_396(int iParam0)
{
	if (iParam0 != func_65() && func_1031(iParam0, 1, 1))
	{
		return Global_2425869[iParam0 /*443*/].f_314.f_15;
	}
	return -1;
}

int func_397(int iParam0)
{
	if (iParam0 != func_65() && func_1031(iParam0, 1, 1))
	{
		return unk_0xCE990E643CD9D0E5(Global_2425869[iParam0 /*443*/].f_314, 3);
	}
	return 0;
}

int func_398(int iParam0)
{
	if (unk_0xCE990E643CD9D0E5(Global_1590682[iParam0 /*883*/].f_274.f_26, 14))
	{
		return 1;
	}
	if (unk_0xCE990E643CD9D0E5(Global_1590682[iParam0 /*883*/].f_274.f_26, 11))
	{
		return 1;
	}
	return 0;
}

int func_399()
{
	if (Global_4254512.f_943 > -1)
	{
		return 1;
	}
	return 0;
}

int func_400(int iParam0)
{
	if (!func_1031(iParam0, 0, 1))
	{
		return 0;
	}
	return Global_1590682[iParam0 /*883*/].f_35;
}

bool func_401()
{
	return Global_99007.f_352 > 0;
}

int func_402()
{
	int iVar0;
	
	iVar0 = func_105(unk_0x460153A63B9477BC());
	if (((func_430(Global_1590682[unk_0x460153A63B9477BC() /*883*/].f_274.f_28) || func_429(unk_0x460153A63B9477BC())) || func_428(unk_0x460153A63B9477BC())) || func_423(unk_0x460153A63B9477BC()))
	{
		if (((iVar0 == 167 || iVar0 == 168) || iVar0 == 178) || iVar0 == 188)
		{
			return 1;
		}
	}
	if (func_421(unk_0x460153A63B9477BC()))
	{
		if (func_138(iVar0) || func_420(iVar0))
		{
			return 1;
		}
	}
	if (func_333(unk_0x460153A63B9477BC()))
	{
		if (func_420(iVar0))
		{
			return 1;
		}
	}
	if (func_419(unk_0x460153A63B9477BC()))
	{
		if (func_418(iVar0))
		{
			return 1;
		}
	}
	if (func_417(unk_0x460153A63B9477BC()))
	{
		if (func_416(iVar0))
		{
			return 1;
		}
	}
	if (func_415(unk_0x460153A63B9477BC()))
	{
		if (func_414(iVar0))
		{
			return 1;
		}
	}
	if (func_413(unk_0x460153A63B9477BC()))
	{
		if (func_412(iVar0))
		{
			return 1;
		}
	}
	if (func_411(unk_0x460153A63B9477BC(), 0))
	{
		if (func_137(iVar0))
		{
			if (func_409(unk_0x460153A63B9477BC()))
			{
				return 1;
			}
		}
	}
	if (func_408(unk_0x460153A63B9477BC()))
	{
		if (func_407(iVar0))
		{
			return 1;
		}
		if (func_406(iVar0))
		{
			return 1;
		}
		if (func_405())
		{
			return 1;
		}
	}
	if (func_404(unk_0x460153A63B9477BC()))
	{
		if (func_403())
		{
			return 1;
		}
	}
	return 0;
}

bool func_403()
{
	return Global_2540384.f_6663;
}

int func_404(int iParam0)
{
	if (iParam0 != func_65())
	{
		if (func_1031(iParam0, 1, 1))
		{
			if (Global_2425869[iParam0 /*443*/].f_314.f_6 != -1)
			{
				return func_334(Global_2425869[iParam0 /*443*/].f_314.f_6) == 16;
			}
		}
	}
	return 0;
}

bool func_405()
{
	return Global_2540384.f_6662;
}

int func_406(int iParam0)
{
	switch (iParam0)
	{
		case 256:
			return 1;
		
		default:
	}
	return 0;
}

int func_407(int iParam0)
{
	switch (iParam0)
	{
		case 158:
			return 1;
		
		default:
	}
	return 0;
}

int func_408(int iParam0)
{
	if (iParam0 != func_65())
	{
		if (func_1031(iParam0, 1, 1))
		{
			if (Global_2425869[iParam0 /*443*/].f_314.f_6 != -1)
			{
				return func_334(Global_2425869[iParam0 /*443*/].f_314.f_6) == 14;
			}
		}
	}
	return 0;
}

int func_409(int iParam0)
{
	if (func_410(iParam0) != func_65())
	{
		return func_410(iParam0) == func_66(iParam0);
	}
	return 0;
}

int func_410(int iParam0)
{
	return Global_1630317[iParam0 /*595*/].f_11.f_35;
}

int func_411(int iParam0, bool bParam1)
{
	int iVar0;
	
	if (bParam1)
	{
		if (unk_0x47DBF174A0CB9D55(unk_0x9B0761B4C3EB8BC7(), false))
		{
			iVar0 = unk_0xA5D5B1042E8F47BD(unk_0x9B0761B4C3EB8BC7(), false);
			if (unk_0x36FE6D3220816ADA(iVar0) == joaat("terbyte"))
			{
				return 1;
			}
		}
	}
	if (iParam0 != func_65())
	{
		if (func_1031(iParam0, 1, 1))
		{
			if (Global_2425869[iParam0 /*443*/].f_314.f_6 != -1 && Global_2425869[iParam0 /*443*/].f_314.f_9 != func_65())
			{
				return func_334(Global_2425869[iParam0 /*443*/].f_314.f_6) == 12;
			}
		}
	}
	return 0;
}

int func_412(int iParam0)
{
	switch (iParam0)
	{
		case 237:
		case 238:
		case 249:
		case 250:
			return 1;
		
		default:
	}
	return 0;
}

int func_413(int iParam0)
{
	if (iParam0 != func_65())
	{
		if (func_1031(iParam0, 1, 1))
		{
			if (Global_2425869[iParam0 /*443*/].f_314.f_6 != -1)
			{
				return func_334(Global_2425869[iParam0 /*443*/].f_314.f_6) == 11;
			}
		}
	}
	return 0;
}

int func_414(int iParam0)
{
	switch (iParam0)
	{
		case 233:
			return 1;
		
		default:
	}
	return 0;
}

int func_415(int iParam0)
{
	if (iParam0 != func_65())
	{
		if (func_1031(iParam0, 1, 1))
		{
			if (Global_2425869[iParam0 /*443*/].f_314.f_6 != -1)
			{
				return func_334(Global_2425869[iParam0 /*443*/].f_314.f_6) == 9;
			}
		}
	}
	return 0;
}

int func_416(int iParam0)
{
	switch (iParam0)
	{
		case 229:
		case 230:
			return 1;
		
		default:
	}
	return 0;
}

int func_417(int iParam0)
{
	if (iParam0 != func_65())
	{
		if (func_1031(iParam0, 1, 1))
		{
			if (Global_2425869[iParam0 /*443*/].f_314.f_6 != -1)
			{
				return func_334(Global_2425869[iParam0 /*443*/].f_314.f_6) == 7;
			}
		}
	}
	return 0;
}

int func_418(int iParam0)
{
	switch (iParam0)
	{
		case 225:
		case 226:
		case 227:
			return 1;
		
		default:
	}
	return 0;
}

int func_419(int iParam0)
{
	if (iParam0 != func_65())
	{
		if (func_1031(iParam0, 1, 1))
		{
			if (Global_2425869[iParam0 /*443*/].f_314.f_6 != -1)
			{
				return func_334(Global_2425869[iParam0 /*443*/].f_314.f_6) == 4;
			}
		}
	}
	return 0;
}

int func_420(int iParam0)
{
	switch (iParam0)
	{
		case 190:
		case 191:
		case 192:
			return 1;
		
		default:
	}
	return 0;
}

int func_421(int iParam0)
{
	if (func_422(Global_1590682[iParam0 /*883*/].f_274.f_28, -1))
	{
		return 1;
	}
	return 0;
}

int func_422(int iParam0, int iParam1)
{
	if (iParam1 == -1)
	{
		switch (iParam0)
		{
			case 91:
			case 92:
			case 93:
			case 94:
			case 95:
			case 96:
			case 97:
			case 98:
			case 99:
			case 100:
			case 101:
			case 102:
				return 1;
				break;
		}
	}
	else if (iParam1 == 91)
	{
		switch (iParam0)
		{
			case 91:
			case 92:
			case 93:
			case 94:
			case 95:
			case 96:
				return 1;
				break;
		}
	}
	else if (iParam1 == 97)
	{
		switch (iParam0)
		{
			case 97:
			case 98:
			case 99:
			case 100:
			case 101:
			case 102:
				return 1;
				break;
			}
	}
	return 0;
}

int func_423(int iParam0)
{
	if (func_424(Global_1590682[iParam0 /*883*/].f_274.f_28, 0, 0))
	{
		return 1;
	}
	return 0;
}

int func_424(int iParam0, bool bParam1, bool bParam2)
{
	if (bParam2)
	{
		return func_425(unk_0x460153A63B9477BC(), 0);
	}
	if (bParam1)
	{
		if (func_425(unk_0x460153A63B9477BC(), 0))
		{
			return 0;
		}
		switch (iParam0)
		{
			case 103:
			case 106:
			case 109:
			case 112:
			case 104:
			case 107:
			case 110:
			case 113:
			case 105:
			case 108:
			case 111:
			case 114:
				return 1;
				break;
			}
	}
	switch (iParam0)
	{
		case 103:
		case 106:
		case 109:
		case 112:
		case 104:
		case 107:
		case 110:
		case 113:
		case 105:
		case 108:
		case 111:
		case 114:
			return 1;
			break;
	}
	return 0;
}

bool func_425(int iParam0, bool bParam1)
{
	if (Global_1590518 != func_65())
	{
		if (!func_427(Global_1590518))
		{
			return 0;
		}
		if (bParam1)
		{
			if (unk_0x460153A63B9477BC() != Global_1590518)
			{
				if (unk_0xCE990E643CD9D0E5(Global_2425869[Global_1590518 /*443*/].f_199, 24) || func_426(Global_1590518))
				{
					return 1;
				}
			}
		}
	}
	return unk_0xCE990E643CD9D0E5(Global_2425869[iParam0 /*443*/].f_199, 24);
}

int func_426(int iParam0)
{
	if (iParam0 != func_65())
	{
		return unk_0xCE990E643CD9D0E5(Global_2425869[iParam0 /*443*/].f_199, 9);
	}
	return 0;
}

int func_427(int iParam0)
{
	if (iParam0 != func_65())
	{
		return unk_0xCE990E643CD9D0E5(Global_1590682[iParam0 /*883*/].f_274.f_351, 2);
	}
	return 0;
}

int func_428(int iParam0)
{
	if (iParam0 != func_65())
	{
		if (func_1031(iParam0, 1, 1))
		{
			if (Global_2425869[iParam0 /*443*/].f_314.f_6 != -1)
			{
				return func_334(Global_2425869[iParam0 /*443*/].f_314.f_6) == 1;
			}
		}
	}
	return 0;
}

int func_429(int iParam0)
{
	if (iParam0 != func_65())
	{
		if (func_1031(iParam0, 1, 1))
		{
			if (Global_2425869[iParam0 /*443*/].f_314.f_6 != -1)
			{
				return func_334(Global_2425869[iParam0 /*443*/].f_314.f_6) == 0;
			}
		}
	}
	return 0;
}

int func_430(int iParam0)
{
	switch (iParam0)
	{
		case 87:
		case 88:
		case 89:
		case 90:
			return 1;
			break;
	}
	return 0;
}

int func_431(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9, bool bParam10, bool bParam11, bool bParam12, bool bParam13, bool bParam14, bool bParam15, bool bParam16)
{
	if (Global_1590682[iParam0 /*883*/].f_274.f_28 > 0)
	{
		if (bParam1)
		{
			if (unk_0xCE990E643CD9D0E5(Global_1590682[iParam0 /*883*/].f_274.f_26, 0))
			{
				return 1;
			}
		}
		else
		{
			return 1;
		}
	}
	if (!bParam2)
	{
		if (func_429(iParam0))
		{
			return 1;
		}
	}
	if (!bParam3)
	{
		if (func_333(iParam0))
		{
			return 1;
		}
	}
	if (!bParam4)
	{
		if (func_428(iParam0))
		{
			return 1;
		}
	}
	if (!bParam5)
	{
		if (func_419(iParam0))
		{
			return 1;
		}
	}
	if (!bParam6)
	{
		if (func_417(iParam0))
		{
			return 1;
		}
	}
	if (!bParam7)
	{
		if (func_415(iParam0))
		{
			return 1;
		}
	}
	if (!bParam8)
	{
		if (func_436(iParam0))
		{
			return 1;
		}
	}
	if (!bParam9)
	{
		if (func_413(iParam0))
		{
			return 1;
		}
	}
	if (!bParam10)
	{
		if (func_435(iParam0))
		{
			return 1;
		}
	}
	if (!bParam11)
	{
		if (func_411(iParam0, 0))
		{
			return 1;
		}
	}
	if (!bParam12)
	{
		if (func_434(iParam0))
		{
			return 1;
		}
	}
	if (!bParam13)
	{
		if (func_408(iParam0))
		{
			return 1;
		}
	}
	if (!bParam14)
	{
		if (func_433(iParam0))
		{
			return 1;
		}
	}
	if (!bParam15)
	{
		if (func_404(iParam0))
		{
			return 1;
		}
	}
	if (!bParam16)
	{
		if (func_432(iParam0))
		{
			return 1;
		}
	}
	return 0;
}

int func_432(int iParam0)
{
	if (iParam0 != func_65())
	{
		if (func_1031(iParam0, 1, 1))
		{
			if (Global_2425869[iParam0 /*443*/].f_314.f_6 != -1)
			{
				return func_334(Global_2425869[iParam0 /*443*/].f_314.f_6) == 17;
			}
		}
	}
	return 0;
}

int func_433(int iParam0)
{
	if (iParam0 != func_65())
	{
		if (func_1031(iParam0, 1, 1))
		{
			if (Global_2425869[iParam0 /*443*/].f_314.f_6 != -1)
			{
				return func_334(Global_2425869[iParam0 /*443*/].f_314.f_6) == 15;
			}
		}
	}
	return 0;
}

int func_434(int iParam0)
{
	if (iParam0 != func_65())
	{
		if (func_1031(iParam0, 1, 1))
		{
			if (Global_2425869[iParam0 /*443*/].f_314.f_6 != -1)
			{
				return func_334(Global_2425869[iParam0 /*443*/].f_314.f_6) == 13;
			}
		}
	}
	return 0;
}

int func_435(int iParam0)
{
	if (iParam0 != func_65())
	{
		if (func_1031(iParam0, 1, 1))
		{
			if (Global_2425869[iParam0 /*443*/].f_314.f_6 != -1)
			{
				return func_334(Global_2425869[iParam0 /*443*/].f_314.f_6) == 11;
			}
		}
	}
	return 0;
}

int func_436(int iParam0)
{
	if (iParam0 != func_65())
	{
		if (func_1031(iParam0, 1, 1))
		{
			if (Global_2425869[iParam0 /*443*/].f_314.f_6 != -1 && Global_2425869[iParam0 /*443*/].f_314.f_9 != func_65())
			{
				return func_334(Global_2425869[iParam0 /*443*/].f_314.f_6) == 8;
			}
		}
	}
	return 0;
}

bool func_437()
{
	return Global_1312896;
}

bool func_438()
{
	return unk_0xCE990E643CD9D0E5(Global_1590682[unk_0x460153A63B9477BC() /*883*/].f_39.f_18, 0);
}

int func_439(int iParam0)
{
	if (func_283(iParam0, 1, 0))
	{
		if (Global_1590682[iParam0 /*883*/] != 6)
		{
			return 1;
		}
	}
	return 0;
}

bool func_440(int iParam0, int iParam1)
{
	return unk_0xCE990E643CD9D0E5(Global_1630317[iParam0 /*595*/].f_11.f_5, iParam1);
}

char* func_441()
{
	int iVar0;
	char* sVar1;
	
	iVar0 = func_66(unk_0x460153A63B9477BC());
	if (iVar0 != func_65())
	{
		if (iVar0 != unk_0x460153A63B9477BC())
		{
			if (((func_109(iVar0, 28) || func_109(unk_0x460153A63B9477BC(), 28)) || func_446(iVar0)) && !func_445(iVar0))
			{
				return func_443(iVar0, 0);
			}
			if (!unk_0xC6C08C02733D02C8() && !unk_0xB454B9D1010ED3BA(0, -1, 1))
			{
				return func_443(iVar0, 0);
			}
		}
		sVar1 = func_442(&(Global_1630317[iVar0 /*595*/].f_11.f_104));
		if (unk_0x7BCC91F3C1CF24E8(sVar1))
		{
			return func_443(iVar0, 0);
		}
		else
		{
			return sVar1;
		}
	}
	return "";
}

var func_442(var uParam0)
{
	return uParam0;
}

char* func_443(int iParam0, bool bParam1)
{
	if (!bParam1)
	{
		if (func_177(iParam0, 1))
		{
			return func_444();
		}
	}
	return unk_0x7C774D8CB8DC6FE3("GB_REST_ACC");
}

char* func_444()
{
	return unk_0x7C774D8CB8DC6FE3("GB_REST_ACCM");
}

int func_445(int iParam0)
{
	struct<13> Var0;
	
	Var0 = { func_67(iParam0) };
	if (unk_0xC6C08C02733D02C8())
	{
		if (unk_0xF9A94F315B890564(0))
		{
			if (unk_0xA20DDBBB15EC6235(&Var0))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_446(int iParam0)
{
	struct<13> Var0;
	
	if (iParam0 != func_65())
	{
		Var0 = { func_67(iParam0) };
		if (unk_0xDCA0815D900F27F8() || unk_0xF8EDFF98A9C94C74())
		{
			if (unk_0xF9A94F315B890564(0))
			{
				return 0;
			}
		}
		else if (unk_0xC6C08C02733D02C8())
		{
			if (unk_0xF9A94F315B890564(0))
			{
				if (unk_0xA20DDBBB15EC6235(&Var0))
				{
					return 0;
				}
			}
		}
	}
	return 1;
}

int func_447()
{
	return ((4 - Local_82.f_115) * Global_262145.f_15526);
}

int func_448()
{
	return ((4 - Local_82.f_115) * Global_262145.f_15525);
}

void func_449(int iParam0, bool bParam1, var uParam2, bool bParam3)
{
	int iVar0;
	int iVar1;
	float fVar2;
	float fVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	
	func_626(iParam0, &fVar2, &fVar3);
	if (uParam2->f_6 == 0)
	{
		iVar1 = (iVar1 + uParam2->f_1);
		iVar0 = (iVar0 + *uParam2);
	}
	if (bParam1)
	{
		iVar1 = (iVar1 + func_625(iParam0, uParam2->f_13, bParam3));
		if (iParam0 == 233)
		{
			iVar6 = (uParam2->f_10 / uParam2->f_11) * 100;
			iVar1 = ((iVar1 / 100) * iVar6);
		}
		if ((iParam0 == 158 && uParam2->f_21 == 1) && !uParam2->f_22)
		{
			iVar1 = 200;
		}
		iVar1 = round((to_float(iVar1) / to_float(uParam2->f_4)));
		iVar1 = round((IntToFloat(iVar1) * fVar3));
		iVar1 = round((IntToFloat(iVar1) * uParam2->f_3));
		iVar0 = (iVar0 + func_624(iParam0, bParam3));
		iVar0 = round((to_float(iVar0) / to_float(uParam2->f_4)));
		iVar0 = round((IntToFloat(iVar0) * fVar2));
		iVar0 = round((IntToFloat(iVar0) * uParam2->f_2));
	}
	else if ((iParam0 == 185 || iParam0 == 220) || iParam0 == 221)
	{
		iVar1 = round((to_float(iVar1) / to_float(uParam2->f_4)));
		iVar1 = round((IntToFloat(iVar1) * fVar3));
		iVar1 = round((IntToFloat(iVar1) * uParam2->f_3));
		iVar0 = round((to_float(iVar0) / to_float(uParam2->f_4)));
		iVar0 = round((IntToFloat(iVar0) * fVar2));
		iVar0 = round((IntToFloat(iVar0) * uParam2->f_2));
	}
	if (uParam2->f_18 > -1)
	{
		iVar0 = (iVar0 + uParam2->f_18);
	}
	if (uParam2->f_19 > -1)
	{
		iVar1 = (iVar1 + uParam2->f_19);
	}
	if (func_622(iParam0))
	{
		if (bParam1)
		{
			if (func_621(unk_0x460153A63B9477BC()) > 0)
			{
				func_620();
			}
			else
			{
				func_619();
			}
		}
		else
		{
			func_618();
		}
	}
	func_602(iParam0, bParam1, uParam2, &iVar0, &iVar4);
	func_600(iParam0, uParam2, &iVar0, &iVar5);
	func_575(iParam0, uParam2, &iVar0, &iVar5);
	func_572(iParam0, uParam2, &iVar0, &iVar5, &iVar7);
	func_555(iParam0, uParam2, &iVar0, &iVar5);
	if (iParam0 == 168)
	{
		Global_2540384.f_5188.f_383 = iVar4;
	}
	else
	{
		Global_2540384.f_5188.f_383 = iVar5;
	}
	iVar8 = func_256();
	if (iVar8 != func_65() && iParam0 != 148)
	{
		if (func_190(unk_0x460153A63B9477BC(), 0))
		{
			if (!func_76(unk_0x460153A63B9477BC(), iVar8, 1))
			{
				func_544(&iVar0, 1);
			}
		}
	}
	func_540(iParam0, &iVar9, &iVar10);
	iVar1 = (iVar1 + iVar9);
	iVar0 = (iVar0 + iVar10);
	if (iVar1 > 0)
	{
		Global_1676128.f_10 = iVar1;
		func_539();
		func_496(0, unk_0x9B0761B4C3EB8BC7(), "", -875716015, 1626430110, iVar1, 1, -1, 0, 0, 0);
	}
	if (iVar0 > 0)
	{
		Global_1676128.f_9 = iVar0;
		func_470(iParam0, iVar0, iVar7, iVar4, iVar5, uParam2);
		func_469(iParam0, iVar0);
		if (func_468(iParam0))
		{
			if (func_467(iParam0) > -1)
			{
				func_466(func_467(iParam0), iVar0);
			}
		}
		Global_2464451 = iVar0;
		func_465(&Global_2462715, 0, 0);
	}
	if (func_124(unk_0x460153A63B9477BC()) || func_150(unk_0x460153A63B9477BC()))
	{
		func_456(iParam0);
	}
	if (func_322(iParam0))
	{
		Global_1676146.f_13 = iVar0;
		Global_1676146.f_14 = iVar1;
	}
	if (func_327(iParam0))
	{
		Global_1676200.f_13 = iVar0;
		Global_1676200.f_14 = iVar1;
	}
	if (func_418(iParam0))
	{
		Global_1676263.f_12 = iVar0;
		Global_1676263.f_13 = iVar1;
	}
	if (func_416(iParam0))
	{
		Global_1676307.f_12 = iVar0;
		Global_1676307.f_13 = iVar1;
	}
	if (func_414(iParam0))
	{
		Global_1676361.f_12 = iVar0;
		Global_1676361.f_13 = iVar1;
	}
	if (func_326(iParam0))
	{
		if (func_455(iParam0))
		{
			Global_1676443.f_12 = iVar0;
			Global_1676443.f_13 = iVar1;
		}
		else if (func_451(iParam0))
		{
			Global_1676497.f_12 = iVar0;
			Global_1676497.f_13 = iVar1;
		}
	}
	if (func_450(iParam0))
	{
		Global_1676581.f_12 = iVar0;
		Global_1676581.f_13 = iVar1;
	}
	if (func_407(iParam0))
	{
		Global_1676656.f_16 = iVar0;
		Global_1676656.f_17 = iVar1;
	}
	if (func_406(iParam0))
	{
		Global_1676743.f_16 = iVar0;
		Global_1676743.f_17 = iVar1;
	}
}

int func_450(int iParam0)
{
	switch (iParam0)
	{
		case 243:
			return 1;
		
		default:
	}
	return 0;
}

int func_451(int iParam0)
{
	if (((((((((iParam0 == 250 || iParam0 == 238) || iParam0 == 242) || iParam0 == 244) || iParam0 == 248) || iParam0 == 241) || iParam0 == 239) || iParam0 == 240) || iParam0 == 249) || (iParam0 == 237 && func_452(func_453(unk_0x460153A63B9477BC()))))
	{
		return 1;
	}
	return 0;
}

int func_452(int iParam0)
{
	switch (iParam0)
	{
		case 0:
		case 4:
		case 3:
		case 2:
		case 5:
		case 1:
			return 1;
		
		default:
	}
	return 0;
}

int func_453(int iParam0)
{
	if (func_105(iParam0) == 237 || func_105(iParam0) == 250)
	{
		return func_454(iParam0);
	}
	return -1;
}

int func_454(int iParam0)
{
	if (func_106(iParam0, 0))
	{
		return Global_1630317[iParam0 /*595*/].f_11.f_181;
	}
	return -1;
}

int func_455(int iParam0)
{
	if (iParam0 == 237)
	{
		return 1;
	}
	return 0;
}

void func_456(int iParam0)
{
	if (func_464(unk_0x460153A63B9477BC()) && func_463())
	{
		if (func_138(iParam0))
		{
			func_458(10268, -1);
		}
		else if (func_139(iParam0))
		{
			func_458(10270, -1);
		}
		else if (func_221(iParam0, 1))
		{
			func_458(10271, -1);
		}
		else if (func_457(iParam0))
		{
			func_458(10272, -1);
		}
	}
}

int func_457(int iParam0)
{
	switch (iParam0)
	{
		case 194:
		case 193:
		case 189:
		case 153:
			return 1;
		
		default:
	}
	return 0;
}

void func_458(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = func_462(iParam0, func_149(iParam1), 0);
	iVar0++;
	if (!func_461(iParam0))
	{
		func_460(iParam0, iVar0, iParam1, 1, 0);
	}
	else
	{
		func_459(iParam0, iVar0, iParam1, 1);
	}
}

void func_459(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	iVar0 = Global_2551832[iParam0 /*3*/][func_149(iParam2)];
	if (iVar0 != 0)
	{
		unk_0x6000E4684CB4330B(iVar0, iParam1, iParam3);
	}
	switch (iParam0)
	{
		case 787:
			Global_1388125[func_149(iParam2)] = iParam1;
			break;
		
		case 788:
			Global_1388131[func_149(iParam2)] = iParam1;
			break;
		
		case 789:
			Global_1388137[func_149(iParam2)] = iParam1;
			break;
		
		case 790:
			Global_1388143[func_149(iParam2)] = iParam1;
			break;
		
		case 8727:
			Global_1388149[func_149(iParam2)] = iParam1;
			break;
		
		case 777:
			Global_1388095[func_149(iParam2)] = iParam1;
			break;
		
		case 778:
			Global_1388101[func_149(iParam2)] = iParam1;
			break;
		
		case 779:
			Global_1388107[func_149(iParam2)] = iParam1;
			break;
		
		case 780:
			Global_1388113[func_149(iParam2)] = iParam1;
			break;
		
		case 8729:
			Global_1388119[func_149(iParam2)] = iParam1;
			break;
		
		case 767:
			Global_1388065[func_149(iParam2)] = iParam1;
			break;
		
		case 768:
			Global_1388071[func_149(iParam2)] = iParam1;
			break;
		
		case 769:
			Global_1388077[func_149(iParam2)] = iParam1;
			break;
		
		case 770:
			Global_1388083[func_149(iParam2)] = iParam1;
			break;
		
		case 8731:
			Global_1388089[func_149(iParam2)] = iParam1;
			break;
		
		case 757:
			Global_1388155[func_149(iParam2)] = iParam1;
			break;
		
		case 758:
			Global_1388161[func_149(iParam2)] = iParam1;
			break;
		
		case 759:
			Global_1388167[func_149(iParam2)] = iParam1;
			break;
		
		case 760:
			Global_1388173[func_149(iParam2)] = iParam1;
			break;
		
		case 8733:
			Global_1388179[func_149(iParam2)] = iParam1;
			break;
		
		case 1303:
			Global_1388185[func_149(iParam2)] = iParam1;
			break;
		
		case 7234:
			Global_1388191[func_149(iParam2)] = iParam1;
			break;
		
		case 639:
			Global_1388197[func_149(iParam2)] = iParam1;
			break;
		
		case 1278:
			Global_1388203[func_149(iParam2)] = iParam1;
			break;
		
		case 1877:
			Global_2590417[0 /*3*/][func_149(iParam2)] = iParam1;
			break;
		
		case 2268:
			Global_2590417[1 /*3*/][func_149(iParam2)] = iParam1;
			break;
		
		case 2930:
			Global_2590417[2 /*3*/][func_149(iParam2)] = iParam1;
			break;
		
		case 3059:
			Global_2590417[3 /*3*/][func_149(iParam2)] = iParam1;
			break;
		
		case 10138:
			Global_2590566[func_149(iParam2)] = iParam1;
			break;
		
		case 764:
			Global_1388209[func_149(iParam2)] = iParam1;
			break;
		
		case 765:
			Global_1388215[func_149(iParam2)] = iParam1;
			break;
		
		case 766:
			Global_1388221[func_149(iParam2)] = iParam1;
			break;
		
		case 8732:
			Global_1388227[func_149(iParam2)] = iParam1;
			break;
		
		case 9534:
			Global_1388233[func_149(iParam2)] = iParam1;
			break;
		
		case 1236:
			Global_1388239[func_149(iParam2)] = iParam1;
			break;
		
		case 3054:
			Global_2590490[0 /*3*/][func_149(iParam2)] = iParam1;
			break;
		
		case 3055:
			Global_2590490[1 /*3*/][func_149(iParam2)] = iParam1;
			break;
		
		case 3056:
			Global_2590490[2 /*3*/][func_149(iParam2)] = iParam1;
			break;
		
		case 3057:
			Global_2590490[3 /*3*/][func_149(iParam2)] = iParam1;
			break;
		
		case 3058:
			Global_2590490[4 /*3*/][func_149(iParam2)] = iParam1;
			break;
		
		case 3637:
			Global_2590569[0 /*3*/][func_149(iParam2)] = iParam1;
			break;
		
		case 3638:
			Global_2590569[1 /*3*/][func_149(iParam2)] = iParam1;
			break;
		
		case 3639:
			Global_2590569[2 /*3*/][func_149(iParam2)] = iParam1;
			break;
		
		case 3640:
			Global_2590569[3 /*3*/][func_149(iParam2)] = iParam1;
			break;
		
		case 3641:
			Global_2590569[4 /*3*/][func_149(iParam2)] = iParam1;
			break;
		
		case 3642:
			Global_2590585[0 /*3*/][func_149(iParam2)] = iParam1;
			break;
		
		case 3643:
			Global_2590585[1 /*3*/][func_149(iParam2)] = iParam1;
			break;
		
		case 3644:
			Global_2590585[2 /*3*/][func_149(iParam2)] = iParam1;
			break;
		
		case 3645:
			Global_2590585[3 /*3*/][func_149(iParam2)] = iParam1;
			break;
		
		case 3646:
			Global_2590585[4 /*3*/][func_149(iParam2)] = iParam1;
			break;
		
		case 3222:
			Global_2590490[5 /*3*/][func_149(iParam2)] = iParam1;
			break;
		
		case 3228:
			Global_2590417[4 /*3*/][func_149(iParam2)] = iParam1;
			break;
		
		case 3664:
			Global_2590601[func_149(iParam2)] = iParam1;
			break;
		
		case 3665:
			Global_2590610[func_149(iParam2)] = iParam1;
			break;
		
		case 3666:
			Global_2590604[func_149(iParam2)] = iParam1;
			break;
		
		case 3667:
			Global_2590613[func_149(iParam2)] = iParam1;
			break;
		
		case 3668:
			Global_2590607[func_149(iParam2)] = iParam1;
			break;
		
		case 3669:
			Global_2590616[func_149(iParam2)] = iParam1;
			break;
		
		case 3690:
			Global_2590619[func_149(iParam2)] = iParam1;
			break;
		
		case 3230:
			Global_2590490[6 /*3*/][func_149(iParam2)] = iParam1;
			break;
		
		case 3231:
			Global_2590417[5 /*3*/][func_149(iParam2)] = iParam1;
			break;
		
		case 3235:
			Global_2590490[7 /*3*/][func_149(iParam2)] = iParam1;
			break;
		
		case 3233:
			Global_2590417[6 /*3*/][func_149(iParam2)] = iParam1;
			break;
		
		case 4020:
			Global_2590490[8 /*3*/][func_149(iParam2)] = iParam1;
			break;
		
		case 4021:
			Global_2590417[7 /*3*/][func_149(iParam2)] = iParam1;
			break;
		
		case 4023:
			Global_2590490[9 /*3*/][func_149(iParam2)] = iParam1;
			break;
		
		case 4024:
			Global_2590417[8 /*3*/][func_149(iParam2)] = iParam1;
			break;
		
		case 4026:
			Global_2590490[10 /*3*/][func_149(iParam2)] = iParam1;
			break;
		
		case 4027:
			Global_2590417[9 /*3*/][func_149(iParam2)] = iParam1;
			break;
		
		case 4029:
			Global_2590490[11 /*3*/][func_149(iParam2)] = iParam1;
			break;
		
		case 4030:
			Global_2590417[10 /*3*/][func_149(iParam2)] = iParam1;
			break;
		
		case 6110:
			Global_2590490[12 /*3*/][func_149(iParam2)] = iParam1;
			break;
		
		case 6111:
			Global_2590417[11 /*3*/][func_149(iParam2)] = iParam1;
			break;
		
		case 6168:
			Global_2590490[13 /*3*/][func_149(iParam2)] = iParam1;
			break;
		
		case 6169:
			Global_2590417[12 /*3*/][func_149(iParam2)] = iParam1;
			break;
		
		case 6546:
			Global_2590490[14 /*3*/][func_149(iParam2)] = iParam1;
			break;
		
		case 6547:
			Global_2590417[13 /*3*/][func_149(iParam2)] = iParam1;
			break;
		
		case 6559:
			Global_2590490[15 /*3*/][func_149(iParam2)] = iParam1;
			break;
		
		case 6560:
			Global_2590417[14 /*3*/][func_149(iParam2)] = iParam1;
			break;
		
		case 6562:
			Global_2590490[16 /*3*/][func_149(iParam2)] = iParam1;
			break;
		
		case 6563:
			Global_2590417[15 /*3*/][func_149(iParam2)] = iParam1;
			break;
		
		case 6565:
			Global_2590490[17 /*3*/][func_149(iParam2)] = iParam1;
			break;
		
		case 6566:
			Global_2590417[16 /*3*/][func_149(iParam2)] = iParam1;
			break;
		
		case 7284:
			Global_2590417[17 /*3*/][func_149(iParam2)] = iParam1;
			break;
		
		case 7286:
			Global_2590417[18 /*3*/][func_149(iParam2)] = iParam1;
			break;
		
		case 7288:
			Global_2590417[19 /*3*/][func_149(iParam2)] = iParam1;
			break;
		
		case 8011:
			Global_2590417[20 /*3*/][func_149(iParam2)] = iParam1;
			break;
		
		case 8283:
			Global_2590622[func_149(iParam2)] = iParam1;
			break;
		
		case 8284:
			Global_2590625[func_149(iParam2)] = iParam1;
			break;
		
		case 8285:
			Global_2590628[func_149(iParam2)] = iParam1;
			break;
		
		case 8286:
			Global_2590631[func_149(iParam2)] = iParam1;
			break;
		
		case 8287:
			Global_2590634[func_149(iParam2)] = iParam1;
			break;
		
		case 8288:
			Global_2590637[func_149(iParam2)] = iParam1;
			break;
		
		case 8289:
			Global_2590640[func_149(iParam2)] = iParam1;
			break;
		
		case 8290:
			Global_2590643[func_149(iParam2)] = iParam1;
			break;
		
		case 8291:
			Global_2590646[func_149(iParam2)] = iParam1;
			break;
		
		case 8292:
			Global_2590649[func_149(iParam2)] = iParam1;
			break;
		
		case 8293:
			Global_2590652[func_149(iParam2)] = iParam1;
			break;
		
		case 8294:
			Global_2590655[func_149(iParam2)] = iParam1;
			break;
		
		case 8295:
			Global_2590658[func_149(iParam2)] = iParam1;
			break;
		
		case 8901:
			Global_2590661[func_149(iParam2)] = iParam1;
			break;
		
		case 8535:
			Global_2590417[21 /*3*/][func_149(iParam2)] = iParam1;
			break;
		
		case 8978:
			Global_2590490[23 /*3*/][func_149(iParam2)] = iParam1;
			break;
		
		case 8976:
			Global_2590417[22 /*3*/][func_149(iParam2)] = iParam1;
			break;
		
		case 8981:
			Global_2590490[24 /*3*/][func_149(iParam2)] = iParam1;
			break;
		
		case 8979:
			Global_2590417[23 /*3*/][func_149(iParam2)] = iParam1;
			break;
		
		default:
			break;
	}
}

void func_460(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	int iVar0;
	
	if (bParam4)
	{
	}
	iVar0 = Global_2551832[iParam0 /*3*/][func_149(iParam2)];
	if (iVar0 != 0)
	{
		unk_0x6000E4684CB4330B(iVar0, iParam1, iParam3);
	}
}

int func_461(int iParam0)
{
	if (Global_1388046)
	{
		switch (iParam0)
		{
			case 787:
			case 788:
			case 789:
			case 790:
			case 8727:
			case 777:
			case 778:
			case 779:
			case 780:
			case 8729:
			case 767:
			case 768:
			case 769:
			case 770:
			case 8731:
			case 757:
			case 758:
			case 759:
			case 760:
			case 8733:
			case 1303:
			case 7234:
			case 639:
			case 1278:
			case 764:
			case 765:
			case 766:
			case 8732:
			case 9534:
			case 1236:
			case 1877:
			case 2268:
			case 2930:
			case 3059:
			case 10138:
			case 3054:
			case 3055:
			case 3056:
			case 3057:
			case 3058:
			case 3233:
			case 3235:
			case 3637:
			case 3638:
			case 3639:
			case 3640:
			case 3641:
			case 3642:
			case 3643:
			case 3644:
			case 3645:
			case 3646:
			case 3228:
			case 3222:
			case 3664:
			case 3665:
			case 3666:
			case 3667:
			case 3668:
			case 3669:
			case 3690:
			case 3231:
			case 3230:
			case 4021:
			case 4020:
			case 4024:
			case 4023:
			case 4027:
			case 4026:
			case 4030:
			case 4029:
			case 6111:
			case 6110:
			case 6169:
			case 6168:
			case 6534:
			case 6533:
			case 6547:
			case 6546:
			case 6560:
			case 6559:
			case 6563:
			case 6562:
			case 6566:
			case 6565:
			case 7284:
			case 7286:
			case 7288:
			case 8283:
			case 8284:
			case 8285:
			case 8286:
			case 8287:
			case 8288:
			case 8289:
			case 8290:
			case 8291:
			case 8292:
			case 8293:
			case 8294:
			case 8295:
			case 8011:
			case 8535:
			case 8976:
			case 8978:
			case 8979:
			case 8981:
				return 1;
				break;
			}
	}
	return 0;
}

int func_462(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	var uVar1;
	
	if (iParam0 != 11771)
	{
		if (iParam2 == 0)
		{
		}
		iVar0 = Global_2551832[iParam0 /*3*/][func_149(iParam1)];
		if (unk_0xD2F202166691EDB2(iVar0, &uVar1, -1))
		{
			return uVar1;
		}
	}
	return 0;
}

bool func_463()
{
	return func_255(unk_0x460153A63B9477BC());
}

bool func_464(int iParam0)
{
	if (iParam0 == -1)
	{
		return 0;
	}
	return unk_0xCE990E643CD9D0E5(Global_1590682[iParam0 /*883*/].f_274.f_123, 14);
}

void func_465(var uParam0, bool bParam1, bool bParam2)
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

void func_466(int iParam0, int iParam1)
{
	if (iParam1 > 0)
	{
		if (Global_262145.f_23502 == 0 || Global_262145.f_23502 == 1)
		{
			if (!unk_0xF8EDFF98A9C94C74() || Global_262145.f_23502 == 1)
			{
				Global_2540384.f_283 = iParam0;
				if (iParam1 > Global_262145.f_6585)
				{
					iParam1 = Global_262145.f_6585;
				}
				Global_2540384.f_284 = iParam1;
				Global_2540384.f_285 = 0;
			}
		}
	}
}

int func_467(int iParam0)
{
	switch (iParam0)
	{
		case 142:
			return 25;
		
		case 157:
			return 22;
		
		case 159:
			return 21;
		
		case 151:
			return 33;
		
		case 148:
			return 23;
		
		case 164:
			return 24;
		
		case 152:
			return 26;
		
		case 153:
			return 30;
		
		case 154:
			return 32;
		
		case 155:
			return 28;
		
		case 160:
			return 29;
		
		case 162:
			return 31;
		
		case 163:
			return 27;
		
		case 166:
			return 38;
		
		case 170:
			return 34;
		
		case 171:
			return 35;
		
		case 172:
			return 36;
		
		case 173:
			return 37;
		
		case 179:
			return 23;
		
		default:
	}
	return 0;
}

int func_468(int iParam0)
{
	int iVar0;
	
	iVar0 = 1;
	switch (iParam0)
	{
		case 167:
			iVar0 = 0;
			break;
		
		case 169:
			iVar0 = 0;
			break;
		
		case 168:
			iVar0 = 0;
			break;
		
		case 166:
			iVar0 = 0;
			break;
		
		case 190:
			iVar0 = 0;
			break;
		
		case 191:
			iVar0 = 0;
			break;
		
		case 192:
			iVar0 = 0;
			break;
	}
	return iVar0;
}

void func_469(int iParam0, int iParam1)
{
	if (func_464(unk_0x460153A63B9477BC()) && func_463())
	{
		if (func_138(iParam0) && iParam1 > 0)
		{
			func_460(10269, (func_462(10269, -1, 0) + iParam1), -1, 1, 0);
		}
	}
}

void func_470(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, var uParam5)
{
	var uVar0;
	var uVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	bool bVar6;
	struct<2> Var7;
	
	iVar5 = func_495();
	if (iVar5 != func_65())
	{
		func_494(iVar5, &uVar0, &uVar1);
	}
	bVar6 = !func_493(1);
	Var7.f_1 = -1;
	switch (iParam0)
	{
		case 168:
			if (!func_492())
			{
				unk_0x475095B9C4F7F732(iParam1, iParam3);
			}
			break;
		
		case 190:
			if (func_463())
			{
				if (!func_492())
				{
					Var7 = { func_491() };
					unk_0x04A60A9702B796BA(iParam1, unk_0x856D5567211886A2(func_490(Var7)), func_489(Var7), iParam4);
				}
			}
			else if (func_492())
			{
				func_477(-856006867, iParam1, &iVar4, 0, 1, 0);
				Global_4264051[iVar4 /*85*/].f_6 = uVar0;
				Global_4264051[iVar4 /*85*/].f_7 = uVar1;
				Global_4264051[iVar4 /*85*/].f_8 = bVar6;
			}
			else
			{
				unk_0x475095B9C4F7F732(iParam1, iParam4);
			}
			break;
		
		case 226:
			if (func_476())
			{
				if (!func_492())
				{
					unk_0x04A60A9702B796BA(iParam1, unk_0x856D5567211886A2(func_490(func_475(unk_0x460153A63B9477BC()))), 5, iParam4);
				}
			}
			else if (func_492())
			{
				func_477(-856006867, iParam1, &iVar4, 0, 1, 0);
				Global_4264051[iVar4 /*85*/].f_6 = uVar0;
				Global_4264051[iVar4 /*85*/].f_7 = uVar1;
				Global_4264051[iVar4 /*85*/].f_8 = bVar6;
			}
			else
			{
				unk_0x475095B9C4F7F732(iParam1, iParam4);
			}
			break;
		
		case 230:
			if (func_476())
			{
				if (!func_492())
				{
					iVar2 = func_471(uParam5->f_16, iParam4);
					iVar3 = iParam1;
					if (iVar2 > 0)
					{
						iVar3 = (iVar3 - iVar2);
					}
					if (iParam2 > 0)
					{
						iVar3 = (iVar3 - iParam2);
					}
					unk_0x0772DE890A00482D(iVar3, iParam4, iParam2, iVar2, uParam5->f_16);
				}
			}
			else if (func_492())
			{
				func_477(463142405, iParam1, &iVar4, 0, 1, 0);
				Global_4264051[iVar4 /*85*/].f_6 = uVar0;
				Global_4264051[iVar4 /*85*/].f_7 = uVar1;
				Global_4264051[iVar4 /*85*/].f_8 = bVar6;
			}
			else
			{
				unk_0xE4C8AA120E162283(uVar0, uVar1, iParam1, bVar6);
			}
			break;
		
		case 233:
			if (func_492())
			{
				func_477(1407278493, iParam1, &iVar4, 0, 1, 0);
				Global_4264051[iVar4 /*85*/].f_6 = uVar0;
				Global_4264051[iVar4 /*85*/].f_7 = uVar1;
				Global_4264051[iVar4 /*85*/].f_8 = bVar6;
			}
			else
			{
				unk_0xEC03AD87CC7E1447(iParam1);
			}
			break;
		
		case 237:
			if (func_476())
			{
				if (!func_492())
				{
					unk_0x052D79AA393A7E68(iParam1, uParam5->f_20, iParam4);
				}
			}
			else if (func_492())
			{
				func_477(-856006867, iParam1, &iVar4, 0, 1, 0);
				Global_4264051[iVar4 /*85*/].f_6 = uVar0;
				Global_4264051[iVar4 /*85*/].f_7 = uVar1;
				Global_4264051[iVar4 /*85*/].f_8 = bVar6;
			}
			else
			{
				unk_0x475095B9C4F7F732(iParam1, iParam4);
			}
			break;
		
		case 250:
			if (func_492())
			{
				func_477(-961034881, iParam1, &iVar4, 0, 1, 0);
				Global_4264051[iVar4 /*85*/].f_6 = uVar0;
				Global_4264051[iVar4 /*85*/].f_7 = uVar1;
				Global_4264051[iVar4 /*85*/].f_8 = bVar6;
			}
			else
			{
				unk_0xA85DAA0267EF6B8D(iParam1);
			}
			break;
		
		case 249:
			if (func_492())
			{
				func_477(1135468152, iParam1, &iVar4, 0, 1, 0);
				Global_4264051[iVar4 /*85*/].f_6 = uVar0;
				Global_4264051[iVar4 /*85*/].f_7 = uVar1;
				Global_4264051[iVar4 /*85*/].f_8 = bVar6;
			}
			else
			{
				unk_0x92A7449E57F4C0C3(iParam1);
			}
			break;
		
		case 242:
		case 244:
		case 248:
		case 241:
		case 239:
		case 240:
			if (func_492())
			{
				func_477(-634726636, iParam1, &iVar4, 0, 1, 0);
				Global_4264051[iVar4 /*85*/].f_6 = uVar0;
				Global_4264051[iVar4 /*85*/].f_7 = uVar1;
				Global_4264051[iVar4 /*85*/].f_8 = bVar6;
			}
			else
			{
				unk_0xC2561B6B17B28E67(iParam1);
			}
			break;
		
		case 243:
			if (func_492())
			{
				func_477(1698417709, iParam1, &iVar4, 0, 1, 0);
				Global_4264051[iVar4 /*85*/].f_6 = uVar0;
				Global_4264051[iVar4 /*85*/].f_7 = uVar1;
				Global_4264051[iVar4 /*85*/].f_8 = bVar6;
			}
			else
			{
				unk_0x8092F21D0B94C61E(iParam1);
			}
			break;
		
		case 158:
			if (uParam5->f_22)
			{
				if (func_492())
				{
					func_477(1668610896, iParam1, &iVar4, 0, 1, 0);
				}
				else
				{
					unk_0xFD7A82D67D455BFC(iParam1, 0, 0, 1, iParam1, 0, 0);
				}
			}
			else if (func_492())
			{
				func_477(-2032529561, iParam1, &iVar4, 0, 1, 0);
			}
			else
			{
				unk_0xFD7A82D67D455BFC(iParam1, 1, iParam1, 0, 0, 0, 0);
			}
			break;
		
		default:
			if (func_492())
			{
				func_477(-856006867, iParam1, &iVar4, 0, 1, 0);
				Global_4264051[iVar4 /*85*/].f_6 = uVar0;
				Global_4264051[iVar4 /*85*/].f_7 = uVar1;
				Global_4264051[iVar4 /*85*/].f_8 = bVar6;
			}
			else
			{
				unk_0x88199F47F6269E70(uVar0, uVar1, iParam1, bVar6);
			}
			break;
	}
}

int func_471(int iParam0, int iParam1)
{
	float fVar0;
	float fVar1;
	
	fVar0 = func_474(iParam0, iParam1);
	fVar1 = (to_float(func_472(iParam0, iParam1)) * fVar0);
	return round(fVar1);
}

int func_472(int iParam0, int iParam1)
{
	return (func_473(iParam0) * iParam1);
}

int func_473(int iParam0)
{
	switch (iParam0)
	{
		case 8:
			return Global_262145.f_22319;
		
		case 0:
			return Global_262145.f_22320;
		
		case 1:
			return Global_262145.f_22321;
		
		case 2:
			return Global_262145.f_22322;
		
		case 3:
			return Global_262145.f_22323;
		
		case 4:
			return Global_262145.f_22324;
		
		case 5:
			return Global_262145.f_22325;
		
		case 6:
			return Global_262145.f_22326;
		
		case 7:
			return Global_262145.f_22327;
		
		default:
	}
	return 0;
}

float func_474(int iParam0, int iParam1)
{
	float fVar0;
	float fVar1;
	int iVar2;
	
	fVar0 = 0f;
	fVar1 = to_float(Global_262145.f_22329);
	switch (iParam0)
	{
		case -1:
		case 8:
			return 0f;
		
		case 7:
			fVar0 = Global_262145.f_22331;
			fVar1 = to_float(Global_262145.f_22328);
			break;
		
		case 3:
			fVar0 = Global_262145.f_22331;
			fVar1 = to_float(Global_262145.f_22328);
			break;
		
		case 0:
			fVar0 = Global_262145.f_22332;
			break;
		
		case 1:
			fVar0 = Global_262145.f_22332;
			break;
		
		case 4:
			fVar0 = Global_262145.f_22332;
			break;
		
		case 6:
			fVar0 = Global_262145.f_22333;
			fVar1 = to_float(Global_262145.f_22330);
			break;
		
		case 2:
			fVar0 = Global_262145.f_22333;
			fVar1 = to_float(Global_262145.f_22330);
			break;
		
		case 5:
			fVar0 = Global_262145.f_22333;
			fVar1 = to_float(Global_262145.f_22330);
			break;
	}
	iVar2 = floor((to_float(iParam1) / fVar1));
	return (to_float(iVar2) * fVar0);
}

int func_475(int iParam0)
{
	if (iParam0 == func_65())
	{
		return 0;
	}
	return Global_1590682[iParam0 /*883*/].f_274.f_183[5 /*12*/];
}

bool func_476()
{
	return func_123(unk_0x460153A63B9477BC());
}

void func_477(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4, bool bParam5)
{
	int iVar0;
	
	if (!func_492())
	{
		return;
	}
	iVar0 = 1;
	if (bParam4)
	{
		iVar0 = 4;
	}
	else if (bParam3)
	{
		iVar0 = 2;
	}
	else if (bParam5)
	{
		iVar0 = 8;
	}
	switch (iParam0)
	{
		case -1645229221:
		case -585718395:
		case -1359375127:
		case 454359403:
		case -982394051:
		case 1643659499:
		case -2072289654:
		case 650665123:
		case 1654961868:
		case -876847842:
		case 68030260:
		case -2122299283:
		case 366672791:
		case 283351220:
		case 291576838:
		case 1182673174:
		case -516219046:
		case 1036455748:
		case 277665518:
		case 2043854386:
		case 1839532116:
		case 1022400740:
		case 1940862352:
		case -1389227906:
		case 711665950:
		case 1704445500:
		case 1515774909:
		case 1173654533:
		case -899802304:
		case -663944335:
		case 1208553146:
		case -613221010:
		case -671062876:
		case -407201236:
		case -754024203:
		case -1885444887:
		case 1931729587:
		case 1064954035:
		case -180141073:
		case 2131324797:
		case 1612072658:
		case -517447402:
		case 1948102096:
		case 1108628223:
		case -1834046564:
		case -1239008812:
		case -222363842:
		case -1276678868:
		case 1564537328:
		case -96593501:
		case 742499889:
		case 2050093329:
		case -1752488069:
		case 634375935:
		case 1850983186:
		case 763367758:
		case 1941570214:
		case 665109499:
		case -1330755006:
		case 1976384368:
		case 268924934:
		case 1869490922:
		case -336803850:
		case -1412692765:
		case 618167454:
		case 980623936:
		case 437291904:
		case -135813048:
		case -930104477:
		case -1420909320:
		case -1733398043:
		case -1892760262:
		case -1545737048:
		case 2039302543:
		case 402505853:
		case -1143510182:
		case 1678112166:
		case 837955913:
		case -1532467144:
		case 1815541181:
			if (iParam1 > 0 || Global_262145.f_27657)
			{
				func_478(iParam2, -1135378931, 537254313, 1474183246, iParam0, iParam1, iVar0, 7);
			}
			break;
		
		case -31156877:
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
		case 1982688246:
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
		case -101307780:
		case -664597565:
		case 599804707:
		case -327918414:
		case 550898518:
		case 835976347:
		case 1347433368:
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
		case 403506509:
		case -883876414:
		case -1064150715:
		case -1387253055:
		case -716963152:
		case 1138089938:
		case -561012053:
			func_478(iParam2, -1135378931, 1445302971, 1474183246, iParam0, iParam1, iVar0, 7);
			break;
	}
	switch (iParam0)
	{
		case -1342064661:
		case -1693570755:
		case 1868043300:
		case -697248883:
		case -1295545795:
		case 914079366:
		case 395122350:
		case -331981076:
		case 1671535231:
		case -1896606724:
		case -1291433573:
		case 538631715:
		case 133782822:
		case 2081885153:
		case -1314365345:
		case 1322977732:
		case 396623013:
		case 1981664462:
		case -1921250821:
		case -1370731547:
		case 1683798242:
		case -910968288:
			if (iParam1 > 0 || Global_262145.f_27657)
			{
				func_478(iParam2, -1135378931, 537254313, 1474183246, iParam0, iParam1, iVar0, 7);
			}
			break;
		
		case 1240683675:
		case 1241904665:
		case -1100963799:
		case -494565059:
		case 827308208:
		case -1857685192:
		case 1698417709:
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
		case -2017925037:
		case 1668610896:
		case -2032529561:
		case -1224479447:
		case -319306689:
		case -466527264:
		case 1925965142:
		case 592152676:
		case 2035612943:
		case 1568659720:
		case 1220095570:
		case 2050320631:
		case 592672421:
		case 1775876058:
		case -842062976:
		case -518651910:
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
			func_478(iParam2, -1135378931, 1445302971, 1474183246, iParam0, iParam1, iVar0, 7);
			break;
	}
}

int func_478(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7)
{
	bool bVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	int iVar4;
	bool bVar5;
	
	bVar0 = false;
	if (!func_492())
	{
		bVar0 = true;
	}
	iVar1 = 1;
	if (!bVar0)
	{
		if (!unk_0x5053392075AA583C(func_19()) || unk_0x701B05C16EF4F48E())
		{
			Global_4265553 = 1;
			return 0;
		}
		if (Global_2463410)
		{
			if (iParam3 == 1067618600 || iParam3 == -1303831698)
			{
				Global_4265554 = 1;
				return 0;
			}
		}
	}
	bVar3 = false;
	iVar2 = 0;
	while (iVar2 < 15)
	{
		if (Global_4264051[iVar2 /*85*/].f_66.f_2 == 0)
		{
			bVar3 = true;
		}
		iVar2++;
	}
	if (!bVar3)
	{
		return 0;
	}
	*uParam0 = 15;
	iVar4 = 2147483647;
	if ((bVar0 || iVar1) || unk_0x734A68E809CC23F0(&iVar4, iParam3, iParam4, iParam2, iParam5, iParam6))
	{
		if ((bVar0 || iVar1) || unk_0x9F5556ED9A739FBC(iVar4))
		{
			*uParam0 = func_485(iVar4, iParam1, iParam4, iParam2, iParam3, iParam5, 0, iParam6, iParam7, 1, 1);
			if (iVar1 && !bVar0)
			{
			}
			if (bVar0)
			{
				if (*uParam0 != -1)
				{
					Global_4264051[*uParam0 /*85*/].f_66.f_8 = 1;
					Global_4264051[*uParam0 /*85*/].f_66.f_12 = 1;
				}
			}
			Global_4265538 = 1;
			return 1;
		}
	}
	else
	{
		if (iParam7 & 2 != 0)
		{
			Global_4265552 = 1;
			Global_4265555 = iParam4;
			Global_4265557 = iParam3;
			Global_4265558 = 1;
			Global_4265556 = iParam5;
		}
		if (iParam7 & 8 != 0)
		{
			Global_4265555 = iParam4;
			Global_4265557 = iParam3;
			Global_4265558 = 1;
			Global_4265556 = iParam5;
		}
		bVar5 = false;
		if (bVar5)
		{
			func_484(1, iParam4);
			Global_4265552 = 0;
		}
		if (iParam7 & 4 != 0)
		{
			func_479(-1, iParam4, iParam6, iParam5, -1);
		}
	}
	return 0;
}

void func_479(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	switch (iParam1)
	{
		case 1704445500:
			unk_0xBE20AB8238688965(&(Global_2425869[unk_0x460153A63B9477BC() /*443*/].f_126.f_71), 0);
			break;
	}
	if (iParam0 != -1)
	{
		func_480(iParam0);
	}
}

void func_480(int iParam0)
{
	bool bVar0;
	
	bVar0 = false;
	if (!func_492())
	{
		bVar0 = true;
	}
	if (iParam0 != -1)
	{
		if (func_483(iParam0))
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
		func_481(&(Global_4264051[iParam0 /*85*/]));
	}
}

void func_481(var uParam0)
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
	func_482(&(uParam0->f_14));
	func_482(&(uParam0->f_14.f_13));
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

void func_482(var uParam0)
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

int func_483(int iParam0)
{
	if (iParam0 >= 0 && iParam0 < 15)
	{
		return Global_4264051[iParam0 /*85*/].f_66.f_5 == 1;
	}
	return 0;
}

void func_484(int iParam0, int iParam1)
{
	Global_2464590 = iParam1;
	Global_2464589 = iParam0;
}

int func_485(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, bool bParam6, int iParam7, var uParam8, int iParam9, int iParam10)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 15)
	{
		if (Global_4264051[iVar0 /*85*/].f_66.f_2 == 0)
		{
			if (!func_492())
			{
				iParam0 = iVar0 + 900;
			}
			Global_4264051[iVar0 /*85*/].f_66.f_2 = 1;
			Global_4264051[iVar0 /*85*/].f_66.f_1 = iParam5;
			Global_4264051[iVar0 /*85*/].f_66.f_3 = iParam1;
			Global_4264051[iVar0 /*85*/].f_66.f_4 = iParam2;
			Global_4264051[iVar0 /*85*/].f_66.f_7 = iParam3;
			Global_4264051[iVar0 /*85*/].f_66.f_5 = 0;
			Global_4264051[iVar0 /*85*/].f_66 = iParam0;
			Global_4264051[iVar0 /*85*/].f_66.f_6 = iParam4;
			Global_4264051[iVar0 /*85*/].f_66.f_11 = uParam8;
			Global_4264051[iVar0 /*85*/].f_66.f_10 = iParam7;
			Global_4264051[iVar0 /*85*/].f_66.f_13 = iParam9;
			Global_4264051[iVar0 /*85*/].f_66.f_12 = 0;
			Global_4264051[iVar0 /*85*/].f_66.f_14 = unk_0xD3137A576BE9EC5C();
			Global_4264051[iVar0 /*85*/].f_66.f_18 = 0;
			Global_4265538 = 0;
			if (bParam6)
			{
				Global_4264051[iVar0 /*85*/].f_66.f_5 = 1;
			}
			if (iParam1 == -1135378931 && iParam10)
			{
				func_486(Global_4264051[iVar0 /*85*/], iVar0);
			}
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_486(struct<67> Param0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, int iParam19)
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
	iVar1 = func_488(Var0.f_1);
	if ((Global_262145.f_23581 && !Global_262145.f_23582) && !Global_262145.f_23583)
	{
		return;
	}
	if (!iVar1 == 0)
	{
		func_487();
		unk_0xB802750B43D4047C(1, &Var0, 36, iVar1);
	}
}

void func_487()
{
	unk_0xBE9B3870B1B370E3("AM_ARENA_SHP");
}

var func_488(int iParam0)
{
	var uVar0;
	
	if (iParam0 != -1)
	{
		unk_0xBE20AB8238688965(&uVar0, iParam0);
	}
	return uVar0;
}

int func_489(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return 3;
		
		case 2:
			return 1;
		
		case 3:
			return 4;
		
		case 4:
			return 2;
		
		case 5:
			return 0;
		
		case 6:
			return 3;
		
		case 7:
			return 1;
		
		case 8:
			return 4;
		
		case 9:
			return 2;
		
		case 10:
			return 0;
		
		case 11:
			return 3;
		
		case 12:
			return 1;
		
		case 13:
			return 4;
		
		case 14:
			return 2;
		
		case 15:
			return 0;
		
		case 16:
			return 3;
		
		case 17:
			return 1;
		
		case 18:
			return 4;
		
		case 19:
			return 2;
		
		case 20:
			return 0;
		
		case 21:
			return 5;
		
		case 22:
			return 5;
		
		case 23:
			return 5;
		
		case 24:
			return 5;
		
		case 25:
			return 5;
		
		case 26:
			return 5;
		
		case 27:
			return 5;
		
		case 28:
			return 5;
		
		case 29:
			return 5;
		
		case 30:
			return 5;
		
		case 31:
			return 5;
		
		default:
	}
	return -1;
}

char* func_490(int iParam0)
{
	char* sVar0;
	
	switch (iParam0)
	{
		case 2:
			sVar0 = "MP_BWH_WEED_1";
			break;
		
		case 1:
			sVar0 = "MP_BWH_METH_1";
			break;
		
		case 3:
			sVar0 = "MP_BWH_CRACK_1";
			break;
		
		case 5:
			sVar0 = "MP_BWH_FAKEID_1";
			break;
		
		case 4:
			sVar0 = "MP_BWH_CASH_1";
			break;
		
		case 7:
			sVar0 = "MP_BWH_WEED_2";
			break;
		
		case 6:
			sVar0 = "MP_BWH_METH_2";
			break;
		
		case 8:
			sVar0 = "MP_BWH_CRACK_2";
			break;
		
		case 10:
			sVar0 = "MP_BWH_FAKEID_2";
			break;
		
		case 9:
			sVar0 = "MP_BWH_CASH_2";
			break;
		
		case 12:
			sVar0 = "MP_BWH_WEED_3";
			break;
		
		case 11:
			sVar0 = "MP_BWH_METH_3";
			break;
		
		case 13:
			sVar0 = "MP_BWH_CRACK_3";
			break;
		
		case 15:
			sVar0 = "MP_BWH_FAKEID_3";
			break;
		
		case 14:
			sVar0 = "MP_BWH_CASH_3";
			break;
		
		case 17:
			sVar0 = "MP_BWH_WEED_4";
			break;
		
		case 16:
			sVar0 = "MP_BWH_METH_4";
			break;
		
		case 18:
			sVar0 = "MP_BWH_CRACK_4";
			break;
		
		case 20:
			sVar0 = "MP_BWH_FAKEID_4";
			break;
		
		case 19:
			sVar0 = "MP_BWH_CASH_4";
			break;
		
		case 21:
			sVar0 = "MP_BUNKER_1";
			break;
		
		case 22:
			sVar0 = "MP_BUNKER_2";
			break;
		
		case 23:
			sVar0 = "MP_BUNKER_3";
			break;
		
		case 24:
			sVar0 = "MP_BUNKER_4";
			break;
		
		case 25:
			sVar0 = "MP_BUNKER_5";
			break;
		
		case 26:
			sVar0 = "MP_BUNKER_6";
			break;
		
		case 27:
			sVar0 = "MP_BUNKER_7";
			break;
		
		case 28:
			sVar0 = "MP_BUNKER_9";
			break;
		
		case 29:
			sVar0 = "MP_BUNKER_10";
			break;
		
		case 30:
			sVar0 = "MP_BUNKER_11";
			break;
		
		case 31:
			sVar0 = "MP_BUNKER_12";
			break;
	}
	return sVar0;
}

struct<2> func_491()
{
	return Global_1630317[unk_0x460153A63B9477BC() /*595*/].f_11.f_193;
}

int func_492()
{
	if (unk_0xF8EDFF98A9C94C74())
	{
		return unk_0xC5AA3415F982DC6C();
	}
	return 0;
}

bool func_493(bool bParam0)
{
	return func_190(unk_0x460153A63B9477BC(), bParam0);
}

void func_494(int iParam0, var uParam1, var uParam2)
{
	*uParam1 = Global_1630317[iParam0 /*595*/].f_11.f_8[0];
	*uParam2 = Global_1630317[iParam0 /*595*/].f_11.f_8[1];
}

int func_495()
{
	return Global_1630317[unk_0x460153A63B9477BC() /*595*/].f_11;
}

int func_496(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, char* sParam8, bool bParam9, int iParam10)
{
	return func_497(iParam0, iParam1, sParam2, iParam3, iParam4, iParam5, iParam6, iParam7, sParam8, bParam9, iParam10);
}

int func_497(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, char* sParam8, bool bParam9, int iParam10)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_507(iParam0, sParam2, iParam3, iParam4, iParam5, iParam6, iParam7, bParam9);
	if (iParam4 == -592022605 || iParam4 == -1915191729)
	{
		if (unk_0xAE06B9E39EBDE049(iParam1))
		{
			if (unk_0xA1914E72A0EB31D0(iParam1))
			{
				iVar1 = unk_0x9048E8838E822F21(iParam1);
				func_503(unk_0x1D5C49FCA9BC5B02(iVar1, 31086, 0f, 0f, 0f), iVar0, 0, sParam8, iParam10);
			}
		}
	}
	else
	{
		func_498(iParam1, iVar0, sParam8, iParam10);
	}
	return iVar0;
}

void func_498(int iParam0, int iParam1, char* sParam2, int iParam3)
{
	struct<3> Var0;
	
	Var0 = { func_501(iParam0, 1) };
	if (iParam0 == func_500(unk_0x9B0761B4C3EB8BC7()))
	{
		func_499(1);
	}
	func_503(Var0, iParam1, 0, sParam2, iParam3);
}

void func_499(int iParam0)
{
	Global_2440049.f_2002 = iParam0;
}

int func_500(int iParam0)
{
	return iParam0;
}

Vector3 func_501(int iParam0, bool bParam1)
{
	struct<3> Var0;
	struct<3> Var1;
	float fVar2;
	struct<3> Var3;
	struct<3> Var4;
	float fVar5;
	
	if (unk_0xC337F69A1938DDA2())
	{
		Var1 = { unk_0x1DB2F48A1F5B2CD3(2) };
	}
	if (iParam0 == func_502(unk_0x9B0761B4C3EB8BC7()) && unk_0xF7B3A1430308F92B(unk_0xFA3A11B011BBD7F6()) == 4)
	{
		Var0 = { unk_0x7EC595B99EA7C4B1(iParam0, 0f, 8f, -0.2f) };
	}
	else
	{
		Var0 = { unk_0x3E4D3CCC220BDFB1(iParam0, false) };
	}
	fVar2 = 0f;
	if (!unk_0xA59F96B50B97E63C(iParam0, 0))
	{
		fVar2 = unk_0xEF7858F25585F853(iParam0);
		if (unk_0xF7B3A1430308F92B(unk_0xFA3A11B011BBD7F6()) == 4)
		{
			fVar2 = Var1.f_2;
		}
	}
	unk_0x140662B520844E45(unk_0x36FE6D3220816ADA(iParam0), &Var3, &Var4);
	if (bParam1)
	{
		fVar5 = (Var4.f_2 + 0.18f);
	}
	else
	{
		fVar5 = (Var3.f_2 + 0.18f);
	}
	Var0 = { unk_0x1BAE5C94E38E44FE(Var0, fVar2, 0f, 0f, fVar5) };
	return Var0;
}

int func_502(int iParam0)
{
	return iParam0;
}

void func_503(struct<3> Param0, int iParam1, int iParam2, char* sParam3, int iParam4)
{
	int iVar0;
	int iVar1;
	
	if (iParam1 != 0)
	{
		iVar1 = -1;
		iVar0 = 0;
		while (iVar0 < 20)
		{
			if (Global_2440049.f_1401[iVar0 /*30*/].f_6 == 0 || Global_2440049.f_1401[iVar0 /*30*/].f_6 == 7)
			{
				iVar1 = iVar0;
				iVar0 = 20;
			}
			iVar0++;
		}
		if (iVar1 != -1)
		{
			Global_2440049.f_1401[iVar1 /*30*/] = { Param0 };
			Global_2440049.f_1401[iVar1 /*30*/].f_6 = 1;
			Global_2440049.f_1401[iVar1 /*30*/].f_4 = func_506(Global_2440049.f_1401[iVar1 /*30*/], &Global_1312335, &Global_1312336);
			Global_2440049.f_1401[iVar1 /*30*/].f_7 = unk_0x6CAAB7E78B5D978A();
			Global_2440049.f_1401[iVar1 /*30*/].f_3 = iParam1;
			Global_2440049.f_1401[iVar1 /*30*/].f_8 = iParam2;
			Global_2440049.f_1401[iVar1 /*30*/].f_9 = func_505();
			Global_2440049.f_1401[iVar1 /*30*/].f_10 = func_504();
			StringCopy(&(Global_2440049.f_1401[iVar1 /*30*/].f_22), sParam3, 16);
			Global_2440049.f_1401[iVar1 /*30*/].f_26 = unk_0x8C358101651A3F7C(unk_0x6CAAB7E78B5D978A(), iParam4);
		}
	}
}

int func_504()
{
	if (Global_2440049.f_2002)
	{
		Global_2440049.f_2002 = 0;
		return 1;
	}
	Global_2440049.f_2002 = 0;
	return 0;
}

var func_505()
{
	var uVar0;
	
	uVar0 = Global_2440049.f_2004;
	Global_2440049.f_2004 = 1;
	return uVar0;
}

float func_506(struct<3> Param0, var uParam1, var uParam2)
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	
	fVar0 = unk_0x272784C60C397DB6(unk_0x0F1DDC797C100E7F(), Param0, true);
	if (fVar0 < 5f)
	{
		*uParam1 = 0.402f;
		*uParam2 = 0.476f;
		return 0f;
	}
	if (fVar0 > 20f)
	{
		*uParam1 = 0.212f;
		*uParam2 = 0.286f;
		return 1f;
	}
	fVar1 = (1f - ((fVar0 - 5f) / (20f - 5f)));
	fVar2 = (fVar1 * (0.402f - 0.212f));
	fVar3 = (fVar1 * (0.476f - 0.286f));
	*uParam1 = (fVar2 + 0.212f);
	*uParam2 = (fVar3 + 0.286f);
	return fVar1;
}

var func_507(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	var uVar0;
	
	uVar0 = func_508(iParam0, 0, sParam1, iParam4, iParam5, 0, iParam6, 1, iParam2, iParam3, bParam7);
	return uVar0;
}

int func_508(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, bool bParam5, int iParam6, bool bParam7, int iParam8, int iParam9, bool bParam10)
{
	float fVar0;
	int iVar1;
	int iVar2;
	float fVar3;
	
	if (func_538(unk_0x460153A63B9477BC()) || func_537(unk_0x460153A63B9477BC()))
	{
		if (Global_262145.f_9637 > 16000)
		{
			iVar2 = 16000;
		}
		else
		{
			iVar2 = Global_262145.f_9637;
		}
	}
	else if (func_243() || func_536(unk_0x460153A63B9477BC()))
	{
		if (Global_262145.f_22787 > 16000)
		{
			iVar2 = 16000;
		}
		else
		{
			iVar2 = Global_262145.f_22787;
		}
	}
	else if (Global_262145.f_6636 > 15000)
	{
		iVar2 = 15000;
	}
	else
	{
		iVar2 = Global_262145.f_6636;
	}
	if (func_535(sParam2))
	{
	}
	if (func_534())
	{
		if (iParam4 < 1)
		{
			iParam4 = 1;
		}
		iVar1 = round((IntToFloat(iParam3) * (IntToFloat(iParam4) + fVar0)));
		iVar1 = func_532(iVar1);
		fVar3 = (to_float(iVar1) * Global_262145.f_1);
		iVar1 = round(fVar3);
		if (bParam10)
		{
			iVar1 = func_531(&iVar1);
		}
		if (iParam1 == 0)
		{
			switch (iParam0)
			{
				case 2:
					func_529(0, &iVar1);
					break;
				
				case 3:
					func_529(1, &iVar1);
					break;
				
				case 1:
					func_527(&iVar1);
					break;
				}
		}
		if (iVar1 > Global_1688737)
		{
			return 0;
		}
		if (iParam1 == 0)
		{
			if (iVar1 > iVar2)
			{
				if (iParam0 == 1)
				{
					iVar1 = iVar2;
				}
				if (iParam0 == 2 || iParam0 == 3)
				{
					iVar1 = iVar2;
				}
			}
		}
		if (bParam7)
		{
			func_526(1164, iVar1, -1);
			if (iParam1 == 0)
			{
				func_518((func_525(unk_0x460153A63B9477BC()) + iVar1), iParam9, 0);
				if (iParam8 == 0)
				{
				}
				if (iParam9 == 0)
				{
				}
				unk_0xC0B1609C742F66E3(iVar1, iParam8, iParam9);
				if (Global_1590682[unk_0x460153A63B9477BC() /*883*/].f_39.f_2 != -1)
				{
					func_526(1165, iVar1, -1);
				}
				func_513(iVar1);
			}
		}
		if (bParam5)
		{
		}
		if (bParam7)
		{
			if (iParam6 == -1)
			{
				func_509((func_511(unk_0x460153A63B9477BC()) + iVar1));
			}
			else
			{
				func_509((func_511(unk_0x460153A63B9477BC()) + iParam6));
			}
		}
	}
	return iVar1;
}

void func_509(int iParam0)
{
	if (func_534())
	{
		Global_1590682[unk_0x460153A63B9477BC() /*883*/].f_211.f_5 = iParam0;
		func_510(joaat("MPPLY_GLOBALXP"), iParam0);
	}
}

void func_510(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != 0)
	{
		unk_0x6000E4684CB4330B(iVar0, iParam1, 1);
	}
}

int func_511(int iParam0)
{
	if (iParam0 > -1)
	{
		if (func_1031(iParam0, 0, 1))
		{
			if (iParam0 == unk_0x460153A63B9477BC())
			{
				return func_512(joaat("MPPLY_GLOBALXP"));
			}
			else
			{
				return Global_1590682[iParam0 /*883*/].f_211.f_5;
			}
		}
		else
		{
			return func_512(joaat("MPPLY_GLOBALXP"));
		}
	}
	return 0;
}

int func_512(int iParam0)
{
	int iVar0;
	var uVar1;
	
	iVar0 = iParam0;
	if (unk_0xD2F202166691EDB2(iVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

void func_513(int iParam0)
{
	struct<13> Var0;
	int iVar1;
	
	Var0 = { func_67(unk_0x460153A63B9477BC()) };
	if (unk_0xE2FBD13450B2DA21())
	{
		if (unk_0xBF9EC1ED7E386622(&Var0))
		{
			iVar1 = func_516(func_517(&Var0));
			if (iVar1 == 0)
			{
				func_515(&Global_1388052, iParam0);
				func_514(joaat("MPPLY_CREW_LOCAL_XP_0"), Global_1388052);
			}
			else if (iVar1 == 1)
			{
				func_515(&Global_1388053, iParam0);
				func_514(joaat("MPPLY_CREW_LOCAL_XP_1"), Global_1388053);
			}
			else if (iVar1 == 2)
			{
				func_515(&Global_1388054, iParam0);
				func_514(joaat("MPPLY_CREW_LOCAL_XP_2"), Global_1388054);
			}
			else if (iVar1 == 3)
			{
				func_515(&Global_1388055, iParam0);
				func_514(joaat("MPPLY_CREW_LOCAL_XP_3"), Global_1388055);
			}
			else if (iVar1 == 4)
			{
				func_515(&Global_1388056, iParam0);
				func_514(joaat("MPPLY_CREW_LOCAL_XP_4"), Global_1388056);
			}
		}
	}
}

void func_514(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != 0)
	{
		unk_0x6000E4684CB4330B(iVar0, iParam1, 1);
	}
	switch (iParam0)
	{
		case joaat("MPPLY_CREW_0_ID"):
			Global_1388047 = iParam1;
			break;
		
		case joaat("MPPLY_CREW_1_ID"):
			Global_1388049 = iParam1;
			break;
		
		case joaat("MPPLY_CREW_2_ID"):
			Global_1388049 = iParam1;
			break;
		
		case joaat("MPPLY_CREW_3_ID"):
			Global_1388050 = iParam1;
			break;
		
		case joaat("MPPLY_CREW_4_ID"):
			Global_1388051 = iParam1;
			break;
		
		case joaat("MPPLY_CREW_LOCAL_XP_0"):
			Global_1388052 = iParam1;
			break;
		
		case joaat("MPPLY_CREW_LOCAL_XP_1"):
			Global_1388053 = iParam1;
			break;
		
		case joaat("MPPLY_CREW_LOCAL_XP_2"):
			Global_1388054 = iParam1;
			break;
		
		case joaat("MPPLY_CREW_LOCAL_XP_3"):
			Global_1388055 = iParam1;
			break;
		
		case joaat("MPPLY_CREW_LOCAL_XP_4"):
			Global_1388056 = iParam1;
			break;
		
		case joaat("MPPLY_BECAME_CHEATER_NUM"):
			Global_1388057 = iParam1;
			break;
		
		case joaat("MPPLY_FRIENDLY"):
			Global_1388058 = iParam1;
			break;
		
		case joaat("MPPLY_OFFENSIVE_LANGUAGE"):
			Global_1388059 = iParam1;
			break;
		
		case joaat("MPPLY_GRIEFING"):
			Global_1388060 = iParam1;
			break;
		
		case joaat("MPPLY_HELPFUL"):
			Global_1388061 = iParam1;
			break;
		
		case joaat("MPPLY_OFFENSIVE_TAGPLATE"):
			Global_1388062 = iParam1;
			break;
		
		case joaat("MPPLY_OFFENSIVE_UGC"):
			Global_1388063 = iParam1;
			break;
		
		default:
			break;
	}
}

void func_515(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 + iParam1);
}

int func_516(int iParam0)
{
	if (iParam0 == Global_1388047)
	{
		return 0;
	}
	else if (iParam0 == Global_1388048)
	{
		return 1;
	}
	else if (iParam0 == Global_1388049)
	{
		return 2;
	}
	else if (iParam0 == Global_1388050)
	{
		return 3;
	}
	else if (iParam0 == Global_1388051)
	{
		return 4;
	}
	else
	{
		return -1;
	}
	return -1;
}

int func_517(var uParam0)
{
	if (unk_0xE2FBD13450B2DA21())
	{
		if (unk_0xBF9EC1ED7E386622(uParam0))
		{
			return Global_2462175;
		}
	}
	return Global_2462175;
}

void func_518(int iParam0, int iParam1, int iParam2)
{
	if (func_534())
	{
		if (iParam0 >= 1787576850)
		{
			iParam0 = 1787576850;
		}
		if (Global_262145.f_9605 == 0 && iParam1 != -1076930708)
		{
			if (iParam2 == 0)
			{
				if (iParam0 < Global_1388197[func_149(-1)])
				{
					unk_0xC0B1609C742F66E3(iParam0, -523908350, iParam1);
					return;
				}
				else if (iParam0 == Global_1388197[func_149(-1)])
				{
					return;
				}
			}
		}
		if (Global_262145.f_9604 == 0)
		{
			if (iParam0 == 0)
			{
				unk_0xC0B1609C742F66E3(iParam0, -1158693853, -1345423847);
				if (iParam2 == 0)
				{
					return;
				}
			}
		}
		if (Global_262145.f_9604 == 0)
		{
			if (iParam0 < 0)
			{
				unk_0xC0B1609C742F66E3(iParam0, -1586921397, iParam1);
				return;
			}
		}
		if (func_524(unk_0x460153A63B9477BC()))
		{
			Global_1590682[unk_0x460153A63B9477BC() /*883*/].f_211.f_1 = iParam0;
			Global_1590682[unk_0x460153A63B9477BC() /*883*/].f_211.f_6 = func_522(iParam0, 1);
		}
		func_459(639, iParam0, -1, 1);
		func_460(640, func_522(iParam0, 1), -1, 1, 0);
		Global_1388197[func_149(-1)] = iParam0;
		func_519(-1109644434, 7, 0);
	}
}

void func_519(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	if (func_521(iParam1, iParam2))
	{
		iVar0 = func_520();
		Global_2462127[iVar0] = iParam1;
		Global_2462138[iVar0] = iParam0;
	}
}

int func_520()
{
	int iVar0;
	int iVar1;
	
	iVar0 = 9;
	iVar1 = 0;
	while (iVar1 <= 9)
	{
		if (Global_2462127[iVar1] == 0)
		{
			iVar0 = iVar1;
			iVar1 = 10;
		}
		iVar1++;
	}
	return iVar0;
}

int func_521(int iParam0, var uParam1)
{
	if (Global_1312884)
	{
		return 0;
	}
	if (iParam0 == 22)
	{
		return 1;
	}
	if ((((((((uParam1 || !Global_1312896) || iParam0 == 3) || iParam0 == 10) || iParam0 == 11) || iParam0 == 27) || iParam0 == 28) || iParam0 == 29) || iParam0 == 30)
	{
		return 1;
	}
	else
	{
		return 0;
	}
	return 1;
}

int func_522(int iParam0, bool bParam1)
{
	if (bParam1)
	{
	}
	return func_523(iParam0, 0);
}

int func_523(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	float fVar4;
	
	if (iParam1 == 0)
	{
	}
	iVar1 = 8000;
	iVar2 = 0;
	iVar3 = ((iVar1 - iVar2) / 2);
	iVar0 = 0;
	while (iVar0 <= 100)
	{
		if (iVar1 == iVar2)
		{
			iVar0 = 8000;
			if (iVar3 == 0)
			{
				iVar3 = 1;
			}
			return iVar3;
		}
		if (Global_292402[iVar3] == iParam0)
		{
			iVar1 = iVar3;
			iVar2 = iVar3;
		}
		else if (Global_292402[iVar3] < iParam0)
		{
			if (iVar2 == iVar3)
			{
				iVar2++;
			}
			else
			{
				iVar2 = iVar3;
			}
		}
		else if (iVar1 == iVar3)
		{
			iVar1 = (iVar1 - 1);
		}
		else
		{
			iVar1 = iVar3;
		}
		fVar4 = (((to_float(iVar1) - to_float(iVar2)) / 2f) + to_float(iVar2));
		iVar3 = round(fVar4);
		iVar0++;
	}
	return 8000;
}

int func_524(int iParam0)
{
	if (iParam0 == -1)
	{
		return 0;
	}
	else
	{
		return unk_0xCE990E643CD9D0E5(Global_2440049.f_1, iParam0);
	}
	return 1;
}

int func_525(int iParam0)
{
	if (Global_1312485.f_9 == 0)
	{
		if (iParam0 > -1)
		{
			if (iParam0 == unk_0x460153A63B9477BC())
			{
				return Global_1388197[func_149(-1)];
			}
			else if (func_524(iParam0))
			{
				return Global_1590682[iParam0 /*883*/].f_211.f_1;
			}
		}
	}
	else
	{
		return Global_1388197[func_149(-1)];
	}
	return 0;
}

void func_526(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	iVar0 = func_462(iParam0, func_149(iParam2), 0);
	iVar0 = (iVar0 + iParam1);
	if (!func_461(iParam0))
	{
		func_460(iParam0, iVar0, iParam2, 1, 0);
	}
	else
	{
		func_459(iParam0, iVar0, iParam2, 1);
	}
}

void func_527(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	iVar1 = unk_0x6CC163E30ECE0790(unk_0x460153A63B9477BC());
	iVar0 = 0;
	while (iVar0 < unk_0xEFA28384DDD283E1())
	{
		iVar4 = unk_0x628A51AC66E80772(iVar0);
		if (unk_0xBD09DF93F957A0CF(iVar4))
		{
			iVar5 = unk_0x9019589211A13B02(iVar4);
			if (unk_0x6CC163E30ECE0790(iVar5) != -1)
			{
				if (unk_0x6CC163E30ECE0790(iVar5) == iVar1 || func_370(unk_0x6CC163E30ECE0790(iVar5), iVar1, 0))
				{
					iVar2++;
					if (iVar5 != unk_0x460153A63B9477BC())
					{
						if (func_68(unk_0x460153A63B9477BC(), iVar5))
						{
							bVar3 = true;
						}
					}
				}
			}
		}
		iVar0++;
	}
	if (bVar3)
	{
		iVar6 = round((func_528(*iParam0, 100) * (10f * Global_262145.f_4218)));
	}
	if (iVar2 > 4)
	{
		iVar2 = 4;
	}
	if (iVar2 >= 2)
	{
		iVar7 = round((func_528(*iParam0, 100) * (20f * Global_262145.f_4211)));
	}
	*iParam0 = (*iParam0 + iVar6);
	*iParam0 = (*iParam0 + iVar7);
}

float func_528(int iParam0, int iParam1)
{
	float fVar0;
	float fVar1;
	float fVar2;
	
	fVar0 = to_float(iParam0);
	fVar1 = to_float(iParam1);
	fVar2 = (fVar0 / fVar1);
	return fVar2;
}

void func_529(bool bParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	
	if (bParam0)
	{
		iVar0 = 0;
		while (iVar0 < unk_0xEFA28384DDD283E1())
		{
			iVar3 = iVar0;
			if (unk_0xBD09DF93F957A0CF(iVar3))
			{
				iVar4 = unk_0x9019589211A13B02(iVar3);
				if (func_1031(iVar4, 0, 1))
				{
					if (iVar4 != unk_0x460153A63B9477BC())
					{
						iVar1++;
						if (func_68(unk_0x460153A63B9477BC(), iVar4))
						{
							bVar2 = true;
						}
					}
				}
			}
			iVar0++;
		}
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < 32)
		{
			iVar4 = iVar0;
			if (func_1031(iVar4, 1, 1))
			{
				if (iVar4 != unk_0x460153A63B9477BC())
				{
					if (func_530(unk_0x460153A63B9477BC(), iVar4) <= 20f)
					{
						iVar1++;
						if (func_68(unk_0x460153A63B9477BC(), iVar4))
						{
							bVar2 = true;
						}
					}
				}
			}
			iVar0++;
		}
	}
	if (bVar2)
	{
		iVar5 = round((func_528(*iParam1, 100) * (10f * Global_262145.f_4218)));
	}
	if (iVar1 > 4)
	{
		iVar1 = 4;
	}
	if (iVar1 >= 1)
	{
		iVar6 = round((func_528(*iParam1, 100) * (20f * Global_262145.f_4211)));
	}
	*iParam1 = (*iParam1 + iVar5);
	*iParam1 = (*iParam1 + iVar6);
}

float func_530(int iParam0, int iParam1)
{
	return vdist(func_59(iParam0), func_59(iParam1));
	return 0f;
}

int func_531(int iParam0)
{
	int iVar0;
	
	if (unk_0x2F9269FB5C4717C0() != 3)
	{
		return *iParam0;
	}
	iVar0 = round((func_528(*iParam0, 100) * 25f));
	*iParam0 = (*iParam0 + iVar0);
	return *iParam0;
}

int func_532(int iParam0)
{
	if (iParam0 < 0)
	{
		if (unk_0x44F29CF6A0675F4F(iParam0) > func_525(unk_0x460153A63B9477BC()))
		{
			iParam0 = -func_525(unk_0x460153A63B9477BC());
		}
	}
	if (func_533(8000, 0, 0) > 0)
	{
		if (func_533(8000, 0, 0) < (iParam0 + func_525(unk_0x460153A63B9477BC())))
		{
			iParam0 = (func_533(8000, 0, 0) - func_525(unk_0x460153A63B9477BC()));
		}
	}
	return iParam0;
}

int func_533(int iParam0, bool bParam1, int iParam2)
{
	if (iParam2 == 0)
	{
	}
	if (bParam1)
	{
	}
	if (iParam0 >= 8000)
	{
		iParam0 = 8000;
	}
	return Global_292402[iParam0];
}

int func_534()
{
	return 1;
}

int func_535(char* sParam0)
{
	if (unk_0x211E6DB3335430B4(sParam0))
	{
		return 1;
	}
	else if (unk_0xF005CCA4263DF67F(sParam0, "") || unk_0xF005CCA4263DF67F(sParam0, "0"))
	{
		return 1;
	}
	return 0;
}

int func_536(int iParam0)
{
	return func_414(func_105(iParam0));
}

bool func_537(int iParam0)
{
	return Global_2425869[iParam0 /*443*/].f_119 == 2;
}

bool func_538(int iParam0)
{
	return Global_2425869[iParam0 /*443*/].f_119 == 7;
}

void func_539()
{
	Global_2463792 = 1;
}

void func_540(int iParam0, var uParam1, var uParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	*uParam1 = 0;
	*uParam2 = 0;
	if (!func_81(7))
	{
		return;
	}
	iVar0 = func_543(iParam0);
	iVar1 = func_542(iParam0);
	iVar2 = unk_0x44F29CF6A0675F4F(unk_0x624736CA66E14161(Global_2540384.f_5188.f_266, unk_0x6CAAB7E78B5D978A()));
	if (func_541(iParam0) != -1)
	{
		if (iVar2 > func_541(iParam0))
		{
			iVar2 = func_541(iParam0);
		}
	}
	else if (iVar2 > Global_262145.f_12403)
	{
		iVar2 = Global_262145.f_12403;
	}
	iVar3 = floor((to_float(iVar2) / (1000f * 60f)));
	if (iVar3 < 1)
	{
		iVar3 = 1;
	}
	*uParam1 = (iVar3 * iVar1);
	*uParam2 = (iVar3 * iVar0);
}

int func_541(int iParam0)
{
	if (func_221(iParam0, 0) || func_139(iParam0))
	{
		return Global_262145.f_18495;
	}
	if (func_138(iParam0))
	{
		return Global_262145.f_18494;
	}
	switch (iParam0)
	{
		case 192:
			return Global_262145.f_18491;
		
		case 191:
			return Global_262145.f_18493;
		
		case 190:
			return Global_262145.f_18492;
		
		case 227:
			return Global_262145.f_21053;
		
		case 226:
			return Global_262145.f_21041;
		
		case 225:
			return Global_262145.f_21061;
		
		case 230:
			return Global_262145.f_22316;
		
		case 229:
			return Global_262145.f_22220;
		
		case 233:
			return Global_262145.f_22792;
		
		case 237:
			return Global_262145.f_23955;
		
		case 238:
			return Global_262145.f_24066;
		
		case 249:
			return Global_262145.f_24082;
		
		case 243:
			return Global_262145.f_26374;
		
		default:
	}
	return -1;
}

int func_542(int iParam0)
{
	switch (iParam0)
	{
		case 148:
			return Global_262145.f_12494;
		
		case 152:
			return Global_262145.f_12529;
		
		case 151:
			return 0;
		
		case 142:
			return Global_262145.f_12517;
		
		case 157:
			return Global_262145.f_12484;
		
		case 159:
			return Global_262145.f_12467;
		
		case 164:
			return Global_262145.f_12507;
		
		case 160:
			return Global_262145.f_12557;
		
		case 162:
			return Global_262145.f_12577;
		
		case 163:
			return Global_262145.f_12542;
		
		case 154:
			return Global_262145.f_12612;
		
		case 155:
			return Global_262145.f_12602;
		
		case 153:
			return Global_262145.f_12566;
		
		case 170:
			return Global_262145.f_15003;
		
		case 171:
			return Global_262145.f_15062;
		
		case 172:
			return Global_262145.f_15080;
		
		case 173:
			return Global_262145.f_15021;
		
		case 166:
			return Global_262145.f_15036;
		
		case 167:
			return Global_262145.f_15127;
		
		case 169:
			return Global_262145.f_15099;
		
		case 168:
			return Global_262145.f_15092;
		
		case 179:
			return Global_262145.f_18374;
		
		case 180:
			return Global_262145.f_18152;
		
		case 182:
			return Global_262145.f_18152;
		
		case 183:
			return Global_262145.f_18152;
		
		case 185:
			return Global_262145.f_18152;
		
		case 186:
			return Global_262145.f_18152;
		
		case 189:
			return Global_262145.f_18374;
		
		case 190:
			return Global_262145.f_18028;
		
		case 191:
			return Global_262145.f_18119;
		
		case 192:
			return Global_262145.f_17913;
		
		case 193:
			return Global_262145.f_18374;
		
		case 194:
			return Global_262145.f_18374;
		
		case 195:
			return Global_262145.f_18152;
		
		case 197:
			return Global_262145.f_18152;
		
		case 198:
			return Global_262145.f_18152;
		
		case 199:
			return Global_262145.f_18374;
		
		case 200:
			return Global_262145.f_18374;
		
		case 201:
			return Global_262145.f_18374;
		
		case 205:
			return Global_262145.f_18374;
		
		case 207:
			return Global_262145.f_18152;
		
		case 208:
			return Global_262145.f_18152;
		
		case 209:
			return Global_262145.f_18152;
		
		case 210:
			return Global_262145.f_18374;
		
		case 211:
			return Global_262145.f_18374;
		
		case 214:
			return Global_262145.f_19224;
		
		case 215:
			return Global_262145.f_19226;
		
		case 216:
			return Global_262145.f_19228;
		
		case 217:
			return Global_262145.f_19230;
		
		case 218:
			return Global_262145.f_19232;
		
		case 219:
			return Global_262145.f_19234;
		
		case 220:
			return Global_262145.f_19236;
		
		case 221:
			return Global_262145.f_19238;
		
		case 225:
			if (!func_476())
			{
				return Global_262145.f_21063;
			}
			break;
		
		case 226:
			if (!func_476())
			{
				return Global_262145.f_21043;
			}
			break;
		
		case 227:
			if (!func_476())
			{
				return Global_262145.f_21055;
			}
			break;
		
		case 229:
			if (!func_476())
			{
				return Global_262145.f_22222;
			}
			break;
		
		case 230:
			if (!func_476())
			{
				return Global_262145.f_22318;
			}
			break;
		
		case 233:
			if (!func_476())
			{
				return Global_262145.f_22791;
			}
			break;
		
		case 241:
			return 100;
		
		case 242:
			return 100;
		
		case 244:
			return 100;
		
		case 248:
			return 100;
		
		case 239:
			return 100;
		
		case 240:
			return 100;
		
		case 250:
			return 100;
		
		case 237:
			if (!func_476())
			{
				return Global_262145.f_23957;
			}
			break;
		
		case 238:
			if (!func_476())
			{
				return Global_262145.f_24068;
			}
			break;
		
		case 249:
			if (!func_476())
			{
				return Global_262145.f_24084;
			}
			break;
		
		case 243:
			if (!func_476())
			{
				return Global_262145.f_26377;
			}
			break;
		
		case 158:
			if (!func_476())
			{
				return 100;
			}
			break;
	}
	return 0;
}

int func_543(int iParam0)
{
	switch (iParam0)
	{
		case 148:
			return Global_262145.f_12493;
		
		case 152:
			return Global_262145.f_12528;
		
		case 151:
			return 0;
		
		case 142:
			return Global_262145.f_12516;
		
		case 157:
			return Global_262145.f_12483;
		
		case 159:
			return Global_262145.f_12466;
		
		case 164:
			return Global_262145.f_12506;
		
		case 160:
			return Global_262145.f_12556;
		
		case 162:
			return Global_262145.f_12576;
		
		case 163:
			return Global_262145.f_12541;
		
		case 154:
			return Global_262145.f_12611;
		
		case 155:
			return Global_262145.f_12601;
		
		case 153:
			return Global_262145.f_12565;
		
		case 170:
			return Global_262145.f_15002;
		
		case 171:
			return Global_262145.f_15061;
		
		case 172:
			return Global_262145.f_15079;
		
		case 173:
			return Global_262145.f_15020;
		
		case 166:
			return Global_262145.f_15035;
		
		case 179:
			return Global_262145.f_18373;
		
		case 180:
			return Global_262145.f_18151;
		
		case 182:
			return Global_262145.f_18151;
		
		case 183:
			return Global_262145.f_18151;
		
		case 185:
			return Global_262145.f_18151;
		
		case 186:
			return Global_262145.f_18151;
		
		case 189:
			return Global_262145.f_18373;
		
		case 193:
			return Global_262145.f_18373;
		
		case 194:
			return Global_262145.f_18373;
		
		case 195:
			return Global_262145.f_18151;
		
		case 197:
			return Global_262145.f_18151;
		
		case 198:
			return Global_262145.f_18151;
		
		case 199:
			return Global_262145.f_18373;
		
		case 200:
			return Global_262145.f_18373;
		
		case 201:
			return Global_262145.f_18373;
		
		case 205:
			return Global_262145.f_18373;
		
		case 207:
			return Global_262145.f_18151;
		
		case 208:
			return Global_262145.f_18151;
		
		case 209:
			return Global_262145.f_18151;
		
		case 210:
			return Global_262145.f_18373;
		
		case 211:
			return Global_262145.f_18373;
		
		case 190:
			if (func_253(0))
			{
				return Global_262145.f_18027;
			}
			else
			{
				return 0;
			}
			break;
		
		case 191:
			if (func_253(0))
			{
				return Global_262145.f_18118;
			}
			else
			{
				return 0;
			}
			break;
		
		case 192:
			if (func_253(0))
			{
				return Global_262145.f_17912;
			}
			else
			{
				return 0;
			}
			break;
		
		case 214:
			return Global_262145.f_19223;
		
		case 215:
			return Global_262145.f_19225;
		
		case 216:
			return Global_262145.f_19227;
		
		case 217:
			return Global_262145.f_19229;
		
		case 218:
			return Global_262145.f_19231;
		
		case 219:
			return Global_262145.f_19233;
		
		case 220:
			return Global_262145.f_19235;
		
		case 221:
			return Global_262145.f_19237;
		
		case 225:
			if (func_253(0))
			{
				return Global_262145.f_21062;
			}
			break;
		
		case 226:
			if (func_253(0))
			{
				return Global_262145.f_21042;
			}
			break;
		
		case 227:
			if (func_253(0))
			{
				return Global_262145.f_21054;
			}
			break;
		
		case 229:
			if (func_253(0))
			{
				return Global_262145.f_22221;
			}
			break;
		
		case 230:
			if (func_253(0))
			{
				return Global_262145.f_22317;
			}
			break;
		
		case 233:
			if (func_253(0))
			{
				return Global_262145.f_22793;
			}
			break;
		
		case 241:
			return 500;
		
		case 242:
			return 500;
		
		case 244:
			return 500;
		
		case 248:
			return 500;
		
		case 239:
			return 500;
		
		case 240:
			return 500;
		
		case 250:
			return 500;
		
		case 237:
			if (func_253(0))
			{
				return Global_262145.f_23956;
			}
			break;
		
		case 238:
			if (func_253(0))
			{
				return Global_262145.f_24067;
			}
			break;
		
		case 249:
			if (func_253(0))
			{
				return Global_262145.f_24083;
			}
			break;
		
		case 243:
			return Global_262145.f_26373;
		
		case 158:
			if (func_253(0))
			{
				return 500;
			}
			break;
	}
	return 0;
}

void func_544(int iParam0, int iParam1)
{
	int iVar0;
	
	if (*iParam0 > 0)
	{
		if (!func_476())
		{
			if (func_493(0))
			{
				if (!func_253(0))
				{
					if (unk_0x166E920FB00B2DBB(func_495()))
					{
						if (func_554() == 100)
						{
							iVar0 = *iParam0;
							*iParam0 = 0;
						}
						else
						{
							iVar0 = ((*iParam0 / 100) * func_554());
							*iParam0 = (*iParam0 - iVar0);
						}
						func_552(&iVar0, 0);
						if (iParam1 == 1)
						{
							func_549("GB_BCUT_TICK1", func_495(), iVar0, 0, 0, 1);
						}
						func_548(20);
						func_545(func_495(), iVar0, 1);
					}
				}
			}
		}
	}
}

void func_545(int iParam0, int iParam1, int iParam2)
{
	struct<8> Var0;
	
	if (func_1031(iParam0, 0, 1))
	{
		Var0 = 1596100569;
		Var0.f_1 = unk_0x460153A63B9477BC();
		Var0.f_2 = iParam1;
		Var0.f_4 = iParam2;
		Var0.f_5 = func_547(iParam0);
		func_546(&(Var0.f_6), &(Var0.f_7));
		unk_0xB802750B43D4047C(1, &Var0, 8, func_488(iParam0));
	}
}

void func_546(var uParam0, var uParam1)
{
	*uParam0 = Global_1652336.f_9;
	*uParam1 = Global_1652336.f_10;
}

var func_547(int iParam0)
{
	return Global_1630317[iParam0 /*595*/].f_506;
}

void func_548(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	unk_0xBE20AB8238688965(&(Global_2540384.f_5188.f_7[iVar0]), iVar1);
}

int func_549(char* sParam0, int iParam1, int iParam2, int iParam3, bool bParam4, int iParam5)
{
	int iVar0;
	struct<8> Var1;
	
	iVar0 = -1;
	if (unk_0x56B60AE958412839(unk_0x460153A63B9477BC(), iParam1) || iParam5)
	{
		if (!bParam4)
		{
			StringCopy(&Var1, unk_0x72C1D3A1AB8CAA5B(iParam1), 64);
		}
		else
		{
			StringCopy(&Var1, unk_0x72C1D3A1AB8CAA5B(iParam1), 64);
		}
		if (unk_0x7BCC91F3C1CF24E8(&Var1))
		{
		}
		unk_0x5B8DD855EAFD33B5(sParam0);
		unk_0x7006FC1051C85FCA(func_363(iParam1, -2, 1, 0, 0));
		unk_0x9EFD301E3BE8324E(func_550(&Var1));
		if (!iParam3 == 0)
		{
			unk_0x7006FC1051C85FCA(iParam3);
		}
		unk_0x42710E9E08FA375A(iParam2);
		iVar0 = unk_0xD60C2975A14D763D(0, 1);
		func_308(27, sParam0, 1, &Var1, iParam2, 0, 0, 0, 1, 0, 0, 0);
	}
	return iVar0;
}

var func_550(char* sParam0)
{
	char cVar0[64];
	
	StringCopy(&cVar0, "<C>", 64);
	StringConCat(&cVar0, sParam0, 64);
	StringConCat(&cVar0, "</C>~s~", 64);
	return func_551(&cVar0);
}

var func_551(char[4] cParam0)
{
	return cParam0;
}

void func_552(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	if (bParam1)
	{
		iVar1 = func_553(1);
	}
	else
	{
		iVar1 = func_553(0);
	}
	iVar0 = ((*iParam0 / 100) * iVar1);
	*iParam0 = (*iParam0 - iVar0);
}

int func_553(bool bParam0)
{
	if (bParam0)
	{
		return round((0.05f * 100f));
	}
	return Global_262145.f_12398;
}

int func_554()
{
	return Global_262145.f_12397;
}

void func_555(int iParam0, var uParam1, int iParam2, var uParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	var uVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	float fVar12;
	float fVar13;
	float fVar14;
	float fVar15;
	float fVar16;
	int iVar17;
	bool bVar18;
	bool bVar19;
	int iVar20;
	int iVar21;
	int iVar22;
	int iVar23;
	
	bVar18 = func_253(1);
	bVar19 = false;
	if (iParam0 == 237)
	{
		if (func_476())
		{
			iVar17 = unk_0x460153A63B9477BC();
		}
		else
		{
			iVar17 = func_495();
		}
		iVar11 = iVar17;
		if (iVar11 != -1)
		{
			iVar0 = Global_1590682[iVar11 /*883*/].f_861.f_1;
			if (uParam1->f_10 == uParam1->f_11)
			{
				iVar1 = iVar0;
				bVar19 = true;
			}
			else
			{
				fVar12 = to_float(uParam1->f_10);
				fVar13 = to_float(uParam1->f_11);
				fVar14 = ((fVar12 / fVar13) * 100f);
				fVar15 = ((IntToFloat(iVar0) / 100f) * fVar14);
				iVar1 = ceil(fVar15);
			}
			*uParam3 = iVar1;
			if (bVar19)
			{
				iVar2 = Global_1590682[iVar11 /*883*/].f_861.f_2;
			}
			else
			{
				iVar2 = func_571(Global_1590682[iVar11 /*883*/].f_861, *uParam3);
			}
			if (uParam1->f_17)
			{
				iVar20 = (iVar2 - ceil((IntToFloat(iVar2) * 0.9f)));
				if (iVar20 > 100000)
				{
					iVar20 = 100000;
				}
				iVar2 = (iVar2 - iVar20);
			}
			*iParam2 = (*iParam2 + iVar2);
			iVar10 = func_570(*iParam2);
			if (iVar10 > 0)
			{
				if (iVar17 == unk_0x460153A63B9477BC())
				{
					func_569("TICK_TCUT", iVar10);
				}
				*iParam2 = (*iParam2 - iVar10);
			}
			Global_1676443.f_49 = *uParam3;
			if (iVar17 == unk_0x460153A63B9477BC())
			{
				if (iVar2 > 0)
				{
					func_568(iVar2);
				}
				if (*uParam3 > 0)
				{
					func_566(*uParam3);
				}
				iVar6 = func_565(&uVar5);
				iVar7 = Global_262145.f_23986;
				if (iVar6 > iVar7)
				{
					iVar6 = iVar7;
				}
				iVar9 = ceil((IntToFloat(iVar6) * Global_262145.f_23985));
				iVar8 = ((*iParam2 / 100) * iVar9);
				*iParam2 = (*iParam2 + iVar8);
				if (*iParam2 > 0)
				{
					if (iVar6 > 0)
					{
						func_548(140);
					}
				}
				if (*iParam2 > 0)
				{
					if (!bVar18)
					{
						iVar21 = 0;
						while (iVar21 < unk_0xEFA28384DDD283E1())
						{
							iVar22 = iVar21;
							if (unk_0xBD09DF93F957A0CF(iVar22))
							{
								iVar23 = unk_0x9019589211A13B02(iVar22);
								if (func_564(iVar23))
								{
									func_556(iVar23, 1, 198210293);
								}
							}
							iVar21++;
						}
					}
				}
				Global_2540384.f_5188.f_382 = *iParam2;
			}
			else if (bVar18)
			{
				fVar16 = Global_262145.f_23958;
				iVar3 = ceil((IntToFloat(*iParam2) * fVar16));
				*iParam2 = iVar3;
				iVar4 = Global_262145.f_23959;
				if (*iParam2 > iVar4)
				{
					*iParam2 = iVar4;
				}
				if (*iParam2 > 0)
				{
					Global_1688746 = *iParam2;
					func_548(121);
				}
			}
			else
			{
				*iParam2 = 0;
			}
		}
	}
}

void func_556(int iParam0, int iParam1, int iParam2)
{
	var uVar0;
	
	uVar0 = func_558(iParam0);
	func_557(iParam0, uVar0, iParam1, iParam2);
}

void func_557(int iParam0, var uParam1, var uParam2, var uParam3)
{
	struct<8> Var0;
	
	Var0 = -2029779863;
	Var0.f_1 = unk_0x460153A63B9477BC();
	Var0.f_2 = uParam1;
	Var0.f_4 = uParam2;
	Var0.f_3 = uParam3;
	Var0.f_5 = func_547(iParam0);
	func_546(&(Var0.f_6), &(Var0.f_7));
	if (iParam0 != func_65())
	{
		if (unk_0x166E920FB00B2DBB(iParam0))
		{
			unk_0xB802750B43D4047C(1, &Var0, 8, func_488(iParam0));
		}
	}
}

int func_558(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_563();
	iVar0 = func_561(iParam0, iVar0);
	iVar1 = Global_1630317[func_495() /*595*/].f_11.f_422;
	iVar0 = (iVar0 + (iVar1 * Global_262145.f_14963));
	if (iVar0 < func_560())
	{
		iVar0 = func_560();
	}
	if (iVar0 > func_559())
	{
		iVar0 = func_559();
	}
	return iVar0;
}

int func_559()
{
	return Global_262145.f_14964;
}

int func_560()
{
	return Global_262145.f_16139;
}

int func_561(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = (func_621(iParam0) * func_562());
	iParam1 = (iParam1 - iVar0);
	return iParam1;
}

int func_562()
{
	return Global_262145.f_16138;
}

var func_563()
{
	return Global_262145.f_12389;
}

int func_564(int iParam0)
{
	if (unk_0x166E920FB00B2DBB(iParam0))
	{
		if (iParam0 != unk_0x460153A63B9477BC())
		{
			if (func_76(iParam0, unk_0x460153A63B9477BC(), 0))
			{
				if (!func_109(iParam0, 26))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_565(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = 0;
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (unk_0x166E920FB00B2DBB(unk_0xF1110FE23C67293A(iVar0)))
		{
			iVar2 = unk_0xF1110FE23C67293A(iVar0);
			if (!func_17(iVar2, 0) && !func_76(iVar2, unk_0x460153A63B9477BC(), 1))
			{
				iVar1++;
			}
			else if (func_17(iVar2, 0))
			{
				*uParam0++;
			}
		}
		iVar0++;
	}
	return iVar1;
}

void func_566(int iParam0)
{
	func_567(iParam0, 7237);
}

void func_567(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam0 <= 0)
	{
		return;
	}
	iVar0 = func_462(iParam1, -1, 0);
	func_460(iParam1, (iVar0 + iParam0), -1, 1, 0);
}

void func_568(int iParam0)
{
	func_567(iParam0, 7232);
}

int func_569(char* sParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = -1;
	unk_0x5B8DD855EAFD33B5(sParam0);
	unk_0x42710E9E08FA375A(iParam1);
	iVar0 = unk_0xD60C2975A14D763D(0, 1);
	func_308(3, sParam0, 1, "", iParam1, 0, 0, 0, 1, 0, 0, 0);
	return iVar0;
}

int func_570(int iParam0)
{
	float fVar0;
	float fVar1;
	
	fVar0 = to_float(iParam0);
	fVar1 = (fVar0 * Global_262145.f_23987);
	if (fVar1 > 100000f)
	{
		fVar1 = 100000f;
	}
	return round(fVar1);
}

int func_571(struct<5> Param0, int iParam1)
{
	int iVar0;
	float fVar1;
	float fVar2;
	
	if (iParam1 == Param0.f_1)
	{
		return Param0.f_2;
	}
	iVar0 = Param0.f_2;
	if ((Param0.f_4 == 1 || Param0.f_4 == 2) || Param0.f_4 == 3)
	{
		iVar0 = (iVar0 - Param0.f_3);
	}
	fVar1 = (to_float(iParam1) / to_float(Param0.f_1));
	fVar2 = to_float(iVar0);
	return floor((fVar2 * fVar1));
}

void func_572(int iParam0, var uParam1, int iParam2, var uParam3, var uParam4)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	var uVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	float fVar10;
	float fVar11;
	float fVar12;
	float fVar13;
	float fVar14;
	int iVar15;
	bool bVar16;
	bool bVar17;
	int iVar18;
	int iVar19;
	int iVar20;
	
	*uParam4 = 0;
	bVar16 = func_253(1);
	bVar17 = false;
	if (iParam0 == 229)
	{
	}
	else if (iParam0 == 230)
	{
		if (func_476())
		{
			iVar15 = unk_0x460153A63B9477BC();
		}
		else
		{
			iVar15 = func_495();
		}
		if (iVar15 != -1)
		{
			iVar0 = (uParam1->f_15 + uParam1->f_8);
			if (uParam1->f_10 == uParam1->f_11)
			{
				iVar1 = iVar0;
				bVar17 = true;
			}
			else
			{
				fVar10 = to_float(uParam1->f_10);
				fVar11 = to_float(uParam1->f_11);
				fVar12 = ((fVar10 / fVar11) * 100f);
				fVar13 = ((IntToFloat(iVar0) / 100f) * fVar12);
				iVar1 = ceil(fVar13);
			}
			*uParam3 = iVar1;
			iVar2 = func_472(uParam1->f_16, *uParam3);
			*iParam2 = (*iParam2 + iVar2);
			if (bVar17)
			{
				iVar9 = func_471(uParam1->f_16, *uParam3);
				if (iVar9 > 0)
				{
					*iParam2 = (*iParam2 + iVar9);
				}
			}
			if (func_574(*iParam2) > 0)
			{
				if (iVar15 == unk_0x460153A63B9477BC())
				{
					func_569("SMTICK_RONCUT", func_574(*iParam2));
				}
				*iParam2 = (*iParam2 - func_574(*iParam2));
			}
			if (iVar15 == unk_0x460153A63B9477BC())
			{
				func_573(iVar2, iVar9);
				iVar6 = func_565(&uVar5);
				iVar7 = Global_262145.f_22335;
				if (iVar6 > iVar7)
				{
					iVar6 = iVar7;
				}
				iVar8 = ceil((IntToFloat(iVar6) * Global_262145.f_22334));
				*uParam4 = ((*iParam2 / 100) * iVar8);
				*iParam2 = (*iParam2 + *uParam4);
				if (*iParam2 > 0)
				{
					if (iVar6 > 0)
					{
						func_548(44);
					}
				}
				if (*iParam2 > 0)
				{
					if (!bVar16)
					{
						iVar18 = 0;
						while (iVar18 < unk_0xEFA28384DDD283E1())
						{
							iVar19 = iVar18;
							if (unk_0xBD09DF93F957A0CF(iVar19))
							{
								iVar20 = unk_0x9019589211A13B02(iVar19);
								if (func_564(iVar20))
								{
									func_556(iVar20, 1, 1160415507);
								}
							}
							iVar18++;
						}
					}
				}
				Global_2540384.f_5188.f_382 = *iParam2;
			}
			else if (bVar16)
			{
				fVar14 = Global_262145.f_22268;
				iVar3 = ceil((IntToFloat(*iParam2) * fVar14));
				*iParam2 = iVar3;
				iVar4 = Global_262145.f_22269;
				if (*iParam2 > iVar4)
				{
					*iParam2 = iVar4;
				}
				if (*iParam2 > 0)
				{
					Global_1688746 = *iParam2;
					func_548(121);
				}
			}
			else
			{
				*iParam2 = 0;
			}
		}
	}
}

void func_573(int iParam0, int iParam1)
{
	if (iParam0 > 0)
	{
		func_567(iParam0, 6117);
	}
	if (iParam1 > 0)
	{
		func_567(iParam1, 6118);
	}
}

int func_574(int iParam0)
{
	float fVar0;
	float fVar1;
	
	fVar0 = to_float(iParam0);
	fVar1 = (fVar0 * Global_262145.f_22302);
	if (fVar1 > to_float(Global_262145.f_22303))
	{
		fVar1 = to_float(Global_262145.f_22303);
	}
	return round(fVar1);
}

void func_575(int iParam0, var uParam1, int iParam2, var uParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	var uVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	float fVar10;
	float fVar11;
	float fVar12;
	float fVar13;
	float fVar14;
	int iVar15;
	int iVar16;
	bool bVar17;
	int iVar18;
	int iVar19;
	int iVar20;
	
	bVar17 = func_253(1);
	if (iParam0 == 225)
	{
	}
	else if (iParam0 == 226)
	{
		if (func_476())
		{
			iVar15 = unk_0x460153A63B9477BC();
		}
		else
		{
			iVar15 = func_495();
		}
		if (iVar15 != -1)
		{
			iVar16 = func_475(iVar15);
			iVar0 = (func_599(iVar15, iVar16) + uParam1->f_8);
			if (uParam1->f_10 == uParam1->f_11)
			{
				iVar1 = iVar0;
			}
			else
			{
				fVar10 = to_float(uParam1->f_10);
				fVar11 = to_float(uParam1->f_11);
				fVar12 = ((fVar10 / fVar11) * 100f);
				fVar13 = ((IntToFloat(iVar0) / 100f) * fVar12);
				iVar1 = ceil(fVar13);
			}
			*uParam3 = iVar1;
			iVar2 = func_595(iVar15, iVar16, iVar1);
			if (uParam1->f_14 == 0)
			{
				iVar2 = ceil((IntToFloat(iVar2) * Global_262145.f_21045));
			}
			else
			{
				iVar2 = ceil((IntToFloat(iVar2) * Global_262145.f_21044));
			}
			*iParam2 = (*iParam2 + iVar2);
			if (iVar15 == unk_0x460153A63B9477BC())
			{
				func_589(iVar16, iVar2);
				if (func_585(iVar16) >= Global_262145.f_20591 || iVar2 >= Global_262145.f_20591)
				{
					func_576(5);
				}
				iVar6 = func_565(&uVar5);
				iVar7 = round(Global_262145.f_21047);
				if (iVar6 > iVar7)
				{
					iVar6 = iVar7;
				}
				iVar8 = ceil((IntToFloat(iVar6) * Global_262145.f_21046));
				iVar9 = ((*iParam2 / 100) * iVar8);
				*iParam2 = (*iParam2 + iVar9);
				if (*iParam2 > 0)
				{
					if (iVar6 > 0)
					{
						func_548(108);
					}
					else
					{
						func_548(110);
					}
				}
				if (*iParam2 > 0)
				{
					if (!bVar17)
					{
						iVar18 = 0;
						while (iVar18 < unk_0xEFA28384DDD283E1())
						{
							iVar19 = iVar18;
							if (unk_0xBD09DF93F957A0CF(iVar19))
							{
								iVar20 = unk_0x9019589211A13B02(iVar19);
								if (func_564(iVar20))
								{
									func_556(iVar20, 1, -1905128202);
								}
							}
							iVar18++;
						}
					}
				}
				Global_2540384.f_5188.f_382 = *iParam2;
			}
			else if (bVar17)
			{
				fVar14 = Global_262145.f_21048;
				iVar3 = ceil((IntToFloat(*iParam2) * fVar14));
				*iParam2 = iVar3;
				iVar4 = Global_262145.f_21049;
				if (*iParam2 > iVar4)
				{
					*iParam2 = iVar4;
				}
				if (*iParam2 > 0)
				{
					Global_1688746 = *iParam2;
					func_548(112);
				}
			}
			else
			{
				*iParam2 = 0;
			}
		}
	}
	else if (iParam0 == 227)
	{
	}
}

void func_576(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			if (Global_262145.f_20579)
			{
				if (func_578(Global_262145.f_20580))
				{
					func_577("CLOTHAWDSTRAP2", "CLOTHAWDDESC1", 0, 0, 0);
				}
			}
			break;
		
		case 1:
			if (Global_262145.f_20581)
			{
				if (func_578(Global_262145.f_20582))
				{
					func_577("CLOTHAWDSTRAP2", "CLOTHAWDDESC2", 0, 0, 0);
				}
			}
			break;
		
		case 2:
			if (Global_262145.f_20583)
			{
				if (func_578(Global_262145.f_20584))
				{
					func_577("CLOTHAWDSTRAP2", "CLOTHAWDDESC3", 0, 0, 0);
				}
			}
			break;
		
		case 3:
			if (Global_262145.f_20585)
			{
				if (func_578(Global_262145.f_20586))
				{
					func_577("CLOTHAWDSTRAP2", "CLOTHAWDDESC5", 0, 0, 0);
				}
			}
			break;
		
		case 4:
			if (Global_262145.f_20587)
			{
				if (func_578(Global_262145.f_20588))
				{
					func_577("CLOTHAWDSTRAP2", "CLOTHAWDDESC6", 0, 0, 0);
				}
			}
			break;
		
		case 5:
			if (Global_262145.f_20589)
			{
				if (func_578(Global_262145.f_20590))
				{
					func_569("CLOTHAWDSTRAP3", Global_262145.f_20591);
				}
			}
			break;
		
		case 6:
			if (Global_262145.f_20592)
			{
				if (func_578(Global_262145.f_20593))
				{
					func_569("CLOTHAWDSTRAP5", Global_262145.f_20727);
				}
			}
			break;
		
		case 7:
			if (Global_262145.f_20595)
			{
				if (func_578(Global_262145.f_20596))
				{
					func_577("CLOTHAWDSTRAP2", "CLOTHAWDDESC8", 0, 0, 0);
				}
			}
			break;
		
		case 8:
			if (Global_262145.f_20597)
			{
				if (func_578(Global_262145.f_20598))
				{
					func_577("CLOTHAWDSTRAP2", "CLOTHAWDDESC9", 0, 0, 0);
				}
			}
			break;
		
		case 9:
			if (Global_262145.f_20599)
			{
				if (func_578(Global_262145.f_20600))
				{
					func_577("CLOTHAWDSTRAP2", "CLOTHAWDDESC10", 0, 0, 0);
				}
			}
			break;
		
		case 10:
			if (Global_262145.f_20601)
			{
				if (func_578(Global_262145.f_20602))
				{
					func_577("CLOTHAWDSTRAP2", "CLOTHAWDDESC11", 0, 0, 0);
				}
			}
			break;
		
		case 11:
			if (Global_262145.f_20603)
			{
				if (func_578(Global_262145.f_20604))
				{
					func_577("CLOTHAWDSTRAP2", "CLOTHAWDDESC12", 0, 0, 0);
				}
			}
			break;
		
		case 12:
			if (Global_262145.f_20605)
			{
				if (func_578(Global_262145.f_20606))
				{
					func_577("CLOTHAWDSTRAP2", "CLOTHAWDDESC13", 0, 0, 0);
				}
			}
			break;
		
		case 13:
			if (Global_262145.f_20607)
			{
				if (func_578(Global_262145.f_20608))
				{
					func_577("CLOTHAWDSTRAP2", "CLOTHAWDDESC14", 0, 0, 0);
				}
			}
			break;
		
		case 14:
			if (Global_262145.f_20609)
			{
				if (func_578(Global_262145.f_20610))
				{
					func_577("CLOTHAWDSTRAP2", "CLOTHAWDDESC15", 0, 0, 0);
				}
			}
			break;
	}
}

int func_577(char* sParam0, char* sParam1, int iParam2, int iParam3, bool bParam4)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = -1;
	unk_0x5B8DD855EAFD33B5(sParam0);
	if (!iParam2 == 0)
	{
		unk_0x7006FC1051C85FCA(iParam2);
	}
	if (!iParam3 == 0)
	{
		unk_0x7006FC1051C85FCA(iParam3);
	}
	unk_0x6A826E35A3096ED0(sParam1);
	if (!bParam4)
	{
		iVar0 = unk_0xD60C2975A14D763D(0, 1);
	}
	else
	{
		Global_2515173 = { func_67(unk_0x460153A63B9477BC()) };
		if (unk_0x192BD21E18525C69(&Global_2515103, 35, &Global_2515173))
		{
			iVar1 = 0;
			if (unk_0xF005CCA4263DF67F(&(Global_2515103.f_22), "Leader") && Global_2515103.f_30 == 0)
			{
				iVar1 = 1;
			}
			if (Global_2515103.f_21 > 0)
			{
				iVar2 = 0;
			}
			else
			{
				iVar2 = 1;
			}
			iVar0 = unk_0x2262CFE2DD056505(iVar2, unk_0xCF44EDAC07B5D763(&Global_2515103, 35), &(Global_2515103.f_17), Global_2515103.f_30, iVar1, 0, Global_2515103, unk_0x72C1D3A1AB8CAA5B(unk_0x460153A63B9477BC()), Global_1314053, Global_1314054, Global_1314055);
		}
		else
		{
			iVar0 = unk_0xD60C2975A14D763D(0, 1);
		}
	}
	func_308(8, sParam0, 1, sParam1, 0, 0, 0, 0, 1, 0, 0, 0);
	return iVar0;
}

int func_578(int iParam0)
{
	switch (iParam0)
	{
		case joaat("DLC_MP_GR_M_JBIB_19_0"):
		case joaat("DLC_MP_GR_F_JBIB_25_0"):
		case -1191485992:
		case joaat("CLO_GRF_U_25_0"):
			if (!func_582(15417, -1, -1))
			{
				func_581(15417, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("DLC_MP_GR_M_JBIB_19_1"):
		case joaat("DLC_MP_GR_F_JBIB_25_1"):
		case -1407302654:
		case joaat("CLO_GRF_U_25_1"):
			if (!func_582(15418, -1, -1))
			{
				func_581(15418, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("DLC_MP_GR_M_JBIB_20_0"):
		case joaat("DLC_MP_GR_F_JBIB_26_0"):
		case joaat("CLO_GRM_U_20_0"):
		case -1850642937:
			if (!func_582(15425, -1, -1))
			{
				func_581(15425, 1, -1, 1);
				return 1;
			}
			break;
	}
	switch (iParam0)
	{
		case joaat("DLC_MP_GR_M_DECL_5_0"):
		case joaat("DLC_MP_GR_F_DECL_5_0"):
		case -1307315235:
		case joaat("CLO_GRF_DECL_19"):
			if (!func_582(15405, -1, -1))
			{
				func_581(15405, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("DLC_MP_GR_M_DECL_5_1"):
		case joaat("DLC_MP_GR_F_DECL_5_1"):
		case joaat("CLO_GRM_DECL_20"):
		case 1374601256:
			if (!func_582(15393, -1, -1))
			{
				func_581(15393, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("DLC_MP_GR_M_DECL_5_2"):
		case joaat("DLC_MP_GR_F_DECL_5_2"):
		case joaat("CLO_GRM_DECL_21"):
		case -660288110:
			if (!func_582(15409, -1, -1))
			{
				func_581(15409, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("DLC_MP_GR_M_DECL_5_3"):
		case joaat("DLC_MP_GR_F_DECL_5_3"):
		case -1005186539:
		case joaat("CLO_GRF_DECL_22"):
			if (!func_582(15396, -1, -1))
			{
				func_581(15396, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("DLC_MP_GR_M_DECL_5_4"):
		case joaat("DLC_MP_GR_F_DECL_5_4"):
		case joaat("CLO_GRM_DECL_23"):
		case -1132522169:
			if (!func_582(15412, -1, -1))
			{
				func_581(15412, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("DLC_MP_GR_M_DECL_5_5"):
		case joaat("DLC_MP_GR_F_DECL_5_5"):
		case 1110085176:
		case joaat("CLO_GRF_DECL_24"):
			if (!func_148(209, -1))
			{
				func_579(209, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("DLC_MP_GR_M_DECL_5_6"):
		case joaat("DLC_MP_GR_F_DECL_5_6"):
		case joaat("CLO_GRM_DECL_25"):
		case -182614393:
			if (!func_582(15403, -1, -1))
			{
				func_581(15403, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("DLC_MP_GR_M_DECL_5_7"):
		case joaat("DLC_MP_GR_F_DECL_5_7"):
		case -1496983695:
		case joaat("CLO_GRF_DECL_26"):
			if (!func_148(209, -1))
			{
				func_579(209, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("DLC_MP_GR_M_DECL_5_8"):
		case joaat("DLC_MP_GR_F_DECL_5_8"):
		case joaat("CLO_GRM_DECL_27"):
		case -646852824:
			if (!func_582(15389, -1, -1))
			{
				func_581(15389, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("DLC_MP_GR_M_DECL_5_9"):
		case joaat("DLC_MP_GR_F_DECL_5_9"):
		case 420690954:
		case joaat("CLO_GRF_DECL_28"):
			if (!func_148(209, -1))
			{
				func_579(209, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("DLC_MP_GR_M_DECL_5_10"):
		case joaat("DLC_MP_GR_F_DECL_5_10"):
		case joaat("CLO_GRM_DECL_29"):
		case 1717168382:
			if (!func_582(15398, -1, -1))
			{
				func_581(15398, 1, -1, 1);
				return 1;
			}
			break;
	}
	switch (iParam0)
	{
		case joaat("DLC_MP_GR_M_PHEAD_6_0"):
		case joaat("DLC_MP_GR_F_PHEAD_6_0"):
		case joaat("DLC_MP_GR_M_PHEAD_7_0"):
		case joaat("DLC_MP_GR_F_PHEAD_7_0"):
		case -1991379993:
		case joaat("CLO_GRF_PH_6_0"):
			if (!func_582(15400, -1, -1))
			{
				func_581(15400, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("DLC_MP_GR_M_PHEAD_6_1"):
		case joaat("DLC_MP_GR_F_PHEAD_6_1"):
		case joaat("DLC_MP_GR_M_PHEAD_7_1"):
		case joaat("DLC_MP_GR_F_PHEAD_7_1"):
		case 2065127290:
		case joaat("CLO_GRF_PH_6_1"):
			if (!func_148(209, -1))
			{
				func_579(209, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("DLC_MP_GR_M_PHEAD_6_2"):
		case joaat("DLC_MP_GR_F_PHEAD_6_2"):
		case joaat("DLC_MP_GR_M_PHEAD_7_2"):
		case joaat("DLC_MP_GR_F_PHEAD_7_2"):
		case -56403312:
		case joaat("CLO_GRF_PH_6_2"):
			if (!func_582(15408, -1, -1))
			{
				func_581(15408, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("DLC_MP_GR_M_PHEAD_6_3"):
		case joaat("DLC_MP_GR_F_PHEAD_6_3"):
		case joaat("DLC_MP_GR_M_PHEAD_7_3"):
		case joaat("DLC_MP_GR_F_PHEAD_7_3"):
		case -292700571:
		case joaat("CLO_GRF_PH_6_3"):
			if (!func_148(209, -1))
			{
				func_579(209, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("DLC_MP_GR_M_PHEAD_6_4"):
		case joaat("DLC_MP_GR_F_PHEAD_6_4"):
		case joaat("DLC_MP_GR_M_PHEAD_7_4"):
		case joaat("DLC_MP_GR_F_PHEAD_7_4"):
		case -648899601:
		case joaat("CLO_GRF_PH_6_4"):
			if (!func_582(15411, -1, -1))
			{
				func_581(15411, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("DLC_MP_GR_M_PHEAD_6_5"):
		case joaat("DLC_MP_GR_F_PHEAD_6_5"):
		case joaat("DLC_MP_GR_M_PHEAD_7_5"):
		case joaat("DLC_MP_GR_F_PHEAD_7_5"):
		case -889194678:
		case joaat("CLO_GRF_PH_6_5"):
			if (!func_582(15397, -1, -1))
			{
				func_581(15397, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("DLC_MP_GR_M_PHEAD_6_6"):
		case joaat("DLC_MP_GR_F_PHEAD_6_6"):
		case joaat("DLC_MP_GR_M_PHEAD_7_6"):
		case joaat("DLC_MP_GR_F_PHEAD_7_6"):
		case 867092646:
		case joaat("CLO_GRF_PH_6_6"):
			if (!func_582(15413, -1, -1))
			{
				func_581(15413, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("DLC_MP_GR_M_PHEAD_6_7"):
		case joaat("DLC_MP_GR_F_PHEAD_6_7"):
		case joaat("DLC_MP_GR_M_PHEAD_7_7"):
		case joaat("DLC_MP_GR_F_PHEAD_7_7"):
		case 627387411:
		case joaat("CLO_GRF_PH_6_7"):
			if (!func_582(15391, -1, -1))
			{
				func_581(15391, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("DLC_MP_GR_M_PHEAD_6_8"):
		case joaat("DLC_MP_GR_F_PHEAD_6_8"):
		case joaat("DLC_MP_GR_M_PHEAD_7_8"):
		case joaat("DLC_MP_GR_F_PHEAD_7_8"):
		case joaat("CLO_GRM_PH_6_8"):
		case 1682427144:
			if (!func_582(15388, -1, -1))
			{
				func_581(15388, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("DLC_MP_GR_M_PHEAD_6_9"):
		case joaat("DLC_MP_GR_F_PHEAD_6_9"):
		case joaat("DLC_MP_GR_M_PHEAD_7_9"):
		case joaat("DLC_MP_GR_F_PHEAD_7_9"):
		case 35480964:
		case joaat("CLO_GRF_PH_6_9"):
			if (!func_148(209, -1))
			{
				func_579(209, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("DLC_MP_GR_M_PHEAD_6_10"):
		case joaat("DLC_MP_GR_F_PHEAD_6_10"):
		case joaat("DLC_MP_GR_M_PHEAD_7_10"):
		case joaat("DLC_MP_GR_F_PHEAD_7_10"):
		case joaat("CLO_GRM_PH_6_10"):
		case 1377465778:
			if (!func_582(15401, -1, -1))
			{
				func_581(15401, 1, -1, 1);
				return 1;
			}
			break;
	}
	switch (iParam0)
	{
		case joaat("MP_Gunrunning_Award_000_M"):
		case joaat("MP_Gunrunning_Award_000_F"):
		case -1604737223:
		case joaat("CLO_GRF_DECL_0"):
			if (!func_582(15394, -1, -1))
			{
				func_581(15394, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("MP_Gunrunning_Award_001_M"):
		case joaat("MP_Gunrunning_Award_001_F"):
		case -1367129204:
		case joaat("CLO_GRF_DECL_1"):
			if (!func_148(209, -1))
			{
				func_579(209, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("MP_Gunrunning_Award_002_M"):
		case joaat("MP_Gunrunning_Award_002_F"):
		case joaat("CLO_GRM_DECL_2"):
		case -1438775324:
			if (!func_582(15406, -1, -1))
			{
				func_581(15406, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("MP_Gunrunning_Award_003_M"):
		case joaat("MP_Gunrunning_Award_003_F"):
		case -1686659723:
		case joaat("CLO_GRF_DECL_3"):
			if (!func_582(15395, -1, -1))
			{
				func_581(15395, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("MP_Gunrunning_Award_004_M"):
		case joaat("MP_Gunrunning_Award_004_F"):
		case 1992217604:
		case joaat("CLO_GRF_DECL_4"):
			if (!func_148(209, -1))
			{
				func_579(209, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("MP_Gunrunning_Award_005_M"):
		case joaat("MP_Gunrunning_Award_005_F"):
		case -1934557208:
		case joaat("CLO_GRF_DECL_5"):
			if (!func_582(15410, -1, -1))
			{
				func_581(15410, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("MP_Gunrunning_Award_006_M"):
		case joaat("MP_Gunrunning_Award_006_F"):
		case -1034032319:
		case joaat("CLO_GRF_DECL_6"):
			if (!func_582(15407, -1, -1))
			{
				func_581(15407, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("MP_Gunrunning_Award_007_M"):
		case joaat("MP_Gunrunning_Award_007_F"):
		case 1747334867:
		case joaat("CLO_GRF_DECL_7"):
			if (!func_148(209, -1))
			{
				func_579(209, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("MP_Gunrunning_Award_008_M"):
		case joaat("MP_Gunrunning_Award_008_F"):
		case 236389050:
		case joaat("CLO_GRF_DECL_8"):
			if (!func_148(209, -1))
			{
				func_579(209, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("MP_Gunrunning_Award_009_M"):
		case joaat("MP_Gunrunning_Award_009_F"):
		case joaat("CLO_GRM_DECL_9"):
		case 908992470:
			if (!func_582(15414, -1, -1))
			{
				func_581(15414, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("MP_Gunrunning_Award_010_M"):
		case joaat("MP_Gunrunning_Award_010_F"):
		case joaat("CLO_GRM_DECL_10"):
		case -1021993708:
			if (!func_582(15415, -1, -1))
			{
				func_581(15415, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("MP_Gunrunning_Award_011_M"):
		case joaat("MP_Gunrunning_Award_011_F"):
		case 479676642:
		case joaat("CLO_GRF_DECL_11"):
			if (!func_582(15399, -1, -1))
			{
				func_581(15399, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("MP_Gunrunning_Award_012_M"):
		case joaat("MP_Gunrunning_Award_012_F"):
		case 242920617:
		case joaat("CLO_GRF_DECL_12"):
			if (!func_582(15404, -1, -1))
			{
				func_581(15404, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("MP_Gunrunning_Award_013_M"):
		case joaat("MP_Gunrunning_Award_013_F"):
		case -1219723702:
		case joaat("CLO_GRF_DECL_13"):
			if (!func_148(209, -1))
			{
				func_579(209, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("MP_Gunrunning_Award_014_M"):
		case joaat("MP_Gunrunning_Award_014_F"):
		case joaat("CLO_GRM_DECL_14"):
		case 2087194554:
			if (!func_582(15392, -1, -1))
			{
				func_581(15392, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("MP_Gunrunning_Award_015_M"):
		case joaat("MP_Gunrunning_Award_015_F"):
		case joaat("CLO_GRM_DECL_15"):
		case 981732339:
			if (!func_582(15390, -1, -1))
			{
				func_581(15390, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("MP_Gunrunning_Award_016_M"):
		case joaat("MP_Gunrunning_Award_016_F"):
		case joaat("CLO_GRM_DECL_16"):
		case 1271443068:
			if (!func_582(15402, -1, -1))
			{
				func_581(15402, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("MP_Gunrunning_Award_017_M"):
		case joaat("MP_Gunrunning_Award_017_F"):
		case joaat("CLO_GRM_DECL_17"):
		case -1785118184:
			if (!func_582(15416, -1, -1))
			{
				func_581(15416, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("MP_Gunrunning_Award_018_M"):
		case joaat("MP_Gunrunning_Award_018_F"):
		case 2029126042:
		case joaat("CLO_GRF_DECL_18"):
			if (!func_148(209, -1))
			{
				func_579(209, 1, -1, 1);
				return 1;
			}
			break;
	}
	switch (iParam0)
	{
		case joaat("MP_Gunrunning_Award_019_M"):
		case joaat("MP_Gunrunning_Award_025_F"):
		case -14316613:
		case joaat("CLO_GRF_DECL_30"):
			if (!func_582(15426, -1, -1))
			{
				func_581(15426, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("MP_Gunrunning_Award_020_M"):
		case joaat("MP_Gunrunning_Award_020_F"):
		case 1281631799:
		case joaat("CLO_GRF_DECL_31"):
			if (!func_582(15422, -1, -1))
			{
				func_581(15422, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("MP_Gunrunning_Award_020_M_ALT"):
		case joaat("MP_Gunrunning_Award_020_F_ALT"):
		case 447234752:
		case joaat("CLO_GRF_DECL_32"):
			if (!func_582(15423, -1, -1))
			{
				func_581(15423, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("MP_Gunrunning_Award_021_M"):
		case joaat("MP_Gunrunning_Award_021_F"):
		case 278933172:
		case joaat("CLO_GRF_DECL_33"):
			if (!func_582(15421, -1, -1))
			{
				func_581(15421, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("MP_Gunrunning_Award_022_M"):
		case joaat("MP_Gunrunning_Award_026_F"):
		case -562607521:
		case joaat("CLO_GRF_DECL_34"):
			if (!func_582(15427, -1, -1))
			{
				func_581(15427, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("MP_Gunrunning_Award_023_M"):
		case joaat("MP_Gunrunning_Award_023_F"):
		case 755492739:
		case joaat("CLO_GRF_DECL_35"):
			if (!func_582(15419, -1, -1))
			{
				func_581(15419, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("MP_Gunrunning_Award_024_M"):
		case joaat("MP_Gunrunning_Award_024_F"):
		case -85982412:
		case joaat("CLO_GRF_DECL_36"):
			if (!func_582(15420, -1, -1))
			{
				func_581(15420, 1, -1, 1);
				return 1;
			}
			break;
	}
	return 0;
}

void func_579(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	if (func_580())
	{
		iVar0 = Global_2587834[iParam0 /*3*/][func_149(iParam2)];
		if (iVar0 != 0)
		{
			unk_0xBD9D9E72ABB288E4(iVar0, iParam1, iParam3);
		}
	}
}

int func_580()
{
	return 1;
	return 0;
}

int func_581(int iParam0, bool bParam1, int iParam2, int iParam3)
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
	int iVar10;
	int iVar11;
	int iVar12;
	int iVar13;
	int iVar14;
	int iVar15;
	int iVar16;
	int iVar17;
	int iVar18;
	int iVar19;
	int iVar20;
	int iVar21;
	int iVar22;
	int iVar23;
	int iVar24;
	int iVar25;
	
	if (iParam2 == -1)
	{
		iParam2 = func_19();
	}
	iVar0 = 0;
	if (iParam0 >= 0 && iParam0 < 192)
	{
		iVar2 = unk_0x43BE40E27DB6DC2E((iParam0 - 0), 0, 1, iParam2);
		iVar1 = ((iParam0 - 0) - unk_0x12730A13C85FC896((iParam0 - 0)) * 64);
		iVar0 = unk_0xC06DB57B81E2C02B(iVar2, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 192 && iParam0 < 384)
	{
		iVar3 = unk_0x43BE40E27DB6DC2E((iParam0 - 192), 1, 1, iParam2);
		iVar1 = ((iParam0 - 192) - unk_0x12730A13C85FC896((iParam0 - 192)) * 64);
		iVar0 = unk_0xC06DB57B81E2C02B(iVar3, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 513 && iParam0 < 705)
	{
		iVar4 = unk_0x43BE40E27DB6DC2E((iParam0 - 513), 0, 0, 0);
		iVar1 = ((iParam0 - 513) - unk_0x12730A13C85FC896((iParam0 - 513)) * 64);
		iVar0 = unk_0xC06DB57B81E2C02B(iVar4, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 705 && iParam0 < 1281)
	{
		iVar5 = unk_0x43BE40E27DB6DC2E((iParam0 - 705), 1, 0, 0);
		iVar1 = ((iParam0 - 705) - unk_0x12730A13C85FC896((iParam0 - 705)) * 64);
		iVar0 = unk_0xC06DB57B81E2C02B(iVar5, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 3111 && iParam0 < 3879)
	{
		iVar6 = unk_0x840F9A9E6D216561((iParam0 - 3111), 0, 1, iParam2);
		iVar1 = ((iParam0 - 3111) - unk_0x12730A13C85FC896((iParam0 - 3111)) * 64);
		iVar0 = unk_0xC06DB57B81E2C02B(iVar6, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 2919 && iParam0 < 3111)
	{
		iVar7 = unk_0x840F9A9E6D216561((iParam0 - 2919), 0, 0, 0);
		iVar1 = ((iParam0 - 2919) - unk_0x12730A13C85FC896((iParam0 - 2919)) * 64);
		iVar0 = unk_0xC06DB57B81E2C02B(iVar7, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 4207 && iParam0 < 4335)
	{
		iVar8 = unk_0x4B2E4855CB2B4FAA((iParam0 - 4207), 0, 1, iParam2, "_NGPSTAT_BOOL");
		iVar1 = ((iParam0 - 4207) - unk_0x12730A13C85FC896((iParam0 - 4207)) * 64);
		iVar0 = unk_0xC06DB57B81E2C02B(iVar8, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 4335 && iParam0 < 4399)
	{
		iVar9 = unk_0x4B2E4855CB2B4FAA((iParam0 - 4335), 0, 0, 0, "_NGPSTAT_BOOL");
		iVar1 = ((iParam0 - 4335) - unk_0x12730A13C85FC896((iParam0 - 4335)) * 64);
		iVar0 = unk_0xC06DB57B81E2C02B(iVar9, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 6029 && iParam0 < 6413)
	{
		iVar10 = unk_0x4B2E4855CB2B4FAA((iParam0 - 6029), 0, 1, iParam2, "_NGTATPSTAT_BOOL");
		iVar1 = ((iParam0 - 6029) - unk_0x12730A13C85FC896((iParam0 - 6029)) * 64);
		iVar0 = unk_0xC06DB57B81E2C02B(iVar10, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 7385 && iParam0 < 7641)
	{
		iVar11 = unk_0x4B2E4855CB2B4FAA((iParam0 - 7385), 0, 1, iParam2, "_NGDLCPSTAT_BOOL");
		iVar1 = ((iParam0 - 7385) - unk_0x12730A13C85FC896((iParam0 - 7385)) * 64);
		iVar0 = unk_0xC06DB57B81E2C02B(iVar11, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 7321 && iParam0 < 7385)
	{
		iVar12 = unk_0x4B2E4855CB2B4FAA((iParam0 - 7321), 0, 0, 0, "_NGDLCPSTAT_BOOL");
		iVar1 = ((iParam0 - 7321) - unk_0x12730A13C85FC896((iParam0 - 7321)) * 64);
		iVar0 = unk_0xC06DB57B81E2C02B(iVar12, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 9361 && iParam0 < 9553)
	{
		iVar13 = unk_0x4B2E4855CB2B4FAA((iParam0 - 9361), 0, 1, iParam2, "_DLCBIKEPSTAT_BOOL");
		iVar1 = ((iParam0 - 9361) - unk_0x12730A13C85FC896((iParam0 - 9361)) * 64);
		iVar0 = unk_0xC06DB57B81E2C02B(iVar13, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 15369 && iParam0 < 15561)
	{
		iVar14 = unk_0x4B2E4855CB2B4FAA((iParam0 - 15369), 0, 1, iParam2, "_DLCGUNPSTAT_BOOL");
		iVar1 = ((iParam0 - 15369) - unk_0x12730A13C85FC896((iParam0 - 15369)) * 64);
		iVar0 = unk_0xC06DB57B81E2C02B(iVar14, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 15562 && iParam0 < 15946)
	{
		iVar15 = unk_0x4B2E4855CB2B4FAA((iParam0 - 15562), 0, 1, iParam2, "_GUNTATPSTAT_BOOL");
		iVar1 = ((iParam0 - 15562) - unk_0x12730A13C85FC896((iParam0 - 15562)) * 64);
		iVar0 = unk_0xC06DB57B81E2C02B(iVar15, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 15946 && iParam0 < 16010)
	{
		iVar16 = unk_0x4B2E4855CB2B4FAA((iParam0 - 15946), 0, 1, iParam2, "_DLCSMUGCHARPSTAT_BOOL");
		iVar1 = ((iParam0 - 15946) - unk_0x12730A13C85FC896((iParam0 - 15946)) * 64);
		iVar0 = unk_0xC06DB57B81E2C02B(iVar16, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 18098 && iParam0 < 18162)
	{
		iVar17 = unk_0x4B2E4855CB2B4FAA((iParam0 - 18098), 0, 1, iParam2, "_GANGOPSPSTAT_BOOL");
		iVar1 = ((iParam0 - 18098) - unk_0x12730A13C85FC896((iParam0 - 18098)) * 64);
		iVar0 = unk_0xC06DB57B81E2C02B(iVar17, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 22066 && iParam0 < 22194)
	{
		iVar18 = unk_0x4B2E4855CB2B4FAA((iParam0 - 22066), 0, 1, iParam2, "_BUSINESSBATPSTAT_BOOL");
		iVar1 = ((iParam0 - 22066) - unk_0x12730A13C85FC896((iParam0 - 22066)) * 64);
		iVar0 = unk_0xC06DB57B81E2C02B(iVar18, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 24962 && iParam0 < 25538)
	{
		iVar19 = unk_0x4B2E4855CB2B4FAA((iParam0 - 24962), 0, 1, iParam2, "_ARENAWARSPSTAT_BOOL");
		iVar1 = ((iParam0 - 24962) - unk_0x12730A13C85FC896((iParam0 - 24962)) * 64);
		iVar0 = unk_0xC06DB57B81E2C02B(iVar19, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 26810 && iParam0 < 27258)
	{
		iVar20 = unk_0x4B2E4855CB2B4FAA((iParam0 - 26810), 0, 1, iParam2, "_CASINOPSTAT_BOOL");
		iVar1 = ((iParam0 - 26810) - unk_0x12730A13C85FC896((iParam0 - 26810)) * 64);
		iVar0 = unk_0xC06DB57B81E2C02B(iVar20, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 28098 && iParam0 < 28354)
	{
		iVar21 = unk_0x4B2E4855CB2B4FAA((iParam0 - 28098), 0, 1, iParam2, "_CASINOHSTPSTAT_BOOL");
		iVar1 = ((iParam0 - 28098) - unk_0x12730A13C85FC896((iParam0 - 28098)) * 64);
		iVar0 = unk_0xC06DB57B81E2C02B(iVar21, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 28355 && iParam0 < 28483)
	{
		iVar22 = unk_0x4B2E4855CB2B4FAA((iParam0 - 28355), 0, 1, iParam2, "_HEIST3TATTOOSTAT_BOOL");
		iVar1 = ((iParam0 - 28355) - unk_0x12730A13C85FC896((iParam0 - 28355)) * 64);
		iVar0 = unk_0xC06DB57B81E2C02B(iVar22, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 30227 && iParam0 < 30355)
	{
		iVar23 = unk_0x4B2E4855CB2B4FAA((iParam0 - 30227), 0, 1, iParam2, "_SU20PSTAT_BOOL");
		iVar1 = ((iParam0 - 30227) - unk_0x12730A13C85FC896((iParam0 - 30227)) * 64);
		iVar0 = unk_0xC06DB57B81E2C02B(iVar23, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 30355 && iParam0 < 30483)
	{
		iVar24 = unk_0x4B2E4855CB2B4FAA((iParam0 - 30355), 0, 1, iParam2, "_SU20TATTOOSTAT_BOOL");
		iVar1 = ((iParam0 - 30355) - unk_0x12730A13C85FC896((iParam0 - 30355)) * 64);
		iVar0 = unk_0xC06DB57B81E2C02B(iVar24, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 30515 && iParam0 < 30707)
	{
		iVar25 = unk_0x4B2E4855CB2B4FAA((iParam0 - 30515), 0, 1, iParam2, "_HISLANDPSTAT_BOOL");
		iVar1 = ((iParam0 - 30515) - unk_0x12730A13C85FC896((iParam0 - 30515)) * 64);
		iVar0 = unk_0xC06DB57B81E2C02B(iVar25, bParam1, iVar1, iParam3);
	}
	return iVar0;
}

int func_582(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	var uVar2;
	
	iVar0 = 0;
	if (iParam1 == -1)
	{
		iParam1 = func_19();
	}
	iVar1 = func_584(iParam0, iParam1);
	uVar2 = func_583(iParam0);
	if (0 != iVar1)
	{
		iVar0 = unk_0x9FD0AD883E4A7C1E(iVar1, uVar2, iParam2);
	}
	return iVar0;
}

int func_583(int iParam0)
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

int func_584(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam1 == -1)
	{
		iParam1 = func_19();
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

int func_585(int iParam0)
{
	int iVar0;
	
	iVar0 = func_587(iParam0);
	return func_462(func_586(iVar0), -1, 0);
}

int func_586(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 3952;
		
		case 1:
			return 3953;
		
		case 2:
			return 3954;
		
		case 3:
			return 3955;
		
		case 4:
			return 3956;
		
		case 5:
			return 5457;
		
		default:
	}
	return 3952;
}

int func_587(int iParam0)
{
	int iVar0;
	
	if (func_588(iParam0))
	{
		iVar0 = 0;
		while (iVar0 <= 5)
		{
			if (Global_1590682[unk_0x460153A63B9477BC() /*883*/].f_274.f_183[iVar0 /*12*/] == iParam0)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return -1;
}

int func_588(int iParam0)
{
	if (iParam0 == 32 || iParam0 == 0)
	{
		return 0;
	}
	return 1;
}

void func_589(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	iVar0 = func_587(iParam0);
	iVar1 = func_586(iVar0);
	iVar2 = (func_462(iVar1, -1, 0) + iParam1);
	func_460(iVar1, iVar2, -1, 1, 0);
	if (iVar0 == 5)
	{
		return;
	}
	if (func_592(9357, -1, -1) < 3)
	{
		iVar3 = 0;
		iVar0 = 0;
		while (iVar0 <= 5)
		{
			if (Global_1590682[unk_0x460153A63B9477BC() /*883*/].f_274.f_183[iVar0 /*12*/] != 0)
			{
				iVar1 = func_586(iVar0);
				iVar3 = (iVar3 + func_462(iVar1, -1, 0));
			}
			iVar0++;
		}
		iVar4 = 1;
		while (iVar4 <= 3)
		{
			if (iVar3 >= func_591(iVar4))
			{
				iVar5 = iVar4;
			}
			iVar4++;
		}
		func_590(9357, iVar5, -1, 1);
	}
}

var func_590(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	var uVar2;
	
	if (iParam2 == -1)
	{
		iParam2 = func_19();
	}
	if (iParam1 < 0)
	{
		iParam1 = 255;
	}
	iVar0 = 0;
	iVar1 = 0;
	if (iParam0 >= 384 && iParam0 < 457)
	{
		iVar0 = unk_0x169039D5869899DA((iParam0 - 384), 0, 1, iParam2);
		iVar1 = ((iParam0 - 384) - unk_0xCCD6EB3D51BA0D9E((iParam0 - 384)) * 8) * 8;
	}
	else if (iParam0 >= 457 && iParam0 < 513)
	{
		iVar0 = unk_0x169039D5869899DA((iParam0 - 457), 1, 1, iParam2);
		iVar1 = ((iParam0 - 457) - unk_0xCCD6EB3D51BA0D9E((iParam0 - 457)) * 8) * 8;
	}
	else if (iParam0 >= 1281 && iParam0 < 1305)
	{
		iVar0 = unk_0x169039D5869899DA((iParam0 - 1281), 0, 0, 0);
		iVar1 = ((iParam0 - 1281) - unk_0xCCD6EB3D51BA0D9E((iParam0 - 1281)) * 8) * 8;
	}
	else if (iParam0 >= 1305 && iParam0 < 1361)
	{
		iVar0 = unk_0x169039D5869899DA((iParam0 - 1305), 1, 0, 0);
		iVar1 = ((iParam0 - 1305) - unk_0xCCD6EB3D51BA0D9E((iParam0 - 1305)) * 8) * 8;
	}
	else if (iParam0 >= 1393 && iParam0 < 2919)
	{
		iVar0 = unk_0x33259517529FA9DD((iParam0 - 1393), 0, 1, iParam2);
		iVar1 = ((iParam0 - 1393) - unk_0xCCD6EB3D51BA0D9E((iParam0 - 1393)) * 8) * 8;
	}
	else if (iParam0 >= 1361 && iParam0 < 1393)
	{
		iVar0 = unk_0x33259517529FA9DD((iParam0 - 1361), 0, 0, 0);
		iVar1 = ((iParam0 - 1361) - unk_0xCCD6EB3D51BA0D9E((iParam0 - 1361)) * 8) * 8;
	}
	else if (iParam0 >= 3879 && iParam0 < 4143)
	{
		iVar0 = unk_0x7F2F9520C57D9D66((iParam0 - 3879), 0, 1, iParam2, "_NGPSTAT_INT");
		iVar1 = ((iParam0 - 3879) - unk_0xCCD6EB3D51BA0D9E((iParam0 - 3879)) * 8) * 8;
	}
	else if (iParam0 >= 4143 && iParam0 < 4207)
	{
		iVar0 = unk_0x7F2F9520C57D9D66((iParam0 - 4143), 0, 0, 0, "_NGPSTAT_INT");
		iVar1 = ((iParam0 - 4143) - unk_0xCCD6EB3D51BA0D9E((iParam0 - 4143)) * 8) * 8;
	}
	else if (iParam0 >= 4399 && iParam0 < 6028)
	{
		iVar0 = unk_0x7F2F9520C57D9D66((iParam0 - 4399), 0, 1, iParam2, "_LRPSTAT_INT");
		iVar1 = ((iParam0 - 4399) - unk_0xCCD6EB3D51BA0D9E((iParam0 - 4399)) * 8) * 8;
	}
	else if (iParam0 >= 6413 && iParam0 < 7262)
	{
		iVar0 = unk_0x7F2F9520C57D9D66((iParam0 - 6413), 0, 1, iParam2, "_APAPSTAT_INT");
		iVar1 = ((iParam0 - 6413) - unk_0xCCD6EB3D51BA0D9E((iParam0 - 6413)) * 8) * 8;
	}
	else if (iParam0 >= 7262 && iParam0 < 7313)
	{
		iVar0 = unk_0x7F2F9520C57D9D66((iParam0 - 7262), 0, 1, iParam2, "_LR2PSTAT_INT");
		iVar1 = ((iParam0 - 7262) - unk_0xCCD6EB3D51BA0D9E((iParam0 - 7262)) * 8) * 8;
	}
	else if (iParam0 >= 7681 && iParam0 < 9361)
	{
		iVar0 = unk_0x7F2F9520C57D9D66((iParam0 - 7681), 0, 1, iParam2, "_BIKEPSTAT_INT");
		iVar1 = ((iParam0 - 7681) - unk_0xCCD6EB3D51BA0D9E((iParam0 - 7681)) * 8) * 8;
	}
	else if (iParam0 >= 9553 && iParam0 < 15265)
	{
		iVar0 = unk_0x7F2F9520C57D9D66((iParam0 - 9553), 0, 1, iParam2, "_IMPEXPPSTAT_INT");
		iVar1 = ((iParam0 - 9553) - unk_0xCCD6EB3D51BA0D9E((iParam0 - 9553)) * 8) * 8;
	}
	else if (iParam0 >= 15265 && iParam0 < 15369)
	{
		iVar0 = unk_0x7F2F9520C57D9D66((iParam0 - 15265), 0, 1, iParam2, "_GUNRPSTAT_INT");
		iVar1 = ((iParam0 - 15265) - unk_0xCCD6EB3D51BA0D9E((iParam0 - 15265)) * 8) * 8;
	}
	else if (iParam0 >= 16010 && iParam0 < 18098)
	{
		iVar0 = unk_0x7F2F9520C57D9D66((iParam0 - 16010), 0, 1, iParam2, "_DLCSMUGCHARPSTAT_INT");
		iVar1 = ((iParam0 - 16010) - unk_0xCCD6EB3D51BA0D9E((iParam0 - 16010)) * 8) * 8;
	}
	else if (iParam0 >= 18162 && iParam0 < 19018)
	{
		iVar0 = unk_0x7F2F9520C57D9D66((iParam0 - 18162), 0, 1, iParam2, "_GANGOPSPSTAT_INT");
		iVar1 = ((iParam0 - 18162) - unk_0xCCD6EB3D51BA0D9E((iParam0 - 18162)) * 8) * 8;
	}
	else if (iParam0 >= 19018 && iParam0 < 22066)
	{
		iVar0 = unk_0x7F2F9520C57D9D66((iParam0 - 19018), 0, 1, iParam2, "_BUSINESSBATPSTAT_INT");
		iVar1 = ((iParam0 - 19018) - unk_0xCCD6EB3D51BA0D9E((iParam0 - 19018)) * 8) * 8;
	}
	else if (iParam0 >= 22194 && iParam0 < 24962)
	{
		iVar0 = unk_0x7F2F9520C57D9D66((iParam0 - 22194), 0, 1, iParam2, "_ARENAWARSPSTAT_INT");
		iVar1 = ((iParam0 - 22194) - unk_0xCCD6EB3D51BA0D9E((iParam0 - 22194)) * 8) * 8;
	}
	else if (iParam0 >= 25538 && iParam0 < 26810)
	{
		iVar0 = unk_0x7F2F9520C57D9D66((iParam0 - 25538), 0, 1, iParam2, "_CASINOPSTAT_INT");
		iVar1 = ((iParam0 - 25538) - unk_0xCCD6EB3D51BA0D9E((iParam0 - 25538)) * 8) * 8;
	}
	else if (iParam0 >= 27258 && iParam0 < 28098)
	{
		iVar0 = unk_0x7F2F9520C57D9D66((iParam0 - 27258), 0, 1, iParam2, "_CASINOHSTPSTAT_INT");
		iVar1 = ((iParam0 - 27258) - unk_0xCCD6EB3D51BA0D9E((iParam0 - 27258)) * 8) * 8;
	}
	else if (iParam0 >= 28483 && iParam0 < 30227)
	{
		iVar0 = unk_0x7F2F9520C57D9D66((iParam0 - 28483), 0, 1, iParam2, "_SU20PSTAT_INT");
		iVar1 = ((iParam0 - 28483) - unk_0xCCD6EB3D51BA0D9E((iParam0 - 28483)) * 8) * 8;
	}
	else if (iParam0 >= 30483 && iParam0 < 30515)
	{
		iVar0 = unk_0x7F2F9520C57D9D66((iParam0 - 30483), 0, 1, iParam2, "_HISLANDPSTAT_INT");
		iVar1 = ((iParam0 - 30483) - unk_0xCCD6EB3D51BA0D9E((iParam0 - 30483)) * 8) * 8;
	}
	else if (iParam0 >= 7641 && iParam0 < 7681)
	{
		iVar0 = unk_0x7F2F9520C57D9D66((iParam0 - 7641), 0, 1, iParam2, "_NGDLCPSTAT_INT");
		iVar1 = ((iParam0 - 7641) - unk_0xCCD6EB3D51BA0D9E((iParam0 - 7641)) * 8) * 8;
	}
	else if (iParam0 >= 7313 && iParam0 < 7321)
	{
		iVar0 = unk_0x7F2F9520C57D9D66((iParam0 - 7313), 0, 0, 0, "_NGDLCPSTAT_INT");
		iVar1 = ((iParam0 - 7313) - unk_0xCCD6EB3D51BA0D9E((iParam0 - 7313)) * 8) * 8;
	}
	uVar2 = unk_0x9972E0F3B8651981(iVar0, iParam1, iVar1, 8, iParam3);
	return uVar2;
}

int func_591(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return 100000;
			break;
		
		case 2:
			return 300000;
			break;
		
		case 3:
			return 500000;
			break;
	}
	return 0;
}

int func_592(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (iParam1 == -1)
	{
		iParam1 = func_19();
	}
	iVar0 = 0;
	iVar1 = func_594(iParam0, iParam1);
	iVar2 = func_593(iParam0);
	if (0 != iVar1)
	{
		if (!unk_0x84F15E111A2161E1(iVar1, &iVar0, iVar2, 8, iParam2))
		{
			iVar0 = 0;
		}
	}
	return iVar0;
}

int func_593(int iParam0)
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

int func_594(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam1 == -1)
	{
		iParam1 = func_19();
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

int func_595(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	
	iVar1 = func_489(iParam1);
	if (func_588(iParam1))
	{
		switch (iVar1)
		{
			case 1:
				iVar0 = Global_262145.f_16968;
				if (func_596(iParam0, iParam1, 0))
				{
					iVar0 = (iVar0 + Global_262145.f_16973);
				}
				if (func_596(iParam0, iParam1, 1))
				{
					iVar0 = (iVar0 + Global_262145.f_16978);
				}
				iVar0 = (iVar0 * iParam2);
				break;
			
			case 3:
				iVar0 = Global_262145.f_16967;
				if (func_596(iParam0, iParam1, 0))
				{
					iVar0 = (iVar0 + Global_262145.f_16972);
				}
				if (func_596(iParam0, iParam1, 1))
				{
					iVar0 = (iVar0 + Global_262145.f_16977);
				}
				iVar0 = (iVar0 * iParam2);
				break;
			
			case 4:
				iVar0 = Global_262145.f_16966;
				if (func_596(iParam0, iParam1, 0))
				{
					iVar0 = (iVar0 + Global_262145.f_16971);
				}
				if (func_596(iParam0, iParam1, 1))
				{
					iVar0 = (iVar0 + Global_262145.f_16976);
				}
				iVar0 = (iVar0 * iParam2);
				break;
			
			case 0:
				iVar0 = Global_262145.f_16964;
				if (func_596(iParam0, iParam1, 0))
				{
					iVar0 = (iVar0 + Global_262145.f_16969);
				}
				if (func_596(iParam0, iParam1, 1))
				{
					iVar0 = (iVar0 + Global_262145.f_16974);
				}
				iVar0 = (iVar0 * iParam2);
				break;
			
			case 2:
				iVar0 = Global_262145.f_16965;
				if (func_596(iParam0, iParam1, 0))
				{
					iVar0 = (iVar0 + Global_262145.f_16970);
				}
				if (func_596(iParam0, iParam1, 1))
				{
					iVar0 = (iVar0 + Global_262145.f_16975);
				}
				iVar0 = (iVar0 * iParam2);
				break;
			
			case 5:
				iVar0 = Global_262145.f_21070;
				if (func_596(iParam0, iParam1, 0))
				{
					iVar0 = (iVar0 + Global_262145.f_21072);
				}
				if (func_596(iParam0, iParam1, 1))
				{
					iVar0 = (iVar0 + Global_262145.f_21071);
				}
				iVar0 = (iVar0 * iParam2);
				break;
			}
	}
	return iVar0;
}

int func_596(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	if (func_598(iParam0, iParam1))
	{
		iVar0 = func_597(iParam0, iParam1);
		return unk_0xCE990E643CD9D0E5(Global_1590682[iParam0 /*883*/].f_274.f_183[iVar0 /*12*/].f_5, iParam2);
	}
	return 0;
}

int func_597(int iParam0, int iParam1)
{
	int iVar0;
	
	if (func_588(iParam1) && iParam0 != func_65())
	{
		iVar0 = 0;
		while (iVar0 <= 5)
		{
			if (Global_1590682[iParam0 /*883*/].f_274.f_183[iVar0 /*12*/] == iParam1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return -1;
}

int func_598(int iParam0, int iParam1)
{
	int iVar0;
	
	if (func_588(iParam1) && iParam0 != func_65())
	{
		iVar0 = 0;
		while (iVar0 <= 5)
		{
			if (Global_1590682[iParam0 /*883*/].f_274.f_183[iVar0 /*12*/] == iParam1)
			{
				return 1;
			}
			iVar0++;
		}
	}
	return 0;
}

int func_599(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam0 == func_65())
	{
		return 0;
	}
	if (func_588(iParam1))
	{
		iVar0 = 0;
		while (iVar0 <= 5)
		{
			if (Global_1590682[iParam0 /*883*/].f_274.f_183[iVar0 /*12*/] == iParam1)
			{
				return Global_1590682[iParam0 /*883*/].f_274.f_183[iVar0 /*12*/].f_1;
			}
			iVar0++;
		}
	}
	return 0;
}

void func_600(int iParam0, var uParam1, int iParam2, var uParam3)
{
	struct<2> Var0;
	float fVar1;
	float fVar2;
	float fVar3;
	int iVar4;
	float fVar5;
	int iVar6;
	float fVar7;
	float fVar8;
	var uVar9;
	int iVar10;
	int iVar11;
	int iVar12;
	int iVar13;
	struct<2> Var14;
	float fVar15;
	float fVar16;
	float fVar17;
	int iVar18;
	float fVar19;
	int iVar20;
	float fVar21;
	int iVar22;
	int iVar23;
	
	if (iParam0 == 192)
	{
	}
	else if (iParam0 == 190)
	{
		if (uParam1->f_10 > 0)
		{
			if (func_463())
			{
				Var0 = { func_491() };
				if (uParam1->f_10 == uParam1->f_11)
				{
					*uParam3 = (uParam1->f_15 + uParam1->f_8);
				}
				else
				{
					fVar1 = to_float(uParam1->f_10);
					fVar2 = to_float(uParam1->f_11);
					fVar3 = ((fVar1 / fVar2) * 100f);
					iVar4 = (uParam1->f_15 + uParam1->f_8);
					fVar5 = ((IntToFloat(iVar4) / 100f) * fVar3);
					*uParam3 = ceil(fVar5);
				}
				iVar6 = func_595(unk_0x460153A63B9477BC(), Var0, *uParam3);
				if (Var0.f_1 == 1)
				{
					fVar7 = (to_float(iVar6) * Global_262145.f_18603);
					iVar6 = round(fVar7);
				}
				else
				{
					fVar8 = (to_float(iVar6) * Global_262145.f_18602);
					iVar6 = round(fVar8);
				}
				*iParam2 = (*iParam2 + iVar6);
				iVar10 = func_565(&uVar9);
				iVar11 = round(Global_262145.f_18593);
				if (iVar10 > iVar11)
				{
					iVar10 = iVar11;
				}
				iVar12 = ceil((IntToFloat(iVar10) * Global_262145.f_18592));
				iVar13 = ((*iParam2 / 100) * iVar12);
				*iParam2 = (*iParam2 + iVar13);
				if (uParam1->f_6)
				{
					*iParam2 = (*iParam2 + *uParam1);
				}
				if (uParam1->f_6)
				{
					if (uParam1->f_12 == 11)
					{
						if (*uParam1 > 0)
						{
							*iParam2 = (*iParam2 + *uParam1);
						}
					}
					else if (uParam1->f_12 == 9)
					{
						if (*uParam1 > 0)
						{
							*iParam2 = (*iParam2 + *uParam1);
						}
					}
				}
				if (iVar10 > 0)
				{
					func_548(86);
				}
				Global_2540384.f_5188.f_382 = *iParam2;
			}
			else if (func_253(0))
			{
				Var14 = { func_601(func_495()) };
				if (uParam1->f_10 == uParam1->f_11)
				{
					*uParam3 = (uParam1->f_15 + uParam1->f_8);
				}
				else
				{
					fVar15 = to_float(uParam1->f_10);
					fVar16 = to_float(uParam1->f_11);
					fVar17 = ((fVar15 / fVar16) * 100f);
					iVar18 = (uParam1->f_15 + uParam1->f_8);
					fVar19 = ((IntToFloat(iVar18) / 100f) * fVar17);
					*uParam3 = ceil(fVar19);
				}
				iVar20 = func_595(func_495(), Var14, *uParam3);
				if (Var14.f_1 == 1)
				{
					iVar20 = ceil((IntToFloat(iVar20) * Global_262145.f_18603));
				}
				else if (Var14.f_1 == 0)
				{
					iVar20 = ceil((IntToFloat(iVar20) * Global_262145.f_18602));
				}
				*iParam2 = (*iParam2 + iVar20);
				fVar21 = Global_262145.f_18642;
				iVar22 = ceil((IntToFloat(*iParam2) * fVar21));
				*iParam2 = iVar22;
				iVar23 = Global_262145.f_18643;
				if (*iParam2 > iVar23)
				{
					*iParam2 = iVar23;
				}
				if (uParam1->f_6)
				{
					if (uParam1->f_12 == 11)
					{
						if (*uParam1 > 0)
						{
							*iParam2 = (*iParam2 + *uParam1);
						}
					}
				}
			}
		}
	}
}

struct<2> func_601(int iParam0)
{
	return Global_1630317[iParam0 /*595*/].f_11.f_193;
}

void func_602(int iParam0, bool bParam1, var uParam2, int iParam3, var uParam4)
{
	int iVar0;
	int iVar1;
	var uVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	
	if (iParam0 == 167)
	{
		if (func_123(unk_0x460153A63B9477BC()))
		{
			if (bParam1)
			{
				func_617();
			}
			func_616();
		}
	}
	else if (iParam0 == 168)
	{
		if (bParam1)
		{
			if (func_123(unk_0x460153A63B9477BC()))
			{
				if (uParam2->f_5)
				{
					*iParam3 = (*iParam3 + func_608(Global_1630317[unk_0x460153A63B9477BC() /*595*/].f_11.f_182));
				}
				else
				{
					*uParam4 = uParam2->f_7;
					if (uParam2->f_8 > 0)
					{
						*uParam4 = (*uParam4 + uParam2->f_8);
					}
					iVar0 = func_607(*uParam4);
					iVar1 = (iVar0 * *uParam4);
					*iParam3 = (*iParam3 + iVar1);
					iVar3 = func_565(&uVar2);
					iVar4 = Global_262145.f_16149;
					if (iVar3 > iVar4)
					{
						iVar3 = iVar4;
					}
					iVar5 = ceil((IntToFloat(iVar3) * Global_262145.f_15358));
					iVar6 = ((*iParam3 / 100) * iVar5);
					*iParam3 = (*iParam3 + iVar6);
					if (uParam2->f_6)
					{
						*iParam3 = (*iParam3 + *uParam2);
					}
					if (iVar3 > 0 && uParam2->f_9 != 4)
					{
						func_548(44);
					}
				}
				func_605(*iParam3);
				func_604();
				Global_2540384.f_5188.f_382 = *iParam3;
				iVar7 = 0;
				while (iVar7 < unk_0xEFA28384DDD283E1())
				{
					iVar8 = iVar7;
					if (unk_0xBD09DF93F957A0CF(iVar8))
					{
						iVar9 = unk_0x9019589211A13B02(iVar8);
						if (func_564(iVar9))
						{
							func_556(iVar9, 1, -1292453789);
						}
					}
					iVar7++;
				}
			}
		}
		if (func_123(unk_0x460153A63B9477BC()))
		{
			func_603();
		}
	}
}

void func_603()
{
	int iVar0;
	
	iVar0 = Global_2590607[func_19()];
	iVar0++;
	func_459(3668, iVar0, -1, 1);
}

void func_604()
{
	int iVar0;
	
	iVar0 = Global_2590613[func_19()];
	iVar0++;
	func_459(3667, iVar0, -1, 1);
}

void func_605(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = Global_2590616[func_19()];
	iVar0 = (iVar0 + iParam0);
	func_459(3669, iVar0, -1, 1);
	if (func_592(7666, -1, -1) < 24)
	{
		iVar1 = 1;
		while (iVar1 <= 24)
		{
			if (iVar0 >= func_606(iVar1))
			{
				iVar2 = iVar1;
			}
			iVar1++;
		}
		func_590(7666, iVar2, -1, 1);
	}
}

int func_606(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return Global_262145.f_16282;
			break;
		
		case 2:
			return Global_262145.f_16283;
			break;
		
		case 3:
			return Global_262145.f_16284;
			break;
		
		case 4:
			return Global_262145.f_16285;
			break;
		
		case 5:
			return Global_262145.f_16286;
			break;
		
		case 6:
			return Global_262145.f_16287;
			break;
		
		case 7:
			return Global_262145.f_16288;
			break;
		
		case 8:
			return Global_262145.f_16289;
			break;
		
		case 9:
			return Global_262145.f_16290;
			break;
		
		case 10:
			return Global_262145.f_16291;
			break;
		
		case 11:
			return Global_262145.f_16292;
			break;
		
		case 12:
			return Global_262145.f_16293;
			break;
		
		case 13:
			return Global_262145.f_16294;
			break;
		
		case 14:
			return Global_262145.f_16295;
			break;
		
		case 15:
			return Global_262145.f_16296;
			break;
		
		case 16:
			return Global_262145.f_16297;
			break;
		
		case 17:
			return Global_262145.f_16298;
			break;
		
		case 18:
			return Global_262145.f_16299;
			break;
		
		case 19:
			return Global_262145.f_16300;
			break;
		
		case 20:
			return Global_262145.f_16301;
			break;
		
		case 21:
			return Global_262145.f_16302;
			break;
		
		case 22:
			return Global_262145.f_16303;
			break;
		
		case 23:
			return Global_262145.f_16304;
			break;
		
		case 24:
			return Global_262145.f_16305;
			break;
	}
	return 0;
}

var func_607(int iParam0)
{
	if (iParam0 >= Global_262145.f_15336)
	{
		return Global_262145.f_15357;
	}
	else if (iParam0 >= Global_262145.f_15335)
	{
		return Global_262145.f_15356;
	}
	else if (iParam0 >= Global_262145.f_15334)
	{
		return Global_262145.f_15355;
	}
	else if (iParam0 >= Global_262145.f_15333)
	{
		return Global_262145.f_15354;
	}
	else if (iParam0 >= Global_262145.f_15332)
	{
		return Global_262145.f_15353;
	}
	else if (iParam0 >= Global_262145.f_15331)
	{
		return Global_262145.f_15352;
	}
	else if (iParam0 >= Global_262145.f_15330)
	{
		return Global_262145.f_15351;
	}
	else if (iParam0 >= Global_262145.f_15329)
	{
		return Global_262145.f_15350;
	}
	else if (iParam0 >= Global_262145.f_15328)
	{
		return Global_262145.f_15349;
	}
	else if (iParam0 >= Global_262145.f_15327)
	{
		return Global_262145.f_15348;
	}
	else if (iParam0 >= Global_262145.f_15326)
	{
		return Global_262145.f_15347;
	}
	else if (iParam0 >= Global_262145.f_15325)
	{
		return Global_262145.f_15346;
	}
	else if (iParam0 >= Global_262145.f_15324)
	{
		return Global_262145.f_15345;
	}
	else if (iParam0 >= Global_262145.f_15323)
	{
		return Global_262145.f_15344;
	}
	else if (iParam0 >= Global_262145.f_15322)
	{
		return Global_262145.f_15343;
	}
	else if (iParam0 >= Global_262145.f_15321)
	{
		return Global_262145.f_15342;
	}
	else if (iParam0 >= Global_262145.f_15320)
	{
		return Global_262145.f_15341;
	}
	else if (iParam0 >= Global_262145.f_15319)
	{
		return Global_262145.f_15340;
	}
	else if (iParam0 >= Global_262145.f_15318)
	{
		return Global_262145.f_15339;
	}
	else if (iParam0 >= Global_262145.f_15317)
	{
		return Global_262145.f_15338;
	}
	return Global_262145.f_15337;
}

int func_608(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (func_615(iParam0))
	{
		iVar2 = 1;
		while (iVar2 <= 6)
		{
			iVar3 = iVar2;
			if (func_614(iParam0, iVar3))
			{
				iVar0 = (iVar0 + func_613(iVar3));
				iVar1++;
			}
			iVar2++;
		}
		if (iVar1 < func_609(iParam0))
		{
			iVar2 = 0;
			while (iVar2 <= (func_609(iParam0) - iVar1))
			{
				iVar0 = (iVar0 + func_613(unk_0x344C570D6F8700DF(1, 6)));
				iVar2++;
			}
		}
	}
	return iVar0;
}

int func_609(int iParam0)
{
	int iVar0;
	
	if (func_612(iParam0))
	{
		iVar0 = func_610(func_611(iParam0));
		return func_462(iVar0, -1, 0);
	}
	return 0;
}

int func_610(int iParam0)
{
	if (iParam0 == 0)
	{
		return 3647;
	}
	else if (iParam0 == 1)
	{
		return 3648;
	}
	else if (iParam0 == 2)
	{
		return 3649;
	}
	else if (iParam0 == 3)
	{
		return 3650;
	}
	else if (iParam0 == 4)
	{
		return 3651;
	}
	return 3647;
}

int func_611(int iParam0)
{
	int iVar0;
	
	if (func_612(iParam0))
	{
		iVar0 = 0;
		while (iVar0 <= 4)
		{
			if (Global_1590682[unk_0x460153A63B9477BC() /*883*/].f_274.f_106[iVar0 /*3*/] == iParam0)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return -1;
}

int func_612(int iParam0)
{
	if (iParam0 < 1 || iParam0 > 22)
	{
		return 0;
	}
	return 1;
}

int func_613(int iParam0)
{
	if (iParam0 == 1)
	{
		return Global_262145.f_15536;
	}
	else if (iParam0 == 2)
	{
		return Global_262145.f_15534;
	}
	else if (iParam0 == 3)
	{
		return Global_262145.f_15538;
	}
	else if (iParam0 == 4)
	{
		return Global_262145.f_15532;
	}
	else if (iParam0 == 5)
	{
		return Global_262145.f_15530;
	}
	else if (iParam0 == 6)
	{
		return Global_262145.f_15540;
	}
	return 0;
}

int func_614(int iParam0, int iParam1)
{
	int iVar0;
	
	if (func_612(iParam0))
	{
		iVar0 = 0;
		while (iVar0 < 6)
		{
			if (Global_1677993[iVar0] == iParam1 && Global_1678000[iVar0] == iParam0)
			{
				return 1;
			}
			iVar0++;
		}
	}
	return 0;
}

int func_615(int iParam0)
{
	int iVar0;
	
	if (func_612(iParam0))
	{
		iVar0 = 0;
		while (iVar0 <= 4)
		{
			if (Global_1590682[unk_0x460153A63B9477BC() /*883*/].f_274.f_106[iVar0 /*3*/] == iParam0)
			{
				return 1;
			}
			iVar0++;
		}
	}
	return 0;
}

void func_616()
{
	int iVar0;
	
	iVar0 = Global_2590604[func_19()];
	iVar0++;
	Global_2590604[func_19()] = iVar0;
	func_459(3666, iVar0, -1, 1);
}

void func_617()
{
	int iVar0;
	int iVar1;
	
	iVar0 = Global_2590601[func_19()];
	iVar1 = Global_2590610[func_19()];
	iVar0++;
	iVar1++;
	Global_2590601[func_19()] = iVar0;
	Global_2590610[func_19()] = iVar1;
	Global_1590682[unk_0x460153A63B9477BC() /*883*/].f_274.f_128 = iVar1;
	func_459(3664, iVar0, -1, 1);
	func_459(3665, iVar1, -1, 1);
}

void func_618()
{
	if (func_476())
	{
		Global_2452679.f_3074.f_134 = 0;
		Global_1630317[unk_0x460153A63B9477BC() /*595*/].f_11.f_422 = Global_2452679.f_3074.f_134;
	}
}

void func_619()
{
	if (func_476())
	{
		if (Global_2452679.f_3074.f_134 < 10)
		{
			Global_2452679.f_3074.f_134++;
			Global_1630317[unk_0x460153A63B9477BC() /*595*/].f_11.f_422 = Global_2452679.f_3074.f_134;
		}
	}
}

void func_620()
{
	if (func_476())
	{
		if (Global_2452679.f_3074.f_134 > 0)
		{
			Global_2452679.f_3074.f_134 = (Global_2452679.f_3074.f_134 - 1);
			Global_1630317[unk_0x460153A63B9477BC() /*595*/].f_11.f_422 = Global_2452679.f_3074.f_134;
		}
	}
}

int func_621(int iParam0)
{
	return Global_1630317[iParam0 /*595*/].f_11.f_28;
}

int func_622(int iParam0)
{
	switch (iParam0)
	{
		case 167:
		case 168:
		case 178:
		case 188:
			return 1;
		
		case 225:
		case 226:
		case 229:
		case 230:
		case 233:
		case 237:
		case 158:
		case 256:
		case 258:
			if (func_493(1) && !func_253(1))
			{
				if (func_623(func_495()))
				{
					return 1;
				}
			}
			break;
	}
	return 0;
}

bool func_623(int iParam0)
{
	if (iParam0 == -1)
	{
		return 0;
	}
	return unk_0xCE990E643CD9D0E5(Global_1590682[iParam0 /*883*/].f_274.f_26, 26);
}

int func_624(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		return Global_262145.f_18289;
	}
	switch (iParam0)
	{
		case 142:
			return round((IntToFloat(Global_262145.f_12514) * Global_262145.f_12519));
		
		case 157:
			return 0;
		
		case 159:
			return round((IntToFloat(Global_262145.f_12464) * Global_262145.f_12469));
		
		case 151:
			return 0;
		
		case 148:
			return round((IntToFloat(Global_262145.f_12491) * Global_262145.f_12495));
		
		case 164:
			return round((IntToFloat(Global_262145.f_12504) * Global_262145.f_12508));
		
		case 152:
			return round((IntToFloat(Global_262145.f_12526) * Global_262145.f_12531));
		
		case 153:
			return round((IntToFloat(Global_262145.f_12688) * Global_262145.f_12689));
		
		case 154:
			return round((IntToFloat(Global_262145.f_12694) * Global_262145.f_12695));
		
		case 155:
			return round((IntToFloat(Global_262145.f_12692) * Global_262145.f_12693));
		
		case 160:
			return round((IntToFloat(Global_262145.f_12686) * Global_262145.f_12687));
		
		case 162:
			return round((IntToFloat(Global_262145.f_12690) * Global_262145.f_12691));
		
		case 163:
			return round((IntToFloat(Global_262145.f_12684) * Global_262145.f_12685));
		
		case 170:
			return 0;
		
		case 171:
			return Global_262145.f_15059;
		
		case 172:
			return Global_262145.f_15075;
		
		case 173:
			return Global_262145.f_15018;
		
		case 166:
			return 0;
		
		case 179:
			return Global_262145.f_18297;
		
		case 180:
			return Global_262145.f_18172;
		
		case 182:
			return 0;
		
		case 183:
			return Global_262145.f_18180;
		
		case 185:
			return Global_262145.f_18189;
		
		case 186:
			return 0;
		
		case 189:
			return Global_262145.f_18385;
		
		case 190:
			return 0;
		
		case 191:
			return 0;
		
		case 192:
			return 0;
		
		case 193:
			return Global_262145.f_18402;
		
		case 194:
			return 0;
		
		case 195:
			return 0;
		
		case 197:
			return Global_262145.f_18249;
		
		case 198:
			return 0;
		
		case 199:
			return Global_262145.f_18433;
		
		case 200:
			return 0;
		
		case 201:
			return Global_262145.f_18311;
		
		case 205:
			return Global_262145.f_18420;
		
		case 207:
			return 0;
		
		case 208:
			return Global_262145.f_18278;
		
		case 209:
			return 0;
		
		case 210:
			return Global_262145.f_18415;
		
		case 211:
			return Global_262145.f_18379;
		
		case 214:
			return Global_262145.f_18973;
		
		case 215:
			return Global_262145.f_18983;
		
		case 216:
			return Global_262145.f_18993;
		
		case 217:
			return Global_262145.f_19002;
		
		case 218:
			return Global_262145.f_19011;
		
		case 219:
			return Global_262145.f_19027;
		
		case 241:
			return Global_262145.f_24103;
		
		case 242:
			return Global_262145.f_24099;
		
		case 248:
			return Global_262145.f_24102;
		
		case 244:
			return Global_262145.f_24100;
		
		case 239:
			return Global_262145.f_24104;
		
		case 240:
			return Global_262145.f_24105;
		
		case 243:
			return Global_262145.f_26372;
		
		default:
	}
	return 0;
}

int func_625(int iParam0, bool bParam1, bool bParam2)
{
	if (bParam2)
	{
		return Global_262145.f_18290;
	}
	switch (iParam0)
	{
		case 142:
			return round((IntToFloat(Global_262145.f_12515) * Global_262145.f_12520));
		
		case 157:
			return 0;
		
		case 159:
			return round((IntToFloat(Global_262145.f_12465) * Global_262145.f_12470));
		
		case 151:
			return 0;
		
		case 148:
			return round((IntToFloat(Global_262145.f_12492) * Global_262145.f_12496));
		
		case 164:
			return round((IntToFloat(Global_262145.f_12505) * Global_262145.f_12509));
		
		case 152:
			return round((IntToFloat(Global_262145.f_12527) * Global_262145.f_12532));
		
		case 153:
			return round((IntToFloat(Global_262145.f_12564) * Global_262145.f_12567));
		
		case 154:
			return round((IntToFloat(Global_262145.f_12610) * Global_262145.f_12613));
		
		case 155:
			return round((IntToFloat(Global_262145.f_12600) * Global_262145.f_12603));
		
		case 160:
			return round((IntToFloat(Global_262145.f_12555) * Global_262145.f_12558));
		
		case 162:
			return round((IntToFloat(Global_262145.f_12575) * Global_262145.f_12580));
		
		case 163:
			return round((IntToFloat(Global_262145.f_12540) * Global_262145.f_12543));
		
		case 170:
			return Global_262145.f_15001;
		
		case 171:
			return Global_262145.f_15060;
		
		case 172:
			return Global_262145.f_15076;
		
		case 173:
			return Global_262145.f_15019;
		
		case 166:
			return 0;
		
		case 167:
			return Global_262145.f_17098;
		
		case 168:
			return Global_262145.f_17097;
		
		case 179:
			return Global_262145.f_18298;
		
		case 180:
			return Global_262145.f_18173;
		
		case 182:
			return 0;
		
		case 183:
			return Global_262145.f_18181;
		
		case 185:
			return Global_262145.f_18190;
		
		case 186:
			return 0;
		
		case 189:
			return Global_262145.f_18386;
		
		case 190:
			return 0;
		
		case 191:
			return 0;
		
		case 192:
			return 0;
		
		case 193:
			return Global_262145.f_18403;
		
		case 194:
			return 0;
		
		case 195:
			return 0;
		
		case 197:
			return Global_262145.f_18250;
		
		case 198:
			return 0;
		
		case 199:
			return Global_262145.f_18434;
		
		case 200:
			return 0;
		
		case 201:
			return Global_262145.f_18312;
		
		case 205:
			return Global_262145.f_18421;
		
		case 207:
			return 0;
		
		case 208:
			return Global_262145.f_18279;
		
		case 209:
			return 0;
		
		case 210:
			return Global_262145.f_18416;
		
		case 211:
			return Global_262145.f_18380;
		
		case 214:
			return Global_262145.f_18974;
		
		case 215:
			return Global_262145.f_18984;
		
		case 216:
			return Global_262145.f_18994;
		
		case 217:
			return Global_262145.f_19003;
		
		case 218:
			return Global_262145.f_19012;
		
		case 219:
			return Global_262145.f_19028;
		
		case 178:
			if (func_476())
			{
				return Global_262145.f_18851;
			}
			else if (bParam1)
			{
				return Global_262145.f_18852;
			}
			break;
		
		case 188:
			if (func_476())
			{
				return Global_262145.f_18935;
			}
			else if (bParam1)
			{
				return Global_262145.f_18936;
			}
			break;
		
		case 225:
			if (func_476() && !func_463())
			{
				if (func_623(unk_0x460153A63B9477BC()))
				{
					return Global_262145.f_21058;
				}
				else
				{
					return Global_262145.f_21059;
				}
			}
			else if (func_463())
			{
				return Global_262145.f_21060;
			}
			break;
		
		case 226:
			if (func_476() && !func_463())
			{
				if (func_623(unk_0x460153A63B9477BC()))
				{
					return Global_262145.f_21038;
				}
				else
				{
					return Global_262145.f_21039;
				}
			}
			else if (func_463())
			{
				return Global_262145.f_21040;
			}
			break;
		
		case 227:
			if (func_476() && !func_463())
			{
				if (func_623(unk_0x460153A63B9477BC()))
				{
					return Global_262145.f_21050;
				}
				else
				{
					return Global_262145.f_21051;
				}
			}
			else if (func_463())
			{
				return Global_262145.f_21052;
			}
			break;
		
		case 229:
			if (func_476() && !func_463())
			{
				if (func_623(unk_0x460153A63B9477BC()))
				{
					return Global_262145.f_22217;
				}
				else
				{
					return Global_262145.f_22218;
				}
			}
			else if (func_463())
			{
				return Global_262145.f_22219;
			}
			break;
		
		case 230:
			if (func_476() && !func_463())
			{
				if (func_623(unk_0x460153A63B9477BC()))
				{
					return Global_262145.f_22313;
				}
				else
				{
					return Global_262145.f_22314;
				}
			}
			else if (func_463())
			{
				return Global_262145.f_22315;
			}
			break;
		
		case 233:
			if (func_476() && !func_463())
			{
				if (func_623(unk_0x460153A63B9477BC()))
				{
					return Global_262145.f_22789;
				}
				else
				{
					return Global_262145.f_22790;
				}
			}
			else if (func_463())
			{
				return Global_262145.f_22788;
			}
			break;
		
		case 241:
			return Global_262145.f_24110;
		
		case 242:
			return Global_262145.f_24106;
		
		case 244:
			return Global_262145.f_24107;
		
		case 248:
			return Global_262145.f_24109;
		
		case 239:
			return Global_262145.f_24111;
		
		case 240:
			return Global_262145.f_24112;
		
		case 237:
			if (func_476() && !func_463())
			{
				if (func_623(unk_0x460153A63B9477BC()))
				{
					return Global_262145.f_23952;
				}
				else
				{
					return Global_262145.f_23953;
				}
			}
			else if (func_463())
			{
				return Global_262145.f_23954;
			}
			break;
		
		case 238:
			if (func_476() && !func_463())
			{
				if (func_623(unk_0x460153A63B9477BC()))
				{
					return Global_262145.f_24063;
				}
				else
				{
					return Global_262145.f_24064;
				}
			}
			else if (func_463())
			{
				return Global_262145.f_24065;
			}
			break;
		
		case 249:
			if (func_476() && !func_463())
			{
				if (func_623(unk_0x460153A63B9477BC()))
				{
					return Global_262145.f_24079;
				}
				else
				{
					return Global_262145.f_24080;
				}
			}
			else if (func_463())
			{
				return Global_262145.f_24081;
			}
			break;
		
		case 243:
			if (func_476() && !func_463())
			{
				if (func_623(unk_0x460153A63B9477BC()))
				{
					return Global_262145.f_26375;
				}
				else
				{
					return Global_262145.f_26376;
				}
			}
			else if (func_463())
			{
				return Global_262145.f_26375;
			}
			break;
		
		case 158:
			if (func_476() && !func_463())
			{
				if (func_623(unk_0x460153A63B9477BC()))
				{
					return 1500;
				}
				else
				{
					return 1000;
				}
			}
			else if (func_463())
			{
				return 1500;
			}
			break;
	}
	return 0;
}

void func_626(int iParam0, var uParam1, var uParam2)
{
	int iVar0;
	
	if (iParam0 == 157)
	{
		*uParam1 = 1f;
		*uParam2 = 1f;
		return;
	}
	if (func_627(iParam0))
	{
		if (!func_476())
		{
			*uParam1 = 1f;
			*uParam2 = Global_262145.f_12408;
		}
		else
		{
			*uParam1 = 1f;
			*uParam2 = 1f;
		}
		return;
	}
	if (func_190(unk_0x460153A63B9477BC(), 1))
	{
		if (func_322(iParam0))
		{
			*uParam1 = (Global_262145.f_18149 / 100f);
			*uParam2 = (Global_262145.f_18149 / 100f);
		}
		else if (iParam0 == 242)
		{
			*uParam1 = Global_262145.f_24113;
			*uParam2 = Global_262145.f_24113;
		}
		else if (iParam0 == 244)
		{
			*uParam1 = Global_262145.f_24114;
			*uParam2 = Global_262145.f_24114;
		}
		else if (iParam0 == 248)
		{
			*uParam1 = Global_262145.f_24116;
			*uParam2 = Global_262145.f_24116;
		}
		else if (iParam0 == 241)
		{
			*uParam1 = Global_262145.f_24117;
			*uParam2 = Global_262145.f_24117;
		}
		else if (iParam0 == 239)
		{
			*uParam1 = Global_262145.f_24118;
			*uParam2 = Global_262145.f_24118;
		}
		else if (iParam0 == 240)
		{
			*uParam1 = Global_262145.f_24119;
			*uParam2 = Global_262145.f_24119;
		}
		else
		{
			*uParam1 = Global_262145.f_12405;
			*uParam2 = Global_262145.f_12404;
		}
	}
	else if (func_322(iParam0))
	{
		*uParam1 = (Global_262145.f_18150 / 100f);
		*uParam2 = (Global_262145.f_18150 / 100f);
	}
	else if (iParam0 == 242)
	{
		*uParam1 = Global_262145.f_24120;
		*uParam2 = Global_262145.f_24120;
	}
	else if (iParam0 == 244)
	{
		*uParam1 = Global_262145.f_24121;
		*uParam2 = Global_262145.f_24121;
	}
	else if (iParam0 == 248)
	{
		*uParam1 = Global_262145.f_24123;
		*uParam2 = Global_262145.f_24123;
	}
	else if (iParam0 == 241)
	{
		*uParam1 = Global_262145.f_24124;
		*uParam2 = Global_262145.f_24124;
	}
	else if (iParam0 == 239)
	{
		*uParam1 = Global_262145.f_24125;
		*uParam2 = Global_262145.f_24125;
	}
	else if (iParam0 == 240)
	{
		*uParam1 = Global_262145.f_24126;
		*uParam2 = Global_262145.f_24126;
	}
	else
	{
		*uParam1 = Global_262145.f_12407;
		*uParam2 = Global_262145.f_12406;
	}
	iVar0 = func_256();
	if (iVar0 != func_65())
	{
		if (func_76(unk_0x460153A63B9477BC(), iVar0, 1))
		{
			*uParam1 = 1f;
			*uParam2 = 1f;
		}
	}
}

int func_627(int iParam0)
{
	switch (iParam0)
	{
		case 160:
		case 162:
		case 153:
		case 154:
		case 155:
		case 163:
		case 171:
		case 172:
			return 1;
		
		default:
	}
	return 0;
}

int func_628()
{
	return (Local_82.f_115 * Global_262145.f_15034);
}

int func_629()
{
	return (Local_82.f_115 * Global_262145.f_15033);
}

void func_630(bool bParam0, int iParam1, int iParam2, bool bParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, bool bParam9)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!unk_0x25DDB354A40FFCDB())
	{
		return;
	}
	if (bParam9)
	{
		iVar0 = func_182(unk_0x460153A63B9477BC());
		Global_1676407.f_4 = func_747();
		Global_1676407.f_5 = func_746();
		if (func_129(unk_0x460153A63B9477BC()) || func_130(unk_0x460153A63B9477BC()))
		{
			Global_1676407.f_6 = 1;
		}
		else
		{
			Global_1676407.f_6 = 0;
		}
		Global_1676407.f_1 = func_740(bParam9);
		Global_1676407.f_8 = unk_0x5A002C4821A13338();
		Global_1676407.f_9 = func_739(bParam0);
		Global_1676407.f_10 = iParam1;
		Global_1676407.f_17 = Global_1676407.f_2;
		Global_1676407.f_18 = Global_1676407.f_2;
		Global_1676407.f_19 = func_738();
		Global_1676407.f_21 = (Global_1676407.f_8 - Global_1676407.f_7);
		if (func_190(unk_0x460153A63B9477BC(), 1))
		{
			Global_1676407.f_23 = func_739(func_253(1));
		}
		Global_1676407.f_24 = func_737(unk_0x460153A63B9477BC());
		Global_1676407.f_28 = func_736(unk_0x460153A63B9477BC());
		if (Global_1676407.f_24 > 2)
		{
			Global_1676407.f_24 = 2;
		}
		func_734(iVar0);
	}
	else
	{
		iVar0 = func_105(unk_0x460153A63B9477BC());
	}
	if (func_322(iVar0))
	{
		Global_1676146.f_2 = func_747();
		Global_1676146.f_3 = func_746();
		Global_1676146.f_50 = iParam4;
		Global_1676146.f_51 = iParam5;
		Global_1676146.f_10 = unk_0x5A002C4821A13338();
		Global_1676146.f_20 = (Global_1676146.f_10 - Global_1676146.f_9);
		Global_1676146.f_12 = iParam1;
		Global_1676146.f_19 = func_730(iVar0, bParam0, func_733(bParam3));
		if (bParam0)
		{
			Global_1676146.f_11 = 1;
		}
		else
		{
			Global_1676146.f_11 = 0;
		}
		if ((func_124(unk_0x460153A63B9477BC()) || func_142(unk_0x460153A63B9477BC())) || func_150(unk_0x460153A63B9477BC()))
		{
			Global_1676146.f_8 = 1;
		}
		else
		{
			Global_1676146.f_8 = 0;
		}
		if (iParam2 != 0)
		{
			Global_1676146.f_43 = 0;
			Global_1676146.f_45 = func_729(func_495(), iParam2);
			Global_1676146.f_47 = iParam7;
			Global_1676146.f_46 = iParam6;
			Global_1676146.f_52 = func_728(func_495(), iParam2);
		}
		func_726(iVar0);
	}
	else if (func_327(iVar0))
	{
		Global_1676200.f_2 = func_747();
		Global_1676200.f_3 = func_746();
		Global_1676200.f_10 = unk_0x5A002C4821A13338();
		Global_1676200.f_19 = (Global_1676200.f_10 - Global_1676200.f_9);
		Global_1676200.f_12 = iParam1;
		if (bParam0)
		{
			Global_1676200.f_11 = 1;
		}
		else
		{
			Global_1676200.f_11 = 0;
		}
		if ((func_124(unk_0x460153A63B9477BC()) || func_142(unk_0x460153A63B9477BC())) || func_150(unk_0x460153A63B9477BC()))
		{
			Global_1676200.f_8 = 1;
		}
		else
		{
			Global_1676200.f_8 = 0;
		}
		func_724(iVar0);
	}
	else if (func_418(iVar0))
	{
		Global_1676263.f_2 = func_747();
		Global_1676263.f_3 = func_746();
		Global_1676263.f_9 = unk_0x5A002C4821A13338();
		Global_1676263.f_18 = (Global_1676263.f_9 - Global_1676263.f_8);
		Global_1676263.f_11 = iParam1;
		Global_1676263.f_7 = func_738();
		Global_1676263.f_42 = func_722(func_19(), 5);
		iVar1 = unk_0x460153A63B9477BC();
		iVar2 = func_475(iVar1);
		Global_1676263.f_28 = iVar2;
		Global_1676263.f_29 = func_739((func_721(iVar1) || func_720(iVar1)));
		Global_1676263.f_30 = func_739(func_719(iVar1));
		Global_1676263.f_32 = func_739(func_718(iVar1));
		Global_1676263.f_33 = func_739(func_717(iVar1));
		Global_1676263.f_34 = func_739(func_716(iVar1));
		Global_1676263.f_35 = func_739(func_715(0, iVar1) == 1);
		Global_1676263.f_36 = func_739(func_714(iVar1));
		Global_1676263.f_37 = func_739(func_713(iVar1));
		Global_1676263.f_38 = func_739(func_712(iVar1));
		Global_1676263.f_39 = func_739(func_596(iVar1, iVar2, 0));
		Global_1676263.f_40 = func_739(func_596(iVar1, iVar2, 2));
		Global_1676263.f_41 = func_739(func_596(iVar1, iVar2, 1));
		if (func_711(iVar1))
		{
			Global_1676263.f_31 = 2;
		}
		else if (func_710(iVar1))
		{
			Global_1676263.f_31 = 1;
		}
		if (bParam0)
		{
			Global_1676263.f_10 = 1;
		}
		else
		{
			Global_1676263.f_10 = 0;
		}
		if ((func_124(unk_0x460153A63B9477BC()) || func_142(unk_0x460153A63B9477BC())) || func_150(unk_0x460153A63B9477BC()))
		{
			Global_1676263.f_6 = 1;
		}
		else
		{
			Global_1676263.f_6 = 0;
		}
		Global_1676263.f_21 = -2;
		Global_1676263.f_22 = -2;
		func_708(iVar0);
	}
	else if (func_416(iVar0))
	{
		Global_1676307.f_2 = func_747();
		Global_1676307.f_3 = func_746();
		if ((func_124(unk_0x460153A63B9477BC()) || func_142(unk_0x460153A63B9477BC())) || func_150(unk_0x460153A63B9477BC()))
		{
			Global_1676307.f_6 = 1;
		}
		else
		{
			Global_1676307.f_6 = 0;
		}
		Global_1676307.f_9 = unk_0x5A002C4821A13338();
		Global_1676307.f_10 = func_739(bParam0);
		Global_1676307.f_11 = iParam1;
		Global_1676307.f_17 = func_707(func_256());
		Global_1676307.f_18 = (Global_1676307.f_9 - Global_1676307.f_8);
		Global_1676307.f_20 = iParam8;
		Global_1676307.f_21 = -2;
		Global_1676307.f_22 = -2;
		Global_1676307.f_27 = func_706();
		Global_1676307.f_29 = func_462(6108, -1, 0);
		Global_1676307.f_30 = func_462(6104, -1, 0);
		Global_1676307.f_31 = func_462(6105, -1, 0);
		Global_1676307.f_32 = func_462(6107, -1, 0);
		Global_1676307.f_33 = func_462(6106, -1, 0);
		Global_1676307.f_34 = func_462(6109, -1, 0);
		Global_1676307.f_36 = func_739(func_253(1));
		Global_1676307.f_37 = func_704();
		func_690();
		func_688(iVar0);
	}
	else if (func_414(iVar0))
	{
		Global_1676361.f_2 = func_747();
		Global_1676361.f_3 = func_746();
		if ((func_124(unk_0x460153A63B9477BC()) || func_142(unk_0x460153A63B9477BC())) || func_150(unk_0x460153A63B9477BC()))
		{
			Global_1676361.f_6 = 1;
		}
		else
		{
			Global_1676361.f_6 = 0;
		}
		Global_1676361.f_9 = unk_0x5A002C4821A13338();
		Global_1676361.f_10 = func_739(bParam0);
		Global_1676361.f_11 = iParam1;
		Global_1676361.f_18 = (Global_1676361.f_9 - Global_1676361.f_8);
		Global_1676361.f_20 = iParam8;
		Global_1676361.f_23 = Global_786547;
		Global_1676361.f_36 = Global_786547.f_1;
		Global_1676361.f_24 = func_462(6158, -1, 0);
		Global_1676361.f_25 = func_462(6163, -1, 0);
		Global_1676361.f_26 = func_462(6164, -1, 0);
		Global_1676361.f_27 = func_739((((func_687() || func_686()) || func_685()) || func_684(unk_0x460153A63B9477BC())));
		Global_1676361.f_28 = func_462(6165, -1, 0);
		Global_1676361.f_29 = func_739(func_683());
		Global_1676361.f_35 = -1;
		Global_1676361.f_38 = -1;
		Global_1676361.f_39 = Global_1676361.f_4;
		Global_1676361.f_40 = Global_1676361.f_5;
		Global_1676361.f_41 = func_747();
		Global_1676361.f_42 = func_739(func_253(1));
		Global_1676361.f_44 = Global_1676361.f_18;
		func_681(iVar0);
	}
	else if (func_451(iVar0))
	{
		if (Global_1676497.f_2 == -1)
		{
			Global_1676497.f_2 = func_747();
		}
		if (Global_1676497.f_3 == -1)
		{
			Global_1676497.f_3 = func_746();
		}
		if ((func_124(unk_0x460153A63B9477BC()) || func_142(unk_0x460153A63B9477BC())) || func_150(unk_0x460153A63B9477BC()))
		{
			Global_1676497.f_6 = 1;
		}
		else
		{
			Global_1676497.f_6 = 0;
		}
		Global_1676497.f_1 = func_740(0);
		Global_1676497.f_7 = func_738();
		Global_1676497.f_9 = unk_0x5A002C4821A13338();
		Global_1676497.f_10 = func_739(bParam0);
		Global_1676497.f_11 = iParam1;
		if (func_495() != -1)
		{
			Global_1676497.f_17 = func_680(func_495());
		}
		Global_1676497.f_18 = (Global_1676497.f_9 - Global_1676497.f_8);
		Global_1676497.f_19 = Global_2540384.f_6650;
		Global_1676497.f_28 = func_736(unk_0x460153A63B9477BC());
		Global_1676497.f_29 = func_739(func_679(unk_0x460153A63B9477BC()));
		Global_1676497.f_30 = func_739(func_678(unk_0x460153A63B9477BC()));
		Global_1676497.f_31 = func_677(unk_0x460153A63B9477BC());
		if (func_190(unk_0x460153A63B9477BC(), 1))
		{
			Global_1676497.f_33 = func_739(func_253(1));
		}
		if (Global_1676497.f_34 > 2)
		{
			Global_1676497.f_34 = 2;
		}
		func_675(iVar0);
	}
	else if (func_455(iVar0))
	{
		Global_1676443.f_2 = func_747();
		Global_1676443.f_3 = func_746();
		if ((func_124(unk_0x460153A63B9477BC()) || func_142(unk_0x460153A63B9477BC())) || func_150(unk_0x460153A63B9477BC()))
		{
			Global_1676443.f_6 = 1;
		}
		else
		{
			Global_1676443.f_6 = 0;
		}
		Global_1676443.f_1 = func_740(0);
		Global_1676443.f_9 = unk_0x5A002C4821A13338();
		Global_1676443.f_10 = func_739(bParam0);
		Global_1676443.f_11 = iParam1;
		Global_1676443.f_18 = (Global_1676443.f_9 - Global_1676443.f_8);
		Global_1676443.f_28 = func_736(unk_0x460153A63B9477BC());
		if (Global_1676443.f_28)
		{
			Global_1676443.f_29 = func_674(unk_0x460153A63B9477BC());
		}
		else
		{
			Global_1676443.f_29 = 0;
		}
		Global_1676443.f_30 = func_658(unk_0x460153A63B9477BC(), 4, -1);
		Global_1676443.f_31 = func_677(unk_0x460153A63B9477BC());
		Global_1676443.f_32 = func_739(func_657(unk_0x460153A63B9477BC()));
		Global_1676443.f_33 = func_739(func_656(unk_0x460153A63B9477BC()));
		Global_1676443.f_34 = func_739(func_655(unk_0x460153A63B9477BC()));
		Global_1676443.f_35 = func_739(func_654(unk_0x460153A63B9477BC()));
		Global_1676443.f_36 = func_653(unk_0x460153A63B9477BC());
		Global_1676443.f_37 = func_652(unk_0x460153A63B9477BC());
		Global_1676443.f_39 = func_651(unk_0x460153A63B9477BC());
		if (func_190(unk_0x460153A63B9477BC(), 1))
		{
			Global_1676443.f_41 = func_739(func_253(1));
		}
		if (Global_1676443.f_42 > 2)
		{
			Global_1676443.f_42 = 2;
		}
		func_649(iVar0);
	}
	else if (func_450(iVar0))
	{
		Global_1676581.f_2 = func_747();
		Global_1676581.f_3 = func_746();
		Global_1676581.f_4 = func_648(func_495());
		Global_1676581.f_5 = func_647(func_495());
		if ((func_124(unk_0x460153A63B9477BC()) || func_142(unk_0x460153A63B9477BC())) || func_150(unk_0x460153A63B9477BC()))
		{
			Global_1676581.f_6 = 1;
		}
		else
		{
			Global_1676581.f_6 = 0;
		}
		Global_1676581.f_7 = func_738();
		Global_1676581.f_9 = unk_0x5A002C4821A13338();
		Global_1676581.f_10 = func_739(bParam0);
		Global_1676581.f_11 = iParam1;
		if (func_256() != -1)
		{
			Global_1676581.f_17 = func_680(func_256());
		}
		Global_1676581.f_18 = (Global_1676581.f_9 - Global_1676581.f_8);
		Global_1676581.f_21 = 1;
		Global_1676581.f_22 = 1;
		Global_1676581.f_25 = func_646(unk_0x460153A63B9477BC());
		Global_1676581.f_27 = func_739(func_645(unk_0x460153A63B9477BC()));
		Global_1676581.f_28 = func_641(21, -1);
		Global_1676581.f_29 = func_739(func_640(unk_0x460153A63B9477BC()));
		func_638(iVar0);
	}
	else if (func_407(iVar0))
	{
		if (func_495() != -1)
		{
			Global_1676656.f_6 = func_648(func_495());
			Global_1676656.f_7 = func_647(func_495());
		}
		if (func_190(unk_0x460153A63B9477BC(), 1))
		{
			Global_1676656.f_8 = func_739(func_253(1));
		}
		Global_1676656.f_10 = func_738();
		Global_1676656.f_11 = 1;
		Global_1676656.f_13 = (unk_0x5A002C4821A13338() - Global_1703843);
		Global_1676656.f_14 = iParam1;
		Global_1676656.f_19 = 1;
		Global_1676656.f_20 = 1;
		func_636(iVar0);
	}
	else if (func_406(iVar0))
	{
		Global_1676743.f_2 = func_747();
		if (func_495() != -1)
		{
			Global_1676743.f_6 = func_648(func_495());
			Global_1676743.f_7 = func_647(func_495());
		}
		Global_1676743.f_8 = func_739(func_253(1));
		if (func_495() != -1)
		{
			Global_1676743.f_9 = func_680(func_495());
		}
		Global_1676743.f_10 = func_738();
		Global_1676743.f_11 = 1;
		Global_1676743.f_14 = iParam1;
		Global_1676743.f_19 = 1;
		Global_1676743.f_20 = 1;
		func_634(iVar0);
	}
	else if (func_633(iVar0))
	{
		Global_1676855.f_2 = func_747();
		Global_1676855.f_9 = 1;
		Global_1676855.f_10 = bParam0;
		Global_1676855.f_11 = iParam1;
		func_631(iVar0);
	}
	else
	{
		Global_1676128.f_6 = unk_0x5A002C4821A13338();
		if (bParam0)
		{
			Global_1676128.f_7 = 1;
		}
		else
		{
			Global_1676128.f_7 = 0;
		}
		Global_1676128.f_8 = iParam1;
		if (Global_1676128.f_4 == 0)
		{
			if ((func_124(unk_0x460153A63B9477BC()) || func_142(unk_0x460153A63B9477BC())) || func_150(unk_0x460153A63B9477BC()))
			{
				Global_1676128.f_4 = 1;
			}
		}
	}
}

void func_631(int iParam0)
{
	unk_0xD6CA58B3B53A0F22(&Global_1676855);
	func_632();
}

void func_632()
{
	struct<21> Var0;
	
	Global_1676855 = { Var0 };
}

int func_633(int iParam0)
{
	switch (iParam0)
	{
		case 258:
			return 1;
		
		default:
	}
	return 0;
}

void func_634(int iParam0)
{
	if (iParam0 == 0)
	{
	}
	unk_0xDFCDB14317A9B361(&Global_1676743);
	func_635();
}

void func_635()
{
	struct<35> Var0;
	
	Global_1676743 = { Var0 };
	Global_1676743.f_23 = 0;
	Global_1676743.f_22 = 0;
	Global_1676743.f_21 = 0;
}

void func_636(int iParam0)
{
	if (iParam0 == 0)
	{
	}
	unk_0x40673E504A482DE7(&Global_1676656);
	func_637();
}

void func_637()
{
	struct<36> Var0;
	
	Global_1676656 = { Var0 };
	Global_1676656.f_23 = 0;
	Global_1676656.f_22 = 0;
	Global_1676656.f_21 = 0;
}

void func_638(int iParam0)
{
	if (iParam0 == 0)
	{
	}
	unk_0x6C395296347AF0FB(&Global_1676581);
	func_639();
}

void func_639()
{
	struct<31> Var0;
	
	Global_1676581 = { Var0 };
}

int func_640(int iParam0)
{
	if (iParam0 != func_65())
	{
		return unk_0xCE990E643CD9D0E5(Global_1590682[iParam0 /*883*/].f_274.f_369.f_2, 6);
	}
	return 0;
}

int func_641(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = iParam1;
	if (iParam1 == -1)
	{
		iVar0 = func_19();
	}
	if (iParam0 == 7 && !Global_262145.f_16992)
	{
		return 0;
	}
	if (iParam0 >= 1000)
	{
		iVar1 = func_644(iParam0);
		if (iVar1 == 0 && func_462(5394, iParam1, 0) != 0)
		{
			return 1234;
		}
		if (func_643(-1) && iVar1 == 2)
		{
			return 1236;
		}
		if (func_736(unk_0x460153A63B9477BC()) && iVar1 == 1)
		{
			return 1237;
		}
		if (func_642(-1) && iVar1 == 3)
		{
			return 1238;
		}
	}
	if (iParam0 == 0)
	{
		return Global_1388203[iVar0];
	}
	else if (iParam0 == 99)
	{
		return Global_2590566[iVar0];
	}
	else if (iParam0 >= 1)
	{
		if (iParam0 >= 25)
		{
			return 0;
		}
		return Global_2590417[(iParam0 - 1) /*3*/][iVar0];
	}
	return 0;
}

bool func_642(int iParam0)
{
	return func_462(9513, iParam0, 0) != 0;
}

bool func_643(int iParam0)
{
	if (!Global_262145.f_23676)
	{
		return 0;
	}
	return func_462(7208, iParam0, 0) != 0;
}

int func_644(int iParam0)
{
	iParam0 = (iParam0 - 1000);
	if (iParam0 >= 0 && iParam0 <= 4)
	{
		return iParam0;
	}
	return -1;
}

int func_645(int iParam0)
{
	if (iParam0 != func_65())
	{
		return Global_1590682[iParam0 /*883*/].f_274.f_369 != 0;
	}
	return 0;
}

int func_646(int iParam0)
{
	if (func_105(iParam0) == 243)
	{
		return func_454(iParam0);
	}
	return -1;
}

int func_647(int iParam0)
{
	if (iParam0 == func_65())
	{
		return -1;
	}
	return Global_1630317[iParam0 /*595*/].f_11.f_8[1];
}

int func_648(int iParam0)
{
	if (iParam0 == func_65())
	{
		return -1;
	}
	return Global_1630317[iParam0 /*595*/].f_11.f_8[0];
}

void func_649(int iParam0)
{
	unk_0xCE168129160262A1(&Global_1676443);
	func_650();
}

void func_650()
{
	struct<54> Var0;
	
	Var0 = -1;
	Var0.f_1 = -1;
	Var0.f_2 = -1;
	Var0.f_3 = -1;
	Var0.f_4 = -1;
	Var0.f_5 = -1;
	Var0.f_6 = -1;
	Var0.f_7 = -1;
	Var0.f_8 = -1;
	Var0.f_9 = -1;
	Var0.f_10 = -1;
	Var0.f_11 = -1;
	Var0.f_12 = -1;
	Var0.f_13 = -1;
	Var0.f_14 = -1;
	Var0.f_15 = -1;
	Var0.f_16 = -1;
	Var0.f_17 = -1;
	Var0.f_18 = -1;
	Var0.f_19 = -1;
	Var0.f_20 = -1;
	Var0.f_21 = -1;
	Var0.f_22 = -1;
	Var0.f_23 = -1;
	Var0.f_24 = -1;
	Var0.f_25 = -1;
	Var0.f_26 = -1;
	Var0.f_27 = -1;
	Var0.f_29 = -1;
	Var0.f_32 = -1;
	Var0.f_33 = -1;
	Var0.f_34 = -1;
	Var0.f_35 = -1;
	Var0.f_40 = -1;
	Var0.f_41 = -1;
	Var0.f_42 = -1;
	Var0.f_43 = -1;
	Var0.f_44 = -1;
	Var0.f_45 = -1;
	Var0.f_46 = -1;
	Var0.f_47 = -1;
	Var0.f_48 = -1;
	Var0.f_49 = -1;
	Var0.f_50 = -1;
	Var0.f_51 = -1;
	Var0.f_52 = -1;
	Global_1676443 = { Var0 };
}

int func_651(int iParam0)
{
	if (iParam0 != func_65())
	{
		return unk_0xCE990E643CD9D0E5(Global_1590682[iParam0 /*883*/].f_274.f_334, 12);
	}
	return 0;
}

int func_652(int iParam0)
{
	if (iParam0 != func_65())
	{
		return unk_0xCE990E643CD9D0E5(Global_1590682[iParam0 /*883*/].f_274.f_334, 10);
	}
	return 0;
}

int func_653(int iParam0)
{
	if (iParam0 != func_65())
	{
		return unk_0xCE990E643CD9D0E5(Global_1590682[iParam0 /*883*/].f_274.f_334, 11);
	}
	return 0;
}

bool func_654(int iParam0)
{
	if (iParam0 == func_65())
	{
		return 0;
	}
	return unk_0xCE990E643CD9D0E5(Global_1590682[iParam0 /*883*/].f_274.f_281.f_4, 4);
}

bool func_655(int iParam0)
{
	if (iParam0 == func_65())
	{
		return 0;
	}
	return unk_0xCE990E643CD9D0E5(Global_1590682[iParam0 /*883*/].f_274.f_281.f_4, 3);
}

bool func_656(int iParam0)
{
	if (iParam0 == func_65())
	{
		return 0;
	}
	return unk_0xCE990E643CD9D0E5(Global_1590682[iParam0 /*883*/].f_274.f_281.f_4, 2);
}

bool func_657(int iParam0)
{
	if (iParam0 == func_65())
	{
		return 0;
	}
	return unk_0xCE990E643CD9D0E5(Global_1590682[iParam0 /*883*/].f_274.f_281.f_4, 1);
}

int func_658(int iParam0, int iParam1, int iParam2)
{
	if (iParam0 == func_65() || !func_673(iParam1))
	{
		return 0;
	}
	switch (iParam1)
	{
		case 0:
			return func_668(iParam0, iParam2);
		
		case 1:
			return func_666(iParam0, iParam2);
		
		case 3:
			return func_665(iParam0);
		
		case 2:
			return func_660(iParam0, iParam2);
		
		case 4:
			return func_659(iParam0);
		
		default:
	}
	return 0;
}

bool func_659(int iParam0)
{
	if (iParam0 == func_65())
	{
		return 0;
	}
	return unk_0xCE990E643CD9D0E5(Global_1590682[iParam0 /*883*/].f_274.f_281.f_4, 6);
}

int func_660(int iParam0, int iParam1)
{
	switch (iParam1)
	{
		case 10:
			return func_664(iParam0);
		
		case 11:
			return func_663(iParam0);
		
		case 12:
			return func_662(iParam0);
		
		case 13:
			return func_661(iParam0);
		
		default:
	}
	return 0;
}

bool func_661(int iParam0)
{
	if (iParam0 == func_65())
	{
		return 0;
	}
	return unk_0xCE990E643CD9D0E5(Global_1590682[iParam0 /*883*/].f_274.f_281.f_4, 15);
}

bool func_662(int iParam0)
{
	if (iParam0 == func_65())
	{
		return 0;
	}
	return unk_0xCE990E643CD9D0E5(Global_1590682[iParam0 /*883*/].f_274.f_281.f_4, 14);
}

bool func_663(int iParam0)
{
	if (iParam0 == func_65())
	{
		return 0;
	}
	return unk_0xCE990E643CD9D0E5(Global_1590682[iParam0 /*883*/].f_274.f_281.f_4, 13);
}

bool func_664(int iParam0)
{
	if (iParam0 == func_65())
	{
		return 0;
	}
	return unk_0xCE990E643CD9D0E5(Global_1590682[iParam0 /*883*/].f_274.f_281.f_4, 12);
}

bool func_665(int iParam0)
{
	if (iParam0 == func_65())
	{
		return 0;
	}
	return unk_0xCE990E643CD9D0E5(Global_1590682[iParam0 /*883*/].f_274.f_281.f_4, 5);
}

int func_666(int iParam0, int iParam1)
{
	switch (iParam1)
	{
		case 5:
			return func_667(iParam0);
		
		case 6:
			return func_657(iParam0);
		
		case 7:
			return func_656(iParam0);
		
		case 8:
			return func_655(iParam0);
		
		case 9:
			return func_654(iParam0);
		
		default:
	}
	return 0;
}

bool func_667(int iParam0)
{
	if (iParam0 == func_65())
	{
		return 0;
	}
	return unk_0xCE990E643CD9D0E5(Global_1590682[iParam0 /*883*/].f_274.f_281.f_4, 0);
}

int func_668(int iParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
			return func_672(iParam0);
		
		case 1:
			return func_671(iParam0);
		
		case 2:
			return func_670(iParam0);
		
		case 3:
			return func_669(iParam0);
		
		case 4:
			return func_677(iParam0);
		
		default:
	}
	return 0;
}

bool func_669(int iParam0)
{
	if (iParam0 == func_65())
	{
		return 0;
	}
	return unk_0xCE990E643CD9D0E5(Global_1590682[iParam0 /*883*/].f_274.f_281.f_4, 10);
}

bool func_670(int iParam0)
{
	if (iParam0 == func_65())
	{
		return 0;
	}
	return unk_0xCE990E643CD9D0E5(Global_1590682[iParam0 /*883*/].f_274.f_281.f_4, 9);
}

bool func_671(int iParam0)
{
	if (iParam0 == func_65())
	{
		return 0;
	}
	return unk_0xCE990E643CD9D0E5(Global_1590682[iParam0 /*883*/].f_274.f_281.f_4, 8);
}

bool func_672(int iParam0)
{
	if (iParam0 == func_65())
	{
		return 0;
	}
	return unk_0xCE990E643CD9D0E5(Global_1590682[iParam0 /*883*/].f_274.f_281.f_4, 7);
}

bool func_673(int iParam0)
{
	return (iParam0 != -1 && iParam0 != 6);
}

int func_674(int iParam0)
{
	int iVar0;
	
	if (iParam0 == func_65())
	{
		return 0;
	}
	iVar0 = 1;
	if (func_658(iParam0, 2, 13))
	{
		iVar0 = 5;
	}
	else if (func_658(iParam0, 2, 12))
	{
		iVar0 = 4;
	}
	else if (func_658(iParam0, 2, 11))
	{
		iVar0 = 3;
	}
	else if (func_658(iParam0, 2, 10))
	{
		iVar0 = 2;
	}
	return iVar0;
}

void func_675(int iParam0)
{
	unk_0x8E1F14C024665293(&Global_1676497);
	func_676();
}

void func_676()
{
	struct<39> Var0;
	
	Var0 = -1;
	Var0.f_1 = -1;
	Var0.f_2 = -1;
	Var0.f_3 = -1;
	Var0.f_4 = -1;
	Var0.f_5 = -1;
	Var0.f_6 = -1;
	Var0.f_7 = -1;
	Var0.f_8 = -1;
	Var0.f_9 = -1;
	Var0.f_10 = -1;
	Var0.f_11 = -1;
	Var0.f_12 = -1;
	Var0.f_13 = -1;
	Var0.f_14 = -1;
	Var0.f_15 = -1;
	Var0.f_16 = -1;
	Var0.f_17 = -1;
	Var0.f_18 = -1;
	Var0.f_19 = -1;
	Var0.f_20 = -1;
	Var0.f_21 = -1;
	Var0.f_22 = -1;
	Var0.f_23 = -1;
	Var0.f_24 = -1;
	Var0.f_25 = -1;
	Var0.f_26 = -1;
	Var0.f_27 = -1;
	Var0.f_29 = -1;
	Var0.f_30 = -1;
	Var0.f_32 = -1;
	Var0.f_33 = -1;
	Var0.f_34 = -1;
	Var0.f_35 = -1;
	Var0.f_36 = -1;
	Var0.f_37 = -1;
	Var0.f_38 = -1;
	Global_1676497 = { Var0 };
}

int func_677(int iParam0)
{
	if (iParam0 != -1)
	{
		return unk_0xCE990E643CD9D0E5(Global_1590682[iParam0 /*883*/].f_274.f_351, 31);
	}
	return 0;
}

bool func_678(int iParam0)
{
	if (iParam0 == func_65())
	{
		return 0;
	}
	return unk_0xCE990E643CD9D0E5(Global_1590682[iParam0 /*883*/].f_274.f_322.f_1, 0);
}

bool func_679(int iParam0)
{
	if (iParam0 == func_65())
	{
		return 0;
	}
	return unk_0xCE990E643CD9D0E5(Global_1590682[iParam0 /*883*/].f_274.f_322.f_1, 19);
}

var func_680(int iParam0)
{
	return Global_1590682[iParam0 /*883*/].f_211.f_6;
}

void func_681(int iParam0)
{
	unk_0xB96EF693735C00E9(&Global_1676361);
	func_682();
}

void func_682()
{
	struct<46> Var0;
	
	Var0.f_6 = -1;
	Var0.f_7 = -1;
	Var0.f_8 = -1;
	Var0.f_9 = -1;
	Var0.f_10 = -1;
	Var0.f_11 = -1;
	Var0.f_12 = -1;
	Var0.f_13 = -1;
	Var0.f_14 = -1;
	Var0.f_15 = -1;
	Var0.f_16 = -1;
	Var0.f_17 = -1;
	Var0.f_18 = -1;
	Var0.f_19 = -1;
	Var0.f_20 = -1;
	Var0.f_21 = -1;
	Var0.f_22 = -1;
	Var0.f_23 = -1;
	Var0.f_24 = -1;
	Var0.f_25 = -1;
	Var0.f_26 = -1;
	Var0.f_27 = -1;
	Var0.f_28 = -1;
	Var0.f_29 = -1;
	Var0.f_30 = -1;
	Var0.f_31 = -1;
	Var0.f_32 = -1;
	Var0.f_33 = -1;
	Var0.f_34 = -1;
	Var0.f_35 = -1;
	Var0.f_36 = -1;
	Var0.f_37 = -1;
	Var0.f_38 = -1;
	Var0.f_39 = -1;
	Var0.f_40 = -1;
	Var0.f_41 = -1;
	Var0.f_42 = -1;
	Var0.f_43 = -1;
	Var0.f_44 = -1;
	Var0.f_45 = -1;
	Global_1676361 = { Var0 };
	Global_1676361.f_16 = 0;
}

bool func_683()
{
	return func_462(6157, -1, 0) != 0;
}

int func_684(int iParam0)
{
	if (iParam0 != func_65())
	{
		return Global_1590682[iParam0 /*883*/].f_274.f_271 != 0;
	}
	return 0;
}

bool func_685()
{
	return func_462(6165, -1, 0) == 3;
}

bool func_686()
{
	return func_462(6165, -1, 0) == 2;
}

bool func_687()
{
	return func_462(6165, -1, 0) == 1;
}

void func_688(int iParam0)
{
	unk_0xCE08E0D4B174A777(&Global_1676307);
	func_689();
}

void func_689()
{
	struct<54> Var0;
	
	Var0.f_6 = -1;
	Var0.f_7 = -1;
	Var0.f_8 = -1;
	Var0.f_9 = -1;
	Var0.f_10 = -1;
	Var0.f_11 = -1;
	Var0.f_12 = -1;
	Var0.f_13 = -1;
	Var0.f_14 = -1;
	Var0.f_15 = -1;
	Var0.f_16 = -1;
	Var0.f_17 = -1;
	Var0.f_18 = -1;
	Var0.f_19 = -1;
	Var0.f_20 = -1;
	Var0.f_21 = -1;
	Var0.f_22 = -1;
	Var0.f_23 = -1;
	Var0.f_24 = -1;
	Var0.f_25 = -1;
	Var0.f_26 = -1;
	Var0.f_27 = -1;
	Var0.f_28 = -1;
	Var0.f_29 = -1;
	Var0.f_30 = -1;
	Var0.f_31 = -1;
	Var0.f_32 = -1;
	Var0.f_33 = -1;
	Var0.f_34 = -1;
	Var0.f_35 = -1;
	Var0.f_36 = -1;
	Var0.f_37 = -1;
	Var0.f_38 = -1;
	Var0.f_39 = -1;
	Var0.f_40 = -1;
	Var0.f_41 = -1;
	Var0.f_42 = -1;
	Var0.f_43 = -1;
	Var0.f_44 = -1;
	Var0.f_45 = -1;
	Var0.f_46 = -1;
	Var0.f_47 = -1;
	Var0.f_48 = -1;
	Var0.f_49 = -1;
	Var0.f_50 = -1;
	Var0.f_51 = -1;
	Var0.f_52 = -1;
	Var0.f_53 = -1;
	Global_1676307 = { Var0 };
	Global_1676307.f_23 = 0;
	Global_1676307.f_24 = 0;
	Global_1676307.f_16 = 0;
}

void func_690()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	iVar0 = 0;
	iVar3 = -1;
	iVar0 = 0;
	while (iVar0 < 10)
	{
		iVar2 = (iVar0 + func_701(12));
		func_700(iVar2, &iVar1, 1);
		if (iVar1 >= 0)
		{
			if (Global_1323678[iVar1 /*141*/].f_66 != 0 && func_692(Global_1323678[iVar1 /*141*/].f_66, 1))
			{
				if (Global_2540384.f_955 != iVar1)
				{
					if (func_691(Global_1323678[iVar1 /*141*/].f_66))
					{
						if (Global_1323678[iVar1 /*141*/].f_66 != 0)
						{
							iVar3 = Global_1323678[iVar1 /*141*/].f_66;
						}
						switch (iVar0)
						{
							case 0:
								Global_1676307.f_38 = iVar3;
								break;
							
							case 1:
								Global_1676307.f_39 = iVar3;
								break;
							
							case 2:
								Global_1676307.f_40 = iVar3;
								break;
							
							case 3:
								Global_1676307.f_41 = iVar3;
								break;
							
							case 4:
								Global_1676307.f_42 = iVar3;
								break;
							
							case 5:
								Global_1676307.f_43 = iVar3;
								break;
							
							case 6:
								Global_1676307.f_44 = iVar3;
								break;
							
							case 7:
								Global_1676307.f_45 = iVar3;
								break;
							
							case 8:
								Global_1676307.f_46 = iVar3;
								break;
							
							case 9:
								Global_1676307.f_47 = iVar3;
								break;
							}
						}
					}
				}
		}
		iVar0++;
	}
}

int func_691(int iParam0)
{
	switch (iParam0)
	{
		case joaat("buzzard"):
		case joaat("savage"):
		case joaat("valkyrie"):
		case joaat("hydra"):
		case joaat("cargobob"):
		case joaat("cargobob2"):
		case joaat("havok"):
		case joaat("hunter"):
		case joaat("volatus"):
		case joaat("supervolito"):
		case joaat("supervolito2"):
		case joaat("swift"):
		case joaat("swift2"):
		case joaat("frogger"):
		case joaat("maverick"):
		case joaat("annihilator"):
		case joaat("mogul"):
		case joaat("rogue"):
		case joaat("starling"):
		case joaat("seabreeze"):
		case joaat("microlight"):
		case joaat("tula"):
		case joaat("lazer"):
		case joaat("pyro"):
		case joaat("molotok"):
		case joaat("nokota"):
		case joaat("howard"):
		case joaat("bombushka"):
		case joaat("alphaz1"):
		case joaat("nimbus"):
		case joaat("luxor2"):
		case joaat("velum2"):
		case joaat("dodo"):
		case joaat("miljet"):
		case joaat("besra"):
		case joaat("vestra"):
		case joaat("duster"):
		case joaat("shamal"):
		case joaat("cuban800"):
		case joaat("luxor"):
		case joaat("stunt"):
		case joaat("mammatus"):
		case joaat("titan"):
		case joaat("velum"):
		case joaat("akula"):
		case joaat("volatol"):
		case joaat("strikeforce"):
		case joaat("seasparrow"):
		case joaat("alkonost"):
		case joaat("annihilator2"):
			return 1;
		
		default:
	}
	return 0;
}

int func_692(int iParam0, bool bParam1)
{
	int iVar0;
	struct<2> Var1;
	
	if (iParam0 == 0)
	{
		return 0;
	}
	if (!unk_0x653AAFF7E08B7D39(iParam0))
	{
		return 0;
	}
	if (((((iParam0 == joaat("dominator2") && !unk_0x25DDB354A40FFCDB()) || (iParam0 == joaat("buffalo3") && !unk_0x25DDB354A40FFCDB())) || (iParam0 == joaat("gauntlet2") && !unk_0x25DDB354A40FFCDB())) || iParam0 == joaat("blimp2")) || (iParam0 == joaat("stalion2") && !unk_0x25DDB354A40FFCDB()))
	{
		if (!func_699())
		{
			return 0;
		}
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < unk_0x81BDFC133086F533())
		{
			if (unk_0xA2F4B5E51CE10D19(iVar0, &Var1))
			{
				if (iParam0 == Var1.f_1)
				{
					if (unk_0x14AC70FD8926649E(Var1))
					{
						return 0;
					}
				}
			}
			iVar0++;
		}
	}
	if (iParam0 == joaat("blimp"))
	{
		if ((((!func_698() && !func_697()) && !func_696()) && !func_695()) && !func_699())
		{
			return 0;
		}
	}
	if ((iParam0 == joaat("hotknife") || iParam0 == joaat("carbonrs")) || iParam0 == joaat("khamelion"))
	{
		if ((unk_0xC6C08C02733D02C8() || unk_0xF8EDFF98A9C94C74()) || unk_0xDCA0815D900F27F8())
		{
		}
		else if (!func_696())
		{
			return 0;
		}
	}
	if (bParam1)
	{
		if (!func_694(iParam0))
		{
			return 0;
		}
	}
	if (!func_693(iParam0))
	{
		return 0;
	}
	return 1;
}

int func_693(int iParam0)
{
	int iVar0;
	var uVar1;
	char cVar2[64];
	
	if (!func_492())
	{
		return 1;
	}
	unk_0x69DA2BD216554CB9(&iVar0, &uVar1);
	if (iVar0 == 4)
	{
		return 1;
	}
	switch (iParam0)
	{
		case joaat("dune4"):
			StringCopy(&cVar2, "VE_DUNE4_t0_v3", 64);
			break;
		
		case joaat("voltic2"):
			StringCopy(&cVar2, "VE_VOLTIC2_t0_v3", 64);
			break;
		
		case joaat("ruiner2"):
			StringCopy(&cVar2, "VE_RUINER2_t0_v3", 64);
			break;
		
		case joaat("phantom2"):
			StringCopy(&cVar2, "VE_PHANTOM2_t0_v3", 64);
			break;
		
		case joaat("technical2"):
			StringCopy(&cVar2, "VE_TECHNICAL2_t0_v3", 64);
			break;
		
		case joaat("boxville5"):
			StringCopy(&cVar2, "VE_BOXVILLE5_t0_v3", 64);
			break;
		
		case joaat("wastelander"):
			StringCopy(&cVar2, "VE_WASTELANDER_t0_v3", 64);
			break;
		
		case joaat("blazer5"):
			StringCopy(&cVar2, "VE_BLAZER5_t0_v3", 64);
			break;
		
		default:
			return 1;
			break;
	}
	if (!unk_0x18A09013B66E9BB4(&cVar2))
	{
		return 0;
	}
	return 1;
}

int func_694(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (Global_2515213)
	{
		return 1;
	}
	iVar0 = 1;
	iVar1 = unk_0x5A002C4821A13338();
	if (iParam0 == joaat("btype3"))
	{
		if ((!Global_262145.f_6600 && !Global_262145.f_12930) && iVar1 < Global_262145.f_12931)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("faction3"))
	{
		if (!Global_262145.f_14230 && iVar1 < Global_262145.f_14242)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("virgo3") || iParam0 == joaat("virgo2"))
	{
		if (!Global_262145.f_14226 && iVar1 < Global_262145.f_14238)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("sabregt2"))
	{
		if (!Global_262145.f_14227 && iVar1 < Global_262145.f_14239)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tornado5"))
	{
		if (!Global_262145.f_14228 && iVar1 < Global_262145.f_14240)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("minivan2"))
	{
		if (!Global_262145.f_14229 && iVar1 < Global_262145.f_14241)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("slamvan3"))
	{
		if (!Global_262145.f_14231 && iVar1 < Global_262145.f_14243)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("prototipo"))
	{
		if (!Global_262145.f_14232 && iVar1 < Global_262145.f_14235)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("seven70"))
	{
		if (!Global_262145.f_14233 && iVar1 < Global_262145.f_14236)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("pfister811"))
	{
		if (!Global_262145.f_14234 && iVar1 < Global_262145.f_14237)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("bf400"))
	{
		if (!Global_262145.f_16861 && iVar1 < Global_262145.f_16826)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("brioso"))
	{
		if (!Global_262145.f_16856 && iVar1 < Global_262145.f_16821)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("cliffhanger"))
	{
		if (!Global_262145.f_16860 && iVar1 < Global_262145.f_16825)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("contender"))
	{
		if (!Global_262145.f_16859 && iVar1 < Global_262145.f_16824)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("le7b"))
	{
		if (!Global_262145.f_16853 && iVar1 < Global_262145.f_16818)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("omnis"))
	{
		if (!Global_262145.f_16854 && iVar1 < Global_262145.f_16819)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("trophytruck"))
	{
		if (!Global_262145.f_16857 && iVar1 < Global_262145.f_16822)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("trophytruck2"))
	{
		if (!Global_262145.f_16858 && iVar1 < Global_262145.f_16823)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tropos"))
	{
		if (!Global_262145.f_16855 && iVar1 < Global_262145.f_16820)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("gargoyle"))
	{
		if (!Global_262145.f_16863 && iVar1 < Global_262145.f_16828)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("rallytruck"))
	{
		if (!Global_262145.f_16864 && iVar1 < Global_262145.f_16829)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tampa2"))
	{
		if (!Global_262145.f_16852 && iVar1 < Global_262145.f_16817)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tyrus"))
	{
		if (!Global_262145.f_16851 && iVar1 < Global_262145.f_16816)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("sheava"))
	{
		if (!Global_262145.f_16850 && iVar1 < Global_262145.f_16815)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("lynx"))
	{
		if (!Global_262145.f_16862 && iVar1 < Global_262145.f_16827)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("stalion2"))
	{
		if (!Global_262145.f_16865 && iVar1 < Global_262145.f_16830)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("gauntlet2"))
	{
		if (!Global_262145.f_16866 && iVar1 < Global_262145.f_16831)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("dominator2"))
	{
		if (!Global_262145.f_16867 && iVar1 < Global_262145.f_16832)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("buffalo3"))
	{
		if (!Global_262145.f_16868 && iVar1 < Global_262145.f_16833)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("defiler"))
	{
		if (!Global_262145.f_17015 && iVar1 < Global_262145.f_17037)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("nightblade"))
	{
		if (!Global_262145.f_17016 && iVar1 < Global_262145.f_17038)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("zombiea"))
	{
		if (!Global_262145.f_17017 && iVar1 < Global_262145.f_17039)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("esskey"))
	{
		if (!Global_262145.f_17018 && iVar1 < Global_262145.f_17040)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("avarus"))
	{
		if (!Global_262145.f_17019 && iVar1 < Global_262145.f_17041)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("zombieb"))
	{
		if (!Global_262145.f_17020 && iVar1 < Global_262145.f_17042)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("hakuchou2"))
	{
		if (!Global_262145.f_17022 && iVar1 < Global_262145.f_17043)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("vortex"))
	{
		if (!Global_262145.f_17023 && iVar1 < Global_262145.f_17044)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("shotaro"))
	{
		if (!Global_262145.f_17024 && iVar1 < Global_262145.f_17045)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("chimera"))
	{
		if (!Global_262145.f_17025 && iVar1 < Global_262145.f_17046)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("raptor"))
	{
		if (!Global_262145.f_17026 && iVar1 < Global_262145.f_17047)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("daemon2"))
	{
		if (!Global_262145.f_17027 && iVar1 < Global_262145.f_17048)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("blazer4"))
	{
		if (!Global_262145.f_17028 && iVar1 < Global_262145.f_17049)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tornado6"))
	{
		if (!Global_262145.f_17034 && iVar1 < Global_262145.f_17056)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("youga2"))
	{
		if (!Global_262145.f_17031 && iVar1 < Global_262145.f_17052)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("wolfsbane"))
	{
		if (!Global_262145.f_17032 && iVar1 < Global_262145.f_17053)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("faggio3"))
	{
		if (!Global_262145.f_17033 && iVar1 < Global_262145.f_17054)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("faggio"))
	{
		if (!Global_262145.f_17021 && iVar1 < Global_262145.f_17055)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("bagger"))
	{
		if (!Global_262145.f_17035 && iVar1 < Global_262145.f_17057)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("sanctus"))
	{
		if (!Global_262145.f_17029 && iVar1 < Global_262145.f_17050)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("manchez"))
	{
		if (!Global_262145.f_17030 && iVar1 < Global_262145.f_17051)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("ratbike"))
	{
		if (!Global_262145.f_17036 && iVar1 < Global_262145.f_17058)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("voltic2"))
	{
		if (!Global_262145.f_18667 && iVar1 < Global_262145.f_18764)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("ruiner2"))
	{
		if (!Global_262145.f_18668 && iVar1 < Global_262145.f_18765)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("dune4"))
	{
		if (!Global_262145.f_18669 && iVar1 < Global_262145.f_18766)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("dune5"))
	{
		if (!Global_262145.f_18670 && iVar1 < Global_262145.f_18767)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("phantom2"))
	{
		if (!Global_262145.f_18671 && iVar1 < Global_262145.f_18768)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("technical2"))
	{
		if (!Global_262145.f_18672 && iVar1 < Global_262145.f_18769)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("boxville5"))
	{
		if (!Global_262145.f_18673 && iVar1 < Global_262145.f_18770)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("wastelander"))
	{
		if (!Global_262145.f_18674 && iVar1 < Global_262145.f_18771)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("blazer5"))
	{
		if (!Global_262145.f_18675 && iVar1 < Global_262145.f_18772)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("comet2"))
	{
		if (!Global_262145.f_18676 && iVar1 < Global_262145.f_18773)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("comet3"))
	{
		if (!Global_262145.f_18677 && iVar1 < Global_262145.f_18774)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("diablous"))
	{
		if (!Global_262145.f_18678 && iVar1 < Global_262145.f_18775)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("diablous2"))
	{
		if (!Global_262145.f_18679 && iVar1 < Global_262145.f_18776)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("elegy"))
	{
		if (!Global_262145.f_18680 && iVar1 < Global_262145.f_18777)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("elegy2"))
	{
		if (!Global_262145.f_18681 && iVar1 < Global_262145.f_18778)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("fcr"))
	{
		if (!Global_262145.f_18682 && iVar1 < Global_262145.f_18779)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("fcr2"))
	{
		if (!Global_262145.f_18683 && iVar1 < Global_262145.f_18780)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("italigtb"))
	{
		if (!Global_262145.f_18684 && iVar1 < Global_262145.f_18781)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("italigtb2"))
	{
		if (!Global_262145.f_18685 && iVar1 < Global_262145.f_18782)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("nero"))
	{
		if (!Global_262145.f_18686 && iVar1 < Global_262145.f_18783)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("nero2"))
	{
		if (!Global_262145.f_18687 && iVar1 < Global_262145.f_18784)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("penetrator"))
	{
		if (!Global_262145.f_18688 && iVar1 < Global_262145.f_18785)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("specter"))
	{
		if (!Global_262145.f_18689 && iVar1 < Global_262145.f_18786)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("specter2"))
	{
		if (!Global_262145.f_18690 && iVar1 < Global_262145.f_18787)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tempesta"))
	{
		if (!Global_262145.f_18691 && iVar1 < Global_262145.f_18788)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("gp1"))
	{
		if (!Global_262145.f_19748 && iVar1 < Global_262145.f_19744)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("infernus2"))
	{
		if (!Global_262145.f_19749 && iVar1 < Global_262145.f_19745)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("ruston"))
	{
		if (!Global_262145.f_19750 && iVar1 < Global_262145.f_19746)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("turismo2"))
	{
		if (!Global_262145.f_19751 && iVar1 < Global_262145.f_19747)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("xa21"))
	{
		if (!Global_262145.f_20629 && iVar1 < Global_262145.f_20637)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("cheetah2"))
	{
		if (!Global_262145.f_20630 && iVar1 < Global_262145.f_20638)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("torero"))
	{
		if (!Global_262145.f_20631 && iVar1 < Global_262145.f_20639)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("vagner"))
	{
		if (!Global_262145.f_20632 && iVar1 < Global_262145.f_20640)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("ardent"))
	{
		if (!Global_262145.f_20633 && iVar1 < Global_262145.f_20641)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("nightshark"))
	{
		if (!Global_262145.f_20634 && iVar1 < Global_262145.f_20642)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("microlight"))
	{
		if (!Global_262145.f_21409 && iVar1 < Global_262145.f_21429)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("mogul"))
	{
		if (!Global_262145.f_21421 && iVar1 < Global_262145.f_21441)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("rogue"))
	{
		if (!Global_262145.f_21412 && iVar1 < Global_262145.f_21432)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("starling"))
	{
		if (!Global_262145.f_21422 && iVar1 < Global_262145.f_21442)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("seabreeze"))
	{
		if (!Global_262145.f_21410 && iVar1 < Global_262145.f_21430)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tula"))
	{
		if (!Global_262145.f_21426 && iVar1 < Global_262145.f_21446)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("pyro"))
	{
		if (!Global_262145.f_21424 && iVar1 < Global_262145.f_21444)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("molotok"))
	{
		if (!Global_262145.f_21425 && iVar1 < Global_262145.f_21445)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("nokota"))
	{
		if (!Global_262145.f_21420 && iVar1 < Global_262145.f_21440)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("bombushka"))
	{
		if (!Global_262145.f_21427 && iVar1 < Global_262145.f_21447)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("hunter"))
	{
		if (!Global_262145.f_21423 && iVar1 < Global_262145.f_21443)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("havok"))
	{
		if (!Global_262145.f_21419 && iVar1 < Global_262145.f_21439)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("howard"))
	{
		if (!Global_262145.f_21411 && iVar1 < Global_262145.f_21431)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("alphaz1"))
	{
		if (!Global_262145.f_21413 && iVar1 < Global_262145.f_21433)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("cyclone"))
	{
		if (!Global_262145.f_21414 && iVar1 < Global_262145.f_21434)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("visione"))
	{
		if (!Global_262145.f_21415 && iVar1 < Global_262145.f_21435)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("vigilante"))
	{
		if (!Global_262145.f_21416 && iVar1 < Global_262145.f_21436)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("retinue"))
	{
		if (!Global_262145.f_21417 && iVar1 < Global_262145.f_21437)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("rapidgt3"))
	{
		if (!Global_262145.f_21418 && iVar1 < Global_262145.f_21438)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("deluxo"))
	{
		if (!Global_262145.f_22370 && iVar1 < Global_262145.f_22398)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("stromberg"))
	{
		if (!Global_262145.f_22371 && iVar1 < Global_262145.f_22399)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("riot2"))
	{
		if (!Global_262145.f_22372 && iVar1 < Global_262145.f_22400)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("chernobog"))
	{
		if (!Global_262145.f_22373 && iVar1 < Global_262145.f_22401)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("khanjali"))
	{
		if (!Global_262145.f_22374 && iVar1 < Global_262145.f_22402)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("akula"))
	{
		if (!Global_262145.f_22375 && iVar1 < Global_262145.f_22403)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("thruster"))
	{
		if (!Global_262145.f_22376 && iVar1 < Global_262145.f_22404)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("barrage"))
	{
		if (!Global_262145.f_22377 && iVar1 < Global_262145.f_22405)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("volatol"))
	{
		if (!Global_262145.f_22378 && iVar1 < Global_262145.f_22406)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("comet4"))
	{
		if (!Global_262145.f_22379 && iVar1 < Global_262145.f_22407)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("neon"))
	{
		if (!Global_262145.f_22380 && iVar1 < Global_262145.f_22408)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("streiter"))
	{
		if (!Global_262145.f_22381 && iVar1 < Global_262145.f_22409)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("sentinel3"))
	{
		if (!Global_262145.f_22382 && iVar1 < Global_262145.f_22410)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("yosemite"))
	{
		if (!Global_262145.f_22383 && iVar1 < Global_262145.f_22411)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("sc1"))
	{
		if (!Global_262145.f_22384 && iVar1 < Global_262145.f_22412)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("autarch"))
	{
		if (!Global_262145.f_22385 && iVar1 < Global_262145.f_22413)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("gt500"))
	{
		if (!Global_262145.f_22386 && iVar1 < Global_262145.f_22414)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("hustler"))
	{
		if (!Global_262145.f_22387 && iVar1 < Global_262145.f_22415)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("revolter"))
	{
		if (!Global_262145.f_22388 && iVar1 < Global_262145.f_22416)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("pariah"))
	{
		if (!Global_262145.f_22389 && iVar1 < Global_262145.f_22417)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("raiden"))
	{
		if (!Global_262145.f_22390 && iVar1 < Global_262145.f_22418)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("savestra"))
	{
		if (!Global_262145.f_22391 && iVar1 < Global_262145.f_22419)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("riata"))
	{
		if (!Global_262145.f_22392 && iVar1 < Global_262145.f_22420)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("hermes"))
	{
		if (!Global_262145.f_22393 && iVar1 < Global_262145.f_22421)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("comet5"))
	{
		if (!Global_262145.f_22394 && iVar1 < Global_262145.f_22422)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("z190"))
	{
		if (!Global_262145.f_22395 && iVar1 < Global_262145.f_22423)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("viseris"))
	{
		if (!Global_262145.f_22396 && iVar1 < Global_262145.f_22424)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("kamacho"))
	{
		if (!Global_262145.f_22397 && iVar1 < Global_262145.f_22425)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("gb200"))
	{
		if (!Global_262145.f_23586 && iVar1 < Global_262145.f_23602)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("fagaloa"))
	{
		if (!Global_262145.f_23587 && iVar1 < Global_262145.f_23603)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("ellie"))
	{
		if (!Global_262145.f_23591 && iVar1 < Global_262145.f_23607)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("issi3"))
	{
		if (!Global_262145.f_23594 && iVar1 < Global_262145.f_23610)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("michelli"))
	{
		if (!Global_262145.f_23599 && iVar1 < Global_262145.f_23615)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("flashgt"))
	{
		if (!Global_262145.f_23593 && iVar1 < Global_262145.f_23609)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("hotring"))
	{
		if (!Global_262145.f_23585 && iVar1 < Global_262145.f_23601)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tezeract"))
	{
		if (!Global_262145.f_23592 && iVar1 < Global_262145.f_23608)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tyrant"))
	{
		if (!Global_262145.f_23598 && iVar1 < Global_262145.f_23614)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("dominator3"))
	{
		if (!Global_262145.f_23597 && iVar1 < Global_262145.f_23613)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("taipan"))
	{
		if (!Global_262145.f_23588 && iVar1 < Global_262145.f_23604)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("entity2"))
	{
		if (!Global_262145.f_23590 && iVar1 < Global_262145.f_23606)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("jester3"))
	{
		if (!Global_262145.f_23600 && iVar1 < Global_262145.f_23616)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("cheburek"))
	{
		if (!Global_262145.f_23596 && iVar1 < Global_262145.f_23612)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("caracara"))
	{
		if (!Global_262145.f_23589 && iVar1 < Global_262145.f_23605)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("seasparrow"))
	{
		if (!Global_262145.f_23595 && iVar1 < Global_262145.f_23611)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("terbyte"))
	{
		if (!Global_262145.f_23676 && iVar1 < Global_262145.f_23663)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("pbus2"))
	{
		if (!Global_262145.f_23677 && iVar1 < Global_262145.f_23664)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("mule4"))
	{
		if (!Global_262145.f_23682 && iVar1 < Global_262145.f_23669)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("pounder2"))
	{
		if (!Global_262145.f_23681 && iVar1 < Global_262145.f_23668)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("swinger"))
	{
		if (!Global_262145.f_23679 && iVar1 < Global_262145.f_23666)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("menacer"))
	{
		if (!Global_262145.f_23685 && iVar1 < Global_262145.f_23672)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("scramjet"))
	{
		if (!Global_262145.f_23687 && iVar1 < Global_262145.f_23674)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("strikeforce"))
	{
		if (!Global_262145.f_23688 && iVar1 < Global_262145.f_23675)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("oppressor2"))
	{
		if (!Global_262145.f_23686 && iVar1 < Global_262145.f_23673)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("patriot2"))
	{
		if (!Global_262145.f_23678 && iVar1 < Global_262145.f_23665)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("stafford"))
	{
		if (!Global_262145.f_23680 && iVar1 < Global_262145.f_23667)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("freecrawler"))
	{
		if (!Global_262145.f_23684 && iVar1 < Global_262145.f_23671)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("blimp3"))
	{
		if (!Global_262145.f_23683 && iVar1 < Global_262145.f_23670)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("monster3"))
	{
	}
	else if (iParam0 == joaat("cerberus"))
	{
	}
	else if (iParam0 == joaat("cerberus2"))
	{
	}
	else if (iParam0 == joaat("cerberus3"))
	{
	}
	else if (iParam0 == joaat("brutus"))
	{
	}
	else if (iParam0 == joaat("brutus2"))
	{
	}
	else if (iParam0 == joaat("brutus3"))
	{
	}
	else if (iParam0 == joaat("scarab"))
	{
	}
	else if (iParam0 == joaat("scarab2"))
	{
	}
	else if (iParam0 == joaat("scarab3"))
	{
	}
	else if (iParam0 == joaat("imperator"))
	{
	}
	else if (iParam0 == joaat("imperator2"))
	{
	}
	else if (iParam0 == joaat("imperator3"))
	{
	}
	else if (iParam0 == joaat("zr380"))
	{
	}
	else if (iParam0 == joaat("zr3802"))
	{
	}
	else if (iParam0 == joaat("zr3803"))
	{
	}
	else if (iParam0 == joaat("impaler"))
	{
	}
	else if (iParam0 == joaat("deveste"))
	{
		if (!Global_262145.f_26051 && iVar1 < Global_262145.f_26053)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("toros"))
	{
		if (!Global_262145.f_25064 && iVar1 < Global_262145.f_25057)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("clique"))
	{
		if (!Global_262145.f_25065 && iVar1 < Global_262145.f_25058)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("italigto"))
	{
		if (!Global_262145.f_25066 && iVar1 < Global_262145.f_25059)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("deviant"))
	{
		if (!Global_262145.f_25067 && iVar1 < Global_262145.f_25060)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("vamos"))
	{
		if (!Global_262145.f_26052 && iVar1 < Global_262145.f_26054)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tulip"))
	{
		if (!Global_262145.f_25068 && iVar1 < Global_262145.f_25061)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("schlagen"))
	{
		if (!Global_262145.f_25069 && iVar1 < Global_262145.f_25062)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("rcbandito"))
	{
		if (!Global_262145.f_25070 && iVar1 < Global_262145.f_25063)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("thrax"))
	{
		if (!Global_262145.f_25075 && iVar1 < Global_262145.f_25096)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("drafter"))
	{
		if (!Global_262145.f_25076 && iVar1 < Global_262145.f_25097)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("locust"))
	{
		if (!Global_262145.f_25077 && iVar1 < Global_262145.f_25098)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("novak"))
	{
		if (!Global_262145.f_25078 && iVar1 < Global_262145.f_25099)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("zorrusso"))
	{
		if (!Global_262145.f_25079 && iVar1 < Global_262145.f_25100)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("gauntlet3"))
	{
		if (!Global_262145.f_25080 && iVar1 < Global_262145.f_25101)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("issi7"))
	{
		if (!Global_262145.f_25081 && iVar1 < Global_262145.f_25102)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("zion3"))
	{
		if (!Global_262145.f_25082 && iVar1 < Global_262145.f_25103)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("nebula"))
	{
		if (!Global_262145.f_25083 && iVar1 < Global_262145.f_25104)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("hellion"))
	{
		if (!Global_262145.f_25084 && iVar1 < Global_262145.f_25105)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("dynasty"))
	{
		if (!Global_262145.f_25085 && iVar1 < Global_262145.f_25106)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("rrocket"))
	{
		if (!Global_262145.f_25086 && iVar1 < Global_262145.f_25107)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("peyote2"))
	{
		if (!Global_262145.f_25087 && iVar1 < Global_262145.f_25108)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("gauntlet4"))
	{
		if (!Global_262145.f_25088 && iVar1 < Global_262145.f_25109)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("caracara2"))
	{
		if (!Global_262145.f_25089 && iVar1 < Global_262145.f_25110)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("jugular"))
	{
		if (!Global_262145.f_25090 && iVar1 < Global_262145.f_25111)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("s80"))
	{
		if (!Global_262145.f_25091 && iVar1 < Global_262145.f_25112)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("krieger"))
	{
		if (!Global_262145.f_25092 && iVar1 < Global_262145.f_25113)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("emerus"))
	{
		if (!Global_262145.f_25093 && iVar1 < Global_262145.f_25114)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("neo"))
	{
		if (!Global_262145.f_25094 && iVar1 < Global_262145.f_25115)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("paragon"))
	{
		if (!Global_262145.f_25095 && iVar1 < Global_262145.f_25116)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("asbo"))
	{
		if (!Global_262145.f_27895 && iVar1 < Global_262145.f_27916)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("kanjo"))
	{
		if (!Global_262145.f_27896 && iVar1 < Global_262145.f_27917)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("everon"))
	{
		if (!Global_262145.f_27897 && iVar1 < Global_262145.f_27918)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("retinue2"))
	{
		if (!Global_262145.f_27898 && iVar1 < Global_262145.f_27919)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("yosemite2"))
	{
		if (!Global_262145.f_27899 && iVar1 < Global_262145.f_27920)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("sugoi"))
	{
		if (!Global_262145.f_27900 && iVar1 < Global_262145.f_27921)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("sultan2"))
	{
		if (!Global_262145.f_27901 && iVar1 < Global_262145.f_27922)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("outlaw"))
	{
		if (!Global_262145.f_27902 && iVar1 < Global_262145.f_27923)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("vagrant"))
	{
		if (!Global_262145.f_27903 && iVar1 < Global_262145.f_27924)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("komoda"))
	{
		if (!Global_262145.f_27904 && iVar1 < Global_262145.f_27925)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("stryder"))
	{
		if (!Global_262145.f_27905 && iVar1 < Global_262145.f_27926)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("furia"))
	{
		if (!Global_262145.f_27906 && iVar1 < Global_262145.f_27927)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("zhaba"))
	{
		if (!Global_262145.f_27907 && iVar1 < Global_262145.f_27928)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("jb7002"))
	{
		if (!Global_262145.f_27908 && iVar1 < Global_262145.f_27929)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("firetruk"))
	{
		if (!Global_262145.f_27909 && iVar1 < Global_262145.f_27930)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("burrito2"))
	{
		if (!Global_262145.f_27910 && iVar1 < Global_262145.f_27931)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("boxville"))
	{
		if (!Global_262145.f_27911 && iVar1 < Global_262145.f_27932)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("stockade"))
	{
		if (!Global_262145.f_27912 && iVar1 < Global_262145.f_27933)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("minitank"))
	{
		if (!Global_262145.f_27913 && iVar1 < Global_262145.f_27934)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("lguard"))
	{
		if (!Global_262145.f_27914 && iVar1 < Global_262145.f_27935)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("blazer2"))
	{
		if (!Global_262145.f_27915 && iVar1 < Global_262145.f_27936)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("formula"))
	{
		if ((!Global_262145.f_27938 && iVar1 < Global_262145.f_27939) && !Global_262145.f_27893)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("formula2"))
	{
		if ((!Global_262145.f_27941 && iVar1 < Global_262145.f_27942) && !Global_262145.f_27894)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("imorgon"))
	{
		if (!Global_262145.f_27946 && iVar1 < Global_262145.f_27949)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("rebla"))
	{
		if (!Global_262145.f_27947 && iVar1 < Global_262145.f_27950)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("vstr"))
	{
		if (!Global_262145.f_27948 && iVar1 < Global_262145.f_27951)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("gauntlet5"))
	{
		if (!Global_262145.f_28950 && iVar1 < Global_262145.f_28615)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("club"))
	{
		if (!Global_262145.f_28601 && iVar1 < Global_262145.f_28622)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("dukes3"))
	{
		if (!Global_262145.f_28602 && iVar1 < Global_262145.f_28608)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("yosemite3"))
	{
		if (!Global_262145.f_28948 && iVar1 < Global_262145.f_28616)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("peyote3"))
	{
		if (!Global_262145.f_28949 && iVar1 < Global_262145.f_28617)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("glendale2"))
	{
		if (!Global_262145.f_28595 && iVar1 < Global_262145.f_28614)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("penumbra2"))
	{
		if (!Global_262145.f_28596 && iVar1 < Global_262145.f_28623)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("landstalker2"))
	{
		if (!Global_262145.f_28597 && iVar1 < Global_262145.f_28613)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("seminole2"))
	{
		if (!Global_262145.f_28598 && iVar1 < Global_262145.f_28611)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tigon"))
	{
		if (!Global_262145.f_28944 && iVar1 < Global_262145.f_28618)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("openwheel1"))
	{
		if (!Global_262145.f_28945 && iVar1 < Global_262145.f_28619)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("openwheel2"))
	{
		if (!Global_262145.f_28946 && iVar1 < Global_262145.f_28620)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("coquette4"))
	{
		if (!Global_262145.f_28947 && iVar1 < Global_262145.f_28621)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("manana2"))
	{
		if (!Global_262145.f_28599 && iVar1 < Global_262145.f_28610)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("youga3"))
	{
		if (!Global_262145.f_28600 && iVar1 < Global_262145.f_28612)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("toreador"))
	{
		if (!Global_262145.f_29392 && iVar1 < Global_262145.f_29375)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("annihilator2"))
	{
		if (!Global_262145.f_29393 && iVar1 < Global_262145.f_29376)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("alkonost"))
	{
		if (!Global_262145.f_29394 && iVar1 < Global_262145.f_29377)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("patrolboat"))
	{
		if (!Global_262145.f_29395 && iVar1 < Global_262145.f_29378)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("longfin"))
	{
		if (!Global_262145.f_29396 && iVar1 < Global_262145.f_29379)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("winky"))
	{
		if (!Global_262145.f_29397 && iVar1 < Global_262145.f_29380)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("veto"))
	{
		if (!Global_262145.f_29398 && iVar1 < Global_262145.f_29381)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("veto2"))
	{
		if (!Global_262145.f_29399 && iVar1 < Global_262145.f_29382)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("italirsx"))
	{
		if (!Global_262145.f_29400 && iVar1 < Global_262145.f_29383)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("weevil"))
	{
		if (Global_262145.f_29409)
		{
		}
		else if (!Global_262145.f_29401 && iVar1 < Global_262145.f_29384)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("manchez2"))
	{
		if (!Global_262145.f_29402 && iVar1 < Global_262145.f_29385)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("slamtruck"))
	{
		if (!Global_262145.f_29403 && iVar1 < Global_262145.f_29386)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("vetir"))
	{
		if (!Global_262145.f_29404 && iVar1 < Global_262145.f_29387)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("squaddie"))
	{
		if (!Global_262145.f_29405 && iVar1 < Global_262145.f_29388)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("brioso2"))
	{
		if (Global_262145.f_29410)
		{
		}
		else if (!Global_262145.f_29406 && iVar1 < Global_262145.f_29389)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("dinghy5"))
	{
		if (!Global_262145.f_29407 && iVar1 < Global_262145.f_29390)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("verus"))
	{
		if (!Global_262145.f_29408 && iVar1 < Global_262145.f_29391)
		{
			iVar0 = 0;
		}
	}
	return iVar0;
}

int func_695()
{
	return 0;
}

int func_696()
{
	return 1;
}

int func_697()
{
	return 1;
}

int func_698()
{
	if (unk_0x95C5B896CB42B20E(-1226939934))
	{
		return 1;
	}
	return 0;
}

int func_699()
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

void func_700(int iParam0, int iParam1, bool bParam2)
{
	if (Global_262145.f_10165)
	{
		*iParam1 = iParam0;
	}
	if (iParam0 >= 0)
	{
		*iParam1 = (Global_1672964[iParam0] - 1);
		if (bParam2)
		{
			if ((unk_0xD3137A576BE9EC5C() % 5) == 0)
			{
			}
		}
	}
	else
	{
		*iParam1 = -1;
	}
}

int func_701(int iParam0)
{
	int iVar0;
	
	switch (iParam0)
	{
		case 8:
			return 88;
			break;
		
		case 9:
			return 108;
			break;
		
		case 10:
			return 128;
			break;
		
		case 11:
			return 148;
			break;
		
		case 6:
			return 65;
			break;
		
		case 7:
			return 75;
			break;
		
		case 5:
			return -1;
			break;
		
		case 12:
			return 159;
			break;
		
		case 13:
			return 179;
			break;
		
		case 14:
			return 191;
			break;
		
		case 15:
			return 192;
			break;
		
		case 16:
			return 202;
			break;
		
		case 17:
			return 212;
			break;
		
		case 18:
			return 227;
			break;
		
		case 19:
			return 237;
			break;
		
		case 20:
			return 247;
			break;
		
		case 21:
			return 258;
			break;
		
		case 22:
			return 268;
			break;
		
		case 23:
			return 281;
			break;
		
		case 24:
			return 294;
			break;
	}
	if (iParam0 >= 1000)
	{
		iVar0 = func_644(iParam0);
		return func_703(iVar0);
	}
	return (func_702(iParam0, -1, 1) * iParam0);
}

int func_702(int iParam0, int iParam1, bool bParam2)
{
	if (iParam0 == -1)
	{
		if (iParam1 >= 1)
		{
			if (func_424(iParam1, 0, 0))
			{
				return 20;
			}
			else if (func_430(iParam1))
			{
				return 0;
			}
			else if (func_422(iParam1, -1))
			{
				return 10;
			}
			else if (iParam1 == 115)
			{
				return 8;
			}
			else if (iParam1 == 116)
			{
				return 20;
			}
			else if (iParam1 == 117)
			{
				return 7;
			}
			else if (iParam1 == 118)
			{
				return 1;
			}
			else if ((iParam1 == 119 || iParam1 == 120) || iParam1 == 121)
			{
				return 10;
			}
			else if (iParam1 == 122)
			{
				return 9;
			}
			else if (iParam1 == 123 || iParam1 == 124)
			{
				return 10;
			}
			else if (iParam1 == 125)
			{
				return 10;
			}
			else if (iParam1 == 126)
			{
				return 10;
			}
			else if (iParam1 <= 126 && iParam1 > 0)
			{
				if (Global_1049924[iParam1 /*1951*/].f_33 == 2)
				{
					if (bParam2)
					{
						return 3;
					}
					else
					{
						return 2;
					}
				}
				else if (Global_1049924[iParam1 /*1951*/].f_33 == 6)
				{
					if (bParam2)
					{
						return 8;
					}
					else
					{
						return 6;
					}
				}
				else if (Global_1049924[iParam1 /*1951*/].f_33 == 10)
				{
					if (bParam2)
					{
						return 13;
					}
					else
					{
						return 10;
					}
				}
			}
		}
	}
	switch (iParam0)
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
		case 7:
		case 23:
		case 24:
			return 13;
			break;
		
		case 5:
			return 0;
			break;
		
		case 6:
			return 10;
			break;
		
		case 8:
		case 9:
		case 10:
			return 20;
			break;
		
		case 11:
			return 8;
			break;
		
		case 12:
			return 20;
			break;
		
		case 13:
			return 7;
			break;
		
		case 14:
			return 1;
			break;
		
		case 15:
		case 16:
		case 17:
			return 10;
			break;
		
		case 18:
		case 19:
		case 20:
			return 10;
			break;
		
		case 21:
			return 10;
			break;
		
		case 22:
			return 10;
			break;
	}
	return 0;
}

int func_703(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 156;
		
		case 2:
			return 223;
		
		case 1:
			return 224;
		
		case 3:
			return 278;
		
		default:
	}
	return -1;
}

var func_704()
{
	var uVar0;
	
	uVar0 = func_705();
	if (!func_476())
	{
		if (func_495() != func_65())
		{
			uVar0 = func_737(func_495()) + 1;
		}
	}
	return uVar0;
}

int func_705()
{
	return func_737(unk_0x460153A63B9477BC()) + 1;
}

int func_706()
{
	return func_462(6114, -1, 0);
}

int func_707(int iParam0)
{
	if (func_190(iParam0, 1))
	{
		return Global_1630317[iParam0 /*595*/].f_11.f_424;
	}
	return -1;
}

void func_708(int iParam0)
{
	if (iParam0 == 0)
	{
	}
	unk_0xCB78201804D687F2(&Global_1676263);
	func_709();
}

void func_709()
{
	struct<44> Var0;
	
	Global_1676263 = { Var0 };
	Global_1676263.f_23 = 0;
	Global_1676263.f_24 = 0;
	Global_1676263.f_16 = 0;
}

bool func_710(int iParam0)
{
	return unk_0xCE990E643CD9D0E5(Global_1590682[iParam0 /*883*/].f_274.f_351, 12);
}

bool func_711(int iParam0)
{
	return unk_0xCE990E643CD9D0E5(Global_1590682[iParam0 /*883*/].f_274.f_351, 13);
}

int func_712(int iParam0)
{
	if (iParam0 != func_65())
	{
		if ((unk_0xCE990E643CD9D0E5(Global_1590682[iParam0 /*883*/].f_274.f_259, 12) || unk_0xCE990E643CD9D0E5(Global_1590682[iParam0 /*883*/].f_274.f_259, 13)) || unk_0xCE990E643CD9D0E5(Global_1590682[iParam0 /*883*/].f_274.f_259, 14))
		{
			return 1;
		}
	}
	return 0;
}

int func_713(int iParam0)
{
	if (iParam0 != func_65())
	{
		if ((unk_0xCE990E643CD9D0E5(Global_1590682[iParam0 /*883*/].f_274.f_259, 0) || unk_0xCE990E643CD9D0E5(Global_1590682[iParam0 /*883*/].f_274.f_259, 1)) || unk_0xCE990E643CD9D0E5(Global_1590682[iParam0 /*883*/].f_274.f_259, 2))
		{
			return 1;
		}
	}
	return 0;
}

int func_714(int iParam0)
{
	if (iParam0 != func_65())
	{
		if (((((unk_0xCE990E643CD9D0E5(Global_1590682[iParam0 /*883*/].f_274.f_259, 3) || unk_0xCE990E643CD9D0E5(Global_1590682[iParam0 /*883*/].f_274.f_259, 4)) || unk_0xCE990E643CD9D0E5(Global_1590682[iParam0 /*883*/].f_274.f_259, 5)) || unk_0xCE990E643CD9D0E5(Global_1590682[iParam0 /*883*/].f_274.f_259, 0)) || unk_0xCE990E643CD9D0E5(Global_1590682[iParam0 /*883*/].f_274.f_259, 1)) || unk_0xCE990E643CD9D0E5(Global_1590682[iParam0 /*883*/].f_274.f_259, 2))
		{
			return 1;
		}
	}
	return 0;
}

int func_715(int iParam0, int iParam1)
{
	if (iParam1 == func_65())
	{
		return 0;
	}
	switch (iParam0)
	{
		case 0:
			if (unk_0xCE990E643CD9D0E5(Global_1590682[iParam1 /*883*/].f_274.f_259, 0))
			{
				return 3;
			}
			else if (unk_0xCE990E643CD9D0E5(Global_1590682[iParam1 /*883*/].f_274.f_259, 3))
			{
				return 2;
			}
			else if (unk_0xCE990E643CD9D0E5(Global_1590682[iParam1 /*883*/].f_274.f_259, 6))
			{
				return 4;
			}
			else if (unk_0xCE990E643CD9D0E5(Global_1590682[iParam1 /*883*/].f_274.f_259, 9))
			{
				return 1;
			}
			else if (unk_0xCE990E643CD9D0E5(Global_1590682[iParam1 /*883*/].f_274.f_259, 12))
			{
				return 7;
			}
			else if (unk_0xCE990E643CD9D0E5(Global_1590682[iParam1 /*883*/].f_274.f_259, 15))
			{
				return 5;
			}
			else if (unk_0xCE990E643CD9D0E5(Global_1590682[iParam1 /*883*/].f_274.f_259, 18))
			{
				return 6;
			}
			else if (unk_0xCE990E643CD9D0E5(Global_1590682[iParam1 /*883*/].f_274.f_259, 21))
			{
				return 0;
			}
			else if (unk_0xCE990E643CD9D0E5(Global_1590682[iParam1 /*883*/].f_274.f_259, 24))
			{
				return 8;
			}
			break;
		
		case 1:
			if (unk_0xCE990E643CD9D0E5(Global_1590682[iParam1 /*883*/].f_274.f_259, 1))
			{
				return 3;
			}
			else if (unk_0xCE990E643CD9D0E5(Global_1590682[iParam1 /*883*/].f_274.f_259, 4))
			{
				return 2;
			}
			else if (unk_0xCE990E643CD9D0E5(Global_1590682[iParam1 /*883*/].f_274.f_259, 7))
			{
				return 4;
			}
			else if (unk_0xCE990E643CD9D0E5(Global_1590682[iParam1 /*883*/].f_274.f_259, 10))
			{
				return 1;
			}
			else if (unk_0xCE990E643CD9D0E5(Global_1590682[iParam1 /*883*/].f_274.f_259, 13))
			{
				return 7;
			}
			else if (unk_0xCE990E643CD9D0E5(Global_1590682[iParam1 /*883*/].f_274.f_259, 16))
			{
				return 5;
			}
			else if (unk_0xCE990E643CD9D0E5(Global_1590682[iParam1 /*883*/].f_274.f_259, 19))
			{
				return 6;
			}
			else if (unk_0xCE990E643CD9D0E5(Global_1590682[iParam1 /*883*/].f_274.f_259, 22))
			{
				return 0;
			}
			else if (unk_0xCE990E643CD9D0E5(Global_1590682[iParam1 /*883*/].f_274.f_259, 25))
			{
				return 8;
			}
			break;
		
		case 2:
			if (unk_0xCE990E643CD9D0E5(Global_1590682[iParam1 /*883*/].f_274.f_259, 2))
			{
				return 3;
			}
			else if (unk_0xCE990E643CD9D0E5(Global_1590682[iParam1 /*883*/].f_274.f_259, 5))
			{
				return 2;
			}
			else if (unk_0xCE990E643CD9D0E5(Global_1590682[iParam1 /*883*/].f_274.f_259, 8))
			{
				return 4;
			}
			else if (unk_0xCE990E643CD9D0E5(Global_1590682[iParam1 /*883*/].f_274.f_259, 11))
			{
				return 1;
			}
			else if (unk_0xCE990E643CD9D0E5(Global_1590682[iParam1 /*883*/].f_274.f_259, 14))
			{
				return 7;
			}
			else if (unk_0xCE990E643CD9D0E5(Global_1590682[iParam1 /*883*/].f_274.f_259, 17))
			{
				return 5;
			}
			else if (unk_0xCE990E643CD9D0E5(Global_1590682[iParam1 /*883*/].f_274.f_259, 20))
			{
				return 6;
			}
			else if (unk_0xCE990E643CD9D0E5(Global_1590682[iParam1 /*883*/].f_274.f_259, 23))
			{
				return 0;
			}
			else if (unk_0xCE990E643CD9D0E5(Global_1590682[iParam1 /*883*/].f_274.f_259, 26))
			{
				return 8;
			}
			break;
	}
	return 0;
}

int func_716(int iParam0)
{
	if (iParam0 != func_65())
	{
		if ((unk_0xCE990E643CD9D0E5(Global_1590682[iParam0 /*883*/].f_274.f_259, 6) || unk_0xCE990E643CD9D0E5(Global_1590682[iParam0 /*883*/].f_274.f_259, 7)) || unk_0xCE990E643CD9D0E5(Global_1590682[iParam0 /*883*/].f_274.f_259, 8))
		{
			return 1;
		}
	}
	return 0;
}

bool func_717(int iParam0)
{
	return unk_0xCE990E643CD9D0E5(Global_1590682[iParam0 /*883*/].f_274.f_351, 8);
}

bool func_718(int iParam0)
{
	return unk_0xCE990E643CD9D0E5(Global_1590682[iParam0 /*883*/].f_274.f_351, 7);
}

bool func_719(int iParam0)
{
	if (iParam0 == func_65())
	{
		return 0;
	}
	return unk_0xCE990E643CD9D0E5(Global_1590682[iParam0 /*883*/].f_274.f_351, 9);
}

bool func_720(int iParam0)
{
	if (iParam0 == func_65())
	{
		return 0;
	}
	return unk_0xCE990E643CD9D0E5(Global_1590682[iParam0 /*883*/].f_274.f_351, 11);
}

bool func_721(int iParam0)
{
	if (iParam0 == func_65())
	{
		return 0;
	}
	return unk_0xCE990E643CD9D0E5(Global_1590682[iParam0 /*883*/].f_274.f_351, 10);
}

int func_722(int iParam0, int iParam1)
{
	return func_462(func_723(iParam1), iParam0, 0);
}

int func_723(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 3899;
		
		case 1:
			return 3928;
		
		case 2:
			return 3932;
		
		case 3:
			return 3936;
		
		case 4:
			return 3940;
		
		case 5:
			return 5451;
		
		default:
	}
	return 3899;
}

void func_724(int iParam0)
{
	if (iParam0 == 0)
	{
	}
	unk_0xBFD184266AACBABA(&Global_1676200);
	func_725();
}

void func_725()
{
	struct<63> Var0;
	
	Var0.f_8 = -1;
	Var0.f_9 = -1;
	Var0.f_10 = -1;
	Var0.f_11 = -1;
	Var0.f_12 = -1;
	Var0.f_15 = -1;
	Var0.f_16 = -1;
	Var0.f_17 = -1;
	Var0.f_18 = -1;
	Var0.f_19 = -1;
	Var0.f_20 = -1;
	Var0.f_21 = -1;
	Var0.f_22 = -1;
	Var0.f_23 = -1;
	Var0.f_24 = -1;
	Var0.f_25 = -1;
	Var0.f_26 = -1;
	Var0.f_27 = -1;
	Var0.f_28 = -1;
	Var0.f_29 = -1;
	Var0.f_30 = -1;
	Var0.f_31 = -1;
	Var0.f_32 = -1;
	Var0.f_33 = -1;
	Var0.f_34 = -1;
	Var0.f_35 = -1;
	Var0.f_36 = -1;
	Var0.f_37 = -1;
	Var0.f_38 = -1;
	Var0.f_39 = -1;
	Var0.f_40 = -1;
	Var0.f_41 = -1;
	Var0.f_42 = -1;
	Var0.f_43 = -1;
	Var0.f_44 = -1;
	Var0.f_45 = -1;
	Var0.f_46 = -1;
	Var0.f_47 = -1;
	Var0.f_48 = -1;
	Var0.f_49 = -1;
	Var0.f_50 = -1;
	Var0.f_51 = -1;
	Var0.f_52 = -1;
	Var0.f_53 = -1;
	Var0.f_54 = -1;
	Var0.f_55 = -1;
	Var0.f_56 = -1;
	Var0.f_57 = -1;
	Var0.f_58 = -1;
	Var0.f_59 = -1;
	Var0.f_60 = -1;
	Var0.f_61 = -1;
	Var0.f_62 = -1;
	Global_1676200 = { Var0 };
	Global_1676200.f_24 = 0;
	Global_1676200.f_25 = 0;
	Global_1676200.f_17 = 0;
}

void func_726(int iParam0)
{
	if (iParam0 == 0)
	{
	}
	unk_0xA9913FCC3847FBA0(&Global_1676146);
	func_727();
}

void func_727()
{
	struct<54> Var0;
	
	Var0.f_8 = -1;
	Var0.f_9 = -1;
	Var0.f_10 = -1;
	Var0.f_11 = -1;
	Var0.f_12 = -1;
	Var0.f_15 = -1;
	Var0.f_16 = -1;
	Var0.f_17 = -1;
	Var0.f_18 = -1;
	Var0.f_19 = -1;
	Var0.f_20 = -1;
	Var0.f_21 = -1;
	Var0.f_22 = -1;
	Var0.f_23 = -1;
	Var0.f_24 = -1;
	Var0.f_25 = -1;
	Var0.f_26 = -1;
	Var0.f_27 = -1;
	Var0.f_28 = -1;
	Var0.f_29 = -1;
	Var0.f_30 = -1;
	Var0.f_31 = -1;
	Var0.f_32 = -1;
	Var0.f_33 = -1;
	Var0.f_34 = -1;
	Var0.f_35 = -1;
	Var0.f_36 = -1;
	Var0.f_37 = -1;
	Var0.f_38 = -1;
	Var0.f_39 = -1;
	Var0.f_40 = -1;
	Var0.f_41 = -1;
	Var0.f_42 = -1;
	Var0.f_43 = -1;
	Var0.f_44 = -1;
	Var0.f_45 = -1;
	Var0.f_46 = -1;
	Var0.f_47 = -1;
	Var0.f_48 = -1;
	Var0.f_49 = -1;
	Var0.f_50 = -1;
	Var0.f_51 = -1;
	Var0.f_52 = -1;
	Var0.f_53 = -1;
	Global_1676146 = { Var0 };
	Global_1676146.f_29 = 0;
	Global_1676146.f_30 = 0;
	Global_1676146.f_17 = 0;
}

int func_728(int iParam0, int iParam1)
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	
	bVar0 = func_596(iParam0, iParam1, 2);
	bVar1 = func_596(iParam0, iParam1, 1);
	bVar2 = func_596(iParam0, iParam1, 0);
	if ((bVar0 && bVar1) && bVar2)
	{
		return 7;
	}
	else if ((bVar1 && bVar0) && !bVar2)
	{
		return 6;
	}
	else if ((bVar2 && bVar0) && !bVar1)
	{
		return 5;
	}
	else if ((bVar2 && bVar1) && !bVar0)
	{
		return 4;
	}
	else if (bVar0)
	{
		return 3;
	}
	else if (bVar1)
	{
		return 2;
	}
	else if (bVar2)
	{
		return 1;
	}
	return 0;
}

int func_729(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam0 == func_65())
	{
		return 0;
	}
	if (func_588(iParam1))
	{
		iVar0 = 0;
		while (iVar0 <= 5)
		{
			if (Global_1590682[iParam0 /*883*/].f_274.f_183[iVar0 /*12*/] == iParam1)
			{
				return Global_1590682[iParam0 /*883*/].f_274.f_183[iVar0 /*12*/].f_2;
			}
			iVar0++;
		}
	}
	return 0;
}

int func_730(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	
	if (func_138(iParam0))
	{
		if (!bParam1 && bParam2)
		{
			iVar0 = Global_262145.f_17707;
		}
		else if (!bParam2)
		{
			iVar0 = Global_262145.f_17706;
		}
		else
		{
			iVar0 = Global_262145.f_17688;
		}
		iVar1 = 19;
	}
	else if (func_420(iParam0))
	{
		iVar0 = 6;
		iVar1 = 24;
	}
	else if (func_221(iParam0, 0))
	{
		if (bParam1)
		{
			iVar0 = Global_262145.f_17687;
			iVar1 = 20;
		}
	}
	else if (func_322(iParam0))
	{
		if (!bParam1 && bParam2)
		{
			iVar0 = Global_262145.f_17707;
		}
		else if (!bParam2)
		{
			iVar0 = Global_262145.f_17706;
		}
		else
		{
			iVar0 = Global_262145.f_17688;
		}
		iVar1 = 18;
	}
	if (iVar0 != 0)
	{
		unk_0xE192193881225A93(func_648(func_495()), func_647(func_495()), func_747(), func_746(), iVar1, iVar0);
	}
	func_732(iVar0);
	func_731(iVar0);
	return iVar0;
}

void func_731(int iParam0)
{
	int iVar0;
	
	iVar0 = func_462(3969, -1, 0);
	iVar0 = (iVar0 + iParam0);
	if (iVar0 < 0)
	{
		iVar0 = 0;
	}
	if (iVar0 > 9999)
	{
		iVar0 = 9999;
	}
	Global_1630317[unk_0x460153A63B9477BC() /*595*/].f_11.f_463 = iVar0;
	func_460(3969, iVar0, -1, 1, 0);
}

void func_732(int iParam0)
{
	int iVar0;
	
	iVar0 = unk_0x460153A63B9477BC();
	Global_1630317[iVar0 /*595*/].f_11.f_462 = (Global_1630317[iVar0 /*595*/].f_11.f_462 + iParam0);
	if (Global_1630317[iVar0 /*595*/].f_11.f_462 < -9999)
	{
		Global_1630317[iVar0 /*595*/].f_11.f_462 = 9999;
	}
	else if (Global_1630317[iVar0 /*595*/].f_11.f_462 > 9999)
	{
		Global_1630317[iVar0 /*595*/].f_11.f_462 = 9999;
	}
}

int func_733(bool bParam0)
{
	if (bParam0)
	{
		return 0;
	}
	if (func_124(unk_0x460153A63B9477BC()) || func_150(unk_0x460153A63B9477BC()))
	{
		return 1;
	}
	return 0;
}

void func_734(var uParam0)
{
	unk_0x07E47E394131538E(&Global_1676407);
	func_735();
}

void func_735()
{
	struct<36> Var0;
	
	Var0 = -1;
	Var0.f_1 = -1;
	Var0.f_2 = -1;
	Var0.f_3 = -1;
	Var0.f_4 = -1;
	Var0.f_5 = -1;
	Var0.f_6 = -1;
	Var0.f_7 = -1;
	Var0.f_8 = -1;
	Var0.f_9 = -1;
	Var0.f_10 = -1;
	Var0.f_11 = -1;
	Var0.f_12 = -1;
	Var0.f_13 = -1;
	Var0.f_14 = -1;
	Var0.f_15 = -1;
	Var0.f_16 = -1;
	Var0.f_17 = -1;
	Var0.f_18 = -1;
	Var0.f_19 = -1;
	Var0.f_20 = -1;
	Var0.f_21 = -1;
	Var0.f_22 = -1;
	Var0.f_23 = -1;
	Var0.f_24 = -1;
	Var0.f_25 = -1;
	Var0.f_26 = -1;
	Var0.f_27 = -1;
	Var0.f_29 = -1;
	Var0.f_30 = -1;
	Var0.f_31 = -1;
	Var0.f_32 = -1;
	Var0.f_33 = -1;
	Var0.f_34 = -1;
	Global_1676407 = { Var0 };
}

int func_736(int iParam0)
{
	if (iParam0 != func_65())
	{
		return Global_1590682[iParam0 /*883*/].f_274.f_322 != 0;
	}
	return 0;
}

int func_737(int iParam0)
{
	if (func_66(iParam0) == func_65())
	{
		return 0;
	}
	return Global_1630317[iParam0 /*595*/].f_11.f_19;
}

int func_738()
{
	int iVar0;
	
	if (func_463())
	{
		return 4;
	}
	else if (func_476())
	{
		if (func_623(unk_0x460153A63B9477BC()))
		{
			return 8;
		}
		return 6;
	}
	if (func_253(1))
	{
		iVar0 = func_707(unk_0x460153A63B9477BC());
		if (iVar0 == -1)
		{
			iVar0 = 5;
		}
		return iVar0;
	}
	else if (func_493(1))
	{
		if (func_623(func_495()))
		{
			return 9;
		}
		return 7;
	}
	return -2;
}

int func_739(bool bParam0)
{
	if (bParam0)
	{
		return 1;
	}
	return 0;
}

int func_740(bool bParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = -1;
	iVar1 = -1;
	if (bParam0)
	{
		iVar0 = func_182(unk_0x460153A63B9477BC());
	}
	else
	{
		iVar0 = func_105(unk_0x460153A63B9477BC());
	}
	if (iVar0 != -1)
	{
	}
	switch (iVar0)
	{
		case 236:
			iVar2 = func_745(unk_0x460153A63B9477BC());
			iVar1 = iVar2;
			break;
		
		case 150:
			iVar2 = func_743(unk_0x460153A63B9477BC());
			iVar1 = iVar2;
			break;
		
		case 237:
			iVar2 = func_742(unk_0x460153A63B9477BC());
			if (func_452(func_453(unk_0x460153A63B9477BC())))
			{
				iVar1 = 100;
			}
			else
			{
				iVar1 = 200;
			}
			iVar1 = (iVar1 + iVar2);
			break;
		
		case 250:
			iVar2 = func_742(unk_0x460153A63B9477BC());
			iVar1 = 300;
			iVar1 = (iVar1 + iVar2);
			break;
		
		case 238:
			iVar2 = func_741(unk_0x460153A63B9477BC());
			iVar1 = 400;
			iVar1 = (iVar1 + iVar2);
			break;
		
		case 249:
			iVar2 = func_741(unk_0x460153A63B9477BC());
			iVar1 = 500;
			iVar1 = (iVar1 + iVar2);
			break;
		
		case 239:
			iVar1 = 600;
			break;
		
		case 240:
			iVar1 = 700;
			break;
		
		case 241:
			iVar1 = 800;
			break;
		
		case 242:
			iVar1 = 900;
			break;
		
		case 244:
			iVar1 = 1100;
			break;
		
		case 248:
			iVar1 = 1200;
			break;
	}
	return iVar1;
}

int func_741(int iParam0)
{
	if (func_105(unk_0x460153A63B9477BC()) == 238 || func_105(unk_0x460153A63B9477BC()) == 249)
	{
		return Global_1630317[iParam0 /*595*/].f_11.f_472;
	}
	return -1;
}

int func_742(int iParam0)
{
	if (func_105(unk_0x460153A63B9477BC()) == 237 || func_105(unk_0x460153A63B9477BC()) == 250)
	{
		return Global_1630317[iParam0 /*595*/].f_11.f_471;
	}
	return -1;
}

int func_743(int iParam0)
{
	return func_744(iParam0, 150);
}

int func_744(int iParam0, int iParam1)
{
	if (func_182(iParam0) == iParam1)
	{
		return Global_1630317[iParam0 /*595*/].f_11.f_469;
	}
	return -1;
}

int func_745(int iParam0)
{
	return func_744(iParam0, 236);
}

int func_746()
{
	if (Global_1676128.f_3 != 0)
	{
		return Global_1676128.f_3;
	}
	return -1;
}

int func_747()
{
	if (Global_1676128.f_2 != 0)
	{
		return Global_1676128.f_2;
	}
	return -1;
}

int func_748(int iParam0, char* sParam1, char* sParam2, char* sParam3, int iParam4, char* sParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = func_65();
	iVar1 = func_65();
	iVar2 = func_65();
	return func_749(iParam0, sParam1, sParam2, sParam3, iParam4, iVar0, iVar1, iVar2, sParam5, iParam6, iParam7, iParam8, iParam9, iParam10, 2);
}

int func_749(var uParam0, char* sParam1, char* sParam2, char* sParam3, var uParam4, int iParam5, int iParam6, int iParam7, char* sParam8, int iParam9, var uParam10, var uParam11, var uParam12, var uParam13, int iParam14)
{
	struct<80> Var0;
	
	Var0.f_3 = -1;
	Var0.f_4 = -1;
	Var0.f_5 = -1;
	Var0.f_6 = -1;
	Var0.f_7 = -1082130432;
	Var0.f_16 = 1;
	Var0.f_71 = 1;
	Var0.f_72 = 2;
	Var0.f_79 = -1;
	func_388(uParam0, &Var0, iParam9, sParam2, sParam1);
	Var0.f_4 = uParam10;
	Var0.f_5 = uParam11;
	Var0.f_17 = iParam5;
	Var0.f_18 = iParam6;
	Var0.f_19 = iParam7;
	StringCopy(&(Var0.f_25), sParam3, 64);
	StringCopy(&(Var0.f_57), sParam8, 16);
	Var0.f_73 = uParam4;
	Var0.f_71 = uParam4;
	Var0.f_6 = uParam13;
	Var0.f_72 = uParam12;
	if (iParam14 != 2)
	{
		Var0.f_71 = iParam14;
	}
	func_232(&(Var0.f_69), 4);
	return func_351(&Var0);
}

int func_750(int iParam0)
{
	int iVar0;
	
	iVar0 = func_194(iParam0);
	if (iVar0 != -1)
	{
		return func_192(iVar0);
	}
	return 1;
}

char* func_751(int iParam0)
{
	char* sVar0;
	int iVar1;
	
	if (iParam0 == unk_0x460153A63B9477BC())
	{
		sVar0 = func_442(&(Global_1630317[iParam0 /*595*/].f_11.f_104));
		return sVar0;
	}
	if (Global_1630317[iParam0 /*595*/].f_11.f_120 != Global_1630317[unk_0x460153A63B9477BC() /*595*/].f_11.f_120)
	{
		sVar0 = func_443(iParam0, 0);
		return sVar0;
	}
	if (((func_109(iParam0, 28) || func_109(unk_0x460153A63B9477BC(), 28)) || func_446(iParam0)) && !func_445(iParam0))
	{
		return func_443(iParam0, 0);
	}
	iVar1 = func_66(iParam0);
	if (iVar1 != func_65())
	{
		if (iVar1 != unk_0x460153A63B9477BC())
		{
			if (!unk_0xC6C08C02733D02C8() && !unk_0xB454B9D1010ED3BA(0, -1, 1))
			{
				return func_443(iVar1, 0);
			}
		}
	}
	if (iVar1 != func_65())
	{
		sVar0 = func_442(&(Global_1630317[iVar1 /*595*/].f_11.f_104));
		if (unk_0x7BCC91F3C1CF24E8(sVar0))
		{
			return func_443(iVar1, 0);
		}
		else
		{
			return sVar0;
		}
	}
	return "";
}

void func_752()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (!func_917() && !func_303())
	{
		return;
	}
	if (!func_389())
	{
		return;
	}
	iVar0 = unk_0x460153A63B9477BC();
	if (func_17(unk_0x460153A63B9477BC(), 0))
	{
		iVar0 = Global_1590682[unk_0x460153A63B9477BC() /*883*/].f_747;
	}
	iVar1 = func_141(iVar0);
	if (iVar1 < 3)
	{
		return;
	}
	if (func_8(&(Local_82.f_847)))
	{
		iVar2 = (func_10() - func_766(&(Local_82.f_847), 0, 0));
		iVar3 = (func_765() - Local_82.f_115);
		func_763(iVar2);
		if (iVar2 > 30000)
		{
			func_753(iVar3, "HUNT_HUD", iVar2, 1, "GB_WORK_END");
		}
		else if (iVar2 > 0)
		{
			func_753(iVar3, "HUNT_HUD", iVar2, 6, "GB_WORK_END");
		}
		else
		{
			func_753(iVar3, "HUNT_HUD", 0, 6, "GB_WORK_END");
		}
	}
}

void func_753(int iParam0, char* sParam1, int iParam2, int iParam3, char* sParam4)
{
	char* sVar0;
	
	if (func_761(0) == 0)
	{
		return;
	}
	func_760();
	func_757(iParam0, sParam1, -1, 1, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 1, -1);
	sVar0 = "HUD_COUNTDOWN";
	if (!func_535(sParam4))
	{
		sVar0 = sParam4;
	}
	func_754(iParam2, sVar0, 0, 0, -1, 0, 3, 0, iParam3, 0, 0, 0, iParam3, 0, 0, 0, 0, -1);
}

void func_754(var uParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, var uParam8, int iParam9, int iParam10, int iParam11, var uParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17)
{
	int iVar0;
	int iVar1;
	
	iVar0 = -1;
	iVar1 = 0;
	while (iVar1 <= 9)
	{
		if (iVar0 == -1)
		{
			if (func_756(7, iVar1) == 0)
			{
				iVar0 = iVar1;
			}
		}
		iVar1++;
	}
	if (iVar0 > -1)
	{
		Global_1378744.f_1 = 1;
		func_755(7, iVar0);
		Global_1378744.f_4573[iVar0] = uParam0;
		StringCopy(&(Global_1378744.f_4573.f_11[iVar0 /*16*/]), sParam1, 64);
		Global_1378744.f_4573.f_172[iVar0] = iParam2;
		Global_1378744.f_4573.f_216[iVar0] = iParam3;
		Global_1378744.f_4573.f_183[iVar0] = iParam4;
		Global_1378744.f_4573.f_194[iVar0] = iParam5;
		Global_1378744.f_4573.f_249[iVar0] = iParam6;
		Global_1378744.f_4573.f_260[iVar0] = iParam7;
		Global_1378744.f_4573.f_205[iVar0] = uParam8;
		Global_1378744.f_4573.f_314[iVar0] = iParam9;
		Global_1378744.f_4573.f_325[iVar0] = iParam10;
		Global_1378744.f_4573.f_357[iVar0] = iParam11;
		Global_1378744.f_4573.f_238[iVar0] = uParam12;
		Global_1378744.f_4573.f_271[iVar0] = iParam13;
		Global_1378744.f_4573.f_368[iVar0] = iParam14;
		Global_1378744.f_4573.f_379[iVar0] = iParam15;
		Global_1378744.f_4573.f_390[iVar0] = iParam16;
		Global_1378744.f_4573.f_227[iVar0] = iParam17;
	}
}

void func_755(int iParam0, int iParam1)
{
	unk_0xBE20AB8238688965(&(Global_1378744.f_6304[iParam0]), iParam1);
}

bool func_756(int iParam0, int iParam1)
{
	return unk_0xCE990E643CD9D0E5(Global_1378744.f_6304[iParam0], iParam1);
}

void func_757(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, char* sParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17, int iParam18, int iParam19, int iParam20, int iParam21, int iParam22, int iParam23, int iParam24, int iParam25)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	iVar0 = -1;
	iVar1 = 0;
	while (iVar1 <= 9)
	{
		if (iVar0 == -1)
		{
			if (func_756(6, iVar1) == 0)
			{
				iVar0 = iVar1;
			}
		}
		iVar1++;
	}
	if (iVar0 > -1)
	{
		Global_1378744.f_1 = 1;
		func_755(6, iVar0);
		Global_1378744.f_3955[iVar0] = iParam0;
		StringCopy(&(Global_1378744.f_3955.f_11[iVar0 /*16*/]), sParam1, 64);
		Global_1378744.f_3955.f_183[iVar0] = iParam3;
		Global_1378744.f_3955.f_172[iVar0] = iParam2;
		Global_1378744.f_3955.f_260[iVar0] = iParam4;
		Global_1378744.f_3955.f_271[iVar0] = iParam5;
		StringCopy(&(Global_1378744.f_3955.f_282[iVar0 /*16*/]), sParam6, 64);
		Global_1378744.f_3955.f_443[iVar0] = iParam7;
		Global_1378744.f_3955.f_454[iVar0] = iParam8;
		Global_1378744.f_3955.f_497[iVar0] = iParam9;
		Global_1378744.f_3955.f_508[iVar0] = iParam10;
		Global_1378744.f_3955.f_205[iVar0] = iParam11;
		Global_1378744.f_3955.f_216[iVar0] = iParam12;
		Global_1378744.f_3955.f_227[iVar0] = iParam13;
		Global_1378744.f_3955.f_238[iVar0] = iParam14;
		Global_1378744.f_3955.f_249[iVar0] = iParam15;
		Global_1378744.f_3955.f_519[iVar0] = iParam16;
		Global_1378744.f_3955.f_530[iVar0] = iParam17;
		Global_1378744.f_3955.f_541[iVar0] = iParam18;
		Global_1378744.f_3955.f_552[iVar0] = iParam19;
		Global_1378744.f_3955.f_563[iVar0] = iParam20;
		Global_1378744.f_3955.f_574[iVar0] = iParam21;
		Global_1378744.f_3955.f_585[iVar0] = iParam22;
		Global_1378744.f_3955.f_596[iVar0] = iParam23;
		Global_1378744.f_3955.f_607[iVar0] = iParam24;
		Global_1378744.f_3955.f_194[iVar0] = iParam25;
		if (iParam15 == 5 && func_759())
		{
			Global_1378744.f_1130 = 1;
		}
		if (unk_0xF8EDFF98A9C94C74())
		{
			iVar2 = 0;
			unk_0x9DD549AAA043F83A(&iVar3, &iVar4);
			if (iVar3 == 1280 && iVar4 >= 960)
			{
				iVar2 = 1;
			}
			if (iParam0 > 99999999)
			{
				Global_1378744.f_1134 = 1;
			}
			else if (iParam0 > 9999999 || iVar2)
			{
				Global_1378744.f_1133 = 1;
			}
			else if (iParam0 > 999)
			{
				Global_1378744.f_1130 = 1;
			}
			if (func_758())
			{
				Global_1378744.f_1134 = 1;
			}
		}
	}
}

int func_758()
{
	int iVar0;
	var uVar1;
	
	if (unk_0xF8EDFF98A9C94C74())
	{
		unk_0x9DD549AAA043F83A(&iVar0, &uVar1);
		if (iVar0 <= 1024)
		{
			return 1;
		}
	}
	return 0;
}

int func_759()
{
	if (((unk_0xA2C6E70C9BCA9C34() == 8 || unk_0xA2C6E70C9BCA9C34() == 9) || unk_0xA2C6E70C9BCA9C34() == 10) || unk_0xA2C6E70C9BCA9C34() == 12)
	{
		return 1;
	}
	return 0;
}

void func_760()
{
	unk_0x4CB4237D8858ADA6(8);
	unk_0x4CB4237D8858ADA6(9);
	unk_0x4CB4237D8858ADA6(6);
	unk_0x4CB4237D8858ADA6(7);
	Global_2463796 = 1;
}

int func_761(bool bParam0)
{
	if (func_762())
	{
		return 0;
	}
	if (func_286())
	{
		return 0;
	}
	if (!bParam0)
	{
		if (func_1031(unk_0x460153A63B9477BC(), 1, 1) == 0)
		{
			return 0;
		}
	}
	return 1;
}

bool func_762()
{
	return unk_0xCE990E643CD9D0E5(Global_2359302, 12);
}

void func_763(int iParam0)
{
	if (unk_0xCE990E643CD9D0E5(iLocal_85, 8))
	{
		func_764();
		return;
	}
	if (!unk_0xCE990E643CD9D0E5(iLocal_85, 15))
	{
		if (iParam0 <= 35000)
		{
			if (unk_0x21723EF7B2FCC4CC("APT_PRE_COUNTDOWN_STOP"))
			{
				unk_0xBE20AB8238688965(&iLocal_85, 15);
				unk_0xBE20AB8238688965(&iLocal_85, 9);
				unk_0x0C0DE28672975DC3("AllowScoreAndRadio", 1);
				unk_0x96F763331D19ED14(0);
				unk_0x0C0DE28672975DC3("WantedMusicDisabled", 1);
			}
		}
	}
	if (unk_0xCE990E643CD9D0E5(iLocal_85, 9))
	{
		if (iParam0 <= 30000)
		{
			if (!unk_0xCE990E643CD9D0E5(iLocal_85, 11))
			{
				if (unk_0x1BDBFE8EFF10BC95("APT_COUNTDOWN_30S_KILL"))
				{
					unk_0xBE20AB8238688965(&iLocal_85, 11);
				}
			}
			else
			{
				unk_0xCE990E643CD9D0E5(iLocal_85, 11);
				if (!unk_0xCE990E643CD9D0E5(iLocal_85, 14))
				{
					if (unk_0x21723EF7B2FCC4CC("APT_COUNTDOWN_30S"))
					{
						unk_0xBE20AB8238688965(&iLocal_85, 14);
					}
				}
			}
			if (unk_0xCE990E643CD9D0E5(iLocal_85, 14))
			{
				if (iParam0 <= 27000)
				{
					if (!unk_0xCE990E643CD9D0E5(iLocal_85, 12))
					{
						unk_0x96F763331D19ED14(1);
						unk_0x0C0DE28672975DC3("AllowScoreAndRadio", 0);
						unk_0xBE20AB8238688965(&iLocal_85, 12);
					}
					if (iParam0 <= 500)
					{
						if (unk_0x21723EF7B2FCC4CC("APT_FADE_IN_RADIO"))
						{
							unk_0x296C8A46F264E8F7("APT_COUNTDOWN_30S_KILL");
							unk_0xD2459066EA58CE43(&iLocal_85, 9);
						}
					}
				}
			}
		}
	}
}

void func_764()
{
	if (unk_0xCE990E643CD9D0E5(iLocal_85, 8))
	{
		if (unk_0xCE990E643CD9D0E5(iLocal_85, 9))
		{
			if (!unk_0xCE990E643CD9D0E5(iLocal_85, 10))
			{
				if (unk_0xCE990E643CD9D0E5(iLocal_85, 11))
				{
					if (!unk_0xCE990E643CD9D0E5(iLocal_85, 12))
					{
						unk_0x96F763331D19ED14(1);
						unk_0x0C0DE28672975DC3("AllowScoreAndRadio", 0);
						unk_0x0C0DE28672975DC3("WantedMusicDisabled", 0);
					}
				}
				if (!unk_0xCE990E643CD9D0E5(iLocal_85, 16))
				{
					if (unk_0x21723EF7B2FCC4CC("APT_COUNTDOWN_30S_KILL"))
					{
						unk_0xBE20AB8238688965(&iLocal_85, 16);
					}
				}
				if (unk_0xCE990E643CD9D0E5(iLocal_85, 16))
				{
					if (!unk_0xCE990E643CD9D0E5(iLocal_85, 13))
					{
						if (unk_0x21723EF7B2FCC4CC("APT_FADE_IN_RADIO"))
						{
							unk_0xBE20AB8238688965(&iLocal_85, 13);
						}
					}
					if (unk_0xCE990E643CD9D0E5(iLocal_85, 13))
					{
						unk_0xBE20AB8238688965(&iLocal_85, 10);
					}
				}
			}
		}
	}
}

int func_765()
{
	return 4;
}

int func_766(var uParam0, bool bParam1, bool bParam2)
{
	if (unk_0x25DDB354A40FFCDB() && !bParam1)
	{
		if (!bParam2)
		{
			return unk_0x624736CA66E14161(unk_0x6CAAB7E78B5D978A(), *uParam0);
		}
		else
		{
			return unk_0x624736CA66E14161(unk_0x29B9AF1CB5B8175D(), *uParam0);
		}
	}
	return unk_0x624736CA66E14161(unk_0x578C4EF320340AF7(), *uParam0);
}

void func_767()
{
	int iVar0;
	struct<8> Var1;
	int iVar2;
	int iVar3;
	int iVar4;
	bool bVar5;
	
	iVar2 = unk_0x460153A63B9477BC();
	iVar3 = unk_0x59E2AD1A8ACEDA31();
	if (func_17(unk_0x460153A63B9477BC(), 0))
	{
		iVar3 = func_304();
		iVar2 = Global_1590682[unk_0x460153A63B9477BC() /*883*/].f_747;
	}
	iVar4 = func_141(iVar2);
	if (!func_17(unk_0x460153A63B9477BC(), 0))
	{
		if (!func_389())
		{
			if (func_784("HUNT_OBJ"))
			{
				func_848();
			}
			if (func_784("HUNT_OBJ1L"))
			{
				func_848();
			}
			if (func_784("HUNT_TOBJ"))
			{
				func_848();
			}
			if (func_784("HUNT_DOBJ"))
			{
				func_848();
			}
			if (func_784("HUNT_DOBJ1L"))
			{
				func_848();
			}
			return;
		}
	}
	else if (!unk_0xCE990E643CD9D0E5(Local_83[iVar3 /*14*/].f_1, 6))
	{
		func_848();
		return;
	}
	if (iVar4 < 3)
	{
		if (func_784("HUNT_OBJ"))
		{
			func_848();
		}
		if (func_784("HUNT_OBJ1L"))
		{
			func_848();
		}
		if (func_784("HUNT_TOBJ"))
		{
			func_848();
		}
		if (func_784("HUNT_DOBJ"))
		{
			func_848();
		}
		if (func_784("HUNT_DOBJ1L"))
		{
			func_848();
		}
		return;
	}
	bVar5 = func_783() == true;
	if (iVar3 == Local_82.f_118)
	{
		if (!bVar5)
		{
			if (!func_784("HUNT_OBJ"))
			{
				func_780("HUNT_OBJ", 0);
			}
		}
		else if (!func_784("HUNT_OBJ1L"))
		{
			func_780("HUNT_OBJ1L", 0);
		}
	}
	else if (func_918() == Local_82.f_118)
	{
		if (!bVar5)
		{
			if (!func_784("HUNT_OBJ"))
			{
				func_780("HUNT_OBJ", 0);
			}
		}
		else if (!func_784("HUNT_OBJ1L"))
		{
			func_780("HUNT_OBJ1L", 0);
		}
	}
	else if (func_303())
	{
		if (Local_82.f_119 > -1)
		{
			if (!bVar5)
			{
				if (!func_784("HUNT_DOBJ"))
				{
					StringCopy(&Var1, func_751(unk_0xF1110FE23C67293A(Local_82.f_119)), 64);
					iVar0 = func_750(unk_0xF1110FE23C67293A(Local_82.f_119));
					func_768("HUNT_DOBJ", &Var1, iVar0, 0);
				}
			}
			else if (!func_784("HUNT_DOBJ1L"))
			{
				StringCopy(&Var1, func_751(unk_0xF1110FE23C67293A(Local_82.f_119)), 64);
				iVar0 = func_750(unk_0xF1110FE23C67293A(Local_82.f_119));
				func_768("HUNT_DOBJ1L", &Var1, iVar0, 0);
			}
		}
	}
}

void func_768(char* sParam0, char* sParam1, int iParam2, bool bParam3)
{
	if (func_769(sParam0, sParam1, bParam3, iParam2))
	{
		Global_1312603 = 16;
		Global_1312603.f_56 = iParam2;
	}
}

int func_769(char* sParam0, char* sParam1, bool bParam2, var uParam3)
{
	if (unk_0x7BCC91F3C1CF24E8(sParam0))
	{
		return 0;
	}
	if (unk_0xA221A4BC051BFCCE(sParam0) > 23)
	{
		return 0;
	}
	if (unk_0x7BCC91F3C1CF24E8(sParam1))
	{
		return 0;
	}
	if (func_779(sParam0, sParam1) && Global_1312603.f_56 == Global_1312603.f_58)
	{
		return 0;
	}
	func_773();
	Global_1312603 = 3;
	StringCopy(&(Global_1312603.f_1), unk_0x6C5C6B207AA78253(), 32);
	Global_1312603.f_9 = unk_0x856D5567211886A2(&(Global_1312603.f_1));
	StringCopy(&(Global_1312603.f_12), sParam0, 16);
	StringCopy(&(Global_1312603.f_16), sParam1, 64);
	Global_1312603.f_58 = uParam3;
	Global_1312603.f_56 = uParam3;
	func_772();
	func_771(bParam2);
	func_770();
	return 1;
}

void func_770()
{
	unk_0xBE20AB8238688965(&(Global_1312603.f_59), 1);
}

void func_771(bool bParam0)
{
	if (bParam0)
	{
		unk_0xBE20AB8238688965(&(Global_1312603.f_59), 0);
		return;
	}
	unk_0xD2459066EA58CE43(&(Global_1312603.f_59), 0);
}

void func_772()
{
	Global_1312603.f_10 = unk_0x8C358101651A3F7C(unk_0x6CAAB7E78B5D978A(), 86400000);
	Global_1312603.f_11 = unk_0x6CAAB7E78B5D978A();
}

void func_773()
{
	func_775();
	func_774(0);
}

void func_774(bool bParam0)
{
	bool bVar0;
	
	bVar0 = unk_0x25DDB354A40FFCDB();
	Global_1312603 = 20;
	StringCopy(&(Global_1312603.f_1), "", 32);
	Global_1312603.f_9 = 0;
	if (bVar0)
	{
		Global_1312603.f_10 = unk_0x6CAAB7E78B5D978A();
		Global_1312603.f_11 = unk_0x6CAAB7E78B5D978A();
	}
	StringCopy(&(Global_1312603.f_12), "", 16);
	StringCopy(&(Global_1312603.f_16), "", 64);
	StringCopy(&(Global_1312603.f_32), "", 64);
	Global_1312603.f_52 = 0;
	Global_1312603.f_53 = 0;
	Global_1312603.f_54 = 0;
	Global_1312603.f_55 = -1;
	Global_1312603.f_56 = 0;
	Global_1312603.f_59 = 0;
	if (bParam0)
	{
		return;
	}
}

void func_775()
{
	if (!func_778())
	{
	}
	if (func_777())
	{
		unk_0x6BF33E036B49E0DD(&(Global_1312603.f_12));
		func_776();
		unk_0x9F579D40FBAC4233();
	}
}

void func_776()
{
	switch (Global_1312603)
	{
		case 20:
			return;
		
		case 0:
			return;
		
		case 1:
			unk_0x42710E9E08FA375A(Global_1312603.f_52);
			return;
		
		case 2:
			unk_0x42710E9E08FA375A(Global_1312603.f_52);
			unk_0x42710E9E08FA375A(Global_1312603.f_53);
			return;
		
		case 3:
			unk_0x6A826E35A3096ED0(&(Global_1312603.f_16));
			return;
		
		case 4:
			unk_0x6A826E35A3096ED0(&(Global_1312603.f_16));
			unk_0x6A826E35A3096ED0(&(Global_1312603.f_32));
			return;
		
		case 5:
			unk_0x9EFD301E3BE8324E(&(Global_1312603.f_16));
			return;
		
		case 6:
			unk_0x7006FC1051C85FCA(Global_1312603.f_56);
			unk_0x9EFD301E3BE8324E(&(Global_1312603.f_16));
			return;
		
		case 7:
			unk_0x6A826E35A3096ED0(&(Global_1312603.f_16));
			return;
		
		case 8:
			unk_0x7006FC1051C85FCA(Global_1312603.f_56);
			unk_0x6A826E35A3096ED0(&(Global_1312603.f_16));
			return;
		
		case 9:
			unk_0x05CA0125610AB2F4(&(Global_1312603.f_16));
			return;
		
		case 10:
			unk_0x9EFD301E3BE8324E(&(Global_1312603.f_16));
			unk_0x9EFD301E3BE8324E(&(Global_1312603.f_32));
			return;
		
		case 12:
			unk_0x9EFD301E3BE8324E(&(Global_1312603.f_16));
			unk_0x6A826E35A3096ED0(&(Global_1312603.f_32));
			return;
		
		case 13:
			unk_0x7006FC1051C85FCA(Global_1312603.f_56);
			unk_0x6A826E35A3096ED0(&(Global_1312603.f_16));
			unk_0x7006FC1051C85FCA(Global_1312603.f_57);
			unk_0x6A826E35A3096ED0(&(Global_1312603.f_32));
			return;
		
		case 11:
			unk_0x05CA0125610AB2F4(&(Global_1312603.f_16));
			return;
		
		case 14:
			unk_0x7006FC1051C85FCA(Global_1312603.f_56);
			unk_0x9EFD301E3BE8324E(&(Global_1312603.f_16));
			unk_0x7006FC1051C85FCA(Global_1312603.f_56);
			unk_0x6A826E35A3096ED0(&(Global_1312603.f_32));
			return;
		
		case 15:
			unk_0x7006FC1051C85FCA(Global_1312603.f_56);
			unk_0x9EFD301E3BE8324E(&(Global_1312603.f_16));
			unk_0x7006FC1051C85FCA(Global_1312603.f_57);
			unk_0x6A826E35A3096ED0(&(Global_1312603.f_32));
			return;
		
		case 17:
			unk_0x9EFD301E3BE8324E(&(Global_1312603.f_16));
			unk_0x9EFD301E3BE8324E(&(Global_1312603.f_32));
			unk_0x7006FC1051C85FCA(Global_1312603.f_56);
			unk_0x6A826E35A3096ED0(&(Global_1312603.f_48));
			return;
		
		case 16:
			unk_0x7006FC1051C85FCA(Global_1312603.f_56);
			unk_0x9EFD301E3BE8324E(&(Global_1312603.f_16));
			return;
		
		case 19:
			unk_0x7006FC1051C85FCA(Global_1312603.f_56);
			unk_0x6A826E35A3096ED0(&(Global_1312603.f_16));
			return;
		
		case 18:
			unk_0x9EFD301E3BE8324E(&(Global_1312603.f_16));
			unk_0x7006FC1051C85FCA(Global_1312603.f_56);
			unk_0x6A826E35A3096ED0(&(Global_1312603.f_48));
			unk_0x9EFD301E3BE8324E(&(Global_1312603.f_32));
			return;
		
		default:
	}
}

int func_777()
{
	if (Global_1312603 == 20)
	{
		return 0;
	}
	return 1;
}

int func_778()
{
	if (!func_777())
	{
		return 0;
	}
	unk_0xCD7691F7F3015C57(&(Global_1312603.f_12));
	func_776();
	return unk_0x5E0AC8AED85CE7CB();
}

bool func_779(char* sParam0, char* sParam1)
{
	if (!func_777())
	{
		return 0;
	}
	if (unk_0x7BCC91F3C1CF24E8(sParam0))
	{
		return 0;
	}
	if (unk_0x7BCC91F3C1CF24E8(sParam1))
	{
		return 0;
	}
	if (!unk_0x856D5567211886A2(sParam0) == unk_0x856D5567211886A2(&(Global_1312603.f_12)))
	{
		return 0;
	}
	return unk_0x856D5567211886A2(sParam1) == unk_0x856D5567211886A2(&(Global_1312603.f_16));
}

void func_780(char* sParam0, bool bParam1)
{
	if (unk_0x7BCC91F3C1CF24E8(sParam0))
	{
		return;
	}
	if (unk_0xA221A4BC051BFCCE(sParam0) > 23)
	{
		return;
	}
	if (func_781(sParam0))
	{
		return;
	}
	func_773();
	Global_1312603 = 0;
	StringCopy(&(Global_1312603.f_1), unk_0x6C5C6B207AA78253(), 32);
	Global_1312603.f_9 = unk_0x856D5567211886A2(&(Global_1312603.f_1));
	StringCopy(&(Global_1312603.f_12), sParam0, 16);
	func_772();
	func_771(bParam1);
	func_770();
}

bool func_781(char* sParam0)
{
	if (!func_777())
	{
		return 0;
	}
	if (Global_1312603 == 11)
	{
		return func_782(sParam0);
	}
	if (unk_0x7BCC91F3C1CF24E8(sParam0))
	{
		return 0;
	}
	return unk_0x856D5567211886A2(sParam0) == unk_0x856D5567211886A2(&(Global_1312603.f_12));
}

bool func_782(char* sParam0)
{
	if (!func_777())
	{
		return 0;
	}
	if (unk_0x7BCC91F3C1CF24E8(sParam0))
	{
		return 0;
	}
	return unk_0x856D5567211886A2(sParam0) == unk_0x856D5567211886A2(&(Global_1312603.f_16));
}

int func_783()
{
	return (4 - Local_82.f_115);
}

int func_784(char* sParam0)
{
	if (unk_0x7BCC91F3C1CF24E8(sParam0))
	{
		return 0;
	}
	if (!func_777())
	{
		return 0;
	}
	if (Global_1312603 == 11)
	{
		if (unk_0xA221A4BC051BFCCE(sParam0) > 63)
		{
			return 0;
		}
	}
	else if (unk_0xA221A4BC051BFCCE(sParam0) > 23)
	{
		return 0;
	}
	return func_781(sParam0);
}

void func_785()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!func_917() && !func_303())
	{
		return;
	}
	if (!func_389())
	{
		return;
	}
	iVar1 = func_65();
	iVar2 = -1;
	if (!func_17(unk_0x460153A63B9477BC(), 0))
	{
		iVar1 = unk_0x460153A63B9477BC();
		iVar2 = unk_0x59E2AD1A8ACEDA31();
	}
	else
	{
		iVar2 = func_304();
		iVar1 = Global_1590682[unk_0x460153A63B9477BC() /*883*/].f_747;
	}
	if (iVar2 == -1)
	{
		return;
	}
	if (!unk_0xCE990E643CD9D0E5(iLocal_84, 1))
	{
		iVar0 = func_141(iVar1);
		if (iVar0 >= 2)
		{
			if (iVar2 == Local_82.f_118 || func_918() == Local_82.f_118)
			{
				if (func_827(82, "HUNT_TXT1", 2, 0, 0, 0, 0, 1, 0, 1))
				{
					func_350(86, "BIGM_HUNTN", "BIGM_HUNTBD", 1, -1, 2, 1, 0);
					if (iVar2 == unk_0x59E2AD1A8ACEDA31())
					{
						func_826(1);
						func_786(-1, 0, 0, -1, 0, 0);
					}
				}
			}
			else
			{
				if (iVar2 == unk_0x59E2AD1A8ACEDA31())
				{
					func_786(-1, 0, 0, -1, 0, 0);
				}
				func_350(86, "BIGM_HUNTN", "BIGM_HUNTPR", 1, -1, 2, 1, 0);
			}
		}
		unk_0xBE20AB8238688965(&iLocal_84, 1);
	}
}

void func_786(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4, bool bParam5)
{
	int iVar0;
	var uVar1;
	int iVar2;
	int iVar3;
	
	if (bParam5)
	{
		iVar0 = func_182(unk_0x460153A63B9477BC());
		Global_1676407 = iVar0;
		Global_1676407.f_1 = iParam0;
		if (func_495() != func_65())
		{
			Global_1676407.f_2 = func_648(func_495());
			Global_1676407.f_3 = func_647(func_495());
		}
		if (func_256() != func_65())
		{
			func_494(func_256(), &(Global_1676407.f_2), &(Global_1676407.f_3));
		}
		Global_1676407.f_7 = unk_0x5A002C4821A13338();
		Global_1676407.f_28 = func_736(unk_0x460153A63B9477BC());
		Global_1676407.f_13 = 0;
		Global_1676407.f_14 = 0;
		if (func_190(unk_0x460153A63B9477BC(), 1))
		{
			Global_1676407.f_23 = func_739(func_253(1));
		}
	}
	else
	{
		iVar0 = func_105(unk_0x460153A63B9477BC());
	}
	if (iParam2 || func_322(iVar0))
	{
		if (iParam3 != -1 && iParam2)
		{
			iVar0 = iParam3;
		}
		Global_1676146 = iVar0;
		if (func_138(iVar0))
		{
			Global_1676146.f_1 = 4;
		}
		else if (func_420(iVar0))
		{
			Global_1676146.f_1 = 5;
		}
		else if (func_221(iVar0, 0))
		{
			Global_1676146.f_1 = 2;
			if (func_457(iVar0))
			{
				Global_1676146.f_1 = 3;
			}
		}
		else
		{
			Global_1676146.f_1 = 1;
		}
		if (func_495() != func_65())
		{
			Global_1676146.f_4 = func_648(func_495());
			Global_1676146.f_5 = func_647(func_495());
		}
		if (func_256() != func_65())
		{
			func_494(func_256(), &(Global_1676146.f_6), &(Global_1676146.f_7));
		}
		Global_1676146.f_9 = unk_0x5A002C4821A13338();
		if (iVar0 == 148 || iVar0 == 179)
		{
			Global_1676146.f_27 = 1;
			Global_1676146.f_28 = 1;
		}
		if (iParam0 != -1)
		{
			Global_1676146.f_26 = iParam0;
		}
		if (iParam1 != 0)
		{
			Global_1676146.f_40 = func_489(iParam1);
			Global_1676146.f_41 = func_825();
			Global_1676146.f_42 = func_599(unk_0x460153A63B9477BC(), iParam1);
			Global_1676146.f_44 = func_729(unk_0x460153A63B9477BC(), iParam1);
		}
		if (!func_476() || iVar0 != 192)
		{
			Global_1676146.f_53 = 0;
		}
	}
	else if (func_418(iVar0))
	{
		if (iVar0 == 225 || iVar0 == 226)
		{
			Global_1676263 = iParam0 + 1;
		}
		else if (iVar0 == 227)
		{
			Global_1676263 = iParam0 + 1;
		}
		else
		{
			Global_1676263 = func_824(unk_0x460153A63B9477BC());
		}
		switch (iVar0)
		{
			case 225:
				if (func_454(unk_0x460153A63B9477BC()) == 0)
				{
					Global_1676263.f_1 = 0;
				}
				else
				{
					Global_1676263.f_1 = 1;
				}
				break;
			
			case 226:
				Global_1676263.f_1 = 2;
				break;
			
			case 227:
				Global_1676263.f_1 = 3;
				break;
		}
		Global_1676263.f_21 = 1;
		Global_1676263.f_22 = 1;
		if (func_495() != func_65())
		{
			Global_1676263.f_4 = func_648(func_495());
			Global_1676263.f_5 = func_647(func_495());
		}
		if (func_256() != func_65())
		{
			func_494(func_256(), &(Global_1676263.f_4), &(Global_1676263.f_5));
		}
		Global_1676263.f_8 = unk_0x5A002C4821A13338();
		if (iParam0 != -1)
		{
			Global_1676263.f_20 = iParam0;
		}
	}
	else if (func_327(iVar0))
	{
		if (iParam3 != -1 && iParam2)
		{
		}
		Global_1676200 = iVar0;
		Global_1676146.f_1 = 1;
		if (func_495() != func_65())
		{
			Global_1676200.f_4 = func_648(func_495());
			Global_1676200.f_5 = func_647(func_495());
		}
		if (func_256() != func_65())
		{
			func_494(func_256(), &(Global_1676200.f_6), &(Global_1676200.f_7));
		}
		Global_1676200.f_9 = unk_0x5A002C4821A13338();
		if (iParam0 != -1)
		{
			Global_1676200.f_21 = iParam0;
		}
	}
	else if (func_416(iVar0))
	{
		Global_1676307 = iVar0;
		Global_1676307.f_1 = iParam0;
		Global_1676307.f_21 = 1;
		Global_1676307.f_22 = 1;
		if (func_495() != func_65())
		{
			Global_1676307.f_4 = func_648(func_495());
			Global_1676307.f_5 = func_647(func_495());
		}
		if (func_256() != func_65())
		{
			func_494(func_256(), &(Global_1676307.f_4), &(Global_1676307.f_5));
		}
		Global_1676307.f_8 = unk_0x5A002C4821A13338();
		if (iParam0 != -1)
		{
			Global_1676307.f_20 = iParam0;
		}
		Global_1676307.f_27 = func_722(func_19(), 5);
		Global_1676307.f_28 = func_739(func_823(unk_0x460153A63B9477BC()));
		Global_1676307.f_29 = func_462(6108, -1, 0);
		Global_1676307.f_30 = func_462(6104, -1, 0);
		Global_1676307.f_31 = func_462(6105, -1, 0);
		Global_1676307.f_32 = func_462(6107, -1, 0);
		Global_1676307.f_33 = func_462(6106, -1, 0);
		Global_1676307.f_34 = func_462(6109, -1, 0);
		Global_1676307.f_7 = func_738();
		Global_1676307.f_51 = func_739(bParam4);
	}
	else if (func_414(iVar0))
	{
		Global_1676361 = iVar0;
		Global_1676361.f_1 = iParam0;
		Global_1676361.f_21 = 1;
		Global_1676361.f_22 = 1;
		if (func_495() != func_65())
		{
			Global_1676361.f_4 = func_648(func_495());
			Global_1676361.f_5 = func_647(func_495());
		}
		if (func_256() != func_65())
		{
			func_494(func_256(), &(Global_1676361.f_4), &(Global_1676361.f_5));
		}
		Global_1676361.f_8 = unk_0x5A002C4821A13338();
		if (iParam0 != -1)
		{
			Global_1676361.f_20 = iParam0;
		}
		Global_1676361.f_24 = func_462(6158, -1, 0);
		Global_1676361.f_25 = func_462(6163, -1, 0);
		Global_1676361.f_26 = func_462(6164, -1, 0);
		Global_1676361.f_27 = func_739((((func_687() || func_686()) || func_685()) || func_684(unk_0x460153A63B9477BC())));
		Global_1676361.f_28 = func_462(6165, -1, 0);
		Global_1676361.f_29 = func_739(func_683());
		Global_1676361.f_31 = 0;
		Global_1676361.f_30 = 0;
		Global_1676361.f_32 = 0;
		Global_1676361.f_33 = 0;
		Global_1676361.f_34 = 0;
		Global_1676361.f_16 = 0;
		Global_1676361.f_7 = func_738();
	}
	else if (((((((((iVar0 == 250 || iVar0 == 238) || iVar0 == 242) || iVar0 == 244) || iVar0 == 248) || iVar0 == 241) || iVar0 == 239) || iVar0 == 240) || iVar0 == 249) || (iVar0 == 237 && func_452(func_453(unk_0x460153A63B9477BC()))))
	{
		Global_1676497 = iVar0;
		Global_1676497.f_1 = iParam0;
		Global_1676497.f_21 = 1;
		Global_1676497.f_22 = 1;
		Global_1676497.f_7 = func_738();
		if (func_495() != func_65())
		{
			Global_1676497.f_4 = func_648(func_495());
			Global_1676497.f_5 = func_647(func_495());
		}
		if (func_256() != func_65())
		{
			func_494(func_256(), &(Global_1676497.f_4), &(Global_1676497.f_5));
		}
		if (func_495() != -1)
		{
			Global_1676497.f_17 = func_680(func_495());
		}
		Global_1676497.f_8 = unk_0x5A002C4821A13338();
		Global_1676497.f_28 = func_736(unk_0x460153A63B9477BC());
		Global_1676497.f_16 = 0;
		Global_1676497.f_24 = 0;
		Global_1676497.f_23 = 0;
		if (func_190(unk_0x460153A63B9477BC(), 1))
		{
			Global_1676497.f_33 = func_739(func_253(1));
		}
	}
	else if (iVar0 == 237)
	{
		Global_1676443 = iVar0;
		Global_1676443.f_1 = iParam0;
		Global_1676443.f_21 = 1;
		Global_1676443.f_22 = 1;
		Global_1676443.f_7 = func_738();
		Global_1676443.f_24 = 0;
		Global_1676443.f_23 = 0;
		Global_1676443.f_16 = 0;
		if (func_495() != func_65())
		{
			Global_1676443.f_4 = func_648(func_495());
			Global_1676443.f_5 = func_647(func_495());
		}
		Global_1676443.f_28 = func_736(unk_0x460153A63B9477BC());
		if (Global_1676443.f_28)
		{
			Global_1676443.f_29 = func_674(unk_0x460153A63B9477BC());
		}
		else
		{
			Global_1676443.f_29 = 0;
		}
		Global_1676443.f_30 = func_658(unk_0x460153A63B9477BC(), 4, -1);
		Global_1676443.f_31 = func_677(unk_0x460153A63B9477BC());
		Global_1676443.f_32 = func_739(func_657(unk_0x460153A63B9477BC()));
		Global_1676443.f_33 = func_739(func_656(unk_0x460153A63B9477BC()));
		Global_1676443.f_34 = func_739(func_655(unk_0x460153A63B9477BC()));
		Global_1676443.f_35 = func_739(func_654(unk_0x460153A63B9477BC()));
		Global_1676443.f_36 = func_653(unk_0x460153A63B9477BC());
		Global_1676443.f_37 = func_652(unk_0x460153A63B9477BC());
		Global_1676443.f_39 = func_651(unk_0x460153A63B9477BC());
		if (func_190(unk_0x460153A63B9477BC(), 1))
		{
			Global_1676443.f_41 = func_739(func_253(1));
		}
		if (func_256() != func_65())
		{
			func_494(func_256(), &(Global_1676443.f_4), &(Global_1676443.f_5));
		}
		Global_1676443.f_8 = unk_0x5A002C4821A13338();
		Global_1676443.f_28 = func_736(unk_0x460153A63B9477BC());
	}
	else if (func_450(iVar0))
	{
		Global_1676581 = iVar0;
		Global_1676581.f_1 = func_454(unk_0x460153A63B9477BC());
		Global_1676581.f_2 = func_747();
		Global_1676581.f_3 = func_746();
		Global_1676581.f_4 = func_648(func_495());
		Global_1676581.f_5 = func_647(func_495());
		Global_1676581.f_7 = func_738();
		Global_1676581.f_8 = unk_0x5A002C4821A13338();
		if (func_495() != -1)
		{
			Global_1676581.f_17 = func_680(func_495());
		}
		Global_1676581.f_21 = 1;
		Global_1676581.f_22 = 1;
		Global_1676581.f_25 = iParam0;
		Global_1676581.f_27 = func_739(func_645(unk_0x460153A63B9477BC()));
		Global_1676581.f_28 = func_641(21, -1);
	}
	else if (func_407(iVar0))
	{
		Global_1676656 = Global_786547.f_1;
		Global_1676656.f_2 = Global_786547;
		Global_1676656.f_6 = func_648(func_495());
		Global_1676656.f_7 = func_647(func_495());
		if (func_190(unk_0x460153A63B9477BC(), 1))
		{
			Global_1676656.f_8 = func_739(func_253(1));
		}
		if (func_495() != -1)
		{
			Global_1676656.f_9 = func_680(func_495());
		}
		Global_1676656.f_10 = func_738();
		Global_1676656.f_19 = 1;
		Global_1676656.f_20 = 1;
		Global_1676656.f_21 = 0;
		Global_1676656.f_22 = 0;
		Global_1676656.f_23 = 0;
		Global_1703843 = unk_0x5A002C4821A13338();
	}
	else if (func_406(iVar0))
	{
		Global_1676743 = Global_786547.f_1;
		Global_1676743.f_3 = Global_786547;
		Global_1676743.f_6 = func_648(func_495());
		Global_1676743.f_7 = func_647(func_495());
		if (func_190(unk_0x460153A63B9477BC(), 1))
		{
			Global_1676743.f_8 = func_739(func_253(1));
		}
		if (func_495() != -1)
		{
			Global_1676743.f_9 = func_680(func_495());
		}
		Global_1676743.f_10 = func_738();
		Global_1676743.f_19 = 1;
		Global_1676743.f_20 = 1;
		Global_1676743.f_21 = 0;
		Global_1676743.f_22 = 0;
		Global_1676743.f_23 = 0;
		Global_1676743.f_26 = func_806(1);
		Global_1676743.f_34 = func_806(0);
		Global_1676743.f_15 = !func_76(unk_0x460153A63B9477BC(), func_256(), 1);
	}
	else if (func_633(iVar0))
	{
		Global_1676855 = iParam0;
		Global_1676855.f_1 = iVar0;
		Global_1676855.f_3 = func_648(func_495());
		Global_1676855.f_4 = func_647(func_495());
		Global_1676855.f_5 = func_739(func_253(1));
		Global_1676855.f_6 = func_738();
		Global_1676855.f_7 = func_680(func_495());
		Global_1676855.f_8 = 0;
	}
	else
	{
		if (func_495() != func_65())
		{
			Global_1676128 = func_648(func_495());
			Global_1676128.f_1 = func_647(func_495());
		}
		Global_1676128.f_5 = unk_0x5A002C4821A13338();
		Global_1676128.f_13 = func_805();
		Global_1676128.f_15 = 0;
		if (func_493(1))
		{
			if (func_256() == func_495())
			{
				Global_1676128.f_15 = 1;
			}
		}
		if (func_804())
		{
			Global_1676263.f_28 = 1;
		}
		if (((((func_803() || func_802()) || func_801()) || func_800()) || func_799()) || func_798(unk_0x460153A63B9477BC()))
		{
			Global_1676263.f_30 = 1;
		}
		if (func_796(func_797(joaat("trailersmall2"))))
		{
			Global_1676263.f_32 = 1;
		}
		if (func_790(func_795(joaat("caddy"))))
		{
			Global_1676263.f_31 = 1;
		}
		if (func_721(unk_0x460153A63B9477BC()) || func_720(unk_0x460153A63B9477BC()))
		{
			Global_1676263.f_29 = 1;
		}
		if (func_717(unk_0x460153A63B9477BC()))
		{
			Global_1676263.f_33 = 1;
			Global_1676263.f_34 = 1;
		}
		if (func_718(unk_0x460153A63B9477BC()))
		{
			Global_1676263.f_36 = 1;
		}
		if (func_715(0, unk_0x460153A63B9477BC()) == 1)
		{
			Global_1676263.f_35 = 1;
		}
		if (func_789(unk_0x460153A63B9477BC(), 3, &uVar1))
		{
			Global_1676263.f_37 = 1;
		}
		if (func_789(unk_0x460153A63B9477BC(), 7, &uVar1))
		{
			Global_1676263.f_38 = 1;
		}
		if (func_788(unk_0x460153A63B9477BC()))
		{
			iVar2 = 0;
			while (iVar2 < 6)
			{
				iVar3 = func_787(unk_0x460153A63B9477BC(), iVar2);
				if (func_596(unk_0x460153A63B9477BC(), iVar3, 0))
				{
					Global_1676263.f_39 = 1;
				}
				if (func_596(unk_0x460153A63B9477BC(), iVar3, 2))
				{
					Global_1676263.f_40 = 1;
				}
				if (func_596(unk_0x460153A63B9477BC(), iVar3, 1))
				{
					Global_1676263.f_41 = 1;
				}
				iVar2++;
			}
		}
	}
}

int func_787(int iParam0, int iParam1)
{
	var uVar0;
	
	if (iParam0 == func_65())
	{
		return 0;
	}
	if (iParam1 < 0 || iParam1 >= 6)
	{
		return 0;
	}
	if (func_588(Global_1590682[iParam0 /*883*/].f_274.f_183[iParam1 /*12*/]))
	{
		uVar0 = Global_1590682[iParam0 /*883*/].f_274.f_183[iParam1 /*12*/];
	}
	return uVar0;
}

int func_788(int iParam0)
{
	int iVar0;
	
	if (iParam0 == func_65())
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 <= 5)
	{
		if (Global_1590682[iParam0 /*883*/].f_274.f_183[iVar0 /*12*/] != 0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_789(int iParam0, int iParam1, var uParam2)
{
	int iVar0;
	
	if (iParam0 != func_65())
	{
		iVar0 = 0;
		while (iVar0 < 3)
		{
			if (iParam1 == func_715(iVar0, iParam0))
			{
				*uParam2 = iVar0;
				return 1;
			}
			iVar0++;
		}
	}
	return 0;
}

int func_790(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (func_641(11, -1) == 0)
	{
		return 0;
	}
	if (iParam0 != -1)
	{
		iVar0 = -1;
		iVar1 = (iParam0 + func_701(11));
		func_700(iVar1, &iVar0, 1);
		iVar2 = func_641(func_792(iVar1), -1);
		if (iVar2 > 0)
		{
		}
		else if (iVar0 >= 0)
		{
		}
		if (iVar0 >= 0)
		{
			iVar3 = func_462(func_791(4, iVar0), -1, 0);
			if (iVar2 > 0)
			{
			}
			if (iVar3 != 0)
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_791(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 1:
			switch (iParam1)
			{
				case 0:
					return 1629;
				
				case 1:
					return 1636;
				
				case 2:
					return 1643;
				
				case 3:
					return 1650;
				
				case 4:
					return 1657;
				
				case 5:
					return 1664;
				
				case 6:
					return 1671;
				
				case 7:
					return 1678;
				
				case 8:
					return 1685;
				
				case 9:
					return 1692;
				
				case 10:
					return 1699;
				
				case 11:
					return 1705;
				
				case 12:
					return 1711;
				
				case 13:
					return 1717;
				
				case 14:
					return 1796;
				
				case 15:
					return 1803;
				
				case 16:
					return 1810;
				
				case 17:
					return 1817;
				
				case 18:
					return 1824;
				
				case 19:
					return 1831;
				
				case 20:
					return 1838;
				
				case 21:
					return 1845;
				
				case 22:
					return 1852;
				
				case 23:
					return 1859;
				
				case 24:
					return 1865;
				
				case 25:
					return 1871;
				
				case 26:
					return 2166;
				
				case 27:
					return 2173;
				
				case 28:
					return 2180;
				
				case 29:
					return 2187;
				
				case 30:
					return 2194;
				
				case 31:
					return 2201;
				
				case 32:
					return 2208;
				
				case 33:
					return 2215;
				
				case 34:
					return 2222;
				
				case 35:
					return 2229;
				
				case 36:
					return 2236;
				
				case 37:
					return 2242;
				
				case 38:
					return 2248;
				
				case 39:
					return 2829;
				
				case 40:
					return 2836;
				
				case 41:
					return 2843;
				
				case 42:
					return 2850;
				
				case 43:
					return 2857;
				
				case 44:
					return 2864;
				
				case 45:
					return 2871;
				
				case 46:
					return 2878;
				
				case 47:
					return 2885;
				
				case 48:
					return 2892;
				
				case 49:
					return 2899;
				
				case 50:
					return 2905;
				
				case 51:
					return 2911;
				
				case 52:
					return 2953;
				
				case 53:
					return 2960;
				
				case 54:
					return 2967;
				
				case 55:
					return 2974;
				
				case 56:
					return 2981;
				
				case 57:
					return 2988;
				
				case 58:
					return 2995;
				
				case 59:
					return 3002;
				
				case 60:
					return 3009;
				
				case 61:
					return 3016;
				
				case 62:
					return 3023;
				
				case 63:
					return 3029;
				
				case 64:
					return 3035;
				
				case 65:
					return 3236;
				
				case 66:
					return 3244;
				
				case 67:
					return 3252;
				
				case 68:
					return 3260;
				
				case 69:
					return 3268;
				
				case 70:
					return 3276;
				
				case 71:
					return 3284;
				
				case 72:
					return 3292;
				
				case 73:
					return 3300;
				
				case 74:
					return 3308;
				
				case 75:
					return 3316;
				
				case 76:
					return 3324;
				
				case 77:
					return 3332;
				
				case 78:
					return 3340;
				
				case joaat("MPSV_LP0_31"):
					return 3348;
				
				case 80:
					return 3356;
				
				case 81:
					return 3364;
				
				case 82:
					return 3372;
				
				case 83:
					return 3380;
				
				case 84:
					return 3388;
				
				case 85:
					return 3396;
				
				case 86:
					return 3403;
				
				case 87:
					return 3410;
				
				default:
			}
			switch (iParam1)
			{
				case 88:
					return 4032;
				
				case 89:
					return 4040;
				
				case 90:
					return 4048;
				
				case 91:
					return 4056;
				
				case 92:
					return 4064;
				
				case 93:
					return 4072;
				
				case 94:
					return 4080;
				
				case 95:
					return 4088;
				
				case 96:
					return 4096;
				
				case 97:
					return 4104;
				
				case 98:
					return 4112;
				
				case 99:
					return 4120;
				
				case 100:
					return 4128;
				
				case 101:
					return 4136;
				
				case 102:
					return 4144;
				
				case 103:
					return 4152;
				
				case 104:
					return 4160;
				
				case 105:
					return 4168;
				
				case 106:
					return 4176;
				
				case 107:
					return 4184;
				
				case 108:
					return 4192;
				
				case 109:
					return 4200;
				
				case 110:
					return 4208;
				
				case 111:
					return 4216;
				
				case 112:
					return 4224;
				
				case 113:
					return 4232;
				
				case 114:
					return 4240;
				
				case 115:
					return 4248;
				
				case 116:
					return 4256;
				
				case 117:
					return 4264;
				
				case 118:
					return 4272;
				
				case 119:
					return 4280;
				
				case 120:
					return 4288;
				
				case 121:
					return 4296;
				
				case 122:
					return 4304;
				
				case 123:
					return 4312;
				
				case 124:
					return 4320;
				
				case 125:
					return 4328;
				
				case 126:
					return 4336;
				
				case 127:
					return 4344;
				
				case 128:
					return 4352;
				
				case 129:
					return 4360;
				
				case 130:
					return 4368;
				
				case 131:
					return 4376;
				
				case 132:
					return 4384;
				
				case 133:
					return 4392;
				
				case 134:
					return 4400;
				
				case 135:
					return 4408;
				
				case 136:
					return 4416;
				
				case 137:
					return 4424;
				
				case 138:
					return 4432;
				
				case 139:
					return 4440;
				
				case 140:
					return 4448;
				
				case 141:
					return 4456;
				
				case 142:
					return 4464;
				
				case 143:
					return 4472;
				
				case 144:
					return 4480;
				
				case 145:
					return 4488;
				
				case 146:
					return 4496;
				
				case 147:
					return 4504;
				
				case 148:
					return 4512;
				
				case 149:
					return 4520;
				
				case 150:
					return 4528;
				
				case 151:
					return 4536;
				
				case 152:
					return 4544;
				
				case 153:
					return 4552;
				
				case 154:
					return 4560;
				
				case 155:
					return 4568;
				
				case 156:
					return 4576;
				
				case 157:
					return 4584;
				
				case 158:
					return 5477;
				
				default:
			}
			switch (iParam1)
			{
				case 159:
					return 5926;
				
				case 160:
					return 5933;
				
				case 161:
					return 5940;
				
				case 162:
					return 5947;
				
				case 163:
					return 5954;
				
				case 164:
					return 5961;
				
				case 165:
					return 5968;
				
				case 166:
					return 5975;
				
				case 167:
					return 5982;
				
				case 168:
					return 5989;
				
				case 169:
					return 5996;
				
				case 170:
					return 6003;
				
				case 171:
					return 6010;
				
				case 172:
					return 6017;
				
				case 173:
					return 6024;
				
				case 174:
					return 6031;
				
				case 175:
					return 6038;
				
				case 176:
					return 6045;
				
				case 177:
					return 6052;
				
				case 178:
					return 6059;
				
				case 179:
					return 6066;
				
				case 180:
					return 6073;
				
				case 181:
					return 6080;
				
				case 182:
					return 6087;
				
				case 183:
					return 6094;
				
				default:
			}
			switch (iParam1)
			{
				case 184:
					return 6171;
				
				case 185:
					return 6178;
				
				case 186:
					return 6185;
				
				case 187:
					return 6192;
				
				case 188:
					return 6199;
				
				case 189:
					return 6206;
				
				case 190:
					return 6213;
				
				case 191:
					return 6220;
				
				case 192:
					return 6227;
				
				case 193:
					return 6234;
				
				default:
			}
			switch (iParam1)
			{
				case 194:
					return 6568;
				
				case 195:
					return 6575;
				
				case 196:
					return 6582;
				
				case 197:
					return 6589;
				
				case 198:
					return 6596;
				
				case 199:
					return 6603;
				
				case 200:
					return 6610;
				
				case 201:
					return 6617;
				
				case 202:
					return 6624;
				
				case 203:
					return 6631;
				
				case 204:
					return 6638;
				
				case 205:
					return 6645;
				
				case 206:
					return 6652;
				
				case 207:
					return 6659;
				
				case 208:
					return 6666;
				
				case 209:
					return 6673;
				
				case 210:
					return 6680;
				
				case 211:
					return 6687;
				
				case 212:
					return 6694;
				
				case 213:
					return 6701;
				
				case 214:
					return 6708;
				
				case 215:
					return 6715;
				
				case 216:
					return 6722;
				
				case 217:
					return 6729;
				
				case 218:
					return 6736;
				
				case 219:
					return 6743;
				
				case 220:
					return 6750;
				
				case 221:
					return 6757;
				
				case 222:
					return 6764;
				
				case 223:
					return 6771;
				
				case 224:
					return 6778;
				
				case 225:
					return 6785;
				
				case 226:
					return 6792;
				
				case 227:
					return 6799;
				
				case 228:
					return 6806;
				
				case 229:
					return 6813;
				
				case 230:
					return 6820;
				
				default:
			}
			switch (iParam1)
			{
				case 231:
					return 7290;
				
				case 232:
					return 7297;
				
				case 233:
					return 7304;
				
				case 234:
					return 7311;
				
				case 235:
					return 7318;
				
				case 236:
					return 7325;
				
				case 237:
					return 7332;
				
				case 238:
					return 7339;
				
				case 239:
					return 7346;
				
				case 240:
					return 7353;
				
				case 241:
					return 7360;
				
				case 242:
					return 7367;
				
				case 243:
					return 7374;
				
				case 244:
					return 7381;
				
				case 245:
					return 7388;
				
				case 246:
					return 7395;
				
				case 247:
					return 7402;
				
				case 248:
					return 7409;
				
				case 249:
					return 7416;
				
				case 250:
					return 7423;
				
				case 251:
					return 7430;
				
				case 252:
					return 7437;
				
				case 253:
					return 7444;
				
				case 254:
					return 7451;
				
				case 255:
					return 7458;
				
				case 256:
					return 7465;
				
				case 257:
					return 7472;
				
				case 258:
					return 7479;
				
				case 259:
					return 7486;
				
				case 260:
					return 7493;
				
				default:
			}
			switch (iParam1)
			{
				case 261:
					return 8013;
				
				case 262:
					return 8020;
				
				case 263:
					return 8027;
				
				case 264:
					return 8034;
				
				case 265:
					return 8041;
				
				case 266:
					return 8048;
				
				case 267:
					return 8055;
				
				case 268:
					return 8062;
				
				case 269:
					return 8069;
				
				case 270:
					return 8076;
				
				case 271:
					return 8537;
				
				case 272:
					return 8544;
				
				case 273:
					return 8551;
				
				case 274:
					return 8558;
				
				case 275:
					return 8565;
				
				case 276:
					return 8572;
				
				case 277:
					return 8579;
				
				case 278:
					return 8586;
				
				case 279:
					return 8593;
				
				case 280:
					return 8600;
				
				case 281:
					return 8982;
				
				case 282:
					return 8989;
				
				case 283:
					return 8996;
				
				case 284:
					return 9003;
				
				case 285:
					return 9010;
				
				case 286:
					return 9017;
				
				case 287:
					return 9024;
				
				case 288:
					return 9031;
				
				case 289:
					return 9038;
				
				case 290:
					return 9045;
				
				case 291:
					return 9052;
				
				case 292:
					return 9058;
				
				case 293:
					return 9064;
				
				case 294:
					return 9070;
				
				case 295:
					return 9077;
				
				case 296:
					return 9084;
				
				case 297:
					return 9091;
				
				case 298:
					return 9098;
				
				case 299:
					return 9105;
				
				case 300:
					return 9112;
				
				case 301:
					return 9119;
				
				case 302:
					return 9126;
				
				case 303:
					return 9133;
				
				case 304:
					return 9140;
				
				case 305:
					return 9146;
				
				case 306:
					return 9152;
				
				default:
			}
			break;
		
		case 2:
			switch (iParam1)
			{
				case 0:
					return 1630;
				
				case 1:
					return 1637;
				
				case 2:
					return 1644;
				
				case 3:
					return 1651;
				
				case 4:
					return 1658;
				
				case 5:
					return 1665;
				
				case 6:
					return 1672;
				
				case 7:
					return 1679;
				
				case 8:
					return 1686;
				
				case 9:
					return 1693;
				
				case 10:
					return 1700;
				
				case 11:
					return 1706;
				
				case 12:
					return 1712;
				
				case 13:
					return 1718;
				
				case 14:
					return 1797;
				
				case 15:
					return 1804;
				
				case 16:
					return 1811;
				
				case 17:
					return 1818;
				
				case 18:
					return 1825;
				
				case 19:
					return 1832;
				
				case 20:
					return 1839;
				
				case 21:
					return 1846;
				
				case 22:
					return 1853;
				
				case 23:
					return 1860;
				
				case 24:
					return 1866;
				
				case 25:
					return 1872;
				
				case 26:
					return 2167;
				
				case 27:
					return 2174;
				
				case 28:
					return 2181;
				
				case 29:
					return 2188;
				
				case 30:
					return 2195;
				
				case 31:
					return 2202;
				
				case 32:
					return 2209;
				
				case 33:
					return 2216;
				
				case 34:
					return 2223;
				
				case 35:
					return 2230;
				
				case 36:
					return 2237;
				
				case 37:
					return 2243;
				
				case 38:
					return 2249;
				
				case 39:
					return 2830;
				
				case 40:
					return 2837;
				
				case 41:
					return 2844;
				
				case 42:
					return 2851;
				
				case 43:
					return 2858;
				
				case 44:
					return 2865;
				
				case 45:
					return 2872;
				
				case 46:
					return 2879;
				
				case 47:
					return 2886;
				
				case 48:
					return 2893;
				
				case 49:
					return 2900;
				
				case 50:
					return 2906;
				
				case 51:
					return 2912;
				
				case 52:
					return 2954;
				
				case 53:
					return 2961;
				
				case 54:
					return 2968;
				
				case 55:
					return 2975;
				
				case 56:
					return 2982;
				
				case 57:
					return 2989;
				
				case 58:
					return 2996;
				
				case 59:
					return 3003;
				
				case 60:
					return 3010;
				
				case 61:
					return 3017;
				
				case 62:
					return 3024;
				
				case 63:
					return 3030;
				
				case 64:
					return 3036;
				
				case 65:
					return 3237;
				
				case 66:
					return 3245;
				
				case 67:
					return 3253;
				
				case 68:
					return 3261;
				
				case 69:
					return 3269;
				
				case 70:
					return 3277;
				
				case 71:
					return 3285;
				
				case 72:
					return 3293;
				
				case 73:
					return 3301;
				
				case 74:
					return 3309;
				
				case 75:
					return 3317;
				
				case 76:
					return 3325;
				
				case 77:
					return 3333;
				
				case 78:
					return 3341;
				
				case joaat("MPSV_LP0_31"):
					return 3349;
				
				case 80:
					return 3357;
				
				case 81:
					return 3365;
				
				case 82:
					return 3373;
				
				case 83:
					return 3381;
				
				case 84:
					return 3389;
				
				case 85:
					return 3397;
				
				case 86:
					return 3404;
				
				case 87:
					return 3411;
				
				default:
			}
			switch (iParam1)
			{
				case 88:
					return 4033;
				
				case 89:
					return 4041;
				
				case 90:
					return 4049;
				
				case 91:
					return 4057;
				
				case 92:
					return 4065;
				
				case 93:
					return 4073;
				
				case 94:
					return 4081;
				
				case 95:
					return 4089;
				
				case 96:
					return 4097;
				
				case 97:
					return 4105;
				
				case 98:
					return 4113;
				
				case 99:
					return 4121;
				
				case 100:
					return 4129;
				
				case 101:
					return 4137;
				
				case 102:
					return 4145;
				
				case 103:
					return 4153;
				
				case 104:
					return 4161;
				
				case 105:
					return 4169;
				
				case 106:
					return 4177;
				
				case 107:
					return 4185;
				
				case 108:
					return 4193;
				
				case 109:
					return 4201;
				
				case 110:
					return 4209;
				
				case 111:
					return 4217;
				
				case 112:
					return 4225;
				
				case 113:
					return 4233;
				
				case 114:
					return 4241;
				
				case 115:
					return 4249;
				
				case 116:
					return 4257;
				
				case 117:
					return 4265;
				
				case 118:
					return 4273;
				
				case 119:
					return 4281;
				
				case 120:
					return 4289;
				
				case 121:
					return 4297;
				
				case 122:
					return 4305;
				
				case 123:
					return 4313;
				
				case 124:
					return 4321;
				
				case 125:
					return 4329;
				
				case 126:
					return 4337;
				
				case 127:
					return 4345;
				
				case 128:
					return 4353;
				
				case 129:
					return 4361;
				
				case 130:
					return 4369;
				
				case 131:
					return 4377;
				
				case 132:
					return 4385;
				
				case 133:
					return 4393;
				
				case 134:
					return 4401;
				
				case 135:
					return 4409;
				
				case 136:
					return 4417;
				
				case 137:
					return 4425;
				
				case 138:
					return 4433;
				
				case 139:
					return 4441;
				
				case 140:
					return 4449;
				
				case 141:
					return 4457;
				
				case 142:
					return 4465;
				
				case 143:
					return 4473;
				
				case 144:
					return 4481;
				
				case 145:
					return 4489;
				
				case 146:
					return 4497;
				
				case 147:
					return 4505;
				
				case 148:
					return 4513;
				
				case 149:
					return 4521;
				
				case 150:
					return 4529;
				
				case 151:
					return 4537;
				
				case 152:
					return 4545;
				
				case 153:
					return 4553;
				
				case 154:
					return 4561;
				
				case 155:
					return 4569;
				
				case 156:
					return 4577;
				
				case 157:
					return 4585;
				
				case 158:
					return 5478;
				
				default:
			}
			switch (iParam1)
			{
				case 159:
					return 5927;
				
				case 160:
					return 5934;
				
				case 161:
					return 5941;
				
				case 162:
					return 5948;
				
				case 163:
					return 5955;
				
				case 164:
					return 5962;
				
				case 165:
					return 5969;
				
				case 166:
					return 5976;
				
				case 167:
					return 5983;
				
				case 168:
					return 5990;
				
				case 169:
					return 5997;
				
				case 170:
					return 6004;
				
				case 171:
					return 6011;
				
				case 172:
					return 6018;
				
				case 173:
					return 6025;
				
				case 174:
					return 6032;
				
				case 175:
					return 6039;
				
				case 176:
					return 6046;
				
				case 177:
					return 6053;
				
				case 178:
					return 6060;
				
				case 179:
					return 6067;
				
				case 180:
					return 6074;
				
				case 181:
					return 6081;
				
				case 182:
					return 6088;
				
				case 183:
					return 6095;
				
				default:
			}
			switch (iParam1)
			{
				case 184:
					return 6172;
				
				case 185:
					return 6179;
				
				case 186:
					return 6186;
				
				case 187:
					return 6193;
				
				case 188:
					return 6200;
				
				case 189:
					return 6207;
				
				case 190:
					return 6214;
				
				case 191:
					return 6221;
				
				case 192:
					return 6228;
				
				case 193:
					return 6235;
				
				default:
			}
			switch (iParam1)
			{
				case 194:
					return 6569;
				
				case 195:
					return 6576;
				
				case 196:
					return 6583;
				
				case 197:
					return 6590;
				
				case 198:
					return 6597;
				
				case 199:
					return 6604;
				
				case 200:
					return 6611;
				
				case 201:
					return 6618;
				
				case 202:
					return 6625;
				
				case 203:
					return 6632;
				
				case 204:
					return 6639;
				
				case 205:
					return 6646;
				
				case 206:
					return 6653;
				
				case 207:
					return 6660;
				
				case 208:
					return 6667;
				
				case 209:
					return 6674;
				
				case 210:
					return 6681;
				
				case 211:
					return 6688;
				
				case 212:
					return 6695;
				
				case 213:
					return 6702;
				
				case 214:
					return 6709;
				
				case 215:
					return 6716;
				
				case 216:
					return 6723;
				
				case 217:
					return 6730;
				
				case 218:
					return 6737;
				
				case 219:
					return 6744;
				
				case 220:
					return 6751;
				
				case 221:
					return 6758;
				
				case 222:
					return 6765;
				
				case 223:
					return 6772;
				
				case 224:
					return 6779;
				
				case 225:
					return 6786;
				
				case 226:
					return 6793;
				
				case 227:
					return 6800;
				
				case 228:
					return 6807;
				
				case 229:
					return 6814;
				
				case 230:
					return 6821;
				
				default:
			}
			switch (iParam1)
			{
				case 231:
					return 7291;
				
				case 232:
					return 7298;
				
				case 233:
					return 7305;
				
				case 234:
					return 7312;
				
				case 235:
					return 7319;
				
				case 236:
					return 7326;
				
				case 237:
					return 7333;
				
				case 238:
					return 7340;
				
				case 239:
					return 7347;
				
				case 240:
					return 7354;
				
				case 241:
					return 7361;
				
				case 242:
					return 7368;
				
				case 243:
					return 7375;
				
				case 244:
					return 7382;
				
				case 245:
					return 7389;
				
				case 246:
					return 7396;
				
				case 247:
					return 7403;
				
				case 248:
					return 7410;
				
				case 249:
					return 7417;
				
				case 250:
					return 7424;
				
				case 251:
					return 7431;
				
				case 252:
					return 7438;
				
				case 253:
					return 7445;
				
				case 254:
					return 7452;
				
				case 255:
					return 7459;
				
				case 256:
					return 7466;
				
				case 257:
					return 7473;
				
				case 258:
					return 7480;
				
				case 259:
					return 7487;
				
				case 260:
					return 7494;
				
				default:
			}
			switch (iParam1)
			{
				case 261:
					return 8014;
				
				case 262:
					return 8021;
				
				case 263:
					return 8028;
				
				case 264:
					return 8035;
				
				case 265:
					return 8042;
				
				case 266:
					return 8049;
				
				case 267:
					return 8056;
				
				case 268:
					return 8063;
				
				case 269:
					return 8070;
				
				case 270:
					return 8077;
				
				case 271:
					return 8538;
				
				case 272:
					return 8545;
				
				case 273:
					return 8552;
				
				case 274:
					return 8559;
				
				case 275:
					return 8566;
				
				case 276:
					return 8573;
				
				case 277:
					return 8580;
				
				case 278:
					return 8587;
				
				case 279:
					return 8594;
				
				case 280:
					return 8601;
				
				case 281:
					return 8983;
				
				case 282:
					return 8990;
				
				case 283:
					return 8997;
				
				case 284:
					return 9004;
				
				case 285:
					return 9011;
				
				case 286:
					return 9018;
				
				case 287:
					return 9025;
				
				case 288:
					return 9032;
				
				case 289:
					return 9039;
				
				case 290:
					return 9046;
				
				case 291:
					return 9053;
				
				case 292:
					return 9059;
				
				case 293:
					return 9065;
				
				case 294:
					return 9071;
				
				case 295:
					return 9078;
				
				case 296:
					return 9085;
				
				case 297:
					return 9092;
				
				case 298:
					return 9099;
				
				case 299:
					return 9106;
				
				case 300:
					return 9113;
				
				case 301:
					return 9120;
				
				case 302:
					return 9127;
				
				case 303:
					return 9134;
				
				case 304:
					return 9141;
				
				case 305:
					return 9147;
				
				case 306:
					return 9153;
				
				default:
			}
			break;
		
		case 3:
			switch (iParam1)
			{
				case 0:
					return 1631;
				
				case 1:
					return 1638;
				
				case 2:
					return 1645;
				
				case 3:
					return 1652;
				
				case 4:
					return 1659;
				
				case 5:
					return 1666;
				
				case 6:
					return 1673;
				
				case 7:
					return 1680;
				
				case 8:
					return 1687;
				
				case 9:
					return 1694;
				
				case 10:
					return 1701;
				
				case 11:
					return 1707;
				
				case 12:
					return 1713;
				
				case 13:
					return 1719;
				
				case 14:
					return 1798;
				
				case 15:
					return 1805;
				
				case 16:
					return 1812;
				
				case 17:
					return 1819;
				
				case 18:
					return 1826;
				
				case 19:
					return 1833;
				
				case 20:
					return 1840;
				
				case 21:
					return 1847;
				
				case 22:
					return 1854;
				
				case 23:
					return 1861;
				
				case 24:
					return 1867;
				
				case 25:
					return 1873;
				
				case 26:
					return 2168;
				
				case 27:
					return 2175;
				
				case 28:
					return 2182;
				
				case 29:
					return 2189;
				
				case 30:
					return 2196;
				
				case 31:
					return 2203;
				
				case 32:
					return 2210;
				
				case 33:
					return 2217;
				
				case 34:
					return 2224;
				
				case 35:
					return 2231;
				
				case 36:
					return 2238;
				
				case 37:
					return 2244;
				
				case 38:
					return 2250;
				
				case 39:
					return 2831;
				
				case 40:
					return 2838;
				
				case 41:
					return 2845;
				
				case 42:
					return 2852;
				
				case 43:
					return 2859;
				
				case 44:
					return 2866;
				
				case 45:
					return 2873;
				
				case 46:
					return 2880;
				
				case 47:
					return 2887;
				
				case 48:
					return 2894;
				
				case 49:
					return 2901;
				
				case 50:
					return 2907;
				
				case 51:
					return 2913;
				
				case 52:
					return 2955;
				
				case 53:
					return 2962;
				
				case 54:
					return 2969;
				
				case 55:
					return 2976;
				
				case 56:
					return 2983;
				
				case 57:
					return 2990;
				
				case 58:
					return 2997;
				
				case 59:
					return 3004;
				
				case 60:
					return 3011;
				
				case 61:
					return 3018;
				
				case 62:
					return 3025;
				
				case 63:
					return 3031;
				
				case 64:
					return 3037;
				
				case 65:
					return 3238;
				
				case 66:
					return 3246;
				
				case 67:
					return 3254;
				
				case 68:
					return 3262;
				
				case 69:
					return 3270;
				
				case 70:
					return 3278;
				
				case 71:
					return 3286;
				
				case 72:
					return 3294;
				
				case 73:
					return 3302;
				
				case 74:
					return 3310;
				
				case 75:
					return 3318;
				
				case 76:
					return 3326;
				
				case 77:
					return 3334;
				
				case 78:
					return 3342;
				
				case joaat("MPSV_LP0_31"):
					return 3350;
				
				case 80:
					return 3358;
				
				case 81:
					return 3366;
				
				case 82:
					return 3374;
				
				case 83:
					return 3382;
				
				case 84:
					return 3390;
				
				case 85:
					return 3398;
				
				case 86:
					return 3405;
				
				case 87:
					return 3412;
				
				default:
			}
			switch (iParam1)
			{
				case 88:
					return 4034;
				
				case 89:
					return 4042;
				
				case 90:
					return 4050;
				
				case 91:
					return 4058;
				
				case 92:
					return 4066;
				
				case 93:
					return 4074;
				
				case 94:
					return 4082;
				
				case 95:
					return 4090;
				
				case 96:
					return 4098;
				
				case 97:
					return 4106;
				
				case 98:
					return 4114;
				
				case 99:
					return 4122;
				
				case 100:
					return 4130;
				
				case 101:
					return 4138;
				
				case 102:
					return 4146;
				
				case 103:
					return 4154;
				
				case 104:
					return 4162;
				
				case 105:
					return 4170;
				
				case 106:
					return 4178;
				
				case 107:
					return 4186;
				
				case 108:
					return 4194;
				
				case 109:
					return 4202;
				
				case 110:
					return 4210;
				
				case 111:
					return 4218;
				
				case 112:
					return 4226;
				
				case 113:
					return 4234;
				
				case 114:
					return 4242;
				
				case 115:
					return 4250;
				
				case 116:
					return 4258;
				
				case 117:
					return 4266;
				
				case 118:
					return 4274;
				
				case 119:
					return 4282;
				
				case 120:
					return 4290;
				
				case 121:
					return 4298;
				
				case 122:
					return 4306;
				
				case 123:
					return 4314;
				
				case 124:
					return 4322;
				
				case 125:
					return 4330;
				
				case 126:
					return 4338;
				
				case 127:
					return 4346;
				
				case 128:
					return 4354;
				
				case 129:
					return 4362;
				
				case 130:
					return 4370;
				
				case 131:
					return 4378;
				
				case 132:
					return 4386;
				
				case 133:
					return 4394;
				
				case 134:
					return 4402;
				
				case 135:
					return 4410;
				
				case 136:
					return 4418;
				
				case 137:
					return 4426;
				
				case 138:
					return 4434;
				
				case 139:
					return 4442;
				
				case 140:
					return 4450;
				
				case 141:
					return 4458;
				
				case 142:
					return 4466;
				
				case 143:
					return 4474;
				
				case 144:
					return 4482;
				
				case 145:
					return 4490;
				
				case 146:
					return 4498;
				
				case 147:
					return 4506;
				
				case 148:
					return 4514;
				
				case 149:
					return 4522;
				
				case 150:
					return 4530;
				
				case 151:
					return 4538;
				
				case 152:
					return 4546;
				
				case 153:
					return 4554;
				
				case 154:
					return 4562;
				
				case 155:
					return 4570;
				
				case 156:
					return 4578;
				
				case 157:
					return 4586;
				
				case 158:
					return 5479;
				
				default:
			}
			switch (iParam1)
			{
				case 159:
					return 5928;
				
				case 160:
					return 5935;
				
				case 161:
					return 5942;
				
				case 162:
					return 5949;
				
				case 163:
					return 5956;
				
				case 164:
					return 5963;
				
				case 165:
					return 5970;
				
				case 166:
					return 5977;
				
				case 167:
					return 5984;
				
				case 168:
					return 5991;
				
				case 169:
					return 5998;
				
				case 170:
					return 6005;
				
				case 171:
					return 6012;
				
				case 172:
					return 6019;
				
				case 173:
					return 6026;
				
				case 174:
					return 6033;
				
				case 175:
					return 6040;
				
				case 176:
					return 6047;
				
				case 177:
					return 6054;
				
				case 178:
					return 6061;
				
				case 179:
					return 6068;
				
				case 180:
					return 6075;
				
				case 181:
					return 6082;
				
				case 182:
					return 6089;
				
				case 183:
					return 6096;
				
				default:
			}
			switch (iParam1)
			{
				case 184:
					return 6173;
				
				case 185:
					return 6180;
				
				case 186:
					return 6187;
				
				case 187:
					return 6194;
				
				case 188:
					return 6201;
				
				case 189:
					return 6208;
				
				case 190:
					return 6215;
				
				case 191:
					return 6222;
				
				case 192:
					return 6229;
				
				case 193:
					return 6236;
				
				default:
			}
			switch (iParam1)
			{
				case 194:
					return 6570;
				
				case 195:
					return 6577;
				
				case 196:
					return 6584;
				
				case 197:
					return 6591;
				
				case 198:
					return 6598;
				
				case 199:
					return 6605;
				
				case 200:
					return 6612;
				
				case 201:
					return 6619;
				
				case 202:
					return 6626;
				
				case 203:
					return 6633;
				
				case 204:
					return 6640;
				
				case 205:
					return 6647;
				
				case 206:
					return 6654;
				
				case 207:
					return 6661;
				
				case 208:
					return 6668;
				
				case 209:
					return 6675;
				
				case 210:
					return 6682;
				
				case 211:
					return 6689;
				
				case 212:
					return 6696;
				
				case 213:
					return 6703;
				
				case 214:
					return 6710;
				
				case 215:
					return 6717;
				
				case 216:
					return 6724;
				
				case 217:
					return 6731;
				
				case 218:
					return 6738;
				
				case 219:
					return 6745;
				
				case 220:
					return 6752;
				
				case 221:
					return 6759;
				
				case 222:
					return 6766;
				
				case 223:
					return 6773;
				
				case 224:
					return 6780;
				
				case 225:
					return 6787;
				
				case 226:
					return 6794;
				
				case 227:
					return 6801;
				
				case 228:
					return 6808;
				
				case 229:
					return 6815;
				
				case 230:
					return 6822;
				
				default:
			}
			switch (iParam1)
			{
				case 231:
					return 7292;
				
				case 232:
					return 7299;
				
				case 233:
					return 7306;
				
				case 234:
					return 7313;
				
				case 235:
					return 7320;
				
				case 236:
					return 7327;
				
				case 237:
					return 7334;
				
				case 238:
					return 7341;
				
				case 239:
					return 7348;
				
				case 240:
					return 7355;
				
				case 241:
					return 7362;
				
				case 242:
					return 7369;
				
				case 243:
					return 7376;
				
				case 244:
					return 7383;
				
				case 245:
					return 7390;
				
				case 246:
					return 7397;
				
				case 247:
					return 7404;
				
				case 248:
					return 7411;
				
				case 249:
					return 7418;
				
				case 250:
					return 7425;
				
				case 251:
					return 7432;
				
				case 252:
					return 7439;
				
				case 253:
					return 7446;
				
				case 254:
					return 7453;
				
				case 255:
					return 7460;
				
				case 256:
					return 7467;
				
				case 257:
					return 7474;
				
				case 258:
					return 7481;
				
				case 259:
					return 7488;
				
				case 260:
					return 7495;
				
				default:
			}
			switch (iParam1)
			{
				case 261:
					return 8015;
				
				case 262:
					return 8022;
				
				case 263:
					return 8029;
				
				case 264:
					return 8036;
				
				case 265:
					return 8043;
				
				case 266:
					return 8050;
				
				case 267:
					return 8057;
				
				case 268:
					return 8064;
				
				case 269:
					return 8071;
				
				case 270:
					return 8078;
				
				case 271:
					return 8539;
				
				case 272:
					return 8546;
				
				case 273:
					return 8553;
				
				case 274:
					return 8560;
				
				case 275:
					return 8567;
				
				case 276:
					return 8574;
				
				case 277:
					return 8581;
				
				case 278:
					return 8588;
				
				case 279:
					return 8595;
				
				case 280:
					return 8602;
				
				case 281:
					return 8984;
				
				case 282:
					return 8991;
				
				case 283:
					return 8998;
				
				case 284:
					return 9005;
				
				case 285:
					return 9012;
				
				case 286:
					return 9019;
				
				case 287:
					return 9026;
				
				case 288:
					return 9033;
				
				case 289:
					return 9040;
				
				case 290:
					return 9047;
				
				case 291:
					return 9054;
				
				case 292:
					return 9060;
				
				case 293:
					return 9066;
				
				case 294:
					return 9072;
				
				case 295:
					return 9079;
				
				case 296:
					return 9086;
				
				case 297:
					return 9093;
				
				case 298:
					return 9100;
				
				case 299:
					return 9107;
				
				case 300:
					return 9114;
				
				case 301:
					return 9121;
				
				case 302:
					return 9128;
				
				case 303:
					return 9135;
				
				case 304:
					return 9142;
				
				case 305:
					return 9148;
				
				case 306:
					return 9154;
				
				default:
			}
			break;
		
		case 4:
			switch (iParam1)
			{
				case 0:
					return 1632;
				
				case 1:
					return 1639;
				
				case 2:
					return 1646;
				
				case 3:
					return 1653;
				
				case 4:
					return 1660;
				
				case 5:
					return 1667;
				
				case 6:
					return 1674;
				
				case 7:
					return 1681;
				
				case 8:
					return 1688;
				
				case 9:
					return 1695;
				
				case 10:
					return 1702;
				
				case 11:
					return 1708;
				
				case 12:
					return 1714;
				
				case 13:
					return 1720;
				
				case 14:
					return 1799;
				
				case 15:
					return 1806;
				
				case 16:
					return 1813;
				
				case 17:
					return 1820;
				
				case 18:
					return 1827;
				
				case 19:
					return 1834;
				
				case 20:
					return 1841;
				
				case 21:
					return 1848;
				
				case 22:
					return 1855;
				
				case 23:
					return 1862;
				
				case 24:
					return 1868;
				
				case 25:
					return 1874;
				
				case 26:
					return 2169;
				
				case 27:
					return 2176;
				
				case 28:
					return 2183;
				
				case 29:
					return 2190;
				
				case 30:
					return 2197;
				
				case 31:
					return 2204;
				
				case 32:
					return 2211;
				
				case 33:
					return 2218;
				
				case 34:
					return 2225;
				
				case 35:
					return 2232;
				
				case 36:
					return 2239;
				
				case 37:
					return 2245;
				
				case 38:
					return 2251;
				
				case 39:
					return 2832;
				
				case 40:
					return 2839;
				
				case 41:
					return 2846;
				
				case 42:
					return 2853;
				
				case 43:
					return 2860;
				
				case 44:
					return 2867;
				
				case 45:
					return 2874;
				
				case 46:
					return 2881;
				
				case 47:
					return 2888;
				
				case 48:
					return 2895;
				
				case 49:
					return 2902;
				
				case 50:
					return 2908;
				
				case 51:
					return 2914;
				
				case 52:
					return 2956;
				
				case 53:
					return 2963;
				
				case 54:
					return 2970;
				
				case 55:
					return 2977;
				
				case 56:
					return 2984;
				
				case 57:
					return 2991;
				
				case 58:
					return 2998;
				
				case 59:
					return 3005;
				
				case 60:
					return 3012;
				
				case 61:
					return 3019;
				
				case 62:
					return 3026;
				
				case 63:
					return 3032;
				
				case 64:
					return 3038;
				
				case 65:
					return 3239;
				
				case 66:
					return 3247;
				
				case 67:
					return 3255;
				
				case 68:
					return 3263;
				
				case 69:
					return 3271;
				
				case 70:
					return 3279;
				
				case 71:
					return 3287;
				
				case 72:
					return 3295;
				
				case 73:
					return 3303;
				
				case 74:
					return 3311;
				
				case 75:
					return 3319;
				
				case 76:
					return 3327;
				
				case 77:
					return 3335;
				
				case 78:
					return 3343;
				
				case joaat("MPSV_LP0_31"):
					return 3351;
				
				case 80:
					return 3359;
				
				case 81:
					return 3367;
				
				case 82:
					return 3375;
				
				case 83:
					return 3383;
				
				case 84:
					return 3391;
				
				case 85:
					return 3399;
				
				case 86:
					return 3406;
				
				case 87:
					return 3413;
				
				default:
			}
			switch (iParam1)
			{
				case 88:
					return 4035;
				
				case 89:
					return 4043;
				
				case 90:
					return 4051;
				
				case 91:
					return 4059;
				
				case 92:
					return 4067;
				
				case 93:
					return 4075;
				
				case 94:
					return 4083;
				
				case 95:
					return 4091;
				
				case 96:
					return 4099;
				
				case 97:
					return 4107;
				
				case 98:
					return 4115;
				
				case 99:
					return 4123;
				
				case 100:
					return 4131;
				
				case 101:
					return 4139;
				
				case 102:
					return 4147;
				
				case 103:
					return 4155;
				
				case 104:
					return 4163;
				
				case 105:
					return 4171;
				
				case 106:
					return 4179;
				
				case 107:
					return 4187;
				
				case 108:
					return 4195;
				
				case 109:
					return 4203;
				
				case 110:
					return 4211;
				
				case 111:
					return 4219;
				
				case 112:
					return 4227;
				
				case 113:
					return 4235;
				
				case 114:
					return 4243;
				
				case 115:
					return 4251;
				
				case 116:
					return 4259;
				
				case 117:
					return 4267;
				
				case 118:
					return 4275;
				
				case 119:
					return 4283;
				
				case 120:
					return 4291;
				
				case 121:
					return 4299;
				
				case 122:
					return 4307;
				
				case 123:
					return 4315;
				
				case 124:
					return 4323;
				
				case 125:
					return 4331;
				
				case 126:
					return 4339;
				
				case 127:
					return 4347;
				
				case 128:
					return 4355;
				
				case 129:
					return 4363;
				
				case 130:
					return 4371;
				
				case 131:
					return 4379;
				
				case 132:
					return 4387;
				
				case 133:
					return 4395;
				
				case 134:
					return 4403;
				
				case 135:
					return 4411;
				
				case 136:
					return 4419;
				
				case 137:
					return 4427;
				
				case 138:
					return 4435;
				
				case 139:
					return 4443;
				
				case 140:
					return 4451;
				
				case 141:
					return 4459;
				
				case 142:
					return 4467;
				
				case 143:
					return 4475;
				
				case 144:
					return 4483;
				
				case 145:
					return 4491;
				
				case 146:
					return 4499;
				
				case 147:
					return 4507;
				
				case 148:
					return 4515;
				
				case 149:
					return 4523;
				
				case 150:
					return 4531;
				
				case 151:
					return 4539;
				
				case 152:
					return 4547;
				
				case 153:
					return 4555;
				
				case 154:
					return 4563;
				
				case 155:
					return 4571;
				
				case 156:
					return 4579;
				
				case 157:
					return 4587;
				
				case 158:
					return 5480;
				
				default:
			}
			switch (iParam1)
			{
				case 159:
					return 5929;
				
				case 160:
					return 5936;
				
				case 161:
					return 5943;
				
				case 162:
					return 5950;
				
				case 163:
					return 5957;
				
				case 164:
					return 5964;
				
				case 165:
					return 5971;
				
				case 166:
					return 5978;
				
				case 167:
					return 5985;
				
				case 168:
					return 5992;
				
				case 169:
					return 5999;
				
				case 170:
					return 6006;
				
				case 171:
					return 6013;
				
				case 172:
					return 6020;
				
				case 173:
					return 6027;
				
				case 174:
					return 6034;
				
				case 175:
					return 6041;
				
				case 176:
					return 6048;
				
				case 177:
					return 6055;
				
				case 178:
					return 6062;
				
				case 179:
					return 6069;
				
				case 180:
					return 6076;
				
				case 181:
					return 6083;
				
				case 182:
					return 6090;
				
				case 183:
					return 6097;
				
				default:
			}
			switch (iParam1)
			{
				case 184:
					return 6174;
				
				case 185:
					return 6181;
				
				case 186:
					return 6188;
				
				case 187:
					return 6195;
				
				case 188:
					return 6202;
				
				case 189:
					return 6209;
				
				case 190:
					return 6216;
				
				case 191:
					return 6223;
				
				case 192:
					return 6230;
				
				case 193:
					return 6237;
				
				default:
			}
			switch (iParam1)
			{
				case 194:
					return 6571;
				
				case 195:
					return 6578;
				
				case 196:
					return 6585;
				
				case 197:
					return 6592;
				
				case 198:
					return 6599;
				
				case 199:
					return 6606;
				
				case 200:
					return 6613;
				
				case 201:
					return 6620;
				
				case 202:
					return 6627;
				
				case 203:
					return 6634;
				
				case 204:
					return 6641;
				
				case 205:
					return 6648;
				
				case 206:
					return 6655;
				
				case 207:
					return 6662;
				
				case 208:
					return 6669;
				
				case 209:
					return 6676;
				
				case 210:
					return 6683;
				
				case 211:
					return 6690;
				
				case 212:
					return 6697;
				
				case 213:
					return 6704;
				
				case 214:
					return 6711;
				
				case 215:
					return 6718;
				
				case 216:
					return 6725;
				
				case 217:
					return 6732;
				
				case 218:
					return 6739;
				
				case 219:
					return 6746;
				
				case 220:
					return 6753;
				
				case 221:
					return 6760;
				
				case 222:
					return 6767;
				
				case 223:
					return 6774;
				
				case 224:
					return 6781;
				
				case 225:
					return 6788;
				
				case 226:
					return 6795;
				
				case 227:
					return 6802;
				
				case 228:
					return 6809;
				
				case 229:
					return 6816;
				
				case 230:
					return 6823;
				
				default:
			}
			switch (iParam1)
			{
				case 231:
					return 7293;
				
				case 232:
					return 7300;
				
				case 233:
					return 7307;
				
				case 234:
					return 7314;
				
				case 235:
					return 7321;
				
				case 236:
					return 7328;
				
				case 237:
					return 7335;
				
				case 238:
					return 7342;
				
				case 239:
					return 7349;
				
				case 240:
					return 7356;
				
				case 241:
					return 7363;
				
				case 242:
					return 7370;
				
				case 243:
					return 7377;
				
				case 244:
					return 7384;
				
				case 245:
					return 7391;
				
				case 246:
					return 7398;
				
				case 247:
					return 7405;
				
				case 248:
					return 7412;
				
				case 249:
					return 7419;
				
				case 250:
					return 7426;
				
				case 251:
					return 7433;
				
				case 252:
					return 7440;
				
				case 253:
					return 7447;
				
				case 254:
					return 7454;
				
				case 255:
					return 7461;
				
				case 256:
					return 7468;
				
				case 257:
					return 7475;
				
				case 258:
					return 7482;
				
				case 259:
					return 7489;
				
				case 260:
					return 7496;
				
				default:
			}
			switch (iParam1)
			{
				case 261:
					return 8016;
				
				case 262:
					return 8023;
				
				case 263:
					return 8030;
				
				case 264:
					return 8037;
				
				case 265:
					return 8044;
				
				case 266:
					return 8051;
				
				case 267:
					return 8058;
				
				case 268:
					return 8065;
				
				case 269:
					return 8072;
				
				case 270:
					return 8079;
				
				case 271:
					return 8540;
				
				case 272:
					return 8547;
				
				case 273:
					return 8554;
				
				case 274:
					return 8561;
				
				case 275:
					return 8568;
				
				case 276:
					return 8575;
				
				case 277:
					return 8582;
				
				case 278:
					return 8589;
				
				case 279:
					return 8596;
				
				case 280:
					return 8603;
				
				case 281:
					return 8985;
				
				case 282:
					return 8992;
				
				case 283:
					return 8999;
				
				case 284:
					return 9006;
				
				case 285:
					return 9013;
				
				case 286:
					return 9020;
				
				case 287:
					return 9027;
				
				case 288:
					return 9034;
				
				case 289:
					return 9041;
				
				case 290:
					return 9048;
				
				case 291:
					return 9055;
				
				case 292:
					return 9061;
				
				case 293:
					return 9067;
				
				case 294:
					return 9073;
				
				case 295:
					return 9080;
				
				case 296:
					return 9087;
				
				case 297:
					return 9094;
				
				case 298:
					return 9101;
				
				case 299:
					return 9108;
				
				case 300:
					return 9115;
				
				case 301:
					return 9122;
				
				case 302:
					return 9129;
				
				case 303:
					return 9136;
				
				case 304:
					return 9143;
				
				case 305:
					return 9149;
				
				case 306:
					return 9155;
				
				default:
			}
			break;
		
		case 5:
			switch (iParam1)
			{
				case 0:
					return 1633;
				
				case 1:
					return 1640;
				
				case 2:
					return 1647;
				
				case 3:
					return 1654;
				
				case 4:
					return 1661;
				
				case 5:
					return 1668;
				
				case 6:
					return 1675;
				
				case 7:
					return 1682;
				
				case 8:
					return 1689;
				
				case 9:
					return 1696;
				
				case 10:
					return 1703;
				
				case 11:
					return 1709;
				
				case 12:
					return 1715;
				
				case 13:
					return 1721;
				
				case 14:
					return 1800;
				
				case 15:
					return 1807;
				
				case 16:
					return 1814;
				
				case 17:
					return 1821;
				
				case 18:
					return 1828;
				
				case 19:
					return 1835;
				
				case 20:
					return 1842;
				
				case 21:
					return 1849;
				
				case 22:
					return 1856;
				
				case 23:
					return 1863;
				
				case 24:
					return 1869;
				
				case 25:
					return 1875;
				
				case 26:
					return 2170;
				
				case 27:
					return 2177;
				
				case 28:
					return 2184;
				
				case 29:
					return 2191;
				
				case 30:
					return 2198;
				
				case 31:
					return 2205;
				
				case 32:
					return 2212;
				
				case 33:
					return 2219;
				
				case 34:
					return 2226;
				
				case 35:
					return 2233;
				
				case 36:
					return 2240;
				
				case 37:
					return 2246;
				
				case 38:
					return 2252;
				
				case 39:
					return 2833;
				
				case 40:
					return 2840;
				
				case 41:
					return 2847;
				
				case 42:
					return 2854;
				
				case 43:
					return 2861;
				
				case 44:
					return 2868;
				
				case 45:
					return 2875;
				
				case 46:
					return 2882;
				
				case 47:
					return 2889;
				
				case 48:
					return 2896;
				
				case 49:
					return 2903;
				
				case 50:
					return 2909;
				
				case 51:
					return 2915;
				
				case 52:
					return 2957;
				
				case 53:
					return 2964;
				
				case 54:
					return 2971;
				
				case 55:
					return 2978;
				
				case 56:
					return 2985;
				
				case 57:
					return 2992;
				
				case 58:
					return 2999;
				
				case 59:
					return 3006;
				
				case 60:
					return 3013;
				
				case 61:
					return 3020;
				
				case 62:
					return 3027;
				
				case 63:
					return 3033;
				
				case 64:
					return 3039;
				
				case 65:
					return 3240;
				
				case 66:
					return 3248;
				
				case 67:
					return 3256;
				
				case 68:
					return 3264;
				
				case 69:
					return 3272;
				
				case 70:
					return 3280;
				
				case 71:
					return 3288;
				
				case 72:
					return 3296;
				
				case 73:
					return 3304;
				
				case 74:
					return 3312;
				
				case 75:
					return 3320;
				
				case 76:
					return 3328;
				
				case 77:
					return 3336;
				
				case 78:
					return 3344;
				
				case joaat("MPSV_LP0_31"):
					return 3352;
				
				case 80:
					return 3360;
				
				case 81:
					return 3368;
				
				case 82:
					return 3376;
				
				case 83:
					return 3384;
				
				case 84:
					return 3392;
				
				case 85:
					return 3400;
				
				case 86:
					return 3407;
				
				case 87:
					return 3414;
				
				default:
			}
			switch (iParam1)
			{
				case 88:
					return 4036;
				
				case 89:
					return 4044;
				
				case 90:
					return 4052;
				
				case 91:
					return 4060;
				
				case 92:
					return 4068;
				
				case 93:
					return 4076;
				
				case 94:
					return 4084;
				
				case 95:
					return 4092;
				
				case 96:
					return 4100;
				
				case 97:
					return 4108;
				
				case 98:
					return 4116;
				
				case 99:
					return 4124;
				
				case 100:
					return 4132;
				
				case 101:
					return 4140;
				
				case 102:
					return 4148;
				
				case 103:
					return 4156;
				
				case 104:
					return 4164;
				
				case 105:
					return 4172;
				
				case 106:
					return 4180;
				
				case 107:
					return 4188;
				
				case 108:
					return 4196;
				
				case 109:
					return 4204;
				
				case 110:
					return 4212;
				
				case 111:
					return 4220;
				
				case 112:
					return 4228;
				
				case 113:
					return 4236;
				
				case 114:
					return 4244;
				
				case 115:
					return 4252;
				
				case 116:
					return 4260;
				
				case 117:
					return 4268;
				
				case 118:
					return 4276;
				
				case 119:
					return 4284;
				
				case 120:
					return 4292;
				
				case 121:
					return 4300;
				
				case 122:
					return 4308;
				
				case 123:
					return 4316;
				
				case 124:
					return 4324;
				
				case 125:
					return 4332;
				
				case 126:
					return 4340;
				
				case 127:
					return 4348;
				
				case 128:
					return 4356;
				
				case 129:
					return 4364;
				
				case 130:
					return 4372;
				
				case 131:
					return 4380;
				
				case 132:
					return 4388;
				
				case 133:
					return 4396;
				
				case 134:
					return 4404;
				
				case 135:
					return 4412;
				
				case 136:
					return 4420;
				
				case 137:
					return 4428;
				
				case 138:
					return 4436;
				
				case 139:
					return 4444;
				
				case 140:
					return 4452;
				
				case 141:
					return 4460;
				
				case 142:
					return 4468;
				
				case 143:
					return 4476;
				
				case 144:
					return 4484;
				
				case 145:
					return 4492;
				
				case 146:
					return 4500;
				
				case 147:
					return 4508;
				
				case 148:
					return 4516;
				
				case 149:
					return 4524;
				
				case 150:
					return 4532;
				
				case 151:
					return 4540;
				
				case 152:
					return 4548;
				
				case 153:
					return 4556;
				
				case 154:
					return 4564;
				
				case 155:
					return 4572;
				
				case 156:
					return 4580;
				
				case 157:
					return 4588;
				
				case 158:
					return 5481;
				
				default:
			}
			switch (iParam1)
			{
				case 159:
					return 5930;
				
				case 160:
					return 5937;
				
				case 161:
					return 5944;
				
				case 162:
					return 5951;
				
				case 163:
					return 5958;
				
				case 164:
					return 5965;
				
				case 165:
					return 5972;
				
				case 166:
					return 5979;
				
				case 167:
					return 5986;
				
				case 168:
					return 5993;
				
				case 169:
					return 6000;
				
				case 170:
					return 6007;
				
				case 171:
					return 6014;
				
				case 172:
					return 6021;
				
				case 173:
					return 6028;
				
				case 174:
					return 6035;
				
				case 175:
					return 6042;
				
				case 176:
					return 6049;
				
				case 177:
					return 6056;
				
				case 178:
					return 6063;
				
				case 179:
					return 6070;
				
				case 180:
					return 6077;
				
				case 181:
					return 6084;
				
				case 182:
					return 6091;
				
				case 183:
					return 6098;
				
				default:
			}
			switch (iParam1)
			{
				case 184:
					return 6175;
				
				case 185:
					return 6182;
				
				case 186:
					return 6189;
				
				case 187:
					return 6196;
				
				case 188:
					return 6203;
				
				case 189:
					return 6210;
				
				case 190:
					return 6217;
				
				case 191:
					return 6224;
				
				case 192:
					return 6231;
				
				case 193:
					return 6238;
				
				default:
			}
			switch (iParam1)
			{
				case 194:
					return 6572;
				
				case 195:
					return 6579;
				
				case 196:
					return 6586;
				
				case 197:
					return 6593;
				
				case 198:
					return 6600;
				
				case 199:
					return 6607;
				
				case 200:
					return 6614;
				
				case 201:
					return 6621;
				
				case 202:
					return 6628;
				
				case 203:
					return 6635;
				
				case 204:
					return 6642;
				
				case 205:
					return 6649;
				
				case 206:
					return 6656;
				
				case 207:
					return 6663;
				
				case 208:
					return 6670;
				
				case 209:
					return 6677;
				
				case 210:
					return 6684;
				
				case 211:
					return 6691;
				
				case 212:
					return 6698;
				
				case 213:
					return 6705;
				
				case 214:
					return 6712;
				
				case 215:
					return 6719;
				
				case 216:
					return 6726;
				
				case 217:
					return 6733;
				
				case 218:
					return 6740;
				
				case 219:
					return 6747;
				
				case 220:
					return 6754;
				
				case 221:
					return 6761;
				
				case 222:
					return 6768;
				
				case 223:
					return 6775;
				
				case 224:
					return 6782;
				
				case 225:
					return 6789;
				
				case 226:
					return 6796;
				
				case 227:
					return 6803;
				
				case 228:
					return 6810;
				
				case 229:
					return 6817;
				
				case 230:
					return 6824;
				
				default:
			}
			switch (iParam1)
			{
				case 231:
					return 7294;
				
				case 232:
					return 7301;
				
				case 233:
					return 7308;
				
				case 234:
					return 7315;
				
				case 235:
					return 7322;
				
				case 236:
					return 7329;
				
				case 237:
					return 7336;
				
				case 238:
					return 7343;
				
				case 239:
					return 7350;
				
				case 240:
					return 7357;
				
				case 241:
					return 7364;
				
				case 242:
					return 7371;
				
				case 243:
					return 7378;
				
				case 244:
					return 7385;
				
				case 245:
					return 7392;
				
				case 246:
					return 7399;
				
				case 247:
					return 7406;
				
				case 248:
					return 7413;
				
				case 249:
					return 7420;
				
				case 250:
					return 7427;
				
				case 251:
					return 7434;
				
				case 252:
					return 7441;
				
				case 253:
					return 7448;
				
				case 254:
					return 7455;
				
				case 255:
					return 7462;
				
				case 256:
					return 7469;
				
				case 257:
					return 7476;
				
				case 258:
					return 7483;
				
				case 259:
					return 7490;
				
				case 260:
					return 7497;
				
				default:
			}
			switch (iParam1)
			{
				case 261:
					return 8017;
				
				case 262:
					return 8024;
				
				case 263:
					return 8031;
				
				case 264:
					return 8038;
				
				case 265:
					return 8045;
				
				case 266:
					return 8052;
				
				case 267:
					return 8059;
				
				case 268:
					return 8066;
				
				case 269:
					return 8073;
				
				case 270:
					return 8080;
				
				case 271:
					return 8541;
				
				case 272:
					return 8548;
				
				case 273:
					return 8555;
				
				case 274:
					return 8562;
				
				case 275:
					return 8569;
				
				case 276:
					return 8576;
				
				case 277:
					return 8583;
				
				case 278:
					return 8590;
				
				case 279:
					return 8597;
				
				case 280:
					return 8604;
				
				case 281:
					return 8986;
				
				case 282:
					return 8993;
				
				case 283:
					return 9000;
				
				case 284:
					return 9007;
				
				case 285:
					return 9014;
				
				case 286:
					return 9021;
				
				case 287:
					return 9028;
				
				case 288:
					return 9035;
				
				case 289:
					return 9042;
				
				case 290:
					return 9049;
				
				case 291:
					return 9056;
				
				case 292:
					return 9062;
				
				case 293:
					return 9068;
				
				case 294:
					return 9074;
				
				case 295:
					return 9081;
				
				case 296:
					return 9088;
				
				case 297:
					return 9095;
				
				case 298:
					return 9102;
				
				case 299:
					return 9109;
				
				case 300:
					return 9116;
				
				case 301:
					return 9123;
				
				case 302:
					return 9130;
				
				case 303:
					return 9137;
				
				case 304:
					return 9144;
				
				case 305:
					return 9150;
				
				case 306:
					return 9156;
				
				default:
			}
			break;
		
		case 6:
			switch (iParam1)
			{
				case 0:
					return 1635;
				
				case 1:
					return 1642;
				
				case 2:
					return 1649;
				
				case 3:
					return 1656;
				
				case 4:
					return 1663;
				
				case 5:
					return 1670;
				
				case 6:
					return 1677;
				
				case 7:
					return 1684;
				
				case 8:
					return 1691;
				
				case 9:
					return 1698;
				
				case 13:
					return 1723;
				
				case 14:
					return 1802;
				
				case 15:
					return 1809;
				
				case 16:
					return 1816;
				
				case 17:
					return 1823;
				
				case 18:
					return 1830;
				
				case 19:
					return 1837;
				
				case 20:
					return 1844;
				
				case 21:
					return 1851;
				
				case 22:
					return 1858;
				
				case 26:
					return 2172;
				
				case 27:
					return 2179;
				
				case 28:
					return 2186;
				
				case 29:
					return 2193;
				
				case 30:
					return 2200;
				
				case 31:
					return 2207;
				
				case 32:
					return 2214;
				
				case 33:
					return 2221;
				
				case 34:
					return 2228;
				
				case 35:
					return 2235;
				
				case 39:
					return 2835;
				
				case 40:
					return 2842;
				
				case 41:
					return 2849;
				
				case 42:
					return 2856;
				
				case 43:
					return 2863;
				
				case 44:
					return 2870;
				
				case 45:
					return 2877;
				
				case 46:
					return 2884;
				
				case 47:
					return 2891;
				
				case 48:
					return 2898;
				
				case 52:
					return 2959;
				
				case 53:
					return 2966;
				
				case 54:
					return 2973;
				
				case 55:
					return 2980;
				
				case 56:
					return 2987;
				
				case 57:
					return 2994;
				
				case 58:
					return 3001;
				
				case 59:
					return 3008;
				
				case 60:
					return 3015;
				
				case 61:
					return 3022;
				
				case 65:
					return 3243;
				
				case 66:
					return 3251;
				
				case 67:
					return 3259;
				
				case 68:
					return 3267;
				
				case 69:
					return 3275;
				
				case 70:
					return 3283;
				
				case 71:
					return 3291;
				
				case 72:
					return 3299;
				
				case 73:
					return 3307;
				
				case 74:
					return 3315;
				
				case 75:
					return 3323;
				
				case 76:
					return 3331;
				
				case 77:
					return 3339;
				
				case 78:
					return 3347;
				
				case joaat("MPSV_LP0_31"):
					return 3355;
				
				case 80:
					return 3363;
				
				case 81:
					return 3371;
				
				case 82:
					return 3379;
				
				case 83:
					return 3387;
				
				case 84:
					return 3395;
				
				default:
			}
			switch (iParam1)
			{
				case 88:
					return 4039;
				
				case 89:
					return 4047;
				
				case 90:
					return 4055;
				
				case 91:
					return 4063;
				
				case 92:
					return 4071;
				
				case 93:
					return 4079;
				
				case 94:
					return 4087;
				
				case 95:
					return 4095;
				
				case 96:
					return 4103;
				
				case 97:
					return 4111;
				
				case 98:
					return 4119;
				
				case 99:
					return 4127;
				
				case 100:
					return 4135;
				
				case 101:
					return 4143;
				
				case 102:
					return 4151;
				
				case 103:
					return 4159;
				
				case 104:
					return 4167;
				
				case 105:
					return 4175;
				
				case 106:
					return 4183;
				
				case 107:
					return 4191;
				
				case 108:
					return 4199;
				
				case 109:
					return 4207;
				
				case 110:
					return 4215;
				
				case 111:
					return 4223;
				
				case 112:
					return 4231;
				
				case 113:
					return 4239;
				
				case 114:
					return 4247;
				
				case 115:
					return 4255;
				
				case 116:
					return 4263;
				
				case 117:
					return 4271;
				
				case 118:
					return 4279;
				
				case 119:
					return 4287;
				
				case 120:
					return 4295;
				
				case 121:
					return 4303;
				
				case 122:
					return 4311;
				
				case 123:
					return 4319;
				
				case 124:
					return 4327;
				
				case 125:
					return 4335;
				
				case 126:
					return 4343;
				
				case 127:
					return 4351;
				
				case 128:
					return 4359;
				
				case 129:
					return 4367;
				
				case 130:
					return 4375;
				
				case 131:
					return 4383;
				
				case 132:
					return 4391;
				
				case 133:
					return 4399;
				
				case 134:
					return 4407;
				
				case 135:
					return 4415;
				
				case 136:
					return 4423;
				
				case 137:
					return 4431;
				
				case 138:
					return 4439;
				
				case 139:
					return 4447;
				
				case 140:
					return 4455;
				
				case 141:
					return 4463;
				
				case 142:
					return 4471;
				
				case 143:
					return 4479;
				
				case 144:
					return 4487;
				
				case 145:
					return 4495;
				
				case 146:
					return 4503;
				
				case 147:
					return 4511;
				
				case 148:
					return 4519;
				
				case 149:
					return 4527;
				
				case 150:
					return 4535;
				
				case 151:
					return 4543;
				
				case 152:
					return 4551;
				
				case 153:
					return 4559;
				
				case 154:
					return 4567;
				
				case 155:
					return 4575;
				
				case 156:
					return 4583;
				
				case 157:
					return 4591;
				
				case 158:
					return 5484;
				
				default:
			}
			switch (iParam1)
			{
				case 159:
					return 5932;
				
				case 160:
					return 5939;
				
				case 161:
					return 5946;
				
				case 162:
					return 5953;
				
				case 163:
					return 5960;
				
				case 164:
					return 5967;
				
				case 165:
					return 5974;
				
				case 166:
					return 5981;
				
				case 167:
					return 5988;
				
				case 168:
					return 5995;
				
				case 169:
					return 6002;
				
				case 170:
					return 6009;
				
				case 171:
					return 6016;
				
				case 172:
					return 6023;
				
				case 173:
					return 6030;
				
				case 174:
					return 6037;
				
				case 175:
					return 6044;
				
				case 176:
					return 6051;
				
				case 177:
					return 6058;
				
				case 178:
					return 6065;
				
				case 179:
					return 6072;
				
				case 180:
					return 6079;
				
				case 181:
					return 6086;
				
				case 182:
					return 6093;
				
				case 183:
					return 6100;
				
				default:
			}
			switch (iParam1)
			{
				case 184:
					return 6177;
				
				case 185:
					return 6184;
				
				case 186:
					return 6191;
				
				case 187:
					return 6198;
				
				case 188:
					return 6205;
				
				case 189:
					return 6212;
				
				case 190:
					return 6219;
				
				case 191:
					return 6226;
				
				case 192:
					return 6233;
				
				case 193:
					return 6240;
				
				default:
			}
			switch (iParam1)
			{
				case 194:
					return 6574;
				
				case 195:
					return 6581;
				
				case 196:
					return 6588;
				
				case 197:
					return 6595;
				
				case 198:
					return 6602;
				
				case 199:
					return 6609;
				
				case 200:
					return 6616;
				
				case 201:
					return 6623;
				
				case 202:
					return 6630;
				
				case 203:
					return 6637;
				
				case 204:
					return 6644;
				
				case 205:
					return 6651;
				
				case 206:
					return 6658;
				
				case 207:
					return 6665;
				
				case 208:
					return 6672;
				
				case 209:
					return 6679;
				
				case 210:
					return 6686;
				
				case 211:
					return 6693;
				
				case 212:
					return 6700;
				
				case 213:
					return 6707;
				
				case 214:
					return 6714;
				
				case 215:
					return 6721;
				
				case 216:
					return 6728;
				
				case 217:
					return 6735;
				
				case 218:
					return 6742;
				
				case 219:
					return 6749;
				
				case 220:
					return 6756;
				
				case 221:
					return 6763;
				
				case 222:
					return 6770;
				
				case 223:
					return 6777;
				
				case 224:
					return 6784;
				
				case 225:
					return 6791;
				
				case 226:
					return 6798;
				
				case 227:
					return 6805;
				
				case 228:
					return 6812;
				
				case 229:
					return 6819;
				
				case 230:
					return 6826;
				
				default:
			}
			switch (iParam1)
			{
				case 231:
					return 7296;
				
				case 232:
					return 7303;
				
				case 233:
					return 7310;
				
				case 234:
					return 7317;
				
				case 235:
					return 7324;
				
				case 236:
					return 7331;
				
				case 237:
					return 7338;
				
				case 238:
					return 7345;
				
				case 239:
					return 7352;
				
				case 240:
					return 7359;
				
				case 241:
					return 7366;
				
				case 242:
					return 7373;
				
				case 243:
					return 7380;
				
				case 244:
					return 7387;
				
				case 245:
					return 7394;
				
				case 246:
					return 7401;
				
				case 247:
					return 7408;
				
				case 248:
					return 7415;
				
				case 249:
					return 7422;
				
				case 250:
					return 7429;
				
				case 251:
					return 7436;
				
				case 252:
					return 7443;
				
				case 253:
					return 7450;
				
				case 254:
					return 7457;
				
				case 255:
					return 7464;
				
				case 256:
					return 7471;
				
				case 257:
					return 7478;
				
				case 258:
					return 7485;
				
				case 259:
					return 7492;
				
				case 260:
					return 7499;
				
				default:
			}
			switch (iParam1)
			{
				case 261:
					return 8019;
				
				case 262:
					return 8026;
				
				case 263:
					return 8033;
				
				case 264:
					return 8040;
				
				case 265:
					return 8047;
				
				case 266:
					return 8054;
				
				case 267:
					return 8061;
				
				case 268:
					return 8068;
				
				case 269:
					return 8075;
				
				case 270:
					return 8082;
				
				case 271:
					return 8543;
				
				case 272:
					return 8550;
				
				case 273:
					return 8557;
				
				case 274:
					return 8564;
				
				case 275:
					return 8571;
				
				case 276:
					return 8578;
				
				case 277:
					return 8585;
				
				case 278:
					return 8592;
				
				case 279:
					return 8599;
				
				case 280:
					return 8606;
				
				case 281:
					return 8988;
				
				case 282:
					return 8995;
				
				case 283:
					return 9002;
				
				case 284:
					return 9009;
				
				case 285:
					return 9016;
				
				case 286:
					return 9023;
				
				case 287:
					return 9030;
				
				case 288:
					return 9037;
				
				case 289:
					return 9044;
				
				case 290:
					return 9051;
				
				case 294:
					return 9076;
				
				case 295:
					return 9083;
				
				case 296:
					return 9090;
				
				case 297:
					return 9097;
				
				case 298:
					return 9104;
				
				case 299:
					return 9111;
				
				case 300:
					return 9118;
				
				case 301:
					return 9125;
				
				case 302:
					return 9132;
				
				case 303:
					return 9139;
				
				default:
			}
			break;
		
		case 7:
			switch (iParam1)
			{
				case 0:
					return 1634;
				
				case 1:
					return 1641;
				
				case 2:
					return 1648;
				
				case 3:
					return 1655;
				
				case 4:
					return 1662;
				
				case 5:
					return 1669;
				
				case 6:
					return 1676;
				
				case 7:
					return 1683;
				
				case 8:
					return 1690;
				
				case 9:
					return 1697;
				
				case 10:
					return 1704;
				
				case 11:
					return 1710;
				
				case 12:
					return 1716;
				
				case 13:
					return 1722;
				
				case 14:
					return 1801;
				
				case 15:
					return 1808;
				
				case 16:
					return 1815;
				
				case 17:
					return 1822;
				
				case 18:
					return 1829;
				
				case 19:
					return 1836;
				
				case 20:
					return 1843;
				
				case 21:
					return 1850;
				
				case 22:
					return 1857;
				
				case 23:
					return 1864;
				
				case 24:
					return 1870;
				
				case 25:
					return 1876;
				
				case 26:
					return 2171;
				
				case 27:
					return 2178;
				
				case 28:
					return 2185;
				
				case 29:
					return 2192;
				
				case 30:
					return 2199;
				
				case 31:
					return 2206;
				
				case 32:
					return 2213;
				
				case 33:
					return 2220;
				
				case 34:
					return 2227;
				
				case 35:
					return 2234;
				
				case 36:
					return 2241;
				
				case 37:
					return 2247;
				
				case 38:
					return 2253;
				
				case 39:
					return 2834;
				
				case 40:
					return 2841;
				
				case 41:
					return 2848;
				
				case 42:
					return 2855;
				
				case 43:
					return 2862;
				
				case 44:
					return 2869;
				
				case 45:
					return 2876;
				
				case 46:
					return 2883;
				
				case 47:
					return 2890;
				
				case 48:
					return 2897;
				
				case 49:
					return 2904;
				
				case 50:
					return 2910;
				
				case 51:
					return 2916;
				
				case 52:
					return 2958;
				
				case 53:
					return 2965;
				
				case 54:
					return 2972;
				
				case 55:
					return 2979;
				
				case 56:
					return 2986;
				
				case 57:
					return 2993;
				
				case 58:
					return 3000;
				
				case 59:
					return 3007;
				
				case 60:
					return 3014;
				
				case 61:
					return 3021;
				
				case 62:
					return 3028;
				
				case 63:
					return 3034;
				
				case 64:
					return 3040;
				
				case 65:
					return 3241;
				
				case 66:
					return 3249;
				
				case 67:
					return 3257;
				
				case 68:
					return 3265;
				
				case 69:
					return 3273;
				
				case 70:
					return 3281;
				
				case 71:
					return 3289;
				
				case 72:
					return 3297;
				
				case 73:
					return 3305;
				
				case 74:
					return 3313;
				
				case 75:
					return 3321;
				
				case 76:
					return 3329;
				
				case 77:
					return 3338;
				
				case 78:
					return 3346;
				
				case joaat("MPSV_LP0_31"):
					return 3353;
				
				case 80:
					return 3361;
				
				case 81:
					return 3369;
				
				case 82:
					return 3377;
				
				case 83:
					return 3385;
				
				case 84:
					return 3393;
				
				case 85:
					return 3401;
				
				case 86:
					return 3408;
				
				case 87:
					return 3415;
				
				default:
			}
			switch (iParam1)
			{
				case 88:
					return 4037;
				
				case 89:
					return 4045;
				
				case 90:
					return 4053;
				
				case 91:
					return 4061;
				
				case 92:
					return 4069;
				
				case 93:
					return 4077;
				
				case 94:
					return 4085;
				
				case 95:
					return 4093;
				
				case 96:
					return 4101;
				
				case 97:
					return 4109;
				
				case 98:
					return 4117;
				
				case 99:
					return 4125;
				
				case 100:
					return 4134;
				
				case 101:
					return 4142;
				
				case 102:
					return 4149;
				
				case 103:
					return 4157;
				
				case 104:
					return 4165;
				
				case 105:
					return 4173;
				
				case 106:
					return 4181;
				
				case 107:
					return 4189;
				
				case 108:
					return 4197;
				
				case 109:
					return 4205;
				
				case 110:
					return 4213;
				
				case 111:
					return 4221;
				
				case 112:
					return 4229;
				
				case 113:
					return 4237;
				
				case 114:
					return 4245;
				
				case 115:
					return 4253;
				
				case 116:
					return 4261;
				
				case 117:
					return 4269;
				
				case 118:
					return 4277;
				
				case 119:
					return 4285;
				
				case 120:
					return 4294;
				
				case 121:
					return 4302;
				
				case 122:
					return 4309;
				
				case 123:
					return 4317;
				
				case 124:
					return 4325;
				
				case 125:
					return 4333;
				
				case 126:
					return 4341;
				
				case 127:
					return 4349;
				
				case 128:
					return 4357;
				
				case 129:
					return 4365;
				
				case 130:
					return 4373;
				
				case 131:
					return 4381;
				
				case 132:
					return 4389;
				
				case 133:
					return 4397;
				
				case 134:
					return 4405;
				
				case 135:
					return 4413;
				
				case 136:
					return 4421;
				
				case 137:
					return 4429;
				
				case 138:
					return 4437;
				
				case 139:
					return 4445;
				
				case 140:
					return 4454;
				
				case 141:
					return 4462;
				
				case 142:
					return 4469;
				
				case 143:
					return 4477;
				
				case 144:
					return 4485;
				
				case 145:
					return 4493;
				
				case 146:
					return 4501;
				
				case 147:
					return 4509;
				
				case 148:
					return 4517;
				
				case 149:
					return 4525;
				
				case 150:
					return 4533;
				
				case 151:
					return 4541;
				
				case 152:
					return 4549;
				
				case 153:
					return 4557;
				
				case 154:
					return 4565;
				
				case 155:
					return 4573;
				
				case 156:
					return 4581;
				
				case 157:
					return 4589;
				
				case 158:
					return 5482;
				
				default:
			}
			switch (iParam1)
			{
				case 159:
					return 5931;
				
				case 160:
					return 5938;
				
				case 161:
					return 5945;
				
				case 162:
					return 5952;
				
				case 163:
					return 5959;
				
				case 164:
					return 5966;
				
				case 165:
					return 5973;
				
				case 166:
					return 5980;
				
				case 167:
					return 5987;
				
				case 168:
					return 5994;
				
				case 169:
					return 6001;
				
				case 170:
					return 6008;
				
				case 171:
					return 6015;
				
				case 172:
					return 6022;
				
				case 173:
					return 6029;
				
				case 174:
					return 6036;
				
				case 175:
					return 6043;
				
				case 176:
					return 6050;
				
				case 177:
					return 6057;
				
				case 178:
					return 6064;
				
				case 179:
					return 6071;
				
				case 180:
					return 6078;
				
				case 181:
					return 6085;
				
				case 182:
					return 6092;
				
				case 183:
					return 6099;
				
				default:
			}
			switch (iParam1)
			{
				case 184:
					return 6176;
				
				case 185:
					return 6183;
				
				case 186:
					return 6190;
				
				case 187:
					return 6197;
				
				case 188:
					return 6204;
				
				case 189:
					return 6211;
				
				case 190:
					return 6218;
				
				case 191:
					return 6225;
				
				case 192:
					return 6232;
				
				case 193:
					return 6239;
				
				default:
			}
			switch (iParam1)
			{
				case 194:
					return 6573;
				
				case 195:
					return 6580;
				
				case 196:
					return 6587;
				
				case 197:
					return 6594;
				
				case 198:
					return 6601;
				
				case 199:
					return 6608;
				
				case 200:
					return 6615;
				
				case 201:
					return 6622;
				
				case 202:
					return 6629;
				
				case 203:
					return 6636;
				
				case 204:
					return 6643;
				
				case 205:
					return 6650;
				
				case 206:
					return 6657;
				
				case 207:
					return 6664;
				
				case 208:
					return 6671;
				
				case 209:
					return 6678;
				
				case 210:
					return 6685;
				
				case 211:
					return 6692;
				
				case 212:
					return 6699;
				
				case 213:
					return 6706;
				
				case 214:
					return 6713;
				
				case 215:
					return 6720;
				
				case 216:
					return 6727;
				
				case 217:
					return 6734;
				
				case 218:
					return 6741;
				
				case 219:
					return 6748;
				
				case 220:
					return 6755;
				
				case 221:
					return 6762;
				
				case 222:
					return 6769;
				
				case 223:
					return 6776;
				
				case 224:
					return 6783;
				
				case 225:
					return 6790;
				
				case 226:
					return 6797;
				
				case 227:
					return 6804;
				
				case 228:
					return 6811;
				
				case 229:
					return 6818;
				
				case 230:
					return 6825;
				
				default:
			}
			switch (iParam1)
			{
				case 231:
					return 7295;
				
				case 232:
					return 7302;
				
				case 233:
					return 7309;
				
				case 234:
					return 7316;
				
				case 235:
					return 7323;
				
				case 236:
					return 7330;
				
				case 237:
					return 7337;
				
				case 238:
					return 7344;
				
				case 239:
					return 7351;
				
				case 240:
					return 7358;
				
				case 241:
					return 7365;
				
				case 242:
					return 7372;
				
				case 243:
					return 7379;
				
				case 244:
					return 7386;
				
				case 245:
					return 7393;
				
				case 246:
					return 7400;
				
				case 247:
					return 7407;
				
				case 248:
					return 7414;
				
				case 249:
					return 7421;
				
				case 250:
					return 7428;
				
				case 251:
					return 7435;
				
				case 252:
					return 7442;
				
				case 253:
					return 7449;
				
				case 254:
					return 7456;
				
				case 255:
					return 7463;
				
				case 256:
					return 7470;
				
				case 257:
					return 7477;
				
				case 258:
					return 7484;
				
				case 259:
					return 7491;
				
				case 260:
					return 7498;
				
				default:
			}
			switch (iParam1)
			{
				case 261:
					return 8018;
				
				case 262:
					return 8025;
				
				case 263:
					return 8032;
				
				case 264:
					return 8039;
				
				case 265:
					return 8046;
				
				case 266:
					return 8053;
				
				case 267:
					return 8060;
				
				case 268:
					return 8067;
				
				case 269:
					return 8074;
				
				case 270:
					return 8081;
				
				case 271:
					return 8542;
				
				case 272:
					return 8549;
				
				case 273:
					return 8556;
				
				case 274:
					return 8563;
				
				case 275:
					return 8570;
				
				case 276:
					return 8577;
				
				case 277:
					return 8584;
				
				case 278:
					return 8591;
				
				case 279:
					return 8598;
				
				case 280:
					return 8605;
				
				case 281:
					return 8987;
				
				case 282:
					return 8994;
				
				case 283:
					return 9001;
				
				case 284:
					return 9008;
				
				case 285:
					return 9015;
				
				case 286:
					return 9022;
				
				case 287:
					return 9029;
				
				case 288:
					return 9036;
				
				case 289:
					return 9043;
				
				case 290:
					return 9050;
				
				case 291:
					return 9057;
				
				case 292:
					return 9063;
				
				case 293:
					return 9069;
				
				case 294:
					return 9075;
				
				case 295:
					return 9082;
				
				case 296:
					return 9089;
				
				case 297:
					return 9096;
				
				case 298:
					return 9103;
				
				case 299:
					return 9110;
				
				case 300:
					return 9117;
				
				case 301:
					return 9124;
				
				case 302:
					return 9131;
				
				case 303:
					return 9138;
				
				case 304:
					return 9145;
				
				case 305:
					return 9151;
				
				case 306:
					return 9157;
				
				default:
			}
			break;
	}
	return 1629;
}

int func_792(int iParam0)
{
	int iVar0;
	
	if (iParam0 < 307)
	{
		iVar0 = 0;
		while (iVar0 < 25)
		{
			if (iParam0 >= func_701(iVar0) && iParam0 < func_793(iVar0))
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return -1;
}

int func_793(int iParam0)
{
	int iVar0;
	
	switch (iParam0)
	{
		case 8:
			return 108;
			break;
		
		case 9:
			return 128;
			break;
		
		case 10:
			return 148;
			break;
		
		case 11:
			return 156;
			break;
		
		case 6:
			return 75;
			break;
		
		case 7:
			return 88;
			break;
		
		case 5:
			return -1;
			break;
		
		case 12:
			return 179;
			break;
		
		case 13:
			return 186;
			break;
		
		case 14:
			return 192;
			break;
		
		case 15:
			return 202;
			break;
		
		case 16:
			return 212;
			break;
		
		case 17:
			return 222;
			break;
		
		case 18:
			return 236;
			break;
		
		case 19:
			return 246;
			break;
		
		case 20:
			return 256;
			break;
		
		case 21:
			return 268;
			break;
		
		case 22:
			return 278;
			break;
		
		case 23:
			return 294;
			break;
		
		case 24:
			return 307;
			break;
	}
	if (iParam0 >= 1000)
	{
		iVar0 = func_644(iParam0);
		return func_794(iVar0);
	}
	return (func_702(iParam0, -1, 1) * iParam0 + 1);
}

int func_794(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 157;
		
		case 2:
			return 224;
		
		case 1:
			return 227;
		
		case 3:
			return 279;
		
		default:
	}
	return -1;
}

int func_795(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	switch (iVar0)
	{
		case joaat("technical2"):
			return 0;
			break;
		
		case joaat("boxville5"):
			return 1;
			break;
		
		case joaat("wastelander"):
			return 2;
			break;
		
		case joaat("phantom2"):
			return 3;
			break;
		
		case joaat("voltic2"):
			return 4;
			break;
		
		case joaat("dune4"):
			return 5;
			break;
		
		case joaat("dune5"):
			return 5;
			break;
		
		case joaat("ruiner2"):
			return 6;
			break;
		
		case joaat("blazer5"):
			return 7;
			break;
	}
	return -1;
}

int func_796(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (iParam0 != -1)
	{
		iVar0 = -1;
		iVar1 = iParam0 + 157;
		func_700(iVar1, &iVar0, 1);
		if (iVar0 >= 0)
		{
			iVar2 = func_462(func_791(4, iVar0), -1, 0);
			if (iVar2 != 0)
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_797(int iParam0)
{
	switch (iParam0)
	{
		case joaat("trailersmall2"):
			return 0;
			break;
	}
	return -1;
}

int func_798(int iParam0)
{
	if (iParam0 != func_65())
	{
		if (Global_1590682[iParam0 /*883*/].f_274.f_339 != 0)
		{
			return 1;
		}
	}
	return 0;
}

bool func_799()
{
	return func_462(6543, -1, 0) != 0;
}

bool func_800()
{
	return func_462(6164, -1, 0) != 0;
}

bool func_801()
{
	return func_462(5381, -1, 0) != 0;
}

bool func_802()
{
	return func_462(3829, -1, 0) != 0;
}

bool func_803()
{
	return func_462(3224, -1, 0) != 0;
}

bool func_804()
{
	return func_462(5380, -1, 0) != 0;
}

int func_805()
{
	int iVar0;
	
	iVar0 = func_495();
	if (iVar0 != func_65())
	{
		return Global_1630317[iVar0 /*595*/].f_11.f_98;
	}
	return 0;
}

var func_806(bool bParam0)
{
	var uVar0;
	int iVar1;
	
	iVar1 = unk_0x460153A63B9477BC();
	if (bParam0)
	{
		if (func_820(iVar1, 4, 0))
		{
			unk_0xBE20AB8238688965(&uVar0, 0);
		}
		if (func_820(iVar1, 5, 0))
		{
			unk_0xBE20AB8238688965(&uVar0, 1);
		}
		if (func_820(iVar1, 6, 1))
		{
			unk_0xBE20AB8238688965(&uVar0, 2);
		}
		if (func_820(iVar1, 1, 0))
		{
			unk_0xBE20AB8238688965(&uVar0, 3);
		}
		if (func_820(iVar1, 2, 0))
		{
			unk_0xBE20AB8238688965(&uVar0, 4);
		}
		if (func_820(iVar1, 3, 0))
		{
			unk_0xBE20AB8238688965(&uVar0, 5);
		}
		if ((((func_819(iVar1, 61) || func_819(iVar1, 62)) || func_819(iVar1, 63)) || func_819(iVar1, 64)) || func_819(iVar1, 65))
		{
			unk_0xBE20AB8238688965(&uVar0, 6);
		}
		if (func_623(iVar1))
		{
			unk_0xBE20AB8238688965(&uVar0, 7);
		}
		if (func_817(iVar1, 0))
		{
			unk_0xBE20AB8238688965(&uVar0, 8);
		}
		if (func_817(iVar1, 1))
		{
			unk_0xBE20AB8238688965(&uVar0, 9);
		}
		if (func_817(iVar1, 2))
		{
			unk_0xBE20AB8238688965(&uVar0, 10);
		}
		if (func_464(iVar1))
		{
			unk_0xBE20AB8238688965(&uVar0, 11);
		}
		if (func_813(iVar1, 3))
		{
			unk_0xBE20AB8238688965(&uVar0, 12);
		}
		if (func_813(iVar1, 4))
		{
			unk_0xBE20AB8238688965(&uVar0, 13);
		}
		if (func_813(iVar1, 2))
		{
			unk_0xBE20AB8238688965(&uVar0, 14);
		}
		if (func_813(iVar1, 6))
		{
			unk_0xBE20AB8238688965(&uVar0, 15);
		}
		if (func_813(iVar1, 5))
		{
			unk_0xBE20AB8238688965(&uVar0, 16);
		}
		if (func_811(iVar1))
		{
			unk_0xBE20AB8238688965(&uVar0, 17);
		}
		if (func_813(iVar1, 1))
		{
			unk_0xBE20AB8238688965(&uVar0, 18);
		}
		if (func_823(iVar1))
		{
			unk_0xBE20AB8238688965(&uVar0, 19);
		}
		if (func_684(iVar1))
		{
			unk_0xBE20AB8238688965(&uVar0, 20);
		}
		if (func_798(iVar1))
		{
			unk_0xBE20AB8238688965(&uVar0, 21);
		}
		if (func_736(iVar1))
		{
			unk_0xBE20AB8238688965(&uVar0, 22);
		}
		if (func_645(iVar1))
		{
			unk_0xBE20AB8238688965(&uVar0, 23);
		}
		if (func_810(iVar1))
		{
			unk_0xBE20AB8238688965(&uVar0, 24);
		}
		if (func_809(iVar1))
		{
			unk_0xBE20AB8238688965(&uVar0, 25);
		}
		if (func_718(iVar1))
		{
			unk_0xBE20AB8238688965(&uVar0, 26);
		}
		if (func_808(iVar1))
		{
			unk_0xBE20AB8238688965(&uVar0, 27);
		}
		if (func_677(iVar1))
		{
			unk_0xBE20AB8238688965(&uVar0, 28);
		}
		if (func_807(iVar1))
		{
			unk_0xBE20AB8238688965(&uVar0, 29);
		}
	}
	return uVar0;
}

bool func_807(int iParam0)
{
	if (iParam0 == func_65())
	{
		return 0;
	}
	return unk_0xCE990E643CD9D0E5(Global_1590682[iParam0 /*883*/].f_274.f_443, 0);
}

int func_808(int iParam0)
{
	if (iParam0 != func_65())
	{
		return unk_0xCE990E643CD9D0E5(Global_1590682[iParam0 /*883*/].f_274.f_270, 1);
	}
	return 0;
}

bool func_809(int iParam0)
{
	return Global_2425869[iParam0 /*443*/].f_265;
}

int func_810(int iParam0)
{
	if (iParam0 != func_65())
	{
		return Global_1590682[iParam0 /*883*/].f_274.f_393 != 0;
	}
	return 0;
}

bool func_811(int iParam0)
{
	return func_812(iParam0) != 0;
}

int func_812(int iParam0)
{
	if (iParam0 == func_65())
	{
		return 0;
	}
	return Global_1590682[iParam0 /*883*/].f_274.f_134;
}

int func_813(int iParam0, int iParam1)
{
	if (iParam0 == func_65())
	{
		return 0;
	}
	switch (iParam1)
	{
		case 1:
			return func_816(iParam0);
		
		case 2:
			return func_815(iParam0, 4);
		
		case 3:
			return func_815(iParam0, 3);
		
		case 4:
			return func_815(iParam0, 1);
		
		case 5:
			return func_815(iParam0, 0);
		
		case 6:
			return func_815(iParam0, 2);
		
		case 0:
			if (func_823(iParam0) || func_814(iParam0))
			{
				return 1;
			}
			break;
	}
	return 0;
}

int func_814(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 4)
	{
		if (Global_1590682[iParam0 /*883*/].f_274.f_106[iVar0 /*3*/] != 0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_815(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	if (iParam0 == func_65())
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 <= 5)
	{
		if (Global_1590682[iParam0 /*883*/].f_274.f_183[iVar0 /*12*/] != 0)
		{
			iVar1 = Global_1590682[iParam0 /*883*/].f_274.f_183[iVar0 /*12*/];
			if (func_489(iVar1) == iParam1)
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

bool func_816(int iParam0)
{
	return func_475(iParam0) != 0;
}

int func_817(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam0 == func_65())
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (Global_1590682[iParam0 /*883*/].f_274.f_106[iVar0 /*3*/] != 0)
		{
			if (func_818(Global_1590682[iParam0 /*883*/].f_274.f_106[iVar0 /*3*/]) == iParam1)
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_818(int iParam0)
{
	if (func_612(iParam0))
	{
		switch (iParam0)
		{
			case 1:
			case 2:
			case 3:
			case 4:
			case 5:
			case 9:
				return 0;
			
			case 10:
			case 11:
			case 12:
			case 13:
			case 14:
			case 15:
			case 21:
			case 7:
				return 1;
			
			case 16:
			case 17:
			case 18:
			case 19:
			case 20:
			case 22:
			case 6:
			case 8:
				return 2;
			}
		
		default:
	}
	return 3;
}

int func_819(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam0 != func_65() && func_1031(iParam0, 0, 1))
	{
		iVar0 = 0;
		while (iVar0 < 25)
		{
			if (Global_1590682[iParam0 /*883*/].f_274[iVar0] == iParam1)
			{
				return 1;
			}
			iVar0++;
		}
	}
	return 0;
}

int func_820(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	
	if (iParam1 < 1 || iParam1 > 10)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 126)
	{
		if (func_822(iVar0) == iParam1 && (!func_821(iVar0) || !bParam2))
		{
			if (func_819(iParam0, iVar0))
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_821(int iParam0)
{
	switch (iParam0)
	{
		case 61:
		case 62:
		case 63:
		case 64:
		case 65:
			return 1;
		
		default:
	}
	return 0;
}

int func_822(int iParam0)
{
	switch (iParam0)
	{
		case 86:
			return 8;
			break;
		
		case 103:
		case 106:
		case 109:
		case 112:
		case 104:
		case 107:
		case 110:
		case 113:
		case 105:
		case 108:
		case 111:
		case 114:
			return 10;
			break;
		
		case 87:
		case 88:
		case 89:
		case 90:
			return 9;
			break;
		
		case 91:
		case 92:
		case 93:
		case 94:
		case 95:
		case 96:
		case 97:
		case 98:
		case 99:
		case 100:
		case 101:
		case 102:
			return 7;
			break;
		
		case 1:
		case 2:
		case 3:
		case 4:
		case 5:
		case 6:
		case 7:
		case 34:
		case 35:
		case 36:
		case 37:
		case 38:
		case 39:
		case 40:
		case 41:
		case 42:
		case 43:
		case 61:
		case 62:
		case 63:
		case 64:
		case 65:
		case 73:
		case 74:
		case 75:
		case 76:
		case 77:
		case 78:
		case joaat("MPSV_LP0_31"):
		case 80:
		case 81:
		case 82:
		case 83:
		case 84:
		case 85:
			return 6;
			break;
		
		case 8:
		case 9:
		case 10:
		case 11:
		case 12:
		case 13:
		case 14:
		case 15:
		case 16:
		case 66:
		case 67:
		case 68:
		case 69:
			return 5;
			break;
		
		case 17:
		case 18:
		case 19:
		case 20:
		case 21:
		case 22:
		case 23:
		case 70:
		case 71:
		case 72:
			return 4;
			break;
		
		case 24:
		case 26:
		case 27:
		case 54:
		case 56:
		case 57:
			return 3;
			break;
		
		case 25:
		case 28:
		case 32:
		case 33:
		case 50:
		case 52:
		case 53:
		case 55:
			return 2;
			break;
		
		case 29:
		case 30:
		case 31:
		case 44:
		case 45:
		case 46:
		case 47:
		case 48:
		case 49:
		case 51:
		case 58:
		case 59:
		case 60:
			return 1;
			break;
	}
	return 0;
}

int func_823(int iParam0)
{
	if (iParam0 != func_65())
	{
		return Global_1590682[iParam0 /*883*/].f_274.f_264 != 0;
	}
	return 0;
}

int func_824(int iParam0)
{
	if (func_105(iParam0) == 225 || func_105(iParam0) == 226)
	{
		return func_454(iParam0);
	}
	return -1;
}

var func_825()
{
	int iVar0;
	var uVar1;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (func_598(unk_0x460153A63B9477BC(), iVar0))
		{
			unk_0xBE20AB8238688965(&uVar1, iVar0);
		}
		iVar0++;
	}
	return uVar1;
}

void func_826(bool bParam0)
{
	if (bParam0)
	{
		if (!func_109(unk_0x460153A63B9477BC(), 9))
		{
			if (func_141(unk_0x460153A63B9477BC()) != 0)
			{
				func_110(9);
			}
		}
	}
	else if (func_109(unk_0x460153A63B9477BC(), 9))
	{
		func_108(9);
	}
}

int func_827(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7, int iParam8, int iParam9)
{
	int iVar0;
	char* sVar1;
	int iVar2;
	char* sVar3;
	int iVar4;
	char* sVar5;
	char* sVar6;
	int iVar7;
	
	unk_0xD2459066EA58CE43(&Global_7551, 10);
	iVar0 = 0;
	sVar1 = "NULL";
	iVar2 = -99;
	sVar3 = "NULL";
	iVar4 = 0;
	sVar5 = "NULL";
	sVar6 = "NULL";
	iVar7 = 3;
	if (func_829(iParam0, sParam1, iParam2, iVar0, sVar1, sVar3, iVar2, iParam3, iParam4, iParam5, bParam7, iParam8, iParam9, iVar4, sVar5, sVar6, iVar7) == 1)
	{
		if (bParam7 == 1)
		{
			Global_8258 = iParam6;
			Global_8161[3 /*6*/] = { func_828(iParam0) };
			Global_8238 = iParam0;
			unk_0xBE20AB8238688965(&Global_7551, 1);
			unk_0xBE20AB8238688965(&Global_7551, 7);
		}
		return 1;
	}
	return 0;
}

struct<4> func_828(int iParam0)
{
	return Global_1848[iParam0 /*29*/].f_3;
}

int func_829(int iParam0, char* sParam1, int iParam2, int iParam3, char* sParam4, char* sParam5, int iParam6, int iParam7, var uParam8, var uParam9, bool bParam10, var uParam11, var uParam12, int iParam13, char* sParam14, char* sParam15, int iParam16)
{
	int iVar0;
	
	if (iParam13 > 99)
	{
	}
	if (unk_0xF005CCA4263DF67F(sParam14, sParam15))
	{
	}
	func_841();
	iVar0 = 0;
	switch (iParam16)
	{
		case 0:
			if (Global_19681 == 0)
			{
				iVar0 = 0;
			}
			else
			{
				iVar0 = 1;
			}
			break;
		
		case 2:
			if (Global_19681 == 2)
			{
				iVar0 = 0;
			}
			else
			{
				iVar0 = 1;
			}
			break;
		
		case 1:
			if (Global_19681 == 1)
			{
				iVar0 = 0;
			}
			else
			{
				iVar0 = 1;
			}
			break;
		
		default:
			iVar0 = 0;
			break;
	}
	if (iVar0 == 0)
	{
		if (unk_0x5A228A6A51E757C8(unk_0x460153A63B9477BC()))
		{
			if (unk_0xE43E3F96A5D750CE(unk_0x9B0761B4C3EB8BC7()))
			{
				return 0;
			}
		}
		if (Global_111858.f_14047[Global_19681 /*20*/].f_17 == 1)
		{
			return 0;
		}
		if (unk_0x7B70881748D166CD(joaat("apptextmessage")) > 0)
		{
			return 0;
		}
		if (unk_0x7B70881748D166CD(joaat("apptextmessage")) > 0)
		{
			return 0;
		}
	}
	if (func_840() == 0)
	{
		func_838();
		return 0;
	}
	func_837(Global_22072);
	StringCopy(&(Global_111858.f_14137[Global_22072 /*104*/]), sParam1, 64);
	Global_111858.f_14137[Global_22072 /*104*/].f_17 = iParam0;
	if (iParam2 == 0)
	{
	}
	else
	{
		Global_111858.f_14137[Global_22072 /*104*/].f_24 = iParam2;
	}
	Global_111858.f_14137[Global_22072 /*104*/].f_25 = iParam7;
	Global_111858.f_14137[Global_22072 /*104*/].f_26 = uParam8;
	Global_111858.f_14137[Global_22072 /*104*/].f_29 = uParam9;
	Global_111858.f_14137[Global_22072 /*104*/].f_30 = uParam12;
	Global_111858.f_14137[Global_22072 /*104*/].f_31 = uParam11;
	Global_111858.f_14137[Global_22072 /*104*/].f_28 = 0;
	Global_111858.f_14137[Global_22072 /*104*/].f_32 = iParam3;
	StringCopy(&(Global_111858.f_14137[Global_22072 /*104*/].f_33), sParam4, 64);
	Global_111858.f_14137[Global_22072 /*104*/].f_49 = iParam6;
	StringCopy(&(Global_111858.f_14137[Global_22072 /*104*/].f_50), sParam5, 64);
	Global_111858.f_14137[Global_22072 /*104*/].f_66 = iParam13;
	StringCopy(&(Global_111858.f_14137[Global_22072 /*104*/].f_67), sParam14, 64);
	StringCopy(&(Global_111858.f_14137[Global_22072 /*104*/].f_83), sParam15, 64);
	if (unk_0xCE990E643CD9D0E5(Global_7551, 10))
	{
		Global_111858.f_14137[Global_22072 /*104*/].f_99[0] = 1;
		Global_111858.f_14137[Global_22072 /*104*/].f_99[1] = 1;
		Global_111858.f_14137[Global_22072 /*104*/].f_99[2] = 1;
		Global_8257 = 4;
		func_836(0);
		func_836(2);
		func_836(1);
	}
	else
	{
		func_841();
		switch (iParam16)
		{
			case 3:
				Global_111858.f_14137[Global_22072 /*104*/].f_99[Global_19681] = 1;
				break;
			
			case 0:
				Global_111858.f_14137[Global_22072 /*104*/].f_99[0] = 1;
				break;
			
			case 2:
				Global_111858.f_14137[Global_22072 /*104*/].f_99[2] = 1;
				break;
			
			case 1:
				Global_111858.f_14137[Global_22072 /*104*/].f_99[1] = 1;
				break;
		}
		if (iParam16 == 3)
		{
			switch (Global_19681)
			{
				case 0:
					func_836(0);
					Global_8257 = 0;
					break;
				
				case 1:
					func_836(1);
					Global_8257 = 1;
					break;
				
				case 2:
					func_836(2);
					Global_8257 = 2;
					break;
				
				case 3:
					func_836(3);
					Global_8257 = 3;
					break;
				
				default:
					Global_8257 = 4;
					break;
				}
			}
	}
	if (iParam7 == 1)
	{
		if (unk_0xCE990E643CD9D0E5(Global_7551, 10))
		{
			Global_111858.f_14047[0 /*20*/].f_17 = 1;
			Global_111858.f_14047[1 /*20*/].f_17 = 1;
			Global_111858.f_14047[2 /*20*/].f_17 = 1;
		}
		else
		{
			switch (iParam16)
			{
				case 3:
					Global_111858.f_14047[Global_19681 /*20*/].f_17 = 1;
					break;
				
				case 0:
					Global_111858.f_14047[0 /*20*/].f_17 = 1;
					break;
				
				case 2:
					Global_111858.f_14047[2 /*20*/].f_17 = 1;
					break;
				
				case 1:
					Global_111858.f_14047[1 /*20*/].f_17 = 1;
					break;
				}
			}
	}
	Global_22074[Global_22072] = 0;
	if (bParam10)
	{
		func_841();
		if (Global_19624)
		{
			StringCopy(&Global_19670, "Phone_SoundSet_Prologue", 24);
		}
		else
		{
			switch (Global_19681)
			{
				case 0:
					StringCopy(&Global_19670, "Phone_SoundSet_Michael", 24);
					break;
				
				case 2:
					StringCopy(&Global_19670, "Phone_SoundSet_Trevor", 24);
					break;
				
				case 1:
					StringCopy(&Global_19670, "Phone_SoundSet_Franklin", 24);
					break;
				
				default:
					StringCopy(&Global_19670, "Phone_SoundSet_Default", 24);
					break;
				}
		}
		if (!Global_8356[Global_19681 /*2811*/][0 /*281*/].f_259 == 1)
		{
			if (!func_437())
			{
				unk_0xC4CC25B68A91D144(-1, "Text_Arrive_Tone", &Global_19670, true);
			}
		}
	}
	if (!Global_19865)
	{
		if (Global_19681.f_1 == 6)
		{
			func_835(Global_19662, "SET_DATA_SLOT_EMPTY", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
			func_832(1);
			func_835(Global_19662, "DISPLAY_VIEW", 1f, to_float(Global_19661), -1082130432, -1082130432, -1082130432);
		}
	}
	func_830(iParam0, sParam1);
	return 1;
}

void func_830(int iParam0, char* sParam1)
{
	if (!func_831())
	{
		return;
	}
	unk_0x1A2DCF21E22955B0(iParam0, 1654525105, unk_0x856D5567211886A2(sParam1), 0);
}

int func_831()
{
	if (!Global_262145.f_28160)
	{
		return 0;
	}
	if (!Global_76833)
	{
		return 0;
	}
	if (unk_0x460153A63B9477BC() == func_65())
	{
		return 0;
	}
	if (func_150(unk_0x460153A63B9477BC()))
	{
		return 0;
	}
	if (unk_0xCE990E643CD9D0E5(Global_1630317[unk_0x460153A63B9477BC() /*595*/].f_1, 7))
	{
		return 0;
	}
	if (unk_0xFC559366953F62B3())
	{
		return 0;
	}
	return 1;
}

void func_832(int iParam0)
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
		if (func_834(14))
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
								func_169(&(Global_7558[iVar1 /*15*/]));
								unk_0xAD291B8F75D737AD(iVar2);
								unk_0xE1FDD153F5858534();
							}
							if (Global_2462245)
							{
								if (iVar1 == 14)
								{
									func_833(Global_19662, "SET_DATA_SLOT", to_float(1), to_float(iVar0), to_float(Global_7558[iVar1 /*15*/].f_10), to_float(Global_22068), -1f, &(Global_7558[iVar1 /*15*/]), 0, 0, 0, 0);
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
								func_833(Global_19662, "SET_DATA_SLOT", to_float(1), to_float(iVar0), to_float(Global_7558[iVar1 /*15*/].f_10), to_float(Global_22073), -1f, &(Global_7558[iVar1 /*15*/]), 0, 0, 0, 0);
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
									func_833(Global_19662, "SET_DATA_SLOT", to_float(1), to_float(iVar0), to_float(Global_7558[iVar1 /*15*/].f_10), to_float(iVar4), -1f, &(Global_7558[iVar1 /*15*/]), 0, 0, 0, 0);
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
									func_833(Global_19662, "SET_DATA_SLOT", to_float(1), to_float(iVar0), to_float(Global_7558[iVar1 /*15*/].f_10), to_float(iVar6), -1f, &(Global_7558[iVar1 /*15*/]), 0, 0, 0, 0);
								}
							}
							else if (iVar1 == 14)
							{
								func_833(Global_19662, "SET_DATA_SLOT", to_float(1), to_float(iVar0), to_float(Global_7558[iVar1 /*15*/].f_10), to_float(Global_22068), -1f, &(Global_7558[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							else if (iVar1 == 20)
							{
								unk_0x830F007E19C63E14(Global_19662, "SET_DATA_SLOT");
								unk_0xAD291B8F75D737AD(1);
								unk_0xAD291B8F75D737AD(iVar0);
								unk_0xAD291B8F75D737AD(Global_7558[iVar1 /*15*/].f_10);
								unk_0xAD291B8F75D737AD(0);
								func_169(&(Global_7558[iVar1 /*15*/]));
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
								func_169(&(Global_7558[iVar1 /*15*/]));
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
								func_169(&(Global_7558[iVar1 /*15*/]));
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
								func_169(&(Global_7558[iVar1 /*15*/]));
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
								func_169(&(Global_7558[iVar1 /*15*/]));
								unk_0xAD291B8F75D737AD(42);
								unk_0xE1FDD153F5858534();
							}
							else if (Global_7558[iVar1 /*15*/].f_10 == 57 && iVar1 == 23)
							{
								iVar9 = 0;
								iVar9 = Global_1627252.f_1;
								func_833(Global_19662, "SET_DATA_SLOT", to_float(1), to_float(iVar0), to_float(Global_7558[iVar1 /*15*/].f_10), to_float(iVar9), -1f, &(Global_7558[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							else
							{
								func_833(Global_19662, "SET_DATA_SLOT", to_float(1), to_float(iVar0), to_float(Global_7558[iVar1 /*15*/].f_10), to_float(0), -1f, &(Global_7558[iVar1 /*15*/]), 0, 0, 0, 0);
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

void func_833(int iParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6, char* sParam7, char* sParam8, char* sParam9, char* sParam10, char* sParam11)
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
		func_169(sParam7);
	}
	if (!unk_0x7BCC91F3C1CF24E8(sParam8))
	{
		func_169(sParam8);
	}
	if (!unk_0x7BCC91F3C1CF24E8(sParam9))
	{
		func_169(sParam9);
	}
	if (!unk_0x7BCC91F3C1CF24E8(sParam10))
	{
		func_169(sParam10);
	}
	if (!unk_0x7BCC91F3C1CF24E8(sParam11))
	{
		func_169(sParam11);
	}
	unk_0xE1FDD153F5858534();
}

bool func_834(int iParam0)
{
	return Global_41631 == iParam0;
}

void func_835(int iParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6)
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

void func_836(int iParam0)
{
	var uVar0;
	var uVar1;
	
	uVar0 = Global_111858.f_14047[iParam0 /*20*/].f_8;
	uVar0 = uVar0;
	uVar1 = uVar1;
}

void func_837(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	var uVar4;
	int iVar5;
	
	iVar0 = unk_0x1D3A3697182AD8B3();
	iVar1 = unk_0x81F2E25F8C019191();
	iVar2 = unk_0x1F596C965B00E290();
	iVar3 = unk_0x371CFD525753F70C();
	uVar4 = unk_0xF225116F449A5CC6() + 1;
	iVar5 = unk_0x2E48CFA70ABFC06A();
	Global_111858.f_14137[iParam0 /*104*/].f_18 = iVar0;
	Global_111858.f_14137[iParam0 /*104*/].f_18.f_1 = iVar1;
	Global_111858.f_14137[iParam0 /*104*/].f_18.f_2 = iVar2;
	Global_111858.f_14137[iParam0 /*104*/].f_18.f_3 = iVar3;
	Global_111858.f_14137[iParam0 /*104*/].f_18.f_4 = uVar4;
	Global_111858.f_14137[iParam0 /*104*/].f_18.f_5 = iVar5;
}

void func_838()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (Global_76833)
	{
		iVar0 = 24;
		iVar1 = 33;
	}
	else
	{
		iVar0 = 0;
		iVar1 = 20;
	}
	iVar2 = iVar0;
	Global_22072 = 34;
	Global_111858.f_14137[Global_22072 /*104*/].f_18 = -1;
	Global_111858.f_14137[Global_22072 /*104*/].f_18.f_1 = 0;
	Global_111858.f_14137[Global_22072 /*104*/].f_18.f_2 = 0;
	Global_111858.f_14137[Global_22072 /*104*/].f_18.f_3 = 0;
	Global_111858.f_14137[Global_22072 /*104*/].f_18.f_5 = 99999;
	while (iVar2 < iVar1)
	{
		if (!func_839(Global_111858.f_14137[iVar2 /*104*/].f_18, Global_111858.f_14137[Global_22072 /*104*/].f_18))
		{
			Global_22072 = iVar2;
		}
		iVar2++;
	}
	Global_111858.f_14137[Global_22072 /*104*/].f_24 = 1;
}

int func_839(struct<6> Param0, struct<6> Param1)
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

int func_840()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (Global_76833)
	{
		iVar0 = 24;
		iVar1 = 33;
	}
	else
	{
		iVar0 = 0;
		iVar1 = 20;
	}
	iVar2 = iVar0;
	while (iVar2 < iVar1)
	{
		if (Global_111858.f_14137[iVar2 /*104*/].f_24 == 0)
		{
			Global_22072 = iVar2;
			return 1;
		}
		iVar2++;
	}
	iVar2 = iVar0;
	Global_22072 = 34;
	Global_111858.f_14137[Global_22072 /*104*/].f_18 = -1;
	Global_111858.f_14137[Global_22072 /*104*/].f_18.f_1 = 0;
	Global_111858.f_14137[Global_22072 /*104*/].f_18.f_2 = 0;
	Global_111858.f_14137[Global_22072 /*104*/].f_18.f_3 = 0;
	Global_111858.f_14137[Global_22072 /*104*/].f_18.f_5 = 99999;
	while (iVar2 < iVar1)
	{
		if (Global_111858.f_14137[iVar2 /*104*/].f_24 == 0 || Global_111858.f_14137[iVar2 /*104*/].f_24 == 1)
		{
			if (!func_839(Global_111858.f_14137[iVar2 /*104*/].f_18, Global_111858.f_14137[Global_22072 /*104*/].f_18))
			{
				Global_22072 = iVar2;
			}
		}
		if (Global_111858.f_14137[iVar2 /*104*/].f_24 == 2)
		{
		}
		iVar2++;
	}
	if (Global_22072 == 34)
	{
		return 0;
	}
	Global_111858.f_14137[Global_22072 /*104*/].f_99[0] = 0;
	Global_111858.f_14137[Global_22072 /*104*/].f_99[1] = 0;
	Global_111858.f_14137[Global_22072 /*104*/].f_99[2] = 0;
	return 1;
}

void func_841()
{
	if (func_834(14))
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
		Global_19681 = func_842();
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

var func_842()
{
	func_843();
	return Global_111858.f_2359.f_539.f_4321;
}

void func_843()
{
	int iVar0;
	
	if (unk_0xAE06B9E39EBDE049(unk_0x9B0761B4C3EB8BC7()))
	{
		if (func_846(Global_111858.f_2359.f_539.f_4321) != unk_0x36FE6D3220816ADA(unk_0x9B0761B4C3EB8BC7()))
		{
			iVar0 = func_845(unk_0x9B0761B4C3EB8BC7());
			if (func_844(iVar0) && (!func_834(14) || Global_110809))
			{
				if (Global_111858.f_2359.f_539.f_4321 != iVar0 && func_844(Global_111858.f_2359.f_539.f_4321))
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

bool func_844(int iParam0)
{
	return iParam0 < 3;
}

int func_845(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0xAE06B9E39EBDE049(iParam0))
	{
		iVar1 = unk_0x36FE6D3220816ADA(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_846(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_846(int iParam0)
{
	if (func_844(iParam0))
	{
		return func_847(iParam0);
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

var func_847(int iParam0)
{
	return Global_1848[iParam0 /*29*/];
}

void func_848()
{
	if (!func_777())
	{
		return;
	}
	if (!unk_0x856D5567211886A2(unk_0x6C5C6B207AA78253()) == Global_1312603.f_9)
	{
		return;
	}
	func_773();
}

void func_849()
{
	if (func_17(unk_0x460153A63B9477BC(), 0))
	{
		return;
	}
	switch (Local_83[unk_0x59E2AD1A8ACEDA31() /*14*/].f_9)
	{
		case 0:
			func_851();
			func_315();
			if (Local_82.f_117 == 2)
			{
				Local_83[unk_0x59E2AD1A8ACEDA31() /*14*/].f_9 = 2;
			}
			else if (Local_82.f_117 == 3)
			{
				Local_83[unk_0x59E2AD1A8ACEDA31() /*14*/].f_9 = 3;
			}
			break;
		
		case 2:
			func_315();
			if (func_850())
			{
				func_764();
			}
			if (Local_82.f_117 == 3)
			{
				Local_83[unk_0x59E2AD1A8ACEDA31() /*14*/].f_9 = 3;
			}
			break;
		
		case 3:
			func_931();
			break;
	}
}

bool func_850()
{
	return ((unk_0xCE990E643CD9D0E5(Local_82.f_1, 1) || unk_0xCE990E643CD9D0E5(Local_82.f_1, 3)) || unk_0xCE990E643CD9D0E5(Local_82.f_1, 5));
}

void func_851()
{
	func_871();
	func_870();
	func_785();
	func_767();
	func_860();
	func_859();
	func_854();
	func_853();
	func_752();
	func_852();
}

void func_852()
{
}

void func_853()
{
	if (func_850())
	{
		return;
	}
	if (!func_917())
	{
		return;
	}
	if (!Global_262145.f_15026)
	{
		return;
	}
	if (Local_82.f_115 == 0)
	{
		return;
	}
}

void func_854()
{
	int iVar0;
	struct<3> Var1;
	float fVar2;
	
	if (func_917())
	{
		return;
	}
	if (func_850())
	{
		return;
	}
	fVar2 = func_151(&iVar0, 1);
	if (fVar2 < 62500f)
	{
		if (iVar0 > -1)
		{
			if (iLocal_91 != iVar0)
			{
				Var1 = { unk_0x3E4D3CCC220BDFB1(unk_0x3C6C6327BA564AEE(Local_82.f_2[iVar0 /*26*/].f_1), false) };
				func_92(10, 0, 0, 0, 0);
				func_855(Var1, 0f, 250f, 1, 75f, 0, 1, 65f, 1, 0, 0, 1, -1082130432);
				iLocal_91 = iVar0;
				unk_0xBE20AB8238688965(&iLocal_84, 16);
			}
		}
	}
	else if (fVar2 > 250000f)
	{
		func_346();
	}
}

void func_855(struct<3> Param0, float fParam1, float fParam2, int iParam3, float fParam4, int iParam5, int iParam6, float fParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12)
{
	struct<28> Var0;
	
	Var0.f_7 = 1;
	Var0.f_8 = 1;
	Var0.f_21 = 1115815936;
	Var0.f_27 = -1082130432;
	if (unk_0x7FD2BDF03806FD9D(Global_2413905.f_6))
	{
		if (!Global_2413905.f_6 == unk_0x354AD085195C5FA6())
		{
			return;
		}
	}
	if (vmag(Param0) == 0f)
	{
		return;
	}
	if (!unk_0x7FD2BDF03806FD9D(Global_2413905.f_6))
	{
		Global_2413905.f_6 = unk_0x354AD085195C5FA6();
	}
	Var0.f_6 = Global_2413905.f_6;
	Var0 = { Param0 };
	Var0.f_5 = fParam1;
	Var0.f_4 = fParam2;
	Var0.f_7 = iParam3;
	Var0.f_3 = fParam4;
	Var0.f_8 = iParam6;
	Var0.f_9 = iParam5;
	Var0.f_10 = 0;
	Var0.f_11 = { 0f, 0f, 0f };
	Var0.f_14 = { 0f, 0f, 0f };
	Var0.f_17 = 0f;
	Var0.f_21 = fParam7;
	Var0.f_22 = iParam8;
	if (func_856(unk_0x460153A63B9477BC()))
	{
		if (iParam11 || iParam5)
		{
			Var0.f_23 = 1;
		}
		else
		{
			Var0.f_23 = 0;
		}
	}
	else
	{
		Var0.f_23 = 0;
	}
	if (Var0.f_21 < 1f)
	{
		Var0.f_21 = 1f;
	}
	Var0.f_24 = iParam9;
	Var0.f_26 = iParam10;
	Var0.f_27 = iParam12;
	Global_2413905 = { Var0 };
}

int func_856(int iParam0)
{
	if (((func_857(iParam0, 1) || func_132(iParam0)) || func_106(iParam0, 0)) || func_400(iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_857(int iParam0, bool bParam1)
{
	if (func_342() != 0)
	{
		return func_858(iParam0) != 0;
	}
	return func_283(iParam0, bParam1, 0);
}

int func_858(int iParam0)
{
	if (func_1031(iParam0, 0, 1))
	{
		return Global_2425869[iParam0 /*443*/].f_1;
	}
	return 0;
}

void func_859()
{
	int iVar0;
	
	if (iLocal_88 != Local_82.f_115)
	{
		if (func_917())
		{
			if (!unk_0x5AEB5DDFFAD43CA5(unk_0x9B0761B4C3EB8BC7()))
			{
				if (unk_0x4DC4117F94CD5B84(unk_0x460153A63B9477BC()))
				{
					if (!unk_0x450A8984AFF05042())
					{
						iVar0 = unk_0x1A3D0DF92BF7D8C4(unk_0x460153A63B9477BC());
						switch (Local_82.f_115)
						{
							case 1:
								if (iVar0 < Global_262145.f_15023)
								{
									unk_0xCAD5C18968E57C30(unk_0x460153A63B9477BC(), Global_262145.f_15023, 0);
									unk_0x4B86C627B5EABFBF(unk_0x460153A63B9477BC(), 0);
								}
								break;
							
							case 2:
								if (iVar0 < Global_262145.f_15024)
								{
									unk_0xCAD5C18968E57C30(unk_0x460153A63B9477BC(), Global_262145.f_15024, 0);
									unk_0x4B86C627B5EABFBF(unk_0x460153A63B9477BC(), 0);
								}
								break;
							
							case 3:
								if (iVar0 < Global_262145.f_15025)
								{
									unk_0x53797676AD34A9AA(Global_262145.f_15025);
									unk_0xCAD5C18968E57C30(unk_0x460153A63B9477BC(), Global_262145.f_15025, 0);
									unk_0x4B86C627B5EABFBF(unk_0x460153A63B9477BC(), 0);
								}
								break;
						}
						iLocal_88 = Local_82.f_115;
					}
				}
			}
		}
		else
		{
			iLocal_88 = Local_82.f_115;
		}
	}
}

void func_860()
{
	int iVar0;
	
	if (!func_389())
	{
		if (func_869("HUNT_HELPA", "HUNT_TARBLP"))
		{
			unk_0xD289B55B6AADBA10(1);
		}
		return;
	}
	iVar0 = func_141(unk_0x460153A63B9477BC());
	if (iVar0 < 2)
	{
		if (func_869("HUNT_HELPA", "HUNT_TARBLP"))
		{
			unk_0xD289B55B6AADBA10(1);
		}
		return;
	}
	if (!unk_0xCE990E643CD9D0E5(iLocal_84, 2))
	{
		if (!func_868(86))
		{
			if (func_862(0, 1, 1, 1))
			{
				if (unk_0x59E2AD1A8ACEDA31() == Local_82.f_118)
				{
					func_861("HUNT_HELPA", "HUNT_TARBLP", 6, -1);
					func_324(1);
					unk_0xBE20AB8238688965(&iLocal_84, 2);
				}
				else if (func_918() == Local_82.f_118)
				{
					func_861("HUNT_HELPAG", "HUNT_TARBLP", 6, -1);
					func_324(1);
					unk_0xBE20AB8238688965(&iLocal_84, 2);
				}
				else if (func_303())
				{
					func_861("HUNT_HELPD", "HUNT_TARRVL", 9, -1);
					func_324(1);
					unk_0xBE20AB8238688965(&iLocal_84, 2);
				}
			}
		}
	}
	if (unk_0xCE990E643CD9D0E5(iLocal_84, 2))
	{
		if (!unk_0xCE990E643CD9D0E5(iLocal_84, 3))
		{
			if (func_862(0, 1, 1, 1))
			{
				if (!func_869("HUNT_HELPA", "HUNT_TARBLP"))
				{
					if (unk_0x59E2AD1A8ACEDA31() == Local_82.f_118 || func_918() == Local_82.f_118)
					{
						func_325("HUNT_HELPB", -1);
						func_324(1);
						unk_0xBE20AB8238688965(&iLocal_84, 3);
					}
				}
			}
		}
	}
}

void func_861(char* sParam0, int iParam1, int iParam2, int iParam3)
{
	unk_0x17751E107423AFE9(sParam0);
	if (!iParam2 == 0)
	{
		unk_0x7006FC1051C85FCA(iParam2);
	}
	unk_0x6A826E35A3096ED0(iParam1);
	unk_0x1A169149B3D18FCB(0, 0, false, iParam3);
}

int func_862(bool bParam0, bool bParam1, int iParam2, bool bParam3)
{
	if (iParam2 && unk_0xDABD547F0DF2906C())
	{
		return 0;
	}
	if (func_867())
	{
		return 0;
	}
	if (!unk_0x87F0CB19476706C3())
	{
		return 0;
	}
	if (func_293())
	{
		return 0;
	}
	if (func_438())
	{
		return 0;
	}
	if (bParam1)
	{
		if (func_283(unk_0x460153A63B9477BC(), 1, 0))
		{
			return 0;
		}
	}
	if (bParam0)
	{
		if (func_866(unk_0x460153A63B9477BC()))
		{
			return 0;
		}
	}
	if (func_865())
	{
		return 0;
	}
	if (unk_0x5AEB5DDFFAD43CA5(unk_0x9B0761B4C3EB8BC7()))
	{
		return 0;
	}
	if (unk_0xF0C12886E5C1B20E())
	{
		return 0;
	}
	if (bParam3)
	{
		if (!unk_0x4DC4117F94CD5B84(unk_0x460153A63B9477BC()))
		{
			return 0;
		}
	}
	if (Global_1574190)
	{
		return 0;
	}
	if (func_864())
	{
		return 0;
	}
	if (func_863())
	{
		return 0;
	}
	if (func_286())
	{
		return 0;
	}
	if (Global_74030)
	{
		return 0;
	}
	if (Global_2550454)
	{
		return 0;
	}
	if (func_95(unk_0x460153A63B9477BC()))
	{
		return 0;
	}
	return 1;
}

bool func_863()
{
	return Global_2451787.f_689;
}

bool func_864()
{
	return Global_2451787.f_842;
}

bool func_865()
{
	return Global_2440049.f_3158.f_578;
}

int func_866(int iParam0)
{
	if (Global_2425869[iParam0 /*443*/].f_212 == 0)
	{
		return 0;
	}
	return 1;
}

int func_867()
{
	if (Global_21005 != 0 || unk_0x6A5CC4A2C9D9ED8D())
	{
		return 1;
	}
	return 0;
}

bool func_868(int iParam0)
{
	return Global_2440049.f_2834[0 /*80*/].f_1 == iParam0;
}

bool func_869(char* sParam0, int iParam1)
{
	unk_0x69476B1CA6A9FF80(sParam0);
	unk_0x6A826E35A3096ED0(iParam1);
	return unk_0x1A3A9FFE5CA6F64B(0);
}

void func_870()
{
	var uVar0;
	float fVar1;
	
	fVar1 = func_151(&uVar0, 0);
	if (fVar1 < 10000f)
	{
		if (!func_127(unk_0x460153A63B9477BC()))
		{
			func_126();
		}
	}
}

void func_871()
{
	if (func_144())
	{
		if (unk_0xCE990E643CD9D0E5(Local_83[unk_0x59E2AD1A8ACEDA31() /*14*/].f_1, 1))
		{
			func_112(0);
			unk_0xD2459066EA58CE43(&(Local_83[unk_0x59E2AD1A8ACEDA31() /*14*/].f_1), 1);
		}
		return;
	}
	if (func_141(unk_0x460153A63B9477BC()) == 0)
	{
		return;
	}
	if (!unk_0xCE990E643CD9D0E5(Local_83[unk_0x59E2AD1A8ACEDA31() /*14*/].f_1, 1))
	{
		if (!func_917())
		{
			if (!func_143())
			{
				if (unk_0xCE990E643CD9D0E5(Local_82.f_1, 6))
				{
					func_112(1);
					unk_0xBE20AB8238688965(&(Local_83[unk_0x59E2AD1A8ACEDA31() /*14*/].f_1), 1);
				}
			}
		}
	}
}

void func_872()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	float fVar5;
	
	iVar4 = func_65();
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (!unk_0xCE990E643CD9D0E5(Local_83[unk_0x59E2AD1A8ACEDA31() /*14*/].f_2, iVar0))
		{
			if (!unk_0xCE990E643CD9D0E5(Local_82.f_110, iVar0))
			{
				if (unk_0x3D70CCF2C9B362CD(Local_82.f_2[iVar0 /*26*/].f_1))
				{
					if (!func_14(Local_82.f_2[iVar0 /*26*/].f_1))
					{
						if (!unk_0x5AEB5DDFFAD43CA5(unk_0x9B0761B4C3EB8BC7()))
						{
							if (func_918() == Local_82.f_118)
							{
								if (func_890(unk_0x3C6C6327BA564AEE(Local_82.f_2[iVar0 /*26*/].f_1)))
								{
									unk_0xBE20AB8238688965(&(Local_83[unk_0x59E2AD1A8ACEDA31() /*14*/].f_2), iVar0);
								}
							}
						}
					}
				}
			}
		}
		if (!unk_0xCE990E643CD9D0E5(Local_83[unk_0x59E2AD1A8ACEDA31() /*14*/].f_3, iVar0))
		{
			if (!unk_0xCE990E643CD9D0E5(Local_82.f_112, iVar0))
			{
				if (unk_0x3D70CCF2C9B362CD(Local_82.f_2[iVar0 /*26*/].f_2))
				{
					if (func_889(iVar0))
					{
						unk_0xBE20AB8238688965(&(Local_83[unk_0x59E2AD1A8ACEDA31() /*14*/].f_3), iVar0);
					}
				}
			}
		}
		if (!unk_0xCE990E643CD9D0E5(Local_83[unk_0x59E2AD1A8ACEDA31() /*14*/].f_4, iVar0))
		{
			if (!unk_0xCE990E643CD9D0E5(Local_82.f_111, iVar0))
			{
				if (unk_0x3D70CCF2C9B362CD(Local_82.f_2[iVar0 /*26*/].f_1))
				{
					if (!func_14(Local_82.f_2[iVar0 /*26*/].f_1))
					{
						if (unk_0xC7EB33BFDB436C87(unk_0x3E4D3CCC220BDFB1(unk_0x3C6C6327BA564AEE(Local_82.f_2[iVar0 /*26*/].f_1), true), 10f, 1))
						{
							unk_0xBE20AB8238688965(&(Local_83[unk_0x59E2AD1A8ACEDA31() /*14*/].f_4), iVar0);
						}
					}
				}
			}
		}
		func_888(iVar0);
		if (func_389())
		{
			if (!unk_0x8F678487EEBD8CE4(iLocal_99[iVar0]))
			{
				if (!func_850())
				{
					if (unk_0x3D70CCF2C9B362CD(Local_82.f_2[iVar0 /*26*/].f_1))
					{
						if (!func_14(Local_82.f_2[iVar0 /*26*/].f_1))
						{
							iLocal_99[iVar0] = unk_0x2BE000892D65EA2A(unk_0x3C6C6327BA564AEE(Local_82.f_2[iVar0 /*26*/].f_1));
							if (func_918() == Local_82.f_118)
							{
								unk_0xE346A71235BB8065(iLocal_99[iVar0], 12);
								unk_0xE7B8403ABCA0391D(iLocal_99[iVar0], 432);
								func_887(&(iLocal_99[iVar0]), 6);
							}
							else
							{
								unk_0xE7B8403ABCA0391D(iLocal_99[iVar0], 480);
								func_887(&(iLocal_99[iVar0]), 9);
							}
							unk_0x009A89A6CD1E6C3E(iLocal_99[iVar0], 1);
							unk_0x9178C42B36234BF1(iLocal_99[iVar0], 7000);
							unk_0xFA81E0FBD7F5ACA0(iLocal_99[iVar0], 1.1f);
							unk_0xB023F5C66F5716C7(iLocal_99[iVar0], "HUNT_BLIP");
						}
					}
				}
			}
			else if (unk_0x3D70CCF2C9B362CD(Local_82.f_2[iVar0 /*26*/].f_1))
			{
				if (func_14(Local_82.f_2[iVar0 /*26*/].f_1))
				{
					unk_0x93370FA10F15BE44(&(iLocal_99[iVar0]));
				}
				else if (func_850())
				{
					unk_0x93370FA10F15BE44(&(iLocal_99[iVar0]));
				}
			}
		}
		else if (unk_0x8F678487EEBD8CE4(iLocal_99[iVar0]))
		{
			unk_0x93370FA10F15BE44(&(iLocal_99[iVar0]));
		}
		func_886(iVar0);
		func_885(iVar0);
		func_883(iVar0);
		switch (Local_82.f_2[iVar0 /*26*/].f_17)
		{
			case 1:
				if (unk_0xAFF96FDC3971E7EA())
				{
					if (unk_0x3D70CCF2C9B362CD(Local_82.f_2[iVar0 /*26*/].f_2))
					{
						if (func_12(Local_82.f_2[iVar0 /*26*/].f_2))
						{
							if (!func_14(Local_82.f_2[iVar0 /*26*/].f_1))
							{
								if (unk_0xACBCFA3095C5A434(unk_0x3C6C6327BA564AEE(Local_82.f_2[iVar0 /*26*/].f_1), unk_0x770D3B2B4702434A(Local_82.f_2[iVar0 /*26*/].f_2)))
								{
									if (unk_0x16BC17A8EDC701A2(unk_0x3C6C6327BA564AEE(Local_82.f_2[iVar0 /*26*/].f_1), -258271821) != 1 && unk_0x16BC17A8EDC701A2(unk_0x3C6C6327BA564AEE(Local_82.f_2[iVar0 /*26*/].f_1), -258271821) != 0)
									{
										unk_0xD8C1C38EE8BC2AC6(unk_0x3C6C6327BA564AEE(Local_82.f_2[iVar0 /*26*/].f_1), unk_0x770D3B2B4702434A(Local_82.f_2[iVar0 /*26*/].f_2), 20f, 786603);
									}
								}
							}
						}
					}
				}
				break;
			
			case 2:
				if (unk_0xAFF96FDC3971E7EA())
				{
					if (unk_0x3D70CCF2C9B362CD(Local_82.f_2[iVar0 /*26*/].f_2))
					{
						if (unk_0x3D70CCF2C9B362CD(Local_82.f_2[iVar0 /*26*/].f_1))
						{
							if (func_12(Local_82.f_2[iVar0 /*26*/].f_2))
							{
								if (!func_14(Local_82.f_2[iVar0 /*26*/].f_1))
								{
									if (unk_0xACBCFA3095C5A434(unk_0x3C6C6327BA564AEE(Local_82.f_2[iVar0 /*26*/].f_1), unk_0x770D3B2B4702434A(Local_82.f_2[iVar0 /*26*/].f_2)))
									{
										if ((unk_0x16BC17A8EDC701A2(unk_0x3C6C6327BA564AEE(Local_82.f_2[iVar0 /*26*/].f_1), -258271821) != 1 && unk_0x16BC17A8EDC701A2(unk_0x3C6C6327BA564AEE(Local_82.f_2[iVar0 /*26*/].f_1), -258271821) != 0) || unk_0xCE990E643CD9D0E5(Local_82.f_108, iVar0))
										{
											unk_0xD8C1C38EE8BC2AC6(unk_0x3C6C6327BA564AEE(Local_82.f_2[iVar0 /*26*/].f_1), unk_0x770D3B2B4702434A(Local_82.f_2[iVar0 /*26*/].f_2), 30f, 786469);
											if (unk_0xCE990E643CD9D0E5(Local_82.f_108, iVar0))
											{
												unk_0xD2459066EA58CE43(&(Local_82.f_108), iVar0);
											}
										}
									}
								}
							}
						}
					}
				}
				break;
			
			case 3:
				if (unk_0x3D70CCF2C9B362CD(Local_82.f_2[iVar0 /*26*/].f_1))
				{
					if (!func_14(Local_82.f_2[iVar0 /*26*/].f_1))
					{
						if (unk_0x16BC17A8EDC701A2(unk_0x3C6C6327BA564AEE(Local_82.f_2[iVar0 /*26*/].f_1), -828834893) != 1 && unk_0x16BC17A8EDC701A2(unk_0x3C6C6327BA564AEE(Local_82.f_2[iVar0 /*26*/].f_1), -828834893) != 0)
						{
							if (func_881(Local_82.f_2[iVar0 /*26*/].f_1))
							{
								if (unk_0xF05B7723022657B3(Local_82.f_2[iVar0 /*26*/].f_1))
								{
									unk_0x0AB756271BADC8DF(unk_0x3C6C6327BA564AEE(Local_82.f_2[iVar0 /*26*/].f_1), 0, 0);
								}
							}
						}
					}
				}
				break;
			
			case 5:
				if (unk_0x3D70CCF2C9B362CD(Local_82.f_2[iVar0 /*26*/].f_1))
				{
					if (!func_14(Local_82.f_2[iVar0 /*26*/].f_1))
					{
						if (!unk_0x5AEB5DDFFAD43CA5(unk_0x9B0761B4C3EB8BC7()))
						{
							if (unk_0x16BC17A8EDC701A2(unk_0x3C6C6327BA564AEE(Local_82.f_2[iVar0 /*26*/].f_1), -1146898486) != 1 && unk_0x16BC17A8EDC701A2(unk_0x3C6C6327BA564AEE(Local_82.f_2[iVar0 /*26*/].f_1), -1146898486) != 0)
							{
								if (func_881(Local_82.f_2[iVar0 /*26*/].f_1))
								{
									if (unk_0xF05B7723022657B3(Local_82.f_2[iVar0 /*26*/].f_1))
									{
										unk_0x30291E2E564E9B47(unk_0x3C6C6327BA564AEE(Local_82.f_2[iVar0 /*26*/].f_1), 1193033728, 0);
									}
								}
							}
						}
					}
				}
				break;
			
			case 4:
				if (unk_0x3D70CCF2C9B362CD(Local_82.f_2[iVar0 /*26*/].f_1))
				{
					if (!func_14(Local_82.f_2[iVar0 /*26*/].f_1))
					{
						if (!unk_0x5AEB5DDFFAD43CA5(unk_0x9B0761B4C3EB8BC7()))
						{
							if (unk_0x16BC17A8EDC701A2(unk_0x3C6C6327BA564AEE(Local_82.f_2[iVar0 /*26*/].f_1), 1805844857) != 1 && unk_0x16BC17A8EDC701A2(unk_0x3C6C6327BA564AEE(Local_82.f_2[iVar0 /*26*/].f_1), 1805844857) != 0)
							{
								if (func_881(Local_82.f_2[iVar0 /*26*/].f_1))
								{
									if (unk_0xF05B7723022657B3(Local_82.f_2[iVar0 /*26*/].f_1))
									{
										iVar2 = func_879(iVar0);
										if (!unk_0x5AEB5DDFFAD43CA5(iVar2))
										{
											unk_0x8B18A80E8EB15510(unk_0x3C6C6327BA564AEE(Local_82.f_2[iVar0 /*26*/].f_1), iVar2, 500f, -1, 0, 1);
										}
									}
								}
							}
						}
					}
				}
				break;
			
			case 6:
				if (unk_0x3D70CCF2C9B362CD(Local_82.f_2[iVar0 /*26*/].f_1))
				{
					if (!func_14(Local_82.f_2[iVar0 /*26*/].f_1))
					{
						if (unk_0xF05B7723022657B3(Local_82.f_2[iVar0 /*26*/].f_1))
						{
							unk_0x8342E6CB98CD545C(unk_0x3C6C6327BA564AEE(Local_82.f_2[iVar0 /*26*/].f_1), 187, true);
						}
						iVar3 = unk_0x16BC17A8EDC701A2(unk_0x3C6C6327BA564AEE(Local_82.f_2[iVar0 /*26*/].f_1), -1442466670);
						if (iVar3 != 1 && iVar3 != 0)
						{
							if (func_881(Local_82.f_2[iVar0 /*26*/].f_1))
							{
								if (unk_0xF05B7723022657B3(Local_82.f_2[iVar0 /*26*/].f_1))
								{
									unk_0x4E65320BC9AD521C(unk_0x3C6C6327BA564AEE(Local_82.f_2[iVar0 /*26*/].f_1), false);
									unk_0xB94133249C84B1E3(unk_0x3C6C6327BA564AEE(Local_82.f_2[iVar0 /*26*/].f_1), 299f, 0);
								}
							}
						}
					}
				}
				break;
			
			case 9:
				if (unk_0x3D70CCF2C9B362CD(Local_82.f_2[iVar0 /*26*/].f_1))
				{
					if (!func_14(Local_82.f_2[iVar0 /*26*/].f_1))
					{
						if (unk_0xF05B7723022657B3(Local_82.f_2[iVar0 /*26*/].f_1))
						{
							unk_0x8342E6CB98CD545C(unk_0x3C6C6327BA564AEE(Local_82.f_2[iVar0 /*26*/].f_1), 187, true);
						}
						iVar3 = unk_0x16BC17A8EDC701A2(unk_0x3C6C6327BA564AEE(Local_82.f_2[iVar0 /*26*/].f_1), 1910705116);
						if (iVar3 != 1 && iVar3 != 0)
						{
							if (func_881(Local_82.f_2[iVar0 /*26*/].f_1))
							{
								if (unk_0xF05B7723022657B3(Local_82.f_2[iVar0 /*26*/].f_1))
								{
									unk_0xCCC12894266ADDBB(unk_0x3C6C6327BA564AEE(Local_82.f_2[iVar0 /*26*/].f_1), 1);
									fVar5 = 0f;
									iVar4 = func_878(iVar0, &fVar5);
									if (iVar4 != func_65())
									{
										unk_0x56185842FFEB7EE6(unk_0x3C6C6327BA564AEE(Local_82.f_2[iVar0 /*26*/].f_1), unk_0x1FA7B77001D60F9D(iVar4), -1, 0);
									}
								}
							}
						}
					}
				}
				break;
			
			case 8:
				if (unk_0x3D70CCF2C9B362CD(Local_82.f_2[iVar0 /*26*/].f_1))
				{
					if (!func_14(Local_82.f_2[iVar0 /*26*/].f_1))
					{
						iVar3 = unk_0x16BC17A8EDC701A2(unk_0x3C6C6327BA564AEE(Local_82.f_2[iVar0 /*26*/].f_1), 993674639);
						if (iVar3 != 1 && iVar3 != 0)
						{
							if (func_881(Local_82.f_2[iVar0 /*26*/].f_1))
							{
								if (unk_0xF05B7723022657B3(Local_82.f_2[iVar0 /*26*/].f_1))
								{
									unk_0x3964C1CAAE858CB1(unk_0x3C6C6327BA564AEE(Local_82.f_2[iVar0 /*26*/].f_1), "WORLD_HUMAN_SMOKING", 0, 0);
								}
							}
						}
					}
				}
				break;
		}
		iVar1 = 0;
		iVar1 = 0;
		while (iVar1 < 3)
		{
			switch (Local_82.f_2[iVar0 /*26*/].f_18[iVar1])
			{
				case 0:
					break;
				
				case 1:
					break;
				
				case 8:
					if (unk_0x3D70CCF2C9B362CD(Local_82.f_2[iVar0 /*26*/].f_3[iVar1]))
					{
						if (!func_14(Local_82.f_2[iVar0 /*26*/].f_3[iVar1]))
						{
							iVar3 = unk_0x16BC17A8EDC701A2(unk_0x3C6C6327BA564AEE(Local_82.f_2[iVar0 /*26*/].f_3[iVar1]), 993674639);
							if (iVar3 != 1 && iVar3 != 0)
							{
								if (func_881(Local_82.f_2[iVar0 /*26*/].f_3[iVar1]))
								{
									if (unk_0xF05B7723022657B3(Local_82.f_2[iVar0 /*26*/].f_3[iVar1]))
									{
										unk_0x3964C1CAAE858CB1(unk_0x3C6C6327BA564AEE(Local_82.f_2[iVar0 /*26*/].f_3[iVar1]), "WORLD_HUMAN_GUARD_STAND", 0, 0);
									}
								}
							}
						}
					}
					break;
				
				case 7:
					if (unk_0x3D70CCF2C9B362CD(Local_82.f_2[iVar0 /*26*/].f_3[iVar1]))
					{
						if (!func_14(Local_82.f_2[iVar0 /*26*/].f_3[iVar1]))
						{
							iVar3 = unk_0x16BC17A8EDC701A2(unk_0x3C6C6327BA564AEE(Local_82.f_2[iVar0 /*26*/].f_3[iVar1]), -1442466670);
							if (iVar3 != 1 && iVar3 != 0)
							{
								if (func_881(Local_82.f_2[iVar0 /*26*/].f_3[iVar1]))
								{
									if (unk_0xF05B7723022657B3(Local_82.f_2[iVar0 /*26*/].f_3[iVar1]))
									{
										unk_0x4E65320BC9AD521C(unk_0x3C6C6327BA564AEE(Local_82.f_2[iVar0 /*26*/].f_3[iVar1]), false);
										unk_0xB94133249C84B1E3(unk_0x3C6C6327BA564AEE(Local_82.f_2[iVar0 /*26*/].f_3[iVar1]), 299f, 0);
									}
								}
							}
						}
					}
					break;
				
				case 6:
					if (unk_0x3D70CCF2C9B362CD(Local_82.f_2[iVar0 /*26*/].f_3[iVar1]))
					{
						if (!func_14(Local_82.f_2[iVar0 /*26*/].f_3[iVar1]))
						{
							iVar3 = unk_0x16BC17A8EDC701A2(unk_0x3C6C6327BA564AEE(Local_82.f_2[iVar0 /*26*/].f_3[iVar1]), -1442466670);
							if (iVar3 != 1 && iVar3 != 0)
							{
								if (func_881(Local_82.f_2[iVar0 /*26*/].f_3[iVar1]))
								{
									if (unk_0xF05B7723022657B3(Local_82.f_2[iVar0 /*26*/].f_3[iVar1]))
									{
										unk_0x4E65320BC9AD521C(unk_0x3C6C6327BA564AEE(Local_82.f_2[iVar0 /*26*/].f_3[iVar1]), false);
										unk_0xB94133249C84B1E3(unk_0x3C6C6327BA564AEE(Local_82.f_2[iVar0 /*26*/].f_3[iVar1]), 299f, 0);
									}
								}
							}
						}
					}
					break;
				
				case 3:
					if (unk_0x3D70CCF2C9B362CD(Local_82.f_2[iVar0 /*26*/].f_3[iVar1]))
					{
						if (!func_14(Local_82.f_2[iVar0 /*26*/].f_3[iVar1]))
						{
							if (unk_0x6E0C5E7AAF8B6214(unk_0x3C6C6327BA564AEE(Local_82.f_2[iVar0 /*26*/].f_3[iVar1])))
							{
								iVar3 = unk_0x16BC17A8EDC701A2(unk_0x3C6C6327BA564AEE(Local_82.f_2[iVar0 /*26*/].f_3[iVar1]), -828834893);
								if (iVar3 != 1 && iVar3 != 0)
								{
									if (func_881(Local_82.f_2[iVar0 /*26*/].f_3[iVar1]))
									{
										if (unk_0xF05B7723022657B3(Local_82.f_2[iVar0 /*26*/].f_3[iVar1]))
										{
											unk_0x4E65320BC9AD521C(unk_0x3C6C6327BA564AEE(Local_82.f_2[iVar0 /*26*/].f_3[iVar1]), true);
											unk_0x0AB756271BADC8DF(unk_0x3C6C6327BA564AEE(Local_82.f_2[iVar0 /*26*/].f_3[iVar1]), 299, 0);
											unk_0x6673CC701BC8E9C1(unk_0x3C6C6327BA564AEE(Local_82.f_2[iVar0 /*26*/].f_3[iVar1]), 3, true);
										}
									}
								}
							}
						}
					}
					break;
			}
			iVar1++;
		}
		iVar0++;
	}
	if (func_917())
	{
		func_873();
	}
}

void func_873()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 30)
	{
		func_874(uLocal_101[iVar0], &(Local_100[iVar0 /*8*/]), -1082130432, 0, 0, 0, 0, -1, -1, 1);
		iVar0++;
	}
}

void func_874(int iParam0, int iParam1, float fParam2, bool bParam3, int iParam4, int iParam5, char* sParam6, int iParam7, int iParam8, bool bParam9)
{
	if (unk_0xF7DE07F319727299(iParam0))
	{
		if (func_877())
		{
			Global_2440049 = unk_0x460153A63B9477BC();
		}
		if (bParam3)
		{
			func_876(unk_0x3C6C6327BA564AEE(iParam0), iParam1, 1, Global_2440049, iParam4, iParam5, fParam2, sParam6, iParam7, iParam8, bParam9);
		}
		else
		{
			func_876(unk_0x3C6C6327BA564AEE(iParam0), iParam1, -1, Global_2440049, iParam4, iParam5, fParam2, sParam6, iParam7, iParam8, bParam9);
		}
	}
	else if (unk_0x8F678487EEBD8CE4(*iParam1))
	{
		func_875(iParam1);
	}
}

void func_875(int iParam0)
{
	bool bVar0;
	struct<8> Var1;
	
	if (unk_0x8F678487EEBD8CE4(*iParam0))
	{
		unk_0x93370FA10F15BE44(iParam0);
		bVar0 = true;
	}
	if (unk_0x8F678487EEBD8CE4(iParam0->f_1))
	{
		unk_0x93370FA10F15BE44(&(iParam0->f_1));
		bVar0 = true;
	}
	if (unk_0xAE06B9E39EBDE049(iParam0->f_7))
	{
		if (!unk_0xA59F96B50B97E63C(iParam0->f_7, 0))
		{
			if (unk_0xD2160441D64A7913(iParam0->f_7))
			{
				unk_0x40144464F4EFCB95(iParam0->f_7, 0);
			}
		}
		bVar0 = true;
	}
	if (bVar0)
	{
		*iParam0 = { Var1 };
	}
}

int func_876(int iParam0, var uParam1, int iParam2, int iParam3, int iParam4, int iParam5, float fParam6, char* sParam7, int iParam8, int iParam9, bool bParam10)
{
	if (iParam3 == 0)
	{
		iParam3 = unk_0x2639A2323BEA8CC6();
	}
	if (fParam6 < 0f)
	{
		fParam6 = 100f;
	}
	if (!unk_0x5AEB5DDFFAD43CA5(iParam0))
	{
		if (!unk_0xD2160441D64A7913(iParam0))
		{
			if (iParam8 == -1)
			{
				unk_0x40144464F4EFCB95(iParam0, 1);
			}
			else
			{
				unk_0xA38FAE649193A9D3(iParam0, 1, iParam8);
			}
			uParam1->f_7 = iParam0;
			unk_0x8C9D58FFAD1E5F5D(iParam0, iParam2);
			unk_0x952C4BC7DD66CA43(iParam0, fParam6);
			if (unk_0x8F678487EEBD8CE4(*uParam1))
			{
				unk_0xE346A71235BB8065(*uParam1, 7);
			}
		}
		if (!iParam9 == -1)
		{
			unk_0x9E980DBD91D84D38(iParam0, iParam9);
		}
		unk_0xF3AD674A9CA93CB7(iParam0, iParam4);
		unk_0xB9FCCCD8AB1F5190(iParam0, iParam5);
		*uParam1 = unk_0xD5903D08ABF95646(iParam0);
		if (!iParam9 == -1)
		{
			if (unk_0x8F678487EEBD8CE4(*uParam1))
			{
				if (!iParam8 == -1)
				{
					unk_0xECC9A00CF1181EC2(*uParam1, iParam8);
				}
				if (!unk_0x7BCC91F3C1CF24E8(sParam7))
				{
					unk_0xE595D9125F918A6F("STRING");
					if (bParam10)
					{
						unk_0x9EFD301E3BE8324E(sParam7);
					}
					else
					{
						unk_0x6A826E35A3096ED0(sParam7);
					}
					unk_0x70103B2A126717C6(*uParam1);
				}
				unk_0xE346A71235BB8065(*uParam1, 7);
			}
		}
		if (!unk_0xCE990E643CD9D0E5(uParam1->f_6, 2))
		{
			if (unk_0x8F678487EEBD8CE4(*uParam1))
			{
				unk_0xBE20AB8238688965(&(uParam1->f_6), 2);
			}
		}
		if (unk_0x47DBF174A0CB9D55(iParam0, false))
		{
			uParam1->f_1 = unk_0x9E0AACA1FCE0CBEC(iParam0);
			if (!unk_0xCE990E643CD9D0E5(uParam1->f_6, 3))
			{
				if (unk_0x8F678487EEBD8CE4(uParam1->f_1))
				{
					if (!iParam8 == -1)
					{
						unk_0xECC9A00CF1181EC2(uParam1->f_1, iParam8);
					}
					if (!unk_0x7BCC91F3C1CF24E8(sParam7))
					{
						unk_0xE595D9125F918A6F("STRING");
						if (bParam10)
						{
							unk_0x9EFD301E3BE8324E(sParam7);
						}
						else
						{
							unk_0x6A826E35A3096ED0(sParam7);
						}
						unk_0x70103B2A126717C6(uParam1->f_1);
					}
					unk_0xE346A71235BB8065(uParam1->f_1, 7);
					unk_0xBE20AB8238688965(&(uParam1->f_6), 3);
				}
			}
			else if (!unk_0x8F678487EEBD8CE4(uParam1->f_1))
			{
				uParam1->f_1 = 0;
				unk_0xD2459066EA58CE43(&(uParam1->f_6), 3);
			}
		}
		else if (unk_0x8F678487EEBD8CE4(uParam1->f_1))
		{
			uParam1->f_1 = 0;
			unk_0xD2459066EA58CE43(&(uParam1->f_6), 3);
		}
	}
	else
	{
		return 1;
	}
	return 0;
}

bool func_877()
{
	return Global_1312872;
}

int func_878(int iParam0, float fParam1)
{
	int iVar0;
	float fVar1;
	float fVar2;
	struct<3> Var3;
	int iVar4;
	int iVar5;
	int iVar6;
	
	iVar0 = func_65();
	fVar1 = 1E+08f;
	Var3 = { unk_0x3E4D3CCC220BDFB1(unk_0x3C6C6327BA564AEE(Local_82.f_2[iParam0 /*26*/].f_1), true) };
	iVar4 = 0;
	while (iVar4 < unk_0xEFA28384DDD283E1())
	{
		if (unk_0xBD09DF93F957A0CF(unk_0x628A51AC66E80772(iVar4)))
		{
			iVar5 = unk_0x9019589211A13B02(unk_0x628A51AC66E80772(iVar4));
			if (!func_17(iVar5, 0))
			{
				iVar6 = unk_0x1FA7B77001D60F9D(iVar5);
				if (iVar4 == Local_82.f_118 || Local_83[iVar4 /*14*/].f_10 == Local_82.f_118)
				{
					if (!unk_0x5AEB5DDFFAD43CA5(iVar6))
					{
						fVar2 = vdist2(unk_0x3E4D3CCC220BDFB1(iVar6, true), Var3);
						if (fVar2 < fVar1)
						{
							fVar1 = fVar2;
							iVar0 = iVar5;
						}
					}
				}
			}
		}
		iVar4++;
	}
	if (iVar0 != func_65())
	{
		*fParam1 = fVar1;
	}
	return iVar0;
}

int func_879(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar1 = func_880(iParam0);
	if (iVar1 != func_65())
	{
		iVar0 = unk_0x1FA7B77001D60F9D(iVar1);
	}
	return iVar0;
}

int func_880(int iParam0)
{
	int iVar0;
	float fVar1;
	float fVar2;
	int iVar3;
	struct<3> Var4;
	int iVar5;
	int iVar6;
	
	iVar0 = func_65();
	fVar1 = 1E+10f;
	fVar2 = 0f;
	Var4 = { unk_0x3E4D3CCC220BDFB1(unk_0x3C6C6327BA564AEE(Local_82.f_2[iParam0 /*26*/].f_1), false) };
	iVar3 = 0;
	while (iVar3 < unk_0xEFA28384DDD283E1())
	{
		if (unk_0xBD09DF93F957A0CF(unk_0x628A51AC66E80772(iVar3)))
		{
			iVar5 = unk_0x9019589211A13B02(unk_0x628A51AC66E80772(iVar3));
			iVar6 = unk_0x1FA7B77001D60F9D(iVar5);
			if (func_190(iVar5, 1))
			{
				if (!unk_0xCE990E643CD9D0E5(Local_83[iVar3 /*14*/].f_1, 1))
				{
					if (func_66(iVar5) == unk_0x9019589211A13B02(unk_0x628A51AC66E80772(Local_82.f_118)))
					{
						if (!unk_0x5AEB5DDFFAD43CA5(iVar6))
						{
							fVar2 = vdist2(unk_0x3E4D3CCC220BDFB1(iVar6, true), Var4);
							if (fVar2 < fVar1)
							{
								fVar1 = fVar2;
								iVar0 = iVar5;
							}
						}
					}
				}
			}
		}
		iVar3++;
	}
	return iVar0;
}

int func_881(int iParam0)
{
	if (unk_0x663F84E7375B82E6(iParam0))
	{
		return 1;
	}
	if (func_882(iParam0))
	{
		return 1;
	}
	return 0;
}

int func_882(int iParam0)
{
	if (!unk_0xAFF96FDC3971E7EA())
	{
		return 0;
	}
	if (!unk_0x3D70CCF2C9B362CD(iParam0))
	{
		return 0;
	}
	if (func_44(iParam0))
	{
		return 1;
	}
	return 0;
}

void func_883(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	struct<3> Var4;
	int iVar5;
	
	if (!func_389())
	{
		return;
	}
	if (func_141(unk_0x460153A63B9477BC()) < 1)
	{
		return;
	}
	if (!func_917() && !func_303())
	{
		return;
	}
	if (func_850())
	{
		return;
	}
	if (func_917())
	{
		unk_0x28DD484BAEAF8437(6, &iVar0, &iVar1, &iVar2, &uVar3);
	}
	else
	{
		unk_0x28DD484BAEAF8437(9, &iVar0, &iVar1, &iVar2, &uVar3);
	}
	if (unk_0x3D70CCF2C9B362CD(Local_82.f_2[iParam0 /*26*/].f_1))
	{
		if (!func_14(Local_82.f_2[iParam0 /*26*/].f_1))
		{
			if (!unk_0x6E0C5E7AAF8B6214(unk_0x3C6C6327BA564AEE(Local_82.f_2[iParam0 /*26*/].f_1)))
			{
				Var4 = { unk_0x3E4D3CCC220BDFB1(unk_0x3C6C6327BA564AEE(Local_82.f_2[iParam0 /*26*/].f_1), true) };
				unk_0xEC88D619C9994021(2, Var4 + Vector(2f, 0f, 0f), 0f, 0f, 0f, 180f, 0f, 0f, 0.5f, 0.5f, 0.5f, iVar0, iVar1, iVar2, 100, 1, 1, 2, 0, 0, 0, false);
			}
			else
			{
				iVar5 = unk_0xA5D5B1042E8F47BD(unk_0x3C6C6327BA564AEE(Local_82.f_2[iParam0 /*26*/].f_1), false);
				func_884(iVar5, iVar0, iVar1, iVar2, 0);
			}
		}
	}
}

void func_884(int iParam0, int iParam1, int iParam2, int iParam3, float fParam4)
{
	struct<3> Var0;
	struct<3> Var1;
	float fVar2;
	float fVar3;
	float fVar4;
	
	fVar2 = 0.5f;
	unk_0x140662B520844E45(unk_0x36FE6D3220816ADA(iParam0), &Var0, &Var1);
	fVar3 = ((Var1.f_2 - Var0.f_2) / 2f);
	fVar4 = (Var1.f_2 - fVar3);
	if (fVar2 <= (fVar4 + 0.1f))
	{
		fVar2 = (fVar4 + 0.4f);
	}
	fVar2 = (fVar2 + fParam4);
	unk_0xEC88D619C9994021(2, unk_0x3E4D3CCC220BDFB1(iParam0, true) + Vector((((Var1.f_2 - Var0.f_2) / 2f) + fVar2), 0f, 0f), 0f, 0f, 0f, 180f, 0f, 0f, 0.5f, 0.5f, 0.5f, iParam1, iParam2, iParam3, 100, 1, 1, 2, 0, 0, 0, false);
}

void func_885(int iParam0)
{
	int iVar0;
	struct<3> Var1;
	struct<3> Var2;
	int iVar3;
	bool bVar4;
	
	if (Local_82.f_2[iParam0 /*26*/] != 2)
	{
		return;
	}
	if (Local_82.f_2[iParam0 /*26*/].f_25)
	{
		return;
	}
	if (func_918() != Local_82.f_118)
	{
		return;
	}
	if (unk_0xCE990E643CD9D0E5(Local_83[unk_0x59E2AD1A8ACEDA31() /*14*/].f_13, iParam0))
	{
		return;
	}
	if (!unk_0x3D70CCF2C9B362CD(Local_82.f_2[iParam0 /*26*/].f_1))
	{
		return;
	}
	if (func_14(Local_82.f_2[iParam0 /*26*/].f_1))
	{
		unk_0xBE20AB8238688965(&(Local_83[unk_0x59E2AD1A8ACEDA31() /*14*/].f_12), iParam0);
		return;
	}
	iVar0 = unk_0x3C6C6327BA564AEE(Local_82.f_2[iParam0 /*26*/].f_1);
	Var1 = { unk_0x3E4D3CCC220BDFB1(unk_0x9B0761B4C3EB8BC7(), false) };
	Var2 = { unk_0x3E4D3CCC220BDFB1(iVar0, false) };
	if (vdist2(Var1, Var2) < 5625f)
	{
		unk_0xBE20AB8238688965(&(Local_83[unk_0x59E2AD1A8ACEDA31() /*14*/].f_13), iParam0);
		return;
	}
	if (unk_0x5AEB5DDFFAD43CA5(unk_0x9B0761B4C3EB8BC7()))
	{
		return;
	}
	bVar4 = false;
	iVar3 = 0;
	while (iVar3 < 3)
	{
		if (unk_0x3D70CCF2C9B362CD(Local_82.f_2[iParam0 /*26*/].f_3[iVar3]))
		{
			if (!func_14(Local_82.f_2[iParam0 /*26*/].f_3[iVar3]))
			{
				bVar4 = true;
			}
		}
		iVar3++;
	}
	if (!bVar4)
	{
		unk_0xBE20AB8238688965(&(Local_83[unk_0x59E2AD1A8ACEDA31() /*14*/].f_13), iParam0);
	}
}

void func_886(int iParam0)
{
	int iVar0;
	struct<3> Var1;
	struct<3> Var2;
	int iVar3;
	int iVar4;
	
	if (Local_82.f_2[iParam0 /*26*/] != 2)
	{
		return;
	}
	if (Local_82.f_2[iParam0 /*26*/].f_24)
	{
		return;
	}
	if (func_918() != Local_82.f_118)
	{
		return;
	}
	if (unk_0xCE990E643CD9D0E5(Local_83[unk_0x59E2AD1A8ACEDA31() /*14*/].f_12, iParam0))
	{
		return;
	}
	if (!unk_0x3D70CCF2C9B362CD(Local_82.f_2[iParam0 /*26*/].f_1))
	{
		return;
	}
	if (func_14(Local_82.f_2[iParam0 /*26*/].f_1))
	{
		unk_0xBE20AB8238688965(&(Local_83[unk_0x59E2AD1A8ACEDA31() /*14*/].f_12), iParam0);
		return;
	}
	iVar0 = unk_0x3C6C6327BA564AEE(Local_82.f_2[iParam0 /*26*/].f_1);
	Var1 = { unk_0x3E4D3CCC220BDFB1(unk_0x9B0761B4C3EB8BC7(), false) };
	Var2 = { unk_0x3E4D3CCC220BDFB1(iVar0, false) };
	if (vdist2(Var1, Var2) < 62500f)
	{
		unk_0xBE20AB8238688965(&(Local_83[unk_0x59E2AD1A8ACEDA31() /*14*/].f_12), iParam0);
		return;
	}
	if (unk_0x5AEB5DDFFAD43CA5(unk_0x9B0761B4C3EB8BC7()))
	{
		return;
	}
	iVar4 = 0;
	while (iVar4 < 3)
	{
		if (unk_0x3D70CCF2C9B362CD(Local_82.f_2[iParam0 /*26*/].f_3[iVar4]))
		{
			if (func_14(Local_82.f_2[iParam0 /*26*/].f_3[iVar4]))
			{
				unk_0xBE20AB8238688965(&(Local_83[unk_0x59E2AD1A8ACEDA31() /*14*/].f_12), iParam0);
			}
			else
			{
				iVar3 = unk_0x3C6C6327BA564AEE(Local_82.f_2[iParam0 /*26*/].f_3[iVar4]);
				if (func_918() == Local_82.f_118)
				{
					if (vdist2(Var1, Var2) < 40000f)
					{
						unk_0xBE20AB8238688965(&(Local_83[unk_0x59E2AD1A8ACEDA31() /*14*/].f_12), iParam0);
						return;
					}
					if (func_890(iVar3))
					{
						unk_0xBE20AB8238688965(&(Local_83[unk_0x59E2AD1A8ACEDA31() /*14*/].f_12), iParam0);
						return;
					}
				}
			}
		}
		iVar4++;
	}
}

void func_887(var uParam0, int iParam1)
{
	int iVar0;
	
	if (unk_0x8F678487EEBD8CE4(*uParam0))
	{
		iVar0 = func_343(iParam1);
		unk_0xECC9A00CF1181EC2(*uParam0, iVar0);
	}
}

void func_888(int iParam0)
{
	float fVar0;
	float fVar1;
	struct<3> Var2;
	struct<3> Var3;
	
	if (Local_82.f_2[iParam0 /*26*/] == 0)
	{
		if (unk_0x3D70CCF2C9B362CD(Local_82.f_2[iParam0 /*26*/].f_1))
		{
			if (unk_0xF05B7723022657B3(Local_82.f_2[iParam0 /*26*/].f_1))
			{
				if (!func_14(Local_82.f_2[iParam0 /*26*/].f_1))
				{
					if (!unk_0x47DBF174A0CB9D55(unk_0x3C6C6327BA564AEE(Local_82.f_2[iParam0 /*26*/].f_1), false))
					{
						fVar0 = unk_0xF3A639BEE7AADF55(unk_0x3C6C6327BA564AEE(Local_82.f_2[iParam0 /*26*/].f_1));
						if (fVar0 < 0.1f)
						{
							Var2 = { unk_0x3E4D3CCC220BDFB1(unk_0x3C6C6327BA564AEE(Local_82.f_2[iParam0 /*26*/].f_1), true) };
							Var3 = { Var2 };
							Var3.f_2 = (Var3.f_2 + 500f);
							if (unk_0xE5CC8E2D904E42CE(Var3, &fVar1, 0, 0))
							{
								if (unk_0x0D77CDCF403AEBD2((Var2.f_2 - fVar1)) > 30f)
								{
									unk_0x697DA7132EE43ABC(unk_0x3C6C6327BA564AEE(Local_82.f_2[iParam0 /*26*/].f_1), 0, 0);
								}
							}
						}
					}
				}
			}
		}
	}
}

int func_889(int iParam0)
{
	if (unk_0x3D70CCF2C9B362CD(Local_82.f_2[iParam0 /*26*/].f_2))
	{
		if (func_12(Local_82.f_2[iParam0 /*26*/].f_2))
		{
			if (unk_0xBCB2BD5C2E502335(unk_0x770D3B2B4702434A(Local_82.f_2[iParam0 /*26*/].f_2), 0, 7000) || unk_0xBCB2BD5C2E502335(unk_0x770D3B2B4702434A(Local_82.f_2[iParam0 /*26*/].f_2), 1, 40000))
			{
				return 1;
			}
		}
		else
		{
			return 1;
		}
	}
	return 0;
}

int func_890(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0x5E5402F6D3B26AFB(unk_0x460153A63B9477BC(), iParam0))
	{
		return 1;
	}
	if (unk_0x2311EB213A0CB707(unk_0x460153A63B9477BC(), iParam0))
	{
		return 1;
	}
	if (func_891())
	{
		if (unk_0x6FC5840B397E185A(unk_0x460153A63B9477BC(), &iVar0))
		{
			if (unk_0xA1914E72A0EB31D0(iVar0))
			{
				iVar1 = unk_0x9048E8838E822F21(iVar0);
				if (unk_0xAE06B9E39EBDE049(iVar1))
				{
					if (!unk_0xA59F96B50B97E63C(iVar1, 0))
					{
						if (unk_0x47DBF174A0CB9D55(iVar1, false))
						{
							return 1;
						}
					}
				}
			}
		}
	}
	return 0;
}

bool func_891()
{
	return Global_1574410;
}

void func_892()
{
	int iVar0;
	int iVar1;
	
	if (Local_82 != 4)
	{
		iVar1 = unk_0xF1110FE23C67293A(iLocal_87);
		if (unk_0x166E920FB00B2DBB(iVar1))
		{
			if (unk_0xFA298F06F67BBD4A(iVar1))
			{
				if (!func_850())
				{
					if (!func_917())
					{
						if (func_303())
						{
							if (func_190(iVar1, 1))
							{
								iVar0 = unk_0x9019589211A13B02(unk_0x628A51AC66E80772(Local_82.f_118));
								if (func_76(iVar1, iVar0, 1))
								{
									if (!unk_0xCE990E643CD9D0E5(Local_83[unk_0x59E2AD1A8ACEDA31() /*14*/].f_8, iLocal_87))
									{
										func_344(iVar1, 432, 1, 0);
										func_337(iVar1, func_343(iLocal_102), 1, 0);
										unk_0xBE20AB8238688965(&(Local_83[unk_0x59E2AD1A8ACEDA31() /*14*/].f_8), iLocal_87);
									}
								}
							}
						}
					}
				}
			}
			else if (unk_0xCE990E643CD9D0E5(Local_83[unk_0x59E2AD1A8ACEDA31() /*14*/].f_8, iLocal_87))
			{
				func_344(iVar1, 432, 0, 0);
				func_337(iVar1, func_343(iLocal_102), 0, 0);
				unk_0xD2459066EA58CE43(&(Local_83[unk_0x59E2AD1A8ACEDA31() /*14*/].f_8), iLocal_87);
			}
		}
	}
	iLocal_87++;
	if (iLocal_87 >= 32)
	{
		iLocal_87 = 0;
	}
}

int func_893(bool bParam0)
{
	if (func_897(1))
	{
		return 1;
	}
	if (Global_2540384.f_5188.f_41)
	{
		Global_2540384.f_5188.f_41 = 0;
		return 1;
	}
	if (bParam0)
	{
		if (func_256() == func_65() || !func_1031(func_256(), 0, 1))
		{
			return 1;
		}
	}
	if (!func_409(unk_0x460153A63B9477BC()))
	{
		if (func_894())
		{
			return 1;
		}
	}
	return 0;
}

int func_894()
{
	if (func_896(unk_0x460153A63B9477BC()) && func_895())
	{
		return 1;
	}
	if (func_391())
	{
		return 1;
	}
	return 0;
}

int func_895()
{
	switch (func_334(func_396(unk_0x460153A63B9477BC())))
	{
		case 11:
		case 14:
			return 1;
		
		default:
	}
	return 0;
}

int func_896(int iParam0)
{
	if (iParam0 != func_65() && func_1031(iParam0, 1, 1))
	{
		return unk_0xCE990E643CD9D0E5(Global_2425869[iParam0 /*443*/].f_314, 4);
	}
	return 0;
}

int func_897(bool bParam0)
{
	bool bVar0;
	
	if (!func_493(1))
	{
		bVar0 = false;
		if (Global_1630317[unk_0x460153A63B9477BC() /*595*/].f_11.f_57 != func_65())
		{
			if (func_1031(Global_1630317[unk_0x460153A63B9477BC() /*595*/].f_11.f_57, 0, 1))
			{
				if ((Global_1630317[unk_0x460153A63B9477BC() /*595*/].f_11.f_24 == 4 || Global_1630317[unk_0x460153A63B9477BC() /*595*/].f_11.f_24 == 8) || Global_1630317[unk_0x460153A63B9477BC() /*595*/].f_11.f_24 == 6)
				{
					bVar0 = true;
				}
			}
		}
		else if (func_140(func_105(unk_0x460153A63B9477BC())) == 0)
		{
			bVar0 = true;
		}
		if (bVar0)
		{
			if (bParam0)
			{
				func_548(31);
				if (func_322(func_105(unk_0x460153A63B9477BC())))
				{
					func_548(81);
				}
				if (Global_1630317[unk_0x460153A63B9477BC() /*595*/].f_11.f_57 != func_65() && unk_0x166E920FB00B2DBB(Global_1630317[unk_0x460153A63B9477BC() /*595*/].f_11.f_57))
				{
					Global_1627096 = func_363(Global_1630317[unk_0x460153A63B9477BC() /*595*/].f_11.f_57, -2, 0, 0, 0);
					if (!func_255(Global_1630317[unk_0x460153A63B9477BC() /*595*/].f_11.f_57))
					{
						func_548(88);
					}
				}
				else
				{
					Global_1627096 = 1;
				}
				Global_1627080 = { Global_1630317[unk_0x460153A63B9477BC() /*595*/].f_11.f_104 };
			}
			return 1;
		}
	}
	return 0;
}

void func_898()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = 0;
	while (iVar1 < 4)
	{
		if (unk_0x3D70CCF2C9B362CD(Local_82.f_2[iVar1 /*26*/].f_1))
		{
			if (Local_82.f_2[iVar1 /*26*/] == 2)
			{
				if (func_45(iVar1))
				{
					iVar2 = 0;
					iVar2 = 0;
					while (iVar2 < 3)
					{
						if (unk_0x3D70CCF2C9B362CD(Local_82.f_2[iVar1 /*26*/].f_3[iVar2]))
						{
							uLocal_101[iVar0] = Local_82.f_2[iVar1 /*26*/].f_3[iVar2];
							iVar0++;
						}
						iVar2++;
					}
				}
			}
		}
		iVar1++;
	}
}

void func_899()
{
	int iVar0;
	int iVar1;
	bool bVar2;
	
	bVar2 = (unk_0x59E2AD1A8ACEDA31() == Local_82.f_118 || func_918() == Local_82.f_118);
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (!bVar2)
		{
			if (unk_0x3D70CCF2C9B362CD(Local_82.f_2[iVar0 /*26*/].f_1))
			{
				unk_0x46E5E2D7B31743C8(unk_0x3C6C6327BA564AEE(Local_82.f_2[iVar0 /*26*/].f_1), unk_0x460153A63B9477BC(), 0);
			}
			iVar1 = 0;
			iVar1 = 0;
			while (iVar1 < 3)
			{
				if (unk_0x3D70CCF2C9B362CD(Local_82.f_2[iVar0 /*26*/].f_3[iVar1]))
				{
					unk_0x46E5E2D7B31743C8(unk_0x3C6C6327BA564AEE(Local_82.f_2[iVar0 /*26*/].f_3[iVar1]), unk_0x460153A63B9477BC(), 0);
				}
				iVar1++;
			}
		}
		iVar0++;
	}
}

void func_900()
{
	if (Local_82.f_118 > -1)
	{
		iLocal_102 = func_750(unk_0x9019589211A13B02(unk_0x628A51AC66E80772(Local_82.f_118)));
	}
}

void func_901(float fParam0)
{
	float fVar0;
	
	if (unk_0x856D5567211886A2(unk_0x6C5C6B207AA78253()) == func_340())
	{
		return;
	}
	fVar0 = (Global_2540384.f_5183 - fParam0);
	if (unk_0x7FD2BDF03806FD9D(Global_2540384.f_5184))
	{
		if (!Global_2540384.f_5184 == unk_0x354AD085195C5FA6() && unk_0x0D77CDCF403AEBD2(fVar0) > 0.001f)
		{
			return;
		}
	}
	Global_2540384.f_5183 = fParam0;
	Global_2540384.f_5184 = unk_0x354AD085195C5FA6();
}

void func_902(int iParam0, bool bParam1, int iParam2, int iParam3)
{
	float fVar0;
	
	if (Global_1630317[unk_0x460153A63B9477BC() /*595*/].f_11.f_33 != iParam0)
	{
		func_916(-1);
		Global_1630317[unk_0x460153A63B9477BC() /*595*/].f_11.f_33 = iParam0;
		if (func_915() != -1)
		{
			func_914(-1);
		}
		if (func_913() != -1)
		{
			func_912(-1);
		}
		func_911(iParam2);
		func_909(iParam0);
		if (!func_116(iParam0))
		{
			fVar0 = func_115(iParam0);
			if (fVar0 != 1f)
			{
				func_901(fVar0);
				unk_0xBE20AB8238688965(&(Global_1676119.f_3), 1);
			}
		}
		if (!func_119(iParam0) || iParam3)
		{
			if (func_117(iParam0, iParam2) && iParam3 == 1)
			{
				unk_0x53797676AD34A9AA(0);
				if (!unk_0x5AEB5DDFFAD43CA5(unk_0x9B0761B4C3EB8BC7()))
				{
					unk_0xCAD5C18968E57C30(unk_0x460153A63B9477BC(), 0, 0);
					unk_0x4B86C627B5EABFBF(unk_0x460153A63B9477BC(), 0);
				}
				unk_0xBE20AB8238688965(&(Global_1676119.f_3), 0);
			}
			else if (unk_0xB9FD7D4438BECDFC() < 5)
			{
				unk_0x34FEEAC2548C3789(1f);
				unk_0x53797676AD34A9AA(5);
			}
		}
		if (func_143())
		{
			func_110(27);
		}
		if (bParam1)
		{
			if (!func_144())
			{
				func_112(1);
			}
		}
		if ((((((iParam0 == 159 || iParam0 == 157) || iParam0 == 153) || iParam0 == 154) || iParam0 == 164) || iParam0 == 155) || iParam0 == 171)
		{
			if ((unk_0xCE990E643CD9D0E5(Global_2540384.f_4619, 1) || unk_0xCE990E643CD9D0E5(Global_2540384.f_4619, 4)) || unk_0xCE990E643CD9D0E5(Global_2540384.f_4619, 0))
			{
				func_548(6);
			}
			func_908();
		}
		if (((iParam0 == 164 || iParam0 == 208) || iParam0 == 250) || iParam0 == 237)
		{
			unk_0x40ECEB892E6BDDDB(3, false);
			unk_0x40ECEB892E6BDDDB(5, false);
		}
		if (func_132(unk_0x460153A63B9477BC()) && func_124(unk_0x460153A63B9477BC()))
		{
			unk_0xBE20AB8238688965(&(Global_1630317[unk_0x460153A63B9477BC() /*595*/].f_1), 8);
		}
		func_904();
		if (func_903(iParam0))
		{
			unk_0x40ECEB892E6BDDDB(3, false);
			unk_0x40ECEB892E6BDDDB(5, false);
			unk_0xBE20AB8238688965(&(Global_1676119.f_3), 6);
		}
		Global_2540384.f_6650 = 0;
	}
}

int func_903(int iParam0)
{
	switch (iParam0)
	{
		case 216:
		case 218:
		case 215:
		case 120:
		case 214:
		case 220:
		case 221:
		case 217:
		case 219:
			return 1;
		
		default:
	}
	return 0;
}

void func_904()
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	
	bVar3 = func_907();
	iVar2 = func_66(unk_0x460153A63B9477BC());
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar1 = unk_0xF1110FE23C67293A(iVar0);
		if (unk_0x166E920FB00B2DBB(iVar1))
		{
			if (func_76(iVar1, iVar2, 1) || func_905(iVar1, unk_0x460153A63B9477BC()))
			{
				unk_0xA3B640F5FFBB6FBF(unk_0x460153A63B9477BC(), iVar1, bVar3);
				unk_0xA3B640F5FFBB6FBF(iVar1, unk_0x460153A63B9477BC(), bVar3);
			}
		}
		iVar0++;
	}
}

int func_905(int iParam0, int iParam1)
{
	if (func_190(iParam0, 1) && func_190(iParam1, 1))
	{
		return (func_906(iParam0) == func_66(iParam1) || func_906(iParam1) == func_66(iParam0));
	}
	return 0;
}

int func_906(int iParam0)
{
	if (func_190(iParam0, 1))
	{
		return Global_1630317[func_66(iParam0) /*595*/].f_11.f_457;
	}
	return func_65();
}

int func_907()
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_495();
	if (iVar0 != func_65())
	{
		if (func_1031(iVar0, 0, 1))
		{
			iVar1 = iVar0;
			if (iVar1 != -1)
			{
				return unk_0xCE990E643CD9D0E5(Global_1630317[iVar1 /*595*/].f_1, 16);
			}
		}
	}
	return 0;
}

void func_908()
{
	if (unk_0xCE990E643CD9D0E5(Global_2540384.f_4619, 1))
	{
		unk_0xD2459066EA58CE43(&(Global_2540384.f_4619), 1);
	}
	if (unk_0xCE990E643CD9D0E5(Global_2540384.f_4619, 4))
	{
		unk_0xD2459066EA58CE43(&(Global_2540384.f_4619), 4);
	}
	if (unk_0xCE990E643CD9D0E5(Global_2540384.f_4619, 6))
	{
		unk_0xD2459066EA58CE43(&(Global_2540384.f_4619), 6);
	}
	unk_0xD2459066EA58CE43(&(Global_2540384.f_4619), 0);
	unk_0xD2459066EA58CE43(&(Global_2540384.f_4619), 2);
	Global_1590682[unk_0x460153A63B9477BC() /*883*/].f_758 = 0;
	if (Global_2540384.f_4621 > 0)
	{
		unk_0x53797676AD34A9AA(Global_2540384.f_4621);
	}
	Global_2540384.f_4620 = 0;
}

void func_909(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_462(3792, -1, 0);
	iVar1 = func_910(iParam0);
	if (iVar1 != -1)
	{
		unk_0xBE20AB8238688965(&iVar0, iVar1);
		func_460(3792, iVar0, -1, 1, 0);
	}
}

int func_910(int iParam0)
{
	switch (iParam0)
	{
		case 170:
			return 0;
		
		case 166:
			return 1;
		
		case 171:
			return 2;
		
		case 172:
			return 3;
		
		case 173:
			return 4;
		
		case 214:
			return 5;
		
		case 215:
			return 6;
		
		case 216:
			return 7;
		
		case 217:
			return 8;
		
		case 218:
			return 9;
		
		case 219:
			return 10;
		
		case 220:
			return 11;
		
		case 221:
			return 12;
		
		default:
	}
	return -1;
}

void func_911(int iParam0)
{
	int iVar0;
	
	iVar0 = unk_0x460153A63B9477BC();
	if (Global_1630317[iVar0 /*595*/].f_11.f_181 != iParam0)
	{
		Global_1630317[iVar0 /*595*/].f_11.f_181 = iParam0;
	}
}

void func_912(int iParam0)
{
	if (Global_2540384.f_5188.f_341 != iParam0)
	{
		Global_2540384.f_5188.f_341 = iParam0;
	}
}

int func_913()
{
	return Global_2540384.f_5188.f_341;
}

void func_914(int iParam0)
{
	if (Global_2540384.f_5188.f_340 != iParam0)
	{
		Global_2540384.f_5188.f_340 = iParam0;
	}
}

int func_915()
{
	return Global_2540384.f_5188.f_340;
}

void func_916(int iParam0)
{
	Global_1630317[unk_0x460153A63B9477BC() /*595*/].f_11.f_32 = iParam0;
}

int func_917()
{
	int iVar0;
	
	iVar0 = func_918();
	if (iVar0 > -1)
	{
		if (Local_82.f_118 == iVar0)
		{
			return 1;
		}
	}
	return 0;
}

int func_918()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = -1;
	iVar1 = func_65();
	if (!func_17(unk_0x460153A63B9477BC(), 0))
	{
		iVar0 = unk_0x59E2AD1A8ACEDA31();
		iVar1 = unk_0x460153A63B9477BC();
	}
	else
	{
		iVar0 = func_304();
		iVar1 = Global_1590682[unk_0x460153A63B9477BC() /*883*/].f_747;
	}
	if (iVar0 == -1)
	{
		return -1;
	}
	if (Local_83[iVar0 /*14*/].f_10 != -1)
	{
		return Local_83[iVar0 /*14*/].f_10;
	}
	if (func_123(iVar1))
	{
		Local_83[iVar0 /*14*/].f_10 = iVar0;
		if (iVar0 == Local_82.f_118)
		{
			func_826(1);
		}
	}
	else if (func_190(iVar1, 1))
	{
		iVar2 = func_66(iVar1);
		if (iVar2 != func_65())
		{
			if (unk_0xFA298F06F67BBD4A(iVar2))
			{
				Local_83[iVar0 /*14*/].f_10 = unk_0x653D75F1BBF766B3(iVar2);
			}
		}
	}
	return Local_83[iVar0 /*14*/].f_10;
}

int func_919()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (!unk_0x3D70CCF2C9B362CD(Local_82.f_2[iVar0 /*26*/].f_1))
		{
			return 0;
		}
		iVar0++;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (func_45(iVar0))
		{
			if (!func_36(iVar0))
			{
				return 0;
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (func_34(iVar0))
		{
			if (!func_27(iVar0))
			{
				return 0;
			}
		}
		iVar0++;
	}
	return 1;
}

int func_920()
{
	return Local_82;
}

int func_921(int iParam0)
{
	return Local_83[iParam0 /*14*/];
}

int func_922()
{
	var uVar0;
	
	func_927(&uVar0);
	if (Global_1312872 == 0)
	{
		if (!unk_0x25DDB354A40FFCDB())
		{
			return 1;
		}
	}
	if (func_926())
	{
		return 1;
	}
	if (Global_2464493)
	{
		return 1;
	}
	if (func_925())
	{
		return 1;
	}
	if (func_924(159))
	{
		if (!func_923())
		{
			return 1;
		}
	}
	if (func_924(157))
	{
		return 1;
	}
	if (!unk_0x0EB6C63A09FD9DF1())
	{
		return 1;
	}
	if (func_340() != 0)
	{
		if (unk_0x7B70881748D166CD(func_340()) == 0)
		{
			return 1;
		}
	}
	return 0;
}

bool func_923()
{
	return Global_2451787.f_696;
}

int func_924(int iParam0)
{
	if (unk_0x16F1FCCC54559709(1, iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_925()
{
	return Global_2462250;
}

bool func_926()
{
	return Global_2451787.f_691;
}

void func_927(var uParam0)
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
					func_928(iVar0);
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

void func_928(int iParam0)
{
	struct<3> Var0;
	int iVar1;
	int iVar2;
	bool bVar3;
	
	if (unk_0x477FAFFE21935947(1, iParam0, &Var0, 3))
	{
		if (func_1031(Var0.f_1, 1, 1))
		{
			iVar1 = unk_0x1FA7B77001D60F9D(Var0.f_1);
			if (unk_0xAE06B9E39EBDE049(iVar1))
			{
				if (unk_0x47DBF174A0CB9D55(iVar1, false))
				{
					iVar2 = unk_0xA5D5B1042E8F47BD(iVar1, false);
					if (unk_0x292280AF1BBBD6AC(iVar2, Var0.f_2) && unk_0x82CC259B7B4F4AD9())
					{
						if (func_929(iVar2, &bVar3))
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

int func_929(int iParam0, var uParam1)
{
	if (unk_0xAE06B9E39EBDE049(iParam0))
	{
		if (!unk_0x1758275D343D5BA3(iParam0))
		{
			if (unk_0x38CC98C4A0688263(iParam0))
			{
				if (!unk_0xCA6AF782C906AC86(unk_0x36FE6D3220816ADA(iParam0)))
				{
					unk_0x4F3C4F457D44BB0F(iParam0, false, 1);
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

void func_930()
{
	wait(0);
}

void func_931()
{
	var uVar0;
	var uVar1;
	int iVar2;
	int iVar3;
	
	if (!func_17(unk_0x460153A63B9477BC(), 0))
	{
		if (!unk_0xCE990E643CD9D0E5(iLocal_84, 6))
		{
			if (unk_0x25DDB354A40FFCDB())
			{
				if (func_917() || func_303())
				{
					func_630(0, 4, 0, 0, -1, -1, -1, -1, -1, 0);
					unk_0xBE20AB8238688965(&iLocal_84, 6);
				}
			}
		}
		uVar0 = Local_82.f_115;
		uVar1 = Local_82.f_121;
		iVar2 = -1;
		if (unk_0x25DDB354A40FFCDB())
		{
			iVar2 = Local_83[unk_0x59E2AD1A8ACEDA31() /*14*/].f_11;
		}
		func_976(uVar0, uVar1, iVar2, -1082130432);
		if (unk_0x25DDB354A40FFCDB())
		{
			if (unk_0x86FB3A0D4870FE62(unk_0x9B0761B4C3EB8BC7()) == iLocal_89)
			{
				unk_0xD3D9D7C84656DAE5(unk_0x9B0761B4C3EB8BC7(), iLocal_90);
			}
		}
	}
	if (unk_0xCE990E643CD9D0E5(iLocal_84, 18))
	{
		func_349(1);
		unk_0xD2459066EA58CE43(&iLocal_84, 18);
	}
	func_975();
	if (Local_82.f_119 != -1)
	{
		if (unk_0xCE990E643CD9D0E5(iLocal_84, 5))
		{
			if (unk_0x166E920FB00B2DBB(unk_0xF1110FE23C67293A(Local_82.f_119)))
			{
			}
		}
	}
	if (func_81(0))
	{
		func_80(0);
	}
	if (unk_0x25DDB354A40FFCDB())
	{
		if (unk_0xAFF96FDC3971E7EA())
		{
			iVar3 = 0;
			while (iVar3 < 5)
			{
				if (unk_0xCE990E643CD9D0E5(Local_82.f_871, iVar3))
				{
					unk_0x1E337EE68290597A(Local_82.f_865[iVar3], 1);
				}
				iVar3++;
			}
		}
	}
	if (unk_0xCE990E643CD9D0E5(iLocal_84, 17))
	{
		unk_0x53797676AD34A9AA(iLocal_104);
		unk_0xD2459066EA58CE43(&iLocal_84, 17);
	}
	func_346();
	unk_0xBE20AB8238688965(&iLocal_85, 8);
	func_764();
	unk_0xA56CD6645E357318(1);
	func_826(0);
	func_933(1, 0);
	unk_0x53797676AD34A9AA(5);
	func_336();
	func_932();
}

void func_932()
{
	unk_0xD39E529EBE5DB04F();
}

void func_933(bool bParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	if (Global_1366969.f_1.f_108 != 0)
	{
		Global_1366969.f_1.f_108 = 0;
	}
	Global_1366969.f_1.f_109 = -1;
	Global_1366969.f_1.f_110 = -1;
	if (Global_1630317[unk_0x460153A63B9477BC() /*595*/].f_11.f_33 == 167 || Global_1630317[unk_0x460153A63B9477BC() /*595*/].f_11.f_33 == 168)
	{
		func_973();
		unk_0xD2459066EA58CE43(&(Global_1676119.f_3), 4);
	}
	if ((func_463() && iParam1 != 0) && Global_262145.f_16989)
	{
		if (Global_1630317[unk_0x460153A63B9477BC() /*595*/].f_11.f_33 == 190 || Global_1630317[unk_0x460153A63B9477BC() /*595*/].f_11.f_33 == 192)
		{
			func_955(unk_0x460153A63B9477BC(), iParam1, 1, 0);
		}
	}
	if (((Global_1630317[unk_0x460153A63B9477BC() /*595*/].f_11.f_33 == 164 || Global_1630317[unk_0x460153A63B9477BC() /*595*/].f_11.f_33 == 208) || Global_1630317[unk_0x460153A63B9477BC() /*595*/].f_11.f_33 == 250) || Global_1630317[unk_0x460153A63B9477BC() /*595*/].f_11.f_33 == 237)
	{
		unk_0x40ECEB892E6BDDDB(3, true);
		unk_0x40ECEB892E6BDDDB(5, true);
	}
	if (Global_1630317[unk_0x460153A63B9477BC() /*595*/].f_11.f_33 != -1)
	{
		Global_1630317[unk_0x460153A63B9477BC() /*595*/].f_11.f_33 = -1;
		if (!unk_0xCE990E643CD9D0E5(Global_1574656.f_1, 14) && !func_132(unk_0x460153A63B9477BC()))
		{
			func_112(0);
		}
	}
	else if (func_953(unk_0x460153A63B9477BC()) != -1)
	{
		func_916(-1);
	}
	func_952(func_65());
	if (func_81(16))
	{
		func_80(16);
	}
	func_949(0);
	func_911(-1);
	func_948();
	iVar0 = 0;
	while (iVar0 < 8)
	{
		func_946(iVar0);
		iVar0++;
	}
	if (unk_0xCE990E643CD9D0E5(Global_1676119.f_3, 0))
	{
		unk_0x34FEEAC2548C3789(1f);
		unk_0x53797676AD34A9AA(5);
		unk_0xD2459066EA58CE43(&(Global_1676119.f_3), 0);
	}
	if (unk_0xCE990E643CD9D0E5(Global_1676119.f_3, 5))
	{
		unk_0xD2459066EA58CE43(&(Global_1676119.f_3), 5);
	}
	iVar1 = func_329();
	if ((func_220(iVar1) || iVar1 == 205) || iVar1 == 210)
	{
		func_945(-1);
	}
	else if (((iVar1 == 201 || iVar1 == 200) || iVar1 == 179) || func_138(iVar1))
	{
		func_942(-1, 1);
	}
	else if (((((func_328(iVar1) || func_941(iVar1)) || func_940(iVar1)) || func_418(iVar1)) || func_416(iVar1)) || func_414(iVar1))
	{
	}
	else
	{
		func_942(-1, 1);
	}
	func_108(19);
	func_108(20);
	func_108(21);
	func_108(22);
	func_108(27);
	func_80(3);
	func_80(4);
	func_80(7);
	func_939();
	if (func_124(unk_0x460153A63B9477BC()))
	{
		func_826(0);
	}
	func_108(29);
	Global_1630317[unk_0x460153A63B9477BC() /*595*/].f_11.f_57 = func_65();
	if (Global_2540384.f_5188.f_41 != 0)
	{
		Global_2540384.f_5188.f_41 = 0;
	}
	if (bParam0)
	{
		func_82();
	}
	if (!func_132(unk_0x460153A63B9477BC()))
	{
		func_107();
		unk_0xD2459066EA58CE43(&(Global_1676119.f_3), 1);
	}
	if (unk_0xCE990E643CD9D0E5(Global_1676119.f_3, 6))
	{
		unk_0x40ECEB892E6BDDDB(3, true);
		unk_0x40ECEB892E6BDDDB(5, true);
		unk_0xD2459066EA58CE43(&(Global_1676119.f_3), 6);
	}
	if (unk_0xCE990E643CD9D0E5(Global_1676119.f_3, 7))
	{
		unk_0xD2459066EA58CE43(&(Global_1676119.f_3), 7);
	}
	if (unk_0xCE990E643CD9D0E5(Global_1676119.f_3, 8))
	{
		func_938("IMPEXP_SELFDES", 0);
		func_936("IMPEXP_SELFDES");
		unk_0xD2459066EA58CE43(&(Global_1676119.f_3), 8);
	}
	func_934(iVar1, 0);
}

void func_934(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		if (!unk_0xCE990E643CD9D0E5(Global_1676119.f_3, 9))
		{
			unk_0x17E478571720218F(func_935(iParam0));
			unk_0xBE20AB8238688965(&(Global_1676119.f_3), 9);
		}
	}
	else if (unk_0xCE990E643CD9D0E5(Global_1676119.f_3, 9))
	{
		unk_0xFA07F8BEBDAAFBA8(func_935(iParam0));
		unk_0xD2459066EA58CE43(&(Global_1676119.f_3), 9);
	}
}

char* func_935(int iParam0)
{
	switch (iParam0)
	{
		case 219:
			return "DLC_IE_VIP_Velocity_Vehicle_Scene";
		
		case 221:
			return "DLC_IE_VIP_Stockpiling_Vehicle_Scene";
		
		case 220:
			return "DLC_IE_VIP_Ramped_Up_Vehicle_Scene";
		
		case 214:
			return "DLC_IE_VIP_Plowed_Vehicle_Scene";
		
		case 217:
			return "DLC_IE_VIP_Transporter_Vehicle_Scene";
		
		case 218:
			return "DLC_IE_VIP_Fortified_Vehicle_Scene";
		
		case 215:
			return "DLC_IE_VIP_Fully_Loaded_Vehicle_Scene";
		
		case 216:
			return "DLC_IE_VIP_Amphibious_Assault_Vehicle_Scene";
		
		default:
	}
	return "";
}

void func_936(char* sParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 35)
	{
		if (!unk_0x211E6DB3335430B4(&(Global_111858.f_14137[iVar0 /*104*/])))
		{
			if (unk_0xF005CCA4263DF67F(&(Global_111858.f_14137[iVar0 /*104*/]), sParam0))
			{
				if (Global_111858.f_14137[iVar0 /*104*/].f_24 == 2)
				{
				}
				else
				{
					func_841();
					Global_111858.f_14137[iVar0 /*104*/].f_99[Global_19681] = 0;
					if (func_937(iVar0))
					{
					}
					else
					{
						Global_111858.f_14137[iVar0 /*104*/].f_24 = 0;
						Global_111858.f_14137[iVar0 /*104*/].f_28 = 0;
						Global_111858.f_14137[iVar0 /*104*/].f_29 = 0;
					}
					unk_0xB6B2734989D2EBCB(Global_111858.f_14137[iVar0 /*104*/].f_16);
				}
			}
		}
		iVar0++;
	}
}

int func_937(int iParam0)
{
	if ((Global_111858.f_14137[iParam0 /*104*/].f_99[0] == 1 || Global_111858.f_14137[iParam0 /*104*/].f_99[1] == 1) || Global_111858.f_14137[iParam0 /*104*/].f_99[2] == 1)
	{
		return 1;
	}
	return 0;
}

void func_938(char* sParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 35)
	{
		if (!unk_0x211E6DB3335430B4(&(Global_111858.f_14137[iVar0 /*104*/])))
		{
			if (unk_0xF005CCA4263DF67F(&(Global_111858.f_14137[iVar0 /*104*/]), sParam0))
			{
				if (Global_111858.f_14137[iVar0 /*104*/].f_24 == 0)
				{
				}
				Global_111858.f_14137[iVar0 /*104*/].f_24 = 1;
				if (Global_111858.f_14137[iVar0 /*104*/].f_25 == 1)
				{
					if (Global_111858.f_14137[iVar0 /*104*/].f_99[0] == 1)
					{
						Global_111858.f_14047[0 /*20*/].f_17 = 0;
					}
					if (Global_111858.f_14137[iVar0 /*104*/].f_99[1] == 1)
					{
						Global_111858.f_14047[1 /*20*/].f_17 = 0;
					}
					if (Global_111858.f_14137[iVar0 /*104*/].f_99[2] == 1)
					{
						Global_111858.f_14047[2 /*20*/].f_17 = 0;
					}
					if (Global_111858.f_14137[iVar0 /*104*/].f_99[3] == 1)
					{
						Global_111858.f_14047[3 /*20*/].f_17 = 0;
					}
					Global_111858.f_14137[iVar0 /*104*/].f_25 = 0;
					if (iParam1 == 1)
					{
						Global_111858.f_14137[iVar0 /*104*/].f_27 = 1;
					}
				}
			}
		}
		iVar0++;
	}
}

void func_939()
{
	if (func_127(unk_0x460153A63B9477BC()))
	{
		func_108(25);
	}
}

int func_940(int iParam0)
{
	switch (iParam0)
	{
		case 178:
		case 188:
			return 1;
		
		default:
	}
	return 0;
}

int func_941(int iParam0)
{
	if ((iParam0 == 191 || iParam0 == 190) || iParam0 == 192)
	{
		return 1;
	}
	return 0;
}

void func_942(int iParam0, bool bParam1)
{
	int iVar0;
	
	if (iParam0 == -1)
	{
		iParam0 = func_329();
	}
	if (iParam0 > 0)
	{
		if (func_495() != func_65())
		{
			if (func_410(unk_0x460153A63B9477BC()) == unk_0x460153A63B9477BC())
			{
				Global_2516617.f_93[func_944(iParam0)] = 1;
			}
		}
		iVar0 = func_944(159);
		if (func_943(iVar0, Global_262145.f_12614, bParam1))
		{
			func_162(&(Global_2516617[iVar0 /*2*/]));
			func_7(&(Global_2516617[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_944(157);
		if (func_943(iVar0, Global_262145.f_12614, bParam1))
		{
			func_162(&(Global_2516617[iVar0 /*2*/]));
			func_7(&(Global_2516617[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_944(148);
		if (func_943(iVar0, Global_262145.f_12614, bParam1))
		{
			func_162(&(Global_2516617[iVar0 /*2*/]));
			func_7(&(Global_2516617[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_944(164);
		if (func_943(iVar0, Global_262145.f_12614, bParam1))
		{
			func_162(&(Global_2516617[iVar0 /*2*/]));
			func_7(&(Global_2516617[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_944(142);
		if (func_943(iVar0, Global_262145.f_12614, bParam1))
		{
			func_162(&(Global_2516617[iVar0 /*2*/]));
			func_7(&(Global_2516617[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_944(152);
		if (func_943(iVar0, Global_262145.f_12614, bParam1))
		{
			func_162(&(Global_2516617[iVar0 /*2*/]));
			func_7(&(Global_2516617[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_944(166);
		if (func_943(iVar0, Global_262145.f_12614, bParam1))
		{
			func_162(&(Global_2516617[iVar0 /*2*/]));
			func_7(&(Global_2516617[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_944(170);
		if (func_943(iVar0, Global_262145.f_12614, bParam1))
		{
			func_162(&(Global_2516617[iVar0 /*2*/]));
			func_7(&(Global_2516617[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_944(173);
		if (func_943(iVar0, Global_262145.f_12614, bParam1))
		{
			func_162(&(Global_2516617[iVar0 /*2*/]));
			func_7(&(Global_2516617[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_944(179);
		if (func_943(iVar0, Global_262145.f_12614, bParam1))
		{
			func_162(&(Global_2516617[iVar0 /*2*/]));
			func_7(&(Global_2516617[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_944(200);
		if (func_943(iVar0, Global_262145.f_12614, bParam1))
		{
			func_162(&(Global_2516617[iVar0 /*2*/]));
			func_7(&(Global_2516617[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_944(201);
		if (func_943(iVar0, Global_262145.f_12614, bParam1))
		{
			func_162(&(Global_2516617[iVar0 /*2*/]));
			func_7(&(Global_2516617[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_944(182);
		if (func_943(iVar0, Global_262145.f_12615, 0))
		{
			func_162(&(Global_2516617[iVar0 /*2*/]));
			func_7(&(Global_2516617[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_944(183);
		if (func_943(iVar0, Global_262145.f_12615, 0))
		{
			func_162(&(Global_2516617[iVar0 /*2*/]));
			func_7(&(Global_2516617[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_944(185);
		if (func_943(iVar0, Global_262145.f_12615, 0))
		{
			func_162(&(Global_2516617[iVar0 /*2*/]));
			func_7(&(Global_2516617[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_944(186);
		if (func_943(iVar0, Global_262145.f_12615, 0))
		{
			func_162(&(Global_2516617[iVar0 /*2*/]));
			func_7(&(Global_2516617[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_944(180);
		if (func_943(iVar0, Global_262145.f_12615, 0))
		{
			func_162(&(Global_2516617[iVar0 /*2*/]));
			func_7(&(Global_2516617[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_944(195);
		if (func_943(iVar0, Global_262145.f_12615, 0))
		{
			func_162(&(Global_2516617[iVar0 /*2*/]));
			func_7(&(Global_2516617[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_944(197);
		if (func_943(iVar0, Global_262145.f_12615, 0))
		{
			func_162(&(Global_2516617[iVar0 /*2*/]));
			func_7(&(Global_2516617[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_944(198);
		if (func_943(iVar0, Global_262145.f_12615, 0))
		{
			func_162(&(Global_2516617[iVar0 /*2*/]));
			func_7(&(Global_2516617[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_944(207);
		if (func_943(iVar0, Global_262145.f_12615, 0))
		{
			func_162(&(Global_2516617[iVar0 /*2*/]));
			func_7(&(Global_2516617[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_944(208);
		if (func_943(iVar0, Global_262145.f_12615, 0))
		{
			func_162(&(Global_2516617[iVar0 /*2*/]));
			func_7(&(Global_2516617[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_944(209);
		if (func_943(iVar0, Global_262145.f_12615, 0))
		{
			func_162(&(Global_2516617[iVar0 /*2*/]));
			func_7(&(Global_2516617[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_944(214);
		if (func_943(iVar0, Global_262145.f_12615, 0))
		{
			func_162(&(Global_2516617[iVar0 /*2*/]));
			func_7(&(Global_2516617[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_944(215);
		if (func_943(iVar0, Global_262145.f_12615, 0))
		{
			func_162(&(Global_2516617[iVar0 /*2*/]));
			func_7(&(Global_2516617[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_944(216);
		if (func_943(iVar0, Global_262145.f_12615, 0))
		{
			func_162(&(Global_2516617[iVar0 /*2*/]));
			func_7(&(Global_2516617[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_944(217);
		if (func_943(iVar0, Global_262145.f_12615, 0))
		{
			func_162(&(Global_2516617[iVar0 /*2*/]));
			func_7(&(Global_2516617[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_944(218);
		if (func_943(iVar0, Global_262145.f_12615, 0))
		{
			func_162(&(Global_2516617[iVar0 /*2*/]));
			func_7(&(Global_2516617[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_944(219);
		if (func_943(iVar0, Global_262145.f_12615, 0))
		{
			func_162(&(Global_2516617[iVar0 /*2*/]));
			func_7(&(Global_2516617[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_944(220);
		if (func_943(iVar0, Global_262145.f_12615, 0))
		{
			func_162(&(Global_2516617[iVar0 /*2*/]));
			func_7(&(Global_2516617[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_944(221);
		if (func_943(iVar0, Global_262145.f_12615, 0))
		{
			func_162(&(Global_2516617[iVar0 /*2*/]));
			func_7(&(Global_2516617[iVar0 /*2*/]), 1, 0);
		}
	}
}

int func_943(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		if ((!func_109(unk_0x460153A63B9477BC(), 19) && !func_109(unk_0x460153A63B9477BC(), 20)) && !func_109(unk_0x460153A63B9477BC(), 9))
		{
			return 0;
		}
	}
	if (Global_2516617.f_93[iParam0] == 1 && func_8(&(Global_2516617[iParam0 /*2*/])))
	{
		if (func_766(&(Global_2516617[iParam0 /*2*/]), 1, 0) < iParam1)
		{
			Global_2516617.f_93[iParam0] = 0;
			return 1;
		}
		return 0;
	}
	return 1;
}

int func_944(int iParam0)
{
	switch (iParam0)
	{
		case 159:
			return 11;
		
		case 157:
			return 12;
		
		case 148:
			return 13;
		
		case 164:
			return 14;
		
		case 142:
			return 15;
		
		case 152:
			return 16;
		
		case 163:
			return 17;
		
		case 155:
			return 18;
		
		case 160:
			return 19;
		
		case 153:
			return 20;
		
		case 162:
			return 21;
		
		case 154:
			return 22;
		
		case 166:
			return 8;
		
		case 170:
			return 9;
		
		case 173:
			return 10;
		
		case 171:
			return 23;
		
		case 172:
			return 24;
		
		case 179:
			return 25;
		
		case 189:
			return 26;
		
		case 193:
			return 27;
		
		case 194:
			return 28;
		
		case 199:
			return 29;
		
		case 201:
			return 30;
		
		case 200:
			return 31;
		
		case 205:
			return 32;
		
		case 210:
			return 33;
		
		case 182:
			return 34;
		
		case 183:
			return 35;
		
		case 185:
			return 36;
		
		case 186:
			return 37;
		
		case 180:
			return 38;
		
		case 195:
			return 39;
		
		case 197:
			return 40;
		
		case 198:
			return 41;
		
		case 207:
			return 42;
		
		case 208:
			return 43;
		
		case 209:
			return 44;
		
		case 211:
			return 45;
		
		case 214:
			return 0;
		
		case 215:
			return 1;
		
		case 216:
			return 2;
		
		case 217:
			return 3;
		
		case 218:
			return 4;
		
		case 219:
			return 5;
		
		case 220:
			return 6;
		
		case 221:
			return 7;
		
		default:
	}
	return -1;
}

void func_945(int iParam0)
{
	int iVar0;
	
	if (iParam0 == -1)
	{
		iParam0 = func_329();
	}
	if (iParam0 > 0)
	{
		if (func_495() != func_65())
		{
			Global_2516617.f_93[func_944(iParam0)] = 1;
		}
		iVar0 = func_944(155);
		if (func_943(iVar0, Global_262145.f_12615, 0))
		{
			func_162(&(Global_2516617[iVar0 /*2*/]));
			func_7(&(Global_2516617[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_944(163);
		if (func_943(iVar0, Global_262145.f_12615, 0))
		{
			func_162(&(Global_2516617[iVar0 /*2*/]));
			func_7(&(Global_2516617[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_944(160);
		if (func_943(iVar0, Global_262145.f_12615, 0))
		{
			func_162(&(Global_2516617[iVar0 /*2*/]));
			func_7(&(Global_2516617[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_944(153);
		if (func_943(iVar0, Global_262145.f_12615, 0))
		{
			func_162(&(Global_2516617[iVar0 /*2*/]));
			func_7(&(Global_2516617[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_944(162);
		if (func_943(iVar0, Global_262145.f_12615, 0))
		{
			func_162(&(Global_2516617[iVar0 /*2*/]));
			func_7(&(Global_2516617[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_944(154);
		if (func_943(iVar0, Global_262145.f_12615, 0))
		{
			func_162(&(Global_2516617[iVar0 /*2*/]));
			func_7(&(Global_2516617[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_944(171);
		if (func_943(iVar0, Global_262145.f_12615, 0))
		{
			func_162(&(Global_2516617[iVar0 /*2*/]));
			func_7(&(Global_2516617[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_944(172);
		if (func_943(iVar0, Global_262145.f_12615, 0))
		{
			func_162(&(Global_2516617[iVar0 /*2*/]));
			func_7(&(Global_2516617[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_944(199);
		if (func_943(iVar0, Global_262145.f_12615, 0))
		{
			func_162(&(Global_2516617[iVar0 /*2*/]));
			func_7(&(Global_2516617[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_944(194);
		if (func_943(iVar0, Global_262145.f_12615, 0))
		{
			func_162(&(Global_2516617[iVar0 /*2*/]));
			func_7(&(Global_2516617[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_944(193);
		if (func_943(iVar0, Global_262145.f_12615, 0))
		{
			func_162(&(Global_2516617[iVar0 /*2*/]));
			func_7(&(Global_2516617[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_944(210);
		if (func_943(iVar0, Global_262145.f_12615, 0))
		{
			func_162(&(Global_2516617[iVar0 /*2*/]));
			func_7(&(Global_2516617[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_944(205);
		if (func_943(iVar0, Global_262145.f_12615, 0))
		{
			func_162(&(Global_2516617[iVar0 /*2*/]));
			func_7(&(Global_2516617[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_944(189);
		if (func_943(iVar0, Global_262145.f_12615, 0))
		{
			func_162(&(Global_2516617[iVar0 /*2*/]));
			func_7(&(Global_2516617[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_944(211);
		if (func_943(iVar0, Global_262145.f_12615, 0))
		{
			func_162(&(Global_2516617[iVar0 /*2*/]));
			func_7(&(Global_2516617[iVar0 /*2*/]), 1, 0);
		}
	}
}

void func_946(int iParam0)
{
	if (!func_28(Global_1630317[unk_0x460153A63B9477BC() /*595*/].f_11.f_150[iParam0 /*3*/], func_947(), 0))
	{
		Global_1630317[unk_0x460153A63B9477BC() /*595*/].f_11.f_150[iParam0 /*3*/] = { func_947() };
	}
	if (!func_28(Global_1630317[unk_0x460153A63B9477BC() /*595*/].f_11.f_125[iParam0 /*3*/], func_947(), 0))
	{
		Global_1630317[unk_0x460153A63B9477BC() /*595*/].f_11.f_125[iParam0 /*3*/] = { func_947() };
	}
}

Vector3 func_947()
{
	struct<3> Var0;
	
	return Var0;
}

void func_948()
{
	struct<20> Var0;
	
	Var0.f_2 = -1;
	Var0.f_3 = -1;
	Var0.f_4 = -1;
	Var0.f_6 = -1;
	Var0.f_7 = -1;
	Var0.f_8 = -1;
	Global_1573907 = { Var0 };
	Global_1573907.f_13 = func_65();
	if (unk_0xCE990E643CD9D0E5(Global_1573344, 3))
	{
		unk_0xD2459066EA58CE43(&Global_1573344, 3);
	}
}

void func_949(bool bParam0)
{
	if (bParam0)
	{
		if (!func_440(unk_0x460153A63B9477BC(), 14))
		{
			func_951(14);
		}
	}
	else if (func_440(unk_0x460153A63B9477BC(), 14))
	{
		func_950(14);
	}
}

void func_950(int iParam0)
{
	unk_0xD2459066EA58CE43(&(Global_1630317[unk_0x460153A63B9477BC() /*595*/].f_11.f_5), iParam0);
}

void func_951(int iParam0)
{
	unk_0xBE20AB8238688965(&(Global_1630317[unk_0x460153A63B9477BC() /*595*/].f_11.f_5), iParam0);
}

void func_952(int iParam0)
{
	if (func_123(unk_0x460153A63B9477BC()))
	{
		if (unk_0x460153A63B9477BC() != iParam0)
		{
			if (Global_1630317[unk_0x460153A63B9477BC() /*595*/].f_11.f_457 != iParam0)
			{
				Global_1630317[unk_0x460153A63B9477BC() /*595*/].f_11.f_457 = iParam0;
				if (iParam0 != func_65())
				{
				}
			}
		}
	}
}

int func_953(int iParam0)
{
	if (func_954(iParam0, 0))
	{
		return Global_1630317[iParam0 /*595*/].f_11.f_32;
	}
	return -1;
}

int func_954(int iParam0, int iParam1)
{
	if (Global_1630317[iParam0 /*595*/].f_11.f_32 != -1 || (iParam1 && Global_1630317[iParam0 /*595*/].f_11.f_33 != -1))
	{
		return 1;
	}
	return 0;
}

void func_955(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	int iVar0;
	
	if (func_598(iParam0, iParam1) && func_972(iParam0, iParam1))
	{
		iVar0 = func_597(iParam0, iParam1);
		func_959(iVar0, bParam2, bParam3);
		func_956(iVar0, 1);
	}
}

void func_956(int iParam0, bool bParam1)
{
	if (!func_958(iParam0))
	{
		return;
	}
	func_581(func_957(iParam0), bParam1, -1, 1);
	Global_1590682[unk_0x460153A63B9477BC() /*883*/].f_274.f_183[iParam0 /*12*/].f_6 = bParam1;
}

int func_957(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 7628;
		
		case 1:
			return 7629;
		
		case 2:
			return 7630;
		
		case 3:
			return 7631;
		
		case 4:
			return 7632;
		
		case 5:
			return 15373;
		
		default:
	}
	return 7628;
}

bool func_958(int iParam0)
{
	return (iParam0 >= 0 && iParam0 < 6);
}

void func_959(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	float fVar6;
	
	bVar1 = false;
	iVar2 = func_787(unk_0x460153A63B9477BC(), iParam0);
	if (!bParam1)
	{
		func_971(iParam0, 0, bParam2);
	}
	if (bParam1)
	{
		iVar0 = Global_2515430[iParam0];
		iVar0 = func_970(iParam0, bParam2);
		if (iVar0 < 0)
		{
			iVar0 = 0;
		}
		if (!bParam2)
		{
			Global_1678139 = -1;
		}
		func_969(iParam0, 0, bParam2);
	}
	else if (func_967(iParam0, bParam2))
	{
		iVar0 = func_966(iVar2, 0);
		iVar3 = func_729(unk_0x460153A63B9477BC(), iVar2);
		iVar4 = func_965(iVar2, bParam2);
		iVar5 = func_966(iVar2, bParam2);
		fVar6 = (to_float(iVar5) / to_float(iVar4));
		iVar0 = (iVar0 - round((to_float(iVar3) * fVar6)));
		if (iVar0 <= 0)
		{
			iVar0 = iVar5;
		}
		if (func_964(iVar2) && func_963(unk_0x460153A63B9477BC(), iVar2) == 2)
		{
			iVar0 = (iVar0 / 2);
			bVar1 = true;
		}
		func_971(iParam0, iVar0, bParam2);
	}
	else
	{
		if (func_962(unk_0x460153A63B9477BC(), iVar2) > 0)
		{
			func_961(iParam0, (Global_1590682[unk_0x460153A63B9477BC() /*883*/].f_274.f_183[iParam0 /*12*/].f_2 - (func_965(iVar2, bParam2) / 2)));
		}
		iVar0 = (func_966(iVar2, bParam2) / func_962(unk_0x460153A63B9477BC(), iVar2) + 1);
	}
	if (!bVar1)
	{
		if (func_964(iVar2) && func_963(unk_0x460153A63B9477BC(), iVar2) == 2)
		{
			iVar0 = (iVar0 / 2);
			bVar1 = true;
		}
	}
	func_960(unk_0x460153A63B9477BC(), iVar2, iVar0, bParam2);
}

void func_960(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	int iVar0;
	
	if (iParam0 == func_65())
	{
		return;
	}
	if (func_588(iParam1))
	{
		iVar0 = 0;
		while (iVar0 <= 5)
		{
			if (Global_1590682[iParam0 /*883*/].f_274.f_183[iVar0 /*12*/] == iParam1)
			{
				if (bParam3)
				{
					Global_1590682[iParam0 /*883*/].f_274.f_257 = iParam2;
				}
				else
				{
					Global_1590682[iParam0 /*883*/].f_274.f_183[iVar0 /*12*/].f_9 = iParam2;
				}
			}
			iVar0++;
		}
	}
}

void func_961(int iParam0, int iParam1)
{
	if (iParam0 != -1 && iParam1 != Global_1590682[unk_0x460153A63B9477BC() /*883*/].f_274.f_183[iParam0 /*12*/].f_2)
	{
		Global_1590682[unk_0x460153A63B9477BC() /*883*/].f_274.f_183[iParam0 /*12*/].f_2 = iParam1;
	}
}

int func_962(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam0 == func_65())
	{
		return 0;
	}
	if (func_588(iParam1))
	{
		iVar0 = 0;
		while (iVar0 <= 5)
		{
			if (Global_1590682[iParam0 /*883*/].f_274.f_183[iVar0 /*12*/] == iParam1)
			{
				return Global_1590682[iParam0 /*883*/].f_274.f_183[iVar0 /*12*/].f_8;
			}
			iVar0++;
		}
	}
	return 0;
}

int func_963(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam0 == func_65())
	{
		return 0;
	}
	if (func_588(iParam1) && func_964(iParam1))
	{
		iVar0 = 0;
		while (iVar0 <= 5)
		{
			if (Global_1590682[iParam0 /*883*/].f_274.f_183[iVar0 /*12*/] == iParam1)
			{
				return Global_1590682[iParam0 /*883*/].f_274.f_183[iVar0 /*12*/].f_11;
			}
			iVar0++;
		}
	}
	return 0;
}

bool func_964(int iParam0)
{
	return func_489(iParam0) == 5;
}

int func_965(int iParam0, bool bParam1)
{
	var uVar0;
	int iVar1;
	
	iVar1 = func_489(iParam0);
	switch (iVar1)
	{
		case 1:
			uVar0 = Global_262145.f_16958;
			if (func_596(unk_0x460153A63B9477BC(), iParam0, 0))
			{
				uVar0 = Global_262145.f_16963;
			}
			break;
		
		case 3:
			uVar0 = Global_262145.f_16957;
			if (func_596(unk_0x460153A63B9477BC(), iParam0, 0))
			{
				uVar0 = Global_262145.f_16962;
			}
			break;
		
		case 4:
			uVar0 = Global_262145.f_16956;
			if (func_596(unk_0x460153A63B9477BC(), iParam0, 0))
			{
				uVar0 = Global_262145.f_16961;
			}
			break;
		
		case 0:
			uVar0 = Global_262145.f_16954;
			if (func_596(unk_0x460153A63B9477BC(), iParam0, 0))
			{
				uVar0 = Global_262145.f_16959;
			}
			break;
		
		case 2:
			uVar0 = Global_262145.f_16955;
			if (func_596(unk_0x460153A63B9477BC(), iParam0, 0))
			{
				uVar0 = Global_262145.f_16960;
			}
			break;
		
		case 5:
			if (bParam1)
			{
				uVar0 = Global_262145.f_21084;
				if (func_596(unk_0x460153A63B9477BC(), iParam0, 0))
				{
					uVar0 = Global_262145.f_21085;
				}
			}
			else
			{
				uVar0 = Global_262145.f_21068;
				if (func_596(unk_0x460153A63B9477BC(), iParam0, 0))
				{
					uVar0 = Global_262145.f_21069;
				}
			}
			break;
	}
	return uVar0;
}

int func_966(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = func_489(iParam0);
	switch (iVar1)
	{
		case 1:
			iVar0 = Global_262145.f_16939;
			if (func_596(unk_0x460153A63B9477BC(), iParam0, 0))
			{
				iVar0 = (iVar0 - Global_262145.f_16948);
			}
			if (func_596(unk_0x460153A63B9477BC(), iParam0, 1))
			{
				iVar0 = (iVar0 - Global_262145.f_16953);
			}
			break;
		
		case 3:
			iVar0 = Global_262145.f_16940;
			if (func_596(unk_0x460153A63B9477BC(), iParam0, 0))
			{
				iVar0 = (iVar0 - Global_262145.f_16947);
			}
			if (func_596(unk_0x460153A63B9477BC(), iParam0, 1))
			{
				iVar0 = (iVar0 - Global_262145.f_16952);
			}
			break;
		
		case 4:
			iVar0 = Global_262145.f_16941;
			if (func_596(unk_0x460153A63B9477BC(), iParam0, 0))
			{
				iVar0 = (iVar0 - Global_262145.f_16946);
			}
			if (func_596(unk_0x460153A63B9477BC(), iParam0, 1))
			{
				iVar0 = (iVar0 - Global_262145.f_16951);
			}
			break;
		
		case 0:
			iVar0 = Global_262145.f_16942;
			if (func_596(unk_0x460153A63B9477BC(), iParam0, 0))
			{
				iVar0 = (iVar0 - Global_262145.f_16944);
			}
			if (func_596(unk_0x460153A63B9477BC(), iParam0, 1))
			{
				iVar0 = (iVar0 - Global_262145.f_16949);
			}
			break;
		
		case 2:
			iVar0 = Global_262145.f_16943;
			if (func_596(unk_0x460153A63B9477BC(), iParam0, 0))
			{
				iVar0 = (iVar0 - Global_262145.f_16945);
			}
			if (func_596(unk_0x460153A63B9477BC(), iParam0, 1))
			{
				iVar0 = (iVar0 - Global_262145.f_16950);
			}
			break;
		
		case 5:
			if (bParam1)
			{
				iVar0 = Global_262145.f_21081;
			}
			else
			{
				iVar0 = Global_262145.f_21065;
			}
			if (func_596(unk_0x460153A63B9477BC(), iParam0, 0))
			{
				if (bParam1)
				{
					iVar0 = (iVar0 - Global_262145.f_21082);
				}
				else
				{
					iVar0 = (iVar0 - Global_262145.f_21066);
				}
			}
			if (func_596(unk_0x460153A63B9477BC(), iParam0, 1))
			{
				if (bParam1)
				{
					iVar0 = (iVar0 - Global_262145.f_21083);
				}
				else
				{
					iVar0 = (iVar0 - Global_262145.f_21067);
				}
			}
			if (func_963(unk_0x460153A63B9477BC(), iParam0) == 2)
			{
				iVar0 *= 2;
			}
			break;
	}
	return iVar0;
}

bool func_967(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		return func_582(15384, -1, -1);
	}
	return func_582(func_968(iParam0), -1, -1);
}

int func_968(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 9416;
		
		case 1:
			return 9417;
		
		case 2:
			return 9418;
		
		case 3:
			return 9419;
		
		case 4:
			return 9420;
		
		case 5:
			return 15372;
		
		default:
	}
	return 9416;
}

void func_969(int iParam0, bool bParam1, bool bParam2)
{
	if (bParam2)
	{
		func_581(15384, bParam1, -1, 1);
		return;
	}
	func_581(func_968(iParam0), bParam1, -1, 1);
}

int func_970(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = Global_2515430[iParam0];
	iVar1 = func_787(unk_0x460153A63B9477BC(), iParam0);
	if (bParam1)
	{
		iVar0 = Global_2515437;
	}
	if (func_964(iVar1))
	{
		if (func_963(unk_0x460153A63B9477BC(), iVar1) == 2)
		{
			iVar0 *= 2;
		}
	}
	return iVar0;
}

void func_971(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		Global_2515437 = iParam1;
		return;
	}
	Global_2515430[iParam0] = iParam1;
}

int func_972(int iParam0, int iParam1)
{
	int iVar0;
	
	if (func_598(iParam0, iParam1))
	{
		iVar0 = func_597(iParam0, iParam1);
		if (Global_1590682[iParam0 /*883*/].f_274.f_183[iVar0 /*12*/].f_4 > 0 && Global_1590682[iParam0 /*883*/].f_274.f_183[iVar0 /*12*/].f_7)
		{
			return 1;
		}
	}
	return 0;
}

void func_973()
{
	unk_0xD2459066EA58CE43(&(Global_2540384.f_1797), 28);
	unk_0xD2459066EA58CE43(&(Global_2540384.f_1797), 29);
	func_974(24);
}

void func_974(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	unk_0xD2459066EA58CE43(&(Global_2540384.f_5188.f_7[iVar0]), iVar1);
}

void func_975()
{
	unk_0xF4F95D084B662764(iLocal_89);
}

void func_976(var uParam0, var uParam1, int iParam2, int iParam3)
{
	char* sVar0;
	struct<14> Var1;
	struct<17> Var2;
	struct<17> Var3;
	struct<16> Var4;
	struct<17> Var5;
	struct<16> Var6;
	struct<18> Var7;
	struct<18> Var8;
	struct<19> Var9;
	struct<18> Var10;
	
	sVar0 = unk_0x6C5C6B207AA78253();
	Var1 = Global_1676128;
	Var1.f_1 = Global_1676128.f_1;
	Var1.f_2 = Global_1676128.f_2;
	Var1.f_3 = Global_1676128.f_3;
	Var1.f_4 = Global_1676128.f_4;
	Var1.f_5 = Global_1676128.f_5;
	Var1.f_6 = Global_1676128.f_6;
	Var1.f_7 = Global_1676128.f_7;
	Var1.f_8 = Global_1676128.f_8;
	Var1.f_9 = Global_1676128.f_9;
	Var1.f_10 = Global_1676128.f_10;
	Var1.f_11 = Global_1676128.f_11;
	Var1.f_12 = Global_1676128.f_12;
	Var1.f_13 = Global_1676128.f_14;
	if (unk_0x25DDB354A40FFCDB())
	{
		if (unk_0xF005CCA4263DF67F(sVar0, "GB_DEATHMATCH"))
		{
			Var2 = { Var1 };
			Var2.f_14 = Global_1676128.f_15;
			Var2.f_15 = Global_1676128.f_16;
			Var2.f_16 = Global_1676128.f_17;
			unk_0x69500A977A13FD12(&Var2);
		}
		else if (unk_0xF005CCA4263DF67F(sVar0, "GB_YACHT_ROB"))
		{
			Var3 = { Var1 };
			Var3.f_14 = Global_1676128.f_15;
			Var3.f_15 = uParam0;
			Var3.f_16 = uParam1;
			unk_0xA8EF022D958E00A3(&Var3);
		}
		else if (unk_0xF005CCA4263DF67F(sVar0, "GB_HUNT_THE_BOSS"))
		{
			Var4 = { Var1 };
			Var4.f_14 = Global_1676128.f_15;
			Var4.f_15 = uParam0;
			unk_0x9A88FA9EC06CB48B(&Var4);
		}
		else if (unk_0xF005CCA4263DF67F(sVar0, "GB_SIGHTSEER"))
		{
			Var5 = { Var1 };
			Var5.f_14 = Global_1676128.f_15;
			Var5.f_15 = uParam0;
			Var5.f_16 = uParam1;
			unk_0x31A22ED50761DDCB(&Var5);
		}
		else if (unk_0xF005CCA4263DF67F(sVar0, "GB_ASSAULT"))
		{
			Var6 = { Var1 };
			Var6.f_14 = Global_1676128.f_15;
			Var6.f_15 = uParam0;
			unk_0x182335A1A947EBD1(&Var6);
		}
		else if (unk_0xF005CCA4263DF67F(sVar0, "GB_BELLYBEAST"))
		{
			Var7 = { Var1 };
			Var7.f_14 = Global_1676128.f_15;
			Var7.f_15 = uParam0;
			Var7.f_16 = uParam1;
			Var7.f_17 = iParam2;
			unk_0xB2EB4073BCD9374D(&Var7);
		}
		else if (unk_0xF005CCA4263DF67F(sVar0, "GB_HEADHUNTER"))
		{
			Var8 = { Var1 };
			Var8.f_14 = uParam0;
			Var8.f_15 = uParam1;
			Var8.f_16 = iParam2;
			Var8.f_17 = Global_1676128.f_15;
			unk_0x1465178C0C0D9DCB(&Var8);
		}
		else if (unk_0xF005CCA4263DF67F(sVar0, "GB_FRAGILE_GOODS"))
		{
			Var9 = { Var1 };
			Var9.f_15 = uParam0;
			Var9.f_16 = uParam1;
			Var9.f_17 = iParam2;
			Var9.f_14 = iParam3;
			Var9.f_18 = Global_1676128.f_15;
			unk_0x05676E24AA669360(&Var9);
		}
		else if (unk_0xF005CCA4263DF67F(sVar0, "GB_AIRFREIGHT"))
		{
			Var10 = { Var1 };
			Var10.f_14 = uParam0;
			Var10.f_15 = uParam1;
			Var10.f_16 = iParam2;
			Var10.f_17 = Global_1676128.f_15;
			unk_0xC7FEE946FDCA7772(&Var10);
		}
	}
	func_977();
}

void func_977()
{
	struct<18> Var0;
	
	Global_1676128 = { Var0 };
}

void func_978(struct<21> Param0)
{
	func_1029(func_1030(Param0), Param0);
	unk_0x9CAB3AADEB4C2F8D(16);
	unk_0x628BF6B677C62F7E(8);
	func_1028(0, -1, 0);
	unk_0x97D2F2E2C92FD519(&Local_82, 872);
	unk_0xBB96A3ECD45D0317(&Local_83, 449);
	if (!func_1027())
	{
		func_931();
	}
	if (unk_0x25DDB354A40FFCDB())
	{
		unk_0x3A396632EB359434(0);
		if (unk_0xAFF96FDC3971E7EA())
		{
		}
		func_1024();
		func_979(0, 0, 0);
		Local_83[unk_0x59E2AD1A8ACEDA31() /*14*/] = 0;
	}
	else
	{
		func_931();
	}
}

void func_979(int iParam0, int iParam1, bool bParam2)
{
	func_1023();
	if (func_409(unk_0x460153A63B9477BC()))
	{
		func_982(1);
	}
	if ((iParam0 != 0 && unk_0x166E920FB00B2DBB(iParam1)) && func_981(iParam1, 1))
	{
		switch (iParam0)
		{
			case 157:
				unk_0xBE20AB8238688965(&Global_1676114, 0);
				break;
			}
	}
	if (!func_476() && !func_190(unk_0x460153A63B9477BC(), 1))
	{
		if (func_147())
		{
			func_111(3);
		}
	}
	func_111(4);
	if (func_493(0))
	{
		Global_1630317[unk_0x460153A63B9477BC() /*595*/].f_11.f_57 = func_495();
	}
	if (func_322(iParam0))
	{
		func_727();
		Global_1676146.f_18 = func_707(func_256());
	}
	else if (func_327(func_953(unk_0x460153A63B9477BC())))
	{
		func_725();
		Global_1676200.f_18 = func_707(func_256());
	}
	if (bParam2)
	{
		if (!func_144())
		{
			func_112(1);
		}
	}
	func_980();
}

void func_980()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		Global_1366969.f_534[iVar0 /*42*/].f_1 = func_65();
		Global_1366969.f_534[iVar0 /*42*/].f_9 = 0;
		iVar0++;
	}
}

int func_981(int iParam0, bool bParam1)
{
	return func_76(unk_0x460153A63B9477BC(), iParam0, bParam1);
}

void func_982(bool bParam0)
{
	int iVar0;
	
	func_974(33);
	func_974(34);
	func_974(35);
	func_974(36);
	func_974(37);
	func_974(38);
	func_974(39);
	func_974(40);
	func_974(43);
	func_974(41);
	func_974(54);
	func_974(42);
	func_974(47);
	func_1022(23);
	func_1022(24);
	func_974(92);
	unk_0xD2459066EA58CE43(&(Global_2540384.f_1797), 2);
	func_1021();
	func_1016();
	func_1011();
	func_1006();
	func_995();
	func_991();
	func_987();
	func_984();
	if (bParam0)
	{
		iVar0 = 0;
		while (iVar0 < 2)
		{
			Global_2540384.f_5188.f_14[iVar0] = 0;
			iVar0++;
		}
	}
	else if (func_983(3))
	{
		func_1022(3);
	}
	else if (func_983(4))
	{
		func_1022(4);
	}
	else if (func_983(5))
	{
		func_1022(5);
	}
	else if (func_983(6))
	{
		func_1022(6);
	}
	else if (func_983(7))
	{
		func_1022(7);
	}
	else if (((((((((((((((((func_983(0) || func_983(1)) || func_983(2)) || func_983(8)) || func_983(9)) || func_983(10)) || func_983(11)) || func_983(12)) || func_983(13)) || func_983(14)) || func_983(15)) || func_983(16)) || func_983(17)) || func_983(18)) || func_983(19)) || func_983(20)) || func_983(21)) || func_983(22))
	{
		func_1022(8);
		func_1022(0);
		func_1022(1);
		func_1022(2);
		func_1022(9);
		func_1022(10);
		func_1022(11);
		func_1022(12);
		func_1022(13);
		func_1022(14);
		func_1022(15);
		func_1022(16);
		func_1022(17);
		func_1022(18);
		func_1022(19);
		func_1022(20);
		func_1022(21);
		func_1022(22);
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < 2)
		{
			Global_2540384.f_5188.f_14[iVar0] = 0;
			iVar0++;
		}
	}
}

bool func_983(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	return unk_0xCE990E643CD9D0E5(Global_2540384.f_5188.f_14[iVar0], iVar1);
}

void func_984()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 15)
	{
		if (func_986(iVar0))
		{
			func_985(iVar0);
		}
		iVar0++;
	}
}

void func_985(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	unk_0xD2459066EA58CE43(&(Global_2540384.f_5188.f_35[iVar0]), iVar1);
}

bool func_986(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	return unk_0xCE990E643CD9D0E5(Global_2540384.f_5188.f_35[iVar0], iVar1);
}

void func_987()
{
	if (func_989())
	{
		func_988(0);
		func_988(1);
		func_988(2);
		func_988(3);
	}
}

void func_988(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	unk_0xD2459066EA58CE43(&(Global_2540384.f_5188.f_33[iVar0]), iVar1);
}

int func_989()
{
	if (((func_990(0) || func_990(1)) || func_990(2)) || func_990(3))
	{
		return 1;
	}
	return 0;
}

bool func_990(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	return unk_0xCE990E643CD9D0E5(Global_2540384.f_5188.f_33[iVar0], iVar1);
}

void func_991()
{
	if (func_993())
	{
		func_992(4);
		func_992(5);
		func_992(6);
		func_992(7);
	}
}

void func_992(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	unk_0xD2459066EA58CE43(&(Global_2540384.f_5188.f_31[iVar0]), iVar1);
}

int func_993()
{
	if (((func_994(4) || func_994(5)) || func_994(6)) || func_994(7))
	{
		return 1;
	}
	return 0;
}

bool func_994(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	return unk_0xCE990E643CD9D0E5(Global_2540384.f_5188.f_31[iVar0], iVar1);
}

void func_995()
{
	int iVar0;
	
	if (func_1005())
	{
		func_1004(8);
		func_1004(9);
		func_1004(10);
		func_1004(12);
		func_1004(13);
		func_1004(14);
		func_1004(19);
		func_1004(20);
		func_1004(21);
		func_1004(22);
		func_1004(23);
		func_1004(24);
		func_1004(25);
		func_1004(26);
		func_1004(15);
		func_1004(16);
		func_1004(17);
		func_1004(18);
		func_1004(35);
		func_1004(45);
		func_1004(46);
		if (func_1003(11))
		{
			func_1004(11);
			iVar0 = func_462(7227, -1, 0);
			unk_0xBE20AB8238688965(&iVar0, 2);
			func_460(7227, iVar0, -1, 1, 0);
		}
	}
	if (func_1003(48))
	{
		if (func_1001(151, 3))
		{
			func_999(151, 3);
		}
		func_1004(48);
	}
	if (func_1003(49))
	{
		if (func_1001(152, 3))
		{
			func_999(152, 3);
		}
		func_1004(49);
	}
	if (func_1003(50))
	{
		if (func_1001(153, 3))
		{
			func_999(153, 3);
		}
		func_1004(50);
	}
	if (func_1003(51))
	{
		if (func_1001(func_996(), 3))
		{
			func_999(func_996(), 3);
		}
		func_1004(51);
	}
}

int func_996()
{
	if (func_998())
	{
		func_997(154, Global_19681, 1);
	}
	return 154;
}

void func_997(int iParam0, int iParam1, int iParam2)
{
	if (iParam1 < 0 || iParam1 > 4)
	{
		return;
	}
	Global_1848[iParam0 /*29*/].f_24[iParam1] = iParam2;
	if (iParam0 < 162)
	{
		Global_111858.f_28046[iParam0 /*29*/].f_24[iParam1] = iParam2;
	}
}

int func_998()
{
	int iVar0;
	
	iVar0 = func_66(unk_0x460153A63B9477BC());
	if (((iVar0 != unk_0x460153A63B9477BC() && iVar0 != func_65()) && unk_0x166E920FB00B2DBB(iVar0)) && iVar0 != -1)
	{
		return 1;
	}
	return 0;
}

void func_999(int iParam0, int iParam1)
{
	int iVar0;
	
	if (Global_117[iParam0 /*10*/].f_8 != 154)
	{
		if (iParam1 > 3)
		{
		}
		else
		{
			iVar0 = iParam1;
			func_1000(iParam0, iVar0, 0);
			func_997(iParam0, iVar0, 0);
		}
	}
}

void func_1000(int iParam0, int iParam1, int iParam2)
{
	if (iParam1 < 0 || iParam1 > 4)
	{
		return;
	}
	Global_1848[iParam0 /*29*/].f_12[iParam1] = iParam2;
	if (iParam0 < 162)
	{
		Global_111858.f_28046[iParam0 /*29*/].f_12[iParam1] = iParam2;
	}
}

int func_1001(int iParam0, int iParam1)
{
	if (func_1002(iParam0, iParam1) == 1)
	{
		return 1;
	}
	return 0;
}

int func_1002(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 4)
	{
		return 0;
	}
	return Global_1848[iParam0 /*29*/].f_12[iParam1];
}

bool func_1003(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	return unk_0xCE990E643CD9D0E5(Global_2540384.f_5188.f_26[iVar0], iVar1);
}

void func_1004(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	unk_0xD2459066EA58CE43(&(Global_2540384.f_5188.f_26[iVar0]), iVar1);
}

int func_1005()
{
	if (((((((((((((((((((((func_1003(8) || func_1003(9)) || func_1003(10)) || func_1003(12)) || func_1003(11)) || func_1003(13)) || func_1003(14)) || func_1003(19)) || func_1003(20)) || func_1003(21)) || func_1003(22)) || func_1003(23)) || func_1003(24)) || func_1003(25)) || func_1003(26)) || func_1003(15)) || func_1003(16)) || func_1003(17)) || func_1003(18)) || func_1003(35)) || func_1003(45)) || func_1003(46))
	{
		return 1;
	}
	return 0;
}

void func_1006()
{
	if (func_1010())
	{
		func_1009(0);
		func_1009(1);
		func_1009(2);
		func_1009(3);
		func_1009(4);
		func_1009(5);
		if (func_1008(32))
		{
			if (func_1001(func_1007(), 3))
			{
				func_999(func_1007(), 3);
			}
			func_1009(32);
		}
	}
}

int func_1007()
{
	if (func_998())
	{
		func_997(12, Global_19681, 1);
	}
	return 12;
}

bool func_1008(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	return unk_0xCE990E643CD9D0E5(Global_2540384.f_5188.f_23[iVar0], iVar1);
}

void func_1009(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	unk_0xD2459066EA58CE43(&(Global_2540384.f_5188.f_23[iVar0]), iVar1);
}

int func_1010()
{
	if ((((func_1008(1) || func_1008(0)) || func_1008(2)) || func_1008(4)) || func_1008(5))
	{
		return 1;
	}
	return 0;
}

void func_1011()
{
	if (func_1015())
	{
		func_1014(0);
		func_1014(1);
		func_1014(2);
		func_1014(3);
		func_1014(4);
		func_1014(5);
		func_1014(6);
		func_1014(7);
		if (func_1013(8))
		{
			func_1014(8);
		}
		if (func_1013(15))
		{
			if (func_1001(func_1012(), 3))
			{
				func_999(func_1012(), 3);
			}
			func_1014(15);
		}
	}
}

int func_1012()
{
	if (func_998())
	{
		func_997(20, Global_19681, 1);
	}
	return 20;
}

bool func_1013(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	return unk_0xCE990E643CD9D0E5(Global_2540384.f_5188.f_21[iVar0], iVar1);
}

void func_1014(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	unk_0xD2459066EA58CE43(&(Global_2540384.f_5188.f_21[iVar0]), iVar1);
}

int func_1015()
{
	if ((((((((func_1013(0) || func_1013(1)) || func_1013(2)) || func_1013(3)) || func_1013(4)) || func_1013(5)) || func_1013(6)) || func_1013(7)) || func_1013(8))
	{
		return 1;
	}
	return 0;
}

void func_1016()
{
	if (func_1020())
	{
		func_1019(0);
		func_1019(1);
		func_1019(2);
		func_1019(3);
		func_1019(4);
		func_1019(5);
		func_1019(6);
		func_1019(7);
		func_1019(8);
		func_1019(9);
		func_1019(10);
		func_1019(11);
		func_1019(12);
		if (func_1018(13))
		{
			if (func_1001(func_1017(), 3))
			{
				func_999(func_1017(), 3);
			}
			func_1019(13);
		}
	}
}

int func_1017()
{
	if (func_998())
	{
		func_997(76, Global_19681, 1);
	}
	return 76;
}

bool func_1018(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	return unk_0xCE990E643CD9D0E5(Global_2540384.f_5188.f_19[iVar0], iVar1);
}

void func_1019(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	unk_0xD2459066EA58CE43(&(Global_2540384.f_5188.f_19[iVar0]), iVar1);
}

int func_1020()
{
	if ((((((((((((func_1018(0) || func_1018(1)) || func_1018(2)) || func_1018(3)) || func_1018(4)) || func_1018(5)) || func_1018(6)) || func_1018(7)) || func_1018(8)) || func_1018(9)) || func_1018(10)) || func_1018(11)) || func_1018(12))
	{
		return 1;
	}
	return 0;
}

void func_1021()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 1)
	{
		Global_2540384.f_5188.f_17[iVar0] = 0;
		iVar0++;
	}
}

void func_1022(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	unk_0xD2459066EA58CE43(&(Global_2540384.f_5188.f_14[iVar0]), iVar1);
}

void func_1023()
{
	struct<14> Var0;
	
	Global_1676128 = { Var0 };
	Global_1676128.f_14 = 0;
	Global_1676128.f_15 = 0;
}

void func_1024()
{
	int iVar0;
	int iVar1;
	
	unk_0xDE8F8016287F771F("relHeadHunterPlayer", &iLocal_89);
	iVar0 = unk_0x991DEF33C181865B(unk_0x86FB3A0D4870FE62(unk_0x9B0761B4C3EB8BC7()), joaat("COP"));
	iVar1 = 0;
	while (iVar1 < 32)
	{
		unk_0xEFBCE8F8316F89EA(5, Global_1574973[iVar1], iLocal_89);
		unk_0xEFBCE8F8316F89EA(5, iLocal_89, Global_1574973[iVar1]);
		unk_0xEFBCE8F8316F89EA(1, Global_1574973[iVar1], Global_1575018);
		unk_0xEFBCE8F8316F89EA(1, Global_1575018, Global_1574973[iVar1]);
		unk_0xEFBCE8F8316F89EA(iVar0, iLocal_89, joaat("COP"));
		unk_0xEFBCE8F8316F89EA(iVar0, joaat("COP"), iLocal_89);
		unk_0xEFBCE8F8316F89EA(1, iLocal_89, Global_1575021[5]);
		unk_0xEFBCE8F8316F89EA(1, Global_1575021[5], iLocal_89);
		unk_0xEFBCE8F8316F89EA(1, iLocal_89, Global_1575006);
		unk_0xEFBCE8F8316F89EA(1, Global_1575006, iLocal_89);
		iVar1++;
	}
	unk_0xEFBCE8F8316F89EA(5, iLocal_89, Global_1575018);
	unk_0xEFBCE8F8316F89EA(5, Global_1575018, iLocal_89);
	unk_0xEFBCE8F8316F89EA(1, 2017343592, Global_1575018);
	unk_0xEFBCE8F8316F89EA(5, 2017343592, iLocal_89);
	func_1026(1, &Global_1575018);
	func_1025(&Global_1575018);
	func_1025(&iLocal_89);
}

void func_1025(int iParam0)
{
	unk_0xEFBCE8F8316F89EA(1, -1865950624, *iParam0);
	unk_0xEFBCE8F8316F89EA(1, *iParam0, -1865950624);
	unk_0xEFBCE8F8316F89EA(1, 296331235, *iParam0);
	unk_0xEFBCE8F8316F89EA(1, *iParam0, 296331235);
	unk_0xEFBCE8F8316F89EA(1, 1166638144, *iParam0);
	unk_0xEFBCE8F8316F89EA(1, *iParam0, 1166638144);
	unk_0xEFBCE8F8316F89EA(1, 2037579709, *iParam0);
	unk_0xEFBCE8F8316F89EA(1, *iParam0, 2037579709);
	unk_0xEFBCE8F8316F89EA(1, 2017343592, *iParam0);
	unk_0xEFBCE8F8316F89EA(1, *iParam0, 2017343592);
	unk_0xEFBCE8F8316F89EA(1, -1821475077, *iParam0);
	unk_0xEFBCE8F8316F89EA(1, *iParam0, -1821475077);
	unk_0xEFBCE8F8316F89EA(1, 1782292358, *iParam0);
	unk_0xEFBCE8F8316F89EA(1, *iParam0, 1782292358);
	unk_0xEFBCE8F8316F89EA(1, -1033021910, *iParam0);
	unk_0xEFBCE8F8316F89EA(1, *iParam0, -1033021910);
	unk_0xEFBCE8F8316F89EA(1, -1285976420, *iParam0);
	unk_0xEFBCE8F8316F89EA(1, *iParam0, -1285976420);
}

void func_1026(int iParam0, var uParam1)
{
	unk_0xEFBCE8F8316F89EA(iParam0, joaat("COP"), *uParam1);
	unk_0xEFBCE8F8316F89EA(iParam0, *uParam1, joaat("COP"));
	unk_0xEFBCE8F8316F89EA(iParam0, -472287501, *uParam1);
	unk_0xEFBCE8F8316F89EA(iParam0, *uParam1, -472287501);
	unk_0xEFBCE8F8316F89EA(iParam0, -183807561, *uParam1);
	unk_0xEFBCE8F8316F89EA(iParam0, *uParam1, -183807561);
}

int func_1027()
{
	int iVar0;
	
	iVar0 = 0;
	while (true)
	{
		iVar0++;
		if (!unk_0x25DDB354A40FFCDB())
		{
			return 0;
		}
		if (unk_0x331F7CFA5515B989())
		{
			return 1;
		}
		if (func_926())
		{
			return 0;
		}
		if (func_924(157))
		{
			return 0;
		}
		if (iVar0 >= 3600)
		{
			return 0;
		}
		wait(0);
	}
	return 0;
}

int func_1028(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = unk_0x361B374A50D875B4();
	while (iVar0 != 2)
	{
		if (((iVar0 == 3 || iVar0 == 4) || iVar0 == 5) || iVar0 == 6)
		{
			if (!bParam2)
			{
				func_932();
			}
			else
			{
				return 0;
			}
		}
		if (!func_877())
		{
			if (iParam0 == 0)
			{
				if (!unk_0x25DDB354A40FFCDB())
				{
					if (!bParam2)
					{
						func_932();
					}
					else
					{
						return 0;
					}
				}
				if (func_926())
				{
					if (!bParam2)
					{
						func_932();
					}
					else
					{
						return 0;
					}
				}
				if (func_924(157))
				{
					if (!bParam2)
					{
						func_932();
					}
					else
					{
						return 0;
					}
				}
			}
			else if (!unk_0x3BF0BB5923982C0D())
			{
				if (!bParam2)
				{
					func_932();
				}
				else
				{
					return 0;
				}
			}
		}
		wait(0);
		iVar0 = unk_0x361B374A50D875B4();
	}
	if (iParam1 > -1)
	{
		Global_1312519 = iVar0;
	}
	if (iParam0 == 0)
	{
		if (!unk_0x25DDB354A40FFCDB())
		{
			if (!bParam2)
			{
				func_932();
			}
			else
			{
				return 0;
			}
		}
	}
	else if (!unk_0x3BF0BB5923982C0D())
	{
		if (!bParam2)
		{
			func_932();
		}
		else
		{
			return 0;
		}
	}
	return 1;
}

void func_1029(int iParam0, struct<17> Param1, var uParam2, var uParam3, var uParam4, var uParam5)
{
	if (!unk_0x25DDB354A40FFCDB())
	{
		func_932();
	}
	unk_0xA88557896B79E30D(iParam0, 0, Param1.f_16);
}

int func_1030(int iParam0)
{
	switch (iParam0)
	{
		case 3:
			return 2;
		
		case 1:
			return 32;
		
		case 32:
			return 32;
		
		case 33:
			return 32;
		
		case 34:
			return 32;
		
		case 35:
			return 32;
		
		case 36:
			return 32;
		
		case 37:
			return 32;
		
		case 38:
			return 32;
		
		case 39:
			return 32;
		
		case 40:
			return 32;
		
		case 41:
			return 32;
		
		case 42:
			return 32;
		
		case 43:
			return 32;
		
		case 44:
			return 32;
		
		case 45:
			return 32;
		
		case 46:
			return 32;
		
		case 47:
			return 32;
		
		case 48:
			return 32;
		
		case 49:
			return 32;
		
		case 50:
			return 4;
		
		case 51:
			return 32;
		
		case 52:
			return 32;
		
		case 53:
			return 32;
		
		case 54:
			return 32;
		
		case 55:
			return 32;
		
		case 56:
			return 32;
		
		case 57:
			return 32;
		
		case 58:
			return 32;
		
		case 59:
			return 32;
		
		case 60:
			return 32;
		
		case 61:
			return 32;
		
		case 62:
			return 32;
		
		case 63:
			return 32;
		
		case 64:
			return 4;
		
		case 65:
			return 32;
		
		case 66:
			return 4;
		
		case 67:
			return 4;
		
		case 68:
			return 32;
		
		case 69:
			return 32;
		
		case 70:
			return 4;
		
		case 71:
			return 32;
		
		case 72:
			return 32;
		
		case 73:
		case 74:
			return 4;
		
		case 75:
			return 32;
		
		case 76:
			return 32;
		
		case 77:
			return 32;
		
		case 78:
			return 32;
		
		case joaat("MPSV_LP0_31"):
			return 32;
		
		case 80:
			return 32;
		
		case 81:
			return 32;
		
		case 82:
			return 32;
		
		case 84:
			return 32;
		
		case 83:
			return 32;
		
		case 85:
			return 32;
		
		case 86:
			return 8;
		
		case 87:
			return 32;
		
		case 88:
			return 32;
		
		case 89:
			return 32;
		
		case 90:
			return 32;
		
		case 91:
			return 8;
		
		case 92:
			return 32;
		
		case 93:
			return 8;
		
		case 94:
			return 8;
		
		case 102:
			return 8;
		
		case 95:
			return 8;
		
		case 96:
			return 32;
		
		case 97:
			return 32;
		
		case 98:
			return 32;
		
		case 99:
			return 8;
		
		case 100:
			return 32;
		
		case 101:
			return 32;
		
		case 103:
			return 32;
		
		case 104:
			return 32;
		
		case 105:
			return 32;
		
		case 106:
			return 8;
		
		case 107:
			return 8;
		
		case 108:
			return 8;
		
		case 109:
			return 8;
		
		case 110:
			return 8;
		
		case 111:
			return 8;
		
		case 112:
			return 8;
		
		case 113:
			return 8;
		
		case 114:
			return 32;
		
		case 115:
			return 8;
		
		case 116:
			return 8;
		
		case 117:
			return 8;
		
		case 118:
			return 8;
		
		case 119:
			return 32;
		
		case 120:
			return 32;
		
		case 121:
			return 32;
		
		case 122:
			return 32;
		
		case 123:
			return 8;
		
		case 124:
			return 8;
		
		case 125:
			return 8;
		
		case 126:
			return 8;
		
		case 127:
			return 32;
		
		case 128:
			return 32;
		
		case 129:
			return 32;
		
		case 130:
			return 8;
		
		case 131:
			return 8;
		
		case 132:
			return 32;
		
		case 133:
			return 32;
		
		case 12:
			return 32;
		
		case 4:
			return 16;
		
		case 13:
			return 32;
		
		case 5:
			return 16;
		
		case 6:
			return 2;
		
		case 8:
			return 2;
		
		case 9:
			return 2;
		
		case 7:
			return 16;
		
		case 10:
			return 2;
		
		case 11:
			return 4;
		
		case 15:
			return 32;
		
		case 16:
			return 32;
		
		case 27:
			return 2;
		
		case 25:
			return 2;
		
		case 26:
			return 2;
		
		case 18:
			return 32;
		
		case 28:
			return 32;
		
		case 29:
			return 2;
		
		case 30:
			return 32;
		
		case 31:
			return 32;
		
		case 17:
			return 2;
		
		case 134:
			return 32;
		
		case 135:
			return 32;
		
		case 19:
			return 32;
		
		case 22:
			return 32;
		
		case 23:
			return 32;
		
		case 24:
			return 32;
		
		case 20:
			return 2;
		
		case 0:
			return 0;
		
		case 21:
			return 32;
		
		case 146:
			return 32;
		
		case 147:
			return 32;
		
		case 136:
			return 32;
		
		case 137:
			return 32;
		
		case 141:
			return 32;
		
		case 139:
			return 32;
		
		case 140:
			return 32;
		
		case 144:
			return 32;
		
		case 145:
			return 32;
		
		case 142:
			return 32;
		
		case 143:
			return 32;
		
		case 148:
			return 32;
		
		case 149:
			return 32;
		
		case 150:
			return 32;
		
		case 151:
			return 32;
		
		case 152:
			return 2;
		
		case 157:
			return 1;
		
		case 153:
			return 2;
		
		case 154:
			return 4;
		
		case 155:
			return 2;
		
		case 156:
			return 2;
		
		case 138:
			return 1;
		
		case 158:
			return 2;
		
		case 159:
		case 160:
		case 161:
		case 162:
		case 163:
		case 164:
			return 0;
		
		case 180:
			return 1;
		
		case 165:
			return 4;
		
		case 168:
			return 4;
		
		case 169:
			return 1;
		
		case 170:
			return 1;
		
		case 176:
			return 1;
		
		case 172:
			return 2;
		
		case 177:
			return 1;
		
		case 173:
			return 1;
		
		case 171:
			return 2;
		
		case 174:
			return 8;
		
		case 175:
			return 8;
		
		case 178:
			return 1;
		
		case 179:
			return 2;
		
		case 166:
			return 16;
		
		case 167:
			return 32;
		
		default:
	}
	return 0;
}

int func_1031(int iParam0, bool bParam1, bool bParam2)
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

