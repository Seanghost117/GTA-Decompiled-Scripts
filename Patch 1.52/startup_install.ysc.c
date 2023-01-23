void __EntryFunction__()
{
	unk_0xDB4E5F36ED3505EE();
	func_1("main_install", 1424);
}

void func_1(char* sParam0, int iParam1)
{
	unk_0xBE9B3870B1B370E3(sParam0);
	while (!unk_0x8DC2EFD1CECAA468(sParam0))
	{
		wait(0);
		unk_0xBE9B3870B1B370E3(sParam0);
	}
	start_new_script(sParam0, iParam1);
}

