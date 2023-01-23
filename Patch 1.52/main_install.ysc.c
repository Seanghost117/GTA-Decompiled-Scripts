#region Local Var
	int iLocal_0 = 0;
	int iLocal_1 = 0;
#endregion

void __EntryFunction__()
{
	int iVar0;
	
	iLocal_0 = -1;
	unk_0xDB4E5F36ED3505EE();
	unk_0x3C3BE9E8DD78E56B("prologue06_int");
	unk_0x3C3BE9E8DD78E56B("prologue01");
	unk_0x3C3BE9E8DD78E56B("prologue02");
	unk_0x3C3BE9E8DD78E56B("prologue03");
	unk_0x3C3BE9E8DD78E56B("prologue04");
	unk_0x3C3BE9E8DD78E56B("prologue05");
	unk_0x3C3BE9E8DD78E56B("prologue06");
	unk_0x3C3BE9E8DD78E56B("prologuerd");
	unk_0x3C3BE9E8DD78E56B("Prologue01c");
	unk_0x3C3BE9E8DD78E56B("Prologue01d");
	unk_0x3C3BE9E8DD78E56B("Prologue01e");
	unk_0x3C3BE9E8DD78E56B("Prologue01f");
	unk_0x3C3BE9E8DD78E56B("Prologue01g");
	unk_0x3C3BE9E8DD78E56B("prologue01h");
	unk_0x3C3BE9E8DD78E56B("prologue01i");
	unk_0x3C3BE9E8DD78E56B("prologue01j");
	unk_0x3C3BE9E8DD78E56B("prologue01k");
	unk_0x3C3BE9E8DD78E56B("prologue01z");
	unk_0x3C3BE9E8DD78E56B("prologue03b");
	unk_0x3C3BE9E8DD78E56B("prologue04b");
	unk_0x3C3BE9E8DD78E56B("prologue05b");
	unk_0x3C3BE9E8DD78E56B("prologue06b");
	unk_0x3C3BE9E8DD78E56B("prologuerdb");
	unk_0x3C3BE9E8DD78E56B("prologue_occl");
	unk_0x3C3BE9E8DD78E56B("DES_ProTree_start");
	unk_0x3C3BE9E8DD78E56B("DES_ProTree_start_lod");
	unk_0x3C3BE9E8DD78E56B("prologue04_cover");
	unk_0x3C3BE9E8DD78E56B("prologue03_grv_fun");
	unk_0xC6371D262CF7DC77("prologue03_grv_dug");
	unk_0xC6371D262CF7DC77("prologue_grv_torch");
	unk_0x2607E12BE94F5DAD("prologue", 1);
	unk_0x78FCB2E22C41B9D5(joaat("csb_prolsec"));
	while (!unk_0x7D167B9A0CCDA347(joaat("csb_prolsec")))
	{
		wait(0);
	}
	unk_0x6FA80FA5528888D2(unk_0x460153A63B9477BC(), joaat("csb_prolsec"));
	if (!unk_0xA59F96B50B97E63C(unk_0x9B0761B4C3EB8BC7(), 0))
	{
		unk_0x03D382CB0B44E2FC(unk_0x9B0761B4C3EB8BC7(), 5313.8f, -5207.2f, 83.5f, 1, false, 0, 1);
		unk_0xE922BAA80E8F9324(unk_0x9B0761B4C3EB8BC7(), 169.2f);
	}
	unk_0x8CFF639CEFF5CF16(false);
	unk_0xDDEDC06C88DA4E04(unk_0x460153A63B9477BC(), false, 0);
	unk_0xF16CDD1D05F4411A(5312.996f, -5208.671f, 83.90526f, 10f, 0);
	iVar0 = unk_0x578C4EF320340AF7() + 10000;
	while (!unk_0x0C7F95EB5CFEFB8B() && unk_0x578C4EF320340AF7() < iVar0)
	{
		wait(0);
	}
	unk_0xCABF0F03F83CC102();
	unk_0x17E478571720218F("MISSION_FAILED_SCENE");
	unk_0xFD45D90342D2A0CD(2500);
	unk_0xF990EDED7D25FB88();
	unk_0xBAA4D421B8B8A744("NG_INSTALL", 0);
	while (true)
	{
		if (!unk_0x87F0CB19476706C3())
		{
			unk_0xFD45D90342D2A0CD(0);
		}
		unk_0x8DDE075026DB7EFD(0.5f, 0.5f, 1f, 1f, 0, 0, 0, 255, 0);
		unk_0x8DDE075026DB7EFD(0.5f, 0.5f, 0.8f, 0.8f, 20, 20, 20, 255, 0);
		unk_0x151E2F6EE4A34CFE(0.5f, 0.5f);
		unk_0x9CB19F83A6C8E47F(1);
		if (timera() > 10000 && unk_0xF5EE205091CE6DB2(0))
		{
			iLocal_0 = unk_0x344C570D6F8700DF(0, 5);
			if ((iLocal_0 - iLocal_1) != 0)
			{
				iLocal_1 = iLocal_0;
				settimera(0);
			}
		}
		else
		{
			switch (iLocal_0)
			{
				case 0:
					func_1(0.5f, 0.4f, "NG_INST_TT_1", 0);
					break;
				
				case 1:
					func_1(0.5f, 0.4f, "NG_INST_TT_2", 0);
					break;
				
				case 2:
					func_1(0.5f, 0.4f, "NG_INST_TT_3", 0);
					break;
				
				case 3:
					func_1(0.5f, 0.4f, "NG_INST_TT_4", 0);
					break;
				
				case 4:
					func_1(0.5f, 0.4f, "NG_INST_TT_5", 0);
					break;
				}
		}
		unk_0x7A242994FB80B8A6();
		if (unk_0xB7877CE6CD5264C3())
		{
			unk_0xEACDC87555AD9CE9();
			return;
		}
		wait(0);
	}
}

void func_1(float fParam0, float fParam1, char* sParam2, int iParam3)
{
	unk_0x40A75E32D30C605F(sParam2);
	unk_0xA434CC17B5517E4E(fParam0, fParam1, iParam3);
}

