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
	int iLocal_12 = 0;
	var uLocal_13 = 0;
	var uLocal_14 = 0;
	float fLocal_15 = 0f;
	var uLocal_16 = 0;
	var uLocal_17 = 0;
	int iLocal_18 = 0;
	int iLocal_19 = 0;
	var uLocal_20 = 0;
	var uLocal_21 = 0;
	char* sLocal_22 = NULL;
	float fLocal_23 = 0f;
	var uLocal_24 = 0;
	var uLocal_25 = 0;
	var uLocal_26 = 0;
	float fLocal_27 = 0f;
	float fLocal_28 = 0f;
	var uLocal_29 = 0;
	var uLocal_30 = 0;
	var uLocal_31 = 0;
	float fLocal_32 = 0f;
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
	struct<3> Local_44 = { 0, 0, 0 } ;
	int iLocal_45 = 0;
	struct<3> Local_46 = { 0, 0, 0 } ;
	float fLocal_47 = 0f;
	int iLocal_48 = 0;
	int iLocal_49 = 0;
	int iLocal_50 = 0;
	int iLocal_51 = 0;
	int iLocal_52 = 0;
	int iLocal_53 = 0;
	int iLocal_54 = 0;
	int iLocal_55 = 0;
	int iLocal_56 = 0;
	int iLocal_57 = 0;
	var uLocal_58 = 0;
	int iLocal_59 = 0;
	int iLocal_60 = 0;
	int iLocal_61 = 0;
	int iLocal_62 = 0;
	int iLocal_63 = 0;
	int iLocal_64 = 0;
	int iLocal_65 = 0;
	struct<3> Local_66 = { 0, 0, 0 } ;
	struct<3> Local_67 = { 0, 0, 0 } ;
	bool bLocal_68 = 0;
	bool bLocal_69 = 0;
	int iLocal_70 = 0;
	int iLocal_71 = 0;
	int iLocal_72 = 0;
	int iLocal_73 = 0;
	int iLocal_74 = 0;
	int iLocal_75 = 0;
	int iLocal_76 = 0;
	int iLocal_77 = 0;
	int iLocal_78 = 0;
	bool bLocal_79 = 0;
	var uLocal_80 = 0;
	var uLocal_81 = 0;
	char* sLocal_82 = NULL;
	char* sLocal_83 = NULL;
	char* sLocal_84 = NULL;
	float fLocal_85 = 0f;
	float fLocal_86 = 0f;
	float fLocal_87 = 0f;
	float fLocal_88 = 0f;
	int iLocal_89 = 0;
	bool bLocal_90 = 0;
	int iLocal_91 = 0;
	bool bLocal_92 = 0;
	struct<10> Local_93[16];
	var uLocal_94 = 0;
	var uLocal_95 = 0;
	var uLocal_96 = 0;
	var uLocal_97 = 0;
	int iLocal_98 = 0;
	char* sLocal_99 = NULL;
	struct<18> Local_100 = { 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5 } ;
	var uLocal_101 = 0;
	var uLocal_102 = 0;
	var uLocal_103 = 0;
	var uLocal_104 = 0;
	var uLocal_105 = 0;
#endregion

void __EntryFunction__()
{
	iLocal_3 = 1;
	iLocal_4 = 134;
	iLocal_5 = 134;
	iLocal_6 = 1;
	iLocal_7 = 1;
	iLocal_8 = 1;
	iLocal_9 = 134;
	iLocal_10 = 1;
	iLocal_11 = 12;
	iLocal_12 = 12;
	fLocal_15 = 0.001f;
	iLocal_18 = -1;
	iLocal_19 = 3;
	sLocal_22 = "NULL";
	fLocal_23 = 0f;
	fLocal_27 = -0.0375f;
	fLocal_28 = 0.17f;
	fLocal_32 = 80f;
	fLocal_33 = 140f;
	fLocal_34 = 180f;
	iLocal_40 = 1;
	iLocal_41 = 65;
	iLocal_42 = 49;
	iLocal_43 = 64;
	iLocal_59 = 8000;
	iLocal_64 = -1;
	bLocal_79 = true;
	sLocal_84 = "NULL";
	fLocal_85 = -120f;
	fLocal_86 = 120f;
	fLocal_87 = 40f;
	fLocal_88 = 90f;
	bLocal_90 = true;
	sLocal_99 = "RANDOM@RESCUE_HOSTAGE";
	Local_46 = { ScriptParam_100.f_1[0 /*3*/] };
	fLocal_47 = ScriptParam_100.f_17[0];
	if (unk_0xED06FD5709A59F02(11))
	{
		func_163();
	}
	if (Global_38996[0] == 1)
	{
		unk_0xD39E529EBE5DB04F();
	}
	if (func_121(Local_46, -1, 0, 0, 0))
	{
		func_118(-1);
	}
	else
	{
		unk_0xD39E529EBE5DB04F();
	}
	func_117();
	func_116();
	while (true)
	{
		wait(0);
		func_115();
		if (unk_0x5A228A6A51E757C8(unk_0x460153A63B9477BC()))
		{
			unk_0xDC54E6DC6372260F(unk_0x460153A63B9477BC());
		}
		if (unk_0x1116855A2A7A342C())
		{
			switch (iLocal_45)
			{
				case 0:
					if (func_112())
					{
						iLocal_91 = unk_0x578C4EF320340AF7();
						iLocal_45 = 1;
					}
					else if (func_111())
					{
						func_163();
					}
					break;
				
				case 1:
					if (iLocal_60 == 0)
					{
						iLocal_60 = unk_0x077EB65374D89330(101, -104.982f, 6408.737f, 30.4905f, 180000f);
					}
					func_110();
					if (!unk_0x5AEB5DDFFAD43CA5(iLocal_49))
					{
						func_109();
					}
					else if (!unk_0x5AEB5DDFFAD43CA5(iLocal_50))
					{
						func_105();
						func_104();
					}
					else
					{
						func_163();
					}
					if (bLocal_68)
					{
						func_102();
					}
					if (!unk_0x5AEB5DDFFAD43CA5(iLocal_48))
					{
						if (!func_101())
						{
							if (func_89())
							{
								func_163();
							}
							func_74();
						}
						else if (!bLocal_68)
						{
							func_57();
						}
					}
					else
					{
						if (Local_93[1 /*10*/].f_7)
						{
							if (unk_0x8F678487EEBD8CE4(iLocal_53))
							{
								unk_0x93370FA10F15BE44(&iLocal_53);
							}
							if (unk_0x8F678487EEBD8CE4(iLocal_54))
							{
								unk_0x93370FA10F15BE44(&iLocal_54);
							}
							func_56(&Local_93, 1);
							func_54();
						}
						if (!unk_0x5AEB5DDFFAD43CA5(iLocal_49))
						{
							if (bLocal_68)
							{
								if (unk_0xFC5D6FB6EECB392F(iLocal_63))
								{
									if (unk_0x369E69441C066912(iLocal_63) == 1f)
									{
										if (!unk_0x5AEB5DDFFAD43CA5(iLocal_49))
										{
											unk_0x4478D8ED4673EF14(iLocal_49, 1);
											unk_0x697DA7132EE43ABC(iLocal_49, 0, 0);
										}
									}
								}
							}
							else
							{
								if (func_53())
								{
									iLocal_45 = 3;
								}
								if (!unk_0x5AEB5DDFFAD43CA5(iLocal_50))
								{
								}
							}
						}
					}
					break;
				
				case 2:
					iLocal_52 = unk_0x84F0027A508D7D7D(unk_0x3E4D3CCC220BDFB1(unk_0x9B0761B4C3EB8BC7(), true), 35f, 0, 101383);
					if (unk_0x80FF6C016CDB0FAF(iLocal_52, 0))
					{
						if (!bLocal_92)
						{
							unk_0x26152FD46A297C2F(unk_0x460153A63B9477BC(), 2, 0);
							unk_0x4B86C627B5EABFBF(unk_0x460153A63B9477BC(), 0);
						}
						func_163();
					}
					if (!iLocal_78)
					{
						if (unk_0x74F9877F714E4BC1(7, Local_46, 2, 0f, &uLocal_80, 0, 0))
						{
							iLocal_78 = 1;
						}
					}
					break;
				
				case 3:
					if (iLocal_76)
					{
						if (timera() > 5000)
						{
							if (!unk_0x5AEB5DDFFAD43CA5(iLocal_49))
							{
								unk_0xCBA6B2B569DCAFD8(iLocal_49, true);
								func_28();
							}
							func_163();
						}
					}
					else
					{
						if (func_53())
						{
							if (!bLocal_69)
							{
								if (bLocal_79)
								{
									if (func_5(&Local_93, "RERHOAU", "RERHO_THANK", 4, iLocal_98, 0, 0))
									{
										bLocal_69 = true;
									}
								}
								else if (func_5(&Local_93, "RERHOAU", "RERHO_NOGUN", 4, iLocal_98, 0, 0))
								{
									bLocal_69 = true;
								}
							}
						}
						func_3();
						if (!unk_0x5AEB5DDFFAD43CA5(iLocal_49))
						{
							if (unk_0x578C4EF320340AF7() > iLocal_62 + 100)
							{
								func_1(iLocal_49, "WHIMPER", "WAVELOAD_PAIN_FEMALE", 24);
								iLocal_62 = unk_0x578C4EF320340AF7();
							}
						}
						if (bLocal_69)
						{
							if (!iLocal_77)
							{
								if (!unk_0x5AEB5DDFFAD43CA5(iLocal_50))
								{
									if (func_5(&Local_93, "RERHOAU", "RERHO_CONS", 4, iLocal_98, 0, 0))
									{
										iLocal_77 = 1;
									}
								}
							}
						}
						iLocal_52 = unk_0x84F0027A508D7D7D(Local_46, 5f, joaat("ambulance"), 0);
						if (unk_0x80FF6C016CDB0FAF(iLocal_52, 0))
						{
							settimera(0);
							iLocal_76 = 1;
						}
						iLocal_51 = unk_0x433E7C216B9F29E0(Local_46, 1.5f, 1.5f, 1.5f, -1);
						if (!unk_0x5AEB5DDFFAD43CA5(iLocal_51))
						{
							settimera(5000);
							iLocal_76 = 1;
						}
						if (!iLocal_78 && iLocal_77)
						{
							if (unk_0x74F9877F714E4BC1(5, Local_46, 2, 0f, &uLocal_81, 0, 0))
							{
								iLocal_78 = 1;
							}
						}
						if (vdist2(unk_0x3E4D3CCC220BDFB1(unk_0x9B0761B4C3EB8BC7(), true), Local_46) > 5625f && !unk_0x9A70B1BD2A5BA09C(Local_46, 10f))
						{
							func_28();
						}
					}
					break;
			}
		}
		else if (iLocal_45 == 3)
		{
			func_28();
		}
		else
		{
			func_163();
		}
	}
}

void func_1(int iParam0, char* sParam1, char* sParam2, int iParam3)
{
	unk_0x1A454EFB8BC73430(iParam0, sParam1, sParam2, func_2(iParam3), 0);
}

int func_2(int iParam0)
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

void func_3()
{
	if (func_4())
	{
		if (!unk_0x5AEB5DDFFAD43CA5(iLocal_49))
		{
			unk_0x4E65320BC9AD521C(iLocal_49, false);
			unk_0xD66FADEF7D42D49B(iLocal_49, Local_46, 50f, -1, 0, 0);
			unk_0xCBA6B2B569DCAFD8(iLocal_49, true);
			unk_0x2481907DEE6B85EA(&iLocal_49);
			func_54();
		}
		if (!unk_0x5AEB5DDFFAD43CA5(iLocal_50))
		{
			unk_0x4E65320BC9AD521C(iLocal_50, false);
			unk_0xD66FADEF7D42D49B(iLocal_50, Local_46, 50f, -1, 0, 0);
			unk_0xCBA6B2B569DCAFD8(iLocal_50, true);
			unk_0x2481907DEE6B85EA(&iLocal_50);
			func_54();
		}
	}
	if (!unk_0x5AEB5DDFFAD43CA5(iLocal_49))
	{
		if (unk_0xCDF860E56BBCC6B4(iLocal_49, unk_0x9B0761B4C3EB8BC7(), 1))
		{
			if (unk_0xCED6B5226244381C(iLocal_49))
			{
				unk_0x697DA7132EE43ABC(iLocal_49, 0, 0);
			}
		}
		else if (unk_0xCED6B5226244381C(iLocal_49))
		{
			unk_0x4E65320BC9AD521C(iLocal_49, false);
			unk_0xD66FADEF7D42D49B(iLocal_49, Local_46, 50f, -1, 0, 0);
			unk_0xCBA6B2B569DCAFD8(iLocal_49, true);
			unk_0x2481907DEE6B85EA(&iLocal_49);
			func_54();
			if (!unk_0x5AEB5DDFFAD43CA5(iLocal_50))
			{
				unk_0x4E65320BC9AD521C(iLocal_50, false);
				unk_0xD66FADEF7D42D49B(iLocal_50, Local_46, 50f, -1, 0, 0);
				unk_0xCBA6B2B569DCAFD8(iLocal_50, true);
				unk_0x2481907DEE6B85EA(&iLocal_50);
				func_54();
			}
		}
	}
	else if (!unk_0x5AEB5DDFFAD43CA5(iLocal_50))
	{
		unk_0x4E65320BC9AD521C(iLocal_50, false);
		unk_0xD66FADEF7D42D49B(iLocal_50, Local_46, 50f, -1, 0, 0);
		unk_0xCBA6B2B569DCAFD8(iLocal_50, true);
		unk_0x2481907DEE6B85EA(&iLocal_50);
		func_54();
	}
	if (!unk_0x5AEB5DDFFAD43CA5(iLocal_50))
	{
		if (unk_0xCDF860E56BBCC6B4(iLocal_50, unk_0x9B0761B4C3EB8BC7(), 1))
		{
			if (unk_0xCED6B5226244381C(iLocal_50))
			{
				unk_0x697DA7132EE43ABC(iLocal_50, 0, 0);
			}
		}
		else if (unk_0xCED6B5226244381C(iLocal_50))
		{
			unk_0x4E65320BC9AD521C(iLocal_50, false);
			unk_0xD66FADEF7D42D49B(iLocal_50, Local_46, 50f, -1, 0, 0);
			unk_0xCBA6B2B569DCAFD8(iLocal_50, true);
			unk_0x2481907DEE6B85EA(&iLocal_50);
			func_54();
			if (!unk_0x5AEB5DDFFAD43CA5(iLocal_49))
			{
				unk_0x4E65320BC9AD521C(iLocal_49, false);
				unk_0xD66FADEF7D42D49B(iLocal_49, Local_46, 50f, -1, 0, 0);
				unk_0xCBA6B2B569DCAFD8(iLocal_49, true);
				unk_0x2481907DEE6B85EA(&iLocal_49);
				func_54();
			}
		}
	}
	else if (!unk_0x5AEB5DDFFAD43CA5(iLocal_49))
	{
		unk_0x4E65320BC9AD521C(iLocal_49, false);
		unk_0xD66FADEF7D42D49B(iLocal_49, Local_46, 50f, -1, 0, 0);
		unk_0xCBA6B2B569DCAFD8(iLocal_49, true);
		unk_0x2481907DEE6B85EA(&iLocal_49);
		func_54();
	}
}

bool func_4()
{
	bool bVar0;
	struct<3> Var1;
	struct<3> Var2;
	
	Var1 = { 15f, 15f, 10f };
	Var2 = { -15f, -15f, -10f };
	if (!unk_0x5AEB5DDFFAD43CA5(iLocal_49))
	{
		if (unk_0xC7EB33BFDB436C87(unk_0x1D5C49FCA9BC5B02(iLocal_49, 31086, 0f, 0f, 0f), 15f, 1))
		{
			bVar0 = true;
		}
		Var1 = { Var1 + unk_0x1D5C49FCA9BC5B02(iLocal_49, 31086, 0f, 0f, 0f) };
		Var2 = { Var2 + unk_0x1D5C49FCA9BC5B02(iLocal_49, 31086, 0f, 0f, 0f) };
		if ((unk_0x261234EE652E3D8D(Var2, Var1, joaat("weapon_smokegrenade"), 1) || unk_0x261234EE652E3D8D(Var2, Var1, joaat("weapon_grenade"), 1)) || unk_0x261234EE652E3D8D(Var2, Var1, joaat("weapon_stickybomb"), 1))
		{
			bLocal_90 = true;
			bVar0 = true;
		}
		if (unk_0x2FABF7C63A9F9FE5(-1, -90.68654f, 6411.883f, 36.00729f, -103.86f, 6398.848f, 30.19453f, 23f) || unk_0x3628D28B8671F14F(-1, unk_0x1D5C49FCA9BC5B02(iLocal_49, 31086, 0f, 0f, 0f), 20f))
		{
			bLocal_90 = true;
			bVar0 = true;
		}
		if (unk_0x1F9CD729737E8653(unk_0x1D5C49FCA9BC5B02(iLocal_49, 31086, 0f, 0f, 0f), 6f))
		{
			bVar0 = true;
			bLocal_90 = true;
		}
	}
	if (!unk_0x5AEB5DDFFAD43CA5(iLocal_50))
	{
		if (unk_0xCDF860E56BBCC6B4(iLocal_50, unk_0x9B0761B4C3EB8BC7(), 1))
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
	}
	return bVar0;
}

bool func_5(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_27(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
	if (iParam3 > 7)
	{
		if (iParam3 < 12)
		{
			iParam3 = 7;
		}
	}
	Global_21012 = 0;
	Global_21014 = 0;
	Global_21019 = 0;
	Global_21996 = 0;
	Global_21998 = 0;
	Global_22002 = 0;
	Global_2621441 = 0;
	return func_6(sParam2, iParam3, 0);
}

int func_6(char* sParam0, int iParam1, bool bParam2)
{
	Global_21006 = 0;
	if (Global_21005 == 0 || Global_21007 == 2)
	{
		if (Global_21005 != 0)
		{
			if (iParam1 > Global_21007)
			{
				if (Global_21012 == 0)
				{
					unk_0xBE4122AC23440E7D(false);
					Global_19681.f_1 = 3;
					Global_21005 = 0;
					Global_21006 = 1;
					Global_21058 = 0;
					Global_21001 = 0;
					Global_21002 = 0;
					Global_21016 = 0;
					Global_21015 = 0;
					Global_19680 = 0;
				}
				else
				{
					func_26();
					return 0;
				}
			}
			else
			{
				return 0;
			}
		}
		if (unk_0x6A5CC4A2C9D9ED8D())
		{
			return 0;
		}
		if (func_25(8, -1))
		{
			return 0;
		}
		Global_21081 = { Global_21075 };
		func_24();
		Global_20294 = { Global_20459 };
		Global_21011 = Global_21012;
		Global_21018 = Global_21019;
		Global_2621442 = Global_2621441;
		Global_21020 = { Global_21036 };
		Global_21013 = Global_21014;
		Global_21995 = Global_21996;
		Global_22003 = { Global_22009 };
		Global_21997 = Global_21998;
		Global_21999 = Global_22000;
		Global_22001 = Global_22002;
		Global_20624.f_370 = Global_21994;
		Global_20624.f_368 = Global_21992;
		Global_20624.f_369 = Global_21993;
		Global_21001 = Global_21002;
		if (Global_21011)
		{
			unk_0xD2459066EA58CE43(&Global_7551, 20);
			unk_0xD2459066EA58CE43(&Global_7552, 17);
			unk_0xD2459066EA58CE43(&Global_7553, 0);
			if (bParam2)
			{
				func_16();
				if (Global_8356[Global_19681 /*2811*/][0 /*281*/].f_259 == 2)
				{
					if (iParam1 == 13)
					{
					}
					else
					{
						return 0;
					}
				}
				if (Global_19681.f_1 > 3)
				{
					return 0;
				}
			}
			if (Global_19647 == 1)
			{
				return 0;
			}
			if (unk_0x5A228A6A51E757C8(unk_0x460153A63B9477BC()))
			{
				if (unk_0x42A04E707DE50816(unk_0x9B0761B4C3EB8BC7()))
				{
					return 0;
				}
				if (func_15())
				{
					return 0;
				}
				if (unk_0x7587087519CF4F83(unk_0x9B0761B4C3EB8BC7()))
				{
					return 0;
				}
				if (unk_0xCED6B5226244381C(unk_0x9B0761B4C3EB8BC7()))
				{
					return 0;
				}
				if (unk_0xAACBFCE60AF94F2D(unk_0x9B0761B4C3EB8BC7()))
				{
					return 0;
				}
				if (unk_0x02D1369035663875(unk_0x9B0761B4C3EB8BC7(), joaat("gadget_parachute")))
				{
					return 0;
				}
				if (!Global_76833)
				{
					if (unk_0xE72C9284B5143451(unk_0x9B0761B4C3EB8BC7()))
					{
						return 0;
					}
					if (unk_0x5197F8CD4A72E68F(unk_0x460153A63B9477BC()))
					{
						return 0;
					}
					if (unk_0x887D491E579FA61E(unk_0x9B0761B4C3EB8BC7()))
					{
						return 0;
					}
					if (unk_0x4C9EC9A10C274889(unk_0x460153A63B9477BC(), 0))
					{
						return 0;
					}
				}
			}
			if (func_14())
			{
				return 0;
			}
			else
			{
				switch (Global_19681.f_1)
				{
					case 7:
						return 0;
						break;
					
					case 8:
						return 0;
						break;
					
					case 9:
						break;
					
					case 10:
						break;
					
					default:
						break;
				}
				if (unk_0xCE990E643CD9D0E5(Global_7551, 9))
				{
					return 0;
				}
			}
			func_13();
			Global_21015 = bParam2;
		}
		Global_21007 = iParam1;
		StringCopy(&Global_20624, sParam0, 24);
		Global_19871 = 0;
		func_12();
		func_7();
		return 1;
	}
	if (Global_21005 == 5)
	{
		return 0;
	}
	if (iParam1 < Global_21007 || iParam1 == Global_21007)
	{
		return 0;
	}
	if (iParam1 == 2)
	{
	}
	else
	{
		func_26();
	}
	return 0;
}

void func_7()
{
	if (!func_8())
	{
		return;
	}
	if (Global_21011)
	{
		MemCopy(&(Global_1703978.f_1), {Global_20624}, 4);
		Global_1703978 = Global_6866;
		Global_1703978.f_6 = Global_21015;
	}
}

int func_8()
{
	if (!Global_262145.f_28160)
	{
		return 0;
	}
	if (!Global_76833)
	{
		return 0;
	}
	if (unk_0x460153A63B9477BC() == func_11())
	{
		return 0;
	}
	if (func_9(unk_0x460153A63B9477BC()))
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

bool func_9(int iParam0)
{
	return func_10(iParam0, 20);
}

bool func_10(int iParam0, int iParam1)
{
	return unk_0xCE990E643CD9D0E5(Global_1630317[iParam0 /*595*/].f_11.f_4, iParam1);
}

int func_11()
{
	return -1;
}

void func_12()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 69)
	{
		StringCopy(&(Global_19873[iVar0 /*6*/]), "", 24);
		iVar0++;
	}
	unk_0xBE4122AC23440E7D(false);
	Global_21005 = 1;
}

void func_13()
{
	Global_21058 = Global_21057;
	Global_21052 = Global_21053;
	Global_21099 = { Global_21087 };
	Global_21105 = { Global_21093 };
	Global_21060 = Global_21059;
	Global_21129 = { Global_21111 };
	Global_21135 = { Global_21117 };
	Global_21141 = { Global_21123 };
	Global_21147 = { Global_21153 };
	Global_6866 = Global_6867;
	Global_6868 = Global_6869;
	Global_21016 = Global_21017;
	Global_21018 = Global_21019;
	Global_21020 = { Global_21036 };
	Global_21009 = Global_21010;
	Global_22021 = 0;
	Global_21054 = 0;
	Global_21055 = 0;
	unk_0xD2459066EA58CE43(&Global_7552, 16);
}

int func_14()
{
	if (Global_19681.f_1 == 1 || Global_19681.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

int func_15()
{
	int iVar0;
	int iVar1;
	
	if (Global_76833)
	{
		iVar0 = 0;
		unk_0x1386E5E658CE3032(unk_0x9B0761B4C3EB8BC7(), &iVar1, 1);
		if (unk_0x5A228A6A51E757C8(unk_0x460153A63B9477BC()))
		{
			if ((iVar1 == joaat("weapon_sniperrifle") || iVar1 == joaat("weapon_heavysniper")) || iVar1 == joaat("weapon_remotesniper"))
			{
				iVar0 = 1;
			}
		}
		if (unk_0x5BFE1F305D18843B() && iVar0 == 1)
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	if (unk_0x5A228A6A51E757C8(unk_0x460153A63B9477BC()))
	{
		if (unk_0xD15202C6B03220B8(unk_0x9B0761B4C3EB8BC7(), 78, 1))
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	return 1;
}

void func_16()
{
	if (func_23(14))
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
		Global_19681 = func_17();
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

int func_17()
{
	func_18();
	return Global_111858.f_2359.f_539.f_4321;
}

void func_18()
{
	int iVar0;
	
	if (unk_0xAE06B9E39EBDE049(unk_0x9B0761B4C3EB8BC7()))
	{
		if (func_21(Global_111858.f_2359.f_539.f_4321) != unk_0x36FE6D3220816ADA(unk_0x9B0761B4C3EB8BC7()))
		{
			iVar0 = func_20(unk_0x9B0761B4C3EB8BC7());
			if (func_19(iVar0) && (!func_23(14) || Global_110809))
			{
				if (Global_111858.f_2359.f_539.f_4321 != iVar0 && func_19(Global_111858.f_2359.f_539.f_4321))
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

bool func_19(int iParam0)
{
	return iParam0 < 3;
}

int func_20(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0xAE06B9E39EBDE049(iParam0))
	{
		iVar1 = unk_0x36FE6D3220816ADA(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_21(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_21(int iParam0)
{
	if (func_19(iParam0))
	{
		return func_22(iParam0);
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

var func_22(int iParam0)
{
	return Global_1848[iParam0 /*29*/];
}

bool func_23(int iParam0)
{
	return Global_41631 == iParam0;
}

void func_24()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 15)
	{
		Global_20294[iVar0 /*10*/] = 0;
		StringCopy(&(Global_20294[iVar0 /*10*/].f_1), "", 24);
		Global_20294[iVar0 /*10*/].f_7 = 0;
		Global_20294[iVar0 /*10*/].f_8 = 0;
		iVar0++;
	}
	Global_20294.f_161 = -99;
	Global_20294.f_162 = { 0f, 0f, 0f };
}

bool func_25(int iParam0, int iParam1)
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

void func_26()
{
	unk_0x62B2C9892E3E142D();
	Global_22016 = 0;
	if ((unk_0x6B12213471F330A3() || Global_19681.f_1 == 9) || Global_19680 == 1)
	{
		unk_0xBE4122AC23440E7D(false);
		Global_21005 = 6;
		Global_19681.f_1 = 3;
		return;
	}
	if (unk_0x6A5CC4A2C9D9ED8D())
	{
		unk_0xBE4122AC23440E7D(true);
		Global_21005 = 6;
		return;
	}
}

void func_27(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5)
{
	Global_20459 = { *uParam0 };
	Global_6867 = iParam1;
	StringCopy(&Global_21075, sParam2, 24);
	Global_21994 = iParam5;
	if (iParam3 == 0)
	{
		Global_21992 = 1;
		Global_21990 = 0;
	}
	else
	{
		Global_21992 = 0;
		Global_21990 = 1;
	}
	if (iParam4 == 0)
	{
		Global_21993 = 1;
		Global_21991 = 0;
	}
	else
	{
		Global_21993 = 0;
		Global_21991 = 1;
	}
}

void func_28()
{
	unk_0x601B713E8CE5673A(unk_0x460153A63B9477BC());
	func_52();
	func_32(-1, 0);
	func_29();
	func_163();
}

void func_29()
{
	func_30();
}

int func_30()
{
	if (func_31(0))
	{
		return 0;
	}
	if (Global_98994.f_8)
	{
		if (Global_98994.f_10 > 0)
		{
			return 0;
		}
	}
	else if (Global_98994.f_10 > 1)
	{
		return 0;
	}
	Global_98994.f_10++;
	return 1;
}

bool func_31(bool bParam0)
{
	if (!bParam0 && unk_0x7B70881748D166CD(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return unk_0xCE990E643CD9D0E5(Global_77081, 0);
}

void func_32(int iParam0, int iParam1)
{
	if (iParam0 == -1)
	{
		iParam0 = func_50();
	}
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam1 <= func_49(iParam0))
	{
		func_48(iParam0, iParam1);
		if (!func_47(51))
		{
			func_43("RE_REWARD", 1, 0, 4000, 10000, func_46(), 0, 138, 0);
			func_42(51);
		}
		if (func_41(iParam0))
		{
			Global_111858.f_24991.f_2 = 3;
		}
		if (func_40(iParam0, iParam1) != 322)
		{
			func_34(func_40(iParam0, iParam1), Local_44.x, Local_44.f_1);
		}
		Global_111846 = iParam1;
		if (Global_111844 == 0)
		{
			if (((Global_111847 == 1 || Global_111847 == 5) || Global_111847 == 11) || Global_111847 == 25)
			{
				func_33(2);
			}
			else if ((Global_111847 == 26 || Global_111847 == 8) || Global_111847 == 17)
			{
				func_33(7);
			}
			else
			{
				func_33(1);
			}
		}
	}
}

void func_33(int iParam0)
{
	Global_111844 = iParam0;
}

void func_34(int iParam0, var uParam1, var uParam2)
{
	bool bVar0;
	
	if (iParam0 < 0)
	{
	}
	if (iParam0 == 321 || iParam0 > 321)
	{
	}
	else
	{
		func_38((891 + iParam0), 1, -1, 1);
	}
	bVar0 = true;
	if (Global_111858.f_10190[iParam0 /*12*/].f_5 == 1)
	{
		if (Global_111858.f_10190[iParam0 /*12*/].f_6 == 11 || Global_111858.f_10190[iParam0 /*12*/].f_6 == 12)
		{
			bVar0 = false;
		}
	}
	else
	{
		Global_111858.f_10190[iParam0 /*12*/].f_5 = 1;
		Global_111858.f_10190[iParam0 /*12*/].f_10 = uParam1;
		Global_111858.f_10190[iParam0 /*12*/].f_11 = uParam2;
		if (iParam0 == 287)
		{
			unk_0xFB6CC2C6970D6917(joaat("NUM_HIDDEN_PACKAGES_0"), 50, 0);
		}
		if (iParam0 == 286)
		{
			unk_0xFB6CC2C6970D6917(joaat("NUM_HIDDEN_PACKAGES_1"), 50, 0);
		}
		if (iParam0 == 299)
		{
			unk_0xFB6CC2C6970D6917(joaat("NUM_HIDDEN_PACKAGES_3"), 50, 0);
		}
	}
	if (bVar0)
	{
		func_35();
	}
}

void func_35()
{
	int iVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	float fVar7;
	float fVar8;
	int iVar9;
	
	iVar0 = 0;
	Global_111594 = 0;
	Global_111595 = 0;
	Global_111596 = 0;
	Global_111597 = 0;
	Global_111598 = 0;
	Global_111599 = 0;
	Global_111600 = 0;
	fVar1 = 0f;
	fVar2 = 0f;
	fVar3 = 0f;
	fVar4 = 0f;
	fVar5 = 0f;
	fVar6 = 0f;
	fVar7 = 0f;
	fVar8 = Global_111858.f_10190.f_3853;
	Global_111858.f_10190.f_3853 = 0f;
	while (iVar0 < 321)
	{
		if (Global_111858.f_10190[iVar0 /*12*/].f_5 == 1)
		{
			switch (Global_111858.f_10190[iVar0 /*12*/].f_6)
			{
				case 1:
					Global_111594++;
					fVar1 = (fVar1 + Global_111858.f_10190[iVar0 /*12*/].f_4);
					break;
				
				case 3:
					Global_111595++;
					fVar2 = (fVar2 + Global_111858.f_10190[iVar0 /*12*/].f_4);
					break;
				
				case 5:
					Global_111596++;
					fVar3 = (fVar3 + Global_111858.f_10190[iVar0 /*12*/].f_4);
					break;
				
				case 7:
					Global_111597++;
					fVar4 = (fVar4 + Global_111858.f_10190[iVar0 /*12*/].f_4);
					break;
				
				case 9:
					Global_111598++;
					fVar5 = (fVar5 + (Global_111858.f_10190[iVar0 /*12*/].f_4 * 4f));
					break;
				
				case 11:
					Global_111599++;
					fVar6 = (fVar6 + Global_111858.f_10190[iVar0 /*12*/].f_4);
					break;
				
				case 13:
					Global_111600++;
					fVar7 = (fVar7 + Global_111858.f_10190[iVar0 /*12*/].f_4);
					break;
				
				default:
					break;
				}
		}
		iVar0++;
	}
	if (Global_111577 > 0)
	{
		if (Global_111594 == Global_111577)
		{
			fVar1 = 55f;
		}
	}
	if (Global_111578 > 0)
	{
		if (Global_111595 == Global_111578)
		{
			fVar2 = 10f;
		}
	}
	if (Global_111579 > 0)
	{
		if (Global_111596 == Global_111579)
		{
			fVar3 = 0f;
		}
	}
	if (Global_111580 > 0)
	{
		if (Global_111597 == Global_111580)
		{
			fVar4 = 10f;
		}
	}
	if (Global_111581 > 0)
	{
		if (((Global_111598 == Global_111581 || (Global_111581 * 10 / Global_111598) < 41) || Global_111598 > Global_111584) || Global_111598 == Global_111584)
		{
			if (!unk_0xCE990E643CD9D0E5(Global_111858.f_10190.f_3856, 14))
			{
				if (Global_111598 == Global_111581)
				{
					unk_0xFB6CC2C6970D6917(joaat("NUM_RNDEVENTS_COMPLETED"), Global_111581, 0);
					unk_0xBE20AB8238688965(&(Global_111858.f_10190.f_3856), 14);
				}
			}
			fVar5 = 5f;
		}
	}
	if (Global_111582 > 0)
	{
		if (Global_111599 == Global_111582)
		{
			fVar6 = 15f;
		}
	}
	if (Global_111583 > 0)
	{
		if (Global_111600 == Global_111583)
		{
			fVar7 = 5f;
		}
	}
	Global_111858.f_10190.f_3853 = ((((((fVar1 + fVar2) + fVar3) + fVar4) + fVar5) + fVar6) + fVar7);
	if (Global_111598 > Global_111584 || Global_111598 == Global_111584)
	{
		iVar9 = Global_111584;
	}
	else
	{
		iVar9 = Global_111598;
	}
	unk_0x6000E4684CB4330B(joaat("NUM_MISSIONS_COMPLETED"), Global_111594, 1);
	unk_0x6000E4684CB4330B(joaat("NUM_MISSIONS_AVAILABLE"), Global_111577, 1);
	unk_0x6000E4684CB4330B(joaat("NUM_MINIGAMES_COMPLETED"), Global_111595, 1);
	unk_0x6000E4684CB4330B(joaat("NUM_MINIGAMES_AVAILABLE"), Global_111578, 1);
	unk_0x6000E4684CB4330B(joaat("NUM_ODDJOBS_COMPLETED"), Global_111596, 1);
	unk_0x6000E4684CB4330B(joaat("NUM_ODDJOBS_AVAILABLE"), Global_111579, 1);
	unk_0x6000E4684CB4330B(joaat("NUM_RNDPEOPLE_COMPLETED"), Global_111597, 1);
	unk_0x6000E4684CB4330B(joaat("NUM_RNDPEOPLE_AVAILABLE"), Global_111580, 1);
	unk_0x6000E4684CB4330B(joaat("NUM_RNDEVENTS_COMPLETED"), iVar9, 1);
	unk_0x6000E4684CB4330B(joaat("NUM_RNDEVENTS_AVAILABLE"), Global_111584, 1);
	unk_0x6000E4684CB4330B(joaat("NUM_MISC_COMPLETED"), (Global_111600 + Global_111599), 1);
	unk_0x6000E4684CB4330B(joaat("NUM_MISC_AVAILABLE"), (Global_111583 + Global_111582), 1);
	Global_111601 = (Global_111594 * 100 / Global_111577);
	Global_111603 = ((Global_111596 + Global_111595) * 100 / (Global_111579 + Global_111578));
	Global_111602 = ((Global_111597 + iVar9) * 100 / (Global_111580 + Global_111584));
	Global_111604 = ((Global_111599 + Global_111600) * 100 / (Global_111582 + Global_111583));
	unk_0x3C2CA88D6219BB12(joaat("TOTAL_PROGRESS_MADE"), Global_111858.f_10190.f_3853, 1);
	unk_0x6000E4684CB4330B(joaat("PERCENT_STORY_MISSIONS"), Global_111601, 1);
	unk_0x6000E4684CB4330B(joaat("PERCENT_AMBIENT_MISSIONS"), Global_111602, 1);
	unk_0x6000E4684CB4330B(joaat("PERCENT_ODDJOBS"), Global_111603, 1);
	if (fVar8 > 0f && floor(fVar8) < floor(Global_111858.f_10190.f_3853))
	{
		func_37(13, floor(Global_111858.f_10190.f_3853));
	}
	if (!unk_0xC4A02490EB1F450B())
	{
		if (!Global_76833)
		{
			if (func_36() == 2 == 0 && !unk_0x25DDB354A40FFCDB())
			{
				if (unk_0x70E5C9630A26FB40())
				{
					Global_111592 = 0;
				}
				if (!Global_61717)
				{
					func_30();
				}
			}
		}
	}
}

int func_36()
{
	return Global_30968;
}

int func_37(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam0 < 0)
	{
		return 0;
	}
	if (iParam0 > 78)
	{
		return 0;
	}
	if (iParam1 <= 0 || iParam1 > 100)
	{
		return 0;
	}
	iVar0 = unk_0x76B47D2BF8F31200(iParam0);
	if (iParam1 > iVar0)
	{
		return unk_0xD4563E24351CCDF9(iParam0, iParam1);
	}
	return 0;
}

int func_38(int iParam0, bool bParam1, int iParam2, int iParam3)
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
		iParam2 = func_39();
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

int func_39()
{
	return Global_1312763;
}

int func_40(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			return 250;
			break;
		
		case 1:
			return 226;
			break;
		
		case 2:
			return 243;
			break;
		
		case 3:
			return 256;
			break;
		
		case 4:
			return 259;
			break;
		
		case 5:
			if (iParam1 == 1)
			{
				return 281;
			}
			if (iParam1 == 2)
			{
				return 282;
			}
			break;
		
		case 6:
			return 265;
			break;
		
		case 7:
			return 218;
			break;
		
		case 9:
			if (iParam1 == 1)
			{
				return 271;
			}
			if (iParam1 == 2)
			{
				return 272;
			}
			if (iParam1 == 3)
			{
				return 273;
			}
			if (iParam1 == 4)
			{
				return 274;
			}
			if (iParam1 == 5)
			{
				return 275;
			}
			if (iParam1 == 6)
			{
				return 276;
			}
			if (iParam1 == 7)
			{
				return 277;
			}
			if (iParam1 == 8)
			{
				return 278;
			}
			if (iParam1 == 9)
			{
				return 279;
			}
			if (iParam1 == 10)
			{
				return 280;
			}
			break;
		
		case 10:
			return 219;
			break;
		
		case 11:
			if (iParam1 == 1)
			{
				return 246;
			}
			if (iParam1 == 2)
			{
				return 247;
			}
			if (iParam1 == 3)
			{
				return 248;
			}
			if (iParam1 == 4)
			{
				return 249;
			}
			break;
		
		case 12:
			return 254;
			break;
		
		case 13:
			if (iParam1 == 1)
			{
				return 260;
			}
			if (iParam1 == 2)
			{
				return 261;
			}
			if (iParam1 == 3)
			{
				return 262;
			}
			if (iParam1 == 4)
			{
				return 264;
			}
			break;
		
		case 14:
			return 283;
			break;
		
		case 15:
			if (iParam1 == 1)
			{
				return 224;
			}
			if (iParam1 == 2)
			{
				return 225;
			}
			break;
		
		case 16:
			return 252;
			break;
		
		case 17:
			if (iParam1 == 1)
			{
				return 244;
			}
			if (iParam1 == 2)
			{
				return 245;
			}
			break;
		
		case 18:
			return 253;
			break;
		
		case 19:
			return 215;
			break;
		
		case 20:
			return 216;
			break;
		
		case 21:
			return 251;
			break;
		
		case 22:
			if (iParam1 == 1)
			{
				return 221;
			}
			if (iParam1 == 2)
			{
				return 222;
			}
			break;
		
		case 23:
			if (iParam1 == 1)
			{
				return 213;
			}
			if (iParam1 == 2)
			{
				return 214;
			}
			break;
		
		case 24:
			return 242;
			break;
		
		case 25:
			if (iParam1 == 1)
			{
				return 267;
			}
			if (iParam1 == 2)
			{
				return 268;
			}
			if (iParam1 == 3)
			{
				return 269;
			}
			break;
		
		case 8:
			return 255;
			break;
		
		case 26:
			if (iParam1 == 1)
			{
				return 227;
			}
			if (iParam1 == 2)
			{
				return 228;
			}
			break;
		
		case 27:
			if (iParam1 == 1)
			{
				return 257;
			}
			if (iParam1 == 2)
			{
				return 258;
			}
			break;
		
		case 28:
			return 217;
			break;
		
		case 29:
			if (iParam1 == 1)
			{
				return 229;
			}
			if (iParam1 == 2)
			{
				return 230;
			}
			if (iParam1 == 3)
			{
				return 231;
			}
			break;
		
		case 30:
			return 285;
			break;
		
		case 31:
			return 318;
			break;
		
		case 32:
			return 319;
			break;
		
		case 33:
			return 320;
			break;
	}
	return 322;
}

int func_41(int iParam0)
{
	switch (iParam0)
	{
		case 29:
		case 30:
		case 2:
		case 18:
			return 0;
			break;
	}
	return 1;
}

void func_42(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = iParam0;
	iVar1 = 0;
	while (iVar0 > 31)
	{
		iVar0 = (iVar0 - 32);
		iVar1++;
	}
	if (iVar1 < 3)
	{
		unk_0xBE20AB8238688965(&(Global_111858.f_20406.f_150[iVar1]), iVar0);
	}
}

void func_43(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)
{
	func_44(sParam0, "", iParam1, iParam2, iParam3, iParam4, iParam5, iParam6, iParam7, iParam8);
}

void func_44(char* sParam0, char* sParam1, var uParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, var uParam9)
{
	int iVar0;
	
	if (unk_0xF005CCA4263DF67F(sParam0, ""))
	{
		return;
	}
	if (iParam3 < 0)
	{
		return;
	}
	if (iParam5 < 500 && iParam5 != -1)
	{
		return;
	}
	if (iParam4 < 0 && iParam4 != -1)
	{
		return;
	}
	if (iParam6 < 1 || iParam6 > 7)
	{
		return;
	}
	if (iParam7 == 235)
	{
		return;
	}
	if (iParam8 == 235)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < Global_111858.f_20406.f_145)
	{
		if (unk_0xF005CCA4263DF67F(&(Global_111858.f_20406[iVar0 /*16*/]), sParam0))
		{
			return;
		}
		iVar0++;
	}
	if (Global_111858.f_20406.f_145 < 9)
	{
		StringCopy(&(Global_111858.f_20406[Global_111858.f_20406.f_145 /*16*/]), sParam0, 16);
		StringCopy(&(Global_111858.f_20406[Global_111858.f_20406.f_145 /*16*/].f_4), sParam1, 16);
		Global_111858.f_20406[Global_111858.f_20406.f_145 /*16*/].f_8 = (unk_0x578C4EF320340AF7() + iParam3);
		Global_111858.f_20406[Global_111858.f_20406.f_145 /*16*/].f_9 = iParam5;
		Global_111858.f_20406[Global_111858.f_20406.f_145 /*16*/].f_11 = iParam6;
		Global_111858.f_20406[Global_111858.f_20406.f_145 /*16*/].f_12 = uParam2;
		Global_111858.f_20406[Global_111858.f_20406.f_145 /*16*/].f_13 = iParam7;
		Global_111858.f_20406[Global_111858.f_20406.f_145 /*16*/].f_14 = iParam8;
		Global_111858.f_20406[Global_111858.f_20406.f_145 /*16*/].f_15 = uParam9;
		if (iParam4 != -1)
		{
			Global_111858.f_20406[Global_111858.f_20406.f_145 /*16*/].f_10 = ((unk_0x578C4EF320340AF7() + iParam3) + iParam4);
		}
		else
		{
			Global_111858.f_20406[Global_111858.f_20406.f_145 /*16*/].f_10 = -1;
		}
		Global_111858.f_20406.f_145++;
		func_45();
	}
}

void func_45()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 3)
	{
		Global_111858.f_20406.f_146[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Global_111858.f_20406.f_145)
	{
		if (unk_0xCE990E643CD9D0E5(Global_111858.f_20406[iVar0 /*16*/].f_11, 0))
		{
			if (Global_111858.f_20406[iVar0 /*16*/].f_12 > Global_111858.f_20406.f_146[0])
			{
				Global_111858.f_20406.f_146[0] = Global_111858.f_20406[iVar0 /*16*/].f_12;
			}
		}
		if (unk_0xCE990E643CD9D0E5(Global_111858.f_20406[iVar0 /*16*/].f_11, 1))
		{
			if (Global_111858.f_20406[iVar0 /*16*/].f_12 > Global_111858.f_20406.f_146[1])
			{
				Global_111858.f_20406.f_146[1] = Global_111858.f_20406[iVar0 /*16*/].f_12;
			}
		}
		if (unk_0xCE990E643CD9D0E5(Global_111858.f_20406[iVar0 /*16*/].f_11, 2))
		{
			if (Global_111858.f_20406[iVar0 /*16*/].f_12 > Global_111858.f_20406.f_146[2])
			{
				Global_111858.f_20406.f_146[2] = Global_111858.f_20406[iVar0 /*16*/].f_12;
			}
		}
		iVar0++;
	}
}

int func_46()
{
	func_18();
	switch (Global_111858.f_2359.f_539.f_4321)
	{
		case 0:
			return 1;
			break;
		
		case 1:
			return 2;
			break;
		
		case 2:
			return 4;
			break;
	}
	return 0;
}

int func_47(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = iParam0;
	iVar1 = 0;
	while (iVar0 > 31)
	{
		iVar0 = (iVar0 - 32);
		iVar1++;
	}
	if (iVar1 < 3)
	{
		return unk_0xCE990E643CD9D0E5(Global_111858.f_20406.f_150[iVar1], iVar0);
	}
	return 0;
}

void func_48(int iParam0, int iParam1)
{
	unk_0xBE20AB8238688965(&(Global_111858.f_24991.f_8[iParam0]), iParam1);
}

int func_49(int iParam0)
{
	int iVar0;
	
	iVar0 = 1;
	switch (iParam0)
	{
		case 1:
			iVar0 = 5;
			break;
		
		case 5:
			iVar0 = 2;
			break;
		
		case 9:
			iVar0 = 10;
			break;
		
		case 11:
			iVar0 = 4;
			break;
		
		case 13:
			iVar0 = 4;
			break;
		
		case 15:
			iVar0 = 2;
			break;
		
		case 17:
			iVar0 = 2;
			break;
		
		case 22:
			iVar0 = 2;
			break;
		
		case 23:
			iVar0 = 2;
			break;
		
		case 25:
			iVar0 = 3;
			break;
		
		case 26:
			iVar0 = 2;
			break;
		
		case 27:
			iVar0 = 2;
			break;
		
		case 29:
			iVar0 = 3;
			break;
	}
	return iVar0;
}

int func_50()
{
	struct<16> Var0;
	var uVar1;
	
	StringCopy(&Var0, unk_0x6C5C6B207AA78253(), 64);
	uVar1 = func_51(Var0);
	return uVar1;
}

int func_51(char[4] cParam0, char[4] cParam1, char[4] cParam2, char[4] cParam3, char[4] cParam4, char[4] cParam5, char[4] cParam6, char[4] cParam7, char[4] cParam8, char[4] cParam9, char[4] cParam10, char[4] cParam11, char[4] cParam12, char[4] cParam13, char[4] cParam14, char[4] cParam15)
{
	switch (unk_0x856D5567211886A2(&cParam0))
	{
		case joaat("re_abandonedcar"):
			return 23;
			break;
		
		case joaat("re_accident"):
			return 0;
			break;
		
		case joaat("re_arrests"):
			return 15;
			break;
		
		case joaat("re_atmrobbery"):
			return 1;
			break;
		
		case joaat("re_bikethief"):
			return 26;
			break;
		
		case joaat("re_border"):
			return 29;
			break;
		
		case joaat("re_burials"):
			return 24;
			break;
		
		case joaat("re_bus_tours"):
			return 2;
			break;
		
		case joaat("re_cartheft"):
			return 17;
			break;
		
		case joaat("re_chasethieves"):
			return 11;
			break;
		
		case joaat("re_crashrescue"):
			return 16;
			break;
		
		case joaat("re_cultshootout"):
			return 18;
			break;
		
		case joaat("re_dealgonewrong"):
			return 12;
			break;
		
		case joaat("re_domestic"):
			return 3;
			break;
		
		case joaat("re_drunkdriver"):
			return 27;
			break;
		
		case joaat("re_gang_intimidation"):
			return 20;
			break;
		
		case joaat("re_gangfight"):
			return 19;
			break;
		
		case joaat("re_getaway_driver"):
			return 4;
			break;
		
		case joaat("re_hitch_lift"):
			return 13;
			break;
		
		case joaat("re_homeland_security"):
			return 28;
			break;
		
		case joaat("re_lured"):
			return 7;
			break;
		
		case joaat("re_muggings"):
			return 25;
			break;
		
		case joaat("re_paparazzi"):
			return 10;
			break;
		
		case joaat("re_prisonerlift"):
			return 22;
			break;
		
		case joaat("re_prisonvanbreak"):
			return 21;
			break;
		
		case joaat("re_securityvan"):
			return 9;
			break;
		
		case joaat("re_shoprobbery"):
			return 5;
			break;
		
		case joaat("re_snatched"):
			return 6;
			break;
		
		case joaat("re_stag_do"):
			return 14;
			break;
		
		case joaat("re_yetarian"):
			return 30;
			break;
		
		case joaat("re_duel"):
			return 31;
			break;
		
		case joaat("re_seaplane"):
			return 32;
			break;
		
		case joaat("re_monkey"):
			return 33;
			break;
	}
	return -1;
}

int func_52()
{
	return 1;
}

int func_53()
{
	if (!iLocal_73)
	{
		wait(0);
		if (!unk_0x5AEB5DDFFAD43CA5(iLocal_49))
		{
			if (iLocal_64 == -1)
			{
				unk_0x4478D8ED4673EF14(iLocal_49, 0);
				unk_0xEE77D02136D8423F(5, 0.5f);
				unk_0x597A48D151729396(5, 1f);
				unk_0x8D2D6E04602DA703(iLocal_49, 1);
				unk_0x389E871B0B67CCCC(iLocal_49, 1);
				unk_0x756D74A3EF0AB788(iLocal_49, sLocal_99, "girl_villian_shot", 8f, -2f, -1, 10, 0, 0, 0, 0);
				iLocal_64 = unk_0xF341A134A5B8D4F6(Local_66, Local_67, 2);
				if (!unk_0x5AEB5DDFFAD43CA5(iLocal_50))
				{
					unk_0xD3D9D7C84656DAE5(iLocal_50, iLocal_55);
					if (!unk_0x1037B9D45CE6B788(unk_0x9B0761B4C3EB8BC7(), -91.30704f, 6391.854f, 30.6403f, -102.5595f, 6403.103f, 32.45444f, 8.5f, 0, true, 0))
					{
						unk_0xDFDB9C533700BC17(iLocal_50, iLocal_64, sLocal_99, "bystander_villian_shot", 1000f, -2f, 5, 0, 1148846080, 0);
					}
					else
					{
						unk_0x4E65320BC9AD521C(iLocal_50, false);
					}
				}
				unk_0xDFDB9C533700BC17(iLocal_49, iLocal_64, sLocal_99, "girl_villian_shot", 1000f, -2f, 5, 0, 1148846080, 0);
			}
			else if (unk_0xFC5D6FB6EECB392F(iLocal_64))
			{
				if (unk_0x369E69441C066912(iLocal_64) > 0.1f)
				{
					func_3();
				}
				if (!iLocal_70)
				{
					if (bLocal_79)
					{
						if (unk_0x369E69441C066912(iLocal_64) > 0.5f)
						{
							if (func_5(&Local_93, "RERHOAU", "RERHO_SAINT", 4, iLocal_98, 0, 0))
							{
								iLocal_70 = 1;
							}
						}
					}
					else if (func_5(&Local_93, "RERHOAU", "RERHO_THANK", 4, iLocal_98, 0, 0))
					{
						iLocal_70 = 1;
					}
				}
				if (unk_0x369E69441C066912(iLocal_64) == 1f)
				{
					iLocal_64 = unk_0xF341A134A5B8D4F6(Local_66, Local_67, 2);
					func_1(iLocal_49, "WHIMPER", "WAVELOAD_PAIN_FEMALE", 24);
					unk_0x81493F39713559B1(iLocal_64, true);
					if (!unk_0x5AEB5DDFFAD43CA5(iLocal_50))
					{
						if (bLocal_79)
						{
							unk_0xDFDB9C533700BC17(iLocal_50, iLocal_64, sLocal_99, "bystander_helping_girl_loop", 1000f, -2f, 5, 0, 1148846080, 0);
						}
						else
						{
							unk_0x9DC06E2A59C5AEBB(&iLocal_71);
							unk_0xA785552633ED203B(0, iLocal_49, -1, 1024, 2);
							unk_0xE021DCE1063D5DC2(0, iLocal_49, 20000, 3f, 1f, 1073741824, 0);
							unk_0xC1C7DE768F7675E5(0, -1);
							unk_0x19F29730874AD6F1(iLocal_71);
							unk_0x9B6EC2CECE1010EF(iLocal_50, iLocal_71);
						}
						unk_0xCBA6B2B569DCAFD8(iLocal_50, true);
						unk_0xD3D9D7C84656DAE5(iLocal_50, iLocal_57);
					}
					unk_0xDFDB9C533700BC17(iLocal_49, iLocal_64, sLocal_99, "girl_helping_girl_loop", 1000f, -2f, 5, 0, 1148846080, 0);
					unk_0xCBA6B2B569DCAFD8(iLocal_49, true);
					unk_0xD3D9D7C84656DAE5(iLocal_49, iLocal_57);
					unk_0x4478D8ED4673EF14(iLocal_49, 1);
					unk_0x34FEEAC2548C3789(1f);
					iLocal_73 = 1;
				}
			}
		}
	}
	return iLocal_73;
}

void func_54()
{
	Global_19871 = 0;
	func_55();
}

void func_55()
{
	unk_0x62B2C9892E3E142D();
	Global_22016 = 0;
	if (unk_0x6A5CC4A2C9D9ED8D())
	{
		unk_0xBE4122AC23440E7D(false);
		Global_21005 = 6;
	}
}

void func_56(var uParam0, int iParam1)
{
	if ((uParam0[iParam1 /*10*/])->f_7 == 1)
	{
		(uParam0[iParam1 /*10*/])->f_7 = 0;
	}
}

void func_57()
{
	if (((((((((((unk_0x1037B9D45CE6B788(unk_0x9B0761B4C3EB8BC7(), -91.30704f, 6391.854f, 30.6403f, -102.5595f, 6403.103f, 32.45444f, 8.5f, 0, true, 0) && unk_0xD5E14AF69C7C4DA9(iLocal_48, unk_0x9B0761B4C3EB8BC7())) || (func_67(iLocal_48, &uLocal_58, &iLocal_59, 0, 0, 1077936128, 0) && unk_0xD5E14AF69C7C4DA9(iLocal_48, unk_0x9B0761B4C3EB8BC7()))) || (func_66(1) && unk_0xD5E14AF69C7C4DA9(iLocal_48, unk_0x9B0761B4C3EB8BC7()))) || func_64()) || func_63()) || func_4()) || func_62()) || unk_0xCED6B5226244381C(iLocal_48)) || func_61()) || func_60()) || func_58(iLocal_48))
	{
		if (!unk_0x050DC9AD2DB177D0(unk_0x9B0761B4C3EB8BC7()))
		{
			if (!unk_0x37BCA35686C6B213(iLocal_48, joaat("weapon_stungun"), 0))
			{
				if (!unk_0x5AEB5DDFFAD43CA5(iLocal_49))
				{
					if (!unk_0xCED6B5226244381C(iLocal_48))
					{
						iLocal_63 = unk_0xF341A134A5B8D4F6(Local_66, Local_67, 2);
						unk_0x81493F39713559B1(iLocal_63, false);
						unk_0xDFDB9C533700BC17(iLocal_49, iLocal_63, sLocal_99, "girl_girl_shot", 4f, -4f, 5, 0, 1148846080, 0);
						unk_0xDFDB9C533700BC17(iLocal_48, iLocal_63, sLocal_99, "villian_girl_shot", 4f, -4f, 5, 0, 1148846080, 0);
						unk_0xCBA6B2B569DCAFD8(iLocal_49, true);
						unk_0x4478D8ED4673EF14(iLocal_49, 0);
					}
				}
				if (!unk_0x5AEB5DDFFAD43CA5(iLocal_50))
				{
					unk_0x4478D8ED4673EF14(iLocal_50, 1);
				}
				bLocal_68 = true;
			}
			else
			{
				unk_0x697DA7132EE43ABC(iLocal_48, 50, 0);
			}
		}
	}
	else if (timera() > 6000)
	{
		if ((unk_0x2311EB213A0CB707(unk_0x460153A63B9477BC(), iLocal_48) && unk_0xD5E14AF69C7C4DA9(iLocal_48, unk_0x9B0761B4C3EB8BC7())) || (unk_0x5E5402F6D3B26AFB(unk_0x460153A63B9477BC(), iLocal_48) && unk_0xD5E14AF69C7C4DA9(iLocal_48, unk_0x9B0761B4C3EB8BC7())))
		{
			if (unk_0x8F678487EEBD8CE4(iLocal_53))
			{
				unk_0x3DBD102E8C35EA16(iLocal_53, true);
			}
			if (!iLocal_72)
			{
				if (!unk_0x1037B9D45CE6B788(unk_0x9B0761B4C3EB8BC7(), -91.30704f, 6391.854f, 30.6403f, -102.5595f, 6403.103f, 32.45444f, 8.5f, 0, true, 0))
				{
					if (func_5(&Local_93, "RERHOAU", sLocal_83, 4, 0, 0, 0))
					{
						iLocal_59 = 24000;
					}
					settimera(0);
					iLocal_72 = 1;
				}
			}
		}
		else if (unk_0xF005CCA4263DF67F(sLocal_84, "NULL"))
		{
			switch (unk_0x344C570D6F8700DF(0, 10))
			{
				case 6:
				case 5:
				case 4:
				case 3:
				case 0:
				case 9:
				case 8:
				case 7:
				case 1:
					if (iLocal_89)
					{
						sLocal_84 = "RERHO_HELP";
						iLocal_89 = 0;
					}
					else
					{
						sLocal_84 = "RERHO_RANT";
						iLocal_89 = 1;
					}
					break;
				
				case 2:
					sLocal_84 = "RERHO_SCREAM";
					break;
			}
		}
		else if (func_5(&Local_93, "RERHOAU", sLocal_84, 4, iLocal_98, 0, 0))
		{
			settimera(0);
		}
	}
	else
	{
		sLocal_84 = "NULL";
	}
}

int func_58(int iParam0)
{
	int iVar0;
	bool bVar1;
	
	bVar1 = false;
	if (!unk_0xAE06B9E39EBDE049(iParam0))
	{
		return 0;
	}
	if (unk_0x5AEB5DDFFAD43CA5(iParam0))
	{
		return 0;
	}
	unk_0x1386E5E658CE3032(unk_0x9B0761B4C3EB8BC7(), &iVar0, 1);
	if (unk_0x0BCEF4D1482DACD2(unk_0x9B0761B4C3EB8BC7(), iVar0, joaat("component_at_ar_flsh")))
	{
		if (unk_0xB27DE960263049E4(unk_0x9B0761B4C3EB8BC7(), iVar0, joaat("component_at_ar_flsh")))
		{
			bVar1 = true;
		}
	}
	else if (unk_0x0BCEF4D1482DACD2(unk_0x9B0761B4C3EB8BC7(), iVar0, joaat("component_at_pi_flsh")))
	{
		if (unk_0xB27DE960263049E4(unk_0x9B0761B4C3EB8BC7(), iVar0, joaat("component_at_pi_flsh")))
		{
			bVar1 = true;
		}
	}
	if (bVar1)
	{
		if (unk_0x2311EB213A0CB707(unk_0x460153A63B9477BC(), iParam0) || unk_0x5E5402F6D3B26AFB(unk_0x460153A63B9477BC(), iParam0))
		{
			if (vdist(unk_0x3E4D3CCC220BDFB1(iParam0, true), func_59(unk_0x460153A63B9477BC())) < 8f)
			{
				return 1;
			}
		}
	}
	return 0;
}

Vector3 func_59(int iParam0)
{
	return unk_0x3E4D3CCC220BDFB1(unk_0x1FA7B77001D60F9D(iParam0), false);
}

int func_60()
{
	if (func_101())
	{
		if (unk_0x578C4EF320340AF7() > (iLocal_91 + 60000))
		{
			bLocal_92 = true;
			return 1;
		}
	}
	else if (unk_0x578C4EF320340AF7() > (iLocal_91 + 120000))
	{
		bLocal_92 = true;
		return 1;
	}
	return 0;
}

int func_61()
{
	float fVar0;
	var uVar1[32];
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	fVar0 = 75f;
	iVar4 = unk_0x433E7C216B9F29E0(unk_0x3E4D3CCC220BDFB1(iLocal_48, false), fVar0, fVar0, fVar0, -1);
	if (!unk_0x5AEB5DDFFAD43CA5(iVar4))
	{
		if (unk_0x36FE6D3220816ADA(iVar4) == joaat("s_f_y_cop_01") || unk_0x36FE6D3220816ADA(iVar4) == joaat("s_m_y_cop_01"))
		{
			return 1;
		}
	}
	iVar5 = unk_0x84F0027A508D7D7D(unk_0x3E4D3CCC220BDFB1(iLocal_48, false), fVar0, 0, 66561);
	if (unk_0x80FF6C016CDB0FAF(iVar5, 0))
	{
		return 1;
	}
	iVar3 = unk_0x95417ED29DDF58E6(iLocal_48, &uVar1);
	if (iVar3 > 0)
	{
		iVar2 = 0;
		while (iVar2 < iVar3)
		{
			if (unk_0x80FF6C016CDB0FAF(uVar1[iVar2], 0))
			{
				if (((unk_0x36FE6D3220816ADA(uVar1[iVar2]) == joaat("police") || unk_0x36FE6D3220816ADA(uVar1[iVar2]) == joaat("pranger")) || unk_0x36FE6D3220816ADA(uVar1[iVar2]) == joaat("sheriff")) || unk_0x36FE6D3220816ADA(uVar1[iVar2]) == joaat("sheriff2"))
				{
					return 1;
				}
			}
			iVar2++;
		}
	}
	return 0;
}

int func_62()
{
	if (unk_0x910DFF8E55ABB8EC(iLocal_48, unk_0x9B0761B4C3EB8BC7(), 2f, 2f, 1.5f, 0, 1, 0))
	{
		if (unk_0xA163F00216900D64(unk_0x460153A63B9477BC(), iLocal_48))
		{
			return 1;
		}
	}
	return 0;
}

bool func_63()
{
	bool bVar0;
	
	bVar0 = false;
	if (unk_0x47DBF174A0CB9D55(unk_0x9B0761B4C3EB8BC7(), false))
	{
		if (unk_0x36FE6D3220816ADA(unk_0xA5D5B1042E8F47BD(unk_0x9B0761B4C3EB8BC7(), false)) == joaat("bulldozer"))
		{
			if (!unk_0x5AEB5DDFFAD43CA5(iLocal_50))
			{
				if (unk_0xA65352E7FEA59881(unk_0xA5D5B1042E8F47BD(unk_0x9B0761B4C3EB8BC7(), false), iLocal_50))
				{
					bVar0 = true;
				}
			}
			if (!unk_0x5AEB5DDFFAD43CA5(iLocal_49))
			{
				if (unk_0xA65352E7FEA59881(unk_0xA5D5B1042E8F47BD(unk_0x9B0761B4C3EB8BC7(), false), iLocal_49))
				{
					bVar0 = true;
				}
			}
			if (!unk_0x5AEB5DDFFAD43CA5(iLocal_48))
			{
				if (unk_0xA65352E7FEA59881(unk_0xA5D5B1042E8F47BD(unk_0x9B0761B4C3EB8BC7(), false), iLocal_48))
				{
					bVar0 = true;
				}
			}
		}
	}
	if (bVar0)
	{
	}
	return bVar0;
}

bool func_64()
{
	bool bVar0;
	bool bVar1;
	struct<3> Var2;
	var uVar3;
	struct<2> Var4;
	float fVar5;
	float fVar6;
	int iVar7;
	int iVar8;
	
	bVar0 = false;
	bVar1 = false;
	if (unk_0x47DBF174A0CB9D55(unk_0x9B0761B4C3EB8BC7(), false))
	{
		unk_0x140662B520844E45(unk_0x36FE6D3220816ADA(unk_0xA5D5B1042E8F47BD(unk_0x9B0761B4C3EB8BC7(), false)), &uVar3, &Var4);
		fVar6 = Var4.f_1;
		if (unk_0xD3DD4CF5121550D3(unk_0xA5D5B1042E8F47BD(unk_0x9B0761B4C3EB8BC7(), false)))
		{
			if (unk_0xFF88B5221E8464D2(unk_0xA5D5B1042E8F47BD(unk_0x9B0761B4C3EB8BC7(), false), &iVar8))
			{
				unk_0x140662B520844E45(unk_0x36FE6D3220816ADA(iVar8), &uVar3, &Var4);
				fVar6 = (fVar6 + Var4.f_1);
				fVar6 = (fVar6 + 3f);
			}
		}
		if (unk_0xF3A639BEE7AADF55(unk_0x9B0761B4C3EB8BC7()) > 15f)
		{
			if (unk_0x910DFF8E55ABB8EC(unk_0x9B0761B4C3EB8BC7(), iLocal_48, (fVar6 + 17f), (fVar6 + 17f), 6f, 0, 1, 0))
			{
				bVar1 = true;
			}
		}
		else if (unk_0xF3A639BEE7AADF55(unk_0x9B0761B4C3EB8BC7()) > 10f)
		{
			if (unk_0x910DFF8E55ABB8EC(unk_0x9B0761B4C3EB8BC7(), iLocal_48, (fVar6 + 12f), (fVar6 + 12f), 6f, 0, 1, 0))
			{
				bVar1 = true;
			}
		}
		else if (unk_0xF3A639BEE7AADF55(unk_0x9B0761B4C3EB8BC7()) > 5f)
		{
			if (unk_0x910DFF8E55ABB8EC(unk_0x9B0761B4C3EB8BC7(), iLocal_48, (fVar6 + 8f), (fVar6 + 8f), 6f, 0, 1, 0))
			{
				bVar1 = true;
			}
		}
	}
	if (bVar1)
	{
		Var2 = { unk_0x3E4D3CCC220BDFB1(unk_0x9B0761B4C3EB8BC7(), true) - Local_46 };
		fVar5 = unk_0x9075769DD4F148B7(Var2.x, Var2.f_1);
		if (func_65(unk_0xA5D5B1042E8F47BD(unk_0x9B0761B4C3EB8BC7(), false), fVar5, 15f))
		{
			bVar0 = true;
		}
		Var2 = { Local_46 - unk_0x3E4D3CCC220BDFB1(unk_0x9B0761B4C3EB8BC7(), true) };
		fVar5 = unk_0x9075769DD4F148B7(Var2.x, Var2.f_1);
		if (func_65(unk_0xA5D5B1042E8F47BD(unk_0x9B0761B4C3EB8BC7(), false), fVar5, 15f))
		{
			bVar0 = true;
		}
	}
	iVar7 = unk_0xA5D3CD332CD10EE9();
	if (unk_0xAE06B9E39EBDE049(iVar7))
	{
		if (unk_0x1037B9D45CE6B788(iVar7, -91.56341f, 6391.747f, 30.6397f, -101.2611f, 6401.7f, 32.45449f, 7.5f, 0, true, 0))
		{
			bVar0 = true;
		}
	}
	if (bVar0)
	{
	}
	return bVar0;
}

int func_65(int iParam0, float fParam1, float fParam2)
{
	float fVar0;
	float fVar1;
	float fVar2;
	
	if (unk_0x80FF6C016CDB0FAF(iParam0, 0))
	{
		fVar0 = unk_0xEF7858F25585F853(iParam0);
		fVar2 = (fParam1 - fParam2);
		if (fVar2 < 0f)
		{
			fVar2 = (fVar2 + 360f);
		}
		fVar1 = (fParam1 + fParam2);
		if (fVar1 >= 360f)
		{
			fVar1 = (fVar1 - 360f);
		}
		if (fVar1 > fVar2)
		{
			if (fVar0 < fVar1 && fVar0 > fVar2)
			{
				return 1;
			}
		}
		else if (fVar0 < fVar1 || fVar0 > fVar2)
		{
			return 1;
		}
	}
	return 0;
}

int func_66(int iParam0)
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

int func_67(int iParam0, var uParam1, int iParam2, int iParam3, bool bParam4, float fParam5, int iParam6)
{
	float fVar0;
	float fVar1;
	bool bVar2;
	struct<3> Var3;
	struct<3> Var4;
	float fVar5;
	
	bVar2 = false;
	if (!unk_0xA59F96B50B97E63C(iParam0, 0) && !bParam4)
	{
		if (unk_0xEEB37DB9533AA764(iParam0))
		{
			fVar1 = fParam5;
		}
		else
		{
			fVar1 = (fParam5 + 3f);
		}
	}
	if (!unk_0xA59F96B50B97E63C(unk_0x9B0761B4C3EB8BC7(), 0))
	{
		if (!unk_0xA59F96B50B97E63C(iParam0, 0) && !bParam4)
		{
			Var3 = { unk_0x3E4D3CCC220BDFB1(unk_0x9B0761B4C3EB8BC7(), true) };
			Var4 = { unk_0x3E4D3CCC220BDFB1(iParam0, true) };
			fVar5 = vdist(Var3, Var4);
			if (!unk_0xCE990E643CD9D0E5(iParam3, 3))
			{
				if (func_73(iParam0, iParam6))
				{
					func_72("FUNC BOOL HAS_PLAYER_AGGROED_PED\n");
					func_72("	aggroReason = EAggro_Attacked\n");
					*uParam1 = 3;
					func_71(iParam0);
					return 1;
				}
			}
			if (!unk_0xCE990E643CD9D0E5(iParam3, 1))
			{
				if (fVar1 < 20f)
				{
				}
				if (unk_0xC7EB33BFDB436C87(Var4, fParam5, 1))
				{
					func_72("FUNC BOOL HAS_PLAYER_AGGROED_PED\n");
					func_72("	aggroReason = EAggro_ShotNear\n");
					*uParam1 = 1;
					func_71(iParam0);
					return 1;
				}
				if (unk_0x5AC0C31BB5BC0343(Var4 - Vector((fParam5 / 2f), (fParam5 / 2f), (fParam5 / 2f)), Var4 + Vector((fParam5 / 2f), (fParam5 / 2f), (fParam5 / 2f)), 0))
				{
					func_72("FUNC BOOL HAS_PLAYER_AGGROED_PED\n");
					func_72("	aggroReason = EAggro_ShotNear\n");
					*uParam1 = 1;
					func_71(iParam0);
					return 1;
				}
			}
			if (!unk_0xCE990E643CD9D0E5(iParam3, 2))
			{
				fVar0 = unk_0x3E6F6F6520B59CAB(unk_0x9B0761B4C3EB8BC7());
				if (fVar0 < 0f)
				{
					fVar0 = 25f;
				}
				else if (fVar0 > 25f)
				{
					fVar0 = 25f;
				}
				if (unk_0xC0A3F78AF5448915(unk_0x9B0761B4C3EB8BC7(), 6))
				{
					if (unk_0x5E5402F6D3B26AFB(unk_0x460153A63B9477BC(), iParam0) || unk_0x2311EB213A0CB707(unk_0x460153A63B9477BC(), iParam0))
					{
						if (fVar5 < fVar0)
						{
							if (unk_0xD44D03437956A1ED(iParam0, unk_0x9B0761B4C3EB8BC7(), 17))
							{
								func_72("FUNC BOOL HAS_PLAYER_AGGROED_PED\n");
								func_72("	aggro Ped knows player is pointing gun\n");
								func_68("		lockOnTimer = ", *iParam2);
								func_72("\n");
								func_68("		time since not LockedOn = ", (unk_0x578C4EF320340AF7() - iLocal_2));
								func_72("\n");
								bVar2 = true;
								if (unk_0x578C4EF320340AF7() > (iLocal_2 + *iParam2))
								{
									func_72("			aggroReason = EAggro_HostileOrEnemy\n");
									*uParam1 = 2;
									func_71(iParam0);
									return 1;
								}
							}
						}
						else
						{
							bVar2 = false;
						}
					}
					else
					{
						bVar2 = false;
					}
				}
			}
			if (!unk_0xCE990E643CD9D0E5(iParam3, 0))
			{
				if (unk_0x0F1E960B06B93848(unk_0x460153A63B9477BC(), 0))
				{
					func_72("FUNC BOOL HAS_PLAYER_AGGROED_PED\n");
					func_72("			aggroReason = EAggro_Danger\n");
					*uParam1 = 0;
					func_71(iParam0);
					return 1;
				}
			}
		}
	}
	if (!bVar2)
	{
		iLocal_2 = unk_0x578C4EF320340AF7();
	}
	return 0;
}

void func_68(char* sParam0, int iParam1)
{
	func_70(sParam0);
	func_69(iParam1);
}

void func_69(int iParam0)
{
	if (iParam0 > 0)
	{
	}
}

void func_70(char* sParam0)
{
	if (unk_0xF005CCA4263DF67F(sParam0, sParam0))
	{
	}
}

void func_71(int iParam0)
{
	unk_0xC4B63A43FAB1F06F(iParam0);
}

void func_72(char* sParam0)
{
	func_70(sParam0);
}

int func_73(int iParam0, int iParam1)
{
	if (unk_0xEEB37DB9533AA764(unk_0x9B0761B4C3EB8BC7()))
	{
		if (unk_0xCDF860E56BBCC6B4(iParam0, unk_0x9B0761B4C3EB8BC7(), 1))
		{
			return 1;
		}
	}
	else if (unk_0xCDF860E56BBCC6B4(iParam0, unk_0x9B0761B4C3EB8BC7(), 1))
	{
		if ((unk_0xB4BD22A5188A2545(iParam0) - unk_0x4F5F2FB7AE0EB7AB(iParam0)) > iParam1)
		{
			return 1;
		}
	}
	return 0;
}

void func_74()
{
	if (((unk_0x1037B9D45CE6B788(unk_0x9B0761B4C3EB8BC7(), -62.6571f, 6447.08f, 40.49928f, -153.6411f, 6354.579f, 23.99063f, 144.25f, 0, true, 0) || unk_0x9A70B1BD2A5BA09C(Local_46, 15f)) || bLocal_68) || func_4())
	{
		iLocal_53 = func_85(iLocal_48, 1, 0);
		if (unk_0x8F678487EEBD8CE4(iLocal_53))
		{
			unk_0x3DBD102E8C35EA16(iLocal_53, false);
		}
		func_75(1);
		iLocal_91 = unk_0x578C4EF320340AF7();
		unk_0x5CD631BB88EEE1D1(0);
	}
	else
	{
		func_57();
	}
}

int func_75(int iParam0)
{
	if (func_79())
	{
		Global_111848 = 1;
		Global_111845 = unk_0x578C4EF320340AF7();
		if (func_41(Global_111847))
		{
			func_76(0);
		}
		unk_0x694F632EFD1F47D0(1, "RE_TITLE");
		if (iParam0 && func_41(Global_111847))
		{
			unk_0x1D42FFF20D06E356();
		}
		return 1;
	}
	return 0;
}

void func_76(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			if (Global_111858.f_24991.f_2 < 3)
			{
				if (!unk_0x19D4274B54F9D9FA())
				{
					func_77(func_78(iParam0), -1);
					Global_111858.f_24991.f_2++;
					unk_0xBE20AB8238688965(&Global_111854, 0);
				}
			}
			break;
		
		case 1:
			if (!unk_0xCE990E643CD9D0E5(Global_111854, 1))
			{
				if (!unk_0x19D4274B54F9D9FA())
				{
					func_77(func_78(iParam0), -1);
					Global_111858.f_24991.f_3++;
					unk_0xBE20AB8238688965(&Global_111854, 1);
				}
			}
			break;
		
		case 2:
			if (!unk_0xCE990E643CD9D0E5(Global_111854, 2))
			{
				if (!unk_0x19D4274B54F9D9FA())
				{
					func_77(func_78(iParam0), -1);
					Global_111858.f_24991.f_4++;
					unk_0xBE20AB8238688965(&Global_111854, 2);
				}
			}
			break;
	}
}

void func_77(char* sParam0, int iParam1)
{
	unk_0x17751E107423AFE9(sParam0);
	unk_0x1A169149B3D18FCB(0, 0, true, iParam1);
}

char* func_78(int iParam0)
{
	char* sVar0;
	
	sVar0 = "";
	switch (iParam0)
	{
		case 0:
			sVar0 = "AM_H_REFS";
			break;
		
		case 1:
			sVar0 = "RE_FLASHBLIP";
			break;
		
		case 2:
			sVar0 = "RE_HANDOVER";
			break;
	}
	return sVar0;
}

int func_79()
{
	switch (func_80(&Global_31027, 0, 5, 0, unk_0x354AD085195C5FA6()))
	{
		case 1:
			return 1;
			break;
		
		case 0:
			return 1;
			break;
	}
	return 0;
}

int func_80(var uParam0, int iParam1, int iParam2, bool bParam3, int iParam4)
{
	int iVar0;
	
	if (iParam1 == 7)
	{
		return 0;
	}
	if (!bParam3)
	{
		if (Global_96433.f_44 == 1)
		{
			return 2;
		}
	}
	if (iParam1 == 0)
	{
		if (func_84(0))
		{
			return 0;
		}
		Global_41595++;
		*uParam0 = Global_41595;
		unk_0xBF70D1B666A353F5(unk_0x2639A2323BEA8CC6(), false);
		Global_22411.f_5 = 0;
		if (iParam2 != 5)
		{
			unk_0x09BA0099935AAA6B(8);
		}
		Global_41631 = iParam2;
		Global_41593 = *uParam0;
		Global_41594 = iParam4;
		Global_41592 = 0;
		return 1;
	}
	if (*uParam0 != -1)
	{
		if (Global_41592 > 0)
		{
			iVar0 = 0;
			iVar0 = 0;
			while (iVar0 < Global_41592)
			{
				if (Global_41598[iVar0 /*4*/] == *uParam0)
				{
					return 2;
				}
				iVar0++;
			}
		}
		else if (Global_41593 == *uParam0)
		{
			return 1;
		}
		*uParam0 = -1;
	}
	if (*uParam0 == -1)
	{
		if (!func_82(iParam2))
		{
			return 0;
		}
		if (Global_41592 == 8)
		{
			return 0;
		}
		Global_41595++;
		*uParam0 = Global_41595;
		Global_41598[Global_41592 /*4*/] = Global_41595;
		Global_41598[Global_41592 /*4*/].f_1 = iParam1;
		Global_41598[Global_41592 /*4*/].f_2 = iParam2;
		Global_41598[Global_41592 /*4*/].f_3 = 0;
		Global_41592++;
		if (iParam4 != 0)
		{
			func_81(uParam0, iParam4);
		}
	}
	return 2;
}

void func_81(var uParam0, int iParam1)
{
	int iVar0;
	
	if (Global_41592 == 0)
	{
		return;
	}
	if (*uParam0 == -1)
	{
		return;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_41592)
	{
		if (Global_41598[iVar0 /*4*/] == *uParam0)
		{
			Global_41598[iVar0 /*4*/].f_3 = iParam1;
		}
		iVar0++;
	}
	*uParam0 = -1;
}

bool func_82(int iParam0)
{
	return func_83(iParam0, Global_41631);
}

int func_83(int iParam0, int iParam1)
{
	if (iParam1 == 15)
	{
		return 1;
	}
	if (iParam0 == 15)
	{
		return 0;
	}
	switch (iParam0)
	{
		case 16:
			switch (iParam1)
			{
				case 9:
				case 10:
				case 7:
				case 13:
				case 14:
					return 0;
					break;
			}
			return 1;
			break;
		
		case 0:
			switch (iParam1)
			{
				case 5:
				case 17:
					return 1;
					break;
			}
			break;
		
		case 2:
		case 3:
			switch (iParam1)
			{
				case 5:
				case 6:
				case 8:
				case 17:
					return 1;
					break;
			}
			break;
		
		case 4:
			if (iParam1 == 17)
			{
				return 1;
			}
			break;
		
		case 5:
			break;
		
		case 6:
		case 8:
			if (iParam1 == 5)
			{
				return 1;
			}
			break;
		
		case 7:
			if (iParam1 == 6)
			{
				return 1;
			}
			break;
		
		case 9:
			if (iParam1 == 5)
			{
				return 1;
			}
			break;
		
		case 10:
			switch (iParam1)
			{
				case 5:
				case 6:
				case 17:
					return 1;
					break;
			}
			break;
		
		case 11:
			if (iParam1 == 5)
			{
				return 1;
			}
			break;
		
		case 17:
			switch (iParam1)
			{
				case 17:
				case 12:
				case 5:
					return 1;
					break;
			}
			break;
		
		case 18:
		case 12:
			switch (iParam1)
			{
				case 5:
				case 6:
				case 8:
					return 1;
					break;
			}
			break;
		
		case 13:
			switch (iParam1)
			{
				case 5:
					return 1;
					break;
			}
			break;
		
		case 14:
			switch (iParam1)
			{
				case 5:
					return 1;
					break;
			}
			break;
	}
	return 0;
}

int func_84(int iParam0)
{
	if (Global_41631 == 15)
	{
		return 0;
	}
	if (func_82(iParam0))
	{
		return 0;
	}
	return 1;
}

int func_85(int iParam0, bool bParam1, int iParam2)
{
	iParam2 = iParam2;
	return func_86(iParam0, bParam1, 145);
}

int func_86(int iParam0, bool bParam1, int iParam2)
{
	int iVar0;
	
	iVar0 = func_87(iParam0, !bParam1, 0);
	if ((iParam2 != 145 && unk_0x8F678487EEBD8CE4(iVar0)) && unk_0x3030AE9FCF1BC243(&(Global_1848[iParam2 /*29*/].f_3)))
	{
		unk_0xB023F5C66F5716C7(iVar0, &(Global_1848[iParam2 /*29*/].f_3));
	}
	return iVar0;
}

int func_87(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	
	if (!unk_0xAE06B9E39EBDE049(iParam0))
	{
		return 0;
	}
	iVar0 = unk_0x2BE000892D65EA2A(iParam0);
	if (unk_0x20F7576FDB52E2B0(iParam0))
	{
		unk_0xFA81E0FBD7F5ACA0(iVar0, func_88(unk_0x25DDB354A40FFCDB(), 1f, 1f));
		if (!bParam2)
		{
			unk_0x3060C53EAE54BBE7(iVar0, bParam1);
		}
		else
		{
			unk_0xECC9A00CF1181EC2(iVar0, 2);
		}
	}
	else if (unk_0xA1914E72A0EB31D0(iParam0))
	{
		unk_0xFA81E0FBD7F5ACA0(iVar0, func_88(unk_0x25DDB354A40FFCDB(), 0.7f, 0.7f));
		unk_0x3060C53EAE54BBE7(iVar0, bParam1);
	}
	else if (unk_0x49116E591C7E1412(iParam0))
	{
		unk_0xFA81E0FBD7F5ACA0(iVar0, func_88(unk_0x25DDB354A40FFCDB(), 0.7f, 0.7f));
	}
	return iVar0;
}

float func_88(bool bParam0, float fParam1, float fParam2)
{
	if (bParam0)
	{
		return fParam1;
	}
	return fParam2;
}

int func_89()
{
	if (!func_82(5))
	{
		return 1;
	}
	if (func_97())
	{
		return 1;
	}
	if (!unk_0x5AEB5DDFFAD43CA5(unk_0x9B0761B4C3EB8BC7()))
	{
		if (vmag2(unk_0x97C0B1E5FCD8E08A(unk_0x9B0761B4C3EB8BC7())) > 1369f && !func_96())
		{
			return 0;
		}
	}
	if (func_90(100f, 1) != -1)
	{
		return 1;
	}
	return 0;
}

int func_90(float fParam0, bool bParam1)
{
	struct<27> Var0;
	int iVar1;
	int iVar2;
	float fVar3;
	float fVar4;
	int iVar5;
	int iVar6;
	bool bVar7;
	
	iVar2 = -1;
	fVar3 = fParam0;
	if (unk_0x5A228A6A51E757C8(unk_0x460153A63B9477BC()))
	{
		if (func_19(func_17()))
		{
			iVar5 = func_46();
			iVar6 = 0;
			iVar6 = 0;
			while (iVar6 < 63)
			{
				iVar1 = iVar6;
				if (unk_0xCE990E643CD9D0E5(Global_111858.f_18570[iVar1 /*6*/], 2) && !unk_0xCE990E643CD9D0E5(Global_111858.f_18570[iVar1 /*6*/], 3))
				{
					func_91(iVar1, &Var0);
					fVar4 = unk_0x272784C60C397DB6(unk_0x3E4D3CCC220BDFB1(unk_0x9B0761B4C3EB8BC7(), false), Var0.f_6, true);
					if (fVar4 < fVar3)
					{
						bVar7 = true;
						if (bParam1)
						{
							if (iVar5 != Var0.f_26)
							{
								bVar7 = false;
							}
						}
						if (bVar7)
						{
							iVar2 = iVar1;
							fVar3 = fVar4;
						}
					}
				}
				iVar6++;
			}
		}
	}
	return iVar2;
}

void func_91(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case 0:
			func_92(uParam1, "Abigail1", func_94(iParam0), 0, 0, 4, -1604.668f, 5239.1f, 3.01f, 66, "", 109, 0, "ambient_Diving", 0, 0, 1, 4, 1, 0, 2359, func_93(iParam0), 1, 0);
			break;
		
		case 1:
			func_92(uParam1, "Abigail2", func_94(iParam0), 0, 0, 4, -1592.84f, 5214.04f, 3.01f, 400, "", 110, 0, "", 0, 0, -1, 4, 1, 0, 2359, func_93(iParam0), 1, 0);
			break;
		
		case 2:
			func_92(uParam1, "Barry1", func_94(iParam0), 0, 1, 4, 190.26f, -956.35f, 29.63f, 381, "", 74, 0, "", 0, 1, -1, 4, 1, 0, 2359, func_93(iParam0), 1, 0);
			break;
		
		case 3:
			func_92(uParam1, "Barry2", func_94(iParam0), 0, 1, 4, 190.26f, -956.35f, 29.63f, 381, "", -1, 0, "", 0, 1, -1, 4, 4, 0, 2359, func_93(iParam0), 1, 1);
			break;
		
		case 4:
			func_92(uParam1, "Barry3", func_94(iParam0), 0, 1, 4, 414f, -761f, 29f, 381, "", -1, 0, "", 164, 1, -1, 0, 2, 0, 2359, func_93(iParam0), 0, 0);
			break;
		
		case 5:
			func_92(uParam1, "Barry3A", func_94(iParam0), 1, 1, 0, 1199.27f, -1255.63f, 34.23f, 381, "BARSTASH", 84, 0, "", 166, 0, 7, 4, 2, 0, 2359, func_93(iParam0), 0, 1);
			break;
		
		case 6:
			func_92(uParam1, "Barry3C", func_94(iParam0), 3, 1, 0, -468.9f, -1713.06f, 18.21f, 381, "", 84, 0, "", 166, 0, 7, 4, 2, 0, 2359, func_93(iParam0), 0, 1);
			break;
		
		case 7:
			func_92(uParam1, "Barry4", func_94(iParam0), 0, 1, 4, 237.65f, -385.41f, 44.4f, 381, "", 85, 0, "postRC_Barry4", 0, 0, -1, 4, 2, 800, 2000, func_93(iParam0), 0, 0);
			break;
		
		case 8:
			func_92(uParam1, "Dreyfuss1", func_94(iParam0), 0, 2, 4, -1458.97f, 485.99f, 115.38f, 66, "LETTERS_HINT", 106, 0, "", 0, 0, -1, 4, 2, 0, 2359, func_93(iParam0), 0, 0);
			break;
		
		case 9:
			func_92(uParam1, "Epsilon1", func_94(iParam0), 0, 3, 4, -1622.89f, 4204.87f, 83.3f, 66, "", 86, 0, "", 0, 1, 10, 4, 1, 0, 2359, func_93(iParam0), 0, 0);
			break;
		
		case 10:
			func_92(uParam1, "Epsilon2", func_94(iParam0), 0, 3, 4, 242.7f, 362.7f, 104.74f, 206, "", 87, 16, "", 0, 0, 11, 4, 1, 0, 2359, func_93(iParam0), 1, 0);
			break;
		
		case 11:
			func_92(uParam1, "Epsilon3", func_94(iParam0), 0, 3, 4, 1835.53f, 4705.86f, 38.1f, 206, "", 88, 16, "epsCars", 0, 0, 12, 4, 1, 0, 2359, func_93(iParam0), 0, 0);
			break;
		
		case 12:
			func_92(uParam1, "Epsilon4", func_94(iParam0), 0, 3, 4, 1826.13f, 4698.88f, 38.92f, 206, "", 90, 16, "postRC_Epsilon4", 0, 0, 13, 4, 1, 0, 2359, func_93(iParam0), 0, 0);
			break;
		
		case 13:
			func_92(uParam1, "Epsilon5", func_94(iParam0), 0, 3, 4, 637.02f, 119.7093f, 89.5f, 206, "", 89, 16, "epsRobes", 0, 0, 14, 4, 1, 0, 2359, func_93(iParam0), 1, 0);
			break;
		
		case 14:
			func_92(uParam1, "Epsilon6", func_94(iParam0), 0, 3, 4, -2892.93f, 3192.37f, 11.66f, 206, "", 93, 0, "", 0, 0, 15, 4, 1, 0, 2359, func_93(iParam0), 0, 1);
			break;
		
		case 15:
			func_92(uParam1, "Epsilon7", func_94(iParam0), 0, 3, 4, 524.43f, 3079.82f, 39.48f, 206, "", -1, 16, "epsDesert", 0, 0, 16, 4, 1, 0, 2359, func_93(iParam0), 0, 0);
			break;
		
		case 16:
			func_92(uParam1, "Epsilon8", func_94(iParam0), 0, 3, 4, -697.75f, 45.38f, 43.03f, 206, "", 94, 16, "epsilonTract", 0, 0, -1, 4, 1, 0, 2359, func_93(iParam0), 1, 0);
			break;
		
		case 17:
			func_92(uParam1, "Extreme1", func_94(iParam0), 0, 4, 4, -188.22f, 1296.1f, 302.86f, 66, "", -1, 0, "", 4, 1, 18, 4, 2, 0, 2359, func_93(iParam0), 0, 1);
			break;
		
		case 18:
			func_92(uParam1, "Extreme2", func_94(iParam0), 0, 4, 4, -954.19f, -2760.05f, 14.64f, 382, "", 96, 0, "", 171, 0, 19, 4, 2, 0, 2359, func_93(iParam0), 0, 1);
			break;
		
		case 19:
			func_92(uParam1, "Extreme3", func_94(iParam0), 0, 4, 4, -63.8f, -809.5f, 321.8f, 382, "", 97, 0, "", 0, 0, 20, 4, 2, 0, 2359, func_93(iParam0), 0, 1);
			break;
		
		case 20:
			func_92(uParam1, "Extreme4", func_94(iParam0), 0, 4, 4, 1731.41f, 96.96f, 170.39f, 382, "", 98, 16, "", 0, 0, -1, 4, 2, 0, 2359, func_93(iParam0), 0, 0);
			break;
		
		case 21:
			func_92(uParam1, "Fanatic1", func_94(iParam0), 0, 5, 4, -1877.82f, -440.649f, 45.05f, 405, "", 74, 0, "", 0, 1, -1, 4, 1, 700, 2000, func_93(iParam0), 1, 0);
			break;
		
		case 22:
			func_92(uParam1, "Fanatic2", func_94(iParam0), 0, 5, 4, 809.66f, 1279.76f, 360.49f, 405, "", -1, 0, "", 0, 1, -1, 4, 4, 700, 2000, func_93(iParam0), 1, 0);
			break;
		
		case 23:
			func_92(uParam1, "Fanatic3", func_94(iParam0), 0, 5, 4, -915.6f, 6139.2f, 5.5f, 405, "", -1, 0, "", 0, 1, -1, 4, 2, 700, 2000, func_93(iParam0), 0, 1);
			break;
		
		case 24:
			func_92(uParam1, "Hao1", func_94(iParam0), 0, 6, 4, -72.29f, -1260.63f, 28.14f, 66, "", -1, 0, "controller_Races", 13, 1, -1, 4, 2, 2000, 500, func_93(iParam0), 0, 1);
			break;
		
		case 25:
			func_92(uParam1, "Hunting1", func_94(iParam0), 0, 7, 4, 1804.32f, 3931.33f, 32.82f, 66, "", -1, 0, "", 174, 1, 26, 4, 4, 0, 2359, func_93(iParam0), 0, 1);
			break;
		
		case 26:
			func_92(uParam1, "Hunting2", func_94(iParam0), 0, 7, 4, -684.17f, 5839.16f, 16.09f, 384, "", 99, 0, "", 7, 0, -1, 4, 4, 0, 2359, func_93(iParam0), 0, 1);
			break;
		
		case 27:
			func_92(uParam1, "Josh1", func_94(iParam0), 0, 8, 4, -1104.93f, 291.25f, 64.3f, 66, "", -1, 0, "forSaleSigns", 0, 1, 28, 4, 4, 0, 2359, func_93(iParam0), 1, 0);
			break;
		
		case 28:
			func_92(uParam1, "Josh2", func_94(iParam0), 0, 8, 4, 565.39f, -1772.88f, 29.77f, 385, "", 105, 0, "", 0, 0, 29, 4, 4, 0, 2359, func_93(iParam0), 1, 1);
			break;
		
		case 29:
			func_92(uParam1, "Josh3", func_94(iParam0), 0, 8, 4, 565.39f, -1772.88f, 29.77f, 385, "", -1, 16, "", 0, 0, 30, 4, 4, 0, 2359, func_93(iParam0), 1, 1);
			break;
		
		case 30:
			func_92(uParam1, "Josh4", func_94(iParam0), 0, 8, 4, -1104.93f, 291.25f, 64.3f, 385, "", -1, 36, "", 0, 0, -1, 4, 4, 0, 2359, func_93(iParam0), 1, 0);
			break;
		
		case 31:
			func_92(uParam1, "Maude1", func_94(iParam0), 0, 9, 4, 2726.1f, 4145f, 44.3f, 66, "", -1, 0, "BailBond_Launcher", 0, 1, -1, 4, 4, 0, 2359, func_93(iParam0), 0, 1);
			break;
		
		case 32:
			func_92(uParam1, "Minute1", func_94(iParam0), 0, 10, 4, 327.85f, 3405.7f, 35.73f, 66, "", -1, 0, "", 0, 1, 33, 4, 4, 0, 2359, func_93(iParam0), 0, 1);
			break;
		
		case 33:
			func_92(uParam1, "Minute2", func_94(iParam0), 0, 10, 4, 18f, 4527f, 105f, 386, "", -1, 10, "", 0, 0, 34, 4, 4, 0, 2359, func_93(iParam0), 0, 1);
			break;
		
		case 34:
			func_92(uParam1, "Minute3", func_94(iParam0), 0, 10, 4, -303.82f, 6211.29f, 31.05f, 386, "", -1, 10, "", 0, 0, -1, 4, 4, 0, 2359, func_93(iParam0), 0, 1);
			break;
		
		case 35:
			func_92(uParam1, "MrsPhilips1", func_94(iParam0), 0, 11, 4, 1972.59f, 3816.43f, 32.42f, 66, "", -1, 0, "ambient_MrsPhilips", 0, 1, -1, 4, 4, 0, 2359, func_93(iParam0), 0, 0);
			break;
		
		case 36:
			func_92(uParam1, "MrsPhilips2", func_94(iParam0), 0, 11, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 0, 1, -1, 4, 4, 0, 2359, func_93(iParam0), 0, 0);
			break;
		
		case 37:
			func_92(uParam1, "Nigel1", func_94(iParam0), 0, 12, 4, -1097.16f, 790.01f, 164.52f, 66, "", -1, 0, "", 177, 1, -1, 1, 4, 0, 2359, func_93(iParam0), 1, 0);
			break;
		
		case 38:
			func_92(uParam1, "Nigel1A", func_94(iParam0), 0, 12, 1, -558.65f, 284.49f, 90.86f, 149, "NIGITEMS", 100, 0, "", 0, 0, 42, 4, 4, 0, 2359, func_93(iParam0), 1, 1);
			break;
		
		case 39:
			func_92(uParam1, "Nigel1B", func_94(iParam0), 0, 12, 1, -1034.15f, 366.08f, 80.11f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_93(iParam0), 1, 1);
			break;
		
		case 40:
			func_92(uParam1, "Nigel1C", func_94(iParam0), 0, 12, 1, -623.91f, -266.17f, 37.76f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_93(iParam0), 1, 1);
			break;
		
		case 41:
			func_92(uParam1, "Nigel1D", func_94(iParam0), 0, 12, 1, -1096.85f, 67.68f, 52.95f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_93(iParam0), 1, 1);
			break;
		
		case 42:
			func_92(uParam1, "Nigel2", func_94(iParam0), 0, 12, 4, -1310.7f, -640.22f, 26.54f, 149, "", -1, 8, "", 0, 0, 43, 4, 4, 0, 2359, func_93(iParam0), 1, 1);
			break;
		
		case 43:
			func_92(uParam1, "Nigel3", func_94(iParam0), 0, 12, 4, -44.75f, -1288.67f, 28.21f, 149, "", -1, 16, "postRC_Nigel3", 0, 0, -1, 4, 4, 0, 2359, func_93(iParam0), 1, 1);
			break;
		
		case 44:
			func_92(uParam1, "Omega1", func_94(iParam0), 0, 13, 4, 2468.51f, 3437.39f, 49.9f, 66, "", -1, 0, "spaceshipParts", 0, 1, 45, 4, 2, 0, 2359, func_93(iParam0), 0, 0);
			break;
		
		case 45:
			func_92(uParam1, "Omega2", func_94(iParam0), 0, 13, 4, 2319.44f, 2583.58f, 46.76f, 387, "", 107, 0, "", 0, 0, -1, 4, 2, 0, 2359, func_93(iParam0), 0, 0);
			break;
		
		case 46:
			func_92(uParam1, "Paparazzo1", func_94(iParam0), 0, 14, 4, -149.75f, 285.81f, 93.67f, 66, "", -1, 0, "", 0, 1, 47, 4, 2, 0, 2359, func_93(iParam0), 0, 1);
			break;
		
		case 47:
			func_92(uParam1, "Paparazzo2", func_94(iParam0), 0, 14, 4, -70.71f, 301.43f, 106.79f, 389, "", -1, 8, "", 0, 0, 48, 4, 2, 0, 2359, func_93(iParam0), 0, 1);
			break;
		
		case 48:
			func_92(uParam1, "Paparazzo3", func_94(iParam0), 0, 14, 4, -257.22f, 292.85f, 90.63f, 389, "", -1, 8, "", 183, 1, -1, 2, 2, 0, 2359, func_93(iParam0), 0, 0);
			break;
		
		case 49:
			func_92(uParam1, "Paparazzo3A", func_94(iParam0), 0, 14, 2, 305.52f, 157.19f, 102.94f, 389, "PAPPHOTO", 102, 0, "", 0, 0, 51, 4, 2, 0, 2359, func_93(iParam0), 0, 1);
			break;
		
		case 50:
			func_92(uParam1, "Paparazzo3B", func_94(iParam0), 0, 14, 2, 1040.96f, -534.42f, 60.17f, 389, "", 102, 0, "", 0, 0, 51, 4, 2, 0, 2359, func_93(iParam0), 0, 1);
			break;
		
		case 51:
			func_92(uParam1, "Paparazzo4", func_94(iParam0), 0, 14, 4, -484.2f, 229.68f, 82.21f, 389, "", -1, 8, "", 0, 1, -1, 4, 2, 0, 2359, func_93(iParam0), 0, 0);
			break;
		
		case 52:
			func_92(uParam1, "Rampage1", func_94(iParam0), 0, 15, 4, 908f, 3643.7f, 32.2f, 66, "", -1, 0, "", 0, 1, 54, 4, 4, 0, 2359, func_93(iParam0), 0, 0);
			break;
		
		case 54:
			func_92(uParam1, "Rampage3", func_94(iParam0), 0, 15, 4, 465.1f, -1849.3f, 27.8f, 84, "", -1, 0, "", 0, 1, 55, 4, 4, 0, 2359, func_93(iParam0), 1, 0);
			break;
		
		case 55:
			func_92(uParam1, "Rampage4", func_94(iParam0), 0, 15, 4, -161f, -1669.7f, 33f, 84, "", -1, 0, "", 0, 0, 56, 4, 4, 0, 2359, func_93(iParam0), 1, 0);
			break;
		
		case 56:
			func_92(uParam1, "Rampage5", func_94(iParam0), 0, 15, 4, -1298.2f, 2504.14f, 21.09f, 84, "", -1, 0, "", 0, 0, 53, 4, 4, 0, 2359, func_93(iParam0), 0, 0);
			break;
		
		case 53:
			func_92(uParam1, "Rampage2", func_94(iParam0), 0, 15, 4, 1181.5f, -400.1f, 67.5f, 84, "", -1, 0, "rampage_controller", 0, 0, -1, 4, 4, 0, 2359, func_93(iParam0), 1, 0);
			break;
		
		case 57:
			func_92(uParam1, "TheLastOne", func_94(iParam0), 0, 16, 4, -1298.98f, 4640.16f, 105.67f, 66, "", 133, 1, "", 0, 1, -1, 4, 2, 0, 2359, func_93(iParam0), 0, 1);
			break;
		
		case 58:
			func_92(uParam1, "Tonya1", func_94(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 66, "AM_H_RCFS", -1, 0, "ambient_TonyaCall", 24, 1, 59, 4, 2, 0, 2359, func_93(iParam0), 0, 1);
			break;
		
		case 59:
			func_92(uParam1, "Tonya2", func_94(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 388, "", -1, 48, "ambient_Tonya", 185, 0, 60, 4, 2, 0, 2359, func_93(iParam0), 0, 1);
			break;
		
		case 60:
			func_92(uParam1, "Tonya3", func_94(iParam0), 0, 17, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 187, 0, 61, 4, 2, 0, 2359, func_93(iParam0), 0, 1);
			break;
		
		case 61:
			func_92(uParam1, "Tonya4", func_94(iParam0), 0, 17, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 0, 0, 62, 4, 2, 0, 2359, func_93(iParam0), 0, 1);
			break;
		
		case 62:
			func_92(uParam1, "Tonya5", func_94(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 388, "", -1, 48, "", 0, 0, -1, 4, 2, 0, 2359, func_93(iParam0), 0, 1);
			break;
		
		default:
			break;
	}
}

void func_92(var uParam0, char* sParam1, struct<2> Param2, int iParam3, int iParam4, int iParam5, struct<3> Param6, int iParam7, char* sParam8, int iParam9, int iParam10, char* sParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17, int iParam18, var uParam19, int iParam20, int iParam21)
{
	uParam0->f_4 = iParam4;
	*uParam0 = sParam1;
	uParam0->f_1 = { Param2 };
	uParam0->f_3 = iParam3;
	uParam0->f_5 = iParam5;
	uParam0->f_6 = { Param6 };
	uParam0->f_9 = iParam7;
	StringCopy(&(uParam0->f_10), sParam8, 16);
	uParam0->f_14 = iParam9;
	uParam0->f_15 = iParam10;
	StringCopy(&(uParam0->f_16), sParam11, 24);
	uParam0->f_22 = iParam12;
	uParam0->f_23 = iParam13;
	uParam0->f_24 = iParam14;
	uParam0->f_25 = iParam15;
	uParam0->f_26 = iParam16;
	uParam0->f_27 = iParam17;
	uParam0->f_28 = iParam18;
	uParam0->f_29 = uParam19;
	uParam0->f_30 = iParam20;
	uParam0->f_31 = iParam21;
}

int func_93(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 0;
			break;
		
		case 1:
			return 0;
			break;
		
		case 2:
			return 1;
			break;
		
		case 3:
			return 1;
			break;
		
		case 4:
			return 0;
			break;
		
		case 5:
			return 1;
			break;
		
		case 6:
			return 1;
			break;
		
		case 7:
			return 0;
			break;
		
		case 8:
			return 1;
			break;
		
		case 9:
			return 0;
			break;
		
		case 10:
			return 0;
			break;
		
		case 11:
			return 0;
			break;
		
		case 12:
			return 1;
			break;
		
		case 13:
			return 0;
			break;
		
		case 14:
			return 1;
			break;
		
		case 15:
			return 0;
			break;
		
		case 16:
			return 1;
			break;
		
		case 17:
			return 1;
			break;
		
		case 18:
			return 1;
			break;
		
		case 19:
			return 1;
			break;
		
		case 20:
			return 1;
			break;
		
		case 21:
			return 1;
			break;
		
		case 22:
			return 1;
			break;
		
		case 23:
			return 1;
			break;
		
		case 24:
			return 1;
			break;
		
		case 25:
			return 1;
			break;
		
		case 26:
			return 1;
			break;
		
		case 27:
			return 0;
			break;
		
		case 28:
			return 1;
			break;
		
		case 29:
			return 1;
			break;
		
		case 30:
			return 1;
			break;
		
		case 31:
			return 0;
			break;
		
		case 32:
			return 1;
			break;
		
		case 33:
			return 1;
			break;
		
		case 34:
			return 1;
			break;
		
		case 35:
			return 0;
			break;
		
		case 36:
			return 0;
			break;
		
		case 37:
			return 0;
			break;
		
		case 38:
			return 1;
			break;
		
		case 39:
			return 1;
			break;
		
		case 40:
			return 1;
			break;
		
		case 41:
			return 1;
			break;
		
		case 42:
			return 1;
			break;
		
		case 43:
			return 1;
			break;
		
		case 44:
			return 0;
			break;
		
		case 45:
			return 0;
			break;
		
		case 46:
			return 1;
			break;
		
		case 47:
			return 1;
			break;
		
		case 48:
			return 0;
			break;
		
		case 49:
			return 1;
			break;
		
		case 50:
			return 1;
			break;
		
		case 51:
			return 1;
			break;
		
		case 52:
			return 1;
			break;
		
		case 54:
			return 1;
			break;
		
		case 55:
			return 1;
			break;
		
		case 56:
			return 1;
			break;
		
		case 53:
			return 1;
			break;
		
		case 57:
			return 1;
			break;
		
		case 58:
			return 1;
			break;
		
		case 59:
			return 1;
			break;
		
		case 60:
			return 1;
			break;
		
		case 61:
			return 1;
			break;
		
		case 62:
			return 1;
			break;
		
		default:
			break;
	}
	return 0;
}

struct<2> func_94(int iParam0)
{
	struct<2> Var0;
	char[] cVar1[8];
	
	StringCopy(&Var0, "", 8);
	cVar1 = { func_95(iParam0) };
	if (unk_0x7BCC91F3C1CF24E8(&cVar1))
	{
	}
	else
	{
		StringCopy(&Var0, "RC_", 8);
		StringConCat(&Var0, &cVar1, 8);
	}
	return Var0;
}

struct<2> func_95(int iParam0)
{
	struct<2> Var0;
	
	StringCopy(&Var0, "", 8);
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var0, "ABI1", 8);
			break;
		
		case 1:
			StringCopy(&Var0, "ABI2", 8);
			break;
		
		case 2:
			StringCopy(&Var0, "BA1", 8);
			break;
		
		case 3:
			StringCopy(&Var0, "BA2", 8);
			break;
		
		case 4:
			StringCopy(&Var0, "BA3", 8);
			break;
		
		case 5:
			StringCopy(&Var0, "BA3A", 8);
			break;
		
		case 6:
			StringCopy(&Var0, "BA3C", 8);
			break;
		
		case 7:
			StringCopy(&Var0, "BA4", 8);
			break;
		
		case 8:
			StringCopy(&Var0, "DRE1", 8);
			break;
		
		case 9:
			StringCopy(&Var0, "EPS1", 8);
			break;
		
		case 10:
			StringCopy(&Var0, "EPS2", 8);
			break;
		
		case 11:
			StringCopy(&Var0, "EPS3", 8);
			break;
		
		case 12:
			StringCopy(&Var0, "EPS4", 8);
			break;
		
		case 13:
			StringCopy(&Var0, "EPS5", 8);
			break;
		
		case 14:
			StringCopy(&Var0, "EPS6", 8);
			break;
		
		case 15:
			StringCopy(&Var0, "EPS7", 8);
			break;
		
		case 16:
			StringCopy(&Var0, "EPS8", 8);
			break;
		
		case 17:
			StringCopy(&Var0, "EXT1", 8);
			break;
		
		case 18:
			StringCopy(&Var0, "EXT2", 8);
			break;
		
		case 19:
			StringCopy(&Var0, "EXT3", 8);
			break;
		
		case 20:
			StringCopy(&Var0, "EXT4", 8);
			break;
		
		case 21:
			StringCopy(&Var0, "FAN1", 8);
			break;
		
		case 22:
			StringCopy(&Var0, "FAN2", 8);
			break;
		
		case 23:
			StringCopy(&Var0, "FAN3", 8);
			break;
		
		case 24:
			StringCopy(&Var0, "HAO1", 8);
			break;
		
		case 25:
			StringCopy(&Var0, "HUN1", 8);
			break;
		
		case 26:
			StringCopy(&Var0, "HUN2", 8);
			break;
		
		case 27:
			StringCopy(&Var0, "JOS1", 8);
			break;
		
		case 28:
			StringCopy(&Var0, "JOS2", 8);
			break;
		
		case 29:
			StringCopy(&Var0, "JOS3", 8);
			break;
		
		case 30:
			StringCopy(&Var0, "JOS4", 8);
			break;
		
		case 31:
			StringCopy(&Var0, "MAU1", 8);
			break;
		
		case 32:
			StringCopy(&Var0, "MIN1", 8);
			break;
		
		case 33:
			StringCopy(&Var0, "MIN2", 8);
			break;
		
		case 34:
			StringCopy(&Var0, "MIN3", 8);
			break;
		
		case 35:
			StringCopy(&Var0, "MRS1", 8);
			break;
		
		case 36:
			StringCopy(&Var0, "MRS2", 8);
			break;
		
		case 37:
			StringCopy(&Var0, "NI1", 8);
			break;
		
		case 38:
			StringCopy(&Var0, "NI1A", 8);
			break;
		
		case 39:
			StringCopy(&Var0, "NI1B", 8);
			break;
		
		case 40:
			StringCopy(&Var0, "NI1C", 8);
			break;
		
		case 41:
			StringCopy(&Var0, "NI1D", 8);
			break;
		
		case 42:
			StringCopy(&Var0, "NI2", 8);
			break;
		
		case 43:
			StringCopy(&Var0, "NI3", 8);
			break;
		
		case 44:
			StringCopy(&Var0, "OME1", 8);
			break;
		
		case 45:
			StringCopy(&Var0, "OME2", 8);
			break;
		
		case 46:
			StringCopy(&Var0, "PA1", 8);
			break;
		
		case 47:
			StringCopy(&Var0, "PA2", 8);
			break;
		
		case 48:
			StringCopy(&Var0, "PA3", 8);
			break;
		
		case 49:
			StringCopy(&Var0, "PA3A", 8);
			break;
		
		case 50:
			StringCopy(&Var0, "PA3B", 8);
			break;
		
		case 51:
			StringCopy(&Var0, "PA4", 8);
			break;
		
		case 52:
			StringCopy(&Var0, "RAM1", 8);
			break;
		
		case 53:
			StringCopy(&Var0, "RAM2", 8);
			break;
		
		case 54:
			StringCopy(&Var0, "RAM3", 8);
			break;
		
		case 55:
			StringCopy(&Var0, "RAM4", 8);
			break;
		
		case 56:
			StringCopy(&Var0, "RAM5", 8);
			break;
		
		case 57:
			StringCopy(&Var0, "SAS1", 8);
			break;
		
		case 58:
			StringCopy(&Var0, "TON1", 8);
			break;
		
		case 59:
			StringCopy(&Var0, "TON2", 8);
			break;
		
		case 60:
			StringCopy(&Var0, "TON3", 8);
			break;
		
		case 61:
			StringCopy(&Var0, "TON4", 8);
			break;
		
		case 62:
			StringCopy(&Var0, "TON5", 8);
			break;
		
		default:
			break;
	}
	return Var0;
}

int func_96()
{
	if (unk_0xF8EDFF98A9C94C74())
	{
		if (unk_0xC047A11F7A99E6B4() == 1f)
		{
			return 1;
		}
	}
	return 0;
}

int func_97()
{
	if (func_100() && !func_96())
	{
		return 1;
	}
	if (func_99() && func_98())
	{
		return 1;
	}
	return 0;
}

bool func_98()
{
	return Global_111576 > 0;
}

int func_99()
{
	if (Global_95877 != -1)
	{
		return 1;
	}
	return 0;
}

int func_100()
{
	if (Global_95877 != -1)
	{
		return unk_0xCE990E643CD9D0E5(Global_89743[Global_95877 /*34*/].f_15, 20);
	}
	return 0;
}

int func_101()
{
	if ((Global_111847 == func_50() && unk_0xA706863F1E1DD66C()) && Global_111848)
	{
		return 1;
	}
	return 0;
}

void func_102()
{
	if (unk_0x8F678487EEBD8CE4(iLocal_53))
	{
		unk_0x3DBD102E8C35EA16(iLocal_53, true);
	}
	if (!unk_0x5AEB5DDFFAD43CA5(iLocal_48))
	{
		unk_0x8342E6CB98CD545C(iLocal_48, 156, true);
		if (unk_0xFC5D6FB6EECB392F(iLocal_63))
		{
			if (unk_0x369E69441C066912(iLocal_63) > 0.1f)
			{
				if (!iLocal_74)
				{
					if (!unk_0x5AEB5DDFFAD43CA5(iLocal_49))
					{
						unk_0x1DFF2E67986BC99E(iLocal_48, unk_0x1D5C49FCA9BC5B02(iLocal_49, 31086, 0f, 0f, -0.1f), 0);
					}
					iLocal_74 = 1;
					iLocal_72 = 1;
					func_103();
				}
			}
		}
		else if (!unk_0x5AEB5DDFFAD43CA5(iLocal_49))
		{
			unk_0x4478D8ED4673EF14(iLocal_49, 1);
			unk_0x697DA7132EE43ABC(iLocal_49, 0, 0);
		}
		if (unk_0xFC5D6FB6EECB392F(iLocal_63))
		{
			if (unk_0x369E69441C066912(iLocal_63) > 0.6f)
			{
				func_103();
			}
		}
		else if (!unk_0x5AEB5DDFFAD43CA5(iLocal_49))
		{
			unk_0x4478D8ED4673EF14(iLocal_49, 1);
			unk_0x697DA7132EE43ABC(iLocal_49, 0, 0);
		}
		if (unk_0xFC5D6FB6EECB392F(iLocal_63))
		{
			if (unk_0x369E69441C066912(iLocal_63) == 1f)
			{
				if (!unk_0x5AEB5DDFFAD43CA5(iLocal_49))
				{
					unk_0x4478D8ED4673EF14(iLocal_49, 1);
					unk_0x697DA7132EE43ABC(iLocal_49, 0, 0);
				}
			}
		}
		else
		{
			if (!unk_0x5AEB5DDFFAD43CA5(iLocal_49))
			{
				unk_0x4478D8ED4673EF14(iLocal_49, 1);
				unk_0x697DA7132EE43ABC(iLocal_49, 0, 0);
			}
			func_103();
		}
	}
}

void func_103()
{
	if (!iLocal_75)
	{
		if (!unk_0x5AEB5DDFFAD43CA5(iLocal_48))
		{
			unk_0x9B94F6169B0DAEFD(iLocal_48);
			unk_0xEFBCE8F8316F89EA(5, iLocal_56, iLocal_55);
			unk_0xEFBCE8F8316F89EA(5, iLocal_55, iLocal_56);
			unk_0xEFBCE8F8316F89EA(0, iLocal_57, iLocal_55);
			unk_0xEFBCE8F8316F89EA(2, iLocal_57, iLocal_56);
			unk_0xEFBCE8F8316F89EA(2, iLocal_56, iLocal_57);
			if (unk_0x910DFF8E55ABB8EC(iLocal_48, unk_0x9B0761B4C3EB8BC7(), 50f, 50f, 50f, 0, 1, 0))
			{
				unk_0x8FF9CE1C0F94F59A(iLocal_48, unk_0x9B0761B4C3EB8BC7(), 0, 16);
				unk_0x38CCFC7E1952A745(iLocal_48, 1);
			}
			else
			{
				unk_0x8B18A80E8EB15510(iLocal_48, unk_0x9B0761B4C3EB8BC7(), 200f, -1, 0, 0);
			}
			unk_0xCBA6B2B569DCAFD8(iLocal_48, true);
			func_5(&Local_93, "RERHOAU", "RERHO_DIE", 4, 0, 0, 0);
			iLocal_75 = 1;
		}
	}
}

void func_104()
{
	if (bLocal_90)
	{
		unk_0x4E65320BC9AD521C(iLocal_50, false);
		unk_0xD66FADEF7D42D49B(iLocal_50, Local_46, 50f, -1, 0, 0);
		unk_0xCBA6B2B569DCAFD8(iLocal_50, true);
		unk_0x2481907DEE6B85EA(&iLocal_50);
		func_54();
	}
}

void func_105()
{
	if (Local_93[2 /*10*/].f_7)
	{
		func_56(&Local_93, 2);
	}
	func_108();
	unk_0x30EE2C844B9C410B(unk_0x3E4D3CCC220BDFB1(unk_0x9B0761B4C3EB8BC7(), true), &Local_46, 1, 1077936128, 0);
	unk_0xEE77D02136D8423F(1, 0.5f);
	unk_0x597A48D151729396(1, 1f);
	if (Local_93[1 /*10*/].f_7)
	{
		if (unk_0x8F678487EEBD8CE4(iLocal_53))
		{
			unk_0x93370FA10F15BE44(&iLocal_53);
		}
		func_56(&Local_93, 1);
	}
	if (iLocal_72)
	{
		if (!unk_0xA71AC4B230E98432(iLocal_50, joaat("weapon_pistol"), 0) && unk_0x5AEB5DDFFAD43CA5(iLocal_48))
		{
			if (!bLocal_92)
			{
				iLocal_45 = 2;
			}
			else if (func_107(&Local_93, "RERHOAU", "RERHO_BLAME", "RERHO_BLAME_3", 4, iLocal_98, 0))
			{
				iLocal_45 = 2;
			}
		}
		else
		{
			if (!unk_0x5AEB5DDFFAD43CA5(iLocal_50))
			{
				if (!unk_0x5AEB5DDFFAD43CA5(iLocal_48))
				{
					unk_0x8B18A80E8EB15510(iLocal_50, iLocal_48, 100f, -1, 0, 0);
				}
				else
				{
					unk_0x8B18A80E8EB15510(iLocal_50, unk_0x9B0761B4C3EB8BC7(), 100f, -1, 0, 0);
				}
				unk_0xCBA6B2B569DCAFD8(iLocal_50, true);
				if (!bLocal_92)
				{
					if (func_107(&Local_93, "RERHOAU", "RERHO_BLAME", "RERHO_BLAME_3", 4, iLocal_98, 0))
					{
					}
					else
					{
						func_106(iLocal_50, "GENERIC_SHOCKED_HIGH", 24);
					}
				}
				else
				{
					func_106(iLocal_50, "GENERIC_SHOCKED_HIGH", 24);
				}
				wait(0);
			}
			unk_0x34FEEAC2548C3789(1f);
			unk_0x5CD631BB88EEE1D1(1);
			iLocal_45 = 2;
		}
	}
	else
	{
		func_163();
	}
}

void func_106(int iParam0, char* sParam1, int iParam2)
{
	unk_0xFDCFA91E51EDB61F(iParam0, sParam1, func_2(iParam2), 1);
}

bool func_107(var uParam0, char* sParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6)
{
	func_27(uParam0, 145, sParam1, iParam5, iParam6, 0);
	if (iParam4 > 7)
	{
		if (iParam4 < 12)
		{
			iParam4 = 7;
		}
	}
	Global_21012 = 0;
	Global_21019 = 0;
	Global_21014 = 0;
	Global_21996 = 0;
	Global_21998 = 0;
	Global_22002 = 1;
	StringCopy(&Global_22009, sParam3, 24);
	Global_2621441 = 0;
	return func_6(sParam2, iParam4, 0);
}

void func_108()
{
	if (func_4())
	{
		bLocal_90 = true;
	}
	if (bLocal_90 == 0)
	{
		if (!unk_0x5AEB5DDFFAD43CA5(iLocal_50) && !unk_0x5AEB5DDFFAD43CA5(unk_0x9B0761B4C3EB8BC7()))
		{
			if (iLocal_72)
			{
				unk_0x9DC06E2A59C5AEBB(&iLocal_71);
				unk_0xE021DCE1063D5DC2(0, unk_0x9B0761B4C3EB8BC7(), 20000, 5f, 2f, 1073741824, 0);
				unk_0xA785552633ED203B(0, unk_0x9B0761B4C3EB8BC7(), -1, 2048, 2);
				unk_0x756D74A3EF0AB788(0, sLocal_99, "bystander_bystander_angry", 8f, -8f, 1500, 0, 0, 0, 0, 0);
				unk_0x8B18A80E8EB15510(0, unk_0x9B0761B4C3EB8BC7(), 150f, -1, 0, 0);
				unk_0x19F29730874AD6F1(iLocal_71);
				unk_0x9B6EC2CECE1010EF(iLocal_50, iLocal_71);
				unk_0x4F83FEE4454169D4(&iLocal_71);
				unk_0xCBA6B2B569DCAFD8(iLocal_50, true);
			}
			else
			{
				unk_0x9DC06E2A59C5AEBB(&iLocal_71);
				unk_0x83CAF206A9B8748C(0, Local_46, 1f, 20000, 1193033728, 1056964608);
				unk_0x439AF5D920F78274(0, Local_46, -1, 2048, 2);
				unk_0x756D74A3EF0AB788(0, sLocal_99, "bystander_bystander_angry", 8f, -8f, 1500, 0, 0, 0, 0, 0);
				unk_0x19F29730874AD6F1(iLocal_71);
				unk_0x9B6EC2CECE1010EF(iLocal_50, iLocal_71);
				unk_0x4F83FEE4454169D4(&iLocal_71);
				unk_0xCBA6B2B569DCAFD8(iLocal_50, true);
			}
		}
	}
}

void func_109()
{
	if (unk_0xCDF860E56BBCC6B4(iLocal_49, unk_0x9B0761B4C3EB8BC7(), 1))
	{
		if (!unk_0x0F1E960B06B93848(unk_0x460153A63B9477BC(), 2))
		{
			unk_0x26152FD46A297C2F(unk_0x460153A63B9477BC(), 2, 0);
			unk_0x4B86C627B5EABFBF(unk_0x460153A63B9477BC(), 0);
		}
		unk_0x4478D8ED4673EF14(iLocal_49, 1);
		unk_0x697DA7132EE43ABC(iLocal_49, 0, 0);
		bLocal_68 = true;
		iLocal_72 = 1;
		func_103();
	}
	else if (!unk_0x6F683C1C0BB1BA8D(iLocal_49))
	{
		unk_0x798BC6477B831DCB(iLocal_49, 4, 0f, 0);
	}
}

void func_110()
{
	if (unk_0xC2169C00B643278B(unk_0x9B0761B4C3EB8BC7(), Local_46, 50f, 50f, 25f, false, true, 0))
	{
		iLocal_98 = 0;
	}
	else
	{
		iLocal_98 = 1;
	}
}

int func_111()
{
	if (unk_0x5A228A6A51E757C8(unk_0x460153A63B9477BC()) && !unk_0x5AEB5DDFFAD43CA5(unk_0x9B0761B4C3EB8BC7()))
	{
		if (vdist2(unk_0x3E4D3CCC220BDFB1(unk_0x9B0761B4C3EB8BC7(), true), Local_44) < (75f * 75f))
		{
			return 1;
		}
		if (vmag2(unk_0x97C0B1E5FCD8E08A(unk_0x9B0761B4C3EB8BC7())) > 1369f && !func_96())
		{
			return 0;
		}
	}
	if (func_97())
	{
		return 1;
	}
	if (func_90(100f, 1) != -1)
	{
		return 1;
	}
	return 0;
}

int func_112()
{
	int iVar0;
	int iVar1;
	int iVar2;
	char* sVar3;
	
	Local_46 = { -96.4f, 6398.201f, 30.4542f };
	fLocal_47 = 0f;
	iVar0 = joaat("a_m_m_hillbilly_02");
	iVar1 = joaat("a_m_m_business_01");
	iVar2 = joaat("a_f_m_tourist_01");
	sVar3 = "A_F_M_BEVHILLS_02_WHITE_FULL_02";
	unk_0x78FCB2E22C41B9D5(iVar0);
	unk_0x78FCB2E22C41B9D5(iVar2);
	unk_0x78FCB2E22C41B9D5(iVar1);
	unk_0x131ED02492676000(sLocal_99);
	if (((unk_0x7D167B9A0CCDA347(iVar0) && unk_0x7D167B9A0CCDA347(iVar2)) && unk_0x7D167B9A0CCDA347(iVar1)) && unk_0xC614DDE265D18415(sLocal_99))
	{
		unk_0x555EE41D7C7078E6(Local_46, 5f, 1, 1, 0, false);
		iLocal_49 = unk_0xB3116B49FE00E2F1(5, iVar2, Local_46, fLocal_47, 1, true);
		unk_0x389E871B0B67CCCC(iLocal_49, 1);
		unk_0x3A2AAE59B4681DAF(iLocal_49, sVar3);
		unk_0x694113444F21E39F(iLocal_49, 20, true);
		iLocal_48 = unk_0xB3116B49FE00E2F1(22, iVar0, Local_46, fLocal_47, 1, true);
		unk_0x697DA7132EE43ABC(iLocal_48, 125, 0);
		unk_0x3A6EAFD8FE032E2E(iLocal_48, 125);
		unk_0x6AC7395A8E313A46(iLocal_48, 128, true);
		unk_0x389E871B0B67CCCC(iLocal_48, 1);
		unk_0x694113444F21E39F(iLocal_48, 42, true);
		unk_0x567AB34DE5FDB30D(iLocal_48, 1.5f);
		unk_0x44225B42FE388400(iLocal_48, true);
		unk_0x6C08F93084C348FC(iLocal_48, 40f);
		unk_0x694113444F21E39F(iLocal_48, 20, true);
		unk_0xC275806AC780442D(iLocal_48, fLocal_85);
		unk_0x6E54718C637039FE(iLocal_48, fLocal_86);
		unk_0x9445ACA80D2E87F9(iLocal_48, fLocal_87);
		unk_0x0D6B1ECCACFEEDCB(iLocal_48, fLocal_88);
		iLocal_50 = unk_0xB3116B49FE00E2F1(4, iVar1, -98.113f, 6405.354f, 30.6005f, fLocal_47, 1, true);
		unk_0xBDD1EC0BEBB9E3AF(Vector(31.64024f, 6405.058f, -98.41389f) - Vector(5f, 5f, 5f), Vector(31.64024f, 6405.058f, -98.41389f) + Vector(5f, 5f, 5f), 0, 0, 1, 0);
		iLocal_61 = unk_0xC08A186299DFDA0A(Vector(31.64024f, 6405.058f, -98.41389f) - Vector(40f, 40f, 40f), Vector(31.64024f, 6405.058f, -98.41389f) + Vector(40f, 40f, 40f), 0, 1, 1, 1);
		unk_0x0DC39BE87E4C5599(iLocal_50, false);
		unk_0x44225B42FE388400(iLocal_50, true);
		Local_46.f_2 = (Local_46.f_2 + 1f);
		Local_66 = { Local_46 };
		Local_67 = { 0f, 0f, fLocal_47 };
		iLocal_63 = unk_0xF341A134A5B8D4F6(Local_66, Local_67, 2);
		unk_0x81493F39713559B1(iLocal_63, true);
		unk_0xDFDB9C533700BC17(iLocal_48, iLocal_63, sLocal_99, "villian_struggle_loop", 1000f, -4f, 5, 0, 1148846080, 0);
		unk_0xDFDB9C533700BC17(iLocal_49, iLocal_63, sLocal_99, "girl_struggle_loop", 1000f, -4f, 5, 0, 1148846080, 0);
		iLocal_65 = unk_0xF341A134A5B8D4F6(Local_66, Local_67, 2);
		unk_0x81493F39713559B1(iLocal_65, true);
		unk_0xDFDB9C533700BC17(iLocal_50, iLocal_65, sLocal_99, "bystander_taking_cover", 1000f, -1.5f, 5, 0, 1148846080, 0);
		unk_0x694113444F21E39F(iLocal_50, 185, true);
		unk_0x92BD213E6A0E666B(iLocal_48, joaat("weapon_pistol"), -1, true, true);
		unk_0x9B20C082E40178C8(iLocal_48, 1);
		unk_0xDE8F8016287F771F("re_rescuehostage relManager", &iLocal_57);
		unk_0xDE8F8016287F771F("re_rescuehostage relBadGuy", &iLocal_56);
		iLocal_55 = unk_0x86FB3A0D4870FE62(unk_0x9B0761B4C3EB8BC7());
		unk_0xEFBCE8F8316F89EA(5, iLocal_56, iLocal_55);
		unk_0xEFBCE8F8316F89EA(5, iLocal_55, iLocal_56);
		unk_0xD3D9D7C84656DAE5(iLocal_50, iLocal_57);
		unk_0xD3D9D7C84656DAE5(iLocal_48, iLocal_56);
		unk_0x4E65320BC9AD521C(iLocal_49, true);
		unk_0x4E65320BC9AD521C(iLocal_50, true);
		unk_0x4E65320BC9AD521C(iLocal_48, true);
		unk_0x6673CC701BC8E9C1(iLocal_50, 11, true);
		unk_0x6673CC701BC8E9C1(iLocal_50, 17, true);
		unk_0x6673CC701BC8E9C1(iLocal_50, 13, false);
		unk_0x6673CC701BC8E9C1(iLocal_50, 5, false);
		unk_0xC3817373506BDB8A(iLocal_50, 0);
		unk_0x6673CC701BC8E9C1(iLocal_49, 11, true);
		unk_0xC3817373506BDB8A(iLocal_49, 0);
		unk_0x6673CC701BC8E9C1(iLocal_49, 13, false);
		unk_0x6673CC701BC8E9C1(iLocal_49, 5, false);
		func_114(&Local_93, 0, unk_0x9B0761B4C3EB8BC7(), sLocal_82, 0, 1);
		func_114(&Local_93, 1, iLocal_48, "RHCriminal", 0, 1);
		func_114(&Local_93, 2, iLocal_49, "RHHostage", 0, 1);
		func_114(&Local_93, 3, iLocal_50, "RHBystander", 0, 1);
		unk_0x5CD631BB88EEE1D1(0);
		unk_0x34FEEAC2548C3789(0f);
		func_113(1);
		unk_0x4BAC0F0B99F7DCF9(-89f, 6392f, 32f, 3f, 2);
		settimera(8000);
		return 1;
	}
	return 0;
}

void func_113(bool bParam0)
{
	if (bParam0)
	{
		Global_31201 = 1;
	}
	else
	{
		Global_31201 = 0;
	}
}

void func_114(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5)
{
	if ((uParam0[iParam1 /*10*/])->f_7 == 1)
	{
	}
	(*uParam0)[iParam1 /*10*/] = iParam2;
	StringCopy(&((uParam0[iParam1 /*10*/])->f_1), sParam3, 24);
	(uParam0[iParam1 /*10*/])->f_7 = 1;
	(uParam0[iParam1 /*10*/])->f_8 = iParam4;
	(uParam0[iParam1 /*10*/])->f_9 = iParam5;
	if (!Global_76833)
	{
		if (!unk_0x5AEB5DDFFAD43CA5(iParam2))
		{
			if ((uParam0[iParam1 /*10*/])->f_8 == 0)
			{
				unk_0x83BBFE5E96C64FBA(iParam2, 0);
			}
			else
			{
				unk_0x83BBFE5E96C64FBA(iParam2, 1);
			}
		}
		if (!unk_0x5AEB5DDFFAD43CA5(iParam2))
		{
			if ((uParam0[iParam1 /*10*/])->f_9 == 0)
			{
				unk_0xE61672E3FEF081AC(iParam2, 0);
			}
			else
			{
				unk_0xE61672E3FEF081AC(iParam2, 1);
			}
		}
	}
}

void func_115()
{
}

void func_116()
{
}

void func_117()
{
	switch (func_17())
	{
		case 0:
			sLocal_82 = "MICHAEL";
			sLocal_83 = "RERHO_MDOWN";
			break;
		
		case 1:
			sLocal_82 = "FRANKLIN";
			sLocal_83 = "RERHO_FDOWN";
			break;
		
		case 2:
			sLocal_82 = "TREVOR";
			sLocal_83 = "RERHO_TDOWN";
			break;
	}
}

void func_118(int iParam0)
{
	if (iParam0 == -1)
	{
		iParam0 = func_50();
	}
	if (iParam0 == -1)
	{
		return;
	}
	func_120(iParam0);
	unk_0x92B2940A0A0441A9(0);
	unk_0x659A1C3A1508626C(1);
	Global_111844 = 0;
	func_119();
}

void func_119()
{
	if (!unk_0x5AEB5DDFFAD43CA5(unk_0x9B0761B4C3EB8BC7()))
	{
		if (unk_0x47DBF174A0CB9D55(unk_0x9B0761B4C3EB8BC7(), false))
		{
			unk_0x410A1E7AD7D5C774(unk_0x36FE6D3220816ADA(unk_0xA5D5B1042E8F47BD(unk_0x9B0761B4C3EB8BC7(), false)), true);
		}
		unk_0x694113444F21E39F(unk_0x9B0761B4C3EB8BC7(), 32, false);
	}
}

void func_120(int iParam0)
{
	Global_111847 = iParam0;
}

int func_121(struct<3> Param0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	bool bVar0;
	struct<3> Var1;
	int iVar2;
	struct<3> Var3;
	int iVar4;
	
	if (!Global_150438)
	{
		return 0;
	}
	if (iParam1 == -1)
	{
		iParam1 = func_50();
	}
	if (iParam1 == -1)
	{
		return 0;
	}
	if (iParam1 == 31 || iParam1 == 32)
	{
		if (!func_162())
		{
			return 0;
		}
	}
	Local_44 = { Param0 };
	bVar0 = false;
	if (!bVar0)
	{
		if (unk_0x5A228A6A51E757C8(unk_0x460153A63B9477BC()) && !unk_0x5AEB5DDFFAD43CA5(unk_0x9B0761B4C3EB8BC7()))
		{
			Var1 = { unk_0x3E4D3CCC220BDFB1(unk_0x9B0761B4C3EB8BC7(), true) };
			if (vmag2(unk_0x97C0B1E5FCD8E08A(unk_0x9B0761B4C3EB8BC7())) > 1369f && !func_96())
			{
				return 0;
			}
		}
		if (!Global_111858.f_9081)
		{
			return 0;
		}
		if (func_31(0))
		{
			return 0;
		}
		if (func_97())
		{
			return 0;
		}
		if (func_161())
		{
			return 0;
		}
		if (Global_111847 != -1)
		{
			return 0;
		}
		if (func_19(func_17()))
		{
			if (func_90(100f, 1) != -1)
			{
				return 0;
			}
		}
		if (unk_0x5A228A6A51E757C8(unk_0x460153A63B9477BC()) && !bParam4)
		{
			if ((Var1.f_2 - Local_44.f_2) > 50f)
			{
				return 0;
			}
		}
		if (!func_160(iParam1))
		{
			return 0;
		}
		if (func_19(func_17()))
		{
			if (func_159(func_17()) == 4 || func_159(func_17()) == 5)
			{
				return 0;
			}
		}
		if (func_19(func_17()))
		{
			if (!func_158(iParam1, iParam2, 145))
			{
				return 0;
			}
		}
		if (!func_157(Global_111858.f_24991.f_43[iParam1]))
		{
			return 0;
		}
		if ((unk_0x578C4EF320340AF7() - Global_111849) < 150000)
		{
			if (iParam1 != 30)
			{
				return 0;
			}
		}
		if (func_156())
		{
			return 0;
		}
		if (unk_0x963B7BFFD2743281())
		{
			return 0;
		}
		if (unk_0xA706863F1E1DD66C())
		{
			return 0;
		}
		if (!func_147(4))
		{
			return 0;
		}
		if (!func_82(5))
		{
			return 0;
		}
		if (func_146(iParam1, iParam2) && !bParam3)
		{
			return 0;
		}
		if (Global_3 && iParam1 != 10)
		{
			return 0;
		}
		if (unk_0x0B1B45E748AD48BA(unk_0x518D695E2DBA9DB8(unk_0x9B0761B4C3EB8BC7())))
		{
			if ((unk_0x518D695E2DBA9DB8(unk_0x9B0761B4C3EB8BC7()) == unk_0xD5C5CDCF5230F2BA(377.153f, -717.567f, 10.0536f) || unk_0x518D695E2DBA9DB8(unk_0x9B0761B4C3EB8BC7()) == unk_0xD5C5CDCF5230F2BA(320.9934f, 265.2515f, 82.1221f)) || unk_0x518D695E2DBA9DB8(unk_0x9B0761B4C3EB8BC7()) == unk_0xD5C5CDCF5230F2BA(-1425.564f, -244.3f, 15.8053f))
			{
				return 0;
			}
		}
		if ((iParam1 == 9 && (iParam2 == 2 || iParam2 == 5)) && !func_146(0, 0))
		{
			return 0;
		}
		if (Global_31114)
		{
			return 0;
		}
		if (func_160(30) && !func_146(30, 0))
		{
			if (iParam1 != 30)
			{
				if (vdist2(Var1, -61.2745f, -1100.468f, 25.3752f) < 176400f)
				{
					return 0;
				}
			}
		}
		if (func_19(func_17()))
		{
			iVar2 = 0;
			while (iVar2 < 3)
			{
				Var3 = { Global_111858.f_2359.f_539.f_2300[iVar2 /*3*/] };
				iVar4 = Global_111858.f_2359.f_539.f_2296[iVar2];
				if (func_145(iVar4))
				{
					if (func_123(iVar2))
					{
						if (!func_122(Var3, 0f, 0f, 0f, 0))
						{
							if (vdist2(unk_0x3E4D3CCC220BDFB1(unk_0x9B0761B4C3EB8BC7(), false), Var3) < (210f * 210f))
							{
								if (func_17() != iVar2)
								{
									return 0;
								}
							}
						}
					}
				}
				iVar2++;
			}
		}
	}
	return 1;
}

bool func_122(struct<3> Param0, struct<3> Param1, bool bParam2)
{
	if (bParam2)
	{
		return (Param0.x == Param1.x && Param0.f_1 == Param1.f_1);
	}
	return ((Param0.x == Param1.x && Param0.f_1 == Param1.f_1) && Param0.f_2 == Param1.f_2);
}

bool func_123(int iParam0)
{
	int iVar0;
	
	iVar0 = Global_111858.f_2359.f_539.f_2296[iParam0];
	return func_124(iVar0);
}

int func_124(int iParam0)
{
	return func_125(iParam0, 1);
}

int func_125(int iParam0, int iParam1)
{
	var uVar0;
	var uVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	if (!func_145(iParam0))
	{
		return 0;
	}
	func_126(iParam0, &uVar0, &uVar1, &iVar2, &iVar3, &iVar4, &iVar5);
	if (((iVar5 > 0 || iVar4 > 0) || iVar3 > 0) || iVar2 >= iParam1)
	{
		return 1;
	}
	return 0;
}

void func_126(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6)
{
	func_127(func_138(), iParam0, uParam1, uParam2, uParam3, uParam4, uParam5, uParam6);
}

void func_127(int iParam0, int iParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	if (func_137(iParam0, iParam1))
	{
		iVar0 = func_136(iParam1);
		iVar1 = func_134(iParam0);
		iVar2 = (func_134(iParam0) - func_134(iParam1));
		iVar3 = (func_136(iParam0) - func_136(iParam1));
		iVar4 = (func_133(iParam0) - func_133(iParam1));
		iVar5 = (func_132(iParam0) - func_132(iParam1));
		iVar6 = (func_131(iParam0) - func_131(iParam1));
		iVar7 = (func_130(iParam0) - func_130(iParam1));
	}
	else
	{
		iVar0 = func_136(iParam0);
		iVar1 = func_134(iParam1);
		iVar2 = (func_134(iParam1) - func_134(iParam0));
		iVar3 = (func_136(iParam1) - func_136(iParam0));
		iVar4 = (func_133(iParam1) - func_133(iParam0));
		iVar5 = (func_132(iParam1) - func_132(iParam0));
		iVar6 = (func_131(iParam1) - func_131(iParam0));
		iVar7 = (func_130(iParam1) - func_130(iParam0));
	}
	while (iVar7 < 0)
	{
		iVar7 += 60;
		iVar6 = (iVar6 - 1);
	}
	while (iVar7 > 59)
	{
		iVar7 = (iVar7 - 60);
		iVar6++;
	}
	while (iVar6 < 0)
	{
		iVar6 += 60;
		iVar5 = (iVar5 - 1);
	}
	while (iVar6 > 59)
	{
		iVar6 = (iVar6 - 60);
		iVar5++;
	}
	while (iVar5 < 0)
	{
		iVar5 += 24;
		iVar4 = (iVar4 - 1);
	}
	while (iVar5 > 23)
	{
		iVar5 = (iVar5 - 24);
		iVar4++;
	}
	while (iVar4 < 0)
	{
		while (iVar3 < 0)
		{
			iVar3 += 12;
			iVar2 = (iVar2 - 1);
		}
		iVar4 = (iVar4 + func_129(iVar0, iVar1));
		iVar3 = (iVar3 - 1);
		iVar0 = round(func_128(to_float(iVar0 + 1), 0f, 12f));
	}
	while (iVar3 < 0)
	{
		iVar3 += 12;
		iVar2 = (iVar2 - 1);
	}
	while (iVar3 > 12)
	{
		iVar3 = (iVar3 - 12);
		iVar2++;
	}
	*uParam2 = iVar7;
	*uParam3 = iVar6;
	*uParam4 = iVar5;
	*uParam5 = iVar4;
	*uParam6 = iVar3;
	*uParam7 = iVar2;
}

float func_128(float fParam0, float fParam1, float fParam2)
{
	float fVar0;
	
	if (fParam1 == fParam2)
	{
		return fParam1;
	}
	fVar0 = (fParam2 - fParam1);
	fParam0 = (fParam0 - (IntToFloat(round(((fParam0 - fParam1) / fVar0))) * fVar0));
	if (fParam0 < fParam1)
	{
		fParam0 = (fParam0 + fVar0);
	}
	return fParam0;
}

int func_129(int iParam0, int iParam1)
{
	if (iParam1 < 0)
	{
		iParam1 = 0;
	}
	switch (iParam0)
	{
		case 0:
		case 2:
		case 4:
		case 6:
		case 7:
		case 9:
		case 11:
			return 31;
			break;
		
		case 3:
		case 5:
		case 8:
		case 10:
			return 30;
			break;
		
		case 1:
			if ((iParam1 % 4) == 0)
			{
				if ((iParam1 % 100) != 0)
				{
					return 29;
				}
				else if ((iParam1 % 400) == 0)
				{
					return 29;
				}
			}
			return 28;
			break;
	}
	return 30;
}

int func_130(int iParam0)
{
	return shift_right(iParam0, 20) & 63;
}

int func_131(int iParam0)
{
	return shift_right(iParam0, 14) & 63;
}

int func_132(int iParam0)
{
	return shift_right(iParam0, 9) & 31;
}

int func_133(int iParam0)
{
	return shift_right(iParam0, 4) & 31;
}

int func_134(int iParam0)
{
	return (shift_right(iParam0, 26) & 31 * func_135(unk_0xCE990E643CD9D0E5(iParam0, 31), -1, 1)) + 2011;
}

int func_135(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

int func_136(int iParam0)
{
	return iParam0 & 15;
}

int func_137(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	if (!func_145(iParam1) || !func_145(iParam0))
	{
		return 1;
	}
	iVar0 = func_134(iParam0);
	iVar1 = func_134(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_136(iParam0);
	iVar1 = func_136(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_133(iParam0);
	iVar1 = func_133(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_132(iParam0);
	iVar1 = func_132(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_131(iParam0);
	iVar1 = func_131(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_130(iParam0);
	iVar1 = func_130(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	return 0;
}

int func_138()
{
	var uVar0;
	
	func_144(&uVar0, unk_0x1D3A3697182AD8B3());
	func_143(&uVar0, unk_0x81F2E25F8C019191());
	func_142(&uVar0, unk_0x1F596C965B00E290());
	func_141(&uVar0, unk_0x371CFD525753F70C());
	func_140(&uVar0, unk_0xF225116F449A5CC6());
	func_139(&uVar0, unk_0x2E48CFA70ABFC06A());
	return uVar0;
}

void func_139(var uParam0, int iParam1)
{
	if (iParam1 <= 0)
	{
		return;
	}
	if (iParam1 > 2043 || iParam1 < 1979)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 2080374784);
	if (iParam1 < 2011)
	{
		*uParam0 = (*uParam0 || shift_left((2011 - iParam1), 26));
		*uParam0 |= -2147483648;
	}
	else
	{
		*uParam0 = (*uParam0 || shift_left((iParam1 - 2011), 26));
		*uParam0 = (*uParam0 - *uParam0 & -2147483648);
	}
}

void func_140(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 11)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15);
	*uParam0 = (*uParam0 || iParam1);
}

void func_141(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_136(*uParam0);
	iVar1 = func_134(*uParam0);
	if (iParam1 < 1 || iParam1 > func_129(iVar0, iVar1))
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 496);
	*uParam0 = (*uParam0 || shift_left(iParam1, 4));
}

void func_142(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 24)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15872);
	*uParam0 = (*uParam0 || shift_left(iParam1, 9));
}

void func_143(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 1032192);
	*uParam0 = (*uParam0 || shift_left(iParam1, 14));
}

void func_144(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 66060288);
	*uParam0 = (*uParam0 || shift_left(iParam1, 20));
}

int func_145(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	if (iParam0 == -15)
	{
		return 0;
	}
	iVar0 = func_130(iParam0);
	if (iVar0 < 0 || iVar0 >= 60)
	{
		return 0;
	}
	iVar1 = func_131(iParam0);
	if (iVar1 < 0 || iVar1 >= 60)
	{
		return 0;
	}
	iVar2 = func_132(iParam0);
	if (iVar2 < 0 || iVar2 > 23)
	{
		return 0;
	}
	iVar3 = func_134(iParam0);
	if ((iVar3 <= 0 || iVar3 > 2043) || iVar3 < 1979)
	{
		return 0;
	}
	iVar4 = func_136(iParam0);
	if (iVar4 < 0 || iVar4 > 11)
	{
		return 0;
	}
	iVar5 = func_133(iParam0);
	if (iVar5 < 1 || iVar5 > func_129(iVar4, iVar3))
	{
		return 0;
	}
	return 1;
}

int func_146(int iParam0, int iParam1)
{
	if (unk_0xCE990E643CD9D0E5(Global_111858.f_24991.f_8[iParam0], iParam1))
	{
		return 1;
	}
	return 0;
}

int func_147(int iParam0)
{
	int iVar0;
	
	if (unk_0x5A228A6A51E757C8(unk_0x460153A63B9477BC()))
	{
		if (unk_0xAE06B9E39EBDE049(unk_0x9B0761B4C3EB8BC7()))
		{
			if (!unk_0x5AEB5DDFFAD43CA5(unk_0x9B0761B4C3EB8BC7()))
			{
				iVar0 = func_17();
				if (!func_19(iVar0))
				{
					return 0;
				}
				switch (iParam0)
				{
					case 9:
					case 0:
						if (((((((((((((((((!unk_0x117A56F7403FC6D2(unk_0x460153A63B9477BC()) || unk_0xA16974805191D19C(unk_0x9B0761B4C3EB8BC7())) || unk_0x11B7C25143EE2F29(unk_0x9B0761B4C3EB8BC7())) || unk_0xCED6B5226244381C(unk_0x9B0761B4C3EB8BC7())) || unk_0xEC787E1D3B804A72(unk_0x9B0761B4C3EB8BC7())) || unk_0xD5EAF42B1EAE828F(unk_0x460153A63B9477BC(), 1)) || unk_0x5197F8CD4A72E68F(unk_0x460153A63B9477BC())) || unk_0xF83D0A2EC884A4DD(unk_0x9B0761B4C3EB8BC7(), 0)) || func_155()) || Global_110905) || Global_30970) || func_154()) || func_25(8, -1)) || func_153()) || func_152()) || func_151()) || func_150()) || Global_111858.f_7684.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 1:
						if (((((((((unk_0xD5EAF42B1EAE828F(unk_0x460153A63B9477BC(), 1) || func_155()) || Global_30970) || func_154()) || func_25(8, -1)) || func_151()) || func_153()) || func_152()) || func_150()) || Global_111858.f_7684.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 2:
						if ((((((((((((((((((!unk_0x117A56F7403FC6D2(unk_0x460153A63B9477BC()) || unk_0xA16974805191D19C(unk_0x9B0761B4C3EB8BC7())) || unk_0x11B7C25143EE2F29(unk_0x9B0761B4C3EB8BC7())) || unk_0xCED6B5226244381C(unk_0x9B0761B4C3EB8BC7())) || unk_0xEC787E1D3B804A72(unk_0x9B0761B4C3EB8BC7())) || unk_0xD5EAF42B1EAE828F(unk_0x460153A63B9477BC(), 1)) || unk_0x5197F8CD4A72E68F(unk_0x460153A63B9477BC())) || unk_0xF83D0A2EC884A4DD(unk_0x9B0761B4C3EB8BC7(), 0)) || func_155()) || Global_110905) || Global_30970) || func_154()) || func_25(8, -1)) || func_151()) || func_153()) || func_152()) || func_150()) || Global_111858.f_7684.f_919[iVar0] == 5) || Global_42178 != -1)
						{
							return 0;
						}
						break;
					
					case 3:
						if ((((((((((((unk_0xCED6B5226244381C(unk_0x9B0761B4C3EB8BC7()) || unk_0xEC787E1D3B804A72(unk_0x9B0761B4C3EB8BC7())) || unk_0xD5EAF42B1EAE828F(unk_0x460153A63B9477BC(), 1)) || unk_0xF83D0A2EC884A4DD(unk_0x9B0761B4C3EB8BC7(), 0)) || func_155()) || Global_110905) || Global_30970) || func_154()) || func_25(8, -1)) || func_153()) || func_152()) || func_150()) || Global_111858.f_7684.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 4:
						if (((((func_155() || unk_0x1A3D0DF92BF7D8C4(unk_0x460153A63B9477BC()) > 0) || func_25(8, -1)) || func_150()) || func_149()) || Global_111858.f_7684.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 5:
						if ((((func_25(8, -1) || func_153()) || func_152()) || func_149()) || func_148())
						{
							return 0;
						}
						if ((unk_0x9CC4D06F5338CA6B() && unk_0xEE67CF13DD662F51() != 3) && unk_0x69222D599BA78994() < 8)
						{
							return 0;
						}
						break;
					
					case 6:
						if (unk_0xAE06B9E39EBDE049(unk_0x9B0761B4C3EB8BC7()))
						{
							if ((((((((((((((unk_0xF83D0A2EC884A4DD(unk_0x9B0761B4C3EB8BC7(), 0) || unk_0x1A3D0DF92BF7D8C4(unk_0x460153A63B9477BC()) > 0) || unk_0xA16974805191D19C(unk_0x9B0761B4C3EB8BC7())) || unk_0xCED6B5226244381C(unk_0x9B0761B4C3EB8BC7())) || unk_0xEC787E1D3B804A72(unk_0x9B0761B4C3EB8BC7())) || unk_0xD5EAF42B1EAE828F(unk_0x460153A63B9477BC(), 1)) || unk_0x5197F8CD4A72E68F(unk_0x460153A63B9477BC())) || func_155()) || Global_30970) || func_154()) || func_25(8, -1)) || func_152()) || func_151()) || func_150()) || Global_111858.f_7684.f_919[iVar0] == 5)
							{
								return 0;
							}
						}
						break;
					
					case 7:
						if ((((((((((((((((((unk_0xF83D0A2EC884A4DD(unk_0x9B0761B4C3EB8BC7(), 0) || !unk_0x4DC4117F94CD5B84(unk_0x460153A63B9477BC())) || !unk_0x117A56F7403FC6D2(unk_0x460153A63B9477BC())) || !unk_0x87F0CB19476706C3()) || unk_0xA16974805191D19C(unk_0x9B0761B4C3EB8BC7())) || unk_0xCED6B5226244381C(unk_0x9B0761B4C3EB8BC7())) || unk_0xEC787E1D3B804A72(unk_0x9B0761B4C3EB8BC7())) || unk_0xD5EAF42B1EAE828F(unk_0x460153A63B9477BC(), 1)) || func_155()) || func_152()) || Global_110905) || Global_30970) || func_154()) || Global_42801) || func_25(8, -1)) || func_151()) || func_149()) || func_150()) || Global_111858.f_7684.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 8:
						if (((((((((((((((((((((unk_0xF83D0A2EC884A4DD(unk_0x9B0761B4C3EB8BC7(), 0) || !unk_0x4DC4117F94CD5B84(unk_0x460153A63B9477BC())) || !unk_0x117A56F7403FC6D2(unk_0x460153A63B9477BC())) || !unk_0x87F0CB19476706C3()) || unk_0x0F1E960B06B93848(unk_0x460153A63B9477BC(), 0)) || unk_0xA16974805191D19C(unk_0x9B0761B4C3EB8BC7())) || unk_0x47DBF174A0CB9D55(unk_0x9B0761B4C3EB8BC7(), true)) || unk_0xCED6B5226244381C(unk_0x9B0761B4C3EB8BC7())) || unk_0xEC787E1D3B804A72(unk_0x9B0761B4C3EB8BC7())) || unk_0x9D7D76BBBFE285E0(unk_0x9B0761B4C3EB8BC7())) || unk_0xD5EAF42B1EAE828F(unk_0x460153A63B9477BC(), 1)) || unk_0x5197F8CD4A72E68F(unk_0x460153A63B9477BC())) || func_155()) || Global_110905) || Global_30970) || func_154()) || func_25(8, -1)) || func_151()) || func_149()) || func_153()) || func_152()) || func_150())
						{
							return 0;
						}
						break;
				}
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
	else
	{
		return 0;
	}
	return 1;
}

var func_148()
{
	return Global_98994.f_1;
}

int func_149()
{
	if (Global_95877 != -1)
	{
		return unk_0xCE990E643CD9D0E5(Global_89743[Global_95877 /*34*/].f_15, 13);
	}
	return 0;
}

int func_150()
{
	if (unk_0x7B70881748D166CD(joaat("player_timetable_scene")) > 0)
	{
		return 1;
	}
	return 0;
}

int func_151()
{
	if (Global_77093)
	{
		return 1;
	}
	else if (Global_61711 && !Global_61717)
	{
		return 1;
	}
	return 0;
}

bool func_152()
{
	return Global_99007.f_352 > 0;
}

bool func_153()
{
	return Global_99007.f_351 > 0;
}

var func_154()
{
	return Global_1312896;
}

int func_155()
{
	if (!unk_0x25DDB354A40FFCDB())
	{
		return Global_96433.f_44 == 1;
	}
	return 0;
}

int func_156()
{
	func_16();
	if (Global_8356[Global_19681 /*2811*/][0 /*281*/].f_259 == 2)
	{
		return 1;
	}
	return 0;
}

bool func_157(int iParam0)
{
	return func_137(func_138(), iParam0);
}

int func_158(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	iVar1 = func_17();
	if (iParam2 != 145 && ((iParam2 == 0 || iParam2 == 1) || iParam2 == 2))
	{
		iVar1 = iParam2;
	}
	switch (iParam0)
	{
		case 18:
			if (iVar1 == 2)
			{
				iVar0 = 1;
			}
			break;
		
		case 19:
			if (iVar1 != 2)
			{
				iVar0 = 1;
			}
			break;
		
		case 20:
			if (iVar1 != 1)
			{
				iVar0 = 1;
			}
			break;
		
		case 28:
			if (iVar1 != 2)
			{
				iVar0 = 1;
			}
			break;
		
		case 13:
			if (iVar1 == 0)
			{
				if (iParam1 == 2)
				{
					iVar0 = 0;
				}
				else
				{
					iVar0 = 1;
				}
			}
			else
			{
				iVar0 = 1;
			}
			break;
		
		case 22:
			if (iParam1 == 2 || iVar1 != 2)
			{
				iVar0 = 1;
			}
			break;
		
		case 30:
			if (iVar1 != 2)
			{
				iVar0 = 1;
			}
			break;
		
		default:
			iVar0 = 1;
			break;
	}
	return iVar0;
}

int func_159(int iParam0)
{
	if (!func_19(iParam0))
	{
		return 7;
	}
	return Global_111858.f_7684.f_919[iParam0];
}

bool func_160(int iParam0)
{
	int iVar0;
	bool bVar1;
	
	if (iParam0 == 31 || iParam0 == 32)
	{
		if (!func_162())
		{
			return 0;
		}
	}
	iVar0 = iParam0;
	if (iVar0 < 31)
	{
		bVar1 = unk_0xCE990E643CD9D0E5(Global_111858.f_24991, iVar0);
	}
	else
	{
		iVar0 = (iVar0 - 31);
		bVar1 = unk_0xCE990E643CD9D0E5(Global_111858.f_24991.f_1, iVar0);
	}
	return bVar1;
}

int func_161()
{
	int iVar0;
	
	if (Global_31118)
	{
		if (unk_0x47DBF174A0CB9D55(unk_0x9B0761B4C3EB8BC7(), false))
		{
			iVar0 = unk_0xA5D5B1042E8F47BD(unk_0x9B0761B4C3EB8BC7(), false);
			if (unk_0x80FF6C016CDB0FAF(iVar0, 0))
			{
				if (!unk_0x5AEB5DDFFAD43CA5(unk_0x10D3F7E169A49C44(iVar0, 0, 0)))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_162()
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

void func_163()
{
	if (func_101())
	{
		unk_0x34FEEAC2548C3789(1f);
		unk_0x5CD631BB88EEE1D1(1);
	}
	if (iLocal_45 != 0)
	{
		unk_0xF4F95D084B662764(iLocal_56);
		unk_0xF4F95D084B662764(iLocal_57);
		unk_0x94A6CD0C67707B6B(20000);
		unk_0x1E337EE68290597A(iLocal_61, 0);
		unk_0x531C743590D58F43(iLocal_60);
		func_113(0);
	}
	if (!unk_0x5AEB5DDFFAD43CA5(iLocal_48) && !unk_0x5AEB5DDFFAD43CA5(unk_0x9B0761B4C3EB8BC7()))
	{
		unk_0x8B18A80E8EB15510(iLocal_48, unk_0x9B0761B4C3EB8BC7(), 100f, -1, 0, 0);
		unk_0xCBA6B2B569DCAFD8(iLocal_48, true);
		wait(0);
	}
	func_164(-1);
	unk_0xD39E529EBE5DB04F();
}

void func_164(int iParam0)
{
	char cVar0[64];
	
	if (iParam0 == -1)
	{
		iParam0 = func_50();
	}
	if (iParam0 == -1)
	{
		return;
	}
	if (func_101())
	{
		func_168(iParam0);
		unk_0x694F632EFD1F47D0(0, 0);
		Global_111849 = unk_0x578C4EF320340AF7();
		func_167(30000);
		StringCopy(&cVar0, func_166(Global_111847, 1), 64);
		if (func_49(Global_111847) > 0)
		{
			StringConCat(&cVar0, " Variation ", 64);
			StringIntConCat(&cVar0, Global_111846, 64);
		}
		unk_0xFA6F384991B22C4D(&cVar0, Global_111844, (unk_0x578C4EF320340AF7() - Global_111845), 0);
	}
	else if (unk_0xCE990E643CD9D0E5(Global_111854, 0) && Global_111858.f_24991.f_2 < 3)
	{
		unk_0xD2459066EA58CE43(&Global_111854, 0);
	}
	func_165(&Global_31027);
	Global_111848 = 0;
	func_120(-1);
}

void func_165(var uParam0)
{
	if (*uParam0 == -1)
	{
		return;
	}
	if (!*uParam0 == Global_41593)
	{
		*uParam0 = -1;
		return;
	}
	*uParam0 = -1;
	Global_41592 = 0;
	Global_41594 = 0;
	Global_41631 = 15;
	Global_61714 = 0;
	Global_61715 = 0;
}

char* func_166(int iParam0, bool bParam1)
{
	switch (iParam0)
	{
		case 0:
			return "RE_ACCIDENT";
			break;
		
		case 1:
			return "RE_ATMROBBERY";
			break;
		
		case 2:
			return "RE_BUSTOUR";
			break;
		
		case 3:
			return "RE_DOMESTIC";
			break;
		
		case 4:
			return "RE_GETAWAYDRIVER";
			break;
		
		case 5:
			return "RE_SHOPROBBERY";
			break;
		
		case 6:
			return "RE_SNATCHED";
			break;
		
		case 7:
			return "RE_LURED";
			break;
		
		case 8:
			return "RE_BIKETHIEFSTAMP";
			break;
		
		case 9:
			return "RE_SECURITYVAN";
			break;
		
		case 10:
			return "RE_PAPARAZZI";
			break;
		
		case 11:
			return "RE_CHASETHIEVES";
			break;
		
		case 12:
			return "RE_DEALGONEWRONG";
			break;
		
		case 13:
			return "RE_HITCHLIFT";
			break;
		
		case 14:
			return "RE_STAG";
			break;
		
		case 15:
			return "RE_ARREST";
			break;
		
		case 16:
			return "RE_CRASHRESCUE";
			break;
		
		case 17:
			return "RE_CARTHEFT";
			break;
		
		case 18:
			return "RE_CULTSHOOTOUT";
			break;
		
		case 19:
			return "RE_GANGFIGHT";
			break;
		
		case 20:
			return "RE_GANGINTIMIDATION";
			break;
		
		case 21:
			return "RE_PRISONVANBREAK";
			break;
		
		case 22:
			return "RE_PRISONERLIFT";
			break;
		
		case 23:
			return "RE_ABANDONEDCAR";
			break;
		
		case 24:
			return "RE_BURIAL";
			break;
		
		case 25:
			return "RE_MUGGING";
			break;
		
		case 26:
			return "RE_BIKETHIEF";
			break;
		
		case 27:
			return "RE_DRUNKDRIVER";
			break;
		
		case 28:
			return "RE_HOMELANDSECURITY";
			break;
		
		case 29:
			return "RE_BORDERPATROL";
			break;
		
		case 30:
			return "RE_SIMEONYETARIAN";
			break;
		
		case 31:
			return "RE_DUEL";
			break;
		
		case 32:
			return "RE_SEAPLANE";
			break;
		
		case 33:
			return "RE_MONKEYPHOTO";
			break;
		
		case -1:
			return "RE_NONE";
			break;
	}
	if (!bParam1)
	{
	}
	return "UNKNOWN";
}

void func_167(int iParam0)
{
	Global_42182 = (unk_0x578C4EF320340AF7() + iParam0);
}

void func_168(int iParam0)
{
	func_169(iParam0, 0, func_174(iParam0));
}

void func_169(int iParam0, int iParam1, int iParam2)
{
	var uVar0;
	struct<16> Var1;
	
	uVar0 = func_138();
	func_172(&uVar0, 0, 0, iParam2, iParam1, 0, 0);
	func_171(iParam0, &uVar0);
	Var1 = { func_170(&uVar0) };
}

struct<16> func_170(var uParam0)
{
	struct<16> Var0;
	int iVar1;
	
	StringCopy(&Var0, "", 64);
	iVar1 = func_132(*uParam0);
	if (iVar1 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar1, 64);
	StringConCat(&Var0, ":", 64);
	iVar1 = func_131(*uParam0);
	if (iVar1 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar1, 64);
	StringConCat(&Var0, ":", 64);
	iVar1 = func_130(*uParam0);
	if (iVar1 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar1, 64);
	StringConCat(&Var0, "  ", 64);
	iVar1 = func_133(*uParam0);
	if (iVar1 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar1, 64);
	StringConCat(&Var0, "/", 64);
	iVar1 = func_136(*uParam0);
	if (iVar1 < 9)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar1 + 1, 64);
	StringConCat(&Var0, "/", 64);
	StringIntConCat(&Var0, func_134(*uParam0), 64);
	return Var0;
}

void func_171(int iParam0, var uParam1)
{
	Global_111858.f_24991.f_43[iParam0] = *uParam1;
}

void func_172(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	
	iVar0 = func_134(*uParam0);
	iVar1 = func_136(*uParam0);
	iVar2 = func_133(*uParam0);
	iVar3 = func_132(*uParam0);
	iVar4 = func_131(*uParam0);
	iVar5 = func_130(*uParam0);
	if (((((iParam6 == 0 && iParam5 == 0) && iParam4 == 0) && iParam3 == 0) && iParam2 == 0) && iParam1 == 0)
	{
		return;
	}
	if (iParam1 < 0)
	{
		return;
	}
	if (iParam2 < 0)
	{
		return;
	}
	if (iParam3 < 0)
	{
		return;
	}
	if (iParam4 < 0)
	{
		return;
	}
	if (iParam5 < 0)
	{
		return;
	}
	if (iParam6 < 0)
	{
		return;
	}
	iVar5 = (iVar5 + iParam1);
	while (iVar5 >= 60)
	{
		iParam2++;
		iVar5 = (iVar5 - 60);
	}
	iVar4 = (iVar4 + iParam2);
	while (iVar4 >= 60)
	{
		iParam3++;
		iVar4 = (iVar4 - 60);
	}
	iVar3 = (iVar3 + iParam3);
	while (iVar3 >= 24)
	{
		iParam4++;
		iVar3 = (iVar3 - 24);
	}
	iVar2 = (iVar2 + iParam4);
	iVar6 = func_129(iVar1, iVar0);
	while (iVar2 > iVar6)
	{
		iVar1++;
		iVar2 = (iVar2 - iVar6);
		if (iVar1 > 11)
		{
			iVar0++;
			iVar1 = (iVar1 - 12);
		}
		iVar6 = func_129(iVar1, iVar0);
	}
	iVar1 = (iVar1 + iParam5);
	while (iVar1 > 11)
	{
		iParam6++;
		iVar1 = (iVar1 - 12);
	}
	iVar0 = (iVar0 + iParam6);
	func_173(uParam0, iVar5, iVar4, iVar3, iVar2, iVar1, iVar0);
}

void func_173(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_144(uParam0, iParam1);
	func_143(uParam0, iParam2);
	func_142(uParam0, iParam3);
	func_140(uParam0, iParam5);
	func_141(uParam0, iParam4);
	func_139(uParam0, iParam6);
}

int func_174(int iParam0)
{
	int iVar0;
	
	switch (iParam0)
	{
		case 23:
			iVar0 = 30;
			break;
		
		case 0:
			iVar0 = 30;
			break;
		
		case 15:
			iVar0 = 30;
			break;
		
		case 1:
			iVar0 = 200;
			break;
		
		case 26:
			iVar0 = 30;
			break;
		
		case 8:
			iVar0 = 30;
			break;
		
		case 29:
			iVar0 = 30;
			break;
		
		case 24:
			iVar0 = 30;
			break;
		
		case 2:
			iVar0 = 0;
			break;
		
		case 17:
			iVar0 = 30;
			break;
		
		case 11:
			iVar0 = 30;
			break;
		
		case 16:
			iVar0 = 30;
			break;
		
		case 18:
			iVar0 = 30;
			break;
		
		case 12:
			iVar0 = 120;
			break;
		
		case 3:
			iVar0 = 60;
			break;
		
		case 27:
			iVar0 = 60;
			break;
		
		case 19:
			iVar0 = 30;
			break;
		
		case 20:
			iVar0 = 30;
			break;
		
		case 4:
			iVar0 = 60;
			break;
		
		case 28:
			iVar0 = 30;
			break;
		
		case 13:
			iVar0 = 35;
			break;
		
		case 7:
			iVar0 = 30;
			break;
		
		case 25:
			iVar0 = 40;
			break;
		
		case 10:
			iVar0 = 30;
			break;
		
		case 22:
			iVar0 = 30;
			break;
		
		case 21:
			iVar0 = 30;
			break;
		
		case 5:
			iVar0 = 30;
			break;
		
		case 30:
			iVar0 = 60;
			break;
		
		case 9:
			iVar0 = 60;
			break;
		
		case 6:
			iVar0 = 40;
			break;
		
		case 14:
			iVar0 = 40;
			break;
	}
	return iVar0;
}

