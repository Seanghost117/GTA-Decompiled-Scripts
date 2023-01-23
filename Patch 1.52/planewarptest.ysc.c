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
	int iLocal_18 = 0;
	struct<3> Local_19[2];
	float fLocal_20[2] = { 0f, 0f };
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
	if (unk_0xED06FD5709A59F02(3))
	{
		func_1();
	}
	unk_0x227BB9ED71ECB6E8(1);
	unk_0x78FCB2E22C41B9D5(joaat("cuban800"));
	while (!unk_0x7D167B9A0CCDA347(joaat("cuban800")))
	{
		wait(0);
	}
	Local_19[0 /*3*/] = { 1169.976f, 3592.572f, 32.6481f };
	Local_19[1 /*3*/] = { 1215.738f, 3586.608f, 33.5131f };
	fLocal_20[0] = 277.7043f;
	fLocal_20[1] = 77.1113f;
	if (!unk_0xA59F96B50B97E63C(unk_0x9B0761B4C3EB8BC7(), 0))
	{
		unk_0x03D382CB0B44E2FC(unk_0x9B0761B4C3EB8BC7(), 1220.202f, 3596.281f, 33.259f, 1, false, 0, 1);
	}
	unk_0x9F7ADA6298BEF7E5(1220.202f, 3596.281f, 33.259f);
	iLocal_18 = unk_0xCE4780E24AFDFBF9(joaat("cuban800"), Local_19[0 /*3*/], fLocal_20[0], true, true, false);
	unk_0xB11D151E210D4FAC(iLocal_18, 1084227584);
	unk_0x74528AC0906CBABE(joaat("cuban800"));
	if (!unk_0xA59F96B50B97E63C(unk_0x9B0761B4C3EB8BC7(), 0))
	{
		unk_0x13A4BD6CC31F7B8F(unk_0x9B0761B4C3EB8BC7(), iLocal_18, -1);
	}
	while (true)
	{
		func_1();
		wait(0);
	}
}

void func_1()
{
	if (!unk_0xA59F96B50B97E63C(unk_0x9B0761B4C3EB8BC7(), 0))
	{
		unk_0x2BB0EF9DE445EA13(unk_0x9B0761B4C3EB8BC7());
	}
	if (unk_0xAE06B9E39EBDE049(iLocal_18))
	{
		unk_0x03A2522C845CFAC6(&iLocal_18);
	}
	unk_0x74528AC0906CBABE(joaat("cuban800"));
	unk_0xD39E529EBE5DB04F();
}

