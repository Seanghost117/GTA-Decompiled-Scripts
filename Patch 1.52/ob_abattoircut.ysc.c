#region Local Var
	var uLocal_0 = 0;
	var uLocal_1 = 0;
	int iLocal_2 = 0;
	int iScriptParam_0 = 0;
#endregion

void __EntryFunction__()
{
	if (unk_0xED06FD5709A59F02(2))
	{
		func_1();
	}
	if (unk_0xAE06B9E39EBDE049(iScriptParam_3))
	{
		unk_0x6A8F948698B360B4(iScriptParam_3, true);
	}
	while (true)
	{
		wait(0);
		if (unk_0xAE06B9E39EBDE049(iScriptParam_3))
		{
			if (unk_0xED07D558B3EDDF8A(iScriptParam_3) && unk_0x7B70881748D166CD(joaat("michael2")) > 0)
			{
				switch (iLocal_2)
				{
					case 0:
						if (unk_0xEE37CF67E6E839EA(iScriptParam_3))
						{
							unk_0x131ED02492676000("MISSMIC2");
							if (unk_0xC614DDE265D18415("MISSMIC2"))
							{
								unk_0x97B8FF2D794A65A7(iScriptParam_3, "beefsplitter_loop", "MISSMIC2", 1f, true, false, 0, 0f, 0);
								iLocal_2 = 1;
							}
						}
						break;
					
					case 1:
						break;
					
					case 2:
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
}

void func_1()
{
	func_2("ob_abattoir Terminated >>>>>>>>>>>>>>>>>\n");
	unk_0x1082C25039B168F8("MISSMIC2");
	unk_0xD39E529EBE5DB04F();
}

void func_2(char* sParam0)
{
	func_3(sParam0);
}

void func_3(char* sParam0)
{
	if (unk_0xF005CCA4263DF67F(sParam0, sParam0))
	{
	}
}

