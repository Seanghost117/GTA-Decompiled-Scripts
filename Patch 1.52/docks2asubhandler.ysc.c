#region Local Var
	int iLocal_0 = 0;
	int iLocal_1 = 0;
	int iLocal_2 = 0;
	struct<2> ScriptParam_0 = { 0, 0 } ;
#endregion

void __EntryFunction__()
{
	float fVar0;
	
	if (unk_0xED06FD5709A59F02(19))
	{
		func_1();
	}
	iLocal_0 = ScriptParam_3;
	iLocal_1 = ScriptParam_3.f_1;
	while (!unk_0xCE990E643CD9D0E5(iLocal_2, 1))
	{
		if (!unk_0xCE990E643CD9D0E5(iLocal_2, 0))
		{
			if (unk_0xAE06B9E39EBDE049(iLocal_0))
			{
				if (unk_0x80FF6C016CDB0FAF(iLocal_0, 0))
				{
					unk_0x4F3C4F457D44BB0F(iLocal_0, false, 1);
					unk_0x6A8F948698B360B4(iLocal_0, true);
					unk_0x52090984B5C8A3E4(iLocal_0, true, true, true, true, true, 0, 0, 0);
					if (unk_0xAE06B9E39EBDE049(iLocal_1))
					{
						unk_0x4F3C4F457D44BB0F(iLocal_1, false, 1);
						unk_0x6A8F948698B360B4(iLocal_1, true);
						unk_0x52090984B5C8A3E4(iLocal_1, true, true, true, true, true, 0, 0, 0);
					}
					unk_0xBE20AB8238688965(&iLocal_2, 0);
				}
			}
		}
		else if (!unk_0xA59F96B50B97E63C(unk_0x9B0761B4C3EB8BC7(), 0))
		{
			if (unk_0x80FF6C016CDB0FAF(iLocal_0, 0))
			{
				fVar0 = vdist2(unk_0x3E4D3CCC220BDFB1(unk_0x9B0761B4C3EB8BC7(), true), unk_0x3E4D3CCC220BDFB1(iLocal_0, true));
				if (fVar0 > 90000f)
				{
					unk_0xBE20AB8238688965(&iLocal_2, 1);
				}
				else if (fVar0 > 40000f && !unk_0xA38BFCB05DBE439D(iLocal_0))
				{
					unk_0xBE20AB8238688965(&iLocal_2, 1);
				}
			}
			else
			{
				unk_0xBE20AB8238688965(&iLocal_2, 1);
			}
		}
		wait(0);
	}
	func_1();
}

void func_1()
{
	unk_0xE730EAF558C97567(&iLocal_0);
	unk_0x95047B5978C3543C(&iLocal_1);
	unk_0xD39E529EBE5DB04F();
}

