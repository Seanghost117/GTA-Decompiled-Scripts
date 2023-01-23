#region Local Var
	var uLocal_0 = 0;
	var uLocal_1 = 0;
	int iLocal_2 = 0;
	var uLocal_3 = 0;
	var uLocal_4 = 0;
	var uLocal_5 = 0;
	var uLocal_6 = 0;
	var uLocal_7 = 0;
	var uLocal_8 = 0;
	var uLocal_9 = 0;
	var uScriptParam_0 = 0;
#endregion

void main() // Position - 0x0
{
	var unk;
	var unk4;
	var unk7;
	float num;

	if (unk_0x55EEDBBFDC6E810F(2))
		func_4();

	if (unk_0x7DE17ACDD8BA2642(uScriptParam_0))
	{
		unk_0x2718E9CC165A99F6(uScriptParam_0, 1);
		uLocal_4 = { unk_0x30BE8A934C020461(uScriptParam_0, 1) };
		uLocal_7 = { unk_0x000D018EA42688BA(uScriptParam_0, 2) };
	}

	while (true)
	{
		SYSTEM::WAIT(0);
	
		if (unk_0x7DE17ACDD8BA2642(uScriptParam_0))
		{
			if (unk_0x4B85D97500605AE9(uScriptParam_0))
			{
				switch (iLocal_2)
				{
					case 0:
						if (unk_0x28B891F3A70F9A2A(uScriptParam_0))
						{
							unk_0x852EC2A7DE66202D(joaat("p_abat_roller_1_col"));
						
							if (unk_0x0CBB7C273DED26E7(joaat("p_abat_roller_1_col")))
							{
								if (!func_3(uLocal_4, 0f, 0f, 0f, false))
								{
									uLocal_3 = unk_0xF19D6C0E8B56BE23(joaat("p_abat_roller_1_col"), uLocal_4, 1, 1, 0);
									unk_0x464B5B0F22497FC5(uLocal_3, uLocal_7, 2, 1);
									iLocal_2 = 1;
								}
							}
						}
						break;
				
					case 1:
						if (unk_0x28B891F3A70F9A2A(uScriptParam_0))
						{
							if (unk_0x24B651D85CCE5EB4(joaat("michael2")) > 0)
							{
								unk_0x28818732C8F0F80E("map_objects");
							
								if (unk_0x2BBF749E555360DC("map_objects"))
									iLocal_2 = 2;
							}
						}
						break;
				
					case 2:
						if (unk_0x28B891F3A70F9A2A(uScriptParam_0))
						{
							if (unk_0x24B651D85CCE5EB4(joaat("michael2")) > 0)
							{
								if (Global_97112)
								{
									if (unk_0x2BBF749E555360DC("map_objects"))
									{
										unk_0xB07A1B0E812C8E61(uScriptParam_0, "P_Abat_roller_1_open", "map_objects", 1f, 0, 1, 0, 0, 0);
										iLocal_2 = 3;
									}
								}
							}
						}
						break;
				
					case 3:
						num = 0.35f;
						unk = { uLocal_4 + { 3.45f, 0f, 0f } };
					
						if (unk_0x7DE17ACDD8BA2642(uLocal_3))
						{
							unk4 = { unk_0x30BE8A934C020461(uLocal_3, 1) };
						
							if (!func_2(unk4, unk, 0.1f, false))
							{
								unk7 = { unk - unk4 };
								unk_0xC2E3C377D893C17A(uLocal_3, unk4 + (func_1(unk7) * F2V(unk_0x290D4E218346D595()) * { num, num, num }), 1, 0, 0, 1);
							}
							else
							{
								Global_97113 = 1;
								iLocal_2 = 4;
							}
						}
						break;
				
					case 4:
						break;
				}
			}
			else
			{
				func_4();
			}
		}
		else
		{
			func_4();
		}
	}

	return;
}

Vector3 func_1(float fParam0, var uParam1, var uParam2) // Position - 0x1C6
{
	float num;
	float num2;

	num = SYSTEM::VMAG(fParam0);

	if (num != 0f)
	{
		num2 = 1f / num;
		fParam0 = { fParam0 * { num2, num2, num2 } };
	}
	else
	{
		fParam0 = 0f;
		fParam0.f_1 = 0f;
		fParam0.f_2 = 0f;
	}

	return fParam0;
}

BOOL func_2(float fParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, float fParam6, BOOL bParam7) // Position - 0x205
{
	if (fParam6 < 0f)
		fParam6 = 0f;

	if (!bParam7)
		if (unk_0x2655A8EC638E4FD1(fParam0 - uParam3) <= fParam6)
			if (unk_0x2655A8EC638E4FD1(fParam0.f_1 - uParam3.f_1) <= fParam6)
				if (unk_0x2655A8EC638E4FD1(fParam0.f_2 - uParam3.f_2) <= fParam6)
					return true;
	else if (unk_0x2655A8EC638E4FD1(fParam0 - uParam3) <= fParam6)
		if (unk_0x2655A8EC638E4FD1(fParam0.f_1 - uParam3.f_1) <= fParam6)
			return true;

	return false;
}

BOOL func_3(float fParam0, var uParam1, var uParam2, float fParam3, float fParam4, float fParam5, BOOL bParam6) // Position - 0x280
{
	if (bParam6)
		return fParam0 == fParam3 && fParam0.f_1 == fParam3.f_1;

	return fParam0 == fParam3 && fParam0.f_1 == fParam3.f_1 && fParam0.f_2 == fParam3.f_2;
}

void func_4() // Position - 0x2C7
{
	if (unk_0x7DE17ACDD8BA2642(uLocal_3))
		unk_0xEF078F1FEE785D3E(&uLocal_3);

	unk_0xE0A291F406691F03(joaat("p_abat_roller_1_col"));
	func_5("ob_abatdoor Terminated >>>>>>>>>>>>>>>>>\\n");
	unk_0x675D9C12C73D3DE7();
	return;
}

void func_5(char* sParam0) // Position - 0x2F2
{
	func_6(sParam0);
	return;
}

void func_6(char* sParam0) // Position - 0x300
{
	unk_0x4310A0DB886F9FED(sParam0, sParam0);
	return;
}

