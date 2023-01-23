#region Local Var
	int iLocal_0 = 0;
	var uScriptParam_0 = 0;
	var uScriptParam_1 = 5;
	var uScriptParam_2 = 0;
	var uScriptParam_3 = 0;
	var uScriptParam_4 = 0;
	var uScriptParam_5 = 0;
	var uScriptParam_6 = 0;
	var uScriptParam_7 = 0;
	var uScriptParam_8 = 0;
	var uScriptParam_9 = 0;
	var uScriptParam_10 = 0;
	var uScriptParam_11 = 0;
	var uScriptParam_12 = 0;
	var uScriptParam_13 = 0;
	var uScriptParam_14 = 0;
	var uScriptParam_15 = 0;
	var uScriptParam_16 = 0;
	var uScriptParam_17 = 5;
	var uScriptParam_18 = 0;
	var uScriptParam_19 = 0;
	var uScriptParam_20 = 0;
	var uScriptParam_21 = 0;
	var uScriptParam_22 = 0;
#endregion

void __EntryFunction__()
{
	if (unk_0x7B70881748D166CD(joaat("wp_partyboombox")) > 1)
	{
		unk_0xD39E529EBE5DB04F();
	}
	if (unk_0xED06FD5709A59F02(18))
	{
		func_1();
	}
	while (true)
	{
		wait(0);
		if (!unk_0x1116855A2A7A342C())
		{
			iLocal_0 = 3;
		}
		switch (iLocal_0)
		{
			case 0:
				if (unk_0x1F596C965B00E290() >= 22 || unk_0x1F596C965B00E290() <= 4)
				{
					iLocal_0 = 1;
				}
				else
				{
					func_1();
				}
				break;
			
			case 1:
				if (!unk_0xF1E6A9807E4F24AD("ID2_21_G_Night"))
				{
					unk_0x3C3BE9E8DD78E56B("ID2_21_G_Night");
					iLocal_0 = 2;
				}
				break;
			
			case 2:
				break;
			
			case 3:
				if (!unk_0xE9159DB182CF0841() && !unk_0x9CC4D06F5338CA6B())
				{
					func_1();
				}
				break;
		}
	}
}

void func_1()
{
	if (unk_0xF1E6A9807E4F24AD("ID2_21_G_Night"))
	{
		unk_0xC6371D262CF7DC77("ID2_21_G_Night");
	}
	unk_0xD39E529EBE5DB04F();
}

