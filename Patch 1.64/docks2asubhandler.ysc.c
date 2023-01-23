#region Local Var
	var uLocal_0 = 0;
	var uLocal_1 = 0;
	int iLocal_2 = 0;
	var uScriptParam_0 = 0;
	var uScriptParam_1 = 0;
#endregion

void main() // Position - 0x0
{
	float num;

	if (unk_0x55EEDBBFDC6E810F(19))
		func_1();

	uLocal_0 = uScriptParam_0;
	uLocal_1 = uScriptParam_0.f_1;

	while (!IS_BIT_SET(iLocal_2, 1))
	{
		if (!IS_BIT_SET(iLocal_2, 0))
		{
			if (unk_0x7DE17ACDD8BA2642(uLocal_0))
			{
				if (unk_0xFBD273FDBCF0C5BD(uLocal_0, 0))
				{
					unk_0x85BAE84748AD1A23(uLocal_0, 0, 1);
					unk_0x2718E9CC165A99F6(uLocal_0, 1);
					unk_0x03879CC8EF9E3635(uLocal_0, 1, 1, 1, 1, 1, 0, 0, 0);
				
					if (unk_0x7DE17ACDD8BA2642(uLocal_1))
					{
						unk_0x85BAE84748AD1A23(uLocal_1, 0, 1);
						unk_0x2718E9CC165A99F6(uLocal_1, 1);
						unk_0x03879CC8EF9E3635(uLocal_1, 1, 1, 1, 1, 1, 0, 0, 0);
					}
				
					unk_0xECDAB41968FF21A8(&iLocal_2, 0);
				}
			}
		}
		else if (!unk_0x055111B11E6624FD(unk_0xC1A5EC5C986B98AD(), 0))
		{
			if (unk_0xFBD273FDBCF0C5BD(uLocal_0, 0))
			{
				num = SYSTEM::VDIST2(unk_0x30BE8A934C020461(unk_0xC1A5EC5C986B98AD(), 1), unk_0x30BE8A934C020461(uLocal_0, 1));
			
				if (num > 90000f)
					unk_0xECDAB41968FF21A8(&iLocal_2, 1);
				else if (num > 40000f && !unk_0x865259F0333CAA4B(uLocal_0))
					unk_0xECDAB41968FF21A8(&iLocal_2, 1);
			}
			else
			{
				unk_0xECDAB41968FF21A8(&iLocal_2, 1);
			}
		}
	
		SYSTEM::WAIT(0);
	}

	func_1();
	return;
}

void func_1() // Position - 0x105
{
	unk_0x0E4B6CF706BE8AA4(&uLocal_0);
	unk_0xE1D0FB923395DF66(&uLocal_1);
	unk_0x675D9C12C73D3DE7();
	return;
}

