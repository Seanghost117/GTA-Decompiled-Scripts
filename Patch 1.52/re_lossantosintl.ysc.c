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
	char* sLocal_20 = NULL;
	float fLocal_21 = 0f;
	var uLocal_22 = 0;
	var uLocal_23 = 0;
	var uLocal_24 = 0;
	float fLocal_25 = 0f;
	float fLocal_26 = 0f;
	var uLocal_27 = 0;
	int iLocal_28 = 0;
	var uLocal_29 = 0;
	var uLocal_30 = 0;
	float fLocal_31 = 0f;
	float fLocal_32 = 0f;
	float fLocal_33 = 0f;
	var uLocal_34 = 0;
	var uLocal_35 = 0;
	var uLocal_36 = 0;
	var uLocal_37 = 0;
	var uLocal_38 = 0;
	int iLocal_39 = 0;
	int iLocal_40 = 0;
	int iLocal_41 = 0;
	int iLocal_42 = 0;
	var uLocal_43 = 0;
	var uLocal_44 = 0;
	var uLocal_45 = 0;
	var uLocal_46 = 0;
	var uLocal_47 = 0;
	var uLocal_48 = 0;
	int iLocal_49[4] = { 0, 0, 0, 0 };
	int iLocal_50 = 0;
	int iLocal_51[4] = { 0, 0, 0, 0 };
	int iLocal_52 = 0;
	struct<3> Local_53[4];
	struct<3> Local_54 = { 0, 0, 0 } ;
	int iLocal_55 = 0;
	bool bLocal_56 = 0;
	int iLocal_57 = 0;
	int iLocal_58 = 0;
	int iLocal_59 = 0;
	bool bLocal_60 = 0;
	int iLocal_61 = 0;
	int iLocal_62 = 0;
	float fLocal_63 = 0f;
	float fLocal_64 = 0f;
	int iLocal_65 = 0;
	int iLocal_66 = 0;
	int iLocal_67 = 0;
	int iLocal_68 = 0;
	var uLocal_69 = 0;
	var uLocal_70 = 0;
	var uLocal_71 = 0;
	var uLocal_72 = 0;
	bool bLocal_73 = 0;
	var uLocal_74 = 0;
	int iLocal_75 = 0;
	int iLocal_76 = 0;
	int iLocal_77 = 0;
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
	sLocal_20 = "NULL";
	fLocal_21 = 0f;
	fLocal_25 = -0.0375f;
	fLocal_26 = 0.17f;
	iLocal_28 = 3;
	fLocal_31 = 80f;
	fLocal_32 = 140f;
	fLocal_33 = 180f;
	iLocal_39 = 1;
	iLocal_40 = 65;
	iLocal_41 = 49;
	iLocal_42 = 64;
	bLocal_56 = true;
	iLocal_62 = joaat("s_m_m_pilot_01");
	iLocal_77 = 500;
	if (unk_0xED06FD5709A59F02(3))
	{
		func_12();
	}
	iLocal_75 = unk_0x9B0761B4C3EB8BC7();
	while (true)
	{
		if (unk_0xA59F96B50B97E63C(iLocal_75, 0))
		{
			iLocal_76 = 5;
		}
		switch (iLocal_76)
		{
			case 0:
				iLocal_76 = 1;
				break;
			
			case 1:
				func_11();
				iLocal_76 = 2;
				break;
			
			case 2:
				if (func_10())
				{
					iLocal_76 = 3;
				}
				break;
			
			case 3:
				func_9();
				iLocal_76 = 4;
				break;
			
			case 4:
				if (Global_95883)
				{
					iLocal_76 = 5;
				}
				func_4();
				break;
			
			case 5:
				func_1();
				func_12();
				break;
		}
		wait(iLocal_77);
	}
}

void func_1()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (unk_0xAE06B9E39EBDE049(iLocal_49[iVar0]))
		{
			if (unk_0x1D88F87079AF2FA7(iLocal_49[iVar0]) || (!unk_0xA59F96B50B97E63C(iLocal_49[iVar0], 0) && !unk_0xDC79F755CB11603C(iLocal_49[iVar0])))
			{
				unk_0x03A2522C845CFAC6(&(iLocal_49[iVar0]));
				unk_0x586DDC617E714637(&(iLocal_51[iVar0]));
			}
			else
			{
				if (iVar0 == 0 || iVar0 == 2)
				{
					func_3(1);
				}
				func_2(&(iLocal_49[iVar0]), &(iLocal_51[iVar0]));
				unk_0xE730EAF558C97567(&(iLocal_49[iVar0]));
				unk_0x2481907DEE6B85EA(&(iLocal_51[iVar0]));
			}
		}
		iVar0++;
	}
	if (unk_0xAE06B9E39EBDE049(iLocal_50))
	{
		if (unk_0x1D88F87079AF2FA7(iLocal_50))
		{
			unk_0x03A2522C845CFAC6(&iLocal_50);
			unk_0x586DDC617E714637(&iLocal_52);
		}
		else
		{
			func_2(&iLocal_50, &iLocal_52);
			unk_0xE730EAF558C97567(&iLocal_50);
			unk_0x2481907DEE6B85EA(&iLocal_52);
		}
	}
	if (bLocal_60)
	{
		unk_0x0506FDB9D8A504E1(101, "AirportJetTakeOff");
		unk_0x0506FDB9D8A504E1(102, "AirportJetTakeOff");
		unk_0x0506FDB9D8A504E1(101, "AirportNew");
		unk_0x0506FDB9D8A504E1(102, "AirportNew");
		unk_0x0506FDB9D8A504E1(103, "AirplaneLandingRedux");
		unk_0x0506FDB9D8A504E1(104, "AirplaneLandingRedux");
		unk_0x0506FDB9D8A504E1(101, "EastWestFlight");
	}
}

void func_2(int iParam0, var uParam1)
{
	if (((unk_0xAE06B9E39EBDE049(*iParam0) && unk_0xAE06B9E39EBDE049(*uParam1)) && !unk_0xA59F96B50B97E63C(*iParam0, 0)) && !unk_0xA59F96B50B97E63C(*uParam1, 0))
	{
		if (unk_0xA16974805191D19C(*iParam0))
		{
			if (unk_0x3AF46A926C830E50(*iParam0))
			{
				if (!unk_0xA59F96B50B97E63C(unk_0x9B0761B4C3EB8BC7(), 0))
				{
					unk_0x95B4DF5308CFD8F9(*uParam1, *iParam0, 0, 0, unk_0x3E4D3CCC220BDFB1(unk_0x9B0761B4C3EB8BC7(), true), 8, 50f, -1f, 30f, 100, 50, 1);
				}
			}
		}
	}
}

void func_3(bool bParam0)
{
	if (bLocal_56)
	{
		if (unk_0xAE06B9E39EBDE049(iLocal_49[0]) && !unk_0xA59F96B50B97E63C(iLocal_49[0], 0))
		{
			if (unk_0xA16974805191D19C(iLocal_49[0]))
			{
				if (!unk_0x3AF46A926C830E50(iLocal_49[0]))
				{
					if ((!unk_0x5AEB5DDFFAD43CA5(unk_0x9B0761B4C3EB8BC7()) && !unk_0xA59F96B50B97E63C(iLocal_51[0], 0)) && !unk_0xA59F96B50B97E63C(iLocal_49[0], 0))
					{
						unk_0x95B4DF5308CFD8F9(iLocal_51[0], iLocal_49[0], 0, 0, unk_0x3E4D3CCC220BDFB1(unk_0x9B0761B4C3EB8BC7(), true), 8, 50f, -1f, 90f, 100, 50, 1);
					}
				}
				else if (bParam0)
				{
					if ((!unk_0x5AEB5DDFFAD43CA5(unk_0x9B0761B4C3EB8BC7()) && !unk_0xA59F96B50B97E63C(iLocal_51[0], 0)) && !unk_0xA59F96B50B97E63C(iLocal_49[0], 0))
					{
						unk_0x95B4DF5308CFD8F9(iLocal_51[0], iLocal_49[0], 0, 0, unk_0x3E4D3CCC220BDFB1(unk_0x9B0761B4C3EB8BC7(), true), 8, 50f, -1f, 90f, 100, 50, 1);
					}
				}
			}
		}
		if (unk_0xAE06B9E39EBDE049(iLocal_49[2]) && !unk_0xA59F96B50B97E63C(iLocal_49[2], 0))
		{
			if (unk_0xA16974805191D19C(iLocal_49[2]))
			{
				if (!unk_0x3AF46A926C830E50(iLocal_49[2]))
				{
					if ((!unk_0x5AEB5DDFFAD43CA5(unk_0x9B0761B4C3EB8BC7()) && !unk_0xA59F96B50B97E63C(iLocal_51[2], 0)) && !unk_0xA59F96B50B97E63C(iLocal_49[2], 0))
					{
						unk_0x95B4DF5308CFD8F9(iLocal_51[2], iLocal_49[2], 0, 0, unk_0x3E4D3CCC220BDFB1(unk_0x9B0761B4C3EB8BC7(), true), 8, 50f, -1f, 90f, 100, 50, 1);
					}
				}
				else if (bParam0)
				{
					if ((!unk_0x5AEB5DDFFAD43CA5(unk_0x9B0761B4C3EB8BC7()) && !unk_0xA59F96B50B97E63C(iLocal_51[2], 0)) && !unk_0xA59F96B50B97E63C(iLocal_49[2], 0))
					{
						unk_0x95B4DF5308CFD8F9(iLocal_51[2], iLocal_49[2], 0, 0, unk_0x3E4D3CCC220BDFB1(unk_0x9B0761B4C3EB8BC7(), true), 8, 50f, -1f, 90f, 100, 50, 1);
					}
				}
			}
		}
	}
}

void func_4()
{
	int iVar0;
	
	switch (iLocal_66)
	{
		case 0:
			Local_53[0 /*3*/] = { -1542.113f, -3023.802f, 23.2538f };
			Local_53[1 /*3*/] = { -3089.888f, -1960.075f, 313.559f };
			Local_53[2 /*3*/] = { -1037.638f, -3316.12f, 23.2475f };
			Local_53[3 /*3*/] = { 451.174f, -4009.46f, 135.1171f };
			Local_54 = { -1612.174f, -2688.442f, 12.9444f };
			if (!unk_0x5AEB5DDFFAD43CA5(unk_0x9B0761B4C3EB8BC7()))
			{
				if ((unk_0x94BF5C4EB0D40E9E(unk_0x9B0761B4C3EB8BC7()) || unk_0xAABDC18B9F6EC79D(unk_0x9B0761B4C3EB8BC7())) || unk_0x0F1E960B06B93848(unk_0x460153A63B9477BC(), 0))
				{
					bLocal_56 = false;
				}
				else
				{
					bLocal_56 = true;
				}
			}
			iLocal_66 = 1;
			break;
		
		case 1:
			unk_0x78FCB2E22C41B9D5(joaat("jet"));
			unk_0x78FCB2E22C41B9D5(iLocal_62);
			unk_0x766028370E52319B(101, "AirportJetTakeOff");
			unk_0x766028370E52319B(103, "AirplaneLandingRedux");
			unk_0x766028370E52319B(101, "EastWestFlight");
			unk_0x766028370E52319B(101, "AirportNew");
			unk_0x766028370E52319B(104, "AirplaneLandingRedux");
			iLocal_66 = 2;
			break;
		
		case 2:
			if (!bLocal_60)
			{
				if ((((((unk_0x7D167B9A0CCDA347(joaat("jet")) && unk_0x7D167B9A0CCDA347(iLocal_62)) && unk_0x08A8988B88C144BE(101, "AirportJetTakeOff")) && unk_0x08A8988B88C144BE(103, "AirplaneLandingRedux")) && unk_0x08A8988B88C144BE(101, "AirportNew")) && unk_0x08A8988B88C144BE(104, "AirplaneLandingRedux")) && unk_0x08A8988B88C144BE(101, "EastWestFlight"))
				{
					bLocal_60 = true;
				}
				else
				{
					unk_0x78FCB2E22C41B9D5(joaat("jet"));
					unk_0x78FCB2E22C41B9D5(iLocal_62);
					unk_0x766028370E52319B(101, "AirportJetTakeOff");
					unk_0x766028370E52319B(102, "AirportJetTakeOff");
					unk_0x766028370E52319B(101, "AirportNew");
					unk_0x766028370E52319B(102, "AirportNew");
					unk_0x766028370E52319B(101, "EastWestFlight");
				}
			}
			if (bLocal_60)
			{
				if (!unk_0x9A70B1BD2A5BA09C(Local_53[0 /*3*/], 50f) && !unk_0x9A70B1BD2A5BA09C(Local_54, 50f))
				{
					iLocal_66 = 3;
				}
				else
				{
					if (unk_0x9A70B1BD2A5BA09C(Local_53[0 /*3*/], 50f))
					{
					}
					if (unk_0x9A70B1BD2A5BA09C(Local_54, 50f))
					{
					}
				}
			}
			break;
		
		case 3:
			iLocal_49[0] = unk_0xCE4780E24AFDFBF9(joaat("jet"), Local_53[0 /*3*/], 0f, true, true, false);
			unk_0xE922BAA80E8F9324(iLocal_49[0], 240.3179f);
			unk_0x6A771763B2BBF610(iLocal_49[0], 0);
			iLocal_49[1] = unk_0xCE4780E24AFDFBF9(joaat("jet"), Local_53[1 /*3*/], 0f, true, true, false);
			unk_0x6A771763B2BBF610(iLocal_49[1], 0);
			iLocal_49[2] = unk_0xCE4780E24AFDFBF9(joaat("jet"), Local_53[2 /*3*/], 0f, true, true, false);
			unk_0x6A771763B2BBF610(iLocal_49[2], 0);
			iLocal_49[3] = unk_0xCE4780E24AFDFBF9(joaat("jet"), Local_53[3 /*3*/], 0f, true, true, false);
			unk_0x6A771763B2BBF610(iLocal_49[3], 0);
			iVar0 = 0;
			while (iVar0 < 4)
			{
				if (unk_0xAE06B9E39EBDE049(iLocal_49[iVar0]))
				{
					iLocal_51[iVar0] = unk_0x6A7A2C83BD302BA4(iLocal_49[iVar0], 4, iLocal_62, -1, 1, true);
					unk_0x1CCBC799127EA27B(iLocal_49[iVar0], 1000);
					unk_0xC160551F55D6365A(iLocal_49[iVar0], true, true, 0);
					unk_0x4E65320BC9AD521C(iLocal_51[iVar0], true);
				}
				iVar0++;
			}
			func_8(&(iLocal_49[1]), &(iLocal_51[1]));
			func_8(&(iLocal_49[2]), &(iLocal_51[2]));
			func_8(&(iLocal_49[3]), &(iLocal_51[3]));
			if (bLocal_56)
			{
				if (unk_0xAE06B9E39EBDE049(iLocal_49[0]))
				{
					if (unk_0x08A8988B88C144BE(101, "AirportJetTakeOff"))
					{
						unk_0xCF06A0B67AC86D6E(iLocal_49[0], 101, "AirportJetTakeOff", 2, 5, 786603);
						iLocal_55 = 1;
					}
					else
					{
						unk_0x766028370E52319B(101, "AirportJetTakeOff");
					}
				}
			}
			iLocal_66 = 4;
			break;
		
		case 4:
			if (iLocal_59)
			{
				if (unk_0xAE06B9E39EBDE049(iLocal_49[3]) && !unk_0xA59F96B50B97E63C(iLocal_49[3], 0))
				{
					if (unk_0x1D88F87079AF2FA7(iLocal_49[3]))
					{
						if (!iLocal_57)
						{
							func_8(&(iLocal_49[3]), &(iLocal_51[3]));
							iLocal_57 = 1;
						}
					}
				}
			}
			func_3(0);
			func_7();
			switch (iLocal_65)
			{
				case 0:
					if (!iLocal_55)
					{
						if (bLocal_56)
						{
							if (unk_0xAE06B9E39EBDE049(iLocal_49[0]) && !unk_0xA59F96B50B97E63C(iLocal_49[0], 0))
							{
								if (unk_0x1D88F87079AF2FA7(iLocal_49[0]) && !unk_0x9A70B1BD2A5BA09C(Local_53[0 /*3*/], 50f))
								{
									if (unk_0x08A8988B88C144BE(101, "AirportJetTakeOff"))
									{
										unk_0xCF06A0B67AC86D6E(iLocal_49[0], 101, "AirportJetTakeOff", 2, 5, 786603);
										iLocal_55 = 1;
									}
									else
									{
										unk_0x766028370E52319B(101, "AirportJetTakeOff");
									}
								}
							}
						}
					}
					if (iLocal_55)
					{
						if (unk_0xAE06B9E39EBDE049(iLocal_49[0]) && !unk_0xA59F96B50B97E63C(iLocal_49[0], 0))
						{
							if (unk_0x3AF46A926C830E50(iLocal_49[0]))
							{
								fLocal_63 = unk_0xCC18F0D31FF84403(iLocal_49[0]);
							}
						}
						if (fLocal_63 > 1100f)
						{
							iLocal_65 = 1;
						}
					}
					break;
				
				case 1:
					if (unk_0xAE06B9E39EBDE049(iLocal_49[1]) && !unk_0xA59F96B50B97E63C(iLocal_49[1], 0))
					{
						if (bLocal_56)
						{
							if (unk_0x1D88F87079AF2FA7(iLocal_49[1]))
							{
								if (iLocal_59)
								{
									if (iLocal_57)
									{
										func_6(&(iLocal_49[1]), &(iLocal_51[1]));
										if (unk_0x08A8988B88C144BE(103, "AirplaneLandingRedux"))
										{
											unk_0xCF06A0B67AC86D6E(iLocal_49[1], 103, "AirplaneLandingRedux", 2, 5, 786603);
											iLocal_58 = 0;
											iLocal_65 = 2;
										}
										else
										{
											unk_0x766028370E52319B(103, "AirplaneLandingRedux");
										}
									}
								}
								else
								{
									func_6(&(iLocal_49[1]), &(iLocal_51[1]));
									if (unk_0x08A8988B88C144BE(103, "AirplaneLandingRedux"))
									{
										unk_0xCF06A0B67AC86D6E(iLocal_49[1], 103, "AirplaneLandingRedux", 2, 5, 786603);
										iLocal_58 = 0;
										iLocal_65 = 2;
									}
									else
									{
										unk_0x766028370E52319B(103, "AirplaneLandingRedux");
									}
								}
							}
						}
					}
					break;
				
				case 2:
					if (unk_0xAE06B9E39EBDE049(iLocal_49[1]) && !unk_0xA59F96B50B97E63C(iLocal_49[1], 0))
					{
						if (!unk_0x3AF46A926C830E50(iLocal_49[1]))
						{
							iLocal_65 = 3;
						}
					}
					break;
				
				case 3:
					if (unk_0xAE06B9E39EBDE049(iLocal_49[2]) && !unk_0xA59F96B50B97E63C(iLocal_49[2], 0))
					{
						if (unk_0x08A8988B88C144BE(101, "AirportNew"))
						{
							if (!unk_0x9A70B1BD2A5BA09C(Local_53[2 /*3*/], 50f))
							{
								if (!unk_0x3AF46A926C830E50(iLocal_49[2]))
								{
									func_6(&(iLocal_49[2]), &(iLocal_51[2]));
									unk_0x43EDD5EDA578C63A(iLocal_49[2], 101, "AirportNew", 1);
									iLocal_65 = 4;
								}
							}
						}
					}
					break;
				
				case 4:
					if (unk_0xAE06B9E39EBDE049(iLocal_49[2]) && !unk_0xA59F96B50B97E63C(iLocal_49[2], 0))
					{
						if (unk_0x3AF46A926C830E50(iLocal_49[2]))
						{
							fLocal_64 = unk_0xCC18F0D31FF84403(iLocal_49[2]);
						}
					}
					if (unk_0xAE06B9E39EBDE049(iLocal_49[1]) && !unk_0xA59F96B50B97E63C(iLocal_49[1], 0))
					{
						if (!unk_0x3AF46A926C830E50(iLocal_49[1]))
						{
							if (unk_0x1D88F87079AF2FA7(iLocal_49[1]))
							{
								func_8(&(iLocal_49[1]), &(iLocal_51[1]));
								iLocal_58 = 1;
							}
						}
					}
					if (fLocal_64 > 1100f)
					{
						if (unk_0xAE06B9E39EBDE049(iLocal_49[3]) && !unk_0xA59F96B50B97E63C(iLocal_49[3], 0))
						{
							if (unk_0x08A8988B88C144BE(104, "AirplaneLandingRedux"))
							{
								if (!unk_0x9A70B1BD2A5BA09C(Local_53[3 /*3*/], 50f))
								{
									if (!unk_0x3AF46A926C830E50(iLocal_49[3]) && iLocal_58)
									{
										func_6(&(iLocal_49[3]), &(iLocal_51[3]));
										unk_0x43EDD5EDA578C63A(iLocal_49[3], 104, "AirplaneLandingRedux", 1);
										iLocal_65 = 5;
									}
								}
							}
						}
					}
					break;
				
				case 5:
					if (unk_0xAE06B9E39EBDE049(iLocal_49[3]) && !unk_0xA59F96B50B97E63C(iLocal_49[3], 0))
					{
						if (!unk_0x3AF46A926C830E50(iLocal_49[3]))
						{
							func_5();
							iLocal_65 = 0;
						}
					}
					break;
			}
			break;
	}
}

void func_5()
{
	fLocal_63 = 0f;
	iLocal_55 = 0;
	iLocal_59 = 1;
	iLocal_57 = 0;
}

void func_6(var uParam0, var uParam1)
{
	unk_0x80250B8368A4E611(*uParam0, true, 0);
	unk_0x80250B8368A4E611(*uParam1, true, 0);
	unk_0x58ADF88C51AAFDC5(*uParam0, true, 0);
	unk_0x6A8F948698B360B4(*uParam0, false);
}

void func_7()
{
	struct<3> Var0;
	
	switch (iLocal_61)
	{
		case 0:
			if (!unk_0xAE06B9E39EBDE049(iLocal_50))
			{
				iLocal_50 = unk_0xCE4780E24AFDFBF9(joaat("jet"), -65.3177f, 15.4603f, 703.106f, 0f, true, true, false);
				unk_0x1CCBC799127EA27B(iLocal_50, 1000);
				unk_0xC160551F55D6365A(iLocal_50, true, true, 0);
				unk_0x6A771763B2BBF610(iLocal_50, 0);
				iLocal_52 = unk_0x6A7A2C83BD302BA4(iLocal_50, 4, iLocal_62, -1, 1, true);
				unk_0x4E65320BC9AD521C(iLocal_52, true);
				iLocal_61 = 1;
			}
			break;
		
		case 1:
			if (unk_0xAE06B9E39EBDE049(iLocal_50) && !unk_0xA59F96B50B97E63C(iLocal_50, 0))
			{
				if (unk_0x08A8988B88C144BE(101, "EastWestFlight"))
				{
					if (!unk_0x3AF46A926C830E50(iLocal_50))
					{
						unk_0xCF06A0B67AC86D6E(iLocal_50, 101, "EastWestFlight", 2, 5, 786603);
						iLocal_61 = 2;
					}
				}
			}
			break;
		
		case 2:
			if (!unk_0xA59F96B50B97E63C(unk_0x9B0761B4C3EB8BC7(), 0))
			{
				Var0 = { unk_0x3E4D3CCC220BDFB1(unk_0x9B0761B4C3EB8BC7(), true) };
			}
			if (unk_0xAE06B9E39EBDE049(iLocal_50) && !unk_0xA59F96B50B97E63C(iLocal_50, 0))
			{
				if (!unk_0x3AF46A926C830E50(iLocal_50))
				{
					if ((unk_0x1D88F87079AF2FA7(iLocal_50) && !unk_0x9A70B1BD2A5BA09C(-1602.086f, -2674.039f, 12.9444f, 50f)) && vdist2(Var0, unk_0x3E4D3CCC220BDFB1(iLocal_50, true)) > 62500f)
					{
						iLocal_61 = 1;
					}
				}
			}
			break;
	}
}

void func_8(var uParam0, var uParam1)
{
	unk_0x80250B8368A4E611(*uParam0, false, 0);
	unk_0x80250B8368A4E611(*uParam1, false, 0);
	unk_0x58ADF88C51AAFDC5(*uParam0, false, 0);
	unk_0x6A8F948698B360B4(*uParam0, true);
}

void func_9()
{
}

int func_10()
{
	return 1;
}

void func_11()
{
}

void func_12()
{
	func_1();
	func_13();
	unk_0xD39E529EBE5DB04F();
}

void func_13()
{
	struct<3> Var0;
	struct<3> Var1;
	struct<3> Var2;
	float fVar3;
	
	if (unk_0xAE06B9E39EBDE049(iLocal_67))
	{
		if (unk_0x1D88F87079AF2FA7(iLocal_67))
		{
			unk_0x03A2522C845CFAC6(&iLocal_67);
		}
		else if (!unk_0xA59F96B50B97E63C(iLocal_67, 0) && !unk_0x5AEB5DDFFAD43CA5(iLocal_68))
		{
			unk_0xD90A910C8C028796(iLocal_67);
			unk_0xCBA6B2B569DCAFD8(iLocal_68, true);
			Var0 = { unk_0x3E4D3CCC220BDFB1(iLocal_67, true) };
			fVar3 = unk_0xEF7858F25585F853(iLocal_67);
			Var1 = { 0f, 500f, 50f };
			Var2 = { unk_0x1BAE5C94E38E44FE(Var0, fVar3, Var1) };
			unk_0x978007212AAC392F(iLocal_68, iLocal_67, 0, 0, Var2, 4, 50f, -1f, 0f, 100, 50, -1f, 0);
		}
	}
	if (bLocal_73)
	{
		unk_0x0506FDB9D8A504E1(102, "HelicopterTakeOff");
	}
}

