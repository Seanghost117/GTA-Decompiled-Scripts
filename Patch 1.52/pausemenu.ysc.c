#region Local Var
	struct<2> ScriptParam_0 = { 0, 0 } ;
	var uScriptParam_1 = 0;
	var uScriptParam_2 = 0;
#endregion

void __EntryFunction__()
{
	switch (ScriptParam_0)
	{
		case 3:
			while (true)
			{
				wait(5000);
			}
			break;
		
		case 2:
			if (ScriptParam_0.f_1 == -1029820160)
			{
			}
			break;
		
		case 0:
		case 1:
			if (ScriptParam_0.f_1 == -1931845307)
			{
				func_2(1, 0, -1029819160, 0, 1, "PM_PANE_AUD");
				func_2(1, 1, -1029819160, 1, 0, "PM_PANE_DIS");
				func_1(1);
			}
			if (ScriptParam_0.f_1 == -1029820160)
			{
			}
			break;
	}
	unk_0xD39E529EBE5DB04F();
}

void func_1(int iParam0)
{
	if (unk_0x9ED3958F25B8EB59("DISPLAY_DATA_SLOT"))
	{
		unk_0xAD291B8F75D737AD(iParam0);
		unk_0xE1FDD153F5858534();
	}
}

void func_2(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4, char* sParam5)
{
	if (unk_0x9ED3958F25B8EB59("SET_DATA_SLOT"))
	{
		unk_0xAD291B8F75D737AD(iParam0);
		unk_0xAD291B8F75D737AD(iParam1);
		unk_0xAD291B8F75D737AD(iParam2);
		unk_0xAD291B8F75D737AD(iParam3);
		unk_0xAD291B8F75D737AD(0);
		unk_0xAD291B8F75D737AD(0);
		if (bParam4)
		{
			unk_0xAD291B8F75D737AD(1);
		}
		else
		{
			unk_0xAD291B8F75D737AD(0);
		}
		func_3(sParam5);
		unk_0xE1FDD153F5858534();
	}
}

void func_3(char* sParam0)
{
	unk_0xB23270F3D5E62FDE(sParam0);
	unk_0x2042E9CA4306F725();
}

