#region Local Var
	int iScriptParam_0 = 0;
	var uScriptParam_1 = 0;
	var uScriptParam_2 = 0;
	var uScriptParam_3 = 0;
#endregion

void main() // Position - 0x0
{
	switch (iScriptParam_0)
	{
		case 3:
			while (true)
			{
				SYSTEM::WAIT(5000);
			}
			break;
	
		case 2:
			iScriptParam_0.f_1 == -1029820160;
			break;
	
		case 0:
		case 1:
			if (iScriptParam_0.f_1 == joaat("PM_REPLAY"))
			{
				func_2(1, 0, -1029819160, 0, true, "PM_PANE_AUD" /*Audio*/);
				func_2(1, 1, -1029819160, 1, false, "PM_PANE_DIS" /*Display*/);
				func_1(1);
			}
		
			iScriptParam_0.f_1 == -1029820160;
			break;
	}

	unk_0x675D9C12C73D3DE7();
	return;
}

void func_1(int iParam0) // Position - 0x8A
{
	if (unk_0x67E249DE642CF95F("DISPLAY_DATA_SLOT"))
	{
		unk_0xC6A3EF6C4A3412C1(iParam0);
		unk_0xAE3413B0654A0035();
	}

	return;
}

void func_2(int iParam0, int iParam1, int iParam2, int iParam3, BOOL bParam4, char* sParam5) // Position - 0xA6
{
	if (unk_0x67E249DE642CF95F("SET_DATA_SLOT"))
	{
		unk_0xC6A3EF6C4A3412C1(iParam0);
		unk_0xC6A3EF6C4A3412C1(iParam1);
		unk_0xC6A3EF6C4A3412C1(iParam2);
		unk_0xC6A3EF6C4A3412C1(iParam3);
		unk_0xC6A3EF6C4A3412C1(0);
		unk_0xC6A3EF6C4A3412C1(0);
	
		if (bParam4)
			unk_0xC6A3EF6C4A3412C1(1);
		else
			unk_0xC6A3EF6C4A3412C1(0);
	
		func_3(sParam5);
		unk_0xAE3413B0654A0035();
	}

	return;
}

void func_3(char* sParam0) // Position - 0xF6
{
	unk_0x2AF11E92DE43CDE3(sParam0);
	unk_0xF8FCA9E7130CE1C8();
	return;
}

