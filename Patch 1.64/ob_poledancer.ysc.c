#region Local Var
	int iLocal_0 = 0;
	var uLocal_1 = 0;
	var uLocal_2 = 0;
	var uLocal_3 = 0;
	var uLocal_4 = 0;
	var uLocal_5 = 0;
	char* sLocal_6 = 0;
	int iLocal_7 = 0;
	char* sLocal_8 = 0;
	BOOL bLocal_9 = 0;
	var uScriptParam_0 = 0;
#endregion

void main() // Position - 0x0
{
	sLocal_6 = "Poledance_01";
	iLocal_7 = joaat("A_F_Y_Beach_01");
	sLocal_8 = "MISSSTRIP_CLUB";

	if (unk_0x7DE17ACDD8BA2642(uScriptParam_0))
	{
		unk_0x2718E9CC165A99F6(uScriptParam_0, 1);
		uLocal_2 = { unk_0x7394CB479CCA24AF(uScriptParam_0, 0f, 0f, 0f) };
		uLocal_5 = unk_0xD850DD08D5434072(uScriptParam_0);
		unk_0xDDE449983CE7572E(uScriptParam_0, 0, 0);
	}

	while (true)
	{
		SYSTEM::WAIT(0);
	
		if (unk_0x7DE17ACDD8BA2642(uScriptParam_0))
		{
			if (unk_0x4B85D97500605AE9(uScriptParam_0))
			{
				switch (iLocal_0)
				{
					case 0:
						if (func_5())
						{
							func_4();
							iLocal_0 = 2;
						}
						break;
				
					case 2:
						func_3();
					
						if (func_2())
						{
							unk_0xDDE449983CE7572E(uScriptParam_0, 1, 0);
							iLocal_0 = 3;
						}
						break;
				
					case 3:
						if (!unk_0x66599E73DBA5A850(uLocal_1))
						{
							unk_0xA2C73FAE5789EC05(uLocal_1, -1);
							unk_0x24E4702792B3DA06(unk_0x93E99A2DBCBA9CFA(), 1);
							unk_0x71A535529C1CA5DF(uLocal_1, 1);
							unk_0x675D9C12C73D3DE7();
						}
						break;
				}
			}
			else
			{
				func_1();
			}
		}
		else
		{
			func_1();
		}
	}

	return;
}

void func_1() // Position - 0xDC
{
	if (!unk_0x055111B11E6624FD(uLocal_1, 0))
		if (!unk_0x865259F0333CAA4B(uLocal_1))
			unk_0xE9C250FA35A936C8(&uLocal_1);
		else
			unk_0x71A535529C1CA5DF(uLocal_1, 1);

	unk_0x675D9C12C73D3DE7();
	return;
}

BOOL func_2() // Position - 0x10D
{
	var unk;

	unk = { 2f, 2f, 0.5f };

	if (!unk_0x66599E73DBA5A850(unk_0xC1A5EC5C986B98AD()))
	{
		if (!unk_0x66599E73DBA5A850(uLocal_1))
		{
			if (unk_0xEAEF747543427AC5(unk_0xC1A5EC5C986B98AD(), uLocal_1, unk, 0, 1, 0))
				return true;
		
			if (unk_0x7559C38E6535AB89(uLocal_1, unk_0xC1A5EC5C986B98AD(), 1))
				return true;
		
			if (unk_0x110B96B5C67CC73B(unk_0xC1A5EC5C986B98AD(), uLocal_1))
				return true;
		}
	
		if (unk_0x110D030CCD4E83A6(unk_0xC1A5EC5C986B98AD()))
			return true;
	}

	return false;
}

void func_3() // Position - 0x181
{
	if (!unk_0x66599E73DBA5A850(uLocal_1))
	{
		if (unk_0xF5F493B789EA063E(uLocal_1, joaat("SCRIPT_TASK_PLAY_ANIM")) == 7)
		{
			unk_0x3EE48ADC8C7F5CC4(uLocal_1, sLocal_8, sLocal_6, 1090519040, -1056964608, -1, 0, 0, 0, 0, 0);
		}
		else if (unk_0xF6C7BE2F584AB5CB(uLocal_1, sLocal_8, sLocal_6, 3))
		{
			unk_0x3EE48ADC8C7F5CC4(uLocal_1, sLocal_8, sLocal_6, 1090519040, -1056964608, -1, 0, 0, 0, 0, 0);
		}
		else if (!bLocal_9)
		{
			if (unk_0x7BB3D8F4F6310EB8(uLocal_1, sLocal_8, sLocal_6, 3))
			{
				unk_0x52B9699AA37A4001(uLocal_1, sLocal_8, sLocal_6, unk_0xD88C7A93096DA0F7(0, 1065353216));
				bLocal_9 = true;
			}
		}
	}

	return;
}

void func_4() // Position - 0x215
{
	if (unk_0x055111B11E6624FD(uLocal_1, 0))
	{
		uLocal_1 = unk_0x69FDD9508259E5B5(5, iLocal_7, uLocal_2, uLocal_2.f_1, uLocal_2.f_2, uLocal_5, 1, 1);
		unk_0x90FF6DBE9D84E401(uLocal_1, 0);
		unk_0xD14067404D35AAE7(uLocal_1, 0);
		unk_0xC5B2830898581862(uLocal_1, 1);
	}

	return;
}

BOOL func_5() // Position - 0x253
{
	unk_0x852EC2A7DE66202D(iLocal_7);
	unk_0x28818732C8F0F80E(sLocal_8);

	if (unk_0x0CBB7C273DED26E7(iLocal_7) && unk_0x2BBF749E555360DC(sLocal_8))
	{
		return true;
	}
	else
	{
		unk_0x852EC2A7DE66202D(iLocal_7);
		unk_0x28818732C8F0F80E(sLocal_8);
	}

	return false;
}

