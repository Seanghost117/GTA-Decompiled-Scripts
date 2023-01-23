void main() // Position - 0x0
{
	unk_0x389D5B1C24A046B5();
	func_1("main_install", DEFAULT);
	return;
}

void func_1(char* sParam0, eStackSize essParam1) // Position - 0x15
{
	unk_0x3EC562D93709C894(sParam0);

	while (!unk_0x6CAF14BE58B4BFF8(sParam0))
	{
		SYSTEM::WAIT(0);
		unk_0x3EC562D93709C894(sParam0);
	}

	SYSTEM::START_NEW_SCRIPT(sParam0, essParam1);
	return;
}

