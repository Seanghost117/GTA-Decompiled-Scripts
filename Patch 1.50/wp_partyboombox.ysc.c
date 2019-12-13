#region Local Var
    int iLocal_0 = 0;
    var uScriptParam_0 = 0;
    var uScriptParam_1 = 5;
    var uScriptParam_2 = 0;
    var uScriptParam_3 = 0;
    var uScriptParam_4 = 0;
    var uScriptParam_5 = 0;
    var uScriptParam_6 = 0;
    var uScriptParam_7 = 0;
    var uScriptParam_8 = 0;
    var uScriptParam_9 = 0;
    var uScriptParam_10 = 0;
    var uScriptParam_11 = 0;
    var uScriptParam_12 = 0;
    var uScriptParam_13 = 0;
    var uScriptParam_14 = 0;
    var uScriptParam_15 = 0;
    var uScriptParam_16 = 0;
    var uScriptParam_17 = 5;
    var uScriptParam_18 = 0;
    var uScriptParam_19 = 0;
    var uScriptParam_20 = 0;
    var uScriptParam_21 = 0;
    var uScriptParam_22 = 0;
#endregion

void __EntryFunction__()//Position - 0x0
{
    if (unk_0x222F76006659B0EB(joaat("wp_partyboombox")) > 1)
    {
        unk_0x9C9E32388A7886A2();
    }
    if (unk_0xD4BE58A7E3E102AC(18))
    {
        func_1();
    }
    while (true)
    {
        SYSTEM::WAIT(0);
        if (!unk_0xBE1BAAD38691E6DD())
        {
            iLocal_0 = 3;
        }
        switch (iLocal_0)
        {
            case 0:
                if (unk_0xA63165E74E9A042B() >= 22 || unk_0xA63165E74E9A042B() <= 4)
                {
                    iLocal_0 = 1;
                }
                else
                {
                    func_1();
                }
                break;
            
            case 1:
                if (!unk_0x5DE3F91EB19E0CF2("ID2_21_G_Night"))
                {
                    unk_0xE6B6437B6D597799("ID2_21_G_Night");
                    iLocal_0 = 2;
                }
                break;
            
            case 2:
                break;
            
            case 3:
                if (!unk_0xC53766CB7176C7C8() && !unk_0x16587C6F71675106())
                {
                    func_1();
                }
                break;
        }
    }
}

void func_1()//Position - 0xB1
{
    if (unk_0x5DE3F91EB19E0CF2("ID2_21_G_Night"))
    {
        unk_0xB42283119B3F4732("ID2_21_G_Night");
    }
    unk_0x9C9E32388A7886A2();
}

