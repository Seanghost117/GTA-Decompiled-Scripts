#region Local Var
    int iLocal_0 = 0;
    vector3 vLocal_1 = { 0f, 0f, 0f };
    int iLocal_2 = 0;
    float fLocal_3 = 0f;
    int iLocal_4 = 0;
    int iLocal_5 = 0;
    bool bLocal_6 = 0;
    int iLocal_7 = 0;
#endregion

void __EntryFunction__()//Position - 0x0
{
    vLocal_1 = { 613f, 6438f, 31f };
    fLocal_3 = 5f;
    iLocal_4 = 1;
    unk_0x1A41D12A38E6D79F(1);
    if (unk_0xD4BE58A7E3E102AC(3))
    {
        func_1();
    }
    unk_0x4D39BA8F87B38DDD(0);
    unk_0xCC3033DD77AC1086();
    if (!unk_0x2BF5E63466422C38(unk_0x0FA8183DAD2B3203()))
    {
        unk_0xCB3446C6A91D1A78(unk_0x0FA8183DAD2B3203(), 626.68f, 6442.31f, 30.88f, 1, 0, 0, 1);
        unk_0x5A2B7C446C0CF087(unk_0x0FA8183DAD2B3203(), -177f);
        unk_0xB489E71A45CDC02F(0);
    }
    unk_0x6BB2B1818CAE531E(joaat("freight"));
    unk_0x6BB2B1818CAE531E(joaat("freightcar"));
    unk_0x6BB2B1818CAE531E(joaat("freightgrain"));
    unk_0x6BB2B1818CAE531E(joaat("freightcont1"));
    unk_0x6BB2B1818CAE531E(joaat("freightcont2"));
    unk_0x6BB2B1818CAE531E(joaat("tankercar"));
    unk_0x6BB2B1818CAE531E(868868440);
    while ((((((!unk_0x6DF9C43E3CC645BC(joaat("freight")) || !unk_0x6DF9C43E3CC645BC(joaat("freightcar"))) || !unk_0x6DF9C43E3CC645BC(joaat("freightgrain"))) || !unk_0x6DF9C43E3CC645BC(joaat("freightcont1"))) || !unk_0x6DF9C43E3CC645BC(joaat("freightcont2"))) || !unk_0x6DF9C43E3CC645BC(joaat("tankercar"))) || !unk_0x6DF9C43E3CC645BC(868868440))
    {
        SYSTEM::WAIT(0);
    }
    while (true)
    {
        SYSTEM::WAIT(0);
        if (!unk_0x2BF5E63466422C38(unk_0x0FA8183DAD2B3203()))
        {
            if (iLocal_5)
            {
                if (unk_0xD4B321D9096B01FC(iLocal_0))
                {
                    unk_0x7CC3EF9FB8953302(&iLocal_0);
                }
                iLocal_0 = unk_0xAC0DC8C4017DCDB1(iLocal_2, vLocal_1, iLocal_4);
                iLocal_5 = 0;
            }
            if (iLocal_7)
            {
                vLocal_1 = { unk_0x72DDC427E84EEBD1() };
                iLocal_7 = 0;
            }
            if (unk_0xD960230552BC4165(iLocal_0, 0) && !unk_0xF4B969E0807E76C7(iLocal_0, 0))
            {
                unk_0x7B99DFAED518FAEA(iLocal_0, fLocal_3);
                unk_0xEED94CF58535C4D0(iLocal_0, fLocal_3);
            }
            if (bLocal_6)
            {
                func_1();
            }
        }
    }
}

void func_1()//Position - 0x1A5
{
    unk_0x4D39BA8F87B38DDD(1);
    unk_0x9C9E32388A7886A2();
}

