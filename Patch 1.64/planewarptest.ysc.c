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
	var uLocal_19 = 2;
	var uLocal_20 = 0;
	var uLocal_21 = 0;
	var uLocal_22 = 0;
	var uLocal_23 = 0;
	var uLocal_24 = 0;
	var uLocal_25 = 0;
	var uLocal_26 = 2;
	var uLocal_27 = 0;
	var uLocal_28 = 0;
#endregion

void main() // Position - 0x0
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

	if (unk_0x55EEDBBFDC6E810F(3))
		func_1();

	unk_0xB65977CD1EC089B5(1);
	unk_0x852EC2A7DE66202D(joaat("cuban800"));

	while (!unk_0x0CBB7C273DED26E7(joaat("cuban800")))
	{
		SYSTEM::WAIT(0);
	}

	uLocal_19[0 /*3*/] = { 1169.9758f, 3592.5715f, 32.6481f };
	uLocal_19[1 /*3*/] = { 1215.738f, 3586.6077f, 33.5131f };
	uLocal_26[0] = 277.7043f;
	uLocal_26[1] = 77.1113f;

	if (!unk_0x055111B11E6624FD(unk_0xC1A5EC5C986B98AD(), 0))
		unk_0xC2E3C377D893C17A(unk_0xC1A5EC5C986B98AD(), 1220.2024f, 3596.2805f, 33.259f, 1, 0, 0, 1);

	unk_0xDA6C666E27FEE6F3(1220.2024f, 3596.2805f, 33.259f);
	uLocal_18 = unk_0xABEEDBEF2BBDF5B3(joaat("cuban800"), uLocal_19[0 /*3*/], uLocal_26[0], 1, 1, 0);
	unk_0xCB8DD5B44DBC2DEB(uLocal_18, 1084227584);
	unk_0xE0A291F406691F03(joaat("cuban800"));

	if (!unk_0x055111B11E6624FD(unk_0xC1A5EC5C986B98AD(), 0))
		unk_0x4C18E9202CF6CACA(unk_0xC1A5EC5C986B98AD(), uLocal_18, -1);

	while (true)
	{
		func_1();
		SYSTEM::WAIT(0);
	}

	return;
}

void func_1() // Position - 0x136
{
	if (!unk_0x055111B11E6624FD(unk_0xC1A5EC5C986B98AD(), 0))
		unk_0x35DD50D05C962B6A(unk_0xC1A5EC5C986B98AD());

	if (unk_0x7DE17ACDD8BA2642(uLocal_18))
		unk_0x2728CF7242F08BD5(&uLocal_18);

	unk_0xE0A291F406691F03(joaat("cuban800"));
	unk_0x675D9C12C73D3DE7();
	return;
}

