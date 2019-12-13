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
    char* sLocal_18 = NULL;
    var uLocal_19 = 0;
    var uLocal_20 = 0;
    var uLocal_21 = 0;
    var uLocal_22 = 0;
    float fLocal_23 = 0f;
    float fLocal_24 = 0f;
    float fLocal_25 = 0f;
    var uLocal_26 = 0;
    var uLocal_27 = 0;
    int iLocal_28 = 0;
    float fLocal_29 = 0f;
    var uLocal_30 = 0;
    var uLocal_31 = 0;
    var uLocal_32 = 0;
    float fLocal_33 = 0f;
    float fLocal_34 = 0f;
    var uLocal_35[20] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
    int iLocal_36 = 0;
    int iLocal_37 = 0;
    int iLocal_38 = 0;
    bool bLocal_39 = 0;
    int iLocal_40 = 0;
    bool bLocal_41 = 0;
    var uLocal_42 = 0;
    float fLocal_43 = 0f;
    int iLocal_44 = 0;
    vector3 vLocal_45 = { 0f, 0f, 0f };
#endregion

void __EntryFunction__()//Position - 0x0
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
    sLocal_18 = "NULL";
    fLocal_23 = 80f;
    fLocal_24 = 140f;
    fLocal_25 = 180f;
    iLocal_28 = 3;
    fLocal_29 = 0f;
    fLocal_33 = -0.0375f;
    fLocal_34 = 0.17f;
    fLocal_43 = 277.7314f;
    vLocal_45 = { -196.045f, -580.13f, 135.0004f };
    unk_0x5800A2599806C837(800);
    func_20();
    while (true)
    {
        unk_0x7ACA792118C62D87();
        func_19();
        if (func_7() || uLocal_42)
        {
            func_3();
        }
        if (!iLocal_38)
        {
            if (!iLocal_37 && unk_0x260395BA7F0C83CB())
            {
                unk_0xCB3446C6A91D1A78(unk_0x0FA8183DAD2B3203(), vLocal_45, 1, 0, 0, 1);
                unk_0x5A2B7C446C0CF087(unk_0x0FA8183DAD2B3203(), fLocal_43);
                unk_0x155C3BED27FDCC1D(vLocal_45, 2500f, 0);
                unk_0xB489E71A45CDC02F(0);
                iLocal_37 = 1;
            }
            else if (unk_0xC53766CB7176C7C8())
            {
                if (!bLocal_41)
                {
                    bLocal_41 = func_2();
                }
                else if (!bLocal_39)
                {
                    bLocal_39 = func_1();
                }
                else
                {
                    unk_0xCF33E56642B34516(800);
                    iLocal_38 = 1;
                }
            }
        }
    }
}

int func_1()//Position - 0x121
{
    if (!unk_0xD86ECD84D4B257FF(iLocal_44, "garage_decor_01"))
    {
        unk_0x4B41DB50550FC47E(iLocal_44, "garage_decor_01");
    }
    else
    {
        unk_0x996621493F6A3486(iLocal_44);
        return 1;
    }
    return 0;
}

int func_2()//Position - 0x14B
{
    iLocal_44 = unk_0x1B15167A6E6F7820(unk_0x0FA8183DAD2B3203());
    if (unk_0x61837007ACF2F2C2(iLocal_44))
    {
        if (!iLocal_40)
        {
            unk_0x38BE6DF48F0AC974(iLocal_44);
            iLocal_40 = 1;
        }
        else if (unk_0x2A29278E6E14C161(iLocal_44))
        {
            unk_0xBB907B119D16E32C(iLocal_44);
            return 1;
        }
    }
    return 0;
}

void func_3()//Position - 0x18C
{
    int iVar0;
    
    iVar0 = 0;
    while (iVar0 < iLocal_36)
    {
        func_5(iVar0);
        iVar0++;
    }
    func_4();
}

void func_4()//Position - 0x1B1
{
    unk_0x9C9E32388A7886A2();
}

void func_5(int iParam0)//Position - 0x1BD
{
    func_6(&(uLocal_35[iParam0]));
    unk_0xA019A9258930EC41((unk_0x0336A7593E5AD83F(false, 0) - 1));
}

void func_6(var uParam0)//Position - 0x1DB
{
    int iVar0;
    
    if (unk_0x9C625F4590C97F13(*uParam0))
    {
        if (!unk_0xF42AC9E0924DC59B(*uParam0))
        {
        }
    }
    if (unk_0x8A7BBB98FFB32893(*uParam0))
    {
        iVar0 = unk_0xAEA6D4EC961DFA03(*uParam0);
        unk_0x55A0904E82955EC9(&iVar0);
    }
}

int func_7()//Position - 0x214
{
    var uVar0;
    
    func_15(&uVar0);
    if (Global_140852 == 0)
    {
        if (!unk_0x393E9918BC37548A())
        {
            return 1;
        }
    }
    if (func_14())
    {
        return 1;
    }
    if (Global_258E39)
    {
        return 1;
    }
    if (func_13())
    {
        return 1;
    }
    if (func_12(159))
    {
        if (!func_11())
        {
            return 1;
        }
    }
    if (func_12(157))
    {
        return 1;
    }
    if (!unk_0x2A983C9CF4EE0D5E())
    {
        return 1;
    }
    if (func_8() != 0)
    {
        if (unk_0x222F76006659B0EB(func_8()) == 0)
        {
            return 1;
        }
    }
    return 0;
}

int func_8()//Position - 0x29E
{
    switch (func_10())
    {
        case 0:
            return func_9();
            break;
        
        case 2:
            return joaat("creator");
            break;
    }
    return 0;
}

int func_9()//Position - 0x2D1
{
    switch (Global_258E9F)
    {
        case 0:
            return joaat("freemode");
        
        default:
    }
    return joaat("freemode");
}

int func_10()//Position - 0x2F5
{
    return Global_7810;
}

bool func_11()//Position - 0x300
{
    return Global_255E41.f_256;
}

int func_12(int iParam0)//Position - 0x30F
{
    if (unk_0xD076BFB919B20653(1, iParam0))
    {
        return 1;
    }
    return 0;
}

bool func_13()//Position - 0x326
{
    return Global_258577;
}

bool func_14()//Position - 0x332
{
    return Global_255E41.f_251;
}

void func_15(var uParam0)//Position - 0x341
{
    int iVar0;
    int iVar1;
    int iVar2;
    vector3 vVar3;
    
    iVar0 = 0;
    while (iVar0 < unk_0xEC6B468B6F580489(1))
    {
        iVar1 = unk_0x87C4D2EB1080B8EA(1, iVar0);
        if (iVar1 == 174)
        {
            unk_0x3C1EC42A2CC175C5(1, iVar0, &iVar2, 2);
            switch (iVar2)
            {
                case -1773456834:
                    func_16(iVar0);
                    break;
                
                case -498955166:
                    unk_0x3C1EC42A2CC175C5(1, iVar0, &vVar3, 4);
                    if (vVar3.z == 1934809180)
                    {
                        *uParam0 = 1;
                    }
                    break;
                }
        }
        iVar0++;
    }
}

void func_16(int iParam0)//Position - 0x3B4
{
    vector3 vVar0;
    int iVar1;
    int iVar2;
    bool bVar3;
    
    if (unk_0x3C1EC42A2CC175C5(1, iParam0, &vVar0, 3))
    {
        if (func_18(vVar0.y, 1, 1))
        {
            iVar1 = unk_0x23625FE58BACEBFD(vVar0.y);
            if (unk_0xD4B321D9096B01FC(iVar1))
            {
                if (unk_0x5294582CE404D3F4(iVar1, 0))
                {
                    iVar2 = unk_0x4D57D3E5ECE15A41(iVar1, 0);
                    if (unk_0x3D65AB2C3D476E32(iVar2, vVar0.z) && unk_0xF77CF4BC35906B30())
                    {
                        if (func_17(iVar2, &bVar3))
                        {
                            unk_0x302E0AC3BB715211(iVar2, vVar0.z);
                        }
                        if (bVar3)
                        {
                            unk_0xF25956700ADFD77F(&iVar2);
                        }
                    }
                }
            }
        }
    }
}

int func_17(int iParam0, var uParam1)//Position - 0x435
{
    if (unk_0xD4B321D9096B01FC(iParam0))
    {
        if (!unk_0x00123AB82C5FAC28(iParam0))
        {
            if (unk_0xDCDE4069CE0EA4A6(iParam0))
            {
                if (!unk_0x89771D1B3DD40E7A(unk_0x7F375072508F738F(iParam0)))
                {
                    unk_0xE5C667CF3B4642D2(iParam0, 0, 1);
                    *uParam1 = 1;
                }
            }
        }
        if (unk_0x532AFD85DAA91F63(iParam0, 0))
        {
            if (unk_0x77FF1FAF6F41CA71(iParam0))
            {
                return 1;
            }
        }
    }
    return 0;
}

int func_18(int iParam0, bool bParam1, bool bParam2)//Position - 0x494
{
    int iVar0;
    
    iVar0 = iParam0;
    if (iVar0 != -1)
    {
        if (unk_0xD56C8C2B75BF9665(iParam0))
        {
            if (bParam1)
            {
                if (!unk_0xD699DB8EAB756F25(iParam0))
                {
                    return 0;
                }
            }
            if (bParam2)
            {
                if (!Global_2531AD.f_3[iVar0])
                {
                    return 0;
                }
            }
            return 1;
        }
    }
    return 0;
}

void func_19()//Position - 0x4DE
{
    SYSTEM::WAIT(0);
}

void func_20()//Position - 0x4EB
{
    unk_0x4CF6FBF2580A447D(32, 0, -1);
    func_22(0, -1, 0);
    unk_0xCCD47D736BFD5DE3(&uLocal_35, 21);
    if (!func_21())
    {
        func_3();
    }
    unk_0x50E03C7D74E352C4(0);
    if (!unk_0x5DE3F91EB19E0CF2("imp_dt1_02_cargarage_a"))
    {
        unk_0xE6B6437B6D597799("imp_dt1_02_cargarage_a");
    }
}

int func_21()//Position - 0x52E
{
    int iVar0;
    
    iVar0 = 0;
    while (true)
    {
        iVar0++;
        if (!unk_0x393E9918BC37548A())
        {
            return 0;
        }
        if (unk_0x7A22E0DA3B8BAF4B())
        {
            return 1;
        }
        if (func_14())
        {
            return 0;
        }
        if (func_12(157))
        {
            return 0;
        }
        if (iVar0 >= 3600)
        {
            return 0;
        }
        SYSTEM::WAIT(0);
    }
    return 0;
}

int func_22(int iParam0, int iParam1, bool bParam2)//Position - 0x587
{
    int iVar0;
    
    iVar0 = unk_0x306B26A377F9A5BE();
    while (iVar0 != 2)
    {
        if (((iVar0 == 3 || iVar0 == 4) || iVar0 == 5) || iVar0 == 6)
        {
            if (!bParam2)
            {
                func_4();
            }
            else
            {
                return 0;
            }
        }
        if (!func_23())
        {
            if (iParam0 == 0)
            {
                if (!unk_0x393E9918BC37548A())
                {
                    if (!bParam2)
                    {
                        func_4();
                    }
                    else
                    {
                        return 0;
                    }
                }
                if (func_14())
                {
                    if (!bParam2)
                    {
                        func_4();
                    }
                    else
                    {
                        return 0;
                    }
                }
                if (func_12(157))
                {
                    if (!bParam2)
                    {
                        func_4();
                    }
                    else
                    {
                        return 0;
                    }
                }
            }
            else if (!unk_0xA2E986F74092E569())
            {
                if (!bParam2)
                {
                    func_4();
                }
                else
                {
                    return 0;
                }
            }
        }
        SYSTEM::WAIT(0);
        iVar0 = unk_0x306B26A377F9A5BE();
    }
    if (iParam1 > -1)
    {
        Global_1406F5 = iVar0;
    }
    if (iParam0 == 0)
    {
        if (!unk_0x393E9918BC37548A())
        {
            if (!bParam2)
            {
                func_4();
            }
            else
            {
                return 0;
            }
        }
    }
    else if (!unk_0xA2E986F74092E569())
    {
        if (!bParam2)
        {
            func_4();
        }
        else
        {
            return 0;
        }
    }
    return 1;
}

bool func_23()//Position - 0x69C
{
    return Global_140852;
}

